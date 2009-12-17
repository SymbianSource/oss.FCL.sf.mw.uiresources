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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004ff33 };

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
0xae17,	// (0x0005ad4a) Screen

0xae23,	// (0x0005ad56) application_window_ParamLimits

0xae23,	// (0x0005ad56) application_window

0x216b,	// (0x0005209e) screen_g1

0xae5b,	// (0x0005ad8e) area_bottom_pane_ParamLimits

0xae5b,	// (0x0005ad8e) area_bottom_pane

0xf294,	// (0x0005f1c7) area_top_pane_ParamLimits

0xf294,	// (0x0005f1c7) area_top_pane

0xf332,	// (0x0005f265) main_pane_ParamLimits

0xf332,	// (0x0005f265) main_pane

0x2175,	// (0x000520a8) misc_graphics

0xcf8f,	// (0x0005cec2) battery_pane_ParamLimits

0xcf8f,	// (0x0005cec2) battery_pane

0x5349,	// (0x0005527c) bg_status_flat_pane_g8

0x5351,	// (0x00055284) bg_status_flat_pane_g9

0x472f,	// (0x00054662) context_pane_ParamLimits

0x472f,	// (0x00054662) context_pane

0xd106,	// (0x0005d039) navi_pane_ParamLimits

0xd106,	// (0x0005d039) navi_pane

0xd18f,	// (0x0005d0c2) signal_pane_ParamLimits

0xd18f,	// (0x0005d0c2) signal_pane

0x0008,

0xf8b2,	// (0x0005f7e5) bg_status_flat_pane_g

0xd21f,	// (0x0005d152) status_pane_g1_ParamLimits

0xd21f,	// (0x0005d152) status_pane_g1

0xd235,	// (0x0005d168) status_pane_g2_ParamLimits

0xd235,	// (0x0005d168) status_pane_g2

0x496f,	// (0x000548a2) status_pane_g3_ParamLimits

0x496f,	// (0x000548a2) status_pane_g3

0x0004,

0xf7e5,	// (0x0005f718) status_pane_g_ParamLimits

0xf7e5,	// (0x0005f718) status_pane_g

0xd241,	// (0x0005d174) title_pane_ParamLimits

0xd241,	// (0x0005d174) title_pane

0xd29e,	// (0x0005d1d1) uni_indicator_pane_ParamLimits

0xd29e,	// (0x0005d1d1) uni_indicator_pane

0x3f5c,	// (0x00053e8f) bg_list_pane_ParamLimits

0x3f5c,	// (0x00053e8f) bg_list_pane

0xc72e,	// (0x0005c661) find_pane

0xc736,	// (0x0005c669) listscroll_app_pane_ParamLimits

0xc736,	// (0x0005c669) listscroll_app_pane

0x3f90,	// (0x00053ec3) listscroll_form_pane

0xc742,	// (0x0005c675) listscroll_gen_pane_ParamLimits

0xc742,	// (0x0005c675) listscroll_gen_pane

0x3f90,	// (0x00053ec3) listscroll_set_pane

0x5f02,	// (0x00055e35) main_idle_act_pane

0x3c40,	// (0x00053b73) main_idle_trad_pane

0x3c40,	// (0x00053b73) main_list_empty_pane

0x3fbe,	// (0x00053ef1) main_midp_pane

0x3fca,	// (0x00053efd) main_pane_g1_ParamLimits

0x3fca,	// (0x00053efd) main_pane_g1

0xc756,	// (0x0005c689) popup_ai_message_window_ParamLimits

0xc756,	// (0x0005c689) popup_ai_message_window

0xc7f6,	// (0x0005c729) popup_fep_china_uni_window_ParamLimits

0xc7f6,	// (0x0005c729) popup_fep_china_uni_window

0x40e8,	// (0x0005401b) popup_fep_japan_candidate_window_ParamLimits

0x40e8,	// (0x0005401b) popup_fep_japan_candidate_window

0x4112,	// (0x00054045) popup_fep_japan_predictive_window_ParamLimits

0x4112,	// (0x00054045) popup_fep_japan_predictive_window

0xc856,	// (0x0005c789) popup_find_window

0xc873,	// (0x0005c7a6) popup_grid_graphic_window_ParamLimits

0xc873,	// (0x0005c7a6) popup_grid_graphic_window

0x4183,	// (0x000540b6) popup_large_graphic_colour_window

0xc917,	// (0x0005c84a) popup_menu_window_ParamLimits

0xc917,	// (0x0005c84a) popup_menu_window

0xcb03,	// (0x0005ca36) popup_note_image_window

0xcac3,	// (0x0005c9f6) popup_note_wait_window_ParamLimits

0xcac3,	// (0x0005c9f6) popup_note_wait_window

0xcb1b,	// (0x0005ca4e) popup_note_window_ParamLimits

0xcb1b,	// (0x0005ca4e) popup_note_window

0xcbc9,	// (0x0005cafc) popup_query_code_window_ParamLimits

0xcbc9,	// (0x0005cafc) popup_query_code_window

0x43ef,	// (0x00054322) popup_query_data_code_window_ParamLimits

0x43ef,	// (0x00054322) popup_query_data_code_window

0xcc09,	// (0x0005cb3c) popup_query_data_window_ParamLimits

0xcc09,	// (0x0005cb3c) popup_query_data_window

0xcd3b,	// (0x0005cc6e) popup_query_sat_info_window_ParamLimits

0xcd3b,	// (0x0005cc6e) popup_query_sat_info_window

0xcde6,	// (0x0005cd19) popup_snote_single_graphic_window_ParamLimits

0xcde6,	// (0x0005cd19) popup_snote_single_graphic_window

0xcde6,	// (0x0005cd19) popup_snote_single_text_window_ParamLimits

0xcde6,	// (0x0005cd19) popup_snote_single_text_window

0x448a,	// (0x000543bd) popup_sub_window_general

0x45d0,	// (0x00054503) popup_window_general_ParamLimits

0x45d0,	// (0x00054503) popup_window_general

0x45e9,	// (0x0005451c) power_save_pane

0xb7f0,	// (0x0005b723) control_pane_g1_ParamLimits

0xb7f0,	// (0x0005b723) control_pane_g1

0x0bc0,	// (0x00050af3) control_pane_g2_ParamLimits

0x0bc0,	// (0x00050af3) control_pane_g2

0x3f0d,	// (0x00053e40) control_pane_g3_ParamLimits

0x3f0d,	// (0x00053e40) control_pane_g3

0x0007,

0xf7cd,	// (0x0005f700) control_pane_g_ParamLimits

0xf7cd,	// (0x0005f700) control_pane_g

0xb827,	// (0x0005b75a) control_pane_t1_ParamLimits

0xb827,	// (0x0005b75a) control_pane_t1

0xb885,	// (0x0005b7b8) control_pane_t2_ParamLimits

0xb885,	// (0x0005b7b8) control_pane_t2

0x0002,

0xf7de,	// (0x0005f711) control_pane_t_ParamLimits

0xf7de,	// (0x0005f711) control_pane_t

0x3e2e,	// (0x00053d61) navi_navi_volume_pane_cp1

0x3e37,	// (0x00053d6a) status_small_icon_pane

0x3e3f,	// (0x00053d72) status_small_pane_g1_ParamLimits

0x3e3f,	// (0x00053d72) status_small_pane_g1

0x3e73,	// (0x00053da6) status_small_pane_g2_ParamLimits

0x3e73,	// (0x00053da6) status_small_pane_g2

0x3e7f,	// (0x00053db2) status_small_pane_g3_ParamLimits

0x3e7f,	// (0x00053db2) status_small_pane_g3

0x3e8b,	// (0x00053dbe) status_small_pane_g4_ParamLimits

0x3e8b,	// (0x00053dbe) status_small_pane_g4

0x3e97,	// (0x00053dca) status_small_pane_g5_ParamLimits

0x3e97,	// (0x00053dca) status_small_pane_g5

0x3ea6,	// (0x00053dd9) status_small_pane_g6_ParamLimits

0x3ea6,	// (0x00053dd9) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0005f6ef) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0005f6ef) status_small_pane_g

0x3ed6,	// (0x00053e09) status_small_pane_t1

0x3ef9,	// (0x00053e2c) status_small_wait_pane_ParamLimits

0x3ef9,	// (0x00053e2c) status_small_wait_pane

0xc54f,	// (0x0005c482) aid_levels_signal_ParamLimits

0xc54f,	// (0x0005c482) aid_levels_signal

0xc567,	// (0x0005c49a) signal_pane_g1_ParamLimits

0xc567,	// (0x0005c49a) signal_pane_g1

0xc582,	// (0x0005c4b5) signal_pane_g2_ParamLimits

0xc582,	// (0x0005c4b5) signal_pane_g2

0x0001,

0xf751,	// (0x0005f684) signal_pane_g_ParamLimits

0xf751,	// (0x0005f684) signal_pane_g

0x3707,	// (0x0005363a) context_pane_g1

0xafd8,	// (0x0005af0b) title_pane_g1

0xb00d,	// (0x0005af40) title_pane_t1

0x221d,	// (0x00052150) title_pane_t2

0x2243,	// (0x00052176) title_pane_t3

0x0002,

0xf59b,	// (0x0005f4ce) title_pane_t

0xd2c6,	// (0x0005d1f9) aid_levels_battery_ParamLimits

0xd2c6,	// (0x0005d1f9) aid_levels_battery

0xd2e2,	// (0x0005d215) battery_pane_g1_ParamLimits

0xd2e2,	// (0x0005d215) battery_pane_g1

0xd2ff,	// (0x0005d232) battery_pane_g2_ParamLimits

0xd2ff,	// (0x0005d232) battery_pane_g2

0x0001,

0xf7f0,	// (0x0005f723) battery_pane_g_ParamLimits

0xf7f0,	// (0x0005f723) battery_pane_g

0xd522,	// (0x0005d455) uni_indicator_pane_g1

0xd537,	// (0x0005d46a) uni_indicator_pane_g2

0xd54c,	// (0x0005d47f) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0005f88d) uni_indicator_pane_g

0x3aae,	// (0x000539e1) navi_icon_pane_ParamLimits

0x3aae,	// (0x000539e1) navi_icon_pane

0x39f5,	// (0x00053928) navi_midp_pane

0x3aca,	// (0x000539fd) navi_navi_pane

0x3ad4,	// (0x00053a07) navi_text_pane_ParamLimits

0x3ad4,	// (0x00053a07) navi_text_pane

0x216b,	// (0x0005209e) status_small_wait_pane_g1

0x2687,	// (0x000525ba) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0005f888) status_small_wait_pane_g

0xd4c1,	// (0x0005d3f4) navi_navi_icon_text_pane

0xd4c9,	// (0x0005d3fc) navi_navi_pane_g1_ParamLimits

0xd4c9,	// (0x0005d3fc) navi_navi_pane_g1

0xd4db,	// (0x0005d40e) navi_navi_pane_g2_ParamLimits

0xd4db,	// (0x0005d40e) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0005f856) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0005f856) navi_navi_pane_g

0x59d8,	// (0x0005590b) navi_navi_tabs_pane

0xd4ed,	// (0x0005d420) navi_navi_text_pane

0xd4c1,	// (0x0005d3f4) navi_navi_volume_pane

0xd4af,	// (0x0005d3e2) navi_text_pane_t1

0xd4a3,	// (0x0005d3d6) navi_icon_pane_g1

0x58c9,	// (0x000557fc) navi_navi_text_pane_t1

0xbb08,	// (0x0005ba3b) navi_navi_volume_pane_g1

0xbb10,	// (0x0005ba43) volume_small_pane

0xd3ff,	// (0x0005d332) navi_navi_icon_text_pane_g1

0xd407,	// (0x0005d33a) navi_navi_icon_text_pane_t1

0x3aca,	// (0x000539fd) navi_tabs_2_long_pane

0x3aca,	// (0x000539fd) navi_tabs_2_pane

0x3aca,	// (0x000539fd) navi_tabs_3_long_pane

0x3aca,	// (0x000539fd) navi_tabs_3_pane

0x3aca,	// (0x000539fd) navi_tabs_4_pane

0xbae8,	// (0x0005ba1b) tabs_2_active_pane_ParamLimits

0xbae8,	// (0x0005ba1b) tabs_2_active_pane

0xbaf8,	// (0x0005ba2b) tabs_2_passive_pane_ParamLimits

0xbaf8,	// (0x0005ba2b) tabs_2_passive_pane

0xbab6,	// (0x0005b9e9) tabs_3_active_pane_ParamLimits

0xbab6,	// (0x0005b9e9) tabs_3_active_pane

0xbac6,	// (0x0005b9f9) tabs_3_passive_pane_ParamLimits

0xbac6,	// (0x0005b9f9) tabs_3_passive_pane

0xbad7,	// (0x0005ba0a) tabs_3_passive_pane_cp_ParamLimits

0xbad7,	// (0x0005ba0a) tabs_3_passive_pane_cp

0xba72,	// (0x0005b9a5) tabs_4_active_pane_ParamLimits

0xba72,	// (0x0005b9a5) tabs_4_active_pane

0xba83,	// (0x0005b9b6) tabs_4_passive_pane_ParamLimits

0xba83,	// (0x0005b9b6) tabs_4_passive_pane

0xba94,	// (0x0005b9c7) tabs_4_passive_pane_cp_ParamLimits

0xba94,	// (0x0005b9c7) tabs_4_passive_pane_cp

0xbaa5,	// (0x0005b9d8) tabs_4_passive_pane_cp2_ParamLimits

0xbaa5,	// (0x0005b9d8) tabs_4_passive_pane_cp2

0xba4e,	// (0x0005b981) tabs_2_long_active_pane_ParamLimits

0xba4e,	// (0x0005b981) tabs_2_long_active_pane

0xba60,	// (0x0005b993) tabs_2_long_passive_pane_ParamLimits

0xba60,	// (0x0005b993) tabs_2_long_passive_pane

0xba03,	// (0x0005b936) tabs_3_long_active_pane_ParamLimits

0xba03,	// (0x0005b936) tabs_3_long_active_pane

0xba1c,	// (0x0005b94f) tabs_3_long_passive_pane_ParamLimits

0xba1c,	// (0x0005b94f) tabs_3_long_passive_pane

0xba35,	// (0x0005b968) tabs_3_long_passive_pane_cp_ParamLimits

0xba35,	// (0x0005b968) tabs_3_long_passive_pane_cp

0x0ec0,	// (0x00050df3) volume_small_pane_g1

0xb9b2,	// (0x0005b8e5) volume_small_pane_g2

0xb9bb,	// (0x0005b8ee) volume_small_pane_g3

0xb9c4,	// (0x0005b8f7) volume_small_pane_g4

0xb9cd,	// (0x0005b900) volume_small_pane_g5

0xb9d6,	// (0x0005b909) volume_small_pane_g6

0xb9df,	// (0x0005b912) volume_small_pane_g7

0xb9e8,	// (0x0005b91b) volume_small_pane_g8

0xb9f1,	// (0x0005b924) volume_small_pane_g9

0xb9fa,	// (0x0005b92d) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0005f822) volume_small_pane_g

0x24d1,	// (0x00052404) bg_active_tab_pane_cp2_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp2

0xb099,	// (0x0005afcc) tabs_3_active_pane_g1

0xb0a1,	// (0x0005afd4) tabs_3_active_pane_t1

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp2_ParamLimits

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp2

0xb099,	// (0x0005afcc) tabs_3_passive_pane_g1

0xb0a1,	// (0x0005afd4) tabs_3_passive_pane_t1

0x24d1,	// (0x00052404) bg_active_tab_pane_cp3_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp3

0xb0b3,	// (0x0005afe6) tabs_4_active_pane_g1

0xb0bb,	// (0x0005afee) tabs_4_active_pane_t1

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp3_ParamLimits

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp3

0xb0b3,	// (0x0005afe6) tabs_4_1_passive_pane_g1

0xb0bb,	// (0x0005afee) tabs_4_1_passive_pane_t1

0x3fbe,	// (0x00053ef1) list_highlight_pane_cp2

0xd60a,	// (0x0005d53d) list_set_pane_ParamLimits

0xd60a,	// (0x0005d53d) list_set_pane

0xd6d2,	// (0x0005d605) main_pane_set_t1_ParamLimits

0xd6d2,	// (0x0005d605) main_pane_set_t1

0xd6f2,	// (0x0005d625) main_pane_set_t2_ParamLimits

0xd6f2,	// (0x0005d625) main_pane_set_t2

0xd706,	// (0x0005d639) main_pane_set_t3_ParamLimits

0xd706,	// (0x0005d639) main_pane_set_t3

0xd71a,	// (0x0005d64d) main_pane_set_t4_ParamLimits

0xd71a,	// (0x0005d64d) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0005f8f2) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0005f8f2) main_pane_set_t

0xd72e,	// (0x0005d661) setting_code_pane

0x6062,	// (0x00055f95) setting_slider_graphic_pane

0x6062,	// (0x00055f95) setting_slider_pane

0x6062,	// (0x00055f95) setting_text_pane

0x6062,	// (0x00055f95) setting_volume_pane

0xf502,	// (0x0005f435) volume_set_pane

0x2255,	// (0x00052188) bg_set_opt_pane_cp

0xf50c,	// (0x0005f43f) setting_slider_pane_t1

0xf522,	// (0x0005f455) setting_slider_pane_t2

0xf53c,	// (0x0005f46f) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0005f4d5) setting_slider_pane_t

0xf554,	// (0x0005f487) slider_set_pane

0x2175,	// (0x000520a8) bg_set_opt_pane_cp2

0x2297,	// (0x000521ca) setting_slider_graphic_pane_g1

0xf56a,	// (0x0005f49d) setting_slider_graphic_pane_t1

0xf57a,	// (0x0005f4ad) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0005f4dc) setting_slider_graphic_pane_t

0xf58a,	// (0x0005f4bd) slider_set_pane_cp

0x2175,	// (0x000520a8) input_focus_pane_cp1

0x5ee9,	// (0x00055e1c) list_set_text_pane

0x216b,	// (0x0005209e) setting_text_pane_g1

0x2175,	// (0x000520a8) input_focus_pane_cp2

0x216b,	// (0x0005209e) setting_code_pane_g1

0x22a0,	// (0x000521d3) setting_code_pane_t1

0xf052,	// (0x0005ef85) set_text_pane_t1_ParamLimits

0xf052,	// (0x0005ef85) set_text_pane_t1

0x303d,	// (0x00052f70) set_opt_bg_pane_g1

0x3045,	// (0x00052f78) set_opt_bg_pane_g2

0x5ec1,	// (0x00055df4) set_opt_bg_pane_g3

0x3055,	// (0x00052f88) set_opt_bg_pane_g4

0x305d,	// (0x00052f90) set_opt_bg_pane_g5

0x3065,	// (0x00052f98) set_opt_bg_pane_g6

0x5ecb,	// (0x00055dfe) set_opt_bg_pane_g7

0x5ed5,	// (0x00055e08) set_opt_bg_pane_g8

0x5edf,	// (0x00055e12) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0005f8df) set_opt_bg_pane_g

0x5eb4,	// (0x00055de7) slider_set_pane_g1

0x10cc,	// (0x00050fff) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0005f8d0) slider_set_pane_g

0x102c,	// (0x00050f5f) volume_set_pane_g1

0x1036,	// (0x00050f69) volume_set_pane_g2

0x1040,	// (0x00050f73) volume_set_pane_g3

0x104a,	// (0x00050f7d) volume_set_pane_g4

0x1054,	// (0x00050f87) volume_set_pane_g5

0x105e,	// (0x00050f91) volume_set_pane_g6

0x1068,	// (0x00050f9b) volume_set_pane_g7

0x1072,	// (0x00050fa5) volume_set_pane_g8

0x107c,	// (0x00050faf) volume_set_pane_g9

0x1086,	// (0x00050fb9) volume_set_pane_g10

0x0009,

0xf975,	// (0x0005f8a8) volume_set_pane_g

0xb0cd,	// (0x0005b000) indicator_pane_ParamLimits

0xb0cd,	// (0x0005b000) indicator_pane

0xb0f9,	// (0x0005b02c) main_idle_pane_g2_ParamLimits

0xb0f9,	// (0x0005b02c) main_idle_pane_g2

0xb131,	// (0x0005b064) main_pane_idle_g1_ParamLimits

0xb131,	// (0x0005b064) main_pane_idle_g1

0x22f0,	// (0x00052223) popup_clock_digital_analogue_window_ParamLimits

0x22f0,	// (0x00052223) popup_clock_digital_analogue_window

0xb15f,	// (0x0005b092) soft_indicator_pane_ParamLimits

0xb15f,	// (0x0005b092) soft_indicator_pane

0xb17b,	// (0x0005b0ae) wallpaper_pane_ParamLimits

0xb17b,	// (0x0005b0ae) wallpaper_pane

0x216b,	// (0x0005209e) wallpaper_pane_g1

0xb18d,	// (0x0005b0c0) indicator_pane_g1_ParamLimits

0xb18d,	// (0x0005b0c0) indicator_pane_g1

0x6326,	// (0x00056259) navi_navi_icon_text_pane_srt_g1

0x2344,	// (0x00052277) soft_indicator_pane_t1

0x235e,	// (0x00052291) aid_ps_area_pane

0xb1a6,	// (0x0005b0d9) aid_ps_clock_pane

0x237d,	// (0x000522b0) aid_ps_indicator_pane

0x2389,	// (0x000522bc) indicator_ps_pane_ParamLimits

0x2389,	// (0x000522bc) indicator_ps_pane

0x2398,	// (0x000522cb) power_save_pane_g1_ParamLimits

0x2398,	// (0x000522cb) power_save_pane_g1

0x23a4,	// (0x000522d7) power_save_pane_g2_ParamLimits

0x23a4,	// (0x000522d7) power_save_pane_g2

0xf274,	// (0x0005f1a7) aid_navinavi_width_pane

0x235e,	// (0x00052291) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0005f4e1) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0005f4e1) power_save_pane_g

0x23b2,	// (0x000522e5) power_save_pane_t1_ParamLimits

0x23b2,	// (0x000522e5) power_save_pane_t1

0xb1a6,	// (0x0005b0d9) aid_ps_clock_pane_ParamLimits

0x237d,	// (0x000522b0) aid_ps_indicator_pane_ParamLimits

0x23c4,	// (0x000522f7) power_save_pane_t4_ParamLimits

0x23c4,	// (0x000522f7) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0005f4e6) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0005f4e6) power_save_pane_t

0x23ee,	// (0x00052321) power_save_t3_ParamLimits

0x23ee,	// (0x00052321) power_save_t3

0x23d9,	// (0x0005230c) power_save_t2_ParamLimits

0x23d9,	// (0x0005230c) power_save_t2

0x2403,	// (0x00052336) indicator_ps_pane_g1

0xb1b4,	// (0x0005b0e7) ai_gene_pane_ParamLimits

0xb1b4,	// (0x0005b0e7) ai_gene_pane

0xc14b,	// (0x0005c07e) ai_links_pane_ParamLimits

0xc14b,	// (0x0005c07e) ai_links_pane

0xc163,	// (0x0005c096) indicator_pane_cp1_ParamLimits

0xc163,	// (0x0005c096) indicator_pane_cp1

0xc172,	// (0x0005c0a5) main_pane_idle_g1_cp_ParamLimits

0xc172,	// (0x0005c0a5) main_pane_idle_g1_cp

0x243c,	// (0x0005236f) popup_ai_links_title_window

0xc18a,	// (0x0005c0bd) soft_indicator_pane_cp1_ParamLimits

0xc18a,	// (0x0005c0bd) soft_indicator_pane_cp1

0x5c87,	// (0x00055bba) ai_links_pane_g1

0x5c90,	// (0x00055bc3) grid_ai_links_pane

0xd519,	// (0x0005d44c) ai_gene_pane_1

0x5c75,	// (0x00055ba8) ai_gene_pane_2

0x5c7e,	// (0x00055bb1) list_highlight_pane_cp4

0xd4f5,	// (0x0005d428) cell_ai_link_pane_ParamLimits

0xd4f5,	// (0x0005d428) cell_ai_link_pane

0x5c44,	// (0x00055b77) cell_ai_link_pane_g1

0x2687,	// (0x000525ba) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0005f883) cell_ai_link_pane_g

0x2175,	// (0x000520a8) grid_highlight_cp2

0x2175,	// (0x000520a8) bg_popup_sub_pane_cp1

0x245f,	// (0x00052392) popup_ai_links_title_window_t1

0x5b90,	// (0x00055ac3) ai_gene_pane_1_g1_ParamLimits

0x5b90,	// (0x00055ac3) ai_gene_pane_1_g1

0x5b9c,	// (0x00055acf) ai_gene_pane_1_g2_ParamLimits

0x5b9c,	// (0x00055acf) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0005f879) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0005f879) ai_gene_pane_1_g

0x5ba9,	// (0x00055adc) ai_gene_pane_1_t1_ParamLimits

0x5ba9,	// (0x00055adc) ai_gene_pane_1_t1

0x5bdd,	// (0x00055b10) grid_ai_soft_ind_pane

0x5b7b,	// (0x00055aae) ai_gene_pane_2_t1_ParamLimits

0x5b7b,	// (0x00055aae) ai_gene_pane_2_t1

0xc19e,	// (0x0005c0d1) main_pane_empty_t1_ParamLimits

0xc19e,	// (0x0005c0d1) main_pane_empty_t1

0xc1b6,	// (0x0005c0e9) main_pane_empty_t2_ParamLimits

0xc1b6,	// (0x0005c0e9) main_pane_empty_t2

0xc1cb,	// (0x0005c0fe) main_pane_empty_t3_ParamLimits

0xc1cb,	// (0x0005c0fe) main_pane_empty_t3

0xc1dd,	// (0x0005c110) main_pane_empty_t4_ParamLimits

0xc1dd,	// (0x0005c110) main_pane_empty_t4

0xc1ef,	// (0x0005c122) main_pane_empty_t5_ParamLimits

0xc1ef,	// (0x0005c122) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0005f4eb) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0005f4eb) main_pane_empty_t

0x308e,	// (0x00052fc1) bg_popup_window_pane_ParamLimits

0x308e,	// (0x00052fc1) bg_popup_window_pane

0x58d7,	// (0x0005580a) find_popup_pane_cp2_ParamLimits

0x58d7,	// (0x0005580a) find_popup_pane_cp2

0x58e3,	// (0x00055816) heading_pane_ParamLimits

0x58e3,	// (0x00055816) heading_pane

0x2175,	// (0x000520a8) bg_popup_sub_pane

0xd424,	// (0x0005d357) bg_popup_window_pane_g1_ParamLimits

0xd424,	// (0x0005d357) bg_popup_window_pane_g1

0xd433,	// (0x0005d366) bg_popup_window_pane_g2_ParamLimits

0xd433,	// (0x0005d366) bg_popup_window_pane_g2

0xd43f,	// (0x0005d372) bg_popup_window_pane_g3_ParamLimits

0xd43f,	// (0x0005d372) bg_popup_window_pane_g3

0xd44b,	// (0x0005d37e) bg_popup_window_pane_g4_ParamLimits

0xd44b,	// (0x0005d37e) bg_popup_window_pane_g4

0xd45a,	// (0x0005d38d) bg_popup_window_pane_g5_ParamLimits

0xd45a,	// (0x0005d38d) bg_popup_window_pane_g5

0xd46a,	// (0x0005d39d) bg_popup_window_pane_g6_ParamLimits

0xd46a,	// (0x0005d39d) bg_popup_window_pane_g6

0xd476,	// (0x0005d3a9) bg_popup_window_pane_g7_ParamLimits

0xd476,	// (0x0005d3a9) bg_popup_window_pane_g7

0xd485,	// (0x0005d3b8) bg_popup_window_pane_g8_ParamLimits

0xd485,	// (0x0005d3b8) bg_popup_window_pane_g8

0xd494,	// (0x0005d3c7) bg_popup_window_pane_g9_ParamLimits

0xd494,	// (0x0005d3c7) bg_popup_window_pane_g9

0x58bd,	// (0x000557f0) bg_popup_window_pane_g10_ParamLimits

0x58bd,	// (0x000557f0) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0005f841) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0005f841) bg_popup_window_pane_g

0x57e6,	// (0x00055719) bg_popup_heading_pane_ParamLimits

0x57e6,	// (0x00055719) bg_popup_heading_pane

0x11a0,	// (0x000510d3) tabs_4_passive_pane_cp_srt_ParamLimits

0x11a0,	// (0x000510d3) tabs_4_passive_pane_cp_srt

0x11b2,	// (0x000510e5) tabs_4_passive_pane_srt_ParamLimits

0x57fa,	// (0x0005572d) heading_pane_g2

0x11b2,	// (0x000510e5) tabs_4_passive_pane_srt

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp3_srt

0x5802,	// (0x00055735) heading_pane_t1_ParamLimits

0x5802,	// (0x00055735) heading_pane_t1

0x5819,	// (0x0005574c) heading_pane_t2_ParamLimits

0x5819,	// (0x0005574c) heading_pane_t2

0x0001,

0xf909,	// (0x0005f83c) heading_pane_t_ParamLimits

0xf909,	// (0x0005f83c) heading_pane_t

0x5311,	// (0x00055244) bg_popup_heading_pane_g1

0x53c0,	// (0x000552f3) bg_popup_heading_pane_g2

0x53ca,	// (0x000552fd) bg_popup_heading_pane_g3

0x53d4,	// (0x00055307) bg_popup_heading_pane_g4

0x53de,	// (0x00055311) bg_popup_heading_pane_g5

0x53e8,	// (0x0005531b) bg_popup_heading_pane_g6

0x53f0,	// (0x00055323) bg_popup_heading_pane_g7

0x53f8,	// (0x0005532b) bg_popup_heading_pane_g8

0x5402,	// (0x00055335) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0005f7f8) bg_popup_heading_pane_g

0x4afa,	// (0x00054a2d) bg_popup_sub_pane_g1

0x4b0a,	// (0x00054a3d) bg_popup_sub_pane_g2

0x4b02,	// (0x00054a35) bg_popup_sub_pane_g3

0x4b1a,	// (0x00054a4d) bg_popup_sub_pane_g4

0x4b12,	// (0x00054a45) bg_popup_sub_pane_g5

0x4b22,	// (0x00054a55) bg_popup_sub_pane_g6

0x4b2a,	// (0x00054a5d) bg_popup_sub_pane_g7

0x4b3a,	// (0x00054a6d) bg_popup_sub_pane_g8

0x4b32,	// (0x00054a65) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0005f7d2) bg_popup_sub_pane_g

0x24d1,	// (0x00052404) bg_popup_window_pane_cp5_ParamLimits

0x24d1,	// (0x00052404) bg_popup_window_pane_cp5

0x24ed,	// (0x00052420) popup_note_window_g1_ParamLimits

0x24ed,	// (0x00052420) popup_note_window_g1

0x24f9,	// (0x0005242c) popup_note_window_t1_ParamLimits

0x24f9,	// (0x0005242c) popup_note_window_t1

0x250f,	// (0x00052442) popup_note_window_t2_ParamLimits

0x250f,	// (0x00052442) popup_note_window_t2

0x2525,	// (0x00052458) popup_note_window_t3_ParamLimits

0x2525,	// (0x00052458) popup_note_window_t3

0x253b,	// (0x0005246e) popup_note_window_t4_ParamLimits

0x253b,	// (0x0005246e) popup_note_window_t4

0x2563,	// (0x00052496) popup_note_window_t5_ParamLimits

0x2563,	// (0x00052496) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0005f4f6) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0005f4f6) popup_note_window_t

0x2587,	// (0x000524ba) bg_popup_window_pane_cp6_ParamLimits

0x2587,	// (0x000524ba) bg_popup_window_pane_cp6

0x528d,	// (0x000551c0) popup_note_image_window_g1_ParamLimits

0x528d,	// (0x000551c0) popup_note_image_window_g1

0x5299,	// (0x000551cc) popup_note_image_window_g2_ParamLimits

0x5299,	// (0x000551cc) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0005f7c6) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0005f7c6) popup_note_image_window_g

0x52b2,	// (0x000551e5) popup_note_image_window_t1_ParamLimits

0x52b2,	// (0x000551e5) popup_note_image_window_t1

0x52cb,	// (0x000551fe) popup_note_image_window_t2_ParamLimits

0x52cb,	// (0x000551fe) popup_note_image_window_t2

0x52e4,	// (0x00055217) popup_note_image_window_t3_ParamLimits

0x52e4,	// (0x00055217) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0005f7cb) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0005f7cb) popup_note_image_window_t

0x514d,	// (0x00055080) bg_popup_window_pane_cp7_ParamLimits

0x514d,	// (0x00055080) bg_popup_window_pane_cp7

0x517d,	// (0x000550b0) popup_note_wait_window_g1_ParamLimits

0x517d,	// (0x000550b0) popup_note_wait_window_g1

0x5189,	// (0x000550bc) popup_note_wait_window_g2_ParamLimits

0x5189,	// (0x000550bc) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0005f7b4) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0005f7b4) popup_note_wait_window_g

0x51a1,	// (0x000550d4) popup_note_wait_window_t1_ParamLimits

0x51a1,	// (0x000550d4) popup_note_wait_window_t1

0x51c8,	// (0x000550fb) popup_note_wait_window_t2_ParamLimits

0x51c8,	// (0x000550fb) popup_note_wait_window_t2

0x51e6,	// (0x00055119) popup_note_wait_window_t3_ParamLimits

0x51e6,	// (0x00055119) popup_note_wait_window_t3

0x51f9,	// (0x0005512c) popup_note_wait_window_t4_ParamLimits

0x51f9,	// (0x0005512c) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0005f7bb) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0005f7bb) popup_note_wait_window_t

0x521e,	// (0x00055151) wait_bar_pane_ParamLimits

0x521e,	// (0x00055151) wait_bar_pane

0x2175,	// (0x000520a8) wait_anim_pane

0x2175,	// (0x000520a8) wait_border_pane

0x216b,	// (0x0005209e) wait_anim_pane_g1

0x216b,	// (0x0005209e) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0005f67f) wait_anim_pane_g

0x50f1,	// (0x00055024) wait_border_pane_g1

0x50fc,	// (0x0005502f) wait_border_pane_g2

0x5105,	// (0x00055038) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0005f7ad) wait_border_pane_g

0x504d,	// (0x00054f80) bg_popup_window_pane_cp16_ParamLimits

0x504d,	// (0x00054f80) bg_popup_window_pane_cp16

0x505b,	// (0x00054f8e) indicator_popup_pane_cp4_ParamLimits

0x505b,	// (0x00054f8e) indicator_popup_pane_cp4

0x506f,	// (0x00054fa2) popup_query_data_window_t1_ParamLimits

0x506f,	// (0x00054fa2) popup_query_data_window_t1

0x5081,	// (0x00054fb4) popup_query_data_window_t2_ParamLimits

0x5081,	// (0x00054fb4) popup_query_data_window_t2

0x509a,	// (0x00054fcd) popup_query_data_window_t3_ParamLimits

0x509a,	// (0x00054fcd) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0005f7a6) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0005f7a6) popup_query_data_window_t

0x50b4,	// (0x00054fe7) query_popup_data_pane_ParamLimits

0x50b4,	// (0x00054fe7) query_popup_data_pane

0x50c8,	// (0x00054ffb) query_popup_data_pane_cp1_ParamLimits

0x50c8,	// (0x00054ffb) query_popup_data_pane_cp1

0x2587,	// (0x000524ba) bg_popup_window_pane_cp10_ParamLimits

0x2587,	// (0x000524ba) bg_popup_window_pane_cp10

0x4fb0,	// (0x00054ee3) indicator_popup_pane_ParamLimits

0x4fb0,	// (0x00054ee3) indicator_popup_pane

0x25e8,	// (0x0005251b) popup_query_code_window_t1_ParamLimits

0x25e8,	// (0x0005251b) popup_query_code_window_t1

0x4fc8,	// (0x00054efb) popup_query_code_window_t2_ParamLimits

0x4fc8,	// (0x00054efb) popup_query_code_window_t2

0x5006,	// (0x00054f39) popup_query_code_window_t3_ParamLimits

0x5006,	// (0x00054f39) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0005f79f) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0005f79f) popup_query_code_window_t

0x5035,	// (0x00054f68) query_popup_pane_ParamLimits

0x5035,	// (0x00054f68) query_popup_pane

0x2587,	// (0x000524ba) bg_popup_window_pane_cp15_ParamLimits

0x2587,	// (0x000524ba) bg_popup_window_pane_cp15

0x25a7,	// (0x000524da) indicator_popup_pane_cp1_ParamLimits

0x25a7,	// (0x000524da) indicator_popup_pane_cp1

0x25ba,	// (0x000524ed) indicator_popup_pane_cp2_ParamLimits

0x25ba,	// (0x000524ed) indicator_popup_pane_cp2

0x25d5,	// (0x00052508) popup_query_data_code_window_g1_ParamLimits

0x25d5,	// (0x00052508) popup_query_data_code_window_g1

0x25e8,	// (0x0005251b) popup_query_data_code_window_t1_ParamLimits

0x25e8,	// (0x0005251b) popup_query_data_code_window_t1

0x25fa,	// (0x0005252d) popup_query_data_code_window_t2_ParamLimits

0x25fa,	// (0x0005252d) popup_query_data_code_window_t2

0x260c,	// (0x0005253f) popup_query_data_code_window_t3_ParamLimits

0x260c,	// (0x0005253f) popup_query_data_code_window_t3

0x2622,	// (0x00052555) popup_query_data_code_window_t4_ParamLimits

0x2622,	// (0x00052555) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0005f501) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0005f501) popup_query_data_code_window_t

0x0d74,	// (0x00050ca7) list_single_midp_graphic_pane_g3

0x263c,	// (0x0005256f) query_popup_data_pane_cp2_ParamLimits

0x264f,	// (0x00052582) query_popup_pane_cp2_ParamLimits

0x264f,	// (0x00052582) query_popup_pane_cp2

0x2175,	// (0x000520a8) bg_popup_window_pane_cp11

0x4f84,	// (0x00054eb7) heading_pane_cp5

0x273f,	// (0x00052672) listscroll_popup_info_pane

0x2175,	// (0x000520a8) input_focus_pane_cp3

0x266a,	// (0x0005259d) query_popup_pane_t1

0x2678,	// (0x000525ab) list_popup_info_pane_ParamLimits

0x2678,	// (0x000525ab) list_popup_info_pane

0x2687,	// (0x000525ba) listscroll_popup_info_pane_g1

0x268f,	// (0x000525c2) scroll_pane_cp7

0x2699,	// (0x000525cc) popup_info_list_pane_t1_ParamLimits

0x2699,	// (0x000525cc) popup_info_list_pane_t1

0x26b3,	// (0x000525e6) popup_info_list_pane_t2_ParamLimits

0x26b3,	// (0x000525e6) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0005f50a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0005f50a) popup_info_list_pane_t

0x2175,	// (0x000520a8) bg_popup_window_pane_cp12

0x6340,	// (0x00056273) find_popup_pane

0x2255,	// (0x00052188) bg_popup_window_pane_cp3

0x26cd,	// (0x00052600) heading_pane_cp3

0x26d9,	// (0x0005260c) listscroll_popup_graphic_pane

0x2175,	// (0x000520a8) bg_popup_window_pane_cp4

0xc251,	// (0x0005c184) heading_pane_cp4

0x273f,	// (0x00052672) listscroll_popup_colour_pane

0xc25b,	// (0x0005c18e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc25b,	// (0x0005c18e) cell_large_graphic_colour_none_popup_pane

0xc26f,	// (0x0005c1a2) grid_large_graphic_colour_popup_pane_ParamLimits

0xc26f,	// (0x0005c1a2) grid_large_graphic_colour_popup_pane

0xc29b,	// (0x0005c1ce) listscroll_popup_colour_pane_g1_ParamLimits

0xc29b,	// (0x0005c1ce) listscroll_popup_colour_pane_g1

0xc2b2,	// (0x0005c1e5) listscroll_popup_colour_pane_g2_ParamLimits

0xc2b2,	// (0x0005c1e5) listscroll_popup_colour_pane_g2

0xc2c9,	// (0x0005c1fc) listscroll_popup_colour_pane_g3_ParamLimits

0xc2c9,	// (0x0005c1fc) listscroll_popup_colour_pane_g3

0xc2d9,	// (0x0005c20c) listscroll_popup_colour_pane_g4_ParamLimits

0xc2d9,	// (0x0005c20c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0005f50f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0005f50f) listscroll_popup_colour_pane_g

0x27d9,	// (0x0005270c) scroll_pane_cp6_ParamLimits

0x27d9,	// (0x0005270c) scroll_pane_cp6

0xc2ed,	// (0x0005c220) cell_large_graphic_colour_popup_pane_ParamLimits

0xc2ed,	// (0x0005c220) cell_large_graphic_colour_popup_pane

0x2d0a,	// (0x00052c3d) cell_large_graphic_colour_none_popup_pane_t1

0x2175,	// (0x000520a8) grid_highlight_pane_cp5

0x2d19,	// (0x00052c4c) cell_large_graphic_colour_popup_pane_g1

0x2d21,	// (0x00052c54) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0005f518) cell_large_graphic_colour_popup_pane_g

0x2d29,	// (0x00052c5c) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d32,	// (0x00052c65) grid_highlight_pane_cp4

0x2d3a,	// (0x00052c6d) bg_popup_window_pane_cp8_ParamLimits

0x2d3a,	// (0x00052c6d) bg_popup_window_pane_cp8

0x2d55,	// (0x00052c88) popup_snote_single_text_window_g1_ParamLimits

0x2d55,	// (0x00052c88) popup_snote_single_text_window_g1

0x2d67,	// (0x00052c9a) popup_snote_single_text_window_t1_ParamLimits

0x2d67,	// (0x00052c9a) popup_snote_single_text_window_t1

0x2d7a,	// (0x00052cad) popup_snote_single_text_window_t2_ParamLimits

0x2d7a,	// (0x00052cad) popup_snote_single_text_window_t2

0x2d8d,	// (0x00052cc0) popup_snote_single_text_window_t3_ParamLimits

0x2d8d,	// (0x00052cc0) popup_snote_single_text_window_t3

0x2dc6,	// (0x00052cf9) popup_snote_single_text_window_t4_ParamLimits

0x2dc6,	// (0x00052cf9) popup_snote_single_text_window_t4

0x2dfa,	// (0x00052d2d) popup_snote_single_text_window_t5_ParamLimits

0x2dfa,	// (0x00052d2d) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0005f51d) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0005f51d) popup_snote_single_text_window_t

0x2e29,	// (0x00052d5c) bg_popup_window_pane_cp9_ParamLimits

0x2e29,	// (0x00052d5c) bg_popup_window_pane_cp9

0x2d55,	// (0x00052c88) popup_snote_single_graphic_window_g1_ParamLimits

0x2d55,	// (0x00052c88) popup_snote_single_graphic_window_g1

0x2e37,	// (0x00052d6a) popup_snote_single_graphic_window_g2_ParamLimits

0x2e37,	// (0x00052d6a) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0005f528) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0005f528) popup_snote_single_graphic_window_g

0x2e43,	// (0x00052d76) popup_snote_single_graphic_window_t1_ParamLimits

0x2e43,	// (0x00052d76) popup_snote_single_graphic_window_t1

0x2e56,	// (0x00052d89) popup_snote_single_graphic_window_t2_ParamLimits

0x2e56,	// (0x00052d89) popup_snote_single_graphic_window_t2

0x2e69,	// (0x00052d9c) popup_snote_single_graphic_window_t3_ParamLimits

0x2e69,	// (0x00052d9c) popup_snote_single_graphic_window_t3

0x2ea2,	// (0x00052dd5) popup_snote_single_graphic_window_t4_ParamLimits

0x2ea2,	// (0x00052dd5) popup_snote_single_graphic_window_t4

0x2ed6,	// (0x00052e09) popup_snote_single_graphic_window_t5_ParamLimits

0x2ed6,	// (0x00052e09) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0005f52d) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0005f52d) popup_snote_single_graphic_window_t

0x627e,	// (0x000561b1) grid_graphic_popup_pane_ParamLimits

0x627e,	// (0x000561b1) grid_graphic_popup_pane

0x62ac,	// (0x000561df) listscroll_popup_graphic_pane_g1_ParamLimits

0x62ac,	// (0x000561df) listscroll_popup_graphic_pane_g1

0xd82e,	// (0x0005d761) listscroll_popup_graphic_pane_g2_ParamLimits

0xd82e,	// (0x0005d761) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0005f91c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0005f91c) listscroll_popup_graphic_pane_g

0x62d4,	// (0x00056207) scroll_pane_cp5

0xd7ee,	// (0x0005d721) cell_graphic_popup_pane_ParamLimits

0xd7ee,	// (0x0005d721) cell_graphic_popup_pane

0x6207,	// (0x0005613a) cell_graphic_popup_pane_g1

0x620f,	// (0x00056142) cell_graphic_popup_pane_g2

0x2d29,	// (0x00052c5c) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0005f915) cell_graphic_popup_pane_g

0x6218,	// (0x0005614b) cell_graphic_popup_pane_t2

0x2d32,	// (0x00052c65) grid_highlight_pane_cp3

0x2f17,	// (0x00052e4a) list_gen_pane_ParamLimits

0x2f17,	// (0x00052e4a) list_gen_pane

0x2f49,	// (0x00052e7c) scroll_pane

0xd7a9,	// (0x0005d6dc) bg_list_pane_g1_ParamLimits

0xd7a9,	// (0x0005d6dc) bg_list_pane_g1

0x6184,	// (0x000560b7) bg_list_pane_g2_ParamLimits

0x6184,	// (0x000560b7) bg_list_pane_g2

0x6197,	// (0x000560ca) bg_list_pane_g3_ParamLimits

0x6197,	// (0x000560ca) bg_list_pane_g3

0x61a9,	// (0x000560dc) bg_list_pane_g4_ParamLimits

0x61a9,	// (0x000560dc) bg_list_pane_g4

0xd7c4,	// (0x0005d6f7) bg_list_pane_g5_ParamLimits

0xd7c4,	// (0x0005d6f7) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0005f90a) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0005f90a) bg_list_pane_g

0xd76c,	// (0x0005d69f) list_double2_graphic_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double2_graphic_large_graphic_pane

0xd76c,	// (0x0005d69f) list_double2_graphic_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double2_graphic_pane

0xd76c,	// (0x0005d69f) list_double2_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double2_large_graphic_pane

0xd76c,	// (0x0005d69f) list_double2_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double2_pane

0xd76c,	// (0x0005d69f) list_double_graphic_heading_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_graphic_heading_pane

0xd76c,	// (0x0005d69f) list_double_graphic_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_graphic_pane

0xd76c,	// (0x0005d69f) list_double_heading_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_heading_pane

0xd76c,	// (0x0005d69f) list_double_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_large_graphic_pane

0xd76c,	// (0x0005d69f) list_double_number_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_number_pane

0xd76c,	// (0x0005d69f) list_double_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_pane

0xd76c,	// (0x0005d69f) list_double_time_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_double_time_pane

0xd76c,	// (0x0005d69f) list_setting_number_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_setting_number_pane

0xd76c,	// (0x0005d69f) list_setting_pane_ParamLimits

0xd76c,	// (0x0005d69f) list_setting_pane

0xd780,	// (0x0005d6b3) list_single_2graphic_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_2graphic_pane

0xd780,	// (0x0005d6b3) list_single_graphic_heading_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_graphic_heading_pane

0xd780,	// (0x0005d6b3) list_single_graphic_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_graphic_pane

0xd780,	// (0x0005d6b3) list_single_heading_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_heading_pane

0xd780,	// (0x0005d6b3) list_single_large_graphic_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_large_graphic_pane

0xd780,	// (0x0005d6b3) list_single_number_heading_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_number_heading_pane

0xd780,	// (0x0005d6b3) list_single_number_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_number_pane

0xd780,	// (0x0005d6b3) list_single_pane_ParamLimits

0xd780,	// (0x0005d6b3) list_single_pane

0x2175,	// (0x000520a8) list_highlight_pane_cp1

0x3bb1,	// (0x00053ae4) list_single_pane_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_pane_g1

0x28b2,	// (0x000527e5) list_single_pane_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_pane_g2

0x0001,

0xf616,	// (0x0005f549) list_single_pane_g_ParamLimits

0xf616,	// (0x0005f549) list_single_pane_g

0x1293,	// (0x000511c6) list_single_pane_t1_ParamLimits

0x1293,	// (0x000511c6) list_single_pane_t1

0x3bb1,	// (0x00053ae4) list_single_number_pane_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_number_pane_g1

0x28b2,	// (0x000527e5) list_single_number_pane_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0005f549) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0005f549) list_single_number_pane_g

0x0d39,	// (0x00050c6c) list_single_number_pane_t1_ParamLimits

0x0d39,	// (0x00050c6c) list_single_number_pane_t1

0xbb19,	// (0x0005ba4c) list_single_number_pane_t2_ParamLimits

0xbb19,	// (0x0005ba4c) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0005f8cb) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0005f8cb) list_single_number_pane_t

0xb1cb,	// (0x0005b0fe) list_single_graphic_pane_g1_ParamLimits

0xb1cb,	// (0x0005b0fe) list_single_graphic_pane_g1

0x3bb1,	// (0x00053ae4) list_single_graphic_pane_g2_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_graphic_pane_g2

0x28b2,	// (0x000527e5) list_single_graphic_pane_g3_ParamLimits

0x28b2,	// (0x000527e5) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0005f538) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0005f538) list_single_graphic_pane_g

0x2b51,	// (0x00052a84) list_single_graphic_pane_t1_ParamLimits

0x2b51,	// (0x00052a84) list_single_graphic_pane_t1

0xb1d7,	// (0x0005b10a) list_single_heading_pane_g1_ParamLimits

0xb1d7,	// (0x0005b10a) list_single_heading_pane_g1

0x28b2,	// (0x000527e5) list_single_heading_pane_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0005f53f) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0005f53f) list_single_heading_pane_g

0xb1ea,	// (0x0005b11d) list_single_heading_pane_t1_ParamLimits

0xb1ea,	// (0x0005b11d) list_single_heading_pane_t1

0xc318,	// (0x0005c24b) list_single_heading_pane_t2_ParamLimits

0xc318,	// (0x0005c24b) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0005f544) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0005f544) list_single_heading_pane_t

0x3bb1,	// (0x00053ae4) list_single_number_heading_pane_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_number_heading_pane_g1

0x28b2,	// (0x000527e5) list_single_number_heading_pane_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0005f549) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0005f549) list_single_number_heading_pane_g

0x12a9,	// (0x000511dc) list_single_number_heading_pane_t1_ParamLimits

0x12a9,	// (0x000511dc) list_single_number_heading_pane_t1

0xb200,	// (0x0005b133) list_single_number_heading_pane_t2_ParamLimits

0xb200,	// (0x0005b133) list_single_number_heading_pane_t2

0x126d,	// (0x000511a0) list_single_number_heading_pane_t3_ParamLimits

0x126d,	// (0x000511a0) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0005f54e) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0005f54e) list_single_number_heading_pane_t

0xb212,	// (0x0005b145) list_single_graphic_heading_pane_g1_ParamLimits

0xb212,	// (0x0005b145) list_single_graphic_heading_pane_g1

0xc32a,	// (0x0005c25d) list_single_graphic_heading_pane_g4_ParamLimits

0xc32a,	// (0x0005c25d) list_single_graphic_heading_pane_g4

0x28b2,	// (0x000527e5) list_single_graphic_heading_pane_g5_ParamLimits

0x28b2,	// (0x000527e5) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0005f555) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0005f555) list_single_graphic_heading_pane_g

0x12a9,	// (0x000511dc) list_single_graphic_heading_pane_t1_ParamLimits

0x12a9,	// (0x000511dc) list_single_graphic_heading_pane_t1

0xb22a,	// (0x0005b15d) list_single_graphic_heading_pane_t2_ParamLimits

0xb22a,	// (0x0005b15d) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0005f55c) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0005f55c) list_single_graphic_heading_pane_t

0x2902,	// (0x00052835) list_single_large_graphic_pane_g1_ParamLimits

0x2902,	// (0x00052835) list_single_large_graphic_pane_g1

0x3bb1,	// (0x00053ae4) list_single_large_graphic_pane_g2_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_large_graphic_pane_g2

0x28b2,	// (0x000527e5) list_single_large_graphic_pane_g3_ParamLimits

0x28b2,	// (0x000527e5) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0005f561) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0005f561) list_single_large_graphic_pane_g

0x50fc,	// (0x0005502f) wait_border_pane_g2_copy1

0xc33b,	// (0x0005c26e) list_single_large_graphic_pane_g4_cp2

0x12a9,	// (0x000511dc) list_single_large_graphic_pane_t1_ParamLimits

0x12a9,	// (0x000511dc) list_single_large_graphic_pane_t1

0x2ff0,	// (0x00052f23) list_double_pane_g1_ParamLimits

0x2ff0,	// (0x00052f23) list_double_pane_g1

0xc343,	// (0x0005c276) list_double_pane_g2_ParamLimits

0xc343,	// (0x0005c276) list_double_pane_g2

0x0001,

0xf635,	// (0x0005f568) list_double_pane_g_ParamLimits

0xf635,	// (0x0005f568) list_double_pane_g

0xb242,	// (0x0005b175) list_double_pane_t1_ParamLimits

0xb242,	// (0x0005b175) list_double_pane_t1

0xb258,	// (0x0005b18b) list_double_pane_t2_ParamLimits

0xb258,	// (0x0005b18b) list_double_pane_t2

0x0001,

0xf63a,	// (0x0005f56d) list_double_pane_t_ParamLimits

0xf63a,	// (0x0005f56d) list_double_pane_t

0xb26a,	// (0x0005b19d) list_double2_pane_g1_ParamLimits

0xb26a,	// (0x0005b19d) list_double2_pane_g1

0xb27b,	// (0x0005b1ae) list_double2_pane_g2_ParamLimits

0xb27b,	// (0x0005b1ae) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0005f572) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0005f572) list_double2_pane_g

0xb287,	// (0x0005b1ba) list_double2_pane_t1_ParamLimits

0xb287,	// (0x0005b1ba) list_double2_pane_t1

0xb29d,	// (0x0005b1d0) list_double2_pane_t2_ParamLimits

0xb29d,	// (0x0005b1d0) list_double2_pane_t2

0x0001,

0xf644,	// (0x0005f577) list_double2_pane_t_ParamLimits

0xf644,	// (0x0005f577) list_double2_pane_t

0x2ff0,	// (0x00052f23) list_double_number_pane_g1_ParamLimits

0x2ff0,	// (0x00052f23) list_double_number_pane_g1

0xc343,	// (0x0005c276) list_double_number_pane_g2_ParamLimits

0xc343,	// (0x0005c276) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0005f568) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0005f568) list_double_number_pane_g

0xb2af,	// (0x0005b1e2) list_double_number_pane_t1_ParamLimits

0xb2af,	// (0x0005b1e2) list_double_number_pane_t1

0xb2c1,	// (0x0005b1f4) list_double_number_pane_t2_ParamLimits

0xb2c1,	// (0x0005b1f4) list_double_number_pane_t2

0xb2d7,	// (0x0005b20a) list_double_number_pane_t3_ParamLimits

0xb2d7,	// (0x0005b20a) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0005f57c) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0005f57c) list_double_number_pane_t

0xb2e9,	// (0x0005b21c) list_double_graphic_pane_g1_ParamLimits

0xb2e9,	// (0x0005b21c) list_double_graphic_pane_g1

0xb2f5,	// (0x0005b228) list_double_graphic_pane_g2_ParamLimits

0xb2f5,	// (0x0005b228) list_double_graphic_pane_g2

0xb304,	// (0x0005b237) list_double_graphic_pane_g3_ParamLimits

0xb304,	// (0x0005b237) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0005f583) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0005f583) list_double_graphic_pane_g

0xb31c,	// (0x0005b24f) list_double_graphic_pane_t1_ParamLimits

0xb31c,	// (0x0005b24f) list_double_graphic_pane_t1

0xb332,	// (0x0005b265) list_double_graphic_pane_t2_ParamLimits

0xb332,	// (0x0005b265) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0005f58c) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0005f58c) list_double_graphic_pane_t

0xb344,	// (0x0005b277) list_double2_graphic_pane_g1_ParamLimits

0xb344,	// (0x0005b277) list_double2_graphic_pane_g1

0xb350,	// (0x0005b283) list_double2_graphic_pane_g2_ParamLimits

0xb350,	// (0x0005b283) list_double2_graphic_pane_g2

0xb35c,	// (0x0005b28f) list_double2_graphic_pane_g3_ParamLimits

0xb35c,	// (0x0005b28f) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0005f591) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0005f591) list_double2_graphic_pane_g

0xb368,	// (0x0005b29b) list_double2_graphic_pane_t1_ParamLimits

0xb368,	// (0x0005b29b) list_double2_graphic_pane_t1

0xb37e,	// (0x0005b2b1) list_double2_graphic_pane_t2_ParamLimits

0xb37e,	// (0x0005b2b1) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0005f598) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0005f598) list_double2_graphic_pane_t

0xb390,	// (0x0005b2c3) list_double_large_graphic_pane_g1_ParamLimits

0xb390,	// (0x0005b2c3) list_double_large_graphic_pane_g1

0xb3bb,	// (0x0005b2ee) list_double_large_graphic_pane_g2_ParamLimits

0xb3bb,	// (0x0005b2ee) list_double_large_graphic_pane_g2

0xc343,	// (0x0005c276) list_double_large_graphic_pane_g3_ParamLimits

0xc343,	// (0x0005c276) list_double_large_graphic_pane_g3

0xb3d1,	// (0x0005b304) list_double_large_graphic_pane_g4_ParamLimits

0xb3d1,	// (0x0005b304) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0005f59d) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0005f59d) list_double_large_graphic_pane_g

0xb3e4,	// (0x0005b317) list_double_large_graphic_pane_t1_ParamLimits

0xb3e4,	// (0x0005b317) list_double_large_graphic_pane_t1

0xb3fd,	// (0x0005b330) list_double_large_graphic_pane_t2_ParamLimits

0xb3fd,	// (0x0005b330) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0005f5a8) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0005f5a8) list_double_large_graphic_pane_t

0xc34f,	// (0x0005c282) list_double2_large_graphic_pane_g1_ParamLimits

0xc34f,	// (0x0005c282) list_double2_large_graphic_pane_g1

0xb40f,	// (0x0005b342) list_double2_large_graphic_pane_g2_ParamLimits

0xb40f,	// (0x0005b342) list_double2_large_graphic_pane_g2

0xb35c,	// (0x0005b28f) list_double2_large_graphic_pane_g3_ParamLimits

0xb35c,	// (0x0005b28f) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0005f5ad) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0005f5ad) list_double2_large_graphic_pane_g

0xb420,	// (0x0005b353) list_double2_large_graphic_pane_t1_ParamLimits

0xb420,	// (0x0005b353) list_double2_large_graphic_pane_t1

0xb436,	// (0x0005b369) list_double2_large_graphic_pane_t2_ParamLimits

0xb436,	// (0x0005b369) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0005f5b4) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0005f5b4) list_double2_large_graphic_pane_t

0xb448,	// (0x0005b37b) list_double_heading_pane_g1_ParamLimits

0xb448,	// (0x0005b37b) list_double_heading_pane_g1

0xb459,	// (0x0005b38c) list_double_heading_pane_g2_ParamLimits

0xb459,	// (0x0005b38c) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0005f5b9) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0005f5b9) list_double_heading_pane_g

0xb465,	// (0x0005b398) list_double_heading_pane_t1_ParamLimits

0xb465,	// (0x0005b398) list_double_heading_pane_t1

0xb29d,	// (0x0005b1d0) list_double_heading_pane_t2_ParamLimits

0xb29d,	// (0x0005b1d0) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0005f5be) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0005f5be) list_double_heading_pane_t

0xb47b,	// (0x0005b3ae) list_double_graphic_heading_pane_g1_ParamLimits

0xb47b,	// (0x0005b3ae) list_double_graphic_heading_pane_g1

0xb448,	// (0x0005b37b) list_double_graphic_heading_pane_g2_ParamLimits

0xb448,	// (0x0005b37b) list_double_graphic_heading_pane_g2

0xb459,	// (0x0005b38c) list_double_graphic_heading_pane_g3_ParamLimits

0xb459,	// (0x0005b38c) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0005f5c3) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0005f5c3) list_double_graphic_heading_pane_g

0xb487,	// (0x0005b3ba) list_double_graphic_heading_pane_t1_ParamLimits

0xb487,	// (0x0005b3ba) list_double_graphic_heading_pane_t1

0xb37e,	// (0x0005b2b1) list_double_graphic_heading_pane_t2_ParamLimits

0xb37e,	// (0x0005b2b1) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0005f5ca) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0005f5ca) list_double_graphic_heading_pane_t

0xb49d,	// (0x0005b3d0) list_double_time_pane_g1_ParamLimits

0xb49d,	// (0x0005b3d0) list_double_time_pane_g1

0xb4ae,	// (0x0005b3e1) list_double_time_pane_g2_ParamLimits

0xb4ae,	// (0x0005b3e1) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0005f5cf) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0005f5cf) list_double_time_pane_g

0xb4ba,	// (0x0005b3ed) list_double_time_pane_t1_ParamLimits

0xb4ba,	// (0x0005b3ed) list_double_time_pane_t1

0xb4d0,	// (0x0005b403) list_double_time_pane_t2_ParamLimits

0xb4d0,	// (0x0005b403) list_double_time_pane_t2

0xb4e2,	// (0x0005b415) list_double_time_pane_t3_ParamLimits

0xb4e2,	// (0x0005b415) list_double_time_pane_t3

0xb4f4,	// (0x0005b427) list_double_time_pane_t4_ParamLimits

0xb4f4,	// (0x0005b427) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0005f5d4) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0005f5d4) list_double_time_pane_t

0xb506,	// (0x0005b439) list_setting_pane_g1_ParamLimits

0xb506,	// (0x0005b439) list_setting_pane_g1

0xb27b,	// (0x0005b1ae) list_setting_pane_g2_ParamLimits

0xb27b,	// (0x0005b1ae) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0005f5dd) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0005f5dd) list_setting_pane_g

0xb512,	// (0x0005b445) list_setting_pane_t1_ParamLimits

0xb512,	// (0x0005b445) list_setting_pane_t1

0xb52c,	// (0x0005b45f) list_setting_pane_t2_ParamLimits

0xb52c,	// (0x0005b45f) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0005f5e2) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0005f5e2) list_setting_pane_t

0xb56b,	// (0x0005b49e) set_value_pane_cp_ParamLimits

0xb56b,	// (0x0005b49e) set_value_pane_cp

0xb579,	// (0x0005b4ac) list_setting_number_pane_g1_ParamLimits

0xb579,	// (0x0005b4ac) list_setting_number_pane_g1

0xb585,	// (0x0005b4b8) list_setting_number_pane_g2_ParamLimits

0xb585,	// (0x0005b4b8) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0005f5e9) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0005f5e9) list_setting_number_pane_g

0xb591,	// (0x0005b4c4) list_setting_number_pane_t1_ParamLimits

0xb591,	// (0x0005b4c4) list_setting_number_pane_t1

0xb5aa,	// (0x0005b4dd) list_setting_number_pane_t2_ParamLimits

0xb5aa,	// (0x0005b4dd) list_setting_number_pane_t2

0xb5c4,	// (0x0005b4f7) list_setting_number_pane_t3_ParamLimits

0xb5c4,	// (0x0005b4f7) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0005f5ee) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0005f5ee) list_setting_number_pane_t

0xb56b,	// (0x0005b49e) set_value_pane_ParamLimits

0xb56b,	// (0x0005b49e) set_value_pane

0x2f7d,	// (0x00052eb0) bg_set_opt_pane_ParamLimits

0x2f7d,	// (0x00052eb0) bg_set_opt_pane

0x0447,	// (0x0005037a) set_value_pane_t1

0x2f9e,	// (0x00052ed1) slider_set_pane_cp3

0x2fa7,	// (0x00052eda) volume_small_pane_cp

0x2fb0,	// (0x00052ee3) list_form_gen_pane

0x2fb9,	// (0x00052eec) scroll_pane_cp8

0xb607,	// (0x0005b53a) form_field_data_pane_ParamLimits

0xb607,	// (0x0005b53a) form_field_data_pane

0xb624,	// (0x0005b557) form_field_data_wide_pane_ParamLimits

0xb624,	// (0x0005b557) form_field_data_wide_pane

0xb648,	// (0x0005b57b) form_field_popup_pane_ParamLimits

0xb648,	// (0x0005b57b) form_field_popup_pane

0x04ce,	// (0x00050401) form_field_popup_wide_pane_ParamLimits

0x04ce,	// (0x00050401) form_field_popup_wide_pane

0x04ef,	// (0x00050422) form_field_slider_pane_ParamLimits

0x04ef,	// (0x00050422) form_field_slider_pane

0x0502,	// (0x00050435) form_field_slider_wide_pane_ParamLimits

0x0502,	// (0x00050435) form_field_slider_wide_pane

0x2fca,	// (0x00052efd) data_form_pane

0xb674,	// (0x0005b5a7) form_field_data_pane_t1

0x2fd6,	// (0x00052f09) input_focus_pane

0x2fe4,	// (0x00052f17) data_form_wide_pane

0x0545,	// (0x00050478) form_field_data_wide_pane_t1

0x2d47,	// (0x00052c7a) input_focus_pane_cp6

0xb68e,	// (0x0005b5c1) form_field_popup_pane_t1

0x2fd6,	// (0x00052f09) input_focus_pane_cp7

0x3010,	// (0x00052f43) list_form_pane

0x0589,	// (0x000504bc) form_field_popup_wide_pane_t1

0x2fd6,	// (0x00052f09) input_focus_pane_cp8

0x301c,	// (0x00052f4f) list_form_wide_pane

0xb6b0,	// (0x0005b5e3) form_field_slider_pane_t1_ParamLimits

0xb6b0,	// (0x0005b5e3) form_field_slider_pane_t1

0xb6c8,	// (0x0005b5fb) form_field_slider_pane_t2_ParamLimits

0xb6c8,	// (0x0005b5fb) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0005f5fe) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0005f5fe) form_field_slider_pane_t

0x24d1,	// (0x00052404) input_focus_pane_cp9_ParamLimits

0x24d1,	// (0x00052404) input_focus_pane_cp9

0xb6dd,	// (0x0005b610) slider_cont_pane_ParamLimits

0xb6dd,	// (0x0005b610) slider_cont_pane

0x302b,	// (0x00052f5e) form_field_slider_wide_pane_t1_ParamLimits

0x302b,	// (0x00052f5e) form_field_slider_wide_pane_t1

0x05e7,	// (0x0005051a) form_field_slider_wide_pane_t2_ParamLimits

0x05e7,	// (0x0005051a) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0005f603) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0005f603) form_field_slider_wide_pane_t

0x24d1,	// (0x00052404) input_focus_pane_cp10_ParamLimits

0x24d1,	// (0x00052404) input_focus_pane_cp10

0xb6f1,	// (0x0005b624) slider_cont_pane_cp1_ParamLimits

0xb6f1,	// (0x0005b624) slider_cont_pane_cp1

0xb705,	// (0x0005b638) slider_form_pane_cp

0x303d,	// (0x00052f70) input_focus_pane_g1

0x3045,	// (0x00052f78) input_focus_pane_g2

0x304d,	// (0x00052f80) input_focus_pane_g3

0x3055,	// (0x00052f88) input_focus_pane_g4

0x305d,	// (0x00052f90) input_focus_pane_g5

0x3065,	// (0x00052f98) input_focus_pane_g6

0x306d,	// (0x00052fa0) input_focus_pane_g7

0x3075,	// (0x00052fa8) input_focus_pane_g8

0x307d,	// (0x00052fb0) input_focus_pane_g9

0x216b,	// (0x0005209e) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0005f608) input_focus_pane_g

0x5105,	// (0x00055038) wait_border_pane_g3_copy1

0xb70d,	// (0x0005b640) data_form_pane_t1

0x216b,	// (0x0005209e) wait_anim_pane_g1_copy1

0xbb2b,	// (0x0005ba5e) data_form_wide_pane_t1

0x0634,	// (0x00050567) list_form_graphic_pane_cp_ParamLimits

0x0634,	// (0x00050567) list_form_graphic_pane_cp

0x608a,	// (0x00055fbd) slider_form_pane_g1

0x6093,	// (0x00055fc6) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0005f8fb) slider_form_pane_g

0xb729,	// (0x0005b65c) list_form_graphic_pane_ParamLimits

0xb729,	// (0x0005b65c) list_form_graphic_pane

0x0646,	// (0x00050579) list_form_graphic_pane_g1

0x064e,	// (0x00050581) list_form_graphic_pane_t1_ParamLimits

0x064e,	// (0x00050581) list_form_graphic_pane_t1

0x2255,	// (0x00052188) list_highlight_pane_cp5_ParamLimits

0x2255,	// (0x00052188) list_highlight_pane_cp5

0xb73a,	// (0x0005b66d) find_pane_g1

0x3085,	// (0x00052fb8) input_find_pane

0xb743,	// (0x0005b676) input_find_pane_g1_ParamLimits

0xb743,	// (0x0005b676) input_find_pane_g1

0xb74f,	// (0x0005b682) input_find_pane_t1_ParamLimits

0xb74f,	// (0x0005b682) input_find_pane_t1

0xb764,	// (0x0005b697) input_find_pane_t2_ParamLimits

0xb764,	// (0x0005b697) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0005f61d) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0005f61d) input_find_pane_t

0x308e,	// (0x00052fc1) input_focus_pane_cp5_ParamLimits

0x308e,	// (0x00052fc1) input_focus_pane_cp5

0xc367,	// (0x0005c29a) bg_popup_window_pane_cp2_ParamLimits

0xc367,	// (0x0005c29a) bg_popup_window_pane_cp2

0xc374,	// (0x0005c2a7) listscroll_menu_pane_ParamLimits

0xc374,	// (0x0005c2a7) listscroll_menu_pane

0xc380,	// (0x0005c2b3) popup_submenu_window_ParamLimits

0xc380,	// (0x0005c2b3) popup_submenu_window

0x30f1,	// (0x00053024) find_popup_pane_g1

0x30f9,	// (0x0005302c) input_popup_find_pane_cp

0x308e,	// (0x00052fc1) input_focus_pane_cp4_ParamLimits

0x308e,	// (0x00052fc1) input_focus_pane_cp4

0x3111,	// (0x00053044) input_popup_find_pane_t1_ParamLimits

0x3111,	// (0x00053044) input_popup_find_pane_t1

0x2175,	// (0x000520a8) bg_popup_sub_pane_cp

0x313f,	// (0x00053072) listscroll_popup_sub_pane

0x3147,	// (0x0005307a) list_submenu_pane_ParamLimits

0x3147,	// (0x0005307a) list_submenu_pane

0x3158,	// (0x0005308b) scroll_pane_cp4

0x3160,	// (0x00053093) list_single_popup_submenu_pane_ParamLimits

0x3160,	// (0x00053093) list_single_popup_submenu_pane

0x3175,	// (0x000530a8) list_single_popup_submenu_pane_g1

0x317d,	// (0x000530b0) list_single_popup_submenu_pane_t1_ParamLimits

0x317d,	// (0x000530b0) list_single_popup_submenu_pane_t1

0x24d1,	// (0x00052404) bg_active_tab_pane_cp1_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp1

0xc3be,	// (0x0005c2f1) tabs_2_active_pane_g1

0xc3c6,	// (0x0005c2f9) tabs_2_active_pane_t1

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp1_ParamLimits

0x24d1,	// (0x00052404) bg_passive_tab_pane_cp1

0xc3be,	// (0x0005c2f1) tabs_2_passive_pane_g1

0xc3c6,	// (0x0005c2f9) tabs_2_passive_pane_t1

0x2255,	// (0x00052188) bg_active_tab_pane_cp4

0xc3d8,	// (0x0005c30b) tabs_2_long_active_pane_t1

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp4

0x0d7c,	// (0x00050caf) list_single_midp_graphic_pane_g4_ParamLimits

0x2255,	// (0x00052188) bg_active_tab_pane_cp5

0xc3eb,	// (0x0005c31e) tabs_3_long_active_pane_t1

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp5

0x0d7c,	// (0x00050caf) list_single_midp_graphic_pane_g4

0x2255,	// (0x00052188) bg_popup_window_pane_cp13_ParamLimits

0x2255,	// (0x00052188) bg_popup_window_pane_cp13

0x31f4,	// (0x00053127) listscroll_popup_fast_pane_ParamLimits

0x31f4,	// (0x00053127) listscroll_popup_fast_pane

0x3203,	// (0x00053136) grid_popup_fast_pane_ParamLimits

0x3203,	// (0x00053136) grid_popup_fast_pane

0x3215,	// (0x00053148) scroll_pane_cp9_ParamLimits

0x3215,	// (0x00053148) scroll_pane_cp9

0x79bd,	// (0x000578f0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x79bd,	// (0x000578f0) list_single_graphic_hl_pane_t1_cp2

0x3239,	// (0x0005316c) input_focus_pane_cp20_ParamLimits

0x3239,	// (0x0005316c) input_focus_pane_cp20

0x3247,	// (0x0005317a) query_popup_data_pane_t1_ParamLimits

0x3247,	// (0x0005317a) query_popup_data_pane_t1

0x325a,	// (0x0005318d) query_popup_data_pane_t2_ParamLimits

0x325a,	// (0x0005318d) query_popup_data_pane_t2

0x32a0,	// (0x000531d3) query_popup_data_pane_t3_ParamLimits

0x32a0,	// (0x000531d3) query_popup_data_pane_t3

0x32e1,	// (0x00053214) query_popup_data_pane_t4_ParamLimits

0x32e1,	// (0x00053214) query_popup_data_pane_t4

0x331d,	// (0x00053250) query_popup_data_pane_t5_ParamLimits

0x331d,	// (0x00053250) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0005f622) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0005f622) query_popup_data_pane_t

0x303d,	// (0x00052f70) bg_set_opt_pane_g1

0x3045,	// (0x00052f78) bg_set_opt_pane_g2

0x304d,	// (0x00052f80) bg_set_opt_pane_g3

0x3055,	// (0x00052f88) bg_set_opt_pane_g4

0x305d,	// (0x00052f90) bg_set_opt_pane_g5

0x3065,	// (0x00052f98) bg_set_opt_pane_g6

0x306d,	// (0x00052fa0) bg_set_opt_pane_g7

0x3075,	// (0x00052fa8) bg_set_opt_pane_g8

0x307d,	// (0x00052fb0) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0005f62d) bg_set_opt_pane_g

0x09aa,	// (0x000508dd) control_top_pane_stacon_ParamLimits

0x09aa,	// (0x000508dd) control_top_pane_stacon

0x09fd,	// (0x00050930) signal_pane_stacon_ParamLimits

0x09fd,	// (0x00050930) signal_pane_stacon

0x38d5,	// (0x00053808) stacon_top_pane_g1_ParamLimits

0x38d5,	// (0x00053808) stacon_top_pane_g1

0x0a22,	// (0x00050955) title_pane_stacon_ParamLimits

0x0a22,	// (0x00050955) title_pane_stacon

0x0a4c,	// (0x0005097f) uni_indicator_pane_stacon_ParamLimits

0x0a4c,	// (0x0005097f) uni_indicator_pane_stacon

0x0a64,	// (0x00050997) battery_pane_stacon_ParamLimits

0x0a64,	// (0x00050997) battery_pane_stacon

0x0aa8,	// (0x000509db) control_bottom_pane_stacon_ParamLimits

0x0aa8,	// (0x000509db) control_bottom_pane_stacon

0x0acb,	// (0x000509fe) navi_pane_stacon_ParamLimits

0x0acb,	// (0x000509fe) navi_pane_stacon

0x38f7,	// (0x0005382a) stacon_bottom_pane_g1_ParamLimits

0x38f7,	// (0x0005382a) stacon_bottom_pane_g1

0x0699,	// (0x000505cc) aid_levels_signal_lsc_ParamLimits

0x0699,	// (0x000505cc) aid_levels_signal_lsc

0x06b0,	// (0x000505e3) signal_pane_stacon_g1_ParamLimits

0x06b0,	// (0x000505e3) signal_pane_stacon_g1

0x06c4,	// (0x000505f7) signal_pane_stacon_g2_ParamLimits

0x06c4,	// (0x000505f7) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0005f640) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0005f640) signal_pane_stacon_g

0x06f9,	// (0x0005062c) title_pane_stacon_t1_ParamLimits

0x06f9,	// (0x0005062c) title_pane_stacon_t1

0x3361,	// (0x00053294) uni_indicator_pane_stacon_g1

0x336b,	// (0x0005329e) uni_indicator_pane_stacon_g2

0x3375,	// (0x000532a8) uni_indicator_pane_stacon_g3

0x337f,	// (0x000532b2) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0005f64c) uni_indicator_pane_stacon_g

0x071e,	// (0x00050651) control_top_pane_stacon_g1

0x0726,	// (0x00050659) control_top_pane_stacon_t1_ParamLimits

0x0726,	// (0x00050659) control_top_pane_stacon_t1

0x075d,	// (0x00050690) aid_levels_battery_lsc_ParamLimits

0x075d,	// (0x00050690) aid_levels_battery_lsc

0x0775,	// (0x000506a8) battery_pane_stacon_g1_ParamLimits

0x0775,	// (0x000506a8) battery_pane_stacon_g1

0x0788,	// (0x000506bb) battery_pane_stacon_g2_ParamLimits

0x0788,	// (0x000506bb) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0005f655) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0005f655) battery_pane_stacon_g

0x07c6,	// (0x000506f9) navi_icon_pane_stacon

0x07da,	// (0x0005070d) navi_navi_pane_stacon

0x07c6,	// (0x000506f9) navi_text_pane_stacon

0x071e,	// (0x00050651) control_bottom_pane_stacon_g1

0x07f0,	// (0x00050723) control_bottom_pane_stacon_t1_ParamLimits

0x07f0,	// (0x00050723) control_bottom_pane_stacon_t1

0xc3fd,	// (0x0005c330) grid_app_pane_ParamLimits

0xc3fd,	// (0x0005c330) grid_app_pane

0xc435,	// (0x0005c368) scroll_pane_cp15_ParamLimits

0xc435,	// (0x0005c368) scroll_pane_cp15

0xc452,	// (0x0005c385) cell_app_pane_ParamLimits

0xc452,	// (0x0005c385) cell_app_pane

0xc493,	// (0x0005c3c6) cell_app_pane_g1_ParamLimits

0xc493,	// (0x0005c3c6) cell_app_pane_g1

0x342c,	// (0x0005335f) cell_app_pane_g2_ParamLimits

0x342c,	// (0x0005335f) cell_app_pane_g2

0x0001,

0xf727,	// (0x0005f65a) cell_app_pane_g_ParamLimits

0xf727,	// (0x0005f65a) cell_app_pane_g

0x3438,	// (0x0005336b) cell_app_pane_t1_ParamLimits

0x3438,	// (0x0005336b) cell_app_pane_t1

0x344a,	// (0x0005337d) grid_highlight_pane_ParamLimits

0x344a,	// (0x0005337d) grid_highlight_pane

0x303d,	// (0x00052f70) cell_highlight_pane_g1

0x3045,	// (0x00052f78) cell_highlight_pane_g2

0x304d,	// (0x00052f80) cell_highlight_pane_g3

0x3055,	// (0x00052f88) cell_highlight_pane_g4

0x305d,	// (0x00052f90) cell_highlight_pane_g5

0x3065,	// (0x00052f98) cell_highlight_pane_g6

0x306d,	// (0x00052fa0) cell_highlight_pane_g7

0x3075,	// (0x00052fa8) cell_highlight_pane_g8

0x307d,	// (0x00052fb0) cell_highlight_pane_g9

0x216b,	// (0x0005209e) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0005f608) cell_highlight_pane_g

0x345b,	// (0x0005338e) bg_scroll_pane

0x083a,	// (0x0005076d) scroll_handle_pane

0x34a2,	// (0x000533d5) scroll_bg_pane_g1

0x34b7,	// (0x000533ea) scroll_bg_pane_g2

0x34cf,	// (0x00053402) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0005f65f) scroll_bg_pane_g

0x34e4,	// (0x00053417) scroll_handle_focus_pane_ParamLimits

0x34e4,	// (0x00053417) scroll_handle_focus_pane

0x34a2,	// (0x000533d5) scroll_handle_pane_g1

0x34f1,	// (0x00053424) scroll_handle_pane_g2

0x34cf,	// (0x00053402) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0005f666) scroll_handle_pane_g

0x308e,	// (0x00052fc1) bg_popup_sub_pane_cp21_ParamLimits

0x308e,	// (0x00052fc1) bg_popup_sub_pane_cp21

0x3505,	// (0x00053438) popup_fep_japan_predictive_window_t1_ParamLimits

0x3505,	// (0x00053438) popup_fep_japan_predictive_window_t1

0x351c,	// (0x0005344f) popup_fep_japan_predictive_window_t2_ParamLimits

0x351c,	// (0x0005344f) popup_fep_japan_predictive_window_t2

0x354f,	// (0x00053482) popup_fep_japan_predictive_window_t3_ParamLimits

0x354f,	// (0x00053482) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0005f66d) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0005f66d) popup_fep_japan_predictive_window_t

0x2175,	// (0x000520a8) bg_popup_sub_pane_cp23

0x3586,	// (0x000534b9) listscroll_japin_cand_pane

0x358e,	// (0x000534c1) popup_fep_japan_candidate_window_t1

0x359c,	// (0x000534cf) candidate_pane_ParamLimits

0x359c,	// (0x000534cf) candidate_pane

0x35ae,	// (0x000534e1) scroll_pane_cp30

0x35b8,	// (0x000534eb) list_single_popup_jap_candidate_pane_ParamLimits

0x35b8,	// (0x000534eb) list_single_popup_jap_candidate_pane

0x2175,	// (0x000520a8) list_highlight_pane_cp30

0x35cc,	// (0x000534ff) list_single_popup_jap_candidate_pane_t1

0xc4b7,	// (0x0005c3ea) level_1_signal

0xc4c9,	// (0x0005c3fc) level_2_signal

0xc4dc,	// (0x0005c40f) level_3_signal

0xc4ef,	// (0x0005c422) level_4_signal

0xc502,	// (0x0005c435) level_5_signal

0xc515,	// (0x0005c448) level_6_signal

0xc528,	// (0x0005c45b) level_7_signal

0xc4b7,	// (0x0005c3ea) level_1_battery

0xc4c9,	// (0x0005c3fc) level_2_battery

0xc4dc,	// (0x0005c40f) level_3_battery

0xc4ef,	// (0x0005c422) level_4_battery

0xc502,	// (0x0005c435) level_5_battery

0xc515,	// (0x0005c448) level_6_battery

0xc528,	// (0x0005c45b) level_7_battery

0x364e,	// (0x00053581) list_menu_pane_ParamLimits

0x364e,	// (0x00053581) list_menu_pane

0x365f,	// (0x00053592) scroll_pane_cp25_ParamLimits

0x365f,	// (0x00053592) scroll_pane_cp25

0x3678,	// (0x000535ab) list_double2_graphic_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double2_graphic_pane_cp2

0x3678,	// (0x000535ab) list_double2_large_graphic_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double2_large_graphic_pane_cp2

0x3678,	// (0x000535ab) list_double2_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double2_pane_cp2

0x3678,	// (0x000535ab) list_double_graphic_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double_graphic_pane_cp2

0x3678,	// (0x000535ab) list_double_large_graphic_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double_large_graphic_pane_cp2

0x3678,	// (0x000535ab) list_double_number_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double_number_pane_cp2

0x3678,	// (0x000535ab) list_double_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double_pane_cp2

0xc53b,	// (0x0005c46e) list_single_2graphic_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_2graphic_pane_cp2

0xc53b,	// (0x0005c46e) list_single_graphic_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_graphic_heading_pane_cp2

0xc53b,	// (0x0005c46e) list_single_graphic_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_graphic_pane_cp2

0xc53b,	// (0x0005c46e) list_single_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_heading_pane_cp2

0x36bb,	// (0x000535ee) list_single_large_graphic_pane_cp2_ParamLimits

0x36bb,	// (0x000535ee) list_single_large_graphic_pane_cp2

0xc53b,	// (0x0005c46e) list_single_number_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_number_heading_pane_cp2

0xc53b,	// (0x0005c46e) list_single_number_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_number_pane_cp2

0xc53b,	// (0x0005c46e) list_single_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_pane_cp2

0x3710,	// (0x00053643) bg_popup_sub_pane_cp22

0x08ec,	// (0x0005081f) popup_side_volume_key_window_g1

0x0916,	// (0x00050849) popup_side_volume_key_window_t1

0x0934,	// (0x00050867) volume_small_pane_cp1

0x24d1,	// (0x00052404) bg_popup_sub_pane_cp24_ParamLimits

0x24d1,	// (0x00052404) bg_popup_sub_pane_cp24

0x3726,	// (0x00053659) fep_china_uni_candidate_pane_ParamLimits

0x3726,	// (0x00053659) fep_china_uni_candidate_pane

0x373a,	// (0x0005366d) fep_china_uni_entry_pane

0x374a,	// (0x0005367d) popup_fep_china_uni_window_g1

0x3766,	// (0x00053699) fep_china_uni_entry_pane_g1

0x3770,	// (0x000536a3) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0005f69a) fep_china_uni_entry_pane_g

0x377a,	// (0x000536ad) fep_entry_item_pane

0x3784,	// (0x000536b7) fep_candidate_item_pane

0x378c,	// (0x000536bf) fep_china_uni_candidate_pane_g1

0x3796,	// (0x000536c9) fep_china_uni_candidate_pane_g2

0x379e,	// (0x000536d1) fep_china_uni_candidate_pane_g3

0x37a6,	// (0x000536d9) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0005f69f) fep_china_uni_candidate_pane_g

0x216b,	// (0x0005209e) fep_entry_item_pane_g1

0x37b0,	// (0x000536e3) fep_entry_item_pane_t1_ParamLimits

0x37b0,	// (0x000536e3) fep_entry_item_pane_t1

0x37c6,	// (0x000536f9) fep_candidate_item_pane_t1_ParamLimits

0x37c6,	// (0x000536f9) fep_candidate_item_pane_t1

0x37db,	// (0x0005370e) fep_candidate_item_pane_t2_ParamLimits

0x37db,	// (0x0005370e) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0005f6a8) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0005f6a8) fep_candidate_item_pane_t

0x2255,	// (0x00052188) list_highlight_pane_cp31_ParamLimits

0x2255,	// (0x00052188) list_highlight_pane_cp31

0x37ed,	// (0x00053720) level_1_signal_lsc

0x37f6,	// (0x00053729) level_2_signal_lsc

0x37ff,	// (0x00053732) level_3_signal_lsc

0x3808,	// (0x0005373b) level_4_signal_lsc

0x3811,	// (0x00053744) level_5_signal_lsc

0x381a,	// (0x0005374d) level_6_signal_lsc

0x3823,	// (0x00053756) level_7_signal_lsc

0x3823,	// (0x00053756) level_1_battery_lsc

0x382c,	// (0x0005375f) level_2_battery_lsc

0x3835,	// (0x00053768) level_3_battery_lsc

0x383e,	// (0x00053771) level_4_battery_lsc

0x3847,	// (0x0005377a) level_5_battery_lsc

0x3850,	// (0x00053783) level_6_battery_lsc

0x37ed,	// (0x00053720) level_7_battery_lsc

0x3859,	// (0x0005378c) scroll_handle_focus_pane_g1

0x3862,	// (0x00053795) scroll_handle_focus_pane_g2

0x386b,	// (0x0005379e) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0005f6ad) scroll_handle_focus_pane_g

0xb782,	// (0x0005b6b5) list_single_2graphic_pane_g1_ParamLimits

0xb782,	// (0x0005b6b5) list_single_2graphic_pane_g1

0xc32a,	// (0x0005c25d) list_single_2graphic_pane_g2_ParamLimits

0xc32a,	// (0x0005c25d) list_single_2graphic_pane_g2

0x28b2,	// (0x000527e5) list_single_2graphic_pane_g3_ParamLimits

0x28b2,	// (0x000527e5) list_single_2graphic_pane_g3

0xc59e,	// (0x0005c4d1) list_single_2graphic_pane_g4_ParamLimits

0xc59e,	// (0x0005c4d1) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0005f6b4) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0005f6b4) list_single_2graphic_pane_g

0xb78e,	// (0x0005b6c1) list_single_2graphic_pane_t1_ParamLimits

0xb78e,	// (0x0005b6c1) list_single_2graphic_pane_t1

0xc5af,	// (0x0005c4e2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc5af,	// (0x0005c4e2) list_double2_graphic_large_graphic_pane_g1

0xb40f,	// (0x0005b342) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb40f,	// (0x0005b342) list_double2_graphic_large_graphic_pane_g2

0xb35c,	// (0x0005b28f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb35c,	// (0x0005b28f) list_double2_graphic_large_graphic_pane_g3

0xb7bc,	// (0x0005b6ef) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb7bc,	// (0x0005b6ef) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0005f6bd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0005f6bd) list_double2_graphic_large_graphic_pane_g

0xb7c8,	// (0x0005b6fb) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb7c8,	// (0x0005b6fb) list_double2_graphic_large_graphic_pane_t1

0xb7de,	// (0x0005b711) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7de,	// (0x0005b711) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0005f6c6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0005f6c6) list_double2_graphic_large_graphic_pane_t

0x39b9,	// (0x000538ec) popup_fast_swap_window_ParamLimits

0x39b9,	// (0x000538ec) popup_fast_swap_window

0x39d7,	// (0x0005390a) popup_side_volume_key_window

0x39f5,	// (0x00053928) stacon_top_pane

0x39ff,	// (0x00053932) status_pane_ParamLimits

0x39ff,	// (0x00053932) status_pane

0x39f5,	// (0x00053928) status_small_pane

0x2175,	// (0x000520a8) control_pane

0x2175,	// (0x000520a8) stacon_bottom_pane

0x2fb9,	// (0x00052eec) scroll_pane_cp121

0x2fb0,	// (0x00052ee3) set_content_pane

0xc5c1,	// (0x0005c4f4) bg_active_tab_pane_g1_cp1

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp1

0xc5ca,	// (0x0005c4fd) bg_active_tab_pane_g3_cp1

0xc5c1,	// (0x0005c4f4) bg_passive_tab_pane_g1_cp1

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp1

0xc5ca,	// (0x0005c4fd) bg_passive_tab_pane_g3_cp1

0xc5d3,	// (0x0005c506) bg_active_tab_pane_g1_cp2

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp2

0xc5dc,	// (0x0005c50f) bg_active_tab_pane_g3_cp2

0xc5d3,	// (0x0005c506) bg_passive_tab_pane_g1_cp2

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp2

0xc5dc,	// (0x0005c50f) bg_passive_tab_pane_g3_cp2

0xc5e5,	// (0x0005c518) bg_active_tab_pane_g1_cp3

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp3

0xc5ee,	// (0x0005c521) bg_active_tab_pane_g3_cp3

0xc5e5,	// (0x0005c518) bg_passive_tab_pane_g1_cp3

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp3

0xc5ee,	// (0x0005c521) bg_passive_tab_pane_g3_cp3

0xc5f7,	// (0x0005c52a) bg_active_tab_pane_g1_cp4

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp4

0xc600,	// (0x0005c533) bg_active_tab_pane_g3_cp4

0xc5f7,	// (0x0005c52a) bg_passive_tab_pane_g1_cp4

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp4

0xc600,	// (0x0005c533) bg_passive_tab_pane_g3_cp4

0x3913,	// (0x00053846) bg_active_tab_pane_g1_cp5

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp5

0x391c,	// (0x0005384f) bg_active_tab_pane_g3_cp5

0x3913,	// (0x00053846) bg_passive_tab_pane_g1_cp5

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp5

0x391c,	// (0x0005384f) bg_passive_tab_pane_g3_cp5

0x3160,	// (0x00053093) list_set_graphic_pane_ParamLimits

0x3160,	// (0x00053093) list_set_graphic_pane

0x2175,	// (0x000520a8) bg_set_opt_pane_cp4

0xc609,	// (0x0005c53c) list_set_graphic_pane_g1_ParamLimits

0xc609,	// (0x0005c53c) list_set_graphic_pane_g1

0xc615,	// (0x0005c548) list_set_graphic_pane_g2_ParamLimits

0xc615,	// (0x0005c548) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0005f6cb) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0005f6cb) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0005fa36) volume_small_pane_cp_g

0x396a,	// (0x0005389d) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x396a,	// (0x0005389d) list_double2_large_graphic_pane_g1_cp2

0x3978,	// (0x000538ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3978,	// (0x000538ab) list_double2_large_graphic_pane_g2_cp2

0x3989,	// (0x000538bc) list_double2_large_graphic_pane_g3_cp2

0x3991,	// (0x000538c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3991,	// (0x000538c4) list_double2_large_graphic_pane_t1_cp2

0x39a7,	// (0x000538da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x39a7,	// (0x000538da) list_double2_large_graphic_pane_t2_cp2

0x5bef,	// (0x00055b22) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5bef,	// (0x00055b22) list_double_large_graphic_pane_g1_cp2

0x5c02,	// (0x00055b35) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5c02,	// (0x00055b35) list_double_large_graphic_pane_g2_cp2

0x3b1d,	// (0x00053a50) list_double_large_graphic_pane_g3_cp2

0x5c13,	// (0x00055b46) list_double_large_graphic_pane_g4_cp

0x5c1b,	// (0x00055b4e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5c1b,	// (0x00055b4e) list_double_large_graphic_pane_t1_cp2

0x5c32,	// (0x00055b65) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5c32,	// (0x00055b65) list_double_large_graphic_pane_t2_cp2

0x3a0d,	// (0x00053940) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a0d,	// (0x00053940) list_double2_graphic_pane_g1_cp2

0x3a1b,	// (0x0005394e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a1b,	// (0x0005394e) list_double2_graphic_pane_g2_cp2

0x3a2c,	// (0x0005395f) list_double2_graphic_pane_g3_cp2

0x3a36,	// (0x00053969) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3a36,	// (0x00053969) list_double2_graphic_pane_t1_cp2

0x3a4c,	// (0x0005397f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3a4c,	// (0x0005397f) list_double2_graphic_pane_t2_cp2

0x3a5e,	// (0x00053991) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3a5e,	// (0x00053991) list_single_number_heading_pane_g1_cp2

0x3a6a,	// (0x0005399d) list_single_number_heading_pane_g2_cp2

0x3a72,	// (0x000539a5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3a72,	// (0x000539a5) list_single_number_heading_pane_t1_cp2

0x3a88,	// (0x000539bb) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3a88,	// (0x000539bb) list_single_number_heading_pane_t2_cp2

0x3a9c,	// (0x000539cf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3a9c,	// (0x000539cf) list_single_number_heading_pane_t3_cp2

0x3a5e,	// (0x00053991) list_single_heading_pane_g1_cp2_ParamLimits

0x3a5e,	// (0x00053991) list_single_heading_pane_g1_cp2

0x3a6a,	// (0x0005399d) list_single_heading_pane_g2_cp2

0x3a72,	// (0x000539a5) list_single_heading_pane_t1_cp2_ParamLimits

0x3a72,	// (0x000539a5) list_single_heading_pane_t1_cp2

0x59e9,	// (0x0005591c) list_single_heading_pane_t2_cp2_ParamLimits

0x59e9,	// (0x0005591c) list_single_heading_pane_t2_cp2

0x592b,	// (0x0005585e) list_double_graphic_pane_g1_cp2_ParamLimits

0x592b,	// (0x0005585e) list_double_graphic_pane_g1_cp2

0x5937,	// (0x0005586a) list_double_graphic_pane_g2_cp2_ParamLimits

0x5937,	// (0x0005586a) list_double_graphic_pane_g2_cp2

0x5946,	// (0x00055879) list_double_graphic_pane_g3_cp2

0x594e,	// (0x00055881) list_double_graphic_pane_t1_cp2_ParamLimits

0x594e,	// (0x00055881) list_double_graphic_pane_t1_cp2

0x5964,	// (0x00055897) list_double_graphic_pane_t2_cp2_ParamLimits

0x5964,	// (0x00055897) list_double_graphic_pane_t2_cp2

0x3b11,	// (0x00053a44) list_double_number_pane_g1_cp2_ParamLimits

0x3b11,	// (0x00053a44) list_double_number_pane_g1_cp2

0x3b1d,	// (0x00053a50) list_double_number_pane_g2_cp2

0x58ef,	// (0x00055822) list_double_number_pane_t1_cp2_ParamLimits

0x58ef,	// (0x00055822) list_double_number_pane_t1_cp2

0x5903,	// (0x00055836) list_double_number_pane_t2_cp2_ParamLimits

0x5903,	// (0x00055836) list_double_number_pane_t2_cp2

0x5919,	// (0x0005584c) list_double_number_pane_t3_cp2_ParamLimits

0x5919,	// (0x0005584c) list_double_number_pane_t3_cp2

0x57d8,	// (0x0005570b) list_single_graphic_pane_g1_cp2_ParamLimits

0x57d8,	// (0x0005570b) list_single_graphic_pane_g1_cp2

0x3b77,	// (0x00053aaa) list_single_graphic_pane_g2_cp2_ParamLimits

0x3b77,	// (0x00053aaa) list_single_graphic_pane_g2_cp2

0x3b83,	// (0x00053ab6) list_single_graphic_pane_g3_cp2

0x57ae,	// (0x000556e1) list_single_graphic_pane_t1_cp2_ParamLimits

0x57ae,	// (0x000556e1) list_single_graphic_pane_t1_cp2

0x3b77,	// (0x00053aaa) list_single_number_pane_g1_cp2_ParamLimits

0x3b77,	// (0x00053aaa) list_single_number_pane_g1_cp2

0x3b83,	// (0x00053ab6) list_single_number_pane_g2_cp2

0x57ae,	// (0x000556e1) list_single_number_pane_t1_cp2_ParamLimits

0x57ae,	// (0x000556e1) list_single_number_pane_t1_cp2

0x57c4,	// (0x000556f7) list_single_number_pane_t2_cp2_ParamLimits

0x57c4,	// (0x000556f7) list_single_number_pane_t2_cp2

0x3978,	// (0x000538ab) list_double2_pane_g1_cp2_ParamLimits

0x3978,	// (0x000538ab) list_double2_pane_g1_cp2

0x3989,	// (0x000538bc) list_double2_pane_g2_cp2

0x3ae9,	// (0x00053a1c) list_double2_pane_t1_cp2_ParamLimits

0x3ae9,	// (0x00053a1c) list_double2_pane_t1_cp2

0x3aff,	// (0x00053a32) list_double2_pane_t2_cp2_ParamLimits

0x3aff,	// (0x00053a32) list_double2_pane_t2_cp2

0x3b11,	// (0x00053a44) list_double_pane_g1_cp2_ParamLimits

0x3b11,	// (0x00053a44) list_double_pane_g1_cp2

0x3b1d,	// (0x00053a50) list_double_pane_g2_cp2

0x3b25,	// (0x00053a58) list_double_pane_t1_cp2_ParamLimits

0x3b25,	// (0x00053a58) list_double_pane_t1_cp2

0x3b3b,	// (0x00053a6e) list_double_pane_t2_cp2_ParamLimits

0x3b3b,	// (0x00053a6e) list_double_pane_t2_cp2

0x3b67,	// (0x00053a9a) list_single_pane_cp2_g3

0x3b77,	// (0x00053aaa) list_single_pane_g1_cp2_ParamLimits

0x3b77,	// (0x00053aaa) list_single_pane_g1_cp2

0x3b83,	// (0x00053ab6) list_single_pane_g2_cp2

0x3b8b,	// (0x00053abe) list_single_pane_t1_cp2_ParamLimits

0x3b8b,	// (0x00053abe) list_single_pane_t1_cp2

0x3ba3,	// (0x00053ad6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3ba3,	// (0x00053ad6) list_single_large_graphic_pane_g1_cp2

0x3bb1,	// (0x00053ae4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_large_graphic_pane_g2_cp2

0x3bbd,	// (0x00053af0) list_single_large_graphic_pane_g3_cp2

0x3bc5,	// (0x00053af8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3bc5,	// (0x00053af8) list_single_large_graphic_pane_g4_cp1

0x3bdf,	// (0x00053b12) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3bdf,	// (0x00053b12) list_single_large_graphic_pane_t1_cp2

0x5778,	// (0x000556ab) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5778,	// (0x000556ab) list_single_graphic_heading_pane_g1_cp2

0x5745,	// (0x00055678) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5745,	// (0x00055678) list_single_graphic_heading_pane_g4_cp2

0x3b83,	// (0x00053ab6) list_single_graphic_heading_pane_g5_cp2

0x5784,	// (0x000556b7) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5784,	// (0x000556b7) list_single_graphic_heading_pane_t1_cp2

0x579a,	// (0x000556cd) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x579a,	// (0x000556cd) list_single_graphic_heading_pane_t2_cp2

0x5739,	// (0x0005566c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5739,	// (0x0005566c) list_single_2graphic_pane_g1_cp2

0x5745,	// (0x00055678) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5745,	// (0x00055678) list_single_2graphic_pane_g2_cp2

0x3b83,	// (0x00053ab6) list_single_2graphic_pane_g3_cp2

0x5756,	// (0x00055689) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5756,	// (0x00055689) list_single_2graphic_pane_g4_cp2

0x5762,	// (0x00055695) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5762,	// (0x00055695) list_single_2graphic_pane_t1_cp2

0x216b,	// (0x0005209e) list_highlight_pane_g10_cp1

0x5311,	// (0x00055244) list_highlight_pane_g1_cp1

0x5319,	// (0x0005524c) list_highlight_pane_g2_cp1

0x5321,	// (0x00055254) list_highlight_pane_g3_cp1

0x5329,	// (0x0005525c) list_highlight_pane_g4_cp1

0x5331,	// (0x00055264) list_highlight_pane_g5_cp1

0x5339,	// (0x0005526c) list_highlight_pane_g6_cp1

0x5341,	// (0x00055274) list_highlight_pane_g7_cp1

0x5349,	// (0x0005527c) list_highlight_pane_g8_cp1

0x5351,	// (0x00055284) list_highlight_pane_g9_cp1

0xd3c5,	// (0x0005d2f8) form_field_slider_pane_t3

0xd3d3,	// (0x0005d306) form_field_slider_pane_t4

0x524d,	// (0x00055180) slider_form_pane_ParamLimits

0x524d,	// (0x00055180) slider_form_pane

0x2175,	// (0x000520a8) control_abbreviations

0x2175,	// (0x000520a8) control_conventions

0x2175,	// (0x000520a8) control_definitions

0x2175,	// (0x000520a8) format_table_attribute

0x5a3f,	// (0x00055972) bg_popup_preview_window_pane_g9

0x2175,	// (0x000520a8) format_table_data2

0x2175,	// (0x000520a8) format_table_data3

0x2175,	// (0x000520a8) format_table_data_example

0x0008,

0x2175,	// (0x000520a8) intro_purpose

0xf928,	// (0x0005f85b) bg_popup_preview_window_pane_g

0x2175,	// (0x000520a8) texts_category

0x2175,	// (0x000520a8) texts_graphics

0x3bf5,	// (0x00053b28) text_digital

0x3c04,	// (0x00053b37) text_primary

0x3c13,	// (0x00053b46) text_primary_small

0x3c22,	// (0x00053b55) text_secondary

0x3c31,	// (0x00053b64) text_title

0x61db,	// (0x0005610e) bg_passive_tab_pane_g1_cp3_srt

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp3_srt

0x61e4,	// (0x00056117) bg_passive_tab_pane_g3_cp3_srt

0x24d1,	// (0x00052404) bg_active_tab_pane_cp3_srt_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp3_srt

0x61ed,	// (0x00056120) tabs_4_active_pane_srt_g1

0xd7d8,	// (0x0005d70b) tabs_4_active_pane_srt_t1_ParamLimits

0xd7d8,	// (0x0005d70b) tabs_4_active_pane_srt_t1

0x61db,	// (0x0005610e) bg_active_tab_pane_g1_cp3_copy1

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp3_copy1

0x61e4,	// (0x00056117) bg_active_tab_pane_g3_cp3_copy1

0x2255,	// (0x00052188) tabs_2_long_active_pane_srt_ParamLimits

0x2255,	// (0x00052188) tabs_2_long_active_pane_srt

0x2255,	// (0x00052188) tabs_2_long_passive_pane_srt_ParamLimits

0x2255,	// (0x00052188) tabs_2_long_passive_pane_srt

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp4_srt

0x5e8f,	// (0x00055dc2) bg_passive_tab_pane_g1_cp4_srt

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp4_srt

0x5e98,	// (0x00055dcb) bg_passive_tab_pane_g3_cp4_srt

0x2255,	// (0x00052188) bg_active_tab_pane_cp4_srt_ParamLimits

0x2255,	// (0x00052188) bg_active_tab_pane_cp4_srt

0xd5ce,	// (0x0005d501) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd5ce,	// (0x0005d501) tabs_2_long_active_pane_srt_t1

0x5e8f,	// (0x00055dc2) bg_active_tab_pane_g1_cp4_srt

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp4_srt

0x5e98,	// (0x00055dcb) bg_active_tab_pane_g3_cp4_srt

0x24d1,	// (0x00052404) tabs_3_long_active_pane_srt_ParamLimits

0x24d1,	// (0x00052404) tabs_3_long_active_pane_srt

0x24d1,	// (0x00052404) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24d1,	// (0x00052404) tabs_3_long_passive_pane_cp_srt

0x24d1,	// (0x00052404) tabs_3_long_passive_pane_srt_ParamLimits

0x24d1,	// (0x00052404) tabs_3_long_passive_pane_srt

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp5_srt

0x3913,	// (0x00053846) bg_passive_tab_pane_g1_cp5_srt

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp5_srt

0x391c,	// (0x0005384f) bg_passive_tab_pane_g3_cp5_srt

0x2255,	// (0x00052188) bg_active_tab_pane_cp5_srt_ParamLimits

0x2255,	// (0x00052188) bg_active_tab_pane_cp5_srt

0xd5b8,	// (0x0005d4eb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd5b8,	// (0x0005d4eb) tabs_3_long_active_pane_srt_t1

0x3913,	// (0x00053846) bg_active_tab_pane_g1_cp5_srt

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp5_srt

0x391c,	// (0x0005384f) bg_active_tab_pane_g3_cp5_srt

0x5e6f,	// (0x00055da2) navi_text_pane_srt_t1

0x5e67,	// (0x00055d9a) navi_icon_pane_srt_g1

0x3e08,	// (0x00053d3b) midp_editing_number_pane_srt

0x3c40,	// (0x00053b73) midp_ticker_pane_srt

0x3e10,	// (0x00053d43) midp_ticker_pane_srt_g1

0x3e18,	// (0x00053d4b) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0005f6ea) midp_ticker_pane_srt_g

0x3e20,	// (0x00053d53) midp_ticker_pane_srt_t1

0x5e58,	// (0x00055d8b) midp_editing_number_pane_t1_copy1

0xc639,	// (0x0005c56c) listscroll_midp_pane

0xc639,	// (0x0005c56c) midp_form_pane

0x3cb6,	// (0x00053be9) midp_info_popup_window_ParamLimits

0x3cb6,	// (0x00053be9) midp_info_popup_window

0x308e,	// (0x00052fc1) bg_popup_sub_pane_cp50_ParamLimits

0x308e,	// (0x00052fc1) bg_popup_sub_pane_cp50

0x4f78,	// (0x00054eab) listscroll_midp_info_pane_ParamLimits

0x4f78,	// (0x00054eab) listscroll_midp_info_pane

0x4f60,	// (0x00054e93) listscroll_form_midp_pane_ParamLimits

0x4f60,	// (0x00054e93) listscroll_form_midp_pane

0x4f6c,	// (0x00054e9f) scroll_bar_cp050

0xd3b9,	// (0x0005d2ec) list_midp_pane

0x6c34,	// (0x00056b67) signal_pane_g2_cp

0x4e7a,	// (0x00054dad) listscroll_midp_info_pane_t1_ParamLimits

0x4e7a,	// (0x00054dad) listscroll_midp_info_pane_t1

0x4e92,	// (0x00054dc5) listscroll_midp_info_pane_t2_ParamLimits

0x4e92,	// (0x00054dc5) listscroll_midp_info_pane_t2

0x4ed0,	// (0x00054e03) listscroll_midp_info_pane_t3_ParamLimits

0x4ed0,	// (0x00054e03) listscroll_midp_info_pane_t3

0x4f0a,	// (0x00054e3d) listscroll_midp_info_pane_t4_ParamLimits

0x4f0a,	// (0x00054e3d) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0005f796) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0005f796) listscroll_midp_info_pane_t

0x3158,	// (0x0005308b) scroll_pane_cp21

0x4e14,	// (0x00054d47) form_midp_field_choice_group_pane

0x4e1d,	// (0x00054d50) form_midp_field_text_pane

0x4e60,	// (0x00054d93) form_midp_field_time_pane

0x4e68,	// (0x00054d9b) form_midp_gauge_slider_pane

0x4e71,	// (0x00054da4) form_midp_gauge_wait_pane

0x2175,	// (0x000520a8) form_midp_image_pane

0xb996,	// (0x0005b8c9) list_single_midp_pane_ParamLimits

0xb996,	// (0x0005b8c9) list_single_midp_pane

0xd391,	// (0x0005d2c4) form_midp_field_text_pane_t1

0x4bec,	// (0x00054b1f) input_focus_pane_cp050

0x4e03,	// (0x00054d36) list_midp_form_text_pane

0x4da7,	// (0x00054cda) form_midp_field_choice_group_pane_t1

0x4db5,	// (0x00054ce8) input_focus_pane_cp051

0x4dc9,	// (0x00054cfc) list_midp_choice_pane

0x2175,	// (0x000520a8) status_idle_pane

0x4d8b,	// (0x00054cbe) form_midp_field_time_pane_t1

0x216b,	// (0x0005209e) wait_anim_pane_g2_copy1

0x4d99,	// (0x00054ccc) form_midp_field_time_pane_t2

0x0001,

0x3d66,	// (0x00053c99) aid_navinavi_width_2_pane

0xf85e,	// (0x0005f791) form_midp_field_time_pane_t

0x2175,	// (0x000520a8) input_focus_pane_cp052

0x2175,	// (0x000520a8) bg_input_focus_pane_cp040

0x4d4b,	// (0x00054c7e) form_midp_gauge_slider_pane_t1

0x4d59,	// (0x00054c8c) form_midp_gauge_slider_pane_t2

0xd375,	// (0x0005d2a8) form_midp_gauge_slider_pane_t3

0xd383,	// (0x0005d2b6) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0005f788) form_midp_gauge_slider_pane_t

0x4d83,	// (0x00054cb6) form_midp_slider_pane

0x2255,	// (0x00052188) bg_input_focus_pane_cp041_ParamLimits

0x2255,	// (0x00052188) bg_input_focus_pane_cp041

0x4d18,	// (0x00054c4b) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d18,	// (0x00054c4b) form_midp_gauge_wait_pane_t1

0x4d2a,	// (0x00054c5d) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d2a,	// (0x00054c5d) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0005f783) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0005f783) form_midp_gauge_wait_pane_t

0x4d3c,	// (0x00054c6f) form_midp_wait_pane_ParamLimits

0x4d3c,	// (0x00054c6f) form_midp_wait_pane

0x4ce0,	// (0x00054c13) form_midp_image_pane_g1

0x4ce9,	// (0x00054c1c) form_midp_image_pane_t1

0x4cf8,	// (0x00054c2b) form_midp_image_pane_t2

0x4d07,	// (0x00054c3a) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0005f77c) form_midp_image_pane_t

0x4cd7,	// (0x00054c0a) list_single_midp_pane_g1

0x0e92,	// (0x00050dc5) list_single_midp_pane_t1

0xd35e,	// (0x0005d291) list_midp_form_item_pane_ParamLimits

0xd35e,	// (0x0005d291) list_midp_form_item_pane

0x3d0e,	// (0x00053c41) list_midp_form_item_pane_t1

0x3d1d,	// (0x00053c50) midp_ticker_pane_g1

0x3d29,	// (0x00053c5c) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0005f6d0) midp_ticker_pane_g

0xc6e1,	// (0x0005c614) midp_ticker_pane_t1

0xd75d,	// (0x0005d690) midp_editing_number_pane_t1

0x60b5,	// (0x00055fe8) midp_editing_number_pane

0x60c4,	// (0x00055ff7) midp_ticker_pane

0x5e48,	// (0x00055d7b) ai_message_heading_pane

0x2175,	// (0x000520a8) bg_popup_window_pane_cp14

0x5e50,	// (0x00055d83) listscroll_ai_message_pane

0x5dce,	// (0x00055d01) ai_message_heading_pane_g1_ParamLimits

0x5dce,	// (0x00055d01) ai_message_heading_pane_g1

0x5dda,	// (0x00055d0d) ai_message_heading_pane_g2_ParamLimits

0x5dda,	// (0x00055d0d) ai_message_heading_pane_g2

0x5de8,	// (0x00055d1b) ai_message_heading_pane_g3_ParamLimits

0x5de8,	// (0x00055d1b) ai_message_heading_pane_g3

0x5df4,	// (0x00055d27) ai_message_heading_pane_g4_ParamLimits

0x5df4,	// (0x00055d27) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0005f8bd) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0005f8bd) ai_message_heading_pane_g

0x5e00,	// (0x00055d33) ai_message_heading_pane_t1_ParamLimits

0x5e00,	// (0x00055d33) ai_message_heading_pane_t1

0x5e1a,	// (0x00055d4d) ai_message_heading_pane_t2_ParamLimits

0x5e1a,	// (0x00055d4d) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0005f8c6) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0005f8c6) ai_message_heading_pane_t

0x5e2e,	// (0x00055d61) bg_popup_heading_pane_cp1_ParamLimits

0x5e2e,	// (0x00055d61) bg_popup_heading_pane_cp1

0x5dbc,	// (0x00055cef) list_ai_message_pane_ParamLimits

0x5dbc,	// (0x00055cef) list_ai_message_pane

0x3158,	// (0x0005308b) scroll_pane_cp10

0x5d58,	// (0x00055c8b) list_ai_message_pane_g1

0x5d60,	// (0x00055c93) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0005f89a) list_ai_message_pane_g

0x5d68,	// (0x00055c9b) list_ai_message_pane_t1_ParamLimits

0x5d68,	// (0x00055c9b) list_ai_message_pane_t1

0x5d7d,	// (0x00055cb0) list_ai_message_pane_t2_ParamLimits

0x5d7d,	// (0x00055cb0) list_ai_message_pane_t2

0x5d92,	// (0x00055cc5) list_ai_message_pane_t3_ParamLimits

0x5d92,	// (0x00055cc5) list_ai_message_pane_t3

0x5da7,	// (0x00055cda) list_ai_message_pane_t4_ParamLimits

0x5da7,	// (0x00055cda) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0005f89f) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0005f89f) list_ai_message_pane_t

0xd59e,	// (0x0005d4d1) cell_ai_soft_ind_pane_ParamLimits

0xd59e,	// (0x0005d4d1) cell_ai_soft_ind_pane

0x3d47,	// (0x00053c7a) cell_ai_soft_ind_pane_g1_ParamLimits

0x3d47,	// (0x00053c7a) cell_ai_soft_ind_pane_g1

0x2175,	// (0x000520a8) grid_highlight_cp1

0x3d54,	// (0x00053c87) text_secondary_cp56_ParamLimits

0x3d54,	// (0x00053c87) text_secondary_cp56

0x5d16,	// (0x00055c49) example_general_pane_ParamLimits

0x5d16,	// (0x00055c49) example_general_pane

0x5d22,	// (0x00055c55) example_parent_pane_g1_ParamLimits

0x5d22,	// (0x00055c55) example_parent_pane_g1

0x5d2e,	// (0x00055c61) example_parent_pane_t1_ParamLimits

0x5d2e,	// (0x00055c61) example_parent_pane_t1

0xcb53,	// (0x0005ca86) popup_preview_text_window_ParamLimits

0xcb53,	// (0x0005ca86) popup_preview_text_window

0x3b6f,	// (0x00053aa2) list_single_pane_cp2_g4

0x2587,	// (0x000524ba) bg_popup_preview_window_pane_ParamLimits

0x2587,	// (0x000524ba) bg_popup_preview_window_pane

0x5a49,	// (0x0005597c) popup_preview_text_window_t1_ParamLimits

0x5a49,	// (0x0005597c) popup_preview_text_window_t1

0x5a67,	// (0x0005599a) popup_preview_text_window_t2_ParamLimits

0x5a67,	// (0x0005599a) popup_preview_text_window_t2

0x5ab0,	// (0x000559e3) popup_preview_text_window_t3_ParamLimits

0x5ab0,	// (0x000559e3) popup_preview_text_window_t3

0x5af5,	// (0x00055a28) popup_preview_text_window_t4_ParamLimits

0x5af5,	// (0x00055a28) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0005f86e) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0005f86e) popup_preview_text_window_t

0x5b73,	// (0x00055aa6) scroll_pane_cp11

0x4afa,	// (0x00054a2d) bg_popup_preview_window_pane_g1

0x59fd,	// (0x00055930) bg_popup_preview_window_pane_g2

0x5a07,	// (0x0005593a) bg_popup_preview_window_pane_g3

0x5a11,	// (0x00055944) bg_popup_preview_window_pane_g4

0x5a1b,	// (0x0005594e) bg_popup_preview_window_pane_g5

0x5a25,	// (0x00055958) bg_popup_preview_window_pane_g6

0x5a2d,	// (0x00055960) bg_popup_preview_window_pane_g7

0x5a35,	// (0x00055968) bg_popup_preview_window_pane_g8

0xf280,	// (0x0005f1b3) aid_popup_width_pane

0xcac3,	// (0x0005c9f6) popup_midp_note_alarm_window_ParamLimits

0xcac3,	// (0x0005c9f6) popup_midp_note_alarm_window

0x2fca,	// (0x00052efd) data_form_pane_ParamLimits

0xb66a,	// (0x0005b59d) form_field_data_pane_g1

0xb674,	// (0x0005b5a7) form_field_data_pane_t1_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_ParamLimits

0x2fe4,	// (0x00052f17) data_form_wide_pane_ParamLimits

0x0539,	// (0x0005046c) form_field_data_wide_pane_g1

0x0545,	// (0x00050478) form_field_data_wide_pane_t1_ParamLimits

0x2d47,	// (0x00052c7a) input_focus_pane_cp6_ParamLimits

0xc3b0,	// (0x0005c2e3) input_popup_find_pane_g1_ParamLimits

0xc3b0,	// (0x0005c2e3) input_popup_find_pane_g1

0x0799,	// (0x000506cc) aid_navi_side_left_pane

0x07ae,	// (0x000506e1) aid_navi_side_right_pane

0x540c,	// (0x0005533f) bg_popup_window_pane_cp30_ParamLimits

0x540c,	// (0x0005533f) bg_popup_window_pane_cp30

0x5486,	// (0x000553b9) popup_midp_note_alarm_window_g1_ParamLimits

0x5486,	// (0x000553b9) popup_midp_note_alarm_window_g1

0x54b6,	// (0x000553e9) popup_midp_note_alarm_window_t1_ParamLimits

0x54b6,	// (0x000553e9) popup_midp_note_alarm_window_t1

0x5557,	// (0x0005548a) popup_midp_note_alarm_window_t2_ParamLimits

0x5557,	// (0x0005548a) popup_midp_note_alarm_window_t2

0x5605,	// (0x00055538) popup_midp_note_alarm_window_t3_ParamLimits

0x5605,	// (0x00055538) popup_midp_note_alarm_window_t3

0x5637,	// (0x0005556a) popup_midp_note_alarm_window_t4_ParamLimits

0x5637,	// (0x0005556a) popup_midp_note_alarm_window_t4

0x565d,	// (0x00055590) popup_midp_note_alarm_window_t5_ParamLimits

0x565d,	// (0x00055590) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0005f80b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0005f80b) popup_midp_note_alarm_window_t

0x5709,	// (0x0005563c) wait_bar_pane_cp1_ParamLimits

0x5709,	// (0x0005563c) wait_bar_pane_cp1

0x2175,	// (0x000520a8) wait_anim_pane_copy1

0x2175,	// (0x000520a8) wait_border_pane_copy1

0x50f1,	// (0x00055024) wait_border_pane_g1_copy1

0x055f,	// (0x00050492) form_field_popup_pane_g1

0xb68e,	// (0x0005b5c1) form_field_popup_pane_t1_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_cp7_ParamLimits

0x3010,	// (0x00052f43) list_form_pane_ParamLimits

0x0581,	// (0x000504b4) form_field_popup_wide_pane_g1

0x0589,	// (0x000504bc) form_field_popup_wide_pane_t1_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_cp8_ParamLimits

0x301c,	// (0x00052f4f) list_form_wide_pane_ParamLimits

0x6268,	// (0x0005619b) aid_size_cell_graphic_pane

0xb70d,	// (0x0005b640) data_form_pane_t1_ParamLimits

0xbb2b,	// (0x0005ba5e) data_form_wide_pane_t1_ParamLimits

0xcfee,	// (0x0005cf21) bg_status_flat_pane

0xb00d,	// (0x0005af40) title_pane_t1_ParamLimits

0x221d,	// (0x00052150) title_pane_t2_ParamLimits

0x2243,	// (0x00052176) title_pane_t3_ParamLimits

0xf59b,	// (0x0005f4ce) title_pane_t_ParamLimits

0xc4b7,	// (0x0005c3ea) level_1_signal_ParamLimits

0xc4c9,	// (0x0005c3fc) level_2_signal_ParamLimits

0xc4dc,	// (0x0005c40f) level_3_signal_ParamLimits

0xc4ef,	// (0x0005c422) level_4_signal_ParamLimits

0xc502,	// (0x0005c435) level_5_signal_ParamLimits

0xc515,	// (0x0005c448) level_6_signal_ParamLimits

0xc528,	// (0x0005c45b) level_7_signal_ParamLimits

0xc4b7,	// (0x0005c3ea) level_1_battery_ParamLimits

0xc4c9,	// (0x0005c3fc) level_2_battery_ParamLimits

0xc4dc,	// (0x0005c40f) level_3_battery_ParamLimits

0xc4ef,	// (0x0005c422) level_4_battery_ParamLimits

0xc502,	// (0x0005c435) level_5_battery_ParamLimits

0xc515,	// (0x0005c448) level_6_battery_ParamLimits

0xc528,	// (0x0005c45b) level_7_battery_ParamLimits

0x5311,	// (0x00055244) bg_status_flat_pane_g1

0x5319,	// (0x0005524c) bg_status_flat_pane_g2

0x5321,	// (0x00055254) bg_status_flat_pane_g3

0x5329,	// (0x0005525c) bg_status_flat_pane_g4

0x5331,	// (0x00055264) bg_status_flat_pane_g5

0x5339,	// (0x0005526c) bg_status_flat_pane_g6

0x5341,	// (0x00055274) bg_status_flat_pane_g7

0xb0a1,	// (0x0005afd4) tabs_3_active_pane_t1_ParamLimits

0xb0a1,	// (0x0005afd4) tabs_3_passive_pane_t1_ParamLimits

0xb0bb,	// (0x0005afee) tabs_4_active_pane_t1_ParamLimits

0xb0bb,	// (0x0005afee) tabs_4_1_passive_pane_t1_ParamLimits

0xc3c6,	// (0x0005c2f9) tabs_2_active_pane_t1_ParamLimits

0xc3c6,	// (0x0005c2f9) tabs_2_passive_pane_t1_ParamLimits

0x2255,	// (0x00052188) bg_active_tab_pane_cp4_ParamLimits

0xc3d8,	// (0x0005c30b) tabs_2_long_active_pane_t1_ParamLimits

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp4_ParamLimits

0x0dd9,	// (0x00050d0c) list_single_midp_graphic_pane_t1_ParamLimits

0x2255,	// (0x00052188) bg_active_tab_pane_cp5_ParamLimits

0xc3eb,	// (0x0005c31e) tabs_3_long_active_pane_t1_ParamLimits

0x3fbe,	// (0x00053ef1) bg_passive_tab_pane_cp5_ParamLimits

0x0dd9,	// (0x00050d0c) list_single_midp_graphic_pane_t1

0xcfee,	// (0x0005cf21) bg_status_flat_pane_ParamLimits

0x4773,	// (0x000546a6) indicator_pane_cp2_ParamLimits

0x4773,	// (0x000546a6) indicator_pane_cp2

0xd183,	// (0x0005d0b6) navi_pane_srt_ParamLimits

0xd183,	// (0x0005d0b6) navi_pane_srt

0x48d9,	// (0x0005480c) popup_clock_digital_analogue_window_cp1

0x2335,	// (0x00052268) indicator_pane_t1

0x3c40,	// (0x00053b73) copy_highlight_pane

0x3c40,	// (0x00053b73) cursor_graphics_pane

0x3c40,	// (0x00053b73) graphic_within_text_pane

0x3c40,	// (0x00053b73) link_highlight_pane

0x5b36,	// (0x00055a69) popup_preview_text_window_t5_ParamLimits

0x5b36,	// (0x00055a69) popup_preview_text_window_t5

0x3d70,	// (0x00053ca3) cursor_digital_pane

0x3d70,	// (0x00053ca3) cursor_primary_pane

0x3d81,	// (0x00053cb4) cursor_primary_small_pane

0x3d89,	// (0x00053cbc) cursor_secondary_pane

0x3d91,	// (0x00053cc4) cursor_title_pane

0x3d70,	// (0x00053ca3) link_highlight_digital_pane

0x3d78,	// (0x00053cab) link_highlight_primary_pane

0x3d81,	// (0x00053cb4) link_highlight_primary_small_pane

0x3d89,	// (0x00053cbc) link_highlight_secondary_pane

0x3d91,	// (0x00053cc4) link_highlight_title_pane

0x3d70,	// (0x00053ca3) copy_highlight_digital_pane

0x3d70,	// (0x00053ca3) copy_highlight_primary_pane

0x3d81,	// (0x00053cb4) copy_highlight_primary_small_pane

0x3d89,	// (0x00053cbc) copy_highlight_secondary_pane

0x3d91,	// (0x00053cc4) copy_highlight_title_pane

0x3d89,	// (0x00053cbc) graphic_text_digital_pane

0x53af,	// (0x000552e2) graphic_text_primary_pane

0x53b8,	// (0x000552eb) graphic_text_primary_small_pane

0x3d81,	// (0x00053cb4) graphic_text_secondary_pane

0x3d70,	// (0x00053ca3) graphic_text_title_pane

0xc6f3,	// (0x0005c626) cursor_primary_pane_g1

0x53a1,	// (0x000552d4) cursor_text_primary_t1

0xd3f5,	// (0x0005d328) cursor_primary_small_pane_g1

0x5393,	// (0x000552c6) cursor_text_primary_small_t1

0xd3eb,	// (0x0005d31e) cursor_primary_small_pane_g1_copy1

0x537b,	// (0x000552ae) cursor_text_primary_small_t1_copy1

0x5359,	// (0x0005528c) cursor_text_title_t1

0xd3e1,	// (0x0005d314) cursor_title_pane_g1

0xc6f3,	// (0x0005c626) cursor_digital_pane_g1

0x3da3,	// (0x00053cd6) cursor_text_digital_t1

0x3db1,	// (0x00053ce4) link_highlight_primary_pane_g1

0x5302,	// (0x00055235) link_highlight_primary_pane_t1

0x3db1,	// (0x00053ce4) link_highlight_primary_small_pane_g1

0x3db9,	// (0x00053cec) link_highlight_primary_small_pane_t1

0x3dc8,	// (0x00053cfb) link_highlight_secondary_pane_g1

0x3dd0,	// (0x00053d03) link_highlight_secondary_pane_t1

0x5276,	// (0x000551a9) link_highlight_title_pane_g1

0x527e,	// (0x000551b1) link_highlight_title_pane_t1

0x525f,	// (0x00055192) link_highlight_digital_pane_g1

0x5267,	// (0x0005519a) link_highlight_digital_pane_t1

0x5127,	// (0x0005505a) copy_highlight_primary_pane_g1

0x513e,	// (0x00055071) copy_highlight_primary_pane_t1

0x5127,	// (0x0005505a) copy_highlight_primary_small_pane_g1

0x512f,	// (0x00055062) copy_highlight_primary_small_pane_t1

0x3ddf,	// (0x00053d12) copy_highlight_secondary_pane_g1

0x3de7,	// (0x00053d1a) copy_highlight_secondary_pane_t1

0x5110,	// (0x00055043) copy_highlight_title_pane_g1

0x5118,	// (0x0005504b) copy_highlight_title_pane_t1

0x5127,	// (0x0005505a) copy_highlight_digital_pane_g1

0x6438,	// (0x0005636b) copy_highlight_digital_pane_t1

0x638c,	// (0x000562bf) graphic_text_primary_pane_g1

0x641c,	// (0x0005634f) graphic_text_primary_pane_t1

0x642a,	// (0x0005635d) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0005f93a) graphic_text_primary_pane_t

0x63f8,	// (0x0005632b) graphic_text_primary_small_pane_g1

0x6400,	// (0x00056333) graphic_text_primary_small_pane_t1

0x640e,	// (0x00056341) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0005f935) graphic_text_primary_small_pane_t

0x63d4,	// (0x00056307) graphic_text_secondary_pane_g1

0x63dc,	// (0x0005630f) graphic_text_secondary_pane_t1

0x63ea,	// (0x0005631d) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0005f930) graphic_text_secondary_pane_t

0x63b0,	// (0x000562e3) graphic_text_title_pane_g1

0x63b8,	// (0x000562eb) graphic_text_title_pane_t1

0x63c6,	// (0x000562f9) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0005f92b) graphic_text_title_pane_t

0x638c,	// (0x000562bf) graphic_text_digital_pane_g1

0x6394,	// (0x000562c7) graphic_text_digital_pane_t1

0x63a2,	// (0x000562d5) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0005f926) graphic_text_digital_pane_t

0x2255,	// (0x00052188) navi_icon_pane_srt_ParamLimits

0x2255,	// (0x00052188) navi_icon_pane_srt

0x2175,	// (0x000520a8) navi_midp_pane_srt

0x2175,	// (0x000520a8) navi_navi_pane_srt

0x2255,	// (0x00052188) navi_text_pane_srt_ParamLimits

0x2255,	// (0x00052188) navi_text_pane_srt

0x6357,	// (0x0005628a) navi_navi_icon_text_pane_srt

0x635f,	// (0x00056292) navi_navi_pane_srt_g1_ParamLimits

0x635f,	// (0x00056292) navi_navi_pane_srt_g1

0x6371,	// (0x000562a4) navi_navi_pane_srt_g2_ParamLimits

0x6371,	// (0x000562a4) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0005f921) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0005f921) navi_navi_pane_srt_g

0x6383,	// (0x000562b6) navi_navi_tabs_pane_srt

0x6357,	// (0x0005628a) navi_navi_text_pane_srt

0x6357,	// (0x0005628a) navi_navi_volume_pane_srt

0x6348,	// (0x0005627b) navi_navi_text_pane_srt_t1

0x1217,	// (0x0005114a) navi_navi_volume_pane_srt_g1

0x121f,	// (0x00051152) volume_small_pane_srt_ParamLimits

0x121f,	// (0x00051152) volume_small_pane_srt

0x0aee,	// (0x00050a21) volume_small_pane_srt_g1_ParamLimits

0x0aee,	// (0x00050a21) volume_small_pane_srt_g1

0x0afe,	// (0x00050a31) volume_small_pane_srt_g2_ParamLimits

0x0afe,	// (0x00050a31) volume_small_pane_srt_g2

0x0b0f,	// (0x00050a42) volume_small_pane_srt_g3_ParamLimits

0x0b0f,	// (0x00050a42) volume_small_pane_srt_g3

0x0b20,	// (0x00050a53) volume_small_pane_srt_g4_ParamLimits

0x0b20,	// (0x00050a53) volume_small_pane_srt_g4

0x0b31,	// (0x00050a64) volume_small_pane_srt_g5_ParamLimits

0x0b31,	// (0x00050a64) volume_small_pane_srt_g5

0x0b42,	// (0x00050a75) volume_small_pane_srt_g6_ParamLimits

0x0b42,	// (0x00050a75) volume_small_pane_srt_g6

0x0b53,	// (0x00050a86) volume_small_pane_srt_g7_ParamLimits

0x0b53,	// (0x00050a86) volume_small_pane_srt_g7

0x0b64,	// (0x00050a97) volume_small_pane_srt_g8_ParamLimits

0x0b64,	// (0x00050a97) volume_small_pane_srt_g8

0x0b75,	// (0x00050aa8) volume_small_pane_srt_g9_ParamLimits

0x0b75,	// (0x00050aa8) volume_small_pane_srt_g9

0x0b86,	// (0x00050ab9) volume_small_pane_srt_g10_ParamLimits

0x0b86,	// (0x00050ab9) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0005f6d5) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0005f6d5) volume_small_pane_srt_g

0x263c,	// (0x0005256f) query_popup_data_pane_cp2

0x632e,	// (0x00056261) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x632e,	// (0x00056261) navi_navi_icon_text_pane_srt_t1

0x53af,	// (0x000552e2) navi_tabs_2_long_pane_srt

0x53af,	// (0x000552e2) navi_tabs_2_pane_srt

0x53af,	// (0x000552e2) navi_tabs_3_long_pane_srt

0x53af,	// (0x000552e2) navi_tabs_3_pane_srt

0x53af,	// (0x000552e2) navi_tabs_4_pane_srt

0x11f7,	// (0x0005112a) tabs_2_active_pane_srt_ParamLimits

0x11f7,	// (0x0005112a) tabs_2_active_pane_srt

0x1207,	// (0x0005113a) tabs_2_passive_pane_srt_ParamLimits

0x1207,	// (0x0005113a) tabs_2_passive_pane_srt

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp1_srt

0x62fa,	// (0x0005622d) bg_passive_tab_pane_g1_cp1_srt

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp1_srt

0x6303,	// (0x00056236) bg_passive_tab_pane_g3_cp1_srt

0x24d1,	// (0x00052404) bg_active_tab_pane_cp1_srt_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp1_srt

0x630c,	// (0x0005623f) tabs_2_active_pane_srt_g1

0xd858,	// (0x0005d78b) tabs_2_active_pane_srt_t1_ParamLimits

0xd858,	// (0x0005d78b) tabs_2_active_pane_srt_t1

0x62fa,	// (0x0005622d) bg_active_tab_pane_g1_cp1_srt

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp1_srt

0x6303,	// (0x00056236) bg_active_tab_pane_g3_cp1_srt

0x11c4,	// (0x000510f7) tabs_3_active_pane_srt_ParamLimits

0x11c4,	// (0x000510f7) tabs_3_active_pane_srt

0x11d5,	// (0x00051108) tabs_3_passive_pane_cp_srt_ParamLimits

0x11d5,	// (0x00051108) tabs_3_passive_pane_cp_srt

0x11e6,	// (0x00051119) tabs_3_passive_pane_srt_ParamLimits

0x11e6,	// (0x00051119) tabs_3_passive_pane_srt

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4bec,	// (0x00054b1f) bg_passive_tab_pane_cp2_srt

0x3df6,	// (0x00053d29) bg_passive_tab_pane_g1_cp2_srt

0x3874,	// (0x000537a7) bg_passive_tab_pane_g2_cp2_srt

0x3dff,	// (0x00053d32) bg_passive_tab_pane_g3_cp2_srt

0x24d1,	// (0x00052404) bg_active_tab_pane_cp2_srt_ParamLimits

0x24d1,	// (0x00052404) bg_active_tab_pane_cp2_srt

0x62e0,	// (0x00056213) tabs_3_active_pane_srt_g1

0xd842,	// (0x0005d775) tabs_3_active_pane_srt_t1_ParamLimits

0xd842,	// (0x0005d775) tabs_3_active_pane_srt_t1

0x3df6,	// (0x00053d29) bg_active_tab_pane_g1_cp2_srt

0x3874,	// (0x000537a7) bg_active_tab_pane_g2_cp2_srt

0x3dff,	// (0x00053d32) bg_active_tab_pane_g3_cp2_srt

0x117c,	// (0x000510af) tabs_4_active_pane_srt_ParamLimits

0x117c,	// (0x000510af) tabs_4_active_pane_srt

0x118e,	// (0x000510c1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x118e,	// (0x000510c1) tabs_4_passive_pane_cp2_srt

0x3f54,	// (0x00053e87) aid_size_cell_toolbar

0x5f02,	// (0x00055e35) main_idle_act_pane_ParamLimits

0x4183,	// (0x000540b6) popup_large_graphic_colour_window_ParamLimits

0xceb7,	// (0x0005cdea) popup_toolbar_window_ParamLimits

0xceb7,	// (0x0005cdea) popup_toolbar_window

0x60fa,	// (0x0005602d) list_single_graphic_2heading_pane_ParamLimits

0x60fa,	// (0x0005602d) list_single_graphic_2heading_pane

0x3389,	// (0x000532bc) aid_size_cell_apps_grid_lsc_pane

0x339b,	// (0x000532ce) aid_size_cell_apps_grid_prt_pane

0x3fbe,	// (0x00053ef1) bg_wml_button_pane_cp1_ParamLimits

0x3fbe,	// (0x00053ef1) bg_wml_button_pane_cp1

0xd391,	// (0x0005d2c4) form_midp_field_text_pane_t1_ParamLimits

0x4bec,	// (0x00054b1f) input_focus_pane_cp050_ParamLimits

0x4e03,	// (0x00054d36) list_midp_form_text_pane_ParamLimits

0x4db5,	// (0x00054ce8) input_focus_pane_cp051_ParamLimits

0x4dc9,	// (0x00054cfc) list_midp_choice_pane_ParamLimits

0xd348,	// (0x0005d27b) list_single_2graphic_pane_cp3_ParamLimits

0xd348,	// (0x0005d27b) list_single_2graphic_pane_cp3

0x6f5d,	// (0x00056e90) list_single_midp_graphic_pane_ParamLimits

0x6f5d,	// (0x00056e90) list_single_midp_graphic_pane

0xf06b,	// (0x0005ef9e) list_single_graphic_2heading_pane_g1_ParamLimits

0xf06b,	// (0x0005ef9e) list_single_graphic_2heading_pane_g1

0xf077,	// (0x0005efaa) list_single_graphic_2heading_pane_g4_ParamLimits

0xf077,	// (0x0005efaa) list_single_graphic_2heading_pane_g4

0xf3ed,	// (0x0005f320) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3ed,	// (0x0005f320) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0005f728) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0005f728) list_single_graphic_2heading_pane_g

0xf3f9,	// (0x0005f32c) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3f9,	// (0x0005f32c) list_single_graphic_2heading_pane_t1

0xf40d,	// (0x0005f340) list_single_graphic_2heading_pane_t2_ParamLimits

0xf40d,	// (0x0005f340) list_single_graphic_2heading_pane_t2

0xf429,	// (0x0005f35c) list_single_graphic_2heading_pane_t3_ParamLimits

0xf429,	// (0x0005f35c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0005f72f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0005f72f) list_single_graphic_2heading_pane_t

0x4a38,	// (0x0005496b) bg_popup_sub_pane_cp2

0x4a62,	// (0x00054995) grid_toobar_pane

0x0cfd,	// (0x00050c30) cell_toolbar_pane_ParamLimits

0x0cfd,	// (0x00050c30) cell_toolbar_pane

0x4a9e,	// (0x000549d1) cell_toolbar_pane_g1_ParamLimits

0x4a9e,	// (0x000549d1) cell_toolbar_pane_g1

0x4ab2,	// (0x000549e5) cell_toolbar_pane_g2_ParamLimits

0x4ab2,	// (0x000549e5) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0005f73d) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0005f73d) cell_toolbar_pane_g

0x4ad4,	// (0x00054a07) grid_highlight_pane_cp2_ParamLimits

0x4ad4,	// (0x00054a07) grid_highlight_pane_cp2

0x4aee,	// (0x00054a21) toolbar_button_pane

0x4afa,	// (0x00054a2d) toolbar_button_pane_g1

0x4b02,	// (0x00054a35) toolbar_button_pane_g2

0x4b0a,	// (0x00054a3d) toolbar_button_pane_g3

0x4b12,	// (0x00054a45) toolbar_button_pane_g4

0x4b1a,	// (0x00054a4d) toolbar_button_pane_g5

0x4b22,	// (0x00054a55) toolbar_button_pane_g6

0x4b2a,	// (0x00054a5d) toolbar_button_pane_g7

0x4b32,	// (0x00054a65) toolbar_button_pane_g8

0x4b3a,	// (0x00054a6d) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0005f742) toolbar_button_pane_g

0x0d57,	// (0x00050c8a) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0d57,	// (0x00050c8a) list_single_2graphic_pane_g1_cp3

0xb924,	// (0x0005b857) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb924,	// (0x0005b857) list_single_2graphic_pane_g2_cp3

0x0d74,	// (0x00050ca7) list_single_2graphic_pane_g3_cp3

0x0d7c,	// (0x00050caf) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d7c,	// (0x00050caf) list_single_2graphic_pane_g4_cp3

0x0d88,	// (0x00050cbb) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0d88,	// (0x00050cbb) list_single_2graphic_pane_t1_cp3

0x0dcd,	// (0x00050d00) list_single_midp_graphic_pane_g2_ParamLimits

0x0dcd,	// (0x00050d00) list_single_midp_graphic_pane_g2

0x0ce5,	// (0x00050c18) aid_zoom_text_primary

0x0ced,	// (0x00050c20) aid_zoom_text_secondary

0x3eb3,	// (0x00053de6) status_small_pane_g7_ParamLimits

0x3eb3,	// (0x00053de6) status_small_pane_g7

0x3ed6,	// (0x00053e09) status_small_pane_t1_ParamLimits

0xafe9,	// (0x0005af1c) title_pane_g2

0x0003,

0xf592,	// (0x0005f4c5) title_pane_g

0xc201,	// (0x0005c134) aid_size_cell_colour_1_pane_ParamLimits

0xc201,	// (0x0005c134) aid_size_cell_colour_1_pane

0xc215,	// (0x0005c148) aid_size_cell_colour_2_pane_ParamLimits

0xc215,	// (0x0005c148) aid_size_cell_colour_2_pane

0xc229,	// (0x0005c15c) aid_size_cell_colour_3_pane_ParamLimits

0xc229,	// (0x0005c15c) aid_size_cell_colour_3_pane

0xc23d,	// (0x0005c170) aid_size_cell_colour_4_pane_ParamLimits

0xc23d,	// (0x0005c170) aid_size_cell_colour_4_pane

0x06d5,	// (0x00050608) title_pane_stacon_g1_ParamLimits

0x06d5,	// (0x00050608) title_pane_stacon_g1

0x5195,	// (0x000550c8) popup_note_wait_window_g3_ParamLimits

0x5195,	// (0x000550c8) popup_note_wait_window_g3

0x520c,	// (0x0005513f) popup_note_wait_window_t5_ParamLimits

0x520c,	// (0x0005513f) popup_note_wait_window_t5

0x2175,	// (0x000520a8) main_feb_china_hwr_fs_writing_pane

0xc7b4,	// (0x0005c6e7) popup_feb_china_hwr_fs_window_ParamLimits

0xc7b4,	// (0x0005c6e7) popup_feb_china_hwr_fs_window

0xb935,	// (0x0005b868) aid_size_cell_hwr_fs_ParamLimits

0xb935,	// (0x0005b868) aid_size_cell_hwr_fs

0x4bec,	// (0x00054b1f) bg_popup_sub_pane_cp3_ParamLimits

0x4bec,	// (0x00054b1f) bg_popup_sub_pane_cp3

0xb94a,	// (0x0005b87d) grid_hwr_fs_pane_ParamLimits

0xb94a,	// (0x0005b87d) grid_hwr_fs_pane

0x0e1c,	// (0x00050d4f) linegrid_hwr_fs_pane_ParamLimits

0x0e1c,	// (0x00050d4f) linegrid_hwr_fs_pane

0xb962,	// (0x0005b895) cell_hwr_fs_pane_ParamLimits

0xb962,	// (0x0005b895) cell_hwr_fs_pane

0x4bf8,	// (0x00054b2b) linegrid_hwr_fs_pane_g1_ParamLimits

0x4bf8,	// (0x00054b2b) linegrid_hwr_fs_pane_g1

0xd31c,	// (0x0005d24f) linegrid_hwr_fs_pane_g2_ParamLimits

0xd31c,	// (0x0005d24f) linegrid_hwr_fs_pane_g2

0x4c16,	// (0x00054b49) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c16,	// (0x00054b49) linegrid_hwr_fs_pane_g3

0x0e50,	// (0x00050d83) linegrid_hwr_fs_pane_g4_ParamLimits

0x0e50,	// (0x00050d83) linegrid_hwr_fs_pane_g4

0x0e6e,	// (0x00050da1) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e6e,	// (0x00050da1) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0005f768) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0005f768) linegrid_hwr_fs_pane_g

0x4c22,	// (0x00054b55) cell_hwr_fs_pane_g1_ParamLimits

0x4c22,	// (0x00054b55) cell_hwr_fs_pane_g1

0x496f,	// (0x000548a2) cell_hwr_fs_pane_g2_ParamLimits

0x496f,	// (0x000548a2) cell_hwr_fs_pane_g2

0xd32e,	// (0x0005d261) cell_hwr_fs_pane_g3_ParamLimits

0xd32e,	// (0x0005d261) cell_hwr_fs_pane_g3

0xd33b,	// (0x0005d26e) cell_hwr_fs_pane_g4_ParamLimits

0xd33b,	// (0x0005d26e) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0005f773) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0005f773) cell_hwr_fs_pane_g

0xb988,	// (0x0005b8bb) cell_hwr_fs_pane_t1

0x2175,	// (0x000520a8) grid_highlight_pane_cp6

0x2175,	// (0x000520a8) main_idle_act2_pane

0x313f,	// (0x00053072) aid_inside_area_popup_secondary

0xd415,	// (0x0005d348) aid_inside_area_window_primary_ParamLimits

0xd415,	// (0x0005d348) aid_inside_area_window_primary

0x6447,	// (0x0005637a) ai2_news_ticker_pane

0x644f,	// (0x00056382) aid_size_cell_ai1_link_ParamLimits

0x644f,	// (0x00056382) aid_size_cell_ai1_link

0x6469,	// (0x0005639c) popup_ai2_data_window_ParamLimits

0x6469,	// (0x0005639c) popup_ai2_data_window

0x6487,	// (0x000563ba) popup_ai2_link_window_ParamLimits

0x6487,	// (0x000563ba) popup_ai2_link_window

0x4bec,	// (0x00054b1f) bg_popup_sub_pane_cp4_ParamLimits

0x4bec,	// (0x00054b1f) bg_popup_sub_pane_cp4

0x649d,	// (0x000563d0) grid_ai2_link_pane_ParamLimits

0x649d,	// (0x000563d0) grid_ai2_link_pane

0x64b4,	// (0x000563e7) popup_ai2_link_window_g1_ParamLimits

0x64b4,	// (0x000563e7) popup_ai2_link_window_g1

0x64c0,	// (0x000563f3) popup_ai2_link_window_g2_ParamLimits

0x64c0,	// (0x000563f3) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0005f93f) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0005f93f) popup_ai2_link_window_g

0x64d1,	// (0x00056404) ai2_mp_button_pane

0x64d9,	// (0x0005640c) ai2_mp_volume_pane

0x4db5,	// (0x00054ce8) bg_popup_sub_pane_cp5_ParamLimits

0x4db5,	// (0x00054ce8) bg_popup_sub_pane_cp5

0x64e1,	// (0x00056414) heading_ai2_gene_pane_ParamLimits

0x64e1,	// (0x00056414) heading_ai2_gene_pane

0x64ed,	// (0x00056420) list_ai2_gene_pane_ParamLimits

0x64ed,	// (0x00056420) list_ai2_gene_pane

0x6535,	// (0x00056468) cell_ai2_link_pane_ParamLimits

0x6535,	// (0x00056468) cell_ai2_link_pane

0x654b,	// (0x0005647e) cell_ai2_link_pane_g1

0x2175,	// (0x000520a8) grid_highlight_pane_cp7

0x1234,	// (0x00051167) ai2_mp_volume_pane_g1

0x661e,	// (0x00056551) ai2_mp_volume_pane_g2

0x6593,	// (0x000564c6) list_ai2_gene_pane_t1

0x6626,	// (0x00056559) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0005f958) ai2_mp_volume_pane_g

0x123c,	// (0x0005116f) volume_small_pane_cp3

0x662e,	// (0x00056561) aid_size_cell_ai2_button

0x6636,	// (0x00056569) grid_ai2_button_pane

0x663f,	// (0x00056572) cell_ai2_button_pane_ParamLimits

0x663f,	// (0x00056572) cell_ai2_button_pane

0x216b,	// (0x0005209e) cell_ai2_button_pane_g1

0x2175,	// (0x000520a8) grid_highlight_pane_cp8

0x65de,	// (0x00056511) ai2_gene_pane_t1_ParamLimits

0x65de,	// (0x00056511) ai2_gene_pane_t1

0xc724,	// (0x0005c657) aid_height_parent_landscape

0xd5e5,	// (0x0005d518) aid_height_set_list

0x5f02,	// (0x00055e35) aid_size_parent

0x6268,	// (0x0005619b) aid_size_cell_graphic_pane_ParamLimits

0x64fd,	// (0x00056430) popup_ai2_data_window_g1_ParamLimits

0x64fd,	// (0x00056430) popup_ai2_data_window_g1

0x6509,	// (0x0005643c) ai2_news_ticker_pane_g1

0x6511,	// (0x00056444) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0005f944) ai2_news_ticker_pane_g

0x6519,	// (0x0005644c) ai2_news_ticker_pane_t1

0x6527,	// (0x0005645a) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0005f949) ai2_news_ticker_pane_t

0x6554,	// (0x00056487) heading_ai2_gene_pane_g1

0x655c,	// (0x0005648f) heading_ai2_gene_pane_t1_ParamLimits

0x655c,	// (0x0005648f) heading_ai2_gene_pane_t1

0x6571,	// (0x000564a4) list_highlight_pane_cp6

0x6579,	// (0x000564ac) ai2_gene_pane_ParamLimits

0x6579,	// (0x000564ac) ai2_gene_pane

0x65a1,	// (0x000564d4) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0005f94e) list_ai2_gene_pane_t

0x65af,	// (0x000564e2) list_highlight_pane_cp8_ParamLimits

0x65af,	// (0x000564e2) list_highlight_pane_cp8

0x65c0,	// (0x000564f3) ai2_gene_pane_g1_ParamLimits

0x65c0,	// (0x000564f3) ai2_gene_pane_g1

0x65d2,	// (0x00056505) ai2_gene_pane_g2_ParamLimits

0x65d2,	// (0x00056505) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0005f953) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0005f953) ai2_gene_pane_g

0x2f6c,	// (0x00052e9f) scroll_pane_cp12

0xb8e3,	// (0x0005b816) control_pane_t3_ParamLimits

0xb8e3,	// (0x0005b816) control_pane_t3

0x3ec7,	// (0x00053dfa) status_small_pane_g8_ParamLimits

0x3ec7,	// (0x00053dfa) status_small_pane_g8

0xc856,	// (0x0005c789) popup_find_window_ParamLimits

0xcb03,	// (0x0005ca36) popup_note_image_window_ParamLimits

0x0d2d,	// (0x00050c60) list_double2_graphic_pane_vc_g1_ParamLimits

0x0d2d,	// (0x00050c60) list_double2_graphic_pane_vc_g1

0x3bb1,	// (0x00053ae4) list_double2_graphic_pane_vc_g2_ParamLimits

0x3bb1,	// (0x00053ae4) list_double2_graphic_pane_vc_g2

0x28b2,	// (0x000527e5) list_double2_graphic_pane_vc_g3_ParamLimits

0x28b2,	// (0x000527e5) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0005f736) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0005f736) list_double2_graphic_pane_vc_g

0x0d39,	// (0x00050c6c) list_double2_graphic_pane_vc_t1_ParamLimits

0x0d39,	// (0x00050c6c) list_double2_graphic_pane_vc_t1

0x3bb1,	// (0x00053ae4) list_single_heading_pane_vc_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_heading_pane_vc_g1

0x28b2,	// (0x000527e5) list_single_heading_pane_vc_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0005f549) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0005f549) list_single_heading_pane_vc_g

0x0da3,	// (0x00050cd6) list_single_heading_pane_vc_t1_ParamLimits

0x0da3,	// (0x00050cd6) list_single_heading_pane_vc_t1

0x0db9,	// (0x00050cec) list_single_heading_pane_vc_t2_ParamLimits

0x0db9,	// (0x00050cec) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0005f757) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0005f757) list_single_heading_pane_vc_t

0x4b42,	// (0x00054a75) list_setting_number_pane_vc_g1_ParamLimits

0x4b42,	// (0x00054a75) list_setting_number_pane_vc_g1

0x4b4e,	// (0x00054a81) list_setting_number_pane_vc_g2_ParamLimits

0x4b4e,	// (0x00054a81) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0005f75c) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0005f75c) list_setting_number_pane_vc_g

0x4b5a,	// (0x00054a8d) list_setting_number_pane_vc_t1_ParamLimits

0x4b5a,	// (0x00054a8d) list_setting_number_pane_vc_t1

0x4b6e,	// (0x00054aa1) list_setting_number_pane_vc_t2_ParamLimits

0x4b6e,	// (0x00054aa1) list_setting_number_pane_vc_t2

0x4b8a,	// (0x00054abd) list_setting_number_pane_vc_t3_ParamLimits

0x4b8a,	// (0x00054abd) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0005f761) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0005f761) list_setting_number_pane_vc_t

0x4bb2,	// (0x00054ae5) set_value_pane_vc_ParamLimits

0x4bb2,	// (0x00054ae5) set_value_pane_vc

0x60fa,	// (0x0005602d) list_double2_graphic_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double2_graphic_pane_vc

0x60fa,	// (0x0005602d) list_double2_large_graphic_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double2_large_graphic_pane_vc

0x60fa,	// (0x0005602d) list_double2_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double2_pane_vc

0x60fa,	// (0x0005602d) list_double_graphic_heading_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_graphic_heading_pane_vc

0x60fa,	// (0x0005602d) list_double_graphic_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_graphic_pane_vc

0x60fa,	// (0x0005602d) list_double_heading_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_heading_pane_vc

0x60fa,	// (0x0005602d) list_double_large_graphic_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_large_graphic_pane_vc

0x60fa,	// (0x0005602d) list_double_number_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_number_pane_vc

0x60fa,	// (0x0005602d) list_double_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_pane_vc

0x60fa,	// (0x0005602d) list_double_time_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_double_time_pane_vc

0x60fa,	// (0x0005602d) list_setting_number_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_setting_number_pane_vc

0x60fa,	// (0x0005602d) list_setting_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_setting_pane_vc

0x60fa,	// (0x0005602d) list_single_graphic_heading_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_single_graphic_heading_pane_vc

0x60fa,	// (0x0005602d) list_single_heading_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_single_heading_pane_vc

0x60fa,	// (0x0005602d) list_single_number_heading_pane_vc_ParamLimits

0x60fa,	// (0x0005602d) list_single_number_heading_pane_vc

0x0d2d,	// (0x00050c60) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0d2d,	// (0x00050c60) list_double_graphic_heading_pane_vc_g1

0x28ea,	// (0x0005281d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x28ea,	// (0x0005281d) list_double_graphic_heading_pane_vc_g2

0x28f6,	// (0x00052829) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x28f6,	// (0x00052829) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0005f95f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0005f95f) list_double_graphic_heading_pane_vc_g

0x1245,	// (0x00051178) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1245,	// (0x00051178) list_double_graphic_heading_pane_vc_t1

0x0da3,	// (0x00050cd6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0da3,	// (0x00050cd6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0005f966) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0005f966) list_double_graphic_heading_pane_vc_t

0x4b42,	// (0x00054a75) list_setting_pane_vc_g1_ParamLimits

0x4b42,	// (0x00054a75) list_setting_pane_vc_g1

0x4b4e,	// (0x00054a81) list_setting_pane_vc_g2_ParamLimits

0x4b4e,	// (0x00054a81) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0005f75c) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0005f75c) list_setting_pane_vc_g

0x68bd,	// (0x000567f0) list_setting_pane_vc_t1_ParamLimits

0x68bd,	// (0x000567f0) list_setting_pane_vc_t1

0x68d1,	// (0x00056804) list_setting_pane_vc_t2_ParamLimits

0x68d1,	// (0x00056804) list_setting_pane_vc_t2

0x0001,

0xfa76,	// (0x0005f9a9) list_setting_pane_vc_t_ParamLimits

0xfa76,	// (0x0005f9a9) list_setting_pane_vc_t

0x4bb2,	// (0x00054ae5) set_value_pane_cp_vc_ParamLimits

0x4bb2,	// (0x00054ae5) set_value_pane_cp_vc

0x3bb1,	// (0x00053ae4) list_single_number_heading_pane_vc_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_number_heading_pane_vc_g1

0x28b2,	// (0x000527e5) list_single_number_heading_pane_vc_g2_ParamLimits

0x28b2,	// (0x000527e5) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0005f549) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0005f549) list_single_number_heading_pane_vc_g

0x0da3,	// (0x00050cd6) list_single_number_heading_pane_vc_t1_ParamLimits

0x0da3,	// (0x00050cd6) list_single_number_heading_pane_vc_t1

0x1259,	// (0x0005118c) list_single_number_heading_pane_vc_t2_ParamLimits

0x1259,	// (0x0005118c) list_single_number_heading_pane_vc_t2

0x126d,	// (0x000511a0) list_single_number_heading_pane_vc_t3_ParamLimits

0x126d,	// (0x000511a0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa7b,	// (0x0005f9ae) list_single_number_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005f9ae) list_single_number_heading_pane_vc_t

0x0d2d,	// (0x00050c60) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0d2d,	// (0x00050c60) list_single_graphic_heading_pane_vc_g1

0x3bb1,	// (0x00053ae4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3bb1,	// (0x00053ae4) list_single_graphic_heading_pane_vc_g4

0x28b2,	// (0x000527e5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x28b2,	// (0x000527e5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0005f736) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0005f736) list_single_graphic_heading_pane_vc_g

0x0da3,	// (0x00050cd6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0da3,	// (0x00050cd6) list_single_graphic_heading_pane_vc_t1

0x127f,	// (0x000511b2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x127f,	// (0x000511b2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0005f9b5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0005f9b5) list_single_graphic_heading_pane_vc_t

0x3bb1,	// (0x00053ae4) list_double2_pane_vc_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_double2_pane_vc_g1

0x28b2,	// (0x000527e5) list_double2_pane_vc_g2_ParamLimits

0x28b2,	// (0x000527e5) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0005f549) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0005f549) list_double2_pane_vc_g

0x1293,	// (0x000511c6) list_double2_pane_vc_t1_ParamLimits

0x1293,	// (0x000511c6) list_double2_pane_vc_t1

0x2902,	// (0x00052835) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2902,	// (0x00052835) list_double2_large_graphic_pane_vc_g1

0x3bb1,	// (0x00053ae4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3bb1,	// (0x00053ae4) list_double2_large_graphic_pane_vc_g2

0x28b2,	// (0x000527e5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x28b2,	// (0x000527e5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0005f561) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0005f561) list_double2_large_graphic_pane_vc_g

0x12a9,	// (0x000511dc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x12a9,	// (0x000511dc) list_double2_large_graphic_pane_vc_t1

0x290e,	// (0x00052841) list_double_time_pane_vc_g1_ParamLimits

0x290e,	// (0x00052841) list_double_time_pane_vc_g1

0x291a,	// (0x0005284d) list_double_time_pane_vc_g2_ParamLimits

0x291a,	// (0x0005284d) list_double_time_pane_vc_g2

0x0001,

0xfa87,	// (0x0005f9ba) list_double_time_pane_vc_g_ParamLimits

0xfa87,	// (0x0005f9ba) list_double_time_pane_vc_g

0x12bf,	// (0x000511f2) list_double_time_pane_vc_t1_ParamLimits

0x12bf,	// (0x000511f2) list_double_time_pane_vc_t1

0x12d8,	// (0x0005120b) list_double_time_pane_vc_t2_ParamLimits

0x12d8,	// (0x0005120b) list_double_time_pane_vc_t2

0x1318,	// (0x0005124b) list_double_time_pane_vc_t3_ParamLimits

0x1318,	// (0x0005124b) list_double_time_pane_vc_t3

0x1330,	// (0x00051263) list_double_time_pane_vc_t4_ParamLimits

0x1330,	// (0x00051263) list_double_time_pane_vc_t4

0x0003,

0xfa8c,	// (0x0005f9bf) list_double_time_pane_vc_t_ParamLimits

0xfa8c,	// (0x0005f9bf) list_double_time_pane_vc_t

0x3bb1,	// (0x00053ae4) list_double_pane_vc_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_double_pane_vc_g1

0x28b2,	// (0x000527e5) list_double_pane_vc_g2_ParamLimits

0x28b2,	// (0x000527e5) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0005f549) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0005f549) list_double_pane_vc_g

0x1344,	// (0x00051277) list_double_pane_vc_t1_ParamLimits

0x1344,	// (0x00051277) list_double_pane_vc_t1

0x1356,	// (0x00051289) list_double_pane_vc_t2_ParamLimits

0x1356,	// (0x00051289) list_double_pane_vc_t2

0x0001,

0xfa95,	// (0x0005f9c8) list_double_pane_vc_t_ParamLimits

0xfa95,	// (0x0005f9c8) list_double_pane_vc_t

0x3bb1,	// (0x00053ae4) list_double_number_pane_vc_g1_ParamLimits

0x3bb1,	// (0x00053ae4) list_double_number_pane_vc_g1

0x28b2,	// (0x000527e5) list_double_number_pane_vc_g2_ParamLimits

0x28b2,	// (0x000527e5) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0005f549) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0005f549) list_double_number_pane_vc_g

0x136e,	// (0x000512a1) list_double_number_pane_vc_t1_ParamLimits

0x136e,	// (0x000512a1) list_double_number_pane_vc_t1

0x1382,	// (0x000512b5) list_double_number_pane_vc_t2_ParamLimits

0x1382,	// (0x000512b5) list_double_number_pane_vc_t2

0x1356,	// (0x00051289) list_double_number_pane_vc_t3_ParamLimits

0x1356,	// (0x00051289) list_double_number_pane_vc_t3

0x0002,

0xfa9a,	// (0x0005f9cd) list_double_number_pane_vc_t_ParamLimits

0xfa9a,	// (0x0005f9cd) list_double_number_pane_vc_t

0x2926,	// (0x00052859) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2926,	// (0x00052859) list_double_large_graphic_pane_vc_g1

0x2932,	// (0x00052865) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2932,	// (0x00052865) list_double_large_graphic_pane_vc_g2

0x28b2,	// (0x000527e5) list_double_large_graphic_pane_vc_g3_ParamLimits

0x28b2,	// (0x000527e5) list_double_large_graphic_pane_vc_g3

0x1394,	// (0x000512c7) list_double_large_graphic_pane_vc_g4_ParamLimits

0x1394,	// (0x000512c7) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa1,	// (0x0005f9d4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0005f9d4) list_double_large_graphic_pane_vc_g

0x13a0,	// (0x000512d3) list_double_large_graphic_pane_vc_t1_ParamLimits

0x13a0,	// (0x000512d3) list_double_large_graphic_pane_vc_t1

0x13b2,	// (0x000512e5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x13b2,	// (0x000512e5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0005f9dd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0005f9dd) list_double_large_graphic_pane_vc_t

0x28ea,	// (0x0005281d) list_double_heading_pane_vc_g1_ParamLimits

0x28ea,	// (0x0005281d) list_double_heading_pane_vc_g1

0x28f6,	// (0x00052829) list_double_heading_pane_vc_g2_ParamLimits

0x28f6,	// (0x00052829) list_double_heading_pane_vc_g2

0x0001,

0xfaaf,	// (0x0005f9e2) list_double_heading_pane_vc_g_ParamLimits

0xfaaf,	// (0x0005f9e2) list_double_heading_pane_vc_g

0x13cb,	// (0x000512fe) list_double_heading_pane_vc_t1_ParamLimits

0x13cb,	// (0x000512fe) list_double_heading_pane_vc_t1

0x0da3,	// (0x00050cd6) list_double_heading_pane_vc_t2_ParamLimits

0x0da3,	// (0x00050cd6) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0005f9e7) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0005f9e7) list_double_heading_pane_vc_t

0x0d2d,	// (0x00050c60) list_double_graphic_pane_vc_g1_ParamLimits

0x0d2d,	// (0x00050c60) list_double_graphic_pane_vc_g1

0x2941,	// (0x00052874) list_double_graphic_pane_vc_g2_ParamLimits

0x2941,	// (0x00052874) list_double_graphic_pane_vc_g2

0x2950,	// (0x00052883) list_double_graphic_pane_vc_g3_ParamLimits

0x2950,	// (0x00052883) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0005f9ec) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0005f9ec) list_double_graphic_pane_vc_g

0x13df,	// (0x00051312) list_double_graphic_pane_vc_t1_ParamLimits

0x13df,	// (0x00051312) list_double_graphic_pane_vc_t1

0x1356,	// (0x00051289) list_double_graphic_pane_vc_t2_ParamLimits

0x1356,	// (0x00051289) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0005f9f3) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0005f9f3) list_double_graphic_pane_vc_t

0xf28c,	// (0x0005f1bf) aid_size_cell_fastswap

0xae33,	// (0x0005ad66) aid_size_cell_touch_ParamLimits

0xae33,	// (0x0005ad66) aid_size_cell_touch

0xf467,	// (0x0005f39a) popup_fast_swap_wide_window_ParamLimits

0xf467,	// (0x0005f39a) popup_fast_swap_wide_window

0xaf82,	// (0x0005aeb5) touch_pane_ParamLimits

0xaf82,	// (0x0005aeb5) touch_pane

0x2fc2,	// (0x00052ef5) button_value_adjust_pane_cp2

0x0455,	// (0x00050388) button_value_adjust_pane_cp4

0x047d,	// (0x000503b0) form_field_data_pane_cp2

0xb63e,	// (0x0005b571) form_field_data_wide_pane_cp2

0x345b,	// (0x0005338e) bg_scroll_pane_ParamLimits

0x083a,	// (0x0005076d) scroll_handle_pane_ParamLimits

0x084e,	// (0x00050781) scroll_sc2_down_pane_ParamLimits

0x084e,	// (0x00050781) scroll_sc2_down_pane

0x348c,	// (0x000533bf) scroll_sc2_up_pane_ParamLimits

0x348c,	// (0x000533bf) scroll_sc2_up_pane

0xd999,	// (0x0005d8cc) grid_wheel_folder_pane_g1_ParamLimits

0xd999,	// (0x0005d8cc) grid_wheel_folder_pane_g1

0x0a86,	// (0x000509b9) clock_nsta_pane_cp2_ParamLimits

0x0a86,	// (0x000509b9) clock_nsta_pane_cp2

0xc639,	// (0x0005c56c) listscroll_midp_pane_ParamLimits

0xc64a,	// (0x0005c57d) midp_canvas_pane

0x3f42,	// (0x00053e75) nsta_clock_indic_pane

0x3f90,	// (0x00053ec3) listscroll_form_pane_vc

0x3fac,	// (0x00053edf) listscroll_set_pane_vc_ParamLimits

0x3fac,	// (0x00053edf) listscroll_set_pane_vc

0xd016,	// (0x0005cf49) clock_nsta_pane

0xd040,	// (0x0005cf73) indicator_nsta_pane

0x4a38,	// (0x0005496b) bg_popup_sub_pane_cp2_ParamLimits

0x4a4c,	// (0x0005497f) find_pane_cp2_ParamLimits

0x4a4c,	// (0x0005497f) find_pane_cp2

0x4a62,	// (0x00054995) grid_toobar_pane_ParamLimits

0x4bc0,	// (0x00054af3) list_form_gen_pane_vc_ParamLimits

0x4bc0,	// (0x00054af3) list_form_gen_pane_vc

0x4bd6,	// (0x00054b09) scroll_pane_cp8_vc_ParamLimits

0x4bd6,	// (0x00054b09) scroll_pane_cp8_vc

0x4c52,	// (0x00054b85) data_form_wide_pane_vc_ParamLimits

0x4c52,	// (0x00054b85) data_form_wide_pane_vc

0x4c5e,	// (0x00054b91) form_field_data_wide_pane_vc_g1

0x4c66,	// (0x00054b99) form_field_data_wide_pane_vc_t1_ParamLimits

0x4c66,	// (0x00054b99) form_field_data_wide_pane_vc_t1

0x2fd6,	// (0x00052f09) input_focus_pane_cp6_vc_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_cp6_vc

0xd3b9,	// (0x0005d2ec) list_midp_pane_ParamLimits

0x62d4,	// (0x00056207) scroll_pane_cp16_ParamLimits

0x62d4,	// (0x00056207) scroll_pane_cp16

0x4f8c,	// (0x00054ebf) button_value_adjust_pane_ParamLimits

0x4f8c,	// (0x00054ebf) button_value_adjust_pane

0xd5f6,	// (0x0005d529) button_value_adjust_pane_cp6_ParamLimits

0xd5f6,	// (0x0005d529) button_value_adjust_pane_cp6

0xd738,	// (0x0005d66b) settings_code_pane_cp_ParamLimits

0xd738,	// (0x0005d66b) settings_code_pane_cp

0x216b,	// (0x0005209e) cell_touch_pane_g1

0x216b,	// (0x0005209e) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0005f67f) cell_touch_pane_g

0xd86e,	// (0x0005d7a1) cell_touch_pane_cp_ParamLimits

0xd86e,	// (0x0005d7a1) cell_touch_pane_cp

0xd88a,	// (0x0005d7bd) cell_touch_pane_ParamLimits

0xd88a,	// (0x0005d7bd) cell_touch_pane

0x216b,	// (0x0005209e) scroll_sc2_down_pane_g1

0x216b,	// (0x0005209e) scroll_sc2_up_pane_g1

0x2175,	// (0x000520a8) bg_set_opt_pane_cp4_vc

0x6672,	// (0x000565a5) list_set_graphic_pane_vc_g1_ParamLimits

0x6672,	// (0x000565a5) list_set_graphic_pane_vc_g1

0x667e,	// (0x000565b1) list_set_graphic_pane_vc_g2_ParamLimits

0x667e,	// (0x000565b1) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0005f96b) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0005f96b) list_set_graphic_pane_vc_g

0x668a,	// (0x000565bd) text_primary_small_cp13_vc_ParamLimits

0x668a,	// (0x000565bd) text_primary_small_cp13_vc

0x66a2,	// (0x000565d5) list_set_graphic_pane_vc_ParamLimits

0x66a2,	// (0x000565d5) list_set_graphic_pane_vc

0x2175,	// (0x000520a8) input_focus_pane_cp2_vc

0x216b,	// (0x0005209e) setting_code_pane_vc_g1

0x66b6,	// (0x000565e9) setting_code_pane_vc_t1

0x66c4,	// (0x000565f7) set_text_pane_vc_t1_ParamLimits

0x66c4,	// (0x000565f7) set_text_pane_vc_t1

0x2175,	// (0x000520a8) input_focus_pane_cp1_vc

0x66e2,	// (0x00056615) list_set_text_pane_vc

0x216b,	// (0x0005209e) setting_text_pane_vc_g1

0x2175,	// (0x000520a8) bg_set_opt_pane_cp2_vc

0x66ec,	// (0x0005661f) setting_slider_graphic_pane_vc_g1

0x66f4,	// (0x00056627) setting_slider_graphic_pane_vc_t1

0x6702,	// (0x00056635) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005f970) setting_slider_graphic_pane_vc_t

0x6752,	// (0x00056685) slider_set_pane_cp_vc

0x675a,	// (0x0005668d) slider_set_pane_vc_g1

0x6763,	// (0x00056696) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0005f975) slider_set_pane_vc_g

0x303d,	// (0x00052f70) set_opt_bg_pane_g1_copy1

0x3045,	// (0x00052f78) set_opt_bg_pane_g2_copy1

0x678f,	// (0x000566c2) set_opt_bg_pane_g3_copy1

0x3055,	// (0x00052f88) set_opt_bg_pane_g4_copy1

0x305d,	// (0x00052f90) set_opt_bg_pane_g5_copy1

0x3065,	// (0x00052f98) set_opt_bg_pane_g6_copy1

0x6799,	// (0x000566cc) set_opt_bg_pane_g7_copy1

0x67a3,	// (0x000566d6) set_opt_bg_pane_g8_copy1

0x67ad,	// (0x000566e0) set_opt_bg_pane_g9_copy1

0x2175,	// (0x000520a8) bg_set_opt_pane_cp_vc

0x67b7,	// (0x000566ea) setting_slider_pane_vc_t1

0x66f4,	// (0x00056627) setting_slider_pane_vc_t2

0x6702,	// (0x00056635) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0005f984) setting_slider_pane_vc_t

0x6752,	// (0x00056685) slider_set_pane_vc

0x0ec0,	// (0x00050df3) volume_set_pane_vc_g1

0x0ec9,	// (0x00050dfc) volume_set_pane_vc_g2

0x0ed2,	// (0x00050e05) volume_set_pane_vc_g3

0x0edb,	// (0x00050e0e) volume_set_pane_vc_g4

0x0ee4,	// (0x00050e17) volume_set_pane_vc_g5

0x0eed,	// (0x00050e20) volume_set_pane_vc_g6

0x0ef6,	// (0x00050e29) volume_set_pane_vc_g7

0x0eff,	// (0x00050e32) volume_set_pane_vc_g8

0x0f08,	// (0x00050e3b) volume_set_pane_vc_g9

0x0f11,	// (0x00050e44) volume_set_pane_vc_g10

0x0009,

0xfa58,	// (0x0005f98b) volume_set_pane_vc_g

0x67c6,	// (0x000566f9) volume_set_pane_vc

0x67ce,	// (0x00056701) button_value_adjust_pane_cp1_vc

0x67d8,	// (0x0005670b) list_highlight_pane_cp2_vc

0x67e1,	// (0x00056714) list_set_pane_vc_ParamLimits

0x67e1,	// (0x00056714) list_set_pane_vc

0x684b,	// (0x0005677e) main_pane_set_vc_t1_ParamLimits

0x684b,	// (0x0005677e) main_pane_set_vc_t1

0x6860,	// (0x00056793) main_pane_set_vc_t2_ParamLimits

0x6860,	// (0x00056793) main_pane_set_vc_t2

0x6872,	// (0x000567a5) main_pane_set_vc_t3_ParamLimits

0x6872,	// (0x000567a5) main_pane_set_vc_t3

0x6886,	// (0x000567b9) main_pane_set_vc_t4_ParamLimits

0x6886,	// (0x000567b9) main_pane_set_vc_t4

0x0003,

0xfa6d,	// (0x0005f9a0) main_pane_set_vc_t_ParamLimits

0xfa6d,	// (0x0005f9a0) main_pane_set_vc_t

0x689a,	// (0x000567cd) setting_code_pane_vc_ParamLimits

0x689a,	// (0x000567cd) setting_code_pane_vc

0x68ab,	// (0x000567de) setting_slider_graphic_pane_vc

0x68ab,	// (0x000567de) setting_slider_pane_vc

0x68ab,	// (0x000567de) setting_text_pane_vc

0x68ab,	// (0x000567de) setting_volume_pane_vc

0x68b5,	// (0x000567e8) scroll_pane_cp121_vc

0x2fb0,	// (0x00052ee3) set_content_pane_vc

0x68f3,	// (0x00056826) button_value_adjust_pane_g1

0x68fc,	// (0x0005682f) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0005f9f8) button_value_adjust_pane_g

0x6905,	// (0x00056838) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6905,	// (0x00056838) form_field_slider_wide_pane_vc_t1

0x6919,	// (0x0005684c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6919,	// (0x0005684c) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0005f9fd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0005f9fd) form_field_slider_wide_pane_vc_t

0x24d1,	// (0x00052404) input_focus_pane_cp10_vc_ParamLimits

0x24d1,	// (0x00052404) input_focus_pane_cp10_vc

0x692b,	// (0x0005685e) slider_cont_pane_cp1_vc_ParamLimits

0x692b,	// (0x0005685e) slider_cont_pane_cp1_vc

0x675a,	// (0x0005668d) slider_form_pane_g1_cp2

0x6763,	// (0x00056696) slider_form_pane_g2_cp2

0x6944,	// (0x00056877) form_field_slider_pane_vc_t3

0x6952,	// (0x00056885) form_field_slider_pane_vc_t4

0x6960,	// (0x00056893) slider_form_pane_vc_ParamLimits

0x6960,	// (0x00056893) slider_form_pane_vc

0x696d,	// (0x000568a0) form_field_slider_pane_vc_t1_ParamLimits

0x696d,	// (0x000568a0) form_field_slider_pane_vc_t1

0x6919,	// (0x0005684c) form_field_slider_pane_vc_t2_ParamLimits

0x6919,	// (0x0005684c) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0005fa0d) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0005fa0d) form_field_slider_pane_vc_t

0x24d1,	// (0x00052404) input_focus_pane_cp9_vc_ParamLimits

0x24d1,	// (0x00052404) input_focus_pane_cp9_vc

0x6989,	// (0x000568bc) slider_cont_pane_vc_ParamLimits

0x6989,	// (0x000568bc) slider_cont_pane_vc

0x699b,	// (0x000568ce) list_form_graphic_pane_cp_vc_ParamLimits

0x699b,	// (0x000568ce) list_form_graphic_pane_cp_vc

0x4c5e,	// (0x00054b91) form_field_popup_wide_pane_vc_g1

0x69b0,	// (0x000568e3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69b0,	// (0x000568e3) form_field_popup_wide_pane_vc_t1

0x2fd6,	// (0x00052f09) input_focus_pane_cp8_vc_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_cp8_vc

0x69c7,	// (0x000568fa) list_form_wide_pane_vc_ParamLimits

0x69c7,	// (0x000568fa) list_form_wide_pane_vc

0x69d3,	// (0x00056906) list_form_graphic_pane_vc_g1

0x69db,	// (0x0005690e) list_form_graphic_pane_vc_t1_ParamLimits

0x69db,	// (0x0005690e) list_form_graphic_pane_vc_t1

0x2255,	// (0x00052188) list_highlight_pane_cp5_vc_ParamLimits

0x2255,	// (0x00052188) list_highlight_pane_cp5_vc

0x69f7,	// (0x0005692a) list_form_graphic_pane_vc_ParamLimits

0x69f7,	// (0x0005692a) list_form_graphic_pane_vc

0x4c5e,	// (0x00054b91) form_field_popup_pane_vc_g1

0x6a0d,	// (0x00056940) form_field_popup_pane_vc_t1_ParamLimits

0x6a0d,	// (0x00056940) form_field_popup_pane_vc_t1

0x2fd6,	// (0x00052f09) input_focus_pane_cp7_vc_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_cp7_vc

0x6a24,	// (0x00056957) list_form_pane_vc_ParamLimits

0x6a24,	// (0x00056957) list_form_pane_vc

0x6a30,	// (0x00056963) data_form_pane_vc_t1_ParamLimits

0x6a30,	// (0x00056963) data_form_pane_vc_t1

0x303d,	// (0x00052f70) input_focus_pane_vc_g1

0x3045,	// (0x00052f78) input_focus_pane_vc_g2

0x304d,	// (0x00052f80) input_focus_pane_vc_g3

0x3055,	// (0x00052f88) input_focus_pane_vc_g4

0x305d,	// (0x00052f90) input_focus_pane_vc_g5

0x3065,	// (0x00052f98) input_focus_pane_vc_g6

0x306d,	// (0x00052fa0) input_focus_pane_vc_g7

0x3075,	// (0x00052fa8) input_focus_pane_vc_g8

0x307d,	// (0x00052fb0) input_focus_pane_vc_g9

0x216b,	// (0x0005209e) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0005f608) input_focus_pane_vc_g

0x4c52,	// (0x00054b85) data_form_pane_vc_ParamLimits

0x4c52,	// (0x00054b85) data_form_pane_vc

0x4c5e,	// (0x00054b91) form_field_data_pane_vc_g1

0x6a4d,	// (0x00056980) form_field_data_pane_vc_t1_ParamLimits

0x6a4d,	// (0x00056980) form_field_data_pane_vc_t1

0x2fd6,	// (0x00052f09) input_focus_pane_vc_ParamLimits

0x2fd6,	// (0x00052f09) input_focus_pane_vc

0x6a67,	// (0x0005699a) button_value_adjust_pane_cp3_vc

0x6a6f,	// (0x000569a2) button_value_adjust_pane_cp5_vc

0x6a77,	// (0x000569aa) form_field_data_pane_vc_ParamLimits

0x6a77,	// (0x000569aa) form_field_data_pane_vc

0x6a92,	// (0x000569c5) form_field_data_pane_vc_cp2

0x6a9a,	// (0x000569cd) form_field_data_wide_pane_vc_ParamLimits

0x6a9a,	// (0x000569cd) form_field_data_wide_pane_vc

0x6ab4,	// (0x000569e7) form_field_data_wide_pane_vc_cp2

0x6abc,	// (0x000569ef) form_field_popup_pane_vc_ParamLimits

0x6abc,	// (0x000569ef) form_field_popup_pane_vc

0x6ad7,	// (0x00056a0a) form_field_popup_wide_pane_vc_ParamLimits

0x6ad7,	// (0x00056a0a) form_field_popup_wide_pane_vc

0x6af1,	// (0x00056a24) form_field_slider_pane_vc_ParamLimits

0x6af1,	// (0x00056a24) form_field_slider_pane_vc

0x6b04,	// (0x00056a37) form_field_slider_wide_pane_vc_ParamLimits

0x6b04,	// (0x00056a37) form_field_slider_wide_pane_vc

0xd8a8,	// (0x0005d7db) grid_touch_1_pane_ParamLimits

0xd8a8,	// (0x0005d7db) grid_touch_1_pane

0xd8bc,	// (0x0005d7ef) grid_touch_2_pane_ParamLimits

0xd8bc,	// (0x0005d7ef) grid_touch_2_pane

0x6bdb,	// (0x00056b0e) touch_pane_g1_ParamLimits

0x6bdb,	// (0x00056b0e) touch_pane_g1

0x6b3d,	// (0x00056a70) cell_app_pane_cp_wide_ParamLimits

0x6b3d,	// (0x00056a70) cell_app_pane_cp_wide

0x6b4e,	// (0x00056a81) grid_popup_fast_wide_pane_ParamLimits

0x6b4e,	// (0x00056a81) grid_popup_fast_wide_pane

0x6b62,	// (0x00056a95) scroll_pane_cp19_ParamLimits

0x6b62,	// (0x00056a95) scroll_pane_cp19

0x2175,	// (0x000520a8) bg_popup_window_pane_cp20

0x6b76,	// (0x00056aa9) listscroll_popup_fast_wide_pane

0x31ac,	// (0x000530df) grid_indicator_nsta_pane

0x6b7e,	// (0x00056ab1) clock_nsta_pane_g1

0x6b87,	// (0x00056aba) clock_nsta_pane_t1

0xd8e8,	// (0x0005d81b) cell_indicator_nsta_pane_ParamLimits

0xd8e8,	// (0x0005d81b) cell_indicator_nsta_pane

0x6bdb,	// (0x00056b0e) cell_indicator_nsta_pane_g1

0xd905,	// (0x0005d838) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0005fa17) cell_indicator_nsta_pane_g

0x6bfe,	// (0x00056b31) clock_nsta_pane_cp

0x6c06,	// (0x00056b39) indicator_nsta_pane_cp

0x6c0e,	// (0x00056b41) nsta_clock_indic_pane_g1

0x2321,	// (0x00052254) grid_indicator_pane

0x357e,	// (0x000534b1) scroll_pane_cp29

0x09d2,	// (0x00050905) indicator_nsta_pane_cp2_ParamLimits

0x09d2,	// (0x00050905) indicator_nsta_pane_cp2

0x2255,	// (0x00052188) main_apps_wheel_pane

0x4e1d,	// (0x00054d50) form_midp_field_text_pane_ParamLimits

0x4f6c,	// (0x00054e9f) scroll_bar_cp050_ParamLimits

0x6c46,	// (0x00056b79) cell_indicator_pane_ParamLimits

0x6c46,	// (0x00056b79) cell_indicator_pane

0x6c5e,	// (0x00056b91) cell_indicator_pane_g1

0xd91b,	// (0x0005d84e) grid_wheel_folder_pane_ParamLimits

0xd91b,	// (0x0005d84e) grid_wheel_folder_pane

0xd929,	// (0x0005d85c) list_wheel_apps_pane_ParamLimits

0xd929,	// (0x0005d85c) list_wheel_apps_pane

0xd937,	// (0x0005d86a) main_apps_wheel_pane_g1_ParamLimits

0xd937,	// (0x0005d86a) main_apps_wheel_pane_g1

0xd947,	// (0x0005d87a) main_apps_wheel_pane_g2_ParamLimits

0xd947,	// (0x0005d87a) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0005fa26) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0005fa26) main_apps_wheel_pane_g

0xd957,	// (0x0005d88a) main_apps_wheel_pane_t1_ParamLimits

0xd957,	// (0x0005d88a) main_apps_wheel_pane_t1

0xd96f,	// (0x0005d8a2) list_wheel_apps_pane_g1

0xd977,	// (0x0005d8aa) list_wheel_apps_pane_g2

0xd97f,	// (0x0005d8b2) list_wheel_apps_pane_g3

0xd987,	// (0x0005d8ba) list_wheel_apps_pane_g4

0xd98f,	// (0x0005d8c2) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0005fa2b) list_wheel_apps_pane_g

0x3abc,	// (0x000539ef) navi_icon_text_pane

0xcf0f,	// (0x0005ce42) aid_fill_nsta

0xd9ac,	// (0x0005d8df) navi_icon_text_pane_g1

0xd9b8,	// (0x0005d8eb) navi_icon_text_pane_t1

0xc621,	// (0x0005c554) list_set_graphic_pane_t1_ParamLimits

0xc621,	// (0x0005c554) list_set_graphic_pane_t1

0x568c,	// (0x000555bf) popup_midp_note_alarm_window_t6_ParamLimits

0x568c,	// (0x000555bf) popup_midp_note_alarm_window_t6

0x569e,	// (0x000555d1) popup_midp_note_alarm_window_t7_ParamLimits

0x569e,	// (0x000555d1) popup_midp_note_alarm_window_t7

0x56b0,	// (0x000555e3) popup_midp_note_alarm_window_t8_ParamLimits

0x56b0,	// (0x000555e3) popup_midp_note_alarm_window_t8

0x56c2,	// (0x000555f5) popup_midp_note_alarm_window_t9_ParamLimits

0x56c2,	// (0x000555f5) popup_midp_note_alarm_window_t9

0x56d4,	// (0x00055607) popup_midp_note_alarm_window_t10_ParamLimits

0x56d4,	// (0x00055607) popup_midp_note_alarm_window_t10

0x56e6,	// (0x00055619) popup_midp_note_alarm_window_t11_ParamLimits

0x56e6,	// (0x00055619) popup_midp_note_alarm_window_t11

0x56f8,	// (0x0005562b) scroll_pane_cp17_ParamLimits

0x56f8,	// (0x0005562b) scroll_pane_cp17

0x0ec0,	// (0x00050df3) volume_small_pane_cp_g1

0x13f1,	// (0x00051324) volume_small_pane_cp_g2

0x13fa,	// (0x0005132d) volume_small_pane_cp_g3

0x1403,	// (0x00051336) volume_small_pane_cp_g4

0x140c,	// (0x0005133f) volume_small_pane_cp_g5

0x1415,	// (0x00051348) volume_small_pane_cp_g6

0x141e,	// (0x00051351) volume_small_pane_cp_g7

0x1427,	// (0x0005135a) volume_small_pane_cp_g8

0x1430,	// (0x00051363) volume_small_pane_cp_g9

0x1439,	// (0x0005136c) volume_small_pane_cp_g10

0x3d1d,	// (0x00053c50) midp_ticker_pane_g1_ParamLimits

0x3d29,	// (0x00053c5c) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0005f6d0) midp_ticker_pane_g_ParamLimits

0xc6e1,	// (0x0005c614) midp_ticker_pane_t1_ParamLimits

0xcf2f,	// (0x0005ce62) aid_fill_nsta_2

0x4f58,	// (0x00054e8b) list_form2_midp_pane

0x60b5,	// (0x00055fe8) midp_editing_number_pane_ParamLimits

0x60c4,	// (0x00055ff7) midp_ticker_pane_ParamLimits

0x6d57,	// (0x00056c8a) form2_midp_field_pane

0x6d7b,	// (0x00056cae) scroll_pane_cp51

0x6d9b,	// (0x00056cce) form2_midp_button_pane_ParamLimits

0x6d9b,	// (0x00056cce) form2_midp_button_pane

0x6dad,	// (0x00056ce0) form2_midp_content_pane_ParamLimits

0x6dad,	// (0x00056ce0) form2_midp_content_pane

0x6dc7,	// (0x00056cfa) form2_midp_field_choice_group_pane

0x6dcf,	// (0x00056d02) form2_midp_field_pane_g1

0x6dd7,	// (0x00056d0a) form2_midp_field_pane_g2

0x6ddf,	// (0x00056d12) form2_midp_field_pane_g3

0x6de7,	// (0x00056d1a) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0005fa50) form2_midp_field_pane_g

0x6def,	// (0x00056d22) form2_midp_gauge_slider_pane

0x6df7,	// (0x00056d2a) form2_midp_gauge_wait_pane

0x6dff,	// (0x00056d32) form2_midp_image_pane_ParamLimits

0x6dff,	// (0x00056d32) form2_midp_image_pane

0x6e1a,	// (0x00056d4d) form2_midp_label_pane_ParamLimits

0x6e1a,	// (0x00056d4d) form2_midp_label_pane

0xd9e6,	// (0x0005d919) form2_midp_label_pane_cp_ParamLimits

0xd9e6,	// (0x0005d919) form2_midp_label_pane_cp

0x6e5a,	// (0x00056d8d) form2_midp_string_pane_ParamLimits

0x6e5a,	// (0x00056d8d) form2_midp_string_pane

0xbb5b,	// (0x0005ba8e) form2_midp_text_pane_ParamLimits

0xbb5b,	// (0x0005ba8e) form2_midp_text_pane

0x6e6c,	// (0x00056d9f) form2_midp_time_pane

0x6e7c,	// (0x00056daf) input_focus_pane_cp51_ParamLimits

0x6e7c,	// (0x00056daf) input_focus_pane_cp51

0x6e94,	// (0x00056dc7) form2_midp_label_pane_t1_ParamLimits

0x6e94,	// (0x00056dc7) form2_midp_label_pane_t1

0xbb7e,	// (0x0005bab1) form2_mdip_text_pane_t1_ParamLimits

0xbb7e,	// (0x0005bab1) form2_mdip_text_pane_t1

0x295c,	// (0x0005288f) form2_midp_time_pane_t1

0x6ee2,	// (0x00056e15) form2_midp_gauge_slider_pane_t1

0xda07,	// (0x0005d93a) form2_midp_gauge_slider_pane_t2

0xda19,	// (0x0005d94c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0005fa59) form2_midp_gauge_slider_pane_t

0x6f18,	// (0x00056e4b) form2_midp_slider_pane

0x6f24,	// (0x00056e57) form2_midp_gauge_wait_pane_t1

0x6f32,	// (0x00056e65) form2_midp_wait_pane_ParamLimits

0x6f32,	// (0x00056e65) form2_midp_wait_pane

0xd348,	// (0x0005d27b) list_single_2graphic_pane_cp4_ParamLimits

0xd348,	// (0x0005d27b) list_single_2graphic_pane_cp4

0xda2b,	// (0x0005d95e) list_single_midp_graphic_pane_cp_ParamLimits

0xda2b,	// (0x0005d95e) list_single_midp_graphic_pane_cp

0x2175,	// (0x000520a8) list_highlight_pane_cp20

0x6f81,	// (0x00056eb4) list_single_2graphic_pane_g1_cp4

0x6554,	// (0x00056487) list_single_2graphic_pane_g2_cp4

0x6f89,	// (0x00056ebc) list_single_2graphic_pane_t1_cp4

0x2255,	// (0x00052188) list_highlight_pane_cp21

0x6f98,	// (0x00056ecb) list_single_midp_graphic_pane_g4_cp

0x6fa7,	// (0x00056eda) list_single_midp_graphic_pane_t1_cp

0xda4c,	// (0x0005d97f) form2_mdip_string_pane_t1_ParamLimits

0xda4c,	// (0x0005d97f) form2_mdip_string_pane_t1

0x2175,	// (0x000520a8) bg_wml_button_pane_cp2

0x216b,	// (0x0005209e) form2_midp_image_pane_g1

0x286a,	// (0x0005279d) list_double_large_graphic_pane_g5_ParamLimits

0x286a,	// (0x0005279d) list_double_large_graphic_pane_g5

0xc639,	// (0x0005c56c) midp_form_pane_ParamLimits

0x2255,	// (0x00052188) main_apps_wheel_pane_ParamLimits

0xcb89,	// (0x0005cabc) popup_preview_window_ParamLimits

0xcb89,	// (0x0005cabc) popup_preview_window

0x4582,	// (0x000544b5) popup_touch_info_window_ParamLimits

0x4582,	// (0x000544b5) popup_touch_info_window

0x45a4,	// (0x000544d7) popup_touch_menu_window_ParamLimits

0x45a4,	// (0x000544d7) popup_touch_menu_window

0x2161,	// (0x00052094) bg_popup_sub_pane_cp6

0x7061,	// (0x00056f94) list_touch_menu_pane

0x7069,	// (0x00056f9c) list_single_touch_menu_pane_ParamLimits

0x7069,	// (0x00056f9c) list_single_touch_menu_pane

0x7084,	// (0x00056fb7) list_single_touch_menu_pane_t1

0x2255,	// (0x00052188) bg_popup_sub_pane_cp7_ParamLimits

0x2255,	// (0x00052188) bg_popup_sub_pane_cp7

0x7092,	// (0x00056fc5) heading_sub_pane

0x709a,	// (0x00056fcd) list_touch_info_pane_ParamLimits

0x709a,	// (0x00056fcd) list_touch_info_pane

0x70a9,	// (0x00056fdc) list_single_touch_info_pane_ParamLimits

0x70a9,	// (0x00056fdc) list_single_touch_info_pane

0x70bb,	// (0x00056fee) list_single_touch_info_pane_t1

0x70c9,	// (0x00056ffc) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0005fa67) list_single_touch_info_pane_t

0x3c40,	// (0x00053b73) bg_popup_heading_pane_cp

0x70d7,	// (0x0005700a) heading_sub_pane_t1

0x4bec,	// (0x00054b1f) bg_popup_preview_window_pane_cp_ParamLimits

0x4bec,	// (0x00054b1f) bg_popup_preview_window_pane_cp

0x7092,	// (0x00056fc5) heading_preview_pane

0x709a,	// (0x00056fcd) list_preview_pane_ParamLimits

0x709a,	// (0x00056fcd) list_preview_pane

0x70e5,	// (0x00057018) popup_preview_window_g1

0x70a9,	// (0x00056fdc) list_single_preview_pane_ParamLimits

0x70a9,	// (0x00056fdc) list_single_preview_pane

0x70ed,	// (0x00057020) list_single_preview_pane_g1

0x70f5,	// (0x00057028) list_single_preview_pane_t1

0x70bb,	// (0x00056fee) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0005fa6c) list_single_preview_pane_t

0x7103,	// (0x00057036) bg_popup_heading_pane_cp2_ParamLimits

0x7103,	// (0x00057036) bg_popup_heading_pane_cp2

0x7119,	// (0x0005704c) heading_preview_pane_g1

0x7121,	// (0x00057054) heading_preview_pane_t1_ParamLimits

0x7121,	// (0x00057054) heading_preview_pane_t1

0x2344,	// (0x00052277) soft_indicator_pane_t1_ParamLimits

0x2f49,	// (0x00052e7c) scroll_pane_ParamLimits

0x347a,	// (0x000533ad) scroll_sc2_left_pane

0x3483,	// (0x000533b6) scroll_sc2_right_pane

0x34a2,	// (0x000533d5) scroll_bg_pane_g1_ParamLimits

0x34b7,	// (0x000533ea) scroll_bg_pane_g2_ParamLimits

0x34cf,	// (0x00053402) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0005f65f) scroll_bg_pane_g_ParamLimits

0x34a2,	// (0x000533d5) scroll_handle_pane_g1_ParamLimits

0x34f1,	// (0x00053424) scroll_handle_pane_g2_ParamLimits

0x34cf,	// (0x00053402) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0005f666) scroll_handle_pane_g_ParamLimits

0x3fe6,	// (0x00053f19) popup_choice_list_window_ParamLimits

0x3fe6,	// (0x00053f19) popup_choice_list_window

0x4a44,	// (0x00054977) choice_list_pane

0x4ac6,	// (0x000549f9) cell_toolbar_pane_t1

0x4aee,	// (0x00054a21) toolbar_button_pane_ParamLimits

0x5bc8,	// (0x00055afb) ai_gene_pane_1_t2_ParamLimits

0x5bc8,	// (0x00055afb) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0005f87e) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0005f87e) ai_gene_pane_1_t

0x713e,	// (0x00057071) scroll_sc2_left_pane_g1

0x713e,	// (0x00057071) scroll_sc2_right_pane_g1

0x3fbe,	// (0x00053ef1) bg_popup_sub_pane_cp10

0x7148,	// (0x0005707b) list_choice_list_pane

0x715f,	// (0x00057092) list_single_choice_list_pane_ParamLimits

0x715f,	// (0x00057092) list_single_choice_list_pane

0x7173,	// (0x000570a6) list_single_choice_list_pane_g1

0x717b,	// (0x000570ae) list_single_choice_list_pane_t1_ParamLimits

0x717b,	// (0x000570ae) list_single_choice_list_pane_t1

0x7190,	// (0x000570c3) choice_list_pane_g1

0x7198,	// (0x000570cb) choice_list_pane_t1

0x2161,	// (0x00052094) input_focus_pane_cp11

0x3354,	// (0x00053287) title_pane_stacon_g2_ParamLimits

0x3354,	// (0x00053287) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0005f645) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0005f645) title_pane_stacon_g

0x3c40,	// (0x00053b73) cursor_press_pane

0xc80a,	// (0x0005c73d) popup_fep_hwr_window_ParamLimits

0xc80a,	// (0x0005c73d) popup_fep_hwr_window

0x4126,	// (0x00054059) popup_fep_vkb_window_ParamLimits

0x4126,	// (0x00054059) popup_fep_vkb_window

0x71a6,	// (0x000570d9) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0005fa95) fep_vkb_side_pane_g_ParamLimits

0x14bd,	// (0x000513f0) fep_hwr_candidate_pane_ParamLimits

0x14bd,	// (0x000513f0) fep_hwr_candidate_pane

0x14e7,	// (0x0005141a) fep_hwr_side_pane_ParamLimits

0x14e7,	// (0x0005141a) fep_hwr_side_pane

0x1509,	// (0x0005143c) fep_hwr_top_pane_ParamLimits

0x1509,	// (0x0005143c) fep_hwr_top_pane

0x1521,	// (0x00051454) fep_hwr_write_pane_ParamLimits

0x1521,	// (0x00051454) fep_hwr_write_pane

0xfb62,	// (0x0005fa95) fep_vkb_side_pane_g

0x71ae,	// (0x000570e1) fep_hwr_top_pane_g1

0x71c0,	// (0x000570f3) fep_hwr_top_pane_g2

0x155b,	// (0x0005148e) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0005fa71) fep_hwr_top_pane_g

0x1570,	// (0x000514a3) fep_hwr_top_text_pane

0x3646,	// (0x00053579) fep_hwr_top_text_pane_g1

0x71f6,	// (0x00057129) fep_hwr_top_text_pane_t1

0x167a,	// (0x000515ad) fep_hwr_candidate_pane_g1

0x744f,	// (0x00057382) fep_vkb_keypad_pane_g3_ParamLimits

0x744f,	// (0x00057382) fep_vkb_keypad_pane_g3

0x747b,	// (0x000573ae) fep_vkb_keypad_pane_g4_ParamLimits

0x747b,	// (0x000573ae) fep_vkb_keypad_pane_g4

0x74f2,	// (0x00057425) fep_vkb_bottom_pane_g2_ParamLimits

0x74f2,	// (0x00057425) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0005fa9c) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0005fa9c) fep_vkb_bottom_pane_g

0x713e,	// (0x00057071) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0005faa6) cell_vkb_side_pane_g

0x757d,	// (0x000574b0) cell_vkb_side_pane_t1

0x758b,	// (0x000574be) cell_vkb_side_pane_t1_copy1

0x713e,	// (0x00057071) bg_fep_vkb_candidate_pane_g2

0x76cf,	// (0x00057602) cell_vkb_candidate_pane_ParamLimits

0x7204,	// (0x00057137) aid_size_cell_vkb_ParamLimits

0x7204,	// (0x00057137) aid_size_cell_vkb

0x76cf,	// (0x00057602) cell_vkb_candidate_pane

0x16a1,	// (0x000515d4) bg_popup_fep_shadow_pane_g1

0xdae8,	// (0x0005da1b) fep_vkb_bottom_pane_ParamLimits

0xdae8,	// (0x0005da1b) fep_vkb_bottom_pane

0x72d3,	// (0x00057206) fep_vkb_candidate_pane_ParamLimits

0x72d3,	// (0x00057206) fep_vkb_candidate_pane

0xdb14,	// (0x0005da47) fep_vkb_keypad_pane_ParamLimits

0xdb14,	// (0x0005da47) fep_vkb_keypad_pane

0xdb3b,	// (0x0005da6e) fep_vkb_side_pane_ParamLimits

0xdb3b,	// (0x0005da6e) fep_vkb_side_pane

0xdb77,	// (0x0005daaa) fep_vkb_top_pane_ParamLimits

0xdb77,	// (0x0005daaa) fep_vkb_top_pane

0x73a8,	// (0x000572db) fep_vkb_top_pane_g1_ParamLimits

0x73a8,	// (0x000572db) fep_vkb_top_pane_g1

0x73b7,	// (0x000572ea) fep_vkb_top_pane_g2_ParamLimits

0x73b7,	// (0x000572ea) fep_vkb_top_pane_g2

0x73c6,	// (0x000572f9) fep_vkb_top_pane_g3_ParamLimits

0x73c6,	// (0x000572f9) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0005fa8c) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0005fa8c) fep_vkb_top_pane_g

0x73e4,	// (0x00057317) fep_vkb_top_text_pane_ParamLimits

0x73e4,	// (0x00057317) fep_vkb_top_text_pane

0xdbb3,	// (0x0005dae6) fep_vkb_side_pane_g1_ParamLimits

0xdbb3,	// (0x0005dae6) fep_vkb_side_pane_g1

0x743e,	// (0x00057371) grid_vkb_side_pane_ParamLimits

0x743e,	// (0x00057371) grid_vkb_side_pane

0x16a9,	// (0x000515dc) bg_popup_fep_shadow_pane_g2

0x16b2,	// (0x000515e5) bg_popup_fep_shadow_pane_g3

0x16ba,	// (0x000515ed) bg_popup_fep_shadow_pane_g4

0x16c3,	// (0x000515f6) bg_popup_fep_shadow_pane_g5

0x16cd,	// (0x00051600) bg_popup_fep_shadow_pane_g6

0x16d5,	// (0x00051608) bg_popup_fep_shadow_pane_g7

0x3055,	// (0x00052f88) bg_popup_fep_shadow_pane_g8

0x749d,	// (0x000573d0) grid_vkb_keypad_number_pane_ParamLimits

0x749d,	// (0x000573d0) grid_vkb_keypad_number_pane

0x74b1,	// (0x000573e4) grid_vkb_keypad_pane_ParamLimits

0x74b1,	// (0x000573e4) grid_vkb_keypad_pane

0x74d7,	// (0x0005740a) fep_vkb_bottom_pane_g1_ParamLimits

0x74d7,	// (0x0005740a) fep_vkb_bottom_pane_g1

0x7500,	// (0x00057433) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7500,	// (0x00057433) grid_vkb_keypad_bottom_left_pane

0x7515,	// (0x00057448) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7515,	// (0x00057448) grid_vkb_keypad_bottom_right_pane

0x752a,	// (0x0005745d) fep_vkb_top_text_pane_g1

0xdbfa,	// (0x0005db2d) fep_vkb_top_text_pane_t1

0xdc0c,	// (0x0005db3f) cell_vkb_side_pane_ParamLimits

0xdc0c,	// (0x0005db3f) cell_vkb_side_pane

0x713e,	// (0x00057071) cell_vkb_side_pane_g1

0x7599,	// (0x000574cc) cell_vkb_keypad_pane_ParamLimits

0x7599,	// (0x000574cc) cell_vkb_keypad_pane

0x7626,	// (0x00057559) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0005fab9) bg_popup_fep_shadow_pane_g

0x16e7,	// (0x0005161a) cell_hwr_side_pane_g1

0x16e7,	// (0x0005161a) cell_hwr_side_pane_g2

0x7630,	// (0x00057563) cell_vkb_keypad_pane_t1

0xdc22,	// (0x0005db55) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdc22,	// (0x0005db55) cell_vkb_keypad_bottom_left_pane

0xdc37,	// (0x0005db6a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdc37,	// (0x0005db6a) cell_vkb_keypad_bottom_right_pane

0x713e,	// (0x00057071) cell_vkb_keypad_bottom_left_pane_g1

0x713e,	// (0x00057071) cell_vkb_keypad_bottom_right_pane_g1

0x7694,	// (0x000575c7) cell_vkb_keypad_number_pane_ParamLimits

0x7694,	// (0x000575c7) cell_vkb_keypad_number_pane

0x76b3,	// (0x000575e6) cell_vkb_keypad_number_pane_g1

0x76bd,	// (0x000575f0) cell_vkb_keypad_number_pane_g2

0x76c6,	// (0x000575f9) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0005faab) cell_vkb_keypad_number_pane_g

0x7630,	// (0x00057563) cell_vkb_keypad_number_pane_t1

0x76f0,	// (0x00057623) fep_vkb_candidate_pane_g1

0x0001,

0xfb99,	// (0x0005facc) cell_hwr_side_pane_g

0x7709,	// (0x0005763c) cell_hwr_side_pane_t1

0x16f1,	// (0x00051624) cell_hwr_side_pane_t1_copy1

0x16ff,	// (0x00051632) cell_hwr_candidate_pane_g1

0x172e,	// (0x00051661) cell_hwr_candidate_pane_t1

0x713e,	// (0x00057071) cell_vkb_candidate_pane_g2

0x774d,	// (0x00057680) cell_vkb_candidate_pane_t1

0x1484,	// (0x000513b7) bg_popup_fep_shadow_pane_ParamLimits

0x1484,	// (0x000513b7) bg_popup_fep_shadow_pane

0x153b,	// (0x0005146e) bg_fep_hwr_top_pane_g4

0x71d2,	// (0x00057105) bg_hwr_side_pane_g1_ParamLimits

0x71d2,	// (0x00057105) bg_hwr_side_pane_g1

0xbbb2,	// (0x0005bae5) cell_hwr_side_pane_ParamLimits

0xbbb2,	// (0x0005bae5) cell_hwr_side_pane

0x15eb,	// (0x0005151e) fep_hwr_write_pane_g1_ParamLimits

0x15eb,	// (0x0005151e) fep_hwr_write_pane_g1

0x15f8,	// (0x0005152b) fep_hwr_write_pane_g2_ParamLimits

0x15f8,	// (0x0005152b) fep_hwr_write_pane_g2

0x1605,	// (0x00051538) fep_hwr_write_pane_g3_ParamLimits

0x1605,	// (0x00051538) fep_hwr_write_pane_g3

0xbbd2,	// (0x0005bb05) fep_hwr_write_pane_g4_ParamLimits

0xbbd2,	// (0x0005bb05) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0005fa78) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0005fa78) fep_hwr_write_pane_g

0x153b,	// (0x0005146e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x153b,	// (0x0005146e) bg_fep_hwr_candidate_pane_g2

0x1628,	// (0x0005155b) cell_hwr_candidate_pane_ParamLimits

0x1628,	// (0x0005155b) cell_hwr_candidate_pane

0x167a,	// (0x000515ad) fep_hwr_candidate_pane_g1_ParamLimits

0x7232,	// (0x00057165) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7232,	// (0x00057165) bg_popup_fep_shadow_pane_cp2

0x73d6,	// (0x00057309) fep_vkb_top_pane_g4_ParamLimits

0x73d6,	// (0x00057309) fep_vkb_top_pane_g4

0x741c,	// (0x0005734f) fep_vkb_side_pane_g2_ParamLimits

0x741c,	// (0x0005734f) fep_vkb_side_pane_g2

0xb540,	// (0x0005b473) list_setting_pane_t4_ParamLimits

0xb540,	// (0x0005b473) list_setting_pane_t4

0xb5dc,	// (0x0005b50f) list_setting_number_pane_t5_ParamLimits

0xb5dc,	// (0x0005b50f) list_setting_number_pane_t5

0x3678,	// (0x000535ab) list_double_heading_pane_cp2_ParamLimits

0x3678,	// (0x000535ab) list_double_heading_pane_cp2

0x2ff0,	// (0x00052f23) list_double_heading_pane_g1_cp2_ParamLimits

0x2ff0,	// (0x00052f23) list_double_heading_pane_g1_cp2

0x2ffc,	// (0x00052f2f) list_double_heading_pane_g2_cp2_ParamLimits

0x2ffc,	// (0x00052f2f) list_double_heading_pane_g2_cp2

0x775b,	// (0x0005768e) list_double_heading_pane_t1_cp2_ParamLimits

0x775b,	// (0x0005768e) list_double_heading_pane_t1_cp2

0x7771,	// (0x000576a4) list_double_heading_pane_t2_cp2_ParamLimits

0x7771,	// (0x000576a4) list_double_heading_pane_t2_cp2

0x2149,	// (0x0005207c) aid_value_unit2

0xf48b,	// (0x0005f3be) popup_preview_fixed_window

0x24df,	// (0x00052412) bg_popup_preview_window_pane_cp02

0x7783,	// (0x000576b6) list_preview_fixed_pane

0x77c9,	// (0x000576fc) list_empty_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_empty_pane_fp

0x77c9,	// (0x000576fc) list_single_cale_day_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_cale_day_pane_fp

0x77c9,	// (0x000576fc) list_single_graphic_heading_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_graphic_heading_pane_fp

0x77c9,	// (0x000576fc) list_single_graphic_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_graphic_pane_fp

0x77c9,	// (0x000576fc) list_single_heading_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_heading_pane_fp

0x77c9,	// (0x000576fc) list_single_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_pane_fp

0x77e2,	// (0x00057715) list_single_pane_fp_g1_ParamLimits

0x77e2,	// (0x00057715) list_single_pane_fp_g1

0x285e,	// (0x00052791) list_single_pane_fp_g2_ParamLimits

0x285e,	// (0x00052791) list_single_pane_fp_g2

0x296f,	// (0x000528a2) list_single_pane_fp_g3_ParamLimits

0x296f,	// (0x000528a2) list_single_pane_fp_g3

0x77ee,	// (0x00057721) list_single_pane_fp_g4_ParamLimits

0x77ee,	// (0x00057721) list_single_pane_fp_g4

0x0003,

0xfbac,	// (0x0005fadf) list_single_pane_fp_g_ParamLimits

0xfbac,	// (0x0005fadf) list_single_pane_fp_g

0x2983,	// (0x000528b6) list_single_pane_fp_t1_ParamLimits

0x2983,	// (0x000528b6) list_single_pane_fp_t1

0x299a,	// (0x000528cd) list_single_graphic_pane_fp_g1_ParamLimits

0x299a,	// (0x000528cd) list_single_graphic_pane_fp_g1

0x77e2,	// (0x00057715) list_single_graphic_pane_fp_g2_ParamLimits

0x77e2,	// (0x00057715) list_single_graphic_pane_fp_g2

0x285e,	// (0x00052791) list_single_graphic_pane_fp_g3_ParamLimits

0x285e,	// (0x00052791) list_single_graphic_pane_fp_g3

0x296f,	// (0x000528a2) list_single_graphic_pane_fp_g4_ParamLimits

0x296f,	// (0x000528a2) list_single_graphic_pane_fp_g4

0x77ee,	// (0x00057721) list_single_graphic_pane_fp_g5_ParamLimits

0x77ee,	// (0x00057721) list_single_graphic_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fae8) list_single_graphic_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fae8) list_single_graphic_pane_fp_g

0x29a6,	// (0x000528d9) list_single_graphic_pane_fp_t1_ParamLimits

0x29a6,	// (0x000528d9) list_single_graphic_pane_fp_t1

0x299a,	// (0x000528cd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x299a,	// (0x000528cd) list_single_graphic_heading_pane_fp_g1

0x77e2,	// (0x00057715) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x77e2,	// (0x00057715) list_single_graphic_heading_pane_fp_g2

0x285e,	// (0x00052791) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x285e,	// (0x00052791) list_single_graphic_heading_pane_fp_g3

0x296f,	// (0x000528a2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x296f,	// (0x000528a2) list_single_graphic_heading_pane_fp_g4

0x77ee,	// (0x00057721) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x77ee,	// (0x00057721) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fae8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fae8) list_single_graphic_heading_pane_fp_g

0x29bc,	// (0x000528ef) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x29bc,	// (0x000528ef) list_single_graphic_heading_pane_fp_t1

0x29d2,	// (0x00052905) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x29d2,	// (0x00052905) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbc0,	// (0x0005faf3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbc0,	// (0x0005faf3) list_single_graphic_heading_pane_fp_t

0x29e4,	// (0x00052917) list_single_cale_day_pane_fp_g1_ParamLimits

0x29e4,	// (0x00052917) list_single_cale_day_pane_fp_g1

0x77fa,	// (0x0005772d) list_single_cale_day_pane_fp_g2_ParamLimits

0x77fa,	// (0x0005772d) list_single_cale_day_pane_fp_g2

0x2a1c,	// (0x0005294f) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a1c,	// (0x0005294f) list_single_cale_day_pane_fp_g3

0x2a44,	// (0x00052977) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a44,	// (0x00052977) list_single_cale_day_pane_fp_g4

0x2a68,	// (0x0005299b) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a68,	// (0x0005299b) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc5,	// (0x0005faf8) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc5,	// (0x0005faf8) list_single_cale_day_pane_fp_g

0x2a8c,	// (0x000529bf) list_single_cale_day_pane_fp_t1_ParamLimits

0x2a8c,	// (0x000529bf) list_single_cale_day_pane_fp_t1

0x2ab2,	// (0x000529e5) list_single_cale_day_pane_fp_t2_ParamLimits

0x2ab2,	// (0x000529e5) list_single_cale_day_pane_fp_t2

0x2acb,	// (0x000529fe) list_single_cale_day_pane_fp_t3_ParamLimits

0x2acb,	// (0x000529fe) list_single_cale_day_pane_fp_t3

0x0002,

0xfbd0,	// (0x0005fb03) list_single_cale_day_pane_fp_t_ParamLimits

0xfbd0,	// (0x0005fb03) list_single_cale_day_pane_fp_t

0x77e2,	// (0x00057715) list_empty_pane_fp_g1_ParamLimits

0x77e2,	// (0x00057715) list_empty_pane_fp_g1

0x2ae4,	// (0x00052a17) list_empty_pane_fp_t1

0x2af2,	// (0x00052a25) list_empty_pane_fp_t2

0x0001,

0xfbd7,	// (0x0005fb0a) list_empty_pane_fp_t

0x77e2,	// (0x00057715) list_single_heading_pane_fp_g1_ParamLimits

0x77e2,	// (0x00057715) list_single_heading_pane_fp_g1

0x285e,	// (0x00052791) list_single_heading_pane_fp_g2_ParamLimits

0x285e,	// (0x00052791) list_single_heading_pane_fp_g2

0x296f,	// (0x000528a2) list_single_heading_pane_fp_g3_ParamLimits

0x296f,	// (0x000528a2) list_single_heading_pane_fp_g3

0x0002,

0xfbdc,	// (0x0005fb0f) list_single_heading_pane_fp_g_ParamLimits

0xfbdc,	// (0x0005fb0f) list_single_heading_pane_fp_g

0x2b00,	// (0x00052a33) list_single_heading_pane_fp_t1_ParamLimits

0x2b00,	// (0x00052a33) list_single_heading_pane_fp_t1

0x2b12,	// (0x00052a45) list_single_heading_pane_fp_t2_ParamLimits

0x2b12,	// (0x00052a45) list_single_heading_pane_fp_t2

0x0001,

0xfbe3,	// (0x0005fb16) list_single_heading_pane_fp_t_ParamLimits

0xfbe3,	// (0x0005fb16) list_single_heading_pane_fp_t

0x31eb,	// (0x0005311e) aid_size_cell_fast

0x2451,	// (0x00052384) soft_indicator_pane_cp1_t1

0x3228,	// (0x0005315b) cell_app_pane_cp2_ParamLimits

0x3228,	// (0x0005315b) cell_app_pane_cp2

0x14a6,	// (0x000513d9) fep_hwr_candidate_drop_down_list_pane

0x1694,	// (0x000515c7) fep_hwr_candidate_pane_g3_ParamLimits

0x1694,	// (0x000515c7) fep_hwr_candidate_pane_g3

0xe49c,	// (0x0005e3cf) fep_hwr_candidate_pane_g4_ParamLimits

0xe49c,	// (0x0005e3cf) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0005fa85) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0005fa85) fep_hwr_candidate_pane_g

0x72c2,	// (0x000571f5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x72c2,	// (0x000571f5) fep_vkb_candidate_drop_down_list_pane

0x76f8,	// (0x0005762b) fep_vkb_candidate_pane_g3

0x7700,	// (0x00057633) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0005fab2) fep_vkb_candidate_pane_g

0x16ff,	// (0x00051632) cell_hwr_candidate_pane_g1_ParamLimits

0x170d,	// (0x00051640) cell_hwr_candidate_pane_g3_ParamLimits

0x170d,	// (0x00051640) cell_hwr_candidate_pane_g3

0x8a74,	// (0x000589a7) cell_hwr_candidate_pane_g4_ParamLimits

0x8a74,	// (0x000589a7) cell_hwr_candidate_pane_g4

0x0002,

0xfb9e,	// (0x0005fad1) cell_hwr_candidate_pane_g_ParamLimits

0xfb9e,	// (0x0005fad1) cell_hwr_candidate_pane_g

0x7717,	// (0x0005764a) cell_vkb_candidate_pane_g3_ParamLimits

0x7717,	// (0x0005764a) cell_vkb_candidate_pane_g3

0x7732,	// (0x00057665) cell_vkb_candidate_pane_g4_ParamLimits

0x7732,	// (0x00057665) cell_vkb_candidate_pane_g4

0x7806,	// (0x00057739) cell_app_pane_cp2_g1_ParamLimits

0x7806,	// (0x00057739) cell_app_pane_cp2_g1

0x7824,	// (0x00057757) cell_app_pane_cp2_g2_ParamLimits

0x7824,	// (0x00057757) cell_app_pane_cp2_g2

0x0001,

0xfbe8,	// (0x0005fb1b) cell_app_pane_cp2_g_ParamLimits

0xfbe8,	// (0x0005fb1b) cell_app_pane_cp2_g

0x7830,	// (0x00057763) cell_app_pane_cp2_t1_ParamLimits

0x7830,	// (0x00057763) cell_app_pane_cp2_t1

0x2fd6,	// (0x00052f09) grid_highlight_pane_cp1_ParamLimits

0x2fd6,	// (0x00052f09) grid_highlight_pane_cp1

0x174c,	// (0x0005167f) cell_hwr_candidate_pane_cp1_ParamLimits

0x174c,	// (0x0005167f) cell_hwr_candidate_pane_cp1

0x16ff,	// (0x00051632) fep_hwr_candidate_drop_down_list_pane_g1

0x1770,	// (0x000516a3) fep_hwr_candidate_drop_down_list_pane_g2

0x177d,	// (0x000516b0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbed,	// (0x0005fb20) fep_hwr_candidate_drop_down_list_pane_g

0x178a,	// (0x000516bd) fep_hwr_candidate_drop_down_list_scroll_pane

0x1793,	// (0x000516c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1793,	// (0x000516c6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17a0,	// (0x000516d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17a0,	// (0x000516d3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17ad,	// (0x000516e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17ad,	// (0x000516e0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17ba,	// (0x000516ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17ba,	// (0x000516ed) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x17d5,	// (0x00051708) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x17d5,	// (0x00051708) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x17f0,	// (0x00051723) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x17f0,	// (0x00051723) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x180b,	// (0x0005173e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x180b,	// (0x0005173e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1826,	// (0x00051759) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1826,	// (0x00051759) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x0005fb27) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x0005fb27) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7842,	// (0x00057775) cell_vkb_candidate_pane_cp1_ParamLimits

0x7842,	// (0x00057775) cell_vkb_candidate_pane_cp1

0x73d6,	// (0x00057309) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x73d6,	// (0x00057309) fep_vkb_candidate_drop_down_list_pane_g1

0x7868,	// (0x0005779b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7868,	// (0x0005779b) fep_vkb_candidate_drop_down_list_pane_g2

0x7875,	// (0x000577a8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7875,	// (0x000577a8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc05,	// (0x0005fb38) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc05,	// (0x0005fb38) fep_vkb_candidate_drop_down_list_pane_g

0x7882,	// (0x000577b5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7882,	// (0x000577b5) fep_vkb_candidate_drop_down_list_scroll_pane

0x788f,	// (0x000577c2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x788f,	// (0x000577c2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x789c,	// (0x000577cf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x789c,	// (0x000577cf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x78a8,	// (0x000577db) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x78a8,	// (0x000577db) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x78b4,	// (0x000577e7) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78b4,	// (0x000577e7) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x78d5,	// (0x00057808) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78d5,	// (0x00057808) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x78f6,	// (0x00057829) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78f6,	// (0x00057829) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7917,	// (0x0005784a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7917,	// (0x0005784a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7938,	// (0x0005786b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7938,	// (0x0005786b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc0c,	// (0x0005fb3f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc0c,	// (0x0005fb3f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xafd8,	// (0x0005af0b) title_pane_g1_ParamLimits

0xafe9,	// (0x0005af1c) title_pane_g2_ParamLimits

0xf592,	// (0x0005f4c5) title_pane_g_ParamLimits

0x3636,	// (0x00053569) aid_call2_pane

0x363e,	// (0x00053571) aid_call_pane

0x3646,	// (0x00053579) popup_clock_analogue_window_g1

0x3646,	// (0x00053579) popup_clock_analogue_window_g2

0x0863,	// (0x00050796) popup_clock_analogue_window_g3

0x086c,	// (0x0005079f) popup_clock_analogue_window_g4

0x216b,	// (0x0005209e) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0005f674) popup_clock_analogue_window_g

0x0874,	// (0x000507a7) popup_clock_analogue_window_t1

0x0882,	// (0x000507b5) clock_digital_number_pane_ParamLimits

0x0882,	// (0x000507b5) clock_digital_number_pane

0x088e,	// (0x000507c1) clock_digital_number_pane_cp02_ParamLimits

0x088e,	// (0x000507c1) clock_digital_number_pane_cp02

0x089a,	// (0x000507cd) clock_digital_number_pane_cp03_ParamLimits

0x089a,	// (0x000507cd) clock_digital_number_pane_cp03

0x08a6,	// (0x000507d9) clock_digital_number_pane_cp04_ParamLimits

0x08a6,	// (0x000507d9) clock_digital_number_pane_cp04

0x08b2,	// (0x000507e5) clock_digital_separator_pane_ParamLimits

0x08b2,	// (0x000507e5) clock_digital_separator_pane

0x08be,	// (0x000507f1) popup_clock_digital_window_t1_ParamLimits

0x08be,	// (0x000507f1) popup_clock_digital_window_t1

0x216b,	// (0x0005209e) clock_digital_number_pane_g1

0x216b,	// (0x0005209e) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0005f67f) clock_digital_number_pane_g

0x216b,	// (0x0005209e) clock_digital_separator_pane_g1

0x216b,	// (0x0005209e) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0005f67f) clock_digital_separator_pane_g

0xcf0f,	// (0x0005ce42) aid_fill_nsta_ParamLimits

0xd040,	// (0x0005cf73) indicator_nsta_pane_ParamLimits

0x48d1,	// (0x00054804) popup_clock_analogue_window

0x48d1,	// (0x00054804) popup_clock_digital_window

0x31ac,	// (0x000530df) grid_indicator_nsta_pane_ParamLimits

0x6b95,	// (0x00056ac8) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0005fa12) clock_nsta_pane_t

0x0827,	// (0x0005075a) aid_size_max_handle

0xb779,	// (0x0005b6ac) aid_size_min_handle

0x3c40,	// (0x00053b73) editor_scroll_pane

0x7953,	// (0x00057886) ex_editor_pane

0x3158,	// (0x0005308b) scroll_pane_cp13

0x2f75,	// (0x00052ea8) scroll_pane_cp14

0x3670,	// (0x000535a3) scroll_pane_cp36

0xc53b,	// (0x0005c46e) list_single_graphic_hl_pane_cp2_ParamLimits

0xc53b,	// (0x0005c46e) list_single_graphic_hl_pane_cp2

0xd795,	// (0x0005d6c8) list_single_graphic_hl_pane_ParamLimits

0xd795,	// (0x0005d6c8) list_single_graphic_hl_pane

0x2b28,	// (0x00052a5b) aid_size_min_hl_cp1

0x795b,	// (0x0005788e) list_highlight_pane_cp34_ParamLimits

0x795b,	// (0x0005788e) list_highlight_pane_cp34

0x796c,	// (0x0005789f) list_single_graphic_hl_pane_g1_ParamLimits

0x796c,	// (0x0005789f) list_single_graphic_hl_pane_g1

0xbbe7,	// (0x0005bb1a) list_single_graphic_hl_pane_g2_ParamLimits

0xbbe7,	// (0x0005bb1a) list_single_graphic_hl_pane_g2

0xbbe7,	// (0x0005bb1a) list_single_graphic_hl_pane_g3_ParamLimits

0xbbe7,	// (0x0005bb1a) list_single_graphic_hl_pane_g3

0x3886,	// (0x000537b9) list_single_graphic_hl_pane_g4_ParamLimits

0x3886,	// (0x000537b9) list_single_graphic_hl_pane_g4

0x79a9,	// (0x000578dc) list_single_graphic_hl_pane_g5_ParamLimits

0x79a9,	// (0x000578dc) list_single_graphic_hl_pane_g5

0x0004,

0xfc1d,	// (0x0005fb50) list_single_graphic_hl_pane_g_ParamLimits

0xfc1d,	// (0x0005fb50) list_single_graphic_hl_pane_g

0xf083,	// (0x0005efb6) list_single_graphic_hl_pane_t1_ParamLimits

0xf083,	// (0x0005efb6) list_single_graphic_hl_pane_t1

0x7979,	// (0x000578ac) aid_size_min_hl_cp2

0x7982,	// (0x000578b5) list_highlight_pane_cp34_cp2_ParamLimits

0x7982,	// (0x000578b5) list_highlight_pane_cp34_cp2

0x796c,	// (0x0005789f) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x796c,	// (0x0005789f) list_single_graphic_hl_pane_g1_cp2

0x798f,	// (0x000578c2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x798f,	// (0x000578c2) list_single_graphic_hl_pane_g2_cp2

0x799b,	// (0x000578ce) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x799b,	// (0x000578ce) list_single_graphic_hl_pane_g3_cp2

0x3886,	// (0x000537b9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3886,	// (0x000537b9) list_single_graphic_hl_pane_g4_cp2

0x79a9,	// (0x000578dc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x79a9,	// (0x000578dc) list_single_graphic_hl_pane_g5_cp2

0xb819,	// (0x0005b74c) control_pane_g4_ParamLimits

0xb819,	// (0x0005b74c) control_pane_g4

0x3fbe,	// (0x00053ef1) bg_popup_sub_pane_cp10_ParamLimits

0x7148,	// (0x0005707b) list_choice_list_pane_ParamLimits

0x7157,	// (0x0005708a) scroll_pane_cp23

0x24df,	// (0x00052412) bg_popup_preview_window_pane_cp02_ParamLimits

0x7783,	// (0x000576b6) list_preview_fixed_pane_ParamLimits

0x7799,	// (0x000576cc) list_preview_fixed_pane_cp_ParamLimits

0x7799,	// (0x000576cc) list_preview_fixed_pane_cp

0x77a5,	// (0x000576d8) popup_preview_fixed_window_g1_ParamLimits

0x77a5,	// (0x000576d8) popup_preview_fixed_window_g1

0x77b1,	// (0x000576e4) popup_preview_fixed_window_g2_ParamLimits

0x77b1,	// (0x000576e4) popup_preview_fixed_window_g2

0x0002,

0xfba5,	// (0x0005fad8) popup_preview_fixed_window_g_ParamLimits

0xfba5,	// (0x0005fad8) popup_preview_fixed_window_g

0x0799,	// (0x000506cc) aid_navi_side_left_pane_ParamLimits

0x07ae,	// (0x000506e1) aid_navi_side_right_pane_ParamLimits

0x07c6,	// (0x000506f9) navi_icon_pane_stacon_ParamLimits

0x07da,	// (0x0005070d) navi_navi_pane_stacon_ParamLimits

0x07c6,	// (0x000506f9) navi_text_pane_stacon_ParamLimits

0x2161,	// (0x00052094) main_text_info_pane

0x79d3,	// (0x00057906) listscroll_text_info_pane

0x79db,	// (0x0005790e) list_text_info_pane_ParamLimits

0x79db,	// (0x0005790e) list_text_info_pane

0x79ea,	// (0x0005791d) scroll_pane_cp24_ParamLimits

0x79ea,	// (0x0005791d) scroll_pane_cp24

0xdc52,	// (0x0005db85) list_text_info_pane_t1_ParamLimits

0xdc52,	// (0x0005db85) list_text_info_pane_t1

0xc76e,	// (0x0005c6a1) popup_fast_swap2_window_ParamLimits

0xc76e,	// (0x0005c6a1) popup_fast_swap2_window

0x7a2d,	// (0x00057960) aid_size_cell_fast2

0x2161,	// (0x00052094) bg_popup_window_pane_cp17

0x4f84,	// (0x00054eb7) heading_pane_cp2

0x273f,	// (0x00052672) listscroll_fast2_pane

0x7a37,	// (0x0005796a) grid_fast2_pane

0x7a41,	// (0x00057974) listscroll_fast2_pane_g1

0x7a4b,	// (0x0005797e) listscroll_fast2_pane_g2

0x0001,

0xfc28,	// (0x0005fb5b) listscroll_fast2_pane_g

0x3158,	// (0x0005308b) scroll_pane_cp26

0x7a55,	// (0x00057988) cell_fast2_pane_ParamLimits

0x7a55,	// (0x00057988) cell_fast2_pane

0x7a6c,	// (0x0005799f) cell_fast2_pane_g1

0x7a75,	// (0x000579a8) cell_fast2_pane_g2

0x7a7e,	// (0x000579b1) cell_fast2_pane_g3

0x0002,

0xfc2d,	// (0x0005fb60) cell_fast2_pane_g

0x2d32,	// (0x00052c65) grid_highlight_pane_cp9

0x2d47,	// (0x00052c7a) main_eswt_pane_ParamLimits

0x2d47,	// (0x00052c7a) main_eswt_pane

0x79ff,	// (0x00057932) list_single_text_info_pane

0x7a86,	// (0x000579b9) eswt_ctrl_button_pane

0x7a86,	// (0x000579b9) eswt_ctrl_canvas_pane

0x7a8e,	// (0x000579c1) eswt_ctrl_combo_pane

0x7a86,	// (0x000579b9) eswt_ctrl_default_pane

0x7a86,	// (0x000579b9) eswt_ctrl_label_pane

0x7a96,	// (0x000579c9) eswt_ctrl_wait_pane

0x7a9e,	// (0x000579d1) eswt_shell_pane

0x2161,	// (0x00052094) listscroll_eswt_app_pane

0x7abe,	// (0x000579f1) popup_eswt_tasktip_window_ParamLimits

0x7abe,	// (0x000579f1) popup_eswt_tasktip_window

0x4bec,	// (0x00054b1f) bg_popup_window_pane_cp18

0x7acf,	// (0x00057a02) eswt_control_pane_g1_ParamLimits

0x7acf,	// (0x00057a02) eswt_control_pane_g1

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_ParamLimits

0x7adc,	// (0x00057a0f) eswt_control_pane_g2

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_ParamLimits

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3

0x7af6,	// (0x00057a29) eswt_control_pane_g4_ParamLimits

0x7af6,	// (0x00057a29) eswt_control_pane_g4

0x0003,

0xfc34,	// (0x0005fb67) eswt_control_pane_g_ParamLimits

0xfc34,	// (0x0005fb67) eswt_control_pane_g

0x2fd6,	// (0x00052f09) bg_button_pane_ParamLimits

0x2fd6,	// (0x00052f09) bg_button_pane

0x2d47,	// (0x00052c7a) common_borders_pane_copy2_ParamLimits

0x2d47,	// (0x00052c7a) common_borders_pane_copy2

0x7b03,	// (0x00057a36) control_button_pane_g1_ParamLimits

0x7b03,	// (0x00057a36) control_button_pane_g1

0x7b0f,	// (0x00057a42) control_button_pane_g2_ParamLimits

0x7b0f,	// (0x00057a42) control_button_pane_g2

0x7b1b,	// (0x00057a4e) control_button_pane_g3_ParamLimits

0x7b1b,	// (0x00057a4e) control_button_pane_g3

0x0002,

0xfc3d,	// (0x0005fb70) control_button_pane_g_ParamLimits

0xfc3d,	// (0x0005fb70) control_button_pane_g

0x7b2f,	// (0x00057a62) control_button_pane_t1

0x7b3d,	// (0x00057a70) control_button_pane_t2

0x0001,

0xfc44,	// (0x0005fb77) control_button_pane_t

0x4afa,	// (0x00054a2d) bg_button_pane_g1

0x4b0a,	// (0x00054a3d) bg_button_pane_g2

0x4b02,	// (0x00054a35) bg_button_pane_g3

0x4b1a,	// (0x00054a4d) bg_button_pane_g4

0x4b12,	// (0x00054a45) bg_button_pane_g5

0x4b22,	// (0x00054a55) bg_button_pane_g6

0x4b2a,	// (0x00054a5d) bg_button_pane_g7

0x4b3a,	// (0x00054a6d) bg_button_pane_g8

0x4b32,	// (0x00054a65) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0005f7d2) bg_button_pane_g

0x7103,	// (0x00057036) common_borders_pane_ParamLimits

0x7103,	// (0x00057036) common_borders_pane

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy1_ParamLimits

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy1

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy1_ParamLimits

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy1

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy1_ParamLimits

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy1

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy1_ParamLimits

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy1

0x713e,	// (0x00057071) bg_eswt_ctrl_canvas_pane_g1

0x7103,	// (0x00057036) common_borders_pane_cp2_ParamLimits

0x7103,	// (0x00057036) common_borders_pane_cp2

0x7103,	// (0x00057036) common_borders_pane_cp3_ParamLimits

0x7103,	// (0x00057036) common_borders_pane_cp3

0x7b4b,	// (0x00057a7e) separator_horizontal_pane

0x7b53,	// (0x00057a86) separator_vertical_pane

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy2_ParamLimits

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy2

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy2_ParamLimits

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy2

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy2_ParamLimits

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy2

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy2_ParamLimits

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy2

0x2161,	// (0x00052094) common_borders_pane_cp4

0x7b5c,	// (0x00057a8f) separator_horizontal_pane_g1

0x7b65,	// (0x00057a98) separator_horizontal_pane_g2

0x7b6e,	// (0x00057aa1) separator_horizontal_pane_g3

0x0002,

0xfc49,	// (0x0005fb7c) separator_horizontal_pane_g

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy3_ParamLimits

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy3

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy3_ParamLimits

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy3

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy3_ParamLimits

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy3

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy3_ParamLimits

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy3

0x2161,	// (0x00052094) common_borders_pane_cp5

0x7b77,	// (0x00057aaa) separator_vertical_pane_g1

0x7b80,	// (0x00057ab3) separator_vertical_pane_g2

0x7b89,	// (0x00057abc) separator_vertical_pane_g3

0x0002,

0xfc50,	// (0x0005fb83) separator_vertical_pane_g

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy4_ParamLimits

0x7acf,	// (0x00057a02) eswt_control_pane_g1_copy4

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy4_ParamLimits

0x7adc,	// (0x00057a0f) eswt_control_pane_g2_copy4

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy4_ParamLimits

0x7ae9,	// (0x00057a1c) eswt_control_pane_g3_copy4

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy4_ParamLimits

0x7af6,	// (0x00057a29) eswt_control_pane_g4_copy4

0xdc74,	// (0x0005dba7) eswt_ctrl_combo_button_pane

0xdc7c,	// (0x0005dbaf) eswt_ctrl_input_pane

0xdc84,	// (0x0005dbb7) popup_choice_list_window_cp70

0xdc8c,	// (0x0005dbbf) eswt_ctrl_input_pane_t1

0x2161,	// (0x00052094) input_focus_pane_cp70

0x7103,	// (0x00057036) bg_button_pane_cp70_ParamLimits

0x7103,	// (0x00057036) bg_button_pane_cp70

0xdc9a,	// (0x0005dbcd) eswt_ctrl_combo_button_pane_g1

0x7bc0,	// (0x00057af3) wait_bar_pane_cp70

0x4bec,	// (0x00054b1f) bg_popup_window_pane_cp70_ParamLimits

0x4bec,	// (0x00054b1f) bg_popup_window_pane_cp70

0x7bc8,	// (0x00057afb) popup_eswt_tasktip_window_t1

0x7bde,	// (0x00057b11) wait_bar_pane_cp71_ParamLimits

0x7bde,	// (0x00057b11) wait_bar_pane_cp71

0x7bea,	// (0x00057b1d) grid_eswt_app_pane

0x347a,	// (0x000533ad) scroll_pane_cp70

0xdca2,	// (0x0005dbd5) cell_eswt_app_pane_ParamLimits

0xdca2,	// (0x0005dbd5) cell_eswt_app_pane

0xdcd4,	// (0x0005dc07) cell_eswt_app_pane_g1_ParamLimits

0xdcd4,	// (0x0005dc07) cell_eswt_app_pane_g1

0xdd03,	// (0x0005dc36) cell_eswt_app_pane_g2_ParamLimits

0xdd03,	// (0x0005dc36) cell_eswt_app_pane_g2

0x0001,

0xfc57,	// (0x0005fb8a) cell_eswt_app_pane_g_ParamLimits

0xfc57,	// (0x0005fb8a) cell_eswt_app_pane_g

0xdd2c,	// (0x0005dc5f) cell_eswt_app_pane_t1_ParamLimits

0xdd2c,	// (0x0005dc5f) cell_eswt_app_pane_t1

0x7caf,	// (0x00057be2) grid_highlight_pane_cp70_ParamLimits

0x7caf,	// (0x00057be2) grid_highlight_pane_cp70

0x604c,	// (0x00055f7f) set_content_pane_g1

0x3ef0,	// (0x00053e23) status_small_volume_pane

0x1841,	// (0x00051774) status_small_volume_pane_g1

0x1849,	// (0x0005177c) volume_small2_pane

0x1852,	// (0x00051785) volume_small2_pane_g1

0x185b,	// (0x0005178e) volume_small2_pane_g2

0x1864,	// (0x00051797) volume_small2_pane_g3

0x186d,	// (0x000517a0) volume_small2_pane_g4

0x1876,	// (0x000517a9) volume_small2_pane_g5

0x187f,	// (0x000517b2) volume_small2_pane_g6

0x1888,	// (0x000517bb) volume_small2_pane_g7

0x1891,	// (0x000517c4) volume_small2_pane_g8

0x189a,	// (0x000517cd) volume_small2_pane_g9

0x18a3,	// (0x000517d6) volume_small2_pane_g10

0x0009,

0xfc5c,	// (0x0005fb8f) volume_small2_pane_g

0x752a,	// (0x0005745d) fep_vkb_top_text_pane_g1_ParamLimits

0xdbfa,	// (0x0005db2d) fep_vkb_top_text_pane_t1_ParamLimits

0x77bd,	// (0x000576f0) popup_preview_fixed_window_g3_ParamLimits

0x77bd,	// (0x000576f0) popup_preview_fixed_window_g3

0xcea2,	// (0x0005cdd5) popup_toolbar_trans_pane

0xd5e5,	// (0x0005d518) aid_height_set_list_ParamLimits

0x5f02,	// (0x00055e35) aid_size_parent_ParamLimits

0x3fbe,	// (0x00053ef1) list_highlight_pane_cp2_ParamLimits

0x604c,	// (0x00055f7f) set_content_pane_g1_ParamLimits

0xccb2,	// (0x0005cbe5) list_single_image_pane_ParamLimits

0xccb2,	// (0x0005cbe5) list_single_image_pane

0xdd5e,	// (0x0005dc91) aid_size_cell_image_ParamLimits

0xdd5e,	// (0x0005dc91) aid_size_cell_image

0xdd6b,	// (0x0005dc9e) grid_single_image_pane_ParamLimits

0xdd6b,	// (0x0005dc9e) grid_single_image_pane

0x2ff0,	// (0x00052f23) list_single_image_pane_g1_ParamLimits

0x2ff0,	// (0x00052f23) list_single_image_pane_g1

0x2ffc,	// (0x00052f2f) list_single_image_pane_g2_ParamLimits

0x2ffc,	// (0x00052f2f) list_single_image_pane_g2

0x0001,

0xfc71,	// (0x0005fba4) list_single_image_pane_g_ParamLimits

0xfc71,	// (0x0005fba4) list_single_image_pane_g

0x7cd6,	// (0x00057c09) list_single_image_pane_t1_ParamLimits

0x7cd6,	// (0x00057c09) list_single_image_pane_t1

0xdd79,	// (0x0005dcac) cell_image_list_pane_ParamLimits

0xdd79,	// (0x0005dcac) cell_image_list_pane

0xdd93,	// (0x0005dcc6) cell_image_list_pane_g1

0xdd9c,	// (0x0005dccf) cell_image_list_pane_g2

0x0001,

0xfc76,	// (0x0005fba9) cell_image_list_pane_g

0x7d14,	// (0x00057c47) aid_size_cell_tb_trans_pane

0x2fd6,	// (0x00052f09) bg_tb_trans_pane

0x7d26,	// (0x00057c59) grid_tb_trans_pane

0x4afa,	// (0x00054a2d) bg_tb_trans_pane_g1

0x4b0a,	// (0x00054a3d) bg_tb_trans_pane_g2

0x4b02,	// (0x00054a35) bg_tb_trans_pane_g3

0x4b1a,	// (0x00054a4d) bg_tb_trans_pane_g4

0x4b12,	// (0x00054a45) bg_tb_trans_pane_g5

0x4b3a,	// (0x00054a6d) bg_tb_trans_pane_g6

0x4b32,	// (0x00054a65) bg_tb_trans_pane_g7

0x4b22,	// (0x00054a55) bg_tb_trans_pane_g8

0x4b2a,	// (0x00054a5d) bg_tb_trans_pane_g9

0x0008,

0xfc7b,	// (0x0005fbae) bg_tb_trans_pane_g

0x7d3a,	// (0x00057c6d) cell_toolbar_trans_pane_ParamLimits

0x7d3a,	// (0x00057c6d) cell_toolbar_trans_pane

0x713e,	// (0x00057071) cell_toolbar_trans_pane_g1

0xd9ca,	// (0x0005d8fd) list_form2_midp_pane_t1

0xd9d8,	// (0x0005d90b) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0005fa4b) list_form2_midp_pane_t

0x6d7b,	// (0x00056cae) scroll_pane_cp51_ParamLimits

0x6f42,	// (0x00056e75) form2_midp_wait_pane_g1

0x6f4b,	// (0x00056e7e) form2_midp_wait_pane_g2

0x6f54,	// (0x00056e87) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0005fa60) form2_midp_wait_pane_g

0x2255,	// (0x00052188) list_highlight_pane_cp21_ParamLimits

0x6f98,	// (0x00056ecb) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6fa7,	// (0x00056eda) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x60fa,	// (0x0005602d) list_single_2graphic_im_pane_ParamLimits

0x60fa,	// (0x0005602d) list_single_2graphic_im_pane

0xdda5,	// (0x0005dcd8) list_single_2graphic_im_pane_g1_ParamLimits

0xdda5,	// (0x0005dcd8) list_single_2graphic_im_pane_g1

0xddb6,	// (0x0005dce9) list_single_2graphic_im_pane_g2_ParamLimits

0xddb6,	// (0x0005dce9) list_single_2graphic_im_pane_g2

0xddc2,	// (0x0005dcf5) list_single_2graphic_im_pane_g3_ParamLimits

0xddc2,	// (0x0005dcf5) list_single_2graphic_im_pane_g3

0x0003,

0xfc8e,	// (0x0005fbc1) list_single_2graphic_im_pane_g_ParamLimits

0xfc8e,	// (0x0005fbc1) list_single_2graphic_im_pane_g

0xddd6,	// (0x0005dd09) list_single_2graphic_im_pane_t1_ParamLimits

0xddd6,	// (0x0005dd09) list_single_2graphic_im_pane_t1

0x77c9,	// (0x000576fc) list_single_graphic_2heading_pane_fp_ParamLimits

0x77c9,	// (0x000576fc) list_single_graphic_2heading_pane_fp

0x299a,	// (0x000528cd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x299a,	// (0x000528cd) list_single_graphic_2heading_pane_fp_g1

0x77e2,	// (0x00057715) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x77e2,	// (0x00057715) list_single_graphic_2heading_pane_fp_g2

0x285e,	// (0x00052791) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x285e,	// (0x00052791) list_single_graphic_2heading_pane_fp_g3

0x296f,	// (0x000528a2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x296f,	// (0x000528a2) list_single_graphic_2heading_pane_fp_g4

0x77ee,	// (0x00057721) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x77ee,	// (0x00057721) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fae8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fae8) list_single_graphic_2heading_pane_fp_g

0x2b67,	// (0x00052a9a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b67,	// (0x00052a9a) list_single_graphic_2heading_pane_fp_t1

0x29d2,	// (0x00052905) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x29d2,	// (0x00052905) list_single_graphic_2heading_pane_fp_t2

0x2b7d,	// (0x00052ab0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2b7d,	// (0x00052ab0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc97,	// (0x0005fbca) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc97,	// (0x0005fbca) list_single_graphic_2heading_pane_fp_t

0x71de,	// (0x00057111) fep_hwr_write_pane_g5_ParamLimits

0x71de,	// (0x00057111) fep_hwr_write_pane_g5

0x71ea,	// (0x0005711d) fep_hwr_write_pane_g6_ParamLimits

0x71ea,	// (0x0005711d) fep_hwr_write_pane_g6

0x7a9e,	// (0x000579d1) eswt_shell_pane_ParamLimits

0x4bec,	// (0x00054b1f) bg_popup_window_pane_cp18_ParamLimits

0x5e48,	// (0x00055d7b) heading_pane_cp70

0x7bc8,	// (0x00057afb) popup_eswt_tasktip_window_t1_ParamLimits

0xcf65,	// (0x0005ce98) aid_touch_tab_arrow_left

0xcf7b,	// (0x0005ceae) aid_touch_tab_arrow_right

0xb001,	// (0x0005af34) title_pane_g3_ParamLimits

0xb001,	// (0x0005af34) title_pane_g3

0x2f95,	// (0x00052ec8) set_value_pane_g1

0xcea2,	// (0x0005cdd5) popup_toolbar_trans_pane_ParamLimits

0x7d14,	// (0x00057c47) aid_size_cell_tb_trans_pane_ParamLimits

0x2fd6,	// (0x00052f09) bg_tb_trans_pane_ParamLimits

0x7d26,	// (0x00057c59) grid_tb_trans_pane_ParamLimits

0x24df,	// (0x00052412) cont_note_pane_ParamLimits

0x24df,	// (0x00052412) cont_note_pane

0x2d47,	// (0x00052c7a) cont_snote2_single_text_pane_ParamLimits

0x2d47,	// (0x00052c7a) cont_snote2_single_text_pane

0x2d47,	// (0x00052c7a) cont_snote2_single_graphic_pane_ParamLimits

0x2d47,	// (0x00052c7a) cont_snote2_single_graphic_pane

0x516f,	// (0x000550a2) cont_note_wait_pane_ParamLimits

0x516f,	// (0x000550a2) cont_note_wait_pane

0x516f,	// (0x000550a2) cont_note_image_pane_ParamLimits

0x516f,	// (0x000550a2) cont_note_image_pane

0x7dce,	// (0x00057d01) popup_note2_window_g1_ParamLimits

0x7dce,	// (0x00057d01) popup_note2_window_g1

0x7dff,	// (0x00057d32) popup_note2_window_t1_ParamLimits

0x7dff,	// (0x00057d32) popup_note2_window_t1

0x7e44,	// (0x00057d77) popup_note2_window_t2_ParamLimits

0x7e44,	// (0x00057d77) popup_note2_window_t2

0x7e89,	// (0x00057dbc) popup_note2_window_t3_ParamLimits

0x7e89,	// (0x00057dbc) popup_note2_window_t3

0x7ece,	// (0x00057e01) popup_note2_window_t4_ParamLimits

0x7ece,	// (0x00057e01) popup_note2_window_t4

0x2563,	// (0x00052496) popup_note2_window_t5_ParamLimits

0x2563,	// (0x00052496) popup_note2_window_t5

0x0004,

0xfca3,	// (0x0005fbd6) popup_note2_window_t_ParamLimits

0xfca3,	// (0x0005fbd6) popup_note2_window_t

0x7efd,	// (0x00057e30) popup_note2_image_window_g1_ParamLimits

0x7efd,	// (0x00057e30) popup_note2_image_window_g1

0x7f09,	// (0x00057e3c) popup_note2_image_window_g2_ParamLimits

0x7f09,	// (0x00057e3c) popup_note2_image_window_g2

0x0001,

0xfcae,	// (0x0005fbe1) popup_note2_image_window_g_ParamLimits

0xfcae,	// (0x0005fbe1) popup_note2_image_window_g

0x7f1b,	// (0x00057e4e) popup_note2_image_window_t1_ParamLimits

0x7f1b,	// (0x00057e4e) popup_note2_image_window_t1

0x7f33,	// (0x00057e66) popup_note2_image_window_t2_ParamLimits

0x7f33,	// (0x00057e66) popup_note2_image_window_t2

0x7f4b,	// (0x00057e7e) popup_note2_image_window_t3_ParamLimits

0x7f4b,	// (0x00057e7e) popup_note2_image_window_t3

0x0002,

0xfcb3,	// (0x0005fbe6) popup_note2_image_window_t_ParamLimits

0xfcb3,	// (0x0005fbe6) popup_note2_image_window_t

0x517d,	// (0x000550b0) popup_note2_wait_window_g1_ParamLimits

0x517d,	// (0x000550b0) popup_note2_wait_window_g1

0x7f67,	// (0x00057e9a) popup_note2_wait_window_g2_ParamLimits

0x7f67,	// (0x00057e9a) popup_note2_wait_window_g2

0x5195,	// (0x000550c8) popup_note2_wait_window_g3_ParamLimits

0x5195,	// (0x000550c8) popup_note2_wait_window_g3

0x0002,

0xfcba,	// (0x0005fbed) popup_note2_wait_window_g_ParamLimits

0xfcba,	// (0x0005fbed) popup_note2_wait_window_g

0x7f73,	// (0x00057ea6) popup_note2_wait_window_t1_ParamLimits

0x7f73,	// (0x00057ea6) popup_note2_wait_window_t1

0x7f91,	// (0x00057ec4) popup_note2_wait_window_t2_ParamLimits

0x7f91,	// (0x00057ec4) popup_note2_wait_window_t2

0x7faf,	// (0x00057ee2) popup_note2_wait_window_t3_ParamLimits

0x7faf,	// (0x00057ee2) popup_note2_wait_window_t3

0x7fc1,	// (0x00057ef4) popup_note2_wait_window_t4_ParamLimits

0x7fc1,	// (0x00057ef4) popup_note2_wait_window_t4

0x0003,

0xfcc1,	// (0x0005fbf4) popup_note2_wait_window_t_ParamLimits

0xfcc1,	// (0x0005fbf4) popup_note2_wait_window_t

0x7fd3,	// (0x00057f06) wait_bar2_pane_ParamLimits

0x7fd3,	// (0x00057f06) wait_bar2_pane

0x7feb,	// (0x00057f1e) popup_snote2_single_text_window_g1_ParamLimits

0x7feb,	// (0x00057f1e) popup_snote2_single_text_window_g1

0x8013,	// (0x00057f46) popup_snote2_single_text_window_t1_ParamLimits

0x8013,	// (0x00057f46) popup_snote2_single_text_window_t1

0x805f,	// (0x00057f92) popup_snote2_single_text_window_t2_ParamLimits

0x805f,	// (0x00057f92) popup_snote2_single_text_window_t2

0x80ab,	// (0x00057fde) popup_snote2_single_text_window_t3_ParamLimits

0x80ab,	// (0x00057fde) popup_snote2_single_text_window_t3

0x80ec,	// (0x0005801f) popup_snote2_single_text_window_t4_ParamLimits

0x80ec,	// (0x0005801f) popup_snote2_single_text_window_t4

0x8122,	// (0x00058055) popup_snote2_single_text_window_t5_ParamLimits

0x8122,	// (0x00058055) popup_snote2_single_text_window_t5

0x0004,

0xfcca,	// (0x0005fbfd) popup_snote2_single_text_window_t_ParamLimits

0xfcca,	// (0x0005fbfd) popup_snote2_single_text_window_t

0x814d,	// (0x00058080) popup_snote2_single_graphic_window_g1_ParamLimits

0x814d,	// (0x00058080) popup_snote2_single_graphic_window_g1

0x8175,	// (0x000580a8) popup_snote2_single_graphic_window_g2_ParamLimits

0x8175,	// (0x000580a8) popup_snote2_single_graphic_window_g2

0x0001,

0xfcd5,	// (0x0005fc08) popup_snote2_single_graphic_window_g_ParamLimits

0xfcd5,	// (0x0005fc08) popup_snote2_single_graphic_window_g

0x819d,	// (0x000580d0) popup_snote2_single_graphic_window_t1_ParamLimits

0x819d,	// (0x000580d0) popup_snote2_single_graphic_window_t1

0x81e9,	// (0x0005811c) popup_snote2_single_graphic_window_t2_ParamLimits

0x81e9,	// (0x0005811c) popup_snote2_single_graphic_window_t2

0x80ab,	// (0x00057fde) popup_snote2_single_graphic_window_t3_ParamLimits

0x80ab,	// (0x00057fde) popup_snote2_single_graphic_window_t3

0x80ec,	// (0x0005801f) popup_snote2_single_graphic_window_t4_ParamLimits

0x80ec,	// (0x0005801f) popup_snote2_single_graphic_window_t4

0x8122,	// (0x00058055) popup_snote2_single_graphic_window_t5_ParamLimits

0x8122,	// (0x00058055) popup_snote2_single_graphic_window_t5

0x0004,

0xfcda,	// (0x0005fc0d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcda,	// (0x0005fc0d) popup_snote2_single_graphic_window_t

0x6c25,	// (0x00056b58) clock_nsta_pane_cp2_t1

0x6c25,	// (0x00056b58) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0005fa21) clock_nsta_pane_cp2_t

0x0539,	// (0x0005046c) form_field_data_wide_pane_g1_ParamLimits

0x2ff0,	// (0x00052f23) form_field_data_wide_pane_g2_ParamLimits

0x2ff0,	// (0x00052f23) form_field_data_wide_pane_g2

0x2ffc,	// (0x00052f2f) form_field_data_wide_pane_g3_ParamLimits

0x2ffc,	// (0x00052f2f) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0005f5f7) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0005f5f7) form_field_data_wide_pane_g

0xd8d2,	// (0x0005d805) grid_touch_3_pane_ParamLimits

0xd8d2,	// (0x0005d805) grid_touch_3_pane

0xde07,	// (0x0005dd3a) cell_touch_3_pane_ParamLimits

0xde07,	// (0x0005dd3a) cell_touch_3_pane

0x713e,	// (0x00057071) cell_touch_3_pane_g1

0x713e,	// (0x00057071) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0005faa6) cell_touch_3_pane_g

0x2595,	// (0x000524c8) cont_query_data_pane

0x259d,	// (0x000524d0) cont_query_data_pane_cp1

0x8268,	// (0x0005819b) button_value_adjust_pane_cp7

0x8270,	// (0x000581a3) query_popup_pane_cp3

0x3710,	// (0x00053643) bg_popup_sub_pane_cp22_ParamLimits

0x08dd,	// (0x00050810) navi_navi_volume_pane_cp2

0x08f8,	// (0x0005082b) popup_side_volume_key_window_g2

0x0907,	// (0x0005083a) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0005f689) popup_side_volume_key_window_g

0x0924,	// (0x00050857) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0005f690) popup_side_volume_key_window_t

0x39d7,	// (0x0005390a) popup_side_volume_key_window_ParamLimits

0xb310,	// (0x0005b243) list_double_graphic_pane_g4_ParamLimits

0xb310,	// (0x0005b243) list_double_graphic_pane_g4

0xcc9d,	// (0x0005cbd0) list_single_2heading_msg_pane_ParamLimits

0xcc9d,	// (0x0005cbd0) list_single_2heading_msg_pane

0xccc3,	// (0x0005cbf6) list_single_2heading_msg_pane_g1_ParamLimits

0xccc3,	// (0x0005cbf6) list_single_2heading_msg_pane_g1

0xcccf,	// (0x0005cc02) list_single_2heading_msg_pane_g2_ParamLimits

0xcccf,	// (0x0005cc02) list_single_2heading_msg_pane_g2

0xcce2,	// (0x0005cc15) list_single_2heading_msg_pane_g3_ParamLimits

0xcce2,	// (0x0005cc15) list_single_2heading_msg_pane_g3

0xccee,	// (0x0005cc21) list_single_2heading_msg_pane_g4_ParamLimits

0xccee,	// (0x0005cc21) list_single_2heading_msg_pane_g4

0x0003,

0xfce5,	// (0x0005fc18) list_single_2heading_msg_pane_g_ParamLimits

0xfce5,	// (0x0005fc18) list_single_2heading_msg_pane_g

0xbbf3,	// (0x0005bb26) list_single_2heading_msg_pane_t1_ParamLimits

0xbbf3,	// (0x0005bb26) list_single_2heading_msg_pane_t1

0xbc1b,	// (0x0005bb4e) list_single_2heading_msg_pane_t2_ParamLimits

0xbc1b,	// (0x0005bb4e) list_single_2heading_msg_pane_t2

0xbc86,	// (0x0005bbb9) list_single_2heading_msg_pane_t3_ParamLimits

0xbc86,	// (0x0005bbb9) list_single_2heading_msg_pane_t3

0x2c5d,	// (0x00052b90) list_single_2heading_msg_pane_t4_ParamLimits

0x2c5d,	// (0x00052b90) list_single_2heading_msg_pane_t4

0x0003,

0xfcee,	// (0x0005fc21) list_single_2heading_msg_pane_t_ParamLimits

0xfcee,	// (0x0005fc21) list_single_2heading_msg_pane_t

0x21a9,	// (0x000520dc) title_pane_g4_ParamLimits

0x21a9,	// (0x000520dc) title_pane_g4

0x06e9,	// (0x0005061c) title_pane_stacon_g3_ParamLimits

0x06e9,	// (0x0005061c) title_pane_stacon_g3

0x7d91,	// (0x00057cc4) list_single_2graphic_im_pane_g4_ParamLimits

0x7d91,	// (0x00057cc4) list_single_2graphic_im_pane_g4

0x5be5,	// (0x00055b18) popup_side_volume_key_window_cp

0x645b,	// (0x0005638e) main_idle_act2_pane_t1

0x0d4f,	// (0x00050c82) toolbar_button_pane_g10

0xc30e,	// (0x0005c241) popup_toolbar_window_cp1

0x6c16,	// (0x00056b49) clock_nsta_pane_cp_t1

0x6c16,	// (0x00056b49) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0005fa1c) clock_nsta_pane_cp_t

0x08dd,	// (0x00050810) navi_navi_volume_pane_cp2_ParamLimits

0x08ec,	// (0x0005081f) popup_side_volume_key_window_g1_ParamLimits

0x08f8,	// (0x0005082b) popup_side_volume_key_window_g2_ParamLimits

0x0907,	// (0x0005083a) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0005f689) popup_side_volume_key_window_g_ParamLimits

0x1492,	// (0x000513c5) fep_hwr_aid_pane

0x153b,	// (0x0005146e) bg_fep_hwr_top_pane_g4_ParamLimits

0x71ae,	// (0x000570e1) fep_hwr_top_pane_g1_ParamLimits

0x71c0,	// (0x000570f3) fep_hwr_top_pane_g2_ParamLimits

0x155b,	// (0x0005148e) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0005fa71) fep_hwr_top_pane_g_ParamLimits

0x1570,	// (0x000514a3) fep_hwr_top_text_pane_ParamLimits

0x599a,	// (0x000558cd) aid_touch_tab_arrow_arrow_2

0x59a3,	// (0x000558d6) aid_touch_tab_arrow_left_2

0x14a6,	// (0x000513d9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x14dd,	// (0x00051410) fep_hwr_prediction_pane

0x7324,	// (0x00057257) fep_vkb_prediction_pane

0xdbda,	// (0x0005db0d) fep_vkb_side_pane_g3_ParamLimits

0xdbda,	// (0x0005db0d) fep_vkb_side_pane_g3

0x16ff,	// (0x00051632) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1770,	// (0x000516a3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x177d,	// (0x000516b0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbed,	// (0x0005fb20) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18ac,	// (0x000517df) fep_hwr_prediction_pane_g1

0x18b6,	// (0x000517e9) fep_hwr_prediction_pane_g2

0x18be,	// (0x000517f1) fep_hwr_prediction_pane_g3

0x18c6,	// (0x000517f9) fep_hwr_prediction_pane_g4

0x0003,

0xfcf7,	// (0x0005fc2a) fep_hwr_prediction_pane_g

0x8297,	// (0x000581ca) fep_vkb_prediction_pane_g1

0x82a1,	// (0x000581d4) fep_vkb_prediction_pane_g2

0x82a9,	// (0x000581dc) fep_vkb_prediction_pane_g3

0x82b1,	// (0x000581e4) fep_vkb_prediction_pane_g4

0x0003,

0xfd00,	// (0x0005fc33) fep_vkb_prediction_pane_g

0x10d8,	// (0x0005100b) slider_set_pane_g3

0x10ec,	// (0x0005101f) slider_set_pane_g4

0x1104,	// (0x00051037) slider_set_pane_g5

0x10d8,	// (0x0005100b) slider_set_pane_g6

0x111a,	// (0x0005104d) slider_set_pane_g7

0x6093,	// (0x00055fc6) slider_form_pane_g3

0x609c,	// (0x00055fcf) slider_form_pane_g4

0x60a4,	// (0x00055fd7) slider_form_pane_g5

0x6093,	// (0x00055fc6) slider_form_pane_g6

0xd754,	// (0x0005d687) slider_form_pane_g7

0x676b,	// (0x0005669e) slider_set_pane_vc_g3

0x6774,	// (0x000566a7) slider_set_pane_vc_g4

0x677d,	// (0x000566b0) slider_set_pane_vc_g5

0x676b,	// (0x0005669e) slider_set_pane_vc_g6

0x6786,	// (0x000566b9) slider_set_pane_vc_g7

0x676b,	// (0x0005669e) slider_form_pane_vc_g1

0x6774,	// (0x000566a7) slider_form_pane_vc_g2

0x677d,	// (0x000566b0) slider_form_pane_vc_g3

0x676b,	// (0x0005669e) slider_form_pane_vc_g4

0x693b,	// (0x0005686e) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0005fa02) slider_form_pane_vc_g

0x2161,	// (0x00052094) main_idle_act3_pane

0x82b9,	// (0x000581ec) ai3_links_pane

0xde51,	// (0x0005dd84) popup_ai3_data_window_ParamLimits

0xde51,	// (0x0005dd84) popup_ai3_data_window

0x2161,	// (0x00052094) grid_ai3_links_pane

0xde6f,	// (0x0005dda2) cell_ai3_links_pane_ParamLimits

0xde6f,	// (0x0005dda2) cell_ai3_links_pane

0x82fa,	// (0x0005822d) bg_popup_sub_pane_cp11

0x8307,	// (0x0005823a) cell_ai3_links_pane_g1

0x2161,	// (0x00052094) bg_popup_sub_pane_cp12

0x832c,	// (0x0005825f) heading_ai3_data_pane

0x8334,	// (0x00058267) list_ai3_gene_pane

0x8340,	// (0x00058273) popup_ai3_data_window_g1

0x8348,	// (0x0005827b) heading_ai3_data_pane_g1

0x8350,	// (0x00058283) heading_ai3_data_pane_t1

0x835e,	// (0x00058291) list_double_ai3_gene_pane_ParamLimits

0x835e,	// (0x00058291) list_double_ai3_gene_pane

0x836b,	// (0x0005829e) list_single_ai3_gene_pane_ParamLimits

0x836b,	// (0x0005829e) list_single_ai3_gene_pane

0x7103,	// (0x00057036) list_highlight_pane_cp7_ParamLimits

0x7103,	// (0x00057036) list_highlight_pane_cp7

0x8378,	// (0x000582ab) list_single_a13_gene_pane_t1_ParamLimits

0x8378,	// (0x000582ab) list_single_a13_gene_pane_t1

0x838f,	// (0x000582c2) list_single_ai3_gene_pane_g1

0x8398,	// (0x000582cb) list_single_ai3_gene_pane_g2

0x0001,

0xfd09,	// (0x0005fc3c) list_single_ai3_gene_pane_g

0x83a0,	// (0x000582d3) list_double_ai3_gene_pane_g1_ParamLimits

0x83a0,	// (0x000582d3) list_double_ai3_gene_pane_g1

0x83ac,	// (0x000582df) list_double_ai3_gene_pane_t1_ParamLimits

0x83ac,	// (0x000582df) list_double_ai3_gene_pane_t1

0x83c8,	// (0x000582fb) list_double_ai3_gene_pane_t2_ParamLimits

0x83c8,	// (0x000582fb) list_double_ai3_gene_pane_t2

0x83dd,	// (0x00058310) list_double_ai3_gene_pane_t3_ParamLimits

0x83dd,	// (0x00058310) list_double_ai3_gene_pane_t3

0x0002,

0xfd0e,	// (0x0005fc41) list_double_ai3_gene_pane_t_ParamLimits

0xfd0e,	// (0x0005fc41) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2b93,	// (0x00052ac6) aid_size_min_col_2

0xde3b,	// (0x0005dd6e) aid_size_min_msg_ParamLimits

0xde3b,	// (0x0005dd6e) aid_size_min_msg

0xdbee,	// (0x0005db21) fep_vkb_top_text_pane_g2_ParamLimits

0xdbee,	// (0x0005db21) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0005faa1) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0005faa1) fep_vkb_top_text_pane_g

0x2161,	// (0x00052094) main_hc_apps_shell_pane

0x83fa,	// (0x0005832d) grid_hc_apps_pane_ParamLimits

0x83fa,	// (0x0005832d) grid_hc_apps_pane

0x8409,	// (0x0005833c) list_hc_apps_pane

0x8411,	// (0x00058344) scroll_pane_cp37_ParamLimits

0x8411,	// (0x00058344) scroll_pane_cp37

0xde89,	// (0x0005ddbc) cell_hc_apps_pane_ParamLimits

0xde89,	// (0x0005ddbc) cell_hc_apps_pane

0xdf53,	// (0x0005de86) cell_hc_apps_pane_g1_ParamLimits

0xdf53,	// (0x0005de86) cell_hc_apps_pane_g1

0x8506,	// (0x00058439) cell_hc_apps_pane_g2_ParamLimits

0x8506,	// (0x00058439) cell_hc_apps_pane_g2

0x8522,	// (0x00058455) cell_hc_apps_pane_g3_ParamLimits

0x8522,	// (0x00058455) cell_hc_apps_pane_g3

0x0002,

0xfd15,	// (0x0005fc48) cell_hc_apps_pane_g_ParamLimits

0xfd15,	// (0x0005fc48) cell_hc_apps_pane_g

0xdf80,	// (0x0005deb3) cell_hc_apps_pane_t1_ParamLimits

0xdf80,	// (0x0005deb3) cell_hc_apps_pane_t1

0x24df,	// (0x00052412) grid_highlight_pane_cp10_ParamLimits

0x24df,	// (0x00052412) grid_highlight_pane_cp10

0xdfc0,	// (0x0005def3) list_single_hc_apps_pane_ParamLimits

0xdfc0,	// (0x0005def3) list_single_hc_apps_pane

0xdffa,	// (0x0005df2d) list_single_hc_apps_pane_g1

0xcd06,	// (0x0005cc39) list_single_hc_apps_pane_g2

0x0001,

0xfd1c,	// (0x0005fc4f) list_single_hc_apps_pane_g

0xcd1f,	// (0x0005cc52) list_single_hc_apps_pane_g2_copy1

0xbcf4,	// (0x0005bc27) list_single_hc_apps_pane_t1

0x2255,	// (0x00052188) bg_set_opt_pane_cp_ParamLimits

0xf50c,	// (0x0005f43f) setting_slider_pane_t1_ParamLimits

0xf522,	// (0x0005f455) setting_slider_pane_t2_ParamLimits

0xf53c,	// (0x0005f46f) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0005f4d5) setting_slider_pane_t_ParamLimits

0xf554,	// (0x0005f487) slider_set_pane_ParamLimits

0x0bf1,	// (0x00050b24) control_pane_g5_ParamLimits

0x0bf1,	// (0x00050b24) control_pane_g5

0x5eb4,	// (0x00055de7) slider_set_pane_g1_ParamLimits

0x10cc,	// (0x00050fff) slider_set_pane_g2_ParamLimits

0x10d8,	// (0x0005100b) slider_set_pane_g3_ParamLimits

0x10ec,	// (0x0005101f) slider_set_pane_g4_ParamLimits

0x1104,	// (0x00051037) slider_set_pane_g5_ParamLimits

0x10d8,	// (0x0005100b) slider_set_pane_g6_ParamLimits

0x111a,	// (0x0005104d) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0005f8d0) slider_set_pane_g_ParamLimits

0x3abc,	// (0x000539ef) navi_icon_text_pane_ParamLimits

0xcf2f,	// (0x0005ce62) aid_fill_nsta_2_ParamLimits

0xcf65,	// (0x0005ce98) aid_touch_tab_arrow_left_ParamLimits

0xcf7b,	// (0x0005ceae) aid_touch_tab_arrow_right_ParamLimits

0xd016,	// (0x0005cf49) clock_nsta_pane_ParamLimits

0xd4a3,	// (0x0005d3d6) navi_icon_pane_g1_ParamLimits

0xd4af,	// (0x0005d3e2) navi_text_pane_t1_ParamLimits

0xd9ac,	// (0x0005d8df) navi_icon_text_pane_g1_ParamLimits

0xd9b8,	// (0x0005d8eb) navi_icon_text_pane_t1_ParamLimits

0xdffa,	// (0x0005df2d) list_single_hc_apps_pane_g1_ParamLimits

0xcd06,	// (0x0005cc39) list_single_hc_apps_pane_g2_ParamLimits

0xfd1c,	// (0x0005fc4f) list_single_hc_apps_pane_g_ParamLimits

0xcd1f,	// (0x0005cc52) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbcf4,	// (0x0005bc27) list_single_hc_apps_pane_t1_ParamLimits

0xaf6d,	// (0x0005aea0) popup_toolbar2_fixed_window_ParamLimits

0xaf6d,	// (0x0005aea0) popup_toolbar2_fixed_window

0xce98,	// (0x0005cdcb) popup_toolbar2_float_window

0x2161,	// (0x00052094) bg_popup_sub_pane_cp27

0x85dc,	// (0x0005850f) grid_toolbar2_float_pane

0x2161,	// (0x00052094) bg_popup_sub_pane_cp26

0x85dc,	// (0x0005850f) grid_toolbar2_fixed_pane

0xe013,	// (0x0005df46) cell_toolbar2_fixed_pane_ParamLimits

0xe013,	// (0x0005df46) cell_toolbar2_fixed_pane

0xe030,	// (0x0005df63) cell_toolbar2_fixed_pane_g1

0x85fd,	// (0x00058530) toolbar2_fixed_button_pane

0x4afa,	// (0x00054a2d) toolbar2_fixed_button_pane_g1

0x4b0a,	// (0x00054a3d) toolbar2_fixed_button_pane_g2

0x4b02,	// (0x00054a35) toolbar2_fixed_button_pane_g3

0x4b1a,	// (0x00054a4d) toolbar2_fixed_button_pane_g4

0x4b12,	// (0x00054a45) toolbar2_fixed_button_pane_g5

0x4b22,	// (0x00054a55) toolbar2_fixed_button_pane_g6

0x4b2a,	// (0x00054a5d) toolbar2_fixed_button_pane_g7

0x4b3a,	// (0x00054a6d) toolbar2_fixed_button_pane_g8

0x4b32,	// (0x00054a65) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0005f7d2) toolbar2_fixed_button_pane_g

0x8605,	// (0x00058538) cell_toolbar2_float_pane_ParamLimits

0x8605,	// (0x00058538) cell_toolbar2_float_pane

0x8616,	// (0x00058549) cell_toolbar2_float_pane_g1

0x85fd,	// (0x00058530) toolbar2_fixed_button_pane_cp

0xdad6,	// (0x0005da09) fep_vkb_accented_list_pane_ParamLimits

0xdad6,	// (0x0005da09) fep_vkb_accented_list_pane

0x16df,	// (0x00051612) bg_popup_fep_shadow_pane_g9

0x3c40,	// (0x00053b73) bg_popup_fep_shadow_pane_cp3

0x313f,	// (0x00053072) list_accented_list_pane

0x861f,	// (0x00058552) list_single_accented_list_pane_ParamLimits

0x861f,	// (0x00058552) list_single_accented_list_pane

0x3c40,	// (0x00053b73) list_highlight_pane_cp10

0x8630,	// (0x00058563) list_single_accented_list_pane_t1

0xcdb4,	// (0x0005cce7) popup_slider_window_ParamLimits

0xcdb4,	// (0x0005cce7) popup_slider_window

0x8278,	// (0x000581ab) aid_indentation_list_msg

0xe13b,	// (0x0005e06e) bg_popup_window_pane_cp19

0x876a,	// (0x0005869d) popup_slider_window_g1

0x8786,	// (0x000586b9) popup_slider_window_g2

0x87a2,	// (0x000586d5) popup_slider_window_g3

0x0005,

0xfd21,	// (0x0005fc54) popup_slider_window_g

0x87fe,	// (0x00058731) popup_slider_window_t1

0x8872,	// (0x000587a5) small_volume_slider_vertical_pane

0x713e,	// (0x00057071) small_volume_slider_vertical_pane_g1

0x713e,	// (0x00057071) small_volume_slider_vertical_pane_g2

0x888e,	// (0x000587c1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd33,	// (0x0005fc66) small_volume_slider_vertical_pane_g

0xaed7,	// (0x0005ae0a) area_side_right_pane_ParamLimits

0xaed7,	// (0x0005ae0a) area_side_right_pane

0xbd22,	// (0x0005bc55) aid_size_side_button_ParamLimits

0xbd22,	// (0x0005bc55) aid_size_side_button

0xbd3b,	// (0x0005bc6e) grid_sctrl_middle_pane_ParamLimits

0xbd3b,	// (0x0005bc6e) grid_sctrl_middle_pane

0x1902,	// (0x00051835) sctrl_sk_bottom_pane

0x1913,	// (0x00051846) sctrl_sk_top_pane

0x1925,	// (0x00051858) aid_touch_sctrl_top

0x1932,	// (0x00051865) bg_sctrl_sk_pane_ParamLimits

0x1932,	// (0x00051865) bg_sctrl_sk_pane

0x1940,	// (0x00051873) sctrl_sk_top_pane_g1

0x194d,	// (0x00051880) sctrl_sk_top_pane_t1

0x1925,	// (0x00051858) aid_touch_sctrl_bottom

0x1932,	// (0x00051865) bg_sctrl_sk_pane_cp_ParamLimits

0x1932,	// (0x00051865) bg_sctrl_sk_pane_cp

0x1968,	// (0x0005189b) sctrl_sk_bottom_pane_g1

0x194d,	// (0x00051880) sctrl_sk_bottom_pane_t1

0xbd55,	// (0x0005bc88) cell_sctrl_middle_pane_ParamLimits

0xbd55,	// (0x0005bc88) cell_sctrl_middle_pane

0xbd68,	// (0x0005bc9b) aid_touch_sctrl_middle_ParamLimits

0xbd68,	// (0x0005bc9b) aid_touch_sctrl_middle

0xbd75,	// (0x0005bca8) bg_sctrl_middle_pane_ParamLimits

0xbd75,	// (0x0005bca8) bg_sctrl_middle_pane

0x1fe2,	// (0x00051f15) cell_sctrl_middle_pane_g1_ParamLimits

0x1fe2,	// (0x00051f15) cell_sctrl_middle_pane_g1

0xbd83,	// (0x0005bcb6) cell_sctrl_middle_pane_g2_ParamLimits

0xbd83,	// (0x0005bcb6) cell_sctrl_middle_pane_g2

0x0001,

0xfd3f,	// (0x0005fc72) cell_sctrl_middle_pane_g_ParamLimits

0xfd3f,	// (0x0005fc72) cell_sctrl_middle_pane_g

0x4afa,	// (0x00054a2d) bg_sctrl_middle_pane_g1

0x4b02,	// (0x00054a35) bg_sctrl_middle_pane_g2

0x4b0a,	// (0x00054a3d) bg_sctrl_middle_pane_g3

0x4b12,	// (0x00054a45) bg_sctrl_middle_pane_g4

0x4b1a,	// (0x00054a4d) bg_sctrl_middle_pane_g5

0x4b22,	// (0x00054a55) bg_sctrl_middle_pane_g6

0x4b2a,	// (0x00054a5d) bg_sctrl_middle_pane_g7

0x4b32,	// (0x00054a65) bg_sctrl_middle_pane_g8

0x0007,

0xfd44,	// (0x0005fc77) bg_sctrl_middle_pane_g

0x4b3a,	// (0x00054a6d) bg_sctrl_middle_pane_g8_copy1

0x4afa,	// (0x00054a2d) bg_sctrl_sk_pane_g1

0x4b0a,	// (0x00054a3d) bg_sctrl_sk_pane_g2

0x4b02,	// (0x00054a35) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0005f7d2) bg_sctrl_sk_pane_g

0x2f05,	// (0x00052e38) aid_size_touch_scroll_bar

0x4b1a,	// (0x00054a4d) bg_sctrl_sk_pane_g4

0x4b12,	// (0x00054a45) bg_sctrl_sk_pane_g5

0x4b22,	// (0x00054a55) bg_sctrl_sk_pane_g6

0x4b2a,	// (0x00054a5d) bg_sctrl_sk_pane_g7

0x4b3a,	// (0x00054a6d) bg_sctrl_sk_pane_g8

0x4b32,	// (0x00054a65) bg_sctrl_sk_pane_g9

0x4068,	// (0x00053f9b) popup_fep_china_hwr2_fs_candidate_window

0xc7d2,	// (0x0005c705) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7d2,	// (0x0005c705) popup_fep_china_hwr2_fs_control_window

0x16ff,	// (0x00051632) sctrl_sk_top_pane_g2

0x0001,

0xfd3a,	// (0x0005fc6d) sctrl_sk_top_pane_g

0xe1f3,	// (0x0005e126) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1f3,	// (0x0005e126) aid_fep_china_hwr2_fs_cell

0xe209,	// (0x0005e13c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe209,	// (0x0005e13c) bg_popup_fep_shadow_pane_cp4

0xe220,	// (0x0005e153) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe220,	// (0x0005e153) bg_popup_fep_shadow_pane_cp5

0xe232,	// (0x0005e165) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe232,	// (0x0005e165) popup_fep_china_hwr2_fs_control_bar_grid

0xe246,	// (0x0005e179) popup_fep_china_hwr2_fs_control_funtion_grid

0x88ed,	// (0x00058820) aid_fep_china_hwr2_fs_candi_cell

0x2161,	// (0x00052094) bg_popup_fep_shadow_pane_cp6

0x88f7,	// (0x0005882a) popup_fep_china_hwr2_fs_candidate_grid

0xe24e,	// (0x0005e181) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe24e,	// (0x0005e181) cell_fep_china_hwr2_fs_funtion_grid

0x713e,	// (0x00057071) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8919,	// (0x0005884c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8919,	// (0x0005884c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8927,	// (0x0005885a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8927,	// (0x0005885a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd55,	// (0x0005fc88) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd55,	// (0x0005fc88) cell_fep_china_hwr2_fs_funtion_grid_g

0xe266,	// (0x0005e199) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe266,	// (0x0005e199) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe27b,	// (0x0005e1ae) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe27b,	// (0x0005e1ae) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd5a,	// (0x0005fc8d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd5a,	// (0x0005fc8d) cell_fep_china_hwr2_fs_funtion_grid_t

0x896e,	// (0x000588a1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8976,	// (0x000588a9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x897e,	// (0x000588b1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd5f,	// (0x0005fc92) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8986,	// (0x000588b9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8986,	// (0x000588b9) cell_fep_china_hwr2_fs_candidate_grid

0x89a5,	// (0x000588d8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x89ad,	// (0x000588e0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x713e,	// (0x00057071) cell_fep_china_hwr2_fs_candidate_grid_g1

0x713e,	// (0x00057071) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0005faa6) cell_fep_china_hwr2_fs_candidate_grid_g

0x89b5,	// (0x000588e8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46d7,	// (0x0005460a) clock_nsta_pane_cp_24_ParamLimits

0x46d7,	// (0x0005460a) clock_nsta_pane_cp_24

0x4757,	// (0x0005468a) indicator_nsta_pane_cp_24_ParamLimits

0x4757,	// (0x0005468a) indicator_nsta_pane_cp_24

0x57f2,	// (0x00055725) heading_pane_g1

0x0001,

0xf904,	// (0x0005f837) heading_pane_g

0x62a2,	// (0x000561d5) grid_sct_catagory_button_pane

0x62d4,	// (0x00056207) scroll_pane_cp5_ParamLimits

0x6d87,	// (0x00056cba) button_value_adjust_pane_cp5_ParamLimits

0x6d87,	// (0x00056cba) button_value_adjust_pane_cp5

0x6e6c,	// (0x00056d9f) form2_midp_time_pane_ParamLimits

0x89c3,	// (0x000588f6) cell_sct_catagory_button_pane_ParamLimits

0x89c3,	// (0x000588f6) cell_sct_catagory_button_pane

0x7103,	// (0x00057036) bg_button_pane_cp01_ParamLimits

0x7103,	// (0x00057036) bg_button_pane_cp01

0x713e,	// (0x00057071) cell_sct_catagory_button_pane_g1

0xce35,	// (0x0005cd68) popup_tb_extension_window

0xe297,	// (0x0005e1ca) aid_size_cell_ext_ParamLimits

0xe297,	// (0x0005e1ca) aid_size_cell_ext

0x2d47,	// (0x00052c7a) bg_tb_trans_pane_cp1_ParamLimits

0x2d47,	// (0x00052c7a) bg_tb_trans_pane_cp1

0xe2bd,	// (0x0005e1f0) grid_tb_ext_pane_ParamLimits

0xe2bd,	// (0x0005e1f0) grid_tb_ext_pane

0xe2fd,	// (0x0005e230) cell_tb_ext_pane_ParamLimits

0xe2fd,	// (0x0005e230) cell_tb_ext_pane

0xe327,	// (0x0005e25a) cell_tb_ext_pane_g1_ParamLimits

0xe327,	// (0x0005e25a) cell_tb_ext_pane_g1

0x8a59,	// (0x0005898c) cell_tb_ext_pane_t1

0x24df,	// (0x00052412) list_highlight_pane_cp11_ParamLimits

0x24df,	// (0x00052412) list_highlight_pane_cp11

0xf495,	// (0x0005f3c8) popup_uni_indicator_window_ParamLimits

0xf495,	// (0x0005f3c8) popup_uni_indicator_window

0x2fd6,	// (0x00052f09) bg_popup_sub_pane_cp14

0x8a95,	// (0x000589c8) list_uniindi_pane

0x8aa1,	// (0x000589d4) uniindi_top_pane

0x24df,	// (0x00052412) bg_uniindi_top_pane

0x8ac2,	// (0x000589f5) uniindi_top_pane_g1

0x8ad8,	// (0x00058a0b) uniindi_top_pane_g2

0x0003,

0xfd66,	// (0x0005fc99) uniindi_top_pane_g

0x8b02,	// (0x00058a35) uniindi_top_pane_t1

0x8b2e,	// (0x00058a61) list_single_uniindi_pane_ParamLimits

0x8b2e,	// (0x00058a61) list_single_uniindi_pane

0x713e,	// (0x00057071) bg_uniindi_top_pane_g1

0x8b40,	// (0x00058a73) list_single_uniindi_pane_g1

0x8b53,	// (0x00058a86) list_single_uniindi_pane_t1

0xf328,	// (0x0005f25b) control_bg_pane

0x8b78,	// (0x00058aab) bg_sctrl_sk_pane_cp1

0x8b81,	// (0x00058ab4) bg_sctrl_sk_pane_cp2

0x8b8a,	// (0x00058abd) control_bg_pane_g1

0x8b93,	// (0x00058ac6) control_bg_pane_g2

0x0001,

0xfd6f,	// (0x0005fca2) control_bg_pane_g

0x6bdb,	// (0x00056b0e) cell_indicator_nsta_pane_g1_ParamLimits

0xd905,	// (0x0005d838) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0005fa17) cell_indicator_nsta_pane_g_ParamLimits

0x295c,	// (0x0005288f) form2_midp_time_pane_t1_ParamLimits

0x72ef,	// (0x00057222) main_idle_act4_pane_ParamLimits

0x72ef,	// (0x00057222) main_idle_act4_pane

0xce35,	// (0x0005cd68) popup_tb_extension_window_ParamLimits

0xe2e5,	// (0x0005e218) tb_ext_find_pane_ParamLimits

0xe2e5,	// (0x0005e218) tb_ext_find_pane

0x8b9c,	// (0x00058acf) ai_gene_pane_1_cp1

0x3d89,	// (0x00053cbc) ai_gene_pane_2_cp1

0x8ba4,	// (0x00058ad7) list_single_idle_plugin_calendar_pane

0x8bad,	// (0x00058ae0) list_single_idle_plugin_notification_pane

0x8bb6,	// (0x00058ae9) list_single_idle_plugin_player_pane

0xe344,	// (0x0005e277) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe344,	// (0x0005e277) list_single_idle_plugin_shortcut_pane

0xe36c,	// (0x0005e29f) main_idle_act4_pane_t1

0xe384,	// (0x0005e2b7) main_idle_act4_pane_t2

0x0001,

0xfd74,	// (0x0005fca7) main_idle_act4_pane_t

0xe39c,	// (0x0005e2cf) middle_sk_idle_act4_pane_ParamLimits

0xe39c,	// (0x0005e2cf) middle_sk_idle_act4_pane

0xe3b8,	// (0x0005e2eb) popup_clock_digital_analogue_window_cp2

0xe3df,	// (0x0005e312) shortcut_wheel_idle_act4_pane_ParamLimits

0xe3df,	// (0x0005e312) shortcut_wheel_idle_act4_pane

0x713e,	// (0x00057071) shortcut_wheel_idle_act4_pane_g1

0x713e,	// (0x00057071) shortcut_wheel_idle_act4_pane_g2

0x713e,	// (0x00057071) shortcut_wheel_idle_act4_pane_g3

0x713e,	// (0x00057071) shortcut_wheel_idle_act4_pane_g4

0x713e,	// (0x00057071) shortcut_wheel_idle_act4_pane_g5

0x8c49,	// (0x00058b7c) shortcut_wheel_idle_act4_pane_g6

0x8c51,	// (0x00058b84) shortcut_wheel_idle_act4_pane_g7

0x8c59,	// (0x00058b8c) shortcut_wheel_idle_act4_pane_g8

0x8c61,	// (0x00058b94) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd79,	// (0x0005fcac) shortcut_wheel_idle_act4_pane_g

0xe45c,	// (0x0005e38f) middle_sk_idle_act4_pane_g1_ParamLimits

0xe45c,	// (0x0005e38f) middle_sk_idle_act4_pane_g1

0xe46a,	// (0x0005e39d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe46a,	// (0x0005e39d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd9c,	// (0x0005fccf) middle_sk_idle_act4_pane_g_ParamLimits

0xfd9c,	// (0x0005fccf) middle_sk_idle_act4_pane_g

0xe4a9,	// (0x0005e3dc) middle_sk_idle_act4_pane_t1_ParamLimits

0xe4a9,	// (0x0005e3dc) middle_sk_idle_act4_pane_t1

0xe4d8,	// (0x0005e40b) grid_ai_shortcut_pane_ParamLimits

0xe4d8,	// (0x0005e40b) grid_ai_shortcut_pane

0xe4f5,	// (0x0005e428) list_highlight_pane_cp16_ParamLimits

0xe4f5,	// (0x0005e428) list_highlight_pane_cp16

0xe502,	// (0x0005e435) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe502,	// (0x0005e435) list_single_idle_plugin_shortcut_pane_g1

0xe50e,	// (0x0005e441) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe50e,	// (0x0005e441) list_single_idle_plugin_shortcut_pane_g2

0xe52c,	// (0x0005e45f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe52c,	// (0x0005e45f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfda1,	// (0x0005fcd4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfda1,	// (0x0005fcd4) list_single_idle_plugin_shortcut_pane_g

0xe541,	// (0x0005e474) cell_ai_shortcut_pane_ParamLimits

0xe541,	// (0x0005e474) cell_ai_shortcut_pane

0xe557,	// (0x0005e48a) cell_ai_shortcut_pane_g1_ParamLimits

0xe557,	// (0x0005e48a) cell_ai_shortcut_pane_g1

0x8b9c,	// (0x00058acf) ai_gene_pane_1_cp2

0x8d92,	// (0x00058cc5) ai_gene_pane_2_cp2

0x8d9a,	// (0x00058ccd) list_highlight_pane_cp15

0x8da3,	// (0x00058cd6) list_single_idle_plugin_calendar_pane_g1

0x8d9a,	// (0x00058ccd) list_highlight_pane_cp17

0x8dab,	// (0x00058cde) list_single_idle_plugin_calendar_pane_g1_copy1

0x8db3,	// (0x00058ce6) list_single_idle_plugin_player_pane_g1

0x6509,	// (0x0005643c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfda8,	// (0x0005fcdb) list_single_idle_plugin_player_pane_g

0x8dbb,	// (0x00058cee) list_single_idle_plugin_player_pane_t1

0x8dc9,	// (0x00058cfc) list_single_idle_plugin_player_pane_t2

0x8dd7,	// (0x00058d0a) list_single_idle_plugin_player_pane_t3

0x8de5,	// (0x00058d18) list_single_idle_plugin_player_pane_t4

0x0003,

0xfdad,	// (0x0005fce0) list_single_idle_plugin_player_pane_t

0x8df3,	// (0x00058d26) wait_bar_pane_cp15

0x8dfb,	// (0x00058d2e) grid_ai_notification_pane

0x6509,	// (0x0005643c) list_single_idle_plugin_notification_pane_g1

0xe579,	// (0x0005e4ac) cell_ai_notification_pane_ParamLimits

0xe579,	// (0x0005e4ac) cell_ai_notification_pane

0x8e11,	// (0x00058d44) cell_ai_notification_pane_g1

0x8e19,	// (0x00058d4c) cell_ai_notification_pane_t1

0xe586,	// (0x0005e4b9) tb_ext_find_button_pane

0xe58e,	// (0x0005e4c1) tb_ext_find_pane_g1

0xe596,	// (0x0005e4c9) tb_ext_find_pane_t1

0x3646,	// (0x00053579) tb_ext_find_button_pane_g1

0x8e45,	// (0x00058d78) tb_ext_find_button_pane_g2

0x0001,

0xfdb6,	// (0x0005fce9) tb_ext_find_button_pane_g

0xe36c,	// (0x0005e29f) main_idle_act4_pane_t1_ParamLimits

0xe384,	// (0x0005e2b7) main_idle_act4_pane_t2_ParamLimits

0xfd74,	// (0x0005fca7) main_idle_act4_pane_t_ParamLimits

0xe3b8,	// (0x0005e2eb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3cf,	// (0x0005e302) sat_plugin_idle_act4_pane_ParamLimits

0xe3cf,	// (0x0005e302) sat_plugin_idle_act4_pane

0xe5a4,	// (0x0005e4d7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe5a4,	// (0x0005e4d7) sat_plugin_idle_act4_pane_t1

0xe5bc,	// (0x0005e4ef) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5bc,	// (0x0005e4ef) sat_plugin_idle_act4_pane_t2

0xe5d4,	// (0x0005e507) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5d4,	// (0x0005e507) sat_plugin_idle_act4_pane_t3

0xe5ec,	// (0x0005e51f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5ec,	// (0x0005e51f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdbb,	// (0x0005fcee) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdbb,	// (0x0005fcee) sat_plugin_idle_act4_pane_t

0xf441,	// (0x0005f374) popup_battery_window_ParamLimits

0xf441,	// (0x0005f374) popup_battery_window

0x24df,	// (0x00052412) bg_popup_sub_pane_cp25_ParamLimits

0x24df,	// (0x00052412) bg_popup_sub_pane_cp25

0x8e9a,	// (0x00058dcd) popup_battery_window_g1_ParamLimits

0x8e9a,	// (0x00058dcd) popup_battery_window_g1

0x8ea6,	// (0x00058dd9) popup_battery_window_t1_ParamLimits

0x8ea6,	// (0x00058dd9) popup_battery_window_t1

0x8eb8,	// (0x00058deb) popup_battery_window_t2_ParamLimits

0x8eb8,	// (0x00058deb) popup_battery_window_t2

0x0001,

0xfdc4,	// (0x0005fcf7) popup_battery_window_t_ParamLimits

0xfdc4,	// (0x0005fcf7) popup_battery_window_t

0xc64a,	// (0x0005c57d) midp_canvas_pane_ParamLimits

0xc6a5,	// (0x0005c5d8) midp_keypad_pane_ParamLimits

0xc6a5,	// (0x0005c5d8) midp_keypad_pane

0x3fbe,	// (0x00053ef1) main_midp_pane_ParamLimits

0x6c34,	// (0x00056b67) signal_pane_g2_cp_ParamLimits

0xe604,	// (0x0005e537) aid_size_cell_midp_keypad_ParamLimits

0xe604,	// (0x0005e537) aid_size_cell_midp_keypad

0xe622,	// (0x0005e555) midp_keyp_game_grid_pane_ParamLimits

0xe622,	// (0x0005e555) midp_keyp_game_grid_pane

0xe649,	// (0x0005e57c) midp_keyp_rocker_pane_ParamLimits

0xe649,	// (0x0005e57c) midp_keyp_rocker_pane

0xe68e,	// (0x0005e5c1) midp_keyp_sk_left_pane_ParamLimits

0xe68e,	// (0x0005e5c1) midp_keyp_sk_left_pane

0xe6e2,	// (0x0005e615) midp_keyp_sk_right_pane_ParamLimits

0xe6e2,	// (0x0005e615) midp_keyp_sk_right_pane

0x2161,	// (0x00052094) bg_button_pane_cp03

0xe736,	// (0x0005e669) midp_keyp_sk_left_pane_g1

0x2161,	// (0x00052094) bg_button_pane_cp04

0xe736,	// (0x0005e669) midp_keyp_sk_right_pane_g1

0x713e,	// (0x00057071) midp_keyp_rocker_pane_g1

0xe73f,	// (0x0005e672) keyp_game_cell_pane_ParamLimits

0xe73f,	// (0x0005e672) keyp_game_cell_pane

0x2161,	// (0x00052094) bg_button_pane_cp02

0xe765,	// (0x0005e698) keyp_game_cell_pane_g1

0xaf19,	// (0x0005ae4c) popup_fep_vkb2_window_ParamLimits

0xaf19,	// (0x0005ae4c) popup_fep_vkb2_window

0xbd8f,	// (0x0005bcc2) aid_size_cell_vkb2_ParamLimits

0xbd8f,	// (0x0005bcc2) aid_size_cell_vkb2

0xbdbd,	// (0x0005bcf0) popup_fep_vkb2_window_g1_ParamLimits

0xbdbd,	// (0x0005bcf0) popup_fep_vkb2_window_g1

0xbe0d,	// (0x0005bd40) vkb2_area_bottom_pane_ParamLimits

0xbe0d,	// (0x0005bd40) vkb2_area_bottom_pane

0xbe69,	// (0x0005bd9c) vkb2_area_keypad_pane_ParamLimits

0xbe69,	// (0x0005bd9c) vkb2_area_keypad_pane

0xbeb7,	// (0x0005bdea) vkb2_area_top_pane_ParamLimits

0xbeb7,	// (0x0005bdea) vkb2_area_top_pane

0xbf3d,	// (0x0005be70) vkb2_top_entry_pane_ParamLimits

0xbf3d,	// (0x0005be70) vkb2_top_entry_pane

0xbf6a,	// (0x0005be9d) vkb2_top_grid_left_pane_ParamLimits

0xbf6a,	// (0x0005be9d) vkb2_top_grid_left_pane

0xbf8a,	// (0x0005bebd) vkb2_top_grid_right_pane_ParamLimits

0xbf8a,	// (0x0005bebd) vkb2_top_grid_right_pane

0x1bde,	// (0x00051b11) vkb2_cell_keypad_pane_ParamLimits

0x1bde,	// (0x00051b11) vkb2_cell_keypad_pane

0xbfd0,	// (0x0005bf03) vkb2_area_bottom_grid_pane_ParamLimits

0xbfd0,	// (0x0005bf03) vkb2_area_bottom_grid_pane

0xbffa,	// (0x0005bf2d) vkb2_area_bottom_pane_g1_ParamLimits

0xbffa,	// (0x0005bf2d) vkb2_area_bottom_pane_g1

0xc020,	// (0x0005bf53) vkb2_area_bottom_pane_g2_ParamLimits

0xc020,	// (0x0005bf53) vkb2_area_bottom_pane_g2

0xc051,	// (0x0005bf84) vkb2_area_bottom_pane_g3_ParamLimits

0xc051,	// (0x0005bf84) vkb2_area_bottom_pane_g3

0x0002,

0xfdc9,	// (0x0005fcfc) vkb2_area_bottom_pane_g_ParamLimits

0xfdc9,	// (0x0005fcfc) vkb2_area_bottom_pane_g

0x1d6d,	// (0x00051ca0) vkb2_top_cell_left_pane_ParamLimits

0x1d6d,	// (0x00051ca0) vkb2_top_cell_left_pane

0xe76e,	// (0x0005e6a1) vkb2_top_entry_pane_g1_ParamLimits

0xe76e,	// (0x0005e6a1) vkb2_top_entry_pane_g1

0xe77c,	// (0x0005e6af) vkb2_top_entry_pane_t1_ParamLimits

0xe77c,	// (0x0005e6af) vkb2_top_entry_pane_t1

0x9045,	// (0x00058f78) vkb2_top_entry_pane_t2_ParamLimits

0x9045,	// (0x00058f78) vkb2_top_entry_pane_t2

0x905d,	// (0x00058f90) vkb2_top_entry_pane_t3_ParamLimits

0x905d,	// (0x00058f90) vkb2_top_entry_pane_t3

0x0002,

0xfdd0,	// (0x0005fd03) vkb2_top_entry_pane_t_ParamLimits

0xfdd0,	// (0x0005fd03) vkb2_top_entry_pane_t

0xc0bb,	// (0x0005bfee) vkb2_top_grid_right_pane_g1_ParamLimits

0xc0bb,	// (0x0005bfee) vkb2_top_grid_right_pane_g1

0x1dd0,	// (0x00051d03) vkb2_top_grid_right_pane_g2_ParamLimits

0x1dd0,	// (0x00051d03) vkb2_top_grid_right_pane_g2

0x1de8,	// (0x00051d1b) vkb2_top_grid_right_pane_g3_ParamLimits

0x1de8,	// (0x00051d1b) vkb2_top_grid_right_pane_g3

0xc0d1,	// (0x0005c004) vkb2_top_grid_right_pane_g4_ParamLimits

0xc0d1,	// (0x0005c004) vkb2_top_grid_right_pane_g4

0x0003,

0xfdd7,	// (0x0005fd0a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdd7,	// (0x0005fd0a) vkb2_top_grid_right_pane_g

0x1e16,	// (0x00051d49) vkb2_top_cell_left_pane_g1

0x1e2d,	// (0x00051d60) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e2d,	// (0x00051d60) vkb2_cell_keypad_pane_g1

0x9073,	// (0x00058fa6) vkb2_cell_keypad_pane_t1_ParamLimits

0x9073,	// (0x00058fa6) vkb2_cell_keypad_pane_t1

0x1e51,	// (0x00051d84) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e51,	// (0x00051d84) vkb2_cell_bottom_grid_pane

0x1e8a,	// (0x00051dbd) vkb2_cell_bottom_grid_pane_g1

0xe400,	// (0x0005e333) aid_call2_pane_cp02

0xe408,	// (0x0005e33b) aid_call_pane_cp02

0xe410,	// (0x0005e343) clock_digital_number_pane_cp10

0xe418,	// (0x0005e34b) clock_digital_number_pane_cp11

0xe420,	// (0x0005e353) clock_digital_number_pane_cp12

0xe428,	// (0x0005e35b) clock_digital_number_pane_cp13

0xe430,	// (0x0005e363) clock_digital_separator_pane_cp10

0x3646,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g1

0x3646,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g2

0xe438,	// (0x0005e36b) popup_clock_digital_analogue_window_cp2_g3

0x3646,	// (0x00053579) popup_clock_digital_analogue_window_cp2_g4

0xe438,	// (0x0005e36b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd8c,	// (0x0005fcbf) popup_clock_digital_analogue_window_cp2_g

0xe440,	// (0x0005e373) popup_clock_digital_analogue_window_cp2_t1

0xe44e,	// (0x0005e381) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd97,	// (0x0005fcca) popup_clock_digital_analogue_window_cp2_t

0x713e,	// (0x00057071) clock_digital_number_pane_cp10_g1

0x713e,	// (0x00057071) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0005faa6) clock_digital_number_pane_cp10_g

0x713e,	// (0x00057071) clock_digital_separator_pane_cp10_g1

0x713e,	// (0x00057071) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0005faa6) clock_digital_separator_pane_cp10_g

0x8ae4,	// (0x00058a17) uniindi_top_pane_g3

0x8af5,	// (0x00058a28) uniindi_top_pane_g4

0x1c4e,	// (0x00051b81) vkb2_row_keypad_pane_ParamLimits

0x1c4e,	// (0x00051b81) vkb2_row_keypad_pane

0x1ea6,	// (0x00051dd9) vkb2_cell_t_keypad_pane_ParamLimits

0x1ea6,	// (0x00051dd9) vkb2_cell_t_keypad_pane

0x1eb6,	// (0x00051de9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1eb6,	// (0x00051de9) vkb2_cell_t_keypad_pane_cp08

0x1ecb,	// (0x00051dfe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1ecb,	// (0x00051dfe) vkb2_cell_t_keypad_pane_cp09

0x1edf,	// (0x00051e12) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1edf,	// (0x00051e12) vkb2_cell_t_keypad_pane_cp01

0x1ef0,	// (0x00051e23) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1ef0,	// (0x00051e23) vkb2_cell_t_keypad_pane_cp02

0x1f01,	// (0x00051e34) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f01,	// (0x00051e34) vkb2_cell_t_keypad_pane_cp03

0x1f12,	// (0x00051e45) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f12,	// (0x00051e45) vkb2_cell_t_keypad_pane_cp04

0x1f23,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f23,	// (0x00051e56) vkb2_cell_t_keypad_pane_cp05

0x1f34,	// (0x00051e67) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f34,	// (0x00051e67) vkb2_cell_t_keypad_pane_cp06

0x1f47,	// (0x00051e7a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f47,	// (0x00051e7a) vkb2_cell_t_keypad_pane_cp07

0x1f5c,	// (0x00051e8f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f5c,	// (0x00051e8f) vkb2_cell_t_keypad_pane_cp10

0x16ff,	// (0x00051632) vkb2_cell_t_keypad_pane_g1

0x908a,	// (0x00058fbd) vkb2_cell_t_keypad_pane_t1

0xf328,	// (0x0005f25b) popup_grid_graphic2_window

0xe7b5,	// (0x0005e6e8) aid_size_cell_graphic2_ParamLimits

0xe7b5,	// (0x0005e6e8) aid_size_cell_graphic2

0x516f,	// (0x000550a2) bg_popup_window_pane_cp21_ParamLimits

0x516f,	// (0x000550a2) bg_popup_window_pane_cp21

0xe7e7,	// (0x0005e71a) graphic2_pages_pane_ParamLimits

0xe7e7,	// (0x0005e71a) graphic2_pages_pane

0xe83f,	// (0x0005e772) grid_graphic2_control_pane_ParamLimits

0xe83f,	// (0x0005e772) grid_graphic2_control_pane

0xe873,	// (0x0005e7a6) grid_graphic2_pane_ParamLimits

0xe873,	// (0x0005e7a6) grid_graphic2_pane

0xe8ea,	// (0x0005e81d) cell_graphic2_pane

0x2161,	// (0x00052094) main_comp_mode_pane

0x8334,	// (0x00058267) list_ai3_gene_pane_ParamLimits

0xe13b,	// (0x0005e06e) bg_popup_window_pane_cp19_ParamLimits

0x8708,	// (0x0005863b) bg_touch_area_indi_pane_ParamLimits

0x8708,	// (0x0005863b) bg_touch_area_indi_pane

0x871e,	// (0x00058651) bg_touch_area_indi_pane_cp01_ParamLimits

0x871e,	// (0x00058651) bg_touch_area_indi_pane_cp01

0x8736,	// (0x00058669) bg_touch_area_indi_pane_cp02_ParamLimits

0x8736,	// (0x00058669) bg_touch_area_indi_pane_cp02

0x8750,	// (0x00058683) bg_touch_area_indi_pane_cp03_ParamLimits

0x8750,	// (0x00058683) bg_touch_area_indi_pane_cp03

0x876a,	// (0x0005869d) popup_slider_window_g1_ParamLimits

0x8786,	// (0x000586b9) popup_slider_window_g2_ParamLimits

0x87a2,	// (0x000586d5) popup_slider_window_g3_ParamLimits

0xfd21,	// (0x0005fc54) popup_slider_window_g_ParamLimits

0x87fe,	// (0x00058731) popup_slider_window_t1_ParamLimits

0x8872,	// (0x000587a5) small_volume_slider_vertical_pane_ParamLimits

0xe8ea,	// (0x0005e81d) cell_graphic2_pane_ParamLimits

0xe94d,	// (0x0005e880) bg_button_pane_cp10_ParamLimits

0xe94d,	// (0x0005e880) bg_button_pane_cp10

0xe960,	// (0x0005e893) bg_button_pane_cp11_ParamLimits

0xe960,	// (0x0005e893) bg_button_pane_cp11

0xe973,	// (0x0005e8a6) graphic2_pages_pane_g1_ParamLimits

0xe973,	// (0x0005e8a6) graphic2_pages_pane_g1

0xe98e,	// (0x0005e8c1) graphic2_pages_pane_g2_ParamLimits

0xe98e,	// (0x0005e8c1) graphic2_pages_pane_g2

0x0001,

0xfde5,	// (0x0005fd18) graphic2_pages_pane_g_ParamLimits

0xfde5,	// (0x0005fd18) graphic2_pages_pane_g

0xe9a6,	// (0x0005e8d9) graphic2_pages_pane_t1_ParamLimits

0xe9a6,	// (0x0005e8d9) graphic2_pages_pane_t1

0xe9be,	// (0x0005e8f1) cell_graphic2_control_pane_ParamLimits

0xe9be,	// (0x0005e8f1) cell_graphic2_control_pane

0xe9d8,	// (0x0005e90b) cell_graphic2_pane_g1_ParamLimits

0xe9d8,	// (0x0005e90b) cell_graphic2_pane_g1

0xe482,	// (0x0005e3b5) cell_graphic2_pane_g2_ParamLimits

0xe482,	// (0x0005e3b5) cell_graphic2_pane_g2

0xe49c,	// (0x0005e3cf) cell_graphic2_pane_g3_ParamLimits

0xe49c,	// (0x0005e3cf) cell_graphic2_pane_g3

0xe48f,	// (0x0005e3c2) cell_graphic2_pane_g4_ParamLimits

0xe48f,	// (0x0005e3c2) cell_graphic2_pane_g4

0xe9e5,	// (0x0005e918) cell_graphic2_pane_g5_ParamLimits

0xe9e5,	// (0x0005e918) cell_graphic2_pane_g5

0x0004,

0xfdea,	// (0x0005fd1d) cell_graphic2_pane_g_ParamLimits

0xfdea,	// (0x0005fd1d) cell_graphic2_pane_g

0xea05,	// (0x0005e938) cell_graphic2_pane_t1_ParamLimits

0xea05,	// (0x0005e938) cell_graphic2_pane_t1

0x57e6,	// (0x00055719) grid_highlight_pane_cp11_ParamLimits

0x57e6,	// (0x00055719) grid_highlight_pane_cp11

0x2fd6,	// (0x00052f09) bg_button_pane_cp05

0xea1c,	// (0x0005e94f) cell_graphic2_control_pane_g1

0x713e,	// (0x00057071) bg_touch_area_indi_pane_g1

0x92f2,	// (0x00059225) aid_cmod_rocker_key_size

0x92fc,	// (0x0005922f) aid_cmode_itu_key_size

0x9306,	// (0x00059239) main_cmode_video_pane

0x9310,	// (0x00059243) main_comp_mode_itu_pane

0x931c,	// (0x0005924f) main_comp_mode_rocker_pane

0x9328,	// (0x0005925b) cell_cmode_rocker_pane_ParamLimits

0x9328,	// (0x0005925b) cell_cmode_rocker_pane

0x933c,	// (0x0005926f) cell_cmode_itu_pane_ParamLimits

0x933c,	// (0x0005926f) cell_cmode_itu_pane

0x2fd6,	// (0x00052f09) bg_button_pane_cp06_ParamLimits

0x2fd6,	// (0x00052f09) bg_button_pane_cp06

0x73d6,	// (0x00057309) cell_cmode_rocker_pane_g1_ParamLimits

0x73d6,	// (0x00057309) cell_cmode_rocker_pane_g1

0x8919,	// (0x0005884c) cell_cmode_rocker_pane_g2_ParamLimits

0x8919,	// (0x0005884c) cell_cmode_rocker_pane_g2

0x0001,

0xfdf5,	// (0x0005fd28) cell_cmode_rocker_pane_g_ParamLimits

0xfdf5,	// (0x0005fd28) cell_cmode_rocker_pane_g

0x2161,	// (0x00052094) bg_button_pane_cp07

0x9353,	// (0x00059286) cell_cmode_itu_pane_g1

0x935c,	// (0x0005928f) cell_cmode_itu_pane_t1

0x936a,	// (0x0005929d) cell_cmode_itu_pane_t2

0x0001,

0xfdfa,	// (0x0005fd2d) cell_cmode_itu_pane_t

0x8b68,	// (0x00058a9b) aid_touch_ctrl_left

0x8b70,	// (0x00058aa3) aid_touch_ctrl_right

0x2161,	// (0x00052094) compa_mode_pane

0xea29,	// (0x0005e95c) aid_cmod_rocker_key_size_cp

0xea33,	// (0x0005e966) aid_cmode_itu_key_size_cp

0x938c,	// (0x000592bf) compa_mode_pane_g1

0x9394,	// (0x000592c7) compa_mode_pane_g2

0x939c,	// (0x000592cf) compa_mode_pane_g3

0x0002,

0xfdff,	// (0x0005fd32) compa_mode_pane_g

0xea3d,	// (0x0005e970) main_comp_mode_itu_pane_cp

0xea45,	// (0x0005e978) main_comp_mode_rocker_pane_cp

0xea4d,	// (0x0005e980) cell_cmode_itu_pane_cp_ParamLimits

0xea4d,	// (0x0005e980) cell_cmode_itu_pane_cp

0xea62,	// (0x0005e995) cell_cmode_rocker_pane_cp_ParamLimits

0xea62,	// (0x0005e995) cell_cmode_rocker_pane_cp

0x2fd6,	// (0x00052f09) bg_button_pane_cp06_cp_ParamLimits

0x2fd6,	// (0x00052f09) bg_button_pane_cp06_cp

0x73d6,	// (0x00057309) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x73d6,	// (0x00057309) cell_cmode_rocker_pane_g1_cp

0x713e,	// (0x00057071) cell_cmode_rocker_pane_g2_cp

0x2161,	// (0x00052094) bg_button_pane_cp07_cp

0xea74,	// (0x0005e9a7) cell_cmode_itu_pane_g1_cp

0xea7d,	// (0x0005e9b0) cell_cmode_itu_pane_t1_cp

0xea7d,	// (0x0005e9b0) cell_cmode_itu_pane_t2_cp

0xd74c,	// (0x0005d67f) settings_code_pane_cp2

0x2255,	// (0x00052188) bg_popup_window_pane_cp3_ParamLimits

0x26cd,	// (0x00052600) heading_pane_cp3_ParamLimits

0x26d9,	// (0x0005260c) listscroll_popup_graphic_pane_ParamLimits

0x1492,	// (0x000513c5) fep_hwr_aid_pane_ParamLimits

0x1925,	// (0x00051858) aid_touch_sctrl_top_ParamLimits

0x1940,	// (0x00051873) sctrl_sk_top_pane_g1_ParamLimits

0x16ff,	// (0x00051632) sctrl_sk_top_pane_g2_ParamLimits

0xfd3a,	// (0x0005fc6d) sctrl_sk_top_pane_g_ParamLimits

0x194d,	// (0x00051880) sctrl_sk_top_pane_t1_ParamLimits

0x1925,	// (0x00051858) aid_touch_sctrl_bottom_ParamLimits

0x194d,	// (0x00051880) sctrl_sk_bottom_pane_t1_ParamLimits

0x8aae,	// (0x000589e1) aid_area_touch_clock

0xbeff,	// (0x0005be32) aid_vkb2_area_top_pane_cell_ParamLimits

0xbeff,	// (0x0005be32) aid_vkb2_area_top_pane_cell

0xbfaa,	// (0x0005bedd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbfaa,	// (0x0005bedd) aid_vkb2_area_bottom_pane_cell

0x9017,	// (0x00058f4a) popup_char_count_window

0x93f2,	// (0x00059325) popup_char_count_window_g1

0x93fb,	// (0x0005932e) popup_char_count_window_g2

0x9404,	// (0x00059337) popup_char_count_window_g3

0x0002,

0xfe06,	// (0x0005fd39) popup_char_count_window_g

0x940d,	// (0x00059340) popup_char_count_window_t1

0x19fa,	// (0x0005192d) popup_fep_char_preview_window_ParamLimits

0x19fa,	// (0x0005192d) popup_fep_char_preview_window

0xbf1f,	// (0x0005be52) vkb2_top_candi_pane_ParamLimits

0xbf1f,	// (0x0005be52) vkb2_top_candi_pane

0xea8b,	// (0x0005e9be) cell_vkb2_top_candi_pane_ParamLimits

0xea8b,	// (0x0005e9be) cell_vkb2_top_candi_pane

0x1f71,	// (0x00051ea4) bg_popup_fep_char_preview_window_ParamLimits

0x1f71,	// (0x00051ea4) bg_popup_fep_char_preview_window

0x1f7f,	// (0x00051eb2) popup_fep_char_preview_window_t1_ParamLimits

0x1f7f,	// (0x00051eb2) popup_fep_char_preview_window_t1

0x946c,	// (0x0005939f) bg_popup_fep_char_preview_window_g1

0x9474,	// (0x000593a7) bg_popup_fep_char_preview_window_g2

0x947c,	// (0x000593af) bg_popup_fep_char_preview_window_g3

0x9484,	// (0x000593b7) bg_popup_fep_char_preview_window_g4

0x948c,	// (0x000593bf) bg_popup_fep_char_preview_window_g5

0x1fb9,	// (0x00051eec) bg_popup_fep_char_preview_window_g6

0x9494,	// (0x000593c7) bg_popup_fep_char_preview_window_g7

0x949c,	// (0x000593cf) bg_popup_fep_char_preview_window_g8

0x94a4,	// (0x000593d7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe0d,	// (0x0005fd40) bg_popup_fep_char_preview_window_g

0x16ff,	// (0x00051632) cell_vkb2_top_candi_pane_g1_ParamLimits

0x16ff,	// (0x00051632) cell_vkb2_top_candi_pane_g1

0x170d,	// (0x00051640) cell_vkb2_top_candi_pane_g2_ParamLimits

0x170d,	// (0x00051640) cell_vkb2_top_candi_pane_g2

0x8a74,	// (0x000589a7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8a74,	// (0x000589a7) cell_vkb2_top_candi_pane_g3

0x1fc1,	// (0x00051ef4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1fc1,	// (0x00051ef4) cell_vkb2_top_candi_pane_g4

0x78d5,	// (0x00057808) cell_vkb2_top_candi_pane_g5_ParamLimits

0x78d5,	// (0x00057808) cell_vkb2_top_candi_pane_g5

0x1fe2,	// (0x00051f15) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1fe2,	// (0x00051f15) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe20,	// (0x0005fd53) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe20,	// (0x0005fd53) cell_vkb2_top_candi_pane_g

0x1ff0,	// (0x00051f23) cell_vkb2_top_candi_pane_t1

0x10b8,	// (0x00050feb) aid_size_touch_slider_mark_ParamLimits

0x10b8,	// (0x00050feb) aid_size_touch_slider_mark

0xe823,	// (0x0005e756) grid_graphic2_catg_pane_ParamLimits

0xe823,	// (0x0005e756) grid_graphic2_catg_pane

0xe8b9,	// (0x0005e7ec) popup_grid_graphic2_window_t1_ParamLimits

0xe8b9,	// (0x0005e7ec) popup_grid_graphic2_window_t1

0xe8cf,	// (0x0005e802) popup_grid_graphic2_window_t2_ParamLimits

0xe8cf,	// (0x0005e802) popup_grid_graphic2_window_t2

0x0001,

0xfde0,	// (0x0005fd13) popup_grid_graphic2_window_t_ParamLimits

0xfde0,	// (0x0005fd13) popup_grid_graphic2_window_t

0x2fd6,	// (0x00052f09) bg_button_pane_cp05_ParamLimits

0xea1c,	// (0x0005e94f) cell_graphic2_control_pane_g1_ParamLimits

0xeadf,	// (0x0005ea12) cell_graphic2_catg_pane_ParamLimits

0xeadf,	// (0x0005ea12) cell_graphic2_catg_pane

0x2161,	// (0x00052094) bg_button_pane_cp12

0xeaf1,	// (0x0005ea24) cell_graphic2_catg_pane_g1

0x8a59,	// (0x0005898c) cell_tb_ext_pane_t1_ParamLimits

0x1d8d,	// (0x00051cc0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1d8d,	// (0x00051cc0) vkb2_top_cell_right_narrow_pane

0x1da5,	// (0x00051cd8) vkb2_top_cell_right_wide_pane_ParamLimits

0x1da5,	// (0x00051cd8) vkb2_top_cell_right_wide_pane

0x1484,	// (0x000513b7) bg_vkb2_func_pane_ParamLimits

0x1484,	// (0x000513b7) bg_vkb2_func_pane

0x1e16,	// (0x00051d49) vkb2_top_cell_left_pane_g1_ParamLimits

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp03

0x1e8a,	// (0x00051dbd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4b02,	// (0x00054a35) bg_vkb2_func_pane_g1

0x4b0a,	// (0x00054a3d) bg_vkb2_func_pane_g2

0x4b1a,	// (0x00054a4d) bg_vkb2_func_pane_g3

0x4b12,	// (0x00054a45) bg_vkb2_func_pane_g4

0x4b22,	// (0x00054a55) bg_vkb2_func_pane_g5

0x4b2a,	// (0x00054a5d) bg_vkb2_func_pane_g6

0x4b32,	// (0x00054a65) bg_vkb2_func_pane_g7

0x4b3a,	// (0x00054a6d) bg_vkb2_func_pane_g8

0x4afa,	// (0x00054a2d) bg_vkb2_func_pane_g9

0x0008,

0xfe2d,	// (0x0005fd60) bg_vkb2_func_pane_g

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp01

0x1e16,	// (0x00051d49) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e16,	// (0x00051d49) vkb2_top_cell_right_wide_pane_g1

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1484,	// (0x000513b7) bg_vkb2_fuc_pane_cp02

0x1e8a,	// (0x00051dbd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1e8a,	// (0x00051dbd) vkb2_top_cell_right_narrow_pane_g1

0xe075,	// (0x0005dfa8) aid_touch_area_decrease_ParamLimits

0xe075,	// (0x0005dfa8) aid_touch_area_decrease

0xe0af,	// (0x0005dfe2) aid_touch_area_increase_ParamLimits

0xe0af,	// (0x0005dfe2) aid_touch_area_increase

0xe0d7,	// (0x0005e00a) aid_touch_area_mute_ParamLimits

0xe0d7,	// (0x0005e00a) aid_touch_area_mute

0xe107,	// (0x0005e03a) aid_touch_area_slider_ParamLimits

0xe107,	// (0x0005e03a) aid_touch_area_slider

0xe147,	// (0x0005e07a) popup_slider_window_g4_ParamLimits

0xe147,	// (0x0005e07a) popup_slider_window_g4

0xe16f,	// (0x0005e0a2) popup_slider_window_g5_ParamLimits

0xe16f,	// (0x0005e0a2) popup_slider_window_g5

0xe1a3,	// (0x0005e0d6) popup_slider_window_g6_ParamLimits

0xe1a3,	// (0x0005e0d6) popup_slider_window_g6

0x882c,	// (0x0005875f) popup_slider_window_t2_ParamLimits

0x882c,	// (0x0005875f) popup_slider_window_t2

0x0001,

0xfd2e,	// (0x0005fc61) popup_slider_window_t_ParamLimits

0xfd2e,	// (0x0005fc61) popup_slider_window_t

0xe1bf,	// (0x0005e0f2) slider_pane_ParamLimits

0xe1bf,	// (0x0005e0f2) slider_pane

0x94c7,	// (0x000593fa) slider_pane_g1_ParamLimits

0x94c7,	// (0x000593fa) slider_pane_g1

0x94db,	// (0x0005940e) slider_pane_g2_ParamLimits

0x94db,	// (0x0005940e) slider_pane_g2

0x94f1,	// (0x00059424) slider_pane_g3_ParamLimits

0x94f1,	// (0x00059424) slider_pane_g3

0x0003,

0xfe40,	// (0x0005fd73) slider_pane_g_ParamLimits

0xfe40,	// (0x0005fd73) slider_pane_g

0xce81,	// (0x0005cdb4) popup_tb_float_extension_window_ParamLimits

0xce81,	// (0x0005cdb4) popup_tb_float_extension_window

0x951d,	// (0x00059450) aid_size_cell_tb_float_ext

0x2161,	// (0x00052094) bg_popup_sub_window_cp28

0x9529,	// (0x0005945c) grid_tb_float_ext_pane

0x9535,	// (0x00059468) cell_tb_float_ext_pane_ParamLimits

0x9535,	// (0x00059468) cell_tb_float_ext_pane

0x9551,	// (0x00059484) cell_tb_float_ext_pane_g1

0x955a,	// (0x0005948d) grid_highlight_pane_cp12

0xbbc5,	// (0x0005baf8) cell_last_hwr_side_pane_ParamLimits

0xbbc5,	// (0x0005baf8) cell_last_hwr_side_pane

0x713e,	// (0x00057071) cell_last_hwr_side_pane_g1

0x9563,	// (0x00059496) cell_last_hwr_side_pane_g2

0x0001,

0xfe49,	// (0x0005fd7c) cell_last_hwr_side_pane_g

0xc086,	// (0x0005bfb9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc086,	// (0x0005bfb9) vkb2_area_bottom_space_btn_pane

0x16ff,	// (0x00051632) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x908a,	// (0x00058fbd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ff0,	// (0x00051f23) cell_vkb2_top_candi_pane_t1_ParamLimits

0x200e,	// (0x00051f41) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x200e,	// (0x00051f41) vkb2_area_bottom_space_btn_pane_g1

0x2048,	// (0x00051f7b) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2048,	// (0x00051f7b) vkb2_area_bottom_space_btn_pane_g2

0x207e,	// (0x00051fb1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x207e,	// (0x00051fb1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe4e,	// (0x0005fd81) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe4e,	// (0x0005fd81) vkb2_area_bottom_space_btn_pane_g

0x1549,	// (0x0005147c) cel_fep_hwr_func_pane_ParamLimits

0x1549,	// (0x0005147c) cel_fep_hwr_func_pane

0xbb9a,	// (0x0005bacd) cell_hwr_side_button_pane_ParamLimits

0xbb9a,	// (0x0005bacd) cell_hwr_side_button_pane

0x8aae,	// (0x000589e1) aid_area_touch_clock_ParamLimits

0x24df,	// (0x00052412) bg_uniindi_top_pane_ParamLimits

0x8ac2,	// (0x000589f5) uniindi_top_pane_g1_ParamLimits

0x8ad8,	// (0x00058a0b) uniindi_top_pane_g2_ParamLimits

0x8ae4,	// (0x00058a17) uniindi_top_pane_g3_ParamLimits

0x8af5,	// (0x00058a28) uniindi_top_pane_g4_ParamLimits

0xfd66,	// (0x0005fc99) uniindi_top_pane_g_ParamLimits

0x8b02,	// (0x00058a35) uniindi_top_pane_t1_ParamLimits

0x24df,	// (0x00052412) bg_vkb2_func_pane_cp01_ParamLimits

0x24df,	// (0x00052412) bg_vkb2_func_pane_cp01

0x956c,	// (0x0005949f) cel_fep_hwr_func_pane_g1_ParamLimits

0x956c,	// (0x0005949f) cel_fep_hwr_func_pane_g1

0x24df,	// (0x00052412) bg_vkb2_func_pane_cp02_ParamLimits

0x24df,	// (0x00052412) bg_vkb2_func_pane_cp02

0x956c,	// (0x0005949f) cell_hwr_side_button_pane_g1_ParamLimits

0x956c,	// (0x0005949f) cell_hwr_side_button_pane_g1

0x497b,	// (0x000548ae) status_pane_g4_ParamLimits

0x497b,	// (0x000548ae) status_pane_g4

0x4995,	// (0x000548c8) status_pane_t1

0x6eda,	// (0x00056e0d) form2_midp_gauge_slider_cont_pane

0x6ee2,	// (0x00056e15) form2_midp_gauge_slider_pane_t1_ParamLimits

0xda07,	// (0x0005d93a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xda19,	// (0x0005d94c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0005fa59) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f18,	// (0x00056e4b) form2_midp_slider_pane_ParamLimits

0x19c2,	// (0x000518f5) aid_size_cell_func_vkb2_ParamLimits

0x19c2,	// (0x000518f5) aid_size_cell_func_vkb2

0x9509,	// (0x0005943c) slider_pane_g4_ParamLimits

0x9509,	// (0x0005943c) slider_pane_g4

0xc0e7,	// (0x0005c01a) form2_midp_gauge_slider_pane_t2_cp01

0xc0f5,	// (0x0005c028) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc0f5,	// (0x0005c028) form2_midp_gauge_slider_pane_t3_cp01

0x20f3,	// (0x00052026) form2_midp_slider_pane_cp01

0x2161,	// (0x00052094) navi_smil_pane

0x95a5,	// (0x000594d8) navi_smil_pane_g1

0x95ad,	// (0x000594e0) navi_smil_pane_t1

0x957a,	// (0x000594ad) form2_midp_slider_pane_g1

0x9583,	// (0x000594b6) form2_midp_slider_pane_g2

0x958b,	// (0x000594be) form2_midp_slider_pane_g3

0x957a,	// (0x000594ad) form2_midp_slider_pane_g4

0xeafa,	// (0x0005ea2d) form2_midp_slider_pane_g5

0x0004,

0xfe57,	// (0x0005fd8a) form2_midp_slider_pane_g

0x20b8,	// (0x00051feb) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20b8,	// (0x00051feb) vkb2_area_bottom_space_btn_pane_g4

0xd061,	// (0x0005cf94) lc0_navi_pane_ParamLimits

0xd061,	// (0x0005cf94) lc0_navi_pane

0xd0d1,	// (0x0005d004) lc0_stat_indi_pane_ParamLimits

0xd0d1,	// (0x0005d004) lc0_stat_indi_pane

0xd0e6,	// (0x0005d019) ls0_title_pane_ParamLimits

0xd0e6,	// (0x0005d019) ls0_title_pane

0x2fd6,	// (0x00052f09) bg_popup_sub_pane_cp14_ParamLimits

0x8a95,	// (0x000589c8) list_uniindi_pane_ParamLimits

0x8aa1,	// (0x000589d4) uniindi_top_pane_ParamLimits

0x8b40,	// (0x00058a73) list_single_uniindi_pane_g1_ParamLimits

0x8b53,	// (0x00058a86) list_single_uniindi_pane_t1_ParamLimits

0xc112,	// (0x0005c045) lc0_stat_clock_pane_ParamLimits

0xc112,	// (0x0005c045) lc0_stat_clock_pane

0xeb03,	// (0x0005ea36) lc0_stat_indi_pane_g1_ParamLimits

0xeb03,	// (0x0005ea36) lc0_stat_indi_pane_g1

0xeb10,	// (0x0005ea43) lc0_stat_indi_pane_g2_ParamLimits

0xeb10,	// (0x0005ea43) lc0_stat_indi_pane_g2

0x0001,

0xfe62,	// (0x0005fd95) lc0_stat_indi_pane_g_ParamLimits

0xfe62,	// (0x0005fd95) lc0_stat_indi_pane_g

0xc11f,	// (0x0005c052) lc0_uni_indicator_pane_ParamLimits

0xc11f,	// (0x0005c052) lc0_uni_indicator_pane

0xeb1d,	// (0x0005ea50) ls0_title_pane_g1_ParamLimits

0xeb1d,	// (0x0005ea50) ls0_title_pane_g1

0xeb31,	// (0x0005ea64) ls0_title_pane_t1_ParamLimits

0xeb31,	// (0x0005ea64) ls0_title_pane_t1

0xc12c,	// (0x0005c05f) lc0_uni_indicator_pane_g1_ParamLimits

0xc12c,	// (0x0005c05f) lc0_uni_indicator_pane_g1

0x961f,	// (0x00059552) lc0_stat_clock_pane_t1

0x2161,	// (0x00052094) main_ai5_pane

0x962d,	// (0x00059560) ai5_sk_pane_ParamLimits

0x962d,	// (0x00059560) ai5_sk_pane

0xeb5f,	// (0x0005ea92) cell_ai5_widget_pane_ParamLimits

0xeb5f,	// (0x0005ea92) cell_ai5_widget_pane

0x96b0,	// (0x000595e3) aid_size_cell_widget_grid

0x96c4,	// (0x000595f7) bg_ai5_widget_pane_ParamLimits

0x96c4,	// (0x000595f7) bg_ai5_widget_pane

0xebec,	// (0x0005eb1f) cell_ai5_widget_pane_g2

0xebfc,	// (0x0005eb2f) cell_ai5_widget_pane_g3

0xec10,	// (0x0005eb43) cell_ai5_widget_pane_g4

0xec1c,	// (0x0005eb4f) cell_ai5_widget_pane_g5

0xec28,	// (0x0005eb5b) cell_ai5_widget_pane_g6

0xec34,	// (0x0005eb67) cell_ai5_widget_pane_g7

0xec7c,	// (0x0005ebaf) cell_ai5_widget_pane_t1_ParamLimits

0xec7c,	// (0x0005ebaf) cell_ai5_widget_pane_t1

0xec99,	// (0x0005ebcc) cell_ai5_widget_pane_t2_ParamLimits

0xec99,	// (0x0005ebcc) cell_ai5_widget_pane_t2

0xecb1,	// (0x0005ebe4) cell_ai5_widget_pane_t3_ParamLimits

0xecb1,	// (0x0005ebe4) cell_ai5_widget_pane_t3

0xecc9,	// (0x0005ebfc) cell_ai5_widget_pane_t4_ParamLimits

0xecc9,	// (0x0005ebfc) cell_ai5_widget_pane_t4

0xece3,	// (0x0005ec16) cell_ai5_widget_pane_t5_ParamLimits

0xece3,	// (0x0005ec16) cell_ai5_widget_pane_t5

0x9804,	// (0x00059737) cell_ai5_widget_pane_t6_ParamLimits

0x9804,	// (0x00059737) cell_ai5_widget_pane_t6

0x9816,	// (0x00059749) cell_ai5_widget_pane_t7_ParamLimits

0x9816,	// (0x00059749) cell_ai5_widget_pane_t7

0xed02,	// (0x0005ec35) cell_ai5_widget_pane_t8_ParamLimits

0xed02,	// (0x0005ec35) cell_ai5_widget_pane_t8

0x0009,

0xfe7c,	// (0x0005fdaf) cell_ai5_widget_pane_t_ParamLimits

0xfe7c,	// (0x0005fdaf) cell_ai5_widget_pane_t

0xed4a,	// (0x0005ec7d) grid_ai5_widget_pane

0x2fd6,	// (0x00052f09) highlight_cell_ai5_widget_pane_ParamLimits

0x2fd6,	// (0x00052f09) highlight_cell_ai5_widget_pane

0xed61,	// (0x0005ec94) ai5_sk_left_pane

0xed6b,	// (0x0005ec9e) ai5_sk_middle_pane

0xed75,	// (0x0005eca8) ai5_sk_right_pane

0x98ac,	// (0x000597df) bg_ai5_widget_pane_g1_ParamLimits

0x98ac,	// (0x000597df) bg_ai5_widget_pane_g1

0x98b8,	// (0x000597eb) bg_ai5_widget_pane_g2_ParamLimits

0x98b8,	// (0x000597eb) bg_ai5_widget_pane_g2

0x98c4,	// (0x000597f7) bg_ai5_widget_pane_g3_ParamLimits

0x98c4,	// (0x000597f7) bg_ai5_widget_pane_g3

0x98d0,	// (0x00059803) bg_ai5_widget_pane_g4_ParamLimits

0x98d0,	// (0x00059803) bg_ai5_widget_pane_g4

0x98dc,	// (0x0005980f) bg_ai5_widget_pane_g5_ParamLimits

0x98dc,	// (0x0005980f) bg_ai5_widget_pane_g5

0x98e8,	// (0x0005981b) bg_ai5_widget_pane_g6_ParamLimits

0x98e8,	// (0x0005981b) bg_ai5_widget_pane_g6

0x98f4,	// (0x00059827) bg_ai5_widget_pane_g7_ParamLimits

0x98f4,	// (0x00059827) bg_ai5_widget_pane_g7

0x9900,	// (0x00059833) bg_ai5_widget_pane_g8_ParamLimits

0x9900,	// (0x00059833) bg_ai5_widget_pane_g8

0x990c,	// (0x0005983f) bg_ai5_widget_pane_g9_ParamLimits

0x990c,	// (0x0005983f) bg_ai5_widget_pane_g9

0x0008,

0xfe91,	// (0x0005fdc4) bg_ai5_widget_pane_g_ParamLimits

0xfe91,	// (0x0005fdc4) bg_ai5_widget_pane_g

0x9931,	// (0x00059864) cell_shortcut_ai5_widget_pane_ParamLimits

0x9931,	// (0x00059864) cell_shortcut_ai5_widget_pane

0x2321,	// (0x00052254) bg_cell_shortcut_ai5_widget_pane

0x9943,	// (0x00059876) cell_grid_ai5_widget_pane_g1

0x994c,	// (0x0005987f) highlight_cell_shortcut_ai5_widget_pane

0x4b02,	// (0x00054a35) ai5_sk_left_pane_g1

0x9954,	// (0x00059887) ai5_sk_left_pane_g2

0x995c,	// (0x0005988f) ai5_sk_left_pane_g3

0x9964,	// (0x00059897) ai5_sk_left_pane_g4

0x0003,

0xfea4,	// (0x0005fdd7) ai5_sk_left_pane_g

0x996c,	// (0x0005989f) ai5_sk_left_pane_t1

0x4b0a,	// (0x00054a3d) ai5_sk_right_pane_g1

0x997a,	// (0x000598ad) ai5_sk_right_pane_g2

0x9982,	// (0x000598b5) ai5_sk_right_pane_g3

0x998a,	// (0x000598bd) ai5_sk_right_pane_g4

0x0003,

0xfead,	// (0x0005fde0) ai5_sk_right_pane_g

0x9992,	// (0x000598c5) ai5_sk_right_pane_t1

0x4b0a,	// (0x00054a3d) ai5_sk_middle_pane_g1

0x4b02,	// (0x00054a35) ai5_sk_middle_pane_g2

0x4b22,	// (0x00054a55) ai5_sk_middle_pane_g3

0x9982,	// (0x000598b5) ai5_sk_middle_pane_g4

0x995c,	// (0x0005988f) ai5_sk_middle_pane_g5

0x99a0,	// (0x000598d3) ai5_sk_middle_pane_g6

0xed7f,	// (0x0005ecb2) ai5_sk_middle_pane_g7

0x0006,

0xfeb6,	// (0x0005fde9) ai5_sk_middle_pane_g

0xcf4b,	// (0x0005ce7e) aid_touch_area_size_lc0_ParamLimits

0xcf4b,	// (0x0005ce7e) aid_touch_area_size_lc0

0x172e,	// (0x00051661) cell_hwr_candidate_pane_t1_ParamLimits

0x4633,	// (0x00054566) aid_touch_navi_pane

0xd1f0,	// (0x0005d123) status_dt_navi_pane_ParamLimits

0xd1f0,	// (0x0005d123) status_dt_navi_pane

0xd208,	// (0x0005d13b) status_dt_sta_pane_ParamLimits

0xd208,	// (0x0005d13b) status_dt_sta_pane

0xed87,	// (0x0005ecba) dt_sta_controll_pane

0xed94,	// (0x0005ecc7) dt_sta_indi_pane

0xeda1,	// (0x0005ecd4) dt_sta_title_pane

0x24df,	// (0x00052412) bg_dt_sta_indi_pane_ParamLimits

0x24df,	// (0x00052412) bg_dt_sta_indi_pane

0xedb3,	// (0x0005ece6) dt_sta_battery_pane

0xedbb,	// (0x0005ecee) dt_sta_indi_pane_g1

0xedc4,	// (0x0005ecf7) dt_sta_indi_pane_g2

0xedcd,	// (0x0005ed00) dt_sta_indi_pane_g3

0x0002,

0xfec5,	// (0x0005fdf8) dt_sta_indi_pane_g

0xedd6,	// (0x0005ed09) dt_sta_signal_pane

0x2fd6,	// (0x00052f09) bg_dt_sta_title_pane_ParamLimits

0x2fd6,	// (0x00052f09) bg_dt_sta_title_pane

0xeddf,	// (0x0005ed12) dt_sta_title_pane_g1

0xede7,	// (0x0005ed1a) dt_sta_title_pane_t1_ParamLimits

0xede7,	// (0x0005ed1a) dt_sta_title_pane_t1

0x2161,	// (0x00052094) bg_dt_sta_control_pane

0xedfc,	// (0x0005ed2f) dt_sta_controll_pane_g1

0xee05,	// (0x0005ed38) bg_dt_sta_title_pane_g1

0xee0e,	// (0x0005ed41) bg_dt_sta_title_pane_g2

0xee17,	// (0x0005ed4a) bg_dt_sta_title_pane_g3

0x0002,

0xfecc,	// (0x0005fdff) bg_dt_sta_title_pane_g

0x713e,	// (0x00057071) bg_dt_sta_indi_pane_g1

0x9a4e,	// (0x00059981) dt_sta_signal_pane_g1

0x9a56,	// (0x00059989) dt_sta_signal_pane_g2

0x0001,

0xfed3,	// (0x0005fe06) dt_sta_signal_pane_g

0x9a5e,	// (0x00059991) dt_sta_battery_pane_g1

0x9a67,	// (0x0005999a) dt_sta_battery_pane_t1

0x713e,	// (0x00057071) bg_dt_sta_control_pane_g1

0x3732,	// (0x00053665) fep_china_uni_eep_pane

0x373a,	// (0x0005366d) fep_china_uni_entry_pane_ParamLimits

0x374a,	// (0x0005367d) popup_fep_china_uni_window_g1_ParamLimits

0x375a,	// (0x0005368d) popup_fep_china_uni_window_g2_ParamLimits

0x375a,	// (0x0005368d) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0005f695) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0005f695) popup_fep_china_uni_window_g

0x9a76,	// (0x000599a9) fep_china_uni_eep_pane_g1

0x9a7e,	// (0x000599b1) fep_china_uni_eep_pane_t1

0x959c,	// (0x000594cf) aid_touch_area_size_smil_player

0x478b,	// (0x000546be) lc0_clock_pane

0x4989,	// (0x000548bc) status_pane_g5_ParamLimits

0x4989,	// (0x000548bc) status_pane_g5

0xc90d,	// (0x0005c840) popup_keymap_window

0x4947,	// (0x0005487a) status_icon_pane

0xebfc,	// (0x0005eb2f) cell_ai5_widget_pane_g3_ParamLimits

0xec10,	// (0x0005eb43) cell_ai5_widget_pane_g4_ParamLimits

0xec1c,	// (0x0005eb4f) cell_ai5_widget_pane_g5_ParamLimits

0xec40,	// (0x0005eb73) cell_ai5_widget_pane_g8_ParamLimits

0xec40,	// (0x0005eb73) cell_ai5_widget_pane_g8

0xec54,	// (0x0005eb87) cell_ai5_widget_pane_g9_ParamLimits

0xec54,	// (0x0005eb87) cell_ai5_widget_pane_g9

0xec68,	// (0x0005eb9b) cell_ai5_widget_pane_g10_ParamLimits

0xec68,	// (0x0005eb9b) cell_ai5_widget_pane_g10

0x9a8d,	// (0x000599c0) status_icon_pane_g1

0x2161,	// (0x00052094) bg_popup_sub_pane_cp13

0x9a95,	// (0x000599c8) popup_keymap_window_t1

0xc6fd,	// (0x0005c630) control_pane_g6_ParamLimits

0xc6fd,	// (0x0005c630) control_pane_g6

0xc70a,	// (0x0005c63d) control_pane_g7_ParamLimits

0xc70a,	// (0x0005c63d) control_pane_g7

0xc717,	// (0x0005c64a) control_pane_g8_ParamLimits

0xc717,	// (0x0005c64a) control_pane_g8

0xed87,	// (0x0005ecba) dt_sta_controll_pane_ParamLimits

0xed94,	// (0x0005ecc7) dt_sta_indi_pane_ParamLimits

0xeda1,	// (0x0005ecd4) dt_sta_title_pane_ParamLimits

0x2f0e,	// (0x00052e41) aid_size_touch_scroll_bar_cale

0xf459,	// (0x0005f38c) popup_discreet_window_ParamLimits

0xf459,	// (0x0005f38c) popup_discreet_window

0xaf63,	// (0x0005ae96) popup_sk_window

0x516f,	// (0x000550a2) bg_popup_sub_pane_cp28_ParamLimits

0x516f,	// (0x000550a2) bg_popup_sub_pane_cp28

0x9aa3,	// (0x000599d6) popup_discreet_window_g1_ParamLimits

0x9aa3,	// (0x000599d6) popup_discreet_window_g1

0x9ac3,	// (0x000599f6) popup_discreet_window_t1_ParamLimits

0x9ac3,	// (0x000599f6) popup_discreet_window_t1

0x9ae1,	// (0x00059a14) popup_discreet_window_t2_ParamLimits

0x9ae1,	// (0x00059a14) popup_discreet_window_t2

0x0002,

0xfed8,	// (0x0005fe0b) popup_discreet_window_t_ParamLimits

0xfed8,	// (0x0005fe0b) popup_discreet_window_t

0x2129,	// (0x0005205c) popup_sk_window_g1

0x2133,	// (0x00052066) popup_sk_window_g2

0x0001,

0xfedf,	// (0x0005fe12) popup_sk_window_g

0x9b33,	// (0x00059a66) popup_sk_window_t1

0x9b41,	// (0x00059a74) popup_sk_window_t1_copy1

0xebec,	// (0x0005eb1f) cell_ai5_widget_pane_g2_ParamLimits

0xed14,	// (0x0005ec47) cell_ai5_widget_pane_t9_ParamLimits

0xed14,	// (0x0005ec47) cell_ai5_widget_pane_t9

0x2161,	// (0x00052094) main_fep_fshwr2_pane

0xee20,	// (0x0005ed53) aid_fshwr2_btn_pane

0xee28,	// (0x0005ed5b) aid_fshwr2_syb_pane

0xee30,	// (0x0005ed63) aid_fshwr2_txt_pane

0xee38,	// (0x0005ed6b) fshwr2_func_candi_pane

0xee42,	// (0x0005ed75) fshwr2_hwr_syb_pane

0xee4e,	// (0x0005ed81) fshwr2_icf_pane

0x2161,	// (0x00052094) fshwr2_icf_bg_pane

0xee58,	// (0x0005ed8b) fshwr2_icf_pane_t1_ParamLimits

0xee58,	// (0x0005ed8b) fshwr2_icf_pane_t1

0x713e,	// (0x00057071) fshwr2_func_candi_pane_g1

0x9bb4,	// (0x00059ae7) fshwr2_func_candi_row_pane_ParamLimits

0x9bb4,	// (0x00059ae7) fshwr2_func_candi_row_pane

0xee70,	// (0x0005eda3) cell_fshwr2_syb_pane_ParamLimits

0xee70,	// (0x0005eda3) cell_fshwr2_syb_pane

0x73d6,	// (0x00057309) fshwr2_hwr_syb_pane_g1_ParamLimits

0x73d6,	// (0x00057309) fshwr2_hwr_syb_pane_g1

0x2161,	// (0x00052094) bg_popup_call_pane_cp01

0x9bdf,	// (0x00059b12) fshwr2_func_candi_cell_pane_ParamLimits

0x9bdf,	// (0x00059b12) fshwr2_func_candi_cell_pane

0x9c11,	// (0x00059b44) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9c11,	// (0x00059b44) fshwr2_func_candi_cell_bg_pane

0x9c2b,	// (0x00059b5e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9c2b,	// (0x00059b5e) fshwr2_func_candi_cell_pane_g1

0x9c4b,	// (0x00059b7e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c4b,	// (0x00059b7e) fshwr2_func_candi_cell_pane_t1

0x2161,	// (0x00052094) bg_button_pane_cp08

0x3c40,	// (0x00053b73) cell_fshwr2_syb_bg_pane

0xee89,	// (0x0005edbc) cell_fshwr2_syb_bg_pane_g1

0xee91,	// (0x0005edc4) cell_fshwr2_syb_bg_pane_t1

0x2fd6,	// (0x00052f09) main_tmo_pane

0xd522,	// (0x0005d455) uni_indicator_pane_g1_ParamLimits

0xd537,	// (0x0005d46a) uni_indicator_pane_g2_ParamLimits

0xd54c,	// (0x0005d47f) uni_indicator_pane_g3_ParamLimits

0xd562,	// (0x0005d495) uni_indicator_pane_g4_ParamLimits

0xd562,	// (0x0005d495) uni_indicator_pane_g4

0xd576,	// (0x0005d4a9) uni_indicator_pane_g5_ParamLimits

0xd576,	// (0x0005d4a9) uni_indicator_pane_g5

0xd58a,	// (0x0005d4bd) uni_indicator_pane_g6_ParamLimits

0xd58a,	// (0x0005d4bd) uni_indicator_pane_g6

0xf95a,	// (0x0005f88d) uni_indicator_pane_g_ParamLimits

0xe045,	// (0x0005df78) popup_tmo_note_window_ParamLimits

0xe045,	// (0x0005df78) popup_tmo_note_window

0x2161,	// (0x00052094) fshwr2_bg_pane

0x9c3c,	// (0x00059b6f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c3c,	// (0x00059b6f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfee4,	// (0x0005fe17) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfee4,	// (0x0005fe17) fshwr2_func_candi_cell_pane_g

0x713e,	// (0x00057071) bg_popup_window_pane_cp01

0x9c75,	// (0x00059ba8) bg_popup_window_pane_g1_cp01

0x9c7e,	// (0x00059bb1) bg_popup_window_pane_cp22_ParamLimits

0x9c7e,	// (0x00059bb1) bg_popup_window_pane_cp22

0x9c8c,	// (0x00059bbf) listscroll_tmo_link_pane_ParamLimits

0x9c8c,	// (0x00059bbf) listscroll_tmo_link_pane

0x9ccc,	// (0x00059bff) popup_tmo_note_window_g1_ParamLimits

0x9ccc,	// (0x00059bff) popup_tmo_note_window_g1

0x9cd9,	// (0x00059c0c) tmo_note_info_pane_ParamLimits

0x9cd9,	// (0x00059c0c) tmo_note_info_pane

0xeea0,	// (0x0005edd3) list_tmo_note_info_pane_g1_ParamLimits

0xeea0,	// (0x0005edd3) list_tmo_note_info_pane_g1

0x9d0a,	// (0x00059c3d) list_tmo_note_info_pane_g2_ParamLimits

0x9d0a,	// (0x00059c3d) list_tmo_note_info_pane_g2

0x0001,

0xfee9,	// (0x0005fe1c) list_tmo_note_info_pane_g_ParamLimits

0xfee9,	// (0x0005fe1c) list_tmo_note_info_pane_g

0x9d26,	// (0x00059c59) list_tmo_note_info_text_pane_ParamLimits

0x9d26,	// (0x00059c59) list_tmo_note_info_text_pane

0x9dab,	// (0x00059cde) list_tmo_link_pane

0x9db8,	// (0x00059ceb) scroll_pane_cp20

0x9dc5,	// (0x00059cf8) list_single_tmo_link_pane_ParamLimits

0x9dc5,	// (0x00059cf8) list_single_tmo_link_pane

0x9dd5,	// (0x00059d08) list_single_tmo_link_pane_t1

0x9de3,	// (0x00059d16) list_tmo_note_info_text_pane_t1_ParamLimits

0x9de3,	// (0x00059d16) list_tmo_note_info_text_pane_t1

0xc35b,	// (0x0005c28e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc35b,	// (0x0005c28e) aid_size_touch_scroll_bar_cp01

0xb6a8,	// (0x0005b5db) aid_size_touch_slider_marker

0xaf53,	// (0x0005ae86) popup_settings_window_ParamLimits

0xaf53,	// (0x0005ae86) popup_settings_window

0x0cf5,	// (0x00050c28) popup_candi_list_indi_window

0x4633,	// (0x00054566) aid_touch_navi_pane_ParamLimits

0x18f9,	// (0x0005182c) rs_clock_indi_pane

0x1902,	// (0x00051835) sctrl_sk_bottom_pane_ParamLimits

0x1913,	// (0x00051846) sctrl_sk_top_pane_ParamLimits

0x1a14,	// (0x00051947) popup_fep_tooltip_window

0x96b0,	// (0x000595e3) aid_size_cell_widget_grid_ParamLimits

0xebe0,	// (0x0005eb13) cell_ai5_widget_pane_g1_ParamLimits

0xebe0,	// (0x0005eb13) cell_ai5_widget_pane_g1

0xec28,	// (0x0005eb5b) cell_ai5_widget_pane_g6_ParamLimits

0xec34,	// (0x0005eb67) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe67,	// (0x0005fd9a) cell_ai5_widget_pane_g_ParamLimits

0xfe67,	// (0x0005fd9a) cell_ai5_widget_pane_g

0xed38,	// (0x0005ec6b) cell_ai5_widget_pane_t10_ParamLimits

0xed38,	// (0x0005ec6b) cell_ai5_widget_pane_t10

0xed4a,	// (0x0005ec7d) grid_ai5_widget_pane_ParamLimits

0x9918,	// (0x0005984b) cell_contacts_ai5_widget_pane_ParamLimits

0x9918,	// (0x0005984b) cell_contacts_ai5_widget_pane

0x9af6,	// (0x00059a29) popup_discreet_window_t3_ParamLimits

0x9af6,	// (0x00059a29) popup_discreet_window_t3

0x9b85,	// (0x00059ab8) popup_fshwr2_char_preview_window_ParamLimits

0x9b85,	// (0x00059ab8) popup_fshwr2_char_preview_window

0xeeb7,	// (0x0005edea) tmo_note_info_pane_t1

0xeecc,	// (0x0005edff) tmo_note_info_pane_t2

0xeee5,	// (0x0005ee18) tmo_note_info_pane_t3

0x9d87,	// (0x00059cba) tmo_note_info_pane_t4

0x9d99,	// (0x00059ccc) tmo_note_info_pane_t5

0x0004,

0xfeee,	// (0x0005fe21) tmo_note_info_pane_t

0x9dab,	// (0x00059cde) list_tmo_link_pane_ParamLimits

0x9db8,	// (0x00059ceb) scroll_pane_cp20_ParamLimits

0x2161,	// (0x00052094) bg_popup_fep_char_preview_window_cp01

0x9dfc,	// (0x00059d2f) popup_fshwr2_char_preview_window_t1

0x9e0a,	// (0x00059d3d) popup_candi_list_indi_window_g1

0x9e13,	// (0x00059d46) bg_cell_contacts_ai5_widget_pane

0x9e1f,	// (0x00059d52) cell_contacts_ai5_widget_pane_g1

0x9e33,	// (0x00059d66) cell_contacts_ai5_widget_pane_g2

0x9e42,	// (0x00059d75) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef9,	// (0x0005fe2c) cell_contacts_ai5_widget_pane_g

0x9e55,	// (0x00059d88) cell_contacts_ai5_widget_pane_t1

0x2fd6,	// (0x00052f09) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef5f,	// (0x0005ee92) settings_container_pane

0x3c40,	// (0x00053b73) listscroll_set_pane_copy1

0x68b5,	// (0x000567e8) scroll_pane_cp121_copy1

0x9edb,	// (0x00059e0e) set_content_pane_copy1

0xef6b,	// (0x0005ee9e) aid_height_set_list_copy1_ParamLimits

0xef6b,	// (0x0005ee9e) aid_height_set_list_copy1

0x5f02,	// (0x00055e35) aid_size_parent_copy1_ParamLimits

0x5f02,	// (0x00055e35) aid_size_parent_copy1

0xef77,	// (0x0005eeaa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef77,	// (0x0005eeaa) button_value_adjust_pane_cp6_copy1

0x3fbe,	// (0x00053ef1) list_highlight_pane_cp2_copy1_ParamLimits

0x3fbe,	// (0x00053ef1) list_highlight_pane_cp2_copy1

0xef8b,	// (0x0005eebe) list_set_pane_copy1_ParamLimits

0xef8b,	// (0x0005eebe) list_set_pane_copy1

0xeefa,	// (0x0005ee2d) main_pane_set_t1_copy1_ParamLimits

0xeefa,	// (0x0005ee2d) main_pane_set_t1_copy1

0xef34,	// (0x0005ee67) main_pane_set_t2_copy1_ParamLimits

0xef34,	// (0x0005ee67) main_pane_set_t2_copy1

0xf099,	// (0x0005efcc) main_pane_set_t3_copy1

0xf0a7,	// (0x0005efda) main_pane_set_t4_copy1

0xef53,	// (0x0005ee86) set_content_pane_g1_copy1_ParamLimits

0xef53,	// (0x0005ee86) set_content_pane_g1_copy1

0xf0b5,	// (0x0005efe8) setting_code_pane_copy1

0x9ff0,	// (0x00059f23) setting_slider_graphic_pane_copy1

0x9ff0,	// (0x00059f23) setting_slider_pane_copy1

0x9ffa,	// (0x00059f2d) setting_text_pane_copy1

0xa004,	// (0x00059f37) setting_volume_pane_copy1

0xf0bf,	// (0x0005eff2) settings_code_pane_cp2_copy1

0xf0c7,	// (0x0005effa) settings_code_pane_cp_copy1_ParamLimits

0xf0c7,	// (0x0005effa) settings_code_pane_cp_copy1

0xf0db,	// (0x0005f00e) volume_set_pane_copy1

0xf0e7,	// (0x0005f01a) volume_set_pane_g10_copy1

0xf0f3,	// (0x0005f026) volume_set_pane_g1_copy1

0xf0fd,	// (0x0005f030) volume_set_pane_g2_copy1

0xf107,	// (0x0005f03a) volume_set_pane_g3_copy1

0xf111,	// (0x0005f044) volume_set_pane_g4_copy1

0xf11b,	// (0x0005f04e) volume_set_pane_g5_copy1

0xf125,	// (0x0005f058) volume_set_pane_g6_copy1

0xf12f,	// (0x0005f062) volume_set_pane_g7_copy1

0xf139,	// (0x0005f06c) volume_set_pane_g8_copy1

0xf143,	// (0x0005f076) volume_set_pane_g9_copy1

0x2255,	// (0x00052188) bg_set_opt_pane_cp_copy1_ParamLimits

0x2255,	// (0x00052188) bg_set_opt_pane_cp_copy1

0xa09b,	// (0x00059fce) setting_slider_pane_t1_copy1_ParamLimits

0xa09b,	// (0x00059fce) setting_slider_pane_t1_copy1

0xf14d,	// (0x0005f080) setting_slider_pane_t2_copy1_ParamLimits

0xf14d,	// (0x0005f080) setting_slider_pane_t2_copy1

0xf167,	// (0x0005f09a) setting_slider_pane_t3_copy1_ParamLimits

0xf167,	// (0x0005f09a) setting_slider_pane_t3_copy1

0xf17f,	// (0x0005f0b2) slider_set_pane_copy1_ParamLimits

0xf17f,	// (0x0005f0b2) slider_set_pane_copy1

0x303d,	// (0x00052f70) set_opt_bg_pane_g1_copy2

0x3045,	// (0x00052f78) set_opt_bg_pane_g2_copy2

0xa101,	// (0x0005a034) set_opt_bg_pane_g3_copy2

0x3055,	// (0x00052f88) set_opt_bg_pane_g4_copy2

0x305d,	// (0x00052f90) set_opt_bg_pane_g5_copy2

0x3065,	// (0x00052f98) set_opt_bg_pane_g6_copy2

0xf195,	// (0x0005f0c8) set_opt_bg_pane_g7_copy2

0xa115,	// (0x0005a048) set_opt_bg_pane_g8_copy2

0xa11f,	// (0x0005a052) set_opt_bg_pane_g9_copy2

0xa129,	// (0x0005a05c) aid_size_touch_slider_mark_copy1_ParamLimits

0xa129,	// (0x0005a05c) aid_size_touch_slider_mark_copy1

0xa13d,	// (0x0005a070) slider_set_pane_g1_copy1

0xa146,	// (0x0005a079) slider_set_pane_g2_copy1

0x6710,	// (0x00056643) slider_set_pane_g3_copy1_ParamLimits

0x6710,	// (0x00056643) slider_set_pane_g3_copy1

0x6724,	// (0x00056657) slider_set_pane_g4_copy1_ParamLimits

0x6724,	// (0x00056657) slider_set_pane_g4_copy1

0x673c,	// (0x0005666f) slider_set_pane_g5_copy1_ParamLimits

0x673c,	// (0x0005666f) slider_set_pane_g5_copy1

0x6710,	// (0x00056643) slider_set_pane_g6_copy1_ParamLimits

0x6710,	// (0x00056643) slider_set_pane_g6_copy1

0xf19f,	// (0x0005f0d2) slider_set_pane_g7_copy1_ParamLimits

0xf19f,	// (0x0005f0d2) slider_set_pane_g7_copy1

0x2175,	// (0x000520a8) bg_set_opt_pane_cp2_copy1

0xa164,	// (0x0005a097) setting_slider_graphic_pane_g1_copy1

0xf1b5,	// (0x0005f0e8) setting_slider_graphic_pane_t1_copy1

0xf1c5,	// (0x0005f0f8) setting_slider_graphic_pane_t2_copy1

0xf1d5,	// (0x0005f108) slider_set_pane_cp_copy1

0xa19d,	// (0x0005a0d0) input_focus_pane_cp1_copy1

0xa1a6,	// (0x0005a0d9) list_set_text_pane_copy1

0xa1ae,	// (0x0005a0e1) setting_text_pane_g1_copy1

0xf052,	// (0x0005ef85) set_text_pane_t1_copy1

0xa19d,	// (0x0005a0d0) input_focus_pane_cp2_copy1

0xa1ae,	// (0x0005a0e1) setting_code_pane_g1_copy1

0xf1dd,	// (0x0005f110) setting_code_pane_t1_copy1

0xf1eb,	// (0x0005f11e) list_set_graphic_pane_copy1

0x2175,	// (0x000520a8) bg_set_opt_pane_cp4_copy1

0xc609,	// (0x0005c53c) list_set_graphic_pane_g1_copy1_ParamLimits

0xc609,	// (0x0005c53c) list_set_graphic_pane_g1_copy1

0xf1fd,	// (0x0005f130) list_set_graphic_pane_g2_copy1

0xc621,	// (0x0005c554) list_set_graphic_pane_t1_copy1_ParamLimits

0xc621,	// (0x0005c554) list_set_graphic_pane_t1_copy1

0x713e,	// (0x00057071) rs_clock_indi_pane_g1

0xa1df,	// (0x0005a112) rs_clock_indi_pane_t1

0xa1ed,	// (0x0005a120) rs_indi_pane

0xa1f5,	// (0x0005a128) rs_indi_pane_g1

0xa1fe,	// (0x0005a131) rs_indi_pane_g2

0xa207,	// (0x0005a13a) rs_indi_pane_g3

0x0002,

0xff00,	// (0x0005fe33) rs_indi_pane_g

0x3c40,	// (0x00053b73) bg_popup_preview_window_pane_cp03

0xa210,	// (0x0005a143) popup_fep_tooltip_window_t1

0x7df2,	// (0x00057d25) popup_note2_window_g2_ParamLimits

0x7df2,	// (0x00057d25) popup_note2_window_g2

0x0001,

0xfc9e,	// (0x0005fbd1) popup_note2_window_g_ParamLimits

0xfc9e,	// (0x0005fbd1) popup_note2_window_g

0x82fa,	// (0x0005822d) bg_popup_sub_pane_cp11_ParamLimits

0x8307,	// (0x0005823a) cell_ai3_links_pane_g1_ParamLimits

0x831e,	// (0x00058251) cell_ai3_links_pane_t1

0xf052,	// (0x0005ef85) set_text_pane_t1_copy1_ParamLimits

0x3b4d,	// (0x00053a80) cell_graphic_popup_pane_cp2_ParamLimits

0x3b4d,	// (0x00053a80) cell_graphic_popup_pane_cp2

0xa21e,	// (0x0005a151) cell_graphic_popup_pane_g1_cp2

0x2d21,	// (0x00052c54) cell_graphic_popup_pane_g2_cp2

0xa226,	// (0x0005a159) cell_graphic_popup_pane_g3_cp2

0xa22e,	// (0x0005a161) cell_graphic_popup_pane_t2_cp2

0x2d32,	// (0x00052c65) grid_highlight_pane_cp3_cp2

0x3389,	// (0x000532bc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fd6,	// (0x00052f09) main_tmo_pane_ParamLimits

0xe039,	// (0x0005df6c) popup_tmo_big_image_note_window

0xebd0,	// (0x0005eb03) cell_ai5_widget_list_pane

0xebd8,	// (0x0005eb0b) cell_ai5_widget_lrg_icon_pane

0xeeb7,	// (0x0005edea) tmo_note_info_pane_t1_ParamLimits

0xeecc,	// (0x0005edff) tmo_note_info_pane_t2_ParamLimits

0xeee5,	// (0x0005ee18) tmo_note_info_pane_t3_ParamLimits

0x9d87,	// (0x00059cba) tmo_note_info_pane_t4_ParamLimits

0x9d99,	// (0x00059ccc) tmo_note_info_pane_t5_ParamLimits

0xfeee,	// (0x0005fe21) tmo_note_info_pane_t_ParamLimits

0xef5f,	// (0x0005ee92) settings_container_pane_ParamLimits

0xa195,	// (0x0005a0c8) indicator_popup_pane_cp5

0xa195,	// (0x0005a0c8) indicator_popup_pane_cp6

0xf1eb,	// (0x0005f11e) list_set_graphic_pane_copy1_ParamLimits

0x2161,	// (0x00052094) bg_popup_window_pane_cp23

0xa23c,	// (0x0005a16f) popup_tmo_big_image_note_window_g1

0xa248,	// (0x0005a17b) popup_tmo_big_image_note_window_t1

0xa258,	// (0x0005a18b) popup_tmo_big_image_note_window_t2

0xa268,	// (0x0005a19b) popup_tmo_big_image_note_window_t3

0x0002,

0xff07,	// (0x0005fe3a) popup_tmo_big_image_note_window_t

0xf205,	// (0x0005f138) cell_ai5_widget_lrg_icon_pane_g1

0xf20d,	// (0x0005f140) cell_ai5_widget_lrg_icon_pane_t1

0xf21b,	// (0x0005f14e) cell_ai5_widget_list_row_pane_ParamLimits

0xf21b,	// (0x0005f14e) cell_ai5_widget_list_row_pane

0xf234,	// (0x0005f167) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf234,	// (0x0005f167) cell_ai5_widget_list_row_pane_g1

0xf241,	// (0x0005f174) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf241,	// (0x0005f174) cell_ai5_widget_list_row_pane_t1

0xf259,	// (0x0005f18c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf259,	// (0x0005f18c) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff0e,	// (0x0005fe41) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff0e,	// (0x0005fe41) cell_ai5_widget_list_row_pane_t

0xf328,	// (0x0005f25b) main_fep_vtchi_ss_pane

0xa2de,	// (0x0005a211) popup_fep_char_pre_window

0xa2e6,	// (0x0005a219) popup_fep_ituss_window

0xa2f1,	// (0x0005a224) popup_fep_vkbss_window

0xa2fc,	// (0x0005a22f) grid_vkbss_keypad_pane_ParamLimits

0xa2fc,	// (0x0005a22f) grid_vkbss_keypad_pane

0xa30c,	// (0x0005a23f) ituss_keypad_pane

0xa314,	// (0x0005a247) aid_vkbss_key_offset_ParamLimits

0xa314,	// (0x0005a247) aid_vkbss_key_offset

0xa323,	// (0x0005a256) cell_vkbss_key_pane_ParamLimits

0xa323,	// (0x0005a256) cell_vkbss_key_pane

0xa339,	// (0x0005a26c) bg_cell_vkbss_key_g1_ParamLimits

0xa339,	// (0x0005a26c) bg_cell_vkbss_key_g1

0xa345,	// (0x0005a278) cell_vkbss_key_3p_pane_ParamLimits

0xa345,	// (0x0005a278) cell_vkbss_key_3p_pane

0xa35f,	// (0x0005a292) cell_vkbss_key_g1_ParamLimits

0xa35f,	// (0x0005a292) cell_vkbss_key_g1

0xa379,	// (0x0005a2ac) cell_vkbss_key_t1_ParamLimits

0xa379,	// (0x0005a2ac) cell_vkbss_key_t1

0xa3a4,	// (0x0005a2d7) cell_ituss_key_pane_ParamLimits

0xa3a4,	// (0x0005a2d7) cell_ituss_key_pane

0xa3b3,	// (0x0005a2e6) bg_cell_ituss_key_g1_ParamLimits

0xa3b3,	// (0x0005a2e6) bg_cell_ituss_key_g1

0xa3bf,	// (0x0005a2f2) cell_ituss_key_pane_g1_ParamLimits

0xa3bf,	// (0x0005a2f2) cell_ituss_key_pane_g1

0xa3cb,	// (0x0005a2fe) cell_ituss_key_pane_g2_ParamLimits

0xa3cb,	// (0x0005a2fe) cell_ituss_key_pane_g2

0x0001,

0xff13,	// (0x0005fe46) cell_ituss_key_pane_g_ParamLimits

0xff13,	// (0x0005fe46) cell_ituss_key_pane_g

0xa3df,	// (0x0005a312) cell_ituss_key_t1_ParamLimits

0xa3df,	// (0x0005a312) cell_ituss_key_t1

0xa3fd,	// (0x0005a330) cell_ituss_key_t2_ParamLimits

0xa3fd,	// (0x0005a330) cell_ituss_key_t2

0xa41c,	// (0x0005a34f) cell_ituss_key_t3_ParamLimits

0xa41c,	// (0x0005a34f) cell_ituss_key_t3

0xa43b,	// (0x0005a36e) cell_ituss_key_t4_ParamLimits

0xa43b,	// (0x0005a36e) cell_ituss_key_t4

0x0003,

0xff18,	// (0x0005fe4b) cell_ituss_key_t_ParamLimits

0xff18,	// (0x0005fe4b) cell_ituss_key_t

0xa45a,	// (0x0005a38d) cell_vkbss_key_3p_pane_g1

0xa462,	// (0x0005a395) cell_vkbss_key_3p_pane_g2

0xa46a,	// (0x0005a39d) cell_vkbss_key_3p_pane_g3

0x0002,

0xff21,	// (0x0005fe54) cell_vkbss_key_3p_pane_g

0x2161,	// (0x00052094) bg_popup_fep_char_preview_window_cp02

0xa472,	// (0x0005a3a5) popup_fep_char_pre_window_t1

0xebc6,	// (0x0005eaf9) main_ai5_sk_pane

0x9e13,	// (0x00059d46) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9e1f,	// (0x00059d52) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9e33,	// (0x00059d66) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9e42,	// (0x00059d75) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef9,	// (0x0005fe2c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9e55,	// (0x00059d88) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fd6,	// (0x00052f09) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf26b,	// (0x0005f19e) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
