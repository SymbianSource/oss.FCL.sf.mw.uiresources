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

#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0001743c };

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
0xa4d3,	// (0x0002190f) Screen

0xa4e7,	// (0x00021923) application_window_ParamLimits

0xa4e7,	// (0x00021923) application_window

0xa501,	// (0x0002193d) screen_g1

0x812e,	// (0x0001f56a) area_bottom_pane_ParamLimits

0x812e,	// (0x0001f56a) area_bottom_pane

0x81ee,	// (0x0001f62a) area_top_pane_ParamLimits

0x81ee,	// (0x0001f62a) area_top_pane

0x8282,	// (0x0001f6be) main_pane_ParamLimits

0x8282,	// (0x0001f6be) main_pane

0xa50b,	// (0x00021947) misc_graphics

0xbe69,	// (0x000232a5) battery_pane_ParamLimits

0xbe69,	// (0x000232a5) battery_pane

0xcb3e,	// (0x00023f7a) bg_status_flat_pane_g8

0xcb46,	// (0x00023f82) bg_status_flat_pane_g9

0xbf2b,	// (0x00023367) context_pane_ParamLimits

0xbf2b,	// (0x00023367) context_pane

0xc041,	// (0x0002347d) navi_pane_ParamLimits

0xc041,	// (0x0002347d) navi_pane

0xc0bf,	// (0x000234fb) signal_pane_ParamLimits

0xc0bf,	// (0x000234fb) signal_pane

0x0008,

0xf878,	// (0x00026cb4) bg_status_flat_pane_g

0xc12c,	// (0x00023568) status_pane_g1_ParamLimits

0xc12c,	// (0x00023568) status_pane_g1

0xc140,	// (0x0002357c) status_pane_g2_ParamLimits

0xc140,	// (0x0002357c) status_pane_g2

0xc14c,	// (0x00023588) status_pane_g3_ParamLimits

0xc14c,	// (0x00023588) status_pane_g3

0x0004,

0xf7a6,	// (0x00026be2) status_pane_g_ParamLimits

0xf7a6,	// (0x00026be2) status_pane_g

0xc180,	// (0x000235bc) title_pane_ParamLimits

0xc180,	// (0x000235bc) title_pane

0xc1bd,	// (0x000235f9) uni_indicator_pane_ParamLimits

0xc1bd,	// (0x000235f9) uni_indicator_pane

0xbd8d,	// (0x000231c9) bg_list_pane_ParamLimits

0xbd8d,	// (0x000231c9) bg_list_pane

0x777c,	// (0x0001ebb8) find_pane

0xbdad,	// (0x000231e9) listscroll_app_pane_ParamLimits

0xbdad,	// (0x000231e9) listscroll_app_pane

0xbdb9,	// (0x000231f5) listscroll_form_pane

0x7784,	// (0x0001ebc0) listscroll_gen_pane_ParamLimits

0x7784,	// (0x0001ebc0) listscroll_gen_pane

0xbdb9,	// (0x000231f5) listscroll_set_pane

0xb030,	// (0x0002246c) main_idle_act_pane

0xba97,	// (0x00022ed3) main_idle_trad_pane

0xba97,	// (0x00022ed3) main_list_empty_pane

0xbdd3,	// (0x0002320f) main_midp_pane

0xbddf,	// (0x0002321b) main_pane_g1_ParamLimits

0xbddf,	// (0x0002321b) main_pane_g1

0x8b2c,	// (0x0001ff68) popup_ai_message_window_ParamLimits

0x8b2c,	// (0x0001ff68) popup_ai_message_window

0x8bd0,	// (0x0002000c) popup_fep_china_uni_window_ParamLimits

0x8bd0,	// (0x0002000c) popup_fep_china_uni_window

0x8c2a,	// (0x00020066) popup_fep_japan_candidate_window_ParamLimits

0x8c2a,	// (0x00020066) popup_fep_japan_candidate_window

0x8c48,	// (0x00020084) popup_fep_japan_predictive_window_ParamLimits

0x8c48,	// (0x00020084) popup_fep_japan_predictive_window

0x8c78,	// (0x000200b4) popup_find_window

0x8c85,	// (0x000200c1) popup_grid_graphic_window_ParamLimits

0x8c85,	// (0x000200c1) popup_grid_graphic_window

0x8cad,	// (0x000200e9) popup_large_graphic_colour_window

0x8cd3,	// (0x0002010f) popup_menu_window_ParamLimits

0x8cd3,	// (0x0002010f) popup_menu_window

0x8e8d,	// (0x000202c9) popup_note_image_window

0x8e79,	// (0x000202b5) popup_note_wait_window_ParamLimits

0x8e79,	// (0x000202b5) popup_note_wait_window

0x8e79,	// (0x000202b5) popup_note_window_ParamLimits

0x8e79,	// (0x000202b5) popup_note_window

0x8ee3,	// (0x0002031f) popup_query_code_window_ParamLimits

0x8ee3,	// (0x0002031f) popup_query_code_window

0x8ef7,	// (0x00020333) popup_query_data_code_window_ParamLimits

0x8ef7,	// (0x00020333) popup_query_data_code_window

0x8f12,	// (0x0002034e) popup_query_data_window_ParamLimits

0x8f12,	// (0x0002034e) popup_query_data_window

0x8f2c,	// (0x00020368) popup_query_sat_info_window_ParamLimits

0x8f2c,	// (0x00020368) popup_query_sat_info_window

0x8f65,	// (0x000203a1) popup_snote_single_graphic_window_ParamLimits

0x8f65,	// (0x000203a1) popup_snote_single_graphic_window

0x8f65,	// (0x000203a1) popup_snote_single_text_window_ParamLimits

0x8f65,	// (0x000203a1) popup_snote_single_text_window

0x8f7a,	// (0x000203b6) popup_sub_window_general

0x90a8,	// (0x000204e4) popup_window_general_ParamLimits

0x90a8,	// (0x000204e4) popup_window_general

0xbded,	// (0x00023229) power_save_pane

0x89ca,	// (0x0001fe06) control_pane_g1_ParamLimits

0x89ca,	// (0x0001fe06) control_pane_g1

0x89f1,	// (0x0001fe2d) control_pane_g2_ParamLimits

0x89f1,	// (0x0001fe2d) control_pane_g2

0xbd50,	// (0x0002318c) control_pane_g3_ParamLimits

0xbd50,	// (0x0002318c) control_pane_g3

0x0007,

0xf78e,	// (0x00026bca) control_pane_g_ParamLimits

0xf78e,	// (0x00026bca) control_pane_g

0x8a39,	// (0x0001fe75) control_pane_t1_ParamLimits

0x8a39,	// (0x0001fe75) control_pane_t1

0x8a85,	// (0x0001fec1) control_pane_t2_ParamLimits

0x8a85,	// (0x0001fec1) control_pane_t2

0x0002,

0xf79f,	// (0x00026bdb) control_pane_t_ParamLimits

0xf79f,	// (0x00026bdb) control_pane_t

0xbc71,	// (0x000230ad) navi_navi_volume_pane_cp1

0xbc7a,	// (0x000230b6) status_small_icon_pane

0xbc82,	// (0x000230be) status_small_pane_g1_ParamLimits

0xbc82,	// (0x000230be) status_small_pane_g1

0xbcb6,	// (0x000230f2) status_small_pane_g2_ParamLimits

0xbcb6,	// (0x000230f2) status_small_pane_g2

0xbcc2,	// (0x000230fe) status_small_pane_g3_ParamLimits

0xbcc2,	// (0x000230fe) status_small_pane_g3

0xbcce,	// (0x0002310a) status_small_pane_g4_ParamLimits

0xbcce,	// (0x0002310a) status_small_pane_g4

0xbcda,	// (0x00023116) status_small_pane_g5_ParamLimits

0xbcda,	// (0x00023116) status_small_pane_g5

0xbce9,	// (0x00023125) status_small_pane_g6_ParamLimits

0xbce9,	// (0x00023125) status_small_pane_g6

0x0007,

0xf77d,	// (0x00026bb9) status_small_pane_g_ParamLimits

0xf77d,	// (0x00026bb9) status_small_pane_g

0xbd19,	// (0x00023155) status_small_pane_t1

0xbd3c,	// (0x00023178) status_small_wait_pane_ParamLimits

0xbd3c,	// (0x00023178) status_small_wait_pane

0xb522,	// (0x0002295e) aid_levels_signal_ParamLimits

0xb522,	// (0x0002295e) aid_levels_signal

0xb534,	// (0x00022970) signal_pane_g1_ParamLimits

0xb534,	// (0x00022970) signal_pane_g1

0xb549,	// (0x00022985) signal_pane_g2_ParamLimits

0xb549,	// (0x00022985) signal_pane_g2

0x0003,

0xf70e,	// (0x00026b4a) signal_pane_g_ParamLimits

0xf70e,	// (0x00026b4a) signal_pane_g

0xb583,	// (0x000229bf) context_pane_g1

0xa515,	// (0x00021951) title_pane_g1

0xa54b,	// (0x00021987) title_pane_t1

0xa5b3,	// (0x000219ef) title_pane_t2

0xa5d9,	// (0x00021a15) title_pane_t3

0x0002,

0xf55d,	// (0x00026999) title_pane_t

0xc1d5,	// (0x00023611) aid_levels_battery_ParamLimits

0xc1d5,	// (0x00023611) aid_levels_battery

0xc1e9,	// (0x00023625) battery_pane_g1_ParamLimits

0xc1e9,	// (0x00023625) battery_pane_g1

0xc1ff,	// (0x0002363b) battery_pane_g2_ParamLimits

0xc1ff,	// (0x0002363b) battery_pane_g2

0x0001,

0xf7b1,	// (0x00026bed) battery_pane_g_ParamLimits

0xf7b1,	// (0x00026bed) battery_pane_g

0xd472,	// (0x000248ae) uni_indicator_pane_g1

0xd487,	// (0x000248c3) uni_indicator_pane_g2

0xd49d,	// (0x000248d9) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x00026d5c) uni_indicator_pane_g

0xb915,	// (0x00022d51) navi_icon_pane_ParamLimits

0xb915,	// (0x00022d51) navi_icon_pane

0xb85e,	// (0x00022c9a) navi_midp_pane

0xb931,	// (0x00022d6d) navi_navi_pane

0xb93b,	// (0x00022d77) navi_text_pane_ParamLimits

0xb93b,	// (0x00022d77) navi_text_pane

0xa501,	// (0x0002193d) status_small_wait_pane_g1

0xa9fc,	// (0x00021e38) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x00026d57) status_small_wait_pane_g

0xd199,	// (0x000245d5) navi_navi_icon_text_pane

0xd1a1,	// (0x000245dd) navi_navi_pane_g1_ParamLimits

0xd1a1,	// (0x000245dd) navi_navi_pane_g1

0xd1b3,	// (0x000245ef) navi_navi_pane_g2_ParamLimits

0xd1b3,	// (0x000245ef) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x00026d25) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x00026d25) navi_navi_pane_g

0xd1c5,	// (0x00024601) navi_navi_tabs_pane

0xd1ce,	// (0x0002460a) navi_navi_text_pane

0xd199,	// (0x000245d5) navi_navi_volume_pane

0xd175,	// (0x000245b1) navi_text_pane_t1

0xd169,	// (0x000245a5) navi_icon_pane_g1

0xd0bc,	// (0x000244f8) navi_navi_text_pane_t1

0x9338,	// (0x00020774) navi_navi_volume_pane_g1

0x9340,	// (0x0002077c) volume_small_pane

0xd022,	// (0x0002445e) navi_navi_icon_text_pane_g1

0xd02a,	// (0x00024466) navi_navi_icon_text_pane_t1

0xb931,	// (0x00022d6d) navi_tabs_2_long_pane

0xb931,	// (0x00022d6d) navi_tabs_2_pane

0xb931,	// (0x00022d6d) navi_tabs_3_long_pane

0xb931,	// (0x00022d6d) navi_tabs_3_pane

0xb931,	// (0x00022d6d) navi_tabs_4_pane

0x9318,	// (0x00020754) tabs_2_active_pane_ParamLimits

0x9318,	// (0x00020754) tabs_2_active_pane

0x9328,	// (0x00020764) tabs_2_passive_pane_ParamLimits

0x9328,	// (0x00020764) tabs_2_passive_pane

0x92e6,	// (0x00020722) tabs_3_active_pane_ParamLimits

0x92e6,	// (0x00020722) tabs_3_active_pane

0x92f6,	// (0x00020732) tabs_3_passive_pane_ParamLimits

0x92f6,	// (0x00020732) tabs_3_passive_pane

0x9307,	// (0x00020743) tabs_3_passive_pane_cp_ParamLimits

0x9307,	// (0x00020743) tabs_3_passive_pane_cp

0x92a2,	// (0x000206de) tabs_4_active_pane_ParamLimits

0x92a2,	// (0x000206de) tabs_4_active_pane

0x92b3,	// (0x000206ef) tabs_4_passive_pane_ParamLimits

0x92b3,	// (0x000206ef) tabs_4_passive_pane

0x92c4,	// (0x00020700) tabs_4_passive_pane_cp_ParamLimits

0x92c4,	// (0x00020700) tabs_4_passive_pane_cp

0x92d5,	// (0x00020711) tabs_4_passive_pane_cp2_ParamLimits

0x92d5,	// (0x00020711) tabs_4_passive_pane_cp2

0x927e,	// (0x000206ba) tabs_2_long_active_pane_ParamLimits

0x927e,	// (0x000206ba) tabs_2_long_active_pane

0x9290,	// (0x000206cc) tabs_2_long_passive_pane_ParamLimits

0x9290,	// (0x000206cc) tabs_2_long_passive_pane

0x9245,	// (0x00020681) tabs_3_long_active_pane_ParamLimits

0x9245,	// (0x00020681) tabs_3_long_active_pane

0x9258,	// (0x00020694) tabs_3_long_passive_pane_ParamLimits

0x9258,	// (0x00020694) tabs_3_long_passive_pane

0x926b,	// (0x000206a7) tabs_3_long_passive_pane_cp_ParamLimits

0x926b,	// (0x000206a7) tabs_3_long_passive_pane_cp

0x91eb,	// (0x00020627) volume_small_pane_g1

0x91f4,	// (0x00020630) volume_small_pane_g2

0x91fd,	// (0x00020639) volume_small_pane_g3

0x9206,	// (0x00020642) volume_small_pane_g4

0x920f,	// (0x0002064b) volume_small_pane_g5

0x9218,	// (0x00020654) volume_small_pane_g6

0x9221,	// (0x0002065d) volume_small_pane_g7

0x922a,	// (0x00020666) volume_small_pane_g8

0x9233,	// (0x0002066f) volume_small_pane_g9

0x923c,	// (0x00020678) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x00026cf1) volume_small_pane_g

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp2_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp2

0xa5f9,	// (0x00021a35) tabs_3_active_pane_g1

0xa601,	// (0x00021a3d) tabs_3_active_pane_t1

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp2_ParamLimits

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp2

0xa5f9,	// (0x00021a35) tabs_3_passive_pane_g1

0xa601,	// (0x00021a3d) tabs_3_passive_pane_t1

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp3_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp3

0xa613,	// (0x00021a4f) tabs_4_active_pane_g1

0xa61b,	// (0x00021a57) tabs_4_active_pane_t1

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp3_ParamLimits

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp3

0xa613,	// (0x00021a4f) tabs_4_1_passive_pane_g1

0xa61b,	// (0x00021a57) tabs_4_1_passive_pane_t1

0xbdd3,	// (0x0002320f) list_highlight_pane_cp2

0xd6f6,	// (0x00024b32) list_set_pane_ParamLimits

0xd6f6,	// (0x00024b32) list_set_pane

0xd79c,	// (0x00024bd8) main_pane_set_t1_ParamLimits

0xd79c,	// (0x00024bd8) main_pane_set_t1

0xd7bc,	// (0x00024bf8) main_pane_set_t2_ParamLimits

0xd7bc,	// (0x00024bf8) main_pane_set_t2

0xd7d0,	// (0x00024c0c) main_pane_set_t3_ParamLimits

0xd7d0,	// (0x00024c0c) main_pane_set_t3

0xd7e2,	// (0x00024c1e) main_pane_set_t4_ParamLimits

0xd7e2,	// (0x00024c1e) main_pane_set_t4

0x0003,

0xf985,	// (0x00026dc1) main_pane_set_t_ParamLimits

0xf985,	// (0x00026dc1) main_pane_set_t

0xd7f4,	// (0x00024c30) setting_code_pane

0xd7fe,	// (0x00024c3a) setting_slider_graphic_pane

0xd7fe,	// (0x00024c3a) setting_slider_pane

0xd7fe,	// (0x00024c3a) setting_text_pane

0xd7fe,	// (0x00024c3a) setting_volume_pane

0x84b9,	// (0x0001f8f5) volume_set_pane

0xa5eb,	// (0x00021a27) bg_set_opt_pane_cp

0x84c1,	// (0x0001f8fd) setting_slider_pane_t1

0x84da,	// (0x0001f916) setting_slider_pane_t2

0x84f4,	// (0x0001f930) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000269a0) setting_slider_pane_t

0x850c,	// (0x0001f948) slider_set_pane

0xa50b,	// (0x00021947) bg_set_opt_pane_cp2

0xa62d,	// (0x00021a69) setting_slider_graphic_pane_g1

0x8522,	// (0x0001f95e) setting_slider_graphic_pane_t1

0x8532,	// (0x0001f96e) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000269a7) setting_slider_graphic_pane_t

0x8542,	// (0x0001f97e) slider_set_pane_cp

0xa50b,	// (0x00021947) input_focus_pane_cp1

0xd6b5,	// (0x00024af1) list_set_text_pane

0xa501,	// (0x0002193d) setting_text_pane_g1

0xa50b,	// (0x00021947) input_focus_pane_cp2

0xa501,	// (0x0002193d) setting_code_pane_g1

0xa636,	// (0x00021a72) setting_code_pane_t1

0x6fef,	// (0x0001e42b) set_text_pane_t1_ParamLimits

0x6fef,	// (0x0001e42b) set_text_pane_t1

0xaea9,	// (0x000222e5) set_opt_bg_pane_g1

0xaeb1,	// (0x000222ed) set_opt_bg_pane_g2

0xd695,	// (0x00024ad1) set_opt_bg_pane_g3

0xaec1,	// (0x000222fd) set_opt_bg_pane_g4

0xaec9,	// (0x00022305) set_opt_bg_pane_g5

0xaed1,	// (0x0002230d) set_opt_bg_pane_g6

0xd69d,	// (0x00024ad9) set_opt_bg_pane_g7

0xd6a5,	// (0x00024ae1) set_opt_bg_pane_g8

0xd6ad,	// (0x00024ae9) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x00026dae) set_opt_bg_pane_g

0xd688,	// (0x00024ac4) slider_set_pane_g1

0x93ad,	// (0x000207e9) slider_set_pane_g2

0x0006,

0xf963,	// (0x00026d9f) slider_set_pane_g

0x9349,	// (0x00020785) volume_set_pane_g1

0x9351,	// (0x0002078d) volume_set_pane_g2

0x9359,	// (0x00020795) volume_set_pane_g3

0x9361,	// (0x0002079d) volume_set_pane_g4

0x9369,	// (0x000207a5) volume_set_pane_g5

0x9371,	// (0x000207ad) volume_set_pane_g6

0x9379,	// (0x000207b5) volume_set_pane_g7

0x9381,	// (0x000207bd) volume_set_pane_g8

0x9389,	// (0x000207c5) volume_set_pane_g9

0x9391,	// (0x000207cd) volume_set_pane_g10

0x0009,

0xf93b,	// (0x00026d77) volume_set_pane_g

0xa644,	// (0x00021a80) indicator_pane_ParamLimits

0xa644,	// (0x00021a80) indicator_pane

0xa650,	// (0x00021a8c) main_idle_pane_g2_ParamLimits

0xa650,	// (0x00021a8c) main_idle_pane_g2

0xa678,	// (0x00021ab4) main_pane_idle_g1_ParamLimits

0xa678,	// (0x00021ab4) main_pane_idle_g1

0xa685,	// (0x00021ac1) popup_clock_digital_analogue_window_ParamLimits

0xa685,	// (0x00021ac1) popup_clock_digital_analogue_window

0xa69c,	// (0x00021ad8) soft_indicator_pane_ParamLimits

0xa69c,	// (0x00021ad8) soft_indicator_pane

0xa6a8,	// (0x00021ae4) wallpaper_pane_ParamLimits

0xa6a8,	// (0x00021ae4) wallpaper_pane

0xa501,	// (0x0002193d) wallpaper_pane_g1

0xa6bc,	// (0x00021af8) indicator_pane_g1_ParamLimits

0xa6bc,	// (0x00021af8) indicator_pane_g1

0xda8b,	// (0x00024ec7) navi_navi_icon_text_pane_srt_g1

0xa6d7,	// (0x00021b13) soft_indicator_pane_t1

0xa6f1,	// (0x00021b2d) aid_ps_area_pane

0xa702,	// (0x00021b3e) aid_ps_clock_pane

0xa710,	// (0x00021b4c) aid_ps_indicator_pane

0xa71c,	// (0x00021b58) indicator_ps_pane_ParamLimits

0xa71c,	// (0x00021b58) indicator_ps_pane

0xa72b,	// (0x00021b67) power_save_pane_g1_ParamLimits

0xa72b,	// (0x00021b67) power_save_pane_g1

0xa737,	// (0x00021b73) power_save_pane_g2_ParamLimits

0xa737,	// (0x00021b73) power_save_pane_g2

0x80e2,	// (0x0001f51e) aid_navinavi_width_pane

0xa6f1,	// (0x00021b2d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000269ac) power_save_pane_g_ParamLimits

0xf570,	// (0x000269ac) power_save_pane_g

0xa745,	// (0x00021b81) power_save_pane_t1_ParamLimits

0xa745,	// (0x00021b81) power_save_pane_t1

0xa702,	// (0x00021b3e) aid_ps_clock_pane_ParamLimits

0xa710,	// (0x00021b4c) aid_ps_indicator_pane_ParamLimits

0xa757,	// (0x00021b93) power_save_pane_t4_ParamLimits

0xa757,	// (0x00021b93) power_save_pane_t4

0x0001,

0xf575,	// (0x000269b1) power_save_pane_t_ParamLimits

0xf575,	// (0x000269b1) power_save_pane_t

0xa781,	// (0x00021bbd) power_save_t3_ParamLimits

0xa781,	// (0x00021bbd) power_save_t3

0xa76c,	// (0x00021ba8) power_save_t2_ParamLimits

0xa76c,	// (0x00021ba8) power_save_t2

0xa796,	// (0x00021bd2) indicator_ps_pane_g1

0xa79f,	// (0x00021bdb) ai_gene_pane_ParamLimits

0xa79f,	// (0x00021bdb) ai_gene_pane

0xa7ab,	// (0x00021be7) ai_links_pane_ParamLimits

0xa7ab,	// (0x00021be7) ai_links_pane

0xa7b7,	// (0x00021bf3) indicator_pane_cp1_ParamLimits

0xa7b7,	// (0x00021bf3) indicator_pane_cp1

0xa7c3,	// (0x00021bff) main_pane_idle_g1_cp_ParamLimits

0xa7c3,	// (0x00021bff) main_pane_idle_g1_cp

0xa7cf,	// (0x00021c0b) popup_ai_links_title_window

0xa7d8,	// (0x00021c14) soft_indicator_pane_cp1_ParamLimits

0xa7d8,	// (0x00021c14) soft_indicator_pane_cp1

0xd460,	// (0x0002489c) ai_links_pane_g1

0xd469,	// (0x000248a5) grid_ai_links_pane

0xd443,	// (0x0002487f) ai_gene_pane_1

0xd44e,	// (0x0002488a) ai_gene_pane_2

0xd457,	// (0x00024893) list_highlight_pane_cp4

0xd427,	// (0x00024863) cell_ai_link_pane_ParamLimits

0xd427,	// (0x00024863) cell_ai_link_pane

0xd41f,	// (0x0002485b) cell_ai_link_pane_g1

0xa9fc,	// (0x00021e38) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x00026d52) cell_ai_link_pane_g

0xa50b,	// (0x00021947) grid_highlight_cp2

0xa50b,	// (0x00021947) bg_popup_sub_pane_cp1

0xa7f2,	// (0x00021c2e) popup_ai_links_title_window_t1

0xd36f,	// (0x000247ab) ai_gene_pane_1_g1_ParamLimits

0xd36f,	// (0x000247ab) ai_gene_pane_1_g1

0xd37b,	// (0x000247b7) ai_gene_pane_1_g2_ParamLimits

0xd37b,	// (0x000247b7) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x00026d48) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x00026d48) ai_gene_pane_1_g

0xd388,	// (0x000247c4) ai_gene_pane_1_t1_ParamLimits

0xd388,	// (0x000247c4) ai_gene_pane_1_t1

0xd3bc,	// (0x000247f8) grid_ai_soft_ind_pane

0xd35a,	// (0x00024796) ai_gene_pane_2_t1_ParamLimits

0xd35a,	// (0x00024796) ai_gene_pane_2_t1

0xa801,	// (0x00021c3d) main_pane_empty_t1_ParamLimits

0xa801,	// (0x00021c3d) main_pane_empty_t1

0xa819,	// (0x00021c55) main_pane_empty_t2_ParamLimits

0xa819,	// (0x00021c55) main_pane_empty_t2

0xa82e,	// (0x00021c6a) main_pane_empty_t3_ParamLimits

0xa82e,	// (0x00021c6a) main_pane_empty_t3

0xa840,	// (0x00021c7c) main_pane_empty_t4_ParamLimits

0xa840,	// (0x00021c7c) main_pane_empty_t4

0xa852,	// (0x00021c8e) main_pane_empty_t5_ParamLimits

0xa852,	// (0x00021c8e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000269b6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000269b6) main_pane_empty_t

0xaefa,	// (0x00022336) bg_popup_window_pane_ParamLimits

0xaefa,	// (0x00022336) bg_popup_window_pane

0xd0ca,	// (0x00024506) find_popup_pane_cp2_ParamLimits

0xd0ca,	// (0x00024506) find_popup_pane_cp2

0xd0d6,	// (0x00024512) heading_pane_ParamLimits

0xd0d6,	// (0x00024512) heading_pane

0xa50b,	// (0x00021947) bg_popup_sub_pane

0xd044,	// (0x00024480) bg_popup_window_pane_g1_ParamLimits

0xd044,	// (0x00024480) bg_popup_window_pane_g1

0xd050,	// (0x0002448c) bg_popup_window_pane_g2_ParamLimits

0xd050,	// (0x0002448c) bg_popup_window_pane_g2

0xd05c,	// (0x00024498) bg_popup_window_pane_g3_ParamLimits

0xd05c,	// (0x00024498) bg_popup_window_pane_g3

0xd068,	// (0x000244a4) bg_popup_window_pane_g4_ParamLimits

0xd068,	// (0x000244a4) bg_popup_window_pane_g4

0xd074,	// (0x000244b0) bg_popup_window_pane_g5_ParamLimits

0xd074,	// (0x000244b0) bg_popup_window_pane_g5

0xd080,	// (0x000244bc) bg_popup_window_pane_g6_ParamLimits

0xd080,	// (0x000244bc) bg_popup_window_pane_g6

0xd08c,	// (0x000244c8) bg_popup_window_pane_g7_ParamLimits

0xd08c,	// (0x000244c8) bg_popup_window_pane_g7

0xd098,	// (0x000244d4) bg_popup_window_pane_g8_ParamLimits

0xd098,	// (0x000244d4) bg_popup_window_pane_g8

0xd0a4,	// (0x000244e0) bg_popup_window_pane_g9_ParamLimits

0xd0a4,	// (0x000244e0) bg_popup_window_pane_g9

0xd0b0,	// (0x000244ec) bg_popup_window_pane_g10_ParamLimits

0xd0b0,	// (0x000244ec) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x00026d10) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x00026d10) bg_popup_window_pane_g

0xcfd9,	// (0x00024415) bg_popup_heading_pane_ParamLimits

0xcfd9,	// (0x00024415) bg_popup_heading_pane

0x93f3,	// (0x0002082f) tabs_4_passive_pane_cp_srt_ParamLimits

0x93f3,	// (0x0002082f) tabs_4_passive_pane_cp_srt

0x9405,	// (0x00020841) tabs_4_passive_pane_srt_ParamLimits

0xcfed,	// (0x00024429) heading_pane_g2

0x9405,	// (0x00020841) tabs_4_passive_pane_srt

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp3_srt_ParamLimits

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp3_srt

0xcff5,	// (0x00024431) heading_pane_t1_ParamLimits

0xcff5,	// (0x00024431) heading_pane_t1

0xd00c,	// (0x00024448) heading_pane_t2_ParamLimits

0xd00c,	// (0x00024448) heading_pane_t2

0x0001,

0xf8cf,	// (0x00026d0b) heading_pane_t_ParamLimits

0xf8cf,	// (0x00026d0b) heading_pane_t

0xcb06,	// (0x00023f42) bg_popup_heading_pane_g1

0xcbb5,	// (0x00023ff1) bg_popup_heading_pane_g2

0xcbbf,	// (0x00023ffb) bg_popup_heading_pane_g3

0xcbc9,	// (0x00024005) bg_popup_heading_pane_g4

0xcbd3,	// (0x0002400f) bg_popup_heading_pane_g5

0xcbdd,	// (0x00024019) bg_popup_heading_pane_g6

0xcbe5,	// (0x00024021) bg_popup_heading_pane_g7

0xcbed,	// (0x00024029) bg_popup_heading_pane_g8

0xcbf7,	// (0x00024033) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x00026cc7) bg_popup_heading_pane_g

0xc2d7,	// (0x00023713) bg_popup_sub_pane_g1

0xc2df,	// (0x0002371b) bg_popup_sub_pane_g2

0xc2e7,	// (0x00023723) bg_popup_sub_pane_g3

0xc2ef,	// (0x0002372b) bg_popup_sub_pane_g4

0xc2f7,	// (0x00023733) bg_popup_sub_pane_g5

0xc2ff,	// (0x0002373b) bg_popup_sub_pane_g6

0xc307,	// (0x00023743) bg_popup_sub_pane_g7

0xc30f,	// (0x0002374b) bg_popup_sub_pane_g8

0xc317,	// (0x00023753) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x00026ca1) bg_popup_sub_pane_g

0xa866,	// (0x00021ca2) bg_popup_window_pane_cp5_ParamLimits

0xa866,	// (0x00021ca2) bg_popup_window_pane_cp5

0xa882,	// (0x00021cbe) popup_note_window_g1_ParamLimits

0xa882,	// (0x00021cbe) popup_note_window_g1

0xa88e,	// (0x00021cca) popup_note_window_t1_ParamLimits

0xa88e,	// (0x00021cca) popup_note_window_t1

0xa8a0,	// (0x00021cdc) popup_note_window_t2_ParamLimits

0xa8a0,	// (0x00021cdc) popup_note_window_t2

0xa8b2,	// (0x00021cee) popup_note_window_t3_ParamLimits

0xa8b2,	// (0x00021cee) popup_note_window_t3

0xa8c4,	// (0x00021d00) popup_note_window_t4_ParamLimits

0xa8c4,	// (0x00021d00) popup_note_window_t4

0xa8ec,	// (0x00021d28) popup_note_window_t5_ParamLimits

0xa8ec,	// (0x00021d28) popup_note_window_t5

0x0004,

0xf585,	// (0x000269c1) popup_note_window_t_ParamLimits

0xf585,	// (0x000269c1) popup_note_window_t

0xa910,	// (0x00021d4c) bg_popup_window_pane_cp6_ParamLimits

0xa910,	// (0x00021d4c) bg_popup_window_pane_cp6

0xca7a,	// (0x00023eb6) popup_note_image_window_g1_ParamLimits

0xca7a,	// (0x00023eb6) popup_note_image_window_g1

0xca86,	// (0x00023ec2) popup_note_image_window_g2_ParamLimits

0xca86,	// (0x00023ec2) popup_note_image_window_g2

0x0001,

0xf859,	// (0x00026c95) popup_note_image_window_g_ParamLimits

0xf859,	// (0x00026c95) popup_note_image_window_g

0xca9f,	// (0x00023edb) popup_note_image_window_t1_ParamLimits

0xca9f,	// (0x00023edb) popup_note_image_window_t1

0xcab8,	// (0x00023ef4) popup_note_image_window_t2_ParamLimits

0xcab8,	// (0x00023ef4) popup_note_image_window_t2

0xcad1,	// (0x00023f0d) popup_note_image_window_t3_ParamLimits

0xcad1,	// (0x00023f0d) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x00026c9a) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x00026c9a) popup_note_image_window_t

0xc93b,	// (0x00023d77) bg_popup_window_pane_cp7_ParamLimits

0xc93b,	// (0x00023d77) bg_popup_window_pane_cp7

0xc96b,	// (0x00023da7) popup_note_wait_window_g1_ParamLimits

0xc96b,	// (0x00023da7) popup_note_wait_window_g1

0xc977,	// (0x00023db3) popup_note_wait_window_g2_ParamLimits

0xc977,	// (0x00023db3) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x00026c83) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x00026c83) popup_note_wait_window_g

0xc98f,	// (0x00023dcb) popup_note_wait_window_t1_ParamLimits

0xc98f,	// (0x00023dcb) popup_note_wait_window_t1

0xc9b6,	// (0x00023df2) popup_note_wait_window_t2_ParamLimits

0xc9b6,	// (0x00023df2) popup_note_wait_window_t2

0xc9d3,	// (0x00023e0f) popup_note_wait_window_t3_ParamLimits

0xc9d3,	// (0x00023e0f) popup_note_wait_window_t3

0xc9e6,	// (0x00023e22) popup_note_wait_window_t4_ParamLimits

0xc9e6,	// (0x00023e22) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x00026c8a) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x00026c8a) popup_note_wait_window_t

0xca0b,	// (0x00023e47) wait_bar_pane_ParamLimits

0xca0b,	// (0x00023e47) wait_bar_pane

0xa50b,	// (0x00021947) wait_anim_pane

0xa50b,	// (0x00021947) wait_border_pane

0xa501,	// (0x0002193d) wait_anim_pane_g1

0xa501,	// (0x0002193d) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00026b45) wait_anim_pane_g

0xc8df,	// (0x00023d1b) wait_border_pane_g1

0xc8ea,	// (0x00023d26) wait_border_pane_g2

0xc8f3,	// (0x00023d2f) wait_border_pane_g3

0x0002,

0xf840,	// (0x00026c7c) wait_border_pane_g

0xc74f,	// (0x00023b8b) bg_popup_window_pane_cp16_ParamLimits

0xc74f,	// (0x00023b8b) bg_popup_window_pane_cp16

0xc84f,	// (0x00023c8b) indicator_popup_pane_cp4_ParamLimits

0xc84f,	// (0x00023c8b) indicator_popup_pane_cp4

0xc863,	// (0x00023c9f) popup_query_data_window_t1_ParamLimits

0xc863,	// (0x00023c9f) popup_query_data_window_t1

0xc875,	// (0x00023cb1) popup_query_data_window_t2_ParamLimits

0xc875,	// (0x00023cb1) popup_query_data_window_t2

0xc88e,	// (0x00023cca) popup_query_data_window_t3_ParamLimits

0xc88e,	// (0x00023cca) popup_query_data_window_t3

0x0002,

0xf839,	// (0x00026c75) popup_query_data_window_t_ParamLimits

0xf839,	// (0x00026c75) popup_query_data_window_t

0xc8a8,	// (0x00023ce4) query_popup_data_pane_ParamLimits

0xc8a8,	// (0x00023ce4) query_popup_data_pane

0xc8bc,	// (0x00023cf8) query_popup_data_pane_cp1_ParamLimits

0xc8bc,	// (0x00023cf8) query_popup_data_pane_cp1

0xc74f,	// (0x00023b8b) bg_popup_window_pane_cp10_ParamLimits

0xc74f,	// (0x00023b8b) bg_popup_window_pane_cp10

0xc781,	// (0x00023bbd) indicator_popup_pane_ParamLimits

0xc781,	// (0x00023bbd) indicator_popup_pane

0xc7a3,	// (0x00023bdf) popup_query_code_window_t1_ParamLimits

0xc7a3,	// (0x00023bdf) popup_query_code_window_t1

0xc7bd,	// (0x00023bf9) popup_query_code_window_t2_ParamLimits

0xc7bd,	// (0x00023bf9) popup_query_code_window_t2

0xc806,	// (0x00023c42) popup_query_code_window_t3_ParamLimits

0xc806,	// (0x00023c42) popup_query_code_window_t3

0x0002,

0xf832,	// (0x00026c6e) popup_query_code_window_t_ParamLimits

0xf832,	// (0x00026c6e) popup_query_code_window_t

0xc835,	// (0x00023c71) query_popup_pane_ParamLimits

0xc835,	// (0x00023c71) query_popup_pane

0xa910,	// (0x00021d4c) bg_popup_window_pane_cp15_ParamLimits

0xa910,	// (0x00021d4c) bg_popup_window_pane_cp15

0xa92e,	// (0x00021d6a) indicator_popup_pane_cp1_ParamLimits

0xa92e,	// (0x00021d6a) indicator_popup_pane_cp1

0xa941,	// (0x00021d7d) indicator_popup_pane_cp2_ParamLimits

0xa941,	// (0x00021d7d) indicator_popup_pane_cp2

0xa954,	// (0x00021d90) popup_query_data_code_window_g1_ParamLimits

0xa954,	// (0x00021d90) popup_query_data_code_window_g1

0xa967,	// (0x00021da3) popup_query_data_code_window_t1_ParamLimits

0xa967,	// (0x00021da3) popup_query_data_code_window_t1

0xa979,	// (0x00021db5) popup_query_data_code_window_t2_ParamLimits

0xa979,	// (0x00021db5) popup_query_data_code_window_t2

0xa98b,	// (0x00021dc7) popup_query_data_code_window_t3_ParamLimits

0xa98b,	// (0x00021dc7) popup_query_data_code_window_t3

0xa9a1,	// (0x00021ddd) popup_query_data_code_window_t4_ParamLimits

0xa9a1,	// (0x00021ddd) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000269cc) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000269cc) popup_query_data_code_window_t

0xb8d3,	// (0x00022d0f) list_single_midp_graphic_pane_g3

0xa9b9,	// (0x00021df5) query_popup_data_pane_cp2_ParamLimits

0xa9cc,	// (0x00021e08) query_popup_pane_cp2_ParamLimits

0xa9cc,	// (0x00021e08) query_popup_pane_cp2

0xa50b,	// (0x00021947) bg_popup_window_pane_cp11

0xc747,	// (0x00023b83) heading_pane_cp5

0xaab4,	// (0x00021ef0) listscroll_popup_info_pane

0xa50b,	// (0x00021947) input_focus_pane_cp3

0xa9df,	// (0x00021e1b) query_popup_pane_t1

0xa9ed,	// (0x00021e29) list_popup_info_pane_ParamLimits

0xa9ed,	// (0x00021e29) list_popup_info_pane

0xa9fc,	// (0x00021e38) listscroll_popup_info_pane_g1

0xaa04,	// (0x00021e40) scroll_pane_cp7

0xaa0e,	// (0x00021e4a) popup_info_list_pane_t1_ParamLimits

0xaa0e,	// (0x00021e4a) popup_info_list_pane_t1

0xaa28,	// (0x00021e64) popup_info_list_pane_t2_ParamLimits

0xaa28,	// (0x00021e64) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000269d5) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000269d5) popup_info_list_pane_t

0xa50b,	// (0x00021947) bg_popup_window_pane_cp12

0xdaa5,	// (0x00024ee1) find_popup_pane

0xa5eb,	// (0x00021a27) bg_popup_window_pane_cp3

0xaa42,	// (0x00021e7e) heading_pane_cp3

0xaa4e,	// (0x00021e8a) listscroll_popup_graphic_pane

0xa50b,	// (0x00021947) bg_popup_window_pane_cp4

0xaaaa,	// (0x00021ee6) heading_pane_cp4

0xaab4,	// (0x00021ef0) listscroll_popup_colour_pane

0xaabc,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaabc,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane

0xaad0,	// (0x00021f0c) grid_large_graphic_colour_popup_pane_ParamLimits

0xaad0,	// (0x00021f0c) grid_large_graphic_colour_popup_pane

0xaaf8,	// (0x00021f34) listscroll_popup_colour_pane_g1_ParamLimits

0xaaf8,	// (0x00021f34) listscroll_popup_colour_pane_g1

0xab0f,	// (0x00021f4b) listscroll_popup_colour_pane_g2_ParamLimits

0xab0f,	// (0x00021f4b) listscroll_popup_colour_pane_g2

0xab26,	// (0x00021f62) listscroll_popup_colour_pane_g3_ParamLimits

0xab26,	// (0x00021f62) listscroll_popup_colour_pane_g3

0xab36,	// (0x00021f72) listscroll_popup_colour_pane_g4_ParamLimits

0xab36,	// (0x00021f72) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000269da) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000269da) listscroll_popup_colour_pane_g

0xab45,	// (0x00021f81) scroll_pane_cp6_ParamLimits

0xab45,	// (0x00021f81) scroll_pane_cp6

0xab57,	// (0x00021f93) cell_large_graphic_colour_popup_pane_ParamLimits

0xab57,	// (0x00021f93) cell_large_graphic_colour_popup_pane

0xab76,	// (0x00021fb2) cell_large_graphic_colour_none_popup_pane_t1

0xa50b,	// (0x00021947) grid_highlight_pane_cp5

0xab85,	// (0x00021fc1) cell_large_graphic_colour_popup_pane_g1

0xab8d,	// (0x00021fc9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x000269e3) cell_large_graphic_colour_popup_pane_g

0xab95,	// (0x00021fd1) cell_large_graphic_colour_popup_pane_g2_copy1

0xab9e,	// (0x00021fda) grid_highlight_pane_cp4

0xaba6,	// (0x00021fe2) bg_popup_window_pane_cp8_ParamLimits

0xaba6,	// (0x00021fe2) bg_popup_window_pane_cp8

0xabc1,	// (0x00021ffd) popup_snote_single_text_window_g1_ParamLimits

0xabc1,	// (0x00021ffd) popup_snote_single_text_window_g1

0xabd3,	// (0x0002200f) popup_snote_single_text_window_t1_ParamLimits

0xabd3,	// (0x0002200f) popup_snote_single_text_window_t1

0xabe6,	// (0x00022022) popup_snote_single_text_window_t2_ParamLimits

0xabe6,	// (0x00022022) popup_snote_single_text_window_t2

0xabf9,	// (0x00022035) popup_snote_single_text_window_t3_ParamLimits

0xabf9,	// (0x00022035) popup_snote_single_text_window_t3

0xac32,	// (0x0002206e) popup_snote_single_text_window_t4_ParamLimits

0xac32,	// (0x0002206e) popup_snote_single_text_window_t4

0xac66,	// (0x000220a2) popup_snote_single_text_window_t5_ParamLimits

0xac66,	// (0x000220a2) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x000269e8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x000269e8) popup_snote_single_text_window_t

0xac95,	// (0x000220d1) bg_popup_window_pane_cp9_ParamLimits

0xac95,	// (0x000220d1) bg_popup_window_pane_cp9

0xabc1,	// (0x00021ffd) popup_snote_single_graphic_window_g1_ParamLimits

0xabc1,	// (0x00021ffd) popup_snote_single_graphic_window_g1

0xaca3,	// (0x000220df) popup_snote_single_graphic_window_g2_ParamLimits

0xaca3,	// (0x000220df) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x000269f3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x000269f3) popup_snote_single_graphic_window_g

0xacaf,	// (0x000220eb) popup_snote_single_graphic_window_t1_ParamLimits

0xacaf,	// (0x000220eb) popup_snote_single_graphic_window_t1

0xacc2,	// (0x000220fe) popup_snote_single_graphic_window_t2_ParamLimits

0xacc2,	// (0x000220fe) popup_snote_single_graphic_window_t2

0xacd5,	// (0x00022111) popup_snote_single_graphic_window_t3_ParamLimits

0xacd5,	// (0x00022111) popup_snote_single_graphic_window_t3

0xad0e,	// (0x0002214a) popup_snote_single_graphic_window_t4_ParamLimits

0xad0e,	// (0x0002214a) popup_snote_single_graphic_window_t4

0xad42,	// (0x0002217e) popup_snote_single_graphic_window_t5_ParamLimits

0xad42,	// (0x0002217e) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x000269f8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x000269f8) popup_snote_single_graphic_window_t

0xd9a7,	// (0x00024de3) grid_graphic_popup_pane_ParamLimits

0xd9a7,	// (0x00024de3) grid_graphic_popup_pane

0xd9cf,	// (0x00024e0b) listscroll_popup_graphic_pane_g1_ParamLimits

0xd9cf,	// (0x00024e0b) listscroll_popup_graphic_pane_g1

0xd9e3,	// (0x00024e1f) listscroll_popup_graphic_pane_g2_ParamLimits

0xd9e3,	// (0x00024e1f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x00026deb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x00026deb) listscroll_popup_graphic_pane_g

0xda39,	// (0x00024e75) scroll_pane_cp5

0xd952,	// (0x00024d8e) cell_graphic_popup_pane_ParamLimits

0xd952,	// (0x00024d8e) cell_graphic_popup_pane

0xd933,	// (0x00024d6f) cell_graphic_popup_pane_g1

0xd93b,	// (0x00024d77) cell_graphic_popup_pane_g2

0xab95,	// (0x00021fd1) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x00026de4) cell_graphic_popup_pane_g

0xd944,	// (0x00024d80) cell_graphic_popup_pane_t2

0xab9e,	// (0x00021fda) grid_highlight_pane_cp3

0xad83,	// (0x000221bf) list_gen_pane_ParamLimits

0xad83,	// (0x000221bf) list_gen_pane

0xadb5,	// (0x000221f1) scroll_pane

0xd895,	// (0x00024cd1) bg_list_pane_g1_ParamLimits

0xd895,	// (0x00024cd1) bg_list_pane_g1

0xd8b0,	// (0x00024cec) bg_list_pane_g2_ParamLimits

0xd8b0,	// (0x00024cec) bg_list_pane_g2

0xd8c3,	// (0x00024cff) bg_list_pane_g3_ParamLimits

0xd8c3,	// (0x00024cff) bg_list_pane_g3

0xd8d5,	// (0x00024d11) bg_list_pane_g4_ParamLimits

0xd8d5,	// (0x00024d11) bg_list_pane_g4

0xd8e7,	// (0x00024d23) bg_list_pane_g5_ParamLimits

0xd8e7,	// (0x00024d23) bg_list_pane_g5

0x0004,

0xf99d,	// (0x00026dd9) bg_list_pane_g_ParamLimits

0xf99d,	// (0x00026dd9) bg_list_pane_g

0x7957,	// (0x0001ed93) list_double2_graphic_large_graphic_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double2_graphic_large_graphic_pane

0x7957,	// (0x0001ed93) list_double2_graphic_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double2_graphic_pane

0x7957,	// (0x0001ed93) list_double2_large_graphic_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double2_large_graphic_pane

0x7957,	// (0x0001ed93) list_double2_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double2_pane

0x7957,	// (0x0001ed93) list_double_graphic_heading_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_graphic_heading_pane

0x7957,	// (0x0001ed93) list_double_graphic_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_graphic_pane

0x7957,	// (0x0001ed93) list_double_heading_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_heading_pane

0x7957,	// (0x0001ed93) list_double_large_graphic_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_large_graphic_pane

0x7957,	// (0x0001ed93) list_double_number_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_number_pane

0x7957,	// (0x0001ed93) list_double_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_pane

0x7957,	// (0x0001ed93) list_double_time_pane_ParamLimits

0x7957,	// (0x0001ed93) list_double_time_pane

0x7957,	// (0x0001ed93) list_setting_number_pane_ParamLimits

0x7957,	// (0x0001ed93) list_setting_number_pane

0x7957,	// (0x0001ed93) list_setting_pane_ParamLimits

0x7957,	// (0x0001ed93) list_setting_pane

0x7999,	// (0x0001edd5) list_single_2graphic_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_2graphic_pane

0x7999,	// (0x0001edd5) list_single_graphic_heading_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_graphic_heading_pane

0x7999,	// (0x0001edd5) list_single_graphic_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_graphic_pane

0x7999,	// (0x0001edd5) list_single_heading_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_heading_pane

0x7a22,	// (0x0001ee5e) list_single_large_graphic_pane_ParamLimits

0x7a22,	// (0x0001ee5e) list_single_large_graphic_pane

0x7999,	// (0x0001edd5) list_single_number_heading_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_number_heading_pane

0x7999,	// (0x0001edd5) list_single_number_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_number_pane

0x7999,	// (0x0001edd5) list_single_pane_ParamLimits

0x7999,	// (0x0001edd5) list_single_pane

0xa50b,	// (0x00021947) list_highlight_pane_cp1

0x7015,	// (0x0001e451) list_single_pane_g1_ParamLimits

0x7015,	// (0x0001e451) list_single_pane_g1

0x7021,	// (0x0001e45d) list_single_pane_g2_ParamLimits

0x7021,	// (0x0001e45d) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00026a0a) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00026a0a) list_single_pane_g

0x7941,	// (0x0001ed7d) list_single_pane_t1_ParamLimits

0x7941,	// (0x0001ed7d) list_single_pane_t1

0x7015,	// (0x0001e451) list_single_number_pane_g1_ParamLimits

0x7015,	// (0x0001e451) list_single_number_pane_g1

0x7021,	// (0x0001e45d) list_single_number_pane_g2_ParamLimits

0x7021,	// (0x0001e45d) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00026a0a) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00026a0a) list_single_number_pane_g

0x78eb,	// (0x0001ed27) list_single_number_pane_t1_ParamLimits

0x78eb,	// (0x0001ed27) list_single_number_pane_t1

0x7901,	// (0x0001ed3d) list_single_number_pane_t2_ParamLimits

0x7901,	// (0x0001ed3d) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x00026d9a) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x00026d9a) list_single_number_pane_t

0x7009,	// (0x0001e445) list_single_graphic_pane_g1_ParamLimits

0x7009,	// (0x0001e445) list_single_graphic_pane_g1

0x7015,	// (0x0001e451) list_single_graphic_pane_g2_ParamLimits

0x7015,	// (0x0001e451) list_single_graphic_pane_g2

0x7021,	// (0x0001e45d) list_single_graphic_pane_g3_ParamLimits

0x7021,	// (0x0001e45d) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00026a03) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00026a03) list_single_graphic_pane_g

0x702d,	// (0x0001e469) list_single_graphic_pane_t1_ParamLimits

0x702d,	// (0x0001e469) list_single_graphic_pane_t1

0x7015,	// (0x0001e451) list_single_heading_pane_g1_ParamLimits

0x7015,	// (0x0001e451) list_single_heading_pane_g1

0x7021,	// (0x0001e45d) list_single_heading_pane_g2_ParamLimits

0x7021,	// (0x0001e45d) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00026a0a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00026a0a) list_single_heading_pane_g

0x7043,	// (0x0001e47f) list_single_heading_pane_t1_ParamLimits

0x7043,	// (0x0001e47f) list_single_heading_pane_t1

0x7059,	// (0x0001e495) list_single_heading_pane_t2_ParamLimits

0x7059,	// (0x0001e495) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00026a0f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00026a0f) list_single_heading_pane_t

0x7015,	// (0x0001e451) list_single_number_heading_pane_g1_ParamLimits

0x7015,	// (0x0001e451) list_single_number_heading_pane_g1

0x7021,	// (0x0001e45d) list_single_number_heading_pane_g2_ParamLimits

0x7021,	// (0x0001e45d) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00026a0a) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00026a0a) list_single_number_heading_pane_g

0x7043,	// (0x0001e47f) list_single_number_heading_pane_t1_ParamLimits

0x7043,	// (0x0001e47f) list_single_number_heading_pane_t1

0x706b,	// (0x0001e4a7) list_single_number_heading_pane_t2_ParamLimits

0x706b,	// (0x0001e4a7) list_single_number_heading_pane_t2

0x707d,	// (0x0001e4b9) list_single_number_heading_pane_t3_ParamLimits

0x707d,	// (0x0001e4b9) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00026a14) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00026a14) list_single_number_heading_pane_t

0x708f,	// (0x0001e4cb) list_single_graphic_heading_pane_g1_ParamLimits

0x708f,	// (0x0001e4cb) list_single_graphic_heading_pane_g1

0x709b,	// (0x0001e4d7) list_single_graphic_heading_pane_g4_ParamLimits

0x709b,	// (0x0001e4d7) list_single_graphic_heading_pane_g4

0x7021,	// (0x0001e45d) list_single_graphic_heading_pane_g5_ParamLimits

0x7021,	// (0x0001e45d) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00026a1b) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00026a1b) list_single_graphic_heading_pane_g

0x7043,	// (0x0001e47f) list_single_graphic_heading_pane_t1_ParamLimits

0x7043,	// (0x0001e47f) list_single_graphic_heading_pane_t1

0x70ac,	// (0x0001e4e8) list_single_graphic_heading_pane_t2_ParamLimits

0x70ac,	// (0x0001e4e8) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00026a22) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00026a22) list_single_graphic_heading_pane_t

0x70be,	// (0x0001e4fa) list_single_large_graphic_pane_g1_ParamLimits

0x70be,	// (0x0001e4fa) list_single_large_graphic_pane_g1

0x70ca,	// (0x0001e506) list_single_large_graphic_pane_g2_ParamLimits

0x70ca,	// (0x0001e506) list_single_large_graphic_pane_g2

0x70d6,	// (0x0001e512) list_single_large_graphic_pane_g3_ParamLimits

0x70d6,	// (0x0001e512) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00026a27) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00026a27) list_single_large_graphic_pane_g

0xc8ea,	// (0x00023d26) wait_border_pane_g2_copy1

0x70e2,	// (0x0001e51e) list_single_large_graphic_pane_g4_cp2

0x70ea,	// (0x0001e526) list_single_large_graphic_pane_t1_ParamLimits

0x70ea,	// (0x0001e526) list_single_large_graphic_pane_t1

0x7100,	// (0x0001e53c) list_double_pane_g1_ParamLimits

0x7100,	// (0x0001e53c) list_double_pane_g1

0x710c,	// (0x0001e548) list_double_pane_g2_ParamLimits

0x710c,	// (0x0001e548) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00026a2e) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00026a2e) list_double_pane_g

0x7118,	// (0x0001e554) list_double_pane_t1_ParamLimits

0x7118,	// (0x0001e554) list_double_pane_t1

0x712e,	// (0x0001e56a) list_double_pane_t2_ParamLimits

0x712e,	// (0x0001e56a) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00026a33) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00026a33) list_double_pane_t

0x7140,	// (0x0001e57c) list_double2_pane_g1_ParamLimits

0x7140,	// (0x0001e57c) list_double2_pane_g1

0x7151,	// (0x0001e58d) list_double2_pane_g2_ParamLimits

0x7151,	// (0x0001e58d) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00026a38) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00026a38) list_double2_pane_g

0x715d,	// (0x0001e599) list_double2_pane_t1_ParamLimits

0x715d,	// (0x0001e599) list_double2_pane_t1

0x7173,	// (0x0001e5af) list_double2_pane_t2_ParamLimits

0x7173,	// (0x0001e5af) list_double2_pane_t2

0x0001,

0xf601,	// (0x00026a3d) list_double2_pane_t_ParamLimits

0xf601,	// (0x00026a3d) list_double2_pane_t

0x7100,	// (0x0001e53c) list_double_number_pane_g1_ParamLimits

0x7100,	// (0x0001e53c) list_double_number_pane_g1

0x710c,	// (0x0001e548) list_double_number_pane_g2_ParamLimits

0x710c,	// (0x0001e548) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00026a2e) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00026a2e) list_double_number_pane_g

0x7185,	// (0x0001e5c1) list_double_number_pane_t1_ParamLimits

0x7185,	// (0x0001e5c1) list_double_number_pane_t1

0x7197,	// (0x0001e5d3) list_double_number_pane_t2_ParamLimits

0x7197,	// (0x0001e5d3) list_double_number_pane_t2

0x71ad,	// (0x0001e5e9) list_double_number_pane_t3_ParamLimits

0x71ad,	// (0x0001e5e9) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00026a42) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00026a42) list_double_number_pane_t

0x71bf,	// (0x0001e5fb) list_double_graphic_pane_g1_ParamLimits

0x71bf,	// (0x0001e5fb) list_double_graphic_pane_g1

0x71cb,	// (0x0001e607) list_double_graphic_pane_g2_ParamLimits

0x71cb,	// (0x0001e607) list_double_graphic_pane_g2

0x71da,	// (0x0001e616) list_double_graphic_pane_g3_ParamLimits

0x71da,	// (0x0001e616) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00026a49) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00026a49) list_double_graphic_pane_g

0x71f2,	// (0x0001e62e) list_double_graphic_pane_t1_ParamLimits

0x71f2,	// (0x0001e62e) list_double_graphic_pane_t1

0x7208,	// (0x0001e644) list_double_graphic_pane_t2_ParamLimits

0x7208,	// (0x0001e644) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00026a52) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00026a52) list_double_graphic_pane_t

0x721a,	// (0x0001e656) list_double2_graphic_pane_g1_ParamLimits

0x721a,	// (0x0001e656) list_double2_graphic_pane_g1

0x7100,	// (0x0001e53c) list_double2_graphic_pane_g2_ParamLimits

0x7100,	// (0x0001e53c) list_double2_graphic_pane_g2

0x710c,	// (0x0001e548) list_double2_graphic_pane_g3_ParamLimits

0x710c,	// (0x0001e548) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00026a57) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00026a57) list_double2_graphic_pane_g

0x7226,	// (0x0001e662) list_double2_graphic_pane_t1_ParamLimits

0x7226,	// (0x0001e662) list_double2_graphic_pane_t1

0x723c,	// (0x0001e678) list_double2_graphic_pane_t2_ParamLimits

0x723c,	// (0x0001e678) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00026a5e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00026a5e) list_double2_graphic_pane_t

0x724e,	// (0x0001e68a) list_double_large_graphic_pane_g1_ParamLimits

0x724e,	// (0x0001e68a) list_double_large_graphic_pane_g1

0x7279,	// (0x0001e6b5) list_double_large_graphic_pane_g2_ParamLimits

0x7279,	// (0x0001e6b5) list_double_large_graphic_pane_g2

0x710c,	// (0x0001e548) list_double_large_graphic_pane_g3_ParamLimits

0x710c,	// (0x0001e548) list_double_large_graphic_pane_g3

0x728a,	// (0x0001e6c6) list_double_large_graphic_pane_g4_ParamLimits

0x728a,	// (0x0001e6c6) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00026a63) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00026a63) list_double_large_graphic_pane_g

0x72b2,	// (0x0001e6ee) list_double_large_graphic_pane_t1_ParamLimits

0x72b2,	// (0x0001e6ee) list_double_large_graphic_pane_t1

0x72cb,	// (0x0001e707) list_double_large_graphic_pane_t2_ParamLimits

0x72cb,	// (0x0001e707) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00026a6e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00026a6e) list_double_large_graphic_pane_t

0x72dd,	// (0x0001e719) list_double2_large_graphic_pane_g1_ParamLimits

0x72dd,	// (0x0001e719) list_double2_large_graphic_pane_g1

0x7140,	// (0x0001e57c) list_double2_large_graphic_pane_g2_ParamLimits

0x7140,	// (0x0001e57c) list_double2_large_graphic_pane_g2

0x7151,	// (0x0001e58d) list_double2_large_graphic_pane_g3_ParamLimits

0x7151,	// (0x0001e58d) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00026a73) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00026a73) list_double2_large_graphic_pane_g

0x72e9,	// (0x0001e725) list_double2_large_graphic_pane_t1_ParamLimits

0x72e9,	// (0x0001e725) list_double2_large_graphic_pane_t1

0x72ff,	// (0x0001e73b) list_double2_large_graphic_pane_t2_ParamLimits

0x72ff,	// (0x0001e73b) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00026a7a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00026a7a) list_double2_large_graphic_pane_t

0x7311,	// (0x0001e74d) list_double_heading_pane_g1_ParamLimits

0x7311,	// (0x0001e74d) list_double_heading_pane_g1

0x7322,	// (0x0001e75e) list_double_heading_pane_g2_ParamLimits

0x7322,	// (0x0001e75e) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00026a7f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00026a7f) list_double_heading_pane_g

0x732e,	// (0x0001e76a) list_double_heading_pane_t1_ParamLimits

0x732e,	// (0x0001e76a) list_double_heading_pane_t1

0x7173,	// (0x0001e5af) list_double_heading_pane_t2_ParamLimits

0x7173,	// (0x0001e5af) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00026a84) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00026a84) list_double_heading_pane_t

0x721a,	// (0x0001e656) list_double_graphic_heading_pane_g1_ParamLimits

0x721a,	// (0x0001e656) list_double_graphic_heading_pane_g1

0x7311,	// (0x0001e74d) list_double_graphic_heading_pane_g2_ParamLimits

0x7311,	// (0x0001e74d) list_double_graphic_heading_pane_g2

0x7322,	// (0x0001e75e) list_double_graphic_heading_pane_g3_ParamLimits

0x7322,	// (0x0001e75e) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00026a89) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00026a89) list_double_graphic_heading_pane_g

0x7344,	// (0x0001e780) list_double_graphic_heading_pane_t1_ParamLimits

0x7344,	// (0x0001e780) list_double_graphic_heading_pane_t1

0x723c,	// (0x0001e678) list_double_graphic_heading_pane_t2_ParamLimits

0x723c,	// (0x0001e678) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00026a90) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00026a90) list_double_graphic_heading_pane_t

0x7279,	// (0x0001e6b5) list_double_time_pane_g1_ParamLimits

0x7279,	// (0x0001e6b5) list_double_time_pane_g1

0x710c,	// (0x0001e548) list_double_time_pane_g2_ParamLimits

0x710c,	// (0x0001e548) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00026a95) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00026a95) list_double_time_pane_g

0x735a,	// (0x0001e796) list_double_time_pane_t1_ParamLimits

0x735a,	// (0x0001e796) list_double_time_pane_t1

0x7370,	// (0x0001e7ac) list_double_time_pane_t2_ParamLimits

0x7370,	// (0x0001e7ac) list_double_time_pane_t2

0x7382,	// (0x0001e7be) list_double_time_pane_t3_ParamLimits

0x7382,	// (0x0001e7be) list_double_time_pane_t3

0x7394,	// (0x0001e7d0) list_double_time_pane_t4_ParamLimits

0x7394,	// (0x0001e7d0) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00026a9a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00026a9a) list_double_time_pane_t

0x73a6,	// (0x0001e7e2) list_setting_pane_g1_ParamLimits

0x73a6,	// (0x0001e7e2) list_setting_pane_g1

0x7322,	// (0x0001e75e) list_setting_pane_g2_ParamLimits

0x7322,	// (0x0001e75e) list_setting_pane_g2

0x0001,

0xf667,	// (0x00026aa3) list_setting_pane_g_ParamLimits

0xf667,	// (0x00026aa3) list_setting_pane_g

0x73b2,	// (0x0001e7ee) list_setting_pane_t1_ParamLimits

0x73b2,	// (0x0001e7ee) list_setting_pane_t1

0x73c9,	// (0x0001e805) list_setting_pane_t2_ParamLimits

0x73c9,	// (0x0001e805) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00026aa8) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00026aa8) list_setting_pane_t

0x7406,	// (0x0001e842) set_value_pane_cp_ParamLimits

0x7406,	// (0x0001e842) set_value_pane_cp

0x7412,	// (0x0001e84e) list_setting_number_pane_g1_ParamLimits

0x7412,	// (0x0001e84e) list_setting_number_pane_g1

0x741e,	// (0x0001e85a) list_setting_number_pane_g2_ParamLimits

0x741e,	// (0x0001e85a) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00026aaf) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00026aaf) list_setting_number_pane_g

0x742a,	// (0x0001e866) list_setting_number_pane_t1_ParamLimits

0x742a,	// (0x0001e866) list_setting_number_pane_t1

0x743e,	// (0x0001e87a) list_setting_number_pane_t2_ParamLimits

0x743e,	// (0x0001e87a) list_setting_number_pane_t2

0x7455,	// (0x0001e891) list_setting_number_pane_t3_ParamLimits

0x7455,	// (0x0001e891) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00026ab4) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00026ab4) list_setting_number_pane_t

0x7406,	// (0x0001e842) set_value_pane_ParamLimits

0x7406,	// (0x0001e842) set_value_pane

0xade9,	// (0x00022225) bg_set_opt_pane_ParamLimits

0xade9,	// (0x00022225) bg_set_opt_pane

0x7498,	// (0x0001e8d4) set_value_pane_t1

0xae0a,	// (0x00022246) slider_set_pane_cp3

0xae13,	// (0x0002224f) volume_small_pane_cp

0xae1c,	// (0x00022258) list_form_gen_pane

0xae25,	// (0x00022261) scroll_pane_cp8

0x74ae,	// (0x0001e8ea) form_field_data_pane_ParamLimits

0x74ae,	// (0x0001e8ea) form_field_data_pane

0x74ce,	// (0x0001e90a) form_field_data_wide_pane_ParamLimits

0x74ce,	// (0x0001e90a) form_field_data_wide_pane

0x74ef,	// (0x0001e92b) form_field_popup_pane_ParamLimits

0x74ef,	// (0x0001e92b) form_field_popup_pane

0x750d,	// (0x0001e949) form_field_popup_wide_pane_ParamLimits

0x750d,	// (0x0001e949) form_field_popup_wide_pane

0x752a,	// (0x0001e966) form_field_slider_pane_ParamLimits

0x752a,	// (0x0001e966) form_field_slider_pane

0x753d,	// (0x0001e979) form_field_slider_wide_pane_ParamLimits

0x753d,	// (0x0001e979) form_field_slider_wide_pane

0xae4e,	// (0x0002228a) data_form_pane

0x755a,	// (0x0001e996) form_field_data_pane_t1

0xae5a,	// (0x00022296) input_focus_pane

0x7574,	// (0x0001e9b0) data_form_wide_pane

0x7591,	// (0x0001e9cd) form_field_data_wide_pane_t1

0xabb3,	// (0x00021fef) input_focus_pane_cp6

0x75b3,	// (0x0001e9ef) form_field_popup_pane_t1

0xae5a,	// (0x00022296) input_focus_pane_cp7

0xae7c,	// (0x000222b8) list_form_pane

0x75d5,	// (0x0001ea11) form_field_popup_wide_pane_t1

0xae5a,	// (0x00022296) input_focus_pane_cp8

0xae88,	// (0x000222c4) list_form_wide_pane

0x75f2,	// (0x0001ea2e) form_field_slider_pane_t1_ParamLimits

0x75f2,	// (0x0001ea2e) form_field_slider_pane_t1

0x7606,	// (0x0001ea42) form_field_slider_pane_t2_ParamLimits

0x7606,	// (0x0001ea42) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00026ac4) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00026ac4) form_field_slider_pane_t

0xa866,	// (0x00021ca2) input_focus_pane_cp9_ParamLimits

0xa866,	// (0x00021ca2) input_focus_pane_cp9

0x7618,	// (0x0001ea54) slider_cont_pane_ParamLimits

0x7618,	// (0x0001ea54) slider_cont_pane

0xae97,	// (0x000222d3) form_field_slider_wide_pane_t1_ParamLimits

0xae97,	// (0x000222d3) form_field_slider_wide_pane_t1

0x762c,	// (0x0001ea68) form_field_slider_wide_pane_t2_ParamLimits

0x762c,	// (0x0001ea68) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00026ac9) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00026ac9) form_field_slider_wide_pane_t

0xa866,	// (0x00021ca2) input_focus_pane_cp10_ParamLimits

0xa866,	// (0x00021ca2) input_focus_pane_cp10

0x763e,	// (0x0001ea7a) slider_cont_pane_cp1_ParamLimits

0x763e,	// (0x0001ea7a) slider_cont_pane_cp1

0x7652,	// (0x0001ea8e) slider_form_pane_cp

0xaea9,	// (0x000222e5) input_focus_pane_g1

0xaeb1,	// (0x000222ed) input_focus_pane_g2

0xaeb9,	// (0x000222f5) input_focus_pane_g3

0xaec1,	// (0x000222fd) input_focus_pane_g4

0xaec9,	// (0x00022305) input_focus_pane_g5

0xaed1,	// (0x0002230d) input_focus_pane_g6

0xaed9,	// (0x00022315) input_focus_pane_g7

0xaee1,	// (0x0002231d) input_focus_pane_g8

0xaee9,	// (0x00022325) input_focus_pane_g9

0xa501,	// (0x0002193d) input_focus_pane_g10

0x0009,

0xf692,	// (0x00026ace) input_focus_pane_g

0xc8f3,	// (0x00023d2f) wait_border_pane_g3_copy1

0x765a,	// (0x0001ea96) data_form_pane_t1

0xa501,	// (0x0002193d) wait_anim_pane_g1_copy1

0x7913,	// (0x0001ed4f) data_form_wide_pane_t1

0x7675,	// (0x0001eab1) list_form_graphic_pane_cp_ParamLimits

0x7675,	// (0x0001eab1) list_form_graphic_pane_cp

0xd826,	// (0x00024c62) slider_form_pane_g1

0xd82f,	// (0x00024c6b) slider_form_pane_g2

0x0006,

0xf98e,	// (0x00026dca) slider_form_pane_g

0x7675,	// (0x0001eab1) list_form_graphic_pane_ParamLimits

0x7675,	// (0x0001eab1) list_form_graphic_pane

0x768c,	// (0x0001eac8) list_form_graphic_pane_g1

0x7694,	// (0x0001ead0) list_form_graphic_pane_t1_ParamLimits

0x7694,	// (0x0001ead0) list_form_graphic_pane_t1

0xa5eb,	// (0x00021a27) list_highlight_pane_cp5_ParamLimits

0xa5eb,	// (0x00021a27) list_highlight_pane_cp5

0x76a9,	// (0x0001eae5) find_pane_g1

0xaef1,	// (0x0002232d) input_find_pane

0x76b2,	// (0x0001eaee) input_find_pane_g1_ParamLimits

0x76b2,	// (0x0001eaee) input_find_pane_g1

0x76be,	// (0x0001eafa) input_find_pane_t1_ParamLimits

0x76be,	// (0x0001eafa) input_find_pane_t1

0x76d3,	// (0x0001eb0f) input_find_pane_t2_ParamLimits

0x76d3,	// (0x0001eb0f) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00026ae3) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00026ae3) input_find_pane_t

0xaefa,	// (0x00022336) input_focus_pane_cp5_ParamLimits

0xaefa,	// (0x00022336) input_focus_pane_cp5

0xaf14,	// (0x00022350) bg_popup_window_pane_cp2_ParamLimits

0xaf14,	// (0x00022350) bg_popup_window_pane_cp2

0xaf21,	// (0x0002235d) listscroll_menu_pane_ParamLimits

0xaf21,	// (0x0002235d) listscroll_menu_pane

0xaf2d,	// (0x00022369) popup_submenu_window_ParamLimits

0xaf2d,	// (0x00022369) popup_submenu_window

0xaf55,	// (0x00022391) find_popup_pane_g1

0xaf5d,	// (0x00022399) input_popup_find_pane_cp

0xaefa,	// (0x00022336) input_focus_pane_cp4_ParamLimits

0xaefa,	// (0x00022336) input_focus_pane_cp4

0xaf75,	// (0x000223b1) input_popup_find_pane_t1_ParamLimits

0xaf75,	// (0x000223b1) input_popup_find_pane_t1

0xa50b,	// (0x00021947) bg_popup_sub_pane_cp

0xafa3,	// (0x000223df) listscroll_popup_sub_pane

0xafab,	// (0x000223e7) list_submenu_pane_ParamLimits

0xafab,	// (0x000223e7) list_submenu_pane

0xafbc,	// (0x000223f8) scroll_pane_cp4

0xafc4,	// (0x00022400) list_single_popup_submenu_pane_ParamLimits

0xafc4,	// (0x00022400) list_single_popup_submenu_pane

0xafd8,	// (0x00022414) list_single_popup_submenu_pane_g1

0xafe0,	// (0x0002241c) list_single_popup_submenu_pane_t1_ParamLimits

0xafe0,	// (0x0002241c) list_single_popup_submenu_pane_t1

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp1_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp1

0xaff5,	// (0x00022431) tabs_2_active_pane_g1

0xaffd,	// (0x00022439) tabs_2_active_pane_t1

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp1_ParamLimits

0xa5eb,	// (0x00021a27) bg_passive_tab_pane_cp1

0xaff5,	// (0x00022431) tabs_2_passive_pane_g1

0xaffd,	// (0x00022439) tabs_2_passive_pane_t1

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp4

0xb01d,	// (0x00022459) tabs_2_long_active_pane_t1

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp4

0x9112,	// (0x0002054e) list_single_midp_graphic_pane_g4_ParamLimits

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp5

0xb03c,	// (0x00022478) tabs_3_long_active_pane_t1

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp5

0x9112,	// (0x0002054e) list_single_midp_graphic_pane_g4

0xa5eb,	// (0x00021a27) bg_popup_window_pane_cp13_ParamLimits

0xa5eb,	// (0x00021a27) bg_popup_window_pane_cp13

0xb057,	// (0x00022493) listscroll_popup_fast_pane_ParamLimits

0xb057,	// (0x00022493) listscroll_popup_fast_pane

0xb063,	// (0x0002249f) grid_popup_fast_pane_ParamLimits

0xb063,	// (0x0002249f) grid_popup_fast_pane

0xb075,	// (0x000224b1) scroll_pane_cp9_ParamLimits

0xb075,	// (0x000224b1) scroll_pane_cp9

0xf11e,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf11e,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2

0xb099,	// (0x000224d5) input_focus_pane_cp20_ParamLimits

0xb099,	// (0x000224d5) input_focus_pane_cp20

0xb0a7,	// (0x000224e3) query_popup_data_pane_t1_ParamLimits

0xb0a7,	// (0x000224e3) query_popup_data_pane_t1

0xb0ba,	// (0x000224f6) query_popup_data_pane_t2_ParamLimits

0xb0ba,	// (0x000224f6) query_popup_data_pane_t2

0xb100,	// (0x0002253c) query_popup_data_pane_t3_ParamLimits

0xb100,	// (0x0002253c) query_popup_data_pane_t3

0xb141,	// (0x0002257d) query_popup_data_pane_t4_ParamLimits

0xb141,	// (0x0002257d) query_popup_data_pane_t4

0xb17d,	// (0x000225b9) query_popup_data_pane_t5_ParamLimits

0xb17d,	// (0x000225b9) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00026ae8) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00026ae8) query_popup_data_pane_t

0xaea9,	// (0x000222e5) bg_set_opt_pane_g1

0xaeb1,	// (0x000222ed) bg_set_opt_pane_g2

0xaeb9,	// (0x000222f5) bg_set_opt_pane_g3

0xaec1,	// (0x000222fd) bg_set_opt_pane_g4

0xaec9,	// (0x00022305) bg_set_opt_pane_g5

0xaed1,	// (0x0002230d) bg_set_opt_pane_g6

0xaed9,	// (0x00022315) bg_set_opt_pane_g7

0xaee1,	// (0x0002231d) bg_set_opt_pane_g8

0xaee9,	// (0x00022325) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00026af3) bg_set_opt_pane_g

0x87e0,	// (0x0001fc1c) control_top_pane_stacon_ParamLimits

0x87e0,	// (0x0001fc1c) control_top_pane_stacon

0x8833,	// (0x0001fc6f) signal_pane_stacon_ParamLimits

0x8833,	// (0x0001fc6f) signal_pane_stacon

0xb73d,	// (0x00022b79) stacon_top_pane_g1_ParamLimits

0xb73d,	// (0x00022b79) stacon_top_pane_g1

0x8858,	// (0x0001fc94) title_pane_stacon_ParamLimits

0x8858,	// (0x0001fc94) title_pane_stacon

0x8882,	// (0x0001fcbe) uni_indicator_pane_stacon_ParamLimits

0x8882,	// (0x0001fcbe) uni_indicator_pane_stacon

0x8897,	// (0x0001fcd3) battery_pane_stacon_ParamLimits

0x8897,	// (0x0001fcd3) battery_pane_stacon

0x88db,	// (0x0001fd17) control_bottom_pane_stacon_ParamLimits

0x88db,	// (0x0001fd17) control_bottom_pane_stacon

0x88fe,	// (0x0001fd3a) navi_pane_stacon_ParamLimits

0x88fe,	// (0x0001fd3a) navi_pane_stacon

0xb75f,	// (0x00022b9b) stacon_bottom_pane_g1_ParamLimits

0xb75f,	// (0x00022b9b) stacon_bottom_pane_g1

0x854a,	// (0x0001f986) aid_levels_signal_lsc_ParamLimits

0x854a,	// (0x0001f986) aid_levels_signal_lsc

0x8561,	// (0x0001f99d) signal_pane_stacon_g1_ParamLimits

0x8561,	// (0x0001f99d) signal_pane_stacon_g1

0x8575,	// (0x0001f9b1) signal_pane_stacon_g2_ParamLimits

0x8575,	// (0x0001f9b1) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00026b06) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00026b06) signal_pane_stacon_g

0x85aa,	// (0x0001f9e6) title_pane_stacon_t1_ParamLimits

0x85aa,	// (0x0001f9e6) title_pane_stacon_t1

0xb1c1,	// (0x000225fd) uni_indicator_pane_stacon_g1

0xb1cb,	// (0x00022607) uni_indicator_pane_stacon_g2

0xb1d5,	// (0x00022611) uni_indicator_pane_stacon_g3

0xb1df,	// (0x0002261b) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00026b12) uni_indicator_pane_stacon_g

0x85cf,	// (0x0001fa0b) control_top_pane_stacon_g1

0x85d7,	// (0x0001fa13) control_top_pane_stacon_t1_ParamLimits

0x85d7,	// (0x0001fa13) control_top_pane_stacon_t1

0x860e,	// (0x0001fa4a) aid_levels_battery_lsc_ParamLimits

0x860e,	// (0x0001fa4a) aid_levels_battery_lsc

0x8626,	// (0x0001fa62) battery_pane_stacon_g1_ParamLimits

0x8626,	// (0x0001fa62) battery_pane_stacon_g1

0x8639,	// (0x0001fa75) battery_pane_stacon_g2_ParamLimits

0x8639,	// (0x0001fa75) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00026b1b) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00026b1b) battery_pane_stacon_g

0x8677,	// (0x0001fab3) navi_icon_pane_stacon

0x868b,	// (0x0001fac7) navi_navi_pane_stacon

0x8677,	// (0x0001fab3) navi_text_pane_stacon

0x85cf,	// (0x0001fa0b) control_bottom_pane_stacon_g1

0x869f,	// (0x0001fadb) control_bottom_pane_stacon_t1_ParamLimits

0x869f,	// (0x0001fadb) control_bottom_pane_stacon_t1

0xb203,	// (0x0002263f) grid_app_pane_ParamLimits

0xb203,	// (0x0002263f) grid_app_pane

0xb225,	// (0x00022661) scroll_pane_cp15_ParamLimits

0xb225,	// (0x00022661) scroll_pane_cp15

0xb23a,	// (0x00022676) cell_app_pane_ParamLimits

0xb23a,	// (0x00022676) cell_app_pane

0xb260,	// (0x0002269c) cell_app_pane_g1_ParamLimits

0xb260,	// (0x0002269c) cell_app_pane_g1

0xb280,	// (0x000226bc) cell_app_pane_g2_ParamLimits

0xb280,	// (0x000226bc) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00026b20) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00026b20) cell_app_pane_g

0xb28c,	// (0x000226c8) cell_app_pane_t1_ParamLimits

0xb28c,	// (0x000226c8) cell_app_pane_t1

0xb2a3,	// (0x000226df) grid_highlight_pane_ParamLimits

0xb2a3,	// (0x000226df) grid_highlight_pane

0xaea9,	// (0x000222e5) cell_highlight_pane_g1

0xaeb1,	// (0x000222ed) cell_highlight_pane_g2

0xaeb9,	// (0x000222f5) cell_highlight_pane_g3

0xaec1,	// (0x000222fd) cell_highlight_pane_g4

0xaec9,	// (0x00022305) cell_highlight_pane_g5

0xaed1,	// (0x0002230d) cell_highlight_pane_g6

0xaed9,	// (0x00022315) cell_highlight_pane_g7

0xaee1,	// (0x0002231d) cell_highlight_pane_g8

0xaee9,	// (0x00022325) cell_highlight_pane_g9

0xa501,	// (0x0002193d) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00026ace) cell_highlight_pane_g

0xb2b4,	// (0x000226f0) bg_scroll_pane

0x86e9,	// (0x0001fb25) scroll_handle_pane

0xb2fb,	// (0x00022737) scroll_bg_pane_g1

0xb310,	// (0x0002274c) scroll_bg_pane_g2

0xb328,	// (0x00022764) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00026b25) scroll_bg_pane_g

0xb33d,	// (0x00022779) scroll_handle_focus_pane_ParamLimits

0xb33d,	// (0x00022779) scroll_handle_focus_pane

0xb2fb,	// (0x00022737) scroll_handle_pane_g1

0xb34a,	// (0x00022786) scroll_handle_pane_g2

0xb328,	// (0x00022764) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00026b2c) scroll_handle_pane_g

0xaefa,	// (0x00022336) bg_popup_sub_pane_cp21_ParamLimits

0xaefa,	// (0x00022336) bg_popup_sub_pane_cp21

0xb35e,	// (0x0002279a) popup_fep_japan_predictive_window_t1_ParamLimits

0xb35e,	// (0x0002279a) popup_fep_japan_predictive_window_t1

0xb378,	// (0x000227b4) popup_fep_japan_predictive_window_t2_ParamLimits

0xb378,	// (0x000227b4) popup_fep_japan_predictive_window_t2

0xb3ab,	// (0x000227e7) popup_fep_japan_predictive_window_t3_ParamLimits

0xb3ab,	// (0x000227e7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00026b33) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00026b33) popup_fep_japan_predictive_window_t

0xa50b,	// (0x00021947) bg_popup_sub_pane_cp23

0xb3e2,	// (0x0002281e) listscroll_japin_cand_pane

0xb3ea,	// (0x00022826) popup_fep_japan_candidate_window_t1

0xb3f8,	// (0x00022834) candidate_pane_ParamLimits

0xb3f8,	// (0x00022834) candidate_pane

0xb40a,	// (0x00022846) scroll_pane_cp30

0xb412,	// (0x0002284e) list_single_popup_jap_candidate_pane_ParamLimits

0xb412,	// (0x0002284e) list_single_popup_jap_candidate_pane

0xa50b,	// (0x00021947) list_highlight_pane_cp30

0xb426,	// (0x00022862) list_single_popup_jap_candidate_pane_t1

0xb435,	// (0x00022871) level_1_signal

0xb442,	// (0x0002287e) level_2_signal

0xb44f,	// (0x0002288b) level_3_signal

0xb45c,	// (0x00022898) level_4_signal

0xb469,	// (0x000228a5) level_5_signal

0xb476,	// (0x000228b2) level_6_signal

0xb483,	// (0x000228bf) level_7_signal

0xb435,	// (0x00022871) level_1_battery

0xb442,	// (0x0002287e) level_2_battery

0xb44f,	// (0x0002288b) level_3_battery

0xb45c,	// (0x00022898) level_4_battery

0xb469,	// (0x000228a5) level_5_battery

0xb476,	// (0x000228b2) level_6_battery

0xb483,	// (0x000228bf) level_7_battery

0xb4a8,	// (0x000228e4) list_menu_pane_ParamLimits

0xb4a8,	// (0x000228e4) list_menu_pane

0xb4be,	// (0x000228fa) scroll_pane_cp25_ParamLimits

0xb4be,	// (0x000228fa) scroll_pane_cp25

0xb4d7,	// (0x00022913) list_double2_graphic_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double2_graphic_pane_cp2

0xb4d7,	// (0x00022913) list_double2_large_graphic_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double2_large_graphic_pane_cp2

0xb4d7,	// (0x00022913) list_double2_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double2_pane_cp2

0xb4d7,	// (0x00022913) list_double_graphic_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double_graphic_pane_cp2

0xb4d7,	// (0x00022913) list_double_large_graphic_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double_large_graphic_pane_cp2

0xb4d7,	// (0x00022913) list_double_number_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double_number_pane_cp2

0xb4d7,	// (0x00022913) list_double_pane_cp2_ParamLimits

0xb4d7,	// (0x00022913) list_double_pane_cp2

0xb4fb,	// (0x00022937) list_single_2graphic_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_2graphic_pane_cp2

0xb4fb,	// (0x00022937) list_single_graphic_heading_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_graphic_heading_pane_cp2

0xb4fb,	// (0x00022937) list_single_graphic_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_graphic_pane_cp2

0xb4fb,	// (0x00022937) list_single_heading_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_heading_pane_cp2

0xb511,	// (0x0002294d) list_single_large_graphic_pane_cp2_ParamLimits

0xb511,	// (0x0002294d) list_single_large_graphic_pane_cp2

0xb4fb,	// (0x00022937) list_single_number_heading_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_number_heading_pane_cp2

0xb4fb,	// (0x00022937) list_single_number_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_number_pane_cp2

0xb4fb,	// (0x00022937) list_single_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_pane_cp2

0xb58c,	// (0x000229c8) bg_popup_sub_pane_cp22

0x8798,	// (0x0001fbd4) popup_side_volume_key_window_g1

0x87bc,	// (0x0001fbf8) popup_side_volume_key_window_t1

0x87d8,	// (0x0001fc14) volume_small_pane_cp1

0xa866,	// (0x00021ca2) bg_popup_sub_pane_cp24_ParamLimits

0xa866,	// (0x00021ca2) bg_popup_sub_pane_cp24

0xb5a2,	// (0x000229de) fep_china_uni_candidate_pane_ParamLimits

0xb5a2,	// (0x000229de) fep_china_uni_candidate_pane

0xb5b6,	// (0x000229f2) fep_china_uni_entry_pane

0xb5c6,	// (0x00022a02) popup_fep_china_uni_window_g1

0xb5e2,	// (0x00022a1e) fep_china_uni_entry_pane_g1

0xb5ea,	// (0x00022a26) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00026b64) fep_china_uni_entry_pane_g

0xb5f2,	// (0x00022a2e) fep_entry_item_pane

0xb5fc,	// (0x00022a38) fep_candidate_item_pane

0xb604,	// (0x00022a40) fep_china_uni_candidate_pane_g1

0xb60c,	// (0x00022a48) fep_china_uni_candidate_pane_g2

0xb614,	// (0x00022a50) fep_china_uni_candidate_pane_g3

0xb61c,	// (0x00022a58) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00026b69) fep_china_uni_candidate_pane_g

0xa501,	// (0x0002193d) fep_entry_item_pane_g1

0xb624,	// (0x00022a60) fep_entry_item_pane_t1_ParamLimits

0xb624,	// (0x00022a60) fep_entry_item_pane_t1

0xb63a,	// (0x00022a76) fep_candidate_item_pane_t1_ParamLimits

0xb63a,	// (0x00022a76) fep_candidate_item_pane_t1

0xb64f,	// (0x00022a8b) fep_candidate_item_pane_t2_ParamLimits

0xb64f,	// (0x00022a8b) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00026b72) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00026b72) fep_candidate_item_pane_t

0xa5eb,	// (0x00021a27) list_highlight_pane_cp31_ParamLimits

0xa5eb,	// (0x00021a27) list_highlight_pane_cp31

0xb661,	// (0x00022a9d) level_1_signal_lsc

0xb66a,	// (0x00022aa6) level_2_signal_lsc

0xb673,	// (0x00022aaf) level_3_signal_lsc

0xb67c,	// (0x00022ab8) level_4_signal_lsc

0xb685,	// (0x00022ac1) level_5_signal_lsc

0xb68e,	// (0x00022aca) level_6_signal_lsc

0xb697,	// (0x00022ad3) level_7_signal_lsc

0xb697,	// (0x00022ad3) level_1_battery_lsc

0xb6a0,	// (0x00022adc) level_2_battery_lsc

0xb6a9,	// (0x00022ae5) level_3_battery_lsc

0xb6b2,	// (0x00022aee) level_4_battery_lsc

0xb6bb,	// (0x00022af7) level_5_battery_lsc

0xb6c4,	// (0x00022b00) level_6_battery_lsc

0xb661,	// (0x00022a9d) level_7_battery_lsc

0xb6cd,	// (0x00022b09) scroll_handle_focus_pane_g1

0xb6d6,	// (0x00022b12) scroll_handle_focus_pane_g2

0xb6df,	// (0x00022b1b) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00026b77) scroll_handle_focus_pane_g

0x76e8,	// (0x0001eb24) list_single_2graphic_pane_g1_ParamLimits

0x76e8,	// (0x0001eb24) list_single_2graphic_pane_g1

0x709b,	// (0x0001e4d7) list_single_2graphic_pane_g2_ParamLimits

0x709b,	// (0x0001e4d7) list_single_2graphic_pane_g2

0x7021,	// (0x0001e45d) list_single_2graphic_pane_g3_ParamLimits

0x7021,	// (0x0001e45d) list_single_2graphic_pane_g3

0x76f4,	// (0x0001eb30) list_single_2graphic_pane_g4_ParamLimits

0x76f4,	// (0x0001eb30) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00026b7e) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00026b7e) list_single_2graphic_pane_g

0x7700,	// (0x0001eb3c) list_single_2graphic_pane_t1_ParamLimits

0x7700,	// (0x0001eb3c) list_single_2graphic_pane_t1

0x772e,	// (0x0001eb6a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x772e,	// (0x0001eb6a) list_double2_graphic_large_graphic_pane_g1

0x7140,	// (0x0001e57c) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7140,	// (0x0001e57c) list_double2_graphic_large_graphic_pane_g2

0x7151,	// (0x0001e58d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7151,	// (0x0001e58d) list_double2_graphic_large_graphic_pane_g3

0x7740,	// (0x0001eb7c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7740,	// (0x0001eb7c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00026b87) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00026b87) list_double2_graphic_large_graphic_pane_g

0x774c,	// (0x0001eb88) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x774c,	// (0x0001eb88) list_double2_graphic_large_graphic_pane_t1

0x7762,	// (0x0001eb9e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7762,	// (0x0001eb9e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00026b90) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00026b90) list_double2_graphic_large_graphic_pane_t

0xb828,	// (0x00022c64) popup_fast_swap_window_ParamLimits

0xb828,	// (0x00022c64) popup_fast_swap_window

0xb844,	// (0x00022c80) popup_side_volume_key_window

0xb85e,	// (0x00022c9a) stacon_top_pane

0xb868,	// (0x00022ca4) status_pane_ParamLimits

0xb868,	// (0x00022ca4) status_pane

0xb85e,	// (0x00022c9a) status_small_pane

0xa50b,	// (0x00021947) control_pane

0xa50b,	// (0x00021947) stacon_bottom_pane

0xae25,	// (0x00022261) scroll_pane_cp121

0xae1c,	// (0x00022258) set_content_pane

0xb6e8,	// (0x00022b24) bg_active_tab_pane_g1_cp1

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp1

0xb6fa,	// (0x00022b36) bg_active_tab_pane_g3_cp1

0xb6e8,	// (0x00022b24) bg_passive_tab_pane_g1_cp1

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1

0xb6fa,	// (0x00022b36) bg_passive_tab_pane_g3_cp1

0xb703,	// (0x00022b3f) bg_active_tab_pane_g1_cp2

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp2

0xb70c,	// (0x00022b48) bg_active_tab_pane_g3_cp2

0xb703,	// (0x00022b3f) bg_passive_tab_pane_g1_cp2

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2

0xb70c,	// (0x00022b48) bg_passive_tab_pane_g3_cp2

0xb715,	// (0x00022b51) bg_active_tab_pane_g1_cp3

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp3

0xb71e,	// (0x00022b5a) bg_active_tab_pane_g3_cp3

0xb715,	// (0x00022b51) bg_passive_tab_pane_g1_cp3

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3

0xb71e,	// (0x00022b5a) bg_passive_tab_pane_g3_cp3

0xb727,	// (0x00022b63) bg_active_tab_pane_g1_cp4

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp4

0xb732,	// (0x00022b6e) bg_active_tab_pane_g3_cp4

0xb727,	// (0x00022b63) bg_passive_tab_pane_g1_cp4

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4

0xb732,	// (0x00022b6e) bg_passive_tab_pane_g3_cp4

0xb77b,	// (0x00022bb7) bg_active_tab_pane_g1_cp5

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp5

0xb784,	// (0x00022bc0) bg_active_tab_pane_g3_cp5

0xb77b,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5

0xb784,	// (0x00022bc0) bg_passive_tab_pane_g3_cp5

0xb78d,	// (0x00022bc9) list_set_graphic_pane_ParamLimits

0xb78d,	// (0x00022bc9) list_set_graphic_pane

0xa50b,	// (0x00021947) bg_set_opt_pane_cp4

0xb7ad,	// (0x00022be9) list_set_graphic_pane_g1_ParamLimits

0xb7ad,	// (0x00022be9) list_set_graphic_pane_g1

0xb7b9,	// (0x00022bf5) list_set_graphic_pane_g2_ParamLimits

0xb7b9,	// (0x00022bf5) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00026b95) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00026b95) list_set_graphic_pane_g

0x0009,

0xfae1,	// (0x00026f1d) volume_small_pane_cp_g

0xb7db,	// (0x00022c17) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xb7db,	// (0x00022c17) list_double2_large_graphic_pane_g1_cp2

0xb7e7,	// (0x00022c23) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xb7e7,	// (0x00022c23) list_double2_large_graphic_pane_g2_cp2

0xb7f8,	// (0x00022c34) list_double2_large_graphic_pane_g3_cp2

0xb800,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xb800,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2

0xb816,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xb816,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2

0xd3cc,	// (0x00024808) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd3cc,	// (0x00024808) list_double_large_graphic_pane_g1_cp2

0xd3dd,	// (0x00024819) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd3dd,	// (0x00024819) list_double_large_graphic_pane_g2_cp2

0xb984,	// (0x00022dc0) list_double_large_graphic_pane_g3_cp2

0xd3ee,	// (0x0002482a) list_double_large_graphic_pane_g4_cp

0xd3f6,	// (0x00024832) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd3f6,	// (0x00024832) list_double_large_graphic_pane_t1_cp2

0xd40d,	// (0x00024849) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd40d,	// (0x00024849) list_double_large_graphic_pane_t2_cp2

0xb876,	// (0x00022cb2) list_double2_graphic_pane_g1_cp2_ParamLimits

0xb876,	// (0x00022cb2) list_double2_graphic_pane_g1_cp2

0xb884,	// (0x00022cc0) list_double2_graphic_pane_g2_cp2_ParamLimits

0xb884,	// (0x00022cc0) list_double2_graphic_pane_g2_cp2

0xb895,	// (0x00022cd1) list_double2_graphic_pane_g3_cp2

0xb89f,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2_ParamLimits

0xb89f,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2

0xb8b5,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2_ParamLimits

0xb8b5,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2

0xb8c7,	// (0x00022d03) list_single_number_heading_pane_g1_cp2_ParamLimits

0xb8c7,	// (0x00022d03) list_single_number_heading_pane_g1_cp2

0xb8d3,	// (0x00022d0f) list_single_number_heading_pane_g2_cp2

0xb8db,	// (0x00022d17) list_single_number_heading_pane_t1_cp2_ParamLimits

0xb8db,	// (0x00022d17) list_single_number_heading_pane_t1_cp2

0xb8f1,	// (0x00022d2d) list_single_number_heading_pane_t2_cp2_ParamLimits

0xb8f1,	// (0x00022d2d) list_single_number_heading_pane_t2_cp2

0xb903,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2_ParamLimits

0xb903,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2

0xb8c7,	// (0x00022d03) list_single_heading_pane_g1_cp2_ParamLimits

0xb8c7,	// (0x00022d03) list_single_heading_pane_g1_cp2

0xb8d3,	// (0x00022d0f) list_single_heading_pane_g2_cp2

0xb8db,	// (0x00022d17) list_single_heading_pane_t1_cp2_ParamLimits

0xb8db,	// (0x00022d17) list_single_heading_pane_t1_cp2

0xd1d6,	// (0x00024612) list_single_heading_pane_t2_cp2_ParamLimits

0xd1d6,	// (0x00024612) list_single_heading_pane_t2_cp2

0xd11e,	// (0x0002455a) list_double_graphic_pane_g1_cp2_ParamLimits

0xd11e,	// (0x0002455a) list_double_graphic_pane_g1_cp2

0xd12a,	// (0x00024566) list_double_graphic_pane_g2_cp2_ParamLimits

0xd12a,	// (0x00024566) list_double_graphic_pane_g2_cp2

0xd139,	// (0x00024575) list_double_graphic_pane_g3_cp2

0xd141,	// (0x0002457d) list_double_graphic_pane_t1_cp2_ParamLimits

0xd141,	// (0x0002457d) list_double_graphic_pane_t1_cp2

0xd157,	// (0x00024593) list_double_graphic_pane_t2_cp2_ParamLimits

0xd157,	// (0x00024593) list_double_graphic_pane_t2_cp2

0xb978,	// (0x00022db4) list_double_number_pane_g1_cp2_ParamLimits

0xb978,	// (0x00022db4) list_double_number_pane_g1_cp2

0xb984,	// (0x00022dc0) list_double_number_pane_g2_cp2

0xd0e2,	// (0x0002451e) list_double_number_pane_t1_cp2_ParamLimits

0xd0e2,	// (0x0002451e) list_double_number_pane_t1_cp2

0xd0f6,	// (0x00024532) list_double_number_pane_t2_cp2_ParamLimits

0xd0f6,	// (0x00024532) list_double_number_pane_t2_cp2

0xd10c,	// (0x00024548) list_double_number_pane_t3_cp2_ParamLimits

0xd10c,	// (0x00024548) list_double_number_pane_t3_cp2

0xcfcb,	// (0x00024407) list_single_graphic_pane_g1_cp2_ParamLimits

0xcfcb,	// (0x00024407) list_single_graphic_pane_g1_cp2

0xae42,	// (0x0002227e) list_single_graphic_pane_g2_cp2_ParamLimits

0xae42,	// (0x0002227e) list_single_graphic_pane_g2_cp2

0xb9dc,	// (0x00022e18) list_single_graphic_pane_g3_cp2

0xcfa1,	// (0x000243dd) list_single_graphic_pane_t1_cp2_ParamLimits

0xcfa1,	// (0x000243dd) list_single_graphic_pane_t1_cp2

0xae42,	// (0x0002227e) list_single_number_pane_g1_cp2_ParamLimits

0xae42,	// (0x0002227e) list_single_number_pane_g1_cp2

0xb9dc,	// (0x00022e18) list_single_number_pane_g2_cp2

0xcfa1,	// (0x000243dd) list_single_number_pane_t1_cp2_ParamLimits

0xcfa1,	// (0x000243dd) list_single_number_pane_t1_cp2

0xcfb7,	// (0x000243f3) list_single_number_pane_t2_cp2_ParamLimits

0xcfb7,	// (0x000243f3) list_single_number_pane_t2_cp2

0xb7e7,	// (0x00022c23) list_double2_pane_g1_cp2_ParamLimits

0xb7e7,	// (0x00022c23) list_double2_pane_g1_cp2

0xb7f8,	// (0x00022c34) list_double2_pane_g2_cp2

0xb950,	// (0x00022d8c) list_double2_pane_t1_cp2_ParamLimits

0xb950,	// (0x00022d8c) list_double2_pane_t1_cp2

0xb966,	// (0x00022da2) list_double2_pane_t2_cp2_ParamLimits

0xb966,	// (0x00022da2) list_double2_pane_t2_cp2

0xb978,	// (0x00022db4) list_double_pane_g1_cp2_ParamLimits

0xb978,	// (0x00022db4) list_double_pane_g1_cp2

0xb984,	// (0x00022dc0) list_double_pane_g2_cp2

0xb98c,	// (0x00022dc8) list_double_pane_t1_cp2_ParamLimits

0xb98c,	// (0x00022dc8) list_double_pane_t1_cp2

0xb9a2,	// (0x00022dde) list_double_pane_t2_cp2_ParamLimits

0xb9a2,	// (0x00022dde) list_double_pane_t2_cp2

0xb9cc,	// (0x00022e08) list_single_pane_cp2_g3

0xae42,	// (0x0002227e) list_single_pane_g1_cp2_ParamLimits

0xae42,	// (0x0002227e) list_single_pane_g1_cp2

0xb9dc,	// (0x00022e18) list_single_pane_g2_cp2

0xb9e4,	// (0x00022e20) list_single_pane_t1_cp2_ParamLimits

0xb9e4,	// (0x00022e20) list_single_pane_t1_cp2

0xb9fc,	// (0x00022e38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xb9fc,	// (0x00022e38) list_single_large_graphic_pane_g1_cp2

0xba08,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xba08,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2

0xba14,	// (0x00022e50) list_single_large_graphic_pane_g3_cp2

0xba1c,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xba1c,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1

0xba36,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xba36,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2

0xcf6d,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xcf6d,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2

0xcf3a,	// (0x00024376) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xcf3a,	// (0x00024376) list_single_graphic_heading_pane_g4_cp2

0xb9dc,	// (0x00022e18) list_single_graphic_heading_pane_g5_cp2

0xcf79,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xcf79,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2

0xcf8f,	// (0x000243cb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xcf8f,	// (0x000243cb) list_single_graphic_heading_pane_t2_cp2

0xcf2e,	// (0x0002436a) list_single_2graphic_pane_g1_cp2_ParamLimits

0xcf2e,	// (0x0002436a) list_single_2graphic_pane_g1_cp2

0xcf3a,	// (0x00024376) list_single_2graphic_pane_g2_cp2_ParamLimits

0xcf3a,	// (0x00024376) list_single_2graphic_pane_g2_cp2

0xb9dc,	// (0x00022e18) list_single_2graphic_pane_g3_cp2

0xcf4b,	// (0x00024387) list_single_2graphic_pane_g4_cp2_ParamLimits

0xcf4b,	// (0x00024387) list_single_2graphic_pane_g4_cp2

0xcf57,	// (0x00024393) list_single_2graphic_pane_t1_cp2_ParamLimits

0xcf57,	// (0x00024393) list_single_2graphic_pane_t1_cp2

0xa501,	// (0x0002193d) list_highlight_pane_g10_cp1

0xcb06,	// (0x00023f42) list_highlight_pane_g1_cp1

0xcb0e,	// (0x00023f4a) list_highlight_pane_g2_cp1

0xcb16,	// (0x00023f52) list_highlight_pane_g3_cp1

0xcb1e,	// (0x00023f5a) list_highlight_pane_g4_cp1

0xcb26,	// (0x00023f62) list_highlight_pane_g5_cp1

0xcb2e,	// (0x00023f6a) list_highlight_pane_g6_cp1

0xcb36,	// (0x00023f72) list_highlight_pane_g7_cp1

0xcb3e,	// (0x00023f7a) list_highlight_pane_g8_cp1

0xcb46,	// (0x00023f82) list_highlight_pane_g9_cp1

0xca1e,	// (0x00023e5a) form_field_slider_pane_t3

0xca2c,	// (0x00023e68) form_field_slider_pane_t4

0xca3a,	// (0x00023e76) slider_form_pane_ParamLimits

0xca3a,	// (0x00023e76) slider_form_pane

0xa50b,	// (0x00021947) control_abbreviations

0xa50b,	// (0x00021947) control_conventions

0xa50b,	// (0x00021947) control_definitions

0xa50b,	// (0x00021947) format_table_attribute

0xd220,	// (0x0002465c) bg_popup_preview_window_pane_g9

0xa50b,	// (0x00021947) format_table_data2

0xa50b,	// (0x00021947) format_table_data3

0xa50b,	// (0x00021947) format_table_data_example

0x0008,

0xa50b,	// (0x00021947) intro_purpose

0xf8ee,	// (0x00026d2a) bg_popup_preview_window_pane_g

0xa50b,	// (0x00021947) texts_category

0xa50b,	// (0x00021947) texts_graphics

0xba4c,	// (0x00022e88) text_digital

0xba5b,	// (0x00022e97) text_primary

0xba6a,	// (0x00022ea6) text_primary_small

0xba79,	// (0x00022eb5) text_secondary

0xba88,	// (0x00022ec4) text_title

0xd907,	// (0x00024d43) bg_passive_tab_pane_g1_cp3_srt

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3_srt

0xd910,	// (0x00024d4c) bg_passive_tab_pane_g3_cp3_srt

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp3_srt_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp3_srt

0xd919,	// (0x00024d55) tabs_4_active_pane_srt_g1

0xd921,	// (0x00024d5d) tabs_4_active_pane_srt_t1_ParamLimits

0xd921,	// (0x00024d5d) tabs_4_active_pane_srt_t1

0xd907,	// (0x00024d43) bg_active_tab_pane_g1_cp3_copy1

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp3_copy1

0xd910,	// (0x00024d4c) bg_active_tab_pane_g3_cp3_copy1

0xa5eb,	// (0x00021a27) tabs_2_long_active_pane_srt_ParamLimits

0xa5eb,	// (0x00021a27) tabs_2_long_active_pane_srt

0xa5eb,	// (0x00021a27) tabs_2_long_passive_pane_srt_ParamLimits

0xa5eb,	// (0x00021a27) tabs_2_long_passive_pane_srt

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp4_srt

0xd663,	// (0x00024a9f) bg_passive_tab_pane_g1_cp4_srt

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4_srt

0xd66c,	// (0x00024aa8) bg_passive_tab_pane_g3_cp4_srt

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp4_srt_ParamLimits

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp4_srt

0xd675,	// (0x00024ab1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd675,	// (0x00024ab1) tabs_2_long_active_pane_srt_t1

0xd663,	// (0x00024a9f) bg_active_tab_pane_g1_cp4_srt

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp4_srt

0xd66c,	// (0x00024aa8) bg_active_tab_pane_g3_cp4_srt

0xa866,	// (0x00021ca2) tabs_3_long_active_pane_srt_ParamLimits

0xa866,	// (0x00021ca2) tabs_3_long_active_pane_srt

0xa866,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xa866,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt

0xa866,	// (0x00021ca2) tabs_3_long_passive_pane_srt_ParamLimits

0xa866,	// (0x00021ca2) tabs_3_long_passive_pane_srt

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp5_srt

0xb77b,	// (0x00022bb7) bg_passive_tab_pane_g1_cp5_srt

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5_srt

0xb784,	// (0x00022bc0) bg_passive_tab_pane_g3_cp5_srt

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp5_srt_ParamLimits

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp5_srt

0xd651,	// (0x00024a8d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd651,	// (0x00024a8d) tabs_3_long_active_pane_srt_t1

0xb77b,	// (0x00022bb7) bg_active_tab_pane_g1_cp5_srt

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp5_srt

0xb784,	// (0x00022bc0) bg_active_tab_pane_g3_cp5_srt

0xd643,	// (0x00024a7f) navi_text_pane_srt_t1

0xd63b,	// (0x00024a77) navi_icon_pane_srt_g1

0xbc4b,	// (0x00023087) midp_editing_number_pane_srt

0xba97,	// (0x00022ed3) midp_ticker_pane_srt

0xbc53,	// (0x0002308f) midp_ticker_pane_srt_g1

0xbc5b,	// (0x00023097) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00026bb4) midp_ticker_pane_srt_g

0xbc63,	// (0x0002309f) midp_ticker_pane_srt_t1

0xd62c,	// (0x00024a68) midp_editing_number_pane_t1_copy1

0xb030,	// (0x0002246c) listscroll_midp_pane

0xb030,	// (0x0002246c) midp_form_pane

0xbb03,	// (0x00022f3f) midp_info_popup_window_ParamLimits

0xbb03,	// (0x00022f3f) midp_info_popup_window

0xaefa,	// (0x00022336) bg_popup_sub_pane_cp50_ParamLimits

0xaefa,	// (0x00022336) bg_popup_sub_pane_cp50

0xc73b,	// (0x00023b77) listscroll_midp_info_pane_ParamLimits

0xc73b,	// (0x00023b77) listscroll_midp_info_pane

0xc723,	// (0x00023b5f) listscroll_form_midp_pane_ParamLimits

0xc723,	// (0x00023b5f) listscroll_form_midp_pane

0xc72f,	// (0x00023b6b) scroll_bar_cp050

0xc703,	// (0x00023b3f) list_midp_pane

0xe38d,	// (0x000257c9) signal_pane_g2_cp

0xc63d,	// (0x00023a79) listscroll_midp_info_pane_t1_ParamLimits

0xc63d,	// (0x00023a79) listscroll_midp_info_pane_t1

0xc655,	// (0x00023a91) listscroll_midp_info_pane_t2_ParamLimits

0xc655,	// (0x00023a91) listscroll_midp_info_pane_t2

0xc693,	// (0x00023acf) listscroll_midp_info_pane_t3_ParamLimits

0xc693,	// (0x00023acf) listscroll_midp_info_pane_t3

0xc6cd,	// (0x00023b09) listscroll_midp_info_pane_t4_ParamLimits

0xc6cd,	// (0x00023b09) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x00026c65) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x00026c65) listscroll_midp_info_pane_t

0xafbc,	// (0x000223f8) scroll_pane_cp21

0xc5df,	// (0x00023a1b) form_midp_field_choice_group_pane

0xc5e8,	// (0x00023a24) form_midp_field_text_pane

0xc623,	// (0x00023a5f) form_midp_field_time_pane

0xc62b,	// (0x00023a67) form_midp_gauge_slider_pane

0xc634,	// (0x00023a70) form_midp_gauge_wait_pane

0xa50b,	// (0x00021947) form_midp_image_pane

0x78b1,	// (0x0001eced) list_single_midp_pane_ParamLimits

0x78b1,	// (0x0001eced) list_single_midp_pane

0xc593,	// (0x000239cf) form_midp_field_text_pane_t1

0xc34b,	// (0x00023787) input_focus_pane_cp050

0xc5ce,	// (0x00023a0a) list_midp_form_text_pane

0xc562,	// (0x0002399e) form_midp_field_choice_group_pane_t1

0xc570,	// (0x000239ac) input_focus_pane_cp051

0xc584,	// (0x000239c0) list_midp_choice_pane

0xa50b,	// (0x00021947) status_idle_pane

0xc546,	// (0x00023982) form_midp_field_time_pane_t1

0xa501,	// (0x0002193d) wait_anim_pane_g2_copy1

0xc554,	// (0x00023990) form_midp_field_time_pane_t2

0x0001,

0xbbb3,	// (0x00022fef) aid_navinavi_width_2_pane

0xf824,	// (0x00026c60) form_midp_field_time_pane_t

0xa50b,	// (0x00021947) input_focus_pane_cp052

0xa50b,	// (0x00021947) bg_input_focus_pane_cp040

0xc506,	// (0x00023942) form_midp_gauge_slider_pane_t1

0xc514,	// (0x00023950) form_midp_gauge_slider_pane_t2

0xc522,	// (0x0002395e) form_midp_gauge_slider_pane_t3

0xc530,	// (0x0002396c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x00026c57) form_midp_gauge_slider_pane_t

0xc53e,	// (0x0002397a) form_midp_slider_pane

0xa5eb,	// (0x00021a27) bg_input_focus_pane_cp041_ParamLimits

0xa5eb,	// (0x00021a27) bg_input_focus_pane_cp041

0xc4d3,	// (0x0002390f) form_midp_gauge_wait_pane_t1_ParamLimits

0xc4d3,	// (0x0002390f) form_midp_gauge_wait_pane_t1

0xc4e5,	// (0x00023921) form_midp_gauge_wait_pane_t2_ParamLimits

0xc4e5,	// (0x00023921) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x00026c52) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x00026c52) form_midp_gauge_wait_pane_t

0xc4f7,	// (0x00023933) form_midp_wait_pane_ParamLimits

0xc4f7,	// (0x00023933) form_midp_wait_pane

0xc49d,	// (0x000238d9) form_midp_image_pane_g1

0xc4a6,	// (0x000238e2) form_midp_image_pane_t1

0xc4b5,	// (0x000238f1) form_midp_image_pane_t2

0xc4c4,	// (0x00023900) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x00026c4b) form_midp_image_pane_t

0xc494,	// (0x000238d0) list_single_midp_pane_g1

0x78a2,	// (0x0001ecde) list_single_midp_pane_t1

0xc465,	// (0x000238a1) list_midp_form_item_pane_ParamLimits

0xc465,	// (0x000238a1) list_midp_form_item_pane

0xbb5b,	// (0x00022f97) list_midp_form_item_pane_t1

0xbb6a,	// (0x00022fa6) midp_ticker_pane_g1

0xbb76,	// (0x00022fb2) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00026b9a) midp_ticker_pane_g

0xbb82,	// (0x00022fbe) midp_ticker_pane_t1

0xd873,	// (0x00024caf) midp_editing_number_pane_t1

0xd851,	// (0x00024c8d) midp_editing_number_pane

0xd860,	// (0x00024c9c) midp_ticker_pane

0xd61c,	// (0x00024a58) ai_message_heading_pane

0xa50b,	// (0x00021947) bg_popup_window_pane_cp14

0xd624,	// (0x00024a60) listscroll_ai_message_pane

0xd5a6,	// (0x000249e2) ai_message_heading_pane_g1_ParamLimits

0xd5a6,	// (0x000249e2) ai_message_heading_pane_g1

0xd5b2,	// (0x000249ee) ai_message_heading_pane_g2_ParamLimits

0xd5b2,	// (0x000249ee) ai_message_heading_pane_g2

0xd5be,	// (0x000249fa) ai_message_heading_pane_g3_ParamLimits

0xd5be,	// (0x000249fa) ai_message_heading_pane_g3

0xd5ca,	// (0x00024a06) ai_message_heading_pane_g4_ParamLimits

0xd5ca,	// (0x00024a06) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x00026d8c) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x00026d8c) ai_message_heading_pane_g

0xd5d6,	// (0x00024a12) ai_message_heading_pane_t1_ParamLimits

0xd5d6,	// (0x00024a12) ai_message_heading_pane_t1

0xd5f0,	// (0x00024a2c) ai_message_heading_pane_t2_ParamLimits

0xd5f0,	// (0x00024a2c) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x00026d95) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x00026d95) ai_message_heading_pane_t

0xd602,	// (0x00024a3e) bg_popup_heading_pane_cp1_ParamLimits

0xd602,	// (0x00024a3e) bg_popup_heading_pane_cp1

0xd594,	// (0x000249d0) list_ai_message_pane_ParamLimits

0xd594,	// (0x000249d0) list_ai_message_pane

0xafbc,	// (0x000223f8) scroll_pane_cp10

0xd530,	// (0x0002496c) list_ai_message_pane_g1

0xd538,	// (0x00024974) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x00026d69) list_ai_message_pane_g

0xd540,	// (0x0002497c) list_ai_message_pane_t1_ParamLimits

0xd540,	// (0x0002497c) list_ai_message_pane_t1

0xd555,	// (0x00024991) list_ai_message_pane_t2_ParamLimits

0xd555,	// (0x00024991) list_ai_message_pane_t2

0xd56a,	// (0x000249a6) list_ai_message_pane_t3_ParamLimits

0xd56a,	// (0x000249a6) list_ai_message_pane_t3

0xd57f,	// (0x000249bb) list_ai_message_pane_t4_ParamLimits

0xd57f,	// (0x000249bb) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x00026d6e) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x00026d6e) list_ai_message_pane_t

0xd51a,	// (0x00024956) cell_ai_soft_ind_pane_ParamLimits

0xd51a,	// (0x00024956) cell_ai_soft_ind_pane

0xbb94,	// (0x00022fd0) cell_ai_soft_ind_pane_g1_ParamLimits

0xbb94,	// (0x00022fd0) cell_ai_soft_ind_pane_g1

0xa50b,	// (0x00021947) grid_highlight_cp1

0xbba1,	// (0x00022fdd) text_secondary_cp56_ParamLimits

0xbba1,	// (0x00022fdd) text_secondary_cp56

0xd4ef,	// (0x0002492b) example_general_pane_ParamLimits

0xd4ef,	// (0x0002492b) example_general_pane

0xd4fb,	// (0x00024937) example_parent_pane_g1_ParamLimits

0xd4fb,	// (0x00024937) example_parent_pane_g1

0xd507,	// (0x00024943) example_parent_pane_t1_ParamLimits

0xd507,	// (0x00024943) example_parent_pane_t1

0x8e9b,	// (0x000202d7) popup_preview_text_window_ParamLimits

0x8e9b,	// (0x000202d7) popup_preview_text_window

0xb9d4,	// (0x00022e10) list_single_pane_cp2_g4

0xa910,	// (0x00021d4c) bg_popup_preview_window_pane_ParamLimits

0xa910,	// (0x00021d4c) bg_popup_preview_window_pane

0xd228,	// (0x00024664) popup_preview_text_window_t1_ParamLimits

0xd228,	// (0x00024664) popup_preview_text_window_t1

0xd246,	// (0x00024682) popup_preview_text_window_t2_ParamLimits

0xd246,	// (0x00024682) popup_preview_text_window_t2

0xd28f,	// (0x000246cb) popup_preview_text_window_t3_ParamLimits

0xd28f,	// (0x000246cb) popup_preview_text_window_t3

0xd2d4,	// (0x00024710) popup_preview_text_window_t4_ParamLimits

0xd2d4,	// (0x00024710) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x00026d3d) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x00026d3d) popup_preview_text_window_t

0xd352,	// (0x0002478e) scroll_pane_cp11

0xc2d7,	// (0x00023713) bg_popup_preview_window_pane_g1

0xd1e8,	// (0x00024624) bg_popup_preview_window_pane_g2

0xd1f0,	// (0x0002462c) bg_popup_preview_window_pane_g3

0xd1f8,	// (0x00024634) bg_popup_preview_window_pane_g4

0xd200,	// (0x0002463c) bg_popup_preview_window_pane_g5

0xd208,	// (0x00024644) bg_popup_preview_window_pane_g6

0xd210,	// (0x0002464c) bg_popup_preview_window_pane_g7

0xd218,	// (0x00024654) bg_popup_preview_window_pane_g8

0x80ee,	// (0x0001f52a) aid_popup_width_pane

0x8e79,	// (0x000202b5) popup_midp_note_alarm_window_ParamLimits

0x8e79,	// (0x000202b5) popup_midp_note_alarm_window

0xae4e,	// (0x0002228a) data_form_pane_ParamLimits

0x7550,	// (0x0001e98c) form_field_data_pane_g1

0x755a,	// (0x0001e996) form_field_data_pane_t1_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_ParamLimits

0x7574,	// (0x0001e9b0) data_form_wide_pane_ParamLimits

0x7585,	// (0x0001e9c1) form_field_data_wide_pane_g1

0x7591,	// (0x0001e9cd) form_field_data_wide_pane_t1_ParamLimits

0xabb3,	// (0x00021fef) input_focus_pane_cp6_ParamLimits

0xaf67,	// (0x000223a3) input_popup_find_pane_g1_ParamLimits

0xaf67,	// (0x000223a3) input_popup_find_pane_g1

0x864a,	// (0x0001fa86) aid_navi_side_left_pane

0x865f,	// (0x0001fa9b) aid_navi_side_right_pane

0xcc01,	// (0x0002403d) bg_popup_window_pane_cp30_ParamLimits

0xcc01,	// (0x0002403d) bg_popup_window_pane_cp30

0xcc7b,	// (0x000240b7) popup_midp_note_alarm_window_g1_ParamLimits

0xcc7b,	// (0x000240b7) popup_midp_note_alarm_window_g1

0xccab,	// (0x000240e7) popup_midp_note_alarm_window_t1_ParamLimits

0xccab,	// (0x000240e7) popup_midp_note_alarm_window_t1

0xcd4c,	// (0x00024188) popup_midp_note_alarm_window_t2_ParamLimits

0xcd4c,	// (0x00024188) popup_midp_note_alarm_window_t2

0xcdfa,	// (0x00024236) popup_midp_note_alarm_window_t3_ParamLimits

0xcdfa,	// (0x00024236) popup_midp_note_alarm_window_t3

0xce2c,	// (0x00024268) popup_midp_note_alarm_window_t4_ParamLimits

0xce2c,	// (0x00024268) popup_midp_note_alarm_window_t4

0xce52,	// (0x0002428e) popup_midp_note_alarm_window_t5_ParamLimits

0xce52,	// (0x0002428e) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x00026cda) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x00026cda) popup_midp_note_alarm_window_t

0xcefe,	// (0x0002433a) wait_bar_pane_cp1_ParamLimits

0xcefe,	// (0x0002433a) wait_bar_pane_cp1

0xa50b,	// (0x00021947) wait_anim_pane_copy1

0xa50b,	// (0x00021947) wait_border_pane_copy1

0xc8df,	// (0x00023d1b) wait_border_pane_g1_copy1

0x75ab,	// (0x0001e9e7) form_field_popup_pane_g1

0x75b3,	// (0x0001e9ef) form_field_popup_pane_t1_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_cp7_ParamLimits

0xae7c,	// (0x000222b8) list_form_pane_ParamLimits

0x75cd,	// (0x0001ea09) form_field_popup_wide_pane_g1

0x75d5,	// (0x0001ea11) form_field_popup_wide_pane_t1_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_cp8_ParamLimits

0xae88,	// (0x000222c4) list_form_wide_pane_ParamLimits

0xd991,	// (0x00024dcd) aid_size_cell_graphic_pane

0x765a,	// (0x0001ea96) data_form_pane_t1_ParamLimits

0x7913,	// (0x0001ed4f) data_form_wide_pane_t1_ParamLimits

0xbeaa,	// (0x000232e6) bg_status_flat_pane

0xa54b,	// (0x00021987) title_pane_t1_ParamLimits

0xa5b3,	// (0x000219ef) title_pane_t2_ParamLimits

0xa5d9,	// (0x00021a15) title_pane_t3_ParamLimits

0xf55d,	// (0x00026999) title_pane_t_ParamLimits

0xb435,	// (0x00022871) level_1_signal_ParamLimits

0xb442,	// (0x0002287e) level_2_signal_ParamLimits

0xb44f,	// (0x0002288b) level_3_signal_ParamLimits

0xb45c,	// (0x00022898) level_4_signal_ParamLimits

0xb469,	// (0x000228a5) level_5_signal_ParamLimits

0xb476,	// (0x000228b2) level_6_signal_ParamLimits

0xb483,	// (0x000228bf) level_7_signal_ParamLimits

0xb435,	// (0x00022871) level_1_battery_ParamLimits

0xb442,	// (0x0002287e) level_2_battery_ParamLimits

0xb44f,	// (0x0002288b) level_3_battery_ParamLimits

0xb45c,	// (0x00022898) level_4_battery_ParamLimits

0xb469,	// (0x000228a5) level_5_battery_ParamLimits

0xb476,	// (0x000228b2) level_6_battery_ParamLimits

0xb483,	// (0x000228bf) level_7_battery_ParamLimits

0xcb06,	// (0x00023f42) bg_status_flat_pane_g1

0xcb0e,	// (0x00023f4a) bg_status_flat_pane_g2

0xcb16,	// (0x00023f52) bg_status_flat_pane_g3

0xcb1e,	// (0x00023f5a) bg_status_flat_pane_g4

0xcb26,	// (0x00023f62) bg_status_flat_pane_g5

0xcb2e,	// (0x00023f6a) bg_status_flat_pane_g6

0xcb36,	// (0x00023f72) bg_status_flat_pane_g7

0xa601,	// (0x00021a3d) tabs_3_active_pane_t1_ParamLimits

0xa601,	// (0x00021a3d) tabs_3_passive_pane_t1_ParamLimits

0xa61b,	// (0x00021a57) tabs_4_active_pane_t1_ParamLimits

0xa61b,	// (0x00021a57) tabs_4_1_passive_pane_t1_ParamLimits

0xaffd,	// (0x00022439) tabs_2_active_pane_t1_ParamLimits

0xaffd,	// (0x00022439) tabs_2_passive_pane_t1_ParamLimits

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp4_ParamLimits

0xb01d,	// (0x00022459) tabs_2_long_active_pane_t1_ParamLimits

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp4_ParamLimits

0x9138,	// (0x00020574) list_single_midp_graphic_pane_t1_ParamLimits

0xb00f,	// (0x0002244b) bg_active_tab_pane_cp5_ParamLimits

0xb03c,	// (0x00022478) tabs_3_long_active_pane_t1_ParamLimits

0xb030,	// (0x0002246c) bg_passive_tab_pane_cp5_ParamLimits

0x9138,	// (0x00020574) list_single_midp_graphic_pane_t1

0xbeaa,	// (0x000232e6) bg_status_flat_pane_ParamLimits

0xbf6d,	// (0x000233a9) indicator_pane_cp2_ParamLimits

0xbf6d,	// (0x000233a9) indicator_pane_cp2

0xc092,	// (0x000234ce) navi_pane_srt_ParamLimits

0xc092,	// (0x000234ce) navi_pane_srt

0xc0b6,	// (0x000234f2) popup_clock_digital_analogue_window_cp1

0xa6c8,	// (0x00021b04) indicator_pane_t1

0xba97,	// (0x00022ed3) copy_highlight_pane

0xba97,	// (0x00022ed3) cursor_graphics_pane

0xba97,	// (0x00022ed3) graphic_within_text_pane

0xba97,	// (0x00022ed3) link_highlight_pane

0xd315,	// (0x00024751) popup_preview_text_window_t5_ParamLimits

0xd315,	// (0x00024751) popup_preview_text_window_t5

0xbbbb,	// (0x00022ff7) cursor_digital_pane

0xbbbb,	// (0x00022ff7) cursor_primary_pane

0xbbcc,	// (0x00023008) cursor_primary_small_pane

0xbbd4,	// (0x00023010) cursor_secondary_pane

0xbbdc,	// (0x00023018) cursor_title_pane

0xbbbb,	// (0x00022ff7) link_highlight_digital_pane

0xbbc3,	// (0x00022fff) link_highlight_primary_pane

0xbbcc,	// (0x00023008) link_highlight_primary_small_pane

0xbbd4,	// (0x00023010) link_highlight_secondary_pane

0xbbdc,	// (0x00023018) link_highlight_title_pane

0xbbbb,	// (0x00022ff7) copy_highlight_digital_pane

0xbbbb,	// (0x00022ff7) copy_highlight_primary_pane

0xbbcc,	// (0x00023008) copy_highlight_primary_small_pane

0xbbd4,	// (0x00023010) copy_highlight_secondary_pane

0xbbdc,	// (0x00023018) copy_highlight_title_pane

0xbbd4,	// (0x00023010) graphic_text_digital_pane

0xcba4,	// (0x00023fe0) graphic_text_primary_pane

0xcbad,	// (0x00023fe9) graphic_text_primary_small_pane

0xbbcc,	// (0x00023008) graphic_text_secondary_pane

0xbbbb,	// (0x00022ff7) graphic_text_title_pane

0xbbe4,	// (0x00023020) cursor_primary_pane_g1

0xcb96,	// (0x00023fd2) cursor_text_primary_t1

0xcb7e,	// (0x00023fba) cursor_primary_small_pane_g1

0xcb88,	// (0x00023fc4) cursor_text_primary_small_t1

0xcb66,	// (0x00023fa2) cursor_primary_small_pane_g1_copy1

0xcb70,	// (0x00023fac) cursor_text_primary_small_t1_copy1

0xcb4e,	// (0x00023f8a) cursor_text_title_t1

0xcb5c,	// (0x00023f98) cursor_title_pane_g1

0xbbe4,	// (0x00023020) cursor_digital_pane_g1

0xbbee,	// (0x0002302a) cursor_text_digital_t1

0xcaef,	// (0x00023f2b) link_highlight_primary_pane_g1

0xcaf7,	// (0x00023f33) link_highlight_primary_pane_t1

0xbbfc,	// (0x00023038) link_highlight_primary_small_pane_g1

0xbc04,	// (0x00023040) link_highlight_primary_small_pane_t1

0xbbfc,	// (0x00023038) link_highlight_secondary_pane_g1

0xbc13,	// (0x0002304f) link_highlight_secondary_pane_t1

0xca63,	// (0x00023e9f) link_highlight_title_pane_g1

0xca6b,	// (0x00023ea7) link_highlight_title_pane_t1

0xca4c,	// (0x00023e88) link_highlight_digital_pane_g1

0xca54,	// (0x00023e90) link_highlight_digital_pane_t1

0xc924,	// (0x00023d60) copy_highlight_primary_pane_g1

0xc92c,	// (0x00023d68) copy_highlight_primary_pane_t1

0xc8fe,	// (0x00023d3a) copy_highlight_primary_small_pane_g1

0xc915,	// (0x00023d51) copy_highlight_primary_small_pane_t1

0xbc22,	// (0x0002305e) copy_highlight_secondary_pane_g1

0xbc2a,	// (0x00023066) copy_highlight_secondary_pane_t1

0xc8fe,	// (0x00023d3a) copy_highlight_title_pane_g1

0xc906,	// (0x00023d42) copy_highlight_title_pane_t1

0xc924,	// (0x00023d60) copy_highlight_digital_pane_g1

0xdb9d,	// (0x00024fd9) copy_highlight_digital_pane_t1

0xdaf1,	// (0x00024f2d) graphic_text_primary_pane_g1

0xdb81,	// (0x00024fbd) graphic_text_primary_pane_t1

0xdb8f,	// (0x00024fcb) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x00026e09) graphic_text_primary_pane_t

0xdb5d,	// (0x00024f99) graphic_text_primary_small_pane_g1

0xdb65,	// (0x00024fa1) graphic_text_primary_small_pane_t1

0xdb73,	// (0x00024faf) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x00026e04) graphic_text_primary_small_pane_t

0xdb39,	// (0x00024f75) graphic_text_secondary_pane_g1

0xdb41,	// (0x00024f7d) graphic_text_secondary_pane_t1

0xdb4f,	// (0x00024f8b) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x00026dff) graphic_text_secondary_pane_t

0xdb15,	// (0x00024f51) graphic_text_title_pane_g1

0xdb1d,	// (0x00024f59) graphic_text_title_pane_t1

0xdb2b,	// (0x00024f67) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x00026dfa) graphic_text_title_pane_t

0xdaf1,	// (0x00024f2d) graphic_text_digital_pane_g1

0xdaf9,	// (0x00024f35) graphic_text_digital_pane_t1

0xdb07,	// (0x00024f43) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x00026df5) graphic_text_digital_pane_t

0xa5eb,	// (0x00021a27) navi_icon_pane_srt_ParamLimits

0xa5eb,	// (0x00021a27) navi_icon_pane_srt

0xa50b,	// (0x00021947) navi_midp_pane_srt

0xa50b,	// (0x00021947) navi_navi_pane_srt

0xa5eb,	// (0x00021a27) navi_text_pane_srt_ParamLimits

0xa5eb,	// (0x00021a27) navi_text_pane_srt

0xdabc,	// (0x00024ef8) navi_navi_icon_text_pane_srt

0xdac4,	// (0x00024f00) navi_navi_pane_srt_g1_ParamLimits

0xdac4,	// (0x00024f00) navi_navi_pane_srt_g1

0xdad6,	// (0x00024f12) navi_navi_pane_srt_g2_ParamLimits

0xdad6,	// (0x00024f12) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x00026df0) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x00026df0) navi_navi_pane_srt_g

0xdae8,	// (0x00024f24) navi_navi_tabs_pane_srt

0xdabc,	// (0x00024ef8) navi_navi_text_pane_srt

0xdabc,	// (0x00024ef8) navi_navi_volume_pane_srt

0xdaad,	// (0x00024ee9) navi_navi_text_pane_srt_t1

0x946a,	// (0x000208a6) navi_navi_volume_pane_srt_g1

0x9472,	// (0x000208ae) volume_small_pane_srt_ParamLimits

0x9472,	// (0x000208ae) volume_small_pane_srt

0x8921,	// (0x0001fd5d) volume_small_pane_srt_g1_ParamLimits

0x8921,	// (0x0001fd5d) volume_small_pane_srt_g1

0x8931,	// (0x0001fd6d) volume_small_pane_srt_g2_ParamLimits

0x8931,	// (0x0001fd6d) volume_small_pane_srt_g2

0x8942,	// (0x0001fd7e) volume_small_pane_srt_g3_ParamLimits

0x8942,	// (0x0001fd7e) volume_small_pane_srt_g3

0x8953,	// (0x0001fd8f) volume_small_pane_srt_g4_ParamLimits

0x8953,	// (0x0001fd8f) volume_small_pane_srt_g4

0x8964,	// (0x0001fda0) volume_small_pane_srt_g5_ParamLimits

0x8964,	// (0x0001fda0) volume_small_pane_srt_g5

0x8975,	// (0x0001fdb1) volume_small_pane_srt_g6_ParamLimits

0x8975,	// (0x0001fdb1) volume_small_pane_srt_g6

0x8986,	// (0x0001fdc2) volume_small_pane_srt_g7_ParamLimits

0x8986,	// (0x0001fdc2) volume_small_pane_srt_g7

0x8997,	// (0x0001fdd3) volume_small_pane_srt_g8_ParamLimits

0x8997,	// (0x0001fdd3) volume_small_pane_srt_g8

0x89a8,	// (0x0001fde4) volume_small_pane_srt_g9_ParamLimits

0x89a8,	// (0x0001fde4) volume_small_pane_srt_g9

0x89b9,	// (0x0001fdf5) volume_small_pane_srt_g10_ParamLimits

0x89b9,	// (0x0001fdf5) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00026b9f) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00026b9f) volume_small_pane_srt_g

0xa9b9,	// (0x00021df5) query_popup_data_pane_cp2

0xda93,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xda93,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1

0xcba4,	// (0x00023fe0) navi_tabs_2_long_pane_srt

0xcba4,	// (0x00023fe0) navi_tabs_2_pane_srt

0xcba4,	// (0x00023fe0) navi_tabs_3_long_pane_srt

0xcba4,	// (0x00023fe0) navi_tabs_3_pane_srt

0xcba4,	// (0x00023fe0) navi_tabs_4_pane_srt

0x944a,	// (0x00020886) tabs_2_active_pane_srt_ParamLimits

0x944a,	// (0x00020886) tabs_2_active_pane_srt

0x945a,	// (0x00020896) tabs_2_passive_pane_srt_ParamLimits

0x945a,	// (0x00020896) tabs_2_passive_pane_srt

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp1_srt_ParamLimits

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp1_srt

0xda5f,	// (0x00024e9b) bg_passive_tab_pane_g1_cp1_srt

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1_srt

0xda68,	// (0x00024ea4) bg_passive_tab_pane_g3_cp1_srt

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp1_srt_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp1_srt

0xda71,	// (0x00024ead) tabs_2_active_pane_srt_g1

0xda79,	// (0x00024eb5) tabs_2_active_pane_srt_t1_ParamLimits

0xda79,	// (0x00024eb5) tabs_2_active_pane_srt_t1

0xda5f,	// (0x00024e9b) bg_active_tab_pane_g1_cp1_srt

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp1_srt

0xda68,	// (0x00024ea4) bg_active_tab_pane_g3_cp1_srt

0x9417,	// (0x00020853) tabs_3_active_pane_srt_ParamLimits

0x9417,	// (0x00020853) tabs_3_active_pane_srt

0x9428,	// (0x00020864) tabs_3_passive_pane_cp_srt_ParamLimits

0x9428,	// (0x00020864) tabs_3_passive_pane_cp_srt

0x9439,	// (0x00020875) tabs_3_passive_pane_srt_ParamLimits

0x9439,	// (0x00020875) tabs_3_passive_pane_srt

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp2_srt_ParamLimits

0xbdd3,	// (0x0002320f) bg_passive_tab_pane_cp2_srt

0xbc39,	// (0x00023075) bg_passive_tab_pane_g1_cp2_srt

0xb6f1,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2_srt

0xbc42,	// (0x0002307e) bg_passive_tab_pane_g3_cp2_srt

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp2_srt_ParamLimits

0xa5eb,	// (0x00021a27) bg_active_tab_pane_cp2_srt

0xda45,	// (0x00024e81) tabs_3_active_pane_srt_g1

0xda4d,	// (0x00024e89) tabs_3_active_pane_srt_t1_ParamLimits

0xda4d,	// (0x00024e89) tabs_3_active_pane_srt_t1

0xbc39,	// (0x00023075) bg_active_tab_pane_g1_cp2_srt

0xb6f1,	// (0x00022b2d) bg_active_tab_pane_g2_cp2_srt

0xbc42,	// (0x0002307e) bg_active_tab_pane_g3_cp2_srt

0x93cf,	// (0x0002080b) tabs_4_active_pane_srt_ParamLimits

0x93cf,	// (0x0002080b) tabs_4_active_pane_srt

0x93e1,	// (0x0002081d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x93e1,	// (0x0002081d) tabs_4_passive_pane_cp2_srt

0x8b1c,	// (0x0001ff58) aid_size_cell_toolbar

0xb030,	// (0x0002246c) main_idle_act_pane_ParamLimits

0x8cad,	// (0x000200e9) popup_large_graphic_colour_window_ParamLimits

0x9012,	// (0x0002044e) popup_toolbar_window_ParamLimits

0x9012,	// (0x0002044e) popup_toolbar_window

0xd882,	// (0x00024cbe) list_single_graphic_2heading_pane_ParamLimits

0xd882,	// (0x00024cbe) list_single_graphic_2heading_pane

0xb1e9,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane

0xb1fb,	// (0x00022637) aid_size_cell_apps_grid_prt_pane

0xbdd3,	// (0x0002320f) bg_wml_button_pane_cp1_ParamLimits

0xbdd3,	// (0x0002320f) bg_wml_button_pane_cp1

0xc593,	// (0x000239cf) form_midp_field_text_pane_t1_ParamLimits

0xc34b,	// (0x00023787) input_focus_pane_cp050_ParamLimits

0xc5ce,	// (0x00023a0a) list_midp_form_text_pane_ParamLimits

0xc570,	// (0x000239ac) input_focus_pane_cp051_ParamLimits

0xc584,	// (0x000239c0) list_midp_choice_pane_ParamLimits

0xc401,	// (0x0002383d) list_single_2graphic_pane_cp3_ParamLimits

0xc401,	// (0x0002383d) list_single_2graphic_pane_cp3

0xc42c,	// (0x00023868) list_single_midp_graphic_pane_ParamLimits

0xc42c,	// (0x00023868) list_single_midp_graphic_pane

0x77a0,	// (0x0001ebdc) list_single_graphic_2heading_pane_g1_ParamLimits

0x77a0,	// (0x0001ebdc) list_single_graphic_2heading_pane_g1

0x70ca,	// (0x0001e506) list_single_graphic_2heading_pane_g4_ParamLimits

0x70ca,	// (0x0001e506) list_single_graphic_2heading_pane_g4

0x70d6,	// (0x0001e512) list_single_graphic_2heading_pane_g5_ParamLimits

0x70d6,	// (0x0001e512) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00026bf2) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00026bf2) list_single_graphic_2heading_pane_g

0x77ac,	// (0x0001ebe8) list_single_graphic_2heading_pane_t1_ParamLimits

0x77ac,	// (0x0001ebe8) list_single_graphic_2heading_pane_t1

0x77c0,	// (0x0001ebfc) list_single_graphic_2heading_pane_t2_ParamLimits

0x77c0,	// (0x0001ebfc) list_single_graphic_2heading_pane_t2

0x77da,	// (0x0001ec16) list_single_graphic_2heading_pane_t3_ParamLimits

0x77da,	// (0x0001ec16) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00026bf9) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00026bf9) list_single_graphic_2heading_pane_t

0xc215,	// (0x00023651) bg_popup_sub_pane_cp2

0xc23f,	// (0x0002367b) grid_toobar_pane

0x90bd,	// (0x000204f9) cell_toolbar_pane_ParamLimits

0x90bd,	// (0x000204f9) cell_toolbar_pane

0xc27b,	// (0x000236b7) cell_toolbar_pane_g1_ParamLimits

0xc27b,	// (0x000236b7) cell_toolbar_pane_g1

0xc28f,	// (0x000236cb) cell_toolbar_pane_g2_ParamLimits

0xc28f,	// (0x000236cb) cell_toolbar_pane_g2

0x0001,

0xf7c4,	// (0x00026c00) cell_toolbar_pane_g_ParamLimits

0xf7c4,	// (0x00026c00) cell_toolbar_pane_g

0xc2b1,	// (0x000236ed) grid_highlight_pane_cp2_ParamLimits

0xc2b1,	// (0x000236ed) grid_highlight_pane_cp2

0xc2cb,	// (0x00023707) toolbar_button_pane

0xc2d7,	// (0x00023713) toolbar_button_pane_g1

0xc2df,	// (0x0002371b) toolbar_button_pane_g2

0xc2e7,	// (0x00023723) toolbar_button_pane_g3

0xc2ef,	// (0x0002372b) toolbar_button_pane_g4

0xc2f7,	// (0x00023733) toolbar_button_pane_g5

0xc2ff,	// (0x0002373b) toolbar_button_pane_g6

0xc307,	// (0x00023743) toolbar_button_pane_g7

0xc30f,	// (0x0002374b) toolbar_button_pane_g8

0xc317,	// (0x00023753) toolbar_button_pane_g9

0x0009,

0xf7c9,	// (0x00026c05) toolbar_button_pane_g

0x90f5,	// (0x00020531) list_single_2graphic_pane_g1_cp3_ParamLimits

0x90f5,	// (0x00020531) list_single_2graphic_pane_g1_cp3

0x9101,	// (0x0002053d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9101,	// (0x0002053d) list_single_2graphic_pane_g2_cp3

0xb8d3,	// (0x00022d0f) list_single_2graphic_pane_g3_cp3

0x9112,	// (0x0002054e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9112,	// (0x0002054e) list_single_2graphic_pane_g4_cp3

0x911e,	// (0x0002055a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x911e,	// (0x0002055a) list_single_2graphic_pane_t1_cp3

0xb8c7,	// (0x00022d03) list_single_midp_graphic_pane_g2_ParamLimits

0xb8c7,	// (0x00022d03) list_single_midp_graphic_pane_g2

0x8b24,	// (0x0001ff60) aid_zoom_text_primary

0x7774,	// (0x0001ebb0) aid_zoom_text_secondary

0xbcf6,	// (0x00023132) status_small_pane_g7_ParamLimits

0xbcf6,	// (0x00023132) status_small_pane_g7

0xbd19,	// (0x00023155) status_small_pane_t1_ParamLimits

0xa522,	// (0x0002195e) title_pane_g2

0x0003,

0xf554,	// (0x00026990) title_pane_g

0xaa5a,	// (0x00021e96) aid_size_cell_colour_1_pane_ParamLimits

0xaa5a,	// (0x00021e96) aid_size_cell_colour_1_pane

0xaa6e,	// (0x00021eaa) aid_size_cell_colour_2_pane_ParamLimits

0xaa6e,	// (0x00021eaa) aid_size_cell_colour_2_pane

0xaa82,	// (0x00021ebe) aid_size_cell_colour_3_pane_ParamLimits

0xaa82,	// (0x00021ebe) aid_size_cell_colour_3_pane

0xaa96,	// (0x00021ed2) aid_size_cell_colour_4_pane_ParamLimits

0xaa96,	// (0x00021ed2) aid_size_cell_colour_4_pane

0x8586,	// (0x0001f9c2) title_pane_stacon_g1_ParamLimits

0x8586,	// (0x0001f9c2) title_pane_stacon_g1

0xc983,	// (0x00023dbf) popup_note_wait_window_g3_ParamLimits

0xc983,	// (0x00023dbf) popup_note_wait_window_g3

0xc9f9,	// (0x00023e35) popup_note_wait_window_t5_ParamLimits

0xc9f9,	// (0x00023e35) popup_note_wait_window_t5

0xa50b,	// (0x00021947) main_feb_china_hwr_fs_writing_pane

0x8b96,	// (0x0001ffd2) popup_feb_china_hwr_fs_window_ParamLimits

0x8b96,	// (0x0001ffd2) popup_feb_china_hwr_fs_window

0x914e,	// (0x0002058a) aid_size_cell_hwr_fs_ParamLimits

0x914e,	// (0x0002058a) aid_size_cell_hwr_fs

0xc34b,	// (0x00023787) bg_popup_sub_pane_cp3_ParamLimits

0xc34b,	// (0x00023787) bg_popup_sub_pane_cp3

0x9163,	// (0x0002059f) grid_hwr_fs_pane_ParamLimits

0x9163,	// (0x0002059f) grid_hwr_fs_pane

0x917b,	// (0x000205b7) linegrid_hwr_fs_pane_ParamLimits

0x917b,	// (0x000205b7) linegrid_hwr_fs_pane

0x918b,	// (0x000205c7) cell_hwr_fs_pane_ParamLimits

0x918b,	// (0x000205c7) cell_hwr_fs_pane

0xc357,	// (0x00023793) linegrid_hwr_fs_pane_g1_ParamLimits

0xc357,	// (0x00023793) linegrid_hwr_fs_pane_g1

0xc363,	// (0x0002379f) linegrid_hwr_fs_pane_g2_ParamLimits

0xc363,	// (0x0002379f) linegrid_hwr_fs_pane_g2

0xc375,	// (0x000237b1) linegrid_hwr_fs_pane_g3_ParamLimits

0xc375,	// (0x000237b1) linegrid_hwr_fs_pane_g3

0x91ad,	// (0x000205e9) linegrid_hwr_fs_pane_g4_ParamLimits

0x91ad,	// (0x000205e9) linegrid_hwr_fs_pane_g4

0x91c7,	// (0x00020603) linegrid_hwr_fs_pane_g5_ParamLimits

0x91c7,	// (0x00020603) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x00026c30) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x00026c30) linegrid_hwr_fs_pane_g

0xc381,	// (0x000237bd) cell_hwr_fs_pane_g1_ParamLimits

0xc381,	// (0x000237bd) cell_hwr_fs_pane_g1

0xc14c,	// (0x00023588) cell_hwr_fs_pane_g2_ParamLimits

0xc14c,	// (0x00023588) cell_hwr_fs_pane_g2

0xc397,	// (0x000237d3) cell_hwr_fs_pane_g3_ParamLimits

0xc397,	// (0x000237d3) cell_hwr_fs_pane_g3

0xc3a4,	// (0x000237e0) cell_hwr_fs_pane_g4_ParamLimits

0xc3a4,	// (0x000237e0) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x00026c3b) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x00026c3b) cell_hwr_fs_pane_g

0x91dd,	// (0x00020619) cell_hwr_fs_pane_t1

0xa50b,	// (0x00021947) grid_highlight_pane_cp6

0xa50b,	// (0x00021947) main_idle_act2_pane

0xafa3,	// (0x000223df) aid_inside_area_popup_secondary

0xd038,	// (0x00024474) aid_inside_area_window_primary_ParamLimits

0xd038,	// (0x00024474) aid_inside_area_window_primary

0xdbac,	// (0x00024fe8) ai2_news_ticker_pane

0xdbb4,	// (0x00024ff0) aid_size_cell_ai1_link_ParamLimits

0xdbb4,	// (0x00024ff0) aid_size_cell_ai1_link

0xdbce,	// (0x0002500a) popup_ai2_data_window_ParamLimits

0xdbce,	// (0x0002500a) popup_ai2_data_window

0xdbe2,	// (0x0002501e) popup_ai2_link_window_ParamLimits

0xdbe2,	// (0x0002501e) popup_ai2_link_window

0xc34b,	// (0x00023787) bg_popup_sub_pane_cp4_ParamLimits

0xc34b,	// (0x00023787) bg_popup_sub_pane_cp4

0xdbf6,	// (0x00025032) grid_ai2_link_pane_ParamLimits

0xdbf6,	// (0x00025032) grid_ai2_link_pane

0xdc0d,	// (0x00025049) popup_ai2_link_window_g1_ParamLimits

0xdc0d,	// (0x00025049) popup_ai2_link_window_g1

0xdc19,	// (0x00025055) popup_ai2_link_window_g2_ParamLimits

0xdc19,	// (0x00025055) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x00026e0e) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x00026e0e) popup_ai2_link_window_g

0xdc28,	// (0x00025064) ai2_mp_button_pane

0xdc30,	// (0x0002506c) ai2_mp_volume_pane

0xc570,	// (0x000239ac) bg_popup_sub_pane_cp5_ParamLimits

0xc570,	// (0x000239ac) bg_popup_sub_pane_cp5

0xdc38,	// (0x00025074) heading_ai2_gene_pane_ParamLimits

0xdc38,	// (0x00025074) heading_ai2_gene_pane

0xdc44,	// (0x00025080) list_ai2_gene_pane_ParamLimits

0xdc44,	// (0x00025080) list_ai2_gene_pane

0xdc8c,	// (0x000250c8) cell_ai2_link_pane_ParamLimits

0xdc8c,	// (0x000250c8) cell_ai2_link_pane

0xdca2,	// (0x000250de) cell_ai2_link_pane_g1

0xa50b,	// (0x00021947) grid_highlight_pane_cp7

0x9487,	// (0x000208c3) ai2_mp_volume_pane_g1

0xdd73,	// (0x000251af) ai2_mp_volume_pane_g2

0xdce8,	// (0x00025124) list_ai2_gene_pane_t1

0xdd7b,	// (0x000251b7) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x00026e27) ai2_mp_volume_pane_g

0x948f,	// (0x000208cb) volume_small_pane_cp3

0xdd83,	// (0x000251bf) aid_size_cell_ai2_button

0xdd8b,	// (0x000251c7) grid_ai2_button_pane

0xdd94,	// (0x000251d0) cell_ai2_button_pane_ParamLimits

0xdd94,	// (0x000251d0) cell_ai2_button_pane

0xa501,	// (0x0002193d) cell_ai2_button_pane_g1

0xa50b,	// (0x00021947) grid_highlight_pane_cp8

0xdd33,	// (0x0002516f) ai2_gene_pane_t1_ParamLimits

0xdd33,	// (0x0002516f) ai2_gene_pane_t1

0x8b12,	// (0x0001ff4e) aid_height_parent_landscape

0xd6bd,	// (0x00024af9) aid_height_set_list

0xd6ce,	// (0x00024b0a) aid_size_parent

0xd991,	// (0x00024dcd) aid_size_cell_graphic_pane_ParamLimits

0xdc54,	// (0x00025090) popup_ai2_data_window_g1_ParamLimits

0xdc54,	// (0x00025090) popup_ai2_data_window_g1

0xdc60,	// (0x0002509c) ai2_news_ticker_pane_g1

0xdc68,	// (0x000250a4) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x00026e13) ai2_news_ticker_pane_g

0xdc70,	// (0x000250ac) ai2_news_ticker_pane_t1

0xdc7e,	// (0x000250ba) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x00026e18) ai2_news_ticker_pane_t

0xdcab,	// (0x000250e7) heading_ai2_gene_pane_g1

0xdcb3,	// (0x000250ef) heading_ai2_gene_pane_t1_ParamLimits

0xdcb3,	// (0x000250ef) heading_ai2_gene_pane_t1

0xdcc8,	// (0x00025104) list_highlight_pane_cp6

0xdcd0,	// (0x0002510c) ai2_gene_pane_ParamLimits

0xdcd0,	// (0x0002510c) ai2_gene_pane

0xdcf6,	// (0x00025132) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x00026e1d) list_ai2_gene_pane_t

0xdd04,	// (0x00025140) list_highlight_pane_cp8_ParamLimits

0xdd04,	// (0x00025140) list_highlight_pane_cp8

0xdd15,	// (0x00025151) ai2_gene_pane_g1_ParamLimits

0xdd15,	// (0x00025151) ai2_gene_pane_g1

0xdd27,	// (0x00025163) ai2_gene_pane_g2_ParamLimits

0xdd27,	// (0x00025163) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x00026e22) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x00026e22) ai2_gene_pane_g

0xadd8,	// (0x00022214) scroll_pane_cp12

0x8ad1,	// (0x0001ff0d) control_pane_t3_ParamLimits

0x8ad1,	// (0x0001ff0d) control_pane_t3

0xbd0a,	// (0x00023146) status_small_pane_g8_ParamLimits

0xbd0a,	// (0x00023146) status_small_pane_g8

0x8c78,	// (0x000200b4) popup_find_window_ParamLimits

0x8e8d,	// (0x000202c9) popup_note_image_window_ParamLimits

0x77a0,	// (0x0001ebdc) list_double2_graphic_pane_vc_g1_ParamLimits

0x77a0,	// (0x0001ebdc) list_double2_graphic_pane_vc_g1

0x70ca,	// (0x0001e506) list_double2_graphic_pane_vc_g2_ParamLimits

0x70ca,	// (0x0001e506) list_double2_graphic_pane_vc_g2

0x70d6,	// (0x0001e512) list_double2_graphic_pane_vc_g3_ParamLimits

0x70d6,	// (0x0001e512) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b6,	// (0x00026bf2) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b6,	// (0x00026bf2) list_double2_graphic_pane_vc_g

0x77f2,	// (0x0001ec2e) list_double2_graphic_pane_vc_t1_ParamLimits

0x77f2,	// (0x0001ec2e) list_double2_graphic_pane_vc_t1

0x70ca,	// (0x0001e506) list_single_heading_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_single_heading_pane_vc_g1

0x70d6,	// (0x0001e512) list_single_heading_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_single_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_single_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_single_heading_pane_vc_g

0x7808,	// (0x0001ec44) list_single_heading_pane_vc_t1_ParamLimits

0x7808,	// (0x0001ec44) list_single_heading_pane_vc_t1

0x781e,	// (0x0001ec5a) list_single_heading_pane_vc_t2_ParamLimits

0x781e,	// (0x0001ec5a) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x00026c1f) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x00026c1f) list_single_heading_pane_vc_t

0x7832,	// (0x0001ec6e) list_setting_number_pane_vc_g1_ParamLimits

0x7832,	// (0x0001ec6e) list_setting_number_pane_vc_g1

0x783e,	// (0x0001ec7a) list_setting_number_pane_vc_g2_ParamLimits

0x783e,	// (0x0001ec7a) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x00026c24) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x00026c24) list_setting_number_pane_vc_g

0x784a,	// (0x0001ec86) list_setting_number_pane_vc_t1_ParamLimits

0x784a,	// (0x0001ec86) list_setting_number_pane_vc_t1

0x785e,	// (0x0001ec9a) list_setting_number_pane_vc_t2_ParamLimits

0x785e,	// (0x0001ec9a) list_setting_number_pane_vc_t2

0x7878,	// (0x0001ecb4) list_setting_number_pane_vc_t3_ParamLimits

0x7878,	// (0x0001ecb4) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x00026c29) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x00026c29) list_setting_number_pane_vc_t

0x7892,	// (0x0001ecce) set_value_pane_vc_ParamLimits

0x7892,	// (0x0001ecce) set_value_pane_vc

0xd882,	// (0x00024cbe) list_double2_graphic_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double2_graphic_pane_vc

0xd882,	// (0x00024cbe) list_double2_large_graphic_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double2_large_graphic_pane_vc

0xd882,	// (0x00024cbe) list_double2_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double2_pane_vc

0xd882,	// (0x00024cbe) list_double_graphic_heading_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_graphic_heading_pane_vc

0xd882,	// (0x00024cbe) list_double_graphic_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_graphic_pane_vc

0xd882,	// (0x00024cbe) list_double_heading_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_heading_pane_vc

0xd882,	// (0x00024cbe) list_double_large_graphic_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_large_graphic_pane_vc

0xd882,	// (0x00024cbe) list_double_number_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_number_pane_vc

0xd882,	// (0x00024cbe) list_double_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_pane_vc

0xd882,	// (0x00024cbe) list_double_time_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_double_time_pane_vc

0xd882,	// (0x00024cbe) list_setting_number_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_setting_number_pane_vc

0xd882,	// (0x00024cbe) list_setting_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_setting_pane_vc

0xd882,	// (0x00024cbe) list_single_graphic_heading_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_single_graphic_heading_pane_vc

0xd882,	// (0x00024cbe) list_single_heading_pane_vc_ParamLimits

0xd882,	// (0x00024cbe) list_single_heading_pane_vc

0x7976,	// (0x0001edb2) list_single_number_heading_pane_vc_ParamLimits

0x7976,	// (0x0001edb2) list_single_number_heading_pane_vc

0x7a48,	// (0x0001ee84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7a48,	// (0x0001ee84) list_double_graphic_heading_pane_vc_g1

0x70ca,	// (0x0001e506) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x70ca,	// (0x0001e506) list_double_graphic_heading_pane_vc_g2

0x70d6,	// (0x0001e512) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x70d6,	// (0x0001e512) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f2,	// (0x00026e2e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f2,	// (0x00026e2e) list_double_graphic_heading_pane_vc_g

0x7a54,	// (0x0001ee90) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7a54,	// (0x0001ee90) list_double_graphic_heading_pane_vc_t1

0x7a70,	// (0x0001eeac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7a70,	// (0x0001eeac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x00026e35) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x00026e35) list_double_graphic_heading_pane_vc_t

0x7832,	// (0x0001ec6e) list_setting_pane_vc_g1_ParamLimits

0x7832,	// (0x0001ec6e) list_setting_pane_vc_g1

0x783e,	// (0x0001ec7a) list_setting_pane_vc_g2_ParamLimits

0x783e,	// (0x0001ec7a) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x00026c24) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x00026c24) list_setting_pane_vc_g

0x7a88,	// (0x0001eec4) list_setting_pane_vc_t1_ParamLimits

0x7a88,	// (0x0001eec4) list_setting_pane_vc_t1

0x7aa2,	// (0x0001eede) list_setting_pane_vc_t2_ParamLimits

0x7aa2,	// (0x0001eede) list_setting_pane_vc_t2

0x0001,

0xfa3c,	// (0x00026e78) list_setting_pane_vc_t_ParamLimits

0xfa3c,	// (0x00026e78) list_setting_pane_vc_t

0x7892,	// (0x0001ecce) set_value_pane_cp_vc_ParamLimits

0x7892,	// (0x0001ecce) set_value_pane_cp_vc

0x70ca,	// (0x0001e506) list_single_number_heading_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_single_number_heading_pane_vc_g1

0x70d6,	// (0x0001e512) list_single_number_heading_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_single_number_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_single_number_heading_pane_vc_g

0x7808,	// (0x0001ec44) list_single_number_heading_pane_vc_t1_ParamLimits

0x7808,	// (0x0001ec44) list_single_number_heading_pane_vc_t1

0x7aba,	// (0x0001eef6) list_single_number_heading_pane_vc_t2_ParamLimits

0x7aba,	// (0x0001eef6) list_single_number_heading_pane_vc_t2

0x7ace,	// (0x0001ef0a) list_single_number_heading_pane_vc_t3_ParamLimits

0x7ace,	// (0x0001ef0a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa41,	// (0x00026e7d) list_single_number_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x00026e7d) list_single_number_heading_pane_vc_t

0x77a0,	// (0x0001ebdc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x77a0,	// (0x0001ebdc) list_single_graphic_heading_pane_vc_g1

0x70ca,	// (0x0001e506) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x70ca,	// (0x0001e506) list_single_graphic_heading_pane_vc_g4

0x70d6,	// (0x0001e512) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x70d6,	// (0x0001e512) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b6,	// (0x00026bf2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b6,	// (0x00026bf2) list_single_graphic_heading_pane_vc_g

0x7808,	// (0x0001ec44) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7808,	// (0x0001ec44) list_single_graphic_heading_pane_vc_t1

0x7ae0,	// (0x0001ef1c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7ae0,	// (0x0001ef1c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa48,	// (0x00026e84) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x00026e84) list_single_graphic_heading_pane_vc_t

0x70ca,	// (0x0001e506) list_double2_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_double2_pane_vc_g1

0x70d6,	// (0x0001e512) list_double2_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_double2_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_double2_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_double2_pane_vc_g

0x7af4,	// (0x0001ef30) list_double2_pane_vc_t1_ParamLimits

0x7af4,	// (0x0001ef30) list_double2_pane_vc_t1

0x7b0a,	// (0x0001ef46) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7b0a,	// (0x0001ef46) list_double2_large_graphic_pane_vc_g1

0x70ca,	// (0x0001e506) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x70ca,	// (0x0001e506) list_double2_large_graphic_pane_vc_g2

0x70d6,	// (0x0001e512) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x70d6,	// (0x0001e512) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4d,	// (0x00026e89) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4d,	// (0x00026e89) list_double2_large_graphic_pane_vc_g

0x7b16,	// (0x0001ef52) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7b16,	// (0x0001ef52) list_double2_large_graphic_pane_vc_t1

0x7b2c,	// (0x0001ef68) list_double_time_pane_vc_g1_ParamLimits

0x7b2c,	// (0x0001ef68) list_double_time_pane_vc_g1

0x7b38,	// (0x0001ef74) list_double_time_pane_vc_g2_ParamLimits

0x7b38,	// (0x0001ef74) list_double_time_pane_vc_g2

0x0001,

0xfa54,	// (0x00026e90) list_double_time_pane_vc_g_ParamLimits

0xfa54,	// (0x00026e90) list_double_time_pane_vc_g

0x7b44,	// (0x0001ef80) list_double_time_pane_vc_t1_ParamLimits

0x7b44,	// (0x0001ef80) list_double_time_pane_vc_t1

0x7b68,	// (0x0001efa4) list_double_time_pane_vc_t2_ParamLimits

0x7b68,	// (0x0001efa4) list_double_time_pane_vc_t2

0x7bb2,	// (0x0001efee) list_double_time_pane_vc_t3_ParamLimits

0x7bb2,	// (0x0001efee) list_double_time_pane_vc_t3

0x7bc4,	// (0x0001f000) list_double_time_pane_vc_t4_ParamLimits

0x7bc4,	// (0x0001f000) list_double_time_pane_vc_t4

0x0003,

0xfa59,	// (0x00026e95) list_double_time_pane_vc_t_ParamLimits

0xfa59,	// (0x00026e95) list_double_time_pane_vc_t

0x70ca,	// (0x0001e506) list_double_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_double_pane_vc_g1

0x70d6,	// (0x0001e512) list_double_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_double_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_double_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_double_pane_vc_g

0x7bd8,	// (0x0001f014) list_double_pane_vc_t1_ParamLimits

0x7bd8,	// (0x0001f014) list_double_pane_vc_t1

0x7bec,	// (0x0001f028) list_double_pane_vc_t2_ParamLimits

0x7bec,	// (0x0001f028) list_double_pane_vc_t2

0x0001,

0xfa62,	// (0x00026e9e) list_double_pane_vc_t_ParamLimits

0xfa62,	// (0x00026e9e) list_double_pane_vc_t

0x70ca,	// (0x0001e506) list_double_number_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_double_number_pane_vc_g1

0x70d6,	// (0x0001e512) list_double_number_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_double_number_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_double_number_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_double_number_pane_vc_g

0x7c04,	// (0x0001f040) list_double_number_pane_vc_t1_ParamLimits

0x7c04,	// (0x0001f040) list_double_number_pane_vc_t1

0x7c18,	// (0x0001f054) list_double_number_pane_vc_t2_ParamLimits

0x7c18,	// (0x0001f054) list_double_number_pane_vc_t2

0x7bec,	// (0x0001f028) list_double_number_pane_vc_t3_ParamLimits

0x7bec,	// (0x0001f028) list_double_number_pane_vc_t3

0x0002,

0xfa67,	// (0x00026ea3) list_double_number_pane_vc_t_ParamLimits

0xfa67,	// (0x00026ea3) list_double_number_pane_vc_t

0x7c2c,	// (0x0001f068) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7c2c,	// (0x0001f068) list_double_large_graphic_pane_vc_g1

0x7c3d,	// (0x0001f079) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7c3d,	// (0x0001f079) list_double_large_graphic_pane_vc_g2

0x70d6,	// (0x0001e512) list_double_large_graphic_pane_vc_g3_ParamLimits

0x70d6,	// (0x0001e512) list_double_large_graphic_pane_vc_g3

0x7c4c,	// (0x0001f088) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7c4c,	// (0x0001f088) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6e,	// (0x00026eaa) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6e,	// (0x00026eaa) list_double_large_graphic_pane_vc_g

0x7c58,	// (0x0001f094) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7c58,	// (0x0001f094) list_double_large_graphic_pane_vc_t1

0x7c71,	// (0x0001f0ad) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7c71,	// (0x0001f0ad) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa77,	// (0x00026eb3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa77,	// (0x00026eb3) list_double_large_graphic_pane_vc_t

0x70ca,	// (0x0001e506) list_double_heading_pane_vc_g1_ParamLimits

0x70ca,	// (0x0001e506) list_double_heading_pane_vc_g1

0x70d6,	// (0x0001e512) list_double_heading_pane_vc_g2_ParamLimits

0x70d6,	// (0x0001e512) list_double_heading_pane_vc_g2

0x0001,

0xf7de,	// (0x00026c1a) list_double_heading_pane_vc_g_ParamLimits

0xf7de,	// (0x00026c1a) list_double_heading_pane_vc_g

0x7c8a,	// (0x0001f0c6) list_double_heading_pane_vc_t1_ParamLimits

0x7c8a,	// (0x0001f0c6) list_double_heading_pane_vc_t1

0x7808,	// (0x0001ec44) list_double_heading_pane_vc_t2_ParamLimits

0x7808,	// (0x0001ec44) list_double_heading_pane_vc_t2

0x0001,

0xfa7c,	// (0x00026eb8) list_double_heading_pane_vc_t_ParamLimits

0xfa7c,	// (0x00026eb8) list_double_heading_pane_vc_t

0x7c9e,	// (0x0001f0da) list_double_graphic_pane_vc_g1_ParamLimits

0x7c9e,	// (0x0001f0da) list_double_graphic_pane_vc_g1

0x7cae,	// (0x0001f0ea) list_double_graphic_pane_vc_g2_ParamLimits

0x7cae,	// (0x0001f0ea) list_double_graphic_pane_vc_g2

0x7cbd,	// (0x0001f0f9) list_double_graphic_pane_vc_g3_ParamLimits

0x7cbd,	// (0x0001f0f9) list_double_graphic_pane_vc_g3

0x0002,

0xfa81,	// (0x00026ebd) list_double_graphic_pane_vc_g_ParamLimits

0xfa81,	// (0x00026ebd) list_double_graphic_pane_vc_g

0x7cc9,	// (0x0001f105) list_double_graphic_pane_vc_t1_ParamLimits

0x7cc9,	// (0x0001f105) list_double_graphic_pane_vc_t1

0x7cdd,	// (0x0001f119) list_double_graphic_pane_vc_t2_ParamLimits

0x7cdd,	// (0x0001f119) list_double_graphic_pane_vc_t2

0x0001,

0xfa88,	// (0x00026ec4) list_double_graphic_pane_vc_t_ParamLimits

0xfa88,	// (0x00026ec4) list_double_graphic_pane_vc_t

0x80fa,	// (0x0001f536) aid_size_cell_fastswap

0x8102,	// (0x0001f53e) aid_size_cell_touch_ParamLimits

0x8102,	// (0x0001f53e) aid_size_cell_touch

0x835d,	// (0x0001f799) popup_fast_swap_wide_window_ParamLimits

0x835d,	// (0x0001f799) popup_fast_swap_wide_window

0x8459,	// (0x0001f895) touch_pane_ParamLimits

0x8459,	// (0x0001f895) touch_pane

0xae2e,	// (0x0002226a) button_value_adjust_pane_cp2

0x74a6,	// (0x0001e8e2) button_value_adjust_pane_cp4

0x74c6,	// (0x0001e902) form_field_data_pane_cp2

0x74e5,	// (0x0001e921) form_field_data_wide_pane_cp2

0xb2b4,	// (0x000226f0) bg_scroll_pane_ParamLimits

0x86e9,	// (0x0001fb25) scroll_handle_pane_ParamLimits

0x86fd,	// (0x0001fb39) scroll_sc2_down_pane_ParamLimits

0x86fd,	// (0x0001fb39) scroll_sc2_down_pane

0xb2e5,	// (0x00022721) scroll_sc2_up_pane_ParamLimits

0xb2e5,	// (0x00022721) scroll_sc2_up_pane

0xe468,	// (0x000258a4) grid_wheel_folder_pane_g1_ParamLimits

0xe468,	// (0x000258a4) grid_wheel_folder_pane_g1

0x88b9,	// (0x0001fcf5) clock_nsta_pane_cp2_ParamLimits

0x88b9,	// (0x0001fcf5) clock_nsta_pane_cp2

0xb030,	// (0x0002246c) listscroll_midp_pane_ParamLimits

0xba9f,	// (0x00022edb) midp_canvas_pane

0xbd85,	// (0x000231c1) nsta_clock_indic_pane

0xbdb9,	// (0x000231f5) listscroll_form_pane_vc

0xbdc1,	// (0x000231fd) listscroll_set_pane_vc_ParamLimits

0xbdc1,	// (0x000231fd) listscroll_set_pane_vc

0xbec6,	// (0x00023302) clock_nsta_pane

0xbf3b,	// (0x00023377) indicator_nsta_pane

0xc215,	// (0x00023651) bg_popup_sub_pane_cp2_ParamLimits

0xc229,	// (0x00023665) find_pane_cp2_ParamLimits

0xc229,	// (0x00023665) find_pane_cp2

0xc23f,	// (0x0002367b) grid_toobar_pane_ParamLimits

0xc31f,	// (0x0002375b) list_form_gen_pane_vc_ParamLimits

0xc31f,	// (0x0002375b) list_form_gen_pane_vc

0xc335,	// (0x00023771) scroll_pane_cp8_vc_ParamLimits

0xc335,	// (0x00023771) scroll_pane_cp8_vc

0xc3b1,	// (0x000237ed) data_form_wide_pane_vc_ParamLimits

0xc3b1,	// (0x000237ed) data_form_wide_pane_vc

0xc3bd,	// (0x000237f9) form_field_data_wide_pane_vc_g1

0xc3c5,	// (0x00023801) form_field_data_wide_pane_vc_t1_ParamLimits

0xc3c5,	// (0x00023801) form_field_data_wide_pane_vc_t1

0xae5a,	// (0x00022296) input_focus_pane_cp6_vc_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_cp6_vc

0xc703,	// (0x00023b3f) list_midp_pane_ParamLimits

0xc70f,	// (0x00023b4b) scroll_pane_cp16_ParamLimits

0xc70f,	// (0x00023b4b) scroll_pane_cp16

0xc75d,	// (0x00023b99) button_value_adjust_pane_ParamLimits

0xc75d,	// (0x00023b99) button_value_adjust_pane

0xd6e0,	// (0x00024b1c) button_value_adjust_pane_cp6_ParamLimits

0xd6e0,	// (0x00024b1c) button_value_adjust_pane_cp6

0xd806,	// (0x00024c42) settings_code_pane_cp_ParamLimits

0xd806,	// (0x00024c42) settings_code_pane_cp

0xa501,	// (0x0002193d) cell_touch_pane_g1

0xa501,	// (0x0002193d) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00026b45) cell_touch_pane_g

0xdda6,	// (0x000251e2) cell_touch_pane_cp_ParamLimits

0xdda6,	// (0x000251e2) cell_touch_pane_cp

0xddb6,	// (0x000251f2) cell_touch_pane_ParamLimits

0xddb6,	// (0x000251f2) cell_touch_pane

0xa501,	// (0x0002193d) scroll_sc2_down_pane_g1

0xa501,	// (0x0002193d) scroll_sc2_up_pane_g1

0xa50b,	// (0x00021947) bg_set_opt_pane_cp4_vc

0xddc7,	// (0x00025203) list_set_graphic_pane_vc_g1_ParamLimits

0xddc7,	// (0x00025203) list_set_graphic_pane_vc_g1

0xddd3,	// (0x0002520f) list_set_graphic_pane_vc_g2_ParamLimits

0xddd3,	// (0x0002520f) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x00026e3a) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x00026e3a) list_set_graphic_pane_vc_g

0xdddf,	// (0x0002521b) text_primary_small_cp13_vc_ParamLimits

0xdddf,	// (0x0002521b) text_primary_small_cp13_vc

0xddf7,	// (0x00025233) list_set_graphic_pane_vc_ParamLimits

0xddf7,	// (0x00025233) list_set_graphic_pane_vc

0xa50b,	// (0x00021947) input_focus_pane_cp2_vc

0xa501,	// (0x0002193d) setting_code_pane_vc_g1

0xa636,	// (0x00021a72) setting_code_pane_vc_t1

0xde0a,	// (0x00025246) set_text_pane_vc_t1_ParamLimits

0xde0a,	// (0x00025246) set_text_pane_vc_t1

0xa50b,	// (0x00021947) input_focus_pane_cp1_vc

0xde27,	// (0x00025263) list_set_text_pane_vc

0xa501,	// (0x0002193d) setting_text_pane_vc_g1

0xa50b,	// (0x00021947) bg_set_opt_pane_cp2_vc

0xa62d,	// (0x00021a69) setting_slider_graphic_pane_vc_g1

0xde31,	// (0x0002526d) setting_slider_graphic_pane_vc_t1

0xde41,	// (0x0002527d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00026e3f) setting_slider_graphic_pane_vc_t

0xde51,	// (0x0002528d) slider_set_pane_cp_vc

0xde59,	// (0x00025295) slider_set_pane_vc_g1

0xde62,	// (0x0002529e) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x00026e44) slider_set_pane_vc_g

0xaea9,	// (0x000222e5) set_opt_bg_pane_g1_copy1

0xaeb1,	// (0x000222ed) set_opt_bg_pane_g2_copy1

0xde8e,	// (0x000252ca) set_opt_bg_pane_g3_copy1

0xaec1,	// (0x000222fd) set_opt_bg_pane_g4_copy1

0xaec9,	// (0x00022305) set_opt_bg_pane_g5_copy1

0xaed1,	// (0x0002230d) set_opt_bg_pane_g6_copy1

0xde96,	// (0x000252d2) set_opt_bg_pane_g7_copy1

0xdea0,	// (0x000252dc) set_opt_bg_pane_g8_copy1

0xdea8,	// (0x000252e4) set_opt_bg_pane_g9_copy1

0xa50b,	// (0x00021947) bg_set_opt_pane_cp_vc

0xdeb0,	// (0x000252ec) setting_slider_pane_vc_t1

0xdebf,	// (0x000252fb) setting_slider_pane_vc_t2

0xdecf,	// (0x0002530b) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x00026e53) setting_slider_pane_vc_t

0xdedf,	// (0x0002531b) slider_set_pane_vc

0x91eb,	// (0x00020627) volume_set_pane_vc_g1

0x9498,	// (0x000208d4) volume_set_pane_vc_g2

0x94a1,	// (0x000208dd) volume_set_pane_vc_g3

0x94aa,	// (0x000208e6) volume_set_pane_vc_g4

0x94b3,	// (0x000208ef) volume_set_pane_vc_g5

0x94bc,	// (0x000208f8) volume_set_pane_vc_g6

0x9218,	// (0x00020654) volume_set_pane_vc_g7

0x94c5,	// (0x00020901) volume_set_pane_vc_g8

0x94ce,	// (0x0002090a) volume_set_pane_vc_g9

0x94d7,	// (0x00020913) volume_set_pane_vc_g10

0x0009,

0xfa1e,	// (0x00026e5a) volume_set_pane_vc_g

0xdee7,	// (0x00025323) volume_set_pane_vc

0xdeef,	// (0x0002532b) button_value_adjust_pane_cp1_vc

0xdef9,	// (0x00025335) list_highlight_pane_cp2_vc

0xdf02,	// (0x0002533e) list_set_pane_vc_ParamLimits

0xdf02,	// (0x0002533e) list_set_pane_vc

0xdf60,	// (0x0002539c) main_pane_set_vc_t1_ParamLimits

0xdf60,	// (0x0002539c) main_pane_set_vc_t1

0xdf75,	// (0x000253b1) main_pane_set_vc_t2_ParamLimits

0xdf75,	// (0x000253b1) main_pane_set_vc_t2

0xdf87,	// (0x000253c3) main_pane_set_vc_t3_ParamLimits

0xdf87,	// (0x000253c3) main_pane_set_vc_t3

0xdf99,	// (0x000253d5) main_pane_set_vc_t4_ParamLimits

0xdf99,	// (0x000253d5) main_pane_set_vc_t4

0x0003,

0xfa33,	// (0x00026e6f) main_pane_set_vc_t_ParamLimits

0xfa33,	// (0x00026e6f) main_pane_set_vc_t

0xdfab,	// (0x000253e7) setting_code_pane_vc_ParamLimits

0xdfab,	// (0x000253e7) setting_code_pane_vc

0xdfba,	// (0x000253f6) setting_slider_graphic_pane_vc

0xdfba,	// (0x000253f6) setting_slider_pane_vc

0xdfba,	// (0x000253f6) setting_text_pane_vc

0xdfba,	// (0x000253f6) setting_volume_pane_vc

0xdfc2,	// (0x000253fe) scroll_pane_cp121_vc

0xae1c,	// (0x00022258) set_content_pane_vc

0xdfca,	// (0x00025406) button_value_adjust_pane_g1

0xdfd3,	// (0x0002540f) button_value_adjust_pane_g2

0x0001,

0xfa8d,	// (0x00026ec9) button_value_adjust_pane_g

0xdfdc,	// (0x00025418) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdfdc,	// (0x00025418) form_field_slider_wide_pane_vc_t1

0xdff0,	// (0x0002542c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdff0,	// (0x0002542c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa92,	// (0x00026ece) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x00026ece) form_field_slider_wide_pane_vc_t

0xa866,	// (0x00021ca2) input_focus_pane_cp10_vc_ParamLimits

0xa866,	// (0x00021ca2) input_focus_pane_cp10_vc

0xe01c,	// (0x00025458) slider_cont_pane_cp1_vc_ParamLimits

0xe01c,	// (0x00025458) slider_cont_pane_cp1_vc

0xe02c,	// (0x00025468) slider_form_pane_g1_cp2

0xde62,	// (0x0002529e) slider_form_pane_g2_cp2

0xe059,	// (0x00025495) form_field_slider_pane_vc_t3

0xe067,	// (0x000254a3) form_field_slider_pane_vc_t4

0xe075,	// (0x000254b1) slider_form_pane_vc_ParamLimits

0xe075,	// (0x000254b1) slider_form_pane_vc

0xe082,	// (0x000254be) form_field_slider_pane_vc_t1_ParamLimits

0xe082,	// (0x000254be) form_field_slider_pane_vc_t1

0xdff0,	// (0x0002542c) form_field_slider_pane_vc_t2_ParamLimits

0xdff0,	// (0x0002542c) form_field_slider_pane_vc_t2

0x0001,

0xfaa4,	// (0x00026ee0) form_field_slider_pane_vc_t_ParamLimits

0xfaa4,	// (0x00026ee0) form_field_slider_pane_vc_t

0xa866,	// (0x00021ca2) input_focus_pane_cp9_vc_ParamLimits

0xa866,	// (0x00021ca2) input_focus_pane_cp9_vc

0xe09e,	// (0x000254da) slider_cont_pane_vc_ParamLimits

0xe09e,	// (0x000254da) slider_cont_pane_vc

0xe0b0,	// (0x000254ec) list_form_graphic_pane_cp_vc_ParamLimits

0xe0b0,	// (0x000254ec) list_form_graphic_pane_cp_vc

0xc3bd,	// (0x000237f9) form_field_popup_wide_pane_vc_g1

0xe0c5,	// (0x00025501) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe0c5,	// (0x00025501) form_field_popup_wide_pane_vc_t1

0xae5a,	// (0x00022296) input_focus_pane_cp8_vc_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_cp8_vc

0xe10a,	// (0x00025546) list_form_wide_pane_vc_ParamLimits

0xe10a,	// (0x00025546) list_form_wide_pane_vc

0xe116,	// (0x00025552) list_form_graphic_pane_vc_g1

0xe11e,	// (0x0002555a) list_form_graphic_pane_vc_t1_ParamLimits

0xe11e,	// (0x0002555a) list_form_graphic_pane_vc_t1

0xa5eb,	// (0x00021a27) list_highlight_pane_cp5_vc_ParamLimits

0xa5eb,	// (0x00021a27) list_highlight_pane_cp5_vc

0xe13a,	// (0x00025576) list_form_graphic_pane_vc_ParamLimits

0xe13a,	// (0x00025576) list_form_graphic_pane_vc

0xc3bd,	// (0x000237f9) form_field_popup_pane_vc_g1

0xe150,	// (0x0002558c) form_field_popup_pane_vc_t1_ParamLimits

0xe150,	// (0x0002558c) form_field_popup_pane_vc_t1

0xae5a,	// (0x00022296) input_focus_pane_cp7_vc_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_cp7_vc

0xe167,	// (0x000255a3) list_form_pane_vc_ParamLimits

0xe167,	// (0x000255a3) list_form_pane_vc

0xe173,	// (0x000255af) data_form_pane_vc_t1_ParamLimits

0xe173,	// (0x000255af) data_form_pane_vc_t1

0xaea9,	// (0x000222e5) input_focus_pane_vc_g1

0xaeb1,	// (0x000222ed) input_focus_pane_vc_g2

0xaeb9,	// (0x000222f5) input_focus_pane_vc_g3

0xaec1,	// (0x000222fd) input_focus_pane_vc_g4

0xaec9,	// (0x00022305) input_focus_pane_vc_g5

0xaed1,	// (0x0002230d) input_focus_pane_vc_g6

0xaed9,	// (0x00022315) input_focus_pane_vc_g7

0xaee1,	// (0x0002231d) input_focus_pane_vc_g8

0xaee9,	// (0x00022325) input_focus_pane_vc_g9

0xa501,	// (0x0002193d) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00026ace) input_focus_pane_vc_g

0xc3b1,	// (0x000237ed) data_form_pane_vc_ParamLimits

0xc3b1,	// (0x000237ed) data_form_pane_vc

0xc3bd,	// (0x000237f9) form_field_data_pane_vc_g1

0xe18e,	// (0x000255ca) form_field_data_pane_vc_t1_ParamLimits

0xe18e,	// (0x000255ca) form_field_data_pane_vc_t1

0xae5a,	// (0x00022296) input_focus_pane_vc_ParamLimits

0xae5a,	// (0x00022296) input_focus_pane_vc

0xe1a8,	// (0x000255e4) button_value_adjust_pane_cp3_vc

0xe1b0,	// (0x000255ec) button_value_adjust_pane_cp5_vc

0xe1b8,	// (0x000255f4) form_field_data_pane_vc_ParamLimits

0xe1b8,	// (0x000255f4) form_field_data_pane_vc

0xe1cf,	// (0x0002560b) form_field_data_pane_vc_cp2

0xe1d7,	// (0x00025613) form_field_data_wide_pane_vc_ParamLimits

0xe1d7,	// (0x00025613) form_field_data_wide_pane_vc

0xe1ed,	// (0x00025629) form_field_data_wide_pane_vc_cp2

0xe1f5,	// (0x00025631) form_field_popup_pane_vc_ParamLimits

0xe1f5,	// (0x00025631) form_field_popup_pane_vc

0xe20c,	// (0x00025648) form_field_popup_wide_pane_vc_ParamLimits

0xe20c,	// (0x00025648) form_field_popup_wide_pane_vc

0xe222,	// (0x0002565e) form_field_slider_pane_vc_ParamLimits

0xe222,	// (0x0002565e) form_field_slider_pane_vc

0xe235,	// (0x00025671) form_field_slider_wide_pane_vc_ParamLimits

0xe235,	// (0x00025671) form_field_slider_wide_pane_vc

0xe248,	// (0x00025684) grid_touch_1_pane_ParamLimits

0xe248,	// (0x00025684) grid_touch_1_pane

0xe254,	// (0x00025690) grid_touch_2_pane_ParamLimits

0xe254,	// (0x00025690) grid_touch_2_pane

0xbd50,	// (0x0002318c) touch_pane_g1_ParamLimits

0xbd50,	// (0x0002318c) touch_pane_g1

0xe26c,	// (0x000256a8) cell_app_pane_cp_wide_ParamLimits

0xe26c,	// (0x000256a8) cell_app_pane_cp_wide

0xe27d,	// (0x000256b9) grid_popup_fast_wide_pane_ParamLimits

0xe27d,	// (0x000256b9) grid_popup_fast_wide_pane

0xe291,	// (0x000256cd) scroll_pane_cp19_ParamLimits

0xe291,	// (0x000256cd) scroll_pane_cp19

0xa50b,	// (0x00021947) bg_popup_window_pane_cp20

0xe2a5,	// (0x000256e1) listscroll_popup_fast_wide_pane

0xa5eb,	// (0x00021a27) grid_indicator_nsta_pane

0xe2ad,	// (0x000256e9) clock_nsta_pane_g1

0xe2b6,	// (0x000256f2) clock_nsta_pane_t1

0xe2d2,	// (0x0002570e) cell_indicator_nsta_pane_ParamLimits

0xe2d2,	// (0x0002570e) cell_indicator_nsta_pane

0xe30a,	// (0x00025746) cell_indicator_nsta_pane_g1

0xe318,	// (0x00025754) cell_indicator_nsta_pane_g2

0x0001,

0xfab5,	// (0x00026ef1) cell_indicator_nsta_pane_g

0xe32e,	// (0x0002576a) clock_nsta_pane_cp

0xe336,	// (0x00025772) indicator_nsta_pane_cp

0xe33e,	// (0x0002577a) nsta_clock_indic_pane_g1

0xa6b4,	// (0x00021af0) grid_indicator_pane

0xb3da,	// (0x00022816) scroll_pane_cp29

0x8808,	// (0x0001fc44) indicator_nsta_pane_cp2_ParamLimits

0x8808,	// (0x0001fc44) indicator_nsta_pane_cp2

0xa5eb,	// (0x00021a27) main_apps_wheel_pane

0xc5e8,	// (0x00023a24) form_midp_field_text_pane_ParamLimits

0xc72f,	// (0x00023b6b) scroll_bar_cp050_ParamLimits

0xe39f,	// (0x000257db) cell_indicator_pane_ParamLimits

0xe39f,	// (0x000257db) cell_indicator_pane

0xe3ba,	// (0x000257f6) cell_indicator_pane_g1

0xe3c4,	// (0x00025800) grid_wheel_folder_pane_ParamLimits

0xe3c4,	// (0x00025800) grid_wheel_folder_pane

0xe3da,	// (0x00025816) list_wheel_apps_pane_ParamLimits

0xe3da,	// (0x00025816) list_wheel_apps_pane

0xe3eb,	// (0x00025827) main_apps_wheel_pane_g1_ParamLimits

0xe3eb,	// (0x00025827) main_apps_wheel_pane_g1

0xe3ff,	// (0x0002583b) main_apps_wheel_pane_g2_ParamLimits

0xe3ff,	// (0x0002583b) main_apps_wheel_pane_g2

0x0001,

0xfad1,	// (0x00026f0d) main_apps_wheel_pane_g_ParamLimits

0xfad1,	// (0x00026f0d) main_apps_wheel_pane_g

0xe417,	// (0x00025853) main_apps_wheel_pane_t1_ParamLimits

0xe417,	// (0x00025853) main_apps_wheel_pane_t1

0xe43a,	// (0x00025876) list_wheel_apps_pane_g1

0xe442,	// (0x0002587e) list_wheel_apps_pane_g2

0xe44a,	// (0x00025886) list_wheel_apps_pane_g3

0xe454,	// (0x00025890) list_wheel_apps_pane_g4

0xe45e,	// (0x0002589a) list_wheel_apps_pane_g5

0x0004,

0xfad6,	// (0x00026f12) list_wheel_apps_pane_g

0xb923,	// (0x00022d5f) navi_icon_text_pane

0xbdf5,	// (0x00023231) aid_fill_nsta

0xe481,	// (0x000258bd) navi_icon_text_pane_g1

0xe48d,	// (0x000258c9) navi_icon_text_pane_t1

0xb7c5,	// (0x00022c01) list_set_graphic_pane_t1_ParamLimits

0xb7c5,	// (0x00022c01) list_set_graphic_pane_t1

0xce81,	// (0x000242bd) popup_midp_note_alarm_window_t6_ParamLimits

0xce81,	// (0x000242bd) popup_midp_note_alarm_window_t6

0xce93,	// (0x000242cf) popup_midp_note_alarm_window_t7_ParamLimits

0xce93,	// (0x000242cf) popup_midp_note_alarm_window_t7

0xcea5,	// (0x000242e1) popup_midp_note_alarm_window_t8_ParamLimits

0xcea5,	// (0x000242e1) popup_midp_note_alarm_window_t8

0xceb7,	// (0x000242f3) popup_midp_note_alarm_window_t9_ParamLimits

0xceb7,	// (0x000242f3) popup_midp_note_alarm_window_t9

0xcec9,	// (0x00024305) popup_midp_note_alarm_window_t10_ParamLimits

0xcec9,	// (0x00024305) popup_midp_note_alarm_window_t10

0xcedb,	// (0x00024317) popup_midp_note_alarm_window_t11_ParamLimits

0xcedb,	// (0x00024317) popup_midp_note_alarm_window_t11

0xceed,	// (0x00024329) scroll_pane_cp17_ParamLimits

0xceed,	// (0x00024329) scroll_pane_cp17

0x91eb,	// (0x00020627) volume_small_pane_cp_g1

0x94e0,	// (0x0002091c) volume_small_pane_cp_g2

0x94e9,	// (0x00020925) volume_small_pane_cp_g3

0x91fd,	// (0x00020639) volume_small_pane_cp_g4

0x94f2,	// (0x0002092e) volume_small_pane_cp_g5

0x94b3,	// (0x000208ef) volume_small_pane_cp_g6

0x920f,	// (0x0002064b) volume_small_pane_cp_g7

0x94fb,	// (0x00020937) volume_small_pane_cp_g8

0x9504,	// (0x00020940) volume_small_pane_cp_g9

0x9221,	// (0x0002065d) volume_small_pane_cp_g10

0xbb6a,	// (0x00022fa6) midp_ticker_pane_g1_ParamLimits

0xbb76,	// (0x00022fb2) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00026b9a) midp_ticker_pane_g_ParamLimits

0xbb82,	// (0x00022fbe) midp_ticker_pane_t1_ParamLimits

0xbe0b,	// (0x00023247) aid_fill_nsta_2

0xc71b,	// (0x00023b57) list_form2_midp_pane

0xd851,	// (0x00024c8d) midp_editing_number_pane_ParamLimits

0xd860,	// (0x00024c9c) midp_ticker_pane_ParamLimits

0xe49f,	// (0x000258db) form2_midp_field_pane

0xe4c3,	// (0x000258ff) scroll_pane_cp51

0xe4e3,	// (0x0002591f) form2_midp_button_pane_ParamLimits

0xe4e3,	// (0x0002591f) form2_midp_button_pane

0xe4f5,	// (0x00025931) form2_midp_content_pane_ParamLimits

0xe4f5,	// (0x00025931) form2_midp_content_pane

0xe50f,	// (0x0002594b) form2_midp_field_choice_group_pane

0xe517,	// (0x00025953) form2_midp_field_pane_g1

0xe51f,	// (0x0002595b) form2_midp_field_pane_g2

0xe527,	// (0x00025963) form2_midp_field_pane_g3

0xe52f,	// (0x0002596b) form2_midp_field_pane_g4

0x0003,

0xfafb,	// (0x00026f37) form2_midp_field_pane_g

0xe537,	// (0x00025973) form2_midp_gauge_slider_pane

0xe53f,	// (0x0002597b) form2_midp_gauge_wait_pane

0xe547,	// (0x00025983) form2_midp_image_pane_ParamLimits

0xe547,	// (0x00025983) form2_midp_image_pane

0xe562,	// (0x0002599e) form2_midp_label_pane_ParamLimits

0xe562,	// (0x0002599e) form2_midp_label_pane

0xe57b,	// (0x000259b7) form2_midp_label_pane_cp_ParamLimits

0xe57b,	// (0x000259b7) form2_midp_label_pane_cp

0xe59c,	// (0x000259d8) form2_midp_string_pane_ParamLimits

0xe59c,	// (0x000259d8) form2_midp_string_pane

0x7cf5,	// (0x0001f131) form2_midp_text_pane_ParamLimits

0x7cf5,	// (0x0001f131) form2_midp_text_pane

0xe5ae,	// (0x000259ea) form2_midp_time_pane

0xe5be,	// (0x000259fa) input_focus_pane_cp51_ParamLimits

0xe5be,	// (0x000259fa) input_focus_pane_cp51

0xe5d6,	// (0x00025a12) form2_midp_label_pane_t1_ParamLimits

0xe5d6,	// (0x00025a12) form2_midp_label_pane_t1

0x7d0e,	// (0x0001f14a) form2_mdip_text_pane_t1_ParamLimits

0x7d0e,	// (0x0001f14a) form2_mdip_text_pane_t1

0x7d2c,	// (0x0001f168) form2_midp_time_pane_t1

0xe61e,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1

0xe630,	// (0x00025a6c) form2_midp_gauge_slider_pane_t2

0xe642,	// (0x00025a7e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb04,	// (0x00026f40) form2_midp_gauge_slider_pane_t

0xe654,	// (0x00025a90) form2_midp_slider_pane

0xe660,	// (0x00025a9c) form2_midp_gauge_wait_pane_t1

0xe66e,	// (0x00025aaa) form2_midp_wait_pane_ParamLimits

0xe66e,	// (0x00025aaa) form2_midp_wait_pane

0xe69a,	// (0x00025ad6) list_single_2graphic_pane_cp4_ParamLimits

0xe69a,	// (0x00025ad6) list_single_2graphic_pane_cp4

0xc42c,	// (0x00023868) list_single_midp_graphic_pane_cp_ParamLimits

0xc42c,	// (0x00023868) list_single_midp_graphic_pane_cp

0xa50b,	// (0x00021947) list_highlight_pane_cp20

0xe6c8,	// (0x00025b04) list_single_2graphic_pane_g1_cp4

0xdcab,	// (0x000250e7) list_single_2graphic_pane_g2_cp4

0xe6d0,	// (0x00025b0c) list_single_2graphic_pane_t1_cp4

0xa5eb,	// (0x00021a27) list_highlight_pane_cp21

0xe6df,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp

0xe6ee,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp

0xe703,	// (0x00025b3f) form2_mdip_string_pane_t1_ParamLimits

0xe703,	// (0x00025b3f) form2_mdip_string_pane_t1

0xa50b,	// (0x00021947) bg_wml_button_pane_cp2

0xa501,	// (0x0002193d) form2_midp_image_pane_g1

0x729d,	// (0x0001e6d9) list_double_large_graphic_pane_g5_ParamLimits

0x729d,	// (0x0001e6d9) list_double_large_graphic_pane_g5

0xb030,	// (0x0002246c) midp_form_pane_ParamLimits

0xa5eb,	// (0x00021a27) main_apps_wheel_pane_ParamLimits

0x8eb3,	// (0x000202ef) popup_preview_window_ParamLimits

0x8eb3,	// (0x000202ef) popup_preview_window

0x906a,	// (0x000204a6) popup_touch_info_window_ParamLimits

0x906a,	// (0x000204a6) popup_touch_info_window

0x9088,	// (0x000204c4) popup_touch_menu_window_ParamLimits

0x9088,	// (0x000204c4) popup_touch_menu_window

0xa4f7,	// (0x00021933) bg_popup_sub_pane_cp6

0xe826,	// (0x00025c62) list_touch_menu_pane

0xe82e,	// (0x00025c6a) list_single_touch_menu_pane_ParamLimits

0xe82e,	// (0x00025c6a) list_single_touch_menu_pane

0xe842,	// (0x00025c7e) list_single_touch_menu_pane_t1

0xa5eb,	// (0x00021a27) bg_popup_sub_pane_cp7_ParamLimits

0xa5eb,	// (0x00021a27) bg_popup_sub_pane_cp7

0xe850,	// (0x00025c8c) heading_sub_pane

0xe858,	// (0x00025c94) list_touch_info_pane_ParamLimits

0xe858,	// (0x00025c94) list_touch_info_pane

0xe867,	// (0x00025ca3) list_single_touch_info_pane_ParamLimits

0xe867,	// (0x00025ca3) list_single_touch_info_pane

0xe879,	// (0x00025cb5) list_single_touch_info_pane_t1

0xe887,	// (0x00025cc3) list_single_touch_info_pane_t2

0x0001,

0xfb12,	// (0x00026f4e) list_single_touch_info_pane_t

0xba97,	// (0x00022ed3) bg_popup_heading_pane_cp

0xe895,	// (0x00025cd1) heading_sub_pane_t1

0xc34b,	// (0x00023787) bg_popup_preview_window_pane_cp_ParamLimits

0xc34b,	// (0x00023787) bg_popup_preview_window_pane_cp

0xe850,	// (0x00025c8c) heading_preview_pane

0xe858,	// (0x00025c94) list_preview_pane_ParamLimits

0xe858,	// (0x00025c94) list_preview_pane

0xe8a3,	// (0x00025cdf) popup_preview_window_g1

0xe867,	// (0x00025ca3) list_single_preview_pane_ParamLimits

0xe867,	// (0x00025ca3) list_single_preview_pane

0xe8ab,	// (0x00025ce7) list_single_preview_pane_g1

0xe8b3,	// (0x00025cef) list_single_preview_pane_t1

0xe879,	// (0x00025cb5) list_single_preview_pane_t2

0x0001,

0xfb17,	// (0x00026f53) list_single_preview_pane_t

0xe8c1,	// (0x00025cfd) bg_popup_heading_pane_cp2_ParamLimits

0xe8c1,	// (0x00025cfd) bg_popup_heading_pane_cp2

0xe8d7,	// (0x00025d13) heading_preview_pane_g1

0xe8df,	// (0x00025d1b) heading_preview_pane_t1_ParamLimits

0xe8df,	// (0x00025d1b) heading_preview_pane_t1

0xa6d7,	// (0x00021b13) soft_indicator_pane_t1_ParamLimits

0xadb5,	// (0x000221f1) scroll_pane_ParamLimits

0xb2d3,	// (0x0002270f) scroll_sc2_left_pane

0xb2dc,	// (0x00022718) scroll_sc2_right_pane

0xb2fb,	// (0x00022737) scroll_bg_pane_g1_ParamLimits

0xb310,	// (0x0002274c) scroll_bg_pane_g2_ParamLimits

0xb328,	// (0x00022764) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00026b25) scroll_bg_pane_g_ParamLimits

0xb2fb,	// (0x00022737) scroll_handle_pane_g1_ParamLimits

0xb34a,	// (0x00022786) scroll_handle_pane_g2_ParamLimits

0xb328,	// (0x00022764) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00026b2c) scroll_handle_pane_g_ParamLimits

0x8b3a,	// (0x0001ff76) popup_choice_list_window_ParamLimits

0x8b3a,	// (0x0001ff76) popup_choice_list_window

0xc221,	// (0x0002365d) choice_list_pane

0xc2a3,	// (0x000236df) cell_toolbar_pane_t1

0xc2cb,	// (0x00023707) toolbar_button_pane_ParamLimits

0xd3a7,	// (0x000247e3) ai_gene_pane_1_t2_ParamLimits

0xd3a7,	// (0x000247e3) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x00026d4d) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x00026d4d) ai_gene_pane_1_t

0xe8fc,	// (0x00025d38) scroll_sc2_left_pane_g1

0xe8fc,	// (0x00025d38) scroll_sc2_right_pane_g1

0xbdd3,	// (0x0002320f) bg_popup_sub_pane_cp10

0xe906,	// (0x00025d42) list_choice_list_pane

0xe91f,	// (0x00025d5b) list_single_choice_list_pane_ParamLimits

0xe91f,	// (0x00025d5b) list_single_choice_list_pane

0xe932,	// (0x00025d6e) list_single_choice_list_pane_g1

0xafe0,	// (0x0002241c) list_single_choice_list_pane_t1_ParamLimits

0xafe0,	// (0x0002241c) list_single_choice_list_pane_t1

0xe93a,	// (0x00025d76) choice_list_pane_g1

0xe942,	// (0x00025d7e) choice_list_pane_t1

0xa4f7,	// (0x00021933) input_focus_pane_cp11

0xb1b4,	// (0x000225f0) title_pane_stacon_g2_ParamLimits

0xb1b4,	// (0x000225f0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00026b0b) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00026b0b) title_pane_stacon_g

0xba97,	// (0x00022ed3) cursor_press_pane

0x8be2,	// (0x0002001e) popup_fep_hwr_window_ParamLimits

0x8be2,	// (0x0002001e) popup_fep_hwr_window

0x8c5a,	// (0x00020096) popup_fep_vkb_window_ParamLimits

0x8c5a,	// (0x00020096) popup_fep_vkb_window

0xe950,	// (0x00025d8c) cursor_press_pane_g1

0x0002,

0xfb40,	// (0x00026f7c) fep_vkb_side_pane_g_ParamLimits

0x9546,	// (0x00020982) fep_hwr_candidate_pane_ParamLimits

0x9546,	// (0x00020982) fep_hwr_candidate_pane

0x9570,	// (0x000209ac) fep_hwr_side_pane_ParamLimits

0x9570,	// (0x000209ac) fep_hwr_side_pane

0x9590,	// (0x000209cc) fep_hwr_top_pane_ParamLimits

0x9590,	// (0x000209cc) fep_hwr_top_pane

0x95a8,	// (0x000209e4) fep_hwr_write_pane_ParamLimits

0x95a8,	// (0x000209e4) fep_hwr_write_pane

0xfb40,	// (0x00026f7c) fep_vkb_side_pane_g

0xe958,	// (0x00025d94) fep_hwr_top_pane_g1

0xe96a,	// (0x00025da6) fep_hwr_top_pane_g2

0x95d4,	// (0x00020a10) fep_hwr_top_pane_g3

0x0002,

0xfb1c,	// (0x00026f58) fep_hwr_top_pane_g

0x95e9,	// (0x00020a25) fep_hwr_top_text_pane

0xb4a0,	// (0x000228dc) fep_hwr_top_text_pane_g1

0xe9a0,	// (0x00025ddc) fep_hwr_top_text_pane_t1

0x96df,	// (0x00020b1b) fep_hwr_candidate_pane_g1

0xebe3,	// (0x0002601f) fep_vkb_keypad_pane_g3_ParamLimits

0xebe3,	// (0x0002601f) fep_vkb_keypad_pane_g3

0xec0b,	// (0x00026047) fep_vkb_keypad_pane_g4_ParamLimits

0xec0b,	// (0x00026047) fep_vkb_keypad_pane_g4

0xec7a,	// (0x000260b6) fep_vkb_bottom_pane_g2_ParamLimits

0xec7a,	// (0x000260b6) fep_vkb_bottom_pane_g2

0x0001,

0xfb47,	// (0x00026f83) fep_vkb_bottom_pane_g_ParamLimits

0xfb47,	// (0x00026f83) fep_vkb_bottom_pane_g

0xe8fc,	// (0x00025d38) cell_vkb_side_pane_g2

0x0001,

0xfb51,	// (0x00026f8d) cell_vkb_side_pane_g

0xed05,	// (0x00026141) cell_vkb_side_pane_t1

0xed13,	// (0x0002614f) cell_vkb_side_pane_t1_copy1

0xe8fc,	// (0x00025d38) bg_fep_vkb_candidate_pane_g2

0xee3f,	// (0x0002627b) cell_vkb_candidate_pane_ParamLimits

0xe9ae,	// (0x00025dea) aid_size_cell_vkb_ParamLimits

0xe9ae,	// (0x00025dea) aid_size_cell_vkb

0xee3f,	// (0x0002627b) cell_vkb_candidate_pane

0x96f9,	// (0x00020b35) bg_popup_fep_shadow_pane_g1

0xea3a,	// (0x00025e76) fep_vkb_bottom_pane_ParamLimits

0xea3a,	// (0x00025e76) fep_vkb_bottom_pane

0xea70,	// (0x00025eac) fep_vkb_candidate_pane_ParamLimits

0xea70,	// (0x00025eac) fep_vkb_candidate_pane

0xea8c,	// (0x00025ec8) fep_vkb_keypad_pane_ParamLimits

0xea8c,	// (0x00025ec8) fep_vkb_keypad_pane

0xeacb,	// (0x00025f07) fep_vkb_side_pane_ParamLimits

0xeacb,	// (0x00025f07) fep_vkb_side_pane

0xeb07,	// (0x00025f43) fep_vkb_top_pane_ParamLimits

0xeb07,	// (0x00025f43) fep_vkb_top_pane

0xeb3c,	// (0x00025f78) fep_vkb_top_pane_g1_ParamLimits

0xeb3c,	// (0x00025f78) fep_vkb_top_pane_g1

0xeb4b,	// (0x00025f87) fep_vkb_top_pane_g2_ParamLimits

0xeb4b,	// (0x00025f87) fep_vkb_top_pane_g2

0xeb5a,	// (0x00025f96) fep_vkb_top_pane_g3_ParamLimits

0xeb5a,	// (0x00025f96) fep_vkb_top_pane_g3

0x0003,

0xfb37,	// (0x00026f73) fep_vkb_top_pane_g_ParamLimits

0xfb37,	// (0x00026f73) fep_vkb_top_pane_g

0xeb78,	// (0x00025fb4) fep_vkb_top_text_pane_ParamLimits

0xeb78,	// (0x00025fb4) fep_vkb_top_text_pane

0xeb89,	// (0x00025fc5) fep_vkb_side_pane_g1_ParamLimits

0xeb89,	// (0x00025fc5) fep_vkb_side_pane_g1

0xebd2,	// (0x0002600e) grid_vkb_side_pane_ParamLimits

0xebd2,	// (0x0002600e) grid_vkb_side_pane

0x9701,	// (0x00020b3d) bg_popup_fep_shadow_pane_g2

0x970a,	// (0x00020b46) bg_popup_fep_shadow_pane_g3

0x9712,	// (0x00020b4e) bg_popup_fep_shadow_pane_g4

0x971b,	// (0x00020b57) bg_popup_fep_shadow_pane_g5

0x9725,	// (0x00020b61) bg_popup_fep_shadow_pane_g6

0x972d,	// (0x00020b69) bg_popup_fep_shadow_pane_g7

0xaec9,	// (0x00022305) bg_popup_fep_shadow_pane_g8

0xec29,	// (0x00026065) grid_vkb_keypad_number_pane_ParamLimits

0xec29,	// (0x00026065) grid_vkb_keypad_number_pane

0xec39,	// (0x00026075) grid_vkb_keypad_pane_ParamLimits

0xec39,	// (0x00026075) grid_vkb_keypad_pane

0xec5f,	// (0x0002609b) fep_vkb_bottom_pane_g1_ParamLimits

0xec5f,	// (0x0002609b) fep_vkb_bottom_pane_g1

0xec88,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xec88,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane

0xec9d,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xec9d,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane

0xecb2,	// (0x000260ee) fep_vkb_top_text_pane_g1

0xeccd,	// (0x00026109) fep_vkb_top_text_pane_t1

0xece2,	// (0x0002611e) cell_vkb_side_pane_ParamLimits

0xece2,	// (0x0002611e) cell_vkb_side_pane

0xe8fc,	// (0x00025d38) cell_vkb_side_pane_g1

0xed21,	// (0x0002615d) cell_vkb_keypad_pane_ParamLimits

0xed21,	// (0x0002615d) cell_vkb_keypad_pane

0xed96,	// (0x000261d2) cell_vkb_keypad_pane_g1

0x0008,

0xfb64,	// (0x00026fa0) bg_popup_fep_shadow_pane_g

0xe8fc,	// (0x00025d38) cell_hwr_side_pane_g1

0xe8fc,	// (0x00025d38) cell_hwr_side_pane_g2

0xeda0,	// (0x000261dc) cell_vkb_keypad_pane_t1

0xedae,	// (0x000261ea) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xedae,	// (0x000261ea) cell_vkb_keypad_bottom_left_pane

0xedcb,	// (0x00026207) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xedcb,	// (0x00026207) cell_vkb_keypad_bottom_right_pane

0xe8fc,	// (0x00025d38) cell_vkb_keypad_bottom_left_pane_g1

0xe8fc,	// (0x00025d38) cell_vkb_keypad_bottom_right_pane_g1

0xee04,	// (0x00026240) cell_vkb_keypad_number_pane_ParamLimits

0xee04,	// (0x00026240) cell_vkb_keypad_number_pane

0xee23,	// (0x0002625f) cell_vkb_keypad_number_pane_g1

0xee2d,	// (0x00026269) cell_vkb_keypad_number_pane_g2

0xee36,	// (0x00026272) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb56,	// (0x00026f92) cell_vkb_keypad_number_pane_g

0xeda0,	// (0x000261dc) cell_vkb_keypad_number_pane_t1

0xee5a,	// (0x00026296) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x00026f8d) cell_hwr_side_pane_g

0xee73,	// (0x000262af) cell_hwr_side_pane_t1

0x973f,	// (0x00020b7b) cell_hwr_side_pane_t1_copy1

0xeb6a,	// (0x00025fa6) cell_hwr_candidate_pane_g1

0x974d,	// (0x00020b89) cell_hwr_candidate_pane_t1

0xe8fc,	// (0x00025d38) cell_vkb_candidate_pane_g2

0xeeb7,	// (0x000262f3) cell_vkb_candidate_pane_t1

0x950d,	// (0x00020949) bg_popup_fep_shadow_pane_ParamLimits

0x950d,	// (0x00020949) bg_popup_fep_shadow_pane

0x33cf,	// (0x0001a80b) bg_fep_hwr_top_pane_g4

0xe97c,	// (0x00025db8) bg_hwr_side_pane_g1_ParamLimits

0xe97c,	// (0x00025db8) bg_hwr_side_pane_g1

0x9625,	// (0x00020a61) cell_hwr_side_pane_ParamLimits

0x9625,	// (0x00020a61) cell_hwr_side_pane

0x9660,	// (0x00020a9c) fep_hwr_write_pane_g1_ParamLimits

0x9660,	// (0x00020a9c) fep_hwr_write_pane_g1

0x966d,	// (0x00020aa9) fep_hwr_write_pane_g2_ParamLimits

0x966d,	// (0x00020aa9) fep_hwr_write_pane_g2

0x967a,	// (0x00020ab6) fep_hwr_write_pane_g3_ParamLimits

0x967a,	// (0x00020ab6) fep_hwr_write_pane_g3

0x9688,	// (0x00020ac4) fep_hwr_write_pane_g4_ParamLimits

0x9688,	// (0x00020ac4) fep_hwr_write_pane_g4

0x0005,

0xfb23,	// (0x00026f5f) fep_hwr_write_pane_g_ParamLimits

0xfb23,	// (0x00026f5f) fep_hwr_write_pane_g

0x33cf,	// (0x0001a80b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x33cf,	// (0x0001a80b) bg_fep_hwr_candidate_pane_g2

0x969d,	// (0x00020ad9) cell_hwr_candidate_pane_ParamLimits

0x969d,	// (0x00020ad9) cell_hwr_candidate_pane

0x96df,	// (0x00020b1b) fep_hwr_candidate_pane_g1_ParamLimits

0xe9dc,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe9dc,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2

0xeb6a,	// (0x00025fa6) fep_vkb_top_pane_g4_ParamLimits

0xeb6a,	// (0x00025fa6) fep_vkb_top_pane_g4

0xebb0,	// (0x00025fec) fep_vkb_side_pane_g2_ParamLimits

0xebb0,	// (0x00025fec) fep_vkb_side_pane_g2

0x73db,	// (0x0001e817) list_setting_pane_t4_ParamLimits

0x73db,	// (0x0001e817) list_setting_pane_t4

0x746d,	// (0x0001e8a9) list_setting_number_pane_t5_ParamLimits

0x746d,	// (0x0001e8a9) list_setting_number_pane_t5

0xb4e7,	// (0x00022923) list_double_heading_pane_cp2_ParamLimits

0xb4e7,	// (0x00022923) list_double_heading_pane_cp2

0xae36,	// (0x00022272) list_double_heading_pane_g1_cp2_ParamLimits

0xae36,	// (0x00022272) list_double_heading_pane_g1_cp2

0xae68,	// (0x000222a4) list_double_heading_pane_g2_cp2_ParamLimits

0xae68,	// (0x000222a4) list_double_heading_pane_g2_cp2

0xeec5,	// (0x00026301) list_double_heading_pane_t1_cp2_ParamLimits

0xeec5,	// (0x00026301) list_double_heading_pane_t1_cp2

0xeedb,	// (0x00026317) list_double_heading_pane_t2_cp2_ParamLimits

0xeedb,	// (0x00026317) list_double_heading_pane_t2_cp2

0xa4df,	// (0x0002191b) aid_value_unit2

0x83a9,	// (0x0001f7e5) popup_preview_fixed_window

0xa874,	// (0x00021cb0) bg_popup_preview_window_pane_cp02

0xeeed,	// (0x00026329) list_preview_fixed_pane

0xef33,	// (0x0002636f) list_empty_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_empty_pane_fp

0xef33,	// (0x0002636f) list_single_cale_day_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_cale_day_pane_fp

0xef33,	// (0x0002636f) list_single_graphic_heading_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_graphic_heading_pane_fp

0xef33,	// (0x0002636f) list_single_graphic_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_graphic_pane_fp

0xef33,	// (0x0002636f) list_single_heading_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_heading_pane_fp

0xef33,	// (0x0002636f) list_single_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_pane_fp

0xef49,	// (0x00026385) list_single_pane_fp_g1_ParamLimits

0xef49,	// (0x00026385) list_single_pane_fp_g1

0x7100,	// (0x0001e53c) list_single_pane_fp_g2_ParamLimits

0x7100,	// (0x0001e53c) list_single_pane_fp_g2

0x7d3f,	// (0x0001f17b) list_single_pane_fp_g3_ParamLimits

0x7d3f,	// (0x0001f17b) list_single_pane_fp_g3

0xef55,	// (0x00026391) list_single_pane_fp_g4_ParamLimits

0xef55,	// (0x00026391) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00026fc1) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00026fc1) list_single_pane_fp_g

0x7d53,	// (0x0001f18f) list_single_pane_fp_t1_ParamLimits

0x7d53,	// (0x0001f18f) list_single_pane_fp_t1

0x7d6a,	// (0x0001f1a6) list_single_graphic_pane_fp_g1_ParamLimits

0x7d6a,	// (0x0001f1a6) list_single_graphic_pane_fp_g1

0xef49,	// (0x00026385) list_single_graphic_pane_fp_g2_ParamLimits

0xef49,	// (0x00026385) list_single_graphic_pane_fp_g2

0x7100,	// (0x0001e53c) list_single_graphic_pane_fp_g3_ParamLimits

0x7100,	// (0x0001e53c) list_single_graphic_pane_fp_g3

0x7d3f,	// (0x0001f17b) list_single_graphic_pane_fp_g4_ParamLimits

0x7d3f,	// (0x0001f17b) list_single_graphic_pane_fp_g4

0xef55,	// (0x00026391) list_single_graphic_pane_fp_g5_ParamLimits

0xef55,	// (0x00026391) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00026fca) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00026fca) list_single_graphic_pane_fp_g

0x7d76,	// (0x0001f1b2) list_single_graphic_pane_fp_t1_ParamLimits

0x7d76,	// (0x0001f1b2) list_single_graphic_pane_fp_t1

0x7d6a,	// (0x0001f1a6) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7d6a,	// (0x0001f1a6) list_single_graphic_heading_pane_fp_g1

0xef49,	// (0x00026385) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xef49,	// (0x00026385) list_single_graphic_heading_pane_fp_g2

0x7100,	// (0x0001e53c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7100,	// (0x0001e53c) list_single_graphic_heading_pane_fp_g3

0x7d3f,	// (0x0001f17b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7d3f,	// (0x0001f17b) list_single_graphic_heading_pane_fp_g4

0xef55,	// (0x00026391) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xef55,	// (0x00026391) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00026fca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00026fca) list_single_graphic_heading_pane_fp_g

0x7d8c,	// (0x0001f1c8) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7d8c,	// (0x0001f1c8) list_single_graphic_heading_pane_fp_t1

0x7da2,	// (0x0001f1de) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7da2,	// (0x0001f1de) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00026fd5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00026fd5) list_single_graphic_heading_pane_fp_t

0x7db4,	// (0x0001f1f0) list_single_cale_day_pane_fp_g1_ParamLimits

0x7db4,	// (0x0001f1f0) list_single_cale_day_pane_fp_g1

0xef61,	// (0x0002639d) list_single_cale_day_pane_fp_g2_ParamLimits

0xef61,	// (0x0002639d) list_single_cale_day_pane_fp_g2

0x7dec,	// (0x0001f228) list_single_cale_day_pane_fp_g3_ParamLimits

0x7dec,	// (0x0001f228) list_single_cale_day_pane_fp_g3

0x7e14,	// (0x0001f250) list_single_cale_day_pane_fp_g4_ParamLimits

0x7e14,	// (0x0001f250) list_single_cale_day_pane_fp_g4

0x7e38,	// (0x0001f274) list_single_cale_day_pane_fp_g5_ParamLimits

0x7e38,	// (0x0001f274) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00026fda) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00026fda) list_single_cale_day_pane_fp_g

0x7e5c,	// (0x0001f298) list_single_cale_day_pane_fp_t1_ParamLimits

0x7e5c,	// (0x0001f298) list_single_cale_day_pane_fp_t1

0x7e82,	// (0x0001f2be) list_single_cale_day_pane_fp_t2_ParamLimits

0x7e82,	// (0x0001f2be) list_single_cale_day_pane_fp_t2

0x7e9b,	// (0x0001f2d7) list_single_cale_day_pane_fp_t3_ParamLimits

0x7e9b,	// (0x0001f2d7) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00026fe5) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00026fe5) list_single_cale_day_pane_fp_t

0xef49,	// (0x00026385) list_empty_pane_fp_g1_ParamLimits

0xef49,	// (0x00026385) list_empty_pane_fp_g1

0x7eb4,	// (0x0001f2f0) list_empty_pane_fp_t1

0x7ec2,	// (0x0001f2fe) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00026fec) list_empty_pane_fp_t

0xef49,	// (0x00026385) list_single_heading_pane_fp_g1_ParamLimits

0xef49,	// (0x00026385) list_single_heading_pane_fp_g1

0x7100,	// (0x0001e53c) list_single_heading_pane_fp_g2_ParamLimits

0x7100,	// (0x0001e53c) list_single_heading_pane_fp_g2

0x7d3f,	// (0x0001f17b) list_single_heading_pane_fp_g3_ParamLimits

0x7d3f,	// (0x0001f17b) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00026ff1) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00026ff1) list_single_heading_pane_fp_g

0x7ed0,	// (0x0001f30c) list_single_heading_pane_fp_t1_ParamLimits

0x7ed0,	// (0x0001f30c) list_single_heading_pane_fp_t1

0x7ee2,	// (0x0001f31e) list_single_heading_pane_fp_t2_ParamLimits

0x7ee2,	// (0x0001f31e) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00026ff8) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00026ff8) list_single_heading_pane_fp_t

0xb04e,	// (0x0002248a) aid_size_cell_fast

0xa7e4,	// (0x00021c20) soft_indicator_pane_cp1_t1

0xb088,	// (0x000224c4) cell_app_pane_cp2_ParamLimits

0xb088,	// (0x000224c4) cell_app_pane_cp2

0x952f,	// (0x0002096b) fep_hwr_candidate_drop_down_list_pane

0x33dd,	// (0x0001a819) fep_hwr_candidate_pane_g3_ParamLimits

0x33dd,	// (0x0001a819) fep_hwr_candidate_pane_g3

0x33ea,	// (0x0001a826) fep_hwr_candidate_pane_g4_ParamLimits

0x33ea,	// (0x0001a826) fep_hwr_candidate_pane_g4

0x0002,

0xfb30,	// (0x00026f6c) fep_hwr_candidate_pane_g_ParamLimits

0xfb30,	// (0x00026f6c) fep_hwr_candidate_pane_g

0xea5f,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xea5f,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane

0xee62,	// (0x0002629e) fep_vkb_candidate_pane_g3

0xee6a,	// (0x000262a6) fep_vkb_candidate_pane_g4

0x0002,

0xfb5d,	// (0x00026f99) fep_vkb_candidate_pane_g

0xeb6a,	// (0x00025fa6) cell_hwr_candidate_pane_g1_ParamLimits

0xf015,	// (0x00026451) cell_hwr_candidate_pane_g3_ParamLimits

0xf015,	// (0x00026451) cell_hwr_candidate_pane_g3

0xf036,	// (0x00026472) cell_hwr_candidate_pane_g4_ParamLimits

0xf036,	// (0x00026472) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00026fb3) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00026fb3) cell_hwr_candidate_pane_g

0xee81,	// (0x000262bd) cell_vkb_candidate_pane_g3_ParamLimits

0xee81,	// (0x000262bd) cell_vkb_candidate_pane_g3

0xee9c,	// (0x000262d8) cell_vkb_candidate_pane_g4_ParamLimits

0xee9c,	// (0x000262d8) cell_vkb_candidate_pane_g4

0xef6d,	// (0x000263a9) cell_app_pane_cp2_g1_ParamLimits

0xef6d,	// (0x000263a9) cell_app_pane_cp2_g1

0xef8b,	// (0x000263c7) cell_app_pane_cp2_g2_ParamLimits

0xef8b,	// (0x000263c7) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00026ffd) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00026ffd) cell_app_pane_cp2_g

0xef97,	// (0x000263d3) cell_app_pane_cp2_t1_ParamLimits

0xef97,	// (0x000263d3) cell_app_pane_cp2_t1

0xae5a,	// (0x00022296) grid_highlight_pane_cp1_ParamLimits

0xae5a,	// (0x00022296) grid_highlight_pane_cp1

0x976b,	// (0x00020ba7) cell_hwr_candidate_pane_cp1_ParamLimits

0x976b,	// (0x00020ba7) cell_hwr_candidate_pane_cp1

0xeb6a,	// (0x00025fa6) fep_hwr_candidate_drop_down_list_pane_g1

0xefc9,	// (0x00026405) fep_hwr_candidate_drop_down_list_pane_g2

0xefd6,	// (0x00026412) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00027002) fep_hwr_candidate_drop_down_list_pane_g

0x978a,	// (0x00020bc6) fep_hwr_candidate_drop_down_list_scroll_pane

0x9793,	// (0x00020bcf) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9793,	// (0x00020bcf) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x97a0,	// (0x00020bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x97a0,	// (0x00020bdc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x97ad,	// (0x00020be9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x97ad,	// (0x00020be9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xee81,	// (0x000262bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xee81,	// (0x000262bd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xee9c,	// (0x000262d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xee9c,	// (0x000262d8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x97ba,	// (0x00020bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x97ba,	// (0x00020bf6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x97d5,	// (0x00020c11) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x97d5,	// (0x00020c11) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x97f0,	// (0x00020c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x97f0,	// (0x00020c2c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00027009) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00027009) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xefa9,	// (0x000263e5) cell_vkb_candidate_pane_cp1_ParamLimits

0xefa9,	// (0x000263e5) cell_vkb_candidate_pane_cp1

0xeb6a,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1

0xefc9,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xefc9,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2

0xefd6,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xefd6,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00027002) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc6,	// (0x00027002) fep_vkb_candidate_drop_down_list_pane_g

0xefe3,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xefe3,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane

0xeff0,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeff0,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xeffd,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeffd,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf009,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf009,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf015,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf015,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf036,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf036,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf057,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf057,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf078,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf078,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf099,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf099,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbde,	// (0x0002701a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbde,	// (0x0002701a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa515,	// (0x00021951) title_pane_g1_ParamLimits

0xa522,	// (0x0002195e) title_pane_g2_ParamLimits

0xf554,	// (0x00026990) title_pane_g_ParamLimits

0xb490,	// (0x000228cc) aid_call2_pane

0xb498,	// (0x000228d4) aid_call_pane

0xb4a0,	// (0x000228dc) popup_clock_analogue_window_g1

0xb4a0,	// (0x000228dc) popup_clock_analogue_window_g2

0x8712,	// (0x0001fb4e) popup_clock_analogue_window_g3

0x871b,	// (0x0001fb57) popup_clock_analogue_window_g4

0xa501,	// (0x0002193d) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00026b3a) popup_clock_analogue_window_g

0x8723,	// (0x0001fb5f) popup_clock_analogue_window_t1

0x8731,	// (0x0001fb6d) clock_digital_number_pane_ParamLimits

0x8731,	// (0x0001fb6d) clock_digital_number_pane

0x873d,	// (0x0001fb79) clock_digital_number_pane_cp02_ParamLimits

0x873d,	// (0x0001fb79) clock_digital_number_pane_cp02

0x8749,	// (0x0001fb85) clock_digital_number_pane_cp03_ParamLimits

0x8749,	// (0x0001fb85) clock_digital_number_pane_cp03

0x8755,	// (0x0001fb91) clock_digital_number_pane_cp04_ParamLimits

0x8755,	// (0x0001fb91) clock_digital_number_pane_cp04

0x8761,	// (0x0001fb9d) clock_digital_separator_pane_ParamLimits

0x8761,	// (0x0001fb9d) clock_digital_separator_pane

0x876d,	// (0x0001fba9) popup_clock_digital_window_t1_ParamLimits

0x876d,	// (0x0001fba9) popup_clock_digital_window_t1

0xa501,	// (0x0002193d) clock_digital_number_pane_g1

0xa501,	// (0x0002193d) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00026b45) clock_digital_number_pane_g

0xa501,	// (0x0002193d) clock_digital_separator_pane_g1

0xa501,	// (0x0002193d) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00026b45) clock_digital_separator_pane_g

0xbdf5,	// (0x00023231) aid_fill_nsta_ParamLimits

0xbf3b,	// (0x00023377) indicator_nsta_pane_ParamLimits

0xc0ae,	// (0x000234ea) popup_clock_analogue_window

0xc0ae,	// (0x000234ea) popup_clock_digital_window

0xa5eb,	// (0x00021a27) grid_indicator_nsta_pane_ParamLimits

0xe2c4,	// (0x00025700) clock_nsta_pane_t2

0x0001,

0xfab0,	// (0x00026eec) clock_nsta_pane_t

0x86d6,	// (0x0001fb12) aid_size_max_handle

0x86e0,	// (0x0001fb1c) aid_size_min_handle

0xba97,	// (0x00022ed3) editor_scroll_pane

0xf0b4,	// (0x000264f0) ex_editor_pane

0xafbc,	// (0x000223f8) scroll_pane_cp13

0xade1,	// (0x0002221d) scroll_pane_cp14

0xb4cf,	// (0x0002290b) scroll_pane_cp36

0xb4fb,	// (0x00022937) list_single_graphic_hl_pane_cp2_ParamLimits

0xb4fb,	// (0x00022937) list_single_graphic_hl_pane_cp2

0x79e1,	// (0x0001ee1d) list_single_graphic_hl_pane_ParamLimits

0x79e1,	// (0x0001ee1d) list_single_graphic_hl_pane

0x7ef8,	// (0x0001f334) aid_size_min_hl_cp1

0xf0bc,	// (0x000264f8) list_highlight_pane_cp34_ParamLimits

0xf0bc,	// (0x000264f8) list_highlight_pane_cp34

0xf0cd,	// (0x00026509) list_single_graphic_hl_pane_g1_ParamLimits

0xf0cd,	// (0x00026509) list_single_graphic_hl_pane_g1

0x7f01,	// (0x0001f33d) list_single_graphic_hl_pane_g2_ParamLimits

0x7f01,	// (0x0001f33d) list_single_graphic_hl_pane_g2

0x7f01,	// (0x0001f33d) list_single_graphic_hl_pane_g3_ParamLimits

0x7f01,	// (0x0001f33d) list_single_graphic_hl_pane_g3

0x7f0d,	// (0x0001f349) list_single_graphic_hl_pane_g4_ParamLimits

0x7f0d,	// (0x0001f349) list_single_graphic_hl_pane_g4

0x7f19,	// (0x0001f355) list_single_graphic_hl_pane_g5_ParamLimits

0x7f19,	// (0x0001f355) list_single_graphic_hl_pane_g5

0x0004,

0xfbef,	// (0x0002702b) list_single_graphic_hl_pane_g_ParamLimits

0xfbef,	// (0x0002702b) list_single_graphic_hl_pane_g

0x7f2d,	// (0x0001f369) list_single_graphic_hl_pane_t1_ParamLimits

0x7f2d,	// (0x0001f369) list_single_graphic_hl_pane_t1

0xf0da,	// (0x00026516) aid_size_min_hl_cp2

0xf0e3,	// (0x0002651f) list_highlight_pane_cp34_cp2_ParamLimits

0xf0e3,	// (0x0002651f) list_highlight_pane_cp34_cp2

0xf0cd,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf0cd,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2

0xf0f0,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf0f0,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2

0xf0fc,	// (0x00026538) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf0fc,	// (0x00026538) list_single_graphic_hl_pane_g3_cp2

0xae42,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xae42,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2

0xf10a,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf10a,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2

0x8a18,	// (0x0001fe54) control_pane_g4_ParamLimits

0x8a18,	// (0x0001fe54) control_pane_g4

0xbdd3,	// (0x0002320f) bg_popup_sub_pane_cp10_ParamLimits

0xe906,	// (0x00025d42) list_choice_list_pane_ParamLimits

0xe915,	// (0x00025d51) scroll_pane_cp23

0xa874,	// (0x00021cb0) bg_popup_preview_window_pane_cp02_ParamLimits

0xeeed,	// (0x00026329) list_preview_fixed_pane_ParamLimits

0xef03,	// (0x0002633f) list_preview_fixed_pane_cp_ParamLimits

0xef03,	// (0x0002633f) list_preview_fixed_pane_cp

0xef0f,	// (0x0002634b) popup_preview_fixed_window_g1_ParamLimits

0xef0f,	// (0x0002634b) popup_preview_fixed_window_g1

0xef1b,	// (0x00026357) popup_preview_fixed_window_g2_ParamLimits

0xef1b,	// (0x00026357) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00026fba) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00026fba) popup_preview_fixed_window_g

0x864a,	// (0x0001fa86) aid_navi_side_left_pane_ParamLimits

0x865f,	// (0x0001fa9b) aid_navi_side_right_pane_ParamLimits

0x8677,	// (0x0001fab3) navi_icon_pane_stacon_ParamLimits

0x868b,	// (0x0001fac7) navi_navi_pane_stacon_ParamLimits

0x8677,	// (0x0001fab3) navi_text_pane_stacon_ParamLimits

0xa4f7,	// (0x00021933) main_text_info_pane

0xf134,	// (0x00026570) listscroll_text_info_pane

0xf13c,	// (0x00026578) list_text_info_pane_ParamLimits

0xf13c,	// (0x00026578) list_text_info_pane

0xf14b,	// (0x00026587) scroll_pane_cp24_ParamLimits

0xf14b,	// (0x00026587) scroll_pane_cp24

0xf169,	// (0x000265a5) list_text_info_pane_t1_ParamLimits

0xf169,	// (0x000265a5) list_text_info_pane_t1

0x8b56,	// (0x0001ff92) popup_fast_swap2_window_ParamLimits

0x8b56,	// (0x0001ff92) popup_fast_swap2_window

0xf19e,	// (0x000265da) aid_size_cell_fast2

0xa4f7,	// (0x00021933) bg_popup_window_pane_cp17

0xc747,	// (0x00023b83) heading_pane_cp2

0xaab4,	// (0x00021ef0) listscroll_fast2_pane

0xf1a8,	// (0x000265e4) grid_fast2_pane

0xf1b2,	// (0x000265ee) listscroll_fast2_pane_g1

0xf1ba,	// (0x000265f6) listscroll_fast2_pane_g2

0x0001,

0xfbfa,	// (0x00027036) listscroll_fast2_pane_g

0xafbc,	// (0x000223f8) scroll_pane_cp26

0xf1c4,	// (0x00026600) cell_fast2_pane_ParamLimits

0xf1c4,	// (0x00026600) cell_fast2_pane

0xf1d9,	// (0x00026615) cell_fast2_pane_g1

0xf1e2,	// (0x0002661e) cell_fast2_pane_g2

0xf1eb,	// (0x00026627) cell_fast2_pane_g3

0x0002,

0xfbff,	// (0x0002703b) cell_fast2_pane_g

0xab9e,	// (0x00021fda) grid_highlight_pane_cp9

0xabb3,	// (0x00021fef) main_eswt_pane_ParamLimits

0xabb3,	// (0x00021fef) main_eswt_pane

0xf160,	// (0x0002659c) list_single_text_info_pane

0xf1f3,	// (0x0002662f) eswt_ctrl_button_pane

0xf1f3,	// (0x0002662f) eswt_ctrl_canvas_pane

0xf1fb,	// (0x00026637) eswt_ctrl_combo_pane

0xf1f3,	// (0x0002662f) eswt_ctrl_default_pane

0xf1f3,	// (0x0002662f) eswt_ctrl_label_pane

0xf203,	// (0x0002663f) eswt_ctrl_wait_pane

0xf20b,	// (0x00026647) eswt_shell_pane

0xa4f7,	// (0x00021933) listscroll_eswt_app_pane

0xf22b,	// (0x00026667) popup_eswt_tasktip_window_ParamLimits

0xf22b,	// (0x00026667) popup_eswt_tasktip_window

0xc34b,	// (0x00023787) bg_popup_window_pane_cp18

0xf23c,	// (0x00026678) eswt_control_pane_g1_ParamLimits

0xf23c,	// (0x00026678) eswt_control_pane_g1

0xf249,	// (0x00026685) eswt_control_pane_g2_ParamLimits

0xf249,	// (0x00026685) eswt_control_pane_g2

0xf256,	// (0x00026692) eswt_control_pane_g3_ParamLimits

0xf256,	// (0x00026692) eswt_control_pane_g3

0xf263,	// (0x0002669f) eswt_control_pane_g4_ParamLimits

0xf263,	// (0x0002669f) eswt_control_pane_g4

0x0003,

0xfc06,	// (0x00027042) eswt_control_pane_g_ParamLimits

0xfc06,	// (0x00027042) eswt_control_pane_g

0xae5a,	// (0x00022296) bg_button_pane_ParamLimits

0xae5a,	// (0x00022296) bg_button_pane

0xabb3,	// (0x00021fef) common_borders_pane_copy2_ParamLimits

0xabb3,	// (0x00021fef) common_borders_pane_copy2

0xf270,	// (0x000266ac) control_button_pane_g1_ParamLimits

0xf270,	// (0x000266ac) control_button_pane_g1

0xf27c,	// (0x000266b8) control_button_pane_g2_ParamLimits

0xf27c,	// (0x000266b8) control_button_pane_g2

0xf288,	// (0x000266c4) control_button_pane_g3_ParamLimits

0xf288,	// (0x000266c4) control_button_pane_g3

0x0002,

0xfc0f,	// (0x0002704b) control_button_pane_g_ParamLimits

0xfc0f,	// (0x0002704b) control_button_pane_g

0xf29c,	// (0x000266d8) control_button_pane_t1

0xf2aa,	// (0x000266e6) control_button_pane_t2

0x0001,

0xfc16,	// (0x00027052) control_button_pane_t

0xc2d7,	// (0x00023713) bg_button_pane_g1

0xc2df,	// (0x0002371b) bg_button_pane_g2

0xc2e7,	// (0x00023723) bg_button_pane_g3

0xc2ef,	// (0x0002372b) bg_button_pane_g4

0xc2f7,	// (0x00023733) bg_button_pane_g5

0xc2ff,	// (0x0002373b) bg_button_pane_g6

0xc307,	// (0x00023743) bg_button_pane_g7

0xc30f,	// (0x0002374b) bg_button_pane_g8

0xc317,	// (0x00023753) bg_button_pane_g9

0x0008,

0xf865,	// (0x00026ca1) bg_button_pane_g

0xe8c1,	// (0x00025cfd) common_borders_pane_ParamLimits

0xe8c1,	// (0x00025cfd) common_borders_pane

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy1_ParamLimits

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy1

0xf249,	// (0x00026685) eswt_control_pane_g2_copy1_ParamLimits

0xf249,	// (0x00026685) eswt_control_pane_g2_copy1

0xf256,	// (0x00026692) eswt_control_pane_g3_copy1_ParamLimits

0xf256,	// (0x00026692) eswt_control_pane_g3_copy1

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy1_ParamLimits

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy1

0xe8fc,	// (0x00025d38) bg_eswt_ctrl_canvas_pane_g1

0xe8c1,	// (0x00025cfd) common_borders_pane_cp2_ParamLimits

0xe8c1,	// (0x00025cfd) common_borders_pane_cp2

0xe8c1,	// (0x00025cfd) common_borders_pane_cp3_ParamLimits

0xe8c1,	// (0x00025cfd) common_borders_pane_cp3

0xf2b8,	// (0x000266f4) separator_horizontal_pane

0xf2c0,	// (0x000266fc) separator_vertical_pane

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy2_ParamLimits

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy2

0xf249,	// (0x00026685) eswt_control_pane_g2_copy2_ParamLimits

0xf249,	// (0x00026685) eswt_control_pane_g2_copy2

0xf256,	// (0x00026692) eswt_control_pane_g3_copy2_ParamLimits

0xf256,	// (0x00026692) eswt_control_pane_g3_copy2

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy2_ParamLimits

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy2

0xa4f7,	// (0x00021933) common_borders_pane_cp4

0xf2c9,	// (0x00026705) separator_horizontal_pane_g1

0xf2d2,	// (0x0002670e) separator_horizontal_pane_g2

0xf2db,	// (0x00026717) separator_horizontal_pane_g3

0x0002,

0xfc1b,	// (0x00027057) separator_horizontal_pane_g

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy3_ParamLimits

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy3

0xf249,	// (0x00026685) eswt_control_pane_g2_copy3_ParamLimits

0xf249,	// (0x00026685) eswt_control_pane_g2_copy3

0xf256,	// (0x00026692) eswt_control_pane_g3_copy3_ParamLimits

0xf256,	// (0x00026692) eswt_control_pane_g3_copy3

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy3_ParamLimits

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy3

0xa4f7,	// (0x00021933) common_borders_pane_cp5

0xf2e4,	// (0x00026720) separator_vertical_pane_g1

0xf2ed,	// (0x00026729) separator_vertical_pane_g2

0xf2f6,	// (0x00026732) separator_vertical_pane_g3

0x0002,

0xfc22,	// (0x0002705e) separator_vertical_pane_g

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy4_ParamLimits

0xf23c,	// (0x00026678) eswt_control_pane_g1_copy4

0xf249,	// (0x00026685) eswt_control_pane_g2_copy4_ParamLimits

0xf249,	// (0x00026685) eswt_control_pane_g2_copy4

0xf256,	// (0x00026692) eswt_control_pane_g3_copy4_ParamLimits

0xf256,	// (0x00026692) eswt_control_pane_g3_copy4

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy4_ParamLimits

0xf263,	// (0x0002669f) eswt_control_pane_g4_copy4

0xf2ff,	// (0x0002673b) eswt_ctrl_combo_button_pane

0xf307,	// (0x00026743) eswt_ctrl_input_pane

0xf30f,	// (0x0002674b) popup_choice_list_window_cp70

0xf317,	// (0x00026753) eswt_ctrl_input_pane_t1

0xa4f7,	// (0x00021933) input_focus_pane_cp70

0xe8c1,	// (0x00025cfd) bg_button_pane_cp70_ParamLimits

0xe8c1,	// (0x00025cfd) bg_button_pane_cp70

0xf325,	// (0x00026761) eswt_ctrl_combo_button_pane_g1

0xf32d,	// (0x00026769) wait_bar_pane_cp70

0xc34b,	// (0x00023787) bg_popup_window_pane_cp70_ParamLimits

0xc34b,	// (0x00023787) bg_popup_window_pane_cp70

0xf335,	// (0x00026771) popup_eswt_tasktip_window_t1

0xf34b,	// (0x00026787) wait_bar_pane_cp71_ParamLimits

0xf34b,	// (0x00026787) wait_bar_pane_cp71

0xf357,	// (0x00026793) grid_eswt_app_pane

0xb2dc,	// (0x00022718) scroll_pane_cp70

0xf360,	// (0x0002679c) cell_eswt_app_pane_ParamLimits

0xf360,	// (0x0002679c) cell_eswt_app_pane

0xf394,	// (0x000267d0) cell_eswt_app_pane_g1_ParamLimits

0xf394,	// (0x000267d0) cell_eswt_app_pane_g1

0xf3c3,	// (0x000267ff) cell_eswt_app_pane_g2_ParamLimits

0xf3c3,	// (0x000267ff) cell_eswt_app_pane_g2

0x0001,

0xfc29,	// (0x00027065) cell_eswt_app_pane_g_ParamLimits

0xfc29,	// (0x00027065) cell_eswt_app_pane_g

0xf3e7,	// (0x00026823) cell_eswt_app_pane_t1_ParamLimits

0xf3e7,	// (0x00026823) cell_eswt_app_pane_t1

0xf419,	// (0x00026855) grid_highlight_pane_cp70_ParamLimits

0xf419,	// (0x00026855) grid_highlight_pane_cp70

0xb978,	// (0x00022db4) set_content_pane_g1

0xbd33,	// (0x0002316f) status_small_volume_pane

0x980b,	// (0x00020c47) status_small_volume_pane_g1

0x9813,	// (0x00020c4f) volume_small2_pane

0x981c,	// (0x00020c58) volume_small2_pane_g1

0x9825,	// (0x00020c61) volume_small2_pane_g2

0x982e,	// (0x00020c6a) volume_small2_pane_g3

0x9837,	// (0x00020c73) volume_small2_pane_g4

0x9840,	// (0x00020c7c) volume_small2_pane_g5

0x9849,	// (0x00020c85) volume_small2_pane_g6

0x9852,	// (0x00020c8e) volume_small2_pane_g7

0x985b,	// (0x00020c97) volume_small2_pane_g8

0x9864,	// (0x00020ca0) volume_small2_pane_g9

0x986d,	// (0x00020ca9) volume_small2_pane_g10

0x0009,

0xfc2e,	// (0x0002706a) volume_small2_pane_g

0xecb2,	// (0x000260ee) fep_vkb_top_text_pane_g1_ParamLimits

0xeccd,	// (0x00026109) fep_vkb_top_text_pane_t1_ParamLimits

0xef27,	// (0x00026363) popup_preview_fixed_window_g3_ParamLimits

0xef27,	// (0x00026363) popup_preview_fixed_window_g3

0x8ffd,	// (0x00020439) popup_toolbar_trans_pane

0xd6bd,	// (0x00024af9) aid_height_set_list_ParamLimits

0xd6ce,	// (0x00024b0a) aid_size_parent_ParamLimits

0xbdd3,	// (0x0002320f) list_highlight_pane_cp2_ParamLimits

0xb978,	// (0x00022db4) set_content_pane_g1_ParamLimits

0x7a03,	// (0x0001ee3f) list_single_image_pane_ParamLimits

0x7a03,	// (0x0001ee3f) list_single_image_pane

0xf425,	// (0x00026861) aid_size_cell_image_ParamLimits

0xf425,	// (0x00026861) aid_size_cell_image

0xf432,	// (0x0002686e) grid_single_image_pane_ParamLimits

0xf432,	// (0x0002686e) grid_single_image_pane

0xf43e,	// (0x0002687a) list_single_image_pane_g1_ParamLimits

0xf43e,	// (0x0002687a) list_single_image_pane_g1

0xf44a,	// (0x00026886) list_single_image_pane_g2_ParamLimits

0xf44a,	// (0x00026886) list_single_image_pane_g2

0x0001,

0xfc43,	// (0x0002707f) list_single_image_pane_g_ParamLimits

0xfc43,	// (0x0002707f) list_single_image_pane_g

0xf45e,	// (0x0002689a) list_single_image_pane_t1_ParamLimits

0xf45e,	// (0x0002689a) list_single_image_pane_t1

0xf474,	// (0x000268b0) cell_image_list_pane_ParamLimits

0xf474,	// (0x000268b0) cell_image_list_pane

0xf488,	// (0x000268c4) cell_image_list_pane_g1

0xf491,	// (0x000268cd) cell_image_list_pane_g2

0x0001,

0xfc48,	// (0x00027084) cell_image_list_pane_g

0xf49a,	// (0x000268d6) aid_size_cell_tb_trans_pane

0xae5a,	// (0x00022296) bg_tb_trans_pane

0xf4ac,	// (0x000268e8) grid_tb_trans_pane

0xc2d7,	// (0x00023713) bg_tb_trans_pane_g1

0xc2df,	// (0x0002371b) bg_tb_trans_pane_g2

0xc2e7,	// (0x00023723) bg_tb_trans_pane_g3

0xc2ef,	// (0x0002372b) bg_tb_trans_pane_g4

0xc2f7,	// (0x00023733) bg_tb_trans_pane_g5

0xc30f,	// (0x0002374b) bg_tb_trans_pane_g6

0xc317,	// (0x00023753) bg_tb_trans_pane_g7

0xc2ff,	// (0x0002373b) bg_tb_trans_pane_g8

0xc307,	// (0x00023743) bg_tb_trans_pane_g9

0x0008,

0xfc4d,	// (0x00027089) bg_tb_trans_pane_g

0xf4c0,	// (0x000268fc) cell_toolbar_trans_pane_ParamLimits

0xf4c0,	// (0x000268fc) cell_toolbar_trans_pane

0xe8fc,	// (0x00025d38) cell_toolbar_trans_pane_g1

0xe4a7,	// (0x000258e3) list_form2_midp_pane_t1

0xe4b5,	// (0x000258f1) list_form2_midp_pane_t2

0x0001,

0xfaf6,	// (0x00026f32) list_form2_midp_pane_t

0xe4c3,	// (0x000258ff) scroll_pane_cp51_ParamLimits

0xe67f,	// (0x00025abb) form2_midp_wait_pane_g1

0xe688,	// (0x00025ac4) form2_midp_wait_pane_g2

0xe691,	// (0x00025acd) form2_midp_wait_pane_g3

0x0002,

0xfb0b,	// (0x00026f47) form2_midp_wait_pane_g

0xa5eb,	// (0x00021a27) list_highlight_pane_cp21_ParamLimits

0xe6df,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe6ee,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7976,	// (0x0001edb2) list_single_2graphic_im_pane_ParamLimits

0x7976,	// (0x0001edb2) list_single_2graphic_im_pane

0xf4e6,	// (0x00026922) list_single_2graphic_im_pane_g1_ParamLimits

0xf4e6,	// (0x00026922) list_single_2graphic_im_pane_g1

0xf4f7,	// (0x00026933) list_single_2graphic_im_pane_g2_ParamLimits

0xf4f7,	// (0x00026933) list_single_2graphic_im_pane_g2

0xf503,	// (0x0002693f) list_single_2graphic_im_pane_g3_ParamLimits

0xf503,	// (0x0002693f) list_single_2graphic_im_pane_g3

0x0003,

0xfc60,	// (0x0002709c) list_single_2graphic_im_pane_g_ParamLimits

0xfc60,	// (0x0002709c) list_single_2graphic_im_pane_g

0xf523,	// (0x0002695f) list_single_2graphic_im_pane_t1_ParamLimits

0xf523,	// (0x0002695f) list_single_2graphic_im_pane_t1

0xef33,	// (0x0002636f) list_single_graphic_2heading_pane_fp_ParamLimits

0xef33,	// (0x0002636f) list_single_graphic_2heading_pane_fp

0x7d6a,	// (0x0001f1a6) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7d6a,	// (0x0001f1a6) list_single_graphic_2heading_pane_fp_g1

0xef49,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xef49,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2

0x7100,	// (0x0001e53c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7100,	// (0x0001e53c) list_single_graphic_2heading_pane_fp_g3

0x7d3f,	// (0x0001f17b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7d3f,	// (0x0001f17b) list_single_graphic_2heading_pane_fp_g4

0xef55,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xef55,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00026fca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00026fca) list_single_graphic_2heading_pane_fp_g

0x7f43,	// (0x0001f37f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7f43,	// (0x0001f37f) list_single_graphic_2heading_pane_fp_t1

0x7da2,	// (0x0001f1de) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7da2,	// (0x0001f1de) list_single_graphic_2heading_pane_fp_t2

0x7f59,	// (0x0001f395) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7f59,	// (0x0001f395) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc69,	// (0x000270a5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc69,	// (0x000270a5) list_single_graphic_2heading_pane_fp_t

0xe988,	// (0x00025dc4) fep_hwr_write_pane_g5_ParamLimits

0xe988,	// (0x00025dc4) fep_hwr_write_pane_g5

0xe994,	// (0x00025dd0) fep_hwr_write_pane_g6_ParamLimits

0xe994,	// (0x00025dd0) fep_hwr_write_pane_g6

0xf20b,	// (0x00026647) eswt_shell_pane_ParamLimits

0xc34b,	// (0x00023787) bg_popup_window_pane_cp18_ParamLimits

0xd61c,	// (0x00024a58) heading_pane_cp70

0xf335,	// (0x00026771) popup_eswt_tasktip_window_t1_ParamLimits

0xbe4a,	// (0x00023286) aid_touch_tab_arrow_left

0xbe59,	// (0x00023295) aid_touch_tab_arrow_right

0xa533,	// (0x0002196f) title_pane_g3_ParamLimits

0xa533,	// (0x0002196f) title_pane_g3

0xae01,	// (0x0002223d) set_value_pane_g1

0x8ffd,	// (0x00020439) popup_toolbar_trans_pane_ParamLimits

0xf49a,	// (0x000268d6) aid_size_cell_tb_trans_pane_ParamLimits

0xae5a,	// (0x00022296) bg_tb_trans_pane_ParamLimits

0xf4ac,	// (0x000268e8) grid_tb_trans_pane_ParamLimits

0xa874,	// (0x00021cb0) cont_note_pane_ParamLimits

0xa874,	// (0x00021cb0) cont_note_pane

0xabb3,	// (0x00021fef) cont_snote2_single_text_pane_ParamLimits

0xabb3,	// (0x00021fef) cont_snote2_single_text_pane

0xabb3,	// (0x00021fef) cont_snote2_single_graphic_pane_ParamLimits

0xabb3,	// (0x00021fef) cont_snote2_single_graphic_pane

0xc95d,	// (0x00023d99) cont_note_wait_pane_ParamLimits

0xc95d,	// (0x00023d99) cont_note_wait_pane

0xc95d,	// (0x00023d99) cont_note_image_pane_ParamLimits

0xc95d,	// (0x00023d99) cont_note_image_pane

0x0024,	// (0x00017460) popup_note2_window_g1_ParamLimits

0x0024,	// (0x00017460) popup_note2_window_g1

0x0055,	// (0x00017491) popup_note2_window_t1_ParamLimits

0x0055,	// (0x00017491) popup_note2_window_t1

0x009a,	// (0x000174d6) popup_note2_window_t2_ParamLimits

0x009a,	// (0x000174d6) popup_note2_window_t2

0x00df,	// (0x0001751b) popup_note2_window_t3_ParamLimits

0x00df,	// (0x0001751b) popup_note2_window_t3

0x0124,	// (0x00017560) popup_note2_window_t4_ParamLimits

0x0124,	// (0x00017560) popup_note2_window_t4

0xa8ec,	// (0x00021d28) popup_note2_window_t5_ParamLimits

0xa8ec,	// (0x00021d28) popup_note2_window_t5

0x0004,

0xfc75,	// (0x000270b1) popup_note2_window_t_ParamLimits

0xfc75,	// (0x000270b1) popup_note2_window_t

0x0153,	// (0x0001758f) popup_note2_image_window_g1_ParamLimits

0x0153,	// (0x0001758f) popup_note2_image_window_g1

0x015f,	// (0x0001759b) popup_note2_image_window_g2_ParamLimits

0x015f,	// (0x0001759b) popup_note2_image_window_g2

0x0001,

0xfc80,	// (0x000270bc) popup_note2_image_window_g_ParamLimits

0xfc80,	// (0x000270bc) popup_note2_image_window_g

0x0171,	// (0x000175ad) popup_note2_image_window_t1_ParamLimits

0x0171,	// (0x000175ad) popup_note2_image_window_t1

0x0189,	// (0x000175c5) popup_note2_image_window_t2_ParamLimits

0x0189,	// (0x000175c5) popup_note2_image_window_t2

0x01a1,	// (0x000175dd) popup_note2_image_window_t3_ParamLimits

0x01a1,	// (0x000175dd) popup_note2_image_window_t3

0x0002,

0xfc85,	// (0x000270c1) popup_note2_image_window_t_ParamLimits

0xfc85,	// (0x000270c1) popup_note2_image_window_t

0xc96b,	// (0x00023da7) popup_note2_wait_window_g1_ParamLimits

0xc96b,	// (0x00023da7) popup_note2_wait_window_g1

0x01bd,	// (0x000175f9) popup_note2_wait_window_g2_ParamLimits

0x01bd,	// (0x000175f9) popup_note2_wait_window_g2

0xc983,	// (0x00023dbf) popup_note2_wait_window_g3_ParamLimits

0xc983,	// (0x00023dbf) popup_note2_wait_window_g3

0x0002,

0xfc8c,	// (0x000270c8) popup_note2_wait_window_g_ParamLimits

0xfc8c,	// (0x000270c8) popup_note2_wait_window_g

0x01c9,	// (0x00017605) popup_note2_wait_window_t1_ParamLimits

0x01c9,	// (0x00017605) popup_note2_wait_window_t1

0x01e7,	// (0x00017623) popup_note2_wait_window_t2_ParamLimits

0x01e7,	// (0x00017623) popup_note2_wait_window_t2

0x0205,	// (0x00017641) popup_note2_wait_window_t3_ParamLimits

0x0205,	// (0x00017641) popup_note2_wait_window_t3

0x0217,	// (0x00017653) popup_note2_wait_window_t4_ParamLimits

0x0217,	// (0x00017653) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x000270cf) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x000270cf) popup_note2_wait_window_t

0x0229,	// (0x00017665) wait_bar2_pane_ParamLimits

0x0229,	// (0x00017665) wait_bar2_pane

0x0241,	// (0x0001767d) popup_snote2_single_text_window_g1_ParamLimits

0x0241,	// (0x0001767d) popup_snote2_single_text_window_g1

0x0269,	// (0x000176a5) popup_snote2_single_text_window_t1_ParamLimits

0x0269,	// (0x000176a5) popup_snote2_single_text_window_t1

0x02b5,	// (0x000176f1) popup_snote2_single_text_window_t2_ParamLimits

0x02b5,	// (0x000176f1) popup_snote2_single_text_window_t2

0x0301,	// (0x0001773d) popup_snote2_single_text_window_t3_ParamLimits

0x0301,	// (0x0001773d) popup_snote2_single_text_window_t3

0x0342,	// (0x0001777e) popup_snote2_single_text_window_t4_ParamLimits

0x0342,	// (0x0001777e) popup_snote2_single_text_window_t4

0x0378,	// (0x000177b4) popup_snote2_single_text_window_t5_ParamLimits

0x0378,	// (0x000177b4) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x000270d8) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x000270d8) popup_snote2_single_text_window_t

0x03a3,	// (0x000177df) popup_snote2_single_graphic_window_g1_ParamLimits

0x03a3,	// (0x000177df) popup_snote2_single_graphic_window_g1

0x03cb,	// (0x00017807) popup_snote2_single_graphic_window_g2_ParamLimits

0x03cb,	// (0x00017807) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x000270e3) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x000270e3) popup_snote2_single_graphic_window_g

0x03f3,	// (0x0001782f) popup_snote2_single_graphic_window_t1_ParamLimits

0x03f3,	// (0x0001782f) popup_snote2_single_graphic_window_t1

0x043f,	// (0x0001787b) popup_snote2_single_graphic_window_t2_ParamLimits

0x043f,	// (0x0001787b) popup_snote2_single_graphic_window_t2

0x0301,	// (0x0001773d) popup_snote2_single_graphic_window_t3_ParamLimits

0x0301,	// (0x0001773d) popup_snote2_single_graphic_window_t3

0x0342,	// (0x0001777e) popup_snote2_single_graphic_window_t4_ParamLimits

0x0342,	// (0x0001777e) popup_snote2_single_graphic_window_t4

0x0378,	// (0x000177b4) popup_snote2_single_graphic_window_t5_ParamLimits

0x0378,	// (0x000177b4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x000270e8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x000270e8) popup_snote2_single_graphic_window_t

0xe37e,	// (0x000257ba) clock_nsta_pane_cp2_t1

0xe37e,	// (0x000257ba) clock_nsta_pane_cp2_t2

0x0001,

0xfacc,	// (0x00026f08) clock_nsta_pane_cp2_t

0x7585,	// (0x0001e9c1) form_field_data_wide_pane_g1_ParamLimits

0xae36,	// (0x00022272) form_field_data_wide_pane_g2_ParamLimits

0xae36,	// (0x00022272) form_field_data_wide_pane_g2

0xae68,	// (0x000222a4) form_field_data_wide_pane_g3_ParamLimits

0xae68,	// (0x000222a4) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00026abd) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00026abd) form_field_data_wide_pane_g

0xe260,	// (0x0002569c) grid_touch_3_pane_ParamLimits

0xe260,	// (0x0002569c) grid_touch_3_pane

0x048b,	// (0x000178c7) cell_touch_3_pane_ParamLimits

0x048b,	// (0x000178c7) cell_touch_3_pane

0xe8fc,	// (0x00025d38) cell_touch_3_pane_g1

0xe8fc,	// (0x00025d38) cell_touch_3_pane_g2

0x0001,

0xfb51,	// (0x00026f8d) cell_touch_3_pane_g

0xa91e,	// (0x00021d5a) cont_query_data_pane

0xa926,	// (0x00021d62) cont_query_data_pane_cp1

0x04bc,	// (0x000178f8) button_value_adjust_pane_cp7

0x04c4,	// (0x00017900) query_popup_pane_cp3

0xb58c,	// (0x000229c8) bg_popup_sub_pane_cp22_ParamLimits

0x878c,	// (0x0001fbc8) navi_navi_volume_pane_cp2

0x87a4,	// (0x0001fbe0) popup_side_volume_key_window_g2

0x87b0,	// (0x0001fbec) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00026b53) popup_side_volume_key_window_g

0x87ca,	// (0x0001fc06) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00026b5a) popup_side_volume_key_window_t

0xb844,	// (0x00022c80) popup_side_volume_key_window_ParamLimits

0x71e6,	// (0x0001e622) list_double_graphic_pane_g4_ParamLimits

0x71e6,	// (0x0001e622) list_double_graphic_pane_g4

0x79bd,	// (0x0001edf9) list_single_2heading_msg_pane_ParamLimits

0x79bd,	// (0x0001edf9) list_single_2heading_msg_pane

0x7f79,	// (0x0001f3b5) list_single_2heading_msg_pane_g1_ParamLimits

0x7f79,	// (0x0001f3b5) list_single_2heading_msg_pane_g1

0x7015,	// (0x0001e451) list_single_2heading_msg_pane_g2_ParamLimits

0x7015,	// (0x0001e451) list_single_2heading_msg_pane_g2

0x7f85,	// (0x0001f3c1) list_single_2heading_msg_pane_g3_ParamLimits

0x7f85,	// (0x0001f3c1) list_single_2heading_msg_pane_g3

0x7f91,	// (0x0001f3cd) list_single_2heading_msg_pane_g4_ParamLimits

0x7f91,	// (0x0001f3cd) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x000270f3) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x000270f3) list_single_2heading_msg_pane_g

0x7fa9,	// (0x0001f3e5) list_single_2heading_msg_pane_t1_ParamLimits

0x7fa9,	// (0x0001f3e5) list_single_2heading_msg_pane_t1

0x7fd1,	// (0x0001f40d) list_single_2heading_msg_pane_t2_ParamLimits

0x7fd1,	// (0x0001f40d) list_single_2heading_msg_pane_t2

0x8005,	// (0x0001f441) list_single_2heading_msg_pane_t3_ParamLimits

0x8005,	// (0x0001f441) list_single_2heading_msg_pane_t3

0x803e,	// (0x0001f47a) list_single_2heading_msg_pane_t4_ParamLimits

0x803e,	// (0x0001f47a) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x000270fc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x000270fc) list_single_2heading_msg_pane_t

0xa53f,	// (0x0002197b) title_pane_g4_ParamLimits

0xa53f,	// (0x0002197b) title_pane_g4

0x859a,	// (0x0001f9d6) title_pane_stacon_g3_ParamLimits

0x859a,	// (0x0001f9d6) title_pane_stacon_g3

0xf517,	// (0x00026953) list_single_2graphic_im_pane_g4_ParamLimits

0xf517,	// (0x00026953) list_single_2graphic_im_pane_g4

0xd3c4,	// (0x00024800) popup_side_volume_key_window_cp

0xdbc0,	// (0x00024ffc) main_idle_act2_pane_t1

0x90ed,	// (0x00020529) toolbar_button_pane_g10

0xadab,	// (0x000221e7) popup_toolbar_window_cp1

0xe36f,	// (0x000257ab) clock_nsta_pane_cp_t1

0xe36f,	// (0x000257ab) clock_nsta_pane_cp_t2

0x0001,

0xfac7,	// (0x00026f03) clock_nsta_pane_cp_t

0x878c,	// (0x0001fbc8) navi_navi_volume_pane_cp2_ParamLimits

0x8798,	// (0x0001fbd4) popup_side_volume_key_window_g1_ParamLimits

0x87a4,	// (0x0001fbe0) popup_side_volume_key_window_g2_ParamLimits

0x87b0,	// (0x0001fbec) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00026b53) popup_side_volume_key_window_g_ParamLimits

0x951b,	// (0x00020957) fep_hwr_aid_pane

0x33cf,	// (0x0001a80b) bg_fep_hwr_top_pane_g4_ParamLimits

0xe958,	// (0x00025d94) fep_hwr_top_pane_g1_ParamLimits

0xe96a,	// (0x00025da6) fep_hwr_top_pane_g2_ParamLimits

0x95d4,	// (0x00020a10) fep_hwr_top_pane_g3_ParamLimits

0xfb1c,	// (0x00026f58) fep_hwr_top_pane_g_ParamLimits

0x95e9,	// (0x00020a25) fep_hwr_top_text_pane_ParamLimits

0xd187,	// (0x000245c3) aid_touch_tab_arrow_arrow_2

0xd190,	// (0x000245cc) aid_touch_tab_arrow_left_2

0x952f,	// (0x0002096b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9566,	// (0x000209a2) fep_hwr_prediction_pane

0xeac1,	// (0x00025efd) fep_vkb_prediction_pane

0xebbe,	// (0x00025ffa) fep_vkb_side_pane_g3_ParamLimits

0xebbe,	// (0x00025ffa) fep_vkb_side_pane_g3

0xeb6a,	// (0x00025fa6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xefc9,	// (0x00026405) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xefd6,	// (0x00026412) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00027002) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x05d1,	// (0x00017a0d) fep_hwr_prediction_pane_g1

0x9876,	// (0x00020cb2) fep_hwr_prediction_pane_g2

0x987e,	// (0x00020cba) fep_hwr_prediction_pane_g3

0x9886,	// (0x00020cc2) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x00027105) fep_hwr_prediction_pane_g

0x05d1,	// (0x00017a0d) fep_vkb_prediction_pane_g1

0x05db,	// (0x00017a17) fep_vkb_prediction_pane_g2

0x05e3,	// (0x00017a1f) fep_vkb_prediction_pane_g3

0x05eb,	// (0x00017a27) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0002710e) fep_vkb_prediction_pane_g

0xd9f7,	// (0x00024e33) slider_set_pane_g3

0xda0b,	// (0x00024e47) slider_set_pane_g4

0xda23,	// (0x00024e5f) slider_set_pane_g5

0xd9f7,	// (0x00024e33) slider_set_pane_g6

0x93b9,	// (0x000207f5) slider_set_pane_g7

0xd82f,	// (0x00024c6b) slider_form_pane_g3

0xd838,	// (0x00024c74) slider_form_pane_g4

0xd840,	// (0x00024c7c) slider_form_pane_g5

0xd82f,	// (0x00024c6b) slider_form_pane_g6

0xd848,	// (0x00024c84) slider_form_pane_g7

0xde6a,	// (0x000252a6) slider_set_pane_vc_g3

0xde73,	// (0x000252af) slider_set_pane_vc_g4

0xde7c,	// (0x000252b8) slider_set_pane_vc_g5

0xde6a,	// (0x000252a6) slider_set_pane_vc_g6

0xde85,	// (0x000252c1) slider_set_pane_vc_g7

0xe035,	// (0x00025471) slider_form_pane_vc_g1

0xe03e,	// (0x0002547a) slider_form_pane_vc_g2

0xe047,	// (0x00025483) slider_form_pane_vc_g3

0xe035,	// (0x00025471) slider_form_pane_vc_g4

0xe050,	// (0x0002548c) slider_form_pane_vc_g5

0x0004,

0xfa99,	// (0x00026ed5) slider_form_pane_vc_g

0xa4f7,	// (0x00021933) main_idle_act3_pane

0x05f3,	// (0x00017a2f) ai3_links_pane

0x05fc,	// (0x00017a38) popup_ai3_data_window_ParamLimits

0x05fc,	// (0x00017a38) popup_ai3_data_window

0xa4f7,	// (0x00021933) grid_ai3_links_pane

0x0614,	// (0x00017a50) cell_ai3_links_pane_ParamLimits

0x0614,	// (0x00017a50) cell_ai3_links_pane

0x062c,	// (0x00017a68) bg_popup_sub_pane_cp11

0x0639,	// (0x00017a75) cell_ai3_links_pane_g1

0xa4f7,	// (0x00021933) bg_popup_sub_pane_cp12

0x065e,	// (0x00017a9a) heading_ai3_data_pane

0x0666,	// (0x00017aa2) list_ai3_gene_pane

0x0672,	// (0x00017aae) popup_ai3_data_window_g1

0x067a,	// (0x00017ab6) heading_ai3_data_pane_g1

0x0682,	// (0x00017abe) heading_ai3_data_pane_t1

0x0690,	// (0x00017acc) list_double_ai3_gene_pane_ParamLimits

0x0690,	// (0x00017acc) list_double_ai3_gene_pane

0x069d,	// (0x00017ad9) list_single_ai3_gene_pane_ParamLimits

0x069d,	// (0x00017ad9) list_single_ai3_gene_pane

0xe8c1,	// (0x00025cfd) list_highlight_pane_cp7_ParamLimits

0xe8c1,	// (0x00025cfd) list_highlight_pane_cp7

0x06aa,	// (0x00017ae6) list_single_a13_gene_pane_t1_ParamLimits

0x06aa,	// (0x00017ae6) list_single_a13_gene_pane_t1

0x06c1,	// (0x00017afd) list_single_ai3_gene_pane_g1

0x06ca,	// (0x00017b06) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x00027117) list_single_ai3_gene_pane_g

0x06d2,	// (0x00017b0e) list_double_ai3_gene_pane_g1_ParamLimits

0x06d2,	// (0x00017b0e) list_double_ai3_gene_pane_g1

0x06de,	// (0x00017b1a) list_double_ai3_gene_pane_t1_ParamLimits

0x06de,	// (0x00017b1a) list_double_ai3_gene_pane_t1

0x06fa,	// (0x00017b36) list_double_ai3_gene_pane_t2_ParamLimits

0x06fa,	// (0x00017b36) list_double_ai3_gene_pane_t2

0x070f,	// (0x00017b4b) list_double_ai3_gene_pane_t3_ParamLimits

0x070f,	// (0x00017b4b) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0002711c) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0002711c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7f6f,	// (0x0001f3ab) aid_size_min_col_2

0x04df,	// (0x0001791b) aid_size_min_msg_ParamLimits

0x04df,	// (0x0001791b) aid_size_min_msg

0xecbe,	// (0x000260fa) fep_vkb_top_text_pane_g2_ParamLimits

0xecbe,	// (0x000260fa) fep_vkb_top_text_pane_g2

0x0001,

0xfb4c,	// (0x00026f88) fep_vkb_top_text_pane_g_ParamLimits

0xfb4c,	// (0x00026f88) fep_vkb_top_text_pane_g

0xa4f7,	// (0x00021933) main_hc_apps_shell_pane

0x072c,	// (0x00017b68) grid_hc_apps_pane_ParamLimits

0x072c,	// (0x00017b68) grid_hc_apps_pane

0x073b,	// (0x00017b77) list_hc_apps_pane

0x0743,	// (0x00017b7f) scroll_pane_cp37_ParamLimits

0x0743,	// (0x00017b7f) scroll_pane_cp37

0x074f,	// (0x00017b8b) cell_hc_apps_pane_ParamLimits

0x074f,	// (0x00017b8b) cell_hc_apps_pane

0x07fd,	// (0x00017c39) cell_hc_apps_pane_g1_ParamLimits

0x07fd,	// (0x00017c39) cell_hc_apps_pane_g1

0x082e,	// (0x00017c6a) cell_hc_apps_pane_g2_ParamLimits

0x082e,	// (0x00017c6a) cell_hc_apps_pane_g2

0x084a,	// (0x00017c86) cell_hc_apps_pane_g3_ParamLimits

0x084a,	// (0x00017c86) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x00027123) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x00027123) cell_hc_apps_pane_g

0x086c,	// (0x00017ca8) cell_hc_apps_pane_t1_ParamLimits

0x086c,	// (0x00017ca8) cell_hc_apps_pane_t1

0xa874,	// (0x00021cb0) grid_highlight_pane_cp10_ParamLimits

0xa874,	// (0x00021cb0) grid_highlight_pane_cp10

0x08ac,	// (0x00017ce8) list_single_hc_apps_pane_ParamLimits

0x08ac,	// (0x00017ce8) list_single_hc_apps_pane

0x0914,	// (0x00017d50) list_single_hc_apps_pane_g1

0x8063,	// (0x0001f49f) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0002712a) list_single_hc_apps_pane_g

0x807c,	// (0x0001f4b8) list_single_hc_apps_pane_g2_copy1

0x8098,	// (0x0001f4d4) list_single_hc_apps_pane_t1

0xa5eb,	// (0x00021a27) bg_set_opt_pane_cp_ParamLimits

0x84c1,	// (0x0001f8fd) setting_slider_pane_t1_ParamLimits

0x84da,	// (0x0001f916) setting_slider_pane_t2_ParamLimits

0x84f4,	// (0x0001f930) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000269a0) setting_slider_pane_t_ParamLimits

0x850c,	// (0x0001f948) slider_set_pane_ParamLimits

0x8a2c,	// (0x0001fe68) control_pane_g5_ParamLimits

0x8a2c,	// (0x0001fe68) control_pane_g5

0xd688,	// (0x00024ac4) slider_set_pane_g1_ParamLimits

0x93ad,	// (0x000207e9) slider_set_pane_g2_ParamLimits

0xd9f7,	// (0x00024e33) slider_set_pane_g3_ParamLimits

0xda0b,	// (0x00024e47) slider_set_pane_g4_ParamLimits

0xda23,	// (0x00024e5f) slider_set_pane_g5_ParamLimits

0xd9f7,	// (0x00024e33) slider_set_pane_g6_ParamLimits

0x93b9,	// (0x000207f5) slider_set_pane_g7_ParamLimits

0xf963,	// (0x00026d9f) slider_set_pane_g_ParamLimits

0xb923,	// (0x00022d5f) navi_icon_text_pane_ParamLimits

0xbe0b,	// (0x00023247) aid_fill_nsta_2_ParamLimits

0xbe4a,	// (0x00023286) aid_touch_tab_arrow_left_ParamLimits

0xbe59,	// (0x00023295) aid_touch_tab_arrow_right_ParamLimits

0xbec6,	// (0x00023302) clock_nsta_pane_ParamLimits

0xd169,	// (0x000245a5) navi_icon_pane_g1_ParamLimits

0xd175,	// (0x000245b1) navi_text_pane_t1_ParamLimits

0xe481,	// (0x000258bd) navi_icon_text_pane_g1_ParamLimits

0xe48d,	// (0x000258c9) navi_icon_text_pane_t1_ParamLimits

0x0914,	// (0x00017d50) list_single_hc_apps_pane_g1_ParamLimits

0x8063,	// (0x0001f49f) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0002712a) list_single_hc_apps_pane_g_ParamLimits

0x807c,	// (0x0001f4b8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8098,	// (0x0001f4d4) list_single_hc_apps_pane_t1_ParamLimits

0x83d5,	// (0x0001f811) popup_toolbar2_fixed_window_ParamLimits

0x83d5,	// (0x0001f811) popup_toolbar2_fixed_window

0x8ff3,	// (0x0002042f) popup_toolbar2_float_window

0xa4f7,	// (0x00021933) bg_popup_sub_pane_cp27

0x0990,	// (0x00017dcc) grid_toolbar2_float_pane

0xa4f7,	// (0x00021933) bg_popup_sub_pane_cp26

0x0990,	// (0x00017dcc) grid_toolbar2_fixed_pane

0x0998,	// (0x00017dd4) cell_toolbar2_fixed_pane_ParamLimits

0x0998,	// (0x00017dd4) cell_toolbar2_fixed_pane

0x09a9,	// (0x00017de5) cell_toolbar2_fixed_pane_g1

0x2a87,	// (0x00019ec3) toolbar2_fixed_button_pane

0xc2d7,	// (0x00023713) toolbar2_fixed_button_pane_g1

0xc2df,	// (0x0002371b) toolbar2_fixed_button_pane_g2

0xc2e7,	// (0x00023723) toolbar2_fixed_button_pane_g3

0xc2ef,	// (0x0002372b) toolbar2_fixed_button_pane_g4

0xc2f7,	// (0x00023733) toolbar2_fixed_button_pane_g5

0xc2ff,	// (0x0002373b) toolbar2_fixed_button_pane_g6

0xc307,	// (0x00023743) toolbar2_fixed_button_pane_g7

0xc30f,	// (0x0002374b) toolbar2_fixed_button_pane_g8

0xc317,	// (0x00023753) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x00026ca1) toolbar2_fixed_button_pane_g

0x09b2,	// (0x00017dee) cell_toolbar2_float_pane_ParamLimits

0x09b2,	// (0x00017dee) cell_toolbar2_float_pane

0x09c6,	// (0x00017e02) cell_toolbar2_float_pane_g1

0x2a87,	// (0x00019ec3) toolbar2_fixed_button_pane_cp

0xea28,	// (0x00025e64) fep_vkb_accented_list_pane_ParamLimits

0xea28,	// (0x00025e64) fep_vkb_accented_list_pane

0x9737,	// (0x00020b73) bg_popup_fep_shadow_pane_g9

0xba97,	// (0x00022ed3) bg_popup_fep_shadow_pane_cp3

0xafa3,	// (0x000223df) list_accented_list_pane

0x09cf,	// (0x00017e0b) list_single_accented_list_pane_ParamLimits

0x09cf,	// (0x00017e0b) list_single_accented_list_pane

0xba97,	// (0x00022ed3) list_highlight_pane_cp10

0x09e0,	// (0x00017e1c) list_single_accented_list_pane_t1

0x8f43,	// (0x0002037f) popup_slider_window_ParamLimits

0x8f43,	// (0x0002037f) popup_slider_window

0x04cc,	// (0x00017908) aid_indentation_list_msg

0x0a9a,	// (0x00017ed6) bg_popup_window_pane_cp19

0x0b04,	// (0x00017f40) popup_slider_window_g1

0x0b20,	// (0x00017f5c) popup_slider_window_g2

0x0b3c,	// (0x00017f78) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0002712f) popup_slider_window_g

0x0b98,	// (0x00017fd4) popup_slider_window_t1

0x0c0c,	// (0x00018048) small_volume_slider_vertical_pane

0xe8fc,	// (0x00025d38) small_volume_slider_vertical_pane_g1

0xe8fc,	// (0x00025d38) small_volume_slider_vertical_pane_g2

0x0c28,	// (0x00018064) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x00027141) small_volume_slider_vertical_pane_g

0x81a5,	// (0x0001f5e1) area_side_right_pane_ParamLimits

0x81a5,	// (0x0001f5e1) area_side_right_pane

0x988e,	// (0x00020cca) aid_size_side_button_ParamLimits

0x988e,	// (0x00020cca) aid_size_side_button

0x98a2,	// (0x00020cde) grid_sctrl_middle_pane_ParamLimits

0x98a2,	// (0x00020cde) grid_sctrl_middle_pane

0x98c1,	// (0x00020cfd) sctrl_sk_bottom_pane

0x98d2,	// (0x00020d0e) sctrl_sk_top_pane

0x98e4,	// (0x00020d20) aid_touch_sctrl_top

0xa874,	// (0x00021cb0) bg_sctrl_sk_pane_ParamLimits

0xa874,	// (0x00021cb0) bg_sctrl_sk_pane

0x98f1,	// (0x00020d2d) sctrl_sk_top_pane_g1

0x98fe,	// (0x00020d3a) sctrl_sk_top_pane_t1

0x98e4,	// (0x00020d20) aid_touch_sctrl_bottom

0xa874,	// (0x00021cb0) bg_sctrl_sk_pane_cp_ParamLimits

0xa874,	// (0x00021cb0) bg_sctrl_sk_pane_cp

0x9919,	// (0x00020d55) sctrl_sk_bottom_pane_g1

0x98fe,	// (0x00020d3a) sctrl_sk_bottom_pane_t1

0x9922,	// (0x00020d5e) cell_sctrl_middle_pane_ParamLimits

0x9922,	// (0x00020d5e) cell_sctrl_middle_pane

0x993d,	// (0x00020d79) aid_touch_sctrl_middle_ParamLimits

0x993d,	// (0x00020d79) aid_touch_sctrl_middle

0xae5a,	// (0x00022296) bg_sctrl_middle_pane_ParamLimits

0xae5a,	// (0x00022296) bg_sctrl_middle_pane

0xeb6a,	// (0x00025fa6) cell_sctrl_middle_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) cell_sctrl_middle_pane_g1

0x994f,	// (0x00020d8b) cell_sctrl_middle_pane_g2_ParamLimits

0x994f,	// (0x00020d8b) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0002714d) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0002714d) cell_sctrl_middle_pane_g

0xc2d7,	// (0x00023713) bg_sctrl_middle_pane_g1

0xc2df,	// (0x0002371b) bg_sctrl_middle_pane_g2

0xc2e7,	// (0x00023723) bg_sctrl_middle_pane_g3

0xc2ef,	// (0x0002372b) bg_sctrl_middle_pane_g4

0xc2f7,	// (0x00023733) bg_sctrl_middle_pane_g5

0xc2ff,	// (0x0002373b) bg_sctrl_middle_pane_g6

0xc307,	// (0x00023743) bg_sctrl_middle_pane_g7

0xc30f,	// (0x0002374b) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x00027152) bg_sctrl_middle_pane_g

0xc317,	// (0x00023753) bg_sctrl_middle_pane_g8_copy1

0xc2d7,	// (0x00023713) bg_sctrl_sk_pane_g1

0xc2df,	// (0x0002371b) bg_sctrl_sk_pane_g2

0xc2e7,	// (0x00023723) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x00026ca1) bg_sctrl_sk_pane_g

0xad71,	// (0x000221ad) aid_size_touch_scroll_bar

0xc2ef,	// (0x0002372b) bg_sctrl_sk_pane_g4

0xc2f7,	// (0x00023733) bg_sctrl_sk_pane_g5

0xc2ff,	// (0x0002373b) bg_sctrl_sk_pane_g6

0xc307,	// (0x00023743) bg_sctrl_sk_pane_g7

0xc30f,	// (0x0002374b) bg_sctrl_sk_pane_g8

0xc317,	// (0x00023753) bg_sctrl_sk_pane_g9

0x8bb4,	// (0x0001fff0) popup_fep_china_hwr2_fs_candidate_window

0x8bbe,	// (0x0001fffa) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8bbe,	// (0x0001fffa) popup_fep_china_hwr2_fs_control_window

0xeb6a,	// (0x00025fa6) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x00027148) sctrl_sk_top_pane_g

0x0c31,	// (0x0001806d) aid_fep_china_hwr2_fs_cell_ParamLimits

0x0c31,	// (0x0001806d) aid_fep_china_hwr2_fs_cell

0x0c43,	// (0x0001807f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x0c43,	// (0x0001807f) bg_popup_fep_shadow_pane_cp4

0x0c5a,	// (0x00018096) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x0c5a,	// (0x00018096) bg_popup_fep_shadow_pane_cp5

0x0c6c,	// (0x000180a8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x0c6c,	// (0x000180a8) popup_fep_china_hwr2_fs_control_bar_grid

0x0c7c,	// (0x000180b8) popup_fep_china_hwr2_fs_control_funtion_grid

0x0c84,	// (0x000180c0) aid_fep_china_hwr2_fs_candi_cell

0xa4f7,	// (0x00021933) bg_popup_fep_shadow_pane_cp6

0x0c8e,	// (0x000180ca) popup_fep_china_hwr2_fs_candidate_grid

0x0c98,	// (0x000180d4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x0c98,	// (0x000180d4) cell_fep_china_hwr2_fs_funtion_grid

0xe8fc,	// (0x00025d38) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x0cb0,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x0cb0,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1

0x0cbe,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x0cbe,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x00027163) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x00027163) cell_fep_china_hwr2_fs_funtion_grid_g

0x0cd4,	// (0x00018110) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x0cd4,	// (0x00018110) cell_fep_china_hwr2_fs_funtion_grid_t1

0x0ce9,	// (0x00018125) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x0ce9,	// (0x00018125) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x00027168) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x00027168) cell_fep_china_hwr2_fs_funtion_grid_t

0x0d05,	// (0x00018141) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x0d0d,	// (0x00018149) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x0d15,	// (0x00018151) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0002716d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x0d1d,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x0d1d,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid

0x0d36,	// (0x00018172) popup_fep_china_hwr2_fs_candidate_grid_g20

0x0d3e,	// (0x0001817a) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe8fc,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe8fc,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb51,	// (0x00026f8d) cell_fep_china_hwr2_fs_candidate_grid_g

0x0d46,	// (0x00018182) cell_fep_china_hwr2_fs_candidate_grid_t1

0xbed3,	// (0x0002330f) clock_nsta_pane_cp_24_ParamLimits

0xbed3,	// (0x0002330f) clock_nsta_pane_cp_24

0xbf51,	// (0x0002338d) indicator_nsta_pane_cp_24_ParamLimits

0xbf51,	// (0x0002338d) indicator_nsta_pane_cp_24

0xcfe5,	// (0x00024421) heading_pane_g1

0x0001,

0xf8ca,	// (0x00026d06) heading_pane_g

0xd9c7,	// (0x00024e03) grid_sct_catagory_button_pane

0xda39,	// (0x00024e75) scroll_pane_cp5_ParamLimits

0xe4cf,	// (0x0002590b) button_value_adjust_pane_cp5_ParamLimits

0xe4cf,	// (0x0002590b) button_value_adjust_pane_cp5

0xe5ae,	// (0x000259ea) form2_midp_time_pane_ParamLimits

0x0d54,	// (0x00018190) cell_sct_catagory_button_pane_ParamLimits

0x0d54,	// (0x00018190) cell_sct_catagory_button_pane

0xe8c1,	// (0x00025cfd) bg_button_pane_cp01_ParamLimits

0xe8c1,	// (0x00025cfd) bg_button_pane_cp01

0xe8fc,	// (0x00025d38) cell_sct_catagory_button_pane_g1

0x8f82,	// (0x000203be) popup_tb_extension_window

0x0d66,	// (0x000181a2) aid_size_cell_ext_ParamLimits

0x0d66,	// (0x000181a2) aid_size_cell_ext

0xa874,	// (0x00021cb0) bg_tb_trans_pane_cp1_ParamLimits

0xa874,	// (0x00021cb0) bg_tb_trans_pane_cp1

0x0d86,	// (0x000181c2) grid_tb_ext_pane_ParamLimits

0x0d86,	// (0x000181c2) grid_tb_ext_pane

0x0db8,	// (0x000181f4) cell_tb_ext_pane_ParamLimits

0x0db8,	// (0x000181f4) cell_tb_ext_pane

0x0dcf,	// (0x0001820b) cell_tb_ext_pane_g1_ParamLimits

0x0dcf,	// (0x0001820b) cell_tb_ext_pane_g1

0x0dec,	// (0x00018228) cell_tb_ext_pane_t1

0xa874,	// (0x00021cb0) list_highlight_pane_cp11_ParamLimits

0xa874,	// (0x00021cb0) list_highlight_pane_cp11

0x83f4,	// (0x0001f830) popup_uni_indicator_window_ParamLimits

0x83f4,	// (0x0001f830) popup_uni_indicator_window

0xae5a,	// (0x00022296) bg_popup_sub_pane_cp14

0x0e07,	// (0x00018243) list_uniindi_pane

0x0e13,	// (0x0001824f) uniindi_top_pane

0xa874,	// (0x00021cb0) bg_uniindi_top_pane

0x0e32,	// (0x0001826e) uniindi_top_pane_g1

0x0e48,	// (0x00018284) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x00027174) uniindi_top_pane_g

0x0e72,	// (0x000182ae) uniindi_top_pane_t1

0x0e9c,	// (0x000182d8) list_single_uniindi_pane_ParamLimits

0x0e9c,	// (0x000182d8) list_single_uniindi_pane

0xe8fc,	// (0x00025d38) bg_uniindi_top_pane_g1

0x0eaf,	// (0x000182eb) list_single_uniindi_pane_g1

0x0ec2,	// (0x000182fe) list_single_uniindi_pane_t1

0xa4f7,	// (0x00021933) control_bg_pane

0x0ee7,	// (0x00018323) bg_sctrl_sk_pane_cp1

0x0ef0,	// (0x0001832c) bg_sctrl_sk_pane_cp2

0x0ef9,	// (0x00018335) control_bg_pane_g1

0x0f02,	// (0x0001833e) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0002717d) control_bg_pane_g

0xe30a,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0xe318,	// (0x00025754) cell_indicator_nsta_pane_g2_ParamLimits

0xfab5,	// (0x00026ef1) cell_indicator_nsta_pane_g_ParamLimits

0x7d2c,	// (0x0001f168) form2_midp_time_pane_t1_ParamLimits

0xabb3,	// (0x00021fef) main_idle_act4_pane_ParamLimits

0xabb3,	// (0x00021fef) main_idle_act4_pane

0x8f82,	// (0x000203be) popup_tb_extension_window_ParamLimits

0x0da8,	// (0x000181e4) tb_ext_find_pane_ParamLimits

0x0da8,	// (0x000181e4) tb_ext_find_pane

0x0f0b,	// (0x00018347) ai_gene_pane_1_cp1

0xbbd4,	// (0x00023010) ai_gene_pane_2_cp1

0x0f13,	// (0x0001834f) list_single_idle_plugin_calendar_pane

0x0f1c,	// (0x00018358) list_single_idle_plugin_notification_pane

0x0f25,	// (0x00018361) list_single_idle_plugin_player_pane

0x0f2e,	// (0x0001836a) list_single_idle_plugin_shortcut_pane_ParamLimits

0x0f2e,	// (0x0001836a) list_single_idle_plugin_shortcut_pane

0x0f50,	// (0x0001838c) main_idle_act4_pane_t1

0x0f62,	// (0x0001839e) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x00027182) main_idle_act4_pane_t

0x0f74,	// (0x000183b0) middle_sk_idle_act4_pane_ParamLimits

0x0f74,	// (0x000183b0) middle_sk_idle_act4_pane

0x0f8a,	// (0x000183c6) popup_clock_digital_analogue_window_cp2

0x0fa4,	// (0x000183e0) shortcut_wheel_idle_act4_pane_ParamLimits

0x0fa4,	// (0x000183e0) shortcut_wheel_idle_act4_pane

0xe8fc,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g1

0xe8fc,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g2

0xe8fc,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g3

0xe8fc,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g4

0xe8fc,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g5

0x0fb8,	// (0x000183f4) shortcut_wheel_idle_act4_pane_g6

0x0fc0,	// (0x000183fc) shortcut_wheel_idle_act4_pane_g7

0x0fc8,	// (0x00018404) shortcut_wheel_idle_act4_pane_g8

0x0fd0,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x00027187) shortcut_wheel_idle_act4_pane_g

0xeb6a,	// (0x00025fa6) middle_sk_idle_act4_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) middle_sk_idle_act4_pane_g1

0x1034,	// (0x00018470) middle_sk_idle_act4_pane_g2_ParamLimits

0x1034,	// (0x00018470) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x000271aa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x000271aa) middle_sk_idle_act4_pane_g

0x1040,	// (0x0001847c) middle_sk_idle_act4_pane_t1_ParamLimits

0x1040,	// (0x0001847c) middle_sk_idle_act4_pane_t1

0x105d,	// (0x00018499) grid_ai_shortcut_pane_ParamLimits

0x105d,	// (0x00018499) grid_ai_shortcut_pane

0x1076,	// (0x000184b2) list_highlight_pane_cp16_ParamLimits

0x1076,	// (0x000184b2) list_highlight_pane_cp16

0x1083,	// (0x000184bf) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1083,	// (0x000184bf) list_single_idle_plugin_shortcut_pane_g1

0x108f,	// (0x000184cb) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x108f,	// (0x000184cb) list_single_idle_plugin_shortcut_pane_g2

0x10a7,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x10a7,	// (0x000184e3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x000271af) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x000271af) list_single_idle_plugin_shortcut_pane_g

0x10ba,	// (0x000184f6) cell_ai_shortcut_pane_ParamLimits

0x10ba,	// (0x000184f6) cell_ai_shortcut_pane

0x10db,	// (0x00018517) cell_ai_shortcut_pane_g1_ParamLimits

0x10db,	// (0x00018517) cell_ai_shortcut_pane_g1

0x0f0b,	// (0x00018347) ai_gene_pane_1_cp2

0x10fd,	// (0x00018539) ai_gene_pane_2_cp2

0x1105,	// (0x00018541) list_highlight_pane_cp15

0x110e,	// (0x0001854a) list_single_idle_plugin_calendar_pane_g1

0x1105,	// (0x00018541) list_highlight_pane_cp17

0x1116,	// (0x00018552) list_single_idle_plugin_calendar_pane_g1_copy1

0x111e,	// (0x0001855a) list_single_idle_plugin_player_pane_g1

0xdc60,	// (0x0002509c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x000271b6) list_single_idle_plugin_player_pane_g

0x1126,	// (0x00018562) list_single_idle_plugin_player_pane_t1

0x1134,	// (0x00018570) list_single_idle_plugin_player_pane_t2

0x1142,	// (0x0001857e) list_single_idle_plugin_player_pane_t3

0x1150,	// (0x0001858c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x000271bb) list_single_idle_plugin_player_pane_t

0x115e,	// (0x0001859a) wait_bar_pane_cp15

0x1166,	// (0x000185a2) grid_ai_notification_pane

0xdc60,	// (0x0002509c) list_single_idle_plugin_notification_pane_g1

0x116f,	// (0x000185ab) cell_ai_notification_pane_ParamLimits

0x116f,	// (0x000185ab) cell_ai_notification_pane

0x117c,	// (0x000185b8) cell_ai_notification_pane_g1

0x1184,	// (0x000185c0) cell_ai_notification_pane_t1

0x1192,	// (0x000185ce) tb_ext_find_button_pane

0x119a,	// (0x000185d6) tb_ext_find_pane_g1

0x11a2,	// (0x000185de) tb_ext_find_pane_t1

0xb4a0,	// (0x000228dc) tb_ext_find_button_pane_g1

0x11b0,	// (0x000185ec) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x000271c4) tb_ext_find_button_pane_g

0x0f50,	// (0x0001838c) main_idle_act4_pane_t1_ParamLimits

0x0f62,	// (0x0001839e) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x00027182) main_idle_act4_pane_t_ParamLimits

0x0f8a,	// (0x000183c6) popup_clock_digital_analogue_window_cp2_ParamLimits

0x0f98,	// (0x000183d4) sat_plugin_idle_act4_pane_ParamLimits

0x0f98,	// (0x000183d4) sat_plugin_idle_act4_pane

0x11b9,	// (0x000185f5) sat_plugin_idle_act4_pane_t1_ParamLimits

0x11b9,	// (0x000185f5) sat_plugin_idle_act4_pane_t1

0x11cc,	// (0x00018608) sat_plugin_idle_act4_pane_t2_ParamLimits

0x11cc,	// (0x00018608) sat_plugin_idle_act4_pane_t2

0x11df,	// (0x0001861b) sat_plugin_idle_act4_pane_t3_ParamLimits

0x11df,	// (0x0001861b) sat_plugin_idle_act4_pane_t3

0x11f2,	// (0x0001862e) sat_plugin_idle_act4_pane_t4_ParamLimits

0x11f2,	// (0x0001862e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x000271c9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x000271c9) sat_plugin_idle_act4_pane_t

0x833d,	// (0x0001f779) popup_battery_window_ParamLimits

0x833d,	// (0x0001f779) popup_battery_window

0xa874,	// (0x00021cb0) bg_popup_sub_pane_cp25_ParamLimits

0xa874,	// (0x00021cb0) bg_popup_sub_pane_cp25

0x1205,	// (0x00018641) popup_battery_window_g1_ParamLimits

0x1205,	// (0x00018641) popup_battery_window_g1

0x1211,	// (0x0001864d) popup_battery_window_t1_ParamLimits

0x1211,	// (0x0001864d) popup_battery_window_t1

0x1223,	// (0x0001865f) popup_battery_window_t2_ParamLimits

0x1223,	// (0x0001865f) popup_battery_window_t2

0x0001,

0xfd96,	// (0x000271d2) popup_battery_window_t_ParamLimits

0xfd96,	// (0x000271d2) popup_battery_window_t

0xba9f,	// (0x00022edb) midp_canvas_pane_ParamLimits

0xbb16,	// (0x00022f52) midp_keypad_pane_ParamLimits

0xbb16,	// (0x00022f52) midp_keypad_pane

0xbdd3,	// (0x0002320f) main_midp_pane_ParamLimits

0xe38d,	// (0x000257c9) signal_pane_g2_cp_ParamLimits

0x1240,	// (0x0001867c) aid_size_cell_midp_keypad_ParamLimits

0x1240,	// (0x0001867c) aid_size_cell_midp_keypad

0x125a,	// (0x00018696) midp_keyp_game_grid_pane_ParamLimits

0x125a,	// (0x00018696) midp_keyp_game_grid_pane

0x127a,	// (0x000186b6) midp_keyp_rocker_pane_ParamLimits

0x127a,	// (0x000186b6) midp_keyp_rocker_pane

0x12af,	// (0x000186eb) midp_keyp_sk_left_pane_ParamLimits

0x12af,	// (0x000186eb) midp_keyp_sk_left_pane

0x1307,	// (0x00018743) midp_keyp_sk_right_pane_ParamLimits

0x1307,	// (0x00018743) midp_keyp_sk_right_pane

0xa4f7,	// (0x00021933) bg_button_pane_cp03

0x135f,	// (0x0001879b) midp_keyp_sk_left_pane_g1

0xa4f7,	// (0x00021933) bg_button_pane_cp04

0x135f,	// (0x0001879b) midp_keyp_sk_right_pane_g1

0xe8fc,	// (0x00025d38) midp_keyp_rocker_pane_g1

0x1368,	// (0x000187a4) keyp_game_cell_pane_ParamLimits

0x1368,	// (0x000187a4) keyp_game_cell_pane

0xa4f7,	// (0x00021933) bg_button_pane_cp02

0x137b,	// (0x000187b7) keyp_game_cell_pane_g1

0x8373,	// (0x0001f7af) popup_fep_vkb2_window_ParamLimits

0x8373,	// (0x0001f7af) popup_fep_vkb2_window

0x996d,	// (0x00020da9) aid_size_cell_vkb2_ParamLimits

0x996d,	// (0x00020da9) aid_size_cell_vkb2

0x99c1,	// (0x00020dfd) popup_fep_vkb2_window_g1_ParamLimits

0x99c1,	// (0x00020dfd) popup_fep_vkb2_window_g1

0x9a09,	// (0x00020e45) vkb2_area_bottom_pane_ParamLimits

0x9a09,	// (0x00020e45) vkb2_area_bottom_pane

0x9a55,	// (0x00020e91) vkb2_area_keypad_pane_ParamLimits

0x9a55,	// (0x00020e91) vkb2_area_keypad_pane

0x9a97,	// (0x00020ed3) vkb2_area_top_pane_ParamLimits

0x9a97,	// (0x00020ed3) vkb2_area_top_pane

0x9b11,	// (0x00020f4d) vkb2_top_entry_pane_ParamLimits

0x9b11,	// (0x00020f4d) vkb2_top_entry_pane

0x9b3b,	// (0x00020f77) vkb2_top_grid_left_pane_ParamLimits

0x9b3b,	// (0x00020f77) vkb2_top_grid_left_pane

0x9b59,	// (0x00020f95) vkb2_top_grid_right_pane_ParamLimits

0x9b59,	// (0x00020f95) vkb2_top_grid_right_pane

0x9b77,	// (0x00020fb3) vkb2_cell_keypad_pane_ParamLimits

0x9b77,	// (0x00020fb3) vkb2_cell_keypad_pane

0x9c48,	// (0x00021084) vkb2_area_bottom_grid_pane_ParamLimits

0x9c48,	// (0x00021084) vkb2_area_bottom_grid_pane

0x9c6e,	// (0x000210aa) vkb2_area_bottom_pane_g1_ParamLimits

0x9c6e,	// (0x000210aa) vkb2_area_bottom_pane_g1

0x9c92,	// (0x000210ce) vkb2_area_bottom_pane_g2_ParamLimits

0x9c92,	// (0x000210ce) vkb2_area_bottom_pane_g2

0x9cc0,	// (0x000210fc) vkb2_area_bottom_pane_g3_ParamLimits

0x9cc0,	// (0x000210fc) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x000271d7) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x000271d7) vkb2_area_bottom_pane_g

0x9d21,	// (0x0002115d) vkb2_top_cell_left_pane_ParamLimits

0x9d21,	// (0x0002115d) vkb2_top_cell_left_pane

0x138c,	// (0x000187c8) vkb2_top_entry_pane_g1_ParamLimits

0x138c,	// (0x000187c8) vkb2_top_entry_pane_g1

0x139a,	// (0x000187d6) vkb2_top_entry_pane_t1_ParamLimits

0x139a,	// (0x000187d6) vkb2_top_entry_pane_t1

0x13cc,	// (0x00018808) vkb2_top_entry_pane_t2_ParamLimits

0x13cc,	// (0x00018808) vkb2_top_entry_pane_t2

0x13fe,	// (0x0001883a) vkb2_top_entry_pane_t3_ParamLimits

0x13fe,	// (0x0001883a) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x000271de) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x000271de) vkb2_top_entry_pane_t

0x9d6e,	// (0x000211aa) vkb2_top_grid_right_pane_g1_ParamLimits

0x9d6e,	// (0x000211aa) vkb2_top_grid_right_pane_g1

0x9d84,	// (0x000211c0) vkb2_top_grid_right_pane_g2_ParamLimits

0x9d84,	// (0x000211c0) vkb2_top_grid_right_pane_g2

0x9d9c,	// (0x000211d8) vkb2_top_grid_right_pane_g3_ParamLimits

0x9d9c,	// (0x000211d8) vkb2_top_grid_right_pane_g3

0x9db4,	// (0x000211f0) vkb2_top_grid_right_pane_g4_ParamLimits

0x9db4,	// (0x000211f0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x000271e5) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x000271e5) vkb2_top_grid_right_pane_g

0x9dca,	// (0x00021206) vkb2_top_cell_left_pane_g1

0x9de1,	// (0x0002121d) vkb2_cell_keypad_pane_g1_ParamLimits

0x9de1,	// (0x0002121d) vkb2_cell_keypad_pane_g1

0x1422,	// (0x0001885e) vkb2_cell_keypad_pane_t1_ParamLimits

0x1422,	// (0x0001885e) vkb2_cell_keypad_pane_t1

0x9def,	// (0x0002122b) vkb2_cell_bottom_grid_pane_ParamLimits

0x9def,	// (0x0002122b) vkb2_cell_bottom_grid_pane

0x9e28,	// (0x00021264) vkb2_cell_bottom_grid_pane_g1

0x0fd8,	// (0x00018414) aid_call2_pane_cp02

0x0fe0,	// (0x0001841c) aid_call_pane_cp02

0x0fe8,	// (0x00018424) clock_digital_number_pane_cp10

0x0ff0,	// (0x0001842c) clock_digital_number_pane_cp11

0x0ff8,	// (0x00018434) clock_digital_number_pane_cp12

0x1000,	// (0x0001843c) clock_digital_number_pane_cp13

0x1008,	// (0x00018444) clock_digital_separator_pane_cp10

0xb4a0,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g1

0xb4a0,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g2

0x1010,	// (0x0001844c) popup_clock_digital_analogue_window_cp2_g3

0xb4a0,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g4

0x1010,	// (0x0001844c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0002719a) popup_clock_digital_analogue_window_cp2_g

0x1018,	// (0x00018454) popup_clock_digital_analogue_window_cp2_t1

0x1026,	// (0x00018462) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x000271a5) popup_clock_digital_analogue_window_cp2_t

0xe8fc,	// (0x00025d38) clock_digital_number_pane_cp10_g1

0xe8fc,	// (0x00025d38) clock_digital_number_pane_cp10_g2

0x0001,

0xfb51,	// (0x00026f8d) clock_digital_number_pane_cp10_g

0xe8fc,	// (0x00025d38) clock_digital_separator_pane_cp10_g1

0xe8fc,	// (0x00025d38) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb51,	// (0x00026f8d) clock_digital_separator_pane_cp10_g

0x0e54,	// (0x00018290) uniindi_top_pane_g3

0x0e65,	// (0x000182a1) uniindi_top_pane_g4

0x9c02,	// (0x0002103e) vkb2_row_keypad_pane_ParamLimits

0x9c02,	// (0x0002103e) vkb2_row_keypad_pane

0x9e48,	// (0x00021284) vkb2_cell_t_keypad_pane_ParamLimits

0x9e48,	// (0x00021284) vkb2_cell_t_keypad_pane

0x9e58,	// (0x00021294) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9e58,	// (0x00021294) vkb2_cell_t_keypad_pane_cp08

0x9e6b,	// (0x000212a7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9e6b,	// (0x000212a7) vkb2_cell_t_keypad_pane_cp09

0x9e7f,	// (0x000212bb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9e7f,	// (0x000212bb) vkb2_cell_t_keypad_pane_cp01

0x9e90,	// (0x000212cc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9e90,	// (0x000212cc) vkb2_cell_t_keypad_pane_cp02

0x9ea1,	// (0x000212dd) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9ea1,	// (0x000212dd) vkb2_cell_t_keypad_pane_cp03

0x9eb2,	// (0x000212ee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9eb2,	// (0x000212ee) vkb2_cell_t_keypad_pane_cp04

0x9ec3,	// (0x000212ff) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9ec3,	// (0x000212ff) vkb2_cell_t_keypad_pane_cp05

0x9ed4,	// (0x00021310) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9ed4,	// (0x00021310) vkb2_cell_t_keypad_pane_cp06

0x9ee5,	// (0x00021321) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9ee5,	// (0x00021321) vkb2_cell_t_keypad_pane_cp07

0x9ef6,	// (0x00021332) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9ef6,	// (0x00021332) vkb2_cell_t_keypad_pane_cp10

0xeb6a,	// (0x00025fa6) vkb2_cell_t_keypad_pane_g1

0x1439,	// (0x00018875) vkb2_cell_t_keypad_pane_t1

0xa4f7,	// (0x00021933) popup_grid_graphic2_window

0x144b,	// (0x00018887) aid_size_cell_graphic2_ParamLimits

0x144b,	// (0x00018887) aid_size_cell_graphic2

0x1483,	// (0x000188bf) bg_popup_window_pane_cp21_ParamLimits

0x1483,	// (0x000188bf) bg_popup_window_pane_cp21

0x1491,	// (0x000188cd) graphic2_pages_pane_ParamLimits

0x1491,	// (0x000188cd) graphic2_pages_pane

0x14d7,	// (0x00018913) grid_graphic2_control_pane_ParamLimits

0x14d7,	// (0x00018913) grid_graphic2_control_pane

0x1515,	// (0x00018951) grid_graphic2_pane_ParamLimits

0x1515,	// (0x00018951) grid_graphic2_pane

0x1589,	// (0x000189c5) cell_graphic2_pane

0xa4f7,	// (0x00021933) main_comp_mode_pane

0x0666,	// (0x00017aa2) list_ai3_gene_pane_ParamLimits

0x0a9a,	// (0x00017ed6) bg_popup_window_pane_cp19_ParamLimits

0x0aa6,	// (0x00017ee2) bg_touch_area_indi_pane_ParamLimits

0x0aa6,	// (0x00017ee2) bg_touch_area_indi_pane

0x0abc,	// (0x00017ef8) bg_touch_area_indi_pane_cp01_ParamLimits

0x0abc,	// (0x00017ef8) bg_touch_area_indi_pane_cp01

0x0ad2,	// (0x00017f0e) bg_touch_area_indi_pane_cp02_ParamLimits

0x0ad2,	// (0x00017f0e) bg_touch_area_indi_pane_cp02

0x0aea,	// (0x00017f26) bg_touch_area_indi_pane_cp03_ParamLimits

0x0aea,	// (0x00017f26) bg_touch_area_indi_pane_cp03

0x0b04,	// (0x00017f40) popup_slider_window_g1_ParamLimits

0x0b20,	// (0x00017f5c) popup_slider_window_g2_ParamLimits

0x0b3c,	// (0x00017f78) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0002712f) popup_slider_window_g_ParamLimits

0x0b98,	// (0x00017fd4) popup_slider_window_t1_ParamLimits

0x0c0c,	// (0x00018048) small_volume_slider_vertical_pane_ParamLimits

0x1589,	// (0x000189c5) cell_graphic2_pane_ParamLimits

0x15d7,	// (0x00018a13) bg_button_pane_cp10_ParamLimits

0x15d7,	// (0x00018a13) bg_button_pane_cp10

0x15ea,	// (0x00018a26) bg_button_pane_cp11_ParamLimits

0x15ea,	// (0x00018a26) bg_button_pane_cp11

0x15fd,	// (0x00018a39) graphic2_pages_pane_g1_ParamLimits

0x15fd,	// (0x00018a39) graphic2_pages_pane_g1

0x1618,	// (0x00018a54) graphic2_pages_pane_g2_ParamLimits

0x1618,	// (0x00018a54) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x000271f3) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x000271f3) graphic2_pages_pane_g

0x1630,	// (0x00018a6c) graphic2_pages_pane_t1_ParamLimits

0x1630,	// (0x00018a6c) graphic2_pages_pane_t1

0x1646,	// (0x00018a82) cell_graphic2_control_pane_ParamLimits

0x1646,	// (0x00018a82) cell_graphic2_control_pane

0x1667,	// (0x00018aa3) cell_graphic2_pane_g1_ParamLimits

0x1667,	// (0x00018aa3) cell_graphic2_pane_g1

0x1674,	// (0x00018ab0) cell_graphic2_pane_g2_ParamLimits

0x1674,	// (0x00018ab0) cell_graphic2_pane_g2

0x1681,	// (0x00018abd) cell_graphic2_pane_g3_ParamLimits

0x1681,	// (0x00018abd) cell_graphic2_pane_g3

0x168e,	// (0x00018aca) cell_graphic2_pane_g4_ParamLimits

0x168e,	// (0x00018aca) cell_graphic2_pane_g4

0x169b,	// (0x00018ad7) cell_graphic2_pane_g5_ParamLimits

0x169b,	// (0x00018ad7) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x000271f8) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x000271f8) cell_graphic2_pane_g

0x16b6,	// (0x00018af2) cell_graphic2_pane_t1_ParamLimits

0x16b6,	// (0x00018af2) cell_graphic2_pane_t1

0xc34b,	// (0x00023787) grid_highlight_pane_cp11_ParamLimits

0xc34b,	// (0x00023787) grid_highlight_pane_cp11

0xa874,	// (0x00021cb0) bg_button_pane_cp05

0x16df,	// (0x00018b1b) cell_graphic2_control_pane_g1

0xe8fc,	// (0x00025d38) bg_touch_area_indi_pane_g1

0x1707,	// (0x00018b43) aid_cmod_rocker_key_size

0x1711,	// (0x00018b4d) aid_cmode_itu_key_size

0x171b,	// (0x00018b57) main_cmode_video_pane

0x1725,	// (0x00018b61) main_comp_mode_itu_pane

0x1731,	// (0x00018b6d) main_comp_mode_rocker_pane

0x173d,	// (0x00018b79) cell_cmode_rocker_pane_ParamLimits

0x173d,	// (0x00018b79) cell_cmode_rocker_pane

0x174f,	// (0x00018b8b) cell_cmode_itu_pane_ParamLimits

0x174f,	// (0x00018b8b) cell_cmode_itu_pane

0xae5a,	// (0x00022296) bg_button_pane_cp06_ParamLimits

0xae5a,	// (0x00022296) bg_button_pane_cp06

0xeb6a,	// (0x00025fa6) cell_cmode_rocker_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) cell_cmode_rocker_pane_g1

0x0cb0,	// (0x000180ec) cell_cmode_rocker_pane_g2_ParamLimits

0x0cb0,	// (0x000180ec) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x00027208) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x00027208) cell_cmode_rocker_pane_g

0xa4f7,	// (0x00021933) bg_button_pane_cp07

0x1764,	// (0x00018ba0) cell_cmode_itu_pane_g1

0x176d,	// (0x00018ba9) cell_cmode_itu_pane_t1

0x177b,	// (0x00018bb7) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0002720d) cell_cmode_itu_pane_t

0x0ed7,	// (0x00018313) aid_touch_ctrl_left

0x0edf,	// (0x0001831b) aid_touch_ctrl_right

0xa4f7,	// (0x00021933) compa_mode_pane

0x1789,	// (0x00018bc5) aid_cmod_rocker_key_size_cp

0x1793,	// (0x00018bcf) aid_cmode_itu_key_size_cp

0x179d,	// (0x00018bd9) compa_mode_pane_g1

0x17a5,	// (0x00018be1) compa_mode_pane_g2

0x17ad,	// (0x00018be9) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x00027212) compa_mode_pane_g

0x17b5,	// (0x00018bf1) main_comp_mode_itu_pane_cp

0x17bd,	// (0x00018bf9) main_comp_mode_rocker_pane_cp

0x17c5,	// (0x00018c01) cell_cmode_itu_pane_cp_ParamLimits

0x17c5,	// (0x00018c01) cell_cmode_itu_pane_cp

0x17fb,	// (0x00018c37) cell_cmode_rocker_pane_cp_ParamLimits

0x17fb,	// (0x00018c37) cell_cmode_rocker_pane_cp

0xae5a,	// (0x00022296) bg_button_pane_cp06_cp_ParamLimits

0xae5a,	// (0x00022296) bg_button_pane_cp06_cp

0xeb6a,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xeb6a,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp

0xe8fc,	// (0x00025d38) cell_cmode_rocker_pane_g2_cp

0xa4f7,	// (0x00021933) bg_button_pane_cp07_cp

0x180d,	// (0x00018c49) cell_cmode_itu_pane_g1_cp

0x1816,	// (0x00018c52) cell_cmode_itu_pane_t1_cp

0x1816,	// (0x00018c52) cell_cmode_itu_pane_t2_cp

0xd81c,	// (0x00024c58) settings_code_pane_cp2

0xa5eb,	// (0x00021a27) bg_popup_window_pane_cp3_ParamLimits

0xaa42,	// (0x00021e7e) heading_pane_cp3_ParamLimits

0xaa4e,	// (0x00021e8a) listscroll_popup_graphic_pane_ParamLimits

0x951b,	// (0x00020957) fep_hwr_aid_pane_ParamLimits

0x98e4,	// (0x00020d20) aid_touch_sctrl_top_ParamLimits

0x98f1,	// (0x00020d2d) sctrl_sk_top_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x00027148) sctrl_sk_top_pane_g_ParamLimits

0x98fe,	// (0x00020d3a) sctrl_sk_top_pane_t1_ParamLimits

0x98e4,	// (0x00020d20) aid_touch_sctrl_bottom_ParamLimits

0x98fe,	// (0x00020d3a) sctrl_sk_bottom_pane_t1_ParamLimits

0x0e20,	// (0x0001825c) aid_area_touch_clock

0x9ad9,	// (0x00020f15) aid_vkb2_area_top_pane_cell_ParamLimits

0x9ad9,	// (0x00020f15) aid_vkb2_area_top_pane_cell

0x9c24,	// (0x00021060) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9c24,	// (0x00021060) aid_vkb2_area_bottom_pane_cell

0x1384,	// (0x000187c0) popup_char_count_window

0x1824,	// (0x00018c60) popup_char_count_window_g1

0x182d,	// (0x00018c69) popup_char_count_window_g2

0x1836,	// (0x00018c72) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x00027219) popup_char_count_window_g

0x183f,	// (0x00018c7b) popup_char_count_window_t1

0x999f,	// (0x00020ddb) popup_fep_char_preview_window_ParamLimits

0x999f,	// (0x00020ddb) popup_fep_char_preview_window

0x9af7,	// (0x00020f33) vkb2_top_candi_pane_ParamLimits

0x9af7,	// (0x00020f33) vkb2_top_candi_pane

0x184d,	// (0x00018c89) cell_vkb2_top_candi_pane_ParamLimits

0x184d,	// (0x00018c89) cell_vkb2_top_candi_pane

0xc95d,	// (0x00023d99) bg_popup_fep_char_preview_window_ParamLimits

0xc95d,	// (0x00023d99) bg_popup_fep_char_preview_window

0x9f0b,	// (0x00021347) popup_fep_char_preview_window_t1_ParamLimits

0x9f0b,	// (0x00021347) popup_fep_char_preview_window_t1

0x18aa,	// (0x00018ce6) bg_popup_fep_char_preview_window_g1

0x18a2,	// (0x00018cde) bg_popup_fep_char_preview_window_g2

0x189a,	// (0x00018cd6) bg_popup_fep_char_preview_window_g3

0x18ca,	// (0x00018d06) bg_popup_fep_char_preview_window_g4

0x18c2,	// (0x00018cfe) bg_popup_fep_char_preview_window_g5

0x9f45,	// (0x00021381) bg_popup_fep_char_preview_window_g6

0x18ba,	// (0x00018cf6) bg_popup_fep_char_preview_window_g7

0x18b2,	// (0x00018cee) bg_popup_fep_char_preview_window_g8

0x18d2,	// (0x00018d0e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x00027220) bg_popup_fep_char_preview_window_g

0xeb6a,	// (0x00025fa6) cell_vkb2_top_candi_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) cell_vkb2_top_candi_pane_g1

0xf015,	// (0x00026451) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf015,	// (0x00026451) cell_vkb2_top_candi_pane_g2

0xf036,	// (0x00026472) cell_vkb2_top_candi_pane_g3_ParamLimits

0xf036,	// (0x00026472) cell_vkb2_top_candi_pane_g3

0x9f4d,	// (0x00021389) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9f4d,	// (0x00021389) cell_vkb2_top_candi_pane_g4

0x17da,	// (0x00018c16) cell_vkb2_top_candi_pane_g5_ParamLimits

0x17da,	// (0x00018c16) cell_vkb2_top_candi_pane_g5

0x0cb0,	// (0x000180ec) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0cb0,	// (0x000180ec) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x00027233) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x00027233) cell_vkb2_top_candi_pane_g

0x9f6e,	// (0x000213aa) cell_vkb2_top_candi_pane_t1

0x9399,	// (0x000207d5) aid_size_touch_slider_mark_ParamLimits

0x9399,	// (0x000207d5) aid_size_touch_slider_mark

0x14c7,	// (0x00018903) grid_graphic2_catg_pane_ParamLimits

0x14c7,	// (0x00018903) grid_graphic2_catg_pane

0x1565,	// (0x000189a1) popup_grid_graphic2_window_t1_ParamLimits

0x1565,	// (0x000189a1) popup_grid_graphic2_window_t1

0x1577,	// (0x000189b3) popup_grid_graphic2_window_t2_ParamLimits

0x1577,	// (0x000189b3) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x000271ee) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x000271ee) popup_grid_graphic2_window_t

0xa874,	// (0x00021cb0) bg_button_pane_cp05_ParamLimits

0x16df,	// (0x00018b1b) cell_graphic2_control_pane_g1_ParamLimits

0x18da,	// (0x00018d16) cell_graphic2_catg_pane_ParamLimits

0x18da,	// (0x00018d16) cell_graphic2_catg_pane

0xa4f7,	// (0x00021933) bg_button_pane_cp12

0x18ec,	// (0x00018d28) cell_graphic2_catg_pane_g1

0x0dec,	// (0x00018228) cell_tb_ext_pane_t1_ParamLimits

0x9d41,	// (0x0002117d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9d41,	// (0x0002117d) vkb2_top_cell_right_narrow_pane

0x9d59,	// (0x00021195) vkb2_top_cell_right_wide_pane_ParamLimits

0x9d59,	// (0x00021195) vkb2_top_cell_right_wide_pane

0x950d,	// (0x00020949) bg_vkb2_func_pane_ParamLimits

0x950d,	// (0x00020949) bg_vkb2_func_pane

0x9dca,	// (0x00021206) vkb2_top_cell_left_pane_g1_ParamLimits

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp03_ParamLimits

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp03

0x9e28,	// (0x00021264) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc2df,	// (0x0002371b) bg_vkb2_func_pane_g1

0xc2e7,	// (0x00023723) bg_vkb2_func_pane_g2

0xc2f7,	// (0x00023733) bg_vkb2_func_pane_g3

0xc2ef,	// (0x0002372b) bg_vkb2_func_pane_g4

0xc2ff,	// (0x0002373b) bg_vkb2_func_pane_g5

0xc307,	// (0x00023743) bg_vkb2_func_pane_g6

0xc30f,	// (0x0002374b) bg_vkb2_func_pane_g7

0xc317,	// (0x00023753) bg_vkb2_func_pane_g8

0xc2d7,	// (0x00023713) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x00027240) bg_vkb2_func_pane_g

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp01_ParamLimits

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp01

0x9dca,	// (0x00021206) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x9dca,	// (0x00021206) vkb2_top_cell_right_wide_pane_g1

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp02_ParamLimits

0x950d,	// (0x00020949) bg_vkb2_fuc_pane_cp02

0x9e28,	// (0x00021264) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9e28,	// (0x00021264) vkb2_top_cell_right_narrow_pane_g1

0x0a18,	// (0x00017e54) aid_touch_area_decrease_ParamLimits

0x0a18,	// (0x00017e54) aid_touch_area_decrease

0x0a3c,	// (0x00017e78) aid_touch_area_increase_ParamLimits

0x0a3c,	// (0x00017e78) aid_touch_area_increase

0x0a48,	// (0x00017e84) aid_touch_area_mute_ParamLimits

0x0a48,	// (0x00017e84) aid_touch_area_mute

0x0a6c,	// (0x00017ea8) aid_touch_area_slider_ParamLimits

0x0a6c,	// (0x00017ea8) aid_touch_area_slider

0x0b58,	// (0x00017f94) popup_slider_window_g4_ParamLimits

0x0b58,	// (0x00017f94) popup_slider_window_g4

0x0b64,	// (0x00017fa0) popup_slider_window_g5_ParamLimits

0x0b64,	// (0x00017fa0) popup_slider_window_g5

0x0b86,	// (0x00017fc2) popup_slider_window_g6_ParamLimits

0x0b86,	// (0x00017fc2) popup_slider_window_g6

0x0bc6,	// (0x00018002) popup_slider_window_t2_ParamLimits

0x0bc6,	// (0x00018002) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0002713c) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0002713c) popup_slider_window_t

0x0bde,	// (0x0001801a) slider_pane_ParamLimits

0x0bde,	// (0x0001801a) slider_pane

0x18f5,	// (0x00018d31) slider_pane_g1_ParamLimits

0x18f5,	// (0x00018d31) slider_pane_g1

0x1909,	// (0x00018d45) slider_pane_g2_ParamLimits

0x1909,	// (0x00018d45) slider_pane_g2

0x191f,	// (0x00018d5b) slider_pane_g3_ParamLimits

0x191f,	// (0x00018d5b) slider_pane_g3

0x0003,

0xfe17,	// (0x00027253) slider_pane_g_ParamLimits

0xfe17,	// (0x00027253) slider_pane_g

0x8fde,	// (0x0002041a) popup_tb_float_extension_window_ParamLimits

0x8fde,	// (0x0002041a) popup_tb_float_extension_window

0x194b,	// (0x00018d87) aid_size_cell_tb_float_ext

0xa4f7,	// (0x00021933) bg_popup_sub_window_cp28

0x1957,	// (0x00018d93) grid_tb_float_ext_pane

0x1961,	// (0x00018d9d) cell_tb_float_ext_pane_ParamLimits

0x1961,	// (0x00018d9d) cell_tb_float_ext_pane

0x197b,	// (0x00018db7) cell_tb_float_ext_pane_g1

0x1984,	// (0x00018dc0) grid_highlight_pane_cp12

0x964e,	// (0x00020a8a) cell_last_hwr_side_pane_ParamLimits

0x964e,	// (0x00020a8a) cell_last_hwr_side_pane

0xe8fc,	// (0x00025d38) cell_last_hwr_side_pane_g1

0x198d,	// (0x00018dc9) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0002725c) cell_last_hwr_side_pane_g

0x9cf0,	// (0x0002112c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9cf0,	// (0x0002112c) vkb2_area_bottom_space_btn_pane

0xeb6a,	// (0x00025fa6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x1439,	// (0x00018875) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9f6e,	// (0x000213aa) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9f8d,	// (0x000213c9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9f8d,	// (0x000213c9) vkb2_area_bottom_space_btn_pane_g1

0x9fc7,	// (0x00021403) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9fc7,	// (0x00021403) vkb2_area_bottom_space_btn_pane_g2

0x9ffd,	// (0x00021439) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9ffd,	// (0x00021439) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x00027261) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x00027261) vkb2_area_bottom_space_btn_pane_g

0x95c2,	// (0x000209fe) cel_fep_hwr_func_pane_ParamLimits

0x95c2,	// (0x000209fe) cel_fep_hwr_func_pane

0x95fe,	// (0x00020a3a) cell_hwr_side_button_pane_ParamLimits

0x95fe,	// (0x00020a3a) cell_hwr_side_button_pane

0x0e20,	// (0x0001825c) aid_area_touch_clock_ParamLimits

0xa874,	// (0x00021cb0) bg_uniindi_top_pane_ParamLimits

0x0e32,	// (0x0001826e) uniindi_top_pane_g1_ParamLimits

0x0e48,	// (0x00018284) uniindi_top_pane_g2_ParamLimits

0x0e54,	// (0x00018290) uniindi_top_pane_g3_ParamLimits

0x0e65,	// (0x000182a1) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x00027174) uniindi_top_pane_g_ParamLimits

0x0e72,	// (0x000182ae) uniindi_top_pane_t1_ParamLimits

0xa874,	// (0x00021cb0) bg_vkb2_func_pane_cp01_ParamLimits

0xa874,	// (0x00021cb0) bg_vkb2_func_pane_cp01

0x1996,	// (0x00018dd2) cel_fep_hwr_func_pane_g1_ParamLimits

0x1996,	// (0x00018dd2) cel_fep_hwr_func_pane_g1

0xa874,	// (0x00021cb0) bg_vkb2_func_pane_cp02_ParamLimits

0xa874,	// (0x00021cb0) bg_vkb2_func_pane_cp02

0x1996,	// (0x00018dd2) cell_hwr_side_button_pane_g1_ParamLimits

0x1996,	// (0x00018dd2) cell_hwr_side_button_pane_g1

0xc158,	// (0x00023594) status_pane_g4_ParamLimits

0xc158,	// (0x00023594) status_pane_g4

0xc172,	// (0x000235ae) status_pane_t1

0xe616,	// (0x00025a52) form2_midp_gauge_slider_cont_pane

0xe61e,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe630,	// (0x00025a6c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe642,	// (0x00025a7e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb04,	// (0x00026f40) form2_midp_gauge_slider_pane_t_ParamLimits

0xe654,	// (0x00025a90) form2_midp_slider_pane_ParamLimits

0x995f,	// (0x00020d9b) aid_size_cell_func_vkb2_ParamLimits

0x995f,	// (0x00020d9b) aid_size_cell_func_vkb2

0x1937,	// (0x00018d73) slider_pane_g4_ParamLimits

0x1937,	// (0x00018d73) slider_pane_g4

0xa047,	// (0x00021483) form2_midp_gauge_slider_pane_t2_cp01

0xa055,	// (0x00021491) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa055,	// (0x00021491) form2_midp_gauge_slider_pane_t3_cp01

0xa072,	// (0x000214ae) form2_midp_slider_pane_cp01

0xa4f7,	// (0x00021933) navi_smil_pane

0x3419,	// (0x0001a855) navi_smil_pane_g1

0x3421,	// (0x0001a85d) navi_smil_pane_t1

0x33f7,	// (0x0001a833) form2_midp_slider_pane_g1

0x3400,	// (0x0001a83c) form2_midp_slider_pane_g2

0x3408,	// (0x0001a844) form2_midp_slider_pane_g3

0x33f7,	// (0x0001a833) form2_midp_slider_pane_g4

0xa07b,	// (0x000214b7) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0002726a) form2_midp_slider_pane_g

0xa037,	// (0x00021473) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa037,	// (0x00021473) vkb2_area_bottom_space_btn_pane_g4

0xbf8d,	// (0x000233c9) lc0_navi_pane_ParamLimits

0xbf8d,	// (0x000233c9) lc0_navi_pane

0xc003,	// (0x0002343f) lc0_stat_indi_pane_ParamLimits

0xc003,	// (0x0002343f) lc0_stat_indi_pane

0xc01a,	// (0x00023456) ls0_title_pane_ParamLimits

0xc01a,	// (0x00023456) ls0_title_pane

0xae5a,	// (0x00022296) bg_popup_sub_pane_cp14_ParamLimits

0x0e07,	// (0x00018243) list_uniindi_pane_ParamLimits

0x0e13,	// (0x0001824f) uniindi_top_pane_ParamLimits

0x0eaf,	// (0x000182eb) list_single_uniindi_pane_g1_ParamLimits

0x0ec2,	// (0x000182fe) list_single_uniindi_pane_t1_ParamLimits

0xa084,	// (0x000214c0) lc0_stat_clock_pane_ParamLimits

0xa084,	// (0x000214c0) lc0_stat_clock_pane

0xa091,	// (0x000214cd) lc0_stat_indi_pane_g1_ParamLimits

0xa091,	// (0x000214cd) lc0_stat_indi_pane_g1

0xa09e,	// (0x000214da) lc0_stat_indi_pane_g2_ParamLimits

0xa09e,	// (0x000214da) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x00027275) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x00027275) lc0_stat_indi_pane_g

0xa0ab,	// (0x000214e7) lc0_uni_indicator_pane_ParamLimits

0xa0ab,	// (0x000214e7) lc0_uni_indicator_pane

0xa0b8,	// (0x000214f4) ls0_title_pane_g1_ParamLimits

0xa0b8,	// (0x000214f4) ls0_title_pane_g1

0xa0cc,	// (0x00021508) ls0_title_pane_t1_ParamLimits

0xa0cc,	// (0x00021508) ls0_title_pane_t1

0xa102,	// (0x0002153e) lc0_uni_indicator_pane_g1_ParamLimits

0xa102,	// (0x0002153e) lc0_uni_indicator_pane_g1

0x342f,	// (0x0001a86b) lc0_stat_clock_pane_t1

0xa4f7,	// (0x00021933) main_ai5_pane

0x343d,	// (0x0001a879) ai5_sk_pane_ParamLimits

0x343d,	// (0x0001a879) ai5_sk_pane

0xa117,	// (0x00021553) cell_ai5_widget_pane_ParamLimits

0xa117,	// (0x00021553) cell_ai5_widget_pane

0x344a,	// (0x0001a886) aid_size_cell_widget_grid

0x3460,	// (0x0001a89c) bg_ai5_widget_pane_ParamLimits

0x3460,	// (0x0001a89c) bg_ai5_widget_pane

0x34ca,	// (0x0001a906) cell_ai5_widget_pane_g2

0x34da,	// (0x0001a916) cell_ai5_widget_pane_g3

0x34f9,	// (0x0001a935) cell_ai5_widget_pane_g4

0x3505,	// (0x0001a941) cell_ai5_widget_pane_g5

0x3511,	// (0x0001a94d) cell_ai5_widget_pane_g6

0x351d,	// (0x0001a959) cell_ai5_widget_pane_g7

0x3565,	// (0x0001a9a1) cell_ai5_widget_pane_t1_ParamLimits

0x3565,	// (0x0001a9a1) cell_ai5_widget_pane_t1

0x3582,	// (0x0001a9be) cell_ai5_widget_pane_t2_ParamLimits

0x3582,	// (0x0001a9be) cell_ai5_widget_pane_t2

0x359a,	// (0x0001a9d6) cell_ai5_widget_pane_t3_ParamLimits

0x359a,	// (0x0001a9d6) cell_ai5_widget_pane_t3

0x35b2,	// (0x0001a9ee) cell_ai5_widget_pane_t4_ParamLimits

0x35b2,	// (0x0001a9ee) cell_ai5_widget_pane_t4

0x35cc,	// (0x0001aa08) cell_ai5_widget_pane_t5_ParamLimits

0x35cc,	// (0x0001aa08) cell_ai5_widget_pane_t5

0x35eb,	// (0x0001aa27) cell_ai5_widget_pane_t6_ParamLimits

0x35eb,	// (0x0001aa27) cell_ai5_widget_pane_t6

0x35fd,	// (0x0001aa39) cell_ai5_widget_pane_t7_ParamLimits

0x35fd,	// (0x0001aa39) cell_ai5_widget_pane_t7

0x3616,	// (0x0001aa52) cell_ai5_widget_pane_t8_ParamLimits

0x3616,	// (0x0001aa52) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0002728f) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0002728f) cell_ai5_widget_pane_t

0x3662,	// (0x0001aa9e) grid_ai5_widget_pane

0xae5a,	// (0x00022296) highlight_cell_ai5_widget_pane_ParamLimits

0xae5a,	// (0x00022296) highlight_cell_ai5_widget_pane

0xa1e1,	// (0x0002161d) ai5_sk_left_pane

0xa1eb,	// (0x00021627) ai5_sk_middle_pane

0xa1f5,	// (0x00021631) ai5_sk_right_pane

0x367a,	// (0x0001aab6) bg_ai5_widget_pane_g1_ParamLimits

0x367a,	// (0x0001aab6) bg_ai5_widget_pane_g1

0x3686,	// (0x0001aac2) bg_ai5_widget_pane_g2_ParamLimits

0x3686,	// (0x0001aac2) bg_ai5_widget_pane_g2

0x3692,	// (0x0001aace) bg_ai5_widget_pane_g3_ParamLimits

0x3692,	// (0x0001aace) bg_ai5_widget_pane_g3

0x369e,	// (0x0001aada) bg_ai5_widget_pane_g4_ParamLimits

0x369e,	// (0x0001aada) bg_ai5_widget_pane_g4

0x36aa,	// (0x0001aae6) bg_ai5_widget_pane_g5_ParamLimits

0x36aa,	// (0x0001aae6) bg_ai5_widget_pane_g5

0x36b6,	// (0x0001aaf2) bg_ai5_widget_pane_g6_ParamLimits

0x36b6,	// (0x0001aaf2) bg_ai5_widget_pane_g6

0x36c2,	// (0x0001aafe) bg_ai5_widget_pane_g7_ParamLimits

0x36c2,	// (0x0001aafe) bg_ai5_widget_pane_g7

0x36ce,	// (0x0001ab0a) bg_ai5_widget_pane_g8_ParamLimits

0x36ce,	// (0x0001ab0a) bg_ai5_widget_pane_g8

0x36da,	// (0x0001ab16) bg_ai5_widget_pane_g9_ParamLimits

0x36da,	// (0x0001ab16) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x000272a4) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x000272a4) bg_ai5_widget_pane_g

0x370d,	// (0x0001ab49) cell_shortcut_ai5_widget_pane_ParamLimits

0x370d,	// (0x0001ab49) cell_shortcut_ai5_widget_pane

0xba97,	// (0x00022ed3) bg_cell_shortcut_ai5_widget_pane

0x371e,	// (0x0001ab5a) cell_grid_ai5_widget_pane_g1

0x3727,	// (0x0001ab63) highlight_cell_shortcut_ai5_widget_pane

0xc2e7,	// (0x00023723) ai5_sk_left_pane_g1

0x372f,	// (0x0001ab6b) ai5_sk_left_pane_g2

0x3737,	// (0x0001ab73) ai5_sk_left_pane_g3

0x373f,	// (0x0001ab7b) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x000272b7) ai5_sk_left_pane_g

0x3747,	// (0x0001ab83) ai5_sk_left_pane_t1

0xc2df,	// (0x0002371b) ai5_sk_right_pane_g1

0x3755,	// (0x0001ab91) ai5_sk_right_pane_g2

0x375d,	// (0x0001ab99) ai5_sk_right_pane_g3

0x3765,	// (0x0001aba1) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x000272c0) ai5_sk_right_pane_g

0x376d,	// (0x0001aba9) ai5_sk_right_pane_t1

0xc2df,	// (0x0002371b) ai5_sk_middle_pane_g1

0xc2e7,	// (0x00023723) ai5_sk_middle_pane_g2

0xc2ff,	// (0x0002373b) ai5_sk_middle_pane_g3

0x375d,	// (0x0001ab99) ai5_sk_middle_pane_g4

0x3737,	// (0x0001ab73) ai5_sk_middle_pane_g5

0x377b,	// (0x0001abb7) ai5_sk_middle_pane_g6

0xa1ff,	// (0x0002163b) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x000272c9) ai5_sk_middle_pane_g

0xbe19,	// (0x00023255) aid_touch_area_size_lc0_ParamLimits

0xbe19,	// (0x00023255) aid_touch_area_size_lc0

0x974d,	// (0x00020b89) cell_hwr_candidate_pane_t1_ParamLimits

0xbe35,	// (0x00023271) aid_touch_navi_pane

0xc102,	// (0x0002353e) status_dt_navi_pane_ParamLimits

0xc102,	// (0x0002353e) status_dt_navi_pane

0xc10f,	// (0x0002354b) status_dt_sta_pane_ParamLimits

0xc10f,	// (0x0002354b) status_dt_sta_pane

0xa207,	// (0x00021643) dt_sta_controll_pane

0xa214,	// (0x00021650) dt_sta_indi_pane

0xa225,	// (0x00021661) dt_sta_title_pane

0xa874,	// (0x00021cb0) bg_dt_sta_indi_pane_ParamLimits

0xa874,	// (0x00021cb0) bg_dt_sta_indi_pane

0x3783,	// (0x0001abbf) dt_sta_battery_pane

0xa238,	// (0x00021674) dt_sta_indi_pane_g1

0xa241,	// (0x0002167d) dt_sta_indi_pane_g2

0xa24a,	// (0x00021686) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x000272d8) dt_sta_indi_pane_g

0xa253,	// (0x0002168f) dt_sta_signal_pane

0xae5a,	// (0x00022296) bg_dt_sta_title_pane_ParamLimits

0xae5a,	// (0x00022296) bg_dt_sta_title_pane

0x378b,	// (0x0001abc7) dt_sta_title_pane_g1

0xa25c,	// (0x00021698) dt_sta_title_pane_t1_ParamLimits

0xa25c,	// (0x00021698) dt_sta_title_pane_t1

0xa4f7,	// (0x00021933) bg_dt_sta_control_pane

0xa271,	// (0x000216ad) dt_sta_controll_pane_g1

0x3793,	// (0x0001abcf) bg_dt_sta_title_pane_g1

0x379c,	// (0x0001abd8) bg_dt_sta_title_pane_g2

0x37a5,	// (0x0001abe1) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x000272df) bg_dt_sta_title_pane_g

0xe8fc,	// (0x00025d38) bg_dt_sta_indi_pane_g1

0x37ae,	// (0x0001abea) dt_sta_signal_pane_g1

0x37b6,	// (0x0001abf2) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x000272e6) dt_sta_signal_pane_g

0x37be,	// (0x0001abfa) dt_sta_battery_pane_g1

0x37c7,	// (0x0001ac03) dt_sta_battery_pane_t1

0xe8fc,	// (0x00025d38) bg_dt_sta_control_pane_g1

0xb5ae,	// (0x000229ea) fep_china_uni_eep_pane

0xb5b6,	// (0x000229f2) fep_china_uni_entry_pane_ParamLimits

0xb5c6,	// (0x00022a02) popup_fep_china_uni_window_g1_ParamLimits

0xb5d6,	// (0x00022a12) popup_fep_china_uni_window_g2_ParamLimits

0xb5d6,	// (0x00022a12) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00026b5f) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00026b5f) popup_fep_china_uni_window_g

0x37d6,	// (0x0001ac12) fep_china_uni_eep_pane_g1

0x37de,	// (0x0001ac1a) fep_china_uni_eep_pane_t1

0x3410,	// (0x0001a84c) aid_touch_area_size_smil_player

0xbf85,	// (0x000233c1) lc0_clock_pane

0xc166,	// (0x000235a2) status_pane_g5_ParamLimits

0xc166,	// (0x000235a2) status_pane_g5

0x8ca5,	// (0x000200e1) popup_keymap_window

0xc124,	// (0x00023560) status_icon_pane

0x34da,	// (0x0001a916) cell_ai5_widget_pane_g3_ParamLimits

0x34f9,	// (0x0001a935) cell_ai5_widget_pane_g4_ParamLimits

0x3505,	// (0x0001a941) cell_ai5_widget_pane_g5_ParamLimits

0x3529,	// (0x0001a965) cell_ai5_widget_pane_g8_ParamLimits

0x3529,	// (0x0001a965) cell_ai5_widget_pane_g8

0x353d,	// (0x0001a979) cell_ai5_widget_pane_g9_ParamLimits

0x353d,	// (0x0001a979) cell_ai5_widget_pane_g9

0x3551,	// (0x0001a98d) cell_ai5_widget_pane_g10_ParamLimits

0x3551,	// (0x0001a98d) cell_ai5_widget_pane_g10

0x37ed,	// (0x0001ac29) status_icon_pane_g1

0xa4f7,	// (0x00021933) bg_popup_sub_pane_cp13

0x37f5,	// (0x0001ac31) popup_keymap_window_t1

0xbd5e,	// (0x0002319a) control_pane_g6_ParamLimits

0xbd5e,	// (0x0002319a) control_pane_g6

0xbd6b,	// (0x000231a7) control_pane_g7_ParamLimits

0xbd6b,	// (0x000231a7) control_pane_g7

0xbd78,	// (0x000231b4) control_pane_g8_ParamLimits

0xbd78,	// (0x000231b4) control_pane_g8

0xa207,	// (0x00021643) dt_sta_controll_pane_ParamLimits

0xa214,	// (0x00021650) dt_sta_indi_pane_ParamLimits

0xa225,	// (0x00021661) dt_sta_title_pane_ParamLimits

0xad7a,	// (0x000221b6) aid_size_touch_scroll_bar_cale

0x8351,	// (0x0001f78d) popup_discreet_window_ParamLimits

0x8351,	// (0x0001f78d) popup_discreet_window

0x83cb,	// (0x0001f807) popup_sk_window

0xc95d,	// (0x00023d99) bg_popup_sub_pane_cp28_ParamLimits

0xc95d,	// (0x00023d99) bg_popup_sub_pane_cp28

0x3803,	// (0x0001ac3f) popup_discreet_window_g1_ParamLimits

0x3803,	// (0x0001ac3f) popup_discreet_window_g1

0x3823,	// (0x0001ac5f) popup_discreet_window_t1_ParamLimits

0x3823,	// (0x0001ac5f) popup_discreet_window_t1

0x3841,	// (0x0001ac7d) popup_discreet_window_t2_ParamLimits

0x3841,	// (0x0001ac7d) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x000272eb) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x000272eb) popup_discreet_window_t

0xa27a,	// (0x000216b6) popup_sk_window_g1

0xa284,	// (0x000216c0) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x000272f2) popup_sk_window_g

0xa28e,	// (0x000216ca) popup_sk_window_t1

0xa29c,	// (0x000216d8) popup_sk_window_t1_copy1

0x34ca,	// (0x0001a906) cell_ai5_widget_pane_g2_ParamLimits

0x3628,	// (0x0001aa64) cell_ai5_widget_pane_t9_ParamLimits

0x3628,	// (0x0001aa64) cell_ai5_widget_pane_t9

0xa4f7,	// (0x00021933) main_fep_fshwr2_pane

0xa2aa,	// (0x000216e6) aid_fshwr2_btn_pane

0xa2b6,	// (0x000216f2) aid_fshwr2_syb_pane

0xa2c2,	// (0x000216fe) aid_fshwr2_txt_pane

0xa2ce,	// (0x0002170a) fshwr2_func_candi_pane

0xa2e3,	// (0x0002171f) fshwr2_hwr_syb_pane

0xa2f3,	// (0x0002172f) fshwr2_icf_pane

0xa4f7,	// (0x00021933) fshwr2_icf_bg_pane

0xa31c,	// (0x00021758) fshwr2_icf_pane_t1_ParamLimits

0xa31c,	// (0x00021758) fshwr2_icf_pane_t1

0xe8fc,	// (0x00025d38) fshwr2_func_candi_pane_g1

0x3893,	// (0x0001accf) fshwr2_func_candi_row_pane_ParamLimits

0x3893,	// (0x0001accf) fshwr2_func_candi_row_pane

0xa333,	// (0x0002176f) cell_fshwr2_syb_pane_ParamLimits

0xa333,	// (0x0002176f) cell_fshwr2_syb_pane

0xeb6a,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1

0xa4f7,	// (0x00021933) bg_popup_call_pane_cp01

0x38a4,	// (0x0001ace0) fshwr2_func_candi_cell_pane_ParamLimits

0x38a4,	// (0x0001ace0) fshwr2_func_candi_cell_pane

0x38d2,	// (0x0001ad0e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x38d2,	// (0x0001ad0e) fshwr2_func_candi_cell_bg_pane

0x38ec,	// (0x0001ad28) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x38ec,	// (0x0001ad28) fshwr2_func_candi_cell_pane_g1

0x390c,	// (0x0001ad48) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x390c,	// (0x0001ad48) fshwr2_func_candi_cell_pane_t1

0xa4f7,	// (0x00021933) bg_button_pane_cp08

0xba97,	// (0x00022ed3) cell_fshwr2_syb_bg_pane

0xa34f,	// (0x0002178b) cell_fshwr2_syb_bg_pane_g1

0xa357,	// (0x00021793) cell_fshwr2_syb_bg_pane_t1

0xae5a,	// (0x00022296) main_tmo_pane

0xd472,	// (0x000248ae) uni_indicator_pane_g1_ParamLimits

0xd487,	// (0x000248c3) uni_indicator_pane_g2_ParamLimits

0xd49d,	// (0x000248d9) uni_indicator_pane_g3_ParamLimits

0xd4b3,	// (0x000248ef) uni_indicator_pane_g4_ParamLimits

0xd4b3,	// (0x000248ef) uni_indicator_pane_g4

0xd4c7,	// (0x00024903) uni_indicator_pane_g5_ParamLimits

0xd4c7,	// (0x00024903) uni_indicator_pane_g5

0xd4db,	// (0x00024917) uni_indicator_pane_g6_ParamLimits

0xd4db,	// (0x00024917) uni_indicator_pane_g6

0xf920,	// (0x00026d5c) uni_indicator_pane_g_ParamLimits

0x09fa,	// (0x00017e36) popup_tmo_note_window_ParamLimits

0x09fa,	// (0x00017e36) popup_tmo_note_window

0xae5a,	// (0x00022296) fshwr2_bg_pane

0x38fd,	// (0x0001ad39) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x38fd,	// (0x0001ad39) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x000272f7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x000272f7) fshwr2_func_candi_cell_pane_g

0xe8fc,	// (0x00025d38) bg_popup_window_pane_cp01

0x391f,	// (0x0001ad5b) bg_popup_window_pane_g1_cp01

0x3928,	// (0x0001ad64) bg_popup_window_pane_cp22_ParamLimits

0x3928,	// (0x0001ad64) bg_popup_window_pane_cp22

0x3936,	// (0x0001ad72) listscroll_tmo_link_pane_ParamLimits

0x3936,	// (0x0001ad72) listscroll_tmo_link_pane

0x3976,	// (0x0001adb2) popup_tmo_note_window_g1_ParamLimits

0x3976,	// (0x0001adb2) popup_tmo_note_window_g1

0x3983,	// (0x0001adbf) tmo_note_info_pane_ParamLimits

0x3983,	// (0x0001adbf) tmo_note_info_pane

0xa366,	// (0x000217a2) list_tmo_note_info_pane_g1_ParamLimits

0xa366,	// (0x000217a2) list_tmo_note_info_pane_g1

0x399d,	// (0x0001add9) list_tmo_note_info_pane_g2_ParamLimits

0x399d,	// (0x0001add9) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x000272fc) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x000272fc) list_tmo_note_info_pane_g

0x39b9,	// (0x0001adf5) list_tmo_note_info_text_pane_ParamLimits

0x39b9,	// (0x0001adf5) list_tmo_note_info_text_pane

0x39fb,	// (0x0001ae37) list_tmo_link_pane

0x3a08,	// (0x0001ae44) scroll_pane_cp20

0x3a15,	// (0x0001ae51) list_single_tmo_link_pane_ParamLimits

0x3a15,	// (0x0001ae51) list_single_tmo_link_pane

0x3a25,	// (0x0001ae61) list_single_tmo_link_pane_t1

0x3a33,	// (0x0001ae6f) list_tmo_note_info_text_pane_t1_ParamLimits

0x3a33,	// (0x0001ae6f) list_tmo_note_info_text_pane_t1

0xaf08,	// (0x00022344) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaf08,	// (0x00022344) aid_size_touch_scroll_bar_cp01

0x75ea,	// (0x0001ea26) aid_size_touch_slider_marker

0x83b3,	// (0x0001f7ef) popup_settings_window_ParamLimits

0x83b3,	// (0x0001f7ef) popup_settings_window

0x7798,	// (0x0001ebd4) popup_candi_list_indi_window

0xbe35,	// (0x00023271) aid_touch_navi_pane_ParamLimits

0x98b8,	// (0x00020cf4) rs_clock_indi_pane

0x98c1,	// (0x00020cfd) sctrl_sk_bottom_pane_ParamLimits

0x98d2,	// (0x00020d0e) sctrl_sk_top_pane_ParamLimits

0x99b9,	// (0x00020df5) popup_fep_tooltip_window

0x344a,	// (0x0001a886) aid_size_cell_widget_grid_ParamLimits

0x34be,	// (0x0001a8fa) cell_ai5_widget_pane_g1_ParamLimits

0x34be,	// (0x0001a8fa) cell_ai5_widget_pane_g1

0x3511,	// (0x0001a94d) cell_ai5_widget_pane_g6_ParamLimits

0x351d,	// (0x0001a959) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0002727a) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0002727a) cell_ai5_widget_pane_g

0x364c,	// (0x0001aa88) cell_ai5_widget_pane_t10_ParamLimits

0x364c,	// (0x0001aa88) cell_ai5_widget_pane_t10

0x3662,	// (0x0001aa9e) grid_ai5_widget_pane_ParamLimits

0x36e6,	// (0x0001ab22) cell_contacts_ai5_widget_pane_ParamLimits

0x36e6,	// (0x0001ab22) cell_contacts_ai5_widget_pane

0x3856,	// (0x0001ac92) popup_discreet_window_t3_ParamLimits

0x3856,	// (0x0001ac92) popup_discreet_window_t3

0xa308,	// (0x00021744) popup_fshwr2_char_preview_window_ParamLimits

0xa308,	// (0x00021744) popup_fshwr2_char_preview_window

0xa37d,	// (0x000217b9) tmo_note_info_pane_t1

0xa392,	// (0x000217ce) tmo_note_info_pane_t2

0xa3a9,	// (0x000217e5) tmo_note_info_pane_t3

0x39d7,	// (0x0001ae13) tmo_note_info_pane_t4

0x39e9,	// (0x0001ae25) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x00027301) tmo_note_info_pane_t

0x39fb,	// (0x0001ae37) list_tmo_link_pane_ParamLimits

0x3a08,	// (0x0001ae44) scroll_pane_cp20_ParamLimits

0xa4f7,	// (0x00021933) bg_popup_fep_char_preview_window_cp01

0x3a4c,	// (0x0001ae88) popup_fshwr2_char_preview_window_t1

0x3a5a,	// (0x0001ae96) popup_candi_list_indi_window_g1

0x3a63,	// (0x0001ae9f) bg_cell_contacts_ai5_widget_pane

0x3a6f,	// (0x0001aeab) cell_contacts_ai5_widget_pane_g1

0x3a82,	// (0x0001aebe) cell_contacts_ai5_widget_pane_g2

0x3a8e,	// (0x0001aeca) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0002730c) cell_contacts_ai5_widget_pane_g

0x3aa0,	// (0x0001aedc) cell_contacts_ai5_widget_pane_t1

0xae5a,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3b1a,	// (0x0001af56) settings_container_pane

0xba97,	// (0x00022ed3) listscroll_set_pane_copy1

0xdfc2,	// (0x000253fe) scroll_pane_cp121_copy1

0x3b26,	// (0x0001af62) set_content_pane_copy1

0x3b2e,	// (0x0001af6a) aid_height_set_list_copy1_ParamLimits

0x3b2e,	// (0x0001af6a) aid_height_set_list_copy1

0xd6ce,	// (0x00024b0a) aid_size_parent_copy1_ParamLimits

0xd6ce,	// (0x00024b0a) aid_size_parent_copy1

0x3b3a,	// (0x0001af76) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3b3a,	// (0x0001af76) button_value_adjust_pane_cp6_copy1

0xbdd3,	// (0x0002320f) list_highlight_pane_cp2_copy1_ParamLimits

0xbdd3,	// (0x0002320f) list_highlight_pane_cp2_copy1

0x3b4e,	// (0x0001af8a) list_set_pane_copy1_ParamLimits

0x3b4e,	// (0x0001af8a) list_set_pane_copy1

0x3ab5,	// (0x0001aef1) main_pane_set_t1_copy1_ParamLimits

0x3ab5,	// (0x0001aef1) main_pane_set_t1_copy1

0x3aef,	// (0x0001af2b) main_pane_set_t2_copy1_ParamLimits

0x3aef,	// (0x0001af2b) main_pane_set_t2_copy1

0x3bfb,	// (0x0001b037) main_pane_set_t3_copy1

0x3c09,	// (0x0001b045) main_pane_set_t4_copy1

0x3b0e,	// (0x0001af4a) set_content_pane_g1_copy1_ParamLimits

0x3b0e,	// (0x0001af4a) set_content_pane_g1_copy1

0x3c17,	// (0x0001b053) setting_code_pane_copy1

0x3c1f,	// (0x0001b05b) setting_slider_graphic_pane_copy1

0x3c1f,	// (0x0001b05b) setting_slider_pane_copy1

0x3c1f,	// (0x0001b05b) setting_text_pane_copy1

0x3c1f,	// (0x0001b05b) setting_volume_pane_copy1

0x3c17,	// (0x0001b053) settings_code_pane_cp2_copy1

0x3c27,	// (0x0001b063) settings_code_pane_cp_copy1_ParamLimits

0x3c27,	// (0x0001b063) settings_code_pane_cp_copy1

0xa3be,	// (0x000217fa) volume_set_pane_copy1

0x3c3b,	// (0x0001b077) volume_set_pane_g10_copy1

0x3c43,	// (0x0001b07f) volume_set_pane_g1_copy1

0x3c4b,	// (0x0001b087) volume_set_pane_g2_copy1

0x3c53,	// (0x0001b08f) volume_set_pane_g3_copy1

0x3c5b,	// (0x0001b097) volume_set_pane_g4_copy1

0x3c63,	// (0x0001b09f) volume_set_pane_g5_copy1

0x3c6b,	// (0x0001b0a7) volume_set_pane_g6_copy1

0x3c73,	// (0x0001b0af) volume_set_pane_g7_copy1

0x3c7b,	// (0x0001b0b7) volume_set_pane_g8_copy1

0x3c83,	// (0x0001b0bf) volume_set_pane_g9_copy1

0xa5eb,	// (0x00021a27) bg_set_opt_pane_cp_copy1_ParamLimits

0xa5eb,	// (0x00021a27) bg_set_opt_pane_cp_copy1

0xa3c6,	// (0x00021802) setting_slider_pane_t1_copy1_ParamLimits

0xa3c6,	// (0x00021802) setting_slider_pane_t1_copy1

0xa3e4,	// (0x00021820) setting_slider_pane_t2_copy1_ParamLimits

0xa3e4,	// (0x00021820) setting_slider_pane_t2_copy1

0xa3fe,	// (0x0002183a) setting_slider_pane_t3_copy1_ParamLimits

0xa3fe,	// (0x0002183a) setting_slider_pane_t3_copy1

0xa416,	// (0x00021852) slider_set_pane_copy1_ParamLimits

0xa416,	// (0x00021852) slider_set_pane_copy1

0xaea9,	// (0x000222e5) set_opt_bg_pane_g1_copy2

0xaeb1,	// (0x000222ed) set_opt_bg_pane_g2_copy2

0x3c8b,	// (0x0001b0c7) set_opt_bg_pane_g3_copy2

0xaec1,	// (0x000222fd) set_opt_bg_pane_g4_copy2

0xaec9,	// (0x00022305) set_opt_bg_pane_g5_copy2

0xaed1,	// (0x0002230d) set_opt_bg_pane_g6_copy2

0x3c95,	// (0x0001b0d1) set_opt_bg_pane_g7_copy2

0x3c9d,	// (0x0001b0d9) set_opt_bg_pane_g8_copy2

0x3ca7,	// (0x0001b0e3) set_opt_bg_pane_g9_copy2

0x3cb1,	// (0x0001b0ed) aid_size_touch_slider_mark_copy1_ParamLimits

0x3cb1,	// (0x0001b0ed) aid_size_touch_slider_mark_copy1

0x3cc5,	// (0x0001b101) slider_set_pane_g1_copy1

0x3cce,	// (0x0001b10a) slider_set_pane_g2_copy1

0xd9f7,	// (0x00024e33) slider_set_pane_g3_copy1_ParamLimits

0xd9f7,	// (0x00024e33) slider_set_pane_g3_copy1

0xda0b,	// (0x00024e47) slider_set_pane_g4_copy1_ParamLimits

0xda0b,	// (0x00024e47) slider_set_pane_g4_copy1

0xda23,	// (0x00024e5f) slider_set_pane_g5_copy1_ParamLimits

0xda23,	// (0x00024e5f) slider_set_pane_g5_copy1

0xd9f7,	// (0x00024e33) slider_set_pane_g6_copy1_ParamLimits

0xd9f7,	// (0x00024e33) slider_set_pane_g6_copy1

0x3cd6,	// (0x0001b112) slider_set_pane_g7_copy1_ParamLimits

0x3cd6,	// (0x0001b112) slider_set_pane_g7_copy1

0xa50b,	// (0x00021947) bg_set_opt_pane_cp2_copy1

0x3cec,	// (0x0001b128) setting_slider_graphic_pane_g1_copy1

0x3d05,	// (0x0001b141) setting_slider_graphic_pane_t1_copy1

0x3cf5,	// (0x0001b131) setting_slider_graphic_pane_t2_copy1

0x3d15,	// (0x0001b151) slider_set_pane_cp_copy1

0x3d25,	// (0x0001b161) input_focus_pane_cp1_copy1

0x3d2e,	// (0x0001b16a) list_set_text_pane_copy1

0x3d36,	// (0x0001b172) setting_text_pane_g1_copy1

0x80c6,	// (0x0001f502) set_text_pane_t1_copy1

0x3d25,	// (0x0001b161) input_focus_pane_cp2_copy1

0x3d36,	// (0x0001b172) setting_code_pane_g1_copy1

0x3d5a,	// (0x0001b196) setting_code_pane_t1_copy1

0xddf7,	// (0x00025233) list_set_graphic_pane_copy1

0xa50b,	// (0x00021947) bg_set_opt_pane_cp4_copy1

0xb7ad,	// (0x00022be9) list_set_graphic_pane_g1_copy1_ParamLimits

0xb7ad,	// (0x00022be9) list_set_graphic_pane_g1_copy1

0x3d68,	// (0x0001b1a4) list_set_graphic_pane_g2_copy1

0xb7c5,	// (0x00022c01) list_set_graphic_pane_t1_copy1_ParamLimits

0xb7c5,	// (0x00022c01) list_set_graphic_pane_t1_copy1

0xe8fc,	// (0x00025d38) rs_clock_indi_pane_g1

0x3d70,	// (0x0001b1ac) rs_clock_indi_pane_t1

0x3d7e,	// (0x0001b1ba) rs_indi_pane

0x3d86,	// (0x0001b1c2) rs_indi_pane_g1

0x3d8f,	// (0x0001b1cb) rs_indi_pane_g2

0x3d98,	// (0x0001b1d4) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x00027313) rs_indi_pane_g

0xba97,	// (0x00022ed3) bg_popup_preview_window_pane_cp03

0x3da1,	// (0x0001b1dd) popup_fep_tooltip_window_t1

0x0048,	// (0x00017484) popup_note2_window_g2_ParamLimits

0x0048,	// (0x00017484) popup_note2_window_g2

0x0001,

0xfc70,	// (0x000270ac) popup_note2_window_g_ParamLimits

0xfc70,	// (0x000270ac) popup_note2_window_g

0x062c,	// (0x00017a68) bg_popup_sub_pane_cp11_ParamLimits

0x0639,	// (0x00017a75) cell_ai3_links_pane_g1_ParamLimits

0x0650,	// (0x00017a8c) cell_ai3_links_pane_t1

0x80c6,	// (0x0001f502) set_text_pane_t1_copy1_ParamLimits

0xb9b4,	// (0x00022df0) cell_graphic_popup_pane_cp2_ParamLimits

0xb9b4,	// (0x00022df0) cell_graphic_popup_pane_cp2

0xa42c,	// (0x00021868) cell_graphic_popup_pane_g1_cp2

0xab8d,	// (0x00021fc9) cell_graphic_popup_pane_g2_cp2

0x3daf,	// (0x0001b1eb) cell_graphic_popup_pane_g3_cp2

0x3db7,	// (0x0001b1f3) cell_graphic_popup_pane_t2_cp2

0xab9e,	// (0x00021fda) grid_highlight_pane_cp3_cp2

0xb1e9,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xae5a,	// (0x00022296) main_tmo_pane_ParamLimits

0x09ee,	// (0x00017e2a) popup_tmo_big_image_note_window

0x34ae,	// (0x0001a8ea) cell_ai5_widget_list_pane

0x34b6,	// (0x0001a8f2) cell_ai5_widget_lrg_icon_pane

0xa37d,	// (0x000217b9) tmo_note_info_pane_t1_ParamLimits

0xa392,	// (0x000217ce) tmo_note_info_pane_t2_ParamLimits

0xa3a9,	// (0x000217e5) tmo_note_info_pane_t3_ParamLimits

0x39d7,	// (0x0001ae13) tmo_note_info_pane_t4_ParamLimits

0x39e9,	// (0x0001ae25) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x00027301) tmo_note_info_pane_t_ParamLimits

0x3b1a,	// (0x0001af56) settings_container_pane_ParamLimits

0x3d1d,	// (0x0001b159) indicator_popup_pane_cp5

0x3d1d,	// (0x0001b159) indicator_popup_pane_cp6

0xddf7,	// (0x00025233) list_set_graphic_pane_copy1_ParamLimits

0xa4f7,	// (0x00021933) bg_popup_window_pane_cp23

0x3dc5,	// (0x0001b201) popup_tmo_big_image_note_window_g1

0x3dce,	// (0x0001b20a) popup_tmo_big_image_note_window_t1

0x3dde,	// (0x0001b21a) popup_tmo_big_image_note_window_t2

0x3dee,	// (0x0001b22a) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0002731a) popup_tmo_big_image_note_window_t

0x3dfe,	// (0x0001b23a) cell_ai5_widget_lrg_icon_pane_g1

0x3e06,	// (0x0001b242) cell_ai5_widget_lrg_icon_pane_t1

0x3e14,	// (0x0001b250) cell_ai5_widget_list_row_pane_ParamLimits

0x3e14,	// (0x0001b250) cell_ai5_widget_list_row_pane

0x3e2c,	// (0x0001b268) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3e2c,	// (0x0001b268) cell_ai5_widget_list_row_pane_g1

0x3e39,	// (0x0001b275) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3e39,	// (0x0001b275) cell_ai5_widget_list_row_pane_t1

0x3e51,	// (0x0001b28d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3e51,	// (0x0001b28d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x00027321) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x00027321) cell_ai5_widget_list_row_pane_t

0xa4f7,	// (0x00021933) main_fep_vtchi_ss_pane

0xa443,	// (0x0002187f) popup_fep_char_pre_window

0xa44b,	// (0x00021887) popup_fep_ituss_window

0xa46c,	// (0x000218a8) popup_fep_vkbss_window

0x3e79,	// (0x0001b2b5) grid_vkbss_keypad_pane_ParamLimits

0x3e79,	// (0x0001b2b5) grid_vkbss_keypad_pane

0x3e89,	// (0x0001b2c5) ituss_keypad_pane

0xa497,	// (0x000218d3) aid_vkbss_key_offset_ParamLimits

0xa497,	// (0x000218d3) aid_vkbss_key_offset

0xa4a3,	// (0x000218df) cell_vkbss_key_pane_ParamLimits

0xa4a3,	// (0x000218df) cell_vkbss_key_pane

0xc140,	// (0x0002357c) bg_cell_vkbss_key_g1_ParamLimits

0xc140,	// (0x0002357c) bg_cell_vkbss_key_g1

0x3e99,	// (0x0001b2d5) cell_vkbss_key_3p_pane_ParamLimits

0x3e99,	// (0x0001b2d5) cell_vkbss_key_3p_pane

0x3eb3,	// (0x0001b2ef) cell_vkbss_key_g1_ParamLimits

0x3eb3,	// (0x0001b2ef) cell_vkbss_key_g1

0x3ecd,	// (0x0001b309) cell_vkbss_key_t1_ParamLimits

0x3ecd,	// (0x0001b309) cell_vkbss_key_t1

0xa4b9,	// (0x000218f5) cell_ituss_key_pane_ParamLimits

0xa4b9,	// (0x000218f5) cell_ituss_key_pane

0x3ef8,	// (0x0001b334) bg_cell_ituss_key_g1_ParamLimits

0x3ef8,	// (0x0001b334) bg_cell_ituss_key_g1

0x3f04,	// (0x0001b340) cell_ituss_key_pane_g1_ParamLimits

0x3f04,	// (0x0001b340) cell_ituss_key_pane_g1

0x3f18,	// (0x0001b354) cell_ituss_key_pane_g2_ParamLimits

0x3f18,	// (0x0001b354) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x00027328) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x00027328) cell_ituss_key_pane_g

0x3f46,	// (0x0001b382) cell_ituss_key_t1_ParamLimits

0x3f46,	// (0x0001b382) cell_ituss_key_t1

0x3f7c,	// (0x0001b3b8) cell_ituss_key_t2_ParamLimits

0x3f7c,	// (0x0001b3b8) cell_ituss_key_t2

0x3fad,	// (0x0001b3e9) cell_ituss_key_t3_ParamLimits

0x3fad,	// (0x0001b3e9) cell_ituss_key_t3

0x3fe7,	// (0x0001b423) cell_ituss_key_t4_ParamLimits

0x3fe7,	// (0x0001b423) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0002732d) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0002732d) cell_ituss_key_t

0x4031,	// (0x0001b46d) cell_vkbss_key_3p_pane_g1

0x4029,	// (0x0001b465) cell_vkbss_key_3p_pane_g2

0x4021,	// (0x0001b45d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x00027336) cell_vkbss_key_3p_pane_g

0xa4f7,	// (0x00021933) bg_popup_fep_char_preview_window_cp02

0x4039,	// (0x0001b475) popup_fep_char_pre_window_t1

0xa1d7,	// (0x00021613) main_ai5_sk_pane

0x3a63,	// (0x0001ae9f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3a6f,	// (0x0001aeab) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3a82,	// (0x0001aebe) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3a8e,	// (0x0001aeca) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0002730c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3aa0,	// (0x0001aedc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xae5a,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa4ca,	// (0x00021906) main_ai5_sk_pane_g1

0xc79b,	// (0x00023bd7) popup_query_code_window_g1

0xa461,	// (0x0002189d) popup_fep_vkb_icf_pane

0xa475,	// (0x000218b1) popup_fep_vtchi_icf_pane

0xae5a,	// (0x00022296) bg_icf_pane

0x4048,	// (0x0001b484) list_vkb_icf_pane

0xae5a,	// (0x00022296) bg_icf_pane_cp01

0x4054,	// (0x0001b490) vtchi_icf_list_pane

0x4065,	// (0x0001b4a1) list_vkb_icf_pane_t1_ParamLimits

0x4065,	// (0x0001b4a1) list_vkb_icf_pane_t1

0x407e,	// (0x0001b4ba) vtchi_icf_list_pane_t1_ParamLimits

0x407e,	// (0x0001b4ba) vtchi_icf_list_pane_t1

0xa44b,	// (0x00021887) popup_fep_ituss_window_ParamLimits

0xa475,	// (0x000218b1) popup_fep_vtchi_icf_pane_ParamLimits

0x3e89,	// (0x0001b2c5) ituss_keypad_pane_ParamLimits

0xa48b,	// (0x000218c7) ituss_sks_pane

0xae5a,	// (0x00022296) bg_icf_pane_ParamLimits

0xa434,	// (0x00021870) icf_edit_indi_pane_ParamLimits

0xa434,	// (0x00021870) icf_edit_indi_pane

0x4048,	// (0x0001b484) list_vkb_icf_pane_ParamLimits

0xae5a,	// (0x00022296) bg_icf_pane_cp01_ParamLimits

0xa434,	// (0x00021870) icf_edit_indi_pane_cp01_ParamLimits

0xa434,	// (0x00021870) icf_edit_indi_pane_cp01

0x405c,	// (0x0001b498) vtchi_query_pane

0xeb6a,	// (0x00025fa6) icf_edit_indi_pane_g1_ParamLimits

0xeb6a,	// (0x00025fa6) icf_edit_indi_pane_g1

0x410b,	// (0x0001b547) icf_edit_indi_pane_g2_ParamLimits

0x410b,	// (0x0001b547) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0002734e) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0002734e) icf_edit_indi_pane_g

0x411a,	// (0x0001b556) icf_edit_indi_pane_t1

0x40a1,	// (0x0001b4dd) bg_input_focus_pane_cp042

0xad71,	// (0x000221ad) vtchi_button_pane

0x40aa,	// (0x0001b4e6) vtchi_query_pane_t1

0x40b8,	// (0x0001b4f4) vtchi_query_pane_t2

0x40c6,	// (0x0001b502) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0002733d) vtchi_query_pane_t

0xa4f7,	// (0x00021933) bg_button_pane_cp13

0x40d4,	// (0x0001b510) vtchi_button_pane_g1

0x40dc,	// (0x0001b518) ituss_sks_pane_g1

0x40e7,	// (0x0001b523) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x00027344) ituss_sks_pane_g

0x40ef,	// (0x0001b52b) ituss_sks_pane_t1

0x40fd,	// (0x0001b539) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x00027349) ituss_sks_pane_t

0xe346,	// (0x00025782) indicator_nsta_pane_cp_g1

0xe34f,	// (0x0002578b) indicator_nsta_pane_cp_g2

0xe357,	// (0x00025793) indicator_nsta_pane_cp_g3

0xe35f,	// (0x0002579b) indicator_nsta_pane_cp_g4

0xe367,	// (0x000257a3) indicator_nsta_pane_cp_g5

0xe367,	// (0x000257a3) indicator_nsta_pane_cp_g6

0x0005,

0xfaba,	// (0x00026ef6) indicator_nsta_pane_cp_g

0x16cc,	// (0x00018b08) cell_graphic2_pane_t2_ParamLimits

0x16cc,	// (0x00018b08) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x00027203) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x00027203) cell_graphic2_pane_t

0x16f9,	// (0x00018b35) cell_graphic2_control_pane_t1

0xb55e,	// (0x0002299a) signal_pane_g3_ParamLimits

0xb55e,	// (0x0002299a) signal_pane_g3

0xb570,	// (0x000229ac) signal_pane_g4_ParamLimits

0xb570,	// (0x000229ac) signal_pane_g4

0x3e63,	// (0x0001b29f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3e63,	// (0x0001b29f) cell_ai5_widget_list_row_pane_t3

0x3f34,	// (0x0001b370) cell_ituss_key_pane_t1_ParamLimits

0x3f34,	// (0x0001b370) cell_ituss_key_pane_t1

0xc3d9,	// (0x00023815) form_field_data_wide_pane_vc_t2_ParamLimits

0xc3d9,	// (0x00023815) form_field_data_wide_pane_vc_t2

0xc3ed,	// (0x00023829) form_field_data_wide_pane_vc_t3_ParamLimits

0xc3ed,	// (0x00023829) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x00026c44) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x00026c44) form_field_data_wide_pane_vc_t

0xe002,	// (0x0002543e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe002,	// (0x0002543e) form_field_slider_wide_pane_vc_t3

0xe0dc,	// (0x00025518) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe0dc,	// (0x00025518) form_field_popup_wide_pane_vc_t2

0xe0f3,	// (0x0002552f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe0f3,	// (0x0002552f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa9,	// (0x00026ee5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa9,	// (0x00026ee5) form_field_popup_wide_pane_vc_t

0xa2aa,	// (0x000216e6) aid_fshwr2_btn_pane_ParamLimits

0xa2b6,	// (0x000216f2) aid_fshwr2_syb_pane_ParamLimits

0xa2c2,	// (0x000216fe) aid_fshwr2_txt_pane_ParamLimits

0xae5a,	// (0x00022296) fshwr2_bg_pane_ParamLimits

0xa2ce,	// (0x0002170a) fshwr2_func_candi_pane_ParamLimits

0xa2e3,	// (0x0002171f) fshwr2_hwr_syb_pane_ParamLimits

0xa2f3,	// (0x0002172f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small
