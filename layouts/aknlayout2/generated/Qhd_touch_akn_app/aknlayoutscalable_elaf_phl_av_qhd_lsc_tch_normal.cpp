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
0xaf99,	// (0x0000af99) Screen

0xafa5,	// (0x0000afa5) application_window_ParamLimits

0xafa5,	// (0x0000afa5) application_window

0x002e,	// (0x0000002e) screen_g1

0xafdd,	// (0x0000afdd) area_bottom_pane_ParamLimits

0xafdd,	// (0x0000afdd) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc693,	// (0x0000c693) battery_pane_ParamLimits

0xc693,	// (0x0000c693) battery_pane

0x4047,	// (0x00004047) bg_status_flat_pane_g8

0x404f,	// (0x0000404f) bg_status_flat_pane_g9

0x3211,	// (0x00003211) context_pane_ParamLimits

0x3211,	// (0x00003211) context_pane

0xc7fe,	// (0x0000c7fe) navi_pane_ParamLimits

0xc7fe,	// (0x0000c7fe) navi_pane

0xc875,	// (0x0000c875) signal_pane_ParamLimits

0xc875,	// (0x0000c875) signal_pane

0x0008,

0xa942,	// (0x0000a942) bg_status_flat_pane_g

0xc905,	// (0x0000c905) status_pane_g1_ParamLimits

0xc905,	// (0x0000c905) status_pane_g1

0xc91b,	// (0x0000c91b) status_pane_g2_ParamLimits

0xc91b,	// (0x0000c91b) status_pane_g2

0x3431,	// (0x00003431) status_pane_g3_ParamLimits

0x3431,	// (0x00003431) status_pane_g3

0x0004,

0xf1ca,	// (0x0000f1ca) status_pane_g_ParamLimits

0xf1ca,	// (0x0000f1ca) status_pane_g

0xc927,	// (0x0000c927) title_pane_ParamLimits

0xc927,	// (0x0000c927) title_pane

0xc988,	// (0x0000c988) uni_indicator_pane_ParamLimits

0xc988,	// (0x0000c988) uni_indicator_pane

0x2abc,	// (0x00002abc) bg_list_pane_ParamLimits

0x2abc,	// (0x00002abc) bg_list_pane

0xbf6f,	// (0x0000bf6f) find_pane

0xbf77,	// (0x0000bf77) listscroll_app_pane_ParamLimits

0xbf77,	// (0x0000bf77) listscroll_app_pane

0x2af0,	// (0x00002af0) listscroll_form_pane

0xbf83,	// (0x0000bf83) listscroll_gen_pane_ParamLimits

0xbf83,	// (0x0000bf83) listscroll_gen_pane

0x2af0,	// (0x00002af0) listscroll_set_pane

0x4e38,	// (0x00004e38) main_idle_act_pane

0x259f,	// (0x0000259f) main_idle_trad_pane

0x259f,	// (0x0000259f) main_list_empty_pane

0x2b1e,	// (0x00002b1e) main_midp_pane

0x2b2a,	// (0x00002b2a) main_pane_g1_ParamLimits

0x2b2a,	// (0x00002b2a) main_pane_g1

0xbf97,	// (0x0000bf97) popup_ai_message_window_ParamLimits

0xbf97,	// (0x0000bf97) popup_ai_message_window

0xc028,	// (0x0000c028) popup_fep_china_uni_window_ParamLimits

0xc028,	// (0x0000c028) popup_fep_china_uni_window

0x2c3e,	// (0x00002c3e) popup_fep_japan_candidate_window_ParamLimits

0x2c3e,	// (0x00002c3e) popup_fep_japan_candidate_window

0x2c5e,	// (0x00002c5e) popup_fep_japan_predictive_window_ParamLimits

0x2c5e,	// (0x00002c5e) popup_fep_japan_predictive_window

0xc084,	// (0x0000c084) popup_find_window

0xc0a1,	// (0x0000c0a1) popup_grid_graphic_window_ParamLimits

0xc0a1,	// (0x0000c0a1) popup_grid_graphic_window

0x2cc3,	// (0x00002cc3) popup_large_graphic_colour_window

0xc139,	// (0x0000c139) popup_menu_window_ParamLimits

0xc139,	// (0x0000c139) popup_menu_window

0xc2f3,	// (0x0000c2f3) popup_note_image_window

0xc2b9,	// (0x0000c2b9) popup_note_wait_window_ParamLimits

0xc2b9,	// (0x0000c2b9) popup_note_wait_window

0xc30b,	// (0x0000c30b) popup_note_window_ParamLimits

0xc30b,	// (0x0000c30b) popup_note_window

0xc3b1,	// (0x0000c3b1) popup_query_code_window_ParamLimits

0xc3b1,	// (0x0000c3b1) popup_query_code_window

0x2f0b,	// (0x00002f0b) popup_query_data_code_window_ParamLimits

0x2f0b,	// (0x00002f0b) popup_query_data_code_window

0xc3eb,	// (0x0000c3eb) popup_query_data_window_ParamLimits

0xc3eb,	// (0x0000c3eb) popup_query_data_window

0xc461,	// (0x0000c461) popup_query_sat_info_window_ParamLimits

0xc461,	// (0x0000c461) popup_query_sat_info_window

0xc4f8,	// (0x0000c4f8) popup_snote_single_graphic_window_ParamLimits

0xc4f8,	// (0x0000c4f8) popup_snote_single_graphic_window

0xc4f8,	// (0x0000c4f8) popup_snote_single_text_window_ParamLimits

0xc4f8,	// (0x0000c4f8) popup_snote_single_text_window

0x2f92,	// (0x00002f92) popup_sub_window_general

0x30c2,	// (0x000030c2) popup_window_general_ParamLimits

0x30c2,	// (0x000030c2) popup_window_general

0x30d7,	// (0x000030d7) power_save_pane

0xbe08,	// (0x0000be08) control_pane_g1_ParamLimits

0xbe08,	// (0x0000be08) control_pane_g1

0x293a,	// (0x0000293a) control_pane_g2_ParamLimits

0x293a,	// (0x0000293a) control_pane_g2

0x295d,	// (0x0000295d) control_pane_g3_ParamLimits

0x295d,	// (0x0000295d) control_pane_g3

0x0007,

0xf1b2,	// (0x0000f1b2) control_pane_g_ParamLimits

0xf1b2,	// (0x0000f1b2) control_pane_g

0xbe66,	// (0x0000be66) control_pane_t1_ParamLimits

0xbe66,	// (0x0000be66) control_pane_t1

0xbec4,	// (0x0000bec4) control_pane_t2_ParamLimits

0xbec4,	// (0x0000bec4) control_pane_t2

0x0002,

0xf1c3,	// (0x0000f1c3) control_pane_t_ParamLimits

0xf1c3,	// (0x0000f1c3) control_pane_t

0x2832,	// (0x00002832) navi_navi_volume_pane_cp1

0x283b,	// (0x0000283b) status_small_icon_pane

0x2843,	// (0x00002843) status_small_pane_g1_ParamLimits

0x2843,	// (0x00002843) status_small_pane_g1

0x2877,	// (0x00002877) status_small_pane_g2_ParamLimits

0x2877,	// (0x00002877) status_small_pane_g2

0x2883,	// (0x00002883) status_small_pane_g3_ParamLimits

0x2883,	// (0x00002883) status_small_pane_g3

0x288f,	// (0x0000288f) status_small_pane_g4_ParamLimits

0x288f,	// (0x0000288f) status_small_pane_g4

0x289b,	// (0x0000289b) status_small_pane_g5_ParamLimits

0x289b,	// (0x0000289b) status_small_pane_g5

0x28aa,	// (0x000028aa) status_small_pane_g6_ParamLimits

0x28aa,	// (0x000028aa) status_small_pane_g6

0x0007,

0xa84e,	// (0x0000a84e) status_small_pane_g_ParamLimits

0xa84e,	// (0x0000a84e) status_small_pane_g

0x28da,	// (0x000028da) status_small_pane_t1

0x28fd,	// (0x000028fd) status_small_wait_pane_ParamLimits

0x28fd,	// (0x000028fd) status_small_wait_pane

0xbbf1,	// (0x0000bbf1) aid_levels_signal_ParamLimits

0xbbf1,	// (0x0000bbf1) aid_levels_signal

0xbc09,	// (0x0000bc09) signal_pane_g1_ParamLimits

0xbc09,	// (0x0000bc09) signal_pane_g1

0xbc24,	// (0x0000bc24) signal_pane_g2_ParamLimits

0xbc24,	// (0x0000bc24) signal_pane_g2

0x0001,

0xf191,	// (0x0000f191) signal_pane_g_ParamLimits

0xf191,	// (0x0000f191) signal_pane_g

0x1e51,	// (0x00001e51) context_pane_g1

0xb156,	// (0x0000b156) title_pane_g1

0xb18b,	// (0x0000b18b) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf0be,	// (0x0000f0be) title_pane_t

0xc9b0,	// (0x0000c9b0) aid_levels_battery_ParamLimits

0xc9b0,	// (0x0000c9b0) aid_levels_battery

0xc9cc,	// (0x0000c9cc) battery_pane_g1_ParamLimits

0xc9cc,	// (0x0000c9cc) battery_pane_g1

0xc9e9,	// (0x0000c9e9) battery_pane_g2_ParamLimits

0xc9e9,	// (0x0000c9e9) battery_pane_g2

0x0001,

0xf1d5,	// (0x0000f1d5) battery_pane_g_ParamLimits

0xf1d5,	// (0x0000f1d5) battery_pane_g

0xcdc4,	// (0x0000cdc4) uni_indicator_pane_g1

0xcdd9,	// (0x0000cdd9) uni_indicator_pane_g2

0xcdee,	// (0x0000cdee) uni_indicator_pane_g3

0x0005,

0xf221,	// (0x0000f221) uni_indicator_pane_g

0x2411,	// (0x00002411) navi_icon_pane_ParamLimits

0x2411,	// (0x00002411) navi_icon_pane

0x235a,	// (0x0000235a) navi_midp_pane

0x242d,	// (0x0000242d) navi_navi_pane

0x2437,	// (0x00002437) navi_text_pane_ParamLimits

0x2437,	// (0x00002437) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) status_small_wait_pane_g

0x480c,	// (0x0000480c) navi_navi_icon_text_pane

0x4814,	// (0x00004814) navi_navi_pane_g1_ParamLimits

0x4814,	// (0x00004814) navi_navi_pane_g1

0x4826,	// (0x00004826) navi_navi_pane_g2_ParamLimits

0x4826,	// (0x00004826) navi_navi_pane_g2

0x0001,

0xa9b3,	// (0x0000a9b3) navi_navi_pane_g_ParamLimits

0xa9b3,	// (0x0000a9b3) navi_navi_pane_g

0x4838,	// (0x00004838) navi_navi_tabs_pane

0x4841,	// (0x00004841) navi_navi_text_pane

0x480c,	// (0x0000480c) navi_navi_volume_pane

0xcd85,	// (0x0000cd85) navi_text_pane_t1

0xcd79,	// (0x0000cd79) navi_icon_pane_g1

0x4729,	// (0x00004729) navi_navi_text_pane_t1

0xcd68,	// (0x0000cd68) navi_navi_volume_pane_g1

0xcd70,	// (0x0000cd70) volume_small_pane

0xccc4,	// (0x0000ccc4) navi_navi_icon_text_pane_g1

0xcccc,	// (0x0000cccc) navi_navi_icon_text_pane_t1

0x242d,	// (0x0000242d) navi_tabs_2_long_pane

0x242d,	// (0x0000242d) navi_tabs_2_pane

0x242d,	// (0x0000242d) navi_tabs_3_long_pane

0x242d,	// (0x0000242d) navi_tabs_3_pane

0x242d,	// (0x0000242d) navi_tabs_4_pane

0xcca4,	// (0x0000cca4) tabs_2_active_pane_ParamLimits

0xcca4,	// (0x0000cca4) tabs_2_active_pane

0xccb4,	// (0x0000ccb4) tabs_2_passive_pane_ParamLimits

0xccb4,	// (0x0000ccb4) tabs_2_passive_pane

0xcc72,	// (0x0000cc72) tabs_3_active_pane_ParamLimits

0xcc72,	// (0x0000cc72) tabs_3_active_pane

0xcc82,	// (0x0000cc82) tabs_3_passive_pane_ParamLimits

0xcc82,	// (0x0000cc82) tabs_3_passive_pane

0xcc93,	// (0x0000cc93) tabs_3_passive_pane_cp_ParamLimits

0xcc93,	// (0x0000cc93) tabs_3_passive_pane_cp

0xcc2e,	// (0x0000cc2e) tabs_4_active_pane_ParamLimits

0xcc2e,	// (0x0000cc2e) tabs_4_active_pane

0xcc3f,	// (0x0000cc3f) tabs_4_passive_pane_ParamLimits

0xcc3f,	// (0x0000cc3f) tabs_4_passive_pane

0xcc50,	// (0x0000cc50) tabs_4_passive_pane_cp_ParamLimits

0xcc50,	// (0x0000cc50) tabs_4_passive_pane_cp

0xcc61,	// (0x0000cc61) tabs_4_passive_pane_cp2_ParamLimits

0xcc61,	// (0x0000cc61) tabs_4_passive_pane_cp2

0xcc0e,	// (0x0000cc0e) tabs_2_long_active_pane_ParamLimits

0xcc0e,	// (0x0000cc0e) tabs_2_long_active_pane

0xcc1e,	// (0x0000cc1e) tabs_2_long_passive_pane_ParamLimits

0xcc1e,	// (0x0000cc1e) tabs_2_long_passive_pane

0xcbdb,	// (0x0000cbdb) tabs_3_long_active_pane_ParamLimits

0xcbdb,	// (0x0000cbdb) tabs_3_long_active_pane

0xcbec,	// (0x0000cbec) tabs_3_long_passive_pane_ParamLimits

0xcbec,	// (0x0000cbec) tabs_3_long_passive_pane

0xcbfd,	// (0x0000cbfd) tabs_3_long_passive_pane_cp_ParamLimits

0xcbfd,	// (0x0000cbfd) tabs_3_long_passive_pane_cp

0x44aa,	// (0x000044aa) volume_small_pane_g1

0xcb8a,	// (0x0000cb8a) volume_small_pane_g2

0xcb93,	// (0x0000cb93) volume_small_pane_g3

0xcb9c,	// (0x0000cb9c) volume_small_pane_g4

0xcba5,	// (0x0000cba5) volume_small_pane_g5

0xcbae,	// (0x0000cbae) volume_small_pane_g6

0xcbb7,	// (0x0000cbb7) volume_small_pane_g7

0xcbc0,	// (0x0000cbc0) volume_small_pane_g8

0xcbc9,	// (0x0000cbc9) volume_small_pane_g9

0xcbd2,	// (0x0000cbd2) volume_small_pane_g10

0x0009,

0xf1f7,	// (0x0000f1f7) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb217,	// (0x0000b217) tabs_3_active_pane_g1

0xb21f,	// (0x0000b21f) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb217,	// (0x0000b217) tabs_3_passive_pane_g1

0xb21f,	// (0x0000b21f) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb231,	// (0x0000b231) tabs_4_active_pane_g1

0xb239,	// (0x0000b239) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb231,	// (0x0000b231) tabs_4_1_passive_pane_g1

0xb239,	// (0x0000b239) tabs_4_1_passive_pane_t1

0x2b1e,	// (0x00002b1e) list_highlight_pane_cp2

0xce89,	// (0x0000ce89) list_set_pane_ParamLimits

0xce89,	// (0x0000ce89) list_set_pane

0xcf23,	// (0x0000cf23) main_pane_set_t1_ParamLimits

0xcf23,	// (0x0000cf23) main_pane_set_t1

0xcf43,	// (0x0000cf43) main_pane_set_t2_ParamLimits

0xcf43,	// (0x0000cf43) main_pane_set_t2

0xcf57,	// (0x0000cf57) main_pane_set_t3_ParamLimits

0xcf57,	// (0x0000cf57) main_pane_set_t3

0xcf69,	// (0x0000cf69) main_pane_set_t4_ParamLimits

0xcf69,	// (0x0000cf69) main_pane_set_t4

0x0003,

0xf233,	// (0x0000f233) main_pane_set_t_ParamLimits

0xf233,	// (0x0000f233) main_pane_set_t

0xcf7b,	// (0x0000cf7b) setting_code_pane

0xcf85,	// (0x0000cf85) setting_slider_graphic_pane

0xcf85,	// (0x0000cf85) setting_slider_pane

0xcf85,	// (0x0000cf85) setting_text_pane

0xcf85,	// (0x0000cf85) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xa63e,	// (0x0000a63e) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xa645,	// (0x0000a645) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e1f,	// (0x00004e1f) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4df9,	// (0x00004df9) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e03,	// (0x00004e03) set_opt_bg_pane_g7

0x4e0b,	// (0x00004e0b) set_opt_bg_pane_g8

0x4e15,	// (0x00004e15) set_opt_bg_pane_g9

0x0008,

0xaa3c,	// (0x0000aa3c) set_opt_bg_pane_g

0x4d88,	// (0x00004d88) slider_set_pane_g1

0x4d95,	// (0x00004d95) slider_set_pane_g2

0x0006,

0xaa2d,	// (0x0000aa2d) slider_set_pane_g

0x4c08,	// (0x00004c08) volume_set_pane_g1

0x4c10,	// (0x00004c10) volume_set_pane_g2

0x4c18,	// (0x00004c18) volume_set_pane_g3

0x4c20,	// (0x00004c20) volume_set_pane_g4

0x4c28,	// (0x00004c28) volume_set_pane_g5

0x4c30,	// (0x00004c30) volume_set_pane_g6

0x4c38,	// (0x00004c38) volume_set_pane_g7

0x4c40,	// (0x00004c40) volume_set_pane_g8

0x4c48,	// (0x00004c48) volume_set_pane_g9

0x4c50,	// (0x00004c50) volume_set_pane_g10

0x0009,

0xaa05,	// (0x0000aa05) volume_set_pane_g

0xb24b,	// (0x0000b24b) indicator_pane_ParamLimits

0xb24b,	// (0x0000b24b) indicator_pane

0xb273,	// (0x0000b273) main_idle_pane_g2_ParamLimits

0xb273,	// (0x0000b273) main_idle_pane_g2

0xb2ab,	// (0x0000b2ab) main_pane_idle_g1_ParamLimits

0xb2ab,	// (0x0000b2ab) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb2d2,	// (0x0000b2d2) soft_indicator_pane_ParamLimits

0xb2d2,	// (0x0000b2d2) soft_indicator_pane

0xb2ec,	// (0x0000b2ec) wallpaper_pane_ParamLimits

0xb2ec,	// (0x0000b2ec) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb2fe,	// (0x0000b2fe) indicator_pane_g1_ParamLimits

0xb2fe,	// (0x0000b2fe) indicator_pane_g1

0x5361,	// (0x00005361) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb314,	// (0x0000b314) aid_ps_clock_pane

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

0xa64a,	// (0x0000a64a) power_save_pane_g_ParamLimits

0xa64a,	// (0x0000a64a) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb314,	// (0x0000b314) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xa64f,	// (0x0000a64f) power_save_pane_t_ParamLimits

0xa64f,	// (0x0000a64f) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb322,	// (0x0000b322) ai_gene_pane_ParamLimits

0xb322,	// (0x0000b322) ai_gene_pane

0xb339,	// (0x0000b339) ai_links_pane_ParamLimits

0xb339,	// (0x0000b339) ai_links_pane

0xb351,	// (0x0000b351) indicator_pane_cp1_ParamLimits

0xb351,	// (0x0000b351) indicator_pane_cp1

0xb360,	// (0x0000b360) main_pane_idle_g1_cp_ParamLimits

0xb360,	// (0x0000b360) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb378,	// (0x0000b378) soft_indicator_pane_cp1_ParamLimits

0xb378,	// (0x0000b378) soft_indicator_pane_cp1

0x4ad5,	// (0x00004ad5) ai_links_pane_g1

0x4ade,	// (0x00004ade) grid_ai_links_pane

0xcdbb,	// (0x0000cdbb) ai_gene_pane_1

0x4ac3,	// (0x00004ac3) ai_gene_pane_2

0x4acc,	// (0x00004acc) list_highlight_pane_cp4

0xcd97,	// (0x0000cd97) cell_ai_link_pane_ParamLimits

0xcd97,	// (0x0000cd97) cell_ai_link_pane

0x4a94,	// (0x00004a94) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xa9e0,	// (0x0000a9e0) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x49e2,	// (0x000049e2) ai_gene_pane_1_g1_ParamLimits

0x49e2,	// (0x000049e2) ai_gene_pane_1_g1

0x49ee,	// (0x000049ee) ai_gene_pane_1_g2_ParamLimits

0x49ee,	// (0x000049ee) ai_gene_pane_1_g2

0x0001,

0xa9d6,	// (0x0000a9d6) ai_gene_pane_1_g_ParamLimits

0xa9d6,	// (0x0000a9d6) ai_gene_pane_1_g

0x49fb,	// (0x000049fb) ai_gene_pane_1_t1_ParamLimits

0x49fb,	// (0x000049fb) ai_gene_pane_1_t1

0x4a2f,	// (0x00004a2f) grid_ai_soft_ind_pane

0x49cd,	// (0x000049cd) ai_gene_pane_2_t1_ParamLimits

0x49cd,	// (0x000049cd) ai_gene_pane_2_t1

0xb38c,	// (0x0000b38c) main_pane_empty_t1_ParamLimits

0xb38c,	// (0x0000b38c) main_pane_empty_t1

0xb3a4,	// (0x0000b3a4) main_pane_empty_t2_ParamLimits

0xb3a4,	// (0x0000b3a4) main_pane_empty_t2

0xb3b9,	// (0x0000b3b9) main_pane_empty_t3_ParamLimits

0xb3b9,	// (0x0000b3b9) main_pane_empty_t3

0xb3cb,	// (0x0000b3cb) main_pane_empty_t4_ParamLimits

0xb3cb,	// (0x0000b3cb) main_pane_empty_t4

0xb3dd,	// (0x0000b3dd) main_pane_empty_t5_ParamLimits

0xb3dd,	// (0x0000b3dd) main_pane_empty_t5

0x0004,

0xf0c5,	// (0x0000f0c5) main_pane_empty_t_ParamLimits

0xf0c5,	// (0x0000f0c5) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x4737,	// (0x00004737) find_popup_pane_cp2_ParamLimits

0x4737,	// (0x00004737) find_popup_pane_cp2

0x4743,	// (0x00004743) heading_pane_ParamLimits

0x4743,	// (0x00004743) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcce9,	// (0x0000cce9) bg_popup_window_pane_g1_ParamLimits

0xcce9,	// (0x0000cce9) bg_popup_window_pane_g1

0xccf8,	// (0x0000ccf8) bg_popup_window_pane_g2_ParamLimits

0xccf8,	// (0x0000ccf8) bg_popup_window_pane_g2

0xcd04,	// (0x0000cd04) bg_popup_window_pane_g3_ParamLimits

0xcd04,	// (0x0000cd04) bg_popup_window_pane_g3

0xcd10,	// (0x0000cd10) bg_popup_window_pane_g4_ParamLimits

0xcd10,	// (0x0000cd10) bg_popup_window_pane_g4

0xcd1f,	// (0x0000cd1f) bg_popup_window_pane_g5_ParamLimits

0xcd1f,	// (0x0000cd1f) bg_popup_window_pane_g5

0xcd2f,	// (0x0000cd2f) bg_popup_window_pane_g6_ParamLimits

0xcd2f,	// (0x0000cd2f) bg_popup_window_pane_g6

0xcd3b,	// (0x0000cd3b) bg_popup_window_pane_g7_ParamLimits

0xcd3b,	// (0x0000cd3b) bg_popup_window_pane_g7

0xcd4a,	// (0x0000cd4a) bg_popup_window_pane_g8_ParamLimits

0xcd4a,	// (0x0000cd4a) bg_popup_window_pane_g8

0xcd59,	// (0x0000cd59) bg_popup_window_pane_g9_ParamLimits

0xcd59,	// (0x0000cd59) bg_popup_window_pane_g9

0x470c,	// (0x0000470c) bg_popup_window_pane_g10_ParamLimits

0x470c,	// (0x0000470c) bg_popup_window_pane_g10

0x0009,

0xf20c,	// (0x0000f20c) bg_popup_window_pane_g_ParamLimits

0xf20c,	// (0x0000f20c) bg_popup_window_pane_g

0x4635,	// (0x00004635) bg_popup_heading_pane_ParamLimits

0x4635,	// (0x00004635) bg_popup_heading_pane

0x52a4,	// (0x000052a4) tabs_4_passive_pane_cp_srt_ParamLimits

0x52a4,	// (0x000052a4) tabs_4_passive_pane_cp_srt

0x52b6,	// (0x000052b6) tabs_4_passive_pane_srt_ParamLimits

0x4649,	// (0x00004649) heading_pane_g2

0x52b6,	// (0x000052b6) tabs_4_passive_pane_srt

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp3_srt

0x4651,	// (0x00004651) heading_pane_t1_ParamLimits

0x4651,	// (0x00004651) heading_pane_t1

0x4668,	// (0x00004668) heading_pane_t2_ParamLimits

0x4668,	// (0x00004668) heading_pane_t2

0x0001,

0xa999,	// (0x0000a999) heading_pane_t_ParamLimits

0xa999,	// (0x0000a999) heading_pane_t

0x400f,	// (0x0000400f) bg_popup_heading_pane_g1

0x40be,	// (0x000040be) bg_popup_heading_pane_g2

0x40c8,	// (0x000040c8) bg_popup_heading_pane_g3

0x40d2,	// (0x000040d2) bg_popup_heading_pane_g4

0x40dc,	// (0x000040dc) bg_popup_heading_pane_g5

0x40e6,	// (0x000040e6) bg_popup_heading_pane_g6

0x40ee,	// (0x000040ee) bg_popup_heading_pane_g7

0x40f6,	// (0x000040f6) bg_popup_heading_pane_g8

0x4100,	// (0x00004100) bg_popup_heading_pane_g9

0x0008,

0xa955,	// (0x0000a955) bg_popup_heading_pane_g

0x366e,	// (0x0000366e) bg_popup_sub_pane_g1

0x3676,	// (0x00003676) bg_popup_sub_pane_g2

0x367e,	// (0x0000367e) bg_popup_sub_pane_g3

0x3686,	// (0x00003686) bg_popup_sub_pane_g4

0x368e,	// (0x0000368e) bg_popup_sub_pane_g5

0x3696,	// (0x00003696) bg_popup_sub_pane_g6

0x369e,	// (0x0000369e) bg_popup_sub_pane_g7

0x36a6,	// (0x000036a6) bg_popup_sub_pane_g8

0x36ae,	// (0x000036ae) bg_popup_sub_pane_g9

0x0008,

0xa92f,	// (0x0000a92f) bg_popup_sub_pane_g

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

0xa65f,	// (0x0000a65f) popup_note_window_t_ParamLimits

0xa65f,	// (0x0000a65f) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3f8b,	// (0x00003f8b) popup_note_image_window_g1_ParamLimits

0x3f8b,	// (0x00003f8b) popup_note_image_window_g1

0x3f97,	// (0x00003f97) popup_note_image_window_g2_ParamLimits

0x3f97,	// (0x00003f97) popup_note_image_window_g2

0x0001,

0xa923,	// (0x0000a923) popup_note_image_window_g_ParamLimits

0xa923,	// (0x0000a923) popup_note_image_window_g

0x3fb0,	// (0x00003fb0) popup_note_image_window_t1_ParamLimits

0x3fb0,	// (0x00003fb0) popup_note_image_window_t1

0x3fc9,	// (0x00003fc9) popup_note_image_window_t2_ParamLimits

0x3fc9,	// (0x00003fc9) popup_note_image_window_t2

0x3fe2,	// (0x00003fe2) popup_note_image_window_t3_ParamLimits

0x3fe2,	// (0x00003fe2) popup_note_image_window_t3

0x0002,

0xa928,	// (0x0000a928) popup_note_image_window_t_ParamLimits

0xa928,	// (0x0000a928) popup_note_image_window_t

0x3e4c,	// (0x00003e4c) bg_popup_window_pane_cp7_ParamLimits

0x3e4c,	// (0x00003e4c) bg_popup_window_pane_cp7

0x3e7c,	// (0x00003e7c) popup_note_wait_window_g1_ParamLimits

0x3e7c,	// (0x00003e7c) popup_note_wait_window_g1

0x3e88,	// (0x00003e88) popup_note_wait_window_g2_ParamLimits

0x3e88,	// (0x00003e88) popup_note_wait_window_g2

0x0002,

0xa911,	// (0x0000a911) popup_note_wait_window_g_ParamLimits

0xa911,	// (0x0000a911) popup_note_wait_window_g

0x3ea0,	// (0x00003ea0) popup_note_wait_window_t1_ParamLimits

0x3ea0,	// (0x00003ea0) popup_note_wait_window_t1

0x3ec7,	// (0x00003ec7) popup_note_wait_window_t2_ParamLimits

0x3ec7,	// (0x00003ec7) popup_note_wait_window_t2

0x3ee4,	// (0x00003ee4) popup_note_wait_window_t3_ParamLimits

0x3ee4,	// (0x00003ee4) popup_note_wait_window_t3

0x3ef7,	// (0x00003ef7) popup_note_wait_window_t4_ParamLimits

0x3ef7,	// (0x00003ef7) popup_note_wait_window_t4

0x0004,

0xa918,	// (0x0000a918) popup_note_wait_window_t_ParamLimits

0xa918,	// (0x0000a918) popup_note_wait_window_t

0x3f1c,	// (0x00003f1c) wait_bar_pane_ParamLimits

0x3f1c,	// (0x00003f1c) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa7de,	// (0x0000a7de) wait_anim_pane_g

0x3df0,	// (0x00003df0) wait_border_pane_g1

0x3dfb,	// (0x00003dfb) wait_border_pane_g2

0x3e04,	// (0x00003e04) wait_border_pane_g3

0x0002,

0xa90a,	// (0x0000a90a) wait_border_pane_g

0x3d4d,	// (0x00003d4d) bg_popup_window_pane_cp16_ParamLimits

0x3d4d,	// (0x00003d4d) bg_popup_window_pane_cp16

0x3d5b,	// (0x00003d5b) indicator_popup_pane_cp4_ParamLimits

0x3d5b,	// (0x00003d5b) indicator_popup_pane_cp4

0x3d6f,	// (0x00003d6f) popup_query_data_window_t1_ParamLimits

0x3d6f,	// (0x00003d6f) popup_query_data_window_t1

0x3d81,	// (0x00003d81) popup_query_data_window_t2_ParamLimits

0x3d81,	// (0x00003d81) popup_query_data_window_t2

0x3d9a,	// (0x00003d9a) popup_query_data_window_t3_ParamLimits

0x3d9a,	// (0x00003d9a) popup_query_data_window_t3

0x0002,

0xa903,	// (0x0000a903) popup_query_data_window_t_ParamLimits

0xa903,	// (0x0000a903) popup_query_data_window_t

0x3db4,	// (0x00003db4) query_popup_data_pane_ParamLimits

0x3db4,	// (0x00003db4) query_popup_data_pane

0x3dc8,	// (0x00003dc8) query_popup_data_pane_cp1_ParamLimits

0x3dc8,	// (0x00003dc8) query_popup_data_pane_cp1

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp10_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp10

0x3cb0,	// (0x00003cb0) indicator_popup_pane_ParamLimits

0x3cb0,	// (0x00003cb0) indicator_popup_pane

0x0930,	// (0x00000930) popup_query_code_window_t1_ParamLimits

0x0930,	// (0x00000930) popup_query_code_window_t1

0x3cc8,	// (0x00003cc8) popup_query_code_window_t2_ParamLimits

0x3cc8,	// (0x00003cc8) popup_query_code_window_t2

0x3d06,	// (0x00003d06) popup_query_code_window_t3_ParamLimits

0x3d06,	// (0x00003d06) popup_query_code_window_t3

0x0002,

0xa8fc,	// (0x0000a8fc) popup_query_code_window_t_ParamLimits

0xa8fc,	// (0x0000a8fc) popup_query_code_window_t

0x3d35,	// (0x00003d35) query_popup_pane_ParamLimits

0x3d35,	// (0x00003d35) query_popup_pane

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

0xa66a,	// (0x0000a66a) popup_query_data_code_window_t_ParamLimits

0xa66a,	// (0x0000a66a) popup_query_data_code_window_t

0x36db,	// (0x000036db) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c84,	// (0x00003c84) heading_pane_cp5

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

0xa673,	// (0x0000a673) popup_info_list_pane_t_ParamLimits

0xa673,	// (0x0000a673) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x5398,	// (0x00005398) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb43f,	// (0x0000b43f) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb447,	// (0x0000b447) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb447,	// (0x0000b447) cell_large_graphic_colour_none_popup_pane

0xb45b,	// (0x0000b45b) grid_large_graphic_colour_popup_pane_ParamLimits

0xb45b,	// (0x0000b45b) grid_large_graphic_colour_popup_pane

0xb47f,	// (0x0000b47f) listscroll_popup_colour_pane_g1_ParamLimits

0xb47f,	// (0x0000b47f) listscroll_popup_colour_pane_g1

0xb496,	// (0x0000b496) listscroll_popup_colour_pane_g2_ParamLimits

0xb496,	// (0x0000b496) listscroll_popup_colour_pane_g2

0xb4ad,	// (0x0000b4ad) listscroll_popup_colour_pane_g3_ParamLimits

0xb4ad,	// (0x0000b4ad) listscroll_popup_colour_pane_g3

0xb4bd,	// (0x0000b4bd) listscroll_popup_colour_pane_g4_ParamLimits

0xb4bd,	// (0x0000b4bd) listscroll_popup_colour_pane_g4

0x0003,

0xf0d0,	// (0x0000f0d0) listscroll_popup_colour_pane_g_ParamLimits

0xf0d0,	// (0x0000f0d0) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb4cd,	// (0x0000b4cd) cell_large_graphic_colour_popup_pane_ParamLimits

0xb4cd,	// (0x0000b4cd) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa681,	// (0x0000a681) cell_large_graphic_colour_popup_pane_g

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

0xa686,	// (0x0000a686) popup_snote_single_text_window_t_ParamLimits

0xa686,	// (0x0000a686) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xa691,	// (0x0000a691) popup_snote_single_graphic_window_g_ParamLimits

0xa691,	// (0x0000a691) popup_snote_single_graphic_window_g

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

0xa696,	// (0x0000a696) popup_snote_single_graphic_window_t_ParamLimits

0xa696,	// (0x0000a696) popup_snote_single_graphic_window_t

0x5224,	// (0x00005224) grid_graphic_popup_pane_ParamLimits

0x5224,	// (0x00005224) grid_graphic_popup_pane

0x524c,	// (0x0000524c) listscroll_popup_graphic_pane_g1_ParamLimits

0x524c,	// (0x0000524c) listscroll_popup_graphic_pane_g1

0xd0be,	// (0x0000d0be) listscroll_popup_graphic_pane_g2_ParamLimits

0xd0be,	// (0x0000d0be) listscroll_popup_graphic_pane_g2

0x0001,

0xf256,	// (0x0000f256) listscroll_popup_graphic_pane_g_ParamLimits

0xf256,	// (0x0000f256) listscroll_popup_graphic_pane_g

0x5274,	// (0x00005274) scroll_pane_cp5

0xd082,	// (0x0000d082) cell_graphic_popup_pane_ParamLimits

0xd082,	// (0x0000d082) cell_graphic_popup_pane

0x51ae,	// (0x000051ae) cell_graphic_popup_pane_g1

0x51b6,	// (0x000051b6) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xaa72,	// (0x0000aa72) cell_graphic_popup_pane_g

0x51bf,	// (0x000051bf) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd03d,	// (0x0000d03d) bg_list_pane_g1_ParamLimits

0xd03d,	// (0x0000d03d) bg_list_pane_g1

0x512b,	// (0x0000512b) bg_list_pane_g2_ParamLimits

0x512b,	// (0x0000512b) bg_list_pane_g2

0x513e,	// (0x0000513e) bg_list_pane_g3_ParamLimits

0x513e,	// (0x0000513e) bg_list_pane_g3

0x5150,	// (0x00005150) bg_list_pane_g4_ParamLimits

0x5150,	// (0x00005150) bg_list_pane_g4

0xd058,	// (0x0000d058) bg_list_pane_g5_ParamLimits

0xd058,	// (0x0000d058) bg_list_pane_g5

0x0004,

0xf24b,	// (0x0000f24b) bg_list_pane_g_ParamLimits

0xf24b,	// (0x0000f24b) bg_list_pane_g

0xcfe3,	// (0x0000cfe3) list_double2_graphic_large_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double2_graphic_large_graphic_pane

0xcfe3,	// (0x0000cfe3) list_double2_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double2_graphic_pane

0xcfe3,	// (0x0000cfe3) list_double2_large_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double2_large_graphic_pane

0xcfe3,	// (0x0000cfe3) list_double2_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double2_pane

0xcfe3,	// (0x0000cfe3) list_double_graphic_heading_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_graphic_heading_pane

0xcfe3,	// (0x0000cfe3) list_double_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_graphic_pane

0xcfe3,	// (0x0000cfe3) list_double_heading_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_heading_pane

0xcfe3,	// (0x0000cfe3) list_double_large_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_large_graphic_pane

0xcfe3,	// (0x0000cfe3) list_double_number_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_number_pane

0xcfe3,	// (0x0000cfe3) list_double_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_pane

0xcfe3,	// (0x0000cfe3) list_double_time_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_double_time_pane

0xcfe3,	// (0x0000cfe3) list_setting_number_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_setting_number_pane

0xcfe3,	// (0x0000cfe3) list_setting_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_setting_pane

0xcff5,	// (0x0000cff5) list_single_2graphic_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_2graphic_pane

0xcff5,	// (0x0000cff5) list_single_graphic_heading_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_graphic_heading_pane

0xcff5,	// (0x0000cff5) list_single_graphic_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_graphic_pane

0xcff5,	// (0x0000cff5) list_single_heading_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_heading_pane

0xcfe3,	// (0x0000cfe3) list_single_large_graphic_pane_ParamLimits

0xcfe3,	// (0x0000cfe3) list_single_large_graphic_pane

0xcff5,	// (0x0000cff5) list_single_number_heading_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_number_heading_pane

0xcff5,	// (0x0000cff5) list_single_number_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_number_pane

0xcff5,	// (0x0000cff5) list_single_pane_ParamLimits

0xcff5,	// (0x0000cff5) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x3506,	// (0x00003506) list_single_pane_g1_ParamLimits

0x3506,	// (0x00003506) list_single_pane_g1

0x3512,	// (0x00003512) list_single_pane_g2_ParamLimits

0x3512,	// (0x00003512) list_single_pane_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_pane_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_pane_g

0x5961,	// (0x00005961) list_single_pane_t1_ParamLimits

0x5961,	// (0x00005961) list_single_pane_t1

0x3506,	// (0x00003506) list_single_number_pane_g1_ParamLimits

0x3506,	// (0x00003506) list_single_number_pane_g1

0x3512,	// (0x00003512) list_single_number_pane_g2_ParamLimits

0x3512,	// (0x00003512) list_single_number_pane_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_number_pane_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_number_pane_g

0x35fc,	// (0x000035fc) list_single_number_pane_t1_ParamLimits

0x35fc,	// (0x000035fc) list_single_number_pane_t1

0xce25,	// (0x0000ce25) list_single_number_pane_t2_ParamLimits

0xce25,	// (0x0000ce25) list_single_number_pane_t2

0x0001,

0xf22e,	// (0x0000f22e) list_single_number_pane_t_ParamLimits

0xf22e,	// (0x0000f22e) list_single_number_pane_t

0x7112,	// (0x00007112) list_single_graphic_pane_g1_ParamLimits

0x7112,	// (0x00007112) list_single_graphic_pane_g1

0x3506,	// (0x00003506) list_single_graphic_pane_g2_ParamLimits

0x3506,	// (0x00003506) list_single_graphic_pane_g2

0x3512,	// (0x00003512) list_single_graphic_pane_g3_ParamLimits

0x3512,	// (0x00003512) list_single_graphic_pane_g3

0x0002,

0xf0d9,	// (0x0000f0d9) list_single_graphic_pane_g_ParamLimits

0xf0d9,	// (0x0000f0d9) list_single_graphic_pane_g

0xb4f6,	// (0x0000b4f6) list_single_graphic_pane_t1_ParamLimits

0xb4f6,	// (0x0000b4f6) list_single_graphic_pane_t1

0x3506,	// (0x00003506) list_single_heading_pane_g1_ParamLimits

0x3506,	// (0x00003506) list_single_heading_pane_g1

0x3512,	// (0x00003512) list_single_heading_pane_g2_ParamLimits

0x3512,	// (0x00003512) list_single_heading_pane_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_heading_pane_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_heading_pane_g

0xb50c,	// (0x0000b50c) list_single_heading_pane_t1_ParamLimits

0xb50c,	// (0x0000b50c) list_single_heading_pane_t1

0xb522,	// (0x0000b522) list_single_heading_pane_t2_ParamLimits

0xb522,	// (0x0000b522) list_single_heading_pane_t2

0x0001,

0xf0e0,	// (0x0000f0e0) list_single_heading_pane_t_ParamLimits

0xf0e0,	// (0x0000f0e0) list_single_heading_pane_t

0x3506,	// (0x00003506) list_single_number_heading_pane_g1_ParamLimits

0x3506,	// (0x00003506) list_single_number_heading_pane_g1

0x3512,	// (0x00003512) list_single_number_heading_pane_g2_ParamLimits

0x3512,	// (0x00003512) list_single_number_heading_pane_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_number_heading_pane_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_number_heading_pane_g

0xb50c,	// (0x0000b50c) list_single_number_heading_pane_t1_ParamLimits

0xb50c,	// (0x0000b50c) list_single_number_heading_pane_t1

0xb534,	// (0x0000b534) list_single_number_heading_pane_t2_ParamLimits

0xb534,	// (0x0000b534) list_single_number_heading_pane_t2

0x593b,	// (0x0000593b) list_single_number_heading_pane_t3_ParamLimits

0x593b,	// (0x0000593b) list_single_number_heading_pane_t3

0x0002,

0xf0e5,	// (0x0000f0e5) list_single_number_heading_pane_t_ParamLimits

0xf0e5,	// (0x0000f0e5) list_single_number_heading_pane_t

0x34fa,	// (0x000034fa) list_single_graphic_heading_pane_g1_ParamLimits

0x34fa,	// (0x000034fa) list_single_graphic_heading_pane_g1

0xb546,	// (0x0000b546) list_single_graphic_heading_pane_g4_ParamLimits

0xb546,	// (0x0000b546) list_single_graphic_heading_pane_g4

0x3512,	// (0x00003512) list_single_graphic_heading_pane_g5_ParamLimits

0x3512,	// (0x00003512) list_single_graphic_heading_pane_g5

0x0002,

0xf0ec,	// (0x0000f0ec) list_single_graphic_heading_pane_g_ParamLimits

0xf0ec,	// (0x0000f0ec) list_single_graphic_heading_pane_g

0xb50c,	// (0x0000b50c) list_single_graphic_heading_pane_t1_ParamLimits

0xb50c,	// (0x0000b50c) list_single_graphic_heading_pane_t1

0xb557,	// (0x0000b557) list_single_graphic_heading_pane_t2_ParamLimits

0xb557,	// (0x0000b557) list_single_graphic_heading_pane_t2

0x0001,

0xf0f3,	// (0x0000f0f3) list_single_graphic_heading_pane_t_ParamLimits

0xf0f3,	// (0x0000f0f3) list_single_graphic_heading_pane_t

0x5977,	// (0x00005977) list_single_large_graphic_pane_g1_ParamLimits

0x5977,	// (0x00005977) list_single_large_graphic_pane_g1

0x5983,	// (0x00005983) list_single_large_graphic_pane_g2_ParamLimits

0x5983,	// (0x00005983) list_single_large_graphic_pane_g2

0x598f,	// (0x0000598f) list_single_large_graphic_pane_g3_ParamLimits

0x598f,	// (0x0000598f) list_single_large_graphic_pane_g3

0x0002,

0xab02,	// (0x0000ab02) list_single_large_graphic_pane_g_ParamLimits

0xab02,	// (0x0000ab02) list_single_large_graphic_pane_g

0x3dfb,	// (0x00003dfb) wait_border_pane_g2_copy1

0xb569,	// (0x0000b569) list_single_large_graphic_pane_g4_cp2

0x599b,	// (0x0000599b) list_single_large_graphic_pane_t1_ParamLimits

0x599b,	// (0x0000599b) list_single_large_graphic_pane_t1

0x23c3,	// (0x000023c3) list_double_pane_g1_ParamLimits

0x23c3,	// (0x000023c3) list_double_pane_g1

0xb571,	// (0x0000b571) list_double_pane_g2_ParamLimits

0xb571,	// (0x0000b571) list_double_pane_g2

0x0001,

0xf0f8,	// (0x0000f0f8) list_double_pane_g_ParamLimits

0xf0f8,	// (0x0000f0f8) list_double_pane_g

0xb57d,	// (0x0000b57d) list_double_pane_t1_ParamLimits

0xb57d,	// (0x0000b57d) list_double_pane_t1

0xb593,	// (0x0000b593) list_double_pane_t2_ParamLimits

0xb593,	// (0x0000b593) list_double_pane_t2

0x0001,

0xf0fd,	// (0x0000f0fd) list_double_pane_t_ParamLimits

0xf0fd,	// (0x0000f0fd) list_double_pane_t

0xb5a5,	// (0x0000b5a5) list_double2_pane_g1_ParamLimits

0xb5a5,	// (0x0000b5a5) list_double2_pane_g1

0x10dc,	// (0x000010dc) list_double2_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_double2_pane_g2

0x0001,

0xf102,	// (0x0000f102) list_double2_pane_g_ParamLimits

0xf102,	// (0x0000f102) list_double2_pane_g

0xb5b6,	// (0x0000b5b6) list_double2_pane_t1_ParamLimits

0xb5b6,	// (0x0000b5b6) list_double2_pane_t1

0xb5cc,	// (0x0000b5cc) list_double2_pane_t2_ParamLimits

0xb5cc,	// (0x0000b5cc) list_double2_pane_t2

0x0001,

0xf107,	// (0x0000f107) list_double2_pane_t_ParamLimits

0xf107,	// (0x0000f107) list_double2_pane_t

0x23c3,	// (0x000023c3) list_double_number_pane_g1_ParamLimits

0x23c3,	// (0x000023c3) list_double_number_pane_g1

0xb571,	// (0x0000b571) list_double_number_pane_g2_ParamLimits

0xb571,	// (0x0000b571) list_double_number_pane_g2

0x0001,

0xf0f8,	// (0x0000f0f8) list_double_number_pane_g_ParamLimits

0xf0f8,	// (0x0000f0f8) list_double_number_pane_g

0xb5de,	// (0x0000b5de) list_double_number_pane_t1_ParamLimits

0xb5de,	// (0x0000b5de) list_double_number_pane_t1

0xb5f0,	// (0x0000b5f0) list_double_number_pane_t2_ParamLimits

0xb5f0,	// (0x0000b5f0) list_double_number_pane_t2

0xb606,	// (0x0000b606) list_double_number_pane_t3_ParamLimits

0xb606,	// (0x0000b606) list_double_number_pane_t3

0x0002,

0xf10c,	// (0x0000f10c) list_double_number_pane_t_ParamLimits

0xf10c,	// (0x0000f10c) list_double_number_pane_t

0xb618,	// (0x0000b618) list_double_graphic_pane_g1_ParamLimits

0xb618,	// (0x0000b618) list_double_graphic_pane_g1

0xb624,	// (0x0000b624) list_double_graphic_pane_g2_ParamLimits

0xb624,	// (0x0000b624) list_double_graphic_pane_g2

0xb633,	// (0x0000b633) list_double_graphic_pane_g3_ParamLimits

0xb633,	// (0x0000b633) list_double_graphic_pane_g3

0x0003,

0xf113,	// (0x0000f113) list_double_graphic_pane_g_ParamLimits

0xf113,	// (0x0000f113) list_double_graphic_pane_g

0xb64b,	// (0x0000b64b) list_double_graphic_pane_t1_ParamLimits

0xb64b,	// (0x0000b64b) list_double_graphic_pane_t1

0xb661,	// (0x0000b661) list_double_graphic_pane_t2_ParamLimits

0xb661,	// (0x0000b661) list_double_graphic_pane_t2

0x0001,

0xf11c,	// (0x0000f11c) list_double_graphic_pane_t_ParamLimits

0xf11c,	// (0x0000f11c) list_double_graphic_pane_t

0xb673,	// (0x0000b673) list_double2_graphic_pane_g1_ParamLimits

0xb673,	// (0x0000b673) list_double2_graphic_pane_g1

0xb67f,	// (0x0000b67f) list_double2_graphic_pane_g2_ParamLimits

0xb67f,	// (0x0000b67f) list_double2_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3

0x0002,

0xf121,	// (0x0000f121) list_double2_graphic_pane_g_ParamLimits

0xf121,	// (0x0000f121) list_double2_graphic_pane_g

0xb68b,	// (0x0000b68b) list_double2_graphic_pane_t1_ParamLimits

0xb68b,	// (0x0000b68b) list_double2_graphic_pane_t1

0xb6a1,	// (0x0000b6a1) list_double2_graphic_pane_t2_ParamLimits

0xb6a1,	// (0x0000b6a1) list_double2_graphic_pane_t2

0x0001,

0xf128,	// (0x0000f128) list_double2_graphic_pane_t_ParamLimits

0xf128,	// (0x0000f128) list_double2_graphic_pane_t

0xb6b3,	// (0x0000b6b3) list_double_large_graphic_pane_g1_ParamLimits

0xb6b3,	// (0x0000b6b3) list_double_large_graphic_pane_g1

0xb6de,	// (0x0000b6de) list_double_large_graphic_pane_g2_ParamLimits

0xb6de,	// (0x0000b6de) list_double_large_graphic_pane_g2

0xb571,	// (0x0000b571) list_double_large_graphic_pane_g3_ParamLimits

0xb571,	// (0x0000b571) list_double_large_graphic_pane_g3

0xb6ef,	// (0x0000b6ef) list_double_large_graphic_pane_g4_ParamLimits

0xb6ef,	// (0x0000b6ef) list_double_large_graphic_pane_g4

0x0004,

0xf12d,	// (0x0000f12d) list_double_large_graphic_pane_g_ParamLimits

0xf12d,	// (0x0000f12d) list_double_large_graphic_pane_g

0xb701,	// (0x0000b701) list_double_large_graphic_pane_t1_ParamLimits

0xb701,	// (0x0000b701) list_double_large_graphic_pane_t1

0xb71a,	// (0x0000b71a) list_double_large_graphic_pane_t2_ParamLimits

0xb71a,	// (0x0000b71a) list_double_large_graphic_pane_t2

0x0001,

0xf138,	// (0x0000f138) list_double_large_graphic_pane_t_ParamLimits

0xf138,	// (0x0000f138) list_double_large_graphic_pane_t

0xb72c,	// (0x0000b72c) list_double2_large_graphic_pane_g1_ParamLimits

0xb72c,	// (0x0000b72c) list_double2_large_graphic_pane_g1

0xb5a5,	// (0x0000b5a5) list_double2_large_graphic_pane_g2_ParamLimits

0xb5a5,	// (0x0000b5a5) list_double2_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3

0x0002,

0xf13d,	// (0x0000f13d) list_double2_large_graphic_pane_g_ParamLimits

0xf13d,	// (0x0000f13d) list_double2_large_graphic_pane_g

0xb738,	// (0x0000b738) list_double2_large_graphic_pane_t1_ParamLimits

0xb738,	// (0x0000b738) list_double2_large_graphic_pane_t1

0xb74e,	// (0x0000b74e) list_double2_large_graphic_pane_t2_ParamLimits

0xb74e,	// (0x0000b74e) list_double2_large_graphic_pane_t2

0x0001,

0xf144,	// (0x0000f144) list_double2_large_graphic_pane_t_ParamLimits

0xf144,	// (0x0000f144) list_double2_large_graphic_pane_t

0xb760,	// (0x0000b760) list_double_heading_pane_g1_ParamLimits

0xb760,	// (0x0000b760) list_double_heading_pane_g1

0xb771,	// (0x0000b771) list_double_heading_pane_g2_ParamLimits

0xb771,	// (0x0000b771) list_double_heading_pane_g2

0x0001,

0xf149,	// (0x0000f149) list_double_heading_pane_g_ParamLimits

0xf149,	// (0x0000f149) list_double_heading_pane_g

0xb77d,	// (0x0000b77d) list_double_heading_pane_t1_ParamLimits

0xb77d,	// (0x0000b77d) list_double_heading_pane_t1

0xb793,	// (0x0000b793) list_double_heading_pane_t2_ParamLimits

0xb793,	// (0x0000b793) list_double_heading_pane_t2

0x0001,

0xf14e,	// (0x0000f14e) list_double_heading_pane_t_ParamLimits

0xf14e,	// (0x0000f14e) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xb760,	// (0x0000b760) list_double_graphic_heading_pane_g2_ParamLimits

0xb760,	// (0x0000b760) list_double_graphic_heading_pane_g2

0xb771,	// (0x0000b771) list_double_graphic_heading_pane_g3_ParamLimits

0xb771,	// (0x0000b771) list_double_graphic_heading_pane_g3

0x0002,

0xf153,	// (0x0000f153) list_double_graphic_heading_pane_g_ParamLimits

0xf153,	// (0x0000f153) list_double_graphic_heading_pane_g

0xb7a5,	// (0x0000b7a5) list_double_graphic_heading_pane_t1_ParamLimits

0xb7a5,	// (0x0000b7a5) list_double_graphic_heading_pane_t1

0xb7bb,	// (0x0000b7bb) list_double_graphic_heading_pane_t2_ParamLimits

0xb7bb,	// (0x0000b7bb) list_double_graphic_heading_pane_t2

0x0001,

0xf15a,	// (0x0000f15a) list_double_graphic_heading_pane_t_ParamLimits

0xf15a,	// (0x0000f15a) list_double_graphic_heading_pane_t

0xb6de,	// (0x0000b6de) list_double_time_pane_g1_ParamLimits

0xb6de,	// (0x0000b6de) list_double_time_pane_g1

0xb571,	// (0x0000b571) list_double_time_pane_g2_ParamLimits

0xb571,	// (0x0000b571) list_double_time_pane_g2

0x0001,

0xf15f,	// (0x0000f15f) list_double_time_pane_g_ParamLimits

0xf15f,	// (0x0000f15f) list_double_time_pane_g

0xb7cd,	// (0x0000b7cd) list_double_time_pane_t1_ParamLimits

0xb7cd,	// (0x0000b7cd) list_double_time_pane_t1

0xb7e3,	// (0x0000b7e3) list_double_time_pane_t2_ParamLimits

0xb7e3,	// (0x0000b7e3) list_double_time_pane_t2

0xb7f5,	// (0x0000b7f5) list_double_time_pane_t3_ParamLimits

0xb7f5,	// (0x0000b7f5) list_double_time_pane_t3

0xb807,	// (0x0000b807) list_double_time_pane_t4_ParamLimits

0xb807,	// (0x0000b807) list_double_time_pane_t4

0x0003,

0xf164,	// (0x0000f164) list_double_time_pane_t_ParamLimits

0xf164,	// (0x0000f164) list_double_time_pane_t

0xb67f,	// (0x0000b67f) list_setting_pane_g1_ParamLimits

0xb67f,	// (0x0000b67f) list_setting_pane_g1

0x10dc,	// (0x000010dc) list_setting_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_pane_g2

0x0001,

0xf16d,	// (0x0000f16d) list_setting_pane_g_ParamLimits

0xf16d,	// (0x0000f16d) list_setting_pane_g

0xb819,	// (0x0000b819) list_setting_pane_t1_ParamLimits

0xb819,	// (0x0000b819) list_setting_pane_t1

0xb830,	// (0x0000b830) list_setting_pane_t2_ParamLimits

0xb830,	// (0x0000b830) list_setting_pane_t2

0x0002,

0xf172,	// (0x0000f172) list_setting_pane_t_ParamLimits

0xf172,	// (0x0000f172) list_setting_pane_t

0xb86f,	// (0x0000b86f) set_value_pane_cp_ParamLimits

0xb86f,	// (0x0000b86f) set_value_pane_cp

0xb67f,	// (0x0000b67f) list_setting_number_pane_g1_ParamLimits

0xb67f,	// (0x0000b67f) list_setting_number_pane_g1

0x10dc,	// (0x000010dc) list_setting_number_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_number_pane_g2

0x0001,

0xf16d,	// (0x0000f16d) list_setting_number_pane_g_ParamLimits

0xf16d,	// (0x0000f16d) list_setting_number_pane_g

0xb87b,	// (0x0000b87b) list_setting_number_pane_t1_ParamLimits

0xb87b,	// (0x0000b87b) list_setting_number_pane_t1

0xb88f,	// (0x0000b88f) list_setting_number_pane_t2_ParamLimits

0xb88f,	// (0x0000b88f) list_setting_number_pane_t2

0xb8a6,	// (0x0000b8a6) list_setting_number_pane_t3_ParamLimits

0xb8a6,	// (0x0000b8a6) list_setting_number_pane_t3

0x0003,

0xf179,	// (0x0000f179) list_setting_number_pane_t_ParamLimits

0xf179,	// (0x0000f179) list_setting_number_pane_t

0xb86f,	// (0x0000b86f) set_value_pane_ParamLimits

0xb86f,	// (0x0000b86f) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xb8e9,	// (0x0000b8e9) form_field_data_pane_ParamLimits

0xb8e9,	// (0x0000b8e9) form_field_data_pane

0xb900,	// (0x0000b900) form_field_data_wide_pane_ParamLimits

0xb900,	// (0x0000b900) form_field_data_wide_pane

0xb920,	// (0x0000b920) form_field_popup_pane_ParamLimits

0xb920,	// (0x0000b920) form_field_popup_pane

0xb938,	// (0x0000b938) form_field_popup_wide_pane_ParamLimits

0xb938,	// (0x0000b938) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xb959,	// (0x0000b959) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xb973,	// (0x0000b973) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xb995,	// (0x0000b995) form_field_slider_pane_t1_ParamLimits

0xb995,	// (0x0000b995) form_field_slider_pane_t1

0xb9ad,	// (0x0000b9ad) form_field_slider_pane_t2_ParamLimits

0xb9ad,	// (0x0000b9ad) form_field_slider_pane_t2

0x0001,

0xf182,	// (0x0000f182) form_field_slider_pane_t_ParamLimits

0xf182,	// (0x0000f182) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xb9c2,	// (0x0000b9c2) slider_cont_pane_ParamLimits

0xb9c2,	// (0x0000b9c2) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xa762,	// (0x0000a762) form_field_slider_wide_pane_t_ParamLimits

0xa762,	// (0x0000a762) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xb9d6,	// (0x0000b9d6) slider_cont_pane_cp1_ParamLimits

0xb9d6,	// (0x0000b9d6) slider_cont_pane_cp1

0xb9ea,	// (0x0000b9ea) slider_form_pane_cp

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

0xa767,	// (0x0000a767) input_focus_pane_g

0x3e04,	// (0x00003e04) wait_border_pane_g3_copy1

0xb9f2,	// (0x0000b9f2) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xcfb8,	// (0x0000cfb8) data_form_wide_pane_t1

0xba0c,	// (0x0000ba0c) list_form_graphic_pane_cp_ParamLimits

0xba0c,	// (0x0000ba0c) list_form_graphic_pane_cp

0x4f94,	// (0x00004f94) slider_form_pane_g1

0x4f9d,	// (0x00004f9d) slider_form_pane_g2

0x0006,

0xf23c,	// (0x0000f23c) slider_form_pane_g

0xba1d,	// (0x0000ba1d) list_form_graphic_pane_ParamLimits

0xba1d,	// (0x0000ba1d) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xba2f,	// (0x0000ba2f) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xba38,	// (0x0000ba38) input_find_pane_g1_ParamLimits

0xba38,	// (0x0000ba38) input_find_pane_g1

0xba44,	// (0x0000ba44) input_find_pane_t1_ParamLimits

0xba44,	// (0x0000ba44) input_find_pane_t1

0xba59,	// (0x0000ba59) input_find_pane_t2_ParamLimits

0xba59,	// (0x0000ba59) input_find_pane_t2

0x0001,

0xf187,	// (0x0000f187) input_find_pane_t_ParamLimits

0xf187,	// (0x0000f187) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0xba7a,	// (0x0000ba7a) bg_popup_window_pane_cp2_ParamLimits

0xba7a,	// (0x0000ba7a) bg_popup_window_pane_cp2

0xba87,	// (0x0000ba87) listscroll_menu_pane_ParamLimits

0xba87,	// (0x0000ba87) listscroll_menu_pane

0xba93,	// (0x0000ba93) popup_submenu_window_ParamLimits

0xba93,	// (0x0000ba93) popup_submenu_window

0x1607,	// (0x00001607) find_popup_pane_g1

0x160f,	// (0x0000160f) input_popup_find_pane_cp

0x15aa,	// (0x000015aa) input_focus_pane_cp4_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp4

0x1625,	// (0x00001625) input_popup_find_pane_t1_ParamLimits

0x1625,	// (0x00001625) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1653,	// (0x00001653) listscroll_popup_sub_pane

0x165b,	// (0x0000165b) list_submenu_pane_ParamLimits

0x165b,	// (0x0000165b) list_submenu_pane

0x166c,	// (0x0000166c) scroll_pane_cp4

0x1674,	// (0x00001674) list_single_popup_submenu_pane_ParamLimits

0x1674,	// (0x00001674) list_single_popup_submenu_pane

0x1688,	// (0x00001688) list_single_popup_submenu_pane_g1

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1_ParamLimits

0x1690,	// (0x00001690) list_single_popup_submenu_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1

0xbacb,	// (0x0000bacb) tabs_2_active_pane_g1

0xbad3,	// (0x0000bad3) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbacb,	// (0x0000bacb) tabs_2_passive_pane_g1

0xbad3,	// (0x0000bad3) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbae5,	// (0x0000bae5) tabs_2_long_active_pane_t1

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp4

0x206e,	// (0x0000206e) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbaf8,	// (0x0000baf8) tabs_3_long_active_pane_t1

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp5

0x206e,	// (0x0000206e) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1707,	// (0x00001707) listscroll_popup_fast_pane_ParamLimits

0x1707,	// (0x00001707) listscroll_popup_fast_pane

0x1716,	// (0x00001716) grid_popup_fast_pane_ParamLimits

0x1716,	// (0x00001716) grid_popup_fast_pane

0x1728,	// (0x00001728) scroll_pane_cp9_ParamLimits

0x1728,	// (0x00001728) scroll_pane_cp9

0x7178,	// (0x00007178) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7178,	// (0x00007178) list_single_graphic_hl_pane_t1_cp2

0x174c,	// (0x0000174c) input_focus_pane_cp20_ParamLimits

0x174c,	// (0x0000174c) input_focus_pane_cp20

0x175a,	// (0x0000175a) query_popup_data_pane_t1_ParamLimits

0x175a,	// (0x0000175a) query_popup_data_pane_t1

0x176d,	// (0x0000176d) query_popup_data_pane_t2_ParamLimits

0x176d,	// (0x0000176d) query_popup_data_pane_t2

0x17b3,	// (0x000017b3) query_popup_data_pane_t3_ParamLimits

0x17b3,	// (0x000017b3) query_popup_data_pane_t3

0x17f4,	// (0x000017f4) query_popup_data_pane_t4_ParamLimits

0x17f4,	// (0x000017f4) query_popup_data_pane_t4

0x1830,	// (0x00001830) query_popup_data_pane_t5_ParamLimits

0x1830,	// (0x00001830) query_popup_data_pane_t5

0x0004,

0xa781,	// (0x0000a781) query_popup_data_pane_t_ParamLimits

0xa781,	// (0x0000a781) query_popup_data_pane_t

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

0xa78c,	// (0x0000a78c) bg_set_opt_pane_g

0x20f7,	// (0x000020f7) control_top_pane_stacon_ParamLimits

0x20f7,	// (0x000020f7) control_top_pane_stacon

0x214a,	// (0x0000214a) signal_pane_stacon_ParamLimits

0x214a,	// (0x0000214a) signal_pane_stacon

0x216f,	// (0x0000216f) stacon_top_pane_g1_ParamLimits

0x216f,	// (0x0000216f) stacon_top_pane_g1

0x2191,	// (0x00002191) title_pane_stacon_ParamLimits

0x2191,	// (0x00002191) title_pane_stacon

0x21bb,	// (0x000021bb) uni_indicator_pane_stacon_ParamLimits

0x21bb,	// (0x000021bb) uni_indicator_pane_stacon

0x21d0,	// (0x000021d0) battery_pane_stacon_ParamLimits

0x21d0,	// (0x000021d0) battery_pane_stacon

0x2214,	// (0x00002214) control_bottom_pane_stacon_ParamLimits

0x2214,	// (0x00002214) control_bottom_pane_stacon

0x2237,	// (0x00002237) navi_pane_stacon_ParamLimits

0x2237,	// (0x00002237) navi_pane_stacon

0x225a,	// (0x0000225a) stacon_bottom_pane_g1_ParamLimits

0x225a,	// (0x0000225a) stacon_bottom_pane_g1

0x1867,	// (0x00001867) aid_levels_signal_lsc_ParamLimits

0x1867,	// (0x00001867) aid_levels_signal_lsc

0x187e,	// (0x0000187e) signal_pane_stacon_g1_ParamLimits

0x187e,	// (0x0000187e) signal_pane_stacon_g1

0x1892,	// (0x00001892) signal_pane_stacon_g2_ParamLimits

0x1892,	// (0x00001892) signal_pane_stacon_g2

0x0001,

0xa79f,	// (0x0000a79f) signal_pane_stacon_g_ParamLimits

0xa79f,	// (0x0000a79f) signal_pane_stacon_g

0x18d4,	// (0x000018d4) title_pane_stacon_t1_ParamLimits

0x18d4,	// (0x000018d4) title_pane_stacon_t1

0x18f9,	// (0x000018f9) uni_indicator_pane_stacon_g1

0x1903,	// (0x00001903) uni_indicator_pane_stacon_g2

0x190d,	// (0x0000190d) uni_indicator_pane_stacon_g3

0x1917,	// (0x00001917) uni_indicator_pane_stacon_g4

0x0003,

0xa7ab,	// (0x0000a7ab) uni_indicator_pane_stacon_g

0x1921,	// (0x00001921) control_top_pane_stacon_g1

0x1929,	// (0x00001929) control_top_pane_stacon_t1_ParamLimits

0x1929,	// (0x00001929) control_top_pane_stacon_t1

0x1960,	// (0x00001960) aid_levels_battery_lsc_ParamLimits

0x1960,	// (0x00001960) aid_levels_battery_lsc

0x1978,	// (0x00001978) battery_pane_stacon_g1_ParamLimits

0x1978,	// (0x00001978) battery_pane_stacon_g1

0x198b,	// (0x0000198b) battery_pane_stacon_g2_ParamLimits

0x198b,	// (0x0000198b) battery_pane_stacon_g2

0x0001,

0xa7b4,	// (0x0000a7b4) battery_pane_stacon_g_ParamLimits

0xa7b4,	// (0x0000a7b4) battery_pane_stacon_g

0x19c9,	// (0x000019c9) navi_icon_pane_stacon

0x19dd,	// (0x000019dd) navi_navi_pane_stacon

0x19c9,	// (0x000019c9) navi_text_pane_stacon

0x1921,	// (0x00001921) control_bottom_pane_stacon_g1

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1_ParamLimits

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1

0xbb0a,	// (0x0000bb0a) grid_app_pane_ParamLimits

0xbb0a,	// (0x0000bb0a) grid_app_pane

0xbb42,	// (0x0000bb42) scroll_pane_cp15_ParamLimits

0xbb42,	// (0x0000bb42) scroll_pane_cp15

0xbb5f,	// (0x0000bb5f) cell_app_pane_ParamLimits

0xbb5f,	// (0x0000bb5f) cell_app_pane

0xbba4,	// (0x0000bba4) cell_app_pane_g1_ParamLimits

0xbba4,	// (0x0000bba4) cell_app_pane_g1

0x1ac3,	// (0x00001ac3) cell_app_pane_g2_ParamLimits

0x1ac3,	// (0x00001ac3) cell_app_pane_g2

0x0001,

0xf18c,	// (0x0000f18c) cell_app_pane_g_ParamLimits

0xf18c,	// (0x0000f18c) cell_app_pane_g

0x1acf,	// (0x00001acf) cell_app_pane_t1_ParamLimits

0x1acf,	// (0x00001acf) cell_app_pane_t1

0x1ae1,	// (0x00001ae1) grid_highlight_pane_ParamLimits

0x1ae1,	// (0x00001ae1) grid_highlight_pane

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

0xa767,	// (0x0000a767) cell_highlight_pane_g

0x1b05,	// (0x00001b05) bg_scroll_pane

0x1b24,	// (0x00001b24) scroll_handle_pane

0x1b75,	// (0x00001b75) scroll_bg_pane_g1

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g2

0x1ba2,	// (0x00001ba2) scroll_bg_pane_g3

0x0002,

0xa7be,	// (0x0000a7be) scroll_bg_pane_g

0x1bb7,	// (0x00001bb7) scroll_handle_focus_pane_ParamLimits

0x1bb7,	// (0x00001bb7) scroll_handle_focus_pane

0x1b75,	// (0x00001b75) scroll_handle_pane_g1

0x1bc4,	// (0x00001bc4) scroll_handle_pane_g2

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g3

0x0002,

0xa7c5,	// (0x0000a7c5) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bd8,	// (0x00001bd8) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bd8,	// (0x00001bd8) popup_fep_japan_predictive_window_t1

0x1bf2,	// (0x00001bf2) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf2,	// (0x00001bf2) popup_fep_japan_predictive_window_t2

0x1c25,	// (0x00001c25) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c25,	// (0x00001c25) popup_fep_japan_predictive_window_t3

0x0002,

0xa7cc,	// (0x0000a7cc) popup_fep_japan_predictive_window_t_ParamLimits

0xa7cc,	// (0x0000a7cc) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c5c,	// (0x00001c5c) listscroll_japin_cand_pane

0x1c64,	// (0x00001c64) popup_fep_japan_candidate_window_t1

0x1c72,	// (0x00001c72) candidate_pane_ParamLimits

0x1c72,	// (0x00001c72) candidate_pane

0x1c84,	// (0x00001c84) scroll_pane_cp30

0x1c8c,	// (0x00001c8c) list_single_popup_jap_candidate_pane_ParamLimits

0x1c8c,	// (0x00001c8c) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca1,	// (0x00001ca1) list_single_popup_jap_candidate_pane_t1

0x1cb0,	// (0x00001cb0) level_1_signal

0x1cbd,	// (0x00001cbd) level_2_signal

0x1cca,	// (0x00001cca) level_3_signal

0x1cd7,	// (0x00001cd7) level_4_signal

0x1ce4,	// (0x00001ce4) level_5_signal

0x1cf1,	// (0x00001cf1) level_6_signal

0x1cfe,	// (0x00001cfe) level_7_signal

0x1cb0,	// (0x00001cb0) level_1_battery

0x1cbd,	// (0x00001cbd) level_2_battery

0x1cca,	// (0x00001cca) level_3_battery

0x1cd7,	// (0x00001cd7) level_4_battery

0x1ce4,	// (0x00001ce4) level_5_battery

0x1cf1,	// (0x00001cf1) level_6_battery

0x1cfe,	// (0x00001cfe) level_7_battery

0x1d42,	// (0x00001d42) list_menu_pane_ParamLimits

0x1d42,	// (0x00001d42) list_menu_pane

0x1d53,	// (0x00001d53) scroll_pane_cp25_ParamLimits

0x1d53,	// (0x00001d53) scroll_pane_cp25

0x1d6c,	// (0x00001d6c) list_double2_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_large_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double2_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double2_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_large_graphic_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_large_graphic_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_number_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_number_pane_cp2

0x1d6c,	// (0x00001d6c) list_double_pane_cp2_ParamLimits

0x1d6c,	// (0x00001d6c) list_double_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_2graphic_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_2graphic_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_graphic_heading_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_graphic_heading_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_graphic_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_graphic_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_heading_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_heading_pane_cp2

0x1da9,	// (0x00001da9) list_single_large_graphic_pane_cp2_ParamLimits

0x1da9,	// (0x00001da9) list_single_large_graphic_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_number_heading_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_number_heading_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_number_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_number_pane_cp2

0xbbe0,	// (0x0000bbe0) list_single_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_pane_cp2

0x1e5a,	// (0x00001e5a) bg_popup_sub_pane_cp22

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_g1

0x1ea9,	// (0x00001ea9) popup_side_volume_key_window_t1

0x1ec5,	// (0x00001ec5) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ecd,	// (0x00001ecd) fep_china_uni_candidate_pane_ParamLimits

0x1ecd,	// (0x00001ecd) fep_china_uni_candidate_pane

0x1ee1,	// (0x00001ee1) fep_china_uni_entry_pane

0x1ef1,	// (0x00001ef1) popup_fep_china_uni_window_g1

0x1f0d,	// (0x00001f0d) fep_china_uni_entry_pane_g1

0x1f15,	// (0x00001f15) fep_china_uni_entry_pane_g2

0x0001,

0xa7f9,	// (0x0000a7f9) fep_china_uni_entry_pane_g

0x1f1d,	// (0x00001f1d) fep_entry_item_pane

0x1f27,	// (0x00001f27) fep_candidate_item_pane

0x1f2f,	// (0x00001f2f) fep_china_uni_candidate_pane_g1

0x1f37,	// (0x00001f37) fep_china_uni_candidate_pane_g2

0x1f3f,	// (0x00001f3f) fep_china_uni_candidate_pane_g3

0x1f47,	// (0x00001f47) fep_china_uni_candidate_pane_g4

0x0003,

0xa7fe,	// (0x0000a7fe) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f4f,	// (0x00001f4f) fep_entry_item_pane_t1_ParamLimits

0x1f4f,	// (0x00001f4f) fep_entry_item_pane_t1

0x1f65,	// (0x00001f65) fep_candidate_item_pane_t1_ParamLimits

0x1f65,	// (0x00001f65) fep_candidate_item_pane_t1

0x1f7a,	// (0x00001f7a) fep_candidate_item_pane_t2_ParamLimits

0x1f7a,	// (0x00001f7a) fep_candidate_item_pane_t2

0x0001,

0xa807,	// (0x0000a807) fep_candidate_item_pane_t_ParamLimits

0xa807,	// (0x0000a807) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1f8c,	// (0x00001f8c) level_1_signal_lsc

0x1f95,	// (0x00001f95) level_2_signal_lsc

0x1f9e,	// (0x00001f9e) level_3_signal_lsc

0x1fa7,	// (0x00001fa7) level_4_signal_lsc

0x1fb0,	// (0x00001fb0) level_5_signal_lsc

0x1fb9,	// (0x00001fb9) level_6_signal_lsc

0x1fc2,	// (0x00001fc2) level_7_signal_lsc

0x1fc2,	// (0x00001fc2) level_1_battery_lsc

0x1fcb,	// (0x00001fcb) level_2_battery_lsc

0x1fd4,	// (0x00001fd4) level_3_battery_lsc

0x1fdd,	// (0x00001fdd) level_4_battery_lsc

0x1fe6,	// (0x00001fe6) level_5_battery_lsc

0x1fef,	// (0x00001fef) level_6_battery_lsc

0x1f8c,	// (0x00001f8c) level_7_battery_lsc

0x1ff8,	// (0x00001ff8) scroll_handle_focus_pane_g1

0x2001,	// (0x00002001) scroll_handle_focus_pane_g2

0x200a,	// (0x0000200a) scroll_handle_focus_pane_g3

0x0002,

0xa80c,	// (0x0000a80c) scroll_handle_focus_pane_g

0xbc40,	// (0x0000bc40) list_single_2graphic_pane_g1_ParamLimits

0xbc40,	// (0x0000bc40) list_single_2graphic_pane_g1

0xb546,	// (0x0000b546) list_single_2graphic_pane_g2_ParamLimits

0xb546,	// (0x0000b546) list_single_2graphic_pane_g2

0x3512,	// (0x00003512) list_single_2graphic_pane_g3_ParamLimits

0x3512,	// (0x00003512) list_single_2graphic_pane_g3

0xbc4c,	// (0x0000bc4c) list_single_2graphic_pane_g4_ParamLimits

0xbc4c,	// (0x0000bc4c) list_single_2graphic_pane_g4

0x0003,

0xf196,	// (0x0000f196) list_single_2graphic_pane_g_ParamLimits

0xf196,	// (0x0000f196) list_single_2graphic_pane_g

0xbc58,	// (0x0000bc58) list_single_2graphic_pane_t1_ParamLimits

0xbc58,	// (0x0000bc58) list_single_2graphic_pane_t1

0xbc86,	// (0x0000bc86) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbc86,	// (0x0000bc86) list_double2_graphic_large_graphic_pane_g1

0xb5a5,	// (0x0000b5a5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5a5,	// (0x0000b5a5) list_double2_graphic_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3

0xbc98,	// (0x0000bc98) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbc98,	// (0x0000bc98) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf19f,	// (0x0000f19f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf19f,	// (0x0000f19f) list_double2_graphic_large_graphic_pane_g

0xbca4,	// (0x0000bca4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbca4,	// (0x0000bca4) list_double2_graphic_large_graphic_pane_t1

0xbcba,	// (0x0000bcba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbcba,	// (0x0000bcba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf1a8,	// (0x0000f1a8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf1a8,	// (0x0000f1a8) list_double2_graphic_large_graphic_pane_t

0x2322,	// (0x00002322) popup_fast_swap_window_ParamLimits

0x2322,	// (0x00002322) popup_fast_swap_window

0x233e,	// (0x0000233e) popup_side_volume_key_window

0x235a,	// (0x0000235a) stacon_top_pane

0x2364,	// (0x00002364) status_pane_ParamLimits

0x2364,	// (0x00002364) status_pane

0x235a,	// (0x0000235a) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20bd,	// (0x000020bd) bg_active_tab_pane_g1_cp1

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp1

0x20c6,	// (0x000020c6) bg_active_tab_pane_g3_cp1

0x20bd,	// (0x000020bd) bg_passive_tab_pane_g1_cp1

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp1

0x20c6,	// (0x000020c6) bg_passive_tab_pane_g3_cp1

0xbccc,	// (0x0000bccc) bg_active_tab_pane_g1_cp2

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp2

0xbcd5,	// (0x0000bcd5) bg_active_tab_pane_g3_cp2

0xbccc,	// (0x0000bccc) bg_passive_tab_pane_g1_cp2

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp2

0xbcd5,	// (0x0000bcd5) bg_passive_tab_pane_g3_cp2

0xbcde,	// (0x0000bcde) bg_active_tab_pane_g1_cp3

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp3

0xbce7,	// (0x0000bce7) bg_active_tab_pane_g3_cp3

0xbcde,	// (0x0000bcde) bg_passive_tab_pane_g1_cp3

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp3

0xbce7,	// (0x0000bce7) bg_passive_tab_pane_g3_cp3

0xbcf0,	// (0x0000bcf0) bg_active_tab_pane_g1_cp4

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp4

0xbcf9,	// (0x0000bcf9) bg_active_tab_pane_g3_cp4

0xbcf0,	// (0x0000bcf0) bg_passive_tab_pane_g1_cp4

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp4

0xbcf9,	// (0x0000bcf9) bg_passive_tab_pane_g3_cp4

0x2276,	// (0x00002276) bg_active_tab_pane_g1_cp5

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp5

0x227f,	// (0x0000227f) bg_active_tab_pane_g3_cp5

0x2276,	// (0x00002276) bg_passive_tab_pane_g1_cp5

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp5

0x227f,	// (0x0000227f) bg_passive_tab_pane_g3_cp5

0xbd02,	// (0x0000bd02) list_set_graphic_pane_ParamLimits

0xbd02,	// (0x0000bd02) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbd14,	// (0x0000bd14) list_set_graphic_pane_g1_ParamLimits

0xbd14,	// (0x0000bd14) list_set_graphic_pane_g1

0xbd20,	// (0x0000bd20) list_set_graphic_pane_g2_ParamLimits

0xbd20,	// (0x0000bd20) list_set_graphic_pane_g2

0x0001,

0xf1ad,	// (0x0000f1ad) list_set_graphic_pane_g_ParamLimits

0xf1ad,	// (0x0000f1ad) list_set_graphic_pane_g

0x0009,

0xab80,	// (0x0000ab80) volume_small_pane_cp_g

0x22d5,	// (0x000022d5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22d5,	// (0x000022d5) list_double2_large_graphic_pane_g1_cp2

0x22e1,	// (0x000022e1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e1,	// (0x000022e1) list_double2_large_graphic_pane_g2_cp2

0x22f2,	// (0x000022f2) list_double2_large_graphic_pane_g3_cp2

0x22fa,	// (0x000022fa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22fa,	// (0x000022fa) list_double2_large_graphic_pane_t1_cp2

0x2310,	// (0x00002310) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2310,	// (0x00002310) list_double2_large_graphic_pane_t2_cp2

0x4a41,	// (0x00004a41) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a41,	// (0x00004a41) list_double_large_graphic_pane_g1_cp2

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_g2_cp2

0x2480,	// (0x00002480) list_double_large_graphic_pane_g3_cp2

0x4a63,	// (0x00004a63) list_double_large_graphic_pane_g4_cp

0x4a6b,	// (0x00004a6b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a6b,	// (0x00004a6b) list_double_large_graphic_pane_t1_cp2

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_t2_cp2

0x2372,	// (0x00002372) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2372,	// (0x00002372) list_double2_graphic_pane_g1_cp2

0x2380,	// (0x00002380) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2380,	// (0x00002380) list_double2_graphic_pane_g2_cp2

0x2391,	// (0x00002391) list_double2_graphic_pane_g3_cp2

0x239b,	// (0x0000239b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239b,	// (0x0000239b) list_double2_graphic_pane_t1_cp2

0x23b1,	// (0x000023b1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b1,	// (0x000023b1) list_double2_graphic_pane_t2_cp2

0x23c3,	// (0x000023c3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_single_number_heading_pane_g1_cp2

0x23cf,	// (0x000023cf) list_single_number_heading_pane_g2_cp2

0x23d7,	// (0x000023d7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x000023d7) list_single_number_heading_pane_t1_cp2

0x23ed,	// (0x000023ed) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23ed,	// (0x000023ed) list_single_number_heading_pane_t2_cp2

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23ff,	// (0x000023ff) list_single_number_heading_pane_t3_cp2

0x23c3,	// (0x000023c3) list_single_heading_pane_g1_cp2_ParamLimits

0x23c3,	// (0x000023c3) list_single_heading_pane_g1_cp2

0x23cf,	// (0x000023cf) list_single_heading_pane_g2_cp2

0x23d7,	// (0x000023d7) list_single_heading_pane_t1_cp2_ParamLimits

0x23d7,	// (0x000023d7) list_single_heading_pane_t1_cp2

0x4849,	// (0x00004849) list_single_heading_pane_t2_cp2_ParamLimits

0x4849,	// (0x00004849) list_single_heading_pane_t2_cp2

0x478b,	// (0x0000478b) list_double_graphic_pane_g1_cp2_ParamLimits

0x478b,	// (0x0000478b) list_double_graphic_pane_g1_cp2

0x4797,	// (0x00004797) list_double_graphic_pane_g2_cp2_ParamLimits

0x4797,	// (0x00004797) list_double_graphic_pane_g2_cp2

0x47a6,	// (0x000047a6) list_double_graphic_pane_g3_cp2

0x47ae,	// (0x000047ae) list_double_graphic_pane_t1_cp2_ParamLimits

0x47ae,	// (0x000047ae) list_double_graphic_pane_t1_cp2

0x47c4,	// (0x000047c4) list_double_graphic_pane_t2_cp2_ParamLimits

0x47c4,	// (0x000047c4) list_double_graphic_pane_t2_cp2

0x2474,	// (0x00002474) list_double_number_pane_g1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double_number_pane_g1_cp2

0x2480,	// (0x00002480) list_double_number_pane_g2_cp2

0x474f,	// (0x0000474f) list_double_number_pane_t1_cp2_ParamLimits

0x474f,	// (0x0000474f) list_double_number_pane_t1_cp2

0x4763,	// (0x00004763) list_double_number_pane_t2_cp2_ParamLimits

0x4763,	// (0x00004763) list_double_number_pane_t2_cp2

0x4779,	// (0x00004779) list_double_number_pane_t3_cp2_ParamLimits

0x4779,	// (0x00004779) list_double_number_pane_t3_cp2

0x4627,	// (0x00004627) list_single_graphic_pane_g1_cp2_ParamLimits

0x4627,	// (0x00004627) list_single_graphic_pane_g1_cp2

0x24d8,	// (0x000024d8) list_single_graphic_pane_g2_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_graphic_pane_g2_cp2

0x24e4,	// (0x000024e4) list_single_graphic_pane_g3_cp2

0x45fd,	// (0x000045fd) list_single_graphic_pane_t1_cp2_ParamLimits

0x45fd,	// (0x000045fd) list_single_graphic_pane_t1_cp2

0x24d8,	// (0x000024d8) list_single_number_pane_g1_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_number_pane_g1_cp2

0x24e4,	// (0x000024e4) list_single_number_pane_g2_cp2

0x45fd,	// (0x000045fd) list_single_number_pane_t1_cp2_ParamLimits

0x45fd,	// (0x000045fd) list_single_number_pane_t1_cp2

0x4613,	// (0x00004613) list_single_number_pane_t2_cp2_ParamLimits

0x4613,	// (0x00004613) list_single_number_pane_t2_cp2

0x22e1,	// (0x000022e1) list_double2_pane_g1_cp2_ParamLimits

0x22e1,	// (0x000022e1) list_double2_pane_g1_cp2

0x22f2,	// (0x000022f2) list_double2_pane_g2_cp2

0x244c,	// (0x0000244c) list_double2_pane_t1_cp2_ParamLimits

0x244c,	// (0x0000244c) list_double2_pane_t1_cp2

0x2462,	// (0x00002462) list_double2_pane_t2_cp2_ParamLimits

0x2462,	// (0x00002462) list_double2_pane_t2_cp2

0x2474,	// (0x00002474) list_double_pane_g1_cp2_ParamLimits

0x2474,	// (0x00002474) list_double_pane_g1_cp2

0x2480,	// (0x00002480) list_double_pane_g2_cp2

0x2488,	// (0x00002488) list_double_pane_t1_cp2_ParamLimits

0x2488,	// (0x00002488) list_double_pane_t1_cp2

0x249e,	// (0x0000249e) list_double_pane_t2_cp2_ParamLimits

0x249e,	// (0x0000249e) list_double_pane_t2_cp2

0x24c8,	// (0x000024c8) list_single_pane_cp2_g3

0x24d8,	// (0x000024d8) list_single_pane_g1_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_pane_g1_cp2

0x24e4,	// (0x000024e4) list_single_pane_g2_cp2

0x24ec,	// (0x000024ec) list_single_pane_t1_cp2_ParamLimits

0x24ec,	// (0x000024ec) list_single_pane_t1_cp2

0x2504,	// (0x00002504) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2504,	// (0x00002504) list_single_large_graphic_pane_g1_cp2

0x2510,	// (0x00002510) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2510,	// (0x00002510) list_single_large_graphic_pane_g2_cp2

0x251c,	// (0x0000251c) list_single_large_graphic_pane_g3_cp2

0x2524,	// (0x00002524) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2524,	// (0x00002524) list_single_large_graphic_pane_g4_cp1

0x253e,	// (0x0000253e) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x253e,	// (0x0000253e) list_single_large_graphic_pane_t1_cp2

0x4476,	// (0x00004476) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4476,	// (0x00004476) list_single_graphic_heading_pane_g1_cp2

0x4443,	// (0x00004443) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4443,	// (0x00004443) list_single_graphic_heading_pane_g4_cp2

0x24e4,	// (0x000024e4) list_single_graphic_heading_pane_g5_cp2

0x4482,	// (0x00004482) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4482,	// (0x00004482) list_single_graphic_heading_pane_t1_cp2

0x4498,	// (0x00004498) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4498,	// (0x00004498) list_single_graphic_heading_pane_t2_cp2

0x4437,	// (0x00004437) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4437,	// (0x00004437) list_single_2graphic_pane_g1_cp2

0x4443,	// (0x00004443) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4443,	// (0x00004443) list_single_2graphic_pane_g2_cp2

0x24e4,	// (0x000024e4) list_single_2graphic_pane_g3_cp2

0x4454,	// (0x00004454) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4454,	// (0x00004454) list_single_2graphic_pane_g4_cp2

0x4460,	// (0x00004460) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4460,	// (0x00004460) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x400f,	// (0x0000400f) list_highlight_pane_g1_cp1

0x4017,	// (0x00004017) list_highlight_pane_g2_cp1

0x401f,	// (0x0000401f) list_highlight_pane_g3_cp1

0x4027,	// (0x00004027) list_highlight_pane_g4_cp1

0x402f,	// (0x0000402f) list_highlight_pane_g5_cp1

0x4037,	// (0x00004037) list_highlight_pane_g6_cp1

0x403f,	// (0x0000403f) list_highlight_pane_g7_cp1

0x4047,	// (0x00004047) list_highlight_pane_g8_cp1

0x404f,	// (0x0000404f) list_highlight_pane_g9_cp1

0xcb50,	// (0x0000cb50) form_field_slider_pane_t3

0xcb5e,	// (0x0000cb5e) form_field_slider_pane_t4

0x3f4b,	// (0x00003f4b) slider_form_pane_ParamLimits

0x3f4b,	// (0x00003f4b) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4893,	// (0x00004893) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xa9b8,	// (0x0000a9b8) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2554,	// (0x00002554) text_digital

0x2563,	// (0x00002563) text_primary

0x2572,	// (0x00002572) text_primary_small

0x2581,	// (0x00002581) text_secondary

0x2590,	// (0x00002590) text_title

0x5182,	// (0x00005182) bg_passive_tab_pane_g1_cp3_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp3_srt

0x518b,	// (0x0000518b) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x5194,	// (0x00005194) tabs_4_active_pane_srt_g1

0xd06c,	// (0x0000d06c) tabs_4_active_pane_srt_t1_ParamLimits

0xd06c,	// (0x0000d06c) tabs_4_active_pane_srt_t1

0x5182,	// (0x00005182) bg_active_tab_pane_g1_cp3_copy1

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp3_copy1

0x518b,	// (0x0000518b) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp4_srt

0x4d4f,	// (0x00004d4f) bg_passive_tab_pane_g1_cp4_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp4_srt

0x4d58,	// (0x00004d58) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xce4d,	// (0x0000ce4d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xce4d,	// (0x0000ce4d) tabs_2_long_active_pane_srt_t1

0x4d4f,	// (0x00004d4f) bg_active_tab_pane_g1_cp4_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp4_srt

0x4d58,	// (0x00004d58) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp5_srt

0x2276,	// (0x00002276) bg_passive_tab_pane_g1_cp5_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp5_srt

0x227f,	// (0x0000227f) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xce37,	// (0x0000ce37) tabs_3_long_active_pane_srt_t1_ParamLimits

0xce37,	// (0x0000ce37) tabs_3_long_active_pane_srt_t1

0x2276,	// (0x00002276) bg_active_tab_pane_g1_cp5_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp5_srt

0x227f,	// (0x0000227f) bg_active_tab_pane_g3_cp5_srt

0x4d2f,	// (0x00004d2f) navi_text_pane_srt_t1

0x4d27,	// (0x00004d27) navi_icon_pane_srt_g1

0x280c,	// (0x0000280c) midp_editing_number_pane_srt

0x259f,	// (0x0000259f) midp_ticker_pane_srt

0x2814,	// (0x00002814) midp_ticker_pane_srt_g1

0x281c,	// (0x0000281c) midp_ticker_pane_srt_g2

0x0001,

0xa849,	// (0x0000a849) midp_ticker_pane_srt_g

0x2824,	// (0x00002824) midp_ticker_pane_srt_t1

0x4d18,	// (0x00004d18) midp_editing_number_pane_t1_copy1

0xbd44,	// (0x0000bd44) listscroll_midp_pane

0xbd44,	// (0x0000bd44) midp_form_pane

0x2615,	// (0x00002615) midp_info_popup_window_ParamLimits

0x2615,	// (0x00002615) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3c78,	// (0x00003c78) listscroll_midp_info_pane_ParamLimits

0x3c78,	// (0x00003c78) listscroll_midp_info_pane

0x3c60,	// (0x00003c60) listscroll_form_midp_pane_ParamLimits

0x3c60,	// (0x00003c60) listscroll_form_midp_pane

0x3c6c,	// (0x00003c6c) scroll_bar_cp050

0xcb44,	// (0x0000cb44) list_midp_pane

0x5e3a,	// (0x00005e3a) signal_pane_g2_cp

0x3b7a,	// (0x00003b7a) listscroll_midp_info_pane_t1_ParamLimits

0x3b7a,	// (0x00003b7a) listscroll_midp_info_pane_t1

0x3b92,	// (0x00003b92) listscroll_midp_info_pane_t2_ParamLimits

0x3b92,	// (0x00003b92) listscroll_midp_info_pane_t2

0x3bd0,	// (0x00003bd0) listscroll_midp_info_pane_t3_ParamLimits

0x3bd0,	// (0x00003bd0) listscroll_midp_info_pane_t3

0x3c0a,	// (0x00003c0a) listscroll_midp_info_pane_t4_ParamLimits

0x3c0a,	// (0x00003c0a) listscroll_midp_info_pane_t4

0x0003,

0xa8f3,	// (0x0000a8f3) listscroll_midp_info_pane_t_ParamLimits

0xa8f3,	// (0x0000a8f3) listscroll_midp_info_pane_t

0x166c,	// (0x0000166c) scroll_pane_cp21

0x3b18,	// (0x00003b18) form_midp_field_choice_group_pane

0x3b21,	// (0x00003b21) form_midp_field_text_pane

0x3b60,	// (0x00003b60) form_midp_field_time_pane

0x3b68,	// (0x00003b68) form_midp_gauge_slider_pane

0x3b71,	// (0x00003b71) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcb2b,	// (0x0000cb2b) list_single_midp_pane_ParamLimits

0xcb2b,	// (0x0000cb2b) list_single_midp_pane

0xcb09,	// (0x0000cb09) form_midp_field_text_pane_t1

0x37fc,	// (0x000037fc) input_focus_pane_cp050

0x3ad8,	// (0x00003ad8) list_midp_form_text_pane

0x3a70,	// (0x00003a70) form_midp_field_choice_group_pane_t1

0x3a7e,	// (0x00003a7e) input_focus_pane_cp051

0x3a92,	// (0x00003a92) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a54,	// (0x00003a54) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a62,	// (0x00003a62) form_midp_field_time_pane_t2

0x0001,

0x26c3,	// (0x000026c3) aid_navinavi_width_2_pane

0xa8ee,	// (0x0000a8ee) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a14,	// (0x00003a14) form_midp_gauge_slider_pane_t1

0x3a22,	// (0x00003a22) form_midp_gauge_slider_pane_t2

0xcaed,	// (0x0000caed) form_midp_gauge_slider_pane_t3

0xcafb,	// (0x0000cafb) form_midp_gauge_slider_pane_t4

0x0003,

0xf1ee,	// (0x0000f1ee) form_midp_gauge_slider_pane_t

0x3a4c,	// (0x00003a4c) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x39e1,	// (0x000039e1) form_midp_gauge_wait_pane_t1_ParamLimits

0x39e1,	// (0x000039e1) form_midp_gauge_wait_pane_t1

0x39f3,	// (0x000039f3) form_midp_gauge_wait_pane_t2_ParamLimits

0x39f3,	// (0x000039f3) form_midp_gauge_wait_pane_t2

0x0001,

0xa8e0,	// (0x0000a8e0) form_midp_gauge_wait_pane_t_ParamLimits

0xa8e0,	// (0x0000a8e0) form_midp_gauge_wait_pane_t

0x3a05,	// (0x00003a05) form_midp_wait_pane_ParamLimits

0x3a05,	// (0x00003a05) form_midp_wait_pane

0x39ab,	// (0x000039ab) form_midp_image_pane_g1

0x39b4,	// (0x000039b4) form_midp_image_pane_t1

0x39c3,	// (0x000039c3) form_midp_image_pane_t2

0x39d2,	// (0x000039d2) form_midp_image_pane_t3

0x0002,

0xa8d9,	// (0x0000a8d9) form_midp_image_pane_t

0x3993,	// (0x00003993) list_single_midp_pane_g1

0x399c,	// (0x0000399c) list_single_midp_pane_t1

0xcad8,	// (0x0000cad8) list_midp_form_item_pane_ParamLimits

0xcad8,	// (0x0000cad8) list_midp_form_item_pane

0x266b,	// (0x0000266b) list_midp_form_item_pane_t1

0x267a,	// (0x0000267a) midp_ticker_pane_g1

0x2686,	// (0x00002686) midp_ticker_pane_g2

0x0001,

0xa82f,	// (0x0000a82f) midp_ticker_pane_g

0xbdec,	// (0x0000bdec) midp_ticker_pane_t1

0xcfd4,	// (0x0000cfd4) midp_editing_number_pane_t1

0x4ff2,	// (0x00004ff2) midp_editing_number_pane

0x5001,	// (0x00005001) midp_ticker_pane

0x4ce0,	// (0x00004ce0) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4ce8,	// (0x00004ce8) listscroll_ai_message_pane

0x4c6a,	// (0x00004c6a) ai_message_heading_pane_g1_ParamLimits

0x4c6a,	// (0x00004c6a) ai_message_heading_pane_g1

0x4c76,	// (0x00004c76) ai_message_heading_pane_g2_ParamLimits

0x4c76,	// (0x00004c76) ai_message_heading_pane_g2

0x4c82,	// (0x00004c82) ai_message_heading_pane_g3_ParamLimits

0x4c82,	// (0x00004c82) ai_message_heading_pane_g3

0x4c8e,	// (0x00004c8e) ai_message_heading_pane_g4_ParamLimits

0x4c8e,	// (0x00004c8e) ai_message_heading_pane_g4

0x0003,

0xaa1a,	// (0x0000aa1a) ai_message_heading_pane_g_ParamLimits

0xaa1a,	// (0x0000aa1a) ai_message_heading_pane_g

0x4c9a,	// (0x00004c9a) ai_message_heading_pane_t1_ParamLimits

0x4c9a,	// (0x00004c9a) ai_message_heading_pane_t1

0x4cb4,	// (0x00004cb4) ai_message_heading_pane_t2_ParamLimits

0x4cb4,	// (0x00004cb4) ai_message_heading_pane_t2

0x0001,

0xaa23,	// (0x0000aa23) ai_message_heading_pane_t_ParamLimits

0xaa23,	// (0x0000aa23) ai_message_heading_pane_t

0x4cc6,	// (0x00004cc6) bg_popup_heading_pane_cp1_ParamLimits

0x4cc6,	// (0x00004cc6) bg_popup_heading_pane_cp1

0x4c58,	// (0x00004c58) list_ai_message_pane_ParamLimits

0x4c58,	// (0x00004c58) list_ai_message_pane

0x166c,	// (0x0000166c) scroll_pane_cp10

0x4ba4,	// (0x00004ba4) list_ai_message_pane_g1

0x4bac,	// (0x00004bac) list_ai_message_pane_g2

0x0001,

0xa9f7,	// (0x0000a9f7) list_ai_message_pane_g

0x4bb4,	// (0x00004bb4) list_ai_message_pane_t1_ParamLimits

0x4bb4,	// (0x00004bb4) list_ai_message_pane_t1

0x4bc9,	// (0x00004bc9) list_ai_message_pane_t2_ParamLimits

0x4bc9,	// (0x00004bc9) list_ai_message_pane_t2

0x4bde,	// (0x00004bde) list_ai_message_pane_t3_ParamLimits

0x4bde,	// (0x00004bde) list_ai_message_pane_t3

0x4bf3,	// (0x00004bf3) list_ai_message_pane_t4_ParamLimits

0x4bf3,	// (0x00004bf3) list_ai_message_pane_t4

0x0003,

0xa9fc,	// (0x0000a9fc) list_ai_message_pane_t_ParamLimits

0xa9fc,	// (0x0000a9fc) list_ai_message_pane_t

0xce04,	// (0x0000ce04) cell_ai_soft_ind_pane_ParamLimits

0xce04,	// (0x0000ce04) cell_ai_soft_ind_pane

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b1,	// (0x000026b1) text_secondary_cp56_ParamLimits

0x26b1,	// (0x000026b1) text_secondary_cp56

0x4b64,	// (0x00004b64) example_general_pane_ParamLimits

0x4b64,	// (0x00004b64) example_general_pane

0x4b70,	// (0x00004b70) example_parent_pane_g1_ParamLimits

0x4b70,	// (0x00004b70) example_parent_pane_g1

0x4b7c,	// (0x00004b7c) example_parent_pane_t1_ParamLimits

0x4b7c,	// (0x00004b7c) example_parent_pane_t1

0xc33d,	// (0x0000c33d) popup_preview_text_window_ParamLimits

0xc33d,	// (0x0000c33d) popup_preview_text_window

0x24d0,	// (0x000024d0) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x489b,	// (0x0000489b) popup_preview_text_window_t1_ParamLimits

0x489b,	// (0x0000489b) popup_preview_text_window_t1

0x48b9,	// (0x000048b9) popup_preview_text_window_t2_ParamLimits

0x48b9,	// (0x000048b9) popup_preview_text_window_t2

0x4902,	// (0x00004902) popup_preview_text_window_t3_ParamLimits

0x4902,	// (0x00004902) popup_preview_text_window_t3

0x4947,	// (0x00004947) popup_preview_text_window_t4_ParamLimits

0x4947,	// (0x00004947) popup_preview_text_window_t4

0x0004,

0xa9cb,	// (0x0000a9cb) popup_preview_text_window_t_ParamLimits

0xa9cb,	// (0x0000a9cb) popup_preview_text_window_t

0x49c5,	// (0x000049c5) scroll_pane_cp11

0x366e,	// (0x0000366e) bg_popup_preview_window_pane_g1

0x485b,	// (0x0000485b) bg_popup_preview_window_pane_g2

0x4863,	// (0x00004863) bg_popup_preview_window_pane_g3

0x486b,	// (0x0000486b) bg_popup_preview_window_pane_g4

0x4873,	// (0x00004873) bg_popup_preview_window_pane_g5

0x487b,	// (0x0000487b) bg_popup_preview_window_pane_g6

0x4883,	// (0x00004883) bg_popup_preview_window_pane_g7

0x488b,	// (0x0000488b) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc2b9,	// (0x0000c2b9) popup_midp_note_alarm_window_ParamLimits

0xc2b9,	// (0x0000c2b9) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xb94f,	// (0x0000b94f) form_field_data_pane_g1

0xb959,	// (0x0000b959) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbabd,	// (0x0000babd) input_popup_find_pane_g1_ParamLimits

0xbabd,	// (0x0000babd) input_popup_find_pane_g1

0x199c,	// (0x0000199c) aid_navi_side_left_pane

0x19b1,	// (0x000019b1) aid_navi_side_right_pane

0x410a,	// (0x0000410a) bg_popup_window_pane_cp30_ParamLimits

0x410a,	// (0x0000410a) bg_popup_window_pane_cp30

0x4184,	// (0x00004184) popup_midp_note_alarm_window_g1_ParamLimits

0x4184,	// (0x00004184) popup_midp_note_alarm_window_g1

0x41b4,	// (0x000041b4) popup_midp_note_alarm_window_t1_ParamLimits

0x41b4,	// (0x000041b4) popup_midp_note_alarm_window_t1

0x4255,	// (0x00004255) popup_midp_note_alarm_window_t2_ParamLimits

0x4255,	// (0x00004255) popup_midp_note_alarm_window_t2

0x4303,	// (0x00004303) popup_midp_note_alarm_window_t3_ParamLimits

0x4303,	// (0x00004303) popup_midp_note_alarm_window_t3

0x4335,	// (0x00004335) popup_midp_note_alarm_window_t4_ParamLimits

0x4335,	// (0x00004335) popup_midp_note_alarm_window_t4

0x435b,	// (0x0000435b) popup_midp_note_alarm_window_t5_ParamLimits

0x435b,	// (0x0000435b) popup_midp_note_alarm_window_t5

0x000a,

0xa968,	// (0x0000a968) popup_midp_note_alarm_window_t_ParamLimits

0xa968,	// (0x0000a968) popup_midp_note_alarm_window_t

0x4407,	// (0x00004407) wait_bar_pane_cp1_ParamLimits

0x4407,	// (0x00004407) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3df0,	// (0x00003df0) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xb973,	// (0x0000b973) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x520e,	// (0x0000520e) aid_size_cell_graphic_pane

0xb9f2,	// (0x0000b9f2) data_form_pane_t1_ParamLimits

0xcfb8,	// (0x0000cfb8) data_form_wide_pane_t1_ParamLimits

0xc6f2,	// (0x0000c6f2) bg_status_flat_pane

0xb18b,	// (0x0000b18b) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf0be,	// (0x0000f0be) title_pane_t_ParamLimits

0x1cb0,	// (0x00001cb0) level_1_signal_ParamLimits

0x1cbd,	// (0x00001cbd) level_2_signal_ParamLimits

0x1cca,	// (0x00001cca) level_3_signal_ParamLimits

0x1cd7,	// (0x00001cd7) level_4_signal_ParamLimits

0x1ce4,	// (0x00001ce4) level_5_signal_ParamLimits

0x1cf1,	// (0x00001cf1) level_6_signal_ParamLimits

0x1cfe,	// (0x00001cfe) level_7_signal_ParamLimits

0x1cb0,	// (0x00001cb0) level_1_battery_ParamLimits

0x1cbd,	// (0x00001cbd) level_2_battery_ParamLimits

0x1cca,	// (0x00001cca) level_3_battery_ParamLimits

0x1cd7,	// (0x00001cd7) level_4_battery_ParamLimits

0x1ce4,	// (0x00001ce4) level_5_battery_ParamLimits

0x1cf1,	// (0x00001cf1) level_6_battery_ParamLimits

0x1cfe,	// (0x00001cfe) level_7_battery_ParamLimits

0x400f,	// (0x0000400f) bg_status_flat_pane_g1

0x4017,	// (0x00004017) bg_status_flat_pane_g2

0x401f,	// (0x0000401f) bg_status_flat_pane_g3

0x4027,	// (0x00004027) bg_status_flat_pane_g4

0x402f,	// (0x0000402f) bg_status_flat_pane_g5

0x4037,	// (0x00004037) bg_status_flat_pane_g6

0x403f,	// (0x0000403f) bg_status_flat_pane_g7

0xb21f,	// (0x0000b21f) tabs_3_active_pane_t1_ParamLimits

0xb21f,	// (0x0000b21f) tabs_3_passive_pane_t1_ParamLimits

0xb239,	// (0x0000b239) tabs_4_active_pane_t1_ParamLimits

0xb239,	// (0x0000b239) tabs_4_1_passive_pane_t1_ParamLimits

0xbad3,	// (0x0000bad3) tabs_2_active_pane_t1_ParamLimits

0xbad3,	// (0x0000bad3) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbae5,	// (0x0000bae5) tabs_2_long_active_pane_t1_ParamLimits

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp4_ParamLimits

0x3729,	// (0x00003729) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbaf8,	// (0x0000baf8) tabs_3_long_active_pane_t1_ParamLimits

0x2b1e,	// (0x00002b1e) bg_passive_tab_pane_cp5_ParamLimits

0x3729,	// (0x00003729) list_single_midp_graphic_pane_t1

0xc6f2,	// (0x0000c6f2) bg_status_flat_pane_ParamLimits

0x3253,	// (0x00003253) indicator_pane_cp2_ParamLimits

0x3253,	// (0x00003253) indicator_pane_cp2

0xc869,	// (0x0000c869) navi_pane_srt_ParamLimits

0xc869,	// (0x0000c869) navi_pane_srt

0x339b,	// (0x0000339b) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x259f,	// (0x0000259f) copy_highlight_pane

0x259f,	// (0x0000259f) cursor_graphics_pane

0x259f,	// (0x0000259f) graphic_within_text_pane

0x259f,	// (0x0000259f) link_highlight_pane

0x4988,	// (0x00004988) popup_preview_text_window_t5_ParamLimits

0x4988,	// (0x00004988) popup_preview_text_window_t5

0x26cb,	// (0x000026cb) cursor_digital_pane

0x26cb,	// (0x000026cb) cursor_primary_pane

0x26dc,	// (0x000026dc) cursor_primary_small_pane

0x26e4,	// (0x000026e4) cursor_secondary_pane

0x26ec,	// (0x000026ec) cursor_title_pane

0x26cb,	// (0x000026cb) link_highlight_digital_pane

0x26d3,	// (0x000026d3) link_highlight_primary_pane

0x26dc,	// (0x000026dc) link_highlight_primary_small_pane

0x26e4,	// (0x000026e4) link_highlight_secondary_pane

0x26ec,	// (0x000026ec) link_highlight_title_pane

0x26cb,	// (0x000026cb) copy_highlight_digital_pane

0x26cb,	// (0x000026cb) copy_highlight_primary_pane

0x26dc,	// (0x000026dc) copy_highlight_primary_small_pane

0x26e4,	// (0x000026e4) copy_highlight_secondary_pane

0x26ec,	// (0x000026ec) copy_highlight_title_pane

0x26e4,	// (0x000026e4) graphic_text_digital_pane

0x40ad,	// (0x000040ad) graphic_text_primary_pane

0x40b6,	// (0x000040b6) graphic_text_primary_small_pane

0x26dc,	// (0x000026dc) graphic_text_secondary_pane

0x26cb,	// (0x000026cb) graphic_text_title_pane

0xbdfe,	// (0x0000bdfe) cursor_primary_pane_g1

0x409f,	// (0x0000409f) cursor_text_primary_t1

0xcb80,	// (0x0000cb80) cursor_primary_small_pane_g1

0x4091,	// (0x00004091) cursor_text_primary_small_t1

0xcb76,	// (0x0000cb76) cursor_primary_small_pane_g1_copy1

0x4079,	// (0x00004079) cursor_text_primary_small_t1_copy1

0x4057,	// (0x00004057) cursor_text_title_t1

0xcb6c,	// (0x0000cb6c) cursor_title_pane_g1

0xbdfe,	// (0x0000bdfe) cursor_digital_pane_g1

0x26fe,	// (0x000026fe) cursor_text_digital_t1

0x2723,	// (0x00002723) link_highlight_primary_pane_g1

0x4000,	// (0x00004000) link_highlight_primary_pane_t1

0x270c,	// (0x0000270c) link_highlight_primary_small_pane_g1

0x2714,	// (0x00002714) link_highlight_primary_small_pane_t1

0x2723,	// (0x00002723) link_highlight_secondary_pane_g1

0x272b,	// (0x0000272b) link_highlight_secondary_pane_t1

0x3f74,	// (0x00003f74) link_highlight_title_pane_g1

0x3f7c,	// (0x00003f7c) link_highlight_title_pane_t1

0x3f5d,	// (0x00003f5d) link_highlight_digital_pane_g1

0x3f65,	// (0x00003f65) link_highlight_digital_pane_t1

0x3e35,	// (0x00003e35) copy_highlight_primary_pane_g1

0x3e3d,	// (0x00003e3d) copy_highlight_primary_pane_t1

0x3e0f,	// (0x00003e0f) copy_highlight_primary_small_pane_g1

0x3e26,	// (0x00003e26) copy_highlight_primary_small_pane_t1

0x273a,	// (0x0000273a) copy_highlight_secondary_pane_g1

0x2742,	// (0x00002742) copy_highlight_secondary_pane_t1

0x3e0f,	// (0x00003e0f) copy_highlight_title_pane_g1

0x3e17,	// (0x00003e17) copy_highlight_title_pane_t1

0x3e35,	// (0x00003e35) copy_highlight_digital_pane_g1

0x5490,	// (0x00005490) copy_highlight_digital_pane_t1

0x53e4,	// (0x000053e4) graphic_text_primary_pane_g1

0x5474,	// (0x00005474) graphic_text_primary_pane_t1

0x5482,	// (0x00005482) graphic_text_primary_pane_t2

0x0001,

0xaa97,	// (0x0000aa97) graphic_text_primary_pane_t

0x5450,	// (0x00005450) graphic_text_primary_small_pane_g1

0x5458,	// (0x00005458) graphic_text_primary_small_pane_t1

0x5466,	// (0x00005466) graphic_text_primary_small_pane_t2

0x0001,

0xaa92,	// (0x0000aa92) graphic_text_primary_small_pane_t

0x542c,	// (0x0000542c) graphic_text_secondary_pane_g1

0x5434,	// (0x00005434) graphic_text_secondary_pane_t1

0x5442,	// (0x00005442) graphic_text_secondary_pane_t2

0x0001,

0xaa8d,	// (0x0000aa8d) graphic_text_secondary_pane_t

0x5408,	// (0x00005408) graphic_text_title_pane_g1

0x5410,	// (0x00005410) graphic_text_title_pane_t1

0x541e,	// (0x0000541e) graphic_text_title_pane_t2

0x0001,

0xaa88,	// (0x0000aa88) graphic_text_title_pane_t

0x53e4,	// (0x000053e4) graphic_text_digital_pane_g1

0x53ec,	// (0x000053ec) graphic_text_digital_pane_t1

0x53fa,	// (0x000053fa) graphic_text_digital_pane_t2

0x0001,

0xaa83,	// (0x0000aa83) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x53af,	// (0x000053af) navi_navi_icon_text_pane_srt

0x53b7,	// (0x000053b7) navi_navi_pane_srt_g1_ParamLimits

0x53b7,	// (0x000053b7) navi_navi_pane_srt_g1

0x53c9,	// (0x000053c9) navi_navi_pane_srt_g2_ParamLimits

0x53c9,	// (0x000053c9) navi_navi_pane_srt_g2

0x0001,

0xaa7e,	// (0x0000aa7e) navi_navi_pane_srt_g_ParamLimits

0xaa7e,	// (0x0000aa7e) navi_navi_pane_srt_g

0x53db,	// (0x000053db) navi_navi_tabs_pane_srt

0x53af,	// (0x000053af) navi_navi_text_pane_srt

0x53af,	// (0x000053af) navi_navi_volume_pane_srt

0x53a0,	// (0x000053a0) navi_navi_text_pane_srt_t1

0x537b,	// (0x0000537b) navi_navi_volume_pane_srt_g1

0x5383,	// (0x00005383) volume_small_pane_srt_ParamLimits

0x5383,	// (0x00005383) volume_small_pane_srt

0x2751,	// (0x00002751) volume_small_pane_srt_g1_ParamLimits

0x2751,	// (0x00002751) volume_small_pane_srt_g1

0x2761,	// (0x00002761) volume_small_pane_srt_g2_ParamLimits

0x2761,	// (0x00002761) volume_small_pane_srt_g2

0x2772,	// (0x00002772) volume_small_pane_srt_g3_ParamLimits

0x2772,	// (0x00002772) volume_small_pane_srt_g3

0x2783,	// (0x00002783) volume_small_pane_srt_g4_ParamLimits

0x2783,	// (0x00002783) volume_small_pane_srt_g4

0x2794,	// (0x00002794) volume_small_pane_srt_g5_ParamLimits

0x2794,	// (0x00002794) volume_small_pane_srt_g5

0x27a5,	// (0x000027a5) volume_small_pane_srt_g6_ParamLimits

0x27a5,	// (0x000027a5) volume_small_pane_srt_g6

0x27b6,	// (0x000027b6) volume_small_pane_srt_g7_ParamLimits

0x27b6,	// (0x000027b6) volume_small_pane_srt_g7

0x27c7,	// (0x000027c7) volume_small_pane_srt_g8_ParamLimits

0x27c7,	// (0x000027c7) volume_small_pane_srt_g8

0x27d8,	// (0x000027d8) volume_small_pane_srt_g9_ParamLimits

0x27d8,	// (0x000027d8) volume_small_pane_srt_g9

0x27e9,	// (0x000027e9) volume_small_pane_srt_g10_ParamLimits

0x27e9,	// (0x000027e9) volume_small_pane_srt_g10

0x0009,

0xa834,	// (0x0000a834) volume_small_pane_srt_g_ParamLimits

0xa834,	// (0x0000a834) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x5369,	// (0x00005369) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5369,	// (0x00005369) navi_navi_icon_text_pane_srt_t1

0x40ad,	// (0x000040ad) navi_tabs_2_long_pane_srt

0x40ad,	// (0x000040ad) navi_tabs_2_pane_srt

0x40ad,	// (0x000040ad) navi_tabs_3_long_pane_srt

0x40ad,	// (0x000040ad) navi_tabs_3_pane_srt

0x40ad,	// (0x000040ad) navi_tabs_4_pane_srt

0x5341,	// (0x00005341) tabs_2_active_pane_srt_ParamLimits

0x5341,	// (0x00005341) tabs_2_active_pane_srt

0x5351,	// (0x00005351) tabs_2_passive_pane_srt_ParamLimits

0x5351,	// (0x00005351) tabs_2_passive_pane_srt

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp1_srt

0x5315,	// (0x00005315) bg_passive_tab_pane_g1_cp1_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp1_srt

0x531e,	// (0x0000531e) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x5327,	// (0x00005327) tabs_2_active_pane_srt_g1

0xd0e8,	// (0x0000d0e8) tabs_2_active_pane_srt_t1_ParamLimits

0xd0e8,	// (0x0000d0e8) tabs_2_active_pane_srt_t1

0x5315,	// (0x00005315) bg_active_tab_pane_g1_cp1_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp1_srt

0x531e,	// (0x0000531e) bg_active_tab_pane_g3_cp1_srt

0x52e2,	// (0x000052e2) tabs_3_active_pane_srt_ParamLimits

0x52e2,	// (0x000052e2) tabs_3_active_pane_srt

0x52f3,	// (0x000052f3) tabs_3_passive_pane_cp_srt_ParamLimits

0x52f3,	// (0x000052f3) tabs_3_passive_pane_cp_srt

0x5304,	// (0x00005304) tabs_3_passive_pane_srt_ParamLimits

0x5304,	// (0x00005304) tabs_3_passive_pane_srt

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37fc,	// (0x000037fc) bg_passive_tab_pane_cp2_srt

0x27fa,	// (0x000027fa) bg_passive_tab_pane_g1_cp2_srt

0x20ab,	// (0x000020ab) bg_passive_tab_pane_g2_cp2_srt

0x2803,	// (0x00002803) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x52c8,	// (0x000052c8) tabs_3_active_pane_srt_g1

0xd0d2,	// (0x0000d0d2) tabs_3_active_pane_srt_t1_ParamLimits

0xd0d2,	// (0x0000d0d2) tabs_3_active_pane_srt_t1

0x27fa,	// (0x000027fa) bg_active_tab_pane_g1_cp2_srt

0x20ab,	// (0x000020ab) bg_active_tab_pane_g2_cp2_srt

0x2803,	// (0x00002803) bg_active_tab_pane_g3_cp2_srt

0x5280,	// (0x00005280) tabs_4_active_pane_srt_ParamLimits

0x5280,	// (0x00005280) tabs_4_active_pane_srt

0x5292,	// (0x00005292) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5292,	// (0x00005292) tabs_4_passive_pane_cp2_srt

0x2aa4,	// (0x00002aa4) aid_size_cell_toolbar

0x4e38,	// (0x00004e38) main_idle_act_pane_ParamLimits

0x2cc3,	// (0x00002cc3) popup_large_graphic_colour_window_ParamLimits

0xc5bd,	// (0x0000c5bd) popup_toolbar_window_ParamLimits

0xc5bd,	// (0x0000c5bd) popup_toolbar_window

0x503e,	// (0x0000503e) list_single_graphic_2heading_pane_ParamLimits

0x503e,	// (0x0000503e) list_single_graphic_2heading_pane

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_prt_pane

0x2b1e,	// (0x00002b1e) bg_wml_button_pane_cp1_ParamLimits

0x2b1e,	// (0x00002b1e) bg_wml_button_pane_cp1

0xcb09,	// (0x0000cb09) form_midp_field_text_pane_t1_ParamLimits

0x37fc,	// (0x000037fc) input_focus_pane_cp050_ParamLimits

0x3ad8,	// (0x00003ad8) list_midp_form_text_pane_ParamLimits

0x3a7e,	// (0x00003a7e) input_focus_pane_cp051_ParamLimits

0x3a92,	// (0x00003a92) list_midp_choice_pane_ParamLimits

0xcaa4,	// (0x0000caa4) list_single_2graphic_pane_cp3_ParamLimits

0xcaa4,	// (0x0000caa4) list_single_2graphic_pane_cp3

0xcab8,	// (0x0000cab8) list_single_midp_graphic_pane_ParamLimits

0xcab8,	// (0x0000cab8) list_single_midp_graphic_pane

0x34fa,	// (0x000034fa) list_single_graphic_2heading_pane_g1_ParamLimits

0x34fa,	// (0x000034fa) list_single_graphic_2heading_pane_g1

0x3506,	// (0x00003506) list_single_graphic_2heading_pane_g4_ParamLimits

0x3506,	// (0x00003506) list_single_graphic_2heading_pane_g4

0x3512,	// (0x00003512) list_single_graphic_2heading_pane_g5_ParamLimits

0x3512,	// (0x00003512) list_single_graphic_2heading_pane_g5

0x0002,

0xa887,	// (0x0000a887) list_single_graphic_2heading_pane_g_ParamLimits

0xa887,	// (0x0000a887) list_single_graphic_2heading_pane_g

0x351e,	// (0x0000351e) list_single_graphic_2heading_pane_t1_ParamLimits

0x351e,	// (0x0000351e) list_single_graphic_2heading_pane_t1

0x3532,	// (0x00003532) list_single_graphic_2heading_pane_t2_ParamLimits

0x3532,	// (0x00003532) list_single_graphic_2heading_pane_t2

0x354e,	// (0x0000354e) list_single_graphic_2heading_pane_t3_ParamLimits

0x354e,	// (0x0000354e) list_single_graphic_2heading_pane_t3

0x0002,

0xa88e,	// (0x0000a88e) list_single_graphic_2heading_pane_t_ParamLimits

0xa88e,	// (0x0000a88e) list_single_graphic_2heading_pane_t

0x3566,	// (0x00003566) bg_popup_sub_pane_cp2

0x3590,	// (0x00003590) grid_toobar_pane

0x35cc,	// (0x000035cc) cell_toolbar_pane_ParamLimits

0x35cc,	// (0x000035cc) cell_toolbar_pane

0x3612,	// (0x00003612) cell_toolbar_pane_g1_ParamLimits

0x3612,	// (0x00003612) cell_toolbar_pane_g1

0x3626,	// (0x00003626) cell_toolbar_pane_g2_ParamLimits

0x3626,	// (0x00003626) cell_toolbar_pane_g2

0x0001,

0xa895,	// (0x0000a895) cell_toolbar_pane_g_ParamLimits

0xa895,	// (0x0000a895) cell_toolbar_pane_g

0x3648,	// (0x00003648) grid_highlight_pane_cp2_ParamLimits

0x3648,	// (0x00003648) grid_highlight_pane_cp2

0x3662,	// (0x00003662) toolbar_button_pane

0x366e,	// (0x0000366e) toolbar_button_pane_g1

0x3676,	// (0x00003676) toolbar_button_pane_g2

0x367e,	// (0x0000367e) toolbar_button_pane_g3

0x3686,	// (0x00003686) toolbar_button_pane_g4

0x368e,	// (0x0000368e) toolbar_button_pane_g5

0x3696,	// (0x00003696) toolbar_button_pane_g6

0x369e,	// (0x0000369e) toolbar_button_pane_g7

0x36a6,	// (0x000036a6) toolbar_button_pane_g8

0x36ae,	// (0x000036ae) toolbar_button_pane_g9

0x0009,

0xa89a,	// (0x0000a89a) toolbar_button_pane_g

0x36be,	// (0x000036be) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36be,	// (0x000036be) list_single_2graphic_pane_g1_cp3

0xca06,	// (0x0000ca06) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca06,	// (0x0000ca06) list_single_2graphic_pane_g2_cp3

0x36db,	// (0x000036db) list_single_2graphic_pane_g3_cp3

0x206e,	// (0x0000206e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x206e,	// (0x0000206e) list_single_2graphic_pane_g4_cp3

0x36e3,	// (0x000036e3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36e3,	// (0x000036e3) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2aac,	// (0x00002aac) aid_zoom_text_primary

0x2ab4,	// (0x00002ab4) aid_zoom_text_secondary

0x28b7,	// (0x000028b7) status_small_pane_g7_ParamLimits

0x28b7,	// (0x000028b7) status_small_pane_g7

0x28da,	// (0x000028da) status_small_pane_t1_ParamLimits

0xb167,	// (0x0000b167) title_pane_g2

0x0003,

0xf0b5,	// (0x0000f0b5) title_pane_g

0xb3ef,	// (0x0000b3ef) aid_size_cell_colour_1_pane_ParamLimits

0xb3ef,	// (0x0000b3ef) aid_size_cell_colour_1_pane

0xb403,	// (0x0000b403) aid_size_cell_colour_2_pane_ParamLimits

0xb403,	// (0x0000b403) aid_size_cell_colour_2_pane

0xb417,	// (0x0000b417) aid_size_cell_colour_3_pane_ParamLimits

0xb417,	// (0x0000b417) aid_size_cell_colour_3_pane

0xb42b,	// (0x0000b42b) aid_size_cell_colour_4_pane_ParamLimits

0xb42b,	// (0x0000b42b) aid_size_cell_colour_4_pane

0x18a3,	// (0x000018a3) title_pane_stacon_g1_ParamLimits

0x18a3,	// (0x000018a3) title_pane_stacon_g1

0x3e94,	// (0x00003e94) popup_note_wait_window_g3_ParamLimits

0x3e94,	// (0x00003e94) popup_note_wait_window_g3

0x3f0a,	// (0x00003f0a) popup_note_wait_window_t5_ParamLimits

0x3f0a,	// (0x00003f0a) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xbfef,	// (0x0000bfef) popup_feb_china_hwr_fs_window_ParamLimits

0xbfef,	// (0x0000bfef) popup_feb_china_hwr_fs_window

0xca17,	// (0x0000ca17) aid_size_cell_hwr_fs_ParamLimits

0xca17,	// (0x0000ca17) aid_size_cell_hwr_fs

0x37fc,	// (0x000037fc) bg_popup_sub_pane_cp3_ParamLimits

0x37fc,	// (0x000037fc) bg_popup_sub_pane_cp3

0xca2c,	// (0x0000ca2c) grid_hwr_fs_pane_ParamLimits

0xca2c,	// (0x0000ca2c) grid_hwr_fs_pane

0x3820,	// (0x00003820) linegrid_hwr_fs_pane_ParamLimits

0x3820,	// (0x00003820) linegrid_hwr_fs_pane

0xca44,	// (0x0000ca44) cell_hwr_fs_pane_ParamLimits

0xca44,	// (0x0000ca44) cell_hwr_fs_pane

0x3852,	// (0x00003852) linegrid_hwr_fs_pane_g1_ParamLimits

0x3852,	// (0x00003852) linegrid_hwr_fs_pane_g1

0xca6a,	// (0x0000ca6a) linegrid_hwr_fs_pane_g2_ParamLimits

0xca6a,	// (0x0000ca6a) linegrid_hwr_fs_pane_g2

0x3870,	// (0x00003870) linegrid_hwr_fs_pane_g3_ParamLimits

0x3870,	// (0x00003870) linegrid_hwr_fs_pane_g3

0x387c,	// (0x0000387c) linegrid_hwr_fs_pane_g4_ParamLimits

0x387c,	// (0x0000387c) linegrid_hwr_fs_pane_g4

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g5_ParamLimits

0x3896,	// (0x00003896) linegrid_hwr_fs_pane_g5

0x0004,

0xf1da,	// (0x0000f1da) linegrid_hwr_fs_pane_g_ParamLimits

0xf1da,	// (0x0000f1da) linegrid_hwr_fs_pane_g

0x38ac,	// (0x000038ac) cell_hwr_fs_pane_g1_ParamLimits

0x38ac,	// (0x000038ac) cell_hwr_fs_pane_g1

0x3431,	// (0x00003431) cell_hwr_fs_pane_g2_ParamLimits

0x3431,	// (0x00003431) cell_hwr_fs_pane_g2

0xca7c,	// (0x0000ca7c) cell_hwr_fs_pane_g3_ParamLimits

0xca7c,	// (0x0000ca7c) cell_hwr_fs_pane_g3

0xca89,	// (0x0000ca89) cell_hwr_fs_pane_g4_ParamLimits

0xca89,	// (0x0000ca89) cell_hwr_fs_pane_g4

0x0003,

0xf1e5,	// (0x0000f1e5) cell_hwr_fs_pane_g_ParamLimits

0xf1e5,	// (0x0000f1e5) cell_hwr_fs_pane_g

0xca96,	// (0x0000ca96) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1653,	// (0x00001653) aid_inside_area_popup_secondary

0xccda,	// (0x0000ccda) aid_inside_area_window_primary_ParamLimits

0xccda,	// (0x0000ccda) aid_inside_area_window_primary

0x549f,	// (0x0000549f) ai2_news_ticker_pane

0x54a7,	// (0x000054a7) aid_size_cell_ai1_link_ParamLimits

0x54a7,	// (0x000054a7) aid_size_cell_ai1_link

0xd0fe,	// (0x0000d0fe) popup_ai2_data_window_ParamLimits

0xd0fe,	// (0x0000d0fe) popup_ai2_data_window

0x54d7,	// (0x000054d7) popup_ai2_link_window_ParamLimits

0x54d7,	// (0x000054d7) popup_ai2_link_window

0x37fc,	// (0x000037fc) bg_popup_sub_pane_cp4_ParamLimits

0x37fc,	// (0x000037fc) bg_popup_sub_pane_cp4

0x54eb,	// (0x000054eb) grid_ai2_link_pane_ParamLimits

0x54eb,	// (0x000054eb) grid_ai2_link_pane

0x5502,	// (0x00005502) popup_ai2_link_window_g1_ParamLimits

0x5502,	// (0x00005502) popup_ai2_link_window_g1

0x550e,	// (0x0000550e) popup_ai2_link_window_g2_ParamLimits

0x550e,	// (0x0000550e) popup_ai2_link_window_g2

0x0001,

0xaa9c,	// (0x0000aa9c) popup_ai2_link_window_g_ParamLimits

0xaa9c,	// (0x0000aa9c) popup_ai2_link_window_g

0x551d,	// (0x0000551d) ai2_mp_button_pane

0x5525,	// (0x00005525) ai2_mp_volume_pane

0x3a7e,	// (0x00003a7e) bg_popup_sub_pane_cp5_ParamLimits

0x3a7e,	// (0x00003a7e) bg_popup_sub_pane_cp5

0x552d,	// (0x0000552d) heading_ai2_gene_pane_ParamLimits

0x552d,	// (0x0000552d) heading_ai2_gene_pane

0x5539,	// (0x00005539) list_ai2_gene_pane_ParamLimits

0x5539,	// (0x00005539) list_ai2_gene_pane

0x5581,	// (0x00005581) cell_ai2_link_pane_ParamLimits

0x5581,	// (0x00005581) cell_ai2_link_pane

0x5597,	// (0x00005597) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5667,	// (0x00005667) ai2_mp_volume_pane_g1

0x566f,	// (0x0000566f) ai2_mp_volume_pane_g2

0xd128,	// (0x0000d128) list_ai2_gene_pane_t1

0x5677,	// (0x00005677) ai2_mp_volume_pane_g3

0x0002,

0xaab5,	// (0x0000aab5) ai2_mp_volume_pane_g

0x567f,	// (0x0000567f) volume_small_pane_cp3

0x5688,	// (0x00005688) aid_size_cell_ai2_button

0x5690,	// (0x00005690) grid_ai2_button_pane

0x5699,	// (0x00005699) cell_ai2_button_pane_ParamLimits

0x5699,	// (0x00005699) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5627,	// (0x00005627) ai2_gene_pane_t1_ParamLimits

0x5627,	// (0x00005627) ai2_gene_pane_t1

0xbf65,	// (0x0000bf65) aid_height_parent_landscape

0xce64,	// (0x0000ce64) aid_height_set_list

0x4e38,	// (0x00004e38) aid_size_parent

0x520e,	// (0x0000520e) aid_size_cell_graphic_pane_ParamLimits

0x5549,	// (0x00005549) popup_ai2_data_window_g1_ParamLimits

0x5549,	// (0x00005549) popup_ai2_data_window_g1

0x5555,	// (0x00005555) ai2_news_ticker_pane_g1

0x555d,	// (0x0000555d) ai2_news_ticker_pane_g2

0x0001,

0xaaa1,	// (0x0000aaa1) ai2_news_ticker_pane_g

0x5565,	// (0x00005565) ai2_news_ticker_pane_t1

0x5573,	// (0x00005573) ai2_news_ticker_pane_t2

0x0001,

0xaaa6,	// (0x0000aaa6) ai2_news_ticker_pane_t

0x55a0,	// (0x000055a0) heading_ai2_gene_pane_g1

0x55a8,	// (0x000055a8) heading_ai2_gene_pane_t1_ParamLimits

0x55a8,	// (0x000055a8) heading_ai2_gene_pane_t1

0x55bd,	// (0x000055bd) list_highlight_pane_cp6

0xd112,	// (0x0000d112) ai2_gene_pane_ParamLimits

0xd112,	// (0x0000d112) ai2_gene_pane

0xd136,	// (0x0000d136) list_ai2_gene_pane_t2

0x0001,

0xf25b,	// (0x0000f25b) list_ai2_gene_pane_t

0x55f8,	// (0x000055f8) list_highlight_pane_cp8_ParamLimits

0x55f8,	// (0x000055f8) list_highlight_pane_cp8

0x5609,	// (0x00005609) ai2_gene_pane_g1_ParamLimits

0x5609,	// (0x00005609) ai2_gene_pane_g1

0x561b,	// (0x0000561b) ai2_gene_pane_g2_ParamLimits

0x561b,	// (0x0000561b) ai2_gene_pane_g2

0x0001,

0xaab0,	// (0x0000aab0) ai2_gene_pane_g_ParamLimits

0xaab0,	// (0x0000aab0) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xbf22,	// (0x0000bf22) control_pane_t3_ParamLimits

0xbf22,	// (0x0000bf22) control_pane_t3

0x28cb,	// (0x000028cb) status_small_pane_g8_ParamLimits

0x28cb,	// (0x000028cb) status_small_pane_g8

0xc084,	// (0x0000c084) popup_find_window_ParamLimits

0xc2f3,	// (0x0000c2f3) popup_note_image_window_ParamLimits

0x34fa,	// (0x000034fa) list_double2_graphic_pane_vc_g1_ParamLimits

0x34fa,	// (0x000034fa) list_double2_graphic_pane_vc_g1

0x3506,	// (0x00003506) list_double2_graphic_pane_vc_g2_ParamLimits

0x3506,	// (0x00003506) list_double2_graphic_pane_vc_g2

0x3512,	// (0x00003512) list_double2_graphic_pane_vc_g3_ParamLimits

0x3512,	// (0x00003512) list_double2_graphic_pane_vc_g3

0x0002,

0xa887,	// (0x0000a887) list_double2_graphic_pane_vc_g_ParamLimits

0xa887,	// (0x0000a887) list_double2_graphic_pane_vc_g

0x35fc,	// (0x000035fc) list_double2_graphic_pane_vc_t1_ParamLimits

0x35fc,	// (0x000035fc) list_double2_graphic_pane_vc_t1

0x3506,	// (0x00003506) list_single_heading_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_single_heading_pane_vc_g1

0x3512,	// (0x00003512) list_single_heading_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_single_heading_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_heading_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_heading_pane_vc_g

0x36ff,	// (0x000036ff) list_single_heading_pane_vc_t1_ParamLimits

0x36ff,	// (0x000036ff) list_single_heading_pane_vc_t1

0x3715,	// (0x00003715) list_single_heading_pane_vc_t2_ParamLimits

0x3715,	// (0x00003715) list_single_heading_pane_vc_t2

0x0001,

0xa8b4,	// (0x0000a8b4) list_single_heading_pane_vc_t_ParamLimits

0xa8b4,	// (0x0000a8b4) list_single_heading_pane_vc_t

0x373f,	// (0x0000373f) list_setting_number_pane_vc_g1_ParamLimits

0x373f,	// (0x0000373f) list_setting_number_pane_vc_g1

0x374b,	// (0x0000374b) list_setting_number_pane_vc_g2_ParamLimits

0x374b,	// (0x0000374b) list_setting_number_pane_vc_g2

0x0001,

0xa8b9,	// (0x0000a8b9) list_setting_number_pane_vc_g_ParamLimits

0xa8b9,	// (0x0000a8b9) list_setting_number_pane_vc_g

0x3757,	// (0x00003757) list_setting_number_pane_vc_t1_ParamLimits

0x3757,	// (0x00003757) list_setting_number_pane_vc_t1

0x376b,	// (0x0000376b) list_setting_number_pane_vc_t2_ParamLimits

0x376b,	// (0x0000376b) list_setting_number_pane_vc_t2

0x3787,	// (0x00003787) list_setting_number_pane_vc_t3_ParamLimits

0x3787,	// (0x00003787) list_setting_number_pane_vc_t3

0x0002,

0xa8be,	// (0x0000a8be) list_setting_number_pane_vc_t_ParamLimits

0xa8be,	// (0x0000a8be) list_setting_number_pane_vc_t

0x37ad,	// (0x000037ad) set_value_pane_vc_ParamLimits

0x37ad,	// (0x000037ad) set_value_pane_vc

0x503e,	// (0x0000503e) list_double2_graphic_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double2_graphic_pane_vc

0x5050,	// (0x00005050) list_double2_large_graphic_pane_vc_ParamLimits

0x5050,	// (0x00005050) list_double2_large_graphic_pane_vc

0x503e,	// (0x0000503e) list_double2_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double2_pane_vc

0x503e,	// (0x0000503e) list_double_graphic_heading_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_graphic_heading_pane_vc

0x503e,	// (0x0000503e) list_double_graphic_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_graphic_pane_vc

0x503e,	// (0x0000503e) list_double_heading_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_heading_pane_vc

0x5050,	// (0x00005050) list_double_large_graphic_pane_vc_ParamLimits

0x5050,	// (0x00005050) list_double_large_graphic_pane_vc

0x503e,	// (0x0000503e) list_double_number_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_number_pane_vc

0x503e,	// (0x0000503e) list_double_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_pane_vc

0x503e,	// (0x0000503e) list_double_time_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_double_time_pane_vc

0x503e,	// (0x0000503e) list_setting_number_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_setting_number_pane_vc

0x503e,	// (0x0000503e) list_setting_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_setting_pane_vc

0x503e,	// (0x0000503e) list_single_graphic_heading_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_single_graphic_heading_pane_vc

0x503e,	// (0x0000503e) list_single_heading_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_single_heading_pane_vc

0x503e,	// (0x0000503e) list_single_number_heading_pane_vc_ParamLimits

0x503e,	// (0x0000503e) list_single_number_heading_pane_vc

0x56cd,	// (0x000056cd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56cd,	// (0x000056cd) list_double_graphic_heading_pane_vc_g1

0x3506,	// (0x00003506) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3506,	// (0x00003506) list_double_graphic_heading_pane_vc_g2

0x3512,	// (0x00003512) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3512,	// (0x00003512) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaabc,	// (0x0000aabc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaabc,	// (0x0000aabc) list_double_graphic_heading_pane_vc_g

0x56d9,	// (0x000056d9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56d9,	// (0x000056d9) list_double_graphic_heading_pane_vc_t1

0x36ff,	// (0x000036ff) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36ff,	// (0x000036ff) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaac3,	// (0x0000aac3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaac3,	// (0x0000aac3) list_double_graphic_heading_pane_vc_t

0x373f,	// (0x0000373f) list_setting_pane_vc_g1_ParamLimits

0x373f,	// (0x0000373f) list_setting_pane_vc_g1

0x374b,	// (0x0000374b) list_setting_pane_vc_g2_ParamLimits

0x374b,	// (0x0000374b) list_setting_pane_vc_g2

0x0001,

0xa8b9,	// (0x0000a8b9) list_setting_pane_vc_g_ParamLimits

0xa8b9,	// (0x0000a8b9) list_setting_pane_vc_g

0x58f1,	// (0x000058f1) list_setting_pane_vc_t1_ParamLimits

0x58f1,	// (0x000058f1) list_setting_pane_vc_t1

0x5905,	// (0x00005905) list_setting_pane_vc_t2_ParamLimits

0x5905,	// (0x00005905) list_setting_pane_vc_t2

0x0001,

0xaaf1,	// (0x0000aaf1) list_setting_pane_vc_t_ParamLimits

0xaaf1,	// (0x0000aaf1) list_setting_pane_vc_t

0x37ad,	// (0x000037ad) set_value_pane_cp_vc_ParamLimits

0x37ad,	// (0x000037ad) set_value_pane_cp_vc

0x3506,	// (0x00003506) list_single_number_heading_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_single_number_heading_pane_vc_g1

0x3512,	// (0x00003512) list_single_number_heading_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_single_number_heading_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_single_number_heading_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_single_number_heading_pane_vc_g

0x36ff,	// (0x000036ff) list_single_number_heading_pane_vc_t1_ParamLimits

0x36ff,	// (0x000036ff) list_single_number_heading_pane_vc_t1

0x5927,	// (0x00005927) list_single_number_heading_pane_vc_t2_ParamLimits

0x5927,	// (0x00005927) list_single_number_heading_pane_vc_t2

0x593b,	// (0x0000593b) list_single_number_heading_pane_vc_t3_ParamLimits

0x593b,	// (0x0000593b) list_single_number_heading_pane_vc_t3

0x0002,

0xaaf6,	// (0x0000aaf6) list_single_number_heading_pane_vc_t_ParamLimits

0xaaf6,	// (0x0000aaf6) list_single_number_heading_pane_vc_t

0x34fa,	// (0x000034fa) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34fa,	// (0x000034fa) list_single_graphic_heading_pane_vc_g1

0x3506,	// (0x00003506) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3506,	// (0x00003506) list_single_graphic_heading_pane_vc_g4

0x3512,	// (0x00003512) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3512,	// (0x00003512) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa887,	// (0x0000a887) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa887,	// (0x0000a887) list_single_graphic_heading_pane_vc_g

0x36ff,	// (0x000036ff) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36ff,	// (0x000036ff) list_single_graphic_heading_pane_vc_t1

0x594d,	// (0x0000594d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x594d,	// (0x0000594d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaafd,	// (0x0000aafd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaafd,	// (0x0000aafd) list_single_graphic_heading_pane_vc_t

0x3506,	// (0x00003506) list_double2_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_double2_pane_vc_g1

0x3512,	// (0x00003512) list_double2_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_double2_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_double2_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_double2_pane_vc_g

0x5961,	// (0x00005961) list_double2_pane_vc_t1_ParamLimits

0x5961,	// (0x00005961) list_double2_pane_vc_t1

0x5977,	// (0x00005977) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5977,	// (0x00005977) list_double2_large_graphic_pane_vc_g1

0x5983,	// (0x00005983) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x5983,	// (0x00005983) list_double2_large_graphic_pane_vc_g2

0x598f,	// (0x0000598f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x598f,	// (0x0000598f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xab02,	// (0x0000ab02) list_double2_large_graphic_pane_vc_g_ParamLimits

0xab02,	// (0x0000ab02) list_double2_large_graphic_pane_vc_g

0x599b,	// (0x0000599b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x599b,	// (0x0000599b) list_double2_large_graphic_pane_vc_t1

0x59b1,	// (0x000059b1) list_double_time_pane_vc_g1_ParamLimits

0x59b1,	// (0x000059b1) list_double_time_pane_vc_g1

0x59bd,	// (0x000059bd) list_double_time_pane_vc_g2_ParamLimits

0x59bd,	// (0x000059bd) list_double_time_pane_vc_g2

0x0001,

0xab09,	// (0x0000ab09) list_double_time_pane_vc_g_ParamLimits

0xab09,	// (0x0000ab09) list_double_time_pane_vc_g

0x59c9,	// (0x000059c9) list_double_time_pane_vc_t1_ParamLimits

0x59c9,	// (0x000059c9) list_double_time_pane_vc_t1

0x59e2,	// (0x000059e2) list_double_time_pane_vc_t2_ParamLimits

0x59e2,	// (0x000059e2) list_double_time_pane_vc_t2

0x59fd,	// (0x000059fd) list_double_time_pane_vc_t3_ParamLimits

0x59fd,	// (0x000059fd) list_double_time_pane_vc_t3

0x5a15,	// (0x00005a15) list_double_time_pane_vc_t4_ParamLimits

0x5a15,	// (0x00005a15) list_double_time_pane_vc_t4

0x0003,

0xab0e,	// (0x0000ab0e) list_double_time_pane_vc_t_ParamLimits

0xab0e,	// (0x0000ab0e) list_double_time_pane_vc_t

0x3506,	// (0x00003506) list_double_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_double_pane_vc_g1

0x3512,	// (0x00003512) list_double_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_double_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_double_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_double_pane_vc_g

0x5a29,	// (0x00005a29) list_double_pane_vc_t1_ParamLimits

0x5a29,	// (0x00005a29) list_double_pane_vc_t1

0x5a3b,	// (0x00005a3b) list_double_pane_vc_t2_ParamLimits

0x5a3b,	// (0x00005a3b) list_double_pane_vc_t2

0x0001,

0xab17,	// (0x0000ab17) list_double_pane_vc_t_ParamLimits

0xab17,	// (0x0000ab17) list_double_pane_vc_t

0x3506,	// (0x00003506) list_double_number_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_double_number_pane_vc_g1

0x3512,	// (0x00003512) list_double_number_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_double_number_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_double_number_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_double_number_pane_vc_g

0x5a53,	// (0x00005a53) list_double_number_pane_vc_t1_ParamLimits

0x5a53,	// (0x00005a53) list_double_number_pane_vc_t1

0x5a67,	// (0x00005a67) list_double_number_pane_vc_t2_ParamLimits

0x5a67,	// (0x00005a67) list_double_number_pane_vc_t2

0x5a3b,	// (0x00005a3b) list_double_number_pane_vc_t3_ParamLimits

0x5a3b,	// (0x00005a3b) list_double_number_pane_vc_t3

0x0002,

0xab1c,	// (0x0000ab1c) list_double_number_pane_vc_t_ParamLimits

0xab1c,	// (0x0000ab1c) list_double_number_pane_vc_t

0x5a79,	// (0x00005a79) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a79,	// (0x00005a79) list_double_large_graphic_pane_vc_g1

0x5a85,	// (0x00005a85) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a85,	// (0x00005a85) list_double_large_graphic_pane_vc_g2

0x598f,	// (0x0000598f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x598f,	// (0x0000598f) list_double_large_graphic_pane_vc_g3

0x5a94,	// (0x00005a94) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a94,	// (0x00005a94) list_double_large_graphic_pane_vc_g4

0x0003,

0xab23,	// (0x0000ab23) list_double_large_graphic_pane_vc_g_ParamLimits

0xab23,	// (0x0000ab23) list_double_large_graphic_pane_vc_g

0x5aa0,	// (0x00005aa0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5aa0,	// (0x00005aa0) list_double_large_graphic_pane_vc_t1

0x5ab2,	// (0x00005ab2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ab2,	// (0x00005ab2) list_double_large_graphic_pane_vc_t2

0x0001,

0xab2c,	// (0x0000ab2c) list_double_large_graphic_pane_vc_t_ParamLimits

0xab2c,	// (0x0000ab2c) list_double_large_graphic_pane_vc_t

0x3506,	// (0x00003506) list_double_heading_pane_vc_g1_ParamLimits

0x3506,	// (0x00003506) list_double_heading_pane_vc_g1

0x3512,	// (0x00003512) list_double_heading_pane_vc_g2_ParamLimits

0x3512,	// (0x00003512) list_double_heading_pane_vc_g2

0x0001,

0xa8af,	// (0x0000a8af) list_double_heading_pane_vc_g_ParamLimits

0xa8af,	// (0x0000a8af) list_double_heading_pane_vc_g

0x5acb,	// (0x00005acb) list_double_heading_pane_vc_t1_ParamLimits

0x5acb,	// (0x00005acb) list_double_heading_pane_vc_t1

0x36ff,	// (0x000036ff) list_double_heading_pane_vc_t2_ParamLimits

0x36ff,	// (0x000036ff) list_double_heading_pane_vc_t2

0x0001,

0xab31,	// (0x0000ab31) list_double_heading_pane_vc_t_ParamLimits

0xab31,	// (0x0000ab31) list_double_heading_pane_vc_t

0x34fa,	// (0x000034fa) list_double_graphic_pane_vc_g1_ParamLimits

0x34fa,	// (0x000034fa) list_double_graphic_pane_vc_g1

0x5adf,	// (0x00005adf) list_double_graphic_pane_vc_g2_ParamLimits

0x5adf,	// (0x00005adf) list_double_graphic_pane_vc_g2

0x5aee,	// (0x00005aee) list_double_graphic_pane_vc_g3_ParamLimits

0x5aee,	// (0x00005aee) list_double_graphic_pane_vc_g3

0x0002,

0xab36,	// (0x0000ab36) list_double_graphic_pane_vc_g_ParamLimits

0xab36,	// (0x0000ab36) list_double_graphic_pane_vc_g

0x5afa,	// (0x00005afa) list_double_graphic_pane_vc_t1_ParamLimits

0x5afa,	// (0x00005afa) list_double_graphic_pane_vc_t1

0x5a3b,	// (0x00005a3b) list_double_graphic_pane_vc_t2_ParamLimits

0x5a3b,	// (0x00005a3b) list_double_graphic_pane_vc_t2

0x0001,

0xab3d,	// (0x0000ab3d) list_double_graphic_pane_vc_t_ParamLimits

0xab3d,	// (0x0000ab3d) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xafb5,	// (0x0000afb5) aid_size_cell_touch_ParamLimits

0xafb5,	// (0x0000afb5) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb100,	// (0x0000b100) touch_pane_ParamLimits

0xb100,	// (0x0000b100) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xb916,	// (0x0000b916) form_field_data_wide_pane_cp2

0x1b05,	// (0x00001b05) bg_scroll_pane_ParamLimits

0x1b24,	// (0x00001b24) scroll_handle_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_down_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_down_pane

0x1b5f,	// (0x00001b5f) scroll_sc2_up_pane_ParamLimits

0x1b5f,	// (0x00001b5f) scroll_sc2_up_pane

0xd261,	// (0x0000d261) grid_wheel_folder_pane_g1_ParamLimits

0xd261,	// (0x0000d261) grid_wheel_folder_pane_g1

0x21f2,	// (0x000021f2) clock_nsta_pane_cp2_ParamLimits

0x21f2,	// (0x000021f2) clock_nsta_pane_cp2

0xbd44,	// (0x0000bd44) listscroll_midp_pane_ParamLimits

0xbd55,	// (0x0000bd55) midp_canvas_pane

0x2a92,	// (0x00002a92) nsta_clock_indic_pane

0x2af0,	// (0x00002af0) listscroll_form_pane_vc

0x2b0c,	// (0x00002b0c) listscroll_set_pane_vc_ParamLimits

0x2b0c,	// (0x00002b0c) listscroll_set_pane_vc

0xc71a,	// (0x0000c71a) clock_nsta_pane

0xc744,	// (0x0000c744) indicator_nsta_pane

0x3566,	// (0x00003566) bg_popup_sub_pane_cp2_ParamLimits

0x357a,	// (0x0000357a) find_pane_cp2_ParamLimits

0x357a,	// (0x0000357a) find_pane_cp2

0x3590,	// (0x00003590) grid_toobar_pane_ParamLimits

0x37bb,	// (0x000037bb) list_form_gen_pane_vc_ParamLimits

0x37bb,	// (0x000037bb) list_form_gen_pane_vc

0x37d1,	// (0x000037d1) scroll_pane_cp8_vc_ParamLimits

0x37d1,	// (0x000037d1) scroll_pane_cp8_vc

0x38ea,	// (0x000038ea) data_form_wide_pane_vc_ParamLimits

0x38ea,	// (0x000038ea) data_form_wide_pane_vc

0x38f6,	// (0x000038f6) form_field_data_wide_pane_vc_g1

0x38fe,	// (0x000038fe) form_field_data_wide_pane_vc_t1_ParamLimits

0x38fe,	// (0x000038fe) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xcb44,	// (0x0000cb44) list_midp_pane_ParamLimits

0x5274,	// (0x00005274) scroll_pane_cp16_ParamLimits

0x5274,	// (0x00005274) scroll_pane_cp16

0x3c8c,	// (0x00003c8c) button_value_adjust_pane_ParamLimits

0x3c8c,	// (0x00003c8c) button_value_adjust_pane

0xce75,	// (0x0000ce75) button_value_adjust_pane_cp6_ParamLimits

0xce75,	// (0x0000ce75) button_value_adjust_pane_cp6

0xcf8f,	// (0x0000cf8f) settings_code_pane_cp_ParamLimits

0xcf8f,	// (0x0000cf8f) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa7de,	// (0x0000a7de) cell_touch_pane_g

0xd144,	// (0x0000d144) cell_touch_pane_cp_ParamLimits

0xd144,	// (0x0000d144) cell_touch_pane_cp

0xd160,	// (0x0000d160) cell_touch_pane_ParamLimits

0xd160,	// (0x0000d160) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56ed,	// (0x000056ed) list_set_graphic_pane_vc_g1_ParamLimits

0x56ed,	// (0x000056ed) list_set_graphic_pane_vc_g1

0x56f9,	// (0x000056f9) list_set_graphic_pane_vc_g2_ParamLimits

0x56f9,	// (0x000056f9) list_set_graphic_pane_vc_g2

0x0001,

0xaac8,	// (0x0000aac8) list_set_graphic_pane_vc_g_ParamLimits

0xaac8,	// (0x0000aac8) list_set_graphic_pane_vc_g

0x5705,	// (0x00005705) text_primary_small_cp13_vc_ParamLimits

0x5705,	// (0x00005705) text_primary_small_cp13_vc

0x571d,	// (0x0000571d) list_set_graphic_pane_vc_ParamLimits

0x571d,	// (0x0000571d) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5731,	// (0x00005731) setting_code_pane_vc_t1

0x573f,	// (0x0000573f) set_text_pane_vc_t1_ParamLimits

0x573f,	// (0x0000573f) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x575a,	// (0x0000575a) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x5764,	// (0x00005764) setting_slider_graphic_pane_vc_g1

0x576c,	// (0x0000576c) setting_slider_graphic_pane_vc_t1

0x577a,	// (0x0000577a) setting_slider_graphic_pane_vc_t2

0x0001,

0xaacd,	// (0x0000aacd) setting_slider_graphic_pane_vc_t

0x5788,	// (0x00005788) slider_set_pane_cp_vc

0x5790,	// (0x00005790) slider_set_pane_vc_g1

0x5799,	// (0x00005799) slider_set_pane_vc_g2

0x0006,

0xaad2,	// (0x0000aad2) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x57c5,	// (0x000057c5) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x57cf,	// (0x000057cf) set_opt_bg_pane_g7_copy1

0x57d7,	// (0x000057d7) set_opt_bg_pane_g8_copy1

0x57e1,	// (0x000057e1) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57eb,	// (0x000057eb) setting_slider_pane_vc_t1

0x576c,	// (0x0000576c) setting_slider_pane_vc_t2

0x577a,	// (0x0000577a) setting_slider_pane_vc_t3

0x0002,

0xaae1,	// (0x0000aae1) setting_slider_pane_vc_t

0x5788,	// (0x00005788) slider_set_pane_vc

0x44aa,	// (0x000044aa) volume_set_pane_vc_g1

0x44b3,	// (0x000044b3) volume_set_pane_vc_g2

0x44bc,	// (0x000044bc) volume_set_pane_vc_g3

0x44c5,	// (0x000044c5) volume_set_pane_vc_g4

0x44ce,	// (0x000044ce) volume_set_pane_vc_g5

0x44d7,	// (0x000044d7) volume_set_pane_vc_g6

0x44e0,	// (0x000044e0) volume_set_pane_vc_g7

0x44e9,	// (0x000044e9) volume_set_pane_vc_g8

0x44f2,	// (0x000044f2) volume_set_pane_vc_g9

0x44fb,	// (0x000044fb) volume_set_pane_vc_g10

0x0009,

0xa97f,	// (0x0000a97f) volume_set_pane_vc_g

0x57fa,	// (0x000057fa) volume_set_pane_vc

0x5802,	// (0x00005802) button_value_adjust_pane_cp1_vc

0x580c,	// (0x0000580c) list_highlight_pane_cp2_vc

0x5815,	// (0x00005815) list_set_pane_vc_ParamLimits

0x5815,	// (0x00005815) list_set_pane_vc

0x587f,	// (0x0000587f) main_pane_set_vc_t1_ParamLimits

0x587f,	// (0x0000587f) main_pane_set_vc_t1

0x5894,	// (0x00005894) main_pane_set_vc_t2_ParamLimits

0x5894,	// (0x00005894) main_pane_set_vc_t2

0x58a6,	// (0x000058a6) main_pane_set_vc_t3_ParamLimits

0x58a6,	// (0x000058a6) main_pane_set_vc_t3

0x58ba,	// (0x000058ba) main_pane_set_vc_t4_ParamLimits

0x58ba,	// (0x000058ba) main_pane_set_vc_t4

0x0003,

0xaae8,	// (0x0000aae8) main_pane_set_vc_t_ParamLimits

0xaae8,	// (0x0000aae8) main_pane_set_vc_t

0x58ce,	// (0x000058ce) setting_code_pane_vc_ParamLimits

0x58ce,	// (0x000058ce) setting_code_pane_vc

0x58df,	// (0x000058df) setting_slider_graphic_pane_vc

0x58df,	// (0x000058df) setting_slider_pane_vc

0x58df,	// (0x000058df) setting_text_pane_vc

0x58df,	// (0x000058df) setting_volume_pane_vc

0x58e9,	// (0x000058e9) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5b0c,	// (0x00005b0c) button_value_adjust_pane_g1

0x5b15,	// (0x00005b15) button_value_adjust_pane_g2

0x0001,

0xab42,	// (0x0000ab42) button_value_adjust_pane_g

0x5b1e,	// (0x00005b1e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b1e,	// (0x00005b1e) form_field_slider_wide_pane_vc_t1

0x5b32,	// (0x00005b32) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b32,	// (0x00005b32) form_field_slider_wide_pane_vc_t2

0x0001,

0xab47,	// (0x0000ab47) form_field_slider_wide_pane_vc_t_ParamLimits

0xab47,	// (0x0000ab47) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5b44,	// (0x00005b44) slider_cont_pane_cp1_vc_ParamLimits

0x5b44,	// (0x00005b44) slider_cont_pane_cp1_vc

0x5790,	// (0x00005790) slider_form_pane_g1_cp2

0x5799,	// (0x00005799) slider_form_pane_g2_cp2

0x5b5d,	// (0x00005b5d) form_field_slider_pane_vc_t3

0x5b6b,	// (0x00005b6b) form_field_slider_pane_vc_t4

0x5b79,	// (0x00005b79) slider_form_pane_vc_ParamLimits

0x5b79,	// (0x00005b79) slider_form_pane_vc

0x5b86,	// (0x00005b86) form_field_slider_pane_vc_t1_ParamLimits

0x5b86,	// (0x00005b86) form_field_slider_pane_vc_t1

0x5b32,	// (0x00005b32) form_field_slider_pane_vc_t2_ParamLimits

0x5b32,	// (0x00005b32) form_field_slider_pane_vc_t2

0x0001,

0xab57,	// (0x0000ab57) form_field_slider_pane_vc_t_ParamLimits

0xab57,	// (0x0000ab57) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5ba2,	// (0x00005ba2) slider_cont_pane_vc_ParamLimits

0x5ba2,	// (0x00005ba2) slider_cont_pane_vc

0x5bb4,	// (0x00005bb4) list_form_graphic_pane_cp_vc_ParamLimits

0x5bb4,	// (0x00005bb4) list_form_graphic_pane_cp_vc

0x38f6,	// (0x000038f6) form_field_popup_wide_pane_vc_g1

0x5bc9,	// (0x00005bc9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bc9,	// (0x00005bc9) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5be0,	// (0x00005be0) list_form_wide_pane_vc_ParamLimits

0x5be0,	// (0x00005be0) list_form_wide_pane_vc

0x5bec,	// (0x00005bec) list_form_graphic_pane_vc_g1

0x5bf4,	// (0x00005bf4) list_form_graphic_pane_vc_t1_ParamLimits

0x5bf4,	// (0x00005bf4) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5c10,	// (0x00005c10) list_form_graphic_pane_vc_ParamLimits

0x5c10,	// (0x00005c10) list_form_graphic_pane_vc

0x38f6,	// (0x000038f6) form_field_popup_pane_vc_g1

0x5c26,	// (0x00005c26) form_field_popup_pane_vc_t1_ParamLimits

0x5c26,	// (0x00005c26) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5c3d,	// (0x00005c3d) list_form_pane_vc_ParamLimits

0x5c3d,	// (0x00005c3d) list_form_pane_vc

0x5c49,	// (0x00005c49) data_form_pane_vc_t1_ParamLimits

0x5c49,	// (0x00005c49) data_form_pane_vc_t1

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

0xa767,	// (0x0000a767) input_focus_pane_vc_g

0x38ea,	// (0x000038ea) data_form_pane_vc_ParamLimits

0x38ea,	// (0x000038ea) data_form_pane_vc

0x38f6,	// (0x000038f6) form_field_data_pane_vc_g1

0x5c64,	// (0x00005c64) form_field_data_pane_vc_t1_ParamLimits

0x5c64,	// (0x00005c64) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5c7e,	// (0x00005c7e) button_value_adjust_pane_cp3_vc

0x5c86,	// (0x00005c86) button_value_adjust_pane_cp5_vc

0x5c8e,	// (0x00005c8e) form_field_data_pane_vc_ParamLimits

0x5c8e,	// (0x00005c8e) form_field_data_pane_vc

0x5ca5,	// (0x00005ca5) form_field_data_pane_vc_cp2

0x5cad,	// (0x00005cad) form_field_data_wide_pane_vc_ParamLimits

0x5cad,	// (0x00005cad) form_field_data_wide_pane_vc

0x5cc3,	// (0x00005cc3) form_field_data_wide_pane_vc_cp2

0x5ccb,	// (0x00005ccb) form_field_popup_pane_vc_ParamLimits

0x5ccb,	// (0x00005ccb) form_field_popup_pane_vc

0x5ce2,	// (0x00005ce2) form_field_popup_wide_pane_vc_ParamLimits

0x5ce2,	// (0x00005ce2) form_field_popup_wide_pane_vc

0x5cf8,	// (0x00005cf8) form_field_slider_pane_vc_ParamLimits

0x5cf8,	// (0x00005cf8) form_field_slider_pane_vc

0x5d0b,	// (0x00005d0b) form_field_slider_wide_pane_vc_ParamLimits

0x5d0b,	// (0x00005d0b) form_field_slider_wide_pane_vc

0xd17e,	// (0x0000d17e) grid_touch_1_pane_ParamLimits

0xd17e,	// (0x0000d17e) grid_touch_1_pane

0xd192,	// (0x0000d192) grid_touch_2_pane_ParamLimits

0xd192,	// (0x0000d192) grid_touch_2_pane

0x5de0,	// (0x00005de0) touch_pane_g1_ParamLimits

0x5de0,	// (0x00005de0) touch_pane_g1

0x5d42,	// (0x00005d42) cell_app_pane_cp_wide_ParamLimits

0x5d42,	// (0x00005d42) cell_app_pane_cp_wide

0x5d53,	// (0x00005d53) grid_popup_fast_wide_pane_ParamLimits

0x5d53,	// (0x00005d53) grid_popup_fast_wide_pane

0x5d67,	// (0x00005d67) scroll_pane_cp19_ParamLimits

0x5d67,	// (0x00005d67) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5d7b,	// (0x00005d7b) listscroll_popup_fast_wide_pane

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane

0x5d83,	// (0x00005d83) clock_nsta_pane_g1

0x5d8c,	// (0x00005d8c) clock_nsta_pane_t1

0xd1bc,	// (0x0000d1bc) cell_indicator_nsta_pane_ParamLimits

0xd1bc,	// (0x0000d1bc) cell_indicator_nsta_pane

0x5de0,	// (0x00005de0) cell_indicator_nsta_pane_g1

0xd1d5,	// (0x0000d1d5) cell_indicator_nsta_pane_g2

0x0001,

0xf260,	// (0x0000f260) cell_indicator_nsta_pane_g

0x5e04,	// (0x00005e04) clock_nsta_pane_cp

0x5e0c,	// (0x00005e0c) indicator_nsta_pane_cp

0x5e14,	// (0x00005e14) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c54,	// (0x00001c54) scroll_pane_cp29

0x211f,	// (0x0000211f) indicator_nsta_pane_cp2_ParamLimits

0x211f,	// (0x0000211f) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b21,	// (0x00003b21) form_midp_field_text_pane_ParamLimits

0x3c6c,	// (0x00003c6c) scroll_bar_cp050_ParamLimits

0x5e4c,	// (0x00005e4c) cell_indicator_pane_ParamLimits

0x5e4c,	// (0x00005e4c) cell_indicator_pane

0x5e63,	// (0x00005e63) cell_indicator_pane_g1

0xd1eb,	// (0x0000d1eb) grid_wheel_folder_pane_ParamLimits

0xd1eb,	// (0x0000d1eb) grid_wheel_folder_pane

0xd1f9,	// (0x0000d1f9) list_wheel_apps_pane_ParamLimits

0xd1f9,	// (0x0000d1f9) list_wheel_apps_pane

0xd207,	// (0x0000d207) main_apps_wheel_pane_g1_ParamLimits

0xd207,	// (0x0000d207) main_apps_wheel_pane_g1

0xd213,	// (0x0000d213) main_apps_wheel_pane_g2_ParamLimits

0xd213,	// (0x0000d213) main_apps_wheel_pane_g2

0x0001,

0xf265,	// (0x0000f265) main_apps_wheel_pane_g_ParamLimits

0xf265,	// (0x0000f265) main_apps_wheel_pane_g

0xd221,	// (0x0000d221) main_apps_wheel_pane_t1_ParamLimits

0xd221,	// (0x0000d221) main_apps_wheel_pane_t1

0xd235,	// (0x0000d235) list_wheel_apps_pane_g1

0xd23d,	// (0x0000d23d) list_wheel_apps_pane_g2

0xd245,	// (0x0000d245) list_wheel_apps_pane_g3

0xd24d,	// (0x0000d24d) list_wheel_apps_pane_g4

0xd257,	// (0x0000d257) list_wheel_apps_pane_g5

0x0004,

0xf26a,	// (0x0000f26a) list_wheel_apps_pane_g

0x241f,	// (0x0000241f) navi_icon_text_pane

0xc615,	// (0x0000c615) aid_fill_nsta

0xd26e,	// (0x0000d26e) navi_icon_text_pane_g1

0xd27a,	// (0x0000d27a) navi_icon_text_pane_t1

0xbd2c,	// (0x0000bd2c) list_set_graphic_pane_t1_ParamLimits

0xbd2c,	// (0x0000bd2c) list_set_graphic_pane_t1

0x438a,	// (0x0000438a) popup_midp_note_alarm_window_t6_ParamLimits

0x438a,	// (0x0000438a) popup_midp_note_alarm_window_t6

0x439c,	// (0x0000439c) popup_midp_note_alarm_window_t7_ParamLimits

0x439c,	// (0x0000439c) popup_midp_note_alarm_window_t7

0x43ae,	// (0x000043ae) popup_midp_note_alarm_window_t8_ParamLimits

0x43ae,	// (0x000043ae) popup_midp_note_alarm_window_t8

0x43c0,	// (0x000043c0) popup_midp_note_alarm_window_t9_ParamLimits

0x43c0,	// (0x000043c0) popup_midp_note_alarm_window_t9

0x43d2,	// (0x000043d2) popup_midp_note_alarm_window_t10_ParamLimits

0x43d2,	// (0x000043d2) popup_midp_note_alarm_window_t10

0x43e4,	// (0x000043e4) popup_midp_note_alarm_window_t11_ParamLimits

0x43e4,	// (0x000043e4) popup_midp_note_alarm_window_t11

0x43f6,	// (0x000043f6) scroll_pane_cp17_ParamLimits

0x43f6,	// (0x000043f6) scroll_pane_cp17

0x44aa,	// (0x000044aa) volume_small_pane_cp_g1

0x5f4a,	// (0x00005f4a) volume_small_pane_cp_g2

0x5f53,	// (0x00005f53) volume_small_pane_cp_g3

0x5f5c,	// (0x00005f5c) volume_small_pane_cp_g4

0x5f65,	// (0x00005f65) volume_small_pane_cp_g5

0x5f6e,	// (0x00005f6e) volume_small_pane_cp_g6

0x5f77,	// (0x00005f77) volume_small_pane_cp_g7

0x5f80,	// (0x00005f80) volume_small_pane_cp_g8

0x5f89,	// (0x00005f89) volume_small_pane_cp_g9

0x5f92,	// (0x00005f92) volume_small_pane_cp_g10

0x267a,	// (0x0000267a) midp_ticker_pane_g1_ParamLimits

0x2686,	// (0x00002686) midp_ticker_pane_g2_ParamLimits

0xa82f,	// (0x0000a82f) midp_ticker_pane_g_ParamLimits

0xbdec,	// (0x0000bdec) midp_ticker_pane_t1_ParamLimits

0xc635,	// (0x0000c635) aid_fill_nsta_2

0x3c58,	// (0x00003c58) list_form2_midp_pane

0x4ff2,	// (0x00004ff2) midp_editing_number_pane_ParamLimits

0x5001,	// (0x00005001) midp_ticker_pane_ParamLimits

0x5f9b,	// (0x00005f9b) form2_midp_field_pane

0x5fbf,	// (0x00005fbf) scroll_pane_cp51

0x5fdf,	// (0x00005fdf) form2_midp_button_pane_ParamLimits

0x5fdf,	// (0x00005fdf) form2_midp_button_pane

0x5ff1,	// (0x00005ff1) form2_midp_content_pane_ParamLimits

0x5ff1,	// (0x00005ff1) form2_midp_content_pane

0x600b,	// (0x0000600b) form2_midp_field_choice_group_pane

0x6013,	// (0x00006013) form2_midp_field_pane_g1

0x601b,	// (0x0000601b) form2_midp_field_pane_g2

0x6023,	// (0x00006023) form2_midp_field_pane_g3

0x602b,	// (0x0000602b) form2_midp_field_pane_g4

0x0003,

0xab9a,	// (0x0000ab9a) form2_midp_field_pane_g

0x6033,	// (0x00006033) form2_midp_gauge_slider_pane

0x603b,	// (0x0000603b) form2_midp_gauge_wait_pane

0x6043,	// (0x00006043) form2_midp_image_pane_ParamLimits

0x6043,	// (0x00006043) form2_midp_image_pane

0x605e,	// (0x0000605e) form2_midp_label_pane_ParamLimits

0x605e,	// (0x0000605e) form2_midp_label_pane

0xd2a8,	// (0x0000d2a8) form2_midp_label_pane_cp_ParamLimits

0xd2a8,	// (0x0000d2a8) form2_midp_label_pane_cp

0x6098,	// (0x00006098) form2_midp_string_pane_ParamLimits

0x6098,	// (0x00006098) form2_midp_string_pane

0xd2c9,	// (0x0000d2c9) form2_midp_text_pane_ParamLimits

0xd2c9,	// (0x0000d2c9) form2_midp_text_pane

0x60c7,	// (0x000060c7) form2_midp_time_pane

0x60d7,	// (0x000060d7) input_focus_pane_cp51_ParamLimits

0x60d7,	// (0x000060d7) input_focus_pane_cp51

0x60ef,	// (0x000060ef) form2_midp_label_pane_t1_ParamLimits

0x60ef,	// (0x000060ef) form2_midp_label_pane_t1

0xd2e6,	// (0x0000d2e6) form2_mdip_text_pane_t1_ParamLimits

0xd2e6,	// (0x0000d2e6) form2_mdip_text_pane_t1

0x614f,	// (0x0000614f) form2_midp_time_pane_t1

0x616a,	// (0x0000616a) form2_midp_gauge_slider_pane_t1

0xd302,	// (0x0000d302) form2_midp_gauge_slider_pane_t2

0xd314,	// (0x0000d314) form2_midp_gauge_slider_pane_t3

0x0002,

0xf27a,	// (0x0000f27a) form2_midp_gauge_slider_pane_t

0x61a0,	// (0x000061a0) form2_midp_slider_pane

0x61ac,	// (0x000061ac) form2_midp_gauge_wait_pane_t1

0x61ba,	// (0x000061ba) form2_midp_wait_pane_ParamLimits

0x61ba,	// (0x000061ba) form2_midp_wait_pane

0xd326,	// (0x0000d326) list_single_2graphic_pane_cp4_ParamLimits

0xd326,	// (0x0000d326) list_single_2graphic_pane_cp4

0xcab8,	// (0x0000cab8) list_single_midp_graphic_pane_cp_ParamLimits

0xcab8,	// (0x0000cab8) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6214,	// (0x00006214) list_single_2graphic_pane_g1_cp4

0x621c,	// (0x0000621c) list_single_2graphic_pane_g2_cp4

0x6224,	// (0x00006224) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x6233,	// (0x00006233) list_single_midp_graphic_pane_g4_cp

0x6242,	// (0x00006242) list_single_midp_graphic_pane_t1_cp

0xd33b,	// (0x0000d33b) form2_mdip_string_pane_t1_ParamLimits

0xd33b,	// (0x0000d33b) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0xbd44,	// (0x0000bd44) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc371,	// (0x0000c371) popup_preview_window_ParamLimits

0xc371,	// (0x0000c371) popup_preview_window

0x3082,	// (0x00003082) popup_touch_info_window_ParamLimits

0x3082,	// (0x00003082) popup_touch_info_window

0x30a0,	// (0x000030a0) popup_touch_menu_window_ParamLimits

0x30a0,	// (0x000030a0) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6350,	// (0x00006350) list_touch_menu_pane

0x6358,	// (0x00006358) list_single_touch_menu_pane_ParamLimits

0x6358,	// (0x00006358) list_single_touch_menu_pane

0x636f,	// (0x0000636f) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x637d,	// (0x0000637d) heading_sub_pane

0x6385,	// (0x00006385) list_touch_info_pane_ParamLimits

0x6385,	// (0x00006385) list_touch_info_pane

0x6394,	// (0x00006394) list_single_touch_info_pane_ParamLimits

0x6394,	// (0x00006394) list_single_touch_info_pane

0x63a6,	// (0x000063a6) list_single_touch_info_pane_t1

0x63b4,	// (0x000063b4) list_single_touch_info_pane_t2

0x0001,

0xabb1,	// (0x0000abb1) list_single_touch_info_pane_t

0x259f,	// (0x0000259f) bg_popup_heading_pane_cp

0x63c2,	// (0x000063c2) heading_sub_pane_t1

0x37fc,	// (0x000037fc) bg_popup_preview_window_pane_cp_ParamLimits

0x37fc,	// (0x000037fc) bg_popup_preview_window_pane_cp

0x637d,	// (0x0000637d) heading_preview_pane

0x6385,	// (0x00006385) list_preview_pane_ParamLimits

0x6385,	// (0x00006385) list_preview_pane

0x63d0,	// (0x000063d0) popup_preview_window_g1

0x6394,	// (0x00006394) list_single_preview_pane_ParamLimits

0x6394,	// (0x00006394) list_single_preview_pane

0x63d8,	// (0x000063d8) list_single_preview_pane_g1

0x63e0,	// (0x000063e0) list_single_preview_pane_t1

0x63a6,	// (0x000063a6) list_single_preview_pane_t2

0x0001,

0xabb6,	// (0x0000abb6) list_single_preview_pane_t

0x63ee,	// (0x000063ee) bg_popup_heading_pane_cp2_ParamLimits

0x63ee,	// (0x000063ee) bg_popup_heading_pane_cp2

0x6404,	// (0x00006404) heading_preview_pane_g1

0x640c,	// (0x0000640c) heading_preview_pane_t1_ParamLimits

0x640c,	// (0x0000640c) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b4d,	// (0x00001b4d) scroll_sc2_left_pane

0x1b56,	// (0x00001b56) scroll_sc2_right_pane

0x1b75,	// (0x00001b75) scroll_bg_pane_g1_ParamLimits

0x1b8a,	// (0x00001b8a) scroll_bg_pane_g2_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_bg_pane_g3_ParamLimits

0xa7be,	// (0x0000a7be) scroll_bg_pane_g_ParamLimits

0x1b75,	// (0x00001b75) scroll_handle_pane_g1_ParamLimits

0x1bc4,	// (0x00001bc4) scroll_handle_pane_g2_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g3_ParamLimits

0xa7c5,	// (0x0000a7c5) scroll_handle_pane_g_ParamLimits

0x2b4e,	// (0x00002b4e) popup_choice_list_window_ParamLimits

0x2b4e,	// (0x00002b4e) popup_choice_list_window

0x3572,	// (0x00003572) choice_list_pane

0x363a,	// (0x0000363a) cell_toolbar_pane_t1

0x3662,	// (0x00003662) toolbar_button_pane_ParamLimits

0x4a1a,	// (0x00004a1a) ai_gene_pane_1_t2_ParamLimits

0x4a1a,	// (0x00004a1a) ai_gene_pane_1_t2

0x0001,

0xa9db,	// (0x0000a9db) ai_gene_pane_1_t_ParamLimits

0xa9db,	// (0x0000a9db) ai_gene_pane_1_t

0x6429,	// (0x00006429) scroll_sc2_left_pane_g1

0x6429,	// (0x00006429) scroll_sc2_right_pane_g1

0x2b1e,	// (0x00002b1e) bg_popup_sub_pane_cp10

0x6433,	// (0x00006433) list_choice_list_pane

0x644a,	// (0x0000644a) list_single_choice_list_pane_ParamLimits

0x644a,	// (0x0000644a) list_single_choice_list_pane

0x645e,	// (0x0000645e) list_single_choice_list_pane_g1

0x6466,	// (0x00006466) list_single_choice_list_pane_t1_ParamLimits

0x6466,	// (0x00006466) list_single_choice_list_pane_t1

0x647b,	// (0x0000647b) choice_list_pane_g1

0x6483,	// (0x00006483) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b7,	// (0x000018b7) title_pane_stacon_g2_ParamLimits

0x18b7,	// (0x000018b7) title_pane_stacon_g2

0x0002,

0xa7a4,	// (0x0000a7a4) title_pane_stacon_g_ParamLimits

0xa7a4,	// (0x0000a7a4) title_pane_stacon_g

0x259f,	// (0x0000259f) cursor_press_pane

0xc03c,	// (0x0000c03c) popup_fep_hwr_window_ParamLimits

0xc03c,	// (0x0000c03c) popup_fep_hwr_window

0x2c70,	// (0x00002c70) popup_fep_vkb_window_ParamLimits

0x2c70,	// (0x00002c70) popup_fep_vkb_window

0x6491,	// (0x00006491) cursor_press_pane_g1

0x0002,

0xf28e,	// (0x0000f28e) fep_vkb_side_pane_g_ParamLimits

0x64d2,	// (0x000064d2) fep_hwr_candidate_pane_ParamLimits

0x64d2,	// (0x000064d2) fep_hwr_candidate_pane

0x64fc,	// (0x000064fc) fep_hwr_side_pane_ParamLimits

0x64fc,	// (0x000064fc) fep_hwr_side_pane

0x651c,	// (0x0000651c) fep_hwr_top_pane_ParamLimits

0x651c,	// (0x0000651c) fep_hwr_top_pane

0x6534,	// (0x00006534) fep_hwr_write_pane_ParamLimits

0x6534,	// (0x00006534) fep_hwr_write_pane

0xf28e,	// (0x0000f28e) fep_vkb_side_pane_g

0x656e,	// (0x0000656e) fep_hwr_top_pane_g1

0x6580,	// (0x00006580) fep_hwr_top_pane_g2

0x6592,	// (0x00006592) fep_hwr_top_pane_g3

0x0002,

0xabbb,	// (0x0000abbb) fep_hwr_top_pane_g

0x65a7,	// (0x000065a7) fep_hwr_top_text_pane

0x1d1b,	// (0x00001d1b) fep_hwr_top_text_pane_g1

0x667f,	// (0x0000667f) fep_hwr_top_text_pane_t1

0x66cf,	// (0x000066cf) fep_hwr_candidate_pane_g1

0x6948,	// (0x00006948) fep_vkb_keypad_pane_g3_ParamLimits

0x6948,	// (0x00006948) fep_vkb_keypad_pane_g3

0x6970,	// (0x00006970) fep_vkb_keypad_pane_g4_ParamLimits

0x6970,	// (0x00006970) fep_vkb_keypad_pane_g4

0x69df,	// (0x000069df) fep_vkb_bottom_pane_g2_ParamLimits

0x69df,	// (0x000069df) fep_vkb_bottom_pane_g2

0x0001,

0xabe6,	// (0x0000abe6) fep_vkb_bottom_pane_g_ParamLimits

0xabe6,	// (0x0000abe6) fep_vkb_bottom_pane_g

0x6429,	// (0x00006429) cell_vkb_side_pane_g2

0x0001,

0xabf0,	// (0x0000abf0) cell_vkb_side_pane_g

0x6a6a,	// (0x00006a6a) cell_vkb_side_pane_t1

0x6a78,	// (0x00006a78) cell_vkb_side_pane_t1_copy1

0x6429,	// (0x00006429) bg_fep_vkb_candidate_pane_g2

0x6ba4,	// (0x00006ba4) cell_vkb_candidate_pane_ParamLimits

0x6703,	// (0x00006703) aid_size_cell_vkb_ParamLimits

0x6703,	// (0x00006703) aid_size_cell_vkb

0x6ba4,	// (0x00006ba4) cell_vkb_candidate_pane

0x6bd8,	// (0x00006bd8) bg_popup_fep_shadow_pane_g1

0xd416,	// (0x0000d416) fep_vkb_bottom_pane_ParamLimits

0xd416,	// (0x0000d416) fep_vkb_bottom_pane

0x67c7,	// (0x000067c7) fep_vkb_candidate_pane_ParamLimits

0x67c7,	// (0x000067c7) fep_vkb_candidate_pane

0xd43b,	// (0x0000d43b) fep_vkb_keypad_pane_ParamLimits

0xd43b,	// (0x0000d43b) fep_vkb_keypad_pane

0xd477,	// (0x0000d477) fep_vkb_side_pane_ParamLimits

0xd477,	// (0x0000d477) fep_vkb_side_pane

0xd4b3,	// (0x0000d4b3) fep_vkb_top_pane_ParamLimits

0xd4b3,	// (0x0000d4b3) fep_vkb_top_pane

0x68a1,	// (0x000068a1) fep_vkb_top_pane_g1_ParamLimits

0x68a1,	// (0x000068a1) fep_vkb_top_pane_g1

0x68b0,	// (0x000068b0) fep_vkb_top_pane_g2_ParamLimits

0x68b0,	// (0x000068b0) fep_vkb_top_pane_g2

0x68bf,	// (0x000068bf) fep_vkb_top_pane_g3_ParamLimits

0x68bf,	// (0x000068bf) fep_vkb_top_pane_g3

0x0003,

0xabd6,	// (0x0000abd6) fep_vkb_top_pane_g_ParamLimits

0xabd6,	// (0x0000abd6) fep_vkb_top_pane_g

0x68dd,	// (0x000068dd) fep_vkb_top_text_pane_ParamLimits

0x68dd,	// (0x000068dd) fep_vkb_top_text_pane

0xd4ef,	// (0x0000d4ef) fep_vkb_side_pane_g1_ParamLimits

0xd4ef,	// (0x0000d4ef) fep_vkb_side_pane_g1

0x6937,	// (0x00006937) grid_vkb_side_pane_ParamLimits

0x6937,	// (0x00006937) grid_vkb_side_pane

0x6be0,	// (0x00006be0) bg_popup_fep_shadow_pane_g2

0x6be9,	// (0x00006be9) bg_popup_fep_shadow_pane_g3

0x6bf1,	// (0x00006bf1) bg_popup_fep_shadow_pane_g4

0x6bfa,	// (0x00006bfa) bg_popup_fep_shadow_pane_g5

0x6c04,	// (0x00006c04) bg_popup_fep_shadow_pane_g6

0x6c0c,	// (0x00006c0c) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x698e,	// (0x0000698e) grid_vkb_keypad_number_pane_ParamLimits

0x698e,	// (0x0000698e) grid_vkb_keypad_number_pane

0x699e,	// (0x0000699e) grid_vkb_keypad_pane_ParamLimits

0x699e,	// (0x0000699e) grid_vkb_keypad_pane

0x69c4,	// (0x000069c4) fep_vkb_bottom_pane_g1_ParamLimits

0x69c4,	// (0x000069c4) fep_vkb_bottom_pane_g1

0x69ed,	// (0x000069ed) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x69ed,	// (0x000069ed) grid_vkb_keypad_bottom_left_pane

0x6a02,	// (0x00006a02) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a02,	// (0x00006a02) grid_vkb_keypad_bottom_right_pane

0x6a17,	// (0x00006a17) fep_vkb_top_text_pane_g1

0xd536,	// (0x0000d536) fep_vkb_top_text_pane_t1

0xd548,	// (0x0000d548) cell_vkb_side_pane_ParamLimits

0xd548,	// (0x0000d548) cell_vkb_side_pane

0x6429,	// (0x00006429) cell_vkb_side_pane_g1

0x6a86,	// (0x00006a86) cell_vkb_keypad_pane_ParamLimits

0x6a86,	// (0x00006a86) cell_vkb_keypad_pane

0x6afb,	// (0x00006afb) cell_vkb_keypad_pane_g1

0x0008,

0xac03,	// (0x0000ac03) bg_popup_fep_shadow_pane_g

0x6429,	// (0x00006429) cell_hwr_side_pane_g1

0x6429,	// (0x00006429) cell_hwr_side_pane_g2

0x6b05,	// (0x00006b05) cell_vkb_keypad_pane_t1

0xd55e,	// (0x0000d55e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd55e,	// (0x0000d55e) cell_vkb_keypad_bottom_left_pane

0xd573,	// (0x0000d573) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd573,	// (0x0000d573) cell_vkb_keypad_bottom_right_pane

0x6429,	// (0x00006429) cell_vkb_keypad_bottom_left_pane_g1

0x6429,	// (0x00006429) cell_vkb_keypad_bottom_right_pane_g1

0x6b69,	// (0x00006b69) cell_vkb_keypad_number_pane_ParamLimits

0x6b69,	// (0x00006b69) cell_vkb_keypad_number_pane

0x6b88,	// (0x00006b88) cell_vkb_keypad_number_pane_g1

0x6b92,	// (0x00006b92) cell_vkb_keypad_number_pane_g2

0x6b9b,	// (0x00006b9b) cell_vkb_keypad_number_pane_g3

0x0002,

0xabf5,	// (0x0000abf5) cell_vkb_keypad_number_pane_g

0x6b05,	// (0x00006b05) cell_vkb_keypad_number_pane_t1

0x6bbf,	// (0x00006bbf) fep_vkb_candidate_pane_g1

0x0001,

0xabf0,	// (0x0000abf0) cell_hwr_side_pane_g

0x6c1e,	// (0x00006c1e) cell_hwr_side_pane_t1

0x6c2c,	// (0x00006c2c) cell_hwr_side_pane_t1_copy1

0x68cf,	// (0x000068cf) cell_hwr_candidate_pane_g1

0x6c7c,	// (0x00006c7c) cell_hwr_candidate_pane_t1

0x6429,	// (0x00006429) cell_vkb_candidate_pane_g2

0x6cd0,	// (0x00006cd0) cell_vkb_candidate_pane_t1

0x6499,	// (0x00006499) bg_popup_fep_shadow_pane_ParamLimits

0x6499,	// (0x00006499) bg_popup_fep_shadow_pane

0x654e,	// (0x0000654e) bg_fep_hwr_top_pane_g4

0x65bc,	// (0x000065bc) bg_hwr_side_pane_g1_ParamLimits

0x65bc,	// (0x000065bc) bg_hwr_side_pane_g1

0xd3cf,	// (0x0000d3cf) cell_hwr_side_pane_ParamLimits

0xd3cf,	// (0x0000d3cf) cell_hwr_side_pane

0x662a,	// (0x0000662a) fep_hwr_write_pane_g1_ParamLimits

0x662a,	// (0x0000662a) fep_hwr_write_pane_g1

0x6637,	// (0x00006637) fep_hwr_write_pane_g2_ParamLimits

0x6637,	// (0x00006637) fep_hwr_write_pane_g2

0x6644,	// (0x00006644) fep_hwr_write_pane_g3_ParamLimits

0x6644,	// (0x00006644) fep_hwr_write_pane_g3

0xd3ef,	// (0x0000d3ef) fep_hwr_write_pane_g4_ParamLimits

0xd3ef,	// (0x0000d3ef) fep_hwr_write_pane_g4

0x0005,

0xf281,	// (0x0000f281) fep_hwr_write_pane_g_ParamLimits

0xf281,	// (0x0000f281) fep_hwr_write_pane_g

0x654e,	// (0x0000654e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x654e,	// (0x0000654e) bg_fep_hwr_candidate_pane_g2

0x668d,	// (0x0000668d) cell_hwr_candidate_pane_ParamLimits

0x668d,	// (0x0000668d) cell_hwr_candidate_pane

0x66cf,	// (0x000066cf) fep_hwr_candidate_pane_g1_ParamLimits

0x6731,	// (0x00006731) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6731,	// (0x00006731) bg_popup_fep_shadow_pane_cp2

0x68cf,	// (0x000068cf) fep_vkb_top_pane_g4_ParamLimits

0x68cf,	// (0x000068cf) fep_vkb_top_pane_g4

0x6915,	// (0x00006915) fep_vkb_side_pane_g2_ParamLimits

0x6915,	// (0x00006915) fep_vkb_side_pane_g2

0xb844,	// (0x0000b844) list_setting_pane_t4_ParamLimits

0xb844,	// (0x0000b844) list_setting_pane_t4

0xb8be,	// (0x0000b8be) list_setting_number_pane_t5_ParamLimits

0xb8be,	// (0x0000b8be) list_setting_number_pane_t5

0xbbd1,	// (0x0000bbd1) list_double_heading_pane_cp2_ParamLimits

0xbbd1,	// (0x0000bbd1) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6cde,	// (0x00006cde) list_double_heading_pane_t1_cp2_ParamLimits

0x6cde,	// (0x00006cde) list_double_heading_pane_t1_cp2

0x6cf4,	// (0x00006cf4) list_double_heading_pane_t2_cp2_ParamLimits

0x6cf4,	// (0x00006cf4) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6d06,	// (0x00006d06) list_preview_fixed_pane

0x6d4c,	// (0x00006d4c) list_empty_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_empty_pane_fp

0x6d4c,	// (0x00006d4c) list_single_cale_day_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_cale_day_pane_fp

0x6d4c,	// (0x00006d4c) list_single_graphic_heading_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_graphic_heading_pane_fp

0x6d4c,	// (0x00006d4c) list_single_graphic_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_graphic_pane_fp

0x6d4c,	// (0x00006d4c) list_single_heading_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_heading_pane_fp

0x6d4c,	// (0x00006d4c) list_single_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_pane_fp

0x6d61,	// (0x00006d61) list_single_pane_fp_g1_ParamLimits

0x6d61,	// (0x00006d61) list_single_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2

0x6d6d,	// (0x00006d6d) list_single_pane_fp_g3_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_pane_fp_g3

0x6d81,	// (0x00006d81) list_single_pane_fp_g4_ParamLimits

0x6d81,	// (0x00006d81) list_single_pane_fp_g4

0x0003,

0xac24,	// (0x0000ac24) list_single_pane_fp_g_ParamLimits

0xac24,	// (0x0000ac24) list_single_pane_fp_g

0x6d8d,	// (0x00006d8d) list_single_pane_fp_t1_ParamLimits

0x6d8d,	// (0x00006d8d) list_single_pane_fp_t1

0x6da4,	// (0x00006da4) list_single_graphic_pane_fp_g1_ParamLimits

0x6da4,	// (0x00006da4) list_single_graphic_pane_fp_g1

0x6d61,	// (0x00006d61) list_single_graphic_pane_fp_g2_ParamLimits

0x6d61,	// (0x00006d61) list_single_graphic_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3

0x6d6d,	// (0x00006d6d) list_single_graphic_pane_fp_g4_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_graphic_pane_fp_g4

0x6d81,	// (0x00006d81) list_single_graphic_pane_fp_g5_ParamLimits

0x6d81,	// (0x00006d81) list_single_graphic_pane_fp_g5

0x0004,

0xac2d,	// (0x0000ac2d) list_single_graphic_pane_fp_g_ParamLimits

0xac2d,	// (0x0000ac2d) list_single_graphic_pane_fp_g

0x6db0,	// (0x00006db0) list_single_graphic_pane_fp_t1_ParamLimits

0x6db0,	// (0x00006db0) list_single_graphic_pane_fp_t1

0x6da4,	// (0x00006da4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6da4,	// (0x00006da4) list_single_graphic_heading_pane_fp_g1

0x6d61,	// (0x00006d61) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6d61,	// (0x00006d61) list_single_graphic_heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3

0x6d6d,	// (0x00006d6d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_graphic_heading_pane_fp_g4

0x6d81,	// (0x00006d81) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6d81,	// (0x00006d81) list_single_graphic_heading_pane_fp_g5

0x0004,

0xac2d,	// (0x0000ac2d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xac2d,	// (0x0000ac2d) list_single_graphic_heading_pane_fp_g

0x6dc6,	// (0x00006dc6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6dc6,	// (0x00006dc6) list_single_graphic_heading_pane_fp_t1

0x6ddc,	// (0x00006ddc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6ddc,	// (0x00006ddc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xac38,	// (0x0000ac38) list_single_graphic_heading_pane_fp_t_ParamLimits

0xac38,	// (0x0000ac38) list_single_graphic_heading_pane_fp_t

0x6dee,	// (0x00006dee) list_single_cale_day_pane_fp_g1_ParamLimits

0x6dee,	// (0x00006dee) list_single_cale_day_pane_fp_g1

0x6e26,	// (0x00006e26) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e26,	// (0x00006e26) list_single_cale_day_pane_fp_g2

0x6e32,	// (0x00006e32) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e32,	// (0x00006e32) list_single_cale_day_pane_fp_g3

0x6e5a,	// (0x00006e5a) list_single_cale_day_pane_fp_g4_ParamLimits

0x6e5a,	// (0x00006e5a) list_single_cale_day_pane_fp_g4

0x6e7e,	// (0x00006e7e) list_single_cale_day_pane_fp_g5_ParamLimits

0x6e7e,	// (0x00006e7e) list_single_cale_day_pane_fp_g5

0x0004,

0xac3d,	// (0x0000ac3d) list_single_cale_day_pane_fp_g_ParamLimits

0xac3d,	// (0x0000ac3d) list_single_cale_day_pane_fp_g

0x6ea2,	// (0x00006ea2) list_single_cale_day_pane_fp_t1_ParamLimits

0x6ea2,	// (0x00006ea2) list_single_cale_day_pane_fp_t1

0x6ec8,	// (0x00006ec8) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_cale_day_pane_fp_t2

0x6ee1,	// (0x00006ee1) list_single_cale_day_pane_fp_t3_ParamLimits

0x6ee1,	// (0x00006ee1) list_single_cale_day_pane_fp_t3

0x0002,

0xac48,	// (0x0000ac48) list_single_cale_day_pane_fp_t_ParamLimits

0xac48,	// (0x0000ac48) list_single_cale_day_pane_fp_t

0x6d61,	// (0x00006d61) list_empty_pane_fp_g1_ParamLimits

0x6d61,	// (0x00006d61) list_empty_pane_fp_g1

0x6efa,	// (0x00006efa) list_empty_pane_fp_t1

0x6f08,	// (0x00006f08) list_empty_pane_fp_t2

0x0001,

0xac4f,	// (0x0000ac4f) list_empty_pane_fp_t

0x6d61,	// (0x00006d61) list_single_heading_pane_fp_g1_ParamLimits

0x6d61,	// (0x00006d61) list_single_heading_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2

0x6d6d,	// (0x00006d6d) list_single_heading_pane_fp_g3_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_heading_pane_fp_g3

0x0002,

0xac54,	// (0x0000ac54) list_single_heading_pane_fp_g_ParamLimits

0xac54,	// (0x0000ac54) list_single_heading_pane_fp_g

0x6f16,	// (0x00006f16) list_single_heading_pane_fp_t1_ParamLimits

0x6f16,	// (0x00006f16) list_single_heading_pane_fp_t1

0x6f28,	// (0x00006f28) list_single_heading_pane_fp_t2_ParamLimits

0x6f28,	// (0x00006f28) list_single_heading_pane_fp_t2

0x0001,

0xac5b,	// (0x0000ac5b) list_single_heading_pane_fp_t_ParamLimits

0xac5b,	// (0x0000ac5b) list_single_heading_pane_fp_t

0x16fe,	// (0x000016fe) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173b,	// (0x0000173b) cell_app_pane_cp2_ParamLimits

0x173b,	// (0x0000173b) cell_app_pane_cp2

0x64bb,	// (0x000064bb) fep_hwr_candidate_drop_down_list_pane

0x66e9,	// (0x000066e9) fep_hwr_candidate_pane_g3_ParamLimits

0x66e9,	// (0x000066e9) fep_hwr_candidate_pane_g3

0x66f6,	// (0x000066f6) fep_hwr_candidate_pane_g4_ParamLimits

0x66f6,	// (0x000066f6) fep_hwr_candidate_pane_g4

0x0002,

0xabcf,	// (0x0000abcf) fep_hwr_candidate_pane_g_ParamLimits

0xabcf,	// (0x0000abcf) fep_hwr_candidate_pane_g

0x67b6,	// (0x000067b6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x67b6,	// (0x000067b6) fep_vkb_candidate_drop_down_list_pane

0x6bc7,	// (0x00006bc7) fep_vkb_candidate_pane_g3

0x6bcf,	// (0x00006bcf) fep_vkb_candidate_pane_g4

0x0002,

0xabfc,	// (0x0000abfc) fep_vkb_candidate_pane_g

0x68cf,	// (0x000068cf) cell_hwr_candidate_pane_g1_ParamLimits

0x6c3a,	// (0x00006c3a) cell_hwr_candidate_pane_g3_ParamLimits

0x6c3a,	// (0x00006c3a) cell_hwr_candidate_pane_g3

0x6c5b,	// (0x00006c5b) cell_hwr_candidate_pane_g4_ParamLimits

0x6c5b,	// (0x00006c5b) cell_hwr_candidate_pane_g4

0x0002,

0xac16,	// (0x0000ac16) cell_hwr_candidate_pane_g_ParamLimits

0xac16,	// (0x0000ac16) cell_hwr_candidate_pane_g

0x6c9a,	// (0x00006c9a) cell_vkb_candidate_pane_g3_ParamLimits

0x6c9a,	// (0x00006c9a) cell_vkb_candidate_pane_g3

0x6cb5,	// (0x00006cb5) cell_vkb_candidate_pane_g4_ParamLimits

0x6cb5,	// (0x00006cb5) cell_vkb_candidate_pane_g4

0x6f3e,	// (0x00006f3e) cell_app_pane_cp2_g1_ParamLimits

0x6f3e,	// (0x00006f3e) cell_app_pane_cp2_g1

0x6f5c,	// (0x00006f5c) cell_app_pane_cp2_g2_ParamLimits

0x6f5c,	// (0x00006f5c) cell_app_pane_cp2_g2

0x0001,

0xac60,	// (0x0000ac60) cell_app_pane_cp2_g_ParamLimits

0xac60,	// (0x0000ac60) cell_app_pane_cp2_g

0x6f68,	// (0x00006f68) cell_app_pane_cp2_t1_ParamLimits

0x6f68,	// (0x00006f68) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x6f7a,	// (0x00006f7a) cell_hwr_candidate_pane_cp1_ParamLimits

0x6f7a,	// (0x00006f7a) cell_hwr_candidate_pane_cp1

0x68cf,	// (0x000068cf) fep_hwr_candidate_drop_down_list_pane_g1

0x6f99,	// (0x00006f99) fep_hwr_candidate_drop_down_list_pane_g2

0x6fa6,	// (0x00006fa6) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xac65,	// (0x0000ac65) fep_hwr_candidate_drop_down_list_pane_g

0x6fb3,	// (0x00006fb3) fep_hwr_candidate_drop_down_list_scroll_pane

0x6fbc,	// (0x00006fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6fbc,	// (0x00006fbc) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6fc9,	// (0x00006fc9) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6fc9,	// (0x00006fc9) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6fd6,	// (0x00006fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6fd6,	// (0x00006fd6) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6c9a,	// (0x00006c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c9a,	// (0x00006c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cb5,	// (0x00006cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cb5,	// (0x00006cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6fe3,	// (0x00006fe3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6fe3,	// (0x00006fe3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6ffe,	// (0x00006ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6ffe,	// (0x00006ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7019,	// (0x00007019) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7019,	// (0x00007019) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xac6c,	// (0x0000ac6c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xac6c,	// (0x0000ac6c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7034,	// (0x00007034) cell_vkb_candidate_pane_cp1_ParamLimits

0x7034,	// (0x00007034) cell_vkb_candidate_pane_cp1

0x68cf,	// (0x000068cf) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x68cf,	// (0x000068cf) fep_vkb_candidate_drop_down_list_pane_g1

0x6f99,	// (0x00006f99) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6f99,	// (0x00006f99) fep_vkb_candidate_drop_down_list_pane_g2

0x6fa6,	// (0x00006fa6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6fa6,	// (0x00006fa6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xac65,	// (0x0000ac65) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xac65,	// (0x0000ac65) fep_vkb_candidate_drop_down_list_pane_g

0x7054,	// (0x00007054) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7054,	// (0x00007054) fep_vkb_candidate_drop_down_list_scroll_pane

0x7061,	// (0x00007061) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7061,	// (0x00007061) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x706e,	// (0x0000706e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x706e,	// (0x0000706e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x707a,	// (0x0000707a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x707a,	// (0x0000707a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6c3a,	// (0x00006c3a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c3a,	// (0x00006c3a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6c5b,	// (0x00006c5b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c5b,	// (0x00006c5b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7086,	// (0x00007086) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7086,	// (0x00007086) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x70a7,	// (0x000070a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70a7,	// (0x000070a7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x70c8,	// (0x000070c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x70c8,	// (0x000070c8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xac7d,	// (0x0000ac7d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xac7d,	// (0x0000ac7d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb156,	// (0x0000b156) title_pane_g1_ParamLimits

0xb167,	// (0x0000b167) title_pane_g2_ParamLimits

0xf0b5,	// (0x0000f0b5) title_pane_g_ParamLimits

0x1d0b,	// (0x00001d0b) aid_call2_pane

0x1d13,	// (0x00001d13) aid_call_pane

0x1d1b,	// (0x00001d1b) popup_clock_analogue_window_g1

0x1d1b,	// (0x00001d1b) popup_clock_analogue_window_g2

0x1d23,	// (0x00001d23) popup_clock_analogue_window_g3

0x1d2c,	// (0x00001d2c) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa7d3,	// (0x0000a7d3) popup_clock_analogue_window_g

0x1d34,	// (0x00001d34) popup_clock_analogue_window_t1

0x1dba,	// (0x00001dba) clock_digital_number_pane_ParamLimits

0x1dba,	// (0x00001dba) clock_digital_number_pane

0x1dc6,	// (0x00001dc6) clock_digital_number_pane_cp02_ParamLimits

0x1dc6,	// (0x00001dc6) clock_digital_number_pane_cp02

0x1dd2,	// (0x00001dd2) clock_digital_number_pane_cp03_ParamLimits

0x1dd2,	// (0x00001dd2) clock_digital_number_pane_cp03

0x1dde,	// (0x00001dde) clock_digital_number_pane_cp04_ParamLimits

0x1dde,	// (0x00001dde) clock_digital_number_pane_cp04

0x1dea,	// (0x00001dea) clock_digital_separator_pane_ParamLimits

0x1dea,	// (0x00001dea) clock_digital_separator_pane

0x1df6,	// (0x00001df6) popup_clock_digital_window_t1_ParamLimits

0x1df6,	// (0x00001df6) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa7de,	// (0x0000a7de) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa7de,	// (0x0000a7de) clock_digital_separator_pane_g

0xc615,	// (0x0000c615) aid_fill_nsta_ParamLimits

0xc744,	// (0x0000c744) indicator_nsta_pane_ParamLimits

0x3393,	// (0x00003393) popup_clock_analogue_window

0x3393,	// (0x00003393) popup_clock_digital_window

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane_ParamLimits

0x5d9a,	// (0x00005d9a) clock_nsta_pane_t2

0x0001,

0xab5c,	// (0x0000ab5c) clock_nsta_pane_t

0x1af2,	// (0x00001af2) aid_size_max_handle

0xbbc8,	// (0x0000bbc8) aid_size_min_handle

0x259f,	// (0x0000259f) editor_scroll_pane

0x70e3,	// (0x000070e3) ex_editor_pane

0x166c,	// (0x0000166c) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d64,	// (0x00001d64) scroll_pane_cp36

0xbbe0,	// (0x0000bbe0) list_single_graphic_hl_pane_cp2_ParamLimits

0xbbe0,	// (0x0000bbe0) list_single_graphic_hl_pane_cp2

0xd01b,	// (0x0000d01b) list_single_graphic_hl_pane_ParamLimits

0xd01b,	// (0x0000d01b) list_single_graphic_hl_pane

0x70eb,	// (0x000070eb) aid_size_min_hl_cp1

0x70f4,	// (0x000070f4) list_highlight_pane_cp34_ParamLimits

0x70f4,	// (0x000070f4) list_highlight_pane_cp34

0x7105,	// (0x00007105) list_single_graphic_hl_pane_g1_ParamLimits

0x7105,	// (0x00007105) list_single_graphic_hl_pane_g1

0xd58e,	// (0x0000d58e) list_single_graphic_hl_pane_g2_ParamLimits

0xd58e,	// (0x0000d58e) list_single_graphic_hl_pane_g2

0xd58e,	// (0x0000d58e) list_single_graphic_hl_pane_g3_ParamLimits

0xd58e,	// (0x0000d58e) list_single_graphic_hl_pane_g3

0x2510,	// (0x00002510) list_single_graphic_hl_pane_g4_ParamLimits

0x2510,	// (0x00002510) list_single_graphic_hl_pane_g4

0xd59a,	// (0x0000d59a) list_single_graphic_hl_pane_g5_ParamLimits

0xd59a,	// (0x0000d59a) list_single_graphic_hl_pane_g5

0x0004,

0xf29a,	// (0x0000f29a) list_single_graphic_hl_pane_g_ParamLimits

0xf29a,	// (0x0000f29a) list_single_graphic_hl_pane_g

0xd5ae,	// (0x0000d5ae) list_single_graphic_hl_pane_t1_ParamLimits

0xd5ae,	// (0x0000d5ae) list_single_graphic_hl_pane_t1

0x7148,	// (0x00007148) aid_size_min_hl_cp2

0x7151,	// (0x00007151) list_highlight_pane_cp34_cp2_ParamLimits

0x7151,	// (0x00007151) list_highlight_pane_cp34_cp2

0x7105,	// (0x00007105) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7105,	// (0x00007105) list_single_graphic_hl_pane_g1_cp2

0x715e,	// (0x0000715e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x715e,	// (0x0000715e) list_single_graphic_hl_pane_g2_cp2

0x716a,	// (0x0000716a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x716a,	// (0x0000716a) list_single_graphic_hl_pane_g3_cp2

0x3506,	// (0x00003506) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3506,	// (0x00003506) list_single_graphic_hl_pane_g4_cp2

0x711e,	// (0x0000711e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x711e,	// (0x0000711e) list_single_graphic_hl_pane_g5_cp2

0xbe31,	// (0x0000be31) control_pane_g4_ParamLimits

0xbe31,	// (0x0000be31) control_pane_g4

0x2b1e,	// (0x00002b1e) bg_popup_sub_pane_cp10_ParamLimits

0x6433,	// (0x00006433) list_choice_list_pane_ParamLimits

0x6442,	// (0x00006442) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d06,	// (0x00006d06) list_preview_fixed_pane_ParamLimits

0x6d1c,	// (0x00006d1c) list_preview_fixed_pane_cp_ParamLimits

0x6d1c,	// (0x00006d1c) list_preview_fixed_pane_cp

0x6d28,	// (0x00006d28) popup_preview_fixed_window_g1_ParamLimits

0x6d28,	// (0x00006d28) popup_preview_fixed_window_g1

0x6d34,	// (0x00006d34) popup_preview_fixed_window_g2_ParamLimits

0x6d34,	// (0x00006d34) popup_preview_fixed_window_g2

0x0002,

0xac1d,	// (0x0000ac1d) popup_preview_fixed_window_g_ParamLimits

0xac1d,	// (0x0000ac1d) popup_preview_fixed_window_g

0x199c,	// (0x0000199c) aid_navi_side_left_pane_ParamLimits

0x19b1,	// (0x000019b1) aid_navi_side_right_pane_ParamLimits

0x19c9,	// (0x000019c9) navi_icon_pane_stacon_ParamLimits

0x19dd,	// (0x000019dd) navi_navi_pane_stacon_ParamLimits

0x19c9,	// (0x000019c9) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x718e,	// (0x0000718e) listscroll_text_info_pane

0x7196,	// (0x00007196) list_text_info_pane_ParamLimits

0x7196,	// (0x00007196) list_text_info_pane

0x71a5,	// (0x000071a5) scroll_pane_cp24_ParamLimits

0x71a5,	// (0x000071a5) scroll_pane_cp24

0xd5c4,	// (0x0000d5c4) list_text_info_pane_t1_ParamLimits

0xd5c4,	// (0x0000d5c4) list_text_info_pane_t1

0xbfaf,	// (0x0000bfaf) popup_fast_swap2_window_ParamLimits

0xbfaf,	// (0x0000bfaf) popup_fast_swap2_window

0x71f4,	// (0x000071f4) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c84,	// (0x00003c84) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x71fe,	// (0x000071fe) grid_fast2_pane

0x7208,	// (0x00007208) listscroll_fast2_pane_g1

0x7210,	// (0x00007210) listscroll_fast2_pane_g2

0x0001,

0xac99,	// (0x0000ac99) listscroll_fast2_pane_g

0x166c,	// (0x0000166c) scroll_pane_cp26

0x721a,	// (0x0000721a) cell_fast2_pane_ParamLimits

0x721a,	// (0x0000721a) cell_fast2_pane

0x722f,	// (0x0000722f) cell_fast2_pane_g1

0x7238,	// (0x00007238) cell_fast2_pane_g2

0x7241,	// (0x00007241) cell_fast2_pane_g3

0x0002,

0xac9e,	// (0x0000ac9e) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x71ba,	// (0x000071ba) list_single_text_info_pane

0x7249,	// (0x00007249) eswt_ctrl_button_pane

0x7249,	// (0x00007249) eswt_ctrl_canvas_pane

0x7251,	// (0x00007251) eswt_ctrl_combo_pane

0x7249,	// (0x00007249) eswt_ctrl_default_pane

0x7249,	// (0x00007249) eswt_ctrl_label_pane

0x7259,	// (0x00007259) eswt_ctrl_wait_pane

0x7261,	// (0x00007261) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7281,	// (0x00007281) popup_eswt_tasktip_window_ParamLimits

0x7281,	// (0x00007281) popup_eswt_tasktip_window

0x37fc,	// (0x000037fc) bg_popup_window_pane_cp18

0x7292,	// (0x00007292) eswt_control_pane_g1_ParamLimits

0x7292,	// (0x00007292) eswt_control_pane_g1

0x729f,	// (0x0000729f) eswt_control_pane_g2_ParamLimits

0x729f,	// (0x0000729f) eswt_control_pane_g2

0x72ac,	// (0x000072ac) eswt_control_pane_g3_ParamLimits

0x72ac,	// (0x000072ac) eswt_control_pane_g3

0x72b9,	// (0x000072b9) eswt_control_pane_g4_ParamLimits

0x72b9,	// (0x000072b9) eswt_control_pane_g4

0x0003,

0xaca5,	// (0x0000aca5) eswt_control_pane_g_ParamLimits

0xaca5,	// (0x0000aca5) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x72c6,	// (0x000072c6) control_button_pane_g1_ParamLimits

0x72c6,	// (0x000072c6) control_button_pane_g1

0x72d2,	// (0x000072d2) control_button_pane_g2_ParamLimits

0x72d2,	// (0x000072d2) control_button_pane_g2

0x72de,	// (0x000072de) control_button_pane_g3_ParamLimits

0x72de,	// (0x000072de) control_button_pane_g3

0x0002,

0xacae,	// (0x0000acae) control_button_pane_g_ParamLimits

0xacae,	// (0x0000acae) control_button_pane_g

0x72f2,	// (0x000072f2) control_button_pane_t1

0x7300,	// (0x00007300) control_button_pane_t2

0x0001,

0xacb5,	// (0x0000acb5) control_button_pane_t

0x366e,	// (0x0000366e) bg_button_pane_g1

0x3676,	// (0x00003676) bg_button_pane_g2

0x367e,	// (0x0000367e) bg_button_pane_g3

0x3686,	// (0x00003686) bg_button_pane_g4

0x368e,	// (0x0000368e) bg_button_pane_g5

0x3696,	// (0x00003696) bg_button_pane_g6

0x369e,	// (0x0000369e) bg_button_pane_g7

0x36a6,	// (0x000036a6) bg_button_pane_g8

0x36ae,	// (0x000036ae) bg_button_pane_g9

0x0008,

0xa92f,	// (0x0000a92f) bg_button_pane_g

0x63ee,	// (0x000063ee) common_borders_pane_ParamLimits

0x63ee,	// (0x000063ee) common_borders_pane

0x7292,	// (0x00007292) eswt_control_pane_g1_copy1_ParamLimits

0x7292,	// (0x00007292) eswt_control_pane_g1_copy1

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy1_ParamLimits

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy1

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy1_ParamLimits

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy1

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy1_ParamLimits

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy1

0x6429,	// (0x00006429) bg_eswt_ctrl_canvas_pane_g1

0x63ee,	// (0x000063ee) common_borders_pane_cp2_ParamLimits

0x63ee,	// (0x000063ee) common_borders_pane_cp2

0x63ee,	// (0x000063ee) common_borders_pane_cp3_ParamLimits

0x63ee,	// (0x000063ee) common_borders_pane_cp3

0x730e,	// (0x0000730e) separator_horizontal_pane

0x7316,	// (0x00007316) separator_vertical_pane

0x7292,	// (0x00007292) eswt_control_pane_g1_copy2_ParamLimits

0x7292,	// (0x00007292) eswt_control_pane_g1_copy2

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy2_ParamLimits

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy2

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy2_ParamLimits

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy2

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy2_ParamLimits

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x731f,	// (0x0000731f) separator_horizontal_pane_g1

0x7328,	// (0x00007328) separator_horizontal_pane_g2

0x7331,	// (0x00007331) separator_horizontal_pane_g3

0x0002,

0xacba,	// (0x0000acba) separator_horizontal_pane_g

0x7292,	// (0x00007292) eswt_control_pane_g1_copy3_ParamLimits

0x7292,	// (0x00007292) eswt_control_pane_g1_copy3

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy3_ParamLimits

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy3

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy3_ParamLimits

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy3

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy3_ParamLimits

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x733a,	// (0x0000733a) separator_vertical_pane_g1

0x7343,	// (0x00007343) separator_vertical_pane_g2

0x734c,	// (0x0000734c) separator_vertical_pane_g3

0x0002,

0xacc1,	// (0x0000acc1) separator_vertical_pane_g

0x7292,	// (0x00007292) eswt_control_pane_g1_copy4_ParamLimits

0x7292,	// (0x00007292) eswt_control_pane_g1_copy4

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy4_ParamLimits

0x729f,	// (0x0000729f) eswt_control_pane_g2_copy4

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy4_ParamLimits

0x72ac,	// (0x000072ac) eswt_control_pane_g3_copy4

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy4_ParamLimits

0x72b9,	// (0x000072b9) eswt_control_pane_g4_copy4

0xd5df,	// (0x0000d5df) eswt_ctrl_combo_button_pane

0xd5e7,	// (0x0000d5e7) eswt_ctrl_input_pane

0xd5ef,	// (0x0000d5ef) popup_choice_list_window_cp70

0xd5f7,	// (0x0000d5f7) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x63ee,	// (0x000063ee) bg_button_pane_cp70_ParamLimits

0x63ee,	// (0x000063ee) bg_button_pane_cp70

0xd605,	// (0x0000d605) eswt_ctrl_combo_button_pane_g1

0x7383,	// (0x00007383) wait_bar_pane_cp70

0x37fc,	// (0x000037fc) bg_popup_window_pane_cp70_ParamLimits

0x37fc,	// (0x000037fc) bg_popup_window_pane_cp70

0x738b,	// (0x0000738b) popup_eswt_tasktip_window_t1

0x73a1,	// (0x000073a1) wait_bar_pane_cp71_ParamLimits

0x73a1,	// (0x000073a1) wait_bar_pane_cp71

0x73ad,	// (0x000073ad) grid_eswt_app_pane

0x1b56,	// (0x00001b56) scroll_pane_cp70

0xd60d,	// (0x0000d60d) cell_eswt_app_pane_ParamLimits

0xd60d,	// (0x0000d60d) cell_eswt_app_pane

0xd637,	// (0x0000d637) cell_eswt_app_pane_g1_ParamLimits

0xd637,	// (0x0000d637) cell_eswt_app_pane_g1

0xd666,	// (0x0000d666) cell_eswt_app_pane_g2_ParamLimits

0xd666,	// (0x0000d666) cell_eswt_app_pane_g2

0x0001,

0xf2a5,	// (0x0000f2a5) cell_eswt_app_pane_g_ParamLimits

0xf2a5,	// (0x0000f2a5) cell_eswt_app_pane_g

0xd68f,	// (0x0000d68f) cell_eswt_app_pane_t1_ParamLimits

0xd68f,	// (0x0000d68f) cell_eswt_app_pane_t1

0x7470,	// (0x00007470) grid_highlight_pane_cp70_ParamLimits

0x7470,	// (0x00007470) grid_highlight_pane_cp70

0x2474,	// (0x00002474) set_content_pane_g1

0x28f4,	// (0x000028f4) status_small_volume_pane

0x747c,	// (0x0000747c) status_small_volume_pane_g1

0x7484,	// (0x00007484) volume_small2_pane

0x748d,	// (0x0000748d) volume_small2_pane_g1

0x7496,	// (0x00007496) volume_small2_pane_g2

0x749f,	// (0x0000749f) volume_small2_pane_g3

0x74a8,	// (0x000074a8) volume_small2_pane_g4

0x74b1,	// (0x000074b1) volume_small2_pane_g5

0x74ba,	// (0x000074ba) volume_small2_pane_g6

0x74c3,	// (0x000074c3) volume_small2_pane_g7

0x74cc,	// (0x000074cc) volume_small2_pane_g8

0x74d5,	// (0x000074d5) volume_small2_pane_g9

0x74de,	// (0x000074de) volume_small2_pane_g10

0x0009,

0xaccd,	// (0x0000accd) volume_small2_pane_g

0x6a17,	// (0x00006a17) fep_vkb_top_text_pane_g1_ParamLimits

0xd536,	// (0x0000d536) fep_vkb_top_text_pane_t1_ParamLimits

0x6d40,	// (0x00006d40) popup_preview_fixed_window_g3_ParamLimits

0x6d40,	// (0x00006d40) popup_preview_fixed_window_g3

0xc5a8,	// (0x0000c5a8) popup_toolbar_trans_pane

0xce64,	// (0x0000ce64) aid_height_set_list_ParamLimits

0x4e38,	// (0x00004e38) aid_size_parent_ParamLimits

0x2b1e,	// (0x00002b1e) list_highlight_pane_cp2_ParamLimits

0x2474,	// (0x00002474) set_content_pane_g1_ParamLimits

0xd02c,	// (0x0000d02c) list_single_image_pane_ParamLimits

0xd02c,	// (0x0000d02c) list_single_image_pane

0x74e7,	// (0x000074e7) aid_size_cell_image_ParamLimits

0x74e7,	// (0x000074e7) aid_size_cell_image

0xd6c1,	// (0x0000d6c1) grid_single_image_pane_ParamLimits

0xd6c1,	// (0x0000d6c1) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x6d6d,	// (0x00006d6d) list_single_image_pane_g2_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_image_pane_g2

0x0001,

0xace2,	// (0x0000ace2) list_single_image_pane_g_ParamLimits

0xace2,	// (0x0000ace2) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xd6cf,	// (0x0000d6cf) cell_image_list_pane_ParamLimits

0xd6cf,	// (0x0000d6cf) cell_image_list_pane

0x7515,	// (0x00007515) cell_image_list_pane_g1

0x751e,	// (0x0000751e) cell_image_list_pane_g2

0x0001,

0xace7,	// (0x0000ace7) cell_image_list_pane_g

0x7527,	// (0x00007527) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x7539,	// (0x00007539) grid_tb_trans_pane

0x366e,	// (0x0000366e) bg_tb_trans_pane_g1

0x3676,	// (0x00003676) bg_tb_trans_pane_g2

0x367e,	// (0x0000367e) bg_tb_trans_pane_g3

0x3686,	// (0x00003686) bg_tb_trans_pane_g4

0x368e,	// (0x0000368e) bg_tb_trans_pane_g5

0x36a6,	// (0x000036a6) bg_tb_trans_pane_g6

0x36ae,	// (0x000036ae) bg_tb_trans_pane_g7

0x3696,	// (0x00003696) bg_tb_trans_pane_g8

0x369e,	// (0x0000369e) bg_tb_trans_pane_g9

0x0008,

0xacec,	// (0x0000acec) bg_tb_trans_pane_g

0x754d,	// (0x0000754d) cell_toolbar_trans_pane_ParamLimits

0x754d,	// (0x0000754d) cell_toolbar_trans_pane

0x6429,	// (0x00006429) cell_toolbar_trans_pane_g1

0xd28c,	// (0x0000d28c) list_form2_midp_pane_t1

0xd29a,	// (0x0000d29a) list_form2_midp_pane_t2

0x0001,

0xf275,	// (0x0000f275) list_form2_midp_pane_t

0x5fbf,	// (0x00005fbf) scroll_pane_cp51_ParamLimits

0x61ca,	// (0x000061ca) form2_midp_wait_pane_g1

0x61d3,	// (0x000061d3) form2_midp_wait_pane_g2

0x61dc,	// (0x000061dc) form2_midp_wait_pane_g3

0x0002,

0xabaa,	// (0x0000abaa) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x6233,	// (0x00006233) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6242,	// (0x00006242) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x503e,	// (0x0000503e) list_single_2graphic_im_pane_ParamLimits

0x503e,	// (0x0000503e) list_single_2graphic_im_pane

0xd6e5,	// (0x0000d6e5) list_single_2graphic_im_pane_g1_ParamLimits

0xd6e5,	// (0x0000d6e5) list_single_2graphic_im_pane_g1

0xd6f6,	// (0x0000d6f6) list_single_2graphic_im_pane_g2_ParamLimits

0xd6f6,	// (0x0000d6f6) list_single_2graphic_im_pane_g2

0xd702,	// (0x0000d702) list_single_2graphic_im_pane_g3_ParamLimits

0xd702,	// (0x0000d702) list_single_2graphic_im_pane_g3

0x0003,

0xf2aa,	// (0x0000f2aa) list_single_2graphic_im_pane_g_ParamLimits

0xf2aa,	// (0x0000f2aa) list_single_2graphic_im_pane_g

0xd716,	// (0x0000d716) list_single_2graphic_im_pane_t1_ParamLimits

0xd716,	// (0x0000d716) list_single_2graphic_im_pane_t1

0x6d4c,	// (0x00006d4c) list_single_graphic_2heading_pane_fp_ParamLimits

0x6d4c,	// (0x00006d4c) list_single_graphic_2heading_pane_fp

0x6da4,	// (0x00006da4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6da4,	// (0x00006da4) list_single_graphic_2heading_pane_fp_g1

0x6d61,	// (0x00006d61) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6d61,	// (0x00006d61) list_single_graphic_2heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3

0x6d6d,	// (0x00006d6d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6d6d,	// (0x00006d6d) list_single_graphic_2heading_pane_fp_g4

0x6d81,	// (0x00006d81) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6d81,	// (0x00006d81) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xac2d,	// (0x0000ac2d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xac2d,	// (0x0000ac2d) list_single_graphic_2heading_pane_fp_g

0x75e1,	// (0x000075e1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x75e1,	// (0x000075e1) list_single_graphic_2heading_pane_fp_t1

0x6ddc,	// (0x00006ddc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6ddc,	// (0x00006ddc) list_single_graphic_2heading_pane_fp_t2

0x75f7,	// (0x000075f7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x75f7,	// (0x000075f7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xad08,	// (0x0000ad08) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xad08,	// (0x0000ad08) list_single_graphic_2heading_pane_fp_t

0x6667,	// (0x00006667) fep_hwr_write_pane_g5_ParamLimits

0x6667,	// (0x00006667) fep_hwr_write_pane_g5

0x6673,	// (0x00006673) fep_hwr_write_pane_g6_ParamLimits

0x6673,	// (0x00006673) fep_hwr_write_pane_g6

0x7261,	// (0x00007261) eswt_shell_pane_ParamLimits

0x37fc,	// (0x000037fc) bg_popup_window_pane_cp18_ParamLimits

0x4ce0,	// (0x00004ce0) heading_pane_cp70

0x738b,	// (0x0000738b) popup_eswt_tasktip_window_t1_ParamLimits

0xc669,	// (0x0000c669) aid_touch_tab_arrow_left

0xc67f,	// (0x0000c67f) aid_touch_tab_arrow_right

0xb17f,	// (0x0000b17f) title_pane_g3_ParamLimits

0xb17f,	// (0x0000b17f) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xc5a8,	// (0x0000c5a8) popup_toolbar_trans_pane_ParamLimits

0x7527,	// (0x00007527) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x7539,	// (0x00007539) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3e6e,	// (0x00003e6e) cont_note_wait_pane_ParamLimits

0x3e6e,	// (0x00003e6e) cont_note_wait_pane

0x3e6e,	// (0x00003e6e) cont_note_image_pane_ParamLimits

0x3e6e,	// (0x00003e6e) cont_note_image_pane

0x760d,	// (0x0000760d) popup_note2_window_g1_ParamLimits

0x760d,	// (0x0000760d) popup_note2_window_g1

0x763e,	// (0x0000763e) popup_note2_window_t1_ParamLimits

0x763e,	// (0x0000763e) popup_note2_window_t1

0x7683,	// (0x00007683) popup_note2_window_t2_ParamLimits

0x7683,	// (0x00007683) popup_note2_window_t2

0x76c8,	// (0x000076c8) popup_note2_window_t3_ParamLimits

0x76c8,	// (0x000076c8) popup_note2_window_t3

0x770d,	// (0x0000770d) popup_note2_window_t4_ParamLimits

0x770d,	// (0x0000770d) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xad14,	// (0x0000ad14) popup_note2_window_t_ParamLimits

0xad14,	// (0x0000ad14) popup_note2_window_t

0x773c,	// (0x0000773c) popup_note2_image_window_g1_ParamLimits

0x773c,	// (0x0000773c) popup_note2_image_window_g1

0x7748,	// (0x00007748) popup_note2_image_window_g2_ParamLimits

0x7748,	// (0x00007748) popup_note2_image_window_g2

0x0001,

0xad1f,	// (0x0000ad1f) popup_note2_image_window_g_ParamLimits

0xad1f,	// (0x0000ad1f) popup_note2_image_window_g

0x775a,	// (0x0000775a) popup_note2_image_window_t1_ParamLimits

0x775a,	// (0x0000775a) popup_note2_image_window_t1

0x7772,	// (0x00007772) popup_note2_image_window_t2_ParamLimits

0x7772,	// (0x00007772) popup_note2_image_window_t2

0x778a,	// (0x0000778a) popup_note2_image_window_t3_ParamLimits

0x778a,	// (0x0000778a) popup_note2_image_window_t3

0x0002,

0xad24,	// (0x0000ad24) popup_note2_image_window_t_ParamLimits

0xad24,	// (0x0000ad24) popup_note2_image_window_t

0x3e7c,	// (0x00003e7c) popup_note2_wait_window_g1_ParamLimits

0x3e7c,	// (0x00003e7c) popup_note2_wait_window_g1

0x77a6,	// (0x000077a6) popup_note2_wait_window_g2_ParamLimits

0x77a6,	// (0x000077a6) popup_note2_wait_window_g2

0x3e94,	// (0x00003e94) popup_note2_wait_window_g3_ParamLimits

0x3e94,	// (0x00003e94) popup_note2_wait_window_g3

0x0002,

0xad2b,	// (0x0000ad2b) popup_note2_wait_window_g_ParamLimits

0xad2b,	// (0x0000ad2b) popup_note2_wait_window_g

0x77b2,	// (0x000077b2) popup_note2_wait_window_t1_ParamLimits

0x77b2,	// (0x000077b2) popup_note2_wait_window_t1

0x77d0,	// (0x000077d0) popup_note2_wait_window_t2_ParamLimits

0x77d0,	// (0x000077d0) popup_note2_wait_window_t2

0x77ee,	// (0x000077ee) popup_note2_wait_window_t3_ParamLimits

0x77ee,	// (0x000077ee) popup_note2_wait_window_t3

0x7800,	// (0x00007800) popup_note2_wait_window_t4_ParamLimits

0x7800,	// (0x00007800) popup_note2_wait_window_t4

0x0003,

0xad32,	// (0x0000ad32) popup_note2_wait_window_t_ParamLimits

0xad32,	// (0x0000ad32) popup_note2_wait_window_t

0x7812,	// (0x00007812) wait_bar2_pane_ParamLimits

0x7812,	// (0x00007812) wait_bar2_pane

0x782a,	// (0x0000782a) popup_snote2_single_text_window_g1_ParamLimits

0x782a,	// (0x0000782a) popup_snote2_single_text_window_g1

0x7852,	// (0x00007852) popup_snote2_single_text_window_t1_ParamLimits

0x7852,	// (0x00007852) popup_snote2_single_text_window_t1

0x789e,	// (0x0000789e) popup_snote2_single_text_window_t2_ParamLimits

0x789e,	// (0x0000789e) popup_snote2_single_text_window_t2

0x78ea,	// (0x000078ea) popup_snote2_single_text_window_t3_ParamLimits

0x78ea,	// (0x000078ea) popup_snote2_single_text_window_t3

0x792b,	// (0x0000792b) popup_snote2_single_text_window_t4_ParamLimits

0x792b,	// (0x0000792b) popup_snote2_single_text_window_t4

0x7961,	// (0x00007961) popup_snote2_single_text_window_t5_ParamLimits

0x7961,	// (0x00007961) popup_snote2_single_text_window_t5

0x0004,

0xad3b,	// (0x0000ad3b) popup_snote2_single_text_window_t_ParamLimits

0xad3b,	// (0x0000ad3b) popup_snote2_single_text_window_t

0x798c,	// (0x0000798c) popup_snote2_single_graphic_window_g1_ParamLimits

0x798c,	// (0x0000798c) popup_snote2_single_graphic_window_g1

0x79b4,	// (0x000079b4) popup_snote2_single_graphic_window_g2_ParamLimits

0x79b4,	// (0x000079b4) popup_snote2_single_graphic_window_g2

0x0001,

0xad46,	// (0x0000ad46) popup_snote2_single_graphic_window_g_ParamLimits

0xad46,	// (0x0000ad46) popup_snote2_single_graphic_window_g

0x79dc,	// (0x000079dc) popup_snote2_single_graphic_window_t1_ParamLimits

0x79dc,	// (0x000079dc) popup_snote2_single_graphic_window_t1

0x7a28,	// (0x00007a28) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a28,	// (0x00007a28) popup_snote2_single_graphic_window_t2

0x78ea,	// (0x000078ea) popup_snote2_single_graphic_window_t3_ParamLimits

0x78ea,	// (0x000078ea) popup_snote2_single_graphic_window_t3

0x792b,	// (0x0000792b) popup_snote2_single_graphic_window_t4_ParamLimits

0x792b,	// (0x0000792b) popup_snote2_single_graphic_window_t4

0x7961,	// (0x00007961) popup_snote2_single_graphic_window_t5_ParamLimits

0x7961,	// (0x00007961) popup_snote2_single_graphic_window_t5

0x0004,

0xad4b,	// (0x0000ad4b) popup_snote2_single_graphic_window_t_ParamLimits

0xad4b,	// (0x0000ad4b) popup_snote2_single_graphic_window_t

0x5e2b,	// (0x00005e2b) clock_nsta_pane_cp2_t1

0x5e2b,	// (0x00005e2b) clock_nsta_pane_cp2_t2

0x0001,

0xab6b,	// (0x0000ab6b) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xa756,	// (0x0000a756) form_field_data_wide_pane_g_ParamLimits

0xa756,	// (0x0000a756) form_field_data_wide_pane_g

0xd1a6,	// (0x0000d1a6) grid_touch_3_pane_ParamLimits

0xd1a6,	// (0x0000d1a6) grid_touch_3_pane

0xd747,	// (0x0000d747) cell_touch_3_pane_ParamLimits

0xd747,	// (0x0000d747) cell_touch_3_pane

0x6429,	// (0x00006429) cell_touch_3_pane_g1

0x6429,	// (0x00006429) cell_touch_3_pane_g2

0x0001,

0xabf0,	// (0x0000abf0) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7aa2,	// (0x00007aa2) button_value_adjust_pane_cp7

0x7aaa,	// (0x00007aaa) query_popup_pane_cp3

0x1e5a,	// (0x00001e5a) bg_popup_sub_pane_cp22_ParamLimits

0x1e70,	// (0x00001e70) navi_navi_volume_pane_cp2

0x1e8b,	// (0x00001e8b) popup_side_volume_key_window_g2

0x1e9a,	// (0x00001e9a) popup_side_volume_key_window_g3

0x0002,

0xa7e8,	// (0x0000a7e8) popup_side_volume_key_window_g

0x1eb7,	// (0x00001eb7) popup_side_volume_key_window_t2

0x0001,

0xa7ef,	// (0x0000a7ef) popup_side_volume_key_window_t

0x233e,	// (0x0000233e) popup_side_volume_key_window_ParamLimits

0xb63f,	// (0x0000b63f) list_double_graphic_pane_g4_ParamLimits

0xb63f,	// (0x0000b63f) list_double_graphic_pane_g4

0xd008,	// (0x0000d008) list_single_2heading_msg_pane_ParamLimits

0xd008,	// (0x0000d008) list_single_2heading_msg_pane

0xd790,	// (0x0000d790) list_single_2heading_msg_pane_g1_ParamLimits

0xd790,	// (0x0000d790) list_single_2heading_msg_pane_g1

0xd79c,	// (0x0000d79c) list_single_2heading_msg_pane_g2_ParamLimits

0xd79c,	// (0x0000d79c) list_single_2heading_msg_pane_g2

0xd7af,	// (0x0000d7af) list_single_2heading_msg_pane_g3_ParamLimits

0xd7af,	// (0x0000d7af) list_single_2heading_msg_pane_g3

0xd7bb,	// (0x0000d7bb) list_single_2heading_msg_pane_g4_ParamLimits

0xd7bb,	// (0x0000d7bb) list_single_2heading_msg_pane_g4

0x0003,

0xf2b3,	// (0x0000f2b3) list_single_2heading_msg_pane_g_ParamLimits

0xf2b3,	// (0x0000f2b3) list_single_2heading_msg_pane_g

0xd7d3,	// (0x0000d7d3) list_single_2heading_msg_pane_t1_ParamLimits

0xd7d3,	// (0x0000d7d3) list_single_2heading_msg_pane_t1

0xd7fb,	// (0x0000d7fb) list_single_2heading_msg_pane_t2_ParamLimits

0xd7fb,	// (0x0000d7fb) list_single_2heading_msg_pane_t2

0xd866,	// (0x0000d866) list_single_2heading_msg_pane_t3_ParamLimits

0xd866,	// (0x0000d866) list_single_2heading_msg_pane_t3

0x7b99,	// (0x00007b99) list_single_2heading_msg_pane_t4_ParamLimits

0x7b99,	// (0x00007b99) list_single_2heading_msg_pane_t4

0x0003,

0xf2bc,	// (0x0000f2bc) list_single_2heading_msg_pane_t_ParamLimits

0xf2bc,	// (0x0000f2bc) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c4,	// (0x000018c4) title_pane_stacon_g3_ParamLimits

0x18c4,	// (0x000018c4) title_pane_stacon_g3

0x75a4,	// (0x000075a4) list_single_2graphic_im_pane_g4_ParamLimits

0x75a4,	// (0x000075a4) list_single_2graphic_im_pane_g4

0x4a37,	// (0x00004a37) popup_side_volume_key_window_cp

0x54b3,	// (0x000054b3) main_idle_act2_pane_t1

0x36b6,	// (0x000036b6) toolbar_button_pane_g10

0xb4ec,	// (0x0000b4ec) popup_toolbar_window_cp1

0x5e1c,	// (0x00005e1c) clock_nsta_pane_cp_t1

0x5e1c,	// (0x00005e1c) clock_nsta_pane_cp_t2

0x0001,

0xab66,	// (0x0000ab66) clock_nsta_pane_cp_t

0x1e70,	// (0x00001e70) navi_navi_volume_pane_cp2_ParamLimits

0x1e7f,	// (0x00001e7f) popup_side_volume_key_window_g1_ParamLimits

0x1e8b,	// (0x00001e8b) popup_side_volume_key_window_g2_ParamLimits

0x1e9a,	// (0x00001e9a) popup_side_volume_key_window_g3_ParamLimits

0xa7e8,	// (0x0000a7e8) popup_side_volume_key_window_g_ParamLimits

0x64a7,	// (0x000064a7) fep_hwr_aid_pane

0x654e,	// (0x0000654e) bg_fep_hwr_top_pane_g4_ParamLimits

0x656e,	// (0x0000656e) fep_hwr_top_pane_g1_ParamLimits

0x6580,	// (0x00006580) fep_hwr_top_pane_g2_ParamLimits

0x6592,	// (0x00006592) fep_hwr_top_pane_g3_ParamLimits

0xabbb,	// (0x0000abbb) fep_hwr_top_pane_g_ParamLimits

0x65a7,	// (0x000065a7) fep_hwr_top_text_pane_ParamLimits

0x47fa,	// (0x000047fa) aid_touch_tab_arrow_arrow_2

0x4803,	// (0x00004803) aid_touch_tab_arrow_left_2

0x64bb,	// (0x000064bb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x64f2,	// (0x000064f2) fep_hwr_prediction_pane

0x681f,	// (0x0000681f) fep_vkb_prediction_pane

0xd516,	// (0x0000d516) fep_vkb_side_pane_g3_ParamLimits

0xd516,	// (0x0000d516) fep_vkb_side_pane_g3

0x68cf,	// (0x000068cf) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6f99,	// (0x00006f99) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6fa6,	// (0x00006fa6) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xac65,	// (0x0000ac65) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7bbe,	// (0x00007bbe) fep_hwr_prediction_pane_g1

0x7bc8,	// (0x00007bc8) fep_hwr_prediction_pane_g2

0x7bd0,	// (0x00007bd0) fep_hwr_prediction_pane_g3

0x7bd8,	// (0x00007bd8) fep_hwr_prediction_pane_g4

0x0003,

0xad68,	// (0x0000ad68) fep_hwr_prediction_pane_g

0x7bbe,	// (0x00007bbe) fep_vkb_prediction_pane_g1

0x7be0,	// (0x00007be0) fep_vkb_prediction_pane_g2

0x7be8,	// (0x00007be8) fep_vkb_prediction_pane_g3

0x7bf0,	// (0x00007bf0) fep_vkb_prediction_pane_g4

0x0003,

0xad71,	// (0x0000ad71) fep_vkb_prediction_pane_g

0x4da1,	// (0x00004da1) slider_set_pane_g3

0x4db5,	// (0x00004db5) slider_set_pane_g4

0x4dcd,	// (0x00004dcd) slider_set_pane_g5

0x4da1,	// (0x00004da1) slider_set_pane_g6

0x4de3,	// (0x00004de3) slider_set_pane_g7

0x4f9d,	// (0x00004f9d) slider_form_pane_g3

0x4fa6,	// (0x00004fa6) slider_form_pane_g4

0x4fae,	// (0x00004fae) slider_form_pane_g5

0x4f9d,	// (0x00004f9d) slider_form_pane_g6

0xcfaf,	// (0x0000cfaf) slider_form_pane_g7

0x57a1,	// (0x000057a1) slider_set_pane_vc_g3

0x57aa,	// (0x000057aa) slider_set_pane_vc_g4

0x57b3,	// (0x000057b3) slider_set_pane_vc_g5

0x57a1,	// (0x000057a1) slider_set_pane_vc_g6

0x57bc,	// (0x000057bc) slider_set_pane_vc_g7

0x57a1,	// (0x000057a1) slider_form_pane_vc_g1

0x57aa,	// (0x000057aa) slider_form_pane_vc_g2

0x57b3,	// (0x000057b3) slider_form_pane_vc_g3

0x57a1,	// (0x000057a1) slider_form_pane_vc_g4

0x5b54,	// (0x00005b54) slider_form_pane_vc_g5

0x0004,

0xab4c,	// (0x0000ab4c) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7bf8,	// (0x00007bf8) ai3_links_pane

0xd8d4,	// (0x0000d8d4) popup_ai3_data_window_ParamLimits

0xd8d4,	// (0x0000d8d4) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xd8ee,	// (0x0000d8ee) cell_ai3_links_pane_ParamLimits

0xd8ee,	// (0x0000d8ee) cell_ai3_links_pane

0x7c33,	// (0x00007c33) bg_popup_sub_pane_cp11

0x7c40,	// (0x00007c40) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7c65,	// (0x00007c65) heading_ai3_data_pane

0x7c6d,	// (0x00007c6d) list_ai3_gene_pane

0x7c79,	// (0x00007c79) popup_ai3_data_window_g1

0x7c81,	// (0x00007c81) heading_ai3_data_pane_g1

0x7c89,	// (0x00007c89) heading_ai3_data_pane_t1

0x7c97,	// (0x00007c97) list_double_ai3_gene_pane_ParamLimits

0x7c97,	// (0x00007c97) list_double_ai3_gene_pane

0x7ca4,	// (0x00007ca4) list_single_ai3_gene_pane_ParamLimits

0x7ca4,	// (0x00007ca4) list_single_ai3_gene_pane

0x63ee,	// (0x000063ee) list_highlight_pane_cp7_ParamLimits

0x63ee,	// (0x000063ee) list_highlight_pane_cp7

0x7cb1,	// (0x00007cb1) list_single_a13_gene_pane_t1_ParamLimits

0x7cb1,	// (0x00007cb1) list_single_a13_gene_pane_t1

0x7cc8,	// (0x00007cc8) list_single_ai3_gene_pane_g1

0x7cd1,	// (0x00007cd1) list_single_ai3_gene_pane_g2

0x0001,

0xad7a,	// (0x0000ad7a) list_single_ai3_gene_pane_g

0x7cd9,	// (0x00007cd9) list_double_ai3_gene_pane_g1_ParamLimits

0x7cd9,	// (0x00007cd9) list_double_ai3_gene_pane_g1

0x7ce5,	// (0x00007ce5) list_double_ai3_gene_pane_t1_ParamLimits

0x7ce5,	// (0x00007ce5) list_double_ai3_gene_pane_t1

0x7d01,	// (0x00007d01) list_double_ai3_gene_pane_t2_ParamLimits

0x7d01,	// (0x00007d01) list_double_ai3_gene_pane_t2

0x7d17,	// (0x00007d17) list_double_ai3_gene_pane_t3_ParamLimits

0x7d17,	// (0x00007d17) list_double_ai3_gene_pane_t3

0x0002,

0xad7f,	// (0x0000ad7f) list_double_ai3_gene_pane_t_ParamLimits

0xad7f,	// (0x0000ad7f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7abb,	// (0x00007abb) aid_size_min_col_2

0xd77a,	// (0x0000d77a) aid_size_min_msg_ParamLimits

0xd77a,	// (0x0000d77a) aid_size_min_msg

0xd52a,	// (0x0000d52a) fep_vkb_top_text_pane_g2_ParamLimits

0xd52a,	// (0x0000d52a) fep_vkb_top_text_pane_g2

0x0001,

0xf295,	// (0x0000f295) fep_vkb_top_text_pane_g_ParamLimits

0xf295,	// (0x0000f295) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7d34,	// (0x00007d34) grid_hc_apps_pane_ParamLimits

0x7d34,	// (0x00007d34) grid_hc_apps_pane

0x7d43,	// (0x00007d43) list_hc_apps_pane

0x7d4b,	// (0x00007d4b) scroll_pane_cp37_ParamLimits

0x7d4b,	// (0x00007d4b) scroll_pane_cp37

0xd908,	// (0x0000d908) cell_hc_apps_pane_ParamLimits

0xd908,	// (0x0000d908) cell_hc_apps_pane

0xd9c6,	// (0x0000d9c6) cell_hc_apps_pane_g1_ParamLimits

0xd9c6,	// (0x0000d9c6) cell_hc_apps_pane_g1

0x7e36,	// (0x00007e36) cell_hc_apps_pane_g2_ParamLimits

0x7e36,	// (0x00007e36) cell_hc_apps_pane_g2

0x7e52,	// (0x00007e52) cell_hc_apps_pane_g3_ParamLimits

0x7e52,	// (0x00007e52) cell_hc_apps_pane_g3

0x0002,

0xf2c5,	// (0x0000f2c5) cell_hc_apps_pane_g_ParamLimits

0xf2c5,	// (0x0000f2c5) cell_hc_apps_pane_g

0xd9f3,	// (0x0000d9f3) cell_hc_apps_pane_t1_ParamLimits

0xd9f3,	// (0x0000d9f3) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xda31,	// (0x0000da31) list_single_hc_apps_pane_ParamLimits

0xda31,	// (0x0000da31) list_single_hc_apps_pane

0xda5e,	// (0x0000da5e) list_single_hc_apps_pane_g1

0xda77,	// (0x0000da77) list_single_hc_apps_pane_g2

0x0001,

0xf2cc,	// (0x0000f2cc) list_single_hc_apps_pane_g

0xda90,	// (0x0000da90) list_single_hc_apps_pane_g2_copy1

0x7f5e,	// (0x00007f5e) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xa63e,	// (0x0000a63e) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2977,	// (0x00002977) control_pane_g5_ParamLimits

0x2977,	// (0x00002977) control_pane_g5

0x4d88,	// (0x00004d88) slider_set_pane_g1_ParamLimits

0x4d95,	// (0x00004d95) slider_set_pane_g2_ParamLimits

0x4da1,	// (0x00004da1) slider_set_pane_g3_ParamLimits

0x4db5,	// (0x00004db5) slider_set_pane_g4_ParamLimits

0x4dcd,	// (0x00004dcd) slider_set_pane_g5_ParamLimits

0x4da1,	// (0x00004da1) slider_set_pane_g6_ParamLimits

0x4de3,	// (0x00004de3) slider_set_pane_g7_ParamLimits

0xaa2d,	// (0x0000aa2d) slider_set_pane_g_ParamLimits

0x241f,	// (0x0000241f) navi_icon_text_pane_ParamLimits

0xc635,	// (0x0000c635) aid_fill_nsta_2_ParamLimits

0xc669,	// (0x0000c669) aid_touch_tab_arrow_left_ParamLimits

0xc67f,	// (0x0000c67f) aid_touch_tab_arrow_right_ParamLimits

0xc71a,	// (0x0000c71a) clock_nsta_pane_ParamLimits

0xcd79,	// (0x0000cd79) navi_icon_pane_g1_ParamLimits

0xcd85,	// (0x0000cd85) navi_text_pane_t1_ParamLimits

0xd26e,	// (0x0000d26e) navi_icon_text_pane_g1_ParamLimits

0xd27a,	// (0x0000d27a) navi_icon_text_pane_t1_ParamLimits

0xda5e,	// (0x0000da5e) list_single_hc_apps_pane_g1_ParamLimits

0xda77,	// (0x0000da77) list_single_hc_apps_pane_g2_ParamLimits

0xf2cc,	// (0x0000f2cc) list_single_hc_apps_pane_g_ParamLimits

0xda90,	// (0x0000da90) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f5e,	// (0x00007f5e) list_single_hc_apps_pane_t1_ParamLimits

0xb0eb,	// (0x0000b0eb) popup_toolbar2_fixed_window_ParamLimits

0xb0eb,	// (0x0000b0eb) popup_toolbar2_fixed_window

0xc59e,	// (0x0000c59e) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7f8c,	// (0x00007f8c) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7f8c,	// (0x00007f8c) grid_toolbar2_fixed_pane

0xdaac,	// (0x0000daac) cell_toolbar2_fixed_pane_ParamLimits

0xdaac,	// (0x0000daac) cell_toolbar2_fixed_pane

0xdac7,	// (0x0000dac7) cell_toolbar2_fixed_pane_g1

0x7fad,	// (0x00007fad) toolbar2_fixed_button_pane

0x366e,	// (0x0000366e) toolbar2_fixed_button_pane_g1

0x3676,	// (0x00003676) toolbar2_fixed_button_pane_g2

0x367e,	// (0x0000367e) toolbar2_fixed_button_pane_g3

0x3686,	// (0x00003686) toolbar2_fixed_button_pane_g4

0x368e,	// (0x0000368e) toolbar2_fixed_button_pane_g5

0x3696,	// (0x00003696) toolbar2_fixed_button_pane_g6

0x369e,	// (0x0000369e) toolbar2_fixed_button_pane_g7

0x36a6,	// (0x000036a6) toolbar2_fixed_button_pane_g8

0x36ae,	// (0x000036ae) toolbar2_fixed_button_pane_g9

0x0008,

0xa92f,	// (0x0000a92f) toolbar2_fixed_button_pane_g

0x7fb5,	// (0x00007fb5) cell_toolbar2_float_pane_ParamLimits

0x7fb5,	// (0x00007fb5) cell_toolbar2_float_pane

0x7fc6,	// (0x00007fc6) cell_toolbar2_float_pane_g1

0x7fad,	// (0x00007fad) toolbar2_fixed_button_pane_cp

0xd404,	// (0x0000d404) fep_vkb_accented_list_pane_ParamLimits

0xd404,	// (0x0000d404) fep_vkb_accented_list_pane

0x6c16,	// (0x00006c16) bg_popup_fep_shadow_pane_g9

0x259f,	// (0x0000259f) bg_popup_fep_shadow_pane_cp3

0x1653,	// (0x00001653) list_accented_list_pane

0x7fcf,	// (0x00007fcf) list_single_accented_list_pane_ParamLimits

0x7fcf,	// (0x00007fcf) list_single_accented_list_pane

0x259f,	// (0x0000259f) list_highlight_pane_cp10

0x7fe0,	// (0x00007fe0) list_single_accented_list_pane_t1

0xc4c8,	// (0x0000c4c8) popup_slider_window_ParamLimits

0xc4c8,	// (0x0000c4c8) popup_slider_window

0x7ab2,	// (0x00007ab2) aid_indentation_list_msg

0xdbc0,	// (0x0000dbc0) bg_popup_window_pane_cp19

0x8104,	// (0x00008104) popup_slider_window_g1

0x8120,	// (0x00008120) popup_slider_window_g2

0x813c,	// (0x0000813c) popup_slider_window_g3

0x0005,

0xf2d1,	// (0x0000f2d1) popup_slider_window_g

0x8198,	// (0x00008198) popup_slider_window_t1

0x820c,	// (0x0000820c) small_volume_slider_vertical_pane

0x6429,	// (0x00006429) small_volume_slider_vertical_pane_g1

0x6429,	// (0x00006429) small_volume_slider_vertical_pane_g2

0x8228,	// (0x00008228) small_volume_slider_vertical_pane_g3

0x0002,

0xada4,	// (0x0000ada4) small_volume_slider_vertical_pane_g

0xb059,	// (0x0000b059) area_side_right_pane_ParamLimits

0xb059,	// (0x0000b059) area_side_right_pane

0xdc78,	// (0x0000dc78) aid_size_side_button_ParamLimits

0xdc78,	// (0x0000dc78) aid_size_side_button

0xdc91,	// (0x0000dc91) grid_sctrl_middle_pane_ParamLimits

0xdc91,	// (0x0000dc91) grid_sctrl_middle_pane

0x8265,	// (0x00008265) sctrl_sk_bottom_pane

0x8276,	// (0x00008276) sctrl_sk_top_pane

0x8288,	// (0x00008288) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x8295,	// (0x00008295) sctrl_sk_top_pane_g1

0x82a2,	// (0x000082a2) sctrl_sk_top_pane_t1

0x8288,	// (0x00008288) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x82bd,	// (0x000082bd) sctrl_sk_bottom_pane_g1

0x82a2,	// (0x000082a2) sctrl_sk_bottom_pane_t1

0xdcab,	// (0x0000dcab) cell_sctrl_middle_pane_ParamLimits

0xdcab,	// (0x0000dcab) cell_sctrl_middle_pane

0xdcbc,	// (0x0000dcbc) aid_touch_sctrl_middle_ParamLimits

0xdcbc,	// (0x0000dcbc) aid_touch_sctrl_middle

0xdcc9,	// (0x0000dcc9) bg_sctrl_middle_pane_ParamLimits

0xdcc9,	// (0x0000dcc9) bg_sctrl_middle_pane

0x8385,	// (0x00008385) cell_sctrl_middle_pane_g1_ParamLimits

0x8385,	// (0x00008385) cell_sctrl_middle_pane_g1

0xdcd7,	// (0x0000dcd7) cell_sctrl_middle_pane_g2_ParamLimits

0xdcd7,	// (0x0000dcd7) cell_sctrl_middle_pane_g2

0x0001,

0xf2de,	// (0x0000f2de) cell_sctrl_middle_pane_g_ParamLimits

0xf2de,	// (0x0000f2de) cell_sctrl_middle_pane_g

0x366e,	// (0x0000366e) bg_sctrl_middle_pane_g1

0x3676,	// (0x00003676) bg_sctrl_middle_pane_g2

0x367e,	// (0x0000367e) bg_sctrl_middle_pane_g3

0x3686,	// (0x00003686) bg_sctrl_middle_pane_g4

0x368e,	// (0x0000368e) bg_sctrl_middle_pane_g5

0x3696,	// (0x00003696) bg_sctrl_middle_pane_g6

0x369e,	// (0x0000369e) bg_sctrl_middle_pane_g7

0x36a6,	// (0x000036a6) bg_sctrl_middle_pane_g8

0x0007,

0xadb5,	// (0x0000adb5) bg_sctrl_middle_pane_g

0x36ae,	// (0x000036ae) bg_sctrl_middle_pane_g8_copy1

0x366e,	// (0x0000366e) bg_sctrl_sk_pane_g1

0x3676,	// (0x00003676) bg_sctrl_sk_pane_g2

0x367e,	// (0x0000367e) bg_sctrl_sk_pane_g3

0x0008,

0xa92f,	// (0x0000a92f) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x3686,	// (0x00003686) bg_sctrl_sk_pane_g4

0x368e,	// (0x0000368e) bg_sctrl_sk_pane_g5

0x3696,	// (0x00003696) bg_sctrl_sk_pane_g6

0x369e,	// (0x0000369e) bg_sctrl_sk_pane_g7

0x36a6,	// (0x000036a6) bg_sctrl_sk_pane_g8

0x36ae,	// (0x000036ae) bg_sctrl_sk_pane_g9

0x2bc6,	// (0x00002bc6) popup_fep_china_hwr2_fs_candidate_window

0xc00c,	// (0x0000c00c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc00c,	// (0x0000c00c) popup_fep_china_hwr2_fs_control_window

0x68cf,	// (0x000068cf) sctrl_sk_top_pane_g2

0x0001,

0xadab,	// (0x0000adab) sctrl_sk_top_pane_g

0xdce3,	// (0x0000dce3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdce3,	// (0x0000dce3) aid_fep_china_hwr2_fs_cell

0xdcf7,	// (0x0000dcf7) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdcf7,	// (0x0000dcf7) bg_popup_fep_shadow_pane_cp4

0xdd0e,	// (0x0000dd0e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdd0e,	// (0x0000dd0e) bg_popup_fep_shadow_pane_cp5

0xdd20,	// (0x0000dd20) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdd20,	// (0x0000dd20) popup_fep_china_hwr2_fs_control_bar_grid

0xdd34,	// (0x0000dd34) popup_fep_china_hwr2_fs_control_funtion_grid

0x8359,	// (0x00008359) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8363,	// (0x00008363) popup_fep_china_hwr2_fs_candidate_grid

0xdd3c,	// (0x0000dd3c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdd3c,	// (0x0000dd3c) cell_fep_china_hwr2_fs_funtion_grid

0x6429,	// (0x00006429) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8385,	// (0x00008385) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8385,	// (0x00008385) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8393,	// (0x00008393) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8393,	// (0x00008393) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xadc6,	// (0x0000adc6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xadc6,	// (0x0000adc6) cell_fep_china_hwr2_fs_funtion_grid_g

0xdd54,	// (0x0000dd54) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdd54,	// (0x0000dd54) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdd69,	// (0x0000dd69) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdd69,	// (0x0000dd69) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf2e3,	// (0x0000f2e3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf2e3,	// (0x0000f2e3) cell_fep_china_hwr2_fs_funtion_grid_t

0x83da,	// (0x000083da) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x83e2,	// (0x000083e2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x83ea,	// (0x000083ea) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xadd0,	// (0x0000add0) popup_fep_china_hwr2_fs_control_bar_grid_g

0x83f2,	// (0x000083f2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x83f2,	// (0x000083f2) cell_fep_china_hwr2_fs_candidate_grid

0x840b,	// (0x0000840b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8413,	// (0x00008413) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6429,	// (0x00006429) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6429,	// (0x00006429) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xabf0,	// (0x0000abf0) cell_fep_china_hwr2_fs_candidate_grid_g

0x841b,	// (0x0000841b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31b9,	// (0x000031b9) clock_nsta_pane_cp_24_ParamLimits

0x31b9,	// (0x000031b9) clock_nsta_pane_cp_24

0x3237,	// (0x00003237) indicator_nsta_pane_cp_24_ParamLimits

0x3237,	// (0x00003237) indicator_nsta_pane_cp_24

0x4641,	// (0x00004641) heading_pane_g1

0x0001,

0xa994,	// (0x0000a994) heading_pane_g

0x5244,	// (0x00005244) grid_sct_catagory_button_pane

0x5274,	// (0x00005274) scroll_pane_cp5_ParamLimits

0x5fcb,	// (0x00005fcb) button_value_adjust_pane_cp5_ParamLimits

0x5fcb,	// (0x00005fcb) button_value_adjust_pane_cp5

0x60c7,	// (0x000060c7) form2_midp_time_pane_ParamLimits

0x8429,	// (0x00008429) cell_sct_catagory_button_pane_ParamLimits

0x8429,	// (0x00008429) cell_sct_catagory_button_pane

0x63ee,	// (0x000063ee) bg_button_pane_cp01_ParamLimits

0x63ee,	// (0x000063ee) bg_button_pane_cp01

0x6429,	// (0x00006429) cell_sct_catagory_button_pane_g1

0xc541,	// (0x0000c541) popup_tb_extension_window

0xdd85,	// (0x0000dd85) aid_size_cell_ext_ParamLimits

0xdd85,	// (0x0000dd85) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xddab,	// (0x0000ddab) grid_tb_ext_pane_ParamLimits

0xddab,	// (0x0000ddab) grid_tb_ext_pane

0xdde6,	// (0x0000dde6) cell_tb_ext_pane_ParamLimits

0xdde6,	// (0x0000dde6) cell_tb_ext_pane

0xde0e,	// (0x0000de0e) cell_tb_ext_pane_g1_ParamLimits

0xde0e,	// (0x0000de0e) cell_tb_ext_pane_g1

0x84bd,	// (0x000084bd) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x84d8,	// (0x000084d8) list_uniindi_pane

0x84e4,	// (0x000084e4) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x8503,	// (0x00008503) uniindi_top_pane_g1

0x8519,	// (0x00008519) uniindi_top_pane_g2

0x0003,

0xadd7,	// (0x0000add7) uniindi_top_pane_g

0x8543,	// (0x00008543) uniindi_top_pane_t1

0x856d,	// (0x0000856d) list_single_uniindi_pane_ParamLimits

0x856d,	// (0x0000856d) list_single_uniindi_pane

0x6429,	// (0x00006429) bg_uniindi_top_pane_g1

0x8580,	// (0x00008580) list_single_uniindi_pane_g1

0x8593,	// (0x00008593) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x85b8,	// (0x000085b8) bg_sctrl_sk_pane_cp1

0x85c1,	// (0x000085c1) bg_sctrl_sk_pane_cp2

0x85ca,	// (0x000085ca) control_bg_pane_g1

0x85d3,	// (0x000085d3) control_bg_pane_g2

0x0001,

0xade0,	// (0x0000ade0) control_bg_pane_g

0x5de0,	// (0x00005de0) cell_indicator_nsta_pane_g1_ParamLimits

0xd1d5,	// (0x0000d1d5) cell_indicator_nsta_pane_g2_ParamLimits

0xf260,	// (0x0000f260) cell_indicator_nsta_pane_g_ParamLimits

0x614f,	// (0x0000614f) form2_midp_time_pane_t1_ParamLimits

0x6499,	// (0x00006499) main_idle_act4_pane_ParamLimits

0x6499,	// (0x00006499) main_idle_act4_pane

0xc541,	// (0x0000c541) popup_tb_extension_window_ParamLimits

0xddcd,	// (0x0000ddcd) tb_ext_find_pane_ParamLimits

0xddcd,	// (0x0000ddcd) tb_ext_find_pane

0x85dc,	// (0x000085dc) ai_gene_pane_1_cp1

0x26e4,	// (0x000026e4) ai_gene_pane_2_cp1

0x85e4,	// (0x000085e4) list_single_idle_plugin_calendar_pane

0x85ed,	// (0x000085ed) list_single_idle_plugin_notification_pane

0x85f6,	// (0x000085f6) list_single_idle_plugin_player_pane

0xde2b,	// (0x0000de2b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xde2b,	// (0x0000de2b) list_single_idle_plugin_shortcut_pane

0xde53,	// (0x0000de53) main_idle_act4_pane_t1

0xde69,	// (0x0000de69) main_idle_act4_pane_t2

0x0001,

0xf2e8,	// (0x0000f2e8) main_idle_act4_pane_t

0xde7f,	// (0x0000de7f) middle_sk_idle_act4_pane_ParamLimits

0xde7f,	// (0x0000de7f) middle_sk_idle_act4_pane

0xde9b,	// (0x0000de9b) popup_clock_digital_analogue_window_cp2

0xdec3,	// (0x0000dec3) shortcut_wheel_idle_act4_pane_ParamLimits

0xdec3,	// (0x0000dec3) shortcut_wheel_idle_act4_pane

0x6429,	// (0x00006429) shortcut_wheel_idle_act4_pane_g1

0x6429,	// (0x00006429) shortcut_wheel_idle_act4_pane_g2

0x6429,	// (0x00006429) shortcut_wheel_idle_act4_pane_g3

0x6429,	// (0x00006429) shortcut_wheel_idle_act4_pane_g4

0x6429,	// (0x00006429) shortcut_wheel_idle_act4_pane_g5

0x8689,	// (0x00008689) shortcut_wheel_idle_act4_pane_g6

0x8691,	// (0x00008691) shortcut_wheel_idle_act4_pane_g7

0x8699,	// (0x00008699) shortcut_wheel_idle_act4_pane_g8

0x86a1,	// (0x000086a1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xadea,	// (0x0000adea) shortcut_wheel_idle_act4_pane_g

0x654e,	// (0x0000654e) middle_sk_idle_act4_pane_g1_ParamLimits

0x654e,	// (0x0000654e) middle_sk_idle_act4_pane_g1

0xdf40,	// (0x0000df40) middle_sk_idle_act4_pane_g2_ParamLimits

0xdf40,	// (0x0000df40) middle_sk_idle_act4_pane_g2

0x0001,

0xf2fd,	// (0x0000f2fd) middle_sk_idle_act4_pane_g_ParamLimits

0xf2fd,	// (0x0000f2fd) middle_sk_idle_act4_pane_g

0xdf58,	// (0x0000df58) middle_sk_idle_act4_pane_t1_ParamLimits

0xdf58,	// (0x0000df58) middle_sk_idle_act4_pane_t1

0xdf87,	// (0x0000df87) grid_ai_shortcut_pane_ParamLimits

0xdf87,	// (0x0000df87) grid_ai_shortcut_pane

0xdfa4,	// (0x0000dfa4) list_highlight_pane_cp16_ParamLimits

0xdfa4,	// (0x0000dfa4) list_highlight_pane_cp16

0xdfb1,	// (0x0000dfb1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdfb1,	// (0x0000dfb1) list_single_idle_plugin_shortcut_pane_g1

0xdfbd,	// (0x0000dfbd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdfbd,	// (0x0000dfbd) list_single_idle_plugin_shortcut_pane_g2

0xdfd9,	// (0x0000dfd9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdfd9,	// (0x0000dfd9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf302,	// (0x0000f302) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf302,	// (0x0000f302) list_single_idle_plugin_shortcut_pane_g

0xdfee,	// (0x0000dfee) cell_ai_shortcut_pane_ParamLimits

0xdfee,	// (0x0000dfee) cell_ai_shortcut_pane

0xe004,	// (0x0000e004) cell_ai_shortcut_pane_g1_ParamLimits

0xe004,	// (0x0000e004) cell_ai_shortcut_pane_g1

0x85dc,	// (0x000085dc) ai_gene_pane_1_cp2

0x87d1,	// (0x000087d1) ai_gene_pane_2_cp2

0x87d9,	// (0x000087d9) list_highlight_pane_cp15

0x87e2,	// (0x000087e2) list_single_idle_plugin_calendar_pane_g1

0x87d9,	// (0x000087d9) list_highlight_pane_cp17

0x87ea,	// (0x000087ea) list_single_idle_plugin_calendar_pane_g1_copy1

0x87f2,	// (0x000087f2) list_single_idle_plugin_player_pane_g1

0x5555,	// (0x00005555) list_single_idle_plugin_player_pane_g2

0x0001,

0xae19,	// (0x0000ae19) list_single_idle_plugin_player_pane_g

0x87fa,	// (0x000087fa) list_single_idle_plugin_player_pane_t1

0x8808,	// (0x00008808) list_single_idle_plugin_player_pane_t2

0x8816,	// (0x00008816) list_single_idle_plugin_player_pane_t3

0x8824,	// (0x00008824) list_single_idle_plugin_player_pane_t4

0x0003,

0xae1e,	// (0x0000ae1e) list_single_idle_plugin_player_pane_t

0x8832,	// (0x00008832) wait_bar_pane_cp15

0x883a,	// (0x0000883a) grid_ai_notification_pane

0x5555,	// (0x00005555) list_single_idle_plugin_notification_pane_g1

0xe026,	// (0x0000e026) cell_ai_notification_pane_ParamLimits

0xe026,	// (0x0000e026) cell_ai_notification_pane

0x8850,	// (0x00008850) cell_ai_notification_pane_g1

0x8858,	// (0x00008858) cell_ai_notification_pane_t1

0xe033,	// (0x0000e033) tb_ext_find_button_pane

0xe03b,	// (0x0000e03b) tb_ext_find_pane_g1

0xe043,	// (0x0000e043) tb_ext_find_pane_t1

0x1d1b,	// (0x00001d1b) tb_ext_find_button_pane_g1

0x8884,	// (0x00008884) tb_ext_find_button_pane_g2

0x0001,

0xae27,	// (0x0000ae27) tb_ext_find_button_pane_g

0xde53,	// (0x0000de53) main_idle_act4_pane_t1_ParamLimits

0xde69,	// (0x0000de69) main_idle_act4_pane_t2_ParamLimits

0xf2e8,	// (0x0000f2e8) main_idle_act4_pane_t_ParamLimits

0xde9b,	// (0x0000de9b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdeb3,	// (0x0000deb3) sat_plugin_idle_act4_pane_ParamLimits

0xdeb3,	// (0x0000deb3) sat_plugin_idle_act4_pane

0xe051,	// (0x0000e051) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe051,	// (0x0000e051) sat_plugin_idle_act4_pane_t1

0xe069,	// (0x0000e069) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe069,	// (0x0000e069) sat_plugin_idle_act4_pane_t2

0xe081,	// (0x0000e081) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe081,	// (0x0000e081) sat_plugin_idle_act4_pane_t3

0xe099,	// (0x0000e099) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe099,	// (0x0000e099) sat_plugin_idle_act4_pane_t4

0x0003,

0xf309,	// (0x0000f309) sat_plugin_idle_act4_pane_t_ParamLimits

0xf309,	// (0x0000f309) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x88d9,	// (0x000088d9) popup_battery_window_g1_ParamLimits

0x88d9,	// (0x000088d9) popup_battery_window_g1

0x88e5,	// (0x000088e5) popup_battery_window_t1_ParamLimits

0x88e5,	// (0x000088e5) popup_battery_window_t1

0x88f7,	// (0x000088f7) popup_battery_window_t2_ParamLimits

0x88f7,	// (0x000088f7) popup_battery_window_t2

0x0001,

0xae35,	// (0x0000ae35) popup_battery_window_t_ParamLimits

0xae35,	// (0x0000ae35) popup_battery_window_t

0xbd55,	// (0x0000bd55) midp_canvas_pane_ParamLimits

0xbdb0,	// (0x0000bdb0) midp_keypad_pane_ParamLimits

0xbdb0,	// (0x0000bdb0) midp_keypad_pane

0x2b1e,	// (0x00002b1e) main_midp_pane_ParamLimits

0x5e3a,	// (0x00005e3a) signal_pane_g2_cp_ParamLimits

0xe0b1,	// (0x0000e0b1) aid_size_cell_midp_keypad_ParamLimits

0xe0b1,	// (0x0000e0b1) aid_size_cell_midp_keypad

0xe0cf,	// (0x0000e0cf) midp_keyp_game_grid_pane_ParamLimits

0xe0cf,	// (0x0000e0cf) midp_keyp_game_grid_pane

0xe0f6,	// (0x0000e0f6) midp_keyp_rocker_pane_ParamLimits

0xe0f6,	// (0x0000e0f6) midp_keyp_rocker_pane

0xe14f,	// (0x0000e14f) midp_keyp_sk_left_pane_ParamLimits

0xe14f,	// (0x0000e14f) midp_keyp_sk_left_pane

0xe1a3,	// (0x0000e1a3) midp_keyp_sk_right_pane_ParamLimits

0xe1a3,	// (0x0000e1a3) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe1f7,	// (0x0000e1f7) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe1f7,	// (0x0000e1f7) midp_keyp_sk_right_pane_g1

0x6429,	// (0x00006429) midp_keyp_rocker_pane_g1

0xe200,	// (0x0000e200) keyp_game_cell_pane_ParamLimits

0xe200,	// (0x0000e200) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe224,	// (0x0000e224) keyp_game_cell_pane_g1

0xb09b,	// (0x0000b09b) popup_fep_vkb2_window_ParamLimits

0xb09b,	// (0x0000b09b) popup_fep_vkb2_window

0xe22d,	// (0x0000e22d) aid_size_cell_vkb2_ParamLimits

0xe22d,	// (0x0000e22d) aid_size_cell_vkb2

0xe263,	// (0x0000e263) popup_fep_vkb2_window_g1_ParamLimits

0xe263,	// (0x0000e263) popup_fep_vkb2_window_g1

0xe2b3,	// (0x0000e2b3) vkb2_area_bottom_pane_ParamLimits

0xe2b3,	// (0x0000e2b3) vkb2_area_bottom_pane

0xe307,	// (0x0000e307) vkb2_area_keypad_pane_ParamLimits

0xe307,	// (0x0000e307) vkb2_area_keypad_pane

0xe34f,	// (0x0000e34f) vkb2_area_top_pane_ParamLimits

0xe34f,	// (0x0000e34f) vkb2_area_top_pane

0xe3d5,	// (0x0000e3d5) vkb2_top_entry_pane_ParamLimits

0xe3d5,	// (0x0000e3d5) vkb2_top_entry_pane

0xe402,	// (0x0000e402) vkb2_top_grid_left_pane_ParamLimits

0xe402,	// (0x0000e402) vkb2_top_grid_left_pane

0xe422,	// (0x0000e422) vkb2_top_grid_right_pane_ParamLimits

0xe422,	// (0x0000e422) vkb2_top_grid_right_pane

0x8c78,	// (0x00008c78) vkb2_cell_keypad_pane_ParamLimits

0x8c78,	// (0x00008c78) vkb2_cell_keypad_pane

0xe468,	// (0x0000e468) vkb2_area_bottom_grid_pane_ParamLimits

0xe468,	// (0x0000e468) vkb2_area_bottom_grid_pane

0xe492,	// (0x0000e492) vkb2_area_bottom_pane_g1_ParamLimits

0xe492,	// (0x0000e492) vkb2_area_bottom_pane_g1

0xe4b8,	// (0x0000e4b8) vkb2_area_bottom_pane_g2_ParamLimits

0xe4b8,	// (0x0000e4b8) vkb2_area_bottom_pane_g2

0xe4e9,	// (0x0000e4e9) vkb2_area_bottom_pane_g3_ParamLimits

0xe4e9,	// (0x0000e4e9) vkb2_area_bottom_pane_g3

0x0002,

0xf312,	// (0x0000f312) vkb2_area_bottom_pane_g_ParamLimits

0xf312,	// (0x0000f312) vkb2_area_bottom_pane_g

0x8e22,	// (0x00008e22) vkb2_top_cell_left_pane_ParamLimits

0x8e22,	// (0x00008e22) vkb2_top_cell_left_pane

0xe553,	// (0x0000e553) vkb2_top_entry_pane_g1_ParamLimits

0xe553,	// (0x0000e553) vkb2_top_entry_pane_g1

0xe561,	// (0x0000e561) vkb2_top_entry_pane_t1_ParamLimits

0xe561,	// (0x0000e561) vkb2_top_entry_pane_t1

0x8e8a,	// (0x00008e8a) vkb2_top_entry_pane_t2_ParamLimits

0x8e8a,	// (0x00008e8a) vkb2_top_entry_pane_t2

0x8ebc,	// (0x00008ebc) vkb2_top_entry_pane_t3_ParamLimits

0x8ebc,	// (0x00008ebc) vkb2_top_entry_pane_t3

0x0002,

0xf319,	// (0x0000f319) vkb2_top_entry_pane_t_ParamLimits

0xf319,	// (0x0000f319) vkb2_top_entry_pane_t

0xe59a,	// (0x0000e59a) vkb2_top_grid_right_pane_g1_ParamLimits

0xe59a,	// (0x0000e59a) vkb2_top_grid_right_pane_g1

0x8f15,	// (0x00008f15) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f15,	// (0x00008f15) vkb2_top_grid_right_pane_g2

0x8f2d,	// (0x00008f2d) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f2d,	// (0x00008f2d) vkb2_top_grid_right_pane_g3

0xe5b0,	// (0x0000e5b0) vkb2_top_grid_right_pane_g4_ParamLimits

0xe5b0,	// (0x0000e5b0) vkb2_top_grid_right_pane_g4

0x0003,

0xf320,	// (0x0000f320) vkb2_top_grid_right_pane_g_ParamLimits

0xf320,	// (0x0000f320) vkb2_top_grid_right_pane_g

0x8f5b,	// (0x00008f5b) vkb2_top_cell_left_pane_g1

0x8f72,	// (0x00008f72) vkb2_cell_keypad_pane_g1_ParamLimits

0x8f72,	// (0x00008f72) vkb2_cell_keypad_pane_g1

0x8f80,	// (0x00008f80) vkb2_cell_keypad_pane_t1_ParamLimits

0x8f80,	// (0x00008f80) vkb2_cell_keypad_pane_t1

0x8f97,	// (0x00008f97) vkb2_cell_bottom_grid_pane_ParamLimits

0x8f97,	// (0x00008f97) vkb2_cell_bottom_grid_pane

0x8fd0,	// (0x00008fd0) vkb2_cell_bottom_grid_pane_g1

0xdee4,	// (0x0000dee4) aid_call2_pane_cp02

0xdeec,	// (0x0000deec) aid_call_pane_cp02

0xdef4,	// (0x0000def4) clock_digital_number_pane_cp10

0xdefc,	// (0x0000defc) clock_digital_number_pane_cp11

0xdf04,	// (0x0000df04) clock_digital_number_pane_cp12

0xdf0c,	// (0x0000df0c) clock_digital_number_pane_cp13

0xdf14,	// (0x0000df14) clock_digital_separator_pane_cp10

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g1

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g2

0xdf1c,	// (0x0000df1c) popup_clock_digital_analogue_window_cp2_g3

0x1d1b,	// (0x00001d1b) popup_clock_digital_analogue_window_cp2_g4

0xdf1c,	// (0x0000df1c) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf2ed,	// (0x0000f2ed) popup_clock_digital_analogue_window_cp2_g

0xdf24,	// (0x0000df24) popup_clock_digital_analogue_window_cp2_t1

0xdf32,	// (0x0000df32) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf2f8,	// (0x0000f2f8) popup_clock_digital_analogue_window_cp2_t

0x6429,	// (0x00006429) clock_digital_number_pane_cp10_g1

0x6429,	// (0x00006429) clock_digital_number_pane_cp10_g2

0x0001,

0xabf0,	// (0x0000abf0) clock_digital_number_pane_cp10_g

0x6429,	// (0x00006429) clock_digital_separator_pane_cp10_g1

0x6429,	// (0x00006429) clock_digital_separator_pane_cp10_g2

0x0001,

0xabf0,	// (0x0000abf0) clock_digital_separator_pane_cp10_g

0x8525,	// (0x00008525) uniindi_top_pane_g3

0x8536,	// (0x00008536) uniindi_top_pane_g4

0x8d03,	// (0x00008d03) vkb2_row_keypad_pane_ParamLimits

0x8d03,	// (0x00008d03) vkb2_row_keypad_pane

0x8fec,	// (0x00008fec) vkb2_cell_t_keypad_pane_ParamLimits

0x8fec,	// (0x00008fec) vkb2_cell_t_keypad_pane

0x8ffc,	// (0x00008ffc) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8ffc,	// (0x00008ffc) vkb2_cell_t_keypad_pane_cp08

0x900f,	// (0x0000900f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x900f,	// (0x0000900f) vkb2_cell_t_keypad_pane_cp09

0x9023,	// (0x00009023) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9023,	// (0x00009023) vkb2_cell_t_keypad_pane_cp01

0x9034,	// (0x00009034) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9034,	// (0x00009034) vkb2_cell_t_keypad_pane_cp02

0x9045,	// (0x00009045) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9045,	// (0x00009045) vkb2_cell_t_keypad_pane_cp03

0x9056,	// (0x00009056) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9056,	// (0x00009056) vkb2_cell_t_keypad_pane_cp04

0x9067,	// (0x00009067) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9067,	// (0x00009067) vkb2_cell_t_keypad_pane_cp05

0x9078,	// (0x00009078) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x9078,	// (0x00009078) vkb2_cell_t_keypad_pane_cp06

0x9089,	// (0x00009089) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x9089,	// (0x00009089) vkb2_cell_t_keypad_pane_cp07

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x909a,	// (0x0000909a) vkb2_cell_t_keypad_pane_cp10

0x68cf,	// (0x000068cf) vkb2_cell_t_keypad_pane_g1

0x90af,	// (0x000090af) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe5c6,	// (0x0000e5c6) aid_size_cell_graphic2_ParamLimits

0xe5c6,	// (0x0000e5c6) aid_size_cell_graphic2

0x3e6e,	// (0x00003e6e) bg_popup_window_pane_cp21_ParamLimits

0x3e6e,	// (0x00003e6e) bg_popup_window_pane_cp21

0xe5f8,	// (0x0000e5f8) graphic2_pages_pane_ParamLimits

0xe5f8,	// (0x0000e5f8) graphic2_pages_pane

0xe64e,	// (0x0000e64e) grid_graphic2_control_pane_ParamLimits

0xe64e,	// (0x0000e64e) grid_graphic2_control_pane

0xe682,	// (0x0000e682) grid_graphic2_pane_ParamLimits

0xe682,	// (0x0000e682) grid_graphic2_pane

0xe6f5,	// (0x0000e6f5) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7c6d,	// (0x00007c6d) list_ai3_gene_pane_ParamLimits

0xdbc0,	// (0x0000dbc0) bg_popup_window_pane_cp19_ParamLimits

0x80a6,	// (0x000080a6) bg_touch_area_indi_pane_ParamLimits

0x80a6,	// (0x000080a6) bg_touch_area_indi_pane

0x80bc,	// (0x000080bc) bg_touch_area_indi_pane_cp01_ParamLimits

0x80bc,	// (0x000080bc) bg_touch_area_indi_pane_cp01

0x80d2,	// (0x000080d2) bg_touch_area_indi_pane_cp02_ParamLimits

0x80d2,	// (0x000080d2) bg_touch_area_indi_pane_cp02

0x80ea,	// (0x000080ea) bg_touch_area_indi_pane_cp03_ParamLimits

0x80ea,	// (0x000080ea) bg_touch_area_indi_pane_cp03

0x8104,	// (0x00008104) popup_slider_window_g1_ParamLimits

0x8120,	// (0x00008120) popup_slider_window_g2_ParamLimits

0x813c,	// (0x0000813c) popup_slider_window_g3_ParamLimits

0xf2d1,	// (0x0000f2d1) popup_slider_window_g_ParamLimits

0x8198,	// (0x00008198) popup_slider_window_t1_ParamLimits

0x820c,	// (0x0000820c) small_volume_slider_vertical_pane_ParamLimits

0xe6f5,	// (0x0000e6f5) cell_graphic2_pane_ParamLimits

0xe750,	// (0x0000e750) bg_button_pane_cp10_ParamLimits

0xe750,	// (0x0000e750) bg_button_pane_cp10

0xe763,	// (0x0000e763) bg_button_pane_cp11_ParamLimits

0xe763,	// (0x0000e763) bg_button_pane_cp11

0xe776,	// (0x0000e776) graphic2_pages_pane_g1_ParamLimits

0xe776,	// (0x0000e776) graphic2_pages_pane_g1

0xe791,	// (0x0000e791) graphic2_pages_pane_g2_ParamLimits

0xe791,	// (0x0000e791) graphic2_pages_pane_g2

0x0001,

0xf32e,	// (0x0000f32e) graphic2_pages_pane_g_ParamLimits

0xf32e,	// (0x0000f32e) graphic2_pages_pane_g

0xe7a9,	// (0x0000e7a9) graphic2_pages_pane_t1_ParamLimits

0xe7a9,	// (0x0000e7a9) graphic2_pages_pane_t1

0xe7c1,	// (0x0000e7c1) cell_graphic2_control_pane_ParamLimits

0xe7c1,	// (0x0000e7c1) cell_graphic2_control_pane

0xe7db,	// (0x0000e7db) cell_graphic2_pane_g1_ParamLimits

0xe7db,	// (0x0000e7db) cell_graphic2_pane_g1

0x66e9,	// (0x000066e9) cell_graphic2_pane_g2_ParamLimits

0x66e9,	// (0x000066e9) cell_graphic2_pane_g2

0xe7e8,	// (0x0000e7e8) cell_graphic2_pane_g3_ParamLimits

0xe7e8,	// (0x0000e7e8) cell_graphic2_pane_g3

0x66f6,	// (0x000066f6) cell_graphic2_pane_g4_ParamLimits

0x66f6,	// (0x000066f6) cell_graphic2_pane_g4

0xe7f5,	// (0x0000e7f5) cell_graphic2_pane_g5_ParamLimits

0xe7f5,	// (0x0000e7f5) cell_graphic2_pane_g5

0x0004,

0xf333,	// (0x0000f333) cell_graphic2_pane_g_ParamLimits

0xf333,	// (0x0000f333) cell_graphic2_pane_g

0xe815,	// (0x0000e815) cell_graphic2_pane_t1_ParamLimits

0xe815,	// (0x0000e815) cell_graphic2_pane_t1

0x4635,	// (0x00004635) grid_highlight_pane_cp11_ParamLimits

0x4635,	// (0x00004635) grid_highlight_pane_cp11

0x1375,	// (0x00001375) bg_button_pane_cp05

0xe82c,	// (0x0000e82c) cell_graphic2_control_pane_g1

0x6429,	// (0x00006429) bg_touch_area_indi_pane_g1

0x930d,	// (0x0000930d) aid_cmod_rocker_key_size

0x9317,	// (0x00009317) aid_cmode_itu_key_size

0x9321,	// (0x00009321) main_cmode_video_pane

0x932b,	// (0x0000932b) main_comp_mode_itu_pane

0x9337,	// (0x00009337) main_comp_mode_rocker_pane

0x9343,	// (0x00009343) cell_cmode_rocker_pane_ParamLimits

0x9343,	// (0x00009343) cell_cmode_rocker_pane

0x9355,	// (0x00009355) cell_cmode_itu_pane_ParamLimits

0x9355,	// (0x00009355) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x68cf,	// (0x000068cf) cell_cmode_rocker_pane_g1_ParamLimits

0x68cf,	// (0x000068cf) cell_cmode_rocker_pane_g1

0x8385,	// (0x00008385) cell_cmode_rocker_pane_g2_ParamLimits

0x8385,	// (0x00008385) cell_cmode_rocker_pane_g2

0x0001,

0xae66,	// (0x0000ae66) cell_cmode_rocker_pane_g_ParamLimits

0xae66,	// (0x0000ae66) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x936a,	// (0x0000936a) cell_cmode_itu_pane_g1

0x9373,	// (0x00009373) cell_cmode_itu_pane_t1

0x9381,	// (0x00009381) cell_cmode_itu_pane_t2

0x0001,

0xae6b,	// (0x0000ae6b) cell_cmode_itu_pane_t

0x85a8,	// (0x000085a8) aid_touch_ctrl_left

0x85b0,	// (0x000085b0) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe839,	// (0x0000e839) aid_cmod_rocker_key_size_cp

0xe843,	// (0x0000e843) aid_cmode_itu_key_size_cp

0x93a3,	// (0x000093a3) compa_mode_pane_g1

0x93ab,	// (0x000093ab) compa_mode_pane_g2

0x93b3,	// (0x000093b3) compa_mode_pane_g3

0x0002,

0xae70,	// (0x0000ae70) compa_mode_pane_g

0xe84d,	// (0x0000e84d) main_comp_mode_itu_pane_cp

0xe855,	// (0x0000e855) main_comp_mode_rocker_pane_cp

0xe85d,	// (0x0000e85d) cell_cmode_itu_pane_cp_ParamLimits

0xe85d,	// (0x0000e85d) cell_cmode_itu_pane_cp

0xe872,	// (0x0000e872) cell_cmode_rocker_pane_cp_ParamLimits

0xe872,	// (0x0000e872) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x68cf,	// (0x000068cf) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x68cf,	// (0x000068cf) cell_cmode_rocker_pane_g1_cp

0x6429,	// (0x00006429) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe884,	// (0x0000e884) cell_cmode_itu_pane_g1_cp

0xe88d,	// (0x0000e88d) cell_cmode_itu_pane_t1_cp

0xe88d,	// (0x0000e88d) cell_cmode_itu_pane_t2_cp

0xcfa5,	// (0x0000cfa5) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x64a7,	// (0x000064a7) fep_hwr_aid_pane_ParamLimits

0x8288,	// (0x00008288) aid_touch_sctrl_top_ParamLimits

0x8295,	// (0x00008295) sctrl_sk_top_pane_g1_ParamLimits

0x68cf,	// (0x000068cf) sctrl_sk_top_pane_g2_ParamLimits

0xadab,	// (0x0000adab) sctrl_sk_top_pane_g_ParamLimits

0x82a2,	// (0x000082a2) sctrl_sk_top_pane_t1_ParamLimits

0x8288,	// (0x00008288) aid_touch_sctrl_bottom_ParamLimits

0x82a2,	// (0x000082a2) sctrl_sk_bottom_pane_t1_ParamLimits

0x84f1,	// (0x000084f1) aid_area_touch_clock

0xe397,	// (0x0000e397) aid_vkb2_area_top_pane_cell_ParamLimits

0xe397,	// (0x0000e397) aid_vkb2_area_top_pane_cell

0xe442,	// (0x0000e442) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe442,	// (0x0000e442) aid_vkb2_area_bottom_pane_cell

0x8e42,	// (0x00008e42) popup_char_count_window

0x9400,	// (0x00009400) popup_char_count_window_g1

0x9409,	// (0x00009409) popup_char_count_window_g2

0x9412,	// (0x00009412) popup_char_count_window_g3

0x0002,

0xae77,	// (0x0000ae77) popup_char_count_window_g

0x941b,	// (0x0000941b) popup_char_count_window_t1

0x8aa0,	// (0x00008aa0) popup_fep_char_preview_window_ParamLimits

0x8aa0,	// (0x00008aa0) popup_fep_char_preview_window

0xe3b7,	// (0x0000e3b7) vkb2_top_candi_pane_ParamLimits

0xe3b7,	// (0x0000e3b7) vkb2_top_candi_pane

0xe89b,	// (0x0000e89b) cell_vkb2_top_candi_pane_ParamLimits

0xe89b,	// (0x0000e89b) cell_vkb2_top_candi_pane

0x3e6e,	// (0x00003e6e) bg_popup_fep_char_preview_window_ParamLimits

0x3e6e,	// (0x00003e6e) bg_popup_fep_char_preview_window

0x9476,	// (0x00009476) popup_fep_char_preview_window_t1_ParamLimits

0x9476,	// (0x00009476) popup_fep_char_preview_window_t1

0x94b0,	// (0x000094b0) bg_popup_fep_char_preview_window_g1

0x94b8,	// (0x000094b8) bg_popup_fep_char_preview_window_g2

0x94c0,	// (0x000094c0) bg_popup_fep_char_preview_window_g3

0x94c8,	// (0x000094c8) bg_popup_fep_char_preview_window_g4

0x94d0,	// (0x000094d0) bg_popup_fep_char_preview_window_g5

0x94d8,	// (0x000094d8) bg_popup_fep_char_preview_window_g6

0x94e0,	// (0x000094e0) bg_popup_fep_char_preview_window_g7

0x94e8,	// (0x000094e8) bg_popup_fep_char_preview_window_g8

0x94f0,	// (0x000094f0) bg_popup_fep_char_preview_window_g9

0x0008,

0xae7e,	// (0x0000ae7e) bg_popup_fep_char_preview_window_g

0x68cf,	// (0x000068cf) cell_vkb2_top_candi_pane_g1_ParamLimits

0x68cf,	// (0x000068cf) cell_vkb2_top_candi_pane_g1

0x6c3a,	// (0x00006c3a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c3a,	// (0x00006c3a) cell_vkb2_top_candi_pane_g2

0x6c5b,	// (0x00006c5b) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6c5b,	// (0x00006c5b) cell_vkb2_top_candi_pane_g3

0x94f8,	// (0x000094f8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x94f8,	// (0x000094f8) cell_vkb2_top_candi_pane_g4

0x9519,	// (0x00009519) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9519,	// (0x00009519) cell_vkb2_top_candi_pane_g5

0x8385,	// (0x00008385) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8385,	// (0x00008385) cell_vkb2_top_candi_pane_g6

0x0005,

0xae91,	// (0x0000ae91) cell_vkb2_top_candi_pane_g_ParamLimits

0xae91,	// (0x0000ae91) cell_vkb2_top_candi_pane_g

0x953a,	// (0x0000953a) cell_vkb2_top_candi_pane_t1

0x4d74,	// (0x00004d74) aid_size_touch_slider_mark_ParamLimits

0x4d74,	// (0x00004d74) aid_size_touch_slider_mark

0xe634,	// (0x0000e634) grid_graphic2_catg_pane_ParamLimits

0xe634,	// (0x0000e634) grid_graphic2_catg_pane

0xe6c8,	// (0x0000e6c8) popup_grid_graphic2_window_t1_ParamLimits

0xe6c8,	// (0x0000e6c8) popup_grid_graphic2_window_t1

0xe6de,	// (0x0000e6de) popup_grid_graphic2_window_t2_ParamLimits

0xe6de,	// (0x0000e6de) popup_grid_graphic2_window_t2

0x0001,

0xf329,	// (0x0000f329) popup_grid_graphic2_window_t_ParamLimits

0xf329,	// (0x0000f329) popup_grid_graphic2_window_t

0x1375,	// (0x00001375) bg_button_pane_cp05_ParamLimits

0xe82c,	// (0x0000e82c) cell_graphic2_control_pane_g1_ParamLimits

0xe901,	// (0x0000e901) cell_graphic2_catg_pane_ParamLimits

0xe901,	// (0x0000e901) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xe913,	// (0x0000e913) cell_graphic2_catg_pane_g1

0x84bd,	// (0x000084bd) cell_tb_ext_pane_t1_ParamLimits

0x8ed2,	// (0x00008ed2) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ed2,	// (0x00008ed2) vkb2_top_cell_right_narrow_pane

0x8eea,	// (0x00008eea) vkb2_top_cell_right_wide_pane_ParamLimits

0x8eea,	// (0x00008eea) vkb2_top_cell_right_wide_pane

0x6499,	// (0x00006499) bg_vkb2_func_pane_ParamLimits

0x6499,	// (0x00006499) bg_vkb2_func_pane

0x8f5b,	// (0x00008f5b) vkb2_top_cell_left_pane_g1_ParamLimits

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp03

0x8fd0,	// (0x00008fd0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3676,	// (0x00003676) bg_vkb2_func_pane_g1

0x367e,	// (0x0000367e) bg_vkb2_func_pane_g2

0x368e,	// (0x0000368e) bg_vkb2_func_pane_g3

0x3686,	// (0x00003686) bg_vkb2_func_pane_g4

0x3696,	// (0x00003696) bg_vkb2_func_pane_g5

0x369e,	// (0x0000369e) bg_vkb2_func_pane_g6

0x36a6,	// (0x000036a6) bg_vkb2_func_pane_g7

0x36ae,	// (0x000036ae) bg_vkb2_func_pane_g8

0x366e,	// (0x0000366e) bg_vkb2_func_pane_g9

0x0008,

0xae9e,	// (0x0000ae9e) bg_vkb2_func_pane_g

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp01

0x8f5b,	// (0x00008f5b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f5b,	// (0x00008f5b) vkb2_top_cell_right_wide_pane_g1

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6499,	// (0x00006499) bg_vkb2_fuc_pane_cp02

0x8fd0,	// (0x00008fd0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8fd0,	// (0x00008fd0) vkb2_top_cell_right_narrow_pane_g1

0xdb00,	// (0x0000db00) aid_touch_area_decrease_ParamLimits

0xdb00,	// (0x0000db00) aid_touch_area_decrease

0xdb34,	// (0x0000db34) aid_touch_area_increase_ParamLimits

0xdb34,	// (0x0000db34) aid_touch_area_increase

0xdb5c,	// (0x0000db5c) aid_touch_area_mute_ParamLimits

0xdb5c,	// (0x0000db5c) aid_touch_area_mute

0xdb8c,	// (0x0000db8c) aid_touch_area_slider_ParamLimits

0xdb8c,	// (0x0000db8c) aid_touch_area_slider

0xdbcc,	// (0x0000dbcc) popup_slider_window_g4_ParamLimits

0xdbcc,	// (0x0000dbcc) popup_slider_window_g4

0xdbf4,	// (0x0000dbf4) popup_slider_window_g5_ParamLimits

0xdbf4,	// (0x0000dbf4) popup_slider_window_g5

0xdc28,	// (0x0000dc28) popup_slider_window_g6_ParamLimits

0xdc28,	// (0x0000dc28) popup_slider_window_g6

0x81c6,	// (0x000081c6) popup_slider_window_t2_ParamLimits

0x81c6,	// (0x000081c6) popup_slider_window_t2

0x0001,

0xad9f,	// (0x0000ad9f) popup_slider_window_t_ParamLimits

0xad9f,	// (0x0000ad9f) popup_slider_window_t

0xdc44,	// (0x0000dc44) slider_pane_ParamLimits

0xdc44,	// (0x0000dc44) slider_pane

0x9574,	// (0x00009574) slider_pane_g1_ParamLimits

0x9574,	// (0x00009574) slider_pane_g1

0x9588,	// (0x00009588) slider_pane_g2_ParamLimits

0x9588,	// (0x00009588) slider_pane_g2

0x959e,	// (0x0000959e) slider_pane_g3_ParamLimits

0x959e,	// (0x0000959e) slider_pane_g3

0x0003,

0xaeb1,	// (0x0000aeb1) slider_pane_g_ParamLimits

0xaeb1,	// (0x0000aeb1) slider_pane_g

0xc589,	// (0x0000c589) popup_tb_float_extension_window_ParamLimits

0xc589,	// (0x0000c589) popup_tb_float_extension_window

0x95ca,	// (0x000095ca) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x95d6,	// (0x000095d6) grid_tb_float_ext_pane

0x95e0,	// (0x000095e0) cell_tb_float_ext_pane_ParamLimits

0x95e0,	// (0x000095e0) cell_tb_float_ext_pane

0x95fa,	// (0x000095fa) cell_tb_float_ext_pane_g1

0x9603,	// (0x00009603) grid_highlight_pane_cp12

0xd3e2,	// (0x0000d3e2) cell_last_hwr_side_pane_ParamLimits

0xd3e2,	// (0x0000d3e2) cell_last_hwr_side_pane

0x6429,	// (0x00006429) cell_last_hwr_side_pane_g1

0x960c,	// (0x0000960c) cell_last_hwr_side_pane_g2

0x0001,

0xaeba,	// (0x0000aeba) cell_last_hwr_side_pane_g

0xe51e,	// (0x0000e51e) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe51e,	// (0x0000e51e) vkb2_area_bottom_space_btn_pane

0x68cf,	// (0x000068cf) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x90af,	// (0x000090af) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x953a,	// (0x0000953a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9615,	// (0x00009615) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9615,	// (0x00009615) vkb2_area_bottom_space_btn_pane_g1

0x964f,	// (0x0000964f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x964f,	// (0x0000964f) vkb2_area_bottom_space_btn_pane_g2

0x9685,	// (0x00009685) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9685,	// (0x00009685) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xaebf,	// (0x0000aebf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xaebf,	// (0x0000aebf) vkb2_area_bottom_space_btn_pane_g

0x655c,	// (0x0000655c) cel_fep_hwr_func_pane_ParamLimits

0x655c,	// (0x0000655c) cel_fep_hwr_func_pane

0xd3b7,	// (0x0000d3b7) cell_hwr_side_button_pane_ParamLimits

0xd3b7,	// (0x0000d3b7) cell_hwr_side_button_pane

0x84f1,	// (0x000084f1) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x8503,	// (0x00008503) uniindi_top_pane_g1_ParamLimits

0x8519,	// (0x00008519) uniindi_top_pane_g2_ParamLimits

0x8525,	// (0x00008525) uniindi_top_pane_g3_ParamLimits

0x8536,	// (0x00008536) uniindi_top_pane_g4_ParamLimits

0xadd7,	// (0x0000add7) uniindi_top_pane_g_ParamLimits

0x8543,	// (0x00008543) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x96cf,	// (0x000096cf) cel_fep_hwr_func_pane_g1_ParamLimits

0x96cf,	// (0x000096cf) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x96cf,	// (0x000096cf) cell_hwr_side_button_pane_g1_ParamLimits

0x96cf,	// (0x000096cf) cell_hwr_side_button_pane_g1

0x343d,	// (0x0000343d) status_pane_g4_ParamLimits

0x343d,	// (0x0000343d) status_pane_g4

0x3457,	// (0x00003457) status_pane_t1

0x6162,	// (0x00006162) form2_midp_gauge_slider_cont_pane

0x616a,	// (0x0000616a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd302,	// (0x0000d302) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd314,	// (0x0000d314) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf27a,	// (0x0000f27a) form2_midp_gauge_slider_pane_t_ParamLimits

0x61a0,	// (0x000061a0) form2_midp_slider_pane_ParamLimits

0x8a60,	// (0x00008a60) aid_size_cell_func_vkb2_ParamLimits

0x8a60,	// (0x00008a60) aid_size_cell_func_vkb2

0x95b6,	// (0x000095b6) slider_pane_g4_ParamLimits

0x95b6,	// (0x000095b6) slider_pane_g4

0xe91c,	// (0x0000e91c) form2_midp_gauge_slider_pane_t2_cp01

0xe92a,	// (0x0000e92a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe92a,	// (0x0000e92a) form2_midp_gauge_slider_pane_t3_cp01

0x9708,	// (0x00009708) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x973c,	// (0x0000973c) navi_smil_pane_g1

0x9744,	// (0x00009744) navi_smil_pane_t1

0x9711,	// (0x00009711) form2_midp_slider_pane_g1

0x971a,	// (0x0000971a) form2_midp_slider_pane_g2

0x9722,	// (0x00009722) form2_midp_slider_pane_g3

0x9711,	// (0x00009711) form2_midp_slider_pane_g4

0xe947,	// (0x0000e947) form2_midp_slider_pane_g5

0x0004,

0xf33e,	// (0x0000f33e) form2_midp_slider_pane_g

0x96bf,	// (0x000096bf) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x96bf,	// (0x000096bf) vkb2_area_bottom_space_btn_pane_g4

0xc765,	// (0x0000c765) lc0_navi_pane_ParamLimits

0xc765,	// (0x0000c765) lc0_navi_pane

0xc7cf,	// (0x0000c7cf) lc0_stat_indi_pane_ParamLimits

0xc7cf,	// (0x0000c7cf) lc0_stat_indi_pane

0xc7e4,	// (0x0000c7e4) ls0_title_pane_ParamLimits

0xc7e4,	// (0x0000c7e4) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x84d8,	// (0x000084d8) list_uniindi_pane_ParamLimits

0x84e4,	// (0x000084e4) uniindi_top_pane_ParamLimits

0x8580,	// (0x00008580) list_single_uniindi_pane_g1_ParamLimits

0x8593,	// (0x00008593) list_single_uniindi_pane_t1_ParamLimits

0xe950,	// (0x0000e950) lc0_stat_clock_pane_ParamLimits

0xe950,	// (0x0000e950) lc0_stat_clock_pane

0xe95d,	// (0x0000e95d) lc0_stat_indi_pane_g1_ParamLimits

0xe95d,	// (0x0000e95d) lc0_stat_indi_pane_g1

0xe96a,	// (0x0000e96a) lc0_stat_indi_pane_g2_ParamLimits

0xe96a,	// (0x0000e96a) lc0_stat_indi_pane_g2

0x0001,

0xf349,	// (0x0000f349) lc0_stat_indi_pane_g_ParamLimits

0xf349,	// (0x0000f349) lc0_stat_indi_pane_g

0xe977,	// (0x0000e977) lc0_uni_indicator_pane_ParamLimits

0xe977,	// (0x0000e977) lc0_uni_indicator_pane

0x9786,	// (0x00009786) ls0_title_pane_g1_ParamLimits

0x9786,	// (0x00009786) ls0_title_pane_g1

0xe984,	// (0x0000e984) ls0_title_pane_t1_ParamLimits

0xe984,	// (0x0000e984) ls0_title_pane_t1

0xe9b2,	// (0x0000e9b2) lc0_uni_indicator_pane_g1_ParamLimits

0xe9b2,	// (0x0000e9b2) lc0_uni_indicator_pane_g1

0x97e4,	// (0x000097e4) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x97f2,	// (0x000097f2) ai5_sk_pane_ParamLimits

0x97f2,	// (0x000097f2) ai5_sk_pane

0xe9d9,	// (0x0000e9d9) cell_ai5_widget_pane_ParamLimits

0xe9d9,	// (0x0000e9d9) cell_ai5_widget_pane

0x9881,	// (0x00009881) aid_size_cell_widget_grid

0x9893,	// (0x00009893) bg_ai5_widget_pane_ParamLimits

0x9893,	// (0x00009893) bg_ai5_widget_pane

0xea62,	// (0x0000ea62) cell_ai5_widget_pane_g2

0xea72,	// (0x0000ea72) cell_ai5_widget_pane_g3

0xea86,	// (0x0000ea86) cell_ai5_widget_pane_g4

0xea92,	// (0x0000ea92) cell_ai5_widget_pane_g5

0xea9e,	// (0x0000ea9e) cell_ai5_widget_pane_g6

0xeaaa,	// (0x0000eaaa) cell_ai5_widget_pane_g7

0xeaf2,	// (0x0000eaf2) cell_ai5_widget_pane_t1_ParamLimits

0xeaf2,	// (0x0000eaf2) cell_ai5_widget_pane_t1

0xeb0f,	// (0x0000eb0f) cell_ai5_widget_pane_t2_ParamLimits

0xeb0f,	// (0x0000eb0f) cell_ai5_widget_pane_t2

0xeb27,	// (0x0000eb27) cell_ai5_widget_pane_t3_ParamLimits

0xeb27,	// (0x0000eb27) cell_ai5_widget_pane_t3

0xeb3f,	// (0x0000eb3f) cell_ai5_widget_pane_t4_ParamLimits

0xeb3f,	// (0x0000eb3f) cell_ai5_widget_pane_t4

0xeb59,	// (0x0000eb59) cell_ai5_widget_pane_t5_ParamLimits

0xeb59,	// (0x0000eb59) cell_ai5_widget_pane_t5

0x99d1,	// (0x000099d1) cell_ai5_widget_pane_t6_ParamLimits

0x99d1,	// (0x000099d1) cell_ai5_widget_pane_t6

0x99e3,	// (0x000099e3) cell_ai5_widget_pane_t7_ParamLimits

0x99e3,	// (0x000099e3) cell_ai5_widget_pane_t7

0xeb78,	// (0x0000eb78) cell_ai5_widget_pane_t8_ParamLimits

0xeb78,	// (0x0000eb78) cell_ai5_widget_pane_t8

0x0009,

0xf363,	// (0x0000f363) cell_ai5_widget_pane_t_ParamLimits

0xf363,	// (0x0000f363) cell_ai5_widget_pane_t

0xebc0,	// (0x0000ebc0) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xebd8,	// (0x0000ebd8) ai5_sk_left_pane

0xebe2,	// (0x0000ebe2) ai5_sk_middle_pane

0xebec,	// (0x0000ebec) ai5_sk_right_pane

0x9a7a,	// (0x00009a7a) bg_ai5_widget_pane_g1_ParamLimits

0x9a7a,	// (0x00009a7a) bg_ai5_widget_pane_g1

0x9a86,	// (0x00009a86) bg_ai5_widget_pane_g2_ParamLimits

0x9a86,	// (0x00009a86) bg_ai5_widget_pane_g2

0x9a92,	// (0x00009a92) bg_ai5_widget_pane_g3_ParamLimits

0x9a92,	// (0x00009a92) bg_ai5_widget_pane_g3

0x9a9e,	// (0x00009a9e) bg_ai5_widget_pane_g4_ParamLimits

0x9a9e,	// (0x00009a9e) bg_ai5_widget_pane_g4

0x9aaa,	// (0x00009aaa) bg_ai5_widget_pane_g5_ParamLimits

0x9aaa,	// (0x00009aaa) bg_ai5_widget_pane_g5

0x9ab6,	// (0x00009ab6) bg_ai5_widget_pane_g6_ParamLimits

0x9ab6,	// (0x00009ab6) bg_ai5_widget_pane_g6

0x9ac2,	// (0x00009ac2) bg_ai5_widget_pane_g7_ParamLimits

0x9ac2,	// (0x00009ac2) bg_ai5_widget_pane_g7

0x9ace,	// (0x00009ace) bg_ai5_widget_pane_g8_ParamLimits

0x9ace,	// (0x00009ace) bg_ai5_widget_pane_g8

0x9ada,	// (0x00009ada) bg_ai5_widget_pane_g9_ParamLimits

0x9ada,	// (0x00009ada) bg_ai5_widget_pane_g9

0x0008,

0xaf02,	// (0x0000af02) bg_ai5_widget_pane_g_ParamLimits

0xaf02,	// (0x0000af02) bg_ai5_widget_pane_g

0x9b02,	// (0x00009b02) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b02,	// (0x00009b02) cell_shortcut_ai5_widget_pane

0x0671,	// (0x00000671) bg_cell_shortcut_ai5_widget_pane

0x9b14,	// (0x00009b14) cell_grid_ai5_widget_pane_g1

0x9b1d,	// (0x00009b1d) highlight_cell_shortcut_ai5_widget_pane

0x367e,	// (0x0000367e) ai5_sk_left_pane_g1

0x9b25,	// (0x00009b25) ai5_sk_left_pane_g2

0x9b2d,	// (0x00009b2d) ai5_sk_left_pane_g3

0x9b35,	// (0x00009b35) ai5_sk_left_pane_g4

0x0003,

0xaf15,	// (0x0000af15) ai5_sk_left_pane_g

0x9b3d,	// (0x00009b3d) ai5_sk_left_pane_t1

0x3676,	// (0x00003676) ai5_sk_right_pane_g1

0x9b4b,	// (0x00009b4b) ai5_sk_right_pane_g2

0x9b53,	// (0x00009b53) ai5_sk_right_pane_g3

0x9b5b,	// (0x00009b5b) ai5_sk_right_pane_g4

0x0003,

0xaf1e,	// (0x0000af1e) ai5_sk_right_pane_g

0x9b63,	// (0x00009b63) ai5_sk_right_pane_t1

0x3676,	// (0x00003676) ai5_sk_middle_pane_g1

0x367e,	// (0x0000367e) ai5_sk_middle_pane_g2

0x3696,	// (0x00003696) ai5_sk_middle_pane_g3

0x9b53,	// (0x00009b53) ai5_sk_middle_pane_g4

0x9b2d,	// (0x00009b2d) ai5_sk_middle_pane_g5

0x9b71,	// (0x00009b71) ai5_sk_middle_pane_g6

0xec13,	// (0x0000ec13) ai5_sk_middle_pane_g7

0x0006,

0xf378,	// (0x0000f378) ai5_sk_middle_pane_g

0xc651,	// (0x0000c651) aid_touch_area_size_lc0_ParamLimits

0xc651,	// (0x0000c651) aid_touch_area_size_lc0

0x6c7c,	// (0x00006c7c) cell_hwr_candidate_pane_t1_ParamLimits

0x311f,	// (0x0000311f) aid_touch_navi_pane

0xc8d6,	// (0x0000c8d6) status_dt_navi_pane_ParamLimits

0xc8d6,	// (0x0000c8d6) status_dt_navi_pane

0xc8ee,	// (0x0000c8ee) status_dt_sta_pane_ParamLimits

0xc8ee,	// (0x0000c8ee) status_dt_sta_pane

0xec1b,	// (0x0000ec1b) dt_sta_controll_pane

0xec28,	// (0x0000ec28) dt_sta_indi_pane

0xec35,	// (0x0000ec35) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9bb2,	// (0x00009bb2) dt_sta_battery_pane

0xec47,	// (0x0000ec47) dt_sta_indi_pane_g1

0xec50,	// (0x0000ec50) dt_sta_indi_pane_g2

0xec59,	// (0x0000ec59) dt_sta_indi_pane_g3

0x0002,

0xf387,	// (0x0000f387) dt_sta_indi_pane_g

0xec62,	// (0x0000ec62) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x47a6,	// (0x000047a6) dt_sta_title_pane_g1

0xec6b,	// (0x0000ec6b) dt_sta_title_pane_t1_ParamLimits

0xec6b,	// (0x0000ec6b) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xec80,	// (0x0000ec80) dt_sta_controll_pane_g1

0xec89,	// (0x0000ec89) bg_dt_sta_title_pane_g1

0xec92,	// (0x0000ec92) bg_dt_sta_title_pane_g2

0xec9b,	// (0x0000ec9b) bg_dt_sta_title_pane_g3

0x0002,

0xf38e,	// (0x0000f38e) bg_dt_sta_title_pane_g

0x6429,	// (0x00006429) bg_dt_sta_indi_pane_g1

0x9c1f,	// (0x00009c1f) dt_sta_signal_pane_g1

0x9c27,	// (0x00009c27) dt_sta_signal_pane_g2

0x0001,

0xaf44,	// (0x0000af44) dt_sta_signal_pane_g

0x9c2f,	// (0x00009c2f) dt_sta_battery_pane_g1

0x9c38,	// (0x00009c38) dt_sta_battery_pane_t1

0x6429,	// (0x00006429) bg_dt_sta_control_pane_g1

0x1ed9,	// (0x00001ed9) fep_china_uni_eep_pane

0x1ee1,	// (0x00001ee1) fep_china_uni_entry_pane_ParamLimits

0x1ef1,	// (0x00001ef1) popup_fep_china_uni_window_g1_ParamLimits

0x1f01,	// (0x00001f01) popup_fep_china_uni_window_g2_ParamLimits

0x1f01,	// (0x00001f01) popup_fep_china_uni_window_g2

0x0001,

0xa7f4,	// (0x0000a7f4) popup_fep_china_uni_window_g_ParamLimits

0xa7f4,	// (0x0000a7f4) popup_fep_china_uni_window_g

0x9c47,	// (0x00009c47) fep_china_uni_eep_pane_g1

0x9c4f,	// (0x00009c4f) fep_china_uni_eep_pane_t1

0x9733,	// (0x00009733) aid_touch_area_size_smil_player

0x326b,	// (0x0000326b) lc0_clock_pane

0x344b,	// (0x0000344b) status_pane_g5_ParamLimits

0x344b,	// (0x0000344b) status_pane_g5

0xc12f,	// (0x0000c12f) popup_keymap_window

0x3409,	// (0x00003409) status_icon_pane

0xea72,	// (0x0000ea72) cell_ai5_widget_pane_g3_ParamLimits

0xea86,	// (0x0000ea86) cell_ai5_widget_pane_g4_ParamLimits

0xea92,	// (0x0000ea92) cell_ai5_widget_pane_g5_ParamLimits

0xeab6,	// (0x0000eab6) cell_ai5_widget_pane_g8_ParamLimits

0xeab6,	// (0x0000eab6) cell_ai5_widget_pane_g8

0xeaca,	// (0x0000eaca) cell_ai5_widget_pane_g9_ParamLimits

0xeaca,	// (0x0000eaca) cell_ai5_widget_pane_g9

0xeade,	// (0x0000eade) cell_ai5_widget_pane_g10_ParamLimits

0xeade,	// (0x0000eade) cell_ai5_widget_pane_g10

0x9c5e,	// (0x00009c5e) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9c66,	// (0x00009c66) popup_keymap_window_t1

0xbe3f,	// (0x0000be3f) control_pane_g6_ParamLimits

0xbe3f,	// (0x0000be3f) control_pane_g6

0xbe4c,	// (0x0000be4c) control_pane_g7_ParamLimits

0xbe4c,	// (0x0000be4c) control_pane_g7

0xbe59,	// (0x0000be59) control_pane_g8_ParamLimits

0xbe59,	// (0x0000be59) control_pane_g8

0xec1b,	// (0x0000ec1b) dt_sta_controll_pane_ParamLimits

0xec28,	// (0x0000ec28) dt_sta_indi_pane_ParamLimits

0xec35,	// (0x0000ec35) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb0e1,	// (0x0000b0e1) popup_sk_window

0x3e6e,	// (0x00003e6e) bg_popup_sub_pane_cp28_ParamLimits

0x3e6e,	// (0x00003e6e) bg_popup_sub_pane_cp28

0x9c74,	// (0x00009c74) popup_discreet_window_g1_ParamLimits

0x9c74,	// (0x00009c74) popup_discreet_window_g1

0x9c94,	// (0x00009c94) popup_discreet_window_t1_ParamLimits

0x9c94,	// (0x00009c94) popup_discreet_window_t1

0x9cb2,	// (0x00009cb2) popup_discreet_window_t2_ParamLimits

0x9cb2,	// (0x00009cb2) popup_discreet_window_t2

0x0002,

0xaf49,	// (0x0000af49) popup_discreet_window_t_ParamLimits

0xaf49,	// (0x0000af49) popup_discreet_window_t

0x9d04,	// (0x00009d04) popup_sk_window_g1

0x9d0e,	// (0x00009d0e) popup_sk_window_g2

0x0001,

0xaf50,	// (0x0000af50) popup_sk_window_g

0x9d18,	// (0x00009d18) popup_sk_window_t1

0x9d26,	// (0x00009d26) popup_sk_window_t1_copy1

0xea62,	// (0x0000ea62) cell_ai5_widget_pane_g2_ParamLimits

0xeb8a,	// (0x0000eb8a) cell_ai5_widget_pane_t9_ParamLimits

0xeb8a,	// (0x0000eb8a) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xeca4,	// (0x0000eca4) aid_fshwr2_btn_pane

0xecac,	// (0x0000ecac) aid_fshwr2_syb_pane

0xecb4,	// (0x0000ecb4) aid_fshwr2_txt_pane

0xecbc,	// (0x0000ecbc) fshwr2_func_candi_pane

0xecc6,	// (0x0000ecc6) fshwr2_hwr_syb_pane

0xecd4,	// (0x0000ecd4) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xecde,	// (0x0000ecde) fshwr2_icf_pane_t1_ParamLimits

0xecde,	// (0x0000ecde) fshwr2_icf_pane_t1

0x6429,	// (0x00006429) fshwr2_func_candi_pane_g1

0x9d99,	// (0x00009d99) fshwr2_func_candi_row_pane_ParamLimits

0x9d99,	// (0x00009d99) fshwr2_func_candi_row_pane

0xecf6,	// (0x0000ecf6) cell_fshwr2_syb_pane_ParamLimits

0xecf6,	// (0x0000ecf6) cell_fshwr2_syb_pane

0x68cf,	// (0x000068cf) fshwr2_hwr_syb_pane_g1_ParamLimits

0x68cf,	// (0x000068cf) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9dc4,	// (0x00009dc4) fshwr2_func_candi_cell_pane_ParamLimits

0x9dc4,	// (0x00009dc4) fshwr2_func_candi_cell_pane

0x9df5,	// (0x00009df5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9df5,	// (0x00009df5) fshwr2_func_candi_cell_bg_pane

0x9e0f,	// (0x00009e0f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e0f,	// (0x00009e0f) fshwr2_func_candi_cell_pane_g1

0x9e37,	// (0x00009e37) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e37,	// (0x00009e37) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x259f,	// (0x0000259f) cell_fshwr2_syb_bg_pane

0xed10,	// (0x0000ed10) cell_fshwr2_syb_bg_pane_g1

0xed18,	// (0x0000ed18) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0xcdc4,	// (0x0000cdc4) uni_indicator_pane_g1_ParamLimits

0xcdd9,	// (0x0000cdd9) uni_indicator_pane_g2_ParamLimits

0xcdee,	// (0x0000cdee) uni_indicator_pane_g3_ParamLimits

0x4b28,	// (0x00004b28) uni_indicator_pane_g4_ParamLimits

0x4b28,	// (0x00004b28) uni_indicator_pane_g4

0x4b3c,	// (0x00004b3c) uni_indicator_pane_g5_ParamLimits

0x4b3c,	// (0x00004b3c) uni_indicator_pane_g5

0x4b50,	// (0x00004b50) uni_indicator_pane_g6_ParamLimits

0x4b50,	// (0x00004b50) uni_indicator_pane_g6

0xf221,	// (0x0000f221) uni_indicator_pane_g_ParamLimits

0xdadc,	// (0x0000dadc) popup_tmo_note_window_ParamLimits

0xdadc,	// (0x0000dadc) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9e28,	// (0x00009e28) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e28,	// (0x00009e28) fshwr2_func_candi_cell_pane_g2

0x0001,

0xaf55,	// (0x0000af55) fshwr2_func_candi_cell_pane_g_ParamLimits

0xaf55,	// (0x0000af55) fshwr2_func_candi_cell_pane_g

0x6429,	// (0x00006429) bg_popup_window_pane_cp01

0x9e61,	// (0x00009e61) bg_popup_window_pane_g1_cp01

0x9e6a,	// (0x00009e6a) bg_popup_window_pane_cp22_ParamLimits

0x9e6a,	// (0x00009e6a) bg_popup_window_pane_cp22

0x9e78,	// (0x00009e78) listscroll_tmo_link_pane_ParamLimits

0x9e78,	// (0x00009e78) listscroll_tmo_link_pane

0x9eb8,	// (0x00009eb8) popup_tmo_note_window_g1_ParamLimits

0x9eb8,	// (0x00009eb8) popup_tmo_note_window_g1

0x9ec5,	// (0x00009ec5) tmo_note_info_pane_ParamLimits

0x9ec5,	// (0x00009ec5) tmo_note_info_pane

0xed27,	// (0x0000ed27) list_tmo_note_info_pane_g1_ParamLimits

0xed27,	// (0x0000ed27) list_tmo_note_info_pane_g1

0x9ef6,	// (0x00009ef6) list_tmo_note_info_pane_g2_ParamLimits

0x9ef6,	// (0x00009ef6) list_tmo_note_info_pane_g2

0x0001,

0xf395,	// (0x0000f395) list_tmo_note_info_pane_g_ParamLimits

0xf395,	// (0x0000f395) list_tmo_note_info_pane_g

0x9f12,	// (0x00009f12) list_tmo_note_info_text_pane_ParamLimits

0x9f12,	// (0x00009f12) list_tmo_note_info_text_pane

0x9f93,	// (0x00009f93) list_tmo_link_pane

0x9fa0,	// (0x00009fa0) scroll_pane_cp20

0x9fad,	// (0x00009fad) list_single_tmo_link_pane_ParamLimits

0x9fad,	// (0x00009fad) list_single_tmo_link_pane

0x9fbd,	// (0x00009fbd) list_single_tmo_link_pane_t1

0x9fcb,	// (0x00009fcb) list_tmo_note_info_text_pane_t1_ParamLimits

0x9fcb,	// (0x00009fcb) list_tmo_note_info_text_pane_t1

0xba6e,	// (0x0000ba6e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xba6e,	// (0x0000ba6e) aid_size_touch_scroll_bar_cp01

0xb98d,	// (0x0000b98d) aid_size_touch_slider_marker

0xb0d1,	// (0x0000b0d1) popup_settings_window_ParamLimits

0xb0d1,	// (0x0000b0d1) popup_settings_window

0x2b46,	// (0x00002b46) popup_candi_list_indi_window

0x311f,	// (0x0000311f) aid_touch_navi_pane_ParamLimits

0x825c,	// (0x0000825c) rs_clock_indi_pane

0x8265,	// (0x00008265) sctrl_sk_bottom_pane_ParamLimits

0x8276,	// (0x00008276) sctrl_sk_top_pane_ParamLimits

0x8aba,	// (0x00008aba) popup_fep_tooltip_window

0x9881,	// (0x00009881) aid_size_cell_widget_grid_ParamLimits

0xea56,	// (0x0000ea56) cell_ai5_widget_pane_g1_ParamLimits

0xea56,	// (0x0000ea56) cell_ai5_widget_pane_g1

0xea9e,	// (0x0000ea9e) cell_ai5_widget_pane_g6_ParamLimits

0xeaaa,	// (0x0000eaaa) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf34e,	// (0x0000f34e) cell_ai5_widget_pane_g_ParamLimits

0xf34e,	// (0x0000f34e) cell_ai5_widget_pane_g

0xebae,	// (0x0000ebae) cell_ai5_widget_pane_t10_ParamLimits

0xebae,	// (0x0000ebae) cell_ai5_widget_pane_t10

0xebc0,	// (0x0000ebc0) grid_ai5_widget_pane_ParamLimits

0xebf6,	// (0x0000ebf6) cell_contacts_ai5_widget_pane_ParamLimits

0xebf6,	// (0x0000ebf6) cell_contacts_ai5_widget_pane

0x9cc7,	// (0x00009cc7) popup_discreet_window_t3_ParamLimits

0x9cc7,	// (0x00009cc7) popup_discreet_window_t3

0x9d6e,	// (0x00009d6e) popup_fshwr2_char_preview_window_ParamLimits

0x9d6e,	// (0x00009d6e) popup_fshwr2_char_preview_window

0xed3e,	// (0x0000ed3e) tmo_note_info_pane_t1

0xed53,	// (0x0000ed53) tmo_note_info_pane_t2

0xed6a,	// (0x0000ed6a) tmo_note_info_pane_t3

0x9f6f,	// (0x00009f6f) tmo_note_info_pane_t4

0x9f81,	// (0x00009f81) tmo_note_info_pane_t5

0x0004,

0xf39a,	// (0x0000f39a) tmo_note_info_pane_t

0x9f93,	// (0x00009f93) list_tmo_link_pane_ParamLimits

0x9fa0,	// (0x00009fa0) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0x9fe4,	// (0x00009fe4) popup_fshwr2_char_preview_window_t1

0x9ff2,	// (0x00009ff2) popup_candi_list_indi_window_g1

0x9ffb,	// (0x00009ffb) bg_cell_contacts_ai5_widget_pane

0xed7f,	// (0x0000ed7f) cell_contacts_ai5_widget_pane_g1

0xed93,	// (0x0000ed93) cell_contacts_ai5_widget_pane_g2

0xeda2,	// (0x0000eda2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xf3a5,	// (0x0000f3a5) cell_contacts_ai5_widget_pane_g

0xedb5,	// (0x0000edb5) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee2f,	// (0x0000ee2f) settings_container_pane

0x259f,	// (0x0000259f) listscroll_set_pane_copy1

0x58e9,	// (0x000058e9) scroll_pane_cp121_copy1

0xa0c2,	// (0x0000a0c2) set_content_pane_copy1

0xee3b,	// (0x0000ee3b) aid_height_set_list_copy1_ParamLimits

0xee3b,	// (0x0000ee3b) aid_height_set_list_copy1

0x4e38,	// (0x00004e38) aid_size_parent_copy1_ParamLimits

0x4e38,	// (0x00004e38) aid_size_parent_copy1

0xee47,	// (0x0000ee47) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee47,	// (0x0000ee47) button_value_adjust_pane_cp6_copy1

0x2b1e,	// (0x00002b1e) list_highlight_pane_cp2_copy1_ParamLimits

0x2b1e,	// (0x00002b1e) list_highlight_pane_cp2_copy1

0xee5b,	// (0x0000ee5b) list_set_pane_copy1_ParamLimits

0xee5b,	// (0x0000ee5b) list_set_pane_copy1

0xedca,	// (0x0000edca) main_pane_set_t1_copy1_ParamLimits

0xedca,	// (0x0000edca) main_pane_set_t1_copy1

0xee04,	// (0x0000ee04) main_pane_set_t2_copy1_ParamLimits

0xee04,	// (0x0000ee04) main_pane_set_t2_copy1

0xef08,	// (0x0000ef08) main_pane_set_t3_copy1

0xef16,	// (0x0000ef16) main_pane_set_t4_copy1

0xee23,	// (0x0000ee23) set_content_pane_g1_copy1_ParamLimits

0xee23,	// (0x0000ee23) set_content_pane_g1_copy1

0xef24,	// (0x0000ef24) setting_code_pane_copy1

0xa1bd,	// (0x0000a1bd) setting_slider_graphic_pane_copy1

0xa1bd,	// (0x0000a1bd) setting_slider_pane_copy1

0xa1c7,	// (0x0000a1c7) setting_text_pane_copy1

0xa1d1,	// (0x0000a1d1) setting_volume_pane_copy1

0xef2e,	// (0x0000ef2e) settings_code_pane_cp2_copy1

0xef36,	// (0x0000ef36) settings_code_pane_cp_copy1_ParamLimits

0xef36,	// (0x0000ef36) settings_code_pane_cp_copy1

0xef4a,	// (0x0000ef4a) volume_set_pane_copy1

0xef52,	// (0x0000ef52) volume_set_pane_g10_copy1

0xef5a,	// (0x0000ef5a) volume_set_pane_g1_copy1

0xef62,	// (0x0000ef62) volume_set_pane_g2_copy1

0xef6a,	// (0x0000ef6a) volume_set_pane_g3_copy1

0xef72,	// (0x0000ef72) volume_set_pane_g4_copy1

0xef7a,	// (0x0000ef7a) volume_set_pane_g5_copy1

0xef82,	// (0x0000ef82) volume_set_pane_g6_copy1

0xef8a,	// (0x0000ef8a) volume_set_pane_g7_copy1

0xef92,	// (0x0000ef92) volume_set_pane_g8_copy1

0xef9a,	// (0x0000ef9a) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa24e,	// (0x0000a24e) setting_slider_pane_t1_copy1_ParamLimits

0xa24e,	// (0x0000a24e) setting_slider_pane_t1_copy1

0xefa2,	// (0x0000efa2) setting_slider_pane_t2_copy1_ParamLimits

0xefa2,	// (0x0000efa2) setting_slider_pane_t2_copy1

0xefbc,	// (0x0000efbc) setting_slider_pane_t3_copy1_ParamLimits

0xefbc,	// (0x0000efbc) setting_slider_pane_t3_copy1

0xefd4,	// (0x0000efd4) slider_set_pane_copy1_ParamLimits

0xefd4,	// (0x0000efd4) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa2b4,	// (0x0000a2b4) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xefea,	// (0x0000efea) set_opt_bg_pane_g7_copy2

0xa2c6,	// (0x0000a2c6) set_opt_bg_pane_g8_copy2

0xa2d0,	// (0x0000a2d0) set_opt_bg_pane_g9_copy2

0xa2da,	// (0x0000a2da) aid_size_touch_slider_mark_copy1_ParamLimits

0xa2da,	// (0x0000a2da) aid_size_touch_slider_mark_copy1

0xa2ee,	// (0x0000a2ee) slider_set_pane_g1_copy1

0xa2f7,	// (0x0000a2f7) slider_set_pane_g2_copy1

0x4da1,	// (0x00004da1) slider_set_pane_g3_copy1_ParamLimits

0x4da1,	// (0x00004da1) slider_set_pane_g3_copy1

0x4db5,	// (0x00004db5) slider_set_pane_g4_copy1_ParamLimits

0x4db5,	// (0x00004db5) slider_set_pane_g4_copy1

0x4dcd,	// (0x00004dcd) slider_set_pane_g5_copy1_ParamLimits

0x4dcd,	// (0x00004dcd) slider_set_pane_g5_copy1

0x4da1,	// (0x00004da1) slider_set_pane_g6_copy1_ParamLimits

0x4da1,	// (0x00004da1) slider_set_pane_g6_copy1

0xeff2,	// (0x0000eff2) slider_set_pane_g7_copy1_ParamLimits

0xeff2,	// (0x0000eff2) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa315,	// (0x0000a315) setting_slider_graphic_pane_g1_copy1

0xf008,	// (0x0000f008) setting_slider_graphic_pane_t1_copy1

0xf018,	// (0x0000f018) setting_slider_graphic_pane_t2_copy1

0xf028,	// (0x0000f028) slider_set_pane_cp_copy1

0xa34e,	// (0x0000a34e) input_focus_pane_cp1_copy1

0xa357,	// (0x0000a357) list_set_text_pane_copy1

0xa35f,	// (0x0000a35f) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa34e,	// (0x0000a34e) input_focus_pane_cp2_copy1

0xa35f,	// (0x0000a35f) setting_code_pane_g1_copy1

0xf030,	// (0x0000f030) setting_code_pane_t1_copy1

0xbd02,	// (0x0000bd02) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbd14,	// (0x0000bd14) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd14,	// (0x0000bd14) list_set_graphic_pane_g1_copy1

0xf03e,	// (0x0000f03e) list_set_graphic_pane_g2_copy1

0xbd2c,	// (0x0000bd2c) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd2c,	// (0x0000bd2c) list_set_graphic_pane_t1_copy1

0x6429,	// (0x00006429) rs_clock_indi_pane_g1

0xa390,	// (0x0000a390) rs_clock_indi_pane_t1

0x9bb2,	// (0x00009bb2) rs_indi_pane

0xa39e,	// (0x0000a39e) rs_indi_pane_g1

0xa3a7,	// (0x0000a3a7) rs_indi_pane_g2

0xa3b0,	// (0x0000a3b0) rs_indi_pane_g3

0x0002,

0xaf71,	// (0x0000af71) rs_indi_pane_g

0x259f,	// (0x0000259f) bg_popup_preview_window_pane_cp03

0xa3b9,	// (0x0000a3b9) popup_fep_tooltip_window_t1

0x7631,	// (0x00007631) popup_note2_window_g2_ParamLimits

0x7631,	// (0x00007631) popup_note2_window_g2

0x0001,

0xad0f,	// (0x0000ad0f) popup_note2_window_g_ParamLimits

0xad0f,	// (0x0000ad0f) popup_note2_window_g

0x7c33,	// (0x00007c33) bg_popup_sub_pane_cp11_ParamLimits

0x7c40,	// (0x00007c40) cell_ai3_links_pane_g1_ParamLimits

0x7c57,	// (0x00007c57) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0x24b0,	// (0x000024b0) cell_graphic_popup_pane_cp2_ParamLimits

0x24b0,	// (0x000024b0) cell_graphic_popup_pane_cp2

0xa3c7,	// (0x0000a3c7) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa3cf,	// (0x0000a3cf) cell_graphic_popup_pane_g3_cp2

0xa3d7,	// (0x0000a3d7) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdad0,	// (0x0000dad0) popup_tmo_big_image_note_window

0xea46,	// (0x0000ea46) cell_ai5_widget_list_pane

0xea4e,	// (0x0000ea4e) cell_ai5_widget_lrg_icon_pane

0xed3e,	// (0x0000ed3e) tmo_note_info_pane_t1_ParamLimits

0xed53,	// (0x0000ed53) tmo_note_info_pane_t2_ParamLimits

0xed6a,	// (0x0000ed6a) tmo_note_info_pane_t3_ParamLimits

0x9f6f,	// (0x00009f6f) tmo_note_info_pane_t4_ParamLimits

0x9f81,	// (0x00009f81) tmo_note_info_pane_t5_ParamLimits

0xf39a,	// (0x0000f39a) tmo_note_info_pane_t_ParamLimits

0xee2f,	// (0x0000ee2f) settings_container_pane_ParamLimits

0xa346,	// (0x0000a346) indicator_popup_pane_cp5

0xa346,	// (0x0000a346) indicator_popup_pane_cp6

0xbd02,	// (0x0000bd02) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa3e5,	// (0x0000a3e5) popup_tmo_big_image_note_window_g1

0xa3ef,	// (0x0000a3ef) popup_tmo_big_image_note_window_t1

0xa3ff,	// (0x0000a3ff) popup_tmo_big_image_note_window_t2

0xa40f,	// (0x0000a40f) popup_tmo_big_image_note_window_t3

0x0002,

0xaf78,	// (0x0000af78) popup_tmo_big_image_note_window_t

0xf046,	// (0x0000f046) cell_ai5_widget_lrg_icon_pane_g1

0xf04e,	// (0x0000f04e) cell_ai5_widget_lrg_icon_pane_t1

0xf05c,	// (0x0000f05c) cell_ai5_widget_list_row_pane_ParamLimits

0xf05c,	// (0x0000f05c) cell_ai5_widget_list_row_pane

0xf075,	// (0x0000f075) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf075,	// (0x0000f075) cell_ai5_widget_list_row_pane_g1

0xf082,	// (0x0000f082) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf082,	// (0x0000f082) cell_ai5_widget_list_row_pane_t1

0xf09a,	// (0x0000f09a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf09a,	// (0x0000f09a) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf3ac,	// (0x0000f3ac) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf3ac,	// (0x0000f3ac) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa485,	// (0x0000a485) popup_fep_char_pre_window

0xa48d,	// (0x0000a48d) popup_fep_ituss_window

0xa498,	// (0x0000a498) popup_fep_vkbss_window

0xa4a1,	// (0x0000a4a1) grid_vkbss_keypad_pane_ParamLimits

0xa4a1,	// (0x0000a4a1) grid_vkbss_keypad_pane

0xa4b1,	// (0x0000a4b1) ituss_keypad_pane

0xa4b9,	// (0x0000a4b9) aid_vkbss_key_offset_ParamLimits

0xa4b9,	// (0x0000a4b9) aid_vkbss_key_offset

0xa4c8,	// (0x0000a4c8) cell_vkbss_key_pane_ParamLimits

0xa4c8,	// (0x0000a4c8) cell_vkbss_key_pane

0xa4de,	// (0x0000a4de) bg_cell_vkbss_key_g1_ParamLimits

0xa4de,	// (0x0000a4de) bg_cell_vkbss_key_g1

0xa4ea,	// (0x0000a4ea) cell_vkbss_key_3p_pane_ParamLimits

0xa4ea,	// (0x0000a4ea) cell_vkbss_key_3p_pane

0xa504,	// (0x0000a504) cell_vkbss_key_g1_ParamLimits

0xa504,	// (0x0000a504) cell_vkbss_key_g1

0xa51e,	// (0x0000a51e) cell_vkbss_key_t1_ParamLimits

0xa51e,	// (0x0000a51e) cell_vkbss_key_t1

0xa549,	// (0x0000a549) cell_ituss_key_pane_ParamLimits

0xa549,	// (0x0000a549) cell_ituss_key_pane

0xa558,	// (0x0000a558) bg_cell_ituss_key_g1_ParamLimits

0xa558,	// (0x0000a558) bg_cell_ituss_key_g1

0xa564,	// (0x0000a564) cell_ituss_key_pane_g1_ParamLimits

0xa564,	// (0x0000a564) cell_ituss_key_pane_g1

0xa570,	// (0x0000a570) cell_ituss_key_pane_g2_ParamLimits

0xa570,	// (0x0000a570) cell_ituss_key_pane_g2

0x0001,

0xaf84,	// (0x0000af84) cell_ituss_key_pane_g_ParamLimits

0xaf84,	// (0x0000af84) cell_ituss_key_pane_g

0xa583,	// (0x0000a583) cell_ituss_key_t1_ParamLimits

0xa583,	// (0x0000a583) cell_ituss_key_t1

0xa5a1,	// (0x0000a5a1) cell_ituss_key_t2_ParamLimits

0xa5a1,	// (0x0000a5a1) cell_ituss_key_t2

0xa5c0,	// (0x0000a5c0) cell_ituss_key_t3_ParamLimits

0xa5c0,	// (0x0000a5c0) cell_ituss_key_t3

0xa5df,	// (0x0000a5df) cell_ituss_key_t4_ParamLimits

0xa5df,	// (0x0000a5df) cell_ituss_key_t4

0x0003,

0xaf89,	// (0x0000af89) cell_ituss_key_t_ParamLimits

0xaf89,	// (0x0000af89) cell_ituss_key_t

0xa5fe,	// (0x0000a5fe) cell_vkbss_key_3p_pane_g1

0xa606,	// (0x0000a606) cell_vkbss_key_3p_pane_g2

0xa60e,	// (0x0000a60e) cell_vkbss_key_3p_pane_g3

0x0002,

0xaf92,	// (0x0000af92) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa616,	// (0x0000a616) popup_fep_char_pre_window_t1

0xea3c,	// (0x0000ea3c) main_ai5_sk_pane

0x9ffb,	// (0x00009ffb) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed7f,	// (0x0000ed7f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed93,	// (0x0000ed93) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xeda2,	// (0x0000eda2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xf3a5,	// (0x0000f3a5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xedb5,	// (0x0000edb5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf0ac,	// (0x0000f0ac) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
