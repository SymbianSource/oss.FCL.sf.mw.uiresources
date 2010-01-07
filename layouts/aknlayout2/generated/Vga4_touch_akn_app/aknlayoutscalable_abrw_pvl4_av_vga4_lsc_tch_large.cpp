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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0004ffc3 };

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
0xae0c,	// (0x0005adcf) Screen

0xae18,	// (0x0005addb) application_window_ParamLimits

0xae18,	// (0x0005addb) application_window

0x2171,	// (0x00052134) screen_g1

0xae50,	// (0x0005ae13) area_bottom_pane_ParamLimits

0xae50,	// (0x0005ae13) area_bottom_pane

0xf2e8,	// (0x0005f2ab) area_top_pane_ParamLimits

0xf2e8,	// (0x0005f2ab) area_top_pane

0xf386,	// (0x0005f349) main_pane_ParamLimits

0xf386,	// (0x0005f349) main_pane

0x217b,	// (0x0005213e) misc_graphics

0xcf8f,	// (0x0005cf52) battery_pane_ParamLimits

0xcf8f,	// (0x0005cf52) battery_pane

0x533c,	// (0x000552ff) bg_status_flat_pane_g8

0x5344,	// (0x00055307) bg_status_flat_pane_g9

0x4722,	// (0x000546e5) context_pane_ParamLimits

0x4722,	// (0x000546e5) context_pane

0xd106,	// (0x0005d0c9) navi_pane_ParamLimits

0xd106,	// (0x0005d0c9) navi_pane

0xd18f,	// (0x0005d152) signal_pane_ParamLimits

0xd18f,	// (0x0005d152) signal_pane

0x0008,

0xf8b2,	// (0x0005f875) bg_status_flat_pane_g

0xd21f,	// (0x0005d1e2) status_pane_g1_ParamLimits

0xd21f,	// (0x0005d1e2) status_pane_g1

0xd235,	// (0x0005d1f8) status_pane_g2_ParamLimits

0xd235,	// (0x0005d1f8) status_pane_g2

0x4962,	// (0x00054925) status_pane_g3_ParamLimits

0x4962,	// (0x00054925) status_pane_g3

0x0004,

0xf7e5,	// (0x0005f7a8) status_pane_g_ParamLimits

0xf7e5,	// (0x0005f7a8) status_pane_g

0xd241,	// (0x0005d204) title_pane_ParamLimits

0xd241,	// (0x0005d204) title_pane

0xd29e,	// (0x0005d261) uni_indicator_pane_ParamLimits

0xd29e,	// (0x0005d261) uni_indicator_pane

0x3f4f,	// (0x00053f12) bg_list_pane_ParamLimits

0x3f4f,	// (0x00053f12) bg_list_pane

0xc72e,	// (0x0005c6f1) find_pane

0xc736,	// (0x0005c6f9) listscroll_app_pane_ParamLimits

0xc736,	// (0x0005c6f9) listscroll_app_pane

0x3f83,	// (0x00053f46) listscroll_form_pane

0xc742,	// (0x0005c705) listscroll_gen_pane_ParamLimits

0xc742,	// (0x0005c705) listscroll_gen_pane

0x3f83,	// (0x00053f46) listscroll_set_pane

0x5ef5,	// (0x00055eb8) main_idle_act_pane

0x3c33,	// (0x00053bf6) main_idle_trad_pane

0x3c33,	// (0x00053bf6) main_list_empty_pane

0x3fb1,	// (0x00053f74) main_midp_pane

0x3fbd,	// (0x00053f80) main_pane_g1_ParamLimits

0x3fbd,	// (0x00053f80) main_pane_g1

0xc756,	// (0x0005c719) popup_ai_message_window_ParamLimits

0xc756,	// (0x0005c719) popup_ai_message_window

0xc7f6,	// (0x0005c7b9) popup_fep_china_uni_window_ParamLimits

0xc7f6,	// (0x0005c7b9) popup_fep_china_uni_window

0x40db,	// (0x0005409e) popup_fep_japan_candidate_window_ParamLimits

0x40db,	// (0x0005409e) popup_fep_japan_candidate_window

0x4105,	// (0x000540c8) popup_fep_japan_predictive_window_ParamLimits

0x4105,	// (0x000540c8) popup_fep_japan_predictive_window

0xc856,	// (0x0005c819) popup_find_window

0xc873,	// (0x0005c836) popup_grid_graphic_window_ParamLimits

0xc873,	// (0x0005c836) popup_grid_graphic_window

0x4176,	// (0x00054139) popup_large_graphic_colour_window

0xc917,	// (0x0005c8da) popup_menu_window_ParamLimits

0xc917,	// (0x0005c8da) popup_menu_window

0xcb03,	// (0x0005cac6) popup_note_image_window

0xcac3,	// (0x0005ca86) popup_note_wait_window_ParamLimits

0xcac3,	// (0x0005ca86) popup_note_wait_window

0xcb1b,	// (0x0005cade) popup_note_window_ParamLimits

0xcb1b,	// (0x0005cade) popup_note_window

0xcbc9,	// (0x0005cb8c) popup_query_code_window_ParamLimits

0xcbc9,	// (0x0005cb8c) popup_query_code_window

0x43e2,	// (0x000543a5) popup_query_data_code_window_ParamLimits

0x43e2,	// (0x000543a5) popup_query_data_code_window

0xcc09,	// (0x0005cbcc) popup_query_data_window_ParamLimits

0xcc09,	// (0x0005cbcc) popup_query_data_window

0xcd3b,	// (0x0005ccfe) popup_query_sat_info_window_ParamLimits

0xcd3b,	// (0x0005ccfe) popup_query_sat_info_window

0xcde6,	// (0x0005cda9) popup_snote_single_graphic_window_ParamLimits

0xcde6,	// (0x0005cda9) popup_snote_single_graphic_window

0xcde6,	// (0x0005cda9) popup_snote_single_text_window_ParamLimits

0xcde6,	// (0x0005cda9) popup_snote_single_text_window

0x447d,	// (0x00054440) popup_sub_window_general

0x45c3,	// (0x00054586) popup_window_general_ParamLimits

0x45c3,	// (0x00054586) popup_window_general

0x45dc,	// (0x0005459f) power_save_pane

0xb7fd,	// (0x0005b7c0) control_pane_g1_ParamLimits

0xb7fd,	// (0x0005b7c0) control_pane_g1

0x0ba8,	// (0x00050b6b) control_pane_g2_ParamLimits

0x0ba8,	// (0x00050b6b) control_pane_g2

0x3f00,	// (0x00053ec3) control_pane_g3_ParamLimits

0x3f00,	// (0x00053ec3) control_pane_g3

0x0007,

0xf7cd,	// (0x0005f790) control_pane_g_ParamLimits

0xf7cd,	// (0x0005f790) control_pane_g

0xb83f,	// (0x0005b802) control_pane_t1_ParamLimits

0xb83f,	// (0x0005b802) control_pane_t1

0xb89d,	// (0x0005b860) control_pane_t2_ParamLimits

0xb89d,	// (0x0005b860) control_pane_t2

0x0002,

0xf7de,	// (0x0005f7a1) control_pane_t_ParamLimits

0xf7de,	// (0x0005f7a1) control_pane_t

0x3e21,	// (0x00053de4) navi_navi_volume_pane_cp1

0x3e2a,	// (0x00053ded) status_small_icon_pane

0x3e32,	// (0x00053df5) status_small_pane_g1_ParamLimits

0x3e32,	// (0x00053df5) status_small_pane_g1

0x3e66,	// (0x00053e29) status_small_pane_g2_ParamLimits

0x3e66,	// (0x00053e29) status_small_pane_g2

0x3e72,	// (0x00053e35) status_small_pane_g3_ParamLimits

0x3e72,	// (0x00053e35) status_small_pane_g3

0x3e7e,	// (0x00053e41) status_small_pane_g4_ParamLimits

0x3e7e,	// (0x00053e41) status_small_pane_g4

0x3e8a,	// (0x00053e4d) status_small_pane_g5_ParamLimits

0x3e8a,	// (0x00053e4d) status_small_pane_g5

0x3e99,	// (0x00053e5c) status_small_pane_g6_ParamLimits

0x3e99,	// (0x00053e5c) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0005f77f) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0005f77f) status_small_pane_g

0x3ec9,	// (0x00053e8c) status_small_pane_t1

0x3eec,	// (0x00053eaf) status_small_wait_pane_ParamLimits

0x3eec,	// (0x00053eaf) status_small_wait_pane

0xc54f,	// (0x0005c512) aid_levels_signal_ParamLimits

0xc54f,	// (0x0005c512) aid_levels_signal

0xc567,	// (0x0005c52a) signal_pane_g1_ParamLimits

0xc567,	// (0x0005c52a) signal_pane_g1

0xc582,	// (0x0005c545) signal_pane_g2_ParamLimits

0xc582,	// (0x0005c545) signal_pane_g2

0x0001,

0xf751,	// (0x0005f714) signal_pane_g_ParamLimits

0xf751,	// (0x0005f714) signal_pane_g

0x36fa,	// (0x000536bd) context_pane_g1

0xafcd,	// (0x0005af90) title_pane_g1

0xb002,	// (0x0005afc5) title_pane_t1

0x2223,	// (0x000521e6) title_pane_t2

0x2249,	// (0x0005220c) title_pane_t3

0x0002,

0xf59b,	// (0x0005f55e) title_pane_t

0xd2c6,	// (0x0005d289) aid_levels_battery_ParamLimits

0xd2c6,	// (0x0005d289) aid_levels_battery

0xd2e2,	// (0x0005d2a5) battery_pane_g1_ParamLimits

0xd2e2,	// (0x0005d2a5) battery_pane_g1

0xd2ff,	// (0x0005d2c2) battery_pane_g2_ParamLimits

0xd2ff,	// (0x0005d2c2) battery_pane_g2

0x0001,

0xf7f0,	// (0x0005f7b3) battery_pane_g_ParamLimits

0xf7f0,	// (0x0005f7b3) battery_pane_g

0xd522,	// (0x0005d4e5) uni_indicator_pane_g1

0xd537,	// (0x0005d4fa) uni_indicator_pane_g2

0xd54c,	// (0x0005d50f) uni_indicator_pane_g3

0x0005,

0xf95a,	// (0x0005f91d) uni_indicator_pane_g

0x3aa1,	// (0x00053a64) navi_icon_pane_ParamLimits

0x3aa1,	// (0x00053a64) navi_icon_pane

0x39e8,	// (0x000539ab) navi_midp_pane

0x3abd,	// (0x00053a80) navi_navi_pane

0x3ac7,	// (0x00053a8a) navi_text_pane_ParamLimits

0x3ac7,	// (0x00053a8a) navi_text_pane

0x2171,	// (0x00052134) status_small_wait_pane_g1

0x268d,	// (0x00052650) status_small_wait_pane_g2

0x0001,

0xf955,	// (0x0005f918) status_small_wait_pane_g

0xd4c1,	// (0x0005d484) navi_navi_icon_text_pane

0xd4c9,	// (0x0005d48c) navi_navi_pane_g1_ParamLimits

0xd4c9,	// (0x0005d48c) navi_navi_pane_g1

0xd4db,	// (0x0005d49e) navi_navi_pane_g2_ParamLimits

0xd4db,	// (0x0005d49e) navi_navi_pane_g2

0x0001,

0xf923,	// (0x0005f8e6) navi_navi_pane_g_ParamLimits

0xf923,	// (0x0005f8e6) navi_navi_pane_g

0x59cb,	// (0x0005598e) navi_navi_tabs_pane

0xd4ed,	// (0x0005d4b0) navi_navi_text_pane

0xd4c1,	// (0x0005d484) navi_navi_volume_pane

0xd4af,	// (0x0005d472) navi_text_pane_t1

0xd4a3,	// (0x0005d466) navi_icon_pane_g1

0x58bc,	// (0x0005587f) navi_navi_text_pane_t1

0xbb20,	// (0x0005bae3) navi_navi_volume_pane_g1

0xbb28,	// (0x0005baeb) volume_small_pane

0xd3ff,	// (0x0005d3c2) navi_navi_icon_text_pane_g1

0xd407,	// (0x0005d3ca) navi_navi_icon_text_pane_t1

0x3abd,	// (0x00053a80) navi_tabs_2_long_pane

0x3abd,	// (0x00053a80) navi_tabs_2_pane

0x3abd,	// (0x00053a80) navi_tabs_3_long_pane

0x3abd,	// (0x00053a80) navi_tabs_3_pane

0x3abd,	// (0x00053a80) navi_tabs_4_pane

0xbb00,	// (0x0005bac3) tabs_2_active_pane_ParamLimits

0xbb00,	// (0x0005bac3) tabs_2_active_pane

0xbb10,	// (0x0005bad3) tabs_2_passive_pane_ParamLimits

0xbb10,	// (0x0005bad3) tabs_2_passive_pane

0xbace,	// (0x0005ba91) tabs_3_active_pane_ParamLimits

0xbace,	// (0x0005ba91) tabs_3_active_pane

0xbade,	// (0x0005baa1) tabs_3_passive_pane_ParamLimits

0xbade,	// (0x0005baa1) tabs_3_passive_pane

0xbaef,	// (0x0005bab2) tabs_3_passive_pane_cp_ParamLimits

0xbaef,	// (0x0005bab2) tabs_3_passive_pane_cp

0xba8a,	// (0x0005ba4d) tabs_4_active_pane_ParamLimits

0xba8a,	// (0x0005ba4d) tabs_4_active_pane

0xba9b,	// (0x0005ba5e) tabs_4_passive_pane_ParamLimits

0xba9b,	// (0x0005ba5e) tabs_4_passive_pane

0xbaac,	// (0x0005ba6f) tabs_4_passive_pane_cp_ParamLimits

0xbaac,	// (0x0005ba6f) tabs_4_passive_pane_cp

0xbabd,	// (0x0005ba80) tabs_4_passive_pane_cp2_ParamLimits

0xbabd,	// (0x0005ba80) tabs_4_passive_pane_cp2

0xba66,	// (0x0005ba29) tabs_2_long_active_pane_ParamLimits

0xba66,	// (0x0005ba29) tabs_2_long_active_pane

0xba78,	// (0x0005ba3b) tabs_2_long_passive_pane_ParamLimits

0xba78,	// (0x0005ba3b) tabs_2_long_passive_pane

0xba1b,	// (0x0005b9de) tabs_3_long_active_pane_ParamLimits

0xba1b,	// (0x0005b9de) tabs_3_long_active_pane

0xba34,	// (0x0005b9f7) tabs_3_long_passive_pane_ParamLimits

0xba34,	// (0x0005b9f7) tabs_3_long_passive_pane

0xba4d,	// (0x0005ba10) tabs_3_long_passive_pane_cp_ParamLimits

0xba4d,	// (0x0005ba10) tabs_3_long_passive_pane_cp

0x0eb3,	// (0x00050e76) volume_small_pane_g1

0xb9ca,	// (0x0005b98d) volume_small_pane_g2

0xb9d3,	// (0x0005b996) volume_small_pane_g3

0xb9dc,	// (0x0005b99f) volume_small_pane_g4

0xb9e5,	// (0x0005b9a8) volume_small_pane_g5

0xb9ee,	// (0x0005b9b1) volume_small_pane_g6

0xb9f7,	// (0x0005b9ba) volume_small_pane_g7

0xba00,	// (0x0005b9c3) volume_small_pane_g8

0xba09,	// (0x0005b9cc) volume_small_pane_g9

0xba12,	// (0x0005b9d5) volume_small_pane_g10

0x0009,

0xf8ef,	// (0x0005f8b2) volume_small_pane_g

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp2_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp2

0xb08e,	// (0x0005b051) tabs_3_active_pane_g1

0xb096,	// (0x0005b059) tabs_3_active_pane_t1

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp2_ParamLimits

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp2

0xb08e,	// (0x0005b051) tabs_3_passive_pane_g1

0xb096,	// (0x0005b059) tabs_3_passive_pane_t1

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp3_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp3

0xb0a8,	// (0x0005b06b) tabs_4_active_pane_g1

0xb0b0,	// (0x0005b073) tabs_4_active_pane_t1

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp3_ParamLimits

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp3

0xb0a8,	// (0x0005b06b) tabs_4_1_passive_pane_g1

0xb0b0,	// (0x0005b073) tabs_4_1_passive_pane_t1

0x3fb1,	// (0x00053f74) list_highlight_pane_cp2

0xd60a,	// (0x0005d5cd) list_set_pane_ParamLimits

0xd60a,	// (0x0005d5cd) list_set_pane

0xd6d2,	// (0x0005d695) main_pane_set_t1_ParamLimits

0xd6d2,	// (0x0005d695) main_pane_set_t1

0xd6f2,	// (0x0005d6b5) main_pane_set_t2_ParamLimits

0xd6f2,	// (0x0005d6b5) main_pane_set_t2

0xd706,	// (0x0005d6c9) main_pane_set_t3_ParamLimits

0xd706,	// (0x0005d6c9) main_pane_set_t3

0xd71a,	// (0x0005d6dd) main_pane_set_t4_ParamLimits

0xd71a,	// (0x0005d6dd) main_pane_set_t4

0x0003,

0xf9bf,	// (0x0005f982) main_pane_set_t_ParamLimits

0xf9bf,	// (0x0005f982) main_pane_set_t

0xd72e,	// (0x0005d6f1) setting_code_pane

0x6055,	// (0x00056018) setting_slider_graphic_pane

0x6055,	// (0x00056018) setting_slider_pane

0x6055,	// (0x00056018) setting_text_pane

0x6055,	// (0x00056018) setting_volume_pane

0xf502,	// (0x0005f4c5) volume_set_pane

0x225b,	// (0x0005221e) bg_set_opt_pane_cp

0xf50c,	// (0x0005f4cf) setting_slider_pane_t1

0xf522,	// (0x0005f4e5) setting_slider_pane_t2

0xf53c,	// (0x0005f4ff) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0005f565) setting_slider_pane_t

0xf554,	// (0x0005f517) slider_set_pane

0x217b,	// (0x0005213e) bg_set_opt_pane_cp2

0x229d,	// (0x00052260) setting_slider_graphic_pane_g1

0xf56a,	// (0x0005f52d) setting_slider_graphic_pane_t1

0xf57a,	// (0x0005f53d) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0005f56c) setting_slider_graphic_pane_t

0xf58a,	// (0x0005f54d) slider_set_pane_cp

0x217b,	// (0x0005213e) input_focus_pane_cp1

0x5edc,	// (0x00055e9f) list_set_text_pane

0x2171,	// (0x00052134) setting_text_pane_g1

0x217b,	// (0x0005213e) input_focus_pane_cp2

0x2171,	// (0x00052134) setting_code_pane_g1

0x22a6,	// (0x00052269) setting_code_pane_t1

0xf0a0,	// (0x0005f063) set_text_pane_t1_ParamLimits

0xf0a0,	// (0x0005f063) set_text_pane_t1

0x3030,	// (0x00052ff3) set_opt_bg_pane_g1

0x3038,	// (0x00052ffb) set_opt_bg_pane_g2

0x5eb4,	// (0x00055e77) set_opt_bg_pane_g3

0x3048,	// (0x0005300b) set_opt_bg_pane_g4

0x3050,	// (0x00053013) set_opt_bg_pane_g5

0x3058,	// (0x0005301b) set_opt_bg_pane_g6

0x5ebe,	// (0x00055e81) set_opt_bg_pane_g7

0x5ec8,	// (0x00055e8b) set_opt_bg_pane_g8

0x5ed2,	// (0x00055e95) set_opt_bg_pane_g9

0x0008,

0xf9ac,	// (0x0005f96f) set_opt_bg_pane_g

0x5ea7,	// (0x00055e6a) slider_set_pane_g1

0x10bf,	// (0x00051082) slider_set_pane_g2

0x0006,

0xf99d,	// (0x0005f960) slider_set_pane_g

0x101f,	// (0x00050fe2) volume_set_pane_g1

0x1029,	// (0x00050fec) volume_set_pane_g2

0x1033,	// (0x00050ff6) volume_set_pane_g3

0x103d,	// (0x00051000) volume_set_pane_g4

0x1047,	// (0x0005100a) volume_set_pane_g5

0x1051,	// (0x00051014) volume_set_pane_g6

0x105b,	// (0x0005101e) volume_set_pane_g7

0x1065,	// (0x00051028) volume_set_pane_g8

0x106f,	// (0x00051032) volume_set_pane_g9

0x1079,	// (0x0005103c) volume_set_pane_g10

0x0009,

0xf975,	// (0x0005f938) volume_set_pane_g

0xb0c2,	// (0x0005b085) indicator_pane_ParamLimits

0xb0c2,	// (0x0005b085) indicator_pane

0xb0ee,	// (0x0005b0b1) main_idle_pane_g2_ParamLimits

0xb0ee,	// (0x0005b0b1) main_idle_pane_g2

0xb126,	// (0x0005b0e9) main_pane_idle_g1_ParamLimits

0xb126,	// (0x0005b0e9) main_pane_idle_g1

0x22f6,	// (0x000522b9) popup_clock_digital_analogue_window_ParamLimits

0x22f6,	// (0x000522b9) popup_clock_digital_analogue_window

0xb154,	// (0x0005b117) soft_indicator_pane_ParamLimits

0xb154,	// (0x0005b117) soft_indicator_pane

0xb170,	// (0x0005b133) wallpaper_pane_ParamLimits

0xb170,	// (0x0005b133) wallpaper_pane

0x2171,	// (0x00052134) wallpaper_pane_g1

0xb182,	// (0x0005b145) indicator_pane_g1_ParamLimits

0xb182,	// (0x0005b145) indicator_pane_g1

0x6319,	// (0x000562dc) navi_navi_icon_text_pane_srt_g1

0x234a,	// (0x0005230d) soft_indicator_pane_t1

0x2364,	// (0x00052327) aid_ps_area_pane

0xb19b,	// (0x0005b15e) aid_ps_clock_pane

0x2383,	// (0x00052346) aid_ps_indicator_pane

0x238f,	// (0x00052352) indicator_ps_pane_ParamLimits

0x238f,	// (0x00052352) indicator_ps_pane

0x239e,	// (0x00052361) power_save_pane_g1_ParamLimits

0x239e,	// (0x00052361) power_save_pane_g1

0x23aa,	// (0x0005236d) power_save_pane_g2_ParamLimits

0x23aa,	// (0x0005236d) power_save_pane_g2

0xf094,	// (0x0005f057) aid_navinavi_width_pane

0x2364,	// (0x00052327) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0005f571) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0005f571) power_save_pane_g

0x23b8,	// (0x0005237b) power_save_pane_t1_ParamLimits

0x23b8,	// (0x0005237b) power_save_pane_t1

0xb19b,	// (0x0005b15e) aid_ps_clock_pane_ParamLimits

0x2383,	// (0x00052346) aid_ps_indicator_pane_ParamLimits

0x23ca,	// (0x0005238d) power_save_pane_t4_ParamLimits

0x23ca,	// (0x0005238d) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0005f576) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0005f576) power_save_pane_t

0x23f4,	// (0x000523b7) power_save_t3_ParamLimits

0x23f4,	// (0x000523b7) power_save_t3

0x23df,	// (0x000523a2) power_save_t2_ParamLimits

0x23df,	// (0x000523a2) power_save_t2

0x2409,	// (0x000523cc) indicator_ps_pane_g1

0xb1a9,	// (0x0005b16c) ai_gene_pane_ParamLimits

0xb1a9,	// (0x0005b16c) ai_gene_pane

0xb1c0,	// (0x0005b183) ai_links_pane_ParamLimits

0xb1c0,	// (0x0005b183) ai_links_pane

0xc163,	// (0x0005c126) indicator_pane_cp1_ParamLimits

0xc163,	// (0x0005c126) indicator_pane_cp1

0xc172,	// (0x0005c135) main_pane_idle_g1_cp_ParamLimits

0xc172,	// (0x0005c135) main_pane_idle_g1_cp

0x2442,	// (0x00052405) popup_ai_links_title_window

0xc18a,	// (0x0005c14d) soft_indicator_pane_cp1_ParamLimits

0xc18a,	// (0x0005c14d) soft_indicator_pane_cp1

0x5c7a,	// (0x00055c3d) ai_links_pane_g1

0x5c83,	// (0x00055c46) grid_ai_links_pane

0xd519,	// (0x0005d4dc) ai_gene_pane_1

0x5c68,	// (0x00055c2b) ai_gene_pane_2

0x5c71,	// (0x00055c34) list_highlight_pane_cp4

0xd4f5,	// (0x0005d4b8) cell_ai_link_pane_ParamLimits

0xd4f5,	// (0x0005d4b8) cell_ai_link_pane

0x5c37,	// (0x00055bfa) cell_ai_link_pane_g1

0x268d,	// (0x00052650) cell_ai_link_pane_g2

0x0001,

0xf950,	// (0x0005f913) cell_ai_link_pane_g

0x217b,	// (0x0005213e) grid_highlight_cp2

0x217b,	// (0x0005213e) bg_popup_sub_pane_cp1

0x2465,	// (0x00052428) popup_ai_links_title_window_t1

0x5b83,	// (0x00055b46) ai_gene_pane_1_g1_ParamLimits

0x5b83,	// (0x00055b46) ai_gene_pane_1_g1

0x5b8f,	// (0x00055b52) ai_gene_pane_1_g2_ParamLimits

0x5b8f,	// (0x00055b52) ai_gene_pane_1_g2

0x0001,

0xf946,	// (0x0005f909) ai_gene_pane_1_g_ParamLimits

0xf946,	// (0x0005f909) ai_gene_pane_1_g

0x5b9c,	// (0x00055b5f) ai_gene_pane_1_t1_ParamLimits

0x5b9c,	// (0x00055b5f) ai_gene_pane_1_t1

0x5bd0,	// (0x00055b93) grid_ai_soft_ind_pane

0x5b6e,	// (0x00055b31) ai_gene_pane_2_t1_ParamLimits

0x5b6e,	// (0x00055b31) ai_gene_pane_2_t1

0xc19e,	// (0x0005c161) main_pane_empty_t1_ParamLimits

0xc19e,	// (0x0005c161) main_pane_empty_t1

0xc1b6,	// (0x0005c179) main_pane_empty_t2_ParamLimits

0xc1b6,	// (0x0005c179) main_pane_empty_t2

0xc1cb,	// (0x0005c18e) main_pane_empty_t3_ParamLimits

0xc1cb,	// (0x0005c18e) main_pane_empty_t3

0xc1dd,	// (0x0005c1a0) main_pane_empty_t4_ParamLimits

0xc1dd,	// (0x0005c1a0) main_pane_empty_t4

0xc1ef,	// (0x0005c1b2) main_pane_empty_t5_ParamLimits

0xc1ef,	// (0x0005c1b2) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0005f57b) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0005f57b) main_pane_empty_t

0x3081,	// (0x00053044) bg_popup_window_pane_ParamLimits

0x3081,	// (0x00053044) bg_popup_window_pane

0x58ca,	// (0x0005588d) find_popup_pane_cp2_ParamLimits

0x58ca,	// (0x0005588d) find_popup_pane_cp2

0x58d6,	// (0x00055899) heading_pane_ParamLimits

0x58d6,	// (0x00055899) heading_pane

0x217b,	// (0x0005213e) bg_popup_sub_pane

0xd424,	// (0x0005d3e7) bg_popup_window_pane_g1_ParamLimits

0xd424,	// (0x0005d3e7) bg_popup_window_pane_g1

0xd433,	// (0x0005d3f6) bg_popup_window_pane_g2_ParamLimits

0xd433,	// (0x0005d3f6) bg_popup_window_pane_g2

0xd43f,	// (0x0005d402) bg_popup_window_pane_g3_ParamLimits

0xd43f,	// (0x0005d402) bg_popup_window_pane_g3

0xd44b,	// (0x0005d40e) bg_popup_window_pane_g4_ParamLimits

0xd44b,	// (0x0005d40e) bg_popup_window_pane_g4

0xd45a,	// (0x0005d41d) bg_popup_window_pane_g5_ParamLimits

0xd45a,	// (0x0005d41d) bg_popup_window_pane_g5

0xd46a,	// (0x0005d42d) bg_popup_window_pane_g6_ParamLimits

0xd46a,	// (0x0005d42d) bg_popup_window_pane_g6

0xd476,	// (0x0005d439) bg_popup_window_pane_g7_ParamLimits

0xd476,	// (0x0005d439) bg_popup_window_pane_g7

0xd485,	// (0x0005d448) bg_popup_window_pane_g8_ParamLimits

0xd485,	// (0x0005d448) bg_popup_window_pane_g8

0xd494,	// (0x0005d457) bg_popup_window_pane_g9_ParamLimits

0xd494,	// (0x0005d457) bg_popup_window_pane_g9

0x58b0,	// (0x00055873) bg_popup_window_pane_g10_ParamLimits

0x58b0,	// (0x00055873) bg_popup_window_pane_g10

0x0009,

0xf90e,	// (0x0005f8d1) bg_popup_window_pane_g_ParamLimits

0xf90e,	// (0x0005f8d1) bg_popup_window_pane_g

0x57d9,	// (0x0005579c) bg_popup_heading_pane_ParamLimits

0x57d9,	// (0x0005579c) bg_popup_heading_pane

0x1193,	// (0x00051156) tabs_4_passive_pane_cp_srt_ParamLimits

0x1193,	// (0x00051156) tabs_4_passive_pane_cp_srt

0x11a5,	// (0x00051168) tabs_4_passive_pane_srt_ParamLimits

0x57ed,	// (0x000557b0) heading_pane_g2

0x11a5,	// (0x00051168) tabs_4_passive_pane_srt

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp3_srt

0x57f5,	// (0x000557b8) heading_pane_t1_ParamLimits

0x57f5,	// (0x000557b8) heading_pane_t1

0x580c,	// (0x000557cf) heading_pane_t2_ParamLimits

0x580c,	// (0x000557cf) heading_pane_t2

0x0001,

0xf909,	// (0x0005f8cc) heading_pane_t_ParamLimits

0xf909,	// (0x0005f8cc) heading_pane_t

0x5304,	// (0x000552c7) bg_popup_heading_pane_g1

0x53b3,	// (0x00055376) bg_popup_heading_pane_g2

0x53bd,	// (0x00055380) bg_popup_heading_pane_g3

0x53c7,	// (0x0005538a) bg_popup_heading_pane_g4

0x53d1,	// (0x00055394) bg_popup_heading_pane_g5

0x53db,	// (0x0005539e) bg_popup_heading_pane_g6

0x53e3,	// (0x000553a6) bg_popup_heading_pane_g7

0x53eb,	// (0x000553ae) bg_popup_heading_pane_g8

0x53f5,	// (0x000553b8) bg_popup_heading_pane_g9

0x0008,

0xf8c5,	// (0x0005f888) bg_popup_heading_pane_g

0x4aed,	// (0x00054ab0) bg_popup_sub_pane_g1

0x4afd,	// (0x00054ac0) bg_popup_sub_pane_g2

0x4af5,	// (0x00054ab8) bg_popup_sub_pane_g3

0x4b0d,	// (0x00054ad0) bg_popup_sub_pane_g4

0x4b05,	// (0x00054ac8) bg_popup_sub_pane_g5

0x4b15,	// (0x00054ad8) bg_popup_sub_pane_g6

0x4b1d,	// (0x00054ae0) bg_popup_sub_pane_g7

0x4b2d,	// (0x00054af0) bg_popup_sub_pane_g8

0x4b25,	// (0x00054ae8) bg_popup_sub_pane_g9

0x0008,

0xf89f,	// (0x0005f862) bg_popup_sub_pane_g

0x24d7,	// (0x0005249a) bg_popup_window_pane_cp5_ParamLimits

0x24d7,	// (0x0005249a) bg_popup_window_pane_cp5

0x24f3,	// (0x000524b6) popup_note_window_g1_ParamLimits

0x24f3,	// (0x000524b6) popup_note_window_g1

0x24ff,	// (0x000524c2) popup_note_window_t1_ParamLimits

0x24ff,	// (0x000524c2) popup_note_window_t1

0x2515,	// (0x000524d8) popup_note_window_t2_ParamLimits

0x2515,	// (0x000524d8) popup_note_window_t2

0x252b,	// (0x000524ee) popup_note_window_t3_ParamLimits

0x252b,	// (0x000524ee) popup_note_window_t3

0x2541,	// (0x00052504) popup_note_window_t4_ParamLimits

0x2541,	// (0x00052504) popup_note_window_t4

0x2569,	// (0x0005252c) popup_note_window_t5_ParamLimits

0x2569,	// (0x0005252c) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0005f586) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0005f586) popup_note_window_t

0x258d,	// (0x00052550) bg_popup_window_pane_cp6_ParamLimits

0x258d,	// (0x00052550) bg_popup_window_pane_cp6

0x5280,	// (0x00055243) popup_note_image_window_g1_ParamLimits

0x5280,	// (0x00055243) popup_note_image_window_g1

0x528c,	// (0x0005524f) popup_note_image_window_g2_ParamLimits

0x528c,	// (0x0005524f) popup_note_image_window_g2

0x0001,

0xf893,	// (0x0005f856) popup_note_image_window_g_ParamLimits

0xf893,	// (0x0005f856) popup_note_image_window_g

0x52a5,	// (0x00055268) popup_note_image_window_t1_ParamLimits

0x52a5,	// (0x00055268) popup_note_image_window_t1

0x52be,	// (0x00055281) popup_note_image_window_t2_ParamLimits

0x52be,	// (0x00055281) popup_note_image_window_t2

0x52d7,	// (0x0005529a) popup_note_image_window_t3_ParamLimits

0x52d7,	// (0x0005529a) popup_note_image_window_t3

0x0002,

0xf898,	// (0x0005f85b) popup_note_image_window_t_ParamLimits

0xf898,	// (0x0005f85b) popup_note_image_window_t

0x5140,	// (0x00055103) bg_popup_window_pane_cp7_ParamLimits

0x5140,	// (0x00055103) bg_popup_window_pane_cp7

0x5170,	// (0x00055133) popup_note_wait_window_g1_ParamLimits

0x5170,	// (0x00055133) popup_note_wait_window_g1

0x517c,	// (0x0005513f) popup_note_wait_window_g2_ParamLimits

0x517c,	// (0x0005513f) popup_note_wait_window_g2

0x0002,

0xf881,	// (0x0005f844) popup_note_wait_window_g_ParamLimits

0xf881,	// (0x0005f844) popup_note_wait_window_g

0x5194,	// (0x00055157) popup_note_wait_window_t1_ParamLimits

0x5194,	// (0x00055157) popup_note_wait_window_t1

0x51bb,	// (0x0005517e) popup_note_wait_window_t2_ParamLimits

0x51bb,	// (0x0005517e) popup_note_wait_window_t2

0x51d9,	// (0x0005519c) popup_note_wait_window_t3_ParamLimits

0x51d9,	// (0x0005519c) popup_note_wait_window_t3

0x51ec,	// (0x000551af) popup_note_wait_window_t4_ParamLimits

0x51ec,	// (0x000551af) popup_note_wait_window_t4

0x0004,

0xf888,	// (0x0005f84b) popup_note_wait_window_t_ParamLimits

0xf888,	// (0x0005f84b) popup_note_wait_window_t

0x5211,	// (0x000551d4) wait_bar_pane_ParamLimits

0x5211,	// (0x000551d4) wait_bar_pane

0x217b,	// (0x0005213e) wait_anim_pane

0x217b,	// (0x0005213e) wait_border_pane

0x2171,	// (0x00052134) wait_anim_pane_g1

0x2171,	// (0x00052134) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x0005f70f) wait_anim_pane_g

0x50e4,	// (0x000550a7) wait_border_pane_g1

0x50ef,	// (0x000550b2) wait_border_pane_g2

0x50f8,	// (0x000550bb) wait_border_pane_g3

0x0002,

0xf87a,	// (0x0005f83d) wait_border_pane_g

0x5040,	// (0x00055003) bg_popup_window_pane_cp16_ParamLimits

0x5040,	// (0x00055003) bg_popup_window_pane_cp16

0x504e,	// (0x00055011) indicator_popup_pane_cp4_ParamLimits

0x504e,	// (0x00055011) indicator_popup_pane_cp4

0x5062,	// (0x00055025) popup_query_data_window_t1_ParamLimits

0x5062,	// (0x00055025) popup_query_data_window_t1

0x5074,	// (0x00055037) popup_query_data_window_t2_ParamLimits

0x5074,	// (0x00055037) popup_query_data_window_t2

0x508d,	// (0x00055050) popup_query_data_window_t3_ParamLimits

0x508d,	// (0x00055050) popup_query_data_window_t3

0x0002,

0xf873,	// (0x0005f836) popup_query_data_window_t_ParamLimits

0xf873,	// (0x0005f836) popup_query_data_window_t

0x50a7,	// (0x0005506a) query_popup_data_pane_ParamLimits

0x50a7,	// (0x0005506a) query_popup_data_pane

0x50bb,	// (0x0005507e) query_popup_data_pane_cp1_ParamLimits

0x50bb,	// (0x0005507e) query_popup_data_pane_cp1

0x258d,	// (0x00052550) bg_popup_window_pane_cp10_ParamLimits

0x258d,	// (0x00052550) bg_popup_window_pane_cp10

0x4fa3,	// (0x00054f66) indicator_popup_pane_ParamLimits

0x4fa3,	// (0x00054f66) indicator_popup_pane

0x25ee,	// (0x000525b1) popup_query_code_window_t1_ParamLimits

0x25ee,	// (0x000525b1) popup_query_code_window_t1

0x4fbb,	// (0x00054f7e) popup_query_code_window_t2_ParamLimits

0x4fbb,	// (0x00054f7e) popup_query_code_window_t2

0x4ff9,	// (0x00054fbc) popup_query_code_window_t3_ParamLimits

0x4ff9,	// (0x00054fbc) popup_query_code_window_t3

0x0002,

0xf86c,	// (0x0005f82f) popup_query_code_window_t_ParamLimits

0xf86c,	// (0x0005f82f) popup_query_code_window_t

0x5028,	// (0x00054feb) query_popup_pane_ParamLimits

0x5028,	// (0x00054feb) query_popup_pane

0x258d,	// (0x00052550) bg_popup_window_pane_cp15_ParamLimits

0x258d,	// (0x00052550) bg_popup_window_pane_cp15

0x25ad,	// (0x00052570) indicator_popup_pane_cp1_ParamLimits

0x25ad,	// (0x00052570) indicator_popup_pane_cp1

0x25c0,	// (0x00052583) indicator_popup_pane_cp2_ParamLimits

0x25c0,	// (0x00052583) indicator_popup_pane_cp2

0x25db,	// (0x0005259e) popup_query_data_code_window_g1_ParamLimits

0x25db,	// (0x0005259e) popup_query_data_code_window_g1

0x25ee,	// (0x000525b1) popup_query_data_code_window_t1_ParamLimits

0x25ee,	// (0x000525b1) popup_query_data_code_window_t1

0x2600,	// (0x000525c3) popup_query_data_code_window_t2_ParamLimits

0x2600,	// (0x000525c3) popup_query_data_code_window_t2

0x2612,	// (0x000525d5) popup_query_data_code_window_t3_ParamLimits

0x2612,	// (0x000525d5) popup_query_data_code_window_t3

0x2628,	// (0x000525eb) popup_query_data_code_window_t4_ParamLimits

0x2628,	// (0x000525eb) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0005f591) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0005f591) popup_query_data_code_window_t

0x0d67,	// (0x00050d2a) list_single_midp_graphic_pane_g3

0x2642,	// (0x00052605) query_popup_data_pane_cp2_ParamLimits

0x2655,	// (0x00052618) query_popup_pane_cp2_ParamLimits

0x2655,	// (0x00052618) query_popup_pane_cp2

0x217b,	// (0x0005213e) bg_popup_window_pane_cp11

0x4f77,	// (0x00054f3a) heading_pane_cp5

0x2745,	// (0x00052708) listscroll_popup_info_pane

0x217b,	// (0x0005213e) input_focus_pane_cp3

0x2670,	// (0x00052633) query_popup_pane_t1

0x267e,	// (0x00052641) list_popup_info_pane_ParamLimits

0x267e,	// (0x00052641) list_popup_info_pane

0x268d,	// (0x00052650) listscroll_popup_info_pane_g1

0x2695,	// (0x00052658) scroll_pane_cp7

0x269f,	// (0x00052662) popup_info_list_pane_t1_ParamLimits

0x269f,	// (0x00052662) popup_info_list_pane_t1

0x26b9,	// (0x0005267c) popup_info_list_pane_t2_ParamLimits

0x26b9,	// (0x0005267c) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0005f59a) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0005f59a) popup_info_list_pane_t

0x217b,	// (0x0005213e) bg_popup_window_pane_cp12

0x6333,	// (0x000562f6) find_popup_pane

0x225b,	// (0x0005221e) bg_popup_window_pane_cp3

0x26d3,	// (0x00052696) heading_pane_cp3

0x26df,	// (0x000526a2) listscroll_popup_graphic_pane

0x217b,	// (0x0005213e) bg_popup_window_pane_cp4

0xc251,	// (0x0005c214) heading_pane_cp4

0x2745,	// (0x00052708) listscroll_popup_colour_pane

0xc25b,	// (0x0005c21e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc25b,	// (0x0005c21e) cell_large_graphic_colour_none_popup_pane

0xc26f,	// (0x0005c232) grid_large_graphic_colour_popup_pane_ParamLimits

0xc26f,	// (0x0005c232) grid_large_graphic_colour_popup_pane

0xc29b,	// (0x0005c25e) listscroll_popup_colour_pane_g1_ParamLimits

0xc29b,	// (0x0005c25e) listscroll_popup_colour_pane_g1

0xc2b2,	// (0x0005c275) listscroll_popup_colour_pane_g2_ParamLimits

0xc2b2,	// (0x0005c275) listscroll_popup_colour_pane_g2

0xc2c9,	// (0x0005c28c) listscroll_popup_colour_pane_g3_ParamLimits

0xc2c9,	// (0x0005c28c) listscroll_popup_colour_pane_g3

0xc2d9,	// (0x0005c29c) listscroll_popup_colour_pane_g4_ParamLimits

0xc2d9,	// (0x0005c29c) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0005f59f) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0005f59f) listscroll_popup_colour_pane_g

0x27df,	// (0x000527a2) scroll_pane_cp6_ParamLimits

0x27df,	// (0x000527a2) scroll_pane_cp6

0xc2ed,	// (0x0005c2b0) cell_large_graphic_colour_popup_pane_ParamLimits

0xc2ed,	// (0x0005c2b0) cell_large_graphic_colour_popup_pane

0x2cfd,	// (0x00052cc0) cell_large_graphic_colour_none_popup_pane_t1

0x217b,	// (0x0005213e) grid_highlight_pane_cp5

0x2d0c,	// (0x00052ccf) cell_large_graphic_colour_popup_pane_g1

0x2d14,	// (0x00052cd7) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0005f5a8) cell_large_graphic_colour_popup_pane_g

0x2d1c,	// (0x00052cdf) cell_large_graphic_colour_popup_pane_g2_copy1

0x2d25,	// (0x00052ce8) grid_highlight_pane_cp4

0x2d2d,	// (0x00052cf0) bg_popup_window_pane_cp8_ParamLimits

0x2d2d,	// (0x00052cf0) bg_popup_window_pane_cp8

0x2d48,	// (0x00052d0b) popup_snote_single_text_window_g1_ParamLimits

0x2d48,	// (0x00052d0b) popup_snote_single_text_window_g1

0x2d5a,	// (0x00052d1d) popup_snote_single_text_window_t1_ParamLimits

0x2d5a,	// (0x00052d1d) popup_snote_single_text_window_t1

0x2d6d,	// (0x00052d30) popup_snote_single_text_window_t2_ParamLimits

0x2d6d,	// (0x00052d30) popup_snote_single_text_window_t2

0x2d80,	// (0x00052d43) popup_snote_single_text_window_t3_ParamLimits

0x2d80,	// (0x00052d43) popup_snote_single_text_window_t3

0x2db9,	// (0x00052d7c) popup_snote_single_text_window_t4_ParamLimits

0x2db9,	// (0x00052d7c) popup_snote_single_text_window_t4

0x2ded,	// (0x00052db0) popup_snote_single_text_window_t5_ParamLimits

0x2ded,	// (0x00052db0) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0005f5ad) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0005f5ad) popup_snote_single_text_window_t

0x2e1c,	// (0x00052ddf) bg_popup_window_pane_cp9_ParamLimits

0x2e1c,	// (0x00052ddf) bg_popup_window_pane_cp9

0x2d48,	// (0x00052d0b) popup_snote_single_graphic_window_g1_ParamLimits

0x2d48,	// (0x00052d0b) popup_snote_single_graphic_window_g1

0x2e2a,	// (0x00052ded) popup_snote_single_graphic_window_g2_ParamLimits

0x2e2a,	// (0x00052ded) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0005f5b8) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0005f5b8) popup_snote_single_graphic_window_g

0x2e36,	// (0x00052df9) popup_snote_single_graphic_window_t1_ParamLimits

0x2e36,	// (0x00052df9) popup_snote_single_graphic_window_t1

0x2e49,	// (0x00052e0c) popup_snote_single_graphic_window_t2_ParamLimits

0x2e49,	// (0x00052e0c) popup_snote_single_graphic_window_t2

0x2e5c,	// (0x00052e1f) popup_snote_single_graphic_window_t3_ParamLimits

0x2e5c,	// (0x00052e1f) popup_snote_single_graphic_window_t3

0x2e95,	// (0x00052e58) popup_snote_single_graphic_window_t4_ParamLimits

0x2e95,	// (0x00052e58) popup_snote_single_graphic_window_t4

0x2ec9,	// (0x00052e8c) popup_snote_single_graphic_window_t5_ParamLimits

0x2ec9,	// (0x00052e8c) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0005f5bd) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0005f5bd) popup_snote_single_graphic_window_t

0x6271,	// (0x00056234) grid_graphic_popup_pane_ParamLimits

0x6271,	// (0x00056234) grid_graphic_popup_pane

0x629f,	// (0x00056262) listscroll_popup_graphic_pane_g1_ParamLimits

0x629f,	// (0x00056262) listscroll_popup_graphic_pane_g1

0xd82e,	// (0x0005d7f1) listscroll_popup_graphic_pane_g2_ParamLimits

0xd82e,	// (0x0005d7f1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9e9,	// (0x0005f9ac) listscroll_popup_graphic_pane_g_ParamLimits

0xf9e9,	// (0x0005f9ac) listscroll_popup_graphic_pane_g

0x62c7,	// (0x0005628a) scroll_pane_cp5

0xd7ee,	// (0x0005d7b1) cell_graphic_popup_pane_ParamLimits

0xd7ee,	// (0x0005d7b1) cell_graphic_popup_pane

0x61fa,	// (0x000561bd) cell_graphic_popup_pane_g1

0x6202,	// (0x000561c5) cell_graphic_popup_pane_g2

0x2d1c,	// (0x00052cdf) cell_graphic_popup_pane_g3

0x0002,

0xf9e2,	// (0x0005f9a5) cell_graphic_popup_pane_g

0x620b,	// (0x000561ce) cell_graphic_popup_pane_t2

0x2d25,	// (0x00052ce8) grid_highlight_pane_cp3

0x2f0a,	// (0x00052ecd) list_gen_pane_ParamLimits

0x2f0a,	// (0x00052ecd) list_gen_pane

0x2f3c,	// (0x00052eff) scroll_pane

0xd7a9,	// (0x0005d76c) bg_list_pane_g1_ParamLimits

0xd7a9,	// (0x0005d76c) bg_list_pane_g1

0x6177,	// (0x0005613a) bg_list_pane_g2_ParamLimits

0x6177,	// (0x0005613a) bg_list_pane_g2

0x618a,	// (0x0005614d) bg_list_pane_g3_ParamLimits

0x618a,	// (0x0005614d) bg_list_pane_g3

0x619c,	// (0x0005615f) bg_list_pane_g4_ParamLimits

0x619c,	// (0x0005615f) bg_list_pane_g4

0xd7c4,	// (0x0005d787) bg_list_pane_g5_ParamLimits

0xd7c4,	// (0x0005d787) bg_list_pane_g5

0x0004,

0xf9d7,	// (0x0005f99a) bg_list_pane_g_ParamLimits

0xf9d7,	// (0x0005f99a) bg_list_pane_g

0xd76c,	// (0x0005d72f) list_double2_graphic_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double2_graphic_large_graphic_pane

0xd76c,	// (0x0005d72f) list_double2_graphic_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double2_graphic_pane

0xd76c,	// (0x0005d72f) list_double2_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double2_large_graphic_pane

0xd76c,	// (0x0005d72f) list_double2_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double2_pane

0xd76c,	// (0x0005d72f) list_double_graphic_heading_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_graphic_heading_pane

0xd76c,	// (0x0005d72f) list_double_graphic_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_graphic_pane

0xd76c,	// (0x0005d72f) list_double_heading_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_heading_pane

0xd76c,	// (0x0005d72f) list_double_large_graphic_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_large_graphic_pane

0xd76c,	// (0x0005d72f) list_double_number_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_number_pane

0xd76c,	// (0x0005d72f) list_double_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_pane

0xd76c,	// (0x0005d72f) list_double_time_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_double_time_pane

0xd76c,	// (0x0005d72f) list_setting_number_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_setting_number_pane

0xd76c,	// (0x0005d72f) list_setting_pane_ParamLimits

0xd76c,	// (0x0005d72f) list_setting_pane

0xd780,	// (0x0005d743) list_single_2graphic_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_2graphic_pane

0xd780,	// (0x0005d743) list_single_graphic_heading_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_graphic_heading_pane

0xd780,	// (0x0005d743) list_single_graphic_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_graphic_pane

0xd780,	// (0x0005d743) list_single_heading_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_heading_pane

0xd780,	// (0x0005d743) list_single_large_graphic_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_large_graphic_pane

0xd780,	// (0x0005d743) list_single_number_heading_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_number_heading_pane

0xd780,	// (0x0005d743) list_single_number_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_number_pane

0xd780,	// (0x0005d743) list_single_pane_ParamLimits

0xd780,	// (0x0005d743) list_single_pane

0x217b,	// (0x0005213e) list_highlight_pane_cp1

0x3ba4,	// (0x00053b67) list_single_pane_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_single_pane_g1

0x28dd,	// (0x000528a0) list_single_pane_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_pane_g2

0x0001,

0xf616,	// (0x0005f5d9) list_single_pane_g_ParamLimits

0xf616,	// (0x0005f5d9) list_single_pane_g

0x1286,	// (0x00051249) list_single_pane_t1_ParamLimits

0x1286,	// (0x00051249) list_single_pane_t1

0x3ba4,	// (0x00053b67) list_single_number_pane_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_single_number_pane_g1

0x28dd,	// (0x000528a0) list_single_number_pane_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_number_pane_g2

0x0001,

0xf616,	// (0x0005f5d9) list_single_number_pane_g_ParamLimits

0xf616,	// (0x0005f5d9) list_single_number_pane_g

0x0d2c,	// (0x00050cef) list_single_number_pane_t1_ParamLimits

0x0d2c,	// (0x00050cef) list_single_number_pane_t1

0xbb31,	// (0x0005baf4) list_single_number_pane_t2_ParamLimits

0xbb31,	// (0x0005baf4) list_single_number_pane_t2

0x0001,

0xf998,	// (0x0005f95b) list_single_number_pane_t_ParamLimits

0xf998,	// (0x0005f95b) list_single_number_pane_t

0xb1d8,	// (0x0005b19b) list_single_graphic_pane_g1_ParamLimits

0xb1d8,	// (0x0005b19b) list_single_graphic_pane_g1

0x3ba4,	// (0x00053b67) list_single_graphic_pane_g2_ParamLimits

0x3ba4,	// (0x00053b67) list_single_graphic_pane_g2

0x28dd,	// (0x000528a0) list_single_graphic_pane_g3_ParamLimits

0x28dd,	// (0x000528a0) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0005f5c8) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0005f5c8) list_single_graphic_pane_g

0x2b69,	// (0x00052b2c) list_single_graphic_pane_t1_ParamLimits

0x2b69,	// (0x00052b2c) list_single_graphic_pane_t1

0xb1e4,	// (0x0005b1a7) list_single_heading_pane_g1_ParamLimits

0xb1e4,	// (0x0005b1a7) list_single_heading_pane_g1

0x28dd,	// (0x000528a0) list_single_heading_pane_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0005f5cf) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0005f5cf) list_single_heading_pane_g

0xb1f7,	// (0x0005b1ba) list_single_heading_pane_t1_ParamLimits

0xb1f7,	// (0x0005b1ba) list_single_heading_pane_t1

0xc318,	// (0x0005c2db) list_single_heading_pane_t2_ParamLimits

0xc318,	// (0x0005c2db) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0005f5d4) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0005f5d4) list_single_heading_pane_t

0x3ba4,	// (0x00053b67) list_single_number_heading_pane_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_single_number_heading_pane_g1

0x28dd,	// (0x000528a0) list_single_number_heading_pane_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x0005f5d9) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x0005f5d9) list_single_number_heading_pane_g

0x129c,	// (0x0005125f) list_single_number_heading_pane_t1_ParamLimits

0x129c,	// (0x0005125f) list_single_number_heading_pane_t1

0xb20d,	// (0x0005b1d0) list_single_number_heading_pane_t2_ParamLimits

0xb20d,	// (0x0005b1d0) list_single_number_heading_pane_t2

0x1260,	// (0x00051223) list_single_number_heading_pane_t3_ParamLimits

0x1260,	// (0x00051223) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x0005f5de) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x0005f5de) list_single_number_heading_pane_t

0xb21f,	// (0x0005b1e2) list_single_graphic_heading_pane_g1_ParamLimits

0xb21f,	// (0x0005b1e2) list_single_graphic_heading_pane_g1

0xc32a,	// (0x0005c2ed) list_single_graphic_heading_pane_g4_ParamLimits

0xc32a,	// (0x0005c2ed) list_single_graphic_heading_pane_g4

0x28dd,	// (0x000528a0) list_single_graphic_heading_pane_g5_ParamLimits

0x28dd,	// (0x000528a0) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x0005f5e5) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0005f5e5) list_single_graphic_heading_pane_g

0x129c,	// (0x0005125f) list_single_graphic_heading_pane_t1_ParamLimits

0x129c,	// (0x0005125f) list_single_graphic_heading_pane_t1

0xb237,	// (0x0005b1fa) list_single_graphic_heading_pane_t2_ParamLimits

0xb237,	// (0x0005b1fa) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0005f5ec) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0005f5ec) list_single_graphic_heading_pane_t

0x292d,	// (0x000528f0) list_single_large_graphic_pane_g1_ParamLimits

0x292d,	// (0x000528f0) list_single_large_graphic_pane_g1

0x3ba4,	// (0x00053b67) list_single_large_graphic_pane_g2_ParamLimits

0x3ba4,	// (0x00053b67) list_single_large_graphic_pane_g2

0x28dd,	// (0x000528a0) list_single_large_graphic_pane_g3_ParamLimits

0x28dd,	// (0x000528a0) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x0005f5f1) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x0005f5f1) list_single_large_graphic_pane_g

0x50ef,	// (0x000550b2) wait_border_pane_g2_copy1

0xc33b,	// (0x0005c2fe) list_single_large_graphic_pane_g4_cp2

0x129c,	// (0x0005125f) list_single_large_graphic_pane_t1_ParamLimits

0x129c,	// (0x0005125f) list_single_large_graphic_pane_t1

0x2fe3,	// (0x00052fa6) list_double_pane_g1_ParamLimits

0x2fe3,	// (0x00052fa6) list_double_pane_g1

0xc343,	// (0x0005c306) list_double_pane_g2_ParamLimits

0xc343,	// (0x0005c306) list_double_pane_g2

0x0001,

0xf635,	// (0x0005f5f8) list_double_pane_g_ParamLimits

0xf635,	// (0x0005f5f8) list_double_pane_g

0xb24f,	// (0x0005b212) list_double_pane_t1_ParamLimits

0xb24f,	// (0x0005b212) list_double_pane_t1

0xb265,	// (0x0005b228) list_double_pane_t2_ParamLimits

0xb265,	// (0x0005b228) list_double_pane_t2

0x0001,

0xf63a,	// (0x0005f5fd) list_double_pane_t_ParamLimits

0xf63a,	// (0x0005f5fd) list_double_pane_t

0xb277,	// (0x0005b23a) list_double2_pane_g1_ParamLimits

0xb277,	// (0x0005b23a) list_double2_pane_g1

0xb288,	// (0x0005b24b) list_double2_pane_g2_ParamLimits

0xb288,	// (0x0005b24b) list_double2_pane_g2

0x0001,

0xf63f,	// (0x0005f602) list_double2_pane_g_ParamLimits

0xf63f,	// (0x0005f602) list_double2_pane_g

0xb294,	// (0x0005b257) list_double2_pane_t1_ParamLimits

0xb294,	// (0x0005b257) list_double2_pane_t1

0xb2aa,	// (0x0005b26d) list_double2_pane_t2_ParamLimits

0xb2aa,	// (0x0005b26d) list_double2_pane_t2

0x0001,

0xf644,	// (0x0005f607) list_double2_pane_t_ParamLimits

0xf644,	// (0x0005f607) list_double2_pane_t

0x2fe3,	// (0x00052fa6) list_double_number_pane_g1_ParamLimits

0x2fe3,	// (0x00052fa6) list_double_number_pane_g1

0xc343,	// (0x0005c306) list_double_number_pane_g2_ParamLimits

0xc343,	// (0x0005c306) list_double_number_pane_g2

0x0001,

0xf635,	// (0x0005f5f8) list_double_number_pane_g_ParamLimits

0xf635,	// (0x0005f5f8) list_double_number_pane_g

0xb2bc,	// (0x0005b27f) list_double_number_pane_t1_ParamLimits

0xb2bc,	// (0x0005b27f) list_double_number_pane_t1

0xb2ce,	// (0x0005b291) list_double_number_pane_t2_ParamLimits

0xb2ce,	// (0x0005b291) list_double_number_pane_t2

0xb2e4,	// (0x0005b2a7) list_double_number_pane_t3_ParamLimits

0xb2e4,	// (0x0005b2a7) list_double_number_pane_t3

0x0002,

0xf649,	// (0x0005f60c) list_double_number_pane_t_ParamLimits

0xf649,	// (0x0005f60c) list_double_number_pane_t

0xb2f6,	// (0x0005b2b9) list_double_graphic_pane_g1_ParamLimits

0xb2f6,	// (0x0005b2b9) list_double_graphic_pane_g1

0xb302,	// (0x0005b2c5) list_double_graphic_pane_g2_ParamLimits

0xb302,	// (0x0005b2c5) list_double_graphic_pane_g2

0xb311,	// (0x0005b2d4) list_double_graphic_pane_g3_ParamLimits

0xb311,	// (0x0005b2d4) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x0005f613) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x0005f613) list_double_graphic_pane_g

0xb329,	// (0x0005b2ec) list_double_graphic_pane_t1_ParamLimits

0xb329,	// (0x0005b2ec) list_double_graphic_pane_t1

0xb33f,	// (0x0005b302) list_double_graphic_pane_t2_ParamLimits

0xb33f,	// (0x0005b302) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x0005f61c) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x0005f61c) list_double_graphic_pane_t

0xb351,	// (0x0005b314) list_double2_graphic_pane_g1_ParamLimits

0xb351,	// (0x0005b314) list_double2_graphic_pane_g1

0xb35d,	// (0x0005b320) list_double2_graphic_pane_g2_ParamLimits

0xb35d,	// (0x0005b320) list_double2_graphic_pane_g2

0xb369,	// (0x0005b32c) list_double2_graphic_pane_g3_ParamLimits

0xb369,	// (0x0005b32c) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x0005f621) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x0005f621) list_double2_graphic_pane_g

0xb375,	// (0x0005b338) list_double2_graphic_pane_t1_ParamLimits

0xb375,	// (0x0005b338) list_double2_graphic_pane_t1

0xb38b,	// (0x0005b34e) list_double2_graphic_pane_t2_ParamLimits

0xb38b,	// (0x0005b34e) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x0005f628) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x0005f628) list_double2_graphic_pane_t

0xb39d,	// (0x0005b360) list_double_large_graphic_pane_g1_ParamLimits

0xb39d,	// (0x0005b360) list_double_large_graphic_pane_g1

0xb3c8,	// (0x0005b38b) list_double_large_graphic_pane_g2_ParamLimits

0xb3c8,	// (0x0005b38b) list_double_large_graphic_pane_g2

0xc343,	// (0x0005c306) list_double_large_graphic_pane_g3_ParamLimits

0xc343,	// (0x0005c306) list_double_large_graphic_pane_g3

0xb3de,	// (0x0005b3a1) list_double_large_graphic_pane_g4_ParamLimits

0xb3de,	// (0x0005b3a1) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x0005f62d) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x0005f62d) list_double_large_graphic_pane_g

0xb3f1,	// (0x0005b3b4) list_double_large_graphic_pane_t1_ParamLimits

0xb3f1,	// (0x0005b3b4) list_double_large_graphic_pane_t1

0xb40a,	// (0x0005b3cd) list_double_large_graphic_pane_t2_ParamLimits

0xb40a,	// (0x0005b3cd) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x0005f638) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x0005f638) list_double_large_graphic_pane_t

0xc34f,	// (0x0005c312) list_double2_large_graphic_pane_g1_ParamLimits

0xc34f,	// (0x0005c312) list_double2_large_graphic_pane_g1

0xb41c,	// (0x0005b3df) list_double2_large_graphic_pane_g2_ParamLimits

0xb41c,	// (0x0005b3df) list_double2_large_graphic_pane_g2

0xb369,	// (0x0005b32c) list_double2_large_graphic_pane_g3_ParamLimits

0xb369,	// (0x0005b32c) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x0005f63d) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x0005f63d) list_double2_large_graphic_pane_g

0xb42d,	// (0x0005b3f0) list_double2_large_graphic_pane_t1_ParamLimits

0xb42d,	// (0x0005b3f0) list_double2_large_graphic_pane_t1

0xb443,	// (0x0005b406) list_double2_large_graphic_pane_t2_ParamLimits

0xb443,	// (0x0005b406) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x0005f644) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x0005f644) list_double2_large_graphic_pane_t

0xb455,	// (0x0005b418) list_double_heading_pane_g1_ParamLimits

0xb455,	// (0x0005b418) list_double_heading_pane_g1

0xb466,	// (0x0005b429) list_double_heading_pane_g2_ParamLimits

0xb466,	// (0x0005b429) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x0005f649) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x0005f649) list_double_heading_pane_g

0xb472,	// (0x0005b435) list_double_heading_pane_t1_ParamLimits

0xb472,	// (0x0005b435) list_double_heading_pane_t1

0xb2aa,	// (0x0005b26d) list_double_heading_pane_t2_ParamLimits

0xb2aa,	// (0x0005b26d) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0005f64e) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0005f64e) list_double_heading_pane_t

0xb488,	// (0x0005b44b) list_double_graphic_heading_pane_g1_ParamLimits

0xb488,	// (0x0005b44b) list_double_graphic_heading_pane_g1

0xb455,	// (0x0005b418) list_double_graphic_heading_pane_g2_ParamLimits

0xb455,	// (0x0005b418) list_double_graphic_heading_pane_g2

0xb466,	// (0x0005b429) list_double_graphic_heading_pane_g3_ParamLimits

0xb466,	// (0x0005b429) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0005f653) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0005f653) list_double_graphic_heading_pane_g

0xb494,	// (0x0005b457) list_double_graphic_heading_pane_t1_ParamLimits

0xb494,	// (0x0005b457) list_double_graphic_heading_pane_t1

0xb38b,	// (0x0005b34e) list_double_graphic_heading_pane_t2_ParamLimits

0xb38b,	// (0x0005b34e) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x0005f65a) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x0005f65a) list_double_graphic_heading_pane_t

0xb4aa,	// (0x0005b46d) list_double_time_pane_g1_ParamLimits

0xb4aa,	// (0x0005b46d) list_double_time_pane_g1

0xb4bb,	// (0x0005b47e) list_double_time_pane_g2_ParamLimits

0xb4bb,	// (0x0005b47e) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0005f65f) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0005f65f) list_double_time_pane_g

0xb4c7,	// (0x0005b48a) list_double_time_pane_t1_ParamLimits

0xb4c7,	// (0x0005b48a) list_double_time_pane_t1

0xb4dd,	// (0x0005b4a0) list_double_time_pane_t2_ParamLimits

0xb4dd,	// (0x0005b4a0) list_double_time_pane_t2

0xb4ef,	// (0x0005b4b2) list_double_time_pane_t3_ParamLimits

0xb4ef,	// (0x0005b4b2) list_double_time_pane_t3

0xb501,	// (0x0005b4c4) list_double_time_pane_t4_ParamLimits

0xb501,	// (0x0005b4c4) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x0005f664) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x0005f664) list_double_time_pane_t

0xb513,	// (0x0005b4d6) list_setting_pane_g1_ParamLimits

0xb513,	// (0x0005b4d6) list_setting_pane_g1

0xb288,	// (0x0005b24b) list_setting_pane_g2_ParamLimits

0xb288,	// (0x0005b24b) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x0005f66d) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x0005f66d) list_setting_pane_g

0xb51f,	// (0x0005b4e2) list_setting_pane_t1_ParamLimits

0xb51f,	// (0x0005b4e2) list_setting_pane_t1

0xb539,	// (0x0005b4fc) list_setting_pane_t2_ParamLimits

0xb539,	// (0x0005b4fc) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0005f672) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0005f672) list_setting_pane_t

0xb578,	// (0x0005b53b) set_value_pane_cp_ParamLimits

0xb578,	// (0x0005b53b) set_value_pane_cp

0xb586,	// (0x0005b549) list_setting_number_pane_g1_ParamLimits

0xb586,	// (0x0005b549) list_setting_number_pane_g1

0xb592,	// (0x0005b555) list_setting_number_pane_g2_ParamLimits

0xb592,	// (0x0005b555) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x0005f679) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x0005f679) list_setting_number_pane_g

0xb59e,	// (0x0005b561) list_setting_number_pane_t1_ParamLimits

0xb59e,	// (0x0005b561) list_setting_number_pane_t1

0xb5b7,	// (0x0005b57a) list_setting_number_pane_t2_ParamLimits

0xb5b7,	// (0x0005b57a) list_setting_number_pane_t2

0xb5d1,	// (0x0005b594) list_setting_number_pane_t3_ParamLimits

0xb5d1,	// (0x0005b594) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0005f67e) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0005f67e) list_setting_number_pane_t

0xb578,	// (0x0005b53b) set_value_pane_ParamLimits

0xb578,	// (0x0005b53b) set_value_pane

0x2f70,	// (0x00052f33) bg_set_opt_pane_ParamLimits

0x2f70,	// (0x00052f33) bg_set_opt_pane

0x042f,	// (0x000503f2) set_value_pane_t1

0x2f91,	// (0x00052f54) slider_set_pane_cp3

0x2f9a,	// (0x00052f5d) volume_small_pane_cp

0x2fa3,	// (0x00052f66) list_form_gen_pane

0x2fac,	// (0x00052f6f) scroll_pane_cp8

0xb614,	// (0x0005b5d7) form_field_data_pane_ParamLimits

0xb614,	// (0x0005b5d7) form_field_data_pane

0xb631,	// (0x0005b5f4) form_field_data_wide_pane_ParamLimits

0xb631,	// (0x0005b5f4) form_field_data_wide_pane

0xb655,	// (0x0005b618) form_field_popup_pane_ParamLimits

0xb655,	// (0x0005b618) form_field_popup_pane

0x04b6,	// (0x00050479) form_field_popup_wide_pane_ParamLimits

0x04b6,	// (0x00050479) form_field_popup_wide_pane

0x04d7,	// (0x0005049a) form_field_slider_pane_ParamLimits

0x04d7,	// (0x0005049a) form_field_slider_pane

0x04ea,	// (0x000504ad) form_field_slider_wide_pane_ParamLimits

0x04ea,	// (0x000504ad) form_field_slider_wide_pane

0x2fbd,	// (0x00052f80) data_form_pane

0xb681,	// (0x0005b644) form_field_data_pane_t1

0x2fc9,	// (0x00052f8c) input_focus_pane

0x2fd7,	// (0x00052f9a) data_form_wide_pane

0x052d,	// (0x000504f0) form_field_data_wide_pane_t1

0x2d3a,	// (0x00052cfd) input_focus_pane_cp6

0xb69b,	// (0x0005b65e) form_field_popup_pane_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_cp7

0x3003,	// (0x00052fc6) list_form_pane

0x0571,	// (0x00050534) form_field_popup_wide_pane_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_cp8

0x300f,	// (0x00052fd2) list_form_wide_pane

0xb6bd,	// (0x0005b680) form_field_slider_pane_t1_ParamLimits

0xb6bd,	// (0x0005b680) form_field_slider_pane_t1

0xb6d5,	// (0x0005b698) form_field_slider_pane_t2_ParamLimits

0xb6d5,	// (0x0005b698) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0005f68e) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0005f68e) form_field_slider_pane_t

0x24d7,	// (0x0005249a) input_focus_pane_cp9_ParamLimits

0x24d7,	// (0x0005249a) input_focus_pane_cp9

0xb6ea,	// (0x0005b6ad) slider_cont_pane_ParamLimits

0xb6ea,	// (0x0005b6ad) slider_cont_pane

0x301e,	// (0x00052fe1) form_field_slider_wide_pane_t1_ParamLimits

0x301e,	// (0x00052fe1) form_field_slider_wide_pane_t1

0x05cf,	// (0x00050592) form_field_slider_wide_pane_t2_ParamLimits

0x05cf,	// (0x00050592) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0005f693) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0005f693) form_field_slider_wide_pane_t

0x24d7,	// (0x0005249a) input_focus_pane_cp10_ParamLimits

0x24d7,	// (0x0005249a) input_focus_pane_cp10

0xb6fe,	// (0x0005b6c1) slider_cont_pane_cp1_ParamLimits

0xb6fe,	// (0x0005b6c1) slider_cont_pane_cp1

0xb712,	// (0x0005b6d5) slider_form_pane_cp

0x3030,	// (0x00052ff3) input_focus_pane_g1

0x3038,	// (0x00052ffb) input_focus_pane_g2

0x3040,	// (0x00053003) input_focus_pane_g3

0x3048,	// (0x0005300b) input_focus_pane_g4

0x3050,	// (0x00053013) input_focus_pane_g5

0x3058,	// (0x0005301b) input_focus_pane_g6

0x3060,	// (0x00053023) input_focus_pane_g7

0x3068,	// (0x0005302b) input_focus_pane_g8

0x3070,	// (0x00053033) input_focus_pane_g9

0x2171,	// (0x00052134) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x0005f698) input_focus_pane_g

0x50f8,	// (0x000550bb) wait_border_pane_g3_copy1

0xb71a,	// (0x0005b6dd) data_form_pane_t1

0x2171,	// (0x00052134) wait_anim_pane_g1_copy1

0xbb43,	// (0x0005bb06) data_form_wide_pane_t1

0x061c,	// (0x000505df) list_form_graphic_pane_cp_ParamLimits

0x061c,	// (0x000505df) list_form_graphic_pane_cp

0x607d,	// (0x00056040) slider_form_pane_g1

0x6086,	// (0x00056049) slider_form_pane_g2

0x0006,

0xf9c8,	// (0x0005f98b) slider_form_pane_g

0xb736,	// (0x0005b6f9) list_form_graphic_pane_ParamLimits

0xb736,	// (0x0005b6f9) list_form_graphic_pane

0x062e,	// (0x000505f1) list_form_graphic_pane_g1

0x0636,	// (0x000505f9) list_form_graphic_pane_t1_ParamLimits

0x0636,	// (0x000505f9) list_form_graphic_pane_t1

0x225b,	// (0x0005221e) list_highlight_pane_cp5_ParamLimits

0x225b,	// (0x0005221e) list_highlight_pane_cp5

0xb747,	// (0x0005b70a) find_pane_g1

0x3078,	// (0x0005303b) input_find_pane

0xb750,	// (0x0005b713) input_find_pane_g1_ParamLimits

0xb750,	// (0x0005b713) input_find_pane_g1

0xb75c,	// (0x0005b71f) input_find_pane_t1_ParamLimits

0xb75c,	// (0x0005b71f) input_find_pane_t1

0xb771,	// (0x0005b734) input_find_pane_t2_ParamLimits

0xb771,	// (0x0005b734) input_find_pane_t2

0x0001,

0xf6ea,	// (0x0005f6ad) input_find_pane_t_ParamLimits

0xf6ea,	// (0x0005f6ad) input_find_pane_t

0x3081,	// (0x00053044) input_focus_pane_cp5_ParamLimits

0x3081,	// (0x00053044) input_focus_pane_cp5

0xc367,	// (0x0005c32a) bg_popup_window_pane_cp2_ParamLimits

0xc367,	// (0x0005c32a) bg_popup_window_pane_cp2

0xc374,	// (0x0005c337) listscroll_menu_pane_ParamLimits

0xc374,	// (0x0005c337) listscroll_menu_pane

0xc380,	// (0x0005c343) popup_submenu_window_ParamLimits

0xc380,	// (0x0005c343) popup_submenu_window

0x30e4,	// (0x000530a7) find_popup_pane_g1

0x30ec,	// (0x000530af) input_popup_find_pane_cp

0x3081,	// (0x00053044) input_focus_pane_cp4_ParamLimits

0x3081,	// (0x00053044) input_focus_pane_cp4

0x3104,	// (0x000530c7) input_popup_find_pane_t1_ParamLimits

0x3104,	// (0x000530c7) input_popup_find_pane_t1

0x217b,	// (0x0005213e) bg_popup_sub_pane_cp

0x3132,	// (0x000530f5) listscroll_popup_sub_pane

0x313a,	// (0x000530fd) list_submenu_pane_ParamLimits

0x313a,	// (0x000530fd) list_submenu_pane

0x314b,	// (0x0005310e) scroll_pane_cp4

0x3153,	// (0x00053116) list_single_popup_submenu_pane_ParamLimits

0x3153,	// (0x00053116) list_single_popup_submenu_pane

0x3168,	// (0x0005312b) list_single_popup_submenu_pane_g1

0x3170,	// (0x00053133) list_single_popup_submenu_pane_t1_ParamLimits

0x3170,	// (0x00053133) list_single_popup_submenu_pane_t1

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp1_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp1

0xc3be,	// (0x0005c381) tabs_2_active_pane_g1

0xc3c6,	// (0x0005c389) tabs_2_active_pane_t1

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp1_ParamLimits

0x24d7,	// (0x0005249a) bg_passive_tab_pane_cp1

0xc3be,	// (0x0005c381) tabs_2_passive_pane_g1

0xc3c6,	// (0x0005c389) tabs_2_passive_pane_t1

0x225b,	// (0x0005221e) bg_active_tab_pane_cp4

0xc3d8,	// (0x0005c39b) tabs_2_long_active_pane_t1

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp4

0x0d6f,	// (0x00050d32) list_single_midp_graphic_pane_g4_ParamLimits

0x225b,	// (0x0005221e) bg_active_tab_pane_cp5

0xc3eb,	// (0x0005c3ae) tabs_3_long_active_pane_t1

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp5

0x0d6f,	// (0x00050d32) list_single_midp_graphic_pane_g4

0x225b,	// (0x0005221e) bg_popup_window_pane_cp13_ParamLimits

0x225b,	// (0x0005221e) bg_popup_window_pane_cp13

0x31e7,	// (0x000531aa) listscroll_popup_fast_pane_ParamLimits

0x31e7,	// (0x000531aa) listscroll_popup_fast_pane

0x31f6,	// (0x000531b9) grid_popup_fast_pane_ParamLimits

0x31f6,	// (0x000531b9) grid_popup_fast_pane

0x3208,	// (0x000531cb) scroll_pane_cp9_ParamLimits

0x3208,	// (0x000531cb) scroll_pane_cp9

0x79b0,	// (0x00057973) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x79b0,	// (0x00057973) list_single_graphic_hl_pane_t1_cp2

0x322c,	// (0x000531ef) input_focus_pane_cp20_ParamLimits

0x322c,	// (0x000531ef) input_focus_pane_cp20

0x323a,	// (0x000531fd) query_popup_data_pane_t1_ParamLimits

0x323a,	// (0x000531fd) query_popup_data_pane_t1

0x324d,	// (0x00053210) query_popup_data_pane_t2_ParamLimits

0x324d,	// (0x00053210) query_popup_data_pane_t2

0x3293,	// (0x00053256) query_popup_data_pane_t3_ParamLimits

0x3293,	// (0x00053256) query_popup_data_pane_t3

0x32d4,	// (0x00053297) query_popup_data_pane_t4_ParamLimits

0x32d4,	// (0x00053297) query_popup_data_pane_t4

0x3310,	// (0x000532d3) query_popup_data_pane_t5_ParamLimits

0x3310,	// (0x000532d3) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0005f6b2) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0005f6b2) query_popup_data_pane_t

0x3030,	// (0x00052ff3) bg_set_opt_pane_g1

0x3038,	// (0x00052ffb) bg_set_opt_pane_g2

0x3040,	// (0x00053003) bg_set_opt_pane_g3

0x3048,	// (0x0005300b) bg_set_opt_pane_g4

0x3050,	// (0x00053013) bg_set_opt_pane_g5

0x3058,	// (0x0005301b) bg_set_opt_pane_g6

0x3060,	// (0x00053023) bg_set_opt_pane_g7

0x3068,	// (0x0005302b) bg_set_opt_pane_g8

0x3070,	// (0x00053033) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x0005f6bd) bg_set_opt_pane_g

0x0992,	// (0x00050955) control_top_pane_stacon_ParamLimits

0x0992,	// (0x00050955) control_top_pane_stacon

0x09e5,	// (0x000509a8) signal_pane_stacon_ParamLimits

0x09e5,	// (0x000509a8) signal_pane_stacon

0x38c8,	// (0x0005388b) stacon_top_pane_g1_ParamLimits

0x38c8,	// (0x0005388b) stacon_top_pane_g1

0x0a0a,	// (0x000509cd) title_pane_stacon_ParamLimits

0x0a0a,	// (0x000509cd) title_pane_stacon

0x0a34,	// (0x000509f7) uni_indicator_pane_stacon_ParamLimits

0x0a34,	// (0x000509f7) uni_indicator_pane_stacon

0x0a4c,	// (0x00050a0f) battery_pane_stacon_ParamLimits

0x0a4c,	// (0x00050a0f) battery_pane_stacon

0x0a90,	// (0x00050a53) control_bottom_pane_stacon_ParamLimits

0x0a90,	// (0x00050a53) control_bottom_pane_stacon

0x0ab3,	// (0x00050a76) navi_pane_stacon_ParamLimits

0x0ab3,	// (0x00050a76) navi_pane_stacon

0x38ea,	// (0x000538ad) stacon_bottom_pane_g1_ParamLimits

0x38ea,	// (0x000538ad) stacon_bottom_pane_g1

0x0681,	// (0x00050644) aid_levels_signal_lsc_ParamLimits

0x0681,	// (0x00050644) aid_levels_signal_lsc

0x0698,	// (0x0005065b) signal_pane_stacon_g1_ParamLimits

0x0698,	// (0x0005065b) signal_pane_stacon_g1

0x06ac,	// (0x0005066f) signal_pane_stacon_g2_ParamLimits

0x06ac,	// (0x0005066f) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x0005f6d0) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x0005f6d0) signal_pane_stacon_g

0x06e1,	// (0x000506a4) title_pane_stacon_t1_ParamLimits

0x06e1,	// (0x000506a4) title_pane_stacon_t1

0x3354,	// (0x00053317) uni_indicator_pane_stacon_g1

0x335e,	// (0x00053321) uni_indicator_pane_stacon_g2

0x3368,	// (0x0005332b) uni_indicator_pane_stacon_g3

0x3372,	// (0x00053335) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x0005f6dc) uni_indicator_pane_stacon_g

0x0706,	// (0x000506c9) control_top_pane_stacon_g1

0x070e,	// (0x000506d1) control_top_pane_stacon_t1_ParamLimits

0x070e,	// (0x000506d1) control_top_pane_stacon_t1

0x0745,	// (0x00050708) aid_levels_battery_lsc_ParamLimits

0x0745,	// (0x00050708) aid_levels_battery_lsc

0x075d,	// (0x00050720) battery_pane_stacon_g1_ParamLimits

0x075d,	// (0x00050720) battery_pane_stacon_g1

0x0770,	// (0x00050733) battery_pane_stacon_g2_ParamLimits

0x0770,	// (0x00050733) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x0005f6e5) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x0005f6e5) battery_pane_stacon_g

0x07ae,	// (0x00050771) navi_icon_pane_stacon

0x07c2,	// (0x00050785) navi_navi_pane_stacon

0x07ae,	// (0x00050771) navi_text_pane_stacon

0x0706,	// (0x000506c9) control_bottom_pane_stacon_g1

0x07d8,	// (0x0005079b) control_bottom_pane_stacon_t1_ParamLimits

0x07d8,	// (0x0005079b) control_bottom_pane_stacon_t1

0xc3fd,	// (0x0005c3c0) grid_app_pane_ParamLimits

0xc3fd,	// (0x0005c3c0) grid_app_pane

0xc435,	// (0x0005c3f8) scroll_pane_cp15_ParamLimits

0xc435,	// (0x0005c3f8) scroll_pane_cp15

0xc452,	// (0x0005c415) cell_app_pane_ParamLimits

0xc452,	// (0x0005c415) cell_app_pane

0xc493,	// (0x0005c456) cell_app_pane_g1_ParamLimits

0xc493,	// (0x0005c456) cell_app_pane_g1

0x341f,	// (0x000533e2) cell_app_pane_g2_ParamLimits

0x341f,	// (0x000533e2) cell_app_pane_g2

0x0001,

0xf727,	// (0x0005f6ea) cell_app_pane_g_ParamLimits

0xf727,	// (0x0005f6ea) cell_app_pane_g

0x342b,	// (0x000533ee) cell_app_pane_t1_ParamLimits

0x342b,	// (0x000533ee) cell_app_pane_t1

0x343d,	// (0x00053400) grid_highlight_pane_ParamLimits

0x343d,	// (0x00053400) grid_highlight_pane

0x3030,	// (0x00052ff3) cell_highlight_pane_g1

0x3038,	// (0x00052ffb) cell_highlight_pane_g2

0x3040,	// (0x00053003) cell_highlight_pane_g3

0x3048,	// (0x0005300b) cell_highlight_pane_g4

0x3050,	// (0x00053013) cell_highlight_pane_g5

0x3058,	// (0x0005301b) cell_highlight_pane_g6

0x3060,	// (0x00053023) cell_highlight_pane_g7

0x3068,	// (0x0005302b) cell_highlight_pane_g8

0x3070,	// (0x00053033) cell_highlight_pane_g9

0x2171,	// (0x00052134) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x0005f698) cell_highlight_pane_g

0x344e,	// (0x00053411) bg_scroll_pane

0x0822,	// (0x000507e5) scroll_handle_pane

0x3495,	// (0x00053458) scroll_bg_pane_g1

0x34aa,	// (0x0005346d) scroll_bg_pane_g2

0x34c2,	// (0x00053485) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x0005f6ef) scroll_bg_pane_g

0x34d7,	// (0x0005349a) scroll_handle_focus_pane_ParamLimits

0x34d7,	// (0x0005349a) scroll_handle_focus_pane

0x3495,	// (0x00053458) scroll_handle_pane_g1

0x34e4,	// (0x000534a7) scroll_handle_pane_g2

0x34c2,	// (0x00053485) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x0005f6f6) scroll_handle_pane_g

0x3081,	// (0x00053044) bg_popup_sub_pane_cp21_ParamLimits

0x3081,	// (0x00053044) bg_popup_sub_pane_cp21

0x34f8,	// (0x000534bb) popup_fep_japan_predictive_window_t1_ParamLimits

0x34f8,	// (0x000534bb) popup_fep_japan_predictive_window_t1

0x350f,	// (0x000534d2) popup_fep_japan_predictive_window_t2_ParamLimits

0x350f,	// (0x000534d2) popup_fep_japan_predictive_window_t2

0x3542,	// (0x00053505) popup_fep_japan_predictive_window_t3_ParamLimits

0x3542,	// (0x00053505) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x0005f6fd) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x0005f6fd) popup_fep_japan_predictive_window_t

0x217b,	// (0x0005213e) bg_popup_sub_pane_cp23

0x3579,	// (0x0005353c) listscroll_japin_cand_pane

0x3581,	// (0x00053544) popup_fep_japan_candidate_window_t1

0x358f,	// (0x00053552) candidate_pane_ParamLimits

0x358f,	// (0x00053552) candidate_pane

0x35a1,	// (0x00053564) scroll_pane_cp30

0x35ab,	// (0x0005356e) list_single_popup_jap_candidate_pane_ParamLimits

0x35ab,	// (0x0005356e) list_single_popup_jap_candidate_pane

0x217b,	// (0x0005213e) list_highlight_pane_cp30

0x35bf,	// (0x00053582) list_single_popup_jap_candidate_pane_t1

0xc4b7,	// (0x0005c47a) level_1_signal

0xc4c9,	// (0x0005c48c) level_2_signal

0xc4dc,	// (0x0005c49f) level_3_signal

0xc4ef,	// (0x0005c4b2) level_4_signal

0xc502,	// (0x0005c4c5) level_5_signal

0xc515,	// (0x0005c4d8) level_6_signal

0xc528,	// (0x0005c4eb) level_7_signal

0xc4b7,	// (0x0005c47a) level_1_battery

0xc4c9,	// (0x0005c48c) level_2_battery

0xc4dc,	// (0x0005c49f) level_3_battery

0xc4ef,	// (0x0005c4b2) level_4_battery

0xc502,	// (0x0005c4c5) level_5_battery

0xc515,	// (0x0005c4d8) level_6_battery

0xc528,	// (0x0005c4eb) level_7_battery

0x3641,	// (0x00053604) list_menu_pane_ParamLimits

0x3641,	// (0x00053604) list_menu_pane

0x3652,	// (0x00053615) scroll_pane_cp25_ParamLimits

0x3652,	// (0x00053615) scroll_pane_cp25

0x366b,	// (0x0005362e) list_double2_graphic_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double2_graphic_pane_cp2

0x366b,	// (0x0005362e) list_double2_large_graphic_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double2_large_graphic_pane_cp2

0x366b,	// (0x0005362e) list_double2_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double2_pane_cp2

0x366b,	// (0x0005362e) list_double_graphic_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double_graphic_pane_cp2

0x366b,	// (0x0005362e) list_double_large_graphic_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double_large_graphic_pane_cp2

0x366b,	// (0x0005362e) list_double_number_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double_number_pane_cp2

0x366b,	// (0x0005362e) list_double_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_2graphic_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_2graphic_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_graphic_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_graphic_heading_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_graphic_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_graphic_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_heading_pane_cp2

0x36ae,	// (0x00053671) list_single_large_graphic_pane_cp2_ParamLimits

0x36ae,	// (0x00053671) list_single_large_graphic_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_number_heading_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_number_heading_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_number_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_number_pane_cp2

0xc53b,	// (0x0005c4fe) list_single_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_pane_cp2

0x3703,	// (0x000536c6) bg_popup_sub_pane_cp22

0x08d4,	// (0x00050897) popup_side_volume_key_window_g1

0x08fe,	// (0x000508c1) popup_side_volume_key_window_t1

0x091c,	// (0x000508df) volume_small_pane_cp1

0x24d7,	// (0x0005249a) bg_popup_sub_pane_cp24_ParamLimits

0x24d7,	// (0x0005249a) bg_popup_sub_pane_cp24

0x3719,	// (0x000536dc) fep_china_uni_candidate_pane_ParamLimits

0x3719,	// (0x000536dc) fep_china_uni_candidate_pane

0x372d,	// (0x000536f0) fep_china_uni_entry_pane

0x373d,	// (0x00053700) popup_fep_china_uni_window_g1

0x3759,	// (0x0005371c) fep_china_uni_entry_pane_g1

0x3763,	// (0x00053726) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x0005f72a) fep_china_uni_entry_pane_g

0x376d,	// (0x00053730) fep_entry_item_pane

0x3777,	// (0x0005373a) fep_candidate_item_pane

0x377f,	// (0x00053742) fep_china_uni_candidate_pane_g1

0x3789,	// (0x0005374c) fep_china_uni_candidate_pane_g2

0x3791,	// (0x00053754) fep_china_uni_candidate_pane_g3

0x3799,	// (0x0005375c) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0005f72f) fep_china_uni_candidate_pane_g

0x2171,	// (0x00052134) fep_entry_item_pane_g1

0x37a3,	// (0x00053766) fep_entry_item_pane_t1_ParamLimits

0x37a3,	// (0x00053766) fep_entry_item_pane_t1

0x37b9,	// (0x0005377c) fep_candidate_item_pane_t1_ParamLimits

0x37b9,	// (0x0005377c) fep_candidate_item_pane_t1

0x37ce,	// (0x00053791) fep_candidate_item_pane_t2_ParamLimits

0x37ce,	// (0x00053791) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x0005f738) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x0005f738) fep_candidate_item_pane_t

0x225b,	// (0x0005221e) list_highlight_pane_cp31_ParamLimits

0x225b,	// (0x0005221e) list_highlight_pane_cp31

0x37e0,	// (0x000537a3) level_1_signal_lsc

0x37e9,	// (0x000537ac) level_2_signal_lsc

0x37f2,	// (0x000537b5) level_3_signal_lsc

0x37fb,	// (0x000537be) level_4_signal_lsc

0x3804,	// (0x000537c7) level_5_signal_lsc

0x380d,	// (0x000537d0) level_6_signal_lsc

0x3816,	// (0x000537d9) level_7_signal_lsc

0x3816,	// (0x000537d9) level_1_battery_lsc

0x381f,	// (0x000537e2) level_2_battery_lsc

0x3828,	// (0x000537eb) level_3_battery_lsc

0x3831,	// (0x000537f4) level_4_battery_lsc

0x383a,	// (0x000537fd) level_5_battery_lsc

0x3843,	// (0x00053806) level_6_battery_lsc

0x37e0,	// (0x000537a3) level_7_battery_lsc

0x384c,	// (0x0005380f) scroll_handle_focus_pane_g1

0x3855,	// (0x00053818) scroll_handle_focus_pane_g2

0x385e,	// (0x00053821) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x0005f73d) scroll_handle_focus_pane_g

0xb78f,	// (0x0005b752) list_single_2graphic_pane_g1_ParamLimits

0xb78f,	// (0x0005b752) list_single_2graphic_pane_g1

0xc32a,	// (0x0005c2ed) list_single_2graphic_pane_g2_ParamLimits

0xc32a,	// (0x0005c2ed) list_single_2graphic_pane_g2

0x28dd,	// (0x000528a0) list_single_2graphic_pane_g3_ParamLimits

0x28dd,	// (0x000528a0) list_single_2graphic_pane_g3

0xc59e,	// (0x0005c561) list_single_2graphic_pane_g4_ParamLimits

0xc59e,	// (0x0005c561) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x0005f744) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x0005f744) list_single_2graphic_pane_g

0xb79b,	// (0x0005b75e) list_single_2graphic_pane_t1_ParamLimits

0xb79b,	// (0x0005b75e) list_single_2graphic_pane_t1

0xc5af,	// (0x0005c572) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc5af,	// (0x0005c572) list_double2_graphic_large_graphic_pane_g1

0xb41c,	// (0x0005b3df) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb41c,	// (0x0005b3df) list_double2_graphic_large_graphic_pane_g2

0xb369,	// (0x0005b32c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb369,	// (0x0005b32c) list_double2_graphic_large_graphic_pane_g3

0xb7c9,	// (0x0005b78c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb7c9,	// (0x0005b78c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x0005f74d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x0005f74d) list_double2_graphic_large_graphic_pane_g

0xb7d5,	// (0x0005b798) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb7d5,	// (0x0005b798) list_double2_graphic_large_graphic_pane_t1

0xb7eb,	// (0x0005b7ae) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb7eb,	// (0x0005b7ae) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x0005f756) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x0005f756) list_double2_graphic_large_graphic_pane_t

0x39ac,	// (0x0005396f) popup_fast_swap_window_ParamLimits

0x39ac,	// (0x0005396f) popup_fast_swap_window

0x39ca,	// (0x0005398d) popup_side_volume_key_window

0x39e8,	// (0x000539ab) stacon_top_pane

0x39f2,	// (0x000539b5) status_pane_ParamLimits

0x39f2,	// (0x000539b5) status_pane

0x39e8,	// (0x000539ab) status_small_pane

0x217b,	// (0x0005213e) control_pane

0x217b,	// (0x0005213e) stacon_bottom_pane

0x2fac,	// (0x00052f6f) scroll_pane_cp121

0x2fa3,	// (0x00052f66) set_content_pane

0xc5c1,	// (0x0005c584) bg_active_tab_pane_g1_cp1

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp1

0xc5ca,	// (0x0005c58d) bg_active_tab_pane_g3_cp1

0xc5c1,	// (0x0005c584) bg_passive_tab_pane_g1_cp1

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp1

0xc5ca,	// (0x0005c58d) bg_passive_tab_pane_g3_cp1

0xc5d3,	// (0x0005c596) bg_active_tab_pane_g1_cp2

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp2

0xc5dc,	// (0x0005c59f) bg_active_tab_pane_g3_cp2

0xc5d3,	// (0x0005c596) bg_passive_tab_pane_g1_cp2

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp2

0xc5dc,	// (0x0005c59f) bg_passive_tab_pane_g3_cp2

0xc5e5,	// (0x0005c5a8) bg_active_tab_pane_g1_cp3

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp3

0xc5ee,	// (0x0005c5b1) bg_active_tab_pane_g3_cp3

0xc5e5,	// (0x0005c5a8) bg_passive_tab_pane_g1_cp3

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp3

0xc5ee,	// (0x0005c5b1) bg_passive_tab_pane_g3_cp3

0xc5f7,	// (0x0005c5ba) bg_active_tab_pane_g1_cp4

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp4

0xc600,	// (0x0005c5c3) bg_active_tab_pane_g3_cp4

0xc5f7,	// (0x0005c5ba) bg_passive_tab_pane_g1_cp4

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp4

0xc600,	// (0x0005c5c3) bg_passive_tab_pane_g3_cp4

0x3906,	// (0x000538c9) bg_active_tab_pane_g1_cp5

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp5

0x390f,	// (0x000538d2) bg_active_tab_pane_g3_cp5

0x3906,	// (0x000538c9) bg_passive_tab_pane_g1_cp5

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp5

0x390f,	// (0x000538d2) bg_passive_tab_pane_g3_cp5

0x3153,	// (0x00053116) list_set_graphic_pane_ParamLimits

0x3153,	// (0x00053116) list_set_graphic_pane

0x217b,	// (0x0005213e) bg_set_opt_pane_cp4

0xc609,	// (0x0005c5cc) list_set_graphic_pane_g1_ParamLimits

0xc609,	// (0x0005c5cc) list_set_graphic_pane_g1

0xc615,	// (0x0005c5d8) list_set_graphic_pane_g2_ParamLimits

0xc615,	// (0x0005c5d8) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x0005f75b) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x0005f75b) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x0005fac6) volume_small_pane_cp_g

0x395d,	// (0x00053920) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x395d,	// (0x00053920) list_double2_large_graphic_pane_g1_cp2

0x396b,	// (0x0005392e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x396b,	// (0x0005392e) list_double2_large_graphic_pane_g2_cp2

0x397c,	// (0x0005393f) list_double2_large_graphic_pane_g3_cp2

0x3984,	// (0x00053947) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3984,	// (0x00053947) list_double2_large_graphic_pane_t1_cp2

0x399a,	// (0x0005395d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x399a,	// (0x0005395d) list_double2_large_graphic_pane_t2_cp2

0x5be2,	// (0x00055ba5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5be2,	// (0x00055ba5) list_double_large_graphic_pane_g1_cp2

0x5bf5,	// (0x00055bb8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5bf5,	// (0x00055bb8) list_double_large_graphic_pane_g2_cp2

0x3b10,	// (0x00053ad3) list_double_large_graphic_pane_g3_cp2

0x5c06,	// (0x00055bc9) list_double_large_graphic_pane_g4_cp

0x5c0e,	// (0x00055bd1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5c0e,	// (0x00055bd1) list_double_large_graphic_pane_t1_cp2

0x5c25,	// (0x00055be8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5c25,	// (0x00055be8) list_double_large_graphic_pane_t2_cp2

0x3a00,	// (0x000539c3) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3a00,	// (0x000539c3) list_double2_graphic_pane_g1_cp2

0x3a0e,	// (0x000539d1) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3a0e,	// (0x000539d1) list_double2_graphic_pane_g2_cp2

0x3a1f,	// (0x000539e2) list_double2_graphic_pane_g3_cp2

0x3a29,	// (0x000539ec) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3a29,	// (0x000539ec) list_double2_graphic_pane_t1_cp2

0x3a3f,	// (0x00053a02) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3a3f,	// (0x00053a02) list_double2_graphic_pane_t2_cp2

0x3a51,	// (0x00053a14) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3a51,	// (0x00053a14) list_single_number_heading_pane_g1_cp2

0x3a5d,	// (0x00053a20) list_single_number_heading_pane_g2_cp2

0x3a65,	// (0x00053a28) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3a65,	// (0x00053a28) list_single_number_heading_pane_t1_cp2

0x3a7b,	// (0x00053a3e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3a7b,	// (0x00053a3e) list_single_number_heading_pane_t2_cp2

0x3a8f,	// (0x00053a52) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3a8f,	// (0x00053a52) list_single_number_heading_pane_t3_cp2

0x3a51,	// (0x00053a14) list_single_heading_pane_g1_cp2_ParamLimits

0x3a51,	// (0x00053a14) list_single_heading_pane_g1_cp2

0x3a5d,	// (0x00053a20) list_single_heading_pane_g2_cp2

0x3a65,	// (0x00053a28) list_single_heading_pane_t1_cp2_ParamLimits

0x3a65,	// (0x00053a28) list_single_heading_pane_t1_cp2

0x59dc,	// (0x0005599f) list_single_heading_pane_t2_cp2_ParamLimits

0x59dc,	// (0x0005599f) list_single_heading_pane_t2_cp2

0x591e,	// (0x000558e1) list_double_graphic_pane_g1_cp2_ParamLimits

0x591e,	// (0x000558e1) list_double_graphic_pane_g1_cp2

0x592a,	// (0x000558ed) list_double_graphic_pane_g2_cp2_ParamLimits

0x592a,	// (0x000558ed) list_double_graphic_pane_g2_cp2

0x5939,	// (0x000558fc) list_double_graphic_pane_g3_cp2

0x5941,	// (0x00055904) list_double_graphic_pane_t1_cp2_ParamLimits

0x5941,	// (0x00055904) list_double_graphic_pane_t1_cp2

0x5957,	// (0x0005591a) list_double_graphic_pane_t2_cp2_ParamLimits

0x5957,	// (0x0005591a) list_double_graphic_pane_t2_cp2

0x3b04,	// (0x00053ac7) list_double_number_pane_g1_cp2_ParamLimits

0x3b04,	// (0x00053ac7) list_double_number_pane_g1_cp2

0x3b10,	// (0x00053ad3) list_double_number_pane_g2_cp2

0x58e2,	// (0x000558a5) list_double_number_pane_t1_cp2_ParamLimits

0x58e2,	// (0x000558a5) list_double_number_pane_t1_cp2

0x58f6,	// (0x000558b9) list_double_number_pane_t2_cp2_ParamLimits

0x58f6,	// (0x000558b9) list_double_number_pane_t2_cp2

0x590c,	// (0x000558cf) list_double_number_pane_t3_cp2_ParamLimits

0x590c,	// (0x000558cf) list_double_number_pane_t3_cp2

0x57cb,	// (0x0005578e) list_single_graphic_pane_g1_cp2_ParamLimits

0x57cb,	// (0x0005578e) list_single_graphic_pane_g1_cp2

0x3b6a,	// (0x00053b2d) list_single_graphic_pane_g2_cp2_ParamLimits

0x3b6a,	// (0x00053b2d) list_single_graphic_pane_g2_cp2

0x3b76,	// (0x00053b39) list_single_graphic_pane_g3_cp2

0x57a1,	// (0x00055764) list_single_graphic_pane_t1_cp2_ParamLimits

0x57a1,	// (0x00055764) list_single_graphic_pane_t1_cp2

0x3b6a,	// (0x00053b2d) list_single_number_pane_g1_cp2_ParamLimits

0x3b6a,	// (0x00053b2d) list_single_number_pane_g1_cp2

0x3b76,	// (0x00053b39) list_single_number_pane_g2_cp2

0x57a1,	// (0x00055764) list_single_number_pane_t1_cp2_ParamLimits

0x57a1,	// (0x00055764) list_single_number_pane_t1_cp2

0x57b7,	// (0x0005577a) list_single_number_pane_t2_cp2_ParamLimits

0x57b7,	// (0x0005577a) list_single_number_pane_t2_cp2

0x396b,	// (0x0005392e) list_double2_pane_g1_cp2_ParamLimits

0x396b,	// (0x0005392e) list_double2_pane_g1_cp2

0x397c,	// (0x0005393f) list_double2_pane_g2_cp2

0x3adc,	// (0x00053a9f) list_double2_pane_t1_cp2_ParamLimits

0x3adc,	// (0x00053a9f) list_double2_pane_t1_cp2

0x3af2,	// (0x00053ab5) list_double2_pane_t2_cp2_ParamLimits

0x3af2,	// (0x00053ab5) list_double2_pane_t2_cp2

0x3b04,	// (0x00053ac7) list_double_pane_g1_cp2_ParamLimits

0x3b04,	// (0x00053ac7) list_double_pane_g1_cp2

0x3b10,	// (0x00053ad3) list_double_pane_g2_cp2

0x3b18,	// (0x00053adb) list_double_pane_t1_cp2_ParamLimits

0x3b18,	// (0x00053adb) list_double_pane_t1_cp2

0x3b2e,	// (0x00053af1) list_double_pane_t2_cp2_ParamLimits

0x3b2e,	// (0x00053af1) list_double_pane_t2_cp2

0x3b5a,	// (0x00053b1d) list_single_pane_cp2_g3

0x3b6a,	// (0x00053b2d) list_single_pane_g1_cp2_ParamLimits

0x3b6a,	// (0x00053b2d) list_single_pane_g1_cp2

0x3b76,	// (0x00053b39) list_single_pane_g2_cp2

0x3b7e,	// (0x00053b41) list_single_pane_t1_cp2_ParamLimits

0x3b7e,	// (0x00053b41) list_single_pane_t1_cp2

0x3b96,	// (0x00053b59) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3b96,	// (0x00053b59) list_single_large_graphic_pane_g1_cp2

0x3ba4,	// (0x00053b67) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3ba4,	// (0x00053b67) list_single_large_graphic_pane_g2_cp2

0x3bb0,	// (0x00053b73) list_single_large_graphic_pane_g3_cp2

0x3bb8,	// (0x00053b7b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3bb8,	// (0x00053b7b) list_single_large_graphic_pane_g4_cp1

0x3bd2,	// (0x00053b95) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3bd2,	// (0x00053b95) list_single_large_graphic_pane_t1_cp2

0x576b,	// (0x0005572e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x576b,	// (0x0005572e) list_single_graphic_heading_pane_g1_cp2

0x5738,	// (0x000556fb) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5738,	// (0x000556fb) list_single_graphic_heading_pane_g4_cp2

0x3b76,	// (0x00053b39) list_single_graphic_heading_pane_g5_cp2

0x5777,	// (0x0005573a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5777,	// (0x0005573a) list_single_graphic_heading_pane_t1_cp2

0x578d,	// (0x00055750) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x578d,	// (0x00055750) list_single_graphic_heading_pane_t2_cp2

0x572c,	// (0x000556ef) list_single_2graphic_pane_g1_cp2_ParamLimits

0x572c,	// (0x000556ef) list_single_2graphic_pane_g1_cp2

0x5738,	// (0x000556fb) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5738,	// (0x000556fb) list_single_2graphic_pane_g2_cp2

0x3b76,	// (0x00053b39) list_single_2graphic_pane_g3_cp2

0x5749,	// (0x0005570c) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5749,	// (0x0005570c) list_single_2graphic_pane_g4_cp2

0x5755,	// (0x00055718) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5755,	// (0x00055718) list_single_2graphic_pane_t1_cp2

0x2171,	// (0x00052134) list_highlight_pane_g10_cp1

0x5304,	// (0x000552c7) list_highlight_pane_g1_cp1

0x530c,	// (0x000552cf) list_highlight_pane_g2_cp1

0x5314,	// (0x000552d7) list_highlight_pane_g3_cp1

0x531c,	// (0x000552df) list_highlight_pane_g4_cp1

0x5324,	// (0x000552e7) list_highlight_pane_g5_cp1

0x532c,	// (0x000552ef) list_highlight_pane_g6_cp1

0x5334,	// (0x000552f7) list_highlight_pane_g7_cp1

0x533c,	// (0x000552ff) list_highlight_pane_g8_cp1

0x5344,	// (0x00055307) list_highlight_pane_g9_cp1

0xd3c5,	// (0x0005d388) form_field_slider_pane_t3

0xd3d3,	// (0x0005d396) form_field_slider_pane_t4

0x5240,	// (0x00055203) slider_form_pane_ParamLimits

0x5240,	// (0x00055203) slider_form_pane

0x217b,	// (0x0005213e) control_abbreviations

0x217b,	// (0x0005213e) control_conventions

0x217b,	// (0x0005213e) control_definitions

0x217b,	// (0x0005213e) format_table_attribute

0x5a32,	// (0x000559f5) bg_popup_preview_window_pane_g9

0x217b,	// (0x0005213e) format_table_data2

0x217b,	// (0x0005213e) format_table_data3

0x217b,	// (0x0005213e) format_table_data_example

0x0008,

0x217b,	// (0x0005213e) intro_purpose

0xf928,	// (0x0005f8eb) bg_popup_preview_window_pane_g

0x217b,	// (0x0005213e) texts_category

0x217b,	// (0x0005213e) texts_graphics

0x3be8,	// (0x00053bab) text_digital

0x3bf7,	// (0x00053bba) text_primary

0x3c06,	// (0x00053bc9) text_primary_small

0x3c15,	// (0x00053bd8) text_secondary

0x3c24,	// (0x00053be7) text_title

0x61ce,	// (0x00056191) bg_passive_tab_pane_g1_cp3_srt

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp3_srt

0x61d7,	// (0x0005619a) bg_passive_tab_pane_g3_cp3_srt

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp3_srt_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp3_srt

0x61e0,	// (0x000561a3) tabs_4_active_pane_srt_g1

0xd7d8,	// (0x0005d79b) tabs_4_active_pane_srt_t1_ParamLimits

0xd7d8,	// (0x0005d79b) tabs_4_active_pane_srt_t1

0x61ce,	// (0x00056191) bg_active_tab_pane_g1_cp3_copy1

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp3_copy1

0x61d7,	// (0x0005619a) bg_active_tab_pane_g3_cp3_copy1

0x225b,	// (0x0005221e) tabs_2_long_active_pane_srt_ParamLimits

0x225b,	// (0x0005221e) tabs_2_long_active_pane_srt

0x225b,	// (0x0005221e) tabs_2_long_passive_pane_srt_ParamLimits

0x225b,	// (0x0005221e) tabs_2_long_passive_pane_srt

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp4_srt

0x5e82,	// (0x00055e45) bg_passive_tab_pane_g1_cp4_srt

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp4_srt

0x5e8b,	// (0x00055e4e) bg_passive_tab_pane_g3_cp4_srt

0x225b,	// (0x0005221e) bg_active_tab_pane_cp4_srt_ParamLimits

0x225b,	// (0x0005221e) bg_active_tab_pane_cp4_srt

0xd5ce,	// (0x0005d591) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd5ce,	// (0x0005d591) tabs_2_long_active_pane_srt_t1

0x5e82,	// (0x00055e45) bg_active_tab_pane_g1_cp4_srt

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp4_srt

0x5e8b,	// (0x00055e4e) bg_active_tab_pane_g3_cp4_srt

0x24d7,	// (0x0005249a) tabs_3_long_active_pane_srt_ParamLimits

0x24d7,	// (0x0005249a) tabs_3_long_active_pane_srt

0x24d7,	// (0x0005249a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x24d7,	// (0x0005249a) tabs_3_long_passive_pane_cp_srt

0x24d7,	// (0x0005249a) tabs_3_long_passive_pane_srt_ParamLimits

0x24d7,	// (0x0005249a) tabs_3_long_passive_pane_srt

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp5_srt

0x3906,	// (0x000538c9) bg_passive_tab_pane_g1_cp5_srt

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp5_srt

0x390f,	// (0x000538d2) bg_passive_tab_pane_g3_cp5_srt

0x225b,	// (0x0005221e) bg_active_tab_pane_cp5_srt_ParamLimits

0x225b,	// (0x0005221e) bg_active_tab_pane_cp5_srt

0xd5b8,	// (0x0005d57b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd5b8,	// (0x0005d57b) tabs_3_long_active_pane_srt_t1

0x3906,	// (0x000538c9) bg_active_tab_pane_g1_cp5_srt

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp5_srt

0x390f,	// (0x000538d2) bg_active_tab_pane_g3_cp5_srt

0x5e62,	// (0x00055e25) navi_text_pane_srt_t1

0x5e5a,	// (0x00055e1d) navi_icon_pane_srt_g1

0x3dfb,	// (0x00053dbe) midp_editing_number_pane_srt

0x3c33,	// (0x00053bf6) midp_ticker_pane_srt

0x3e03,	// (0x00053dc6) midp_ticker_pane_srt_g1

0x3e0b,	// (0x00053dce) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x0005f77a) midp_ticker_pane_srt_g

0x3e13,	// (0x00053dd6) midp_ticker_pane_srt_t1

0x5e4b,	// (0x00055e0e) midp_editing_number_pane_t1_copy1

0xc639,	// (0x0005c5fc) listscroll_midp_pane

0xc639,	// (0x0005c5fc) midp_form_pane

0x3ca9,	// (0x00053c6c) midp_info_popup_window_ParamLimits

0x3ca9,	// (0x00053c6c) midp_info_popup_window

0x3081,	// (0x00053044) bg_popup_sub_pane_cp50_ParamLimits

0x3081,	// (0x00053044) bg_popup_sub_pane_cp50

0x4f6b,	// (0x00054f2e) listscroll_midp_info_pane_ParamLimits

0x4f6b,	// (0x00054f2e) listscroll_midp_info_pane

0x4f53,	// (0x00054f16) listscroll_form_midp_pane_ParamLimits

0x4f53,	// (0x00054f16) listscroll_form_midp_pane

0x4f5f,	// (0x00054f22) scroll_bar_cp050

0xd3b9,	// (0x0005d37c) list_midp_pane

0x6c27,	// (0x00056bea) signal_pane_g2_cp

0x4e6d,	// (0x00054e30) listscroll_midp_info_pane_t1_ParamLimits

0x4e6d,	// (0x00054e30) listscroll_midp_info_pane_t1

0x4e85,	// (0x00054e48) listscroll_midp_info_pane_t2_ParamLimits

0x4e85,	// (0x00054e48) listscroll_midp_info_pane_t2

0x4ec3,	// (0x00054e86) listscroll_midp_info_pane_t3_ParamLimits

0x4ec3,	// (0x00054e86) listscroll_midp_info_pane_t3

0x4efd,	// (0x00054ec0) listscroll_midp_info_pane_t4_ParamLimits

0x4efd,	// (0x00054ec0) listscroll_midp_info_pane_t4

0x0003,

0xf863,	// (0x0005f826) listscroll_midp_info_pane_t_ParamLimits

0xf863,	// (0x0005f826) listscroll_midp_info_pane_t

0x314b,	// (0x0005310e) scroll_pane_cp21

0x4e07,	// (0x00054dca) form_midp_field_choice_group_pane

0x4e10,	// (0x00054dd3) form_midp_field_text_pane

0x4e53,	// (0x00054e16) form_midp_field_time_pane

0x4e5b,	// (0x00054e1e) form_midp_gauge_slider_pane

0x4e64,	// (0x00054e27) form_midp_gauge_wait_pane

0x217b,	// (0x0005213e) form_midp_image_pane

0xb9ae,	// (0x0005b971) list_single_midp_pane_ParamLimits

0xb9ae,	// (0x0005b971) list_single_midp_pane

0xd391,	// (0x0005d354) form_midp_field_text_pane_t1

0x4bdf,	// (0x00054ba2) input_focus_pane_cp050

0x4df6,	// (0x00054db9) list_midp_form_text_pane

0x4d9a,	// (0x00054d5d) form_midp_field_choice_group_pane_t1

0x4da8,	// (0x00054d6b) input_focus_pane_cp051

0x4dbc,	// (0x00054d7f) list_midp_choice_pane

0x217b,	// (0x0005213e) status_idle_pane

0x4d7e,	// (0x00054d41) form_midp_field_time_pane_t1

0x2171,	// (0x00052134) wait_anim_pane_g2_copy1

0x4d8c,	// (0x00054d4f) form_midp_field_time_pane_t2

0x0001,

0x3d59,	// (0x00053d1c) aid_navinavi_width_2_pane

0xf85e,	// (0x0005f821) form_midp_field_time_pane_t

0x217b,	// (0x0005213e) input_focus_pane_cp052

0x217b,	// (0x0005213e) bg_input_focus_pane_cp040

0x4d3e,	// (0x00054d01) form_midp_gauge_slider_pane_t1

0x4d4c,	// (0x00054d0f) form_midp_gauge_slider_pane_t2

0xd375,	// (0x0005d338) form_midp_gauge_slider_pane_t3

0xd383,	// (0x0005d346) form_midp_gauge_slider_pane_t4

0x0003,

0xf855,	// (0x0005f818) form_midp_gauge_slider_pane_t

0x4d76,	// (0x00054d39) form_midp_slider_pane

0x225b,	// (0x0005221e) bg_input_focus_pane_cp041_ParamLimits

0x225b,	// (0x0005221e) bg_input_focus_pane_cp041

0x4d0b,	// (0x00054cce) form_midp_gauge_wait_pane_t1_ParamLimits

0x4d0b,	// (0x00054cce) form_midp_gauge_wait_pane_t1

0x4d1d,	// (0x00054ce0) form_midp_gauge_wait_pane_t2_ParamLimits

0x4d1d,	// (0x00054ce0) form_midp_gauge_wait_pane_t2

0x0001,

0xf850,	// (0x0005f813) form_midp_gauge_wait_pane_t_ParamLimits

0xf850,	// (0x0005f813) form_midp_gauge_wait_pane_t

0x4d2f,	// (0x00054cf2) form_midp_wait_pane_ParamLimits

0x4d2f,	// (0x00054cf2) form_midp_wait_pane

0x4cd3,	// (0x00054c96) form_midp_image_pane_g1

0x4cdc,	// (0x00054c9f) form_midp_image_pane_t1

0x4ceb,	// (0x00054cae) form_midp_image_pane_t2

0x4cfa,	// (0x00054cbd) form_midp_image_pane_t3

0x0002,

0xf849,	// (0x0005f80c) form_midp_image_pane_t

0x4cca,	// (0x00054c8d) list_single_midp_pane_g1

0x0e85,	// (0x00050e48) list_single_midp_pane_t1

0xd35e,	// (0x0005d321) list_midp_form_item_pane_ParamLimits

0xd35e,	// (0x0005d321) list_midp_form_item_pane

0x3d01,	// (0x00053cc4) list_midp_form_item_pane_t1

0x3d10,	// (0x00053cd3) midp_ticker_pane_g1

0x3d1c,	// (0x00053cdf) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0005f760) midp_ticker_pane_g

0xc6e1,	// (0x0005c6a4) midp_ticker_pane_t1

0xd75d,	// (0x0005d720) midp_editing_number_pane_t1

0x60a8,	// (0x0005606b) midp_editing_number_pane

0x60b7,	// (0x0005607a) midp_ticker_pane

0x5e3b,	// (0x00055dfe) ai_message_heading_pane

0x217b,	// (0x0005213e) bg_popup_window_pane_cp14

0x5e43,	// (0x00055e06) listscroll_ai_message_pane

0x5dc1,	// (0x00055d84) ai_message_heading_pane_g1_ParamLimits

0x5dc1,	// (0x00055d84) ai_message_heading_pane_g1

0x5dcd,	// (0x00055d90) ai_message_heading_pane_g2_ParamLimits

0x5dcd,	// (0x00055d90) ai_message_heading_pane_g2

0x5ddb,	// (0x00055d9e) ai_message_heading_pane_g3_ParamLimits

0x5ddb,	// (0x00055d9e) ai_message_heading_pane_g3

0x5de7,	// (0x00055daa) ai_message_heading_pane_g4_ParamLimits

0x5de7,	// (0x00055daa) ai_message_heading_pane_g4

0x0003,

0xf98a,	// (0x0005f94d) ai_message_heading_pane_g_ParamLimits

0xf98a,	// (0x0005f94d) ai_message_heading_pane_g

0x5df3,	// (0x00055db6) ai_message_heading_pane_t1_ParamLimits

0x5df3,	// (0x00055db6) ai_message_heading_pane_t1

0x5e0d,	// (0x00055dd0) ai_message_heading_pane_t2_ParamLimits

0x5e0d,	// (0x00055dd0) ai_message_heading_pane_t2

0x0001,

0xf993,	// (0x0005f956) ai_message_heading_pane_t_ParamLimits

0xf993,	// (0x0005f956) ai_message_heading_pane_t

0x5e21,	// (0x00055de4) bg_popup_heading_pane_cp1_ParamLimits

0x5e21,	// (0x00055de4) bg_popup_heading_pane_cp1

0x5daf,	// (0x00055d72) list_ai_message_pane_ParamLimits

0x5daf,	// (0x00055d72) list_ai_message_pane

0x314b,	// (0x0005310e) scroll_pane_cp10

0x5d4b,	// (0x00055d0e) list_ai_message_pane_g1

0x5d53,	// (0x00055d16) list_ai_message_pane_g2

0x0001,

0xf967,	// (0x0005f92a) list_ai_message_pane_g

0x5d5b,	// (0x00055d1e) list_ai_message_pane_t1_ParamLimits

0x5d5b,	// (0x00055d1e) list_ai_message_pane_t1

0x5d70,	// (0x00055d33) list_ai_message_pane_t2_ParamLimits

0x5d70,	// (0x00055d33) list_ai_message_pane_t2

0x5d85,	// (0x00055d48) list_ai_message_pane_t3_ParamLimits

0x5d85,	// (0x00055d48) list_ai_message_pane_t3

0x5d9a,	// (0x00055d5d) list_ai_message_pane_t4_ParamLimits

0x5d9a,	// (0x00055d5d) list_ai_message_pane_t4

0x0003,

0xf96c,	// (0x0005f92f) list_ai_message_pane_t_ParamLimits

0xf96c,	// (0x0005f92f) list_ai_message_pane_t

0xd59e,	// (0x0005d561) cell_ai_soft_ind_pane_ParamLimits

0xd59e,	// (0x0005d561) cell_ai_soft_ind_pane

0x3d3a,	// (0x00053cfd) cell_ai_soft_ind_pane_g1_ParamLimits

0x3d3a,	// (0x00053cfd) cell_ai_soft_ind_pane_g1

0x217b,	// (0x0005213e) grid_highlight_cp1

0x3d47,	// (0x00053d0a) text_secondary_cp56_ParamLimits

0x3d47,	// (0x00053d0a) text_secondary_cp56

0x5d09,	// (0x00055ccc) example_general_pane_ParamLimits

0x5d09,	// (0x00055ccc) example_general_pane

0x5d15,	// (0x00055cd8) example_parent_pane_g1_ParamLimits

0x5d15,	// (0x00055cd8) example_parent_pane_g1

0x5d21,	// (0x00055ce4) example_parent_pane_t1_ParamLimits

0x5d21,	// (0x00055ce4) example_parent_pane_t1

0xcb53,	// (0x0005cb16) popup_preview_text_window_ParamLimits

0xcb53,	// (0x0005cb16) popup_preview_text_window

0x3b62,	// (0x00053b25) list_single_pane_cp2_g4

0x258d,	// (0x00052550) bg_popup_preview_window_pane_ParamLimits

0x258d,	// (0x00052550) bg_popup_preview_window_pane

0x5a3c,	// (0x000559ff) popup_preview_text_window_t1_ParamLimits

0x5a3c,	// (0x000559ff) popup_preview_text_window_t1

0x5a5a,	// (0x00055a1d) popup_preview_text_window_t2_ParamLimits

0x5a5a,	// (0x00055a1d) popup_preview_text_window_t2

0x5aa3,	// (0x00055a66) popup_preview_text_window_t3_ParamLimits

0x5aa3,	// (0x00055a66) popup_preview_text_window_t3

0x5ae8,	// (0x00055aab) popup_preview_text_window_t4_ParamLimits

0x5ae8,	// (0x00055aab) popup_preview_text_window_t4

0x0004,

0xf93b,	// (0x0005f8fe) popup_preview_text_window_t_ParamLimits

0xf93b,	// (0x0005f8fe) popup_preview_text_window_t

0x5b66,	// (0x00055b29) scroll_pane_cp11

0x4aed,	// (0x00054ab0) bg_popup_preview_window_pane_g1

0x59f0,	// (0x000559b3) bg_popup_preview_window_pane_g2

0x59fa,	// (0x000559bd) bg_popup_preview_window_pane_g3

0x5a04,	// (0x000559c7) bg_popup_preview_window_pane_g4

0x5a0e,	// (0x000559d1) bg_popup_preview_window_pane_g5

0x5a18,	// (0x000559db) bg_popup_preview_window_pane_g6

0x5a20,	// (0x000559e3) bg_popup_preview_window_pane_g7

0x5a28,	// (0x000559eb) bg_popup_preview_window_pane_g8

0xf2d4,	// (0x0005f297) aid_popup_width_pane

0xcac3,	// (0x0005ca86) popup_midp_note_alarm_window_ParamLimits

0xcac3,	// (0x0005ca86) popup_midp_note_alarm_window

0x2fbd,	// (0x00052f80) data_form_pane_ParamLimits

0xb677,	// (0x0005b63a) form_field_data_pane_g1

0xb681,	// (0x0005b644) form_field_data_pane_t1_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_ParamLimits

0x2fd7,	// (0x00052f9a) data_form_wide_pane_ParamLimits

0x0521,	// (0x000504e4) form_field_data_wide_pane_g1

0x052d,	// (0x000504f0) form_field_data_wide_pane_t1_ParamLimits

0x2d3a,	// (0x00052cfd) input_focus_pane_cp6_ParamLimits

0xc3b0,	// (0x0005c373) input_popup_find_pane_g1_ParamLimits

0xc3b0,	// (0x0005c373) input_popup_find_pane_g1

0x0781,	// (0x00050744) aid_navi_side_left_pane

0x0796,	// (0x00050759) aid_navi_side_right_pane

0x53ff,	// (0x000553c2) bg_popup_window_pane_cp30_ParamLimits

0x53ff,	// (0x000553c2) bg_popup_window_pane_cp30

0x5479,	// (0x0005543c) popup_midp_note_alarm_window_g1_ParamLimits

0x5479,	// (0x0005543c) popup_midp_note_alarm_window_g1

0x54a9,	// (0x0005546c) popup_midp_note_alarm_window_t1_ParamLimits

0x54a9,	// (0x0005546c) popup_midp_note_alarm_window_t1

0x554a,	// (0x0005550d) popup_midp_note_alarm_window_t2_ParamLimits

0x554a,	// (0x0005550d) popup_midp_note_alarm_window_t2

0x55f8,	// (0x000555bb) popup_midp_note_alarm_window_t3_ParamLimits

0x55f8,	// (0x000555bb) popup_midp_note_alarm_window_t3

0x562a,	// (0x000555ed) popup_midp_note_alarm_window_t4_ParamLimits

0x562a,	// (0x000555ed) popup_midp_note_alarm_window_t4

0x5650,	// (0x00055613) popup_midp_note_alarm_window_t5_ParamLimits

0x5650,	// (0x00055613) popup_midp_note_alarm_window_t5

0x000a,

0xf8d8,	// (0x0005f89b) popup_midp_note_alarm_window_t_ParamLimits

0xf8d8,	// (0x0005f89b) popup_midp_note_alarm_window_t

0x56fc,	// (0x000556bf) wait_bar_pane_cp1_ParamLimits

0x56fc,	// (0x000556bf) wait_bar_pane_cp1

0x217b,	// (0x0005213e) wait_anim_pane_copy1

0x217b,	// (0x0005213e) wait_border_pane_copy1

0x50e4,	// (0x000550a7) wait_border_pane_g1_copy1

0x0547,	// (0x0005050a) form_field_popup_pane_g1

0xb69b,	// (0x0005b65e) form_field_popup_pane_t1_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_cp7_ParamLimits

0x3003,	// (0x00052fc6) list_form_pane_ParamLimits

0x0569,	// (0x0005052c) form_field_popup_wide_pane_g1

0x0571,	// (0x00050534) form_field_popup_wide_pane_t1_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_cp8_ParamLimits

0x300f,	// (0x00052fd2) list_form_wide_pane_ParamLimits

0x625b,	// (0x0005621e) aid_size_cell_graphic_pane

0xb71a,	// (0x0005b6dd) data_form_pane_t1_ParamLimits

0xbb43,	// (0x0005bb06) data_form_wide_pane_t1_ParamLimits

0xcfee,	// (0x0005cfb1) bg_status_flat_pane

0xb002,	// (0x0005afc5) title_pane_t1_ParamLimits

0x2223,	// (0x000521e6) title_pane_t2_ParamLimits

0x2249,	// (0x0005220c) title_pane_t3_ParamLimits

0xf59b,	// (0x0005f55e) title_pane_t_ParamLimits

0xc4b7,	// (0x0005c47a) level_1_signal_ParamLimits

0xc4c9,	// (0x0005c48c) level_2_signal_ParamLimits

0xc4dc,	// (0x0005c49f) level_3_signal_ParamLimits

0xc4ef,	// (0x0005c4b2) level_4_signal_ParamLimits

0xc502,	// (0x0005c4c5) level_5_signal_ParamLimits

0xc515,	// (0x0005c4d8) level_6_signal_ParamLimits

0xc528,	// (0x0005c4eb) level_7_signal_ParamLimits

0xc4b7,	// (0x0005c47a) level_1_battery_ParamLimits

0xc4c9,	// (0x0005c48c) level_2_battery_ParamLimits

0xc4dc,	// (0x0005c49f) level_3_battery_ParamLimits

0xc4ef,	// (0x0005c4b2) level_4_battery_ParamLimits

0xc502,	// (0x0005c4c5) level_5_battery_ParamLimits

0xc515,	// (0x0005c4d8) level_6_battery_ParamLimits

0xc528,	// (0x0005c4eb) level_7_battery_ParamLimits

0x5304,	// (0x000552c7) bg_status_flat_pane_g1

0x530c,	// (0x000552cf) bg_status_flat_pane_g2

0x5314,	// (0x000552d7) bg_status_flat_pane_g3

0x531c,	// (0x000552df) bg_status_flat_pane_g4

0x5324,	// (0x000552e7) bg_status_flat_pane_g5

0x532c,	// (0x000552ef) bg_status_flat_pane_g6

0x5334,	// (0x000552f7) bg_status_flat_pane_g7

0xb096,	// (0x0005b059) tabs_3_active_pane_t1_ParamLimits

0xb096,	// (0x0005b059) tabs_3_passive_pane_t1_ParamLimits

0xb0b0,	// (0x0005b073) tabs_4_active_pane_t1_ParamLimits

0xb0b0,	// (0x0005b073) tabs_4_1_passive_pane_t1_ParamLimits

0xc3c6,	// (0x0005c389) tabs_2_active_pane_t1_ParamLimits

0xc3c6,	// (0x0005c389) tabs_2_passive_pane_t1_ParamLimits

0x225b,	// (0x0005221e) bg_active_tab_pane_cp4_ParamLimits

0xc3d8,	// (0x0005c39b) tabs_2_long_active_pane_t1_ParamLimits

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp4_ParamLimits

0x0dcc,	// (0x00050d8f) list_single_midp_graphic_pane_t1_ParamLimits

0x225b,	// (0x0005221e) bg_active_tab_pane_cp5_ParamLimits

0xc3eb,	// (0x0005c3ae) tabs_3_long_active_pane_t1_ParamLimits

0x3fb1,	// (0x00053f74) bg_passive_tab_pane_cp5_ParamLimits

0x0dcc,	// (0x00050d8f) list_single_midp_graphic_pane_t1

0xcfee,	// (0x0005cfb1) bg_status_flat_pane_ParamLimits

0x4766,	// (0x00054729) indicator_pane_cp2_ParamLimits

0x4766,	// (0x00054729) indicator_pane_cp2

0xd183,	// (0x0005d146) navi_pane_srt_ParamLimits

0xd183,	// (0x0005d146) navi_pane_srt

0x48cc,	// (0x0005488f) popup_clock_digital_analogue_window_cp1

0x233b,	// (0x000522fe) indicator_pane_t1

0x3c33,	// (0x00053bf6) copy_highlight_pane

0x3c33,	// (0x00053bf6) cursor_graphics_pane

0x3c33,	// (0x00053bf6) graphic_within_text_pane

0x3c33,	// (0x00053bf6) link_highlight_pane

0x5b29,	// (0x00055aec) popup_preview_text_window_t5_ParamLimits

0x5b29,	// (0x00055aec) popup_preview_text_window_t5

0x3d63,	// (0x00053d26) cursor_digital_pane

0x3d63,	// (0x00053d26) cursor_primary_pane

0x3d74,	// (0x00053d37) cursor_primary_small_pane

0x3d7c,	// (0x00053d3f) cursor_secondary_pane

0x3d84,	// (0x00053d47) cursor_title_pane

0x3d63,	// (0x00053d26) link_highlight_digital_pane

0x3d6b,	// (0x00053d2e) link_highlight_primary_pane

0x3d74,	// (0x00053d37) link_highlight_primary_small_pane

0x3d7c,	// (0x00053d3f) link_highlight_secondary_pane

0x3d84,	// (0x00053d47) link_highlight_title_pane

0x3d63,	// (0x00053d26) copy_highlight_digital_pane

0x3d63,	// (0x00053d26) copy_highlight_primary_pane

0x3d74,	// (0x00053d37) copy_highlight_primary_small_pane

0x3d7c,	// (0x00053d3f) copy_highlight_secondary_pane

0x3d84,	// (0x00053d47) copy_highlight_title_pane

0x3d7c,	// (0x00053d3f) graphic_text_digital_pane

0x53a2,	// (0x00055365) graphic_text_primary_pane

0x53ab,	// (0x0005536e) graphic_text_primary_small_pane

0x3d74,	// (0x00053d37) graphic_text_secondary_pane

0x3d63,	// (0x00053d26) graphic_text_title_pane

0xc6f3,	// (0x0005c6b6) cursor_primary_pane_g1

0x5394,	// (0x00055357) cursor_text_primary_t1

0xd3f5,	// (0x0005d3b8) cursor_primary_small_pane_g1

0x5386,	// (0x00055349) cursor_text_primary_small_t1

0xd3eb,	// (0x0005d3ae) cursor_primary_small_pane_g1_copy1

0x536e,	// (0x00055331) cursor_text_primary_small_t1_copy1

0x534c,	// (0x0005530f) cursor_text_title_t1

0xd3e1,	// (0x0005d3a4) cursor_title_pane_g1

0xc6f3,	// (0x0005c6b6) cursor_digital_pane_g1

0x3d96,	// (0x00053d59) cursor_text_digital_t1

0x3da4,	// (0x00053d67) link_highlight_primary_pane_g1

0x52f5,	// (0x000552b8) link_highlight_primary_pane_t1

0x3da4,	// (0x00053d67) link_highlight_primary_small_pane_g1

0x3dac,	// (0x00053d6f) link_highlight_primary_small_pane_t1

0x3dbb,	// (0x00053d7e) link_highlight_secondary_pane_g1

0x3dc3,	// (0x00053d86) link_highlight_secondary_pane_t1

0x5269,	// (0x0005522c) link_highlight_title_pane_g1

0x5271,	// (0x00055234) link_highlight_title_pane_t1

0x5252,	// (0x00055215) link_highlight_digital_pane_g1

0x525a,	// (0x0005521d) link_highlight_digital_pane_t1

0x511a,	// (0x000550dd) copy_highlight_primary_pane_g1

0x5131,	// (0x000550f4) copy_highlight_primary_pane_t1

0x511a,	// (0x000550dd) copy_highlight_primary_small_pane_g1

0x5122,	// (0x000550e5) copy_highlight_primary_small_pane_t1

0x3dd2,	// (0x00053d95) copy_highlight_secondary_pane_g1

0x3dda,	// (0x00053d9d) copy_highlight_secondary_pane_t1

0x5103,	// (0x000550c6) copy_highlight_title_pane_g1

0x510b,	// (0x000550ce) copy_highlight_title_pane_t1

0x511a,	// (0x000550dd) copy_highlight_digital_pane_g1

0x642b,	// (0x000563ee) copy_highlight_digital_pane_t1

0x637f,	// (0x00056342) graphic_text_primary_pane_g1

0x640f,	// (0x000563d2) graphic_text_primary_pane_t1

0x641d,	// (0x000563e0) graphic_text_primary_pane_t2

0x0001,

0xfa07,	// (0x0005f9ca) graphic_text_primary_pane_t

0x63eb,	// (0x000563ae) graphic_text_primary_small_pane_g1

0x63f3,	// (0x000563b6) graphic_text_primary_small_pane_t1

0x6401,	// (0x000563c4) graphic_text_primary_small_pane_t2

0x0001,

0xfa02,	// (0x0005f9c5) graphic_text_primary_small_pane_t

0x63c7,	// (0x0005638a) graphic_text_secondary_pane_g1

0x63cf,	// (0x00056392) graphic_text_secondary_pane_t1

0x63dd,	// (0x000563a0) graphic_text_secondary_pane_t2

0x0001,

0xf9fd,	// (0x0005f9c0) graphic_text_secondary_pane_t

0x63a3,	// (0x00056366) graphic_text_title_pane_g1

0x63ab,	// (0x0005636e) graphic_text_title_pane_t1

0x63b9,	// (0x0005637c) graphic_text_title_pane_t2

0x0001,

0xf9f8,	// (0x0005f9bb) graphic_text_title_pane_t

0x637f,	// (0x00056342) graphic_text_digital_pane_g1

0x6387,	// (0x0005634a) graphic_text_digital_pane_t1

0x6395,	// (0x00056358) graphic_text_digital_pane_t2

0x0001,

0xf9f3,	// (0x0005f9b6) graphic_text_digital_pane_t

0x225b,	// (0x0005221e) navi_icon_pane_srt_ParamLimits

0x225b,	// (0x0005221e) navi_icon_pane_srt

0x217b,	// (0x0005213e) navi_midp_pane_srt

0x217b,	// (0x0005213e) navi_navi_pane_srt

0x225b,	// (0x0005221e) navi_text_pane_srt_ParamLimits

0x225b,	// (0x0005221e) navi_text_pane_srt

0x634a,	// (0x0005630d) navi_navi_icon_text_pane_srt

0x6352,	// (0x00056315) navi_navi_pane_srt_g1_ParamLimits

0x6352,	// (0x00056315) navi_navi_pane_srt_g1

0x6364,	// (0x00056327) navi_navi_pane_srt_g2_ParamLimits

0x6364,	// (0x00056327) navi_navi_pane_srt_g2

0x0001,

0xf9ee,	// (0x0005f9b1) navi_navi_pane_srt_g_ParamLimits

0xf9ee,	// (0x0005f9b1) navi_navi_pane_srt_g

0x6376,	// (0x00056339) navi_navi_tabs_pane_srt

0x634a,	// (0x0005630d) navi_navi_text_pane_srt

0x634a,	// (0x0005630d) navi_navi_volume_pane_srt

0x633b,	// (0x000562fe) navi_navi_text_pane_srt_t1

0x120a,	// (0x000511cd) navi_navi_volume_pane_srt_g1

0x1212,	// (0x000511d5) volume_small_pane_srt_ParamLimits

0x1212,	// (0x000511d5) volume_small_pane_srt

0x0ad6,	// (0x00050a99) volume_small_pane_srt_g1_ParamLimits

0x0ad6,	// (0x00050a99) volume_small_pane_srt_g1

0x0ae6,	// (0x00050aa9) volume_small_pane_srt_g2_ParamLimits

0x0ae6,	// (0x00050aa9) volume_small_pane_srt_g2

0x0af7,	// (0x00050aba) volume_small_pane_srt_g3_ParamLimits

0x0af7,	// (0x00050aba) volume_small_pane_srt_g3

0x0b08,	// (0x00050acb) volume_small_pane_srt_g4_ParamLimits

0x0b08,	// (0x00050acb) volume_small_pane_srt_g4

0x0b19,	// (0x00050adc) volume_small_pane_srt_g5_ParamLimits

0x0b19,	// (0x00050adc) volume_small_pane_srt_g5

0x0b2a,	// (0x00050aed) volume_small_pane_srt_g6_ParamLimits

0x0b2a,	// (0x00050aed) volume_small_pane_srt_g6

0x0b3b,	// (0x00050afe) volume_small_pane_srt_g7_ParamLimits

0x0b3b,	// (0x00050afe) volume_small_pane_srt_g7

0x0b4c,	// (0x00050b0f) volume_small_pane_srt_g8_ParamLimits

0x0b4c,	// (0x00050b0f) volume_small_pane_srt_g8

0x0b5d,	// (0x00050b20) volume_small_pane_srt_g9_ParamLimits

0x0b5d,	// (0x00050b20) volume_small_pane_srt_g9

0x0b6e,	// (0x00050b31) volume_small_pane_srt_g10_ParamLimits

0x0b6e,	// (0x00050b31) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x0005f765) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x0005f765) volume_small_pane_srt_g

0x2642,	// (0x00052605) query_popup_data_pane_cp2

0x6321,	// (0x000562e4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6321,	// (0x000562e4) navi_navi_icon_text_pane_srt_t1

0x53a2,	// (0x00055365) navi_tabs_2_long_pane_srt

0x53a2,	// (0x00055365) navi_tabs_2_pane_srt

0x53a2,	// (0x00055365) navi_tabs_3_long_pane_srt

0x53a2,	// (0x00055365) navi_tabs_3_pane_srt

0x53a2,	// (0x00055365) navi_tabs_4_pane_srt

0x11ea,	// (0x000511ad) tabs_2_active_pane_srt_ParamLimits

0x11ea,	// (0x000511ad) tabs_2_active_pane_srt

0x11fa,	// (0x000511bd) tabs_2_passive_pane_srt_ParamLimits

0x11fa,	// (0x000511bd) tabs_2_passive_pane_srt

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp1_srt

0x62ed,	// (0x000562b0) bg_passive_tab_pane_g1_cp1_srt

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp1_srt

0x62f6,	// (0x000562b9) bg_passive_tab_pane_g3_cp1_srt

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp1_srt_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp1_srt

0x62ff,	// (0x000562c2) tabs_2_active_pane_srt_g1

0xd858,	// (0x0005d81b) tabs_2_active_pane_srt_t1_ParamLimits

0xd858,	// (0x0005d81b) tabs_2_active_pane_srt_t1

0x62ed,	// (0x000562b0) bg_active_tab_pane_g1_cp1_srt

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp1_srt

0x62f6,	// (0x000562b9) bg_active_tab_pane_g3_cp1_srt

0x11b7,	// (0x0005117a) tabs_3_active_pane_srt_ParamLimits

0x11b7,	// (0x0005117a) tabs_3_active_pane_srt

0x11c8,	// (0x0005118b) tabs_3_passive_pane_cp_srt_ParamLimits

0x11c8,	// (0x0005118b) tabs_3_passive_pane_cp_srt

0x11d9,	// (0x0005119c) tabs_3_passive_pane_srt_ParamLimits

0x11d9,	// (0x0005119c) tabs_3_passive_pane_srt

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4bdf,	// (0x00054ba2) bg_passive_tab_pane_cp2_srt

0x3de9,	// (0x00053dac) bg_passive_tab_pane_g1_cp2_srt

0x3870,	// (0x00053833) bg_passive_tab_pane_g2_cp2_srt

0x3df2,	// (0x00053db5) bg_passive_tab_pane_g3_cp2_srt

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp2_srt_ParamLimits

0x24d7,	// (0x0005249a) bg_active_tab_pane_cp2_srt

0x62d3,	// (0x00056296) tabs_3_active_pane_srt_g1

0xd842,	// (0x0005d805) tabs_3_active_pane_srt_t1_ParamLimits

0xd842,	// (0x0005d805) tabs_3_active_pane_srt_t1

0x3de9,	// (0x00053dac) bg_active_tab_pane_g1_cp2_srt

0x3870,	// (0x00053833) bg_active_tab_pane_g2_cp2_srt

0x3df2,	// (0x00053db5) bg_active_tab_pane_g3_cp2_srt

0x116f,	// (0x00051132) tabs_4_active_pane_srt_ParamLimits

0x116f,	// (0x00051132) tabs_4_active_pane_srt

0x1181,	// (0x00051144) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1181,	// (0x00051144) tabs_4_passive_pane_cp2_srt

0x3f47,	// (0x00053f0a) aid_size_cell_toolbar

0x5ef5,	// (0x00055eb8) main_idle_act_pane_ParamLimits

0x4176,	// (0x00054139) popup_large_graphic_colour_window_ParamLimits

0xceb7,	// (0x0005ce7a) popup_toolbar_window_ParamLimits

0xceb7,	// (0x0005ce7a) popup_toolbar_window

0x60ed,	// (0x000560b0) list_single_graphic_2heading_pane_ParamLimits

0x60ed,	// (0x000560b0) list_single_graphic_2heading_pane

0x337c,	// (0x0005333f) aid_size_cell_apps_grid_lsc_pane

0x338e,	// (0x00053351) aid_size_cell_apps_grid_prt_pane

0x3fb1,	// (0x00053f74) bg_wml_button_pane_cp1_ParamLimits

0x3fb1,	// (0x00053f74) bg_wml_button_pane_cp1

0xd391,	// (0x0005d354) form_midp_field_text_pane_t1_ParamLimits

0x4bdf,	// (0x00054ba2) input_focus_pane_cp050_ParamLimits

0x4df6,	// (0x00054db9) list_midp_form_text_pane_ParamLimits

0x4da8,	// (0x00054d6b) input_focus_pane_cp051_ParamLimits

0x4dbc,	// (0x00054d7f) list_midp_choice_pane_ParamLimits

0xd348,	// (0x0005d30b) list_single_2graphic_pane_cp3_ParamLimits

0xd348,	// (0x0005d30b) list_single_2graphic_pane_cp3

0x6f50,	// (0x00056f13) list_single_midp_graphic_pane_ParamLimits

0x6f50,	// (0x00056f13) list_single_midp_graphic_pane

0xf0b9,	// (0x0005f07c) list_single_graphic_2heading_pane_g1_ParamLimits

0xf0b9,	// (0x0005f07c) list_single_graphic_2heading_pane_g1

0xf0c5,	// (0x0005f088) list_single_graphic_2heading_pane_g4_ParamLimits

0xf0c5,	// (0x0005f088) list_single_graphic_2heading_pane_g4

0xf0d1,	// (0x0005f094) list_single_graphic_2heading_pane_g5_ParamLimits

0xf0d1,	// (0x0005f094) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x0005f7b8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x0005f7b8) list_single_graphic_2heading_pane_g

0xf0dd,	// (0x0005f0a0) list_single_graphic_2heading_pane_t1_ParamLimits

0xf0dd,	// (0x0005f0a0) list_single_graphic_2heading_pane_t1

0xf0f1,	// (0x0005f0b4) list_single_graphic_2heading_pane_t2_ParamLimits

0xf0f1,	// (0x0005f0b4) list_single_graphic_2heading_pane_t2

0xf10d,	// (0x0005f0d0) list_single_graphic_2heading_pane_t3_ParamLimits

0xf10d,	// (0x0005f0d0) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0005f7bf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0005f7bf) list_single_graphic_2heading_pane_t

0x4a2b,	// (0x000549ee) bg_popup_sub_pane_cp2

0x4a55,	// (0x00054a18) grid_toobar_pane

0x0cf0,	// (0x00050cb3) cell_toolbar_pane_ParamLimits

0x0cf0,	// (0x00050cb3) cell_toolbar_pane

0x4a91,	// (0x00054a54) cell_toolbar_pane_g1_ParamLimits

0x4a91,	// (0x00054a54) cell_toolbar_pane_g1

0x4aa5,	// (0x00054a68) cell_toolbar_pane_g2_ParamLimits

0x4aa5,	// (0x00054a68) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x0005f7cd) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x0005f7cd) cell_toolbar_pane_g

0x4ac7,	// (0x00054a8a) grid_highlight_pane_cp2_ParamLimits

0x4ac7,	// (0x00054a8a) grid_highlight_pane_cp2

0x4ae1,	// (0x00054aa4) toolbar_button_pane

0x4aed,	// (0x00054ab0) toolbar_button_pane_g1

0x4af5,	// (0x00054ab8) toolbar_button_pane_g2

0x4afd,	// (0x00054ac0) toolbar_button_pane_g3

0x4b05,	// (0x00054ac8) toolbar_button_pane_g4

0x4b0d,	// (0x00054ad0) toolbar_button_pane_g5

0x4b15,	// (0x00054ad8) toolbar_button_pane_g6

0x4b1d,	// (0x00054ae0) toolbar_button_pane_g7

0x4b25,	// (0x00054ae8) toolbar_button_pane_g8

0x4b2d,	// (0x00054af0) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x0005f7d2) toolbar_button_pane_g

0x0d4a,	// (0x00050d0d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0d4a,	// (0x00050d0d) list_single_2graphic_pane_g1_cp3

0xb93c,	// (0x0005b8ff) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb93c,	// (0x0005b8ff) list_single_2graphic_pane_g2_cp3

0x0d67,	// (0x00050d2a) list_single_2graphic_pane_g3_cp3

0x0d6f,	// (0x00050d32) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0d6f,	// (0x00050d32) list_single_2graphic_pane_g4_cp3

0x0d7b,	// (0x00050d3e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0d7b,	// (0x00050d3e) list_single_2graphic_pane_t1_cp3

0x0dc0,	// (0x00050d83) list_single_midp_graphic_pane_g2_ParamLimits

0x0dc0,	// (0x00050d83) list_single_midp_graphic_pane_g2

0x0cd8,	// (0x00050c9b) aid_zoom_text_primary

0x0ce0,	// (0x00050ca3) aid_zoom_text_secondary

0x3ea6,	// (0x00053e69) status_small_pane_g7_ParamLimits

0x3ea6,	// (0x00053e69) status_small_pane_g7

0x3ec9,	// (0x00053e8c) status_small_pane_t1_ParamLimits

0xafde,	// (0x0005afa1) title_pane_g2

0x0003,

0xf592,	// (0x0005f555) title_pane_g

0xc201,	// (0x0005c1c4) aid_size_cell_colour_1_pane_ParamLimits

0xc201,	// (0x0005c1c4) aid_size_cell_colour_1_pane

0xc215,	// (0x0005c1d8) aid_size_cell_colour_2_pane_ParamLimits

0xc215,	// (0x0005c1d8) aid_size_cell_colour_2_pane

0xc229,	// (0x0005c1ec) aid_size_cell_colour_3_pane_ParamLimits

0xc229,	// (0x0005c1ec) aid_size_cell_colour_3_pane

0xc23d,	// (0x0005c200) aid_size_cell_colour_4_pane_ParamLimits

0xc23d,	// (0x0005c200) aid_size_cell_colour_4_pane

0x06bd,	// (0x00050680) title_pane_stacon_g1_ParamLimits

0x06bd,	// (0x00050680) title_pane_stacon_g1

0x5188,	// (0x0005514b) popup_note_wait_window_g3_ParamLimits

0x5188,	// (0x0005514b) popup_note_wait_window_g3

0x51ff,	// (0x000551c2) popup_note_wait_window_t5_ParamLimits

0x51ff,	// (0x000551c2) popup_note_wait_window_t5

0x217b,	// (0x0005213e) main_feb_china_hwr_fs_writing_pane

0xc7b4,	// (0x0005c777) popup_feb_china_hwr_fs_window_ParamLimits

0xc7b4,	// (0x0005c777) popup_feb_china_hwr_fs_window

0xb94d,	// (0x0005b910) aid_size_cell_hwr_fs_ParamLimits

0xb94d,	// (0x0005b910) aid_size_cell_hwr_fs

0x4bdf,	// (0x00054ba2) bg_popup_sub_pane_cp3_ParamLimits

0x4bdf,	// (0x00054ba2) bg_popup_sub_pane_cp3

0xb962,	// (0x0005b925) grid_hwr_fs_pane_ParamLimits

0xb962,	// (0x0005b925) grid_hwr_fs_pane

0x0e0f,	// (0x00050dd2) linegrid_hwr_fs_pane_ParamLimits

0x0e0f,	// (0x00050dd2) linegrid_hwr_fs_pane

0xb97a,	// (0x0005b93d) cell_hwr_fs_pane_ParamLimits

0xb97a,	// (0x0005b93d) cell_hwr_fs_pane

0x4beb,	// (0x00054bae) linegrid_hwr_fs_pane_g1_ParamLimits

0x4beb,	// (0x00054bae) linegrid_hwr_fs_pane_g1

0xd31c,	// (0x0005d2df) linegrid_hwr_fs_pane_g2_ParamLimits

0xd31c,	// (0x0005d2df) linegrid_hwr_fs_pane_g2

0x4c09,	// (0x00054bcc) linegrid_hwr_fs_pane_g3_ParamLimits

0x4c09,	// (0x00054bcc) linegrid_hwr_fs_pane_g3

0x0e43,	// (0x00050e06) linegrid_hwr_fs_pane_g4_ParamLimits

0x0e43,	// (0x00050e06) linegrid_hwr_fs_pane_g4

0x0e61,	// (0x00050e24) linegrid_hwr_fs_pane_g5_ParamLimits

0x0e61,	// (0x00050e24) linegrid_hwr_fs_pane_g5

0x0004,

0xf835,	// (0x0005f7f8) linegrid_hwr_fs_pane_g_ParamLimits

0xf835,	// (0x0005f7f8) linegrid_hwr_fs_pane_g

0x4c15,	// (0x00054bd8) cell_hwr_fs_pane_g1_ParamLimits

0x4c15,	// (0x00054bd8) cell_hwr_fs_pane_g1

0x4962,	// (0x00054925) cell_hwr_fs_pane_g2_ParamLimits

0x4962,	// (0x00054925) cell_hwr_fs_pane_g2

0xd32e,	// (0x0005d2f1) cell_hwr_fs_pane_g3_ParamLimits

0xd32e,	// (0x0005d2f1) cell_hwr_fs_pane_g3

0xd33b,	// (0x0005d2fe) cell_hwr_fs_pane_g4_ParamLimits

0xd33b,	// (0x0005d2fe) cell_hwr_fs_pane_g4

0x0003,

0xf840,	// (0x0005f803) cell_hwr_fs_pane_g_ParamLimits

0xf840,	// (0x0005f803) cell_hwr_fs_pane_g

0xb9a0,	// (0x0005b963) cell_hwr_fs_pane_t1

0x217b,	// (0x0005213e) grid_highlight_pane_cp6

0x217b,	// (0x0005213e) main_idle_act2_pane

0x3132,	// (0x000530f5) aid_inside_area_popup_secondary

0xd415,	// (0x0005d3d8) aid_inside_area_window_primary_ParamLimits

0xd415,	// (0x0005d3d8) aid_inside_area_window_primary

0x643a,	// (0x000563fd) ai2_news_ticker_pane

0x6442,	// (0x00056405) aid_size_cell_ai1_link_ParamLimits

0x6442,	// (0x00056405) aid_size_cell_ai1_link

0x645c,	// (0x0005641f) popup_ai2_data_window_ParamLimits

0x645c,	// (0x0005641f) popup_ai2_data_window

0x647a,	// (0x0005643d) popup_ai2_link_window_ParamLimits

0x647a,	// (0x0005643d) popup_ai2_link_window

0x4bdf,	// (0x00054ba2) bg_popup_sub_pane_cp4_ParamLimits

0x4bdf,	// (0x00054ba2) bg_popup_sub_pane_cp4

0x6490,	// (0x00056453) grid_ai2_link_pane_ParamLimits

0x6490,	// (0x00056453) grid_ai2_link_pane

0x64a7,	// (0x0005646a) popup_ai2_link_window_g1_ParamLimits

0x64a7,	// (0x0005646a) popup_ai2_link_window_g1

0x64b3,	// (0x00056476) popup_ai2_link_window_g2_ParamLimits

0x64b3,	// (0x00056476) popup_ai2_link_window_g2

0x0001,

0xfa0c,	// (0x0005f9cf) popup_ai2_link_window_g_ParamLimits

0xfa0c,	// (0x0005f9cf) popup_ai2_link_window_g

0x64c4,	// (0x00056487) ai2_mp_button_pane

0x64cc,	// (0x0005648f) ai2_mp_volume_pane

0x4da8,	// (0x00054d6b) bg_popup_sub_pane_cp5_ParamLimits

0x4da8,	// (0x00054d6b) bg_popup_sub_pane_cp5

0x64d4,	// (0x00056497) heading_ai2_gene_pane_ParamLimits

0x64d4,	// (0x00056497) heading_ai2_gene_pane

0x64e0,	// (0x000564a3) list_ai2_gene_pane_ParamLimits

0x64e0,	// (0x000564a3) list_ai2_gene_pane

0x6528,	// (0x000564eb) cell_ai2_link_pane_ParamLimits

0x6528,	// (0x000564eb) cell_ai2_link_pane

0x653e,	// (0x00056501) cell_ai2_link_pane_g1

0x217b,	// (0x0005213e) grid_highlight_pane_cp7

0x1227,	// (0x000511ea) ai2_mp_volume_pane_g1

0x6611,	// (0x000565d4) ai2_mp_volume_pane_g2

0x6586,	// (0x00056549) list_ai2_gene_pane_t1

0x6619,	// (0x000565dc) ai2_mp_volume_pane_g3

0x0002,

0xfa25,	// (0x0005f9e8) ai2_mp_volume_pane_g

0x122f,	// (0x000511f2) volume_small_pane_cp3

0x6621,	// (0x000565e4) aid_size_cell_ai2_button

0x6629,	// (0x000565ec) grid_ai2_button_pane

0x6632,	// (0x000565f5) cell_ai2_button_pane_ParamLimits

0x6632,	// (0x000565f5) cell_ai2_button_pane

0x2171,	// (0x00052134) cell_ai2_button_pane_g1

0x217b,	// (0x0005213e) grid_highlight_pane_cp8

0x65d1,	// (0x00056594) ai2_gene_pane_t1_ParamLimits

0x65d1,	// (0x00056594) ai2_gene_pane_t1

0xc724,	// (0x0005c6e7) aid_height_parent_landscape

0xd5e5,	// (0x0005d5a8) aid_height_set_list

0x5ef5,	// (0x00055eb8) aid_size_parent

0x625b,	// (0x0005621e) aid_size_cell_graphic_pane_ParamLimits

0x64f0,	// (0x000564b3) popup_ai2_data_window_g1_ParamLimits

0x64f0,	// (0x000564b3) popup_ai2_data_window_g1

0x64fc,	// (0x000564bf) ai2_news_ticker_pane_g1

0x6504,	// (0x000564c7) ai2_news_ticker_pane_g2

0x0001,

0xfa11,	// (0x0005f9d4) ai2_news_ticker_pane_g

0x650c,	// (0x000564cf) ai2_news_ticker_pane_t1

0x651a,	// (0x000564dd) ai2_news_ticker_pane_t2

0x0001,

0xfa16,	// (0x0005f9d9) ai2_news_ticker_pane_t

0x6547,	// (0x0005650a) heading_ai2_gene_pane_g1

0x654f,	// (0x00056512) heading_ai2_gene_pane_t1_ParamLimits

0x654f,	// (0x00056512) heading_ai2_gene_pane_t1

0x6564,	// (0x00056527) list_highlight_pane_cp6

0x656c,	// (0x0005652f) ai2_gene_pane_ParamLimits

0x656c,	// (0x0005652f) ai2_gene_pane

0x6594,	// (0x00056557) list_ai2_gene_pane_t2

0x0001,

0xfa1b,	// (0x0005f9de) list_ai2_gene_pane_t

0x65a2,	// (0x00056565) list_highlight_pane_cp8_ParamLimits

0x65a2,	// (0x00056565) list_highlight_pane_cp8

0x65b3,	// (0x00056576) ai2_gene_pane_g1_ParamLimits

0x65b3,	// (0x00056576) ai2_gene_pane_g1

0x65c5,	// (0x00056588) ai2_gene_pane_g2_ParamLimits

0x65c5,	// (0x00056588) ai2_gene_pane_g2

0x0001,

0xfa20,	// (0x0005f9e3) ai2_gene_pane_g_ParamLimits

0xfa20,	// (0x0005f9e3) ai2_gene_pane_g

0x2f5f,	// (0x00052f22) scroll_pane_cp12

0xb8fb,	// (0x0005b8be) control_pane_t3_ParamLimits

0xb8fb,	// (0x0005b8be) control_pane_t3

0x3eba,	// (0x00053e7d) status_small_pane_g8_ParamLimits

0x3eba,	// (0x00053e7d) status_small_pane_g8

0xc856,	// (0x0005c819) popup_find_window_ParamLimits

0xcb03,	// (0x0005cac6) popup_note_image_window_ParamLimits

0x0d20,	// (0x00050ce3) list_double2_graphic_pane_vc_g1_ParamLimits

0x0d20,	// (0x00050ce3) list_double2_graphic_pane_vc_g1

0x3ba4,	// (0x00053b67) list_double2_graphic_pane_vc_g2_ParamLimits

0x3ba4,	// (0x00053b67) list_double2_graphic_pane_vc_g2

0x28dd,	// (0x000528a0) list_double2_graphic_pane_vc_g3_ParamLimits

0x28dd,	// (0x000528a0) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x0005f7c6) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x0005f7c6) list_double2_graphic_pane_vc_g

0x0d2c,	// (0x00050cef) list_double2_graphic_pane_vc_t1_ParamLimits

0x0d2c,	// (0x00050cef) list_double2_graphic_pane_vc_t1

0x3ba4,	// (0x00053b67) list_single_heading_pane_vc_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_single_heading_pane_vc_g1

0x28dd,	// (0x000528a0) list_single_heading_pane_vc_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0005f5d9) list_single_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0005f5d9) list_single_heading_pane_vc_g

0x0d96,	// (0x00050d59) list_single_heading_pane_vc_t1_ParamLimits

0x0d96,	// (0x00050d59) list_single_heading_pane_vc_t1

0x0dac,	// (0x00050d6f) list_single_heading_pane_vc_t2_ParamLimits

0x0dac,	// (0x00050d6f) list_single_heading_pane_vc_t2

0x0001,

0xf824,	// (0x0005f7e7) list_single_heading_pane_vc_t_ParamLimits

0xf824,	// (0x0005f7e7) list_single_heading_pane_vc_t

0x4b35,	// (0x00054af8) list_setting_number_pane_vc_g1_ParamLimits

0x4b35,	// (0x00054af8) list_setting_number_pane_vc_g1

0x4b41,	// (0x00054b04) list_setting_number_pane_vc_g2_ParamLimits

0x4b41,	// (0x00054b04) list_setting_number_pane_vc_g2

0x0001,

0xf829,	// (0x0005f7ec) list_setting_number_pane_vc_g_ParamLimits

0xf829,	// (0x0005f7ec) list_setting_number_pane_vc_g

0x4b4d,	// (0x00054b10) list_setting_number_pane_vc_t1_ParamLimits

0x4b4d,	// (0x00054b10) list_setting_number_pane_vc_t1

0x4b61,	// (0x00054b24) list_setting_number_pane_vc_t2_ParamLimits

0x4b61,	// (0x00054b24) list_setting_number_pane_vc_t2

0x4b7d,	// (0x00054b40) list_setting_number_pane_vc_t3_ParamLimits

0x4b7d,	// (0x00054b40) list_setting_number_pane_vc_t3

0x0002,

0xf82e,	// (0x0005f7f1) list_setting_number_pane_vc_t_ParamLimits

0xf82e,	// (0x0005f7f1) list_setting_number_pane_vc_t

0x4ba5,	// (0x00054b68) set_value_pane_vc_ParamLimits

0x4ba5,	// (0x00054b68) set_value_pane_vc

0x60ed,	// (0x000560b0) list_double2_graphic_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double2_graphic_pane_vc

0x60ed,	// (0x000560b0) list_double2_large_graphic_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double2_large_graphic_pane_vc

0x60ed,	// (0x000560b0) list_double2_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double2_pane_vc

0x60ed,	// (0x000560b0) list_double_graphic_heading_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_graphic_heading_pane_vc

0x60ed,	// (0x000560b0) list_double_graphic_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_graphic_pane_vc

0x60ed,	// (0x000560b0) list_double_heading_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_heading_pane_vc

0x60ed,	// (0x000560b0) list_double_large_graphic_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_large_graphic_pane_vc

0x60ed,	// (0x000560b0) list_double_number_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_number_pane_vc

0x60ed,	// (0x000560b0) list_double_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_pane_vc

0x60ed,	// (0x000560b0) list_double_time_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_double_time_pane_vc

0x60ed,	// (0x000560b0) list_setting_number_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_setting_number_pane_vc

0x60ed,	// (0x000560b0) list_setting_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_setting_pane_vc

0x60ed,	// (0x000560b0) list_single_graphic_heading_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_single_graphic_heading_pane_vc

0x60ed,	// (0x000560b0) list_single_heading_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_single_heading_pane_vc

0x60ed,	// (0x000560b0) list_single_number_heading_pane_vc_ParamLimits

0x60ed,	// (0x000560b0) list_single_number_heading_pane_vc

0x0d20,	// (0x00050ce3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0d20,	// (0x00050ce3) list_double_graphic_heading_pane_vc_g1

0x2915,	// (0x000528d8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2915,	// (0x000528d8) list_double_graphic_heading_pane_vc_g2

0x2921,	// (0x000528e4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2921,	// (0x000528e4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa2c,	// (0x0005f9ef) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa2c,	// (0x0005f9ef) list_double_graphic_heading_pane_vc_g

0x1238,	// (0x000511fb) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1238,	// (0x000511fb) list_double_graphic_heading_pane_vc_t1

0x0d96,	// (0x00050d59) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d96,	// (0x00050d59) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0005f9f6) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0005f9f6) list_double_graphic_heading_pane_vc_t

0x4b35,	// (0x00054af8) list_setting_pane_vc_g1_ParamLimits

0x4b35,	// (0x00054af8) list_setting_pane_vc_g1

0x4b41,	// (0x00054b04) list_setting_pane_vc_g2_ParamLimits

0x4b41,	// (0x00054b04) list_setting_pane_vc_g2

0x0001,

0xf829,	// (0x0005f7ec) list_setting_pane_vc_g_ParamLimits

0xf829,	// (0x0005f7ec) list_setting_pane_vc_g

0x68b0,	// (0x00056873) list_setting_pane_vc_t1_ParamLimits

0x68b0,	// (0x00056873) list_setting_pane_vc_t1

0x68c4,	// (0x00056887) list_setting_pane_vc_t2_ParamLimits

0x68c4,	// (0x00056887) list_setting_pane_vc_t2

0x0001,

0xfa76,	// (0x0005fa39) list_setting_pane_vc_t_ParamLimits

0xfa76,	// (0x0005fa39) list_setting_pane_vc_t

0x4ba5,	// (0x00054b68) set_value_pane_cp_vc_ParamLimits

0x4ba5,	// (0x00054b68) set_value_pane_cp_vc

0x3ba4,	// (0x00053b67) list_single_number_heading_pane_vc_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_single_number_heading_pane_vc_g1

0x28dd,	// (0x000528a0) list_single_number_heading_pane_vc_g2_ParamLimits

0x28dd,	// (0x000528a0) list_single_number_heading_pane_vc_g2

0x0001,

0xf616,	// (0x0005f5d9) list_single_number_heading_pane_vc_g_ParamLimits

0xf616,	// (0x0005f5d9) list_single_number_heading_pane_vc_g

0x0d96,	// (0x00050d59) list_single_number_heading_pane_vc_t1_ParamLimits

0x0d96,	// (0x00050d59) list_single_number_heading_pane_vc_t1

0x124c,	// (0x0005120f) list_single_number_heading_pane_vc_t2_ParamLimits

0x124c,	// (0x0005120f) list_single_number_heading_pane_vc_t2

0x1260,	// (0x00051223) list_single_number_heading_pane_vc_t3_ParamLimits

0x1260,	// (0x00051223) list_single_number_heading_pane_vc_t3

0x0002,

0xfa7b,	// (0x0005fa3e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0005fa3e) list_single_number_heading_pane_vc_t

0x0d20,	// (0x00050ce3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0d20,	// (0x00050ce3) list_single_graphic_heading_pane_vc_g1

0x3ba4,	// (0x00053b67) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3ba4,	// (0x00053b67) list_single_graphic_heading_pane_vc_g4

0x28dd,	// (0x000528a0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x28dd,	// (0x000528a0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x0005f7c6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x0005f7c6) list_single_graphic_heading_pane_vc_g

0x0d96,	// (0x00050d59) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0d96,	// (0x00050d59) list_single_graphic_heading_pane_vc_t1

0x1272,	// (0x00051235) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x1272,	// (0x00051235) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x0005fa45) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x0005fa45) list_single_graphic_heading_pane_vc_t

0x3ba4,	// (0x00053b67) list_double2_pane_vc_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_double2_pane_vc_g1

0x28dd,	// (0x000528a0) list_double2_pane_vc_g2_ParamLimits

0x28dd,	// (0x000528a0) list_double2_pane_vc_g2

0x0001,

0xf616,	// (0x0005f5d9) list_double2_pane_vc_g_ParamLimits

0xf616,	// (0x0005f5d9) list_double2_pane_vc_g

0x1286,	// (0x00051249) list_double2_pane_vc_t1_ParamLimits

0x1286,	// (0x00051249) list_double2_pane_vc_t1

0x292d,	// (0x000528f0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x292d,	// (0x000528f0) list_double2_large_graphic_pane_vc_g1

0x3ba4,	// (0x00053b67) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x3ba4,	// (0x00053b67) list_double2_large_graphic_pane_vc_g2

0x28dd,	// (0x000528a0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x28dd,	// (0x000528a0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf62e,	// (0x0005f5f1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf62e,	// (0x0005f5f1) list_double2_large_graphic_pane_vc_g

0x129c,	// (0x0005125f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x129c,	// (0x0005125f) list_double2_large_graphic_pane_vc_t1

0x2939,	// (0x000528fc) list_double_time_pane_vc_g1_ParamLimits

0x2939,	// (0x000528fc) list_double_time_pane_vc_g1

0x2945,	// (0x00052908) list_double_time_pane_vc_g2_ParamLimits

0x2945,	// (0x00052908) list_double_time_pane_vc_g2

0x0001,

0xfa87,	// (0x0005fa4a) list_double_time_pane_vc_g_ParamLimits

0xfa87,	// (0x0005fa4a) list_double_time_pane_vc_g

0x12b2,	// (0x00051275) list_double_time_pane_vc_t1_ParamLimits

0x12b2,	// (0x00051275) list_double_time_pane_vc_t1

0x12cb,	// (0x0005128e) list_double_time_pane_vc_t2_ParamLimits

0x12cb,	// (0x0005128e) list_double_time_pane_vc_t2

0x130b,	// (0x000512ce) list_double_time_pane_vc_t3_ParamLimits

0x130b,	// (0x000512ce) list_double_time_pane_vc_t3

0x1323,	// (0x000512e6) list_double_time_pane_vc_t4_ParamLimits

0x1323,	// (0x000512e6) list_double_time_pane_vc_t4

0x0003,

0xfa8c,	// (0x0005fa4f) list_double_time_pane_vc_t_ParamLimits

0xfa8c,	// (0x0005fa4f) list_double_time_pane_vc_t

0x3ba4,	// (0x00053b67) list_double_pane_vc_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_double_pane_vc_g1

0x28dd,	// (0x000528a0) list_double_pane_vc_g2_ParamLimits

0x28dd,	// (0x000528a0) list_double_pane_vc_g2

0x0001,

0xf616,	// (0x0005f5d9) list_double_pane_vc_g_ParamLimits

0xf616,	// (0x0005f5d9) list_double_pane_vc_g

0x1337,	// (0x000512fa) list_double_pane_vc_t1_ParamLimits

0x1337,	// (0x000512fa) list_double_pane_vc_t1

0x1349,	// (0x0005130c) list_double_pane_vc_t2_ParamLimits

0x1349,	// (0x0005130c) list_double_pane_vc_t2

0x0001,

0xfa95,	// (0x0005fa58) list_double_pane_vc_t_ParamLimits

0xfa95,	// (0x0005fa58) list_double_pane_vc_t

0x3ba4,	// (0x00053b67) list_double_number_pane_vc_g1_ParamLimits

0x3ba4,	// (0x00053b67) list_double_number_pane_vc_g1

0x28dd,	// (0x000528a0) list_double_number_pane_vc_g2_ParamLimits

0x28dd,	// (0x000528a0) list_double_number_pane_vc_g2

0x0001,

0xf616,	// (0x0005f5d9) list_double_number_pane_vc_g_ParamLimits

0xf616,	// (0x0005f5d9) list_double_number_pane_vc_g

0x1361,	// (0x00051324) list_double_number_pane_vc_t1_ParamLimits

0x1361,	// (0x00051324) list_double_number_pane_vc_t1

0x1375,	// (0x00051338) list_double_number_pane_vc_t2_ParamLimits

0x1375,	// (0x00051338) list_double_number_pane_vc_t2

0x1349,	// (0x0005130c) list_double_number_pane_vc_t3_ParamLimits

0x1349,	// (0x0005130c) list_double_number_pane_vc_t3

0x0002,

0xfa9a,	// (0x0005fa5d) list_double_number_pane_vc_t_ParamLimits

0xfa9a,	// (0x0005fa5d) list_double_number_pane_vc_t

0x2951,	// (0x00052914) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2951,	// (0x00052914) list_double_large_graphic_pane_vc_g1

0x295d,	// (0x00052920) list_double_large_graphic_pane_vc_g2_ParamLimits

0x295d,	// (0x00052920) list_double_large_graphic_pane_vc_g2

0x28dd,	// (0x000528a0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x28dd,	// (0x000528a0) list_double_large_graphic_pane_vc_g3

0x1387,	// (0x0005134a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x1387,	// (0x0005134a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa1,	// (0x0005fa64) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa1,	// (0x0005fa64) list_double_large_graphic_pane_vc_g

0x1393,	// (0x00051356) list_double_large_graphic_pane_vc_t1_ParamLimits

0x1393,	// (0x00051356) list_double_large_graphic_pane_vc_t1

0x13a5,	// (0x00051368) list_double_large_graphic_pane_vc_t2_ParamLimits

0x13a5,	// (0x00051368) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaa,	// (0x0005fa6d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaa,	// (0x0005fa6d) list_double_large_graphic_pane_vc_t

0x2915,	// (0x000528d8) list_double_heading_pane_vc_g1_ParamLimits

0x2915,	// (0x000528d8) list_double_heading_pane_vc_g1

0x2921,	// (0x000528e4) list_double_heading_pane_vc_g2_ParamLimits

0x2921,	// (0x000528e4) list_double_heading_pane_vc_g2

0x0001,

0xfaaf,	// (0x0005fa72) list_double_heading_pane_vc_g_ParamLimits

0xfaaf,	// (0x0005fa72) list_double_heading_pane_vc_g

0x13be,	// (0x00051381) list_double_heading_pane_vc_t1_ParamLimits

0x13be,	// (0x00051381) list_double_heading_pane_vc_t1

0x0d96,	// (0x00050d59) list_double_heading_pane_vc_t2_ParamLimits

0x0d96,	// (0x00050d59) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x0005fa77) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x0005fa77) list_double_heading_pane_vc_t

0x0d20,	// (0x00050ce3) list_double_graphic_pane_vc_g1_ParamLimits

0x0d20,	// (0x00050ce3) list_double_graphic_pane_vc_g1

0x296c,	// (0x0005292f) list_double_graphic_pane_vc_g2_ParamLimits

0x296c,	// (0x0005292f) list_double_graphic_pane_vc_g2

0x297b,	// (0x0005293e) list_double_graphic_pane_vc_g3_ParamLimits

0x297b,	// (0x0005293e) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x0005fa7c) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x0005fa7c) list_double_graphic_pane_vc_g

0x13d2,	// (0x00051395) list_double_graphic_pane_vc_t1_ParamLimits

0x13d2,	// (0x00051395) list_double_graphic_pane_vc_t1

0x1349,	// (0x0005130c) list_double_graphic_pane_vc_t2_ParamLimits

0x1349,	// (0x0005130c) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x0005fa83) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x0005fa83) list_double_graphic_pane_vc_t

0xf2e0,	// (0x0005f2a3) aid_size_cell_fastswap

0xae28,	// (0x0005adeb) aid_size_cell_touch_ParamLimits

0xae28,	// (0x0005adeb) aid_size_cell_touch

0xf467,	// (0x0005f42a) popup_fast_swap_wide_window_ParamLimits

0xf467,	// (0x0005f42a) popup_fast_swap_wide_window

0xaf77,	// (0x0005af3a) touch_pane_ParamLimits

0xaf77,	// (0x0005af3a) touch_pane

0x2fb5,	// (0x00052f78) button_value_adjust_pane_cp2

0x043d,	// (0x00050400) button_value_adjust_pane_cp4

0x0465,	// (0x00050428) form_field_data_pane_cp2

0xb64b,	// (0x0005b60e) form_field_data_wide_pane_cp2

0x344e,	// (0x00053411) bg_scroll_pane_ParamLimits

0x0822,	// (0x000507e5) scroll_handle_pane_ParamLimits

0x0836,	// (0x000507f9) scroll_sc2_down_pane_ParamLimits

0x0836,	// (0x000507f9) scroll_sc2_down_pane

0x347f,	// (0x00053442) scroll_sc2_up_pane_ParamLimits

0x347f,	// (0x00053442) scroll_sc2_up_pane

0xd999,	// (0x0005d95c) grid_wheel_folder_pane_g1_ParamLimits

0xd999,	// (0x0005d95c) grid_wheel_folder_pane_g1

0x0a6e,	// (0x00050a31) clock_nsta_pane_cp2_ParamLimits

0x0a6e,	// (0x00050a31) clock_nsta_pane_cp2

0xc639,	// (0x0005c5fc) listscroll_midp_pane_ParamLimits

0xc64a,	// (0x0005c60d) midp_canvas_pane

0x3f35,	// (0x00053ef8) nsta_clock_indic_pane

0x3f83,	// (0x00053f46) listscroll_form_pane_vc

0x3f9f,	// (0x00053f62) listscroll_set_pane_vc_ParamLimits

0x3f9f,	// (0x00053f62) listscroll_set_pane_vc

0xd016,	// (0x0005cfd9) clock_nsta_pane

0xd040,	// (0x0005d003) indicator_nsta_pane

0x4a2b,	// (0x000549ee) bg_popup_sub_pane_cp2_ParamLimits

0x4a3f,	// (0x00054a02) find_pane_cp2_ParamLimits

0x4a3f,	// (0x00054a02) find_pane_cp2

0x4a55,	// (0x00054a18) grid_toobar_pane_ParamLimits

0x4bb3,	// (0x00054b76) list_form_gen_pane_vc_ParamLimits

0x4bb3,	// (0x00054b76) list_form_gen_pane_vc

0x4bc9,	// (0x00054b8c) scroll_pane_cp8_vc_ParamLimits

0x4bc9,	// (0x00054b8c) scroll_pane_cp8_vc

0x4c45,	// (0x00054c08) data_form_wide_pane_vc_ParamLimits

0x4c45,	// (0x00054c08) data_form_wide_pane_vc

0x4c51,	// (0x00054c14) form_field_data_wide_pane_vc_g1

0x4c59,	// (0x00054c1c) form_field_data_wide_pane_vc_t1_ParamLimits

0x4c59,	// (0x00054c1c) form_field_data_wide_pane_vc_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_cp6_vc_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_cp6_vc

0xd3b9,	// (0x0005d37c) list_midp_pane_ParamLimits

0x62c7,	// (0x0005628a) scroll_pane_cp16_ParamLimits

0x62c7,	// (0x0005628a) scroll_pane_cp16

0x4f7f,	// (0x00054f42) button_value_adjust_pane_ParamLimits

0x4f7f,	// (0x00054f42) button_value_adjust_pane

0xd5f6,	// (0x0005d5b9) button_value_adjust_pane_cp6_ParamLimits

0xd5f6,	// (0x0005d5b9) button_value_adjust_pane_cp6

0xd738,	// (0x0005d6fb) settings_code_pane_cp_ParamLimits

0xd738,	// (0x0005d6fb) settings_code_pane_cp

0x2171,	// (0x00052134) cell_touch_pane_g1

0x2171,	// (0x00052134) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x0005f70f) cell_touch_pane_g

0xd86e,	// (0x0005d831) cell_touch_pane_cp_ParamLimits

0xd86e,	// (0x0005d831) cell_touch_pane_cp

0xd88a,	// (0x0005d84d) cell_touch_pane_ParamLimits

0xd88a,	// (0x0005d84d) cell_touch_pane

0x2171,	// (0x00052134) scroll_sc2_down_pane_g1

0x2171,	// (0x00052134) scroll_sc2_up_pane_g1

0x217b,	// (0x0005213e) bg_set_opt_pane_cp4_vc

0x6665,	// (0x00056628) list_set_graphic_pane_vc_g1_ParamLimits

0x6665,	// (0x00056628) list_set_graphic_pane_vc_g1

0x6671,	// (0x00056634) list_set_graphic_pane_vc_g2_ParamLimits

0x6671,	// (0x00056634) list_set_graphic_pane_vc_g2

0x0001,

0xfa38,	// (0x0005f9fb) list_set_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x0005f9fb) list_set_graphic_pane_vc_g

0x667d,	// (0x00056640) text_primary_small_cp13_vc_ParamLimits

0x667d,	// (0x00056640) text_primary_small_cp13_vc

0x6695,	// (0x00056658) list_set_graphic_pane_vc_ParamLimits

0x6695,	// (0x00056658) list_set_graphic_pane_vc

0x217b,	// (0x0005213e) input_focus_pane_cp2_vc

0x2171,	// (0x00052134) setting_code_pane_vc_g1

0x66a9,	// (0x0005666c) setting_code_pane_vc_t1

0x66b7,	// (0x0005667a) set_text_pane_vc_t1_ParamLimits

0x66b7,	// (0x0005667a) set_text_pane_vc_t1

0x217b,	// (0x0005213e) input_focus_pane_cp1_vc

0x66d5,	// (0x00056698) list_set_text_pane_vc

0x2171,	// (0x00052134) setting_text_pane_vc_g1

0x217b,	// (0x0005213e) bg_set_opt_pane_cp2_vc

0x66df,	// (0x000566a2) setting_slider_graphic_pane_vc_g1

0x66e7,	// (0x000566aa) setting_slider_graphic_pane_vc_t1

0x66f5,	// (0x000566b8) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3d,	// (0x0005fa00) setting_slider_graphic_pane_vc_t

0x6703,	// (0x000566c6) slider_set_pane_cp_vc

0x670b,	// (0x000566ce) slider_set_pane_vc_g1

0x6714,	// (0x000566d7) slider_set_pane_vc_g2

0x0006,

0xfa42,	// (0x0005fa05) slider_set_pane_vc_g

0x3030,	// (0x00052ff3) set_opt_bg_pane_g1_copy1

0x3038,	// (0x00052ffb) set_opt_bg_pane_g2_copy1

0x6740,	// (0x00056703) set_opt_bg_pane_g3_copy1

0x3048,	// (0x0005300b) set_opt_bg_pane_g4_copy1

0x3050,	// (0x00053013) set_opt_bg_pane_g5_copy1

0x3058,	// (0x0005301b) set_opt_bg_pane_g6_copy1

0x674a,	// (0x0005670d) set_opt_bg_pane_g7_copy1

0x6796,	// (0x00056759) set_opt_bg_pane_g8_copy1

0x67a0,	// (0x00056763) set_opt_bg_pane_g9_copy1

0x217b,	// (0x0005213e) bg_set_opt_pane_cp_vc

0x67aa,	// (0x0005676d) setting_slider_pane_vc_t1

0x66e7,	// (0x000566aa) setting_slider_pane_vc_t2

0x66f5,	// (0x000566b8) setting_slider_pane_vc_t3

0x0002,

0xfa51,	// (0x0005fa14) setting_slider_pane_vc_t

0x6703,	// (0x000566c6) slider_set_pane_vc

0x0eb3,	// (0x00050e76) volume_set_pane_vc_g1

0x0ebc,	// (0x00050e7f) volume_set_pane_vc_g2

0x0ec5,	// (0x00050e88) volume_set_pane_vc_g3

0x0ece,	// (0x00050e91) volume_set_pane_vc_g4

0x0ed7,	// (0x00050e9a) volume_set_pane_vc_g5

0x0ee0,	// (0x00050ea3) volume_set_pane_vc_g6

0x0ee9,	// (0x00050eac) volume_set_pane_vc_g7

0x0ef2,	// (0x00050eb5) volume_set_pane_vc_g8

0x0efb,	// (0x00050ebe) volume_set_pane_vc_g9

0x0f04,	// (0x00050ec7) volume_set_pane_vc_g10

0x0009,

0xfa58,	// (0x0005fa1b) volume_set_pane_vc_g

0x67b9,	// (0x0005677c) volume_set_pane_vc

0x67c1,	// (0x00056784) button_value_adjust_pane_cp1_vc

0x67cb,	// (0x0005678e) list_highlight_pane_cp2_vc

0x67d4,	// (0x00056797) list_set_pane_vc_ParamLimits

0x67d4,	// (0x00056797) list_set_pane_vc

0x683e,	// (0x00056801) main_pane_set_vc_t1_ParamLimits

0x683e,	// (0x00056801) main_pane_set_vc_t1

0x6853,	// (0x00056816) main_pane_set_vc_t2_ParamLimits

0x6853,	// (0x00056816) main_pane_set_vc_t2

0x6865,	// (0x00056828) main_pane_set_vc_t3_ParamLimits

0x6865,	// (0x00056828) main_pane_set_vc_t3

0x6879,	// (0x0005683c) main_pane_set_vc_t4_ParamLimits

0x6879,	// (0x0005683c) main_pane_set_vc_t4

0x0003,

0xfa6d,	// (0x0005fa30) main_pane_set_vc_t_ParamLimits

0xfa6d,	// (0x0005fa30) main_pane_set_vc_t

0x688d,	// (0x00056850) setting_code_pane_vc_ParamLimits

0x688d,	// (0x00056850) setting_code_pane_vc

0x689e,	// (0x00056861) setting_slider_graphic_pane_vc

0x689e,	// (0x00056861) setting_slider_pane_vc

0x689e,	// (0x00056861) setting_text_pane_vc

0x689e,	// (0x00056861) setting_volume_pane_vc

0x68a8,	// (0x0005686b) scroll_pane_cp121_vc

0x2fa3,	// (0x00052f66) set_content_pane_vc

0x68e6,	// (0x000568a9) button_value_adjust_pane_g1

0x68ef,	// (0x000568b2) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x0005fa88) button_value_adjust_pane_g

0x68f8,	// (0x000568bb) form_field_slider_wide_pane_vc_t1_ParamLimits

0x68f8,	// (0x000568bb) form_field_slider_wide_pane_vc_t1

0x690c,	// (0x000568cf) form_field_slider_wide_pane_vc_t2_ParamLimits

0x690c,	// (0x000568cf) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x0005fa8d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x0005fa8d) form_field_slider_wide_pane_vc_t

0x24d7,	// (0x0005249a) input_focus_pane_cp10_vc_ParamLimits

0x24d7,	// (0x0005249a) input_focus_pane_cp10_vc

0x691e,	// (0x000568e1) slider_cont_pane_cp1_vc_ParamLimits

0x691e,	// (0x000568e1) slider_cont_pane_cp1_vc

0x670b,	// (0x000566ce) slider_form_pane_g1_cp2

0x6714,	// (0x000566d7) slider_form_pane_g2_cp2

0x6937,	// (0x000568fa) form_field_slider_pane_vc_t3

0x6945,	// (0x00056908) form_field_slider_pane_vc_t4

0x6953,	// (0x00056916) slider_form_pane_vc_ParamLimits

0x6953,	// (0x00056916) slider_form_pane_vc

0x6960,	// (0x00056923) form_field_slider_pane_vc_t1_ParamLimits

0x6960,	// (0x00056923) form_field_slider_pane_vc_t1

0x690c,	// (0x000568cf) form_field_slider_pane_vc_t2_ParamLimits

0x690c,	// (0x000568cf) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x0005fa9d) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x0005fa9d) form_field_slider_pane_vc_t

0x24d7,	// (0x0005249a) input_focus_pane_cp9_vc_ParamLimits

0x24d7,	// (0x0005249a) input_focus_pane_cp9_vc

0x697c,	// (0x0005693f) slider_cont_pane_vc_ParamLimits

0x697c,	// (0x0005693f) slider_cont_pane_vc

0x698e,	// (0x00056951) list_form_graphic_pane_cp_vc_ParamLimits

0x698e,	// (0x00056951) list_form_graphic_pane_cp_vc

0x4c51,	// (0x00054c14) form_field_popup_wide_pane_vc_g1

0x69a3,	// (0x00056966) form_field_popup_wide_pane_vc_t1_ParamLimits

0x69a3,	// (0x00056966) form_field_popup_wide_pane_vc_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_cp8_vc_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_cp8_vc

0x69ba,	// (0x0005697d) list_form_wide_pane_vc_ParamLimits

0x69ba,	// (0x0005697d) list_form_wide_pane_vc

0x69c6,	// (0x00056989) list_form_graphic_pane_vc_g1

0x69ce,	// (0x00056991) list_form_graphic_pane_vc_t1_ParamLimits

0x69ce,	// (0x00056991) list_form_graphic_pane_vc_t1

0x225b,	// (0x0005221e) list_highlight_pane_cp5_vc_ParamLimits

0x225b,	// (0x0005221e) list_highlight_pane_cp5_vc

0x69ea,	// (0x000569ad) list_form_graphic_pane_vc_ParamLimits

0x69ea,	// (0x000569ad) list_form_graphic_pane_vc

0x4c51,	// (0x00054c14) form_field_popup_pane_vc_g1

0x6a00,	// (0x000569c3) form_field_popup_pane_vc_t1_ParamLimits

0x6a00,	// (0x000569c3) form_field_popup_pane_vc_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_cp7_vc_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_cp7_vc

0x6a17,	// (0x000569da) list_form_pane_vc_ParamLimits

0x6a17,	// (0x000569da) list_form_pane_vc

0x6a23,	// (0x000569e6) data_form_pane_vc_t1_ParamLimits

0x6a23,	// (0x000569e6) data_form_pane_vc_t1

0x3030,	// (0x00052ff3) input_focus_pane_vc_g1

0x3038,	// (0x00052ffb) input_focus_pane_vc_g2

0x3040,	// (0x00053003) input_focus_pane_vc_g3

0x3048,	// (0x0005300b) input_focus_pane_vc_g4

0x3050,	// (0x00053013) input_focus_pane_vc_g5

0x3058,	// (0x0005301b) input_focus_pane_vc_g6

0x3060,	// (0x00053023) input_focus_pane_vc_g7

0x3068,	// (0x0005302b) input_focus_pane_vc_g8

0x3070,	// (0x00053033) input_focus_pane_vc_g9

0x2171,	// (0x00052134) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x0005f698) input_focus_pane_vc_g

0x4c45,	// (0x00054c08) data_form_pane_vc_ParamLimits

0x4c45,	// (0x00054c08) data_form_pane_vc

0x4c51,	// (0x00054c14) form_field_data_pane_vc_g1

0x6a40,	// (0x00056a03) form_field_data_pane_vc_t1_ParamLimits

0x6a40,	// (0x00056a03) form_field_data_pane_vc_t1

0x2fc9,	// (0x00052f8c) input_focus_pane_vc_ParamLimits

0x2fc9,	// (0x00052f8c) input_focus_pane_vc

0x6a5a,	// (0x00056a1d) button_value_adjust_pane_cp3_vc

0x6a62,	// (0x00056a25) button_value_adjust_pane_cp5_vc

0x6a6a,	// (0x00056a2d) form_field_data_pane_vc_ParamLimits

0x6a6a,	// (0x00056a2d) form_field_data_pane_vc

0x6a85,	// (0x00056a48) form_field_data_pane_vc_cp2

0x6a8d,	// (0x00056a50) form_field_data_wide_pane_vc_ParamLimits

0x6a8d,	// (0x00056a50) form_field_data_wide_pane_vc

0x6aa7,	// (0x00056a6a) form_field_data_wide_pane_vc_cp2

0x6aaf,	// (0x00056a72) form_field_popup_pane_vc_ParamLimits

0x6aaf,	// (0x00056a72) form_field_popup_pane_vc

0x6aca,	// (0x00056a8d) form_field_popup_wide_pane_vc_ParamLimits

0x6aca,	// (0x00056a8d) form_field_popup_wide_pane_vc

0x6ae4,	// (0x00056aa7) form_field_slider_pane_vc_ParamLimits

0x6ae4,	// (0x00056aa7) form_field_slider_pane_vc

0x6af7,	// (0x00056aba) form_field_slider_wide_pane_vc_ParamLimits

0x6af7,	// (0x00056aba) form_field_slider_wide_pane_vc

0xd8a8,	// (0x0005d86b) grid_touch_1_pane_ParamLimits

0xd8a8,	// (0x0005d86b) grid_touch_1_pane

0xd8bc,	// (0x0005d87f) grid_touch_2_pane_ParamLimits

0xd8bc,	// (0x0005d87f) grid_touch_2_pane

0x6bce,	// (0x00056b91) touch_pane_g1_ParamLimits

0x6bce,	// (0x00056b91) touch_pane_g1

0x6b30,	// (0x00056af3) cell_app_pane_cp_wide_ParamLimits

0x6b30,	// (0x00056af3) cell_app_pane_cp_wide

0x6b41,	// (0x00056b04) grid_popup_fast_wide_pane_ParamLimits

0x6b41,	// (0x00056b04) grid_popup_fast_wide_pane

0x6b55,	// (0x00056b18) scroll_pane_cp19_ParamLimits

0x6b55,	// (0x00056b18) scroll_pane_cp19

0x217b,	// (0x0005213e) bg_popup_window_pane_cp20

0x6b69,	// (0x00056b2c) listscroll_popup_fast_wide_pane

0x319f,	// (0x00053162) grid_indicator_nsta_pane

0x6b71,	// (0x00056b34) clock_nsta_pane_g1

0x6b7a,	// (0x00056b3d) clock_nsta_pane_t1

0xd8e8,	// (0x0005d8ab) cell_indicator_nsta_pane_ParamLimits

0xd8e8,	// (0x0005d8ab) cell_indicator_nsta_pane

0x6bce,	// (0x00056b91) cell_indicator_nsta_pane_g1

0xd905,	// (0x0005d8c8) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x0005faa7) cell_indicator_nsta_pane_g

0x6bf1,	// (0x00056bb4) clock_nsta_pane_cp

0x6bf9,	// (0x00056bbc) indicator_nsta_pane_cp

0x6c01,	// (0x00056bc4) nsta_clock_indic_pane_g1

0x2327,	// (0x000522ea) grid_indicator_pane

0x3571,	// (0x00053534) scroll_pane_cp29

0x09ba,	// (0x0005097d) indicator_nsta_pane_cp2_ParamLimits

0x09ba,	// (0x0005097d) indicator_nsta_pane_cp2

0x225b,	// (0x0005221e) main_apps_wheel_pane

0x4e10,	// (0x00054dd3) form_midp_field_text_pane_ParamLimits

0x4f5f,	// (0x00054f22) scroll_bar_cp050_ParamLimits

0x6c39,	// (0x00056bfc) cell_indicator_pane_ParamLimits

0x6c39,	// (0x00056bfc) cell_indicator_pane

0x6c51,	// (0x00056c14) cell_indicator_pane_g1

0xd91b,	// (0x0005d8de) grid_wheel_folder_pane_ParamLimits

0xd91b,	// (0x0005d8de) grid_wheel_folder_pane

0xd929,	// (0x0005d8ec) list_wheel_apps_pane_ParamLimits

0xd929,	// (0x0005d8ec) list_wheel_apps_pane

0xd937,	// (0x0005d8fa) main_apps_wheel_pane_g1_ParamLimits

0xd937,	// (0x0005d8fa) main_apps_wheel_pane_g1

0xd947,	// (0x0005d90a) main_apps_wheel_pane_g2_ParamLimits

0xd947,	// (0x0005d90a) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x0005fab6) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x0005fab6) main_apps_wheel_pane_g

0xd957,	// (0x0005d91a) main_apps_wheel_pane_t1_ParamLimits

0xd957,	// (0x0005d91a) main_apps_wheel_pane_t1

0xd96f,	// (0x0005d932) list_wheel_apps_pane_g1

0xd977,	// (0x0005d93a) list_wheel_apps_pane_g2

0xd97f,	// (0x0005d942) list_wheel_apps_pane_g3

0xd987,	// (0x0005d94a) list_wheel_apps_pane_g4

0xd98f,	// (0x0005d952) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x0005fabb) list_wheel_apps_pane_g

0x3aaf,	// (0x00053a72) navi_icon_text_pane

0xcf0f,	// (0x0005ced2) aid_fill_nsta

0xd9ac,	// (0x0005d96f) navi_icon_text_pane_g1

0xd9b8,	// (0x0005d97b) navi_icon_text_pane_t1

0xc621,	// (0x0005c5e4) list_set_graphic_pane_t1_ParamLimits

0xc621,	// (0x0005c5e4) list_set_graphic_pane_t1

0x567f,	// (0x00055642) popup_midp_note_alarm_window_t6_ParamLimits

0x567f,	// (0x00055642) popup_midp_note_alarm_window_t6

0x5691,	// (0x00055654) popup_midp_note_alarm_window_t7_ParamLimits

0x5691,	// (0x00055654) popup_midp_note_alarm_window_t7

0x56a3,	// (0x00055666) popup_midp_note_alarm_window_t8_ParamLimits

0x56a3,	// (0x00055666) popup_midp_note_alarm_window_t8

0x56b5,	// (0x00055678) popup_midp_note_alarm_window_t9_ParamLimits

0x56b5,	// (0x00055678) popup_midp_note_alarm_window_t9

0x56c7,	// (0x0005568a) popup_midp_note_alarm_window_t10_ParamLimits

0x56c7,	// (0x0005568a) popup_midp_note_alarm_window_t10

0x56d9,	// (0x0005569c) popup_midp_note_alarm_window_t11_ParamLimits

0x56d9,	// (0x0005569c) popup_midp_note_alarm_window_t11

0x56eb,	// (0x000556ae) scroll_pane_cp17_ParamLimits

0x56eb,	// (0x000556ae) scroll_pane_cp17

0x0eb3,	// (0x00050e76) volume_small_pane_cp_g1

0x13e4,	// (0x000513a7) volume_small_pane_cp_g2

0x13ed,	// (0x000513b0) volume_small_pane_cp_g3

0x13f6,	// (0x000513b9) volume_small_pane_cp_g4

0x13ff,	// (0x000513c2) volume_small_pane_cp_g5

0x1408,	// (0x000513cb) volume_small_pane_cp_g6

0x1411,	// (0x000513d4) volume_small_pane_cp_g7

0x141a,	// (0x000513dd) volume_small_pane_cp_g8

0x1423,	// (0x000513e6) volume_small_pane_cp_g9

0x142c,	// (0x000513ef) volume_small_pane_cp_g10

0x3d10,	// (0x00053cd3) midp_ticker_pane_g1_ParamLimits

0x3d1c,	// (0x00053cdf) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0005f760) midp_ticker_pane_g_ParamLimits

0xc6e1,	// (0x0005c6a4) midp_ticker_pane_t1_ParamLimits

0xcf2f,	// (0x0005cef2) aid_fill_nsta_2

0x4f4b,	// (0x00054f0e) list_form2_midp_pane

0x60a8,	// (0x0005606b) midp_editing_number_pane_ParamLimits

0x60b7,	// (0x0005607a) midp_ticker_pane_ParamLimits

0x6d4a,	// (0x00056d0d) form2_midp_field_pane

0x6d6e,	// (0x00056d31) scroll_pane_cp51

0x6d8e,	// (0x00056d51) form2_midp_button_pane_ParamLimits

0x6d8e,	// (0x00056d51) form2_midp_button_pane

0x6da0,	// (0x00056d63) form2_midp_content_pane_ParamLimits

0x6da0,	// (0x00056d63) form2_midp_content_pane

0x6dba,	// (0x00056d7d) form2_midp_field_choice_group_pane

0x6dc2,	// (0x00056d85) form2_midp_field_pane_g1

0x6dca,	// (0x00056d8d) form2_midp_field_pane_g2

0x6dd2,	// (0x00056d95) form2_midp_field_pane_g3

0x6dda,	// (0x00056d9d) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x0005fae0) form2_midp_field_pane_g

0x6de2,	// (0x00056da5) form2_midp_gauge_slider_pane

0x6dea,	// (0x00056dad) form2_midp_gauge_wait_pane

0x6df2,	// (0x00056db5) form2_midp_image_pane_ParamLimits

0x6df2,	// (0x00056db5) form2_midp_image_pane

0x6e0d,	// (0x00056dd0) form2_midp_label_pane_ParamLimits

0x6e0d,	// (0x00056dd0) form2_midp_label_pane

0xd9e6,	// (0x0005d9a9) form2_midp_label_pane_cp_ParamLimits

0xd9e6,	// (0x0005d9a9) form2_midp_label_pane_cp

0x6e4d,	// (0x00056e10) form2_midp_string_pane_ParamLimits

0x6e4d,	// (0x00056e10) form2_midp_string_pane

0xbb73,	// (0x0005bb36) form2_midp_text_pane_ParamLimits

0xbb73,	// (0x0005bb36) form2_midp_text_pane

0x6e5f,	// (0x00056e22) form2_midp_time_pane

0x6e6f,	// (0x00056e32) input_focus_pane_cp51_ParamLimits

0x6e6f,	// (0x00056e32) input_focus_pane_cp51

0x6e87,	// (0x00056e4a) form2_midp_label_pane_t1_ParamLimits

0x6e87,	// (0x00056e4a) form2_midp_label_pane_t1

0xbb96,	// (0x0005bb59) form2_mdip_text_pane_t1_ParamLimits

0xbb96,	// (0x0005bb59) form2_mdip_text_pane_t1

0x1477,	// (0x0005143a) form2_midp_time_pane_t1

0x6ed5,	// (0x00056e98) form2_midp_gauge_slider_pane_t1

0xda07,	// (0x0005d9ca) form2_midp_gauge_slider_pane_t2

0xda19,	// (0x0005d9dc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x0005fae9) form2_midp_gauge_slider_pane_t

0x6f0b,	// (0x00056ece) form2_midp_slider_pane

0x6f17,	// (0x00056eda) form2_midp_gauge_wait_pane_t1

0x6f25,	// (0x00056ee8) form2_midp_wait_pane_ParamLimits

0x6f25,	// (0x00056ee8) form2_midp_wait_pane

0xd348,	// (0x0005d30b) list_single_2graphic_pane_cp4_ParamLimits

0xd348,	// (0x0005d30b) list_single_2graphic_pane_cp4

0xda2b,	// (0x0005d9ee) list_single_midp_graphic_pane_cp_ParamLimits

0xda2b,	// (0x0005d9ee) list_single_midp_graphic_pane_cp

0x217b,	// (0x0005213e) list_highlight_pane_cp20

0x6f74,	// (0x00056f37) list_single_2graphic_pane_g1_cp4

0x6547,	// (0x0005650a) list_single_2graphic_pane_g2_cp4

0x6f7c,	// (0x00056f3f) list_single_2graphic_pane_t1_cp4

0x225b,	// (0x0005221e) list_highlight_pane_cp21

0x6f8b,	// (0x00056f4e) list_single_midp_graphic_pane_g4_cp

0x6f9a,	// (0x00056f5d) list_single_midp_graphic_pane_t1_cp

0xda4c,	// (0x0005da0f) form2_mdip_string_pane_t1_ParamLimits

0xda4c,	// (0x0005da0f) form2_mdip_string_pane_t1

0x217b,	// (0x0005213e) bg_wml_button_pane_cp2

0x2171,	// (0x00052134) form2_midp_image_pane_g1

0x2895,	// (0x00052858) list_double_large_graphic_pane_g5_ParamLimits

0x2895,	// (0x00052858) list_double_large_graphic_pane_g5

0xc639,	// (0x0005c5fc) midp_form_pane_ParamLimits

0x225b,	// (0x0005221e) main_apps_wheel_pane_ParamLimits

0xcb89,	// (0x0005cb4c) popup_preview_window_ParamLimits

0xcb89,	// (0x0005cb4c) popup_preview_window

0x4575,	// (0x00054538) popup_touch_info_window_ParamLimits

0x4575,	// (0x00054538) popup_touch_info_window

0x4597,	// (0x0005455a) popup_touch_menu_window_ParamLimits

0x4597,	// (0x0005455a) popup_touch_menu_window

0x2167,	// (0x0005212a) bg_popup_sub_pane_cp6

0x7054,	// (0x00057017) list_touch_menu_pane

0x705c,	// (0x0005701f) list_single_touch_menu_pane_ParamLimits

0x705c,	// (0x0005701f) list_single_touch_menu_pane

0x7077,	// (0x0005703a) list_single_touch_menu_pane_t1

0x225b,	// (0x0005221e) bg_popup_sub_pane_cp7_ParamLimits

0x225b,	// (0x0005221e) bg_popup_sub_pane_cp7

0x7085,	// (0x00057048) heading_sub_pane

0x708d,	// (0x00057050) list_touch_info_pane_ParamLimits

0x708d,	// (0x00057050) list_touch_info_pane

0x709c,	// (0x0005705f) list_single_touch_info_pane_ParamLimits

0x709c,	// (0x0005705f) list_single_touch_info_pane

0x70ae,	// (0x00057071) list_single_touch_info_pane_t1

0x70bc,	// (0x0005707f) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x0005faf7) list_single_touch_info_pane_t

0x3c33,	// (0x00053bf6) bg_popup_heading_pane_cp

0x70ca,	// (0x0005708d) heading_sub_pane_t1

0x4bdf,	// (0x00054ba2) bg_popup_preview_window_pane_cp_ParamLimits

0x4bdf,	// (0x00054ba2) bg_popup_preview_window_pane_cp

0x7085,	// (0x00057048) heading_preview_pane

0x708d,	// (0x00057050) list_preview_pane_ParamLimits

0x708d,	// (0x00057050) list_preview_pane

0x70d8,	// (0x0005709b) popup_preview_window_g1

0x709c,	// (0x0005705f) list_single_preview_pane_ParamLimits

0x709c,	// (0x0005705f) list_single_preview_pane

0x70e0,	// (0x000570a3) list_single_preview_pane_g1

0x70e8,	// (0x000570ab) list_single_preview_pane_t1

0x70ae,	// (0x00057071) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x0005fafc) list_single_preview_pane_t

0x70f6,	// (0x000570b9) bg_popup_heading_pane_cp2_ParamLimits

0x70f6,	// (0x000570b9) bg_popup_heading_pane_cp2

0x710c,	// (0x000570cf) heading_preview_pane_g1

0x7114,	// (0x000570d7) heading_preview_pane_t1_ParamLimits

0x7114,	// (0x000570d7) heading_preview_pane_t1

0x234a,	// (0x0005230d) soft_indicator_pane_t1_ParamLimits

0x2f3c,	// (0x00052eff) scroll_pane_ParamLimits

0x346d,	// (0x00053430) scroll_sc2_left_pane

0x3476,	// (0x00053439) scroll_sc2_right_pane

0x3495,	// (0x00053458) scroll_bg_pane_g1_ParamLimits

0x34aa,	// (0x0005346d) scroll_bg_pane_g2_ParamLimits

0x34c2,	// (0x00053485) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x0005f6ef) scroll_bg_pane_g_ParamLimits

0x3495,	// (0x00053458) scroll_handle_pane_g1_ParamLimits

0x34e4,	// (0x000534a7) scroll_handle_pane_g2_ParamLimits

0x34c2,	// (0x00053485) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x0005f6f6) scroll_handle_pane_g_ParamLimits

0x3fd9,	// (0x00053f9c) popup_choice_list_window_ParamLimits

0x3fd9,	// (0x00053f9c) popup_choice_list_window

0x4a37,	// (0x000549fa) choice_list_pane

0x4ab9,	// (0x00054a7c) cell_toolbar_pane_t1

0x4ae1,	// (0x00054aa4) toolbar_button_pane_ParamLimits

0x5bbb,	// (0x00055b7e) ai_gene_pane_1_t2_ParamLimits

0x5bbb,	// (0x00055b7e) ai_gene_pane_1_t2

0x0001,

0xf94b,	// (0x0005f90e) ai_gene_pane_1_t_ParamLimits

0xf94b,	// (0x0005f90e) ai_gene_pane_1_t

0x7131,	// (0x000570f4) scroll_sc2_left_pane_g1

0x7131,	// (0x000570f4) scroll_sc2_right_pane_g1

0x3fb1,	// (0x00053f74) bg_popup_sub_pane_cp10

0x713b,	// (0x000570fe) list_choice_list_pane

0x7152,	// (0x00057115) list_single_choice_list_pane_ParamLimits

0x7152,	// (0x00057115) list_single_choice_list_pane

0x7166,	// (0x00057129) list_single_choice_list_pane_g1

0x716e,	// (0x00057131) list_single_choice_list_pane_t1_ParamLimits

0x716e,	// (0x00057131) list_single_choice_list_pane_t1

0x7183,	// (0x00057146) choice_list_pane_g1

0x718b,	// (0x0005714e) choice_list_pane_t1

0x2167,	// (0x0005212a) input_focus_pane_cp11

0x3347,	// (0x0005330a) title_pane_stacon_g2_ParamLimits

0x3347,	// (0x0005330a) title_pane_stacon_g2

0x0002,

0xf712,	// (0x0005f6d5) title_pane_stacon_g_ParamLimits

0xf712,	// (0x0005f6d5) title_pane_stacon_g

0x3c33,	// (0x00053bf6) cursor_press_pane

0xc80a,	// (0x0005c7cd) popup_fep_hwr_window_ParamLimits

0xc80a,	// (0x0005c7cd) popup_fep_hwr_window

0x4119,	// (0x000540dc) popup_fep_vkb_window_ParamLimits

0x4119,	// (0x000540dc) popup_fep_vkb_window

0x7199,	// (0x0005715c) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x0005fb25) fep_vkb_side_pane_g_ParamLimits

0x14c3,	// (0x00051486) fep_hwr_candidate_pane_ParamLimits

0x14c3,	// (0x00051486) fep_hwr_candidate_pane

0x14ed,	// (0x000514b0) fep_hwr_side_pane_ParamLimits

0x14ed,	// (0x000514b0) fep_hwr_side_pane

0x150f,	// (0x000514d2) fep_hwr_top_pane_ParamLimits

0x150f,	// (0x000514d2) fep_hwr_top_pane

0x1527,	// (0x000514ea) fep_hwr_write_pane_ParamLimits

0x1527,	// (0x000514ea) fep_hwr_write_pane

0xfb62,	// (0x0005fb25) fep_vkb_side_pane_g

0x71a1,	// (0x00057164) fep_hwr_top_pane_g1

0x71b3,	// (0x00057176) fep_hwr_top_pane_g2

0x1561,	// (0x00051524) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x0005fb01) fep_hwr_top_pane_g

0x1576,	// (0x00051539) fep_hwr_top_text_pane

0x3639,	// (0x000535fc) fep_hwr_top_text_pane_g1

0x71e9,	// (0x000571ac) fep_hwr_top_text_pane_t1

0x1680,	// (0x00051643) fep_hwr_candidate_pane_g1

0x7442,	// (0x00057405) fep_vkb_keypad_pane_g3_ParamLimits

0x7442,	// (0x00057405) fep_vkb_keypad_pane_g3

0x746e,	// (0x00057431) fep_vkb_keypad_pane_g4_ParamLimits

0x746e,	// (0x00057431) fep_vkb_keypad_pane_g4

0x74e5,	// (0x000574a8) fep_vkb_bottom_pane_g2_ParamLimits

0x74e5,	// (0x000574a8) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x0005fb2c) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x0005fb2c) fep_vkb_bottom_pane_g

0x7131,	// (0x000570f4) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x0005fb36) cell_vkb_side_pane_g

0x7570,	// (0x00057533) cell_vkb_side_pane_t1

0x757e,	// (0x00057541) cell_vkb_side_pane_t1_copy1

0x7131,	// (0x000570f4) bg_fep_vkb_candidate_pane_g2

0x76c2,	// (0x00057685) cell_vkb_candidate_pane_ParamLimits

0x71f7,	// (0x000571ba) aid_size_cell_vkb_ParamLimits

0x71f7,	// (0x000571ba) aid_size_cell_vkb

0x76c2,	// (0x00057685) cell_vkb_candidate_pane

0x16a7,	// (0x0005166a) bg_popup_fep_shadow_pane_g1

0xdae8,	// (0x0005daab) fep_vkb_bottom_pane_ParamLimits

0xdae8,	// (0x0005daab) fep_vkb_bottom_pane

0x72c6,	// (0x00057289) fep_vkb_candidate_pane_ParamLimits

0x72c6,	// (0x00057289) fep_vkb_candidate_pane

0xdb14,	// (0x0005dad7) fep_vkb_keypad_pane_ParamLimits

0xdb14,	// (0x0005dad7) fep_vkb_keypad_pane

0xdb3b,	// (0x0005dafe) fep_vkb_side_pane_ParamLimits

0xdb3b,	// (0x0005dafe) fep_vkb_side_pane

0xdb77,	// (0x0005db3a) fep_vkb_top_pane_ParamLimits

0xdb77,	// (0x0005db3a) fep_vkb_top_pane

0x739b,	// (0x0005735e) fep_vkb_top_pane_g1_ParamLimits

0x739b,	// (0x0005735e) fep_vkb_top_pane_g1

0x73aa,	// (0x0005736d) fep_vkb_top_pane_g2_ParamLimits

0x73aa,	// (0x0005736d) fep_vkb_top_pane_g2

0x73b9,	// (0x0005737c) fep_vkb_top_pane_g3_ParamLimits

0x73b9,	// (0x0005737c) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x0005fb1c) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x0005fb1c) fep_vkb_top_pane_g

0x73d7,	// (0x0005739a) fep_vkb_top_text_pane_ParamLimits

0x73d7,	// (0x0005739a) fep_vkb_top_text_pane

0xdbb3,	// (0x0005db76) fep_vkb_side_pane_g1_ParamLimits

0xdbb3,	// (0x0005db76) fep_vkb_side_pane_g1

0x7431,	// (0x000573f4) grid_vkb_side_pane_ParamLimits

0x7431,	// (0x000573f4) grid_vkb_side_pane

0x16af,	// (0x00051672) bg_popup_fep_shadow_pane_g2

0x16b8,	// (0x0005167b) bg_popup_fep_shadow_pane_g3

0x16c0,	// (0x00051683) bg_popup_fep_shadow_pane_g4

0x16c9,	// (0x0005168c) bg_popup_fep_shadow_pane_g5

0x16d3,	// (0x00051696) bg_popup_fep_shadow_pane_g6

0x16db,	// (0x0005169e) bg_popup_fep_shadow_pane_g7

0x3048,	// (0x0005300b) bg_popup_fep_shadow_pane_g8

0x7490,	// (0x00057453) grid_vkb_keypad_number_pane_ParamLimits

0x7490,	// (0x00057453) grid_vkb_keypad_number_pane

0x74a4,	// (0x00057467) grid_vkb_keypad_pane_ParamLimits

0x74a4,	// (0x00057467) grid_vkb_keypad_pane

0x74ca,	// (0x0005748d) fep_vkb_bottom_pane_g1_ParamLimits

0x74ca,	// (0x0005748d) fep_vkb_bottom_pane_g1

0x74f3,	// (0x000574b6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x74f3,	// (0x000574b6) grid_vkb_keypad_bottom_left_pane

0x7508,	// (0x000574cb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7508,	// (0x000574cb) grid_vkb_keypad_bottom_right_pane

0x751d,	// (0x000574e0) fep_vkb_top_text_pane_g1

0xdbfa,	// (0x0005dbbd) fep_vkb_top_text_pane_t1

0xdc0c,	// (0x0005dbcf) cell_vkb_side_pane_ParamLimits

0xdc0c,	// (0x0005dbcf) cell_vkb_side_pane

0x7131,	// (0x000570f4) cell_vkb_side_pane_g1

0x758c,	// (0x0005754f) cell_vkb_keypad_pane_ParamLimits

0x758c,	// (0x0005754f) cell_vkb_keypad_pane

0x7619,	// (0x000575dc) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x0005fb49) bg_popup_fep_shadow_pane_g

0x16ed,	// (0x000516b0) cell_hwr_side_pane_g1

0x16ed,	// (0x000516b0) cell_hwr_side_pane_g2

0x7623,	// (0x000575e6) cell_vkb_keypad_pane_t1

0xdc22,	// (0x0005dbe5) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdc22,	// (0x0005dbe5) cell_vkb_keypad_bottom_left_pane

0xdc37,	// (0x0005dbfa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdc37,	// (0x0005dbfa) cell_vkb_keypad_bottom_right_pane

0x7131,	// (0x000570f4) cell_vkb_keypad_bottom_left_pane_g1

0x7131,	// (0x000570f4) cell_vkb_keypad_bottom_right_pane_g1

0x7687,	// (0x0005764a) cell_vkb_keypad_number_pane_ParamLimits

0x7687,	// (0x0005764a) cell_vkb_keypad_number_pane

0x76a6,	// (0x00057669) cell_vkb_keypad_number_pane_g1

0x76b0,	// (0x00057673) cell_vkb_keypad_number_pane_g2

0x76b9,	// (0x0005767c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x0005fb3b) cell_vkb_keypad_number_pane_g

0x7623,	// (0x000575e6) cell_vkb_keypad_number_pane_t1

0x76e3,	// (0x000576a6) fep_vkb_candidate_pane_g1

0x0001,

0xfb99,	// (0x0005fb5c) cell_hwr_side_pane_g

0x76fc,	// (0x000576bf) cell_hwr_side_pane_t1

0x16f7,	// (0x000516ba) cell_hwr_side_pane_t1_copy1

0x1705,	// (0x000516c8) cell_hwr_candidate_pane_g1

0x1734,	// (0x000516f7) cell_hwr_candidate_pane_t1

0x7131,	// (0x000570f4) cell_vkb_candidate_pane_g2

0x7740,	// (0x00057703) cell_vkb_candidate_pane_t1

0x148a,	// (0x0005144d) bg_popup_fep_shadow_pane_ParamLimits

0x148a,	// (0x0005144d) bg_popup_fep_shadow_pane

0x1541,	// (0x00051504) bg_fep_hwr_top_pane_g4

0x71c5,	// (0x00057188) bg_hwr_side_pane_g1_ParamLimits

0x71c5,	// (0x00057188) bg_hwr_side_pane_g1

0xbbca,	// (0x0005bb8d) cell_hwr_side_pane_ParamLimits

0xbbca,	// (0x0005bb8d) cell_hwr_side_pane

0x15f1,	// (0x000515b4) fep_hwr_write_pane_g1_ParamLimits

0x15f1,	// (0x000515b4) fep_hwr_write_pane_g1

0x15fe,	// (0x000515c1) fep_hwr_write_pane_g2_ParamLimits

0x15fe,	// (0x000515c1) fep_hwr_write_pane_g2

0x160b,	// (0x000515ce) fep_hwr_write_pane_g3_ParamLimits

0x160b,	// (0x000515ce) fep_hwr_write_pane_g3

0xbbea,	// (0x0005bbad) fep_hwr_write_pane_g4_ParamLimits

0xbbea,	// (0x0005bbad) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x0005fb08) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x0005fb08) fep_hwr_write_pane_g

0x1541,	// (0x00051504) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1541,	// (0x00051504) bg_fep_hwr_candidate_pane_g2

0x162e,	// (0x000515f1) cell_hwr_candidate_pane_ParamLimits

0x162e,	// (0x000515f1) cell_hwr_candidate_pane

0x1680,	// (0x00051643) fep_hwr_candidate_pane_g1_ParamLimits

0x7225,	// (0x000571e8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7225,	// (0x000571e8) bg_popup_fep_shadow_pane_cp2

0x73c9,	// (0x0005738c) fep_vkb_top_pane_g4_ParamLimits

0x73c9,	// (0x0005738c) fep_vkb_top_pane_g4

0x740f,	// (0x000573d2) fep_vkb_side_pane_g2_ParamLimits

0x740f,	// (0x000573d2) fep_vkb_side_pane_g2

0xb54d,	// (0x0005b510) list_setting_pane_t4_ParamLimits

0xb54d,	// (0x0005b510) list_setting_pane_t4

0xb5e9,	// (0x0005b5ac) list_setting_number_pane_t5_ParamLimits

0xb5e9,	// (0x0005b5ac) list_setting_number_pane_t5

0x366b,	// (0x0005362e) list_double_heading_pane_cp2_ParamLimits

0x366b,	// (0x0005362e) list_double_heading_pane_cp2

0x2fe3,	// (0x00052fa6) list_double_heading_pane_g1_cp2_ParamLimits

0x2fe3,	// (0x00052fa6) list_double_heading_pane_g1_cp2

0x2fef,	// (0x00052fb2) list_double_heading_pane_g2_cp2_ParamLimits

0x2fef,	// (0x00052fb2) list_double_heading_pane_g2_cp2

0x774e,	// (0x00057711) list_double_heading_pane_t1_cp2_ParamLimits

0x774e,	// (0x00057711) list_double_heading_pane_t1_cp2

0x7764,	// (0x00057727) list_double_heading_pane_t2_cp2_ParamLimits

0x7764,	// (0x00057727) list_double_heading_pane_t2_cp2

0x214f,	// (0x00052112) aid_value_unit2

0xf48b,	// (0x0005f44e) popup_preview_fixed_window

0x24e5,	// (0x000524a8) bg_popup_preview_window_pane_cp02

0x7776,	// (0x00057739) list_preview_fixed_pane

0x77bc,	// (0x0005777f) list_empty_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_empty_pane_fp

0x77bc,	// (0x0005777f) list_single_cale_day_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_cale_day_pane_fp

0x77bc,	// (0x0005777f) list_single_graphic_heading_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_graphic_heading_pane_fp

0x77bc,	// (0x0005777f) list_single_graphic_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_graphic_pane_fp

0x77bc,	// (0x0005777f) list_single_heading_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_heading_pane_fp

0x77bc,	// (0x0005777f) list_single_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_pane_fp

0x77d5,	// (0x00057798) list_single_pane_fp_g1_ParamLimits

0x77d5,	// (0x00057798) list_single_pane_fp_g1

0x2889,	// (0x0005284c) list_single_pane_fp_g2_ParamLimits

0x2889,	// (0x0005284c) list_single_pane_fp_g2

0x2987,	// (0x0005294a) list_single_pane_fp_g3_ParamLimits

0x2987,	// (0x0005294a) list_single_pane_fp_g3

0x77e1,	// (0x000577a4) list_single_pane_fp_g4_ParamLimits

0x77e1,	// (0x000577a4) list_single_pane_fp_g4

0x0003,

0xfbac,	// (0x0005fb6f) list_single_pane_fp_g_ParamLimits

0xfbac,	// (0x0005fb6f) list_single_pane_fp_g

0x299b,	// (0x0005295e) list_single_pane_fp_t1_ParamLimits

0x299b,	// (0x0005295e) list_single_pane_fp_t1

0x29b2,	// (0x00052975) list_single_graphic_pane_fp_g1_ParamLimits

0x29b2,	// (0x00052975) list_single_graphic_pane_fp_g1

0x77d5,	// (0x00057798) list_single_graphic_pane_fp_g2_ParamLimits

0x77d5,	// (0x00057798) list_single_graphic_pane_fp_g2

0x2889,	// (0x0005284c) list_single_graphic_pane_fp_g3_ParamLimits

0x2889,	// (0x0005284c) list_single_graphic_pane_fp_g3

0x2987,	// (0x0005294a) list_single_graphic_pane_fp_g4_ParamLimits

0x2987,	// (0x0005294a) list_single_graphic_pane_fp_g4

0x77e1,	// (0x000577a4) list_single_graphic_pane_fp_g5_ParamLimits

0x77e1,	// (0x000577a4) list_single_graphic_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fb78) list_single_graphic_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fb78) list_single_graphic_pane_fp_g

0x29be,	// (0x00052981) list_single_graphic_pane_fp_t1_ParamLimits

0x29be,	// (0x00052981) list_single_graphic_pane_fp_t1

0x29b2,	// (0x00052975) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x29b2,	// (0x00052975) list_single_graphic_heading_pane_fp_g1

0x77d5,	// (0x00057798) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x77d5,	// (0x00057798) list_single_graphic_heading_pane_fp_g2

0x2889,	// (0x0005284c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2889,	// (0x0005284c) list_single_graphic_heading_pane_fp_g3

0x2987,	// (0x0005294a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2987,	// (0x0005294a) list_single_graphic_heading_pane_fp_g4

0x77e1,	// (0x000577a4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x77e1,	// (0x000577a4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fb78) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fb78) list_single_graphic_heading_pane_fp_g

0x29d4,	// (0x00052997) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x29d4,	// (0x00052997) list_single_graphic_heading_pane_fp_t1

0x29ea,	// (0x000529ad) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x29ea,	// (0x000529ad) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbc0,	// (0x0005fb83) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbc0,	// (0x0005fb83) list_single_graphic_heading_pane_fp_t

0x29fc,	// (0x000529bf) list_single_cale_day_pane_fp_g1_ParamLimits

0x29fc,	// (0x000529bf) list_single_cale_day_pane_fp_g1

0x77ed,	// (0x000577b0) list_single_cale_day_pane_fp_g2_ParamLimits

0x77ed,	// (0x000577b0) list_single_cale_day_pane_fp_g2

0x2a34,	// (0x000529f7) list_single_cale_day_pane_fp_g3_ParamLimits

0x2a34,	// (0x000529f7) list_single_cale_day_pane_fp_g3

0x2a5c,	// (0x00052a1f) list_single_cale_day_pane_fp_g4_ParamLimits

0x2a5c,	// (0x00052a1f) list_single_cale_day_pane_fp_g4

0x2a80,	// (0x00052a43) list_single_cale_day_pane_fp_g5_ParamLimits

0x2a80,	// (0x00052a43) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc5,	// (0x0005fb88) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc5,	// (0x0005fb88) list_single_cale_day_pane_fp_g

0x2aa4,	// (0x00052a67) list_single_cale_day_pane_fp_t1_ParamLimits

0x2aa4,	// (0x00052a67) list_single_cale_day_pane_fp_t1

0x2aca,	// (0x00052a8d) list_single_cale_day_pane_fp_t2_ParamLimits

0x2aca,	// (0x00052a8d) list_single_cale_day_pane_fp_t2

0x2ae3,	// (0x00052aa6) list_single_cale_day_pane_fp_t3_ParamLimits

0x2ae3,	// (0x00052aa6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbd0,	// (0x0005fb93) list_single_cale_day_pane_fp_t_ParamLimits

0xfbd0,	// (0x0005fb93) list_single_cale_day_pane_fp_t

0x77d5,	// (0x00057798) list_empty_pane_fp_g1_ParamLimits

0x77d5,	// (0x00057798) list_empty_pane_fp_g1

0x2afc,	// (0x00052abf) list_empty_pane_fp_t1

0x2b0a,	// (0x00052acd) list_empty_pane_fp_t2

0x0001,

0xfbd7,	// (0x0005fb9a) list_empty_pane_fp_t

0x77d5,	// (0x00057798) list_single_heading_pane_fp_g1_ParamLimits

0x77d5,	// (0x00057798) list_single_heading_pane_fp_g1

0x2889,	// (0x0005284c) list_single_heading_pane_fp_g2_ParamLimits

0x2889,	// (0x0005284c) list_single_heading_pane_fp_g2

0x2987,	// (0x0005294a) list_single_heading_pane_fp_g3_ParamLimits

0x2987,	// (0x0005294a) list_single_heading_pane_fp_g3

0x0002,

0xfbdc,	// (0x0005fb9f) list_single_heading_pane_fp_g_ParamLimits

0xfbdc,	// (0x0005fb9f) list_single_heading_pane_fp_g

0x2b18,	// (0x00052adb) list_single_heading_pane_fp_t1_ParamLimits

0x2b18,	// (0x00052adb) list_single_heading_pane_fp_t1

0x2b2a,	// (0x00052aed) list_single_heading_pane_fp_t2_ParamLimits

0x2b2a,	// (0x00052aed) list_single_heading_pane_fp_t2

0x0001,

0xfbe3,	// (0x0005fba6) list_single_heading_pane_fp_t_ParamLimits

0xfbe3,	// (0x0005fba6) list_single_heading_pane_fp_t

0x31de,	// (0x000531a1) aid_size_cell_fast

0x2457,	// (0x0005241a) soft_indicator_pane_cp1_t1

0x321b,	// (0x000531de) cell_app_pane_cp2_ParamLimits

0x321b,	// (0x000531de) cell_app_pane_cp2

0x14ac,	// (0x0005146f) fep_hwr_candidate_drop_down_list_pane

0x169a,	// (0x0005165d) fep_hwr_candidate_pane_g3_ParamLimits

0x169a,	// (0x0005165d) fep_hwr_candidate_pane_g3

0xe4cb,	// (0x0005e48e) fep_hwr_candidate_pane_g4_ParamLimits

0xe4cb,	// (0x0005e48e) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x0005fb15) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x0005fb15) fep_hwr_candidate_pane_g

0x72b5,	// (0x00057278) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x72b5,	// (0x00057278) fep_vkb_candidate_drop_down_list_pane

0x76eb,	// (0x000576ae) fep_vkb_candidate_pane_g3

0x76f3,	// (0x000576b6) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x0005fb42) fep_vkb_candidate_pane_g

0x1705,	// (0x000516c8) cell_hwr_candidate_pane_g1_ParamLimits

0x1713,	// (0x000516d6) cell_hwr_candidate_pane_g3_ParamLimits

0x1713,	// (0x000516d6) cell_hwr_candidate_pane_g3

0x8b00,	// (0x00058ac3) cell_hwr_candidate_pane_g4_ParamLimits

0x8b00,	// (0x00058ac3) cell_hwr_candidate_pane_g4

0x0002,

0xfb9e,	// (0x0005fb61) cell_hwr_candidate_pane_g_ParamLimits

0xfb9e,	// (0x0005fb61) cell_hwr_candidate_pane_g

0x770a,	// (0x000576cd) cell_vkb_candidate_pane_g3_ParamLimits

0x770a,	// (0x000576cd) cell_vkb_candidate_pane_g3

0x7725,	// (0x000576e8) cell_vkb_candidate_pane_g4_ParamLimits

0x7725,	// (0x000576e8) cell_vkb_candidate_pane_g4

0x77f9,	// (0x000577bc) cell_app_pane_cp2_g1_ParamLimits

0x77f9,	// (0x000577bc) cell_app_pane_cp2_g1

0x7817,	// (0x000577da) cell_app_pane_cp2_g2_ParamLimits

0x7817,	// (0x000577da) cell_app_pane_cp2_g2

0x0001,

0xfbe8,	// (0x0005fbab) cell_app_pane_cp2_g_ParamLimits

0xfbe8,	// (0x0005fbab) cell_app_pane_cp2_g

0x7823,	// (0x000577e6) cell_app_pane_cp2_t1_ParamLimits

0x7823,	// (0x000577e6) cell_app_pane_cp2_t1

0x2fc9,	// (0x00052f8c) grid_highlight_pane_cp1_ParamLimits

0x2fc9,	// (0x00052f8c) grid_highlight_pane_cp1

0x1752,	// (0x00051715) cell_hwr_candidate_pane_cp1_ParamLimits

0x1752,	// (0x00051715) cell_hwr_candidate_pane_cp1

0x1705,	// (0x000516c8) fep_hwr_candidate_drop_down_list_pane_g1

0x1776,	// (0x00051739) fep_hwr_candidate_drop_down_list_pane_g2

0x1783,	// (0x00051746) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbed,	// (0x0005fbb0) fep_hwr_candidate_drop_down_list_pane_g

0x1790,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane

0x1799,	// (0x0005175c) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1799,	// (0x0005175c) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x17a6,	// (0x00051769) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x17a6,	// (0x00051769) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x17b3,	// (0x00051776) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x17b3,	// (0x00051776) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x17c0,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x17c0,	// (0x00051783) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x17db,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x17db,	// (0x0005179e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x17f6,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x17f6,	// (0x000517b9) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1811,	// (0x000517d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1811,	// (0x000517d4) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x182c,	// (0x000517ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x182c,	// (0x000517ef) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x0005fbb7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x0005fbb7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7835,	// (0x000577f8) cell_vkb_candidate_pane_cp1_ParamLimits

0x7835,	// (0x000577f8) cell_vkb_candidate_pane_cp1

0x73c9,	// (0x0005738c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x73c9,	// (0x0005738c) fep_vkb_candidate_drop_down_list_pane_g1

0x785b,	// (0x0005781e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x785b,	// (0x0005781e) fep_vkb_candidate_drop_down_list_pane_g2

0x7868,	// (0x0005782b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7868,	// (0x0005782b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc05,	// (0x0005fbc8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc05,	// (0x0005fbc8) fep_vkb_candidate_drop_down_list_pane_g

0x7875,	// (0x00057838) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7875,	// (0x00057838) fep_vkb_candidate_drop_down_list_scroll_pane

0x7882,	// (0x00057845) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7882,	// (0x00057845) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x788f,	// (0x00057852) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x788f,	// (0x00057852) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x789b,	// (0x0005785e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x789b,	// (0x0005785e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x78a7,	// (0x0005786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78a7,	// (0x0005786a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x78c8,	// (0x0005788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78c8,	// (0x0005788b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x78e9,	// (0x000578ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x78e9,	// (0x000578ac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x790a,	// (0x000578cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x790a,	// (0x000578cd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x792b,	// (0x000578ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x792b,	// (0x000578ee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc0c,	// (0x0005fbcf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc0c,	// (0x0005fbcf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xafcd,	// (0x0005af90) title_pane_g1_ParamLimits

0xafde,	// (0x0005afa1) title_pane_g2_ParamLimits

0xf592,	// (0x0005f555) title_pane_g_ParamLimits

0x3629,	// (0x000535ec) aid_call2_pane

0x3631,	// (0x000535f4) aid_call_pane

0x3639,	// (0x000535fc) popup_clock_analogue_window_g1

0x3639,	// (0x000535fc) popup_clock_analogue_window_g2

0x084b,	// (0x0005080e) popup_clock_analogue_window_g3

0x0854,	// (0x00050817) popup_clock_analogue_window_g4

0x2171,	// (0x00052134) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x0005f704) popup_clock_analogue_window_g

0x085c,	// (0x0005081f) popup_clock_analogue_window_t1

0x086a,	// (0x0005082d) clock_digital_number_pane_ParamLimits

0x086a,	// (0x0005082d) clock_digital_number_pane

0x0876,	// (0x00050839) clock_digital_number_pane_cp02_ParamLimits

0x0876,	// (0x00050839) clock_digital_number_pane_cp02

0x0882,	// (0x00050845) clock_digital_number_pane_cp03_ParamLimits

0x0882,	// (0x00050845) clock_digital_number_pane_cp03

0x088e,	// (0x00050851) clock_digital_number_pane_cp04_ParamLimits

0x088e,	// (0x00050851) clock_digital_number_pane_cp04

0x089a,	// (0x0005085d) clock_digital_separator_pane_ParamLimits

0x089a,	// (0x0005085d) clock_digital_separator_pane

0x08a6,	// (0x00050869) popup_clock_digital_window_t1_ParamLimits

0x08a6,	// (0x00050869) popup_clock_digital_window_t1

0x2171,	// (0x00052134) clock_digital_number_pane_g1

0x2171,	// (0x00052134) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x0005f70f) clock_digital_number_pane_g

0x2171,	// (0x00052134) clock_digital_separator_pane_g1

0x2171,	// (0x00052134) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x0005f70f) clock_digital_separator_pane_g

0xcf0f,	// (0x0005ced2) aid_fill_nsta_ParamLimits

0xd040,	// (0x0005d003) indicator_nsta_pane_ParamLimits

0x48c4,	// (0x00054887) popup_clock_analogue_window

0x48c4,	// (0x00054887) popup_clock_digital_window

0x319f,	// (0x00053162) grid_indicator_nsta_pane_ParamLimits

0x6b88,	// (0x00056b4b) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x0005faa2) clock_nsta_pane_t

0x080f,	// (0x000507d2) aid_size_max_handle

0xb786,	// (0x0005b749) aid_size_min_handle

0x3c33,	// (0x00053bf6) editor_scroll_pane

0x7946,	// (0x00057909) ex_editor_pane

0x314b,	// (0x0005310e) scroll_pane_cp13

0x2f68,	// (0x00052f2b) scroll_pane_cp14

0x3663,	// (0x00053626) scroll_pane_cp36

0xc53b,	// (0x0005c4fe) list_single_graphic_hl_pane_cp2_ParamLimits

0xc53b,	// (0x0005c4fe) list_single_graphic_hl_pane_cp2

0xd795,	// (0x0005d758) list_single_graphic_hl_pane_ParamLimits

0xd795,	// (0x0005d758) list_single_graphic_hl_pane

0x2b40,	// (0x00052b03) aid_size_min_hl_cp1

0x794e,	// (0x00057911) list_highlight_pane_cp34_ParamLimits

0x794e,	// (0x00057911) list_highlight_pane_cp34

0x795f,	// (0x00057922) list_single_graphic_hl_pane_g1_ParamLimits

0x795f,	// (0x00057922) list_single_graphic_hl_pane_g1

0xbbff,	// (0x0005bbc2) list_single_graphic_hl_pane_g2_ParamLimits

0xbbff,	// (0x0005bbc2) list_single_graphic_hl_pane_g2

0xbbff,	// (0x0005bbc2) list_single_graphic_hl_pane_g3_ParamLimits

0xbbff,	// (0x0005bbc2) list_single_graphic_hl_pane_g3

0x38b1,	// (0x00053874) list_single_graphic_hl_pane_g4_ParamLimits

0x38b1,	// (0x00053874) list_single_graphic_hl_pane_g4

0x799c,	// (0x0005795f) list_single_graphic_hl_pane_g5_ParamLimits

0x799c,	// (0x0005795f) list_single_graphic_hl_pane_g5

0x0004,

0xfc1d,	// (0x0005fbe0) list_single_graphic_hl_pane_g_ParamLimits

0xfc1d,	// (0x0005fbe0) list_single_graphic_hl_pane_g

0xf125,	// (0x0005f0e8) list_single_graphic_hl_pane_t1_ParamLimits

0xf125,	// (0x0005f0e8) list_single_graphic_hl_pane_t1

0x796c,	// (0x0005792f) aid_size_min_hl_cp2

0x7975,	// (0x00057938) list_highlight_pane_cp34_cp2_ParamLimits

0x7975,	// (0x00057938) list_highlight_pane_cp34_cp2

0x795f,	// (0x00057922) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x795f,	// (0x00057922) list_single_graphic_hl_pane_g1_cp2

0x7982,	// (0x00057945) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7982,	// (0x00057945) list_single_graphic_hl_pane_g2_cp2

0x798e,	// (0x00057951) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x798e,	// (0x00057951) list_single_graphic_hl_pane_g3_cp2

0x38b1,	// (0x00053874) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x38b1,	// (0x00053874) list_single_graphic_hl_pane_g4_cp2

0x799c,	// (0x0005795f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x799c,	// (0x0005795f) list_single_graphic_hl_pane_g5_cp2

0xb826,	// (0x0005b7e9) control_pane_g4_ParamLimits

0xb826,	// (0x0005b7e9) control_pane_g4

0x3fb1,	// (0x00053f74) bg_popup_sub_pane_cp10_ParamLimits

0x713b,	// (0x000570fe) list_choice_list_pane_ParamLimits

0x714a,	// (0x0005710d) scroll_pane_cp23

0x24e5,	// (0x000524a8) bg_popup_preview_window_pane_cp02_ParamLimits

0x7776,	// (0x00057739) list_preview_fixed_pane_ParamLimits

0x778c,	// (0x0005774f) list_preview_fixed_pane_cp_ParamLimits

0x778c,	// (0x0005774f) list_preview_fixed_pane_cp

0x7798,	// (0x0005775b) popup_preview_fixed_window_g1_ParamLimits

0x7798,	// (0x0005775b) popup_preview_fixed_window_g1

0x77a4,	// (0x00057767) popup_preview_fixed_window_g2_ParamLimits

0x77a4,	// (0x00057767) popup_preview_fixed_window_g2

0x0002,

0xfba5,	// (0x0005fb68) popup_preview_fixed_window_g_ParamLimits

0xfba5,	// (0x0005fb68) popup_preview_fixed_window_g

0x0781,	// (0x00050744) aid_navi_side_left_pane_ParamLimits

0x0796,	// (0x00050759) aid_navi_side_right_pane_ParamLimits

0x07ae,	// (0x00050771) navi_icon_pane_stacon_ParamLimits

0x07c2,	// (0x00050785) navi_navi_pane_stacon_ParamLimits

0x07ae,	// (0x00050771) navi_text_pane_stacon_ParamLimits

0x2167,	// (0x0005212a) main_text_info_pane

0x79c6,	// (0x00057989) listscroll_text_info_pane

0x79ce,	// (0x00057991) list_text_info_pane_ParamLimits

0x79ce,	// (0x00057991) list_text_info_pane

0x79dd,	// (0x000579a0) scroll_pane_cp24_ParamLimits

0x79dd,	// (0x000579a0) scroll_pane_cp24

0xdc52,	// (0x0005dc15) list_text_info_pane_t1_ParamLimits

0xdc52,	// (0x0005dc15) list_text_info_pane_t1

0xc76e,	// (0x0005c731) popup_fast_swap2_window_ParamLimits

0xc76e,	// (0x0005c731) popup_fast_swap2_window

0x7a20,	// (0x000579e3) aid_size_cell_fast2

0x2167,	// (0x0005212a) bg_popup_window_pane_cp17

0x4f77,	// (0x00054f3a) heading_pane_cp2

0x2745,	// (0x00052708) listscroll_fast2_pane

0x7a2a,	// (0x000579ed) grid_fast2_pane

0x7a34,	// (0x000579f7) listscroll_fast2_pane_g1

0x7a3e,	// (0x00057a01) listscroll_fast2_pane_g2

0x0001,

0xfc28,	// (0x0005fbeb) listscroll_fast2_pane_g

0x314b,	// (0x0005310e) scroll_pane_cp26

0x7a48,	// (0x00057a0b) cell_fast2_pane_ParamLimits

0x7a48,	// (0x00057a0b) cell_fast2_pane

0x7a5f,	// (0x00057a22) cell_fast2_pane_g1

0x7a68,	// (0x00057a2b) cell_fast2_pane_g2

0x7a71,	// (0x00057a34) cell_fast2_pane_g3

0x0002,

0xfc2d,	// (0x0005fbf0) cell_fast2_pane_g

0x2d25,	// (0x00052ce8) grid_highlight_pane_cp9

0x2d3a,	// (0x00052cfd) main_eswt_pane_ParamLimits

0x2d3a,	// (0x00052cfd) main_eswt_pane

0x79f2,	// (0x000579b5) list_single_text_info_pane

0x7a79,	// (0x00057a3c) eswt_ctrl_button_pane

0x7a79,	// (0x00057a3c) eswt_ctrl_canvas_pane

0x7a81,	// (0x00057a44) eswt_ctrl_combo_pane

0x7a79,	// (0x00057a3c) eswt_ctrl_default_pane

0x7a79,	// (0x00057a3c) eswt_ctrl_label_pane

0x7a89,	// (0x00057a4c) eswt_ctrl_wait_pane

0x7a91,	// (0x00057a54) eswt_shell_pane

0x2167,	// (0x0005212a) listscroll_eswt_app_pane

0x7ab1,	// (0x00057a74) popup_eswt_tasktip_window_ParamLimits

0x7ab1,	// (0x00057a74) popup_eswt_tasktip_window

0x4bdf,	// (0x00054ba2) bg_popup_window_pane_cp18

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_ParamLimits

0x7ac2,	// (0x00057a85) eswt_control_pane_g1

0x7acf,	// (0x00057a92) eswt_control_pane_g2_ParamLimits

0x7acf,	// (0x00057a92) eswt_control_pane_g2

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_ParamLimits

0x7adc,	// (0x00057a9f) eswt_control_pane_g3

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_ParamLimits

0x7ae9,	// (0x00057aac) eswt_control_pane_g4

0x0003,

0xfc34,	// (0x0005fbf7) eswt_control_pane_g_ParamLimits

0xfc34,	// (0x0005fbf7) eswt_control_pane_g

0x2fc9,	// (0x00052f8c) bg_button_pane_ParamLimits

0x2fc9,	// (0x00052f8c) bg_button_pane

0x2d3a,	// (0x00052cfd) common_borders_pane_copy2_ParamLimits

0x2d3a,	// (0x00052cfd) common_borders_pane_copy2

0x7af6,	// (0x00057ab9) control_button_pane_g1_ParamLimits

0x7af6,	// (0x00057ab9) control_button_pane_g1

0x7b02,	// (0x00057ac5) control_button_pane_g2_ParamLimits

0x7b02,	// (0x00057ac5) control_button_pane_g2

0x7b0e,	// (0x00057ad1) control_button_pane_g3_ParamLimits

0x7b0e,	// (0x00057ad1) control_button_pane_g3

0x0002,

0xfc3d,	// (0x0005fc00) control_button_pane_g_ParamLimits

0xfc3d,	// (0x0005fc00) control_button_pane_g

0x7b22,	// (0x00057ae5) control_button_pane_t1

0x7b30,	// (0x00057af3) control_button_pane_t2

0x0001,

0xfc44,	// (0x0005fc07) control_button_pane_t

0x4aed,	// (0x00054ab0) bg_button_pane_g1

0x4afd,	// (0x00054ac0) bg_button_pane_g2

0x4af5,	// (0x00054ab8) bg_button_pane_g3

0x4b0d,	// (0x00054ad0) bg_button_pane_g4

0x4b05,	// (0x00054ac8) bg_button_pane_g5

0x4b15,	// (0x00054ad8) bg_button_pane_g6

0x4b1d,	// (0x00054ae0) bg_button_pane_g7

0x4b2d,	// (0x00054af0) bg_button_pane_g8

0x4b25,	// (0x00054ae8) bg_button_pane_g9

0x0008,

0xf89f,	// (0x0005f862) bg_button_pane_g

0x70f6,	// (0x000570b9) common_borders_pane_ParamLimits

0x70f6,	// (0x000570b9) common_borders_pane

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy1_ParamLimits

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy1

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy1_ParamLimits

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy1

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy1_ParamLimits

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy1

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy1_ParamLimits

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy1

0x7131,	// (0x000570f4) bg_eswt_ctrl_canvas_pane_g1

0x70f6,	// (0x000570b9) common_borders_pane_cp2_ParamLimits

0x70f6,	// (0x000570b9) common_borders_pane_cp2

0x70f6,	// (0x000570b9) common_borders_pane_cp3_ParamLimits

0x70f6,	// (0x000570b9) common_borders_pane_cp3

0x7b3e,	// (0x00057b01) separator_horizontal_pane

0x7b46,	// (0x00057b09) separator_vertical_pane

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy2_ParamLimits

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy2

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy2_ParamLimits

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy2

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy2_ParamLimits

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy2

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy2_ParamLimits

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy2

0x2167,	// (0x0005212a) common_borders_pane_cp4

0x7b4f,	// (0x00057b12) separator_horizontal_pane_g1

0x7b58,	// (0x00057b1b) separator_horizontal_pane_g2

0x7b61,	// (0x00057b24) separator_horizontal_pane_g3

0x0002,

0xfc49,	// (0x0005fc0c) separator_horizontal_pane_g

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy3_ParamLimits

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy3

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy3_ParamLimits

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy3

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy3_ParamLimits

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy3

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy3_ParamLimits

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy3

0x2167,	// (0x0005212a) common_borders_pane_cp5

0x7b6a,	// (0x00057b2d) separator_vertical_pane_g1

0x7b73,	// (0x00057b36) separator_vertical_pane_g2

0x7b7c,	// (0x00057b3f) separator_vertical_pane_g3

0x0002,

0xfc50,	// (0x0005fc13) separator_vertical_pane_g

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy4_ParamLimits

0x7ac2,	// (0x00057a85) eswt_control_pane_g1_copy4

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy4_ParamLimits

0x7acf,	// (0x00057a92) eswt_control_pane_g2_copy4

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy4_ParamLimits

0x7adc,	// (0x00057a9f) eswt_control_pane_g3_copy4

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy4_ParamLimits

0x7ae9,	// (0x00057aac) eswt_control_pane_g4_copy4

0xdc74,	// (0x0005dc37) eswt_ctrl_combo_button_pane

0xdc7c,	// (0x0005dc3f) eswt_ctrl_input_pane

0xdc84,	// (0x0005dc47) popup_choice_list_window_cp70

0xdc8c,	// (0x0005dc4f) eswt_ctrl_input_pane_t1

0x2167,	// (0x0005212a) input_focus_pane_cp70

0x70f6,	// (0x000570b9) bg_button_pane_cp70_ParamLimits

0x70f6,	// (0x000570b9) bg_button_pane_cp70

0xdc9a,	// (0x0005dc5d) eswt_ctrl_combo_button_pane_g1

0x7bb3,	// (0x00057b76) wait_bar_pane_cp70

0x4bdf,	// (0x00054ba2) bg_popup_window_pane_cp70_ParamLimits

0x4bdf,	// (0x00054ba2) bg_popup_window_pane_cp70

0x7bbb,	// (0x00057b7e) popup_eswt_tasktip_window_t1

0x7bd1,	// (0x00057b94) wait_bar_pane_cp71_ParamLimits

0x7bd1,	// (0x00057b94) wait_bar_pane_cp71

0x7bdd,	// (0x00057ba0) grid_eswt_app_pane

0x346d,	// (0x00053430) scroll_pane_cp70

0xdca2,	// (0x0005dc65) cell_eswt_app_pane_ParamLimits

0xdca2,	// (0x0005dc65) cell_eswt_app_pane

0xdcd4,	// (0x0005dc97) cell_eswt_app_pane_g1_ParamLimits

0xdcd4,	// (0x0005dc97) cell_eswt_app_pane_g1

0xdd03,	// (0x0005dcc6) cell_eswt_app_pane_g2_ParamLimits

0xdd03,	// (0x0005dcc6) cell_eswt_app_pane_g2

0x0001,

0xfc57,	// (0x0005fc1a) cell_eswt_app_pane_g_ParamLimits

0xfc57,	// (0x0005fc1a) cell_eswt_app_pane_g

0xdd2c,	// (0x0005dcef) cell_eswt_app_pane_t1_ParamLimits

0xdd2c,	// (0x0005dcef) cell_eswt_app_pane_t1

0x7ca2,	// (0x00057c65) grid_highlight_pane_cp70_ParamLimits

0x7ca2,	// (0x00057c65) grid_highlight_pane_cp70

0x603f,	// (0x00056002) set_content_pane_g1

0x3ee3,	// (0x00053ea6) status_small_volume_pane

0x1847,	// (0x0005180a) status_small_volume_pane_g1

0x184f,	// (0x00051812) volume_small2_pane

0x1858,	// (0x0005181b) volume_small2_pane_g1

0x1861,	// (0x00051824) volume_small2_pane_g2

0x186a,	// (0x0005182d) volume_small2_pane_g3

0x1873,	// (0x00051836) volume_small2_pane_g4

0x187c,	// (0x0005183f) volume_small2_pane_g5

0x1885,	// (0x00051848) volume_small2_pane_g6

0x188e,	// (0x00051851) volume_small2_pane_g7

0x1897,	// (0x0005185a) volume_small2_pane_g8

0x18a0,	// (0x00051863) volume_small2_pane_g9

0x18a9,	// (0x0005186c) volume_small2_pane_g10

0x0009,

0xfc5c,	// (0x0005fc1f) volume_small2_pane_g

0x751d,	// (0x000574e0) fep_vkb_top_text_pane_g1_ParamLimits

0xdbfa,	// (0x0005dbbd) fep_vkb_top_text_pane_t1_ParamLimits

0x77b0,	// (0x00057773) popup_preview_fixed_window_g3_ParamLimits

0x77b0,	// (0x00057773) popup_preview_fixed_window_g3

0xcea2,	// (0x0005ce65) popup_toolbar_trans_pane

0xd5e5,	// (0x0005d5a8) aid_height_set_list_ParamLimits

0x5ef5,	// (0x00055eb8) aid_size_parent_ParamLimits

0x3fb1,	// (0x00053f74) list_highlight_pane_cp2_ParamLimits

0x603f,	// (0x00056002) set_content_pane_g1_ParamLimits

0xccb2,	// (0x0005cc75) list_single_image_pane_ParamLimits

0xccb2,	// (0x0005cc75) list_single_image_pane

0xdd5e,	// (0x0005dd21) aid_size_cell_image_ParamLimits

0xdd5e,	// (0x0005dd21) aid_size_cell_image

0xdd6b,	// (0x0005dd2e) grid_single_image_pane_ParamLimits

0xdd6b,	// (0x0005dd2e) grid_single_image_pane

0x2fe3,	// (0x00052fa6) list_single_image_pane_g1_ParamLimits

0x2fe3,	// (0x00052fa6) list_single_image_pane_g1

0x2fef,	// (0x00052fb2) list_single_image_pane_g2_ParamLimits

0x2fef,	// (0x00052fb2) list_single_image_pane_g2

0x0001,

0xfc71,	// (0x0005fc34) list_single_image_pane_g_ParamLimits

0xfc71,	// (0x0005fc34) list_single_image_pane_g

0x7cc9,	// (0x00057c8c) list_single_image_pane_t1_ParamLimits

0x7cc9,	// (0x00057c8c) list_single_image_pane_t1

0xdd79,	// (0x0005dd3c) cell_image_list_pane_ParamLimits

0xdd79,	// (0x0005dd3c) cell_image_list_pane

0xdd93,	// (0x0005dd56) cell_image_list_pane_g1

0xdd9c,	// (0x0005dd5f) cell_image_list_pane_g2

0x0001,

0xfc76,	// (0x0005fc39) cell_image_list_pane_g

0x7d07,	// (0x00057cca) aid_size_cell_tb_trans_pane

0x2fc9,	// (0x00052f8c) bg_tb_trans_pane

0x7d19,	// (0x00057cdc) grid_tb_trans_pane

0x4aed,	// (0x00054ab0) bg_tb_trans_pane_g1

0x4afd,	// (0x00054ac0) bg_tb_trans_pane_g2

0x4af5,	// (0x00054ab8) bg_tb_trans_pane_g3

0x4b0d,	// (0x00054ad0) bg_tb_trans_pane_g4

0x4b05,	// (0x00054ac8) bg_tb_trans_pane_g5

0x4b2d,	// (0x00054af0) bg_tb_trans_pane_g6

0x4b25,	// (0x00054ae8) bg_tb_trans_pane_g7

0x4b15,	// (0x00054ad8) bg_tb_trans_pane_g8

0x4b1d,	// (0x00054ae0) bg_tb_trans_pane_g9

0x0008,

0xfc7b,	// (0x0005fc3e) bg_tb_trans_pane_g

0x7d2d,	// (0x00057cf0) cell_toolbar_trans_pane_ParamLimits

0x7d2d,	// (0x00057cf0) cell_toolbar_trans_pane

0x7131,	// (0x000570f4) cell_toolbar_trans_pane_g1

0xd9ca,	// (0x0005d98d) list_form2_midp_pane_t1

0xd9d8,	// (0x0005d99b) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x0005fadb) list_form2_midp_pane_t

0x6d6e,	// (0x00056d31) scroll_pane_cp51_ParamLimits

0x6f35,	// (0x00056ef8) form2_midp_wait_pane_g1

0x6f3e,	// (0x00056f01) form2_midp_wait_pane_g2

0x6f47,	// (0x00056f0a) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x0005faf0) form2_midp_wait_pane_g

0x225b,	// (0x0005221e) list_highlight_pane_cp21_ParamLimits

0x6f8b,	// (0x00056f4e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6f9a,	// (0x00056f5d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x60ed,	// (0x000560b0) list_single_2graphic_im_pane_ParamLimits

0x60ed,	// (0x000560b0) list_single_2graphic_im_pane

0xdda5,	// (0x0005dd68) list_single_2graphic_im_pane_g1_ParamLimits

0xdda5,	// (0x0005dd68) list_single_2graphic_im_pane_g1

0xddb6,	// (0x0005dd79) list_single_2graphic_im_pane_g2_ParamLimits

0xddb6,	// (0x0005dd79) list_single_2graphic_im_pane_g2

0xddc2,	// (0x0005dd85) list_single_2graphic_im_pane_g3_ParamLimits

0xddc2,	// (0x0005dd85) list_single_2graphic_im_pane_g3

0x0003,

0xfc8e,	// (0x0005fc51) list_single_2graphic_im_pane_g_ParamLimits

0xfc8e,	// (0x0005fc51) list_single_2graphic_im_pane_g

0xddd6,	// (0x0005dd99) list_single_2graphic_im_pane_t1_ParamLimits

0xddd6,	// (0x0005dd99) list_single_2graphic_im_pane_t1

0x77bc,	// (0x0005777f) list_single_graphic_2heading_pane_fp_ParamLimits

0x77bc,	// (0x0005777f) list_single_graphic_2heading_pane_fp

0x29b2,	// (0x00052975) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x29b2,	// (0x00052975) list_single_graphic_2heading_pane_fp_g1

0x77d5,	// (0x00057798) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x77d5,	// (0x00057798) list_single_graphic_2heading_pane_fp_g2

0x2889,	// (0x0005284c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2889,	// (0x0005284c) list_single_graphic_2heading_pane_fp_g3

0x2987,	// (0x0005294a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2987,	// (0x0005294a) list_single_graphic_2heading_pane_fp_g4

0x77e1,	// (0x000577a4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x77e1,	// (0x000577a4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x0005fb78) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0005fb78) list_single_graphic_2heading_pane_fp_g

0x2b7f,	// (0x00052b42) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x2b7f,	// (0x00052b42) list_single_graphic_2heading_pane_fp_t1

0x29ea,	// (0x000529ad) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x29ea,	// (0x000529ad) list_single_graphic_2heading_pane_fp_t2

0x2b95,	// (0x00052b58) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x2b95,	// (0x00052b58) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc97,	// (0x0005fc5a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc97,	// (0x0005fc5a) list_single_graphic_2heading_pane_fp_t

0x71d1,	// (0x00057194) fep_hwr_write_pane_g5_ParamLimits

0x71d1,	// (0x00057194) fep_hwr_write_pane_g5

0x71dd,	// (0x000571a0) fep_hwr_write_pane_g6_ParamLimits

0x71dd,	// (0x000571a0) fep_hwr_write_pane_g6

0x7a91,	// (0x00057a54) eswt_shell_pane_ParamLimits

0x4bdf,	// (0x00054ba2) bg_popup_window_pane_cp18_ParamLimits

0x5e3b,	// (0x00055dfe) heading_pane_cp70

0x7bbb,	// (0x00057b7e) popup_eswt_tasktip_window_t1_ParamLimits

0xcf65,	// (0x0005cf28) aid_touch_tab_arrow_left

0xcf7b,	// (0x0005cf3e) aid_touch_tab_arrow_right

0xaff6,	// (0x0005afb9) title_pane_g3_ParamLimits

0xaff6,	// (0x0005afb9) title_pane_g3

0x2f88,	// (0x00052f4b) set_value_pane_g1

0xcea2,	// (0x0005ce65) popup_toolbar_trans_pane_ParamLimits

0x7d07,	// (0x00057cca) aid_size_cell_tb_trans_pane_ParamLimits

0x2fc9,	// (0x00052f8c) bg_tb_trans_pane_ParamLimits

0x7d19,	// (0x00057cdc) grid_tb_trans_pane_ParamLimits

0x24e5,	// (0x000524a8) cont_note_pane_ParamLimits

0x24e5,	// (0x000524a8) cont_note_pane

0x2d3a,	// (0x00052cfd) cont_snote2_single_text_pane_ParamLimits

0x2d3a,	// (0x00052cfd) cont_snote2_single_text_pane

0x2d3a,	// (0x00052cfd) cont_snote2_single_graphic_pane_ParamLimits

0x2d3a,	// (0x00052cfd) cont_snote2_single_graphic_pane

0x5162,	// (0x00055125) cont_note_wait_pane_ParamLimits

0x5162,	// (0x00055125) cont_note_wait_pane

0x5162,	// (0x00055125) cont_note_image_pane_ParamLimits

0x5162,	// (0x00055125) cont_note_image_pane

0x7dc1,	// (0x00057d84) popup_note2_window_g1_ParamLimits

0x7dc1,	// (0x00057d84) popup_note2_window_g1

0x7df2,	// (0x00057db5) popup_note2_window_t1_ParamLimits

0x7df2,	// (0x00057db5) popup_note2_window_t1

0x7e37,	// (0x00057dfa) popup_note2_window_t2_ParamLimits

0x7e37,	// (0x00057dfa) popup_note2_window_t2

0x7e7c,	// (0x00057e3f) popup_note2_window_t3_ParamLimits

0x7e7c,	// (0x00057e3f) popup_note2_window_t3

0x7ec1,	// (0x00057e84) popup_note2_window_t4_ParamLimits

0x7ec1,	// (0x00057e84) popup_note2_window_t4

0x2569,	// (0x0005252c) popup_note2_window_t5_ParamLimits

0x2569,	// (0x0005252c) popup_note2_window_t5

0x0004,

0xfca3,	// (0x0005fc66) popup_note2_window_t_ParamLimits

0xfca3,	// (0x0005fc66) popup_note2_window_t

0x7ef0,	// (0x00057eb3) popup_note2_image_window_g1_ParamLimits

0x7ef0,	// (0x00057eb3) popup_note2_image_window_g1

0x7efc,	// (0x00057ebf) popup_note2_image_window_g2_ParamLimits

0x7efc,	// (0x00057ebf) popup_note2_image_window_g2

0x0001,

0xfcae,	// (0x0005fc71) popup_note2_image_window_g_ParamLimits

0xfcae,	// (0x0005fc71) popup_note2_image_window_g

0x7f0e,	// (0x00057ed1) popup_note2_image_window_t1_ParamLimits

0x7f0e,	// (0x00057ed1) popup_note2_image_window_t1

0x7f26,	// (0x00057ee9) popup_note2_image_window_t2_ParamLimits

0x7f26,	// (0x00057ee9) popup_note2_image_window_t2

0x7f3e,	// (0x00057f01) popup_note2_image_window_t3_ParamLimits

0x7f3e,	// (0x00057f01) popup_note2_image_window_t3

0x0002,

0xfcb3,	// (0x0005fc76) popup_note2_image_window_t_ParamLimits

0xfcb3,	// (0x0005fc76) popup_note2_image_window_t

0x5170,	// (0x00055133) popup_note2_wait_window_g1_ParamLimits

0x5170,	// (0x00055133) popup_note2_wait_window_g1

0x7f5a,	// (0x00057f1d) popup_note2_wait_window_g2_ParamLimits

0x7f5a,	// (0x00057f1d) popup_note2_wait_window_g2

0x5188,	// (0x0005514b) popup_note2_wait_window_g3_ParamLimits

0x5188,	// (0x0005514b) popup_note2_wait_window_g3

0x0002,

0xfcba,	// (0x0005fc7d) popup_note2_wait_window_g_ParamLimits

0xfcba,	// (0x0005fc7d) popup_note2_wait_window_g

0x7f66,	// (0x00057f29) popup_note2_wait_window_t1_ParamLimits

0x7f66,	// (0x00057f29) popup_note2_wait_window_t1

0x7f84,	// (0x00057f47) popup_note2_wait_window_t2_ParamLimits

0x7f84,	// (0x00057f47) popup_note2_wait_window_t2

0x7fa2,	// (0x00057f65) popup_note2_wait_window_t3_ParamLimits

0x7fa2,	// (0x00057f65) popup_note2_wait_window_t3

0x7fb4,	// (0x00057f77) popup_note2_wait_window_t4_ParamLimits

0x7fb4,	// (0x00057f77) popup_note2_wait_window_t4

0x0003,

0xfcc1,	// (0x0005fc84) popup_note2_wait_window_t_ParamLimits

0xfcc1,	// (0x0005fc84) popup_note2_wait_window_t

0x7fc6,	// (0x00057f89) wait_bar2_pane_ParamLimits

0x7fc6,	// (0x00057f89) wait_bar2_pane

0x7fde,	// (0x00057fa1) popup_snote2_single_text_window_g1_ParamLimits

0x7fde,	// (0x00057fa1) popup_snote2_single_text_window_g1

0x8006,	// (0x00057fc9) popup_snote2_single_text_window_t1_ParamLimits

0x8006,	// (0x00057fc9) popup_snote2_single_text_window_t1

0x8052,	// (0x00058015) popup_snote2_single_text_window_t2_ParamLimits

0x8052,	// (0x00058015) popup_snote2_single_text_window_t2

0x809e,	// (0x00058061) popup_snote2_single_text_window_t3_ParamLimits

0x809e,	// (0x00058061) popup_snote2_single_text_window_t3

0x80df,	// (0x000580a2) popup_snote2_single_text_window_t4_ParamLimits

0x80df,	// (0x000580a2) popup_snote2_single_text_window_t4

0x8115,	// (0x000580d8) popup_snote2_single_text_window_t5_ParamLimits

0x8115,	// (0x000580d8) popup_snote2_single_text_window_t5

0x0004,

0xfcca,	// (0x0005fc8d) popup_snote2_single_text_window_t_ParamLimits

0xfcca,	// (0x0005fc8d) popup_snote2_single_text_window_t

0x8140,	// (0x00058103) popup_snote2_single_graphic_window_g1_ParamLimits

0x8140,	// (0x00058103) popup_snote2_single_graphic_window_g1

0x8168,	// (0x0005812b) popup_snote2_single_graphic_window_g2_ParamLimits

0x8168,	// (0x0005812b) popup_snote2_single_graphic_window_g2

0x0001,

0xfcd5,	// (0x0005fc98) popup_snote2_single_graphic_window_g_ParamLimits

0xfcd5,	// (0x0005fc98) popup_snote2_single_graphic_window_g

0x8190,	// (0x00058153) popup_snote2_single_graphic_window_t1_ParamLimits

0x8190,	// (0x00058153) popup_snote2_single_graphic_window_t1

0x81dc,	// (0x0005819f) popup_snote2_single_graphic_window_t2_ParamLimits

0x81dc,	// (0x0005819f) popup_snote2_single_graphic_window_t2

0x809e,	// (0x00058061) popup_snote2_single_graphic_window_t3_ParamLimits

0x809e,	// (0x00058061) popup_snote2_single_graphic_window_t3

0x80df,	// (0x000580a2) popup_snote2_single_graphic_window_t4_ParamLimits

0x80df,	// (0x000580a2) popup_snote2_single_graphic_window_t4

0x8115,	// (0x000580d8) popup_snote2_single_graphic_window_t5_ParamLimits

0x8115,	// (0x000580d8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcda,	// (0x0005fc9d) popup_snote2_single_graphic_window_t_ParamLimits

0xfcda,	// (0x0005fc9d) popup_snote2_single_graphic_window_t

0x6c18,	// (0x00056bdb) clock_nsta_pane_cp2_t1

0x6c18,	// (0x00056bdb) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x0005fab1) clock_nsta_pane_cp2_t

0x0521,	// (0x000504e4) form_field_data_wide_pane_g1_ParamLimits

0x2fe3,	// (0x00052fa6) form_field_data_wide_pane_g2_ParamLimits

0x2fe3,	// (0x00052fa6) form_field_data_wide_pane_g2

0x2fef,	// (0x00052fb2) form_field_data_wide_pane_g3_ParamLimits

0x2fef,	// (0x00052fb2) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x0005f687) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x0005f687) form_field_data_wide_pane_g

0xd8d2,	// (0x0005d895) grid_touch_3_pane_ParamLimits

0xd8d2,	// (0x0005d895) grid_touch_3_pane

0xde07,	// (0x0005ddca) cell_touch_3_pane_ParamLimits

0xde07,	// (0x0005ddca) cell_touch_3_pane

0x7131,	// (0x000570f4) cell_touch_3_pane_g1

0x7131,	// (0x000570f4) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x0005fb36) cell_touch_3_pane_g

0x259b,	// (0x0005255e) cont_query_data_pane

0x25a3,	// (0x00052566) cont_query_data_pane_cp1

0x825b,	// (0x0005821e) button_value_adjust_pane_cp7

0x8263,	// (0x00058226) query_popup_pane_cp3

0x3703,	// (0x000536c6) bg_popup_sub_pane_cp22_ParamLimits

0x08c5,	// (0x00050888) navi_navi_volume_pane_cp2

0x08e0,	// (0x000508a3) popup_side_volume_key_window_g2

0x08ef,	// (0x000508b2) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x0005f719) popup_side_volume_key_window_g

0x090c,	// (0x000508cf) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x0005f720) popup_side_volume_key_window_t

0x39ca,	// (0x0005398d) popup_side_volume_key_window_ParamLimits

0xb31d,	// (0x0005b2e0) list_double_graphic_pane_g4_ParamLimits

0xb31d,	// (0x0005b2e0) list_double_graphic_pane_g4

0xcc9d,	// (0x0005cc60) list_single_2heading_msg_pane_ParamLimits

0xcc9d,	// (0x0005cc60) list_single_2heading_msg_pane

0xccc3,	// (0x0005cc86) list_single_2heading_msg_pane_g1_ParamLimits

0xccc3,	// (0x0005cc86) list_single_2heading_msg_pane_g1

0xcccf,	// (0x0005cc92) list_single_2heading_msg_pane_g2_ParamLimits

0xcccf,	// (0x0005cc92) list_single_2heading_msg_pane_g2

0xcce2,	// (0x0005cca5) list_single_2heading_msg_pane_g3_ParamLimits

0xcce2,	// (0x0005cca5) list_single_2heading_msg_pane_g3

0xccee,	// (0x0005ccb1) list_single_2heading_msg_pane_g4_ParamLimits

0xccee,	// (0x0005ccb1) list_single_2heading_msg_pane_g4

0x0003,

0xfce5,	// (0x0005fca8) list_single_2heading_msg_pane_g_ParamLimits

0xfce5,	// (0x0005fca8) list_single_2heading_msg_pane_g

0xbc0b,	// (0x0005bbce) list_single_2heading_msg_pane_t1_ParamLimits

0xbc0b,	// (0x0005bbce) list_single_2heading_msg_pane_t1

0xbc33,	// (0x0005bbf6) list_single_2heading_msg_pane_t2_ParamLimits

0xbc33,	// (0x0005bbf6) list_single_2heading_msg_pane_t2

0xbc9e,	// (0x0005bc61) list_single_2heading_msg_pane_t3_ParamLimits

0xbc9e,	// (0x0005bc61) list_single_2heading_msg_pane_t3

0x2c75,	// (0x00052c38) list_single_2heading_msg_pane_t4_ParamLimits

0x2c75,	// (0x00052c38) list_single_2heading_msg_pane_t4

0x0003,

0xfcee,	// (0x0005fcb1) list_single_2heading_msg_pane_t_ParamLimits

0xfcee,	// (0x0005fcb1) list_single_2heading_msg_pane_t

0x21af,	// (0x00052172) title_pane_g4_ParamLimits

0x21af,	// (0x00052172) title_pane_g4

0x06d1,	// (0x00050694) title_pane_stacon_g3_ParamLimits

0x06d1,	// (0x00050694) title_pane_stacon_g3

0x7d84,	// (0x00057d47) list_single_2graphic_im_pane_g4_ParamLimits

0x7d84,	// (0x00057d47) list_single_2graphic_im_pane_g4

0x5bd8,	// (0x00055b9b) popup_side_volume_key_window_cp

0x644e,	// (0x00056411) main_idle_act2_pane_t1

0x0d42,	// (0x00050d05) toolbar_button_pane_g10

0xc30e,	// (0x0005c2d1) popup_toolbar_window_cp1

0x6c09,	// (0x00056bcc) clock_nsta_pane_cp_t1

0x6c09,	// (0x00056bcc) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x0005faac) clock_nsta_pane_cp_t

0x08c5,	// (0x00050888) navi_navi_volume_pane_cp2_ParamLimits

0x08d4,	// (0x00050897) popup_side_volume_key_window_g1_ParamLimits

0x08e0,	// (0x000508a3) popup_side_volume_key_window_g2_ParamLimits

0x08ef,	// (0x000508b2) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x0005f719) popup_side_volume_key_window_g_ParamLimits

0x1498,	// (0x0005145b) fep_hwr_aid_pane

0x1541,	// (0x00051504) bg_fep_hwr_top_pane_g4_ParamLimits

0x71a1,	// (0x00057164) fep_hwr_top_pane_g1_ParamLimits

0x71b3,	// (0x00057176) fep_hwr_top_pane_g2_ParamLimits

0x1561,	// (0x00051524) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x0005fb01) fep_hwr_top_pane_g_ParamLimits

0x1576,	// (0x00051539) fep_hwr_top_text_pane_ParamLimits

0x598d,	// (0x00055950) aid_touch_tab_arrow_arrow_2

0x5996,	// (0x00055959) aid_touch_tab_arrow_left_2

0x14ac,	// (0x0005146f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x14e3,	// (0x000514a6) fep_hwr_prediction_pane

0x7309,	// (0x000572cc) fep_vkb_prediction_pane

0xdbda,	// (0x0005db9d) fep_vkb_side_pane_g3_ParamLimits

0xdbda,	// (0x0005db9d) fep_vkb_side_pane_g3

0x1705,	// (0x000516c8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1776,	// (0x00051739) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1783,	// (0x00051746) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbed,	// (0x0005fbb0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x18b2,	// (0x00051875) fep_hwr_prediction_pane_g1

0x18bc,	// (0x0005187f) fep_hwr_prediction_pane_g2

0x18c4,	// (0x00051887) fep_hwr_prediction_pane_g3

0x18cc,	// (0x0005188f) fep_hwr_prediction_pane_g4

0x0003,

0xfcf7,	// (0x0005fcba) fep_hwr_prediction_pane_g

0x828a,	// (0x0005824d) fep_vkb_prediction_pane_g1

0x8294,	// (0x00058257) fep_vkb_prediction_pane_g2

0x829c,	// (0x0005825f) fep_vkb_prediction_pane_g3

0x82a4,	// (0x00058267) fep_vkb_prediction_pane_g4

0x0003,

0xfd00,	// (0x0005fcc3) fep_vkb_prediction_pane_g

0x10cb,	// (0x0005108e) slider_set_pane_g3

0x10df,	// (0x000510a2) slider_set_pane_g4

0x10f7,	// (0x000510ba) slider_set_pane_g5

0x10cb,	// (0x0005108e) slider_set_pane_g6

0x110d,	// (0x000510d0) slider_set_pane_g7

0x6086,	// (0x00056049) slider_form_pane_g3

0x608f,	// (0x00056052) slider_form_pane_g4

0x6097,	// (0x0005605a) slider_form_pane_g5

0x6086,	// (0x00056049) slider_form_pane_g6

0xd754,	// (0x0005d717) slider_form_pane_g7

0x671c,	// (0x000566df) slider_set_pane_vc_g3

0x6725,	// (0x000566e8) slider_set_pane_vc_g4

0x672e,	// (0x000566f1) slider_set_pane_vc_g5

0x671c,	// (0x000566df) slider_set_pane_vc_g6

0x6737,	// (0x000566fa) slider_set_pane_vc_g7

0x671c,	// (0x000566df) slider_form_pane_vc_g1

0x6725,	// (0x000566e8) slider_form_pane_vc_g2

0x672e,	// (0x000566f1) slider_form_pane_vc_g3

0x671c,	// (0x000566df) slider_form_pane_vc_g4

0x692e,	// (0x000568f1) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x0005fa92) slider_form_pane_vc_g

0x2167,	// (0x0005212a) main_idle_act3_pane

0x82ac,	// (0x0005826f) ai3_links_pane

0xde51,	// (0x0005de14) popup_ai3_data_window_ParamLimits

0xde51,	// (0x0005de14) popup_ai3_data_window

0x2167,	// (0x0005212a) grid_ai3_links_pane

0xde6f,	// (0x0005de32) cell_ai3_links_pane_ParamLimits

0xde6f,	// (0x0005de32) cell_ai3_links_pane

0x82ed,	// (0x000582b0) bg_popup_sub_pane_cp11

0x82fa,	// (0x000582bd) cell_ai3_links_pane_g1

0x2167,	// (0x0005212a) bg_popup_sub_pane_cp12

0x831f,	// (0x000582e2) heading_ai3_data_pane

0x8327,	// (0x000582ea) list_ai3_gene_pane

0x8333,	// (0x000582f6) popup_ai3_data_window_g1

0x833b,	// (0x000582fe) heading_ai3_data_pane_g1

0x8343,	// (0x00058306) heading_ai3_data_pane_t1

0x8351,	// (0x00058314) list_double_ai3_gene_pane_ParamLimits

0x8351,	// (0x00058314) list_double_ai3_gene_pane

0x835e,	// (0x00058321) list_single_ai3_gene_pane_ParamLimits

0x835e,	// (0x00058321) list_single_ai3_gene_pane

0x70f6,	// (0x000570b9) list_highlight_pane_cp7_ParamLimits

0x70f6,	// (0x000570b9) list_highlight_pane_cp7

0x836b,	// (0x0005832e) list_single_a13_gene_pane_t1_ParamLimits

0x836b,	// (0x0005832e) list_single_a13_gene_pane_t1

0x8382,	// (0x00058345) list_single_ai3_gene_pane_g1

0x838b,	// (0x0005834e) list_single_ai3_gene_pane_g2

0x0001,

0xfd09,	// (0x0005fccc) list_single_ai3_gene_pane_g

0x8393,	// (0x00058356) list_double_ai3_gene_pane_g1_ParamLimits

0x8393,	// (0x00058356) list_double_ai3_gene_pane_g1

0x839f,	// (0x00058362) list_double_ai3_gene_pane_t1_ParamLimits

0x839f,	// (0x00058362) list_double_ai3_gene_pane_t1

0x83bb,	// (0x0005837e) list_double_ai3_gene_pane_t2_ParamLimits

0x83bb,	// (0x0005837e) list_double_ai3_gene_pane_t2

0x83d0,	// (0x00058393) list_double_ai3_gene_pane_t3_ParamLimits

0x83d0,	// (0x00058393) list_double_ai3_gene_pane_t3

0x0002,

0xfd0e,	// (0x0005fcd1) list_double_ai3_gene_pane_t_ParamLimits

0xfd0e,	// (0x0005fcd1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2bab,	// (0x00052b6e) aid_size_min_col_2

0xde3b,	// (0x0005ddfe) aid_size_min_msg_ParamLimits

0xde3b,	// (0x0005ddfe) aid_size_min_msg

0xdbee,	// (0x0005dbb1) fep_vkb_top_text_pane_g2_ParamLimits

0xdbee,	// (0x0005dbb1) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x0005fb31) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x0005fb31) fep_vkb_top_text_pane_g

0x2167,	// (0x0005212a) main_hc_apps_shell_pane

0x83ed,	// (0x000583b0) grid_hc_apps_pane_ParamLimits

0x83ed,	// (0x000583b0) grid_hc_apps_pane

0x83fc,	// (0x000583bf) list_hc_apps_pane

0x8404,	// (0x000583c7) scroll_pane_cp37_ParamLimits

0x8404,	// (0x000583c7) scroll_pane_cp37

0xde89,	// (0x0005de4c) cell_hc_apps_pane_ParamLimits

0xde89,	// (0x0005de4c) cell_hc_apps_pane

0xdf53,	// (0x0005df16) cell_hc_apps_pane_g1_ParamLimits

0xdf53,	// (0x0005df16) cell_hc_apps_pane_g1

0x84f9,	// (0x000584bc) cell_hc_apps_pane_g2_ParamLimits

0x84f9,	// (0x000584bc) cell_hc_apps_pane_g2

0x8515,	// (0x000584d8) cell_hc_apps_pane_g3_ParamLimits

0x8515,	// (0x000584d8) cell_hc_apps_pane_g3

0x0002,

0xfd15,	// (0x0005fcd8) cell_hc_apps_pane_g_ParamLimits

0xfd15,	// (0x0005fcd8) cell_hc_apps_pane_g

0xdf80,	// (0x0005df43) cell_hc_apps_pane_t1_ParamLimits

0xdf80,	// (0x0005df43) cell_hc_apps_pane_t1

0x24e5,	// (0x000524a8) grid_highlight_pane_cp10_ParamLimits

0x24e5,	// (0x000524a8) grid_highlight_pane_cp10

0xdfc0,	// (0x0005df83) list_single_hc_apps_pane_ParamLimits

0xdfc0,	// (0x0005df83) list_single_hc_apps_pane

0xdffa,	// (0x0005dfbd) list_single_hc_apps_pane_g1

0xcd06,	// (0x0005ccc9) list_single_hc_apps_pane_g2

0x0001,

0xfd1c,	// (0x0005fcdf) list_single_hc_apps_pane_g

0xcd1f,	// (0x0005cce2) list_single_hc_apps_pane_g2_copy1

0xbd0c,	// (0x0005bccf) list_single_hc_apps_pane_t1

0x225b,	// (0x0005221e) bg_set_opt_pane_cp_ParamLimits

0xf50c,	// (0x0005f4cf) setting_slider_pane_t1_ParamLimits

0xf522,	// (0x0005f4e5) setting_slider_pane_t2_ParamLimits

0xf53c,	// (0x0005f4ff) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0005f565) setting_slider_pane_t_ParamLimits

0xf554,	// (0x0005f517) slider_set_pane_ParamLimits

0x0be4,	// (0x00050ba7) control_pane_g5_ParamLimits

0x0be4,	// (0x00050ba7) control_pane_g5

0x5ea7,	// (0x00055e6a) slider_set_pane_g1_ParamLimits

0x10bf,	// (0x00051082) slider_set_pane_g2_ParamLimits

0x10cb,	// (0x0005108e) slider_set_pane_g3_ParamLimits

0x10df,	// (0x000510a2) slider_set_pane_g4_ParamLimits

0x10f7,	// (0x000510ba) slider_set_pane_g5_ParamLimits

0x10cb,	// (0x0005108e) slider_set_pane_g6_ParamLimits

0x110d,	// (0x000510d0) slider_set_pane_g7_ParamLimits

0xf99d,	// (0x0005f960) slider_set_pane_g_ParamLimits

0x3aaf,	// (0x00053a72) navi_icon_text_pane_ParamLimits

0xcf2f,	// (0x0005cef2) aid_fill_nsta_2_ParamLimits

0xcf65,	// (0x0005cf28) aid_touch_tab_arrow_left_ParamLimits

0xcf7b,	// (0x0005cf3e) aid_touch_tab_arrow_right_ParamLimits

0xd016,	// (0x0005cfd9) clock_nsta_pane_ParamLimits

0xd4a3,	// (0x0005d466) navi_icon_pane_g1_ParamLimits

0xd4af,	// (0x0005d472) navi_text_pane_t1_ParamLimits

0xd9ac,	// (0x0005d96f) navi_icon_text_pane_g1_ParamLimits

0xd9b8,	// (0x0005d97b) navi_icon_text_pane_t1_ParamLimits

0xdffa,	// (0x0005dfbd) list_single_hc_apps_pane_g1_ParamLimits

0xcd06,	// (0x0005ccc9) list_single_hc_apps_pane_g2_ParamLimits

0xfd1c,	// (0x0005fcdf) list_single_hc_apps_pane_g_ParamLimits

0xcd1f,	// (0x0005cce2) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbd0c,	// (0x0005bccf) list_single_hc_apps_pane_t1_ParamLimits

0xaf62,	// (0x0005af25) popup_toolbar2_fixed_window_ParamLimits

0xaf62,	// (0x0005af25) popup_toolbar2_fixed_window

0xce98,	// (0x0005ce5b) popup_toolbar2_float_window

0x2167,	// (0x0005212a) bg_popup_sub_pane_cp27

0x85cf,	// (0x00058592) grid_toolbar2_float_pane

0x2167,	// (0x0005212a) bg_popup_sub_pane_cp26

0x85cf,	// (0x00058592) grid_toolbar2_fixed_pane

0xe013,	// (0x0005dfd6) cell_toolbar2_fixed_pane_ParamLimits

0xe013,	// (0x0005dfd6) cell_toolbar2_fixed_pane

0xe030,	// (0x0005dff3) cell_toolbar2_fixed_pane_g1

0x85f0,	// (0x000585b3) toolbar2_fixed_button_pane

0x4aed,	// (0x00054ab0) toolbar2_fixed_button_pane_g1

0x4afd,	// (0x00054ac0) toolbar2_fixed_button_pane_g2

0x4af5,	// (0x00054ab8) toolbar2_fixed_button_pane_g3

0x4b0d,	// (0x00054ad0) toolbar2_fixed_button_pane_g4

0x4b05,	// (0x00054ac8) toolbar2_fixed_button_pane_g5

0x4b15,	// (0x00054ad8) toolbar2_fixed_button_pane_g6

0x4b1d,	// (0x00054ae0) toolbar2_fixed_button_pane_g7

0x4b2d,	// (0x00054af0) toolbar2_fixed_button_pane_g8

0x4b25,	// (0x00054ae8) toolbar2_fixed_button_pane_g9

0x0008,

0xf89f,	// (0x0005f862) toolbar2_fixed_button_pane_g

0x85f8,	// (0x000585bb) cell_toolbar2_float_pane_ParamLimits

0x85f8,	// (0x000585bb) cell_toolbar2_float_pane

0x8609,	// (0x000585cc) cell_toolbar2_float_pane_g1

0x85f0,	// (0x000585b3) toolbar2_fixed_button_pane_cp

0xdad6,	// (0x0005da99) fep_vkb_accented_list_pane_ParamLimits

0xdad6,	// (0x0005da99) fep_vkb_accented_list_pane

0x16e5,	// (0x000516a8) bg_popup_fep_shadow_pane_g9

0x3c33,	// (0x00053bf6) bg_popup_fep_shadow_pane_cp3

0x3132,	// (0x000530f5) list_accented_list_pane

0x8612,	// (0x000585d5) list_single_accented_list_pane_ParamLimits

0x8612,	// (0x000585d5) list_single_accented_list_pane

0x3c33,	// (0x00053bf6) list_highlight_pane_cp10

0x8623,	// (0x000585e6) list_single_accented_list_pane_t1

0xcdb4,	// (0x0005cd77) popup_slider_window_ParamLimits

0xcdb4,	// (0x0005cd77) popup_slider_window

0x826b,	// (0x0005822e) aid_indentation_list_msg

0xe13b,	// (0x0005e0fe) bg_popup_window_pane_cp19

0x875d,	// (0x00058720) popup_slider_window_g1

0x8779,	// (0x0005873c) popup_slider_window_g2

0x8795,	// (0x00058758) popup_slider_window_g3

0x0005,

0xfd21,	// (0x0005fce4) popup_slider_window_g

0x87f1,	// (0x000587b4) popup_slider_window_t1

0x8865,	// (0x00058828) small_volume_slider_vertical_pane

0x7131,	// (0x000570f4) small_volume_slider_vertical_pane_g1

0x7131,	// (0x000570f4) small_volume_slider_vertical_pane_g2

0x8881,	// (0x00058844) small_volume_slider_vertical_pane_g3

0x0002,

0xfd33,	// (0x0005fcf6) small_volume_slider_vertical_pane_g

0xaecc,	// (0x0005ae8f) area_side_right_pane_ParamLimits

0xaecc,	// (0x0005ae8f) area_side_right_pane

0xbd3a,	// (0x0005bcfd) aid_size_side_button_ParamLimits

0xbd3a,	// (0x0005bcfd) aid_size_side_button

0xbd53,	// (0x0005bd16) grid_sctrl_middle_pane_ParamLimits

0xbd53,	// (0x0005bd16) grid_sctrl_middle_pane

0x1908,	// (0x000518cb) sctrl_sk_bottom_pane

0x1919,	// (0x000518dc) sctrl_sk_top_pane

0x192b,	// (0x000518ee) aid_touch_sctrl_top

0x1938,	// (0x000518fb) bg_sctrl_sk_pane_ParamLimits

0x1938,	// (0x000518fb) bg_sctrl_sk_pane

0x1946,	// (0x00051909) sctrl_sk_top_pane_g1

0x1953,	// (0x00051916) sctrl_sk_top_pane_t1

0x192b,	// (0x000518ee) aid_touch_sctrl_bottom

0x1938,	// (0x000518fb) bg_sctrl_sk_pane_cp_ParamLimits

0x1938,	// (0x000518fb) bg_sctrl_sk_pane_cp

0x196e,	// (0x00051931) sctrl_sk_bottom_pane_g1

0x1953,	// (0x00051916) sctrl_sk_bottom_pane_t1

0xbd6d,	// (0x0005bd30) cell_sctrl_middle_pane_ParamLimits

0xbd6d,	// (0x0005bd30) cell_sctrl_middle_pane

0xbd80,	// (0x0005bd43) aid_touch_sctrl_middle_ParamLimits

0xbd80,	// (0x0005bd43) aid_touch_sctrl_middle

0xbd8d,	// (0x0005bd50) bg_sctrl_middle_pane_ParamLimits

0xbd8d,	// (0x0005bd50) bg_sctrl_middle_pane

0x1fe8,	// (0x00051fab) cell_sctrl_middle_pane_g1_ParamLimits

0x1fe8,	// (0x00051fab) cell_sctrl_middle_pane_g1

0xbd9b,	// (0x0005bd5e) cell_sctrl_middle_pane_g2_ParamLimits

0xbd9b,	// (0x0005bd5e) cell_sctrl_middle_pane_g2

0x0001,

0xfd3f,	// (0x0005fd02) cell_sctrl_middle_pane_g_ParamLimits

0xfd3f,	// (0x0005fd02) cell_sctrl_middle_pane_g

0x4aed,	// (0x00054ab0) bg_sctrl_middle_pane_g1

0x4af5,	// (0x00054ab8) bg_sctrl_middle_pane_g2

0x4afd,	// (0x00054ac0) bg_sctrl_middle_pane_g3

0x4b05,	// (0x00054ac8) bg_sctrl_middle_pane_g4

0x4b0d,	// (0x00054ad0) bg_sctrl_middle_pane_g5

0x4b15,	// (0x00054ad8) bg_sctrl_middle_pane_g6

0x4b1d,	// (0x00054ae0) bg_sctrl_middle_pane_g7

0x4b25,	// (0x00054ae8) bg_sctrl_middle_pane_g8

0x0007,

0xfd44,	// (0x0005fd07) bg_sctrl_middle_pane_g

0x4b2d,	// (0x00054af0) bg_sctrl_middle_pane_g8_copy1

0x4aed,	// (0x00054ab0) bg_sctrl_sk_pane_g1

0x4afd,	// (0x00054ac0) bg_sctrl_sk_pane_g2

0x4af5,	// (0x00054ab8) bg_sctrl_sk_pane_g3

0x0008,

0xf89f,	// (0x0005f862) bg_sctrl_sk_pane_g

0x2ef8,	// (0x00052ebb) aid_size_touch_scroll_bar

0x4b0d,	// (0x00054ad0) bg_sctrl_sk_pane_g4

0x4b05,	// (0x00054ac8) bg_sctrl_sk_pane_g5

0x4b15,	// (0x00054ad8) bg_sctrl_sk_pane_g6

0x4b1d,	// (0x00054ae0) bg_sctrl_sk_pane_g7

0x4b2d,	// (0x00054af0) bg_sctrl_sk_pane_g8

0x4b25,	// (0x00054ae8) bg_sctrl_sk_pane_g9

0x405b,	// (0x0005401e) popup_fep_china_hwr2_fs_candidate_window

0xc7d2,	// (0x0005c795) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc7d2,	// (0x0005c795) popup_fep_china_hwr2_fs_control_window

0x1705,	// (0x000516c8) sctrl_sk_top_pane_g2

0x0001,

0xfd3a,	// (0x0005fcfd) sctrl_sk_top_pane_g

0xe1f3,	// (0x0005e1b6) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1f3,	// (0x0005e1b6) aid_fep_china_hwr2_fs_cell

0xe209,	// (0x0005e1cc) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe209,	// (0x0005e1cc) bg_popup_fep_shadow_pane_cp4

0xe220,	// (0x0005e1e3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe220,	// (0x0005e1e3) bg_popup_fep_shadow_pane_cp5

0xe232,	// (0x0005e1f5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe232,	// (0x0005e1f5) popup_fep_china_hwr2_fs_control_bar_grid

0xe246,	// (0x0005e209) popup_fep_china_hwr2_fs_control_funtion_grid

0x88e0,	// (0x000588a3) aid_fep_china_hwr2_fs_candi_cell

0x2167,	// (0x0005212a) bg_popup_fep_shadow_pane_cp6

0x88ea,	// (0x000588ad) popup_fep_china_hwr2_fs_candidate_grid

0xe24e,	// (0x0005e211) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe24e,	// (0x0005e211) cell_fep_china_hwr2_fs_funtion_grid

0x7131,	// (0x000570f4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x890c,	// (0x000588cf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x890c,	// (0x000588cf) cell_fep_china_hwr2_fs_funtion_grid_g1

0x891a,	// (0x000588dd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x891a,	// (0x000588dd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd55,	// (0x0005fd18) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd55,	// (0x0005fd18) cell_fep_china_hwr2_fs_funtion_grid_g

0xe266,	// (0x0005e229) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe266,	// (0x0005e229) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe27b,	// (0x0005e23e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe27b,	// (0x0005e23e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd5a,	// (0x0005fd1d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd5a,	// (0x0005fd1d) cell_fep_china_hwr2_fs_funtion_grid_t

0x8961,	// (0x00058924) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8969,	// (0x0005892c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8971,	// (0x00058934) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd5f,	// (0x0005fd22) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8979,	// (0x0005893c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8979,	// (0x0005893c) cell_fep_china_hwr2_fs_candidate_grid

0x8998,	// (0x0005895b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x89a0,	// (0x00058963) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7131,	// (0x000570f4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7131,	// (0x000570f4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x0005fb36) cell_fep_china_hwr2_fs_candidate_grid_g

0x89a8,	// (0x0005896b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x46ca,	// (0x0005468d) clock_nsta_pane_cp_24_ParamLimits

0x46ca,	// (0x0005468d) clock_nsta_pane_cp_24

0x474a,	// (0x0005470d) indicator_nsta_pane_cp_24_ParamLimits

0x474a,	// (0x0005470d) indicator_nsta_pane_cp_24

0x57e5,	// (0x000557a8) heading_pane_g1

0x0001,

0xf904,	// (0x0005f8c7) heading_pane_g

0x6295,	// (0x00056258) grid_sct_catagory_button_pane

0x62c7,	// (0x0005628a) scroll_pane_cp5_ParamLimits

0x6d7a,	// (0x00056d3d) button_value_adjust_pane_cp5_ParamLimits

0x6d7a,	// (0x00056d3d) button_value_adjust_pane_cp5

0x6e5f,	// (0x00056e22) form2_midp_time_pane_ParamLimits

0x89b6,	// (0x00058979) cell_sct_catagory_button_pane_ParamLimits

0x89b6,	// (0x00058979) cell_sct_catagory_button_pane

0x70f6,	// (0x000570b9) bg_button_pane_cp01_ParamLimits

0x70f6,	// (0x000570b9) bg_button_pane_cp01

0x7131,	// (0x000570f4) cell_sct_catagory_button_pane_g1

0xce35,	// (0x0005cdf8) popup_tb_extension_window

0xe297,	// (0x0005e25a) aid_size_cell_ext_ParamLimits

0xe297,	// (0x0005e25a) aid_size_cell_ext

0x2d3a,	// (0x00052cfd) bg_tb_trans_pane_cp1_ParamLimits

0x2d3a,	// (0x00052cfd) bg_tb_trans_pane_cp1

0xe2bd,	// (0x0005e280) grid_tb_ext_pane_ParamLimits

0xe2bd,	// (0x0005e280) grid_tb_ext_pane

0xe2fd,	// (0x0005e2c0) cell_tb_ext_pane_ParamLimits

0xe2fd,	// (0x0005e2c0) cell_tb_ext_pane

0xe327,	// (0x0005e2ea) cell_tb_ext_pane_g1_ParamLimits

0xe327,	// (0x0005e2ea) cell_tb_ext_pane_g1

0x8a4c,	// (0x00058a0f) cell_tb_ext_pane_t1

0x24e5,	// (0x000524a8) list_highlight_pane_cp11_ParamLimits

0x24e5,	// (0x000524a8) list_highlight_pane_cp11

0xf495,	// (0x0005f458) popup_uni_indicator_window_ParamLimits

0xf495,	// (0x0005f458) popup_uni_indicator_window

0x2fc9,	// (0x00052f8c) bg_popup_sub_pane_cp14

0x8a67,	// (0x00058a2a) list_uniindi_pane

0x8a73,	// (0x00058a36) uniindi_top_pane

0x24e5,	// (0x000524a8) bg_uniindi_top_pane

0x8a94,	// (0x00058a57) uniindi_top_pane_g1

0x8aaa,	// (0x00058a6d) uniindi_top_pane_g2

0x0003,

0xfd66,	// (0x0005fd29) uniindi_top_pane_g

0x8ad4,	// (0x00058a97) uniindi_top_pane_t1

0x8b21,	// (0x00058ae4) list_single_uniindi_pane_ParamLimits

0x8b21,	// (0x00058ae4) list_single_uniindi_pane

0x7131,	// (0x000570f4) bg_uniindi_top_pane_g1

0x8b33,	// (0x00058af6) list_single_uniindi_pane_g1

0x8b46,	// (0x00058b09) list_single_uniindi_pane_t1

0xf37c,	// (0x0005f33f) control_bg_pane

0x8b6b,	// (0x00058b2e) bg_sctrl_sk_pane_cp1

0x8b74,	// (0x00058b37) bg_sctrl_sk_pane_cp2

0x8b7d,	// (0x00058b40) control_bg_pane_g1

0x8b86,	// (0x00058b49) control_bg_pane_g2

0x0001,

0xfd6f,	// (0x0005fd32) control_bg_pane_g

0x6bce,	// (0x00056b91) cell_indicator_nsta_pane_g1_ParamLimits

0xd905,	// (0x0005d8c8) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x0005faa7) cell_indicator_nsta_pane_g_ParamLimits

0x1477,	// (0x0005143a) form2_midp_time_pane_t1_ParamLimits

0x7351,	// (0x00057314) main_idle_act4_pane_ParamLimits

0x7351,	// (0x00057314) main_idle_act4_pane

0xce35,	// (0x0005cdf8) popup_tb_extension_window_ParamLimits

0xe2e5,	// (0x0005e2a8) tb_ext_find_pane_ParamLimits

0xe2e5,	// (0x0005e2a8) tb_ext_find_pane

0x8b8f,	// (0x00058b52) ai_gene_pane_1_cp1

0x3d7c,	// (0x00053d3f) ai_gene_pane_2_cp1

0x8b97,	// (0x00058b5a) list_single_idle_plugin_calendar_pane

0x8ba0,	// (0x00058b63) list_single_idle_plugin_notification_pane

0x8ba9,	// (0x00058b6c) list_single_idle_plugin_player_pane

0xe344,	// (0x0005e307) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe344,	// (0x0005e307) list_single_idle_plugin_shortcut_pane

0xe36c,	// (0x0005e32f) main_idle_act4_pane_t1

0xe384,	// (0x0005e347) main_idle_act4_pane_t2

0x0001,

0xfd74,	// (0x0005fd37) main_idle_act4_pane_t

0xe39c,	// (0x0005e35f) middle_sk_idle_act4_pane_ParamLimits

0xe39c,	// (0x0005e35f) middle_sk_idle_act4_pane

0xe3b8,	// (0x0005e37b) popup_clock_digital_analogue_window_cp2

0xe3df,	// (0x0005e3a2) shortcut_wheel_idle_act4_pane_ParamLimits

0xe3df,	// (0x0005e3a2) shortcut_wheel_idle_act4_pane

0x7131,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g1

0x7131,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g2

0x7131,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g3

0x7131,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g4

0x7131,	// (0x000570f4) shortcut_wheel_idle_act4_pane_g5

0x8c3c,	// (0x00058bff) shortcut_wheel_idle_act4_pane_g6

0x8c44,	// (0x00058c07) shortcut_wheel_idle_act4_pane_g7

0x8c4c,	// (0x00058c0f) shortcut_wheel_idle_act4_pane_g8

0x8c54,	// (0x00058c17) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd79,	// (0x0005fd3c) shortcut_wheel_idle_act4_pane_g

0xe45c,	// (0x0005e41f) middle_sk_idle_act4_pane_g1_ParamLimits

0xe45c,	// (0x0005e41f) middle_sk_idle_act4_pane_g1

0xe46a,	// (0x0005e42d) middle_sk_idle_act4_pane_g2_ParamLimits

0xe46a,	// (0x0005e42d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd9c,	// (0x0005fd5f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd9c,	// (0x0005fd5f) middle_sk_idle_act4_pane_g

0xe482,	// (0x0005e445) middle_sk_idle_act4_pane_t1_ParamLimits

0xe482,	// (0x0005e445) middle_sk_idle_act4_pane_t1

0xe4d8,	// (0x0005e49b) grid_ai_shortcut_pane_ParamLimits

0xe4d8,	// (0x0005e49b) grid_ai_shortcut_pane

0xe4f5,	// (0x0005e4b8) list_highlight_pane_cp16_ParamLimits

0xe4f5,	// (0x0005e4b8) list_highlight_pane_cp16

0xe502,	// (0x0005e4c5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe502,	// (0x0005e4c5) list_single_idle_plugin_shortcut_pane_g1

0xe50e,	// (0x0005e4d1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe50e,	// (0x0005e4d1) list_single_idle_plugin_shortcut_pane_g2

0xe52c,	// (0x0005e4ef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe52c,	// (0x0005e4ef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfda1,	// (0x0005fd64) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfda1,	// (0x0005fd64) list_single_idle_plugin_shortcut_pane_g

0xe541,	// (0x0005e504) cell_ai_shortcut_pane_ParamLimits

0xe541,	// (0x0005e504) cell_ai_shortcut_pane

0xe557,	// (0x0005e51a) cell_ai_shortcut_pane_g1_ParamLimits

0xe557,	// (0x0005e51a) cell_ai_shortcut_pane_g1

0x8b8f,	// (0x00058b52) ai_gene_pane_1_cp2

0x8d85,	// (0x00058d48) ai_gene_pane_2_cp2

0x8d8d,	// (0x00058d50) list_highlight_pane_cp15

0x8d96,	// (0x00058d59) list_single_idle_plugin_calendar_pane_g1

0x8d8d,	// (0x00058d50) list_highlight_pane_cp17

0x8d9e,	// (0x00058d61) list_single_idle_plugin_calendar_pane_g1_copy1

0x8da6,	// (0x00058d69) list_single_idle_plugin_player_pane_g1

0x64fc,	// (0x000564bf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfda8,	// (0x0005fd6b) list_single_idle_plugin_player_pane_g

0x8dae,	// (0x00058d71) list_single_idle_plugin_player_pane_t1

0x8dbc,	// (0x00058d7f) list_single_idle_plugin_player_pane_t2

0x8dca,	// (0x00058d8d) list_single_idle_plugin_player_pane_t3

0x8dd8,	// (0x00058d9b) list_single_idle_plugin_player_pane_t4

0x0003,

0xfdad,	// (0x0005fd70) list_single_idle_plugin_player_pane_t

0x8de6,	// (0x00058da9) wait_bar_pane_cp15

0x8dee,	// (0x00058db1) grid_ai_notification_pane

0x64fc,	// (0x000564bf) list_single_idle_plugin_notification_pane_g1

0xe579,	// (0x0005e53c) cell_ai_notification_pane_ParamLimits

0xe579,	// (0x0005e53c) cell_ai_notification_pane

0x8e04,	// (0x00058dc7) cell_ai_notification_pane_g1

0x8e0c,	// (0x00058dcf) cell_ai_notification_pane_t1

0xe586,	// (0x0005e549) tb_ext_find_button_pane

0xe58e,	// (0x0005e551) tb_ext_find_pane_g1

0xe596,	// (0x0005e559) tb_ext_find_pane_t1

0x3639,	// (0x000535fc) tb_ext_find_button_pane_g1

0x8e38,	// (0x00058dfb) tb_ext_find_button_pane_g2

0x0001,

0xfdb6,	// (0x0005fd79) tb_ext_find_button_pane_g

0xe36c,	// (0x0005e32f) main_idle_act4_pane_t1_ParamLimits

0xe384,	// (0x0005e347) main_idle_act4_pane_t2_ParamLimits

0xfd74,	// (0x0005fd37) main_idle_act4_pane_t_ParamLimits

0xe3b8,	// (0x0005e37b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe3cf,	// (0x0005e392) sat_plugin_idle_act4_pane_ParamLimits

0xe3cf,	// (0x0005e392) sat_plugin_idle_act4_pane

0xe5a4,	// (0x0005e567) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe5a4,	// (0x0005e567) sat_plugin_idle_act4_pane_t1

0xe5bc,	// (0x0005e57f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe5bc,	// (0x0005e57f) sat_plugin_idle_act4_pane_t2

0xe5d4,	// (0x0005e597) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe5d4,	// (0x0005e597) sat_plugin_idle_act4_pane_t3

0xe5ec,	// (0x0005e5af) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe5ec,	// (0x0005e5af) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdbb,	// (0x0005fd7e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdbb,	// (0x0005fd7e) sat_plugin_idle_act4_pane_t

0xf441,	// (0x0005f404) popup_battery_window_ParamLimits

0xf441,	// (0x0005f404) popup_battery_window

0x24e5,	// (0x000524a8) bg_popup_sub_pane_cp25_ParamLimits

0x24e5,	// (0x000524a8) bg_popup_sub_pane_cp25

0x8e8d,	// (0x00058e50) popup_battery_window_g1_ParamLimits

0x8e8d,	// (0x00058e50) popup_battery_window_g1

0x8e99,	// (0x00058e5c) popup_battery_window_t1_ParamLimits

0x8e99,	// (0x00058e5c) popup_battery_window_t1

0x8eab,	// (0x00058e6e) popup_battery_window_t2_ParamLimits

0x8eab,	// (0x00058e6e) popup_battery_window_t2

0x0001,

0xfdc4,	// (0x0005fd87) popup_battery_window_t_ParamLimits

0xfdc4,	// (0x0005fd87) popup_battery_window_t

0xc64a,	// (0x0005c60d) midp_canvas_pane_ParamLimits

0xc6a5,	// (0x0005c668) midp_keypad_pane_ParamLimits

0xc6a5,	// (0x0005c668) midp_keypad_pane

0x3fb1,	// (0x00053f74) main_midp_pane_ParamLimits

0x6c27,	// (0x00056bea) signal_pane_g2_cp_ParamLimits

0xe604,	// (0x0005e5c7) aid_size_cell_midp_keypad_ParamLimits

0xe604,	// (0x0005e5c7) aid_size_cell_midp_keypad

0xe622,	// (0x0005e5e5) midp_keyp_game_grid_pane_ParamLimits

0xe622,	// (0x0005e5e5) midp_keyp_game_grid_pane

0xe649,	// (0x0005e60c) midp_keyp_rocker_pane_ParamLimits

0xe649,	// (0x0005e60c) midp_keyp_rocker_pane

0xe68e,	// (0x0005e651) midp_keyp_sk_left_pane_ParamLimits

0xe68e,	// (0x0005e651) midp_keyp_sk_left_pane

0xe6e2,	// (0x0005e6a5) midp_keyp_sk_right_pane_ParamLimits

0xe6e2,	// (0x0005e6a5) midp_keyp_sk_right_pane

0x2167,	// (0x0005212a) bg_button_pane_cp03

0xe736,	// (0x0005e6f9) midp_keyp_sk_left_pane_g1

0x2167,	// (0x0005212a) bg_button_pane_cp04

0xe736,	// (0x0005e6f9) midp_keyp_sk_right_pane_g1

0x7131,	// (0x000570f4) midp_keyp_rocker_pane_g1

0xe73f,	// (0x0005e702) keyp_game_cell_pane_ParamLimits

0xe73f,	// (0x0005e702) keyp_game_cell_pane

0x2167,	// (0x0005212a) bg_button_pane_cp02

0xe765,	// (0x0005e728) keyp_game_cell_pane_g1

0xaf0e,	// (0x0005aed1) popup_fep_vkb2_window_ParamLimits

0xaf0e,	// (0x0005aed1) popup_fep_vkb2_window

0xbda7,	// (0x0005bd6a) aid_size_cell_vkb2_ParamLimits

0xbda7,	// (0x0005bd6a) aid_size_cell_vkb2

0xbdd5,	// (0x0005bd98) popup_fep_vkb2_window_g1_ParamLimits

0xbdd5,	// (0x0005bd98) popup_fep_vkb2_window_g1

0xbe25,	// (0x0005bde8) vkb2_area_bottom_pane_ParamLimits

0xbe25,	// (0x0005bde8) vkb2_area_bottom_pane

0xbe81,	// (0x0005be44) vkb2_area_keypad_pane_ParamLimits

0xbe81,	// (0x0005be44) vkb2_area_keypad_pane

0xbecf,	// (0x0005be92) vkb2_area_top_pane_ParamLimits

0xbecf,	// (0x0005be92) vkb2_area_top_pane

0xbf55,	// (0x0005bf18) vkb2_top_entry_pane_ParamLimits

0xbf55,	// (0x0005bf18) vkb2_top_entry_pane

0xbf82,	// (0x0005bf45) vkb2_top_grid_left_pane_ParamLimits

0xbf82,	// (0x0005bf45) vkb2_top_grid_left_pane

0xbfa2,	// (0x0005bf65) vkb2_top_grid_right_pane_ParamLimits

0xbfa2,	// (0x0005bf65) vkb2_top_grid_right_pane

0x1be4,	// (0x00051ba7) vkb2_cell_keypad_pane_ParamLimits

0x1be4,	// (0x00051ba7) vkb2_cell_keypad_pane

0xbfe8,	// (0x0005bfab) vkb2_area_bottom_grid_pane_ParamLimits

0xbfe8,	// (0x0005bfab) vkb2_area_bottom_grid_pane

0xc012,	// (0x0005bfd5) vkb2_area_bottom_pane_g1_ParamLimits

0xc012,	// (0x0005bfd5) vkb2_area_bottom_pane_g1

0xc038,	// (0x0005bffb) vkb2_area_bottom_pane_g2_ParamLimits

0xc038,	// (0x0005bffb) vkb2_area_bottom_pane_g2

0xc069,	// (0x0005c02c) vkb2_area_bottom_pane_g3_ParamLimits

0xc069,	// (0x0005c02c) vkb2_area_bottom_pane_g3

0x0002,

0xfdc9,	// (0x0005fd8c) vkb2_area_bottom_pane_g_ParamLimits

0xfdc9,	// (0x0005fd8c) vkb2_area_bottom_pane_g

0x1d73,	// (0x00051d36) vkb2_top_cell_left_pane_ParamLimits

0x1d73,	// (0x00051d36) vkb2_top_cell_left_pane

0xe76e,	// (0x0005e731) vkb2_top_entry_pane_g1_ParamLimits

0xe76e,	// (0x0005e731) vkb2_top_entry_pane_g1

0xe77c,	// (0x0005e73f) vkb2_top_entry_pane_t1_ParamLimits

0xe77c,	// (0x0005e73f) vkb2_top_entry_pane_t1

0x9038,	// (0x00058ffb) vkb2_top_entry_pane_t2_ParamLimits

0x9038,	// (0x00058ffb) vkb2_top_entry_pane_t2

0x9050,	// (0x00059013) vkb2_top_entry_pane_t3_ParamLimits

0x9050,	// (0x00059013) vkb2_top_entry_pane_t3

0x0002,

0xfdd0,	// (0x0005fd93) vkb2_top_entry_pane_t_ParamLimits

0xfdd0,	// (0x0005fd93) vkb2_top_entry_pane_t

0xc0d3,	// (0x0005c096) vkb2_top_grid_right_pane_g1_ParamLimits

0xc0d3,	// (0x0005c096) vkb2_top_grid_right_pane_g1

0x1dd6,	// (0x00051d99) vkb2_top_grid_right_pane_g2_ParamLimits

0x1dd6,	// (0x00051d99) vkb2_top_grid_right_pane_g2

0x1dee,	// (0x00051db1) vkb2_top_grid_right_pane_g3_ParamLimits

0x1dee,	// (0x00051db1) vkb2_top_grid_right_pane_g3

0xc0e9,	// (0x0005c0ac) vkb2_top_grid_right_pane_g4_ParamLimits

0xc0e9,	// (0x0005c0ac) vkb2_top_grid_right_pane_g4

0x0003,

0xfdd7,	// (0x0005fd9a) vkb2_top_grid_right_pane_g_ParamLimits

0xfdd7,	// (0x0005fd9a) vkb2_top_grid_right_pane_g

0x1e1c,	// (0x00051ddf) vkb2_top_cell_left_pane_g1

0x1e33,	// (0x00051df6) vkb2_cell_keypad_pane_g1_ParamLimits

0x1e33,	// (0x00051df6) vkb2_cell_keypad_pane_g1

0x9066,	// (0x00059029) vkb2_cell_keypad_pane_t1_ParamLimits

0x9066,	// (0x00059029) vkb2_cell_keypad_pane_t1

0x1e57,	// (0x00051e1a) vkb2_cell_bottom_grid_pane_ParamLimits

0x1e57,	// (0x00051e1a) vkb2_cell_bottom_grid_pane

0x1e90,	// (0x00051e53) vkb2_cell_bottom_grid_pane_g1

0xe400,	// (0x0005e3c3) aid_call2_pane_cp02

0xe408,	// (0x0005e3cb) aid_call_pane_cp02

0xe410,	// (0x0005e3d3) clock_digital_number_pane_cp10

0xe418,	// (0x0005e3db) clock_digital_number_pane_cp11

0xe420,	// (0x0005e3e3) clock_digital_number_pane_cp12

0xe428,	// (0x0005e3eb) clock_digital_number_pane_cp13

0xe430,	// (0x0005e3f3) clock_digital_separator_pane_cp10

0x3639,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g1

0x3639,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g2

0xe438,	// (0x0005e3fb) popup_clock_digital_analogue_window_cp2_g3

0x3639,	// (0x000535fc) popup_clock_digital_analogue_window_cp2_g4

0xe438,	// (0x0005e3fb) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd8c,	// (0x0005fd4f) popup_clock_digital_analogue_window_cp2_g

0xe440,	// (0x0005e403) popup_clock_digital_analogue_window_cp2_t1

0xe44e,	// (0x0005e411) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd97,	// (0x0005fd5a) popup_clock_digital_analogue_window_cp2_t

0x7131,	// (0x000570f4) clock_digital_number_pane_cp10_g1

0x7131,	// (0x000570f4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x0005fb36) clock_digital_number_pane_cp10_g

0x7131,	// (0x000570f4) clock_digital_separator_pane_cp10_g1

0x7131,	// (0x000570f4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x0005fb36) clock_digital_separator_pane_cp10_g

0x8ab6,	// (0x00058a79) uniindi_top_pane_g3

0x8ac7,	// (0x00058a8a) uniindi_top_pane_g4

0x1c54,	// (0x00051c17) vkb2_row_keypad_pane_ParamLimits

0x1c54,	// (0x00051c17) vkb2_row_keypad_pane

0x1eac,	// (0x00051e6f) vkb2_cell_t_keypad_pane_ParamLimits

0x1eac,	// (0x00051e6f) vkb2_cell_t_keypad_pane

0x1ebc,	// (0x00051e7f) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1ebc,	// (0x00051e7f) vkb2_cell_t_keypad_pane_cp08

0x1ed1,	// (0x00051e94) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1ed1,	// (0x00051e94) vkb2_cell_t_keypad_pane_cp09

0x1ee5,	// (0x00051ea8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1ee5,	// (0x00051ea8) vkb2_cell_t_keypad_pane_cp01

0x1ef6,	// (0x00051eb9) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1ef6,	// (0x00051eb9) vkb2_cell_t_keypad_pane_cp02

0x1f07,	// (0x00051eca) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1f07,	// (0x00051eca) vkb2_cell_t_keypad_pane_cp03

0x1f18,	// (0x00051edb) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1f18,	// (0x00051edb) vkb2_cell_t_keypad_pane_cp04

0x1f29,	// (0x00051eec) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1f29,	// (0x00051eec) vkb2_cell_t_keypad_pane_cp05

0x1f3a,	// (0x00051efd) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1f3a,	// (0x00051efd) vkb2_cell_t_keypad_pane_cp06

0x1f4d,	// (0x00051f10) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1f4d,	// (0x00051f10) vkb2_cell_t_keypad_pane_cp07

0x1f62,	// (0x00051f25) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1f62,	// (0x00051f25) vkb2_cell_t_keypad_pane_cp10

0x1705,	// (0x000516c8) vkb2_cell_t_keypad_pane_g1

0x907d,	// (0x00059040) vkb2_cell_t_keypad_pane_t1

0xf37c,	// (0x0005f33f) popup_grid_graphic2_window

0xe7b5,	// (0x0005e778) aid_size_cell_graphic2_ParamLimits

0xe7b5,	// (0x0005e778) aid_size_cell_graphic2

0x5162,	// (0x00055125) bg_popup_window_pane_cp21_ParamLimits

0x5162,	// (0x00055125) bg_popup_window_pane_cp21

0xe7e7,	// (0x0005e7aa) graphic2_pages_pane_ParamLimits

0xe7e7,	// (0x0005e7aa) graphic2_pages_pane

0xe83f,	// (0x0005e802) grid_graphic2_control_pane_ParamLimits

0xe83f,	// (0x0005e802) grid_graphic2_control_pane

0xe873,	// (0x0005e836) grid_graphic2_pane_ParamLimits

0xe873,	// (0x0005e836) grid_graphic2_pane

0xe8ea,	// (0x0005e8ad) cell_graphic2_pane

0x2167,	// (0x0005212a) main_comp_mode_pane

0x8327,	// (0x000582ea) list_ai3_gene_pane_ParamLimits

0xe13b,	// (0x0005e0fe) bg_popup_window_pane_cp19_ParamLimits

0x86fb,	// (0x000586be) bg_touch_area_indi_pane_ParamLimits

0x86fb,	// (0x000586be) bg_touch_area_indi_pane

0x8711,	// (0x000586d4) bg_touch_area_indi_pane_cp01_ParamLimits

0x8711,	// (0x000586d4) bg_touch_area_indi_pane_cp01

0x8729,	// (0x000586ec) bg_touch_area_indi_pane_cp02_ParamLimits

0x8729,	// (0x000586ec) bg_touch_area_indi_pane_cp02

0x8743,	// (0x00058706) bg_touch_area_indi_pane_cp03_ParamLimits

0x8743,	// (0x00058706) bg_touch_area_indi_pane_cp03

0x875d,	// (0x00058720) popup_slider_window_g1_ParamLimits

0x8779,	// (0x0005873c) popup_slider_window_g2_ParamLimits

0x8795,	// (0x00058758) popup_slider_window_g3_ParamLimits

0xfd21,	// (0x0005fce4) popup_slider_window_g_ParamLimits

0x87f1,	// (0x000587b4) popup_slider_window_t1_ParamLimits

0x8865,	// (0x00058828) small_volume_slider_vertical_pane_ParamLimits

0xe8ea,	// (0x0005e8ad) cell_graphic2_pane_ParamLimits

0xe94d,	// (0x0005e910) bg_button_pane_cp10_ParamLimits

0xe94d,	// (0x0005e910) bg_button_pane_cp10

0xe960,	// (0x0005e923) bg_button_pane_cp11_ParamLimits

0xe960,	// (0x0005e923) bg_button_pane_cp11

0xe973,	// (0x0005e936) graphic2_pages_pane_g1_ParamLimits

0xe973,	// (0x0005e936) graphic2_pages_pane_g1

0xe98e,	// (0x0005e951) graphic2_pages_pane_g2_ParamLimits

0xe98e,	// (0x0005e951) graphic2_pages_pane_g2

0x0001,

0xfde5,	// (0x0005fda8) graphic2_pages_pane_g_ParamLimits

0xfde5,	// (0x0005fda8) graphic2_pages_pane_g

0xe9a6,	// (0x0005e969) graphic2_pages_pane_t1_ParamLimits

0xe9a6,	// (0x0005e969) graphic2_pages_pane_t1

0xe9be,	// (0x0005e981) cell_graphic2_control_pane_ParamLimits

0xe9be,	// (0x0005e981) cell_graphic2_control_pane

0xe9d8,	// (0x0005e99b) cell_graphic2_pane_g1_ParamLimits

0xe9d8,	// (0x0005e99b) cell_graphic2_pane_g1

0xe4b1,	// (0x0005e474) cell_graphic2_pane_g2_ParamLimits

0xe4b1,	// (0x0005e474) cell_graphic2_pane_g2

0xe4cb,	// (0x0005e48e) cell_graphic2_pane_g3_ParamLimits

0xe4cb,	// (0x0005e48e) cell_graphic2_pane_g3

0xe4be,	// (0x0005e481) cell_graphic2_pane_g4_ParamLimits

0xe4be,	// (0x0005e481) cell_graphic2_pane_g4

0xe9e5,	// (0x0005e9a8) cell_graphic2_pane_g5_ParamLimits

0xe9e5,	// (0x0005e9a8) cell_graphic2_pane_g5

0x0004,

0xfdea,	// (0x0005fdad) cell_graphic2_pane_g_ParamLimits

0xfdea,	// (0x0005fdad) cell_graphic2_pane_g

0xea05,	// (0x0005e9c8) cell_graphic2_pane_t1_ParamLimits

0xea05,	// (0x0005e9c8) cell_graphic2_pane_t1

0x57d9,	// (0x0005579c) grid_highlight_pane_cp11_ParamLimits

0x57d9,	// (0x0005579c) grid_highlight_pane_cp11

0x2fc9,	// (0x00052f8c) bg_button_pane_cp05

0xea1c,	// (0x0005e9df) cell_graphic2_control_pane_g1

0x7131,	// (0x000570f4) bg_touch_area_indi_pane_g1

0x92e5,	// (0x000592a8) aid_cmod_rocker_key_size

0x92ef,	// (0x000592b2) aid_cmode_itu_key_size

0x92f9,	// (0x000592bc) main_cmode_video_pane

0x9303,	// (0x000592c6) main_comp_mode_itu_pane

0x930f,	// (0x000592d2) main_comp_mode_rocker_pane

0x931b,	// (0x000592de) cell_cmode_rocker_pane_ParamLimits

0x931b,	// (0x000592de) cell_cmode_rocker_pane

0x932f,	// (0x000592f2) cell_cmode_itu_pane_ParamLimits

0x932f,	// (0x000592f2) cell_cmode_itu_pane

0x2fc9,	// (0x00052f8c) bg_button_pane_cp06_ParamLimits

0x2fc9,	// (0x00052f8c) bg_button_pane_cp06

0x73c9,	// (0x0005738c) cell_cmode_rocker_pane_g1_ParamLimits

0x73c9,	// (0x0005738c) cell_cmode_rocker_pane_g1

0x890c,	// (0x000588cf) cell_cmode_rocker_pane_g2_ParamLimits

0x890c,	// (0x000588cf) cell_cmode_rocker_pane_g2

0x0001,

0xfdf5,	// (0x0005fdb8) cell_cmode_rocker_pane_g_ParamLimits

0xfdf5,	// (0x0005fdb8) cell_cmode_rocker_pane_g

0x2167,	// (0x0005212a) bg_button_pane_cp07

0x9346,	// (0x00059309) cell_cmode_itu_pane_g1

0x934f,	// (0x00059312) cell_cmode_itu_pane_t1

0x935d,	// (0x00059320) cell_cmode_itu_pane_t2

0x0001,

0xfdfa,	// (0x0005fdbd) cell_cmode_itu_pane_t

0x8b5b,	// (0x00058b1e) aid_touch_ctrl_left

0x8b63,	// (0x00058b26) aid_touch_ctrl_right

0x2167,	// (0x0005212a) compa_mode_pane

0xea29,	// (0x0005e9ec) aid_cmod_rocker_key_size_cp

0xea33,	// (0x0005e9f6) aid_cmode_itu_key_size_cp

0x937f,	// (0x00059342) compa_mode_pane_g1

0x9387,	// (0x0005934a) compa_mode_pane_g2

0x938f,	// (0x00059352) compa_mode_pane_g3

0x0002,

0xfdff,	// (0x0005fdc2) compa_mode_pane_g

0xea3d,	// (0x0005ea00) main_comp_mode_itu_pane_cp

0xea45,	// (0x0005ea08) main_comp_mode_rocker_pane_cp

0xea4d,	// (0x0005ea10) cell_cmode_itu_pane_cp_ParamLimits

0xea4d,	// (0x0005ea10) cell_cmode_itu_pane_cp

0xea62,	// (0x0005ea25) cell_cmode_rocker_pane_cp_ParamLimits

0xea62,	// (0x0005ea25) cell_cmode_rocker_pane_cp

0x2fc9,	// (0x00052f8c) bg_button_pane_cp06_cp_ParamLimits

0x2fc9,	// (0x00052f8c) bg_button_pane_cp06_cp

0x73c9,	// (0x0005738c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x73c9,	// (0x0005738c) cell_cmode_rocker_pane_g1_cp

0x7131,	// (0x000570f4) cell_cmode_rocker_pane_g2_cp

0x2167,	// (0x0005212a) bg_button_pane_cp07_cp

0xea74,	// (0x0005ea37) cell_cmode_itu_pane_g1_cp

0xea7d,	// (0x0005ea40) cell_cmode_itu_pane_t1_cp

0xea7d,	// (0x0005ea40) cell_cmode_itu_pane_t2_cp

0xd74c,	// (0x0005d70f) settings_code_pane_cp2

0x225b,	// (0x0005221e) bg_popup_window_pane_cp3_ParamLimits

0x26d3,	// (0x00052696) heading_pane_cp3_ParamLimits

0x26df,	// (0x000526a2) listscroll_popup_graphic_pane_ParamLimits

0x1498,	// (0x0005145b) fep_hwr_aid_pane_ParamLimits

0x192b,	// (0x000518ee) aid_touch_sctrl_top_ParamLimits

0x1946,	// (0x00051909) sctrl_sk_top_pane_g1_ParamLimits

0x1705,	// (0x000516c8) sctrl_sk_top_pane_g2_ParamLimits

0xfd3a,	// (0x0005fcfd) sctrl_sk_top_pane_g_ParamLimits

0x1953,	// (0x00051916) sctrl_sk_top_pane_t1_ParamLimits

0x192b,	// (0x000518ee) aid_touch_sctrl_bottom_ParamLimits

0x1953,	// (0x00051916) sctrl_sk_bottom_pane_t1_ParamLimits

0x8a80,	// (0x00058a43) aid_area_touch_clock

0xbf17,	// (0x0005beda) aid_vkb2_area_top_pane_cell_ParamLimits

0xbf17,	// (0x0005beda) aid_vkb2_area_top_pane_cell

0xbfc2,	// (0x0005bf85) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbfc2,	// (0x0005bf85) aid_vkb2_area_bottom_pane_cell

0x900a,	// (0x00058fcd) popup_char_count_window

0x93e5,	// (0x000593a8) popup_char_count_window_g1

0x93ee,	// (0x000593b1) popup_char_count_window_g2

0x93f7,	// (0x000593ba) popup_char_count_window_g3

0x0002,

0xfe06,	// (0x0005fdc9) popup_char_count_window_g

0x9400,	// (0x000593c3) popup_char_count_window_t1

0x1a00,	// (0x000519c3) popup_fep_char_preview_window_ParamLimits

0x1a00,	// (0x000519c3) popup_fep_char_preview_window

0xbf37,	// (0x0005befa) vkb2_top_candi_pane_ParamLimits

0xbf37,	// (0x0005befa) vkb2_top_candi_pane

0xea8b,	// (0x0005ea4e) cell_vkb2_top_candi_pane_ParamLimits

0xea8b,	// (0x0005ea4e) cell_vkb2_top_candi_pane

0x1f77,	// (0x00051f3a) bg_popup_fep_char_preview_window_ParamLimits

0x1f77,	// (0x00051f3a) bg_popup_fep_char_preview_window

0x1f85,	// (0x00051f48) popup_fep_char_preview_window_t1_ParamLimits

0x1f85,	// (0x00051f48) popup_fep_char_preview_window_t1

0x945f,	// (0x00059422) bg_popup_fep_char_preview_window_g1

0x9467,	// (0x0005942a) bg_popup_fep_char_preview_window_g2

0x946f,	// (0x00059432) bg_popup_fep_char_preview_window_g3

0x9477,	// (0x0005943a) bg_popup_fep_char_preview_window_g4

0x947f,	// (0x00059442) bg_popup_fep_char_preview_window_g5

0x1fbf,	// (0x00051f82) bg_popup_fep_char_preview_window_g6

0x9487,	// (0x0005944a) bg_popup_fep_char_preview_window_g7

0x948f,	// (0x00059452) bg_popup_fep_char_preview_window_g8

0x9497,	// (0x0005945a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe0d,	// (0x0005fdd0) bg_popup_fep_char_preview_window_g

0x1705,	// (0x000516c8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1705,	// (0x000516c8) cell_vkb2_top_candi_pane_g1

0x1713,	// (0x000516d6) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1713,	// (0x000516d6) cell_vkb2_top_candi_pane_g2

0x8b00,	// (0x00058ac3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8b00,	// (0x00058ac3) cell_vkb2_top_candi_pane_g3

0x1fc7,	// (0x00051f8a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1fc7,	// (0x00051f8a) cell_vkb2_top_candi_pane_g4

0x78c8,	// (0x0005788b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x78c8,	// (0x0005788b) cell_vkb2_top_candi_pane_g5

0x1fe8,	// (0x00051fab) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1fe8,	// (0x00051fab) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe20,	// (0x0005fde3) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe20,	// (0x0005fde3) cell_vkb2_top_candi_pane_g

0x1ff6,	// (0x00051fb9) cell_vkb2_top_candi_pane_t1

0x10ab,	// (0x0005106e) aid_size_touch_slider_mark_ParamLimits

0x10ab,	// (0x0005106e) aid_size_touch_slider_mark

0xe823,	// (0x0005e7e6) grid_graphic2_catg_pane_ParamLimits

0xe823,	// (0x0005e7e6) grid_graphic2_catg_pane

0xe8b9,	// (0x0005e87c) popup_grid_graphic2_window_t1_ParamLimits

0xe8b9,	// (0x0005e87c) popup_grid_graphic2_window_t1

0xe8cf,	// (0x0005e892) popup_grid_graphic2_window_t2_ParamLimits

0xe8cf,	// (0x0005e892) popup_grid_graphic2_window_t2

0x0001,

0xfde0,	// (0x0005fda3) popup_grid_graphic2_window_t_ParamLimits

0xfde0,	// (0x0005fda3) popup_grid_graphic2_window_t

0x2fc9,	// (0x00052f8c) bg_button_pane_cp05_ParamLimits

0xea1c,	// (0x0005e9df) cell_graphic2_control_pane_g1_ParamLimits

0xeadf,	// (0x0005eaa2) cell_graphic2_catg_pane_ParamLimits

0xeadf,	// (0x0005eaa2) cell_graphic2_catg_pane

0x2167,	// (0x0005212a) bg_button_pane_cp12

0xeaf1,	// (0x0005eab4) cell_graphic2_catg_pane_g1

0x8a4c,	// (0x00058a0f) cell_tb_ext_pane_t1_ParamLimits

0x1d93,	// (0x00051d56) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1d93,	// (0x00051d56) vkb2_top_cell_right_narrow_pane

0x1dab,	// (0x00051d6e) vkb2_top_cell_right_wide_pane_ParamLimits

0x1dab,	// (0x00051d6e) vkb2_top_cell_right_wide_pane

0x148a,	// (0x0005144d) bg_vkb2_func_pane_ParamLimits

0x148a,	// (0x0005144d) bg_vkb2_func_pane

0x1e1c,	// (0x00051ddf) vkb2_top_cell_left_pane_g1_ParamLimits

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp03

0x1e90,	// (0x00051e53) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4af5,	// (0x00054ab8) bg_vkb2_func_pane_g1

0x4afd,	// (0x00054ac0) bg_vkb2_func_pane_g2

0x4b0d,	// (0x00054ad0) bg_vkb2_func_pane_g3

0x4b05,	// (0x00054ac8) bg_vkb2_func_pane_g4

0x4b15,	// (0x00054ad8) bg_vkb2_func_pane_g5

0x4b1d,	// (0x00054ae0) bg_vkb2_func_pane_g6

0x4b25,	// (0x00054ae8) bg_vkb2_func_pane_g7

0x4b2d,	// (0x00054af0) bg_vkb2_func_pane_g8

0x4aed,	// (0x00054ab0) bg_vkb2_func_pane_g9

0x0008,

0xfe2d,	// (0x0005fdf0) bg_vkb2_func_pane_g

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp01

0x1e1c,	// (0x00051ddf) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1e1c,	// (0x00051ddf) vkb2_top_cell_right_wide_pane_g1

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x148a,	// (0x0005144d) bg_vkb2_fuc_pane_cp02

0x1e90,	// (0x00051e53) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1e90,	// (0x00051e53) vkb2_top_cell_right_narrow_pane_g1

0xe075,	// (0x0005e038) aid_touch_area_decrease_ParamLimits

0xe075,	// (0x0005e038) aid_touch_area_decrease

0xe0af,	// (0x0005e072) aid_touch_area_increase_ParamLimits

0xe0af,	// (0x0005e072) aid_touch_area_increase

0xe0d7,	// (0x0005e09a) aid_touch_area_mute_ParamLimits

0xe0d7,	// (0x0005e09a) aid_touch_area_mute

0xe107,	// (0x0005e0ca) aid_touch_area_slider_ParamLimits

0xe107,	// (0x0005e0ca) aid_touch_area_slider

0xe147,	// (0x0005e10a) popup_slider_window_g4_ParamLimits

0xe147,	// (0x0005e10a) popup_slider_window_g4

0xe16f,	// (0x0005e132) popup_slider_window_g5_ParamLimits

0xe16f,	// (0x0005e132) popup_slider_window_g5

0xe1a3,	// (0x0005e166) popup_slider_window_g6_ParamLimits

0xe1a3,	// (0x0005e166) popup_slider_window_g6

0x881f,	// (0x000587e2) popup_slider_window_t2_ParamLimits

0x881f,	// (0x000587e2) popup_slider_window_t2

0x0001,

0xfd2e,	// (0x0005fcf1) popup_slider_window_t_ParamLimits

0xfd2e,	// (0x0005fcf1) popup_slider_window_t

0xe1bf,	// (0x0005e182) slider_pane_ParamLimits

0xe1bf,	// (0x0005e182) slider_pane

0x94ba,	// (0x0005947d) slider_pane_g1_ParamLimits

0x94ba,	// (0x0005947d) slider_pane_g1

0x94ce,	// (0x00059491) slider_pane_g2_ParamLimits

0x94ce,	// (0x00059491) slider_pane_g2

0x94e4,	// (0x000594a7) slider_pane_g3_ParamLimits

0x94e4,	// (0x000594a7) slider_pane_g3

0x0003,

0xfe40,	// (0x0005fe03) slider_pane_g_ParamLimits

0xfe40,	// (0x0005fe03) slider_pane_g

0xce81,	// (0x0005ce44) popup_tb_float_extension_window_ParamLimits

0xce81,	// (0x0005ce44) popup_tb_float_extension_window

0x9510,	// (0x000594d3) aid_size_cell_tb_float_ext

0x2167,	// (0x0005212a) bg_popup_sub_window_cp28

0x951c,	// (0x000594df) grid_tb_float_ext_pane

0x9528,	// (0x000594eb) cell_tb_float_ext_pane_ParamLimits

0x9528,	// (0x000594eb) cell_tb_float_ext_pane

0x9544,	// (0x00059507) cell_tb_float_ext_pane_g1

0x954d,	// (0x00059510) grid_highlight_pane_cp12

0xbbdd,	// (0x0005bba0) cell_last_hwr_side_pane_ParamLimits

0xbbdd,	// (0x0005bba0) cell_last_hwr_side_pane

0x7131,	// (0x000570f4) cell_last_hwr_side_pane_g1

0x9556,	// (0x00059519) cell_last_hwr_side_pane_g2

0x0001,

0xfe49,	// (0x0005fe0c) cell_last_hwr_side_pane_g

0xc09e,	// (0x0005c061) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc09e,	// (0x0005c061) vkb2_area_bottom_space_btn_pane

0x1705,	// (0x000516c8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x907d,	// (0x00059040) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1ff6,	// (0x00051fb9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2014,	// (0x00051fd7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2014,	// (0x00051fd7) vkb2_area_bottom_space_btn_pane_g1

0x204e,	// (0x00052011) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x204e,	// (0x00052011) vkb2_area_bottom_space_btn_pane_g2

0x2084,	// (0x00052047) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2084,	// (0x00052047) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe4e,	// (0x0005fe11) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe4e,	// (0x0005fe11) vkb2_area_bottom_space_btn_pane_g

0x154f,	// (0x00051512) cel_fep_hwr_func_pane_ParamLimits

0x154f,	// (0x00051512) cel_fep_hwr_func_pane

0xbbb2,	// (0x0005bb75) cell_hwr_side_button_pane_ParamLimits

0xbbb2,	// (0x0005bb75) cell_hwr_side_button_pane

0x8a80,	// (0x00058a43) aid_area_touch_clock_ParamLimits

0x24e5,	// (0x000524a8) bg_uniindi_top_pane_ParamLimits

0x8a94,	// (0x00058a57) uniindi_top_pane_g1_ParamLimits

0x8aaa,	// (0x00058a6d) uniindi_top_pane_g2_ParamLimits

0x8ab6,	// (0x00058a79) uniindi_top_pane_g3_ParamLimits

0x8ac7,	// (0x00058a8a) uniindi_top_pane_g4_ParamLimits

0xfd66,	// (0x0005fd29) uniindi_top_pane_g_ParamLimits

0x8ad4,	// (0x00058a97) uniindi_top_pane_t1_ParamLimits

0x24e5,	// (0x000524a8) bg_vkb2_func_pane_cp01_ParamLimits

0x24e5,	// (0x000524a8) bg_vkb2_func_pane_cp01

0x955f,	// (0x00059522) cel_fep_hwr_func_pane_g1_ParamLimits

0x955f,	// (0x00059522) cel_fep_hwr_func_pane_g1

0x24e5,	// (0x000524a8) bg_vkb2_func_pane_cp02_ParamLimits

0x24e5,	// (0x000524a8) bg_vkb2_func_pane_cp02

0x955f,	// (0x00059522) cell_hwr_side_button_pane_g1_ParamLimits

0x955f,	// (0x00059522) cell_hwr_side_button_pane_g1

0x496e,	// (0x00054931) status_pane_g4_ParamLimits

0x496e,	// (0x00054931) status_pane_g4

0x4988,	// (0x0005494b) status_pane_t1

0x6ecd,	// (0x00056e90) form2_midp_gauge_slider_cont_pane

0x6ed5,	// (0x00056e98) form2_midp_gauge_slider_pane_t1_ParamLimits

0xda07,	// (0x0005d9ca) form2_midp_gauge_slider_pane_t2_ParamLimits

0xda19,	// (0x0005d9dc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x0005fae9) form2_midp_gauge_slider_pane_t_ParamLimits

0x6f0b,	// (0x00056ece) form2_midp_slider_pane_ParamLimits

0x19c8,	// (0x0005198b) aid_size_cell_func_vkb2_ParamLimits

0x19c8,	// (0x0005198b) aid_size_cell_func_vkb2

0x94fc,	// (0x000594bf) slider_pane_g4_ParamLimits

0x94fc,	// (0x000594bf) slider_pane_g4

0xc0ff,	// (0x0005c0c2) form2_midp_gauge_slider_pane_t2_cp01

0xc10d,	// (0x0005c0d0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc10d,	// (0x0005c0d0) form2_midp_gauge_slider_pane_t3_cp01

0x20f9,	// (0x000520bc) form2_midp_slider_pane_cp01

0x2167,	// (0x0005212a) navi_smil_pane

0x9598,	// (0x0005955b) navi_smil_pane_g1

0x95a0,	// (0x00059563) navi_smil_pane_t1

0x956d,	// (0x00059530) form2_midp_slider_pane_g1

0x9576,	// (0x00059539) form2_midp_slider_pane_g2

0x957e,	// (0x00059541) form2_midp_slider_pane_g3

0x956d,	// (0x00059530) form2_midp_slider_pane_g4

0xeafa,	// (0x0005eabd) form2_midp_slider_pane_g5

0x0004,

0xfe57,	// (0x0005fe1a) form2_midp_slider_pane_g

0x20be,	// (0x00052081) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x20be,	// (0x00052081) vkb2_area_bottom_space_btn_pane_g4

0xd061,	// (0x0005d024) lc0_navi_pane_ParamLimits

0xd061,	// (0x0005d024) lc0_navi_pane

0xd0d1,	// (0x0005d094) lc0_stat_indi_pane_ParamLimits

0xd0d1,	// (0x0005d094) lc0_stat_indi_pane

0xd0e6,	// (0x0005d0a9) ls0_title_pane_ParamLimits

0xd0e6,	// (0x0005d0a9) ls0_title_pane

0x2fc9,	// (0x00052f8c) bg_popup_sub_pane_cp14_ParamLimits

0x8a67,	// (0x00058a2a) list_uniindi_pane_ParamLimits

0x8a73,	// (0x00058a36) uniindi_top_pane_ParamLimits

0x8b33,	// (0x00058af6) list_single_uniindi_pane_g1_ParamLimits

0x8b46,	// (0x00058b09) list_single_uniindi_pane_t1_ParamLimits

0xc12a,	// (0x0005c0ed) lc0_stat_clock_pane_ParamLimits

0xc12a,	// (0x0005c0ed) lc0_stat_clock_pane

0xeb03,	// (0x0005eac6) lc0_stat_indi_pane_g1_ParamLimits

0xeb03,	// (0x0005eac6) lc0_stat_indi_pane_g1

0xeb10,	// (0x0005ead3) lc0_stat_indi_pane_g2_ParamLimits

0xeb10,	// (0x0005ead3) lc0_stat_indi_pane_g2

0x0001,

0xfe62,	// (0x0005fe25) lc0_stat_indi_pane_g_ParamLimits

0xfe62,	// (0x0005fe25) lc0_stat_indi_pane_g

0xc137,	// (0x0005c0fa) lc0_uni_indicator_pane_ParamLimits

0xc137,	// (0x0005c0fa) lc0_uni_indicator_pane

0xeb1d,	// (0x0005eae0) ls0_title_pane_g1_ParamLimits

0xeb1d,	// (0x0005eae0) ls0_title_pane_g1

0xeb31,	// (0x0005eaf4) ls0_title_pane_t1_ParamLimits

0xeb31,	// (0x0005eaf4) ls0_title_pane_t1

0xc144,	// (0x0005c107) lc0_uni_indicator_pane_g1_ParamLimits

0xc144,	// (0x0005c107) lc0_uni_indicator_pane_g1

0x9612,	// (0x000595d5) lc0_stat_clock_pane_t1

0x2167,	// (0x0005212a) main_ai5_pane

0x9620,	// (0x000595e3) ai5_sk_pane_ParamLimits

0x9620,	// (0x000595e3) ai5_sk_pane

0xeb5f,	// (0x0005eb22) cell_ai5_widget_pane_ParamLimits

0xeb5f,	// (0x0005eb22) cell_ai5_widget_pane

0x96a3,	// (0x00059666) aid_size_cell_widget_grid

0x96b7,	// (0x0005967a) bg_ai5_widget_pane_ParamLimits

0x96b7,	// (0x0005967a) bg_ai5_widget_pane

0xebec,	// (0x0005ebaf) cell_ai5_widget_pane_g2

0xebfc,	// (0x0005ebbf) cell_ai5_widget_pane_g3

0xec10,	// (0x0005ebd3) cell_ai5_widget_pane_g4

0xec1c,	// (0x0005ebdf) cell_ai5_widget_pane_g5

0xec28,	// (0x0005ebeb) cell_ai5_widget_pane_g6

0xec34,	// (0x0005ebf7) cell_ai5_widget_pane_g7

0xec7c,	// (0x0005ec3f) cell_ai5_widget_pane_t1_ParamLimits

0xec7c,	// (0x0005ec3f) cell_ai5_widget_pane_t1

0xec99,	// (0x0005ec5c) cell_ai5_widget_pane_t2_ParamLimits

0xec99,	// (0x0005ec5c) cell_ai5_widget_pane_t2

0xecb1,	// (0x0005ec74) cell_ai5_widget_pane_t3_ParamLimits

0xecb1,	// (0x0005ec74) cell_ai5_widget_pane_t3

0xecc9,	// (0x0005ec8c) cell_ai5_widget_pane_t4_ParamLimits

0xecc9,	// (0x0005ec8c) cell_ai5_widget_pane_t4

0xece3,	// (0x0005eca6) cell_ai5_widget_pane_t5_ParamLimits

0xece3,	// (0x0005eca6) cell_ai5_widget_pane_t5

0x97f7,	// (0x000597ba) cell_ai5_widget_pane_t6_ParamLimits

0x97f7,	// (0x000597ba) cell_ai5_widget_pane_t6

0x9809,	// (0x000597cc) cell_ai5_widget_pane_t7_ParamLimits

0x9809,	// (0x000597cc) cell_ai5_widget_pane_t7

0xed02,	// (0x0005ecc5) cell_ai5_widget_pane_t8_ParamLimits

0xed02,	// (0x0005ecc5) cell_ai5_widget_pane_t8

0x0009,

0xfe7c,	// (0x0005fe3f) cell_ai5_widget_pane_t_ParamLimits

0xfe7c,	// (0x0005fe3f) cell_ai5_widget_pane_t

0xed4a,	// (0x0005ed0d) grid_ai5_widget_pane

0x2fc9,	// (0x00052f8c) highlight_cell_ai5_widget_pane_ParamLimits

0x2fc9,	// (0x00052f8c) highlight_cell_ai5_widget_pane

0xed61,	// (0x0005ed24) ai5_sk_left_pane

0xed6b,	// (0x0005ed2e) ai5_sk_middle_pane

0xed75,	// (0x0005ed38) ai5_sk_right_pane

0x989f,	// (0x00059862) bg_ai5_widget_pane_g1_ParamLimits

0x989f,	// (0x00059862) bg_ai5_widget_pane_g1

0x98ab,	// (0x0005986e) bg_ai5_widget_pane_g2_ParamLimits

0x98ab,	// (0x0005986e) bg_ai5_widget_pane_g2

0x98b7,	// (0x0005987a) bg_ai5_widget_pane_g3_ParamLimits

0x98b7,	// (0x0005987a) bg_ai5_widget_pane_g3

0x98c3,	// (0x00059886) bg_ai5_widget_pane_g4_ParamLimits

0x98c3,	// (0x00059886) bg_ai5_widget_pane_g4

0x98cf,	// (0x00059892) bg_ai5_widget_pane_g5_ParamLimits

0x98cf,	// (0x00059892) bg_ai5_widget_pane_g5

0x98db,	// (0x0005989e) bg_ai5_widget_pane_g6_ParamLimits

0x98db,	// (0x0005989e) bg_ai5_widget_pane_g6

0x98e7,	// (0x000598aa) bg_ai5_widget_pane_g7_ParamLimits

0x98e7,	// (0x000598aa) bg_ai5_widget_pane_g7

0x98f3,	// (0x000598b6) bg_ai5_widget_pane_g8_ParamLimits

0x98f3,	// (0x000598b6) bg_ai5_widget_pane_g8

0x98ff,	// (0x000598c2) bg_ai5_widget_pane_g9_ParamLimits

0x98ff,	// (0x000598c2) bg_ai5_widget_pane_g9

0x0008,

0xfe91,	// (0x0005fe54) bg_ai5_widget_pane_g_ParamLimits

0xfe91,	// (0x0005fe54) bg_ai5_widget_pane_g

0x9926,	// (0x000598e9) cell_shortcut_ai5_widget_pane_ParamLimits

0x9926,	// (0x000598e9) cell_shortcut_ai5_widget_pane

0x2327,	// (0x000522ea) bg_cell_shortcut_ai5_widget_pane

0x9938,	// (0x000598fb) cell_grid_ai5_widget_pane_g1

0x9941,	// (0x00059904) highlight_cell_shortcut_ai5_widget_pane

0x4af5,	// (0x00054ab8) ai5_sk_left_pane_g1

0x9949,	// (0x0005990c) ai5_sk_left_pane_g2

0x9951,	// (0x00059914) ai5_sk_left_pane_g3

0x9959,	// (0x0005991c) ai5_sk_left_pane_g4

0x0003,

0xfea4,	// (0x0005fe67) ai5_sk_left_pane_g

0x9961,	// (0x00059924) ai5_sk_left_pane_t1

0x4afd,	// (0x00054ac0) ai5_sk_right_pane_g1

0x996f,	// (0x00059932) ai5_sk_right_pane_g2

0x9977,	// (0x0005993a) ai5_sk_right_pane_g3

0x997f,	// (0x00059942) ai5_sk_right_pane_g4

0x0003,

0xfead,	// (0x0005fe70) ai5_sk_right_pane_g

0x9987,	// (0x0005994a) ai5_sk_right_pane_t1

0x4afd,	// (0x00054ac0) ai5_sk_middle_pane_g1

0x4af5,	// (0x00054ab8) ai5_sk_middle_pane_g2

0x4b15,	// (0x00054ad8) ai5_sk_middle_pane_g3

0x9977,	// (0x0005993a) ai5_sk_middle_pane_g4

0x9951,	// (0x00059914) ai5_sk_middle_pane_g5

0x9995,	// (0x00059958) ai5_sk_middle_pane_g6

0xed7f,	// (0x0005ed42) ai5_sk_middle_pane_g7

0x0006,

0xfeb6,	// (0x0005fe79) ai5_sk_middle_pane_g

0xcf4b,	// (0x0005cf0e) aid_touch_area_size_lc0_ParamLimits

0xcf4b,	// (0x0005cf0e) aid_touch_area_size_lc0

0x1734,	// (0x000516f7) cell_hwr_candidate_pane_t1_ParamLimits

0x4626,	// (0x000545e9) aid_touch_navi_pane

0xd1f0,	// (0x0005d1b3) status_dt_navi_pane_ParamLimits

0xd1f0,	// (0x0005d1b3) status_dt_navi_pane

0xd208,	// (0x0005d1cb) status_dt_sta_pane_ParamLimits

0xd208,	// (0x0005d1cb) status_dt_sta_pane

0xed87,	// (0x0005ed4a) dt_sta_controll_pane

0xed94,	// (0x0005ed57) dt_sta_indi_pane

0xeda1,	// (0x0005ed64) dt_sta_title_pane

0x24e5,	// (0x000524a8) bg_dt_sta_indi_pane_ParamLimits

0x24e5,	// (0x000524a8) bg_dt_sta_indi_pane

0xedb3,	// (0x0005ed76) dt_sta_battery_pane

0xedbb,	// (0x0005ed7e) dt_sta_indi_pane_g1

0xedc4,	// (0x0005ed87) dt_sta_indi_pane_g2

0xedcd,	// (0x0005ed90) dt_sta_indi_pane_g3

0x0002,

0xfec5,	// (0x0005fe88) dt_sta_indi_pane_g

0xedd6,	// (0x0005ed99) dt_sta_signal_pane

0x2fc9,	// (0x00052f8c) bg_dt_sta_title_pane_ParamLimits

0x2fc9,	// (0x00052f8c) bg_dt_sta_title_pane

0xeddf,	// (0x0005eda2) dt_sta_title_pane_g1

0xede7,	// (0x0005edaa) dt_sta_title_pane_t1_ParamLimits

0xede7,	// (0x0005edaa) dt_sta_title_pane_t1

0x2167,	// (0x0005212a) bg_dt_sta_control_pane

0xedfc,	// (0x0005edbf) dt_sta_controll_pane_g1

0xee05,	// (0x0005edc8) bg_dt_sta_title_pane_g1

0xee0e,	// (0x0005edd1) bg_dt_sta_title_pane_g2

0xee17,	// (0x0005edda) bg_dt_sta_title_pane_g3

0x0002,

0xfecc,	// (0x0005fe8f) bg_dt_sta_title_pane_g

0x7131,	// (0x000570f4) bg_dt_sta_indi_pane_g1

0x9a43,	// (0x00059a06) dt_sta_signal_pane_g1

0x9a4b,	// (0x00059a0e) dt_sta_signal_pane_g2

0x0001,

0xfed3,	// (0x0005fe96) dt_sta_signal_pane_g

0x9a53,	// (0x00059a16) dt_sta_battery_pane_g1

0x9a5c,	// (0x00059a1f) dt_sta_battery_pane_t1

0x7131,	// (0x000570f4) bg_dt_sta_control_pane_g1

0x3725,	// (0x000536e8) fep_china_uni_eep_pane

0x372d,	// (0x000536f0) fep_china_uni_entry_pane_ParamLimits

0x373d,	// (0x00053700) popup_fep_china_uni_window_g1_ParamLimits

0x374d,	// (0x00053710) popup_fep_china_uni_window_g2_ParamLimits

0x374d,	// (0x00053710) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x0005f725) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x0005f725) popup_fep_china_uni_window_g

0x9a6b,	// (0x00059a2e) fep_china_uni_eep_pane_g1

0x9a73,	// (0x00059a36) fep_china_uni_eep_pane_t1

0x958f,	// (0x00059552) aid_touch_area_size_smil_player

0x477e,	// (0x00054741) lc0_clock_pane

0x497c,	// (0x0005493f) status_pane_g5_ParamLimits

0x497c,	// (0x0005493f) status_pane_g5

0xc90d,	// (0x0005c8d0) popup_keymap_window

0x493a,	// (0x000548fd) status_icon_pane

0xebfc,	// (0x0005ebbf) cell_ai5_widget_pane_g3_ParamLimits

0xec10,	// (0x0005ebd3) cell_ai5_widget_pane_g4_ParamLimits

0xec1c,	// (0x0005ebdf) cell_ai5_widget_pane_g5_ParamLimits

0xec40,	// (0x0005ec03) cell_ai5_widget_pane_g8_ParamLimits

0xec40,	// (0x0005ec03) cell_ai5_widget_pane_g8

0xec54,	// (0x0005ec17) cell_ai5_widget_pane_g9_ParamLimits

0xec54,	// (0x0005ec17) cell_ai5_widget_pane_g9

0xec68,	// (0x0005ec2b) cell_ai5_widget_pane_g10_ParamLimits

0xec68,	// (0x0005ec2b) cell_ai5_widget_pane_g10

0x9a82,	// (0x00059a45) status_icon_pane_g1

0x2167,	// (0x0005212a) bg_popup_sub_pane_cp13

0x9a8a,	// (0x00059a4d) popup_keymap_window_t1

0xc6fd,	// (0x0005c6c0) control_pane_g6_ParamLimits

0xc6fd,	// (0x0005c6c0) control_pane_g6

0xc70a,	// (0x0005c6cd) control_pane_g7_ParamLimits

0xc70a,	// (0x0005c6cd) control_pane_g7

0xc717,	// (0x0005c6da) control_pane_g8_ParamLimits

0xc717,	// (0x0005c6da) control_pane_g8

0xed87,	// (0x0005ed4a) dt_sta_controll_pane_ParamLimits

0xed94,	// (0x0005ed57) dt_sta_indi_pane_ParamLimits

0xeda1,	// (0x0005ed64) dt_sta_title_pane_ParamLimits

0x2f01,	// (0x00052ec4) aid_size_touch_scroll_bar_cale

0xf459,	// (0x0005f41c) popup_discreet_window_ParamLimits

0xf459,	// (0x0005f41c) popup_discreet_window

0xaf58,	// (0x0005af1b) popup_sk_window

0x5162,	// (0x00055125) bg_popup_sub_pane_cp28_ParamLimits

0x5162,	// (0x00055125) bg_popup_sub_pane_cp28

0x9a98,	// (0x00059a5b) popup_discreet_window_g1_ParamLimits

0x9a98,	// (0x00059a5b) popup_discreet_window_g1

0x9ab8,	// (0x00059a7b) popup_discreet_window_t1_ParamLimits

0x9ab8,	// (0x00059a7b) popup_discreet_window_t1

0x9ad6,	// (0x00059a99) popup_discreet_window_t2_ParamLimits

0x9ad6,	// (0x00059a99) popup_discreet_window_t2

0x0002,

0xfed8,	// (0x0005fe9b) popup_discreet_window_t_ParamLimits

0xfed8,	// (0x0005fe9b) popup_discreet_window_t

0x212f,	// (0x000520f2) popup_sk_window_g1

0x2139,	// (0x000520fc) popup_sk_window_g2

0x0001,

0xfedf,	// (0x0005fea2) popup_sk_window_g

0x9b28,	// (0x00059aeb) popup_sk_window_t1

0x9b36,	// (0x00059af9) popup_sk_window_t1_copy1

0xebec,	// (0x0005ebaf) cell_ai5_widget_pane_g2_ParamLimits

0xed14,	// (0x0005ecd7) cell_ai5_widget_pane_t9_ParamLimits

0xed14,	// (0x0005ecd7) cell_ai5_widget_pane_t9

0x2167,	// (0x0005212a) main_fep_fshwr2_pane

0xee20,	// (0x0005ede3) aid_fshwr2_btn_pane

0xee28,	// (0x0005edeb) aid_fshwr2_syb_pane

0xee30,	// (0x0005edf3) aid_fshwr2_txt_pane

0xee38,	// (0x0005edfb) fshwr2_func_candi_pane

0xee42,	// (0x0005ee05) fshwr2_hwr_syb_pane

0xee4e,	// (0x0005ee11) fshwr2_icf_pane

0x2167,	// (0x0005212a) fshwr2_icf_bg_pane

0xee58,	// (0x0005ee1b) fshwr2_icf_pane_t1_ParamLimits

0xee58,	// (0x0005ee1b) fshwr2_icf_pane_t1

0x7131,	// (0x000570f4) fshwr2_func_candi_pane_g1

0x9ba9,	// (0x00059b6c) fshwr2_func_candi_row_pane_ParamLimits

0x9ba9,	// (0x00059b6c) fshwr2_func_candi_row_pane

0xee70,	// (0x0005ee33) cell_fshwr2_syb_pane_ParamLimits

0xee70,	// (0x0005ee33) cell_fshwr2_syb_pane

0x73c9,	// (0x0005738c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x73c9,	// (0x0005738c) fshwr2_hwr_syb_pane_g1

0x2167,	// (0x0005212a) bg_popup_call_pane_cp01

0x9bd4,	// (0x00059b97) fshwr2_func_candi_cell_pane_ParamLimits

0x9bd4,	// (0x00059b97) fshwr2_func_candi_cell_pane

0x9c06,	// (0x00059bc9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9c06,	// (0x00059bc9) fshwr2_func_candi_cell_bg_pane

0x9c20,	// (0x00059be3) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9c20,	// (0x00059be3) fshwr2_func_candi_cell_pane_g1

0x9c40,	// (0x00059c03) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c40,	// (0x00059c03) fshwr2_func_candi_cell_pane_t1

0x2167,	// (0x0005212a) bg_button_pane_cp08

0x3c33,	// (0x00053bf6) cell_fshwr2_syb_bg_pane

0xee89,	// (0x0005ee4c) cell_fshwr2_syb_bg_pane_g1

0xee91,	// (0x0005ee54) cell_fshwr2_syb_bg_pane_t1

0x2fc9,	// (0x00052f8c) main_tmo_pane

0xd522,	// (0x0005d4e5) uni_indicator_pane_g1_ParamLimits

0xd537,	// (0x0005d4fa) uni_indicator_pane_g2_ParamLimits

0xd54c,	// (0x0005d50f) uni_indicator_pane_g3_ParamLimits

0xd562,	// (0x0005d525) uni_indicator_pane_g4_ParamLimits

0xd562,	// (0x0005d525) uni_indicator_pane_g4

0xd576,	// (0x0005d539) uni_indicator_pane_g5_ParamLimits

0xd576,	// (0x0005d539) uni_indicator_pane_g5

0xd58a,	// (0x0005d54d) uni_indicator_pane_g6_ParamLimits

0xd58a,	// (0x0005d54d) uni_indicator_pane_g6

0xf95a,	// (0x0005f91d) uni_indicator_pane_g_ParamLimits

0xe045,	// (0x0005e008) popup_tmo_note_window_ParamLimits

0xe045,	// (0x0005e008) popup_tmo_note_window

0x2167,	// (0x0005212a) fshwr2_bg_pane

0x9c31,	// (0x00059bf4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c31,	// (0x00059bf4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfee4,	// (0x0005fea7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfee4,	// (0x0005fea7) fshwr2_func_candi_cell_pane_g

0x7131,	// (0x000570f4) bg_popup_window_pane_cp01

0x9c6a,	// (0x00059c2d) bg_popup_window_pane_g1_cp01

0x9c73,	// (0x00059c36) bg_popup_window_pane_cp22_ParamLimits

0x9c73,	// (0x00059c36) bg_popup_window_pane_cp22

0x9c81,	// (0x00059c44) listscroll_tmo_link_pane_ParamLimits

0x9c81,	// (0x00059c44) listscroll_tmo_link_pane

0x9cc1,	// (0x00059c84) popup_tmo_note_window_g1_ParamLimits

0x9cc1,	// (0x00059c84) popup_tmo_note_window_g1

0x9cce,	// (0x00059c91) tmo_note_info_pane_ParamLimits

0x9cce,	// (0x00059c91) tmo_note_info_pane

0xeea0,	// (0x0005ee63) list_tmo_note_info_pane_g1_ParamLimits

0xeea0,	// (0x0005ee63) list_tmo_note_info_pane_g1

0x9cff,	// (0x00059cc2) list_tmo_note_info_pane_g2_ParamLimits

0x9cff,	// (0x00059cc2) list_tmo_note_info_pane_g2

0x0001,

0xfee9,	// (0x0005feac) list_tmo_note_info_pane_g_ParamLimits

0xfee9,	// (0x0005feac) list_tmo_note_info_pane_g

0x9d1b,	// (0x00059cde) list_tmo_note_info_text_pane_ParamLimits

0x9d1b,	// (0x00059cde) list_tmo_note_info_text_pane

0x9da0,	// (0x00059d63) list_tmo_link_pane

0x9dad,	// (0x00059d70) scroll_pane_cp20

0x9dba,	// (0x00059d7d) list_single_tmo_link_pane_ParamLimits

0x9dba,	// (0x00059d7d) list_single_tmo_link_pane

0x9dca,	// (0x00059d8d) list_single_tmo_link_pane_t1

0x9dd8,	// (0x00059d9b) list_tmo_note_info_text_pane_t1_ParamLimits

0x9dd8,	// (0x00059d9b) list_tmo_note_info_text_pane_t1

0xc35b,	// (0x0005c31e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xc35b,	// (0x0005c31e) aid_size_touch_scroll_bar_cp01

0xb6b5,	// (0x0005b678) aid_size_touch_slider_marker

0xaf48,	// (0x0005af0b) popup_settings_window_ParamLimits

0xaf48,	// (0x0005af0b) popup_settings_window

0x0ce8,	// (0x00050cab) popup_candi_list_indi_window

0x4626,	// (0x000545e9) aid_touch_navi_pane_ParamLimits

0x18ff,	// (0x000518c2) rs_clock_indi_pane

0x1908,	// (0x000518cb) sctrl_sk_bottom_pane_ParamLimits

0x1919,	// (0x000518dc) sctrl_sk_top_pane_ParamLimits

0x1a1a,	// (0x000519dd) popup_fep_tooltip_window

0x96a3,	// (0x00059666) aid_size_cell_widget_grid_ParamLimits

0xebe0,	// (0x0005eba3) cell_ai5_widget_pane_g1_ParamLimits

0xebe0,	// (0x0005eba3) cell_ai5_widget_pane_g1

0xec28,	// (0x0005ebeb) cell_ai5_widget_pane_g6_ParamLimits

0xec34,	// (0x0005ebf7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe67,	// (0x0005fe2a) cell_ai5_widget_pane_g_ParamLimits

0xfe67,	// (0x0005fe2a) cell_ai5_widget_pane_g

0xed38,	// (0x0005ecfb) cell_ai5_widget_pane_t10_ParamLimits

0xed38,	// (0x0005ecfb) cell_ai5_widget_pane_t10

0xed4a,	// (0x0005ed0d) grid_ai5_widget_pane_ParamLimits

0x990b,	// (0x000598ce) cell_contacts_ai5_widget_pane_ParamLimits

0x990b,	// (0x000598ce) cell_contacts_ai5_widget_pane

0x9aeb,	// (0x00059aae) popup_discreet_window_t3_ParamLimits

0x9aeb,	// (0x00059aae) popup_discreet_window_t3

0x9b7a,	// (0x00059b3d) popup_fshwr2_char_preview_window_ParamLimits

0x9b7a,	// (0x00059b3d) popup_fshwr2_char_preview_window

0xeeb7,	// (0x0005ee7a) tmo_note_info_pane_t1

0xeecc,	// (0x0005ee8f) tmo_note_info_pane_t2

0xeee5,	// (0x0005eea8) tmo_note_info_pane_t3

0x9d7c,	// (0x00059d3f) tmo_note_info_pane_t4

0x9d8e,	// (0x00059d51) tmo_note_info_pane_t5

0x0004,

0xfeee,	// (0x0005feb1) tmo_note_info_pane_t

0x9da0,	// (0x00059d63) list_tmo_link_pane_ParamLimits

0x9dad,	// (0x00059d70) scroll_pane_cp20_ParamLimits

0x2167,	// (0x0005212a) bg_popup_fep_char_preview_window_cp01

0x9df1,	// (0x00059db4) popup_fshwr2_char_preview_window_t1

0x9dff,	// (0x00059dc2) popup_candi_list_indi_window_g1

0x9e08,	// (0x00059dcb) bg_cell_contacts_ai5_widget_pane

0x9e14,	// (0x00059dd7) cell_contacts_ai5_widget_pane_g1

0x9e28,	// (0x00059deb) cell_contacts_ai5_widget_pane_g2

0x9e37,	// (0x00059dfa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef9,	// (0x0005febc) cell_contacts_ai5_widget_pane_g

0x9e4a,	// (0x00059e0d) cell_contacts_ai5_widget_pane_t1

0x2fc9,	// (0x00052f8c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef5f,	// (0x0005ef22) settings_container_pane

0x3c33,	// (0x00053bf6) listscroll_set_pane_copy1

0x68a8,	// (0x0005686b) scroll_pane_cp121_copy1

0x9ed0,	// (0x00059e93) set_content_pane_copy1

0xef6b,	// (0x0005ef2e) aid_height_set_list_copy1_ParamLimits

0xef6b,	// (0x0005ef2e) aid_height_set_list_copy1

0x5ef5,	// (0x00055eb8) aid_size_parent_copy1_ParamLimits

0x5ef5,	// (0x00055eb8) aid_size_parent_copy1

0xef77,	// (0x0005ef3a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef77,	// (0x0005ef3a) button_value_adjust_pane_cp6_copy1

0x3fb1,	// (0x00053f74) list_highlight_pane_cp2_copy1_ParamLimits

0x3fb1,	// (0x00053f74) list_highlight_pane_cp2_copy1

0xef8b,	// (0x0005ef4e) list_set_pane_copy1_ParamLimits

0xef8b,	// (0x0005ef4e) list_set_pane_copy1

0xeefa,	// (0x0005eebd) main_pane_set_t1_copy1_ParamLimits

0xeefa,	// (0x0005eebd) main_pane_set_t1_copy1

0xef34,	// (0x0005eef7) main_pane_set_t2_copy1_ParamLimits

0xef34,	// (0x0005eef7) main_pane_set_t2_copy1

0xf052,	// (0x0005f015) main_pane_set_t3_copy1

0xf060,	// (0x0005f023) main_pane_set_t4_copy1

0xef53,	// (0x0005ef16) set_content_pane_g1_copy1_ParamLimits

0xef53,	// (0x0005ef16) set_content_pane_g1_copy1

0xf06e,	// (0x0005f031) setting_code_pane_copy1

0x9fe5,	// (0x00059fa8) setting_slider_graphic_pane_copy1

0x9fe5,	// (0x00059fa8) setting_slider_pane_copy1

0x9fef,	// (0x00059fb2) setting_text_pane_copy1

0x9ff9,	// (0x00059fbc) setting_volume_pane_copy1

0xf078,	// (0x0005f03b) settings_code_pane_cp2_copy1

0xf080,	// (0x0005f043) settings_code_pane_cp_copy1_ParamLimits

0xf080,	// (0x0005f043) settings_code_pane_cp_copy1

0xf13b,	// (0x0005f0fe) volume_set_pane_copy1

0xf147,	// (0x0005f10a) volume_set_pane_g10_copy1

0xf153,	// (0x0005f116) volume_set_pane_g1_copy1

0xf15d,	// (0x0005f120) volume_set_pane_g2_copy1

0xf167,	// (0x0005f12a) volume_set_pane_g3_copy1

0xf171,	// (0x0005f134) volume_set_pane_g4_copy1

0xf17b,	// (0x0005f13e) volume_set_pane_g5_copy1

0xf185,	// (0x0005f148) volume_set_pane_g6_copy1

0xf18f,	// (0x0005f152) volume_set_pane_g7_copy1

0xf199,	// (0x0005f15c) volume_set_pane_g8_copy1

0xf1a3,	// (0x0005f166) volume_set_pane_g9_copy1

0x225b,	// (0x0005221e) bg_set_opt_pane_cp_copy1_ParamLimits

0x225b,	// (0x0005221e) bg_set_opt_pane_cp_copy1

0xa090,	// (0x0005a053) setting_slider_pane_t1_copy1_ParamLimits

0xa090,	// (0x0005a053) setting_slider_pane_t1_copy1

0xf1ad,	// (0x0005f170) setting_slider_pane_t2_copy1_ParamLimits

0xf1ad,	// (0x0005f170) setting_slider_pane_t2_copy1

0xf1c7,	// (0x0005f18a) setting_slider_pane_t3_copy1_ParamLimits

0xf1c7,	// (0x0005f18a) setting_slider_pane_t3_copy1

0xf1df,	// (0x0005f1a2) slider_set_pane_copy1_ParamLimits

0xf1df,	// (0x0005f1a2) slider_set_pane_copy1

0x3030,	// (0x00052ff3) set_opt_bg_pane_g1_copy2

0x3038,	// (0x00052ffb) set_opt_bg_pane_g2_copy2

0xa0f6,	// (0x0005a0b9) set_opt_bg_pane_g3_copy2

0x3048,	// (0x0005300b) set_opt_bg_pane_g4_copy2

0x3050,	// (0x00053013) set_opt_bg_pane_g5_copy2

0x3058,	// (0x0005301b) set_opt_bg_pane_g6_copy2

0xf1f5,	// (0x0005f1b8) set_opt_bg_pane_g7_copy2

0xa10a,	// (0x0005a0cd) set_opt_bg_pane_g8_copy2

0xa114,	// (0x0005a0d7) set_opt_bg_pane_g9_copy2

0xa11e,	// (0x0005a0e1) aid_size_touch_slider_mark_copy1_ParamLimits

0xa11e,	// (0x0005a0e1) aid_size_touch_slider_mark_copy1

0xa132,	// (0x0005a0f5) slider_set_pane_g1_copy1

0xa13b,	// (0x0005a0fe) slider_set_pane_g2_copy1

0x6754,	// (0x00056717) slider_set_pane_g3_copy1_ParamLimits

0x6754,	// (0x00056717) slider_set_pane_g3_copy1

0x6768,	// (0x0005672b) slider_set_pane_g4_copy1_ParamLimits

0x6768,	// (0x0005672b) slider_set_pane_g4_copy1

0x6780,	// (0x00056743) slider_set_pane_g5_copy1_ParamLimits

0x6780,	// (0x00056743) slider_set_pane_g5_copy1

0x6754,	// (0x00056717) slider_set_pane_g6_copy1_ParamLimits

0x6754,	// (0x00056717) slider_set_pane_g6_copy1

0xf1ff,	// (0x0005f1c2) slider_set_pane_g7_copy1_ParamLimits

0xf1ff,	// (0x0005f1c2) slider_set_pane_g7_copy1

0x217b,	// (0x0005213e) bg_set_opt_pane_cp2_copy1

0xa159,	// (0x0005a11c) setting_slider_graphic_pane_g1_copy1

0xf215,	// (0x0005f1d8) setting_slider_graphic_pane_t1_copy1

0xf225,	// (0x0005f1e8) setting_slider_graphic_pane_t2_copy1

0xf235,	// (0x0005f1f8) slider_set_pane_cp_copy1

0xa192,	// (0x0005a155) input_focus_pane_cp1_copy1

0xa19b,	// (0x0005a15e) list_set_text_pane_copy1

0xa1a3,	// (0x0005a166) setting_text_pane_g1_copy1

0xf0a0,	// (0x0005f063) set_text_pane_t1_copy1

0xa192,	// (0x0005a155) input_focus_pane_cp2_copy1

0xa1a3,	// (0x0005a166) setting_code_pane_g1_copy1

0xf23d,	// (0x0005f200) setting_code_pane_t1_copy1

0xf24b,	// (0x0005f20e) list_set_graphic_pane_copy1

0x217b,	// (0x0005213e) bg_set_opt_pane_cp4_copy1

0xc609,	// (0x0005c5cc) list_set_graphic_pane_g1_copy1_ParamLimits

0xc609,	// (0x0005c5cc) list_set_graphic_pane_g1_copy1

0xf25d,	// (0x0005f220) list_set_graphic_pane_g2_copy1

0xc621,	// (0x0005c5e4) list_set_graphic_pane_t1_copy1_ParamLimits

0xc621,	// (0x0005c5e4) list_set_graphic_pane_t1_copy1

0x7131,	// (0x000570f4) rs_clock_indi_pane_g1

0xa1d4,	// (0x0005a197) rs_clock_indi_pane_t1

0xa1e2,	// (0x0005a1a5) rs_indi_pane

0xa1ea,	// (0x0005a1ad) rs_indi_pane_g1

0xa1f3,	// (0x0005a1b6) rs_indi_pane_g2

0xa1fc,	// (0x0005a1bf) rs_indi_pane_g3

0x0002,

0xff00,	// (0x0005fec3) rs_indi_pane_g

0x3c33,	// (0x00053bf6) bg_popup_preview_window_pane_cp03

0xa205,	// (0x0005a1c8) popup_fep_tooltip_window_t1

0x7de5,	// (0x00057da8) popup_note2_window_g2_ParamLimits

0x7de5,	// (0x00057da8) popup_note2_window_g2

0x0001,

0xfc9e,	// (0x0005fc61) popup_note2_window_g_ParamLimits

0xfc9e,	// (0x0005fc61) popup_note2_window_g

0x82ed,	// (0x000582b0) bg_popup_sub_pane_cp11_ParamLimits

0x82fa,	// (0x000582bd) cell_ai3_links_pane_g1_ParamLimits

0x8311,	// (0x000582d4) cell_ai3_links_pane_t1

0xf0a0,	// (0x0005f063) set_text_pane_t1_copy1_ParamLimits

0x3b40,	// (0x00053b03) cell_graphic_popup_pane_cp2_ParamLimits

0x3b40,	// (0x00053b03) cell_graphic_popup_pane_cp2

0xa213,	// (0x0005a1d6) cell_graphic_popup_pane_g1_cp2

0x2d14,	// (0x00052cd7) cell_graphic_popup_pane_g2_cp2

0xa21b,	// (0x0005a1de) cell_graphic_popup_pane_g3_cp2

0xa223,	// (0x0005a1e6) cell_graphic_popup_pane_t2_cp2

0x2d25,	// (0x00052ce8) grid_highlight_pane_cp3_cp2

0x337c,	// (0x0005333f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fc9,	// (0x00052f8c) main_tmo_pane_ParamLimits

0xe039,	// (0x0005dffc) popup_tmo_big_image_note_window

0xebd0,	// (0x0005eb93) cell_ai5_widget_list_pane

0xebd8,	// (0x0005eb9b) cell_ai5_widget_lrg_icon_pane

0xeeb7,	// (0x0005ee7a) tmo_note_info_pane_t1_ParamLimits

0xeecc,	// (0x0005ee8f) tmo_note_info_pane_t2_ParamLimits

0xeee5,	// (0x0005eea8) tmo_note_info_pane_t3_ParamLimits

0x9d7c,	// (0x00059d3f) tmo_note_info_pane_t4_ParamLimits

0x9d8e,	// (0x00059d51) tmo_note_info_pane_t5_ParamLimits

0xfeee,	// (0x0005feb1) tmo_note_info_pane_t_ParamLimits

0xef5f,	// (0x0005ef22) settings_container_pane_ParamLimits

0xa18a,	// (0x0005a14d) indicator_popup_pane_cp5

0xa18a,	// (0x0005a14d) indicator_popup_pane_cp6

0xf24b,	// (0x0005f20e) list_set_graphic_pane_copy1_ParamLimits

0x2167,	// (0x0005212a) bg_popup_window_pane_cp23

0xa231,	// (0x0005a1f4) popup_tmo_big_image_note_window_g1

0xa23d,	// (0x0005a200) popup_tmo_big_image_note_window_t1

0xa24d,	// (0x0005a210) popup_tmo_big_image_note_window_t2

0xa25d,	// (0x0005a220) popup_tmo_big_image_note_window_t3

0x0002,

0xff07,	// (0x0005feca) popup_tmo_big_image_note_window_t

0xf265,	// (0x0005f228) cell_ai5_widget_lrg_icon_pane_g1

0xf26d,	// (0x0005f230) cell_ai5_widget_lrg_icon_pane_t1

0xf27b,	// (0x0005f23e) cell_ai5_widget_list_row_pane_ParamLimits

0xf27b,	// (0x0005f23e) cell_ai5_widget_list_row_pane

0xf294,	// (0x0005f257) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf294,	// (0x0005f257) cell_ai5_widget_list_row_pane_g1

0xf2a1,	// (0x0005f264) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2a1,	// (0x0005f264) cell_ai5_widget_list_row_pane_t1

0xf2b9,	// (0x0005f27c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2b9,	// (0x0005f27c) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff0e,	// (0x0005fed1) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff0e,	// (0x0005fed1) cell_ai5_widget_list_row_pane_t

0xf37c,	// (0x0005f33f) main_fep_vtchi_ss_pane

0xa2d3,	// (0x0005a296) popup_fep_char_pre_window

0xa2db,	// (0x0005a29e) popup_fep_ituss_window

0xa2e6,	// (0x0005a2a9) popup_fep_vkbss_window

0xa2f1,	// (0x0005a2b4) grid_vkbss_keypad_pane_ParamLimits

0xa2f1,	// (0x0005a2b4) grid_vkbss_keypad_pane

0xa301,	// (0x0005a2c4) ituss_keypad_pane

0xa309,	// (0x0005a2cc) aid_vkbss_key_offset_ParamLimits

0xa309,	// (0x0005a2cc) aid_vkbss_key_offset

0xa318,	// (0x0005a2db) cell_vkbss_key_pane_ParamLimits

0xa318,	// (0x0005a2db) cell_vkbss_key_pane

0xa32e,	// (0x0005a2f1) bg_cell_vkbss_key_g1_ParamLimits

0xa32e,	// (0x0005a2f1) bg_cell_vkbss_key_g1

0xa33a,	// (0x0005a2fd) cell_vkbss_key_3p_pane_ParamLimits

0xa33a,	// (0x0005a2fd) cell_vkbss_key_3p_pane

0xa354,	// (0x0005a317) cell_vkbss_key_g1_ParamLimits

0xa354,	// (0x0005a317) cell_vkbss_key_g1

0xa36e,	// (0x0005a331) cell_vkbss_key_t1_ParamLimits

0xa36e,	// (0x0005a331) cell_vkbss_key_t1

0xa399,	// (0x0005a35c) cell_ituss_key_pane_ParamLimits

0xa399,	// (0x0005a35c) cell_ituss_key_pane

0xa3a8,	// (0x0005a36b) bg_cell_ituss_key_g1_ParamLimits

0xa3a8,	// (0x0005a36b) bg_cell_ituss_key_g1

0xa3b4,	// (0x0005a377) cell_ituss_key_pane_g1_ParamLimits

0xa3b4,	// (0x0005a377) cell_ituss_key_pane_g1

0xa3c0,	// (0x0005a383) cell_ituss_key_pane_g2_ParamLimits

0xa3c0,	// (0x0005a383) cell_ituss_key_pane_g2

0x0001,

0xff13,	// (0x0005fed6) cell_ituss_key_pane_g_ParamLimits

0xff13,	// (0x0005fed6) cell_ituss_key_pane_g

0xa3d4,	// (0x0005a397) cell_ituss_key_t1_ParamLimits

0xa3d4,	// (0x0005a397) cell_ituss_key_t1

0xa3f2,	// (0x0005a3b5) cell_ituss_key_t2_ParamLimits

0xa3f2,	// (0x0005a3b5) cell_ituss_key_t2

0xa411,	// (0x0005a3d4) cell_ituss_key_t3_ParamLimits

0xa411,	// (0x0005a3d4) cell_ituss_key_t3

0xa430,	// (0x0005a3f3) cell_ituss_key_t4_ParamLimits

0xa430,	// (0x0005a3f3) cell_ituss_key_t4

0x0003,

0xff18,	// (0x0005fedb) cell_ituss_key_t_ParamLimits

0xff18,	// (0x0005fedb) cell_ituss_key_t

0xa44f,	// (0x0005a412) cell_vkbss_key_3p_pane_g1

0xa457,	// (0x0005a41a) cell_vkbss_key_3p_pane_g2

0xa45f,	// (0x0005a422) cell_vkbss_key_3p_pane_g3

0x0002,

0xff21,	// (0x0005fee4) cell_vkbss_key_3p_pane_g

0x2167,	// (0x0005212a) bg_popup_fep_char_preview_window_cp02

0xa467,	// (0x0005a42a) popup_fep_char_pre_window_t1

0xebc6,	// (0x0005eb89) main_ai5_sk_pane

0x9e08,	// (0x00059dcb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9e14,	// (0x00059dd7) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9e28,	// (0x00059deb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9e37,	// (0x00059dfa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef9,	// (0x0005febc) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9e4a,	// (0x00059e0d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fc9,	// (0x00052f8c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2cb,	// (0x0005f28e) main_ai5_sk_pane_g1
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
