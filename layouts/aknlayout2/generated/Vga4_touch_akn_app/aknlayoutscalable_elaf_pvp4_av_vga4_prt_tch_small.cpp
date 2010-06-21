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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001eff2 };

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
0x5f58,	// (0x00024f4a) Screen

0x5f64,	// (0x00024f56) application_window_ParamLimits

0x5f64,	// (0x00024f56) application_window

0x1171,	// (0x00020163) screen_g1

0x5fc0,	// (0x00024fb2) area_bottom_pane_ParamLimits

0x5fc0,	// (0x00024fb2) area_bottom_pane

0x6080,	// (0x00025072) area_top_pane_ParamLimits

0x6080,	// (0x00025072) area_top_pane

0x6114,	// (0x00025106) main_pane_ParamLimits

0x6114,	// (0x00025106) main_pane

0x117b,	// (0x0002016d) misc_graphics

0x7ec2,	// (0x00026eb4) battery_pane_ParamLimits

0x7ec2,	// (0x00026eb4) battery_pane

0x9f12,	// (0x00028f04) bg_status_flat_pane_g8

0x9f1a,	// (0x00028f0c) bg_status_flat_pane_g9

0x7f84,	// (0x00026f76) context_pane_ParamLimits

0x7f84,	// (0x00026f76) context_pane

0x80a8,	// (0x0002709a) navi_pane_ParamLimits

0x80a8,	// (0x0002709a) navi_pane

0x94ce,	// (0x000284c0) signal_pane_ParamLimits

0x94ce,	// (0x000284c0) signal_pane

0x0008,

0xf874,	// (0x0002e866) bg_status_flat_pane_g

0x953b,	// (0x0002852d) status_pane_g1_ParamLimits

0x953b,	// (0x0002852d) status_pane_g1

0x9547,	// (0x00028539) status_pane_g2_ParamLimits

0x9547,	// (0x00028539) status_pane_g2

0x9553,	// (0x00028545) status_pane_g3_ParamLimits

0x9553,	// (0x00028545) status_pane_g3

0x0004,

0xf79b,	// (0x0002e78d) status_pane_g_ParamLimits

0xf79b,	// (0x0002e78d) status_pane_g

0x9587,	// (0x00028579) title_pane_ParamLimits

0x9587,	// (0x00028579) title_pane

0x95c6,	// (0x000285b8) uni_indicator_pane_ParamLimits

0x95c6,	// (0x000285b8) uni_indicator_pane

0x77bb,	// (0x000267ad) bg_list_pane_ParamLimits

0x77bb,	// (0x000267ad) bg_list_pane

0x77db,	// (0x000267cd) find_pane

0x77e3,	// (0x000267d5) listscroll_app_pane_ParamLimits

0x77e3,	// (0x000267d5) listscroll_app_pane

0x77ef,	// (0x000267e1) listscroll_form_pane

0x77f7,	// (0x000267e9) listscroll_gen_pane_ParamLimits

0x77f7,	// (0x000267e9) listscroll_gen_pane

0x780b,	// (0x000267fd) listscroll_set_pane

0x677b,	// (0x0002576d) main_idle_act_pane

0x728d,	// (0x0002627f) main_idle_trad_pane

0x728d,	// (0x0002627f) main_list_empty_pane

0x77e3,	// (0x000267d5) main_midp_pane

0x7825,	// (0x00026817) main_pane_g1_ParamLimits

0x7825,	// (0x00026817) main_pane_g1

0x7833,	// (0x00026825) popup_ai_message_window_ParamLimits

0x7833,	// (0x00026825) popup_ai_message_window

0x78e7,	// (0x000268d9) popup_fep_china_uni_window_ParamLimits

0x78e7,	// (0x000268d9) popup_fep_china_uni_window

0x7947,	// (0x00026939) popup_fep_japan_candidate_window_ParamLimits

0x7947,	// (0x00026939) popup_fep_japan_candidate_window

0x7971,	// (0x00026963) popup_fep_japan_predictive_window_ParamLimits

0x7971,	// (0x00026963) popup_fep_japan_predictive_window

0x79a7,	// (0x00026999) popup_find_window

0x79b4,	// (0x000269a6) popup_grid_graphic_window_ParamLimits

0x79b4,	// (0x000269a6) popup_grid_graphic_window

0x79e2,	// (0x000269d4) popup_large_graphic_colour_window

0x7a08,	// (0x000269fa) popup_menu_window_ParamLimits

0x7a08,	// (0x000269fa) popup_menu_window

0x7bd2,	// (0x00026bc4) popup_note_image_window

0x7bbc,	// (0x00026bae) popup_note_wait_window_ParamLimits

0x7bbc,	// (0x00026bae) popup_note_wait_window

0x7bbc,	// (0x00026bae) popup_note_window_ParamLimits

0x7bbc,	// (0x00026bae) popup_note_window

0x7c38,	// (0x00026c2a) popup_query_code_window_ParamLimits

0x7c38,	// (0x00026c2a) popup_query_code_window

0x7c4e,	// (0x00026c40) popup_query_data_code_window_ParamLimits

0x7c4e,	// (0x00026c40) popup_query_data_code_window

0x7c71,	// (0x00026c63) popup_query_data_window_ParamLimits

0x7c71,	// (0x00026c63) popup_query_data_window

0x7c93,	// (0x00026c85) popup_query_sat_info_window_ParamLimits

0x7c93,	// (0x00026c85) popup_query_sat_info_window

0x7cd2,	// (0x00026cc4) popup_snote_single_graphic_window_ParamLimits

0x7cd2,	// (0x00026cc4) popup_snote_single_graphic_window

0x7cd2,	// (0x00026cc4) popup_snote_single_text_window_ParamLimits

0x7cd2,	// (0x00026cc4) popup_snote_single_text_window

0x7ce9,	// (0x00026cdb) popup_sub_window_general

0x7e2f,	// (0x00026e21) popup_window_general_ParamLimits

0x7e2f,	// (0x00026e21) popup_window_general

0x7e48,	// (0x00026e3a) power_save_pane

0x7600,	// (0x000265f2) control_pane_g1_ParamLimits

0x7600,	// (0x000265f2) control_pane_g1

0x7629,	// (0x0002661b) control_pane_g2_ParamLimits

0x7629,	// (0x0002661b) control_pane_g2

0x7652,	// (0x00026644) control_pane_g3_ParamLimits

0x7652,	// (0x00026644) control_pane_g3

0x0007,

0xf783,	// (0x0002e775) control_pane_g_ParamLimits

0xf783,	// (0x0002e775) control_pane_g

0x76aa,	// (0x0002669c) control_pane_t1_ParamLimits

0x76aa,	// (0x0002669c) control_pane_t1

0x7704,	// (0x000266f6) control_pane_t2_ParamLimits

0x7704,	// (0x000266f6) control_pane_t2

0x0002,

0xf794,	// (0x0002e786) control_pane_t_ParamLimits

0xf794,	// (0x0002e786) control_pane_t

0x7525,	// (0x00026517) navi_navi_volume_pane_cp1

0x752d,	// (0x0002651f) status_small_icon_pane

0x7535,	// (0x00026527) status_small_pane_g1_ParamLimits

0x7535,	// (0x00026527) status_small_pane_g1

0x7569,	// (0x0002655b) status_small_pane_g2_ParamLimits

0x7569,	// (0x0002655b) status_small_pane_g2

0x7575,	// (0x00026567) status_small_pane_g3_ParamLimits

0x7575,	// (0x00026567) status_small_pane_g3

0x7581,	// (0x00026573) status_small_pane_g4_ParamLimits

0x7581,	// (0x00026573) status_small_pane_g4

0x758d,	// (0x0002657f) status_small_pane_g5_ParamLimits

0x758d,	// (0x0002657f) status_small_pane_g5

0x759b,	// (0x0002658d) status_small_pane_g6_ParamLimits

0x759b,	// (0x0002658d) status_small_pane_g6

0x0007,

0xf772,	// (0x0002e764) status_small_pane_g_ParamLimits

0xf772,	// (0x0002e764) status_small_pane_g

0x75ca,	// (0x000265bc) status_small_pane_t1

0x75ec,	// (0x000265de) status_small_wait_pane_ParamLimits

0x75ec,	// (0x000265de) status_small_wait_pane

0x6b6e,	// (0x00025b60) aid_levels_signal_ParamLimits

0x6b6e,	// (0x00025b60) aid_levels_signal

0x6b7d,	// (0x00025b6f) signal_pane_g1_ParamLimits

0x6b7d,	// (0x00025b6f) signal_pane_g1

0x6b92,	// (0x00025b84) signal_pane_g2_ParamLimits

0x6b92,	// (0x00025b84) signal_pane_g2

0x0003,

0xf703,	// (0x0002e6f5) signal_pane_g_ParamLimits

0xf703,	// (0x0002e6f5) signal_pane_g

0x6bc3,	// (0x00025bb5) context_pane_g1

0x6373,	// (0x00025365) title_pane_g1

0x63a5,	// (0x00025397) title_pane_t1

0x1191,	// (0x00020183) title_pane_t2

0x11b7,	// (0x000201a9) title_pane_t3

0x0002,

0xf557,	// (0x0002e549) title_pane_t

0x95de,	// (0x000285d0) aid_levels_battery_ParamLimits

0x95de,	// (0x000285d0) aid_levels_battery

0x95ef,	// (0x000285e1) battery_pane_g1_ParamLimits

0x95ef,	// (0x000285e1) battery_pane_g1

0x9605,	// (0x000285f7) battery_pane_g2_ParamLimits

0x9605,	// (0x000285f7) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002e798) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002e798) battery_pane_g

0xa85c,	// (0x0002984e) uni_indicator_pane_g1

0xa86f,	// (0x00029861) uni_indicator_pane_g2

0xa881,	// (0x00029873) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0002e90e) uni_indicator_pane_g

0x7107,	// (0x000260f9) navi_icon_pane_ParamLimits

0x7107,	// (0x000260f9) navi_icon_pane

0x7043,	// (0x00026035) navi_midp_pane

0x7123,	// (0x00026115) navi_navi_pane

0x712d,	// (0x0002611f) navi_text_pane_ParamLimits

0x712d,	// (0x0002611f) navi_text_pane

0x1171,	// (0x00020163) status_small_wait_pane_g1

0x14f2,	// (0x000204e4) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0002e909) status_small_wait_pane_g

0xa56f,	// (0x00029561) navi_navi_icon_text_pane

0xa577,	// (0x00029569) navi_navi_pane_g1_ParamLimits

0xa577,	// (0x00029569) navi_navi_pane_g1

0xa589,	// (0x0002957b) navi_navi_pane_g2_ParamLimits

0xa589,	// (0x0002957b) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0002e8d7) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0002e8d7) navi_navi_pane_g

0xa59b,	// (0x0002958d) navi_navi_tabs_pane

0xa5a4,	// (0x00029596) navi_navi_text_pane

0xa56f,	// (0x00029561) navi_navi_volume_pane

0xa54b,	// (0x0002953d) navi_text_pane_t1

0xa53f,	// (0x00029531) navi_icon_pane_g1

0xa492,	// (0x00029484) navi_navi_text_pane_t1

0x839b,	// (0x0002738d) navi_navi_volume_pane_g1

0x83a3,	// (0x00027395) volume_small_pane

0xa3f8,	// (0x000293ea) navi_navi_icon_text_pane_g1

0xa400,	// (0x000293f2) navi_navi_icon_text_pane_t1

0x7123,	// (0x00026115) navi_tabs_2_long_pane

0x7123,	// (0x00026115) navi_tabs_2_pane

0x7123,	// (0x00026115) navi_tabs_3_long_pane

0x7123,	// (0x00026115) navi_tabs_3_pane

0x7123,	// (0x00026115) navi_tabs_4_pane

0x837b,	// (0x0002736d) tabs_2_active_pane_ParamLimits

0x837b,	// (0x0002736d) tabs_2_active_pane

0x838b,	// (0x0002737d) tabs_2_passive_pane_ParamLimits

0x838b,	// (0x0002737d) tabs_2_passive_pane

0x8349,	// (0x0002733b) tabs_3_active_pane_ParamLimits

0x8349,	// (0x0002733b) tabs_3_active_pane

0x8359,	// (0x0002734b) tabs_3_passive_pane_ParamLimits

0x8359,	// (0x0002734b) tabs_3_passive_pane

0x836a,	// (0x0002735c) tabs_3_passive_pane_cp_ParamLimits

0x836a,	// (0x0002735c) tabs_3_passive_pane_cp

0x82fd,	// (0x000272ef) tabs_4_active_pane_ParamLimits

0x82fd,	// (0x000272ef) tabs_4_active_pane

0x8310,	// (0x00027302) tabs_4_passive_pane_ParamLimits

0x8310,	// (0x00027302) tabs_4_passive_pane

0x8321,	// (0x00027313) tabs_4_passive_pane_cp_ParamLimits

0x8321,	// (0x00027313) tabs_4_passive_pane_cp

0x8332,	// (0x00027324) tabs_4_passive_pane_cp2_ParamLimits

0x8332,	// (0x00027324) tabs_4_passive_pane_cp2

0x82d9,	// (0x000272cb) tabs_2_long_active_pane_ParamLimits

0x82d9,	// (0x000272cb) tabs_2_long_active_pane

0x82eb,	// (0x000272dd) tabs_2_long_passive_pane_ParamLimits

0x82eb,	// (0x000272dd) tabs_2_long_passive_pane

0x829a,	// (0x0002728c) tabs_3_long_active_pane_ParamLimits

0x829a,	// (0x0002728c) tabs_3_long_active_pane

0x82ad,	// (0x0002729f) tabs_3_long_passive_pane_ParamLimits

0x82ad,	// (0x0002729f) tabs_3_long_passive_pane

0x82c6,	// (0x000272b8) tabs_3_long_passive_pane_cp_ParamLimits

0x82c6,	// (0x000272b8) tabs_3_long_passive_pane_cp

0x8240,	// (0x00027232) volume_small_pane_g1

0x8249,	// (0x0002723b) volume_small_pane_g2

0x8252,	// (0x00027244) volume_small_pane_g3

0x825b,	// (0x0002724d) volume_small_pane_g4

0x8264,	// (0x00027256) volume_small_pane_g5

0x826d,	// (0x0002725f) volume_small_pane_g6

0x8276,	// (0x00027268) volume_small_pane_g7

0x827f,	// (0x00027271) volume_small_pane_g8

0x8288,	// (0x0002727a) volume_small_pane_g9

0x8291,	// (0x00027283) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0002e8a3) volume_small_pane_g

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp2_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp2

0x640d,	// (0x000253ff) tabs_3_active_pane_g1

0x6415,	// (0x00025407) tabs_3_active_pane_t1

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp2_ParamLimits

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp2

0x640d,	// (0x000253ff) tabs_3_passive_pane_g1

0x6415,	// (0x00025407) tabs_3_passive_pane_t1

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp3_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp3

0x6427,	// (0x00025419) tabs_4_active_pane_g1

0x642f,	// (0x00025421) tabs_4_active_pane_t1

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp3_ParamLimits

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp3

0x6427,	// (0x00025419) tabs_4_1_passive_pane_g1

0x642f,	// (0x00025421) tabs_4_1_passive_pane_t1

0x77e3,	// (0x000267d5) list_highlight_pane_cp2

0xaaca,	// (0x00029abc) list_set_pane_ParamLimits

0xaaca,	// (0x00029abc) list_set_pane

0xab8c,	// (0x00029b7e) main_pane_set_t1_ParamLimits

0xab8c,	// (0x00029b7e) main_pane_set_t1

0xabac,	// (0x00029b9e) main_pane_set_t2_ParamLimits

0xabac,	// (0x00029b9e) main_pane_set_t2

0xabc0,	// (0x00029bb2) main_pane_set_t3_ParamLimits

0xabc0,	// (0x00029bb2) main_pane_set_t3

0xabd4,	// (0x00029bc6) main_pane_set_t4_ParamLimits

0xabd4,	// (0x00029bc6) main_pane_set_t4

0x0003,

0xf981,	// (0x0002e973) main_pane_set_t_ParamLimits

0xf981,	// (0x0002e973) main_pane_set_t

0xabe8,	// (0x00029bda) setting_code_pane

0xabf2,	// (0x00029be4) setting_slider_graphic_pane

0xabf2,	// (0x00029be4) setting_slider_pane

0xabf2,	// (0x00029be4) setting_text_pane

0xabf2,	// (0x00029be4) setting_volume_pane

0x6441,	// (0x00025433) volume_set_pane

0x11d7,	// (0x000201c9) bg_set_opt_pane_cp

0x644b,	// (0x0002543d) setting_slider_pane_t1

0x6464,	// (0x00025456) setting_slider_pane_t2

0x647e,	// (0x00025470) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e550) setting_slider_pane_t

0x6496,	// (0x00025488) slider_set_pane

0x117b,	// (0x0002016d) bg_set_opt_pane_cp2

0x11e5,	// (0x000201d7) setting_slider_graphic_pane_g1

0x64ac,	// (0x0002549e) setting_slider_graphic_pane_t1

0x64bc,	// (0x000254ae) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e557) setting_slider_graphic_pane_t

0x64cc,	// (0x000254be) slider_set_pane_cp

0x117b,	// (0x0002016d) input_focus_pane_cp1

0xaa8b,	// (0x00029a7d) list_set_text_pane

0x1171,	// (0x00020163) setting_text_pane_g1

0x117b,	// (0x0002016d) input_focus_pane_cp2

0x1171,	// (0x00020163) setting_code_pane_g1

0x11ee,	// (0x000201e0) setting_code_pane_t1

0x4e58,	// (0x00023e4a) set_text_pane_t1_ParamLimits

0x4e58,	// (0x00023e4a) set_text_pane_t1

0x2dfa,	// (0x00021dec) set_opt_bg_pane_g1

0x2e02,	// (0x00021df4) set_opt_bg_pane_g2

0xaa63,	// (0x00029a55) set_opt_bg_pane_g3

0x2e12,	// (0x00021e04) set_opt_bg_pane_g4

0x2e1a,	// (0x00021e0c) set_opt_bg_pane_g5

0x2e22,	// (0x00021e14) set_opt_bg_pane_g6

0xaa6d,	// (0x00029a5f) set_opt_bg_pane_g7

0xaa77,	// (0x00029a69) set_opt_bg_pane_g8

0xaa81,	// (0x00029a73) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0002e960) set_opt_bg_pane_g

0xaa56,	// (0x00029a48) slider_set_pane_g1

0x8424,	// (0x00027416) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0002e951) slider_set_pane_g

0x83ac,	// (0x0002739e) volume_set_pane_g1

0x83b6,	// (0x000273a8) volume_set_pane_g2

0x83c0,	// (0x000273b2) volume_set_pane_g3

0x83ca,	// (0x000273bc) volume_set_pane_g4

0x83d4,	// (0x000273c6) volume_set_pane_g5

0x83de,	// (0x000273d0) volume_set_pane_g6

0x83e8,	// (0x000273da) volume_set_pane_g7

0x83f2,	// (0x000273e4) volume_set_pane_g8

0x83fc,	// (0x000273ee) volume_set_pane_g9

0x8406,	// (0x000273f8) volume_set_pane_g10

0x0009,

0xf937,	// (0x0002e929) volume_set_pane_g

0x64d4,	// (0x000254c6) indicator_pane_ParamLimits

0x64d4,	// (0x000254c6) indicator_pane

0x64e0,	// (0x000254d2) main_idle_pane_g2_ParamLimits

0x64e0,	// (0x000254d2) main_idle_pane_g2

0x6508,	// (0x000254fa) main_pane_idle_g1_ParamLimits

0x6508,	// (0x000254fa) main_pane_idle_g1

0x1216,	// (0x00020208) popup_clock_digital_analogue_window_ParamLimits

0x1216,	// (0x00020208) popup_clock_digital_analogue_window

0x6516,	// (0x00025508) soft_indicator_pane_ParamLimits

0x6516,	// (0x00025508) soft_indicator_pane

0x6524,	// (0x00025516) wallpaper_pane_ParamLimits

0x6524,	// (0x00025516) wallpaper_pane

0x1171,	// (0x00020163) wallpaper_pane_g1

0x6530,	// (0x00025522) indicator_pane_g1_ParamLimits

0x6530,	// (0x00025522) indicator_pane_g1

0xaee2,	// (0x00029ed4) navi_navi_icon_text_pane_srt_g1

0x1244,	// (0x00020236) soft_indicator_pane_t1

0x125e,	// (0x00020250) aid_ps_area_pane

0x653c,	// (0x0002552e) aid_ps_clock_pane

0x126f,	// (0x00020261) aid_ps_indicator_pane

0x127b,	// (0x0002026d) indicator_ps_pane_ParamLimits

0x127b,	// (0x0002026d) indicator_ps_pane

0x128a,	// (0x0002027c) power_save_pane_g1_ParamLimits

0x128a,	// (0x0002027c) power_save_pane_g1

0x1296,	// (0x00020288) power_save_pane_g2_ParamLimits

0x1296,	// (0x00020288) power_save_pane_g2

0x5f74,	// (0x00024f66) aid_navinavi_width_pane

0x125e,	// (0x00020250) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e55c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e55c) power_save_pane_g

0x12a4,	// (0x00020296) power_save_pane_t1_ParamLimits

0x12a4,	// (0x00020296) power_save_pane_t1

0x653c,	// (0x0002552e) aid_ps_clock_pane_ParamLimits

0x126f,	// (0x00020261) aid_ps_indicator_pane_ParamLimits

0x12b6,	// (0x000202a8) power_save_pane_t4_ParamLimits

0x12b6,	// (0x000202a8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e561) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e561) power_save_pane_t

0x12e0,	// (0x000202d2) power_save_t3_ParamLimits

0x12e0,	// (0x000202d2) power_save_t3

0x12cb,	// (0x000202bd) power_save_t2_ParamLimits

0x12cb,	// (0x000202bd) power_save_t2

0x12f5,	// (0x000202e7) indicator_ps_pane_g1

0x654a,	// (0x0002553c) ai_gene_pane_ParamLimits

0x654a,	// (0x0002553c) ai_gene_pane

0x6556,	// (0x00025548) ai_links_pane_ParamLimits

0x6556,	// (0x00025548) ai_links_pane

0x6562,	// (0x00025554) indicator_pane_cp1_ParamLimits

0x6562,	// (0x00025554) indicator_pane_cp1

0x656e,	// (0x00025560) main_pane_idle_g1_cp_ParamLimits

0x656e,	// (0x00025560) main_pane_idle_g1_cp

0x12fe,	// (0x000202f0) popup_ai_links_title_window

0x657a,	// (0x0002556c) soft_indicator_pane_cp1_ParamLimits

0x657a,	// (0x0002556c) soft_indicator_pane_cp1

0xa84a,	// (0x0002983c) ai_links_pane_g1

0xa853,	// (0x00029845) grid_ai_links_pane

0xa82f,	// (0x00029821) ai_gene_pane_1

0xa838,	// (0x0002982a) ai_gene_pane_2

0xa841,	// (0x00029833) list_highlight_pane_cp4

0xa80f,	// (0x00029801) cell_ai_link_pane_ParamLimits

0xa80f,	// (0x00029801) cell_ai_link_pane

0xa807,	// (0x000297f9) cell_ai_link_pane_g1

0x14f2,	// (0x000204e4) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0002e904) cell_ai_link_pane_g

0x117b,	// (0x0002016d) grid_highlight_cp2

0x117b,	// (0x0002016d) bg_popup_sub_pane_cp1

0x1315,	// (0x00020307) popup_ai_links_title_window_t1

0xa753,	// (0x00029745) ai_gene_pane_1_g1_ParamLimits

0xa753,	// (0x00029745) ai_gene_pane_1_g1

0xa75f,	// (0x00029751) ai_gene_pane_1_g2_ParamLimits

0xa75f,	// (0x00029751) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0002e8fa) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0002e8fa) ai_gene_pane_1_g

0xa76c,	// (0x0002975e) ai_gene_pane_1_t1_ParamLimits

0xa76c,	// (0x0002975e) ai_gene_pane_1_t1

0xa7a0,	// (0x00029792) grid_ai_soft_ind_pane

0xa73e,	// (0x00029730) ai_gene_pane_2_t1_ParamLimits

0xa73e,	// (0x00029730) ai_gene_pane_2_t1

0x6586,	// (0x00025578) main_pane_empty_t1_ParamLimits

0x6586,	// (0x00025578) main_pane_empty_t1

0x659e,	// (0x00025590) main_pane_empty_t2_ParamLimits

0x659e,	// (0x00025590) main_pane_empty_t2

0x65b3,	// (0x000255a5) main_pane_empty_t3_ParamLimits

0x65b3,	// (0x000255a5) main_pane_empty_t3

0x65c5,	// (0x000255b7) main_pane_empty_t4_ParamLimits

0x65c5,	// (0x000255b7) main_pane_empty_t4

0x65d7,	// (0x000255c9) main_pane_empty_t5_ParamLimits

0x65d7,	// (0x000255c9) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e566) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e566) main_pane_empty_t

0x2e7a,	// (0x00021e6c) bg_popup_window_pane_ParamLimits

0x2e7a,	// (0x00021e6c) bg_popup_window_pane

0xa4a0,	// (0x00029492) find_popup_pane_cp2_ParamLimits

0xa4a0,	// (0x00029492) find_popup_pane_cp2

0xa4ac,	// (0x0002949e) heading_pane_ParamLimits

0xa4ac,	// (0x0002949e) heading_pane

0x117b,	// (0x0002016d) bg_popup_sub_pane

0xa41a,	// (0x0002940c) bg_popup_window_pane_g1_ParamLimits

0xa41a,	// (0x0002940c) bg_popup_window_pane_g1

0xa426,	// (0x00029418) bg_popup_window_pane_g2_ParamLimits

0xa426,	// (0x00029418) bg_popup_window_pane_g2

0xa432,	// (0x00029424) bg_popup_window_pane_g3_ParamLimits

0xa432,	// (0x00029424) bg_popup_window_pane_g3

0xa43e,	// (0x00029430) bg_popup_window_pane_g4_ParamLimits

0xa43e,	// (0x00029430) bg_popup_window_pane_g4

0xa44a,	// (0x0002943c) bg_popup_window_pane_g5_ParamLimits

0xa44a,	// (0x0002943c) bg_popup_window_pane_g5

0xa456,	// (0x00029448) bg_popup_window_pane_g6_ParamLimits

0xa456,	// (0x00029448) bg_popup_window_pane_g6

0xa462,	// (0x00029454) bg_popup_window_pane_g7_ParamLimits

0xa462,	// (0x00029454) bg_popup_window_pane_g7

0xa46e,	// (0x00029460) bg_popup_window_pane_g8_ParamLimits

0xa46e,	// (0x00029460) bg_popup_window_pane_g8

0xa47a,	// (0x0002946c) bg_popup_window_pane_g9_ParamLimits

0xa47a,	// (0x0002946c) bg_popup_window_pane_g9

0xa486,	// (0x00029478) bg_popup_window_pane_g10_ParamLimits

0xa486,	// (0x00029478) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0002e8c2) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0002e8c2) bg_popup_window_pane_g

0xa3af,	// (0x000293a1) bg_popup_heading_pane_ParamLimits

0xa3af,	// (0x000293a1) bg_popup_heading_pane

0x84ac,	// (0x0002749e) tabs_4_passive_pane_cp_srt_ParamLimits

0x84ac,	// (0x0002749e) tabs_4_passive_pane_cp_srt

0x84be,	// (0x000274b0) tabs_4_passive_pane_srt_ParamLimits

0xa3c3,	// (0x000293b5) heading_pane_g2

0x84be,	// (0x000274b0) tabs_4_passive_pane_srt

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp3_srt

0xa3cb,	// (0x000293bd) heading_pane_t1_ParamLimits

0xa3cb,	// (0x000293bd) heading_pane_t1

0xa3e2,	// (0x000293d4) heading_pane_t2_ParamLimits

0xa3e2,	// (0x000293d4) heading_pane_t2

0x0001,

0xf8cb,	// (0x0002e8bd) heading_pane_t_ParamLimits

0xf8cb,	// (0x0002e8bd) heading_pane_t

0x9eda,	// (0x00028ecc) bg_popup_heading_pane_g1

0x9f89,	// (0x00028f7b) bg_popup_heading_pane_g2

0x9f93,	// (0x00028f85) bg_popup_heading_pane_g3

0x9f9d,	// (0x00028f8f) bg_popup_heading_pane_g4

0x9fa7,	// (0x00028f99) bg_popup_heading_pane_g5

0x9fb1,	// (0x00028fa3) bg_popup_heading_pane_g6

0x9fb9,	// (0x00028fab) bg_popup_heading_pane_g7

0x9fc1,	// (0x00028fb3) bg_popup_heading_pane_g8

0x9fcb,	// (0x00028fbd) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0002e879) bg_popup_heading_pane_g

0x96da,	// (0x000286cc) bg_popup_sub_pane_g1

0x96e2,	// (0x000286d4) bg_popup_sub_pane_g2

0x96ea,	// (0x000286dc) bg_popup_sub_pane_g3

0x96f2,	// (0x000286e4) bg_popup_sub_pane_g4

0x96fa,	// (0x000286ec) bg_popup_sub_pane_g5

0x9702,	// (0x000286f4) bg_popup_sub_pane_g6

0x970a,	// (0x000286fc) bg_popup_sub_pane_g7

0x9712,	// (0x00028704) bg_popup_sub_pane_g8

0x971a,	// (0x0002870c) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0002e853) bg_popup_sub_pane_g

0x11c9,	// (0x000201bb) bg_popup_window_pane_cp5_ParamLimits

0x11c9,	// (0x000201bb) bg_popup_window_pane_cp5

0x1332,	// (0x00020324) popup_note_window_g1_ParamLimits

0x1332,	// (0x00020324) popup_note_window_g1

0x133e,	// (0x00020330) popup_note_window_t1_ParamLimits

0x133e,	// (0x00020330) popup_note_window_t1

0x1354,	// (0x00020346) popup_note_window_t2_ParamLimits

0x1354,	// (0x00020346) popup_note_window_t2

0x136a,	// (0x0002035c) popup_note_window_t3_ParamLimits

0x136a,	// (0x0002035c) popup_note_window_t3

0x1380,	// (0x00020372) popup_note_window_t4_ParamLimits

0x1380,	// (0x00020372) popup_note_window_t4

0x13a8,	// (0x0002039a) popup_note_window_t5_ParamLimits

0x13a8,	// (0x0002039a) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e571) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e571) popup_note_window_t

0x13f2,	// (0x000203e4) bg_popup_window_pane_cp6_ParamLimits

0x13f2,	// (0x000203e4) bg_popup_window_pane_cp6

0x9e56,	// (0x00028e48) popup_note_image_window_g1_ParamLimits

0x9e56,	// (0x00028e48) popup_note_image_window_g1

0x9e62,	// (0x00028e54) popup_note_image_window_g2_ParamLimits

0x9e62,	// (0x00028e54) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0002e847) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0002e847) popup_note_image_window_g

0x9e7b,	// (0x00028e6d) popup_note_image_window_t1_ParamLimits

0x9e7b,	// (0x00028e6d) popup_note_image_window_t1

0x9e94,	// (0x00028e86) popup_note_image_window_t2_ParamLimits

0x9e94,	// (0x00028e86) popup_note_image_window_t2

0x9ead,	// (0x00028e9f) popup_note_image_window_t3_ParamLimits

0x9ead,	// (0x00028e9f) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0002e84c) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0002e84c) popup_note_image_window_t

0x9d16,	// (0x00028d08) bg_popup_window_pane_cp7_ParamLimits

0x9d16,	// (0x00028d08) bg_popup_window_pane_cp7

0x9d46,	// (0x00028d38) popup_note_wait_window_g1_ParamLimits

0x9d46,	// (0x00028d38) popup_note_wait_window_g1

0x9d52,	// (0x00028d44) popup_note_wait_window_g2_ParamLimits

0x9d52,	// (0x00028d44) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0002e835) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0002e835) popup_note_wait_window_g

0x9d6a,	// (0x00028d5c) popup_note_wait_window_t1_ParamLimits

0x9d6a,	// (0x00028d5c) popup_note_wait_window_t1

0x9d91,	// (0x00028d83) popup_note_wait_window_t2_ParamLimits

0x9d91,	// (0x00028d83) popup_note_wait_window_t2

0x9daf,	// (0x00028da1) popup_note_wait_window_t3_ParamLimits

0x9daf,	// (0x00028da1) popup_note_wait_window_t3

0x9dc2,	// (0x00028db4) popup_note_wait_window_t4_ParamLimits

0x9dc2,	// (0x00028db4) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0002e83c) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0002e83c) popup_note_wait_window_t

0x9de7,	// (0x00028dd9) wait_bar_pane_ParamLimits

0x9de7,	// (0x00028dd9) wait_bar_pane

0x117b,	// (0x0002016d) wait_anim_pane

0x117b,	// (0x0002016d) wait_border_pane

0x1171,	// (0x00020163) wait_anim_pane_g1

0x1171,	// (0x00020163) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0002e6f0) wait_anim_pane_g

0x9cba,	// (0x00028cac) wait_border_pane_g1

0x9cc5,	// (0x00028cb7) wait_border_pane_g2

0x9cce,	// (0x00028cc0) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0002e82e) wait_border_pane_g

0x9b24,	// (0x00028b16) bg_popup_window_pane_cp16_ParamLimits

0x9b24,	// (0x00028b16) bg_popup_window_pane_cp16

0x9c24,	// (0x00028c16) indicator_popup_pane_cp4_ParamLimits

0x9c24,	// (0x00028c16) indicator_popup_pane_cp4

0x9c38,	// (0x00028c2a) popup_query_data_window_t1_ParamLimits

0x9c38,	// (0x00028c2a) popup_query_data_window_t1

0x9c4a,	// (0x00028c3c) popup_query_data_window_t2_ParamLimits

0x9c4a,	// (0x00028c3c) popup_query_data_window_t2

0x9c63,	// (0x00028c55) popup_query_data_window_t3_ParamLimits

0x9c63,	// (0x00028c55) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0002e827) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0002e827) popup_query_data_window_t

0x9c7d,	// (0x00028c6f) query_popup_data_pane_ParamLimits

0x9c7d,	// (0x00028c6f) query_popup_data_pane

0x9c91,	// (0x00028c83) query_popup_data_pane_cp1_ParamLimits

0x9c91,	// (0x00028c83) query_popup_data_pane_cp1

0x9b24,	// (0x00028b16) bg_popup_window_pane_cp10_ParamLimits

0x9b24,	// (0x00028b16) bg_popup_window_pane_cp10

0x9b56,	// (0x00028b48) indicator_popup_pane_ParamLimits

0x9b56,	// (0x00028b48) indicator_popup_pane

0x9b78,	// (0x00028b6a) popup_query_code_window_t1_ParamLimits

0x9b78,	// (0x00028b6a) popup_query_code_window_t1

0x9b92,	// (0x00028b84) popup_query_code_window_t2_ParamLimits

0x9b92,	// (0x00028b84) popup_query_code_window_t2

0x9bdb,	// (0x00028bcd) popup_query_code_window_t3_ParamLimits

0x9bdb,	// (0x00028bcd) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0002e820) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0002e820) popup_query_code_window_t

0x9c0a,	// (0x00028bfc) query_popup_pane_ParamLimits

0x9c0a,	// (0x00028bfc) query_popup_pane

0x13f2,	// (0x000203e4) bg_popup_window_pane_cp15_ParamLimits

0x13f2,	// (0x000203e4) bg_popup_window_pane_cp15

0x1412,	// (0x00020404) indicator_popup_pane_cp1_ParamLimits

0x1412,	// (0x00020404) indicator_popup_pane_cp1

0x1425,	// (0x00020417) indicator_popup_pane_cp2_ParamLimits

0x1425,	// (0x00020417) indicator_popup_pane_cp2

0x1440,	// (0x00020432) popup_query_data_code_window_g1_ParamLimits

0x1440,	// (0x00020432) popup_query_data_code_window_g1

0x1453,	// (0x00020445) popup_query_data_code_window_t1_ParamLimits

0x1453,	// (0x00020445) popup_query_data_code_window_t1

0x1465,	// (0x00020457) popup_query_data_code_window_t2_ParamLimits

0x1465,	// (0x00020457) popup_query_data_code_window_t2

0x1477,	// (0x00020469) popup_query_data_code_window_t3_ParamLimits

0x1477,	// (0x00020469) popup_query_data_code_window_t3

0x148d,	// (0x0002047f) popup_query_data_code_window_t4_ParamLimits

0x148d,	// (0x0002047f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e57c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e57c) popup_query_data_code_window_t

0x70c3,	// (0x000260b5) list_single_midp_graphic_pane_g3

0x14a7,	// (0x00020499) query_popup_data_pane_cp2_ParamLimits

0x14ba,	// (0x000204ac) query_popup_pane_cp2_ParamLimits

0x14ba,	// (0x000204ac) query_popup_pane_cp2

0x117b,	// (0x0002016d) bg_popup_window_pane_cp11

0x9b10,	// (0x00028b02) heading_pane_cp5

0x1553,	// (0x00020545) listscroll_popup_info_pane

0x117b,	// (0x0002016d) input_focus_pane_cp3

0x14d5,	// (0x000204c7) query_popup_pane_t1

0x14e3,	// (0x000204d5) list_popup_info_pane_ParamLimits

0x14e3,	// (0x000204d5) list_popup_info_pane

0x14f2,	// (0x000204e4) listscroll_popup_info_pane_g1

0x14fa,	// (0x000204ec) scroll_pane_cp7

0x1504,	// (0x000204f6) popup_info_list_pane_t1_ParamLimits

0x1504,	// (0x000204f6) popup_info_list_pane_t1

0x151e,	// (0x00020510) popup_info_list_pane_t2_ParamLimits

0x151e,	// (0x00020510) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e585) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e585) popup_info_list_pane_t

0x117b,	// (0x0002016d) bg_popup_window_pane_cp12

0xaefc,	// (0x00029eee) find_popup_pane

0x11d7,	// (0x000201c9) bg_popup_window_pane_cp3

0x1538,	// (0x0002052a) heading_pane_cp3

0x1544,	// (0x00020536) listscroll_popup_graphic_pane

0x117b,	// (0x0002016d) bg_popup_window_pane_cp4

0x6639,	// (0x0002562b) heading_pane_cp4

0x1553,	// (0x00020545) listscroll_popup_colour_pane

0x6643,	// (0x00025635) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6643,	// (0x00025635) cell_large_graphic_colour_none_popup_pane

0x6657,	// (0x00025649) grid_large_graphic_colour_popup_pane_ParamLimits

0x6657,	// (0x00025649) grid_large_graphic_colour_popup_pane

0x6683,	// (0x00025675) listscroll_popup_colour_pane_g1_ParamLimits

0x6683,	// (0x00025675) listscroll_popup_colour_pane_g1

0x669a,	// (0x0002568c) listscroll_popup_colour_pane_g2_ParamLimits

0x669a,	// (0x0002568c) listscroll_popup_colour_pane_g2

0x66b1,	// (0x000256a3) listscroll_popup_colour_pane_g3_ParamLimits

0x66b1,	// (0x000256a3) listscroll_popup_colour_pane_g3

0x66c1,	// (0x000256b3) listscroll_popup_colour_pane_g4_ParamLimits

0x66c1,	// (0x000256b3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e58a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e58a) listscroll_popup_colour_pane_g

0x155b,	// (0x0002054d) scroll_pane_cp6_ParamLimits

0x155b,	// (0x0002054d) scroll_pane_cp6

0x66d5,	// (0x000256c7) cell_large_graphic_colour_popup_pane_ParamLimits

0x66d5,	// (0x000256c7) cell_large_graphic_colour_popup_pane

0x156d,	// (0x0002055f) cell_large_graphic_colour_none_popup_pane_t1

0x117b,	// (0x0002016d) grid_highlight_pane_cp5

0x157c,	// (0x0002056e) cell_large_graphic_colour_popup_pane_g1

0x1584,	// (0x00020576) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e593) cell_large_graphic_colour_popup_pane_g

0x158c,	// (0x0002057e) cell_large_graphic_colour_popup_pane_g2_copy1

0x1595,	// (0x00020587) grid_highlight_pane_cp4

0x159d,	// (0x0002058f) bg_popup_window_pane_cp8_ParamLimits

0x159d,	// (0x0002058f) bg_popup_window_pane_cp8

0x15b8,	// (0x000205aa) popup_snote_single_text_window_g1_ParamLimits

0x15b8,	// (0x000205aa) popup_snote_single_text_window_g1

0x15ca,	// (0x000205bc) popup_snote_single_text_window_t1_ParamLimits

0x15ca,	// (0x000205bc) popup_snote_single_text_window_t1

0x15dd,	// (0x000205cf) popup_snote_single_text_window_t2_ParamLimits

0x15dd,	// (0x000205cf) popup_snote_single_text_window_t2

0x15f0,	// (0x000205e2) popup_snote_single_text_window_t3_ParamLimits

0x15f0,	// (0x000205e2) popup_snote_single_text_window_t3

0x1629,	// (0x0002061b) popup_snote_single_text_window_t4_ParamLimits

0x1629,	// (0x0002061b) popup_snote_single_text_window_t4

0x165d,	// (0x0002064f) popup_snote_single_text_window_t5_ParamLimits

0x165d,	// (0x0002064f) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e598) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e598) popup_snote_single_text_window_t

0x168c,	// (0x0002067e) bg_popup_window_pane_cp9_ParamLimits

0x168c,	// (0x0002067e) bg_popup_window_pane_cp9

0x15b8,	// (0x000205aa) popup_snote_single_graphic_window_g1_ParamLimits

0x15b8,	// (0x000205aa) popup_snote_single_graphic_window_g1

0x169a,	// (0x0002068c) popup_snote_single_graphic_window_g2_ParamLimits

0x169a,	// (0x0002068c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e5a3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e5a3) popup_snote_single_graphic_window_g

0x16a6,	// (0x00020698) popup_snote_single_graphic_window_t1_ParamLimits

0x16a6,	// (0x00020698) popup_snote_single_graphic_window_t1

0x16b9,	// (0x000206ab) popup_snote_single_graphic_window_t2_ParamLimits

0x16b9,	// (0x000206ab) popup_snote_single_graphic_window_t2

0x16cc,	// (0x000206be) popup_snote_single_graphic_window_t3_ParamLimits

0x16cc,	// (0x000206be) popup_snote_single_graphic_window_t3

0x1705,	// (0x000206f7) popup_snote_single_graphic_window_t4_ParamLimits

0x1705,	// (0x000206f7) popup_snote_single_graphic_window_t4

0x1739,	// (0x0002072b) popup_snote_single_graphic_window_t5_ParamLimits

0x1739,	// (0x0002072b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e5a8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e5a8) popup_snote_single_graphic_window_t

0xae3a,	// (0x00029e2c) grid_graphic_popup_pane_ParamLimits

0xae3a,	// (0x00029e2c) grid_graphic_popup_pane

0xae68,	// (0x00029e5a) listscroll_popup_graphic_pane_g1_ParamLimits

0xae68,	// (0x00029e5a) listscroll_popup_graphic_pane_g1

0xae7c,	// (0x00029e6e) listscroll_popup_graphic_pane_g2_ParamLimits

0xae7c,	// (0x00029e6e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0002e99d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0002e99d) listscroll_popup_graphic_pane_g

0xae90,	// (0x00029e82) scroll_pane_cp5

0xadcf,	// (0x00029dc1) cell_graphic_popup_pane_ParamLimits

0xadcf,	// (0x00029dc1) cell_graphic_popup_pane

0xadb0,	// (0x00029da2) cell_graphic_popup_pane_g1

0xadb8,	// (0x00029daa) cell_graphic_popup_pane_g2

0x158c,	// (0x0002057e) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0002e996) cell_graphic_popup_pane_g

0xadc1,	// (0x00029db3) cell_graphic_popup_pane_t2

0x1595,	// (0x00020587) grid_highlight_pane_cp3

0x177a,	// (0x0002076c) list_gen_pane_ParamLimits

0x177a,	// (0x0002076c) list_gen_pane

0x17a2,	// (0x00020794) scroll_pane

0xad08,	// (0x00029cfa) bg_list_pane_g1_ParamLimits

0xad08,	// (0x00029cfa) bg_list_pane_g1

0xad25,	// (0x00029d17) bg_list_pane_g2_ParamLimits

0xad25,	// (0x00029d17) bg_list_pane_g2

0xad3a,	// (0x00029d2c) bg_list_pane_g3_ParamLimits

0xad3a,	// (0x00029d2c) bg_list_pane_g3

0xad4e,	// (0x00029d40) bg_list_pane_g4_ParamLimits

0xad4e,	// (0x00029d40) bg_list_pane_g4

0xad62,	// (0x00029d54) bg_list_pane_g5_ParamLimits

0xad62,	// (0x00029d54) bg_list_pane_g5

0x0004,

0xf999,	// (0x0002e98b) bg_list_pane_g_ParamLimits

0xf999,	// (0x0002e98b) bg_list_pane_g

0xac76,	// (0x00029c68) list_double2_graphic_large_graphic_pane_ParamLimits

0xac76,	// (0x00029c68) list_double2_graphic_large_graphic_pane

0xac76,	// (0x00029c68) list_double2_graphic_pane_ParamLimits

0xac76,	// (0x00029c68) list_double2_graphic_pane

0xac76,	// (0x00029c68) list_double2_large_graphic_pane_ParamLimits

0xac76,	// (0x00029c68) list_double2_large_graphic_pane

0xac76,	// (0x00029c68) list_double2_pane_ParamLimits

0xac76,	// (0x00029c68) list_double2_pane

0xac76,	// (0x00029c68) list_double_graphic_heading_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_graphic_heading_pane

0xac76,	// (0x00029c68) list_double_graphic_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_graphic_pane

0xac76,	// (0x00029c68) list_double_heading_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_heading_pane

0xac76,	// (0x00029c68) list_double_large_graphic_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_large_graphic_pane

0xac76,	// (0x00029c68) list_double_number_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_number_pane

0xac76,	// (0x00029c68) list_double_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_pane

0xac76,	// (0x00029c68) list_double_time_pane_ParamLimits

0xac76,	// (0x00029c68) list_double_time_pane

0xac76,	// (0x00029c68) list_setting_number_pane_ParamLimits

0xac76,	// (0x00029c68) list_setting_number_pane

0xac76,	// (0x00029c68) list_setting_pane_ParamLimits

0xac76,	// (0x00029c68) list_setting_pane

0xacd8,	// (0x00029cca) list_single_2graphic_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_2graphic_pane

0xacd8,	// (0x00029cca) list_single_graphic_heading_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_graphic_heading_pane

0xacd8,	// (0x00029cca) list_single_graphic_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_graphic_pane

0xacd8,	// (0x00029cca) list_single_heading_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_heading_pane

0x5809,	// (0x000247fb) list_single_large_graphic_pane_ParamLimits

0x5809,	// (0x000247fb) list_single_large_graphic_pane

0xacd8,	// (0x00029cca) list_single_number_heading_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_number_heading_pane

0xacd8,	// (0x00029cca) list_single_number_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_number_pane

0xacd8,	// (0x00029cca) list_single_pane_ParamLimits

0xacd8,	// (0x00029cca) list_single_pane

0x117b,	// (0x0002016d) list_highlight_pane_cp1

0x4e7f,	// (0x00023e71) list_single_pane_g1_ParamLimits

0x4e7f,	// (0x00023e71) list_single_pane_g1

0x4e8b,	// (0x00023e7d) list_single_pane_g2_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e5ba) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e5ba) list_single_pane_g

0x57de,	// (0x000247d0) list_single_pane_t1_ParamLimits

0x57de,	// (0x000247d0) list_single_pane_t1

0x4e7f,	// (0x00023e71) list_single_number_pane_g1_ParamLimits

0x4e7f,	// (0x00023e71) list_single_number_pane_g1

0x4e8b,	// (0x00023e7d) list_single_number_pane_g2_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e5ba) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e5ba) list_single_number_pane_g

0x5788,	// (0x0002477a) list_single_number_pane_t1_ParamLimits

0x5788,	// (0x0002477a) list_single_number_pane_t1

0x579e,	// (0x00024790) list_single_number_pane_t2_ParamLimits

0x579e,	// (0x00024790) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0002e94c) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0002e94c) list_single_number_pane_t

0x4e73,	// (0x00023e65) list_single_graphic_pane_g1_ParamLimits

0x4e73,	// (0x00023e65) list_single_graphic_pane_g1

0x4e7f,	// (0x00023e71) list_single_graphic_pane_g2_ParamLimits

0x4e7f,	// (0x00023e71) list_single_graphic_pane_g2

0x4e8b,	// (0x00023e7d) list_single_graphic_pane_g3_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e5b3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e5b3) list_single_graphic_pane_g

0x4e97,	// (0x00023e89) list_single_graphic_pane_t1_ParamLimits

0x4e97,	// (0x00023e89) list_single_graphic_pane_t1

0x4e7f,	// (0x00023e71) list_single_heading_pane_g1_ParamLimits

0x4e7f,	// (0x00023e71) list_single_heading_pane_g1

0x4e8b,	// (0x00023e7d) list_single_heading_pane_g2_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5ba) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5ba) list_single_heading_pane_g

0x4ead,	// (0x00023e9f) list_single_heading_pane_t1_ParamLimits

0x4ead,	// (0x00023e9f) list_single_heading_pane_t1

0x4ec3,	// (0x00023eb5) list_single_heading_pane_t2_ParamLimits

0x4ec3,	// (0x00023eb5) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e5bf) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e5bf) list_single_heading_pane_t

0x4e7f,	// (0x00023e71) list_single_number_heading_pane_g1_ParamLimits

0x4e7f,	// (0x00023e71) list_single_number_heading_pane_g1

0x4e8b,	// (0x00023e7d) list_single_number_heading_pane_g2_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e5ba) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e5ba) list_single_number_heading_pane_g

0x4ead,	// (0x00023e9f) list_single_number_heading_pane_t1_ParamLimits

0x4ead,	// (0x00023e9f) list_single_number_heading_pane_t1

0x4ed5,	// (0x00023ec7) list_single_number_heading_pane_t2_ParamLimits

0x4ed5,	// (0x00023ec7) list_single_number_heading_pane_t2

0x4ee7,	// (0x00023ed9) list_single_number_heading_pane_t3_ParamLimits

0x4ee7,	// (0x00023ed9) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e5c4) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e5c4) list_single_number_heading_pane_t

0x4ef9,	// (0x00023eeb) list_single_graphic_heading_pane_g1_ParamLimits

0x4ef9,	// (0x00023eeb) list_single_graphic_heading_pane_g1

0x4f05,	// (0x00023ef7) list_single_graphic_heading_pane_g4_ParamLimits

0x4f05,	// (0x00023ef7) list_single_graphic_heading_pane_g4

0x4e8b,	// (0x00023e7d) list_single_graphic_heading_pane_g5_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e5cb) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e5cb) list_single_graphic_heading_pane_g

0x4ead,	// (0x00023e9f) list_single_graphic_heading_pane_t1_ParamLimits

0x4ead,	// (0x00023e9f) list_single_graphic_heading_pane_t1

0x4f16,	// (0x00023f08) list_single_graphic_heading_pane_t2_ParamLimits

0x4f16,	// (0x00023f08) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e5d2) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e5d2) list_single_graphic_heading_pane_t

0x4f28,	// (0x00023f1a) list_single_large_graphic_pane_g1_ParamLimits

0x4f28,	// (0x00023f1a) list_single_large_graphic_pane_g1

0x4e7f,	// (0x00023e71) list_single_large_graphic_pane_g2_ParamLimits

0x4e7f,	// (0x00023e71) list_single_large_graphic_pane_g2

0x4e8b,	// (0x00023e7d) list_single_large_graphic_pane_g3_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e5d7) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e5d7) list_single_large_graphic_pane_g

0x9cc5,	// (0x00028cb7) wait_border_pane_g2_copy1

0x4f34,	// (0x00023f26) list_single_large_graphic_pane_g4_cp2

0x4f3c,	// (0x00023f2e) list_single_large_graphic_pane_t1_ParamLimits

0x4f3c,	// (0x00023f2e) list_single_large_graphic_pane_t1

0x4f52,	// (0x00023f44) list_double_pane_g1_ParamLimits

0x4f52,	// (0x00023f44) list_double_pane_g1

0x4f5e,	// (0x00023f50) list_double_pane_g2_ParamLimits

0x4f5e,	// (0x00023f50) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e5de) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e5de) list_double_pane_g

0x4f6a,	// (0x00023f5c) list_double_pane_t1_ParamLimits

0x4f6a,	// (0x00023f5c) list_double_pane_t1

0x4f80,	// (0x00023f72) list_double_pane_t2_ParamLimits

0x4f80,	// (0x00023f72) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e5e3) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e5e3) list_double_pane_t

0x4f92,	// (0x00023f84) list_double2_pane_g1_ParamLimits

0x4f92,	// (0x00023f84) list_double2_pane_g1

0x4f5e,	// (0x00023f50) list_double2_pane_g2_ParamLimits

0x4f5e,	// (0x00023f50) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e5e8) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e5e8) list_double2_pane_g

0x4f6a,	// (0x00023f5c) list_double2_pane_t1_ParamLimits

0x4f6a,	// (0x00023f5c) list_double2_pane_t1

0x4fa3,	// (0x00023f95) list_double2_pane_t2_ParamLimits

0x4fa3,	// (0x00023f95) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e5ed) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e5ed) list_double2_pane_t

0x4f52,	// (0x00023f44) list_double_number_pane_g1_ParamLimits

0x4f52,	// (0x00023f44) list_double_number_pane_g1

0x4f5e,	// (0x00023f50) list_double_number_pane_g2_ParamLimits

0x4f5e,	// (0x00023f50) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e5de) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e5de) list_double_number_pane_g

0x4fb5,	// (0x00023fa7) list_double_number_pane_t1_ParamLimits

0x4fb5,	// (0x00023fa7) list_double_number_pane_t1

0x4fc7,	// (0x00023fb9) list_double_number_pane_t2_ParamLimits

0x4fc7,	// (0x00023fb9) list_double_number_pane_t2

0x4fdd,	// (0x00023fcf) list_double_number_pane_t3_ParamLimits

0x4fdd,	// (0x00023fcf) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e5f2) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e5f2) list_double_number_pane_t

0x4fef,	// (0x00023fe1) list_double_graphic_pane_g1_ParamLimits

0x4fef,	// (0x00023fe1) list_double_graphic_pane_g1

0x4ffb,	// (0x00023fed) list_double_graphic_pane_g2_ParamLimits

0x4ffb,	// (0x00023fed) list_double_graphic_pane_g2

0x500a,	// (0x00023ffc) list_double_graphic_pane_g3_ParamLimits

0x500a,	// (0x00023ffc) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e5f9) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e5f9) list_double_graphic_pane_g

0x5022,	// (0x00024014) list_double_graphic_pane_t1_ParamLimits

0x5022,	// (0x00024014) list_double_graphic_pane_t1

0x5038,	// (0x0002402a) list_double_graphic_pane_t2_ParamLimits

0x5038,	// (0x0002402a) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e602) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e602) list_double_graphic_pane_t

0x4fef,	// (0x00023fe1) list_double2_graphic_pane_g1_ParamLimits

0x4fef,	// (0x00023fe1) list_double2_graphic_pane_g1

0x504a,	// (0x0002403c) list_double2_graphic_pane_g2_ParamLimits

0x504a,	// (0x0002403c) list_double2_graphic_pane_g2

0x5056,	// (0x00024048) list_double2_graphic_pane_g3_ParamLimits

0x5056,	// (0x00024048) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e607) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e607) list_double2_graphic_pane_g

0x4fc7,	// (0x00023fb9) list_double2_graphic_pane_t1_ParamLimits

0x4fc7,	// (0x00023fb9) list_double2_graphic_pane_t1

0x5062,	// (0x00024054) list_double2_graphic_pane_t2_ParamLimits

0x5062,	// (0x00024054) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e60e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e60e) list_double2_graphic_pane_t

0x5074,	// (0x00024066) list_double_large_graphic_pane_g1_ParamLimits

0x5074,	// (0x00024066) list_double_large_graphic_pane_g1

0x4f92,	// (0x00023f84) list_double_large_graphic_pane_g2_ParamLimits

0x4f92,	// (0x00023f84) list_double_large_graphic_pane_g2

0x4f5e,	// (0x00023f50) list_double_large_graphic_pane_g3_ParamLimits

0x4f5e,	// (0x00023f50) list_double_large_graphic_pane_g3

0x5093,	// (0x00024085) list_double_large_graphic_pane_g4_ParamLimits

0x5093,	// (0x00024085) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e613) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e613) list_double_large_graphic_pane_g

0x50bb,	// (0x000240ad) list_double_large_graphic_pane_t1_ParamLimits

0x50bb,	// (0x000240ad) list_double_large_graphic_pane_t1

0x50d4,	// (0x000240c6) list_double_large_graphic_pane_t2_ParamLimits

0x50d4,	// (0x000240c6) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e61e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e61e) list_double_large_graphic_pane_t

0x50e6,	// (0x000240d8) list_double2_large_graphic_pane_g1_ParamLimits

0x50e6,	// (0x000240d8) list_double2_large_graphic_pane_g1

0x4f92,	// (0x00023f84) list_double2_large_graphic_pane_g2_ParamLimits

0x4f92,	// (0x00023f84) list_double2_large_graphic_pane_g2

0x4f5e,	// (0x00023f50) list_double2_large_graphic_pane_g3_ParamLimits

0x4f5e,	// (0x00023f50) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e623) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e623) list_double2_large_graphic_pane_g

0x50f2,	// (0x000240e4) list_double2_large_graphic_pane_t1_ParamLimits

0x50f2,	// (0x000240e4) list_double2_large_graphic_pane_t1

0x5108,	// (0x000240fa) list_double2_large_graphic_pane_t2_ParamLimits

0x5108,	// (0x000240fa) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e62a) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e62a) list_double2_large_graphic_pane_t

0x511a,	// (0x0002410c) list_double_heading_pane_g1_ParamLimits

0x511a,	// (0x0002410c) list_double_heading_pane_g1

0x512b,	// (0x0002411d) list_double_heading_pane_g2_ParamLimits

0x512b,	// (0x0002411d) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e62f) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e62f) list_double_heading_pane_g

0x5137,	// (0x00024129) list_double_heading_pane_t1_ParamLimits

0x5137,	// (0x00024129) list_double_heading_pane_t1

0x514d,	// (0x0002413f) list_double_heading_pane_t2_ParamLimits

0x514d,	// (0x0002413f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e634) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e634) list_double_heading_pane_t

0x515f,	// (0x00024151) list_double_graphic_heading_pane_g1_ParamLimits

0x515f,	// (0x00024151) list_double_graphic_heading_pane_g1

0x511a,	// (0x0002410c) list_double_graphic_heading_pane_g2_ParamLimits

0x511a,	// (0x0002410c) list_double_graphic_heading_pane_g2

0x512b,	// (0x0002411d) list_double_graphic_heading_pane_g3_ParamLimits

0x512b,	// (0x0002411d) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e639) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e639) list_double_graphic_heading_pane_g

0x516b,	// (0x0002415d) list_double_graphic_heading_pane_t1_ParamLimits

0x516b,	// (0x0002415d) list_double_graphic_heading_pane_t1

0x5181,	// (0x00024173) list_double_graphic_heading_pane_t2_ParamLimits

0x5181,	// (0x00024173) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e640) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e640) list_double_graphic_heading_pane_t

0x4f92,	// (0x00023f84) list_double_time_pane_g1_ParamLimits

0x4f92,	// (0x00023f84) list_double_time_pane_g1

0x4f5e,	// (0x00023f50) list_double_time_pane_g2_ParamLimits

0x4f5e,	// (0x00023f50) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x0002e5e8) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x0002e5e8) list_double_time_pane_g

0x5193,	// (0x00024185) list_double_time_pane_t1_ParamLimits

0x5193,	// (0x00024185) list_double_time_pane_t1

0x51a9,	// (0x0002419b) list_double_time_pane_t2_ParamLimits

0x51a9,	// (0x0002419b) list_double_time_pane_t2

0x51bb,	// (0x000241ad) list_double_time_pane_t3_ParamLimits

0x51bb,	// (0x000241ad) list_double_time_pane_t3

0x51cd,	// (0x000241bf) list_double_time_pane_t4_ParamLimits

0x51cd,	// (0x000241bf) list_double_time_pane_t4

0x0003,

0xf653,	// (0x0002e645) list_double_time_pane_t_ParamLimits

0xf653,	// (0x0002e645) list_double_time_pane_t

0x51df,	// (0x000241d1) list_setting_pane_g1_ParamLimits

0x51df,	// (0x000241d1) list_setting_pane_g1

0x51eb,	// (0x000241dd) list_setting_pane_g2_ParamLimits

0x51eb,	// (0x000241dd) list_setting_pane_g2

0x0001,

0xf65c,	// (0x0002e64e) list_setting_pane_g_ParamLimits

0xf65c,	// (0x0002e64e) list_setting_pane_g

0x51f7,	// (0x000241e9) list_setting_pane_t1_ParamLimits

0x51f7,	// (0x000241e9) list_setting_pane_t1

0x5211,	// (0x00024203) list_setting_pane_t2_ParamLimits

0x5211,	// (0x00024203) list_setting_pane_t2

0x0002,

0xf661,	// (0x0002e653) list_setting_pane_t_ParamLimits

0xf661,	// (0x0002e653) list_setting_pane_t

0x5250,	// (0x00024242) set_value_pane_cp_ParamLimits

0x5250,	// (0x00024242) set_value_pane_cp

0x525e,	// (0x00024250) list_setting_number_pane_g1_ParamLimits

0x525e,	// (0x00024250) list_setting_number_pane_g1

0x526a,	// (0x0002425c) list_setting_number_pane_g2_ParamLimits

0x526a,	// (0x0002425c) list_setting_number_pane_g2

0x0001,

0xf668,	// (0x0002e65a) list_setting_number_pane_g_ParamLimits

0xf668,	// (0x0002e65a) list_setting_number_pane_g

0x5276,	// (0x00024268) list_setting_number_pane_t1_ParamLimits

0x5276,	// (0x00024268) list_setting_number_pane_t1

0x528f,	// (0x00024281) list_setting_number_pane_t2_ParamLimits

0x528f,	// (0x00024281) list_setting_number_pane_t2

0x52a9,	// (0x0002429b) list_setting_number_pane_t3_ParamLimits

0x52a9,	// (0x0002429b) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0002e65f) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0002e65f) list_setting_number_pane_t

0x5250,	// (0x00024242) set_value_pane_ParamLimits

0x5250,	// (0x00024242) set_value_pane

0x17eb,	// (0x000207dd) bg_set_opt_pane_ParamLimits

0x17eb,	// (0x000207dd) bg_set_opt_pane

0x52ec,	// (0x000242de) set_value_pane_t1

0x181a,	// (0x0002080c) slider_set_pane_cp3

0x1823,	// (0x00020815) volume_small_pane_cp

0x182c,	// (0x0002081e) list_form_gen_pane

0x1835,	// (0x00020827) scroll_pane_cp8

0x5302,	// (0x000242f4) form_field_data_pane_ParamLimits

0x5302,	// (0x000242f4) form_field_data_pane

0x5328,	// (0x0002431a) form_field_data_wide_pane_ParamLimits

0x5328,	// (0x0002431a) form_field_data_wide_pane

0x534d,	// (0x0002433f) form_field_popup_pane_ParamLimits

0x534d,	// (0x0002433f) form_field_popup_pane

0x536f,	// (0x00024361) form_field_popup_wide_pane_ParamLimits

0x536f,	// (0x00024361) form_field_popup_wide_pane

0x5390,	// (0x00024382) form_field_slider_pane_ParamLimits

0x5390,	// (0x00024382) form_field_slider_pane

0x53a3,	// (0x00024395) form_field_slider_wide_pane_ParamLimits

0x53a3,	// (0x00024395) form_field_slider_wide_pane

0x189d,	// (0x0002088f) data_form_pane

0x53c0,	// (0x000243b2) form_field_data_pane_t1

0x18a9,	// (0x0002089b) input_focus_pane

0x53da,	// (0x000243cc) data_form_wide_pane

0x53f7,	// (0x000243e9) form_field_data_wide_pane_t1

0x15aa,	// (0x0002059c) input_focus_pane_cp6

0x5419,	// (0x0002440b) form_field_popup_pane_t1

0x18a9,	// (0x0002089b) input_focus_pane_cp7

0x2da4,	// (0x00021d96) list_form_pane

0x543b,	// (0x0002442d) form_field_popup_wide_pane_t1

0x18a9,	// (0x0002089b) input_focus_pane_cp8

0x2dca,	// (0x00021dbc) list_form_wide_pane

0x5458,	// (0x0002444a) form_field_slider_pane_t1_ParamLimits

0x5458,	// (0x0002444a) form_field_slider_pane_t1

0x5470,	// (0x00024462) form_field_slider_pane_t2_ParamLimits

0x5470,	// (0x00024462) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0002e66f) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0002e66f) form_field_slider_pane_t

0x11c9,	// (0x000201bb) input_focus_pane_cp9_ParamLimits

0x11c9,	// (0x000201bb) input_focus_pane_cp9

0x5485,	// (0x00024477) slider_cont_pane_ParamLimits

0x5485,	// (0x00024477) slider_cont_pane

0x2dd6,	// (0x00021dc8) form_field_slider_wide_pane_t1_ParamLimits

0x2dd6,	// (0x00021dc8) form_field_slider_wide_pane_t1

0x5499,	// (0x0002448b) form_field_slider_wide_pane_t2_ParamLimits

0x5499,	// (0x0002448b) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002e674) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002e674) form_field_slider_wide_pane_t

0x11c9,	// (0x000201bb) input_focus_pane_cp10_ParamLimits

0x11c9,	// (0x000201bb) input_focus_pane_cp10

0x54ab,	// (0x0002449d) slider_cont_pane_cp1_ParamLimits

0x54ab,	// (0x0002449d) slider_cont_pane_cp1

0x54bf,	// (0x000244b1) slider_form_pane_cp

0x2dfa,	// (0x00021dec) input_focus_pane_g1

0x2e02,	// (0x00021df4) input_focus_pane_g2

0x2e0a,	// (0x00021dfc) input_focus_pane_g3

0x2e12,	// (0x00021e04) input_focus_pane_g4

0x2e1a,	// (0x00021e0c) input_focus_pane_g5

0x2e22,	// (0x00021e14) input_focus_pane_g6

0x2e2a,	// (0x00021e1c) input_focus_pane_g7

0x2e32,	// (0x00021e24) input_focus_pane_g8

0x2e3a,	// (0x00021e2c) input_focus_pane_g9

0x1171,	// (0x00020163) input_focus_pane_g10

0x0009,

0xf687,	// (0x0002e679) input_focus_pane_g

0x9cce,	// (0x00028cc0) wait_border_pane_g3_copy1

0x54c7,	// (0x000244b9) data_form_pane_t1

0x1171,	// (0x00020163) wait_anim_pane_g1_copy1

0x57b0,	// (0x000247a2) data_form_wide_pane_t1

0x54e4,	// (0x000244d6) list_form_graphic_pane_cp_ParamLimits

0x54e4,	// (0x000244d6) list_form_graphic_pane_cp

0xac1a,	// (0x00029c0c) slider_form_pane_g1

0xac23,	// (0x00029c15) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0002e97c) slider_form_pane_g

0x54f9,	// (0x000244eb) list_form_graphic_pane_ParamLimits

0x54f9,	// (0x000244eb) list_form_graphic_pane

0x550b,	// (0x000244fd) list_form_graphic_pane_g1

0x5513,	// (0x00024505) list_form_graphic_pane_t1_ParamLimits

0x5513,	// (0x00024505) list_form_graphic_pane_t1

0x11d7,	// (0x000201c9) list_highlight_pane_cp5_ParamLimits

0x11d7,	// (0x000201c9) list_highlight_pane_cp5

0x5528,	// (0x0002451a) find_pane_g1

0x2e71,	// (0x00021e63) input_find_pane

0x5531,	// (0x00024523) input_find_pane_g1_ParamLimits

0x5531,	// (0x00024523) input_find_pane_g1

0x553d,	// (0x0002452f) input_find_pane_t1_ParamLimits

0x553d,	// (0x0002452f) input_find_pane_t1

0x5552,	// (0x00024544) input_find_pane_t2_ParamLimits

0x5552,	// (0x00024544) input_find_pane_t2

0x0001,

0xf69c,	// (0x0002e68e) input_find_pane_t_ParamLimits

0xf69c,	// (0x0002e68e) input_find_pane_t

0x2e7a,	// (0x00021e6c) input_focus_pane_cp5_ParamLimits

0x2e7a,	// (0x00021e6c) input_focus_pane_cp5

0x2e88,	// (0x00021e7a) bg_popup_window_pane_cp2_ParamLimits

0x2e88,	// (0x00021e7a) bg_popup_window_pane_cp2

0x2e95,	// (0x00021e87) listscroll_menu_pane_ParamLimits

0x2e95,	// (0x00021e87) listscroll_menu_pane

0x6710,	// (0x00025702) popup_submenu_window_ParamLimits

0x6710,	// (0x00025702) popup_submenu_window

0x2ea1,	// (0x00021e93) find_popup_pane_g1

0x2ea9,	// (0x00021e9b) input_popup_find_pane_cp

0x2e7a,	// (0x00021e6c) input_focus_pane_cp4_ParamLimits

0x2e7a,	// (0x00021e6c) input_focus_pane_cp4

0x2eb3,	// (0x00021ea5) input_popup_find_pane_t1_ParamLimits

0x2eb3,	// (0x00021ea5) input_popup_find_pane_t1

0x117b,	// (0x0002016d) bg_popup_sub_pane_cp

0x2ee1,	// (0x00021ed3) listscroll_popup_sub_pane

0x2ee9,	// (0x00021edb) list_submenu_pane_ParamLimits

0x2ee9,	// (0x00021edb) list_submenu_pane

0x2efa,	// (0x00021eec) scroll_pane_cp4

0x2f02,	// (0x00021ef4) list_single_popup_submenu_pane_ParamLimits

0x2f02,	// (0x00021ef4) list_single_popup_submenu_pane

0x2f17,	// (0x00021f09) list_single_popup_submenu_pane_g1

0x2f1f,	// (0x00021f11) list_single_popup_submenu_pane_t1_ParamLimits

0x2f1f,	// (0x00021f11) list_single_popup_submenu_pane_t1

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp1_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp1

0x674e,	// (0x00025740) tabs_2_active_pane_g1

0x6756,	// (0x00025748) tabs_2_active_pane_t1

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp1_ParamLimits

0x11d7,	// (0x000201c9) bg_passive_tab_pane_cp1

0x674e,	// (0x00025740) tabs_2_passive_pane_g1

0x6756,	// (0x00025748) tabs_2_passive_pane_t1

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp4

0x6768,	// (0x0002575a) tabs_2_long_active_pane_t1

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp4

0x8160,	// (0x00027152) list_single_midp_graphic_pane_g4_ParamLimits

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp5

0x6787,	// (0x00025779) tabs_3_long_active_pane_t1

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp5

0x8160,	// (0x00027152) list_single_midp_graphic_pane_g4

0x11d7,	// (0x000201c9) bg_popup_window_pane_cp13_ParamLimits

0x11d7,	// (0x000201c9) bg_popup_window_pane_cp13

0x2f3d,	// (0x00021f2f) listscroll_popup_fast_pane_ParamLimits

0x2f3d,	// (0x00021f2f) listscroll_popup_fast_pane

0x2f4c,	// (0x00021f3e) grid_popup_fast_pane_ParamLimits

0x2f4c,	// (0x00021f3e) grid_popup_fast_pane

0x2f5e,	// (0x00021f50) scroll_pane_cp9_ParamLimits

0x2f5e,	// (0x00021f50) scroll_pane_cp9

0xc55f,	// (0x0002b551) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc55f,	// (0x0002b551) list_single_graphic_hl_pane_t1_cp2

0x2f82,	// (0x00021f74) input_focus_pane_cp20_ParamLimits

0x2f82,	// (0x00021f74) input_focus_pane_cp20

0x2f90,	// (0x00021f82) query_popup_data_pane_t1_ParamLimits

0x2f90,	// (0x00021f82) query_popup_data_pane_t1

0x2fa3,	// (0x00021f95) query_popup_data_pane_t2_ParamLimits

0x2fa3,	// (0x00021f95) query_popup_data_pane_t2

0x2fe9,	// (0x00021fdb) query_popup_data_pane_t3_ParamLimits

0x2fe9,	// (0x00021fdb) query_popup_data_pane_t3

0x302a,	// (0x0002201c) query_popup_data_pane_t4_ParamLimits

0x302a,	// (0x0002201c) query_popup_data_pane_t4

0x3066,	// (0x00022058) query_popup_data_pane_t5_ParamLimits

0x3066,	// (0x00022058) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002e693) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002e693) query_popup_data_pane_t

0x2dfa,	// (0x00021dec) bg_set_opt_pane_g1

0x2e02,	// (0x00021df4) bg_set_opt_pane_g2

0x2e0a,	// (0x00021dfc) bg_set_opt_pane_g3

0x2e12,	// (0x00021e04) bg_set_opt_pane_g4

0x2e1a,	// (0x00021e0c) bg_set_opt_pane_g5

0x2e22,	// (0x00021e14) bg_set_opt_pane_g6

0x2e2a,	// (0x00021e1c) bg_set_opt_pane_g7

0x2e32,	// (0x00021e24) bg_set_opt_pane_g8

0x2e3a,	// (0x00021e2c) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0002e69e) bg_set_opt_pane_g

0x6de4,	// (0x00025dd6) control_top_pane_stacon_ParamLimits

0x6de4,	// (0x00025dd6) control_top_pane_stacon

0x6e37,	// (0x00025e29) signal_pane_stacon_ParamLimits

0x6e37,	// (0x00025e29) signal_pane_stacon

0x6e5c,	// (0x00025e4e) stacon_top_pane_g1_ParamLimits

0x6e5c,	// (0x00025e4e) stacon_top_pane_g1

0x6e7e,	// (0x00025e70) title_pane_stacon_ParamLimits

0x6e7e,	// (0x00025e70) title_pane_stacon

0x6ea8,	// (0x00025e9a) uni_indicator_pane_stacon_ParamLimits

0x6ea8,	// (0x00025e9a) uni_indicator_pane_stacon

0x6ebd,	// (0x00025eaf) battery_pane_stacon_ParamLimits

0x6ebd,	// (0x00025eaf) battery_pane_stacon

0x6f01,	// (0x00025ef3) control_bottom_pane_stacon_ParamLimits

0x6f01,	// (0x00025ef3) control_bottom_pane_stacon

0x6f24,	// (0x00025f16) navi_pane_stacon_ParamLimits

0x6f24,	// (0x00025f16) navi_pane_stacon

0x6f47,	// (0x00025f39) stacon_bottom_pane_g1_ParamLimits

0x6f47,	// (0x00025f39) stacon_bottom_pane_g1

0x6799,	// (0x0002578b) aid_levels_signal_lsc_ParamLimits

0x6799,	// (0x0002578b) aid_levels_signal_lsc

0x67b0,	// (0x000257a2) signal_pane_stacon_g1_ParamLimits

0x67b0,	// (0x000257a2) signal_pane_stacon_g1

0x67c4,	// (0x000257b6) signal_pane_stacon_g2_ParamLimits

0x67c4,	// (0x000257b6) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0002e6b1) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0002e6b1) signal_pane_stacon_g

0x67f9,	// (0x000257eb) title_pane_stacon_t1_ParamLimits

0x67f9,	// (0x000257eb) title_pane_stacon_t1

0x3143,	// (0x00022135) uni_indicator_pane_stacon_g1

0x314d,	// (0x0002213f) uni_indicator_pane_stacon_g2

0x312f,	// (0x00022121) uni_indicator_pane_stacon_g3

0x3139,	// (0x0002212b) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0002e6bd) uni_indicator_pane_stacon_g

0x681e,	// (0x00025810) control_top_pane_stacon_g1

0x6826,	// (0x00025818) control_top_pane_stacon_t1_ParamLimits

0x6826,	// (0x00025818) control_top_pane_stacon_t1

0x685d,	// (0x0002584f) aid_levels_battery_lsc_ParamLimits

0x685d,	// (0x0002584f) aid_levels_battery_lsc

0x6875,	// (0x00025867) battery_pane_stacon_g1_ParamLimits

0x6875,	// (0x00025867) battery_pane_stacon_g1

0x6888,	// (0x0002587a) battery_pane_stacon_g2_ParamLimits

0x6888,	// (0x0002587a) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002e6c6) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002e6c6) battery_pane_stacon_g

0x68c6,	// (0x000258b8) navi_icon_pane_stacon

0x68da,	// (0x000258cc) navi_navi_pane_stacon

0x68c6,	// (0x000258b8) navi_text_pane_stacon

0x681e,	// (0x00025810) control_bottom_pane_stacon_g1

0x68f0,	// (0x000258e2) control_bottom_pane_stacon_t1_ParamLimits

0x68f0,	// (0x000258e2) control_bottom_pane_stacon_t1

0x6927,	// (0x00025919) grid_app_pane_ParamLimits

0x6927,	// (0x00025919) grid_app_pane

0x6949,	// (0x0002593b) scroll_pane_cp15_ParamLimits

0x6949,	// (0x0002593b) scroll_pane_cp15

0x695c,	// (0x0002594e) cell_app_pane_ParamLimits

0x695c,	// (0x0002594e) cell_app_pane

0x6988,	// (0x0002597a) cell_app_pane_g1_ParamLimits

0x6988,	// (0x0002597a) cell_app_pane_g1

0x327a,	// (0x0002226c) cell_app_pane_g2_ParamLimits

0x327a,	// (0x0002226c) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0002e6cb) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0002e6cb) cell_app_pane_g

0x69ac,	// (0x0002599e) cell_app_pane_t1_ParamLimits

0x69ac,	// (0x0002599e) cell_app_pane_t1

0x3286,	// (0x00022278) grid_highlight_pane_ParamLimits

0x3286,	// (0x00022278) grid_highlight_pane

0x2dfa,	// (0x00021dec) cell_highlight_pane_g1

0x2e02,	// (0x00021df4) cell_highlight_pane_g2

0x2e0a,	// (0x00021dfc) cell_highlight_pane_g3

0x2e12,	// (0x00021e04) cell_highlight_pane_g4

0x2e1a,	// (0x00021e0c) cell_highlight_pane_g5

0x2e22,	// (0x00021e14) cell_highlight_pane_g6

0x2e2a,	// (0x00021e1c) cell_highlight_pane_g7

0x2e32,	// (0x00021e24) cell_highlight_pane_g8

0x2e3a,	// (0x00021e2c) cell_highlight_pane_g9

0x1171,	// (0x00020163) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0002e679) cell_highlight_pane_g

0x32a1,	// (0x00022293) bg_scroll_pane

0x69d6,	// (0x000259c8) scroll_handle_pane

0x3311,	// (0x00022303) scroll_bg_pane_g1

0x3326,	// (0x00022318) scroll_bg_pane_g2

0x333e,	// (0x00022330) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0002e6d0) scroll_bg_pane_g

0x3353,	// (0x00022345) scroll_handle_focus_pane_ParamLimits

0x3353,	// (0x00022345) scroll_handle_focus_pane

0x3311,	// (0x00022303) scroll_handle_pane_g1

0x3360,	// (0x00022352) scroll_handle_pane_g2

0x333e,	// (0x00022330) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002e6d7) scroll_handle_pane_g

0x2e7a,	// (0x00021e6c) bg_popup_sub_pane_cp21_ParamLimits

0x2e7a,	// (0x00021e6c) bg_popup_sub_pane_cp21

0x3374,	// (0x00022366) popup_fep_japan_predictive_window_t1_ParamLimits

0x3374,	// (0x00022366) popup_fep_japan_predictive_window_t1

0x338b,	// (0x0002237d) popup_fep_japan_predictive_window_t2_ParamLimits

0x338b,	// (0x0002237d) popup_fep_japan_predictive_window_t2

0x33be,	// (0x000223b0) popup_fep_japan_predictive_window_t3_ParamLimits

0x33be,	// (0x000223b0) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0002e6de) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0002e6de) popup_fep_japan_predictive_window_t

0x117b,	// (0x0002016d) bg_popup_sub_pane_cp23

0x33f5,	// (0x000223e7) listscroll_japin_cand_pane

0x33fd,	// (0x000223ef) popup_fep_japan_candidate_window_t1

0x340b,	// (0x000223fd) candidate_pane_ParamLimits

0x340b,	// (0x000223fd) candidate_pane

0x341d,	// (0x0002240f) scroll_pane_cp30

0x3427,	// (0x00022419) list_single_popup_jap_candidate_pane_ParamLimits

0x3427,	// (0x00022419) list_single_popup_jap_candidate_pane

0x117b,	// (0x0002016d) list_highlight_pane_cp30

0x343b,	// (0x0002242d) list_single_popup_jap_candidate_pane_t1

0x69ff,	// (0x000259f1) level_1_signal

0x6a0c,	// (0x000259fe) level_2_signal

0x6a19,	// (0x00025a0b) level_3_signal

0x6a26,	// (0x00025a18) level_4_signal

0x6a33,	// (0x00025a25) level_5_signal

0x6a40,	// (0x00025a32) level_6_signal

0x6a4d,	// (0x00025a3f) level_7_signal

0x69ff,	// (0x000259f1) level_1_battery

0x6a0c,	// (0x000259fe) level_2_battery

0x6a19,	// (0x00025a0b) level_3_battery

0x6a26,	// (0x00025a18) level_4_battery

0x6a33,	// (0x00025a25) level_5_battery

0x6a40,	// (0x00025a32) level_6_battery

0x6a4d,	// (0x00025a3f) level_7_battery

0x6a91,	// (0x00025a83) list_menu_pane_ParamLimits

0x6a91,	// (0x00025a83) list_menu_pane

0x6aa7,	// (0x00025a99) scroll_pane_cp25_ParamLimits

0x6aa7,	// (0x00025a99) scroll_pane_cp25

0x6ac0,	// (0x00025ab2) list_double2_graphic_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double2_graphic_pane_cp2

0x6ac0,	// (0x00025ab2) list_double2_large_graphic_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double2_large_graphic_pane_cp2

0x6ac0,	// (0x00025ab2) list_double2_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double2_pane_cp2

0x6ac0,	// (0x00025ab2) list_double_graphic_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double_graphic_pane_cp2

0x6ac0,	// (0x00025ab2) list_double_large_graphic_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double_large_graphic_pane_cp2

0x6ac0,	// (0x00025ab2) list_double_number_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double_number_pane_cp2

0x6ac0,	// (0x00025ab2) list_double_pane_cp2_ParamLimits

0x6ac0,	// (0x00025ab2) list_double_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_2graphic_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_2graphic_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_graphic_heading_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_graphic_heading_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_graphic_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_graphic_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_heading_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_heading_pane_cp2

0x6b03,	// (0x00025af5) list_single_large_graphic_pane_cp2_ParamLimits

0x6b03,	// (0x00025af5) list_single_large_graphic_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_number_heading_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_number_heading_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_number_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_number_pane_cp2

0x6ae6,	// (0x00025ad8) list_single_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_pane_cp2

0x6bcc,	// (0x00025bbe) bg_popup_sub_pane_cp22

0x6bf1,	// (0x00025be3) popup_side_volume_key_window_g1

0x6c1b,	// (0x00025c0d) popup_side_volume_key_window_t1

0x6c39,	// (0x00025c2b) volume_small_pane_cp1

0x11c9,	// (0x000201bb) bg_popup_sub_pane_cp24_ParamLimits

0x11c9,	// (0x000201bb) bg_popup_sub_pane_cp24

0x6c41,	// (0x00025c33) fep_china_uni_candidate_pane_ParamLimits

0x6c41,	// (0x00025c33) fep_china_uni_candidate_pane

0x6c55,	// (0x00025c47) fep_china_uni_entry_pane

0x6c65,	// (0x00025c57) popup_fep_china_uni_window_g1

0x6c81,	// (0x00025c73) fep_china_uni_entry_pane_g1

0x6c8b,	// (0x00025c7d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0002e70f) fep_china_uni_entry_pane_g

0x6c95,	// (0x00025c87) fep_entry_item_pane

0x6c9f,	// (0x00025c91) fep_candidate_item_pane

0x6ca7,	// (0x00025c99) fep_china_uni_candidate_pane_g1

0x6cb1,	// (0x00025ca3) fep_china_uni_candidate_pane_g2

0x6cb9,	// (0x00025cab) fep_china_uni_candidate_pane_g3

0x6cc1,	// (0x00025cb3) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0002e714) fep_china_uni_candidate_pane_g

0x1171,	// (0x00020163) fep_entry_item_pane_g1

0x6ccb,	// (0x00025cbd) fep_entry_item_pane_t1_ParamLimits

0x6ccb,	// (0x00025cbd) fep_entry_item_pane_t1

0x6ce1,	// (0x00025cd3) fep_candidate_item_pane_t1_ParamLimits

0x6ce1,	// (0x00025cd3) fep_candidate_item_pane_t1

0x6cf6,	// (0x00025ce8) fep_candidate_item_pane_t2_ParamLimits

0x6cf6,	// (0x00025ce8) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0002e71d) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0002e71d) fep_candidate_item_pane_t

0x11d7,	// (0x000201c9) list_highlight_pane_cp31_ParamLimits

0x11d7,	// (0x000201c9) list_highlight_pane_cp31

0x6d08,	// (0x00025cfa) level_1_signal_lsc

0x6d11,	// (0x00025d03) level_2_signal_lsc

0x6d1a,	// (0x00025d0c) level_3_signal_lsc

0x6d23,	// (0x00025d15) level_4_signal_lsc

0x6d2c,	// (0x00025d1e) level_5_signal_lsc

0x6d35,	// (0x00025d27) level_6_signal_lsc

0x6d3e,	// (0x00025d30) level_7_signal_lsc

0x6d3e,	// (0x00025d30) level_1_battery_lsc

0x6d47,	// (0x00025d39) level_2_battery_lsc

0x6d50,	// (0x00025d42) level_3_battery_lsc

0x6d59,	// (0x00025d4b) level_4_battery_lsc

0x6d62,	// (0x00025d54) level_5_battery_lsc

0x6d6b,	// (0x00025d5d) level_6_battery_lsc

0x6d08,	// (0x00025cfa) level_7_battery_lsc

0x6d74,	// (0x00025d66) scroll_handle_focus_pane_g1

0x6d7d,	// (0x00025d6f) scroll_handle_focus_pane_g2

0x6d86,	// (0x00025d78) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0002e722) scroll_handle_focus_pane_g

0x5567,	// (0x00024559) list_single_2graphic_pane_g1_ParamLimits

0x5567,	// (0x00024559) list_single_2graphic_pane_g1

0x4f05,	// (0x00023ef7) list_single_2graphic_pane_g2_ParamLimits

0x4f05,	// (0x00023ef7) list_single_2graphic_pane_g2

0x4e8b,	// (0x00023e7d) list_single_2graphic_pane_g3_ParamLimits

0x4e8b,	// (0x00023e7d) list_single_2graphic_pane_g3

0x5573,	// (0x00024565) list_single_2graphic_pane_g4_ParamLimits

0x5573,	// (0x00024565) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0002e729) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0002e729) list_single_2graphic_pane_g

0x557f,	// (0x00024571) list_single_2graphic_pane_t1_ParamLimits

0x557f,	// (0x00024571) list_single_2graphic_pane_t1

0x55ad,	// (0x0002459f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x55ad,	// (0x0002459f) list_double2_graphic_large_graphic_pane_g1

0x4f92,	// (0x00023f84) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f92,	// (0x00023f84) list_double2_graphic_large_graphic_pane_g2

0x4f5e,	// (0x00023f50) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4f5e,	// (0x00023f50) list_double2_graphic_large_graphic_pane_g3

0x55bf,	// (0x000245b1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x55bf,	// (0x000245b1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0002e732) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0002e732) list_double2_graphic_large_graphic_pane_g

0x55cb,	// (0x000245bd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x55cb,	// (0x000245bd) list_double2_graphic_large_graphic_pane_t1

0x55e1,	// (0x000245d3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x55e1,	// (0x000245d3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0002e73b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0002e73b) list_double2_graphic_large_graphic_pane_t

0x7007,	// (0x00025ff9) popup_fast_swap_window_ParamLimits

0x7007,	// (0x00025ff9) popup_fast_swap_window

0x7025,	// (0x00026017) popup_side_volume_key_window

0x7043,	// (0x00026035) stacon_top_pane

0x704d,	// (0x0002603f) status_pane_ParamLimits

0x704d,	// (0x0002603f) status_pane

0x705b,	// (0x0002604d) status_small_pane

0x117b,	// (0x0002016d) control_pane

0x117b,	// (0x0002016d) stacon_bottom_pane

0x1835,	// (0x00020827) scroll_pane_cp121

0x182c,	// (0x0002081e) set_content_pane

0x6d8f,	// (0x00025d81) bg_active_tab_pane_g1_cp1

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp1

0x6da1,	// (0x00025d93) bg_active_tab_pane_g3_cp1

0x6d8f,	// (0x00025d81) bg_passive_tab_pane_g1_cp1

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp1

0x6da1,	// (0x00025d93) bg_passive_tab_pane_g3_cp1

0x6daa,	// (0x00025d9c) bg_active_tab_pane_g1_cp2

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp2

0x6db3,	// (0x00025da5) bg_active_tab_pane_g3_cp2

0x6daa,	// (0x00025d9c) bg_passive_tab_pane_g1_cp2

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp2

0x6db3,	// (0x00025da5) bg_passive_tab_pane_g3_cp2

0x6dbc,	// (0x00025dae) bg_active_tab_pane_g1_cp3

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp3

0x6dc5,	// (0x00025db7) bg_active_tab_pane_g3_cp3

0x6dbc,	// (0x00025dae) bg_passive_tab_pane_g1_cp3

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp3

0x6dc5,	// (0x00025db7) bg_passive_tab_pane_g3_cp3

0x6dce,	// (0x00025dc0) bg_active_tab_pane_g1_cp4

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp4

0x6dd9,	// (0x00025dcb) bg_active_tab_pane_g3_cp4

0x6dce,	// (0x00025dc0) bg_passive_tab_pane_g1_cp4

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp4

0x6dd9,	// (0x00025dcb) bg_passive_tab_pane_g3_cp4

0x6f63,	// (0x00025f55) bg_active_tab_pane_g1_cp5

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp5

0x6f6c,	// (0x00025f5e) bg_active_tab_pane_g3_cp5

0x6f63,	// (0x00025f55) bg_passive_tab_pane_g1_cp5

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp5

0x6f6c,	// (0x00025f5e) bg_passive_tab_pane_g3_cp5

0x6f75,	// (0x00025f67) list_set_graphic_pane_ParamLimits

0x6f75,	// (0x00025f67) list_set_graphic_pane

0x117b,	// (0x0002016d) bg_set_opt_pane_cp4

0x6f88,	// (0x00025f7a) list_set_graphic_pane_g1_ParamLimits

0x6f88,	// (0x00025f7a) list_set_graphic_pane_g1

0x6f94,	// (0x00025f86) list_set_graphic_pane_g2_ParamLimits

0x6f94,	// (0x00025f86) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0002e740) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0002e740) list_set_graphic_pane_g

0x0009,

0xfaca,	// (0x0002eabc) volume_small_pane_cp_g

0x6fb8,	// (0x00025faa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x6fb8,	// (0x00025faa) list_double2_large_graphic_pane_g1_cp2

0x6fc6,	// (0x00025fb8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x6fc6,	// (0x00025fb8) list_double2_large_graphic_pane_g2_cp2

0x6fd7,	// (0x00025fc9) list_double2_large_graphic_pane_g3_cp2

0x6fdf,	// (0x00025fd1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x6fdf,	// (0x00025fd1) list_double2_large_graphic_pane_t1_cp2

0x6ff5,	// (0x00025fe7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x6ff5,	// (0x00025fe7) list_double2_large_graphic_pane_t2_cp2

0xa7b2,	// (0x000297a4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa7b2,	// (0x000297a4) list_double_large_graphic_pane_g1_cp2

0xa7c5,	// (0x000297b7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa7c5,	// (0x000297b7) list_double_large_graphic_pane_g2_cp2

0x7176,	// (0x00026168) list_double_large_graphic_pane_g3_cp2

0xa7d6,	// (0x000297c8) list_double_large_graphic_pane_g4_cp

0xa7de,	// (0x000297d0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa7de,	// (0x000297d0) list_double_large_graphic_pane_t1_cp2

0xa7f5,	// (0x000297e7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa7f5,	// (0x000297e7) list_double_large_graphic_pane_t2_cp2

0x7066,	// (0x00026058) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7066,	// (0x00026058) list_double2_graphic_pane_g1_cp2

0x7074,	// (0x00026066) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7074,	// (0x00026066) list_double2_graphic_pane_g2_cp2

0x7085,	// (0x00026077) list_double2_graphic_pane_g3_cp2

0x708f,	// (0x00026081) list_double2_graphic_pane_t1_cp2_ParamLimits

0x708f,	// (0x00026081) list_double2_graphic_pane_t1_cp2

0x70a5,	// (0x00026097) list_double2_graphic_pane_t2_cp2_ParamLimits

0x70a5,	// (0x00026097) list_double2_graphic_pane_t2_cp2

0x70b7,	// (0x000260a9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x70b7,	// (0x000260a9) list_single_number_heading_pane_g1_cp2

0x70c3,	// (0x000260b5) list_single_number_heading_pane_g2_cp2

0x70cb,	// (0x000260bd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x70cb,	// (0x000260bd) list_single_number_heading_pane_t1_cp2

0x70e1,	// (0x000260d3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x70e1,	// (0x000260d3) list_single_number_heading_pane_t2_cp2

0x70f5,	// (0x000260e7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x70f5,	// (0x000260e7) list_single_number_heading_pane_t3_cp2

0x70b7,	// (0x000260a9) list_single_heading_pane_g1_cp2_ParamLimits

0x70b7,	// (0x000260a9) list_single_heading_pane_g1_cp2

0x70c3,	// (0x000260b5) list_single_heading_pane_g2_cp2

0x70cb,	// (0x000260bd) list_single_heading_pane_t1_cp2_ParamLimits

0x70cb,	// (0x000260bd) list_single_heading_pane_t1_cp2

0xa5ac,	// (0x0002959e) list_single_heading_pane_t2_cp2_ParamLimits

0xa5ac,	// (0x0002959e) list_single_heading_pane_t2_cp2

0xa4f4,	// (0x000294e6) list_double_graphic_pane_g1_cp2_ParamLimits

0xa4f4,	// (0x000294e6) list_double_graphic_pane_g1_cp2

0xa500,	// (0x000294f2) list_double_graphic_pane_g2_cp2_ParamLimits

0xa500,	// (0x000294f2) list_double_graphic_pane_g2_cp2

0xa50f,	// (0x00029501) list_double_graphic_pane_g3_cp2

0xa517,	// (0x00029509) list_double_graphic_pane_t1_cp2_ParamLimits

0xa517,	// (0x00029509) list_double_graphic_pane_t1_cp2

0xa52d,	// (0x0002951f) list_double_graphic_pane_t2_cp2_ParamLimits

0xa52d,	// (0x0002951f) list_double_graphic_pane_t2_cp2

0x716a,	// (0x0002615c) list_double_number_pane_g1_cp2_ParamLimits

0x716a,	// (0x0002615c) list_double_number_pane_g1_cp2

0x7176,	// (0x00026168) list_double_number_pane_g2_cp2

0xa4b8,	// (0x000294aa) list_double_number_pane_t1_cp2_ParamLimits

0xa4b8,	// (0x000294aa) list_double_number_pane_t1_cp2

0xa4cc,	// (0x000294be) list_double_number_pane_t2_cp2_ParamLimits

0xa4cc,	// (0x000294be) list_double_number_pane_t2_cp2

0xa4e2,	// (0x000294d4) list_double_number_pane_t3_cp2_ParamLimits

0xa4e2,	// (0x000294d4) list_double_number_pane_t3_cp2

0xa3a1,	// (0x00029393) list_single_graphic_pane_g1_cp2_ParamLimits

0xa3a1,	// (0x00029393) list_single_graphic_pane_g1_cp2

0x3664,	// (0x00022656) list_single_graphic_pane_g2_cp2_ParamLimits

0x3664,	// (0x00022656) list_single_graphic_pane_g2_cp2

0x71d0,	// (0x000261c2) list_single_graphic_pane_g3_cp2

0xa377,	// (0x00029369) list_single_graphic_pane_t1_cp2_ParamLimits

0xa377,	// (0x00029369) list_single_graphic_pane_t1_cp2

0x3664,	// (0x00022656) list_single_number_pane_g1_cp2_ParamLimits

0x3664,	// (0x00022656) list_single_number_pane_g1_cp2

0x71d0,	// (0x000261c2) list_single_number_pane_g2_cp2

0xa377,	// (0x00029369) list_single_number_pane_t1_cp2_ParamLimits

0xa377,	// (0x00029369) list_single_number_pane_t1_cp2

0xa38d,	// (0x0002937f) list_single_number_pane_t2_cp2_ParamLimits

0xa38d,	// (0x0002937f) list_single_number_pane_t2_cp2

0x6fc6,	// (0x00025fb8) list_double2_pane_g1_cp2_ParamLimits

0x6fc6,	// (0x00025fb8) list_double2_pane_g1_cp2

0x6fd7,	// (0x00025fc9) list_double2_pane_g2_cp2

0x7142,	// (0x00026134) list_double2_pane_t1_cp2_ParamLimits

0x7142,	// (0x00026134) list_double2_pane_t1_cp2

0x7158,	// (0x0002614a) list_double2_pane_t2_cp2_ParamLimits

0x7158,	// (0x0002614a) list_double2_pane_t2_cp2

0x716a,	// (0x0002615c) list_double_pane_g1_cp2_ParamLimits

0x716a,	// (0x0002615c) list_double_pane_g1_cp2

0x7176,	// (0x00026168) list_double_pane_g2_cp2

0x717e,	// (0x00026170) list_double_pane_t1_cp2_ParamLimits

0x717e,	// (0x00026170) list_double_pane_t1_cp2

0x7194,	// (0x00026186) list_double_pane_t2_cp2_ParamLimits

0x7194,	// (0x00026186) list_double_pane_t2_cp2

0x71c0,	// (0x000261b2) list_single_pane_cp2_g3

0x3664,	// (0x00022656) list_single_pane_g1_cp2_ParamLimits

0x3664,	// (0x00022656) list_single_pane_g1_cp2

0x71d0,	// (0x000261c2) list_single_pane_g2_cp2

0x71d8,	// (0x000261ca) list_single_pane_t1_cp2_ParamLimits

0x71d8,	// (0x000261ca) list_single_pane_t1_cp2

0x71f0,	// (0x000261e2) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x71f0,	// (0x000261e2) list_single_large_graphic_pane_g1_cp2

0x71fe,	// (0x000261f0) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x71fe,	// (0x000261f0) list_single_large_graphic_pane_g2_cp2

0x720a,	// (0x000261fc) list_single_large_graphic_pane_g3_cp2

0x7212,	// (0x00026204) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7212,	// (0x00026204) list_single_large_graphic_pane_g4_cp1

0x722c,	// (0x0002621e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x722c,	// (0x0002621e) list_single_large_graphic_pane_t1_cp2

0xa341,	// (0x00029333) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa341,	// (0x00029333) list_single_graphic_heading_pane_g1_cp2

0xa30e,	// (0x00029300) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa30e,	// (0x00029300) list_single_graphic_heading_pane_g4_cp2

0x71d0,	// (0x000261c2) list_single_graphic_heading_pane_g5_cp2

0xa34d,	// (0x0002933f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa34d,	// (0x0002933f) list_single_graphic_heading_pane_t1_cp2

0xa363,	// (0x00029355) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa363,	// (0x00029355) list_single_graphic_heading_pane_t2_cp2

0xa302,	// (0x000292f4) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa302,	// (0x000292f4) list_single_2graphic_pane_g1_cp2

0xa30e,	// (0x00029300) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa30e,	// (0x00029300) list_single_2graphic_pane_g2_cp2

0x71d0,	// (0x000261c2) list_single_2graphic_pane_g3_cp2

0xa31f,	// (0x00029311) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa31f,	// (0x00029311) list_single_2graphic_pane_g4_cp2

0xa32b,	// (0x0002931d) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa32b,	// (0x0002931d) list_single_2graphic_pane_t1_cp2

0x1171,	// (0x00020163) list_highlight_pane_g10_cp1

0x9eda,	// (0x00028ecc) list_highlight_pane_g1_cp1

0x9ee2,	// (0x00028ed4) list_highlight_pane_g2_cp1

0x9eea,	// (0x00028edc) list_highlight_pane_g3_cp1

0x9ef2,	// (0x00028ee4) list_highlight_pane_g4_cp1

0x9efa,	// (0x00028eec) list_highlight_pane_g5_cp1

0x9f02,	// (0x00028ef4) list_highlight_pane_g6_cp1

0x9f0a,	// (0x00028efc) list_highlight_pane_g7_cp1

0x9f12,	// (0x00028f04) list_highlight_pane_g8_cp1

0x9f1a,	// (0x00028f0c) list_highlight_pane_g9_cp1

0x9dfa,	// (0x00028dec) form_field_slider_pane_t3

0x9e08,	// (0x00028dfa) form_field_slider_pane_t4

0x9e16,	// (0x00028e08) slider_form_pane_ParamLimits

0x9e16,	// (0x00028e08) slider_form_pane

0x117b,	// (0x0002016d) control_abbreviations

0x117b,	// (0x0002016d) control_conventions

0x117b,	// (0x0002016d) control_definitions

0x117b,	// (0x0002016d) format_table_attribute

0xa602,	// (0x000295f4) bg_popup_preview_window_pane_g9

0x117b,	// (0x0002016d) format_table_data2

0x117b,	// (0x0002016d) format_table_data3

0x117b,	// (0x0002016d) format_table_data_example

0x0008,

0x117b,	// (0x0002016d) intro_purpose

0xf8ea,	// (0x0002e8dc) bg_popup_preview_window_pane_g

0x117b,	// (0x0002016d) texts_category

0x117b,	// (0x0002016d) texts_graphics

0x7242,	// (0x00026234) text_digital

0x7251,	// (0x00026243) text_primary

0x7260,	// (0x00026252) text_primary_small

0x726f,	// (0x00026261) text_secondary

0x727e,	// (0x00026270) text_title

0xad84,	// (0x00029d76) bg_passive_tab_pane_g1_cp3_srt

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp3_srt

0xad8d,	// (0x00029d7f) bg_passive_tab_pane_g3_cp3_srt

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp3_srt_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp3_srt

0xad96,	// (0x00029d88) tabs_4_active_pane_srt_g1

0xad9e,	// (0x00029d90) tabs_4_active_pane_srt_t1_ParamLimits

0xad9e,	// (0x00029d90) tabs_4_active_pane_srt_t1

0xad84,	// (0x00029d76) bg_active_tab_pane_g1_cp3_copy1

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp3_copy1

0xad8d,	// (0x00029d7f) bg_active_tab_pane_g3_cp3_copy1

0x11d7,	// (0x000201c9) tabs_2_long_active_pane_srt_ParamLimits

0x11d7,	// (0x000201c9) tabs_2_long_active_pane_srt

0x11d7,	// (0x000201c9) tabs_2_long_passive_pane_srt_ParamLimits

0x11d7,	// (0x000201c9) tabs_2_long_passive_pane_srt

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp4_srt

0xaa31,	// (0x00029a23) bg_passive_tab_pane_g1_cp4_srt

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp4_srt

0xaa3a,	// (0x00029a2c) bg_passive_tab_pane_g3_cp4_srt

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp4_srt

0xaa43,	// (0x00029a35) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaa43,	// (0x00029a35) tabs_2_long_active_pane_srt_t1

0xaa31,	// (0x00029a23) bg_active_tab_pane_g1_cp4_srt

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp4_srt

0xaa3a,	// (0x00029a2c) bg_active_tab_pane_g3_cp4_srt

0x11c9,	// (0x000201bb) tabs_3_long_active_pane_srt_ParamLimits

0x11c9,	// (0x000201bb) tabs_3_long_active_pane_srt

0x11c9,	// (0x000201bb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x11c9,	// (0x000201bb) tabs_3_long_passive_pane_cp_srt

0x11c9,	// (0x000201bb) tabs_3_long_passive_pane_srt_ParamLimits

0x11c9,	// (0x000201bb) tabs_3_long_passive_pane_srt

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp5_srt

0x6f63,	// (0x00025f55) bg_passive_tab_pane_g1_cp5_srt

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp5_srt

0x6f6c,	// (0x00025f5e) bg_passive_tab_pane_g3_cp5_srt

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp5_srt

0xaa1f,	// (0x00029a11) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaa1f,	// (0x00029a11) tabs_3_long_active_pane_srt_t1

0x6f63,	// (0x00025f55) bg_active_tab_pane_g1_cp5_srt

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp5_srt

0x6f6c,	// (0x00025f5e) bg_active_tab_pane_g3_cp5_srt

0xaa11,	// (0x00029a03) navi_text_pane_srt_t1

0xaa09,	// (0x000299fb) navi_icon_pane_srt_g1

0x74ff,	// (0x000264f1) midp_editing_number_pane_srt

0x728d,	// (0x0002627f) midp_ticker_pane_srt

0x7507,	// (0x000264f9) midp_ticker_pane_srt_g1

0x750f,	// (0x00026501) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0002e75f) midp_ticker_pane_srt_g

0x7517,	// (0x00026509) midp_ticker_pane_srt_t1

0xa9fa,	// (0x000299ec) midp_editing_number_pane_t1_copy1

0x7295,	// (0x00026287) listscroll_midp_pane

0x7295,	// (0x00026287) midp_form_pane

0x7304,	// (0x000262f6) midp_info_popup_window_ParamLimits

0x7304,	// (0x000262f6) midp_info_popup_window

0x2e7a,	// (0x00021e6c) bg_popup_sub_pane_cp50_ParamLimits

0x2e7a,	// (0x00021e6c) bg_popup_sub_pane_cp50

0x9b04,	// (0x00028af6) listscroll_midp_info_pane_ParamLimits

0x9b04,	// (0x00028af6) listscroll_midp_info_pane

0x9ae4,	// (0x00028ad6) listscroll_form_midp_pane_ParamLimits

0x9ae4,	// (0x00028ad6) listscroll_form_midp_pane

0x9af0,	// (0x00028ae2) scroll_bar_cp050

0x9ac4,	// (0x00028ab6) list_midp_pane

0xb7fc,	// (0x0002a7ee) signal_pane_g2_cp

0x99fe,	// (0x000289f0) listscroll_midp_info_pane_t1_ParamLimits

0x99fe,	// (0x000289f0) listscroll_midp_info_pane_t1

0x9a16,	// (0x00028a08) listscroll_midp_info_pane_t2_ParamLimits

0x9a16,	// (0x00028a08) listscroll_midp_info_pane_t2

0x9a54,	// (0x00028a46) listscroll_midp_info_pane_t3_ParamLimits

0x9a54,	// (0x00028a46) listscroll_midp_info_pane_t3

0x9a8e,	// (0x00028a80) listscroll_midp_info_pane_t4_ParamLimits

0x9a8e,	// (0x00028a80) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0002e817) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0002e817) listscroll_midp_info_pane_t

0x2efa,	// (0x00021eec) scroll_pane_cp21

0x9998,	// (0x0002898a) form_midp_field_choice_group_pane

0x99a1,	// (0x00028993) form_midp_field_text_pane

0x99e4,	// (0x000289d6) form_midp_field_time_pane

0x99ec,	// (0x000289de) form_midp_gauge_slider_pane

0x99f5,	// (0x000289e7) form_midp_gauge_wait_pane

0x117b,	// (0x0002016d) form_midp_image_pane

0x5768,	// (0x0002475a) list_single_midp_pane_ParamLimits

0x5768,	// (0x0002475a) list_single_midp_pane

0x995c,	// (0x0002894e) form_midp_field_text_pane_t1

0x974e,	// (0x00028740) input_focus_pane_cp050

0x9987,	// (0x00028979) list_midp_form_text_pane

0x992b,	// (0x0002891d) form_midp_field_choice_group_pane_t1

0x9939,	// (0x0002892b) input_focus_pane_cp051

0x994d,	// (0x0002893f) list_midp_choice_pane

0x117b,	// (0x0002016d) status_idle_pane

0x990f,	// (0x00028901) form_midp_field_time_pane_t1

0x1171,	// (0x00020163) wait_anim_pane_g2_copy1

0x991d,	// (0x0002890f) form_midp_field_time_pane_t2

0x0001,

0x73b4,	// (0x000263a6) aid_navinavi_width_2_pane

0xf820,	// (0x0002e812) form_midp_field_time_pane_t

0x117b,	// (0x0002016d) input_focus_pane_cp052

0x117b,	// (0x0002016d) bg_input_focus_pane_cp040

0x98cf,	// (0x000288c1) form_midp_gauge_slider_pane_t1

0x98dd,	// (0x000288cf) form_midp_gauge_slider_pane_t2

0x98eb,	// (0x000288dd) form_midp_gauge_slider_pane_t3

0x98f9,	// (0x000288eb) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0002e809) form_midp_gauge_slider_pane_t

0x9907,	// (0x000288f9) form_midp_slider_pane

0x11d7,	// (0x000201c9) bg_input_focus_pane_cp041_ParamLimits

0x11d7,	// (0x000201c9) bg_input_focus_pane_cp041

0x989c,	// (0x0002888e) form_midp_gauge_wait_pane_t1_ParamLimits

0x989c,	// (0x0002888e) form_midp_gauge_wait_pane_t1

0x98ae,	// (0x000288a0) form_midp_gauge_wait_pane_t2_ParamLimits

0x98ae,	// (0x000288a0) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0002e804) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0002e804) form_midp_gauge_wait_pane_t

0x98c0,	// (0x000288b2) form_midp_wait_pane_ParamLimits

0x98c0,	// (0x000288b2) form_midp_wait_pane

0x9864,	// (0x00028856) form_midp_image_pane_g1

0x986d,	// (0x0002885f) form_midp_image_pane_t1

0x987c,	// (0x0002886e) form_midp_image_pane_t2

0x988b,	// (0x0002887d) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0002e7fd) form_midp_image_pane_t

0x985b,	// (0x0002884d) list_single_midp_pane_g1

0x5759,	// (0x0002474b) list_single_midp_pane_t1

0x9841,	// (0x00028833) list_midp_form_item_pane_ParamLimits

0x9841,	// (0x00028833) list_midp_form_item_pane

0x735c,	// (0x0002634e) list_midp_form_item_pane_t1

0x736b,	// (0x0002635d) midp_ticker_pane_g1

0x7377,	// (0x00026369) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0002e745) midp_ticker_pane_g

0x7383,	// (0x00026375) midp_ticker_pane_t1

0xac67,	// (0x00029c59) midp_editing_number_pane_t1

0xac45,	// (0x00029c37) midp_editing_number_pane

0xac54,	// (0x00029c46) midp_ticker_pane

0xa9ea,	// (0x000299dc) ai_message_heading_pane

0x117b,	// (0x0002016d) bg_popup_window_pane_cp14

0xa9f2,	// (0x000299e4) listscroll_ai_message_pane

0xa970,	// (0x00029962) ai_message_heading_pane_g1_ParamLimits

0xa970,	// (0x00029962) ai_message_heading_pane_g1

0xa97c,	// (0x0002996e) ai_message_heading_pane_g2_ParamLimits

0xa97c,	// (0x0002996e) ai_message_heading_pane_g2

0xa98a,	// (0x0002997c) ai_message_heading_pane_g3_ParamLimits

0xa98a,	// (0x0002997c) ai_message_heading_pane_g3

0xa996,	// (0x00029988) ai_message_heading_pane_g4_ParamLimits

0xa996,	// (0x00029988) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0002e93e) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0002e93e) ai_message_heading_pane_g

0xa9a2,	// (0x00029994) ai_message_heading_pane_t1_ParamLimits

0xa9a2,	// (0x00029994) ai_message_heading_pane_t1

0xa9bc,	// (0x000299ae) ai_message_heading_pane_t2_ParamLimits

0xa9bc,	// (0x000299ae) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0002e947) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0002e947) ai_message_heading_pane_t

0xa9d0,	// (0x000299c2) bg_popup_heading_pane_cp1_ParamLimits

0xa9d0,	// (0x000299c2) bg_popup_heading_pane_cp1

0xa95e,	// (0x00029950) list_ai_message_pane_ParamLimits

0xa95e,	// (0x00029950) list_ai_message_pane

0x2efa,	// (0x00021eec) scroll_pane_cp10

0xa8fa,	// (0x000298ec) list_ai_message_pane_g1

0xa902,	// (0x000298f4) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0002e91b) list_ai_message_pane_g

0xa90a,	// (0x000298fc) list_ai_message_pane_t1_ParamLimits

0xa90a,	// (0x000298fc) list_ai_message_pane_t1

0xa91f,	// (0x00029911) list_ai_message_pane_t2_ParamLimits

0xa91f,	// (0x00029911) list_ai_message_pane_t2

0xa934,	// (0x00029926) list_ai_message_pane_t3_ParamLimits

0xa934,	// (0x00029926) list_ai_message_pane_t3

0xa949,	// (0x0002993b) list_ai_message_pane_t4_ParamLimits

0xa949,	// (0x0002993b) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0002e920) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0002e920) list_ai_message_pane_t

0xa8e3,	// (0x000298d5) cell_ai_soft_ind_pane_ParamLimits

0xa8e3,	// (0x000298d5) cell_ai_soft_ind_pane

0x7395,	// (0x00026387) cell_ai_soft_ind_pane_g1_ParamLimits

0x7395,	// (0x00026387) cell_ai_soft_ind_pane_g1

0x117b,	// (0x0002016d) grid_highlight_cp1

0x73a2,	// (0x00026394) text_secondary_cp56_ParamLimits

0x73a2,	// (0x00026394) text_secondary_cp56

0xa8b8,	// (0x000298aa) example_general_pane_ParamLimits

0xa8b8,	// (0x000298aa) example_general_pane

0xa8c4,	// (0x000298b6) example_parent_pane_g1_ParamLimits

0xa8c4,	// (0x000298b6) example_parent_pane_g1

0xa8d0,	// (0x000298c2) example_parent_pane_t1_ParamLimits

0xa8d0,	// (0x000298c2) example_parent_pane_t1

0x7be0,	// (0x00026bd2) popup_preview_text_window_ParamLimits

0x7be0,	// (0x00026bd2) popup_preview_text_window

0x71c8,	// (0x000261ba) list_single_pane_cp2_g4

0x13f2,	// (0x000203e4) bg_popup_preview_window_pane_ParamLimits

0x13f2,	// (0x000203e4) bg_popup_preview_window_pane

0xa60c,	// (0x000295fe) popup_preview_text_window_t1_ParamLimits

0xa60c,	// (0x000295fe) popup_preview_text_window_t1

0xa62a,	// (0x0002961c) popup_preview_text_window_t2_ParamLimits

0xa62a,	// (0x0002961c) popup_preview_text_window_t2

0xa673,	// (0x00029665) popup_preview_text_window_t3_ParamLimits

0xa673,	// (0x00029665) popup_preview_text_window_t3

0xa6b8,	// (0x000296aa) popup_preview_text_window_t4_ParamLimits

0xa6b8,	// (0x000296aa) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0002e8ef) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0002e8ef) popup_preview_text_window_t

0xa736,	// (0x00029728) scroll_pane_cp11

0x96da,	// (0x000286cc) bg_popup_preview_window_pane_g1

0xa5c0,	// (0x000295b2) bg_popup_preview_window_pane_g2

0xa5ca,	// (0x000295bc) bg_popup_preview_window_pane_g3

0xa5d4,	// (0x000295c6) bg_popup_preview_window_pane_g4

0xa5de,	// (0x000295d0) bg_popup_preview_window_pane_g5

0xa5e8,	// (0x000295da) bg_popup_preview_window_pane_g6

0xa5f0,	// (0x000295e2) bg_popup_preview_window_pane_g7

0xa5f8,	// (0x000295ea) bg_popup_preview_window_pane_g8

0x5f80,	// (0x00024f72) aid_popup_width_pane

0x7bbc,	// (0x00026bae) popup_midp_note_alarm_window_ParamLimits

0x7bbc,	// (0x00026bae) popup_midp_note_alarm_window

0x189d,	// (0x0002088f) data_form_pane_ParamLimits

0x53b6,	// (0x000243a8) form_field_data_pane_g1

0x53c0,	// (0x000243b2) form_field_data_pane_t1_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_ParamLimits

0x53da,	// (0x000243cc) data_form_wide_pane_ParamLimits

0x53eb,	// (0x000243dd) form_field_data_wide_pane_g1

0x53f7,	// (0x000243e9) form_field_data_wide_pane_t1_ParamLimits

0x15aa,	// (0x0002059c) input_focus_pane_cp6_ParamLimits

0x6740,	// (0x00025732) input_popup_find_pane_g1_ParamLimits

0x6740,	// (0x00025732) input_popup_find_pane_g1

0x6899,	// (0x0002588b) aid_navi_side_left_pane

0x68ae,	// (0x000258a0) aid_navi_side_right_pane

0x9fd5,	// (0x00028fc7) bg_popup_window_pane_cp30_ParamLimits

0x9fd5,	// (0x00028fc7) bg_popup_window_pane_cp30

0xa04f,	// (0x00029041) popup_midp_note_alarm_window_g1_ParamLimits

0xa04f,	// (0x00029041) popup_midp_note_alarm_window_g1

0xa07f,	// (0x00029071) popup_midp_note_alarm_window_t1_ParamLimits

0xa07f,	// (0x00029071) popup_midp_note_alarm_window_t1

0xa120,	// (0x00029112) popup_midp_note_alarm_window_t2_ParamLimits

0xa120,	// (0x00029112) popup_midp_note_alarm_window_t2

0xa1ce,	// (0x000291c0) popup_midp_note_alarm_window_t3_ParamLimits

0xa1ce,	// (0x000291c0) popup_midp_note_alarm_window_t3

0xa200,	// (0x000291f2) popup_midp_note_alarm_window_t4_ParamLimits

0xa200,	// (0x000291f2) popup_midp_note_alarm_window_t4

0xa226,	// (0x00029218) popup_midp_note_alarm_window_t5_ParamLimits

0xa226,	// (0x00029218) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0002e88c) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0002e88c) popup_midp_note_alarm_window_t

0xa2d2,	// (0x000292c4) wait_bar_pane_cp1_ParamLimits

0xa2d2,	// (0x000292c4) wait_bar_pane_cp1

0x117b,	// (0x0002016d) wait_anim_pane_copy1

0x117b,	// (0x0002016d) wait_border_pane_copy1

0x9cba,	// (0x00028cac) wait_border_pane_g1_copy1

0x5411,	// (0x00024403) form_field_popup_pane_g1

0x5419,	// (0x0002440b) form_field_popup_pane_t1_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_cp7_ParamLimits

0x2da4,	// (0x00021d96) list_form_pane_ParamLimits

0x5433,	// (0x00024425) form_field_popup_wide_pane_g1

0x543b,	// (0x0002442d) form_field_popup_wide_pane_t1_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_cp8_ParamLimits

0x2dca,	// (0x00021dbc) list_form_wide_pane_ParamLimits

0xae22,	// (0x00029e14) aid_size_cell_graphic_pane

0x54c7,	// (0x000244b9) data_form_pane_t1_ParamLimits

0x57b0,	// (0x000247a2) data_form_wide_pane_t1_ParamLimits

0x7f03,	// (0x00026ef5) bg_status_flat_pane

0x63a5,	// (0x00025397) title_pane_t1_ParamLimits

0x1191,	// (0x00020183) title_pane_t2_ParamLimits

0x11b7,	// (0x000201a9) title_pane_t3_ParamLimits

0xf557,	// (0x0002e549) title_pane_t_ParamLimits

0x69ff,	// (0x000259f1) level_1_signal_ParamLimits

0x6a0c,	// (0x000259fe) level_2_signal_ParamLimits

0x6a19,	// (0x00025a0b) level_3_signal_ParamLimits

0x6a26,	// (0x00025a18) level_4_signal_ParamLimits

0x6a33,	// (0x00025a25) level_5_signal_ParamLimits

0x6a40,	// (0x00025a32) level_6_signal_ParamLimits

0x6a4d,	// (0x00025a3f) level_7_signal_ParamLimits

0x69ff,	// (0x000259f1) level_1_battery_ParamLimits

0x6a0c,	// (0x000259fe) level_2_battery_ParamLimits

0x6a19,	// (0x00025a0b) level_3_battery_ParamLimits

0x6a26,	// (0x00025a18) level_4_battery_ParamLimits

0x6a33,	// (0x00025a25) level_5_battery_ParamLimits

0x6a40,	// (0x00025a32) level_6_battery_ParamLimits

0x6a4d,	// (0x00025a3f) level_7_battery_ParamLimits

0x9eda,	// (0x00028ecc) bg_status_flat_pane_g1

0x9ee2,	// (0x00028ed4) bg_status_flat_pane_g2

0x9eea,	// (0x00028edc) bg_status_flat_pane_g3

0x9ef2,	// (0x00028ee4) bg_status_flat_pane_g4

0x9efa,	// (0x00028eec) bg_status_flat_pane_g5

0x9f02,	// (0x00028ef4) bg_status_flat_pane_g6

0x9f0a,	// (0x00028efc) bg_status_flat_pane_g7

0x6415,	// (0x00025407) tabs_3_active_pane_t1_ParamLimits

0x6415,	// (0x00025407) tabs_3_passive_pane_t1_ParamLimits

0x642f,	// (0x00025421) tabs_4_active_pane_t1_ParamLimits

0x642f,	// (0x00025421) tabs_4_1_passive_pane_t1_ParamLimits

0x6756,	// (0x00025748) tabs_2_active_pane_t1_ParamLimits

0x6756,	// (0x00025748) tabs_2_passive_pane_t1_ParamLimits

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp4_ParamLimits

0x6768,	// (0x0002575a) tabs_2_long_active_pane_t1_ParamLimits

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp4_ParamLimits

0x8187,	// (0x00027179) list_single_midp_graphic_pane_t1_ParamLimits

0x36f7,	// (0x000226e9) bg_active_tab_pane_cp5_ParamLimits

0x6787,	// (0x00025779) tabs_3_long_active_pane_t1_ParamLimits

0x677b,	// (0x0002576d) bg_passive_tab_pane_cp5_ParamLimits

0x8187,	// (0x00027179) list_single_midp_graphic_pane_t1

0x7f03,	// (0x00026ef5) bg_status_flat_pane_ParamLimits

0x7fc8,	// (0x00026fba) indicator_pane_cp2_ParamLimits

0x7fc8,	// (0x00026fba) indicator_pane_cp2

0x94a1,	// (0x00028493) navi_pane_srt_ParamLimits

0x94a1,	// (0x00028493) navi_pane_srt

0x94c5,	// (0x000284b7) popup_clock_digital_analogue_window_cp1

0x1235,	// (0x00020227) indicator_pane_t1

0x728d,	// (0x0002627f) copy_highlight_pane

0x728d,	// (0x0002627f) cursor_graphics_pane

0x728d,	// (0x0002627f) graphic_within_text_pane

0x728d,	// (0x0002627f) link_highlight_pane

0xa6f9,	// (0x000296eb) popup_preview_text_window_t5_ParamLimits

0xa6f9,	// (0x000296eb) popup_preview_text_window_t5

0x73be,	// (0x000263b0) cursor_digital_pane

0x73be,	// (0x000263b0) cursor_primary_pane

0x73cf,	// (0x000263c1) cursor_primary_small_pane

0x73d7,	// (0x000263c9) cursor_secondary_pane

0x73df,	// (0x000263d1) cursor_title_pane

0x73be,	// (0x000263b0) link_highlight_digital_pane

0x73c6,	// (0x000263b8) link_highlight_primary_pane

0x73cf,	// (0x000263c1) link_highlight_primary_small_pane

0x73d7,	// (0x000263c9) link_highlight_secondary_pane

0x73df,	// (0x000263d1) link_highlight_title_pane

0x73be,	// (0x000263b0) copy_highlight_digital_pane

0x73be,	// (0x000263b0) copy_highlight_primary_pane

0x73cf,	// (0x000263c1) copy_highlight_primary_small_pane

0x73d7,	// (0x000263c9) copy_highlight_secondary_pane

0x73df,	// (0x000263d1) copy_highlight_title_pane

0x73d7,	// (0x000263c9) graphic_text_digital_pane

0x9f78,	// (0x00028f6a) graphic_text_primary_pane

0x9f81,	// (0x00028f73) graphic_text_primary_small_pane

0x73cf,	// (0x000263c1) graphic_text_secondary_pane

0x73be,	// (0x000263b0) graphic_text_title_pane

0x73e7,	// (0x000263d9) cursor_primary_pane_g1

0x9f6a,	// (0x00028f5c) cursor_text_primary_t1

0x9f52,	// (0x00028f44) cursor_primary_small_pane_g1

0x9f5c,	// (0x00028f4e) cursor_text_primary_small_t1

0x9f3a,	// (0x00028f2c) cursor_primary_small_pane_g1_copy1

0x9f44,	// (0x00028f36) cursor_text_primary_small_t1_copy1

0x9f22,	// (0x00028f14) cursor_text_title_t1

0x9f30,	// (0x00028f22) cursor_title_pane_g1

0x73e7,	// (0x000263d9) cursor_digital_pane_g1

0x73f1,	// (0x000263e3) cursor_text_digital_t1

0x73ff,	// (0x000263f1) link_highlight_primary_pane_g1

0x9ecb,	// (0x00028ebd) link_highlight_primary_pane_t1

0x73ff,	// (0x000263f1) link_highlight_primary_small_pane_g1

0x7407,	// (0x000263f9) link_highlight_primary_small_pane_t1

0x7416,	// (0x00026408) link_highlight_secondary_pane_g1

0x741e,	// (0x00026410) link_highlight_secondary_pane_t1

0x9e3f,	// (0x00028e31) link_highlight_title_pane_g1

0x9e47,	// (0x00028e39) link_highlight_title_pane_t1

0x9e28,	// (0x00028e1a) link_highlight_digital_pane_g1

0x9e30,	// (0x00028e22) link_highlight_digital_pane_t1

0x9cf0,	// (0x00028ce2) copy_highlight_primary_pane_g1

0x9d07,	// (0x00028cf9) copy_highlight_primary_pane_t1

0x9cf0,	// (0x00028ce2) copy_highlight_primary_small_pane_g1

0x9cf8,	// (0x00028cea) copy_highlight_primary_small_pane_t1

0x742d,	// (0x0002641f) copy_highlight_secondary_pane_g1

0x7435,	// (0x00026427) copy_highlight_secondary_pane_t1

0x9cd9,	// (0x00028ccb) copy_highlight_title_pane_g1

0x9ce1,	// (0x00028cd3) copy_highlight_title_pane_t1

0x9cf0,	// (0x00028ce2) copy_highlight_digital_pane_g1

0xaff4,	// (0x00029fe6) copy_highlight_digital_pane_t1

0xaf48,	// (0x00029f3a) graphic_text_primary_pane_g1

0xafd8,	// (0x00029fca) graphic_text_primary_pane_t1

0xafe6,	// (0x00029fd8) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0002e9bb) graphic_text_primary_pane_t

0xafb4,	// (0x00029fa6) graphic_text_primary_small_pane_g1

0xafbc,	// (0x00029fae) graphic_text_primary_small_pane_t1

0xafca,	// (0x00029fbc) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0002e9b6) graphic_text_primary_small_pane_t

0xaf90,	// (0x00029f82) graphic_text_secondary_pane_g1

0xaf98,	// (0x00029f8a) graphic_text_secondary_pane_t1

0xafa6,	// (0x00029f98) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0002e9b1) graphic_text_secondary_pane_t

0xaf6c,	// (0x00029f5e) graphic_text_title_pane_g1

0xaf74,	// (0x00029f66) graphic_text_title_pane_t1

0xaf82,	// (0x00029f74) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0002e9ac) graphic_text_title_pane_t

0xaf48,	// (0x00029f3a) graphic_text_digital_pane_g1

0xaf50,	// (0x00029f42) graphic_text_digital_pane_t1

0xaf5e,	// (0x00029f50) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0002e9a7) graphic_text_digital_pane_t

0x11d7,	// (0x000201c9) navi_icon_pane_srt_ParamLimits

0x11d7,	// (0x000201c9) navi_icon_pane_srt

0x117b,	// (0x0002016d) navi_midp_pane_srt

0x117b,	// (0x0002016d) navi_navi_pane_srt

0x11d7,	// (0x000201c9) navi_text_pane_srt_ParamLimits

0x11d7,	// (0x000201c9) navi_text_pane_srt

0xaf13,	// (0x00029f05) navi_navi_icon_text_pane_srt

0xaf1b,	// (0x00029f0d) navi_navi_pane_srt_g1_ParamLimits

0xaf1b,	// (0x00029f0d) navi_navi_pane_srt_g1

0xaf2d,	// (0x00029f1f) navi_navi_pane_srt_g2_ParamLimits

0xaf2d,	// (0x00029f1f) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0002e9a2) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0002e9a2) navi_navi_pane_srt_g

0xaf3f,	// (0x00029f31) navi_navi_tabs_pane_srt

0xaf13,	// (0x00029f05) navi_navi_text_pane_srt

0xaf13,	// (0x00029f05) navi_navi_volume_pane_srt

0xaf04,	// (0x00029ef6) navi_navi_text_pane_srt_t1

0x8523,	// (0x00027515) navi_navi_volume_pane_srt_g1

0x852b,	// (0x0002751d) volume_small_pane_srt_ParamLimits

0x852b,	// (0x0002751d) volume_small_pane_srt

0x7444,	// (0x00026436) volume_small_pane_srt_g1_ParamLimits

0x7444,	// (0x00026436) volume_small_pane_srt_g1

0x7454,	// (0x00026446) volume_small_pane_srt_g2_ParamLimits

0x7454,	// (0x00026446) volume_small_pane_srt_g2

0x7465,	// (0x00026457) volume_small_pane_srt_g3_ParamLimits

0x7465,	// (0x00026457) volume_small_pane_srt_g3

0x7476,	// (0x00026468) volume_small_pane_srt_g4_ParamLimits

0x7476,	// (0x00026468) volume_small_pane_srt_g4

0x7487,	// (0x00026479) volume_small_pane_srt_g5_ParamLimits

0x7487,	// (0x00026479) volume_small_pane_srt_g5

0x7498,	// (0x0002648a) volume_small_pane_srt_g6_ParamLimits

0x7498,	// (0x0002648a) volume_small_pane_srt_g6

0x74a9,	// (0x0002649b) volume_small_pane_srt_g7_ParamLimits

0x74a9,	// (0x0002649b) volume_small_pane_srt_g7

0x74ba,	// (0x000264ac) volume_small_pane_srt_g8_ParamLimits

0x74ba,	// (0x000264ac) volume_small_pane_srt_g8

0x74cb,	// (0x000264bd) volume_small_pane_srt_g9_ParamLimits

0x74cb,	// (0x000264bd) volume_small_pane_srt_g9

0x74dc,	// (0x000264ce) volume_small_pane_srt_g10_ParamLimits

0x74dc,	// (0x000264ce) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0002e74a) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0002e74a) volume_small_pane_srt_g

0x14a7,	// (0x00020499) query_popup_data_pane_cp2

0xaeea,	// (0x00029edc) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaeea,	// (0x00029edc) navi_navi_icon_text_pane_srt_t1

0x9f78,	// (0x00028f6a) navi_tabs_2_long_pane_srt

0x9f78,	// (0x00028f6a) navi_tabs_2_pane_srt

0x9f78,	// (0x00028f6a) navi_tabs_3_long_pane_srt

0x9f78,	// (0x00028f6a) navi_tabs_3_pane_srt

0x9f78,	// (0x00028f6a) navi_tabs_4_pane_srt

0x8503,	// (0x000274f5) tabs_2_active_pane_srt_ParamLimits

0x8503,	// (0x000274f5) tabs_2_active_pane_srt

0x8513,	// (0x00027505) tabs_2_passive_pane_srt_ParamLimits

0x8513,	// (0x00027505) tabs_2_passive_pane_srt

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp1_srt

0xaeb6,	// (0x00029ea8) bg_passive_tab_pane_g1_cp1_srt

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp1_srt

0xaebf,	// (0x00029eb1) bg_passive_tab_pane_g3_cp1_srt

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp1_srt_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp1_srt

0xaec8,	// (0x00029eba) tabs_2_active_pane_srt_g1

0xaed0,	// (0x00029ec2) tabs_2_active_pane_srt_t1_ParamLimits

0xaed0,	// (0x00029ec2) tabs_2_active_pane_srt_t1

0xaeb6,	// (0x00029ea8) bg_active_tab_pane_g1_cp1_srt

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp1_srt

0xaebf,	// (0x00029eb1) bg_active_tab_pane_g3_cp1_srt

0x84d0,	// (0x000274c2) tabs_3_active_pane_srt_ParamLimits

0x84d0,	// (0x000274c2) tabs_3_active_pane_srt

0x84e1,	// (0x000274d3) tabs_3_passive_pane_cp_srt_ParamLimits

0x84e1,	// (0x000274d3) tabs_3_passive_pane_cp_srt

0x84f2,	// (0x000274e4) tabs_3_passive_pane_srt_ParamLimits

0x84f2,	// (0x000274e4) tabs_3_passive_pane_srt

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x77e3,	// (0x000267d5) bg_passive_tab_pane_cp2_srt

0x74ed,	// (0x000264df) bg_passive_tab_pane_g1_cp2_srt

0x6d98,	// (0x00025d8a) bg_passive_tab_pane_g2_cp2_srt

0x74f6,	// (0x000264e8) bg_passive_tab_pane_g3_cp2_srt

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp2_srt_ParamLimits

0x11d7,	// (0x000201c9) bg_active_tab_pane_cp2_srt

0xae9c,	// (0x00029e8e) tabs_3_active_pane_srt_g1

0xaea4,	// (0x00029e96) tabs_3_active_pane_srt_t1_ParamLimits

0xaea4,	// (0x00029e96) tabs_3_active_pane_srt_t1

0x74ed,	// (0x000264df) bg_active_tab_pane_g1_cp2_srt

0x6d98,	// (0x00025d8a) bg_active_tab_pane_g2_cp2_srt

0x74f6,	// (0x000264e8) bg_active_tab_pane_g3_cp2_srt

0x8488,	// (0x0002747a) tabs_4_active_pane_srt_ParamLimits

0x8488,	// (0x0002747a) tabs_4_active_pane_srt

0x849a,	// (0x0002748c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x849a,	// (0x0002748c) tabs_4_passive_pane_cp2_srt

0x77ab,	// (0x0002679d) aid_size_cell_toolbar

0x677b,	// (0x0002576d) main_idle_act_pane_ParamLimits

0x79e2,	// (0x000269d4) popup_large_graphic_colour_window_ParamLimits

0x7d89,	// (0x00026d7b) popup_toolbar_window_ParamLimits

0x7d89,	// (0x00026d7b) popup_toolbar_window

0x57f4,	// (0x000247e6) list_single_graphic_2heading_pane_ParamLimits

0x57f4,	// (0x000247e6) list_single_graphic_2heading_pane

0x3260,	// (0x00022252) aid_size_cell_apps_grid_lsc_pane

0x3272,	// (0x00022264) aid_size_cell_apps_grid_prt_pane

0x77e3,	// (0x000267d5) bg_wml_button_pane_cp1_ParamLimits

0x77e3,	// (0x000267d5) bg_wml_button_pane_cp1

0x995c,	// (0x0002894e) form_midp_field_text_pane_t1_ParamLimits

0x974e,	// (0x00028740) input_focus_pane_cp050_ParamLimits

0x9987,	// (0x00028979) list_midp_form_text_pane_ParamLimits

0x9939,	// (0x0002892b) input_focus_pane_cp051_ParamLimits

0x994d,	// (0x0002893f) list_midp_choice_pane_ParamLimits

0x9807,	// (0x000287f9) list_single_2graphic_pane_cp3_ParamLimits

0x9807,	// (0x000287f9) list_single_2graphic_pane_cp3

0x981d,	// (0x0002880f) list_single_midp_graphic_pane_ParamLimits

0x981d,	// (0x0002880f) list_single_midp_graphic_pane

0x5603,	// (0x000245f5) list_single_graphic_2heading_pane_g1_ParamLimits

0x5603,	// (0x000245f5) list_single_graphic_2heading_pane_g1

0x560f,	// (0x00024601) list_single_graphic_2heading_pane_g4_ParamLimits

0x560f,	// (0x00024601) list_single_graphic_2heading_pane_g4

0x561b,	// (0x0002460d) list_single_graphic_2heading_pane_g5_ParamLimits

0x561b,	// (0x0002460d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0002e79d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0002e79d) list_single_graphic_2heading_pane_g

0x5627,	// (0x00024619) list_single_graphic_2heading_pane_t1_ParamLimits

0x5627,	// (0x00024619) list_single_graphic_2heading_pane_t1

0x563b,	// (0x0002462d) list_single_graphic_2heading_pane_t2_ParamLimits

0x563b,	// (0x0002462d) list_single_graphic_2heading_pane_t2

0x5657,	// (0x00024649) list_single_graphic_2heading_pane_t3_ParamLimits

0x5657,	// (0x00024649) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002e7a4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002e7a4) list_single_graphic_2heading_pane_t

0x9618,	// (0x0002860a) bg_popup_sub_pane_cp2

0x9642,	// (0x00028634) grid_toobar_pane

0x810b,	// (0x000270fd) cell_toolbar_pane_ParamLimits

0x810b,	// (0x000270fd) cell_toolbar_pane

0x967e,	// (0x00028670) cell_toolbar_pane_g1_ParamLimits

0x967e,	// (0x00028670) cell_toolbar_pane_g1

0x9692,	// (0x00028684) cell_toolbar_pane_g2_ParamLimits

0x9692,	// (0x00028684) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0002e7b2) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0002e7b2) cell_toolbar_pane_g

0x96b4,	// (0x000286a6) grid_highlight_pane_cp2_ParamLimits

0x96b4,	// (0x000286a6) grid_highlight_pane_cp2

0x96ce,	// (0x000286c0) toolbar_button_pane

0x96da,	// (0x000286cc) toolbar_button_pane_g1

0x96e2,	// (0x000286d4) toolbar_button_pane_g2

0x96ea,	// (0x000286dc) toolbar_button_pane_g3

0x96f2,	// (0x000286e4) toolbar_button_pane_g4

0x96fa,	// (0x000286ec) toolbar_button_pane_g5

0x9702,	// (0x000286f4) toolbar_button_pane_g6

0x970a,	// (0x000286fc) toolbar_button_pane_g7

0x9712,	// (0x00028704) toolbar_button_pane_g8

0x971a,	// (0x0002870c) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002e7b7) toolbar_button_pane_g

0x8143,	// (0x00027135) list_single_2graphic_pane_g1_cp3_ParamLimits

0x8143,	// (0x00027135) list_single_2graphic_pane_g1_cp3

0x814f,	// (0x00027141) list_single_2graphic_pane_g2_cp3_ParamLimits

0x814f,	// (0x00027141) list_single_2graphic_pane_g2_cp3

0x70c3,	// (0x000260b5) list_single_2graphic_pane_g3_cp3

0x8160,	// (0x00027152) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8160,	// (0x00027152) list_single_2graphic_pane_g4_cp3

0x816c,	// (0x0002715e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x816c,	// (0x0002715e) list_single_2graphic_pane_t1_cp3

0x70b7,	// (0x000260a9) list_single_midp_graphic_pane_g2_ParamLimits

0x70b7,	// (0x000260a9) list_single_midp_graphic_pane_g2

0x77b3,	// (0x000267a5) aid_zoom_text_primary

0x55f3,	// (0x000245e5) aid_zoom_text_secondary

0x75a7,	// (0x00026599) status_small_pane_g7_ParamLimits

0x75a7,	// (0x00026599) status_small_pane_g7

0x75ca,	// (0x000265bc) status_small_pane_t1_ParamLimits

0x6380,	// (0x00025372) title_pane_g2

0x0003,

0xf54e,	// (0x0002e540) title_pane_g

0x65e9,	// (0x000255db) aid_size_cell_colour_1_pane_ParamLimits

0x65e9,	// (0x000255db) aid_size_cell_colour_1_pane

0x65fd,	// (0x000255ef) aid_size_cell_colour_2_pane_ParamLimits

0x65fd,	// (0x000255ef) aid_size_cell_colour_2_pane

0x6611,	// (0x00025603) aid_size_cell_colour_3_pane_ParamLimits

0x6611,	// (0x00025603) aid_size_cell_colour_3_pane

0x6625,	// (0x00025617) aid_size_cell_colour_4_pane_ParamLimits

0x6625,	// (0x00025617) aid_size_cell_colour_4_pane

0x67d5,	// (0x000257c7) title_pane_stacon_g1_ParamLimits

0x67d5,	// (0x000257c7) title_pane_stacon_g1

0x9d5e,	// (0x00028d50) popup_note_wait_window_g3_ParamLimits

0x9d5e,	// (0x00028d50) popup_note_wait_window_g3

0x9dd5,	// (0x00028dc7) popup_note_wait_window_t5_ParamLimits

0x9dd5,	// (0x00028dc7) popup_note_wait_window_t5

0x117b,	// (0x0002016d) main_feb_china_hwr_fs_writing_pane

0x78a9,	// (0x0002689b) popup_feb_china_hwr_fs_window_ParamLimits

0x78a9,	// (0x0002689b) popup_feb_china_hwr_fs_window

0x819d,	// (0x0002718f) aid_size_cell_hwr_fs_ParamLimits

0x819d,	// (0x0002718f) aid_size_cell_hwr_fs

0x974e,	// (0x00028740) bg_popup_sub_pane_cp3_ParamLimits

0x974e,	// (0x00028740) bg_popup_sub_pane_cp3

0x81b2,	// (0x000271a4) grid_hwr_fs_pane_ParamLimits

0x81b2,	// (0x000271a4) grid_hwr_fs_pane

0x81ca,	// (0x000271bc) linegrid_hwr_fs_pane_ParamLimits

0x81ca,	// (0x000271bc) linegrid_hwr_fs_pane

0x81da,	// (0x000271cc) cell_hwr_fs_pane_ParamLimits

0x81da,	// (0x000271cc) cell_hwr_fs_pane

0x975a,	// (0x0002874c) linegrid_hwr_fs_pane_g1_ParamLimits

0x975a,	// (0x0002874c) linegrid_hwr_fs_pane_g1

0x9766,	// (0x00028758) linegrid_hwr_fs_pane_g2_ParamLimits

0x9766,	// (0x00028758) linegrid_hwr_fs_pane_g2

0x9778,	// (0x0002876a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9778,	// (0x0002876a) linegrid_hwr_fs_pane_g3

0x81fe,	// (0x000271f0) linegrid_hwr_fs_pane_g4_ParamLimits

0x81fe,	// (0x000271f0) linegrid_hwr_fs_pane_g4

0x821c,	// (0x0002720e) linegrid_hwr_fs_pane_g5_ParamLimits

0x821c,	// (0x0002720e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0002e7e2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0002e7e2) linegrid_hwr_fs_pane_g

0x9784,	// (0x00028776) cell_hwr_fs_pane_g1_ParamLimits

0x9784,	// (0x00028776) cell_hwr_fs_pane_g1

0x9553,	// (0x00028545) cell_hwr_fs_pane_g2_ParamLimits

0x9553,	// (0x00028545) cell_hwr_fs_pane_g2

0x979a,	// (0x0002878c) cell_hwr_fs_pane_g3_ParamLimits

0x979a,	// (0x0002878c) cell_hwr_fs_pane_g3

0x97a7,	// (0x00028799) cell_hwr_fs_pane_g4_ParamLimits

0x97a7,	// (0x00028799) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0002e7ed) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002e7ed) cell_hwr_fs_pane_g

0x8232,	// (0x00027224) cell_hwr_fs_pane_t1

0x117b,	// (0x0002016d) grid_highlight_pane_cp6

0x117b,	// (0x0002016d) main_idle_act2_pane

0x2ee1,	// (0x00021ed3) aid_inside_area_popup_secondary

0xa40e,	// (0x00029400) aid_inside_area_window_primary_ParamLimits

0xa40e,	// (0x00029400) aid_inside_area_window_primary

0xb003,	// (0x00029ff5) ai2_news_ticker_pane

0xb00b,	// (0x00029ffd) aid_size_cell_ai1_link_ParamLimits

0xb00b,	// (0x00029ffd) aid_size_cell_ai1_link

0xb025,	// (0x0002a017) popup_ai2_data_window_ParamLimits

0xb025,	// (0x0002a017) popup_ai2_data_window

0xb043,	// (0x0002a035) popup_ai2_link_window_ParamLimits

0xb043,	// (0x0002a035) popup_ai2_link_window

0x974e,	// (0x00028740) bg_popup_sub_pane_cp4_ParamLimits

0x974e,	// (0x00028740) bg_popup_sub_pane_cp4

0xb059,	// (0x0002a04b) grid_ai2_link_pane_ParamLimits

0xb059,	// (0x0002a04b) grid_ai2_link_pane

0xb070,	// (0x0002a062) popup_ai2_link_window_g1_ParamLimits

0xb070,	// (0x0002a062) popup_ai2_link_window_g1

0xb07c,	// (0x0002a06e) popup_ai2_link_window_g2_ParamLimits

0xb07c,	// (0x0002a06e) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0002e9c0) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0002e9c0) popup_ai2_link_window_g

0xb08d,	// (0x0002a07f) ai2_mp_button_pane

0xb095,	// (0x0002a087) ai2_mp_volume_pane

0x9939,	// (0x0002892b) bg_popup_sub_pane_cp5_ParamLimits

0x9939,	// (0x0002892b) bg_popup_sub_pane_cp5

0xb09d,	// (0x0002a08f) heading_ai2_gene_pane_ParamLimits

0xb09d,	// (0x0002a08f) heading_ai2_gene_pane

0xb0a9,	// (0x0002a09b) list_ai2_gene_pane_ParamLimits

0xb0a9,	// (0x0002a09b) list_ai2_gene_pane

0xb0f1,	// (0x0002a0e3) cell_ai2_link_pane_ParamLimits

0xb0f1,	// (0x0002a0e3) cell_ai2_link_pane

0xb107,	// (0x0002a0f9) cell_ai2_link_pane_g1

0x117b,	// (0x0002016d) grid_highlight_pane_cp7

0x8540,	// (0x00027532) ai2_mp_volume_pane_g1

0xb1da,	// (0x0002a1cc) ai2_mp_volume_pane_g2

0xb14f,	// (0x0002a141) list_ai2_gene_pane_t1

0xb1e2,	// (0x0002a1d4) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0002e9d9) ai2_mp_volume_pane_g

0x8548,	// (0x0002753a) volume_small_pane_cp3

0xb1ea,	// (0x0002a1dc) aid_size_cell_ai2_button

0xb1f2,	// (0x0002a1e4) grid_ai2_button_pane

0xb1fb,	// (0x0002a1ed) cell_ai2_button_pane_ParamLimits

0xb1fb,	// (0x0002a1ed) cell_ai2_button_pane

0x1171,	// (0x00020163) cell_ai2_button_pane_g1

0x117b,	// (0x0002016d) grid_highlight_pane_cp8

0xb19a,	// (0x0002a18c) ai2_gene_pane_t1_ParamLimits

0xb19a,	// (0x0002a18c) ai2_gene_pane_t1

0x77a1,	// (0x00026793) aid_height_parent_landscape

0xaa93,	// (0x00029a85) aid_height_set_list

0xaaa4,	// (0x00029a96) aid_size_parent

0xae22,	// (0x00029e14) aid_size_cell_graphic_pane_ParamLimits

0xb0b9,	// (0x0002a0ab) popup_ai2_data_window_g1_ParamLimits

0xb0b9,	// (0x0002a0ab) popup_ai2_data_window_g1

0xb0c5,	// (0x0002a0b7) ai2_news_ticker_pane_g1

0xb0cd,	// (0x0002a0bf) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0002e9c5) ai2_news_ticker_pane_g

0xb0d5,	// (0x0002a0c7) ai2_news_ticker_pane_t1

0xb0e3,	// (0x0002a0d5) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0002e9ca) ai2_news_ticker_pane_t

0xb110,	// (0x0002a102) heading_ai2_gene_pane_g1

0xb118,	// (0x0002a10a) heading_ai2_gene_pane_t1_ParamLimits

0xb118,	// (0x0002a10a) heading_ai2_gene_pane_t1

0xb12d,	// (0x0002a11f) list_highlight_pane_cp6

0xb135,	// (0x0002a127) ai2_gene_pane_ParamLimits

0xb135,	// (0x0002a127) ai2_gene_pane

0xb15d,	// (0x0002a14f) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0002e9cf) list_ai2_gene_pane_t

0xb16b,	// (0x0002a15d) list_highlight_pane_cp8_ParamLimits

0xb16b,	// (0x0002a15d) list_highlight_pane_cp8

0xb17c,	// (0x0002a16e) ai2_gene_pane_g1_ParamLimits

0xb17c,	// (0x0002a16e) ai2_gene_pane_g1

0xb18e,	// (0x0002a180) ai2_gene_pane_g2_ParamLimits

0xb18e,	// (0x0002a180) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0002e9d4) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0002e9d4) ai2_gene_pane_g

0x17c5,	// (0x000207b7) scroll_pane_cp12

0x7756,	// (0x00026748) control_pane_t3_ParamLimits

0x7756,	// (0x00026748) control_pane_t3

0x75bb,	// (0x000265ad) status_small_pane_g8_ParamLimits

0x75bb,	// (0x000265ad) status_small_pane_g8

0x79a7,	// (0x00026999) popup_find_window_ParamLimits

0x7bd2,	// (0x00026bc4) popup_note_image_window_ParamLimits

0x566f,	// (0x00024661) list_double2_graphic_pane_vc_g1_ParamLimits

0x566f,	// (0x00024661) list_double2_graphic_pane_vc_g1

0x567b,	// (0x0002466d) list_double2_graphic_pane_vc_g2_ParamLimits

0x567b,	// (0x0002466d) list_double2_graphic_pane_vc_g2

0x5687,	// (0x00024679) list_double2_graphic_pane_vc_g3_ParamLimits

0x5687,	// (0x00024679) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0002e7ab) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0002e7ab) list_double2_graphic_pane_vc_g

0x5693,	// (0x00024685) list_double2_graphic_pane_vc_t1_ParamLimits

0x5693,	// (0x00024685) list_double2_graphic_pane_vc_t1

0x560f,	// (0x00024601) list_single_heading_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_single_heading_pane_vc_g1

0x561b,	// (0x0002460d) list_single_heading_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_single_heading_pane_vc_g

0x56a9,	// (0x0002469b) list_single_heading_pane_vc_t1_ParamLimits

0x56a9,	// (0x0002469b) list_single_heading_pane_vc_t1

0x56bf,	// (0x000246b1) list_single_heading_pane_vc_t2_ParamLimits

0x56bf,	// (0x000246b1) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0002e7d1) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0002e7d1) list_single_heading_pane_vc_t

0x56d1,	// (0x000246c3) list_setting_number_pane_vc_g1_ParamLimits

0x56d1,	// (0x000246c3) list_setting_number_pane_vc_g1

0x56dd,	// (0x000246cf) list_setting_number_pane_vc_g2_ParamLimits

0x56dd,	// (0x000246cf) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002e7d6) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002e7d6) list_setting_number_pane_vc_g

0x56e9,	// (0x000246db) list_setting_number_pane_vc_t1_ParamLimits

0x56e9,	// (0x000246db) list_setting_number_pane_vc_t1

0x56fd,	// (0x000246ef) list_setting_number_pane_vc_t2_ParamLimits

0x56fd,	// (0x000246ef) list_setting_number_pane_vc_t2

0x5719,	// (0x0002470b) list_setting_number_pane_vc_t3_ParamLimits

0x5719,	// (0x0002470b) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0002e7db) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0002e7db) list_setting_number_pane_vc_t

0x5747,	// (0x00024739) set_value_pane_vc_ParamLimits

0x5747,	// (0x00024739) set_value_pane_vc

0x57f4,	// (0x000247e6) list_double2_graphic_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double2_graphic_pane_vc

0xac8b,	// (0x00029c7d) list_double2_large_graphic_pane_vc_ParamLimits

0xac8b,	// (0x00029c7d) list_double2_large_graphic_pane_vc

0x57f4,	// (0x000247e6) list_double2_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double2_pane_vc

0x57f4,	// (0x000247e6) list_double_graphic_heading_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_graphic_heading_pane_vc

0x57f4,	// (0x000247e6) list_double_graphic_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_graphic_pane_vc

0x57f4,	// (0x000247e6) list_double_heading_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_heading_pane_vc

0xac9f,	// (0x00029c91) list_double_large_graphic_pane_vc_ParamLimits

0xac9f,	// (0x00029c91) list_double_large_graphic_pane_vc

0x57f4,	// (0x000247e6) list_double_number_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_number_pane_vc

0x57f4,	// (0x000247e6) list_double_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_pane_vc

0x57f4,	// (0x000247e6) list_double_time_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_double_time_pane_vc

0x57f4,	// (0x000247e6) list_setting_number_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_setting_number_pane_vc

0x57f4,	// (0x000247e6) list_setting_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_setting_pane_vc

0x57f4,	// (0x000247e6) list_single_graphic_heading_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_single_graphic_heading_pane_vc

0x57f4,	// (0x000247e6) list_single_heading_pane_vc_ParamLimits

0x57f4,	// (0x000247e6) list_single_heading_pane_vc

0xacc1,	// (0x00029cb3) list_single_number_heading_pane_vc_ParamLimits

0xacc1,	// (0x00029cb3) list_single_number_heading_pane_vc

0x566f,	// (0x00024661) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x566f,	// (0x00024661) list_double_graphic_heading_pane_vc_g1

0x560f,	// (0x00024601) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x560f,	// (0x00024601) list_double_graphic_heading_pane_vc_g2

0x561b,	// (0x0002460d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x561b,	// (0x0002460d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0002e9e0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002e9e0) list_double_graphic_heading_pane_vc_g

0x5824,	// (0x00024816) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5824,	// (0x00024816) list_double_graphic_heading_pane_vc_t1

0x583a,	// (0x0002482c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x583a,	// (0x0002482c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0002e9e7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0002e9e7) list_double_graphic_heading_pane_vc_t

0x56d1,	// (0x000246c3) list_setting_pane_vc_g1_ParamLimits

0x56d1,	// (0x000246c3) list_setting_pane_vc_g1

0x56dd,	// (0x000246cf) list_setting_pane_vc_g2_ParamLimits

0x56dd,	// (0x000246cf) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0002e7d6) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0002e7d6) list_setting_pane_vc_g

0x5858,	// (0x0002484a) list_setting_pane_vc_t1_ParamLimits

0x5858,	// (0x0002484a) list_setting_pane_vc_t1

0x5874,	// (0x00024866) list_setting_pane_vc_t2_ParamLimits

0x5874,	// (0x00024866) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0002ea15) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0002ea15) list_setting_pane_vc_t

0x5747,	// (0x00024739) set_value_pane_cp_vc_ParamLimits

0x5747,	// (0x00024739) set_value_pane_cp_vc

0x560f,	// (0x00024601) list_single_number_heading_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_single_number_heading_pane_vc_g1

0x561b,	// (0x0002460d) list_single_number_heading_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_single_number_heading_pane_vc_g

0x5890,	// (0x00024882) list_single_number_heading_pane_vc_t1_ParamLimits

0x5890,	// (0x00024882) list_single_number_heading_pane_vc_t1

0x58a6,	// (0x00024898) list_single_number_heading_pane_vc_t2_ParamLimits

0x58a6,	// (0x00024898) list_single_number_heading_pane_vc_t2

0x58b8,	// (0x000248aa) list_single_number_heading_pane_vc_t3_ParamLimits

0x58b8,	// (0x000248aa) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0002ea1a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0002ea1a) list_single_number_heading_pane_vc_t

0x566f,	// (0x00024661) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x566f,	// (0x00024661) list_single_graphic_heading_pane_vc_g1

0x560f,	// (0x00024601) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x560f,	// (0x00024601) list_single_graphic_heading_pane_vc_g4

0x561b,	// (0x0002460d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x561b,	// (0x0002460d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x0002e9e0) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0002e9e0) list_single_graphic_heading_pane_vc_g

0x5890,	// (0x00024882) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5890,	// (0x00024882) list_single_graphic_heading_pane_vc_t1

0x58ca,	// (0x000248bc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x58ca,	// (0x000248bc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0002ea21) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0002ea21) list_single_graphic_heading_pane_vc_t

0x560f,	// (0x00024601) list_double2_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_double2_pane_vc_g1

0x561b,	// (0x0002460d) list_double2_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_double2_pane_vc_g

0x58dc,	// (0x000248ce) list_double2_pane_vc_t1_ParamLimits

0x58dc,	// (0x000248ce) list_double2_pane_vc_t1

0x58f2,	// (0x000248e4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x58f2,	// (0x000248e4) list_double2_large_graphic_pane_vc_g1

0x58fe,	// (0x000248f0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x58fe,	// (0x000248f0) list_double2_large_graphic_pane_vc_g2

0x590a,	// (0x000248fc) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x590a,	// (0x000248fc) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0002ea26) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0002ea26) list_double2_large_graphic_pane_vc_g

0x5916,	// (0x00024908) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5916,	// (0x00024908) list_double2_large_graphic_pane_vc_t1

0x592c,	// (0x0002491e) list_double_time_pane_vc_g1_ParamLimits

0x592c,	// (0x0002491e) list_double_time_pane_vc_g1

0x5938,	// (0x0002492a) list_double_time_pane_vc_g2_ParamLimits

0x5938,	// (0x0002492a) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0002ea2d) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0002ea2d) list_double_time_pane_vc_g

0x5944,	// (0x00024936) list_double_time_pane_vc_t1_ParamLimits

0x5944,	// (0x00024936) list_double_time_pane_vc_t1

0x596e,	// (0x00024960) list_double_time_pane_vc_t2_ParamLimits

0x596e,	// (0x00024960) list_double_time_pane_vc_t2

0x59b7,	// (0x000249a9) list_double_time_pane_vc_t3_ParamLimits

0x59b7,	// (0x000249a9) list_double_time_pane_vc_t3

0x59c9,	// (0x000249bb) list_double_time_pane_vc_t4_ParamLimits

0x59c9,	// (0x000249bb) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0002ea32) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0002ea32) list_double_time_pane_vc_t

0x560f,	// (0x00024601) list_double_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_double_pane_vc_g1

0x561b,	// (0x0002460d) list_double_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_double_pane_vc_g

0x59dd,	// (0x000249cf) list_double_pane_vc_t1_ParamLimits

0x59dd,	// (0x000249cf) list_double_pane_vc_t1

0x59f1,	// (0x000249e3) list_double_pane_vc_t2_ParamLimits

0x59f1,	// (0x000249e3) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ea3b) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ea3b) list_double_pane_vc_t

0x560f,	// (0x00024601) list_double_number_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_double_number_pane_vc_g1

0x561b,	// (0x0002460d) list_double_number_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_double_number_pane_vc_g

0x5a07,	// (0x000249f9) list_double_number_pane_vc_t1_ParamLimits

0x5a07,	// (0x000249f9) list_double_number_pane_vc_t1

0x5a19,	// (0x00024a0b) list_double_number_pane_vc_t2_ParamLimits

0x5a19,	// (0x00024a0b) list_double_number_pane_vc_t2

0x59f1,	// (0x000249e3) list_double_number_pane_vc_t3_ParamLimits

0x59f1,	// (0x000249e3) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0002ea40) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ea40) list_double_number_pane_vc_t

0x5a2d,	// (0x00024a1f) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a2d,	// (0x00024a1f) list_double_large_graphic_pane_vc_g1

0x5a4f,	// (0x00024a41) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a4f,	// (0x00024a41) list_double_large_graphic_pane_vc_g2

0x5a63,	// (0x00024a55) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5a63,	// (0x00024a55) list_double_large_graphic_pane_vc_g3

0x5a72,	// (0x00024a64) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a72,	// (0x00024a64) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0002ea47) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0002ea47) list_double_large_graphic_pane_vc_g

0x5a81,	// (0x00024a73) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a81,	// (0x00024a73) list_double_large_graphic_pane_vc_t1

0x5a9d,	// (0x00024a8f) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5a9d,	// (0x00024a8f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0002ea50) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0002ea50) list_double_large_graphic_pane_vc_t

0x560f,	// (0x00024601) list_double_heading_pane_vc_g1_ParamLimits

0x560f,	// (0x00024601) list_double_heading_pane_vc_g1

0x561b,	// (0x0002460d) list_double_heading_pane_vc_g2_ParamLimits

0x561b,	// (0x0002460d) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0002e7cc) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0002e7cc) list_double_heading_pane_vc_g

0x5abd,	// (0x00024aaf) list_double_heading_pane_vc_t1_ParamLimits

0x5abd,	// (0x00024aaf) list_double_heading_pane_vc_t1

0x5acf,	// (0x00024ac1) list_double_heading_pane_vc_t2_ParamLimits

0x5acf,	// (0x00024ac1) list_double_heading_pane_vc_t2

0x0001,

0xfa63,	// (0x0002ea55) list_double_heading_pane_vc_t_ParamLimits

0xfa63,	// (0x0002ea55) list_double_heading_pane_vc_t

0x5ae7,	// (0x00024ad9) list_double_graphic_pane_vc_g1_ParamLimits

0x5ae7,	// (0x00024ad9) list_double_graphic_pane_vc_g1

0x5afa,	// (0x00024aec) list_double_graphic_pane_vc_g2_ParamLimits

0x5afa,	// (0x00024aec) list_double_graphic_pane_vc_g2

0x560f,	// (0x00024601) list_double_graphic_pane_vc_g3_ParamLimits

0x560f,	// (0x00024601) list_double_graphic_pane_vc_g3

0x0003,

0xfa68,	// (0x0002ea5a) list_double_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0002ea5a) list_double_graphic_pane_vc_g

0x5b17,	// (0x00024b09) list_double_graphic_pane_vc_t1_ParamLimits

0x5b17,	// (0x00024b09) list_double_graphic_pane_vc_t1

0x5b41,	// (0x00024b33) list_double_graphic_pane_vc_t2_ParamLimits

0x5b41,	// (0x00024b33) list_double_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0002ea63) list_double_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0002ea63) list_double_graphic_pane_vc_t

0x5f8c,	// (0x00024f7e) aid_size_cell_fastswap

0x5f94,	// (0x00024f86) aid_size_cell_touch_ParamLimits

0x5f94,	// (0x00024f86) aid_size_cell_touch

0x61f5,	// (0x000251e7) popup_fast_swap_wide_window_ParamLimits

0x61f5,	// (0x000251e7) popup_fast_swap_wide_window

0x6313,	// (0x00025305) touch_pane_ParamLimits

0x6313,	// (0x00025305) touch_pane

0x183e,	// (0x00020830) button_value_adjust_pane_cp2

0x52fa,	// (0x000242ec) button_value_adjust_pane_cp4

0x5320,	// (0x00024312) form_field_data_pane_cp2

0x5343,	// (0x00024335) form_field_data_wide_pane_cp2

0x32a1,	// (0x00022293) bg_scroll_pane_ParamLimits

0x69d6,	// (0x000259c8) scroll_handle_pane_ParamLimits

0x69ea,	// (0x000259dc) scroll_sc2_down_pane_ParamLimits

0x69ea,	// (0x000259dc) scroll_sc2_down_pane

0x32fb,	// (0x000222ed) scroll_sc2_up_pane_ParamLimits

0x32fb,	// (0x000222ed) scroll_sc2_up_pane

0xb8e4,	// (0x0002a8d6) grid_wheel_folder_pane_g1_ParamLimits

0xb8e4,	// (0x0002a8d6) grid_wheel_folder_pane_g1

0x6edf,	// (0x00025ed1) clock_nsta_pane_cp2_ParamLimits

0x6edf,	// (0x00025ed1) clock_nsta_pane_cp2

0x7295,	// (0x00026287) listscroll_midp_pane_ParamLimits

0x72a1,	// (0x00026293) midp_canvas_pane

0x7799,	// (0x0002678b) nsta_clock_indic_pane

0x77ef,	// (0x000267e1) listscroll_form_pane_vc

0x7813,	// (0x00026805) listscroll_set_pane_vc_ParamLimits

0x7813,	// (0x00026805) listscroll_set_pane_vc

0x7f1f,	// (0x00026f11) clock_nsta_pane

0x7f96,	// (0x00026f88) indicator_nsta_pane

0x9618,	// (0x0002860a) bg_popup_sub_pane_cp2_ParamLimits

0x962c,	// (0x0002861e) find_pane_cp2_ParamLimits

0x962c,	// (0x0002861e) find_pane_cp2

0x9642,	// (0x00028634) grid_toobar_pane_ParamLimits

0x9722,	// (0x00028714) list_form_gen_pane_vc_ParamLimits

0x9722,	// (0x00028714) list_form_gen_pane_vc

0x9738,	// (0x0002872a) scroll_pane_cp8_vc_ParamLimits

0x9738,	// (0x0002872a) scroll_pane_cp8_vc

0x97b4,	// (0x000287a6) data_form_wide_pane_vc_ParamLimits

0x97b4,	// (0x000287a6) data_form_wide_pane_vc

0x97c0,	// (0x000287b2) form_field_data_wide_pane_vc_g1

0x97c8,	// (0x000287ba) form_field_data_wide_pane_vc_t1_ParamLimits

0x97c8,	// (0x000287ba) form_field_data_wide_pane_vc_t1

0x18a9,	// (0x0002089b) input_focus_pane_cp6_vc_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_cp6_vc

0x9ac4,	// (0x00028ab6) list_midp_pane_ParamLimits

0x9ad0,	// (0x00028ac2) scroll_pane_cp16_ParamLimits

0x9ad0,	// (0x00028ac2) scroll_pane_cp16

0x9b32,	// (0x00028b24) button_value_adjust_pane_ParamLimits

0x9b32,	// (0x00028b24) button_value_adjust_pane

0xaab6,	// (0x00029aa8) button_value_adjust_pane_cp6_ParamLimits

0xaab6,	// (0x00029aa8) button_value_adjust_pane_cp6

0xabfe,	// (0x00029bf0) settings_code_pane_cp_ParamLimits

0xabfe,	// (0x00029bf0) settings_code_pane_cp

0x1171,	// (0x00020163) cell_touch_pane_g1

0x1171,	// (0x00020163) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0002e6f0) cell_touch_pane_g

0xb20d,	// (0x0002a1ff) cell_touch_pane_cp_ParamLimits

0xb20d,	// (0x0002a1ff) cell_touch_pane_cp

0xb21d,	// (0x0002a20f) cell_touch_pane_ParamLimits

0xb21d,	// (0x0002a20f) cell_touch_pane

0x1171,	// (0x00020163) scroll_sc2_down_pane_g1

0x1171,	// (0x00020163) scroll_sc2_up_pane_g1

0x117b,	// (0x0002016d) bg_set_opt_pane_cp4_vc

0xb22e,	// (0x0002a220) list_set_graphic_pane_vc_g1_ParamLimits

0xb22e,	// (0x0002a220) list_set_graphic_pane_vc_g1

0xb23a,	// (0x0002a22c) list_set_graphic_pane_vc_g2_ParamLimits

0xb23a,	// (0x0002a22c) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0002e9ec) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0002e9ec) list_set_graphic_pane_vc_g

0xb246,	// (0x0002a238) text_primary_small_cp13_vc_ParamLimits

0xb246,	// (0x0002a238) text_primary_small_cp13_vc

0x6f75,	// (0x00025f67) list_set_graphic_pane_vc_ParamLimits

0x6f75,	// (0x00025f67) list_set_graphic_pane_vc

0x117b,	// (0x0002016d) input_focus_pane_cp2_vc

0x1171,	// (0x00020163) setting_code_pane_vc_g1

0x11ee,	// (0x000201e0) setting_code_pane_vc_t1

0xb25e,	// (0x0002a250) set_text_pane_vc_t1_ParamLimits

0xb25e,	// (0x0002a250) set_text_pane_vc_t1

0x117b,	// (0x0002016d) input_focus_pane_cp1_vc

0xb27c,	// (0x0002a26e) list_set_text_pane_vc

0x1171,	// (0x00020163) setting_text_pane_vc_g1

0x117b,	// (0x0002016d) bg_set_opt_pane_cp2_vc

0x11e5,	// (0x000201d7) setting_slider_graphic_pane_vc_g1

0xb286,	// (0x0002a278) setting_slider_graphic_pane_vc_t1

0xb298,	// (0x0002a28a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0002e9f1) setting_slider_graphic_pane_vc_t

0xb2aa,	// (0x0002a29c) slider_set_pane_cp_vc

0xb2b4,	// (0x0002a2a6) slider_set_pane_vc_g1

0xb2bd,	// (0x0002a2af) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0002e9f6) slider_set_pane_vc_g

0x2dfa,	// (0x00021dec) set_opt_bg_pane_g1_copy1

0x2e02,	// (0x00021df4) set_opt_bg_pane_g2_copy1

0xb2e9,	// (0x0002a2db) set_opt_bg_pane_g3_copy1

0x2e12,	// (0x00021e04) set_opt_bg_pane_g4_copy1

0x2e1a,	// (0x00021e0c) set_opt_bg_pane_g5_copy1

0x2e22,	// (0x00021e14) set_opt_bg_pane_g6_copy1

0xb2f3,	// (0x0002a2e5) set_opt_bg_pane_g7_copy1

0xb2fd,	// (0x0002a2ef) set_opt_bg_pane_g8_copy1

0xb307,	// (0x0002a2f9) set_opt_bg_pane_g9_copy1

0x117b,	// (0x0002016d) bg_set_opt_pane_cp_vc

0xb311,	// (0x0002a303) setting_slider_pane_vc_t1

0xb320,	// (0x0002a312) setting_slider_pane_vc_t2

0xb332,	// (0x0002a324) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0002ea05) setting_slider_pane_vc_t

0xb344,	// (0x0002a336) slider_set_pane_vc

0x8240,	// (0x00027232) volume_set_pane_vc_g1

0x8249,	// (0x0002723b) volume_set_pane_vc_g2

0x8252,	// (0x00027244) volume_set_pane_vc_g3

0x825b,	// (0x0002724d) volume_set_pane_vc_g4

0x8264,	// (0x00027256) volume_set_pane_vc_g5

0x826d,	// (0x0002725f) volume_set_pane_vc_g6

0x8276,	// (0x00027268) volume_set_pane_vc_g7

0x827f,	// (0x00027271) volume_set_pane_vc_g8

0x8288,	// (0x0002727a) volume_set_pane_vc_g9

0x8291,	// (0x00027283) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0002e8a3) volume_set_pane_vc_g

0xb34c,	// (0x0002a33e) volume_set_pane_vc

0xb356,	// (0x0002a348) button_value_adjust_pane_cp1_vc

0xb360,	// (0x0002a352) list_highlight_pane_cp2_vc

0xb369,	// (0x0002a35b) list_set_pane_vc_ParamLimits

0xb369,	// (0x0002a35b) list_set_pane_vc

0xb3d7,	// (0x0002a3c9) main_pane_set_vc_t1_ParamLimits

0xb3d7,	// (0x0002a3c9) main_pane_set_vc_t1

0xb3ec,	// (0x0002a3de) main_pane_set_vc_t2_ParamLimits

0xb3ec,	// (0x0002a3de) main_pane_set_vc_t2

0xb3fe,	// (0x0002a3f0) main_pane_set_vc_t3_ParamLimits

0xb3fe,	// (0x0002a3f0) main_pane_set_vc_t3

0xb412,	// (0x0002a404) main_pane_set_vc_t4_ParamLimits

0xb412,	// (0x0002a404) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0002ea0c) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0002ea0c) main_pane_set_vc_t

0xb426,	// (0x0002a418) setting_code_pane_vc_ParamLimits

0xb426,	// (0x0002a418) setting_code_pane_vc

0xb437,	// (0x0002a429) setting_slider_graphic_pane_vc

0xb437,	// (0x0002a429) setting_slider_pane_vc

0xb437,	// (0x0002a429) setting_text_pane_vc

0xb437,	// (0x0002a429) setting_volume_pane_vc

0xb441,	// (0x0002a433) scroll_pane_cp121_vc

0x182c,	// (0x0002081e) set_content_pane_vc

0xb449,	// (0x0002a43b) button_value_adjust_pane_g1

0xb452,	// (0x0002a444) button_value_adjust_pane_g2

0x0001,

0xfa76,	// (0x0002ea68) button_value_adjust_pane_g

0xb45b,	// (0x0002a44d) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb45b,	// (0x0002a44d) form_field_slider_wide_pane_vc_t1

0xb46d,	// (0x0002a45f) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb46d,	// (0x0002a45f) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7b,	// (0x0002ea6d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x0002ea6d) form_field_slider_wide_pane_vc_t

0x11c9,	// (0x000201bb) input_focus_pane_cp10_vc_ParamLimits

0x11c9,	// (0x000201bb) input_focus_pane_cp10_vc

0xb499,	// (0x0002a48b) slider_cont_pane_cp1_vc_ParamLimits

0xb499,	// (0x0002a48b) slider_cont_pane_cp1_vc

0xb4ab,	// (0x0002a49d) slider_form_pane_g1_cp2

0xb2bd,	// (0x0002a2af) slider_form_pane_g2_cp2

0xb4d8,	// (0x0002a4ca) form_field_slider_pane_vc_t3

0xb4e6,	// (0x0002a4d8) form_field_slider_pane_vc_t4

0xb4f4,	// (0x0002a4e6) slider_form_pane_vc_ParamLimits

0xb4f4,	// (0x0002a4e6) slider_form_pane_vc

0xb501,	// (0x0002a4f3) form_field_slider_pane_vc_t1_ParamLimits

0xb501,	// (0x0002a4f3) form_field_slider_pane_vc_t1

0xb46d,	// (0x0002a45f) form_field_slider_pane_vc_t2_ParamLimits

0xb46d,	// (0x0002a45f) form_field_slider_pane_vc_t2

0x0001,

0xfa8d,	// (0x0002ea7f) form_field_slider_pane_vc_t_ParamLimits

0xfa8d,	// (0x0002ea7f) form_field_slider_pane_vc_t

0x11c9,	// (0x000201bb) input_focus_pane_cp9_vc_ParamLimits

0x11c9,	// (0x000201bb) input_focus_pane_cp9_vc

0xb517,	// (0x0002a509) slider_cont_pane_vc_ParamLimits

0xb517,	// (0x0002a509) slider_cont_pane_vc

0xb52b,	// (0x0002a51d) list_form_graphic_pane_cp_vc_ParamLimits

0xb52b,	// (0x0002a51d) list_form_graphic_pane_cp_vc

0x97c0,	// (0x000287b2) form_field_popup_wide_pane_vc_g1

0xb540,	// (0x0002a532) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb540,	// (0x0002a532) form_field_popup_wide_pane_vc_t1

0x18a9,	// (0x0002089b) input_focus_pane_cp8_vc_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_cp8_vc

0xb585,	// (0x0002a577) list_form_wide_pane_vc_ParamLimits

0xb585,	// (0x0002a577) list_form_wide_pane_vc

0xb591,	// (0x0002a583) list_form_graphic_pane_vc_g1

0xb599,	// (0x0002a58b) list_form_graphic_pane_vc_t1_ParamLimits

0xb599,	// (0x0002a58b) list_form_graphic_pane_vc_t1

0x11d7,	// (0x000201c9) list_highlight_pane_cp5_vc_ParamLimits

0x11d7,	// (0x000201c9) list_highlight_pane_cp5_vc

0xb5b5,	// (0x0002a5a7) list_form_graphic_pane_vc_ParamLimits

0xb5b5,	// (0x0002a5a7) list_form_graphic_pane_vc

0x97c0,	// (0x000287b2) form_field_popup_pane_vc_g1

0xb5cb,	// (0x0002a5bd) form_field_popup_pane_vc_t1_ParamLimits

0xb5cb,	// (0x0002a5bd) form_field_popup_pane_vc_t1

0x18a9,	// (0x0002089b) input_focus_pane_cp7_vc_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_cp7_vc

0xb5e2,	// (0x0002a5d4) list_form_pane_vc_ParamLimits

0xb5e2,	// (0x0002a5d4) list_form_pane_vc

0xb5ee,	// (0x0002a5e0) data_form_pane_vc_t1_ParamLimits

0xb5ee,	// (0x0002a5e0) data_form_pane_vc_t1

0x2dfa,	// (0x00021dec) input_focus_pane_vc_g1

0x2e02,	// (0x00021df4) input_focus_pane_vc_g2

0x2e0a,	// (0x00021dfc) input_focus_pane_vc_g3

0x2e12,	// (0x00021e04) input_focus_pane_vc_g4

0x2e1a,	// (0x00021e0c) input_focus_pane_vc_g5

0x2e22,	// (0x00021e14) input_focus_pane_vc_g6

0x2e2a,	// (0x00021e1c) input_focus_pane_vc_g7

0x2e32,	// (0x00021e24) input_focus_pane_vc_g8

0x2e3a,	// (0x00021e2c) input_focus_pane_vc_g9

0x1171,	// (0x00020163) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0002e679) input_focus_pane_vc_g

0x97b4,	// (0x000287a6) data_form_pane_vc_ParamLimits

0x97b4,	// (0x000287a6) data_form_pane_vc

0x97c0,	// (0x000287b2) form_field_data_pane_vc_g1

0xb60b,	// (0x0002a5fd) form_field_data_pane_vc_t1_ParamLimits

0xb60b,	// (0x0002a5fd) form_field_data_pane_vc_t1

0x18a9,	// (0x0002089b) input_focus_pane_vc_ParamLimits

0x18a9,	// (0x0002089b) input_focus_pane_vc

0xb625,	// (0x0002a617) button_value_adjust_pane_cp3_vc

0xb62d,	// (0x0002a61f) button_value_adjust_pane_cp5_vc

0xb635,	// (0x0002a627) form_field_data_pane_vc_ParamLimits

0xb635,	// (0x0002a627) form_field_data_pane_vc

0xb650,	// (0x0002a642) form_field_data_pane_vc_cp2

0xb658,	// (0x0002a64a) form_field_data_wide_pane_vc_ParamLimits

0xb658,	// (0x0002a64a) form_field_data_wide_pane_vc

0xb672,	// (0x0002a664) form_field_data_wide_pane_vc_cp2

0xb67a,	// (0x0002a66c) form_field_popup_pane_vc_ParamLimits

0xb67a,	// (0x0002a66c) form_field_popup_pane_vc

0xb695,	// (0x0002a687) form_field_popup_wide_pane_vc_ParamLimits

0xb695,	// (0x0002a687) form_field_popup_wide_pane_vc

0xb6af,	// (0x0002a6a1) form_field_slider_pane_vc_ParamLimits

0xb6af,	// (0x0002a6a1) form_field_slider_pane_vc

0xb6c2,	// (0x0002a6b4) form_field_slider_wide_pane_vc_ParamLimits

0xb6c2,	// (0x0002a6b4) form_field_slider_wide_pane_vc

0xb6d5,	// (0x0002a6c7) grid_touch_1_pane_ParamLimits

0xb6d5,	// (0x0002a6c7) grid_touch_1_pane

0xb6e1,	// (0x0002a6d3) grid_touch_2_pane_ParamLimits

0xb6e1,	// (0x0002a6d3) grid_touch_2_pane

0x7652,	// (0x00026644) touch_pane_g1_ParamLimits

0x7652,	// (0x00026644) touch_pane_g1

0xb6fb,	// (0x0002a6ed) cell_app_pane_cp_wide_ParamLimits

0xb6fb,	// (0x0002a6ed) cell_app_pane_cp_wide

0xb70c,	// (0x0002a6fe) grid_popup_fast_wide_pane_ParamLimits

0xb70c,	// (0x0002a6fe) grid_popup_fast_wide_pane

0xb720,	// (0x0002a712) scroll_pane_cp19_ParamLimits

0xb720,	// (0x0002a712) scroll_pane_cp19

0x117b,	// (0x0002016d) bg_popup_window_pane_cp20

0xb734,	// (0x0002a726) listscroll_popup_fast_wide_pane

0x11d7,	// (0x000201c9) grid_indicator_nsta_pane

0xb73c,	// (0x0002a72e) clock_nsta_pane_g1

0xb745,	// (0x0002a737) clock_nsta_pane_t1

0xb761,	// (0x0002a753) cell_indicator_nsta_pane_ParamLimits

0xb761,	// (0x0002a753) cell_indicator_nsta_pane

0xb792,	// (0x0002a784) cell_indicator_nsta_pane_g1

0xb7a0,	// (0x0002a792) cell_indicator_nsta_pane_g2

0x0001,

0xfa9e,	// (0x0002ea90) cell_indicator_nsta_pane_g

0xb7ad,	// (0x0002a79f) clock_nsta_pane_cp

0xb7b6,	// (0x0002a7a8) indicator_nsta_pane_cp

0xb7be,	// (0x0002a7b0) nsta_clock_indic_pane_g1

0x122d,	// (0x0002021f) grid_indicator_pane

0x33ed,	// (0x000223df) scroll_pane_cp29

0x6e0c,	// (0x00025dfe) indicator_nsta_pane_cp2_ParamLimits

0x6e0c,	// (0x00025dfe) indicator_nsta_pane_cp2

0x11d7,	// (0x000201c9) main_apps_wheel_pane

0x99a1,	// (0x00028993) form_midp_field_text_pane_ParamLimits

0x9af0,	// (0x00028ae2) scroll_bar_cp050_ParamLimits

0xb80e,	// (0x0002a800) cell_indicator_pane_ParamLimits

0xb80e,	// (0x0002a800) cell_indicator_pane

0xb826,	// (0x0002a818) cell_indicator_pane_g1

0xb830,	// (0x0002a822) grid_wheel_folder_pane_ParamLimits

0xb830,	// (0x0002a822) grid_wheel_folder_pane

0xb844,	// (0x0002a836) list_wheel_apps_pane_ParamLimits

0xb844,	// (0x0002a836) list_wheel_apps_pane

0xb857,	// (0x0002a849) main_apps_wheel_pane_g1_ParamLimits

0xb857,	// (0x0002a849) main_apps_wheel_pane_g1

0xb873,	// (0x0002a865) main_apps_wheel_pane_g2_ParamLimits

0xb873,	// (0x0002a865) main_apps_wheel_pane_g2

0x0001,

0xfaba,	// (0x0002eaac) main_apps_wheel_pane_g_ParamLimits

0xfaba,	// (0x0002eaac) main_apps_wheel_pane_g

0xb88f,	// (0x0002a881) main_apps_wheel_pane_t1_ParamLimits

0xb88f,	// (0x0002a881) main_apps_wheel_pane_t1

0xb8b8,	// (0x0002a8aa) list_wheel_apps_pane_g1

0xb8c0,	// (0x0002a8b2) list_wheel_apps_pane_g2

0xb8c8,	// (0x0002a8ba) list_wheel_apps_pane_g3

0xb8d0,	// (0x0002a8c2) list_wheel_apps_pane_g4

0xb8da,	// (0x0002a8cc) list_wheel_apps_pane_g5

0x0004,

0xfabf,	// (0x0002eab1) list_wheel_apps_pane_g

0x7115,	// (0x00026107) navi_icon_text_pane

0x7e50,	// (0x00026e42) aid_fill_nsta

0xb8fb,	// (0x0002a8ed) navi_icon_text_pane_g1

0xb907,	// (0x0002a8f9) navi_icon_text_pane_t1

0x6fa0,	// (0x00025f92) list_set_graphic_pane_t1_ParamLimits

0x6fa0,	// (0x00025f92) list_set_graphic_pane_t1

0xa255,	// (0x00029247) popup_midp_note_alarm_window_t6_ParamLimits

0xa255,	// (0x00029247) popup_midp_note_alarm_window_t6

0xa267,	// (0x00029259) popup_midp_note_alarm_window_t7_ParamLimits

0xa267,	// (0x00029259) popup_midp_note_alarm_window_t7

0xa279,	// (0x0002926b) popup_midp_note_alarm_window_t8_ParamLimits

0xa279,	// (0x0002926b) popup_midp_note_alarm_window_t8

0xa28b,	// (0x0002927d) popup_midp_note_alarm_window_t9_ParamLimits

0xa28b,	// (0x0002927d) popup_midp_note_alarm_window_t9

0xa29d,	// (0x0002928f) popup_midp_note_alarm_window_t10_ParamLimits

0xa29d,	// (0x0002928f) popup_midp_note_alarm_window_t10

0xa2af,	// (0x000292a1) popup_midp_note_alarm_window_t11_ParamLimits

0xa2af,	// (0x000292a1) popup_midp_note_alarm_window_t11

0xa2c1,	// (0x000292b3) scroll_pane_cp17_ParamLimits

0xa2c1,	// (0x000292b3) scroll_pane_cp17

0x8240,	// (0x00027232) volume_small_pane_cp_g1

0x8551,	// (0x00027543) volume_small_pane_cp_g2

0x855a,	// (0x0002754c) volume_small_pane_cp_g3

0x8563,	// (0x00027555) volume_small_pane_cp_g4

0x856c,	// (0x0002755e) volume_small_pane_cp_g5

0x8575,	// (0x00027567) volume_small_pane_cp_g6

0x857e,	// (0x00027570) volume_small_pane_cp_g7

0x8587,	// (0x00027579) volume_small_pane_cp_g8

0x8590,	// (0x00027582) volume_small_pane_cp_g9

0x8599,	// (0x0002758b) volume_small_pane_cp_g10

0x736b,	// (0x0002635d) midp_ticker_pane_g1_ParamLimits

0x7377,	// (0x00026369) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0002e745) midp_ticker_pane_g_ParamLimits

0x7383,	// (0x00026375) midp_ticker_pane_t1_ParamLimits

0x7e66,	// (0x00026e58) aid_fill_nsta_2

0x9adc,	// (0x00028ace) list_form2_midp_pane

0xac45,	// (0x00029c37) midp_editing_number_pane_ParamLimits

0xac54,	// (0x00029c46) midp_ticker_pane_ParamLimits

0xb919,	// (0x0002a90b) form2_midp_field_pane

0xb93d,	// (0x0002a92f) scroll_pane_cp51

0xb95d,	// (0x0002a94f) form2_midp_button_pane_ParamLimits

0xb95d,	// (0x0002a94f) form2_midp_button_pane

0xb96f,	// (0x0002a961) form2_midp_content_pane_ParamLimits

0xb96f,	// (0x0002a961) form2_midp_content_pane

0xb989,	// (0x0002a97b) form2_midp_field_choice_group_pane

0xb991,	// (0x0002a983) form2_midp_field_pane_g1

0xb999,	// (0x0002a98b) form2_midp_field_pane_g2

0xb9a1,	// (0x0002a993) form2_midp_field_pane_g3

0xb9a9,	// (0x0002a99b) form2_midp_field_pane_g4

0x0003,

0xfae4,	// (0x0002ead6) form2_midp_field_pane_g

0xb9b1,	// (0x0002a9a3) form2_midp_gauge_slider_pane

0xb9b9,	// (0x0002a9ab) form2_midp_gauge_wait_pane

0xb9c1,	// (0x0002a9b3) form2_midp_image_pane_ParamLimits

0xb9c1,	// (0x0002a9b3) form2_midp_image_pane

0xb9dc,	// (0x0002a9ce) form2_midp_label_pane_ParamLimits

0xb9dc,	// (0x0002a9ce) form2_midp_label_pane

0xb9fb,	// (0x0002a9ed) form2_midp_label_pane_cp_ParamLimits

0xb9fb,	// (0x0002a9ed) form2_midp_label_pane_cp

0xba1c,	// (0x0002aa0e) form2_midp_string_pane_ParamLimits

0xba1c,	// (0x0002aa0e) form2_midp_string_pane

0x5b5f,	// (0x00024b51) form2_midp_text_pane_ParamLimits

0x5b5f,	// (0x00024b51) form2_midp_text_pane

0xba2e,	// (0x0002aa20) form2_midp_time_pane

0xba3e,	// (0x0002aa30) input_focus_pane_cp51_ParamLimits

0xba3e,	// (0x0002aa30) input_focus_pane_cp51

0xba56,	// (0x0002aa48) form2_midp_label_pane_t1_ParamLimits

0xba56,	// (0x0002aa48) form2_midp_label_pane_t1

0x5b80,	// (0x00024b72) form2_mdip_text_pane_t1_ParamLimits

0x5b80,	// (0x00024b72) form2_mdip_text_pane_t1

0x5ba4,	// (0x00024b96) form2_midp_time_pane_t1

0xbaa4,	// (0x0002aa96) form2_midp_gauge_slider_pane_t1

0xbab6,	// (0x0002aaa8) form2_midp_gauge_slider_pane_t2

0xbac8,	// (0x0002aaba) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaed,	// (0x0002eadf) form2_midp_gauge_slider_pane_t

0xbada,	// (0x0002aacc) form2_midp_slider_pane

0xbae6,	// (0x0002aad8) form2_midp_gauge_wait_pane_t1

0xbaf4,	// (0x0002aae6) form2_midp_wait_pane_ParamLimits

0xbaf4,	// (0x0002aae6) form2_midp_wait_pane

0xbb1f,	// (0x0002ab11) list_single_2graphic_pane_cp4_ParamLimits

0xbb1f,	// (0x0002ab11) list_single_2graphic_pane_cp4

0x981d,	// (0x0002880f) list_single_midp_graphic_pane_cp_ParamLimits

0x981d,	// (0x0002880f) list_single_midp_graphic_pane_cp

0x117b,	// (0x0002016d) list_highlight_pane_cp20

0xbb38,	// (0x0002ab2a) list_single_2graphic_pane_g1_cp4

0xb110,	// (0x0002a102) list_single_2graphic_pane_g2_cp4

0xbb40,	// (0x0002ab32) list_single_2graphic_pane_t1_cp4

0x11d7,	// (0x000201c9) list_highlight_pane_cp21

0xbb4f,	// (0x0002ab41) list_single_midp_graphic_pane_g4_cp

0xbb5e,	// (0x0002ab50) list_single_midp_graphic_pane_t1_cp

0xbb73,	// (0x0002ab65) form2_mdip_string_pane_t1_ParamLimits

0xbb73,	// (0x0002ab65) form2_mdip_string_pane_t1

0x117b,	// (0x0002016d) bg_wml_button_pane_cp2

0x1171,	// (0x00020163) form2_midp_image_pane_g1

0x50a6,	// (0x00024098) list_double_large_graphic_pane_g5_ParamLimits

0x50a6,	// (0x00024098) list_double_large_graphic_pane_g5

0x7295,	// (0x00026287) midp_form_pane_ParamLimits

0x11d7,	// (0x000201c9) main_apps_wheel_pane_ParamLimits

0x7bfa,	// (0x00026bec) popup_preview_window_ParamLimits

0x7bfa,	// (0x00026bec) popup_preview_window

0x7de1,	// (0x00026dd3) popup_touch_info_window_ParamLimits

0x7de1,	// (0x00026dd3) popup_touch_info_window

0x7e03,	// (0x00026df5) popup_touch_menu_window_ParamLimits

0x7e03,	// (0x00026df5) popup_touch_menu_window

0x1167,	// (0x00020159) bg_popup_sub_pane_cp6

0xbc0f,	// (0x0002ac01) list_touch_menu_pane

0xbc17,	// (0x0002ac09) list_single_touch_menu_pane_ParamLimits

0xbc17,	// (0x0002ac09) list_single_touch_menu_pane

0xbc2f,	// (0x0002ac21) list_single_touch_menu_pane_t1

0x11d7,	// (0x000201c9) bg_popup_sub_pane_cp7_ParamLimits

0x11d7,	// (0x000201c9) bg_popup_sub_pane_cp7

0xbc3d,	// (0x0002ac2f) heading_sub_pane

0xbc45,	// (0x0002ac37) list_touch_info_pane_ParamLimits

0xbc45,	// (0x0002ac37) list_touch_info_pane

0xbc54,	// (0x0002ac46) list_single_touch_info_pane_ParamLimits

0xbc54,	// (0x0002ac46) list_single_touch_info_pane

0xbc66,	// (0x0002ac58) list_single_touch_info_pane_t1

0xbc74,	// (0x0002ac66) list_single_touch_info_pane_t2

0x0001,

0xfafb,	// (0x0002eaed) list_single_touch_info_pane_t

0x728d,	// (0x0002627f) bg_popup_heading_pane_cp

0xbc82,	// (0x0002ac74) heading_sub_pane_t1

0x974e,	// (0x00028740) bg_popup_preview_window_pane_cp_ParamLimits

0x974e,	// (0x00028740) bg_popup_preview_window_pane_cp

0xbc3d,	// (0x0002ac2f) heading_preview_pane

0xbc45,	// (0x0002ac37) list_preview_pane_ParamLimits

0xbc45,	// (0x0002ac37) list_preview_pane

0xbc90,	// (0x0002ac82) popup_preview_window_g1

0xbc54,	// (0x0002ac46) list_single_preview_pane_ParamLimits

0xbc54,	// (0x0002ac46) list_single_preview_pane

0xbc98,	// (0x0002ac8a) list_single_preview_pane_g1

0xbca0,	// (0x0002ac92) list_single_preview_pane_t1

0xbc66,	// (0x0002ac58) list_single_preview_pane_t2

0x0001,

0xfb00,	// (0x0002eaf2) list_single_preview_pane_t

0xbcae,	// (0x0002aca0) bg_popup_heading_pane_cp2_ParamLimits

0xbcae,	// (0x0002aca0) bg_popup_heading_pane_cp2

0xbcc4,	// (0x0002acb6) heading_preview_pane_g1

0xbccc,	// (0x0002acbe) heading_preview_pane_t1_ParamLimits

0xbccc,	// (0x0002acbe) heading_preview_pane_t1

0x1244,	// (0x00020236) soft_indicator_pane_t1_ParamLimits

0x17a2,	// (0x00020794) scroll_pane_ParamLimits

0x32f2,	// (0x000222e4) scroll_sc2_left_pane

0x32e9,	// (0x000222db) scroll_sc2_right_pane

0x3311,	// (0x00022303) scroll_bg_pane_g1_ParamLimits

0x3326,	// (0x00022318) scroll_bg_pane_g2_ParamLimits

0x333e,	// (0x00022330) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0002e6d0) scroll_bg_pane_g_ParamLimits

0x3311,	// (0x00022303) scroll_handle_pane_g1_ParamLimits

0x3360,	// (0x00022352) scroll_handle_pane_g2_ParamLimits

0x333e,	// (0x00022330) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002e6d7) scroll_handle_pane_g_ParamLimits

0x7841,	// (0x00026833) popup_choice_list_window_ParamLimits

0x7841,	// (0x00026833) popup_choice_list_window

0x9624,	// (0x00028616) choice_list_pane

0x96a6,	// (0x00028698) cell_toolbar_pane_t1

0x96ce,	// (0x000286c0) toolbar_button_pane_ParamLimits

0xa78b,	// (0x0002977d) ai_gene_pane_1_t2_ParamLimits

0xa78b,	// (0x0002977d) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0002e8ff) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0002e8ff) ai_gene_pane_1_t

0xbce9,	// (0x0002acdb) scroll_sc2_left_pane_g1

0xbce9,	// (0x0002acdb) scroll_sc2_right_pane_g1

0x77e3,	// (0x000267d5) bg_popup_sub_pane_cp10

0xbcf3,	// (0x0002ace5) list_choice_list_pane

0xacf0,	// (0x00029ce2) list_single_choice_list_pane_ParamLimits

0xacf0,	// (0x00029ce2) list_single_choice_list_pane

0xbd0c,	// (0x0002acfe) list_single_choice_list_pane_g1

0x2f1f,	// (0x00021f11) list_single_choice_list_pane_t1_ParamLimits

0x2f1f,	// (0x00021f11) list_single_choice_list_pane_t1

0xbd14,	// (0x0002ad06) choice_list_pane_g1

0xbd1c,	// (0x0002ad0e) choice_list_pane_t1

0x1167,	// (0x00020159) input_focus_pane_cp11

0x30ed,	// (0x000220df) title_pane_stacon_g2_ParamLimits

0x30ed,	// (0x000220df) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002e6b6) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e6b6) title_pane_stacon_g

0x728d,	// (0x0002627f) cursor_press_pane

0x78fb,	// (0x000268ed) popup_fep_hwr_window_ParamLimits

0x78fb,	// (0x000268ed) popup_fep_hwr_window

0x7985,	// (0x00026977) popup_fep_vkb_window_ParamLimits

0x7985,	// (0x00026977) popup_fep_vkb_window

0xbd2a,	// (0x0002ad1c) cursor_press_pane_g1

0x0002,

0xfb29,	// (0x0002eb1b) fep_vkb_side_pane_g_ParamLimits

0x85db,	// (0x000275cd) fep_hwr_candidate_pane_ParamLimits

0x85db,	// (0x000275cd) fep_hwr_candidate_pane

0x8605,	// (0x000275f7) fep_hwr_side_pane_ParamLimits

0x8605,	// (0x000275f7) fep_hwr_side_pane

0x8627,	// (0x00027619) fep_hwr_top_pane_ParamLimits

0x8627,	// (0x00027619) fep_hwr_top_pane

0x863f,	// (0x00027631) fep_hwr_write_pane_ParamLimits

0x863f,	// (0x00027631) fep_hwr_write_pane

0xfb29,	// (0x0002eb1b) fep_vkb_side_pane_g

0xbd32,	// (0x0002ad24) fep_hwr_top_pane_g1

0xbd44,	// (0x0002ad36) fep_hwr_top_pane_g2

0x866b,	// (0x0002765d) fep_hwr_top_pane_g3

0x0002,

0xfb05,	// (0x0002eaf7) fep_hwr_top_pane_g

0x8680,	// (0x00027672) fep_hwr_top_text_pane

0x6a6a,	// (0x00025a5c) fep_hwr_top_text_pane_g1

0xbd7a,	// (0x0002ad6c) fep_hwr_top_text_pane_t1

0x878a,	// (0x0002777c) fep_hwr_candidate_pane_g1

0xbfc5,	// (0x0002afb7) fep_vkb_keypad_pane_g3_ParamLimits

0xbfc5,	// (0x0002afb7) fep_vkb_keypad_pane_g3

0xbff1,	// (0x0002afe3) fep_vkb_keypad_pane_g4_ParamLimits

0xbff1,	// (0x0002afe3) fep_vkb_keypad_pane_g4

0xc068,	// (0x0002b05a) fep_vkb_bottom_pane_g2_ParamLimits

0xc068,	// (0x0002b05a) fep_vkb_bottom_pane_g2

0x0001,

0xfb30,	// (0x0002eb22) fep_vkb_bottom_pane_g_ParamLimits

0xfb30,	// (0x0002eb22) fep_vkb_bottom_pane_g

0xbce9,	// (0x0002acdb) cell_vkb_side_pane_g2

0x0001,

0xfb3a,	// (0x0002eb2c) cell_vkb_side_pane_g

0xc0f3,	// (0x0002b0e5) cell_vkb_side_pane_t1

0xc101,	// (0x0002b0f3) cell_vkb_side_pane_t1_copy1

0xbce9,	// (0x0002acdb) bg_fep_vkb_candidate_pane_g2

0xc245,	// (0x0002b237) cell_vkb_candidate_pane_ParamLimits

0xbd88,	// (0x0002ad7a) aid_size_cell_vkb_ParamLimits

0xbd88,	// (0x0002ad7a) aid_size_cell_vkb

0xc245,	// (0x0002b237) cell_vkb_candidate_pane

0x87a4,	// (0x00027796) bg_popup_fep_shadow_pane_g1

0xbe1a,	// (0x0002ae0c) fep_vkb_bottom_pane_ParamLimits

0xbe1a,	// (0x0002ae0c) fep_vkb_bottom_pane

0xbe57,	// (0x0002ae49) fep_vkb_candidate_pane_ParamLimits

0xbe57,	// (0x0002ae49) fep_vkb_candidate_pane

0xbe73,	// (0x0002ae65) fep_vkb_keypad_pane_ParamLimits

0xbe73,	// (0x0002ae65) fep_vkb_keypad_pane

0xbea6,	// (0x0002ae98) fep_vkb_side_pane_ParamLimits

0xbea6,	// (0x0002ae98) fep_vkb_side_pane

0xbee2,	// (0x0002aed4) fep_vkb_top_pane_ParamLimits

0xbee2,	// (0x0002aed4) fep_vkb_top_pane

0xbf1e,	// (0x0002af10) fep_vkb_top_pane_g1_ParamLimits

0xbf1e,	// (0x0002af10) fep_vkb_top_pane_g1

0xbf2d,	// (0x0002af1f) fep_vkb_top_pane_g2_ParamLimits

0xbf2d,	// (0x0002af1f) fep_vkb_top_pane_g2

0xbf3c,	// (0x0002af2e) fep_vkb_top_pane_g3_ParamLimits

0xbf3c,	// (0x0002af2e) fep_vkb_top_pane_g3

0x0003,

0xfb20,	// (0x0002eb12) fep_vkb_top_pane_g_ParamLimits

0xfb20,	// (0x0002eb12) fep_vkb_top_pane_g

0xbf5a,	// (0x0002af4c) fep_vkb_top_text_pane_ParamLimits

0xbf5a,	// (0x0002af4c) fep_vkb_top_text_pane

0xbf6b,	// (0x0002af5d) fep_vkb_side_pane_g1_ParamLimits

0xbf6b,	// (0x0002af5d) fep_vkb_side_pane_g1

0xbfb4,	// (0x0002afa6) grid_vkb_side_pane_ParamLimits

0xbfb4,	// (0x0002afa6) grid_vkb_side_pane

0x87ac,	// (0x0002779e) bg_popup_fep_shadow_pane_g2

0x87b5,	// (0x000277a7) bg_popup_fep_shadow_pane_g3

0x87bd,	// (0x000277af) bg_popup_fep_shadow_pane_g4

0x87c6,	// (0x000277b8) bg_popup_fep_shadow_pane_g5

0x87d0,	// (0x000277c2) bg_popup_fep_shadow_pane_g6

0x87d8,	// (0x000277ca) bg_popup_fep_shadow_pane_g7

0x2e1a,	// (0x00021e0c) bg_popup_fep_shadow_pane_g8

0xc013,	// (0x0002b005) grid_vkb_keypad_number_pane_ParamLimits

0xc013,	// (0x0002b005) grid_vkb_keypad_number_pane

0xc027,	// (0x0002b019) grid_vkb_keypad_pane_ParamLimits

0xc027,	// (0x0002b019) grid_vkb_keypad_pane

0xc04d,	// (0x0002b03f) fep_vkb_bottom_pane_g1_ParamLimits

0xc04d,	// (0x0002b03f) fep_vkb_bottom_pane_g1

0xc076,	// (0x0002b068) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc076,	// (0x0002b068) grid_vkb_keypad_bottom_left_pane

0xc08b,	// (0x0002b07d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc08b,	// (0x0002b07d) grid_vkb_keypad_bottom_right_pane

0xc0a0,	// (0x0002b092) fep_vkb_top_text_pane_g1

0xc0bb,	// (0x0002b0ad) fep_vkb_top_text_pane_t1

0xc0d0,	// (0x0002b0c2) cell_vkb_side_pane_ParamLimits

0xc0d0,	// (0x0002b0c2) cell_vkb_side_pane

0xbce9,	// (0x0002acdb) cell_vkb_side_pane_g1

0xc10f,	// (0x0002b101) cell_vkb_keypad_pane_ParamLimits

0xc10f,	// (0x0002b101) cell_vkb_keypad_pane

0xc19c,	// (0x0002b18e) cell_vkb_keypad_pane_g1

0x0008,

0xfb4d,	// (0x0002eb3f) bg_popup_fep_shadow_pane_g

0xbce9,	// (0x0002acdb) cell_hwr_side_pane_g1

0xbce9,	// (0x0002acdb) cell_hwr_side_pane_g2

0xc1a6,	// (0x0002b198) cell_vkb_keypad_pane_t1

0xc1b4,	// (0x0002b1a6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc1b4,	// (0x0002b1a6) cell_vkb_keypad_bottom_left_pane

0xc1d1,	// (0x0002b1c3) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc1d1,	// (0x0002b1c3) cell_vkb_keypad_bottom_right_pane

0xbce9,	// (0x0002acdb) cell_vkb_keypad_bottom_left_pane_g1

0xbce9,	// (0x0002acdb) cell_vkb_keypad_bottom_right_pane_g1

0xc20a,	// (0x0002b1fc) cell_vkb_keypad_number_pane_ParamLimits

0xc20a,	// (0x0002b1fc) cell_vkb_keypad_number_pane

0xc229,	// (0x0002b21b) cell_vkb_keypad_number_pane_g1

0xc233,	// (0x0002b225) cell_vkb_keypad_number_pane_g2

0xc23c,	// (0x0002b22e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3f,	// (0x0002eb31) cell_vkb_keypad_number_pane_g

0xc1a6,	// (0x0002b198) cell_vkb_keypad_number_pane_t1

0xc266,	// (0x0002b258) fep_vkb_candidate_pane_g1

0x0001,

0xfb3a,	// (0x0002eb2c) cell_hwr_side_pane_g

0xc27f,	// (0x0002b271) cell_hwr_side_pane_t1

0x87ea,	// (0x000277dc) cell_hwr_side_pane_t1_copy1

0xbf4c,	// (0x0002af3e) cell_hwr_candidate_pane_g1

0x87f8,	// (0x000277ea) cell_hwr_candidate_pane_t1

0xbce9,	// (0x0002acdb) cell_vkb_candidate_pane_g2

0xc2c3,	// (0x0002b2b5) cell_vkb_candidate_pane_t1

0x85a2,	// (0x00027594) bg_popup_fep_shadow_pane_ParamLimits

0x85a2,	// (0x00027594) bg_popup_fep_shadow_pane

0x1137,	// (0x00020129) bg_fep_hwr_top_pane_g4

0xbd56,	// (0x0002ad48) bg_hwr_side_pane_g1_ParamLimits

0xbd56,	// (0x0002ad48) bg_hwr_side_pane_g1

0x86be,	// (0x000276b0) cell_hwr_side_pane_ParamLimits

0x86be,	// (0x000276b0) cell_hwr_side_pane

0x86fb,	// (0x000276ed) fep_hwr_write_pane_g1_ParamLimits

0x86fb,	// (0x000276ed) fep_hwr_write_pane_g1

0x8708,	// (0x000276fa) fep_hwr_write_pane_g2_ParamLimits

0x8708,	// (0x000276fa) fep_hwr_write_pane_g2

0x8715,	// (0x00027707) fep_hwr_write_pane_g3_ParamLimits

0x8715,	// (0x00027707) fep_hwr_write_pane_g3

0x8723,	// (0x00027715) fep_hwr_write_pane_g4_ParamLimits

0x8723,	// (0x00027715) fep_hwr_write_pane_g4

0x0005,

0xfb0c,	// (0x0002eafe) fep_hwr_write_pane_g_ParamLimits

0xfb0c,	// (0x0002eafe) fep_hwr_write_pane_g

0x1137,	// (0x00020129) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1137,	// (0x00020129) bg_fep_hwr_candidate_pane_g2

0x8738,	// (0x0002772a) cell_hwr_candidate_pane_ParamLimits

0x8738,	// (0x0002772a) cell_hwr_candidate_pane

0x878a,	// (0x0002777c) fep_hwr_candidate_pane_g1_ParamLimits

0xbdb6,	// (0x0002ada8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbdb6,	// (0x0002ada8) bg_popup_fep_shadow_pane_cp2

0xbf4c,	// (0x0002af3e) fep_vkb_top_pane_g4_ParamLimits

0xbf4c,	// (0x0002af3e) fep_vkb_top_pane_g4

0xbf92,	// (0x0002af84) fep_vkb_side_pane_g2_ParamLimits

0xbf92,	// (0x0002af84) fep_vkb_side_pane_g2

0x5225,	// (0x00024217) list_setting_pane_t4_ParamLimits

0x5225,	// (0x00024217) list_setting_pane_t4

0x52c1,	// (0x000242b3) list_setting_number_pane_t5_ParamLimits

0x52c1,	// (0x000242b3) list_setting_number_pane_t5

0x6ad0,	// (0x00025ac2) list_double_heading_pane_cp2_ParamLimits

0x6ad0,	// (0x00025ac2) list_double_heading_pane_cp2

0xc2d1,	// (0x0002b2c3) list_double_heading_pane_g1_cp2_ParamLimits

0xc2d1,	// (0x0002b2c3) list_double_heading_pane_g1_cp2

0xc2dd,	// (0x0002b2cf) list_double_heading_pane_g2_cp2_ParamLimits

0xc2dd,	// (0x0002b2cf) list_double_heading_pane_g2_cp2

0xc2f1,	// (0x0002b2e3) list_double_heading_pane_t1_cp2_ParamLimits

0xc2f1,	// (0x0002b2e3) list_double_heading_pane_t1_cp2

0xc307,	// (0x0002b2f9) list_double_heading_pane_t2_cp2_ParamLimits

0xc307,	// (0x0002b2f9) list_double_heading_pane_t2_cp2

0x115f,	// (0x00020151) aid_value_unit2

0x6253,	// (0x00025245) popup_preview_fixed_window

0x1324,	// (0x00020316) bg_popup_preview_window_pane_cp02

0xc319,	// (0x0002b30b) list_preview_fixed_pane

0xc35f,	// (0x0002b351) list_empty_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_empty_pane_fp

0xc35f,	// (0x0002b351) list_single_cale_day_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_cale_day_pane_fp

0xc35f,	// (0x0002b351) list_single_graphic_heading_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_graphic_heading_pane_fp

0xc35f,	// (0x0002b351) list_single_graphic_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_graphic_pane_fp

0xc35f,	// (0x0002b351) list_single_heading_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_heading_pane_fp

0xc35f,	// (0x0002b351) list_single_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_pane_fp

0xc378,	// (0x0002b36a) list_single_pane_fp_g1_ParamLimits

0xc378,	// (0x0002b36a) list_single_pane_fp_g1

0x5bb7,	// (0x00024ba9) list_single_pane_fp_g2_ParamLimits

0x5bb7,	// (0x00024ba9) list_single_pane_fp_g2

0x5bc3,	// (0x00024bb5) list_single_pane_fp_g3_ParamLimits

0x5bc3,	// (0x00024bb5) list_single_pane_fp_g3

0xc384,	// (0x0002b376) list_single_pane_fp_g4_ParamLimits

0xc384,	// (0x0002b376) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0002eb60) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0002eb60) list_single_pane_fp_g

0x5bd7,	// (0x00024bc9) list_single_pane_fp_t1_ParamLimits

0x5bd7,	// (0x00024bc9) list_single_pane_fp_t1

0x5bee,	// (0x00024be0) list_single_graphic_pane_fp_g1_ParamLimits

0x5bee,	// (0x00024be0) list_single_graphic_pane_fp_g1

0xc378,	// (0x0002b36a) list_single_graphic_pane_fp_g2_ParamLimits

0xc378,	// (0x0002b36a) list_single_graphic_pane_fp_g2

0x5bb7,	// (0x00024ba9) list_single_graphic_pane_fp_g3_ParamLimits

0x5bb7,	// (0x00024ba9) list_single_graphic_pane_fp_g3

0x5bc3,	// (0x00024bb5) list_single_graphic_pane_fp_g4_ParamLimits

0x5bc3,	// (0x00024bb5) list_single_graphic_pane_fp_g4

0xc384,	// (0x0002b376) list_single_graphic_pane_fp_g5_ParamLimits

0xc384,	// (0x0002b376) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0002eb69) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0002eb69) list_single_graphic_pane_fp_g

0x5bfa,	// (0x00024bec) list_single_graphic_pane_fp_t1_ParamLimits

0x5bfa,	// (0x00024bec) list_single_graphic_pane_fp_t1

0x5bee,	// (0x00024be0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5bee,	// (0x00024be0) list_single_graphic_heading_pane_fp_g1

0xc378,	// (0x0002b36a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc378,	// (0x0002b36a) list_single_graphic_heading_pane_fp_g2

0x5bb7,	// (0x00024ba9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5bb7,	// (0x00024ba9) list_single_graphic_heading_pane_fp_g3

0x5bc3,	// (0x00024bb5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5bc3,	// (0x00024bb5) list_single_graphic_heading_pane_fp_g4

0xc384,	// (0x0002b376) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc384,	// (0x0002b376) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002eb69) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002eb69) list_single_graphic_heading_pane_fp_g

0x5c10,	// (0x00024c02) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5c10,	// (0x00024c02) list_single_graphic_heading_pane_fp_t1

0x5c26,	// (0x00024c18) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5c26,	// (0x00024c18) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0002eb74) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0002eb74) list_single_graphic_heading_pane_fp_t

0x5c38,	// (0x00024c2a) list_single_cale_day_pane_fp_g1_ParamLimits

0x5c38,	// (0x00024c2a) list_single_cale_day_pane_fp_g1

0xc390,	// (0x0002b382) list_single_cale_day_pane_fp_g2_ParamLimits

0xc390,	// (0x0002b382) list_single_cale_day_pane_fp_g2

0x5c70,	// (0x00024c62) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c70,	// (0x00024c62) list_single_cale_day_pane_fp_g3

0x5c98,	// (0x00024c8a) list_single_cale_day_pane_fp_g4_ParamLimits

0x5c98,	// (0x00024c8a) list_single_cale_day_pane_fp_g4

0x5cbc,	// (0x00024cae) list_single_cale_day_pane_fp_g5_ParamLimits

0x5cbc,	// (0x00024cae) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0002eb79) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0002eb79) list_single_cale_day_pane_fp_g

0x5ce0,	// (0x00024cd2) list_single_cale_day_pane_fp_t1_ParamLimits

0x5ce0,	// (0x00024cd2) list_single_cale_day_pane_fp_t1

0x5d06,	// (0x00024cf8) list_single_cale_day_pane_fp_t2_ParamLimits

0x5d06,	// (0x00024cf8) list_single_cale_day_pane_fp_t2

0x5d1f,	// (0x00024d11) list_single_cale_day_pane_fp_t3_ParamLimits

0x5d1f,	// (0x00024d11) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0002eb84) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0002eb84) list_single_cale_day_pane_fp_t

0xc378,	// (0x0002b36a) list_empty_pane_fp_g1_ParamLimits

0xc378,	// (0x0002b36a) list_empty_pane_fp_g1

0x5d38,	// (0x00024d2a) list_empty_pane_fp_t1

0x5d46,	// (0x00024d38) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0002eb8b) list_empty_pane_fp_t

0xc378,	// (0x0002b36a) list_single_heading_pane_fp_g1_ParamLimits

0xc378,	// (0x0002b36a) list_single_heading_pane_fp_g1

0x5bb7,	// (0x00024ba9) list_single_heading_pane_fp_g2_ParamLimits

0x5bb7,	// (0x00024ba9) list_single_heading_pane_fp_g2

0x5bc3,	// (0x00024bb5) list_single_heading_pane_fp_g3_ParamLimits

0x5bc3,	// (0x00024bb5) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0002eb90) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0002eb90) list_single_heading_pane_fp_g

0x5d54,	// (0x00024d46) list_single_heading_pane_fp_t1_ParamLimits

0x5d54,	// (0x00024d46) list_single_heading_pane_fp_t1

0x5d66,	// (0x00024d58) list_single_heading_pane_fp_t2_ParamLimits

0x5d66,	// (0x00024d58) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002eb97) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002eb97) list_single_heading_pane_fp_t

0x2f34,	// (0x00021f26) aid_size_cell_fast

0x1307,	// (0x000202f9) soft_indicator_pane_cp1_t1

0x2f71,	// (0x00021f63) cell_app_pane_cp2_ParamLimits

0x2f71,	// (0x00021f63) cell_app_pane_cp2

0x85c4,	// (0x000275b6) fep_hwr_candidate_drop_down_list_pane

0x1145,	// (0x00020137) fep_hwr_candidate_pane_g3_ParamLimits

0x1145,	// (0x00020137) fep_hwr_candidate_pane_g3

0x1152,	// (0x00020144) fep_hwr_candidate_pane_g4_ParamLimits

0x1152,	// (0x00020144) fep_hwr_candidate_pane_g4

0x0002,

0xfb19,	// (0x0002eb0b) fep_hwr_candidate_pane_g_ParamLimits

0xfb19,	// (0x0002eb0b) fep_hwr_candidate_pane_g

0xbe46,	// (0x0002ae38) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbe46,	// (0x0002ae38) fep_vkb_candidate_drop_down_list_pane

0xc26e,	// (0x0002b260) fep_vkb_candidate_pane_g3

0xc276,	// (0x0002b268) fep_vkb_candidate_pane_g4

0x0002,

0xfb46,	// (0x0002eb38) fep_vkb_candidate_pane_g

0xbf4c,	// (0x0002af3e) cell_hwr_candidate_pane_g1_ParamLimits

0xc39c,	// (0x0002b38e) cell_hwr_candidate_pane_g3_ParamLimits

0xc39c,	// (0x0002b38e) cell_hwr_candidate_pane_g3

0xc3bd,	// (0x0002b3af) cell_hwr_candidate_pane_g4_ParamLimits

0xc3bd,	// (0x0002b3af) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0002eb52) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0002eb52) cell_hwr_candidate_pane_g

0xc28d,	// (0x0002b27f) cell_vkb_candidate_pane_g3_ParamLimits

0xc28d,	// (0x0002b27f) cell_vkb_candidate_pane_g3

0xc2a8,	// (0x0002b29a) cell_vkb_candidate_pane_g4_ParamLimits

0xc2a8,	// (0x0002b29a) cell_vkb_candidate_pane_g4

0xc3de,	// (0x0002b3d0) cell_app_pane_cp2_g1_ParamLimits

0xc3de,	// (0x0002b3d0) cell_app_pane_cp2_g1

0xc3fc,	// (0x0002b3ee) cell_app_pane_cp2_g2_ParamLimits

0xc3fc,	// (0x0002b3ee) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0002eb9c) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0002eb9c) cell_app_pane_cp2_g

0xc408,	// (0x0002b3fa) cell_app_pane_cp2_t1_ParamLimits

0xc408,	// (0x0002b3fa) cell_app_pane_cp2_t1

0x18a9,	// (0x0002089b) grid_highlight_pane_cp1_ParamLimits

0x18a9,	// (0x0002089b) grid_highlight_pane_cp1

0x8816,	// (0x00027808) cell_hwr_candidate_pane_cp1_ParamLimits

0x8816,	// (0x00027808) cell_hwr_candidate_pane_cp1

0xbf4c,	// (0x0002af3e) fep_hwr_candidate_drop_down_list_pane_g1

0xc41a,	// (0x0002b40c) fep_hwr_candidate_drop_down_list_pane_g2

0xc427,	// (0x0002b419) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002eba1) fep_hwr_candidate_drop_down_list_pane_g

0x883a,	// (0x0002782c) fep_hwr_candidate_drop_down_list_scroll_pane

0x8843,	// (0x00027835) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8843,	// (0x00027835) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x8850,	// (0x00027842) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8850,	// (0x00027842) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x885d,	// (0x0002784f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x885d,	// (0x0002784f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc28d,	// (0x0002b27f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc28d,	// (0x0002b27f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc2a8,	// (0x0002b29a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2a8,	// (0x0002b29a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x886a,	// (0x0002785c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x886a,	// (0x0002785c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x8885,	// (0x00027877) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8885,	// (0x00027877) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x88a0,	// (0x00027892) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x88a0,	// (0x00027892) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0002eba8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0002eba8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc434,	// (0x0002b426) cell_vkb_candidate_pane_cp1_ParamLimits

0xc434,	// (0x0002b426) cell_vkb_candidate_pane_cp1

0xbf4c,	// (0x0002af3e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) fep_vkb_candidate_drop_down_list_pane_g1

0xc41a,	// (0x0002b40c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc41a,	// (0x0002b40c) fep_vkb_candidate_drop_down_list_pane_g2

0xc427,	// (0x0002b419) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc427,	// (0x0002b419) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0002eba1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaf,	// (0x0002eba1) fep_vkb_candidate_drop_down_list_pane_g

0xc45a,	// (0x0002b44c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc45a,	// (0x0002b44c) fep_vkb_candidate_drop_down_list_scroll_pane

0xc467,	// (0x0002b459) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc467,	// (0x0002b459) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc474,	// (0x0002b466) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc474,	// (0x0002b466) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc480,	// (0x0002b472) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc480,	// (0x0002b472) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc39c,	// (0x0002b38e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc39c,	// (0x0002b38e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc3bd,	// (0x0002b3af) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc3bd,	// (0x0002b3af) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc48c,	// (0x0002b47e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc48c,	// (0x0002b47e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc4ad,	// (0x0002b49f) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc4ad,	// (0x0002b49f) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc4ce,	// (0x0002b4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc4ce,	// (0x0002b4c0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0002ebb9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0002ebb9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6373,	// (0x00025365) title_pane_g1_ParamLimits

0x6380,	// (0x00025372) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e540) title_pane_g_ParamLimits

0x6a5a,	// (0x00025a4c) aid_call2_pane

0x6a62,	// (0x00025a54) aid_call_pane

0x6a6a,	// (0x00025a5c) popup_clock_analogue_window_g1

0x6a6a,	// (0x00025a5c) popup_clock_analogue_window_g2

0x6a72,	// (0x00025a64) popup_clock_analogue_window_g3

0x6a7b,	// (0x00025a6d) popup_clock_analogue_window_g4

0x1171,	// (0x00020163) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002e6e5) popup_clock_analogue_window_g

0x6a83,	// (0x00025a75) popup_clock_analogue_window_t1

0x6b13,	// (0x00025b05) clock_digital_number_pane_ParamLimits

0x6b13,	// (0x00025b05) clock_digital_number_pane

0x6b1f,	// (0x00025b11) clock_digital_number_pane_cp02_ParamLimits

0x6b1f,	// (0x00025b11) clock_digital_number_pane_cp02

0x6b2b,	// (0x00025b1d) clock_digital_number_pane_cp03_ParamLimits

0x6b2b,	// (0x00025b1d) clock_digital_number_pane_cp03

0x6b37,	// (0x00025b29) clock_digital_number_pane_cp04_ParamLimits

0x6b37,	// (0x00025b29) clock_digital_number_pane_cp04

0x6b43,	// (0x00025b35) clock_digital_separator_pane_ParamLimits

0x6b43,	// (0x00025b35) clock_digital_separator_pane

0x6b4f,	// (0x00025b41) popup_clock_digital_window_t1_ParamLimits

0x6b4f,	// (0x00025b41) popup_clock_digital_window_t1

0x1171,	// (0x00020163) clock_digital_number_pane_g1

0x1171,	// (0x00020163) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0002e6f0) clock_digital_number_pane_g

0x1171,	// (0x00020163) clock_digital_separator_pane_g1

0x1171,	// (0x00020163) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0002e6f0) clock_digital_separator_pane_g

0x7e50,	// (0x00026e42) aid_fill_nsta_ParamLimits

0x7f96,	// (0x00026f88) indicator_nsta_pane_ParamLimits

0x94bd,	// (0x000284af) popup_clock_analogue_window

0x94bd,	// (0x000284af) popup_clock_digital_window

0x11d7,	// (0x000201c9) grid_indicator_nsta_pane_ParamLimits

0xb753,	// (0x0002a745) clock_nsta_pane_t2

0x0001,

0xfa99,	// (0x0002ea8b) clock_nsta_pane_t

0x69c3,	// (0x000259b5) aid_size_max_handle

0x69cd,	// (0x000259bf) aid_size_min_handle

0x728d,	// (0x0002627f) editor_scroll_pane

0xc4e9,	// (0x0002b4db) ex_editor_pane

0x2efa,	// (0x00021eec) scroll_pane_cp13

0x17ce,	// (0x000207c0) scroll_pane_cp14

0x6ab8,	// (0x00025aaa) scroll_pane_cp36

0x6ae6,	// (0x00025ad8) list_single_graphic_hl_pane_cp2_ParamLimits

0x6ae6,	// (0x00025ad8) list_single_graphic_hl_pane_cp2

0x57f4,	// (0x000247e6) list_single_graphic_hl_pane_ParamLimits

0x57f4,	// (0x000247e6) list_single_graphic_hl_pane

0x5d7c,	// (0x00024d6e) aid_size_min_hl_cp1

0xc4f1,	// (0x0002b4e3) list_highlight_pane_cp34_ParamLimits

0xc4f1,	// (0x0002b4e3) list_highlight_pane_cp34

0xc502,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_ParamLimits

0xc502,	// (0x0002b4f4) list_single_graphic_hl_pane_g1

0x5d85,	// (0x00024d77) list_single_graphic_hl_pane_g2_ParamLimits

0x5d85,	// (0x00024d77) list_single_graphic_hl_pane_g2

0x5d85,	// (0x00024d77) list_single_graphic_hl_pane_g3_ParamLimits

0x5d85,	// (0x00024d77) list_single_graphic_hl_pane_g3

0x560f,	// (0x00024601) list_single_graphic_hl_pane_g4_ParamLimits

0x560f,	// (0x00024601) list_single_graphic_hl_pane_g4

0x5d91,	// (0x00024d83) list_single_graphic_hl_pane_g5_ParamLimits

0x5d91,	// (0x00024d83) list_single_graphic_hl_pane_g5

0x0004,

0xfbd8,	// (0x0002ebca) list_single_graphic_hl_pane_g_ParamLimits

0xfbd8,	// (0x0002ebca) list_single_graphic_hl_pane_g

0x5da5,	// (0x00024d97) list_single_graphic_hl_pane_t1_ParamLimits

0x5da5,	// (0x00024d97) list_single_graphic_hl_pane_t1

0xc50f,	// (0x0002b501) aid_size_min_hl_cp2

0xc518,	// (0x0002b50a) list_highlight_pane_cp34_cp2_ParamLimits

0xc518,	// (0x0002b50a) list_highlight_pane_cp34_cp2

0xc502,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc502,	// (0x0002b4f4) list_single_graphic_hl_pane_g1_cp2

0xc525,	// (0x0002b517) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc525,	// (0x0002b517) list_single_graphic_hl_pane_g2_cp2

0xc531,	// (0x0002b523) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc531,	// (0x0002b523) list_single_graphic_hl_pane_g3_cp2

0xc53f,	// (0x0002b531) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc53f,	// (0x0002b531) list_single_graphic_hl_pane_g4_cp2

0xc54b,	// (0x0002b53d) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc54b,	// (0x0002b53d) list_single_graphic_hl_pane_g5_cp2

0x7660,	// (0x00026652) control_pane_g4_ParamLimits

0x7660,	// (0x00026652) control_pane_g4

0x77e3,	// (0x000267d5) bg_popup_sub_pane_cp10_ParamLimits

0xbcf3,	// (0x0002ace5) list_choice_list_pane_ParamLimits

0xbd02,	// (0x0002acf4) scroll_pane_cp23

0x1324,	// (0x00020316) bg_popup_preview_window_pane_cp02_ParamLimits

0xc319,	// (0x0002b30b) list_preview_fixed_pane_ParamLimits

0xc32f,	// (0x0002b321) list_preview_fixed_pane_cp_ParamLimits

0xc32f,	// (0x0002b321) list_preview_fixed_pane_cp

0xc33b,	// (0x0002b32d) popup_preview_fixed_window_g1_ParamLimits

0xc33b,	// (0x0002b32d) popup_preview_fixed_window_g1

0xc347,	// (0x0002b339) popup_preview_fixed_window_g2_ParamLimits

0xc347,	// (0x0002b339) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0002eb59) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0002eb59) popup_preview_fixed_window_g

0x6899,	// (0x0002588b) aid_navi_side_left_pane_ParamLimits

0x68ae,	// (0x000258a0) aid_navi_side_right_pane_ParamLimits

0x68c6,	// (0x000258b8) navi_icon_pane_stacon_ParamLimits

0x68da,	// (0x000258cc) navi_navi_pane_stacon_ParamLimits

0x68c6,	// (0x000258b8) navi_text_pane_stacon_ParamLimits

0x1167,	// (0x00020159) main_text_info_pane

0xc575,	// (0x0002b567) listscroll_text_info_pane

0xc57d,	// (0x0002b56f) list_text_info_pane_ParamLimits

0xc57d,	// (0x0002b56f) list_text_info_pane

0xc58c,	// (0x0002b57e) scroll_pane_cp24_ParamLimits

0xc58c,	// (0x0002b57e) scroll_pane_cp24

0xc5aa,	// (0x0002b59c) list_text_info_pane_t1_ParamLimits

0xc5aa,	// (0x0002b59c) list_text_info_pane_t1

0x7863,	// (0x00026855) popup_fast_swap2_window_ParamLimits

0x7863,	// (0x00026855) popup_fast_swap2_window

0xc5cf,	// (0x0002b5c1) aid_size_cell_fast2

0x1167,	// (0x00020159) bg_popup_window_pane_cp17

0x9b10,	// (0x00028b02) heading_pane_cp2

0x1553,	// (0x00020545) listscroll_fast2_pane

0xc5d9,	// (0x0002b5cb) grid_fast2_pane

0xc5e3,	// (0x0002b5d5) listscroll_fast2_pane_g1

0xc5ed,	// (0x0002b5df) listscroll_fast2_pane_g2

0x0001,

0xfbe3,	// (0x0002ebd5) listscroll_fast2_pane_g

0x2efa,	// (0x00021eec) scroll_pane_cp26

0xc5f7,	// (0x0002b5e9) cell_fast2_pane_ParamLimits

0xc5f7,	// (0x0002b5e9) cell_fast2_pane

0xc60e,	// (0x0002b600) cell_fast2_pane_g1

0xc617,	// (0x0002b609) cell_fast2_pane_g2

0xc620,	// (0x0002b612) cell_fast2_pane_g3

0x0002,

0xfbe8,	// (0x0002ebda) cell_fast2_pane_g

0x1595,	// (0x00020587) grid_highlight_pane_cp9

0x15aa,	// (0x0002059c) main_eswt_pane_ParamLimits

0x15aa,	// (0x0002059c) main_eswt_pane

0xc5a1,	// (0x0002b593) list_single_text_info_pane

0xc628,	// (0x0002b61a) eswt_ctrl_button_pane

0xc628,	// (0x0002b61a) eswt_ctrl_canvas_pane

0xc630,	// (0x0002b622) eswt_ctrl_combo_pane

0xc628,	// (0x0002b61a) eswt_ctrl_default_pane

0xc628,	// (0x0002b61a) eswt_ctrl_label_pane

0xc638,	// (0x0002b62a) eswt_ctrl_wait_pane

0xc640,	// (0x0002b632) eswt_shell_pane

0x1167,	// (0x00020159) listscroll_eswt_app_pane

0xc660,	// (0x0002b652) popup_eswt_tasktip_window_ParamLimits

0xc660,	// (0x0002b652) popup_eswt_tasktip_window

0x974e,	// (0x00028740) bg_popup_window_pane_cp18

0xc671,	// (0x0002b663) eswt_control_pane_g1_ParamLimits

0xc671,	// (0x0002b663) eswt_control_pane_g1

0xc67e,	// (0x0002b670) eswt_control_pane_g2_ParamLimits

0xc67e,	// (0x0002b670) eswt_control_pane_g2

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_ParamLimits

0xc68b,	// (0x0002b67d) eswt_control_pane_g3

0xc698,	// (0x0002b68a) eswt_control_pane_g4_ParamLimits

0xc698,	// (0x0002b68a) eswt_control_pane_g4

0x0003,

0xfbef,	// (0x0002ebe1) eswt_control_pane_g_ParamLimits

0xfbef,	// (0x0002ebe1) eswt_control_pane_g

0x18a9,	// (0x0002089b) bg_button_pane_ParamLimits

0x18a9,	// (0x0002089b) bg_button_pane

0x15aa,	// (0x0002059c) common_borders_pane_copy2_ParamLimits

0x15aa,	// (0x0002059c) common_borders_pane_copy2

0xc6a5,	// (0x0002b697) control_button_pane_g1_ParamLimits

0xc6a5,	// (0x0002b697) control_button_pane_g1

0xc6b1,	// (0x0002b6a3) control_button_pane_g2_ParamLimits

0xc6b1,	// (0x0002b6a3) control_button_pane_g2

0xc6bd,	// (0x0002b6af) control_button_pane_g3_ParamLimits

0xc6bd,	// (0x0002b6af) control_button_pane_g3

0x0002,

0xfbf8,	// (0x0002ebea) control_button_pane_g_ParamLimits

0xfbf8,	// (0x0002ebea) control_button_pane_g

0xc6d1,	// (0x0002b6c3) control_button_pane_t1

0xc6df,	// (0x0002b6d1) control_button_pane_t2

0x0001,

0xfbff,	// (0x0002ebf1) control_button_pane_t

0x96da,	// (0x000286cc) bg_button_pane_g1

0x96e2,	// (0x000286d4) bg_button_pane_g2

0x96ea,	// (0x000286dc) bg_button_pane_g3

0x96f2,	// (0x000286e4) bg_button_pane_g4

0x96fa,	// (0x000286ec) bg_button_pane_g5

0x9702,	// (0x000286f4) bg_button_pane_g6

0x970a,	// (0x000286fc) bg_button_pane_g7

0x9712,	// (0x00028704) bg_button_pane_g8

0x971a,	// (0x0002870c) bg_button_pane_g9

0x0008,

0xf861,	// (0x0002e853) bg_button_pane_g

0xbcae,	// (0x0002aca0) common_borders_pane_ParamLimits

0xbcae,	// (0x0002aca0) common_borders_pane

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy1_ParamLimits

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy1

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy1_ParamLimits

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy1

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy1_ParamLimits

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy1

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy1_ParamLimits

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy1

0xbce9,	// (0x0002acdb) bg_eswt_ctrl_canvas_pane_g1

0xbcae,	// (0x0002aca0) common_borders_pane_cp2_ParamLimits

0xbcae,	// (0x0002aca0) common_borders_pane_cp2

0xbcae,	// (0x0002aca0) common_borders_pane_cp3_ParamLimits

0xbcae,	// (0x0002aca0) common_borders_pane_cp3

0xc6ed,	// (0x0002b6df) separator_horizontal_pane

0xc6f5,	// (0x0002b6e7) separator_vertical_pane

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy2_ParamLimits

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy2

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy2_ParamLimits

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy2

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy2_ParamLimits

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy2

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy2_ParamLimits

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy2

0x1167,	// (0x00020159) common_borders_pane_cp4

0xc6fe,	// (0x0002b6f0) separator_horizontal_pane_g1

0xc707,	// (0x0002b6f9) separator_horizontal_pane_g2

0xc710,	// (0x0002b702) separator_horizontal_pane_g3

0x0002,

0xfc04,	// (0x0002ebf6) separator_horizontal_pane_g

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy3_ParamLimits

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy3

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy3_ParamLimits

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy3

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy3_ParamLimits

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy3

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy3_ParamLimits

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy3

0x1167,	// (0x00020159) common_borders_pane_cp5

0xc719,	// (0x0002b70b) separator_vertical_pane_g1

0xc722,	// (0x0002b714) separator_vertical_pane_g2

0xc72b,	// (0x0002b71d) separator_vertical_pane_g3

0x0002,

0xfc0b,	// (0x0002ebfd) separator_vertical_pane_g

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy4_ParamLimits

0xc671,	// (0x0002b663) eswt_control_pane_g1_copy4

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy4_ParamLimits

0xc67e,	// (0x0002b670) eswt_control_pane_g2_copy4

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy4_ParamLimits

0xc68b,	// (0x0002b67d) eswt_control_pane_g3_copy4

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy4_ParamLimits

0xc698,	// (0x0002b68a) eswt_control_pane_g4_copy4

0xc734,	// (0x0002b726) eswt_ctrl_combo_button_pane

0xc73c,	// (0x0002b72e) eswt_ctrl_input_pane

0xc744,	// (0x0002b736) popup_choice_list_window_cp70

0xc74c,	// (0x0002b73e) eswt_ctrl_input_pane_t1

0x1167,	// (0x00020159) input_focus_pane_cp70

0xbcae,	// (0x0002aca0) bg_button_pane_cp70_ParamLimits

0xbcae,	// (0x0002aca0) bg_button_pane_cp70

0xc75a,	// (0x0002b74c) eswt_ctrl_combo_button_pane_g1

0xc762,	// (0x0002b754) wait_bar_pane_cp70

0x974e,	// (0x00028740) bg_popup_window_pane_cp70_ParamLimits

0x974e,	// (0x00028740) bg_popup_window_pane_cp70

0xc76a,	// (0x0002b75c) popup_eswt_tasktip_window_t1

0xc780,	// (0x0002b772) wait_bar_pane_cp71_ParamLimits

0xc780,	// (0x0002b772) wait_bar_pane_cp71

0xc78c,	// (0x0002b77e) grid_eswt_app_pane

0x32e9,	// (0x000222db) scroll_pane_cp70

0xc795,	// (0x0002b787) cell_eswt_app_pane_ParamLimits

0xc795,	// (0x0002b787) cell_eswt_app_pane

0xc7c7,	// (0x0002b7b9) cell_eswt_app_pane_g1_ParamLimits

0xc7c7,	// (0x0002b7b9) cell_eswt_app_pane_g1

0xc7f6,	// (0x0002b7e8) cell_eswt_app_pane_g2_ParamLimits

0xc7f6,	// (0x0002b7e8) cell_eswt_app_pane_g2

0x0001,

0xfc12,	// (0x0002ec04) cell_eswt_app_pane_g_ParamLimits

0xfc12,	// (0x0002ec04) cell_eswt_app_pane_g

0xc81f,	// (0x0002b811) cell_eswt_app_pane_t1_ParamLimits

0xc81f,	// (0x0002b811) cell_eswt_app_pane_t1

0xc851,	// (0x0002b843) grid_highlight_pane_cp70_ParamLimits

0xc851,	// (0x0002b843) grid_highlight_pane_cp70

0x716a,	// (0x0002615c) set_content_pane_g1

0x75e4,	// (0x000265d6) status_small_volume_pane

0x88bb,	// (0x000278ad) status_small_volume_pane_g1

0x88c3,	// (0x000278b5) volume_small2_pane

0x88cc,	// (0x000278be) volume_small2_pane_g1

0x88d5,	// (0x000278c7) volume_small2_pane_g2

0x88de,	// (0x000278d0) volume_small2_pane_g3

0x88e7,	// (0x000278d9) volume_small2_pane_g4

0x88f0,	// (0x000278e2) volume_small2_pane_g5

0x88f9,	// (0x000278eb) volume_small2_pane_g6

0x8902,	// (0x000278f4) volume_small2_pane_g7

0x890b,	// (0x000278fd) volume_small2_pane_g8

0x8914,	// (0x00027906) volume_small2_pane_g9

0x891d,	// (0x0002790f) volume_small2_pane_g10

0x0009,

0xfc17,	// (0x0002ec09) volume_small2_pane_g

0xc0a0,	// (0x0002b092) fep_vkb_top_text_pane_g1_ParamLimits

0xc0bb,	// (0x0002b0ad) fep_vkb_top_text_pane_t1_ParamLimits

0xc353,	// (0x0002b345) popup_preview_fixed_window_g3_ParamLimits

0xc353,	// (0x0002b345) popup_preview_fixed_window_g3

0x7d74,	// (0x00026d66) popup_toolbar_trans_pane

0xaa93,	// (0x00029a85) aid_height_set_list_ParamLimits

0xaaa4,	// (0x00029a96) aid_size_parent_ParamLimits

0x77e3,	// (0x000267d5) list_highlight_pane_cp2_ParamLimits

0x716a,	// (0x0002615c) set_content_pane_g1_ParamLimits

0x0598,	// (0x0001f58a) list_single_image_pane_ParamLimits

0x0598,	// (0x0001f58a) list_single_image_pane

0xc85d,	// (0x0002b84f) aid_size_cell_image_ParamLimits

0xc85d,	// (0x0002b84f) aid_size_cell_image

0xc86a,	// (0x0002b85c) grid_single_image_pane_ParamLimits

0xc86a,	// (0x0002b85c) grid_single_image_pane

0x18cf,	// (0x000208c1) list_single_image_pane_g1_ParamLimits

0x18cf,	// (0x000208c1) list_single_image_pane_g1

0x2d71,	// (0x00021d63) list_single_image_pane_g2_ParamLimits

0x2d71,	// (0x00021d63) list_single_image_pane_g2

0x0001,

0xfc2c,	// (0x0002ec1e) list_single_image_pane_g_ParamLimits

0xfc2c,	// (0x0002ec1e) list_single_image_pane_g

0xc878,	// (0x0002b86a) list_single_image_pane_t1_ParamLimits

0xc878,	// (0x0002b86a) list_single_image_pane_t1

0xc88e,	// (0x0002b880) cell_image_list_pane_ParamLimits

0xc88e,	// (0x0002b880) cell_image_list_pane

0xc8a4,	// (0x0002b896) cell_image_list_pane_g1

0xc8ad,	// (0x0002b89f) cell_image_list_pane_g2

0x0001,

0xfc31,	// (0x0002ec23) cell_image_list_pane_g

0xc8b6,	// (0x0002b8a8) aid_size_cell_tb_trans_pane

0x18a9,	// (0x0002089b) bg_tb_trans_pane

0xc8c8,	// (0x0002b8ba) grid_tb_trans_pane

0x96da,	// (0x000286cc) bg_tb_trans_pane_g1

0x96e2,	// (0x000286d4) bg_tb_trans_pane_g2

0x96ea,	// (0x000286dc) bg_tb_trans_pane_g3

0x96f2,	// (0x000286e4) bg_tb_trans_pane_g4

0x96fa,	// (0x000286ec) bg_tb_trans_pane_g5

0x9712,	// (0x00028704) bg_tb_trans_pane_g6

0x971a,	// (0x0002870c) bg_tb_trans_pane_g7

0x9702,	// (0x000286f4) bg_tb_trans_pane_g8

0x970a,	// (0x000286fc) bg_tb_trans_pane_g9

0x0008,

0xfc36,	// (0x0002ec28) bg_tb_trans_pane_g

0xc8dc,	// (0x0002b8ce) cell_toolbar_trans_pane_ParamLimits

0xc8dc,	// (0x0002b8ce) cell_toolbar_trans_pane

0xbce9,	// (0x0002acdb) cell_toolbar_trans_pane_g1

0xb921,	// (0x0002a913) list_form2_midp_pane_t1

0xb92f,	// (0x0002a921) list_form2_midp_pane_t2

0x0001,

0xfadf,	// (0x0002ead1) list_form2_midp_pane_t

0xb93d,	// (0x0002a92f) scroll_pane_cp51_ParamLimits

0xbb04,	// (0x0002aaf6) form2_midp_wait_pane_g1

0xbb0d,	// (0x0002aaff) form2_midp_wait_pane_g2

0xbb16,	// (0x0002ab08) form2_midp_wait_pane_g3

0x0002,

0xfaf4,	// (0x0002eae6) form2_midp_wait_pane_g

0x11d7,	// (0x000201c9) list_highlight_pane_cp21_ParamLimits

0xbb4f,	// (0x0002ab41) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbb5e,	// (0x0002ab50) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xacc1,	// (0x00029cb3) list_single_2graphic_im_pane_ParamLimits

0xacc1,	// (0x00029cb3) list_single_2graphic_im_pane

0xc902,	// (0x0002b8f4) list_single_2graphic_im_pane_g1_ParamLimits

0xc902,	// (0x0002b8f4) list_single_2graphic_im_pane_g1

0xc913,	// (0x0002b905) list_single_2graphic_im_pane_g2_ParamLimits

0xc913,	// (0x0002b905) list_single_2graphic_im_pane_g2

0xc91f,	// (0x0002b911) list_single_2graphic_im_pane_g3_ParamLimits

0xc91f,	// (0x0002b911) list_single_2graphic_im_pane_g3

0x0003,

0xfc49,	// (0x0002ec3b) list_single_2graphic_im_pane_g_ParamLimits

0xfc49,	// (0x0002ec3b) list_single_2graphic_im_pane_g

0xc93f,	// (0x0002b931) list_single_2graphic_im_pane_t1_ParamLimits

0xc93f,	// (0x0002b931) list_single_2graphic_im_pane_t1

0xc35f,	// (0x0002b351) list_single_graphic_2heading_pane_fp_ParamLimits

0xc35f,	// (0x0002b351) list_single_graphic_2heading_pane_fp

0x5bee,	// (0x00024be0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5bee,	// (0x00024be0) list_single_graphic_2heading_pane_fp_g1

0xc378,	// (0x0002b36a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc378,	// (0x0002b36a) list_single_graphic_2heading_pane_fp_g2

0x5bb7,	// (0x00024ba9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5bb7,	// (0x00024ba9) list_single_graphic_2heading_pane_fp_g3

0x5bc3,	// (0x00024bb5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5bc3,	// (0x00024bb5) list_single_graphic_2heading_pane_fp_g4

0xc384,	// (0x0002b376) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc384,	// (0x0002b376) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0002eb69) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0002eb69) list_single_graphic_2heading_pane_fp_g

0x5dbb,	// (0x00024dad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5dbb,	// (0x00024dad) list_single_graphic_2heading_pane_fp_t1

0x5c26,	// (0x00024c18) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5c26,	// (0x00024c18) list_single_graphic_2heading_pane_fp_t2

0x5dd1,	// (0x00024dc3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5dd1,	// (0x00024dc3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc52,	// (0x0002ec44) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc52,	// (0x0002ec44) list_single_graphic_2heading_pane_fp_t

0xbd62,	// (0x0002ad54) fep_hwr_write_pane_g5_ParamLimits

0xbd62,	// (0x0002ad54) fep_hwr_write_pane_g5

0xbd6e,	// (0x0002ad60) fep_hwr_write_pane_g6_ParamLimits

0xbd6e,	// (0x0002ad60) fep_hwr_write_pane_g6

0xc640,	// (0x0002b632) eswt_shell_pane_ParamLimits

0x974e,	// (0x00028740) bg_popup_window_pane_cp18_ParamLimits

0xa9ea,	// (0x000299dc) heading_pane_cp70

0xc76a,	// (0x0002b75c) popup_eswt_tasktip_window_t1_ParamLimits

0x7ea7,	// (0x00026e99) aid_touch_tab_arrow_left

0x7eb3,	// (0x00026ea5) aid_touch_tab_arrow_right

0x6399,	// (0x0002538b) title_pane_g3_ParamLimits

0x6399,	// (0x0002538b) title_pane_g3

0x1803,	// (0x000207f5) set_value_pane_g1

0x7d74,	// (0x00026d66) popup_toolbar_trans_pane_ParamLimits

0xc8b6,	// (0x0002b8a8) aid_size_cell_tb_trans_pane_ParamLimits

0x18a9,	// (0x0002089b) bg_tb_trans_pane_ParamLimits

0xc8c8,	// (0x0002b8ba) grid_tb_trans_pane_ParamLimits

0x1324,	// (0x00020316) cont_note_pane_ParamLimits

0x1324,	// (0x00020316) cont_note_pane

0x15aa,	// (0x0002059c) cont_snote2_single_text_pane_ParamLimits

0x15aa,	// (0x0002059c) cont_snote2_single_text_pane

0x15aa,	// (0x0002059c) cont_snote2_single_graphic_pane_ParamLimits

0x15aa,	// (0x0002059c) cont_snote2_single_graphic_pane

0x9d38,	// (0x00028d2a) cont_note_wait_pane_ParamLimits

0x9d38,	// (0x00028d2a) cont_note_wait_pane

0x9d38,	// (0x00028d2a) cont_note_image_pane_ParamLimits

0x9d38,	// (0x00028d2a) cont_note_image_pane

0xc970,	// (0x0002b962) popup_note2_window_g1_ParamLimits

0xc970,	// (0x0002b962) popup_note2_window_g1

0xc9a1,	// (0x0002b993) popup_note2_window_t1_ParamLimits

0xc9a1,	// (0x0002b993) popup_note2_window_t1

0xc9e6,	// (0x0002b9d8) popup_note2_window_t2_ParamLimits

0xc9e6,	// (0x0002b9d8) popup_note2_window_t2

0xca2b,	// (0x0002ba1d) popup_note2_window_t3_ParamLimits

0xca2b,	// (0x0002ba1d) popup_note2_window_t3

0xca70,	// (0x0002ba62) popup_note2_window_t4_ParamLimits

0xca70,	// (0x0002ba62) popup_note2_window_t4

0x13a8,	// (0x0002039a) popup_note2_window_t5_ParamLimits

0x13a8,	// (0x0002039a) popup_note2_window_t5

0x0004,

0xfc5e,	// (0x0002ec50) popup_note2_window_t_ParamLimits

0xfc5e,	// (0x0002ec50) popup_note2_window_t

0xca9f,	// (0x0002ba91) popup_note2_image_window_g1_ParamLimits

0xca9f,	// (0x0002ba91) popup_note2_image_window_g1

0xcaab,	// (0x0002ba9d) popup_note2_image_window_g2_ParamLimits

0xcaab,	// (0x0002ba9d) popup_note2_image_window_g2

0x0001,

0xfc69,	// (0x0002ec5b) popup_note2_image_window_g_ParamLimits

0xfc69,	// (0x0002ec5b) popup_note2_image_window_g

0xcabd,	// (0x0002baaf) popup_note2_image_window_t1_ParamLimits

0xcabd,	// (0x0002baaf) popup_note2_image_window_t1

0xcad5,	// (0x0002bac7) popup_note2_image_window_t2_ParamLimits

0xcad5,	// (0x0002bac7) popup_note2_image_window_t2

0xcaed,	// (0x0002badf) popup_note2_image_window_t3_ParamLimits

0xcaed,	// (0x0002badf) popup_note2_image_window_t3

0x0002,

0xfc6e,	// (0x0002ec60) popup_note2_image_window_t_ParamLimits

0xfc6e,	// (0x0002ec60) popup_note2_image_window_t

0x9d46,	// (0x00028d38) popup_note2_wait_window_g1_ParamLimits

0x9d46,	// (0x00028d38) popup_note2_wait_window_g1

0xcb09,	// (0x0002bafb) popup_note2_wait_window_g2_ParamLimits

0xcb09,	// (0x0002bafb) popup_note2_wait_window_g2

0x9d5e,	// (0x00028d50) popup_note2_wait_window_g3_ParamLimits

0x9d5e,	// (0x00028d50) popup_note2_wait_window_g3

0x0002,

0xfc75,	// (0x0002ec67) popup_note2_wait_window_g_ParamLimits

0xfc75,	// (0x0002ec67) popup_note2_wait_window_g

0xcb15,	// (0x0002bb07) popup_note2_wait_window_t1_ParamLimits

0xcb15,	// (0x0002bb07) popup_note2_wait_window_t1

0xcb33,	// (0x0002bb25) popup_note2_wait_window_t2_ParamLimits

0xcb33,	// (0x0002bb25) popup_note2_wait_window_t2

0xcb51,	// (0x0002bb43) popup_note2_wait_window_t3_ParamLimits

0xcb51,	// (0x0002bb43) popup_note2_wait_window_t3

0xcb63,	// (0x0002bb55) popup_note2_wait_window_t4_ParamLimits

0xcb63,	// (0x0002bb55) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x0002ec6e) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x0002ec6e) popup_note2_wait_window_t

0xcb75,	// (0x0002bb67) wait_bar2_pane_ParamLimits

0xcb75,	// (0x0002bb67) wait_bar2_pane

0xcb8d,	// (0x0002bb7f) popup_snote2_single_text_window_g1_ParamLimits

0xcb8d,	// (0x0002bb7f) popup_snote2_single_text_window_g1

0xcbb5,	// (0x0002bba7) popup_snote2_single_text_window_t1_ParamLimits

0xcbb5,	// (0x0002bba7) popup_snote2_single_text_window_t1

0xcc01,	// (0x0002bbf3) popup_snote2_single_text_window_t2_ParamLimits

0xcc01,	// (0x0002bbf3) popup_snote2_single_text_window_t2

0xcc4d,	// (0x0002bc3f) popup_snote2_single_text_window_t3_ParamLimits

0xcc4d,	// (0x0002bc3f) popup_snote2_single_text_window_t3

0xcc8e,	// (0x0002bc80) popup_snote2_single_text_window_t4_ParamLimits

0xcc8e,	// (0x0002bc80) popup_snote2_single_text_window_t4

0xccc4,	// (0x0002bcb6) popup_snote2_single_text_window_t5_ParamLimits

0xccc4,	// (0x0002bcb6) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x0002ec77) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x0002ec77) popup_snote2_single_text_window_t

0xccef,	// (0x0002bce1) popup_snote2_single_graphic_window_g1_ParamLimits

0xccef,	// (0x0002bce1) popup_snote2_single_graphic_window_g1

0xcd17,	// (0x0002bd09) popup_snote2_single_graphic_window_g2_ParamLimits

0xcd17,	// (0x0002bd09) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x0002ec82) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x0002ec82) popup_snote2_single_graphic_window_g

0xcd3f,	// (0x0002bd31) popup_snote2_single_graphic_window_t1_ParamLimits

0xcd3f,	// (0x0002bd31) popup_snote2_single_graphic_window_t1

0xcd8b,	// (0x0002bd7d) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd8b,	// (0x0002bd7d) popup_snote2_single_graphic_window_t2

0xcc4d,	// (0x0002bc3f) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc4d,	// (0x0002bc3f) popup_snote2_single_graphic_window_t3

0xcc8e,	// (0x0002bc80) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc8e,	// (0x0002bc80) popup_snote2_single_graphic_window_t4

0xccc4,	// (0x0002bcb6) popup_snote2_single_graphic_window_t5_ParamLimits

0xccc4,	// (0x0002bcb6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x0002ec87) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x0002ec87) popup_snote2_single_graphic_window_t

0xb7ed,	// (0x0002a7df) clock_nsta_pane_cp2_t1

0xb7ed,	// (0x0002a7df) clock_nsta_pane_cp2_t2

0x0001,

0xfab5,	// (0x0002eaa7) clock_nsta_pane_cp2_t

0x53eb,	// (0x000243dd) form_field_data_wide_pane_g1_ParamLimits

0x18cf,	// (0x000208c1) form_field_data_wide_pane_g2_ParamLimits

0x18cf,	// (0x000208c1) form_field_data_wide_pane_g2

0x2d71,	// (0x00021d63) form_field_data_wide_pane_g3_ParamLimits

0x2d71,	// (0x00021d63) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002e668) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002e668) form_field_data_wide_pane_g

0xb6ef,	// (0x0002a6e1) grid_touch_3_pane_ParamLimits

0xb6ef,	// (0x0002a6e1) grid_touch_3_pane

0xcdd7,	// (0x0002bdc9) cell_touch_3_pane_ParamLimits

0xcdd7,	// (0x0002bdc9) cell_touch_3_pane

0xbce9,	// (0x0002acdb) cell_touch_3_pane_g1

0xbce9,	// (0x0002acdb) cell_touch_3_pane_g2

0x0001,

0xfb3a,	// (0x0002eb2c) cell_touch_3_pane_g

0x1400,	// (0x000203f2) cont_query_data_pane

0x1408,	// (0x000203fa) cont_query_data_pane_cp1

0xce0a,	// (0x0002bdfc) button_value_adjust_pane_cp7

0xce12,	// (0x0002be04) query_popup_pane_cp3

0x6bcc,	// (0x00025bbe) bg_popup_sub_pane_cp22_ParamLimits

0x6be2,	// (0x00025bd4) navi_navi_volume_pane_cp2

0x6bfd,	// (0x00025bef) popup_side_volume_key_window_g2

0x6c0c,	// (0x00025bfe) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0002e6fe) popup_side_volume_key_window_g

0x6c29,	// (0x00025c1b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0002e705) popup_side_volume_key_window_t

0x7025,	// (0x00026017) popup_side_volume_key_window_ParamLimits

0x5016,	// (0x00024008) list_double_graphic_pane_g4_ParamLimits

0x5016,	// (0x00024008) list_double_graphic_pane_g4

0xacf0,	// (0x00029ce2) list_single_2heading_msg_pane_ParamLimits

0xacf0,	// (0x00029ce2) list_single_2heading_msg_pane

0x5df1,	// (0x00024de3) list_single_2heading_msg_pane_g1_ParamLimits

0x5df1,	// (0x00024de3) list_single_2heading_msg_pane_g1

0x4e7f,	// (0x00023e71) list_single_2heading_msg_pane_g2_ParamLimits

0x4e7f,	// (0x00023e71) list_single_2heading_msg_pane_g2

0x5dfd,	// (0x00024def) list_single_2heading_msg_pane_g3_ParamLimits

0x5dfd,	// (0x00024def) list_single_2heading_msg_pane_g3

0x5e09,	// (0x00024dfb) list_single_2heading_msg_pane_g4_ParamLimits

0x5e09,	// (0x00024dfb) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x0002ec92) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x0002ec92) list_single_2heading_msg_pane_g

0x5e21,	// (0x00024e13) list_single_2heading_msg_pane_t1_ParamLimits

0x5e21,	// (0x00024e13) list_single_2heading_msg_pane_t1

0x5e49,	// (0x00024e3b) list_single_2heading_msg_pane_t2_ParamLimits

0x5e49,	// (0x00024e3b) list_single_2heading_msg_pane_t2

0x5e7d,	// (0x00024e6f) list_single_2heading_msg_pane_t3_ParamLimits

0x5e7d,	// (0x00024e6f) list_single_2heading_msg_pane_t3

0x5eb6,	// (0x00024ea8) list_single_2heading_msg_pane_t4_ParamLimits

0x5eb6,	// (0x00024ea8) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x0002ec9b) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x0002ec9b) list_single_2heading_msg_pane_t

0x1185,	// (0x00020177) title_pane_g4_ParamLimits

0x1185,	// (0x00020177) title_pane_g4

0x67e9,	// (0x000257db) title_pane_stacon_g3_ParamLimits

0x67e9,	// (0x000257db) title_pane_stacon_g3

0xc933,	// (0x0002b925) list_single_2graphic_im_pane_g4_ParamLimits

0xc933,	// (0x0002b925) list_single_2graphic_im_pane_g4

0xa7a8,	// (0x0002979a) popup_side_volume_key_window_cp

0xb017,	// (0x0002a009) main_idle_act2_pane_t1

0x813b,	// (0x0002712d) toolbar_button_pane_g10

0x66fa,	// (0x000256ec) popup_toolbar_window_cp1

0xb7de,	// (0x0002a7d0) clock_nsta_pane_cp_t1

0xb7de,	// (0x0002a7d0) clock_nsta_pane_cp_t2

0x0001,

0xfab0,	// (0x0002eaa2) clock_nsta_pane_cp_t

0x6be2,	// (0x00025bd4) navi_navi_volume_pane_cp2_ParamLimits

0x6bf1,	// (0x00025be3) popup_side_volume_key_window_g1_ParamLimits

0x6bfd,	// (0x00025bef) popup_side_volume_key_window_g2_ParamLimits

0x6c0c,	// (0x00025bfe) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0002e6fe) popup_side_volume_key_window_g_ParamLimits

0x85b0,	// (0x000275a2) fep_hwr_aid_pane

0x1137,	// (0x00020129) bg_fep_hwr_top_pane_g4_ParamLimits

0xbd32,	// (0x0002ad24) fep_hwr_top_pane_g1_ParamLimits

0xbd44,	// (0x0002ad36) fep_hwr_top_pane_g2_ParamLimits

0x866b,	// (0x0002765d) fep_hwr_top_pane_g3_ParamLimits

0xfb05,	// (0x0002eaf7) fep_hwr_top_pane_g_ParamLimits

0x8680,	// (0x00027672) fep_hwr_top_text_pane_ParamLimits

0xa55d,	// (0x0002954f) aid_touch_tab_arrow_arrow_2

0xa566,	// (0x00029558) aid_touch_tab_arrow_left_2

0x85c4,	// (0x000275b6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x85fb,	// (0x000275ed) fep_hwr_prediction_pane

0xbe9a,	// (0x0002ae8c) fep_vkb_prediction_pane

0xbfa0,	// (0x0002af92) fep_vkb_side_pane_g3_ParamLimits

0xbfa0,	// (0x0002af92) fep_vkb_side_pane_g3

0xbf4c,	// (0x0002af3e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc41a,	// (0x0002b40c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc427,	// (0x0002b419) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0002eba1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xce39,	// (0x0002be2b) fep_hwr_prediction_pane_g1

0x8926,	// (0x00027918) fep_hwr_prediction_pane_g2

0x892e,	// (0x00027920) fep_hwr_prediction_pane_g3

0x8936,	// (0x00027928) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0002eca4) fep_hwr_prediction_pane_g

0xce39,	// (0x0002be2b) fep_vkb_prediction_pane_g1

0xce43,	// (0x0002be35) fep_vkb_prediction_pane_g2

0xce4b,	// (0x0002be3d) fep_vkb_prediction_pane_g3

0xce53,	// (0x0002be45) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x0002ecad) fep_vkb_prediction_pane_g

0x8430,	// (0x00027422) slider_set_pane_g3

0x8444,	// (0x00027436) slider_set_pane_g4

0x845c,	// (0x0002744e) slider_set_pane_g5

0x8430,	// (0x00027422) slider_set_pane_g6

0x8472,	// (0x00027464) slider_set_pane_g7

0xac23,	// (0x00029c15) slider_form_pane_g3

0xac2c,	// (0x00029c1e) slider_form_pane_g4

0xac34,	// (0x00029c26) slider_form_pane_g5

0xac23,	// (0x00029c15) slider_form_pane_g6

0xac3c,	// (0x00029c2e) slider_form_pane_g7

0xb2c5,	// (0x0002a2b7) slider_set_pane_vc_g3

0xb2ce,	// (0x0002a2c0) slider_set_pane_vc_g4

0xb2d7,	// (0x0002a2c9) slider_set_pane_vc_g5

0xb2c5,	// (0x0002a2b7) slider_set_pane_vc_g6

0xb2e0,	// (0x0002a2d2) slider_set_pane_vc_g7

0xb4b4,	// (0x0002a4a6) slider_form_pane_vc_g1

0xb4bd,	// (0x0002a4af) slider_form_pane_vc_g2

0xb4c6,	// (0x0002a4b8) slider_form_pane_vc_g3

0xb4b4,	// (0x0002a4a6) slider_form_pane_vc_g4

0xb4cf,	// (0x0002a4c1) slider_form_pane_vc_g5

0x0004,

0xfa82,	// (0x0002ea74) slider_form_pane_vc_g

0x1167,	// (0x00020159) main_idle_act3_pane

0xce5b,	// (0x0002be4d) ai3_links_pane

0xce64,	// (0x0002be56) popup_ai3_data_window_ParamLimits

0xce64,	// (0x0002be56) popup_ai3_data_window

0x1167,	// (0x00020159) grid_ai3_links_pane

0xce82,	// (0x0002be74) cell_ai3_links_pane_ParamLimits

0xce82,	// (0x0002be74) cell_ai3_links_pane

0xce9c,	// (0x0002be8e) bg_popup_sub_pane_cp11

0xcea9,	// (0x0002be9b) cell_ai3_links_pane_g1

0x1167,	// (0x00020159) bg_popup_sub_pane_cp12

0xcece,	// (0x0002bec0) heading_ai3_data_pane

0xced6,	// (0x0002bec8) list_ai3_gene_pane

0xcee2,	// (0x0002bed4) popup_ai3_data_window_g1

0xceea,	// (0x0002bedc) heading_ai3_data_pane_g1

0xcef2,	// (0x0002bee4) heading_ai3_data_pane_t1

0xcf00,	// (0x0002bef2) list_double_ai3_gene_pane_ParamLimits

0xcf00,	// (0x0002bef2) list_double_ai3_gene_pane

0xcf0d,	// (0x0002beff) list_single_ai3_gene_pane_ParamLimits

0xcf0d,	// (0x0002beff) list_single_ai3_gene_pane

0xbcae,	// (0x0002aca0) list_highlight_pane_cp7_ParamLimits

0xbcae,	// (0x0002aca0) list_highlight_pane_cp7

0xcf1a,	// (0x0002bf0c) list_single_a13_gene_pane_t1_ParamLimits

0xcf1a,	// (0x0002bf0c) list_single_a13_gene_pane_t1

0xcf31,	// (0x0002bf23) list_single_ai3_gene_pane_g1

0xcf3a,	// (0x0002bf2c) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x0002ecb6) list_single_ai3_gene_pane_g

0xcf42,	// (0x0002bf34) list_double_ai3_gene_pane_g1_ParamLimits

0xcf42,	// (0x0002bf34) list_double_ai3_gene_pane_g1

0xcf4e,	// (0x0002bf40) list_double_ai3_gene_pane_t1_ParamLimits

0xcf4e,	// (0x0002bf40) list_double_ai3_gene_pane_t1

0xcf6a,	// (0x0002bf5c) list_double_ai3_gene_pane_t2_ParamLimits

0xcf6a,	// (0x0002bf5c) list_double_ai3_gene_pane_t2

0xcf7f,	// (0x0002bf71) list_double_ai3_gene_pane_t3_ParamLimits

0xcf7f,	// (0x0002bf71) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x0002ecbb) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x0002ecbb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5de7,	// (0x00024dd9) aid_size_min_col_2

0xce23,	// (0x0002be15) aid_size_min_msg_ParamLimits

0xce23,	// (0x0002be15) aid_size_min_msg

0xc0ac,	// (0x0002b09e) fep_vkb_top_text_pane_g2_ParamLimits

0xc0ac,	// (0x0002b09e) fep_vkb_top_text_pane_g2

0x0001,

0xfb35,	// (0x0002eb27) fep_vkb_top_text_pane_g_ParamLimits

0xfb35,	// (0x0002eb27) fep_vkb_top_text_pane_g

0x1167,	// (0x00020159) main_hc_apps_shell_pane

0xcf9c,	// (0x0002bf8e) grid_hc_apps_pane_ParamLimits

0xcf9c,	// (0x0002bf8e) grid_hc_apps_pane

0xcfab,	// (0x0002bf9d) list_hc_apps_pane

0xcfb3,	// (0x0002bfa5) scroll_pane_cp37_ParamLimits

0xcfb3,	// (0x0002bfa5) scroll_pane_cp37

0xcfbf,	// (0x0002bfb1) cell_hc_apps_pane_ParamLimits

0xcfbf,	// (0x0002bfb1) cell_hc_apps_pane

0xd077,	// (0x0002c069) cell_hc_apps_pane_g1_ParamLimits

0xd077,	// (0x0002c069) cell_hc_apps_pane_g1

0xd0a8,	// (0x0002c09a) cell_hc_apps_pane_g2_ParamLimits

0xd0a8,	// (0x0002c09a) cell_hc_apps_pane_g2

0xd0c4,	// (0x0002c0b6) cell_hc_apps_pane_g3_ParamLimits

0xd0c4,	// (0x0002c0b6) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x0002ecc2) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x0002ecc2) cell_hc_apps_pane_g

0xd0e6,	// (0x0002c0d8) cell_hc_apps_pane_t1_ParamLimits

0xd0e6,	// (0x0002c0d8) cell_hc_apps_pane_t1

0x1324,	// (0x00020316) grid_highlight_pane_cp10_ParamLimits

0x1324,	// (0x00020316) grid_highlight_pane_cp10

0xd126,	// (0x0002c118) list_single_hc_apps_pane_ParamLimits

0xd126,	// (0x0002c118) list_single_hc_apps_pane

0xd165,	// (0x0002c157) list_single_hc_apps_pane_g1

0x5edb,	// (0x00024ecd) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x0002ecc9) list_single_hc_apps_pane_g

0x5ef4,	// (0x00024ee6) list_single_hc_apps_pane_g2_copy1

0x5f10,	// (0x00024f02) list_single_hc_apps_pane_t1

0x11d7,	// (0x000201c9) bg_set_opt_pane_cp_ParamLimits

0x644b,	// (0x0002543d) setting_slider_pane_t1_ParamLimits

0x6464,	// (0x00025456) setting_slider_pane_t2_ParamLimits

0x647e,	// (0x00025470) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e550) setting_slider_pane_t_ParamLimits

0x6496,	// (0x00025488) slider_set_pane_ParamLimits

0x7674,	// (0x00026666) control_pane_g5_ParamLimits

0x7674,	// (0x00026666) control_pane_g5

0xaa56,	// (0x00029a48) slider_set_pane_g1_ParamLimits

0x8424,	// (0x00027416) slider_set_pane_g2_ParamLimits

0x8430,	// (0x00027422) slider_set_pane_g3_ParamLimits

0x8444,	// (0x00027436) slider_set_pane_g4_ParamLimits

0x845c,	// (0x0002744e) slider_set_pane_g5_ParamLimits

0x8430,	// (0x00027422) slider_set_pane_g6_ParamLimits

0x8472,	// (0x00027464) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0002e951) slider_set_pane_g_ParamLimits

0x7115,	// (0x00026107) navi_icon_text_pane_ParamLimits

0x7e66,	// (0x00026e58) aid_fill_nsta_2_ParamLimits

0x7ea7,	// (0x00026e99) aid_touch_tab_arrow_left_ParamLimits

0x7eb3,	// (0x00026ea5) aid_touch_tab_arrow_right_ParamLimits

0x7f1f,	// (0x00026f11) clock_nsta_pane_ParamLimits

0xa53f,	// (0x00029531) navi_icon_pane_g1_ParamLimits

0xa54b,	// (0x0002953d) navi_text_pane_t1_ParamLimits

0xb8fb,	// (0x0002a8ed) navi_icon_text_pane_g1_ParamLimits

0xb907,	// (0x0002a8f9) navi_icon_text_pane_t1_ParamLimits

0xd165,	// (0x0002c157) list_single_hc_apps_pane_g1_ParamLimits

0x5edb,	// (0x00024ecd) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x0002ecc9) list_single_hc_apps_pane_g_ParamLimits

0x5ef4,	// (0x00024ee6) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5f10,	// (0x00024f02) list_single_hc_apps_pane_t1_ParamLimits

0x627f,	// (0x00025271) popup_toolbar2_fixed_window_ParamLimits

0x627f,	// (0x00025271) popup_toolbar2_fixed_window

0x7d6a,	// (0x00026d5c) popup_toolbar2_float_window

0x1167,	// (0x00020159) bg_popup_sub_pane_cp27

0xd17e,	// (0x0002c170) grid_toolbar2_float_pane

0x1167,	// (0x00020159) bg_popup_sub_pane_cp26

0xd17e,	// (0x0002c170) grid_toolbar2_fixed_pane

0xd186,	// (0x0002c178) cell_toolbar2_fixed_pane_ParamLimits

0xd186,	// (0x0002c178) cell_toolbar2_fixed_pane

0xd196,	// (0x0002c188) cell_toolbar2_fixed_pane_g1

0xd19f,	// (0x0002c191) toolbar2_fixed_button_pane

0x96da,	// (0x000286cc) toolbar2_fixed_button_pane_g1

0x96e2,	// (0x000286d4) toolbar2_fixed_button_pane_g2

0x96ea,	// (0x000286dc) toolbar2_fixed_button_pane_g3

0x96f2,	// (0x000286e4) toolbar2_fixed_button_pane_g4

0x96fa,	// (0x000286ec) toolbar2_fixed_button_pane_g5

0x9702,	// (0x000286f4) toolbar2_fixed_button_pane_g6

0x970a,	// (0x000286fc) toolbar2_fixed_button_pane_g7

0x9712,	// (0x00028704) toolbar2_fixed_button_pane_g8

0x971a,	// (0x0002870c) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0002e853) toolbar2_fixed_button_pane_g

0xd1a7,	// (0x0002c199) cell_toolbar2_float_pane_ParamLimits

0xd1a7,	// (0x0002c199) cell_toolbar2_float_pane

0xd1b8,	// (0x0002c1aa) cell_toolbar2_float_pane_g1

0xd19f,	// (0x0002c191) toolbar2_fixed_button_pane_cp

0xbe08,	// (0x0002adfa) fep_vkb_accented_list_pane_ParamLimits

0xbe08,	// (0x0002adfa) fep_vkb_accented_list_pane

0x87e2,	// (0x000277d4) bg_popup_fep_shadow_pane_g9

0x728d,	// (0x0002627f) bg_popup_fep_shadow_pane_cp3

0x2ee1,	// (0x00021ed3) list_accented_list_pane

0xd1c1,	// (0x0002c1b3) list_single_accented_list_pane_ParamLimits

0xd1c1,	// (0x0002c1b3) list_single_accented_list_pane

0x728d,	// (0x0002627f) list_highlight_pane_cp10

0xd1d2,	// (0x0002c1c4) list_single_accented_list_pane_t1

0x7cb0,	// (0x00026ca2) popup_slider_window_ParamLimits

0x7cb0,	// (0x00026ca2) popup_slider_window

0xce1a,	// (0x0002be0c) aid_indentation_list_msg

0xd2a2,	// (0x0002c294) bg_popup_window_pane_cp19

0xd30e,	// (0x0002c300) popup_slider_window_g1

0xd32a,	// (0x0002c31c) popup_slider_window_g2

0xd346,	// (0x0002c338) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x0002ecce) popup_slider_window_g

0xd3ac,	// (0x0002c39e) popup_slider_window_t1

0xd420,	// (0x0002c412) small_volume_slider_vertical_pane

0xbce9,	// (0x0002acdb) small_volume_slider_vertical_pane_g1

0xbce9,	// (0x0002acdb) small_volume_slider_vertical_pane_g2

0xd43c,	// (0x0002c42e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x0002ece0) small_volume_slider_vertical_pane_g

0x6037,	// (0x00025029) area_side_right_pane_ParamLimits

0x6037,	// (0x00025029) area_side_right_pane

0x893e,	// (0x00027930) aid_size_side_button_ParamLimits

0x893e,	// (0x00027930) aid_size_side_button

0x8952,	// (0x00027944) grid_sctrl_middle_pane_ParamLimits

0x8952,	// (0x00027944) grid_sctrl_middle_pane

0x8971,	// (0x00027963) sctrl_sk_bottom_pane

0x8982,	// (0x00027974) sctrl_sk_top_pane

0x8994,	// (0x00027986) aid_touch_sctrl_top

0x1324,	// (0x00020316) bg_sctrl_sk_pane_ParamLimits

0x1324,	// (0x00020316) bg_sctrl_sk_pane

0x89a1,	// (0x00027993) sctrl_sk_top_pane_g1

0x89ae,	// (0x000279a0) sctrl_sk_top_pane_t1

0x8994,	// (0x00027986) aid_touch_sctrl_bottom

0x1324,	// (0x00020316) bg_sctrl_sk_pane_cp_ParamLimits

0x1324,	// (0x00020316) bg_sctrl_sk_pane_cp

0x89c9,	// (0x000279bb) sctrl_sk_bottom_pane_g1

0x89ae,	// (0x000279a0) sctrl_sk_bottom_pane_t1

0x89d2,	// (0x000279c4) cell_sctrl_middle_pane_ParamLimits

0x89d2,	// (0x000279c4) cell_sctrl_middle_pane

0x89ef,	// (0x000279e1) aid_touch_sctrl_middle_ParamLimits

0x89ef,	// (0x000279e1) aid_touch_sctrl_middle

0x18a9,	// (0x0002089b) bg_sctrl_middle_pane_ParamLimits

0x18a9,	// (0x0002089b) bg_sctrl_middle_pane

0xbf4c,	// (0x0002af3e) cell_sctrl_middle_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) cell_sctrl_middle_pane_g1

0x8a01,	// (0x000279f3) cell_sctrl_middle_pane_g2_ParamLimits

0x8a01,	// (0x000279f3) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x0002ecec) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x0002ecec) cell_sctrl_middle_pane_g

0x96da,	// (0x000286cc) bg_sctrl_middle_pane_g1

0x96e2,	// (0x000286d4) bg_sctrl_middle_pane_g2

0x96ea,	// (0x000286dc) bg_sctrl_middle_pane_g3

0x96f2,	// (0x000286e4) bg_sctrl_middle_pane_g4

0x96fa,	// (0x000286ec) bg_sctrl_middle_pane_g5

0x9702,	// (0x000286f4) bg_sctrl_middle_pane_g6

0x970a,	// (0x000286fc) bg_sctrl_middle_pane_g7

0x9712,	// (0x00028704) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x0002ecf1) bg_sctrl_middle_pane_g

0x971a,	// (0x0002870c) bg_sctrl_middle_pane_g8_copy1

0x96da,	// (0x000286cc) bg_sctrl_sk_pane_g1

0x96e2,	// (0x000286d4) bg_sctrl_sk_pane_g2

0x96ea,	// (0x000286dc) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0002e853) bg_sctrl_sk_pane_g

0x1768,	// (0x0002075a) aid_size_touch_scroll_bar

0x96f2,	// (0x000286e4) bg_sctrl_sk_pane_g4

0x96fa,	// (0x000286ec) bg_sctrl_sk_pane_g5

0x9702,	// (0x000286f4) bg_sctrl_sk_pane_g6

0x970a,	// (0x000286fc) bg_sctrl_sk_pane_g7

0x9712,	// (0x00028704) bg_sctrl_sk_pane_g8

0x971a,	// (0x0002870c) bg_sctrl_sk_pane_g9

0x78c7,	// (0x000268b9) popup_fep_china_hwr2_fs_candidate_window

0x78d1,	// (0x000268c3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x78d1,	// (0x000268c3) popup_fep_china_hwr2_fs_control_window

0xbf4c,	// (0x0002af3e) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x0002ece7) sctrl_sk_top_pane_g

0xd445,	// (0x0002c437) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd445,	// (0x0002c437) aid_fep_china_hwr2_fs_cell

0xd458,	// (0x0002c44a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd458,	// (0x0002c44a) bg_popup_fep_shadow_pane_cp4

0xd471,	// (0x0002c463) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd471,	// (0x0002c463) bg_popup_fep_shadow_pane_cp5

0xd483,	// (0x0002c475) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd483,	// (0x0002c475) popup_fep_china_hwr2_fs_control_bar_grid

0xd493,	// (0x0002c485) popup_fep_china_hwr2_fs_control_funtion_grid

0xd49b,	// (0x0002c48d) aid_fep_china_hwr2_fs_candi_cell

0x1167,	// (0x00020159) bg_popup_fep_shadow_pane_cp6

0xd4a5,	// (0x0002c497) popup_fep_china_hwr2_fs_candidate_grid

0xd4af,	// (0x0002c4a1) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4af,	// (0x0002c4a1) cell_fep_china_hwr2_fs_funtion_grid

0xbce9,	// (0x0002acdb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4c7,	// (0x0002c4b9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4c7,	// (0x0002c4b9) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4d5,	// (0x0002c4c7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4d5,	// (0x0002c4c7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x0002ed02) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x0002ed02) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4eb,	// (0x0002c4dd) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4eb,	// (0x0002c4dd) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd500,	// (0x0002c4f2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd500,	// (0x0002c4f2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x0002ed07) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x0002ed07) cell_fep_china_hwr2_fs_funtion_grid_t

0xd51c,	// (0x0002c50e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd524,	// (0x0002c516) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd52c,	// (0x0002c51e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x0002ed0c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd534,	// (0x0002c526) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd534,	// (0x0002c526) cell_fep_china_hwr2_fs_candidate_grid

0xd553,	// (0x0002c545) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd55b,	// (0x0002c54d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbce9,	// (0x0002acdb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbce9,	// (0x0002acdb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3a,	// (0x0002eb2c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd563,	// (0x0002c555) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7f2c,	// (0x00026f1e) clock_nsta_pane_cp_24_ParamLimits

0x7f2c,	// (0x00026f1e) clock_nsta_pane_cp_24

0x7fac,	// (0x00026f9e) indicator_nsta_pane_cp_24_ParamLimits

0x7fac,	// (0x00026f9e) indicator_nsta_pane_cp_24

0xa3bb,	// (0x000293ad) heading_pane_g1

0x0001,

0xf8c6,	// (0x0002e8b8) heading_pane_g

0xae5e,	// (0x00029e50) grid_sct_catagory_button_pane

0xae90,	// (0x00029e82) scroll_pane_cp5_ParamLimits

0xb949,	// (0x0002a93b) button_value_adjust_pane_cp5_ParamLimits

0xb949,	// (0x0002a93b) button_value_adjust_pane_cp5

0xba2e,	// (0x0002aa20) form2_midp_time_pane_ParamLimits

0xd571,	// (0x0002c563) cell_sct_catagory_button_pane_ParamLimits

0xd571,	// (0x0002c563) cell_sct_catagory_button_pane

0xbcae,	// (0x0002aca0) bg_button_pane_cp01_ParamLimits

0xbcae,	// (0x0002aca0) bg_button_pane_cp01

0xbce9,	// (0x0002acdb) cell_sct_catagory_button_pane_g1

0x7cf1,	// (0x00026ce3) popup_tb_extension_window

0xd583,	// (0x0002c575) aid_size_cell_ext_ParamLimits

0xd583,	// (0x0002c575) aid_size_cell_ext

0x1324,	// (0x00020316) bg_tb_trans_pane_cp1_ParamLimits

0x1324,	// (0x00020316) bg_tb_trans_pane_cp1

0xd5a3,	// (0x0002c595) grid_tb_ext_pane_ParamLimits

0xd5a3,	// (0x0002c595) grid_tb_ext_pane

0xd5d1,	// (0x0002c5c3) cell_tb_ext_pane_ParamLimits

0xd5d1,	// (0x0002c5c3) cell_tb_ext_pane

0xd5e8,	// (0x0002c5da) cell_tb_ext_pane_g1_ParamLimits

0xd5e8,	// (0x0002c5da) cell_tb_ext_pane_g1

0xd605,	// (0x0002c5f7) cell_tb_ext_pane_t1

0x1324,	// (0x00020316) list_highlight_pane_cp11_ParamLimits

0x1324,	// (0x00020316) list_highlight_pane_cp11

0x629e,	// (0x00025290) popup_uni_indicator_window_ParamLimits

0x629e,	// (0x00025290) popup_uni_indicator_window

0x18a9,	// (0x0002089b) bg_popup_sub_pane_cp14

0xd620,	// (0x0002c612) list_uniindi_pane

0xd62c,	// (0x0002c61e) uniindi_top_pane

0x1324,	// (0x00020316) bg_uniindi_top_pane

0xd64d,	// (0x0002c63f) uniindi_top_pane_g1

0xd663,	// (0x0002c655) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x0002ed13) uniindi_top_pane_g

0xd68d,	// (0x0002c67f) uniindi_top_pane_t1

0xd6b9,	// (0x0002c6ab) list_single_uniindi_pane_ParamLimits

0xd6b9,	// (0x0002c6ab) list_single_uniindi_pane

0xbce9,	// (0x0002acdb) bg_uniindi_top_pane_g1

0xd6cb,	// (0x0002c6bd) list_single_uniindi_pane_g1

0xd6de,	// (0x0002c6d0) list_single_uniindi_pane_t1

0x1167,	// (0x00020159) control_bg_pane

0xd703,	// (0x0002c6f5) bg_sctrl_sk_pane_cp1

0xd70c,	// (0x0002c6fe) bg_sctrl_sk_pane_cp2

0xd715,	// (0x0002c707) control_bg_pane_g1

0xd71e,	// (0x0002c710) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x0002ed1c) control_bg_pane_g

0xb792,	// (0x0002a784) cell_indicator_nsta_pane_g1_ParamLimits

0xb7a0,	// (0x0002a792) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9e,	// (0x0002ea90) cell_indicator_nsta_pane_g_ParamLimits

0x5ba4,	// (0x00024b96) form2_midp_time_pane_t1_ParamLimits

0x15aa,	// (0x0002059c) main_idle_act4_pane_ParamLimits

0x15aa,	// (0x0002059c) main_idle_act4_pane

0x7cf1,	// (0x00026ce3) popup_tb_extension_window_ParamLimits

0xd5c3,	// (0x0002c5b5) tb_ext_find_pane_ParamLimits

0xd5c3,	// (0x0002c5b5) tb_ext_find_pane

0xd727,	// (0x0002c719) ai_gene_pane_1_cp1

0x73d7,	// (0x000263c9) ai_gene_pane_2_cp1

0xd72f,	// (0x0002c721) list_single_idle_plugin_calendar_pane

0xd738,	// (0x0002c72a) list_single_idle_plugin_notification_pane

0xd741,	// (0x0002c733) list_single_idle_plugin_player_pane

0xd74a,	// (0x0002c73c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd74a,	// (0x0002c73c) list_single_idle_plugin_shortcut_pane

0xd76c,	// (0x0002c75e) main_idle_act4_pane_t1

0xd77e,	// (0x0002c770) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x0002ed21) main_idle_act4_pane_t

0xd790,	// (0x0002c782) middle_sk_idle_act4_pane_ParamLimits

0xd790,	// (0x0002c782) middle_sk_idle_act4_pane

0xd7a6,	// (0x0002c798) popup_clock_digital_analogue_window_cp2

0xd7c0,	// (0x0002c7b2) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7c0,	// (0x0002c7b2) shortcut_wheel_idle_act4_pane

0xbce9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g1

0xbce9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g2

0xbce9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g3

0xbce9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g4

0xbce9,	// (0x0002acdb) shortcut_wheel_idle_act4_pane_g5

0xd7d4,	// (0x0002c7c6) shortcut_wheel_idle_act4_pane_g6

0xd7dc,	// (0x0002c7ce) shortcut_wheel_idle_act4_pane_g7

0xd7e4,	// (0x0002c7d6) shortcut_wheel_idle_act4_pane_g8

0xd7ec,	// (0x0002c7de) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x0002ed26) shortcut_wheel_idle_act4_pane_g

0xbf4c,	// (0x0002af3e) middle_sk_idle_act4_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) middle_sk_idle_act4_pane_g1

0xd850,	// (0x0002c842) middle_sk_idle_act4_pane_g2_ParamLimits

0xd850,	// (0x0002c842) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x0002ed49) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x0002ed49) middle_sk_idle_act4_pane_g

0xd85c,	// (0x0002c84e) middle_sk_idle_act4_pane_t1_ParamLimits

0xd85c,	// (0x0002c84e) middle_sk_idle_act4_pane_t1

0xd879,	// (0x0002c86b) grid_ai_shortcut_pane_ParamLimits

0xd879,	// (0x0002c86b) grid_ai_shortcut_pane

0xd892,	// (0x0002c884) list_highlight_pane_cp16_ParamLimits

0xd892,	// (0x0002c884) list_highlight_pane_cp16

0xd89f,	// (0x0002c891) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd89f,	// (0x0002c891) list_single_idle_plugin_shortcut_pane_g1

0xd8ab,	// (0x0002c89d) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8ab,	// (0x0002c89d) list_single_idle_plugin_shortcut_pane_g2

0xd8c5,	// (0x0002c8b7) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8c5,	// (0x0002c8b7) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x0002ed4e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x0002ed4e) list_single_idle_plugin_shortcut_pane_g

0xd8d8,	// (0x0002c8ca) cell_ai_shortcut_pane_ParamLimits

0xd8d8,	// (0x0002c8ca) cell_ai_shortcut_pane

0xd8fb,	// (0x0002c8ed) cell_ai_shortcut_pane_g1_ParamLimits

0xd8fb,	// (0x0002c8ed) cell_ai_shortcut_pane_g1

0xd727,	// (0x0002c719) ai_gene_pane_1_cp2

0xd91d,	// (0x0002c90f) ai_gene_pane_2_cp2

0xd925,	// (0x0002c917) list_highlight_pane_cp15

0xd92e,	// (0x0002c920) list_single_idle_plugin_calendar_pane_g1

0xd925,	// (0x0002c917) list_highlight_pane_cp17

0xd936,	// (0x0002c928) list_single_idle_plugin_calendar_pane_g1_copy1

0xd93e,	// (0x0002c930) list_single_idle_plugin_player_pane_g1

0xb0c5,	// (0x0002a0b7) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x0002ed55) list_single_idle_plugin_player_pane_g

0xd946,	// (0x0002c938) list_single_idle_plugin_player_pane_t1

0xd954,	// (0x0002c946) list_single_idle_plugin_player_pane_t2

0xd962,	// (0x0002c954) list_single_idle_plugin_player_pane_t3

0xd970,	// (0x0002c962) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x0002ed5a) list_single_idle_plugin_player_pane_t

0xd97e,	// (0x0002c970) wait_bar_pane_cp15

0xd986,	// (0x0002c978) grid_ai_notification_pane

0xb0c5,	// (0x0002a0b7) list_single_idle_plugin_notification_pane_g1

0xd98f,	// (0x0002c981) cell_ai_notification_pane_ParamLimits

0xd98f,	// (0x0002c981) cell_ai_notification_pane

0xd99c,	// (0x0002c98e) cell_ai_notification_pane_g1

0xd9a4,	// (0x0002c996) cell_ai_notification_pane_t1

0xd9b2,	// (0x0002c9a4) tb_ext_find_button_pane

0xd9ba,	// (0x0002c9ac) tb_ext_find_pane_g1

0xd9c2,	// (0x0002c9b4) tb_ext_find_pane_t1

0x6a6a,	// (0x00025a5c) tb_ext_find_button_pane_g1

0xd9d0,	// (0x0002c9c2) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x0002ed63) tb_ext_find_button_pane_g

0xd76c,	// (0x0002c75e) main_idle_act4_pane_t1_ParamLimits

0xd77e,	// (0x0002c770) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x0002ed21) main_idle_act4_pane_t_ParamLimits

0xd7a6,	// (0x0002c798) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7b4,	// (0x0002c7a6) sat_plugin_idle_act4_pane_ParamLimits

0xd7b4,	// (0x0002c7a6) sat_plugin_idle_act4_pane

0xd9d9,	// (0x0002c9cb) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9d9,	// (0x0002c9cb) sat_plugin_idle_act4_pane_t1

0xd9ec,	// (0x0002c9de) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9ec,	// (0x0002c9de) sat_plugin_idle_act4_pane_t2

0xd9ff,	// (0x0002c9f1) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9ff,	// (0x0002c9f1) sat_plugin_idle_act4_pane_t3

0xda12,	// (0x0002ca04) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda12,	// (0x0002ca04) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x0002ed68) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x0002ed68) sat_plugin_idle_act4_pane_t

0x61cf,	// (0x000251c1) popup_battery_window_ParamLimits

0x61cf,	// (0x000251c1) popup_battery_window

0x1324,	// (0x00020316) bg_popup_sub_pane_cp25_ParamLimits

0x1324,	// (0x00020316) bg_popup_sub_pane_cp25

0xda25,	// (0x0002ca17) popup_battery_window_g1_ParamLimits

0xda25,	// (0x0002ca17) popup_battery_window_g1

0xda31,	// (0x0002ca23) popup_battery_window_t1_ParamLimits

0xda31,	// (0x0002ca23) popup_battery_window_t1

0xda43,	// (0x0002ca35) popup_battery_window_t2_ParamLimits

0xda43,	// (0x0002ca35) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x0002ed71) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x0002ed71) popup_battery_window_t

0x72a1,	// (0x00026293) midp_canvas_pane_ParamLimits

0x7319,	// (0x0002630b) midp_keypad_pane_ParamLimits

0x7319,	// (0x0002630b) midp_keypad_pane

0x77e3,	// (0x000267d5) main_midp_pane_ParamLimits

0xb7fc,	// (0x0002a7ee) signal_pane_g2_cp_ParamLimits

0xda60,	// (0x0002ca52) aid_size_cell_midp_keypad_ParamLimits

0xda60,	// (0x0002ca52) aid_size_cell_midp_keypad

0xda7a,	// (0x0002ca6c) midp_keyp_game_grid_pane_ParamLimits

0xda7a,	// (0x0002ca6c) midp_keyp_game_grid_pane

0xda9a,	// (0x0002ca8c) midp_keyp_rocker_pane_ParamLimits

0xda9a,	// (0x0002ca8c) midp_keyp_rocker_pane

0xdac9,	// (0x0002cabb) midp_keyp_sk_left_pane_ParamLimits

0xdac9,	// (0x0002cabb) midp_keyp_sk_left_pane

0xdb25,	// (0x0002cb17) midp_keyp_sk_right_pane_ParamLimits

0xdb25,	// (0x0002cb17) midp_keyp_sk_right_pane

0x1167,	// (0x00020159) bg_button_pane_cp03

0xdb81,	// (0x0002cb73) midp_keyp_sk_left_pane_g1

0x1167,	// (0x00020159) bg_button_pane_cp04

0xdb81,	// (0x0002cb73) midp_keyp_sk_right_pane_g1

0xbce9,	// (0x0002acdb) midp_keyp_rocker_pane_g1

0xdb89,	// (0x0002cb7b) keyp_game_cell_pane_ParamLimits

0xdb89,	// (0x0002cb7b) keyp_game_cell_pane

0x1167,	// (0x00020159) bg_button_pane_cp02

0xdb9c,	// (0x0002cb8e) keyp_game_cell_pane_g1

0x6219,	// (0x0002520b) popup_fep_vkb2_window_ParamLimits

0x6219,	// (0x0002520b) popup_fep_vkb2_window

0x8a1f,	// (0x00027a11) aid_size_cell_vkb2_ParamLimits

0x8a1f,	// (0x00027a11) aid_size_cell_vkb2

0x8a73,	// (0x00027a65) popup_fep_vkb2_window_g1_ParamLimits

0x8a73,	// (0x00027a65) popup_fep_vkb2_window_g1

0x8abb,	// (0x00027aad) vkb2_area_bottom_pane_ParamLimits

0x8abb,	// (0x00027aad) vkb2_area_bottom_pane

0x8b0f,	// (0x00027b01) vkb2_area_keypad_pane_ParamLimits

0x8b0f,	// (0x00027b01) vkb2_area_keypad_pane

0x8b55,	// (0x00027b47) vkb2_area_top_pane_ParamLimits

0x8b55,	// (0x00027b47) vkb2_area_top_pane

0x8bcf,	// (0x00027bc1) vkb2_top_entry_pane_ParamLimits

0x8bcf,	// (0x00027bc1) vkb2_top_entry_pane

0x8bf9,	// (0x00027beb) vkb2_top_grid_left_pane_ParamLimits

0x8bf9,	// (0x00027beb) vkb2_top_grid_left_pane

0x8c17,	// (0x00027c09) vkb2_top_grid_right_pane_ParamLimits

0x8c17,	// (0x00027c09) vkb2_top_grid_right_pane

0x8c35,	// (0x00027c27) vkb2_cell_keypad_pane_ParamLimits

0x8c35,	// (0x00027c27) vkb2_cell_keypad_pane

0x8d06,	// (0x00027cf8) vkb2_area_bottom_grid_pane_ParamLimits

0x8d06,	// (0x00027cf8) vkb2_area_bottom_grid_pane

0x8d2c,	// (0x00027d1e) vkb2_area_bottom_pane_g1_ParamLimits

0x8d2c,	// (0x00027d1e) vkb2_area_bottom_pane_g1

0x8d50,	// (0x00027d42) vkb2_area_bottom_pane_g2_ParamLimits

0x8d50,	// (0x00027d42) vkb2_area_bottom_pane_g2

0x8d7e,	// (0x00027d70) vkb2_area_bottom_pane_g3_ParamLimits

0x8d7e,	// (0x00027d70) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x0002ed76) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x0002ed76) vkb2_area_bottom_pane_g

0x8ddf,	// (0x00027dd1) vkb2_top_cell_left_pane_ParamLimits

0x8ddf,	// (0x00027dd1) vkb2_top_cell_left_pane

0xdbad,	// (0x0002cb9f) vkb2_top_entry_pane_g1_ParamLimits

0xdbad,	// (0x0002cb9f) vkb2_top_entry_pane_g1

0xdbbb,	// (0x0002cbad) vkb2_top_entry_pane_t1_ParamLimits

0xdbbb,	// (0x0002cbad) vkb2_top_entry_pane_t1

0xdbed,	// (0x0002cbdf) vkb2_top_entry_pane_t2_ParamLimits

0xdbed,	// (0x0002cbdf) vkb2_top_entry_pane_t2

0xdc1f,	// (0x0002cc11) vkb2_top_entry_pane_t3_ParamLimits

0xdc1f,	// (0x0002cc11) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x0002ed7d) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x0002ed7d) vkb2_top_entry_pane_t

0x8e2c,	// (0x00027e1e) vkb2_top_grid_right_pane_g1_ParamLimits

0x8e2c,	// (0x00027e1e) vkb2_top_grid_right_pane_g1

0x8e42,	// (0x00027e34) vkb2_top_grid_right_pane_g2_ParamLimits

0x8e42,	// (0x00027e34) vkb2_top_grid_right_pane_g2

0x8e5a,	// (0x00027e4c) vkb2_top_grid_right_pane_g3_ParamLimits

0x8e5a,	// (0x00027e4c) vkb2_top_grid_right_pane_g3

0x8e72,	// (0x00027e64) vkb2_top_grid_right_pane_g4_ParamLimits

0x8e72,	// (0x00027e64) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x0002ed84) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x0002ed84) vkb2_top_grid_right_pane_g

0x8e88,	// (0x00027e7a) vkb2_top_cell_left_pane_g1

0x8e9f,	// (0x00027e91) vkb2_cell_keypad_pane_g1_ParamLimits

0x8e9f,	// (0x00027e91) vkb2_cell_keypad_pane_g1

0xdc43,	// (0x0002cc35) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc43,	// (0x0002cc35) vkb2_cell_keypad_pane_t1

0x8ead,	// (0x00027e9f) vkb2_cell_bottom_grid_pane_ParamLimits

0x8ead,	// (0x00027e9f) vkb2_cell_bottom_grid_pane

0x8ee6,	// (0x00027ed8) vkb2_cell_bottom_grid_pane_g1

0xd7f4,	// (0x0002c7e6) aid_call2_pane_cp02

0xd7fc,	// (0x0002c7ee) aid_call_pane_cp02

0xd804,	// (0x0002c7f6) clock_digital_number_pane_cp10

0xd80c,	// (0x0002c7fe) clock_digital_number_pane_cp11

0xd814,	// (0x0002c806) clock_digital_number_pane_cp12

0xd81c,	// (0x0002c80e) clock_digital_number_pane_cp13

0xd824,	// (0x0002c816) clock_digital_separator_pane_cp10

0x6a6a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g1

0x6a6a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g2

0xd82c,	// (0x0002c81e) popup_clock_digital_analogue_window_cp2_g3

0x6a6a,	// (0x00025a5c) popup_clock_digital_analogue_window_cp2_g4

0xd82c,	// (0x0002c81e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x0002ed39) popup_clock_digital_analogue_window_cp2_g

0xd834,	// (0x0002c826) popup_clock_digital_analogue_window_cp2_t1

0xd842,	// (0x0002c834) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x0002ed44) popup_clock_digital_analogue_window_cp2_t

0xbce9,	// (0x0002acdb) clock_digital_number_pane_cp10_g1

0xbce9,	// (0x0002acdb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002eb2c) clock_digital_number_pane_cp10_g

0xbce9,	// (0x0002acdb) clock_digital_separator_pane_cp10_g1

0xbce9,	// (0x0002acdb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3a,	// (0x0002eb2c) clock_digital_separator_pane_cp10_g

0xd66f,	// (0x0002c661) uniindi_top_pane_g3

0xd680,	// (0x0002c672) uniindi_top_pane_g4

0x8cc0,	// (0x00027cb2) vkb2_row_keypad_pane_ParamLimits

0x8cc0,	// (0x00027cb2) vkb2_row_keypad_pane

0x8f02,	// (0x00027ef4) vkb2_cell_t_keypad_pane_ParamLimits

0x8f02,	// (0x00027ef4) vkb2_cell_t_keypad_pane

0x8f12,	// (0x00027f04) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8f12,	// (0x00027f04) vkb2_cell_t_keypad_pane_cp08

0x8f27,	// (0x00027f19) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8f27,	// (0x00027f19) vkb2_cell_t_keypad_pane_cp09

0x8f3b,	// (0x00027f2d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8f3b,	// (0x00027f2d) vkb2_cell_t_keypad_pane_cp01

0x8f4c,	// (0x00027f3e) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8f4c,	// (0x00027f3e) vkb2_cell_t_keypad_pane_cp02

0x8f5d,	// (0x00027f4f) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8f5d,	// (0x00027f4f) vkb2_cell_t_keypad_pane_cp03

0x8f6e,	// (0x00027f60) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8f6e,	// (0x00027f60) vkb2_cell_t_keypad_pane_cp04

0x8f7f,	// (0x00027f71) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8f7f,	// (0x00027f71) vkb2_cell_t_keypad_pane_cp05

0x8f90,	// (0x00027f82) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8f90,	// (0x00027f82) vkb2_cell_t_keypad_pane_cp06

0x8fa3,	// (0x00027f95) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8fa3,	// (0x00027f95) vkb2_cell_t_keypad_pane_cp07

0x8fb8,	// (0x00027faa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8fb8,	// (0x00027faa) vkb2_cell_t_keypad_pane_cp10

0xbf4c,	// (0x0002af3e) vkb2_cell_t_keypad_pane_g1

0xdc5a,	// (0x0002cc4c) vkb2_cell_t_keypad_pane_t1

0x1167,	// (0x00020159) popup_grid_graphic2_window

0xdc6c,	// (0x0002cc5e) aid_size_cell_graphic2_ParamLimits

0xdc6c,	// (0x0002cc5e) aid_size_cell_graphic2

0xdca4,	// (0x0002cc96) bg_popup_window_pane_cp21_ParamLimits

0xdca4,	// (0x0002cc96) bg_popup_window_pane_cp21

0xdcb2,	// (0x0002cca4) graphic2_pages_pane_ParamLimits

0xdcb2,	// (0x0002cca4) graphic2_pages_pane

0xdcf8,	// (0x0002ccea) grid_graphic2_control_pane_ParamLimits

0xdcf8,	// (0x0002ccea) grid_graphic2_control_pane

0xdd36,	// (0x0002cd28) grid_graphic2_pane_ParamLimits

0xdd36,	// (0x0002cd28) grid_graphic2_pane

0xddac,	// (0x0002cd9e) cell_graphic2_pane

0x1167,	// (0x00020159) main_comp_mode_pane

0xced6,	// (0x0002bec8) list_ai3_gene_pane_ParamLimits

0xd2a2,	// (0x0002c294) bg_popup_window_pane_cp19_ParamLimits

0xd2ae,	// (0x0002c2a0) bg_touch_area_indi_pane_ParamLimits

0xd2ae,	// (0x0002c2a0) bg_touch_area_indi_pane

0xd2c4,	// (0x0002c2b6) bg_touch_area_indi_pane_cp01_ParamLimits

0xd2c4,	// (0x0002c2b6) bg_touch_area_indi_pane_cp01

0xd2da,	// (0x0002c2cc) bg_touch_area_indi_pane_cp02_ParamLimits

0xd2da,	// (0x0002c2cc) bg_touch_area_indi_pane_cp02

0xd2f4,	// (0x0002c2e6) bg_touch_area_indi_pane_cp03_ParamLimits

0xd2f4,	// (0x0002c2e6) bg_touch_area_indi_pane_cp03

0xd30e,	// (0x0002c300) popup_slider_window_g1_ParamLimits

0xd32a,	// (0x0002c31c) popup_slider_window_g2_ParamLimits

0xd346,	// (0x0002c338) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x0002ecce) popup_slider_window_g_ParamLimits

0xd3ac,	// (0x0002c39e) popup_slider_window_t1_ParamLimits

0xd420,	// (0x0002c412) small_volume_slider_vertical_pane_ParamLimits

0xddac,	// (0x0002cd9e) cell_graphic2_pane_ParamLimits

0xde01,	// (0x0002cdf3) bg_button_pane_cp10_ParamLimits

0xde01,	// (0x0002cdf3) bg_button_pane_cp10

0xde16,	// (0x0002ce08) bg_button_pane_cp11_ParamLimits

0xde16,	// (0x0002ce08) bg_button_pane_cp11

0xde2b,	// (0x0002ce1d) graphic2_pages_pane_g1_ParamLimits

0xde2b,	// (0x0002ce1d) graphic2_pages_pane_g1

0xde46,	// (0x0002ce38) graphic2_pages_pane_g2_ParamLimits

0xde46,	// (0x0002ce38) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x0002ed92) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x0002ed92) graphic2_pages_pane_g

0xde5e,	// (0x0002ce50) graphic2_pages_pane_t1_ParamLimits

0xde5e,	// (0x0002ce50) graphic2_pages_pane_t1

0xde74,	// (0x0002ce66) cell_graphic2_control_pane_ParamLimits

0xde74,	// (0x0002ce66) cell_graphic2_control_pane

0xde94,	// (0x0002ce86) cell_graphic2_pane_g1_ParamLimits

0xde94,	// (0x0002ce86) cell_graphic2_pane_g1

0xdea1,	// (0x0002ce93) cell_graphic2_pane_g2_ParamLimits

0xdea1,	// (0x0002ce93) cell_graphic2_pane_g2

0xdeae,	// (0x0002cea0) cell_graphic2_pane_g3_ParamLimits

0xdeae,	// (0x0002cea0) cell_graphic2_pane_g3

0xdebb,	// (0x0002cead) cell_graphic2_pane_g4_ParamLimits

0xdebb,	// (0x0002cead) cell_graphic2_pane_g4

0xdec8,	// (0x0002ceba) cell_graphic2_pane_g5_ParamLimits

0xdec8,	// (0x0002ceba) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x0002ed97) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x0002ed97) cell_graphic2_pane_g

0xdee3,	// (0x0002ced5) cell_graphic2_pane_t1_ParamLimits

0xdee3,	// (0x0002ced5) cell_graphic2_pane_t1

0x974e,	// (0x00028740) grid_highlight_pane_cp11_ParamLimits

0x974e,	// (0x00028740) grid_highlight_pane_cp11

0x1324,	// (0x00020316) bg_button_pane_cp05

0xdf1a,	// (0x0002cf0c) cell_graphic2_control_pane_g1

0xbce9,	// (0x0002acdb) bg_touch_area_indi_pane_g1

0xdf42,	// (0x0002cf34) aid_cmod_rocker_key_size

0xdf4c,	// (0x0002cf3e) aid_cmode_itu_key_size

0xdf56,	// (0x0002cf48) main_cmode_video_pane

0xdf60,	// (0x0002cf52) main_comp_mode_itu_pane

0xdf6c,	// (0x0002cf5e) main_comp_mode_rocker_pane

0xdf78,	// (0x0002cf6a) cell_cmode_rocker_pane_ParamLimits

0xdf78,	// (0x0002cf6a) cell_cmode_rocker_pane

0xdf8c,	// (0x0002cf7e) cell_cmode_itu_pane_ParamLimits

0xdf8c,	// (0x0002cf7e) cell_cmode_itu_pane

0x18a9,	// (0x0002089b) bg_button_pane_cp06_ParamLimits

0x18a9,	// (0x0002089b) bg_button_pane_cp06

0xbf4c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) cell_cmode_rocker_pane_g1

0xd4c7,	// (0x0002c4b9) cell_cmode_rocker_pane_g2_ParamLimits

0xd4c7,	// (0x0002c4b9) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x0002eda7) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x0002eda7) cell_cmode_rocker_pane_g

0x1167,	// (0x00020159) bg_button_pane_cp07

0xdfa3,	// (0x0002cf95) cell_cmode_itu_pane_g1

0xdfac,	// (0x0002cf9e) cell_cmode_itu_pane_t1

0xdfba,	// (0x0002cfac) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x0002edac) cell_cmode_itu_pane_t

0xd6f3,	// (0x0002c6e5) aid_touch_ctrl_left

0xd6fb,	// (0x0002c6ed) aid_touch_ctrl_right

0x1167,	// (0x00020159) compa_mode_pane

0xdfc8,	// (0x0002cfba) aid_cmod_rocker_key_size_cp

0xdfd2,	// (0x0002cfc4) aid_cmode_itu_key_size_cp

0xdfdc,	// (0x0002cfce) compa_mode_pane_g1

0xdfe4,	// (0x0002cfd6) compa_mode_pane_g2

0xdfec,	// (0x0002cfde) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x0002edb1) compa_mode_pane_g

0xdff4,	// (0x0002cfe6) main_comp_mode_itu_pane_cp

0xdffc,	// (0x0002cfee) main_comp_mode_rocker_pane_cp

0xe004,	// (0x0002cff6) cell_cmode_itu_pane_cp_ParamLimits

0xe004,	// (0x0002cff6) cell_cmode_itu_pane_cp

0xe019,	// (0x0002d00b) cell_cmode_rocker_pane_cp_ParamLimits

0xe019,	// (0x0002d00b) cell_cmode_rocker_pane_cp

0x18a9,	// (0x0002089b) bg_button_pane_cp06_cp_ParamLimits

0x18a9,	// (0x0002089b) bg_button_pane_cp06_cp

0xbf4c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbf4c,	// (0x0002af3e) cell_cmode_rocker_pane_g1_cp

0xbce9,	// (0x0002acdb) cell_cmode_rocker_pane_g2_cp

0x1167,	// (0x00020159) bg_button_pane_cp07_cp

0xe02b,	// (0x0002d01d) cell_cmode_itu_pane_g1_cp

0xe034,	// (0x0002d026) cell_cmode_itu_pane_t1_cp

0xe034,	// (0x0002d026) cell_cmode_itu_pane_t2_cp

0xac12,	// (0x00029c04) settings_code_pane_cp2

0x11d7,	// (0x000201c9) bg_popup_window_pane_cp3_ParamLimits

0x1538,	// (0x0002052a) heading_pane_cp3_ParamLimits

0x1544,	// (0x00020536) listscroll_popup_graphic_pane_ParamLimits

0x85b0,	// (0x000275a2) fep_hwr_aid_pane_ParamLimits

0x8994,	// (0x00027986) aid_touch_sctrl_top_ParamLimits

0x89a1,	// (0x00027993) sctrl_sk_top_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x0002ece7) sctrl_sk_top_pane_g_ParamLimits

0x89ae,	// (0x000279a0) sctrl_sk_top_pane_t1_ParamLimits

0x8994,	// (0x00027986) aid_touch_sctrl_bottom_ParamLimits

0x89ae,	// (0x000279a0) sctrl_sk_bottom_pane_t1_ParamLimits

0xd639,	// (0x0002c62b) aid_area_touch_clock

0x8b97,	// (0x00027b89) aid_vkb2_area_top_pane_cell_ParamLimits

0x8b97,	// (0x00027b89) aid_vkb2_area_top_pane_cell

0x8ce2,	// (0x00027cd4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8ce2,	// (0x00027cd4) aid_vkb2_area_bottom_pane_cell

0xdba5,	// (0x0002cb97) popup_char_count_window

0xe042,	// (0x0002d034) popup_char_count_window_g1

0xe04b,	// (0x0002d03d) popup_char_count_window_g2

0xe054,	// (0x0002d046) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x0002edb8) popup_char_count_window_g

0xe05d,	// (0x0002d04f) popup_char_count_window_t1

0x8a51,	// (0x00027a43) popup_fep_char_preview_window_ParamLimits

0x8a51,	// (0x00027a43) popup_fep_char_preview_window

0x8bb5,	// (0x00027ba7) vkb2_top_candi_pane_ParamLimits

0x8bb5,	// (0x00027ba7) vkb2_top_candi_pane

0xe06b,	// (0x0002d05d) cell_vkb2_top_candi_pane_ParamLimits

0xe06b,	// (0x0002d05d) cell_vkb2_top_candi_pane

0x9d38,	// (0x00028d2a) bg_popup_fep_char_preview_window_ParamLimits

0x9d38,	// (0x00028d2a) bg_popup_fep_char_preview_window

0x8fcd,	// (0x00027fbf) popup_fep_char_preview_window_t1_ParamLimits

0x8fcd,	// (0x00027fbf) popup_fep_char_preview_window_t1

0xe0bc,	// (0x0002d0ae) bg_popup_fep_char_preview_window_g1

0xe0c4,	// (0x0002d0b6) bg_popup_fep_char_preview_window_g2

0xe0cc,	// (0x0002d0be) bg_popup_fep_char_preview_window_g3

0xe0d4,	// (0x0002d0c6) bg_popup_fep_char_preview_window_g4

0xe0dc,	// (0x0002d0ce) bg_popup_fep_char_preview_window_g5

0x9007,	// (0x00027ff9) bg_popup_fep_char_preview_window_g6

0xe0e4,	// (0x0002d0d6) bg_popup_fep_char_preview_window_g7

0xe0ec,	// (0x0002d0de) bg_popup_fep_char_preview_window_g8

0xe0f4,	// (0x0002d0e6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x0002edbf) bg_popup_fep_char_preview_window_g

0xbf4c,	// (0x0002af3e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) cell_vkb2_top_candi_pane_g1

0xc39c,	// (0x0002b38e) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc39c,	// (0x0002b38e) cell_vkb2_top_candi_pane_g2

0xc3bd,	// (0x0002b3af) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc3bd,	// (0x0002b3af) cell_vkb2_top_candi_pane_g3

0x900f,	// (0x00028001) cell_vkb2_top_candi_pane_g4_ParamLimits

0x900f,	// (0x00028001) cell_vkb2_top_candi_pane_g4

0xe0fc,	// (0x0002d0ee) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe0fc,	// (0x0002d0ee) cell_vkb2_top_candi_pane_g5

0xd4c7,	// (0x0002c4b9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4c7,	// (0x0002c4b9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x0002edd2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x0002edd2) cell_vkb2_top_candi_pane_g

0x9030,	// (0x00028022) cell_vkb2_top_candi_pane_t1

0x8410,	// (0x00027402) aid_size_touch_slider_mark_ParamLimits

0x8410,	// (0x00027402) aid_size_touch_slider_mark

0xdce8,	// (0x0002ccda) grid_graphic2_catg_pane_ParamLimits

0xdce8,	// (0x0002ccda) grid_graphic2_catg_pane

0xdd86,	// (0x0002cd78) popup_grid_graphic2_window_t1_ParamLimits

0xdd86,	// (0x0002cd78) popup_grid_graphic2_window_t1

0xdd98,	// (0x0002cd8a) popup_grid_graphic2_window_t2_ParamLimits

0xdd98,	// (0x0002cd8a) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x0002ed8d) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x0002ed8d) popup_grid_graphic2_window_t

0x1324,	// (0x00020316) bg_button_pane_cp05_ParamLimits

0xdf1a,	// (0x0002cf0c) cell_graphic2_control_pane_g1_ParamLimits

0xe11d,	// (0x0002d10f) cell_graphic2_catg_pane_ParamLimits

0xe11d,	// (0x0002d10f) cell_graphic2_catg_pane

0x1167,	// (0x00020159) bg_button_pane_cp12

0xe12f,	// (0x0002d121) cell_graphic2_catg_pane_g1

0xd605,	// (0x0002c5f7) cell_tb_ext_pane_t1_ParamLimits

0x8dff,	// (0x00027df1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8dff,	// (0x00027df1) vkb2_top_cell_right_narrow_pane

0x8e17,	// (0x00027e09) vkb2_top_cell_right_wide_pane_ParamLimits

0x8e17,	// (0x00027e09) vkb2_top_cell_right_wide_pane

0x85a2,	// (0x00027594) bg_vkb2_func_pane_ParamLimits

0x85a2,	// (0x00027594) bg_vkb2_func_pane

0x8e88,	// (0x00027e7a) vkb2_top_cell_left_pane_g1_ParamLimits

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp03_ParamLimits

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp03

0x8ee6,	// (0x00027ed8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x96e2,	// (0x000286d4) bg_vkb2_func_pane_g1

0x96ea,	// (0x000286dc) bg_vkb2_func_pane_g2

0x96fa,	// (0x000286ec) bg_vkb2_func_pane_g3

0x96f2,	// (0x000286e4) bg_vkb2_func_pane_g4

0x9702,	// (0x000286f4) bg_vkb2_func_pane_g5

0x970a,	// (0x000286fc) bg_vkb2_func_pane_g6

0x9712,	// (0x00028704) bg_vkb2_func_pane_g7

0x971a,	// (0x0002870c) bg_vkb2_func_pane_g8

0x96da,	// (0x000286cc) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x0002eddf) bg_vkb2_func_pane_g

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp01_ParamLimits

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp01

0x8e88,	// (0x00027e7a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8e88,	// (0x00027e7a) vkb2_top_cell_right_wide_pane_g1

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp02_ParamLimits

0x85a2,	// (0x00027594) bg_vkb2_fuc_pane_cp02

0x8ee6,	// (0x00027ed8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8ee6,	// (0x00027ed8) vkb2_top_cell_right_narrow_pane_g1

0xd21c,	// (0x0002c20e) aid_touch_area_decrease_ParamLimits

0xd21c,	// (0x0002c20e) aid_touch_area_decrease

0xd240,	// (0x0002c232) aid_touch_area_increase_ParamLimits

0xd240,	// (0x0002c232) aid_touch_area_increase

0xd258,	// (0x0002c24a) aid_touch_area_mute_ParamLimits

0xd258,	// (0x0002c24a) aid_touch_area_mute

0xd274,	// (0x0002c266) aid_touch_area_slider_ParamLimits

0xd274,	// (0x0002c266) aid_touch_area_slider

0xd362,	// (0x0002c354) popup_slider_window_g4_ParamLimits

0xd362,	// (0x0002c354) popup_slider_window_g4

0xd37a,	// (0x0002c36c) popup_slider_window_g5_ParamLimits

0xd37a,	// (0x0002c36c) popup_slider_window_g5

0xd39c,	// (0x0002c38e) popup_slider_window_g6_ParamLimits

0xd39c,	// (0x0002c38e) popup_slider_window_g6

0xd3da,	// (0x0002c3cc) popup_slider_window_t2_ParamLimits

0xd3da,	// (0x0002c3cc) popup_slider_window_t2

0x0001,

0xfce9,	// (0x0002ecdb) popup_slider_window_t_ParamLimits

0xfce9,	// (0x0002ecdb) popup_slider_window_t

0xd3f2,	// (0x0002c3e4) slider_pane_ParamLimits

0xd3f2,	// (0x0002c3e4) slider_pane

0xe138,	// (0x0002d12a) slider_pane_g1_ParamLimits

0xe138,	// (0x0002d12a) slider_pane_g1

0xe14c,	// (0x0002d13e) slider_pane_g2_ParamLimits

0xe14c,	// (0x0002d13e) slider_pane_g2

0xe162,	// (0x0002d154) slider_pane_g3_ParamLimits

0xe162,	// (0x0002d154) slider_pane_g3

0x0003,

0xfe00,	// (0x0002edf2) slider_pane_g_ParamLimits

0xfe00,	// (0x0002edf2) slider_pane_g

0x7d53,	// (0x00026d45) popup_tb_float_extension_window_ParamLimits

0x7d53,	// (0x00026d45) popup_tb_float_extension_window

0xe18e,	// (0x0002d180) aid_size_cell_tb_float_ext

0x1167,	// (0x00020159) bg_popup_sub_window_cp28

0xe19a,	// (0x0002d18c) grid_tb_float_ext_pane

0xe1a6,	// (0x0002d198) cell_tb_float_ext_pane_ParamLimits

0xe1a6,	// (0x0002d198) cell_tb_float_ext_pane

0xe1c2,	// (0x0002d1b4) cell_tb_float_ext_pane_g1

0xe1cb,	// (0x0002d1bd) grid_highlight_pane_cp12

0x86e9,	// (0x000276db) cell_last_hwr_side_pane_ParamLimits

0x86e9,	// (0x000276db) cell_last_hwr_side_pane

0xbce9,	// (0x0002acdb) cell_last_hwr_side_pane_g1

0xe1d4,	// (0x0002d1c6) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x0002edfb) cell_last_hwr_side_pane_g

0x8dae,	// (0x00027da0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8dae,	// (0x00027da0) vkb2_area_bottom_space_btn_pane

0xbf4c,	// (0x0002af3e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdc5a,	// (0x0002cc4c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9030,	// (0x00028022) cell_vkb2_top_candi_pane_t1_ParamLimits

0x904e,	// (0x00028040) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x904e,	// (0x00028040) vkb2_area_bottom_space_btn_pane_g1

0x9088,	// (0x0002807a) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9088,	// (0x0002807a) vkb2_area_bottom_space_btn_pane_g2

0x90be,	// (0x000280b0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x90be,	// (0x000280b0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x0002ee00) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x0002ee00) vkb2_area_bottom_space_btn_pane_g

0x8659,	// (0x0002764b) cel_fep_hwr_func_pane_ParamLimits

0x8659,	// (0x0002764b) cel_fep_hwr_func_pane

0x8695,	// (0x00027687) cell_hwr_side_button_pane_ParamLimits

0x8695,	// (0x00027687) cell_hwr_side_button_pane

0xd639,	// (0x0002c62b) aid_area_touch_clock_ParamLimits

0x1324,	// (0x00020316) bg_uniindi_top_pane_ParamLimits

0xd64d,	// (0x0002c63f) uniindi_top_pane_g1_ParamLimits

0xd663,	// (0x0002c655) uniindi_top_pane_g2_ParamLimits

0xd66f,	// (0x0002c661) uniindi_top_pane_g3_ParamLimits

0xd680,	// (0x0002c672) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x0002ed13) uniindi_top_pane_g_ParamLimits

0xd68d,	// (0x0002c67f) uniindi_top_pane_t1_ParamLimits

0x1324,	// (0x00020316) bg_vkb2_func_pane_cp01_ParamLimits

0x1324,	// (0x00020316) bg_vkb2_func_pane_cp01

0xe1dd,	// (0x0002d1cf) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1dd,	// (0x0002d1cf) cel_fep_hwr_func_pane_g1

0x1324,	// (0x00020316) bg_vkb2_func_pane_cp02_ParamLimits

0x1324,	// (0x00020316) bg_vkb2_func_pane_cp02

0xe1dd,	// (0x0002d1cf) cell_hwr_side_button_pane_g1_ParamLimits

0xe1dd,	// (0x0002d1cf) cell_hwr_side_button_pane_g1

0x955f,	// (0x00028551) status_pane_g4_ParamLimits

0x955f,	// (0x00028551) status_pane_g4

0x9579,	// (0x0002856b) status_pane_t1

0xba9c,	// (0x0002aa8e) form2_midp_gauge_slider_cont_pane

0xbaa4,	// (0x0002aa96) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbab6,	// (0x0002aaa8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbac8,	// (0x0002aaba) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaed,	// (0x0002eadf) form2_midp_gauge_slider_pane_t_ParamLimits

0xbada,	// (0x0002aacc) form2_midp_slider_pane_ParamLimits

0x8a11,	// (0x00027a03) aid_size_cell_func_vkb2_ParamLimits

0x8a11,	// (0x00027a03) aid_size_cell_func_vkb2

0xe17a,	// (0x0002d16c) slider_pane_g4_ParamLimits

0xe17a,	// (0x0002d16c) slider_pane_g4

0x9108,	// (0x000280fa) form2_midp_gauge_slider_pane_t2_cp01

0x9116,	// (0x00028108) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9116,	// (0x00028108) form2_midp_gauge_slider_pane_t3_cp01

0x9133,	// (0x00028125) form2_midp_slider_pane_cp01

0x1167,	// (0x00020159) navi_smil_pane

0xe216,	// (0x0002d208) navi_smil_pane_g1

0xe21e,	// (0x0002d210) navi_smil_pane_t1

0xe1eb,	// (0x0002d1dd) form2_midp_slider_pane_g1

0xe1f4,	// (0x0002d1e6) form2_midp_slider_pane_g2

0xe1fc,	// (0x0002d1ee) form2_midp_slider_pane_g3

0xe1eb,	// (0x0002d1dd) form2_midp_slider_pane_g4

0xe204,	// (0x0002d1f6) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x0002ee09) form2_midp_slider_pane_g

0x90f8,	// (0x000280ea) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x90f8,	// (0x000280ea) vkb2_area_bottom_space_btn_pane_g4

0x7fe8,	// (0x00026fda) lc0_navi_pane_ParamLimits

0x7fe8,	// (0x00026fda) lc0_navi_pane

0x8064,	// (0x00027056) lc0_stat_indi_pane_ParamLimits

0x8064,	// (0x00027056) lc0_stat_indi_pane

0x807b,	// (0x0002706d) ls0_title_pane_ParamLimits

0x807b,	// (0x0002706d) ls0_title_pane

0x18a9,	// (0x0002089b) bg_popup_sub_pane_cp14_ParamLimits

0xd620,	// (0x0002c612) list_uniindi_pane_ParamLimits

0xd62c,	// (0x0002c61e) uniindi_top_pane_ParamLimits

0xd6cb,	// (0x0002c6bd) list_single_uniindi_pane_g1_ParamLimits

0xd6de,	// (0x0002c6d0) list_single_uniindi_pane_t1_ParamLimits

0x913c,	// (0x0002812e) lc0_stat_clock_pane_ParamLimits

0x913c,	// (0x0002812e) lc0_stat_clock_pane

0xe22c,	// (0x0002d21e) lc0_stat_indi_pane_g1_ParamLimits

0xe22c,	// (0x0002d21e) lc0_stat_indi_pane_g1

0xe239,	// (0x0002d22b) lc0_stat_indi_pane_g2_ParamLimits

0xe239,	// (0x0002d22b) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x0002ee14) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x0002ee14) lc0_stat_indi_pane_g

0x9149,	// (0x0002813b) lc0_uni_indicator_pane_ParamLimits

0x9149,	// (0x0002813b) lc0_uni_indicator_pane

0xe246,	// (0x0002d238) ls0_title_pane_g1_ParamLimits

0xe246,	// (0x0002d238) ls0_title_pane_g1

0xe25a,	// (0x0002d24c) ls0_title_pane_t1_ParamLimits

0xe25a,	// (0x0002d24c) ls0_title_pane_t1

0x9156,	// (0x00028148) lc0_uni_indicator_pane_g1_ParamLimits

0x9156,	// (0x00028148) lc0_uni_indicator_pane_g1

0xe290,	// (0x0002d282) lc0_stat_clock_pane_t1

0x1167,	// (0x00020159) main_ai5_pane

0xe29e,	// (0x0002d290) ai5_sk_pane_ParamLimits

0xe29e,	// (0x0002d290) ai5_sk_pane

0xe2ab,	// (0x0002d29d) cell_ai5_widget_pane_ParamLimits

0xe2ab,	// (0x0002d29d) cell_ai5_widget_pane

0xe84d,	// (0x0002d83f) aid_size_cell_widget_grid

0xe85b,	// (0x0002d84d) bg_ai5_widget_pane_ParamLimits

0xe85b,	// (0x0002d84d) bg_ai5_widget_pane

0xe8d3,	// (0x0002d8c5) cell_ai5_widget_pane_g2

0xe8e7,	// (0x0002d8d9) cell_ai5_widget_pane_g3

0xe901,	// (0x0002d8f3) cell_ai5_widget_pane_g4

0xe911,	// (0x0002d903) cell_ai5_widget_pane_g5

0xe921,	// (0x0002d913) cell_ai5_widget_pane_g6

0xe92d,	// (0x0002d91f) cell_ai5_widget_pane_g7

0xe975,	// (0x0002d967) cell_ai5_widget_pane_t1_ParamLimits

0xe975,	// (0x0002d967) cell_ai5_widget_pane_t1

0xe992,	// (0x0002d984) cell_ai5_widget_pane_t2_ParamLimits

0xe992,	// (0x0002d984) cell_ai5_widget_pane_t2

0xe9aa,	// (0x0002d99c) cell_ai5_widget_pane_t3_ParamLimits

0xe9aa,	// (0x0002d99c) cell_ai5_widget_pane_t3

0xe9c2,	// (0x0002d9b4) cell_ai5_widget_pane_t4_ParamLimits

0xe9c2,	// (0x0002d9b4) cell_ai5_widget_pane_t4

0xe9e8,	// (0x0002d9da) cell_ai5_widget_pane_t5_ParamLimits

0xe9e8,	// (0x0002d9da) cell_ai5_widget_pane_t5

0xea08,	// (0x0002d9fa) cell_ai5_widget_pane_t6_ParamLimits

0xea08,	// (0x0002d9fa) cell_ai5_widget_pane_t6

0xea1a,	// (0x0002da0c) cell_ai5_widget_pane_t7_ParamLimits

0xea1a,	// (0x0002da0c) cell_ai5_widget_pane_t7

0xea33,	// (0x0002da25) cell_ai5_widget_pane_t8_ParamLimits

0xea33,	// (0x0002da25) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x0002ee2e) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x0002ee2e) cell_ai5_widget_pane_t

0xea92,	// (0x0002da84) grid_ai5_widget_pane

0x18a9,	// (0x0002089b) highlight_cell_ai5_widget_pane_ParamLimits

0x18a9,	// (0x0002089b) highlight_cell_ai5_widget_pane

0xeaa0,	// (0x0002da92) ai5_sk_left_pane

0xeaaa,	// (0x0002da9c) ai5_sk_middle_pane

0xeab4,	// (0x0002daa6) ai5_sk_right_pane

0xeabe,	// (0x0002dab0) bg_ai5_widget_pane_g1_ParamLimits

0xeabe,	// (0x0002dab0) bg_ai5_widget_pane_g1

0xeaca,	// (0x0002dabc) bg_ai5_widget_pane_g2_ParamLimits

0xeaca,	// (0x0002dabc) bg_ai5_widget_pane_g2

0xead6,	// (0x0002dac8) bg_ai5_widget_pane_g3_ParamLimits

0xead6,	// (0x0002dac8) bg_ai5_widget_pane_g3

0xeae2,	// (0x0002dad4) bg_ai5_widget_pane_g4_ParamLimits

0xeae2,	// (0x0002dad4) bg_ai5_widget_pane_g4

0xeaee,	// (0x0002dae0) bg_ai5_widget_pane_g5_ParamLimits

0xeaee,	// (0x0002dae0) bg_ai5_widget_pane_g5

0xeafa,	// (0x0002daec) bg_ai5_widget_pane_g6_ParamLimits

0xeafa,	// (0x0002daec) bg_ai5_widget_pane_g6

0xeb06,	// (0x0002daf8) bg_ai5_widget_pane_g7_ParamLimits

0xeb06,	// (0x0002daf8) bg_ai5_widget_pane_g7

0xeb12,	// (0x0002db04) bg_ai5_widget_pane_g8_ParamLimits

0xeb12,	// (0x0002db04) bg_ai5_widget_pane_g8

0xeb1e,	// (0x0002db10) bg_ai5_widget_pane_g9_ParamLimits

0xeb1e,	// (0x0002db10) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x0002ee43) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x0002ee43) bg_ai5_widget_pane_g

0xeb56,	// (0x0002db48) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb56,	// (0x0002db48) cell_shortcut_ai5_widget_pane

0x728d,	// (0x0002627f) bg_cell_shortcut_ai5_widget_pane

0xeb69,	// (0x0002db5b) cell_grid_ai5_widget_pane_g1

0x728d,	// (0x0002627f) highlight_cell_shortcut_ai5_widget_pane

0x96ea,	// (0x000286dc) ai5_sk_left_pane_g1

0xeb72,	// (0x0002db64) ai5_sk_left_pane_g2

0xeb7a,	// (0x0002db6c) ai5_sk_left_pane_g3

0xeb82,	// (0x0002db74) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x0002ee56) ai5_sk_left_pane_g

0xeb8a,	// (0x0002db7c) ai5_sk_left_pane_t1

0x96e2,	// (0x000286d4) ai5_sk_right_pane_g1

0xeb98,	// (0x0002db8a) ai5_sk_right_pane_g2

0xeba0,	// (0x0002db92) ai5_sk_right_pane_g3

0xeba8,	// (0x0002db9a) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x0002ee5f) ai5_sk_right_pane_g

0xebb0,	// (0x0002dba2) ai5_sk_right_pane_t1

0x96e2,	// (0x000286d4) ai5_sk_middle_pane_g1

0x96ea,	// (0x000286dc) ai5_sk_middle_pane_g2

0x9702,	// (0x000286f4) ai5_sk_middle_pane_g3

0xeba0,	// (0x0002db92) ai5_sk_middle_pane_g4

0xeb7a,	// (0x0002db6c) ai5_sk_middle_pane_g5

0xebbe,	// (0x0002dbb0) ai5_sk_middle_pane_g6

0xebc6,	// (0x0002dbb8) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x0002ee68) ai5_sk_middle_pane_g

0x7e74,	// (0x00026e66) aid_touch_area_size_lc0_ParamLimits

0x7e74,	// (0x00026e66) aid_touch_area_size_lc0

0x87f8,	// (0x000277ea) cell_hwr_candidate_pane_t1_ParamLimits

0x7e92,	// (0x00026e84) aid_touch_navi_pane

0x9511,	// (0x00028503) status_dt_navi_pane_ParamLimits

0x9511,	// (0x00028503) status_dt_navi_pane

0x951e,	// (0x00028510) status_dt_sta_pane_ParamLimits

0x951e,	// (0x00028510) status_dt_sta_pane

0xebce,	// (0x0002dbc0) dt_sta_controll_pane

0xebdb,	// (0x0002dbcd) dt_sta_indi_pane

0xebec,	// (0x0002dbde) dt_sta_title_pane

0x1324,	// (0x00020316) bg_dt_sta_indi_pane_ParamLimits

0x1324,	// (0x00020316) bg_dt_sta_indi_pane

0xebff,	// (0x0002dbf1) dt_sta_battery_pane

0xec07,	// (0x0002dbf9) dt_sta_indi_pane_g1

0xec10,	// (0x0002dc02) dt_sta_indi_pane_g2

0xec19,	// (0x0002dc0b) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x0002ee77) dt_sta_indi_pane_g

0xec22,	// (0x0002dc14) dt_sta_signal_pane

0x18a9,	// (0x0002089b) bg_dt_sta_title_pane_ParamLimits

0x18a9,	// (0x0002089b) bg_dt_sta_title_pane

0xec2b,	// (0x0002dc1d) dt_sta_title_pane_g1

0xec33,	// (0x0002dc25) dt_sta_title_pane_t1_ParamLimits

0xec33,	// (0x0002dc25) dt_sta_title_pane_t1

0x1167,	// (0x00020159) bg_dt_sta_control_pane

0xec48,	// (0x0002dc3a) dt_sta_controll_pane_g1

0xec51,	// (0x0002dc43) bg_dt_sta_title_pane_g1

0xec5a,	// (0x0002dc4c) bg_dt_sta_title_pane_g2

0xec63,	// (0x0002dc55) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x0002ee7e) bg_dt_sta_title_pane_g

0xbce9,	// (0x0002acdb) bg_dt_sta_indi_pane_g1

0xec6c,	// (0x0002dc5e) dt_sta_signal_pane_g1

0xec74,	// (0x0002dc66) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x0002ee85) dt_sta_signal_pane_g

0xec7c,	// (0x0002dc6e) dt_sta_battery_pane_g1

0xec85,	// (0x0002dc77) dt_sta_battery_pane_t1

0xbce9,	// (0x0002acdb) bg_dt_sta_control_pane_g1

0x6c4d,	// (0x00025c3f) fep_china_uni_eep_pane

0x6c55,	// (0x00025c47) fep_china_uni_entry_pane_ParamLimits

0x6c65,	// (0x00025c57) popup_fep_china_uni_window_g1_ParamLimits

0x6c75,	// (0x00025c67) popup_fep_china_uni_window_g2_ParamLimits

0x6c75,	// (0x00025c67) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0002e70a) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0002e70a) popup_fep_china_uni_window_g

0xec94,	// (0x0002dc86) fep_china_uni_eep_pane_g1

0xec9c,	// (0x0002dc8e) fep_china_uni_eep_pane_t1

0xe20d,	// (0x0002d1ff) aid_touch_area_size_smil_player

0x7fe0,	// (0x00026fd2) lc0_clock_pane

0x956d,	// (0x0002855f) status_pane_g5_ParamLimits

0x956d,	// (0x0002855f) status_pane_g5

0x79d8,	// (0x000269ca) popup_keymap_window

0x9533,	// (0x00028525) status_icon_pane

0xe8e7,	// (0x0002d8d9) cell_ai5_widget_pane_g3_ParamLimits

0xe901,	// (0x0002d8f3) cell_ai5_widget_pane_g4_ParamLimits

0xe911,	// (0x0002d903) cell_ai5_widget_pane_g5_ParamLimits

0xe939,	// (0x0002d92b) cell_ai5_widget_pane_g8_ParamLimits

0xe939,	// (0x0002d92b) cell_ai5_widget_pane_g8

0xe94d,	// (0x0002d93f) cell_ai5_widget_pane_g9_ParamLimits

0xe94d,	// (0x0002d93f) cell_ai5_widget_pane_g9

0xe961,	// (0x0002d953) cell_ai5_widget_pane_g10_ParamLimits

0xe961,	// (0x0002d953) cell_ai5_widget_pane_g10

0xecab,	// (0x0002dc9d) status_icon_pane_g1

0x1167,	// (0x00020159) bg_popup_sub_pane_cp13

0xecb3,	// (0x0002dca5) popup_keymap_window_t1

0x7683,	// (0x00026675) control_pane_g6_ParamLimits

0x7683,	// (0x00026675) control_pane_g6

0x7690,	// (0x00026682) control_pane_g7_ParamLimits

0x7690,	// (0x00026682) control_pane_g7

0x769d,	// (0x0002668f) control_pane_g8_ParamLimits

0x769d,	// (0x0002668f) control_pane_g8

0xebce,	// (0x0002dbc0) dt_sta_controll_pane_ParamLimits

0xebdb,	// (0x0002dbcd) dt_sta_indi_pane_ParamLimits

0xebec,	// (0x0002dbde) dt_sta_title_pane_ParamLimits

0x1771,	// (0x00020763) aid_size_touch_scroll_bar_cale

0x61e7,	// (0x000251d9) popup_discreet_window_ParamLimits

0x61e7,	// (0x000251d9) popup_discreet_window

0x6275,	// (0x00025267) popup_sk_window

0x9d38,	// (0x00028d2a) bg_popup_sub_pane_cp28_ParamLimits

0x9d38,	// (0x00028d2a) bg_popup_sub_pane_cp28

0xecc1,	// (0x0002dcb3) popup_discreet_window_g1_ParamLimits

0xecc1,	// (0x0002dcb3) popup_discreet_window_g1

0xece1,	// (0x0002dcd3) popup_discreet_window_t1_ParamLimits

0xece1,	// (0x0002dcd3) popup_discreet_window_t1

0xecff,	// (0x0002dcf1) popup_discreet_window_t2_ParamLimits

0xecff,	// (0x0002dcf1) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x0002ee8a) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x0002ee8a) popup_discreet_window_t

0x9169,	// (0x0002815b) popup_sk_window_g1

0x9173,	// (0x00028165) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x0002ee91) popup_sk_window_g

0x917b,	// (0x0002816d) popup_sk_window_t1

0x9189,	// (0x0002817b) popup_sk_window_t1_copy1

0xe8d3,	// (0x0002d8c5) cell_ai5_widget_pane_g2_ParamLimits

0xea45,	// (0x0002da37) cell_ai5_widget_pane_t9_ParamLimits

0xea45,	// (0x0002da37) cell_ai5_widget_pane_t9

0x1167,	// (0x00020159) main_fep_fshwr2_pane

0x9197,	// (0x00028189) aid_fshwr2_btn_pane

0x91a3,	// (0x00028195) aid_fshwr2_syb_pane

0x91a3,	// (0x00028195) aid_fshwr2_txt_pane

0x91af,	// (0x000281a1) fshwr2_func_candi_pane

0x91c2,	// (0x000281b4) fshwr2_hwr_syb_pane

0x91d0,	// (0x000281c2) fshwr2_icf_pane

0x1167,	// (0x00020159) fshwr2_icf_bg_pane

0x91ff,	// (0x000281f1) fshwr2_icf_pane_t1_ParamLimits

0x91ff,	// (0x000281f1) fshwr2_icf_pane_t1

0x6a6a,	// (0x00025a5c) fshwr2_func_candi_pane_g1

0xed51,	// (0x0002dd43) fshwr2_func_candi_row_pane_ParamLimits

0xed51,	// (0x0002dd43) fshwr2_func_candi_row_pane

0x9217,	// (0x00028209) cell_fshwr2_syb_pane_ParamLimits

0x9217,	// (0x00028209) cell_fshwr2_syb_pane

0xbf4c,	// (0x0002af3e) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbf4c,	// (0x0002af3e) fshwr2_hwr_syb_pane_g1

0x1167,	// (0x00020159) bg_popup_call_pane_cp01

0x922d,	// (0x0002821f) fshwr2_func_candi_cell_pane_ParamLimits

0x922d,	// (0x0002821f) fshwr2_func_candi_cell_pane

0xed61,	// (0x0002dd53) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed61,	// (0x0002dd53) fshwr2_func_candi_cell_bg_pane

0x927e,	// (0x00028270) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x927e,	// (0x00028270) fshwr2_func_candi_cell_pane_g1

0x929e,	// (0x00028290) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x929e,	// (0x00028290) fshwr2_func_candi_cell_pane_t1

0x1167,	// (0x00020159) bg_button_pane_cp08

0xed6d,	// (0x0002dd5f) cell_fshwr2_syb_bg_pane

0x92b1,	// (0x000282a3) cell_fshwr2_syb_bg_pane_g1

0x92b9,	// (0x000282ab) cell_fshwr2_syb_bg_pane_t1

0x18a9,	// (0x0002089b) main_tmo_pane

0xa85c,	// (0x0002984e) uni_indicator_pane_g1_ParamLimits

0xa86f,	// (0x00029861) uni_indicator_pane_g2_ParamLimits

0xa881,	// (0x00029873) uni_indicator_pane_g3_ParamLimits

0xa890,	// (0x00029882) uni_indicator_pane_g4_ParamLimits

0xa890,	// (0x00029882) uni_indicator_pane_g4

0xa8a4,	// (0x00029896) uni_indicator_pane_g5_ParamLimits

0xa8a4,	// (0x00029896) uni_indicator_pane_g5

0xa8a4,	// (0x00029896) uni_indicator_pane_g6_ParamLimits

0xa8a4,	// (0x00029896) uni_indicator_pane_g6

0xf91c,	// (0x0002e90e) uni_indicator_pane_g_ParamLimits

0xd1ec,	// (0x0002c1de) popup_tmo_note_window_ParamLimits

0xd1ec,	// (0x0002c1de) popup_tmo_note_window

0x18a9,	// (0x0002089b) fshwr2_bg_pane

0x928f,	// (0x00028281) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x928f,	// (0x00028281) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x0002ee96) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x0002ee96) fshwr2_func_candi_cell_pane_g

0xbce9,	// (0x0002acdb) bg_popup_window_pane_cp01

0x92c8,	// (0x000282ba) bg_popup_window_pane_g1_cp01

0xed75,	// (0x0002dd67) bg_popup_window_pane_cp22_ParamLimits

0xed75,	// (0x0002dd67) bg_popup_window_pane_cp22

0xed83,	// (0x0002dd75) listscroll_tmo_link_pane_ParamLimits

0xed83,	// (0x0002dd75) listscroll_tmo_link_pane

0xedc3,	// (0x0002ddb5) popup_tmo_note_window_g1_ParamLimits

0xedc3,	// (0x0002ddb5) popup_tmo_note_window_g1

0xedd0,	// (0x0002ddc2) tmo_note_info_pane_ParamLimits

0xedd0,	// (0x0002ddc2) tmo_note_info_pane

0xedea,	// (0x0002dddc) list_tmo_note_info_pane_g1_ParamLimits

0xedea,	// (0x0002dddc) list_tmo_note_info_pane_g1

0xee01,	// (0x0002ddf3) list_tmo_note_info_pane_g2_ParamLimits

0xee01,	// (0x0002ddf3) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x0002ee9b) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x0002ee9b) list_tmo_note_info_pane_g

0xee1d,	// (0x0002de0f) list_tmo_note_info_text_pane_ParamLimits

0xee1d,	// (0x0002de0f) list_tmo_note_info_text_pane

0xeea2,	// (0x0002de94) list_tmo_link_pane

0xeeaf,	// (0x0002dea1) scroll_pane_cp20

0xeebc,	// (0x0002deae) list_single_tmo_link_pane_ParamLimits

0xeebc,	// (0x0002deae) list_single_tmo_link_pane

0xeecc,	// (0x0002debe) list_single_tmo_link_pane_t1

0xeeda,	// (0x0002decc) list_tmo_note_info_text_pane_t1_ParamLimits

0xeeda,	// (0x0002decc) list_tmo_note_info_text_pane_t1

0x6704,	// (0x000256f6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x6704,	// (0x000256f6) aid_size_touch_scroll_bar_cp01

0x5450,	// (0x00024442) aid_size_touch_slider_marker

0x625d,	// (0x0002524f) popup_settings_window_ParamLimits

0x625d,	// (0x0002524f) popup_settings_window

0x55fb,	// (0x000245ed) popup_candi_list_indi_window

0x7e92,	// (0x00026e84) aid_touch_navi_pane_ParamLimits

0x8968,	// (0x0002795a) rs_clock_indi_pane

0x8971,	// (0x00027963) sctrl_sk_bottom_pane_ParamLimits

0x8982,	// (0x00027974) sctrl_sk_top_pane_ParamLimits

0x8a6b,	// (0x00027a5d) popup_fep_tooltip_window

0xe84d,	// (0x0002d83f) aid_size_cell_widget_grid_ParamLimits

0xe8be,	// (0x0002d8b0) cell_ai5_widget_pane_g1_ParamLimits

0xe8be,	// (0x0002d8b0) cell_ai5_widget_pane_g1

0xe921,	// (0x0002d913) cell_ai5_widget_pane_g6_ParamLimits

0xe92d,	// (0x0002d91f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x0002ee19) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x0002ee19) cell_ai5_widget_pane_g

0xea74,	// (0x0002da66) cell_ai5_widget_pane_t10_ParamLimits

0xea74,	// (0x0002da66) cell_ai5_widget_pane_t10

0xea92,	// (0x0002da84) grid_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0002db1c) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2a,	// (0x0002db1c) cell_contacts_ai5_widget_pane

0xed14,	// (0x0002dd06) popup_discreet_window_t3_ParamLimits

0xed14,	// (0x0002dd06) popup_discreet_window_t3

0x91e7,	// (0x000281d9) popup_fshwr2_char_preview_window_ParamLimits

0x91e7,	// (0x000281d9) popup_fshwr2_char_preview_window

0xee3b,	// (0x0002de2d) tmo_note_info_pane_t1

0xee50,	// (0x0002de42) tmo_note_info_pane_t2

0xee69,	// (0x0002de5b) tmo_note_info_pane_t3

0xee7e,	// (0x0002de70) tmo_note_info_pane_t4

0xee90,	// (0x0002de82) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x0002eea0) tmo_note_info_pane_t

0xeea2,	// (0x0002de94) list_tmo_link_pane_ParamLimits

0xeeaf,	// (0x0002dea1) scroll_pane_cp20_ParamLimits

0x1167,	// (0x00020159) bg_popup_fep_char_preview_window_cp01

0xeef3,	// (0x0002dee5) popup_fshwr2_char_preview_window_t1

0xef01,	// (0x0002def3) popup_candi_list_indi_window_g1

0xef0a,	// (0x0002defc) bg_cell_contacts_ai5_widget_pane

0xef16,	// (0x0002df08) cell_contacts_ai5_widget_pane_g1

0xef2b,	// (0x0002df1d) cell_contacts_ai5_widget_pane_g2

0xef37,	// (0x0002df29) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x0002eeab) cell_contacts_ai5_widget_pane_g

0xef43,	// (0x0002df35) cell_contacts_ai5_widget_pane_t1

0x18a9,	// (0x0002089b) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefba,	// (0x0002dfac) settings_container_pane

0x728d,	// (0x0002627f) listscroll_set_pane_copy1

0xb441,	// (0x0002a433) scroll_pane_cp121_copy1

0xefc6,	// (0x0002dfb8) set_content_pane_copy1

0xefce,	// (0x0002dfc0) aid_height_set_list_copy1_ParamLimits

0xefce,	// (0x0002dfc0) aid_height_set_list_copy1

0xaaa4,	// (0x00029a96) aid_size_parent_copy1_ParamLimits

0xaaa4,	// (0x00029a96) aid_size_parent_copy1

0xefda,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefda,	// (0x0002dfcc) button_value_adjust_pane_cp6_copy1

0x77e3,	// (0x000267d5) list_highlight_pane_cp2_copy1_ParamLimits

0x77e3,	// (0x000267d5) list_highlight_pane_cp2_copy1

0xefee,	// (0x0002dfe0) list_set_pane_copy1_ParamLimits

0xefee,	// (0x0002dfe0) list_set_pane_copy1

0xef55,	// (0x0002df47) main_pane_set_t1_copy1_ParamLimits

0xef55,	// (0x0002df47) main_pane_set_t1_copy1

0xef8f,	// (0x0002df81) main_pane_set_t2_copy1_ParamLimits

0xef8f,	// (0x0002df81) main_pane_set_t2_copy1

0xf0af,	// (0x0002e0a1) main_pane_set_t3_copy1

0xf0bd,	// (0x0002e0af) main_pane_set_t4_copy1

0xefae,	// (0x0002dfa0) set_content_pane_g1_copy1_ParamLimits

0xefae,	// (0x0002dfa0) set_content_pane_g1_copy1

0xf0cb,	// (0x0002e0bd) setting_code_pane_copy1

0xf0d3,	// (0x0002e0c5) setting_slider_graphic_pane_copy1

0xf0d3,	// (0x0002e0c5) setting_slider_pane_copy1

0xf0d3,	// (0x0002e0c5) setting_text_pane_copy1

0xf0d3,	// (0x0002e0c5) setting_volume_pane_copy1

0xf0cb,	// (0x0002e0bd) settings_code_pane_cp2_copy1

0xf0db,	// (0x0002e0cd) settings_code_pane_cp_copy1_ParamLimits

0xf0db,	// (0x0002e0cd) settings_code_pane_cp_copy1

0x92d1,	// (0x000282c3) volume_set_pane_copy1

0xf0ef,	// (0x0002e0e1) volume_set_pane_g10_copy1

0xf0fb,	// (0x0002e0ed) volume_set_pane_g1_copy1

0xf105,	// (0x0002e0f7) volume_set_pane_g2_copy1

0xf10f,	// (0x0002e101) volume_set_pane_g3_copy1

0xf119,	// (0x0002e10b) volume_set_pane_g4_copy1

0xf123,	// (0x0002e115) volume_set_pane_g5_copy1

0xf12d,	// (0x0002e11f) volume_set_pane_g6_copy1

0xf137,	// (0x0002e129) volume_set_pane_g7_copy1

0xf141,	// (0x0002e133) volume_set_pane_g8_copy1

0xf14b,	// (0x0002e13d) volume_set_pane_g9_copy1

0x11d7,	// (0x000201c9) bg_set_opt_pane_cp_copy1_ParamLimits

0x11d7,	// (0x000201c9) bg_set_opt_pane_cp_copy1

0x92dd,	// (0x000282cf) setting_slider_pane_t1_copy1_ParamLimits

0x92dd,	// (0x000282cf) setting_slider_pane_t1_copy1

0x92fb,	// (0x000282ed) setting_slider_pane_t2_copy1_ParamLimits

0x92fb,	// (0x000282ed) setting_slider_pane_t2_copy1

0x9315,	// (0x00028307) setting_slider_pane_t3_copy1_ParamLimits

0x9315,	// (0x00028307) setting_slider_pane_t3_copy1

0x932d,	// (0x0002831f) slider_set_pane_copy1_ParamLimits

0x932d,	// (0x0002831f) slider_set_pane_copy1

0x2dfa,	// (0x00021dec) set_opt_bg_pane_g1_copy2

0x2e02,	// (0x00021df4) set_opt_bg_pane_g2_copy2

0xf155,	// (0x0002e147) set_opt_bg_pane_g3_copy2

0x2e12,	// (0x00021e04) set_opt_bg_pane_g4_copy2

0x2e1a,	// (0x00021e0c) set_opt_bg_pane_g5_copy2

0x2e22,	// (0x00021e14) set_opt_bg_pane_g6_copy2

0xf15f,	// (0x0002e151) set_opt_bg_pane_g7_copy2

0xf169,	// (0x0002e15b) set_opt_bg_pane_g8_copy2

0xf173,	// (0x0002e165) set_opt_bg_pane_g9_copy2

0x9343,	// (0x00028335) aid_size_touch_slider_mark_copy1_ParamLimits

0x9343,	// (0x00028335) aid_size_touch_slider_mark_copy1

0xf17d,	// (0x0002e16f) slider_set_pane_g1_copy1

0x9357,	// (0x00028349) slider_set_pane_g2_copy1

0x8430,	// (0x00027422) slider_set_pane_g3_copy1_ParamLimits

0x8430,	// (0x00027422) slider_set_pane_g3_copy1

0x8444,	// (0x00027436) slider_set_pane_g4_copy1_ParamLimits

0x8444,	// (0x00027436) slider_set_pane_g4_copy1

0x845c,	// (0x0002744e) slider_set_pane_g5_copy1_ParamLimits

0x845c,	// (0x0002744e) slider_set_pane_g5_copy1

0x8430,	// (0x00027422) slider_set_pane_g6_copy1_ParamLimits

0x8430,	// (0x00027422) slider_set_pane_g6_copy1

0x935f,	// (0x00028351) slider_set_pane_g7_copy1_ParamLimits

0x935f,	// (0x00028351) slider_set_pane_g7_copy1

0x117b,	// (0x0002016d) bg_set_opt_pane_cp2_copy1

0xf186,	// (0x0002e178) setting_slider_graphic_pane_g1_copy1

0xf18f,	// (0x0002e181) setting_slider_graphic_pane_t1_copy1

0xf19f,	// (0x0002e191) setting_slider_graphic_pane_t2_copy1

0xf1af,	// (0x0002e1a1) slider_set_pane_cp_copy1

0xf1bf,	// (0x0002e1b1) input_focus_pane_cp1_copy1

0xf1c8,	// (0x0002e1ba) list_set_text_pane_copy1

0xf1d0,	// (0x0002e1c2) setting_text_pane_g1_copy1

0x5f3e,	// (0x00024f30) set_text_pane_t1_copy1

0xf1bf,	// (0x0002e1b1) input_focus_pane_cp2_copy1

0xf1d0,	// (0x0002e1c2) setting_code_pane_g1_copy1

0xf1d9,	// (0x0002e1cb) setting_code_pane_t1_copy1

0x6f75,	// (0x00025f67) list_set_graphic_pane_copy1

0x117b,	// (0x0002016d) bg_set_opt_pane_cp4_copy1

0x6f88,	// (0x00025f7a) list_set_graphic_pane_g1_copy1_ParamLimits

0x6f88,	// (0x00025f7a) list_set_graphic_pane_g1_copy1

0xf1e7,	// (0x0002e1d9) list_set_graphic_pane_g2_copy1

0x6fa0,	// (0x00025f92) list_set_graphic_pane_t1_copy1_ParamLimits

0x6fa0,	// (0x00025f92) list_set_graphic_pane_t1_copy1

0xbce9,	// (0x0002acdb) rs_clock_indi_pane_g1

0xf1ef,	// (0x0002e1e1) rs_clock_indi_pane_t1

0xf1fd,	// (0x0002e1ef) rs_indi_pane

0xf205,	// (0x0002e1f7) rs_indi_pane_g1

0xf20e,	// (0x0002e200) rs_indi_pane_g2

0xf217,	// (0x0002e209) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x0002eeb2) rs_indi_pane_g

0x728d,	// (0x0002627f) bg_popup_preview_window_pane_cp03

0xf220,	// (0x0002e212) popup_fep_tooltip_window_t1

0xc994,	// (0x0002b986) popup_note2_window_g2_ParamLimits

0xc994,	// (0x0002b986) popup_note2_window_g2

0x0001,

0xfc59,	// (0x0002ec4b) popup_note2_window_g_ParamLimits

0xfc59,	// (0x0002ec4b) popup_note2_window_g

0xce9c,	// (0x0002be8e) bg_popup_sub_pane_cp11_ParamLimits

0xcea9,	// (0x0002be9b) cell_ai3_links_pane_g1_ParamLimits

0xcec0,	// (0x0002beb2) cell_ai3_links_pane_t1

0x5f3e,	// (0x00024f30) set_text_pane_t1_copy1_ParamLimits

0x71a6,	// (0x00026198) cell_graphic_popup_pane_cp2_ParamLimits

0x71a6,	// (0x00026198) cell_graphic_popup_pane_cp2

0xf22e,	// (0x0002e220) cell_graphic_popup_pane_g1_cp2

0x1584,	// (0x00020576) cell_graphic_popup_pane_g2_cp2

0xf236,	// (0x0002e228) cell_graphic_popup_pane_g3_cp2

0xf23e,	// (0x0002e230) cell_graphic_popup_pane_t2_cp2

0x1595,	// (0x00020587) grid_highlight_pane_cp3_cp2

0x3260,	// (0x00022252) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x18a9,	// (0x0002089b) main_tmo_pane_ParamLimits

0xd1e0,	// (0x0002c1d2) popup_tmo_big_image_note_window

0xe8ad,	// (0x0002d89f) cell_ai5_widget_list_pane

0xe8b5,	// (0x0002d8a7) cell_ai5_widget_lrg_icon_pane

0xee3b,	// (0x0002de2d) tmo_note_info_pane_t1_ParamLimits

0xee50,	// (0x0002de42) tmo_note_info_pane_t2_ParamLimits

0xee69,	// (0x0002de5b) tmo_note_info_pane_t3_ParamLimits

0xee7e,	// (0x0002de70) tmo_note_info_pane_t4_ParamLimits

0xee90,	// (0x0002de82) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x0002eea0) tmo_note_info_pane_t_ParamLimits

0xefba,	// (0x0002dfac) settings_container_pane_ParamLimits

0xf1b7,	// (0x0002e1a9) indicator_popup_pane_cp5

0xf1b7,	// (0x0002e1a9) indicator_popup_pane_cp6

0x6f75,	// (0x00025f67) list_set_graphic_pane_copy1_ParamLimits

0x1167,	// (0x00020159) bg_popup_window_pane_cp23

0xf24c,	// (0x0002e23e) popup_tmo_big_image_note_window_g1

0xf258,	// (0x0002e24a) popup_tmo_big_image_note_window_t1

0xf268,	// (0x0002e25a) popup_tmo_big_image_note_window_t2

0xf278,	// (0x0002e26a) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x0002eeb9) popup_tmo_big_image_note_window_t

0xbce9,	// (0x0002acdb) cell_ai5_widget_lrg_icon_pane_g1

0xf288,	// (0x0002e27a) cell_ai5_widget_lrg_icon_pane_t1

0xf296,	// (0x0002e288) cell_ai5_widget_list_row_pane_ParamLimits

0xf296,	// (0x0002e288) cell_ai5_widget_list_row_pane

0xf2ae,	// (0x0002e2a0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2ae,	// (0x0002e2a0) cell_ai5_widget_list_row_pane_g1

0xf2bb,	// (0x0002e2ad) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2bb,	// (0x0002e2ad) cell_ai5_widget_list_row_pane_t1

0xf2e6,	// (0x0002e2d8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e6,	// (0x0002e2d8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x0002eec0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x0002eec0) cell_ai5_widget_list_row_pane_t

0x1167,	// (0x00020159) main_fep_vtchi_ss_pane

0xf32e,	// (0x0002e320) popup_fep_char_pre_window

0xf336,	// (0x0002e328) popup_fep_ituss_window

0xf357,	// (0x0002e349) popup_fep_vkbss_window

0xf383,	// (0x0002e375) grid_vkbss_keypad_pane_ParamLimits

0xf383,	// (0x0002e375) grid_vkbss_keypad_pane

0xf393,	// (0x0002e385) ituss_keypad_pane

0x9381,	// (0x00028373) aid_vkbss_key_offset_ParamLimits

0x9381,	// (0x00028373) aid_vkbss_key_offset

0x938d,	// (0x0002837f) cell_vkbss_key_pane_ParamLimits

0x938d,	// (0x0002837f) cell_vkbss_key_pane

0xf3a2,	// (0x0002e394) bg_cell_vkbss_key_g1_ParamLimits

0xf3a2,	// (0x0002e394) bg_cell_vkbss_key_g1

0xf3ae,	// (0x0002e3a0) cell_vkbss_key_3p_pane_ParamLimits

0xf3ae,	// (0x0002e3a0) cell_vkbss_key_3p_pane

0xf3c2,	// (0x0002e3b4) cell_vkbss_key_g1_ParamLimits

0xf3c2,	// (0x0002e3b4) cell_vkbss_key_g1

0xf3d6,	// (0x0002e3c8) cell_vkbss_key_t1_ParamLimits

0xf3d6,	// (0x0002e3c8) cell_vkbss_key_t1

0x93a3,	// (0x00028395) cell_ituss_key_pane_ParamLimits

0x93a3,	// (0x00028395) cell_ituss_key_pane

0xf401,	// (0x0002e3f3) bg_cell_ituss_key_g1_ParamLimits

0xf401,	// (0x0002e3f3) bg_cell_ituss_key_g1

0xf40d,	// (0x0002e3ff) cell_ituss_key_pane_g1_ParamLimits

0xf40d,	// (0x0002e3ff) cell_ituss_key_pane_g1

0x93b4,	// (0x000283a6) cell_ituss_key_pane_g2_ParamLimits

0x93b4,	// (0x000283a6) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x0002eec7) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x0002eec7) cell_ituss_key_pane_g

0x93e0,	// (0x000283d2) cell_ituss_key_t1_ParamLimits

0x93e0,	// (0x000283d2) cell_ituss_key_t1

0x941a,	// (0x0002840c) cell_ituss_key_t2_ParamLimits

0x941a,	// (0x0002840c) cell_ituss_key_t2

0x944b,	// (0x0002843d) cell_ituss_key_t3_ParamLimits

0x944b,	// (0x0002843d) cell_ituss_key_t3

0x941a,	// (0x0002840c) cell_ituss_key_t4_ParamLimits

0x941a,	// (0x0002840c) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x0002eece) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x0002eece) cell_ituss_key_t

0xf433,	// (0x0002e425) cell_vkbss_key_3p_pane_g1

0xf43b,	// (0x0002e42d) cell_vkbss_key_3p_pane_g2

0xf443,	// (0x0002e435) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x0002eed9) cell_vkbss_key_3p_pane_g

0x728d,	// (0x0002627f) bg_popup_fep_char_preview_window_cp02

0xf44b,	// (0x0002e43d) popup_fep_char_pre_window_t1

0xe83a,	// (0x0002d82c) main_ai5_sk_pane

0xef0a,	// (0x0002defc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef16,	// (0x0002df08) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef2b,	// (0x0002df1d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef37,	// (0x0002df29) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x0002eeab) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef43,	// (0x0002df35) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x18a9,	// (0x0002089b) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf459,	// (0x0002e44b) main_ai5_sk_pane_g1

0x9b70,	// (0x00028b62) popup_query_code_window_g1

0xf34c,	// (0x0002e33e) popup_fep_vkb_icf_pane

0xf36d,	// (0x0002e35f) popup_fep_vtchi_icf_pane

0xf462,	// (0x0002e454) bg_icf_pane

0xf46e,	// (0x0002e460) list_vkb_icf_pane

0xf47d,	// (0x0002e46f) bg_icf_pane_cp01

0xf490,	// (0x0002e482) vtchi_icf_list_pane

0xf4a0,	// (0x0002e492) list_vkb_icf_pane_t1_ParamLimits

0xf4a0,	// (0x0002e492) list_vkb_icf_pane_t1

0xf4b6,	// (0x0002e4a8) vtchi_icf_list_pane_t1_ParamLimits

0xf4b6,	// (0x0002e4a8) vtchi_icf_list_pane_t1

0xf336,	// (0x0002e328) popup_fep_ituss_window_ParamLimits

0xf36d,	// (0x0002e35f) popup_fep_vtchi_icf_pane_ParamLimits

0xf393,	// (0x0002e385) ituss_keypad_pane_ParamLimits

0x9375,	// (0x00028367) ituss_sks_pane

0xf462,	// (0x0002e454) bg_icf_pane_ParamLimits

0xf30e,	// (0x0002e300) icf_edit_indi_pane_ParamLimits

0xf30e,	// (0x0002e300) icf_edit_indi_pane

0xf46e,	// (0x0002e460) list_vkb_icf_pane_ParamLimits

0xf47d,	// (0x0002e46f) bg_icf_pane_cp01_ParamLimits

0xf321,	// (0x0002e313) icf_edit_indi_pane_cp01_ParamLimits

0xf321,	// (0x0002e313) icf_edit_indi_pane_cp01

0xf498,	// (0x0002e48a) vtchi_query_pane

0xe1dd,	// (0x0002d1cf) icf_edit_indi_pane_g1_ParamLimits

0xe1dd,	// (0x0002d1cf) icf_edit_indi_pane_g1

0xf525,	// (0x0002e517) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e517) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x0002eef1) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x0002eef1) icf_edit_indi_pane_g

0xf537,	// (0x0002e529) icf_edit_indi_pane_t1

0xf4ce,	// (0x0002e4c0) bg_input_focus_pane_cp042

0x1768,	// (0x0002075a) vtchi_button_pane

0xf4d7,	// (0x0002e4c9) vtchi_query_pane_t1

0xf4e5,	// (0x0002e4d7) vtchi_query_pane_t2

0xf4f3,	// (0x0002e4e5) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x0002eee0) vtchi_query_pane_t

0x1167,	// (0x00020159) bg_button_pane_cp13

0xf501,	// (0x0002e4f3) vtchi_button_pane_g1

0x948e,	// (0x00028480) ituss_sks_pane_g1

0x9499,	// (0x0002848b) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x0002eee7) ituss_sks_pane_g

0xf509,	// (0x0002e4fb) ituss_sks_pane_t1

0xf517,	// (0x0002e509) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x0002eeec) ituss_sks_pane_t

0xb7c6,	// (0x0002a7b8) indicator_nsta_pane_cp_g1

0xb7ce,	// (0x0002a7c0) indicator_nsta_pane_cp_g2

0xb7d6,	// (0x0002a7c8) indicator_nsta_pane_cp_g3

0xb7c6,	// (0x0002a7b8) indicator_nsta_pane_cp_g4

0xb7ce,	// (0x0002a7c0) indicator_nsta_pane_cp_g5

0xb7d6,	// (0x0002a7c8) indicator_nsta_pane_cp_g6

0x0005,

0xfaa3,	// (0x0002ea95) indicator_nsta_pane_cp_g

0xdf07,	// (0x0002cef9) cell_graphic2_pane_t2_ParamLimits

0xdf07,	// (0x0002cef9) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x0002eda2) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x0002eda2) cell_graphic2_pane_t

0xdf34,	// (0x0002cf26) cell_graphic2_control_pane_t1

0x6ba4,	// (0x00025b96) signal_pane_g3_ParamLimits

0x6ba4,	// (0x00025b96) signal_pane_g3

0x6bb3,	// (0x00025ba5) signal_pane_g4_ParamLimits

0x6bb3,	// (0x00025ba5) signal_pane_g4

0xf2f8,	// (0x0002e2ea) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f8,	// (0x0002e2ea) cell_ai5_widget_list_row_pane_t3

0xf421,	// (0x0002e413) cell_ituss_key_pane_t1_ParamLimits

0xf421,	// (0x0002e413) cell_ituss_key_pane_t1

0x97df,	// (0x000287d1) form_field_data_wide_pane_vc_t2_ParamLimits

0x97df,	// (0x000287d1) form_field_data_wide_pane_vc_t2

0x97f3,	// (0x000287e5) form_field_data_wide_pane_vc_t3_ParamLimits

0x97f3,	// (0x000287e5) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0002e7f6) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0002e7f6) form_field_data_wide_pane_vc_t

0xb481,	// (0x0002a473) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb481,	// (0x0002a473) form_field_slider_wide_pane_vc_t3

0xb557,	// (0x0002a549) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb557,	// (0x0002a549) form_field_popup_wide_pane_vc_t2

0xb56e,	// (0x0002a560) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb56e,	// (0x0002a560) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa92,	// (0x0002ea84) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa92,	// (0x0002ea84) form_field_popup_wide_pane_vc_t

0x9197,	// (0x00028189) aid_fshwr2_btn_pane_ParamLimits

0x91a3,	// (0x00028195) aid_fshwr2_syb_pane_ParamLimits

0x91a3,	// (0x00028195) aid_fshwr2_txt_pane_ParamLimits

0x18a9,	// (0x0002089b) fshwr2_bg_pane_ParamLimits

0x91af,	// (0x000281a1) fshwr2_func_candi_pane_ParamLimits

0x91c2,	// (0x000281b4) fshwr2_hwr_syb_pane_ParamLimits

0x91d0,	// (0x000281c2) fshwr2_icf_pane_ParamLimits

0x5b0b,	// (0x00024afd) list_double_graphic_pane_vc_g4_ParamLimits

0x5b0b,	// (0x00024afd) list_double_graphic_pane_vc_g4

0x93d4,	// (0x000283c6) cell_ituss_key_pane_g3_ParamLimits

0x93d4,	// (0x000283c6) cell_ituss_key_pane_g3

0x947c,	// (0x0002846e) cell_ituss_key_t5_ParamLimits

0x947c,	// (0x0002846e) cell_ituss_key_t5

0xf357,	// (0x0002e349) popup_fep_vkbss_window_ParamLimits

0xe844,	// (0x0002d836) aid_cell_ai5_quarter

0xf537,	// (0x0002e529) icf_edit_indi_pane_t1_ParamLimits

0x13cc,	// (0x000203be) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x13cc,	// (0x000203be) aid_tch_indicator_popup_pane_cp2

0x13df,	// (0x000203d1) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x13df,	// (0x000203d1) aid_tch_query_popup_data_pane_cp2

0x9b18,	// (0x00028b0a) aid_tch_query_popup_pane_ParamLimits

0x9b18,	// (0x00028b0a) aid_tch_query_popup_pane

0x9b18,	// (0x00028b0a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9b18,	// (0x00028b0a) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Small
