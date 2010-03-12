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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

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
0xb3d1,	// (0x0000b3d1) Screen

0xb3dd,	// (0x0000b3dd) application_window_ParamLimits

0xb3dd,	// (0x0000b3dd) application_window

0x002e,	// (0x0000002e) screen_g1

0xb415,	// (0x0000b415) area_bottom_pane_ParamLimits

0xb415,	// (0x0000b415) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcb2f,	// (0x0000cb2f) battery_pane_ParamLimits

0xcb2f,	// (0x0000cb2f) battery_pane

0x40ba,	// (0x000040ba) bg_status_flat_pane_g8

0x40c2,	// (0x000040c2) bg_status_flat_pane_g9

0x322b,	// (0x0000322b) context_pane_ParamLimits

0x322b,	// (0x0000322b) context_pane

0xcc9a,	// (0x0000cc9a) navi_pane_ParamLimits

0xcc9a,	// (0x0000cc9a) navi_pane

0xcd12,	// (0x0000cd12) signal_pane_ParamLimits

0xcd12,	// (0x0000cd12) signal_pane

0x0008,

0xad47,	// (0x0000ad47) bg_status_flat_pane_g

0xcda2,	// (0x0000cda2) status_pane_g1_ParamLimits

0xcda2,	// (0x0000cda2) status_pane_g1

0xcdb8,	// (0x0000cdb8) status_pane_g2_ParamLimits

0xcdb8,	// (0x0000cdb8) status_pane_g2

0x3444,	// (0x00003444) status_pane_g3_ParamLimits

0x3444,	// (0x00003444) status_pane_g3

0x0004,

0xf497,	// (0x0000f497) status_pane_g_ParamLimits

0xf497,	// (0x0000f497) status_pane_g

0xcdc4,	// (0x0000cdc4) title_pane_ParamLimits

0xcdc4,	// (0x0000cdc4) title_pane

0xce27,	// (0x0000ce27) uni_indicator_pane_ParamLimits

0xce27,	// (0x0000ce27) uni_indicator_pane

0x2ad2,	// (0x00002ad2) bg_list_pane_ParamLimits

0x2ad2,	// (0x00002ad2) bg_list_pane

0xc3e0,	// (0x0000c3e0) find_pane

0xc3e8,	// (0x0000c3e8) listscroll_app_pane_ParamLimits

0xc3e8,	// (0x0000c3e8) listscroll_app_pane

0x2b06,	// (0x00002b06) listscroll_form_pane

0xc3f4,	// (0x0000c3f4) listscroll_gen_pane_ParamLimits

0xc3f4,	// (0x0000c3f4) listscroll_gen_pane

0x2b06,	// (0x00002b06) listscroll_set_pane

0x4ea5,	// (0x00004ea5) main_idle_act_pane

0x25c7,	// (0x000025c7) main_idle_trad_pane

0x25c7,	// (0x000025c7) main_list_empty_pane

0x2b34,	// (0x00002b34) main_midp_pane

0x2b40,	// (0x00002b40) main_pane_g1_ParamLimits

0x2b40,	// (0x00002b40) main_pane_g1

0xc408,	// (0x0000c408) popup_ai_message_window_ParamLimits

0xc408,	// (0x0000c408) popup_ai_message_window

0xc499,	// (0x0000c499) popup_fep_china_uni_window_ParamLimits

0xc499,	// (0x0000c499) popup_fep_china_uni_window

0x2c58,	// (0x00002c58) popup_fep_japan_candidate_window_ParamLimits

0x2c58,	// (0x00002c58) popup_fep_japan_candidate_window

0x2c78,	// (0x00002c78) popup_fep_japan_predictive_window_ParamLimits

0x2c78,	// (0x00002c78) popup_fep_japan_predictive_window

0xc4f5,	// (0x0000c4f5) popup_find_window

0xc512,	// (0x0000c512) popup_grid_graphic_window_ParamLimits

0xc512,	// (0x0000c512) popup_grid_graphic_window

0x2cdd,	// (0x00002cdd) popup_large_graphic_colour_window

0xc5aa,	// (0x0000c5aa) popup_menu_window_ParamLimits

0xc5aa,	// (0x0000c5aa) popup_menu_window

0xc77c,	// (0x0000c77c) popup_note_image_window

0xc742,	// (0x0000c742) popup_note_wait_window_ParamLimits

0xc742,	// (0x0000c742) popup_note_wait_window

0xc794,	// (0x0000c794) popup_note_window_ParamLimits

0xc794,	// (0x0000c794) popup_note_window

0xc83a,	// (0x0000c83a) popup_query_code_window_ParamLimits

0xc83a,	// (0x0000c83a) popup_query_code_window

0x2f25,	// (0x00002f25) popup_query_data_code_window_ParamLimits

0x2f25,	// (0x00002f25) popup_query_data_code_window

0xc874,	// (0x0000c874) popup_query_data_window_ParamLimits

0xc874,	// (0x0000c874) popup_query_data_window

0xc8f6,	// (0x0000c8f6) popup_query_sat_info_window_ParamLimits

0xc8f6,	// (0x0000c8f6) popup_query_sat_info_window

0xc98d,	// (0x0000c98d) popup_snote_single_graphic_window_ParamLimits

0xc98d,	// (0x0000c98d) popup_snote_single_graphic_window

0xc98d,	// (0x0000c98d) popup_snote_single_text_window_ParamLimits

0xc98d,	// (0x0000c98d) popup_snote_single_text_window

0x2fac,	// (0x00002fac) popup_sub_window_general

0x30dc,	// (0x000030dc) popup_window_general_ParamLimits

0x30dc,	// (0x000030dc) popup_window_general

0x30f1,	// (0x000030f1) power_save_pane

0xc24c,	// (0x0000c24c) control_pane_g1_ParamLimits

0xc24c,	// (0x0000c24c) control_pane_g1

0xc275,	// (0x0000c275) control_pane_g2_ParamLimits

0xc275,	// (0x0000c275) control_pane_g2

0x2977,	// (0x00002977) control_pane_g3_ParamLimits

0x2977,	// (0x00002977) control_pane_g3

0x0007,

0xf47f,	// (0x0000f47f) control_pane_g_ParamLimits

0xf47f,	// (0x0000f47f) control_pane_g

0xc2d9,	// (0x0000c2d9) control_pane_t1_ParamLimits

0xc2d9,	// (0x0000c2d9) control_pane_t1

0xc337,	// (0x0000c337) control_pane_t2_ParamLimits

0xc337,	// (0x0000c337) control_pane_t2

0x0002,

0xf490,	// (0x0000f490) control_pane_t_ParamLimits

0xf490,	// (0x0000f490) control_pane_t

0x284e,	// (0x0000284e) navi_navi_volume_pane_cp1

0x2857,	// (0x00002857) status_small_icon_pane

0x285f,	// (0x0000285f) status_small_pane_g1_ParamLimits

0x285f,	// (0x0000285f) status_small_pane_g1

0x2893,	// (0x00002893) status_small_pane_g2_ParamLimits

0x2893,	// (0x00002893) status_small_pane_g2

0x289f,	// (0x0000289f) status_small_pane_g3_ParamLimits

0x289f,	// (0x0000289f) status_small_pane_g3

0x28ab,	// (0x000028ab) status_small_pane_g4_ParamLimits

0x28ab,	// (0x000028ab) status_small_pane_g4

0x28b7,	// (0x000028b7) status_small_pane_g5_ParamLimits

0x28b7,	// (0x000028b7) status_small_pane_g5

0x28c6,	// (0x000028c6) status_small_pane_g6_ParamLimits

0x28c6,	// (0x000028c6) status_small_pane_g6

0x0007,

0xac4c,	// (0x0000ac4c) status_small_pane_g_ParamLimits

0xac4c,	// (0x0000ac4c) status_small_pane_g

0x28f6,	// (0x000028f6) status_small_pane_t1

0x2919,	// (0x00002919) status_small_wait_pane_ParamLimits

0x2919,	// (0x00002919) status_small_wait_pane

0xbfbc,	// (0x0000bfbc) aid_levels_signal_ParamLimits

0xbfbc,	// (0x0000bfbc) aid_levels_signal

0xbfd4,	// (0x0000bfd4) signal_pane_g1_ParamLimits

0xbfd4,	// (0x0000bfd4) signal_pane_g1

0xbfef,	// (0x0000bfef) signal_pane_g2_ParamLimits

0xbfef,	// (0x0000bfef) signal_pane_g2

0x0003,

0xf45a,	// (0x0000f45a) signal_pane_g_ParamLimits

0xf45a,	// (0x0000f45a) signal_pane_g

0x1e79,	// (0x00001e79) context_pane_g1

0xb58e,	// (0x0000b58e) title_pane_g1

0xb5c5,	// (0x0000b5c5) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf38c,	// (0x0000f38c) title_pane_t

0xce4f,	// (0x0000ce4f) aid_levels_battery_ParamLimits

0xce4f,	// (0x0000ce4f) aid_levels_battery

0xce6b,	// (0x0000ce6b) battery_pane_g1_ParamLimits

0xce6b,	// (0x0000ce6b) battery_pane_g1

0xce88,	// (0x0000ce88) battery_pane_g2_ParamLimits

0xce88,	// (0x0000ce88) battery_pane_g2

0x0001,

0xf4a2,	// (0x0000f4a2) battery_pane_g_ParamLimits

0xf4a2,	// (0x0000f4a2) battery_pane_g

0x4b54,	// (0x00004b54) uni_indicator_pane_g1

0x4b69,	// (0x00004b69) uni_indicator_pane_g2

0x4b7f,	// (0x00004b7f) uni_indicator_pane_g3

0x0005,

0xadef,	// (0x0000adef) uni_indicator_pane_g

0x2439,	// (0x00002439) navi_icon_pane_ParamLimits

0x2439,	// (0x00002439) navi_icon_pane

0x2382,	// (0x00002382) navi_midp_pane

0x2455,	// (0x00002455) navi_navi_pane

0x245f,	// (0x0000245f) navi_text_pane_ParamLimits

0x245f,	// (0x0000245f) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xadea,	// (0x0000adea) status_small_wait_pane_g

0x4879,	// (0x00004879) navi_navi_icon_text_pane

0x4881,	// (0x00004881) navi_navi_pane_g1_ParamLimits

0x4881,	// (0x00004881) navi_navi_pane_g1

0x4893,	// (0x00004893) navi_navi_pane_g2_ParamLimits

0x4893,	// (0x00004893) navi_navi_pane_g2

0x0001,

0xadb8,	// (0x0000adb8) navi_navi_pane_g_ParamLimits

0xadb8,	// (0x0000adb8) navi_navi_pane_g

0x48a5,	// (0x000048a5) navi_navi_tabs_pane

0x48ae,	// (0x000048ae) navi_navi_text_pane

0x4879,	// (0x00004879) navi_navi_volume_pane

0x4855,	// (0x00004855) navi_text_pane_t1

0x4849,	// (0x00004849) navi_icon_pane_g1

0x479c,	// (0x0000479c) navi_navi_text_pane_t1

0xd249,	// (0x0000d249) navi_navi_volume_pane_g1

0xd251,	// (0x0000d251) volume_small_pane

0xd1a5,	// (0x0000d1a5) navi_navi_icon_text_pane_g1

0xd1ad,	// (0x0000d1ad) navi_navi_icon_text_pane_t1

0x2455,	// (0x00002455) navi_tabs_2_long_pane

0x2455,	// (0x00002455) navi_tabs_2_pane

0x2455,	// (0x00002455) navi_tabs_3_long_pane

0x2455,	// (0x00002455) navi_tabs_3_pane

0x2455,	// (0x00002455) navi_tabs_4_pane

0xd163,	// (0x0000d163) tabs_2_active_pane_ParamLimits

0xd163,	// (0x0000d163) tabs_2_active_pane

0xd173,	// (0x0000d173) tabs_2_passive_pane_ParamLimits

0xd173,	// (0x0000d173) tabs_2_passive_pane

0xd131,	// (0x0000d131) tabs_3_active_pane_ParamLimits

0xd131,	// (0x0000d131) tabs_3_active_pane

0xd141,	// (0x0000d141) tabs_3_passive_pane_ParamLimits

0xd141,	// (0x0000d141) tabs_3_passive_pane

0xd152,	// (0x0000d152) tabs_3_passive_pane_cp_ParamLimits

0xd152,	// (0x0000d152) tabs_3_passive_pane_cp

0xd0ed,	// (0x0000d0ed) tabs_4_active_pane_ParamLimits

0xd0ed,	// (0x0000d0ed) tabs_4_active_pane

0xd0fe,	// (0x0000d0fe) tabs_4_passive_pane_ParamLimits

0xd0fe,	// (0x0000d0fe) tabs_4_passive_pane

0xd10f,	// (0x0000d10f) tabs_4_passive_pane_cp_ParamLimits

0xd10f,	// (0x0000d10f) tabs_4_passive_pane_cp

0xd120,	// (0x0000d120) tabs_4_passive_pane_cp2_ParamLimits

0xd120,	// (0x0000d120) tabs_4_passive_pane_cp2

0xd0cd,	// (0x0000d0cd) tabs_2_long_active_pane_ParamLimits

0xd0cd,	// (0x0000d0cd) tabs_2_long_active_pane

0xd0dd,	// (0x0000d0dd) tabs_2_long_passive_pane_ParamLimits

0xd0dd,	// (0x0000d0dd) tabs_2_long_passive_pane

0xd09a,	// (0x0000d09a) tabs_3_long_active_pane_ParamLimits

0xd09a,	// (0x0000d09a) tabs_3_long_active_pane

0xd0ab,	// (0x0000d0ab) tabs_3_long_passive_pane_ParamLimits

0xd0ab,	// (0x0000d0ab) tabs_3_long_passive_pane

0xd0bc,	// (0x0000d0bc) tabs_3_long_passive_pane_cp_ParamLimits

0xd0bc,	// (0x0000d0bc) tabs_3_long_passive_pane_cp

0x451d,	// (0x0000451d) volume_small_pane_g1

0xd049,	// (0x0000d049) volume_small_pane_g2

0xd052,	// (0x0000d052) volume_small_pane_g3

0xd05b,	// (0x0000d05b) volume_small_pane_g4

0xd064,	// (0x0000d064) volume_small_pane_g5

0xd06d,	// (0x0000d06d) volume_small_pane_g6

0xd076,	// (0x0000d076) volume_small_pane_g7

0xd07f,	// (0x0000d07f) volume_small_pane_g8

0xd088,	// (0x0000d088) volume_small_pane_g9

0xd091,	// (0x0000d091) volume_small_pane_g10

0x0009,

0xf4c4,	// (0x0000f4c4) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb651,	// (0x0000b651) tabs_3_active_pane_g1

0xb659,	// (0x0000b659) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb651,	// (0x0000b651) tabs_3_passive_pane_g1

0xb659,	// (0x0000b659) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb66b,	// (0x0000b66b) tabs_4_active_pane_g1

0xb673,	// (0x0000b673) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb66b,	// (0x0000b66b) tabs_4_1_passive_pane_g1

0xb673,	// (0x0000b673) tabs_4_1_passive_pane_t1

0x2b34,	// (0x00002b34) list_highlight_pane_cp2

0xd358,	// (0x0000d358) list_set_pane_ParamLimits

0xd358,	// (0x0000d358) list_set_pane

0xd3f2,	// (0x0000d3f2) main_pane_set_t1_ParamLimits

0xd3f2,	// (0x0000d3f2) main_pane_set_t1

0xd412,	// (0x0000d412) main_pane_set_t2_ParamLimits

0xd412,	// (0x0000d412) main_pane_set_t2

0xd426,	// (0x0000d426) main_pane_set_t3_ParamLimits

0xd426,	// (0x0000d426) main_pane_set_t3

0xd438,	// (0x0000d438) main_pane_set_t4_ParamLimits

0xd438,	// (0x0000d438) main_pane_set_t4

0x0003,

0xf4f3,	// (0x0000f4f3) main_pane_set_t_ParamLimits

0xf4f3,	// (0x0000f4f3) main_pane_set_t

0xd44a,	// (0x0000d44a) setting_code_pane

0xd454,	// (0x0000d454) setting_slider_graphic_pane

0xd454,	// (0x0000d454) setting_slider_pane

0xd454,	// (0x0000d454) setting_text_pane

0xd454,	// (0x0000d454) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xaa38,	// (0x0000aa38) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xaa3f,	// (0x0000aa3f) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e8c,	// (0x00004e8c) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4e66,	// (0x00004e66) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e70,	// (0x00004e70) set_opt_bg_pane_g7

0x4e78,	// (0x00004e78) set_opt_bg_pane_g8

0x4e82,	// (0x00004e82) set_opt_bg_pane_g9

0x0008,

0xae41,	// (0x0000ae41) set_opt_bg_pane_g

0x4df5,	// (0x00004df5) slider_set_pane_g1

0x4e02,	// (0x00004e02) slider_set_pane_g2

0x0006,

0xae32,	// (0x0000ae32) slider_set_pane_g

0x4c75,	// (0x00004c75) volume_set_pane_g1

0x4c7d,	// (0x00004c7d) volume_set_pane_g2

0x4c85,	// (0x00004c85) volume_set_pane_g3

0x4c8d,	// (0x00004c8d) volume_set_pane_g4

0x4c95,	// (0x00004c95) volume_set_pane_g5

0x4c9d,	// (0x00004c9d) volume_set_pane_g6

0x4ca5,	// (0x00004ca5) volume_set_pane_g7

0x4cad,	// (0x00004cad) volume_set_pane_g8

0x4cb5,	// (0x00004cb5) volume_set_pane_g9

0x4cbd,	// (0x00004cbd) volume_set_pane_g10

0x0009,

0xae0a,	// (0x0000ae0a) volume_set_pane_g

0xb685,	// (0x0000b685) indicator_pane_ParamLimits

0xb685,	// (0x0000b685) indicator_pane

0xb6ad,	// (0x0000b6ad) main_idle_pane_g2_ParamLimits

0xb6ad,	// (0x0000b6ad) main_idle_pane_g2

0xb6e5,	// (0x0000b6e5) main_pane_idle_g1_ParamLimits

0xb6e5,	// (0x0000b6e5) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb70c,	// (0x0000b70c) soft_indicator_pane_ParamLimits

0xb70c,	// (0x0000b70c) soft_indicator_pane

0xb726,	// (0x0000b726) wallpaper_pane_ParamLimits

0xb726,	// (0x0000b726) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb738,	// (0x0000b738) indicator_pane_g1_ParamLimits

0xb738,	// (0x0000b738) indicator_pane_g1

0x53d8,	// (0x000053d8) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb74e,	// (0x0000b74e) aid_ps_clock_pane

0x06cd,	// (0x000006cd) aid_ps_indicator_pane

0x06d9,	// (0x000006d9) indicator_ps_pane_ParamLimits

0x06d9,	// (0x000006d9) indicator_ps_pane

0x06e8,	// (0x000006e8) power_save_pane_g1_ParamLimits

0x06e8,	// (0x000006e8) power_save_pane_g1

0x06f4,	// (0x000006f4) power_save_pane_g2_ParamLimits

0x06f4,	// (0x000006f4) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06ae,	// (0x000006ae) aid_ps_area_pane_ParamLimits

0x0001,

0xaa44,	// (0x0000aa44) power_save_pane_g_ParamLimits

0xaa44,	// (0x0000aa44) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb74e,	// (0x0000b74e) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xaa49,	// (0x0000aa49) power_save_pane_t_ParamLimits

0xaa49,	// (0x0000aa49) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb75c,	// (0x0000b75c) ai_gene_pane_ParamLimits

0xb75c,	// (0x0000b75c) ai_gene_pane

0xb773,	// (0x0000b773) ai_links_pane_ParamLimits

0xb773,	// (0x0000b773) ai_links_pane

0xb78b,	// (0x0000b78b) indicator_pane_cp1_ParamLimits

0xb78b,	// (0x0000b78b) indicator_pane_cp1

0xb79a,	// (0x0000b79a) main_pane_idle_g1_cp_ParamLimits

0xb79a,	// (0x0000b79a) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb7b2,	// (0x0000b7b2) soft_indicator_pane_cp1_ParamLimits

0xb7b2,	// (0x0000b7b2) soft_indicator_pane_cp1

0x4b42,	// (0x00004b42) ai_links_pane_g1

0x4b4b,	// (0x00004b4b) grid_ai_links_pane

0xd2ca,	// (0x0000d2ca) ai_gene_pane_1

0x4b30,	// (0x00004b30) ai_gene_pane_2

0x4b39,	// (0x00004b39) list_highlight_pane_cp4

0xd2a6,	// (0x0000d2a6) cell_ai_link_pane_ParamLimits

0xd2a6,	// (0x0000d2a6) cell_ai_link_pane

0x4b01,	// (0x00004b01) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xade5,	// (0x0000ade5) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x4a4f,	// (0x00004a4f) ai_gene_pane_1_g1_ParamLimits

0x4a4f,	// (0x00004a4f) ai_gene_pane_1_g1

0x4a5b,	// (0x00004a5b) ai_gene_pane_1_g2_ParamLimits

0x4a5b,	// (0x00004a5b) ai_gene_pane_1_g2

0x0001,

0xaddb,	// (0x0000addb) ai_gene_pane_1_g_ParamLimits

0xaddb,	// (0x0000addb) ai_gene_pane_1_g

0x4a68,	// (0x00004a68) ai_gene_pane_1_t1_ParamLimits

0x4a68,	// (0x00004a68) ai_gene_pane_1_t1

0x4a9c,	// (0x00004a9c) grid_ai_soft_ind_pane

0x4a3a,	// (0x00004a3a) ai_gene_pane_2_t1_ParamLimits

0x4a3a,	// (0x00004a3a) ai_gene_pane_2_t1

0xb7c6,	// (0x0000b7c6) main_pane_empty_t1_ParamLimits

0xb7c6,	// (0x0000b7c6) main_pane_empty_t1

0xb7de,	// (0x0000b7de) main_pane_empty_t2_ParamLimits

0xb7de,	// (0x0000b7de) main_pane_empty_t2

0xb7f3,	// (0x0000b7f3) main_pane_empty_t3_ParamLimits

0xb7f3,	// (0x0000b7f3) main_pane_empty_t3

0xb805,	// (0x0000b805) main_pane_empty_t4_ParamLimits

0xb805,	// (0x0000b805) main_pane_empty_t4

0xb817,	// (0x0000b817) main_pane_empty_t5_ParamLimits

0xb817,	// (0x0000b817) main_pane_empty_t5

0x0004,

0xf393,	// (0x0000f393) main_pane_empty_t_ParamLimits

0xf393,	// (0x0000f393) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x47aa,	// (0x000047aa) find_popup_pane_cp2_ParamLimits

0x47aa,	// (0x000047aa) find_popup_pane_cp2

0x47b6,	// (0x000047b6) heading_pane_ParamLimits

0x47b6,	// (0x000047b6) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1ca,	// (0x0000d1ca) bg_popup_window_pane_g1_ParamLimits

0xd1ca,	// (0x0000d1ca) bg_popup_window_pane_g1

0xd1d9,	// (0x0000d1d9) bg_popup_window_pane_g2_ParamLimits

0xd1d9,	// (0x0000d1d9) bg_popup_window_pane_g2

0xd1e5,	// (0x0000d1e5) bg_popup_window_pane_g3_ParamLimits

0xd1e5,	// (0x0000d1e5) bg_popup_window_pane_g3

0xd1f1,	// (0x0000d1f1) bg_popup_window_pane_g4_ParamLimits

0xd1f1,	// (0x0000d1f1) bg_popup_window_pane_g4

0xd200,	// (0x0000d200) bg_popup_window_pane_g5_ParamLimits

0xd200,	// (0x0000d200) bg_popup_window_pane_g5

0xd210,	// (0x0000d210) bg_popup_window_pane_g6_ParamLimits

0xd210,	// (0x0000d210) bg_popup_window_pane_g6

0xd21c,	// (0x0000d21c) bg_popup_window_pane_g7_ParamLimits

0xd21c,	// (0x0000d21c) bg_popup_window_pane_g7

0xd22b,	// (0x0000d22b) bg_popup_window_pane_g8_ParamLimits

0xd22b,	// (0x0000d22b) bg_popup_window_pane_g8

0xd23a,	// (0x0000d23a) bg_popup_window_pane_g9_ParamLimits

0xd23a,	// (0x0000d23a) bg_popup_window_pane_g9

0x477f,	// (0x0000477f) bg_popup_window_pane_g10_ParamLimits

0x477f,	// (0x0000477f) bg_popup_window_pane_g10

0x0009,

0xf4d9,	// (0x0000f4d9) bg_popup_window_pane_g_ParamLimits

0xf4d9,	// (0x0000f4d9) bg_popup_window_pane_g

0x46a8,	// (0x000046a8) bg_popup_heading_pane_ParamLimits

0x46a8,	// (0x000046a8) bg_popup_heading_pane

0x531b,	// (0x0000531b) tabs_4_passive_pane_cp_srt_ParamLimits

0x531b,	// (0x0000531b) tabs_4_passive_pane_cp_srt

0x532d,	// (0x0000532d) tabs_4_passive_pane_srt_ParamLimits

0x46bc,	// (0x000046bc) heading_pane_g2

0x532d,	// (0x0000532d) tabs_4_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp3_srt

0x46c4,	// (0x000046c4) heading_pane_t1_ParamLimits

0x46c4,	// (0x000046c4) heading_pane_t1

0x46db,	// (0x000046db) heading_pane_t2_ParamLimits

0x46db,	// (0x000046db) heading_pane_t2

0x0001,

0xad9e,	// (0x0000ad9e) heading_pane_t_ParamLimits

0xad9e,	// (0x0000ad9e) heading_pane_t

0x4082,	// (0x00004082) bg_popup_heading_pane_g1

0x4131,	// (0x00004131) bg_popup_heading_pane_g2

0x413b,	// (0x0000413b) bg_popup_heading_pane_g3

0x4145,	// (0x00004145) bg_popup_heading_pane_g4

0x414f,	// (0x0000414f) bg_popup_heading_pane_g5

0x4159,	// (0x00004159) bg_popup_heading_pane_g6

0x4161,	// (0x00004161) bg_popup_heading_pane_g7

0x4169,	// (0x00004169) bg_popup_heading_pane_g8

0x4173,	// (0x00004173) bg_popup_heading_pane_g9

0x0008,

0xad5a,	// (0x0000ad5a) bg_popup_heading_pane_g

0x367e,	// (0x0000367e) bg_popup_sub_pane_g1

0x3686,	// (0x00003686) bg_popup_sub_pane_g2

0x368e,	// (0x0000368e) bg_popup_sub_pane_g3

0x3696,	// (0x00003696) bg_popup_sub_pane_g4

0x369e,	// (0x0000369e) bg_popup_sub_pane_g5

0x36a6,	// (0x000036a6) bg_popup_sub_pane_g6

0x36ae,	// (0x000036ae) bg_popup_sub_pane_g7

0x36b6,	// (0x000036b6) bg_popup_sub_pane_g8

0x36be,	// (0x000036be) bg_popup_sub_pane_g9

0x0008,

0xad34,	// (0x0000ad34) bg_popup_sub_pane_g

0x0823,	// (0x00000823) bg_popup_window_pane_cp5_ParamLimits

0x0823,	// (0x00000823) bg_popup_window_pane_cp5

0x083f,	// (0x0000083f) popup_note_window_g1_ParamLimits

0x083f,	// (0x0000083f) popup_note_window_g1

0x084b,	// (0x0000084b) popup_note_window_t1_ParamLimits

0x084b,	// (0x0000084b) popup_note_window_t1

0x0861,	// (0x00000861) popup_note_window_t2_ParamLimits

0x0861,	// (0x00000861) popup_note_window_t2

0x0877,	// (0x00000877) popup_note_window_t3_ParamLimits

0x0877,	// (0x00000877) popup_note_window_t3

0x088d,	// (0x0000088d) popup_note_window_t4_ParamLimits

0x088d,	// (0x0000088d) popup_note_window_t4

0x08b5,	// (0x000008b5) popup_note_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note_window_t5

0x0004,

0xaa59,	// (0x0000aa59) popup_note_window_t_ParamLimits

0xaa59,	// (0x0000aa59) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3ffe,	// (0x00003ffe) popup_note_image_window_g1_ParamLimits

0x3ffe,	// (0x00003ffe) popup_note_image_window_g1

0x400a,	// (0x0000400a) popup_note_image_window_g2_ParamLimits

0x400a,	// (0x0000400a) popup_note_image_window_g2

0x0001,

0xad28,	// (0x0000ad28) popup_note_image_window_g_ParamLimits

0xad28,	// (0x0000ad28) popup_note_image_window_g

0x4023,	// (0x00004023) popup_note_image_window_t1_ParamLimits

0x4023,	// (0x00004023) popup_note_image_window_t1

0x403c,	// (0x0000403c) popup_note_image_window_t2_ParamLimits

0x403c,	// (0x0000403c) popup_note_image_window_t2

0x4055,	// (0x00004055) popup_note_image_window_t3_ParamLimits

0x4055,	// (0x00004055) popup_note_image_window_t3

0x0002,

0xad2d,	// (0x0000ad2d) popup_note_image_window_t_ParamLimits

0xad2d,	// (0x0000ad2d) popup_note_image_window_t

0x3ebf,	// (0x00003ebf) bg_popup_window_pane_cp7_ParamLimits

0x3ebf,	// (0x00003ebf) bg_popup_window_pane_cp7

0x3eef,	// (0x00003eef) popup_note_wait_window_g1_ParamLimits

0x3eef,	// (0x00003eef) popup_note_wait_window_g1

0x3efb,	// (0x00003efb) popup_note_wait_window_g2_ParamLimits

0x3efb,	// (0x00003efb) popup_note_wait_window_g2

0x0002,

0xad16,	// (0x0000ad16) popup_note_wait_window_g_ParamLimits

0xad16,	// (0x0000ad16) popup_note_wait_window_g

0x3f13,	// (0x00003f13) popup_note_wait_window_t1_ParamLimits

0x3f13,	// (0x00003f13) popup_note_wait_window_t1

0x3f3a,	// (0x00003f3a) popup_note_wait_window_t2_ParamLimits

0x3f3a,	// (0x00003f3a) popup_note_wait_window_t2

0x3f57,	// (0x00003f57) popup_note_wait_window_t3_ParamLimits

0x3f57,	// (0x00003f57) popup_note_wait_window_t3

0x3f6a,	// (0x00003f6a) popup_note_wait_window_t4_ParamLimits

0x3f6a,	// (0x00003f6a) popup_note_wait_window_t4

0x0004,

0xad1d,	// (0x0000ad1d) popup_note_wait_window_t_ParamLimits

0xad1d,	// (0x0000ad1d) popup_note_wait_window_t

0x3f8f,	// (0x00003f8f) wait_bar_pane_ParamLimits

0x3f8f,	// (0x00003f8f) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xabd8,	// (0x0000abd8) wait_anim_pane_g

0x3e63,	// (0x00003e63) wait_border_pane_g1

0x3e6e,	// (0x00003e6e) wait_border_pane_g2

0x3e77,	// (0x00003e77) wait_border_pane_g3

0x0002,

0xad0f,	// (0x0000ad0f) wait_border_pane_g

0x3cce,	// (0x00003cce) bg_popup_window_pane_cp16_ParamLimits

0x3cce,	// (0x00003cce) bg_popup_window_pane_cp16

0x3dce,	// (0x00003dce) indicator_popup_pane_cp4_ParamLimits

0x3dce,	// (0x00003dce) indicator_popup_pane_cp4

0x3de2,	// (0x00003de2) popup_query_data_window_t1_ParamLimits

0x3de2,	// (0x00003de2) popup_query_data_window_t1

0x3df4,	// (0x00003df4) popup_query_data_window_t2_ParamLimits

0x3df4,	// (0x00003df4) popup_query_data_window_t2

0x3e0d,	// (0x00003e0d) popup_query_data_window_t3_ParamLimits

0x3e0d,	// (0x00003e0d) popup_query_data_window_t3

0x0002,

0xad08,	// (0x0000ad08) popup_query_data_window_t_ParamLimits

0xad08,	// (0x0000ad08) popup_query_data_window_t

0x3e27,	// (0x00003e27) query_popup_data_pane_ParamLimits

0x3e27,	// (0x00003e27) query_popup_data_pane

0x3e3b,	// (0x00003e3b) query_popup_data_pane_cp1_ParamLimits

0x3e3b,	// (0x00003e3b) query_popup_data_pane_cp1

0x3cce,	// (0x00003cce) bg_popup_window_pane_cp10_ParamLimits

0x3cce,	// (0x00003cce) bg_popup_window_pane_cp10

0x3d00,	// (0x00003d00) indicator_popup_pane_ParamLimits

0x3d00,	// (0x00003d00) indicator_popup_pane

0x3d22,	// (0x00003d22) popup_query_code_window_t1_ParamLimits

0x3d22,	// (0x00003d22) popup_query_code_window_t1

0x3d3c,	// (0x00003d3c) popup_query_code_window_t2_ParamLimits

0x3d3c,	// (0x00003d3c) popup_query_code_window_t2

0x3d85,	// (0x00003d85) popup_query_code_window_t3_ParamLimits

0x3d85,	// (0x00003d85) popup_query_code_window_t3

0x0002,

0xad01,	// (0x0000ad01) popup_query_code_window_t_ParamLimits

0xad01,	// (0x0000ad01) popup_query_code_window_t

0x3db4,	// (0x00003db4) query_popup_pane_ParamLimits

0x3db4,	// (0x00003db4) query_popup_pane

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp15

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1_ParamLimits

0x08f7,	// (0x000008f7) indicator_popup_pane_cp1

0x090a,	// (0x0000090a) indicator_popup_pane_cp2_ParamLimits

0x090a,	// (0x0000090a) indicator_popup_pane_cp2

0x091d,	// (0x0000091d) popup_query_data_code_window_g1_ParamLimits

0x091d,	// (0x0000091d) popup_query_data_code_window_g1

0x0930,	// (0x00000930) popup_query_data_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t1

0x0942,	// (0x00000942) popup_query_data_code_window_t2_ParamLimits

0x0942,	// (0x00000942) popup_query_data_code_window_t2

0x0954,	// (0x00000954) popup_query_data_code_window_t3_ParamLimits

0x0954,	// (0x00000954) popup_query_data_code_window_t3

0x096a,	// (0x0000096a) popup_query_data_code_window_t4_ParamLimits

0x096a,	// (0x0000096a) popup_query_data_code_window_t4

0x0003,

0xaa64,	// (0x0000aa64) popup_query_data_code_window_t_ParamLimits

0xaa64,	// (0x0000aa64) popup_query_data_code_window_t

0x36eb,	// (0x000036eb) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3cc6,	// (0x00003cc6) heading_pane_cp5

0x0a7d,	// (0x00000a7d) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09a8,	// (0x000009a8) query_popup_pane_t1

0x09b6,	// (0x000009b6) list_popup_info_pane_ParamLimits

0x09b6,	// (0x000009b6) list_popup_info_pane

0x09c5,	// (0x000009c5) listscroll_popup_info_pane_g1

0x09cd,	// (0x000009cd) scroll_pane_cp7

0x09d7,	// (0x000009d7) popup_info_list_pane_t1_ParamLimits

0x09d7,	// (0x000009d7) popup_info_list_pane_t1

0x09f1,	// (0x000009f1) popup_info_list_pane_t2_ParamLimits

0x09f1,	// (0x000009f1) popup_info_list_pane_t2

0x0001,

0xaa6d,	// (0x0000aa6d) popup_info_list_pane_t_ParamLimits

0xaa6d,	// (0x0000aa6d) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x540f,	// (0x0000540f) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb879,	// (0x0000b879) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb881,	// (0x0000b881) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb881,	// (0x0000b881) cell_large_graphic_colour_none_popup_pane

0xb895,	// (0x0000b895) grid_large_graphic_colour_popup_pane_ParamLimits

0xb895,	// (0x0000b895) grid_large_graphic_colour_popup_pane

0xb8b9,	// (0x0000b8b9) listscroll_popup_colour_pane_g1_ParamLimits

0xb8b9,	// (0x0000b8b9) listscroll_popup_colour_pane_g1

0xb8d0,	// (0x0000b8d0) listscroll_popup_colour_pane_g2_ParamLimits

0xb8d0,	// (0x0000b8d0) listscroll_popup_colour_pane_g2

0xb8e7,	// (0x0000b8e7) listscroll_popup_colour_pane_g3_ParamLimits

0xb8e7,	// (0x0000b8e7) listscroll_popup_colour_pane_g3

0xb8f7,	// (0x0000b8f7) listscroll_popup_colour_pane_g4_ParamLimits

0xb8f7,	// (0x0000b8f7) listscroll_popup_colour_pane_g4

0x0003,

0xf39e,	// (0x0000f39e) listscroll_popup_colour_pane_g_ParamLimits

0xf39e,	// (0x0000f39e) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb907,	// (0x0000b907) cell_large_graphic_colour_popup_pane_ParamLimits

0xb907,	// (0x0000b907) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xaa7b,	// (0x0000aa7b) cell_large_graphic_colour_popup_pane_g

0x0b67,	// (0x00000b67) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b70,	// (0x00000b70) grid_highlight_pane_cp4

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8_ParamLimits

0x0b78,	// (0x00000b78) bg_popup_window_pane_cp8

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_text_window_g1

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1_ParamLimits

0x0ba5,	// (0x00000ba5) popup_snote_single_text_window_t1

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2_ParamLimits

0x0bb8,	// (0x00000bb8) popup_snote_single_text_window_t2

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3_ParamLimits

0x0bcb,	// (0x00000bcb) popup_snote_single_text_window_t3

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4_ParamLimits

0x0c04,	// (0x00000c04) popup_snote_single_text_window_t4

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5_ParamLimits

0x0c38,	// (0x00000c38) popup_snote_single_text_window_t5

0x0004,

0xaa80,	// (0x0000aa80) popup_snote_single_text_window_t_ParamLimits

0xaa80,	// (0x0000aa80) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xaa8b,	// (0x0000aa8b) popup_snote_single_graphic_window_g_ParamLimits

0xaa8b,	// (0x0000aa8b) popup_snote_single_graphic_window_g

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1_ParamLimits

0x0c81,	// (0x00000c81) popup_snote_single_graphic_window_t1

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2_ParamLimits

0x0c94,	// (0x00000c94) popup_snote_single_graphic_window_t2

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3_ParamLimits

0x0ca7,	// (0x00000ca7) popup_snote_single_graphic_window_t3

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4_ParamLimits

0x0ce0,	// (0x00000ce0) popup_snote_single_graphic_window_t4

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5_ParamLimits

0x0d14,	// (0x00000d14) popup_snote_single_graphic_window_t5

0x0004,

0xaa90,	// (0x0000aa90) popup_snote_single_graphic_window_t_ParamLimits

0xaa90,	// (0x0000aa90) popup_snote_single_graphic_window_t

0x529b,	// (0x0000529b) grid_graphic_popup_pane_ParamLimits

0x529b,	// (0x0000529b) grid_graphic_popup_pane

0x52c3,	// (0x000052c3) listscroll_popup_graphic_pane_g1_ParamLimits

0x52c3,	// (0x000052c3) listscroll_popup_graphic_pane_g1

0xd583,	// (0x0000d583) listscroll_popup_graphic_pane_g2_ParamLimits

0xd583,	// (0x0000d583) listscroll_popup_graphic_pane_g2

0x0001,

0xf516,	// (0x0000f516) listscroll_popup_graphic_pane_g_ParamLimits

0xf516,	// (0x0000f516) listscroll_popup_graphic_pane_g

0x52eb,	// (0x000052eb) scroll_pane_cp5

0xd546,	// (0x0000d546) cell_graphic_popup_pane_ParamLimits

0xd546,	// (0x0000d546) cell_graphic_popup_pane

0x5225,	// (0x00005225) cell_graphic_popup_pane_g1

0x522d,	// (0x0000522d) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xae77,	// (0x0000ae77) cell_graphic_popup_pane_g

0x5236,	// (0x00005236) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd4fd,	// (0x0000d4fd) bg_list_pane_g1_ParamLimits

0xd4fd,	// (0x0000d4fd) bg_list_pane_g1

0x519a,	// (0x0000519a) bg_list_pane_g2_ParamLimits

0x519a,	// (0x0000519a) bg_list_pane_g2

0x51af,	// (0x000051af) bg_list_pane_g3_ParamLimits

0x51af,	// (0x000051af) bg_list_pane_g3

0x51c3,	// (0x000051c3) bg_list_pane_g4_ParamLimits

0x51c3,	// (0x000051c3) bg_list_pane_g4

0xd51a,	// (0x0000d51a) bg_list_pane_g5_ParamLimits

0xd51a,	// (0x0000d51a) bg_list_pane_g5

0x0004,

0xf50b,	// (0x0000f50b) bg_list_pane_g_ParamLimits

0xf50b,	// (0x0000f50b) bg_list_pane_g

0xd4a3,	// (0x0000d4a3) list_double2_graphic_large_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double2_graphic_large_graphic_pane

0xd4a3,	// (0x0000d4a3) list_double2_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double2_graphic_pane

0xd4a3,	// (0x0000d4a3) list_double2_large_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double2_large_graphic_pane

0xd4a3,	// (0x0000d4a3) list_double2_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double2_pane

0xd4a3,	// (0x0000d4a3) list_double_graphic_heading_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_graphic_heading_pane

0xd4a3,	// (0x0000d4a3) list_double_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_graphic_pane

0xd4a3,	// (0x0000d4a3) list_double_heading_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_heading_pane

0xd4a3,	// (0x0000d4a3) list_double_large_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_large_graphic_pane

0xd4a3,	// (0x0000d4a3) list_double_number_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_number_pane

0xd4a3,	// (0x0000d4a3) list_double_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_pane

0xd4a3,	// (0x0000d4a3) list_double_time_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_double_time_pane

0xd4a3,	// (0x0000d4a3) list_setting_number_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_setting_number_pane

0xd4a3,	// (0x0000d4a3) list_setting_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_setting_pane

0xd4b5,	// (0x0000d4b5) list_single_2graphic_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_2graphic_pane

0xd4b5,	// (0x0000d4b5) list_single_graphic_heading_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_graphic_heading_pane

0xd4b5,	// (0x0000d4b5) list_single_graphic_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_graphic_pane

0xd4b5,	// (0x0000d4b5) list_single_heading_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_heading_pane

0xd4a3,	// (0x0000d4a3) list_single_large_graphic_pane_ParamLimits

0xd4a3,	// (0x0000d4a3) list_single_large_graphic_pane

0xd4b5,	// (0x0000d4b5) list_single_number_heading_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_number_heading_pane

0xd4b5,	// (0x0000d4b5) list_single_number_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_number_pane

0xd4b5,	// (0x0000d4b5) list_single_pane_ParamLimits

0xd4b5,	// (0x0000d4b5) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x3516,	// (0x00003516) list_single_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_pane_g1

0x3522,	// (0x00003522) list_single_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_pane_g2

0x0001,

0xacad,	// (0x0000acad) list_single_pane_g_ParamLimits

0xacad,	// (0x0000acad) list_single_pane_g

0x59e2,	// (0x000059e2) list_single_pane_t1_ParamLimits

0x59e2,	// (0x000059e2) list_single_pane_t1

0x3516,	// (0x00003516) list_single_number_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_pane_g1

0x3522,	// (0x00003522) list_single_number_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_pane_g2

0x0001,

0xacad,	// (0x0000acad) list_single_number_pane_g_ParamLimits

0xacad,	// (0x0000acad) list_single_number_pane_g

0x360c,	// (0x0000360c) list_single_number_pane_t1_ParamLimits

0x360c,	// (0x0000360c) list_single_number_pane_t1

0xd2f4,	// (0x0000d2f4) list_single_number_pane_t2_ParamLimits

0xd2f4,	// (0x0000d2f4) list_single_number_pane_t2

0x0001,

0xf4ee,	// (0x0000f4ee) list_single_number_pane_t_ParamLimits

0xf4ee,	// (0x0000f4ee) list_single_number_pane_t

0x723f,	// (0x0000723f) list_single_graphic_pane_g1_ParamLimits

0x723f,	// (0x0000723f) list_single_graphic_pane_g1

0x3516,	// (0x00003516) list_single_graphic_pane_g2_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_pane_g2

0x3522,	// (0x00003522) list_single_graphic_pane_g3_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_pane_g3

0x0002,

0xf3a7,	// (0x0000f3a7) list_single_graphic_pane_g_ParamLimits

0xf3a7,	// (0x0000f3a7) list_single_graphic_pane_g

0xb930,	// (0x0000b930) list_single_graphic_pane_t1_ParamLimits

0xb930,	// (0x0000b930) list_single_graphic_pane_t1

0x3516,	// (0x00003516) list_single_heading_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_heading_pane_g1

0x3522,	// (0x00003522) list_single_heading_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_heading_pane_g2

0x0001,

0xacad,	// (0x0000acad) list_single_heading_pane_g_ParamLimits

0xacad,	// (0x0000acad) list_single_heading_pane_g

0xb946,	// (0x0000b946) list_single_heading_pane_t1_ParamLimits

0xb946,	// (0x0000b946) list_single_heading_pane_t1

0xb95c,	// (0x0000b95c) list_single_heading_pane_t2_ParamLimits

0xb95c,	// (0x0000b95c) list_single_heading_pane_t2

0x0001,

0xf3ae,	// (0x0000f3ae) list_single_heading_pane_t_ParamLimits

0xf3ae,	// (0x0000f3ae) list_single_heading_pane_t

0x3516,	// (0x00003516) list_single_number_heading_pane_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_heading_pane_g1

0x3522,	// (0x00003522) list_single_number_heading_pane_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_heading_pane_g2

0x0001,

0xacad,	// (0x0000acad) list_single_number_heading_pane_g_ParamLimits

0xacad,	// (0x0000acad) list_single_number_heading_pane_g

0xb946,	// (0x0000b946) list_single_number_heading_pane_t1_ParamLimits

0xb946,	// (0x0000b946) list_single_number_heading_pane_t1

0xb96e,	// (0x0000b96e) list_single_number_heading_pane_t2_ParamLimits

0xb96e,	// (0x0000b96e) list_single_number_heading_pane_t2

0x59bc,	// (0x000059bc) list_single_number_heading_pane_t3_ParamLimits

0x59bc,	// (0x000059bc) list_single_number_heading_pane_t3

0x0002,

0xf3b3,	// (0x0000f3b3) list_single_number_heading_pane_t_ParamLimits

0xf3b3,	// (0x0000f3b3) list_single_number_heading_pane_t

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_g1

0xb980,	// (0x0000b980) list_single_graphic_heading_pane_g4_ParamLimits

0xb980,	// (0x0000b980) list_single_graphic_heading_pane_g4

0x3522,	// (0x00003522) list_single_graphic_heading_pane_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_heading_pane_g5

0x0002,

0xf3ba,	// (0x0000f3ba) list_single_graphic_heading_pane_g_ParamLimits

0xf3ba,	// (0x0000f3ba) list_single_graphic_heading_pane_g

0xb946,	// (0x0000b946) list_single_graphic_heading_pane_t1_ParamLimits

0xb946,	// (0x0000b946) list_single_graphic_heading_pane_t1

0xb991,	// (0x0000b991) list_single_graphic_heading_pane_t2_ParamLimits

0xb991,	// (0x0000b991) list_single_graphic_heading_pane_t2

0x0001,

0xf3c1,	// (0x0000f3c1) list_single_graphic_heading_pane_t_ParamLimits

0xf3c1,	// (0x0000f3c1) list_single_graphic_heading_pane_t

0x59f8,	// (0x000059f8) list_single_large_graphic_pane_g1_ParamLimits

0x59f8,	// (0x000059f8) list_single_large_graphic_pane_g1

0x5a04,	// (0x00005a04) list_single_large_graphic_pane_g2_ParamLimits

0x5a04,	// (0x00005a04) list_single_large_graphic_pane_g2

0x5a10,	// (0x00005a10) list_single_large_graphic_pane_g3_ParamLimits

0x5a10,	// (0x00005a10) list_single_large_graphic_pane_g3

0x0002,

0xaf07,	// (0x0000af07) list_single_large_graphic_pane_g_ParamLimits

0xaf07,	// (0x0000af07) list_single_large_graphic_pane_g

0x3e6e,	// (0x00003e6e) wait_border_pane_g2_copy1

0xb9a3,	// (0x0000b9a3) list_single_large_graphic_pane_g4_cp2

0x5a1c,	// (0x00005a1c) list_single_large_graphic_pane_t1_ParamLimits

0x5a1c,	// (0x00005a1c) list_single_large_graphic_pane_t1

0x0fd8,	// (0x00000fd8) list_double_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_double_pane_g1

0x0f03,	// (0x00000f03) list_double_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_pane_g2

0x0001,

0xab3b,	// (0x0000ab3b) list_double_pane_g_ParamLimits

0xab3b,	// (0x0000ab3b) list_double_pane_g

0x0f0f,	// (0x00000f0f) list_double_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_double_pane_t1

0xb9ab,	// (0x0000b9ab) list_double_pane_t2_ParamLimits

0xb9ab,	// (0x0000b9ab) list_double_pane_t2

0x0001,

0xf3c6,	// (0x0000f3c6) list_double_pane_t_ParamLimits

0xf3c6,	// (0x0000f3c6) list_double_pane_t

0xb9bd,	// (0x0000b9bd) list_double2_pane_g1_ParamLimits

0xb9bd,	// (0x0000b9bd) list_double2_pane_g1

0xb9ce,	// (0x0000b9ce) list_double2_pane_g2_ParamLimits

0xb9ce,	// (0x0000b9ce) list_double2_pane_g2

0x0001,

0xf3cb,	// (0x0000f3cb) list_double2_pane_g_ParamLimits

0xf3cb,	// (0x0000f3cb) list_double2_pane_g

0xb9da,	// (0x0000b9da) list_double2_pane_t1_ParamLimits

0xb9da,	// (0x0000b9da) list_double2_pane_t1

0xb9f0,	// (0x0000b9f0) list_double2_pane_t2_ParamLimits

0xb9f0,	// (0x0000b9f0) list_double2_pane_t2

0x0001,

0xf3d0,	// (0x0000f3d0) list_double2_pane_t_ParamLimits

0xf3d0,	// (0x0000f3d0) list_double2_pane_t

0x0fd8,	// (0x00000fd8) list_double_number_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_double_number_pane_g1

0x0f03,	// (0x00000f03) list_double_number_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_number_pane_g2

0x0001,

0xab3b,	// (0x0000ab3b) list_double_number_pane_g_ParamLimits

0xab3b,	// (0x0000ab3b) list_double_number_pane_g

0xba02,	// (0x0000ba02) list_double_number_pane_t1_ParamLimits

0xba02,	// (0x0000ba02) list_double_number_pane_t1

0x0fe4,	// (0x00000fe4) list_double_number_pane_t2_ParamLimits

0x0fe4,	// (0x00000fe4) list_double_number_pane_t2

0xba14,	// (0x0000ba14) list_double_number_pane_t3_ParamLimits

0xba14,	// (0x0000ba14) list_double_number_pane_t3

0x0002,

0xf3d5,	// (0x0000f3d5) list_double_number_pane_t_ParamLimits

0xf3d5,	// (0x0000f3d5) list_double_number_pane_t

0x0fcc,	// (0x00000fcc) list_double_graphic_pane_g1_ParamLimits

0x0fcc,	// (0x00000fcc) list_double_graphic_pane_g1

0xba26,	// (0x0000ba26) list_double_graphic_pane_g2_ParamLimits

0xba26,	// (0x0000ba26) list_double_graphic_pane_g2

0xba35,	// (0x0000ba35) list_double_graphic_pane_g3_ParamLimits

0xba35,	// (0x0000ba35) list_double_graphic_pane_g3

0x0003,

0xf3dc,	// (0x0000f3dc) list_double_graphic_pane_g_ParamLimits

0xf3dc,	// (0x0000f3dc) list_double_graphic_pane_g

0xba4d,	// (0x0000ba4d) list_double_graphic_pane_t1_ParamLimits

0xba4d,	// (0x0000ba4d) list_double_graphic_pane_t1

0xba63,	// (0x0000ba63) list_double_graphic_pane_t2_ParamLimits

0xba63,	// (0x0000ba63) list_double_graphic_pane_t2

0x0001,

0xf3e5,	// (0x0000f3e5) list_double_graphic_pane_t_ParamLimits

0xf3e5,	// (0x0000f3e5) list_double_graphic_pane_t

0xba75,	// (0x0000ba75) list_double2_graphic_pane_g1_ParamLimits

0xba75,	// (0x0000ba75) list_double2_graphic_pane_g1

0x23eb,	// (0x000023eb) list_double2_graphic_pane_g2_ParamLimits

0x23eb,	// (0x000023eb) list_double2_graphic_pane_g2

0xb9ce,	// (0x0000b9ce) list_double2_graphic_pane_g3_ParamLimits

0xb9ce,	// (0x0000b9ce) list_double2_graphic_pane_g3

0x0002,

0xf3ea,	// (0x0000f3ea) list_double2_graphic_pane_g_ParamLimits

0xf3ea,	// (0x0000f3ea) list_double2_graphic_pane_g

0xba81,	// (0x0000ba81) list_double2_graphic_pane_t1_ParamLimits

0xba81,	// (0x0000ba81) list_double2_graphic_pane_t1

0xba97,	// (0x0000ba97) list_double2_graphic_pane_t2_ParamLimits

0xba97,	// (0x0000ba97) list_double2_graphic_pane_t2

0x0001,

0xf3f1,	// (0x0000f3f1) list_double2_graphic_pane_t_ParamLimits

0xf3f1,	// (0x0000f3f1) list_double2_graphic_pane_t

0xbaa9,	// (0x0000baa9) list_double_large_graphic_pane_g1_ParamLimits

0xbaa9,	// (0x0000baa9) list_double_large_graphic_pane_g1

0xbad4,	// (0x0000bad4) list_double_large_graphic_pane_g2_ParamLimits

0xbad4,	// (0x0000bad4) list_double_large_graphic_pane_g2

0x0f03,	// (0x00000f03) list_double_large_graphic_pane_g3_ParamLimits

0x0f03,	// (0x00000f03) list_double_large_graphic_pane_g3

0xbae5,	// (0x0000bae5) list_double_large_graphic_pane_g4_ParamLimits

0xbae5,	// (0x0000bae5) list_double_large_graphic_pane_g4

0x0004,

0xf3f6,	// (0x0000f3f6) list_double_large_graphic_pane_g_ParamLimits

0xf3f6,	// (0x0000f3f6) list_double_large_graphic_pane_g

0xbaf7,	// (0x0000baf7) list_double_large_graphic_pane_t1_ParamLimits

0xbaf7,	// (0x0000baf7) list_double_large_graphic_pane_t1

0xbb10,	// (0x0000bb10) list_double_large_graphic_pane_t2_ParamLimits

0xbb10,	// (0x0000bb10) list_double_large_graphic_pane_t2

0x0001,

0xf401,	// (0x0000f401) list_double_large_graphic_pane_t_ParamLimits

0xf401,	// (0x0000f401) list_double_large_graphic_pane_t

0xbb22,	// (0x0000bb22) list_double2_large_graphic_pane_g1_ParamLimits

0xbb22,	// (0x0000bb22) list_double2_large_graphic_pane_g1

0xb9bd,	// (0x0000b9bd) list_double2_large_graphic_pane_g2_ParamLimits

0xb9bd,	// (0x0000b9bd) list_double2_large_graphic_pane_g2

0xb9ce,	// (0x0000b9ce) list_double2_large_graphic_pane_g3_ParamLimits

0xb9ce,	// (0x0000b9ce) list_double2_large_graphic_pane_g3

0x0002,

0xf406,	// (0x0000f406) list_double2_large_graphic_pane_g_ParamLimits

0xf406,	// (0x0000f406) list_double2_large_graphic_pane_g

0xbb2e,	// (0x0000bb2e) list_double2_large_graphic_pane_t1_ParamLimits

0xbb2e,	// (0x0000bb2e) list_double2_large_graphic_pane_t1

0xbb44,	// (0x0000bb44) list_double2_large_graphic_pane_t2_ParamLimits

0xbb44,	// (0x0000bb44) list_double2_large_graphic_pane_t2

0x0001,

0xf40d,	// (0x0000f40d) list_double2_large_graphic_pane_t_ParamLimits

0xf40d,	// (0x0000f40d) list_double2_large_graphic_pane_t

0xbb56,	// (0x0000bb56) list_double_heading_pane_g1_ParamLimits

0xbb56,	// (0x0000bb56) list_double_heading_pane_g1

0xbb67,	// (0x0000bb67) list_double_heading_pane_g2_ParamLimits

0xbb67,	// (0x0000bb67) list_double_heading_pane_g2

0x0001,

0xf412,	// (0x0000f412) list_double_heading_pane_g_ParamLimits

0xf412,	// (0x0000f412) list_double_heading_pane_g

0xbb73,	// (0x0000bb73) list_double_heading_pane_t1_ParamLimits

0xbb73,	// (0x0000bb73) list_double_heading_pane_t1

0xbb89,	// (0x0000bb89) list_double_heading_pane_t2_ParamLimits

0xbb89,	// (0x0000bb89) list_double_heading_pane_t2

0x0001,

0xf417,	// (0x0000f417) list_double_heading_pane_t_ParamLimits

0xf417,	// (0x0000f417) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xbb56,	// (0x0000bb56) list_double_graphic_heading_pane_g2_ParamLimits

0xbb56,	// (0x0000bb56) list_double_graphic_heading_pane_g2

0xbb67,	// (0x0000bb67) list_double_graphic_heading_pane_g3_ParamLimits

0xbb67,	// (0x0000bb67) list_double_graphic_heading_pane_g3

0x0002,

0xf41c,	// (0x0000f41c) list_double_graphic_heading_pane_g_ParamLimits

0xf41c,	// (0x0000f41c) list_double_graphic_heading_pane_g

0xbb9b,	// (0x0000bb9b) list_double_graphic_heading_pane_t1_ParamLimits

0xbb9b,	// (0x0000bb9b) list_double_graphic_heading_pane_t1

0xbbb1,	// (0x0000bbb1) list_double_graphic_heading_pane_t2_ParamLimits

0xbbb1,	// (0x0000bbb1) list_double_graphic_heading_pane_t2

0x0001,

0xf423,	// (0x0000f423) list_double_graphic_heading_pane_t_ParamLimits

0xf423,	// (0x0000f423) list_double_graphic_heading_pane_t

0xbad4,	// (0x0000bad4) list_double_time_pane_g1_ParamLimits

0xbad4,	// (0x0000bad4) list_double_time_pane_g1

0x0f03,	// (0x00000f03) list_double_time_pane_g2_ParamLimits

0x0f03,	// (0x00000f03) list_double_time_pane_g2

0x0001,

0xf428,	// (0x0000f428) list_double_time_pane_g_ParamLimits

0xf428,	// (0x0000f428) list_double_time_pane_g

0x10a3,	// (0x000010a3) list_double_time_pane_t1_ParamLimits

0x10a3,	// (0x000010a3) list_double_time_pane_t1

0xbbc3,	// (0x0000bbc3) list_double_time_pane_t2_ParamLimits

0xbbc3,	// (0x0000bbc3) list_double_time_pane_t2

0xbbd5,	// (0x0000bbd5) list_double_time_pane_t3_ParamLimits

0xbbd5,	// (0x0000bbd5) list_double_time_pane_t3

0xbbe7,	// (0x0000bbe7) list_double_time_pane_t4_ParamLimits

0xbbe7,	// (0x0000bbe7) list_double_time_pane_t4

0x0003,

0xf42d,	// (0x0000f42d) list_double_time_pane_t_ParamLimits

0xf42d,	// (0x0000f42d) list_double_time_pane_t

0x23eb,	// (0x000023eb) list_setting_pane_g1_ParamLimits

0x23eb,	// (0x000023eb) list_setting_pane_g1

0xb9ce,	// (0x0000b9ce) list_setting_pane_g2_ParamLimits

0xb9ce,	// (0x0000b9ce) list_setting_pane_g2

0x0001,

0xf436,	// (0x0000f436) list_setting_pane_g_ParamLimits

0xf436,	// (0x0000f436) list_setting_pane_g

0xbbf9,	// (0x0000bbf9) list_setting_pane_t1_ParamLimits

0xbbf9,	// (0x0000bbf9) list_setting_pane_t1

0xbc10,	// (0x0000bc10) list_setting_pane_t2_ParamLimits

0xbc10,	// (0x0000bc10) list_setting_pane_t2

0x0002,

0xf43b,	// (0x0000f43b) list_setting_pane_t_ParamLimits

0xf43b,	// (0x0000f43b) list_setting_pane_t

0xbc4f,	// (0x0000bc4f) set_value_pane_cp_ParamLimits

0xbc4f,	// (0x0000bc4f) set_value_pane_cp

0x23eb,	// (0x000023eb) list_setting_number_pane_g1_ParamLimits

0x23eb,	// (0x000023eb) list_setting_number_pane_g1

0xb9ce,	// (0x0000b9ce) list_setting_number_pane_g2_ParamLimits

0xb9ce,	// (0x0000b9ce) list_setting_number_pane_g2

0x0001,

0xf436,	// (0x0000f436) list_setting_number_pane_g_ParamLimits

0xf436,	// (0x0000f436) list_setting_number_pane_g

0xbc5b,	// (0x0000bc5b) list_setting_number_pane_t1_ParamLimits

0xbc5b,	// (0x0000bc5b) list_setting_number_pane_t1

0xbc6f,	// (0x0000bc6f) list_setting_number_pane_t2_ParamLimits

0xbc6f,	// (0x0000bc6f) list_setting_number_pane_t2

0xbc86,	// (0x0000bc86) list_setting_number_pane_t3_ParamLimits

0xbc86,	// (0x0000bc86) list_setting_number_pane_t3

0x0003,

0xf442,	// (0x0000f442) list_setting_number_pane_t_ParamLimits

0xf442,	// (0x0000f442) list_setting_number_pane_t

0xbc4f,	// (0x0000bc4f) set_value_pane_ParamLimits

0xbc4f,	// (0x0000bc4f) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xbcc9,	// (0x0000bcc9) form_field_data_pane_ParamLimits

0xbcc9,	// (0x0000bcc9) form_field_data_pane

0xbce0,	// (0x0000bce0) form_field_data_wide_pane_ParamLimits

0xbce0,	// (0x0000bce0) form_field_data_wide_pane

0xbd00,	// (0x0000bd00) form_field_popup_pane_ParamLimits

0xbd00,	// (0x0000bd00) form_field_popup_pane

0xbd18,	// (0x0000bd18) form_field_popup_wide_pane_ParamLimits

0xbd18,	// (0x0000bd18) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xbd39,	// (0x0000bd39) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xbd53,	// (0x0000bd53) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xbd75,	// (0x0000bd75) form_field_slider_pane_t1_ParamLimits

0xbd75,	// (0x0000bd75) form_field_slider_pane_t1

0xbd8d,	// (0x0000bd8d) form_field_slider_pane_t2_ParamLimits

0xbd8d,	// (0x0000bd8d) form_field_slider_pane_t2

0x0001,

0xf44b,	// (0x0000f44b) form_field_slider_pane_t_ParamLimits

0xf44b,	// (0x0000f44b) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xbda2,	// (0x0000bda2) slider_cont_pane_ParamLimits

0xbda2,	// (0x0000bda2) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xab5c,	// (0x0000ab5c) form_field_slider_wide_pane_t_ParamLimits

0xab5c,	// (0x0000ab5c) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xbdb6,	// (0x0000bdb6) slider_cont_pane_cp1_ParamLimits

0xbdb6,	// (0x0000bdb6) slider_cont_pane_cp1

0xbdca,	// (0x0000bdca) slider_form_pane_cp

0x14ad,	// (0x000014ad) input_focus_pane_g1

0x14b5,	// (0x000014b5) input_focus_pane_g2

0x14bd,	// (0x000014bd) input_focus_pane_g3

0x14c5,	// (0x000014c5) input_focus_pane_g4

0x14cd,	// (0x000014cd) input_focus_pane_g5

0x14d5,	// (0x000014d5) input_focus_pane_g6

0x14dd,	// (0x000014dd) input_focus_pane_g7

0x14e5,	// (0x000014e5) input_focus_pane_g8

0x14ed,	// (0x000014ed) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xab61,	// (0x0000ab61) input_focus_pane_g

0x3e77,	// (0x00003e77) wait_border_pane_g3_copy1

0xbdd2,	// (0x0000bdd2) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd487,	// (0x0000d487) data_form_wide_pane_t1

0xbdec,	// (0x0000bdec) list_form_graphic_pane_cp_ParamLimits

0xbdec,	// (0x0000bdec) list_form_graphic_pane_cp

0x5001,	// (0x00005001) slider_form_pane_g1

0x500a,	// (0x0000500a) slider_form_pane_g2

0x0006,

0xf4fc,	// (0x0000f4fc) slider_form_pane_g

0xbdec,	// (0x0000bdec) list_form_graphic_pane_ParamLimits

0xbdec,	// (0x0000bdec) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xbdfe,	// (0x0000bdfe) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xbe07,	// (0x0000be07) input_find_pane_g1_ParamLimits

0xbe07,	// (0x0000be07) input_find_pane_g1

0xbe13,	// (0x0000be13) input_find_pane_t1_ParamLimits

0xbe13,	// (0x0000be13) input_find_pane_t1

0xbe28,	// (0x0000be28) input_find_pane_t2_ParamLimits

0xbe28,	// (0x0000be28) input_find_pane_t2

0x0001,

0xf450,	// (0x0000f450) input_find_pane_t_ParamLimits

0xf450,	// (0x0000f450) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0x15c4,	// (0x000015c4) bg_popup_window_pane_cp2_ParamLimits

0x15c4,	// (0x000015c4) bg_popup_window_pane_cp2

0x15d1,	// (0x000015d1) listscroll_menu_pane_ParamLimits

0x15d1,	// (0x000015d1) listscroll_menu_pane

0xbe49,	// (0x0000be49) popup_submenu_window_ParamLimits

0xbe49,	// (0x0000be49) popup_submenu_window

0x1609,	// (0x00001609) find_popup_pane_g1

0x1611,	// (0x00001611) input_popup_find_pane_cp

0x15aa,	// (0x000015aa) input_focus_pane_cp4_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp4

0x1627,	// (0x00001627) input_popup_find_pane_t1_ParamLimits

0x1627,	// (0x00001627) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1655,	// (0x00001655) listscroll_popup_sub_pane

0x165d,	// (0x0000165d) list_submenu_pane_ParamLimits

0x165d,	// (0x0000165d) list_submenu_pane

0x166e,	// (0x0000166e) scroll_pane_cp4

0x1676,	// (0x00001676) list_single_popup_submenu_pane_ParamLimits

0x1676,	// (0x00001676) list_single_popup_submenu_pane

0x168a,	// (0x0000168a) list_single_popup_submenu_pane_g1

0x1692,	// (0x00001692) list_single_popup_submenu_pane_t1_ParamLimits

0x1692,	// (0x00001692) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbe83,	// (0x0000be83) tabs_2_active_pane_g1

0xbe8b,	// (0x0000be8b) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbe83,	// (0x0000be83) tabs_2_passive_pane_g1

0xbe8b,	// (0x0000be8b) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbe9d,	// (0x0000be9d) tabs_2_long_active_pane_t1

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4

0x2096,	// (0x00002096) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbeb0,	// (0x0000beb0) tabs_3_long_active_pane_t1

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5

0x2096,	// (0x00002096) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1709,	// (0x00001709) listscroll_popup_fast_pane_ParamLimits

0x1709,	// (0x00001709) listscroll_popup_fast_pane

0x1718,	// (0x00001718) grid_popup_fast_pane_ParamLimits

0x1718,	// (0x00001718) grid_popup_fast_pane

0x172a,	// (0x0000172a) scroll_pane_cp9_ParamLimits

0x172a,	// (0x0000172a) scroll_pane_cp9

0x72a5,	// (0x000072a5) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72a5,	// (0x000072a5) list_single_graphic_hl_pane_t1_cp2

0x174e,	// (0x0000174e) input_focus_pane_cp20_ParamLimits

0x174e,	// (0x0000174e) input_focus_pane_cp20

0x175c,	// (0x0000175c) query_popup_data_pane_t1_ParamLimits

0x175c,	// (0x0000175c) query_popup_data_pane_t1

0x176f,	// (0x0000176f) query_popup_data_pane_t2_ParamLimits

0x176f,	// (0x0000176f) query_popup_data_pane_t2

0x17b5,	// (0x000017b5) query_popup_data_pane_t3_ParamLimits

0x17b5,	// (0x000017b5) query_popup_data_pane_t3

0x17f6,	// (0x000017f6) query_popup_data_pane_t4_ParamLimits

0x17f6,	// (0x000017f6) query_popup_data_pane_t4

0x1832,	// (0x00001832) query_popup_data_pane_t5_ParamLimits

0x1832,	// (0x00001832) query_popup_data_pane_t5

0x0004,

0xab7b,	// (0x0000ab7b) query_popup_data_pane_t_ParamLimits

0xab7b,	// (0x0000ab7b) query_popup_data_pane_t

0x14ad,	// (0x000014ad) bg_set_opt_pane_g1

0x14b5,	// (0x000014b5) bg_set_opt_pane_g2

0x14bd,	// (0x000014bd) bg_set_opt_pane_g3

0x14c5,	// (0x000014c5) bg_set_opt_pane_g4

0x14cd,	// (0x000014cd) bg_set_opt_pane_g5

0x14d5,	// (0x000014d5) bg_set_opt_pane_g6

0x14dd,	// (0x000014dd) bg_set_opt_pane_g7

0x14e5,	// (0x000014e5) bg_set_opt_pane_g8

0x14ed,	// (0x000014ed) bg_set_opt_pane_g9

0x0008,

0xab86,	// (0x0000ab86) bg_set_opt_pane_g

0x211f,	// (0x0000211f) control_top_pane_stacon_ParamLimits

0x211f,	// (0x0000211f) control_top_pane_stacon

0x2172,	// (0x00002172) signal_pane_stacon_ParamLimits

0x2172,	// (0x00002172) signal_pane_stacon

0x2197,	// (0x00002197) stacon_top_pane_g1_ParamLimits

0x2197,	// (0x00002197) stacon_top_pane_g1

0x21b9,	// (0x000021b9) title_pane_stacon_ParamLimits

0x21b9,	// (0x000021b9) title_pane_stacon

0x21e3,	// (0x000021e3) uni_indicator_pane_stacon_ParamLimits

0x21e3,	// (0x000021e3) uni_indicator_pane_stacon

0x21f8,	// (0x000021f8) battery_pane_stacon_ParamLimits

0x21f8,	// (0x000021f8) battery_pane_stacon

0x223c,	// (0x0000223c) control_bottom_pane_stacon_ParamLimits

0x223c,	// (0x0000223c) control_bottom_pane_stacon

0x225f,	// (0x0000225f) navi_pane_stacon_ParamLimits

0x225f,	// (0x0000225f) navi_pane_stacon

0x2282,	// (0x00002282) stacon_bottom_pane_g1_ParamLimits

0x2282,	// (0x00002282) stacon_bottom_pane_g1

0x1869,	// (0x00001869) aid_levels_signal_lsc_ParamLimits

0x1869,	// (0x00001869) aid_levels_signal_lsc

0x1880,	// (0x00001880) signal_pane_stacon_g1_ParamLimits

0x1880,	// (0x00001880) signal_pane_stacon_g1

0x1894,	// (0x00001894) signal_pane_stacon_g2_ParamLimits

0x1894,	// (0x00001894) signal_pane_stacon_g2

0x0001,

0xab99,	// (0x0000ab99) signal_pane_stacon_g_ParamLimits

0xab99,	// (0x0000ab99) signal_pane_stacon_g

0x18d6,	// (0x000018d6) title_pane_stacon_t1_ParamLimits

0x18d6,	// (0x000018d6) title_pane_stacon_t1

0x18fb,	// (0x000018fb) uni_indicator_pane_stacon_g1

0x1905,	// (0x00001905) uni_indicator_pane_stacon_g2

0x190f,	// (0x0000190f) uni_indicator_pane_stacon_g3

0x1919,	// (0x00001919) uni_indicator_pane_stacon_g4

0x0003,

0xaba5,	// (0x0000aba5) uni_indicator_pane_stacon_g

0x1923,	// (0x00001923) control_top_pane_stacon_g1

0x192b,	// (0x0000192b) control_top_pane_stacon_t1_ParamLimits

0x192b,	// (0x0000192b) control_top_pane_stacon_t1

0x1962,	// (0x00001962) aid_levels_battery_lsc_ParamLimits

0x1962,	// (0x00001962) aid_levels_battery_lsc

0x197a,	// (0x0000197a) battery_pane_stacon_g1_ParamLimits

0x197a,	// (0x0000197a) battery_pane_stacon_g1

0x198d,	// (0x0000198d) battery_pane_stacon_g2_ParamLimits

0x198d,	// (0x0000198d) battery_pane_stacon_g2

0x0001,

0xabae,	// (0x0000abae) battery_pane_stacon_g_ParamLimits

0xabae,	// (0x0000abae) battery_pane_stacon_g

0x19cb,	// (0x000019cb) navi_icon_pane_stacon

0x19df,	// (0x000019df) navi_navi_pane_stacon

0x19cb,	// (0x000019cb) navi_text_pane_stacon

0x1923,	// (0x00001923) control_bottom_pane_stacon_g1

0x19f3,	// (0x000019f3) control_bottom_pane_stacon_t1_ParamLimits

0x19f3,	// (0x000019f3) control_bottom_pane_stacon_t1

0xbec2,	// (0x0000bec2) grid_app_pane_ParamLimits

0xbec2,	// (0x0000bec2) grid_app_pane

0xbefa,	// (0x0000befa) scroll_pane_cp15_ParamLimits

0xbefa,	// (0x0000befa) scroll_pane_cp15

0xbf13,	// (0x0000bf13) cell_app_pane_ParamLimits

0xbf13,	// (0x0000bf13) cell_app_pane

0xbf58,	// (0x0000bf58) cell_app_pane_g1_ParamLimits

0xbf58,	// (0x0000bf58) cell_app_pane_g1

0x1ac1,	// (0x00001ac1) cell_app_pane_g2_ParamLimits

0x1ac1,	// (0x00001ac1) cell_app_pane_g2

0x0001,

0xf455,	// (0x0000f455) cell_app_pane_g_ParamLimits

0xf455,	// (0x0000f455) cell_app_pane_g

0xbf78,	// (0x0000bf78) cell_app_pane_t1_ParamLimits

0xbf78,	// (0x0000bf78) cell_app_pane_t1

0x1ae4,	// (0x00001ae4) grid_highlight_pane_ParamLimits

0x1ae4,	// (0x00001ae4) grid_highlight_pane

0x14ad,	// (0x000014ad) cell_highlight_pane_g1

0x14b5,	// (0x000014b5) cell_highlight_pane_g2

0x14bd,	// (0x000014bd) cell_highlight_pane_g3

0x14c5,	// (0x000014c5) cell_highlight_pane_g4

0x14cd,	// (0x000014cd) cell_highlight_pane_g5

0x14d5,	// (0x000014d5) cell_highlight_pane_g6

0x14dd,	// (0x000014dd) cell_highlight_pane_g7

0x14e5,	// (0x000014e5) cell_highlight_pane_g8

0x14ed,	// (0x000014ed) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xab61,	// (0x0000ab61) cell_highlight_pane_g

0x1b08,	// (0x00001b08) bg_scroll_pane

0x1b27,	// (0x00001b27) scroll_handle_pane

0x1b78,	// (0x00001b78) scroll_bg_pane_g1

0x1b8d,	// (0x00001b8d) scroll_bg_pane_g2

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g3

0x0002,

0xabb8,	// (0x0000abb8) scroll_bg_pane_g

0x1bba,	// (0x00001bba) scroll_handle_focus_pane_ParamLimits

0x1bba,	// (0x00001bba) scroll_handle_focus_pane

0x1b78,	// (0x00001b78) scroll_handle_pane_g1

0x1bc7,	// (0x00001bc7) scroll_handle_pane_g2

0x1ba5,	// (0x00001ba5) scroll_handle_pane_g3

0x0002,

0xabbf,	// (0x0000abbf) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bdb,	// (0x00001bdb) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bdb,	// (0x00001bdb) popup_fep_japan_predictive_window_t1

0x1bf5,	// (0x00001bf5) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf5,	// (0x00001bf5) popup_fep_japan_predictive_window_t2

0x1c28,	// (0x00001c28) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c28,	// (0x00001c28) popup_fep_japan_predictive_window_t3

0x0002,

0xabc6,	// (0x0000abc6) popup_fep_japan_predictive_window_t_ParamLimits

0xabc6,	// (0x0000abc6) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c5f,	// (0x00001c5f) listscroll_japin_cand_pane

0x1c67,	// (0x00001c67) popup_fep_japan_candidate_window_t1

0x1c75,	// (0x00001c75) candidate_pane_ParamLimits

0x1c75,	// (0x00001c75) candidate_pane

0x1c87,	// (0x00001c87) scroll_pane_cp30

0x1c8f,	// (0x00001c8f) list_single_popup_jap_candidate_pane_ParamLimits

0x1c8f,	// (0x00001c8f) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca4,	// (0x00001ca4) list_single_popup_jap_candidate_pane_t1

0x1cb3,	// (0x00001cb3) level_1_signal

0x1cc0,	// (0x00001cc0) level_2_signal

0x1ccd,	// (0x00001ccd) level_3_signal

0x1cda,	// (0x00001cda) level_4_signal

0x1ce7,	// (0x00001ce7) level_5_signal

0x1cf4,	// (0x00001cf4) level_6_signal

0x1d01,	// (0x00001d01) level_7_signal

0x1cb3,	// (0x00001cb3) level_1_battery

0x1cc0,	// (0x00001cc0) level_2_battery

0x1ccd,	// (0x00001ccd) level_3_battery

0x1cda,	// (0x00001cda) level_4_battery

0x1ce7,	// (0x00001ce7) level_5_battery

0x1cf4,	// (0x00001cf4) level_6_battery

0x1d01,	// (0x00001d01) level_7_battery

0x1d45,	// (0x00001d45) list_menu_pane_ParamLimits

0x1d45,	// (0x00001d45) list_menu_pane

0x1d5b,	// (0x00001d5b) scroll_pane_cp25_ParamLimits

0x1d5b,	// (0x00001d5b) scroll_pane_cp25

0x1d74,	// (0x00001d74) list_double2_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_large_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double2_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double2_pane_cp2

0x1d74,	// (0x00001d74) list_double_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double_large_graphic_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_large_graphic_pane_cp2

0x1d74,	// (0x00001d74) list_double_number_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_number_pane_cp2

0x1d74,	// (0x00001d74) list_double_pane_cp2_ParamLimits

0x1d74,	// (0x00001d74) list_double_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_2graphic_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_2graphic_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_graphic_heading_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_graphic_heading_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_graphic_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_graphic_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_heading_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_heading_pane_cp2

0x1db1,	// (0x00001db1) list_single_large_graphic_pane_cp2_ParamLimits

0x1db1,	// (0x00001db1) list_single_large_graphic_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_number_heading_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_number_heading_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_number_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_number_pane_cp2

0xbfa9,	// (0x0000bfa9) list_single_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_pane_cp2

0x1e82,	// (0x00001e82) bg_popup_sub_pane_cp22

0x1ea7,	// (0x00001ea7) popup_side_volume_key_window_g1

0x1ed1,	// (0x00001ed1) popup_side_volume_key_window_t1

0x1eed,	// (0x00001eed) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ef5,	// (0x00001ef5) fep_china_uni_candidate_pane_ParamLimits

0x1ef5,	// (0x00001ef5) fep_china_uni_candidate_pane

0x1f09,	// (0x00001f09) fep_china_uni_entry_pane

0x1f19,	// (0x00001f19) popup_fep_china_uni_window_g1

0x1f35,	// (0x00001f35) fep_china_uni_entry_pane_g1

0x1f3d,	// (0x00001f3d) fep_china_uni_entry_pane_g2

0x0001,

0xabf7,	// (0x0000abf7) fep_china_uni_entry_pane_g

0x1f45,	// (0x00001f45) fep_entry_item_pane

0x1f4f,	// (0x00001f4f) fep_candidate_item_pane

0x1f57,	// (0x00001f57) fep_china_uni_candidate_pane_g1

0x1f5f,	// (0x00001f5f) fep_china_uni_candidate_pane_g2

0x1f67,	// (0x00001f67) fep_china_uni_candidate_pane_g3

0x1f6f,	// (0x00001f6f) fep_china_uni_candidate_pane_g4

0x0003,

0xabfc,	// (0x0000abfc) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f77,	// (0x00001f77) fep_entry_item_pane_t1_ParamLimits

0x1f77,	// (0x00001f77) fep_entry_item_pane_t1

0x1f8d,	// (0x00001f8d) fep_candidate_item_pane_t1_ParamLimits

0x1f8d,	// (0x00001f8d) fep_candidate_item_pane_t1

0x1fa2,	// (0x00001fa2) fep_candidate_item_pane_t2_ParamLimits

0x1fa2,	// (0x00001fa2) fep_candidate_item_pane_t2

0x0001,

0xac05,	// (0x0000ac05) fep_candidate_item_pane_t_ParamLimits

0xac05,	// (0x0000ac05) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1fb4,	// (0x00001fb4) level_1_signal_lsc

0x1fbd,	// (0x00001fbd) level_2_signal_lsc

0x1fc6,	// (0x00001fc6) level_3_signal_lsc

0x1fcf,	// (0x00001fcf) level_4_signal_lsc

0x1fd8,	// (0x00001fd8) level_5_signal_lsc

0x1fe1,	// (0x00001fe1) level_6_signal_lsc

0x1fea,	// (0x00001fea) level_7_signal_lsc

0x1fea,	// (0x00001fea) level_1_battery_lsc

0x1ff3,	// (0x00001ff3) level_2_battery_lsc

0x1ffc,	// (0x00001ffc) level_3_battery_lsc

0x2005,	// (0x00002005) level_4_battery_lsc

0x200e,	// (0x0000200e) level_5_battery_lsc

0x2017,	// (0x00002017) level_6_battery_lsc

0x1fb4,	// (0x00001fb4) level_7_battery_lsc

0x2020,	// (0x00002020) scroll_handle_focus_pane_g1

0x2029,	// (0x00002029) scroll_handle_focus_pane_g2

0x2032,	// (0x00002032) scroll_handle_focus_pane_g3

0x0002,

0xac0a,	// (0x0000ac0a) scroll_handle_focus_pane_g

0xc037,	// (0x0000c037) list_single_2graphic_pane_g1_ParamLimits

0xc037,	// (0x0000c037) list_single_2graphic_pane_g1

0xb980,	// (0x0000b980) list_single_2graphic_pane_g2_ParamLimits

0xb980,	// (0x0000b980) list_single_2graphic_pane_g2

0x3522,	// (0x00003522) list_single_2graphic_pane_g3_ParamLimits

0x3522,	// (0x00003522) list_single_2graphic_pane_g3

0xc043,	// (0x0000c043) list_single_2graphic_pane_g4_ParamLimits

0xc043,	// (0x0000c043) list_single_2graphic_pane_g4

0x0003,

0xf463,	// (0x0000f463) list_single_2graphic_pane_g_ParamLimits

0xf463,	// (0x0000f463) list_single_2graphic_pane_g

0xc04f,	// (0x0000c04f) list_single_2graphic_pane_t1_ParamLimits

0xc04f,	// (0x0000c04f) list_single_2graphic_pane_t1

0xc07d,	// (0x0000c07d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc07d,	// (0x0000c07d) list_double2_graphic_large_graphic_pane_g1

0xb9bd,	// (0x0000b9bd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb9bd,	// (0x0000b9bd) list_double2_graphic_large_graphic_pane_g2

0xb9ce,	// (0x0000b9ce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb9ce,	// (0x0000b9ce) list_double2_graphic_large_graphic_pane_g3

0xc08f,	// (0x0000c08f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc08f,	// (0x0000c08f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf46c,	// (0x0000f46c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf46c,	// (0x0000f46c) list_double2_graphic_large_graphic_pane_g

0xc09b,	// (0x0000c09b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc09b,	// (0x0000c09b) list_double2_graphic_large_graphic_pane_t1

0xc0b1,	// (0x0000c0b1) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc0b1,	// (0x0000c0b1) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf475,	// (0x0000f475) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf475,	// (0x0000f475) list_double2_graphic_large_graphic_pane_t

0x234a,	// (0x0000234a) popup_fast_swap_window_ParamLimits

0x234a,	// (0x0000234a) popup_fast_swap_window

0x2366,	// (0x00002366) popup_side_volume_key_window

0x2382,	// (0x00002382) stacon_top_pane

0x238c,	// (0x0000238c) status_pane_ParamLimits

0x238c,	// (0x0000238c) status_pane

0x2382,	// (0x00002382) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20e5,	// (0x000020e5) bg_active_tab_pane_g1_cp1

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp1

0x20ee,	// (0x000020ee) bg_active_tab_pane_g3_cp1

0x20e5,	// (0x000020e5) bg_passive_tab_pane_g1_cp1

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp1

0x20ee,	// (0x000020ee) bg_passive_tab_pane_g3_cp1

0xc0c3,	// (0x0000c0c3) bg_active_tab_pane_g1_cp2

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp2

0xc0cc,	// (0x0000c0cc) bg_active_tab_pane_g3_cp2

0xc0c3,	// (0x0000c0c3) bg_passive_tab_pane_g1_cp2

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp2

0xc0cc,	// (0x0000c0cc) bg_passive_tab_pane_g3_cp2

0xc0d5,	// (0x0000c0d5) bg_active_tab_pane_g1_cp3

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp3

0xc0de,	// (0x0000c0de) bg_active_tab_pane_g3_cp3

0xc0d5,	// (0x0000c0d5) bg_passive_tab_pane_g1_cp3

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp3

0xc0de,	// (0x0000c0de) bg_passive_tab_pane_g3_cp3

0xc0e7,	// (0x0000c0e7) bg_active_tab_pane_g1_cp4

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp4

0xc0f0,	// (0x0000c0f0) bg_active_tab_pane_g3_cp4

0xc0e7,	// (0x0000c0e7) bg_passive_tab_pane_g1_cp4

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp4

0xc0f0,	// (0x0000c0f0) bg_passive_tab_pane_g3_cp4

0x229e,	// (0x0000229e) bg_active_tab_pane_g1_cp5

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp5

0x22a7,	// (0x000022a7) bg_active_tab_pane_g3_cp5

0x229e,	// (0x0000229e) bg_passive_tab_pane_g1_cp5

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp5

0x22a7,	// (0x000022a7) bg_passive_tab_pane_g3_cp5

0x5794,	// (0x00005794) list_set_graphic_pane_ParamLimits

0x5794,	// (0x00005794) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xc0f9,	// (0x0000c0f9) list_set_graphic_pane_g1_ParamLimits

0xc0f9,	// (0x0000c0f9) list_set_graphic_pane_g1

0xc105,	// (0x0000c105) list_set_graphic_pane_g2_ParamLimits

0xc105,	// (0x0000c105) list_set_graphic_pane_g2

0x0001,

0xf47a,	// (0x0000f47a) list_set_graphic_pane_g_ParamLimits

0xf47a,	// (0x0000f47a) list_set_graphic_pane_g

0x0009,

0xaf9b,	// (0x0000af9b) volume_small_pane_cp_g

0xc129,	// (0x0000c129) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc129,	// (0x0000c129) list_double2_large_graphic_pane_g1_cp2

0xc137,	// (0x0000c137) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc137,	// (0x0000c137) list_double2_large_graphic_pane_g2_cp2

0x231a,	// (0x0000231a) list_double2_large_graphic_pane_g3_cp2

0x2322,	// (0x00002322) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2322,	// (0x00002322) list_double2_large_graphic_pane_t1_cp2

0x2338,	// (0x00002338) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2338,	// (0x00002338) list_double2_large_graphic_pane_t2_cp2

0xd282,	// (0x0000d282) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd282,	// (0x0000d282) list_double_large_graphic_pane_g1_cp2

0xd295,	// (0x0000d295) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd295,	// (0x0000d295) list_double_large_graphic_pane_g2_cp2

0x24a8,	// (0x000024a8) list_double_large_graphic_pane_g3_cp2

0x4ad0,	// (0x00004ad0) list_double_large_graphic_pane_g4_cp

0x4ad8,	// (0x00004ad8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4ad8,	// (0x00004ad8) list_double_large_graphic_pane_t1_cp2

0x4aef,	// (0x00004aef) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4aef,	// (0x00004aef) list_double_large_graphic_pane_t2_cp2

0xc148,	// (0x0000c148) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc148,	// (0x0000c148) list_double2_graphic_pane_g1_cp2

0xc156,	// (0x0000c156) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc156,	// (0x0000c156) list_double2_graphic_pane_g2_cp2

0xc167,	// (0x0000c167) list_double2_graphic_pane_g3_cp2

0x23c3,	// (0x000023c3) list_double2_graphic_pane_t1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_double2_graphic_pane_t1_cp2

0x23d9,	// (0x000023d9) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23d9,	// (0x000023d9) list_double2_graphic_pane_t2_cp2

0x23eb,	// (0x000023eb) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23eb,	// (0x000023eb) list_single_number_heading_pane_g1_cp2

0x23f7,	// (0x000023f7) list_single_number_heading_pane_g2_cp2

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t1_cp2

0xc171,	// (0x0000c171) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc171,	// (0x0000c171) list_single_number_heading_pane_t2_cp2

0x2427,	// (0x00002427) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2427,	// (0x00002427) list_single_number_heading_pane_t3_cp2

0x23eb,	// (0x000023eb) list_single_heading_pane_g1_cp2_ParamLimits

0x23eb,	// (0x000023eb) list_single_heading_pane_g1_cp2

0x23f7,	// (0x000023f7) list_single_heading_pane_g2_cp2

0x23ff,	// (0x000023ff) list_single_heading_pane_t1_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_heading_pane_t1_cp2

0xd26e,	// (0x0000d26e) list_single_heading_pane_t2_cp2_ParamLimits

0xd26e,	// (0x0000d26e) list_single_heading_pane_t2_cp2

0x47fe,	// (0x000047fe) list_double_graphic_pane_g1_cp2_ParamLimits

0x47fe,	// (0x000047fe) list_double_graphic_pane_g1_cp2

0x480a,	// (0x0000480a) list_double_graphic_pane_g2_cp2_ParamLimits

0x480a,	// (0x0000480a) list_double_graphic_pane_g2_cp2

0x4819,	// (0x00004819) list_double_graphic_pane_g3_cp2

0x4821,	// (0x00004821) list_double_graphic_pane_t1_cp2_ParamLimits

0x4821,	// (0x00004821) list_double_graphic_pane_t1_cp2

0x4837,	// (0x00004837) list_double_graphic_pane_t2_cp2_ParamLimits

0x4837,	// (0x00004837) list_double_graphic_pane_t2_cp2

0x249c,	// (0x0000249c) list_double_number_pane_g1_cp2_ParamLimits

0x249c,	// (0x0000249c) list_double_number_pane_g1_cp2

0x24a8,	// (0x000024a8) list_double_number_pane_g2_cp2

0xd25a,	// (0x0000d25a) list_double_number_pane_t1_cp2_ParamLimits

0xd25a,	// (0x0000d25a) list_double_number_pane_t1_cp2

0x47d6,	// (0x000047d6) list_double_number_pane_t2_cp2_ParamLimits

0x47d6,	// (0x000047d6) list_double_number_pane_t2_cp2

0x47ec,	// (0x000047ec) list_double_number_pane_t3_cp2_ParamLimits

0x47ec,	// (0x000047ec) list_double_number_pane_t3_cp2

0xd197,	// (0x0000d197) list_single_graphic_pane_g1_cp2_ParamLimits

0xd197,	// (0x0000d197) list_single_graphic_pane_g1_cp2

0x2500,	// (0x00002500) list_single_graphic_pane_g2_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_graphic_pane_g2_cp2

0x250c,	// (0x0000250c) list_single_graphic_pane_g3_cp2

0x4670,	// (0x00004670) list_single_graphic_pane_t1_cp2_ParamLimits

0x4670,	// (0x00004670) list_single_graphic_pane_t1_cp2

0x2500,	// (0x00002500) list_single_number_pane_g1_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_number_pane_g1_cp2

0x250c,	// (0x0000250c) list_single_number_pane_g2_cp2

0x4670,	// (0x00004670) list_single_number_pane_t1_cp2_ParamLimits

0x4670,	// (0x00004670) list_single_number_pane_t1_cp2

0xd183,	// (0x0000d183) list_single_number_pane_t2_cp2_ParamLimits

0xd183,	// (0x0000d183) list_single_number_pane_t2_cp2

0xc137,	// (0x0000c137) list_double2_pane_g1_cp2_ParamLimits

0xc137,	// (0x0000c137) list_double2_pane_g1_cp2

0x231a,	// (0x0000231a) list_double2_pane_g2_cp2

0x2474,	// (0x00002474) list_double2_pane_t1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double2_pane_t1_cp2

0x248a,	// (0x0000248a) list_double2_pane_t2_cp2_ParamLimits

0x248a,	// (0x0000248a) list_double2_pane_t2_cp2

0x249c,	// (0x0000249c) list_double_pane_g1_cp2_ParamLimits

0x249c,	// (0x0000249c) list_double_pane_g1_cp2

0x24a8,	// (0x000024a8) list_double_pane_g2_cp2

0x24b0,	// (0x000024b0) list_double_pane_t1_cp2_ParamLimits

0x24b0,	// (0x000024b0) list_double_pane_t1_cp2

0x24c6,	// (0x000024c6) list_double_pane_t2_cp2_ParamLimits

0x24c6,	// (0x000024c6) list_double_pane_t2_cp2

0x24f0,	// (0x000024f0) list_single_pane_cp2_g3

0x2500,	// (0x00002500) list_single_pane_g1_cp2_ParamLimits

0x2500,	// (0x00002500) list_single_pane_g1_cp2

0x250c,	// (0x0000250c) list_single_pane_g2_cp2

0x2514,	// (0x00002514) list_single_pane_t1_cp2_ParamLimits

0x2514,	// (0x00002514) list_single_pane_t1_cp2

0xc19d,	// (0x0000c19d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc19d,	// (0x0000c19d) list_single_large_graphic_pane_g1_cp2

0x2538,	// (0x00002538) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2538,	// (0x00002538) list_single_large_graphic_pane_g2_cp2

0x2544,	// (0x00002544) list_single_large_graphic_pane_g3_cp2

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x254c,	// (0x0000254c) list_single_large_graphic_pane_g4_cp1

0x2566,	// (0x00002566) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2566,	// (0x00002566) list_single_large_graphic_pane_t1_cp2

0x44e9,	// (0x000044e9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44e9,	// (0x000044e9) list_single_graphic_heading_pane_g1_cp2

0xd024,	// (0x0000d024) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd024,	// (0x0000d024) list_single_graphic_heading_pane_g4_cp2

0x250c,	// (0x0000250c) list_single_graphic_heading_pane_g5_cp2

0x44f5,	// (0x000044f5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44f5,	// (0x000044f5) list_single_graphic_heading_pane_t1_cp2

0xd035,	// (0x0000d035) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd035,	// (0x0000d035) list_single_graphic_heading_pane_t2_cp2

0x44aa,	// (0x000044aa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x44aa,	// (0x000044aa) list_single_2graphic_pane_g1_cp2

0xd024,	// (0x0000d024) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd024,	// (0x0000d024) list_single_2graphic_pane_g2_cp2

0x250c,	// (0x0000250c) list_single_2graphic_pane_g3_cp2

0x44c7,	// (0x000044c7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x44c7,	// (0x000044c7) list_single_2graphic_pane_g4_cp2

0x44d3,	// (0x000044d3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x44d3,	// (0x000044d3) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4082,	// (0x00004082) list_highlight_pane_g1_cp1

0x408a,	// (0x0000408a) list_highlight_pane_g2_cp1

0x4092,	// (0x00004092) list_highlight_pane_g3_cp1

0x409a,	// (0x0000409a) list_highlight_pane_g4_cp1

0x40a2,	// (0x000040a2) list_highlight_pane_g5_cp1

0x40aa,	// (0x000040aa) list_highlight_pane_g6_cp1

0x40b2,	// (0x000040b2) list_highlight_pane_g7_cp1

0x40ba,	// (0x000040ba) list_highlight_pane_g8_cp1

0x40c2,	// (0x000040c2) list_highlight_pane_g9_cp1

0xcfea,	// (0x0000cfea) form_field_slider_pane_t3

0xcff8,	// (0x0000cff8) form_field_slider_pane_t4

0x3fbe,	// (0x00003fbe) slider_form_pane_ParamLimits

0x3fbe,	// (0x00003fbe) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4900,	// (0x00004900) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xadbd,	// (0x0000adbd) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x257c,	// (0x0000257c) text_digital

0x258b,	// (0x0000258b) text_primary

0x259a,	// (0x0000259a) text_primary_small

0x25a9,	// (0x000025a9) text_secondary

0x25b8,	// (0x000025b8) text_title

0x51f9,	// (0x000051f9) bg_passive_tab_pane_g1_cp3_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp3_srt

0x5202,	// (0x00005202) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x520b,	// (0x0000520b) tabs_4_active_pane_srt_g1

0xd530,	// (0x0000d530) tabs_4_active_pane_srt_t1_ParamLimits

0xd530,	// (0x0000d530) tabs_4_active_pane_srt_t1

0x51f9,	// (0x000051f9) bg_active_tab_pane_g1_cp3_copy1

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp3_copy1

0x5202,	// (0x00005202) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_srt

0x4dbc,	// (0x00004dbc) bg_passive_tab_pane_g1_cp4_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp4_srt

0x4dc5,	// (0x00004dc5) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xd31c,	// (0x0000d31c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd31c,	// (0x0000d31c) tabs_2_long_active_pane_srt_t1

0x4dbc,	// (0x00004dbc) bg_active_tab_pane_g1_cp4_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp4_srt

0x4dc5,	// (0x00004dc5) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_srt

0x229e,	// (0x0000229e) bg_passive_tab_pane_g1_cp5_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp5_srt

0x22a7,	// (0x000022a7) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xd306,	// (0x0000d306) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd306,	// (0x0000d306) tabs_3_long_active_pane_srt_t1

0x229e,	// (0x0000229e) bg_active_tab_pane_g1_cp5_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp5_srt

0x22a7,	// (0x000022a7) bg_active_tab_pane_g3_cp5_srt

0x4d9c,	// (0x00004d9c) navi_text_pane_srt_t1

0x4d94,	// (0x00004d94) navi_icon_pane_srt_g1

0x2828,	// (0x00002828) midp_editing_number_pane_srt

0x25c7,	// (0x000025c7) midp_ticker_pane_srt

0x2830,	// (0x00002830) midp_ticker_pane_srt_g1

0x2838,	// (0x00002838) midp_ticker_pane_srt_g2

0x0001,

0xac47,	// (0x0000ac47) midp_ticker_pane_srt_g

0x2840,	// (0x00002840) midp_ticker_pane_srt_t1

0x4d85,	// (0x00004d85) midp_editing_number_pane_t1_copy1

0x2b34,	// (0x00002b34) listscroll_midp_pane

0x2b34,	// (0x00002b34) midp_form_pane

0x2631,	// (0x00002631) midp_info_popup_window_ParamLimits

0x2631,	// (0x00002631) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3cba,	// (0x00003cba) listscroll_midp_info_pane_ParamLimits

0x3cba,	// (0x00003cba) listscroll_midp_info_pane

0x3ca2,	// (0x00003ca2) listscroll_form_midp_pane_ParamLimits

0x3ca2,	// (0x00003ca2) listscroll_form_midp_pane

0x3cae,	// (0x00003cae) scroll_bar_cp050

0xcfde,	// (0x0000cfde) list_midp_pane

0x5f96,	// (0x00005f96) signal_pane_g2_cp

0x3bbc,	// (0x00003bbc) listscroll_midp_info_pane_t1_ParamLimits

0x3bbc,	// (0x00003bbc) listscroll_midp_info_pane_t1

0x3bd4,	// (0x00003bd4) listscroll_midp_info_pane_t2_ParamLimits

0x3bd4,	// (0x00003bd4) listscroll_midp_info_pane_t2

0x3c12,	// (0x00003c12) listscroll_midp_info_pane_t3_ParamLimits

0x3c12,	// (0x00003c12) listscroll_midp_info_pane_t3

0x3c4c,	// (0x00003c4c) listscroll_midp_info_pane_t4_ParamLimits

0x3c4c,	// (0x00003c4c) listscroll_midp_info_pane_t4

0x0003,

0xacf8,	// (0x0000acf8) listscroll_midp_info_pane_t_ParamLimits

0xacf8,	// (0x0000acf8) listscroll_midp_info_pane_t

0x166e,	// (0x0000166e) scroll_pane_cp21

0x3b5a,	// (0x00003b5a) form_midp_field_choice_group_pane

0x3b63,	// (0x00003b63) form_midp_field_text_pane

0x3ba2,	// (0x00003ba2) form_midp_field_time_pane

0x3baa,	// (0x00003baa) form_midp_gauge_slider_pane

0x3bb3,	// (0x00003bb3) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcfc8,	// (0x0000cfc8) list_single_midp_pane_ParamLimits

0xcfc8,	// (0x0000cfc8) list_single_midp_pane

0xcfa6,	// (0x0000cfa6) form_midp_field_text_pane_t1

0x3816,	// (0x00003816) input_focus_pane_cp050

0x3b1a,	// (0x00003b1a) list_midp_form_text_pane

0x3ab2,	// (0x00003ab2) form_midp_field_choice_group_pane_t1

0x3ac0,	// (0x00003ac0) input_focus_pane_cp051

0x3ad4,	// (0x00003ad4) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a96,	// (0x00003a96) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3aa4,	// (0x00003aa4) form_midp_field_time_pane_t2

0x0001,

0x26df,	// (0x000026df) aid_navinavi_width_2_pane

0xacf3,	// (0x0000acf3) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a56,	// (0x00003a56) form_midp_gauge_slider_pane_t1

0x3a64,	// (0x00003a64) form_midp_gauge_slider_pane_t2

0xcf8a,	// (0x0000cf8a) form_midp_gauge_slider_pane_t3

0xcf98,	// (0x0000cf98) form_midp_gauge_slider_pane_t4

0x0003,

0xf4bb,	// (0x0000f4bb) form_midp_gauge_slider_pane_t

0x3a8e,	// (0x00003a8e) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x3a23,	// (0x00003a23) form_midp_gauge_wait_pane_t1_ParamLimits

0x3a23,	// (0x00003a23) form_midp_gauge_wait_pane_t1

0x3a35,	// (0x00003a35) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a35,	// (0x00003a35) form_midp_gauge_wait_pane_t2

0x0001,

0xace5,	// (0x0000ace5) form_midp_gauge_wait_pane_t_ParamLimits

0xace5,	// (0x0000ace5) form_midp_gauge_wait_pane_t

0x3a47,	// (0x00003a47) form_midp_wait_pane_ParamLimits

0x3a47,	// (0x00003a47) form_midp_wait_pane

0x39ed,	// (0x000039ed) form_midp_image_pane_g1

0x39f6,	// (0x000039f6) form_midp_image_pane_t1

0x3a05,	// (0x00003a05) form_midp_image_pane_t2

0x3a14,	// (0x00003a14) form_midp_image_pane_t3

0x0002,

0xacde,	// (0x0000acde) form_midp_image_pane_t

0x39d5,	// (0x000039d5) list_single_midp_pane_g1

0x39de,	// (0x000039de) list_single_midp_pane_t1

0xcf75,	// (0x0000cf75) list_midp_form_item_pane_ParamLimits

0xcf75,	// (0x0000cf75) list_midp_form_item_pane

0x2687,	// (0x00002687) list_midp_form_item_pane_t1

0x2696,	// (0x00002696) midp_ticker_pane_g1

0x26a2,	// (0x000026a2) midp_ticker_pane_g2

0x0001,

0xac2d,	// (0x0000ac2d) midp_ticker_pane_g

0x26ae,	// (0x000026ae) midp_ticker_pane_t1

0x5081,	// (0x00005081) midp_editing_number_pane_t1

0x505f,	// (0x0000505f) midp_editing_number_pane

0x506e,	// (0x0000506e) midp_ticker_pane

0x4d4d,	// (0x00004d4d) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d55,	// (0x00004d55) listscroll_ai_message_pane

0x4cd7,	// (0x00004cd7) ai_message_heading_pane_g1_ParamLimits

0x4cd7,	// (0x00004cd7) ai_message_heading_pane_g1

0x4ce3,	// (0x00004ce3) ai_message_heading_pane_g2_ParamLimits

0x4ce3,	// (0x00004ce3) ai_message_heading_pane_g2

0x4cef,	// (0x00004cef) ai_message_heading_pane_g3_ParamLimits

0x4cef,	// (0x00004cef) ai_message_heading_pane_g3

0x4cfb,	// (0x00004cfb) ai_message_heading_pane_g4_ParamLimits

0x4cfb,	// (0x00004cfb) ai_message_heading_pane_g4

0x0003,

0xae1f,	// (0x0000ae1f) ai_message_heading_pane_g_ParamLimits

0xae1f,	// (0x0000ae1f) ai_message_heading_pane_g

0x4d07,	// (0x00004d07) ai_message_heading_pane_t1_ParamLimits

0x4d07,	// (0x00004d07) ai_message_heading_pane_t1

0x4d21,	// (0x00004d21) ai_message_heading_pane_t2_ParamLimits

0x4d21,	// (0x00004d21) ai_message_heading_pane_t2

0x0001,

0xae28,	// (0x0000ae28) ai_message_heading_pane_t_ParamLimits

0xae28,	// (0x0000ae28) ai_message_heading_pane_t

0x4d33,	// (0x00004d33) bg_popup_heading_pane_cp1_ParamLimits

0x4d33,	// (0x00004d33) bg_popup_heading_pane_cp1

0x4cc5,	// (0x00004cc5) list_ai_message_pane_ParamLimits

0x4cc5,	// (0x00004cc5) list_ai_message_pane

0x166e,	// (0x0000166e) scroll_pane_cp10

0x4c11,	// (0x00004c11) list_ai_message_pane_g1

0x4c19,	// (0x00004c19) list_ai_message_pane_g2

0x0001,

0xadfc,	// (0x0000adfc) list_ai_message_pane_g

0x4c21,	// (0x00004c21) list_ai_message_pane_t1_ParamLimits

0x4c21,	// (0x00004c21) list_ai_message_pane_t1

0x4c36,	// (0x00004c36) list_ai_message_pane_t2_ParamLimits

0x4c36,	// (0x00004c36) list_ai_message_pane_t2

0x4c4b,	// (0x00004c4b) list_ai_message_pane_t3_ParamLimits

0x4c4b,	// (0x00004c4b) list_ai_message_pane_t3

0x4c60,	// (0x00004c60) list_ai_message_pane_t4_ParamLimits

0x4c60,	// (0x00004c60) list_ai_message_pane_t4

0x0003,

0xae01,	// (0x0000ae01) list_ai_message_pane_t_ParamLimits

0xae01,	// (0x0000ae01) list_ai_message_pane_t

0xd2d3,	// (0x0000d2d3) cell_ai_soft_ind_pane_ParamLimits

0xd2d3,	// (0x0000d2d3) cell_ai_soft_ind_pane

0x26c0,	// (0x000026c0) cell_ai_soft_ind_pane_g1_ParamLimits

0x26c0,	// (0x000026c0) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26cd,	// (0x000026cd) text_secondary_cp56_ParamLimits

0x26cd,	// (0x000026cd) text_secondary_cp56

0x4bd1,	// (0x00004bd1) example_general_pane_ParamLimits

0x4bd1,	// (0x00004bd1) example_general_pane

0x4bdd,	// (0x00004bdd) example_parent_pane_g1_ParamLimits

0x4bdd,	// (0x00004bdd) example_parent_pane_g1

0x4be9,	// (0x00004be9) example_parent_pane_t1_ParamLimits

0x4be9,	// (0x00004be9) example_parent_pane_t1

0xc7c6,	// (0x0000c7c6) popup_preview_text_window_ParamLimits

0xc7c6,	// (0x0000c7c6) popup_preview_text_window

0x24f8,	// (0x000024f8) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x4908,	// (0x00004908) popup_preview_text_window_t1_ParamLimits

0x4908,	// (0x00004908) popup_preview_text_window_t1

0x4926,	// (0x00004926) popup_preview_text_window_t2_ParamLimits

0x4926,	// (0x00004926) popup_preview_text_window_t2

0x496f,	// (0x0000496f) popup_preview_text_window_t3_ParamLimits

0x496f,	// (0x0000496f) popup_preview_text_window_t3

0x49b4,	// (0x000049b4) popup_preview_text_window_t4_ParamLimits

0x49b4,	// (0x000049b4) popup_preview_text_window_t4

0x0004,

0xadd0,	// (0x0000add0) popup_preview_text_window_t_ParamLimits

0xadd0,	// (0x0000add0) popup_preview_text_window_t

0x4a32,	// (0x00004a32) scroll_pane_cp11

0x367e,	// (0x0000367e) bg_popup_preview_window_pane_g1

0x48c8,	// (0x000048c8) bg_popup_preview_window_pane_g2

0x48d0,	// (0x000048d0) bg_popup_preview_window_pane_g3

0x48d8,	// (0x000048d8) bg_popup_preview_window_pane_g4

0x48e0,	// (0x000048e0) bg_popup_preview_window_pane_g5

0x48e8,	// (0x000048e8) bg_popup_preview_window_pane_g6

0x48f0,	// (0x000048f0) bg_popup_preview_window_pane_g7

0x48f8,	// (0x000048f8) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc742,	// (0x0000c742) popup_midp_note_alarm_window_ParamLimits

0xc742,	// (0x0000c742) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xbd2f,	// (0x0000bd2f) form_field_data_pane_g1

0xbd39,	// (0x0000bd39) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbe75,	// (0x0000be75) input_popup_find_pane_g1_ParamLimits

0xbe75,	// (0x0000be75) input_popup_find_pane_g1

0x199e,	// (0x0000199e) aid_navi_side_left_pane

0x19b3,	// (0x000019b3) aid_navi_side_right_pane

0x417d,	// (0x0000417d) bg_popup_window_pane_cp30_ParamLimits

0x417d,	// (0x0000417d) bg_popup_window_pane_cp30

0x41f7,	// (0x000041f7) popup_midp_note_alarm_window_g1_ParamLimits

0x41f7,	// (0x000041f7) popup_midp_note_alarm_window_g1

0x4227,	// (0x00004227) popup_midp_note_alarm_window_t1_ParamLimits

0x4227,	// (0x00004227) popup_midp_note_alarm_window_t1

0x42c8,	// (0x000042c8) popup_midp_note_alarm_window_t2_ParamLimits

0x42c8,	// (0x000042c8) popup_midp_note_alarm_window_t2

0x4376,	// (0x00004376) popup_midp_note_alarm_window_t3_ParamLimits

0x4376,	// (0x00004376) popup_midp_note_alarm_window_t3

0x43a8,	// (0x000043a8) popup_midp_note_alarm_window_t4_ParamLimits

0x43a8,	// (0x000043a8) popup_midp_note_alarm_window_t4

0x43ce,	// (0x000043ce) popup_midp_note_alarm_window_t5_ParamLimits

0x43ce,	// (0x000043ce) popup_midp_note_alarm_window_t5

0x000a,

0xad6d,	// (0x0000ad6d) popup_midp_note_alarm_window_t_ParamLimits

0xad6d,	// (0x0000ad6d) popup_midp_note_alarm_window_t

0x447a,	// (0x0000447a) wait_bar_pane_cp1_ParamLimits

0x447a,	// (0x0000447a) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e63,	// (0x00003e63) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xbd53,	// (0x0000bd53) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x5285,	// (0x00005285) aid_size_cell_graphic_pane

0xbdd2,	// (0x0000bdd2) data_form_pane_t1_ParamLimits

0xd487,	// (0x0000d487) data_form_wide_pane_t1_ParamLimits

0xcb8e,	// (0x0000cb8e) bg_status_flat_pane

0xb5c5,	// (0x0000b5c5) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf38c,	// (0x0000f38c) title_pane_t_ParamLimits

0x1cb3,	// (0x00001cb3) level_1_signal_ParamLimits

0x1cc0,	// (0x00001cc0) level_2_signal_ParamLimits

0x1ccd,	// (0x00001ccd) level_3_signal_ParamLimits

0x1cda,	// (0x00001cda) level_4_signal_ParamLimits

0x1ce7,	// (0x00001ce7) level_5_signal_ParamLimits

0x1cf4,	// (0x00001cf4) level_6_signal_ParamLimits

0x1d01,	// (0x00001d01) level_7_signal_ParamLimits

0x1cb3,	// (0x00001cb3) level_1_battery_ParamLimits

0x1cc0,	// (0x00001cc0) level_2_battery_ParamLimits

0x1ccd,	// (0x00001ccd) level_3_battery_ParamLimits

0x1cda,	// (0x00001cda) level_4_battery_ParamLimits

0x1ce7,	// (0x00001ce7) level_5_battery_ParamLimits

0x1cf4,	// (0x00001cf4) level_6_battery_ParamLimits

0x1d01,	// (0x00001d01) level_7_battery_ParamLimits

0x4082,	// (0x00004082) bg_status_flat_pane_g1

0x408a,	// (0x0000408a) bg_status_flat_pane_g2

0x4092,	// (0x00004092) bg_status_flat_pane_g3

0x409a,	// (0x0000409a) bg_status_flat_pane_g4

0x40a2,	// (0x000040a2) bg_status_flat_pane_g5

0x40aa,	// (0x000040aa) bg_status_flat_pane_g6

0x40b2,	// (0x000040b2) bg_status_flat_pane_g7

0xb659,	// (0x0000b659) tabs_3_active_pane_t1_ParamLimits

0xb659,	// (0x0000b659) tabs_3_passive_pane_t1_ParamLimits

0xb673,	// (0x0000b673) tabs_4_active_pane_t1_ParamLimits

0xb673,	// (0x0000b673) tabs_4_1_passive_pane_t1_ParamLimits

0xbe8b,	// (0x0000be8b) tabs_2_active_pane_t1_ParamLimits

0xbe8b,	// (0x0000be8b) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbe9d,	// (0x0000be9d) tabs_2_long_active_pane_t1_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp4_ParamLimits

0x373b,	// (0x0000373b) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbeb0,	// (0x0000beb0) tabs_3_long_active_pane_t1_ParamLimits

0x2b34,	// (0x00002b34) bg_passive_tab_pane_cp5_ParamLimits

0x373b,	// (0x0000373b) list_single_midp_graphic_pane_t1

0xcb8e,	// (0x0000cb8e) bg_status_flat_pane_ParamLimits

0x326d,	// (0x0000326d) indicator_pane_cp2_ParamLimits

0x326d,	// (0x0000326d) indicator_pane_cp2

0xcd06,	// (0x0000cd06) navi_pane_srt_ParamLimits

0xcd06,	// (0x0000cd06) navi_pane_srt

0x33b6,	// (0x000033b6) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x25c7,	// (0x000025c7) copy_highlight_pane

0x25c7,	// (0x000025c7) cursor_graphics_pane

0x25c7,	// (0x000025c7) graphic_within_text_pane

0x25c7,	// (0x000025c7) link_highlight_pane

0x49f5,	// (0x000049f5) popup_preview_text_window_t5_ParamLimits

0x49f5,	// (0x000049f5) popup_preview_text_window_t5

0x26e7,	// (0x000026e7) cursor_digital_pane

0x26e7,	// (0x000026e7) cursor_primary_pane

0x26f8,	// (0x000026f8) cursor_primary_small_pane

0x2700,	// (0x00002700) cursor_secondary_pane

0x2708,	// (0x00002708) cursor_title_pane

0x26e7,	// (0x000026e7) link_highlight_digital_pane

0x26ef,	// (0x000026ef) link_highlight_primary_pane

0x26f8,	// (0x000026f8) link_highlight_primary_small_pane

0x2700,	// (0x00002700) link_highlight_secondary_pane

0x2708,	// (0x00002708) link_highlight_title_pane

0x26e7,	// (0x000026e7) copy_highlight_digital_pane

0x26e7,	// (0x000026e7) copy_highlight_primary_pane

0x26f8,	// (0x000026f8) copy_highlight_primary_small_pane

0x2700,	// (0x00002700) copy_highlight_secondary_pane

0x2708,	// (0x00002708) copy_highlight_title_pane

0x2700,	// (0x00002700) graphic_text_digital_pane

0x4120,	// (0x00004120) graphic_text_primary_pane

0x4129,	// (0x00004129) graphic_text_primary_small_pane

0x26f8,	// (0x000026f8) graphic_text_secondary_pane

0x26e7,	// (0x000026e7) graphic_text_title_pane

0xc242,	// (0x0000c242) cursor_primary_pane_g1

0x4112,	// (0x00004112) cursor_text_primary_t1

0xd01a,	// (0x0000d01a) cursor_primary_small_pane_g1

0x4104,	// (0x00004104) cursor_text_primary_small_t1

0xd010,	// (0x0000d010) cursor_primary_small_pane_g1_copy1

0x40ec,	// (0x000040ec) cursor_text_primary_small_t1_copy1

0x40ca,	// (0x000040ca) cursor_text_title_t1

0xd006,	// (0x0000d006) cursor_title_pane_g1

0xc242,	// (0x0000c242) cursor_digital_pane_g1

0x271a,	// (0x0000271a) cursor_text_digital_t1

0x273f,	// (0x0000273f) link_highlight_primary_pane_g1

0x4073,	// (0x00004073) link_highlight_primary_pane_t1

0x2728,	// (0x00002728) link_highlight_primary_small_pane_g1

0x2730,	// (0x00002730) link_highlight_primary_small_pane_t1

0x273f,	// (0x0000273f) link_highlight_secondary_pane_g1

0x2747,	// (0x00002747) link_highlight_secondary_pane_t1

0x3fe7,	// (0x00003fe7) link_highlight_title_pane_g1

0x3fef,	// (0x00003fef) link_highlight_title_pane_t1

0x3fd0,	// (0x00003fd0) link_highlight_digital_pane_g1

0x3fd8,	// (0x00003fd8) link_highlight_digital_pane_t1

0x3ea8,	// (0x00003ea8) copy_highlight_primary_pane_g1

0x3eb0,	// (0x00003eb0) copy_highlight_primary_pane_t1

0x3e82,	// (0x00003e82) copy_highlight_primary_small_pane_g1

0x3e99,	// (0x00003e99) copy_highlight_primary_small_pane_t1

0x2756,	// (0x00002756) copy_highlight_secondary_pane_g1

0x275e,	// (0x0000275e) copy_highlight_secondary_pane_t1

0x3e82,	// (0x00003e82) copy_highlight_title_pane_g1

0x3e8a,	// (0x00003e8a) copy_highlight_title_pane_t1

0x3ea8,	// (0x00003ea8) copy_highlight_digital_pane_g1

0x5507,	// (0x00005507) copy_highlight_digital_pane_t1

0x545b,	// (0x0000545b) graphic_text_primary_pane_g1

0x54eb,	// (0x000054eb) graphic_text_primary_pane_t1

0x54f9,	// (0x000054f9) graphic_text_primary_pane_t2

0x0001,

0xae9c,	// (0x0000ae9c) graphic_text_primary_pane_t

0x54c7,	// (0x000054c7) graphic_text_primary_small_pane_g1

0x54cf,	// (0x000054cf) graphic_text_primary_small_pane_t1

0x54dd,	// (0x000054dd) graphic_text_primary_small_pane_t2

0x0001,

0xae97,	// (0x0000ae97) graphic_text_primary_small_pane_t

0x54a3,	// (0x000054a3) graphic_text_secondary_pane_g1

0x54ab,	// (0x000054ab) graphic_text_secondary_pane_t1

0x54b9,	// (0x000054b9) graphic_text_secondary_pane_t2

0x0001,

0xae92,	// (0x0000ae92) graphic_text_secondary_pane_t

0x547f,	// (0x0000547f) graphic_text_title_pane_g1

0x5487,	// (0x00005487) graphic_text_title_pane_t1

0x5495,	// (0x00005495) graphic_text_title_pane_t2

0x0001,

0xae8d,	// (0x0000ae8d) graphic_text_title_pane_t

0x545b,	// (0x0000545b) graphic_text_digital_pane_g1

0x5463,	// (0x00005463) graphic_text_digital_pane_t1

0x5471,	// (0x00005471) graphic_text_digital_pane_t2

0x0001,

0xae88,	// (0x0000ae88) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x5426,	// (0x00005426) navi_navi_icon_text_pane_srt

0x542e,	// (0x0000542e) navi_navi_pane_srt_g1_ParamLimits

0x542e,	// (0x0000542e) navi_navi_pane_srt_g1

0x5440,	// (0x00005440) navi_navi_pane_srt_g2_ParamLimits

0x5440,	// (0x00005440) navi_navi_pane_srt_g2

0x0001,

0xae83,	// (0x0000ae83) navi_navi_pane_srt_g_ParamLimits

0xae83,	// (0x0000ae83) navi_navi_pane_srt_g

0x5452,	// (0x00005452) navi_navi_tabs_pane_srt

0x5426,	// (0x00005426) navi_navi_text_pane_srt

0x5426,	// (0x00005426) navi_navi_volume_pane_srt

0x5417,	// (0x00005417) navi_navi_text_pane_srt_t1

0x53f2,	// (0x000053f2) navi_navi_volume_pane_srt_g1

0x53fa,	// (0x000053fa) volume_small_pane_srt_ParamLimits

0x53fa,	// (0x000053fa) volume_small_pane_srt

0x276d,	// (0x0000276d) volume_small_pane_srt_g1_ParamLimits

0x276d,	// (0x0000276d) volume_small_pane_srt_g1

0x277d,	// (0x0000277d) volume_small_pane_srt_g2_ParamLimits

0x277d,	// (0x0000277d) volume_small_pane_srt_g2

0x278e,	// (0x0000278e) volume_small_pane_srt_g3_ParamLimits

0x278e,	// (0x0000278e) volume_small_pane_srt_g3

0x279f,	// (0x0000279f) volume_small_pane_srt_g4_ParamLimits

0x279f,	// (0x0000279f) volume_small_pane_srt_g4

0x27b0,	// (0x000027b0) volume_small_pane_srt_g5_ParamLimits

0x27b0,	// (0x000027b0) volume_small_pane_srt_g5

0x27c1,	// (0x000027c1) volume_small_pane_srt_g6_ParamLimits

0x27c1,	// (0x000027c1) volume_small_pane_srt_g6

0x27d2,	// (0x000027d2) volume_small_pane_srt_g7_ParamLimits

0x27d2,	// (0x000027d2) volume_small_pane_srt_g7

0x27e3,	// (0x000027e3) volume_small_pane_srt_g8_ParamLimits

0x27e3,	// (0x000027e3) volume_small_pane_srt_g8

0x27f4,	// (0x000027f4) volume_small_pane_srt_g9_ParamLimits

0x27f4,	// (0x000027f4) volume_small_pane_srt_g9

0x2805,	// (0x00002805) volume_small_pane_srt_g10_ParamLimits

0x2805,	// (0x00002805) volume_small_pane_srt_g10

0x0009,

0xac32,	// (0x0000ac32) volume_small_pane_srt_g_ParamLimits

0xac32,	// (0x0000ac32) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x53e0,	// (0x000053e0) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53e0,	// (0x000053e0) navi_navi_icon_text_pane_srt_t1

0x4120,	// (0x00004120) navi_tabs_2_long_pane_srt

0x4120,	// (0x00004120) navi_tabs_2_pane_srt

0x4120,	// (0x00004120) navi_tabs_3_long_pane_srt

0x4120,	// (0x00004120) navi_tabs_3_pane_srt

0x4120,	// (0x00004120) navi_tabs_4_pane_srt

0x53b8,	// (0x000053b8) tabs_2_active_pane_srt_ParamLimits

0x53b8,	// (0x000053b8) tabs_2_active_pane_srt

0x53c8,	// (0x000053c8) tabs_2_passive_pane_srt_ParamLimits

0x53c8,	// (0x000053c8) tabs_2_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp1_srt

0x538c,	// (0x0000538c) bg_passive_tab_pane_g1_cp1_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp1_srt

0x5395,	// (0x00005395) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x539e,	// (0x0000539e) tabs_2_active_pane_srt_g1

0xd5ad,	// (0x0000d5ad) tabs_2_active_pane_srt_t1_ParamLimits

0xd5ad,	// (0x0000d5ad) tabs_2_active_pane_srt_t1

0x538c,	// (0x0000538c) bg_active_tab_pane_g1_cp1_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp1_srt

0x5395,	// (0x00005395) bg_active_tab_pane_g3_cp1_srt

0x5359,	// (0x00005359) tabs_3_active_pane_srt_ParamLimits

0x5359,	// (0x00005359) tabs_3_active_pane_srt

0x536a,	// (0x0000536a) tabs_3_passive_pane_cp_srt_ParamLimits

0x536a,	// (0x0000536a) tabs_3_passive_pane_cp_srt

0x537b,	// (0x0000537b) tabs_3_passive_pane_srt_ParamLimits

0x537b,	// (0x0000537b) tabs_3_passive_pane_srt

0x3816,	// (0x00003816) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3816,	// (0x00003816) bg_passive_tab_pane_cp2_srt

0x2816,	// (0x00002816) bg_passive_tab_pane_g1_cp2_srt

0x20d3,	// (0x000020d3) bg_passive_tab_pane_g2_cp2_srt

0x281f,	// (0x0000281f) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x533f,	// (0x0000533f) tabs_3_active_pane_srt_g1

0xd597,	// (0x0000d597) tabs_3_active_pane_srt_t1_ParamLimits

0xd597,	// (0x0000d597) tabs_3_active_pane_srt_t1

0x2816,	// (0x00002816) bg_active_tab_pane_g1_cp2_srt

0x20d3,	// (0x000020d3) bg_active_tab_pane_g2_cp2_srt

0x281f,	// (0x0000281f) bg_active_tab_pane_g3_cp2_srt

0x52f7,	// (0x000052f7) tabs_4_active_pane_srt_ParamLimits

0x52f7,	// (0x000052f7) tabs_4_active_pane_srt

0x5309,	// (0x00005309) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5309,	// (0x00005309) tabs_4_passive_pane_cp2_srt

0x2aba,	// (0x00002aba) aid_size_cell_toolbar

0x4ea5,	// (0x00004ea5) main_idle_act_pane_ParamLimits

0x2cdd,	// (0x00002cdd) popup_large_graphic_colour_window_ParamLimits

0xca52,	// (0x0000ca52) popup_toolbar_window_ParamLimits

0xca52,	// (0x0000ca52) popup_toolbar_window

0x50ab,	// (0x000050ab) list_single_graphic_2heading_pane_ParamLimits

0x50ab,	// (0x000050ab) list_single_graphic_2heading_pane

0x1a2a,	// (0x00001a2a) aid_size_cell_apps_grid_lsc_pane

0x1a3c,	// (0x00001a3c) aid_size_cell_apps_grid_prt_pane

0x2b34,	// (0x00002b34) bg_wml_button_pane_cp1_ParamLimits

0x2b34,	// (0x00002b34) bg_wml_button_pane_cp1

0xcfa6,	// (0x0000cfa6) form_midp_field_text_pane_t1_ParamLimits

0x3816,	// (0x00003816) input_focus_pane_cp050_ParamLimits

0x3b1a,	// (0x00003b1a) list_midp_form_text_pane_ParamLimits

0x3ac0,	// (0x00003ac0) input_focus_pane_cp051_ParamLimits

0x3ad4,	// (0x00003ad4) list_midp_choice_pane_ParamLimits

0xcf43,	// (0x0000cf43) list_single_2graphic_pane_cp3_ParamLimits

0xcf43,	// (0x0000cf43) list_single_2graphic_pane_cp3

0xcf56,	// (0x0000cf56) list_single_midp_graphic_pane_ParamLimits

0xcf56,	// (0x0000cf56) list_single_midp_graphic_pane

0x350a,	// (0x0000350a) list_single_graphic_2heading_pane_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_2heading_pane_g1

0x3516,	// (0x00003516) list_single_graphic_2heading_pane_g4_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_2heading_pane_g4

0x3522,	// (0x00003522) list_single_graphic_2heading_pane_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_2heading_pane_g5

0x0002,

0xac85,	// (0x0000ac85) list_single_graphic_2heading_pane_g_ParamLimits

0xac85,	// (0x0000ac85) list_single_graphic_2heading_pane_g

0x352e,	// (0x0000352e) list_single_graphic_2heading_pane_t1_ParamLimits

0x352e,	// (0x0000352e) list_single_graphic_2heading_pane_t1

0x3542,	// (0x00003542) list_single_graphic_2heading_pane_t2_ParamLimits

0x3542,	// (0x00003542) list_single_graphic_2heading_pane_t2

0x355e,	// (0x0000355e) list_single_graphic_2heading_pane_t3_ParamLimits

0x355e,	// (0x0000355e) list_single_graphic_2heading_pane_t3

0x0002,

0xac8c,	// (0x0000ac8c) list_single_graphic_2heading_pane_t_ParamLimits

0xac8c,	// (0x0000ac8c) list_single_graphic_2heading_pane_t

0x3576,	// (0x00003576) bg_popup_sub_pane_cp2

0x35a0,	// (0x000035a0) grid_toobar_pane

0x35dc,	// (0x000035dc) cell_toolbar_pane_ParamLimits

0x35dc,	// (0x000035dc) cell_toolbar_pane

0x3622,	// (0x00003622) cell_toolbar_pane_g1_ParamLimits

0x3622,	// (0x00003622) cell_toolbar_pane_g1

0x3636,	// (0x00003636) cell_toolbar_pane_g2_ParamLimits

0x3636,	// (0x00003636) cell_toolbar_pane_g2

0x0001,

0xac93,	// (0x0000ac93) cell_toolbar_pane_g_ParamLimits

0xac93,	// (0x0000ac93) cell_toolbar_pane_g

0x3658,	// (0x00003658) grid_highlight_pane_cp2_ParamLimits

0x3658,	// (0x00003658) grid_highlight_pane_cp2

0x3672,	// (0x00003672) toolbar_button_pane

0x367e,	// (0x0000367e) toolbar_button_pane_g1

0x3686,	// (0x00003686) toolbar_button_pane_g2

0x368e,	// (0x0000368e) toolbar_button_pane_g3

0x3696,	// (0x00003696) toolbar_button_pane_g4

0x369e,	// (0x0000369e) toolbar_button_pane_g5

0x36a6,	// (0x000036a6) toolbar_button_pane_g6

0x36ae,	// (0x000036ae) toolbar_button_pane_g7

0x36b6,	// (0x000036b6) toolbar_button_pane_g8

0x36be,	// (0x000036be) toolbar_button_pane_g9

0x0009,

0xac98,	// (0x0000ac98) toolbar_button_pane_g

0x36ce,	// (0x000036ce) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36ce,	// (0x000036ce) list_single_2graphic_pane_g1_cp3

0xcea5,	// (0x0000cea5) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcea5,	// (0x0000cea5) list_single_2graphic_pane_g2_cp3

0x36eb,	// (0x000036eb) list_single_2graphic_pane_g3_cp3

0x2096,	// (0x00002096) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2096,	// (0x00002096) list_single_2graphic_pane_g4_cp3

0x36f3,	// (0x000036f3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36f3,	// (0x000036f3) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2ac2,	// (0x00002ac2) aid_zoom_text_primary

0x2aca,	// (0x00002aca) aid_zoom_text_secondary

0x28d3,	// (0x000028d3) status_small_pane_g7_ParamLimits

0x28d3,	// (0x000028d3) status_small_pane_g7

0x28f6,	// (0x000028f6) status_small_pane_t1_ParamLimits

0xb5a1,	// (0x0000b5a1) title_pane_g2

0x0003,

0xf383,	// (0x0000f383) title_pane_g

0xb829,	// (0x0000b829) aid_size_cell_colour_1_pane_ParamLimits

0xb829,	// (0x0000b829) aid_size_cell_colour_1_pane

0xb83d,	// (0x0000b83d) aid_size_cell_colour_2_pane_ParamLimits

0xb83d,	// (0x0000b83d) aid_size_cell_colour_2_pane

0xb851,	// (0x0000b851) aid_size_cell_colour_3_pane_ParamLimits

0xb851,	// (0x0000b851) aid_size_cell_colour_3_pane

0xb865,	// (0x0000b865) aid_size_cell_colour_4_pane_ParamLimits

0xb865,	// (0x0000b865) aid_size_cell_colour_4_pane

0x18a5,	// (0x000018a5) title_pane_stacon_g1_ParamLimits

0x18a5,	// (0x000018a5) title_pane_stacon_g1

0x3f07,	// (0x00003f07) popup_note_wait_window_g3_ParamLimits

0x3f07,	// (0x00003f07) popup_note_wait_window_g3

0x3f7d,	// (0x00003f7d) popup_note_wait_window_t5_ParamLimits

0x3f7d,	// (0x00003f7d) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc460,	// (0x0000c460) popup_feb_china_hwr_fs_window_ParamLimits

0xc460,	// (0x0000c460) popup_feb_china_hwr_fs_window

0xceb6,	// (0x0000ceb6) aid_size_cell_hwr_fs_ParamLimits

0xceb6,	// (0x0000ceb6) aid_size_cell_hwr_fs

0x3816,	// (0x00003816) bg_popup_sub_pane_cp3_ParamLimits

0x3816,	// (0x00003816) bg_popup_sub_pane_cp3

0xcecb,	// (0x0000cecb) grid_hwr_fs_pane_ParamLimits

0xcecb,	// (0x0000cecb) grid_hwr_fs_pane

0x383a,	// (0x0000383a) linegrid_hwr_fs_pane_ParamLimits

0x383a,	// (0x0000383a) linegrid_hwr_fs_pane

0xcee3,	// (0x0000cee3) cell_hwr_fs_pane_ParamLimits

0xcee3,	// (0x0000cee3) cell_hwr_fs_pane

0x386c,	// (0x0000386c) linegrid_hwr_fs_pane_g1_ParamLimits

0x386c,	// (0x0000386c) linegrid_hwr_fs_pane_g1

0xcf09,	// (0x0000cf09) linegrid_hwr_fs_pane_g2_ParamLimits

0xcf09,	// (0x0000cf09) linegrid_hwr_fs_pane_g2

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g3_ParamLimits

0x388a,	// (0x0000388a) linegrid_hwr_fs_pane_g3

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g4_ParamLimits

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g4

0x38b0,	// (0x000038b0) linegrid_hwr_fs_pane_g5_ParamLimits

0x38b0,	// (0x000038b0) linegrid_hwr_fs_pane_g5

0x0004,

0xf4a7,	// (0x0000f4a7) linegrid_hwr_fs_pane_g_ParamLimits

0xf4a7,	// (0x0000f4a7) linegrid_hwr_fs_pane_g

0x38c6,	// (0x000038c6) cell_hwr_fs_pane_g1_ParamLimits

0x38c6,	// (0x000038c6) cell_hwr_fs_pane_g1

0x3444,	// (0x00003444) cell_hwr_fs_pane_g2_ParamLimits

0x3444,	// (0x00003444) cell_hwr_fs_pane_g2

0xcf1b,	// (0x0000cf1b) cell_hwr_fs_pane_g3_ParamLimits

0xcf1b,	// (0x0000cf1b) cell_hwr_fs_pane_g3

0xcf28,	// (0x0000cf28) cell_hwr_fs_pane_g4_ParamLimits

0xcf28,	// (0x0000cf28) cell_hwr_fs_pane_g4

0x0003,

0xf4b2,	// (0x0000f4b2) cell_hwr_fs_pane_g_ParamLimits

0xf4b2,	// (0x0000f4b2) cell_hwr_fs_pane_g

0xcf35,	// (0x0000cf35) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1655,	// (0x00001655) aid_inside_area_popup_secondary

0xd1bb,	// (0x0000d1bb) aid_inside_area_window_primary_ParamLimits

0xd1bb,	// (0x0000d1bb) aid_inside_area_window_primary

0x5516,	// (0x00005516) ai2_news_ticker_pane

0x551e,	// (0x0000551e) aid_size_cell_ai1_link_ParamLimits

0x551e,	// (0x0000551e) aid_size_cell_ai1_link

0xd5c3,	// (0x0000d5c3) popup_ai2_data_window_ParamLimits

0xd5c3,	// (0x0000d5c3) popup_ai2_data_window

0x554e,	// (0x0000554e) popup_ai2_link_window_ParamLimits

0x554e,	// (0x0000554e) popup_ai2_link_window

0x3816,	// (0x00003816) bg_popup_sub_pane_cp4_ParamLimits

0x3816,	// (0x00003816) bg_popup_sub_pane_cp4

0x5562,	// (0x00005562) grid_ai2_link_pane_ParamLimits

0x5562,	// (0x00005562) grid_ai2_link_pane

0x5579,	// (0x00005579) popup_ai2_link_window_g1_ParamLimits

0x5579,	// (0x00005579) popup_ai2_link_window_g1

0x5585,	// (0x00005585) popup_ai2_link_window_g2_ParamLimits

0x5585,	// (0x00005585) popup_ai2_link_window_g2

0x0001,

0xaea1,	// (0x0000aea1) popup_ai2_link_window_g_ParamLimits

0xaea1,	// (0x0000aea1) popup_ai2_link_window_g

0x5594,	// (0x00005594) ai2_mp_button_pane

0x559c,	// (0x0000559c) ai2_mp_volume_pane

0x3ac0,	// (0x00003ac0) bg_popup_sub_pane_cp5_ParamLimits

0x3ac0,	// (0x00003ac0) bg_popup_sub_pane_cp5

0x55a4,	// (0x000055a4) heading_ai2_gene_pane_ParamLimits

0x55a4,	// (0x000055a4) heading_ai2_gene_pane

0x55b0,	// (0x000055b0) list_ai2_gene_pane_ParamLimits

0x55b0,	// (0x000055b0) list_ai2_gene_pane

0x55f8,	// (0x000055f8) cell_ai2_link_pane_ParamLimits

0x55f8,	// (0x000055f8) cell_ai2_link_pane

0x560e,	// (0x0000560e) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x56de,	// (0x000056de) ai2_mp_volume_pane_g1

0x56e6,	// (0x000056e6) ai2_mp_volume_pane_g2

0xd5ed,	// (0x0000d5ed) list_ai2_gene_pane_t1

0x56ee,	// (0x000056ee) ai2_mp_volume_pane_g3

0x0002,

0xaeba,	// (0x0000aeba) ai2_mp_volume_pane_g

0x56f6,	// (0x000056f6) volume_small_pane_cp3

0x56ff,	// (0x000056ff) aid_size_cell_ai2_button

0x5707,	// (0x00005707) grid_ai2_button_pane

0x5710,	// (0x00005710) cell_ai2_button_pane_ParamLimits

0x5710,	// (0x00005710) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x569e,	// (0x0000569e) ai2_gene_pane_t1_ParamLimits

0x569e,	// (0x0000569e) ai2_gene_pane_t1

0xc3d6,	// (0x0000c3d6) aid_height_parent_landscape

0xd333,	// (0x0000d333) aid_height_set_list

0x4ea5,	// (0x00004ea5) aid_size_parent

0x5285,	// (0x00005285) aid_size_cell_graphic_pane_ParamLimits

0x55c0,	// (0x000055c0) popup_ai2_data_window_g1_ParamLimits

0x55c0,	// (0x000055c0) popup_ai2_data_window_g1

0x55cc,	// (0x000055cc) ai2_news_ticker_pane_g1

0x55d4,	// (0x000055d4) ai2_news_ticker_pane_g2

0x0001,

0xaea6,	// (0x0000aea6) ai2_news_ticker_pane_g

0x55dc,	// (0x000055dc) ai2_news_ticker_pane_t1

0x55ea,	// (0x000055ea) ai2_news_ticker_pane_t2

0x0001,

0xaeab,	// (0x0000aeab) ai2_news_ticker_pane_t

0x5617,	// (0x00005617) heading_ai2_gene_pane_g1

0x561f,	// (0x0000561f) heading_ai2_gene_pane_t1_ParamLimits

0x561f,	// (0x0000561f) heading_ai2_gene_pane_t1

0x5634,	// (0x00005634) list_highlight_pane_cp6

0xd5d7,	// (0x0000d5d7) ai2_gene_pane_ParamLimits

0xd5d7,	// (0x0000d5d7) ai2_gene_pane

0xd5fb,	// (0x0000d5fb) list_ai2_gene_pane_t2

0x0001,

0xf51b,	// (0x0000f51b) list_ai2_gene_pane_t

0x566f,	// (0x0000566f) list_highlight_pane_cp8_ParamLimits

0x566f,	// (0x0000566f) list_highlight_pane_cp8

0x5680,	// (0x00005680) ai2_gene_pane_g1_ParamLimits

0x5680,	// (0x00005680) ai2_gene_pane_g1

0x5692,	// (0x00005692) ai2_gene_pane_g2_ParamLimits

0x5692,	// (0x00005692) ai2_gene_pane_g2

0x0001,

0xaeb5,	// (0x0000aeb5) ai2_gene_pane_g_ParamLimits

0xaeb5,	// (0x0000aeb5) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xc395,	// (0x0000c395) control_pane_t3_ParamLimits

0xc395,	// (0x0000c395) control_pane_t3

0x28e7,	// (0x000028e7) status_small_pane_g8_ParamLimits

0x28e7,	// (0x000028e7) status_small_pane_g8

0xc4f5,	// (0x0000c4f5) popup_find_window_ParamLimits

0xc77c,	// (0x0000c77c) popup_note_image_window_ParamLimits

0x350a,	// (0x0000350a) list_double2_graphic_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_double2_graphic_pane_vc_g1

0x3516,	// (0x00003516) list_double2_graphic_pane_vc_g2_ParamLimits

0x3516,	// (0x00003516) list_double2_graphic_pane_vc_g2

0x3522,	// (0x00003522) list_double2_graphic_pane_vc_g3_ParamLimits

0x3522,	// (0x00003522) list_double2_graphic_pane_vc_g3

0x0002,

0xac85,	// (0x0000ac85) list_double2_graphic_pane_vc_g_ParamLimits

0xac85,	// (0x0000ac85) list_double2_graphic_pane_vc_g

0x360c,	// (0x0000360c) list_double2_graphic_pane_vc_t1_ParamLimits

0x360c,	// (0x0000360c) list_double2_graphic_pane_vc_t1

0x3516,	// (0x00003516) list_single_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_single_heading_pane_vc_g1

0x3522,	// (0x00003522) list_single_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_single_heading_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_single_heading_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_single_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_heading_pane_vc_t1

0x3727,	// (0x00003727) list_single_heading_pane_vc_t2_ParamLimits

0x3727,	// (0x00003727) list_single_heading_pane_vc_t2

0x0001,

0xacb2,	// (0x0000acb2) list_single_heading_pane_vc_t_ParamLimits

0xacb2,	// (0x0000acb2) list_single_heading_pane_vc_t

0x3751,	// (0x00003751) list_setting_number_pane_vc_g1_ParamLimits

0x3751,	// (0x00003751) list_setting_number_pane_vc_g1

0x375d,	// (0x0000375d) list_setting_number_pane_vc_g2_ParamLimits

0x375d,	// (0x0000375d) list_setting_number_pane_vc_g2

0x0001,

0xacb7,	// (0x0000acb7) list_setting_number_pane_vc_g_ParamLimits

0xacb7,	// (0x0000acb7) list_setting_number_pane_vc_g

0x3769,	// (0x00003769) list_setting_number_pane_vc_t1_ParamLimits

0x3769,	// (0x00003769) list_setting_number_pane_vc_t1

0x377d,	// (0x0000377d) list_setting_number_pane_vc_t2_ParamLimits

0x377d,	// (0x0000377d) list_setting_number_pane_vc_t2

0x3799,	// (0x00003799) list_setting_number_pane_vc_t3_ParamLimits

0x3799,	// (0x00003799) list_setting_number_pane_vc_t3

0x0002,

0xacbc,	// (0x0000acbc) list_setting_number_pane_vc_t_ParamLimits

0xacbc,	// (0x0000acbc) list_setting_number_pane_vc_t

0x37c5,	// (0x000037c5) set_value_pane_vc_ParamLimits

0x37c5,	// (0x000037c5) set_value_pane_vc

0x50ab,	// (0x000050ab) list_double2_graphic_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double2_graphic_pane_vc

0x50bd,	// (0x000050bd) list_double2_large_graphic_pane_vc_ParamLimits

0x50bd,	// (0x000050bd) list_double2_large_graphic_pane_vc

0x50ab,	// (0x000050ab) list_double2_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double2_pane_vc

0x50ab,	// (0x000050ab) list_double_graphic_heading_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_graphic_heading_pane_vc

0x50ab,	// (0x000050ab) list_double_graphic_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_graphic_pane_vc

0x50ab,	// (0x000050ab) list_double_heading_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_heading_pane_vc

0x50bd,	// (0x000050bd) list_double_large_graphic_pane_vc_ParamLimits

0x50bd,	// (0x000050bd) list_double_large_graphic_pane_vc

0x50ab,	// (0x000050ab) list_double_number_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_number_pane_vc

0x50ab,	// (0x000050ab) list_double_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_pane_vc

0x50ab,	// (0x000050ab) list_double_time_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_double_time_pane_vc

0x50ab,	// (0x000050ab) list_setting_number_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_setting_number_pane_vc

0x50ab,	// (0x000050ab) list_setting_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_setting_pane_vc

0x50ab,	// (0x000050ab) list_single_graphic_heading_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_single_graphic_heading_pane_vc

0x50ab,	// (0x000050ab) list_single_heading_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_single_heading_pane_vc

0x50ab,	// (0x000050ab) list_single_number_heading_pane_vc_ParamLimits

0x50ab,	// (0x000050ab) list_single_number_heading_pane_vc

0x5744,	// (0x00005744) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5744,	// (0x00005744) list_double_graphic_heading_pane_vc_g1

0x3516,	// (0x00003516) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3516,	// (0x00003516) list_double_graphic_heading_pane_vc_g2

0x3522,	// (0x00003522) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3522,	// (0x00003522) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaec1,	// (0x0000aec1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaec1,	// (0x0000aec1) list_double_graphic_heading_pane_vc_g

0x5750,	// (0x00005750) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5750,	// (0x00005750) list_double_graphic_heading_pane_vc_t1

0x370f,	// (0x0000370f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x370f,	// (0x0000370f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaec8,	// (0x0000aec8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaec8,	// (0x0000aec8) list_double_graphic_heading_pane_vc_t

0x3751,	// (0x00003751) list_setting_pane_vc_g1_ParamLimits

0x3751,	// (0x00003751) list_setting_pane_vc_g1

0x375d,	// (0x0000375d) list_setting_pane_vc_g2_ParamLimits

0x375d,	// (0x0000375d) list_setting_pane_vc_g2

0x0001,

0xacb7,	// (0x0000acb7) list_setting_pane_vc_g_ParamLimits

0xacb7,	// (0x0000acb7) list_setting_pane_vc_g

0x5970,	// (0x00005970) list_setting_pane_vc_t1_ParamLimits

0x5970,	// (0x00005970) list_setting_pane_vc_t1

0x598c,	// (0x0000598c) list_setting_pane_vc_t2_ParamLimits

0x598c,	// (0x0000598c) list_setting_pane_vc_t2

0x0001,

0xaef6,	// (0x0000aef6) list_setting_pane_vc_t_ParamLimits

0xaef6,	// (0x0000aef6) list_setting_pane_vc_t

0x37c5,	// (0x000037c5) set_value_pane_cp_vc_ParamLimits

0x37c5,	// (0x000037c5) set_value_pane_cp_vc

0x3516,	// (0x00003516) list_single_number_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_single_number_heading_pane_vc_g1

0x3522,	// (0x00003522) list_single_number_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_single_number_heading_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_single_number_heading_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_single_number_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_number_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_number_heading_pane_vc_t1

0x59a8,	// (0x000059a8) list_single_number_heading_pane_vc_t2_ParamLimits

0x59a8,	// (0x000059a8) list_single_number_heading_pane_vc_t2

0x59bc,	// (0x000059bc) list_single_number_heading_pane_vc_t3_ParamLimits

0x59bc,	// (0x000059bc) list_single_number_heading_pane_vc_t3

0x0002,

0xaefb,	// (0x0000aefb) list_single_number_heading_pane_vc_t_ParamLimits

0xaefb,	// (0x0000aefb) list_single_number_heading_pane_vc_t

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_single_graphic_heading_pane_vc_g1

0x3516,	// (0x00003516) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_heading_pane_vc_g4

0x3522,	// (0x00003522) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3522,	// (0x00003522) list_single_graphic_heading_pane_vc_g5

0x0002,

0xac85,	// (0x0000ac85) list_single_graphic_heading_pane_vc_g_ParamLimits

0xac85,	// (0x0000ac85) list_single_graphic_heading_pane_vc_g

0x370f,	// (0x0000370f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x370f,	// (0x0000370f) list_single_graphic_heading_pane_vc_t1

0x59ce,	// (0x000059ce) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x59ce,	// (0x000059ce) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf02,	// (0x0000af02) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf02,	// (0x0000af02) list_single_graphic_heading_pane_vc_t

0x3516,	// (0x00003516) list_double2_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double2_pane_vc_g1

0x3522,	// (0x00003522) list_double2_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double2_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_double2_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_double2_pane_vc_g

0x59e2,	// (0x000059e2) list_double2_pane_vc_t1_ParamLimits

0x59e2,	// (0x000059e2) list_double2_pane_vc_t1

0x59f8,	// (0x000059f8) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59f8,	// (0x000059f8) list_double2_large_graphic_pane_vc_g1

0x5a04,	// (0x00005a04) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5a04,	// (0x00005a04) list_double2_large_graphic_pane_vc_g2

0x5a10,	// (0x00005a10) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x5a10,	// (0x00005a10) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaf07,	// (0x0000af07) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaf07,	// (0x0000af07) list_double2_large_graphic_pane_vc_g

0x5a1c,	// (0x00005a1c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a1c,	// (0x00005a1c) list_double2_large_graphic_pane_vc_t1

0x5a32,	// (0x00005a32) list_double_time_pane_vc_g1_ParamLimits

0x5a32,	// (0x00005a32) list_double_time_pane_vc_g1

0x5a3e,	// (0x00005a3e) list_double_time_pane_vc_g2_ParamLimits

0x5a3e,	// (0x00005a3e) list_double_time_pane_vc_g2

0x0001,

0xaf0e,	// (0x0000af0e) list_double_time_pane_vc_g_ParamLimits

0xaf0e,	// (0x0000af0e) list_double_time_pane_vc_g

0x5a4a,	// (0x00005a4a) list_double_time_pane_vc_t1_ParamLimits

0x5a4a,	// (0x00005a4a) list_double_time_pane_vc_t1

0x5a6e,	// (0x00005a6e) list_double_time_pane_vc_t2_ParamLimits

0x5a6e,	// (0x00005a6e) list_double_time_pane_vc_t2

0x5a98,	// (0x00005a98) list_double_time_pane_vc_t3_ParamLimits

0x5a98,	// (0x00005a98) list_double_time_pane_vc_t3

0x5aaa,	// (0x00005aaa) list_double_time_pane_vc_t4_ParamLimits

0x5aaa,	// (0x00005aaa) list_double_time_pane_vc_t4

0x0003,

0xaf13,	// (0x0000af13) list_double_time_pane_vc_t_ParamLimits

0xaf13,	// (0x0000af13) list_double_time_pane_vc_t

0x3516,	// (0x00003516) list_double_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_pane_vc_g1

0x3522,	// (0x00003522) list_double_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_double_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_double_pane_vc_g

0x5acf,	// (0x00005acf) list_double_pane_vc_t1_ParamLimits

0x5acf,	// (0x00005acf) list_double_pane_vc_t1

0x5ae3,	// (0x00005ae3) list_double_pane_vc_t2_ParamLimits

0x5ae3,	// (0x00005ae3) list_double_pane_vc_t2

0x0001,

0xaf1c,	// (0x0000af1c) list_double_pane_vc_t_ParamLimits

0xaf1c,	// (0x0000af1c) list_double_pane_vc_t

0x3516,	// (0x00003516) list_double_number_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_number_pane_vc_g1

0x3522,	// (0x00003522) list_double_number_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_number_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_double_number_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_double_number_pane_vc_g

0x5afb,	// (0x00005afb) list_double_number_pane_vc_t1_ParamLimits

0x5afb,	// (0x00005afb) list_double_number_pane_vc_t1

0x5b0f,	// (0x00005b0f) list_double_number_pane_vc_t2_ParamLimits

0x5b0f,	// (0x00005b0f) list_double_number_pane_vc_t2

0x5ae3,	// (0x00005ae3) list_double_number_pane_vc_t3_ParamLimits

0x5ae3,	// (0x00005ae3) list_double_number_pane_vc_t3

0x0002,

0xaf21,	// (0x0000af21) list_double_number_pane_vc_t_ParamLimits

0xaf21,	// (0x0000af21) list_double_number_pane_vc_t

0x5b23,	// (0x00005b23) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b23,	// (0x00005b23) list_double_large_graphic_pane_vc_g1

0x5b34,	// (0x00005b34) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b34,	// (0x00005b34) list_double_large_graphic_pane_vc_g2

0x5a10,	// (0x00005a10) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5a10,	// (0x00005a10) list_double_large_graphic_pane_vc_g3

0x5b43,	// (0x00005b43) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b43,	// (0x00005b43) list_double_large_graphic_pane_vc_g4

0x0003,

0xaf28,	// (0x0000af28) list_double_large_graphic_pane_vc_g_ParamLimits

0xaf28,	// (0x0000af28) list_double_large_graphic_pane_vc_g

0x5b4f,	// (0x00005b4f) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b4f,	// (0x00005b4f) list_double_large_graphic_pane_vc_t1

0x5b68,	// (0x00005b68) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b68,	// (0x00005b68) list_double_large_graphic_pane_vc_t2

0x0001,

0xaf31,	// (0x0000af31) list_double_large_graphic_pane_vc_t_ParamLimits

0xaf31,	// (0x0000af31) list_double_large_graphic_pane_vc_t

0x3516,	// (0x00003516) list_double_heading_pane_vc_g1_ParamLimits

0x3516,	// (0x00003516) list_double_heading_pane_vc_g1

0x3522,	// (0x00003522) list_double_heading_pane_vc_g2_ParamLimits

0x3522,	// (0x00003522) list_double_heading_pane_vc_g2

0x0001,

0xacad,	// (0x0000acad) list_double_heading_pane_vc_g_ParamLimits

0xacad,	// (0x0000acad) list_double_heading_pane_vc_g

0x5b81,	// (0x00005b81) list_double_heading_pane_vc_t1_ParamLimits

0x5b81,	// (0x00005b81) list_double_heading_pane_vc_t1

0x370f,	// (0x0000370f) list_double_heading_pane_vc_t2_ParamLimits

0x370f,	// (0x0000370f) list_double_heading_pane_vc_t2

0x0001,

0xaf36,	// (0x0000af36) list_double_heading_pane_vc_t_ParamLimits

0xaf36,	// (0x0000af36) list_double_heading_pane_vc_t

0x350a,	// (0x0000350a) list_double_graphic_pane_vc_g1_ParamLimits

0x350a,	// (0x0000350a) list_double_graphic_pane_vc_g1

0x5b95,	// (0x00005b95) list_double_graphic_pane_vc_g2_ParamLimits

0x5b95,	// (0x00005b95) list_double_graphic_pane_vc_g2

0x5ba4,	// (0x00005ba4) list_double_graphic_pane_vc_g3_ParamLimits

0x5ba4,	// (0x00005ba4) list_double_graphic_pane_vc_g3

0x0002,

0xaf3b,	// (0x0000af3b) list_double_graphic_pane_vc_g_ParamLimits

0xaf3b,	// (0x0000af3b) list_double_graphic_pane_vc_g

0x5bb0,	// (0x00005bb0) list_double_graphic_pane_vc_t1_ParamLimits

0x5bb0,	// (0x00005bb0) list_double_graphic_pane_vc_t1

0x5ae3,	// (0x00005ae3) list_double_graphic_pane_vc_t2_ParamLimits

0x5ae3,	// (0x00005ae3) list_double_graphic_pane_vc_t2

0x0001,

0xaf42,	// (0x0000af42) list_double_graphic_pane_vc_t_ParamLimits

0xaf42,	// (0x0000af42) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb3ed,	// (0x0000b3ed) aid_size_cell_touch_ParamLimits

0xb3ed,	// (0x0000b3ed) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb538,	// (0x0000b538) touch_pane_ParamLimits

0xb538,	// (0x0000b538) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xbcf6,	// (0x0000bcf6) form_field_data_wide_pane_cp2

0x1b08,	// (0x00001b08) bg_scroll_pane_ParamLimits

0x1b27,	// (0x00001b27) scroll_handle_pane_ParamLimits

0x1b3b,	// (0x00001b3b) scroll_sc2_down_pane_ParamLimits

0x1b3b,	// (0x00001b3b) scroll_sc2_down_pane

0x1b62,	// (0x00001b62) scroll_sc2_up_pane_ParamLimits

0x1b62,	// (0x00001b62) scroll_sc2_up_pane

0xd725,	// (0x0000d725) grid_wheel_folder_pane_g1_ParamLimits

0xd725,	// (0x0000d725) grid_wheel_folder_pane_g1

0x221a,	// (0x0000221a) clock_nsta_pane_cp2_ParamLimits

0x221a,	// (0x0000221a) clock_nsta_pane_cp2

0x2b34,	// (0x00002b34) listscroll_midp_pane_ParamLimits

0xc1ab,	// (0x0000c1ab) midp_canvas_pane

0x2aa8,	// (0x00002aa8) nsta_clock_indic_pane

0x2b06,	// (0x00002b06) listscroll_form_pane_vc

0x2b22,	// (0x00002b22) listscroll_set_pane_vc_ParamLimits

0x2b22,	// (0x00002b22) listscroll_set_pane_vc

0xcbb6,	// (0x0000cbb6) clock_nsta_pane

0xcbe0,	// (0x0000cbe0) indicator_nsta_pane

0x3576,	// (0x00003576) bg_popup_sub_pane_cp2_ParamLimits

0x358a,	// (0x0000358a) find_pane_cp2_ParamLimits

0x358a,	// (0x0000358a) find_pane_cp2

0x35a0,	// (0x000035a0) grid_toobar_pane_ParamLimits

0x37d5,	// (0x000037d5) list_form_gen_pane_vc_ParamLimits

0x37d5,	// (0x000037d5) list_form_gen_pane_vc

0x37eb,	// (0x000037eb) scroll_pane_cp8_vc_ParamLimits

0x37eb,	// (0x000037eb) scroll_pane_cp8_vc

0x3904,	// (0x00003904) data_form_wide_pane_vc_ParamLimits

0x3904,	// (0x00003904) data_form_wide_pane_vc

0x3910,	// (0x00003910) form_field_data_wide_pane_vc_g1

0x3918,	// (0x00003918) form_field_data_wide_pane_vc_t1_ParamLimits

0x3918,	// (0x00003918) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xcfde,	// (0x0000cfde) list_midp_pane_ParamLimits

0x52eb,	// (0x000052eb) scroll_pane_cp16_ParamLimits

0x52eb,	// (0x000052eb) scroll_pane_cp16

0x3cdc,	// (0x00003cdc) button_value_adjust_pane_ParamLimits

0x3cdc,	// (0x00003cdc) button_value_adjust_pane

0xd344,	// (0x0000d344) button_value_adjust_pane_cp6_ParamLimits

0xd344,	// (0x0000d344) button_value_adjust_pane_cp6

0xd45e,	// (0x0000d45e) settings_code_pane_cp_ParamLimits

0xd45e,	// (0x0000d45e) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xabd8,	// (0x0000abd8) cell_touch_pane_g

0xd609,	// (0x0000d609) cell_touch_pane_cp_ParamLimits

0xd609,	// (0x0000d609) cell_touch_pane_cp

0xd625,	// (0x0000d625) cell_touch_pane_ParamLimits

0xd625,	// (0x0000d625) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5764,	// (0x00005764) list_set_graphic_pane_vc_g1_ParamLimits

0x5764,	// (0x00005764) list_set_graphic_pane_vc_g1

0x5770,	// (0x00005770) list_set_graphic_pane_vc_g2_ParamLimits

0x5770,	// (0x00005770) list_set_graphic_pane_vc_g2

0x0001,

0xaecd,	// (0x0000aecd) list_set_graphic_pane_vc_g_ParamLimits

0xaecd,	// (0x0000aecd) list_set_graphic_pane_vc_g

0x577c,	// (0x0000577c) text_primary_small_cp13_vc_ParamLimits

0x577c,	// (0x0000577c) text_primary_small_cp13_vc

0x5794,	// (0x00005794) list_set_graphic_pane_vc_ParamLimits

0x5794,	// (0x00005794) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05d9,	// (0x000005d9) setting_code_pane_vc_t1

0x57a6,	// (0x000057a6) set_text_pane_vc_t1_ParamLimits

0x57a6,	// (0x000057a6) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x57c1,	// (0x000057c1) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_vc_g1

0x57cb,	// (0x000057cb) setting_slider_graphic_pane_vc_t1

0x57db,	// (0x000057db) setting_slider_graphic_pane_vc_t2

0x0001,

0xaed2,	// (0x0000aed2) setting_slider_graphic_pane_vc_t

0x57eb,	// (0x000057eb) slider_set_pane_cp_vc

0x57f3,	// (0x000057f3) slider_set_pane_vc_g1

0x57fc,	// (0x000057fc) slider_set_pane_vc_g2

0x0006,

0xaed7,	// (0x0000aed7) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x5828,	// (0x00005828) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x5832,	// (0x00005832) set_opt_bg_pane_g7_copy1

0x583a,	// (0x0000583a) set_opt_bg_pane_g8_copy1

0x5844,	// (0x00005844) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x584e,	// (0x0000584e) setting_slider_pane_vc_t1

0x585d,	// (0x0000585d) setting_slider_pane_vc_t2

0x586d,	// (0x0000586d) setting_slider_pane_vc_t3

0x0002,

0xaee6,	// (0x0000aee6) setting_slider_pane_vc_t

0x587d,	// (0x0000587d) slider_set_pane_vc

0x451d,	// (0x0000451d) volume_set_pane_vc_g1

0x4526,	// (0x00004526) volume_set_pane_vc_g2

0x452f,	// (0x0000452f) volume_set_pane_vc_g3

0x4538,	// (0x00004538) volume_set_pane_vc_g4

0x4541,	// (0x00004541) volume_set_pane_vc_g5

0x454a,	// (0x0000454a) volume_set_pane_vc_g6

0x4553,	// (0x00004553) volume_set_pane_vc_g7

0x455c,	// (0x0000455c) volume_set_pane_vc_g8

0x4565,	// (0x00004565) volume_set_pane_vc_g9

0x456e,	// (0x0000456e) volume_set_pane_vc_g10

0x0009,

0xad84,	// (0x0000ad84) volume_set_pane_vc_g

0x5885,	// (0x00005885) volume_set_pane_vc

0x588d,	// (0x0000588d) button_value_adjust_pane_cp1_vc

0x5897,	// (0x00005897) list_highlight_pane_cp2_vc

0x58a0,	// (0x000058a0) list_set_pane_vc_ParamLimits

0x58a0,	// (0x000058a0) list_set_pane_vc

0x58fe,	// (0x000058fe) main_pane_set_vc_t1_ParamLimits

0x58fe,	// (0x000058fe) main_pane_set_vc_t1

0x5913,	// (0x00005913) main_pane_set_vc_t2_ParamLimits

0x5913,	// (0x00005913) main_pane_set_vc_t2

0x5925,	// (0x00005925) main_pane_set_vc_t3_ParamLimits

0x5925,	// (0x00005925) main_pane_set_vc_t3

0x5939,	// (0x00005939) main_pane_set_vc_t4_ParamLimits

0x5939,	// (0x00005939) main_pane_set_vc_t4

0x0003,

0xaeed,	// (0x0000aeed) main_pane_set_vc_t_ParamLimits

0xaeed,	// (0x0000aeed) main_pane_set_vc_t

0x594d,	// (0x0000594d) setting_code_pane_vc_ParamLimits

0x594d,	// (0x0000594d) setting_code_pane_vc

0x595e,	// (0x0000595e) setting_slider_graphic_pane_vc

0x595e,	// (0x0000595e) setting_slider_pane_vc

0x595e,	// (0x0000595e) setting_text_pane_vc

0x595e,	// (0x0000595e) setting_volume_pane_vc

0x5968,	// (0x00005968) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5bc4,	// (0x00005bc4) button_value_adjust_pane_g1

0x5bcd,	// (0x00005bcd) button_value_adjust_pane_g2

0x0001,

0xaf47,	// (0x0000af47) button_value_adjust_pane_g

0x5bd6,	// (0x00005bd6) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5bd6,	// (0x00005bd6) form_field_slider_wide_pane_vc_t1

0x5bea,	// (0x00005bea) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5bea,	// (0x00005bea) form_field_slider_wide_pane_vc_t2

0x0002,

0xaf4c,	// (0x0000af4c) form_field_slider_wide_pane_vc_t_ParamLimits

0xaf4c,	// (0x0000af4c) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5c18,	// (0x00005c18) slider_cont_pane_cp1_vc_ParamLimits

0x5c18,	// (0x00005c18) slider_cont_pane_cp1_vc

0x5c2a,	// (0x00005c2a) slider_form_pane_g1_cp2

0x57fc,	// (0x000057fc) slider_form_pane_g2_cp2

0x5c57,	// (0x00005c57) form_field_slider_pane_vc_t3

0x5c65,	// (0x00005c65) form_field_slider_pane_vc_t4

0x5c73,	// (0x00005c73) slider_form_pane_vc_ParamLimits

0x5c73,	// (0x00005c73) slider_form_pane_vc

0x5c80,	// (0x00005c80) form_field_slider_pane_vc_t1_ParamLimits

0x5c80,	// (0x00005c80) form_field_slider_pane_vc_t1

0x5bea,	// (0x00005bea) form_field_slider_pane_vc_t2_ParamLimits

0x5bea,	// (0x00005bea) form_field_slider_pane_vc_t2

0x0001,

0xaf5e,	// (0x0000af5e) form_field_slider_pane_vc_t_ParamLimits

0xaf5e,	// (0x0000af5e) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5c9c,	// (0x00005c9c) slider_cont_pane_vc_ParamLimits

0x5c9c,	// (0x00005c9c) slider_cont_pane_vc

0x5cb0,	// (0x00005cb0) list_form_graphic_pane_cp_vc_ParamLimits

0x5cb0,	// (0x00005cb0) list_form_graphic_pane_cp_vc

0x3910,	// (0x00003910) form_field_popup_wide_pane_vc_g1

0x5cc5,	// (0x00005cc5) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cc5,	// (0x00005cc5) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5d0a,	// (0x00005d0a) list_form_wide_pane_vc_ParamLimits

0x5d0a,	// (0x00005d0a) list_form_wide_pane_vc

0x5d16,	// (0x00005d16) list_form_graphic_pane_vc_g1

0x5d1e,	// (0x00005d1e) list_form_graphic_pane_vc_t1_ParamLimits

0x5d1e,	// (0x00005d1e) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5d3a,	// (0x00005d3a) list_form_graphic_pane_vc_ParamLimits

0x5d3a,	// (0x00005d3a) list_form_graphic_pane_vc

0x3910,	// (0x00003910) form_field_popup_pane_vc_g1

0x5d50,	// (0x00005d50) form_field_popup_pane_vc_t1_ParamLimits

0x5d50,	// (0x00005d50) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5d67,	// (0x00005d67) list_form_pane_vc_ParamLimits

0x5d67,	// (0x00005d67) list_form_pane_vc

0x5d73,	// (0x00005d73) data_form_pane_vc_t1_ParamLimits

0x5d73,	// (0x00005d73) data_form_pane_vc_t1

0x14ad,	// (0x000014ad) input_focus_pane_vc_g1

0x14b5,	// (0x000014b5) input_focus_pane_vc_g2

0x14bd,	// (0x000014bd) input_focus_pane_vc_g3

0x14c5,	// (0x000014c5) input_focus_pane_vc_g4

0x14cd,	// (0x000014cd) input_focus_pane_vc_g5

0x14d5,	// (0x000014d5) input_focus_pane_vc_g6

0x14dd,	// (0x000014dd) input_focus_pane_vc_g7

0x14e5,	// (0x000014e5) input_focus_pane_vc_g8

0x14ed,	// (0x000014ed) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xab61,	// (0x0000ab61) input_focus_pane_vc_g

0x3904,	// (0x00003904) data_form_pane_vc_ParamLimits

0x3904,	// (0x00003904) data_form_pane_vc

0x3910,	// (0x00003910) form_field_data_pane_vc_g1

0x5d8e,	// (0x00005d8e) form_field_data_pane_vc_t1_ParamLimits

0x5d8e,	// (0x00005d8e) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5da8,	// (0x00005da8) button_value_adjust_pane_cp3_vc

0x5db0,	// (0x00005db0) button_value_adjust_pane_cp5_vc

0x5db8,	// (0x00005db8) form_field_data_pane_vc_ParamLimits

0x5db8,	// (0x00005db8) form_field_data_pane_vc

0x5dcf,	// (0x00005dcf) form_field_data_pane_vc_cp2

0x5dd7,	// (0x00005dd7) form_field_data_wide_pane_vc_ParamLimits

0x5dd7,	// (0x00005dd7) form_field_data_wide_pane_vc

0x5ded,	// (0x00005ded) form_field_data_wide_pane_vc_cp2

0x5df5,	// (0x00005df5) form_field_popup_pane_vc_ParamLimits

0x5df5,	// (0x00005df5) form_field_popup_pane_vc

0x5e0c,	// (0x00005e0c) form_field_popup_wide_pane_vc_ParamLimits

0x5e0c,	// (0x00005e0c) form_field_popup_wide_pane_vc

0x5e22,	// (0x00005e22) form_field_slider_pane_vc_ParamLimits

0x5e22,	// (0x00005e22) form_field_slider_pane_vc

0x5e35,	// (0x00005e35) form_field_slider_wide_pane_vc_ParamLimits

0x5e35,	// (0x00005e35) form_field_slider_wide_pane_vc

0xd643,	// (0x0000d643) grid_touch_1_pane_ParamLimits

0xd643,	// (0x0000d643) grid_touch_1_pane

0xd657,	// (0x0000d657) grid_touch_2_pane_ParamLimits

0xd657,	// (0x0000d657) grid_touch_2_pane

0x5f0a,	// (0x00005f0a) touch_pane_g1_ParamLimits

0x5f0a,	// (0x00005f0a) touch_pane_g1

0x5e6c,	// (0x00005e6c) cell_app_pane_cp_wide_ParamLimits

0x5e6c,	// (0x00005e6c) cell_app_pane_cp_wide

0x5e7d,	// (0x00005e7d) grid_popup_fast_wide_pane_ParamLimits

0x5e7d,	// (0x00005e7d) grid_popup_fast_wide_pane

0x5e91,	// (0x00005e91) scroll_pane_cp19_ParamLimits

0x5e91,	// (0x00005e91) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5ea5,	// (0x00005ea5) listscroll_popup_fast_wide_pane

0x16c1,	// (0x000016c1) grid_indicator_nsta_pane

0x5ead,	// (0x00005ead) clock_nsta_pane_g1

0x5eb6,	// (0x00005eb6) clock_nsta_pane_t1

0xd681,	// (0x0000d681) cell_indicator_nsta_pane_ParamLimits

0xd681,	// (0x0000d681) cell_indicator_nsta_pane

0x5f0a,	// (0x00005f0a) cell_indicator_nsta_pane_g1

0xd69a,	// (0x0000d69a) cell_indicator_nsta_pane_g2

0x0001,

0xf520,	// (0x0000f520) cell_indicator_nsta_pane_g

0x5f2e,	// (0x00005f2e) clock_nsta_pane_cp

0x5f36,	// (0x00005f36) indicator_nsta_pane_cp

0x5f3f,	// (0x00005f3f) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c57,	// (0x00001c57) scroll_pane_cp29

0x2147,	// (0x00002147) indicator_nsta_pane_cp2_ParamLimits

0x2147,	// (0x00002147) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b63,	// (0x00003b63) form_midp_field_text_pane_ParamLimits

0x3cae,	// (0x00003cae) scroll_bar_cp050_ParamLimits

0x5fa8,	// (0x00005fa8) cell_indicator_pane_ParamLimits

0x5fa8,	// (0x00005fa8) cell_indicator_pane

0x5fbf,	// (0x00005fbf) cell_indicator_pane_g1

0xd6af,	// (0x0000d6af) grid_wheel_folder_pane_ParamLimits

0xd6af,	// (0x0000d6af) grid_wheel_folder_pane

0xd6bd,	// (0x0000d6bd) list_wheel_apps_pane_ParamLimits

0xd6bd,	// (0x0000d6bd) list_wheel_apps_pane

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_g1_ParamLimits

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_g1

0xd6d7,	// (0x0000d6d7) main_apps_wheel_pane_g2_ParamLimits

0xd6d7,	// (0x0000d6d7) main_apps_wheel_pane_g2

0x0001,

0xf525,	// (0x0000f525) main_apps_wheel_pane_g_ParamLimits

0xf525,	// (0x0000f525) main_apps_wheel_pane_g

0xd6e5,	// (0x0000d6e5) main_apps_wheel_pane_t1_ParamLimits

0xd6e5,	// (0x0000d6e5) main_apps_wheel_pane_t1

0xd6f9,	// (0x0000d6f9) list_wheel_apps_pane_g1

0xd701,	// (0x0000d701) list_wheel_apps_pane_g2

0xd709,	// (0x0000d709) list_wheel_apps_pane_g3

0xd711,	// (0x0000d711) list_wheel_apps_pane_g4

0xd71b,	// (0x0000d71b) list_wheel_apps_pane_g5

0x0004,

0xf52a,	// (0x0000f52a) list_wheel_apps_pane_g

0x2447,	// (0x00002447) navi_icon_text_pane

0xcaaa,	// (0x0000caaa) aid_fill_nsta

0x6082,	// (0x00006082) navi_icon_text_pane_g1

0x608e,	// (0x0000608e) navi_icon_text_pane_t1

0xc111,	// (0x0000c111) list_set_graphic_pane_t1_ParamLimits

0xc111,	// (0x0000c111) list_set_graphic_pane_t1

0x43fd,	// (0x000043fd) popup_midp_note_alarm_window_t6_ParamLimits

0x43fd,	// (0x000043fd) popup_midp_note_alarm_window_t6

0x440f,	// (0x0000440f) popup_midp_note_alarm_window_t7_ParamLimits

0x440f,	// (0x0000440f) popup_midp_note_alarm_window_t7

0x4421,	// (0x00004421) popup_midp_note_alarm_window_t8_ParamLimits

0x4421,	// (0x00004421) popup_midp_note_alarm_window_t8

0x4433,	// (0x00004433) popup_midp_note_alarm_window_t9_ParamLimits

0x4433,	// (0x00004433) popup_midp_note_alarm_window_t9

0x4445,	// (0x00004445) popup_midp_note_alarm_window_t10_ParamLimits

0x4445,	// (0x00004445) popup_midp_note_alarm_window_t10

0x4457,	// (0x00004457) popup_midp_note_alarm_window_t11_ParamLimits

0x4457,	// (0x00004457) popup_midp_note_alarm_window_t11

0x4469,	// (0x00004469) scroll_pane_cp17_ParamLimits

0x4469,	// (0x00004469) scroll_pane_cp17

0x451d,	// (0x0000451d) volume_small_pane_cp_g1

0x60a0,	// (0x000060a0) volume_small_pane_cp_g2

0x60a9,	// (0x000060a9) volume_small_pane_cp_g3

0x60b2,	// (0x000060b2) volume_small_pane_cp_g4

0x60bb,	// (0x000060bb) volume_small_pane_cp_g5

0x60c4,	// (0x000060c4) volume_small_pane_cp_g6

0x60cd,	// (0x000060cd) volume_small_pane_cp_g7

0x60d6,	// (0x000060d6) volume_small_pane_cp_g8

0x60df,	// (0x000060df) volume_small_pane_cp_g9

0x60e8,	// (0x000060e8) volume_small_pane_cp_g10

0x2696,	// (0x00002696) midp_ticker_pane_g1_ParamLimits

0x26a2,	// (0x000026a2) midp_ticker_pane_g2_ParamLimits

0xac2d,	// (0x0000ac2d) midp_ticker_pane_g_ParamLimits

0x26ae,	// (0x000026ae) midp_ticker_pane_t1_ParamLimits

0xcace,	// (0x0000cace) aid_fill_nsta_2

0x3c9a,	// (0x00003c9a) list_form2_midp_pane

0x505f,	// (0x0000505f) midp_editing_number_pane_ParamLimits

0x506e,	// (0x0000506e) midp_ticker_pane_ParamLimits

0x60f1,	// (0x000060f1) form2_midp_field_pane

0x6115,	// (0x00006115) scroll_pane_cp51

0x6135,	// (0x00006135) form2_midp_button_pane_ParamLimits

0x6135,	// (0x00006135) form2_midp_button_pane

0x6147,	// (0x00006147) form2_midp_content_pane_ParamLimits

0x6147,	// (0x00006147) form2_midp_content_pane

0x6161,	// (0x00006161) form2_midp_field_choice_group_pane

0x6169,	// (0x00006169) form2_midp_field_pane_g1

0x6171,	// (0x00006171) form2_midp_field_pane_g2

0x6179,	// (0x00006179) form2_midp_field_pane_g3

0x6181,	// (0x00006181) form2_midp_field_pane_g4

0x0003,

0xafb5,	// (0x0000afb5) form2_midp_field_pane_g

0x6189,	// (0x00006189) form2_midp_gauge_slider_pane

0x6191,	// (0x00006191) form2_midp_gauge_wait_pane

0x6199,	// (0x00006199) form2_midp_image_pane_ParamLimits

0x6199,	// (0x00006199) form2_midp_image_pane

0x61b4,	// (0x000061b4) form2_midp_label_pane_ParamLimits

0x61b4,	// (0x000061b4) form2_midp_label_pane

0xd74e,	// (0x0000d74e) form2_midp_label_pane_cp_ParamLimits

0xd74e,	// (0x0000d74e) form2_midp_label_pane_cp

0x61ee,	// (0x000061ee) form2_midp_string_pane_ParamLimits

0x61ee,	// (0x000061ee) form2_midp_string_pane

0xd76d,	// (0x0000d76d) form2_midp_text_pane_ParamLimits

0xd76d,	// (0x0000d76d) form2_midp_text_pane

0x621d,	// (0x0000621d) form2_midp_time_pane

0x622d,	// (0x0000622d) input_focus_pane_cp51_ParamLimits

0x622d,	// (0x0000622d) input_focus_pane_cp51

0x6245,	// (0x00006245) form2_midp_label_pane_t1_ParamLimits

0x6245,	// (0x00006245) form2_midp_label_pane_t1

0xd786,	// (0x0000d786) form2_mdip_text_pane_t1_ParamLimits

0xd786,	// (0x0000d786) form2_mdip_text_pane_t1

0x62a5,	// (0x000062a5) form2_midp_time_pane_t1

0x62c0,	// (0x000062c0) form2_midp_gauge_slider_pane_t1

0xd7a1,	// (0x0000d7a1) form2_midp_gauge_slider_pane_t2

0xd7b3,	// (0x0000d7b3) form2_midp_gauge_slider_pane_t3

0x0002,

0xf53a,	// (0x0000f53a) form2_midp_gauge_slider_pane_t

0x62f6,	// (0x000062f6) form2_midp_slider_pane

0x6302,	// (0x00006302) form2_midp_gauge_wait_pane_t1

0x6310,	// (0x00006310) form2_midp_wait_pane_ParamLimits

0x6310,	// (0x00006310) form2_midp_wait_pane

0xd7c5,	// (0x0000d7c5) list_single_2graphic_pane_cp4_ParamLimits

0xd7c5,	// (0x0000d7c5) list_single_2graphic_pane_cp4

0xcf56,	// (0x0000cf56) list_single_midp_graphic_pane_cp_ParamLimits

0xcf56,	// (0x0000cf56) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x636a,	// (0x0000636a) list_single_2graphic_pane_g1_cp4

0x6372,	// (0x00006372) list_single_2graphic_pane_g2_cp4

0x637a,	// (0x0000637a) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x6389,	// (0x00006389) list_single_midp_graphic_pane_g4_cp

0x6398,	// (0x00006398) list_single_midp_graphic_pane_t1_cp

0xd7d9,	// (0x0000d7d9) form2_mdip_string_pane_t1_ParamLimits

0xd7d9,	// (0x0000d7d9) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0x2b34,	// (0x00002b34) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc7fa,	// (0x0000c7fa) popup_preview_window_ParamLimits

0xc7fa,	// (0x0000c7fa) popup_preview_window

0x309c,	// (0x0000309c) popup_touch_info_window_ParamLimits

0x309c,	// (0x0000309c) popup_touch_info_window

0x30ba,	// (0x000030ba) popup_touch_menu_window_ParamLimits

0x30ba,	// (0x000030ba) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x64a6,	// (0x000064a6) list_touch_menu_pane

0x64ae,	// (0x000064ae) list_single_touch_menu_pane_ParamLimits

0x64ae,	// (0x000064ae) list_single_touch_menu_pane

0x64c4,	// (0x000064c4) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x64d2,	// (0x000064d2) heading_sub_pane

0x64da,	// (0x000064da) list_touch_info_pane_ParamLimits

0x64da,	// (0x000064da) list_touch_info_pane

0x64e9,	// (0x000064e9) list_single_touch_info_pane_ParamLimits

0x64e9,	// (0x000064e9) list_single_touch_info_pane

0x64fb,	// (0x000064fb) list_single_touch_info_pane_t1

0x6509,	// (0x00006509) list_single_touch_info_pane_t2

0x0001,

0xafcc,	// (0x0000afcc) list_single_touch_info_pane_t

0x25c7,	// (0x000025c7) bg_popup_heading_pane_cp

0x6517,	// (0x00006517) heading_sub_pane_t1

0x3816,	// (0x00003816) bg_popup_preview_window_pane_cp_ParamLimits

0x3816,	// (0x00003816) bg_popup_preview_window_pane_cp

0x64d2,	// (0x000064d2) heading_preview_pane

0x64da,	// (0x000064da) list_preview_pane_ParamLimits

0x64da,	// (0x000064da) list_preview_pane

0x6525,	// (0x00006525) popup_preview_window_g1

0x64e9,	// (0x000064e9) list_single_preview_pane_ParamLimits

0x64e9,	// (0x000064e9) list_single_preview_pane

0x652d,	// (0x0000652d) list_single_preview_pane_g1

0x6535,	// (0x00006535) list_single_preview_pane_t1

0x64fb,	// (0x000064fb) list_single_preview_pane_t2

0x0001,

0xafd1,	// (0x0000afd1) list_single_preview_pane_t

0x6543,	// (0x00006543) bg_popup_heading_pane_cp2_ParamLimits

0x6543,	// (0x00006543) bg_popup_heading_pane_cp2

0x6559,	// (0x00006559) heading_preview_pane_g1

0x6561,	// (0x00006561) heading_preview_pane_t1_ParamLimits

0x6561,	// (0x00006561) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b50,	// (0x00001b50) scroll_sc2_left_pane

0x1b59,	// (0x00001b59) scroll_sc2_right_pane

0x1b78,	// (0x00001b78) scroll_bg_pane_g1_ParamLimits

0x1b8d,	// (0x00001b8d) scroll_bg_pane_g2_ParamLimits

0x1ba5,	// (0x00001ba5) scroll_bg_pane_g3_ParamLimits

0xabb8,	// (0x0000abb8) scroll_bg_pane_g_ParamLimits

0x1b78,	// (0x00001b78) scroll_handle_pane_g1_ParamLimits

0x1bc7,	// (0x00001bc7) scroll_handle_pane_g2_ParamLimits

0x1ba5,	// (0x00001ba5) scroll_handle_pane_g3_ParamLimits

0xabbf,	// (0x0000abbf) scroll_handle_pane_g_ParamLimits

0x2b64,	// (0x00002b64) popup_choice_list_window_ParamLimits

0x2b64,	// (0x00002b64) popup_choice_list_window

0x3582,	// (0x00003582) choice_list_pane

0x364a,	// (0x0000364a) cell_toolbar_pane_t1

0x3672,	// (0x00003672) toolbar_button_pane_ParamLimits

0x4a87,	// (0x00004a87) ai_gene_pane_1_t2_ParamLimits

0x4a87,	// (0x00004a87) ai_gene_pane_1_t2

0x0001,

0xade0,	// (0x0000ade0) ai_gene_pane_1_t_ParamLimits

0xade0,	// (0x0000ade0) ai_gene_pane_1_t

0x657e,	// (0x0000657e) scroll_sc2_left_pane_g1

0x657e,	// (0x0000657e) scroll_sc2_right_pane_g1

0x2b34,	// (0x00002b34) bg_popup_sub_pane_cp10

0x6588,	// (0x00006588) list_choice_list_pane

0x65a1,	// (0x000065a1) list_single_choice_list_pane_ParamLimits

0x65a1,	// (0x000065a1) list_single_choice_list_pane

0x65b4,	// (0x000065b4) list_single_choice_list_pane_g1

0x1692,	// (0x00001692) list_single_choice_list_pane_t1_ParamLimits

0x1692,	// (0x00001692) list_single_choice_list_pane_t1

0x65bc,	// (0x000065bc) choice_list_pane_g1

0x65c4,	// (0x000065c4) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b9,	// (0x000018b9) title_pane_stacon_g2_ParamLimits

0x18b9,	// (0x000018b9) title_pane_stacon_g2

0x0002,

0xab9e,	// (0x0000ab9e) title_pane_stacon_g_ParamLimits

0xab9e,	// (0x0000ab9e) title_pane_stacon_g

0x25c7,	// (0x000025c7) cursor_press_pane

0xc4ad,	// (0x0000c4ad) popup_fep_hwr_window_ParamLimits

0xc4ad,	// (0x0000c4ad) popup_fep_hwr_window

0x2c8a,	// (0x00002c8a) popup_fep_vkb_window_ParamLimits

0x2c8a,	// (0x00002c8a) popup_fep_vkb_window

0x65d2,	// (0x000065d2) cursor_press_pane_g1

0x0002,

0xf54e,	// (0x0000f54e) fep_vkb_side_pane_g_ParamLimits

0x6613,	// (0x00006613) fep_hwr_candidate_pane_ParamLimits

0x6613,	// (0x00006613) fep_hwr_candidate_pane

0x663d,	// (0x0000663d) fep_hwr_side_pane_ParamLimits

0x663d,	// (0x0000663d) fep_hwr_side_pane

0x665d,	// (0x0000665d) fep_hwr_top_pane_ParamLimits

0x665d,	// (0x0000665d) fep_hwr_top_pane

0x6675,	// (0x00006675) fep_hwr_write_pane_ParamLimits

0x6675,	// (0x00006675) fep_hwr_write_pane

0xf54e,	// (0x0000f54e) fep_vkb_side_pane_g

0x66af,	// (0x000066af) fep_hwr_top_pane_g1

0x66c1,	// (0x000066c1) fep_hwr_top_pane_g2

0x66d3,	// (0x000066d3) fep_hwr_top_pane_g3

0x0002,

0xafd6,	// (0x0000afd6) fep_hwr_top_pane_g

0x66e8,	// (0x000066e8) fep_hwr_top_text_pane

0x1d1e,	// (0x00001d1e) fep_hwr_top_text_pane_g1

0x67c0,	// (0x000067c0) fep_hwr_top_text_pane_t1

0x6810,	// (0x00006810) fep_hwr_candidate_pane_g1

0x6a89,	// (0x00006a89) fep_vkb_keypad_pane_g3_ParamLimits

0x6a89,	// (0x00006a89) fep_vkb_keypad_pane_g3

0x6ab1,	// (0x00006ab1) fep_vkb_keypad_pane_g4_ParamLimits

0x6ab1,	// (0x00006ab1) fep_vkb_keypad_pane_g4

0x6b20,	// (0x00006b20) fep_vkb_bottom_pane_g2_ParamLimits

0x6b20,	// (0x00006b20) fep_vkb_bottom_pane_g2

0x0001,

0xb001,	// (0x0000b001) fep_vkb_bottom_pane_g_ParamLimits

0xb001,	// (0x0000b001) fep_vkb_bottom_pane_g

0x657e,	// (0x0000657e) cell_vkb_side_pane_g2

0x0001,

0xb00b,	// (0x0000b00b) cell_vkb_side_pane_g

0x6bab,	// (0x00006bab) cell_vkb_side_pane_t1

0x6bb9,	// (0x00006bb9) cell_vkb_side_pane_t1_copy1

0x657e,	// (0x0000657e) bg_fep_vkb_candidate_pane_g2

0x6ce5,	// (0x00006ce5) cell_vkb_candidate_pane_ParamLimits

0x6844,	// (0x00006844) aid_size_cell_vkb_ParamLimits

0x6844,	// (0x00006844) aid_size_cell_vkb

0x6ce5,	// (0x00006ce5) cell_vkb_candidate_pane

0x6d19,	// (0x00006d19) bg_popup_fep_shadow_pane_g1

0xd8aa,	// (0x0000d8aa) fep_vkb_bottom_pane_ParamLimits

0xd8aa,	// (0x0000d8aa) fep_vkb_bottom_pane

0x6908,	// (0x00006908) fep_vkb_candidate_pane_ParamLimits

0x6908,	// (0x00006908) fep_vkb_candidate_pane

0xd8cf,	// (0x0000d8cf) fep_vkb_keypad_pane_ParamLimits

0xd8cf,	// (0x0000d8cf) fep_vkb_keypad_pane

0xd90b,	// (0x0000d90b) fep_vkb_side_pane_ParamLimits

0xd90b,	// (0x0000d90b) fep_vkb_side_pane

0xd947,	// (0x0000d947) fep_vkb_top_pane_ParamLimits

0xd947,	// (0x0000d947) fep_vkb_top_pane

0x69e2,	// (0x000069e2) fep_vkb_top_pane_g1_ParamLimits

0x69e2,	// (0x000069e2) fep_vkb_top_pane_g1

0x69f1,	// (0x000069f1) fep_vkb_top_pane_g2_ParamLimits

0x69f1,	// (0x000069f1) fep_vkb_top_pane_g2

0x6a00,	// (0x00006a00) fep_vkb_top_pane_g3_ParamLimits

0x6a00,	// (0x00006a00) fep_vkb_top_pane_g3

0x0003,

0xaff1,	// (0x0000aff1) fep_vkb_top_pane_g_ParamLimits

0xaff1,	// (0x0000aff1) fep_vkb_top_pane_g

0x6a1e,	// (0x00006a1e) fep_vkb_top_text_pane_ParamLimits

0x6a1e,	// (0x00006a1e) fep_vkb_top_text_pane

0xd983,	// (0x0000d983) fep_vkb_side_pane_g1_ParamLimits

0xd983,	// (0x0000d983) fep_vkb_side_pane_g1

0x6a78,	// (0x00006a78) grid_vkb_side_pane_ParamLimits

0x6a78,	// (0x00006a78) grid_vkb_side_pane

0x6d21,	// (0x00006d21) bg_popup_fep_shadow_pane_g2

0x6d2a,	// (0x00006d2a) bg_popup_fep_shadow_pane_g3

0x6d32,	// (0x00006d32) bg_popup_fep_shadow_pane_g4

0x6d3b,	// (0x00006d3b) bg_popup_fep_shadow_pane_g5

0x6d45,	// (0x00006d45) bg_popup_fep_shadow_pane_g6

0x6d4d,	// (0x00006d4d) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x6acf,	// (0x00006acf) grid_vkb_keypad_number_pane_ParamLimits

0x6acf,	// (0x00006acf) grid_vkb_keypad_number_pane

0x6adf,	// (0x00006adf) grid_vkb_keypad_pane_ParamLimits

0x6adf,	// (0x00006adf) grid_vkb_keypad_pane

0x6b05,	// (0x00006b05) fep_vkb_bottom_pane_g1_ParamLimits

0x6b05,	// (0x00006b05) fep_vkb_bottom_pane_g1

0x6b2e,	// (0x00006b2e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b2e,	// (0x00006b2e) grid_vkb_keypad_bottom_left_pane

0x6b43,	// (0x00006b43) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b43,	// (0x00006b43) grid_vkb_keypad_bottom_right_pane

0x6b58,	// (0x00006b58) fep_vkb_top_text_pane_g1

0xd9ca,	// (0x0000d9ca) fep_vkb_top_text_pane_t1

0xd9dc,	// (0x0000d9dc) cell_vkb_side_pane_ParamLimits

0xd9dc,	// (0x0000d9dc) cell_vkb_side_pane

0x657e,	// (0x0000657e) cell_vkb_side_pane_g1

0x6bc7,	// (0x00006bc7) cell_vkb_keypad_pane_ParamLimits

0x6bc7,	// (0x00006bc7) cell_vkb_keypad_pane

0x6c3c,	// (0x00006c3c) cell_vkb_keypad_pane_g1

0x0008,

0xb01e,	// (0x0000b01e) bg_popup_fep_shadow_pane_g

0x657e,	// (0x0000657e) cell_hwr_side_pane_g1

0x657e,	// (0x0000657e) cell_hwr_side_pane_g2

0x6c46,	// (0x00006c46) cell_vkb_keypad_pane_t1

0xd9f2,	// (0x0000d9f2) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9f2,	// (0x0000d9f2) cell_vkb_keypad_bottom_left_pane

0xda07,	// (0x0000da07) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xda07,	// (0x0000da07) cell_vkb_keypad_bottom_right_pane

0x657e,	// (0x0000657e) cell_vkb_keypad_bottom_left_pane_g1

0x657e,	// (0x0000657e) cell_vkb_keypad_bottom_right_pane_g1

0x6caa,	// (0x00006caa) cell_vkb_keypad_number_pane_ParamLimits

0x6caa,	// (0x00006caa) cell_vkb_keypad_number_pane

0x6cc9,	// (0x00006cc9) cell_vkb_keypad_number_pane_g1

0x6cd3,	// (0x00006cd3) cell_vkb_keypad_number_pane_g2

0x6cdc,	// (0x00006cdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xb010,	// (0x0000b010) cell_vkb_keypad_number_pane_g

0x6c46,	// (0x00006c46) cell_vkb_keypad_number_pane_t1

0x6d00,	// (0x00006d00) fep_vkb_candidate_pane_g1

0x0001,

0xb00b,	// (0x0000b00b) cell_hwr_side_pane_g

0x6d5f,	// (0x00006d5f) cell_hwr_side_pane_t1

0x6d6d,	// (0x00006d6d) cell_hwr_side_pane_t1_copy1

0x6a10,	// (0x00006a10) cell_hwr_candidate_pane_g1

0x6dbd,	// (0x00006dbd) cell_hwr_candidate_pane_t1

0x657e,	// (0x0000657e) cell_vkb_candidate_pane_g2

0x6e11,	// (0x00006e11) cell_vkb_candidate_pane_t1

0x65da,	// (0x000065da) bg_popup_fep_shadow_pane_ParamLimits

0x65da,	// (0x000065da) bg_popup_fep_shadow_pane

0x668f,	// (0x0000668f) bg_fep_hwr_top_pane_g4

0x66fd,	// (0x000066fd) bg_hwr_side_pane_g1_ParamLimits

0x66fd,	// (0x000066fd) bg_hwr_side_pane_g1

0xd863,	// (0x0000d863) cell_hwr_side_pane_ParamLimits

0xd863,	// (0x0000d863) cell_hwr_side_pane

0x676b,	// (0x0000676b) fep_hwr_write_pane_g1_ParamLimits

0x676b,	// (0x0000676b) fep_hwr_write_pane_g1

0x6778,	// (0x00006778) fep_hwr_write_pane_g2_ParamLimits

0x6778,	// (0x00006778) fep_hwr_write_pane_g2

0x6785,	// (0x00006785) fep_hwr_write_pane_g3_ParamLimits

0x6785,	// (0x00006785) fep_hwr_write_pane_g3

0xd883,	// (0x0000d883) fep_hwr_write_pane_g4_ParamLimits

0xd883,	// (0x0000d883) fep_hwr_write_pane_g4

0x0005,

0xf541,	// (0x0000f541) fep_hwr_write_pane_g_ParamLimits

0xf541,	// (0x0000f541) fep_hwr_write_pane_g

0x668f,	// (0x0000668f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x668f,	// (0x0000668f) bg_fep_hwr_candidate_pane_g2

0x67ce,	// (0x000067ce) cell_hwr_candidate_pane_ParamLimits

0x67ce,	// (0x000067ce) cell_hwr_candidate_pane

0x6810,	// (0x00006810) fep_hwr_candidate_pane_g1_ParamLimits

0x6872,	// (0x00006872) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6872,	// (0x00006872) bg_popup_fep_shadow_pane_cp2

0x6a10,	// (0x00006a10) fep_vkb_top_pane_g4_ParamLimits

0x6a10,	// (0x00006a10) fep_vkb_top_pane_g4

0x6a56,	// (0x00006a56) fep_vkb_side_pane_g2_ParamLimits

0x6a56,	// (0x00006a56) fep_vkb_side_pane_g2

0xbc24,	// (0x0000bc24) list_setting_pane_t4_ParamLimits

0xbc24,	// (0x0000bc24) list_setting_pane_t4

0xbc9e,	// (0x0000bc9e) list_setting_number_pane_t5_ParamLimits

0xbc9e,	// (0x0000bc9e) list_setting_number_pane_t5

0xbf98,	// (0x0000bf98) list_double_heading_pane_cp2_ParamLimits

0xbf98,	// (0x0000bf98) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t1_cp2_ParamLimits

0x6e1f,	// (0x00006e1f) list_double_heading_pane_t1_cp2

0x6e35,	// (0x00006e35) list_double_heading_pane_t2_cp2_ParamLimits

0x6e35,	// (0x00006e35) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6e47,	// (0x00006e47) list_preview_fixed_pane

0x6e8d,	// (0x00006e8d) list_empty_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_empty_pane_fp

0x6e8d,	// (0x00006e8d) list_single_cale_day_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_cale_day_pane_fp

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_heading_pane_fp

0x6e8d,	// (0x00006e8d) list_single_graphic_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_pane_fp

0x6e8d,	// (0x00006e8d) list_single_heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_heading_pane_fp

0x6e8d,	// (0x00006e8d) list_single_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_pane_fp

0x6ea2,	// (0x00006ea2) list_single_pane_fp_g1_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_pane_fp_g1

0x139b,	// (0x0000139b) list_single_pane_fp_g2_ParamLimits

0x139b,	// (0x0000139b) list_single_pane_fp_g2

0x13a7,	// (0x000013a7) list_single_pane_fp_g3_ParamLimits

0x13a7,	// (0x000013a7) list_single_pane_fp_g3

0x6eae,	// (0x00006eae) list_single_pane_fp_g4_ParamLimits

0x6eae,	// (0x00006eae) list_single_pane_fp_g4

0x0003,

0xb03f,	// (0x0000b03f) list_single_pane_fp_g_ParamLimits

0xb03f,	// (0x0000b03f) list_single_pane_fp_g

0x6eba,	// (0x00006eba) list_single_pane_fp_t1_ParamLimits

0x6eba,	// (0x00006eba) list_single_pane_fp_t1

0x6ed1,	// (0x00006ed1) list_single_graphic_pane_fp_g1_ParamLimits

0x6ed1,	// (0x00006ed1) list_single_graphic_pane_fp_g1

0x6ea2,	// (0x00006ea2) list_single_graphic_pane_fp_g2_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_graphic_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_pane_fp_g4

0x6eae,	// (0x00006eae) list_single_graphic_pane_fp_g5_ParamLimits

0x6eae,	// (0x00006eae) list_single_graphic_pane_fp_g5

0x0004,

0xb048,	// (0x0000b048) list_single_graphic_pane_fp_g_ParamLimits

0xb048,	// (0x0000b048) list_single_graphic_pane_fp_g

0x6edd,	// (0x00006edd) list_single_graphic_pane_fp_t1_ParamLimits

0x6edd,	// (0x00006edd) list_single_graphic_pane_fp_t1

0x6ed1,	// (0x00006ed1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6ed1,	// (0x00006ed1) list_single_graphic_heading_pane_fp_g1

0x6ea2,	// (0x00006ea2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_graphic_heading_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_heading_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_heading_pane_fp_g4

0x6eae,	// (0x00006eae) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6eae,	// (0x00006eae) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb048,	// (0x0000b048) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb048,	// (0x0000b048) list_single_graphic_heading_pane_fp_g

0x6ef3,	// (0x00006ef3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6ef3,	// (0x00006ef3) list_single_graphic_heading_pane_fp_t1

0x6f09,	// (0x00006f09) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f09,	// (0x00006f09) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb053,	// (0x0000b053) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb053,	// (0x0000b053) list_single_graphic_heading_pane_fp_t

0x6f1b,	// (0x00006f1b) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f1b,	// (0x00006f1b) list_single_cale_day_pane_fp_g1

0x6f53,	// (0x00006f53) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f53,	// (0x00006f53) list_single_cale_day_pane_fp_g2

0x6f5f,	// (0x00006f5f) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f5f,	// (0x00006f5f) list_single_cale_day_pane_fp_g3

0x6f87,	// (0x00006f87) list_single_cale_day_pane_fp_g4_ParamLimits

0x6f87,	// (0x00006f87) list_single_cale_day_pane_fp_g4

0x6fab,	// (0x00006fab) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fab,	// (0x00006fab) list_single_cale_day_pane_fp_g5

0x0004,

0xb058,	// (0x0000b058) list_single_cale_day_pane_fp_g_ParamLimits

0xb058,	// (0x0000b058) list_single_cale_day_pane_fp_g

0x6fcf,	// (0x00006fcf) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fcf,	// (0x00006fcf) list_single_cale_day_pane_fp_t1

0x6ff5,	// (0x00006ff5) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ff5,	// (0x00006ff5) list_single_cale_day_pane_fp_t2

0x700e,	// (0x0000700e) list_single_cale_day_pane_fp_t3_ParamLimits

0x700e,	// (0x0000700e) list_single_cale_day_pane_fp_t3

0x0002,

0xb063,	// (0x0000b063) list_single_cale_day_pane_fp_t_ParamLimits

0xb063,	// (0x0000b063) list_single_cale_day_pane_fp_t

0x6ea2,	// (0x00006ea2) list_empty_pane_fp_g1_ParamLimits

0x6ea2,	// (0x00006ea2) list_empty_pane_fp_g1

0x7027,	// (0x00007027) list_empty_pane_fp_t1

0x7035,	// (0x00007035) list_empty_pane_fp_t2

0x0001,

0xb06a,	// (0x0000b06a) list_empty_pane_fp_t

0x6ea2,	// (0x00006ea2) list_single_heading_pane_fp_g1_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_heading_pane_fp_g1

0x139b,	// (0x0000139b) list_single_heading_pane_fp_g2_ParamLimits

0x139b,	// (0x0000139b) list_single_heading_pane_fp_g2

0x13a7,	// (0x000013a7) list_single_heading_pane_fp_g3_ParamLimits

0x13a7,	// (0x000013a7) list_single_heading_pane_fp_g3

0x0002,

0xb06f,	// (0x0000b06f) list_single_heading_pane_fp_g_ParamLimits

0xb06f,	// (0x0000b06f) list_single_heading_pane_fp_g

0x7043,	// (0x00007043) list_single_heading_pane_fp_t1_ParamLimits

0x7043,	// (0x00007043) list_single_heading_pane_fp_t1

0x7055,	// (0x00007055) list_single_heading_pane_fp_t2_ParamLimits

0x7055,	// (0x00007055) list_single_heading_pane_fp_t2

0x0001,

0xb076,	// (0x0000b076) list_single_heading_pane_fp_t_ParamLimits

0xb076,	// (0x0000b076) list_single_heading_pane_fp_t

0x1700,	// (0x00001700) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173d,	// (0x0000173d) cell_app_pane_cp2_ParamLimits

0x173d,	// (0x0000173d) cell_app_pane_cp2

0x65fc,	// (0x000065fc) fep_hwr_candidate_drop_down_list_pane

0x682a,	// (0x0000682a) fep_hwr_candidate_pane_g3_ParamLimits

0x682a,	// (0x0000682a) fep_hwr_candidate_pane_g3

0x6837,	// (0x00006837) fep_hwr_candidate_pane_g4_ParamLimits

0x6837,	// (0x00006837) fep_hwr_candidate_pane_g4

0x0002,

0xafea,	// (0x0000afea) fep_hwr_candidate_pane_g_ParamLimits

0xafea,	// (0x0000afea) fep_hwr_candidate_pane_g

0x68f7,	// (0x000068f7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x68f7,	// (0x000068f7) fep_vkb_candidate_drop_down_list_pane

0x6d08,	// (0x00006d08) fep_vkb_candidate_pane_g3

0x6d10,	// (0x00006d10) fep_vkb_candidate_pane_g4

0x0002,

0xb017,	// (0x0000b017) fep_vkb_candidate_pane_g

0x6a10,	// (0x00006a10) cell_hwr_candidate_pane_g1_ParamLimits

0x6d7b,	// (0x00006d7b) cell_hwr_candidate_pane_g3_ParamLimits

0x6d7b,	// (0x00006d7b) cell_hwr_candidate_pane_g3

0x6d9c,	// (0x00006d9c) cell_hwr_candidate_pane_g4_ParamLimits

0x6d9c,	// (0x00006d9c) cell_hwr_candidate_pane_g4

0x0002,

0xb031,	// (0x0000b031) cell_hwr_candidate_pane_g_ParamLimits

0xb031,	// (0x0000b031) cell_hwr_candidate_pane_g

0x6ddb,	// (0x00006ddb) cell_vkb_candidate_pane_g3_ParamLimits

0x6ddb,	// (0x00006ddb) cell_vkb_candidate_pane_g3

0x6df6,	// (0x00006df6) cell_vkb_candidate_pane_g4_ParamLimits

0x6df6,	// (0x00006df6) cell_vkb_candidate_pane_g4

0x706b,	// (0x0000706b) cell_app_pane_cp2_g1_ParamLimits

0x706b,	// (0x0000706b) cell_app_pane_cp2_g1

0x7089,	// (0x00007089) cell_app_pane_cp2_g2_ParamLimits

0x7089,	// (0x00007089) cell_app_pane_cp2_g2

0x0001,

0xb07b,	// (0x0000b07b) cell_app_pane_cp2_g_ParamLimits

0xb07b,	// (0x0000b07b) cell_app_pane_cp2_g

0x7095,	// (0x00007095) cell_app_pane_cp2_t1_ParamLimits

0x7095,	// (0x00007095) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x70a7,	// (0x000070a7) cell_hwr_candidate_pane_cp1_ParamLimits

0x70a7,	// (0x000070a7) cell_hwr_candidate_pane_cp1

0x6a10,	// (0x00006a10) fep_hwr_candidate_drop_down_list_pane_g1

0x70c6,	// (0x000070c6) fep_hwr_candidate_drop_down_list_pane_g2

0x70d3,	// (0x000070d3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb080,	// (0x0000b080) fep_hwr_candidate_drop_down_list_pane_g

0x70e0,	// (0x000070e0) fep_hwr_candidate_drop_down_list_scroll_pane

0x70e9,	// (0x000070e9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70e9,	// (0x000070e9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x70f6,	// (0x000070f6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70f6,	// (0x000070f6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7103,	// (0x00007103) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7103,	// (0x00007103) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6ddb,	// (0x00006ddb) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ddb,	// (0x00006ddb) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6df6,	// (0x00006df6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6df6,	// (0x00006df6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7110,	// (0x00007110) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7110,	// (0x00007110) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x712b,	// (0x0000712b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x712b,	// (0x0000712b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7146,	// (0x00007146) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7146,	// (0x00007146) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb087,	// (0x0000b087) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb087,	// (0x0000b087) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7161,	// (0x00007161) cell_vkb_candidate_pane_cp1_ParamLimits

0x7161,	// (0x00007161) cell_vkb_candidate_pane_cp1

0x6a10,	// (0x00006a10) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) fep_vkb_candidate_drop_down_list_pane_g1

0x70c6,	// (0x000070c6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70c6,	// (0x000070c6) fep_vkb_candidate_drop_down_list_pane_g2

0x70d3,	// (0x000070d3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70d3,	// (0x000070d3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb080,	// (0x0000b080) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb080,	// (0x0000b080) fep_vkb_candidate_drop_down_list_pane_g

0x7181,	// (0x00007181) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7181,	// (0x00007181) fep_vkb_candidate_drop_down_list_scroll_pane

0x718e,	// (0x0000718e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x718e,	// (0x0000718e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x719b,	// (0x0000719b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x719b,	// (0x0000719b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d7b,	// (0x00006d7b) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d7b,	// (0x00006d7b) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d9c,	// (0x00006d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d9c,	// (0x00006d9c) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71b3,	// (0x000071b3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71b3,	// (0x000071b3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71d4,	// (0x000071d4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71d4,	// (0x000071d4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x71f5,	// (0x000071f5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x71f5,	// (0x000071f5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb098,	// (0x0000b098) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb098,	// (0x0000b098) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb58e,	// (0x0000b58e) title_pane_g1_ParamLimits

0xb5a1,	// (0x0000b5a1) title_pane_g2_ParamLimits

0xf383,	// (0x0000f383) title_pane_g_ParamLimits

0x1d0e,	// (0x00001d0e) aid_call2_pane

0x1d16,	// (0x00001d16) aid_call_pane

0x1d1e,	// (0x00001d1e) popup_clock_analogue_window_g1

0x1d1e,	// (0x00001d1e) popup_clock_analogue_window_g2

0x1d26,	// (0x00001d26) popup_clock_analogue_window_g3

0x1d2f,	// (0x00001d2f) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xabcd,	// (0x0000abcd) popup_clock_analogue_window_g

0x1d37,	// (0x00001d37) popup_clock_analogue_window_t1

0x1dc2,	// (0x00001dc2) clock_digital_number_pane_ParamLimits

0x1dc2,	// (0x00001dc2) clock_digital_number_pane

0x1dce,	// (0x00001dce) clock_digital_number_pane_cp02_ParamLimits

0x1dce,	// (0x00001dce) clock_digital_number_pane_cp02

0x1dda,	// (0x00001dda) clock_digital_number_pane_cp03_ParamLimits

0x1dda,	// (0x00001dda) clock_digital_number_pane_cp03

0x1de6,	// (0x00001de6) clock_digital_number_pane_cp04_ParamLimits

0x1de6,	// (0x00001de6) clock_digital_number_pane_cp04

0x1df2,	// (0x00001df2) clock_digital_separator_pane_ParamLimits

0x1df2,	// (0x00001df2) clock_digital_separator_pane

0x1dfe,	// (0x00001dfe) popup_clock_digital_window_t1_ParamLimits

0x1dfe,	// (0x00001dfe) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xabd8,	// (0x0000abd8) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xabd8,	// (0x0000abd8) clock_digital_separator_pane_g

0xcaaa,	// (0x0000caaa) aid_fill_nsta_ParamLimits

0xcbe0,	// (0x0000cbe0) indicator_nsta_pane_ParamLimits

0x33ae,	// (0x000033ae) popup_clock_analogue_window

0x33ae,	// (0x000033ae) popup_clock_digital_window

0x16c1,	// (0x000016c1) grid_indicator_nsta_pane_ParamLimits

0x5ec4,	// (0x00005ec4) clock_nsta_pane_t2

0x0001,

0xaf6a,	// (0x0000af6a) clock_nsta_pane_t

0x1af5,	// (0x00001af5) aid_size_max_handle

0xbf8f,	// (0x0000bf8f) aid_size_min_handle

0x25c7,	// (0x000025c7) editor_scroll_pane

0x7210,	// (0x00007210) ex_editor_pane

0x166e,	// (0x0000166e) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d6c,	// (0x00001d6c) scroll_pane_cp36

0xbfa9,	// (0x0000bfa9) list_single_graphic_hl_pane_cp2_ParamLimits

0xbfa9,	// (0x0000bfa9) list_single_graphic_hl_pane_cp2

0xd4db,	// (0x0000d4db) list_single_graphic_hl_pane_ParamLimits

0xd4db,	// (0x0000d4db) list_single_graphic_hl_pane

0x7218,	// (0x00007218) aid_size_min_hl_cp1

0x7221,	// (0x00007221) list_highlight_pane_cp34_ParamLimits

0x7221,	// (0x00007221) list_highlight_pane_cp34

0x7232,	// (0x00007232) list_single_graphic_hl_pane_g1_ParamLimits

0x7232,	// (0x00007232) list_single_graphic_hl_pane_g1

0xda22,	// (0x0000da22) list_single_graphic_hl_pane_g2_ParamLimits

0xda22,	// (0x0000da22) list_single_graphic_hl_pane_g2

0xda22,	// (0x0000da22) list_single_graphic_hl_pane_g3_ParamLimits

0xda22,	// (0x0000da22) list_single_graphic_hl_pane_g3

0x2538,	// (0x00002538) list_single_graphic_hl_pane_g4_ParamLimits

0x2538,	// (0x00002538) list_single_graphic_hl_pane_g4

0xda2e,	// (0x0000da2e) list_single_graphic_hl_pane_g5_ParamLimits

0xda2e,	// (0x0000da2e) list_single_graphic_hl_pane_g5

0x0004,

0xf55a,	// (0x0000f55a) list_single_graphic_hl_pane_g_ParamLimits

0xf55a,	// (0x0000f55a) list_single_graphic_hl_pane_g

0xda42,	// (0x0000da42) list_single_graphic_hl_pane_t1_ParamLimits

0xda42,	// (0x0000da42) list_single_graphic_hl_pane_t1

0x7275,	// (0x00007275) aid_size_min_hl_cp2

0x727e,	// (0x0000727e) list_highlight_pane_cp34_cp2_ParamLimits

0x727e,	// (0x0000727e) list_highlight_pane_cp34_cp2

0x7232,	// (0x00007232) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7232,	// (0x00007232) list_single_graphic_hl_pane_g1_cp2

0x728b,	// (0x0000728b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x728b,	// (0x0000728b) list_single_graphic_hl_pane_g2_cp2

0xda58,	// (0x0000da58) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xda58,	// (0x0000da58) list_single_graphic_hl_pane_g3_cp2

0x3516,	// (0x00003516) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3516,	// (0x00003516) list_single_graphic_hl_pane_g4_cp2

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x724b,	// (0x0000724b) list_single_graphic_hl_pane_g5_cp2

0xc29a,	// (0x0000c29a) control_pane_g4_ParamLimits

0xc29a,	// (0x0000c29a) control_pane_g4

0x2b34,	// (0x00002b34) bg_popup_sub_pane_cp10_ParamLimits

0x6588,	// (0x00006588) list_choice_list_pane_ParamLimits

0x6597,	// (0x00006597) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e47,	// (0x00006e47) list_preview_fixed_pane_ParamLimits

0x6e5d,	// (0x00006e5d) list_preview_fixed_pane_cp_ParamLimits

0x6e5d,	// (0x00006e5d) list_preview_fixed_pane_cp

0x6e69,	// (0x00006e69) popup_preview_fixed_window_g1_ParamLimits

0x6e69,	// (0x00006e69) popup_preview_fixed_window_g1

0x6e75,	// (0x00006e75) popup_preview_fixed_window_g2_ParamLimits

0x6e75,	// (0x00006e75) popup_preview_fixed_window_g2

0x0002,

0xb038,	// (0x0000b038) popup_preview_fixed_window_g_ParamLimits

0xb038,	// (0x0000b038) popup_preview_fixed_window_g

0x199e,	// (0x0000199e) aid_navi_side_left_pane_ParamLimits

0x19b3,	// (0x000019b3) aid_navi_side_right_pane_ParamLimits

0x19cb,	// (0x000019cb) navi_icon_pane_stacon_ParamLimits

0x19df,	// (0x000019df) navi_navi_pane_stacon_ParamLimits

0x19cb,	// (0x000019cb) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72bb,	// (0x000072bb) listscroll_text_info_pane

0x72c3,	// (0x000072c3) list_text_info_pane_ParamLimits

0x72c3,	// (0x000072c3) list_text_info_pane

0x72d2,	// (0x000072d2) scroll_pane_cp24_ParamLimits

0x72d2,	// (0x000072d2) scroll_pane_cp24

0xda66,	// (0x0000da66) list_text_info_pane_t1_ParamLimits

0xda66,	// (0x0000da66) list_text_info_pane_t1

0xc420,	// (0x0000c420) popup_fast_swap2_window_ParamLimits

0xc420,	// (0x0000c420) popup_fast_swap2_window

0x7321,	// (0x00007321) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3cc6,	// (0x00003cc6) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x732b,	// (0x0000732b) grid_fast2_pane

0x7335,	// (0x00007335) listscroll_fast2_pane_g1

0x733d,	// (0x0000733d) listscroll_fast2_pane_g2

0x0001,

0xb0b4,	// (0x0000b0b4) listscroll_fast2_pane_g

0x166e,	// (0x0000166e) scroll_pane_cp26

0x7347,	// (0x00007347) cell_fast2_pane_ParamLimits

0x7347,	// (0x00007347) cell_fast2_pane

0x735c,	// (0x0000735c) cell_fast2_pane_g1

0x7365,	// (0x00007365) cell_fast2_pane_g2

0x736e,	// (0x0000736e) cell_fast2_pane_g3

0x0002,

0xb0b9,	// (0x0000b0b9) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x72e7,	// (0x000072e7) list_single_text_info_pane

0x7376,	// (0x00007376) eswt_ctrl_button_pane

0x7376,	// (0x00007376) eswt_ctrl_canvas_pane

0x737e,	// (0x0000737e) eswt_ctrl_combo_pane

0x7376,	// (0x00007376) eswt_ctrl_default_pane

0x7376,	// (0x00007376) eswt_ctrl_label_pane

0x7386,	// (0x00007386) eswt_ctrl_wait_pane

0x738e,	// (0x0000738e) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73ae,	// (0x000073ae) popup_eswt_tasktip_window_ParamLimits

0x73ae,	// (0x000073ae) popup_eswt_tasktip_window

0x3816,	// (0x00003816) bg_popup_window_pane_cp18

0x73bf,	// (0x000073bf) eswt_control_pane_g1_ParamLimits

0x73bf,	// (0x000073bf) eswt_control_pane_g1

0x73cc,	// (0x000073cc) eswt_control_pane_g2_ParamLimits

0x73cc,	// (0x000073cc) eswt_control_pane_g2

0x73d9,	// (0x000073d9) eswt_control_pane_g3_ParamLimits

0x73d9,	// (0x000073d9) eswt_control_pane_g3

0x73e6,	// (0x000073e6) eswt_control_pane_g4_ParamLimits

0x73e6,	// (0x000073e6) eswt_control_pane_g4

0x0003,

0xb0c0,	// (0x0000b0c0) eswt_control_pane_g_ParamLimits

0xb0c0,	// (0x0000b0c0) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x73f3,	// (0x000073f3) control_button_pane_g1_ParamLimits

0x73f3,	// (0x000073f3) control_button_pane_g1

0x73ff,	// (0x000073ff) control_button_pane_g2_ParamLimits

0x73ff,	// (0x000073ff) control_button_pane_g2

0x740b,	// (0x0000740b) control_button_pane_g3_ParamLimits

0x740b,	// (0x0000740b) control_button_pane_g3

0x0002,

0xb0c9,	// (0x0000b0c9) control_button_pane_g_ParamLimits

0xb0c9,	// (0x0000b0c9) control_button_pane_g

0x741f,	// (0x0000741f) control_button_pane_t1

0x742d,	// (0x0000742d) control_button_pane_t2

0x0001,

0xb0d0,	// (0x0000b0d0) control_button_pane_t

0x367e,	// (0x0000367e) bg_button_pane_g1

0x3686,	// (0x00003686) bg_button_pane_g2

0x368e,	// (0x0000368e) bg_button_pane_g3

0x3696,	// (0x00003696) bg_button_pane_g4

0x369e,	// (0x0000369e) bg_button_pane_g5

0x36a6,	// (0x000036a6) bg_button_pane_g6

0x36ae,	// (0x000036ae) bg_button_pane_g7

0x36b6,	// (0x000036b6) bg_button_pane_g8

0x36be,	// (0x000036be) bg_button_pane_g9

0x0008,

0xad34,	// (0x0000ad34) bg_button_pane_g

0x6543,	// (0x00006543) common_borders_pane_ParamLimits

0x6543,	// (0x00006543) common_borders_pane

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy1_ParamLimits

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy1

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy1_ParamLimits

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy1

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy1_ParamLimits

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy1

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy1_ParamLimits

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy1

0x657e,	// (0x0000657e) bg_eswt_ctrl_canvas_pane_g1

0x6543,	// (0x00006543) common_borders_pane_cp2_ParamLimits

0x6543,	// (0x00006543) common_borders_pane_cp2

0x6543,	// (0x00006543) common_borders_pane_cp3_ParamLimits

0x6543,	// (0x00006543) common_borders_pane_cp3

0x743b,	// (0x0000743b) separator_horizontal_pane

0x7443,	// (0x00007443) separator_vertical_pane

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy2_ParamLimits

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy2

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy2_ParamLimits

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy2

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy2_ParamLimits

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy2

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy2_ParamLimits

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x744c,	// (0x0000744c) separator_horizontal_pane_g1

0x7455,	// (0x00007455) separator_horizontal_pane_g2

0x745e,	// (0x0000745e) separator_horizontal_pane_g3

0x0002,

0xb0d5,	// (0x0000b0d5) separator_horizontal_pane_g

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy3_ParamLimits

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy3

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy3_ParamLimits

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy3

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy3_ParamLimits

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy3

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy3_ParamLimits

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7467,	// (0x00007467) separator_vertical_pane_g1

0x7470,	// (0x00007470) separator_vertical_pane_g2

0x7479,	// (0x00007479) separator_vertical_pane_g3

0x0002,

0xb0dc,	// (0x0000b0dc) separator_vertical_pane_g

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy4_ParamLimits

0x73bf,	// (0x000073bf) eswt_control_pane_g1_copy4

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy4_ParamLimits

0x73cc,	// (0x000073cc) eswt_control_pane_g2_copy4

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy4_ParamLimits

0x73d9,	// (0x000073d9) eswt_control_pane_g3_copy4

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy4_ParamLimits

0x73e6,	// (0x000073e6) eswt_control_pane_g4_copy4

0xda81,	// (0x0000da81) eswt_ctrl_combo_button_pane

0xda89,	// (0x0000da89) eswt_ctrl_input_pane

0xda91,	// (0x0000da91) popup_choice_list_window_cp70

0xda99,	// (0x0000da99) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6543,	// (0x00006543) bg_button_pane_cp70_ParamLimits

0x6543,	// (0x00006543) bg_button_pane_cp70

0xdaa7,	// (0x0000daa7) eswt_ctrl_combo_button_pane_g1

0x74b0,	// (0x000074b0) wait_bar_pane_cp70

0x3816,	// (0x00003816) bg_popup_window_pane_cp70_ParamLimits

0x3816,	// (0x00003816) bg_popup_window_pane_cp70

0x74b8,	// (0x000074b8) popup_eswt_tasktip_window_t1

0x74ce,	// (0x000074ce) wait_bar_pane_cp71_ParamLimits

0x74ce,	// (0x000074ce) wait_bar_pane_cp71

0x74da,	// (0x000074da) grid_eswt_app_pane

0x1b59,	// (0x00001b59) scroll_pane_cp70

0xdaaf,	// (0x0000daaf) cell_eswt_app_pane_ParamLimits

0xdaaf,	// (0x0000daaf) cell_eswt_app_pane

0xdad9,	// (0x0000dad9) cell_eswt_app_pane_g1_ParamLimits

0xdad9,	// (0x0000dad9) cell_eswt_app_pane_g1

0xdb08,	// (0x0000db08) cell_eswt_app_pane_g2_ParamLimits

0xdb08,	// (0x0000db08) cell_eswt_app_pane_g2

0x0001,

0xf565,	// (0x0000f565) cell_eswt_app_pane_g_ParamLimits

0xf565,	// (0x0000f565) cell_eswt_app_pane_g

0xdb31,	// (0x0000db31) cell_eswt_app_pane_t1_ParamLimits

0xdb31,	// (0x0000db31) cell_eswt_app_pane_t1

0x759d,	// (0x0000759d) grid_highlight_pane_cp70_ParamLimits

0x759d,	// (0x0000759d) grid_highlight_pane_cp70

0x249c,	// (0x0000249c) set_content_pane_g1

0x2910,	// (0x00002910) status_small_volume_pane

0x75a9,	// (0x000075a9) status_small_volume_pane_g1

0x75b1,	// (0x000075b1) volume_small2_pane

0x75ba,	// (0x000075ba) volume_small2_pane_g1

0x75c3,	// (0x000075c3) volume_small2_pane_g2

0x75cc,	// (0x000075cc) volume_small2_pane_g3

0x75d5,	// (0x000075d5) volume_small2_pane_g4

0x75de,	// (0x000075de) volume_small2_pane_g5

0x75e7,	// (0x000075e7) volume_small2_pane_g6

0x75f0,	// (0x000075f0) volume_small2_pane_g7

0x75f9,	// (0x000075f9) volume_small2_pane_g8

0x7602,	// (0x00007602) volume_small2_pane_g9

0x760b,	// (0x0000760b) volume_small2_pane_g10

0x0009,

0xb0e8,	// (0x0000b0e8) volume_small2_pane_g

0x6b58,	// (0x00006b58) fep_vkb_top_text_pane_g1_ParamLimits

0xd9ca,	// (0x0000d9ca) fep_vkb_top_text_pane_t1_ParamLimits

0x6e81,	// (0x00006e81) popup_preview_fixed_window_g3_ParamLimits

0x6e81,	// (0x00006e81) popup_preview_fixed_window_g3

0xca3d,	// (0x0000ca3d) popup_toolbar_trans_pane

0xd333,	// (0x0000d333) aid_height_set_list_ParamLimits

0x4ea5,	// (0x00004ea5) aid_size_parent_ParamLimits

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_ParamLimits

0x249c,	// (0x0000249c) set_content_pane_g1_ParamLimits

0xd4ec,	// (0x0000d4ec) list_single_image_pane_ParamLimits

0xd4ec,	// (0x0000d4ec) list_single_image_pane

0xdb63,	// (0x0000db63) aid_size_cell_image_ParamLimits

0xdb63,	// (0x0000db63) aid_size_cell_image

0xdb70,	// (0x0000db70) grid_single_image_pane_ParamLimits

0xdb70,	// (0x0000db70) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x762f,	// (0x0000762f) list_single_image_pane_g2_ParamLimits

0x762f,	// (0x0000762f) list_single_image_pane_g2

0x0001,

0xb0fd,	// (0x0000b0fd) list_single_image_pane_g_ParamLimits

0xb0fd,	// (0x0000b0fd) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xdb7e,	// (0x0000db7e) cell_image_list_pane_ParamLimits

0xdb7e,	// (0x0000db7e) cell_image_list_pane

0xdb94,	// (0x0000db94) cell_image_list_pane_g1

0xdb9d,	// (0x0000db9d) cell_image_list_pane_g2

0x0001,

0xf56a,	// (0x0000f56a) cell_image_list_pane_g

0x7668,	// (0x00007668) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x767a,	// (0x0000767a) grid_tb_trans_pane

0x367e,	// (0x0000367e) bg_tb_trans_pane_g1

0x3686,	// (0x00003686) bg_tb_trans_pane_g2

0x368e,	// (0x0000368e) bg_tb_trans_pane_g3

0x3696,	// (0x00003696) bg_tb_trans_pane_g4

0x369e,	// (0x0000369e) bg_tb_trans_pane_g5

0x36b6,	// (0x000036b6) bg_tb_trans_pane_g6

0x36be,	// (0x000036be) bg_tb_trans_pane_g7

0x36a6,	// (0x000036a6) bg_tb_trans_pane_g8

0x36ae,	// (0x000036ae) bg_tb_trans_pane_g9

0x0008,

0xb107,	// (0x0000b107) bg_tb_trans_pane_g

0x768e,	// (0x0000768e) cell_toolbar_trans_pane_ParamLimits

0x768e,	// (0x0000768e) cell_toolbar_trans_pane

0x657e,	// (0x0000657e) cell_toolbar_trans_pane_g1

0xd732,	// (0x0000d732) list_form2_midp_pane_t1

0xd740,	// (0x0000d740) list_form2_midp_pane_t2

0x0001,

0xf535,	// (0x0000f535) list_form2_midp_pane_t

0x6115,	// (0x00006115) scroll_pane_cp51_ParamLimits

0x6320,	// (0x00006320) form2_midp_wait_pane_g1

0x6329,	// (0x00006329) form2_midp_wait_pane_g2

0x6332,	// (0x00006332) form2_midp_wait_pane_g3

0x0002,

0xafc5,	// (0x0000afc5) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x6389,	// (0x00006389) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6398,	// (0x00006398) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x50ab,	// (0x000050ab) list_single_2graphic_im_pane_ParamLimits

0x50ab,	// (0x000050ab) list_single_2graphic_im_pane

0xdba6,	// (0x0000dba6) list_single_2graphic_im_pane_g1_ParamLimits

0xdba6,	// (0x0000dba6) list_single_2graphic_im_pane_g1

0xdbb7,	// (0x0000dbb7) list_single_2graphic_im_pane_g2_ParamLimits

0xdbb7,	// (0x0000dbb7) list_single_2graphic_im_pane_g2

0xdbc3,	// (0x0000dbc3) list_single_2graphic_im_pane_g3_ParamLimits

0xdbc3,	// (0x0000dbc3) list_single_2graphic_im_pane_g3

0x0003,

0xf56f,	// (0x0000f56f) list_single_2graphic_im_pane_g_ParamLimits

0xf56f,	// (0x0000f56f) list_single_2graphic_im_pane_g

0xdbd7,	// (0x0000dbd7) list_single_2graphic_im_pane_t1_ParamLimits

0xdbd7,	// (0x0000dbd7) list_single_2graphic_im_pane_t1

0x6e8d,	// (0x00006e8d) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e8d,	// (0x00006e8d) list_single_graphic_2heading_pane_fp

0x6ed1,	// (0x00006ed1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6ed1,	// (0x00006ed1) list_single_graphic_2heading_pane_fp_g1

0x6ea2,	// (0x00006ea2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_graphic_2heading_pane_fp_g2

0x139b,	// (0x0000139b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x139b,	// (0x0000139b) list_single_graphic_2heading_pane_fp_g3

0x13a7,	// (0x000013a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13a7,	// (0x000013a7) list_single_graphic_2heading_pane_fp_g4

0x6eae,	// (0x00006eae) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6eae,	// (0x00006eae) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb048,	// (0x0000b048) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb048,	// (0x0000b048) list_single_graphic_2heading_pane_fp_g

0x7722,	// (0x00007722) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7722,	// (0x00007722) list_single_graphic_2heading_pane_fp_t1

0x6f09,	// (0x00006f09) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f09,	// (0x00006f09) list_single_graphic_2heading_pane_fp_t2

0x7738,	// (0x00007738) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7738,	// (0x00007738) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb123,	// (0x0000b123) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb123,	// (0x0000b123) list_single_graphic_2heading_pane_fp_t

0x67a8,	// (0x000067a8) fep_hwr_write_pane_g5_ParamLimits

0x67a8,	// (0x000067a8) fep_hwr_write_pane_g5

0x67b4,	// (0x000067b4) fep_hwr_write_pane_g6_ParamLimits

0x67b4,	// (0x000067b4) fep_hwr_write_pane_g6

0x738e,	// (0x0000738e) eswt_shell_pane_ParamLimits

0x3816,	// (0x00003816) bg_popup_window_pane_cp18_ParamLimits

0x4d4d,	// (0x00004d4d) heading_pane_cp70

0x74b8,	// (0x000074b8) popup_eswt_tasktip_window_t1_ParamLimits

0xcb05,	// (0x0000cb05) aid_touch_tab_arrow_left

0xcb1b,	// (0x0000cb1b) aid_touch_tab_arrow_right

0xb5b9,	// (0x0000b5b9) title_pane_g3_ParamLimits

0xb5b9,	// (0x0000b5b9) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xca3d,	// (0x0000ca3d) popup_toolbar_trans_pane_ParamLimits

0x7668,	// (0x00007668) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x767a,	// (0x0000767a) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3ee1,	// (0x00003ee1) cont_note_wait_pane_ParamLimits

0x3ee1,	// (0x00003ee1) cont_note_wait_pane

0x3ee1,	// (0x00003ee1) cont_note_image_pane_ParamLimits

0x3ee1,	// (0x00003ee1) cont_note_image_pane

0x774e,	// (0x0000774e) popup_note2_window_g1_ParamLimits

0x774e,	// (0x0000774e) popup_note2_window_g1

0x777f,	// (0x0000777f) popup_note2_window_t1_ParamLimits

0x777f,	// (0x0000777f) popup_note2_window_t1

0x77c4,	// (0x000077c4) popup_note2_window_t2_ParamLimits

0x77c4,	// (0x000077c4) popup_note2_window_t2

0x7809,	// (0x00007809) popup_note2_window_t3_ParamLimits

0x7809,	// (0x00007809) popup_note2_window_t3

0x784e,	// (0x0000784e) popup_note2_window_t4_ParamLimits

0x784e,	// (0x0000784e) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xb12f,	// (0x0000b12f) popup_note2_window_t_ParamLimits

0xb12f,	// (0x0000b12f) popup_note2_window_t

0x787d,	// (0x0000787d) popup_note2_image_window_g1_ParamLimits

0x787d,	// (0x0000787d) popup_note2_image_window_g1

0x7889,	// (0x00007889) popup_note2_image_window_g2_ParamLimits

0x7889,	// (0x00007889) popup_note2_image_window_g2

0x0001,

0xb13a,	// (0x0000b13a) popup_note2_image_window_g_ParamLimits

0xb13a,	// (0x0000b13a) popup_note2_image_window_g

0x789b,	// (0x0000789b) popup_note2_image_window_t1_ParamLimits

0x789b,	// (0x0000789b) popup_note2_image_window_t1

0x78b3,	// (0x000078b3) popup_note2_image_window_t2_ParamLimits

0x78b3,	// (0x000078b3) popup_note2_image_window_t2

0x78cb,	// (0x000078cb) popup_note2_image_window_t3_ParamLimits

0x78cb,	// (0x000078cb) popup_note2_image_window_t3

0x0002,

0xb13f,	// (0x0000b13f) popup_note2_image_window_t_ParamLimits

0xb13f,	// (0x0000b13f) popup_note2_image_window_t

0x3eef,	// (0x00003eef) popup_note2_wait_window_g1_ParamLimits

0x3eef,	// (0x00003eef) popup_note2_wait_window_g1

0x78e7,	// (0x000078e7) popup_note2_wait_window_g2_ParamLimits

0x78e7,	// (0x000078e7) popup_note2_wait_window_g2

0x3f07,	// (0x00003f07) popup_note2_wait_window_g3_ParamLimits

0x3f07,	// (0x00003f07) popup_note2_wait_window_g3

0x0002,

0xb146,	// (0x0000b146) popup_note2_wait_window_g_ParamLimits

0xb146,	// (0x0000b146) popup_note2_wait_window_g

0x78f3,	// (0x000078f3) popup_note2_wait_window_t1_ParamLimits

0x78f3,	// (0x000078f3) popup_note2_wait_window_t1

0x7911,	// (0x00007911) popup_note2_wait_window_t2_ParamLimits

0x7911,	// (0x00007911) popup_note2_wait_window_t2

0x792f,	// (0x0000792f) popup_note2_wait_window_t3_ParamLimits

0x792f,	// (0x0000792f) popup_note2_wait_window_t3

0x7941,	// (0x00007941) popup_note2_wait_window_t4_ParamLimits

0x7941,	// (0x00007941) popup_note2_wait_window_t4

0x0003,

0xb14d,	// (0x0000b14d) popup_note2_wait_window_t_ParamLimits

0xb14d,	// (0x0000b14d) popup_note2_wait_window_t

0x7953,	// (0x00007953) wait_bar2_pane_ParamLimits

0x7953,	// (0x00007953) wait_bar2_pane

0x796b,	// (0x0000796b) popup_snote2_single_text_window_g1_ParamLimits

0x796b,	// (0x0000796b) popup_snote2_single_text_window_g1

0x7993,	// (0x00007993) popup_snote2_single_text_window_t1_ParamLimits

0x7993,	// (0x00007993) popup_snote2_single_text_window_t1

0x79df,	// (0x000079df) popup_snote2_single_text_window_t2_ParamLimits

0x79df,	// (0x000079df) popup_snote2_single_text_window_t2

0x7a2b,	// (0x00007a2b) popup_snote2_single_text_window_t3_ParamLimits

0x7a2b,	// (0x00007a2b) popup_snote2_single_text_window_t3

0x7a6c,	// (0x00007a6c) popup_snote2_single_text_window_t4_ParamLimits

0x7a6c,	// (0x00007a6c) popup_snote2_single_text_window_t4

0x7aa2,	// (0x00007aa2) popup_snote2_single_text_window_t5_ParamLimits

0x7aa2,	// (0x00007aa2) popup_snote2_single_text_window_t5

0x0004,

0xb156,	// (0x0000b156) popup_snote2_single_text_window_t_ParamLimits

0xb156,	// (0x0000b156) popup_snote2_single_text_window_t

0x7acd,	// (0x00007acd) popup_snote2_single_graphic_window_g1_ParamLimits

0x7acd,	// (0x00007acd) popup_snote2_single_graphic_window_g1

0x7af5,	// (0x00007af5) popup_snote2_single_graphic_window_g2_ParamLimits

0x7af5,	// (0x00007af5) popup_snote2_single_graphic_window_g2

0x0001,

0xb161,	// (0x0000b161) popup_snote2_single_graphic_window_g_ParamLimits

0xb161,	// (0x0000b161) popup_snote2_single_graphic_window_g

0x7b1d,	// (0x00007b1d) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b1d,	// (0x00007b1d) popup_snote2_single_graphic_window_t1

0x7b69,	// (0x00007b69) popup_snote2_single_graphic_window_t2_ParamLimits

0x7b69,	// (0x00007b69) popup_snote2_single_graphic_window_t2

0x7a2b,	// (0x00007a2b) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a2b,	// (0x00007a2b) popup_snote2_single_graphic_window_t3

0x7a6c,	// (0x00007a6c) popup_snote2_single_graphic_window_t4_ParamLimits

0x7a6c,	// (0x00007a6c) popup_snote2_single_graphic_window_t4

0x7aa2,	// (0x00007aa2) popup_snote2_single_graphic_window_t5_ParamLimits

0x7aa2,	// (0x00007aa2) popup_snote2_single_graphic_window_t5

0x0004,

0xb166,	// (0x0000b166) popup_snote2_single_graphic_window_t_ParamLimits

0xb166,	// (0x0000b166) popup_snote2_single_graphic_window_t

0x5f87,	// (0x00005f87) clock_nsta_pane_cp2_t1

0x5f87,	// (0x00005f87) clock_nsta_pane_cp2_t2

0x0001,

0xaf86,	// (0x0000af86) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xab50,	// (0x0000ab50) form_field_data_wide_pane_g_ParamLimits

0xab50,	// (0x0000ab50) form_field_data_wide_pane_g

0xd66b,	// (0x0000d66b) grid_touch_3_pane_ParamLimits

0xd66b,	// (0x0000d66b) grid_touch_3_pane

0xdc08,	// (0x0000dc08) cell_touch_3_pane_ParamLimits

0xdc08,	// (0x0000dc08) cell_touch_3_pane

0x657e,	// (0x0000657e) cell_touch_3_pane_g1

0x657e,	// (0x0000657e) cell_touch_3_pane_g2

0x0001,

0xb00b,	// (0x0000b00b) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7be3,	// (0x00007be3) button_value_adjust_pane_cp7

0x7beb,	// (0x00007beb) query_popup_pane_cp3

0x1e82,	// (0x00001e82) bg_popup_sub_pane_cp22_ParamLimits

0x1e98,	// (0x00001e98) navi_navi_volume_pane_cp2

0x1eb3,	// (0x00001eb3) popup_side_volume_key_window_g2

0x1ec2,	// (0x00001ec2) popup_side_volume_key_window_g3

0x0002,

0xabe6,	// (0x0000abe6) popup_side_volume_key_window_g

0x1edf,	// (0x00001edf) popup_side_volume_key_window_t2

0x0001,

0xabed,	// (0x0000abed) popup_side_volume_key_window_t

0x2366,	// (0x00002366) popup_side_volume_key_window_ParamLimits

0xba41,	// (0x0000ba41) list_double_graphic_pane_g4_ParamLimits

0xba41,	// (0x0000ba41) list_double_graphic_pane_g4

0xd4c8,	// (0x0000d4c8) list_single_2heading_msg_pane_ParamLimits

0xd4c8,	// (0x0000d4c8) list_single_2heading_msg_pane

0xdc52,	// (0x0000dc52) list_single_2heading_msg_pane_g1_ParamLimits

0xdc52,	// (0x0000dc52) list_single_2heading_msg_pane_g1

0xdc5e,	// (0x0000dc5e) list_single_2heading_msg_pane_g2_ParamLimits

0xdc5e,	// (0x0000dc5e) list_single_2heading_msg_pane_g2

0xdc71,	// (0x0000dc71) list_single_2heading_msg_pane_g3_ParamLimits

0xdc71,	// (0x0000dc71) list_single_2heading_msg_pane_g3

0xdc7d,	// (0x0000dc7d) list_single_2heading_msg_pane_g4_ParamLimits

0xdc7d,	// (0x0000dc7d) list_single_2heading_msg_pane_g4

0x0003,

0xf578,	// (0x0000f578) list_single_2heading_msg_pane_g_ParamLimits

0xf578,	// (0x0000f578) list_single_2heading_msg_pane_g

0xdc95,	// (0x0000dc95) list_single_2heading_msg_pane_t1_ParamLimits

0xdc95,	// (0x0000dc95) list_single_2heading_msg_pane_t1

0xdcbd,	// (0x0000dcbd) list_single_2heading_msg_pane_t2_ParamLimits

0xdcbd,	// (0x0000dcbd) list_single_2heading_msg_pane_t2

0xdd28,	// (0x0000dd28) list_single_2heading_msg_pane_t3_ParamLimits

0xdd28,	// (0x0000dd28) list_single_2heading_msg_pane_t3

0x7cda,	// (0x00007cda) list_single_2heading_msg_pane_t4_ParamLimits

0x7cda,	// (0x00007cda) list_single_2heading_msg_pane_t4

0x0003,

0xf581,	// (0x0000f581) list_single_2heading_msg_pane_t_ParamLimits

0xf581,	// (0x0000f581) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c6,	// (0x000018c6) title_pane_stacon_g3_ParamLimits

0x18c6,	// (0x000018c6) title_pane_stacon_g3

0x76e5,	// (0x000076e5) list_single_2graphic_im_pane_g4_ParamLimits

0x76e5,	// (0x000076e5) list_single_2graphic_im_pane_g4

0x4aa4,	// (0x00004aa4) popup_side_volume_key_window_cp

0x552a,	// (0x0000552a) main_idle_act2_pane_t1

0x36c6,	// (0x000036c6) toolbar_button_pane_g10

0xb926,	// (0x0000b926) popup_toolbar_window_cp1

0x5f78,	// (0x00005f78) clock_nsta_pane_cp_t1

0x5f78,	// (0x00005f78) clock_nsta_pane_cp_t2

0x0001,

0xaf81,	// (0x0000af81) clock_nsta_pane_cp_t

0x1e98,	// (0x00001e98) navi_navi_volume_pane_cp2_ParamLimits

0x1ea7,	// (0x00001ea7) popup_side_volume_key_window_g1_ParamLimits

0x1eb3,	// (0x00001eb3) popup_side_volume_key_window_g2_ParamLimits

0x1ec2,	// (0x00001ec2) popup_side_volume_key_window_g3_ParamLimits

0xabe6,	// (0x0000abe6) popup_side_volume_key_window_g_ParamLimits

0x65e8,	// (0x000065e8) fep_hwr_aid_pane

0x668f,	// (0x0000668f) bg_fep_hwr_top_pane_g4_ParamLimits

0x66af,	// (0x000066af) fep_hwr_top_pane_g1_ParamLimits

0x66c1,	// (0x000066c1) fep_hwr_top_pane_g2_ParamLimits

0x66d3,	// (0x000066d3) fep_hwr_top_pane_g3_ParamLimits

0xafd6,	// (0x0000afd6) fep_hwr_top_pane_g_ParamLimits

0x66e8,	// (0x000066e8) fep_hwr_top_text_pane_ParamLimits

0x4867,	// (0x00004867) aid_touch_tab_arrow_arrow_2

0x4870,	// (0x00004870) aid_touch_tab_arrow_left_2

0x65fc,	// (0x000065fc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6633,	// (0x00006633) fep_hwr_prediction_pane

0x6960,	// (0x00006960) fep_vkb_prediction_pane

0xd9aa,	// (0x0000d9aa) fep_vkb_side_pane_g3_ParamLimits

0xd9aa,	// (0x0000d9aa) fep_vkb_side_pane_g3

0x6a10,	// (0x00006a10) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70c6,	// (0x000070c6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70d3,	// (0x000070d3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb080,	// (0x0000b080) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7cff,	// (0x00007cff) fep_hwr_prediction_pane_g1

0x7d09,	// (0x00007d09) fep_hwr_prediction_pane_g2

0x7d11,	// (0x00007d11) fep_hwr_prediction_pane_g3

0x7d19,	// (0x00007d19) fep_hwr_prediction_pane_g4

0x0003,

0xb183,	// (0x0000b183) fep_hwr_prediction_pane_g

0x7cff,	// (0x00007cff) fep_vkb_prediction_pane_g1

0x7d21,	// (0x00007d21) fep_vkb_prediction_pane_g2

0x7d29,	// (0x00007d29) fep_vkb_prediction_pane_g3

0x7d31,	// (0x00007d31) fep_vkb_prediction_pane_g4

0x0003,

0xb18c,	// (0x0000b18c) fep_vkb_prediction_pane_g

0x4e0e,	// (0x00004e0e) slider_set_pane_g3

0x4e22,	// (0x00004e22) slider_set_pane_g4

0x4e3a,	// (0x00004e3a) slider_set_pane_g5

0x4e0e,	// (0x00004e0e) slider_set_pane_g6

0x4e50,	// (0x00004e50) slider_set_pane_g7

0x500a,	// (0x0000500a) slider_form_pane_g3

0x5013,	// (0x00005013) slider_form_pane_g4

0x501b,	// (0x0000501b) slider_form_pane_g5

0x500a,	// (0x0000500a) slider_form_pane_g6

0xd47e,	// (0x0000d47e) slider_form_pane_g7

0x5804,	// (0x00005804) slider_set_pane_vc_g3

0x580d,	// (0x0000580d) slider_set_pane_vc_g4

0x5816,	// (0x00005816) slider_set_pane_vc_g5

0x5804,	// (0x00005804) slider_set_pane_vc_g6

0x581f,	// (0x0000581f) slider_set_pane_vc_g7

0x5c33,	// (0x00005c33) slider_form_pane_vc_g1

0x5c3c,	// (0x00005c3c) slider_form_pane_vc_g2

0x5c45,	// (0x00005c45) slider_form_pane_vc_g3

0x5c33,	// (0x00005c33) slider_form_pane_vc_g4

0x5c4e,	// (0x00005c4e) slider_form_pane_vc_g5

0x0004,

0xaf53,	// (0x0000af53) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d39,	// (0x00007d39) ai3_links_pane

0xdd96,	// (0x0000dd96) popup_ai3_data_window_ParamLimits

0xdd96,	// (0x0000dd96) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xddb0,	// (0x0000ddb0) cell_ai3_links_pane_ParamLimits

0xddb0,	// (0x0000ddb0) cell_ai3_links_pane

0x7d74,	// (0x00007d74) bg_popup_sub_pane_cp11

0x7d81,	// (0x00007d81) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7da6,	// (0x00007da6) heading_ai3_data_pane

0x7dae,	// (0x00007dae) list_ai3_gene_pane

0x7dba,	// (0x00007dba) popup_ai3_data_window_g1

0x7dc2,	// (0x00007dc2) heading_ai3_data_pane_g1

0x7dca,	// (0x00007dca) heading_ai3_data_pane_t1

0x7dd8,	// (0x00007dd8) list_double_ai3_gene_pane_ParamLimits

0x7dd8,	// (0x00007dd8) list_double_ai3_gene_pane

0x7de5,	// (0x00007de5) list_single_ai3_gene_pane_ParamLimits

0x7de5,	// (0x00007de5) list_single_ai3_gene_pane

0x6543,	// (0x00006543) list_highlight_pane_cp7_ParamLimits

0x6543,	// (0x00006543) list_highlight_pane_cp7

0x7df2,	// (0x00007df2) list_single_a13_gene_pane_t1_ParamLimits

0x7df2,	// (0x00007df2) list_single_a13_gene_pane_t1

0x7e09,	// (0x00007e09) list_single_ai3_gene_pane_g1

0x7e12,	// (0x00007e12) list_single_ai3_gene_pane_g2

0x0001,

0xb195,	// (0x0000b195) list_single_ai3_gene_pane_g

0x7e1a,	// (0x00007e1a) list_double_ai3_gene_pane_g1_ParamLimits

0x7e1a,	// (0x00007e1a) list_double_ai3_gene_pane_g1

0x7e26,	// (0x00007e26) list_double_ai3_gene_pane_t1_ParamLimits

0x7e26,	// (0x00007e26) list_double_ai3_gene_pane_t1

0x7e42,	// (0x00007e42) list_double_ai3_gene_pane_t2_ParamLimits

0x7e42,	// (0x00007e42) list_double_ai3_gene_pane_t2

0x7e58,	// (0x00007e58) list_double_ai3_gene_pane_t3_ParamLimits

0x7e58,	// (0x00007e58) list_double_ai3_gene_pane_t3

0x0002,

0xb19a,	// (0x0000b19a) list_double_ai3_gene_pane_t_ParamLimits

0xb19a,	// (0x0000b19a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7bfc,	// (0x00007bfc) aid_size_min_col_2

0xdc3c,	// (0x0000dc3c) aid_size_min_msg_ParamLimits

0xdc3c,	// (0x0000dc3c) aid_size_min_msg

0xd9be,	// (0x0000d9be) fep_vkb_top_text_pane_g2_ParamLimits

0xd9be,	// (0x0000d9be) fep_vkb_top_text_pane_g2

0x0001,

0xf555,	// (0x0000f555) fep_vkb_top_text_pane_g_ParamLimits

0xf555,	// (0x0000f555) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7e75,	// (0x00007e75) grid_hc_apps_pane_ParamLimits

0x7e75,	// (0x00007e75) grid_hc_apps_pane

0x7e84,	// (0x00007e84) list_hc_apps_pane

0x7e8c,	// (0x00007e8c) scroll_pane_cp37_ParamLimits

0x7e8c,	// (0x00007e8c) scroll_pane_cp37

0xddca,	// (0x0000ddca) cell_hc_apps_pane_ParamLimits

0xddca,	// (0x0000ddca) cell_hc_apps_pane

0xde88,	// (0x0000de88) cell_hc_apps_pane_g1_ParamLimits

0xde88,	// (0x0000de88) cell_hc_apps_pane_g1

0x7f77,	// (0x00007f77) cell_hc_apps_pane_g2_ParamLimits

0x7f77,	// (0x00007f77) cell_hc_apps_pane_g2

0x7f93,	// (0x00007f93) cell_hc_apps_pane_g3_ParamLimits

0x7f93,	// (0x00007f93) cell_hc_apps_pane_g3

0x0002,

0xf58a,	// (0x0000f58a) cell_hc_apps_pane_g_ParamLimits

0xf58a,	// (0x0000f58a) cell_hc_apps_pane_g

0xdeb5,	// (0x0000deb5) cell_hc_apps_pane_t1_ParamLimits

0xdeb5,	// (0x0000deb5) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xdef3,	// (0x0000def3) list_single_hc_apps_pane_ParamLimits

0xdef3,	// (0x0000def3) list_single_hc_apps_pane

0xdf20,	// (0x0000df20) list_single_hc_apps_pane_g1

0xdf39,	// (0x0000df39) list_single_hc_apps_pane_g2

0x0001,

0xf591,	// (0x0000f591) list_single_hc_apps_pane_g

0xdf52,	// (0x0000df52) list_single_hc_apps_pane_g2_copy1

0x809f,	// (0x0000809f) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xaa38,	// (0x0000aa38) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2999,	// (0x00002999) control_pane_g5_ParamLimits

0x2999,	// (0x00002999) control_pane_g5

0x4df5,	// (0x00004df5) slider_set_pane_g1_ParamLimits

0x4e02,	// (0x00004e02) slider_set_pane_g2_ParamLimits

0x4e0e,	// (0x00004e0e) slider_set_pane_g3_ParamLimits

0x4e22,	// (0x00004e22) slider_set_pane_g4_ParamLimits

0x4e3a,	// (0x00004e3a) slider_set_pane_g5_ParamLimits

0x4e0e,	// (0x00004e0e) slider_set_pane_g6_ParamLimits

0x4e50,	// (0x00004e50) slider_set_pane_g7_ParamLimits

0xae32,	// (0x0000ae32) slider_set_pane_g_ParamLimits

0x2447,	// (0x00002447) navi_icon_text_pane_ParamLimits

0xcace,	// (0x0000cace) aid_fill_nsta_2_ParamLimits

0xcb05,	// (0x0000cb05) aid_touch_tab_arrow_left_ParamLimits

0xcb1b,	// (0x0000cb1b) aid_touch_tab_arrow_right_ParamLimits

0xcbb6,	// (0x0000cbb6) clock_nsta_pane_ParamLimits

0x4849,	// (0x00004849) navi_icon_pane_g1_ParamLimits

0x4855,	// (0x00004855) navi_text_pane_t1_ParamLimits

0x6082,	// (0x00006082) navi_icon_text_pane_g1_ParamLimits

0x608e,	// (0x0000608e) navi_icon_text_pane_t1_ParamLimits

0xdf20,	// (0x0000df20) list_single_hc_apps_pane_g1_ParamLimits

0xdf39,	// (0x0000df39) list_single_hc_apps_pane_g2_ParamLimits

0xf591,	// (0x0000f591) list_single_hc_apps_pane_g_ParamLimits

0xdf52,	// (0x0000df52) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x809f,	// (0x0000809f) list_single_hc_apps_pane_t1_ParamLimits

0xb523,	// (0x0000b523) popup_toolbar2_fixed_window_ParamLimits

0xb523,	// (0x0000b523) popup_toolbar2_fixed_window

0xca33,	// (0x0000ca33) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x80cd,	// (0x000080cd) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x80cd,	// (0x000080cd) grid_toolbar2_fixed_pane

0xdf6e,	// (0x0000df6e) cell_toolbar2_fixed_pane_ParamLimits

0xdf6e,	// (0x0000df6e) cell_toolbar2_fixed_pane

0xdf89,	// (0x0000df89) cell_toolbar2_fixed_pane_g1

0x80ee,	// (0x000080ee) toolbar2_fixed_button_pane

0x367e,	// (0x0000367e) toolbar2_fixed_button_pane_g1

0x3686,	// (0x00003686) toolbar2_fixed_button_pane_g2

0x368e,	// (0x0000368e) toolbar2_fixed_button_pane_g3

0x3696,	// (0x00003696) toolbar2_fixed_button_pane_g4

0x369e,	// (0x0000369e) toolbar2_fixed_button_pane_g5

0x36a6,	// (0x000036a6) toolbar2_fixed_button_pane_g6

0x36ae,	// (0x000036ae) toolbar2_fixed_button_pane_g7

0x36b6,	// (0x000036b6) toolbar2_fixed_button_pane_g8

0x36be,	// (0x000036be) toolbar2_fixed_button_pane_g9

0x0008,

0xad34,	// (0x0000ad34) toolbar2_fixed_button_pane_g

0x80f6,	// (0x000080f6) cell_toolbar2_float_pane_ParamLimits

0x80f6,	// (0x000080f6) cell_toolbar2_float_pane

0x8107,	// (0x00008107) cell_toolbar2_float_pane_g1

0x80ee,	// (0x000080ee) toolbar2_fixed_button_pane_cp

0xd898,	// (0x0000d898) fep_vkb_accented_list_pane_ParamLimits

0xd898,	// (0x0000d898) fep_vkb_accented_list_pane

0x6d57,	// (0x00006d57) bg_popup_fep_shadow_pane_g9

0x25c7,	// (0x000025c7) bg_popup_fep_shadow_pane_cp3

0x1655,	// (0x00001655) list_accented_list_pane

0x8110,	// (0x00008110) list_single_accented_list_pane_ParamLimits

0x8110,	// (0x00008110) list_single_accented_list_pane

0x25c7,	// (0x000025c7) list_highlight_pane_cp10

0x8121,	// (0x00008121) list_single_accented_list_pane_t1

0xc95d,	// (0x0000c95d) popup_slider_window_ParamLimits

0xc95d,	// (0x0000c95d) popup_slider_window

0x7bf3,	// (0x00007bf3) aid_indentation_list_msg

0xe082,	// (0x0000e082) bg_popup_window_pane_cp19

0x8245,	// (0x00008245) popup_slider_window_g1

0x8261,	// (0x00008261) popup_slider_window_g2

0x827d,	// (0x0000827d) popup_slider_window_g3

0x0005,

0xf596,	// (0x0000f596) popup_slider_window_g

0x82d9,	// (0x000082d9) popup_slider_window_t1

0x834d,	// (0x0000834d) small_volume_slider_vertical_pane

0x657e,	// (0x0000657e) small_volume_slider_vertical_pane_g1

0x657e,	// (0x0000657e) small_volume_slider_vertical_pane_g2

0x8369,	// (0x00008369) small_volume_slider_vertical_pane_g3

0x0002,

0xb1bf,	// (0x0000b1bf) small_volume_slider_vertical_pane_g

0xb491,	// (0x0000b491) area_side_right_pane_ParamLimits

0xb491,	// (0x0000b491) area_side_right_pane

0xe13a,	// (0x0000e13a) aid_size_side_button_ParamLimits

0xe13a,	// (0x0000e13a) aid_size_side_button

0xe153,	// (0x0000e153) grid_sctrl_middle_pane_ParamLimits

0xe153,	// (0x0000e153) grid_sctrl_middle_pane

0x83a6,	// (0x000083a6) sctrl_sk_bottom_pane

0x83b7,	// (0x000083b7) sctrl_sk_top_pane

0x83c9,	// (0x000083c9) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x83d6,	// (0x000083d6) sctrl_sk_top_pane_g1

0x83e3,	// (0x000083e3) sctrl_sk_top_pane_t1

0x83c9,	// (0x000083c9) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x83fe,	// (0x000083fe) sctrl_sk_bottom_pane_g1

0x83e3,	// (0x000083e3) sctrl_sk_bottom_pane_t1

0xe16d,	// (0x0000e16d) cell_sctrl_middle_pane_ParamLimits

0xe16d,	// (0x0000e16d) cell_sctrl_middle_pane

0xe17e,	// (0x0000e17e) aid_touch_sctrl_middle_ParamLimits

0xe17e,	// (0x0000e17e) aid_touch_sctrl_middle

0xe18b,	// (0x0000e18b) bg_sctrl_middle_pane_ParamLimits

0xe18b,	// (0x0000e18b) bg_sctrl_middle_pane

0x84c3,	// (0x000084c3) cell_sctrl_middle_pane_g1_ParamLimits

0x84c3,	// (0x000084c3) cell_sctrl_middle_pane_g1

0xe199,	// (0x0000e199) cell_sctrl_middle_pane_g2_ParamLimits

0xe199,	// (0x0000e199) cell_sctrl_middle_pane_g2

0x0001,

0xf5a3,	// (0x0000f5a3) cell_sctrl_middle_pane_g_ParamLimits

0xf5a3,	// (0x0000f5a3) cell_sctrl_middle_pane_g

0x367e,	// (0x0000367e) bg_sctrl_middle_pane_g1

0x3686,	// (0x00003686) bg_sctrl_middle_pane_g2

0x368e,	// (0x0000368e) bg_sctrl_middle_pane_g3

0x3696,	// (0x00003696) bg_sctrl_middle_pane_g4

0x369e,	// (0x0000369e) bg_sctrl_middle_pane_g5

0x36a6,	// (0x000036a6) bg_sctrl_middle_pane_g6

0x36ae,	// (0x000036ae) bg_sctrl_middle_pane_g7

0x36b6,	// (0x000036b6) bg_sctrl_middle_pane_g8

0x0007,

0xb1d0,	// (0x0000b1d0) bg_sctrl_middle_pane_g

0x36be,	// (0x000036be) bg_sctrl_middle_pane_g8_copy1

0x367e,	// (0x0000367e) bg_sctrl_sk_pane_g1

0x3686,	// (0x00003686) bg_sctrl_sk_pane_g2

0x368e,	// (0x0000368e) bg_sctrl_sk_pane_g3

0x0008,

0xad34,	// (0x0000ad34) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x3696,	// (0x00003696) bg_sctrl_sk_pane_g4

0x369e,	// (0x0000369e) bg_sctrl_sk_pane_g5

0x36a6,	// (0x000036a6) bg_sctrl_sk_pane_g6

0x36ae,	// (0x000036ae) bg_sctrl_sk_pane_g7

0x36b6,	// (0x000036b6) bg_sctrl_sk_pane_g8

0x36be,	// (0x000036be) bg_sctrl_sk_pane_g9

0x2be0,	// (0x00002be0) popup_fep_china_hwr2_fs_candidate_window

0xc47d,	// (0x0000c47d) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc47d,	// (0x0000c47d) popup_fep_china_hwr2_fs_control_window

0x6a10,	// (0x00006a10) sctrl_sk_top_pane_g2

0x0001,

0xb1c6,	// (0x0000b1c6) sctrl_sk_top_pane_g

0xe1a5,	// (0x0000e1a5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe1a5,	// (0x0000e1a5) aid_fep_china_hwr2_fs_cell

0xe1b9,	// (0x0000e1b9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe1b9,	// (0x0000e1b9) bg_popup_fep_shadow_pane_cp4

0xe1d0,	// (0x0000e1d0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1d0,	// (0x0000e1d0) bg_popup_fep_shadow_pane_cp5

0xe1e2,	// (0x0000e1e2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1e2,	// (0x0000e1e2) popup_fep_china_hwr2_fs_control_bar_grid

0xe1f6,	// (0x0000e1f6) popup_fep_china_hwr2_fs_control_funtion_grid

0x8497,	// (0x00008497) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84a1,	// (0x000084a1) popup_fep_china_hwr2_fs_candidate_grid

0xe1fe,	// (0x0000e1fe) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1fe,	// (0x0000e1fe) cell_fep_china_hwr2_fs_funtion_grid

0x657e,	// (0x0000657e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x84c3,	// (0x000084c3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x84c3,	// (0x000084c3) cell_fep_china_hwr2_fs_funtion_grid_g1

0x84d1,	// (0x000084d1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x84d1,	// (0x000084d1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb1e1,	// (0x0000b1e1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb1e1,	// (0x0000b1e1) cell_fep_china_hwr2_fs_funtion_grid_g

0xe216,	// (0x0000e216) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe216,	// (0x0000e216) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe22b,	// (0x0000e22b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe22b,	// (0x0000e22b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf5a8,	// (0x0000f5a8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf5a8,	// (0x0000f5a8) cell_fep_china_hwr2_fs_funtion_grid_t

0x8518,	// (0x00008518) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8520,	// (0x00008520) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8528,	// (0x00008528) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb1eb,	// (0x0000b1eb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8530,	// (0x00008530) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8530,	// (0x00008530) cell_fep_china_hwr2_fs_candidate_grid

0x8549,	// (0x00008549) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8551,	// (0x00008551) popup_fep_china_hwr2_fs_candidate_grid_g21

0x657e,	// (0x0000657e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x657e,	// (0x0000657e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb00b,	// (0x0000b00b) cell_fep_china_hwr2_fs_candidate_grid_g

0x8559,	// (0x00008559) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31d3,	// (0x000031d3) clock_nsta_pane_cp_24_ParamLimits

0x31d3,	// (0x000031d3) clock_nsta_pane_cp_24

0x3251,	// (0x00003251) indicator_nsta_pane_cp_24_ParamLimits

0x3251,	// (0x00003251) indicator_nsta_pane_cp_24

0x46b4,	// (0x000046b4) heading_pane_g1

0x0001,

0xad99,	// (0x0000ad99) heading_pane_g

0x52bb,	// (0x000052bb) grid_sct_catagory_button_pane

0x52eb,	// (0x000052eb) scroll_pane_cp5_ParamLimits

0x6121,	// (0x00006121) button_value_adjust_pane_cp5_ParamLimits

0x6121,	// (0x00006121) button_value_adjust_pane_cp5

0x621d,	// (0x0000621d) form2_midp_time_pane_ParamLimits

0x8567,	// (0x00008567) cell_sct_catagory_button_pane_ParamLimits

0x8567,	// (0x00008567) cell_sct_catagory_button_pane

0x6543,	// (0x00006543) bg_button_pane_cp01_ParamLimits

0x6543,	// (0x00006543) bg_button_pane_cp01

0x657e,	// (0x0000657e) cell_sct_catagory_button_pane_g1

0xc9d6,	// (0x0000c9d6) popup_tb_extension_window

0xe247,	// (0x0000e247) aid_size_cell_ext_ParamLimits

0xe247,	// (0x0000e247) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xe26d,	// (0x0000e26d) grid_tb_ext_pane_ParamLimits

0xe26d,	// (0x0000e26d) grid_tb_ext_pane

0xe2ab,	// (0x0000e2ab) cell_tb_ext_pane_ParamLimits

0xe2ab,	// (0x0000e2ab) cell_tb_ext_pane

0xe2d3,	// (0x0000e2d3) cell_tb_ext_pane_g1_ParamLimits

0xe2d3,	// (0x0000e2d3) cell_tb_ext_pane_g1

0x85fd,	// (0x000085fd) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x8618,	// (0x00008618) list_uniindi_pane

0x8624,	// (0x00008624) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x8643,	// (0x00008643) uniindi_top_pane_g1

0x8659,	// (0x00008659) uniindi_top_pane_g2

0x0003,

0xb1f2,	// (0x0000b1f2) uniindi_top_pane_g

0x8683,	// (0x00008683) uniindi_top_pane_t1

0x86ad,	// (0x000086ad) list_single_uniindi_pane_ParamLimits

0x86ad,	// (0x000086ad) list_single_uniindi_pane

0x657e,	// (0x0000657e) bg_uniindi_top_pane_g1

0x86c0,	// (0x000086c0) list_single_uniindi_pane_g1

0x86d3,	// (0x000086d3) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x86f8,	// (0x000086f8) bg_sctrl_sk_pane_cp1

0x8701,	// (0x00008701) bg_sctrl_sk_pane_cp2

0x870a,	// (0x0000870a) control_bg_pane_g1

0x8713,	// (0x00008713) control_bg_pane_g2

0x0001,

0xb1fb,	// (0x0000b1fb) control_bg_pane_g

0x5f0a,	// (0x00005f0a) cell_indicator_nsta_pane_g1_ParamLimits

0xd69a,	// (0x0000d69a) cell_indicator_nsta_pane_g2_ParamLimits

0xf520,	// (0x0000f520) cell_indicator_nsta_pane_g_ParamLimits

0x62a5,	// (0x000062a5) form2_midp_time_pane_t1_ParamLimits

0x65da,	// (0x000065da) main_idle_act4_pane_ParamLimits

0x65da,	// (0x000065da) main_idle_act4_pane

0xc9d6,	// (0x0000c9d6) popup_tb_extension_window_ParamLimits

0xe292,	// (0x0000e292) tb_ext_find_pane_ParamLimits

0xe292,	// (0x0000e292) tb_ext_find_pane

0x871c,	// (0x0000871c) ai_gene_pane_1_cp1

0x2700,	// (0x00002700) ai_gene_pane_2_cp1

0x8724,	// (0x00008724) list_single_idle_plugin_calendar_pane

0x872d,	// (0x0000872d) list_single_idle_plugin_notification_pane

0x8736,	// (0x00008736) list_single_idle_plugin_player_pane

0xe2f0,	// (0x0000e2f0) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2f0,	// (0x0000e2f0) list_single_idle_plugin_shortcut_pane

0xe318,	// (0x0000e318) main_idle_act4_pane_t1

0xe32e,	// (0x0000e32e) main_idle_act4_pane_t2

0x0001,

0xf5ad,	// (0x0000f5ad) main_idle_act4_pane_t

0xe344,	// (0x0000e344) middle_sk_idle_act4_pane_ParamLimits

0xe344,	// (0x0000e344) middle_sk_idle_act4_pane

0xe360,	// (0x0000e360) popup_clock_digital_analogue_window_cp2

0xe388,	// (0x0000e388) shortcut_wheel_idle_act4_pane_ParamLimits

0xe388,	// (0x0000e388) shortcut_wheel_idle_act4_pane

0x657e,	// (0x0000657e) shortcut_wheel_idle_act4_pane_g1

0x657e,	// (0x0000657e) shortcut_wheel_idle_act4_pane_g2

0x657e,	// (0x0000657e) shortcut_wheel_idle_act4_pane_g3

0x657e,	// (0x0000657e) shortcut_wheel_idle_act4_pane_g4

0x657e,	// (0x0000657e) shortcut_wheel_idle_act4_pane_g5

0x87c9,	// (0x000087c9) shortcut_wheel_idle_act4_pane_g6

0x87d1,	// (0x000087d1) shortcut_wheel_idle_act4_pane_g7

0x87d9,	// (0x000087d9) shortcut_wheel_idle_act4_pane_g8

0x87e1,	// (0x000087e1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb205,	// (0x0000b205) shortcut_wheel_idle_act4_pane_g

0x668f,	// (0x0000668f) middle_sk_idle_act4_pane_g1_ParamLimits

0x668f,	// (0x0000668f) middle_sk_idle_act4_pane_g1

0xe405,	// (0x0000e405) middle_sk_idle_act4_pane_g2_ParamLimits

0xe405,	// (0x0000e405) middle_sk_idle_act4_pane_g2

0x0001,

0xf5c2,	// (0x0000f5c2) middle_sk_idle_act4_pane_g_ParamLimits

0xf5c2,	// (0x0000f5c2) middle_sk_idle_act4_pane_g

0xe41d,	// (0x0000e41d) middle_sk_idle_act4_pane_t1_ParamLimits

0xe41d,	// (0x0000e41d) middle_sk_idle_act4_pane_t1

0xe44c,	// (0x0000e44c) grid_ai_shortcut_pane_ParamLimits

0xe44c,	// (0x0000e44c) grid_ai_shortcut_pane

0xe469,	// (0x0000e469) list_highlight_pane_cp16_ParamLimits

0xe469,	// (0x0000e469) list_highlight_pane_cp16

0xe476,	// (0x0000e476) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe476,	// (0x0000e476) list_single_idle_plugin_shortcut_pane_g1

0xe482,	// (0x0000e482) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe482,	// (0x0000e482) list_single_idle_plugin_shortcut_pane_g2

0xe49e,	// (0x0000e49e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe49e,	// (0x0000e49e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf5c7,	// (0x0000f5c7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf5c7,	// (0x0000f5c7) list_single_idle_plugin_shortcut_pane_g

0xe4b3,	// (0x0000e4b3) cell_ai_shortcut_pane_ParamLimits

0xe4b3,	// (0x0000e4b3) cell_ai_shortcut_pane

0xe4c9,	// (0x0000e4c9) cell_ai_shortcut_pane_g1_ParamLimits

0xe4c9,	// (0x0000e4c9) cell_ai_shortcut_pane_g1

0x871c,	// (0x0000871c) ai_gene_pane_1_cp2

0x8911,	// (0x00008911) ai_gene_pane_2_cp2

0x8919,	// (0x00008919) list_highlight_pane_cp15

0x8922,	// (0x00008922) list_single_idle_plugin_calendar_pane_g1

0x8919,	// (0x00008919) list_highlight_pane_cp17

0x892a,	// (0x0000892a) list_single_idle_plugin_calendar_pane_g1_copy1

0x8932,	// (0x00008932) list_single_idle_plugin_player_pane_g1

0x55cc,	// (0x000055cc) list_single_idle_plugin_player_pane_g2

0x0001,

0xb234,	// (0x0000b234) list_single_idle_plugin_player_pane_g

0x893a,	// (0x0000893a) list_single_idle_plugin_player_pane_t1

0x8948,	// (0x00008948) list_single_idle_plugin_player_pane_t2

0x8956,	// (0x00008956) list_single_idle_plugin_player_pane_t3

0x8964,	// (0x00008964) list_single_idle_plugin_player_pane_t4

0x0003,

0xb239,	// (0x0000b239) list_single_idle_plugin_player_pane_t

0x8972,	// (0x00008972) wait_bar_pane_cp15

0x897a,	// (0x0000897a) grid_ai_notification_pane

0x55cc,	// (0x000055cc) list_single_idle_plugin_notification_pane_g1

0xe4eb,	// (0x0000e4eb) cell_ai_notification_pane_ParamLimits

0xe4eb,	// (0x0000e4eb) cell_ai_notification_pane

0x8990,	// (0x00008990) cell_ai_notification_pane_g1

0x8998,	// (0x00008998) cell_ai_notification_pane_t1

0xe4f8,	// (0x0000e4f8) tb_ext_find_button_pane

0xe500,	// (0x0000e500) tb_ext_find_pane_g1

0xe508,	// (0x0000e508) tb_ext_find_pane_t1

0x1d1e,	// (0x00001d1e) tb_ext_find_button_pane_g1

0x89c4,	// (0x000089c4) tb_ext_find_button_pane_g2

0x0001,

0xb242,	// (0x0000b242) tb_ext_find_button_pane_g

0xe318,	// (0x0000e318) main_idle_act4_pane_t1_ParamLimits

0xe32e,	// (0x0000e32e) main_idle_act4_pane_t2_ParamLimits

0xf5ad,	// (0x0000f5ad) main_idle_act4_pane_t_ParamLimits

0xe360,	// (0x0000e360) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe378,	// (0x0000e378) sat_plugin_idle_act4_pane_ParamLimits

0xe378,	// (0x0000e378) sat_plugin_idle_act4_pane

0xe516,	// (0x0000e516) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe516,	// (0x0000e516) sat_plugin_idle_act4_pane_t1

0xe52e,	// (0x0000e52e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe52e,	// (0x0000e52e) sat_plugin_idle_act4_pane_t2

0xe546,	// (0x0000e546) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe546,	// (0x0000e546) sat_plugin_idle_act4_pane_t3

0xe55e,	// (0x0000e55e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe55e,	// (0x0000e55e) sat_plugin_idle_act4_pane_t4

0x0003,

0xf5ce,	// (0x0000f5ce) sat_plugin_idle_act4_pane_t_ParamLimits

0xf5ce,	// (0x0000f5ce) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x8a19,	// (0x00008a19) popup_battery_window_g1_ParamLimits

0x8a19,	// (0x00008a19) popup_battery_window_g1

0x8a25,	// (0x00008a25) popup_battery_window_t1_ParamLimits

0x8a25,	// (0x00008a25) popup_battery_window_t1

0x8a37,	// (0x00008a37) popup_battery_window_t2_ParamLimits

0x8a37,	// (0x00008a37) popup_battery_window_t2

0x0001,

0xb250,	// (0x0000b250) popup_battery_window_t_ParamLimits

0xb250,	// (0x0000b250) popup_battery_window_t

0xc1ab,	// (0x0000c1ab) midp_canvas_pane_ParamLimits

0xc206,	// (0x0000c206) midp_keypad_pane_ParamLimits

0xc206,	// (0x0000c206) midp_keypad_pane

0x2b34,	// (0x00002b34) main_midp_pane_ParamLimits

0x5f96,	// (0x00005f96) signal_pane_g2_cp_ParamLimits

0xe576,	// (0x0000e576) aid_size_cell_midp_keypad_ParamLimits

0xe576,	// (0x0000e576) aid_size_cell_midp_keypad

0xe594,	// (0x0000e594) midp_keyp_game_grid_pane_ParamLimits

0xe594,	// (0x0000e594) midp_keyp_game_grid_pane

0xe5bb,	// (0x0000e5bb) midp_keyp_rocker_pane_ParamLimits

0xe5bb,	// (0x0000e5bb) midp_keyp_rocker_pane

0xe5fc,	// (0x0000e5fc) midp_keyp_sk_left_pane_ParamLimits

0xe5fc,	// (0x0000e5fc) midp_keyp_sk_left_pane

0xe650,	// (0x0000e650) midp_keyp_sk_right_pane_ParamLimits

0xe650,	// (0x0000e650) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe6a4,	// (0x0000e6a4) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe6a4,	// (0x0000e6a4) midp_keyp_sk_right_pane_g1

0x657e,	// (0x0000657e) midp_keyp_rocker_pane_g1

0xe6ad,	// (0x0000e6ad) keyp_game_cell_pane_ParamLimits

0xe6ad,	// (0x0000e6ad) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe6d1,	// (0x0000e6d1) keyp_game_cell_pane_g1

0xb4d3,	// (0x0000b4d3) popup_fep_vkb2_window_ParamLimits

0xb4d3,	// (0x0000b4d3) popup_fep_vkb2_window

0xe6da,	// (0x0000e6da) aid_size_cell_vkb2_ParamLimits

0xe6da,	// (0x0000e6da) aid_size_cell_vkb2

0xe710,	// (0x0000e710) popup_fep_vkb2_window_g1_ParamLimits

0xe710,	// (0x0000e710) popup_fep_vkb2_window_g1

0xe760,	// (0x0000e760) vkb2_area_bottom_pane_ParamLimits

0xe760,	// (0x0000e760) vkb2_area_bottom_pane

0xe7b4,	// (0x0000e7b4) vkb2_area_keypad_pane_ParamLimits

0xe7b4,	// (0x0000e7b4) vkb2_area_keypad_pane

0xe7fc,	// (0x0000e7fc) vkb2_area_top_pane_ParamLimits

0xe7fc,	// (0x0000e7fc) vkb2_area_top_pane

0xe882,	// (0x0000e882) vkb2_top_entry_pane_ParamLimits

0xe882,	// (0x0000e882) vkb2_top_entry_pane

0xe8af,	// (0x0000e8af) vkb2_top_grid_left_pane_ParamLimits

0xe8af,	// (0x0000e8af) vkb2_top_grid_left_pane

0xe8cf,	// (0x0000e8cf) vkb2_top_grid_right_pane_ParamLimits

0xe8cf,	// (0x0000e8cf) vkb2_top_grid_right_pane

0x8daa,	// (0x00008daa) vkb2_cell_keypad_pane_ParamLimits

0x8daa,	// (0x00008daa) vkb2_cell_keypad_pane

0xe915,	// (0x0000e915) vkb2_area_bottom_grid_pane_ParamLimits

0xe915,	// (0x0000e915) vkb2_area_bottom_grid_pane

0xe93f,	// (0x0000e93f) vkb2_area_bottom_pane_g1_ParamLimits

0xe93f,	// (0x0000e93f) vkb2_area_bottom_pane_g1

0xe965,	// (0x0000e965) vkb2_area_bottom_pane_g2_ParamLimits

0xe965,	// (0x0000e965) vkb2_area_bottom_pane_g2

0xe996,	// (0x0000e996) vkb2_area_bottom_pane_g3_ParamLimits

0xe996,	// (0x0000e996) vkb2_area_bottom_pane_g3

0x0002,

0xf5d7,	// (0x0000f5d7) vkb2_area_bottom_pane_g_ParamLimits

0xf5d7,	// (0x0000f5d7) vkb2_area_bottom_pane_g

0x8f54,	// (0x00008f54) vkb2_top_cell_left_pane_ParamLimits

0x8f54,	// (0x00008f54) vkb2_top_cell_left_pane

0xea00,	// (0x0000ea00) vkb2_top_entry_pane_g1_ParamLimits

0xea00,	// (0x0000ea00) vkb2_top_entry_pane_g1

0xea0e,	// (0x0000ea0e) vkb2_top_entry_pane_t1_ParamLimits

0xea0e,	// (0x0000ea0e) vkb2_top_entry_pane_t1

0x8fbc,	// (0x00008fbc) vkb2_top_entry_pane_t2_ParamLimits

0x8fbc,	// (0x00008fbc) vkb2_top_entry_pane_t2

0x8fee,	// (0x00008fee) vkb2_top_entry_pane_t3_ParamLimits

0x8fee,	// (0x00008fee) vkb2_top_entry_pane_t3

0x0002,

0xf5de,	// (0x0000f5de) vkb2_top_entry_pane_t_ParamLimits

0xf5de,	// (0x0000f5de) vkb2_top_entry_pane_t

0xea47,	// (0x0000ea47) vkb2_top_grid_right_pane_g1_ParamLimits

0xea47,	// (0x0000ea47) vkb2_top_grid_right_pane_g1

0x9055,	// (0x00009055) vkb2_top_grid_right_pane_g2_ParamLimits

0x9055,	// (0x00009055) vkb2_top_grid_right_pane_g2

0x906d,	// (0x0000906d) vkb2_top_grid_right_pane_g3_ParamLimits

0x906d,	// (0x0000906d) vkb2_top_grid_right_pane_g3

0xea5d,	// (0x0000ea5d) vkb2_top_grid_right_pane_g4_ParamLimits

0xea5d,	// (0x0000ea5d) vkb2_top_grid_right_pane_g4

0x0003,

0xf5e5,	// (0x0000f5e5) vkb2_top_grid_right_pane_g_ParamLimits

0xf5e5,	// (0x0000f5e5) vkb2_top_grid_right_pane_g

0x909b,	// (0x0000909b) vkb2_top_cell_left_pane_g1

0x90b2,	// (0x000090b2) vkb2_cell_keypad_pane_g1_ParamLimits

0x90b2,	// (0x000090b2) vkb2_cell_keypad_pane_g1

0x90c0,	// (0x000090c0) vkb2_cell_keypad_pane_t1_ParamLimits

0x90c0,	// (0x000090c0) vkb2_cell_keypad_pane_t1

0x90d7,	// (0x000090d7) vkb2_cell_bottom_grid_pane_ParamLimits

0x90d7,	// (0x000090d7) vkb2_cell_bottom_grid_pane

0x9110,	// (0x00009110) vkb2_cell_bottom_grid_pane_g1

0xe3a9,	// (0x0000e3a9) aid_call2_pane_cp02

0xe3b1,	// (0x0000e3b1) aid_call_pane_cp02

0xe3b9,	// (0x0000e3b9) clock_digital_number_pane_cp10

0xe3c1,	// (0x0000e3c1) clock_digital_number_pane_cp11

0xe3c9,	// (0x0000e3c9) clock_digital_number_pane_cp12

0xe3d1,	// (0x0000e3d1) clock_digital_number_pane_cp13

0xe3d9,	// (0x0000e3d9) clock_digital_separator_pane_cp10

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g1

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g2

0xe3e1,	// (0x0000e3e1) popup_clock_digital_analogue_window_cp2_g3

0x1d1e,	// (0x00001d1e) popup_clock_digital_analogue_window_cp2_g4

0xe3e1,	// (0x0000e3e1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf5b2,	// (0x0000f5b2) popup_clock_digital_analogue_window_cp2_g

0xe3e9,	// (0x0000e3e9) popup_clock_digital_analogue_window_cp2_t1

0xe3f7,	// (0x0000e3f7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf5bd,	// (0x0000f5bd) popup_clock_digital_analogue_window_cp2_t

0x657e,	// (0x0000657e) clock_digital_number_pane_cp10_g1

0x657e,	// (0x0000657e) clock_digital_number_pane_cp10_g2

0x0001,

0xb00b,	// (0x0000b00b) clock_digital_number_pane_cp10_g

0x657e,	// (0x0000657e) clock_digital_separator_pane_cp10_g1

0x657e,	// (0x0000657e) clock_digital_separator_pane_cp10_g2

0x0001,

0xb00b,	// (0x0000b00b) clock_digital_separator_pane_cp10_g

0x8665,	// (0x00008665) uniindi_top_pane_g3

0x8676,	// (0x00008676) uniindi_top_pane_g4

0x8e35,	// (0x00008e35) vkb2_row_keypad_pane_ParamLimits

0x8e35,	// (0x00008e35) vkb2_row_keypad_pane

0x912c,	// (0x0000912c) vkb2_cell_t_keypad_pane_ParamLimits

0x912c,	// (0x0000912c) vkb2_cell_t_keypad_pane

0x913c,	// (0x0000913c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x913c,	// (0x0000913c) vkb2_cell_t_keypad_pane_cp08

0x914f,	// (0x0000914f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x914f,	// (0x0000914f) vkb2_cell_t_keypad_pane_cp09

0x9163,	// (0x00009163) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9163,	// (0x00009163) vkb2_cell_t_keypad_pane_cp01

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9174,	// (0x00009174) vkb2_cell_t_keypad_pane_cp02

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9185,	// (0x00009185) vkb2_cell_t_keypad_pane_cp03

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9196,	// (0x00009196) vkb2_cell_t_keypad_pane_cp04

0x91a7,	// (0x000091a7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91a7,	// (0x000091a7) vkb2_cell_t_keypad_pane_cp05

0x91b8,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91b8,	// (0x000091b8) vkb2_cell_t_keypad_pane_cp06

0x91c9,	// (0x000091c9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91c9,	// (0x000091c9) vkb2_cell_t_keypad_pane_cp07

0x91da,	// (0x000091da) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91da,	// (0x000091da) vkb2_cell_t_keypad_pane_cp10

0x6a10,	// (0x00006a10) vkb2_cell_t_keypad_pane_g1

0x91ef,	// (0x000091ef) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xea73,	// (0x0000ea73) aid_size_cell_graphic2_ParamLimits

0xea73,	// (0x0000ea73) aid_size_cell_graphic2

0xeab1,	// (0x0000eab1) bg_popup_window_pane_cp21_ParamLimits

0xeab1,	// (0x0000eab1) bg_popup_window_pane_cp21

0xeabf,	// (0x0000eabf) graphic2_pages_pane_ParamLimits

0xeabf,	// (0x0000eabf) graphic2_pages_pane

0xeb15,	// (0x0000eb15) grid_graphic2_control_pane_ParamLimits

0xeb15,	// (0x0000eb15) grid_graphic2_control_pane

0xeb5d,	// (0x0000eb5d) grid_graphic2_pane_ParamLimits

0xeb5d,	// (0x0000eb5d) grid_graphic2_pane

0xebe4,	// (0x0000ebe4) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7dae,	// (0x00007dae) list_ai3_gene_pane_ParamLimits

0xe082,	// (0x0000e082) bg_popup_window_pane_cp19_ParamLimits

0x81e7,	// (0x000081e7) bg_touch_area_indi_pane_ParamLimits

0x81e7,	// (0x000081e7) bg_touch_area_indi_pane

0x81fd,	// (0x000081fd) bg_touch_area_indi_pane_cp01_ParamLimits

0x81fd,	// (0x000081fd) bg_touch_area_indi_pane_cp01

0x8213,	// (0x00008213) bg_touch_area_indi_pane_cp02_ParamLimits

0x8213,	// (0x00008213) bg_touch_area_indi_pane_cp02

0x822b,	// (0x0000822b) bg_touch_area_indi_pane_cp03_ParamLimits

0x822b,	// (0x0000822b) bg_touch_area_indi_pane_cp03

0x8245,	// (0x00008245) popup_slider_window_g1_ParamLimits

0x8261,	// (0x00008261) popup_slider_window_g2_ParamLimits

0x827d,	// (0x0000827d) popup_slider_window_g3_ParamLimits

0xf596,	// (0x0000f596) popup_slider_window_g_ParamLimits

0x82d9,	// (0x000082d9) popup_slider_window_t1_ParamLimits

0x834d,	// (0x0000834d) small_volume_slider_vertical_pane_ParamLimits

0xebe4,	// (0x0000ebe4) cell_graphic2_pane_ParamLimits

0xec41,	// (0x0000ec41) bg_button_pane_cp10_ParamLimits

0xec41,	// (0x0000ec41) bg_button_pane_cp10

0xec54,	// (0x0000ec54) bg_button_pane_cp11_ParamLimits

0xec54,	// (0x0000ec54) bg_button_pane_cp11

0xec67,	// (0x0000ec67) graphic2_pages_pane_g1_ParamLimits

0xec67,	// (0x0000ec67) graphic2_pages_pane_g1

0xec82,	// (0x0000ec82) graphic2_pages_pane_g2_ParamLimits

0xec82,	// (0x0000ec82) graphic2_pages_pane_g2

0x0001,

0xf5f3,	// (0x0000f5f3) graphic2_pages_pane_g_ParamLimits

0xf5f3,	// (0x0000f5f3) graphic2_pages_pane_g

0xec9a,	// (0x0000ec9a) graphic2_pages_pane_t1_ParamLimits

0xec9a,	// (0x0000ec9a) graphic2_pages_pane_t1

0xecb2,	// (0x0000ecb2) cell_graphic2_control_pane_ParamLimits

0xecb2,	// (0x0000ecb2) cell_graphic2_control_pane

0xece4,	// (0x0000ece4) cell_graphic2_pane_g1_ParamLimits

0xece4,	// (0x0000ece4) cell_graphic2_pane_g1

0x682a,	// (0x0000682a) cell_graphic2_pane_g2_ParamLimits

0x682a,	// (0x0000682a) cell_graphic2_pane_g2

0xecf1,	// (0x0000ecf1) cell_graphic2_pane_g3_ParamLimits

0xecf1,	// (0x0000ecf1) cell_graphic2_pane_g3

0x6837,	// (0x00006837) cell_graphic2_pane_g4_ParamLimits

0x6837,	// (0x00006837) cell_graphic2_pane_g4

0xecfe,	// (0x0000ecfe) cell_graphic2_pane_g5_ParamLimits

0xecfe,	// (0x0000ecfe) cell_graphic2_pane_g5

0x0004,

0xf5f8,	// (0x0000f5f8) cell_graphic2_pane_g_ParamLimits

0xf5f8,	// (0x0000f5f8) cell_graphic2_pane_g

0xed1e,	// (0x0000ed1e) cell_graphic2_pane_t1_ParamLimits

0xed1e,	// (0x0000ed1e) cell_graphic2_pane_t1

0x46a8,	// (0x000046a8) grid_highlight_pane_cp11_ParamLimits

0x46a8,	// (0x000046a8) grid_highlight_pane_cp11

0x0831,	// (0x00000831) bg_button_pane_cp05

0xed53,	// (0x0000ed53) cell_graphic2_control_pane_g1

0x657e,	// (0x0000657e) bg_touch_area_indi_pane_g1

0x94bf,	// (0x000094bf) aid_cmod_rocker_key_size

0x94c9,	// (0x000094c9) aid_cmode_itu_key_size

0x94d3,	// (0x000094d3) main_cmode_video_pane

0x94dd,	// (0x000094dd) main_comp_mode_itu_pane

0x94e9,	// (0x000094e9) main_comp_mode_rocker_pane

0x94f5,	// (0x000094f5) cell_cmode_rocker_pane_ParamLimits

0x94f5,	// (0x000094f5) cell_cmode_rocker_pane

0x9507,	// (0x00009507) cell_cmode_itu_pane_ParamLimits

0x9507,	// (0x00009507) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1

0x84c3,	// (0x000084c3) cell_cmode_rocker_pane_g2_ParamLimits

0x84c3,	// (0x000084c3) cell_cmode_rocker_pane_g2

0x0001,

0xb286,	// (0x0000b286) cell_cmode_rocker_pane_g_ParamLimits

0xb286,	// (0x0000b286) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x951c,	// (0x0000951c) cell_cmode_itu_pane_g1

0x9525,	// (0x00009525) cell_cmode_itu_pane_t1

0x9533,	// (0x00009533) cell_cmode_itu_pane_t2

0x0001,

0xb28b,	// (0x0000b28b) cell_cmode_itu_pane_t

0x86e8,	// (0x000086e8) aid_touch_ctrl_left

0x86f0,	// (0x000086f0) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xed79,	// (0x0000ed79) aid_cmod_rocker_key_size_cp

0xed83,	// (0x0000ed83) aid_cmode_itu_key_size_cp

0x9555,	// (0x00009555) compa_mode_pane_g1

0x955d,	// (0x0000955d) compa_mode_pane_g2

0x9565,	// (0x00009565) compa_mode_pane_g3

0x0002,

0xb290,	// (0x0000b290) compa_mode_pane_g

0xed8d,	// (0x0000ed8d) main_comp_mode_itu_pane_cp

0xed95,	// (0x0000ed95) main_comp_mode_rocker_pane_cp

0xed9d,	// (0x0000ed9d) cell_cmode_itu_pane_cp_ParamLimits

0xed9d,	// (0x0000ed9d) cell_cmode_itu_pane_cp

0xedb2,	// (0x0000edb2) cell_cmode_rocker_pane_cp_ParamLimits

0xedb2,	// (0x0000edb2) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a10,	// (0x00006a10) cell_cmode_rocker_pane_g1_cp

0x657e,	// (0x0000657e) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xedc4,	// (0x0000edc4) cell_cmode_itu_pane_g1_cp

0xedcd,	// (0x0000edcd) cell_cmode_itu_pane_t1_cp

0xedcd,	// (0x0000edcd) cell_cmode_itu_pane_t2_cp

0xd474,	// (0x0000d474) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x65e8,	// (0x000065e8) fep_hwr_aid_pane_ParamLimits

0x83c9,	// (0x000083c9) aid_touch_sctrl_top_ParamLimits

0x83d6,	// (0x000083d6) sctrl_sk_top_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) sctrl_sk_top_pane_g2_ParamLimits

0xb1c6,	// (0x0000b1c6) sctrl_sk_top_pane_g_ParamLimits

0x83e3,	// (0x000083e3) sctrl_sk_top_pane_t1_ParamLimits

0x83c9,	// (0x000083c9) aid_touch_sctrl_bottom_ParamLimits

0x83e3,	// (0x000083e3) sctrl_sk_bottom_pane_t1_ParamLimits

0x8631,	// (0x00008631) aid_area_touch_clock

0xe844,	// (0x0000e844) aid_vkb2_area_top_pane_cell_ParamLimits

0xe844,	// (0x0000e844) aid_vkb2_area_top_pane_cell

0xe8ef,	// (0x0000e8ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8ef,	// (0x0000e8ef) aid_vkb2_area_bottom_pane_cell

0x8f74,	// (0x00008f74) popup_char_count_window

0x95b2,	// (0x000095b2) popup_char_count_window_g1

0x95bb,	// (0x000095bb) popup_char_count_window_g2

0x95c4,	// (0x000095c4) popup_char_count_window_g3

0x0002,

0xb297,	// (0x0000b297) popup_char_count_window_g

0x95cd,	// (0x000095cd) popup_char_count_window_t1

0x8bd2,	// (0x00008bd2) popup_fep_char_preview_window_ParamLimits

0x8bd2,	// (0x00008bd2) popup_fep_char_preview_window

0xe864,	// (0x0000e864) vkb2_top_candi_pane_ParamLimits

0xe864,	// (0x0000e864) vkb2_top_candi_pane

0xeddb,	// (0x0000eddb) cell_vkb2_top_candi_pane_ParamLimits

0xeddb,	// (0x0000eddb) cell_vkb2_top_candi_pane

0x3ee1,	// (0x00003ee1) bg_popup_fep_char_preview_window_ParamLimits

0x3ee1,	// (0x00003ee1) bg_popup_fep_char_preview_window

0x9628,	// (0x00009628) popup_fep_char_preview_window_t1_ParamLimits

0x9628,	// (0x00009628) popup_fep_char_preview_window_t1

0x9662,	// (0x00009662) bg_popup_fep_char_preview_window_g1

0x966a,	// (0x0000966a) bg_popup_fep_char_preview_window_g2

0x9672,	// (0x00009672) bg_popup_fep_char_preview_window_g3

0x967a,	// (0x0000967a) bg_popup_fep_char_preview_window_g4

0x9682,	// (0x00009682) bg_popup_fep_char_preview_window_g5

0x968a,	// (0x0000968a) bg_popup_fep_char_preview_window_g6

0x9692,	// (0x00009692) bg_popup_fep_char_preview_window_g7

0x969a,	// (0x0000969a) bg_popup_fep_char_preview_window_g8

0x96a2,	// (0x000096a2) bg_popup_fep_char_preview_window_g9

0x0008,

0xb29e,	// (0x0000b29e) bg_popup_fep_char_preview_window_g

0x6a10,	// (0x00006a10) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) cell_vkb2_top_candi_pane_g1

0x6d7b,	// (0x00006d7b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d7b,	// (0x00006d7b) cell_vkb2_top_candi_pane_g2

0x6d9c,	// (0x00006d9c) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d9c,	// (0x00006d9c) cell_vkb2_top_candi_pane_g3

0x96aa,	// (0x000096aa) cell_vkb2_top_candi_pane_g4_ParamLimits

0x96aa,	// (0x000096aa) cell_vkb2_top_candi_pane_g4

0x96cb,	// (0x000096cb) cell_vkb2_top_candi_pane_g5_ParamLimits

0x96cb,	// (0x000096cb) cell_vkb2_top_candi_pane_g5

0x84c3,	// (0x000084c3) cell_vkb2_top_candi_pane_g6_ParamLimits

0x84c3,	// (0x000084c3) cell_vkb2_top_candi_pane_g6

0x0005,

0xb2b1,	// (0x0000b2b1) cell_vkb2_top_candi_pane_g_ParamLimits

0xb2b1,	// (0x0000b2b1) cell_vkb2_top_candi_pane_g

0x96ec,	// (0x000096ec) cell_vkb2_top_candi_pane_t1

0x4de1,	// (0x00004de1) aid_size_touch_slider_mark_ParamLimits

0x4de1,	// (0x00004de1) aid_size_touch_slider_mark

0xeafb,	// (0x0000eafb) grid_graphic2_catg_pane_ParamLimits

0xeafb,	// (0x0000eafb) grid_graphic2_catg_pane

0xebb7,	// (0x0000ebb7) popup_grid_graphic2_window_t1_ParamLimits

0xebb7,	// (0x0000ebb7) popup_grid_graphic2_window_t1

0xebcd,	// (0x0000ebcd) popup_grid_graphic2_window_t2_ParamLimits

0xebcd,	// (0x0000ebcd) popup_grid_graphic2_window_t2

0x0001,

0xf5ee,	// (0x0000f5ee) popup_grid_graphic2_window_t_ParamLimits

0xf5ee,	// (0x0000f5ee) popup_grid_graphic2_window_t

0x0831,	// (0x00000831) bg_button_pane_cp05_ParamLimits

0xed53,	// (0x0000ed53) cell_graphic2_control_pane_g1_ParamLimits

0xee41,	// (0x0000ee41) cell_graphic2_catg_pane_ParamLimits

0xee41,	// (0x0000ee41) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xee53,	// (0x0000ee53) cell_graphic2_catg_pane_g1

0x85fd,	// (0x000085fd) cell_tb_ext_pane_t1_ParamLimits

0x9012,	// (0x00009012) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9012,	// (0x00009012) vkb2_top_cell_right_narrow_pane

0x902a,	// (0x0000902a) vkb2_top_cell_right_wide_pane_ParamLimits

0x902a,	// (0x0000902a) vkb2_top_cell_right_wide_pane

0x65da,	// (0x000065da) bg_vkb2_func_pane_ParamLimits

0x65da,	// (0x000065da) bg_vkb2_func_pane

0x909b,	// (0x0000909b) vkb2_top_cell_left_pane_g1_ParamLimits

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp03

0x9110,	// (0x00009110) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3686,	// (0x00003686) bg_vkb2_func_pane_g1

0x368e,	// (0x0000368e) bg_vkb2_func_pane_g2

0x369e,	// (0x0000369e) bg_vkb2_func_pane_g3

0x3696,	// (0x00003696) bg_vkb2_func_pane_g4

0x36a6,	// (0x000036a6) bg_vkb2_func_pane_g5

0x36ae,	// (0x000036ae) bg_vkb2_func_pane_g6

0x36b6,	// (0x000036b6) bg_vkb2_func_pane_g7

0x36be,	// (0x000036be) bg_vkb2_func_pane_g8

0x367e,	// (0x0000367e) bg_vkb2_func_pane_g9

0x0008,

0xb2be,	// (0x0000b2be) bg_vkb2_func_pane_g

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp01

0x909b,	// (0x0000909b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x909b,	// (0x0000909b) vkb2_top_cell_right_wide_pane_g1

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65da,	// (0x000065da) bg_vkb2_fuc_pane_cp02

0x9110,	// (0x00009110) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9110,	// (0x00009110) vkb2_top_cell_right_narrow_pane_g1

0xdfc2,	// (0x0000dfc2) aid_touch_area_decrease_ParamLimits

0xdfc2,	// (0x0000dfc2) aid_touch_area_decrease

0xdff6,	// (0x0000dff6) aid_touch_area_increase_ParamLimits

0xdff6,	// (0x0000dff6) aid_touch_area_increase

0xe01e,	// (0x0000e01e) aid_touch_area_mute_ParamLimits

0xe01e,	// (0x0000e01e) aid_touch_area_mute

0xe04e,	// (0x0000e04e) aid_touch_area_slider_ParamLimits

0xe04e,	// (0x0000e04e) aid_touch_area_slider

0xe08e,	// (0x0000e08e) popup_slider_window_g4_ParamLimits

0xe08e,	// (0x0000e08e) popup_slider_window_g4

0xe0b6,	// (0x0000e0b6) popup_slider_window_g5_ParamLimits

0xe0b6,	// (0x0000e0b6) popup_slider_window_g5

0xe0ea,	// (0x0000e0ea) popup_slider_window_g6_ParamLimits

0xe0ea,	// (0x0000e0ea) popup_slider_window_g6

0x8307,	// (0x00008307) popup_slider_window_t2_ParamLimits

0x8307,	// (0x00008307) popup_slider_window_t2

0x0001,

0xb1ba,	// (0x0000b1ba) popup_slider_window_t_ParamLimits

0xb1ba,	// (0x0000b1ba) popup_slider_window_t

0xe106,	// (0x0000e106) slider_pane_ParamLimits

0xe106,	// (0x0000e106) slider_pane

0x9726,	// (0x00009726) slider_pane_g1_ParamLimits

0x9726,	// (0x00009726) slider_pane_g1

0x973a,	// (0x0000973a) slider_pane_g2_ParamLimits

0x973a,	// (0x0000973a) slider_pane_g2

0x9750,	// (0x00009750) slider_pane_g3_ParamLimits

0x9750,	// (0x00009750) slider_pane_g3

0x0003,

0xb2d1,	// (0x0000b2d1) slider_pane_g_ParamLimits

0xb2d1,	// (0x0000b2d1) slider_pane_g

0xca1e,	// (0x0000ca1e) popup_tb_float_extension_window_ParamLimits

0xca1e,	// (0x0000ca1e) popup_tb_float_extension_window

0x977c,	// (0x0000977c) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9788,	// (0x00009788) grid_tb_float_ext_pane

0x9792,	// (0x00009792) cell_tb_float_ext_pane_ParamLimits

0x9792,	// (0x00009792) cell_tb_float_ext_pane

0x97ac,	// (0x000097ac) cell_tb_float_ext_pane_g1

0x97b5,	// (0x000097b5) grid_highlight_pane_cp12

0xd876,	// (0x0000d876) cell_last_hwr_side_pane_ParamLimits

0xd876,	// (0x0000d876) cell_last_hwr_side_pane

0x657e,	// (0x0000657e) cell_last_hwr_side_pane_g1

0x97be,	// (0x000097be) cell_last_hwr_side_pane_g2

0x0001,

0xb2da,	// (0x0000b2da) cell_last_hwr_side_pane_g

0xe9cb,	// (0x0000e9cb) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9cb,	// (0x0000e9cb) vkb2_area_bottom_space_btn_pane

0x6a10,	// (0x00006a10) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x91ef,	// (0x000091ef) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96ec,	// (0x000096ec) cell_vkb2_top_candi_pane_t1_ParamLimits

0x97c7,	// (0x000097c7) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x97c7,	// (0x000097c7) vkb2_area_bottom_space_btn_pane_g1

0x9801,	// (0x00009801) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9801,	// (0x00009801) vkb2_area_bottom_space_btn_pane_g2

0x9837,	// (0x00009837) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9837,	// (0x00009837) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb2df,	// (0x0000b2df) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb2df,	// (0x0000b2df) vkb2_area_bottom_space_btn_pane_g

0x669d,	// (0x0000669d) cel_fep_hwr_func_pane_ParamLimits

0x669d,	// (0x0000669d) cel_fep_hwr_func_pane

0xd84b,	// (0x0000d84b) cell_hwr_side_button_pane_ParamLimits

0xd84b,	// (0x0000d84b) cell_hwr_side_button_pane

0x8631,	// (0x00008631) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x8643,	// (0x00008643) uniindi_top_pane_g1_ParamLimits

0x8659,	// (0x00008659) uniindi_top_pane_g2_ParamLimits

0x8665,	// (0x00008665) uniindi_top_pane_g3_ParamLimits

0x8676,	// (0x00008676) uniindi_top_pane_g4_ParamLimits

0xb1f2,	// (0x0000b1f2) uniindi_top_pane_g_ParamLimits

0x8683,	// (0x00008683) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x9881,	// (0x00009881) cel_fep_hwr_func_pane_g1_ParamLimits

0x9881,	// (0x00009881) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x9881,	// (0x00009881) cell_hwr_side_button_pane_g1_ParamLimits

0x9881,	// (0x00009881) cell_hwr_side_button_pane_g1

0x3450,	// (0x00003450) status_pane_g4_ParamLimits

0x3450,	// (0x00003450) status_pane_g4

0x346a,	// (0x0000346a) status_pane_t1

0x62b8,	// (0x000062b8) form2_midp_gauge_slider_cont_pane

0x62c0,	// (0x000062c0) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd7a1,	// (0x0000d7a1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd7b3,	// (0x0000d7b3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf53a,	// (0x0000f53a) form2_midp_gauge_slider_pane_t_ParamLimits

0x62f6,	// (0x000062f6) form2_midp_slider_pane_ParamLimits

0x8b92,	// (0x00008b92) aid_size_cell_func_vkb2_ParamLimits

0x8b92,	// (0x00008b92) aid_size_cell_func_vkb2

0x9768,	// (0x00009768) slider_pane_g4_ParamLimits

0x9768,	// (0x00009768) slider_pane_g4

0xee5c,	// (0x0000ee5c) form2_midp_gauge_slider_pane_t2_cp01

0xee6a,	// (0x0000ee6a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xee6a,	// (0x0000ee6a) form2_midp_gauge_slider_pane_t3_cp01

0x98ba,	// (0x000098ba) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x98ee,	// (0x000098ee) navi_smil_pane_g1

0x98f6,	// (0x000098f6) navi_smil_pane_t1

0x98c3,	// (0x000098c3) form2_midp_slider_pane_g1

0x98cc,	// (0x000098cc) form2_midp_slider_pane_g2

0x98d4,	// (0x000098d4) form2_midp_slider_pane_g3

0x98c3,	// (0x000098c3) form2_midp_slider_pane_g4

0xee87,	// (0x0000ee87) form2_midp_slider_pane_g5

0x0004,

0xf608,	// (0x0000f608) form2_midp_slider_pane_g

0x9871,	// (0x00009871) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9871,	// (0x00009871) vkb2_area_bottom_space_btn_pane_g4

0xcc01,	// (0x0000cc01) lc0_navi_pane_ParamLimits

0xcc01,	// (0x0000cc01) lc0_navi_pane

0xcc6b,	// (0x0000cc6b) lc0_stat_indi_pane_ParamLimits

0xcc6b,	// (0x0000cc6b) lc0_stat_indi_pane

0xcc80,	// (0x0000cc80) ls0_title_pane_ParamLimits

0xcc80,	// (0x0000cc80) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x8618,	// (0x00008618) list_uniindi_pane_ParamLimits

0x8624,	// (0x00008624) uniindi_top_pane_ParamLimits

0x86c0,	// (0x000086c0) list_single_uniindi_pane_g1_ParamLimits

0x86d3,	// (0x000086d3) list_single_uniindi_pane_t1_ParamLimits

0xee92,	// (0x0000ee92) lc0_stat_clock_pane_ParamLimits

0xee92,	// (0x0000ee92) lc0_stat_clock_pane

0xee9f,	// (0x0000ee9f) lc0_stat_indi_pane_g1_ParamLimits

0xee9f,	// (0x0000ee9f) lc0_stat_indi_pane_g1

0xeeac,	// (0x0000eeac) lc0_stat_indi_pane_g2_ParamLimits

0xeeac,	// (0x0000eeac) lc0_stat_indi_pane_g2

0x0001,

0xf613,	// (0x0000f613) lc0_stat_indi_pane_g_ParamLimits

0xf613,	// (0x0000f613) lc0_stat_indi_pane_g

0xeeb9,	// (0x0000eeb9) lc0_uni_indicator_pane_ParamLimits

0xeeb9,	// (0x0000eeb9) lc0_uni_indicator_pane

0xeec6,	// (0x0000eec6) ls0_title_pane_g1_ParamLimits

0xeec6,	// (0x0000eec6) ls0_title_pane_g1

0xeeda,	// (0x0000eeda) ls0_title_pane_t1_ParamLimits

0xeeda,	// (0x0000eeda) ls0_title_pane_t1

0xef08,	// (0x0000ef08) lc0_uni_indicator_pane_g1_ParamLimits

0xef08,	// (0x0000ef08) lc0_uni_indicator_pane_g1

0x9996,	// (0x00009996) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x99a4,	// (0x000099a4) ai5_sk_pane_ParamLimits

0x99a4,	// (0x000099a4) ai5_sk_pane

0xef2f,	// (0x0000ef2f) cell_ai5_widget_pane_ParamLimits

0xef2f,	// (0x0000ef2f) cell_ai5_widget_pane

0x9a67,	// (0x00009a67) aid_size_cell_widget_grid

0x9a7d,	// (0x00009a7d) bg_ai5_widget_pane_ParamLimits

0x9a7d,	// (0x00009a7d) bg_ai5_widget_pane

0x9ae7,	// (0x00009ae7) cell_ai5_widget_pane_g2

0x9af7,	// (0x00009af7) cell_ai5_widget_pane_g3

0x9b16,	// (0x00009b16) cell_ai5_widget_pane_g4

0x9b22,	// (0x00009b22) cell_ai5_widget_pane_g5

0x9b2e,	// (0x00009b2e) cell_ai5_widget_pane_g6

0x9b3a,	// (0x00009b3a) cell_ai5_widget_pane_g7

0x9b82,	// (0x00009b82) cell_ai5_widget_pane_t1_ParamLimits

0x9b82,	// (0x00009b82) cell_ai5_widget_pane_t1

0x9b9f,	// (0x00009b9f) cell_ai5_widget_pane_t2_ParamLimits

0x9b9f,	// (0x00009b9f) cell_ai5_widget_pane_t2

0x9bb7,	// (0x00009bb7) cell_ai5_widget_pane_t3_ParamLimits

0x9bb7,	// (0x00009bb7) cell_ai5_widget_pane_t3

0x9bcf,	// (0x00009bcf) cell_ai5_widget_pane_t4_ParamLimits

0x9bcf,	// (0x00009bcf) cell_ai5_widget_pane_t4

0x9be9,	// (0x00009be9) cell_ai5_widget_pane_t5_ParamLimits

0x9be9,	// (0x00009be9) cell_ai5_widget_pane_t5

0x9c08,	// (0x00009c08) cell_ai5_widget_pane_t6_ParamLimits

0x9c08,	// (0x00009c08) cell_ai5_widget_pane_t6

0x9c1a,	// (0x00009c1a) cell_ai5_widget_pane_t7_ParamLimits

0x9c1a,	// (0x00009c1a) cell_ai5_widget_pane_t7

0x9c33,	// (0x00009c33) cell_ai5_widget_pane_t8_ParamLimits

0x9c33,	// (0x00009c33) cell_ai5_widget_pane_t8

0x0009,

0xb30d,	// (0x0000b30d) cell_ai5_widget_pane_t_ParamLimits

0xb30d,	// (0x0000b30d) cell_ai5_widget_pane_t

0x9c7f,	// (0x00009c7f) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xef99,	// (0x0000ef99) ai5_sk_left_pane

0xefa3,	// (0x0000efa3) ai5_sk_middle_pane

0xefad,	// (0x0000efad) ai5_sk_right_pane

0x9cb5,	// (0x00009cb5) bg_ai5_widget_pane_g1_ParamLimits

0x9cb5,	// (0x00009cb5) bg_ai5_widget_pane_g1

0x9cc1,	// (0x00009cc1) bg_ai5_widget_pane_g2_ParamLimits

0x9cc1,	// (0x00009cc1) bg_ai5_widget_pane_g2

0x9ccd,	// (0x00009ccd) bg_ai5_widget_pane_g3_ParamLimits

0x9ccd,	// (0x00009ccd) bg_ai5_widget_pane_g3

0x9cd9,	// (0x00009cd9) bg_ai5_widget_pane_g4_ParamLimits

0x9cd9,	// (0x00009cd9) bg_ai5_widget_pane_g4

0x9ce5,	// (0x00009ce5) bg_ai5_widget_pane_g5_ParamLimits

0x9ce5,	// (0x00009ce5) bg_ai5_widget_pane_g5

0x9cf1,	// (0x00009cf1) bg_ai5_widget_pane_g6_ParamLimits

0x9cf1,	// (0x00009cf1) bg_ai5_widget_pane_g6

0x9cfd,	// (0x00009cfd) bg_ai5_widget_pane_g7_ParamLimits

0x9cfd,	// (0x00009cfd) bg_ai5_widget_pane_g7

0x9d09,	// (0x00009d09) bg_ai5_widget_pane_g8_ParamLimits

0x9d09,	// (0x00009d09) bg_ai5_widget_pane_g8

0x9d15,	// (0x00009d15) bg_ai5_widget_pane_g9_ParamLimits

0x9d15,	// (0x00009d15) bg_ai5_widget_pane_g9

0x0008,

0xb322,	// (0x0000b322) bg_ai5_widget_pane_g_ParamLimits

0xb322,	// (0x0000b322) bg_ai5_widget_pane_g

0x9d48,	// (0x00009d48) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d48,	// (0x00009d48) cell_shortcut_ai5_widget_pane

0x25c7,	// (0x000025c7) bg_cell_shortcut_ai5_widget_pane

0x9d59,	// (0x00009d59) cell_grid_ai5_widget_pane_g1

0x9d62,	// (0x00009d62) highlight_cell_shortcut_ai5_widget_pane

0x368e,	// (0x0000368e) ai5_sk_left_pane_g1

0x9d6a,	// (0x00009d6a) ai5_sk_left_pane_g2

0x9d72,	// (0x00009d72) ai5_sk_left_pane_g3

0x9d7a,	// (0x00009d7a) ai5_sk_left_pane_g4

0x0003,

0xb335,	// (0x0000b335) ai5_sk_left_pane_g

0x9d82,	// (0x00009d82) ai5_sk_left_pane_t1

0x3686,	// (0x00003686) ai5_sk_right_pane_g1

0x9d90,	// (0x00009d90) ai5_sk_right_pane_g2

0x9d98,	// (0x00009d98) ai5_sk_right_pane_g3

0x9da0,	// (0x00009da0) ai5_sk_right_pane_g4

0x0003,

0xb33e,	// (0x0000b33e) ai5_sk_right_pane_g

0x9da8,	// (0x00009da8) ai5_sk_right_pane_t1

0x3686,	// (0x00003686) ai5_sk_middle_pane_g1

0x368e,	// (0x0000368e) ai5_sk_middle_pane_g2

0x36a6,	// (0x000036a6) ai5_sk_middle_pane_g3

0x9d98,	// (0x00009d98) ai5_sk_middle_pane_g4

0x9d72,	// (0x00009d72) ai5_sk_middle_pane_g5

0x9db6,	// (0x00009db6) ai5_sk_middle_pane_g6

0xefb7,	// (0x0000efb7) ai5_sk_middle_pane_g7

0x0006,

0xf618,	// (0x0000f618) ai5_sk_middle_pane_g

0xcaed,	// (0x0000caed) aid_touch_area_size_lc0_ParamLimits

0xcaed,	// (0x0000caed) aid_touch_area_size_lc0

0x6dbd,	// (0x00006dbd) cell_hwr_candidate_pane_t1_ParamLimits

0x3139,	// (0x00003139) aid_touch_navi_pane

0xcd73,	// (0x0000cd73) status_dt_navi_pane_ParamLimits

0xcd73,	// (0x0000cd73) status_dt_navi_pane

0xcd8b,	// (0x0000cd8b) status_dt_sta_pane_ParamLimits

0xcd8b,	// (0x0000cd8b) status_dt_sta_pane

0xefbf,	// (0x0000efbf) dt_sta_controll_pane

0xefcc,	// (0x0000efcc) dt_sta_indi_pane

0xefd9,	// (0x0000efd9) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9df1,	// (0x00009df1) dt_sta_battery_pane

0x9df9,	// (0x00009df9) dt_sta_indi_pane_g1

0x9e02,	// (0x00009e02) dt_sta_indi_pane_g2

0x9e0b,	// (0x00009e0b) dt_sta_indi_pane_g3

0x0002,

0xb356,	// (0x0000b356) dt_sta_indi_pane_g

0x9e14,	// (0x00009e14) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x9e1d,	// (0x00009e1d) dt_sta_title_pane_g1

0x9e25,	// (0x00009e25) dt_sta_title_pane_t1_ParamLimits

0x9e25,	// (0x00009e25) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0x9e3a,	// (0x00009e3a) dt_sta_controll_pane_g1

0x9e43,	// (0x00009e43) bg_dt_sta_title_pane_g1

0x9e4c,	// (0x00009e4c) bg_dt_sta_title_pane_g2

0x9e55,	// (0x00009e55) bg_dt_sta_title_pane_g3

0x0002,

0xb35d,	// (0x0000b35d) bg_dt_sta_title_pane_g

0x657e,	// (0x0000657e) bg_dt_sta_indi_pane_g1

0x9e5e,	// (0x00009e5e) dt_sta_signal_pane_g1

0x9e66,	// (0x00009e66) dt_sta_signal_pane_g2

0x0001,

0xb364,	// (0x0000b364) dt_sta_signal_pane_g

0x9e6e,	// (0x00009e6e) dt_sta_battery_pane_g1

0x9e77,	// (0x00009e77) dt_sta_battery_pane_t1

0x657e,	// (0x0000657e) bg_dt_sta_control_pane_g1

0x1f01,	// (0x00001f01) fep_china_uni_eep_pane

0x1f09,	// (0x00001f09) fep_china_uni_entry_pane_ParamLimits

0x1f19,	// (0x00001f19) popup_fep_china_uni_window_g1_ParamLimits

0x1f29,	// (0x00001f29) popup_fep_china_uni_window_g2_ParamLimits

0x1f29,	// (0x00001f29) popup_fep_china_uni_window_g2

0x0001,

0xabf2,	// (0x0000abf2) popup_fep_china_uni_window_g_ParamLimits

0xabf2,	// (0x0000abf2) popup_fep_china_uni_window_g

0x9e86,	// (0x00009e86) fep_china_uni_eep_pane_g1

0x9e8e,	// (0x00009e8e) fep_china_uni_eep_pane_t1

0x98e5,	// (0x000098e5) aid_touch_area_size_smil_player

0x3285,	// (0x00003285) lc0_clock_pane

0x345e,	// (0x0000345e) status_pane_g5_ParamLimits

0x345e,	// (0x0000345e) status_pane_g5

0xc5a0,	// (0x0000c5a0) popup_keymap_window

0x3424,	// (0x00003424) status_icon_pane

0x9af7,	// (0x00009af7) cell_ai5_widget_pane_g3_ParamLimits

0x9b16,	// (0x00009b16) cell_ai5_widget_pane_g4_ParamLimits

0x9b22,	// (0x00009b22) cell_ai5_widget_pane_g5_ParamLimits

0x9b46,	// (0x00009b46) cell_ai5_widget_pane_g8_ParamLimits

0x9b46,	// (0x00009b46) cell_ai5_widget_pane_g8

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_g9_ParamLimits

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_g9

0x9b6e,	// (0x00009b6e) cell_ai5_widget_pane_g10_ParamLimits

0x9b6e,	// (0x00009b6e) cell_ai5_widget_pane_g10

0x9e9d,	// (0x00009e9d) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9ea5,	// (0x00009ea5) popup_keymap_window_t1

0xc2b2,	// (0x0000c2b2) control_pane_g6_ParamLimits

0xc2b2,	// (0x0000c2b2) control_pane_g6

0xc2bf,	// (0x0000c2bf) control_pane_g7_ParamLimits

0xc2bf,	// (0x0000c2bf) control_pane_g7

0xc2cc,	// (0x0000c2cc) control_pane_g8_ParamLimits

0xc2cc,	// (0x0000c2cc) control_pane_g8

0xefbf,	// (0x0000efbf) dt_sta_controll_pane_ParamLimits

0xefcc,	// (0x0000efcc) dt_sta_indi_pane_ParamLimits

0xefd9,	// (0x0000efd9) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb519,	// (0x0000b519) popup_sk_window

0x3ee1,	// (0x00003ee1) bg_popup_sub_pane_cp28_ParamLimits

0x3ee1,	// (0x00003ee1) bg_popup_sub_pane_cp28

0x9eb3,	// (0x00009eb3) popup_discreet_window_g1_ParamLimits

0x9eb3,	// (0x00009eb3) popup_discreet_window_g1

0x9ed3,	// (0x00009ed3) popup_discreet_window_t1_ParamLimits

0x9ed3,	// (0x00009ed3) popup_discreet_window_t1

0x9ef1,	// (0x00009ef1) popup_discreet_window_t2_ParamLimits

0x9ef1,	// (0x00009ef1) popup_discreet_window_t2

0x0002,

0xb369,	// (0x0000b369) popup_discreet_window_t_ParamLimits

0xb369,	// (0x0000b369) popup_discreet_window_t

0x9f43,	// (0x00009f43) popup_sk_window_g1

0x9f4d,	// (0x00009f4d) popup_sk_window_g2

0x0001,

0xb370,	// (0x0000b370) popup_sk_window_g

0x9f57,	// (0x00009f57) popup_sk_window_t1

0x9f65,	// (0x00009f65) popup_sk_window_t1_copy1

0x9ae7,	// (0x00009ae7) cell_ai5_widget_pane_g2_ParamLimits

0x9c45,	// (0x00009c45) cell_ai5_widget_pane_t9_ParamLimits

0x9c45,	// (0x00009c45) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefeb,	// (0x0000efeb) aid_fshwr2_btn_pane

0xeffa,	// (0x0000effa) aid_fshwr2_syb_pane

0xf00c,	// (0x0000f00c) aid_fshwr2_txt_pane

0xf01b,	// (0x0000f01b) fshwr2_func_candi_pane

0xf02c,	// (0x0000f02c) fshwr2_hwr_syb_pane

0xf047,	// (0x0000f047) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xf05f,	// (0x0000f05f) fshwr2_icf_pane_t1_ParamLimits

0xf05f,	// (0x0000f05f) fshwr2_icf_pane_t1

0x657e,	// (0x0000657e) fshwr2_func_candi_pane_g1

0xa008,	// (0x0000a008) fshwr2_func_candi_row_pane_ParamLimits

0xa008,	// (0x0000a008) fshwr2_func_candi_row_pane

0xf077,	// (0x0000f077) cell_fshwr2_syb_pane_ParamLimits

0xf077,	// (0x0000f077) cell_fshwr2_syb_pane

0x6a10,	// (0x00006a10) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xa033,	// (0x0000a033) fshwr2_func_candi_cell_pane_ParamLimits

0xa033,	// (0x0000a033) fshwr2_func_candi_cell_pane

0xa064,	// (0x0000a064) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa064,	// (0x0000a064) fshwr2_func_candi_cell_bg_pane

0xa07e,	// (0x0000a07e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa07e,	// (0x0000a07e) fshwr2_func_candi_cell_pane_g1

0xa0a6,	// (0x0000a0a6) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa0a6,	// (0x0000a0a6) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25c7,	// (0x000025c7) cell_fshwr2_syb_bg_pane

0xf091,	// (0x0000f091) cell_fshwr2_syb_bg_pane_g1

0xf099,	// (0x0000f099) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0x4b54,	// (0x00004b54) uni_indicator_pane_g1_ParamLimits

0x4b69,	// (0x00004b69) uni_indicator_pane_g2_ParamLimits

0x4b7f,	// (0x00004b7f) uni_indicator_pane_g3_ParamLimits

0x4b95,	// (0x00004b95) uni_indicator_pane_g4_ParamLimits

0x4b95,	// (0x00004b95) uni_indicator_pane_g4

0x4ba9,	// (0x00004ba9) uni_indicator_pane_g5_ParamLimits

0x4ba9,	// (0x00004ba9) uni_indicator_pane_g5

0x4bbd,	// (0x00004bbd) uni_indicator_pane_g6_ParamLimits

0x4bbd,	// (0x00004bbd) uni_indicator_pane_g6

0xadef,	// (0x0000adef) uni_indicator_pane_g_ParamLimits

0xdf9e,	// (0x0000df9e) popup_tmo_note_window_ParamLimits

0xdf9e,	// (0x0000df9e) popup_tmo_note_window

0x1375,	// (0x00001375) fshwr2_bg_pane

0xa097,	// (0x0000a097) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa097,	// (0x0000a097) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb375,	// (0x0000b375) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb375,	// (0x0000b375) fshwr2_func_candi_cell_pane_g

0x657e,	// (0x0000657e) bg_popup_window_pane_cp01

0xa0d0,	// (0x0000a0d0) bg_popup_window_pane_g1_cp01

0xa0d9,	// (0x0000a0d9) bg_popup_window_pane_cp22_ParamLimits

0xa0d9,	// (0x0000a0d9) bg_popup_window_pane_cp22

0xa0e7,	// (0x0000a0e7) listscroll_tmo_link_pane_ParamLimits

0xa0e7,	// (0x0000a0e7) listscroll_tmo_link_pane

0xa127,	// (0x0000a127) popup_tmo_note_window_g1_ParamLimits

0xa127,	// (0x0000a127) popup_tmo_note_window_g1

0xa134,	// (0x0000a134) tmo_note_info_pane_ParamLimits

0xa134,	// (0x0000a134) tmo_note_info_pane

0xf0a8,	// (0x0000f0a8) list_tmo_note_info_pane_g1_ParamLimits

0xf0a8,	// (0x0000f0a8) list_tmo_note_info_pane_g1

0xa165,	// (0x0000a165) list_tmo_note_info_pane_g2_ParamLimits

0xa165,	// (0x0000a165) list_tmo_note_info_pane_g2

0x0001,

0xf627,	// (0x0000f627) list_tmo_note_info_pane_g_ParamLimits

0xf627,	// (0x0000f627) list_tmo_note_info_pane_g

0xa181,	// (0x0000a181) list_tmo_note_info_text_pane_ParamLimits

0xa181,	// (0x0000a181) list_tmo_note_info_text_pane

0xa202,	// (0x0000a202) list_tmo_link_pane

0xa20f,	// (0x0000a20f) scroll_pane_cp20

0xa21c,	// (0x0000a21c) list_single_tmo_link_pane_ParamLimits

0xa21c,	// (0x0000a21c) list_single_tmo_link_pane

0xa22c,	// (0x0000a22c) list_single_tmo_link_pane_t1

0xa23a,	// (0x0000a23a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa23a,	// (0x0000a23a) list_tmo_note_info_text_pane_t1

0xbe3d,	// (0x0000be3d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe3d,	// (0x0000be3d) aid_size_touch_scroll_bar_cp01

0xbd6d,	// (0x0000bd6d) aid_size_touch_slider_marker

0xb509,	// (0x0000b509) popup_settings_window_ParamLimits

0xb509,	// (0x0000b509) popup_settings_window

0x2b5c,	// (0x00002b5c) popup_candi_list_indi_window

0x3139,	// (0x00003139) aid_touch_navi_pane_ParamLimits

0x839d,	// (0x0000839d) rs_clock_indi_pane

0x83a6,	// (0x000083a6) sctrl_sk_bottom_pane_ParamLimits

0x83b7,	// (0x000083b7) sctrl_sk_top_pane_ParamLimits

0x8bec,	// (0x00008bec) popup_fep_tooltip_window

0x9a67,	// (0x00009a67) aid_size_cell_widget_grid_ParamLimits

0x9adb,	// (0x00009adb) cell_ai5_widget_pane_g1_ParamLimits

0x9adb,	// (0x00009adb) cell_ai5_widget_pane_g1

0x9b2e,	// (0x00009b2e) cell_ai5_widget_pane_g6_ParamLimits

0x9b3a,	// (0x00009b3a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb2f8,	// (0x0000b2f8) cell_ai5_widget_pane_g_ParamLimits

0xb2f8,	// (0x0000b2f8) cell_ai5_widget_pane_g

0x9c69,	// (0x00009c69) cell_ai5_widget_pane_t10_ParamLimits

0x9c69,	// (0x00009c69) cell_ai5_widget_pane_t10

0x9c7f,	// (0x00009c7f) grid_ai5_widget_pane_ParamLimits

0x9d21,	// (0x00009d21) cell_contacts_ai5_widget_pane_ParamLimits

0x9d21,	// (0x00009d21) cell_contacts_ai5_widget_pane

0x9f06,	// (0x00009f06) popup_discreet_window_t3_ParamLimits

0x9f06,	// (0x00009f06) popup_discreet_window_t3

0x9fdd,	// (0x00009fdd) popup_fshwr2_char_preview_window_ParamLimits

0x9fdd,	// (0x00009fdd) popup_fshwr2_char_preview_window

0xf0bf,	// (0x0000f0bf) tmo_note_info_pane_t1

0xf0d4,	// (0x0000f0d4) tmo_note_info_pane_t2

0xf0eb,	// (0x0000f0eb) tmo_note_info_pane_t3

0xa1de,	// (0x0000a1de) tmo_note_info_pane_t4

0xa1f0,	// (0x0000a1f0) tmo_note_info_pane_t5

0x0004,

0xf62c,	// (0x0000f62c) tmo_note_info_pane_t

0xa202,	// (0x0000a202) list_tmo_link_pane_ParamLimits

0xa20f,	// (0x0000a20f) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa253,	// (0x0000a253) popup_fshwr2_char_preview_window_t1

0xa261,	// (0x0000a261) popup_candi_list_indi_window_g1

0xa26a,	// (0x0000a26a) bg_cell_contacts_ai5_widget_pane

0xa276,	// (0x0000a276) cell_contacts_ai5_widget_pane_g1

0xa28a,	// (0x0000a28a) cell_contacts_ai5_widget_pane_g2

0xa296,	// (0x0000a296) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb38a,	// (0x0000b38a) cell_contacts_ai5_widget_pane_g

0xa2a9,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf165,	// (0x0000f165) settings_container_pane

0x25c7,	// (0x000025c7) listscroll_set_pane_copy1

0x5968,	// (0x00005968) scroll_pane_cp121_copy1

0xa32c,	// (0x0000a32c) set_content_pane_copy1

0xf171,	// (0x0000f171) aid_height_set_list_copy1_ParamLimits

0xf171,	// (0x0000f171) aid_height_set_list_copy1

0x4ea5,	// (0x00004ea5) aid_size_parent_copy1_ParamLimits

0x4ea5,	// (0x00004ea5) aid_size_parent_copy1

0xf17d,	// (0x0000f17d) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf17d,	// (0x0000f17d) button_value_adjust_pane_cp6_copy1

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_copy1_ParamLimits

0x2b34,	// (0x00002b34) list_highlight_pane_cp2_copy1

0xf191,	// (0x0000f191) list_set_pane_copy1_ParamLimits

0xf191,	// (0x0000f191) list_set_pane_copy1

0xf100,	// (0x0000f100) main_pane_set_t1_copy1_ParamLimits

0xf100,	// (0x0000f100) main_pane_set_t1_copy1

0xf13a,	// (0x0000f13a) main_pane_set_t2_copy1_ParamLimits

0xf13a,	// (0x0000f13a) main_pane_set_t2_copy1

0xf23e,	// (0x0000f23e) main_pane_set_t3_copy1

0xf24c,	// (0x0000f24c) main_pane_set_t4_copy1

0xf159,	// (0x0000f159) set_content_pane_g1_copy1_ParamLimits

0xf159,	// (0x0000f159) set_content_pane_g1_copy1

0xf25a,	// (0x0000f25a) setting_code_pane_copy1

0xa425,	// (0x0000a425) setting_slider_graphic_pane_copy1

0xa425,	// (0x0000a425) setting_slider_pane_copy1

0xa425,	// (0x0000a425) setting_text_pane_copy1

0xa425,	// (0x0000a425) setting_volume_pane_copy1

0xf25a,	// (0x0000f25a) settings_code_pane_cp2_copy1

0xf262,	// (0x0000f262) settings_code_pane_cp_copy1_ParamLimits

0xf262,	// (0x0000f262) settings_code_pane_cp_copy1

0xf276,	// (0x0000f276) volume_set_pane_copy1

0xf27e,	// (0x0000f27e) volume_set_pane_g10_copy1

0xf286,	// (0x0000f286) volume_set_pane_g1_copy1

0xf28e,	// (0x0000f28e) volume_set_pane_g2_copy1

0xf296,	// (0x0000f296) volume_set_pane_g3_copy1

0xf29e,	// (0x0000f29e) volume_set_pane_g4_copy1

0xf2a6,	// (0x0000f2a6) volume_set_pane_g5_copy1

0xf2ae,	// (0x0000f2ae) volume_set_pane_g6_copy1

0xf2b6,	// (0x0000f2b6) volume_set_pane_g7_copy1

0xf2be,	// (0x0000f2be) volume_set_pane_g8_copy1

0xf2c6,	// (0x0000f2c6) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa499,	// (0x0000a499) setting_slider_pane_t1_copy1_ParamLimits

0xa499,	// (0x0000a499) setting_slider_pane_t1_copy1

0xf2ce,	// (0x0000f2ce) setting_slider_pane_t2_copy1_ParamLimits

0xf2ce,	// (0x0000f2ce) setting_slider_pane_t2_copy1

0xf2e8,	// (0x0000f2e8) setting_slider_pane_t3_copy1_ParamLimits

0xf2e8,	// (0x0000f2e8) setting_slider_pane_t3_copy1

0xf300,	// (0x0000f300) slider_set_pane_copy1_ParamLimits

0xf300,	// (0x0000f300) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa4ff,	// (0x0000a4ff) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xf316,	// (0x0000f316) set_opt_bg_pane_g7_copy2

0xa511,	// (0x0000a511) set_opt_bg_pane_g8_copy2

0xa51b,	// (0x0000a51b) set_opt_bg_pane_g9_copy2

0xa525,	// (0x0000a525) aid_size_touch_slider_mark_copy1_ParamLimits

0xa525,	// (0x0000a525) aid_size_touch_slider_mark_copy1

0xa539,	// (0x0000a539) slider_set_pane_g1_copy1

0xa542,	// (0x0000a542) slider_set_pane_g2_copy1

0x4e0e,	// (0x00004e0e) slider_set_pane_g3_copy1_ParamLimits

0x4e0e,	// (0x00004e0e) slider_set_pane_g3_copy1

0x4e22,	// (0x00004e22) slider_set_pane_g4_copy1_ParamLimits

0x4e22,	// (0x00004e22) slider_set_pane_g4_copy1

0x4e3a,	// (0x00004e3a) slider_set_pane_g5_copy1_ParamLimits

0x4e3a,	// (0x00004e3a) slider_set_pane_g5_copy1

0x4e0e,	// (0x00004e0e) slider_set_pane_g6_copy1_ParamLimits

0x4e0e,	// (0x00004e0e) slider_set_pane_g6_copy1

0xf31e,	// (0x0000f31e) slider_set_pane_g7_copy1_ParamLimits

0xf31e,	// (0x0000f31e) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa560,	// (0x0000a560) setting_slider_graphic_pane_g1_copy1

0xf334,	// (0x0000f334) setting_slider_graphic_pane_t1_copy1

0xf344,	// (0x0000f344) setting_slider_graphic_pane_t2_copy1

0xf354,	// (0x0000f354) slider_set_pane_cp_copy1

0xa599,	// (0x0000a599) input_focus_pane_cp1_copy1

0xa5a2,	// (0x0000a5a2) list_set_text_pane_copy1

0xa5aa,	// (0x0000a5aa) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa599,	// (0x0000a599) input_focus_pane_cp2_copy1

0xa5aa,	// (0x0000a5aa) setting_code_pane_g1_copy1

0xf35c,	// (0x0000f35c) setting_code_pane_t1_copy1

0x5794,	// (0x00005794) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xc0f9,	// (0x0000c0f9) list_set_graphic_pane_g1_copy1_ParamLimits

0xc0f9,	// (0x0000c0f9) list_set_graphic_pane_g1_copy1

0xf36a,	// (0x0000f36a) list_set_graphic_pane_g2_copy1

0xc111,	// (0x0000c111) list_set_graphic_pane_t1_copy1_ParamLimits

0xc111,	// (0x0000c111) list_set_graphic_pane_t1_copy1

0x657e,	// (0x0000657e) rs_clock_indi_pane_g1

0xa5db,	// (0x0000a5db) rs_clock_indi_pane_t1

0xa5e9,	// (0x0000a5e9) rs_indi_pane

0xa5f1,	// (0x0000a5f1) rs_indi_pane_g1

0xa5fa,	// (0x0000a5fa) rs_indi_pane_g2

0xa603,	// (0x0000a603) rs_indi_pane_g3

0x0002,

0xb391,	// (0x0000b391) rs_indi_pane_g

0x25c7,	// (0x000025c7) bg_popup_preview_window_pane_cp03

0xa60c,	// (0x0000a60c) popup_fep_tooltip_window_t1

0x7772,	// (0x00007772) popup_note2_window_g2_ParamLimits

0x7772,	// (0x00007772) popup_note2_window_g2

0x0001,

0xb12a,	// (0x0000b12a) popup_note2_window_g_ParamLimits

0xb12a,	// (0x0000b12a) popup_note2_window_g

0x7d74,	// (0x00007d74) bg_popup_sub_pane_cp11_ParamLimits

0x7d81,	// (0x00007d81) cell_ai3_links_pane_g1_ParamLimits

0x7d98,	// (0x00007d98) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0xc185,	// (0x0000c185) cell_graphic_popup_pane_cp2_ParamLimits

0xc185,	// (0x0000c185) cell_graphic_popup_pane_cp2

0xf372,	// (0x0000f372) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa622,	// (0x0000a622) cell_graphic_popup_pane_g3_cp2

0xa62a,	// (0x0000a62a) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a2a,	// (0x00001a2a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdf92,	// (0x0000df92) popup_tmo_big_image_note_window

0x9acb,	// (0x00009acb) cell_ai5_widget_list_pane

0x9ad3,	// (0x00009ad3) cell_ai5_widget_lrg_icon_pane

0xf0bf,	// (0x0000f0bf) tmo_note_info_pane_t1_ParamLimits

0xf0d4,	// (0x0000f0d4) tmo_note_info_pane_t2_ParamLimits

0xf0eb,	// (0x0000f0eb) tmo_note_info_pane_t3_ParamLimits

0xa1de,	// (0x0000a1de) tmo_note_info_pane_t4_ParamLimits

0xa1f0,	// (0x0000a1f0) tmo_note_info_pane_t5_ParamLimits

0xf62c,	// (0x0000f62c) tmo_note_info_pane_t_ParamLimits

0xf165,	// (0x0000f165) settings_container_pane_ParamLimits

0xa591,	// (0x0000a591) indicator_popup_pane_cp5

0xa591,	// (0x0000a591) indicator_popup_pane_cp6

0x5794,	// (0x00005794) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa638,	// (0x0000a638) popup_tmo_big_image_note_window_g1

0xa642,	// (0x0000a642) popup_tmo_big_image_note_window_t1

0xa652,	// (0x0000a652) popup_tmo_big_image_note_window_t2

0xa662,	// (0x0000a662) popup_tmo_big_image_note_window_t3

0x0002,

0xb398,	// (0x0000b398) popup_tmo_big_image_note_window_t

0xa672,	// (0x0000a672) cell_ai5_widget_lrg_icon_pane_g1

0xa67a,	// (0x0000a67a) cell_ai5_widget_lrg_icon_pane_t1

0xa688,	// (0x0000a688) cell_ai5_widget_list_row_pane_ParamLimits

0xa688,	// (0x0000a688) cell_ai5_widget_list_row_pane

0xa6a1,	// (0x0000a6a1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6a1,	// (0x0000a6a1) cell_ai5_widget_list_row_pane_g1

0xa6ae,	// (0x0000a6ae) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa6ae,	// (0x0000a6ae) cell_ai5_widget_list_row_pane_t1

0xa6c6,	// (0x0000a6c6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa6c6,	// (0x0000a6c6) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb39f,	// (0x0000b39f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb39f,	// (0x0000b39f) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa6fd,	// (0x0000a6fd) popup_fep_char_pre_window

0xa705,	// (0x0000a705) popup_fep_ituss_window

0xa726,	// (0x0000a726) popup_fep_vkbss_window

0xa745,	// (0x0000a745) grid_vkbss_keypad_pane_ParamLimits

0xa745,	// (0x0000a745) grid_vkbss_keypad_pane

0xa755,	// (0x0000a755) ituss_keypad_pane

0xa771,	// (0x0000a771) aid_vkbss_key_offset_ParamLimits

0xa771,	// (0x0000a771) aid_vkbss_key_offset

0xa77d,	// (0x0000a77d) cell_vkbss_key_pane_ParamLimits

0xa77d,	// (0x0000a77d) cell_vkbss_key_pane

0xa793,	// (0x0000a793) bg_cell_vkbss_key_g1_ParamLimits

0xa793,	// (0x0000a793) bg_cell_vkbss_key_g1

0xa79f,	// (0x0000a79f) cell_vkbss_key_3p_pane_ParamLimits

0xa79f,	// (0x0000a79f) cell_vkbss_key_3p_pane

0xa7b9,	// (0x0000a7b9) cell_vkbss_key_g1_ParamLimits

0xa7b9,	// (0x0000a7b9) cell_vkbss_key_g1

0xa7d3,	// (0x0000a7d3) cell_vkbss_key_t1_ParamLimits

0xa7d3,	// (0x0000a7d3) cell_vkbss_key_t1

0xa7fe,	// (0x0000a7fe) cell_ituss_key_pane_ParamLimits

0xa7fe,	// (0x0000a7fe) cell_ituss_key_pane

0xa80f,	// (0x0000a80f) bg_cell_ituss_key_g1_ParamLimits

0xa80f,	// (0x0000a80f) bg_cell_ituss_key_g1

0xa81b,	// (0x0000a81b) cell_ituss_key_pane_g1_ParamLimits

0xa81b,	// (0x0000a81b) cell_ituss_key_pane_g1

0xa835,	// (0x0000a835) cell_ituss_key_pane_g2_ParamLimits

0xa835,	// (0x0000a835) cell_ituss_key_pane_g2

0x0001,

0xb3a6,	// (0x0000b3a6) cell_ituss_key_pane_g_ParamLimits

0xb3a6,	// (0x0000b3a6) cell_ituss_key_pane_g

0xa860,	// (0x0000a860) cell_ituss_key_t1_ParamLimits

0xa860,	// (0x0000a860) cell_ituss_key_t1

0xa88e,	// (0x0000a88e) cell_ituss_key_t2_ParamLimits

0xa88e,	// (0x0000a88e) cell_ituss_key_t2

0xa8bf,	// (0x0000a8bf) cell_ituss_key_t3_ParamLimits

0xa8bf,	// (0x0000a8bf) cell_ituss_key_t3

0xa8f0,	// (0x0000a8f0) cell_ituss_key_t4_ParamLimits

0xa8f0,	// (0x0000a8f0) cell_ituss_key_t4

0x0003,

0xb3ab,	// (0x0000b3ab) cell_ituss_key_t_ParamLimits

0xb3ab,	// (0x0000b3ab) cell_ituss_key_t

0xa921,	// (0x0000a921) cell_vkbss_key_3p_pane_g1

0xa929,	// (0x0000a929) cell_vkbss_key_3p_pane_g2

0xa931,	// (0x0000a931) cell_vkbss_key_3p_pane_g3

0x0002,

0xb3b4,	// (0x0000b3b4) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa939,	// (0x0000a939) popup_fep_char_pre_window_t1

0xef8f,	// (0x0000ef8f) main_ai5_sk_pane

0xa26a,	// (0x0000a26a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa276,	// (0x0000a276) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa28a,	// (0x0000a28a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa296,	// (0x0000a296) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb38a,	// (0x0000b38a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2a9,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf37a,	// (0x0000f37a) main_ai5_sk_pane_g1

0x3d1a,	// (0x00003d1a) popup_query_code_window_g1

0xa71b,	// (0x0000a71b) popup_fep_vkb_icf_pane

0xa72f,	// (0x0000a72f) popup_fep_vtchi_icf_pane

0x1375,	// (0x00001375) bg_icf_pane

0xa951,	// (0x0000a951) list_vkb_icf_pane

0x1375,	// (0x00001375) bg_icf_pane_cp01

0xa95d,	// (0x0000a95d) vtchi_icf_list_pane

0xa96e,	// (0x0000a96e) list_vkb_icf_pane_t1_ParamLimits

0xa96e,	// (0x0000a96e) list_vkb_icf_pane_t1

0xa985,	// (0x0000a985) vtchi_icf_list_pane_t1_ParamLimits

0xa985,	// (0x0000a985) vtchi_icf_list_pane_t1

0xa705,	// (0x0000a705) popup_fep_ituss_window_ParamLimits

0xa72f,	// (0x0000a72f) popup_fep_vtchi_icf_pane_ParamLimits

0xa755,	// (0x0000a755) ituss_keypad_pane_ParamLimits

0xa765,	// (0x0000a765) ituss_sks_pane

0x1375,	// (0x00001375) bg_icf_pane_ParamLimits

0xa6ee,	// (0x0000a6ee) icf_edit_indi_pane_ParamLimits

0xa6ee,	// (0x0000a6ee) icf_edit_indi_pane

0xa951,	// (0x0000a951) list_vkb_icf_pane_ParamLimits

0x1375,	// (0x00001375) bg_icf_pane_cp01_ParamLimits

0xa6ee,	// (0x0000a6ee) icf_edit_indi_pane_cp01_ParamLimits

0xa6ee,	// (0x0000a6ee) icf_edit_indi_pane_cp01

0xa965,	// (0x0000a965) vtchi_query_pane

0x6a10,	// (0x00006a10) icf_edit_indi_pane_g1_ParamLimits

0x6a10,	// (0x00006a10) icf_edit_indi_pane_g1

0xaa0b,	// (0x0000aa0b) icf_edit_indi_pane_g2_ParamLimits

0xaa0b,	// (0x0000aa0b) icf_edit_indi_pane_g2

0x0001,

0xb3cc,	// (0x0000b3cc) icf_edit_indi_pane_g_ParamLimits

0xb3cc,	// (0x0000b3cc) icf_edit_indi_pane_g

0xaa1a,	// (0x0000aa1a) icf_edit_indi_pane_t1

0xa9a1,	// (0x0000a9a1) bg_input_focus_pane_cp042

0x0d43,	// (0x00000d43) vtchi_button_pane

0xa9aa,	// (0x0000a9aa) vtchi_query_pane_t1

0xa9b8,	// (0x0000a9b8) vtchi_query_pane_t2

0xa9c6,	// (0x0000a9c6) vtchi_query_pane_t3

0x0002,

0xb3bb,	// (0x0000b3bb) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa9d4,	// (0x0000a9d4) vtchi_button_pane_g1

0xa9dc,	// (0x0000a9dc) ituss_sks_pane_g1

0xa9e7,	// (0x0000a9e7) ituss_sks_pane_g2

0x0001,

0xb3c2,	// (0x0000b3c2) ituss_sks_pane_g

0xa9ef,	// (0x0000a9ef) ituss_sks_pane_t1

0xa9fd,	// (0x0000a9fd) ituss_sks_pane_t2

0x0001,

0xb3c7,	// (0x0000b3c7) ituss_sks_pane_t

0x5f47,	// (0x00005f47) indicator_nsta_pane_cp_g1

0x5f50,	// (0x00005f50) indicator_nsta_pane_cp_g2

0x5f58,	// (0x00005f58) indicator_nsta_pane_cp_g3

0x5f60,	// (0x00005f60) indicator_nsta_pane_cp_g4

0x5f68,	// (0x00005f68) indicator_nsta_pane_cp_g5

0x5f70,	// (0x00005f70) indicator_nsta_pane_cp_g6

0x0005,

0xaf74,	// (0x0000af74) indicator_nsta_pane_cp_g

0xed35,	// (0x0000ed35) cell_graphic2_pane_t2_ParamLimits

0xed35,	// (0x0000ed35) cell_graphic2_pane_t2

0x0001,

0xf603,	// (0x0000f603) cell_graphic2_pane_t_ParamLimits

0xf603,	// (0x0000f603) cell_graphic2_pane_t

0xed6b,	// (0x0000ed6b) cell_graphic2_control_pane_t1

0xc00b,	// (0x0000c00b) signal_pane_g3_ParamLimits

0xc00b,	// (0x0000c00b) signal_pane_g3

0xc01f,	// (0x0000c01f) signal_pane_g4_ParamLimits

0xc01f,	// (0x0000c01f) signal_pane_g4

0xa6d8,	// (0x0000a6d8) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa6d8,	// (0x0000a6d8) cell_ai5_widget_list_row_pane_t3

0xa84e,	// (0x0000a84e) cell_ituss_key_pane_t1_ParamLimits

0xa84e,	// (0x0000a84e) cell_ituss_key_pane_t1

0x392f,	// (0x0000392f) form_field_data_wide_pane_vc_t2_ParamLimits

0x392f,	// (0x0000392f) form_field_data_wide_pane_vc_t2

0x3943,	// (0x00003943) form_field_data_wide_pane_vc_t3_ParamLimits

0x3943,	// (0x00003943) form_field_data_wide_pane_vc_t3

0x0002,

0xacd7,	// (0x0000acd7) form_field_data_wide_pane_vc_t_ParamLimits

0xacd7,	// (0x0000acd7) form_field_data_wide_pane_vc_t

0x5bfe,	// (0x00005bfe) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5bfe,	// (0x00005bfe) form_field_slider_wide_pane_vc_t3

0x5cdc,	// (0x00005cdc) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5cdc,	// (0x00005cdc) form_field_popup_wide_pane_vc_t2

0x5cf3,	// (0x00005cf3) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5cf3,	// (0x00005cf3) form_field_popup_wide_pane_vc_t3

0x0002,

0xaf63,	// (0x0000af63) form_field_popup_wide_pane_vc_t_ParamLimits

0xaf63,	// (0x0000af63) form_field_popup_wide_pane_vc_t

0xefeb,	// (0x0000efeb) aid_fshwr2_btn_pane_ParamLimits

0xeffa,	// (0x0000effa) aid_fshwr2_syb_pane_ParamLimits

0xf00c,	// (0x0000f00c) aid_fshwr2_txt_pane_ParamLimits

0x1375,	// (0x00001375) fshwr2_bg_pane_ParamLimits

0xf01b,	// (0x0000f01b) fshwr2_func_candi_pane_ParamLimits

0xf02c,	// (0x0000f02c) fshwr2_hwr_syb_pane_ParamLimits

0xf047,	// (0x0000f047) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
