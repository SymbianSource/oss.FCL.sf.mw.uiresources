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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x000143aa };

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
0x9e28,	// (0x0001e1d2) Screen

0x9e34,	// (0x0001e1de) application_window_ParamLimits

0x9e34,	// (0x0001e1de) application_window

0xc171,	// (0x0002051b) screen_g1

0x8b81,	// (0x0001cf2b) area_bottom_pane_ParamLimits

0x8b81,	// (0x0001cf2b) area_bottom_pane

0xdce3,	// (0x0002208d) area_top_pane_ParamLimits

0xdce3,	// (0x0002208d) area_top_pane

0xdd81,	// (0x0002212b) main_pane_ParamLimits

0xdd81,	// (0x0002212b) main_pane

0xc17b,	// (0x00020525) misc_graphics

0xacdf,	// (0x0001f089) battery_pane_ParamLimits

0xacdf,	// (0x0001f089) battery_pane

0x23ce,	// (0x00016778) bg_status_flat_pane_g8

0x23d6,	// (0x00016780) bg_status_flat_pane_g9

0x16c9,	// (0x00015a73) context_pane_ParamLimits

0x16c9,	// (0x00015a73) context_pane

0xae56,	// (0x0001f200) navi_pane_ParamLimits

0xae56,	// (0x0001f200) navi_pane

0xaee0,	// (0x0001f28a) signal_pane_ParamLimits

0xaee0,	// (0x0001f28a) signal_pane

0x0008,

0xf86f,	// (0x00023c19) bg_status_flat_pane_g

0xaf70,	// (0x0001f31a) status_pane_g1_ParamLimits

0xaf70,	// (0x0001f31a) status_pane_g1

0xaf86,	// (0x0001f330) status_pane_g2_ParamLimits

0xaf86,	// (0x0001f330) status_pane_g2

0x1902,	// (0x00015cac) status_pane_g3_ParamLimits

0x1902,	// (0x00015cac) status_pane_g3

0x0004,

0xf79b,	// (0x00023b45) status_pane_g_ParamLimits

0xf79b,	// (0x00023b45) status_pane_g

0xaf92,	// (0x0001f33c) title_pane_ParamLimits

0xaf92,	// (0x0001f33c) title_pane

0xaff9,	// (0x0001f3a3) uni_indicator_pane_ParamLimits

0xaff9,	// (0x0001f3a3) uni_indicator_pane

0x1529,	// (0x000158d3) bg_list_pane_ParamLimits

0x1529,	// (0x000158d3) bg_list_pane

0xac50,	// (0x0001effa) find_pane

0x1bdb,	// (0x00015f85) listscroll_app_pane_ParamLimits

0x1bdb,	// (0x00015f85) listscroll_app_pane

0x155d,	// (0x00015907) listscroll_form_pane

0x8eef,	// (0x0001d299) listscroll_gen_pane_ParamLimits

0x8eef,	// (0x0001d299) listscroll_gen_pane

0xe7c5,	// (0x00022b6f) listscroll_set_pane

0x2f88,	// (0x00017332) main_idle_act_pane

0x1222,	// (0x000155cc) main_idle_trad_pane

0x1222,	// (0x000155cc) main_list_empty_pane

0x1551,	// (0x000158fb) main_midp_pane

0x1577,	// (0x00015921) main_pane_g1_ParamLimits

0x1577,	// (0x00015921) main_pane_g1

0x8f03,	// (0x0001d2ad) popup_ai_message_window_ParamLimits

0x8f03,	// (0x0001d2ad) popup_ai_message_window

0x8fa3,	// (0x0001d34d) popup_fep_china_uni_window_ParamLimits

0x8fa3,	// (0x0001d34d) popup_fep_china_uni_window

0xe815,	// (0x00022bbf) popup_fep_japan_candidate_window_ParamLimits

0xe815,	// (0x00022bbf) popup_fep_japan_candidate_window

0xe83f,	// (0x00022be9) popup_fep_japan_predictive_window_ParamLimits

0xe83f,	// (0x00022be9) popup_fep_japan_predictive_window

0x9003,	// (0x0001d3ad) popup_find_window

0x9020,	// (0x0001d3ca) popup_grid_graphic_window_ParamLimits

0x9020,	// (0x0001d3ca) popup_grid_graphic_window

0xe875,	// (0x00022c1f) popup_large_graphic_colour_window

0x90c4,	// (0x0001d46e) popup_menu_window_ParamLimits

0x90c4,	// (0x0001d46e) popup_menu_window

0x92b4,	// (0x0001d65e) popup_note_image_window

0x9274,	// (0x0001d61e) popup_note_wait_window_ParamLimits

0x9274,	// (0x0001d61e) popup_note_wait_window

0x92cc,	// (0x0001d676) popup_note_window_ParamLimits

0x92cc,	// (0x0001d676) popup_note_window

0x937a,	// (0x0001d724) popup_query_code_window_ParamLimits

0x937a,	// (0x0001d724) popup_query_code_window

0xe89b,	// (0x00022c45) popup_query_data_code_window_ParamLimits

0xe89b,	// (0x00022c45) popup_query_data_code_window

0x93ba,	// (0x0001d764) popup_query_data_window_ParamLimits

0x93ba,	// (0x0001d764) popup_query_data_window

0x944e,	// (0x0001d7f8) popup_query_sat_info_window_ParamLimits

0x944e,	// (0x0001d7f8) popup_query_sat_info_window

0x94f7,	// (0x0001d8a1) popup_snote_single_graphic_window_ParamLimits

0x94f7,	// (0x0001d8a1) popup_snote_single_graphic_window

0x94f7,	// (0x0001d8a1) popup_snote_single_text_window_ParamLimits

0x94f7,	// (0x0001d8a1) popup_snote_single_text_window

0xe8be,	// (0x00022c68) popup_sub_window_general

0xe914,	// (0x00022cbe) popup_window_general_ParamLimits

0xe914,	// (0x00022cbe) popup_window_general

0x158d,	// (0x00015937) power_save_pane

0x8d76,	// (0x0001d120) control_pane_g1_ParamLimits

0x8d76,	// (0x0001d120) control_pane_g1

0x8d9f,	// (0x0001d149) control_pane_g2_ParamLimits

0x8d9f,	// (0x0001d149) control_pane_g2

0x14ec,	// (0x00015896) control_pane_g3_ParamLimits

0x14ec,	// (0x00015896) control_pane_g3

0x0007,

0xf783,	// (0x00023b2d) control_pane_g_ParamLimits

0xf783,	// (0x00023b2d) control_pane_g

0x8dde,	// (0x0001d188) control_pane_t1_ParamLimits

0x8dde,	// (0x0001d188) control_pane_t1

0x8e44,	// (0x0001d1ee) control_pane_t2_ParamLimits

0x8e44,	// (0x0001d1ee) control_pane_t2

0x0002,

0xf794,	// (0x00023b3e) control_pane_t_ParamLimits

0xf794,	// (0x00023b3e) control_pane_t

0xab82,	// (0x0001ef2c) navi_navi_volume_pane_cp1

0xab8a,	// (0x0001ef34) status_small_icon_pane

0x1421,	// (0x000157cb) status_small_pane_g1_ParamLimits

0x1421,	// (0x000157cb) status_small_pane_g1

0xab92,	// (0x0001ef3c) status_small_pane_g2_ParamLimits

0xab92,	// (0x0001ef3c) status_small_pane_g2

0xab9e,	// (0x0001ef48) status_small_pane_g3_ParamLimits

0xab9e,	// (0x0001ef48) status_small_pane_g3

0xabaa,	// (0x0001ef54) status_small_pane_g4_ParamLimits

0xabaa,	// (0x0001ef54) status_small_pane_g4

0xabb6,	// (0x0001ef60) status_small_pane_g5_ParamLimits

0xabb6,	// (0x0001ef60) status_small_pane_g5

0xabc4,	// (0x0001ef6e) status_small_pane_g6_ParamLimits

0xabc4,	// (0x0001ef6e) status_small_pane_g6

0x0007,

0xf772,	// (0x00023b1c) status_small_pane_g_ParamLimits

0xf772,	// (0x00023b1c) status_small_pane_g

0xabf3,	// (0x0001ef9d) status_small_pane_t1

0xac15,	// (0x0001efbf) status_small_wait_pane_ParamLimits

0xac15,	// (0x0001efbf) status_small_wait_pane

0xa963,	// (0x0001ed0d) aid_levels_signal_ParamLimits

0xa963,	// (0x0001ed0d) aid_levels_signal

0xa97b,	// (0x0001ed25) signal_pane_g1_ParamLimits

0xa97b,	// (0x0001ed25) signal_pane_g1

0xa996,	// (0x0001ed40) signal_pane_g2_ParamLimits

0xa996,	// (0x0001ed40) signal_pane_g2

0x0003,

0xf703,	// (0x00023aad) signal_pane_g_ParamLimits

0xf703,	// (0x00023aad) signal_pane_g

0xe3e8,	// (0x00022792) context_pane_g1

0x9e44,	// (0x0001e1ee) title_pane_g1

0x9e87,	// (0x0001e231) title_pane_t1

0xc191,	// (0x0002053b) title_pane_t2

0xc1b7,	// (0x00020561) title_pane_t3

0x0002,

0xf557,	// (0x00023901) title_pane_t

0xb021,	// (0x0001f3cb) aid_levels_battery_ParamLimits

0xb021,	// (0x0001f3cb) aid_levels_battery

0xb03d,	// (0x0001f3e7) battery_pane_g1_ParamLimits

0xb03d,	// (0x0001f3e7) battery_pane_g1

0xb05a,	// (0x0001f404) battery_pane_g2_ParamLimits

0xb05a,	// (0x0001f404) battery_pane_g2

0x0001,

0xf7a6,	// (0x00023b50) battery_pane_g_ParamLimits

0xf7a6,	// (0x00023b50) battery_pane_g

0xb278,	// (0x0001f622) uni_indicator_pane_g1

0xb28e,	// (0x0001f638) uni_indicator_pane_g2

0xb2a4,	// (0x0001f64e) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x00023cc1) uni_indicator_pane_g

0x109c,	// (0x00015446) navi_icon_pane_ParamLimits

0x109c,	// (0x00015446) navi_icon_pane

0x0fd8,	// (0x00015382) navi_midp_pane

0x10b8,	// (0x00015462) navi_navi_pane

0x10c2,	// (0x0001546c) navi_text_pane_ParamLimits

0x10c2,	// (0x0001546c) navi_text_pane

0xc171,	// (0x0002051b) status_small_wait_pane_g1

0xc4f2,	// (0x0002089c) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x00023cbc) status_small_wait_pane_g

0xb217,	// (0x0001f5c1) navi_navi_icon_text_pane

0xb21f,	// (0x0001f5c9) navi_navi_pane_g1_ParamLimits

0xb21f,	// (0x0001f5c9) navi_navi_pane_g1

0xb231,	// (0x0001f5db) navi_navi_pane_g2_ParamLimits

0xb231,	// (0x0001f5db) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00023c8a) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00023c8a) navi_navi_pane_g

0x2a57,	// (0x00016e01) navi_navi_tabs_pane

0xb243,	// (0x0001f5ed) navi_navi_text_pane

0xb217,	// (0x0001f5c1) navi_navi_volume_pane

0xb205,	// (0x0001f5af) navi_text_pane_t1

0xb1f9,	// (0x0001f5a3) navi_icon_pane_g1

0x294e,	// (0x00016cf8) navi_navi_text_pane_t1

0x97e8,	// (0x0001db92) navi_navi_volume_pane_g1

0x97f0,	// (0x0001db9a) volume_small_pane

0xb155,	// (0x0001f4ff) navi_navi_icon_text_pane_g1

0xb15d,	// (0x0001f507) navi_navi_icon_text_pane_t1

0x10b8,	// (0x00015462) navi_tabs_2_long_pane

0x10b8,	// (0x00015462) navi_tabs_2_pane

0x10b8,	// (0x00015462) navi_tabs_3_long_pane

0x10b8,	// (0x00015462) navi_tabs_3_pane

0x10b8,	// (0x00015462) navi_tabs_4_pane

0x97c8,	// (0x0001db72) tabs_2_active_pane_ParamLimits

0x97c8,	// (0x0001db72) tabs_2_active_pane

0x97d8,	// (0x0001db82) tabs_2_passive_pane_ParamLimits

0x97d8,	// (0x0001db82) tabs_2_passive_pane

0x9796,	// (0x0001db40) tabs_3_active_pane_ParamLimits

0x9796,	// (0x0001db40) tabs_3_active_pane

0x97a6,	// (0x0001db50) tabs_3_passive_pane_ParamLimits

0x97a6,	// (0x0001db50) tabs_3_passive_pane

0x97b7,	// (0x0001db61) tabs_3_passive_pane_cp_ParamLimits

0x97b7,	// (0x0001db61) tabs_3_passive_pane_cp

0x9752,	// (0x0001dafc) tabs_4_active_pane_ParamLimits

0x9752,	// (0x0001dafc) tabs_4_active_pane

0x9763,	// (0x0001db0d) tabs_4_passive_pane_ParamLimits

0x9763,	// (0x0001db0d) tabs_4_passive_pane

0x9774,	// (0x0001db1e) tabs_4_passive_pane_cp_ParamLimits

0x9774,	// (0x0001db1e) tabs_4_passive_pane_cp

0x9785,	// (0x0001db2f) tabs_4_passive_pane_cp2_ParamLimits

0x9785,	// (0x0001db2f) tabs_4_passive_pane_cp2

0x972e,	// (0x0001dad8) tabs_2_long_active_pane_ParamLimits

0x972e,	// (0x0001dad8) tabs_2_long_active_pane

0x9740,	// (0x0001daea) tabs_2_long_passive_pane_ParamLimits

0x9740,	// (0x0001daea) tabs_2_long_passive_pane

0x96e3,	// (0x0001da8d) tabs_3_long_active_pane_ParamLimits

0x96e3,	// (0x0001da8d) tabs_3_long_active_pane

0x96fc,	// (0x0001daa6) tabs_3_long_passive_pane_ParamLimits

0x96fc,	// (0x0001daa6) tabs_3_long_passive_pane

0x9715,	// (0x0001dabf) tabs_3_long_passive_pane_cp_ParamLimits

0x9715,	// (0x0001dabf) tabs_3_long_passive_pane_cp

0xea72,	// (0x00022e1c) volume_small_pane_g1

0x9692,	// (0x0001da3c) volume_small_pane_g2

0x969b,	// (0x0001da45) volume_small_pane_g3

0x96a4,	// (0x0001da4e) volume_small_pane_g4

0x96ad,	// (0x0001da57) volume_small_pane_g5

0x96b6,	// (0x0001da60) volume_small_pane_g6

0x96bf,	// (0x0001da69) volume_small_pane_g7

0x96c8,	// (0x0001da72) volume_small_pane_g8

0x96d1,	// (0x0001da7b) volume_small_pane_g9

0x96da,	// (0x0001da84) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00023c56) volume_small_pane_g

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp2_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp2

0x9f13,	// (0x0001e2bd) tabs_3_active_pane_g1

0x9f1b,	// (0x0001e2c5) tabs_3_active_pane_t1

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp2_ParamLimits

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp2

0x9f13,	// (0x0001e2bd) tabs_3_passive_pane_g1

0x9f1b,	// (0x0001e2c5) tabs_3_passive_pane_t1

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp3_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp3

0x9f2d,	// (0x0001e2d7) tabs_4_active_pane_g1

0x9f35,	// (0x0001e2df) tabs_4_active_pane_t1

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp3_ParamLimits

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp3

0x9f2d,	// (0x0001e2d7) tabs_4_1_passive_pane_g1

0x9f35,	// (0x0001e2df) tabs_4_1_passive_pane_t1

0x1551,	// (0x000158fb) list_highlight_pane_cp2

0x2fae,	// (0x00017358) list_set_pane_ParamLimits

0x2fae,	// (0x00017358) list_set_pane

0xb337,	// (0x0001f6e1) main_pane_set_t1_ParamLimits

0xb337,	// (0x0001f6e1) main_pane_set_t1

0xb357,	// (0x0001f701) main_pane_set_t2_ParamLimits

0xb357,	// (0x0001f701) main_pane_set_t2

0xb36b,	// (0x0001f715) main_pane_set_t3_ParamLimits

0xb36b,	// (0x0001f715) main_pane_set_t3

0xb37f,	// (0x0001f729) main_pane_set_t4_ParamLimits

0xb37f,	// (0x0001f729) main_pane_set_t4

0x0003,

0xf97c,	// (0x00023d26) main_pane_set_t_ParamLimits

0xf97c,	// (0x00023d26) main_pane_set_t

0xb393,	// (0x0001f73d) setting_code_pane

0x30d6,	// (0x00017480) setting_slider_graphic_pane

0x30d6,	// (0x00017480) setting_slider_pane

0x30d6,	// (0x00017480) setting_text_pane

0x30d6,	// (0x00017480) setting_volume_pane

0xde90,	// (0x0002223a) volume_set_pane

0xc1d7,	// (0x00020581) bg_set_opt_pane_cp

0xde9a,	// (0x00022244) setting_slider_pane_t1

0xdeb3,	// (0x0002225d) setting_slider_pane_t2

0xdecd,	// (0x00022277) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023908) setting_slider_pane_t

0xdee5,	// (0x0002228f) slider_set_pane

0xc17b,	// (0x00020525) bg_set_opt_pane_cp2

0xc1e5,	// (0x0002058f) setting_slider_graphic_pane_g1

0xdefb,	// (0x000222a5) setting_slider_graphic_pane_t1

0xdf0b,	// (0x000222b5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002390f) setting_slider_graphic_pane_t

0xdf1b,	// (0x000222c5) slider_set_pane_cp

0xc17b,	// (0x00020525) input_focus_pane_cp1

0x2f6f,	// (0x00017319) list_set_text_pane

0xc171,	// (0x0002051b) setting_text_pane_g1

0xc17b,	// (0x00020525) input_focus_pane_cp2

0xc171,	// (0x0002051b) setting_code_pane_g1

0xc1ee,	// (0x00020598) setting_code_pane_t1

0xc1fc,	// (0x000205a6) set_text_pane_t1_ParamLimits

0xc1fc,	// (0x000205a6) set_text_pane_t1

0xc964,	// (0x00020d0e) set_opt_bg_pane_g1

0xc96c,	// (0x00020d16) set_opt_bg_pane_g2

0x2f47,	// (0x000172f1) set_opt_bg_pane_g3

0xc97c,	// (0x00020d26) set_opt_bg_pane_g4

0xc984,	// (0x00020d2e) set_opt_bg_pane_g5

0xc98c,	// (0x00020d36) set_opt_bg_pane_g6

0x2f51,	// (0x000172fb) set_opt_bg_pane_g7

0x2f5b,	// (0x00017305) set_opt_bg_pane_g8

0x2f65,	// (0x0001730f) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00023d13) set_opt_bg_pane_g

0x2f3a,	// (0x000172e4) slider_set_pane_g1

0xeaf3,	// (0x00022e9d) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00023d04) slider_set_pane_g

0xea7b,	// (0x00022e25) volume_set_pane_g1

0xea85,	// (0x00022e2f) volume_set_pane_g2

0xea8f,	// (0x00022e39) volume_set_pane_g3

0xea99,	// (0x00022e43) volume_set_pane_g4

0xeaa3,	// (0x00022e4d) volume_set_pane_g5

0xeaad,	// (0x00022e57) volume_set_pane_g6

0xeab7,	// (0x00022e61) volume_set_pane_g7

0xeac1,	// (0x00022e6b) volume_set_pane_g8

0xeacb,	// (0x00022e75) volume_set_pane_g9

0xead5,	// (0x00022e7f) volume_set_pane_g10

0x0009,

0xf932,	// (0x00023cdc) volume_set_pane_g

0x9f47,	// (0x0001e2f1) indicator_pane_ParamLimits

0x9f47,	// (0x0001e2f1) indicator_pane

0x9f73,	// (0x0001e31d) main_idle_pane_g2_ParamLimits

0x9f73,	// (0x0001e31d) main_idle_pane_g2

0x9fab,	// (0x0001e355) main_pane_idle_g1_ParamLimits

0x9fab,	// (0x0001e355) main_pane_idle_g1

0xc216,	// (0x000205c0) popup_clock_digital_analogue_window_ParamLimits

0xc216,	// (0x000205c0) popup_clock_digital_analogue_window

0x9fd5,	// (0x0001e37f) soft_indicator_pane_ParamLimits

0x9fd5,	// (0x0001e37f) soft_indicator_pane

0x9ff1,	// (0x0001e39b) wallpaper_pane_ParamLimits

0x9ff1,	// (0x0001e39b) wallpaper_pane

0xc171,	// (0x0002051b) wallpaper_pane_g1

0xa003,	// (0x0001e3ad) indicator_pane_g1_ParamLimits

0xa003,	// (0x0001e3ad) indicator_pane_g1

0x343b,	// (0x000177e5) navi_navi_icon_text_pane_srt_g1

0xc244,	// (0x000205ee) soft_indicator_pane_t1

0xc25e,	// (0x00020608) aid_ps_area_pane

0xa01c,	// (0x0001e3c6) aid_ps_clock_pane

0xc26f,	// (0x00020619) aid_ps_indicator_pane

0xc27b,	// (0x00020625) indicator_ps_pane_ParamLimits

0xc27b,	// (0x00020625) indicator_ps_pane

0xc28a,	// (0x00020634) power_save_pane_g1_ParamLimits

0xc28a,	// (0x00020634) power_save_pane_g1

0xc296,	// (0x00020640) power_save_pane_g2_ParamLimits

0xc296,	// (0x00020640) power_save_pane_g2

0xdcc3,	// (0x0002206d) aid_navinavi_width_pane

0xc25e,	// (0x00020608) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023914) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023914) power_save_pane_g

0xc2a4,	// (0x0002064e) power_save_pane_t1_ParamLimits

0xc2a4,	// (0x0002064e) power_save_pane_t1

0xa01c,	// (0x0001e3c6) aid_ps_clock_pane_ParamLimits

0xc26f,	// (0x00020619) aid_ps_indicator_pane_ParamLimits

0xc2b6,	// (0x00020660) power_save_pane_t4_ParamLimits

0xc2b6,	// (0x00020660) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023919) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023919) power_save_pane_t

0xc2e0,	// (0x0002068a) power_save_t3_ParamLimits

0xc2e0,	// (0x0002068a) power_save_t3

0xc2cb,	// (0x00020675) power_save_t2_ParamLimits

0xc2cb,	// (0x00020675) power_save_t2

0xc2f5,	// (0x0002069f) indicator_ps_pane_g1

0xa02a,	// (0x0001e3d4) ai_gene_pane_ParamLimits

0xa02a,	// (0x0001e3d4) ai_gene_pane

0xa041,	// (0x0001e3eb) ai_links_pane_ParamLimits

0xa041,	// (0x0001e3eb) ai_links_pane

0xa059,	// (0x0001e403) indicator_pane_cp1_ParamLimits

0xa059,	// (0x0001e403) indicator_pane_cp1

0xa068,	// (0x0001e412) main_pane_idle_g1_cp_ParamLimits

0xa068,	// (0x0001e412) main_pane_idle_g1_cp

0xc2fe,	// (0x000206a8) popup_ai_links_title_window

0xa080,	// (0x0001e42a) soft_indicator_pane_cp1_ParamLimits

0xa080,	// (0x0001e42a) soft_indicator_pane_cp1

0x2d06,	// (0x000170b0) ai_links_pane_g1

0x2d0f,	// (0x000170b9) grid_ai_links_pane

0xb26f,	// (0x0001f619) ai_gene_pane_1

0x2cf4,	// (0x0001709e) ai_gene_pane_2

0x2cfd,	// (0x000170a7) list_highlight_pane_cp4

0xb24b,	// (0x0001f5f5) cell_ai_link_pane_ParamLimits

0xb24b,	// (0x0001f5f5) cell_ai_link_pane

0x2cc3,	// (0x0001706d) cell_ai_link_pane_g1

0xc4f2,	// (0x0002089c) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00023cb7) cell_ai_link_pane_g

0xc17b,	// (0x00020525) grid_highlight_cp2

0xc17b,	// (0x00020525) bg_popup_sub_pane_cp1

0xc315,	// (0x000206bf) popup_ai_links_title_window_t1

0x2c0f,	// (0x00016fb9) ai_gene_pane_1_g1_ParamLimits

0x2c0f,	// (0x00016fb9) ai_gene_pane_1_g1

0x2c1b,	// (0x00016fc5) ai_gene_pane_1_g2_ParamLimits

0x2c1b,	// (0x00016fc5) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x00023cad) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x00023cad) ai_gene_pane_1_g

0x2c28,	// (0x00016fd2) ai_gene_pane_1_t1_ParamLimits

0x2c28,	// (0x00016fd2) ai_gene_pane_1_t1

0x2c5c,	// (0x00017006) grid_ai_soft_ind_pane

0x2bfa,	// (0x00016fa4) ai_gene_pane_2_t1_ParamLimits

0x2bfa,	// (0x00016fa4) ai_gene_pane_2_t1

0xa094,	// (0x0001e43e) main_pane_empty_t1_ParamLimits

0xa094,	// (0x0001e43e) main_pane_empty_t1

0xa0ac,	// (0x0001e456) main_pane_empty_t2_ParamLimits

0xa0ac,	// (0x0001e456) main_pane_empty_t2

0xa0c1,	// (0x0001e46b) main_pane_empty_t3_ParamLimits

0xa0c1,	// (0x0001e46b) main_pane_empty_t3

0xa0d3,	// (0x0001e47d) main_pane_empty_t4_ParamLimits

0xa0d3,	// (0x0001e47d) main_pane_empty_t4

0xa0e5,	// (0x0001e48f) main_pane_empty_t5_ParamLimits

0xa0e5,	// (0x0001e48f) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002391e) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002391e) main_pane_empty_t

0xc9e4,	// (0x00020d8e) bg_popup_window_pane_ParamLimits

0xc9e4,	// (0x00020d8e) bg_popup_window_pane

0x295c,	// (0x00016d06) find_popup_pane_cp2_ParamLimits

0x295c,	// (0x00016d06) find_popup_pane_cp2

0x2968,	// (0x00016d12) heading_pane_ParamLimits

0x2968,	// (0x00016d12) heading_pane

0xc17b,	// (0x00020525) bg_popup_sub_pane

0xb17a,	// (0x0001f524) bg_popup_window_pane_g1_ParamLimits

0xb17a,	// (0x0001f524) bg_popup_window_pane_g1

0xb189,	// (0x0001f533) bg_popup_window_pane_g2_ParamLimits

0xb189,	// (0x0001f533) bg_popup_window_pane_g2

0xb195,	// (0x0001f53f) bg_popup_window_pane_g3_ParamLimits

0xb195,	// (0x0001f53f) bg_popup_window_pane_g3

0xb1a1,	// (0x0001f54b) bg_popup_window_pane_g4_ParamLimits

0xb1a1,	// (0x0001f54b) bg_popup_window_pane_g4

0xb1b0,	// (0x0001f55a) bg_popup_window_pane_g5_ParamLimits

0xb1b0,	// (0x0001f55a) bg_popup_window_pane_g5

0xb1c0,	// (0x0001f56a) bg_popup_window_pane_g6_ParamLimits

0xb1c0,	// (0x0001f56a) bg_popup_window_pane_g6

0xb1cc,	// (0x0001f576) bg_popup_window_pane_g7_ParamLimits

0xb1cc,	// (0x0001f576) bg_popup_window_pane_g7

0xb1db,	// (0x0001f585) bg_popup_window_pane_g8_ParamLimits

0xb1db,	// (0x0001f585) bg_popup_window_pane_g8

0xb1ea,	// (0x0001f594) bg_popup_window_pane_g9_ParamLimits

0xb1ea,	// (0x0001f594) bg_popup_window_pane_g9

0x2942,	// (0x00016cec) bg_popup_window_pane_g10_ParamLimits

0x2942,	// (0x00016cec) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00023c75) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00023c75) bg_popup_window_pane_g

0x286b,	// (0x00016c15) bg_popup_heading_pane_ParamLimits

0x286b,	// (0x00016c15) bg_popup_heading_pane

0xeb7b,	// (0x00022f25) tabs_4_passive_pane_cp_srt_ParamLimits

0xeb7b,	// (0x00022f25) tabs_4_passive_pane_cp_srt

0xeb8d,	// (0x00022f37) tabs_4_passive_pane_srt_ParamLimits

0x287f,	// (0x00016c29) heading_pane_g2

0xeb8d,	// (0x00022f37) tabs_4_passive_pane_srt

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp3_srt

0x2887,	// (0x00016c31) heading_pane_t1_ParamLimits

0x2887,	// (0x00016c31) heading_pane_t1

0x289e,	// (0x00016c48) heading_pane_t2_ParamLimits

0x289e,	// (0x00016c48) heading_pane_t2

0x0001,

0xf8c6,	// (0x00023c70) heading_pane_t_ParamLimits

0xf8c6,	// (0x00023c70) heading_pane_t

0x2396,	// (0x00016740) bg_popup_heading_pane_g1

0x2445,	// (0x000167ef) bg_popup_heading_pane_g2

0x244f,	// (0x000167f9) bg_popup_heading_pane_g3

0x2459,	// (0x00016803) bg_popup_heading_pane_g4

0x2463,	// (0x0001680d) bg_popup_heading_pane_g5

0x246d,	// (0x00016817) bg_popup_heading_pane_g6

0x2475,	// (0x0001681f) bg_popup_heading_pane_g7

0x247d,	// (0x00016827) bg_popup_heading_pane_g8

0x2487,	// (0x00016831) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x00023c2c) bg_popup_heading_pane_g

0x1ab7,	// (0x00015e61) bg_popup_sub_pane_g1

0x1ac7,	// (0x00015e71) bg_popup_sub_pane_g2

0x1abf,	// (0x00015e69) bg_popup_sub_pane_g3

0x1ad7,	// (0x00015e81) bg_popup_sub_pane_g4

0x1acf,	// (0x00015e79) bg_popup_sub_pane_g5

0x1adf,	// (0x00015e89) bg_popup_sub_pane_g6

0x1ae7,	// (0x00015e91) bg_popup_sub_pane_g7

0x1af7,	// (0x00015ea1) bg_popup_sub_pane_g8

0x1aef,	// (0x00015e99) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00023c06) bg_popup_sub_pane_g

0xc1c9,	// (0x00020573) bg_popup_window_pane_cp5_ParamLimits

0xc1c9,	// (0x00020573) bg_popup_window_pane_cp5

0xc332,	// (0x000206dc) popup_note_window_g1_ParamLimits

0xc332,	// (0x000206dc) popup_note_window_g1

0xc33e,	// (0x000206e8) popup_note_window_t1_ParamLimits

0xc33e,	// (0x000206e8) popup_note_window_t1

0xc354,	// (0x000206fe) popup_note_window_t2_ParamLimits

0xc354,	// (0x000206fe) popup_note_window_t2

0xc36a,	// (0x00020714) popup_note_window_t3_ParamLimits

0xc36a,	// (0x00020714) popup_note_window_t3

0xc380,	// (0x0002072a) popup_note_window_t4_ParamLimits

0xc380,	// (0x0002072a) popup_note_window_t4

0xc3a8,	// (0x00020752) popup_note_window_t5_ParamLimits

0xc3a8,	// (0x00020752) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023929) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023929) popup_note_window_t

0xc3f2,	// (0x0002079c) bg_popup_window_pane_cp6_ParamLimits

0xc3f2,	// (0x0002079c) bg_popup_window_pane_cp6

0x2312,	// (0x000166bc) popup_note_image_window_g1_ParamLimits

0x2312,	// (0x000166bc) popup_note_image_window_g1

0x231e,	// (0x000166c8) popup_note_image_window_g2_ParamLimits

0x231e,	// (0x000166c8) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00023bfa) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00023bfa) popup_note_image_window_g

0x2337,	// (0x000166e1) popup_note_image_window_t1_ParamLimits

0x2337,	// (0x000166e1) popup_note_image_window_t1

0x2350,	// (0x000166fa) popup_note_image_window_t2_ParamLimits

0x2350,	// (0x000166fa) popup_note_image_window_t2

0x2369,	// (0x00016713) popup_note_image_window_t3_ParamLimits

0x2369,	// (0x00016713) popup_note_image_window_t3

0x0002,

0xf855,	// (0x00023bff) popup_note_image_window_t_ParamLimits

0xf855,	// (0x00023bff) popup_note_image_window_t

0x21d2,	// (0x0001657c) bg_popup_window_pane_cp7_ParamLimits

0x21d2,	// (0x0001657c) bg_popup_window_pane_cp7

0x2202,	// (0x000165ac) popup_note_wait_window_g1_ParamLimits

0x2202,	// (0x000165ac) popup_note_wait_window_g1

0x220e,	// (0x000165b8) popup_note_wait_window_g2_ParamLimits

0x220e,	// (0x000165b8) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00023be8) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00023be8) popup_note_wait_window_g

0x2226,	// (0x000165d0) popup_note_wait_window_t1_ParamLimits

0x2226,	// (0x000165d0) popup_note_wait_window_t1

0x224d,	// (0x000165f7) popup_note_wait_window_t2_ParamLimits

0x224d,	// (0x000165f7) popup_note_wait_window_t2

0x226b,	// (0x00016615) popup_note_wait_window_t3_ParamLimits

0x226b,	// (0x00016615) popup_note_wait_window_t3

0x227e,	// (0x00016628) popup_note_wait_window_t4_ParamLimits

0x227e,	// (0x00016628) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x00023bef) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x00023bef) popup_note_wait_window_t

0x22a3,	// (0x0001664d) wait_bar_pane_ParamLimits

0x22a3,	// (0x0001664d) wait_bar_pane

0xc17b,	// (0x00020525) wait_anim_pane

0xc17b,	// (0x00020525) wait_border_pane

0xc171,	// (0x0002051b) wait_anim_pane_g1

0xc171,	// (0x0002051b) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00023aa8) wait_anim_pane_g

0x2176,	// (0x00016520) wait_border_pane_g1

0x2181,	// (0x0001652b) wait_border_pane_g2

0x218a,	// (0x00016534) wait_border_pane_g3

0x0002,

0xf837,	// (0x00023be1) wait_border_pane_g

0x1fe0,	// (0x0001638a) bg_popup_window_pane_cp16_ParamLimits

0x1fe0,	// (0x0001638a) bg_popup_window_pane_cp16

0x20e0,	// (0x0001648a) indicator_popup_pane_cp4_ParamLimits

0x20e0,	// (0x0001648a) indicator_popup_pane_cp4

0x20f4,	// (0x0001649e) popup_query_data_window_t1_ParamLimits

0x20f4,	// (0x0001649e) popup_query_data_window_t1

0x2106,	// (0x000164b0) popup_query_data_window_t2_ParamLimits

0x2106,	// (0x000164b0) popup_query_data_window_t2

0x211f,	// (0x000164c9) popup_query_data_window_t3_ParamLimits

0x211f,	// (0x000164c9) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00023bda) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00023bda) popup_query_data_window_t

0x2139,	// (0x000164e3) query_popup_data_pane_ParamLimits

0x2139,	// (0x000164e3) query_popup_data_pane

0x214d,	// (0x000164f7) query_popup_data_pane_cp1_ParamLimits

0x214d,	// (0x000164f7) query_popup_data_pane_cp1

0x1fe0,	// (0x0001638a) bg_popup_window_pane_cp10_ParamLimits

0x1fe0,	// (0x0001638a) bg_popup_window_pane_cp10

0x2012,	// (0x000163bc) indicator_popup_pane_ParamLimits

0x2012,	// (0x000163bc) indicator_popup_pane

0x2034,	// (0x000163de) popup_query_code_window_t1_ParamLimits

0x2034,	// (0x000163de) popup_query_code_window_t1

0x204e,	// (0x000163f8) popup_query_code_window_t2_ParamLimits

0x204e,	// (0x000163f8) popup_query_code_window_t2

0x2097,	// (0x00016441) popup_query_code_window_t3_ParamLimits

0x2097,	// (0x00016441) popup_query_code_window_t3

0x0002,

0xf829,	// (0x00023bd3) popup_query_code_window_t_ParamLimits

0xf829,	// (0x00023bd3) popup_query_code_window_t

0x20c6,	// (0x00016470) query_popup_pane_ParamLimits

0x20c6,	// (0x00016470) query_popup_pane

0xc3f2,	// (0x0002079c) bg_popup_window_pane_cp15_ParamLimits

0xc3f2,	// (0x0002079c) bg_popup_window_pane_cp15

0xc412,	// (0x000207bc) indicator_popup_pane_cp1_ParamLimits

0xc412,	// (0x000207bc) indicator_popup_pane_cp1

0xc425,	// (0x000207cf) indicator_popup_pane_cp2_ParamLimits

0xc425,	// (0x000207cf) indicator_popup_pane_cp2

0xc440,	// (0x000207ea) popup_query_data_code_window_g1_ParamLimits

0xc440,	// (0x000207ea) popup_query_data_code_window_g1

0xc453,	// (0x000207fd) popup_query_data_code_window_t1_ParamLimits

0xc453,	// (0x000207fd) popup_query_data_code_window_t1

0xc465,	// (0x0002080f) popup_query_data_code_window_t2_ParamLimits

0xc465,	// (0x0002080f) popup_query_data_code_window_t2

0xc477,	// (0x00020821) popup_query_data_code_window_t3_ParamLimits

0xc477,	// (0x00020821) popup_query_data_code_window_t3

0xc48d,	// (0x00020837) popup_query_data_code_window_t4_ParamLimits

0xc48d,	// (0x00020837) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023934) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023934) popup_query_data_code_window_t

0xe9dd,	// (0x00022d87) list_single_midp_graphic_pane_g3

0xc4a7,	// (0x00020851) query_popup_data_pane_cp2_ParamLimits

0xc4ba,	// (0x00020864) query_popup_pane_cp2_ParamLimits

0xc4ba,	// (0x00020864) query_popup_pane_cp2

0xc17b,	// (0x00020525) bg_popup_window_pane_cp11

0x1fcc,	// (0x00016376) heading_pane_cp5

0xc553,	// (0x000208fd) listscroll_popup_info_pane

0xc17b,	// (0x00020525) input_focus_pane_cp3

0xc4d5,	// (0x0002087f) query_popup_pane_t1

0xc4e3,	// (0x0002088d) list_popup_info_pane_ParamLimits

0xc4e3,	// (0x0002088d) list_popup_info_pane

0xc4f2,	// (0x0002089c) listscroll_popup_info_pane_g1

0xc4fa,	// (0x000208a4) scroll_pane_cp7

0xc504,	// (0x000208ae) popup_info_list_pane_t1_ParamLimits

0xc504,	// (0x000208ae) popup_info_list_pane_t1

0xc51e,	// (0x000208c8) popup_info_list_pane_t2_ParamLimits

0xc51e,	// (0x000208c8) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002393d) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002393d) popup_info_list_pane_t

0xc17b,	// (0x00020525) bg_popup_window_pane_cp12

0x3455,	// (0x000177ff) find_popup_pane

0xc1d7,	// (0x00020581) bg_popup_window_pane_cp3

0xc538,	// (0x000208e2) heading_pane_cp3

0xc544,	// (0x000208ee) listscroll_popup_graphic_pane

0xc17b,	// (0x00020525) bg_popup_window_pane_cp4

0xa147,	// (0x0001e4f1) heading_pane_cp4

0xc553,	// (0x000208fd) listscroll_popup_colour_pane

0xa151,	// (0x0001e4fb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa151,	// (0x0001e4fb) cell_large_graphic_colour_none_popup_pane

0xa165,	// (0x0001e50f) grid_large_graphic_colour_popup_pane_ParamLimits

0xa165,	// (0x0001e50f) grid_large_graphic_colour_popup_pane

0xa189,	// (0x0001e533) listscroll_popup_colour_pane_g1_ParamLimits

0xa189,	// (0x0001e533) listscroll_popup_colour_pane_g1

0xa1a0,	// (0x0001e54a) listscroll_popup_colour_pane_g2_ParamLimits

0xa1a0,	// (0x0001e54a) listscroll_popup_colour_pane_g2

0xa1b7,	// (0x0001e561) listscroll_popup_colour_pane_g3_ParamLimits

0xa1b7,	// (0x0001e561) listscroll_popup_colour_pane_g3

0xa1c7,	// (0x0001e571) listscroll_popup_colour_pane_g4_ParamLimits

0xa1c7,	// (0x0001e571) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023942) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023942) listscroll_popup_colour_pane_g

0xc55b,	// (0x00020905) scroll_pane_cp6_ParamLimits

0xc55b,	// (0x00020905) scroll_pane_cp6

0xa1d7,	// (0x0001e581) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1d7,	// (0x0001e581) cell_large_graphic_colour_popup_pane

0xc56d,	// (0x00020917) cell_large_graphic_colour_none_popup_pane_t1

0xc17b,	// (0x00020525) grid_highlight_pane_cp5

0xc57c,	// (0x00020926) cell_large_graphic_colour_popup_pane_g1

0xc584,	// (0x0002092e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002394b) cell_large_graphic_colour_popup_pane_g

0xc58c,	// (0x00020936) cell_large_graphic_colour_popup_pane_g2_copy1

0xc595,	// (0x0002093f) grid_highlight_pane_cp4

0xc59d,	// (0x00020947) bg_popup_window_pane_cp8_ParamLimits

0xc59d,	// (0x00020947) bg_popup_window_pane_cp8

0xc5b8,	// (0x00020962) popup_snote_single_text_window_g1_ParamLimits

0xc5b8,	// (0x00020962) popup_snote_single_text_window_g1

0xc5ca,	// (0x00020974) popup_snote_single_text_window_t1_ParamLimits

0xc5ca,	// (0x00020974) popup_snote_single_text_window_t1

0xc5dd,	// (0x00020987) popup_snote_single_text_window_t2_ParamLimits

0xc5dd,	// (0x00020987) popup_snote_single_text_window_t2

0xc5f0,	// (0x0002099a) popup_snote_single_text_window_t3_ParamLimits

0xc5f0,	// (0x0002099a) popup_snote_single_text_window_t3

0xc629,	// (0x000209d3) popup_snote_single_text_window_t4_ParamLimits

0xc629,	// (0x000209d3) popup_snote_single_text_window_t4

0xc65d,	// (0x00020a07) popup_snote_single_text_window_t5_ParamLimits

0xc65d,	// (0x00020a07) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023950) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023950) popup_snote_single_text_window_t

0xc68c,	// (0x00020a36) bg_popup_window_pane_cp9_ParamLimits

0xc68c,	// (0x00020a36) bg_popup_window_pane_cp9

0xc5b8,	// (0x00020962) popup_snote_single_graphic_window_g1_ParamLimits

0xc5b8,	// (0x00020962) popup_snote_single_graphic_window_g1

0xc69a,	// (0x00020a44) popup_snote_single_graphic_window_g2_ParamLimits

0xc69a,	// (0x00020a44) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002395b) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002395b) popup_snote_single_graphic_window_g

0xc6a6,	// (0x00020a50) popup_snote_single_graphic_window_t1_ParamLimits

0xc6a6,	// (0x00020a50) popup_snote_single_graphic_window_t1

0xc6b9,	// (0x00020a63) popup_snote_single_graphic_window_t2_ParamLimits

0xc6b9,	// (0x00020a63) popup_snote_single_graphic_window_t2

0xc6cc,	// (0x00020a76) popup_snote_single_graphic_window_t3_ParamLimits

0xc6cc,	// (0x00020a76) popup_snote_single_graphic_window_t3

0xc705,	// (0x00020aaf) popup_snote_single_graphic_window_t4_ParamLimits

0xc705,	// (0x00020aaf) popup_snote_single_graphic_window_t4

0xc739,	// (0x00020ae3) popup_snote_single_graphic_window_t5_ParamLimits

0xc739,	// (0x00020ae3) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023960) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023960) popup_snote_single_graphic_window_t

0x3393,	// (0x0001773d) grid_graphic_popup_pane_ParamLimits

0x3393,	// (0x0001773d) grid_graphic_popup_pane

0x33c1,	// (0x0001776b) listscroll_popup_graphic_pane_g1_ParamLimits

0x33c1,	// (0x0001776b) listscroll_popup_graphic_pane_g1

0xb4fd,	// (0x0001f8a7) listscroll_popup_graphic_pane_g2_ParamLimits

0xb4fd,	// (0x0001f8a7) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x00023d50) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x00023d50) listscroll_popup_graphic_pane_g

0x33e9,	// (0x00017793) scroll_pane_cp5

0xb49c,	// (0x0001f846) cell_graphic_popup_pane_ParamLimits

0xb49c,	// (0x0001f846) cell_graphic_popup_pane

0x3309,	// (0x000176b3) cell_graphic_popup_pane_g1

0x3311,	// (0x000176bb) cell_graphic_popup_pane_g2

0xc58c,	// (0x00020936) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x00023d49) cell_graphic_popup_pane_g

0x331a,	// (0x000176c4) cell_graphic_popup_pane_t2

0xc595,	// (0x0002093f) grid_highlight_pane_cp3

0xc77a,	// (0x00020b24) list_gen_pane_ParamLimits

0xc77a,	// (0x00020b24) list_gen_pane

0xc7a2,	// (0x00020b4c) scroll_pane

0xb453,	// (0x0001f7fd) bg_list_pane_g1_ParamLimits

0xb453,	// (0x0001f7fd) bg_list_pane_g1

0x327e,	// (0x00017628) bg_list_pane_g2_ParamLimits

0x327e,	// (0x00017628) bg_list_pane_g2

0x3293,	// (0x0001763d) bg_list_pane_g3_ParamLimits

0x3293,	// (0x0001763d) bg_list_pane_g3

0x32a7,	// (0x00017651) bg_list_pane_g4_ParamLimits

0x32a7,	// (0x00017651) bg_list_pane_g4

0xb470,	// (0x0001f81a) bg_list_pane_g5_ParamLimits

0xb470,	// (0x0001f81a) bg_list_pane_g5

0x0004,

0xf994,	// (0x00023d3e) bg_list_pane_g_ParamLimits

0xf994,	// (0x00023d3e) bg_list_pane_g

0xb3ed,	// (0x0001f797) list_double2_graphic_large_graphic_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double2_graphic_large_graphic_pane

0xb3ed,	// (0x0001f797) list_double2_graphic_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double2_graphic_pane

0xb3ed,	// (0x0001f797) list_double2_large_graphic_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double2_large_graphic_pane

0xb3ed,	// (0x0001f797) list_double2_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double2_pane

0xb3ed,	// (0x0001f797) list_double_graphic_heading_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_graphic_heading_pane

0xb3ed,	// (0x0001f797) list_double_graphic_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_graphic_pane

0xb3ed,	// (0x0001f797) list_double_heading_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_heading_pane

0xb3ed,	// (0x0001f797) list_double_large_graphic_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_large_graphic_pane

0xb3ed,	// (0x0001f797) list_double_number_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_number_pane

0xb3ed,	// (0x0001f797) list_double_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_pane

0xb3ed,	// (0x0001f797) list_double_time_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_double_time_pane

0xb3ed,	// (0x0001f797) list_setting_number_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_setting_number_pane

0xb3ed,	// (0x0001f797) list_setting_pane_ParamLimits

0xb3ed,	// (0x0001f797) list_setting_pane

0xb401,	// (0x0001f7ab) list_single_2graphic_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_2graphic_pane

0xb401,	// (0x0001f7ab) list_single_graphic_heading_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_graphic_heading_pane

0xb401,	// (0x0001f7ab) list_single_graphic_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_graphic_pane

0xb401,	// (0x0001f7ab) list_single_heading_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_heading_pane

0xb401,	// (0x0001f7ab) list_single_large_graphic_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_large_graphic_pane

0xb401,	// (0x0001f7ab) list_single_number_heading_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_number_heading_pane

0xb401,	// (0x0001f7ab) list_single_number_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_number_pane

0xb401,	// (0x0001f7ab) list_single_pane_ParamLimits

0xb401,	// (0x0001f7ab) list_single_pane

0xc17b,	// (0x00020525) list_highlight_pane_cp1

0x1193,	// (0x0001553d) list_single_pane_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_pane_g1

0x1a39,	// (0x00015de3) list_single_pane_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_pane_g

0x3a72,	// (0x00017e1c) list_single_pane_t1_ParamLimits

0x3a72,	// (0x00017e1c) list_single_pane_t1

0x1193,	// (0x0001553d) list_single_number_pane_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_number_pane_g1

0x1a39,	// (0x00015de3) list_single_number_pane_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_number_pane_g

0x1a45,	// (0x00015def) list_single_number_pane_t1_ParamLimits

0x1a45,	// (0x00015def) list_single_number_pane_t1

0x3b6b,	// (0x00017f15) list_single_number_pane_t2_ParamLimits

0x3b6b,	// (0x00017f15) list_single_number_pane_t2

0x0001,

0xf955,	// (0x00023cff) list_single_number_pane_t_ParamLimits

0xf955,	// (0x00023cff) list_single_number_pane_t

0x4f83,	// (0x0001932d) list_single_graphic_pane_g1_ParamLimits

0x4f83,	// (0x0001932d) list_single_graphic_pane_g1

0x1193,	// (0x0001553d) list_single_graphic_pane_g2_ParamLimits

0x1193,	// (0x0001553d) list_single_graphic_pane_g2

0x1a39,	// (0x00015de3) list_single_graphic_pane_g3_ParamLimits

0x1a39,	// (0x00015de3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002396b) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002396b) list_single_graphic_pane_g

0xa202,	// (0x0001e5ac) list_single_graphic_pane_t1_ParamLimits

0xa202,	// (0x0001e5ac) list_single_graphic_pane_t1

0x1193,	// (0x0001553d) list_single_heading_pane_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_heading_pane_g1

0x1a39,	// (0x00015de3) list_single_heading_pane_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_heading_pane_g

0xa218,	// (0x0001e5c2) list_single_heading_pane_t1_ParamLimits

0xa218,	// (0x0001e5c2) list_single_heading_pane_t1

0xa22e,	// (0x0001e5d8) list_single_heading_pane_t2_ParamLimits

0xa22e,	// (0x0001e5d8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023977) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023977) list_single_heading_pane_t

0x1193,	// (0x0001553d) list_single_number_heading_pane_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_number_heading_pane_g1

0x1a39,	// (0x00015de3) list_single_number_heading_pane_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_number_heading_pane_g

0xa218,	// (0x0001e5c2) list_single_number_heading_pane_t1_ParamLimits

0xa218,	// (0x0001e5c2) list_single_number_heading_pane_t1

0x3a3c,	// (0x00017de6) list_single_number_heading_pane_t2_ParamLimits

0x3a3c,	// (0x00017de6) list_single_number_heading_pane_t2

0x3a4e,	// (0x00017df8) list_single_number_heading_pane_t3_ParamLimits

0x3a4e,	// (0x00017df8) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002397c) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002397c) list_single_number_heading_pane_t

0x1a2d,	// (0x00015dd7) list_single_graphic_heading_pane_g1_ParamLimits

0x1a2d,	// (0x00015dd7) list_single_graphic_heading_pane_g1

0xa240,	// (0x0001e5ea) list_single_graphic_heading_pane_g4_ParamLimits

0xa240,	// (0x0001e5ea) list_single_graphic_heading_pane_g4

0x1a39,	// (0x00015de3) list_single_graphic_heading_pane_g5_ParamLimits

0x1a39,	// (0x00015de3) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023983) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023983) list_single_graphic_heading_pane_g

0xa218,	// (0x0001e5c2) list_single_graphic_heading_pane_t1_ParamLimits

0xa218,	// (0x0001e5c2) list_single_graphic_heading_pane_t1

0xa251,	// (0x0001e5fb) list_single_graphic_heading_pane_t2_ParamLimits

0xa251,	// (0x0001e5fb) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002398a) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002398a) list_single_graphic_heading_pane_t

0x3a88,	// (0x00017e32) list_single_large_graphic_pane_g1_ParamLimits

0x3a88,	// (0x00017e32) list_single_large_graphic_pane_g1

0x1193,	// (0x0001553d) list_single_large_graphic_pane_g2_ParamLimits

0x1193,	// (0x0001553d) list_single_large_graphic_pane_g2

0x1a39,	// (0x00015de3) list_single_large_graphic_pane_g3_ParamLimits

0x1a39,	// (0x00015de3) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002398f) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002398f) list_single_large_graphic_pane_g

0x2181,	// (0x0001652b) wait_border_pane_g2_copy1

0xa263,	// (0x0001e60d) list_single_large_graphic_pane_g4_cp2

0x3a94,	// (0x00017e3e) list_single_large_graphic_pane_t1_ParamLimits

0x3a94,	// (0x00017e3e) list_single_large_graphic_pane_t1

0xa26b,	// (0x0001e615) list_double_pane_g1_ParamLimits

0xa26b,	// (0x0001e615) list_double_pane_g1

0xa277,	// (0x0001e621) list_double_pane_g2_ParamLimits

0xa277,	// (0x0001e621) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023996) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023996) list_double_pane_g

0xa283,	// (0x0001e62d) list_double_pane_t1_ParamLimits

0xa283,	// (0x0001e62d) list_double_pane_t1

0xa299,	// (0x0001e643) list_double_pane_t2_ParamLimits

0xa299,	// (0x0001e643) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002399b) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002399b) list_double_pane_t

0xa2ab,	// (0x0001e655) list_double2_pane_g1_ParamLimits

0xa2ab,	// (0x0001e655) list_double2_pane_g1

0xa2bc,	// (0x0001e666) list_double2_pane_g2_ParamLimits

0xa2bc,	// (0x0001e666) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000239a0) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000239a0) list_double2_pane_g

0xa2c8,	// (0x0001e672) list_double2_pane_t1_ParamLimits

0xa2c8,	// (0x0001e672) list_double2_pane_t1

0xa2de,	// (0x0001e688) list_double2_pane_t2_ParamLimits

0xa2de,	// (0x0001e688) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000239a5) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000239a5) list_double2_pane_t

0xa26b,	// (0x0001e615) list_double_number_pane_g1_ParamLimits

0xa26b,	// (0x0001e615) list_double_number_pane_g1

0xa277,	// (0x0001e621) list_double_number_pane_g2_ParamLimits

0xa277,	// (0x0001e621) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023996) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023996) list_double_number_pane_g

0xa2f0,	// (0x0001e69a) list_double_number_pane_t1_ParamLimits

0xa2f0,	// (0x0001e69a) list_double_number_pane_t1

0xa302,	// (0x0001e6ac) list_double_number_pane_t2_ParamLimits

0xa302,	// (0x0001e6ac) list_double_number_pane_t2

0xa318,	// (0x0001e6c2) list_double_number_pane_t3_ParamLimits

0xa318,	// (0x0001e6c2) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000239aa) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000239aa) list_double_number_pane_t

0xa32a,	// (0x0001e6d4) list_double_graphic_pane_g1_ParamLimits

0xa32a,	// (0x0001e6d4) list_double_graphic_pane_g1

0xa336,	// (0x0001e6e0) list_double_graphic_pane_g2_ParamLimits

0xa336,	// (0x0001e6e0) list_double_graphic_pane_g2

0xa345,	// (0x0001e6ef) list_double_graphic_pane_g3_ParamLimits

0xa345,	// (0x0001e6ef) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000239b1) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000239b1) list_double_graphic_pane_g

0xa35d,	// (0x0001e707) list_double_graphic_pane_t1_ParamLimits

0xa35d,	// (0x0001e707) list_double_graphic_pane_t1

0xa373,	// (0x0001e71d) list_double_graphic_pane_t2_ParamLimits

0xa373,	// (0x0001e71d) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000239ba) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000239ba) list_double_graphic_pane_t

0xa385,	// (0x0001e72f) list_double2_graphic_pane_g1_ParamLimits

0xa385,	// (0x0001e72f) list_double2_graphic_pane_g1

0xa391,	// (0x0001e73b) list_double2_graphic_pane_g2_ParamLimits

0xa391,	// (0x0001e73b) list_double2_graphic_pane_g2

0xa2bc,	// (0x0001e666) list_double2_graphic_pane_g3_ParamLimits

0xa2bc,	// (0x0001e666) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000239bf) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000239bf) list_double2_graphic_pane_g

0xa39d,	// (0x0001e747) list_double2_graphic_pane_t1_ParamLimits

0xa39d,	// (0x0001e747) list_double2_graphic_pane_t1

0xa3b3,	// (0x0001e75d) list_double2_graphic_pane_t2_ParamLimits

0xa3b3,	// (0x0001e75d) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000239c6) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000239c6) list_double2_graphic_pane_t

0xa3c5,	// (0x0001e76f) list_double_large_graphic_pane_g1_ParamLimits

0xa3c5,	// (0x0001e76f) list_double_large_graphic_pane_g1

0xa3e4,	// (0x0001e78e) list_double_large_graphic_pane_g2_ParamLimits

0xa3e4,	// (0x0001e78e) list_double_large_graphic_pane_g2

0xa277,	// (0x0001e621) list_double_large_graphic_pane_g3_ParamLimits

0xa277,	// (0x0001e621) list_double_large_graphic_pane_g3

0xa3f5,	// (0x0001e79f) list_double_large_graphic_pane_g4_ParamLimits

0xa3f5,	// (0x0001e79f) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000239cb) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000239cb) list_double_large_graphic_pane_g

0xa407,	// (0x0001e7b1) list_double_large_graphic_pane_t1_ParamLimits

0xa407,	// (0x0001e7b1) list_double_large_graphic_pane_t1

0xa420,	// (0x0001e7ca) list_double_large_graphic_pane_t2_ParamLimits

0xa420,	// (0x0001e7ca) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000239d6) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000239d6) list_double_large_graphic_pane_t

0xa432,	// (0x0001e7dc) list_double2_large_graphic_pane_g1_ParamLimits

0xa432,	// (0x0001e7dc) list_double2_large_graphic_pane_g1

0xa2ab,	// (0x0001e655) list_double2_large_graphic_pane_g2_ParamLimits

0xa2ab,	// (0x0001e655) list_double2_large_graphic_pane_g2

0xa2bc,	// (0x0001e666) list_double2_large_graphic_pane_g3_ParamLimits

0xa2bc,	// (0x0001e666) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000239db) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000239db) list_double2_large_graphic_pane_g

0xa43e,	// (0x0001e7e8) list_double2_large_graphic_pane_t1_ParamLimits

0xa43e,	// (0x0001e7e8) list_double2_large_graphic_pane_t1

0xa454,	// (0x0001e7fe) list_double2_large_graphic_pane_t2_ParamLimits

0xa454,	// (0x0001e7fe) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000239e2) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000239e2) list_double2_large_graphic_pane_t

0xa466,	// (0x0001e810) list_double_heading_pane_g1_ParamLimits

0xa466,	// (0x0001e810) list_double_heading_pane_g1

0xa477,	// (0x0001e821) list_double_heading_pane_g2_ParamLimits

0xa477,	// (0x0001e821) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000239e7) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000239e7) list_double_heading_pane_g

0xa483,	// (0x0001e82d) list_double_heading_pane_t1_ParamLimits

0xa483,	// (0x0001e82d) list_double_heading_pane_t1

0xa499,	// (0x0001e843) list_double_heading_pane_t2_ParamLimits

0xa499,	// (0x0001e843) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000239ec) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000239ec) list_double_heading_pane_t

0xa4ab,	// (0x0001e855) list_double_graphic_heading_pane_g1_ParamLimits

0xa4ab,	// (0x0001e855) list_double_graphic_heading_pane_g1

0xa466,	// (0x0001e810) list_double_graphic_heading_pane_g2_ParamLimits

0xa466,	// (0x0001e810) list_double_graphic_heading_pane_g2

0xa477,	// (0x0001e821) list_double_graphic_heading_pane_g3_ParamLimits

0xa477,	// (0x0001e821) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000239f1) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000239f1) list_double_graphic_heading_pane_g

0xa4b7,	// (0x0001e861) list_double_graphic_heading_pane_t1_ParamLimits

0xa4b7,	// (0x0001e861) list_double_graphic_heading_pane_t1

0xa4cd,	// (0x0001e877) list_double_graphic_heading_pane_t2_ParamLimits

0xa4cd,	// (0x0001e877) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000239f8) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000239f8) list_double_graphic_heading_pane_t

0xa3e4,	// (0x0001e78e) list_double_time_pane_g1_ParamLimits

0xa3e4,	// (0x0001e78e) list_double_time_pane_g1

0xa277,	// (0x0001e621) list_double_time_pane_g2_ParamLimits

0xa277,	// (0x0001e621) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000239fd) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000239fd) list_double_time_pane_g

0xa4df,	// (0x0001e889) list_double_time_pane_t1_ParamLimits

0xa4df,	// (0x0001e889) list_double_time_pane_t1

0xa4f5,	// (0x0001e89f) list_double_time_pane_t2_ParamLimits

0xa4f5,	// (0x0001e89f) list_double_time_pane_t2

0xa507,	// (0x0001e8b1) list_double_time_pane_t3_ParamLimits

0xa507,	// (0x0001e8b1) list_double_time_pane_t3

0xa519,	// (0x0001e8c3) list_double_time_pane_t4_ParamLimits

0xa519,	// (0x0001e8c3) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00023a02) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00023a02) list_double_time_pane_t

0xa391,	// (0x0001e73b) list_setting_pane_g1_ParamLimits

0xa391,	// (0x0001e73b) list_setting_pane_g1

0xa2bc,	// (0x0001e666) list_setting_pane_g2_ParamLimits

0xa2bc,	// (0x0001e666) list_setting_pane_g2

0x0001,

0xf661,	// (0x00023a0b) list_setting_pane_g_ParamLimits

0xf661,	// (0x00023a0b) list_setting_pane_g

0xa52b,	// (0x0001e8d5) list_setting_pane_t1_ParamLimits

0xa52b,	// (0x0001e8d5) list_setting_pane_t1

0xa542,	// (0x0001e8ec) list_setting_pane_t2_ParamLimits

0xa542,	// (0x0001e8ec) list_setting_pane_t2

0x0002,

0xf666,	// (0x00023a10) list_setting_pane_t_ParamLimits

0xf666,	// (0x00023a10) list_setting_pane_t

0xa581,	// (0x0001e92b) set_value_pane_cp_ParamLimits

0xa581,	// (0x0001e92b) set_value_pane_cp

0xa391,	// (0x0001e73b) list_setting_number_pane_g1_ParamLimits

0xa391,	// (0x0001e73b) list_setting_number_pane_g1

0xa2bc,	// (0x0001e666) list_setting_number_pane_g2_ParamLimits

0xa2bc,	// (0x0001e666) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00023a0b) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00023a0b) list_setting_number_pane_g

0xa58f,	// (0x0001e939) list_setting_number_pane_t1_ParamLimits

0xa58f,	// (0x0001e939) list_setting_number_pane_t1

0xa5a3,	// (0x0001e94d) list_setting_number_pane_t2_ParamLimits

0xa5a3,	// (0x0001e94d) list_setting_number_pane_t2

0xa5ba,	// (0x0001e964) list_setting_number_pane_t3_ParamLimits

0xa5ba,	// (0x0001e964) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00023a17) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00023a17) list_setting_number_pane_t

0xa581,	// (0x0001e92b) set_value_pane_ParamLimits

0xa581,	// (0x0001e92b) set_value_pane

0xc7eb,	// (0x00020b95) bg_set_opt_pane_ParamLimits

0xc7eb,	// (0x00020b95) bg_set_opt_pane

0xc80c,	// (0x00020bb6) set_value_pane_t1

0xc81a,	// (0x00020bc4) slider_set_pane_cp3

0xc823,	// (0x00020bcd) volume_small_pane_cp

0xc82c,	// (0x00020bd6) list_form_gen_pane

0xc835,	// (0x00020bdf) scroll_pane_cp8

0xa5fd,	// (0x0001e9a7) form_field_data_pane_ParamLimits

0xa5fd,	// (0x0001e9a7) form_field_data_pane

0xa618,	// (0x0001e9c2) form_field_data_wide_pane_ParamLimits

0xa618,	// (0x0001e9c2) form_field_data_wide_pane

0xa63c,	// (0x0001e9e6) form_field_popup_pane_ParamLimits

0xa63c,	// (0x0001e9e6) form_field_popup_pane

0xc856,	// (0x00020c00) form_field_popup_wide_pane_ParamLimits

0xc856,	// (0x00020c00) form_field_popup_wide_pane

0xc877,	// (0x00020c21) form_field_slider_pane_ParamLimits

0xc877,	// (0x00020c21) form_field_slider_pane

0xc88a,	// (0x00020c34) form_field_slider_wide_pane_ParamLimits

0xc88a,	// (0x00020c34) form_field_slider_wide_pane

0xc89d,	// (0x00020c47) data_form_pane

0xa668,	// (0x0001ea12) form_field_data_pane_t1

0xc8a9,	// (0x00020c53) input_focus_pane

0xc8b7,	// (0x00020c61) data_form_wide_pane

0xc8ef,	// (0x00020c99) form_field_data_wide_pane_t1

0xc5aa,	// (0x00020954) input_focus_pane_cp6

0xa682,	// (0x0001ea2c) form_field_popup_pane_t1

0xc8a9,	// (0x00020c53) input_focus_pane_cp7

0xc90e,	// (0x00020cb8) list_form_pane

0xc922,	// (0x00020ccc) form_field_popup_wide_pane_t1

0xc8a9,	// (0x00020c53) input_focus_pane_cp8

0xc934,	// (0x00020cde) list_form_wide_pane

0xa6a4,	// (0x0001ea4e) form_field_slider_pane_t1_ParamLimits

0xa6a4,	// (0x0001ea4e) form_field_slider_pane_t1

0xa6bc,	// (0x0001ea66) form_field_slider_pane_t2_ParamLimits

0xa6bc,	// (0x0001ea66) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00023a27) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00023a27) form_field_slider_pane_t

0xc1c9,	// (0x00020573) input_focus_pane_cp9_ParamLimits

0xc1c9,	// (0x00020573) input_focus_pane_cp9

0xa6d1,	// (0x0001ea7b) slider_cont_pane_ParamLimits

0xa6d1,	// (0x0001ea7b) slider_cont_pane

0xc940,	// (0x00020cea) form_field_slider_wide_pane_t1_ParamLimits

0xc940,	// (0x00020cea) form_field_slider_wide_pane_t1

0xc952,	// (0x00020cfc) form_field_slider_wide_pane_t2_ParamLimits

0xc952,	// (0x00020cfc) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00023a2c) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00023a2c) form_field_slider_wide_pane_t

0xc1c9,	// (0x00020573) input_focus_pane_cp10_ParamLimits

0xc1c9,	// (0x00020573) input_focus_pane_cp10

0xa6e5,	// (0x0001ea8f) slider_cont_pane_cp1_ParamLimits

0xa6e5,	// (0x0001ea8f) slider_cont_pane_cp1

0xa6f9,	// (0x0001eaa3) slider_form_pane_cp

0xc964,	// (0x00020d0e) input_focus_pane_g1

0xc96c,	// (0x00020d16) input_focus_pane_g2

0xc974,	// (0x00020d1e) input_focus_pane_g3

0xc97c,	// (0x00020d26) input_focus_pane_g4

0xc984,	// (0x00020d2e) input_focus_pane_g5

0xc98c,	// (0x00020d36) input_focus_pane_g6

0xc994,	// (0x00020d3e) input_focus_pane_g7

0xc99c,	// (0x00020d46) input_focus_pane_g8

0xc9a4,	// (0x00020d4e) input_focus_pane_g9

0xc171,	// (0x0002051b) input_focus_pane_g10

0x0009,

0xf687,	// (0x00023a31) input_focus_pane_g

0x218a,	// (0x00016534) wait_border_pane_g3_copy1

0xa701,	// (0x0001eaab) data_form_pane_t1

0xc171,	// (0x0002051b) wait_anim_pane_g1_copy1

0xb3c2,	// (0x0001f76c) data_form_wide_pane_t1

0xc9ac,	// (0x00020d56) list_form_graphic_pane_cp_ParamLimits

0xc9ac,	// (0x00020d56) list_form_graphic_pane_cp

0x30fe,	// (0x000174a8) slider_form_pane_g1

0x3107,	// (0x000174b1) slider_form_pane_g2

0x0006,

0xf985,	// (0x00023d2f) slider_form_pane_g

0xa71d,	// (0x0001eac7) list_form_graphic_pane_ParamLimits

0xa71d,	// (0x0001eac7) list_form_graphic_pane

0xc9be,	// (0x00020d68) list_form_graphic_pane_g1

0xc9c6,	// (0x00020d70) list_form_graphic_pane_t1_ParamLimits

0xc9c6,	// (0x00020d70) list_form_graphic_pane_t1

0xc1d7,	// (0x00020581) list_highlight_pane_cp5_ParamLimits

0xc1d7,	// (0x00020581) list_highlight_pane_cp5

0xa72e,	// (0x0001ead8) find_pane_g1

0xc9db,	// (0x00020d85) input_find_pane

0xa737,	// (0x0001eae1) input_find_pane_g1_ParamLimits

0xa737,	// (0x0001eae1) input_find_pane_g1

0xa743,	// (0x0001eaed) input_find_pane_t1_ParamLimits

0xa743,	// (0x0001eaed) input_find_pane_t1

0xa758,	// (0x0001eb02) input_find_pane_t2_ParamLimits

0xa758,	// (0x0001eb02) input_find_pane_t2

0x0001,

0xf69c,	// (0x00023a46) input_find_pane_t_ParamLimits

0xf69c,	// (0x00023a46) input_find_pane_t

0xc9e4,	// (0x00020d8e) input_focus_pane_cp5_ParamLimits

0xc9e4,	// (0x00020d8e) input_focus_pane_cp5

0xc9f2,	// (0x00020d9c) bg_popup_window_pane_cp2_ParamLimits

0xc9f2,	// (0x00020d9c) bg_popup_window_pane_cp2

0xc9ff,	// (0x00020da9) listscroll_menu_pane_ParamLimits

0xc9ff,	// (0x00020da9) listscroll_menu_pane

0xa779,	// (0x0001eb23) popup_submenu_window_ParamLimits

0xa779,	// (0x0001eb23) popup_submenu_window

0xca0b,	// (0x00020db5) find_popup_pane_g1

0xca13,	// (0x00020dbd) input_popup_find_pane_cp

0xc9e4,	// (0x00020d8e) input_focus_pane_cp4_ParamLimits

0xc9e4,	// (0x00020d8e) input_focus_pane_cp4

0xca1d,	// (0x00020dc7) input_popup_find_pane_t1_ParamLimits

0xca1d,	// (0x00020dc7) input_popup_find_pane_t1

0xc17b,	// (0x00020525) bg_popup_sub_pane_cp

0xca4b,	// (0x00020df5) listscroll_popup_sub_pane

0xca53,	// (0x00020dfd) list_submenu_pane_ParamLimits

0xca53,	// (0x00020dfd) list_submenu_pane

0xca64,	// (0x00020e0e) scroll_pane_cp4

0xca6c,	// (0x00020e16) list_single_popup_submenu_pane_ParamLimits

0xca6c,	// (0x00020e16) list_single_popup_submenu_pane

0xca81,	// (0x00020e2b) list_single_popup_submenu_pane_g1

0xca89,	// (0x00020e33) list_single_popup_submenu_pane_t1_ParamLimits

0xca89,	// (0x00020e33) list_single_popup_submenu_pane_t1

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp1_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp1

0xa7b7,	// (0x0001eb61) tabs_2_active_pane_g1

0xa7bf,	// (0x0001eb69) tabs_2_active_pane_t1

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp1_ParamLimits

0xc1c9,	// (0x00020573) bg_passive_tab_pane_cp1

0xa7b7,	// (0x0001eb61) tabs_2_passive_pane_g1

0xa7bf,	// (0x0001eb69) tabs_2_passive_pane_t1

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp4

0xa7d1,	// (0x0001eb7b) tabs_2_long_active_pane_t1

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp4

0xe9e5,	// (0x00022d8f) list_single_midp_graphic_pane_g4_ParamLimits

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp5

0xa7e4,	// (0x0001eb8e) tabs_3_long_active_pane_t1

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp5

0xe9e5,	// (0x00022d8f) list_single_midp_graphic_pane_g4

0xc1d7,	// (0x00020581) bg_popup_window_pane_cp13_ParamLimits

0xc1d7,	// (0x00020581) bg_popup_window_pane_cp13

0xcaa7,	// (0x00020e51) listscroll_popup_fast_pane_ParamLimits

0xcaa7,	// (0x00020e51) listscroll_popup_fast_pane

0xcab6,	// (0x00020e60) grid_popup_fast_pane_ParamLimits

0xcab6,	// (0x00020e60) grid_popup_fast_pane

0xcac8,	// (0x00020e72) scroll_pane_cp9_ParamLimits

0xcac8,	// (0x00020e72) scroll_pane_cp9

0x5009,	// (0x000193b3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5009,	// (0x000193b3) list_single_graphic_hl_pane_t1_cp2

0xcaec,	// (0x00020e96) input_focus_pane_cp20_ParamLimits

0xcaec,	// (0x00020e96) input_focus_pane_cp20

0xcafa,	// (0x00020ea4) query_popup_data_pane_t1_ParamLimits

0xcafa,	// (0x00020ea4) query_popup_data_pane_t1

0xcb0d,	// (0x00020eb7) query_popup_data_pane_t2_ParamLimits

0xcb0d,	// (0x00020eb7) query_popup_data_pane_t2

0xcb53,	// (0x00020efd) query_popup_data_pane_t3_ParamLimits

0xcb53,	// (0x00020efd) query_popup_data_pane_t3

0xcb94,	// (0x00020f3e) query_popup_data_pane_t4_ParamLimits

0xcb94,	// (0x00020f3e) query_popup_data_pane_t4

0xdf23,	// (0x000222cd) query_popup_data_pane_t5_ParamLimits

0xdf23,	// (0x000222cd) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x00023a4b) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x00023a4b) query_popup_data_pane_t

0xc964,	// (0x00020d0e) bg_set_opt_pane_g1

0xc96c,	// (0x00020d16) bg_set_opt_pane_g2

0xc974,	// (0x00020d1e) bg_set_opt_pane_g3

0xc97c,	// (0x00020d26) bg_set_opt_pane_g4

0xc984,	// (0x00020d2e) bg_set_opt_pane_g5

0xc98c,	// (0x00020d36) bg_set_opt_pane_g6

0xc994,	// (0x00020d3e) bg_set_opt_pane_g7

0xc99c,	// (0x00020d46) bg_set_opt_pane_g8

0xc9a4,	// (0x00020d4e) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00023a56) bg_set_opt_pane_g

0xe5b4,	// (0x0002295e) control_top_pane_stacon_ParamLimits

0xe5b4,	// (0x0002295e) control_top_pane_stacon

0xe607,	// (0x000229b1) signal_pane_stacon_ParamLimits

0xe607,	// (0x000229b1) signal_pane_stacon

0x0eba,	// (0x00015264) stacon_top_pane_g1_ParamLimits

0x0eba,	// (0x00015264) stacon_top_pane_g1

0xe62c,	// (0x000229d6) title_pane_stacon_ParamLimits

0xe62c,	// (0x000229d6) title_pane_stacon

0xe656,	// (0x00022a00) uni_indicator_pane_stacon_ParamLimits

0xe656,	// (0x00022a00) uni_indicator_pane_stacon

0xe66b,	// (0x00022a15) battery_pane_stacon_ParamLimits

0xe66b,	// (0x00022a15) battery_pane_stacon

0xe6af,	// (0x00022a59) control_bottom_pane_stacon_ParamLimits

0xe6af,	// (0x00022a59) control_bottom_pane_stacon

0xe6d2,	// (0x00022a7c) navi_pane_stacon_ParamLimits

0xe6d2,	// (0x00022a7c) navi_pane_stacon

0x0edc,	// (0x00015286) stacon_bottom_pane_g1_ParamLimits

0x0edc,	// (0x00015286) stacon_bottom_pane_g1

0xdf5a,	// (0x00022304) aid_levels_signal_lsc_ParamLimits

0xdf5a,	// (0x00022304) aid_levels_signal_lsc

0xdf71,	// (0x0002231b) signal_pane_stacon_g1_ParamLimits

0xdf71,	// (0x0002231b) signal_pane_stacon_g1

0xdf85,	// (0x0002232f) signal_pane_stacon_g2_ParamLimits

0xdf85,	// (0x0002232f) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00023a69) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00023a69) signal_pane_stacon_g

0xdfc7,	// (0x00022371) title_pane_stacon_t1_ParamLimits

0xdfc7,	// (0x00022371) title_pane_stacon_t1

0xdfec,	// (0x00022396) uni_indicator_pane_stacon_g1

0xdff6,	// (0x000223a0) uni_indicator_pane_stacon_g2

0xe000,	// (0x000223aa) uni_indicator_pane_stacon_g3

0xe00a,	// (0x000223b4) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00023a75) uni_indicator_pane_stacon_g

0xe014,	// (0x000223be) control_top_pane_stacon_g1

0xe01c,	// (0x000223c6) control_top_pane_stacon_t1_ParamLimits

0xe01c,	// (0x000223c6) control_top_pane_stacon_t1

0xe053,	// (0x000223fd) aid_levels_battery_lsc_ParamLimits

0xe053,	// (0x000223fd) aid_levels_battery_lsc

0xe06b,	// (0x00022415) battery_pane_stacon_g1_ParamLimits

0xe06b,	// (0x00022415) battery_pane_stacon_g1

0xe07e,	// (0x00022428) battery_pane_stacon_g2_ParamLimits

0xe07e,	// (0x00022428) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x00023a7e) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x00023a7e) battery_pane_stacon_g

0xe0bc,	// (0x00022466) navi_icon_pane_stacon

0xe0d0,	// (0x0002247a) navi_navi_pane_stacon

0xe0bc,	// (0x00022466) navi_text_pane_stacon

0xe014,	// (0x000223be) control_bottom_pane_stacon_g1

0xe0e6,	// (0x00022490) control_bottom_pane_stacon_t1_ParamLimits

0xe0e6,	// (0x00022490) control_bottom_pane_stacon_t1

0xa7f6,	// (0x0001eba0) grid_app_pane_ParamLimits

0xa7f6,	// (0x0001eba0) grid_app_pane

0xa82e,	// (0x0001ebd8) scroll_pane_cp15_ParamLimits

0xa82e,	// (0x0001ebd8) scroll_pane_cp15

0xa843,	// (0x0001ebed) cell_app_pane_ParamLimits

0xa843,	// (0x0001ebed) cell_app_pane

0xa890,	// (0x0001ec3a) cell_app_pane_g1_ParamLimits

0xa890,	// (0x0001ec3a) cell_app_pane_g1

0xe137,	// (0x000224e1) cell_app_pane_g2_ParamLimits

0xe137,	// (0x000224e1) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00023a83) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00023a83) cell_app_pane_g

0xa8b4,	// (0x0001ec5e) cell_app_pane_t1_ParamLimits

0xa8b4,	// (0x0001ec5e) cell_app_pane_t1

0xe143,	// (0x000224ed) grid_highlight_pane_ParamLimits

0xe143,	// (0x000224ed) grid_highlight_pane

0xc964,	// (0x00020d0e) cell_highlight_pane_g1

0xc96c,	// (0x00020d16) cell_highlight_pane_g2

0xc974,	// (0x00020d1e) cell_highlight_pane_g3

0xc97c,	// (0x00020d26) cell_highlight_pane_g4

0xc984,	// (0x00020d2e) cell_highlight_pane_g5

0xc98c,	// (0x00020d36) cell_highlight_pane_g6

0xc994,	// (0x00020d3e) cell_highlight_pane_g7

0xc99c,	// (0x00020d46) cell_highlight_pane_g8

0xc9a4,	// (0x00020d4e) cell_highlight_pane_g9

0xc171,	// (0x0002051b) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00023a31) cell_highlight_pane_g

0xe15e,	// (0x00022508) bg_scroll_pane

0xe17d,	// (0x00022527) scroll_handle_pane

0xe1ce,	// (0x00022578) scroll_bg_pane_g1

0xe1e3,	// (0x0002258d) scroll_bg_pane_g2

0xe1fb,	// (0x000225a5) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00023a88) scroll_bg_pane_g

0xe210,	// (0x000225ba) scroll_handle_focus_pane_ParamLimits

0xe210,	// (0x000225ba) scroll_handle_focus_pane

0xe1ce,	// (0x00022578) scroll_handle_pane_g1

0xe21d,	// (0x000225c7) scroll_handle_pane_g2

0xe1fb,	// (0x000225a5) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x00023a8f) scroll_handle_pane_g

0xc9e4,	// (0x00020d8e) bg_popup_sub_pane_cp21_ParamLimits

0xc9e4,	// (0x00020d8e) bg_popup_sub_pane_cp21

0xe231,	// (0x000225db) popup_fep_japan_predictive_window_t1_ParamLimits

0xe231,	// (0x000225db) popup_fep_japan_predictive_window_t1

0xe248,	// (0x000225f2) popup_fep_japan_predictive_window_t2_ParamLimits

0xe248,	// (0x000225f2) popup_fep_japan_predictive_window_t2

0xe27b,	// (0x00022625) popup_fep_japan_predictive_window_t3_ParamLimits

0xe27b,	// (0x00022625) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00023a96) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00023a96) popup_fep_japan_predictive_window_t

0xc17b,	// (0x00020525) bg_popup_sub_pane_cp23

0xe2b2,	// (0x0002265c) listscroll_japin_cand_pane

0xe2ba,	// (0x00022664) popup_fep_japan_candidate_window_t1

0xe2c8,	// (0x00022672) candidate_pane_ParamLimits

0xe2c8,	// (0x00022672) candidate_pane

0xe2da,	// (0x00022684) scroll_pane_cp30

0xe2e4,	// (0x0002268e) list_single_popup_jap_candidate_pane_ParamLimits

0xe2e4,	// (0x0002268e) list_single_popup_jap_candidate_pane

0xc17b,	// (0x00020525) list_highlight_pane_cp30

0xe2f8,	// (0x000226a2) list_single_popup_jap_candidate_pane_t1

0xa8cb,	// (0x0001ec75) level_1_signal

0xa8dd,	// (0x0001ec87) level_2_signal

0xa8f0,	// (0x0001ec9a) level_3_signal

0xa903,	// (0x0001ecad) level_4_signal

0xa916,	// (0x0001ecc0) level_5_signal

0xa929,	// (0x0001ecd3) level_6_signal

0xa93c,	// (0x0001ece6) level_7_signal

0xa8cb,	// (0x0001ec75) level_1_battery

0xa8dd,	// (0x0001ec87) level_2_battery

0xa8f0,	// (0x0001ec9a) level_3_battery

0xa903,	// (0x0001ecad) level_4_battery

0xa916,	// (0x0001ecc0) level_5_battery

0xa929,	// (0x0001ecd3) level_6_battery

0xa93c,	// (0x0001ece6) level_7_battery

0xe33e,	// (0x000226e8) list_menu_pane_ParamLimits

0xe33e,	// (0x000226e8) list_menu_pane

0xe354,	// (0x000226fe) scroll_pane_cp25_ParamLimits

0xe354,	// (0x000226fe) scroll_pane_cp25

0xe36d,	// (0x00022717) list_double2_graphic_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double2_graphic_pane_cp2

0xe36d,	// (0x00022717) list_double2_large_graphic_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double2_large_graphic_pane_cp2

0xe36d,	// (0x00022717) list_double2_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double2_pane_cp2

0xe36d,	// (0x00022717) list_double_graphic_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double_graphic_pane_cp2

0xe36d,	// (0x00022717) list_double_large_graphic_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double_large_graphic_pane_cp2

0xe36d,	// (0x00022717) list_double_number_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double_number_pane_cp2

0xe36d,	// (0x00022717) list_double_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_2graphic_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_2graphic_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_graphic_heading_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_graphic_heading_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_graphic_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_graphic_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_heading_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_heading_pane_cp2

0xe37d,	// (0x00022727) list_single_large_graphic_pane_cp2_ParamLimits

0xe37d,	// (0x00022727) list_single_large_graphic_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_number_heading_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_number_heading_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_number_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_number_pane_cp2

0xa94f,	// (0x0001ecf9) list_single_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_pane_cp2

0xe3f1,	// (0x0002279b) bg_popup_sub_pane_cp22

0xe416,	// (0x000227c0) popup_side_volume_key_window_g1

0xe440,	// (0x000227ea) popup_side_volume_key_window_t1

0xe45e,	// (0x00022808) volume_small_pane_cp1

0xc1c9,	// (0x00020573) bg_popup_sub_pane_cp24_ParamLimits

0xc1c9,	// (0x00020573) bg_popup_sub_pane_cp24

0xe466,	// (0x00022810) fep_china_uni_candidate_pane_ParamLimits

0xe466,	// (0x00022810) fep_china_uni_candidate_pane

0xe47a,	// (0x00022824) fep_china_uni_entry_pane

0xe48a,	// (0x00022834) popup_fep_china_uni_window_g1

0xe4a6,	// (0x00022850) fep_china_uni_entry_pane_g1

0xe4b0,	// (0x0002285a) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00023ac7) fep_china_uni_entry_pane_g

0xe4ba,	// (0x00022864) fep_entry_item_pane

0xe4c4,	// (0x0002286e) fep_candidate_item_pane

0xe4cc,	// (0x00022876) fep_china_uni_candidate_pane_g1

0xe4d6,	// (0x00022880) fep_china_uni_candidate_pane_g2

0xe4de,	// (0x00022888) fep_china_uni_candidate_pane_g3

0xe4e6,	// (0x00022890) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00023acc) fep_china_uni_candidate_pane_g

0xc171,	// (0x0002051b) fep_entry_item_pane_g1

0xe4f0,	// (0x0002289a) fep_entry_item_pane_t1_ParamLimits

0xe4f0,	// (0x0002289a) fep_entry_item_pane_t1

0xe506,	// (0x000228b0) fep_candidate_item_pane_t1_ParamLimits

0xe506,	// (0x000228b0) fep_candidate_item_pane_t1

0xe51b,	// (0x000228c5) fep_candidate_item_pane_t2_ParamLimits

0xe51b,	// (0x000228c5) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00023ad5) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00023ad5) fep_candidate_item_pane_t

0xc1d7,	// (0x00020581) list_highlight_pane_cp31_ParamLimits

0xc1d7,	// (0x00020581) list_highlight_pane_cp31

0xe52d,	// (0x000228d7) level_1_signal_lsc

0xe536,	// (0x000228e0) level_2_signal_lsc

0xe53f,	// (0x000228e9) level_3_signal_lsc

0xe548,	// (0x000228f2) level_4_signal_lsc

0xe551,	// (0x000228fb) level_5_signal_lsc

0xe55a,	// (0x00022904) level_6_signal_lsc

0xe563,	// (0x0002290d) level_7_signal_lsc

0xe563,	// (0x0002290d) level_1_battery_lsc

0xe56c,	// (0x00022916) level_2_battery_lsc

0xe575,	// (0x0002291f) level_3_battery_lsc

0xe57e,	// (0x00022928) level_4_battery_lsc

0xe587,	// (0x00022931) level_5_battery_lsc

0xe590,	// (0x0002293a) level_6_battery_lsc

0xe52d,	// (0x000228d7) level_7_battery_lsc

0xe599,	// (0x00022943) scroll_handle_focus_pane_g1

0xe5a2,	// (0x0002294c) scroll_handle_focus_pane_g2

0xe5ab,	// (0x00022955) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00023ada) scroll_handle_focus_pane_g

0xa9de,	// (0x0001ed88) list_single_2graphic_pane_g1_ParamLimits

0xa9de,	// (0x0001ed88) list_single_2graphic_pane_g1

0xa240,	// (0x0001e5ea) list_single_2graphic_pane_g2_ParamLimits

0xa240,	// (0x0001e5ea) list_single_2graphic_pane_g2

0x1a39,	// (0x00015de3) list_single_2graphic_pane_g3_ParamLimits

0x1a39,	// (0x00015de3) list_single_2graphic_pane_g3

0xa9ea,	// (0x0001ed94) list_single_2graphic_pane_g4_ParamLimits

0xa9ea,	// (0x0001ed94) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00023ae1) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00023ae1) list_single_2graphic_pane_g

0xa9fb,	// (0x0001eda5) list_single_2graphic_pane_t1_ParamLimits

0xa9fb,	// (0x0001eda5) list_single_2graphic_pane_t1

0xaa29,	// (0x0001edd3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaa29,	// (0x0001edd3) list_double2_graphic_large_graphic_pane_g1

0xa2ab,	// (0x0001e655) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa2ab,	// (0x0001e655) list_double2_graphic_large_graphic_pane_g2

0xa2bc,	// (0x0001e666) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa2bc,	// (0x0001e666) list_double2_graphic_large_graphic_pane_g3

0xaa3b,	// (0x0001ede5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaa3b,	// (0x0001ede5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00023aea) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00023aea) list_double2_graphic_large_graphic_pane_g

0xaa47,	// (0x0001edf1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaa47,	// (0x0001edf1) list_double2_graphic_large_graphic_pane_t1

0xaa5d,	// (0x0001ee07) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaa5d,	// (0x0001ee07) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00023af3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00023af3) list_double2_graphic_large_graphic_pane_t

0x0f9c,	// (0x00015346) popup_fast_swap_window_ParamLimits

0x0f9c,	// (0x00015346) popup_fast_swap_window

0x0fba,	// (0x00015364) popup_side_volume_key_window

0x0fd8,	// (0x00015382) stacon_top_pane

0x0fe2,	// (0x0001538c) status_pane_ParamLimits

0x0fe2,	// (0x0001538c) status_pane

0xaab7,	// (0x0001ee61) status_small_pane

0xc17b,	// (0x00020525) control_pane

0xc17b,	// (0x00020525) stacon_bottom_pane

0xc835,	// (0x00020bdf) scroll_pane_cp121

0xc82c,	// (0x00020bd6) set_content_pane

0xaa6f,	// (0x0001ee19) bg_active_tab_pane_g1_cp1

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp1

0xaa78,	// (0x0001ee22) bg_active_tab_pane_g3_cp1

0xaa6f,	// (0x0001ee19) bg_passive_tab_pane_g1_cp1

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp1

0xaa78,	// (0x0001ee22) bg_passive_tab_pane_g3_cp1

0xaa81,	// (0x0001ee2b) bg_active_tab_pane_g1_cp2

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp2

0xaa8a,	// (0x0001ee34) bg_active_tab_pane_g3_cp2

0xaa81,	// (0x0001ee2b) bg_passive_tab_pane_g1_cp2

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp2

0xaa8a,	// (0x0001ee34) bg_passive_tab_pane_g3_cp2

0xaa93,	// (0x0001ee3d) bg_active_tab_pane_g1_cp3

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp3

0xaa9c,	// (0x0001ee46) bg_active_tab_pane_g3_cp3

0xaa93,	// (0x0001ee3d) bg_passive_tab_pane_g1_cp3

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp3

0xaa9c,	// (0x0001ee46) bg_passive_tab_pane_g3_cp3

0xaaa5,	// (0x0001ee4f) bg_active_tab_pane_g1_cp4

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp4

0xaaae,	// (0x0001ee58) bg_active_tab_pane_g3_cp4

0xaaa5,	// (0x0001ee4f) bg_passive_tab_pane_g1_cp4

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp4

0xaaae,	// (0x0001ee58) bg_passive_tab_pane_g3_cp4

0x0ef8,	// (0x000152a2) bg_active_tab_pane_g1_cp5

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp5

0x0f01,	// (0x000152ab) bg_active_tab_pane_g3_cp5

0x0ef8,	// (0x000152a2) bg_passive_tab_pane_g1_cp5

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp5

0x0f01,	// (0x000152ab) bg_passive_tab_pane_g3_cp5

0x0f0a,	// (0x000152b4) list_set_graphic_pane_ParamLimits

0x0f0a,	// (0x000152b4) list_set_graphic_pane

0xc17b,	// (0x00020525) bg_set_opt_pane_cp4

0x0f1d,	// (0x000152c7) list_set_graphic_pane_g1_ParamLimits

0x0f1d,	// (0x000152c7) list_set_graphic_pane_g1

0x0f29,	// (0x000152d3) list_set_graphic_pane_g2_ParamLimits

0x0f29,	// (0x000152d3) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00023af8) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00023af8) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00023e82) volume_small_pane_cp_g

0x0f4d,	// (0x000152f7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0f4d,	// (0x000152f7) list_double2_large_graphic_pane_g1_cp2

0x0f5b,	// (0x00015305) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0f5b,	// (0x00015305) list_double2_large_graphic_pane_g2_cp2

0x0f6c,	// (0x00015316) list_double2_large_graphic_pane_g3_cp2

0x0f74,	// (0x0001531e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0f74,	// (0x0001531e) list_double2_large_graphic_pane_t1_cp2

0x0f8a,	// (0x00015334) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0f8a,	// (0x00015334) list_double2_large_graphic_pane_t2_cp2

0x2c6e,	// (0x00017018) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x2c6e,	// (0x00017018) list_double_large_graphic_pane_g1_cp2

0x2c81,	// (0x0001702b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2c81,	// (0x0001702b) list_double_large_graphic_pane_g2_cp2

0x110b,	// (0x000154b5) list_double_large_graphic_pane_g3_cp2

0x2c92,	// (0x0001703c) list_double_large_graphic_pane_g4_cp

0x2c9a,	// (0x00017044) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2c9a,	// (0x00017044) list_double_large_graphic_pane_t1_cp2

0x2cb1,	// (0x0001705b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2cb1,	// (0x0001705b) list_double_large_graphic_pane_t2_cp2

0x0ffb,	// (0x000153a5) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0ffb,	// (0x000153a5) list_double2_graphic_pane_g1_cp2

0x1009,	// (0x000153b3) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1009,	// (0x000153b3) list_double2_graphic_pane_g2_cp2

0x101a,	// (0x000153c4) list_double2_graphic_pane_g3_cp2

0x1024,	// (0x000153ce) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1024,	// (0x000153ce) list_double2_graphic_pane_t1_cp2

0x103a,	// (0x000153e4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x103a,	// (0x000153e4) list_double2_graphic_pane_t2_cp2

0x104c,	// (0x000153f6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x104c,	// (0x000153f6) list_single_number_heading_pane_g1_cp2

0x1058,	// (0x00015402) list_single_number_heading_pane_g2_cp2

0x1060,	// (0x0001540a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1060,	// (0x0001540a) list_single_number_heading_pane_t1_cp2

0x1076,	// (0x00015420) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1076,	// (0x00015420) list_single_number_heading_pane_t2_cp2

0x108a,	// (0x00015434) list_single_number_heading_pane_t3_cp2_ParamLimits

0x108a,	// (0x00015434) list_single_number_heading_pane_t3_cp2

0x104c,	// (0x000153f6) list_single_heading_pane_g1_cp2_ParamLimits

0x104c,	// (0x000153f6) list_single_heading_pane_g1_cp2

0x1058,	// (0x00015402) list_single_heading_pane_g2_cp2

0x1060,	// (0x0001540a) list_single_heading_pane_t1_cp2_ParamLimits

0x1060,	// (0x0001540a) list_single_heading_pane_t1_cp2

0x2a68,	// (0x00016e12) list_single_heading_pane_t2_cp2_ParamLimits

0x2a68,	// (0x00016e12) list_single_heading_pane_t2_cp2

0x29b0,	// (0x00016d5a) list_double_graphic_pane_g1_cp2_ParamLimits

0x29b0,	// (0x00016d5a) list_double_graphic_pane_g1_cp2

0x29bc,	// (0x00016d66) list_double_graphic_pane_g2_cp2_ParamLimits

0x29bc,	// (0x00016d66) list_double_graphic_pane_g2_cp2

0x29cb,	// (0x00016d75) list_double_graphic_pane_g3_cp2

0x29d3,	// (0x00016d7d) list_double_graphic_pane_t1_cp2_ParamLimits

0x29d3,	// (0x00016d7d) list_double_graphic_pane_t1_cp2

0x29e9,	// (0x00016d93) list_double_graphic_pane_t2_cp2_ParamLimits

0x29e9,	// (0x00016d93) list_double_graphic_pane_t2_cp2

0x10ff,	// (0x000154a9) list_double_number_pane_g1_cp2_ParamLimits

0x10ff,	// (0x000154a9) list_double_number_pane_g1_cp2

0x110b,	// (0x000154b5) list_double_number_pane_g2_cp2

0x2974,	// (0x00016d1e) list_double_number_pane_t1_cp2_ParamLimits

0x2974,	// (0x00016d1e) list_double_number_pane_t1_cp2

0x2988,	// (0x00016d32) list_double_number_pane_t2_cp2_ParamLimits

0x2988,	// (0x00016d32) list_double_number_pane_t2_cp2

0x299e,	// (0x00016d48) list_double_number_pane_t3_cp2_ParamLimits

0x299e,	// (0x00016d48) list_double_number_pane_t3_cp2

0x285d,	// (0x00016c07) list_single_graphic_pane_g1_cp2_ParamLimits

0x285d,	// (0x00016c07) list_single_graphic_pane_g1_cp2

0xcbd0,	// (0x00020f7a) list_single_graphic_pane_g2_cp2_ParamLimits

0xcbd0,	// (0x00020f7a) list_single_graphic_pane_g2_cp2

0x1165,	// (0x0001550f) list_single_graphic_pane_g3_cp2

0x2833,	// (0x00016bdd) list_single_graphic_pane_t1_cp2_ParamLimits

0x2833,	// (0x00016bdd) list_single_graphic_pane_t1_cp2

0xcbd0,	// (0x00020f7a) list_single_number_pane_g1_cp2_ParamLimits

0xcbd0,	// (0x00020f7a) list_single_number_pane_g1_cp2

0x1165,	// (0x0001550f) list_single_number_pane_g2_cp2

0x2833,	// (0x00016bdd) list_single_number_pane_t1_cp2_ParamLimits

0x2833,	// (0x00016bdd) list_single_number_pane_t1_cp2

0x2849,	// (0x00016bf3) list_single_number_pane_t2_cp2_ParamLimits

0x2849,	// (0x00016bf3) list_single_number_pane_t2_cp2

0x0f5b,	// (0x00015305) list_double2_pane_g1_cp2_ParamLimits

0x0f5b,	// (0x00015305) list_double2_pane_g1_cp2

0x0f6c,	// (0x00015316) list_double2_pane_g2_cp2

0x10d7,	// (0x00015481) list_double2_pane_t1_cp2_ParamLimits

0x10d7,	// (0x00015481) list_double2_pane_t1_cp2

0x10ed,	// (0x00015497) list_double2_pane_t2_cp2_ParamLimits

0x10ed,	// (0x00015497) list_double2_pane_t2_cp2

0x10ff,	// (0x000154a9) list_double_pane_g1_cp2_ParamLimits

0x10ff,	// (0x000154a9) list_double_pane_g1_cp2

0x110b,	// (0x000154b5) list_double_pane_g2_cp2

0x1113,	// (0x000154bd) list_double_pane_t1_cp2_ParamLimits

0x1113,	// (0x000154bd) list_double_pane_t1_cp2

0x1129,	// (0x000154d3) list_double_pane_t2_cp2_ParamLimits

0x1129,	// (0x000154d3) list_double_pane_t2_cp2

0x1155,	// (0x000154ff) list_single_pane_cp2_g3

0xcbd0,	// (0x00020f7a) list_single_pane_g1_cp2_ParamLimits

0xcbd0,	// (0x00020f7a) list_single_pane_g1_cp2

0x1165,	// (0x0001550f) list_single_pane_g2_cp2

0x116d,	// (0x00015517) list_single_pane_t1_cp2_ParamLimits

0x116d,	// (0x00015517) list_single_pane_t1_cp2

0x1185,	// (0x0001552f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1185,	// (0x0001552f) list_single_large_graphic_pane_g1_cp2

0x1193,	// (0x0001553d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1193,	// (0x0001553d) list_single_large_graphic_pane_g2_cp2

0x119f,	// (0x00015549) list_single_large_graphic_pane_g3_cp2

0x11a7,	// (0x00015551) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x11a7,	// (0x00015551) list_single_large_graphic_pane_g4_cp1

0x11c1,	// (0x0001556b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x11c1,	// (0x0001556b) list_single_large_graphic_pane_t1_cp2

0x27fd,	// (0x00016ba7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x27fd,	// (0x00016ba7) list_single_graphic_heading_pane_g1_cp2

0x27ca,	// (0x00016b74) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x27ca,	// (0x00016b74) list_single_graphic_heading_pane_g4_cp2

0x1165,	// (0x0001550f) list_single_graphic_heading_pane_g5_cp2

0x2809,	// (0x00016bb3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2809,	// (0x00016bb3) list_single_graphic_heading_pane_t1_cp2

0x281f,	// (0x00016bc9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x281f,	// (0x00016bc9) list_single_graphic_heading_pane_t2_cp2

0x27be,	// (0x00016b68) list_single_2graphic_pane_g1_cp2_ParamLimits

0x27be,	// (0x00016b68) list_single_2graphic_pane_g1_cp2

0x27ca,	// (0x00016b74) list_single_2graphic_pane_g2_cp2_ParamLimits

0x27ca,	// (0x00016b74) list_single_2graphic_pane_g2_cp2

0x1165,	// (0x0001550f) list_single_2graphic_pane_g3_cp2

0x27db,	// (0x00016b85) list_single_2graphic_pane_g4_cp2_ParamLimits

0x27db,	// (0x00016b85) list_single_2graphic_pane_g4_cp2

0x27e7,	// (0x00016b91) list_single_2graphic_pane_t1_cp2_ParamLimits

0x27e7,	// (0x00016b91) list_single_2graphic_pane_t1_cp2

0xc171,	// (0x0002051b) list_highlight_pane_g10_cp1

0x2396,	// (0x00016740) list_highlight_pane_g1_cp1

0x239e,	// (0x00016748) list_highlight_pane_g2_cp1

0x23a6,	// (0x00016750) list_highlight_pane_g3_cp1

0x23ae,	// (0x00016758) list_highlight_pane_g4_cp1

0x23b6,	// (0x00016760) list_highlight_pane_g5_cp1

0x23be,	// (0x00016768) list_highlight_pane_g6_cp1

0x23c6,	// (0x00016770) list_highlight_pane_g7_cp1

0x23ce,	// (0x00016778) list_highlight_pane_g8_cp1

0x23d6,	// (0x00016780) list_highlight_pane_g9_cp1

0xb11b,	// (0x0001f4c5) form_field_slider_pane_t3

0xb129,	// (0x0001f4d3) form_field_slider_pane_t4

0x22d2,	// (0x0001667c) slider_form_pane_ParamLimits

0x22d2,	// (0x0001667c) slider_form_pane

0xc17b,	// (0x00020525) control_abbreviations

0xc17b,	// (0x00020525) control_conventions

0xc17b,	// (0x00020525) control_definitions

0xc17b,	// (0x00020525) format_table_attribute

0x2abe,	// (0x00016e68) bg_popup_preview_window_pane_g9

0xc17b,	// (0x00020525) format_table_data2

0xc17b,	// (0x00020525) format_table_data3

0xc17b,	// (0x00020525) format_table_data_example

0x0008,

0xc17b,	// (0x00020525) intro_purpose

0xf8e5,	// (0x00023c8f) bg_popup_preview_window_pane_g

0xc17b,	// (0x00020525) texts_category

0xc17b,	// (0x00020525) texts_graphics

0x11d7,	// (0x00015581) text_digital

0x11e6,	// (0x00015590) text_primary

0x11f5,	// (0x0001559f) text_primary_small

0x1204,	// (0x000155ae) text_secondary

0x1213,	// (0x000155bd) text_title

0x32dd,	// (0x00017687) bg_passive_tab_pane_g1_cp3_srt

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp3_srt

0x32e6,	// (0x00017690) bg_passive_tab_pane_g3_cp3_srt

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp3_srt_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp3_srt

0x32ef,	// (0x00017699) tabs_4_active_pane_srt_g1

0xb486,	// (0x0001f830) tabs_4_active_pane_srt_t1_ParamLimits

0xb486,	// (0x0001f830) tabs_4_active_pane_srt_t1

0x32dd,	// (0x00017687) bg_active_tab_pane_g1_cp3_copy1

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp3_copy1

0x32e6,	// (0x00017690) bg_active_tab_pane_g3_cp3_copy1

0xc1d7,	// (0x00020581) tabs_2_long_active_pane_srt_ParamLimits

0xc1d7,	// (0x00020581) tabs_2_long_active_pane_srt

0xc1d7,	// (0x00020581) tabs_2_long_passive_pane_srt_ParamLimits

0xc1d7,	// (0x00020581) tabs_2_long_passive_pane_srt

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp4_srt

0x2f15,	// (0x000172bf) bg_passive_tab_pane_g1_cp4_srt

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp4_srt

0x2f1e,	// (0x000172c8) bg_passive_tab_pane_g3_cp4_srt

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp4_srt_ParamLimits

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp4_srt

0xb2fb,	// (0x0001f6a5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb2fb,	// (0x0001f6a5) tabs_2_long_active_pane_srt_t1

0x2f15,	// (0x000172bf) bg_active_tab_pane_g1_cp4_srt

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp4_srt

0x2f1e,	// (0x000172c8) bg_active_tab_pane_g3_cp4_srt

0xc1c9,	// (0x00020573) tabs_3_long_active_pane_srt_ParamLimits

0xc1c9,	// (0x00020573) tabs_3_long_active_pane_srt

0xc1c9,	// (0x00020573) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc1c9,	// (0x00020573) tabs_3_long_passive_pane_cp_srt

0xc1c9,	// (0x00020573) tabs_3_long_passive_pane_srt_ParamLimits

0xc1c9,	// (0x00020573) tabs_3_long_passive_pane_srt

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp5_srt

0x0ef8,	// (0x000152a2) bg_passive_tab_pane_g1_cp5_srt

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp5_srt

0x0f01,	// (0x000152ab) bg_passive_tab_pane_g3_cp5_srt

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp5_srt_ParamLimits

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp5_srt

0xb2e5,	// (0x0001f68f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb2e5,	// (0x0001f68f) tabs_3_long_active_pane_srt_t1

0x0ef8,	// (0x000152a2) bg_active_tab_pane_g1_cp5_srt

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp5_srt

0x0f01,	// (0x000152ab) bg_active_tab_pane_g3_cp5_srt

0x2ef5,	// (0x0001729f) navi_text_pane_srt_t1

0x2eed,	// (0x00017297) navi_icon_pane_srt_g1

0x13eb,	// (0x00015795) midp_editing_number_pane_srt

0x1222,	// (0x000155cc) midp_ticker_pane_srt

0x13f3,	// (0x0001579d) midp_ticker_pane_srt_g1

0x13fb,	// (0x000157a5) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00023b17) midp_ticker_pane_srt_g

0x1403,	// (0x000157ad) midp_ticker_pane_srt_t1

0x2ede,	// (0x00017288) midp_editing_number_pane_t1_copy1

0xaac2,	// (0x0001ee6c) listscroll_midp_pane

0xaac2,	// (0x0001ee6c) midp_form_pane

0x1299,	// (0x00015643) midp_info_popup_window_ParamLimits

0x1299,	// (0x00015643) midp_info_popup_window

0xc9e4,	// (0x00020d8e) bg_popup_sub_pane_cp50_ParamLimits

0xc9e4,	// (0x00020d8e) bg_popup_sub_pane_cp50

0x1fc0,	// (0x0001636a) listscroll_midp_info_pane_ParamLimits

0x1fc0,	// (0x0001636a) listscroll_midp_info_pane

0x1fa0,	// (0x0001634a) listscroll_form_midp_pane_ParamLimits

0x1fa0,	// (0x0001634a) listscroll_form_midp_pane

0x1fac,	// (0x00016356) scroll_bar_cp050

0x1fa0,	// (0x0001634a) list_midp_pane

0x406f,	// (0x00018419) signal_pane_g2_cp

0x1eba,	// (0x00016264) listscroll_midp_info_pane_t1_ParamLimits

0x1eba,	// (0x00016264) listscroll_midp_info_pane_t1

0x1ed2,	// (0x0001627c) listscroll_midp_info_pane_t2_ParamLimits

0x1ed2,	// (0x0001627c) listscroll_midp_info_pane_t2

0x1f10,	// (0x000162ba) listscroll_midp_info_pane_t3_ParamLimits

0x1f10,	// (0x000162ba) listscroll_midp_info_pane_t3

0x1f4a,	// (0x000162f4) listscroll_midp_info_pane_t4_ParamLimits

0x1f4a,	// (0x000162f4) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00023bca) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00023bca) listscroll_midp_info_pane_t

0xca64,	// (0x00020e0e) scroll_pane_cp21

0x1e54,	// (0x000161fe) form_midp_field_choice_group_pane

0x1e5d,	// (0x00016207) form_midp_field_text_pane

0x1ea0,	// (0x0001624a) form_midp_field_time_pane

0x1ea8,	// (0x00016252) form_midp_gauge_slider_pane

0x1eb1,	// (0x0001625b) form_midp_gauge_wait_pane

0xc17b,	// (0x00020525) form_midp_image_pane

0xb0fe,	// (0x0001f4a8) list_single_midp_pane_ParamLimits

0xb0fe,	// (0x0001f4a8) list_single_midp_pane

0xb0d6,	// (0x0001f480) form_midp_field_text_pane_t1

0x1bdb,	// (0x00015f85) input_focus_pane_cp050

0x1e23,	// (0x000161cd) list_midp_form_text_pane

0x1dc7,	// (0x00016171) form_midp_field_choice_group_pane_t1

0x1dd5,	// (0x0001617f) input_focus_pane_cp051

0x1de9,	// (0x00016193) list_midp_choice_pane

0xc17b,	// (0x00020525) status_idle_pane

0x1dab,	// (0x00016155) form_midp_field_time_pane_t1

0xc171,	// (0x0002051b) wait_anim_pane_g2_copy1

0x1db9,	// (0x00016163) form_midp_field_time_pane_t2

0x0001,

0x1349,	// (0x000156f3) aid_navinavi_width_2_pane

0xf81b,	// (0x00023bc5) form_midp_field_time_pane_t

0xc17b,	// (0x00020525) input_focus_pane_cp052

0xc17b,	// (0x00020525) bg_input_focus_pane_cp040

0x1d6b,	// (0x00016115) form_midp_gauge_slider_pane_t1

0x1d79,	// (0x00016123) form_midp_gauge_slider_pane_t2

0xb0ba,	// (0x0001f464) form_midp_gauge_slider_pane_t3

0xb0c8,	// (0x0001f472) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x00023bbc) form_midp_gauge_slider_pane_t

0x1da3,	// (0x0001614d) form_midp_slider_pane

0xc1d7,	// (0x00020581) bg_input_focus_pane_cp041_ParamLimits

0xc1d7,	// (0x00020581) bg_input_focus_pane_cp041

0x1d38,	// (0x000160e2) form_midp_gauge_wait_pane_t1_ParamLimits

0x1d38,	// (0x000160e2) form_midp_gauge_wait_pane_t1

0x1d4a,	// (0x000160f4) form_midp_gauge_wait_pane_t2_ParamLimits

0x1d4a,	// (0x000160f4) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00023bb7) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00023bb7) form_midp_gauge_wait_pane_t

0x1d5c,	// (0x00016106) form_midp_wait_pane_ParamLimits

0x1d5c,	// (0x00016106) form_midp_wait_pane

0x1d00,	// (0x000160aa) form_midp_image_pane_g1

0x1d09,	// (0x000160b3) form_midp_image_pane_t1

0x1d18,	// (0x000160c2) form_midp_image_pane_t2

0x1d27,	// (0x000160d1) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x00023bb0) form_midp_image_pane_t

0x1ce8,	// (0x00016092) list_single_midp_pane_g1

0x1cf1,	// (0x0001609b) list_single_midp_pane_t1

0xb0a3,	// (0x0001f44d) list_midp_form_item_pane_ParamLimits

0xb0a3,	// (0x0001f44d) list_midp_form_item_pane

0x12f1,	// (0x0001569b) list_midp_form_item_pane_t1

0x1300,	// (0x000156aa) midp_ticker_pane_g1

0x130c,	// (0x000156b6) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00023afd) midp_ticker_pane_g

0xab66,	// (0x0001ef10) midp_ticker_pane_t1

0xb3de,	// (0x0001f788) midp_editing_number_pane_t1

0x315e,	// (0x00017508) midp_editing_number_pane

0x316d,	// (0x00017517) midp_ticker_pane

0x2ea6,	// (0x00017250) ai_message_heading_pane

0xc17b,	// (0x00020525) bg_popup_window_pane_cp14

0x2eae,	// (0x00017258) listscroll_ai_message_pane

0x2e2c,	// (0x000171d6) ai_message_heading_pane_g1_ParamLimits

0x2e2c,	// (0x000171d6) ai_message_heading_pane_g1

0x2e38,	// (0x000171e2) ai_message_heading_pane_g2_ParamLimits

0x2e38,	// (0x000171e2) ai_message_heading_pane_g2

0x2e46,	// (0x000171f0) ai_message_heading_pane_g3_ParamLimits

0x2e46,	// (0x000171f0) ai_message_heading_pane_g3

0x2e52,	// (0x000171fc) ai_message_heading_pane_g4_ParamLimits

0x2e52,	// (0x000171fc) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x00023cf1) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x00023cf1) ai_message_heading_pane_g

0x2e5e,	// (0x00017208) ai_message_heading_pane_t1_ParamLimits

0x2e5e,	// (0x00017208) ai_message_heading_pane_t1

0x2e78,	// (0x00017222) ai_message_heading_pane_t2_ParamLimits

0x2e78,	// (0x00017222) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x00023cfa) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x00023cfa) ai_message_heading_pane_t

0x2e8c,	// (0x00017236) bg_popup_heading_pane_cp1_ParamLimits

0x2e8c,	// (0x00017236) bg_popup_heading_pane_cp1

0x2e1a,	// (0x000171c4) list_ai_message_pane_ParamLimits

0x2e1a,	// (0x000171c4) list_ai_message_pane

0xca64,	// (0x00020e0e) scroll_pane_cp10

0x2db6,	// (0x00017160) list_ai_message_pane_g1

0x2dbe,	// (0x00017168) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x00023cce) list_ai_message_pane_g

0x2dc6,	// (0x00017170) list_ai_message_pane_t1_ParamLimits

0x2dc6,	// (0x00017170) list_ai_message_pane_t1

0x2ddb,	// (0x00017185) list_ai_message_pane_t2_ParamLimits

0x2ddb,	// (0x00017185) list_ai_message_pane_t2

0x2df0,	// (0x0001719a) list_ai_message_pane_t3_ParamLimits

0x2df0,	// (0x0001719a) list_ai_message_pane_t3

0x2e05,	// (0x000171af) list_ai_message_pane_t4_ParamLimits

0x2e05,	// (0x000171af) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x00023cd3) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x00023cd3) list_ai_message_pane_t

0xb2cb,	// (0x0001f675) cell_ai_soft_ind_pane_ParamLimits

0xb2cb,	// (0x0001f675) cell_ai_soft_ind_pane

0x132a,	// (0x000156d4) cell_ai_soft_ind_pane_g1_ParamLimits

0x132a,	// (0x000156d4) cell_ai_soft_ind_pane_g1

0xc17b,	// (0x00020525) grid_highlight_cp1

0x1337,	// (0x000156e1) text_secondary_cp56_ParamLimits

0x1337,	// (0x000156e1) text_secondary_cp56

0x2d74,	// (0x0001711e) example_general_pane_ParamLimits

0x2d74,	// (0x0001711e) example_general_pane

0x2d80,	// (0x0001712a) example_parent_pane_g1_ParamLimits

0x2d80,	// (0x0001712a) example_parent_pane_g1

0x2d8c,	// (0x00017136) example_parent_pane_t1_ParamLimits

0x2d8c,	// (0x00017136) example_parent_pane_t1

0x9304,	// (0x0001d6ae) popup_preview_text_window_ParamLimits

0x9304,	// (0x0001d6ae) popup_preview_text_window

0x115d,	// (0x00015507) list_single_pane_cp2_g4

0xc3f2,	// (0x0002079c) bg_popup_preview_window_pane_ParamLimits

0xc3f2,	// (0x0002079c) bg_popup_preview_window_pane

0x2ac8,	// (0x00016e72) popup_preview_text_window_t1_ParamLimits

0x2ac8,	// (0x00016e72) popup_preview_text_window_t1

0x2ae6,	// (0x00016e90) popup_preview_text_window_t2_ParamLimits

0x2ae6,	// (0x00016e90) popup_preview_text_window_t2

0x2b2f,	// (0x00016ed9) popup_preview_text_window_t3_ParamLimits

0x2b2f,	// (0x00016ed9) popup_preview_text_window_t3

0x2b74,	// (0x00016f1e) popup_preview_text_window_t4_ParamLimits

0x2b74,	// (0x00016f1e) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00023ca2) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00023ca2) popup_preview_text_window_t

0x2bf2,	// (0x00016f9c) scroll_pane_cp11

0x1ab7,	// (0x00015e61) bg_popup_preview_window_pane_g1

0x2a7c,	// (0x00016e26) bg_popup_preview_window_pane_g2

0x2a86,	// (0x00016e30) bg_popup_preview_window_pane_g3

0x2a90,	// (0x00016e3a) bg_popup_preview_window_pane_g4

0x2a9a,	// (0x00016e44) bg_popup_preview_window_pane_g5

0x2aa4,	// (0x00016e4e) bg_popup_preview_window_pane_g6

0x2aac,	// (0x00016e56) bg_popup_preview_window_pane_g7

0x2ab4,	// (0x00016e5e) bg_popup_preview_window_pane_g8

0xdccf,	// (0x00022079) aid_popup_width_pane

0x9274,	// (0x0001d61e) popup_midp_note_alarm_window_ParamLimits

0x9274,	// (0x0001d61e) popup_midp_note_alarm_window

0xc89d,	// (0x00020c47) data_form_pane_ParamLimits

0xa65e,	// (0x0001ea08) form_field_data_pane_g1

0xa668,	// (0x0001ea12) form_field_data_pane_t1_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_ParamLimits

0xc8b7,	// (0x00020c61) data_form_wide_pane_ParamLimits

0xc8c3,	// (0x00020c6d) form_field_data_wide_pane_g1

0xc8ef,	// (0x00020c99) form_field_data_wide_pane_t1_ParamLimits

0xc5aa,	// (0x00020954) input_focus_pane_cp6_ParamLimits

0xa7a9,	// (0x0001eb53) input_popup_find_pane_g1_ParamLimits

0xa7a9,	// (0x0001eb53) input_popup_find_pane_g1

0xe08f,	// (0x00022439) aid_navi_side_left_pane

0xe0a4,	// (0x0002244e) aid_navi_side_right_pane

0x2491,	// (0x0001683b) bg_popup_window_pane_cp30_ParamLimits

0x2491,	// (0x0001683b) bg_popup_window_pane_cp30

0x250b,	// (0x000168b5) popup_midp_note_alarm_window_g1_ParamLimits

0x250b,	// (0x000168b5) popup_midp_note_alarm_window_g1

0x253b,	// (0x000168e5) popup_midp_note_alarm_window_t1_ParamLimits

0x253b,	// (0x000168e5) popup_midp_note_alarm_window_t1

0x25dc,	// (0x00016986) popup_midp_note_alarm_window_t2_ParamLimits

0x25dc,	// (0x00016986) popup_midp_note_alarm_window_t2

0x268a,	// (0x00016a34) popup_midp_note_alarm_window_t3_ParamLimits

0x268a,	// (0x00016a34) popup_midp_note_alarm_window_t3

0x26bc,	// (0x00016a66) popup_midp_note_alarm_window_t4_ParamLimits

0x26bc,	// (0x00016a66) popup_midp_note_alarm_window_t4

0x26e2,	// (0x00016a8c) popup_midp_note_alarm_window_t5_ParamLimits

0x26e2,	// (0x00016a8c) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x00023c3f) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x00023c3f) popup_midp_note_alarm_window_t

0x278e,	// (0x00016b38) wait_bar_pane_cp1_ParamLimits

0x278e,	// (0x00016b38) wait_bar_pane_cp1

0xc17b,	// (0x00020525) wait_anim_pane_copy1

0xc17b,	// (0x00020525) wait_border_pane_copy1

0x2176,	// (0x00016520) wait_border_pane_g1_copy1

0xc906,	// (0x00020cb0) form_field_popup_pane_g1

0xa682,	// (0x0001ea2c) form_field_popup_pane_t1_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_cp7_ParamLimits

0xc90e,	// (0x00020cb8) list_form_pane_ParamLimits

0xc91a,	// (0x00020cc4) form_field_popup_wide_pane_g1

0xc922,	// (0x00020ccc) form_field_popup_wide_pane_t1_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_cp8_ParamLimits

0xc934,	// (0x00020cde) list_form_wide_pane_ParamLimits

0xb4e5,	// (0x0001f88f) aid_size_cell_graphic_pane

0xa701,	// (0x0001eaab) data_form_pane_t1_ParamLimits

0xb3c2,	// (0x0001f76c) data_form_wide_pane_t1_ParamLimits

0xad3e,	// (0x0001f0e8) bg_status_flat_pane

0x9e87,	// (0x0001e231) title_pane_t1_ParamLimits

0xc191,	// (0x0002053b) title_pane_t2_ParamLimits

0xc1b7,	// (0x00020561) title_pane_t3_ParamLimits

0xf557,	// (0x00023901) title_pane_t_ParamLimits

0xa8cb,	// (0x0001ec75) level_1_signal_ParamLimits

0xa8dd,	// (0x0001ec87) level_2_signal_ParamLimits

0xa8f0,	// (0x0001ec9a) level_3_signal_ParamLimits

0xa903,	// (0x0001ecad) level_4_signal_ParamLimits

0xa916,	// (0x0001ecc0) level_5_signal_ParamLimits

0xa929,	// (0x0001ecd3) level_6_signal_ParamLimits

0xa93c,	// (0x0001ece6) level_7_signal_ParamLimits

0xa8cb,	// (0x0001ec75) level_1_battery_ParamLimits

0xa8dd,	// (0x0001ec87) level_2_battery_ParamLimits

0xa8f0,	// (0x0001ec9a) level_3_battery_ParamLimits

0xa903,	// (0x0001ecad) level_4_battery_ParamLimits

0xa916,	// (0x0001ecc0) level_5_battery_ParamLimits

0xa929,	// (0x0001ecd3) level_6_battery_ParamLimits

0xa93c,	// (0x0001ece6) level_7_battery_ParamLimits

0x2396,	// (0x00016740) bg_status_flat_pane_g1

0x239e,	// (0x00016748) bg_status_flat_pane_g2

0x23a6,	// (0x00016750) bg_status_flat_pane_g3

0x23ae,	// (0x00016758) bg_status_flat_pane_g4

0x23b6,	// (0x00016760) bg_status_flat_pane_g5

0x23be,	// (0x00016768) bg_status_flat_pane_g6

0x23c6,	// (0x00016770) bg_status_flat_pane_g7

0x9f1b,	// (0x0001e2c5) tabs_3_active_pane_t1_ParamLimits

0x9f1b,	// (0x0001e2c5) tabs_3_passive_pane_t1_ParamLimits

0x9f35,	// (0x0001e2df) tabs_4_active_pane_t1_ParamLimits

0x9f35,	// (0x0001e2df) tabs_4_1_passive_pane_t1_ParamLimits

0xa7bf,	// (0x0001eb69) tabs_2_active_pane_t1_ParamLimits

0xa7bf,	// (0x0001eb69) tabs_2_passive_pane_t1_ParamLimits

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp4_ParamLimits

0xa7d1,	// (0x0001eb7b) tabs_2_long_active_pane_t1_ParamLimits

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp4_ParamLimits

0xea18,	// (0x00022dc2) list_single_midp_graphic_pane_t1_ParamLimits

0xc1d7,	// (0x00020581) bg_active_tab_pane_cp5_ParamLimits

0xa7e4,	// (0x0001eb8e) tabs_3_long_active_pane_t1_ParamLimits

0x1551,	// (0x000158fb) bg_passive_tab_pane_cp5_ParamLimits

0xea18,	// (0x00022dc2) list_single_midp_graphic_pane_t1

0xad3e,	// (0x0001f0e8) bg_status_flat_pane_ParamLimits

0x170d,	// (0x00015ab7) indicator_pane_cp2_ParamLimits

0x170d,	// (0x00015ab7) indicator_pane_cp2

0xaed4,	// (0x0001f27e) navi_pane_srt_ParamLimits

0xaed4,	// (0x0001f27e) navi_pane_srt

0x1874,	// (0x00015c1e) popup_clock_digital_analogue_window_cp1

0xc235,	// (0x000205df) indicator_pane_t1

0x1222,	// (0x000155cc) copy_highlight_pane

0x1222,	// (0x000155cc) cursor_graphics_pane

0x1222,	// (0x000155cc) graphic_within_text_pane

0x1222,	// (0x000155cc) link_highlight_pane

0x2bb5,	// (0x00016f5f) popup_preview_text_window_t5_ParamLimits

0x2bb5,	// (0x00016f5f) popup_preview_text_window_t5

0x1353,	// (0x000156fd) cursor_digital_pane

0x1353,	// (0x000156fd) cursor_primary_pane

0x1364,	// (0x0001570e) cursor_primary_small_pane

0x136c,	// (0x00015716) cursor_secondary_pane

0x1374,	// (0x0001571e) cursor_title_pane

0x1353,	// (0x000156fd) link_highlight_digital_pane

0x135b,	// (0x00015705) link_highlight_primary_pane

0x1364,	// (0x0001570e) link_highlight_primary_small_pane

0x136c,	// (0x00015716) link_highlight_secondary_pane

0x1374,	// (0x0001571e) link_highlight_title_pane

0x1353,	// (0x000156fd) copy_highlight_digital_pane

0x1353,	// (0x000156fd) copy_highlight_primary_pane

0x1364,	// (0x0001570e) copy_highlight_primary_small_pane

0x136c,	// (0x00015716) copy_highlight_secondary_pane

0x1374,	// (0x0001571e) copy_highlight_title_pane

0x136c,	// (0x00015716) graphic_text_digital_pane

0x2434,	// (0x000167de) graphic_text_primary_pane

0x243d,	// (0x000167e7) graphic_text_primary_small_pane

0x1364,	// (0x0001570e) graphic_text_secondary_pane

0x1353,	// (0x000156fd) graphic_text_title_pane

0xab78,	// (0x0001ef22) cursor_primary_pane_g1

0x2426,	// (0x000167d0) cursor_text_primary_t1

0xb14b,	// (0x0001f4f5) cursor_primary_small_pane_g1

0x2418,	// (0x000167c2) cursor_text_primary_small_t1

0xb141,	// (0x0001f4eb) cursor_primary_small_pane_g1_copy1

0x2400,	// (0x000167aa) cursor_text_primary_small_t1_copy1

0x23de,	// (0x00016788) cursor_text_title_t1

0xb137,	// (0x0001f4e1) cursor_title_pane_g1

0xab78,	// (0x0001ef22) cursor_digital_pane_g1

0x1386,	// (0x00015730) cursor_text_digital_t1

0x1394,	// (0x0001573e) link_highlight_primary_pane_g1

0x2387,	// (0x00016731) link_highlight_primary_pane_t1

0x1394,	// (0x0001573e) link_highlight_primary_small_pane_g1

0x139c,	// (0x00015746) link_highlight_primary_small_pane_t1

0x13ab,	// (0x00015755) link_highlight_secondary_pane_g1

0x13b3,	// (0x0001575d) link_highlight_secondary_pane_t1

0x22fb,	// (0x000166a5) link_highlight_title_pane_g1

0x2303,	// (0x000166ad) link_highlight_title_pane_t1

0x22e4,	// (0x0001668e) link_highlight_digital_pane_g1

0x22ec,	// (0x00016696) link_highlight_digital_pane_t1

0x21ac,	// (0x00016556) copy_highlight_primary_pane_g1

0x21c3,	// (0x0001656d) copy_highlight_primary_pane_t1

0x21ac,	// (0x00016556) copy_highlight_primary_small_pane_g1

0x21b4,	// (0x0001655e) copy_highlight_primary_small_pane_t1

0x13c2,	// (0x0001576c) copy_highlight_secondary_pane_g1

0x13ca,	// (0x00015774) copy_highlight_secondary_pane_t1

0x2195,	// (0x0001653f) copy_highlight_title_pane_g1

0x219d,	// (0x00016547) copy_highlight_title_pane_t1

0x21ac,	// (0x00016556) copy_highlight_digital_pane_g1

0x354d,	// (0x000178f7) copy_highlight_digital_pane_t1

0x34a1,	// (0x0001784b) graphic_text_primary_pane_g1

0x3531,	// (0x000178db) graphic_text_primary_pane_t1

0x353f,	// (0x000178e9) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x00023d6e) graphic_text_primary_pane_t

0x350d,	// (0x000178b7) graphic_text_primary_small_pane_g1

0x3515,	// (0x000178bf) graphic_text_primary_small_pane_t1

0x3523,	// (0x000178cd) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x00023d69) graphic_text_primary_small_pane_t

0x34e9,	// (0x00017893) graphic_text_secondary_pane_g1

0x34f1,	// (0x0001789b) graphic_text_secondary_pane_t1

0x34ff,	// (0x000178a9) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00023d64) graphic_text_secondary_pane_t

0x34c5,	// (0x0001786f) graphic_text_title_pane_g1

0x34cd,	// (0x00017877) graphic_text_title_pane_t1

0x34db,	// (0x00017885) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x00023d5f) graphic_text_title_pane_t

0x34a1,	// (0x0001784b) graphic_text_digital_pane_g1

0x34a9,	// (0x00017853) graphic_text_digital_pane_t1

0x34b7,	// (0x00017861) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x00023d5a) graphic_text_digital_pane_t

0xc1d7,	// (0x00020581) navi_icon_pane_srt_ParamLimits

0xc1d7,	// (0x00020581) navi_icon_pane_srt

0xc17b,	// (0x00020525) navi_midp_pane_srt

0xc17b,	// (0x00020525) navi_navi_pane_srt

0xc1d7,	// (0x00020581) navi_text_pane_srt_ParamLimits

0xc1d7,	// (0x00020581) navi_text_pane_srt

0x346c,	// (0x00017816) navi_navi_icon_text_pane_srt

0x3474,	// (0x0001781e) navi_navi_pane_srt_g1_ParamLimits

0x3474,	// (0x0001781e) navi_navi_pane_srt_g1

0x3486,	// (0x00017830) navi_navi_pane_srt_g2_ParamLimits

0x3486,	// (0x00017830) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00023d55) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00023d55) navi_navi_pane_srt_g

0x3498,	// (0x00017842) navi_navi_tabs_pane_srt

0x346c,	// (0x00017816) navi_navi_text_pane_srt

0x346c,	// (0x00017816) navi_navi_volume_pane_srt

0x345d,	// (0x00017807) navi_navi_text_pane_srt_t1

0xebf2,	// (0x00022f9c) navi_navi_volume_pane_srt_g1

0xebfa,	// (0x00022fa4) volume_small_pane_srt_ParamLimits

0xebfa,	// (0x00022fa4) volume_small_pane_srt

0xe6f5,	// (0x00022a9f) volume_small_pane_srt_g1_ParamLimits

0xe6f5,	// (0x00022a9f) volume_small_pane_srt_g1

0xe705,	// (0x00022aaf) volume_small_pane_srt_g2_ParamLimits

0xe705,	// (0x00022aaf) volume_small_pane_srt_g2

0xe716,	// (0x00022ac0) volume_small_pane_srt_g3_ParamLimits

0xe716,	// (0x00022ac0) volume_small_pane_srt_g3

0xe727,	// (0x00022ad1) volume_small_pane_srt_g4_ParamLimits

0xe727,	// (0x00022ad1) volume_small_pane_srt_g4

0xe738,	// (0x00022ae2) volume_small_pane_srt_g5_ParamLimits

0xe738,	// (0x00022ae2) volume_small_pane_srt_g5

0xe749,	// (0x00022af3) volume_small_pane_srt_g6_ParamLimits

0xe749,	// (0x00022af3) volume_small_pane_srt_g6

0xe75a,	// (0x00022b04) volume_small_pane_srt_g7_ParamLimits

0xe75a,	// (0x00022b04) volume_small_pane_srt_g7

0xe76b,	// (0x00022b15) volume_small_pane_srt_g8_ParamLimits

0xe76b,	// (0x00022b15) volume_small_pane_srt_g8

0xe77c,	// (0x00022b26) volume_small_pane_srt_g9_ParamLimits

0xe77c,	// (0x00022b26) volume_small_pane_srt_g9

0xe78d,	// (0x00022b37) volume_small_pane_srt_g10_ParamLimits

0xe78d,	// (0x00022b37) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00023b02) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00023b02) volume_small_pane_srt_g

0xc4a7,	// (0x00020851) query_popup_data_pane_cp2

0x3443,	// (0x000177ed) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3443,	// (0x000177ed) navi_navi_icon_text_pane_srt_t1

0x2434,	// (0x000167de) navi_tabs_2_long_pane_srt

0x2434,	// (0x000167de) navi_tabs_2_pane_srt

0x2434,	// (0x000167de) navi_tabs_3_long_pane_srt

0x2434,	// (0x000167de) navi_tabs_3_pane_srt

0x2434,	// (0x000167de) navi_tabs_4_pane_srt

0xebd2,	// (0x00022f7c) tabs_2_active_pane_srt_ParamLimits

0xebd2,	// (0x00022f7c) tabs_2_active_pane_srt

0xebe2,	// (0x00022f8c) tabs_2_passive_pane_srt_ParamLimits

0xebe2,	// (0x00022f8c) tabs_2_passive_pane_srt

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp1_srt

0x340f,	// (0x000177b9) bg_passive_tab_pane_g1_cp1_srt

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp1_srt

0x3418,	// (0x000177c2) bg_passive_tab_pane_g3_cp1_srt

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp1_srt_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp1_srt

0x3421,	// (0x000177cb) tabs_2_active_pane_srt_g1

0xb527,	// (0x0001f8d1) tabs_2_active_pane_srt_t1_ParamLimits

0xb527,	// (0x0001f8d1) tabs_2_active_pane_srt_t1

0x340f,	// (0x000177b9) bg_active_tab_pane_g1_cp1_srt

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp1_srt

0x3418,	// (0x000177c2) bg_active_tab_pane_g3_cp1_srt

0xeb9f,	// (0x00022f49) tabs_3_active_pane_srt_ParamLimits

0xeb9f,	// (0x00022f49) tabs_3_active_pane_srt

0xebb0,	// (0x00022f5a) tabs_3_passive_pane_cp_srt_ParamLimits

0xebb0,	// (0x00022f5a) tabs_3_passive_pane_cp_srt

0xebc1,	// (0x00022f6b) tabs_3_passive_pane_srt_ParamLimits

0xebc1,	// (0x00022f6b) tabs_3_passive_pane_srt

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1bdb,	// (0x00015f85) bg_passive_tab_pane_cp2_srt

0x13d9,	// (0x00015783) bg_passive_tab_pane_g1_cp2_srt

0x0e6e,	// (0x00015218) bg_passive_tab_pane_g2_cp2_srt

0x13e2,	// (0x0001578c) bg_passive_tab_pane_g3_cp2_srt

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp2_srt_ParamLimits

0xc1c9,	// (0x00020573) bg_active_tab_pane_cp2_srt

0x33f5,	// (0x0001779f) tabs_3_active_pane_srt_g1

0xb511,	// (0x0001f8bb) tabs_3_active_pane_srt_t1_ParamLimits

0xb511,	// (0x0001f8bb) tabs_3_active_pane_srt_t1

0x13d9,	// (0x00015783) bg_active_tab_pane_g1_cp2_srt

0x0e6e,	// (0x00015218) bg_active_tab_pane_g2_cp2_srt

0x13e2,	// (0x0001578c) bg_active_tab_pane_g3_cp2_srt

0xeb57,	// (0x00022f01) tabs_4_active_pane_srt_ParamLimits

0xeb57,	// (0x00022f01) tabs_4_active_pane_srt

0xeb69,	// (0x00022f13) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeb69,	// (0x00022f13) tabs_4_passive_pane_cp2_srt

0xe7ad,	// (0x00022b57) aid_size_cell_toolbar

0x2f88,	// (0x00017332) main_idle_act_pane_ParamLimits

0xe875,	// (0x00022c1f) popup_large_graphic_colour_window_ParamLimits

0x95c8,	// (0x0001d972) popup_toolbar_window_ParamLimits

0x95c8,	// (0x0001d972) popup_toolbar_window

0x31a4,	// (0x0001754e) list_single_graphic_2heading_pane_ParamLimits

0x31a4,	// (0x0001754e) list_single_graphic_2heading_pane

0xe11d,	// (0x000224c7) aid_size_cell_apps_grid_lsc_pane

0xe12f,	// (0x000224d9) aid_size_cell_apps_grid_prt_pane

0x1551,	// (0x000158fb) bg_wml_button_pane_cp1_ParamLimits

0x1551,	// (0x000158fb) bg_wml_button_pane_cp1

0xb0d6,	// (0x0001f480) form_midp_field_text_pane_t1_ParamLimits

0x1bdb,	// (0x00015f85) input_focus_pane_cp050_ParamLimits

0x1e23,	// (0x000161cd) list_midp_form_text_pane_ParamLimits

0x1dd5,	// (0x0001617f) input_focus_pane_cp051_ParamLimits

0x1de9,	// (0x00016193) list_midp_choice_pane_ParamLimits

0x1c94,	// (0x0001603e) list_single_2graphic_pane_cp3_ParamLimits

0x1c94,	// (0x0001603e) list_single_2graphic_pane_cp3

0x1caa,	// (0x00016054) list_single_midp_graphic_pane_ParamLimits

0x1caa,	// (0x00016054) list_single_midp_graphic_pane

0xe92d,	// (0x00022cd7) list_single_graphic_2heading_pane_g1_ParamLimits

0xe92d,	// (0x00022cd7) list_single_graphic_2heading_pane_g1

0xe939,	// (0x00022ce3) list_single_graphic_2heading_pane_g4_ParamLimits

0xe939,	// (0x00022ce3) list_single_graphic_2heading_pane_g4

0xe945,	// (0x00022cef) list_single_graphic_2heading_pane_g5_ParamLimits

0xe945,	// (0x00022cef) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00023b55) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00023b55) list_single_graphic_2heading_pane_g

0xe951,	// (0x00022cfb) list_single_graphic_2heading_pane_t1_ParamLimits

0xe951,	// (0x00022cfb) list_single_graphic_2heading_pane_t1

0xe965,	// (0x00022d0f) list_single_graphic_2heading_pane_t2_ParamLimits

0xe965,	// (0x00022d0f) list_single_graphic_2heading_pane_t2

0xe981,	// (0x00022d2b) list_single_graphic_2heading_pane_t3_ParamLimits

0xe981,	// (0x00022d2b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00023b5c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00023b5c) list_single_graphic_2heading_pane_t

0x19c7,	// (0x00015d71) bg_popup_sub_pane_cp2

0x19f1,	// (0x00015d9b) grid_toobar_pane

0xe999,	// (0x00022d43) cell_toolbar_pane_ParamLimits

0xe999,	// (0x00022d43) cell_toolbar_pane

0x1a5b,	// (0x00015e05) cell_toolbar_pane_g1_ParamLimits

0x1a5b,	// (0x00015e05) cell_toolbar_pane_g1

0x1a6f,	// (0x00015e19) cell_toolbar_pane_g2_ParamLimits

0x1a6f,	// (0x00015e19) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00023b6a) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00023b6a) cell_toolbar_pane_g

0x1a91,	// (0x00015e3b) grid_highlight_pane_cp2_ParamLimits

0x1a91,	// (0x00015e3b) grid_highlight_pane_cp2

0x1aab,	// (0x00015e55) toolbar_button_pane

0x1ab7,	// (0x00015e61) toolbar_button_pane_g1

0x1abf,	// (0x00015e69) toolbar_button_pane_g2

0x1ac7,	// (0x00015e71) toolbar_button_pane_g3

0x1acf,	// (0x00015e79) toolbar_button_pane_g4

0x1ad7,	// (0x00015e81) toolbar_button_pane_g5

0x1adf,	// (0x00015e89) toolbar_button_pane_g6

0x1ae7,	// (0x00015e91) toolbar_button_pane_g7

0x1aef,	// (0x00015e99) toolbar_button_pane_g8

0x1af7,	// (0x00015ea1) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00023b6f) toolbar_button_pane_g

0xe9d1,	// (0x00022d7b) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe9d1,	// (0x00022d7b) list_single_2graphic_pane_g1_cp3

0x9620,	// (0x0001d9ca) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9620,	// (0x0001d9ca) list_single_2graphic_pane_g2_cp3

0xe9dd,	// (0x00022d87) list_single_2graphic_pane_g3_cp3

0xe9e5,	// (0x00022d8f) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe9e5,	// (0x00022d8f) list_single_2graphic_pane_g4_cp3

0xe9f1,	// (0x00022d9b) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe9f1,	// (0x00022d9b) list_single_2graphic_pane_t1_cp3

0xea0c,	// (0x00022db6) list_single_midp_graphic_pane_g2_ParamLimits

0xea0c,	// (0x00022db6) list_single_midp_graphic_pane_g2

0xe7b5,	// (0x00022b5f) aid_zoom_text_primary

0xe7bd,	// (0x00022b67) aid_zoom_text_secondary

0xabd0,	// (0x0001ef7a) status_small_pane_g7_ParamLimits

0xabd0,	// (0x0001ef7a) status_small_pane_g7

0xabf3,	// (0x0001ef9d) status_small_pane_t1_ParamLimits

0x9e57,	// (0x0001e201) title_pane_g2

0x0003,

0xf54e,	// (0x000238f8) title_pane_g

0xa0f7,	// (0x0001e4a1) aid_size_cell_colour_1_pane_ParamLimits

0xa0f7,	// (0x0001e4a1) aid_size_cell_colour_1_pane

0xa10b,	// (0x0001e4b5) aid_size_cell_colour_2_pane_ParamLimits

0xa10b,	// (0x0001e4b5) aid_size_cell_colour_2_pane

0xa11f,	// (0x0001e4c9) aid_size_cell_colour_3_pane_ParamLimits

0xa11f,	// (0x0001e4c9) aid_size_cell_colour_3_pane

0xa133,	// (0x0001e4dd) aid_size_cell_colour_4_pane_ParamLimits

0xa133,	// (0x0001e4dd) aid_size_cell_colour_4_pane

0xdf96,	// (0x00022340) title_pane_stacon_g1_ParamLimits

0xdf96,	// (0x00022340) title_pane_stacon_g1

0x221a,	// (0x000165c4) popup_note_wait_window_g3_ParamLimits

0x221a,	// (0x000165c4) popup_note_wait_window_g3

0x2291,	// (0x0001663b) popup_note_wait_window_t5_ParamLimits

0x2291,	// (0x0001663b) popup_note_wait_window_t5

0xc17b,	// (0x00020525) main_feb_china_hwr_fs_writing_pane

0x8f61,	// (0x0001d30b) popup_feb_china_hwr_fs_window_ParamLimits

0x8f61,	// (0x0001d30b) popup_feb_china_hwr_fs_window

0x9631,	// (0x0001d9db) aid_size_cell_hwr_fs_ParamLimits

0x9631,	// (0x0001d9db) aid_size_cell_hwr_fs

0x1bdb,	// (0x00015f85) bg_popup_sub_pane_cp3_ParamLimits

0x1bdb,	// (0x00015f85) bg_popup_sub_pane_cp3

0x9646,	// (0x0001d9f0) grid_hwr_fs_pane_ParamLimits

0x9646,	// (0x0001d9f0) grid_hwr_fs_pane

0xea2e,	// (0x00022dd8) linegrid_hwr_fs_pane_ParamLimits

0xea2e,	// (0x00022dd8) linegrid_hwr_fs_pane

0x965e,	// (0x0001da08) cell_hwr_fs_pane_ParamLimits

0x965e,	// (0x0001da08) cell_hwr_fs_pane

0x1be7,	// (0x00015f91) linegrid_hwr_fs_pane_g1_ParamLimits

0x1be7,	// (0x00015f91) linegrid_hwr_fs_pane_g1

0xb077,	// (0x0001f421) linegrid_hwr_fs_pane_g2_ParamLimits

0xb077,	// (0x0001f421) linegrid_hwr_fs_pane_g2

0x1c05,	// (0x00015faf) linegrid_hwr_fs_pane_g3_ParamLimits

0x1c05,	// (0x00015faf) linegrid_hwr_fs_pane_g3

0xea3e,	// (0x00022de8) linegrid_hwr_fs_pane_g4_ParamLimits

0xea3e,	// (0x00022de8) linegrid_hwr_fs_pane_g4

0xea5c,	// (0x00022e06) linegrid_hwr_fs_pane_g5_ParamLimits

0xea5c,	// (0x00022e06) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00023b95) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00023b95) linegrid_hwr_fs_pane_g

0x1c11,	// (0x00015fbb) cell_hwr_fs_pane_g1_ParamLimits

0x1c11,	// (0x00015fbb) cell_hwr_fs_pane_g1

0x1902,	// (0x00015cac) cell_hwr_fs_pane_g2_ParamLimits

0x1902,	// (0x00015cac) cell_hwr_fs_pane_g2

0xb089,	// (0x0001f433) cell_hwr_fs_pane_g3_ParamLimits

0xb089,	// (0x0001f433) cell_hwr_fs_pane_g3

0xb096,	// (0x0001f440) cell_hwr_fs_pane_g4_ParamLimits

0xb096,	// (0x0001f440) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x00023ba0) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00023ba0) cell_hwr_fs_pane_g

0x9684,	// (0x0001da2e) cell_hwr_fs_pane_t1

0xc17b,	// (0x00020525) grid_highlight_pane_cp6

0xc17b,	// (0x00020525) main_idle_act2_pane

0xca4b,	// (0x00020df5) aid_inside_area_popup_secondary

0xb16b,	// (0x0001f515) aid_inside_area_window_primary_ParamLimits

0xb16b,	// (0x0001f515) aid_inside_area_window_primary

0x355c,	// (0x00017906) ai2_news_ticker_pane

0x3564,	// (0x0001790e) aid_size_cell_ai1_link_ParamLimits

0x3564,	// (0x0001790e) aid_size_cell_ai1_link

0x357e,	// (0x00017928) popup_ai2_data_window_ParamLimits

0x357e,	// (0x00017928) popup_ai2_data_window

0x359c,	// (0x00017946) popup_ai2_link_window_ParamLimits

0x359c,	// (0x00017946) popup_ai2_link_window

0x1bdb,	// (0x00015f85) bg_popup_sub_pane_cp4_ParamLimits

0x1bdb,	// (0x00015f85) bg_popup_sub_pane_cp4

0x35b2,	// (0x0001795c) grid_ai2_link_pane_ParamLimits

0x35b2,	// (0x0001795c) grid_ai2_link_pane

0x35c9,	// (0x00017973) popup_ai2_link_window_g1_ParamLimits

0x35c9,	// (0x00017973) popup_ai2_link_window_g1

0x35d5,	// (0x0001797f) popup_ai2_link_window_g2_ParamLimits

0x35d5,	// (0x0001797f) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00023d73) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00023d73) popup_ai2_link_window_g

0x35e6,	// (0x00017990) ai2_mp_button_pane

0x35ee,	// (0x00017998) ai2_mp_volume_pane

0x1dd5,	// (0x0001617f) bg_popup_sub_pane_cp5_ParamLimits

0x1dd5,	// (0x0001617f) bg_popup_sub_pane_cp5

0x35f6,	// (0x000179a0) heading_ai2_gene_pane_ParamLimits

0x35f6,	// (0x000179a0) heading_ai2_gene_pane

0x3602,	// (0x000179ac) list_ai2_gene_pane_ParamLimits

0x3602,	// (0x000179ac) list_ai2_gene_pane

0x364a,	// (0x000179f4) cell_ai2_link_pane_ParamLimits

0x364a,	// (0x000179f4) cell_ai2_link_pane

0x3660,	// (0x00017a0a) cell_ai2_link_pane_g1

0xc17b,	// (0x00020525) grid_highlight_pane_cp7

0xec0f,	// (0x00022fb9) ai2_mp_volume_pane_g1

0x3733,	// (0x00017add) ai2_mp_volume_pane_g2

0x36a8,	// (0x00017a52) list_ai2_gene_pane_t1

0x373b,	// (0x00017ae5) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x00023d8c) ai2_mp_volume_pane_g

0xec17,	// (0x00022fc1) volume_small_pane_cp3

0x3743,	// (0x00017aed) aid_size_cell_ai2_button

0x374b,	// (0x00017af5) grid_ai2_button_pane

0x3754,	// (0x00017afe) cell_ai2_button_pane_ParamLimits

0x3754,	// (0x00017afe) cell_ai2_button_pane

0xc171,	// (0x0002051b) cell_ai2_button_pane_g1

0xc17b,	// (0x00020525) grid_highlight_pane_cp8

0x36f3,	// (0x00017a9d) ai2_gene_pane_t1_ParamLimits

0x36f3,	// (0x00017a9d) ai2_gene_pane_t1

0x8ee5,	// (0x0001d28f) aid_height_parent_landscape

0xb312,	// (0x0001f6bc) aid_height_set_list

0x2f88,	// (0x00017332) aid_size_parent

0xb4e5,	// (0x0001f88f) aid_size_cell_graphic_pane_ParamLimits

0x3612,	// (0x000179bc) popup_ai2_data_window_g1_ParamLimits

0x3612,	// (0x000179bc) popup_ai2_data_window_g1

0x361e,	// (0x000179c8) ai2_news_ticker_pane_g1

0x3626,	// (0x000179d0) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00023d78) ai2_news_ticker_pane_g

0x362e,	// (0x000179d8) ai2_news_ticker_pane_t1

0x363c,	// (0x000179e6) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x00023d7d) ai2_news_ticker_pane_t

0x3669,	// (0x00017a13) heading_ai2_gene_pane_g1

0x3671,	// (0x00017a1b) heading_ai2_gene_pane_t1_ParamLimits

0x3671,	// (0x00017a1b) heading_ai2_gene_pane_t1

0x3686,	// (0x00017a30) list_highlight_pane_cp6

0x368e,	// (0x00017a38) ai2_gene_pane_ParamLimits

0x368e,	// (0x00017a38) ai2_gene_pane

0x36b6,	// (0x00017a60) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00023d82) list_ai2_gene_pane_t

0x36c4,	// (0x00017a6e) list_highlight_pane_cp8_ParamLimits

0x36c4,	// (0x00017a6e) list_highlight_pane_cp8

0x36d5,	// (0x00017a7f) ai2_gene_pane_g1_ParamLimits

0x36d5,	// (0x00017a7f) ai2_gene_pane_g1

0x36e7,	// (0x00017a91) ai2_gene_pane_g2_ParamLimits

0x36e7,	// (0x00017a91) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00023d87) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00023d87) ai2_gene_pane_g

0xc7c5,	// (0x00020b6f) scroll_pane_cp12

0x8ea2,	// (0x0001d24c) control_pane_t3_ParamLimits

0x8ea2,	// (0x0001d24c) control_pane_t3

0xabe4,	// (0x0001ef8e) status_small_pane_g8_ParamLimits

0xabe4,	// (0x0001ef8e) status_small_pane_g8

0x9003,	// (0x0001d3ad) popup_find_window_ParamLimits

0x92b4,	// (0x0001d65e) popup_note_image_window_ParamLimits

0x1a2d,	// (0x00015dd7) list_double2_graphic_pane_vc_g1_ParamLimits

0x1a2d,	// (0x00015dd7) list_double2_graphic_pane_vc_g1

0x1193,	// (0x0001553d) list_double2_graphic_pane_vc_g2_ParamLimits

0x1193,	// (0x0001553d) list_double2_graphic_pane_vc_g2

0x1a39,	// (0x00015de3) list_double2_graphic_pane_vc_g3_ParamLimits

0x1a39,	// (0x00015de3) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00023b63) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00023b63) list_double2_graphic_pane_vc_g

0x1a45,	// (0x00015def) list_double2_graphic_pane_vc_t1_ParamLimits

0x1a45,	// (0x00015def) list_double2_graphic_pane_vc_t1

0x1193,	// (0x0001553d) list_single_heading_pane_vc_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_heading_pane_vc_g1

0x1a39,	// (0x00015de3) list_single_heading_pane_vc_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_heading_pane_vc_g

0x1aff,	// (0x00015ea9) list_single_heading_pane_vc_t1_ParamLimits

0x1aff,	// (0x00015ea9) list_single_heading_pane_vc_t1

0x1b15,	// (0x00015ebf) list_single_heading_pane_vc_t2_ParamLimits

0x1b15,	// (0x00015ebf) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00023b84) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00023b84) list_single_heading_pane_vc_t

0x1b27,	// (0x00015ed1) list_setting_number_pane_vc_g1_ParamLimits

0x1b27,	// (0x00015ed1) list_setting_number_pane_vc_g1

0x1b33,	// (0x00015edd) list_setting_number_pane_vc_g2_ParamLimits

0x1b33,	// (0x00015edd) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00023b89) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00023b89) list_setting_number_pane_vc_g

0x1b3f,	// (0x00015ee9) list_setting_number_pane_vc_t1_ParamLimits

0x1b3f,	// (0x00015ee9) list_setting_number_pane_vc_t1

0x1b53,	// (0x00015efd) list_setting_number_pane_vc_t2_ParamLimits

0x1b53,	// (0x00015efd) list_setting_number_pane_vc_t2

0x1b6f,	// (0x00015f19) list_setting_number_pane_vc_t3_ParamLimits

0x1b6f,	// (0x00015f19) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x00023b8e) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x00023b8e) list_setting_number_pane_vc_t

0x1b9d,	// (0x00015f47) set_value_pane_vc_ParamLimits

0x1b9d,	// (0x00015f47) set_value_pane_vc

0x31a4,	// (0x0001754e) list_double2_graphic_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double2_graphic_pane_vc

0x31a4,	// (0x0001754e) list_double2_large_graphic_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double2_large_graphic_pane_vc

0x31a4,	// (0x0001754e) list_double2_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double2_pane_vc

0x31a4,	// (0x0001754e) list_double_graphic_heading_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_graphic_heading_pane_vc

0x31a4,	// (0x0001754e) list_double_graphic_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_graphic_pane_vc

0x31a4,	// (0x0001754e) list_double_heading_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_heading_pane_vc

0x31cc,	// (0x00017576) list_double_large_graphic_pane_vc_ParamLimits

0x31cc,	// (0x00017576) list_double_large_graphic_pane_vc

0x31a4,	// (0x0001754e) list_double_number_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_number_pane_vc

0x31a4,	// (0x0001754e) list_double_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_pane_vc

0x31a4,	// (0x0001754e) list_double_time_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_double_time_pane_vc

0x31a4,	// (0x0001754e) list_setting_number_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_setting_number_pane_vc

0x31a4,	// (0x0001754e) list_setting_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_setting_pane_vc

0x31a4,	// (0x0001754e) list_single_graphic_heading_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_single_graphic_heading_pane_vc

0x31a4,	// (0x0001754e) list_single_heading_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_single_heading_pane_vc

0x31a4,	// (0x0001754e) list_single_number_heading_pane_vc_ParamLimits

0x31a4,	// (0x0001754e) list_single_number_heading_pane_vc

0x1a2d,	// (0x00015dd7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1a2d,	// (0x00015dd7) list_double_graphic_heading_pane_vc_g1

0x3787,	// (0x00017b31) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3787,	// (0x00017b31) list_double_graphic_heading_pane_vc_g2

0x3793,	// (0x00017b3d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3793,	// (0x00017b3d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x00023d93) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x00023d93) list_double_graphic_heading_pane_vc_g

0x379f,	// (0x00017b49) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x379f,	// (0x00017b49) list_double_graphic_heading_pane_vc_t1

0x37b5,	// (0x00017b5f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x37b5,	// (0x00017b5f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x00023d9a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x00023d9a) list_double_graphic_heading_pane_vc_t

0x1b27,	// (0x00015ed1) list_setting_pane_vc_g1_ParamLimits

0x1b27,	// (0x00015ed1) list_setting_pane_vc_g1

0x1b33,	// (0x00015edd) list_setting_pane_vc_g2_ParamLimits

0x1b33,	// (0x00015edd) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00023b89) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00023b89) list_setting_pane_vc_g

0x39ee,	// (0x00017d98) list_setting_pane_vc_t1_ParamLimits

0x39ee,	// (0x00017d98) list_setting_pane_vc_t1

0x3a0a,	// (0x00017db4) list_setting_pane_vc_t2_ParamLimits

0x3a0a,	// (0x00017db4) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x00023ddd) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x00023ddd) list_setting_pane_vc_t

0x1b9d,	// (0x00015f47) set_value_pane_cp_vc_ParamLimits

0x1b9d,	// (0x00015f47) set_value_pane_cp_vc

0x1193,	// (0x0001553d) list_single_number_heading_pane_vc_g1_ParamLimits

0x1193,	// (0x0001553d) list_single_number_heading_pane_vc_g1

0x1a39,	// (0x00015de3) list_single_number_heading_pane_vc_g2_ParamLimits

0x1a39,	// (0x00015de3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023972) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023972) list_single_number_heading_pane_vc_g

0x3a26,	// (0x00017dd0) list_single_number_heading_pane_vc_t1_ParamLimits

0x3a26,	// (0x00017dd0) list_single_number_heading_pane_vc_t1

0x3a3c,	// (0x00017de6) list_single_number_heading_pane_vc_t2_ParamLimits

0x3a3c,	// (0x00017de6) list_single_number_heading_pane_vc_t2

0x3a4e,	// (0x00017df8) list_single_number_heading_pane_vc_t3_ParamLimits

0x3a4e,	// (0x00017df8) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x00023de2) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00023de2) list_single_number_heading_pane_vc_t

0x1a2d,	// (0x00015dd7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1a2d,	// (0x00015dd7) list_single_graphic_heading_pane_vc_g1

0x1193,	// (0x0001553d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1193,	// (0x0001553d) list_single_graphic_heading_pane_vc_g4

0x1a39,	// (0x00015de3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1a39,	// (0x00015de3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00023b63) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00023b63) list_single_graphic_heading_pane_vc_g

0x3a26,	// (0x00017dd0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3a26,	// (0x00017dd0) list_single_graphic_heading_pane_vc_t1

0x3a60,	// (0x00017e0a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3a60,	// (0x00017e0a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x00023de9) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x00023de9) list_single_graphic_heading_pane_vc_t

0x1193,	// (0x0001553d) list_double2_pane_vc_g1_ParamLimits

0x1193,	// (0x0001553d) list_double2_pane_vc_g1

0x1a39,	// (0x00015de3) list_double2_pane_vc_g2_ParamLimits

0x1a39,	// (0x00015de3) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023972) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023972) list_double2_pane_vc_g

0x3a72,	// (0x00017e1c) list_double2_pane_vc_t1_ParamLimits

0x3a72,	// (0x00017e1c) list_double2_pane_vc_t1

0x3a88,	// (0x00017e32) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3a88,	// (0x00017e32) list_double2_large_graphic_pane_vc_g1

0x1193,	// (0x0001553d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x1193,	// (0x0001553d) list_double2_large_graphic_pane_vc_g2

0x1a39,	// (0x00015de3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1a39,	// (0x00015de3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002398f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002398f) list_double2_large_graphic_pane_vc_g

0x3a94,	// (0x00017e3e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3a94,	// (0x00017e3e) list_double2_large_graphic_pane_vc_t1

0x3aaa,	// (0x00017e54) list_double_time_pane_vc_g1_ParamLimits

0x3aaa,	// (0x00017e54) list_double_time_pane_vc_g1

0x3ab6,	// (0x00017e60) list_double_time_pane_vc_g2_ParamLimits

0x3ab6,	// (0x00017e60) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x00023dee) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x00023dee) list_double_time_pane_vc_g

0x3ac2,	// (0x00017e6c) list_double_time_pane_vc_t1_ParamLimits

0x3ac2,	// (0x00017e6c) list_double_time_pane_vc_t1

0x3af2,	// (0x00017e9c) list_double_time_pane_vc_t2_ParamLimits

0x3af2,	// (0x00017e9c) list_double_time_pane_vc_t2

0x3b1b,	// (0x00017ec5) list_double_time_pane_vc_t3_ParamLimits

0x3b1b,	// (0x00017ec5) list_double_time_pane_vc_t3

0x3b2d,	// (0x00017ed7) list_double_time_pane_vc_t4_ParamLimits

0x3b2d,	// (0x00017ed7) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x00023df3) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x00023df3) list_double_time_pane_vc_t

0x1193,	// (0x0001553d) list_double_pane_vc_g1_ParamLimits

0x1193,	// (0x0001553d) list_double_pane_vc_g1

0x1a39,	// (0x00015de3) list_double_pane_vc_g2_ParamLimits

0x1a39,	// (0x00015de3) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023972) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023972) list_double_pane_vc_g

0x3b41,	// (0x00017eeb) list_double_pane_vc_t1_ParamLimits

0x3b41,	// (0x00017eeb) list_double_pane_vc_t1

0x3b55,	// (0x00017eff) list_double_pane_vc_t2_ParamLimits

0x3b55,	// (0x00017eff) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x00023dfc) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x00023dfc) list_double_pane_vc_t

0x1193,	// (0x0001553d) list_double_number_pane_vc_g1_ParamLimits

0x1193,	// (0x0001553d) list_double_number_pane_vc_g1

0x1a39,	// (0x00015de3) list_double_number_pane_vc_g2_ParamLimits

0x1a39,	// (0x00015de3) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023972) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023972) list_double_number_pane_vc_g

0x3b6b,	// (0x00017f15) list_double_number_pane_vc_t1_ParamLimits

0x3b6b,	// (0x00017f15) list_double_number_pane_vc_t1

0x3b7d,	// (0x00017f27) list_double_number_pane_vc_t2_ParamLimits

0x3b7d,	// (0x00017f27) list_double_number_pane_vc_t2

0x3b55,	// (0x00017eff) list_double_number_pane_vc_t3_ParamLimits

0x3b55,	// (0x00017eff) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x00023e01) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x00023e01) list_double_number_pane_vc_t

0x3b91,	// (0x00017f3b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b91,	// (0x00017f3b) list_double_large_graphic_pane_vc_g1

0x3bb3,	// (0x00017f5d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3bb3,	// (0x00017f5d) list_double_large_graphic_pane_vc_g2

0x3bc7,	// (0x00017f71) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3bc7,	// (0x00017f71) list_double_large_graphic_pane_vc_g3

0x3bd6,	// (0x00017f80) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3bd6,	// (0x00017f80) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x00023e08) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x00023e08) list_double_large_graphic_pane_vc_g

0x3be5,	// (0x00017f8f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3be5,	// (0x00017f8f) list_double_large_graphic_pane_vc_t1

0x3c01,	// (0x00017fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c01,	// (0x00017fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00023e11) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00023e11) list_double_large_graphic_pane_vc_t

0x3787,	// (0x00017b31) list_double_heading_pane_vc_g1_ParamLimits

0x3787,	// (0x00017b31) list_double_heading_pane_vc_g1

0x3793,	// (0x00017b3d) list_double_heading_pane_vc_g2_ParamLimits

0x3793,	// (0x00017b3d) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x00023e16) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x00023e16) list_double_heading_pane_vc_g

0x3c21,	// (0x00017fcb) list_double_heading_pane_vc_t1_ParamLimits

0x3c21,	// (0x00017fcb) list_double_heading_pane_vc_t1

0x3c33,	// (0x00017fdd) list_double_heading_pane_vc_t2_ParamLimits

0x3c33,	// (0x00017fdd) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00023e1b) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00023e1b) list_double_heading_pane_vc_t

0x3c4b,	// (0x00017ff5) list_double_graphic_pane_vc_g1_ParamLimits

0x3c4b,	// (0x00017ff5) list_double_graphic_pane_vc_g1

0x3c57,	// (0x00018001) list_double_graphic_pane_vc_g2_ParamLimits

0x3c57,	// (0x00018001) list_double_graphic_pane_vc_g2

0x1193,	// (0x0001553d) list_double_graphic_pane_vc_g3_ParamLimits

0x1193,	// (0x0001553d) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00023e20) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00023e20) list_double_graphic_pane_vc_g

0x3c74,	// (0x0001801e) list_double_graphic_pane_vc_t1_ParamLimits

0x3c74,	// (0x0001801e) list_double_graphic_pane_vc_t1

0x3c9e,	// (0x00018048) list_double_graphic_pane_vc_t2_ParamLimits

0x3c9e,	// (0x00018048) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00023e29) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00023e29) list_double_graphic_pane_vc_t

0xdcdb,	// (0x00022085) aid_size_cell_fastswap

0x8b59,	// (0x0001cf03) aid_size_cell_touch_ParamLimits

0x8b59,	// (0x0001cf03) aid_size_cell_touch

0xde62,	// (0x0002220c) popup_fast_swap_wide_window_ParamLimits

0xde62,	// (0x0002220c) popup_fast_swap_wide_window

0x8d17,	// (0x0001d0c1) touch_pane_ParamLimits

0x8d17,	// (0x0001d0c1) touch_pane

0xc83e,	// (0x00020be8) button_value_adjust_pane_cp2

0xc846,	// (0x00020bf0) button_value_adjust_pane_cp4

0xc84e,	// (0x00020bf8) form_field_data_pane_cp2

0xa632,	// (0x0001e9dc) form_field_data_wide_pane_cp2

0xe15e,	// (0x00022508) bg_scroll_pane_ParamLimits

0xe17d,	// (0x00022527) scroll_handle_pane_ParamLimits

0xe191,	// (0x0002253b) scroll_sc2_down_pane_ParamLimits

0xe191,	// (0x0002253b) scroll_sc2_down_pane

0xe1b8,	// (0x00022562) scroll_sc2_up_pane_ParamLimits

0xe1b8,	// (0x00022562) scroll_sc2_up_pane

0xb659,	// (0x0001fa03) grid_wheel_folder_pane_g1_ParamLimits

0xb659,	// (0x0001fa03) grid_wheel_folder_pane_g1

0xe68d,	// (0x00022a37) clock_nsta_pane_cp2_ParamLimits

0xe68d,	// (0x00022a37) clock_nsta_pane_cp2

0xaac2,	// (0x0001ee6c) listscroll_midp_pane_ParamLimits

0xaace,	// (0x0001ee78) midp_canvas_pane

0x1521,	// (0x000158cb) nsta_clock_indic_pane

0x155d,	// (0x00015907) listscroll_form_pane_vc

0x1565,	// (0x0001590f) listscroll_set_pane_vc_ParamLimits

0x1565,	// (0x0001590f) listscroll_set_pane_vc

0xad66,	// (0x0001f110) clock_nsta_pane

0xad90,	// (0x0001f13a) indicator_nsta_pane

0x19c7,	// (0x00015d71) bg_popup_sub_pane_cp2_ParamLimits

0x19db,	// (0x00015d85) find_pane_cp2_ParamLimits

0x19db,	// (0x00015d85) find_pane_cp2

0x19f1,	// (0x00015d9b) grid_toobar_pane_ParamLimits

0x1baf,	// (0x00015f59) list_form_gen_pane_vc_ParamLimits

0x1baf,	// (0x00015f59) list_form_gen_pane_vc

0x1bc5,	// (0x00015f6f) scroll_pane_cp8_vc_ParamLimits

0x1bc5,	// (0x00015f6f) scroll_pane_cp8_vc

0x1c41,	// (0x00015feb) data_form_wide_pane_vc_ParamLimits

0x1c41,	// (0x00015feb) data_form_wide_pane_vc

0x1c4d,	// (0x00015ff7) form_field_data_wide_pane_vc_g1

0x1c55,	// (0x00015fff) form_field_data_wide_pane_vc_t1_ParamLimits

0x1c55,	// (0x00015fff) form_field_data_wide_pane_vc_t1

0xc8a9,	// (0x00020c53) input_focus_pane_cp6_vc_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_cp6_vc

0x1fa0,	// (0x0001634a) list_midp_pane_ParamLimits

0x33e9,	// (0x00017793) scroll_pane_cp16_ParamLimits

0x33e9,	// (0x00017793) scroll_pane_cp16

0x1fee,	// (0x00016398) button_value_adjust_pane_ParamLimits

0x1fee,	// (0x00016398) button_value_adjust_pane

0xb323,	// (0x0001f6cd) button_value_adjust_pane_cp6_ParamLimits

0xb323,	// (0x0001f6cd) button_value_adjust_pane_cp6

0xb39d,	// (0x0001f747) settings_code_pane_cp_ParamLimits

0xb39d,	// (0x0001f747) settings_code_pane_cp

0xc171,	// (0x0002051b) cell_touch_pane_g1

0xc171,	// (0x0002051b) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00023aa8) cell_touch_pane_g

0xb53d,	// (0x0001f8e7) cell_touch_pane_cp_ParamLimits

0xb53d,	// (0x0001f8e7) cell_touch_pane_cp

0xb559,	// (0x0001f903) cell_touch_pane_ParamLimits

0xb559,	// (0x0001f903) cell_touch_pane

0xc171,	// (0x0002051b) scroll_sc2_down_pane_g1

0xc171,	// (0x0002051b) scroll_sc2_up_pane_g1

0xc17b,	// (0x00020525) bg_set_opt_pane_cp4_vc

0x37d3,	// (0x00017b7d) list_set_graphic_pane_vc_g1_ParamLimits

0x37d3,	// (0x00017b7d) list_set_graphic_pane_vc_g1

0x37df,	// (0x00017b89) list_set_graphic_pane_vc_g2_ParamLimits

0x37df,	// (0x00017b89) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x00023d9f) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x00023d9f) list_set_graphic_pane_vc_g

0x37eb,	// (0x00017b95) text_primary_small_cp13_vc_ParamLimits

0x37eb,	// (0x00017b95) text_primary_small_cp13_vc

0x0f0a,	// (0x000152b4) list_set_graphic_pane_vc_ParamLimits

0x0f0a,	// (0x000152b4) list_set_graphic_pane_vc

0xc17b,	// (0x00020525) input_focus_pane_cp2_vc

0xc171,	// (0x0002051b) setting_code_pane_vc_g1

0xc1ee,	// (0x00020598) setting_code_pane_vc_t1

0x3803,	// (0x00017bad) set_text_pane_vc_t1_ParamLimits

0x3803,	// (0x00017bad) set_text_pane_vc_t1

0xc17b,	// (0x00020525) input_focus_pane_cp1_vc

0x3821,	// (0x00017bcb) list_set_text_pane_vc

0xc171,	// (0x0002051b) setting_text_pane_vc_g1

0xc17b,	// (0x00020525) bg_set_opt_pane_cp2_vc

0xc1e5,	// (0x0002058f) setting_slider_graphic_pane_vc_g1

0x382b,	// (0x00017bd5) setting_slider_graphic_pane_vc_t1

0x383d,	// (0x00017be7) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x00023da4) setting_slider_graphic_pane_vc_t

0x384f,	// (0x00017bf9) slider_set_pane_cp_vc

0x3859,	// (0x00017c03) slider_set_pane_vc_g1

0x3862,	// (0x00017c0c) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x00023da9) slider_set_pane_vc_g

0xc964,	// (0x00020d0e) set_opt_bg_pane_g1_copy1

0xc96c,	// (0x00020d16) set_opt_bg_pane_g2_copy1

0x388e,	// (0x00017c38) set_opt_bg_pane_g3_copy1

0xc97c,	// (0x00020d26) set_opt_bg_pane_g4_copy1

0xc984,	// (0x00020d2e) set_opt_bg_pane_g5_copy1

0xc98c,	// (0x00020d36) set_opt_bg_pane_g6_copy1

0x3898,	// (0x00017c42) set_opt_bg_pane_g7_copy1

0x38a2,	// (0x00017c4c) set_opt_bg_pane_g8_copy1

0x38ac,	// (0x00017c56) set_opt_bg_pane_g9_copy1

0xc17b,	// (0x00020525) bg_set_opt_pane_cp_vc

0x38b6,	// (0x00017c60) setting_slider_pane_vc_t1

0x38c5,	// (0x00017c6f) setting_slider_pane_vc_t2

0x38d7,	// (0x00017c81) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x00023db8) setting_slider_pane_vc_t

0x38e9,	// (0x00017c93) slider_set_pane_vc

0xea72,	// (0x00022e1c) volume_set_pane_vc_g1

0xec20,	// (0x00022fca) volume_set_pane_vc_g2

0xec29,	// (0x00022fd3) volume_set_pane_vc_g3

0xec32,	// (0x00022fdc) volume_set_pane_vc_g4

0xec3b,	// (0x00022fe5) volume_set_pane_vc_g5

0xec44,	// (0x00022fee) volume_set_pane_vc_g6

0xec4d,	// (0x00022ff7) volume_set_pane_vc_g7

0xec56,	// (0x00023000) volume_set_pane_vc_g8

0xec5f,	// (0x00023009) volume_set_pane_vc_g9

0xec68,	// (0x00023012) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x00023dbf) volume_set_pane_vc_g

0x38f1,	// (0x00017c9b) volume_set_pane_vc

0x38fb,	// (0x00017ca5) button_value_adjust_pane_cp1_vc

0x3905,	// (0x00017caf) list_highlight_pane_cp2_vc

0x390e,	// (0x00017cb8) list_set_pane_vc_ParamLimits

0x390e,	// (0x00017cb8) list_set_pane_vc

0x397c,	// (0x00017d26) main_pane_set_vc_t1_ParamLimits

0x397c,	// (0x00017d26) main_pane_set_vc_t1

0x3991,	// (0x00017d3b) main_pane_set_vc_t2_ParamLimits

0x3991,	// (0x00017d3b) main_pane_set_vc_t2

0x39a3,	// (0x00017d4d) main_pane_set_vc_t3_ParamLimits

0x39a3,	// (0x00017d4d) main_pane_set_vc_t3

0x39b7,	// (0x00017d61) main_pane_set_vc_t4_ParamLimits

0x39b7,	// (0x00017d61) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x00023dd4) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x00023dd4) main_pane_set_vc_t

0x39cb,	// (0x00017d75) setting_code_pane_vc_ParamLimits

0x39cb,	// (0x00017d75) setting_code_pane_vc

0x39dc,	// (0x00017d86) setting_slider_graphic_pane_vc

0x39dc,	// (0x00017d86) setting_slider_pane_vc

0x39dc,	// (0x00017d86) setting_text_pane_vc

0x39dc,	// (0x00017d86) setting_volume_pane_vc

0x39e6,	// (0x00017d90) scroll_pane_cp121_vc

0xc82c,	// (0x00020bd6) set_content_pane_vc

0x3cbc,	// (0x00018066) button_value_adjust_pane_g1

0x3cc5,	// (0x0001806f) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00023e2e) button_value_adjust_pane_g

0x3cce,	// (0x00018078) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3cce,	// (0x00018078) form_field_slider_wide_pane_vc_t1

0x3ce0,	// (0x0001808a) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ce0,	// (0x0001808a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00023e33) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00023e33) form_field_slider_wide_pane_vc_t

0xc1c9,	// (0x00020573) input_focus_pane_cp10_vc_ParamLimits

0xc1c9,	// (0x00020573) input_focus_pane_cp10_vc

0x3d0c,	// (0x000180b6) slider_cont_pane_cp1_vc_ParamLimits

0x3d0c,	// (0x000180b6) slider_cont_pane_cp1_vc

0x3d1e,	// (0x000180c8) slider_form_pane_g1_cp2

0x3862,	// (0x00017c0c) slider_form_pane_g2_cp2

0x3d4b,	// (0x000180f5) form_field_slider_pane_vc_t3

0x3d59,	// (0x00018103) form_field_slider_pane_vc_t4

0x3d67,	// (0x00018111) slider_form_pane_vc_ParamLimits

0x3d67,	// (0x00018111) slider_form_pane_vc

0x3d74,	// (0x0001811e) form_field_slider_pane_vc_t1_ParamLimits

0x3d74,	// (0x0001811e) form_field_slider_pane_vc_t1

0x3ce0,	// (0x0001808a) form_field_slider_pane_vc_t2_ParamLimits

0x3ce0,	// (0x0001808a) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00023e45) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00023e45) form_field_slider_pane_vc_t

0xc1c9,	// (0x00020573) input_focus_pane_cp9_vc_ParamLimits

0xc1c9,	// (0x00020573) input_focus_pane_cp9_vc

0x3d8a,	// (0x00018134) slider_cont_pane_vc_ParamLimits

0x3d8a,	// (0x00018134) slider_cont_pane_vc

0x3d9e,	// (0x00018148) list_form_graphic_pane_cp_vc_ParamLimits

0x3d9e,	// (0x00018148) list_form_graphic_pane_cp_vc

0x1c4d,	// (0x00015ff7) form_field_popup_wide_pane_vc_g1

0x3db3,	// (0x0001815d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3db3,	// (0x0001815d) form_field_popup_wide_pane_vc_t1

0xc8a9,	// (0x00020c53) input_focus_pane_cp8_vc_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_cp8_vc

0x3df8,	// (0x000181a2) list_form_wide_pane_vc_ParamLimits

0x3df8,	// (0x000181a2) list_form_wide_pane_vc

0x3e04,	// (0x000181ae) list_form_graphic_pane_vc_g1

0x3e0c,	// (0x000181b6) list_form_graphic_pane_vc_t1_ParamLimits

0x3e0c,	// (0x000181b6) list_form_graphic_pane_vc_t1

0xc1d7,	// (0x00020581) list_highlight_pane_cp5_vc_ParamLimits

0xc1d7,	// (0x00020581) list_highlight_pane_cp5_vc

0x3e28,	// (0x000181d2) list_form_graphic_pane_vc_ParamLimits

0x3e28,	// (0x000181d2) list_form_graphic_pane_vc

0x1c4d,	// (0x00015ff7) form_field_popup_pane_vc_g1

0x3e3e,	// (0x000181e8) form_field_popup_pane_vc_t1_ParamLimits

0x3e3e,	// (0x000181e8) form_field_popup_pane_vc_t1

0xc8a9,	// (0x00020c53) input_focus_pane_cp7_vc_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_cp7_vc

0x3e55,	// (0x000181ff) list_form_pane_vc_ParamLimits

0x3e55,	// (0x000181ff) list_form_pane_vc

0x3e61,	// (0x0001820b) data_form_pane_vc_t1_ParamLimits

0x3e61,	// (0x0001820b) data_form_pane_vc_t1

0xc964,	// (0x00020d0e) input_focus_pane_vc_g1

0xc96c,	// (0x00020d16) input_focus_pane_vc_g2

0xc974,	// (0x00020d1e) input_focus_pane_vc_g3

0xc97c,	// (0x00020d26) input_focus_pane_vc_g4

0xc984,	// (0x00020d2e) input_focus_pane_vc_g5

0xc98c,	// (0x00020d36) input_focus_pane_vc_g6

0xc994,	// (0x00020d3e) input_focus_pane_vc_g7

0xc99c,	// (0x00020d46) input_focus_pane_vc_g8

0xc9a4,	// (0x00020d4e) input_focus_pane_vc_g9

0xc171,	// (0x0002051b) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00023a31) input_focus_pane_vc_g

0x1c41,	// (0x00015feb) data_form_pane_vc_ParamLimits

0x1c41,	// (0x00015feb) data_form_pane_vc

0x1c4d,	// (0x00015ff7) form_field_data_pane_vc_g1

0x3e7e,	// (0x00018228) form_field_data_pane_vc_t1_ParamLimits

0x3e7e,	// (0x00018228) form_field_data_pane_vc_t1

0xc8a9,	// (0x00020c53) input_focus_pane_vc_ParamLimits

0xc8a9,	// (0x00020c53) input_focus_pane_vc

0x3e98,	// (0x00018242) button_value_adjust_pane_cp3_vc

0x3ea0,	// (0x0001824a) button_value_adjust_pane_cp5_vc

0x3ea8,	// (0x00018252) form_field_data_pane_vc_ParamLimits

0x3ea8,	// (0x00018252) form_field_data_pane_vc

0x3ec3,	// (0x0001826d) form_field_data_pane_vc_cp2

0x3ecb,	// (0x00018275) form_field_data_wide_pane_vc_ParamLimits

0x3ecb,	// (0x00018275) form_field_data_wide_pane_vc

0x3ee5,	// (0x0001828f) form_field_data_wide_pane_vc_cp2

0x3eed,	// (0x00018297) form_field_popup_pane_vc_ParamLimits

0x3eed,	// (0x00018297) form_field_popup_pane_vc

0x3f08,	// (0x000182b2) form_field_popup_wide_pane_vc_ParamLimits

0x3f08,	// (0x000182b2) form_field_popup_wide_pane_vc

0x3f22,	// (0x000182cc) form_field_slider_pane_vc_ParamLimits

0x3f22,	// (0x000182cc) form_field_slider_pane_vc

0x3f35,	// (0x000182df) form_field_slider_wide_pane_vc_ParamLimits

0x3f35,	// (0x000182df) form_field_slider_wide_pane_vc

0xb577,	// (0x0001f921) grid_touch_1_pane_ParamLimits

0xb577,	// (0x0001f921) grid_touch_1_pane

0xb58b,	// (0x0001f935) grid_touch_2_pane_ParamLimits

0xb58b,	// (0x0001f935) grid_touch_2_pane

0x4005,	// (0x000183af) touch_pane_g1_ParamLimits

0x4005,	// (0x000183af) touch_pane_g1

0x3f6e,	// (0x00018318) cell_app_pane_cp_wide_ParamLimits

0x3f6e,	// (0x00018318) cell_app_pane_cp_wide

0x3f7f,	// (0x00018329) grid_popup_fast_wide_pane_ParamLimits

0x3f7f,	// (0x00018329) grid_popup_fast_wide_pane

0x3f93,	// (0x0001833d) scroll_pane_cp19_ParamLimits

0x3f93,	// (0x0001833d) scroll_pane_cp19

0xc17b,	// (0x00020525) bg_popup_window_pane_cp20

0x3fa7,	// (0x00018351) listscroll_popup_fast_wide_pane

0xcbdc,	// (0x00020f86) grid_indicator_nsta_pane

0x3faf,	// (0x00018359) clock_nsta_pane_g1

0x3fb8,	// (0x00018362) clock_nsta_pane_t1

0xb5b7,	// (0x0001f961) cell_indicator_nsta_pane_ParamLimits

0xb5b7,	// (0x0001f961) cell_indicator_nsta_pane

0x4005,	// (0x000183af) cell_indicator_nsta_pane_g1

0xb5ce,	// (0x0001f978) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00023e56) cell_indicator_nsta_pane_g

0x4020,	// (0x000183ca) clock_nsta_pane_cp

0x4029,	// (0x000183d3) indicator_nsta_pane_cp

0x4031,	// (0x000183db) nsta_clock_indic_pane_g1

0xc22d,	// (0x000205d7) grid_indicator_pane

0xe2aa,	// (0x00022654) scroll_pane_cp29

0xe5dc,	// (0x00022986) indicator_nsta_pane_cp2_ParamLimits

0xe5dc,	// (0x00022986) indicator_nsta_pane_cp2

0xc1d7,	// (0x00020581) main_apps_wheel_pane

0x1e5d,	// (0x00016207) form_midp_field_text_pane_ParamLimits

0x1fac,	// (0x00016356) scroll_bar_cp050_ParamLimits

0x4081,	// (0x0001842b) cell_indicator_pane_ParamLimits

0x4081,	// (0x0001842b) cell_indicator_pane

0x4099,	// (0x00018443) cell_indicator_pane_g1

0xb5db,	// (0x0001f985) grid_wheel_folder_pane_ParamLimits

0xb5db,	// (0x0001f985) grid_wheel_folder_pane

0xb5e9,	// (0x0001f993) list_wheel_apps_pane_ParamLimits

0xb5e9,	// (0x0001f993) list_wheel_apps_pane

0xb5f7,	// (0x0001f9a1) main_apps_wheel_pane_g1_ParamLimits

0xb5f7,	// (0x0001f9a1) main_apps_wheel_pane_g1

0xb607,	// (0x0001f9b1) main_apps_wheel_pane_g2_ParamLimits

0xb607,	// (0x0001f9b1) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00023e72) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00023e72) main_apps_wheel_pane_g

0xb617,	// (0x0001f9c1) main_apps_wheel_pane_t1_ParamLimits

0xb617,	// (0x0001f9c1) main_apps_wheel_pane_t1

0xb62f,	// (0x0001f9d9) list_wheel_apps_pane_g1

0xb637,	// (0x0001f9e1) list_wheel_apps_pane_g2

0xb63f,	// (0x0001f9e9) list_wheel_apps_pane_g3

0xb647,	// (0x0001f9f1) list_wheel_apps_pane_g4

0xb64f,	// (0x0001f9f9) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00023e77) list_wheel_apps_pane_g

0x10aa,	// (0x00015454) navi_icon_text_pane

0xac58,	// (0x0001f002) aid_fill_nsta

0xb66c,	// (0x0001fa16) navi_icon_text_pane_g1

0xb678,	// (0x0001fa22) navi_icon_text_pane_t1

0x0f35,	// (0x000152df) list_set_graphic_pane_t1_ParamLimits

0x0f35,	// (0x000152df) list_set_graphic_pane_t1

0x2711,	// (0x00016abb) popup_midp_note_alarm_window_t6_ParamLimits

0x2711,	// (0x00016abb) popup_midp_note_alarm_window_t6

0x2723,	// (0x00016acd) popup_midp_note_alarm_window_t7_ParamLimits

0x2723,	// (0x00016acd) popup_midp_note_alarm_window_t7

0x2735,	// (0x00016adf) popup_midp_note_alarm_window_t8_ParamLimits

0x2735,	// (0x00016adf) popup_midp_note_alarm_window_t8

0x2747,	// (0x00016af1) popup_midp_note_alarm_window_t9_ParamLimits

0x2747,	// (0x00016af1) popup_midp_note_alarm_window_t9

0x2759,	// (0x00016b03) popup_midp_note_alarm_window_t10_ParamLimits

0x2759,	// (0x00016b03) popup_midp_note_alarm_window_t10

0x276b,	// (0x00016b15) popup_midp_note_alarm_window_t11_ParamLimits

0x276b,	// (0x00016b15) popup_midp_note_alarm_window_t11

0x277d,	// (0x00016b27) scroll_pane_cp17_ParamLimits

0x277d,	// (0x00016b27) scroll_pane_cp17

0xea72,	// (0x00022e1c) volume_small_pane_cp_g1

0xec71,	// (0x0002301b) volume_small_pane_cp_g2

0xec7a,	// (0x00023024) volume_small_pane_cp_g3

0xec83,	// (0x0002302d) volume_small_pane_cp_g4

0xec8c,	// (0x00023036) volume_small_pane_cp_g5

0xec95,	// (0x0002303f) volume_small_pane_cp_g6

0xec9e,	// (0x00023048) volume_small_pane_cp_g7

0xeca7,	// (0x00023051) volume_small_pane_cp_g8

0xecb0,	// (0x0002305a) volume_small_pane_cp_g9

0xecb9,	// (0x00023063) volume_small_pane_cp_g10

0x1300,	// (0x000156aa) midp_ticker_pane_g1_ParamLimits

0x130c,	// (0x000156b6) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00023afd) midp_ticker_pane_g_ParamLimits

0xab66,	// (0x0001ef10) midp_ticker_pane_t1_ParamLimits

0xac7c,	// (0x0001f026) aid_fill_nsta_2

0x1f98,	// (0x00016342) list_form2_midp_pane

0x315e,	// (0x00017508) midp_editing_number_pane_ParamLimits

0x316d,	// (0x00017517) midp_ticker_pane_ParamLimits

0x418c,	// (0x00018536) form2_midp_field_pane

0x41b0,	// (0x0001855a) scroll_pane_cp51

0x41d0,	// (0x0001857a) form2_midp_button_pane_ParamLimits

0x41d0,	// (0x0001857a) form2_midp_button_pane

0x41e2,	// (0x0001858c) form2_midp_content_pane_ParamLimits

0x41e2,	// (0x0001858c) form2_midp_content_pane

0x41fc,	// (0x000185a6) form2_midp_field_choice_group_pane

0x4204,	// (0x000185ae) form2_midp_field_pane_g1

0x420c,	// (0x000185b6) form2_midp_field_pane_g2

0x4214,	// (0x000185be) form2_midp_field_pane_g3

0x421c,	// (0x000185c6) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00023e9c) form2_midp_field_pane_g

0x4224,	// (0x000185ce) form2_midp_gauge_slider_pane

0x422c,	// (0x000185d6) form2_midp_gauge_wait_pane

0x4234,	// (0x000185de) form2_midp_image_pane_ParamLimits

0x4234,	// (0x000185de) form2_midp_image_pane

0x424f,	// (0x000185f9) form2_midp_label_pane_ParamLimits

0x424f,	// (0x000185f9) form2_midp_label_pane

0xb6a6,	// (0x0001fa50) form2_midp_label_pane_cp_ParamLimits

0xb6a6,	// (0x0001fa50) form2_midp_label_pane_cp

0x428f,	// (0x00018639) form2_midp_string_pane_ParamLimits

0x428f,	// (0x00018639) form2_midp_string_pane

0x42a1,	// (0x0001864b) form2_midp_text_pane_ParamLimits

0x42a1,	// (0x0001864b) form2_midp_text_pane

0x42c2,	// (0x0001866c) form2_midp_time_pane

0x42d2,	// (0x0001867c) input_focus_pane_cp51_ParamLimits

0x42d2,	// (0x0001867c) input_focus_pane_cp51

0x42ea,	// (0x00018694) form2_midp_label_pane_t1_ParamLimits

0x42ea,	// (0x00018694) form2_midp_label_pane_t1

0x4330,	// (0x000186da) form2_mdip_text_pane_t1_ParamLimits

0x4330,	// (0x000186da) form2_mdip_text_pane_t1

0x434f,	// (0x000186f9) form2_midp_time_pane_t1

0x436a,	// (0x00018714) form2_midp_gauge_slider_pane_t1

0xb6c7,	// (0x0001fa71) form2_midp_gauge_slider_pane_t2

0xb6d9,	// (0x0001fa83) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00023ea5) form2_midp_gauge_slider_pane_t

0x43a0,	// (0x0001874a) form2_midp_slider_pane

0x43ac,	// (0x00018756) form2_midp_gauge_wait_pane_t1

0x43ba,	// (0x00018764) form2_midp_wait_pane_ParamLimits

0x43ba,	// (0x00018764) form2_midp_wait_pane

0x1c94,	// (0x0001603e) list_single_2graphic_pane_cp4_ParamLimits

0x1c94,	// (0x0001603e) list_single_2graphic_pane_cp4

0xb6eb,	// (0x0001fa95) list_single_midp_graphic_pane_cp_ParamLimits

0xb6eb,	// (0x0001fa95) list_single_midp_graphic_pane_cp

0xc17b,	// (0x00020525) list_highlight_pane_cp20

0x43fe,	// (0x000187a8) list_single_2graphic_pane_g1_cp4

0x3669,	// (0x00017a13) list_single_2graphic_pane_g2_cp4

0x4406,	// (0x000187b0) list_single_2graphic_pane_t1_cp4

0xc1d7,	// (0x00020581) list_highlight_pane_cp21

0x4415,	// (0x000187bf) list_single_midp_graphic_pane_g4_cp

0x4424,	// (0x000187ce) list_single_midp_graphic_pane_t1_cp

0xb70c,	// (0x0001fab6) form2_mdip_string_pane_t1_ParamLimits

0xb70c,	// (0x0001fab6) form2_mdip_string_pane_t1

0xc17b,	// (0x00020525) bg_wml_button_pane_cp2

0xc171,	// (0x0002051b) form2_midp_image_pane_g1

0xc7d6,	// (0x00020b80) list_double_large_graphic_pane_g5_ParamLimits

0xc7d6,	// (0x00020b80) list_double_large_graphic_pane_g5

0xaac2,	// (0x0001ee6c) midp_form_pane_ParamLimits

0xc1d7,	// (0x00020581) main_apps_wheel_pane_ParamLimits

0x933a,	// (0x0001d6e4) popup_preview_window_ParamLimits

0x933a,	// (0x0001d6e4) popup_preview_window

0xe8c6,	// (0x00022c70) popup_touch_info_window_ParamLimits

0xe8c6,	// (0x00022c70) popup_touch_info_window

0xe8e8,	// (0x00022c92) popup_touch_menu_window_ParamLimits

0xe8e8,	// (0x00022c92) popup_touch_menu_window

0xc167,	// (0x00020511) bg_popup_sub_pane_cp6

0x44d5,	// (0x0001887f) list_touch_menu_pane

0x44dd,	// (0x00018887) list_single_touch_menu_pane_ParamLimits

0x44dd,	// (0x00018887) list_single_touch_menu_pane

0x44f5,	// (0x0001889f) list_single_touch_menu_pane_t1

0xc1d7,	// (0x00020581) bg_popup_sub_pane_cp7_ParamLimits

0xc1d7,	// (0x00020581) bg_popup_sub_pane_cp7

0x4503,	// (0x000188ad) heading_sub_pane

0x450b,	// (0x000188b5) list_touch_info_pane_ParamLimits

0x450b,	// (0x000188b5) list_touch_info_pane

0x451a,	// (0x000188c4) list_single_touch_info_pane_ParamLimits

0x451a,	// (0x000188c4) list_single_touch_info_pane

0x452c,	// (0x000188d6) list_single_touch_info_pane_t1

0x453a,	// (0x000188e4) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00023eb3) list_single_touch_info_pane_t

0x1222,	// (0x000155cc) bg_popup_heading_pane_cp

0x4548,	// (0x000188f2) heading_sub_pane_t1

0x1bdb,	// (0x00015f85) bg_popup_preview_window_pane_cp_ParamLimits

0x1bdb,	// (0x00015f85) bg_popup_preview_window_pane_cp

0x4503,	// (0x000188ad) heading_preview_pane

0x450b,	// (0x000188b5) list_preview_pane_ParamLimits

0x450b,	// (0x000188b5) list_preview_pane

0x4556,	// (0x00018900) popup_preview_window_g1

0x451a,	// (0x000188c4) list_single_preview_pane_ParamLimits

0x451a,	// (0x000188c4) list_single_preview_pane

0x455e,	// (0x00018908) list_single_preview_pane_g1

0x4566,	// (0x00018910) list_single_preview_pane_t1

0x452c,	// (0x000188d6) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00023eb8) list_single_preview_pane_t

0x4574,	// (0x0001891e) bg_popup_heading_pane_cp2_ParamLimits

0x4574,	// (0x0001891e) bg_popup_heading_pane_cp2

0x458a,	// (0x00018934) heading_preview_pane_g1

0x4592,	// (0x0001893c) heading_preview_pane_t1_ParamLimits

0x4592,	// (0x0001893c) heading_preview_pane_t1

0xc244,	// (0x000205ee) soft_indicator_pane_t1_ParamLimits

0xc7a2,	// (0x00020b4c) scroll_pane_ParamLimits

0xe1a6,	// (0x00022550) scroll_sc2_left_pane

0xe1af,	// (0x00022559) scroll_sc2_right_pane

0xe1ce,	// (0x00022578) scroll_bg_pane_g1_ParamLimits

0xe1e3,	// (0x0002258d) scroll_bg_pane_g2_ParamLimits

0xe1fb,	// (0x000225a5) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00023a88) scroll_bg_pane_g_ParamLimits

0xe1ce,	// (0x00022578) scroll_handle_pane_g1_ParamLimits

0xe21d,	// (0x000225c7) scroll_handle_pane_g2_ParamLimits

0xe1fb,	// (0x000225a5) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x00023a8f) scroll_handle_pane_g_ParamLimits

0xe7db,	// (0x00022b85) popup_choice_list_window_ParamLimits

0xe7db,	// (0x00022b85) popup_choice_list_window

0x19d3,	// (0x00015d7d) choice_list_pane

0x1a83,	// (0x00015e2d) cell_toolbar_pane_t1

0x1aab,	// (0x00015e55) toolbar_button_pane_ParamLimits

0x2c47,	// (0x00016ff1) ai_gene_pane_1_t2_ParamLimits

0x2c47,	// (0x00016ff1) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x00023cb2) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x00023cb2) ai_gene_pane_1_t

0x45af,	// (0x00018959) scroll_sc2_left_pane_g1

0x45af,	// (0x00018959) scroll_sc2_right_pane_g1

0x1551,	// (0x000158fb) bg_popup_sub_pane_cp10

0x45b9,	// (0x00018963) list_choice_list_pane

0x321d,	// (0x000175c7) list_single_choice_list_pane_ParamLimits

0x321d,	// (0x000175c7) list_single_choice_list_pane

0x45d2,	// (0x0001897c) list_single_choice_list_pane_g1

0xca89,	// (0x00020e33) list_single_choice_list_pane_t1_ParamLimits

0xca89,	// (0x00020e33) list_single_choice_list_pane_t1

0x45da,	// (0x00018984) choice_list_pane_g1

0x45e2,	// (0x0001898c) choice_list_pane_t1

0xc167,	// (0x00020511) input_focus_pane_cp11

0xdfaa,	// (0x00022354) title_pane_stacon_g2_ParamLimits

0xdfaa,	// (0x00022354) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x00023a6e) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00023a6e) title_pane_stacon_g

0x1222,	// (0x000155cc) cursor_press_pane

0x8fb7,	// (0x0001d361) popup_fep_hwr_window_ParamLimits

0x8fb7,	// (0x0001d361) popup_fep_hwr_window

0xe853,	// (0x00022bfd) popup_fep_vkb_window_ParamLimits

0xe853,	// (0x00022bfd) popup_fep_vkb_window

0x45f0,	// (0x0001899a) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00023ee1) fep_vkb_side_pane_g_ParamLimits

0xeced,	// (0x00023097) fep_hwr_candidate_pane_ParamLimits

0xeced,	// (0x00023097) fep_hwr_candidate_pane

0xed17,	// (0x000230c1) fep_hwr_side_pane_ParamLimits

0xed17,	// (0x000230c1) fep_hwr_side_pane

0xed39,	// (0x000230e3) fep_hwr_top_pane_ParamLimits

0xed39,	// (0x000230e3) fep_hwr_top_pane

0xed51,	// (0x000230fb) fep_hwr_write_pane_ParamLimits

0xed51,	// (0x000230fb) fep_hwr_write_pane

0xfb37,	// (0x00023ee1) fep_vkb_side_pane_g

0x45f8,	// (0x000189a2) fep_hwr_top_pane_g1

0x460a,	// (0x000189b4) fep_hwr_top_pane_g2

0xed8b,	// (0x00023135) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00023ebd) fep_hwr_top_pane_g

0xeda0,	// (0x0002314a) fep_hwr_top_text_pane

0xe317,	// (0x000226c1) fep_hwr_top_text_pane_g1

0x4640,	// (0x000189ea) fep_hwr_top_text_pane_t1

0xee2f,	// (0x000231d9) fep_hwr_candidate_pane_g1

0x488b,	// (0x00018c35) fep_vkb_keypad_pane_g3_ParamLimits

0x488b,	// (0x00018c35) fep_vkb_keypad_pane_g3

0x48b7,	// (0x00018c61) fep_vkb_keypad_pane_g4_ParamLimits

0x48b7,	// (0x00018c61) fep_vkb_keypad_pane_g4

0x492e,	// (0x00018cd8) fep_vkb_bottom_pane_g2_ParamLimits

0x492e,	// (0x00018cd8) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00023ee8) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00023ee8) fep_vkb_bottom_pane_g

0x45af,	// (0x00018959) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00023ef2) cell_vkb_side_pane_g

0x49b9,	// (0x00018d63) cell_vkb_side_pane_t1

0x49c7,	// (0x00018d71) cell_vkb_side_pane_t1_copy1

0x45af,	// (0x00018959) bg_fep_vkb_candidate_pane_g2

0x4b0b,	// (0x00018eb5) cell_vkb_candidate_pane_ParamLimits

0x464e,	// (0x000189f8) aid_size_cell_vkb_ParamLimits

0x464e,	// (0x000189f8) aid_size_cell_vkb

0x4b0b,	// (0x00018eb5) cell_vkb_candidate_pane

0xee56,	// (0x00023200) bg_popup_fep_shadow_pane_g1

0xb7a8,	// (0x0001fb52) fep_vkb_bottom_pane_ParamLimits

0xb7a8,	// (0x0001fb52) fep_vkb_bottom_pane

0x471d,	// (0x00018ac7) fep_vkb_candidate_pane_ParamLimits

0x471d,	// (0x00018ac7) fep_vkb_candidate_pane

0xb7d4,	// (0x0001fb7e) fep_vkb_keypad_pane_ParamLimits

0xb7d4,	// (0x0001fb7e) fep_vkb_keypad_pane

0xb7fb,	// (0x0001fba5) fep_vkb_side_pane_ParamLimits

0xb7fb,	// (0x0001fba5) fep_vkb_side_pane

0xb837,	// (0x0001fbe1) fep_vkb_top_pane_ParamLimits

0xb837,	// (0x0001fbe1) fep_vkb_top_pane

0x47e4,	// (0x00018b8e) fep_vkb_top_pane_g1_ParamLimits

0x47e4,	// (0x00018b8e) fep_vkb_top_pane_g1

0x47f3,	// (0x00018b9d) fep_vkb_top_pane_g2_ParamLimits

0x47f3,	// (0x00018b9d) fep_vkb_top_pane_g2

0x4802,	// (0x00018bac) fep_vkb_top_pane_g3_ParamLimits

0x4802,	// (0x00018bac) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00023ed8) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00023ed8) fep_vkb_top_pane_g

0x4820,	// (0x00018bca) fep_vkb_top_text_pane_ParamLimits

0x4820,	// (0x00018bca) fep_vkb_top_text_pane

0xb873,	// (0x0001fc1d) fep_vkb_side_pane_g1_ParamLimits

0xb873,	// (0x0001fc1d) fep_vkb_side_pane_g1

0x487a,	// (0x00018c24) grid_vkb_side_pane_ParamLimits

0x487a,	// (0x00018c24) grid_vkb_side_pane

0xee5e,	// (0x00023208) bg_popup_fep_shadow_pane_g2

0xee67,	// (0x00023211) bg_popup_fep_shadow_pane_g3

0xee6f,	// (0x00023219) bg_popup_fep_shadow_pane_g4

0xee78,	// (0x00023222) bg_popup_fep_shadow_pane_g5

0xee82,	// (0x0002322c) bg_popup_fep_shadow_pane_g6

0xee8a,	// (0x00023234) bg_popup_fep_shadow_pane_g7

0xc97c,	// (0x00020d26) bg_popup_fep_shadow_pane_g8

0x48d9,	// (0x00018c83) grid_vkb_keypad_number_pane_ParamLimits

0x48d9,	// (0x00018c83) grid_vkb_keypad_number_pane

0x48ed,	// (0x00018c97) grid_vkb_keypad_pane_ParamLimits

0x48ed,	// (0x00018c97) grid_vkb_keypad_pane

0x4913,	// (0x00018cbd) fep_vkb_bottom_pane_g1_ParamLimits

0x4913,	// (0x00018cbd) fep_vkb_bottom_pane_g1

0x493c,	// (0x00018ce6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x493c,	// (0x00018ce6) grid_vkb_keypad_bottom_left_pane

0x4951,	// (0x00018cfb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4951,	// (0x00018cfb) grid_vkb_keypad_bottom_right_pane

0x4966,	// (0x00018d10) fep_vkb_top_text_pane_g1

0xb8ba,	// (0x0001fc64) fep_vkb_top_text_pane_t1

0xb8cc,	// (0x0001fc76) cell_vkb_side_pane_ParamLimits

0xb8cc,	// (0x0001fc76) cell_vkb_side_pane

0x45af,	// (0x00018959) cell_vkb_side_pane_g1

0x49d5,	// (0x00018d7f) cell_vkb_keypad_pane_ParamLimits

0x49d5,	// (0x00018d7f) cell_vkb_keypad_pane

0x4a62,	// (0x00018e0c) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00023f05) bg_popup_fep_shadow_pane_g

0xee9c,	// (0x00023246) cell_hwr_side_pane_g1

0xee9c,	// (0x00023246) cell_hwr_side_pane_g2

0x4a6c,	// (0x00018e16) cell_vkb_keypad_pane_t1

0xb8e2,	// (0x0001fc8c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb8e2,	// (0x0001fc8c) cell_vkb_keypad_bottom_left_pane

0xb8f7,	// (0x0001fca1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb8f7,	// (0x0001fca1) cell_vkb_keypad_bottom_right_pane

0x45af,	// (0x00018959) cell_vkb_keypad_bottom_left_pane_g1

0x45af,	// (0x00018959) cell_vkb_keypad_bottom_right_pane_g1

0x4ad0,	// (0x00018e7a) cell_vkb_keypad_number_pane_ParamLimits

0x4ad0,	// (0x00018e7a) cell_vkb_keypad_number_pane

0x4aef,	// (0x00018e99) cell_vkb_keypad_number_pane_g1

0x4af9,	// (0x00018ea3) cell_vkb_keypad_number_pane_g2

0x4b02,	// (0x00018eac) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00023ef7) cell_vkb_keypad_number_pane_g

0x4a6c,	// (0x00018e16) cell_vkb_keypad_number_pane_t1

0x4b2c,	// (0x00018ed6) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00023f18) cell_hwr_side_pane_g

0x4b45,	// (0x00018eef) cell_hwr_side_pane_t1

0xeea6,	// (0x00023250) cell_hwr_side_pane_t1_copy1

0xeeb4,	// (0x0002325e) cell_hwr_candidate_pane_g1

0xeee3,	// (0x0002328d) cell_hwr_candidate_pane_t1

0x45af,	// (0x00018959) cell_vkb_candidate_pane_g2

0x4b89,	// (0x00018f33) cell_vkb_candidate_pane_t1

0xe7fd,	// (0x00022ba7) bg_popup_fep_shadow_pane_ParamLimits

0xe7fd,	// (0x00022ba7) bg_popup_fep_shadow_pane

0xed6b,	// (0x00023115) bg_fep_hwr_top_pane_g4

0x461c,	// (0x000189c6) bg_hwr_side_pane_g1_ParamLimits

0x461c,	// (0x000189c6) bg_hwr_side_pane_g1

0x9811,	// (0x0001dbbb) cell_hwr_side_pane_ParamLimits

0x9811,	// (0x0001dbbb) cell_hwr_side_pane

0xedb5,	// (0x0002315f) fep_hwr_write_pane_g1_ParamLimits

0xedb5,	// (0x0002315f) fep_hwr_write_pane_g1

0xedc2,	// (0x0002316c) fep_hwr_write_pane_g2_ParamLimits

0xedc2,	// (0x0002316c) fep_hwr_write_pane_g2

0xedcf,	// (0x00023179) fep_hwr_write_pane_g3_ParamLimits

0xedcf,	// (0x00023179) fep_hwr_write_pane_g3

0x9831,	// (0x0001dbdb) fep_hwr_write_pane_g4_ParamLimits

0x9831,	// (0x0001dbdb) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00023ec4) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00023ec4) fep_hwr_write_pane_g

0xed6b,	// (0x00023115) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xed6b,	// (0x00023115) bg_fep_hwr_candidate_pane_g2

0xeddd,	// (0x00023187) cell_hwr_candidate_pane_ParamLimits

0xeddd,	// (0x00023187) cell_hwr_candidate_pane

0xee2f,	// (0x000231d9) fep_hwr_candidate_pane_g1_ParamLimits

0x467c,	// (0x00018a26) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x467c,	// (0x00018a26) bg_popup_fep_shadow_pane_cp2

0x4812,	// (0x00018bbc) fep_vkb_top_pane_g4_ParamLimits

0x4812,	// (0x00018bbc) fep_vkb_top_pane_g4

0x4858,	// (0x00018c02) fep_vkb_side_pane_g2_ParamLimits

0x4858,	// (0x00018c02) fep_vkb_side_pane_g2

0xa556,	// (0x0001e900) list_setting_pane_t4_ParamLimits

0xa556,	// (0x0001e900) list_setting_pane_t4

0xa5d2,	// (0x0001e97c) list_setting_number_pane_t5_ParamLimits

0xa5d2,	// (0x0001e97c) list_setting_number_pane_t5

0xe36d,	// (0x00022717) list_double_heading_pane_cp2_ParamLimits

0xe36d,	// (0x00022717) list_double_heading_pane_cp2

0x4b97,	// (0x00018f41) list_double_heading_pane_g1_cp2_ParamLimits

0x4b97,	// (0x00018f41) list_double_heading_pane_g1_cp2

0x4ba3,	// (0x00018f4d) list_double_heading_pane_g2_cp2_ParamLimits

0x4ba3,	// (0x00018f4d) list_double_heading_pane_g2_cp2

0x4bb7,	// (0x00018f61) list_double_heading_pane_t1_cp2_ParamLimits

0x4bb7,	// (0x00018f61) list_double_heading_pane_t1_cp2

0x4bcd,	// (0x00018f77) list_double_heading_pane_t2_cp2_ParamLimits

0x4bcd,	// (0x00018f77) list_double_heading_pane_t2_cp2

0xc15f,	// (0x00020509) aid_value_unit2

0xde86,	// (0x00022230) popup_preview_fixed_window

0xc324,	// (0x000206ce) bg_popup_preview_window_pane_cp02

0x4bdf,	// (0x00018f89) list_preview_fixed_pane

0x4c25,	// (0x00018fcf) list_empty_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_empty_pane_fp

0x4c25,	// (0x00018fcf) list_single_cale_day_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_cale_day_pane_fp

0x4c25,	// (0x00018fcf) list_single_graphic_heading_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_graphic_heading_pane_fp

0x4c25,	// (0x00018fcf) list_single_graphic_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_graphic_pane_fp

0x4c25,	// (0x00018fcf) list_single_heading_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_heading_pane_fp

0x4c25,	// (0x00018fcf) list_single_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_pane_fp

0x4c3e,	// (0x00018fe8) list_single_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00018fe8) list_single_pane_fp_g1

0x4b97,	// (0x00018f41) list_single_pane_fp_g2_ParamLimits

0x4b97,	// (0x00018f41) list_single_pane_fp_g2

0x4ba3,	// (0x00018f4d) list_single_pane_fp_g3_ParamLimits

0x4ba3,	// (0x00018f4d) list_single_pane_fp_g3

0x4c4a,	// (0x00018ff4) list_single_pane_fp_g4_ParamLimits

0x4c4a,	// (0x00018ff4) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00023f2b) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00023f2b) list_single_pane_fp_g

0x4c56,	// (0x00019000) list_single_pane_fp_t1_ParamLimits

0x4c56,	// (0x00019000) list_single_pane_fp_t1

0x4c6d,	// (0x00019017) list_single_graphic_pane_fp_g1_ParamLimits

0x4c6d,	// (0x00019017) list_single_graphic_pane_fp_g1

0x4c3e,	// (0x00018fe8) list_single_graphic_pane_fp_g2_ParamLimits

0x4c3e,	// (0x00018fe8) list_single_graphic_pane_fp_g2

0x4b97,	// (0x00018f41) list_single_graphic_pane_fp_g3_ParamLimits

0x4b97,	// (0x00018f41) list_single_graphic_pane_fp_g3

0x4ba3,	// (0x00018f4d) list_single_graphic_pane_fp_g4_ParamLimits

0x4ba3,	// (0x00018f4d) list_single_graphic_pane_fp_g4

0x4c4a,	// (0x00018ff4) list_single_graphic_pane_fp_g5_ParamLimits

0x4c4a,	// (0x00018ff4) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023f34) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023f34) list_single_graphic_pane_fp_g

0x4c79,	// (0x00019023) list_single_graphic_pane_fp_t1_ParamLimits

0x4c79,	// (0x00019023) list_single_graphic_pane_fp_t1

0x4c6d,	// (0x00019017) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4c6d,	// (0x00019017) list_single_graphic_heading_pane_fp_g1

0x4c3e,	// (0x00018fe8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4c3e,	// (0x00018fe8) list_single_graphic_heading_pane_fp_g2

0x4b97,	// (0x00018f41) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b97,	// (0x00018f41) list_single_graphic_heading_pane_fp_g3

0x4ba3,	// (0x00018f4d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4ba3,	// (0x00018f4d) list_single_graphic_heading_pane_fp_g4

0x4c4a,	// (0x00018ff4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4c4a,	// (0x00018ff4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023f34) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023f34) list_single_graphic_heading_pane_fp_g

0x4c8f,	// (0x00019039) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4c8f,	// (0x00019039) list_single_graphic_heading_pane_fp_t1

0x4ca5,	// (0x0001904f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ca5,	// (0x0001904f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00023f3f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00023f3f) list_single_graphic_heading_pane_fp_t

0x4cb7,	// (0x00019061) list_single_cale_day_pane_fp_g1_ParamLimits

0x4cb7,	// (0x00019061) list_single_cale_day_pane_fp_g1

0x4cef,	// (0x00019099) list_single_cale_day_pane_fp_g2_ParamLimits

0x4cef,	// (0x00019099) list_single_cale_day_pane_fp_g2

0x4cfb,	// (0x000190a5) list_single_cale_day_pane_fp_g3_ParamLimits

0x4cfb,	// (0x000190a5) list_single_cale_day_pane_fp_g3

0x4d23,	// (0x000190cd) list_single_cale_day_pane_fp_g4_ParamLimits

0x4d23,	// (0x000190cd) list_single_cale_day_pane_fp_g4

0x4d47,	// (0x000190f1) list_single_cale_day_pane_fp_g5_ParamLimits

0x4d47,	// (0x000190f1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00023f44) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00023f44) list_single_cale_day_pane_fp_g

0x4d6b,	// (0x00019115) list_single_cale_day_pane_fp_t1_ParamLimits

0x4d6b,	// (0x00019115) list_single_cale_day_pane_fp_t1

0x4d91,	// (0x0001913b) list_single_cale_day_pane_fp_t2_ParamLimits

0x4d91,	// (0x0001913b) list_single_cale_day_pane_fp_t2

0x4daa,	// (0x00019154) list_single_cale_day_pane_fp_t3_ParamLimits

0x4daa,	// (0x00019154) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00023f4f) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00023f4f) list_single_cale_day_pane_fp_t

0x4c3e,	// (0x00018fe8) list_empty_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00018fe8) list_empty_pane_fp_g1

0x4dc3,	// (0x0001916d) list_empty_pane_fp_t1

0x4dd1,	// (0x0001917b) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00023f56) list_empty_pane_fp_t

0x4c3e,	// (0x00018fe8) list_single_heading_pane_fp_g1_ParamLimits

0x4c3e,	// (0x00018fe8) list_single_heading_pane_fp_g1

0x4b97,	// (0x00018f41) list_single_heading_pane_fp_g2_ParamLimits

0x4b97,	// (0x00018f41) list_single_heading_pane_fp_g2

0x4ba3,	// (0x00018f4d) list_single_heading_pane_fp_g3_ParamLimits

0x4ba3,	// (0x00018f4d) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00023f5b) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00023f5b) list_single_heading_pane_fp_g

0x4ddf,	// (0x00019189) list_single_heading_pane_fp_t1_ParamLimits

0x4ddf,	// (0x00019189) list_single_heading_pane_fp_t1

0x4df1,	// (0x0001919b) list_single_heading_pane_fp_t2_ParamLimits

0x4df1,	// (0x0001919b) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00023f62) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00023f62) list_single_heading_pane_fp_t

0xca9e,	// (0x00020e48) aid_size_cell_fast

0xc307,	// (0x000206b1) soft_indicator_pane_cp1_t1

0xcadb,	// (0x00020e85) cell_app_pane_cp2_ParamLimits

0xcadb,	// (0x00020e85) cell_app_pane_cp2

0xecd6,	// (0x00023080) fep_hwr_candidate_drop_down_list_pane

0xee49,	// (0x000231f3) fep_hwr_candidate_pane_g3_ParamLimits

0xee49,	// (0x000231f3) fep_hwr_candidate_pane_g3

0xcbea,	// (0x00020f94) fep_hwr_candidate_pane_g4_ParamLimits

0xcbea,	// (0x00020f94) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00023ed1) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00023ed1) fep_hwr_candidate_pane_g

0x470c,	// (0x00018ab6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x470c,	// (0x00018ab6) fep_vkb_candidate_drop_down_list_pane

0x4b34,	// (0x00018ede) fep_vkb_candidate_pane_g3

0x4b3c,	// (0x00018ee6) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00023efe) fep_vkb_candidate_pane_g

0xeeb4,	// (0x0002325e) cell_hwr_candidate_pane_g1_ParamLimits

0xeec2,	// (0x0002326c) cell_hwr_candidate_pane_g3_ParamLimits

0xeec2,	// (0x0002326c) cell_hwr_candidate_pane_g3

0x59d9,	// (0x00019d83) cell_hwr_candidate_pane_g4_ParamLimits

0x59d9,	// (0x00019d83) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00023f1d) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00023f1d) cell_hwr_candidate_pane_g

0x4b53,	// (0x00018efd) cell_vkb_candidate_pane_g3_ParamLimits

0x4b53,	// (0x00018efd) cell_vkb_candidate_pane_g3

0x4b6e,	// (0x00018f18) cell_vkb_candidate_pane_g4_ParamLimits

0x4b6e,	// (0x00018f18) cell_vkb_candidate_pane_g4

0x4e07,	// (0x000191b1) cell_app_pane_cp2_g1_ParamLimits

0x4e07,	// (0x000191b1) cell_app_pane_cp2_g1

0x4e25,	// (0x000191cf) cell_app_pane_cp2_g2_ParamLimits

0x4e25,	// (0x000191cf) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00023f67) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00023f67) cell_app_pane_cp2_g

0x4e31,	// (0x000191db) cell_app_pane_cp2_t1_ParamLimits

0x4e31,	// (0x000191db) cell_app_pane_cp2_t1

0xc8a9,	// (0x00020c53) grid_highlight_pane_cp1_ParamLimits

0xc8a9,	// (0x00020c53) grid_highlight_pane_cp1

0xef01,	// (0x000232ab) cell_hwr_candidate_pane_cp1_ParamLimits

0xef01,	// (0x000232ab) cell_hwr_candidate_pane_cp1

0xeeb4,	// (0x0002325e) fep_hwr_candidate_drop_down_list_pane_g1

0xef25,	// (0x000232cf) fep_hwr_candidate_drop_down_list_pane_g2

0xef32,	// (0x000232dc) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00023f6c) fep_hwr_candidate_drop_down_list_pane_g

0xef3f,	// (0x000232e9) fep_hwr_candidate_drop_down_list_scroll_pane

0xef48,	// (0x000232f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xef48,	// (0x000232f2) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xef55,	// (0x000232ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xef55,	// (0x000232ff) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xef62,	// (0x0002330c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xef62,	// (0x0002330c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xef6f,	// (0x00023319) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xef6f,	// (0x00023319) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xef8a,	// (0x00023334) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xef8a,	// (0x00023334) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xefa5,	// (0x0002334f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xefa5,	// (0x0002334f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xefc0,	// (0x0002336a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xefc0,	// (0x0002336a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xefdb,	// (0x00023385) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xefdb,	// (0x00023385) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00023f73) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00023f73) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4e43,	// (0x000191ed) cell_vkb_candidate_pane_cp1_ParamLimits

0x4e43,	// (0x000191ed) cell_vkb_candidate_pane_cp1

0x4812,	// (0x00018bbc) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4812,	// (0x00018bbc) fep_vkb_candidate_drop_down_list_pane_g1

0x4e69,	// (0x00019213) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4e69,	// (0x00019213) fep_vkb_candidate_drop_down_list_pane_g2

0x4e76,	// (0x00019220) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4e76,	// (0x00019220) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00023f84) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00023f84) fep_vkb_candidate_drop_down_list_pane_g

0x4e83,	// (0x0001922d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4e83,	// (0x0001922d) fep_vkb_candidate_drop_down_list_scroll_pane

0x4e90,	// (0x0001923a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4e90,	// (0x0001923a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4e9d,	// (0x00019247) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4e9d,	// (0x00019247) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4ea9,	// (0x00019253) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4ea9,	// (0x00019253) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4eb5,	// (0x0001925f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4eb5,	// (0x0001925f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ed6,	// (0x00019280) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ed6,	// (0x00019280) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4ef7,	// (0x000192a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4ef7,	// (0x000192a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4f18,	// (0x000192c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4f18,	// (0x000192c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4f39,	// (0x000192e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4f39,	// (0x000192e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00023f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00023f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e44,	// (0x0001e1ee) title_pane_g1_ParamLimits

0x9e57,	// (0x0001e201) title_pane_g2_ParamLimits

0xf54e,	// (0x000238f8) title_pane_g_ParamLimits

0xe307,	// (0x000226b1) aid_call2_pane

0xe30f,	// (0x000226b9) aid_call_pane

0xe317,	// (0x000226c1) popup_clock_analogue_window_g1

0xe317,	// (0x000226c1) popup_clock_analogue_window_g2

0xe31f,	// (0x000226c9) popup_clock_analogue_window_g3

0xe328,	// (0x000226d2) popup_clock_analogue_window_g4

0xc171,	// (0x0002051b) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00023a9d) popup_clock_analogue_window_g

0xe330,	// (0x000226da) popup_clock_analogue_window_t1

0xe38d,	// (0x00022737) clock_digital_number_pane_ParamLimits

0xe38d,	// (0x00022737) clock_digital_number_pane

0xe399,	// (0x00022743) clock_digital_number_pane_cp02_ParamLimits

0xe399,	// (0x00022743) clock_digital_number_pane_cp02

0xe3a5,	// (0x0002274f) clock_digital_number_pane_cp03_ParamLimits

0xe3a5,	// (0x0002274f) clock_digital_number_pane_cp03

0xe3b1,	// (0x0002275b) clock_digital_number_pane_cp04_ParamLimits

0xe3b1,	// (0x0002275b) clock_digital_number_pane_cp04

0xe3bd,	// (0x00022767) clock_digital_separator_pane_ParamLimits

0xe3bd,	// (0x00022767) clock_digital_separator_pane

0xe3c9,	// (0x00022773) popup_clock_digital_window_t1_ParamLimits

0xe3c9,	// (0x00022773) popup_clock_digital_window_t1

0xc171,	// (0x0002051b) clock_digital_number_pane_g1

0xc171,	// (0x0002051b) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00023aa8) clock_digital_number_pane_g

0xc171,	// (0x0002051b) clock_digital_separator_pane_g1

0xc171,	// (0x0002051b) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00023aa8) clock_digital_separator_pane_g

0xac58,	// (0x0001f002) aid_fill_nsta_ParamLimits

0xad90,	// (0x0001f13a) indicator_nsta_pane_ParamLimits

0x186c,	// (0x00015c16) popup_clock_analogue_window

0x186c,	// (0x00015c16) popup_clock_digital_window

0xcbdc,	// (0x00020f86) grid_indicator_nsta_pane_ParamLimits

0x3fc6,	// (0x00018370) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00023e51) clock_nsta_pane_t

0xe154,	// (0x000224fe) aid_size_max_handle

0x8d6d,	// (0x0001d117) aid_size_min_handle

0x1222,	// (0x000155cc) editor_scroll_pane

0x4f54,	// (0x000192fe) ex_editor_pane

0xca64,	// (0x00020e0e) scroll_pane_cp13

0xc7ce,	// (0x00020b78) scroll_pane_cp14

0xe365,	// (0x0002270f) scroll_pane_cp36

0xa94f,	// (0x0001ecf9) list_single_graphic_hl_pane_cp2_ParamLimits

0xa94f,	// (0x0001ecf9) list_single_graphic_hl_pane_cp2

0xb42b,	// (0x0001f7d5) list_single_graphic_hl_pane_ParamLimits

0xb42b,	// (0x0001f7d5) list_single_graphic_hl_pane

0x4f5c,	// (0x00019306) aid_size_min_hl_cp1

0x4f65,	// (0x0001930f) list_highlight_pane_cp34_ParamLimits

0x4f65,	// (0x0001930f) list_highlight_pane_cp34

0x4f76,	// (0x00019320) list_single_graphic_hl_pane_g1_ParamLimits

0x4f76,	// (0x00019320) list_single_graphic_hl_pane_g1

0xb912,	// (0x0001fcbc) list_single_graphic_hl_pane_g2_ParamLimits

0xb912,	// (0x0001fcbc) list_single_graphic_hl_pane_g2

0xb912,	// (0x0001fcbc) list_single_graphic_hl_pane_g3_ParamLimits

0xb912,	// (0x0001fcbc) list_single_graphic_hl_pane_g3

0x4fe9,	// (0x00019393) list_single_graphic_hl_pane_g4_ParamLimits

0x4fe9,	// (0x00019393) list_single_graphic_hl_pane_g4

0x4ff5,	// (0x0001939f) list_single_graphic_hl_pane_g5_ParamLimits

0x4ff5,	// (0x0001939f) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00023f9c) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00023f9c) list_single_graphic_hl_pane_g

0xb91e,	// (0x0001fcc8) list_single_graphic_hl_pane_t1_ParamLimits

0xb91e,	// (0x0001fcc8) list_single_graphic_hl_pane_t1

0x4fb9,	// (0x00019363) aid_size_min_hl_cp2

0x4fc2,	// (0x0001936c) list_highlight_pane_cp34_cp2_ParamLimits

0x4fc2,	// (0x0001936c) list_highlight_pane_cp34_cp2

0x4f76,	// (0x00019320) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4f76,	// (0x00019320) list_single_graphic_hl_pane_g1_cp2

0x4fcf,	// (0x00019379) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4fcf,	// (0x00019379) list_single_graphic_hl_pane_g2_cp2

0x4fdb,	// (0x00019385) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x4fdb,	// (0x00019385) list_single_graphic_hl_pane_g3_cp2

0x4fe9,	// (0x00019393) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4fe9,	// (0x00019393) list_single_graphic_hl_pane_g4_cp2

0x4ff5,	// (0x0001939f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4ff5,	// (0x0001939f) list_single_graphic_hl_pane_g5_cp2

0x8dc8,	// (0x0001d172) control_pane_g4_ParamLimits

0x8dc8,	// (0x0001d172) control_pane_g4

0x1551,	// (0x000158fb) bg_popup_sub_pane_cp10_ParamLimits

0x45b9,	// (0x00018963) list_choice_list_pane_ParamLimits

0x45c8,	// (0x00018972) scroll_pane_cp23

0xc324,	// (0x000206ce) bg_popup_preview_window_pane_cp02_ParamLimits

0x4bdf,	// (0x00018f89) list_preview_fixed_pane_ParamLimits

0x4bf5,	// (0x00018f9f) list_preview_fixed_pane_cp_ParamLimits

0x4bf5,	// (0x00018f9f) list_preview_fixed_pane_cp

0x4c01,	// (0x00018fab) popup_preview_fixed_window_g1_ParamLimits

0x4c01,	// (0x00018fab) popup_preview_fixed_window_g1

0x4c0d,	// (0x00018fb7) popup_preview_fixed_window_g2_ParamLimits

0x4c0d,	// (0x00018fb7) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00023f24) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00023f24) popup_preview_fixed_window_g

0xe08f,	// (0x00022439) aid_navi_side_left_pane_ParamLimits

0xe0a4,	// (0x0002244e) aid_navi_side_right_pane_ParamLimits

0xe0bc,	// (0x00022466) navi_icon_pane_stacon_ParamLimits

0xe0d0,	// (0x0002247a) navi_navi_pane_stacon_ParamLimits

0xe0bc,	// (0x00022466) navi_text_pane_stacon_ParamLimits

0xdd77,	// (0x00022121) main_text_info_pane

0x501f,	// (0x000193c9) listscroll_text_info_pane

0x5027,	// (0x000193d1) list_text_info_pane_ParamLimits

0x5027,	// (0x000193d1) list_text_info_pane

0x5036,	// (0x000193e0) scroll_pane_cp24_ParamLimits

0x5036,	// (0x000193e0) scroll_pane_cp24

0xb934,	// (0x0001fcde) list_text_info_pane_t1_ParamLimits

0xb934,	// (0x0001fcde) list_text_info_pane_t1

0x8f1b,	// (0x0001d2c5) popup_fast_swap2_window_ParamLimits

0x8f1b,	// (0x0001d2c5) popup_fast_swap2_window

0x5079,	// (0x00019423) aid_size_cell_fast2

0xc167,	// (0x00020511) bg_popup_window_pane_cp17

0x1fcc,	// (0x00016376) heading_pane_cp2

0xc553,	// (0x000208fd) listscroll_fast2_pane

0x5083,	// (0x0001942d) grid_fast2_pane

0x508d,	// (0x00019437) listscroll_fast2_pane_g1

0x5097,	// (0x00019441) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00023fa7) listscroll_fast2_pane_g

0xca64,	// (0x00020e0e) scroll_pane_cp26

0x50a1,	// (0x0001944b) cell_fast2_pane_ParamLimits

0x50a1,	// (0x0001944b) cell_fast2_pane

0x50b8,	// (0x00019462) cell_fast2_pane_g1

0x50c1,	// (0x0001946b) cell_fast2_pane_g2

0x50ca,	// (0x00019474) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00023fac) cell_fast2_pane_g

0xc595,	// (0x0002093f) grid_highlight_pane_cp9

0xe7cd,	// (0x00022b77) main_eswt_pane_ParamLimits

0xe7cd,	// (0x00022b77) main_eswt_pane

0x504b,	// (0x000193f5) list_single_text_info_pane

0x50d2,	// (0x0001947c) eswt_ctrl_button_pane

0x50d2,	// (0x0001947c) eswt_ctrl_canvas_pane

0x50da,	// (0x00019484) eswt_ctrl_combo_pane

0x50d2,	// (0x0001947c) eswt_ctrl_default_pane

0x50d2,	// (0x0001947c) eswt_ctrl_label_pane

0x50e2,	// (0x0001948c) eswt_ctrl_wait_pane

0x50ea,	// (0x00019494) eswt_shell_pane

0xc167,	// (0x00020511) listscroll_eswt_app_pane

0x510a,	// (0x000194b4) popup_eswt_tasktip_window_ParamLimits

0x510a,	// (0x000194b4) popup_eswt_tasktip_window

0x1bdb,	// (0x00015f85) bg_popup_window_pane_cp18

0x511b,	// (0x000194c5) eswt_control_pane_g1_ParamLimits

0x511b,	// (0x000194c5) eswt_control_pane_g1

0x5128,	// (0x000194d2) eswt_control_pane_g2_ParamLimits

0x5128,	// (0x000194d2) eswt_control_pane_g2

0x5135,	// (0x000194df) eswt_control_pane_g3_ParamLimits

0x5135,	// (0x000194df) eswt_control_pane_g3

0x5142,	// (0x000194ec) eswt_control_pane_g4_ParamLimits

0x5142,	// (0x000194ec) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00023fb3) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00023fb3) eswt_control_pane_g

0xc8a9,	// (0x00020c53) bg_button_pane_ParamLimits

0xc8a9,	// (0x00020c53) bg_button_pane

0xc5aa,	// (0x00020954) common_borders_pane_copy2_ParamLimits

0xc5aa,	// (0x00020954) common_borders_pane_copy2

0x514f,	// (0x000194f9) control_button_pane_g1_ParamLimits

0x514f,	// (0x000194f9) control_button_pane_g1

0x515b,	// (0x00019505) control_button_pane_g2_ParamLimits

0x515b,	// (0x00019505) control_button_pane_g2

0x5167,	// (0x00019511) control_button_pane_g3_ParamLimits

0x5167,	// (0x00019511) control_button_pane_g3

0x0002,

0xfc12,	// (0x00023fbc) control_button_pane_g_ParamLimits

0xfc12,	// (0x00023fbc) control_button_pane_g

0x517b,	// (0x00019525) control_button_pane_t1

0x5189,	// (0x00019533) control_button_pane_t2

0x0001,

0xfc19,	// (0x00023fc3) control_button_pane_t

0x1ab7,	// (0x00015e61) bg_button_pane_g1

0x1ac7,	// (0x00015e71) bg_button_pane_g2

0x1abf,	// (0x00015e69) bg_button_pane_g3

0x1ad7,	// (0x00015e81) bg_button_pane_g4

0x1acf,	// (0x00015e79) bg_button_pane_g5

0x1adf,	// (0x00015e89) bg_button_pane_g6

0x1ae7,	// (0x00015e91) bg_button_pane_g7

0x1af7,	// (0x00015ea1) bg_button_pane_g8

0x1aef,	// (0x00015e99) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00023c06) bg_button_pane_g

0x4574,	// (0x0001891e) common_borders_pane_ParamLimits

0x4574,	// (0x0001891e) common_borders_pane

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy1_ParamLimits

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy1

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy1_ParamLimits

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy1

0x5135,	// (0x000194df) eswt_control_pane_g3_copy1_ParamLimits

0x5135,	// (0x000194df) eswt_control_pane_g3_copy1

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy1_ParamLimits

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy1

0x45af,	// (0x00018959) bg_eswt_ctrl_canvas_pane_g1

0x4574,	// (0x0001891e) common_borders_pane_cp2_ParamLimits

0x4574,	// (0x0001891e) common_borders_pane_cp2

0x4574,	// (0x0001891e) common_borders_pane_cp3_ParamLimits

0x4574,	// (0x0001891e) common_borders_pane_cp3

0x5197,	// (0x00019541) separator_horizontal_pane

0x519f,	// (0x00019549) separator_vertical_pane

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy2_ParamLimits

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy2

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy2_ParamLimits

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy2

0x5135,	// (0x000194df) eswt_control_pane_g3_copy2_ParamLimits

0x5135,	// (0x000194df) eswt_control_pane_g3_copy2

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy2_ParamLimits

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy2

0xc167,	// (0x00020511) common_borders_pane_cp4

0x51a8,	// (0x00019552) separator_horizontal_pane_g1

0x51b1,	// (0x0001955b) separator_horizontal_pane_g2

0x51ba,	// (0x00019564) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00023fc8) separator_horizontal_pane_g

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy3_ParamLimits

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy3

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy3_ParamLimits

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy3

0x5135,	// (0x000194df) eswt_control_pane_g3_copy3_ParamLimits

0x5135,	// (0x000194df) eswt_control_pane_g3_copy3

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy3_ParamLimits

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy3

0xc167,	// (0x00020511) common_borders_pane_cp5

0x51c3,	// (0x0001956d) separator_vertical_pane_g1

0x51cc,	// (0x00019576) separator_vertical_pane_g2

0x51d5,	// (0x0001957f) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00023fcf) separator_vertical_pane_g

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy4_ParamLimits

0x511b,	// (0x000194c5) eswt_control_pane_g1_copy4

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy4_ParamLimits

0x5128,	// (0x000194d2) eswt_control_pane_g2_copy4

0x5135,	// (0x000194df) eswt_control_pane_g3_copy4_ParamLimits

0x5135,	// (0x000194df) eswt_control_pane_g3_copy4

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy4_ParamLimits

0x5142,	// (0x000194ec) eswt_control_pane_g4_copy4

0xb956,	// (0x0001fd00) eswt_ctrl_combo_button_pane

0xb95e,	// (0x0001fd08) eswt_ctrl_input_pane

0xb966,	// (0x0001fd10) popup_choice_list_window_cp70

0xb96e,	// (0x0001fd18) eswt_ctrl_input_pane_t1

0xc167,	// (0x00020511) input_focus_pane_cp70

0x4574,	// (0x0001891e) bg_button_pane_cp70_ParamLimits

0x4574,	// (0x0001891e) bg_button_pane_cp70

0xb97c,	// (0x0001fd26) eswt_ctrl_combo_button_pane_g1

0x520c,	// (0x000195b6) wait_bar_pane_cp70

0x1bdb,	// (0x00015f85) bg_popup_window_pane_cp70_ParamLimits

0x1bdb,	// (0x00015f85) bg_popup_window_pane_cp70

0x5214,	// (0x000195be) popup_eswt_tasktip_window_t1

0x522a,	// (0x000195d4) wait_bar_pane_cp71_ParamLimits

0x522a,	// (0x000195d4) wait_bar_pane_cp71

0x5236,	// (0x000195e0) grid_eswt_app_pane

0xe1a6,	// (0x00022550) scroll_pane_cp70

0xb984,	// (0x0001fd2e) cell_eswt_app_pane_ParamLimits

0xb984,	// (0x0001fd2e) cell_eswt_app_pane

0xb9b6,	// (0x0001fd60) cell_eswt_app_pane_g1_ParamLimits

0xb9b6,	// (0x0001fd60) cell_eswt_app_pane_g1

0xb9e5,	// (0x0001fd8f) cell_eswt_app_pane_g2_ParamLimits

0xb9e5,	// (0x0001fd8f) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00023fd6) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00023fd6) cell_eswt_app_pane_g

0xba0e,	// (0x0001fdb8) cell_eswt_app_pane_t1_ParamLimits

0xba0e,	// (0x0001fdb8) cell_eswt_app_pane_t1

0x52fb,	// (0x000196a5) grid_highlight_pane_cp70_ParamLimits

0x52fb,	// (0x000196a5) grid_highlight_pane_cp70

0x10ff,	// (0x000154a9) set_content_pane_g1

0xac0d,	// (0x0001efb7) status_small_volume_pane

0xeff6,	// (0x000233a0) status_small_volume_pane_g1

0xeffe,	// (0x000233a8) volume_small2_pane

0xf007,	// (0x000233b1) volume_small2_pane_g1

0xf010,	// (0x000233ba) volume_small2_pane_g2

0xf019,	// (0x000233c3) volume_small2_pane_g3

0xf022,	// (0x000233cc) volume_small2_pane_g4

0xf02b,	// (0x000233d5) volume_small2_pane_g5

0xf034,	// (0x000233de) volume_small2_pane_g6

0xf03d,	// (0x000233e7) volume_small2_pane_g7

0xf046,	// (0x000233f0) volume_small2_pane_g8

0xf04f,	// (0x000233f9) volume_small2_pane_g9

0xf058,	// (0x00023402) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00023fdb) volume_small2_pane_g

0x4966,	// (0x00018d10) fep_vkb_top_text_pane_g1_ParamLimits

0xb8ba,	// (0x0001fc64) fep_vkb_top_text_pane_t1_ParamLimits

0x4c19,	// (0x00018fc3) popup_preview_fixed_window_g3_ParamLimits

0x4c19,	// (0x00018fc3) popup_preview_fixed_window_g3

0x95b3,	// (0x0001d95d) popup_toolbar_trans_pane

0xb312,	// (0x0001f6bc) aid_height_set_list_ParamLimits

0x2f88,	// (0x00017332) aid_size_parent_ParamLimits

0x1551,	// (0x000158fb) list_highlight_pane_cp2_ParamLimits

0x10ff,	// (0x000154a9) set_content_pane_g1_ParamLimits

0xb43f,	// (0x0001f7e9) list_single_image_pane_ParamLimits

0xb43f,	// (0x0001f7e9) list_single_image_pane

0xba40,	// (0x0001fdea) aid_size_cell_image_ParamLimits

0xba40,	// (0x0001fdea) aid_size_cell_image

0xba4d,	// (0x0001fdf7) grid_single_image_pane_ParamLimits

0xba4d,	// (0x0001fdf7) grid_single_image_pane

0xc8cf,	// (0x00020c79) list_single_image_pane_g1_ParamLimits

0xc8cf,	// (0x00020c79) list_single_image_pane_g1

0xc8db,	// (0x00020c85) list_single_image_pane_g2_ParamLimits

0xc8db,	// (0x00020c85) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00023ff0) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00023ff0) list_single_image_pane_g

0x5322,	// (0x000196cc) list_single_image_pane_t1_ParamLimits

0x5322,	// (0x000196cc) list_single_image_pane_t1

0xba5b,	// (0x0001fe05) cell_image_list_pane_ParamLimits

0xba5b,	// (0x0001fe05) cell_image_list_pane

0xba6f,	// (0x0001fe19) cell_image_list_pane_g1

0xba78,	// (0x0001fe22) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00023ff5) cell_image_list_pane_g

0x5360,	// (0x0001970a) aid_size_cell_tb_trans_pane

0xc8a9,	// (0x00020c53) bg_tb_trans_pane

0x5372,	// (0x0001971c) grid_tb_trans_pane

0x1ab7,	// (0x00015e61) bg_tb_trans_pane_g1

0x1ac7,	// (0x00015e71) bg_tb_trans_pane_g2

0x1abf,	// (0x00015e69) bg_tb_trans_pane_g3

0x1ad7,	// (0x00015e81) bg_tb_trans_pane_g4

0x1acf,	// (0x00015e79) bg_tb_trans_pane_g5

0x1af7,	// (0x00015ea1) bg_tb_trans_pane_g6

0x1aef,	// (0x00015e99) bg_tb_trans_pane_g7

0x1adf,	// (0x00015e89) bg_tb_trans_pane_g8

0x1ae7,	// (0x00015e91) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00023ffa) bg_tb_trans_pane_g

0x5386,	// (0x00019730) cell_toolbar_trans_pane_ParamLimits

0x5386,	// (0x00019730) cell_toolbar_trans_pane

0x45af,	// (0x00018959) cell_toolbar_trans_pane_g1

0xb68a,	// (0x0001fa34) list_form2_midp_pane_t1

0xb698,	// (0x0001fa42) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00023e97) list_form2_midp_pane_t

0x41b0,	// (0x0001855a) scroll_pane_cp51_ParamLimits

0x43ca,	// (0x00018774) form2_midp_wait_pane_g1

0x43d3,	// (0x0001877d) form2_midp_wait_pane_g2

0x43dc,	// (0x00018786) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00023eac) form2_midp_wait_pane_g

0xc1d7,	// (0x00020581) list_highlight_pane_cp21_ParamLimits

0x4415,	// (0x000187bf) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4424,	// (0x000187ce) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x31a4,	// (0x0001754e) list_single_2graphic_im_pane_ParamLimits

0x31a4,	// (0x0001754e) list_single_2graphic_im_pane

0xba81,	// (0x0001fe2b) list_single_2graphic_im_pane_g1_ParamLimits

0xba81,	// (0x0001fe2b) list_single_2graphic_im_pane_g1

0xba92,	// (0x0001fe3c) list_single_2graphic_im_pane_g2_ParamLimits

0xba92,	// (0x0001fe3c) list_single_2graphic_im_pane_g2

0xba9e,	// (0x0001fe48) list_single_2graphic_im_pane_g3_ParamLimits

0xba9e,	// (0x0001fe48) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0002400d) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0002400d) list_single_2graphic_im_pane_g

0xbab2,	// (0x0001fe5c) list_single_2graphic_im_pane_t1_ParamLimits

0xbab2,	// (0x0001fe5c) list_single_2graphic_im_pane_t1

0x4c25,	// (0x00018fcf) list_single_graphic_2heading_pane_fp_ParamLimits

0x4c25,	// (0x00018fcf) list_single_graphic_2heading_pane_fp

0x4c6d,	// (0x00019017) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4c6d,	// (0x00019017) list_single_graphic_2heading_pane_fp_g1

0x4c3e,	// (0x00018fe8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4c3e,	// (0x00018fe8) list_single_graphic_2heading_pane_fp_g2

0x4b97,	// (0x00018f41) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b97,	// (0x00018f41) list_single_graphic_2heading_pane_fp_g3

0x4ba3,	// (0x00018f4d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4ba3,	// (0x00018f4d) list_single_graphic_2heading_pane_fp_g4

0x4c4a,	// (0x00018ff4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4c4a,	// (0x00018ff4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00023f34) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00023f34) list_single_graphic_2heading_pane_fp_g

0x541a,	// (0x000197c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x541a,	// (0x000197c4) list_single_graphic_2heading_pane_fp_t1

0x4ca5,	// (0x0001904f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ca5,	// (0x0001904f) list_single_graphic_2heading_pane_fp_t2

0x5430,	// (0x000197da) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5430,	// (0x000197da) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00024016) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00024016) list_single_graphic_2heading_pane_fp_t

0x4628,	// (0x000189d2) fep_hwr_write_pane_g5_ParamLimits

0x4628,	// (0x000189d2) fep_hwr_write_pane_g5

0x4634,	// (0x000189de) fep_hwr_write_pane_g6_ParamLimits

0x4634,	// (0x000189de) fep_hwr_write_pane_g6

0x50ea,	// (0x00019494) eswt_shell_pane_ParamLimits

0x1bdb,	// (0x00015f85) bg_popup_window_pane_cp18_ParamLimits

0x2ea6,	// (0x00017250) heading_pane_cp70

0x5214,	// (0x000195be) popup_eswt_tasktip_window_t1_ParamLimits

0xacb5,	// (0x0001f05f) aid_touch_tab_arrow_left

0xaccb,	// (0x0001f075) aid_touch_tab_arrow_right

0x9e7b,	// (0x0001e225) title_pane_g3_ParamLimits

0x9e7b,	// (0x0001e225) title_pane_g3

0xc803,	// (0x00020bad) set_value_pane_g1

0x95b3,	// (0x0001d95d) popup_toolbar_trans_pane_ParamLimits

0x5360,	// (0x0001970a) aid_size_cell_tb_trans_pane_ParamLimits

0xc8a9,	// (0x00020c53) bg_tb_trans_pane_ParamLimits

0x5372,	// (0x0001971c) grid_tb_trans_pane_ParamLimits

0xc324,	// (0x000206ce) cont_note_pane_ParamLimits

0xc324,	// (0x000206ce) cont_note_pane

0xc5aa,	// (0x00020954) cont_snote2_single_text_pane_ParamLimits

0xc5aa,	// (0x00020954) cont_snote2_single_text_pane

0xc5aa,	// (0x00020954) cont_snote2_single_graphic_pane_ParamLimits

0xc5aa,	// (0x00020954) cont_snote2_single_graphic_pane

0x21f4,	// (0x0001659e) cont_note_wait_pane_ParamLimits

0x21f4,	// (0x0001659e) cont_note_wait_pane

0x21f4,	// (0x0001659e) cont_note_image_pane_ParamLimits

0x21f4,	// (0x0001659e) cont_note_image_pane

0x5446,	// (0x000197f0) popup_note2_window_g1_ParamLimits

0x5446,	// (0x000197f0) popup_note2_window_g1

0x5477,	// (0x00019821) popup_note2_window_t1_ParamLimits

0x5477,	// (0x00019821) popup_note2_window_t1

0x54bc,	// (0x00019866) popup_note2_window_t2_ParamLimits

0x54bc,	// (0x00019866) popup_note2_window_t2

0x5501,	// (0x000198ab) popup_note2_window_t3_ParamLimits

0x5501,	// (0x000198ab) popup_note2_window_t3

0x5546,	// (0x000198f0) popup_note2_window_t4_ParamLimits

0x5546,	// (0x000198f0) popup_note2_window_t4

0xc3a8,	// (0x00020752) popup_note2_window_t5_ParamLimits

0xc3a8,	// (0x00020752) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00024022) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00024022) popup_note2_window_t

0x5575,	// (0x0001991f) popup_note2_image_window_g1_ParamLimits

0x5575,	// (0x0001991f) popup_note2_image_window_g1

0x5581,	// (0x0001992b) popup_note2_image_window_g2_ParamLimits

0x5581,	// (0x0001992b) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0002402d) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0002402d) popup_note2_image_window_g

0x5593,	// (0x0001993d) popup_note2_image_window_t1_ParamLimits

0x5593,	// (0x0001993d) popup_note2_image_window_t1

0x55ab,	// (0x00019955) popup_note2_image_window_t2_ParamLimits

0x55ab,	// (0x00019955) popup_note2_image_window_t2

0x55c3,	// (0x0001996d) popup_note2_image_window_t3_ParamLimits

0x55c3,	// (0x0001996d) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00024032) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00024032) popup_note2_image_window_t

0x2202,	// (0x000165ac) popup_note2_wait_window_g1_ParamLimits

0x2202,	// (0x000165ac) popup_note2_wait_window_g1

0x55df,	// (0x00019989) popup_note2_wait_window_g2_ParamLimits

0x55df,	// (0x00019989) popup_note2_wait_window_g2

0x221a,	// (0x000165c4) popup_note2_wait_window_g3_ParamLimits

0x221a,	// (0x000165c4) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00024039) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00024039) popup_note2_wait_window_g

0x55eb,	// (0x00019995) popup_note2_wait_window_t1_ParamLimits

0x55eb,	// (0x00019995) popup_note2_wait_window_t1

0x5609,	// (0x000199b3) popup_note2_wait_window_t2_ParamLimits

0x5609,	// (0x000199b3) popup_note2_wait_window_t2

0x5627,	// (0x000199d1) popup_note2_wait_window_t3_ParamLimits

0x5627,	// (0x000199d1) popup_note2_wait_window_t3

0x5639,	// (0x000199e3) popup_note2_wait_window_t4_ParamLimits

0x5639,	// (0x000199e3) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x00024040) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x00024040) popup_note2_wait_window_t

0x564b,	// (0x000199f5) wait_bar2_pane_ParamLimits

0x564b,	// (0x000199f5) wait_bar2_pane

0x5663,	// (0x00019a0d) popup_snote2_single_text_window_g1_ParamLimits

0x5663,	// (0x00019a0d) popup_snote2_single_text_window_g1

0x568b,	// (0x00019a35) popup_snote2_single_text_window_t1_ParamLimits

0x568b,	// (0x00019a35) popup_snote2_single_text_window_t1

0x56d7,	// (0x00019a81) popup_snote2_single_text_window_t2_ParamLimits

0x56d7,	// (0x00019a81) popup_snote2_single_text_window_t2

0x5723,	// (0x00019acd) popup_snote2_single_text_window_t3_ParamLimits

0x5723,	// (0x00019acd) popup_snote2_single_text_window_t3

0x5764,	// (0x00019b0e) popup_snote2_single_text_window_t4_ParamLimits

0x5764,	// (0x00019b0e) popup_snote2_single_text_window_t4

0x579a,	// (0x00019b44) popup_snote2_single_text_window_t5_ParamLimits

0x579a,	// (0x00019b44) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00024049) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00024049) popup_snote2_single_text_window_t

0x57c5,	// (0x00019b6f) popup_snote2_single_graphic_window_g1_ParamLimits

0x57c5,	// (0x00019b6f) popup_snote2_single_graphic_window_g1

0x57ed,	// (0x00019b97) popup_snote2_single_graphic_window_g2_ParamLimits

0x57ed,	// (0x00019b97) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00024054) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00024054) popup_snote2_single_graphic_window_g

0x5815,	// (0x00019bbf) popup_snote2_single_graphic_window_t1_ParamLimits

0x5815,	// (0x00019bbf) popup_snote2_single_graphic_window_t1

0x5861,	// (0x00019c0b) popup_snote2_single_graphic_window_t2_ParamLimits

0x5861,	// (0x00019c0b) popup_snote2_single_graphic_window_t2

0x5723,	// (0x00019acd) popup_snote2_single_graphic_window_t3_ParamLimits

0x5723,	// (0x00019acd) popup_snote2_single_graphic_window_t3

0x5764,	// (0x00019b0e) popup_snote2_single_graphic_window_t4_ParamLimits

0x5764,	// (0x00019b0e) popup_snote2_single_graphic_window_t4

0x579a,	// (0x00019b44) popup_snote2_single_graphic_window_t5_ParamLimits

0x579a,	// (0x00019b44) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00024059) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00024059) popup_snote2_single_graphic_window_t

0x4060,	// (0x0001840a) clock_nsta_pane_cp2_t1

0x4060,	// (0x0001840a) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00023e6d) clock_nsta_pane_cp2_t

0xc8c3,	// (0x00020c6d) form_field_data_wide_pane_g1_ParamLimits

0xc8cf,	// (0x00020c79) form_field_data_wide_pane_g2_ParamLimits

0xc8cf,	// (0x00020c79) form_field_data_wide_pane_g2

0xc8db,	// (0x00020c85) form_field_data_wide_pane_g3_ParamLimits

0xc8db,	// (0x00020c85) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00023a20) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00023a20) form_field_data_wide_pane_g

0xb5a1,	// (0x0001f94b) grid_touch_3_pane_ParamLimits

0xb5a1,	// (0x0001f94b) grid_touch_3_pane

0xbae3,	// (0x0001fe8d) cell_touch_3_pane_ParamLimits

0xbae3,	// (0x0001fe8d) cell_touch_3_pane

0x45af,	// (0x00018959) cell_touch_3_pane_g1

0x45af,	// (0x00018959) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00023ef2) cell_touch_3_pane_g

0xc400,	// (0x000207aa) cont_query_data_pane

0xc408,	// (0x000207b2) cont_query_data_pane_cp1

0x58e0,	// (0x00019c8a) button_value_adjust_pane_cp7

0x58e8,	// (0x00019c92) query_popup_pane_cp3

0xe3f1,	// (0x0002279b) bg_popup_sub_pane_cp22_ParamLimits

0xe407,	// (0x000227b1) navi_navi_volume_pane_cp2

0xe422,	// (0x000227cc) popup_side_volume_key_window_g2

0xe431,	// (0x000227db) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00023ab6) popup_side_volume_key_window_g

0xe44e,	// (0x000227f8) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00023abd) popup_side_volume_key_window_t

0x0fba,	// (0x00015364) popup_side_volume_key_window_ParamLimits

0xa351,	// (0x0001e6fb) list_double_graphic_pane_g4_ParamLimits

0xa351,	// (0x0001e6fb) list_double_graphic_pane_g4

0xb416,	// (0x0001f7c0) list_single_2heading_msg_pane_ParamLimits

0xb416,	// (0x0001f7c0) list_single_2heading_msg_pane

0xbb2f,	// (0x0001fed9) list_single_2heading_msg_pane_g1_ParamLimits

0xbb2f,	// (0x0001fed9) list_single_2heading_msg_pane_g1

0xbb3b,	// (0x0001fee5) list_single_2heading_msg_pane_g2_ParamLimits

0xbb3b,	// (0x0001fee5) list_single_2heading_msg_pane_g2

0xbb4e,	// (0x0001fef8) list_single_2heading_msg_pane_g3_ParamLimits

0xbb4e,	// (0x0001fef8) list_single_2heading_msg_pane_g3

0xbb5a,	// (0x0001ff04) list_single_2heading_msg_pane_g4_ParamLimits

0xbb5a,	// (0x0001ff04) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00024064) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00024064) list_single_2heading_msg_pane_g

0xbb72,	// (0x0001ff1c) list_single_2heading_msg_pane_t1_ParamLimits

0xbb72,	// (0x0001ff1c) list_single_2heading_msg_pane_t1

0xbb9a,	// (0x0001ff44) list_single_2heading_msg_pane_t2_ParamLimits

0xbb9a,	// (0x0001ff44) list_single_2heading_msg_pane_t2

0xbc05,	// (0x0001ffaf) list_single_2heading_msg_pane_t3_ParamLimits

0xbc05,	// (0x0001ffaf) list_single_2heading_msg_pane_t3

0x59fa,	// (0x00019da4) list_single_2heading_msg_pane_t4_ParamLimits

0x59fa,	// (0x00019da4) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0002406d) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0002406d) list_single_2heading_msg_pane_t

0xc185,	// (0x0002052f) title_pane_g4_ParamLimits

0xc185,	// (0x0002052f) title_pane_g4

0xdfb7,	// (0x00022361) title_pane_stacon_g3_ParamLimits

0xdfb7,	// (0x00022361) title_pane_stacon_g3

0x53dd,	// (0x00019787) list_single_2graphic_im_pane_g4_ParamLimits

0x53dd,	// (0x00019787) list_single_2graphic_im_pane_g4

0x2c64,	// (0x0001700e) popup_side_volume_key_window_cp

0x3570,	// (0x0001791a) main_idle_act2_pane_t1

0xe9c9,	// (0x00022d73) toolbar_button_pane_g10

0xa1f8,	// (0x0001e5a2) popup_toolbar_window_cp1

0x4051,	// (0x000183fb) clock_nsta_pane_cp_t1

0x4051,	// (0x000183fb) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00023e68) clock_nsta_pane_cp_t

0xe407,	// (0x000227b1) navi_navi_volume_pane_cp2_ParamLimits

0xe416,	// (0x000227c0) popup_side_volume_key_window_g1_ParamLimits

0xe422,	// (0x000227cc) popup_side_volume_key_window_g2_ParamLimits

0xe431,	// (0x000227db) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00023ab6) popup_side_volume_key_window_g_ParamLimits

0xecc2,	// (0x0002306c) fep_hwr_aid_pane

0xed6b,	// (0x00023115) bg_fep_hwr_top_pane_g4_ParamLimits

0x45f8,	// (0x000189a2) fep_hwr_top_pane_g1_ParamLimits

0x460a,	// (0x000189b4) fep_hwr_top_pane_g2_ParamLimits

0xed8b,	// (0x00023135) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00023ebd) fep_hwr_top_pane_g_ParamLimits

0xeda0,	// (0x0002314a) fep_hwr_top_text_pane_ParamLimits

0x2a19,	// (0x00016dc3) aid_touch_tab_arrow_arrow_2

0x2a22,	// (0x00016dcc) aid_touch_tab_arrow_left_2

0xecd6,	// (0x00023080) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xed0d,	// (0x000230b7) fep_hwr_prediction_pane

0x4760,	// (0x00018b0a) fep_vkb_prediction_pane

0xb89a,	// (0x0001fc44) fep_vkb_side_pane_g3_ParamLimits

0xb89a,	// (0x0001fc44) fep_vkb_side_pane_g3

0xeeb4,	// (0x0002325e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xef25,	// (0x000232cf) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xef32,	// (0x000232dc) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00023f6c) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf061,	// (0x0002340b) fep_hwr_prediction_pane_g1

0xf06b,	// (0x00023415) fep_hwr_prediction_pane_g2

0xf073,	// (0x0002341d) fep_hwr_prediction_pane_g3

0xf07b,	// (0x00023425) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00024076) fep_hwr_prediction_pane_g

0x5a1f,	// (0x00019dc9) fep_vkb_prediction_pane_g1

0x5a29,	// (0x00019dd3) fep_vkb_prediction_pane_g2

0x5a31,	// (0x00019ddb) fep_vkb_prediction_pane_g3

0x5a39,	// (0x00019de3) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0002407f) fep_vkb_prediction_pane_g

0xeaff,	// (0x00022ea9) slider_set_pane_g3

0xeb13,	// (0x00022ebd) slider_set_pane_g4

0xeb2b,	// (0x00022ed5) slider_set_pane_g5

0xeaff,	// (0x00022ea9) slider_set_pane_g6

0xeb41,	// (0x00022eeb) slider_set_pane_g7

0x3107,	// (0x000174b1) slider_form_pane_g3

0x3110,	// (0x000174ba) slider_form_pane_g4

0x3118,	// (0x000174c2) slider_form_pane_g5

0x3107,	// (0x000174b1) slider_form_pane_g6

0xb3b9,	// (0x0001f763) slider_form_pane_g7

0x386a,	// (0x00017c14) slider_set_pane_vc_g3

0x3873,	// (0x00017c1d) slider_set_pane_vc_g4

0x387c,	// (0x00017c26) slider_set_pane_vc_g5

0x386a,	// (0x00017c14) slider_set_pane_vc_g6

0x3885,	// (0x00017c2f) slider_set_pane_vc_g7

0x3d27,	// (0x000180d1) slider_form_pane_vc_g1

0x3d30,	// (0x000180da) slider_form_pane_vc_g2

0x3d39,	// (0x000180e3) slider_form_pane_vc_g3

0x3d27,	// (0x000180d1) slider_form_pane_vc_g4

0x3d42,	// (0x000180ec) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00023e3a) slider_form_pane_vc_g

0xdd77,	// (0x00022121) main_idle_act3_pane

0x5a41,	// (0x00019deb) ai3_links_pane

0xbc73,	// (0x0002001d) popup_ai3_data_window_ParamLimits

0xbc73,	// (0x0002001d) popup_ai3_data_window

0xc167,	// (0x00020511) grid_ai3_links_pane

0xbc91,	// (0x0002003b) cell_ai3_links_pane_ParamLimits

0xbc91,	// (0x0002003b) cell_ai3_links_pane

0x5a82,	// (0x00019e2c) bg_popup_sub_pane_cp11

0x5a8f,	// (0x00019e39) cell_ai3_links_pane_g1

0xc167,	// (0x00020511) bg_popup_sub_pane_cp12

0x5ab4,	// (0x00019e5e) heading_ai3_data_pane

0x5abc,	// (0x00019e66) list_ai3_gene_pane

0x5ac8,	// (0x00019e72) popup_ai3_data_window_g1

0x5ad0,	// (0x00019e7a) heading_ai3_data_pane_g1

0x5ad8,	// (0x00019e82) heading_ai3_data_pane_t1

0x5ae6,	// (0x00019e90) list_double_ai3_gene_pane_ParamLimits

0x5ae6,	// (0x00019e90) list_double_ai3_gene_pane

0x5af3,	// (0x00019e9d) list_single_ai3_gene_pane_ParamLimits

0x5af3,	// (0x00019e9d) list_single_ai3_gene_pane

0x4574,	// (0x0001891e) list_highlight_pane_cp7_ParamLimits

0x4574,	// (0x0001891e) list_highlight_pane_cp7

0x5b00,	// (0x00019eaa) list_single_a13_gene_pane_t1_ParamLimits

0x5b00,	// (0x00019eaa) list_single_a13_gene_pane_t1

0x5b17,	// (0x00019ec1) list_single_ai3_gene_pane_g1

0x5b20,	// (0x00019eca) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00024088) list_single_ai3_gene_pane_g

0x5b28,	// (0x00019ed2) list_double_ai3_gene_pane_g1_ParamLimits

0x5b28,	// (0x00019ed2) list_double_ai3_gene_pane_g1

0x5b34,	// (0x00019ede) list_double_ai3_gene_pane_t1_ParamLimits

0x5b34,	// (0x00019ede) list_double_ai3_gene_pane_t1

0x5b50,	// (0x00019efa) list_double_ai3_gene_pane_t2_ParamLimits

0x5b50,	// (0x00019efa) list_double_ai3_gene_pane_t2

0x5b65,	// (0x00019f0f) list_double_ai3_gene_pane_t3_ParamLimits

0x5b65,	// (0x00019f0f) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0002408d) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0002408d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x58f9,	// (0x00019ca3) aid_size_min_col_2

0xbb19,	// (0x0001fec3) aid_size_min_msg_ParamLimits

0xbb19,	// (0x0001fec3) aid_size_min_msg

0xb8ae,	// (0x0001fc58) fep_vkb_top_text_pane_g2_ParamLimits

0xb8ae,	// (0x0001fc58) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00023eed) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00023eed) fep_vkb_top_text_pane_g

0xdd77,	// (0x00022121) main_hc_apps_shell_pane

0x5b82,	// (0x00019f2c) grid_hc_apps_pane_ParamLimits

0x5b82,	// (0x00019f2c) grid_hc_apps_pane

0x5b91,	// (0x00019f3b) list_hc_apps_pane

0x5b99,	// (0x00019f43) scroll_pane_cp37_ParamLimits

0x5b99,	// (0x00019f43) scroll_pane_cp37

0xbcab,	// (0x00020055) cell_hc_apps_pane_ParamLimits

0xbcab,	// (0x00020055) cell_hc_apps_pane

0xbd75,	// (0x0002011f) cell_hc_apps_pane_g1_ParamLimits

0xbd75,	// (0x0002011f) cell_hc_apps_pane_g1

0x5c8e,	// (0x0001a038) cell_hc_apps_pane_g2_ParamLimits

0x5c8e,	// (0x0001a038) cell_hc_apps_pane_g2

0x5caa,	// (0x0001a054) cell_hc_apps_pane_g3_ParamLimits

0x5caa,	// (0x0001a054) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00024094) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00024094) cell_hc_apps_pane_g

0xbda2,	// (0x0002014c) cell_hc_apps_pane_t1_ParamLimits

0xbda2,	// (0x0002014c) cell_hc_apps_pane_t1

0xc324,	// (0x000206ce) grid_highlight_pane_cp10_ParamLimits

0xc324,	// (0x000206ce) grid_highlight_pane_cp10

0xbde2,	// (0x0002018c) list_single_hc_apps_pane_ParamLimits

0xbde2,	// (0x0002018c) list_single_hc_apps_pane

0xbe1c,	// (0x000201c6) list_single_hc_apps_pane_g1

0xbe35,	// (0x000201df) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0002409b) list_single_hc_apps_pane_g

0xbe4e,	// (0x000201f8) list_single_hc_apps_pane_g2_copy1

0xbe6a,	// (0x00020214) list_single_hc_apps_pane_t1

0xc1d7,	// (0x00020581) bg_set_opt_pane_cp_ParamLimits

0xde9a,	// (0x00022244) setting_slider_pane_t1_ParamLimits

0xdeb3,	// (0x0002225d) setting_slider_pane_t2_ParamLimits

0xdecd,	// (0x00022277) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023908) setting_slider_pane_t_ParamLimits

0xdee5,	// (0x0002228f) slider_set_pane_ParamLimits

0xe79e,	// (0x00022b48) control_pane_g5_ParamLimits

0xe79e,	// (0x00022b48) control_pane_g5

0x2f3a,	// (0x000172e4) slider_set_pane_g1_ParamLimits

0xeaf3,	// (0x00022e9d) slider_set_pane_g2_ParamLimits

0xeaff,	// (0x00022ea9) slider_set_pane_g3_ParamLimits

0xeb13,	// (0x00022ebd) slider_set_pane_g4_ParamLimits

0xeb2b,	// (0x00022ed5) slider_set_pane_g5_ParamLimits

0xeaff,	// (0x00022ea9) slider_set_pane_g6_ParamLimits

0xeb41,	// (0x00022eeb) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00023d04) slider_set_pane_g_ParamLimits

0x10aa,	// (0x00015454) navi_icon_text_pane_ParamLimits

0xac7c,	// (0x0001f026) aid_fill_nsta_2_ParamLimits

0xacb5,	// (0x0001f05f) aid_touch_tab_arrow_left_ParamLimits

0xaccb,	// (0x0001f075) aid_touch_tab_arrow_right_ParamLimits

0xad66,	// (0x0001f110) clock_nsta_pane_ParamLimits

0xb1f9,	// (0x0001f5a3) navi_icon_pane_g1_ParamLimits

0xb205,	// (0x0001f5af) navi_text_pane_t1_ParamLimits

0xb66c,	// (0x0001fa16) navi_icon_text_pane_g1_ParamLimits

0xb678,	// (0x0001fa22) navi_icon_text_pane_t1_ParamLimits

0xbe1c,	// (0x000201c6) list_single_hc_apps_pane_g1_ParamLimits

0xbe35,	// (0x000201df) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0002409b) list_single_hc_apps_pane_g_ParamLimits

0xbe4e,	// (0x000201f8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe6a,	// (0x00020214) list_single_hc_apps_pane_t1_ParamLimits

0x8c93,	// (0x0001d03d) popup_toolbar2_fixed_window_ParamLimits

0x8c93,	// (0x0001d03d) popup_toolbar2_fixed_window

0x95a9,	// (0x0001d953) popup_toolbar2_float_window

0xc167,	// (0x00020511) bg_popup_sub_pane_cp27

0x5dc7,	// (0x0001a171) grid_toolbar2_float_pane

0xc167,	// (0x00020511) bg_popup_sub_pane_cp26

0x5dc7,	// (0x0001a171) grid_toolbar2_fixed_pane

0xbe98,	// (0x00020242) cell_toolbar2_fixed_pane_ParamLimits

0xbe98,	// (0x00020242) cell_toolbar2_fixed_pane

0xbeb2,	// (0x0002025c) cell_toolbar2_fixed_pane_g1

0x5de8,	// (0x0001a192) toolbar2_fixed_button_pane

0x1ab7,	// (0x00015e61) toolbar2_fixed_button_pane_g1

0x1ac7,	// (0x00015e71) toolbar2_fixed_button_pane_g2

0x1abf,	// (0x00015e69) toolbar2_fixed_button_pane_g3

0x1ad7,	// (0x00015e81) toolbar2_fixed_button_pane_g4

0x1acf,	// (0x00015e79) toolbar2_fixed_button_pane_g5

0x1adf,	// (0x00015e89) toolbar2_fixed_button_pane_g6

0x1ae7,	// (0x00015e91) toolbar2_fixed_button_pane_g7

0x1af7,	// (0x00015ea1) toolbar2_fixed_button_pane_g8

0x1aef,	// (0x00015e99) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00023c06) toolbar2_fixed_button_pane_g

0x5df0,	// (0x0001a19a) cell_toolbar2_float_pane_ParamLimits

0x5df0,	// (0x0001a19a) cell_toolbar2_float_pane

0x5e01,	// (0x0001a1ab) cell_toolbar2_float_pane_g1

0x5de8,	// (0x0001a192) toolbar2_fixed_button_pane_cp

0xb796,	// (0x0001fb40) fep_vkb_accented_list_pane_ParamLimits

0xb796,	// (0x0001fb40) fep_vkb_accented_list_pane

0xee94,	// (0x0002323e) bg_popup_fep_shadow_pane_g9

0x1222,	// (0x000155cc) bg_popup_fep_shadow_pane_cp3

0xca4b,	// (0x00020df5) list_accented_list_pane

0x5e0a,	// (0x0001a1b4) list_single_accented_list_pane_ParamLimits

0x5e0a,	// (0x0001a1b4) list_single_accented_list_pane

0x1222,	// (0x000155cc) list_highlight_pane_cp10

0x5e1b,	// (0x0001a1c5) list_single_accented_list_pane_t1

0x94c7,	// (0x0001d871) popup_slider_window_ParamLimits

0x94c7,	// (0x0001d871) popup_slider_window

0x58f0,	// (0x00019c9a) aid_indentation_list_msg

0xbfb5,	// (0x0002035f) bg_popup_window_pane_cp19

0x5f57,	// (0x0001a301) popup_slider_window_g1

0x5f73,	// (0x0001a31d) popup_slider_window_g2

0x5f8f,	// (0x0001a339) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x000240a0) popup_slider_window_g

0x5ff5,	// (0x0001a39f) popup_slider_window_t1

0x6069,	// (0x0001a413) small_volume_slider_vertical_pane

0x45af,	// (0x00018959) small_volume_slider_vertical_pane_g1

0x45af,	// (0x00018959) small_volume_slider_vertical_pane_g2

0x6085,	// (0x0001a42f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x000240b2) small_volume_slider_vertical_pane_g

0x8bfd,	// (0x0001cfa7) area_side_right_pane_ParamLimits

0x8bfd,	// (0x0001cfa7) area_side_right_pane

0x9846,	// (0x0001dbf0) aid_size_side_button_ParamLimits

0x9846,	// (0x0001dbf0) aid_size_side_button

0x985f,	// (0x0001dc09) grid_sctrl_middle_pane_ParamLimits

0x985f,	// (0x0001dc09) grid_sctrl_middle_pane

0xf08c,	// (0x00023436) sctrl_sk_bottom_pane

0xf09d,	// (0x00023447) sctrl_sk_top_pane

0xf0af,	// (0x00023459) aid_touch_sctrl_top

0xf0bc,	// (0x00023466) bg_sctrl_sk_pane_ParamLimits

0xf0bc,	// (0x00023466) bg_sctrl_sk_pane

0xf0ca,	// (0x00023474) sctrl_sk_top_pane_g1

0xf0d7,	// (0x00023481) sctrl_sk_top_pane_t1

0xf0af,	// (0x00023459) aid_touch_sctrl_bottom

0xf0bc,	// (0x00023466) bg_sctrl_sk_pane_cp_ParamLimits

0xf0bc,	// (0x00023466) bg_sctrl_sk_pane_cp

0xf0f2,	// (0x0002349c) sctrl_sk_bottom_pane_g1

0xf0d7,	// (0x00023481) sctrl_sk_bottom_pane_t1

0x9879,	// (0x0001dc23) cell_sctrl_middle_pane_ParamLimits

0x9879,	// (0x0001dc23) cell_sctrl_middle_pane

0x988c,	// (0x0001dc36) aid_touch_sctrl_middle_ParamLimits

0x988c,	// (0x0001dc36) aid_touch_sctrl_middle

0x9899,	// (0x0001dc43) bg_sctrl_middle_pane_ParamLimits

0x9899,	// (0x0001dc43) bg_sctrl_middle_pane

0xf419,	// (0x000237c3) cell_sctrl_middle_pane_g1_ParamLimits

0xf419,	// (0x000237c3) cell_sctrl_middle_pane_g1

0x98a7,	// (0x0001dc51) cell_sctrl_middle_pane_g2_ParamLimits

0x98a7,	// (0x0001dc51) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x000240be) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x000240be) cell_sctrl_middle_pane_g

0x1ab7,	// (0x00015e61) bg_sctrl_middle_pane_g1

0x1abf,	// (0x00015e69) bg_sctrl_middle_pane_g2

0x1ac7,	// (0x00015e71) bg_sctrl_middle_pane_g3

0x1acf,	// (0x00015e79) bg_sctrl_middle_pane_g4

0x1ad7,	// (0x00015e81) bg_sctrl_middle_pane_g5

0x1adf,	// (0x00015e89) bg_sctrl_middle_pane_g6

0x1ae7,	// (0x00015e91) bg_sctrl_middle_pane_g7

0x1aef,	// (0x00015e99) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x000240c3) bg_sctrl_middle_pane_g

0x1af7,	// (0x00015ea1) bg_sctrl_middle_pane_g8_copy1

0x1ab7,	// (0x00015e61) bg_sctrl_sk_pane_g1

0x1ac7,	// (0x00015e71) bg_sctrl_sk_pane_g2

0x1abf,	// (0x00015e69) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00023c06) bg_sctrl_sk_pane_g

0xc768,	// (0x00020b12) aid_size_touch_scroll_bar

0x1ad7,	// (0x00015e81) bg_sctrl_sk_pane_g4

0x1acf,	// (0x00015e79) bg_sctrl_sk_pane_g5

0x1adf,	// (0x00015e89) bg_sctrl_sk_pane_g6

0x1ae7,	// (0x00015e91) bg_sctrl_sk_pane_g7

0x1af7,	// (0x00015ea1) bg_sctrl_sk_pane_g8

0x1aef,	// (0x00015e99) bg_sctrl_sk_pane_g9

0xe80b,	// (0x00022bb5) popup_fep_china_hwr2_fs_candidate_window

0x8f7f,	// (0x0001d329) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f7f,	// (0x0001d329) popup_fep_china_hwr2_fs_control_window

0xeeb4,	// (0x0002325e) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x000240b9) sctrl_sk_top_pane_g

0xc06d,	// (0x00020417) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc06d,	// (0x00020417) aid_fep_china_hwr2_fs_cell

0xc083,	// (0x0002042d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc083,	// (0x0002042d) bg_popup_fep_shadow_pane_cp4

0xc09a,	// (0x00020444) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc09a,	// (0x00020444) bg_popup_fep_shadow_pane_cp5

0xc0ac,	// (0x00020456) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc0ac,	// (0x00020456) popup_fep_china_hwr2_fs_control_bar_grid

0xc0c0,	// (0x0002046a) popup_fep_china_hwr2_fs_control_funtion_grid

0x60e4,	// (0x0001a48e) aid_fep_china_hwr2_fs_candi_cell

0xc167,	// (0x00020511) bg_popup_fep_shadow_pane_cp6

0x60ee,	// (0x0001a498) popup_fep_china_hwr2_fs_candidate_grid

0xc0c8,	// (0x00020472) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc0c8,	// (0x00020472) cell_fep_china_hwr2_fs_funtion_grid

0x45af,	// (0x00018959) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6110,	// (0x0001a4ba) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6110,	// (0x0001a4ba) cell_fep_china_hwr2_fs_funtion_grid_g1

0x611e,	// (0x0001a4c8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x611e,	// (0x0001a4c8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x000240d4) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x000240d4) cell_fep_china_hwr2_fs_funtion_grid_g

0xc0e0,	// (0x0002048a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc0e0,	// (0x0002048a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc0f5,	// (0x0002049f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc0f5,	// (0x0002049f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x000240d9) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x000240d9) cell_fep_china_hwr2_fs_funtion_grid_t

0x6165,	// (0x0001a50f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x616d,	// (0x0001a517) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6175,	// (0x0001a51f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x000240de) popup_fep_china_hwr2_fs_control_bar_grid_g

0x617d,	// (0x0001a527) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x617d,	// (0x0001a527) cell_fep_china_hwr2_fs_candidate_grid

0x619c,	// (0x0001a546) popup_fep_china_hwr2_fs_candidate_grid_g20

0x61a4,	// (0x0001a54e) popup_fep_china_hwr2_fs_candidate_grid_g21

0x45af,	// (0x00018959) cell_fep_china_hwr2_fs_candidate_grid_g1

0x45af,	// (0x00018959) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00023ef2) cell_fep_china_hwr2_fs_candidate_grid_g

0x61ac,	// (0x0001a556) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1671,	// (0x00015a1b) clock_nsta_pane_cp_24_ParamLimits

0x1671,	// (0x00015a1b) clock_nsta_pane_cp_24

0x16f1,	// (0x00015a9b) indicator_nsta_pane_cp_24_ParamLimits

0x16f1,	// (0x00015a9b) indicator_nsta_pane_cp_24

0x2877,	// (0x00016c21) heading_pane_g1

0x0001,

0xf8c1,	// (0x00023c6b) heading_pane_g

0x33b7,	// (0x00017761) grid_sct_catagory_button_pane

0x33e9,	// (0x00017793) scroll_pane_cp5_ParamLimits

0x41bc,	// (0x00018566) button_value_adjust_pane_cp5_ParamLimits

0x41bc,	// (0x00018566) button_value_adjust_pane_cp5

0x42c2,	// (0x0001866c) form2_midp_time_pane_ParamLimits

0x61ba,	// (0x0001a564) cell_sct_catagory_button_pane_ParamLimits

0x61ba,	// (0x0001a564) cell_sct_catagory_button_pane

0x4574,	// (0x0001891e) bg_button_pane_cp01_ParamLimits

0x4574,	// (0x0001891e) bg_button_pane_cp01

0x45af,	// (0x00018959) cell_sct_catagory_button_pane_g1

0x9546,	// (0x0001d8f0) popup_tb_extension_window

0xc111,	// (0x000204bb) aid_size_cell_ext_ParamLimits

0xc111,	// (0x000204bb) aid_size_cell_ext

0xc5aa,	// (0x00020954) bg_tb_trans_pane_cp1_ParamLimits

0xc5aa,	// (0x00020954) bg_tb_trans_pane_cp1

0xcbf7,	// (0x00020fa1) grid_tb_ext_pane_ParamLimits

0xcbf7,	// (0x00020fa1) grid_tb_ext_pane

0xcc34,	// (0x00020fde) cell_tb_ext_pane_ParamLimits

0xcc34,	// (0x00020fde) cell_tb_ext_pane

0xcc5c,	// (0x00021006) cell_tb_ext_pane_g1_ParamLimits

0xcc5c,	// (0x00021006) cell_tb_ext_pane_g1

0x624e,	// (0x0001a5f8) cell_tb_ext_pane_t1

0xc324,	// (0x000206ce) list_highlight_pane_cp11_ParamLimits

0xc324,	// (0x000206ce) list_highlight_pane_cp11

0x8ca8,	// (0x0001d052) popup_uni_indicator_window_ParamLimits

0x8ca8,	// (0x0001d052) popup_uni_indicator_window

0xc8a9,	// (0x00020c53) bg_popup_sub_pane_cp14

0x6269,	// (0x0001a613) list_uniindi_pane

0x6275,	// (0x0001a61f) uniindi_top_pane

0xc324,	// (0x000206ce) bg_uniindi_top_pane

0x6296,	// (0x0001a640) uniindi_top_pane_g1

0x62ac,	// (0x0001a656) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x000240e5) uniindi_top_pane_g

0x62d6,	// (0x0001a680) uniindi_top_pane_t1

0x6302,	// (0x0001a6ac) list_single_uniindi_pane_ParamLimits

0x6302,	// (0x0001a6ac) list_single_uniindi_pane

0x45af,	// (0x00018959) bg_uniindi_top_pane_g1

0x6314,	// (0x0001a6be) list_single_uniindi_pane_g1

0x6327,	// (0x0001a6d1) list_single_uniindi_pane_t1

0xdd77,	// (0x00022121) control_bg_pane

0x634c,	// (0x0001a6f6) bg_sctrl_sk_pane_cp1

0x6355,	// (0x0001a6ff) bg_sctrl_sk_pane_cp2

0x635e,	// (0x0001a708) control_bg_pane_g1

0x6367,	// (0x0001a711) control_bg_pane_g2

0x0001,

0xfd44,	// (0x000240ee) control_bg_pane_g

0x4005,	// (0x000183af) cell_indicator_nsta_pane_g1_ParamLimits

0xb5ce,	// (0x0001f978) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00023e56) cell_indicator_nsta_pane_g_ParamLimits

0x434f,	// (0x000186f9) form2_midp_time_pane_t1_ParamLimits

0xe7fd,	// (0x00022ba7) main_idle_act4_pane_ParamLimits

0xe7fd,	// (0x00022ba7) main_idle_act4_pane

0x9546,	// (0x0001d8f0) popup_tb_extension_window_ParamLimits

0xcc1c,	// (0x00020fc6) tb_ext_find_pane_ParamLimits

0xcc1c,	// (0x00020fc6) tb_ext_find_pane

0x6370,	// (0x0001a71a) ai_gene_pane_1_cp1

0x136c,	// (0x00015716) ai_gene_pane_2_cp1

0x6378,	// (0x0001a722) list_single_idle_plugin_calendar_pane

0x6381,	// (0x0001a72b) list_single_idle_plugin_notification_pane

0x638a,	// (0x0001a734) list_single_idle_plugin_player_pane

0xcc79,	// (0x00021023) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcc79,	// (0x00021023) list_single_idle_plugin_shortcut_pane

0xcca1,	// (0x0002104b) main_idle_act4_pane_t1

0xccb9,	// (0x00021063) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x000240f3) main_idle_act4_pane_t

0xccd1,	// (0x0002107b) middle_sk_idle_act4_pane_ParamLimits

0xccd1,	// (0x0002107b) middle_sk_idle_act4_pane

0xcced,	// (0x00021097) popup_clock_digital_analogue_window_cp2

0xcd14,	// (0x000210be) shortcut_wheel_idle_act4_pane_ParamLimits

0xcd14,	// (0x000210be) shortcut_wheel_idle_act4_pane

0x45af,	// (0x00018959) shortcut_wheel_idle_act4_pane_g1

0x45af,	// (0x00018959) shortcut_wheel_idle_act4_pane_g2

0x45af,	// (0x00018959) shortcut_wheel_idle_act4_pane_g3

0x45af,	// (0x00018959) shortcut_wheel_idle_act4_pane_g4

0x45af,	// (0x00018959) shortcut_wheel_idle_act4_pane_g5

0x641d,	// (0x0001a7c7) shortcut_wheel_idle_act4_pane_g6

0x6425,	// (0x0001a7cf) shortcut_wheel_idle_act4_pane_g7

0x642d,	// (0x0001a7d7) shortcut_wheel_idle_act4_pane_g8

0x6435,	// (0x0001a7df) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x000240f8) shortcut_wheel_idle_act4_pane_g

0xc137,	// (0x000204e1) middle_sk_idle_act4_pane_g1_ParamLimits

0xc137,	// (0x000204e1) middle_sk_idle_act4_pane_g1

0xcd91,	// (0x0002113b) middle_sk_idle_act4_pane_g2_ParamLimits

0xcd91,	// (0x0002113b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0002411b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0002411b) middle_sk_idle_act4_pane_g

0xcda9,	// (0x00021153) middle_sk_idle_act4_pane_t1_ParamLimits

0xcda9,	// (0x00021153) middle_sk_idle_act4_pane_t1

0xcdd8,	// (0x00021182) grid_ai_shortcut_pane_ParamLimits

0xcdd8,	// (0x00021182) grid_ai_shortcut_pane

0xcdf5,	// (0x0002119f) list_highlight_pane_cp16_ParamLimits

0xcdf5,	// (0x0002119f) list_highlight_pane_cp16

0xce02,	// (0x000211ac) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xce02,	// (0x000211ac) list_single_idle_plugin_shortcut_pane_g1

0xce0e,	// (0x000211b8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xce0e,	// (0x000211b8) list_single_idle_plugin_shortcut_pane_g2

0xce2c,	// (0x000211d6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xce2c,	// (0x000211d6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x00024120) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x00024120) list_single_idle_plugin_shortcut_pane_g

0xce41,	// (0x000211eb) cell_ai_shortcut_pane_ParamLimits

0xce41,	// (0x000211eb) cell_ai_shortcut_pane

0xce57,	// (0x00021201) cell_ai_shortcut_pane_g1_ParamLimits

0xce57,	// (0x00021201) cell_ai_shortcut_pane_g1

0x6370,	// (0x0001a71a) ai_gene_pane_1_cp2

0x6566,	// (0x0001a910) ai_gene_pane_2_cp2

0x656e,	// (0x0001a918) list_highlight_pane_cp15

0x6577,	// (0x0001a921) list_single_idle_plugin_calendar_pane_g1

0x656e,	// (0x0001a918) list_highlight_pane_cp17

0x657f,	// (0x0001a929) list_single_idle_plugin_calendar_pane_g1_copy1

0x6587,	// (0x0001a931) list_single_idle_plugin_player_pane_g1

0x361e,	// (0x000179c8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00024127) list_single_idle_plugin_player_pane_g

0x658f,	// (0x0001a939) list_single_idle_plugin_player_pane_t1

0x659d,	// (0x0001a947) list_single_idle_plugin_player_pane_t2

0x65ab,	// (0x0001a955) list_single_idle_plugin_player_pane_t3

0x65b9,	// (0x0001a963) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0002412c) list_single_idle_plugin_player_pane_t

0x65c7,	// (0x0001a971) wait_bar_pane_cp15

0x65cf,	// (0x0001a979) grid_ai_notification_pane

0x361e,	// (0x000179c8) list_single_idle_plugin_notification_pane_g1

0xce79,	// (0x00021223) cell_ai_notification_pane_ParamLimits

0xce79,	// (0x00021223) cell_ai_notification_pane

0x65e5,	// (0x0001a98f) cell_ai_notification_pane_g1

0x65ed,	// (0x0001a997) cell_ai_notification_pane_t1

0xce86,	// (0x00021230) tb_ext_find_button_pane

0xce8e,	// (0x00021238) tb_ext_find_pane_g1

0xce96,	// (0x00021240) tb_ext_find_pane_t1

0xe317,	// (0x000226c1) tb_ext_find_button_pane_g1

0x6619,	// (0x0001a9c3) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00024135) tb_ext_find_button_pane_g

0xcca1,	// (0x0002104b) main_idle_act4_pane_t1_ParamLimits

0xccb9,	// (0x00021063) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x000240f3) main_idle_act4_pane_t_ParamLimits

0xcced,	// (0x00021097) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcd04,	// (0x000210ae) sat_plugin_idle_act4_pane_ParamLimits

0xcd04,	// (0x000210ae) sat_plugin_idle_act4_pane

0xcea4,	// (0x0002124e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcea4,	// (0x0002124e) sat_plugin_idle_act4_pane_t1

0xcebc,	// (0x00021266) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcebc,	// (0x00021266) sat_plugin_idle_act4_pane_t2

0xced4,	// (0x0002127e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xced4,	// (0x0002127e) sat_plugin_idle_act4_pane_t3

0xceec,	// (0x00021296) sat_plugin_idle_act4_pane_t4_ParamLimits

0xceec,	// (0x00021296) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0002413a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0002413a) sat_plugin_idle_act4_pane_t

0xde3c,	// (0x000221e6) popup_battery_window_ParamLimits

0xde3c,	// (0x000221e6) popup_battery_window

0xc324,	// (0x000206ce) bg_popup_sub_pane_cp25_ParamLimits

0xc324,	// (0x000206ce) bg_popup_sub_pane_cp25

0x666e,	// (0x0001aa18) popup_battery_window_g1_ParamLimits

0x666e,	// (0x0001aa18) popup_battery_window_g1

0x667a,	// (0x0001aa24) popup_battery_window_t1_ParamLimits

0x667a,	// (0x0001aa24) popup_battery_window_t1

0x668c,	// (0x0001aa36) popup_battery_window_t2_ParamLimits

0x668c,	// (0x0001aa36) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00024143) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00024143) popup_battery_window_t

0xaace,	// (0x0001ee78) midp_canvas_pane_ParamLimits

0xab2a,	// (0x0001eed4) midp_keypad_pane_ParamLimits

0xab2a,	// (0x0001eed4) midp_keypad_pane

0x1551,	// (0x000158fb) main_midp_pane_ParamLimits

0x406f,	// (0x00018419) signal_pane_g2_cp_ParamLimits

0xcf04,	// (0x000212ae) aid_size_cell_midp_keypad_ParamLimits

0xcf04,	// (0x000212ae) aid_size_cell_midp_keypad

0xcf22,	// (0x000212cc) midp_keyp_game_grid_pane_ParamLimits

0xcf22,	// (0x000212cc) midp_keyp_game_grid_pane

0xcf49,	// (0x000212f3) midp_keyp_rocker_pane_ParamLimits

0xcf49,	// (0x000212f3) midp_keyp_rocker_pane

0xcf98,	// (0x00021342) midp_keyp_sk_left_pane_ParamLimits

0xcf98,	// (0x00021342) midp_keyp_sk_left_pane

0xcfee,	// (0x00021398) midp_keyp_sk_right_pane_ParamLimits

0xcfee,	// (0x00021398) midp_keyp_sk_right_pane

0xc167,	// (0x00020511) bg_button_pane_cp03

0xd044,	// (0x000213ee) midp_keyp_sk_left_pane_g1

0xc167,	// (0x00020511) bg_button_pane_cp04

0xd044,	// (0x000213ee) midp_keyp_sk_right_pane_g1

0x45af,	// (0x00018959) midp_keyp_rocker_pane_g1

0xd04c,	// (0x000213f6) keyp_game_cell_pane_ParamLimits

0xd04c,	// (0x000213f6) keyp_game_cell_pane

0xc167,	// (0x00020511) bg_button_pane_cp02

0xd072,	// (0x0002141c) keyp_game_cell_pane_g1

0x8c3f,	// (0x0001cfe9) popup_fep_vkb2_window_ParamLimits

0x8c3f,	// (0x0001cfe9) popup_fep_vkb2_window

0x98b3,	// (0x0001dc5d) aid_size_cell_vkb2_ParamLimits

0x98b3,	// (0x0001dc5d) aid_size_cell_vkb2

0x98e9,	// (0x0001dc93) popup_fep_vkb2_window_g1_ParamLimits

0x98e9,	// (0x0001dc93) popup_fep_vkb2_window_g1

0x9939,	// (0x0001dce3) vkb2_area_bottom_pane_ParamLimits

0x9939,	// (0x0001dce3) vkb2_area_bottom_pane

0x9995,	// (0x0001dd3f) vkb2_area_keypad_pane_ParamLimits

0x9995,	// (0x0001dd3f) vkb2_area_keypad_pane

0x99e3,	// (0x0001dd8d) vkb2_area_top_pane_ParamLimits

0x99e3,	// (0x0001dd8d) vkb2_area_top_pane

0x9a69,	// (0x0001de13) vkb2_top_entry_pane_ParamLimits

0x9a69,	// (0x0001de13) vkb2_top_entry_pane

0x9a96,	// (0x0001de40) vkb2_top_grid_left_pane_ParamLimits

0x9a96,	// (0x0001de40) vkb2_top_grid_left_pane

0x9ab6,	// (0x0001de60) vkb2_top_grid_right_pane_ParamLimits

0x9ab6,	// (0x0001de60) vkb2_top_grid_right_pane

0xf139,	// (0x000234e3) vkb2_cell_keypad_pane_ParamLimits

0xf139,	// (0x000234e3) vkb2_cell_keypad_pane

0x9afc,	// (0x0001dea6) vkb2_area_bottom_grid_pane_ParamLimits

0x9afc,	// (0x0001dea6) vkb2_area_bottom_grid_pane

0x9b26,	// (0x0001ded0) vkb2_area_bottom_pane_g1_ParamLimits

0x9b26,	// (0x0001ded0) vkb2_area_bottom_pane_g1

0x9b4c,	// (0x0001def6) vkb2_area_bottom_pane_g2_ParamLimits

0x9b4c,	// (0x0001def6) vkb2_area_bottom_pane_g2

0x9b7d,	// (0x0001df27) vkb2_area_bottom_pane_g3_ParamLimits

0x9b7d,	// (0x0001df27) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00024148) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00024148) vkb2_area_bottom_pane_g

0xf1e6,	// (0x00023590) vkb2_top_cell_left_pane_ParamLimits

0xf1e6,	// (0x00023590) vkb2_top_cell_left_pane

0xd07b,	// (0x00021425) vkb2_top_entry_pane_g1_ParamLimits

0xd07b,	// (0x00021425) vkb2_top_entry_pane_g1

0xd089,	// (0x00021433) vkb2_top_entry_pane_t1_ParamLimits

0xd089,	// (0x00021433) vkb2_top_entry_pane_t1

0x6836,	// (0x0001abe0) vkb2_top_entry_pane_t2_ParamLimits

0x6836,	// (0x0001abe0) vkb2_top_entry_pane_t2

0x6868,	// (0x0001ac12) vkb2_top_entry_pane_t3_ParamLimits

0x6868,	// (0x0001ac12) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0002414f) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0002414f) vkb2_top_entry_pane_t

0x9be7,	// (0x0001df91) vkb2_top_grid_right_pane_g1_ParamLimits

0x9be7,	// (0x0001df91) vkb2_top_grid_right_pane_g1

0xf233,	// (0x000235dd) vkb2_top_grid_right_pane_g2_ParamLimits

0xf233,	// (0x000235dd) vkb2_top_grid_right_pane_g2

0xf24b,	// (0x000235f5) vkb2_top_grid_right_pane_g3_ParamLimits

0xf24b,	// (0x000235f5) vkb2_top_grid_right_pane_g3

0x9bfd,	// (0x0001dfa7) vkb2_top_grid_right_pane_g4_ParamLimits

0x9bfd,	// (0x0001dfa7) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00024156) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00024156) vkb2_top_grid_right_pane_g

0xf263,	// (0x0002360d) vkb2_top_cell_left_pane_g1

0xf27a,	// (0x00023624) vkb2_cell_keypad_pane_g1_ParamLimits

0xf27a,	// (0x00023624) vkb2_cell_keypad_pane_g1

0x688c,	// (0x0001ac36) vkb2_cell_keypad_pane_t1_ParamLimits

0x688c,	// (0x0001ac36) vkb2_cell_keypad_pane_t1

0xf288,	// (0x00023632) vkb2_cell_bottom_grid_pane_ParamLimits

0xf288,	// (0x00023632) vkb2_cell_bottom_grid_pane

0xf2c1,	// (0x0002366b) vkb2_cell_bottom_grid_pane_g1

0xcd35,	// (0x000210df) aid_call2_pane_cp02

0xcd3d,	// (0x000210e7) aid_call_pane_cp02

0xcd45,	// (0x000210ef) clock_digital_number_pane_cp10

0xcd4d,	// (0x000210f7) clock_digital_number_pane_cp11

0xcd55,	// (0x000210ff) clock_digital_number_pane_cp12

0xcd5d,	// (0x00021107) clock_digital_number_pane_cp13

0xcd65,	// (0x0002110f) clock_digital_separator_pane_cp10

0xe317,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g1

0xe317,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g2

0xcd6d,	// (0x00021117) popup_clock_digital_analogue_window_cp2_g3

0xe317,	// (0x000226c1) popup_clock_digital_analogue_window_cp2_g4

0xcd6d,	// (0x00021117) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0002410b) popup_clock_digital_analogue_window_cp2_g

0xcd75,	// (0x0002111f) popup_clock_digital_analogue_window_cp2_t1

0xcd83,	// (0x0002112d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00024116) popup_clock_digital_analogue_window_cp2_t

0x45af,	// (0x00018959) clock_digital_number_pane_cp10_g1

0x45af,	// (0x00018959) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00023ef2) clock_digital_number_pane_cp10_g

0x45af,	// (0x00018959) clock_digital_separator_pane_cp10_g1

0x45af,	// (0x00018959) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00023ef2) clock_digital_separator_pane_cp10_g

0x62b8,	// (0x0001a662) uniindi_top_pane_g3

0x62c9,	// (0x0001a673) uniindi_top_pane_g4

0xf1c4,	// (0x0002356e) vkb2_row_keypad_pane_ParamLimits

0xf1c4,	// (0x0002356e) vkb2_row_keypad_pane

0xf2dd,	// (0x00023687) vkb2_cell_t_keypad_pane_ParamLimits

0xf2dd,	// (0x00023687) vkb2_cell_t_keypad_pane

0xf2ed,	// (0x00023697) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf2ed,	// (0x00023697) vkb2_cell_t_keypad_pane_cp08

0xf302,	// (0x000236ac) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf302,	// (0x000236ac) vkb2_cell_t_keypad_pane_cp09

0xf316,	// (0x000236c0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf316,	// (0x000236c0) vkb2_cell_t_keypad_pane_cp01

0xf327,	// (0x000236d1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf327,	// (0x000236d1) vkb2_cell_t_keypad_pane_cp02

0xf338,	// (0x000236e2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf338,	// (0x000236e2) vkb2_cell_t_keypad_pane_cp03

0xf349,	// (0x000236f3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf349,	// (0x000236f3) vkb2_cell_t_keypad_pane_cp04

0xf35a,	// (0x00023704) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf35a,	// (0x00023704) vkb2_cell_t_keypad_pane_cp05

0xf36b,	// (0x00023715) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf36b,	// (0x00023715) vkb2_cell_t_keypad_pane_cp06

0xf37e,	// (0x00023728) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf37e,	// (0x00023728) vkb2_cell_t_keypad_pane_cp07

0xf393,	// (0x0002373d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf393,	// (0x0002373d) vkb2_cell_t_keypad_pane_cp10

0xeeb4,	// (0x0002325e) vkb2_cell_t_keypad_pane_g1

0x68a3,	// (0x0001ac4d) vkb2_cell_t_keypad_pane_t1

0xdd77,	// (0x00022121) popup_grid_graphic2_window

0xd0c2,	// (0x0002146c) aid_size_cell_graphic2_ParamLimits

0xd0c2,	// (0x0002146c) aid_size_cell_graphic2

0xd100,	// (0x000214aa) bg_popup_window_pane_cp21_ParamLimits

0xd100,	// (0x000214aa) bg_popup_window_pane_cp21

0xd10e,	// (0x000214b8) graphic2_pages_pane_ParamLimits

0xd10e,	// (0x000214b8) graphic2_pages_pane

0xd166,	// (0x00021510) grid_graphic2_control_pane_ParamLimits

0xd166,	// (0x00021510) grid_graphic2_control_pane

0xd1ae,	// (0x00021558) grid_graphic2_pane_ParamLimits

0xd1ae,	// (0x00021558) grid_graphic2_pane

0xd239,	// (0x000215e3) cell_graphic2_pane

0xdd77,	// (0x00022121) main_comp_mode_pane

0x5abc,	// (0x00019e66) list_ai3_gene_pane_ParamLimits

0xbfb5,	// (0x0002035f) bg_popup_window_pane_cp19_ParamLimits

0x5ef7,	// (0x0001a2a1) bg_touch_area_indi_pane_ParamLimits

0x5ef7,	// (0x0001a2a1) bg_touch_area_indi_pane

0x5f0d,	// (0x0001a2b7) bg_touch_area_indi_pane_cp01_ParamLimits

0x5f0d,	// (0x0001a2b7) bg_touch_area_indi_pane_cp01

0x5f23,	// (0x0001a2cd) bg_touch_area_indi_pane_cp02_ParamLimits

0x5f23,	// (0x0001a2cd) bg_touch_area_indi_pane_cp02

0x5f3d,	// (0x0001a2e7) bg_touch_area_indi_pane_cp03_ParamLimits

0x5f3d,	// (0x0001a2e7) bg_touch_area_indi_pane_cp03

0x5f57,	// (0x0001a301) popup_slider_window_g1_ParamLimits

0x5f73,	// (0x0001a31d) popup_slider_window_g2_ParamLimits

0x5f8f,	// (0x0001a339) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x000240a0) popup_slider_window_g_ParamLimits

0x5ff5,	// (0x0001a39f) popup_slider_window_t1_ParamLimits

0x6069,	// (0x0001a413) small_volume_slider_vertical_pane_ParamLimits

0xd239,	// (0x000215e3) cell_graphic2_pane_ParamLimits

0xd29c,	// (0x00021646) bg_button_pane_cp10_ParamLimits

0xd29c,	// (0x00021646) bg_button_pane_cp10

0xd2af,	// (0x00021659) bg_button_pane_cp11_ParamLimits

0xd2af,	// (0x00021659) bg_button_pane_cp11

0xd2c2,	// (0x0002166c) graphic2_pages_pane_g1_ParamLimits

0xd2c2,	// (0x0002166c) graphic2_pages_pane_g1

0xd2dd,	// (0x00021687) graphic2_pages_pane_g2_ParamLimits

0xd2dd,	// (0x00021687) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00024164) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00024164) graphic2_pages_pane_g

0xd2f5,	// (0x0002169f) graphic2_pages_pane_t1_ParamLimits

0xd2f5,	// (0x0002169f) graphic2_pages_pane_t1

0xd30d,	// (0x000216b7) cell_graphic2_control_pane_ParamLimits

0xd30d,	// (0x000216b7) cell_graphic2_control_pane

0xd341,	// (0x000216eb) cell_graphic2_pane_g1_ParamLimits

0xd341,	// (0x000216eb) cell_graphic2_pane_g1

0xc145,	// (0x000204ef) cell_graphic2_pane_g2_ParamLimits

0xc145,	// (0x000204ef) cell_graphic2_pane_g2

0xcbea,	// (0x00020f94) cell_graphic2_pane_g3_ParamLimits

0xcbea,	// (0x00020f94) cell_graphic2_pane_g3

0xc152,	// (0x000204fc) cell_graphic2_pane_g4_ParamLimits

0xc152,	// (0x000204fc) cell_graphic2_pane_g4

0xd34e,	// (0x000216f8) cell_graphic2_pane_g5_ParamLimits

0xd34e,	// (0x000216f8) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00024169) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00024169) cell_graphic2_pane_g

0xd36e,	// (0x00021718) cell_graphic2_pane_t1_ParamLimits

0xd36e,	// (0x00021718) cell_graphic2_pane_t1

0x286b,	// (0x00016c15) grid_highlight_pane_cp11_ParamLimits

0x286b,	// (0x00016c15) grid_highlight_pane_cp11

0xc324,	// (0x000206ce) bg_button_pane_cp05

0xd3b7,	// (0x00021761) cell_graphic2_control_pane_g1

0x45af,	// (0x00018959) bg_touch_area_indi_pane_g1

0x6b8b,	// (0x0001af35) aid_cmod_rocker_key_size

0x6b95,	// (0x0001af3f) aid_cmode_itu_key_size

0x6b9f,	// (0x0001af49) main_cmode_video_pane

0x6ba9,	// (0x0001af53) main_comp_mode_itu_pane

0x6bb5,	// (0x0001af5f) main_comp_mode_rocker_pane

0x6bc1,	// (0x0001af6b) cell_cmode_rocker_pane_ParamLimits

0x6bc1,	// (0x0001af6b) cell_cmode_rocker_pane

0x6bd5,	// (0x0001af7f) cell_cmode_itu_pane_ParamLimits

0x6bd5,	// (0x0001af7f) cell_cmode_itu_pane

0xc8a9,	// (0x00020c53) bg_button_pane_cp06_ParamLimits

0xc8a9,	// (0x00020c53) bg_button_pane_cp06

0x4812,	// (0x00018bbc) cell_cmode_rocker_pane_g1_ParamLimits

0x4812,	// (0x00018bbc) cell_cmode_rocker_pane_g1

0x6110,	// (0x0001a4ba) cell_cmode_rocker_pane_g2_ParamLimits

0x6110,	// (0x0001a4ba) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00024179) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00024179) cell_cmode_rocker_pane_g

0xc167,	// (0x00020511) bg_button_pane_cp07

0x6bec,	// (0x0001af96) cell_cmode_itu_pane_g1

0x6bf5,	// (0x0001af9f) cell_cmode_itu_pane_t1

0x6c03,	// (0x0001afad) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0002417e) cell_cmode_itu_pane_t

0x633c,	// (0x0001a6e6) aid_touch_ctrl_left

0x6344,	// (0x0001a6ee) aid_touch_ctrl_right

0xc167,	// (0x00020511) compa_mode_pane

0xd3df,	// (0x00021789) aid_cmod_rocker_key_size_cp

0xd3e9,	// (0x00021793) aid_cmode_itu_key_size_cp

0x6c25,	// (0x0001afcf) compa_mode_pane_g1

0x6c2d,	// (0x0001afd7) compa_mode_pane_g2

0x6c35,	// (0x0001afdf) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00024183) compa_mode_pane_g

0xd3f3,	// (0x0002179d) main_comp_mode_itu_pane_cp

0xd3fb,	// (0x000217a5) main_comp_mode_rocker_pane_cp

0xd403,	// (0x000217ad) cell_cmode_itu_pane_cp_ParamLimits

0xd403,	// (0x000217ad) cell_cmode_itu_pane_cp

0xd418,	// (0x000217c2) cell_cmode_rocker_pane_cp_ParamLimits

0xd418,	// (0x000217c2) cell_cmode_rocker_pane_cp

0xc8a9,	// (0x00020c53) bg_button_pane_cp06_cp_ParamLimits

0xc8a9,	// (0x00020c53) bg_button_pane_cp06_cp

0x4812,	// (0x00018bbc) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4812,	// (0x00018bbc) cell_cmode_rocker_pane_g1_cp

0x45af,	// (0x00018959) cell_cmode_rocker_pane_g2_cp

0xc167,	// (0x00020511) bg_button_pane_cp07_cp

0xd42a,	// (0x000217d4) cell_cmode_itu_pane_g1_cp

0xd433,	// (0x000217dd) cell_cmode_itu_pane_t1_cp

0xd433,	// (0x000217dd) cell_cmode_itu_pane_t2_cp

0xb3b1,	// (0x0001f75b) settings_code_pane_cp2

0xc1d7,	// (0x00020581) bg_popup_window_pane_cp3_ParamLimits

0xc538,	// (0x000208e2) heading_pane_cp3_ParamLimits

0xc544,	// (0x000208ee) listscroll_popup_graphic_pane_ParamLimits

0xecc2,	// (0x0002306c) fep_hwr_aid_pane_ParamLimits

0xf0af,	// (0x00023459) aid_touch_sctrl_top_ParamLimits

0xf0ca,	// (0x00023474) sctrl_sk_top_pane_g1_ParamLimits

0xeeb4,	// (0x0002325e) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x000240b9) sctrl_sk_top_pane_g_ParamLimits

0xf0d7,	// (0x00023481) sctrl_sk_top_pane_t1_ParamLimits

0xf0af,	// (0x00023459) aid_touch_sctrl_bottom_ParamLimits

0xf0d7,	// (0x00023481) sctrl_sk_bottom_pane_t1_ParamLimits

0x6282,	// (0x0001a62c) aid_area_touch_clock

0x9a2b,	// (0x0001ddd5) aid_vkb2_area_top_pane_cell_ParamLimits

0x9a2b,	// (0x0001ddd5) aid_vkb2_area_top_pane_cell

0x9ad6,	// (0x0001de80) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9ad6,	// (0x0001de80) aid_vkb2_area_bottom_pane_cell

0x67ee,	// (0x0001ab98) popup_char_count_window

0x6c8b,	// (0x0001b035) popup_char_count_window_g1

0x6c94,	// (0x0001b03e) popup_char_count_window_g2

0x6c9d,	// (0x0001b047) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0002418a) popup_char_count_window_g

0x6ca6,	// (0x0001b050) popup_char_count_window_t1

0xf117,	// (0x000234c1) popup_fep_char_preview_window_ParamLimits

0xf117,	// (0x000234c1) popup_fep_char_preview_window

0x9a4b,	// (0x0001ddf5) vkb2_top_candi_pane_ParamLimits

0x9a4b,	// (0x0001ddf5) vkb2_top_candi_pane

0xd441,	// (0x000217eb) cell_vkb2_top_candi_pane_ParamLimits

0xd441,	// (0x000217eb) cell_vkb2_top_candi_pane

0xf3a8,	// (0x00023752) bg_popup_fep_char_preview_window_ParamLimits

0xf3a8,	// (0x00023752) bg_popup_fep_char_preview_window

0xf3b6,	// (0x00023760) popup_fep_char_preview_window_t1_ParamLimits

0xf3b6,	// (0x00023760) popup_fep_char_preview_window_t1

0x6d05,	// (0x0001b0af) bg_popup_fep_char_preview_window_g1

0x6d0d,	// (0x0001b0b7) bg_popup_fep_char_preview_window_g2

0x6d15,	// (0x0001b0bf) bg_popup_fep_char_preview_window_g3

0x6d1d,	// (0x0001b0c7) bg_popup_fep_char_preview_window_g4

0x6d25,	// (0x0001b0cf) bg_popup_fep_char_preview_window_g5

0xf3f0,	// (0x0002379a) bg_popup_fep_char_preview_window_g6

0x6d2d,	// (0x0001b0d7) bg_popup_fep_char_preview_window_g7

0x6d35,	// (0x0001b0df) bg_popup_fep_char_preview_window_g8

0x6d3d,	// (0x0001b0e7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00024191) bg_popup_fep_char_preview_window_g

0xeeb4,	// (0x0002325e) cell_vkb2_top_candi_pane_g1_ParamLimits

0xeeb4,	// (0x0002325e) cell_vkb2_top_candi_pane_g1

0xeec2,	// (0x0002326c) cell_vkb2_top_candi_pane_g2_ParamLimits

0xeec2,	// (0x0002326c) cell_vkb2_top_candi_pane_g2

0x59d9,	// (0x00019d83) cell_vkb2_top_candi_pane_g3_ParamLimits

0x59d9,	// (0x00019d83) cell_vkb2_top_candi_pane_g3

0xf3f8,	// (0x000237a2) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf3f8,	// (0x000237a2) cell_vkb2_top_candi_pane_g4

0x4ed6,	// (0x00019280) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4ed6,	// (0x00019280) cell_vkb2_top_candi_pane_g5

0xf419,	// (0x000237c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf419,	// (0x000237c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x000241a4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x000241a4) cell_vkb2_top_candi_pane_g

0xf427,	// (0x000237d1) cell_vkb2_top_candi_pane_t1

0xeadf,	// (0x00022e89) aid_size_touch_slider_mark_ParamLimits

0xeadf,	// (0x00022e89) aid_size_touch_slider_mark

0xd14a,	// (0x000214f4) grid_graphic2_catg_pane_ParamLimits

0xd14a,	// (0x000214f4) grid_graphic2_catg_pane

0xd208,	// (0x000215b2) popup_grid_graphic2_window_t1_ParamLimits

0xd208,	// (0x000215b2) popup_grid_graphic2_window_t1

0xd21e,	// (0x000215c8) popup_grid_graphic2_window_t2_ParamLimits

0xd21e,	// (0x000215c8) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0002415f) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0002415f) popup_grid_graphic2_window_t

0xc324,	// (0x000206ce) bg_button_pane_cp05_ParamLimits

0xd3b7,	// (0x00021761) cell_graphic2_control_pane_g1_ParamLimits

0xd4ab,	// (0x00021855) cell_graphic2_catg_pane_ParamLimits

0xd4ab,	// (0x00021855) cell_graphic2_catg_pane

0xc167,	// (0x00020511) bg_button_pane_cp12

0xd4bd,	// (0x00021867) cell_graphic2_catg_pane_g1

0x624e,	// (0x0001a5f8) cell_tb_ext_pane_t1_ParamLimits

0xf206,	// (0x000235b0) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf206,	// (0x000235b0) vkb2_top_cell_right_narrow_pane

0xf21e,	// (0x000235c8) vkb2_top_cell_right_wide_pane_ParamLimits

0xf21e,	// (0x000235c8) vkb2_top_cell_right_wide_pane

0xe7fd,	// (0x00022ba7) bg_vkb2_func_pane_ParamLimits

0xe7fd,	// (0x00022ba7) bg_vkb2_func_pane

0xf263,	// (0x0002360d) vkb2_top_cell_left_pane_g1_ParamLimits

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp03

0xf2c1,	// (0x0002366b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1abf,	// (0x00015e69) bg_vkb2_func_pane_g1

0x1ac7,	// (0x00015e71) bg_vkb2_func_pane_g2

0x1ad7,	// (0x00015e81) bg_vkb2_func_pane_g3

0x1acf,	// (0x00015e79) bg_vkb2_func_pane_g4

0x1adf,	// (0x00015e89) bg_vkb2_func_pane_g5

0x1ae7,	// (0x00015e91) bg_vkb2_func_pane_g6

0x1aef,	// (0x00015e99) bg_vkb2_func_pane_g7

0x1af7,	// (0x00015ea1) bg_vkb2_func_pane_g8

0x1ab7,	// (0x00015e61) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x000241b1) bg_vkb2_func_pane_g

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp01

0xf263,	// (0x0002360d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf263,	// (0x0002360d) vkb2_top_cell_right_wide_pane_g1

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe7fd,	// (0x00022ba7) bg_vkb2_fuc_pane_cp02

0xf2c1,	// (0x0002366b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf2c1,	// (0x0002366b) vkb2_top_cell_right_narrow_pane_g1

0xbef7,	// (0x000202a1) aid_touch_area_decrease_ParamLimits

0xbef7,	// (0x000202a1) aid_touch_area_decrease

0xbf31,	// (0x000202db) aid_touch_area_increase_ParamLimits

0xbf31,	// (0x000202db) aid_touch_area_increase

0xbf59,	// (0x00020303) aid_touch_area_mute_ParamLimits

0xbf59,	// (0x00020303) aid_touch_area_mute

0xbf81,	// (0x0002032b) aid_touch_area_slider_ParamLimits

0xbf81,	// (0x0002032b) aid_touch_area_slider

0xbfc1,	// (0x0002036b) popup_slider_window_g4_ParamLimits

0xbfc1,	// (0x0002036b) popup_slider_window_g4

0xbfe9,	// (0x00020393) popup_slider_window_g5_ParamLimits

0xbfe9,	// (0x00020393) popup_slider_window_g5

0xc01d,	// (0x000203c7) popup_slider_window_g6_ParamLimits

0xc01d,	// (0x000203c7) popup_slider_window_g6

0x6023,	// (0x0001a3cd) popup_slider_window_t2_ParamLimits

0x6023,	// (0x0001a3cd) popup_slider_window_t2

0x0001,

0xfd03,	// (0x000240ad) popup_slider_window_t_ParamLimits

0xfd03,	// (0x000240ad) popup_slider_window_t

0xc039,	// (0x000203e3) slider_pane_ParamLimits

0xc039,	// (0x000203e3) slider_pane

0x6d60,	// (0x0001b10a) slider_pane_g1_ParamLimits

0x6d60,	// (0x0001b10a) slider_pane_g1

0x6d74,	// (0x0001b11e) slider_pane_g2_ParamLimits

0x6d74,	// (0x0001b11e) slider_pane_g2

0x6d8a,	// (0x0001b134) slider_pane_g3_ParamLimits

0x6d8a,	// (0x0001b134) slider_pane_g3

0x0003,

0xfe1a,	// (0x000241c4) slider_pane_g_ParamLimits

0xfe1a,	// (0x000241c4) slider_pane_g

0x9592,	// (0x0001d93c) popup_tb_float_extension_window_ParamLimits

0x9592,	// (0x0001d93c) popup_tb_float_extension_window

0x6db6,	// (0x0001b160) aid_size_cell_tb_float_ext

0xc167,	// (0x00020511) bg_popup_sub_window_cp28

0x6dc2,	// (0x0001b16c) grid_tb_float_ext_pane

0x6dce,	// (0x0001b178) cell_tb_float_ext_pane_ParamLimits

0x6dce,	// (0x0001b178) cell_tb_float_ext_pane

0x6dea,	// (0x0001b194) cell_tb_float_ext_pane_g1

0x6df3,	// (0x0001b19d) grid_highlight_pane_cp12

0x9824,	// (0x0001dbce) cell_last_hwr_side_pane_ParamLimits

0x9824,	// (0x0001dbce) cell_last_hwr_side_pane

0x45af,	// (0x00018959) cell_last_hwr_side_pane_g1

0x6dfc,	// (0x0001b1a6) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x000241cd) cell_last_hwr_side_pane_g

0x9bb2,	// (0x0001df5c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9bb2,	// (0x0001df5c) vkb2_area_bottom_space_btn_pane

0xeeb4,	// (0x0002325e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x68a3,	// (0x0001ac4d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf427,	// (0x000237d1) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf445,	// (0x000237ef) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf445,	// (0x000237ef) vkb2_area_bottom_space_btn_pane_g1

0xf47f,	// (0x00023829) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf47f,	// (0x00023829) vkb2_area_bottom_space_btn_pane_g2

0xf4b5,	// (0x0002385f) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf4b5,	// (0x0002385f) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x000241d2) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x000241d2) vkb2_area_bottom_space_btn_pane_g

0xed79,	// (0x00023123) cel_fep_hwr_func_pane_ParamLimits

0xed79,	// (0x00023123) cel_fep_hwr_func_pane

0x97f9,	// (0x0001dba3) cell_hwr_side_button_pane_ParamLimits

0x97f9,	// (0x0001dba3) cell_hwr_side_button_pane

0x6282,	// (0x0001a62c) aid_area_touch_clock_ParamLimits

0xc324,	// (0x000206ce) bg_uniindi_top_pane_ParamLimits

0x6296,	// (0x0001a640) uniindi_top_pane_g1_ParamLimits

0x62ac,	// (0x0001a656) uniindi_top_pane_g2_ParamLimits

0x62b8,	// (0x0001a662) uniindi_top_pane_g3_ParamLimits

0x62c9,	// (0x0001a673) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x000240e5) uniindi_top_pane_g_ParamLimits

0x62d6,	// (0x0001a680) uniindi_top_pane_t1_ParamLimits

0xc324,	// (0x000206ce) bg_vkb2_func_pane_cp01_ParamLimits

0xc324,	// (0x000206ce) bg_vkb2_func_pane_cp01

0x6e05,	// (0x0001b1af) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e05,	// (0x0001b1af) cel_fep_hwr_func_pane_g1

0xc324,	// (0x000206ce) bg_vkb2_func_pane_cp02_ParamLimits

0xc324,	// (0x000206ce) bg_vkb2_func_pane_cp02

0x6e05,	// (0x0001b1af) cell_hwr_side_button_pane_g1_ParamLimits

0x6e05,	// (0x0001b1af) cell_hwr_side_button_pane_g1

0x190e,	// (0x00015cb8) status_pane_g4_ParamLimits

0x190e,	// (0x00015cb8) status_pane_g4

0x1928,	// (0x00015cd2) status_pane_t1

0x4362,	// (0x0001870c) form2_midp_gauge_slider_cont_pane

0x436a,	// (0x00018714) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb6c7,	// (0x0001fa71) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb6d9,	// (0x0001fa83) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00023ea5) form2_midp_gauge_slider_pane_t_ParamLimits

0x43a0,	// (0x0001874a) form2_midp_slider_pane_ParamLimits

0xf109,	// (0x000234b3) aid_size_cell_func_vkb2_ParamLimits

0xf109,	// (0x000234b3) aid_size_cell_func_vkb2

0x6da2,	// (0x0001b14c) slider_pane_g4_ParamLimits

0x6da2,	// (0x0001b14c) slider_pane_g4

0x9c13,	// (0x0001dfbd) form2_midp_gauge_slider_pane_t2_cp01

0x9c21,	// (0x0001dfcb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9c21,	// (0x0001dfcb) form2_midp_gauge_slider_pane_t3_cp01

0xf4ff,	// (0x000238a9) form2_midp_slider_pane_cp01

0xc167,	// (0x00020511) navi_smil_pane

0x6e3e,	// (0x0001b1e8) navi_smil_pane_g1

0x6e46,	// (0x0001b1f0) navi_smil_pane_t1

0x6e13,	// (0x0001b1bd) form2_midp_slider_pane_g1

0x6e1c,	// (0x0001b1c6) form2_midp_slider_pane_g2

0x6e24,	// (0x0001b1ce) form2_midp_slider_pane_g3

0x6e13,	// (0x0001b1bd) form2_midp_slider_pane_g4

0xd4c6,	// (0x00021870) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x000241db) form2_midp_slider_pane_g

0xf4ef,	// (0x00023899) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf4ef,	// (0x00023899) vkb2_area_bottom_space_btn_pane_g4

0xadb1,	// (0x0001f15b) lc0_navi_pane_ParamLimits

0xadb1,	// (0x0001f15b) lc0_navi_pane

0xae21,	// (0x0001f1cb) lc0_stat_indi_pane_ParamLimits

0xae21,	// (0x0001f1cb) lc0_stat_indi_pane

0xae36,	// (0x0001f1e0) ls0_title_pane_ParamLimits

0xae36,	// (0x0001f1e0) ls0_title_pane

0xc8a9,	// (0x00020c53) bg_popup_sub_pane_cp14_ParamLimits

0x6269,	// (0x0001a613) list_uniindi_pane_ParamLimits

0x6275,	// (0x0001a61f) uniindi_top_pane_ParamLimits

0x6314,	// (0x0001a6be) list_single_uniindi_pane_g1_ParamLimits

0x6327,	// (0x0001a6d1) list_single_uniindi_pane_t1_ParamLimits

0x9c3e,	// (0x0001dfe8) lc0_stat_clock_pane_ParamLimits

0x9c3e,	// (0x0001dfe8) lc0_stat_clock_pane

0xd4cf,	// (0x00021879) lc0_stat_indi_pane_g1_ParamLimits

0xd4cf,	// (0x00021879) lc0_stat_indi_pane_g1

0xd4dc,	// (0x00021886) lc0_stat_indi_pane_g2_ParamLimits

0xd4dc,	// (0x00021886) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x000241e6) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x000241e6) lc0_stat_indi_pane_g

0x9c4b,	// (0x0001dff5) lc0_uni_indicator_pane_ParamLimits

0x9c4b,	// (0x0001dff5) lc0_uni_indicator_pane

0xd4e9,	// (0x00021893) ls0_title_pane_g1_ParamLimits

0xd4e9,	// (0x00021893) ls0_title_pane_g1

0xd4fd,	// (0x000218a7) ls0_title_pane_t1_ParamLimits

0xd4fd,	// (0x000218a7) ls0_title_pane_t1

0x9c58,	// (0x0001e002) lc0_uni_indicator_pane_g1_ParamLimits

0x9c58,	// (0x0001e002) lc0_uni_indicator_pane_g1

0x6eb8,	// (0x0001b262) lc0_stat_clock_pane_t1

0xdd77,	// (0x00022121) main_ai5_pane

0x6ec6,	// (0x0001b270) ai5_sk_pane_ParamLimits

0x6ec6,	// (0x0001b270) ai5_sk_pane

0xd52b,	// (0x000218d5) cell_ai5_widget_pane_ParamLimits

0xd52b,	// (0x000218d5) cell_ai5_widget_pane

0xd885,	// (0x00021c2f) aid_size_cell_widget_grid

0x7483,	// (0x0001b82d) bg_ai5_widget_pane_ParamLimits

0x7483,	// (0x0001b82d) bg_ai5_widget_pane

0xd8b9,	// (0x00021c63) cell_ai5_widget_pane_g2

0xd8cd,	// (0x00021c77) cell_ai5_widget_pane_g3

0xd8e7,	// (0x00021c91) cell_ai5_widget_pane_g4

0xd8f7,	// (0x00021ca1) cell_ai5_widget_pane_g5

0xd907,	// (0x00021cb1) cell_ai5_widget_pane_g6

0xd913,	// (0x00021cbd) cell_ai5_widget_pane_g7

0xd91f,	// (0x00021cc9) cell_ai5_widget_pane_t1_ParamLimits

0xd91f,	// (0x00021cc9) cell_ai5_widget_pane_t1

0x75ba,	// (0x0001b964) cell_ai5_widget_pane_t2_ParamLimits

0x75ba,	// (0x0001b964) cell_ai5_widget_pane_t2

0x75d2,	// (0x0001b97c) cell_ai5_widget_pane_t3_ParamLimits

0x75d2,	// (0x0001b97c) cell_ai5_widget_pane_t3

0xd93c,	// (0x00021ce6) cell_ai5_widget_pane_t4_ParamLimits

0xd93c,	// (0x00021ce6) cell_ai5_widget_pane_t4

0xd962,	// (0x00021d0c) cell_ai5_widget_pane_t5_ParamLimits

0xd962,	// (0x00021d0c) cell_ai5_widget_pane_t5

0x7630,	// (0x0001b9da) cell_ai5_widget_pane_t6_ParamLimits

0x7630,	// (0x0001b9da) cell_ai5_widget_pane_t6

0x7642,	// (0x0001b9ec) cell_ai5_widget_pane_t7_ParamLimits

0x7642,	// (0x0001b9ec) cell_ai5_widget_pane_t7

0x765b,	// (0x0001ba05) cell_ai5_widget_pane_t8_ParamLimits

0x765b,	// (0x0001ba05) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x00024200) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x00024200) cell_ai5_widget_pane_t

0xd9cf,	// (0x00021d79) grid_ai5_widget_pane

0xc8a9,	// (0x00020c53) highlight_cell_ai5_widget_pane_ParamLimits

0xc8a9,	// (0x00020c53) highlight_cell_ai5_widget_pane

0xd9dd,	// (0x00021d87) ai5_sk_left_pane

0xd9e7,	// (0x00021d91) ai5_sk_middle_pane

0xd9f1,	// (0x00021d9b) ai5_sk_right_pane

0x76e6,	// (0x0001ba90) bg_ai5_widget_pane_g1_ParamLimits

0x76e6,	// (0x0001ba90) bg_ai5_widget_pane_g1

0x76f2,	// (0x0001ba9c) bg_ai5_widget_pane_g2_ParamLimits

0x76f2,	// (0x0001ba9c) bg_ai5_widget_pane_g2

0x76fe,	// (0x0001baa8) bg_ai5_widget_pane_g3_ParamLimits

0x76fe,	// (0x0001baa8) bg_ai5_widget_pane_g3

0x770a,	// (0x0001bab4) bg_ai5_widget_pane_g4_ParamLimits

0x770a,	// (0x0001bab4) bg_ai5_widget_pane_g4

0x7716,	// (0x0001bac0) bg_ai5_widget_pane_g5_ParamLimits

0x7716,	// (0x0001bac0) bg_ai5_widget_pane_g5

0x7722,	// (0x0001bacc) bg_ai5_widget_pane_g6_ParamLimits

0x7722,	// (0x0001bacc) bg_ai5_widget_pane_g6

0x772e,	// (0x0001bad8) bg_ai5_widget_pane_g7_ParamLimits

0x772e,	// (0x0001bad8) bg_ai5_widget_pane_g7

0x773a,	// (0x0001bae4) bg_ai5_widget_pane_g8_ParamLimits

0x773a,	// (0x0001bae4) bg_ai5_widget_pane_g8

0x7746,	// (0x0001baf0) bg_ai5_widget_pane_g9_ParamLimits

0x7746,	// (0x0001baf0) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00024215) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00024215) bg_ai5_widget_pane_g

0xda27,	// (0x00021dd1) cell_shortcut_ai5_widget_pane_ParamLimits

0xda27,	// (0x00021dd1) cell_shortcut_ai5_widget_pane

0x1222,	// (0x000155cc) bg_cell_shortcut_ai5_widget_pane

0x7791,	// (0x0001bb3b) cell_grid_ai5_widget_pane_g1

0x1222,	// (0x000155cc) highlight_cell_shortcut_ai5_widget_pane

0x1abf,	// (0x00015e69) ai5_sk_left_pane_g1

0x779a,	// (0x0001bb44) ai5_sk_left_pane_g2

0x77a2,	// (0x0001bb4c) ai5_sk_left_pane_g3

0x77aa,	// (0x0001bb54) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00024228) ai5_sk_left_pane_g

0x77b2,	// (0x0001bb5c) ai5_sk_left_pane_t1

0x1ac7,	// (0x00015e71) ai5_sk_right_pane_g1

0x77c0,	// (0x0001bb6a) ai5_sk_right_pane_g2

0x77c8,	// (0x0001bb72) ai5_sk_right_pane_g3

0x77d0,	// (0x0001bb7a) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00024231) ai5_sk_right_pane_g

0x77d8,	// (0x0001bb82) ai5_sk_right_pane_t1

0x1ac7,	// (0x00015e71) ai5_sk_middle_pane_g1

0x1abf,	// (0x00015e69) ai5_sk_middle_pane_g2

0x1adf,	// (0x00015e89) ai5_sk_middle_pane_g3

0x77c8,	// (0x0001bb72) ai5_sk_middle_pane_g4

0x77a2,	// (0x0001bb4c) ai5_sk_middle_pane_g5

0x77e6,	// (0x0001bb90) ai5_sk_middle_pane_g6

0xda3a,	// (0x00021de4) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0002423a) ai5_sk_middle_pane_g

0xac9b,	// (0x0001f045) aid_touch_area_size_lc0_ParamLimits

0xac9b,	// (0x0001f045) aid_touch_area_size_lc0

0xeee3,	// (0x0002328d) cell_hwr_candidate_pane_t1_ParamLimits

0x15d7,	// (0x00015981) aid_touch_navi_pane

0xaf41,	// (0x0001f2eb) status_dt_navi_pane_ParamLimits

0xaf41,	// (0x0001f2eb) status_dt_navi_pane

0xaf59,	// (0x0001f303) status_dt_sta_pane_ParamLimits

0xaf59,	// (0x0001f303) status_dt_sta_pane

0xda42,	// (0x00021dec) dt_sta_controll_pane

0xda4f,	// (0x00021df9) dt_sta_indi_pane

0xda5c,	// (0x00021e06) dt_sta_title_pane

0xc324,	// (0x000206ce) bg_dt_sta_indi_pane_ParamLimits

0xc324,	// (0x000206ce) bg_dt_sta_indi_pane

0xda6e,	// (0x00021e18) dt_sta_battery_pane

0xda76,	// (0x00021e20) dt_sta_indi_pane_g1

0xda7f,	// (0x00021e29) dt_sta_indi_pane_g2

0xda88,	// (0x00021e32) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00024249) dt_sta_indi_pane_g

0xda91,	// (0x00021e3b) dt_sta_signal_pane

0xc8a9,	// (0x00020c53) bg_dt_sta_title_pane_ParamLimits

0xc8a9,	// (0x00020c53) bg_dt_sta_title_pane

0xda9a,	// (0x00021e44) dt_sta_title_pane_g1

0xdaa2,	// (0x00021e4c) dt_sta_title_pane_t1_ParamLimits

0xdaa2,	// (0x00021e4c) dt_sta_title_pane_t1

0xc167,	// (0x00020511) bg_dt_sta_control_pane

0xdab7,	// (0x00021e61) dt_sta_controll_pane_g1

0xdac0,	// (0x00021e6a) bg_dt_sta_title_pane_g1

0xdac9,	// (0x00021e73) bg_dt_sta_title_pane_g2

0xdad2,	// (0x00021e7c) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x00024250) bg_dt_sta_title_pane_g

0x45af,	// (0x00018959) bg_dt_sta_indi_pane_g1

0x7894,	// (0x0001bc3e) dt_sta_signal_pane_g1

0x789c,	// (0x0001bc46) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00024257) dt_sta_signal_pane_g

0x78a4,	// (0x0001bc4e) dt_sta_battery_pane_g1

0x78ad,	// (0x0001bc57) dt_sta_battery_pane_t1

0x45af,	// (0x00018959) bg_dt_sta_control_pane_g1

0xe472,	// (0x0002281c) fep_china_uni_eep_pane

0xe47a,	// (0x00022824) fep_china_uni_entry_pane_ParamLimits

0xe48a,	// (0x00022834) popup_fep_china_uni_window_g1_ParamLimits

0xe49a,	// (0x00022844) popup_fep_china_uni_window_g2_ParamLimits

0xe49a,	// (0x00022844) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00023ac2) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00023ac2) popup_fep_china_uni_window_g

0x78bc,	// (0x0001bc66) fep_china_uni_eep_pane_g1

0x78c4,	// (0x0001bc6e) fep_china_uni_eep_pane_t1

0x6e35,	// (0x0001b1df) aid_touch_area_size_smil_player

0x1725,	// (0x00015acf) lc0_clock_pane

0x191c,	// (0x00015cc6) status_pane_g5_ParamLimits

0x191c,	// (0x00015cc6) status_pane_g5

0x90ba,	// (0x0001d464) popup_keymap_window

0x18e2,	// (0x00015c8c) status_icon_pane

0xd8cd,	// (0x00021c77) cell_ai5_widget_pane_g3_ParamLimits

0xd8e7,	// (0x00021c91) cell_ai5_widget_pane_g4_ParamLimits

0xd8f7,	// (0x00021ca1) cell_ai5_widget_pane_g5_ParamLimits

0x7561,	// (0x0001b90b) cell_ai5_widget_pane_g8_ParamLimits

0x7561,	// (0x0001b90b) cell_ai5_widget_pane_g8

0x7575,	// (0x0001b91f) cell_ai5_widget_pane_g9_ParamLimits

0x7575,	// (0x0001b91f) cell_ai5_widget_pane_g9

0x7589,	// (0x0001b933) cell_ai5_widget_pane_g10_ParamLimits

0x7589,	// (0x0001b933) cell_ai5_widget_pane_g10

0x78d3,	// (0x0001bc7d) status_icon_pane_g1

0xc167,	// (0x00020511) bg_popup_sub_pane_cp13

0x78db,	// (0x0001bc85) popup_keymap_window_t1

0xac29,	// (0x0001efd3) control_pane_g6_ParamLimits

0xac29,	// (0x0001efd3) control_pane_g6

0xac36,	// (0x0001efe0) control_pane_g7_ParamLimits

0xac36,	// (0x0001efe0) control_pane_g7

0xac43,	// (0x0001efed) control_pane_g8_ParamLimits

0xac43,	// (0x0001efed) control_pane_g8

0xda42,	// (0x00021dec) dt_sta_controll_pane_ParamLimits

0xda4f,	// (0x00021df9) dt_sta_indi_pane_ParamLimits

0xda5c,	// (0x00021e06) dt_sta_title_pane_ParamLimits

0xc771,	// (0x00020b1b) aid_size_touch_scroll_bar_cale

0xde54,	// (0x000221fe) popup_discreet_window_ParamLimits

0xde54,	// (0x000221fe) popup_discreet_window

0x8c89,	// (0x0001d033) popup_sk_window

0x21f4,	// (0x0001659e) bg_popup_sub_pane_cp28_ParamLimits

0x21f4,	// (0x0001659e) bg_popup_sub_pane_cp28

0x78e9,	// (0x0001bc93) popup_discreet_window_g1_ParamLimits

0x78e9,	// (0x0001bc93) popup_discreet_window_g1

0x7909,	// (0x0001bcb3) popup_discreet_window_t1_ParamLimits

0x7909,	// (0x0001bcb3) popup_discreet_window_t1

0x7927,	// (0x0001bcd1) popup_discreet_window_t2_ParamLimits

0x7927,	// (0x0001bcd1) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0002425c) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0002425c) popup_discreet_window_t

0xf508,	// (0x000238b2) popup_sk_window_g1

0xf512,	// (0x000238bc) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00024263) popup_sk_window_g

0xf51a,	// (0x000238c4) popup_sk_window_t1

0xf528,	// (0x000238d2) popup_sk_window_t1_copy1

0xd8b9,	// (0x00021c63) cell_ai5_widget_pane_g2_ParamLimits

0xd982,	// (0x00021d2c) cell_ai5_widget_pane_t9_ParamLimits

0xd982,	// (0x00021d2c) cell_ai5_widget_pane_t9

0xc167,	// (0x00020511) main_fep_fshwr2_pane

0x9c77,	// (0x0001e021) aid_fshwr2_btn_pane

0x9c8b,	// (0x0001e035) aid_fshwr2_syb_pane

0x9c9f,	// (0x0001e049) aid_fshwr2_txt_pane

0x9caf,	// (0x0001e059) fshwr2_func_candi_pane

0x9cd1,	// (0x0001e07b) fshwr2_hwr_syb_pane

0x9cf5,	// (0x0001e09f) fshwr2_icf_pane

0xdd77,	// (0x00022121) fshwr2_icf_bg_pane

0xf536,	// (0x000238e0) fshwr2_icf_pane_t1_ParamLimits

0xf536,	// (0x000238e0) fshwr2_icf_pane_t1

0xe317,	// (0x000226c1) fshwr2_func_candi_pane_g1

0xdadb,	// (0x00021e85) fshwr2_func_candi_row_pane_ParamLimits

0xdadb,	// (0x00021e85) fshwr2_func_candi_row_pane

0x9d25,	// (0x0001e0cf) cell_fshwr2_syb_pane_ParamLimits

0x9d25,	// (0x0001e0cf) cell_fshwr2_syb_pane

0x0015,	// (0x000143bf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0015,	// (0x000143bf) fshwr2_hwr_syb_pane_g1

0xdd77,	// (0x00022121) bg_popup_call_pane_cp01

0x9d4d,	// (0x0001e0f7) fshwr2_func_candi_cell_pane_ParamLimits

0x9d4d,	// (0x0001e0f7) fshwr2_func_candi_cell_pane

0xdb02,	// (0x00021eac) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdb02,	// (0x00021eac) fshwr2_func_candi_cell_bg_pane

0x9d96,	// (0x0001e140) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9d96,	// (0x0001e140) fshwr2_func_candi_cell_pane_g1

0x9dcd,	// (0x0001e177) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9dcd,	// (0x0001e177) fshwr2_func_candi_cell_pane_t1

0xdd77,	// (0x00022121) bg_button_pane_cp08

0x79a8,	// (0x0001bd52) cell_fshwr2_syb_bg_pane

0x9de8,	// (0x0001e192) cell_fshwr2_syb_bg_pane_g1

0x9dfc,	// (0x0001e1a6) cell_fshwr2_syb_bg_pane_t1

0xc8a9,	// (0x00020c53) main_tmo_pane

0xb278,	// (0x0001f622) uni_indicator_pane_g1_ParamLimits

0xb28e,	// (0x0001f638) uni_indicator_pane_g2_ParamLimits

0xb2a4,	// (0x0001f64e) uni_indicator_pane_g3_ParamLimits

0xb2b7,	// (0x0001f661) uni_indicator_pane_g4_ParamLimits

0xb2b7,	// (0x0001f661) uni_indicator_pane_g4

0x2d60,	// (0x0001710a) uni_indicator_pane_g5_ParamLimits

0x2d60,	// (0x0001710a) uni_indicator_pane_g5

0x2d60,	// (0x0001710a) uni_indicator_pane_g6_ParamLimits

0x2d60,	// (0x0001710a) uni_indicator_pane_g6

0xf917,	// (0x00023cc1) uni_indicator_pane_g_ParamLimits

0xbec7,	// (0x00020271) popup_tmo_note_window_ParamLimits

0xbec7,	// (0x00020271) popup_tmo_note_window

0xf0fb,	// (0x000234a5) fshwr2_bg_pane

0x9dbe,	// (0x0001e168) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9dbe,	// (0x0001e168) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00024268) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00024268) fshwr2_func_candi_cell_pane_g

0xee9c,	// (0x00023246) bg_popup_window_pane_cp01

0x00d1,	// (0x0001447b) bg_popup_window_pane_g1_cp01

0x79b4,	// (0x0001bd5e) bg_popup_window_pane_cp22_ParamLimits

0x79b4,	// (0x0001bd5e) bg_popup_window_pane_cp22

0x79c2,	// (0x0001bd6c) listscroll_tmo_link_pane_ParamLimits

0x79c2,	// (0x0001bd6c) listscroll_tmo_link_pane

0x7a02,	// (0x0001bdac) popup_tmo_note_window_g1_ParamLimits

0x7a02,	// (0x0001bdac) popup_tmo_note_window_g1

0x7a0f,	// (0x0001bdb9) tmo_note_info_pane_ParamLimits

0x7a0f,	// (0x0001bdb9) tmo_note_info_pane

0xdb0e,	// (0x00021eb8) list_tmo_note_info_pane_g1_ParamLimits

0xdb0e,	// (0x00021eb8) list_tmo_note_info_pane_g1

0x7a40,	// (0x0001bdea) list_tmo_note_info_pane_g2_ParamLimits

0x7a40,	// (0x0001bdea) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0002426d) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0002426d) list_tmo_note_info_pane_g

0x7a5c,	// (0x0001be06) list_tmo_note_info_text_pane_ParamLimits

0x7a5c,	// (0x0001be06) list_tmo_note_info_text_pane

0x7ae1,	// (0x0001be8b) list_tmo_link_pane

0x7aee,	// (0x0001be98) scroll_pane_cp20

0x7afb,	// (0x0001bea5) list_single_tmo_link_pane_ParamLimits

0x7afb,	// (0x0001bea5) list_single_tmo_link_pane

0x7b0b,	// (0x0001beb5) list_single_tmo_link_pane_t1

0x7b19,	// (0x0001bec3) list_tmo_note_info_text_pane_t1_ParamLimits

0x7b19,	// (0x0001bec3) list_tmo_note_info_text_pane_t1

0xa76d,	// (0x0001eb17) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa76d,	// (0x0001eb17) aid_size_touch_scroll_bar_cp01

0xa69c,	// (0x0001ea46) aid_size_touch_slider_marker

0x8c79,	// (0x0001d023) popup_settings_window_ParamLimits

0x8c79,	// (0x0001d023) popup_settings_window

0x1585,	// (0x0001592f) popup_candi_list_indi_window

0x15d7,	// (0x00015981) aid_touch_navi_pane_ParamLimits

0xf083,	// (0x0002342d) rs_clock_indi_pane

0xf08c,	// (0x00023436) sctrl_sk_bottom_pane_ParamLimits

0xf09d,	// (0x00023447) sctrl_sk_top_pane_ParamLimits

0xf131,	// (0x000234db) popup_fep_tooltip_window

0xd885,	// (0x00021c2f) aid_size_cell_widget_grid_ParamLimits

0xd8a4,	// (0x00021c4e) cell_ai5_widget_pane_g1_ParamLimits

0xd8a4,	// (0x00021c4e) cell_ai5_widget_pane_g1

0xd907,	// (0x00021cb1) cell_ai5_widget_pane_g6_ParamLimits

0xd913,	// (0x00021cbd) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x000241eb) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x000241eb) cell_ai5_widget_pane_g

0xd9b1,	// (0x00021d5b) cell_ai5_widget_pane_t10_ParamLimits

0xd9b1,	// (0x00021d5b) cell_ai5_widget_pane_t10

0xd9cf,	// (0x00021d79) grid_ai5_widget_pane_ParamLimits

0xd9fb,	// (0x00021da5) cell_contacts_ai5_widget_pane_ParamLimits

0xd9fb,	// (0x00021da5) cell_contacts_ai5_widget_pane

0x793c,	// (0x0001bce6) popup_discreet_window_t3_ParamLimits

0x793c,	// (0x0001bce6) popup_discreet_window_t3

0x9d11,	// (0x0001e0bb) popup_fshwr2_char_preview_window_ParamLimits

0x9d11,	// (0x0001e0bb) popup_fshwr2_char_preview_window

0xdb25,	// (0x00021ecf) tmo_note_info_pane_t1

0xdb3a,	// (0x00021ee4) tmo_note_info_pane_t2

0xdb53,	// (0x00021efd) tmo_note_info_pane_t3

0x7abd,	// (0x0001be67) tmo_note_info_pane_t4

0x7acf,	// (0x0001be79) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00024272) tmo_note_info_pane_t

0x7ae1,	// (0x0001be8b) list_tmo_link_pane_ParamLimits

0x7aee,	// (0x0001be98) scroll_pane_cp20_ParamLimits

0xdd77,	// (0x00022121) bg_popup_fep_char_preview_window_cp01

0x7b32,	// (0x0001bedc) popup_fshwr2_char_preview_window_t1

0x7b40,	// (0x0001beea) popup_candi_list_indi_window_g1

0x7b49,	// (0x0001bef3) bg_cell_contacts_ai5_widget_pane

0x7b55,	// (0x0001beff) cell_contacts_ai5_widget_pane_g1

0x7b6a,	// (0x0001bf14) cell_contacts_ai5_widget_pane_g2

0x7b76,	// (0x0001bf20) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0002427d) cell_contacts_ai5_widget_pane_g

0x7b82,	// (0x0001bf2c) cell_contacts_ai5_widget_pane_t1

0xc8a9,	// (0x00020c53) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7bf9,	// (0x0001bfa3) settings_container_pane

0x1222,	// (0x000155cc) listscroll_set_pane_copy1

0x39e6,	// (0x00017d90) scroll_pane_cp121_copy1

0x7c05,	// (0x0001bfaf) set_content_pane_copy1

0x7c0d,	// (0x0001bfb7) aid_height_set_list_copy1_ParamLimits

0x7c0d,	// (0x0001bfb7) aid_height_set_list_copy1

0x2f88,	// (0x00017332) aid_size_parent_copy1_ParamLimits

0x2f88,	// (0x00017332) aid_size_parent_copy1

0x7c19,	// (0x0001bfc3) button_value_adjust_pane_cp6_copy1_ParamLimits

0x7c19,	// (0x0001bfc3) button_value_adjust_pane_cp6_copy1

0x1551,	// (0x000158fb) list_highlight_pane_cp2_copy1_ParamLimits

0x1551,	// (0x000158fb) list_highlight_pane_cp2_copy1

0x7c2d,	// (0x0001bfd7) list_set_pane_copy1_ParamLimits

0x7c2d,	// (0x0001bfd7) list_set_pane_copy1

0x7b94,	// (0x0001bf3e) main_pane_set_t1_copy1_ParamLimits

0x7b94,	// (0x0001bf3e) main_pane_set_t1_copy1

0x7bce,	// (0x0001bf78) main_pane_set_t2_copy1_ParamLimits

0x7bce,	// (0x0001bf78) main_pane_set_t2_copy1

0x7cee,	// (0x0001c098) main_pane_set_t3_copy1

0x7cfc,	// (0x0001c0a6) main_pane_set_t4_copy1

0x7bed,	// (0x0001bf97) set_content_pane_g1_copy1_ParamLimits

0x7bed,	// (0x0001bf97) set_content_pane_g1_copy1

0x7d0a,	// (0x0001c0b4) setting_code_pane_copy1

0x7d12,	// (0x0001c0bc) setting_slider_graphic_pane_copy1

0x7d12,	// (0x0001c0bc) setting_slider_pane_copy1

0x7d12,	// (0x0001c0bc) setting_text_pane_copy1

0x7d12,	// (0x0001c0bc) setting_volume_pane_copy1

0x7d0a,	// (0x0001c0b4) settings_code_pane_cp2_copy1

0x7d1a,	// (0x0001c0c4) settings_code_pane_cp_copy1_ParamLimits

0x7d1a,	// (0x0001c0c4) settings_code_pane_cp_copy1

0x00da,	// (0x00014484) volume_set_pane_copy1

0x7d2e,	// (0x0001c0d8) volume_set_pane_g10_copy1

0x7d3a,	// (0x0001c0e4) volume_set_pane_g1_copy1

0x7d44,	// (0x0001c0ee) volume_set_pane_g2_copy1

0x7d4e,	// (0x0001c0f8) volume_set_pane_g3_copy1

0x7d58,	// (0x0001c102) volume_set_pane_g4_copy1

0x7d62,	// (0x0001c10c) volume_set_pane_g5_copy1

0x7d6c,	// (0x0001c116) volume_set_pane_g6_copy1

0x7d76,	// (0x0001c120) volume_set_pane_g7_copy1

0x7d80,	// (0x0001c12a) volume_set_pane_g8_copy1

0x7d8a,	// (0x0001c134) volume_set_pane_g9_copy1

0xc1d7,	// (0x00020581) bg_set_opt_pane_cp_copy1_ParamLimits

0xc1d7,	// (0x00020581) bg_set_opt_pane_cp_copy1

0x00e6,	// (0x00014490) setting_slider_pane_t1_copy1_ParamLimits

0x00e6,	// (0x00014490) setting_slider_pane_t1_copy1

0x0104,	// (0x000144ae) setting_slider_pane_t2_copy1_ParamLimits

0x0104,	// (0x000144ae) setting_slider_pane_t2_copy1

0x011e,	// (0x000144c8) setting_slider_pane_t3_copy1_ParamLimits

0x011e,	// (0x000144c8) setting_slider_pane_t3_copy1

0x0136,	// (0x000144e0) slider_set_pane_copy1_ParamLimits

0x0136,	// (0x000144e0) slider_set_pane_copy1

0xc964,	// (0x00020d0e) set_opt_bg_pane_g1_copy2

0xc96c,	// (0x00020d16) set_opt_bg_pane_g2_copy2

0x7d94,	// (0x0001c13e) set_opt_bg_pane_g3_copy2

0xc97c,	// (0x00020d26) set_opt_bg_pane_g4_copy2

0xc984,	// (0x00020d2e) set_opt_bg_pane_g5_copy2

0xc98c,	// (0x00020d36) set_opt_bg_pane_g6_copy2

0x7d9e,	// (0x0001c148) set_opt_bg_pane_g7_copy2

0x7da8,	// (0x0001c152) set_opt_bg_pane_g8_copy2

0x7db2,	// (0x0001c15c) set_opt_bg_pane_g9_copy2

0x014c,	// (0x000144f6) aid_size_touch_slider_mark_copy1_ParamLimits

0x014c,	// (0x000144f6) aid_size_touch_slider_mark_copy1

0x7dbc,	// (0x0001c166) slider_set_pane_g1_copy1

0x0160,	// (0x0001450a) slider_set_pane_g2_copy1

0xeaff,	// (0x00022ea9) slider_set_pane_g3_copy1_ParamLimits

0xeaff,	// (0x00022ea9) slider_set_pane_g3_copy1

0xeb13,	// (0x00022ebd) slider_set_pane_g4_copy1_ParamLimits

0xeb13,	// (0x00022ebd) slider_set_pane_g4_copy1

0xeb2b,	// (0x00022ed5) slider_set_pane_g5_copy1_ParamLimits

0xeb2b,	// (0x00022ed5) slider_set_pane_g5_copy1

0xeaff,	// (0x00022ea9) slider_set_pane_g6_copy1_ParamLimits

0xeaff,	// (0x00022ea9) slider_set_pane_g6_copy1

0x0168,	// (0x00014512) slider_set_pane_g7_copy1_ParamLimits

0x0168,	// (0x00014512) slider_set_pane_g7_copy1

0xc17b,	// (0x00020525) bg_set_opt_pane_cp2_copy1

0x7dc5,	// (0x0001c16f) setting_slider_graphic_pane_g1_copy1

0x7dce,	// (0x0001c178) setting_slider_graphic_pane_t1_copy1

0x7dde,	// (0x0001c188) setting_slider_graphic_pane_t2_copy1

0x7dee,	// (0x0001c198) slider_set_pane_cp_copy1

0x7dfe,	// (0x0001c1a8) input_focus_pane_cp1_copy1

0x7e07,	// (0x0001c1b1) list_set_text_pane_copy1

0x7e0f,	// (0x0001c1b9) setting_text_pane_g1_copy1

0xc1fc,	// (0x000205a6) set_text_pane_t1_copy1

0x7dfe,	// (0x0001c1a8) input_focus_pane_cp2_copy1

0x7e0f,	// (0x0001c1b9) setting_code_pane_g1_copy1

0x7e18,	// (0x0001c1c2) setting_code_pane_t1_copy1

0x0f0a,	// (0x000152b4) list_set_graphic_pane_copy1

0xc17b,	// (0x00020525) bg_set_opt_pane_cp4_copy1

0x0f1d,	// (0x000152c7) list_set_graphic_pane_g1_copy1_ParamLimits

0x0f1d,	// (0x000152c7) list_set_graphic_pane_g1_copy1

0x7e26,	// (0x0001c1d0) list_set_graphic_pane_g2_copy1

0x0f35,	// (0x000152df) list_set_graphic_pane_t1_copy1_ParamLimits

0x0f35,	// (0x000152df) list_set_graphic_pane_t1_copy1

0x45af,	// (0x00018959) rs_clock_indi_pane_g1

0x7e2e,	// (0x0001c1d8) rs_clock_indi_pane_t1

0x7e3c,	// (0x0001c1e6) rs_indi_pane

0x7e44,	// (0x0001c1ee) rs_indi_pane_g1

0x7e4d,	// (0x0001c1f7) rs_indi_pane_g2

0x7e56,	// (0x0001c200) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00024284) rs_indi_pane_g

0x1222,	// (0x000155cc) bg_popup_preview_window_pane_cp03

0x7e5f,	// (0x0001c209) popup_fep_tooltip_window_t1

0x546a,	// (0x00019814) popup_note2_window_g2_ParamLimits

0x546a,	// (0x00019814) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0002401d) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0002401d) popup_note2_window_g

0x5a82,	// (0x00019e2c) bg_popup_sub_pane_cp11_ParamLimits

0x5a8f,	// (0x00019e39) cell_ai3_links_pane_g1_ParamLimits

0x5aa6,	// (0x00019e50) cell_ai3_links_pane_t1

0xc1fc,	// (0x000205a6) set_text_pane_t1_copy1_ParamLimits

0x113b,	// (0x000154e5) cell_graphic_popup_pane_cp2_ParamLimits

0x113b,	// (0x000154e5) cell_graphic_popup_pane_cp2

0x7e6d,	// (0x0001c217) cell_graphic_popup_pane_g1_cp2

0xc584,	// (0x0002092e) cell_graphic_popup_pane_g2_cp2

0x7e75,	// (0x0001c21f) cell_graphic_popup_pane_g3_cp2

0x7e7d,	// (0x0001c227) cell_graphic_popup_pane_t2_cp2

0xc595,	// (0x0002093f) grid_highlight_pane_cp3_cp2

0xe11d,	// (0x000224c7) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc8a9,	// (0x00020c53) main_tmo_pane_ParamLimits

0xbebb,	// (0x00020265) popup_tmo_big_image_note_window

0xd893,	// (0x00021c3d) cell_ai5_widget_list_pane

0xd89b,	// (0x00021c45) cell_ai5_widget_lrg_icon_pane

0xdb25,	// (0x00021ecf) tmo_note_info_pane_t1_ParamLimits

0xdb3a,	// (0x00021ee4) tmo_note_info_pane_t2_ParamLimits

0xdb53,	// (0x00021efd) tmo_note_info_pane_t3_ParamLimits

0x7abd,	// (0x0001be67) tmo_note_info_pane_t4_ParamLimits

0x7acf,	// (0x0001be79) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00024272) tmo_note_info_pane_t_ParamLimits

0x7bf9,	// (0x0001bfa3) settings_container_pane_ParamLimits

0x7df6,	// (0x0001c1a0) indicator_popup_pane_cp5

0x7df6,	// (0x0001c1a0) indicator_popup_pane_cp6

0x0f0a,	// (0x000152b4) list_set_graphic_pane_copy1_ParamLimits

0xc167,	// (0x00020511) bg_popup_window_pane_cp23

0x7e8b,	// (0x0001c235) popup_tmo_big_image_note_window_g1

0x7e97,	// (0x0001c241) popup_tmo_big_image_note_window_t1

0x7ea7,	// (0x0001c251) popup_tmo_big_image_note_window_t2

0x7eb7,	// (0x0001c261) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0002428b) popup_tmo_big_image_note_window_t

0x45af,	// (0x00018959) cell_ai5_widget_lrg_icon_pane_g1

0xdb68,	// (0x00021f12) cell_ai5_widget_lrg_icon_pane_t1

0xdb76,	// (0x00021f20) cell_ai5_widget_list_row_pane_ParamLimits

0xdb76,	// (0x00021f20) cell_ai5_widget_list_row_pane

0xdb8e,	// (0x00021f38) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdb8e,	// (0x00021f38) cell_ai5_widget_list_row_pane_g1

0xdb9b,	// (0x00021f45) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdb9b,	// (0x00021f45) cell_ai5_widget_list_row_pane_t1

0xdbc6,	// (0x00021f70) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdbc6,	// (0x00021f70) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00024292) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00024292) cell_ai5_widget_list_row_pane_t

0xdd77,	// (0x00022121) main_fep_vtchi_ss_pane

0x7f6d,	// (0x0001c317) popup_fep_char_pre_window

0x7f75,	// (0x0001c31f) popup_fep_ituss_window

0xdbfd,	// (0x00021fa7) popup_fep_vkbss_window

0xdc0c,	// (0x00021fb6) grid_vkbss_keypad_pane_ParamLimits

0xdc0c,	// (0x00021fb6) grid_vkbss_keypad_pane

0x7fcf,	// (0x0001c379) ituss_keypad_pane

0x018a,	// (0x00014534) aid_vkbss_key_offset_ParamLimits

0x018a,	// (0x00014534) aid_vkbss_key_offset

0x9e12,	// (0x0001e1bc) cell_vkbss_key_pane_ParamLimits

0x9e12,	// (0x0001e1bc) cell_vkbss_key_pane

0x7fde,	// (0x0001c388) bg_cell_vkbss_key_g1_ParamLimits

0x7fde,	// (0x0001c388) bg_cell_vkbss_key_g1

0xdc1c,	// (0x00021fc6) cell_vkbss_key_3p_pane_ParamLimits

0xdc1c,	// (0x00021fc6) cell_vkbss_key_3p_pane

0xdc36,	// (0x00021fe0) cell_vkbss_key_g1_ParamLimits

0xdc36,	// (0x00021fe0) cell_vkbss_key_g1

0xdc50,	// (0x00021ffa) cell_vkbss_key_t1_ParamLimits

0xdc50,	// (0x00021ffa) cell_vkbss_key_t1

0x01ac,	// (0x00014556) cell_ituss_key_pane_ParamLimits

0x01ac,	// (0x00014556) cell_ituss_key_pane

0x803d,	// (0x0001c3e7) bg_cell_ituss_key_g1_ParamLimits

0x803d,	// (0x0001c3e7) bg_cell_ituss_key_g1

0x8049,	// (0x0001c3f3) cell_ituss_key_pane_g1_ParamLimits

0x8049,	// (0x0001c3f3) cell_ituss_key_pane_g1

0x01bd,	// (0x00014567) cell_ituss_key_pane_g2_ParamLimits

0x01bd,	// (0x00014567) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00024299) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00024299) cell_ituss_key_pane_g

0x01e9,	// (0x00014593) cell_ituss_key_t1_ParamLimits

0x01e9,	// (0x00014593) cell_ituss_key_t1

0x0223,	// (0x000145cd) cell_ituss_key_t2_ParamLimits

0x0223,	// (0x000145cd) cell_ituss_key_t2

0x0254,	// (0x000145fe) cell_ituss_key_t3_ParamLimits

0x0254,	// (0x000145fe) cell_ituss_key_t3

0x0223,	// (0x000145cd) cell_ituss_key_t4_ParamLimits

0x0223,	// (0x000145cd) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x000242a0) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x000242a0) cell_ituss_key_t

0x806f,	// (0x0001c419) cell_vkbss_key_3p_pane_g1

0x8077,	// (0x0001c421) cell_vkbss_key_3p_pane_g2

0x807f,	// (0x0001c429) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x000242ab) cell_vkbss_key_3p_pane_g

0x1222,	// (0x000155cc) bg_popup_fep_char_preview_window_cp02

0x8087,	// (0x0001c431) popup_fep_char_pre_window_t1

0xd872,	// (0x00021c1c) main_ai5_sk_pane

0x7b49,	// (0x0001bef3) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7b55,	// (0x0001beff) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7b6a,	// (0x0001bf14) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7b76,	// (0x0001bf20) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0002427d) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7b82,	// (0x0001bf2c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc8a9,	// (0x00020c53) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdc7b,	// (0x00022025) main_ai5_sk_pane_g1

0x202c,	// (0x000163d6) popup_query_code_window_g1

0xdbee,	// (0x00021f98) popup_fep_vkb_icf_pane

0x7fa9,	// (0x0001c353) popup_fep_vtchi_icf_pane

0x809e,	// (0x0001c448) bg_icf_pane

0x80aa,	// (0x0001c454) list_vkb_icf_pane

0x80b9,	// (0x0001c463) bg_icf_pane_cp01

0x80cc,	// (0x0001c476) vtchi_icf_list_pane

0xdc84,	// (0x0002202e) list_vkb_icf_pane_t1_ParamLimits

0xdc84,	// (0x0002202e) list_vkb_icf_pane_t1

0x80fa,	// (0x0001c4a4) vtchi_icf_list_pane_t1_ParamLimits

0x80fa,	// (0x0001c4a4) vtchi_icf_list_pane_t1

0x7f75,	// (0x0001c31f) popup_fep_ituss_window_ParamLimits

0x7fa9,	// (0x0001c353) popup_fep_vtchi_icf_pane_ParamLimits

0x7fcf,	// (0x0001c379) ituss_keypad_pane_ParamLimits

0x017e,	// (0x00014528) ituss_sks_pane

0x809e,	// (0x0001c448) bg_icf_pane_ParamLimits

0x7f4d,	// (0x0001c2f7) icf_edit_indi_pane_ParamLimits

0x7f4d,	// (0x0001c2f7) icf_edit_indi_pane

0x80aa,	// (0x0001c454) list_vkb_icf_pane_ParamLimits

0x80b9,	// (0x0001c463) bg_icf_pane_cp01_ParamLimits

0x7f60,	// (0x0001c30a) icf_edit_indi_pane_cp01_ParamLimits

0x7f60,	// (0x0001c30a) icf_edit_indi_pane_cp01

0x80d4,	// (0x0001c47e) vtchi_query_pane

0x6e05,	// (0x0001b1af) icf_edit_indi_pane_g1_ParamLimits

0x6e05,	// (0x0001b1af) icf_edit_indi_pane_g1

0xdc9a,	// (0x00022044) icf_edit_indi_pane_g2_ParamLimits

0xdc9a,	// (0x00022044) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x000242c3) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x000242c3) icf_edit_indi_pane_g

0xdcac,	// (0x00022056) icf_edit_indi_pane_t1

0x8112,	// (0x0001c4bc) bg_input_focus_pane_cp042

0xc768,	// (0x00020b12) vtchi_button_pane

0x811b,	// (0x0001c4c5) vtchi_query_pane_t1

0x8129,	// (0x0001c4d3) vtchi_query_pane_t2

0x8137,	// (0x0001c4e1) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000242b2) vtchi_query_pane_t

0xdd77,	// (0x00022121) bg_button_pane_cp13

0x8145,	// (0x0001c4ef) vtchi_button_pane_g1

0x0297,	// (0x00014641) ituss_sks_pane_g1

0x02a2,	// (0x0001464c) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000242b9) ituss_sks_pane_g

0x814d,	// (0x0001c4f7) ituss_sks_pane_t1

0x815b,	// (0x0001c505) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000242be) ituss_sks_pane_t

0x4039,	// (0x000183e3) indicator_nsta_pane_cp_g1

0x4041,	// (0x000183eb) indicator_nsta_pane_cp_g2

0x4049,	// (0x000183f3) indicator_nsta_pane_cp_g3

0x4039,	// (0x000183e3) indicator_nsta_pane_cp_g4

0x4041,	// (0x000183eb) indicator_nsta_pane_cp_g5

0x4049,	// (0x000183f3) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00023e5b) indicator_nsta_pane_cp_g

0xd399,	// (0x00021743) cell_graphic2_pane_t2_ParamLimits

0xd399,	// (0x00021743) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00024174) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00024174) cell_graphic2_pane_t

0xd3d1,	// (0x0002177b) cell_graphic2_control_pane_t1

0xa9b2,	// (0x0001ed5c) signal_pane_g3_ParamLimits

0xa9b2,	// (0x0001ed5c) signal_pane_g3

0xa9c6,	// (0x0001ed70) signal_pane_g4_ParamLimits

0xa9c6,	// (0x0001ed70) signal_pane_g4

0xdbd8,	// (0x00021f82) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xdbd8,	// (0x00021f82) cell_ai5_widget_list_row_pane_t3

0x805d,	// (0x0001c407) cell_ituss_key_pane_t1_ParamLimits

0x805d,	// (0x0001c407) cell_ituss_key_pane_t1

0x1c6c,	// (0x00016016) form_field_data_wide_pane_vc_t2_ParamLimits

0x1c6c,	// (0x00016016) form_field_data_wide_pane_vc_t2

0x1c80,	// (0x0001602a) form_field_data_wide_pane_vc_t3_ParamLimits

0x1c80,	// (0x0001602a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00023ba9) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00023ba9) form_field_data_wide_pane_vc_t

0x3cf4,	// (0x0001809e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3cf4,	// (0x0001809e) form_field_slider_wide_pane_vc_t3

0x3dca,	// (0x00018174) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3dca,	// (0x00018174) form_field_popup_wide_pane_vc_t2

0x3de1,	// (0x0001818b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3de1,	// (0x0001818b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00023e4a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00023e4a) form_field_popup_wide_pane_vc_t

0x9c77,	// (0x0001e021) aid_fshwr2_btn_pane_ParamLimits

0x9c8b,	// (0x0001e035) aid_fshwr2_syb_pane_ParamLimits

0x9c9f,	// (0x0001e049) aid_fshwr2_txt_pane_ParamLimits

0xf0fb,	// (0x000234a5) fshwr2_bg_pane_ParamLimits

0x9caf,	// (0x0001e059) fshwr2_func_candi_pane_ParamLimits

0x9cd1,	// (0x0001e07b) fshwr2_hwr_syb_pane_ParamLimits

0x9cf5,	// (0x0001e09f) fshwr2_icf_pane_ParamLimits

0x3c68,	// (0x00018012) list_double_graphic_pane_vc_g4_ParamLimits

0x3c68,	// (0x00018012) list_double_graphic_pane_vc_g4

0x01dd,	// (0x00014587) cell_ituss_key_pane_g3_ParamLimits

0x01dd,	// (0x00014587) cell_ituss_key_pane_g3

0x0285,	// (0x0001462f) cell_ituss_key_t5_ParamLimits

0x0285,	// (0x0001462f) cell_ituss_key_t5

0xdbfd,	// (0x00021fa7) popup_fep_vkbss_window_ParamLimits

0xd87c,	// (0x00021c26) aid_cell_ai5_quarter

0xdcac,	// (0x00022056) icf_edit_indi_pane_t1_ParamLimits

0xc3cc,	// (0x00020776) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xc3cc,	// (0x00020776) aid_tch_indicator_popup_pane_cp2

0xc3df,	// (0x00020789) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xc3df,	// (0x00020789) aid_tch_query_popup_data_pane_cp2

0x1fd4,	// (0x0001637e) aid_tch_query_popup_pane_ParamLimits

0x1fd4,	// (0x0001637e) aid_tch_query_popup_pane

0x1fd4,	// (0x0001637e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1fd4,	// (0x0001637e) aid_tch_query_popup_data_pane_cp1

0x79a8,	// (0x0001bd52) cell_fshwr2_syb_bg_pane_ParamLimits

0x9de8,	// (0x0001e192) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x9dfc,	// (0x0001e1a6) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdbee,	// (0x00021f98) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
