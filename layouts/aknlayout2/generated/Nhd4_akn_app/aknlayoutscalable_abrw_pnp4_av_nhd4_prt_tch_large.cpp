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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003119f };

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
0x4e33,	// (0x00035fd2) Screen

0x4e3f,	// (0x00035fde) application_window_ParamLimits

0x4e3f,	// (0x00035fde) application_window

0x0632,	// (0x000317d1) screen_g1

0xd259,	// (0x0003e3f8) area_bottom_pane_ParamLimits

0xd259,	// (0x0003e3f8) area_bottom_pane

0xd319,	// (0x0003e4b8) area_top_pane_ParamLimits

0xd319,	// (0x0003e4b8) area_top_pane

0xd3b7,	// (0x0003e556) main_pane_ParamLimits

0xd3b7,	// (0x0003e556) main_pane

0x063c,	// (0x000317db) misc_graphics

0x75fc,	// (0x0003879b) battery_pane_ParamLimits

0x75fc,	// (0x0003879b) battery_pane

0x23b3,	// (0x00033552) bg_status_flat_pane_g8

0x23bb,	// (0x0003355a) bg_status_flat_pane_g9

0x1b19,	// (0x00032cb8) context_pane_ParamLimits

0x1b19,	// (0x00032cb8) context_pane

0x7730,	// (0x000388cf) navi_pane_ParamLimits

0x7730,	// (0x000388cf) navi_pane

0x779c,	// (0x0003893b) signal_pane_ParamLimits

0x779c,	// (0x0003893b) signal_pane

0x0008,

0xf8b7,	// (0x00040a56) bg_status_flat_pane_g

0x7801,	// (0x000389a0) status_pane_g1_ParamLimits

0x7801,	// (0x000389a0) status_pane_g1

0x7815,	// (0x000389b4) status_pane_g2_ParamLimits

0x7815,	// (0x000389b4) status_pane_g2

0x1b7e,	// (0x00032d1d) status_pane_g3_ParamLimits

0x1b7e,	// (0x00032d1d) status_pane_g3

0x0004,

0xf7e5,	// (0x00040984) status_pane_g_ParamLimits

0xf7e5,	// (0x00040984) status_pane_g

0x7821,	// (0x000389c0) title_pane_ParamLimits

0x7821,	// (0x000389c0) title_pane

0x785e,	// (0x000389fd) uni_indicator_pane_ParamLimits

0x785e,	// (0x000389fd) uni_indicator_pane

0x1944,	// (0x00032ae3) bg_list_pane_ParamLimits

0x1944,	// (0x00032ae3) bg_list_pane

0x5dd4,	// (0x00036f73) find_pane

0x7114,	// (0x000382b3) listscroll_app_pane_ParamLimits

0x7114,	// (0x000382b3) listscroll_app_pane

0x1964,	// (0x00032b03) listscroll_form_pane

0x5ddc,	// (0x00036f7b) listscroll_gen_pane_ParamLimits

0x5ddc,	// (0x00036f7b) listscroll_gen_pane

0x1964,	// (0x00032b03) listscroll_set_pane

0x5688,	// (0x00036827) main_idle_act_pane

0x172a,	// (0x000328c9) main_idle_trad_pane

0x172a,	// (0x000328c9) main_list_empty_pane

0x0e3f,	// (0x00031fde) main_midp_pane

0x197e,	// (0x00032b1d) main_pane_g1_ParamLimits

0x197e,	// (0x00032b1d) main_pane_g1

0x7120,	// (0x000382bf) popup_ai_message_window_ParamLimits

0x7120,	// (0x000382bf) popup_ai_message_window

0x719e,	// (0x0003833d) popup_fep_china_uni_window_ParamLimits

0x719e,	// (0x0003833d) popup_fep_china_uni_window

0x19be,	// (0x00032b5d) popup_fep_japan_candidate_window_ParamLimits

0x19be,	// (0x00032b5d) popup_fep_japan_candidate_window

0x19dc,	// (0x00032b7b) popup_fep_japan_predictive_window_ParamLimits

0x19dc,	// (0x00032b7b) popup_fep_japan_predictive_window

0x71f8,	// (0x00038397) popup_find_window

0x7205,	// (0x000383a4) popup_grid_graphic_window_ParamLimits

0x7205,	// (0x000383a4) popup_grid_graphic_window

0x1a0c,	// (0x00032bab) popup_large_graphic_colour_window

0x722b,	// (0x000383ca) popup_menu_window_ParamLimits

0x722b,	// (0x000383ca) popup_menu_window

0x73e5,	// (0x00038584) popup_note_image_window

0x73d1,	// (0x00038570) popup_note_wait_window_ParamLimits

0x73d1,	// (0x00038570) popup_note_wait_window

0x73d1,	// (0x00038570) popup_note_window_ParamLimits

0x73d1,	// (0x00038570) popup_note_window

0x743b,	// (0x000385da) popup_query_code_window_ParamLimits

0x743b,	// (0x000385da) popup_query_code_window

0x1a32,	// (0x00032bd1) popup_query_data_code_window_ParamLimits

0x1a32,	// (0x00032bd1) popup_query_data_code_window

0x744f,	// (0x000385ee) popup_query_data_window_ParamLimits

0x744f,	// (0x000385ee) popup_query_data_window

0x7467,	// (0x00038606) popup_query_sat_info_window_ParamLimits

0x7467,	// (0x00038606) popup_query_sat_info_window

0x74a0,	// (0x0003863f) popup_snote_single_graphic_window_ParamLimits

0x74a0,	// (0x0003863f) popup_snote_single_graphic_window

0x74a0,	// (0x0003863f) popup_snote_single_text_window_ParamLimits

0x74a0,	// (0x0003863f) popup_snote_single_text_window

0x1a49,	// (0x00032be8) popup_sub_window_general

0x1a8f,	// (0x00032c2e) popup_window_general_ParamLimits

0x1a8f,	// (0x00032c2e) popup_window_general

0x1aa4,	// (0x00032c43) power_save_pane

0xdafe,	// (0x0003ec9d) control_pane_g1_ParamLimits

0xdafe,	// (0x0003ec9d) control_pane_g1

0xdb27,	// (0x0003ecc6) control_pane_g2_ParamLimits

0xdb27,	// (0x0003ecc6) control_pane_g2

0x191e,	// (0x00032abd) control_pane_g3_ParamLimits

0x191e,	// (0x00032abd) control_pane_g3

0x0007,

0xf7cd,	// (0x0004096c) control_pane_g_ParamLimits

0xf7cd,	// (0x0004096c) control_pane_g

0xdb6c,	// (0x0003ed0b) control_pane_t1_ParamLimits

0xdb6c,	// (0x0003ed0b) control_pane_t1

0xdbbe,	// (0x0003ed5d) control_pane_t2_ParamLimits

0xdbbe,	// (0x0003ed5d) control_pane_t2

0x0002,

0xf7de,	// (0x0004097d) control_pane_t_ParamLimits

0xf7de,	// (0x0004097d) control_pane_t

0x183f,	// (0x000329de) navi_navi_volume_pane_cp1

0x1848,	// (0x000329e7) status_small_icon_pane

0x1850,	// (0x000329ef) status_small_pane_g1_ParamLimits

0x1850,	// (0x000329ef) status_small_pane_g1

0x1884,	// (0x00032a23) status_small_pane_g2_ParamLimits

0x1884,	// (0x00032a23) status_small_pane_g2

0x1890,	// (0x00032a2f) status_small_pane_g3_ParamLimits

0x1890,	// (0x00032a2f) status_small_pane_g3

0x189c,	// (0x00032a3b) status_small_pane_g4_ParamLimits

0x189c,	// (0x00032a3b) status_small_pane_g4

0x18a8,	// (0x00032a47) status_small_pane_g5_ParamLimits

0x18a8,	// (0x00032a47) status_small_pane_g5

0x18b7,	// (0x00032a56) status_small_pane_g6_ParamLimits

0x18b7,	// (0x00032a56) status_small_pane_g6

0x0007,

0xf7bc,	// (0x0004095b) status_small_pane_g_ParamLimits

0xf7bc,	// (0x0004095b) status_small_pane_g

0x18e7,	// (0x00032a86) status_small_pane_t1

0x190a,	// (0x00032aa9) status_small_wait_pane_ParamLimits

0x190a,	// (0x00032aa9) status_small_wait_pane

0x5996,	// (0x00036b35) aid_levels_signal_ParamLimits

0x5996,	// (0x00036b35) aid_levels_signal

0x59a8,	// (0x00036b47) signal_pane_g1_ParamLimits

0x59a8,	// (0x00036b47) signal_pane_g1

0x59bd,	// (0x00036b5c) signal_pane_g2_ParamLimits

0x59bd,	// (0x00036b5c) signal_pane_g2

0x0001,

0xf751,	// (0x000408f0) signal_pane_g_ParamLimits

0xf751,	// (0x000408f0) signal_pane_g

0x126e,	// (0x0003240d) context_pane_g1

0x5220,	// (0x000363bf) title_pane_g1

0x524a,	// (0x000363e9) title_pane_t1

0x0652,	// (0x000317f1) title_pane_t2

0x0678,	// (0x00031817) title_pane_t3

0x0002,

0xf59b,	// (0x0004073a) title_pane_t

0x7876,	// (0x00038a15) aid_levels_battery_ParamLimits

0x7876,	// (0x00038a15) aid_levels_battery

0x788a,	// (0x00038a29) battery_pane_g1_ParamLimits

0x788a,	// (0x00038a29) battery_pane_g1

0x78a0,	// (0x00038a3f) battery_pane_g2_ParamLimits

0x78a0,	// (0x00038a3f) battery_pane_g2

0x0001,

0xf7f0,	// (0x0004098f) battery_pane_g_ParamLimits

0xf7f0,	// (0x0004098f) battery_pane_g

0x7b32,	// (0x00038cd1) uni_indicator_pane_g1

0x7b47,	// (0x00038ce6) uni_indicator_pane_g2

0x7b5d,	// (0x00038cfc) uni_indicator_pane_g3

0x0005,

0xf95f,	// (0x00040afe) uni_indicator_pane_g

0x159a,	// (0x00032739) navi_icon_pane_ParamLimits

0x159a,	// (0x00032739) navi_icon_pane

0x14e1,	// (0x00032680) navi_midp_pane

0x15b6,	// (0x00032755) navi_navi_pane

0x15c0,	// (0x0003275f) navi_text_pane_ParamLimits

0x15c0,	// (0x0003275f) navi_text_pane

0x0632,	// (0x000317d1) status_small_wait_pane_g1

0x095c,	// (0x00031afb) status_small_wait_pane_g2

0x0001,

0xf95a,	// (0x00040af9) status_small_wait_pane_g

0x7ad7,	// (0x00038c76) navi_navi_icon_text_pane

0x7af1,	// (0x00038c90) navi_navi_pane_g1_ParamLimits

0x7af1,	// (0x00038c90) navi_navi_pane_g1

0x7adf,	// (0x00038c7e) navi_navi_pane_g2_ParamLimits

0x7adf,	// (0x00038c7e) navi_navi_pane_g2

0x0001,

0xf928,	// (0x00040ac7) navi_navi_pane_g_ParamLimits

0xf928,	// (0x00040ac7) navi_navi_pane_g

0x2936,	// (0x00033ad5) navi_navi_tabs_pane

0x7b03,	// (0x00038ca2) navi_navi_text_pane

0x7ad7,	// (0x00038c76) navi_navi_volume_pane

0x7ac2,	// (0x00038c61) navi_text_pane_t1

0x7ab3,	// (0x00038c52) navi_icon_pane_g1

0x2877,	// (0x00033a16) navi_navi_text_pane_t1

0xdeec,	// (0x0003f08b) navi_navi_volume_pane_g1

0xdef4,	// (0x0003f093) volume_small_pane

0x7a25,	// (0x00038bc4) navi_navi_icon_text_pane_g1

0x7a2d,	// (0x00038bcc) navi_navi_icon_text_pane_t1

0x15b6,	// (0x00032755) navi_tabs_2_long_pane

0x15b6,	// (0x00032755) navi_tabs_2_pane

0x15b6,	// (0x00032755) navi_tabs_3_long_pane

0x15b6,	// (0x00032755) navi_tabs_3_pane

0x15b6,	// (0x00032755) navi_tabs_4_pane

0xdecc,	// (0x0003f06b) tabs_2_active_pane_ParamLimits

0xdecc,	// (0x0003f06b) tabs_2_active_pane

0xdedc,	// (0x0003f07b) tabs_2_passive_pane_ParamLimits

0xdedc,	// (0x0003f07b) tabs_2_passive_pane

0xde9a,	// (0x0003f039) tabs_3_active_pane_ParamLimits

0xde9a,	// (0x0003f039) tabs_3_active_pane

0xdeaa,	// (0x0003f049) tabs_3_passive_pane_ParamLimits

0xdeaa,	// (0x0003f049) tabs_3_passive_pane

0xdebb,	// (0x0003f05a) tabs_3_passive_pane_cp_ParamLimits

0xdebb,	// (0x0003f05a) tabs_3_passive_pane_cp

0xde56,	// (0x0003eff5) tabs_4_active_pane_ParamLimits

0xde56,	// (0x0003eff5) tabs_4_active_pane

0xde67,	// (0x0003f006) tabs_4_passive_pane_ParamLimits

0xde67,	// (0x0003f006) tabs_4_passive_pane

0xde78,	// (0x0003f017) tabs_4_passive_pane_cp_ParamLimits

0xde78,	// (0x0003f017) tabs_4_passive_pane_cp

0xde89,	// (0x0003f028) tabs_4_passive_pane_cp2_ParamLimits

0xde89,	// (0x0003f028) tabs_4_passive_pane_cp2

0xde32,	// (0x0003efd1) tabs_2_long_active_pane_ParamLimits

0xde32,	// (0x0003efd1) tabs_2_long_active_pane

0xde44,	// (0x0003efe3) tabs_2_long_passive_pane_ParamLimits

0xde44,	// (0x0003efe3) tabs_2_long_passive_pane

0xdded,	// (0x0003ef8c) tabs_3_long_active_pane_ParamLimits

0xdded,	// (0x0003ef8c) tabs_3_long_active_pane

0xde06,	// (0x0003efa5) tabs_3_long_passive_pane_ParamLimits

0xde06,	// (0x0003efa5) tabs_3_long_passive_pane

0xde19,	// (0x0003efb8) tabs_3_long_passive_pane_cp_ParamLimits

0xde19,	// (0x0003efb8) tabs_3_long_passive_pane_cp

0xdd93,	// (0x0003ef32) volume_small_pane_g1

0xdd9c,	// (0x0003ef3b) volume_small_pane_g2

0xdda5,	// (0x0003ef44) volume_small_pane_g3

0xddae,	// (0x0003ef4d) volume_small_pane_g4

0xddb7,	// (0x0003ef56) volume_small_pane_g5

0xddc0,	// (0x0003ef5f) volume_small_pane_g6

0xddc9,	// (0x0003ef68) volume_small_pane_g7

0xddd2,	// (0x0003ef71) volume_small_pane_g8

0xdddb,	// (0x0003ef7a) volume_small_pane_g9

0xdde4,	// (0x0003ef83) volume_small_pane_g10

0x0009,

0xf8f4,	// (0x00040a93) volume_small_pane_g

0x0698,	// (0x00031837) bg_active_tab_pane_cp2_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp2

0x52b2,	// (0x00036451) tabs_3_active_pane_g1

0x52ba,	// (0x00036459) tabs_3_active_pane_t1

0x0698,	// (0x00031837) bg_passive_tab_pane_cp2_ParamLimits

0x0698,	// (0x00031837) bg_passive_tab_pane_cp2

0x52b2,	// (0x00036451) tabs_3_passive_pane_g1

0x52ba,	// (0x00036459) tabs_3_passive_pane_t1

0x0698,	// (0x00031837) bg_active_tab_pane_cp3_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp3

0x52cc,	// (0x0003646b) tabs_4_active_pane_g1

0x52d4,	// (0x00036473) tabs_4_active_pane_t1

0x0698,	// (0x00031837) bg_passive_tab_pane_cp3_ParamLimits

0x0698,	// (0x00031837) bg_passive_tab_pane_cp3

0x52cc,	// (0x0003646b) tabs_4_1_passive_pane_g1

0x52d4,	// (0x00036473) tabs_4_1_passive_pane_t1

0x0e3f,	// (0x00031fde) list_highlight_pane_cp2

0x7bd5,	// (0x00038d74) list_set_pane_ParamLimits

0x7bd5,	// (0x00038d74) list_set_pane

0x7c77,	// (0x00038e16) main_pane_set_t1_ParamLimits

0x7c77,	// (0x00038e16) main_pane_set_t1

0x7c97,	// (0x00038e36) main_pane_set_t2_ParamLimits

0x7c97,	// (0x00038e36) main_pane_set_t2

0x7cab,	// (0x00038e4a) main_pane_set_t3_ParamLimits

0x7cab,	// (0x00038e4a) main_pane_set_t3

0x7cbd,	// (0x00038e5c) main_pane_set_t4_ParamLimits

0x7cbd,	// (0x00038e5c) main_pane_set_t4

0x0003,

0xf9c4,	// (0x00040b63) main_pane_set_t_ParamLimits

0xf9c4,	// (0x00040b63) main_pane_set_t

0x7ccf,	// (0x00038e6e) setting_code_pane

0x7cd9,	// (0x00038e78) setting_slider_graphic_pane

0x7cd9,	// (0x00038e78) setting_slider_pane

0x7cd9,	// (0x00038e78) setting_text_pane

0x7cd9,	// (0x00038e78) setting_volume_pane

0xd5e8,	// (0x0003e787) volume_set_pane

0x0698,	// (0x00031837) bg_set_opt_pane_cp

0xd5f0,	// (0x0003e78f) setting_slider_pane_t1

0xd609,	// (0x0003e7a8) setting_slider_pane_t2

0xd622,	// (0x0003e7c1) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x00040741) setting_slider_pane_t

0xd639,	// (0x0003e7d8) slider_set_pane

0x063c,	// (0x000317db) bg_set_opt_pane_cp2

0x06af,	// (0x0003184e) setting_slider_graphic_pane_g1

0xd64f,	// (0x0003e7ee) setting_slider_graphic_pane_t1

0xd65e,	// (0x0003e7fd) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x00040748) setting_slider_graphic_pane_t

0xd66d,	// (0x0003e80c) slider_set_pane_cp

0x063c,	// (0x000317db) input_focus_pane_cp1

0x2d9d,	// (0x00033f3c) list_set_text_pane

0x0632,	// (0x000317d1) setting_text_pane_g1

0x063c,	// (0x000317db) input_focus_pane_cp2

0x0632,	// (0x000317d1) setting_code_pane_g1

0x06b8,	// (0x00031857) setting_code_pane_t1

0x400f,	// (0x000351ae) set_text_pane_t1_ParamLimits

0x400f,	// (0x000351ae) set_text_pane_t1

0x0d4f,	// (0x00031eee) set_opt_bg_pane_g1

0x0d57,	// (0x00031ef6) set_opt_bg_pane_g2

0x2d7d,	// (0x00033f1c) set_opt_bg_pane_g3

0x0d67,	// (0x00031f06) set_opt_bg_pane_g4

0x0d6f,	// (0x00031f0e) set_opt_bg_pane_g5

0x0d77,	// (0x00031f16) set_opt_bg_pane_g6

0x2d85,	// (0x00033f24) set_opt_bg_pane_g7

0x2d8d,	// (0x00033f2c) set_opt_bg_pane_g8

0x2d95,	// (0x00033f34) set_opt_bg_pane_g9

0x0008,

0xf9b1,	// (0x00040b50) set_opt_bg_pane_g

0x2d70,	// (0x00033f0f) slider_set_pane_g1

0xdf61,	// (0x0003f100) slider_set_pane_g2

0x0006,

0xf9a2,	// (0x00040b41) slider_set_pane_g

0xdefd,	// (0x0003f09c) volume_set_pane_g1

0xdf05,	// (0x0003f0a4) volume_set_pane_g2

0xdf0d,	// (0x0003f0ac) volume_set_pane_g3

0xdf15,	// (0x0003f0b4) volume_set_pane_g4

0xdf1d,	// (0x0003f0bc) volume_set_pane_g5

0xdf25,	// (0x0003f0c4) volume_set_pane_g6

0xdf2d,	// (0x0003f0cc) volume_set_pane_g7

0xdf35,	// (0x0003f0d4) volume_set_pane_g8

0xdf3d,	// (0x0003f0dc) volume_set_pane_g9

0xdf45,	// (0x0003f0e4) volume_set_pane_g10

0x0009,

0xf97a,	// (0x00040b19) volume_set_pane_g

0x5373,	// (0x00036512) indicator_pane_ParamLimits

0x5373,	// (0x00036512) indicator_pane

0x537f,	// (0x0003651e) main_idle_pane_g2_ParamLimits

0x537f,	// (0x0003651e) main_idle_pane_g2

0x53a7,	// (0x00036546) main_pane_idle_g1_ParamLimits

0x53a7,	// (0x00036546) main_pane_idle_g1

0x06c6,	// (0x00031865) popup_clock_digital_analogue_window_ParamLimits

0x06c6,	// (0x00031865) popup_clock_digital_analogue_window

0x53b4,	// (0x00036553) soft_indicator_pane_ParamLimits

0x53b4,	// (0x00036553) soft_indicator_pane

0x53c0,	// (0x0003655f) wallpaper_pane_ParamLimits

0x53c0,	// (0x0003655f) wallpaper_pane

0x0632,	// (0x000317d1) wallpaper_pane_g1

0x53cc,	// (0x0003656b) indicator_pane_g1_ParamLimits

0x53cc,	// (0x0003656b) indicator_pane_g1

0x2ee4,	// (0x00034083) navi_navi_icon_text_pane_srt_g1

0x06f4,	// (0x00031893) soft_indicator_pane_t1

0x070e,	// (0x000318ad) aid_ps_area_pane

0x53d8,	// (0x00036577) aid_ps_clock_pane

0x071f,	// (0x000318be) aid_ps_indicator_pane

0x072b,	// (0x000318ca) indicator_ps_pane_ParamLimits

0x072b,	// (0x000318ca) indicator_ps_pane

0x073a,	// (0x000318d9) power_save_pane_g1_ParamLimits

0x073a,	// (0x000318d9) power_save_pane_g1

0x0746,	// (0x000318e5) power_save_pane_g2_ParamLimits

0x0746,	// (0x000318e5) power_save_pane_g2

0xd20d,	// (0x0003e3ac) aid_navinavi_width_pane

0x070e,	// (0x000318ad) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0004074d) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0004074d) power_save_pane_g

0x0754,	// (0x000318f3) power_save_pane_t1_ParamLimits

0x0754,	// (0x000318f3) power_save_pane_t1

0x53d8,	// (0x00036577) aid_ps_clock_pane_ParamLimits

0x071f,	// (0x000318be) aid_ps_indicator_pane_ParamLimits

0x0766,	// (0x00031905) power_save_pane_t4_ParamLimits

0x0766,	// (0x00031905) power_save_pane_t4

0x0001,

0xf5b3,	// (0x00040752) power_save_pane_t_ParamLimits

0xf5b3,	// (0x00040752) power_save_pane_t

0x0790,	// (0x0003192f) power_save_t3_ParamLimits

0x0790,	// (0x0003192f) power_save_t3

0x077b,	// (0x0003191a) power_save_t2_ParamLimits

0x077b,	// (0x0003191a) power_save_t2

0x07a5,	// (0x00031944) indicator_ps_pane_g1

0x53e6,	// (0x00036585) ai_gene_pane_ParamLimits

0x53e6,	// (0x00036585) ai_gene_pane

0x53f2,	// (0x00036591) ai_links_pane_ParamLimits

0x53f2,	// (0x00036591) ai_links_pane

0x53fe,	// (0x0003659d) indicator_pane_cp1_ParamLimits

0x53fe,	// (0x0003659d) indicator_pane_cp1

0x540a,	// (0x000365a9) main_pane_idle_g1_cp_ParamLimits

0x540a,	// (0x000365a9) main_pane_idle_g1_cp

0x07ae,	// (0x0003194d) popup_ai_links_title_window

0x5416,	// (0x000365b5) soft_indicator_pane_cp1_ParamLimits

0x5416,	// (0x000365b5) soft_indicator_pane_cp1

0x2ba6,	// (0x00033d45) ai_links_pane_g1

0x2baf,	// (0x00033d4e) grid_ai_links_pane

0x7b27,	// (0x00038cc6) ai_gene_pane_1

0x2b94,	// (0x00033d33) ai_gene_pane_2

0x2b9d,	// (0x00033d3c) list_highlight_pane_cp4

0x7b0b,	// (0x00038caa) cell_ai_link_pane_ParamLimits

0x7b0b,	// (0x00038caa) cell_ai_link_pane

0x2b8c,	// (0x00033d2b) cell_ai_link_pane_g1

0x095c,	// (0x00031afb) cell_ai_link_pane_g2

0x0001,

0xf955,	// (0x00040af4) cell_ai_link_pane_g

0x063c,	// (0x000317db) grid_highlight_cp2

0x063c,	// (0x000317db) bg_popup_sub_pane_cp1

0x07c5,	// (0x00031964) popup_ai_links_title_window_t1

0x2ada,	// (0x00033c79) ai_gene_pane_1_g1_ParamLimits

0x2ada,	// (0x00033c79) ai_gene_pane_1_g1

0x2ae6,	// (0x00033c85) ai_gene_pane_1_g2_ParamLimits

0x2ae6,	// (0x00033c85) ai_gene_pane_1_g2

0x0001,

0xf94b,	// (0x00040aea) ai_gene_pane_1_g_ParamLimits

0xf94b,	// (0x00040aea) ai_gene_pane_1_g

0x2af3,	// (0x00033c92) ai_gene_pane_1_t1_ParamLimits

0x2af3,	// (0x00033c92) ai_gene_pane_1_t1

0x2b27,	// (0x00033cc6) grid_ai_soft_ind_pane

0x2ac5,	// (0x00033c64) ai_gene_pane_2_t1_ParamLimits

0x2ac5,	// (0x00033c64) ai_gene_pane_2_t1

0x5422,	// (0x000365c1) main_pane_empty_t1_ParamLimits

0x5422,	// (0x000365c1) main_pane_empty_t1

0x543a,	// (0x000365d9) main_pane_empty_t2_ParamLimits

0x543a,	// (0x000365d9) main_pane_empty_t2

0x544f,	// (0x000365ee) main_pane_empty_t3_ParamLimits

0x544f,	// (0x000365ee) main_pane_empty_t3

0x5461,	// (0x00036600) main_pane_empty_t4_ParamLimits

0x5461,	// (0x00036600) main_pane_empty_t4

0x5473,	// (0x00036612) main_pane_empty_t5_ParamLimits

0x5473,	// (0x00036612) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x00040757) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x00040757) main_pane_empty_t

0x0da0,	// (0x00031f3f) bg_popup_window_pane_ParamLimits

0x0da0,	// (0x00031f3f) bg_popup_window_pane

0x2885,	// (0x00033a24) find_popup_pane_cp2_ParamLimits

0x2885,	// (0x00033a24) find_popup_pane_cp2

0x2891,	// (0x00033a30) heading_pane_ParamLimits

0x2891,	// (0x00033a30) heading_pane

0x063c,	// (0x000317db) bg_popup_sub_pane

0x7a47,	// (0x00038be6) bg_popup_window_pane_g1_ParamLimits

0x7a47,	// (0x00038be6) bg_popup_window_pane_g1

0x7a53,	// (0x00038bf2) bg_popup_window_pane_g2_ParamLimits

0x7a53,	// (0x00038bf2) bg_popup_window_pane_g2

0x7a5f,	// (0x00038bfe) bg_popup_window_pane_g3_ParamLimits

0x7a5f,	// (0x00038bfe) bg_popup_window_pane_g3

0x7a6b,	// (0x00038c0a) bg_popup_window_pane_g4_ParamLimits

0x7a6b,	// (0x00038c0a) bg_popup_window_pane_g4

0x7a77,	// (0x00038c16) bg_popup_window_pane_g5_ParamLimits

0x7a77,	// (0x00038c16) bg_popup_window_pane_g5

0x7a83,	// (0x00038c22) bg_popup_window_pane_g6_ParamLimits

0x7a83,	// (0x00038c22) bg_popup_window_pane_g6

0x7a8f,	// (0x00038c2e) bg_popup_window_pane_g7_ParamLimits

0x7a8f,	// (0x00038c2e) bg_popup_window_pane_g7

0x7a9b,	// (0x00038c3a) bg_popup_window_pane_g8_ParamLimits

0x7a9b,	// (0x00038c3a) bg_popup_window_pane_g8

0x7aa7,	// (0x00038c46) bg_popup_window_pane_g9_ParamLimits

0x7aa7,	// (0x00038c46) bg_popup_window_pane_g9

0x286b,	// (0x00033a0a) bg_popup_window_pane_g10_ParamLimits

0x286b,	// (0x00033a0a) bg_popup_window_pane_g10

0x0009,

0xf913,	// (0x00040ab2) bg_popup_window_pane_g_ParamLimits

0xf913,	// (0x00040ab2) bg_popup_window_pane_g

0x2822,	// (0x000339c1) bg_popup_heading_pane_ParamLimits

0x2822,	// (0x000339c1) bg_popup_heading_pane

0xdfe9,	// (0x0003f188) tabs_4_passive_pane_cp_srt_ParamLimits

0xdfe9,	// (0x0003f188) tabs_4_passive_pane_cp_srt

0xdffb,	// (0x0003f19a) tabs_4_passive_pane_srt_ParamLimits

0x2836,	// (0x000339d5) heading_pane_g2

0xdffb,	// (0x0003f19a) tabs_4_passive_pane_srt

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp3_srt

0x283e,	// (0x000339dd) heading_pane_t1_ParamLimits

0x283e,	// (0x000339dd) heading_pane_t1

0x2855,	// (0x000339f4) heading_pane_t2_ParamLimits

0x2855,	// (0x000339f4) heading_pane_t2

0x0001,

0xf90e,	// (0x00040aad) heading_pane_t_ParamLimits

0xf90e,	// (0x00040aad) heading_pane_t

0x237b,	// (0x0003351a) bg_popup_heading_pane_g1

0x240c,	// (0x000335ab) bg_popup_heading_pane_g2

0x2416,	// (0x000335b5) bg_popup_heading_pane_g3

0x2420,	// (0x000335bf) bg_popup_heading_pane_g4

0x242a,	// (0x000335c9) bg_popup_heading_pane_g5

0x2434,	// (0x000335d3) bg_popup_heading_pane_g6

0x243c,	// (0x000335db) bg_popup_heading_pane_g7

0x2444,	// (0x000335e3) bg_popup_heading_pane_g8

0x244e,	// (0x000335ed) bg_popup_heading_pane_g9

0x0008,

0xf8ca,	// (0x00040a69) bg_popup_heading_pane_g

0x1c72,	// (0x00032e11) bg_popup_sub_pane_g1

0x1c82,	// (0x00032e21) bg_popup_sub_pane_g2

0x1c7a,	// (0x00032e19) bg_popup_sub_pane_g3

0x1c92,	// (0x00032e31) bg_popup_sub_pane_g4

0x1c8a,	// (0x00032e29) bg_popup_sub_pane_g5

0x1c9a,	// (0x00032e39) bg_popup_sub_pane_g6

0x1ca2,	// (0x00032e41) bg_popup_sub_pane_g7

0x1cb2,	// (0x00032e51) bg_popup_sub_pane_g8

0x1caa,	// (0x00032e49) bg_popup_sub_pane_g9

0x0008,

0xf8a4,	// (0x00040a43) bg_popup_sub_pane_g

0x068a,	// (0x00031829) bg_popup_window_pane_cp5_ParamLimits

0x068a,	// (0x00031829) bg_popup_window_pane_cp5

0x07e2,	// (0x00031981) popup_note_window_g1_ParamLimits

0x07e2,	// (0x00031981) popup_note_window_g1

0x07ee,	// (0x0003198d) popup_note_window_t1_ParamLimits

0x07ee,	// (0x0003198d) popup_note_window_t1

0x0800,	// (0x0003199f) popup_note_window_t2_ParamLimits

0x0800,	// (0x0003199f) popup_note_window_t2

0x0812,	// (0x000319b1) popup_note_window_t3_ParamLimits

0x0812,	// (0x000319b1) popup_note_window_t3

0x0824,	// (0x000319c3) popup_note_window_t4_ParamLimits

0x0824,	// (0x000319c3) popup_note_window_t4

0x084c,	// (0x000319eb) popup_note_window_t5_ParamLimits

0x084c,	// (0x000319eb) popup_note_window_t5

0x0004,

0xf5c3,	// (0x00040762) popup_note_window_t_ParamLimits

0xf5c3,	// (0x00040762) popup_note_window_t

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp6_ParamLimits

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp6

0x22ef,	// (0x0003348e) popup_note_image_window_g1_ParamLimits

0x22ef,	// (0x0003348e) popup_note_image_window_g1

0x22fb,	// (0x0003349a) popup_note_image_window_g2_ParamLimits

0x22fb,	// (0x0003349a) popup_note_image_window_g2

0x0001,

0xf898,	// (0x00040a37) popup_note_image_window_g_ParamLimits

0xf898,	// (0x00040a37) popup_note_image_window_g

0x2314,	// (0x000334b3) popup_note_image_window_t1_ParamLimits

0x2314,	// (0x000334b3) popup_note_image_window_t1

0x232d,	// (0x000334cc) popup_note_image_window_t2_ParamLimits

0x232d,	// (0x000334cc) popup_note_image_window_t2

0x2346,	// (0x000334e5) popup_note_image_window_t3_ParamLimits

0x2346,	// (0x000334e5) popup_note_image_window_t3

0x0002,

0xf89d,	// (0x00040a3c) popup_note_image_window_t_ParamLimits

0xf89d,	// (0x00040a3c) popup_note_image_window_t

0x21cc,	// (0x0003336b) bg_popup_window_pane_cp7_ParamLimits

0x21cc,	// (0x0003336b) bg_popup_window_pane_cp7

0x21fc,	// (0x0003339b) popup_note_wait_window_g1_ParamLimits

0x21fc,	// (0x0003339b) popup_note_wait_window_g1

0x2208,	// (0x000333a7) popup_note_wait_window_g2_ParamLimits

0x2208,	// (0x000333a7) popup_note_wait_window_g2

0x0002,

0xf886,	// (0x00040a25) popup_note_wait_window_g_ParamLimits

0xf886,	// (0x00040a25) popup_note_wait_window_g

0x2220,	// (0x000333bf) popup_note_wait_window_t1_ParamLimits

0x2220,	// (0x000333bf) popup_note_wait_window_t1

0x2247,	// (0x000333e6) popup_note_wait_window_t2_ParamLimits

0x2247,	// (0x000333e6) popup_note_wait_window_t2

0x2264,	// (0x00033403) popup_note_wait_window_t3_ParamLimits

0x2264,	// (0x00033403) popup_note_wait_window_t3

0x2277,	// (0x00033416) popup_note_wait_window_t4_ParamLimits

0x2277,	// (0x00033416) popup_note_wait_window_t4

0x0004,

0xf88d,	// (0x00040a2c) popup_note_wait_window_t_ParamLimits

0xf88d,	// (0x00040a2c) popup_note_wait_window_t

0x229c,	// (0x0003343b) wait_bar_pane_ParamLimits

0x229c,	// (0x0003343b) wait_bar_pane

0x063c,	// (0x000317db) wait_anim_pane

0x063c,	// (0x000317db) wait_border_pane

0x0632,	// (0x000317d1) wait_anim_pane_g1

0x0632,	// (0x000317d1) wait_anim_pane_g2

0x0001,

0xf74c,	// (0x000408eb) wait_anim_pane_g

0x2170,	// (0x0003330f) wait_border_pane_g1

0x217b,	// (0x0003331a) wait_border_pane_g2

0x2184,	// (0x00033323) wait_border_pane_g3

0x0002,

0xf87f,	// (0x00040a1e) wait_border_pane_g

0x20d2,	// (0x00033271) bg_popup_window_pane_cp16_ParamLimits

0x20d2,	// (0x00033271) bg_popup_window_pane_cp16

0x20e0,	// (0x0003327f) indicator_popup_pane_cp4_ParamLimits

0x20e0,	// (0x0003327f) indicator_popup_pane_cp4

0x20f4,	// (0x00033293) popup_query_data_window_t1_ParamLimits

0x20f4,	// (0x00033293) popup_query_data_window_t1

0x2106,	// (0x000332a5) popup_query_data_window_t2_ParamLimits

0x2106,	// (0x000332a5) popup_query_data_window_t2

0x211f,	// (0x000332be) popup_query_data_window_t3_ParamLimits

0x211f,	// (0x000332be) popup_query_data_window_t3

0x0002,

0xf878,	// (0x00040a17) popup_query_data_window_t_ParamLimits

0xf878,	// (0x00040a17) popup_query_data_window_t

0x2139,	// (0x000332d8) query_popup_data_pane_ParamLimits

0x2139,	// (0x000332d8) query_popup_data_pane

0x214d,	// (0x000332ec) query_popup_data_pane_cp1_ParamLimits

0x214d,	// (0x000332ec) query_popup_data_pane_cp1

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp10_ParamLimits

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp10

0x2035,	// (0x000331d4) indicator_popup_pane_ParamLimits

0x2035,	// (0x000331d4) indicator_popup_pane

0x08c7,	// (0x00031a66) popup_query_code_window_t1_ParamLimits

0x08c7,	// (0x00031a66) popup_query_code_window_t1

0x204d,	// (0x000331ec) popup_query_code_window_t2_ParamLimits

0x204d,	// (0x000331ec) popup_query_code_window_t2

0x208b,	// (0x0003322a) popup_query_code_window_t3_ParamLimits

0x208b,	// (0x0003322a) popup_query_code_window_t3

0x0002,

0xf871,	// (0x00040a10) popup_query_code_window_t_ParamLimits

0xf871,	// (0x00040a10) popup_query_code_window_t

0x20ba,	// (0x00033259) query_popup_pane_ParamLimits

0x20ba,	// (0x00033259) query_popup_pane

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp15_ParamLimits

0x0870,	// (0x00031a0f) bg_popup_window_pane_cp15

0x088e,	// (0x00031a2d) indicator_popup_pane_cp1_ParamLimits

0x088e,	// (0x00031a2d) indicator_popup_pane_cp1

0x08a1,	// (0x00031a40) indicator_popup_pane_cp2_ParamLimits

0x08a1,	// (0x00031a40) indicator_popup_pane_cp2

0x08b4,	// (0x00031a53) popup_query_data_code_window_g1_ParamLimits

0x08b4,	// (0x00031a53) popup_query_data_code_window_g1

0x08c7,	// (0x00031a66) popup_query_data_code_window_t1_ParamLimits

0x08c7,	// (0x00031a66) popup_query_data_code_window_t1

0x08d9,	// (0x00031a78) popup_query_data_code_window_t2_ParamLimits

0x08d9,	// (0x00031a78) popup_query_data_code_window_t2

0x08eb,	// (0x00031a8a) popup_query_data_code_window_t3_ParamLimits

0x08eb,	// (0x00031a8a) popup_query_data_code_window_t3

0x0901,	// (0x00031aa0) popup_query_data_code_window_t4_ParamLimits

0x0901,	// (0x00031aa0) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0004076d) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0004076d) popup_query_data_code_window_t

0xdca6,	// (0x0003ee45) list_single_midp_graphic_pane_g3

0x0919,	// (0x00031ab8) query_popup_data_pane_cp2_ParamLimits

0x092c,	// (0x00031acb) query_popup_pane_cp2_ParamLimits

0x092c,	// (0x00031acb) query_popup_pane_cp2

0x063c,	// (0x000317db) bg_popup_window_pane_cp11

0x2009,	// (0x000331a8) heading_pane_cp5

0x09ba,	// (0x00031b59) listscroll_popup_info_pane

0x063c,	// (0x000317db) input_focus_pane_cp3

0x093f,	// (0x00031ade) query_popup_pane_t1

0x094d,	// (0x00031aec) list_popup_info_pane_ParamLimits

0x094d,	// (0x00031aec) list_popup_info_pane

0x095c,	// (0x00031afb) listscroll_popup_info_pane_g1

0x0964,	// (0x00031b03) scroll_pane_cp7

0x096e,	// (0x00031b0d) popup_info_list_pane_t1_ParamLimits

0x096e,	// (0x00031b0d) popup_info_list_pane_t1

0x0988,	// (0x00031b27) popup_info_list_pane_t2_ParamLimits

0x0988,	// (0x00031b27) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x00040776) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x00040776) popup_info_list_pane_t

0x063c,	// (0x000317db) bg_popup_window_pane_cp12

0x2efe,	// (0x0003409d) find_popup_pane

0x0698,	// (0x00031837) bg_popup_window_pane_cp3

0x09a2,	// (0x00031b41) heading_pane_cp3

0x09ae,	// (0x00031b4d) listscroll_popup_graphic_pane

0x063c,	// (0x000317db) bg_popup_window_pane_cp4

0x54d7,	// (0x00036676) heading_pane_cp4

0x09ba,	// (0x00031b59) listscroll_popup_colour_pane

0x09c2,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x09c2,	// (0x00031b61) cell_large_graphic_colour_none_popup_pane

0x54e1,	// (0x00036680) grid_large_graphic_colour_popup_pane_ParamLimits

0x54e1,	// (0x00036680) grid_large_graphic_colour_popup_pane

0x09d6,	// (0x00031b75) listscroll_popup_colour_pane_g1_ParamLimits

0x09d6,	// (0x00031b75) listscroll_popup_colour_pane_g1

0x09ed,	// (0x00031b8c) listscroll_popup_colour_pane_g2_ParamLimits

0x09ed,	// (0x00031b8c) listscroll_popup_colour_pane_g2

0x0a04,	// (0x00031ba3) listscroll_popup_colour_pane_g3_ParamLimits

0x0a04,	// (0x00031ba3) listscroll_popup_colour_pane_g3

0x5505,	// (0x000366a4) listscroll_popup_colour_pane_g4_ParamLimits

0x5505,	// (0x000366a4) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0004077b) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0004077b) listscroll_popup_colour_pane_g

0x0a14,	// (0x00031bb3) scroll_pane_cp6_ParamLimits

0x0a14,	// (0x00031bb3) scroll_pane_cp6

0x5514,	// (0x000366b3) cell_large_graphic_colour_popup_pane_ParamLimits

0x5514,	// (0x000366b3) cell_large_graphic_colour_popup_pane

0x0a26,	// (0x00031bc5) cell_large_graphic_colour_none_popup_pane_t1

0x063c,	// (0x000317db) grid_highlight_pane_cp5

0x0a35,	// (0x00031bd4) cell_large_graphic_colour_popup_pane_g1

0x0a3d,	// (0x00031bdc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x00040784) cell_large_graphic_colour_popup_pane_g

0x0a45,	// (0x00031be4) cell_large_graphic_colour_popup_pane_g2_copy1

0x0a4e,	// (0x00031bed) grid_highlight_pane_cp4

0x0a56,	// (0x00031bf5) bg_popup_window_pane_cp8_ParamLimits

0x0a56,	// (0x00031bf5) bg_popup_window_pane_cp8

0x0a71,	// (0x00031c10) popup_snote_single_text_window_g1_ParamLimits

0x0a71,	// (0x00031c10) popup_snote_single_text_window_g1

0x0a83,	// (0x00031c22) popup_snote_single_text_window_t1_ParamLimits

0x0a83,	// (0x00031c22) popup_snote_single_text_window_t1

0x0a96,	// (0x00031c35) popup_snote_single_text_window_t2_ParamLimits

0x0a96,	// (0x00031c35) popup_snote_single_text_window_t2

0x0aa9,	// (0x00031c48) popup_snote_single_text_window_t3_ParamLimits

0x0aa9,	// (0x00031c48) popup_snote_single_text_window_t3

0x0ae2,	// (0x00031c81) popup_snote_single_text_window_t4_ParamLimits

0x0ae2,	// (0x00031c81) popup_snote_single_text_window_t4

0x0b16,	// (0x00031cb5) popup_snote_single_text_window_t5_ParamLimits

0x0b16,	// (0x00031cb5) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x00040789) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x00040789) popup_snote_single_text_window_t

0x0b45,	// (0x00031ce4) bg_popup_window_pane_cp9_ParamLimits

0x0b45,	// (0x00031ce4) bg_popup_window_pane_cp9

0x0a71,	// (0x00031c10) popup_snote_single_graphic_window_g1_ParamLimits

0x0a71,	// (0x00031c10) popup_snote_single_graphic_window_g1

0x0b53,	// (0x00031cf2) popup_snote_single_graphic_window_g2_ParamLimits

0x0b53,	// (0x00031cf2) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x00040794) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x00040794) popup_snote_single_graphic_window_g

0x0b5f,	// (0x00031cfe) popup_snote_single_graphic_window_t1_ParamLimits

0x0b5f,	// (0x00031cfe) popup_snote_single_graphic_window_t1

0x0b72,	// (0x00031d11) popup_snote_single_graphic_window_t2_ParamLimits

0x0b72,	// (0x00031d11) popup_snote_single_graphic_window_t2

0x0b85,	// (0x00031d24) popup_snote_single_graphic_window_t3_ParamLimits

0x0b85,	// (0x00031d24) popup_snote_single_graphic_window_t3

0x0bbe,	// (0x00031d5d) popup_snote_single_graphic_window_t4_ParamLimits

0x0bbe,	// (0x00031d5d) popup_snote_single_graphic_window_t4

0x0bf2,	// (0x00031d91) popup_snote_single_graphic_window_t5_ParamLimits

0x0bf2,	// (0x00031d91) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x00040799) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x00040799) popup_snote_single_graphic_window_t

0x2e82,	// (0x00034021) grid_graphic_popup_pane_ParamLimits

0x2e82,	// (0x00034021) grid_graphic_popup_pane

0x2eae,	// (0x0003404d) listscroll_popup_graphic_pane_g1_ParamLimits

0x2eae,	// (0x0003404d) listscroll_popup_graphic_pane_g1

0x7da5,	// (0x00038f44) listscroll_popup_graphic_pane_g2_ParamLimits

0x7da5,	// (0x00038f44) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ee,	// (0x00040b8d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ee,	// (0x00040b8d) listscroll_popup_graphic_pane_g

0x2bf2,	// (0x00033d91) scroll_pane_cp5

0x7d66,	// (0x00038f05) cell_graphic_popup_pane_ParamLimits

0x7d66,	// (0x00038f05) cell_graphic_popup_pane

0x2e4d,	// (0x00033fec) cell_graphic_popup_pane_g1

0x2e55,	// (0x00033ff4) cell_graphic_popup_pane_g2

0x0a45,	// (0x00031be4) cell_graphic_popup_pane_g3

0x0002,

0xf9e7,	// (0x00040b86) cell_graphic_popup_pane_g

0x2e5e,	// (0x00033ffd) cell_graphic_popup_pane_t2

0x0a4e,	// (0x00031bed) grid_highlight_pane_cp3

0x0c33,	// (0x00031dd2) list_gen_pane_ParamLimits

0x0c33,	// (0x00031dd2) list_gen_pane

0x0c5b,	// (0x00031dfa) scroll_pane

0x7d19,	// (0x00038eb8) bg_list_pane_g1_ParamLimits

0x7d19,	// (0x00038eb8) bg_list_pane_g1

0x2dfc,	// (0x00033f9b) bg_list_pane_g2_ParamLimits

0x2dfc,	// (0x00033f9b) bg_list_pane_g2

0x2e0f,	// (0x00033fae) bg_list_pane_g3_ParamLimits

0x2e0f,	// (0x00033fae) bg_list_pane_g3

0x2e21,	// (0x00033fc0) bg_list_pane_g4_ParamLimits

0x2e21,	// (0x00033fc0) bg_list_pane_g4

0x7d34,	// (0x00038ed3) bg_list_pane_g5_ParamLimits

0x7d34,	// (0x00038ed3) bg_list_pane_g5

0x0004,

0xf9dc,	// (0x00040b7b) bg_list_pane_g_ParamLimits

0xf9dc,	// (0x00040b7b) bg_list_pane_g

0x6150,	// (0x000372ef) list_double2_graphic_large_graphic_pane_ParamLimits

0x6150,	// (0x000372ef) list_double2_graphic_large_graphic_pane

0x6150,	// (0x000372ef) list_double2_graphic_pane_ParamLimits

0x6150,	// (0x000372ef) list_double2_graphic_pane

0x6150,	// (0x000372ef) list_double2_large_graphic_pane_ParamLimits

0x6150,	// (0x000372ef) list_double2_large_graphic_pane

0x6150,	// (0x000372ef) list_double2_pane_ParamLimits

0x6150,	// (0x000372ef) list_double2_pane

0x6150,	// (0x000372ef) list_double_graphic_heading_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_graphic_heading_pane

0x6150,	// (0x000372ef) list_double_graphic_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_graphic_pane

0x6150,	// (0x000372ef) list_double_heading_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_heading_pane

0x6150,	// (0x000372ef) list_double_large_graphic_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_large_graphic_pane

0x6150,	// (0x000372ef) list_double_number_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_number_pane

0x6150,	// (0x000372ef) list_double_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_pane

0x6150,	// (0x000372ef) list_double_time_pane_ParamLimits

0x6150,	// (0x000372ef) list_double_time_pane

0x6150,	// (0x000372ef) list_setting_number_pane_ParamLimits

0x6150,	// (0x000372ef) list_setting_number_pane

0x6150,	// (0x000372ef) list_setting_pane_ParamLimits

0x6150,	// (0x000372ef) list_setting_pane

0x6194,	// (0x00037333) list_single_2graphic_pane_ParamLimits

0x6194,	// (0x00037333) list_single_2graphic_pane

0x6194,	// (0x00037333) list_single_graphic_heading_pane_ParamLimits

0x6194,	// (0x00037333) list_single_graphic_heading_pane

0x6194,	// (0x00037333) list_single_graphic_pane_ParamLimits

0x6194,	// (0x00037333) list_single_graphic_pane

0x6194,	// (0x00037333) list_single_heading_pane_ParamLimits

0x6194,	// (0x00037333) list_single_heading_pane

0x61e0,	// (0x0003737f) list_single_large_graphic_pane_ParamLimits

0x61e0,	// (0x0003737f) list_single_large_graphic_pane

0x6194,	// (0x00037333) list_single_number_heading_pane_ParamLimits

0x6194,	// (0x00037333) list_single_number_heading_pane

0x6194,	// (0x00037333) list_single_number_pane_ParamLimits

0x6194,	// (0x00037333) list_single_number_pane

0x6194,	// (0x00037333) list_single_pane_ParamLimits

0x6194,	// (0x00037333) list_single_pane

0x063c,	// (0x000317db) list_highlight_pane_cp1

0x169b,	// (0x0003283a) list_single_pane_g1_ParamLimits

0x169b,	// (0x0003283a) list_single_pane_g1

0x4034,	// (0x000351d3) list_single_pane_g2_ParamLimits

0x4034,	// (0x000351d3) list_single_pane_g2

0x0001,

0xf616,	// (0x000407b5) list_single_pane_g_ParamLimits

0xf616,	// (0x000407b5) list_single_pane_g

0x48cd,	// (0x00035a6c) list_single_pane_t1_ParamLimits

0x48cd,	// (0x00035a6c) list_single_pane_t1

0x169b,	// (0x0003283a) list_single_number_pane_g1_ParamLimits

0x169b,	// (0x0003283a) list_single_number_pane_g1

0x4034,	// (0x000351d3) list_single_number_pane_g2_ParamLimits

0x4034,	// (0x000351d3) list_single_number_pane_g2

0x0001,

0xf616,	// (0x000407b5) list_single_number_pane_g_ParamLimits

0xf616,	// (0x000407b5) list_single_number_pane_g

0x4875,	// (0x00035a14) list_single_number_pane_t1_ParamLimits

0x4875,	// (0x00035a14) list_single_number_pane_t1

0x488b,	// (0x00035a2a) list_single_number_pane_t2_ParamLimits

0x488b,	// (0x00035a2a) list_single_number_pane_t2

0x0001,

0xf99d,	// (0x00040b3c) list_single_number_pane_t_ParamLimits

0xf99d,	// (0x00040b3c) list_single_number_pane_t

0x4028,	// (0x000351c7) list_single_graphic_pane_g1_ParamLimits

0x4028,	// (0x000351c7) list_single_graphic_pane_g1

0x169b,	// (0x0003283a) list_single_graphic_pane_g2_ParamLimits

0x169b,	// (0x0003283a) list_single_graphic_pane_g2

0x4034,	// (0x000351d3) list_single_graphic_pane_g3_ParamLimits

0x4034,	// (0x000351d3) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x000407a4) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x000407a4) list_single_graphic_pane_g

0x4040,	// (0x000351df) list_single_graphic_pane_t1_ParamLimits

0x4040,	// (0x000351df) list_single_graphic_pane_t1

0x4056,	// (0x000351f5) list_single_heading_pane_g1_ParamLimits

0x4056,	// (0x000351f5) list_single_heading_pane_g1

0x4034,	// (0x000351d3) list_single_heading_pane_g2_ParamLimits

0x4034,	// (0x000351d3) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x000407ab) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x000407ab) list_single_heading_pane_g

0x4069,	// (0x00035208) list_single_heading_pane_t1_ParamLimits

0x4069,	// (0x00035208) list_single_heading_pane_t1

0x553d,	// (0x000366dc) list_single_heading_pane_t2_ParamLimits

0x553d,	// (0x000366dc) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x000407b0) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x000407b0) list_single_heading_pane_t

0x169b,	// (0x0003283a) list_single_number_heading_pane_g1_ParamLimits

0x169b,	// (0x0003283a) list_single_number_heading_pane_g1

0x4034,	// (0x000351d3) list_single_number_heading_pane_g2_ParamLimits

0x4034,	// (0x000351d3) list_single_number_heading_pane_g2

0x0001,

0xf616,	// (0x000407b5) list_single_number_heading_pane_g_ParamLimits

0xf616,	// (0x000407b5) list_single_number_heading_pane_g

0x407f,	// (0x0003521e) list_single_number_heading_pane_t1_ParamLimits

0x407f,	// (0x0003521e) list_single_number_heading_pane_t1

0x4095,	// (0x00035234) list_single_number_heading_pane_t2_ParamLimits

0x4095,	// (0x00035234) list_single_number_heading_pane_t2

0x40a7,	// (0x00035246) list_single_number_heading_pane_t3_ParamLimits

0x40a7,	// (0x00035246) list_single_number_heading_pane_t3

0x0002,

0xf61b,	// (0x000407ba) list_single_number_heading_pane_t_ParamLimits

0xf61b,	// (0x000407ba) list_single_number_heading_pane_t

0x40b9,	// (0x00035258) list_single_graphic_heading_pane_g1_ParamLimits

0x40b9,	// (0x00035258) list_single_graphic_heading_pane_g1

0x40cf,	// (0x0003526e) list_single_graphic_heading_pane_g4_ParamLimits

0x40cf,	// (0x0003526e) list_single_graphic_heading_pane_g4

0x4034,	// (0x000351d3) list_single_graphic_heading_pane_g5_ParamLimits

0x4034,	// (0x000351d3) list_single_graphic_heading_pane_g5

0x0002,

0xf622,	// (0x000407c1) list_single_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x000407c1) list_single_graphic_heading_pane_g

0x407f,	// (0x0003521e) list_single_graphic_heading_pane_t1_ParamLimits

0x407f,	// (0x0003521e) list_single_graphic_heading_pane_t1

0x40e0,	// (0x0003527f) list_single_graphic_heading_pane_t2_ParamLimits

0x40e0,	// (0x0003527f) list_single_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x000407c8) list_single_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x000407c8) list_single_graphic_heading_pane_t

0x554f,	// (0x000366ee) list_single_large_graphic_pane_g1_ParamLimits

0x554f,	// (0x000366ee) list_single_large_graphic_pane_g1

0x555b,	// (0x000366fa) list_single_large_graphic_pane_g2_ParamLimits

0x555b,	// (0x000366fa) list_single_large_graphic_pane_g2

0x5567,	// (0x00036706) list_single_large_graphic_pane_g3_ParamLimits

0x5567,	// (0x00036706) list_single_large_graphic_pane_g3

0x0002,

0xf62e,	// (0x000407cd) list_single_large_graphic_pane_g_ParamLimits

0xf62e,	// (0x000407cd) list_single_large_graphic_pane_g

0x217b,	// (0x0003331a) wait_border_pane_g2_copy1

0x5573,	// (0x00036712) list_single_large_graphic_pane_g4_cp2

0x40f8,	// (0x00035297) list_single_large_graphic_pane_t1_ParamLimits

0x40f8,	// (0x00035297) list_single_large_graphic_pane_t1

0x557b,	// (0x0003671a) list_double_pane_g1_ParamLimits

0x557b,	// (0x0003671a) list_double_pane_g1

0x5587,	// (0x00036726) list_double_pane_g2_ParamLimits

0x5587,	// (0x00036726) list_double_pane_g2

0x0001,

0xf635,	// (0x000407d4) list_double_pane_g_ParamLimits

0xf635,	// (0x000407d4) list_double_pane_g

0x410e,	// (0x000352ad) list_double_pane_t1_ParamLimits

0x410e,	// (0x000352ad) list_double_pane_t1

0x4124,	// (0x000352c3) list_double_pane_t2_ParamLimits

0x4124,	// (0x000352c3) list_double_pane_t2

0x0001,

0xf63a,	// (0x000407d9) list_double_pane_t_ParamLimits

0xf63a,	// (0x000407d9) list_double_pane_t

0x4136,	// (0x000352d5) list_double2_pane_g1_ParamLimits

0x4136,	// (0x000352d5) list_double2_pane_g1

0x4147,	// (0x000352e6) list_double2_pane_g2_ParamLimits

0x4147,	// (0x000352e6) list_double2_pane_g2

0x0001,

0xf63f,	// (0x000407de) list_double2_pane_g_ParamLimits

0xf63f,	// (0x000407de) list_double2_pane_g

0x4153,	// (0x000352f2) list_double2_pane_t1_ParamLimits

0x4153,	// (0x000352f2) list_double2_pane_t1

0x4169,	// (0x00035308) list_double2_pane_t2_ParamLimits

0x4169,	// (0x00035308) list_double2_pane_t2

0x0001,

0xf644,	// (0x000407e3) list_double2_pane_t_ParamLimits

0xf644,	// (0x000407e3) list_double2_pane_t

0x557b,	// (0x0003671a) list_double_number_pane_g1_ParamLimits

0x557b,	// (0x0003671a) list_double_number_pane_g1

0x5587,	// (0x00036726) list_double_number_pane_g2_ParamLimits

0x5587,	// (0x00036726) list_double_number_pane_g2

0x0001,

0xf635,	// (0x000407d4) list_double_number_pane_g_ParamLimits

0xf635,	// (0x000407d4) list_double_number_pane_g

0x417b,	// (0x0003531a) list_double_number_pane_t1_ParamLimits

0x417b,	// (0x0003531a) list_double_number_pane_t1

0x418d,	// (0x0003532c) list_double_number_pane_t2_ParamLimits

0x418d,	// (0x0003532c) list_double_number_pane_t2

0x41a3,	// (0x00035342) list_double_number_pane_t3_ParamLimits

0x41a3,	// (0x00035342) list_double_number_pane_t3

0x0002,

0xf649,	// (0x000407e8) list_double_number_pane_t_ParamLimits

0xf649,	// (0x000407e8) list_double_number_pane_t

0x41b5,	// (0x00035354) list_double_graphic_pane_g1_ParamLimits

0x41b5,	// (0x00035354) list_double_graphic_pane_g1

0x5593,	// (0x00036732) list_double_graphic_pane_g2_ParamLimits

0x5593,	// (0x00036732) list_double_graphic_pane_g2

0x55a2,	// (0x00036741) list_double_graphic_pane_g3_ParamLimits

0x55a2,	// (0x00036741) list_double_graphic_pane_g3

0x0003,

0xf650,	// (0x000407ef) list_double_graphic_pane_g_ParamLimits

0xf650,	// (0x000407ef) list_double_graphic_pane_g

0x41cd,	// (0x0003536c) list_double_graphic_pane_t1_ParamLimits

0x41cd,	// (0x0003536c) list_double_graphic_pane_t1

0x41e3,	// (0x00035382) list_double_graphic_pane_t2_ParamLimits

0x41e3,	// (0x00035382) list_double_graphic_pane_t2

0x0001,

0xf659,	// (0x000407f8) list_double_graphic_pane_t_ParamLimits

0xf659,	// (0x000407f8) list_double_graphic_pane_t

0x41f5,	// (0x00035394) list_double2_graphic_pane_g1_ParamLimits

0x41f5,	// (0x00035394) list_double2_graphic_pane_g1

0x55ae,	// (0x0003674d) list_double2_graphic_pane_g2_ParamLimits

0x55ae,	// (0x0003674d) list_double2_graphic_pane_g2

0x55ba,	// (0x00036759) list_double2_graphic_pane_g3_ParamLimits

0x55ba,	// (0x00036759) list_double2_graphic_pane_g3

0x0002,

0xf65e,	// (0x000407fd) list_double2_graphic_pane_g_ParamLimits

0xf65e,	// (0x000407fd) list_double2_graphic_pane_g

0x4201,	// (0x000353a0) list_double2_graphic_pane_t1_ParamLimits

0x4201,	// (0x000353a0) list_double2_graphic_pane_t1

0x4217,	// (0x000353b6) list_double2_graphic_pane_t2_ParamLimits

0x4217,	// (0x000353b6) list_double2_graphic_pane_t2

0x0001,

0xf665,	// (0x00040804) list_double2_graphic_pane_t_ParamLimits

0xf665,	// (0x00040804) list_double2_graphic_pane_t

0x4229,	// (0x000353c8) list_double_large_graphic_pane_g1_ParamLimits

0x4229,	// (0x000353c8) list_double_large_graphic_pane_g1

0x4254,	// (0x000353f3) list_double_large_graphic_pane_g2_ParamLimits

0x4254,	// (0x000353f3) list_double_large_graphic_pane_g2

0x5587,	// (0x00036726) list_double_large_graphic_pane_g3_ParamLimits

0x5587,	// (0x00036726) list_double_large_graphic_pane_g3

0x426a,	// (0x00035409) list_double_large_graphic_pane_g4_ParamLimits

0x426a,	// (0x00035409) list_double_large_graphic_pane_g4

0x0004,

0xf66a,	// (0x00040809) list_double_large_graphic_pane_g_ParamLimits

0xf66a,	// (0x00040809) list_double_large_graphic_pane_g

0x427d,	// (0x0003541c) list_double_large_graphic_pane_t1_ParamLimits

0x427d,	// (0x0003541c) list_double_large_graphic_pane_t1

0x4296,	// (0x00035435) list_double_large_graphic_pane_t2_ParamLimits

0x4296,	// (0x00035435) list_double_large_graphic_pane_t2

0x0001,

0xf675,	// (0x00040814) list_double_large_graphic_pane_t_ParamLimits

0xf675,	// (0x00040814) list_double_large_graphic_pane_t

0x55db,	// (0x0003677a) list_double2_large_graphic_pane_g1_ParamLimits

0x55db,	// (0x0003677a) list_double2_large_graphic_pane_g1

0x55e7,	// (0x00036786) list_double2_large_graphic_pane_g2_ParamLimits

0x55e7,	// (0x00036786) list_double2_large_graphic_pane_g2

0x55ba,	// (0x00036759) list_double2_large_graphic_pane_g3_ParamLimits

0x55ba,	// (0x00036759) list_double2_large_graphic_pane_g3

0x0002,

0xf67a,	// (0x00040819) list_double2_large_graphic_pane_g_ParamLimits

0xf67a,	// (0x00040819) list_double2_large_graphic_pane_g

0x42a8,	// (0x00035447) list_double2_large_graphic_pane_t1_ParamLimits

0x42a8,	// (0x00035447) list_double2_large_graphic_pane_t1

0x42be,	// (0x0003545d) list_double2_large_graphic_pane_t2_ParamLimits

0x42be,	// (0x0003545d) list_double2_large_graphic_pane_t2

0x0001,

0xf681,	// (0x00040820) list_double2_large_graphic_pane_t_ParamLimits

0xf681,	// (0x00040820) list_double2_large_graphic_pane_t

0x42d0,	// (0x0003546f) list_double_heading_pane_g1_ParamLimits

0x42d0,	// (0x0003546f) list_double_heading_pane_g1

0x55f8,	// (0x00036797) list_double_heading_pane_g2_ParamLimits

0x55f8,	// (0x00036797) list_double_heading_pane_g2

0x0001,

0xf686,	// (0x00040825) list_double_heading_pane_g_ParamLimits

0xf686,	// (0x00040825) list_double_heading_pane_g

0x42e1,	// (0x00035480) list_double_heading_pane_t1_ParamLimits

0x42e1,	// (0x00035480) list_double_heading_pane_t1

0x4169,	// (0x00035308) list_double_heading_pane_t2_ParamLimits

0x4169,	// (0x00035308) list_double_heading_pane_t2

0x0001,

0xf68b,	// (0x0004082a) list_double_heading_pane_t_ParamLimits

0xf68b,	// (0x0004082a) list_double_heading_pane_t

0x42f7,	// (0x00035496) list_double_graphic_heading_pane_g1_ParamLimits

0x42f7,	// (0x00035496) list_double_graphic_heading_pane_g1

0x42d0,	// (0x0003546f) list_double_graphic_heading_pane_g2_ParamLimits

0x42d0,	// (0x0003546f) list_double_graphic_heading_pane_g2

0x55f8,	// (0x00036797) list_double_graphic_heading_pane_g3_ParamLimits

0x55f8,	// (0x00036797) list_double_graphic_heading_pane_g3

0x0002,

0xf690,	// (0x0004082f) list_double_graphic_heading_pane_g_ParamLimits

0xf690,	// (0x0004082f) list_double_graphic_heading_pane_g

0x4303,	// (0x000354a2) list_double_graphic_heading_pane_t1_ParamLimits

0x4303,	// (0x000354a2) list_double_graphic_heading_pane_t1

0x4217,	// (0x000353b6) list_double_graphic_heading_pane_t2_ParamLimits

0x4217,	// (0x000353b6) list_double_graphic_heading_pane_t2

0x0001,

0xf697,	// (0x00040836) list_double_graphic_heading_pane_t_ParamLimits

0xf697,	// (0x00040836) list_double_graphic_heading_pane_t

0x4319,	// (0x000354b8) list_double_time_pane_g1_ParamLimits

0x4319,	// (0x000354b8) list_double_time_pane_g1

0x432a,	// (0x000354c9) list_double_time_pane_g2_ParamLimits

0x432a,	// (0x000354c9) list_double_time_pane_g2

0x0001,

0xf69c,	// (0x0004083b) list_double_time_pane_g_ParamLimits

0xf69c,	// (0x0004083b) list_double_time_pane_g

0x4336,	// (0x000354d5) list_double_time_pane_t1_ParamLimits

0x4336,	// (0x000354d5) list_double_time_pane_t1

0x434c,	// (0x000354eb) list_double_time_pane_t2_ParamLimits

0x434c,	// (0x000354eb) list_double_time_pane_t2

0x435e,	// (0x000354fd) list_double_time_pane_t3_ParamLimits

0x435e,	// (0x000354fd) list_double_time_pane_t3

0x4370,	// (0x0003550f) list_double_time_pane_t4_ParamLimits

0x4370,	// (0x0003550f) list_double_time_pane_t4

0x0003,

0xf6a1,	// (0x00040840) list_double_time_pane_t_ParamLimits

0xf6a1,	// (0x00040840) list_double_time_pane_t

0x4382,	// (0x00035521) list_setting_pane_g1_ParamLimits

0x4382,	// (0x00035521) list_setting_pane_g1

0x438e,	// (0x0003552d) list_setting_pane_g2_ParamLimits

0x438e,	// (0x0003552d) list_setting_pane_g2

0x0001,

0xf6aa,	// (0x00040849) list_setting_pane_g_ParamLimits

0xf6aa,	// (0x00040849) list_setting_pane_g

0x439a,	// (0x00035539) list_setting_pane_t1_ParamLimits

0x439a,	// (0x00035539) list_setting_pane_t1

0x43b4,	// (0x00035553) list_setting_pane_t2_ParamLimits

0x43b4,	// (0x00035553) list_setting_pane_t2

0x0002,

0xf6af,	// (0x0004084e) list_setting_pane_t_ParamLimits

0xf6af,	// (0x0004084e) list_setting_pane_t

0x43f1,	// (0x00035590) set_value_pane_cp_ParamLimits

0x43f1,	// (0x00035590) set_value_pane_cp

0x43fd,	// (0x0003559c) list_setting_number_pane_g1_ParamLimits

0x43fd,	// (0x0003559c) list_setting_number_pane_g1

0x4409,	// (0x000355a8) list_setting_number_pane_g2_ParamLimits

0x4409,	// (0x000355a8) list_setting_number_pane_g2

0x0001,

0xf6b6,	// (0x00040855) list_setting_number_pane_g_ParamLimits

0xf6b6,	// (0x00040855) list_setting_number_pane_g

0x4415,	// (0x000355b4) list_setting_number_pane_t1_ParamLimits

0x4415,	// (0x000355b4) list_setting_number_pane_t1

0x442e,	// (0x000355cd) list_setting_number_pane_t2_ParamLimits

0x442e,	// (0x000355cd) list_setting_number_pane_t2

0x4448,	// (0x000355e7) list_setting_number_pane_t3_ParamLimits

0x4448,	// (0x000355e7) list_setting_number_pane_t3

0x0003,

0xf6bb,	// (0x0004085a) list_setting_number_pane_t_ParamLimits

0xf6bb,	// (0x0004085a) list_setting_number_pane_t

0x43f1,	// (0x00035590) set_value_pane_ParamLimits

0x43f1,	// (0x00035590) set_value_pane

0x0c8f,	// (0x00031e2e) bg_set_opt_pane_ParamLimits

0x0c8f,	// (0x00031e2e) bg_set_opt_pane

0x448b,	// (0x0003562a) set_value_pane_t1

0x0cb0,	// (0x00031e4f) slider_set_pane_cp3

0x0cb9,	// (0x00031e58) volume_small_pane_cp

0x0cc2,	// (0x00031e61) list_form_gen_pane

0x0ccb,	// (0x00031e6a) scroll_pane_cp8

0x44a1,	// (0x00035640) form_field_data_pane_ParamLimits

0x44a1,	// (0x00035640) form_field_data_pane

0x44c1,	// (0x00035660) form_field_data_wide_pane_ParamLimits

0x44c1,	// (0x00035660) form_field_data_wide_pane

0x44e2,	// (0x00035681) form_field_popup_pane_ParamLimits

0x44e2,	// (0x00035681) form_field_popup_pane

0x4500,	// (0x0003569f) form_field_popup_wide_pane_ParamLimits

0x4500,	// (0x0003569f) form_field_popup_wide_pane

0x451d,	// (0x000356bc) form_field_slider_pane_ParamLimits

0x451d,	// (0x000356bc) form_field_slider_pane

0x4530,	// (0x000356cf) form_field_slider_wide_pane_ParamLimits

0x4530,	// (0x000356cf) form_field_slider_wide_pane

0x0cdc,	// (0x00031e7b) data_form_pane

0x454d,	// (0x000356ec) form_field_data_pane_t1

0x0ce8,	// (0x00031e87) input_focus_pane

0x0cf6,	// (0x00031e95) data_form_wide_pane

0x4573,	// (0x00035712) form_field_data_wide_pane_t1

0x0a63,	// (0x00031c02) input_focus_pane_cp6

0x4595,	// (0x00035734) form_field_popup_pane_t1

0x0ce8,	// (0x00031e87) input_focus_pane_cp7

0x0d22,	// (0x00031ec1) list_form_pane

0x45b7,	// (0x00035756) form_field_popup_wide_pane_t1

0x0ce8,	// (0x00031e87) input_focus_pane_cp8

0x0d2e,	// (0x00031ecd) list_form_wide_pane

0x45d4,	// (0x00035773) form_field_slider_pane_t1_ParamLimits

0x45d4,	// (0x00035773) form_field_slider_pane_t1

0x45ec,	// (0x0003578b) form_field_slider_pane_t2_ParamLimits

0x45ec,	// (0x0003578b) form_field_slider_pane_t2

0x0001,

0xf6cb,	// (0x0004086a) form_field_slider_pane_t_ParamLimits

0xf6cb,	// (0x0004086a) form_field_slider_pane_t

0x068a,	// (0x00031829) input_focus_pane_cp9_ParamLimits

0x068a,	// (0x00031829) input_focus_pane_cp9

0x4601,	// (0x000357a0) slider_cont_pane_ParamLimits

0x4601,	// (0x000357a0) slider_cont_pane

0x0d3d,	// (0x00031edc) form_field_slider_wide_pane_t1_ParamLimits

0x0d3d,	// (0x00031edc) form_field_slider_wide_pane_t1

0x4615,	// (0x000357b4) form_field_slider_wide_pane_t2_ParamLimits

0x4615,	// (0x000357b4) form_field_slider_wide_pane_t2

0x0001,

0xf6d0,	// (0x0004086f) form_field_slider_wide_pane_t_ParamLimits

0xf6d0,	// (0x0004086f) form_field_slider_wide_pane_t

0x068a,	// (0x00031829) input_focus_pane_cp10_ParamLimits

0x068a,	// (0x00031829) input_focus_pane_cp10

0x4627,	// (0x000357c6) slider_cont_pane_cp1_ParamLimits

0x4627,	// (0x000357c6) slider_cont_pane_cp1

0x463b,	// (0x000357da) slider_form_pane_cp

0x0d4f,	// (0x00031eee) input_focus_pane_g1

0x0d57,	// (0x00031ef6) input_focus_pane_g2

0x0d5f,	// (0x00031efe) input_focus_pane_g3

0x0d67,	// (0x00031f06) input_focus_pane_g4

0x0d6f,	// (0x00031f0e) input_focus_pane_g5

0x0d77,	// (0x00031f16) input_focus_pane_g6

0x0d7f,	// (0x00031f1e) input_focus_pane_g7

0x0d87,	// (0x00031f26) input_focus_pane_g8

0x0d8f,	// (0x00031f2e) input_focus_pane_g9

0x0632,	// (0x000317d1) input_focus_pane_g10

0x0009,

0xf6d5,	// (0x00040874) input_focus_pane_g

0x2184,	// (0x00033323) wait_border_pane_g3_copy1

0x4643,	// (0x000357e2) data_form_pane_t1

0x0632,	// (0x000317d1) wait_anim_pane_g1_copy1

0x489d,	// (0x00035a3c) data_form_wide_pane_t1

0x465e,	// (0x000357fd) list_form_graphic_pane_cp_ParamLimits

0x465e,	// (0x000357fd) list_form_graphic_pane_cp

0x2da5,	// (0x00033f44) slider_form_pane_g1

0x2dae,	// (0x00033f4d) slider_form_pane_g2

0x0006,

0xf9cd,	// (0x00040b6c) slider_form_pane_g

0x4675,	// (0x00035814) list_form_graphic_pane_ParamLimits

0x4675,	// (0x00035814) list_form_graphic_pane

0x468f,	// (0x0003582e) list_form_graphic_pane_g1

0x4697,	// (0x00035836) list_form_graphic_pane_t1_ParamLimits

0x4697,	// (0x00035836) list_form_graphic_pane_t1

0x0698,	// (0x00031837) list_highlight_pane_cp5_ParamLimits

0x0698,	// (0x00031837) list_highlight_pane_cp5

0x46ac,	// (0x0003584b) find_pane_g1

0x0d97,	// (0x00031f36) input_find_pane

0x46b5,	// (0x00035854) input_find_pane_g1_ParamLimits

0x46b5,	// (0x00035854) input_find_pane_g1

0x46c1,	// (0x00035860) input_find_pane_t1_ParamLimits

0x46c1,	// (0x00035860) input_find_pane_t1

0x46d6,	// (0x00035875) input_find_pane_t2_ParamLimits

0x46d6,	// (0x00035875) input_find_pane_t2

0x0001,

0xf6ea,	// (0x00040889) input_find_pane_t_ParamLimits

0xf6ea,	// (0x00040889) input_find_pane_t

0x0da0,	// (0x00031f3f) input_focus_pane_cp5_ParamLimits

0x0da0,	// (0x00031f3f) input_focus_pane_cp5

0x5610,	// (0x000367af) bg_popup_window_pane_cp2_ParamLimits

0x5610,	// (0x000367af) bg_popup_window_pane_cp2

0x561d,	// (0x000367bc) listscroll_menu_pane_ParamLimits

0x561d,	// (0x000367bc) listscroll_menu_pane

0x5629,	// (0x000367c8) popup_submenu_window_ParamLimits

0x5629,	// (0x000367c8) popup_submenu_window

0x0dae,	// (0x00031f4d) find_popup_pane_g1

0x0db6,	// (0x00031f55) input_popup_find_pane_cp

0x0da0,	// (0x00031f3f) input_focus_pane_cp4_ParamLimits

0x0da0,	// (0x00031f3f) input_focus_pane_cp4

0x0dc0,	// (0x00031f5f) input_popup_find_pane_t1_ParamLimits

0x0dc0,	// (0x00031f5f) input_popup_find_pane_t1

0x063c,	// (0x000317db) bg_popup_sub_pane_cp

0x0dee,	// (0x00031f8d) listscroll_popup_sub_pane

0x0df6,	// (0x00031f95) list_submenu_pane_ParamLimits

0x0df6,	// (0x00031f95) list_submenu_pane

0x0e07,	// (0x00031fa6) scroll_pane_cp4

0x0e0f,	// (0x00031fae) list_single_popup_submenu_pane_ParamLimits

0x0e0f,	// (0x00031fae) list_single_popup_submenu_pane

0x0e22,	// (0x00031fc1) list_single_popup_submenu_pane_g1

0x0e2a,	// (0x00031fc9) list_single_popup_submenu_pane_t1_ParamLimits

0x0e2a,	// (0x00031fc9) list_single_popup_submenu_pane_t1

0x0698,	// (0x00031837) bg_active_tab_pane_cp1_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp1

0x565b,	// (0x000367fa) tabs_2_active_pane_g1

0x5663,	// (0x00036802) tabs_2_active_pane_t1

0x0698,	// (0x00031837) bg_passive_tab_pane_cp1_ParamLimits

0x0698,	// (0x00031837) bg_passive_tab_pane_cp1

0x565b,	// (0x000367fa) tabs_2_passive_pane_g1

0x5663,	// (0x00036802) tabs_2_passive_pane_t1

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp4

0x5675,	// (0x00036814) tabs_2_long_active_pane_t1

0x5688,	// (0x00036827) bg_passive_tab_pane_cp4

0xdcae,	// (0x0003ee4d) list_single_midp_graphic_pane_g4_ParamLimits

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp5

0x5694,	// (0x00036833) tabs_3_long_active_pane_t1

0x5688,	// (0x00036827) bg_passive_tab_pane_cp5

0xdcae,	// (0x0003ee4d) list_single_midp_graphic_pane_g4

0x0698,	// (0x00031837) bg_popup_window_pane_cp13_ParamLimits

0x0698,	// (0x00031837) bg_popup_window_pane_cp13

0x0e54,	// (0x00031ff3) listscroll_popup_fast_pane_ParamLimits

0x0e54,	// (0x00031ff3) listscroll_popup_fast_pane

0x0e63,	// (0x00032002) grid_popup_fast_pane_ParamLimits

0x0e63,	// (0x00032002) grid_popup_fast_pane

0x0e75,	// (0x00032014) scroll_pane_cp9_ParamLimits

0x0e75,	// (0x00032014) scroll_pane_cp9

0x8a55,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8a55,	// (0x00039bf4) list_single_graphic_hl_pane_t1_cp2

0x0e99,	// (0x00032038) input_focus_pane_cp20_ParamLimits

0x0e99,	// (0x00032038) input_focus_pane_cp20

0x0ea7,	// (0x00032046) query_popup_data_pane_t1_ParamLimits

0x0ea7,	// (0x00032046) query_popup_data_pane_t1

0x0eba,	// (0x00032059) query_popup_data_pane_t2_ParamLimits

0x0eba,	// (0x00032059) query_popup_data_pane_t2

0x0f00,	// (0x0003209f) query_popup_data_pane_t3_ParamLimits

0x0f00,	// (0x0003209f) query_popup_data_pane_t3

0x0f41,	// (0x000320e0) query_popup_data_pane_t4_ParamLimits

0x0f41,	// (0x000320e0) query_popup_data_pane_t4

0x0f7d,	// (0x0003211c) query_popup_data_pane_t5_ParamLimits

0x0f7d,	// (0x0003211c) query_popup_data_pane_t5

0x0004,

0xf6ef,	// (0x0004088e) query_popup_data_pane_t_ParamLimits

0xf6ef,	// (0x0004088e) query_popup_data_pane_t

0x0d4f,	// (0x00031eee) bg_set_opt_pane_g1

0x0d57,	// (0x00031ef6) bg_set_opt_pane_g2

0x0d5f,	// (0x00031efe) bg_set_opt_pane_g3

0x0d67,	// (0x00031f06) bg_set_opt_pane_g4

0x0d6f,	// (0x00031f0e) bg_set_opt_pane_g5

0x0d77,	// (0x00031f16) bg_set_opt_pane_g6

0x0d7f,	// (0x00031f1e) bg_set_opt_pane_g7

0x0d87,	// (0x00031f26) bg_set_opt_pane_g8

0x0d8f,	// (0x00031f2e) bg_set_opt_pane_g9

0x0008,

0xf6fa,	// (0x00040899) bg_set_opt_pane_g

0xd914,	// (0x0003eab3) control_top_pane_stacon_ParamLimits

0xd914,	// (0x0003eab3) control_top_pane_stacon

0xd967,	// (0x0003eb06) signal_pane_stacon_ParamLimits

0xd967,	// (0x0003eb06) signal_pane_stacon

0x13dc,	// (0x0003257b) stacon_top_pane_g1_ParamLimits

0x13dc,	// (0x0003257b) stacon_top_pane_g1

0xd98c,	// (0x0003eb2b) title_pane_stacon_ParamLimits

0xd98c,	// (0x0003eb2b) title_pane_stacon

0xd9b6,	// (0x0003eb55) uni_indicator_pane_stacon_ParamLimits

0xd9b6,	// (0x0003eb55) uni_indicator_pane_stacon

0xd9cb,	// (0x0003eb6a) battery_pane_stacon_ParamLimits

0xd9cb,	// (0x0003eb6a) battery_pane_stacon

0xda0f,	// (0x0003ebae) control_bottom_pane_stacon_ParamLimits

0xda0f,	// (0x0003ebae) control_bottom_pane_stacon

0xda32,	// (0x0003ebd1) navi_pane_stacon_ParamLimits

0xda32,	// (0x0003ebd1) navi_pane_stacon

0x13fe,	// (0x0003259d) stacon_bottom_pane_g1_ParamLimits

0x13fe,	// (0x0003259d) stacon_bottom_pane_g1

0xd675,	// (0x0003e814) aid_levels_signal_lsc_ParamLimits

0xd675,	// (0x0003e814) aid_levels_signal_lsc

0xd68c,	// (0x0003e82b) signal_pane_stacon_g1_ParamLimits

0xd68c,	// (0x0003e82b) signal_pane_stacon_g1

0xd6a0,	// (0x0003e83f) signal_pane_stacon_g2_ParamLimits

0xd6a0,	// (0x0003e83f) signal_pane_stacon_g2

0x0001,

0xf70d,	// (0x000408ac) signal_pane_stacon_g_ParamLimits

0xf70d,	// (0x000408ac) signal_pane_stacon_g

0xd6d5,	// (0x0003e874) title_pane_stacon_t1_ParamLimits

0xd6d5,	// (0x0003e874) title_pane_stacon_t1

0x0fcb,	// (0x0003216a) uni_indicator_pane_stacon_g1

0x0fd5,	// (0x00032174) uni_indicator_pane_stacon_g2

0x0fc1,	// (0x00032160) uni_indicator_pane_stacon_g3

0x0fdf,	// (0x0003217e) uni_indicator_pane_stacon_g4

0x0003,

0xf719,	// (0x000408b8) uni_indicator_pane_stacon_g

0xd6fa,	// (0x0003e899) control_top_pane_stacon_g1

0xd702,	// (0x0003e8a1) control_top_pane_stacon_t1_ParamLimits

0xd702,	// (0x0003e8a1) control_top_pane_stacon_t1

0xd739,	// (0x0003e8d8) aid_levels_battery_lsc_ParamLimits

0xd739,	// (0x0003e8d8) aid_levels_battery_lsc

0xd751,	// (0x0003e8f0) battery_pane_stacon_g1_ParamLimits

0xd751,	// (0x0003e8f0) battery_pane_stacon_g1

0xd764,	// (0x0003e903) battery_pane_stacon_g2_ParamLimits

0xd764,	// (0x0003e903) battery_pane_stacon_g2

0x0001,

0xf722,	// (0x000408c1) battery_pane_stacon_g_ParamLimits

0xf722,	// (0x000408c1) battery_pane_stacon_g

0xd7a2,	// (0x0003e941) navi_icon_pane_stacon

0xd7b6,	// (0x0003e955) navi_navi_pane_stacon

0xd7a2,	// (0x0003e941) navi_text_pane_stacon

0xd6fa,	// (0x0003e899) control_bottom_pane_stacon_g1

0xd7ca,	// (0x0003e969) control_bottom_pane_stacon_t1_ParamLimits

0xd7ca,	// (0x0003e969) control_bottom_pane_stacon_t1

0x5832,	// (0x000369d1) grid_app_pane_ParamLimits

0x5832,	// (0x000369d1) grid_app_pane

0x5854,	// (0x000369f3) scroll_pane_cp15_ParamLimits

0x5854,	// (0x000369f3) scroll_pane_cp15

0x5869,	// (0x00036a08) cell_app_pane_ParamLimits

0x5869,	// (0x00036a08) cell_app_pane

0x5893,	// (0x00036a32) cell_app_pane_g1_ParamLimits

0x5893,	// (0x00036a32) cell_app_pane_g1

0x1003,	// (0x000321a2) cell_app_pane_g2_ParamLimits

0x1003,	// (0x000321a2) cell_app_pane_g2

0x0001,

0xf727,	// (0x000408c6) cell_app_pane_g_ParamLimits

0xf727,	// (0x000408c6) cell_app_pane_g

0x100f,	// (0x000321ae) cell_app_pane_t1_ParamLimits

0x100f,	// (0x000321ae) cell_app_pane_t1

0x1021,	// (0x000321c0) grid_highlight_pane_ParamLimits

0x1021,	// (0x000321c0) grid_highlight_pane

0x0d4f,	// (0x00031eee) cell_highlight_pane_g1

0x0d57,	// (0x00031ef6) cell_highlight_pane_g2

0x0d5f,	// (0x00031efe) cell_highlight_pane_g3

0x0d67,	// (0x00031f06) cell_highlight_pane_g4

0x0d6f,	// (0x00031f0e) cell_highlight_pane_g5

0x0d77,	// (0x00031f16) cell_highlight_pane_g6

0x0d7f,	// (0x00031f1e) cell_highlight_pane_g7

0x0d87,	// (0x00031f26) cell_highlight_pane_g8

0x0d8f,	// (0x00031f2e) cell_highlight_pane_g9

0x0632,	// (0x000317d1) cell_highlight_pane_g10

0x0009,

0xf6d5,	// (0x00040874) cell_highlight_pane_g

0x1032,	// (0x000321d1) bg_scroll_pane

0xd814,	// (0x0003e9b3) scroll_handle_pane

0x1079,	// (0x00032218) scroll_bg_pane_g1

0x108e,	// (0x0003222d) scroll_bg_pane_g2

0x10a6,	// (0x00032245) scroll_bg_pane_g3

0x0002,

0xf72c,	// (0x000408cb) scroll_bg_pane_g

0x10bb,	// (0x0003225a) scroll_handle_focus_pane_ParamLimits

0x10bb,	// (0x0003225a) scroll_handle_focus_pane

0x1079,	// (0x00032218) scroll_handle_pane_g1

0x10c8,	// (0x00032267) scroll_handle_pane_g2

0x10a6,	// (0x00032245) scroll_handle_pane_g3

0x0002,

0xf733,	// (0x000408d2) scroll_handle_pane_g

0x0da0,	// (0x00031f3f) bg_popup_sub_pane_cp21_ParamLimits

0x0da0,	// (0x00031f3f) bg_popup_sub_pane_cp21

0x10dc,	// (0x0003227b) popup_fep_japan_predictive_window_t1_ParamLimits

0x10dc,	// (0x0003227b) popup_fep_japan_predictive_window_t1

0x10f3,	// (0x00032292) popup_fep_japan_predictive_window_t2_ParamLimits

0x10f3,	// (0x00032292) popup_fep_japan_predictive_window_t2

0x1126,	// (0x000322c5) popup_fep_japan_predictive_window_t3_ParamLimits

0x1126,	// (0x000322c5) popup_fep_japan_predictive_window_t3

0x0002,

0xf73a,	// (0x000408d9) popup_fep_japan_predictive_window_t_ParamLimits

0xf73a,	// (0x000408d9) popup_fep_japan_predictive_window_t

0x063c,	// (0x000317db) bg_popup_sub_pane_cp23

0x115d,	// (0x000322fc) listscroll_japin_cand_pane

0x1165,	// (0x00032304) popup_fep_japan_candidate_window_t1

0x1173,	// (0x00032312) candidate_pane_ParamLimits

0x1173,	// (0x00032312) candidate_pane

0x1185,	// (0x00032324) scroll_pane_cp30

0x118d,	// (0x0003232c) list_single_popup_jap_candidate_pane_ParamLimits

0x118d,	// (0x0003232c) list_single_popup_jap_candidate_pane

0x063c,	// (0x000317db) list_highlight_pane_cp30

0x11a1,	// (0x00032340) list_single_popup_jap_candidate_pane_t1

0x11b0,	// (0x0003234f) level_1_signal

0x11bd,	// (0x0003235c) level_2_signal

0x11ca,	// (0x00032369) level_3_signal

0x11d7,	// (0x00032376) level_4_signal

0x11e4,	// (0x00032383) level_5_signal

0x11f1,	// (0x00032390) level_6_signal

0x11fe,	// (0x0003239d) level_7_signal

0x11b0,	// (0x0003234f) level_1_battery

0x11bd,	// (0x0003235c) level_2_battery

0x11ca,	// (0x00032369) level_3_battery

0x11d7,	// (0x00032376) level_4_battery

0x11e4,	// (0x00032383) level_5_battery

0x11f1,	// (0x00032390) level_6_battery

0x11fe,	// (0x0003239d) level_7_battery

0x1223,	// (0x000323c2) list_menu_pane_ParamLimits

0x1223,	// (0x000323c2) list_menu_pane

0x1234,	// (0x000323d3) scroll_pane_cp25_ParamLimits

0x1234,	// (0x000323d3) scroll_pane_cp25

0x124d,	// (0x000323ec) list_double2_graphic_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double2_graphic_pane_cp2

0x124d,	// (0x000323ec) list_double2_large_graphic_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double2_large_graphic_pane_cp2

0x124d,	// (0x000323ec) list_double2_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double2_pane_cp2

0x124d,	// (0x000323ec) list_double_graphic_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double_graphic_pane_cp2

0x124d,	// (0x000323ec) list_double_large_graphic_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double_large_graphic_pane_cp2

0x124d,	// (0x000323ec) list_double_number_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double_number_pane_cp2

0x124d,	// (0x000323ec) list_double_pane_cp2_ParamLimits

0x124d,	// (0x000323ec) list_double_pane_cp2

0x5924,	// (0x00036ac3) list_single_2graphic_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_2graphic_pane_cp2

0x5924,	// (0x00036ac3) list_single_graphic_heading_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_graphic_heading_pane_cp2

0x5924,	// (0x00036ac3) list_single_graphic_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_graphic_pane_cp2

0x5924,	// (0x00036ac3) list_single_heading_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_heading_pane_cp2

0x125d,	// (0x000323fc) list_single_large_graphic_pane_cp2_ParamLimits

0x125d,	// (0x000323fc) list_single_large_graphic_pane_cp2

0x5924,	// (0x00036ac3) list_single_number_heading_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_number_heading_pane_cp2

0x5924,	// (0x00036ac3) list_single_number_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_number_pane_cp2

0x5924,	// (0x00036ac3) list_single_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_pane_cp2

0x1277,	// (0x00032416) bg_popup_sub_pane_cp22

0xd8c6,	// (0x0003ea65) popup_side_volume_key_window_g1

0xd8f0,	// (0x0003ea8f) popup_side_volume_key_window_t1

0xd90c,	// (0x0003eaab) volume_small_pane_cp1

0x068a,	// (0x00031829) bg_popup_sub_pane_cp24_ParamLimits

0x068a,	// (0x00031829) bg_popup_sub_pane_cp24

0x128d,	// (0x0003242c) fep_china_uni_candidate_pane_ParamLimits

0x128d,	// (0x0003242c) fep_china_uni_candidate_pane

0x12a1,	// (0x00032440) fep_china_uni_entry_pane

0x12b1,	// (0x00032450) popup_fep_china_uni_window_g1

0x12cd,	// (0x0003246c) fep_china_uni_entry_pane_g1

0x12d5,	// (0x00032474) fep_china_uni_entry_pane_g2

0x0001,

0xf767,	// (0x00040906) fep_china_uni_entry_pane_g

0x12dd,	// (0x0003247c) fep_entry_item_pane

0x12e7,	// (0x00032486) fep_candidate_item_pane

0x12ef,	// (0x0003248e) fep_china_uni_candidate_pane_g1

0x12f7,	// (0x00032496) fep_china_uni_candidate_pane_g2

0x12ff,	// (0x0003249e) fep_china_uni_candidate_pane_g3

0x1307,	// (0x000324a6) fep_china_uni_candidate_pane_g4

0x0003,

0xf76c,	// (0x0004090b) fep_china_uni_candidate_pane_g

0x0632,	// (0x000317d1) fep_entry_item_pane_g1

0x130f,	// (0x000324ae) fep_entry_item_pane_t1_ParamLimits

0x130f,	// (0x000324ae) fep_entry_item_pane_t1

0x1325,	// (0x000324c4) fep_candidate_item_pane_t1_ParamLimits

0x1325,	// (0x000324c4) fep_candidate_item_pane_t1

0x133a,	// (0x000324d9) fep_candidate_item_pane_t2_ParamLimits

0x133a,	// (0x000324d9) fep_candidate_item_pane_t2

0x0001,

0xf775,	// (0x00040914) fep_candidate_item_pane_t_ParamLimits

0xf775,	// (0x00040914) fep_candidate_item_pane_t

0x0698,	// (0x00031837) list_highlight_pane_cp31_ParamLimits

0x0698,	// (0x00031837) list_highlight_pane_cp31

0x134c,	// (0x000324eb) level_1_signal_lsc

0x1355,	// (0x000324f4) level_2_signal_lsc

0x135e,	// (0x000324fd) level_3_signal_lsc

0x1367,	// (0x00032506) level_4_signal_lsc

0x1370,	// (0x0003250f) level_5_signal_lsc

0x1379,	// (0x00032518) level_6_signal_lsc

0x1382,	// (0x00032521) level_7_signal_lsc

0x1382,	// (0x00032521) level_1_battery_lsc

0x138b,	// (0x0003252a) level_2_battery_lsc

0x1394,	// (0x00032533) level_3_battery_lsc

0x139d,	// (0x0003253c) level_4_battery_lsc

0x13a6,	// (0x00032545) level_5_battery_lsc

0x13af,	// (0x0003254e) level_6_battery_lsc

0x134c,	// (0x000324eb) level_7_battery_lsc

0x13b8,	// (0x00032557) scroll_handle_focus_pane_g1

0x13c1,	// (0x00032560) scroll_handle_focus_pane_g2

0x13ca,	// (0x00032569) scroll_handle_focus_pane_g3

0x0002,

0xf77a,	// (0x00040919) scroll_handle_focus_pane_g

0x46eb,	// (0x0003588a) list_single_2graphic_pane_g1_ParamLimits

0x46eb,	// (0x0003588a) list_single_2graphic_pane_g1

0x40cf,	// (0x0003526e) list_single_2graphic_pane_g2_ParamLimits

0x40cf,	// (0x0003526e) list_single_2graphic_pane_g2

0x4034,	// (0x000351d3) list_single_2graphic_pane_g3_ParamLimits

0x4034,	// (0x000351d3) list_single_2graphic_pane_g3

0x46f7,	// (0x00035896) list_single_2graphic_pane_g4_ParamLimits

0x46f7,	// (0x00035896) list_single_2graphic_pane_g4

0x0003,

0xf781,	// (0x00040920) list_single_2graphic_pane_g_ParamLimits

0xf781,	// (0x00040920) list_single_2graphic_pane_g

0x4708,	// (0x000358a7) list_single_2graphic_pane_t1_ParamLimits

0x4708,	// (0x000358a7) list_single_2graphic_pane_t1

0x5a2f,	// (0x00036bce) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5a2f,	// (0x00036bce) list_double2_graphic_large_graphic_pane_g1

0x55e7,	// (0x00036786) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x55e7,	// (0x00036786) list_double2_graphic_large_graphic_pane_g2

0x55ba,	// (0x00036759) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x55ba,	// (0x00036759) list_double2_graphic_large_graphic_pane_g3

0x5a3f,	// (0x00036bde) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5a3f,	// (0x00036bde) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf78a,	// (0x00040929) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf78a,	// (0x00040929) list_double2_graphic_large_graphic_pane_g

0x4736,	// (0x000358d5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4736,	// (0x000358d5) list_double2_graphic_large_graphic_pane_t1

0x474c,	// (0x000358eb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x474c,	// (0x000358eb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf793,	// (0x00040932) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf793,	// (0x00040932) list_double2_graphic_large_graphic_pane_t

0x14ab,	// (0x0003264a) popup_fast_swap_window_ParamLimits

0x14ab,	// (0x0003264a) popup_fast_swap_window

0x14c7,	// (0x00032666) popup_side_volume_key_window

0x14e1,	// (0x00032680) stacon_top_pane

0x14eb,	// (0x0003268a) status_pane_ParamLimits

0x14eb,	// (0x0003268a) status_pane

0x14e1,	// (0x00032680) status_small_pane

0x063c,	// (0x000317db) control_pane

0x063c,	// (0x000317db) stacon_bottom_pane

0x0ccb,	// (0x00031e6a) scroll_pane_cp121

0x0cc2,	// (0x00031e61) set_content_pane

0x5a54,	// (0x00036bf3) bg_active_tab_pane_g1_cp1

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp1

0x5a4b,	// (0x00036bea) bg_active_tab_pane_g3_cp1

0x5a54,	// (0x00036bf3) bg_passive_tab_pane_g1_cp1

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp1

0x5a4b,	// (0x00036bea) bg_passive_tab_pane_g3_cp1

0x5a66,	// (0x00036c05) bg_active_tab_pane_g1_cp2

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp2

0x5a5d,	// (0x00036bfc) bg_active_tab_pane_g3_cp2

0x5a66,	// (0x00036c05) bg_passive_tab_pane_g1_cp2

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp2

0x5a5d,	// (0x00036bfc) bg_passive_tab_pane_g3_cp2

0x5a78,	// (0x00036c17) bg_active_tab_pane_g1_cp3

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp3

0x5a6f,	// (0x00036c0e) bg_active_tab_pane_g3_cp3

0x5a78,	// (0x00036c17) bg_passive_tab_pane_g1_cp3

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp3

0x5a6f,	// (0x00036c0e) bg_passive_tab_pane_g3_cp3

0x5a8c,	// (0x00036c2b) bg_active_tab_pane_g1_cp4

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp4

0x5a81,	// (0x00036c20) bg_active_tab_pane_g3_cp4

0x5a8c,	// (0x00036c2b) bg_passive_tab_pane_g1_cp4

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp4

0x5a81,	// (0x00036c20) bg_passive_tab_pane_g3_cp4

0x141a,	// (0x000325b9) bg_active_tab_pane_g1_cp5

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp5

0x1423,	// (0x000325c2) bg_active_tab_pane_g3_cp5

0x141a,	// (0x000325b9) bg_passive_tab_pane_g1_cp5

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp5

0x1423,	// (0x000325c2) bg_passive_tab_pane_g3_cp5

0x6ff4,	// (0x00038193) list_set_graphic_pane_ParamLimits

0x6ff4,	// (0x00038193) list_set_graphic_pane

0x063c,	// (0x000317db) bg_set_opt_pane_cp4

0x142c,	// (0x000325cb) list_set_graphic_pane_g1_ParamLimits

0x142c,	// (0x000325cb) list_set_graphic_pane_g1

0x1438,	// (0x000325d7) list_set_graphic_pane_g2_ParamLimits

0x1438,	// (0x000325d7) list_set_graphic_pane_g2

0x0001,

0xf798,	// (0x00040937) list_set_graphic_pane_g_ParamLimits

0xf798,	// (0x00040937) list_set_graphic_pane_g

0x0009,

0xfb03,	// (0x00040ca2) volume_small_pane_cp_g

0x145c,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x145c,	// (0x000325fb) list_double2_large_graphic_pane_g1_cp2

0x146a,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x146a,	// (0x00032609) list_double2_large_graphic_pane_g2_cp2

0x147b,	// (0x0003261a) list_double2_large_graphic_pane_g3_cp2

0x1483,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1483,	// (0x00032622) list_double2_large_graphic_pane_t1_cp2

0x1499,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1499,	// (0x00032638) list_double2_large_graphic_pane_t2_cp2

0x2b37,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2b37,	// (0x00033cd6) list_double_large_graphic_pane_g1_cp2

0x2b4a,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2b4a,	// (0x00033ce9) list_double_large_graphic_pane_g2_cp2

0x1609,	// (0x000327a8) list_double_large_graphic_pane_g3_cp2

0x2b5b,	// (0x00033cfa) list_double_large_graphic_pane_g4_cp

0x2b63,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2b63,	// (0x00033d02) list_double_large_graphic_pane_t1_cp2

0x2b7a,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2b7a,	// (0x00033d19) list_double_large_graphic_pane_t2_cp2

0x14f9,	// (0x00032698) list_double2_graphic_pane_g1_cp2_ParamLimits

0x14f9,	// (0x00032698) list_double2_graphic_pane_g1_cp2

0x1507,	// (0x000326a6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1507,	// (0x000326a6) list_double2_graphic_pane_g2_cp2

0x1518,	// (0x000326b7) list_double2_graphic_pane_g3_cp2

0x1522,	// (0x000326c1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1522,	// (0x000326c1) list_double2_graphic_pane_t1_cp2

0x1538,	// (0x000326d7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1538,	// (0x000326d7) list_double2_graphic_pane_t2_cp2

0x154a,	// (0x000326e9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x154a,	// (0x000326e9) list_single_number_heading_pane_g1_cp2

0x1556,	// (0x000326f5) list_single_number_heading_pane_g2_cp2

0x155e,	// (0x000326fd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x155e,	// (0x000326fd) list_single_number_heading_pane_t1_cp2

0x1574,	// (0x00032713) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1574,	// (0x00032713) list_single_number_heading_pane_t2_cp2

0x1588,	// (0x00032727) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1588,	// (0x00032727) list_single_number_heading_pane_t3_cp2

0x154a,	// (0x000326e9) list_single_heading_pane_g1_cp2_ParamLimits

0x154a,	// (0x000326e9) list_single_heading_pane_g1_cp2

0x1556,	// (0x000326f5) list_single_heading_pane_g2_cp2

0x155e,	// (0x000326fd) list_single_heading_pane_t1_cp2_ParamLimits

0x155e,	// (0x000326fd) list_single_heading_pane_t1_cp2

0x293f,	// (0x00033ade) list_single_heading_pane_t2_cp2_ParamLimits

0x293f,	// (0x00033ade) list_single_heading_pane_t2_cp2

0x28d9,	// (0x00033a78) list_double_graphic_pane_g1_cp2_ParamLimits

0x28d9,	// (0x00033a78) list_double_graphic_pane_g1_cp2

0x28e5,	// (0x00033a84) list_double_graphic_pane_g2_cp2_ParamLimits

0x28e5,	// (0x00033a84) list_double_graphic_pane_g2_cp2

0x28f4,	// (0x00033a93) list_double_graphic_pane_g3_cp2

0x28fc,	// (0x00033a9b) list_double_graphic_pane_t1_cp2_ParamLimits

0x28fc,	// (0x00033a9b) list_double_graphic_pane_t1_cp2

0x2912,	// (0x00033ab1) list_double_graphic_pane_t2_cp2_ParamLimits

0x2912,	// (0x00033ab1) list_double_graphic_pane_t2_cp2

0x15fd,	// (0x0003279c) list_double_number_pane_g1_cp2_ParamLimits

0x15fd,	// (0x0003279c) list_double_number_pane_g1_cp2

0x1609,	// (0x000327a8) list_double_number_pane_g2_cp2

0x289d,	// (0x00033a3c) list_double_number_pane_t1_cp2_ParamLimits

0x289d,	// (0x00033a3c) list_double_number_pane_t1_cp2

0x28b1,	// (0x00033a50) list_double_number_pane_t2_cp2_ParamLimits

0x28b1,	// (0x00033a50) list_double_number_pane_t2_cp2

0x28c7,	// (0x00033a66) list_double_number_pane_t3_cp2_ParamLimits

0x28c7,	// (0x00033a66) list_double_number_pane_t3_cp2

0x2814,	// (0x000339b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x2814,	// (0x000339b3) list_single_graphic_pane_g1_cp2

0x1661,	// (0x00032800) list_single_graphic_pane_g2_cp2_ParamLimits

0x1661,	// (0x00032800) list_single_graphic_pane_g2_cp2

0x166d,	// (0x0003280c) list_single_graphic_pane_g3_cp2

0x27ea,	// (0x00033989) list_single_graphic_pane_t1_cp2_ParamLimits

0x27ea,	// (0x00033989) list_single_graphic_pane_t1_cp2

0x1661,	// (0x00032800) list_single_number_pane_g1_cp2_ParamLimits

0x1661,	// (0x00032800) list_single_number_pane_g1_cp2

0x166d,	// (0x0003280c) list_single_number_pane_g2_cp2

0x27ea,	// (0x00033989) list_single_number_pane_t1_cp2_ParamLimits

0x27ea,	// (0x00033989) list_single_number_pane_t1_cp2

0x2800,	// (0x0003399f) list_single_number_pane_t2_cp2_ParamLimits

0x2800,	// (0x0003399f) list_single_number_pane_t2_cp2

0x146a,	// (0x00032609) list_double2_pane_g1_cp2_ParamLimits

0x146a,	// (0x00032609) list_double2_pane_g1_cp2

0x147b,	// (0x0003261a) list_double2_pane_g2_cp2

0x15d5,	// (0x00032774) list_double2_pane_t1_cp2_ParamLimits

0x15d5,	// (0x00032774) list_double2_pane_t1_cp2

0x15eb,	// (0x0003278a) list_double2_pane_t2_cp2_ParamLimits

0x15eb,	// (0x0003278a) list_double2_pane_t2_cp2

0x15fd,	// (0x0003279c) list_double_pane_g1_cp2_ParamLimits

0x15fd,	// (0x0003279c) list_double_pane_g1_cp2

0x1609,	// (0x000327a8) list_double_pane_g2_cp2

0x1611,	// (0x000327b0) list_double_pane_t1_cp2_ParamLimits

0x1611,	// (0x000327b0) list_double_pane_t1_cp2

0x1627,	// (0x000327c6) list_double_pane_t2_cp2_ParamLimits

0x1627,	// (0x000327c6) list_double_pane_t2_cp2

0x1651,	// (0x000327f0) list_single_pane_cp2_g3

0x1661,	// (0x00032800) list_single_pane_g1_cp2_ParamLimits

0x1661,	// (0x00032800) list_single_pane_g1_cp2

0x166d,	// (0x0003280c) list_single_pane_g2_cp2

0x1675,	// (0x00032814) list_single_pane_t1_cp2_ParamLimits

0x1675,	// (0x00032814) list_single_pane_t1_cp2

0x168d,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x168d,	// (0x0003282c) list_single_large_graphic_pane_g1_cp2

0x169b,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x169b,	// (0x0003283a) list_single_large_graphic_pane_g2_cp2

0x16a7,	// (0x00032846) list_single_large_graphic_pane_g3_cp2

0x16af,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x16af,	// (0x0003284e) list_single_large_graphic_pane_g4_cp1

0x16c9,	// (0x00032868) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x16c9,	// (0x00032868) list_single_large_graphic_pane_t1_cp2

0x27b4,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x27b4,	// (0x00033953) list_single_graphic_heading_pane_g1_cp2

0x2781,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2781,	// (0x00033920) list_single_graphic_heading_pane_g4_cp2

0x166d,	// (0x0003280c) list_single_graphic_heading_pane_g5_cp2

0x27c0,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x27c0,	// (0x0003395f) list_single_graphic_heading_pane_t1_cp2

0x27d6,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x27d6,	// (0x00033975) list_single_graphic_heading_pane_t2_cp2

0x2775,	// (0x00033914) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2775,	// (0x00033914) list_single_2graphic_pane_g1_cp2

0x2781,	// (0x00033920) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2781,	// (0x00033920) list_single_2graphic_pane_g2_cp2

0x166d,	// (0x0003280c) list_single_2graphic_pane_g3_cp2

0x2792,	// (0x00033931) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2792,	// (0x00033931) list_single_2graphic_pane_g4_cp2

0x279e,	// (0x0003393d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x279e,	// (0x0003393d) list_single_2graphic_pane_t1_cp2

0x0632,	// (0x000317d1) list_highlight_pane_g10_cp1

0x237b,	// (0x0003351a) list_highlight_pane_g1_cp1

0x2383,	// (0x00033522) list_highlight_pane_g2_cp1

0x238b,	// (0x0003352a) list_highlight_pane_g3_cp1

0x2393,	// (0x00033532) list_highlight_pane_g4_cp1

0x239b,	// (0x0003353a) list_highlight_pane_g5_cp1

0x23a3,	// (0x00033542) list_highlight_pane_g6_cp1

0x23ab,	// (0x0003354a) list_highlight_pane_g7_cp1

0x23b3,	// (0x00033552) list_highlight_pane_g8_cp1

0x23bb,	// (0x0003355a) list_highlight_pane_g9_cp1

0x79eb,	// (0x00038b8a) form_field_slider_pane_t3

0x79f9,	// (0x00038b98) form_field_slider_pane_t4

0x22af,	// (0x0003344e) slider_form_pane_ParamLimits

0x22af,	// (0x0003344e) slider_form_pane

0x063c,	// (0x000317db) control_abbreviations

0x063c,	// (0x000317db) control_conventions

0x063c,	// (0x000317db) control_definitions

0x063c,	// (0x000317db) format_table_attribute

0x298b,	// (0x00033b2a) bg_popup_preview_window_pane_g9

0x063c,	// (0x000317db) format_table_data2

0x063c,	// (0x000317db) format_table_data3

0x063c,	// (0x000317db) format_table_data_example

0x0008,

0x063c,	// (0x000317db) intro_purpose

0xf92d,	// (0x00040acc) bg_popup_preview_window_pane_g

0x063c,	// (0x000317db) texts_category

0x063c,	// (0x000317db) texts_graphics

0x16df,	// (0x0003287e) text_digital

0x16ee,	// (0x0003288d) text_primary

0x16fd,	// (0x0003289c) text_primary_small

0x170c,	// (0x000328ab) text_secondary

0x171b,	// (0x000328ba) text_title

0x2e33,	// (0x00033fd2) bg_passive_tab_pane_g1_cp3_srt

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp3_srt

0x2e3c,	// (0x00033fdb) bg_passive_tab_pane_g3_cp3_srt

0x0698,	// (0x00031837) bg_active_tab_pane_cp3_srt_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp3_srt

0x2e45,	// (0x00033fe4) tabs_4_active_pane_srt_g1

0x7d54,	// (0x00038ef3) tabs_4_active_pane_srt_t1_ParamLimits

0x7d54,	// (0x00038ef3) tabs_4_active_pane_srt_t1

0x2e33,	// (0x00033fd2) bg_active_tab_pane_g1_cp3_copy1

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp3_copy1

0x2e3c,	// (0x00033fdb) bg_active_tab_pane_g3_cp3_copy1

0x0698,	// (0x00031837) tabs_2_long_active_pane_srt_ParamLimits

0x0698,	// (0x00031837) tabs_2_long_active_pane_srt

0x0698,	// (0x00031837) tabs_2_long_passive_pane_srt_ParamLimits

0x0698,	// (0x00031837) tabs_2_long_passive_pane_srt

0x5688,	// (0x00036827) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5688,	// (0x00036827) bg_passive_tab_pane_cp4_srt

0x2d5e,	// (0x00033efd) bg_passive_tab_pane_g1_cp4_srt

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp4_srt

0x2d67,	// (0x00033f06) bg_passive_tab_pane_g3_cp4_srt

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp4_srt_ParamLimits

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp4_srt

0x7b9b,	// (0x00038d3a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x7b9b,	// (0x00038d3a) tabs_2_long_active_pane_srt_t1

0x2d5e,	// (0x00033efd) bg_active_tab_pane_g1_cp4_srt

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp4_srt

0x2d67,	// (0x00033f06) bg_active_tab_pane_g3_cp4_srt

0x068a,	// (0x00031829) tabs_3_long_active_pane_srt_ParamLimits

0x068a,	// (0x00031829) tabs_3_long_active_pane_srt

0x068a,	// (0x00031829) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x068a,	// (0x00031829) tabs_3_long_passive_pane_cp_srt

0x068a,	// (0x00031829) tabs_3_long_passive_pane_srt_ParamLimits

0x068a,	// (0x00031829) tabs_3_long_passive_pane_srt

0x5688,	// (0x00036827) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5688,	// (0x00036827) bg_passive_tab_pane_cp5_srt

0x141a,	// (0x000325b9) bg_passive_tab_pane_g1_cp5_srt

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp5_srt

0x1423,	// (0x000325c2) bg_passive_tab_pane_g3_cp5_srt

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp5_srt_ParamLimits

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp5_srt

0x7b89,	// (0x00038d28) tabs_3_long_active_pane_srt_t1_ParamLimits

0x7b89,	// (0x00038d28) tabs_3_long_active_pane_srt_t1

0x141a,	// (0x000325b9) bg_active_tab_pane_g1_cp5_srt

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp5_srt

0x1423,	// (0x000325c2) bg_active_tab_pane_g3_cp5_srt

0x2d50,	// (0x00033eef) navi_text_pane_srt_t1

0x2d48,	// (0x00033ee7) navi_icon_pane_srt_g1

0x1819,	// (0x000329b8) midp_editing_number_pane_srt

0x172a,	// (0x000328c9) midp_ticker_pane_srt

0x1821,	// (0x000329c0) midp_ticker_pane_srt_g1

0x1829,	// (0x000329c8) midp_ticker_pane_srt_g2

0x0001,

0xf7b7,	// (0x00040956) midp_ticker_pane_srt_g

0x1831,	// (0x000329d0) midp_ticker_pane_srt_t1

0x2d39,	// (0x00033ed8) midp_editing_number_pane_t1_copy1

0x7012,	// (0x000381b1) listscroll_midp_pane

0x7012,	// (0x000381b1) midp_form_pane

0x1732,	// (0x000328d1) midp_info_popup_window_ParamLimits

0x1732,	// (0x000328d1) midp_info_popup_window

0x0da0,	// (0x00031f3f) bg_popup_sub_pane_cp50_ParamLimits

0x0da0,	// (0x00031f3f) bg_popup_sub_pane_cp50

0x1ffd,	// (0x0003319c) listscroll_midp_info_pane_ParamLimits

0x1ffd,	// (0x0003319c) listscroll_midp_info_pane

0x1fe5,	// (0x00033184) listscroll_form_midp_pane_ParamLimits

0x1fe5,	// (0x00033184) listscroll_form_midp_pane

0x1ff1,	// (0x00033190) scroll_bar_cp050

0x79d3,	// (0x00038b72) list_midp_pane

0x36d5,	// (0x00034874) signal_pane_g2_cp

0x1f17,	// (0x000330b6) listscroll_midp_info_pane_t1_ParamLimits

0x1f17,	// (0x000330b6) listscroll_midp_info_pane_t1

0x1f2f,	// (0x000330ce) listscroll_midp_info_pane_t2_ParamLimits

0x1f2f,	// (0x000330ce) listscroll_midp_info_pane_t2

0x1f6d,	// (0x0003310c) listscroll_midp_info_pane_t3_ParamLimits

0x1f6d,	// (0x0003310c) listscroll_midp_info_pane_t3

0x1fa7,	// (0x00033146) listscroll_midp_info_pane_t4_ParamLimits

0x1fa7,	// (0x00033146) listscroll_midp_info_pane_t4

0x0003,

0xf868,	// (0x00040a07) listscroll_midp_info_pane_t_ParamLimits

0xf868,	// (0x00040a07) listscroll_midp_info_pane_t

0x0e07,	// (0x00031fa6) scroll_pane_cp21

0x1ebb,	// (0x0003305a) form_midp_field_choice_group_pane

0x1ec4,	// (0x00033063) form_midp_field_text_pane

0x1efd,	// (0x0003309c) form_midp_field_time_pane

0x1f05,	// (0x000330a4) form_midp_gauge_slider_pane

0x1f0e,	// (0x000330ad) form_midp_gauge_wait_pane

0x063c,	// (0x000317db) form_midp_image_pane

0x483d,	// (0x000359dc) list_single_midp_pane_ParamLimits

0x483d,	// (0x000359dc) list_single_midp_pane

0x7994,	// (0x00038b33) form_midp_field_text_pane_t1

0x1d62,	// (0x00032f01) input_focus_pane_cp050

0x1eaa,	// (0x00033049) list_midp_form_text_pane

0x1e79,	// (0x00033018) form_midp_field_choice_group_pane_t1

0x1e87,	// (0x00033026) input_focus_pane_cp051

0x1e9b,	// (0x0003303a) list_midp_choice_pane

0x063c,	// (0x000317db) status_idle_pane

0x1e5d,	// (0x00032ffc) form_midp_field_time_pane_t1

0x0632,	// (0x000317d1) wait_anim_pane_g2_copy1

0x1e6b,	// (0x0003300a) form_midp_field_time_pane_t2

0x0001,

0x178b,	// (0x0003292a) aid_navinavi_width_2_pane

0xf863,	// (0x00040a02) form_midp_field_time_pane_t

0x063c,	// (0x000317db) input_focus_pane_cp052

0x063c,	// (0x000317db) bg_input_focus_pane_cp040

0x1e39,	// (0x00032fd8) form_midp_gauge_slider_pane_t1

0x1e47,	// (0x00032fe6) form_midp_gauge_slider_pane_t2

0x7978,	// (0x00038b17) form_midp_gauge_slider_pane_t3

0x7986,	// (0x00038b25) form_midp_gauge_slider_pane_t4

0x0003,

0xf85a,	// (0x000409f9) form_midp_gauge_slider_pane_t

0x1e55,	// (0x00032ff4) form_midp_slider_pane

0x0698,	// (0x00031837) bg_input_focus_pane_cp041_ParamLimits

0x0698,	// (0x00031837) bg_input_focus_pane_cp041

0x1e06,	// (0x00032fa5) form_midp_gauge_wait_pane_t1_ParamLimits

0x1e06,	// (0x00032fa5) form_midp_gauge_wait_pane_t1

0x1e18,	// (0x00032fb7) form_midp_gauge_wait_pane_t2_ParamLimits

0x1e18,	// (0x00032fb7) form_midp_gauge_wait_pane_t2

0x0001,

0xf855,	// (0x000409f4) form_midp_gauge_wait_pane_t_ParamLimits

0xf855,	// (0x000409f4) form_midp_gauge_wait_pane_t

0x1e2a,	// (0x00032fc9) form_midp_wait_pane_ParamLimits

0x1e2a,	// (0x00032fc9) form_midp_wait_pane

0x1dd0,	// (0x00032f6f) form_midp_image_pane_g1

0x1dd9,	// (0x00032f78) form_midp_image_pane_t1

0x1de8,	// (0x00032f87) form_midp_image_pane_t2

0x1df7,	// (0x00032f96) form_midp_image_pane_t3

0x0002,

0xf84e,	// (0x000409ed) form_midp_image_pane_t

0x1dc7,	// (0x00032f66) list_single_midp_pane_g1

0x482e,	// (0x000359cd) list_single_midp_pane_t1

0x7948,	// (0x00038ae7) list_midp_form_item_pane_ParamLimits

0x7948,	// (0x00038ae7) list_midp_form_item_pane

0x1745,	// (0x000328e4) list_midp_form_item_pane_t1

0x1754,	// (0x000328f3) midp_ticker_pane_g1

0x1760,	// (0x000328ff) midp_ticker_pane_g2

0x0001,

0xf79d,	// (0x0004093c) midp_ticker_pane_g

0x70c7,	// (0x00038266) midp_ticker_pane_t1

0x7d0a,	// (0x00038ea9) midp_editing_number_pane_t1

0x2dc7,	// (0x00033f66) midp_editing_number_pane

0x2dd6,	// (0x00033f75) midp_ticker_pane

0x2d29,	// (0x00033ec8) ai_message_heading_pane

0x063c,	// (0x000317db) bg_popup_window_pane_cp14

0x2d31,	// (0x00033ed0) listscroll_ai_message_pane

0x2cb3,	// (0x00033e52) ai_message_heading_pane_g1_ParamLimits

0x2cb3,	// (0x00033e52) ai_message_heading_pane_g1

0x2cbf,	// (0x00033e5e) ai_message_heading_pane_g2_ParamLimits

0x2cbf,	// (0x00033e5e) ai_message_heading_pane_g2

0x2ccb,	// (0x00033e6a) ai_message_heading_pane_g3_ParamLimits

0x2ccb,	// (0x00033e6a) ai_message_heading_pane_g3

0x2cd7,	// (0x00033e76) ai_message_heading_pane_g4_ParamLimits

0x2cd7,	// (0x00033e76) ai_message_heading_pane_g4

0x0003,

0xf98f,	// (0x00040b2e) ai_message_heading_pane_g_ParamLimits

0xf98f,	// (0x00040b2e) ai_message_heading_pane_g

0x2ce3,	// (0x00033e82) ai_message_heading_pane_t1_ParamLimits

0x2ce3,	// (0x00033e82) ai_message_heading_pane_t1

0x2cfd,	// (0x00033e9c) ai_message_heading_pane_t2_ParamLimits

0x2cfd,	// (0x00033e9c) ai_message_heading_pane_t2

0x0001,

0xf998,	// (0x00040b37) ai_message_heading_pane_t_ParamLimits

0xf998,	// (0x00040b37) ai_message_heading_pane_t

0x2d0f,	// (0x00033eae) bg_popup_heading_pane_cp1_ParamLimits

0x2d0f,	// (0x00033eae) bg_popup_heading_pane_cp1

0x2ca1,	// (0x00033e40) list_ai_message_pane_ParamLimits

0x2ca1,	// (0x00033e40) list_ai_message_pane

0x0e07,	// (0x00031fa6) scroll_pane_cp10

0x2c3d,	// (0x00033ddc) list_ai_message_pane_g1

0x2c45,	// (0x00033de4) list_ai_message_pane_g2

0x0001,

0xf96c,	// (0x00040b0b) list_ai_message_pane_g

0x2c4d,	// (0x00033dec) list_ai_message_pane_t1_ParamLimits

0x2c4d,	// (0x00033dec) list_ai_message_pane_t1

0x2c62,	// (0x00033e01) list_ai_message_pane_t2_ParamLimits

0x2c62,	// (0x00033e01) list_ai_message_pane_t2

0x2c77,	// (0x00033e16) list_ai_message_pane_t3_ParamLimits

0x2c77,	// (0x00033e16) list_ai_message_pane_t3

0x2c8c,	// (0x00033e2b) list_ai_message_pane_t4_ParamLimits

0x2c8c,	// (0x00033e2b) list_ai_message_pane_t4

0x0003,

0xf971,	// (0x00040b10) list_ai_message_pane_t_ParamLimits

0xf971,	// (0x00040b10) list_ai_message_pane_t

0x7b73,	// (0x00038d12) cell_ai_soft_ind_pane_ParamLimits

0x7b73,	// (0x00038d12) cell_ai_soft_ind_pane

0x176c,	// (0x0003290b) cell_ai_soft_ind_pane_g1_ParamLimits

0x176c,	// (0x0003290b) cell_ai_soft_ind_pane_g1

0x063c,	// (0x000317db) grid_highlight_cp1

0x1779,	// (0x00032918) text_secondary_cp56_ParamLimits

0x1779,	// (0x00032918) text_secondary_cp56

0x2c12,	// (0x00033db1) example_general_pane_ParamLimits

0x2c12,	// (0x00033db1) example_general_pane

0x2c1e,	// (0x00033dbd) example_parent_pane_g1_ParamLimits

0x2c1e,	// (0x00033dbd) example_parent_pane_g1

0x2c2a,	// (0x00033dc9) example_parent_pane_t1_ParamLimits

0x2c2a,	// (0x00033dc9) example_parent_pane_t1

0x73f3,	// (0x00038592) popup_preview_text_window_ParamLimits

0x73f3,	// (0x00038592) popup_preview_text_window

0x1659,	// (0x000327f8) list_single_pane_cp2_g4

0x0870,	// (0x00031a0f) bg_popup_preview_window_pane_ParamLimits

0x0870,	// (0x00031a0f) bg_popup_preview_window_pane

0x2993,	// (0x00033b32) popup_preview_text_window_t1_ParamLimits

0x2993,	// (0x00033b32) popup_preview_text_window_t1

0x29b1,	// (0x00033b50) popup_preview_text_window_t2_ParamLimits

0x29b1,	// (0x00033b50) popup_preview_text_window_t2

0x29fa,	// (0x00033b99) popup_preview_text_window_t3_ParamLimits

0x29fa,	// (0x00033b99) popup_preview_text_window_t3

0x2a3f,	// (0x00033bde) popup_preview_text_window_t4_ParamLimits

0x2a3f,	// (0x00033bde) popup_preview_text_window_t4

0x0004,

0xf940,	// (0x00040adf) popup_preview_text_window_t_ParamLimits

0xf940,	// (0x00040adf) popup_preview_text_window_t

0x2abd,	// (0x00033c5c) scroll_pane_cp11

0x1c72,	// (0x00032e11) bg_popup_preview_window_pane_g1

0x2953,	// (0x00033af2) bg_popup_preview_window_pane_g2

0x295b,	// (0x00033afa) bg_popup_preview_window_pane_g3

0x2963,	// (0x00033b02) bg_popup_preview_window_pane_g4

0x296b,	// (0x00033b0a) bg_popup_preview_window_pane_g5

0x2973,	// (0x00033b12) bg_popup_preview_window_pane_g6

0x297b,	// (0x00033b1a) bg_popup_preview_window_pane_g7

0x2983,	// (0x00033b22) bg_popup_preview_window_pane_g8

0xd219,	// (0x0003e3b8) aid_popup_width_pane

0x73d1,	// (0x00038570) popup_midp_note_alarm_window_ParamLimits

0x73d1,	// (0x00038570) popup_midp_note_alarm_window

0x0cdc,	// (0x00031e7b) data_form_pane_ParamLimits

0x4543,	// (0x000356e2) form_field_data_pane_g1

0x454d,	// (0x000356ec) form_field_data_pane_t1_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_ParamLimits

0x0cf6,	// (0x00031e95) data_form_wide_pane_ParamLimits

0x4567,	// (0x00035706) form_field_data_wide_pane_g1

0x4573,	// (0x00035712) form_field_data_wide_pane_t1_ParamLimits

0x0a63,	// (0x00031c02) input_focus_pane_cp6_ParamLimits

0x564d,	// (0x000367ec) input_popup_find_pane_g1_ParamLimits

0x564d,	// (0x000367ec) input_popup_find_pane_g1

0xd775,	// (0x0003e914) aid_navi_side_left_pane

0xd78a,	// (0x0003e929) aid_navi_side_right_pane

0x2458,	// (0x000335f7) bg_popup_window_pane_cp30_ParamLimits

0x2458,	// (0x000335f7) bg_popup_window_pane_cp30

0x24d2,	// (0x00033671) popup_midp_note_alarm_window_g1_ParamLimits

0x24d2,	// (0x00033671) popup_midp_note_alarm_window_g1

0x2502,	// (0x000336a1) popup_midp_note_alarm_window_t1_ParamLimits

0x2502,	// (0x000336a1) popup_midp_note_alarm_window_t1

0x25a3,	// (0x00033742) popup_midp_note_alarm_window_t2_ParamLimits

0x25a3,	// (0x00033742) popup_midp_note_alarm_window_t2

0x2651,	// (0x000337f0) popup_midp_note_alarm_window_t3_ParamLimits

0x2651,	// (0x000337f0) popup_midp_note_alarm_window_t3

0x2679,	// (0x00033818) popup_midp_note_alarm_window_t4_ParamLimits

0x2679,	// (0x00033818) popup_midp_note_alarm_window_t4

0x2699,	// (0x00033838) popup_midp_note_alarm_window_t5_ParamLimits

0x2699,	// (0x00033838) popup_midp_note_alarm_window_t5

0x000a,

0xf8dd,	// (0x00040a7c) popup_midp_note_alarm_window_t_ParamLimits

0xf8dd,	// (0x00040a7c) popup_midp_note_alarm_window_t

0x2745,	// (0x000338e4) wait_bar_pane_cp1_ParamLimits

0x2745,	// (0x000338e4) wait_bar_pane_cp1

0x063c,	// (0x000317db) wait_anim_pane_copy1

0x063c,	// (0x000317db) wait_border_pane_copy1

0x2170,	// (0x0003330f) wait_border_pane_g1_copy1

0x458d,	// (0x0003572c) form_field_popup_pane_g1

0x4595,	// (0x00035734) form_field_popup_pane_t1_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_cp7_ParamLimits

0x0d22,	// (0x00031ec1) list_form_pane_ParamLimits

0x45af,	// (0x0003574e) form_field_popup_wide_pane_g1

0x45b7,	// (0x00035756) form_field_popup_wide_pane_t1_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_cp8_ParamLimits

0x0d2e,	// (0x00031ecd) list_form_wide_pane_ParamLimits

0x2e6c,	// (0x0003400b) aid_size_cell_graphic_pane

0x4643,	// (0x000357e2) data_form_pane_t1_ParamLimits

0x489d,	// (0x00035a3c) data_form_wide_pane_t1_ParamLimits

0x763d,	// (0x000387dc) bg_status_flat_pane

0x524a,	// (0x000363e9) title_pane_t1_ParamLimits

0x0652,	// (0x000317f1) title_pane_t2_ParamLimits

0x0678,	// (0x00031817) title_pane_t3_ParamLimits

0xf59b,	// (0x0004073a) title_pane_t_ParamLimits

0x11b0,	// (0x0003234f) level_1_signal_ParamLimits

0x11bd,	// (0x0003235c) level_2_signal_ParamLimits

0x11ca,	// (0x00032369) level_3_signal_ParamLimits

0x11d7,	// (0x00032376) level_4_signal_ParamLimits

0x11e4,	// (0x00032383) level_5_signal_ParamLimits

0x11f1,	// (0x00032390) level_6_signal_ParamLimits

0x11fe,	// (0x0003239d) level_7_signal_ParamLimits

0x11b0,	// (0x0003234f) level_1_battery_ParamLimits

0x11bd,	// (0x0003235c) level_2_battery_ParamLimits

0x11ca,	// (0x00032369) level_3_battery_ParamLimits

0x11d7,	// (0x00032376) level_4_battery_ParamLimits

0x11e4,	// (0x00032383) level_5_battery_ParamLimits

0x11f1,	// (0x00032390) level_6_battery_ParamLimits

0x11fe,	// (0x0003239d) level_7_battery_ParamLimits

0x237b,	// (0x0003351a) bg_status_flat_pane_g1

0x2383,	// (0x00033522) bg_status_flat_pane_g2

0x238b,	// (0x0003352a) bg_status_flat_pane_g3

0x2393,	// (0x00033532) bg_status_flat_pane_g4

0x239b,	// (0x0003353a) bg_status_flat_pane_g5

0x23a3,	// (0x00033542) bg_status_flat_pane_g6

0x23ab,	// (0x0003354a) bg_status_flat_pane_g7

0x52ba,	// (0x00036459) tabs_3_active_pane_t1_ParamLimits

0x52ba,	// (0x00036459) tabs_3_passive_pane_t1_ParamLimits

0x52d4,	// (0x00036473) tabs_4_active_pane_t1_ParamLimits

0x52d4,	// (0x00036473) tabs_4_1_passive_pane_t1_ParamLimits

0x5663,	// (0x00036802) tabs_2_active_pane_t1_ParamLimits

0x5663,	// (0x00036802) tabs_2_passive_pane_t1_ParamLimits

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp4_ParamLimits

0x5675,	// (0x00036814) tabs_2_long_active_pane_t1_ParamLimits

0x5688,	// (0x00036827) bg_passive_tab_pane_cp4_ParamLimits

0xdce0,	// (0x0003ee7f) list_single_midp_graphic_pane_t1_ParamLimits

0x198c,	// (0x00032b2b) bg_active_tab_pane_cp5_ParamLimits

0x5694,	// (0x00036833) tabs_3_long_active_pane_t1_ParamLimits

0x5688,	// (0x00036827) bg_passive_tab_pane_cp5_ParamLimits

0xdce0,	// (0x0003ee7f) list_single_midp_graphic_pane_t1

0x763d,	// (0x000387dc) bg_status_flat_pane_ParamLimits

0x1b45,	// (0x00032ce4) indicator_pane_cp2_ParamLimits

0x1b45,	// (0x00032ce4) indicator_pane_cp2

0x7780,	// (0x0003891f) navi_pane_srt_ParamLimits

0x7780,	// (0x0003891f) navi_pane_srt

0x1b6d,	// (0x00032d0c) popup_clock_digital_analogue_window_cp1

0x06e5,	// (0x00031884) indicator_pane_t1

0x172a,	// (0x000328c9) copy_highlight_pane

0x172a,	// (0x000328c9) cursor_graphics_pane

0x172a,	// (0x000328c9) graphic_within_text_pane

0x172a,	// (0x000328c9) link_highlight_pane

0x2a80,	// (0x00033c1f) popup_preview_text_window_t5_ParamLimits

0x2a80,	// (0x00033c1f) popup_preview_text_window_t5

0x1793,	// (0x00032932) cursor_digital_pane

0x1793,	// (0x00032932) cursor_primary_pane

0x17a4,	// (0x00032943) cursor_primary_small_pane

0x17ac,	// (0x0003294b) cursor_secondary_pane

0x17b4,	// (0x00032953) cursor_title_pane

0x1793,	// (0x00032932) link_highlight_digital_pane

0x179b,	// (0x0003293a) link_highlight_primary_pane

0x17a4,	// (0x00032943) link_highlight_primary_small_pane

0x17ac,	// (0x0003294b) link_highlight_secondary_pane

0x17b4,	// (0x00032953) link_highlight_title_pane

0x1793,	// (0x00032932) copy_highlight_digital_pane

0x1793,	// (0x00032932) copy_highlight_primary_pane

0x17a4,	// (0x00032943) copy_highlight_primary_small_pane

0x17ac,	// (0x0003294b) copy_highlight_secondary_pane

0x17b4,	// (0x00032953) copy_highlight_title_pane

0x17ac,	// (0x0003294b) graphic_text_digital_pane

0x23fb,	// (0x0003359a) graphic_text_primary_pane

0x2404,	// (0x000335a3) graphic_text_primary_small_pane

0x17a4,	// (0x00032943) graphic_text_secondary_pane

0x1793,	// (0x00032932) graphic_text_title_pane

0x70d9,	// (0x00038278) cursor_primary_pane_g1

0x23ed,	// (0x0003358c) cursor_text_primary_t1

0x7a1b,	// (0x00038bba) cursor_primary_small_pane_g1

0x23df,	// (0x0003357e) cursor_text_primary_small_t1

0x7a11,	// (0x00038bb0) cursor_primary_small_pane_g1_copy1

0x23d1,	// (0x00033570) cursor_text_primary_small_t1_copy1

0x23c3,	// (0x00033562) cursor_text_title_t1

0x7a07,	// (0x00038ba6) cursor_title_pane_g1

0x70d9,	// (0x00038278) cursor_digital_pane_g1

0x17bc,	// (0x0003295b) cursor_text_digital_t1

0x2364,	// (0x00033503) link_highlight_primary_pane_g1

0x236c,	// (0x0003350b) link_highlight_primary_pane_t1

0x17ca,	// (0x00032969) link_highlight_primary_small_pane_g1

0x17d2,	// (0x00032971) link_highlight_primary_small_pane_t1

0x17ca,	// (0x00032969) link_highlight_secondary_pane_g1

0x17e1,	// (0x00032980) link_highlight_secondary_pane_t1

0x22d8,	// (0x00033477) link_highlight_title_pane_g1

0x22e0,	// (0x0003347f) link_highlight_title_pane_t1

0x22c1,	// (0x00033460) link_highlight_digital_pane_g1

0x22c9,	// (0x00033468) link_highlight_digital_pane_t1

0x21b5,	// (0x00033354) copy_highlight_primary_pane_g1

0x21bd,	// (0x0003335c) copy_highlight_primary_pane_t1

0x218f,	// (0x0003332e) copy_highlight_primary_small_pane_g1

0x21a6,	// (0x00033345) copy_highlight_primary_small_pane_t1

0x17f0,	// (0x0003298f) copy_highlight_secondary_pane_g1

0x17f8,	// (0x00032997) copy_highlight_secondary_pane_t1

0x218f,	// (0x0003332e) copy_highlight_title_pane_g1

0x2197,	// (0x00033336) copy_highlight_title_pane_t1

0x21b5,	// (0x00033354) copy_highlight_digital_pane_g1

0x2ff6,	// (0x00034195) copy_highlight_digital_pane_t1

0x2f4a,	// (0x000340e9) graphic_text_primary_pane_g1

0x2fda,	// (0x00034179) graphic_text_primary_pane_t1

0x2fe8,	// (0x00034187) graphic_text_primary_pane_t2

0x0001,

0xfa0c,	// (0x00040bab) graphic_text_primary_pane_t

0x2fb6,	// (0x00034155) graphic_text_primary_small_pane_g1

0x2fbe,	// (0x0003415d) graphic_text_primary_small_pane_t1

0x2fcc,	// (0x0003416b) graphic_text_primary_small_pane_t2

0x0001,

0xfa07,	// (0x00040ba6) graphic_text_primary_small_pane_t

0x2f92,	// (0x00034131) graphic_text_secondary_pane_g1

0x2f9a,	// (0x00034139) graphic_text_secondary_pane_t1

0x2fa8,	// (0x00034147) graphic_text_secondary_pane_t2

0x0001,

0xfa02,	// (0x00040ba1) graphic_text_secondary_pane_t

0x2f6e,	// (0x0003410d) graphic_text_title_pane_g1

0x2f76,	// (0x00034115) graphic_text_title_pane_t1

0x2f84,	// (0x00034123) graphic_text_title_pane_t2

0x0001,

0xf9fd,	// (0x00040b9c) graphic_text_title_pane_t

0x2f4a,	// (0x000340e9) graphic_text_digital_pane_g1

0x2f52,	// (0x000340f1) graphic_text_digital_pane_t1

0x2f60,	// (0x000340ff) graphic_text_digital_pane_t2

0x0001,

0xf9f8,	// (0x00040b97) graphic_text_digital_pane_t

0x0698,	// (0x00031837) navi_icon_pane_srt_ParamLimits

0x0698,	// (0x00031837) navi_icon_pane_srt

0x063c,	// (0x000317db) navi_midp_pane_srt

0x063c,	// (0x000317db) navi_navi_pane_srt

0x0698,	// (0x00031837) navi_text_pane_srt_ParamLimits

0x0698,	// (0x00031837) navi_text_pane_srt

0x2f15,	// (0x000340b4) navi_navi_icon_text_pane_srt

0x2f2f,	// (0x000340ce) navi_navi_pane_srt_g1_ParamLimits

0x2f2f,	// (0x000340ce) navi_navi_pane_srt_g1

0x2f1d,	// (0x000340bc) navi_navi_pane_srt_g2_ParamLimits

0x2f1d,	// (0x000340bc) navi_navi_pane_srt_g2

0x0001,

0xf9f3,	// (0x00040b92) navi_navi_pane_srt_g_ParamLimits

0xf9f3,	// (0x00040b92) navi_navi_pane_srt_g

0x2f41,	// (0x000340e0) navi_navi_tabs_pane_srt

0x2f15,	// (0x000340b4) navi_navi_text_pane_srt

0x2f15,	// (0x000340b4) navi_navi_volume_pane_srt

0x2f06,	// (0x000340a5) navi_navi_text_pane_srt_t1

0xe060,	// (0x0003f1ff) navi_navi_volume_pane_srt_g1

0xe068,	// (0x0003f207) volume_small_pane_srt_ParamLimits

0xe068,	// (0x0003f207) volume_small_pane_srt

0xda55,	// (0x0003ebf4) volume_small_pane_srt_g1_ParamLimits

0xda55,	// (0x0003ebf4) volume_small_pane_srt_g1

0xda65,	// (0x0003ec04) volume_small_pane_srt_g2_ParamLimits

0xda65,	// (0x0003ec04) volume_small_pane_srt_g2

0xda76,	// (0x0003ec15) volume_small_pane_srt_g3_ParamLimits

0xda76,	// (0x0003ec15) volume_small_pane_srt_g3

0xda87,	// (0x0003ec26) volume_small_pane_srt_g4_ParamLimits

0xda87,	// (0x0003ec26) volume_small_pane_srt_g4

0xda98,	// (0x0003ec37) volume_small_pane_srt_g5_ParamLimits

0xda98,	// (0x0003ec37) volume_small_pane_srt_g5

0xdaa9,	// (0x0003ec48) volume_small_pane_srt_g6_ParamLimits

0xdaa9,	// (0x0003ec48) volume_small_pane_srt_g6

0xdaba,	// (0x0003ec59) volume_small_pane_srt_g7_ParamLimits

0xdaba,	// (0x0003ec59) volume_small_pane_srt_g7

0xdacb,	// (0x0003ec6a) volume_small_pane_srt_g8_ParamLimits

0xdacb,	// (0x0003ec6a) volume_small_pane_srt_g8

0xdadc,	// (0x0003ec7b) volume_small_pane_srt_g9_ParamLimits

0xdadc,	// (0x0003ec7b) volume_small_pane_srt_g9

0xdaed,	// (0x0003ec8c) volume_small_pane_srt_g10_ParamLimits

0xdaed,	// (0x0003ec8c) volume_small_pane_srt_g10

0x0009,

0xf7a2,	// (0x00040941) volume_small_pane_srt_g_ParamLimits

0xf7a2,	// (0x00040941) volume_small_pane_srt_g

0x0919,	// (0x00031ab8) query_popup_data_pane_cp2

0x2eec,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2eec,	// (0x0003408b) navi_navi_icon_text_pane_srt_t1

0x23fb,	// (0x0003359a) navi_tabs_2_long_pane_srt

0x23fb,	// (0x0003359a) navi_tabs_2_pane_srt

0x23fb,	// (0x0003359a) navi_tabs_3_long_pane_srt

0x23fb,	// (0x0003359a) navi_tabs_3_pane_srt

0x23fb,	// (0x0003359a) navi_tabs_4_pane_srt

0xe040,	// (0x0003f1df) tabs_2_active_pane_srt_ParamLimits

0xe040,	// (0x0003f1df) tabs_2_active_pane_srt

0xe050,	// (0x0003f1ef) tabs_2_passive_pane_srt_ParamLimits

0xe050,	// (0x0003f1ef) tabs_2_passive_pane_srt

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp1_srt

0x2eca,	// (0x00034069) bg_passive_tab_pane_g1_cp1_srt

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp1_srt

0x2ed3,	// (0x00034072) bg_passive_tab_pane_g3_cp1_srt

0x0698,	// (0x00031837) bg_active_tab_pane_cp1_srt_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp1_srt

0x2edc,	// (0x0003407b) tabs_2_active_pane_srt_g1

0x7dcb,	// (0x00038f6a) tabs_2_active_pane_srt_t1_ParamLimits

0x7dcb,	// (0x00038f6a) tabs_2_active_pane_srt_t1

0x2eca,	// (0x00034069) bg_active_tab_pane_g1_cp1_srt

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp1_srt

0x2ed3,	// (0x00034072) bg_active_tab_pane_g3_cp1_srt

0xe00d,	// (0x0003f1ac) tabs_3_active_pane_srt_ParamLimits

0xe00d,	// (0x0003f1ac) tabs_3_active_pane_srt

0xe01e,	// (0x0003f1bd) tabs_3_passive_pane_cp_srt_ParamLimits

0xe01e,	// (0x0003f1bd) tabs_3_passive_pane_cp_srt

0xe02f,	// (0x0003f1ce) tabs_3_passive_pane_srt_ParamLimits

0xe02f,	// (0x0003f1ce) tabs_3_passive_pane_srt

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0e3f,	// (0x00031fde) bg_passive_tab_pane_cp2_srt

0x1807,	// (0x000329a6) bg_passive_tab_pane_g1_cp2_srt

0x13d3,	// (0x00032572) bg_passive_tab_pane_g2_cp2_srt

0x1810,	// (0x000329af) bg_passive_tab_pane_g3_cp2_srt

0x0698,	// (0x00031837) bg_active_tab_pane_cp2_srt_ParamLimits

0x0698,	// (0x00031837) bg_active_tab_pane_cp2_srt

0x2ec2,	// (0x00034061) tabs_3_active_pane_srt_g1

0x7db9,	// (0x00038f58) tabs_3_active_pane_srt_t1_ParamLimits

0x7db9,	// (0x00038f58) tabs_3_active_pane_srt_t1

0x1807,	// (0x000329a6) bg_active_tab_pane_g1_cp2_srt

0x13d3,	// (0x00032572) bg_active_tab_pane_g2_cp2_srt

0x1810,	// (0x000329af) bg_active_tab_pane_g3_cp2_srt

0xdfc5,	// (0x0003f164) tabs_4_active_pane_srt_ParamLimits

0xdfc5,	// (0x0003f164) tabs_4_active_pane_srt

0xdfd7,	// (0x0003f176) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdfd7,	// (0x0003f176) tabs_4_passive_pane_cp2_srt

0x1934,	// (0x00032ad3) aid_size_cell_toolbar

0x5688,	// (0x00036827) main_idle_act_pane_ParamLimits

0x1a0c,	// (0x00032bab) popup_large_graphic_colour_window_ParamLimits

0x7545,	// (0x000386e4) popup_toolbar_window_ParamLimits

0x7545,	// (0x000386e4) popup_toolbar_window

0x2de9,	// (0x00033f88) list_single_graphic_2heading_pane_ParamLimits

0x2de9,	// (0x00033f88) list_single_graphic_2heading_pane

0x0fe9,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane

0x0ffb,	// (0x0003219a) aid_size_cell_apps_grid_prt_pane

0x0e3f,	// (0x00031fde) bg_wml_button_pane_cp1_ParamLimits

0x0e3f,	// (0x00031fde) bg_wml_button_pane_cp1

0x7994,	// (0x00038b33) form_midp_field_text_pane_t1_ParamLimits

0x1d62,	// (0x00032f01) input_focus_pane_cp050_ParamLimits

0x1eaa,	// (0x00033049) list_midp_form_text_pane_ParamLimits

0x1e87,	// (0x00033026) input_focus_pane_cp051_ParamLimits

0x1e9b,	// (0x0003303a) list_midp_choice_pane_ParamLimits

0x78e2,	// (0x00038a81) list_single_2graphic_pane_cp3_ParamLimits

0x78e2,	// (0x00038a81) list_single_2graphic_pane_cp3

0x790e,	// (0x00038aad) list_single_midp_graphic_pane_ParamLimits

0x790e,	// (0x00038aad) list_single_midp_graphic_pane

0xd1a1,	// (0x0003e340) list_single_graphic_2heading_pane_g1_ParamLimits

0xd1a1,	// (0x0003e340) list_single_graphic_2heading_pane_g1

0xd1ad,	// (0x0003e34c) list_single_graphic_2heading_pane_g4_ParamLimits

0xd1ad,	// (0x0003e34c) list_single_graphic_2heading_pane_g4

0xd1b9,	// (0x0003e358) list_single_graphic_2heading_pane_g5_ParamLimits

0xd1b9,	// (0x0003e358) list_single_graphic_2heading_pane_g5

0x0002,

0xf7f5,	// (0x00040994) list_single_graphic_2heading_pane_g_ParamLimits

0xf7f5,	// (0x00040994) list_single_graphic_2heading_pane_g

0xd1c5,	// (0x0003e364) list_single_graphic_2heading_pane_t1_ParamLimits

0xd1c5,	// (0x0003e364) list_single_graphic_2heading_pane_t1

0xd1d9,	// (0x0003e378) list_single_graphic_2heading_pane_t2_ParamLimits

0xd1d9,	// (0x0003e378) list_single_graphic_2heading_pane_t2

0xd1f5,	// (0x0003e394) list_single_graphic_2heading_pane_t3_ParamLimits

0xd1f5,	// (0x0003e394) list_single_graphic_2heading_pane_t3

0x0002,

0xf7fc,	// (0x0004099b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7fc,	// (0x0004099b) list_single_graphic_2heading_pane_t

0x1bb0,	// (0x00032d4f) bg_popup_sub_pane_cp2

0x1bda,	// (0x00032d79) grid_toobar_pane

0xdc51,	// (0x0003edf0) cell_toolbar_pane_ParamLimits

0xdc51,	// (0x0003edf0) cell_toolbar_pane

0x1c16,	// (0x00032db5) cell_toolbar_pane_g1_ParamLimits

0x1c16,	// (0x00032db5) cell_toolbar_pane_g1

0x1c2a,	// (0x00032dc9) cell_toolbar_pane_g2_ParamLimits

0x1c2a,	// (0x00032dc9) cell_toolbar_pane_g2

0x0001,

0xf80a,	// (0x000409a9) cell_toolbar_pane_g_ParamLimits

0xf80a,	// (0x000409a9) cell_toolbar_pane_g

0x1c4c,	// (0x00032deb) grid_highlight_pane_cp2_ParamLimits

0x1c4c,	// (0x00032deb) grid_highlight_pane_cp2

0x1c66,	// (0x00032e05) toolbar_button_pane

0x1c72,	// (0x00032e11) toolbar_button_pane_g1

0x1c7a,	// (0x00032e19) toolbar_button_pane_g2

0x1c82,	// (0x00032e21) toolbar_button_pane_g3

0x1c8a,	// (0x00032e29) toolbar_button_pane_g4

0x1c92,	// (0x00032e31) toolbar_button_pane_g5

0x1c9a,	// (0x00032e39) toolbar_button_pane_g6

0x1ca2,	// (0x00032e41) toolbar_button_pane_g7

0x1caa,	// (0x00032e49) toolbar_button_pane_g8

0x1cb2,	// (0x00032e51) toolbar_button_pane_g9

0x0009,

0xf80f,	// (0x000409ae) toolbar_button_pane_g

0xdc89,	// (0x0003ee28) list_single_2graphic_pane_g1_cp3_ParamLimits

0xdc89,	// (0x0003ee28) list_single_2graphic_pane_g1_cp3

0xdc95,	// (0x0003ee34) list_single_2graphic_pane_g2_cp3_ParamLimits

0xdc95,	// (0x0003ee34) list_single_2graphic_pane_g2_cp3

0xdca6,	// (0x0003ee45) list_single_2graphic_pane_g3_cp3

0xdcae,	// (0x0003ee4d) list_single_2graphic_pane_g4_cp3_ParamLimits

0xdcae,	// (0x0003ee4d) list_single_2graphic_pane_g4_cp3

0xdcba,	// (0x0003ee59) list_single_2graphic_pane_t1_cp3_ParamLimits

0xdcba,	// (0x0003ee59) list_single_2graphic_pane_t1_cp3

0xdcd4,	// (0x0003ee73) list_single_midp_graphic_pane_g2_ParamLimits

0xdcd4,	// (0x0003ee73) list_single_midp_graphic_pane_g2

0x475e,	// (0x000358fd) aid_zoom_text_primary

0x4766,	// (0x00035905) aid_zoom_text_secondary

0x18c4,	// (0x00032a63) status_small_pane_g7_ParamLimits

0x18c4,	// (0x00032a63) status_small_pane_g7

0x18e7,	// (0x00032a86) status_small_pane_t1_ParamLimits

0x522d,	// (0x000363cc) title_pane_g2

0x0003,

0xf592,	// (0x00040731) title_pane_g

0x5487,	// (0x00036626) aid_size_cell_colour_1_pane_ParamLimits

0x5487,	// (0x00036626) aid_size_cell_colour_1_pane

0x549b,	// (0x0003663a) aid_size_cell_colour_2_pane_ParamLimits

0x549b,	// (0x0003663a) aid_size_cell_colour_2_pane

0x54af,	// (0x0003664e) aid_size_cell_colour_3_pane_ParamLimits

0x54af,	// (0x0003664e) aid_size_cell_colour_3_pane

0x54c3,	// (0x00036662) aid_size_cell_colour_4_pane_ParamLimits

0x54c3,	// (0x00036662) aid_size_cell_colour_4_pane

0xd6b1,	// (0x0003e850) title_pane_stacon_g1_ParamLimits

0xd6b1,	// (0x0003e850) title_pane_stacon_g1

0x2214,	// (0x000333b3) popup_note_wait_window_g3_ParamLimits

0x2214,	// (0x000333b3) popup_note_wait_window_g3

0x228a,	// (0x00033429) popup_note_wait_window_t5_ParamLimits

0x228a,	// (0x00033429) popup_note_wait_window_t5

0x063c,	// (0x000317db) main_feb_china_hwr_fs_writing_pane

0x716e,	// (0x0003830d) popup_feb_china_hwr_fs_window_ParamLimits

0x716e,	// (0x0003830d) popup_feb_china_hwr_fs_window

0xdcf6,	// (0x0003ee95) aid_size_cell_hwr_fs_ParamLimits

0xdcf6,	// (0x0003ee95) aid_size_cell_hwr_fs

0x1d62,	// (0x00032f01) bg_popup_sub_pane_cp3_ParamLimits

0x1d62,	// (0x00032f01) bg_popup_sub_pane_cp3

0xdd0b,	// (0x0003eeaa) grid_hwr_fs_pane_ParamLimits

0xdd0b,	// (0x0003eeaa) grid_hwr_fs_pane

0xdd23,	// (0x0003eec2) linegrid_hwr_fs_pane_ParamLimits

0xdd23,	// (0x0003eec2) linegrid_hwr_fs_pane

0xdd33,	// (0x0003eed2) cell_hwr_fs_pane_ParamLimits

0xdd33,	// (0x0003eed2) cell_hwr_fs_pane

0x1d6e,	// (0x00032f0d) linegrid_hwr_fs_pane_g1_ParamLimits

0x1d6e,	// (0x00032f0d) linegrid_hwr_fs_pane_g1

0x78b6,	// (0x00038a55) linegrid_hwr_fs_pane_g2_ParamLimits

0x78b6,	// (0x00038a55) linegrid_hwr_fs_pane_g2

0x1d7a,	// (0x00032f19) linegrid_hwr_fs_pane_g3_ParamLimits

0x1d7a,	// (0x00032f19) linegrid_hwr_fs_pane_g3

0xdd55,	// (0x0003eef4) linegrid_hwr_fs_pane_g4_ParamLimits

0xdd55,	// (0x0003eef4) linegrid_hwr_fs_pane_g4

0xdd6f,	// (0x0003ef0e) linegrid_hwr_fs_pane_g5_ParamLimits

0xdd6f,	// (0x0003ef0e) linegrid_hwr_fs_pane_g5

0x0004,

0xf83a,	// (0x000409d9) linegrid_hwr_fs_pane_g_ParamLimits

0xf83a,	// (0x000409d9) linegrid_hwr_fs_pane_g

0x1d86,	// (0x00032f25) cell_hwr_fs_pane_g1_ParamLimits

0x1d86,	// (0x00032f25) cell_hwr_fs_pane_g1

0x1b7e,	// (0x00032d1d) cell_hwr_fs_pane_g2_ParamLimits

0x1b7e,	// (0x00032d1d) cell_hwr_fs_pane_g2

0x78c8,	// (0x00038a67) cell_hwr_fs_pane_g3_ParamLimits

0x78c8,	// (0x00038a67) cell_hwr_fs_pane_g3

0x78d5,	// (0x00038a74) cell_hwr_fs_pane_g4_ParamLimits

0x78d5,	// (0x00038a74) cell_hwr_fs_pane_g4

0x0003,

0xf845,	// (0x000409e4) cell_hwr_fs_pane_g_ParamLimits

0xf845,	// (0x000409e4) cell_hwr_fs_pane_g

0xdd85,	// (0x0003ef24) cell_hwr_fs_pane_t1

0x063c,	// (0x000317db) grid_highlight_pane_cp6

0x063c,	// (0x000317db) main_idle_act2_pane

0x0dee,	// (0x00031f8d) aid_inside_area_popup_secondary

0x7a3b,	// (0x00038bda) aid_inside_area_window_primary_ParamLimits

0x7a3b,	// (0x00038bda) aid_inside_area_window_primary

0x3005,	// (0x000341a4) ai2_news_ticker_pane

0x300d,	// (0x000341ac) aid_size_cell_ai1_link_ParamLimits

0x300d,	// (0x000341ac) aid_size_cell_ai1_link

0x3027,	// (0x000341c6) popup_ai2_data_window_ParamLimits

0x3027,	// (0x000341c6) popup_ai2_data_window

0x303b,	// (0x000341da) popup_ai2_link_window_ParamLimits

0x303b,	// (0x000341da) popup_ai2_link_window

0x1d62,	// (0x00032f01) bg_popup_sub_pane_cp4_ParamLimits

0x1d62,	// (0x00032f01) bg_popup_sub_pane_cp4

0x304f,	// (0x000341ee) grid_ai2_link_pane_ParamLimits

0x304f,	// (0x000341ee) grid_ai2_link_pane

0x3066,	// (0x00034205) popup_ai2_link_window_g1_ParamLimits

0x3066,	// (0x00034205) popup_ai2_link_window_g1

0x3072,	// (0x00034211) popup_ai2_link_window_g2_ParamLimits

0x3072,	// (0x00034211) popup_ai2_link_window_g2

0x0001,

0xfa11,	// (0x00040bb0) popup_ai2_link_window_g_ParamLimits

0xfa11,	// (0x00040bb0) popup_ai2_link_window_g

0x3081,	// (0x00034220) ai2_mp_button_pane

0x3089,	// (0x00034228) ai2_mp_volume_pane

0x1e87,	// (0x00033026) bg_popup_sub_pane_cp5_ParamLimits

0x1e87,	// (0x00033026) bg_popup_sub_pane_cp5

0x3091,	// (0x00034230) heading_ai2_gene_pane_ParamLimits

0x3091,	// (0x00034230) heading_ai2_gene_pane

0x309d,	// (0x0003423c) list_ai2_gene_pane_ParamLimits

0x309d,	// (0x0003423c) list_ai2_gene_pane

0x30e5,	// (0x00034284) cell_ai2_link_pane_ParamLimits

0x30e5,	// (0x00034284) cell_ai2_link_pane

0x30fb,	// (0x0003429a) cell_ai2_link_pane_g1

0x063c,	// (0x000317db) grid_highlight_pane_cp7

0xe07d,	// (0x0003f21c) ai2_mp_volume_pane_g1

0x31d4,	// (0x00034373) ai2_mp_volume_pane_g2

0x3141,	// (0x000342e0) list_ai2_gene_pane_t1

0x31cc,	// (0x0003436b) ai2_mp_volume_pane_g3

0x0002,

0xfa2a,	// (0x00040bc9) ai2_mp_volume_pane_g

0xe085,	// (0x0003f224) volume_small_pane_cp3

0x31dc,	// (0x0003437b) aid_size_cell_ai2_button

0x31e4,	// (0x00034383) grid_ai2_button_pane

0x31ed,	// (0x0003438c) cell_ai2_button_pane_ParamLimits

0x31ed,	// (0x0003438c) cell_ai2_button_pane

0x0632,	// (0x000317d1) cell_ai2_button_pane_g1

0x063c,	// (0x000317db) grid_highlight_pane_cp8

0x318c,	// (0x0003432b) ai2_gene_pane_t1_ParamLimits

0x318c,	// (0x0003432b) ai2_gene_pane_t1

0x710a,	// (0x000382a9) aid_height_parent_landscape

0x7bae,	// (0x00038d4d) aid_height_set_list

0x2be0,	// (0x00033d7f) aid_size_parent

0x2e6c,	// (0x0003400b) aid_size_cell_graphic_pane_ParamLimits

0x30ad,	// (0x0003424c) popup_ai2_data_window_g1_ParamLimits

0x30ad,	// (0x0003424c) popup_ai2_data_window_g1

0x30b9,	// (0x00034258) ai2_news_ticker_pane_g1

0x30c1,	// (0x00034260) ai2_news_ticker_pane_g2

0x0001,

0xfa16,	// (0x00040bb5) ai2_news_ticker_pane_g

0x30c9,	// (0x00034268) ai2_news_ticker_pane_t1

0x30d7,	// (0x00034276) ai2_news_ticker_pane_t2

0x0001,

0xfa1b,	// (0x00040bba) ai2_news_ticker_pane_t

0x3104,	// (0x000342a3) heading_ai2_gene_pane_g1

0x310c,	// (0x000342ab) heading_ai2_gene_pane_t1_ParamLimits

0x310c,	// (0x000342ab) heading_ai2_gene_pane_t1

0x3121,	// (0x000342c0) list_highlight_pane_cp6

0x3129,	// (0x000342c8) ai2_gene_pane_ParamLimits

0x3129,	// (0x000342c8) ai2_gene_pane

0x314f,	// (0x000342ee) list_ai2_gene_pane_t2

0x0001,

0xfa20,	// (0x00040bbf) list_ai2_gene_pane_t

0x315d,	// (0x000342fc) list_highlight_pane_cp8_ParamLimits

0x315d,	// (0x000342fc) list_highlight_pane_cp8

0x316e,	// (0x0003430d) ai2_gene_pane_g1_ParamLimits

0x316e,	// (0x0003430d) ai2_gene_pane_g1

0x3180,	// (0x0003431f) ai2_gene_pane_g2_ParamLimits

0x3180,	// (0x0003431f) ai2_gene_pane_g2

0x0001,

0xfa25,	// (0x00040bc4) ai2_gene_pane_g_ParamLimits

0xfa25,	// (0x00040bc4) ai2_gene_pane_g

0x0c7e,	// (0x00031e1d) scroll_pane_cp12

0xdc10,	// (0x0003edaf) control_pane_t3_ParamLimits

0xdc10,	// (0x0003edaf) control_pane_t3

0x18d8,	// (0x00032a77) status_small_pane_g8_ParamLimits

0x18d8,	// (0x00032a77) status_small_pane_g8

0x71f8,	// (0x00038397) popup_find_window_ParamLimits

0x73e5,	// (0x00038584) popup_note_image_window_ParamLimits

0x47e2,	// (0x00035981) list_double2_graphic_pane_vc_g1_ParamLimits

0x47e2,	// (0x00035981) list_double2_graphic_pane_vc_g1

0x555b,	// (0x000366fa) list_double2_graphic_pane_vc_g2_ParamLimits

0x555b,	// (0x000366fa) list_double2_graphic_pane_vc_g2

0x5567,	// (0x00036706) list_double2_graphic_pane_vc_g3_ParamLimits

0x5567,	// (0x00036706) list_double2_graphic_pane_vc_g3

0x0002,

0xf803,	// (0x000409a2) list_double2_graphic_pane_vc_g_ParamLimits

0xf803,	// (0x000409a2) list_double2_graphic_pane_vc_g

0x47ee,	// (0x0003598d) list_double2_graphic_pane_vc_t1_ParamLimits

0x47ee,	// (0x0003598d) list_double2_graphic_pane_vc_t1

0x555b,	// (0x000366fa) list_single_heading_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_single_heading_pane_vc_g1

0x5567,	// (0x00036706) list_single_heading_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_single_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_single_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_single_heading_pane_vc_g

0x4804,	// (0x000359a3) list_single_heading_pane_vc_t1_ParamLimits

0x4804,	// (0x000359a3) list_single_heading_pane_vc_t1

0x481a,	// (0x000359b9) list_single_heading_pane_vc_t2_ParamLimits

0x481a,	// (0x000359b9) list_single_heading_pane_vc_t2

0x0001,

0xf829,	// (0x000409c8) list_single_heading_pane_vc_t_ParamLimits

0xf829,	// (0x000409c8) list_single_heading_pane_vc_t

0x1cba,	// (0x00032e59) list_setting_number_pane_vc_g1_ParamLimits

0x1cba,	// (0x00032e59) list_setting_number_pane_vc_g1

0x1cc6,	// (0x00032e65) list_setting_number_pane_vc_g2_ParamLimits

0x1cc6,	// (0x00032e65) list_setting_number_pane_vc_g2

0x0001,

0xf82e,	// (0x000409cd) list_setting_number_pane_vc_g_ParamLimits

0xf82e,	// (0x000409cd) list_setting_number_pane_vc_g

0x1cd2,	// (0x00032e71) list_setting_number_pane_vc_t1_ParamLimits

0x1cd2,	// (0x00032e71) list_setting_number_pane_vc_t1

0x1ce6,	// (0x00032e85) list_setting_number_pane_vc_t2_ParamLimits

0x1ce6,	// (0x00032e85) list_setting_number_pane_vc_t2

0x1d02,	// (0x00032ea1) list_setting_number_pane_vc_t3_ParamLimits

0x1d02,	// (0x00032ea1) list_setting_number_pane_vc_t3

0x0002,

0xf833,	// (0x000409d2) list_setting_number_pane_vc_t_ParamLimits

0xf833,	// (0x000409d2) list_setting_number_pane_vc_t

0x1d2a,	// (0x00032ec9) set_value_pane_vc_ParamLimits

0x1d2a,	// (0x00032ec9) set_value_pane_vc

0x2de9,	// (0x00033f88) list_double2_graphic_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double2_graphic_pane_vc

0x2de9,	// (0x00033f88) list_double2_large_graphic_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double2_large_graphic_pane_vc

0x2de9,	// (0x00033f88) list_double2_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double2_pane_vc

0x2de9,	// (0x00033f88) list_double_graphic_heading_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_graphic_heading_pane_vc

0x2de9,	// (0x00033f88) list_double_graphic_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_graphic_pane_vc

0x2de9,	// (0x00033f88) list_double_heading_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_heading_pane_vc

0x2de9,	// (0x00033f88) list_double_large_graphic_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_large_graphic_pane_vc

0x2de9,	// (0x00033f88) list_double_number_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_number_pane_vc

0x2de9,	// (0x00033f88) list_double_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_pane_vc

0x2de9,	// (0x00033f88) list_double_time_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_double_time_pane_vc

0x2de9,	// (0x00033f88) list_setting_number_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_setting_number_pane_vc

0x2de9,	// (0x00033f88) list_setting_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_setting_pane_vc

0x2de9,	// (0x00033f88) list_single_graphic_heading_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_single_graphic_heading_pane_vc

0x2de9,	// (0x00033f88) list_single_heading_pane_vc_ParamLimits

0x2de9,	// (0x00033f88) list_single_heading_pane_vc

0x616f,	// (0x0003730e) list_single_number_heading_pane_vc_ParamLimits

0x616f,	// (0x0003730e) list_single_number_heading_pane_vc

0x47e2,	// (0x00035981) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x47e2,	// (0x00035981) list_double_graphic_heading_pane_vc_g1

0x555b,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x555b,	// (0x000366fa) list_double_graphic_heading_pane_vc_g2

0x5567,	// (0x00036706) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5567,	// (0x00036706) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf803,	// (0x000409a2) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x000409a2) list_double_graphic_heading_pane_vc_g

0x4921,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4921,	// (0x00035ac0) list_double_graphic_heading_pane_vc_t1

0x4804,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4804,	// (0x000359a3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa31,	// (0x00040bd0) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00040bd0) list_double_graphic_heading_pane_vc_t

0x1cba,	// (0x00032e59) list_setting_pane_vc_g1_ParamLimits

0x1cba,	// (0x00032e59) list_setting_pane_vc_g1

0x1cc6,	// (0x00032e65) list_setting_pane_vc_g2_ParamLimits

0x1cc6,	// (0x00032e65) list_setting_pane_vc_g2

0x0001,

0xf82e,	// (0x000409cd) list_setting_pane_vc_g_ParamLimits

0xf82e,	// (0x000409cd) list_setting_pane_vc_g

0x33e3,	// (0x00034582) list_setting_pane_vc_t1_ParamLimits

0x33e3,	// (0x00034582) list_setting_pane_vc_t1

0x33f7,	// (0x00034596) list_setting_pane_vc_t2_ParamLimits

0x33f7,	// (0x00034596) list_setting_pane_vc_t2

0x0001,

0xfa74,	// (0x00040c13) list_setting_pane_vc_t_ParamLimits

0xfa74,	// (0x00040c13) list_setting_pane_vc_t

0x1d2a,	// (0x00032ec9) set_value_pane_cp_vc_ParamLimits

0x1d2a,	// (0x00032ec9) set_value_pane_cp_vc

0x555b,	// (0x000366fa) list_single_number_heading_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_single_number_heading_pane_vc_g1

0x5567,	// (0x00036706) list_single_number_heading_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_single_number_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_single_number_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_single_number_heading_pane_vc_g

0x4804,	// (0x000359a3) list_single_number_heading_pane_vc_t1_ParamLimits

0x4804,	// (0x000359a3) list_single_number_heading_pane_vc_t1

0x4935,	// (0x00035ad4) list_single_number_heading_pane_vc_t2_ParamLimits

0x4935,	// (0x00035ad4) list_single_number_heading_pane_vc_t2

0x4949,	// (0x00035ae8) list_single_number_heading_pane_vc_t3_ParamLimits

0x4949,	// (0x00035ae8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa79,	// (0x00040c18) list_single_number_heading_pane_vc_t_ParamLimits

0xfa79,	// (0x00040c18) list_single_number_heading_pane_vc_t

0x47e2,	// (0x00035981) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x47e2,	// (0x00035981) list_single_graphic_heading_pane_vc_g1

0x555b,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x555b,	// (0x000366fa) list_single_graphic_heading_pane_vc_g4

0x5567,	// (0x00036706) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5567,	// (0x00036706) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf803,	// (0x000409a2) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf803,	// (0x000409a2) list_single_graphic_heading_pane_vc_g

0x4804,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4804,	// (0x000359a3) list_single_graphic_heading_pane_vc_t1

0x495b,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x495b,	// (0x00035afa) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x00040c1f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x00040c1f) list_single_graphic_heading_pane_vc_t

0x555b,	// (0x000366fa) list_double2_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_double2_pane_vc_g1

0x5567,	// (0x00036706) list_double2_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_double2_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_double2_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_double2_pane_vc_g

0x496f,	// (0x00035b0e) list_double2_pane_vc_t1_ParamLimits

0x496f,	// (0x00035b0e) list_double2_pane_vc_t1

0x6320,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6320,	// (0x000374bf) list_double2_large_graphic_pane_vc_g1

0x555b,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x555b,	// (0x000366fa) list_double2_large_graphic_pane_vc_g2

0x5567,	// (0x00036706) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5567,	// (0x00036706) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x00040c24) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x00040c24) list_double2_large_graphic_pane_vc_g

0x4985,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4985,	// (0x00035b24) list_double2_large_graphic_pane_vc_t1

0x632c,	// (0x000374cb) list_double_time_pane_vc_g1_ParamLimits

0x632c,	// (0x000374cb) list_double_time_pane_vc_g1

0x6338,	// (0x000374d7) list_double_time_pane_vc_g2_ParamLimits

0x6338,	// (0x000374d7) list_double_time_pane_vc_g2

0x0001,

0xfa8c,	// (0x00040c2b) list_double_time_pane_vc_g_ParamLimits

0xfa8c,	// (0x00040c2b) list_double_time_pane_vc_g

0x499b,	// (0x00035b3a) list_double_time_pane_vc_t1_ParamLimits

0x499b,	// (0x00035b3a) list_double_time_pane_vc_t1

0x49b4,	// (0x00035b53) list_double_time_pane_vc_t2_ParamLimits

0x49b4,	// (0x00035b53) list_double_time_pane_vc_t2

0x49f4,	// (0x00035b93) list_double_time_pane_vc_t3_ParamLimits

0x49f4,	// (0x00035b93) list_double_time_pane_vc_t3

0x4a0c,	// (0x00035bab) list_double_time_pane_vc_t4_ParamLimits

0x4a0c,	// (0x00035bab) list_double_time_pane_vc_t4

0x0003,

0xfa91,	// (0x00040c30) list_double_time_pane_vc_t_ParamLimits

0xfa91,	// (0x00040c30) list_double_time_pane_vc_t

0x555b,	// (0x000366fa) list_double_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_double_pane_vc_g1

0x5567,	// (0x00036706) list_double_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_double_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_double_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_double_pane_vc_g

0x4a20,	// (0x00035bbf) list_double_pane_vc_t1_ParamLimits

0x4a20,	// (0x00035bbf) list_double_pane_vc_t1

0x4a32,	// (0x00035bd1) list_double_pane_vc_t2_ParamLimits

0x4a32,	// (0x00035bd1) list_double_pane_vc_t2

0x0001,

0xfa9a,	// (0x00040c39) list_double_pane_vc_t_ParamLimits

0xfa9a,	// (0x00040c39) list_double_pane_vc_t

0x555b,	// (0x000366fa) list_double_number_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_double_number_pane_vc_g1

0x5567,	// (0x00036706) list_double_number_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_double_number_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_double_number_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_double_number_pane_vc_g

0x4a4a,	// (0x00035be9) list_double_number_pane_vc_t1_ParamLimits

0x4a4a,	// (0x00035be9) list_double_number_pane_vc_t1

0x4a5e,	// (0x00035bfd) list_double_number_pane_vc_t2_ParamLimits

0x4a5e,	// (0x00035bfd) list_double_number_pane_vc_t2

0x4a32,	// (0x00035bd1) list_double_number_pane_vc_t3_ParamLimits

0x4a32,	// (0x00035bd1) list_double_number_pane_vc_t3

0x0002,

0xfa9f,	// (0x00040c3e) list_double_number_pane_vc_t_ParamLimits

0xfa9f,	// (0x00040c3e) list_double_number_pane_vc_t

0x6344,	// (0x000374e3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6344,	// (0x000374e3) list_double_large_graphic_pane_vc_g1

0x6350,	// (0x000374ef) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6350,	// (0x000374ef) list_double_large_graphic_pane_vc_g2

0x5567,	// (0x00036706) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5567,	// (0x00036706) list_double_large_graphic_pane_vc_g3

0x4a70,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4a70,	// (0x00035c0f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfaa6,	// (0x00040c45) list_double_large_graphic_pane_vc_g_ParamLimits

0xfaa6,	// (0x00040c45) list_double_large_graphic_pane_vc_g

0x4a7c,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4a7c,	// (0x00035c1b) list_double_large_graphic_pane_vc_t1

0x4a8e,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4a8e,	// (0x00035c2d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaaf,	// (0x00040c4e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaaf,	// (0x00040c4e) list_double_large_graphic_pane_vc_t

0x555b,	// (0x000366fa) list_double_heading_pane_vc_g1_ParamLimits

0x555b,	// (0x000366fa) list_double_heading_pane_vc_g1

0x5567,	// (0x00036706) list_double_heading_pane_vc_g2_ParamLimits

0x5567,	// (0x00036706) list_double_heading_pane_vc_g2

0x0001,

0xf824,	// (0x000409c3) list_double_heading_pane_vc_g_ParamLimits

0xf824,	// (0x000409c3) list_double_heading_pane_vc_g

0x4aa7,	// (0x00035c46) list_double_heading_pane_vc_t1_ParamLimits

0x4aa7,	// (0x00035c46) list_double_heading_pane_vc_t1

0x4804,	// (0x000359a3) list_double_heading_pane_vc_t2_ParamLimits

0x4804,	// (0x000359a3) list_double_heading_pane_vc_t2

0x0001,

0xfab4,	// (0x00040c53) list_double_heading_pane_vc_t_ParamLimits

0xfab4,	// (0x00040c53) list_double_heading_pane_vc_t

0x47e2,	// (0x00035981) list_double_graphic_pane_vc_g1_ParamLimits

0x47e2,	// (0x00035981) list_double_graphic_pane_vc_g1

0x635f,	// (0x000374fe) list_double_graphic_pane_vc_g2_ParamLimits

0x635f,	// (0x000374fe) list_double_graphic_pane_vc_g2

0x636e,	// (0x0003750d) list_double_graphic_pane_vc_g3_ParamLimits

0x636e,	// (0x0003750d) list_double_graphic_pane_vc_g3

0x0002,

0xfab9,	// (0x00040c58) list_double_graphic_pane_vc_g_ParamLimits

0xfab9,	// (0x00040c58) list_double_graphic_pane_vc_g

0x4abb,	// (0x00035c5a) list_double_graphic_pane_vc_t1_ParamLimits

0x4abb,	// (0x00035c5a) list_double_graphic_pane_vc_t1

0x4a32,	// (0x00035bd1) list_double_graphic_pane_vc_t2_ParamLimits

0x4a32,	// (0x00035bd1) list_double_graphic_pane_vc_t2

0x0001,

0xfac0,	// (0x00040c5f) list_double_graphic_pane_vc_t_ParamLimits

0xfac0,	// (0x00040c5f) list_double_graphic_pane_vc_t

0xd225,	// (0x0003e3c4) aid_size_cell_fastswap

0xd22d,	// (0x0003e3cc) aid_size_cell_touch_ParamLimits

0xd22d,	// (0x0003e3cc) aid_size_cell_touch

0xd492,	// (0x0003e631) popup_fast_swap_wide_window_ParamLimits

0xd492,	// (0x0003e631) popup_fast_swap_wide_window

0xd588,	// (0x0003e727) touch_pane_ParamLimits

0xd588,	// (0x0003e727) touch_pane

0x0cd4,	// (0x00031e73) button_value_adjust_pane_cp2

0x4499,	// (0x00035638) button_value_adjust_pane_cp4

0x44b9,	// (0x00035658) form_field_data_pane_cp2

0x44d8,	// (0x00035677) form_field_data_wide_pane_cp2

0x1032,	// (0x000321d1) bg_scroll_pane_ParamLimits

0xd814,	// (0x0003e9b3) scroll_handle_pane_ParamLimits

0xd828,	// (0x0003e9c7) scroll_sc2_down_pane_ParamLimits

0xd828,	// (0x0003e9c7) scroll_sc2_down_pane

0x1063,	// (0x00032202) scroll_sc2_up_pane_ParamLimits

0x1063,	// (0x00032202) scroll_sc2_up_pane

0x7f13,	// (0x000390b2) grid_wheel_folder_pane_g1_ParamLimits

0x7f13,	// (0x000390b2) grid_wheel_folder_pane_g1

0xd9ed,	// (0x0003eb8c) clock_nsta_pane_cp2_ParamLimits

0xd9ed,	// (0x0003eb8c) clock_nsta_pane_cp2

0x7012,	// (0x000381b1) listscroll_midp_pane_ParamLimits

0x701e,	// (0x000381bd) midp_canvas_pane

0x192c,	// (0x00032acb) nsta_clock_indic_pane

0x1964,	// (0x00032b03) listscroll_form_pane_vc

0x196c,	// (0x00032b0b) listscroll_set_pane_vc_ParamLimits

0x196c,	// (0x00032b0b) listscroll_set_pane_vc

0x7659,	// (0x000387f8) clock_nsta_pane

0x7666,	// (0x00038805) indicator_nsta_pane

0x1bb0,	// (0x00032d4f) bg_popup_sub_pane_cp2_ParamLimits

0x1bc4,	// (0x00032d63) find_pane_cp2_ParamLimits

0x1bc4,	// (0x00032d63) find_pane_cp2

0x1bda,	// (0x00032d79) grid_toobar_pane_ParamLimits

0x1d36,	// (0x00032ed5) list_form_gen_pane_vc_ParamLimits

0x1d36,	// (0x00032ed5) list_form_gen_pane_vc

0x1d4c,	// (0x00032eeb) scroll_pane_cp8_vc_ParamLimits

0x1d4c,	// (0x00032eeb) scroll_pane_cp8_vc

0x1d9c,	// (0x00032f3b) data_form_wide_pane_vc_ParamLimits

0x1d9c,	// (0x00032f3b) data_form_wide_pane_vc

0x1da8,	// (0x00032f47) form_field_data_wide_pane_vc_g1

0x1db0,	// (0x00032f4f) form_field_data_wide_pane_vc_t1_ParamLimits

0x1db0,	// (0x00032f4f) form_field_data_wide_pane_vc_t1

0x0ce8,	// (0x00031e87) input_focus_pane_cp6_vc_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_cp6_vc

0x79d3,	// (0x00038b72) list_midp_pane_ParamLimits

0x79df,	// (0x00038b7e) scroll_pane_cp16_ParamLimits

0x79df,	// (0x00038b7e) scroll_pane_cp16

0x2011,	// (0x000331b0) button_value_adjust_pane_ParamLimits

0x2011,	// (0x000331b0) button_value_adjust_pane

0x7bbf,	// (0x00038d5e) button_value_adjust_pane_cp6_ParamLimits

0x7bbf,	// (0x00038d5e) button_value_adjust_pane_cp6

0x7ce1,	// (0x00038e80) settings_code_pane_cp_ParamLimits

0x7ce1,	// (0x00038e80) settings_code_pane_cp

0x0632,	// (0x000317d1) cell_touch_pane_g1

0x0632,	// (0x000317d1) cell_touch_pane_g2

0x0001,

0xf74c,	// (0x000408eb) cell_touch_pane_g

0x7ddd,	// (0x00038f7c) cell_touch_pane_cp_ParamLimits

0x7ddd,	// (0x00038f7c) cell_touch_pane_cp

0x7ded,	// (0x00038f8c) cell_touch_pane_ParamLimits

0x7ded,	// (0x00038f8c) cell_touch_pane

0x0632,	// (0x000317d1) scroll_sc2_down_pane_g1

0x0632,	// (0x000317d1) scroll_sc2_up_pane_g1

0x063c,	// (0x000317db) bg_set_opt_pane_cp4_vc

0x31ff,	// (0x0003439e) list_set_graphic_pane_vc_g1_ParamLimits

0x31ff,	// (0x0003439e) list_set_graphic_pane_vc_g1

0x320b,	// (0x000343aa) list_set_graphic_pane_vc_g2_ParamLimits

0x320b,	// (0x000343aa) list_set_graphic_pane_vc_g2

0x0001,

0xfa36,	// (0x00040bd5) list_set_graphic_pane_vc_g_ParamLimits

0xfa36,	// (0x00040bd5) list_set_graphic_pane_vc_g

0x3217,	// (0x000343b6) text_primary_small_cp13_vc_ParamLimits

0x3217,	// (0x000343b6) text_primary_small_cp13_vc

0x322f,	// (0x000343ce) list_set_graphic_pane_vc_ParamLimits

0x322f,	// (0x000343ce) list_set_graphic_pane_vc

0x063c,	// (0x000317db) input_focus_pane_cp2_vc

0x0632,	// (0x000317d1) setting_code_pane_vc_g1

0x3243,	// (0x000343e2) setting_code_pane_vc_t1

0x3251,	// (0x000343f0) set_text_pane_vc_t1_ParamLimits

0x3251,	// (0x000343f0) set_text_pane_vc_t1

0x063c,	// (0x000317db) input_focus_pane_cp1_vc

0x3270,	// (0x0003440f) list_set_text_pane_vc

0x0632,	// (0x000317d1) setting_text_pane_vc_g1

0x063c,	// (0x000317db) bg_set_opt_pane_cp2_vc

0x327a,	// (0x00034419) setting_slider_graphic_pane_vc_g1

0x3282,	// (0x00034421) setting_slider_graphic_pane_vc_t1

0x3290,	// (0x0003442f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x00040bda) setting_slider_graphic_pane_vc_t

0x329e,	// (0x0003443d) slider_set_pane_cp_vc

0x32a6,	// (0x00034445) slider_set_pane_vc_g1

0x32af,	// (0x0003444e) slider_set_pane_vc_g2

0x0006,

0xfa40,	// (0x00040bdf) slider_set_pane_vc_g

0x0d4f,	// (0x00031eee) set_opt_bg_pane_g1_copy1

0x0d57,	// (0x00031ef6) set_opt_bg_pane_g2_copy1

0x32db,	// (0x0003447a) set_opt_bg_pane_g3_copy1

0x0d67,	// (0x00031f06) set_opt_bg_pane_g4_copy1

0x0d6f,	// (0x00031f0e) set_opt_bg_pane_g5_copy1

0x0d77,	// (0x00031f16) set_opt_bg_pane_g6_copy1

0x32e3,	// (0x00034482) set_opt_bg_pane_g7_copy1

0x32ed,	// (0x0003448c) set_opt_bg_pane_g8_copy1

0x32f5,	// (0x00034494) set_opt_bg_pane_g9_copy1

0x063c,	// (0x000317db) bg_set_opt_pane_cp_vc

0x32fd,	// (0x0003449c) setting_slider_pane_vc_t1

0x3282,	// (0x00034421) setting_slider_pane_vc_t2

0x3290,	// (0x0003442f) setting_slider_pane_vc_t3

0x0002,

0xfa4f,	// (0x00040bee) setting_slider_pane_vc_t

0x329e,	// (0x0003443d) slider_set_pane_vc

0xdd93,	// (0x0003ef32) volume_set_pane_vc_g1

0xe08e,	// (0x0003f22d) volume_set_pane_vc_g2

0xe097,	// (0x0003f236) volume_set_pane_vc_g3

0xe0a0,	// (0x0003f23f) volume_set_pane_vc_g4

0xe0a9,	// (0x0003f248) volume_set_pane_vc_g5

0xe0b2,	// (0x0003f251) volume_set_pane_vc_g6

0xe0bb,	// (0x0003f25a) volume_set_pane_vc_g7

0xe0c4,	// (0x0003f263) volume_set_pane_vc_g8

0xe0cd,	// (0x0003f26c) volume_set_pane_vc_g9

0xe0d6,	// (0x0003f275) volume_set_pane_vc_g10

0x0009,

0xfa56,	// (0x00040bf5) volume_set_pane_vc_g

0x330c,	// (0x000344ab) volume_set_pane_vc

0x3314,	// (0x000344b3) button_value_adjust_pane_cp1_vc

0x331e,	// (0x000344bd) list_highlight_pane_cp2_vc

0x3327,	// (0x000344c6) list_set_pane_vc_ParamLimits

0x3327,	// (0x000344c6) list_set_pane_vc

0x3379,	// (0x00034518) main_pane_set_vc_t1_ParamLimits

0x3379,	// (0x00034518) main_pane_set_vc_t1

0x338e,	// (0x0003452d) main_pane_set_vc_t2_ParamLimits

0x338e,	// (0x0003452d) main_pane_set_vc_t2

0x33a0,	// (0x0003453f) main_pane_set_vc_t3_ParamLimits

0x33a0,	// (0x0003453f) main_pane_set_vc_t3

0x33b2,	// (0x00034551) main_pane_set_vc_t4_ParamLimits

0x33b2,	// (0x00034551) main_pane_set_vc_t4

0x0003,

0xfa6b,	// (0x00040c0a) main_pane_set_vc_t_ParamLimits

0xfa6b,	// (0x00040c0a) main_pane_set_vc_t

0x33c4,	// (0x00034563) setting_code_pane_vc_ParamLimits

0x33c4,	// (0x00034563) setting_code_pane_vc

0x33d3,	// (0x00034572) setting_slider_graphic_pane_vc

0x33d3,	// (0x00034572) setting_slider_pane_vc

0x33d3,	// (0x00034572) setting_text_pane_vc

0x33d3,	// (0x00034572) setting_volume_pane_vc

0x33db,	// (0x0003457a) scroll_pane_cp121_vc

0x0cc2,	// (0x00031e61) set_content_pane_vc

0x3419,	// (0x000345b8) button_value_adjust_pane_g1

0x3422,	// (0x000345c1) button_value_adjust_pane_g2

0x0001,

0xfac5,	// (0x00040c64) button_value_adjust_pane_g

0x342b,	// (0x000345ca) form_field_slider_wide_pane_vc_t1_ParamLimits

0x342b,	// (0x000345ca) form_field_slider_wide_pane_vc_t1

0x343f,	// (0x000345de) form_field_slider_wide_pane_vc_t2_ParamLimits

0x343f,	// (0x000345de) form_field_slider_wide_pane_vc_t2

0x0001,

0xfaca,	// (0x00040c69) form_field_slider_wide_pane_vc_t_ParamLimits

0xfaca,	// (0x00040c69) form_field_slider_wide_pane_vc_t

0x068a,	// (0x00031829) input_focus_pane_cp10_vc_ParamLimits

0x068a,	// (0x00031829) input_focus_pane_cp10_vc

0x3451,	// (0x000345f0) slider_cont_pane_cp1_vc_ParamLimits

0x3451,	// (0x000345f0) slider_cont_pane_cp1_vc

0x32a6,	// (0x00034445) slider_form_pane_g1_cp2

0x32af,	// (0x0003444e) slider_form_pane_g2_cp2

0x346a,	// (0x00034609) form_field_slider_pane_vc_t3

0x3478,	// (0x00034617) form_field_slider_pane_vc_t4

0x3486,	// (0x00034625) slider_form_pane_vc_ParamLimits

0x3486,	// (0x00034625) slider_form_pane_vc

0x3493,	// (0x00034632) form_field_slider_pane_vc_t1_ParamLimits

0x3493,	// (0x00034632) form_field_slider_pane_vc_t1

0x343f,	// (0x000345de) form_field_slider_pane_vc_t2_ParamLimits

0x343f,	// (0x000345de) form_field_slider_pane_vc_t2

0x0001,

0xfada,	// (0x00040c79) form_field_slider_pane_vc_t_ParamLimits

0xfada,	// (0x00040c79) form_field_slider_pane_vc_t

0x068a,	// (0x00031829) input_focus_pane_cp9_vc_ParamLimits

0x068a,	// (0x00031829) input_focus_pane_cp9_vc

0x34af,	// (0x0003464e) slider_cont_pane_vc_ParamLimits

0x34af,	// (0x0003464e) slider_cont_pane_vc

0x34c1,	// (0x00034660) list_form_graphic_pane_cp_vc_ParamLimits

0x34c1,	// (0x00034660) list_form_graphic_pane_cp_vc

0x1da8,	// (0x00032f47) form_field_popup_wide_pane_vc_g1

0x34d6,	// (0x00034675) form_field_popup_wide_pane_vc_t1_ParamLimits

0x34d6,	// (0x00034675) form_field_popup_wide_pane_vc_t1

0x0ce8,	// (0x00031e87) input_focus_pane_cp8_vc_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_cp8_vc

0x34ed,	// (0x0003468c) list_form_wide_pane_vc_ParamLimits

0x34ed,	// (0x0003468c) list_form_wide_pane_vc

0x34f9,	// (0x00034698) list_form_graphic_pane_vc_g1

0x3501,	// (0x000346a0) list_form_graphic_pane_vc_t1_ParamLimits

0x3501,	// (0x000346a0) list_form_graphic_pane_vc_t1

0x0698,	// (0x00031837) list_highlight_pane_cp5_vc_ParamLimits

0x0698,	// (0x00031837) list_highlight_pane_cp5_vc

0x351d,	// (0x000346bc) list_form_graphic_pane_vc_ParamLimits

0x351d,	// (0x000346bc) list_form_graphic_pane_vc

0x1da8,	// (0x00032f47) form_field_popup_pane_vc_g1

0x3533,	// (0x000346d2) form_field_popup_pane_vc_t1_ParamLimits

0x3533,	// (0x000346d2) form_field_popup_pane_vc_t1

0x0ce8,	// (0x00031e87) input_focus_pane_cp7_vc_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_cp7_vc

0x354a,	// (0x000346e9) list_form_pane_vc_ParamLimits

0x354a,	// (0x000346e9) list_form_pane_vc

0x3556,	// (0x000346f5) data_form_pane_vc_t1_ParamLimits

0x3556,	// (0x000346f5) data_form_pane_vc_t1

0x0d4f,	// (0x00031eee) input_focus_pane_vc_g1

0x0d57,	// (0x00031ef6) input_focus_pane_vc_g2

0x0d5f,	// (0x00031efe) input_focus_pane_vc_g3

0x0d67,	// (0x00031f06) input_focus_pane_vc_g4

0x0d6f,	// (0x00031f0e) input_focus_pane_vc_g5

0x0d77,	// (0x00031f16) input_focus_pane_vc_g6

0x0d7f,	// (0x00031f1e) input_focus_pane_vc_g7

0x0d87,	// (0x00031f26) input_focus_pane_vc_g8

0x0d8f,	// (0x00031f2e) input_focus_pane_vc_g9

0x0632,	// (0x000317d1) input_focus_pane_vc_g10

0x0009,

0xf6d5,	// (0x00040874) input_focus_pane_vc_g

0x1d9c,	// (0x00032f3b) data_form_pane_vc_ParamLimits

0x1d9c,	// (0x00032f3b) data_form_pane_vc

0x1da8,	// (0x00032f47) form_field_data_pane_vc_g1

0x3571,	// (0x00034710) form_field_data_pane_vc_t1_ParamLimits

0x3571,	// (0x00034710) form_field_data_pane_vc_t1

0x0ce8,	// (0x00031e87) input_focus_pane_vc_ParamLimits

0x0ce8,	// (0x00031e87) input_focus_pane_vc

0x358b,	// (0x0003472a) button_value_adjust_pane_cp3_vc

0x3593,	// (0x00034732) button_value_adjust_pane_cp5_vc

0x359b,	// (0x0003473a) form_field_data_pane_vc_ParamLimits

0x359b,	// (0x0003473a) form_field_data_pane_vc

0x35b2,	// (0x00034751) form_field_data_pane_vc_cp2

0x35ba,	// (0x00034759) form_field_data_wide_pane_vc_ParamLimits

0x35ba,	// (0x00034759) form_field_data_wide_pane_vc

0x35d0,	// (0x0003476f) form_field_data_wide_pane_vc_cp2

0x35d8,	// (0x00034777) form_field_popup_pane_vc_ParamLimits

0x35d8,	// (0x00034777) form_field_popup_pane_vc

0x35ef,	// (0x0003478e) form_field_popup_wide_pane_vc_ParamLimits

0x35ef,	// (0x0003478e) form_field_popup_wide_pane_vc

0x3605,	// (0x000347a4) form_field_slider_pane_vc_ParamLimits

0x3605,	// (0x000347a4) form_field_slider_pane_vc

0x3618,	// (0x000347b7) form_field_slider_wide_pane_vc_ParamLimits

0x3618,	// (0x000347b7) form_field_slider_wide_pane_vc

0x7dff,	// (0x00038f9e) grid_touch_1_pane_ParamLimits

0x7dff,	// (0x00038f9e) grid_touch_1_pane

0x7e0b,	// (0x00038faa) grid_touch_2_pane_ParamLimits

0x7e0b,	// (0x00038faa) grid_touch_2_pane

0x191e,	// (0x00032abd) touch_pane_g1_ParamLimits

0x191e,	// (0x00032abd) touch_pane_g1

0x362b,	// (0x000347ca) cell_app_pane_cp_wide_ParamLimits

0x362b,	// (0x000347ca) cell_app_pane_cp_wide

0x363c,	// (0x000347db) grid_popup_fast_wide_pane_ParamLimits

0x363c,	// (0x000347db) grid_popup_fast_wide_pane

0x365e,	// (0x000347fd) scroll_pane_cp19_ParamLimits

0x365e,	// (0x000347fd) scroll_pane_cp19

0x063c,	// (0x000317db) bg_popup_window_pane_cp20

0x3672,	// (0x00034811) listscroll_popup_fast_wide_pane

0x0698,	// (0x00031837) grid_indicator_nsta_pane

0x367a,	// (0x00034819) clock_nsta_pane_g1

0x3683,	// (0x00034822) clock_nsta_pane_t1

0x7e23,	// (0x00038fc2) cell_indicator_nsta_pane_ParamLimits

0x7e23,	// (0x00038fc2) cell_indicator_nsta_pane

0x3650,	// (0x000347ef) cell_indicator_nsta_pane_g1

0x7e5b,	// (0x00038ffa) cell_indicator_nsta_pane_g2

0x0001,

0xfae4,	// (0x00040c83) cell_indicator_nsta_pane_g

0x369f,	// (0x0003483e) clock_nsta_pane_cp

0x36a7,	// (0x00034846) indicator_nsta_pane_cp

0x36af,	// (0x0003484e) nsta_clock_indic_pane_g1

0x06dd,	// (0x0003187c) grid_indicator_pane

0x1155,	// (0x000322f4) scroll_pane_cp29

0xd93c,	// (0x0003eadb) indicator_nsta_pane_cp2_ParamLimits

0xd93c,	// (0x0003eadb) indicator_nsta_pane_cp2

0x0698,	// (0x00031837) main_apps_wheel_pane

0x1ec4,	// (0x00033063) form_midp_field_text_pane_ParamLimits

0x1ff1,	// (0x00033190) scroll_bar_cp050_ParamLimits

0x36e7,	// (0x00034886) cell_indicator_pane_ParamLimits

0x36e7,	// (0x00034886) cell_indicator_pane

0x3704,	// (0x000348a3) cell_indicator_pane_g1

0x7e71,	// (0x00039010) grid_wheel_folder_pane_ParamLimits

0x7e71,	// (0x00039010) grid_wheel_folder_pane

0x7e87,	// (0x00039026) list_wheel_apps_pane_ParamLimits

0x7e87,	// (0x00039026) list_wheel_apps_pane

0x7e98,	// (0x00039037) main_apps_wheel_pane_g1_ParamLimits

0x7e98,	// (0x00039037) main_apps_wheel_pane_g1

0x7eac,	// (0x0003904b) main_apps_wheel_pane_g2_ParamLimits

0x7eac,	// (0x0003904b) main_apps_wheel_pane_g2

0x0001,

0xfaf3,	// (0x00040c92) main_apps_wheel_pane_g_ParamLimits

0xfaf3,	// (0x00040c92) main_apps_wheel_pane_g

0x7ec4,	// (0x00039063) main_apps_wheel_pane_t1_ParamLimits

0x7ec4,	// (0x00039063) main_apps_wheel_pane_t1

0x7ee7,	// (0x00039086) list_wheel_apps_pane_g1

0x7eef,	// (0x0003908e) list_wheel_apps_pane_g2

0x7ef7,	// (0x00039096) list_wheel_apps_pane_g3

0x7eff,	// (0x0003909e) list_wheel_apps_pane_g4

0x7f09,	// (0x000390a8) list_wheel_apps_pane_g5

0x0004,

0xfaf8,	// (0x00040c97) list_wheel_apps_pane_g

0x15a8,	// (0x00032747) navi_icon_text_pane

0x759d,	// (0x0003873c) aid_fill_nsta

0x7f2c,	// (0x000390cb) navi_icon_text_pane_g1

0x7f3b,	// (0x000390da) navi_icon_text_pane_t1

0x1444,	// (0x000325e3) list_set_graphic_pane_t1_ParamLimits

0x1444,	// (0x000325e3) list_set_graphic_pane_t1

0x26c8,	// (0x00033867) popup_midp_note_alarm_window_t6_ParamLimits

0x26c8,	// (0x00033867) popup_midp_note_alarm_window_t6

0x26da,	// (0x00033879) popup_midp_note_alarm_window_t7_ParamLimits

0x26da,	// (0x00033879) popup_midp_note_alarm_window_t7

0x26ec,	// (0x0003388b) popup_midp_note_alarm_window_t8_ParamLimits

0x26ec,	// (0x0003388b) popup_midp_note_alarm_window_t8

0x26fe,	// (0x0003389d) popup_midp_note_alarm_window_t9_ParamLimits

0x26fe,	// (0x0003389d) popup_midp_note_alarm_window_t9

0x2710,	// (0x000338af) popup_midp_note_alarm_window_t10_ParamLimits

0x2710,	// (0x000338af) popup_midp_note_alarm_window_t10

0x2722,	// (0x000338c1) popup_midp_note_alarm_window_t11_ParamLimits

0x2722,	// (0x000338c1) popup_midp_note_alarm_window_t11

0x2734,	// (0x000338d3) scroll_pane_cp17_ParamLimits

0x2734,	// (0x000338d3) scroll_pane_cp17

0xdd93,	// (0x0003ef32) volume_small_pane_cp_g1

0xe0df,	// (0x0003f27e) volume_small_pane_cp_g2

0xe0e8,	// (0x0003f287) volume_small_pane_cp_g3

0xe0f1,	// (0x0003f290) volume_small_pane_cp_g4

0xe0fa,	// (0x0003f299) volume_small_pane_cp_g5

0xe103,	// (0x0003f2a2) volume_small_pane_cp_g6

0xe10c,	// (0x0003f2ab) volume_small_pane_cp_g7

0xe115,	// (0x0003f2b4) volume_small_pane_cp_g8

0xe11e,	// (0x0003f2bd) volume_small_pane_cp_g9

0xe127,	// (0x0003f2c6) volume_small_pane_cp_g10

0x1754,	// (0x000328f3) midp_ticker_pane_g1_ParamLimits

0x1760,	// (0x000328ff) midp_ticker_pane_g2_ParamLimits

0xf79d,	// (0x0004093c) midp_ticker_pane_g_ParamLimits

0x70c7,	// (0x00038266) midp_ticker_pane_t1_ParamLimits

0x75b3,	// (0x00038752) aid_fill_nsta_2

0x1fdd,	// (0x0003317c) list_form2_midp_pane

0x2dc7,	// (0x00033f66) midp_editing_number_pane_ParamLimits

0x2dd6,	// (0x00033f75) midp_ticker_pane_ParamLimits

0x370e,	// (0x000348ad) form2_midp_field_pane

0x3716,	// (0x000348b5) scroll_pane_cp51

0x3736,	// (0x000348d5) form2_midp_button_pane_ParamLimits

0x3736,	// (0x000348d5) form2_midp_button_pane

0x3748,	// (0x000348e7) form2_midp_content_pane_ParamLimits

0x3748,	// (0x000348e7) form2_midp_content_pane

0x3762,	// (0x00034901) form2_midp_field_choice_group_pane

0x376a,	// (0x00034909) form2_midp_field_pane_g1

0x3772,	// (0x00034911) form2_midp_field_pane_g2

0x377a,	// (0x00034919) form2_midp_field_pane_g3

0x3782,	// (0x00034921) form2_midp_field_pane_g4

0x0003,

0xfb1d,	// (0x00040cbc) form2_midp_field_pane_g

0x378a,	// (0x00034929) form2_midp_gauge_slider_pane

0x3792,	// (0x00034931) form2_midp_gauge_wait_pane

0x379a,	// (0x00034939) form2_midp_image_pane_ParamLimits

0x379a,	// (0x00034939) form2_midp_image_pane

0x37b5,	// (0x00034954) form2_midp_label_pane_ParamLimits

0x37b5,	// (0x00034954) form2_midp_label_pane

0x7f6c,	// (0x0003910b) form2_midp_label_pane_cp_ParamLimits

0x7f6c,	// (0x0003910b) form2_midp_label_pane_cp

0x37ce,	// (0x0003496d) form2_midp_string_pane_ParamLimits

0x37ce,	// (0x0003496d) form2_midp_string_pane

0x4acd,	// (0x00035c6c) form2_midp_text_pane_ParamLimits

0x4acd,	// (0x00035c6c) form2_midp_text_pane

0x37e0,	// (0x0003497f) form2_midp_time_pane

0x37f0,	// (0x0003498f) input_focus_pane_cp51_ParamLimits

0x37f0,	// (0x0003498f) input_focus_pane_cp51

0x3808,	// (0x000349a7) form2_midp_label_pane_t1_ParamLimits

0x3808,	// (0x000349a7) form2_midp_label_pane_t1

0x4ae8,	// (0x00035c87) form2_mdip_text_pane_t1_ParamLimits

0x4ae8,	// (0x00035c87) form2_mdip_text_pane_t1

0x4b04,	// (0x00035ca3) form2_midp_time_pane_t1

0x3850,	// (0x000349ef) form2_midp_gauge_slider_pane_t1

0x7f8d,	// (0x0003912c) form2_midp_gauge_slider_pane_t2

0x7f9f,	// (0x0003913e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb26,	// (0x00040cc5) form2_midp_gauge_slider_pane_t

0x3862,	// (0x00034a01) form2_midp_slider_pane

0x386e,	// (0x00034a0d) form2_midp_gauge_wait_pane_t1

0x387c,	// (0x00034a1b) form2_midp_wait_pane_ParamLimits

0x387c,	// (0x00034a1b) form2_midp_wait_pane

0x7fb1,	// (0x00039150) list_single_2graphic_pane_cp4_ParamLimits

0x7fb1,	// (0x00039150) list_single_2graphic_pane_cp4

0x790e,	// (0x00038aad) list_single_midp_graphic_pane_cp_ParamLimits

0x790e,	// (0x00038aad) list_single_midp_graphic_pane_cp

0x063c,	// (0x000317db) list_highlight_pane_cp20

0x38a7,	// (0x00034a46) list_single_2graphic_pane_g1_cp4

0x3104,	// (0x000342a3) list_single_2graphic_pane_g2_cp4

0x38af,	// (0x00034a4e) list_single_2graphic_pane_t1_cp4

0x0698,	// (0x00031837) list_highlight_pane_cp21

0x38be,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp

0x38cd,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp

0x7fe0,	// (0x0003917f) form2_mdip_string_pane_t1_ParamLimits

0x7fe0,	// (0x0003917f) form2_mdip_string_pane_t1

0x063c,	// (0x000317db) bg_wml_button_pane_cp2

0x0632,	// (0x000317d1) form2_midp_image_pane_g1

0x55c6,	// (0x00036765) list_double_large_graphic_pane_g5_ParamLimits

0x55c6,	// (0x00036765) list_double_large_graphic_pane_g5

0x7012,	// (0x000381b1) midp_form_pane_ParamLimits

0x0698,	// (0x00031837) main_apps_wheel_pane_ParamLimits

0x740b,	// (0x000385aa) popup_preview_window_ParamLimits

0x740b,	// (0x000385aa) popup_preview_window

0x1a51,	// (0x00032bf0) popup_touch_info_window_ParamLimits

0x1a51,	// (0x00032bf0) popup_touch_info_window

0x1a6f,	// (0x00032c0e) popup_touch_menu_window_ParamLimits

0x1a6f,	// (0x00032c0e) popup_touch_menu_window

0x0628,	// (0x000317c7) bg_popup_sub_pane_cp6

0x811a,	// (0x000392b9) list_touch_menu_pane

0x8122,	// (0x000392c1) list_single_touch_menu_pane_ParamLimits

0x8122,	// (0x000392c1) list_single_touch_menu_pane

0x8137,	// (0x000392d6) list_single_touch_menu_pane_t1

0x0698,	// (0x00031837) bg_popup_sub_pane_cp7_ParamLimits

0x0698,	// (0x00031837) bg_popup_sub_pane_cp7

0x8145,	// (0x000392e4) heading_sub_pane

0x814d,	// (0x000392ec) list_touch_info_pane_ParamLimits

0x814d,	// (0x000392ec) list_touch_info_pane

0x815c,	// (0x000392fb) list_single_touch_info_pane_ParamLimits

0x815c,	// (0x000392fb) list_single_touch_info_pane

0x816e,	// (0x0003930d) list_single_touch_info_pane_t1

0x817c,	// (0x0003931b) list_single_touch_info_pane_t2

0x0001,

0xfb34,	// (0x00040cd3) list_single_touch_info_pane_t

0x172a,	// (0x000328c9) bg_popup_heading_pane_cp

0x818a,	// (0x00039329) heading_sub_pane_t1

0x1d62,	// (0x00032f01) bg_popup_preview_window_pane_cp_ParamLimits

0x1d62,	// (0x00032f01) bg_popup_preview_window_pane_cp

0x8145,	// (0x000392e4) heading_preview_pane

0x814d,	// (0x000392ec) list_preview_pane_ParamLimits

0x814d,	// (0x000392ec) list_preview_pane

0x8198,	// (0x00039337) popup_preview_window_g1

0x815c,	// (0x000392fb) list_single_preview_pane_ParamLimits

0x815c,	// (0x000392fb) list_single_preview_pane

0x81a0,	// (0x0003933f) list_single_preview_pane_g1

0x81a8,	// (0x00039347) list_single_preview_pane_t1

0x816e,	// (0x0003930d) list_single_preview_pane_t2

0x0001,

0xfb39,	// (0x00040cd8) list_single_preview_pane_t

0x81b6,	// (0x00039355) bg_popup_heading_pane_cp2_ParamLimits

0x81b6,	// (0x00039355) bg_popup_heading_pane_cp2

0x81cc,	// (0x0003936b) heading_preview_pane_g1

0x81d4,	// (0x00039373) heading_preview_pane_t1_ParamLimits

0x81d4,	// (0x00039373) heading_preview_pane_t1

0x06f4,	// (0x00031893) soft_indicator_pane_t1_ParamLimits

0x0c5b,	// (0x00031dfa) scroll_pane_ParamLimits

0x1051,	// (0x000321f0) scroll_sc2_left_pane

0x105a,	// (0x000321f9) scroll_sc2_right_pane

0x1079,	// (0x00032218) scroll_bg_pane_g1_ParamLimits

0x108e,	// (0x0003222d) scroll_bg_pane_g2_ParamLimits

0x10a6,	// (0x00032245) scroll_bg_pane_g3_ParamLimits

0xf72c,	// (0x000408cb) scroll_bg_pane_g_ParamLimits

0x1079,	// (0x00032218) scroll_handle_pane_g1_ParamLimits

0x10c8,	// (0x00032267) scroll_handle_pane_g2_ParamLimits

0x10a6,	// (0x00032245) scroll_handle_pane_g3_ParamLimits

0xf733,	// (0x000408d2) scroll_handle_pane_g_ParamLimits

0x199a,	// (0x00032b39) popup_choice_list_window_ParamLimits

0x199a,	// (0x00032b39) popup_choice_list_window

0x1bbc,	// (0x00032d5b) choice_list_pane

0x1c3e,	// (0x00032ddd) cell_toolbar_pane_t1

0x1c66,	// (0x00032e05) toolbar_button_pane_ParamLimits

0x2b12,	// (0x00033cb1) ai_gene_pane_1_t2_ParamLimits

0x2b12,	// (0x00033cb1) ai_gene_pane_1_t2

0x0001,

0xf950,	// (0x00040aef) ai_gene_pane_1_t_ParamLimits

0xf950,	// (0x00040aef) ai_gene_pane_1_t

0x81f1,	// (0x00039390) scroll_sc2_left_pane_g1

0x81f1,	// (0x00039390) scroll_sc2_right_pane_g1

0x0e3f,	// (0x00031fde) bg_popup_sub_pane_cp10

0x81fb,	// (0x0003939a) list_choice_list_pane

0x8212,	// (0x000393b1) list_single_choice_list_pane_ParamLimits

0x8212,	// (0x000393b1) list_single_choice_list_pane

0x8226,	// (0x000393c5) list_single_choice_list_pane_g1

0x822e,	// (0x000393cd) list_single_choice_list_pane_t1_ParamLimits

0x822e,	// (0x000393cd) list_single_choice_list_pane_t1

0x8243,	// (0x000393e2) choice_list_pane_g1

0x824b,	// (0x000393ea) choice_list_pane_t1

0x0628,	// (0x000317c7) input_focus_pane_cp11

0x0fb4,	// (0x00032153) title_pane_stacon_g2_ParamLimits

0x0fb4,	// (0x00032153) title_pane_stacon_g2

0x0002,

0xf712,	// (0x000408b1) title_pane_stacon_g_ParamLimits

0xf712,	// (0x000408b1) title_pane_stacon_g

0x172a,	// (0x000328c9) cursor_press_pane

0x71b0,	// (0x0003834f) popup_fep_hwr_window_ParamLimits

0x71b0,	// (0x0003834f) popup_fep_hwr_window

0x19ee,	// (0x00032b8d) popup_fep_vkb_window_ParamLimits

0x19ee,	// (0x00032b8d) popup_fep_vkb_window

0x8259,	// (0x000393f8) cursor_press_pane_g1

0x0002,

0xfb62,	// (0x00040d01) fep_vkb_side_pane_g_ParamLimits

0xe169,	// (0x0003f308) fep_hwr_candidate_pane_ParamLimits

0xe169,	// (0x0003f308) fep_hwr_candidate_pane

0xe193,	// (0x0003f332) fep_hwr_side_pane_ParamLimits

0xe193,	// (0x0003f332) fep_hwr_side_pane

0xe1b3,	// (0x0003f352) fep_hwr_top_pane_ParamLimits

0xe1b3,	// (0x0003f352) fep_hwr_top_pane

0xe1cb,	// (0x0003f36a) fep_hwr_write_pane_ParamLimits

0xe1cb,	// (0x0003f36a) fep_hwr_write_pane

0xfb62,	// (0x00040d01) fep_vkb_side_pane_g

0x8273,	// (0x00039412) fep_hwr_top_pane_g1

0x8261,	// (0x00039400) fep_hwr_top_pane_g2

0xe205,	// (0x0003f3a4) fep_hwr_top_pane_g3

0x0002,

0xfb3e,	// (0x00040cdd) fep_hwr_top_pane_g

0xe21a,	// (0x0003f3b9) fep_hwr_top_text_pane

0x121b,	// (0x000323ba) fep_hwr_top_text_pane_g1

0x82a9,	// (0x00039448) fep_hwr_top_text_pane_t1

0xe310,	// (0x0003f4af) fep_hwr_candidate_pane_g1

0x8503,	// (0x000396a2) fep_vkb_keypad_pane_g3_ParamLimits

0x8503,	// (0x000396a2) fep_vkb_keypad_pane_g3

0x852b,	// (0x000396ca) fep_vkb_keypad_pane_g4_ParamLimits

0x852b,	// (0x000396ca) fep_vkb_keypad_pane_g4

0x859a,	// (0x00039739) fep_vkb_bottom_pane_g2_ParamLimits

0x859a,	// (0x00039739) fep_vkb_bottom_pane_g2

0x0001,

0xfb69,	// (0x00040d08) fep_vkb_bottom_pane_g_ParamLimits

0xfb69,	// (0x00040d08) fep_vkb_bottom_pane_g

0x81f1,	// (0x00039390) cell_vkb_side_pane_g2

0x0001,

0xfb73,	// (0x00040d12) cell_vkb_side_pane_g

0x8625,	// (0x000397c4) cell_vkb_side_pane_t1

0x8633,	// (0x000397d2) cell_vkb_side_pane_t1_copy1

0x81f1,	// (0x00039390) bg_fep_vkb_candidate_pane_g2

0x8765,	// (0x00039904) cell_vkb_candidate_pane_ParamLimits

0x82b7,	// (0x00039456) aid_size_cell_vkb_ParamLimits

0x82b7,	// (0x00039456) aid_size_cell_vkb

0x8765,	// (0x00039904) cell_vkb_candidate_pane

0xe337,	// (0x0003f4d6) bg_popup_fep_shadow_pane_g1

0x8345,	// (0x000394e4) fep_vkb_bottom_pane_ParamLimits

0x8345,	// (0x000394e4) fep_vkb_bottom_pane

0x8382,	// (0x00039521) fep_vkb_candidate_pane_ParamLimits

0x8382,	// (0x00039521) fep_vkb_candidate_pane

0x839e,	// (0x0003953d) fep_vkb_keypad_pane_ParamLimits

0x839e,	// (0x0003953d) fep_vkb_keypad_pane

0x83e4,	// (0x00039583) fep_vkb_side_pane_ParamLimits

0x83e4,	// (0x00039583) fep_vkb_side_pane

0x8420,	// (0x000395bf) fep_vkb_top_pane_ParamLimits

0x8420,	// (0x000395bf) fep_vkb_top_pane

0x845c,	// (0x000395fb) fep_vkb_top_pane_g1_ParamLimits

0x845c,	// (0x000395fb) fep_vkb_top_pane_g1

0x846b,	// (0x0003960a) fep_vkb_top_pane_g2_ParamLimits

0x846b,	// (0x0003960a) fep_vkb_top_pane_g2

0x847a,	// (0x00039619) fep_vkb_top_pane_g3_ParamLimits

0x847a,	// (0x00039619) fep_vkb_top_pane_g3

0x0003,

0xfb59,	// (0x00040cf8) fep_vkb_top_pane_g_ParamLimits

0xfb59,	// (0x00040cf8) fep_vkb_top_pane_g

0x8498,	// (0x00039637) fep_vkb_top_text_pane_ParamLimits

0x8498,	// (0x00039637) fep_vkb_top_text_pane

0x84a9,	// (0x00039648) fep_vkb_side_pane_g1_ParamLimits

0x84a9,	// (0x00039648) fep_vkb_side_pane_g1

0x84f2,	// (0x00039691) grid_vkb_side_pane_ParamLimits

0x84f2,	// (0x00039691) grid_vkb_side_pane

0xe33f,	// (0x0003f4de) bg_popup_fep_shadow_pane_g2

0xe348,	// (0x0003f4e7) bg_popup_fep_shadow_pane_g3

0xe350,	// (0x0003f4ef) bg_popup_fep_shadow_pane_g4

0xe359,	// (0x0003f4f8) bg_popup_fep_shadow_pane_g5

0xe363,	// (0x0003f502) bg_popup_fep_shadow_pane_g6

0xe36b,	// (0x0003f50a) bg_popup_fep_shadow_pane_g7

0x0d67,	// (0x00031f06) bg_popup_fep_shadow_pane_g8

0x8549,	// (0x000396e8) grid_vkb_keypad_number_pane_ParamLimits

0x8549,	// (0x000396e8) grid_vkb_keypad_number_pane

0x8559,	// (0x000396f8) grid_vkb_keypad_pane_ParamLimits

0x8559,	// (0x000396f8) grid_vkb_keypad_pane

0x857f,	// (0x0003971e) fep_vkb_bottom_pane_g1_ParamLimits

0x857f,	// (0x0003971e) fep_vkb_bottom_pane_g1

0x85a8,	// (0x00039747) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x85a8,	// (0x00039747) grid_vkb_keypad_bottom_left_pane

0x85bd,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x85bd,	// (0x0003975c) grid_vkb_keypad_bottom_right_pane

0x85d2,	// (0x00039771) fep_vkb_top_text_pane_g1

0x85ed,	// (0x0003978c) fep_vkb_top_text_pane_t1

0x8602,	// (0x000397a1) cell_vkb_side_pane_ParamLimits

0x8602,	// (0x000397a1) cell_vkb_side_pane

0x81f1,	// (0x00039390) cell_vkb_side_pane_g1

0x8641,	// (0x000397e0) cell_vkb_keypad_pane_ParamLimits

0x8641,	// (0x000397e0) cell_vkb_keypad_pane

0x86bc,	// (0x0003985b) cell_vkb_keypad_pane_g1

0x0008,

0xfb86,	// (0x00040d25) bg_popup_fep_shadow_pane_g

0xe37d,	// (0x0003f51c) cell_hwr_side_pane_g1

0xe37d,	// (0x0003f51c) cell_hwr_side_pane_g2

0x86c6,	// (0x00039865) cell_vkb_keypad_pane_t1

0x86d4,	// (0x00039873) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x86d4,	// (0x00039873) cell_vkb_keypad_bottom_left_pane

0x86f1,	// (0x00039890) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x86f1,	// (0x00039890) cell_vkb_keypad_bottom_right_pane

0x81f1,	// (0x00039390) cell_vkb_keypad_bottom_left_pane_g1

0x81f1,	// (0x00039390) cell_vkb_keypad_bottom_right_pane_g1

0x872a,	// (0x000398c9) cell_vkb_keypad_number_pane_ParamLimits

0x872a,	// (0x000398c9) cell_vkb_keypad_number_pane

0x8749,	// (0x000398e8) cell_vkb_keypad_number_pane_g1

0x8753,	// (0x000398f2) cell_vkb_keypad_number_pane_g2

0x875c,	// (0x000398fb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb78,	// (0x00040d17) cell_vkb_keypad_number_pane_g

0x86c6,	// (0x00039865) cell_vkb_keypad_number_pane_t1

0x8782,	// (0x00039921) fep_vkb_candidate_pane_g1

0x0001,

0xfb99,	// (0x00040d38) cell_hwr_side_pane_g

0x87a9,	// (0x00039948) cell_hwr_side_pane_t1

0xe387,	// (0x0003f526) cell_hwr_side_pane_t1_copy1

0xe395,	// (0x0003f534) cell_hwr_candidate_pane_g1

0xe3c4,	// (0x0003f563) cell_hwr_candidate_pane_t1

0x81f1,	// (0x00039390) cell_vkb_candidate_pane_g2

0x882f,	// (0x000399ce) cell_vkb_candidate_pane_t1

0xe130,	// (0x0003f2cf) bg_popup_fep_shadow_pane_ParamLimits

0xe130,	// (0x0003f2cf) bg_popup_fep_shadow_pane

0xe1e5,	// (0x0003f384) bg_fep_hwr_top_pane_g4

0x8285,	// (0x00039424) bg_hwr_side_pane_g1_ParamLimits

0x8285,	// (0x00039424) bg_hwr_side_pane_g1

0xe256,	// (0x0003f3f5) cell_hwr_side_pane_ParamLimits

0xe256,	// (0x0003f3f5) cell_hwr_side_pane

0xe291,	// (0x0003f430) fep_hwr_write_pane_g1_ParamLimits

0xe291,	// (0x0003f430) fep_hwr_write_pane_g1

0xe29e,	// (0x0003f43d) fep_hwr_write_pane_g2_ParamLimits

0xe29e,	// (0x0003f43d) fep_hwr_write_pane_g2

0xe2ab,	// (0x0003f44a) fep_hwr_write_pane_g3_ParamLimits

0xe2ab,	// (0x0003f44a) fep_hwr_write_pane_g3

0xe2b9,	// (0x0003f458) fep_hwr_write_pane_g4_ParamLimits

0xe2b9,	// (0x0003f458) fep_hwr_write_pane_g4

0x0005,

0xfb45,	// (0x00040ce4) fep_hwr_write_pane_g_ParamLimits

0xfb45,	// (0x00040ce4) fep_hwr_write_pane_g

0xe1e5,	// (0x0003f384) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe1e5,	// (0x0003f384) bg_fep_hwr_candidate_pane_g2

0xe2ce,	// (0x0003f46d) cell_hwr_candidate_pane_ParamLimits

0xe2ce,	// (0x0003f46d) cell_hwr_candidate_pane

0xe310,	// (0x0003f4af) fep_hwr_candidate_pane_g1_ParamLimits

0x82e5,	// (0x00039484) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x82e5,	// (0x00039484) bg_popup_fep_shadow_pane_cp2

0x848a,	// (0x00039629) fep_vkb_top_pane_g4_ParamLimits

0x848a,	// (0x00039629) fep_vkb_top_pane_g4

0x84d0,	// (0x0003966f) fep_vkb_side_pane_g2_ParamLimits

0x84d0,	// (0x0003966f) fep_vkb_side_pane_g2

0x43c6,	// (0x00035565) list_setting_pane_t4_ParamLimits

0x43c6,	// (0x00035565) list_setting_pane_t4

0x4460,	// (0x000355ff) list_setting_number_pane_t5_ParamLimits

0x4460,	// (0x000355ff) list_setting_number_pane_t5

0x5912,	// (0x00036ab1) list_double_heading_pane_cp2_ParamLimits

0x5912,	// (0x00036ab1) list_double_heading_pane_cp2

0x0d02,	// (0x00031ea1) list_double_heading_pane_g1_cp2_ParamLimits

0x0d02,	// (0x00031ea1) list_double_heading_pane_g1_cp2

0x0d0e,	// (0x00031ead) list_double_heading_pane_g2_cp2_ParamLimits

0x0d0e,	// (0x00031ead) list_double_heading_pane_g2_cp2

0x883d,	// (0x000399dc) list_double_heading_pane_t1_cp2_ParamLimits

0x883d,	// (0x000399dc) list_double_heading_pane_t1_cp2

0x8853,	// (0x000399f2) list_double_heading_pane_t2_cp2_ParamLimits

0x8853,	// (0x000399f2) list_double_heading_pane_t2_cp2

0x0620,	// (0x000317bf) aid_value_unit2

0xd4de,	// (0x0003e67d) popup_preview_fixed_window

0x07d4,	// (0x00031973) bg_popup_preview_window_pane_cp02

0x8865,	// (0x00039a04) list_preview_fixed_pane

0x88ab,	// (0x00039a4a) list_empty_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_empty_pane_fp

0x88ab,	// (0x00039a4a) list_single_cale_day_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_cale_day_pane_fp

0x88ab,	// (0x00039a4a) list_single_graphic_heading_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_graphic_heading_pane_fp

0x88ab,	// (0x00039a4a) list_single_graphic_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_graphic_pane_fp

0x88ab,	// (0x00039a4a) list_single_heading_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_heading_pane_fp

0x88ab,	// (0x00039a4a) list_single_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_pane_fp

0x88c2,	// (0x00039a61) list_single_pane_fp_g1_ParamLimits

0x88c2,	// (0x00039a61) list_single_pane_fp_g1

0x55ae,	// (0x0003674d) list_single_pane_fp_g2_ParamLimits

0x55ae,	// (0x0003674d) list_single_pane_fp_g2

0x4b17,	// (0x00035cb6) list_single_pane_fp_g3_ParamLimits

0x4b17,	// (0x00035cb6) list_single_pane_fp_g3

0x88ce,	// (0x00039a6d) list_single_pane_fp_g4_ParamLimits

0x88ce,	// (0x00039a6d) list_single_pane_fp_g4

0x0003,

0xfbac,	// (0x00040d4b) list_single_pane_fp_g_ParamLimits

0xfbac,	// (0x00040d4b) list_single_pane_fp_g

0x4b2b,	// (0x00035cca) list_single_pane_fp_t1_ParamLimits

0x4b2b,	// (0x00035cca) list_single_pane_fp_t1

0x4b42,	// (0x00035ce1) list_single_graphic_pane_fp_g1_ParamLimits

0x4b42,	// (0x00035ce1) list_single_graphic_pane_fp_g1

0x88c2,	// (0x00039a61) list_single_graphic_pane_fp_g2_ParamLimits

0x88c2,	// (0x00039a61) list_single_graphic_pane_fp_g2

0x55ae,	// (0x0003674d) list_single_graphic_pane_fp_g3_ParamLimits

0x55ae,	// (0x0003674d) list_single_graphic_pane_fp_g3

0x4b17,	// (0x00035cb6) list_single_graphic_pane_fp_g4_ParamLimits

0x4b17,	// (0x00035cb6) list_single_graphic_pane_fp_g4

0x88ce,	// (0x00039a6d) list_single_graphic_pane_fp_g5_ParamLimits

0x88ce,	// (0x00039a6d) list_single_graphic_pane_fp_g5

0x0004,

0xfbb5,	// (0x00040d54) list_single_graphic_pane_fp_g_ParamLimits

0xfbb5,	// (0x00040d54) list_single_graphic_pane_fp_g

0x4b4e,	// (0x00035ced) list_single_graphic_pane_fp_t1_ParamLimits

0x4b4e,	// (0x00035ced) list_single_graphic_pane_fp_t1

0x4b42,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4b42,	// (0x00035ce1) list_single_graphic_heading_pane_fp_g1

0x88c2,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x88c2,	// (0x00039a61) list_single_graphic_heading_pane_fp_g2

0x55ae,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x55ae,	// (0x0003674d) list_single_graphic_heading_pane_fp_g3

0x4b17,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4b17,	// (0x00035cb6) list_single_graphic_heading_pane_fp_g4

0x88ce,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x88ce,	// (0x00039a6d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x00040d54) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00040d54) list_single_graphic_heading_pane_fp_g

0x4b64,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b64,	// (0x00035d03) list_single_graphic_heading_pane_fp_t1

0x4b7a,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4b7a,	// (0x00035d19) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbc0,	// (0x00040d5f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbc0,	// (0x00040d5f) list_single_graphic_heading_pane_fp_t

0x4b8c,	// (0x00035d2b) list_single_cale_day_pane_fp_g1_ParamLimits

0x4b8c,	// (0x00035d2b) list_single_cale_day_pane_fp_g1

0x88da,	// (0x00039a79) list_single_cale_day_pane_fp_g2_ParamLimits

0x88da,	// (0x00039a79) list_single_cale_day_pane_fp_g2

0x4bc4,	// (0x00035d63) list_single_cale_day_pane_fp_g3_ParamLimits

0x4bc4,	// (0x00035d63) list_single_cale_day_pane_fp_g3

0x4bec,	// (0x00035d8b) list_single_cale_day_pane_fp_g4_ParamLimits

0x4bec,	// (0x00035d8b) list_single_cale_day_pane_fp_g4

0x4c10,	// (0x00035daf) list_single_cale_day_pane_fp_g5_ParamLimits

0x4c10,	// (0x00035daf) list_single_cale_day_pane_fp_g5

0x0004,

0xfbc5,	// (0x00040d64) list_single_cale_day_pane_fp_g_ParamLimits

0xfbc5,	// (0x00040d64) list_single_cale_day_pane_fp_g

0x4c34,	// (0x00035dd3) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c34,	// (0x00035dd3) list_single_cale_day_pane_fp_t1

0x4c5a,	// (0x00035df9) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c5a,	// (0x00035df9) list_single_cale_day_pane_fp_t2

0x4c73,	// (0x00035e12) list_single_cale_day_pane_fp_t3_ParamLimits

0x4c73,	// (0x00035e12) list_single_cale_day_pane_fp_t3

0x0002,

0xfbd0,	// (0x00040d6f) list_single_cale_day_pane_fp_t_ParamLimits

0xfbd0,	// (0x00040d6f) list_single_cale_day_pane_fp_t

0x88c2,	// (0x00039a61) list_empty_pane_fp_g1_ParamLimits

0x88c2,	// (0x00039a61) list_empty_pane_fp_g1

0x4c8c,	// (0x00035e2b) list_empty_pane_fp_t1

0x4c9a,	// (0x00035e39) list_empty_pane_fp_t2

0x0001,

0xfbd7,	// (0x00040d76) list_empty_pane_fp_t

0x88c2,	// (0x00039a61) list_single_heading_pane_fp_g1_ParamLimits

0x88c2,	// (0x00039a61) list_single_heading_pane_fp_g1

0x55ae,	// (0x0003674d) list_single_heading_pane_fp_g2_ParamLimits

0x55ae,	// (0x0003674d) list_single_heading_pane_fp_g2

0x4b17,	// (0x00035cb6) list_single_heading_pane_fp_g3_ParamLimits

0x4b17,	// (0x00035cb6) list_single_heading_pane_fp_g3

0x0002,

0xfbdc,	// (0x00040d7b) list_single_heading_pane_fp_g_ParamLimits

0xfbdc,	// (0x00040d7b) list_single_heading_pane_fp_g

0x4ca8,	// (0x00035e47) list_single_heading_pane_fp_t1_ParamLimits

0x4ca8,	// (0x00035e47) list_single_heading_pane_fp_t1

0x4cba,	// (0x00035e59) list_single_heading_pane_fp_t2_ParamLimits

0x4cba,	// (0x00035e59) list_single_heading_pane_fp_t2

0x0001,

0xfbe3,	// (0x00040d82) list_single_heading_pane_fp_t_ParamLimits

0xfbe3,	// (0x00040d82) list_single_heading_pane_fp_t

0x0e4b,	// (0x00031fea) aid_size_cell_fast

0x07b7,	// (0x00031956) soft_indicator_pane_cp1_t1

0x0e88,	// (0x00032027) cell_app_pane_cp2_ParamLimits

0x0e88,	// (0x00032027) cell_app_pane_cp2

0xe152,	// (0x0003f2f1) fep_hwr_candidate_drop_down_list_pane

0xe32a,	// (0x0003f4c9) fep_hwr_candidate_pane_g3_ParamLimits

0xe32a,	// (0x0003f4c9) fep_hwr_candidate_pane_g3

0x00ac,	// (0x0003124b) fep_hwr_candidate_pane_g4_ParamLimits

0x00ac,	// (0x0003124b) fep_hwr_candidate_pane_g4

0x0002,

0xfb52,	// (0x00040cf1) fep_hwr_candidate_pane_g_ParamLimits

0xfb52,	// (0x00040cf1) fep_hwr_candidate_pane_g

0x8371,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8371,	// (0x00039510) fep_vkb_candidate_drop_down_list_pane

0x878a,	// (0x00039929) fep_vkb_candidate_pane_g3

0x8792,	// (0x00039931) fep_vkb_candidate_pane_g4

0x0002,

0xfb7f,	// (0x00040d1e) fep_vkb_candidate_pane_g

0xe395,	// (0x0003f534) cell_hwr_candidate_pane_g1_ParamLimits

0xe3a3,	// (0x0003f542) cell_hwr_candidate_pane_g3_ParamLimits

0xe3a3,	// (0x0003f542) cell_hwr_candidate_pane_g3

0x9559,	// (0x0003a6f8) cell_hwr_candidate_pane_g4_ParamLimits

0x9559,	// (0x0003a6f8) cell_hwr_candidate_pane_g4

0x0002,

0xfb9e,	// (0x00040d3d) cell_hwr_candidate_pane_g_ParamLimits

0xfb9e,	// (0x00040d3d) cell_hwr_candidate_pane_g

0x87f9,	// (0x00039998) cell_vkb_candidate_pane_g3_ParamLimits

0x87f9,	// (0x00039998) cell_vkb_candidate_pane_g3

0x8814,	// (0x000399b3) cell_vkb_candidate_pane_g4_ParamLimits

0x8814,	// (0x000399b3) cell_vkb_candidate_pane_g4

0x88e6,	// (0x00039a85) cell_app_pane_cp2_g1_ParamLimits

0x88e6,	// (0x00039a85) cell_app_pane_cp2_g1

0x8904,	// (0x00039aa3) cell_app_pane_cp2_g2_ParamLimits

0x8904,	// (0x00039aa3) cell_app_pane_cp2_g2

0x0001,

0xfbe8,	// (0x00040d87) cell_app_pane_cp2_g_ParamLimits

0xfbe8,	// (0x00040d87) cell_app_pane_cp2_g

0x8910,	// (0x00039aaf) cell_app_pane_cp2_t1_ParamLimits

0x8910,	// (0x00039aaf) cell_app_pane_cp2_t1

0x0ce8,	// (0x00031e87) grid_highlight_pane_cp1_ParamLimits

0x0ce8,	// (0x00031e87) grid_highlight_pane_cp1

0xe3e2,	// (0x0003f581) cell_hwr_candidate_pane_cp1_ParamLimits

0xe3e2,	// (0x0003f581) cell_hwr_candidate_pane_cp1

0xe395,	// (0x0003f534) fep_hwr_candidate_drop_down_list_pane_g1

0xe401,	// (0x0003f5a0) fep_hwr_candidate_drop_down_list_pane_g2

0xe40e,	// (0x0003f5ad) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbed,	// (0x00040d8c) fep_hwr_candidate_drop_down_list_pane_g

0xe41b,	// (0x0003f5ba) fep_hwr_candidate_drop_down_list_scroll_pane

0xe424,	// (0x0003f5c3) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe424,	// (0x0003f5c3) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe431,	// (0x0003f5d0) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe431,	// (0x0003f5d0) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe43e,	// (0x0003f5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe43e,	// (0x0003f5dd) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xe44b,	// (0x0003f5ea) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe44b,	// (0x0003f5ea) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xe466,	// (0x0003f605) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe466,	// (0x0003f605) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe481,	// (0x0003f620) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe481,	// (0x0003f620) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe49c,	// (0x0003f63b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe49c,	// (0x0003f63b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe4b7,	// (0x0003f656) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe4b7,	// (0x0003f656) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf4,	// (0x00040d93) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf4,	// (0x00040d93) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8957,	// (0x00039af6) cell_vkb_candidate_pane_cp1_ParamLimits

0x8957,	// (0x00039af6) cell_vkb_candidate_pane_cp1

0x848a,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x848a,	// (0x00039629) fep_vkb_candidate_drop_down_list_pane_g1

0x8922,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8922,	// (0x00039ac1) fep_vkb_candidate_drop_down_list_pane_g2

0x892f,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x892f,	// (0x00039ace) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfc05,	// (0x00040da4) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfc05,	// (0x00040da4) fep_vkb_candidate_drop_down_list_pane_g

0x8977,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8977,	// (0x00039b16) fep_vkb_candidate_drop_down_list_scroll_pane

0x8984,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8984,	// (0x00039b23) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8991,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8991,	// (0x00039b30) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x899d,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x899d,	// (0x00039b3c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x87b7,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x87b7,	// (0x00039956) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x87d8,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x87d8,	// (0x00039977) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x89a9,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x89a9,	// (0x00039b48) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x89ca,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x89ca,	// (0x00039b69) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x893c,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x893c,	// (0x00039adb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfc0c,	// (0x00040dab) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfc0c,	// (0x00040dab) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x5220,	// (0x000363bf) title_pane_g1_ParamLimits

0x522d,	// (0x000363cc) title_pane_g2_ParamLimits

0xf592,	// (0x00040731) title_pane_g_ParamLimits

0x120b,	// (0x000323aa) aid_call2_pane

0x1213,	// (0x000323b2) aid_call_pane

0x121b,	// (0x000323ba) popup_clock_analogue_window_g1

0x121b,	// (0x000323ba) popup_clock_analogue_window_g2

0xd83d,	// (0x0003e9dc) popup_clock_analogue_window_g3

0xd846,	// (0x0003e9e5) popup_clock_analogue_window_g4

0x0632,	// (0x000317d1) popup_clock_analogue_window_g5

0x0004,

0xf741,	// (0x000408e0) popup_clock_analogue_window_g

0xd84e,	// (0x0003e9ed) popup_clock_analogue_window_t1

0xd85c,	// (0x0003e9fb) clock_digital_number_pane_ParamLimits

0xd85c,	// (0x0003e9fb) clock_digital_number_pane

0xd868,	// (0x0003ea07) clock_digital_number_pane_cp02_ParamLimits

0xd868,	// (0x0003ea07) clock_digital_number_pane_cp02

0xd874,	// (0x0003ea13) clock_digital_number_pane_cp03_ParamLimits

0xd874,	// (0x0003ea13) clock_digital_number_pane_cp03

0xd880,	// (0x0003ea1f) clock_digital_number_pane_cp04_ParamLimits

0xd880,	// (0x0003ea1f) clock_digital_number_pane_cp04

0xd88c,	// (0x0003ea2b) clock_digital_separator_pane_ParamLimits

0xd88c,	// (0x0003ea2b) clock_digital_separator_pane

0xd898,	// (0x0003ea37) popup_clock_digital_window_t1_ParamLimits

0xd898,	// (0x0003ea37) popup_clock_digital_window_t1

0x0632,	// (0x000317d1) clock_digital_number_pane_g1

0x0632,	// (0x000317d1) clock_digital_number_pane_g2

0x0001,

0xf74c,	// (0x000408eb) clock_digital_number_pane_g

0x0632,	// (0x000317d1) clock_digital_separator_pane_g1

0x0632,	// (0x000317d1) clock_digital_separator_pane_g2

0x0001,

0xf74c,	// (0x000408eb) clock_digital_separator_pane_g

0x759d,	// (0x0003873c) aid_fill_nsta_ParamLimits

0x7666,	// (0x00038805) indicator_nsta_pane_ParamLimits

0x1b65,	// (0x00032d04) popup_clock_analogue_window

0x1b65,	// (0x00032d04) popup_clock_digital_window

0x0698,	// (0x00031837) grid_indicator_nsta_pane_ParamLimits

0x3691,	// (0x00034830) clock_nsta_pane_t2

0x0001,

0xfadf,	// (0x00040c7e) clock_nsta_pane_t

0xd801,	// (0x0003e9a0) aid_size_max_handle

0xd80b,	// (0x0003e9aa) aid_size_min_handle

0x172a,	// (0x000328c9) editor_scroll_pane

0x89eb,	// (0x00039b8a) ex_editor_pane

0x0e07,	// (0x00031fa6) scroll_pane_cp13

0x0c87,	// (0x00031e26) scroll_pane_cp14

0x1245,	// (0x000323e4) scroll_pane_cp36

0x5924,	// (0x00036ac3) list_single_graphic_hl_pane_cp2_ParamLimits

0x5924,	// (0x00036ac3) list_single_graphic_hl_pane_cp2

0x48e3,	// (0x00035a82) list_single_graphic_hl_pane_ParamLimits

0x48e3,	// (0x00035a82) list_single_graphic_hl_pane

0x4cd0,	// (0x00035e6f) aid_size_min_hl_cp1

0x89f3,	// (0x00039b92) list_highlight_pane_cp34_ParamLimits

0x89f3,	// (0x00039b92) list_highlight_pane_cp34

0x8a04,	// (0x00039ba3) list_single_graphic_hl_pane_g1_ParamLimits

0x8a04,	// (0x00039ba3) list_single_graphic_hl_pane_g1

0x4cd9,	// (0x00035e78) list_single_graphic_hl_pane_g2_ParamLimits

0x4cd9,	// (0x00035e78) list_single_graphic_hl_pane_g2

0x4cd9,	// (0x00035e78) list_single_graphic_hl_pane_g3_ParamLimits

0x4cd9,	// (0x00035e78) list_single_graphic_hl_pane_g3

0x169b,	// (0x0003283a) list_single_graphic_hl_pane_g4_ParamLimits

0x169b,	// (0x0003283a) list_single_graphic_hl_pane_g4

0x4ce5,	// (0x00035e84) list_single_graphic_hl_pane_g5_ParamLimits

0x4ce5,	// (0x00035e84) list_single_graphic_hl_pane_g5

0x0004,

0xfc1d,	// (0x00040dbc) list_single_graphic_hl_pane_g_ParamLimits

0xfc1d,	// (0x00040dbc) list_single_graphic_hl_pane_g

0x4040,	// (0x000351df) list_single_graphic_hl_pane_t1_ParamLimits

0x4040,	// (0x000351df) list_single_graphic_hl_pane_t1

0x8a11,	// (0x00039bb0) aid_size_min_hl_cp2

0x8a1a,	// (0x00039bb9) list_highlight_pane_cp34_cp2_ParamLimits

0x8a1a,	// (0x00039bb9) list_highlight_pane_cp34_cp2

0x8a04,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8a04,	// (0x00039ba3) list_single_graphic_hl_pane_g1_cp2

0x8a27,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8a27,	// (0x00039bc6) list_single_graphic_hl_pane_g2_cp2

0x8a33,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8a33,	// (0x00039bd2) list_single_graphic_hl_pane_g3_cp2

0x1661,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1661,	// (0x00032800) list_single_graphic_hl_pane_g4_cp2

0x8a41,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8a41,	// (0x00039be0) list_single_graphic_hl_pane_g5_cp2

0xdb4a,	// (0x0003ece9) control_pane_g4_ParamLimits

0xdb4a,	// (0x0003ece9) control_pane_g4

0x0e3f,	// (0x00031fde) bg_popup_sub_pane_cp10_ParamLimits

0x81fb,	// (0x0003939a) list_choice_list_pane_ParamLimits

0x820a,	// (0x000393a9) scroll_pane_cp23

0x07d4,	// (0x00031973) bg_popup_preview_window_pane_cp02_ParamLimits

0x8865,	// (0x00039a04) list_preview_fixed_pane_ParamLimits

0x887b,	// (0x00039a1a) list_preview_fixed_pane_cp_ParamLimits

0x887b,	// (0x00039a1a) list_preview_fixed_pane_cp

0x8887,	// (0x00039a26) popup_preview_fixed_window_g1_ParamLimits

0x8887,	// (0x00039a26) popup_preview_fixed_window_g1

0x8893,	// (0x00039a32) popup_preview_fixed_window_g2_ParamLimits

0x8893,	// (0x00039a32) popup_preview_fixed_window_g2

0x0002,

0xfba5,	// (0x00040d44) popup_preview_fixed_window_g_ParamLimits

0xfba5,	// (0x00040d44) popup_preview_fixed_window_g

0xd775,	// (0x0003e914) aid_navi_side_left_pane_ParamLimits

0xd78a,	// (0x0003e929) aid_navi_side_right_pane_ParamLimits

0xd7a2,	// (0x0003e941) navi_icon_pane_stacon_ParamLimits

0xd7b6,	// (0x0003e955) navi_navi_pane_stacon_ParamLimits

0xd7a2,	// (0x0003e941) navi_text_pane_stacon_ParamLimits

0x0628,	// (0x000317c7) main_text_info_pane

0x8a6b,	// (0x00039c0a) listscroll_text_info_pane

0x8a73,	// (0x00039c12) list_text_info_pane_ParamLimits

0x8a73,	// (0x00039c12) list_text_info_pane

0x8a82,	// (0x00039c21) scroll_pane_cp24_ParamLimits

0x8a82,	// (0x00039c21) scroll_pane_cp24

0x8aa0,	// (0x00039c3f) list_text_info_pane_t1_ParamLimits

0x8aa0,	// (0x00039c3f) list_text_info_pane_t1

0x712e,	// (0x000382cd) popup_fast_swap2_window_ParamLimits

0x712e,	// (0x000382cd) popup_fast_swap2_window

0x8ad9,	// (0x00039c78) aid_size_cell_fast2

0x0628,	// (0x000317c7) bg_popup_window_pane_cp17

0x2009,	// (0x000331a8) heading_pane_cp2

0x09ba,	// (0x00031b59) listscroll_fast2_pane

0x8ae3,	// (0x00039c82) grid_fast2_pane

0x8aed,	// (0x00039c8c) listscroll_fast2_pane_g1

0x8af5,	// (0x00039c94) listscroll_fast2_pane_g2

0x0001,

0xfc28,	// (0x00040dc7) listscroll_fast2_pane_g

0x0e07,	// (0x00031fa6) scroll_pane_cp26

0x8aff,	// (0x00039c9e) cell_fast2_pane_ParamLimits

0x8aff,	// (0x00039c9e) cell_fast2_pane

0x8b14,	// (0x00039cb3) cell_fast2_pane_g1

0x8b1d,	// (0x00039cbc) cell_fast2_pane_g2

0x8b26,	// (0x00039cc5) cell_fast2_pane_g3

0x0002,

0xfc2d,	// (0x00040dcc) cell_fast2_pane_g

0x0a4e,	// (0x00031bed) grid_highlight_pane_cp9

0x0a63,	// (0x00031c02) main_eswt_pane_ParamLimits

0x0a63,	// (0x00031c02) main_eswt_pane

0x8a97,	// (0x00039c36) list_single_text_info_pane

0x8b2e,	// (0x00039ccd) eswt_ctrl_button_pane

0x8b2e,	// (0x00039ccd) eswt_ctrl_canvas_pane

0x8b36,	// (0x00039cd5) eswt_ctrl_combo_pane

0x8b2e,	// (0x00039ccd) eswt_ctrl_default_pane

0x8b2e,	// (0x00039ccd) eswt_ctrl_label_pane

0x8b3e,	// (0x00039cdd) eswt_ctrl_wait_pane

0x8b46,	// (0x00039ce5) eswt_shell_pane

0x0628,	// (0x000317c7) listscroll_eswt_app_pane

0x8b66,	// (0x00039d05) popup_eswt_tasktip_window_ParamLimits

0x8b66,	// (0x00039d05) popup_eswt_tasktip_window

0x1d62,	// (0x00032f01) bg_popup_window_pane_cp18

0x8b77,	// (0x00039d16) eswt_control_pane_g1_ParamLimits

0x8b77,	// (0x00039d16) eswt_control_pane_g1

0x8b84,	// (0x00039d23) eswt_control_pane_g2_ParamLimits

0x8b84,	// (0x00039d23) eswt_control_pane_g2

0x8b91,	// (0x00039d30) eswt_control_pane_g3_ParamLimits

0x8b91,	// (0x00039d30) eswt_control_pane_g3

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_ParamLimits

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4

0x0003,

0xfc34,	// (0x00040dd3) eswt_control_pane_g_ParamLimits

0xfc34,	// (0x00040dd3) eswt_control_pane_g

0x0ce8,	// (0x00031e87) bg_button_pane_ParamLimits

0x0ce8,	// (0x00031e87) bg_button_pane

0x0a63,	// (0x00031c02) common_borders_pane_copy2_ParamLimits

0x0a63,	// (0x00031c02) common_borders_pane_copy2

0x8bab,	// (0x00039d4a) control_button_pane_g1_ParamLimits

0x8bab,	// (0x00039d4a) control_button_pane_g1

0x8bb7,	// (0x00039d56) control_button_pane_g2_ParamLimits

0x8bb7,	// (0x00039d56) control_button_pane_g2

0x8bc3,	// (0x00039d62) control_button_pane_g3_ParamLimits

0x8bc3,	// (0x00039d62) control_button_pane_g3

0x0002,

0xfc3d,	// (0x00040ddc) control_button_pane_g_ParamLimits

0xfc3d,	// (0x00040ddc) control_button_pane_g

0x8bd7,	// (0x00039d76) control_button_pane_t1

0x8be5,	// (0x00039d84) control_button_pane_t2

0x0001,

0xfc44,	// (0x00040de3) control_button_pane_t

0x1c72,	// (0x00032e11) bg_button_pane_g1

0x1c82,	// (0x00032e21) bg_button_pane_g2

0x1c7a,	// (0x00032e19) bg_button_pane_g3

0x1c92,	// (0x00032e31) bg_button_pane_g4

0x1c8a,	// (0x00032e29) bg_button_pane_g5

0x1c9a,	// (0x00032e39) bg_button_pane_g6

0x1ca2,	// (0x00032e41) bg_button_pane_g7

0x1cb2,	// (0x00032e51) bg_button_pane_g8

0x1caa,	// (0x00032e49) bg_button_pane_g9

0x0008,

0xf8a4,	// (0x00040a43) bg_button_pane_g

0x81b6,	// (0x00039355) common_borders_pane_ParamLimits

0x81b6,	// (0x00039355) common_borders_pane

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy1_ParamLimits

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy1

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy1_ParamLimits

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy1

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy1_ParamLimits

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy1

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy1_ParamLimits

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy1

0x81f1,	// (0x00039390) bg_eswt_ctrl_canvas_pane_g1

0x81b6,	// (0x00039355) common_borders_pane_cp2_ParamLimits

0x81b6,	// (0x00039355) common_borders_pane_cp2

0x81b6,	// (0x00039355) common_borders_pane_cp3_ParamLimits

0x81b6,	// (0x00039355) common_borders_pane_cp3

0x8bf3,	// (0x00039d92) separator_horizontal_pane

0x8bfb,	// (0x00039d9a) separator_vertical_pane

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy2_ParamLimits

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy2

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy2_ParamLimits

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy2

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy2_ParamLimits

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy2

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy2_ParamLimits

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy2

0x0628,	// (0x000317c7) common_borders_pane_cp4

0x8c04,	// (0x00039da3) separator_horizontal_pane_g1

0x8c0d,	// (0x00039dac) separator_horizontal_pane_g2

0x8c16,	// (0x00039db5) separator_horizontal_pane_g3

0x0002,

0xfc49,	// (0x00040de8) separator_horizontal_pane_g

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy3_ParamLimits

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy3

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy3_ParamLimits

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy3

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy3_ParamLimits

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy3

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy3_ParamLimits

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy3

0x0628,	// (0x000317c7) common_borders_pane_cp5

0x8c1f,	// (0x00039dbe) separator_vertical_pane_g1

0x8c28,	// (0x00039dc7) separator_vertical_pane_g2

0x8c31,	// (0x00039dd0) separator_vertical_pane_g3

0x0002,

0xfc50,	// (0x00040def) separator_vertical_pane_g

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy4_ParamLimits

0x8b77,	// (0x00039d16) eswt_control_pane_g1_copy4

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy4_ParamLimits

0x8b84,	// (0x00039d23) eswt_control_pane_g2_copy4

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy4_ParamLimits

0x8b91,	// (0x00039d30) eswt_control_pane_g3_copy4

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy4_ParamLimits

0x8b9e,	// (0x00039d3d) eswt_control_pane_g4_copy4

0x8c3a,	// (0x00039dd9) eswt_ctrl_combo_button_pane

0x8c42,	// (0x00039de1) eswt_ctrl_input_pane

0x8c4a,	// (0x00039de9) popup_choice_list_window_cp70

0x8c52,	// (0x00039df1) eswt_ctrl_input_pane_t1

0x0628,	// (0x000317c7) input_focus_pane_cp70

0x81b6,	// (0x00039355) bg_button_pane_cp70_ParamLimits

0x81b6,	// (0x00039355) bg_button_pane_cp70

0x8c60,	// (0x00039dff) eswt_ctrl_combo_button_pane_g1

0x8c68,	// (0x00039e07) wait_bar_pane_cp70

0x1d62,	// (0x00032f01) bg_popup_window_pane_cp70_ParamLimits

0x1d62,	// (0x00032f01) bg_popup_window_pane_cp70

0x8c70,	// (0x00039e0f) popup_eswt_tasktip_window_t1

0x8c86,	// (0x00039e25) wait_bar_pane_cp71_ParamLimits

0x8c86,	// (0x00039e25) wait_bar_pane_cp71

0x8c92,	// (0x00039e31) grid_eswt_app_pane

0x1051,	// (0x000321f0) scroll_pane_cp70

0x8c9b,	// (0x00039e3a) cell_eswt_app_pane_ParamLimits

0x8c9b,	// (0x00039e3a) cell_eswt_app_pane

0x8ccf,	// (0x00039e6e) cell_eswt_app_pane_g1_ParamLimits

0x8ccf,	// (0x00039e6e) cell_eswt_app_pane_g1

0x8cfe,	// (0x00039e9d) cell_eswt_app_pane_g2_ParamLimits

0x8cfe,	// (0x00039e9d) cell_eswt_app_pane_g2

0x0001,

0xfc57,	// (0x00040df6) cell_eswt_app_pane_g_ParamLimits

0xfc57,	// (0x00040df6) cell_eswt_app_pane_g

0x8d27,	// (0x00039ec6) cell_eswt_app_pane_t1_ParamLimits

0x8d27,	// (0x00039ec6) cell_eswt_app_pane_t1

0x8d59,	// (0x00039ef8) grid_highlight_pane_cp70_ParamLimits

0x8d59,	// (0x00039ef8) grid_highlight_pane_cp70

0x15fd,	// (0x0003279c) set_content_pane_g1

0x1901,	// (0x00032aa0) status_small_volume_pane

0xe4d2,	// (0x0003f671) status_small_volume_pane_g1

0xe4da,	// (0x0003f679) volume_small2_pane

0xe4e3,	// (0x0003f682) volume_small2_pane_g1

0xe4ec,	// (0x0003f68b) volume_small2_pane_g2

0xe4f5,	// (0x0003f694) volume_small2_pane_g3

0xe4fe,	// (0x0003f69d) volume_small2_pane_g4

0xe507,	// (0x0003f6a6) volume_small2_pane_g5

0xe510,	// (0x0003f6af) volume_small2_pane_g6

0xe519,	// (0x0003f6b8) volume_small2_pane_g7

0xe522,	// (0x0003f6c1) volume_small2_pane_g8

0xe52b,	// (0x0003f6ca) volume_small2_pane_g9

0xe534,	// (0x0003f6d3) volume_small2_pane_g10

0x0009,

0xfc5c,	// (0x00040dfb) volume_small2_pane_g

0x85d2,	// (0x00039771) fep_vkb_top_text_pane_g1_ParamLimits

0x85ed,	// (0x0003978c) fep_vkb_top_text_pane_t1_ParamLimits

0x889f,	// (0x00039a3e) popup_preview_fixed_window_g3_ParamLimits

0x889f,	// (0x00039a3e) popup_preview_fixed_window_g3

0x7530,	// (0x000386cf) popup_toolbar_trans_pane

0x7bae,	// (0x00038d4d) aid_height_set_list_ParamLimits

0x2be0,	// (0x00033d7f) aid_size_parent_ParamLimits

0x0e3f,	// (0x00031fde) list_highlight_pane_cp2_ParamLimits

0x15fd,	// (0x0003279c) set_content_pane_g1_ParamLimits

0x4905,	// (0x00035aa4) list_single_image_pane_ParamLimits

0x4905,	// (0x00035aa4) list_single_image_pane

0x8d65,	// (0x00039f04) aid_size_cell_image_ParamLimits

0x8d65,	// (0x00039f04) aid_size_cell_image

0x8d72,	// (0x00039f11) grid_single_image_pane_ParamLimits

0x8d72,	// (0x00039f11) grid_single_image_pane

0x0d02,	// (0x00031ea1) list_single_image_pane_g1_ParamLimits

0x0d02,	// (0x00031ea1) list_single_image_pane_g1

0x0d0e,	// (0x00031ead) list_single_image_pane_g2_ParamLimits

0x0d0e,	// (0x00031ead) list_single_image_pane_g2

0x0001,

0xfc71,	// (0x00040e10) list_single_image_pane_g_ParamLimits

0xfc71,	// (0x00040e10) list_single_image_pane_g

0x8d7e,	// (0x00039f1d) list_single_image_pane_t1_ParamLimits

0x8d7e,	// (0x00039f1d) list_single_image_pane_t1

0x8d94,	// (0x00039f33) cell_image_list_pane_ParamLimits

0x8d94,	// (0x00039f33) cell_image_list_pane

0x8da8,	// (0x00039f47) cell_image_list_pane_g1

0x8db1,	// (0x00039f50) cell_image_list_pane_g2

0x0001,

0xfc76,	// (0x00040e15) cell_image_list_pane_g

0x8dba,	// (0x00039f59) aid_size_cell_tb_trans_pane

0x0ce8,	// (0x00031e87) bg_tb_trans_pane

0x8dcc,	// (0x00039f6b) grid_tb_trans_pane

0x1c72,	// (0x00032e11) bg_tb_trans_pane_g1

0x1c82,	// (0x00032e21) bg_tb_trans_pane_g2

0x1c7a,	// (0x00032e19) bg_tb_trans_pane_g3

0x1c92,	// (0x00032e31) bg_tb_trans_pane_g4

0x1c8a,	// (0x00032e29) bg_tb_trans_pane_g5

0x1cb2,	// (0x00032e51) bg_tb_trans_pane_g6

0x1caa,	// (0x00032e49) bg_tb_trans_pane_g7

0x1c9a,	// (0x00032e39) bg_tb_trans_pane_g8

0x1ca2,	// (0x00032e41) bg_tb_trans_pane_g9

0x0008,

0xfc7b,	// (0x00040e1a) bg_tb_trans_pane_g

0x8de0,	// (0x00039f7f) cell_toolbar_trans_pane_ParamLimits

0x8de0,	// (0x00039f7f) cell_toolbar_trans_pane

0x81f1,	// (0x00039390) cell_toolbar_trans_pane_g1

0x7f50,	// (0x000390ef) list_form2_midp_pane_t1

0x7f5e,	// (0x000390fd) list_form2_midp_pane_t2

0x0001,

0xfb18,	// (0x00040cb7) list_form2_midp_pane_t

0x3716,	// (0x000348b5) scroll_pane_cp51_ParamLimits

0x388c,	// (0x00034a2b) form2_midp_wait_pane_g1

0x3895,	// (0x00034a34) form2_midp_wait_pane_g2

0x389e,	// (0x00034a3d) form2_midp_wait_pane_g3

0x0002,

0xfb2d,	// (0x00040ccc) form2_midp_wait_pane_g

0x0698,	// (0x00031837) list_highlight_pane_cp21_ParamLimits

0x38be,	// (0x00034a5d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x38cd,	// (0x00034a6c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x616f,	// (0x0003730e) list_single_2graphic_im_pane_ParamLimits

0x616f,	// (0x0003730e) list_single_2graphic_im_pane

0x8e06,	// (0x00039fa5) list_single_2graphic_im_pane_g1_ParamLimits

0x8e06,	// (0x00039fa5) list_single_2graphic_im_pane_g1

0x8e17,	// (0x00039fb6) list_single_2graphic_im_pane_g2_ParamLimits

0x8e17,	// (0x00039fb6) list_single_2graphic_im_pane_g2

0x8e23,	// (0x00039fc2) list_single_2graphic_im_pane_g3_ParamLimits

0x8e23,	// (0x00039fc2) list_single_2graphic_im_pane_g3

0x0003,

0xfc8e,	// (0x00040e2d) list_single_2graphic_im_pane_g_ParamLimits

0xfc8e,	// (0x00040e2d) list_single_2graphic_im_pane_g

0x8e43,	// (0x00039fe2) list_single_2graphic_im_pane_t1_ParamLimits

0x8e43,	// (0x00039fe2) list_single_2graphic_im_pane_t1

0x88ab,	// (0x00039a4a) list_single_graphic_2heading_pane_fp_ParamLimits

0x88ab,	// (0x00039a4a) list_single_graphic_2heading_pane_fp

0x4b42,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4b42,	// (0x00035ce1) list_single_graphic_2heading_pane_fp_g1

0x88c2,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x88c2,	// (0x00039a61) list_single_graphic_2heading_pane_fp_g2

0x55ae,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x55ae,	// (0x0003674d) list_single_graphic_2heading_pane_fp_g3

0x4b17,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4b17,	// (0x00035cb6) list_single_graphic_2heading_pane_fp_g4

0x88ce,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x88ce,	// (0x00039a6d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfbb5,	// (0x00040d54) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00040d54) list_single_graphic_2heading_pane_fp_g

0x4cf9,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4cf9,	// (0x00035e98) list_single_graphic_2heading_pane_fp_t1

0x4b7a,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4b7a,	// (0x00035d19) list_single_graphic_2heading_pane_fp_t2

0x4d0f,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4d0f,	// (0x00035eae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc97,	// (0x00040e36) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc97,	// (0x00040e36) list_single_graphic_2heading_pane_fp_t

0x8291,	// (0x00039430) fep_hwr_write_pane_g5_ParamLimits

0x8291,	// (0x00039430) fep_hwr_write_pane_g5

0x829d,	// (0x0003943c) fep_hwr_write_pane_g6_ParamLimits

0x829d,	// (0x0003943c) fep_hwr_write_pane_g6

0x8b46,	// (0x00039ce5) eswt_shell_pane_ParamLimits

0x1d62,	// (0x00032f01) bg_popup_window_pane_cp18_ParamLimits

0x2d29,	// (0x00033ec8) heading_pane_cp70

0x8c70,	// (0x00039e0f) popup_eswt_tasktip_window_t1_ParamLimits

0x75dd,	// (0x0003877c) aid_touch_tab_arrow_left

0x75ec,	// (0x0003878b) aid_touch_tab_arrow_right

0x523e,	// (0x000363dd) title_pane_g3_ParamLimits

0x523e,	// (0x000363dd) title_pane_g3

0x0ca7,	// (0x00031e46) set_value_pane_g1

0x7530,	// (0x000386cf) popup_toolbar_trans_pane_ParamLimits

0x8dba,	// (0x00039f59) aid_size_cell_tb_trans_pane_ParamLimits

0x0ce8,	// (0x00031e87) bg_tb_trans_pane_ParamLimits

0x8dcc,	// (0x00039f6b) grid_tb_trans_pane_ParamLimits

0x07d4,	// (0x00031973) cont_note_pane_ParamLimits

0x07d4,	// (0x00031973) cont_note_pane

0x0a63,	// (0x00031c02) cont_snote2_single_text_pane_ParamLimits

0x0a63,	// (0x00031c02) cont_snote2_single_text_pane

0x0a63,	// (0x00031c02) cont_snote2_single_graphic_pane_ParamLimits

0x0a63,	// (0x00031c02) cont_snote2_single_graphic_pane

0x21ee,	// (0x0003338d) cont_note_wait_pane_ParamLimits

0x21ee,	// (0x0003338d) cont_note_wait_pane

0x21ee,	// (0x0003338d) cont_note_image_pane_ParamLimits

0x21ee,	// (0x0003338d) cont_note_image_pane

0x8e74,	// (0x0003a013) popup_note2_window_g1_ParamLimits

0x8e74,	// (0x0003a013) popup_note2_window_g1

0x8ea5,	// (0x0003a044) popup_note2_window_t1_ParamLimits

0x8ea5,	// (0x0003a044) popup_note2_window_t1

0x8eea,	// (0x0003a089) popup_note2_window_t2_ParamLimits

0x8eea,	// (0x0003a089) popup_note2_window_t2

0x8f2f,	// (0x0003a0ce) popup_note2_window_t3_ParamLimits

0x8f2f,	// (0x0003a0ce) popup_note2_window_t3

0x8f74,	// (0x0003a113) popup_note2_window_t4_ParamLimits

0x8f74,	// (0x0003a113) popup_note2_window_t4

0x084c,	// (0x000319eb) popup_note2_window_t5_ParamLimits

0x084c,	// (0x000319eb) popup_note2_window_t5

0x0004,

0xfca3,	// (0x00040e42) popup_note2_window_t_ParamLimits

0xfca3,	// (0x00040e42) popup_note2_window_t

0x8fa3,	// (0x0003a142) popup_note2_image_window_g1_ParamLimits

0x8fa3,	// (0x0003a142) popup_note2_image_window_g1

0x8faf,	// (0x0003a14e) popup_note2_image_window_g2_ParamLimits

0x8faf,	// (0x0003a14e) popup_note2_image_window_g2

0x0001,

0xfcae,	// (0x00040e4d) popup_note2_image_window_g_ParamLimits

0xfcae,	// (0x00040e4d) popup_note2_image_window_g

0x8fc1,	// (0x0003a160) popup_note2_image_window_t1_ParamLimits

0x8fc1,	// (0x0003a160) popup_note2_image_window_t1

0x8fd9,	// (0x0003a178) popup_note2_image_window_t2_ParamLimits

0x8fd9,	// (0x0003a178) popup_note2_image_window_t2

0x8ff1,	// (0x0003a190) popup_note2_image_window_t3_ParamLimits

0x8ff1,	// (0x0003a190) popup_note2_image_window_t3

0x0002,

0xfcb3,	// (0x00040e52) popup_note2_image_window_t_ParamLimits

0xfcb3,	// (0x00040e52) popup_note2_image_window_t

0x21fc,	// (0x0003339b) popup_note2_wait_window_g1_ParamLimits

0x21fc,	// (0x0003339b) popup_note2_wait_window_g1

0x2208,	// (0x000333a7) popup_note2_wait_window_g2_ParamLimits

0x2208,	// (0x000333a7) popup_note2_wait_window_g2

0x2214,	// (0x000333b3) popup_note2_wait_window_g3_ParamLimits

0x2214,	// (0x000333b3) popup_note2_wait_window_g3

0x0002,

0xf886,	// (0x00040a25) popup_note2_wait_window_g_ParamLimits

0xf886,	// (0x00040a25) popup_note2_wait_window_g

0x900d,	// (0x0003a1ac) popup_note2_wait_window_t1_ParamLimits

0x900d,	// (0x0003a1ac) popup_note2_wait_window_t1

0x902b,	// (0x0003a1ca) popup_note2_wait_window_t2_ParamLimits

0x902b,	// (0x0003a1ca) popup_note2_wait_window_t2

0x9049,	// (0x0003a1e8) popup_note2_wait_window_t3_ParamLimits

0x9049,	// (0x0003a1e8) popup_note2_wait_window_t3

0x905b,	// (0x0003a1fa) popup_note2_wait_window_t4_ParamLimits

0x905b,	// (0x0003a1fa) popup_note2_wait_window_t4

0x0003,

0xfcba,	// (0x00040e59) popup_note2_wait_window_t_ParamLimits

0xfcba,	// (0x00040e59) popup_note2_wait_window_t

0x906d,	// (0x0003a20c) wait_bar2_pane_ParamLimits

0x906d,	// (0x0003a20c) wait_bar2_pane

0x9085,	// (0x0003a224) popup_snote2_single_text_window_g1_ParamLimits

0x9085,	// (0x0003a224) popup_snote2_single_text_window_g1

0x90ad,	// (0x0003a24c) popup_snote2_single_text_window_t1_ParamLimits

0x90ad,	// (0x0003a24c) popup_snote2_single_text_window_t1

0x90f9,	// (0x0003a298) popup_snote2_single_text_window_t2_ParamLimits

0x90f9,	// (0x0003a298) popup_snote2_single_text_window_t2

0x9145,	// (0x0003a2e4) popup_snote2_single_text_window_t3_ParamLimits

0x9145,	// (0x0003a2e4) popup_snote2_single_text_window_t3

0x9186,	// (0x0003a325) popup_snote2_single_text_window_t4_ParamLimits

0x9186,	// (0x0003a325) popup_snote2_single_text_window_t4

0x91bc,	// (0x0003a35b) popup_snote2_single_text_window_t5_ParamLimits

0x91bc,	// (0x0003a35b) popup_snote2_single_text_window_t5

0x0004,

0xfcc3,	// (0x00040e62) popup_snote2_single_text_window_t_ParamLimits

0xfcc3,	// (0x00040e62) popup_snote2_single_text_window_t

0x91e7,	// (0x0003a386) popup_snote2_single_graphic_window_g1_ParamLimits

0x91e7,	// (0x0003a386) popup_snote2_single_graphic_window_g1

0x920f,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2_ParamLimits

0x920f,	// (0x0003a3ae) popup_snote2_single_graphic_window_g2

0x0001,

0xfcce,	// (0x00040e6d) popup_snote2_single_graphic_window_g_ParamLimits

0xfcce,	// (0x00040e6d) popup_snote2_single_graphic_window_g

0x9237,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1_ParamLimits

0x9237,	// (0x0003a3d6) popup_snote2_single_graphic_window_t1

0x9283,	// (0x0003a422) popup_snote2_single_graphic_window_t2_ParamLimits

0x9283,	// (0x0003a422) popup_snote2_single_graphic_window_t2

0x9145,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3_ParamLimits

0x9145,	// (0x0003a2e4) popup_snote2_single_graphic_window_t3

0x9186,	// (0x0003a325) popup_snote2_single_graphic_window_t4_ParamLimits

0x9186,	// (0x0003a325) popup_snote2_single_graphic_window_t4

0x91bc,	// (0x0003a35b) popup_snote2_single_graphic_window_t5_ParamLimits

0x91bc,	// (0x0003a35b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcd3,	// (0x00040e72) popup_snote2_single_graphic_window_t_ParamLimits

0xfcd3,	// (0x00040e72) popup_snote2_single_graphic_window_t

0x36c6,	// (0x00034865) clock_nsta_pane_cp2_t1

0x36c6,	// (0x00034865) clock_nsta_pane_cp2_t2

0x0001,

0xfaee,	// (0x00040c8d) clock_nsta_pane_cp2_t

0x4567,	// (0x00035706) form_field_data_wide_pane_g1_ParamLimits

0x0d02,	// (0x00031ea1) form_field_data_wide_pane_g2_ParamLimits

0x0d02,	// (0x00031ea1) form_field_data_wide_pane_g2

0x0d0e,	// (0x00031ead) form_field_data_wide_pane_g3_ParamLimits

0x0d0e,	// (0x00031ead) form_field_data_wide_pane_g3

0x0002,

0xf6c4,	// (0x00040863) form_field_data_wide_pane_g_ParamLimits

0xf6c4,	// (0x00040863) form_field_data_wide_pane_g

0x7e17,	// (0x00038fb6) grid_touch_3_pane_ParamLimits

0x7e17,	// (0x00038fb6) grid_touch_3_pane

0x92cf,	// (0x0003a46e) cell_touch_3_pane_ParamLimits

0x92cf,	// (0x0003a46e) cell_touch_3_pane

0x81f1,	// (0x00039390) cell_touch_3_pane_g1

0x81f1,	// (0x00039390) cell_touch_3_pane_g2

0x0001,

0xfb73,	// (0x00040d12) cell_touch_3_pane_g

0x087e,	// (0x00031a1d) cont_query_data_pane

0x0886,	// (0x00031a25) cont_query_data_pane_cp1

0x92fe,	// (0x0003a49d) button_value_adjust_pane_cp7

0x9306,	// (0x0003a4a5) query_popup_pane_cp3

0x1277,	// (0x00032416) bg_popup_sub_pane_cp22_ParamLimits

0xd8b7,	// (0x0003ea56) navi_navi_volume_pane_cp2

0xd8d2,	// (0x0003ea71) popup_side_volume_key_window_g2

0xd8e1,	// (0x0003ea80) popup_side_volume_key_window_g3

0x0002,

0xf756,	// (0x000408f5) popup_side_volume_key_window_g

0xd8fe,	// (0x0003ea9d) popup_side_volume_key_window_t2

0x0001,

0xf75d,	// (0x000408fc) popup_side_volume_key_window_t

0x14c7,	// (0x00032666) popup_side_volume_key_window_ParamLimits

0x41c1,	// (0x00035360) list_double_graphic_pane_g4_ParamLimits

0x41c1,	// (0x00035360) list_double_graphic_pane_g4

0x61ba,	// (0x00037359) list_single_2heading_msg_pane_ParamLimits

0x61ba,	// (0x00037359) list_single_2heading_msg_pane

0x670b,	// (0x000378aa) list_single_2heading_msg_pane_g1_ParamLimits

0x670b,	// (0x000378aa) list_single_2heading_msg_pane_g1

0x6717,	// (0x000378b6) list_single_2heading_msg_pane_g2_ParamLimits

0x6717,	// (0x000378b6) list_single_2heading_msg_pane_g2

0x6723,	// (0x000378c2) list_single_2heading_msg_pane_g3_ParamLimits

0x6723,	// (0x000378c2) list_single_2heading_msg_pane_g3

0x672f,	// (0x000378ce) list_single_2heading_msg_pane_g4_ParamLimits

0x672f,	// (0x000378ce) list_single_2heading_msg_pane_g4

0x0003,

0xfcde,	// (0x00040e7d) list_single_2heading_msg_pane_g_ParamLimits

0xfcde,	// (0x00040e7d) list_single_2heading_msg_pane_g

0x4d2f,	// (0x00035ece) list_single_2heading_msg_pane_t1_ParamLimits

0x4d2f,	// (0x00035ece) list_single_2heading_msg_pane_t1

0x4d57,	// (0x00035ef6) list_single_2heading_msg_pane_t2_ParamLimits

0x4d57,	// (0x00035ef6) list_single_2heading_msg_pane_t2

0x4d8b,	// (0x00035f2a) list_single_2heading_msg_pane_t3_ParamLimits

0x4d8b,	// (0x00035f2a) list_single_2heading_msg_pane_t3

0x4dc4,	// (0x00035f63) list_single_2heading_msg_pane_t4_ParamLimits

0x4dc4,	// (0x00035f63) list_single_2heading_msg_pane_t4

0x0003,

0xfce7,	// (0x00040e86) list_single_2heading_msg_pane_t_ParamLimits

0xfce7,	// (0x00040e86) list_single_2heading_msg_pane_t

0x0646,	// (0x000317e5) title_pane_g4_ParamLimits

0x0646,	// (0x000317e5) title_pane_g4

0xd6c5,	// (0x0003e864) title_pane_stacon_g3_ParamLimits

0xd6c5,	// (0x0003e864) title_pane_stacon_g3

0x8e37,	// (0x00039fd6) list_single_2graphic_im_pane_g4_ParamLimits

0x8e37,	// (0x00039fd6) list_single_2graphic_im_pane_g4

0x2b2f,	// (0x00033cce) popup_side_volume_key_window_cp

0x3019,	// (0x000341b8) main_idle_act2_pane_t1

0xdc81,	// (0x0003ee20) toolbar_button_pane_g10

0x5533,	// (0x000366d2) popup_toolbar_window_cp1

0x36b7,	// (0x00034856) clock_nsta_pane_cp_t1

0x36b7,	// (0x00034856) clock_nsta_pane_cp_t2

0x0001,

0xfae9,	// (0x00040c88) clock_nsta_pane_cp_t

0xd8b7,	// (0x0003ea56) navi_navi_volume_pane_cp2_ParamLimits

0xd8c6,	// (0x0003ea65) popup_side_volume_key_window_g1_ParamLimits

0xd8d2,	// (0x0003ea71) popup_side_volume_key_window_g2_ParamLimits

0xd8e1,	// (0x0003ea80) popup_side_volume_key_window_g3_ParamLimits

0xf756,	// (0x000408f5) popup_side_volume_key_window_g_ParamLimits

0xe13e,	// (0x0003f2dd) fep_hwr_aid_pane

0xe1e5,	// (0x0003f384) bg_fep_hwr_top_pane_g4_ParamLimits

0x8273,	// (0x00039412) fep_hwr_top_pane_g1_ParamLimits

0x8261,	// (0x00039400) fep_hwr_top_pane_g2_ParamLimits

0xe205,	// (0x0003f3a4) fep_hwr_top_pane_g3_ParamLimits

0xfb3e,	// (0x00040cdd) fep_hwr_top_pane_g_ParamLimits

0xe21a,	// (0x0003f3b9) fep_hwr_top_text_pane_ParamLimits

0x2924,	// (0x00033ac3) aid_touch_tab_arrow_arrow_2

0x292d,	// (0x00033acc) aid_touch_tab_arrow_left_2

0xe152,	// (0x0003f2f1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xe189,	// (0x0003f328) fep_hwr_prediction_pane

0x83da,	// (0x00039579) fep_vkb_prediction_pane

0x84de,	// (0x0003967d) fep_vkb_side_pane_g3_ParamLimits

0x84de,	// (0x0003967d) fep_vkb_side_pane_g3

0xe395,	// (0x0003f534) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xe401,	// (0x0003f5a0) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xe40e,	// (0x0003f5ad) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbed,	// (0x00040d8c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xe53d,	// (0x0003f6dc) fep_hwr_prediction_pane_g1

0xe547,	// (0x0003f6e6) fep_hwr_prediction_pane_g2

0x8259,	// (0x000393f8) fep_hwr_prediction_pane_g3

0xe54f,	// (0x0003f6ee) fep_hwr_prediction_pane_g4

0x0003,

0xfcf0,	// (0x00040e8f) fep_hwr_prediction_pane_g

0x932b,	// (0x0003a4ca) fep_vkb_prediction_pane_g1

0x9335,	// (0x0003a4d4) fep_vkb_prediction_pane_g2

0x933d,	// (0x0003a4dc) fep_vkb_prediction_pane_g3

0x9345,	// (0x0003a4e4) fep_vkb_prediction_pane_g4

0x0003,

0xfcf9,	// (0x00040e98) fep_vkb_prediction_pane_g

0xdf6d,	// (0x0003f10c) slider_set_pane_g3

0xdf81,	// (0x0003f120) slider_set_pane_g4

0xdf99,	// (0x0003f138) slider_set_pane_g5

0xdf6d,	// (0x0003f10c) slider_set_pane_g6

0xdfaf,	// (0x0003f14e) slider_set_pane_g7

0x2dae,	// (0x00033f4d) slider_form_pane_g3

0x2db7,	// (0x00033f56) slider_form_pane_g4

0x2dbf,	// (0x00033f5e) slider_form_pane_g5

0x2dae,	// (0x00033f4d) slider_form_pane_g6

0x7d01,	// (0x00038ea0) slider_form_pane_g7

0x32b7,	// (0x00034456) slider_set_pane_vc_g3

0x32c0,	// (0x0003445f) slider_set_pane_vc_g4

0x32c9,	// (0x00034468) slider_set_pane_vc_g5

0x32b7,	// (0x00034456) slider_set_pane_vc_g6

0x32d2,	// (0x00034471) slider_set_pane_vc_g7

0x32b7,	// (0x00034456) slider_form_pane_vc_g1

0x32c0,	// (0x0003445f) slider_form_pane_vc_g2

0x32c9,	// (0x00034468) slider_form_pane_vc_g3

0x32b7,	// (0x00034456) slider_form_pane_vc_g4

0x3461,	// (0x00034600) slider_form_pane_vc_g5

0x0004,

0xfacf,	// (0x00040c6e) slider_form_pane_vc_g

0x0628,	// (0x000317c7) main_idle_act3_pane

0x934d,	// (0x0003a4ec) ai3_links_pane

0x9356,	// (0x0003a4f5) popup_ai3_data_window_ParamLimits

0x9356,	// (0x0003a4f5) popup_ai3_data_window

0x0628,	// (0x000317c7) grid_ai3_links_pane

0x936e,	// (0x0003a50d) cell_ai3_links_pane_ParamLimits

0x936e,	// (0x0003a50d) cell_ai3_links_pane

0x9386,	// (0x0003a525) bg_popup_sub_pane_cp11

0x9393,	// (0x0003a532) cell_ai3_links_pane_g1

0x0628,	// (0x000317c7) bg_popup_sub_pane_cp12

0x93b8,	// (0x0003a557) heading_ai3_data_pane

0x93c0,	// (0x0003a55f) list_ai3_gene_pane

0x93cc,	// (0x0003a56b) popup_ai3_data_window_g1

0x93d4,	// (0x0003a573) heading_ai3_data_pane_g1

0x93dc,	// (0x0003a57b) heading_ai3_data_pane_t1

0x93ea,	// (0x0003a589) list_double_ai3_gene_pane_ParamLimits

0x93ea,	// (0x0003a589) list_double_ai3_gene_pane

0x93f7,	// (0x0003a596) list_single_ai3_gene_pane_ParamLimits

0x93f7,	// (0x0003a596) list_single_ai3_gene_pane

0x81b6,	// (0x00039355) list_highlight_pane_cp7_ParamLimits

0x81b6,	// (0x00039355) list_highlight_pane_cp7

0x9404,	// (0x0003a5a3) list_single_a13_gene_pane_t1_ParamLimits

0x9404,	// (0x0003a5a3) list_single_a13_gene_pane_t1

0x941b,	// (0x0003a5ba) list_single_ai3_gene_pane_g1

0x9424,	// (0x0003a5c3) list_single_ai3_gene_pane_g2

0x0001,

0xfd02,	// (0x00040ea1) list_single_ai3_gene_pane_g

0x942c,	// (0x0003a5cb) list_double_ai3_gene_pane_g1_ParamLimits

0x942c,	// (0x0003a5cb) list_double_ai3_gene_pane_g1

0x9438,	// (0x0003a5d7) list_double_ai3_gene_pane_t1_ParamLimits

0x9438,	// (0x0003a5d7) list_double_ai3_gene_pane_t1

0x9454,	// (0x0003a5f3) list_double_ai3_gene_pane_t2_ParamLimits

0x9454,	// (0x0003a5f3) list_double_ai3_gene_pane_t2

0x9469,	// (0x0003a608) list_double_ai3_gene_pane_t3_ParamLimits

0x9469,	// (0x0003a608) list_double_ai3_gene_pane_t3

0x0002,

0xfd07,	// (0x00040ea6) list_double_ai3_gene_pane_t_ParamLimits

0xfd07,	// (0x00040ea6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4d25,	// (0x00035ec4) aid_size_min_col_2

0x9317,	// (0x0003a4b6) aid_size_min_msg_ParamLimits

0x9317,	// (0x0003a4b6) aid_size_min_msg

0x85de,	// (0x0003977d) fep_vkb_top_text_pane_g2_ParamLimits

0x85de,	// (0x0003977d) fep_vkb_top_text_pane_g2

0x0001,

0xfb6e,	// (0x00040d0d) fep_vkb_top_text_pane_g_ParamLimits

0xfb6e,	// (0x00040d0d) fep_vkb_top_text_pane_g

0x0628,	// (0x000317c7) main_hc_apps_shell_pane

0x9486,	// (0x0003a625) grid_hc_apps_pane_ParamLimits

0x9486,	// (0x0003a625) grid_hc_apps_pane

0x9495,	// (0x0003a634) list_hc_apps_pane

0x949d,	// (0x0003a63c) scroll_pane_cp37_ParamLimits

0x949d,	// (0x0003a63c) scroll_pane_cp37

0x94a9,	// (0x0003a648) cell_hc_apps_pane_ParamLimits

0x94a9,	// (0x0003a648) cell_hc_apps_pane

0x957a,	// (0x0003a719) cell_hc_apps_pane_g1_ParamLimits

0x957a,	// (0x0003a719) cell_hc_apps_pane_g1

0x95ab,	// (0x0003a74a) cell_hc_apps_pane_g2_ParamLimits

0x95ab,	// (0x0003a74a) cell_hc_apps_pane_g2

0x95c7,	// (0x0003a766) cell_hc_apps_pane_g3_ParamLimits

0x95c7,	// (0x0003a766) cell_hc_apps_pane_g3

0x0002,

0xfd0e,	// (0x00040ead) cell_hc_apps_pane_g_ParamLimits

0xfd0e,	// (0x00040ead) cell_hc_apps_pane_g

0x95e9,	// (0x0003a788) cell_hc_apps_pane_t1_ParamLimits

0x95e9,	// (0x0003a788) cell_hc_apps_pane_t1

0x07d4,	// (0x00031973) grid_highlight_pane_cp10_ParamLimits

0x07d4,	// (0x00031973) grid_highlight_pane_cp10

0x9629,	// (0x0003a7c8) list_single_hc_apps_pane_ParamLimits

0x9629,	// (0x0003a7c8) list_single_hc_apps_pane

0x969c,	// (0x0003a83b) list_single_hc_apps_pane_g1

0x675f,	// (0x000378fe) list_single_hc_apps_pane_g2

0x0001,

0xfd15,	// (0x00040eb4) list_single_hc_apps_pane_g

0x6778,	// (0x00037917) list_single_hc_apps_pane_g2_copy1

0x4de9,	// (0x00035f88) list_single_hc_apps_pane_t1

0x0698,	// (0x00031837) bg_set_opt_pane_cp_ParamLimits

0xd5f0,	// (0x0003e78f) setting_slider_pane_t1_ParamLimits

0xd609,	// (0x0003e7a8) setting_slider_pane_t2_ParamLimits

0xd622,	// (0x0003e7c1) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x00040741) setting_slider_pane_t_ParamLimits

0xd639,	// (0x0003e7d8) slider_set_pane_ParamLimits

0xdb5f,	// (0x0003ecfe) control_pane_g5_ParamLimits

0xdb5f,	// (0x0003ecfe) control_pane_g5

0x2d70,	// (0x00033f0f) slider_set_pane_g1_ParamLimits

0xdf61,	// (0x0003f100) slider_set_pane_g2_ParamLimits

0xdf6d,	// (0x0003f10c) slider_set_pane_g3_ParamLimits

0xdf81,	// (0x0003f120) slider_set_pane_g4_ParamLimits

0xdf99,	// (0x0003f138) slider_set_pane_g5_ParamLimits

0xdf6d,	// (0x0003f10c) slider_set_pane_g6_ParamLimits

0xdfaf,	// (0x0003f14e) slider_set_pane_g7_ParamLimits

0xf9a2,	// (0x00040b41) slider_set_pane_g_ParamLimits

0x15a8,	// (0x00032747) navi_icon_text_pane_ParamLimits

0x75b3,	// (0x00038752) aid_fill_nsta_2_ParamLimits

0x75dd,	// (0x0003877c) aid_touch_tab_arrow_left_ParamLimits

0x75ec,	// (0x0003878b) aid_touch_tab_arrow_right_ParamLimits

0x7659,	// (0x000387f8) clock_nsta_pane_ParamLimits

0x7ab3,	// (0x00038c52) navi_icon_pane_g1_ParamLimits

0x7ac2,	// (0x00038c61) navi_text_pane_t1_ParamLimits

0x7f2c,	// (0x000390cb) navi_icon_text_pane_g1_ParamLimits

0x7f3b,	// (0x000390da) navi_icon_text_pane_t1_ParamLimits

0x969c,	// (0x0003a83b) list_single_hc_apps_pane_g1_ParamLimits

0x675f,	// (0x000378fe) list_single_hc_apps_pane_g2_ParamLimits

0xfd15,	// (0x00040eb4) list_single_hc_apps_pane_g_ParamLimits

0x6778,	// (0x00037917) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x4de9,	// (0x00035f88) list_single_hc_apps_pane_t1_ParamLimits

0xd50a,	// (0x0003e6a9) popup_toolbar2_fixed_window_ParamLimits

0xd50a,	// (0x0003e6a9) popup_toolbar2_fixed_window

0x7526,	// (0x000386c5) popup_toolbar2_float_window

0x0628,	// (0x000317c7) bg_popup_sub_pane_cp27

0x96b5,	// (0x0003a854) grid_toolbar2_float_pane

0x0628,	// (0x000317c7) bg_popup_sub_pane_cp26

0x96b5,	// (0x0003a854) grid_toolbar2_fixed_pane

0x96bd,	// (0x0003a85c) cell_toolbar2_fixed_pane_ParamLimits

0x96bd,	// (0x0003a85c) cell_toolbar2_fixed_pane

0x96ce,	// (0x0003a86d) cell_toolbar2_fixed_pane_g1

0x96d7,	// (0x0003a876) toolbar2_fixed_button_pane

0x1c72,	// (0x00032e11) toolbar2_fixed_button_pane_g1

0x1c82,	// (0x00032e21) toolbar2_fixed_button_pane_g2

0x1c7a,	// (0x00032e19) toolbar2_fixed_button_pane_g3

0x1c92,	// (0x00032e31) toolbar2_fixed_button_pane_g4

0x1c8a,	// (0x00032e29) toolbar2_fixed_button_pane_g5

0x1c9a,	// (0x00032e39) toolbar2_fixed_button_pane_g6

0x1ca2,	// (0x00032e41) toolbar2_fixed_button_pane_g7

0x1cb2,	// (0x00032e51) toolbar2_fixed_button_pane_g8

0x1caa,	// (0x00032e49) toolbar2_fixed_button_pane_g9

0x0008,

0xf8a4,	// (0x00040a43) toolbar2_fixed_button_pane_g

0x96df,	// (0x0003a87e) cell_toolbar2_float_pane_ParamLimits

0x96df,	// (0x0003a87e) cell_toolbar2_float_pane

0x96f0,	// (0x0003a88f) cell_toolbar2_float_pane_g1

0x96d7,	// (0x0003a876) toolbar2_fixed_button_pane_cp

0x8333,	// (0x000394d2) fep_vkb_accented_list_pane_ParamLimits

0x8333,	// (0x000394d2) fep_vkb_accented_list_pane

0xe375,	// (0x0003f514) bg_popup_fep_shadow_pane_g9

0x172a,	// (0x000328c9) bg_popup_fep_shadow_pane_cp3

0x0dee,	// (0x00031f8d) list_accented_list_pane

0x96f9,	// (0x0003a898) list_single_accented_list_pane_ParamLimits

0x96f9,	// (0x0003a898) list_single_accented_list_pane

0x172a,	// (0x000328c9) list_highlight_pane_cp10

0x970a,	// (0x0003a8a9) list_single_accented_list_pane_t1

0x747e,	// (0x0003861d) popup_slider_window_ParamLimits

0x747e,	// (0x0003861d) popup_slider_window

0x930e,	// (0x0003a4ad) aid_indentation_list_msg

0x97c4,	// (0x0003a963) bg_popup_window_pane_cp19

0x982e,	// (0x0003a9cd) popup_slider_window_g1

0x984a,	// (0x0003a9e9) popup_slider_window_g2

0x9866,	// (0x0003aa05) popup_slider_window_g3

0x0005,

0xfd1a,	// (0x00040eb9) popup_slider_window_g

0x98c2,	// (0x0003aa61) popup_slider_window_t1

0x9936,	// (0x0003aad5) small_volume_slider_vertical_pane

0x81f1,	// (0x00039390) small_volume_slider_vertical_pane_g1

0x81f1,	// (0x00039390) small_volume_slider_vertical_pane_g2

0x9952,	// (0x0003aaf1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd2c,	// (0x00040ecb) small_volume_slider_vertical_pane_g

0xd2d0,	// (0x0003e46f) area_side_right_pane_ParamLimits

0xd2d0,	// (0x0003e46f) area_side_right_pane

0xe557,	// (0x0003f6f6) aid_size_side_button_ParamLimits

0xe557,	// (0x0003f6f6) aid_size_side_button

0xe56b,	// (0x0003f70a) grid_sctrl_middle_pane_ParamLimits

0xe56b,	// (0x0003f70a) grid_sctrl_middle_pane

0xe58b,	// (0x0003f72a) sctrl_sk_bottom_pane

0xe59c,	// (0x0003f73b) sctrl_sk_top_pane

0xe5ae,	// (0x0003f74d) aid_touch_sctrl_top

0xe5bb,	// (0x0003f75a) bg_sctrl_sk_pane_ParamLimits

0xe5bb,	// (0x0003f75a) bg_sctrl_sk_pane

0xe5c9,	// (0x0003f768) sctrl_sk_top_pane_g1

0xe5d6,	// (0x0003f775) sctrl_sk_top_pane_t1

0xe5ae,	// (0x0003f74d) aid_touch_sctrl_bottom

0xe5bb,	// (0x0003f75a) bg_sctrl_sk_pane_cp_ParamLimits

0xe5bb,	// (0x0003f75a) bg_sctrl_sk_pane_cp

0xe5f1,	// (0x0003f790) sctrl_sk_bottom_pane_g1

0xe5d6,	// (0x0003f775) sctrl_sk_bottom_pane_t1

0xe5fa,	// (0x0003f799) cell_sctrl_middle_pane_ParamLimits

0xe5fa,	// (0x0003f799) cell_sctrl_middle_pane

0xe615,	// (0x0003f7b4) aid_touch_sctrl_middle_ParamLimits

0xe615,	// (0x0003f7b4) aid_touch_sctrl_middle

0xe627,	// (0x0003f7c6) bg_sctrl_middle_pane_ParamLimits

0xe627,	// (0x0003f7c6) bg_sctrl_middle_pane

0xe395,	// (0x0003f534) cell_sctrl_middle_pane_g1_ParamLimits

0xe395,	// (0x0003f534) cell_sctrl_middle_pane_g1

0xe635,	// (0x0003f7d4) cell_sctrl_middle_pane_g2_ParamLimits

0xe635,	// (0x0003f7d4) cell_sctrl_middle_pane_g2

0x0001,

0xfd38,	// (0x00040ed7) cell_sctrl_middle_pane_g_ParamLimits

0xfd38,	// (0x00040ed7) cell_sctrl_middle_pane_g

0x1c72,	// (0x00032e11) bg_sctrl_middle_pane_g1

0x1c7a,	// (0x00032e19) bg_sctrl_middle_pane_g2

0x1c82,	// (0x00032e21) bg_sctrl_middle_pane_g3

0x1c8a,	// (0x00032e29) bg_sctrl_middle_pane_g4

0x1c92,	// (0x00032e31) bg_sctrl_middle_pane_g5

0x1c9a,	// (0x00032e39) bg_sctrl_middle_pane_g6

0x1ca2,	// (0x00032e41) bg_sctrl_middle_pane_g7

0x1caa,	// (0x00032e49) bg_sctrl_middle_pane_g8

0x0007,

0xfd3d,	// (0x00040edc) bg_sctrl_middle_pane_g

0x1cb2,	// (0x00032e51) bg_sctrl_middle_pane_g8_copy1

0x1c72,	// (0x00032e11) bg_sctrl_sk_pane_g1

0x1c82,	// (0x00032e21) bg_sctrl_sk_pane_g2

0x1c7a,	// (0x00032e19) bg_sctrl_sk_pane_g3

0x0008,

0xf8a4,	// (0x00040a43) bg_sctrl_sk_pane_g

0x0c21,	// (0x00031dc0) aid_size_touch_scroll_bar

0x1c92,	// (0x00032e31) bg_sctrl_sk_pane_g4

0x1c8a,	// (0x00032e29) bg_sctrl_sk_pane_g5

0x1c9a,	// (0x00032e39) bg_sctrl_sk_pane_g6

0x1ca2,	// (0x00032e41) bg_sctrl_sk_pane_g7

0x1cb2,	// (0x00032e51) bg_sctrl_sk_pane_g8

0x1caa,	// (0x00032e49) bg_sctrl_sk_pane_g9

0x19b4,	// (0x00032b53) popup_fep_china_hwr2_fs_candidate_window

0x718c,	// (0x0003832b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x718c,	// (0x0003832b) popup_fep_china_hwr2_fs_control_window

0xe395,	// (0x0003f534) sctrl_sk_top_pane_g2

0x0001,

0xfd33,	// (0x00040ed2) sctrl_sk_top_pane_g

0x995b,	// (0x0003aafa) aid_fep_china_hwr2_fs_cell_ParamLimits

0x995b,	// (0x0003aafa) aid_fep_china_hwr2_fs_cell

0x996d,	// (0x0003ab0c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x996d,	// (0x0003ab0c) bg_popup_fep_shadow_pane_cp4

0x9984,	// (0x0003ab23) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9984,	// (0x0003ab23) bg_popup_fep_shadow_pane_cp5

0x9996,	// (0x0003ab35) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9996,	// (0x0003ab35) popup_fep_china_hwr2_fs_control_bar_grid

0x99a6,	// (0x0003ab45) popup_fep_china_hwr2_fs_control_funtion_grid

0x99ae,	// (0x0003ab4d) aid_fep_china_hwr2_fs_candi_cell

0x0628,	// (0x000317c7) bg_popup_fep_shadow_pane_cp6

0x99b8,	// (0x0003ab57) popup_fep_china_hwr2_fs_candidate_grid

0x99c2,	// (0x0003ab61) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x99c2,	// (0x0003ab61) cell_fep_china_hwr2_fs_funtion_grid

0x81f1,	// (0x00039390) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x99da,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x99da,	// (0x0003ab79) cell_fep_china_hwr2_fs_funtion_grid_g1

0x99e8,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x99e8,	// (0x0003ab87) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd4e,	// (0x00040eed) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd4e,	// (0x00040eed) cell_fep_china_hwr2_fs_funtion_grid_g

0x99fe,	// (0x0003ab9d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x99fe,	// (0x0003ab9d) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9a13,	// (0x0003abb2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9a13,	// (0x0003abb2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd53,	// (0x00040ef2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd53,	// (0x00040ef2) cell_fep_china_hwr2_fs_funtion_grid_t

0x9a2f,	// (0x0003abce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9a37,	// (0x0003abd6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9a3f,	// (0x0003abde) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd58,	// (0x00040ef7) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9a47,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9a47,	// (0x0003abe6) cell_fep_china_hwr2_fs_candidate_grid

0x9a60,	// (0x0003abff) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9a68,	// (0x0003ac07) popup_fep_china_hwr2_fs_candidate_grid_g21

0x81f1,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g1

0x81f1,	// (0x00039390) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb73,	// (0x00040d12) cell_fep_china_hwr2_fs_candidate_grid_g

0x9a70,	// (0x0003ac0f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1ac1,	// (0x00032c60) clock_nsta_pane_cp_24_ParamLimits

0x1ac1,	// (0x00032c60) clock_nsta_pane_cp_24

0x1b29,	// (0x00032cc8) indicator_nsta_pane_cp_24_ParamLimits

0x1b29,	// (0x00032cc8) indicator_nsta_pane_cp_24

0x282e,	// (0x000339cd) heading_pane_g1

0x0001,

0xf909,	// (0x00040aa8) heading_pane_g

0x2ea4,	// (0x00034043) grid_sct_catagory_button_pane

0x2bf2,	// (0x00033d91) scroll_pane_cp5_ParamLimits

0x3722,	// (0x000348c1) button_value_adjust_pane_cp5_ParamLimits

0x3722,	// (0x000348c1) button_value_adjust_pane_cp5

0x37e0,	// (0x0003497f) form2_midp_time_pane_ParamLimits

0x9a7e,	// (0x0003ac1d) cell_sct_catagory_button_pane_ParamLimits

0x9a7e,	// (0x0003ac1d) cell_sct_catagory_button_pane

0x81b6,	// (0x00039355) bg_button_pane_cp01_ParamLimits

0x81b6,	// (0x00039355) bg_button_pane_cp01

0x81f1,	// (0x00039390) cell_sct_catagory_button_pane_g1

0x74b5,	// (0x00038654) popup_tb_extension_window

0x9a90,	// (0x0003ac2f) aid_size_cell_ext_ParamLimits

0x9a90,	// (0x0003ac2f) aid_size_cell_ext

0x07d4,	// (0x00031973) bg_tb_trans_pane_cp1_ParamLimits

0x07d4,	// (0x00031973) bg_tb_trans_pane_cp1

0x9ab0,	// (0x0003ac4f) grid_tb_ext_pane_ParamLimits

0x9ab0,	// (0x0003ac4f) grid_tb_ext_pane

0x9ae2,	// (0x0003ac81) cell_tb_ext_pane_ParamLimits

0x9ae2,	// (0x0003ac81) cell_tb_ext_pane

0x9af9,	// (0x0003ac98) cell_tb_ext_pane_g1_ParamLimits

0x9af9,	// (0x0003ac98) cell_tb_ext_pane_g1

0x9b16,	// (0x0003acb5) cell_tb_ext_pane_t1

0x07d4,	// (0x00031973) list_highlight_pane_cp11_ParamLimits

0x07d4,	// (0x00031973) list_highlight_pane_cp11

0xd529,	// (0x0003e6c8) popup_uni_indicator_window_ParamLimits

0xd529,	// (0x0003e6c8) popup_uni_indicator_window

0x0ce8,	// (0x00031e87) bg_popup_sub_pane_cp14

0x9b31,	// (0x0003acd0) list_uniindi_pane

0x9b3d,	// (0x0003acdc) uniindi_top_pane

0x07d4,	// (0x00031973) bg_uniindi_top_pane

0x9b5c,	// (0x0003acfb) uniindi_top_pane_g1

0x9b72,	// (0x0003ad11) uniindi_top_pane_g2

0x0003,

0xfd5f,	// (0x00040efe) uniindi_top_pane_g

0x9b9c,	// (0x0003ad3b) uniindi_top_pane_t1

0x9bc6,	// (0x0003ad65) list_single_uniindi_pane_ParamLimits

0x9bc6,	// (0x0003ad65) list_single_uniindi_pane

0x81f1,	// (0x00039390) bg_uniindi_top_pane_g1

0x9bd8,	// (0x0003ad77) list_single_uniindi_pane_g1

0x9beb,	// (0x0003ad8a) list_single_uniindi_pane_t1

0xd3ad,	// (0x0003e54c) control_bg_pane

0x9c10,	// (0x0003adaf) bg_sctrl_sk_pane_cp1

0x9c19,	// (0x0003adb8) bg_sctrl_sk_pane_cp2

0x9c22,	// (0x0003adc1) control_bg_pane_g1

0x9c2b,	// (0x0003adca) control_bg_pane_g2

0x0001,

0xfd68,	// (0x00040f07) control_bg_pane_g

0x3650,	// (0x000347ef) cell_indicator_nsta_pane_g1_ParamLimits

0x7e5b,	// (0x00038ffa) cell_indicator_nsta_pane_g2_ParamLimits

0xfae4,	// (0x00040c83) cell_indicator_nsta_pane_g_ParamLimits

0x4b04,	// (0x00035ca3) form2_midp_time_pane_t1_ParamLimits

0x0a63,	// (0x00031c02) main_idle_act4_pane_ParamLimits

0x0a63,	// (0x00031c02) main_idle_act4_pane

0x74b5,	// (0x00038654) popup_tb_extension_window_ParamLimits

0x9ad2,	// (0x0003ac71) tb_ext_find_pane_ParamLimits

0x9ad2,	// (0x0003ac71) tb_ext_find_pane

0x9c34,	// (0x0003add3) ai_gene_pane_1_cp1

0x17ac,	// (0x0003294b) ai_gene_pane_2_cp1

0x9c3c,	// (0x0003addb) list_single_idle_plugin_calendar_pane

0x9c45,	// (0x0003ade4) list_single_idle_plugin_notification_pane

0x9c4e,	// (0x0003aded) list_single_idle_plugin_player_pane

0x9c57,	// (0x0003adf6) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9c57,	// (0x0003adf6) list_single_idle_plugin_shortcut_pane

0x9c79,	// (0x0003ae18) main_idle_act4_pane_t1

0x9c8b,	// (0x0003ae2a) main_idle_act4_pane_t2

0x0001,

0xfd6d,	// (0x00040f0c) main_idle_act4_pane_t

0x9c9d,	// (0x0003ae3c) middle_sk_idle_act4_pane_ParamLimits

0x9c9d,	// (0x0003ae3c) middle_sk_idle_act4_pane

0x9cb3,	// (0x0003ae52) popup_clock_digital_analogue_window_cp2

0x9ccd,	// (0x0003ae6c) shortcut_wheel_idle_act4_pane_ParamLimits

0x9ccd,	// (0x0003ae6c) shortcut_wheel_idle_act4_pane

0x81f1,	// (0x00039390) shortcut_wheel_idle_act4_pane_g1

0x81f1,	// (0x00039390) shortcut_wheel_idle_act4_pane_g2

0x81f1,	// (0x00039390) shortcut_wheel_idle_act4_pane_g3

0x81f1,	// (0x00039390) shortcut_wheel_idle_act4_pane_g4

0x81f1,	// (0x00039390) shortcut_wheel_idle_act4_pane_g5

0x9ce1,	// (0x0003ae80) shortcut_wheel_idle_act4_pane_g6

0x9ce9,	// (0x0003ae88) shortcut_wheel_idle_act4_pane_g7

0x9cf1,	// (0x0003ae90) shortcut_wheel_idle_act4_pane_g8

0x9cf9,	// (0x0003ae98) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd72,	// (0x00040f11) shortcut_wheel_idle_act4_pane_g

0x848a,	// (0x00039629) middle_sk_idle_act4_pane_g1_ParamLimits

0x848a,	// (0x00039629) middle_sk_idle_act4_pane_g1

0x9d5d,	// (0x0003aefc) middle_sk_idle_act4_pane_g2_ParamLimits

0x9d5d,	// (0x0003aefc) middle_sk_idle_act4_pane_g2

0x0001,

0xfd95,	// (0x00040f34) middle_sk_idle_act4_pane_g_ParamLimits

0xfd95,	// (0x00040f34) middle_sk_idle_act4_pane_g

0x9d69,	// (0x0003af08) middle_sk_idle_act4_pane_t1_ParamLimits

0x9d69,	// (0x0003af08) middle_sk_idle_act4_pane_t1

0x9d86,	// (0x0003af25) grid_ai_shortcut_pane_ParamLimits

0x9d86,	// (0x0003af25) grid_ai_shortcut_pane

0x9d9f,	// (0x0003af3e) list_highlight_pane_cp16_ParamLimits

0x9d9f,	// (0x0003af3e) list_highlight_pane_cp16

0x9dac,	// (0x0003af4b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x9dac,	// (0x0003af4b) list_single_idle_plugin_shortcut_pane_g1

0x9db8,	// (0x0003af57) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x9db8,	// (0x0003af57) list_single_idle_plugin_shortcut_pane_g2

0x9dd0,	// (0x0003af6f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x9dd0,	// (0x0003af6f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd9a,	// (0x00040f39) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd9a,	// (0x00040f39) list_single_idle_plugin_shortcut_pane_g

0x9de3,	// (0x0003af82) cell_ai_shortcut_pane_ParamLimits

0x9de3,	// (0x0003af82) cell_ai_shortcut_pane

0x9e04,	// (0x0003afa3) cell_ai_shortcut_pane_g1_ParamLimits

0x9e04,	// (0x0003afa3) cell_ai_shortcut_pane_g1

0x9c34,	// (0x0003add3) ai_gene_pane_1_cp2

0x9e26,	// (0x0003afc5) ai_gene_pane_2_cp2

0x9e2e,	// (0x0003afcd) list_highlight_pane_cp15

0x9e37,	// (0x0003afd6) list_single_idle_plugin_calendar_pane_g1

0x9e2e,	// (0x0003afcd) list_highlight_pane_cp17

0x9e3f,	// (0x0003afde) list_single_idle_plugin_calendar_pane_g1_copy1

0x9e47,	// (0x0003afe6) list_single_idle_plugin_player_pane_g1

0x30b9,	// (0x00034258) list_single_idle_plugin_player_pane_g2

0x0001,

0xfda1,	// (0x00040f40) list_single_idle_plugin_player_pane_g

0x9e4f,	// (0x0003afee) list_single_idle_plugin_player_pane_t1

0x9e5d,	// (0x0003affc) list_single_idle_plugin_player_pane_t2

0x9e6b,	// (0x0003b00a) list_single_idle_plugin_player_pane_t3

0x9e79,	// (0x0003b018) list_single_idle_plugin_player_pane_t4

0x0003,

0xfda6,	// (0x00040f45) list_single_idle_plugin_player_pane_t

0x9e87,	// (0x0003b026) wait_bar_pane_cp15

0x9e8f,	// (0x0003b02e) grid_ai_notification_pane

0x30b9,	// (0x00034258) list_single_idle_plugin_notification_pane_g1

0x9e98,	// (0x0003b037) cell_ai_notification_pane_ParamLimits

0x9e98,	// (0x0003b037) cell_ai_notification_pane

0x9ea5,	// (0x0003b044) cell_ai_notification_pane_g1

0x9ead,	// (0x0003b04c) cell_ai_notification_pane_t1

0x9ebb,	// (0x0003b05a) tb_ext_find_button_pane

0x9ec3,	// (0x0003b062) tb_ext_find_pane_g1

0x9ecb,	// (0x0003b06a) tb_ext_find_pane_t1

0x121b,	// (0x000323ba) tb_ext_find_button_pane_g1

0x9ed9,	// (0x0003b078) tb_ext_find_button_pane_g2

0x0001,

0xfdaf,	// (0x00040f4e) tb_ext_find_button_pane_g

0x9c79,	// (0x0003ae18) main_idle_act4_pane_t1_ParamLimits

0x9c8b,	// (0x0003ae2a) main_idle_act4_pane_t2_ParamLimits

0xfd6d,	// (0x00040f0c) main_idle_act4_pane_t_ParamLimits

0x9cb3,	// (0x0003ae52) popup_clock_digital_analogue_window_cp2_ParamLimits

0x9cc1,	// (0x0003ae60) sat_plugin_idle_act4_pane_ParamLimits

0x9cc1,	// (0x0003ae60) sat_plugin_idle_act4_pane

0x9ee2,	// (0x0003b081) sat_plugin_idle_act4_pane_t1_ParamLimits

0x9ee2,	// (0x0003b081) sat_plugin_idle_act4_pane_t1

0x9ef5,	// (0x0003b094) sat_plugin_idle_act4_pane_t2_ParamLimits

0x9ef5,	// (0x0003b094) sat_plugin_idle_act4_pane_t2

0x9f08,	// (0x0003b0a7) sat_plugin_idle_act4_pane_t3_ParamLimits

0x9f08,	// (0x0003b0a7) sat_plugin_idle_act4_pane_t3

0x9f1b,	// (0x0003b0ba) sat_plugin_idle_act4_pane_t4_ParamLimits

0x9f1b,	// (0x0003b0ba) sat_plugin_idle_act4_pane_t4

0x0003,

0xfdb4,	// (0x00040f53) sat_plugin_idle_act4_pane_t_ParamLimits

0xfdb4,	// (0x00040f53) sat_plugin_idle_act4_pane_t

0xd472,	// (0x0003e611) popup_battery_window_ParamLimits

0xd472,	// (0x0003e611) popup_battery_window

0x07d4,	// (0x00031973) bg_popup_sub_pane_cp25_ParamLimits

0x07d4,	// (0x00031973) bg_popup_sub_pane_cp25

0x9f2e,	// (0x0003b0cd) popup_battery_window_g1_ParamLimits

0x9f2e,	// (0x0003b0cd) popup_battery_window_g1

0x9f3a,	// (0x0003b0d9) popup_battery_window_t1_ParamLimits

0x9f3a,	// (0x0003b0d9) popup_battery_window_t1

0x9f4c,	// (0x0003b0eb) popup_battery_window_t2_ParamLimits

0x9f4c,	// (0x0003b0eb) popup_battery_window_t2

0x0001,

0xfdbd,	// (0x00040f5c) popup_battery_window_t_ParamLimits

0xfdbd,	// (0x00040f5c) popup_battery_window_t

0x701e,	// (0x000381bd) midp_canvas_pane_ParamLimits

0x7082,	// (0x00038221) midp_keypad_pane_ParamLimits

0x7082,	// (0x00038221) midp_keypad_pane

0x0e3f,	// (0x00031fde) main_midp_pane_ParamLimits

0x36d5,	// (0x00034874) signal_pane_g2_cp_ParamLimits

0x9f69,	// (0x0003b108) aid_size_cell_midp_keypad_ParamLimits

0x9f69,	// (0x0003b108) aid_size_cell_midp_keypad

0x9f83,	// (0x0003b122) midp_keyp_game_grid_pane_ParamLimits

0x9f83,	// (0x0003b122) midp_keyp_game_grid_pane

0x9fa3,	// (0x0003b142) midp_keyp_rocker_pane_ParamLimits

0x9fa3,	// (0x0003b142) midp_keyp_rocker_pane

0x9fdc,	// (0x0003b17b) midp_keyp_sk_left_pane_ParamLimits

0x9fdc,	// (0x0003b17b) midp_keyp_sk_left_pane

0xa036,	// (0x0003b1d5) midp_keyp_sk_right_pane_ParamLimits

0xa036,	// (0x0003b1d5) midp_keyp_sk_right_pane

0x0628,	// (0x000317c7) bg_button_pane_cp03

0xa090,	// (0x0003b22f) midp_keyp_sk_left_pane_g1

0x0628,	// (0x000317c7) bg_button_pane_cp04

0xa090,	// (0x0003b22f) midp_keyp_sk_right_pane_g1

0x81f1,	// (0x00039390) midp_keyp_rocker_pane_g1

0xa099,	// (0x0003b238) keyp_game_cell_pane_ParamLimits

0xa099,	// (0x0003b238) keyp_game_cell_pane

0x0628,	// (0x000317c7) bg_button_pane_cp02

0xa0ac,	// (0x0003b24b) keyp_game_cell_pane_g1

0xd4a8,	// (0x0003e647) popup_fep_vkb2_window_ParamLimits

0xd4a8,	// (0x0003e647) popup_fep_vkb2_window

0xe657,	// (0x0003f7f6) aid_size_cell_vkb2_ParamLimits

0xe657,	// (0x0003f7f6) aid_size_cell_vkb2

0xe6ab,	// (0x0003f84a) popup_fep_vkb2_window_g1_ParamLimits

0xe6ab,	// (0x0003f84a) popup_fep_vkb2_window_g1

0xe6eb,	// (0x0003f88a) vkb2_area_bottom_pane_ParamLimits

0xe6eb,	// (0x0003f88a) vkb2_area_bottom_pane

0xe737,	// (0x0003f8d6) vkb2_area_keypad_pane_ParamLimits

0xe737,	// (0x0003f8d6) vkb2_area_keypad_pane

0xe779,	// (0x0003f918) vkb2_area_top_pane_ParamLimits

0xe779,	// (0x0003f918) vkb2_area_top_pane

0xe7f3,	// (0x0003f992) vkb2_top_entry_pane_ParamLimits

0xe7f3,	// (0x0003f992) vkb2_top_entry_pane

0xe81d,	// (0x0003f9bc) vkb2_top_grid_left_pane_ParamLimits

0xe81d,	// (0x0003f9bc) vkb2_top_grid_left_pane

0xe83b,	// (0x0003f9da) vkb2_top_grid_right_pane_ParamLimits

0xe83b,	// (0x0003f9da) vkb2_top_grid_right_pane

0xe859,	// (0x0003f9f8) vkb2_cell_keypad_pane_ParamLimits

0xe859,	// (0x0003f9f8) vkb2_cell_keypad_pane

0xe92a,	// (0x0003fac9) vkb2_area_bottom_grid_pane_ParamLimits

0xe92a,	// (0x0003fac9) vkb2_area_bottom_grid_pane

0xe950,	// (0x0003faef) vkb2_area_bottom_pane_g1_ParamLimits

0xe950,	// (0x0003faef) vkb2_area_bottom_pane_g1

0xe974,	// (0x0003fb13) vkb2_area_bottom_pane_g2_ParamLimits

0xe974,	// (0x0003fb13) vkb2_area_bottom_pane_g2

0xe9a2,	// (0x0003fb41) vkb2_area_bottom_pane_g3_ParamLimits

0xe9a2,	// (0x0003fb41) vkb2_area_bottom_pane_g3

0x0002,

0xfdc2,	// (0x00040f61) vkb2_area_bottom_pane_g_ParamLimits

0xfdc2,	// (0x00040f61) vkb2_area_bottom_pane_g

0xea03,	// (0x0003fba2) vkb2_top_cell_left_pane_ParamLimits

0xea03,	// (0x0003fba2) vkb2_top_cell_left_pane

0xea23,	// (0x0003fbc2) vkb2_top_entry_pane_g1_ParamLimits

0xea23,	// (0x0003fbc2) vkb2_top_entry_pane_g1

0xea31,	// (0x0003fbd0) vkb2_top_entry_pane_t1_ParamLimits

0xea31,	// (0x0003fbd0) vkb2_top_entry_pane_t1

0xa0bd,	// (0x0003b25c) vkb2_top_entry_pane_t2_ParamLimits

0xa0bd,	// (0x0003b25c) vkb2_top_entry_pane_t2

0xa0ef,	// (0x0003b28e) vkb2_top_entry_pane_t3_ParamLimits

0xa0ef,	// (0x0003b28e) vkb2_top_entry_pane_t3

0x0002,

0xfdc9,	// (0x00040f68) vkb2_top_entry_pane_t_ParamLimits

0xfdc9,	// (0x00040f68) vkb2_top_entry_pane_t

0xea90,	// (0x0003fc2f) vkb2_top_grid_right_pane_g1_ParamLimits

0xea90,	// (0x0003fc2f) vkb2_top_grid_right_pane_g1

0xeaa6,	// (0x0003fc45) vkb2_top_grid_right_pane_g2_ParamLimits

0xeaa6,	// (0x0003fc45) vkb2_top_grid_right_pane_g2

0xeabe,	// (0x0003fc5d) vkb2_top_grid_right_pane_g3_ParamLimits

0xeabe,	// (0x0003fc5d) vkb2_top_grid_right_pane_g3

0xead6,	// (0x0003fc75) vkb2_top_grid_right_pane_g4_ParamLimits

0xead6,	// (0x0003fc75) vkb2_top_grid_right_pane_g4

0x0003,

0xfdd0,	// (0x00040f6f) vkb2_top_grid_right_pane_g_ParamLimits

0xfdd0,	// (0x00040f6f) vkb2_top_grid_right_pane_g

0xeaec,	// (0x0003fc8b) vkb2_top_cell_left_pane_g1

0xeb03,	// (0x0003fca2) vkb2_cell_keypad_pane_g1_ParamLimits

0xeb03,	// (0x0003fca2) vkb2_cell_keypad_pane_g1

0xa113,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1_ParamLimits

0xa113,	// (0x0003b2b2) vkb2_cell_keypad_pane_t1

0xeb11,	// (0x0003fcb0) vkb2_cell_bottom_grid_pane_ParamLimits

0xeb11,	// (0x0003fcb0) vkb2_cell_bottom_grid_pane

0xeb4a,	// (0x0003fce9) vkb2_cell_bottom_grid_pane_g1

0x9d01,	// (0x0003aea0) aid_call2_pane_cp02

0x9d09,	// (0x0003aea8) aid_call_pane_cp02

0x9d11,	// (0x0003aeb0) clock_digital_number_pane_cp10

0x9d19,	// (0x0003aeb8) clock_digital_number_pane_cp11

0x9d21,	// (0x0003aec0) clock_digital_number_pane_cp12

0x9d29,	// (0x0003aec8) clock_digital_number_pane_cp13

0x9d31,	// (0x0003aed0) clock_digital_separator_pane_cp10

0x121b,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g1

0x121b,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g2

0x9d39,	// (0x0003aed8) popup_clock_digital_analogue_window_cp2_g3

0x121b,	// (0x000323ba) popup_clock_digital_analogue_window_cp2_g4

0x9d39,	// (0x0003aed8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd85,	// (0x00040f24) popup_clock_digital_analogue_window_cp2_g

0x9d41,	// (0x0003aee0) popup_clock_digital_analogue_window_cp2_t1

0x9d4f,	// (0x0003aeee) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd90,	// (0x00040f2f) popup_clock_digital_analogue_window_cp2_t

0x81f1,	// (0x00039390) clock_digital_number_pane_cp10_g1

0x81f1,	// (0x00039390) clock_digital_number_pane_cp10_g2

0x0001,

0xfb73,	// (0x00040d12) clock_digital_number_pane_cp10_g

0x81f1,	// (0x00039390) clock_digital_separator_pane_cp10_g1

0x81f1,	// (0x00039390) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb73,	// (0x00040d12) clock_digital_separator_pane_cp10_g

0x9b7e,	// (0x0003ad1d) uniindi_top_pane_g3

0x9b8f,	// (0x0003ad2e) uniindi_top_pane_g4

0xe8e4,	// (0x0003fa83) vkb2_row_keypad_pane_ParamLimits

0xe8e4,	// (0x0003fa83) vkb2_row_keypad_pane

0xeb6a,	// (0x0003fd09) vkb2_cell_t_keypad_pane_ParamLimits

0xeb6a,	// (0x0003fd09) vkb2_cell_t_keypad_pane

0xeb7a,	// (0x0003fd19) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xeb7a,	// (0x0003fd19) vkb2_cell_t_keypad_pane_cp08

0xeb8d,	// (0x0003fd2c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xeb8d,	// (0x0003fd2c) vkb2_cell_t_keypad_pane_cp09

0xeba1,	// (0x0003fd40) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xeba1,	// (0x0003fd40) vkb2_cell_t_keypad_pane_cp01

0xebb2,	// (0x0003fd51) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xebb2,	// (0x0003fd51) vkb2_cell_t_keypad_pane_cp02

0xebc3,	// (0x0003fd62) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xebc3,	// (0x0003fd62) vkb2_cell_t_keypad_pane_cp03

0xebd4,	// (0x0003fd73) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xebd4,	// (0x0003fd73) vkb2_cell_t_keypad_pane_cp04

0xebe5,	// (0x0003fd84) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xebe5,	// (0x0003fd84) vkb2_cell_t_keypad_pane_cp05

0xebf6,	// (0x0003fd95) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xebf6,	// (0x0003fd95) vkb2_cell_t_keypad_pane_cp06

0xec07,	// (0x0003fda6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xec07,	// (0x0003fda6) vkb2_cell_t_keypad_pane_cp07

0xec18,	// (0x0003fdb7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xec18,	// (0x0003fdb7) vkb2_cell_t_keypad_pane_cp10

0xe395,	// (0x0003f534) vkb2_cell_t_keypad_pane_g1

0xa12a,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1

0xd3ad,	// (0x0003e54c) popup_grid_graphic2_window

0xec2d,	// (0x0003fdcc) aid_size_cell_graphic2_ParamLimits

0xec2d,	// (0x0003fdcc) aid_size_cell_graphic2

0x879b,	// (0x0003993a) bg_popup_window_pane_cp21_ParamLimits

0x879b,	// (0x0003993a) bg_popup_window_pane_cp21

0xec59,	// (0x0003fdf8) graphic2_pages_pane_ParamLimits

0xec59,	// (0x0003fdf8) graphic2_pages_pane

0xec9f,	// (0x0003fe3e) grid_graphic2_control_pane_ParamLimits

0xec9f,	// (0x0003fe3e) grid_graphic2_control_pane

0xeccd,	// (0x0003fe6c) grid_graphic2_pane_ParamLimits

0xeccd,	// (0x0003fe6c) grid_graphic2_pane

0xed2d,	// (0x0003fecc) cell_graphic2_pane

0x0628,	// (0x000317c7) main_comp_mode_pane

0x93c0,	// (0x0003a55f) list_ai3_gene_pane_ParamLimits

0x97c4,	// (0x0003a963) bg_popup_window_pane_cp19_ParamLimits

0x97d0,	// (0x0003a96f) bg_touch_area_indi_pane_ParamLimits

0x97d0,	// (0x0003a96f) bg_touch_area_indi_pane

0x97e6,	// (0x0003a985) bg_touch_area_indi_pane_cp01_ParamLimits

0x97e6,	// (0x0003a985) bg_touch_area_indi_pane_cp01

0x97fc,	// (0x0003a99b) bg_touch_area_indi_pane_cp02_ParamLimits

0x97fc,	// (0x0003a99b) bg_touch_area_indi_pane_cp02

0x9814,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03_ParamLimits

0x9814,	// (0x0003a9b3) bg_touch_area_indi_pane_cp03

0x982e,	// (0x0003a9cd) popup_slider_window_g1_ParamLimits

0x984a,	// (0x0003a9e9) popup_slider_window_g2_ParamLimits

0x9866,	// (0x0003aa05) popup_slider_window_g3_ParamLimits

0xfd1a,	// (0x00040eb9) popup_slider_window_g_ParamLimits

0x98c2,	// (0x0003aa61) popup_slider_window_t1_ParamLimits

0x9936,	// (0x0003aad5) small_volume_slider_vertical_pane_ParamLimits

0xed2d,	// (0x0003fecc) cell_graphic2_pane_ParamLimits

0xed7c,	// (0x0003ff1b) bg_button_pane_cp10_ParamLimits

0xed7c,	// (0x0003ff1b) bg_button_pane_cp10

0xed8f,	// (0x0003ff2e) bg_button_pane_cp11_ParamLimits

0xed8f,	// (0x0003ff2e) bg_button_pane_cp11

0xeda2,	// (0x0003ff41) graphic2_pages_pane_g1_ParamLimits

0xeda2,	// (0x0003ff41) graphic2_pages_pane_g1

0xedbd,	// (0x0003ff5c) graphic2_pages_pane_g2_ParamLimits

0xedbd,	// (0x0003ff5c) graphic2_pages_pane_g2

0x0001,

0xfdde,	// (0x00040f7d) graphic2_pages_pane_g_ParamLimits

0xfdde,	// (0x00040f7d) graphic2_pages_pane_g

0xedd5,	// (0x0003ff74) graphic2_pages_pane_t1_ParamLimits

0xedd5,	// (0x0003ff74) graphic2_pages_pane_t1

0xedeb,	// (0x0003ff8a) cell_graphic2_control_pane_ParamLimits

0xedeb,	// (0x0003ff8a) cell_graphic2_control_pane

0xee05,	// (0x0003ffa4) cell_graphic2_pane_g1_ParamLimits

0xee05,	// (0x0003ffa4) cell_graphic2_pane_g1

0xee12,	// (0x0003ffb1) cell_graphic2_pane_g2_ParamLimits

0xee12,	// (0x0003ffb1) cell_graphic2_pane_g2

0xee1f,	// (0x0003ffbe) cell_graphic2_pane_g3_ParamLimits

0xee1f,	// (0x0003ffbe) cell_graphic2_pane_g3

0xee2c,	// (0x0003ffcb) cell_graphic2_pane_g4_ParamLimits

0xee2c,	// (0x0003ffcb) cell_graphic2_pane_g4

0xee39,	// (0x0003ffd8) cell_graphic2_pane_g5_ParamLimits

0xee39,	// (0x0003ffd8) cell_graphic2_pane_g5

0x0004,

0xfde3,	// (0x00040f82) cell_graphic2_pane_g_ParamLimits

0xfde3,	// (0x00040f82) cell_graphic2_pane_g

0xee54,	// (0x0003fff3) cell_graphic2_pane_t1_ParamLimits

0xee54,	// (0x0003fff3) cell_graphic2_pane_t1

0x1d62,	// (0x00032f01) grid_highlight_pane_cp11_ParamLimits

0x1d62,	// (0x00032f01) grid_highlight_pane_cp11

0x0ce8,	// (0x00031e87) bg_button_pane_cp05

0xee6a,	// (0x00040009) cell_graphic2_control_pane_g1

0x81f1,	// (0x00039390) bg_touch_area_indi_pane_g1

0xa13c,	// (0x0003b2db) aid_cmod_rocker_key_size

0xa146,	// (0x0003b2e5) aid_cmode_itu_key_size

0xa150,	// (0x0003b2ef) main_cmode_video_pane

0xa15a,	// (0x0003b2f9) main_comp_mode_itu_pane

0xa166,	// (0x0003b305) main_comp_mode_rocker_pane

0xa172,	// (0x0003b311) cell_cmode_rocker_pane_ParamLimits

0xa172,	// (0x0003b311) cell_cmode_rocker_pane

0xa184,	// (0x0003b323) cell_cmode_itu_pane_ParamLimits

0xa184,	// (0x0003b323) cell_cmode_itu_pane

0x0ce8,	// (0x00031e87) bg_button_pane_cp06_ParamLimits

0x0ce8,	// (0x00031e87) bg_button_pane_cp06

0x848a,	// (0x00039629) cell_cmode_rocker_pane_g1_ParamLimits

0x848a,	// (0x00039629) cell_cmode_rocker_pane_g1

0x99da,	// (0x0003ab79) cell_cmode_rocker_pane_g2_ParamLimits

0x99da,	// (0x0003ab79) cell_cmode_rocker_pane_g2

0x0001,

0xfdee,	// (0x00040f8d) cell_cmode_rocker_pane_g_ParamLimits

0xfdee,	// (0x00040f8d) cell_cmode_rocker_pane_g

0x0628,	// (0x000317c7) bg_button_pane_cp07

0xa199,	// (0x0003b338) cell_cmode_itu_pane_g1

0xa1a2,	// (0x0003b341) cell_cmode_itu_pane_t1

0xa1b0,	// (0x0003b34f) cell_cmode_itu_pane_t2

0x0001,

0xfdf3,	// (0x00040f92) cell_cmode_itu_pane_t

0x9c00,	// (0x0003ad9f) aid_touch_ctrl_left

0x9c08,	// (0x0003ada7) aid_touch_ctrl_right

0x0628,	// (0x000317c7) compa_mode_pane

0xee77,	// (0x00040016) aid_cmod_rocker_key_size_cp

0xee81,	// (0x00040020) aid_cmode_itu_key_size_cp

0xa1be,	// (0x0003b35d) compa_mode_pane_g1

0xa1c6,	// (0x0003b365) compa_mode_pane_g2

0xa1ce,	// (0x0003b36d) compa_mode_pane_g3

0x0002,

0xfdf8,	// (0x00040f97) compa_mode_pane_g

0xee8b,	// (0x0004002a) main_comp_mode_itu_pane_cp

0xee93,	// (0x00040032) main_comp_mode_rocker_pane_cp

0xee9b,	// (0x0004003a) cell_cmode_itu_pane_cp_ParamLimits

0xee9b,	// (0x0004003a) cell_cmode_itu_pane_cp

0xeeb0,	// (0x0004004f) cell_cmode_rocker_pane_cp_ParamLimits

0xeeb0,	// (0x0004004f) cell_cmode_rocker_pane_cp

0x0ce8,	// (0x00031e87) bg_button_pane_cp06_cp_ParamLimits

0x0ce8,	// (0x00031e87) bg_button_pane_cp06_cp

0x848a,	// (0x00039629) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x848a,	// (0x00039629) cell_cmode_rocker_pane_g1_cp

0x81f1,	// (0x00039390) cell_cmode_rocker_pane_g2_cp

0x0628,	// (0x000317c7) bg_button_pane_cp07_cp

0xeec2,	// (0x00040061) cell_cmode_itu_pane_g1_cp

0xeecb,	// (0x0004006a) cell_cmode_itu_pane_t1_cp

0xeecb,	// (0x0004006a) cell_cmode_itu_pane_t2_cp

0x7cf7,	// (0x00038e96) settings_code_pane_cp2

0x0698,	// (0x00031837) bg_popup_window_pane_cp3_ParamLimits

0x09a2,	// (0x00031b41) heading_pane_cp3_ParamLimits

0x09ae,	// (0x00031b4d) listscroll_popup_graphic_pane_ParamLimits

0xe13e,	// (0x0003f2dd) fep_hwr_aid_pane_ParamLimits

0xe5ae,	// (0x0003f74d) aid_touch_sctrl_top_ParamLimits

0xe5c9,	// (0x0003f768) sctrl_sk_top_pane_g1_ParamLimits

0xe395,	// (0x0003f534) sctrl_sk_top_pane_g2_ParamLimits

0xfd33,	// (0x00040ed2) sctrl_sk_top_pane_g_ParamLimits

0xe5d6,	// (0x0003f775) sctrl_sk_top_pane_t1_ParamLimits

0xe5ae,	// (0x0003f74d) aid_touch_sctrl_bottom_ParamLimits

0xe5d6,	// (0x0003f775) sctrl_sk_bottom_pane_t1_ParamLimits

0x9b4a,	// (0x0003ace9) aid_area_touch_clock

0xe7bb,	// (0x0003f95a) aid_vkb2_area_top_pane_cell_ParamLimits

0xe7bb,	// (0x0003f95a) aid_vkb2_area_top_pane_cell

0xe906,	// (0x0003faa5) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe906,	// (0x0003faa5) aid_vkb2_area_bottom_pane_cell

0xa0b5,	// (0x0003b254) popup_char_count_window

0xa1d6,	// (0x0003b375) popup_char_count_window_g1

0xa1df,	// (0x0003b37e) popup_char_count_window_g2

0xa1e8,	// (0x0003b387) popup_char_count_window_g3

0x0002,

0xfdff,	// (0x00040f9e) popup_char_count_window_g

0xa1f1,	// (0x0003b390) popup_char_count_window_t1

0xe689,	// (0x0003f828) popup_fep_char_preview_window_ParamLimits

0xe689,	// (0x0003f828) popup_fep_char_preview_window

0xe7d9,	// (0x0003f978) vkb2_top_candi_pane_ParamLimits

0xe7d9,	// (0x0003f978) vkb2_top_candi_pane

0xeed9,	// (0x00040078) cell_vkb2_top_candi_pane_ParamLimits

0xeed9,	// (0x00040078) cell_vkb2_top_candi_pane

0xef26,	// (0x000400c5) bg_popup_fep_char_preview_window_ParamLimits

0xef26,	// (0x000400c5) bg_popup_fep_char_preview_window

0xef34,	// (0x000400d3) popup_fep_char_preview_window_t1_ParamLimits

0xef34,	// (0x000400d3) popup_fep_char_preview_window_t1

0xa20f,	// (0x0003b3ae) bg_popup_fep_char_preview_window_g1

0xa207,	// (0x0003b3a6) bg_popup_fep_char_preview_window_g2

0xa1ff,	// (0x0003b39e) bg_popup_fep_char_preview_window_g3

0xa22f,	// (0x0003b3ce) bg_popup_fep_char_preview_window_g4

0xa227,	// (0x0003b3c6) bg_popup_fep_char_preview_window_g5

0xef6e,	// (0x0004010d) bg_popup_fep_char_preview_window_g6

0xa21f,	// (0x0003b3be) bg_popup_fep_char_preview_window_g7

0xa217,	// (0x0003b3b6) bg_popup_fep_char_preview_window_g8

0xa237,	// (0x0003b3d6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfe06,	// (0x00040fa5) bg_popup_fep_char_preview_window_g

0xe395,	// (0x0003f534) cell_vkb2_top_candi_pane_g1_ParamLimits

0xe395,	// (0x0003f534) cell_vkb2_top_candi_pane_g1

0xe3a3,	// (0x0003f542) cell_vkb2_top_candi_pane_g2_ParamLimits

0xe3a3,	// (0x0003f542) cell_vkb2_top_candi_pane_g2

0x9559,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9559,	// (0x0003a6f8) cell_vkb2_top_candi_pane_g3

0xef76,	// (0x00040115) cell_vkb2_top_candi_pane_g4_ParamLimits

0xef76,	// (0x00040115) cell_vkb2_top_candi_pane_g4

0x87d8,	// (0x00039977) cell_vkb2_top_candi_pane_g5_ParamLimits

0x87d8,	// (0x00039977) cell_vkb2_top_candi_pane_g5

0xef97,	// (0x00040136) cell_vkb2_top_candi_pane_g6_ParamLimits

0xef97,	// (0x00040136) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe19,	// (0x00040fb8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe19,	// (0x00040fb8) cell_vkb2_top_candi_pane_g

0xefa5,	// (0x00040144) cell_vkb2_top_candi_pane_t1

0xdf4d,	// (0x0003f0ec) aid_size_touch_slider_mark_ParamLimits

0xdf4d,	// (0x0003f0ec) aid_size_touch_slider_mark

0xec8f,	// (0x0003fe2e) grid_graphic2_catg_pane_ParamLimits

0xec8f,	// (0x0003fe2e) grid_graphic2_catg_pane

0xed09,	// (0x0003fea8) popup_grid_graphic2_window_t1_ParamLimits

0xed09,	// (0x0003fea8) popup_grid_graphic2_window_t1

0xed1b,	// (0x0003feba) popup_grid_graphic2_window_t2_ParamLimits

0xed1b,	// (0x0003feba) popup_grid_graphic2_window_t2

0x0001,

0xfdd9,	// (0x00040f78) popup_grid_graphic2_window_t_ParamLimits

0xfdd9,	// (0x00040f78) popup_grid_graphic2_window_t

0x0ce8,	// (0x00031e87) bg_button_pane_cp05_ParamLimits

0xee6a,	// (0x00040009) cell_graphic2_control_pane_g1_ParamLimits

0xefc4,	// (0x00040163) cell_graphic2_catg_pane_ParamLimits

0xefc4,	// (0x00040163) cell_graphic2_catg_pane

0x0628,	// (0x000317c7) bg_button_pane_cp12

0xefd6,	// (0x00040175) cell_graphic2_catg_pane_g1

0x9b16,	// (0x0003acb5) cell_tb_ext_pane_t1_ParamLimits

0xea63,	// (0x0003fc02) vkb2_top_cell_right_narrow_pane_ParamLimits

0xea63,	// (0x0003fc02) vkb2_top_cell_right_narrow_pane

0xea7b,	// (0x0003fc1a) vkb2_top_cell_right_wide_pane_ParamLimits

0xea7b,	// (0x0003fc1a) vkb2_top_cell_right_wide_pane

0xe130,	// (0x0003f2cf) bg_vkb2_func_pane_ParamLimits

0xe130,	// (0x0003f2cf) bg_vkb2_func_pane

0xeaec,	// (0x0003fc8b) vkb2_top_cell_left_pane_g1_ParamLimits

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp03

0xeb4a,	// (0x0003fce9) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1c7a,	// (0x00032e19) bg_vkb2_func_pane_g1

0x1c82,	// (0x00032e21) bg_vkb2_func_pane_g2

0x1c92,	// (0x00032e31) bg_vkb2_func_pane_g3

0x1c8a,	// (0x00032e29) bg_vkb2_func_pane_g4

0x1c9a,	// (0x00032e39) bg_vkb2_func_pane_g5

0x1ca2,	// (0x00032e41) bg_vkb2_func_pane_g6

0x1caa,	// (0x00032e49) bg_vkb2_func_pane_g7

0x1cb2,	// (0x00032e51) bg_vkb2_func_pane_g8

0x1c72,	// (0x00032e11) bg_vkb2_func_pane_g9

0x0008,

0xfe26,	// (0x00040fc5) bg_vkb2_func_pane_g

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp01

0xeaec,	// (0x0003fc8b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xeaec,	// (0x0003fc8b) vkb2_top_cell_right_wide_pane_g1

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe130,	// (0x0003f2cf) bg_vkb2_fuc_pane_cp02

0xeb4a,	// (0x0003fce9) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xeb4a,	// (0x0003fce9) vkb2_top_cell_right_narrow_pane_g1

0x9742,	// (0x0003a8e1) aid_touch_area_decrease_ParamLimits

0x9742,	// (0x0003a8e1) aid_touch_area_decrease

0x9766,	// (0x0003a905) aid_touch_area_increase_ParamLimits

0x9766,	// (0x0003a905) aid_touch_area_increase

0x9772,	// (0x0003a911) aid_touch_area_mute_ParamLimits

0x9772,	// (0x0003a911) aid_touch_area_mute

0x9796,	// (0x0003a935) aid_touch_area_slider_ParamLimits

0x9796,	// (0x0003a935) aid_touch_area_slider

0x9882,	// (0x0003aa21) popup_slider_window_g4_ParamLimits

0x9882,	// (0x0003aa21) popup_slider_window_g4

0x988e,	// (0x0003aa2d) popup_slider_window_g5_ParamLimits

0x988e,	// (0x0003aa2d) popup_slider_window_g5

0x98b0,	// (0x0003aa4f) popup_slider_window_g6_ParamLimits

0x98b0,	// (0x0003aa4f) popup_slider_window_g6

0x98f0,	// (0x0003aa8f) popup_slider_window_t2_ParamLimits

0x98f0,	// (0x0003aa8f) popup_slider_window_t2

0x0001,

0xfd27,	// (0x00040ec6) popup_slider_window_t_ParamLimits

0xfd27,	// (0x00040ec6) popup_slider_window_t

0x9908,	// (0x0003aaa7) slider_pane_ParamLimits

0x9908,	// (0x0003aaa7) slider_pane

0xa23f,	// (0x0003b3de) slider_pane_g1_ParamLimits

0xa23f,	// (0x0003b3de) slider_pane_g1

0xa253,	// (0x0003b3f2) slider_pane_g2_ParamLimits

0xa253,	// (0x0003b3f2) slider_pane_g2

0xa269,	// (0x0003b408) slider_pane_g3_ParamLimits

0xa269,	// (0x0003b408) slider_pane_g3

0x0003,

0xfe39,	// (0x00040fd8) slider_pane_g_ParamLimits

0xfe39,	// (0x00040fd8) slider_pane_g

0x7511,	// (0x000386b0) popup_tb_float_extension_window_ParamLimits

0x7511,	// (0x000386b0) popup_tb_float_extension_window

0xa295,	// (0x0003b434) aid_size_cell_tb_float_ext

0x0628,	// (0x000317c7) bg_popup_sub_window_cp28

0xa2a1,	// (0x0003b440) grid_tb_float_ext_pane

0xa2ab,	// (0x0003b44a) cell_tb_float_ext_pane_ParamLimits

0xa2ab,	// (0x0003b44a) cell_tb_float_ext_pane

0xa2c5,	// (0x0003b464) cell_tb_float_ext_pane_g1

0xa2ce,	// (0x0003b46d) grid_highlight_pane_cp12

0xe27f,	// (0x0003f41e) cell_last_hwr_side_pane_ParamLimits

0xe27f,	// (0x0003f41e) cell_last_hwr_side_pane

0x81f1,	// (0x00039390) cell_last_hwr_side_pane_g1

0xa2d7,	// (0x0003b476) cell_last_hwr_side_pane_g2

0x0001,

0xfe42,	// (0x00040fe1) cell_last_hwr_side_pane_g

0xe9d2,	// (0x0003fb71) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9d2,	// (0x0003fb71) vkb2_area_bottom_space_btn_pane

0xe395,	// (0x0003f534) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa12a,	// (0x0003b2c9) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xefa5,	// (0x00040144) cell_vkb2_top_candi_pane_t1_ParamLimits

0xefdf,	// (0x0004017e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xefdf,	// (0x0004017e) vkb2_area_bottom_space_btn_pane_g1

0xf019,	// (0x000401b8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf019,	// (0x000401b8) vkb2_area_bottom_space_btn_pane_g2

0xf04f,	// (0x000401ee) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf04f,	// (0x000401ee) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe47,	// (0x00040fe6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe47,	// (0x00040fe6) vkb2_area_bottom_space_btn_pane_g

0xe1f3,	// (0x0003f392) cel_fep_hwr_func_pane_ParamLimits

0xe1f3,	// (0x0003f392) cel_fep_hwr_func_pane

0xe22f,	// (0x0003f3ce) cell_hwr_side_button_pane_ParamLimits

0xe22f,	// (0x0003f3ce) cell_hwr_side_button_pane

0x9b4a,	// (0x0003ace9) aid_area_touch_clock_ParamLimits

0x07d4,	// (0x00031973) bg_uniindi_top_pane_ParamLimits

0x9b5c,	// (0x0003acfb) uniindi_top_pane_g1_ParamLimits

0x9b72,	// (0x0003ad11) uniindi_top_pane_g2_ParamLimits

0x9b7e,	// (0x0003ad1d) uniindi_top_pane_g3_ParamLimits

0x9b8f,	// (0x0003ad2e) uniindi_top_pane_g4_ParamLimits

0xfd5f,	// (0x00040efe) uniindi_top_pane_g_ParamLimits

0x9b9c,	// (0x0003ad3b) uniindi_top_pane_t1_ParamLimits

0x07d4,	// (0x00031973) bg_vkb2_func_pane_cp01_ParamLimits

0x07d4,	// (0x00031973) bg_vkb2_func_pane_cp01

0xa2e0,	// (0x0003b47f) cel_fep_hwr_func_pane_g1_ParamLimits

0xa2e0,	// (0x0003b47f) cel_fep_hwr_func_pane_g1

0x07d4,	// (0x00031973) bg_vkb2_func_pane_cp02_ParamLimits

0x07d4,	// (0x00031973) bg_vkb2_func_pane_cp02

0xa2e0,	// (0x0003b47f) cell_hwr_side_button_pane_g1_ParamLimits

0xa2e0,	// (0x0003b47f) cell_hwr_side_button_pane_g1

0x1b8a,	// (0x00032d29) status_pane_g4_ParamLimits

0x1b8a,	// (0x00032d29) status_pane_g4

0x1ba2,	// (0x00032d41) status_pane_t1

0x3848,	// (0x000349e7) form2_midp_gauge_slider_cont_pane

0x3850,	// (0x000349ef) form2_midp_gauge_slider_pane_t1_ParamLimits

0x7f8d,	// (0x0003912c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x7f9f,	// (0x0003913e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb26,	// (0x00040cc5) form2_midp_gauge_slider_pane_t_ParamLimits

0x3862,	// (0x00034a01) form2_midp_slider_pane_ParamLimits

0xe649,	// (0x0003f7e8) aid_size_cell_func_vkb2_ParamLimits

0xe649,	// (0x0003f7e8) aid_size_cell_func_vkb2

0xa281,	// (0x0003b420) slider_pane_g4_ParamLimits

0xa281,	// (0x0003b420) slider_pane_g4

0xf099,	// (0x00040238) form2_midp_gauge_slider_pane_t2_cp01

0xf0a7,	// (0x00040246) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xf0a7,	// (0x00040246) form2_midp_gauge_slider_pane_t3_cp01

0xf0c4,	// (0x00040263) form2_midp_slider_pane_cp01

0x0628,	// (0x000317c7) navi_smil_pane

0xa310,	// (0x0003b4af) navi_smil_pane_g1

0xa318,	// (0x0003b4b7) navi_smil_pane_t1

0xa2ee,	// (0x0003b48d) form2_midp_slider_pane_g1

0xa2f7,	// (0x0003b496) form2_midp_slider_pane_g2

0xa2ff,	// (0x0003b49e) form2_midp_slider_pane_g3

0xa2ee,	// (0x0003b48d) form2_midp_slider_pane_g4

0xf0cd,	// (0x0004026c) form2_midp_slider_pane_g5

0x0004,

0xfe50,	// (0x00040fef) form2_midp_slider_pane_g

0xf089,	// (0x00040228) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf089,	// (0x00040228) vkb2_area_bottom_space_btn_pane_g4

0x767c,	// (0x0003881b) lc0_navi_pane_ParamLimits

0x767c,	// (0x0003881b) lc0_navi_pane

0x76f2,	// (0x00038891) lc0_stat_indi_pane_ParamLimits

0x76f2,	// (0x00038891) lc0_stat_indi_pane

0x7709,	// (0x000388a8) ls0_title_pane_ParamLimits

0x7709,	// (0x000388a8) ls0_title_pane

0x0ce8,	// (0x00031e87) bg_popup_sub_pane_cp14_ParamLimits

0x9b31,	// (0x0003acd0) list_uniindi_pane_ParamLimits

0x9b3d,	// (0x0003acdc) uniindi_top_pane_ParamLimits

0x9bd8,	// (0x0003ad77) list_single_uniindi_pane_g1_ParamLimits

0x9beb,	// (0x0003ad8a) list_single_uniindi_pane_t1_ParamLimits

0xf0d6,	// (0x00040275) lc0_stat_clock_pane_ParamLimits

0xf0d6,	// (0x00040275) lc0_stat_clock_pane

0xf0e3,	// (0x00040282) lc0_stat_indi_pane_g1_ParamLimits

0xf0e3,	// (0x00040282) lc0_stat_indi_pane_g1

0xf0f0,	// (0x0004028f) lc0_stat_indi_pane_g2_ParamLimits

0xf0f0,	// (0x0004028f) lc0_stat_indi_pane_g2

0x0001,

0xfe5b,	// (0x00040ffa) lc0_stat_indi_pane_g_ParamLimits

0xfe5b,	// (0x00040ffa) lc0_stat_indi_pane_g

0xf0fd,	// (0x0004029c) lc0_uni_indicator_pane_ParamLimits

0xf0fd,	// (0x0004029c) lc0_uni_indicator_pane

0xf10a,	// (0x000402a9) ls0_title_pane_g1_ParamLimits

0xf10a,	// (0x000402a9) ls0_title_pane_g1

0xf11e,	// (0x000402bd) ls0_title_pane_t1_ParamLimits

0xf11e,	// (0x000402bd) ls0_title_pane_t1

0xf154,	// (0x000402f3) lc0_uni_indicator_pane_g1_ParamLimits

0xf154,	// (0x000402f3) lc0_uni_indicator_pane_g1

0xa326,	// (0x0003b4c5) lc0_stat_clock_pane_t1

0x0628,	// (0x000317c7) main_ai5_pane

0xa334,	// (0x0003b4d3) ai5_sk_pane_ParamLimits

0xa334,	// (0x0003b4d3) ai5_sk_pane

0xf16a,	// (0x00040309) cell_ai5_widget_pane_ParamLimits

0xf16a,	// (0x00040309) cell_ai5_widget_pane

0xa341,	// (0x0003b4e0) aid_size_cell_widget_grid

0xa355,	// (0x0003b4f4) bg_ai5_widget_pane_ParamLimits

0xa355,	// (0x0003b4f4) bg_ai5_widget_pane

0xf214,	// (0x000403b3) cell_ai5_widget_pane_g2

0xf224,	// (0x000403c3) cell_ai5_widget_pane_g3

0xf238,	// (0x000403d7) cell_ai5_widget_pane_g4

0xf244,	// (0x000403e3) cell_ai5_widget_pane_g5

0xf250,	// (0x000403ef) cell_ai5_widget_pane_g6

0xf25c,	// (0x000403fb) cell_ai5_widget_pane_g7

0xf2a4,	// (0x00040443) cell_ai5_widget_pane_t1_ParamLimits

0xf2a4,	// (0x00040443) cell_ai5_widget_pane_t1

0xf2c1,	// (0x00040460) cell_ai5_widget_pane_t2_ParamLimits

0xf2c1,	// (0x00040460) cell_ai5_widget_pane_t2

0xf2d9,	// (0x00040478) cell_ai5_widget_pane_t3_ParamLimits

0xf2d9,	// (0x00040478) cell_ai5_widget_pane_t3

0xf2f1,	// (0x00040490) cell_ai5_widget_pane_t4_ParamLimits

0xf2f1,	// (0x00040490) cell_ai5_widget_pane_t4

0xf30b,	// (0x000404aa) cell_ai5_widget_pane_t5_ParamLimits

0xf30b,	// (0x000404aa) cell_ai5_widget_pane_t5

0xa361,	// (0x0003b500) cell_ai5_widget_pane_t6_ParamLimits

0xa361,	// (0x0003b500) cell_ai5_widget_pane_t6

0xa373,	// (0x0003b512) cell_ai5_widget_pane_t7_ParamLimits

0xa373,	// (0x0003b512) cell_ai5_widget_pane_t7

0xf32a,	// (0x000404c9) cell_ai5_widget_pane_t8_ParamLimits

0xf32a,	// (0x000404c9) cell_ai5_widget_pane_t8

0x0009,

0xfe75,	// (0x00041014) cell_ai5_widget_pane_t_ParamLimits

0xfe75,	// (0x00041014) cell_ai5_widget_pane_t

0xf372,	// (0x00040511) grid_ai5_widget_pane

0x0ce8,	// (0x00031e87) highlight_cell_ai5_widget_pane_ParamLimits

0x0ce8,	// (0x00031e87) highlight_cell_ai5_widget_pane

0xf388,	// (0x00040527) ai5_sk_left_pane

0xf392,	// (0x00040531) ai5_sk_middle_pane

0xf39c,	// (0x0004053b) ai5_sk_right_pane

0xa38c,	// (0x0003b52b) bg_ai5_widget_pane_g1_ParamLimits

0xa38c,	// (0x0003b52b) bg_ai5_widget_pane_g1

0xa398,	// (0x0003b537) bg_ai5_widget_pane_g2_ParamLimits

0xa398,	// (0x0003b537) bg_ai5_widget_pane_g2

0xa3a4,	// (0x0003b543) bg_ai5_widget_pane_g3_ParamLimits

0xa3a4,	// (0x0003b543) bg_ai5_widget_pane_g3

0xa3b0,	// (0x0003b54f) bg_ai5_widget_pane_g4_ParamLimits

0xa3b0,	// (0x0003b54f) bg_ai5_widget_pane_g4

0xa3bc,	// (0x0003b55b) bg_ai5_widget_pane_g5_ParamLimits

0xa3bc,	// (0x0003b55b) bg_ai5_widget_pane_g5

0xa3c8,	// (0x0003b567) bg_ai5_widget_pane_g6_ParamLimits

0xa3c8,	// (0x0003b567) bg_ai5_widget_pane_g6

0xa3d4,	// (0x0003b573) bg_ai5_widget_pane_g7_ParamLimits

0xa3d4,	// (0x0003b573) bg_ai5_widget_pane_g7

0xa3e0,	// (0x0003b57f) bg_ai5_widget_pane_g8_ParamLimits

0xa3e0,	// (0x0003b57f) bg_ai5_widget_pane_g8

0xa3ec,	// (0x0003b58b) bg_ai5_widget_pane_g9_ParamLimits

0xa3ec,	// (0x0003b58b) bg_ai5_widget_pane_g9

0x0008,

0xfe8a,	// (0x00041029) bg_ai5_widget_pane_g_ParamLimits

0xfe8a,	// (0x00041029) bg_ai5_widget_pane_g

0xa41f,	// (0x0003b5be) cell_shortcut_ai5_widget_pane_ParamLimits

0xa41f,	// (0x0003b5be) cell_shortcut_ai5_widget_pane

0x06dd,	// (0x0003187c) bg_cell_shortcut_ai5_widget_pane

0xa430,	// (0x0003b5cf) cell_grid_ai5_widget_pane_g1

0xa439,	// (0x0003b5d8) highlight_cell_shortcut_ai5_widget_pane

0x1c7a,	// (0x00032e19) ai5_sk_left_pane_g1

0xa441,	// (0x0003b5e0) ai5_sk_left_pane_g2

0xa449,	// (0x0003b5e8) ai5_sk_left_pane_g3

0xa451,	// (0x0003b5f0) ai5_sk_left_pane_g4

0x0003,

0xfe9d,	// (0x0004103c) ai5_sk_left_pane_g

0xa459,	// (0x0003b5f8) ai5_sk_left_pane_t1

0x1c82,	// (0x00032e21) ai5_sk_right_pane_g1

0xa467,	// (0x0003b606) ai5_sk_right_pane_g2

0xa46f,	// (0x0003b60e) ai5_sk_right_pane_g3

0xa477,	// (0x0003b616) ai5_sk_right_pane_g4

0x0003,

0xfea6,	// (0x00041045) ai5_sk_right_pane_g

0xa47f,	// (0x0003b61e) ai5_sk_right_pane_t1

0x1c82,	// (0x00032e21) ai5_sk_middle_pane_g1

0x1c7a,	// (0x00032e19) ai5_sk_middle_pane_g2

0x1c9a,	// (0x00032e39) ai5_sk_middle_pane_g3

0xa46f,	// (0x0003b60e) ai5_sk_middle_pane_g4

0xa449,	// (0x0003b5e8) ai5_sk_middle_pane_g5

0xa48d,	// (0x0003b62c) ai5_sk_middle_pane_g6

0xf3a6,	// (0x00040545) ai5_sk_middle_pane_g7

0x0006,

0xfeaf,	// (0x0004104e) ai5_sk_middle_pane_g

0x75c1,	// (0x00038760) aid_touch_area_size_lc0_ParamLimits

0x75c1,	// (0x00038760) aid_touch_area_size_lc0

0xe3c4,	// (0x0003f563) cell_hwr_candidate_pane_t1_ParamLimits

0x1aac,	// (0x00032c4b) aid_touch_navi_pane

0x77df,	// (0x0003897e) status_dt_navi_pane_ParamLimits

0x77df,	// (0x0003897e) status_dt_navi_pane

0x77ec,	// (0x0003898b) status_dt_sta_pane_ParamLimits

0x77ec,	// (0x0003898b) status_dt_sta_pane

0xf3ae,	// (0x0004054d) dt_sta_controll_pane

0xf3bb,	// (0x0004055a) dt_sta_indi_pane

0xf3cc,	// (0x0004056b) dt_sta_title_pane

0x07d4,	// (0x00031973) bg_dt_sta_indi_pane_ParamLimits

0x07d4,	// (0x00031973) bg_dt_sta_indi_pane

0xf3df,	// (0x0004057e) dt_sta_battery_pane

0xf3e7,	// (0x00040586) dt_sta_indi_pane_g1

0xa495,	// (0x0003b634) dt_sta_indi_pane_g2

0xa49e,	// (0x0003b63d) dt_sta_indi_pane_g3

0x0002,

0xfebe,	// (0x0004105d) dt_sta_indi_pane_g

0xa4a7,	// (0x0003b646) dt_sta_signal_pane

0x0ce8,	// (0x00031e87) bg_dt_sta_title_pane_ParamLimits

0x0ce8,	// (0x00031e87) bg_dt_sta_title_pane

0x28f4,	// (0x00033a93) dt_sta_title_pane_g1

0xf3f0,	// (0x0004058f) dt_sta_title_pane_t1_ParamLimits

0xf3f0,	// (0x0004058f) dt_sta_title_pane_t1

0x0628,	// (0x000317c7) bg_dt_sta_control_pane

0xf405,	// (0x000405a4) dt_sta_controll_pane_g1

0xa4b0,	// (0x0003b64f) bg_dt_sta_title_pane_g1

0xa4b9,	// (0x0003b658) bg_dt_sta_title_pane_g2

0xa4c2,	// (0x0003b661) bg_dt_sta_title_pane_g3

0x0002,

0xfec5,	// (0x00041064) bg_dt_sta_title_pane_g

0x81f1,	// (0x00039390) bg_dt_sta_indi_pane_g1

0xa4cb,	// (0x0003b66a) dt_sta_signal_pane_g1

0xa4d3,	// (0x0003b672) dt_sta_signal_pane_g2

0x0001,

0xfecc,	// (0x0004106b) dt_sta_signal_pane_g

0xa4db,	// (0x0003b67a) dt_sta_battery_pane_g1

0xa4e4,	// (0x0003b683) dt_sta_battery_pane_t1

0x81f1,	// (0x00039390) bg_dt_sta_control_pane_g1

0x1299,	// (0x00032438) fep_china_uni_eep_pane

0x12a1,	// (0x00032440) fep_china_uni_entry_pane_ParamLimits

0x12b1,	// (0x00032450) popup_fep_china_uni_window_g1_ParamLimits

0x12c1,	// (0x00032460) popup_fep_china_uni_window_g2_ParamLimits

0x12c1,	// (0x00032460) popup_fep_china_uni_window_g2

0x0001,

0xf762,	// (0x00040901) popup_fep_china_uni_window_g_ParamLimits

0xf762,	// (0x00040901) popup_fep_china_uni_window_g

0xa4f3,	// (0x0003b692) fep_china_uni_eep_pane_g1

0xa4fb,	// (0x0003b69a) fep_china_uni_eep_pane_t1

0xa307,	// (0x0003b4a6) aid_touch_area_size_smil_player

0x1b5d,	// (0x00032cfc) lc0_clock_pane

0x1b96,	// (0x00032d35) status_pane_g5_ParamLimits

0x1b96,	// (0x00032d35) status_pane_g5

0x7223,	// (0x000383c2) popup_keymap_window

0x1b76,	// (0x00032d15) status_icon_pane

0xf224,	// (0x000403c3) cell_ai5_widget_pane_g3_ParamLimits

0xf238,	// (0x000403d7) cell_ai5_widget_pane_g4_ParamLimits

0xf244,	// (0x000403e3) cell_ai5_widget_pane_g5_ParamLimits

0xf268,	// (0x00040407) cell_ai5_widget_pane_g8_ParamLimits

0xf268,	// (0x00040407) cell_ai5_widget_pane_g8

0xf27c,	// (0x0004041b) cell_ai5_widget_pane_g9_ParamLimits

0xf27c,	// (0x0004041b) cell_ai5_widget_pane_g9

0xf290,	// (0x0004042f) cell_ai5_widget_pane_g10_ParamLimits

0xf290,	// (0x0004042f) cell_ai5_widget_pane_g10

0xa50a,	// (0x0003b6a9) status_icon_pane_g1

0x0628,	// (0x000317c7) bg_popup_sub_pane_cp13

0xa512,	// (0x0003b6b1) popup_keymap_window_t1

0x70fd,	// (0x0003829c) control_pane_g6_ParamLimits

0x70fd,	// (0x0003829c) control_pane_g6

0x70f0,	// (0x0003828f) control_pane_g7_ParamLimits

0x70f0,	// (0x0003828f) control_pane_g7

0x70e3,	// (0x00038282) control_pane_g8_ParamLimits

0x70e3,	// (0x00038282) control_pane_g8

0xf3ae,	// (0x0004054d) dt_sta_controll_pane_ParamLimits

0xf3bb,	// (0x0004055a) dt_sta_indi_pane_ParamLimits

0xf3cc,	// (0x0004056b) dt_sta_title_pane_ParamLimits

0x0c2a,	// (0x00031dc9) aid_size_touch_scroll_bar_cale

0xd486,	// (0x0003e625) popup_discreet_window_ParamLimits

0xd486,	// (0x0003e625) popup_discreet_window

0xd500,	// (0x0003e69f) popup_sk_window

0x21ee,	// (0x0003338d) bg_popup_sub_pane_cp28_ParamLimits

0x21ee,	// (0x0003338d) bg_popup_sub_pane_cp28

0xa520,	// (0x0003b6bf) popup_discreet_window_g1_ParamLimits

0xa520,	// (0x0003b6bf) popup_discreet_window_g1

0xa540,	// (0x0003b6df) popup_discreet_window_t1_ParamLimits

0xa540,	// (0x0003b6df) popup_discreet_window_t1

0xa55e,	// (0x0003b6fd) popup_discreet_window_t2_ParamLimits

0xa55e,	// (0x0003b6fd) popup_discreet_window_t2

0x0002,

0xfed1,	// (0x00041070) popup_discreet_window_t_ParamLimits

0xfed1,	// (0x00041070) popup_discreet_window_t

0xf40e,	// (0x000405ad) popup_sk_window_g1

0xf418,	// (0x000405b7) popup_sk_window_g2

0x0001,

0xfed8,	// (0x00041077) popup_sk_window_g

0xa5be,	// (0x0003b75d) popup_sk_window_t1

0xa5b0,	// (0x0003b74f) popup_sk_window_t1_copy1

0xf214,	// (0x000403b3) cell_ai5_widget_pane_g2_ParamLimits

0xf33c,	// (0x000404db) cell_ai5_widget_pane_t9_ParamLimits

0xf33c,	// (0x000404db) cell_ai5_widget_pane_t9

0x0628,	// (0x000317c7) main_fep_fshwr2_pane

0xf422,	// (0x000405c1) aid_fshwr2_btn_pane

0xf42a,	// (0x000405c9) aid_fshwr2_syb_pane

0xf432,	// (0x000405d1) aid_fshwr2_txt_pane

0xf43a,	// (0x000405d9) fshwr2_func_candi_pane

0xf446,	// (0x000405e5) fshwr2_hwr_syb_pane

0xf452,	// (0x000405f1) fshwr2_icf_pane

0x0628,	// (0x000317c7) fshwr2_icf_bg_pane

0xf45c,	// (0x000405fb) fshwr2_icf_pane_t1_ParamLimits

0xf45c,	// (0x000405fb) fshwr2_icf_pane_t1

0x81f1,	// (0x00039390) fshwr2_func_candi_pane_g1

0xa5e0,	// (0x0003b77f) fshwr2_func_candi_row_pane_ParamLimits

0xa5e0,	// (0x0003b77f) fshwr2_func_candi_row_pane

0xf473,	// (0x00040612) cell_fshwr2_syb_pane_ParamLimits

0xf473,	// (0x00040612) cell_fshwr2_syb_pane

0x848a,	// (0x00039629) fshwr2_hwr_syb_pane_g1_ParamLimits

0x848a,	// (0x00039629) fshwr2_hwr_syb_pane_g1

0x0628,	// (0x000317c7) bg_popup_call_pane_cp01

0xa5f1,	// (0x0003b790) fshwr2_func_candi_cell_pane_ParamLimits

0xa5f1,	// (0x0003b790) fshwr2_func_candi_cell_pane

0xa622,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa622,	// (0x0003b7c1) fshwr2_func_candi_cell_bg_pane

0xa63c,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa63c,	// (0x0003b7db) fshwr2_func_candi_cell_pane_g1

0xa65c,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa65c,	// (0x0003b7fb) fshwr2_func_candi_cell_pane_t1

0x0628,	// (0x000317c7) bg_button_pane_cp08

0x172a,	// (0x000328c9) cell_fshwr2_syb_bg_pane

0xf48f,	// (0x0004062e) cell_fshwr2_syb_bg_pane_g1

0xa66f,	// (0x0003b80e) cell_fshwr2_syb_bg_pane_t1

0x0ce8,	// (0x00031e87) main_tmo_pane

0x7b32,	// (0x00038cd1) uni_indicator_pane_g1_ParamLimits

0x7b47,	// (0x00038ce6) uni_indicator_pane_g2_ParamLimits

0x7b5d,	// (0x00038cfc) uni_indicator_pane_g3_ParamLimits

0x2bb8,	// (0x00033d57) uni_indicator_pane_g4_ParamLimits

0x2bb8,	// (0x00033d57) uni_indicator_pane_g4

0x2bcc,	// (0x00033d6b) uni_indicator_pane_g5_ParamLimits

0x2bcc,	// (0x00033d6b) uni_indicator_pane_g5

0x2bfe,	// (0x00033d9d) uni_indicator_pane_g6_ParamLimits

0x2bfe,	// (0x00033d9d) uni_indicator_pane_g6

0xf95f,	// (0x00040afe) uni_indicator_pane_g_ParamLimits

0x9724,	// (0x0003a8c3) popup_tmo_note_window_ParamLimits

0x9724,	// (0x0003a8c3) popup_tmo_note_window

0x0628,	// (0x000317c7) fshwr2_bg_pane

0xa64d,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa64d,	// (0x0003b7ec) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfedd,	// (0x0004107c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfedd,	// (0x0004107c) fshwr2_func_candi_cell_pane_g

0x81f1,	// (0x00039390) bg_popup_window_pane_cp01

0xa67e,	// (0x0003b81d) bg_popup_window_pane_g1_cp01

0xa687,	// (0x0003b826) bg_popup_window_pane_cp22_ParamLimits

0xa687,	// (0x0003b826) bg_popup_window_pane_cp22

0xa695,	// (0x0003b834) listscroll_tmo_link_pane_ParamLimits

0xa695,	// (0x0003b834) listscroll_tmo_link_pane

0xa6d5,	// (0x0003b874) popup_tmo_note_window_g1_ParamLimits

0xa6d5,	// (0x0003b874) popup_tmo_note_window_g1

0xa6e2,	// (0x0003b881) tmo_note_info_pane_ParamLimits

0xa6e2,	// (0x0003b881) tmo_note_info_pane

0xf497,	// (0x00040636) list_tmo_note_info_pane_g1_ParamLimits

0xf497,	// (0x00040636) list_tmo_note_info_pane_g1

0xa6fc,	// (0x0003b89b) list_tmo_note_info_pane_g2_ParamLimits

0xa6fc,	// (0x0003b89b) list_tmo_note_info_pane_g2

0x0001,

0xfee2,	// (0x00041081) list_tmo_note_info_pane_g_ParamLimits

0xfee2,	// (0x00041081) list_tmo_note_info_pane_g

0xa718,	// (0x0003b8b7) list_tmo_note_info_text_pane_ParamLimits

0xa718,	// (0x0003b8b7) list_tmo_note_info_text_pane

0xa75a,	// (0x0003b8f9) list_tmo_link_pane

0xa767,	// (0x0003b906) scroll_pane_cp20

0xa774,	// (0x0003b913) list_single_tmo_link_pane_ParamLimits

0xa774,	// (0x0003b913) list_single_tmo_link_pane

0xa784,	// (0x0003b923) list_single_tmo_link_pane_t1

0xa792,	// (0x0003b931) list_tmo_note_info_text_pane_t1_ParamLimits

0xa792,	// (0x0003b931) list_tmo_note_info_text_pane_t1

0x5604,	// (0x000367a3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x5604,	// (0x000367a3) aid_size_touch_scroll_bar_cp01

0x45cc,	// (0x0003576b) aid_size_touch_slider_marker

0xd4e8,	// (0x0003e687) popup_settings_window_ParamLimits

0xd4e8,	// (0x0003e687) popup_settings_window

0x476e,	// (0x0003590d) popup_candi_list_indi_window

0x1aac,	// (0x00032c4b) aid_touch_navi_pane_ParamLimits

0xe582,	// (0x0003f721) rs_clock_indi_pane

0xe58b,	// (0x0003f72a) sctrl_sk_bottom_pane_ParamLimits

0xe59c,	// (0x0003f73b) sctrl_sk_top_pane_ParamLimits

0xe6a3,	// (0x0003f842) popup_fep_tooltip_window

0xa341,	// (0x0003b4e0) aid_size_cell_widget_grid_ParamLimits

0xf208,	// (0x000403a7) cell_ai5_widget_pane_g1_ParamLimits

0xf208,	// (0x000403a7) cell_ai5_widget_pane_g1

0xf250,	// (0x000403ef) cell_ai5_widget_pane_g6_ParamLimits

0xf25c,	// (0x000403fb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe60,	// (0x00040fff) cell_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00040fff) cell_ai5_widget_pane_g

0xf360,	// (0x000404ff) cell_ai5_widget_pane_t10_ParamLimits

0xf360,	// (0x000404ff) cell_ai5_widget_pane_t10

0xf372,	// (0x00040511) grid_ai5_widget_pane_ParamLimits

0xa3f8,	// (0x0003b597) cell_contacts_ai5_widget_pane_ParamLimits

0xa3f8,	// (0x0003b597) cell_contacts_ai5_widget_pane

0xa573,	// (0x0003b712) popup_discreet_window_t3_ParamLimits

0xa573,	// (0x0003b712) popup_discreet_window_t3

0xa5cc,	// (0x0003b76b) popup_fshwr2_char_preview_window_ParamLimits

0xa5cc,	// (0x0003b76b) popup_fshwr2_char_preview_window

0xf4ae,	// (0x0004064d) tmo_note_info_pane_t1

0xf4c3,	// (0x00040662) tmo_note_info_pane_t2

0xf4dc,	// (0x0004067b) tmo_note_info_pane_t3

0xa736,	// (0x0003b8d5) tmo_note_info_pane_t4

0xa748,	// (0x0003b8e7) tmo_note_info_pane_t5

0x0004,

0xfee7,	// (0x00041086) tmo_note_info_pane_t

0xa75a,	// (0x0003b8f9) list_tmo_link_pane_ParamLimits

0xa767,	// (0x0003b906) scroll_pane_cp20_ParamLimits

0x0628,	// (0x000317c7) bg_popup_fep_char_preview_window_cp01

0xa7ab,	// (0x0003b94a) popup_fshwr2_char_preview_window_t1

0xa7b9,	// (0x0003b958) popup_candi_list_indi_window_g1

0xa7c2,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane

0xa7ce,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1

0xa7e2,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2

0xa7f1,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfef2,	// (0x00041091) cell_contacts_ai5_widget_pane_g

0xa804,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1

0x0ce8,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa87e,	// (0x0003ba1d) settings_container_pane

0x172a,	// (0x000328c9) listscroll_set_pane_copy1

0x33db,	// (0x0003457a) scroll_pane_cp121_copy1

0xa88a,	// (0x0003ba29) set_content_pane_copy1

0xa892,	// (0x0003ba31) aid_height_set_list_copy1_ParamLimits

0xa892,	// (0x0003ba31) aid_height_set_list_copy1

0x2be0,	// (0x00033d7f) aid_size_parent_copy1_ParamLimits

0x2be0,	// (0x00033d7f) aid_size_parent_copy1

0xa89e,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa89e,	// (0x0003ba3d) button_value_adjust_pane_cp6_copy1

0x0e3f,	// (0x00031fde) list_highlight_pane_cp2_copy1_ParamLimits

0x0e3f,	// (0x00031fde) list_highlight_pane_cp2_copy1

0xa8b2,	// (0x0003ba51) list_set_pane_copy1_ParamLimits

0xa8b2,	// (0x0003ba51) list_set_pane_copy1

0xa819,	// (0x0003b9b8) main_pane_set_t1_copy1_ParamLimits

0xa819,	// (0x0003b9b8) main_pane_set_t1_copy1

0xa853,	// (0x0003b9f2) main_pane_set_t2_copy1_ParamLimits

0xa853,	// (0x0003b9f2) main_pane_set_t2_copy1

0xa95f,	// (0x0003bafe) main_pane_set_t3_copy1

0xa96d,	// (0x0003bb0c) main_pane_set_t4_copy1

0xa872,	// (0x0003ba11) set_content_pane_g1_copy1_ParamLimits

0xa872,	// (0x0003ba11) set_content_pane_g1_copy1

0xa97b,	// (0x0003bb1a) setting_code_pane_copy1

0xa985,	// (0x0003bb24) setting_slider_graphic_pane_copy1

0xa985,	// (0x0003bb24) setting_slider_pane_copy1

0xa98f,	// (0x0003bb2e) setting_text_pane_copy1

0xa999,	// (0x0003bb38) setting_volume_pane_copy1

0xa9a2,	// (0x0003bb41) settings_code_pane_cp2_copy1

0xa9aa,	// (0x0003bb49) settings_code_pane_cp_copy1_ParamLimits

0xa9aa,	// (0x0003bb49) settings_code_pane_cp_copy1

0xa9be,	// (0x0003bb5d) volume_set_pane_copy1

0xa9c6,	// (0x0003bb65) volume_set_pane_g10_copy1

0xa9ce,	// (0x0003bb6d) volume_set_pane_g1_copy1

0xa9d6,	// (0x0003bb75) volume_set_pane_g2_copy1

0xa9de,	// (0x0003bb7d) volume_set_pane_g3_copy1

0xa9e6,	// (0x0003bb85) volume_set_pane_g4_copy1

0xa9ee,	// (0x0003bb8d) volume_set_pane_g5_copy1

0xa9f6,	// (0x0003bb95) volume_set_pane_g6_copy1

0xa9fe,	// (0x0003bb9d) volume_set_pane_g7_copy1

0xaa06,	// (0x0003bba5) volume_set_pane_g8_copy1

0xaa0e,	// (0x0003bbad) volume_set_pane_g9_copy1

0x0698,	// (0x00031837) bg_set_opt_pane_cp_copy1_ParamLimits

0x0698,	// (0x00031837) bg_set_opt_pane_cp_copy1

0xaa16,	// (0x0003bbb5) setting_slider_pane_t1_copy1_ParamLimits

0xaa16,	// (0x0003bbb5) setting_slider_pane_t1_copy1

0xaa34,	// (0x0003bbd3) setting_slider_pane_t2_copy1_ParamLimits

0xaa34,	// (0x0003bbd3) setting_slider_pane_t2_copy1

0xaa4e,	// (0x0003bbed) setting_slider_pane_t3_copy1_ParamLimits

0xaa4e,	// (0x0003bbed) setting_slider_pane_t3_copy1

0xaa66,	// (0x0003bc05) slider_set_pane_copy1_ParamLimits

0xaa66,	// (0x0003bc05) slider_set_pane_copy1

0x0d4f,	// (0x00031eee) set_opt_bg_pane_g1_copy2

0x0d57,	// (0x00031ef6) set_opt_bg_pane_g2_copy2

0xaa7c,	// (0x0003bc1b) set_opt_bg_pane_g3_copy2

0x0d67,	// (0x00031f06) set_opt_bg_pane_g4_copy2

0x0d6f,	// (0x00031f0e) set_opt_bg_pane_g5_copy2

0x0d77,	// (0x00031f16) set_opt_bg_pane_g6_copy2

0xaa86,	// (0x0003bc25) set_opt_bg_pane_g7_copy2

0xaa8e,	// (0x0003bc2d) set_opt_bg_pane_g8_copy2

0xaa98,	// (0x0003bc37) set_opt_bg_pane_g9_copy2

0xf4f1,	// (0x00040690) aid_size_touch_slider_mark_copy1_ParamLimits

0xf4f1,	// (0x00040690) aid_size_touch_slider_mark_copy1

0xaaa2,	// (0x0003bc41) slider_set_pane_g1_copy1

0xf505,	// (0x000406a4) slider_set_pane_g2_copy1

0xdf6d,	// (0x0003f10c) slider_set_pane_g3_copy1_ParamLimits

0xdf6d,	// (0x0003f10c) slider_set_pane_g3_copy1

0xdf81,	// (0x0003f120) slider_set_pane_g4_copy1_ParamLimits

0xdf81,	// (0x0003f120) slider_set_pane_g4_copy1

0xdf99,	// (0x0003f138) slider_set_pane_g5_copy1_ParamLimits

0xdf99,	// (0x0003f138) slider_set_pane_g5_copy1

0xdf6d,	// (0x0003f10c) slider_set_pane_g6_copy1_ParamLimits

0xdf6d,	// (0x0003f10c) slider_set_pane_g6_copy1

0xf50d,	// (0x000406ac) slider_set_pane_g7_copy1_ParamLimits

0xf50d,	// (0x000406ac) slider_set_pane_g7_copy1

0x063c,	// (0x000317db) bg_set_opt_pane_cp2_copy1

0xaaab,	// (0x0003bc4a) setting_slider_graphic_pane_g1_copy1

0xaab4,	// (0x0003bc53) setting_slider_graphic_pane_t1_copy1

0xaac4,	// (0x0003bc63) setting_slider_graphic_pane_t2_copy1

0xaad4,	// (0x0003bc73) slider_set_pane_cp_copy1

0xaae4,	// (0x0003bc83) input_focus_pane_cp1_copy1

0xaaed,	// (0x0003bc8c) list_set_text_pane_copy1

0xaaf5,	// (0x0003bc94) setting_text_pane_g1_copy1

0x4e17,	// (0x00035fb6) set_text_pane_t1_copy1

0xaae4,	// (0x0003bc83) input_focus_pane_cp2_copy1

0xaaf5,	// (0x0003bc94) setting_code_pane_g1_copy1

0xaafe,	// (0x0003bc9d) setting_code_pane_t1_copy1

0xab0c,	// (0x0003bcab) list_set_graphic_pane_copy1

0x063c,	// (0x000317db) bg_set_opt_pane_cp4_copy1

0x142c,	// (0x000325cb) list_set_graphic_pane_g1_copy1_ParamLimits

0x142c,	// (0x000325cb) list_set_graphic_pane_g1_copy1

0xab20,	// (0x0003bcbf) list_set_graphic_pane_g2_copy1

0x1444,	// (0x000325e3) list_set_graphic_pane_t1_copy1_ParamLimits

0x1444,	// (0x000325e3) list_set_graphic_pane_t1_copy1

0x81f1,	// (0x00039390) rs_clock_indi_pane_g1

0xab28,	// (0x0003bcc7) rs_clock_indi_pane_t1

0xab36,	// (0x0003bcd5) rs_indi_pane

0xab3e,	// (0x0003bcdd) rs_indi_pane_g1

0xab47,	// (0x0003bce6) rs_indi_pane_g2

0xab50,	// (0x0003bcef) rs_indi_pane_g3

0x0002,

0xfef9,	// (0x00041098) rs_indi_pane_g

0x172a,	// (0x000328c9) bg_popup_preview_window_pane_cp03

0xab59,	// (0x0003bcf8) popup_fep_tooltip_window_t1

0x8e98,	// (0x0003a037) popup_note2_window_g2_ParamLimits

0x8e98,	// (0x0003a037) popup_note2_window_g2

0x0001,

0xfc9e,	// (0x00040e3d) popup_note2_window_g_ParamLimits

0xfc9e,	// (0x00040e3d) popup_note2_window_g

0x9386,	// (0x0003a525) bg_popup_sub_pane_cp11_ParamLimits

0x9393,	// (0x0003a532) cell_ai3_links_pane_g1_ParamLimits

0x93aa,	// (0x0003a549) cell_ai3_links_pane_t1

0x4e17,	// (0x00035fb6) set_text_pane_t1_copy1_ParamLimits

0x1639,	// (0x000327d8) cell_graphic_popup_pane_cp2_ParamLimits

0x1639,	// (0x000327d8) cell_graphic_popup_pane_cp2

0xab67,	// (0x0003bd06) cell_graphic_popup_pane_g1_cp2

0x0a3d,	// (0x00031bdc) cell_graphic_popup_pane_g2_cp2

0xab6f,	// (0x0003bd0e) cell_graphic_popup_pane_g3_cp2

0xab77,	// (0x0003bd16) cell_graphic_popup_pane_t2_cp2

0x0a4e,	// (0x00031bed) grid_highlight_pane_cp3_cp2

0x0fe9,	// (0x00032188) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0ce8,	// (0x00031e87) main_tmo_pane_ParamLimits

0x9718,	// (0x0003a8b7) popup_tmo_big_image_note_window

0xf1f8,	// (0x00040397) cell_ai5_widget_list_pane

0xf200,	// (0x0004039f) cell_ai5_widget_lrg_icon_pane

0xf4ae,	// (0x0004064d) tmo_note_info_pane_t1_ParamLimits

0xf4c3,	// (0x00040662) tmo_note_info_pane_t2_ParamLimits

0xf4dc,	// (0x0004067b) tmo_note_info_pane_t3_ParamLimits

0xa736,	// (0x0003b8d5) tmo_note_info_pane_t4_ParamLimits

0xa748,	// (0x0003b8e7) tmo_note_info_pane_t5_ParamLimits

0xfee7,	// (0x00041086) tmo_note_info_pane_t_ParamLimits

0xa87e,	// (0x0003ba1d) settings_container_pane_ParamLimits

0xaadc,	// (0x0003bc7b) indicator_popup_pane_cp5

0xaadc,	// (0x0003bc7b) indicator_popup_pane_cp6

0xab0c,	// (0x0003bcab) list_set_graphic_pane_copy1_ParamLimits

0x0628,	// (0x000317c7) bg_popup_window_pane_cp23

0xab85,	// (0x0003bd24) popup_tmo_big_image_note_window_g1

0xab90,	// (0x0003bd2f) popup_tmo_big_image_note_window_t1

0xaba0,	// (0x0003bd3f) popup_tmo_big_image_note_window_t2

0xabb0,	// (0x0003bd4f) popup_tmo_big_image_note_window_t3

0x0002,

0xff00,	// (0x0004109f) popup_tmo_big_image_note_window_t

0xf523,	// (0x000406c2) cell_ai5_widget_lrg_icon_pane_g1

0xf52b,	// (0x000406ca) cell_ai5_widget_lrg_icon_pane_t1

0xf539,	// (0x000406d8) cell_ai5_widget_list_row_pane_ParamLimits

0xf539,	// (0x000406d8) cell_ai5_widget_list_row_pane

0xf552,	// (0x000406f1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf552,	// (0x000406f1) cell_ai5_widget_list_row_pane_g1

0xf55f,	// (0x000406fe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf55f,	// (0x000406fe) cell_ai5_widget_list_row_pane_t1

0xf577,	// (0x00040716) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf577,	// (0x00040716) cell_ai5_widget_list_row_pane_t2

0x0001,

0xff07,	// (0x000410a6) cell_ai5_widget_list_row_pane_t_ParamLimits

0xff07,	// (0x000410a6) cell_ai5_widget_list_row_pane_t

0xd3ad,	// (0x0003e54c) main_fep_vtchi_ss_pane

0xabc0,	// (0x0003bd5f) popup_fep_char_pre_window

0xabc8,	// (0x0003bd67) popup_fep_ituss_window

0xabd3,	// (0x0003bd72) popup_fep_vkbss_window

0xabdc,	// (0x0003bd7b) grid_vkbss_keypad_pane_ParamLimits

0xabdc,	// (0x0003bd7b) grid_vkbss_keypad_pane

0xabec,	// (0x0003bd8b) ituss_keypad_pane

0xabf4,	// (0x0003bd93) aid_vkbss_key_offset_ParamLimits

0xabf4,	// (0x0003bd93) aid_vkbss_key_offset

0xac03,	// (0x0003bda2) cell_vkbss_key_pane_ParamLimits

0xac03,	// (0x0003bda2) cell_vkbss_key_pane

0xac19,	// (0x0003bdb8) bg_cell_vkbss_key_g1_ParamLimits

0xac19,	// (0x0003bdb8) bg_cell_vkbss_key_g1

0xac25,	// (0x0003bdc4) cell_vkbss_key_3p_pane_ParamLimits

0xac25,	// (0x0003bdc4) cell_vkbss_key_3p_pane

0xac3f,	// (0x0003bdde) cell_vkbss_key_g1_ParamLimits

0xac3f,	// (0x0003bdde) cell_vkbss_key_g1

0xac59,	// (0x0003bdf8) cell_vkbss_key_t1_ParamLimits

0xac59,	// (0x0003bdf8) cell_vkbss_key_t1

0xac84,	// (0x0003be23) cell_ituss_key_pane_ParamLimits

0xac84,	// (0x0003be23) cell_ituss_key_pane

0xac93,	// (0x0003be32) bg_cell_ituss_key_g1_ParamLimits

0xac93,	// (0x0003be32) bg_cell_ituss_key_g1

0xac9f,	// (0x0003be3e) cell_ituss_key_pane_g1_ParamLimits

0xac9f,	// (0x0003be3e) cell_ituss_key_pane_g1

0xacab,	// (0x0003be4a) cell_ituss_key_pane_g2_ParamLimits

0xacab,	// (0x0003be4a) cell_ituss_key_pane_g2

0x0001,

0xff0c,	// (0x000410ab) cell_ituss_key_pane_g_ParamLimits

0xff0c,	// (0x000410ab) cell_ituss_key_pane_g

0xacbe,	// (0x0003be5d) cell_ituss_key_t1_ParamLimits

0xacbe,	// (0x0003be5d) cell_ituss_key_t1

0xacdc,	// (0x0003be7b) cell_ituss_key_t2_ParamLimits

0xacdc,	// (0x0003be7b) cell_ituss_key_t2

0xacfb,	// (0x0003be9a) cell_ituss_key_t3_ParamLimits

0xacfb,	// (0x0003be9a) cell_ituss_key_t3

0xad1a,	// (0x0003beb9) cell_ituss_key_t4_ParamLimits

0xad1a,	// (0x0003beb9) cell_ituss_key_t4

0x0003,

0xff11,	// (0x000410b0) cell_ituss_key_t_ParamLimits

0xff11,	// (0x000410b0) cell_ituss_key_t

0xad39,	// (0x0003bed8) cell_vkbss_key_3p_pane_g1

0xad41,	// (0x0003bee0) cell_vkbss_key_3p_pane_g2

0xad49,	// (0x0003bee8) cell_vkbss_key_3p_pane_g3

0x0002,

0xff1a,	// (0x000410b9) cell_vkbss_key_3p_pane_g

0x0628,	// (0x000317c7) bg_popup_fep_char_preview_window_cp02

0xad51,	// (0x0003bef0) popup_fep_char_pre_window_t1

0xf1ee,	// (0x0004038d) main_ai5_sk_pane

0xa7c2,	// (0x0003b961) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7ce,	// (0x0003b96d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7e2,	// (0x0003b981) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7f1,	// (0x0003b990) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfef2,	// (0x00041091) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa804,	// (0x0003b9a3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0ce8,	// (0x00031e87) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x00040728) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large
