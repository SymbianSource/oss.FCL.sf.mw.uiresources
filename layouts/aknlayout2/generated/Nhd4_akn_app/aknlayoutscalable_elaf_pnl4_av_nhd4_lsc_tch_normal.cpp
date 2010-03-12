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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00000000 };

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
0xb40d,	// (0x0000b40d) Screen

0xb419,	// (0x0000b419) application_window_ParamLimits

0xb419,	// (0x0000b419) application_window

0x002e,	// (0x0000002e) screen_g1

0xb451,	// (0x0000b451) area_bottom_pane_ParamLimits

0xb451,	// (0x0000b451) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcb02,	// (0x0000cb02) battery_pane_ParamLimits

0xcb02,	// (0x0000cb02) battery_pane

0x40a1,	// (0x000040a1) bg_status_flat_pane_g8

0x40a9,	// (0x000040a9) bg_status_flat_pane_g9

0x31f5,	// (0x000031f5) context_pane_ParamLimits

0x31f5,	// (0x000031f5) context_pane

0xcc6d,	// (0x0000cc6d) navi_pane_ParamLimits

0xcc6d,	// (0x0000cc6d) navi_pane

0xcce5,	// (0x0000cce5) signal_pane_ParamLimits

0xcce5,	// (0x0000cce5) signal_pane

0x0008,

0xad70,	// (0x0000ad70) bg_status_flat_pane_g

0xcd75,	// (0x0000cd75) status_pane_g1_ParamLimits

0xcd75,	// (0x0000cd75) status_pane_g1

0xcd8b,	// (0x0000cd8b) status_pane_g2_ParamLimits

0xcd8b,	// (0x0000cd8b) status_pane_g2

0x3416,	// (0x00003416) status_pane_g3_ParamLimits

0x3416,	// (0x00003416) status_pane_g3

0x0004,

0xf12c,	// (0x0000f12c) status_pane_g_ParamLimits

0xf12c,	// (0x0000f12c) status_pane_g

0xcd97,	// (0x0000cd97) title_pane_ParamLimits

0xcd97,	// (0x0000cd97) title_pane

0xcdfa,	// (0x0000cdfa) uni_indicator_pane_ParamLimits

0xcdfa,	// (0x0000cdfa) uni_indicator_pane

0x2aac,	// (0x00002aac) bg_list_pane_ParamLimits

0x2aac,	// (0x00002aac) bg_list_pane

0xc3cd,	// (0x0000c3cd) find_pane

0xc3d5,	// (0x0000c3d5) listscroll_app_pane_ParamLimits

0xc3d5,	// (0x0000c3d5) listscroll_app_pane

0x2ae0,	// (0x00002ae0) listscroll_form_pane

0xc3e1,	// (0x0000c3e1) listscroll_gen_pane_ParamLimits

0xc3e1,	// (0x0000c3e1) listscroll_gen_pane

0x2ae0,	// (0x00002ae0) listscroll_set_pane

0x4e75,	// (0x00004e75) main_idle_act_pane

0x25a7,	// (0x000025a7) main_idle_trad_pane

0x25a7,	// (0x000025a7) main_list_empty_pane

0x2b0e,	// (0x00002b0e) main_midp_pane

0x2b1a,	// (0x00002b1a) main_pane_g1_ParamLimits

0x2b1a,	// (0x00002b1a) main_pane_g1

0xc3f5,	// (0x0000c3f5) popup_ai_message_window_ParamLimits

0xc3f5,	// (0x0000c3f5) popup_ai_message_window

0xc486,	// (0x0000c486) popup_fep_china_uni_window_ParamLimits

0xc486,	// (0x0000c486) popup_fep_china_uni_window

0x2c2c,	// (0x00002c2c) popup_fep_japan_candidate_window_ParamLimits

0x2c2c,	// (0x00002c2c) popup_fep_japan_candidate_window

0x2c4a,	// (0x00002c4a) popup_fep_japan_predictive_window_ParamLimits

0x2c4a,	// (0x00002c4a) popup_fep_japan_predictive_window

0xc4e0,	// (0x0000c4e0) popup_find_window

0xc4fd,	// (0x0000c4fd) popup_grid_graphic_window_ParamLimits

0xc4fd,	// (0x0000c4fd) popup_grid_graphic_window

0x2cad,	// (0x00002cad) popup_large_graphic_colour_window

0xc58f,	// (0x0000c58f) popup_menu_window_ParamLimits

0xc58f,	// (0x0000c58f) popup_menu_window

0xc75b,	// (0x0000c75b) popup_note_image_window

0xc721,	// (0x0000c721) popup_note_wait_window_ParamLimits

0xc721,	// (0x0000c721) popup_note_wait_window

0xc773,	// (0x0000c773) popup_note_window_ParamLimits

0xc773,	// (0x0000c773) popup_note_window

0xc819,	// (0x0000c819) popup_query_code_window_ParamLimits

0xc819,	// (0x0000c819) popup_query_code_window

0x2ef7,	// (0x00002ef7) popup_query_data_code_window_ParamLimits

0x2ef7,	// (0x00002ef7) popup_query_data_code_window

0xc853,	// (0x0000c853) popup_query_data_window_ParamLimits

0xc853,	// (0x0000c853) popup_query_data_window

0xc8c9,	// (0x0000c8c9) popup_query_sat_info_window_ParamLimits

0xc8c9,	// (0x0000c8c9) popup_query_sat_info_window

0xc960,	// (0x0000c960) popup_snote_single_graphic_window_ParamLimits

0xc960,	// (0x0000c960) popup_snote_single_graphic_window

0xc960,	// (0x0000c960) popup_snote_single_text_window_ParamLimits

0xc960,	// (0x0000c960) popup_snote_single_text_window

0x2f74,	// (0x00002f74) popup_sub_window_general

0x30a2,	// (0x000030a2) popup_window_general_ParamLimits

0x30a2,	// (0x000030a2) popup_window_general

0x30b7,	// (0x000030b7) power_save_pane

0xc239,	// (0x0000c239) control_pane_g1_ParamLimits

0xc239,	// (0x0000c239) control_pane_g1

0xc262,	// (0x0000c262) control_pane_g2_ParamLimits

0xc262,	// (0x0000c262) control_pane_g2

0x2953,	// (0x00002953) control_pane_g3_ParamLimits

0x2953,	// (0x00002953) control_pane_g3

0x0007,

0xf114,	// (0x0000f114) control_pane_g_ParamLimits

0xf114,	// (0x0000f114) control_pane_g

0xc2c6,	// (0x0000c2c6) control_pane_t1_ParamLimits

0xc2c6,	// (0x0000c2c6) control_pane_t1

0xc324,	// (0x0000c324) control_pane_t2_ParamLimits

0xc324,	// (0x0000c324) control_pane_t2

0x0002,

0xf125,	// (0x0000f125) control_pane_t_ParamLimits

0xf125,	// (0x0000f125) control_pane_t

0x282a,	// (0x0000282a) navi_navi_volume_pane_cp1

0x2833,	// (0x00002833) status_small_icon_pane

0x283b,	// (0x0000283b) status_small_pane_g1_ParamLimits

0x283b,	// (0x0000283b) status_small_pane_g1

0x286f,	// (0x0000286f) status_small_pane_g2_ParamLimits

0x286f,	// (0x0000286f) status_small_pane_g2

0x287b,	// (0x0000287b) status_small_pane_g3_ParamLimits

0x287b,	// (0x0000287b) status_small_pane_g3

0x2887,	// (0x00002887) status_small_pane_g4_ParamLimits

0x2887,	// (0x00002887) status_small_pane_g4

0x2893,	// (0x00002893) status_small_pane_g5_ParamLimits

0x2893,	// (0x00002893) status_small_pane_g5

0x28a2,	// (0x000028a2) status_small_pane_g6_ParamLimits

0x28a2,	// (0x000028a2) status_small_pane_g6

0x0007,

0xac75,	// (0x0000ac75) status_small_pane_g_ParamLimits

0xac75,	// (0x0000ac75) status_small_pane_g

0x28d2,	// (0x000028d2) status_small_pane_t1

0x28f5,	// (0x000028f5) status_small_wait_pane_ParamLimits

0x28f5,	// (0x000028f5) status_small_wait_pane

0xbfbe,	// (0x0000bfbe) aid_levels_signal_ParamLimits

0xbfbe,	// (0x0000bfbe) aid_levels_signal

0xbfd6,	// (0x0000bfd6) signal_pane_g1_ParamLimits

0xbfd6,	// (0x0000bfd6) signal_pane_g1

0xbff1,	// (0x0000bff1) signal_pane_g2_ParamLimits

0xbff1,	// (0x0000bff1) signal_pane_g2

0x0003,

0xf0f4,	// (0x0000f0f4) signal_pane_g_ParamLimits

0xf0f4,	// (0x0000f0f4) signal_pane_g

0x1e52,	// (0x00001e52) context_pane_g1

0xb5ca,	// (0x0000b5ca) title_pane_g1

0xb601,	// (0x0000b601) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xf026,	// (0x0000f026) title_pane_t

0xce22,	// (0x0000ce22) aid_levels_battery_ParamLimits

0xce22,	// (0x0000ce22) aid_levels_battery

0xce3e,	// (0x0000ce3e) battery_pane_g1_ParamLimits

0xce3e,	// (0x0000ce3e) battery_pane_g1

0xce5b,	// (0x0000ce5b) battery_pane_g2_ParamLimits

0xce5b,	// (0x0000ce5b) battery_pane_g2

0x0001,

0xf137,	// (0x0000f137) battery_pane_g_ParamLimits

0xf137,	// (0x0000f137) battery_pane_g

0xd2c0,	// (0x0000d2c0) uni_indicator_pane_g1

0xd2d5,	// (0x0000d2d5) uni_indicator_pane_g2

0x4b54,	// (0x00004b54) uni_indicator_pane_g3

0x0005,

0xf183,	// (0x0000f183) uni_indicator_pane_g

0x2417,	// (0x00002417) navi_icon_pane_ParamLimits

0x2417,	// (0x00002417) navi_icon_pane

0x235e,	// (0x0000235e) navi_midp_pane

0x2433,	// (0x00002433) navi_navi_pane

0x243d,	// (0x0000243d) navi_text_pane_ParamLimits

0x243d,	// (0x0000243d) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xae13,	// (0x0000ae13) status_small_wait_pane_g

0x484c,	// (0x0000484c) navi_navi_icon_text_pane

0x4854,	// (0x00004854) navi_navi_pane_g1_ParamLimits

0x4854,	// (0x00004854) navi_navi_pane_g1

0x4866,	// (0x00004866) navi_navi_pane_g2_ParamLimits

0x4866,	// (0x00004866) navi_navi_pane_g2

0x0001,

0xade1,	// (0x0000ade1) navi_navi_pane_g_ParamLimits

0xade1,	// (0x0000ade1) navi_navi_pane_g

0x4878,	// (0x00004878) navi_navi_tabs_pane

0x4881,	// (0x00004881) navi_navi_text_pane

0x484c,	// (0x0000484c) navi_navi_volume_pane

0x4828,	// (0x00004828) navi_text_pane_t1

0x481c,	// (0x0000481c) navi_icon_pane_g1

0x477b,	// (0x0000477b) navi_navi_text_pane_t1

0xd236,	// (0x0000d236) navi_navi_volume_pane_g1

0xd23e,	// (0x0000d23e) volume_small_pane

0xd192,	// (0x0000d192) navi_navi_icon_text_pane_g1

0xd19a,	// (0x0000d19a) navi_navi_icon_text_pane_t1

0x2433,	// (0x00002433) navi_tabs_2_long_pane

0x2433,	// (0x00002433) navi_tabs_2_pane

0x2433,	// (0x00002433) navi_tabs_3_long_pane

0x2433,	// (0x00002433) navi_tabs_3_pane

0x2433,	// (0x00002433) navi_tabs_4_pane

0xd150,	// (0x0000d150) tabs_2_active_pane_ParamLimits

0xd150,	// (0x0000d150) tabs_2_active_pane

0xd160,	// (0x0000d160) tabs_2_passive_pane_ParamLimits

0xd160,	// (0x0000d160) tabs_2_passive_pane

0xd11e,	// (0x0000d11e) tabs_3_active_pane_ParamLimits

0xd11e,	// (0x0000d11e) tabs_3_active_pane

0xd12e,	// (0x0000d12e) tabs_3_passive_pane_ParamLimits

0xd12e,	// (0x0000d12e) tabs_3_passive_pane

0xd13f,	// (0x0000d13f) tabs_3_passive_pane_cp_ParamLimits

0xd13f,	// (0x0000d13f) tabs_3_passive_pane_cp

0xd0da,	// (0x0000d0da) tabs_4_active_pane_ParamLimits

0xd0da,	// (0x0000d0da) tabs_4_active_pane

0xd0eb,	// (0x0000d0eb) tabs_4_passive_pane_ParamLimits

0xd0eb,	// (0x0000d0eb) tabs_4_passive_pane

0xd0fc,	// (0x0000d0fc) tabs_4_passive_pane_cp_ParamLimits

0xd0fc,	// (0x0000d0fc) tabs_4_passive_pane_cp

0xd10d,	// (0x0000d10d) tabs_4_passive_pane_cp2_ParamLimits

0xd10d,	// (0x0000d10d) tabs_4_passive_pane_cp2

0xd0ba,	// (0x0000d0ba) tabs_2_long_active_pane_ParamLimits

0xd0ba,	// (0x0000d0ba) tabs_2_long_active_pane

0xd0ca,	// (0x0000d0ca) tabs_2_long_passive_pane_ParamLimits

0xd0ca,	// (0x0000d0ca) tabs_2_long_passive_pane

0xd085,	// (0x0000d085) tabs_3_long_active_pane_ParamLimits

0xd085,	// (0x0000d085) tabs_3_long_active_pane

0xd096,	// (0x0000d096) tabs_3_long_passive_pane_ParamLimits

0xd096,	// (0x0000d096) tabs_3_long_passive_pane

0xd0a9,	// (0x0000d0a9) tabs_3_long_passive_pane_cp_ParamLimits

0xd0a9,	// (0x0000d0a9) tabs_3_long_passive_pane_cp

0x44f6,	// (0x000044f6) volume_small_pane_g1

0xd034,	// (0x0000d034) volume_small_pane_g2

0xd03d,	// (0x0000d03d) volume_small_pane_g3

0xd046,	// (0x0000d046) volume_small_pane_g4

0xd04f,	// (0x0000d04f) volume_small_pane_g5

0xd058,	// (0x0000d058) volume_small_pane_g6

0xd061,	// (0x0000d061) volume_small_pane_g7

0xd06a,	// (0x0000d06a) volume_small_pane_g8

0xd073,	// (0x0000d073) volume_small_pane_g9

0xd07c,	// (0x0000d07c) volume_small_pane_g10

0x0009,

0xf159,	// (0x0000f159) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb68d,	// (0x0000b68d) tabs_3_active_pane_g1

0xb695,	// (0x0000b695) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb68d,	// (0x0000b68d) tabs_3_passive_pane_g1

0xb695,	// (0x0000b695) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb6a7,	// (0x0000b6a7) tabs_4_active_pane_g1

0xb6af,	// (0x0000b6af) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb6a7,	// (0x0000b6a7) tabs_4_1_passive_pane_g1

0xb6af,	// (0x0000b6af) tabs_4_1_passive_pane_t1

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2

0xd374,	// (0x0000d374) list_set_pane_ParamLimits

0xd374,	// (0x0000d374) list_set_pane

0xd40e,	// (0x0000d40e) main_pane_set_t1_ParamLimits

0xd40e,	// (0x0000d40e) main_pane_set_t1

0xd42e,	// (0x0000d42e) main_pane_set_t2_ParamLimits

0xd42e,	// (0x0000d42e) main_pane_set_t2

0xd442,	// (0x0000d442) main_pane_set_t3_ParamLimits

0xd442,	// (0x0000d442) main_pane_set_t3

0xd454,	// (0x0000d454) main_pane_set_t4_ParamLimits

0xd454,	// (0x0000d454) main_pane_set_t4

0x0003,

0xf195,	// (0x0000f195) main_pane_set_t_ParamLimits

0xf195,	// (0x0000f195) main_pane_set_t

0xd466,	// (0x0000d466) setting_code_pane

0xd46e,	// (0x0000d46e) setting_slider_graphic_pane

0xd46e,	// (0x0000d46e) setting_slider_pane

0xd46e,	// (0x0000d46e) setting_text_pane

0xd46e,	// (0x0000d46e) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xaa61,	// (0x0000aa61) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xaa68,	// (0x0000aa68) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e5c,	// (0x00004e5c) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4e3c,	// (0x00004e3c) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4e44,	// (0x00004e44) set_opt_bg_pane_g7

0x4e4c,	// (0x00004e4c) set_opt_bg_pane_g8

0x4e54,	// (0x00004e54) set_opt_bg_pane_g9

0x0008,

0xae6a,	// (0x0000ae6a) set_opt_bg_pane_g

0x4dcb,	// (0x00004dcb) slider_set_pane_g1

0x4dd8,	// (0x00004dd8) slider_set_pane_g2

0x0006,

0xae5b,	// (0x0000ae5b) slider_set_pane_g

0x4c4b,	// (0x00004c4b) volume_set_pane_g1

0x4c53,	// (0x00004c53) volume_set_pane_g2

0x4c5b,	// (0x00004c5b) volume_set_pane_g3

0x4c63,	// (0x00004c63) volume_set_pane_g4

0x4c6b,	// (0x00004c6b) volume_set_pane_g5

0x4c73,	// (0x00004c73) volume_set_pane_g6

0x4c7b,	// (0x00004c7b) volume_set_pane_g7

0x4c83,	// (0x00004c83) volume_set_pane_g8

0x4c8b,	// (0x00004c8b) volume_set_pane_g9

0x4c93,	// (0x00004c93) volume_set_pane_g10

0x0009,

0xae33,	// (0x0000ae33) volume_set_pane_g

0xb6c1,	// (0x0000b6c1) indicator_pane_ParamLimits

0xb6c1,	// (0x0000b6c1) indicator_pane

0xb6e9,	// (0x0000b6e9) main_idle_pane_g2_ParamLimits

0xb6e9,	// (0x0000b6e9) main_idle_pane_g2

0xb721,	// (0x0000b721) main_pane_idle_g1_ParamLimits

0xb721,	// (0x0000b721) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb748,	// (0x0000b748) soft_indicator_pane_ParamLimits

0xb748,	// (0x0000b748) soft_indicator_pane

0xb762,	// (0x0000b762) wallpaper_pane_ParamLimits

0xb762,	// (0x0000b762) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb774,	// (0x0000b774) indicator_pane_g1_ParamLimits

0xb774,	// (0x0000b774) indicator_pane_g1

0x53ca,	// (0x000053ca) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb78d,	// (0x0000b78d) aid_ps_clock_pane

0x06b5,	// (0x000006b5) aid_ps_indicator_pane

0x06c1,	// (0x000006c1) indicator_ps_pane_ParamLimits

0x06c1,	// (0x000006c1) indicator_ps_pane

0x06d0,	// (0x000006d0) power_save_pane_g1_ParamLimits

0x06d0,	// (0x000006d0) power_save_pane_g1

0x06dc,	// (0x000006dc) power_save_pane_g2_ParamLimits

0x06dc,	// (0x000006dc) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x0696,	// (0x00000696) aid_ps_area_pane_ParamLimits

0x0001,

0xaa6d,	// (0x0000aa6d) power_save_pane_g_ParamLimits

0xaa6d,	// (0x0000aa6d) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb78d,	// (0x0000b78d) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xaa72,	// (0x0000aa72) power_save_pane_t_ParamLimits

0xaa72,	// (0x0000aa72) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb79b,	// (0x0000b79b) ai_gene_pane_ParamLimits

0xb79b,	// (0x0000b79b) ai_gene_pane

0xb7b2,	// (0x0000b7b2) ai_links_pane_ParamLimits

0xb7b2,	// (0x0000b7b2) ai_links_pane

0xb7ca,	// (0x0000b7ca) indicator_pane_cp1_ParamLimits

0xb7ca,	// (0x0000b7ca) indicator_pane_cp1

0xb7d9,	// (0x0000b7d9) main_pane_idle_g1_cp_ParamLimits

0xb7d9,	// (0x0000b7d9) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb7f1,	// (0x0000b7f1) soft_indicator_pane_cp1_ParamLimits

0xb7f1,	// (0x0000b7f1) soft_indicator_pane_cp1

0x4b17,	// (0x00004b17) ai_links_pane_g1

0x4b20,	// (0x00004b20) grid_ai_links_pane

0xd2b7,	// (0x0000d2b7) ai_gene_pane_1

0x4b05,	// (0x00004b05) ai_gene_pane_2

0x4b0e,	// (0x00004b0e) list_highlight_pane_cp4

0xd293,	// (0x0000d293) cell_ai_link_pane_ParamLimits

0xd293,	// (0x0000d293) cell_ai_link_pane

0x4ad6,	// (0x00004ad6) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xae0e,	// (0x0000ae0e) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x4a24,	// (0x00004a24) ai_gene_pane_1_g1_ParamLimits

0x4a24,	// (0x00004a24) ai_gene_pane_1_g1

0x4a30,	// (0x00004a30) ai_gene_pane_1_g2_ParamLimits

0x4a30,	// (0x00004a30) ai_gene_pane_1_g2

0x0001,

0xae04,	// (0x0000ae04) ai_gene_pane_1_g_ParamLimits

0xae04,	// (0x0000ae04) ai_gene_pane_1_g

0x4a3d,	// (0x00004a3d) ai_gene_pane_1_t1_ParamLimits

0x4a3d,	// (0x00004a3d) ai_gene_pane_1_t1

0x4a71,	// (0x00004a71) grid_ai_soft_ind_pane

0x4a0f,	// (0x00004a0f) ai_gene_pane_2_t1_ParamLimits

0x4a0f,	// (0x00004a0f) ai_gene_pane_2_t1

0xb805,	// (0x0000b805) main_pane_empty_t1_ParamLimits

0xb805,	// (0x0000b805) main_pane_empty_t1

0xb81d,	// (0x0000b81d) main_pane_empty_t2_ParamLimits

0xb81d,	// (0x0000b81d) main_pane_empty_t2

0xb832,	// (0x0000b832) main_pane_empty_t3_ParamLimits

0xb832,	// (0x0000b832) main_pane_empty_t3

0xb844,	// (0x0000b844) main_pane_empty_t4_ParamLimits

0xb844,	// (0x0000b844) main_pane_empty_t4

0xb856,	// (0x0000b856) main_pane_empty_t5_ParamLimits

0xb856,	// (0x0000b856) main_pane_empty_t5

0x0004,

0xf02d,	// (0x0000f02d) main_pane_empty_t_ParamLimits

0xf02d,	// (0x0000f02d) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x4789,	// (0x00004789) find_popup_pane_cp2_ParamLimits

0x4789,	// (0x00004789) find_popup_pane_cp2

0x4795,	// (0x00004795) heading_pane_ParamLimits

0x4795,	// (0x00004795) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1b7,	// (0x0000d1b7) bg_popup_window_pane_g1_ParamLimits

0xd1b7,	// (0x0000d1b7) bg_popup_window_pane_g1

0xd1c6,	// (0x0000d1c6) bg_popup_window_pane_g2_ParamLimits

0xd1c6,	// (0x0000d1c6) bg_popup_window_pane_g2

0xd1d2,	// (0x0000d1d2) bg_popup_window_pane_g3_ParamLimits

0xd1d2,	// (0x0000d1d2) bg_popup_window_pane_g3

0xd1de,	// (0x0000d1de) bg_popup_window_pane_g4_ParamLimits

0xd1de,	// (0x0000d1de) bg_popup_window_pane_g4

0xd1ed,	// (0x0000d1ed) bg_popup_window_pane_g5_ParamLimits

0xd1ed,	// (0x0000d1ed) bg_popup_window_pane_g5

0xd1fd,	// (0x0000d1fd) bg_popup_window_pane_g6_ParamLimits

0xd1fd,	// (0x0000d1fd) bg_popup_window_pane_g6

0xd209,	// (0x0000d209) bg_popup_window_pane_g7_ParamLimits

0xd209,	// (0x0000d209) bg_popup_window_pane_g7

0xd218,	// (0x0000d218) bg_popup_window_pane_g8_ParamLimits

0xd218,	// (0x0000d218) bg_popup_window_pane_g8

0xd227,	// (0x0000d227) bg_popup_window_pane_g9_ParamLimits

0xd227,	// (0x0000d227) bg_popup_window_pane_g9

0x475e,	// (0x0000475e) bg_popup_window_pane_g10_ParamLimits

0x475e,	// (0x0000475e) bg_popup_window_pane_g10

0x0009,

0xf16e,	// (0x0000f16e) bg_popup_window_pane_g_ParamLimits

0xf16e,	// (0x0000f16e) bg_popup_window_pane_g

0x4687,	// (0x00004687) bg_popup_heading_pane_ParamLimits

0x4687,	// (0x00004687) bg_popup_heading_pane

0x530d,	// (0x0000530d) tabs_4_passive_pane_cp_srt_ParamLimits

0x530d,	// (0x0000530d) tabs_4_passive_pane_cp_srt

0x531f,	// (0x0000531f) tabs_4_passive_pane_srt_ParamLimits

0x469b,	// (0x0000469b) heading_pane_g2

0x531f,	// (0x0000531f) tabs_4_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp3_srt

0x46a3,	// (0x000046a3) heading_pane_t1_ParamLimits

0x46a3,	// (0x000046a3) heading_pane_t1

0x46ba,	// (0x000046ba) heading_pane_t2_ParamLimits

0x46ba,	// (0x000046ba) heading_pane_t2

0x0001,

0xadc7,	// (0x0000adc7) heading_pane_t_ParamLimits

0xadc7,	// (0x0000adc7) heading_pane_t

0x4069,	// (0x00004069) bg_popup_heading_pane_g1

0x4118,	// (0x00004118) bg_popup_heading_pane_g2

0x4122,	// (0x00004122) bg_popup_heading_pane_g3

0x412c,	// (0x0000412c) bg_popup_heading_pane_g4

0x4136,	// (0x00004136) bg_popup_heading_pane_g5

0x4140,	// (0x00004140) bg_popup_heading_pane_g6

0x4148,	// (0x00004148) bg_popup_heading_pane_g7

0x4150,	// (0x00004150) bg_popup_heading_pane_g8

0x415a,	// (0x0000415a) bg_popup_heading_pane_g9

0x0008,

0xad83,	// (0x0000ad83) bg_popup_heading_pane_g

0x3643,	// (0x00003643) bg_popup_sub_pane_g1

0x364b,	// (0x0000364b) bg_popup_sub_pane_g2

0x3653,	// (0x00003653) bg_popup_sub_pane_g3

0x365b,	// (0x0000365b) bg_popup_sub_pane_g4

0x3663,	// (0x00003663) bg_popup_sub_pane_g5

0x366b,	// (0x0000366b) bg_popup_sub_pane_g6

0x3673,	// (0x00003673) bg_popup_sub_pane_g7

0x367b,	// (0x0000367b) bg_popup_sub_pane_g8

0x3683,	// (0x00003683) bg_popup_sub_pane_g9

0x0008,

0xad5d,	// (0x0000ad5d) bg_popup_sub_pane_g

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5_ParamLimits

0x080b,	// (0x0000080b) bg_popup_window_pane_cp5

0x0827,	// (0x00000827) popup_note_window_g1_ParamLimits

0x0827,	// (0x00000827) popup_note_window_g1

0x0833,	// (0x00000833) popup_note_window_t1_ParamLimits

0x0833,	// (0x00000833) popup_note_window_t1

0x0845,	// (0x00000845) popup_note_window_t2_ParamLimits

0x0845,	// (0x00000845) popup_note_window_t2

0x0857,	// (0x00000857) popup_note_window_t3_ParamLimits

0x0857,	// (0x00000857) popup_note_window_t3

0x0869,	// (0x00000869) popup_note_window_t4_ParamLimits

0x0869,	// (0x00000869) popup_note_window_t4

0x0891,	// (0x00000891) popup_note_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note_window_t5

0x0004,

0xaa82,	// (0x0000aa82) popup_note_window_t_ParamLimits

0xaa82,	// (0x0000aa82) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3fdd,	// (0x00003fdd) popup_note_image_window_g1_ParamLimits

0x3fdd,	// (0x00003fdd) popup_note_image_window_g1

0x3fe9,	// (0x00003fe9) popup_note_image_window_g2_ParamLimits

0x3fe9,	// (0x00003fe9) popup_note_image_window_g2

0x0001,

0xad51,	// (0x0000ad51) popup_note_image_window_g_ParamLimits

0xad51,	// (0x0000ad51) popup_note_image_window_g

0x4002,	// (0x00004002) popup_note_image_window_t1_ParamLimits

0x4002,	// (0x00004002) popup_note_image_window_t1

0x401b,	// (0x0000401b) popup_note_image_window_t2_ParamLimits

0x401b,	// (0x0000401b) popup_note_image_window_t2

0x4034,	// (0x00004034) popup_note_image_window_t3_ParamLimits

0x4034,	// (0x00004034) popup_note_image_window_t3

0x0002,

0xad56,	// (0x0000ad56) popup_note_image_window_t_ParamLimits

0xad56,	// (0x0000ad56) popup_note_image_window_t

0x3e9e,	// (0x00003e9e) bg_popup_window_pane_cp7_ParamLimits

0x3e9e,	// (0x00003e9e) bg_popup_window_pane_cp7

0x3ece,	// (0x00003ece) popup_note_wait_window_g1_ParamLimits

0x3ece,	// (0x00003ece) popup_note_wait_window_g1

0x3eda,	// (0x00003eda) popup_note_wait_window_g2_ParamLimits

0x3eda,	// (0x00003eda) popup_note_wait_window_g2

0x0002,

0xad3f,	// (0x0000ad3f) popup_note_wait_window_g_ParamLimits

0xad3f,	// (0x0000ad3f) popup_note_wait_window_g

0x3ef2,	// (0x00003ef2) popup_note_wait_window_t1_ParamLimits

0x3ef2,	// (0x00003ef2) popup_note_wait_window_t1

0x3f19,	// (0x00003f19) popup_note_wait_window_t2_ParamLimits

0x3f19,	// (0x00003f19) popup_note_wait_window_t2

0x3f36,	// (0x00003f36) popup_note_wait_window_t3_ParamLimits

0x3f36,	// (0x00003f36) popup_note_wait_window_t3

0x3f49,	// (0x00003f49) popup_note_wait_window_t4_ParamLimits

0x3f49,	// (0x00003f49) popup_note_wait_window_t4

0x0004,

0xad46,	// (0x0000ad46) popup_note_wait_window_t_ParamLimits

0xad46,	// (0x0000ad46) popup_note_wait_window_t

0x3f6e,	// (0x00003f6e) wait_bar_pane_ParamLimits

0x3f6e,	// (0x00003f6e) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xac01,	// (0x0000ac01) wait_anim_pane_g

0x3e42,	// (0x00003e42) wait_border_pane_g1

0x3e4d,	// (0x00003e4d) wait_border_pane_g2

0x3e56,	// (0x00003e56) wait_border_pane_g3

0x0002,

0xad38,	// (0x0000ad38) wait_border_pane_g

0x3cb2,	// (0x00003cb2) bg_popup_window_pane_cp16_ParamLimits

0x3cb2,	// (0x00003cb2) bg_popup_window_pane_cp16

0x3db2,	// (0x00003db2) indicator_popup_pane_cp4_ParamLimits

0x3db2,	// (0x00003db2) indicator_popup_pane_cp4

0x3dc6,	// (0x00003dc6) popup_query_data_window_t1_ParamLimits

0x3dc6,	// (0x00003dc6) popup_query_data_window_t1

0x3dd8,	// (0x00003dd8) popup_query_data_window_t2_ParamLimits

0x3dd8,	// (0x00003dd8) popup_query_data_window_t2

0x3df1,	// (0x00003df1) popup_query_data_window_t3_ParamLimits

0x3df1,	// (0x00003df1) popup_query_data_window_t3

0x0002,

0xad31,	// (0x0000ad31) popup_query_data_window_t_ParamLimits

0xad31,	// (0x0000ad31) popup_query_data_window_t

0x3e0b,	// (0x00003e0b) query_popup_data_pane_ParamLimits

0x3e0b,	// (0x00003e0b) query_popup_data_pane

0x3e1f,	// (0x00003e1f) query_popup_data_pane_cp1_ParamLimits

0x3e1f,	// (0x00003e1f) query_popup_data_pane_cp1

0x3cb2,	// (0x00003cb2) bg_popup_window_pane_cp10_ParamLimits

0x3cb2,	// (0x00003cb2) bg_popup_window_pane_cp10

0x3ce4,	// (0x00003ce4) indicator_popup_pane_ParamLimits

0x3ce4,	// (0x00003ce4) indicator_popup_pane

0x3d06,	// (0x00003d06) popup_query_code_window_t1_ParamLimits

0x3d06,	// (0x00003d06) popup_query_code_window_t1

0x3d20,	// (0x00003d20) popup_query_code_window_t2_ParamLimits

0x3d20,	// (0x00003d20) popup_query_code_window_t2

0x3d69,	// (0x00003d69) popup_query_code_window_t3_ParamLimits

0x3d69,	// (0x00003d69) popup_query_code_window_t3

0x0002,

0xad2a,	// (0x0000ad2a) popup_query_code_window_t_ParamLimits

0xad2a,	// (0x0000ad2a) popup_query_code_window_t

0x3d98,	// (0x00003d98) query_popup_pane_ParamLimits

0x3d98,	// (0x00003d98) query_popup_pane

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp15

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1_ParamLimits

0x08d3,	// (0x000008d3) indicator_popup_pane_cp1

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2_ParamLimits

0x08e6,	// (0x000008e6) indicator_popup_pane_cp2

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1_ParamLimits

0x08f9,	// (0x000008f9) popup_query_data_code_window_g1

0x090c,	// (0x0000090c) popup_query_data_code_window_t1_ParamLimits

0x090c,	// (0x0000090c) popup_query_data_code_window_t1

0x091e,	// (0x0000091e) popup_query_data_code_window_t2_ParamLimits

0x091e,	// (0x0000091e) popup_query_data_code_window_t2

0x0930,	// (0x00000930) popup_query_data_code_window_t3_ParamLimits

0x0930,	// (0x00000930) popup_query_data_code_window_t3

0x0946,	// (0x00000946) popup_query_data_code_window_t4_ParamLimits

0x0946,	// (0x00000946) popup_query_data_code_window_t4

0x0003,

0xaa8d,	// (0x0000aa8d) popup_query_data_code_window_t_ParamLimits

0xaa8d,	// (0x0000aa8d) popup_query_data_code_window_t

0x23d3,	// (0x000023d3) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3caa,	// (0x00003caa) heading_pane_cp5

0x0a59,	// (0x00000a59) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x0984,	// (0x00000984) query_popup_pane_t1

0x0992,	// (0x00000992) list_popup_info_pane_ParamLimits

0x0992,	// (0x00000992) list_popup_info_pane

0x09a1,	// (0x000009a1) listscroll_popup_info_pane_g1

0x09a9,	// (0x000009a9) scroll_pane_cp7

0x09b3,	// (0x000009b3) popup_info_list_pane_t1_ParamLimits

0x09b3,	// (0x000009b3) popup_info_list_pane_t1

0x09cd,	// (0x000009cd) popup_info_list_pane_t2_ParamLimits

0x09cd,	// (0x000009cd) popup_info_list_pane_t2

0x0001,

0xaa96,	// (0x0000aa96) popup_info_list_pane_t_ParamLimits

0xaa96,	// (0x0000aa96) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x5401,	// (0x00005401) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb8b8,	// (0x0000b8b8) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0xb8c0,	// (0x0000b8c0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb8c0,	// (0x0000b8c0) cell_large_graphic_colour_none_popup_pane

0xb8d4,	// (0x0000b8d4) grid_large_graphic_colour_popup_pane_ParamLimits

0xb8d4,	// (0x0000b8d4) grid_large_graphic_colour_popup_pane

0xb8f8,	// (0x0000b8f8) listscroll_popup_colour_pane_g1_ParamLimits

0xb8f8,	// (0x0000b8f8) listscroll_popup_colour_pane_g1

0xb90f,	// (0x0000b90f) listscroll_popup_colour_pane_g2_ParamLimits

0xb90f,	// (0x0000b90f) listscroll_popup_colour_pane_g2

0xb926,	// (0x0000b926) listscroll_popup_colour_pane_g3_ParamLimits

0xb926,	// (0x0000b926) listscroll_popup_colour_pane_g3

0xb936,	// (0x0000b936) listscroll_popup_colour_pane_g4_ParamLimits

0xb936,	// (0x0000b936) listscroll_popup_colour_pane_g4

0x0003,

0xf038,	// (0x0000f038) listscroll_popup_colour_pane_g_ParamLimits

0xf038,	// (0x0000f038) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb945,	// (0x0000b945) cell_large_graphic_colour_popup_pane_ParamLimits

0xb945,	// (0x0000b945) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xaaa4,	// (0x0000aaa4) cell_large_graphic_colour_popup_pane_g

0x0b36,	// (0x00000b36) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp4

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8_ParamLimits

0x0b47,	// (0x00000b47) bg_popup_window_pane_cp8

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_text_window_g1

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1_ParamLimits

0x0b74,	// (0x00000b74) popup_snote_single_text_window_t1

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2_ParamLimits

0x0b87,	// (0x00000b87) popup_snote_single_text_window_t2

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3_ParamLimits

0x0b9a,	// (0x00000b9a) popup_snote_single_text_window_t3

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4_ParamLimits

0x0bd3,	// (0x00000bd3) popup_snote_single_text_window_t4

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5_ParamLimits

0x0c07,	// (0x00000c07) popup_snote_single_text_window_t5

0x0004,

0xaaa9,	// (0x0000aaa9) popup_snote_single_text_window_t_ParamLimits

0xaaa9,	// (0x0000aaa9) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xaab4,	// (0x0000aab4) popup_snote_single_graphic_window_g_ParamLimits

0xaab4,	// (0x0000aab4) popup_snote_single_graphic_window_g

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1_ParamLimits

0x0c50,	// (0x00000c50) popup_snote_single_graphic_window_t1

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2_ParamLimits

0x0c63,	// (0x00000c63) popup_snote_single_graphic_window_t2

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3_ParamLimits

0x0c76,	// (0x00000c76) popup_snote_single_graphic_window_t3

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4_ParamLimits

0x0caf,	// (0x00000caf) popup_snote_single_graphic_window_t4

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5_ParamLimits

0x0ce3,	// (0x00000ce3) popup_snote_single_graphic_window_t5

0x0004,

0xaab9,	// (0x0000aab9) popup_snote_single_graphic_window_t_ParamLimits

0xaab9,	// (0x0000aab9) popup_snote_single_graphic_window_t

0x5289,	// (0x00005289) grid_graphic_popup_pane_ParamLimits

0x5289,	// (0x00005289) grid_graphic_popup_pane

0x52b5,	// (0x000052b5) listscroll_popup_graphic_pane_g1_ParamLimits

0x52b5,	// (0x000052b5) listscroll_popup_graphic_pane_g1

0xd5b5,	// (0x0000d5b5) listscroll_popup_graphic_pane_g2_ParamLimits

0xd5b5,	// (0x0000d5b5) listscroll_popup_graphic_pane_g2

0x0001,

0xf1b8,	// (0x0000f1b8) listscroll_popup_graphic_pane_g_ParamLimits

0xf1b8,	// (0x0000f1b8) listscroll_popup_graphic_pane_g

0x52dd,	// (0x000052dd) scroll_pane_cp5

0xd579,	// (0x0000d579) cell_graphic_popup_pane_ParamLimits

0xd579,	// (0x0000d579) cell_graphic_popup_pane

0x5215,	// (0x00005215) cell_graphic_popup_pane_g1

0x521d,	// (0x0000521d) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xaea0,	// (0x0000aea0) cell_graphic_popup_pane_g

0x5226,	// (0x00005226) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xd534,	// (0x0000d534) bg_list_pane_g1_ParamLimits

0xd534,	// (0x0000d534) bg_list_pane_g1

0x5192,	// (0x00005192) bg_list_pane_g2_ParamLimits

0x5192,	// (0x00005192) bg_list_pane_g2

0x51a5,	// (0x000051a5) bg_list_pane_g3_ParamLimits

0x51a5,	// (0x000051a5) bg_list_pane_g3

0x51b7,	// (0x000051b7) bg_list_pane_g4_ParamLimits

0x51b7,	// (0x000051b7) bg_list_pane_g4

0xd54f,	// (0x0000d54f) bg_list_pane_g5_ParamLimits

0xd54f,	// (0x0000d54f) bg_list_pane_g5

0x0004,

0xf1ad,	// (0x0000f1ad) bg_list_pane_g_ParamLimits

0xf1ad,	// (0x0000f1ad) bg_list_pane_g

0xd4bd,	// (0x0000d4bd) list_double2_graphic_large_graphic_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double2_graphic_large_graphic_pane

0xd4bd,	// (0x0000d4bd) list_double2_graphic_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double2_graphic_pane

0xd4bd,	// (0x0000d4bd) list_double2_large_graphic_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double2_large_graphic_pane

0xd4bd,	// (0x0000d4bd) list_double2_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double2_pane

0xd4bd,	// (0x0000d4bd) list_double_graphic_heading_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_graphic_heading_pane

0xd4bd,	// (0x0000d4bd) list_double_graphic_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_graphic_pane

0xd4bd,	// (0x0000d4bd) list_double_heading_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_heading_pane

0xd4bd,	// (0x0000d4bd) list_double_large_graphic_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_large_graphic_pane

0xd4bd,	// (0x0000d4bd) list_double_number_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_number_pane

0xd4bd,	// (0x0000d4bd) list_double_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_pane

0xd4bd,	// (0x0000d4bd) list_double_time_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_double_time_pane

0xd4bd,	// (0x0000d4bd) list_setting_number_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_setting_number_pane

0xd4bd,	// (0x0000d4bd) list_setting_pane_ParamLimits

0xd4bd,	// (0x0000d4bd) list_setting_pane

0xd4d0,	// (0x0000d4d0) list_single_2graphic_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_2graphic_pane

0xd4d0,	// (0x0000d4d0) list_single_graphic_heading_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_graphic_heading_pane

0xd4d0,	// (0x0000d4d0) list_single_graphic_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_graphic_pane

0xd4d0,	// (0x0000d4d0) list_single_heading_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_heading_pane

0xd520,	// (0x0000d520) list_single_large_graphic_pane_ParamLimits

0xd520,	// (0x0000d520) list_single_large_graphic_pane

0xd4d0,	// (0x0000d4d0) list_single_number_heading_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_number_heading_pane

0xd4d0,	// (0x0000d4d0) list_single_number_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_number_pane

0xd4d0,	// (0x0000d4d0) list_single_pane_ParamLimits

0xd4d0,	// (0x0000d4d0) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x247a,	// (0x0000247a) list_single_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_pane_g1

0x34e9,	// (0x000034e9) list_single_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_pane_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_pane_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_pane_g

0x5a14,	// (0x00005a14) list_single_pane_t1_ParamLimits

0x5a14,	// (0x00005a14) list_single_pane_t1

0x247a,	// (0x0000247a) list_single_number_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_pane_g1

0x34e9,	// (0x000034e9) list_single_number_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_pane_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_number_pane_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_number_pane_g

0x35d1,	// (0x000035d1) list_single_number_pane_t1_ParamLimits

0x35d1,	// (0x000035d1) list_single_number_pane_t1

0xd310,	// (0x0000d310) list_single_number_pane_t2_ParamLimits

0xd310,	// (0x0000d310) list_single_number_pane_t2

0x0001,

0xf190,	// (0x0000f190) list_single_number_pane_t_ParamLimits

0xf190,	// (0x0000f190) list_single_number_pane_t

0xb96e,	// (0x0000b96e) list_single_graphic_pane_g1_ParamLimits

0xb96e,	// (0x0000b96e) list_single_graphic_pane_g1

0x247a,	// (0x0000247a) list_single_graphic_pane_g2_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_pane_g2

0x34e9,	// (0x000034e9) list_single_graphic_pane_g3_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_pane_g3

0x0002,

0xf041,	// (0x0000f041) list_single_graphic_pane_g_ParamLimits

0xf041,	// (0x0000f041) list_single_graphic_pane_g

0xb97a,	// (0x0000b97a) list_single_graphic_pane_t1_ParamLimits

0xb97a,	// (0x0000b97a) list_single_graphic_pane_t1

0x247a,	// (0x0000247a) list_single_heading_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_heading_pane_g1

0x34e9,	// (0x000034e9) list_single_heading_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_heading_pane_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_heading_pane_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_heading_pane_g

0xb990,	// (0x0000b990) list_single_heading_pane_t1_ParamLimits

0xb990,	// (0x0000b990) list_single_heading_pane_t1

0xb9a6,	// (0x0000b9a6) list_single_heading_pane_t2_ParamLimits

0xb9a6,	// (0x0000b9a6) list_single_heading_pane_t2

0x0001,

0xf048,	// (0x0000f048) list_single_heading_pane_t_ParamLimits

0xf048,	// (0x0000f048) list_single_heading_pane_t

0x247a,	// (0x0000247a) list_single_number_heading_pane_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_heading_pane_g1

0x34e9,	// (0x000034e9) list_single_number_heading_pane_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_heading_pane_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_number_heading_pane_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_number_heading_pane_g

0xb990,	// (0x0000b990) list_single_number_heading_pane_t1_ParamLimits

0xb990,	// (0x0000b990) list_single_number_heading_pane_t1

0xb9b8,	// (0x0000b9b8) list_single_number_heading_pane_t2_ParamLimits

0xb9b8,	// (0x0000b9b8) list_single_number_heading_pane_t2

0x59ee,	// (0x000059ee) list_single_number_heading_pane_t3_ParamLimits

0x59ee,	// (0x000059ee) list_single_number_heading_pane_t3

0x0002,

0xf04d,	// (0x0000f04d) list_single_number_heading_pane_t_ParamLimits

0xf04d,	// (0x0000f04d) list_single_number_heading_pane_t

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_g1

0xb9ca,	// (0x0000b9ca) list_single_graphic_heading_pane_g4_ParamLimits

0xb9ca,	// (0x0000b9ca) list_single_graphic_heading_pane_g4

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_g5

0x0002,

0xf054,	// (0x0000f054) list_single_graphic_heading_pane_g_ParamLimits

0xf054,	// (0x0000f054) list_single_graphic_heading_pane_g

0xb990,	// (0x0000b990) list_single_graphic_heading_pane_t1_ParamLimits

0xb990,	// (0x0000b990) list_single_graphic_heading_pane_t1

0xb9db,	// (0x0000b9db) list_single_graphic_heading_pane_t2_ParamLimits

0xb9db,	// (0x0000b9db) list_single_graphic_heading_pane_t2

0x0001,

0xf05b,	// (0x0000f05b) list_single_graphic_heading_pane_t_ParamLimits

0xf05b,	// (0x0000f05b) list_single_graphic_heading_pane_t

0x5a2a,	// (0x00005a2a) list_single_large_graphic_pane_g1_ParamLimits

0x5a2a,	// (0x00005a2a) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xaf45,	// (0x0000af45) list_single_large_graphic_pane_g_ParamLimits

0xaf45,	// (0x0000af45) list_single_large_graphic_pane_g

0x3e4d,	// (0x00003e4d) wait_border_pane_g2_copy1

0xb9ed,	// (0x0000b9ed) list_single_large_graphic_pane_g4_cp2

0x5a36,	// (0x00005a36) list_single_large_graphic_pane_t1_ParamLimits

0x5a36,	// (0x00005a36) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xab64,	// (0x0000ab64) list_double_pane_g_ParamLimits

0xab64,	// (0x0000ab64) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb9f5,	// (0x0000b9f5) list_double_pane_t2_ParamLimits

0xb9f5,	// (0x0000b9f5) list_double_pane_t2

0x0001,

0xf060,	// (0x0000f060) list_double_pane_t_ParamLimits

0xf060,	// (0x0000f060) list_double_pane_t

0xba07,	// (0x0000ba07) list_double2_pane_g1_ParamLimits

0xba07,	// (0x0000ba07) list_double2_pane_g1

0xba18,	// (0x0000ba18) list_double2_pane_g2_ParamLimits

0xba18,	// (0x0000ba18) list_double2_pane_g2

0x0001,

0xf065,	// (0x0000f065) list_double2_pane_g_ParamLimits

0xf065,	// (0x0000f065) list_double2_pane_g

0x762e,	// (0x0000762e) list_double2_pane_t1_ParamLimits

0x762e,	// (0x0000762e) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xf06a,	// (0x0000f06a) list_double2_pane_t_ParamLimits

0xf06a,	// (0x0000f06a) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xab64,	// (0x0000ab64) list_double_number_pane_g_ParamLimits

0xab64,	// (0x0000ab64) list_double_number_pane_g

0xba24,	// (0x0000ba24) list_double_number_pane_t1_ParamLimits

0xba24,	// (0x0000ba24) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xba36,	// (0x0000ba36) list_double_number_pane_t3_ParamLimits

0xba36,	// (0x0000ba36) list_double_number_pane_t3

0x0002,

0xf06f,	// (0x0000f06f) list_double_number_pane_t_ParamLimits

0xf06f,	// (0x0000f06f) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xba48,	// (0x0000ba48) list_double_graphic_pane_g2_ParamLimits

0xba48,	// (0x0000ba48) list_double_graphic_pane_g2

0xba57,	// (0x0000ba57) list_double_graphic_pane_g3_ParamLimits

0xba57,	// (0x0000ba57) list_double_graphic_pane_g3

0x0003,

0xf076,	// (0x0000f076) list_double_graphic_pane_g_ParamLimits

0xf076,	// (0x0000f076) list_double_graphic_pane_g

0xba6f,	// (0x0000ba6f) list_double_graphic_pane_t1_ParamLimits

0xba6f,	// (0x0000ba6f) list_double_graphic_pane_t1

0xba85,	// (0x0000ba85) list_double_graphic_pane_t2_ParamLimits

0xba85,	// (0x0000ba85) list_double_graphic_pane_t2

0x0001,

0xf07f,	// (0x0000f07f) list_double_graphic_pane_t_ParamLimits

0xf07f,	// (0x0000f07f) list_double_graphic_pane_t

0xba97,	// (0x0000ba97) list_double2_graphic_pane_g1_ParamLimits

0xba97,	// (0x0000ba97) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xba18,	// (0x0000ba18) list_double2_graphic_pane_g3_ParamLimits

0xba18,	// (0x0000ba18) list_double2_graphic_pane_g3

0x0002,

0xf084,	// (0x0000f084) list_double2_graphic_pane_g_ParamLimits

0xf084,	// (0x0000f084) list_double2_graphic_pane_g

0xbaa3,	// (0x0000baa3) list_double2_graphic_pane_t1_ParamLimits

0xbaa3,	// (0x0000baa3) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xf08b,	// (0x0000f08b) list_double2_graphic_pane_t_ParamLimits

0xf08b,	// (0x0000f08b) list_double2_graphic_pane_t

0xbab9,	// (0x0000bab9) list_double_large_graphic_pane_g1_ParamLimits

0xbab9,	// (0x0000bab9) list_double_large_graphic_pane_g1

0xbae4,	// (0x0000bae4) list_double_large_graphic_pane_g2_ParamLimits

0xbae4,	// (0x0000bae4) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xbaf5,	// (0x0000baf5) list_double_large_graphic_pane_g4_ParamLimits

0xbaf5,	// (0x0000baf5) list_double_large_graphic_pane_g4

0x0004,

0xf090,	// (0x0000f090) list_double_large_graphic_pane_g_ParamLimits

0xf090,	// (0x0000f090) list_double_large_graphic_pane_g

0xbb08,	// (0x0000bb08) list_double_large_graphic_pane_t1_ParamLimits

0xbb08,	// (0x0000bb08) list_double_large_graphic_pane_t1

0xbb21,	// (0x0000bb21) list_double_large_graphic_pane_t2_ParamLimits

0xbb21,	// (0x0000bb21) list_double_large_graphic_pane_t2

0x0001,

0xf09b,	// (0x0000f09b) list_double_large_graphic_pane_t_ParamLimits

0xf09b,	// (0x0000f09b) list_double_large_graphic_pane_t

0xbb33,	// (0x0000bb33) list_double2_large_graphic_pane_g1_ParamLimits

0xbb33,	// (0x0000bb33) list_double2_large_graphic_pane_g1

0xba07,	// (0x0000ba07) list_double2_large_graphic_pane_g2_ParamLimits

0xba07,	// (0x0000ba07) list_double2_large_graphic_pane_g2

0xba18,	// (0x0000ba18) list_double2_large_graphic_pane_g3_ParamLimits

0xba18,	// (0x0000ba18) list_double2_large_graphic_pane_g3

0x0002,

0xf0a0,	// (0x0000f0a0) list_double2_large_graphic_pane_g_ParamLimits

0xf0a0,	// (0x0000f0a0) list_double2_large_graphic_pane_g

0xbb3f,	// (0x0000bb3f) list_double2_large_graphic_pane_t1_ParamLimits

0xbb3f,	// (0x0000bb3f) list_double2_large_graphic_pane_t1

0xbb55,	// (0x0000bb55) list_double2_large_graphic_pane_t2_ParamLimits

0xbb55,	// (0x0000bb55) list_double2_large_graphic_pane_t2

0x0001,

0xf0a7,	// (0x0000f0a7) list_double2_large_graphic_pane_t_ParamLimits

0xf0a7,	// (0x0000f0a7) list_double2_large_graphic_pane_t

0xbb67,	// (0x0000bb67) list_double_heading_pane_g1_ParamLimits

0xbb67,	// (0x0000bb67) list_double_heading_pane_g1

0xbb78,	// (0x0000bb78) list_double_heading_pane_g2_ParamLimits

0xbb78,	// (0x0000bb78) list_double_heading_pane_g2

0x0001,

0xf0ac,	// (0x0000f0ac) list_double_heading_pane_g_ParamLimits

0xf0ac,	// (0x0000f0ac) list_double_heading_pane_g

0xbb84,	// (0x0000bb84) list_double_heading_pane_t1_ParamLimits

0xbb84,	// (0x0000bb84) list_double_heading_pane_t1

0xbb9a,	// (0x0000bb9a) list_double_heading_pane_t2_ParamLimits

0xbb9a,	// (0x0000bb9a) list_double_heading_pane_t2

0x0001,

0xf0b1,	// (0x0000f0b1) list_double_heading_pane_t_ParamLimits

0xf0b1,	// (0x0000f0b1) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xbb67,	// (0x0000bb67) list_double_graphic_heading_pane_g2_ParamLimits

0xbb67,	// (0x0000bb67) list_double_graphic_heading_pane_g2

0xbb78,	// (0x0000bb78) list_double_graphic_heading_pane_g3_ParamLimits

0xbb78,	// (0x0000bb78) list_double_graphic_heading_pane_g3

0x0002,

0xf0b6,	// (0x0000f0b6) list_double_graphic_heading_pane_g_ParamLimits

0xf0b6,	// (0x0000f0b6) list_double_graphic_heading_pane_g

0xbbac,	// (0x0000bbac) list_double_graphic_heading_pane_t1_ParamLimits

0xbbac,	// (0x0000bbac) list_double_graphic_heading_pane_t1

0xbbc2,	// (0x0000bbc2) list_double_graphic_heading_pane_t2_ParamLimits

0xbbc2,	// (0x0000bbc2) list_double_graphic_heading_pane_t2

0x0001,

0xf0bd,	// (0x0000f0bd) list_double_graphic_heading_pane_t_ParamLimits

0xf0bd,	// (0x0000f0bd) list_double_graphic_heading_pane_t

0xbae4,	// (0x0000bae4) list_double_time_pane_g1_ParamLimits

0xbae4,	// (0x0000bae4) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xf0c2,	// (0x0000f0c2) list_double_time_pane_g_ParamLimits

0xf0c2,	// (0x0000f0c2) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xbbd4,	// (0x0000bbd4) list_double_time_pane_t2_ParamLimits

0xbbd4,	// (0x0000bbd4) list_double_time_pane_t2

0xbbe6,	// (0x0000bbe6) list_double_time_pane_t3_ParamLimits

0xbbe6,	// (0x0000bbe6) list_double_time_pane_t3

0xbbf8,	// (0x0000bbf8) list_double_time_pane_t4_ParamLimits

0xbbf8,	// (0x0000bbf8) list_double_time_pane_t4

0x0003,

0xf0c7,	// (0x0000f0c7) list_double_time_pane_t_ParamLimits

0xf0c7,	// (0x0000f0c7) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xba18,	// (0x0000ba18) list_setting_pane_g2_ParamLimits

0xba18,	// (0x0000ba18) list_setting_pane_g2

0x0001,

0xf0d0,	// (0x0000f0d0) list_setting_pane_g_ParamLimits

0xf0d0,	// (0x0000f0d0) list_setting_pane_g

0xbc0a,	// (0x0000bc0a) list_setting_pane_t1_ParamLimits

0xbc0a,	// (0x0000bc0a) list_setting_pane_t1

0xbc21,	// (0x0000bc21) list_setting_pane_t2_ParamLimits

0xbc21,	// (0x0000bc21) list_setting_pane_t2

0x0002,

0xf0d5,	// (0x0000f0d5) list_setting_pane_t_ParamLimits

0xf0d5,	// (0x0000f0d5) list_setting_pane_t

0xbc5e,	// (0x0000bc5e) set_value_pane_cp_ParamLimits

0xbc5e,	// (0x0000bc5e) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xba18,	// (0x0000ba18) list_setting_number_pane_g2_ParamLimits

0xba18,	// (0x0000ba18) list_setting_number_pane_g2

0x0001,

0xf0d0,	// (0x0000f0d0) list_setting_number_pane_g_ParamLimits

0xf0d0,	// (0x0000f0d0) list_setting_number_pane_g

0xbc6a,	// (0x0000bc6a) list_setting_number_pane_t1_ParamLimits

0xbc6a,	// (0x0000bc6a) list_setting_number_pane_t1

0xbc7e,	// (0x0000bc7e) list_setting_number_pane_t2_ParamLimits

0xbc7e,	// (0x0000bc7e) list_setting_number_pane_t2

0xbc95,	// (0x0000bc95) list_setting_number_pane_t3_ParamLimits

0xbc95,	// (0x0000bc95) list_setting_number_pane_t3

0x0003,

0xf0dc,	// (0x0000f0dc) list_setting_number_pane_t_ParamLimits

0xf0dc,	// (0x0000f0dc) list_setting_number_pane_t

0xbc5e,	// (0x0000bc5e) set_value_pane_ParamLimits

0xbc5e,	// (0x0000bc5e) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xbcd8,	// (0x0000bcd8) form_field_data_pane_ParamLimits

0xbcd8,	// (0x0000bcd8) form_field_data_pane

0xbcef,	// (0x0000bcef) form_field_data_wide_pane_ParamLimits

0xbcef,	// (0x0000bcef) form_field_data_wide_pane

0xbd0f,	// (0x0000bd0f) form_field_popup_pane_ParamLimits

0xbd0f,	// (0x0000bd0f) form_field_popup_pane

0xbd2d,	// (0x0000bd2d) form_field_popup_wide_pane_ParamLimits

0xbd2d,	// (0x0000bd2d) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xbd4e,	// (0x0000bd4e) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xbd68,	// (0x0000bd68) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xbd8a,	// (0x0000bd8a) form_field_slider_pane_t1_ParamLimits

0xbd8a,	// (0x0000bd8a) form_field_slider_pane_t1

0xbda2,	// (0x0000bda2) form_field_slider_pane_t2_ParamLimits

0xbda2,	// (0x0000bda2) form_field_slider_pane_t2

0x0001,

0xf0e5,	// (0x0000f0e5) form_field_slider_pane_t_ParamLimits

0xf0e5,	// (0x0000f0e5) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xbdb7,	// (0x0000bdb7) slider_cont_pane_ParamLimits

0xbdb7,	// (0x0000bdb7) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xab85,	// (0x0000ab85) form_field_slider_wide_pane_t_ParamLimits

0xab85,	// (0x0000ab85) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xbdcb,	// (0x0000bdcb) slider_cont_pane_cp1_ParamLimits

0xbdcb,	// (0x0000bdcb) slider_cont_pane_cp1

0xbddf,	// (0x0000bddf) slider_form_pane_cp

0x148b,	// (0x0000148b) input_focus_pane_g1

0x1493,	// (0x00001493) input_focus_pane_g2

0x149b,	// (0x0000149b) input_focus_pane_g3

0x14a3,	// (0x000014a3) input_focus_pane_g4

0x14ab,	// (0x000014ab) input_focus_pane_g5

0x14b3,	// (0x000014b3) input_focus_pane_g6

0x14bb,	// (0x000014bb) input_focus_pane_g7

0x14c3,	// (0x000014c3) input_focus_pane_g8

0x14cb,	// (0x000014cb) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xab8a,	// (0x0000ab8a) input_focus_pane_g

0x3e56,	// (0x00003e56) wait_border_pane_g3_copy1

0xbde7,	// (0x0000bde7) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd4a1,	// (0x0000d4a1) data_form_wide_pane_t1

0xbe01,	// (0x0000be01) list_form_graphic_pane_cp_ParamLimits

0xbe01,	// (0x0000be01) list_form_graphic_pane_cp

0x4fc9,	// (0x00004fc9) slider_form_pane_g1

0x4fd2,	// (0x00004fd2) slider_form_pane_g2

0x0006,

0xf19e,	// (0x0000f19e) slider_form_pane_g

0xbe14,	// (0x0000be14) list_form_graphic_pane_ParamLimits

0xbe14,	// (0x0000be14) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xbe28,	// (0x0000be28) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xbe31,	// (0x0000be31) input_find_pane_g1_ParamLimits

0xbe31,	// (0x0000be31) input_find_pane_g1

0xbe3d,	// (0x0000be3d) input_find_pane_t1_ParamLimits

0xbe3d,	// (0x0000be3d) input_find_pane_t1

0xbe52,	// (0x0000be52) input_find_pane_t2_ParamLimits

0xbe52,	// (0x0000be52) input_find_pane_t2

0x0001,

0xf0ea,	// (0x0000f0ea) input_find_pane_t_ParamLimits

0xf0ea,	// (0x0000f0ea) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0x159e,	// (0x0000159e) bg_popup_window_pane_cp2_ParamLimits

0x159e,	// (0x0000159e) bg_popup_window_pane_cp2

0x15ab,	// (0x000015ab) listscroll_menu_pane_ParamLimits

0x15ab,	// (0x000015ab) listscroll_menu_pane

0xbe73,	// (0x0000be73) popup_submenu_window_ParamLimits

0xbe73,	// (0x0000be73) popup_submenu_window

0x15df,	// (0x000015df) find_popup_pane_g1

0x15e7,	// (0x000015e7) input_popup_find_pane_cp

0x1584,	// (0x00001584) input_focus_pane_cp4_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp4

0x15ff,	// (0x000015ff) input_popup_find_pane_t1_ParamLimits

0x15ff,	// (0x000015ff) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x162d,	// (0x0000162d) listscroll_popup_sub_pane

0x1635,	// (0x00001635) list_submenu_pane_ParamLimits

0x1635,	// (0x00001635) list_submenu_pane

0x1646,	// (0x00001646) scroll_pane_cp4

0x164e,	// (0x0000164e) list_single_popup_submenu_pane_ParamLimits

0x164e,	// (0x0000164e) list_single_popup_submenu_pane

0x1661,	// (0x00001661) list_single_popup_submenu_pane_g1

0x1669,	// (0x00001669) list_single_popup_submenu_pane_t1_ParamLimits

0x1669,	// (0x00001669) list_single_popup_submenu_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1

0xbea9,	// (0x0000bea9) tabs_2_active_pane_g1

0xbeb1,	// (0x0000beb1) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xbea9,	// (0x0000bea9) tabs_2_passive_pane_g1

0xbeb1,	// (0x0000beb1) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xbec3,	// (0x0000bec3) tabs_2_long_active_pane_t1

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xbed6,	// (0x0000bed6) tabs_3_long_active_pane_t1

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5

0x36b0,	// (0x000036b0) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16e0,	// (0x000016e0) listscroll_popup_fast_pane_ParamLimits

0x16e0,	// (0x000016e0) listscroll_popup_fast_pane

0x16ef,	// (0x000016ef) grid_popup_fast_pane_ParamLimits

0x16ef,	// (0x000016ef) grid_popup_fast_pane

0x1701,	// (0x00001701) scroll_pane_cp9_ParamLimits

0x1701,	// (0x00001701) scroll_pane_cp9

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x729a,	// (0x0000729a) list_single_graphic_hl_pane_t1_cp2

0x1725,	// (0x00001725) input_focus_pane_cp20_ParamLimits

0x1725,	// (0x00001725) input_focus_pane_cp20

0x1733,	// (0x00001733) query_popup_data_pane_t1_ParamLimits

0x1733,	// (0x00001733) query_popup_data_pane_t1

0x1746,	// (0x00001746) query_popup_data_pane_t2_ParamLimits

0x1746,	// (0x00001746) query_popup_data_pane_t2

0x178c,	// (0x0000178c) query_popup_data_pane_t3_ParamLimits

0x178c,	// (0x0000178c) query_popup_data_pane_t3

0x17cd,	// (0x000017cd) query_popup_data_pane_t4_ParamLimits

0x17cd,	// (0x000017cd) query_popup_data_pane_t4

0x1809,	// (0x00001809) query_popup_data_pane_t5_ParamLimits

0x1809,	// (0x00001809) query_popup_data_pane_t5

0x0004,

0xaba4,	// (0x0000aba4) query_popup_data_pane_t_ParamLimits

0xaba4,	// (0x0000aba4) query_popup_data_pane_t

0x148b,	// (0x0000148b) bg_set_opt_pane_g1

0x1493,	// (0x00001493) bg_set_opt_pane_g2

0x149b,	// (0x0000149b) bg_set_opt_pane_g3

0x14a3,	// (0x000014a3) bg_set_opt_pane_g4

0x14ab,	// (0x000014ab) bg_set_opt_pane_g5

0x14b3,	// (0x000014b3) bg_set_opt_pane_g6

0x14bb,	// (0x000014bb) bg_set_opt_pane_g7

0x14c3,	// (0x000014c3) bg_set_opt_pane_g8

0x14cb,	// (0x000014cb) bg_set_opt_pane_g9

0x0008,

0xabaf,	// (0x0000abaf) bg_set_opt_pane_g

0x20fa,	// (0x000020fa) control_top_pane_stacon_ParamLimits

0x20fa,	// (0x000020fa) control_top_pane_stacon

0x214d,	// (0x0000214d) signal_pane_stacon_ParamLimits

0x214d,	// (0x0000214d) signal_pane_stacon

0x2172,	// (0x00002172) stacon_top_pane_g1_ParamLimits

0x2172,	// (0x00002172) stacon_top_pane_g1

0x2194,	// (0x00002194) title_pane_stacon_ParamLimits

0x2194,	// (0x00002194) title_pane_stacon

0x21be,	// (0x000021be) uni_indicator_pane_stacon_ParamLimits

0x21be,	// (0x000021be) uni_indicator_pane_stacon

0x21d3,	// (0x000021d3) battery_pane_stacon_ParamLimits

0x21d3,	// (0x000021d3) battery_pane_stacon

0x2217,	// (0x00002217) control_bottom_pane_stacon_ParamLimits

0x2217,	// (0x00002217) control_bottom_pane_stacon

0x223a,	// (0x0000223a) navi_pane_stacon_ParamLimits

0x223a,	// (0x0000223a) navi_pane_stacon

0x225d,	// (0x0000225d) stacon_bottom_pane_g1_ParamLimits

0x225d,	// (0x0000225d) stacon_bottom_pane_g1

0x1840,	// (0x00001840) aid_levels_signal_lsc_ParamLimits

0x1840,	// (0x00001840) aid_levels_signal_lsc

0x1857,	// (0x00001857) signal_pane_stacon_g1_ParamLimits

0x1857,	// (0x00001857) signal_pane_stacon_g1

0x186b,	// (0x0000186b) signal_pane_stacon_g2_ParamLimits

0x186b,	// (0x0000186b) signal_pane_stacon_g2

0x0001,

0xabc2,	// (0x0000abc2) signal_pane_stacon_g_ParamLimits

0xabc2,	// (0x0000abc2) signal_pane_stacon_g

0x18ad,	// (0x000018ad) title_pane_stacon_t1_ParamLimits

0x18ad,	// (0x000018ad) title_pane_stacon_t1

0x18d2,	// (0x000018d2) uni_indicator_pane_stacon_g1

0x18dc,	// (0x000018dc) uni_indicator_pane_stacon_g2

0x18e6,	// (0x000018e6) uni_indicator_pane_stacon_g3

0x18f0,	// (0x000018f0) uni_indicator_pane_stacon_g4

0x0003,

0xabce,	// (0x0000abce) uni_indicator_pane_stacon_g

0x18fa,	// (0x000018fa) control_top_pane_stacon_g1

0x1902,	// (0x00001902) control_top_pane_stacon_t1_ParamLimits

0x1902,	// (0x00001902) control_top_pane_stacon_t1

0x1939,	// (0x00001939) aid_levels_battery_lsc_ParamLimits

0x1939,	// (0x00001939) aid_levels_battery_lsc

0x1951,	// (0x00001951) battery_pane_stacon_g1_ParamLimits

0x1951,	// (0x00001951) battery_pane_stacon_g1

0x1964,	// (0x00001964) battery_pane_stacon_g2_ParamLimits

0x1964,	// (0x00001964) battery_pane_stacon_g2

0x0001,

0xabd7,	// (0x0000abd7) battery_pane_stacon_g_ParamLimits

0xabd7,	// (0x0000abd7) battery_pane_stacon_g

0x19a2,	// (0x000019a2) navi_icon_pane_stacon

0x19b6,	// (0x000019b6) navi_navi_pane_stacon

0x19a2,	// (0x000019a2) navi_text_pane_stacon

0x18fa,	// (0x000018fa) control_bottom_pane_stacon_g1

0x19ca,	// (0x000019ca) control_bottom_pane_stacon_t1_ParamLimits

0x19ca,	// (0x000019ca) control_bottom_pane_stacon_t1

0xbee8,	// (0x0000bee8) grid_app_pane_ParamLimits

0xbee8,	// (0x0000bee8) grid_app_pane

0xbf1e,	// (0x0000bf1e) scroll_pane_cp15_ParamLimits

0xbf1e,	// (0x0000bf1e) scroll_pane_cp15

0xbf37,	// (0x0000bf37) cell_app_pane_ParamLimits

0xbf37,	// (0x0000bf37) cell_app_pane

0xbf7e,	// (0x0000bf7e) cell_app_pane_g1_ParamLimits

0xbf7e,	// (0x0000bf7e) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xf0ef,	// (0x0000f0ef) cell_app_pane_g_ParamLimits

0xf0ef,	// (0x0000f0ef) cell_app_pane_g

0xbf9e,	// (0x0000bf9e) cell_app_pane_t1_ParamLimits

0xbf9e,	// (0x0000bf9e) cell_app_pane_t1

0x1abf,	// (0x00001abf) grid_highlight_pane_ParamLimits

0x1abf,	// (0x00001abf) grid_highlight_pane

0x148b,	// (0x0000148b) cell_highlight_pane_g1

0x1493,	// (0x00001493) cell_highlight_pane_g2

0x149b,	// (0x0000149b) cell_highlight_pane_g3

0x14a3,	// (0x000014a3) cell_highlight_pane_g4

0x14ab,	// (0x000014ab) cell_highlight_pane_g5

0x14b3,	// (0x000014b3) cell_highlight_pane_g6

0x14bb,	// (0x000014bb) cell_highlight_pane_g7

0x14c3,	// (0x000014c3) cell_highlight_pane_g8

0x14cb,	// (0x000014cb) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xab8a,	// (0x0000ab8a) cell_highlight_pane_g

0x1ae3,	// (0x00001ae3) bg_scroll_pane

0x1b02,	// (0x00001b02) scroll_handle_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1

0x1b68,	// (0x00001b68) scroll_bg_pane_g2

0x1b80,	// (0x00001b80) scroll_bg_pane_g3

0x0002,

0xabe1,	// (0x0000abe1) scroll_bg_pane_g

0x1b95,	// (0x00001b95) scroll_handle_focus_pane_ParamLimits

0x1b95,	// (0x00001b95) scroll_handle_focus_pane

0x1b53,	// (0x00001b53) scroll_handle_pane_g1

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2

0x1b80,	// (0x00001b80) scroll_handle_pane_g3

0x0002,

0xabe8,	// (0x0000abe8) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb6,	// (0x00001bb6) popup_fep_japan_predictive_window_t1

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bcd,	// (0x00001bcd) popup_fep_japan_predictive_window_t2

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c00,	// (0x00001c00) popup_fep_japan_predictive_window_t3

0x0002,

0xabef,	// (0x0000abef) popup_fep_japan_predictive_window_t_ParamLimits

0xabef,	// (0x0000abef) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c37,	// (0x00001c37) listscroll_japin_cand_pane

0x1c3f,	// (0x00001c3f) popup_fep_japan_candidate_window_t1

0x1c4d,	// (0x00001c4d) candidate_pane_ParamLimits

0x1c4d,	// (0x00001c4d) candidate_pane

0x1c5f,	// (0x00001c5f) scroll_pane_cp30

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane_ParamLimits

0x1c67,	// (0x00001c67) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c7b,	// (0x00001c7b) list_single_popup_jap_candidate_pane_t1

0x1c8a,	// (0x00001c8a) level_1_signal

0x1c97,	// (0x00001c97) level_2_signal

0x1ca4,	// (0x00001ca4) level_3_signal

0x1cb1,	// (0x00001cb1) level_4_signal

0x1cbe,	// (0x00001cbe) level_5_signal

0x1ccb,	// (0x00001ccb) level_6_signal

0x1cd8,	// (0x00001cd8) level_7_signal

0x1c8a,	// (0x00001c8a) level_1_battery

0x1c97,	// (0x00001c97) level_2_battery

0x1ca4,	// (0x00001ca4) level_3_battery

0x1cb1,	// (0x00001cb1) level_4_battery

0x1cbe,	// (0x00001cbe) level_5_battery

0x1ccb,	// (0x00001ccb) level_6_battery

0x1cd8,	// (0x00001cd8) level_7_battery

0x1d1c,	// (0x00001d1c) list_menu_pane_ParamLimits

0x1d1c,	// (0x00001d1c) list_menu_pane

0x1d32,	// (0x00001d32) scroll_pane_cp25_ParamLimits

0x1d32,	// (0x00001d32) scroll_pane_cp25

0x1d4b,	// (0x00001d4b) list_double2_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_large_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double2_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double2_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_large_graphic_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_large_graphic_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_number_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_number_pane_cp2

0x1d4b,	// (0x00001d4b) list_double_pane_cp2_ParamLimits

0x1d4b,	// (0x00001d4b) list_double_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_2graphic_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_2graphic_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_graphic_heading_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_graphic_heading_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_graphic_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_graphic_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_heading_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_heading_pane_cp2

0x1d84,	// (0x00001d84) list_single_large_graphic_pane_cp2_ParamLimits

0x1d84,	// (0x00001d84) list_single_large_graphic_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_number_heading_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_number_heading_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_number_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_number_pane_cp2

0x1d6d,	// (0x00001d6d) list_single_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_pane_cp2

0x1e5b,	// (0x00001e5b) bg_popup_sub_pane_cp22

0x1e80,	// (0x00001e80) popup_side_volume_key_window_g1

0x1eaa,	// (0x00001eaa) popup_side_volume_key_window_t1

0x1ec6,	// (0x00001ec6) volume_small_pane_cp1

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24_ParamLimits

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24

0x1ece,	// (0x00001ece) fep_china_uni_candidate_pane_ParamLimits

0x1ece,	// (0x00001ece) fep_china_uni_candidate_pane

0x1ee2,	// (0x00001ee2) fep_china_uni_entry_pane

0x1ef2,	// (0x00001ef2) popup_fep_china_uni_window_g1

0x1f0e,	// (0x00001f0e) fep_china_uni_entry_pane_g1

0x1f16,	// (0x00001f16) fep_china_uni_entry_pane_g2

0x0001,

0xac20,	// (0x0000ac20) fep_china_uni_entry_pane_g

0x1f1e,	// (0x00001f1e) fep_entry_item_pane

0x1f28,	// (0x00001f28) fep_candidate_item_pane

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane_g1

0x1f38,	// (0x00001f38) fep_china_uni_candidate_pane_g2

0x1f40,	// (0x00001f40) fep_china_uni_candidate_pane_g3

0x1f48,	// (0x00001f48) fep_china_uni_candidate_pane_g4

0x0003,

0xac25,	// (0x0000ac25) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f50,	// (0x00001f50) fep_entry_item_pane_t1_ParamLimits

0x1f50,	// (0x00001f50) fep_entry_item_pane_t1

0x1f66,	// (0x00001f66) fep_candidate_item_pane_t1_ParamLimits

0x1f66,	// (0x00001f66) fep_candidate_item_pane_t1

0x1f7b,	// (0x00001f7b) fep_candidate_item_pane_t2_ParamLimits

0x1f7b,	// (0x00001f7b) fep_candidate_item_pane_t2

0x0001,

0xac2e,	// (0x0000ac2e) fep_candidate_item_pane_t_ParamLimits

0xac2e,	// (0x0000ac2e) fep_candidate_item_pane_t

0x04e9,	// (0x000004e9) list_highlight_pane_cp31_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp31

0x1f8d,	// (0x00001f8d) level_1_signal_lsc

0x1f96,	// (0x00001f96) level_2_signal_lsc

0x1f9f,	// (0x00001f9f) level_3_signal_lsc

0x1fa8,	// (0x00001fa8) level_4_signal_lsc

0x1fb1,	// (0x00001fb1) level_5_signal_lsc

0x1fba,	// (0x00001fba) level_6_signal_lsc

0x1fc3,	// (0x00001fc3) level_7_signal_lsc

0x1fc3,	// (0x00001fc3) level_1_battery_lsc

0x1fcc,	// (0x00001fcc) level_2_battery_lsc

0x1fd5,	// (0x00001fd5) level_3_battery_lsc

0x1fde,	// (0x00001fde) level_4_battery_lsc

0x1fe7,	// (0x00001fe7) level_5_battery_lsc

0x1ff0,	// (0x00001ff0) level_6_battery_lsc

0x1f8d,	// (0x00001f8d) level_7_battery_lsc

0x1ff9,	// (0x00001ff9) scroll_handle_focus_pane_g1

0x2002,	// (0x00002002) scroll_handle_focus_pane_g2

0x200b,	// (0x0000200b) scroll_handle_focus_pane_g3

0x0002,

0xac33,	// (0x0000ac33) scroll_handle_focus_pane_g

0xc039,	// (0x0000c039) list_single_2graphic_pane_g1_ParamLimits

0xc039,	// (0x0000c039) list_single_2graphic_pane_g1

0xb9ca,	// (0x0000b9ca) list_single_2graphic_pane_g2_ParamLimits

0xb9ca,	// (0x0000b9ca) list_single_2graphic_pane_g2

0x34e9,	// (0x000034e9) list_single_2graphic_pane_g3_ParamLimits

0x34e9,	// (0x000034e9) list_single_2graphic_pane_g3

0xc045,	// (0x0000c045) list_single_2graphic_pane_g4_ParamLimits

0xc045,	// (0x0000c045) list_single_2graphic_pane_g4

0x0003,

0xf0fd,	// (0x0000f0fd) list_single_2graphic_pane_g_ParamLimits

0xf0fd,	// (0x0000f0fd) list_single_2graphic_pane_g

0xc056,	// (0x0000c056) list_single_2graphic_pane_t1_ParamLimits

0xc056,	// (0x0000c056) list_single_2graphic_pane_t1

0xc084,	// (0x0000c084) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc084,	// (0x0000c084) list_double2_graphic_large_graphic_pane_g1

0xba07,	// (0x0000ba07) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba07,	// (0x0000ba07) list_double2_graphic_large_graphic_pane_g2

0xba18,	// (0x0000ba18) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xba18,	// (0x0000ba18) list_double2_graphic_large_graphic_pane_g3

0xc096,	// (0x0000c096) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc096,	// (0x0000c096) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf106,	// (0x0000f106) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf106,	// (0x0000f106) list_double2_graphic_large_graphic_pane_g

0xc0a2,	// (0x0000c0a2) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc0a2,	// (0x0000c0a2) list_double2_graphic_large_graphic_pane_t1

0xc0b8,	// (0x0000c0b8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc0b8,	// (0x0000c0b8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf10f,	// (0x0000f10f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf10f,	// (0x0000f10f) list_double2_graphic_large_graphic_pane_t

0x2328,	// (0x00002328) popup_fast_swap_window_ParamLimits

0x2328,	// (0x00002328) popup_fast_swap_window

0x2344,	// (0x00002344) popup_side_volume_key_window

0x235e,	// (0x0000235e) stacon_top_pane

0x2368,	// (0x00002368) status_pane_ParamLimits

0x2368,	// (0x00002368) status_pane

0x235e,	// (0x0000235e) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x126e,	// (0x0000126e) scroll_pane_cp121

0x1265,	// (0x00001265) set_content_pane

0xc0ca,	// (0x0000c0ca) bg_active_tab_pane_g1_cp1

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp1

0xc0d3,	// (0x0000c0d3) bg_active_tab_pane_g3_cp1

0xc0ca,	// (0x0000c0ca) bg_passive_tab_pane_g1_cp1

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp1

0xc0d3,	// (0x0000c0d3) bg_passive_tab_pane_g3_cp1

0xc0dc,	// (0x0000c0dc) bg_active_tab_pane_g1_cp2

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp2

0xc0e5,	// (0x0000c0e5) bg_active_tab_pane_g3_cp2

0xc0dc,	// (0x0000c0dc) bg_passive_tab_pane_g1_cp2

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp2

0xc0e5,	// (0x0000c0e5) bg_passive_tab_pane_g3_cp2

0xc0ee,	// (0x0000c0ee) bg_active_tab_pane_g1_cp3

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp3

0xc0f7,	// (0x0000c0f7) bg_active_tab_pane_g3_cp3

0xc0ee,	// (0x0000c0ee) bg_passive_tab_pane_g1_cp3

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp3

0xc0f7,	// (0x0000c0f7) bg_passive_tab_pane_g3_cp3

0xc100,	// (0x0000c100) bg_active_tab_pane_g1_cp4

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp4

0xc109,	// (0x0000c109) bg_active_tab_pane_g3_cp4

0xc100,	// (0x0000c100) bg_passive_tab_pane_g1_cp4

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp4

0xc109,	// (0x0000c109) bg_passive_tab_pane_g3_cp4

0x2279,	// (0x00002279) bg_active_tab_pane_g1_cp5

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp5

0x2282,	// (0x00002282) bg_active_tab_pane_g3_cp5

0x2279,	// (0x00002279) bg_passive_tab_pane_g1_cp5

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp5

0x2282,	// (0x00002282) bg_passive_tab_pane_g3_cp5

0x5791,	// (0x00005791) list_set_graphic_pane_ParamLimits

0x5791,	// (0x00005791) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_ParamLimits

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1

0x22b5,	// (0x000022b5) list_set_graphic_pane_g2_ParamLimits

0x22b5,	// (0x000022b5) list_set_graphic_pane_g2

0x0001,

0xac51,	// (0x0000ac51) list_set_graphic_pane_g_ParamLimits

0xac51,	// (0x0000ac51) list_set_graphic_pane_g

0x0009,

0xafde,	// (0x0000afde) volume_small_pane_cp_g

0xc112,	// (0x0000c112) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc112,	// (0x0000c112) list_double2_large_graphic_pane_g1_cp2

0xc120,	// (0x0000c120) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc120,	// (0x0000c120) list_double2_large_graphic_pane_g2_cp2

0x22f8,	// (0x000022f8) list_double2_large_graphic_pane_g3_cp2

0x2300,	// (0x00002300) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2300,	// (0x00002300) list_double2_large_graphic_pane_t1_cp2

0x2316,	// (0x00002316) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2316,	// (0x00002316) list_double2_large_graphic_pane_t2_cp2

0xd26f,	// (0x0000d26f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd26f,	// (0x0000d26f) list_double_large_graphic_pane_g1_cp2

0xd282,	// (0x0000d282) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd282,	// (0x0000d282) list_double_large_graphic_pane_g2_cp2

0x2486,	// (0x00002486) list_double_large_graphic_pane_g3_cp2

0x4aa5,	// (0x00004aa5) list_double_large_graphic_pane_g4_cp

0x4aad,	// (0x00004aad) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4aad,	// (0x00004aad) list_double_large_graphic_pane_t1_cp2

0x4ac4,	// (0x00004ac4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ac4,	// (0x00004ac4) list_double_large_graphic_pane_t2_cp2

0xc131,	// (0x0000c131) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc131,	// (0x0000c131) list_double2_graphic_pane_g1_cp2

0xc13f,	// (0x0000c13f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc13f,	// (0x0000c13f) list_double2_graphic_pane_g2_cp2

0xc150,	// (0x0000c150) list_double2_graphic_pane_g3_cp2

0x239f,	// (0x0000239f) list_double2_graphic_pane_t1_cp2_ParamLimits

0x239f,	// (0x0000239f) list_double2_graphic_pane_t1_cp2

0x23b5,	// (0x000023b5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b5,	// (0x000023b5) list_double2_graphic_pane_t2_cp2

0x23c7,	// (0x000023c7) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000023c7) list_single_number_heading_pane_g1_cp2

0x23d3,	// (0x000023d3) list_single_number_heading_pane_g2_cp2

0x23db,	// (0x000023db) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x000023db) list_single_number_heading_pane_t1_cp2

0xc15a,	// (0x0000c15a) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc15a,	// (0x0000c15a) list_single_number_heading_pane_t2_cp2

0x2405,	// (0x00002405) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2405,	// (0x00002405) list_single_number_heading_pane_t3_cp2

0x23c7,	// (0x000023c7) list_single_heading_pane_g1_cp2_ParamLimits

0x23c7,	// (0x000023c7) list_single_heading_pane_g1_cp2

0x23d3,	// (0x000023d3) list_single_heading_pane_g2_cp2

0x23db,	// (0x000023db) list_single_heading_pane_t1_cp2_ParamLimits

0x23db,	// (0x000023db) list_single_heading_pane_t1_cp2

0xd25b,	// (0x0000d25b) list_single_heading_pane_t2_cp2_ParamLimits

0xd25b,	// (0x0000d25b) list_single_heading_pane_t2_cp2

0x34dd,	// (0x000034dd) list_double_graphic_pane_g1_cp2_ParamLimits

0x34dd,	// (0x000034dd) list_double_graphic_pane_g1_cp2

0x47dd,	// (0x000047dd) list_double_graphic_pane_g2_cp2_ParamLimits

0x47dd,	// (0x000047dd) list_double_graphic_pane_g2_cp2

0x47ec,	// (0x000047ec) list_double_graphic_pane_g3_cp2

0x47f4,	// (0x000047f4) list_double_graphic_pane_t1_cp2_ParamLimits

0x47f4,	// (0x000047f4) list_double_graphic_pane_t1_cp2

0x480a,	// (0x0000480a) list_double_graphic_pane_t2_cp2_ParamLimits

0x480a,	// (0x0000480a) list_double_graphic_pane_t2_cp2

0x247a,	// (0x0000247a) list_double_number_pane_g1_cp2_ParamLimits

0x247a,	// (0x0000247a) list_double_number_pane_g1_cp2

0x2486,	// (0x00002486) list_double_number_pane_g2_cp2

0xd247,	// (0x0000d247) list_double_number_pane_t1_cp2_ParamLimits

0xd247,	// (0x0000d247) list_double_number_pane_t1_cp2

0x47b5,	// (0x000047b5) list_double_number_pane_t2_cp2_ParamLimits

0x47b5,	// (0x000047b5) list_double_number_pane_t2_cp2

0x47cb,	// (0x000047cb) list_double_number_pane_t3_cp2_ParamLimits

0x47cb,	// (0x000047cb) list_double_number_pane_t3_cp2

0xd184,	// (0x0000d184) list_single_graphic_pane_g1_cp2_ParamLimits

0xd184,	// (0x0000d184) list_single_graphic_pane_g1_cp2

0x24de,	// (0x000024de) list_single_graphic_pane_g2_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_graphic_pane_g2_cp2

0x24ea,	// (0x000024ea) list_single_graphic_pane_g3_cp2

0x464f,	// (0x0000464f) list_single_graphic_pane_t1_cp2_ParamLimits

0x464f,	// (0x0000464f) list_single_graphic_pane_t1_cp2

0x24de,	// (0x000024de) list_single_number_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_number_pane_g1_cp2

0x24ea,	// (0x000024ea) list_single_number_pane_g2_cp2

0x464f,	// (0x0000464f) list_single_number_pane_t1_cp2_ParamLimits

0x464f,	// (0x0000464f) list_single_number_pane_t1_cp2

0xd170,	// (0x0000d170) list_single_number_pane_t2_cp2_ParamLimits

0xd170,	// (0x0000d170) list_single_number_pane_t2_cp2

0xc120,	// (0x0000c120) list_double2_pane_g1_cp2_ParamLimits

0xc120,	// (0x0000c120) list_double2_pane_g1_cp2

0x22f8,	// (0x000022f8) list_double2_pane_g2_cp2

0x2452,	// (0x00002452) list_double2_pane_t1_cp2_ParamLimits

0x2452,	// (0x00002452) list_double2_pane_t1_cp2

0x2468,	// (0x00002468) list_double2_pane_t2_cp2_ParamLimits

0x2468,	// (0x00002468) list_double2_pane_t2_cp2

0x247a,	// (0x0000247a) list_double_pane_g1_cp2_ParamLimits

0x247a,	// (0x0000247a) list_double_pane_g1_cp2

0x2486,	// (0x00002486) list_double_pane_g2_cp2

0x248e,	// (0x0000248e) list_double_pane_t1_cp2_ParamLimits

0x248e,	// (0x0000248e) list_double_pane_t1_cp2

0x24a4,	// (0x000024a4) list_double_pane_t2_cp2_ParamLimits

0x24a4,	// (0x000024a4) list_double_pane_t2_cp2

0x24ce,	// (0x000024ce) list_single_pane_cp2_g3

0x24de,	// (0x000024de) list_single_pane_g1_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_pane_g1_cp2

0x24ea,	// (0x000024ea) list_single_pane_g2_cp2

0x24f2,	// (0x000024f2) list_single_pane_t1_cp2_ParamLimits

0x24f2,	// (0x000024f2) list_single_pane_t1_cp2

0xc186,	// (0x0000c186) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc186,	// (0x0000c186) list_single_large_graphic_pane_g1_cp2

0x2518,	// (0x00002518) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2518,	// (0x00002518) list_single_large_graphic_pane_g2_cp2

0x2524,	// (0x00002524) list_single_large_graphic_pane_g3_cp2

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x252c,	// (0x0000252c) list_single_large_graphic_pane_g4_cp1

0x2546,	// (0x00002546) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2546,	// (0x00002546) list_single_large_graphic_pane_t1_cp2

0x44c0,	// (0x000044c0) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44c0,	// (0x000044c0) list_single_graphic_heading_pane_g1_cp2

0xd00f,	// (0x0000d00f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd00f,	// (0x0000d00f) list_single_graphic_heading_pane_g4_cp2

0x24ea,	// (0x000024ea) list_single_graphic_heading_pane_g5_cp2

0x44cc,	// (0x000044cc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44cc,	// (0x000044cc) list_single_graphic_heading_pane_t1_cp2

0xd020,	// (0x0000d020) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd020,	// (0x0000d020) list_single_graphic_heading_pane_t2_cp2

0x4481,	// (0x00004481) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4481,	// (0x00004481) list_single_2graphic_pane_g1_cp2

0xd00f,	// (0x0000d00f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd00f,	// (0x0000d00f) list_single_2graphic_pane_g2_cp2

0x24ea,	// (0x000024ea) list_single_2graphic_pane_g3_cp2

0x449e,	// (0x0000449e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x449e,	// (0x0000449e) list_single_2graphic_pane_g4_cp2

0x44aa,	// (0x000044aa) list_single_2graphic_pane_t1_cp2_ParamLimits

0x44aa,	// (0x000044aa) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4069,	// (0x00004069) list_highlight_pane_g1_cp1

0x4071,	// (0x00004071) list_highlight_pane_g2_cp1

0x4079,	// (0x00004079) list_highlight_pane_g3_cp1

0x4081,	// (0x00004081) list_highlight_pane_g4_cp1

0x4089,	// (0x00004089) list_highlight_pane_g5_cp1

0x4091,	// (0x00004091) list_highlight_pane_g6_cp1

0x4099,	// (0x00004099) list_highlight_pane_g7_cp1

0x40a1,	// (0x000040a1) list_highlight_pane_g8_cp1

0x40a9,	// (0x000040a9) list_highlight_pane_g9_cp1

0xcfd1,	// (0x0000cfd1) form_field_slider_pane_t3

0xcfe1,	// (0x0000cfe1) form_field_slider_pane_t4

0x3f9d,	// (0x00003f9d) slider_form_pane_ParamLimits

0x3f9d,	// (0x00003f9d) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48d5,	// (0x000048d5) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xade6,	// (0x0000ade6) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x255c,	// (0x0000255c) text_digital

0x256b,	// (0x0000256b) text_primary

0x257a,	// (0x0000257a) text_primary_small

0x2589,	// (0x00002589) text_secondary

0x2598,	// (0x00002598) text_title

0x51e9,	// (0x000051e9) bg_passive_tab_pane_g1_cp3_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp3_srt

0x51f2,	// (0x000051f2) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x51fb,	// (0x000051fb) tabs_4_active_pane_srt_g1

0xd563,	// (0x0000d563) tabs_4_active_pane_srt_t1_ParamLimits

0xd563,	// (0x0000d563) tabs_4_active_pane_srt_t1

0x51e9,	// (0x000051e9) bg_active_tab_pane_g1_cp3_copy1

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp3_copy1

0x51f2,	// (0x000051f2) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_srt

0x4d92,	// (0x00004d92) bg_passive_tab_pane_g1_cp4_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp4_srt

0x4d9b,	// (0x00004d9b) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xd338,	// (0x0000d338) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd338,	// (0x0000d338) tabs_2_long_active_pane_srt_t1

0x4d92,	// (0x00004d92) bg_active_tab_pane_g1_cp4_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp4_srt

0x4d9b,	// (0x00004d9b) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_srt

0x2279,	// (0x00002279) bg_passive_tab_pane_g1_cp5_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp5_srt

0x2282,	// (0x00002282) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xd322,	// (0x0000d322) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd322,	// (0x0000d322) tabs_3_long_active_pane_srt_t1

0x2279,	// (0x00002279) bg_active_tab_pane_g1_cp5_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp5_srt

0x2282,	// (0x00002282) bg_active_tab_pane_g3_cp5_srt

0x4d72,	// (0x00004d72) navi_text_pane_srt_t1

0x4d6a,	// (0x00004d6a) navi_icon_pane_srt_g1

0x2804,	// (0x00002804) midp_editing_number_pane_srt

0x25a7,	// (0x000025a7) midp_ticker_pane_srt

0x280c,	// (0x0000280c) midp_ticker_pane_srt_g1

0x2814,	// (0x00002814) midp_ticker_pane_srt_g2

0x0001,

0xac70,	// (0x0000ac70) midp_ticker_pane_srt_g

0x281c,	// (0x0000281c) midp_ticker_pane_srt_t1

0x4d5b,	// (0x00004d5b) midp_editing_number_pane_t1_copy1

0x2b0e,	// (0x00002b0e) listscroll_midp_pane

0x2b0e,	// (0x00002b0e) midp_form_pane

0x2613,	// (0x00002613) midp_info_popup_window_ParamLimits

0x2613,	// (0x00002613) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c9e,	// (0x00003c9e) listscroll_midp_info_pane_ParamLimits

0x3c9e,	// (0x00003c9e) listscroll_midp_info_pane

0x3c86,	// (0x00003c86) listscroll_form_midp_pane_ParamLimits

0x3c86,	// (0x00003c86) listscroll_form_midp_pane

0x3c92,	// (0x00003c92) scroll_bar_cp050

0xcfc5,	// (0x0000cfc5) list_midp_pane

0x5f7c,	// (0x00005f7c) signal_pane_g2_cp

0x3ba0,	// (0x00003ba0) listscroll_midp_info_pane_t1_ParamLimits

0x3ba0,	// (0x00003ba0) listscroll_midp_info_pane_t1

0x3bb8,	// (0x00003bb8) listscroll_midp_info_pane_t2_ParamLimits

0x3bb8,	// (0x00003bb8) listscroll_midp_info_pane_t2

0x3bf6,	// (0x00003bf6) listscroll_midp_info_pane_t3_ParamLimits

0x3bf6,	// (0x00003bf6) listscroll_midp_info_pane_t3

0x3c30,	// (0x00003c30) listscroll_midp_info_pane_t4_ParamLimits

0x3c30,	// (0x00003c30) listscroll_midp_info_pane_t4

0x0003,

0xad21,	// (0x0000ad21) listscroll_midp_info_pane_t_ParamLimits

0xad21,	// (0x0000ad21) listscroll_midp_info_pane_t

0x1646,	// (0x00001646) scroll_pane_cp21

0x3b44,	// (0x00003b44) form_midp_field_choice_group_pane

0x3b4d,	// (0x00003b4d) form_midp_field_text_pane

0x3b86,	// (0x00003b86) form_midp_field_time_pane

0x3b8e,	// (0x00003b8e) form_midp_gauge_slider_pane

0x3b97,	// (0x00003b97) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcfa9,	// (0x0000cfa9) list_single_midp_pane_ParamLimits

0xcfa9,	// (0x0000cfa9) list_single_midp_pane

0xcf85,	// (0x0000cf85) form_midp_field_text_pane_t1

0x37d3,	// (0x000037d3) input_focus_pane_cp050

0x3af7,	// (0x00003af7) list_midp_form_text_pane

0x3a87,	// (0x00003a87) form_midp_field_choice_group_pane_t1

0x3a95,	// (0x00003a95) input_focus_pane_cp051

0x3aa9,	// (0x00003aa9) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a6b,	// (0x00003a6b) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a79,	// (0x00003a79) form_midp_field_time_pane_t2

0x0001,

0x26c3,	// (0x000026c3) aid_navinavi_width_2_pane

0xad1c,	// (0x0000ad1c) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a2b,	// (0x00003a2b) form_midp_gauge_slider_pane_t1

0x3a39,	// (0x00003a39) form_midp_gauge_slider_pane_t2

0xcf65,	// (0x0000cf65) form_midp_gauge_slider_pane_t3

0xcf75,	// (0x0000cf75) form_midp_gauge_slider_pane_t4

0x0003,

0xf150,	// (0x0000f150) form_midp_gauge_slider_pane_t

0x3a63,	// (0x00003a63) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39f8,	// (0x000039f8) form_midp_gauge_wait_pane_t1_ParamLimits

0x39f8,	// (0x000039f8) form_midp_gauge_wait_pane_t1

0x3a0a,	// (0x00003a0a) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a0a,	// (0x00003a0a) form_midp_gauge_wait_pane_t2

0x0001,

0xad0e,	// (0x0000ad0e) form_midp_gauge_wait_pane_t_ParamLimits

0xad0e,	// (0x0000ad0e) form_midp_gauge_wait_pane_t

0x3a1c,	// (0x00003a1c) form_midp_wait_pane_ParamLimits

0x3a1c,	// (0x00003a1c) form_midp_wait_pane

0x39c2,	// (0x000039c2) form_midp_image_pane_g1

0x39cb,	// (0x000039cb) form_midp_image_pane_t1

0x39da,	// (0x000039da) form_midp_image_pane_t2

0x39e9,	// (0x000039e9) form_midp_image_pane_t3

0x0002,

0xad07,	// (0x0000ad07) form_midp_image_pane_t

0x39aa,	// (0x000039aa) list_single_midp_pane_g1

0x39b3,	// (0x000039b3) list_single_midp_pane_t1

0xcf4e,	// (0x0000cf4e) list_midp_form_item_pane_ParamLimits

0xcf4e,	// (0x0000cf4e) list_midp_form_item_pane

0x266b,	// (0x0000266b) list_midp_form_item_pane_t1

0x267a,	// (0x0000267a) midp_ticker_pane_g1

0x2686,	// (0x00002686) midp_ticker_pane_g2

0x0001,

0xac56,	// (0x0000ac56) midp_ticker_pane_g

0x2692,	// (0x00002692) midp_ticker_pane_t1

0x5049,	// (0x00005049) midp_editing_number_pane_t1

0x5027,	// (0x00005027) midp_editing_number_pane

0x5036,	// (0x00005036) midp_ticker_pane

0x4d23,	// (0x00004d23) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d2b,	// (0x00004d2b) listscroll_ai_message_pane

0x4cad,	// (0x00004cad) ai_message_heading_pane_g1_ParamLimits

0x4cad,	// (0x00004cad) ai_message_heading_pane_g1

0x4cb9,	// (0x00004cb9) ai_message_heading_pane_g2_ParamLimits

0x4cb9,	// (0x00004cb9) ai_message_heading_pane_g2

0x4cc5,	// (0x00004cc5) ai_message_heading_pane_g3_ParamLimits

0x4cc5,	// (0x00004cc5) ai_message_heading_pane_g3

0x4cd1,	// (0x00004cd1) ai_message_heading_pane_g4_ParamLimits

0x4cd1,	// (0x00004cd1) ai_message_heading_pane_g4

0x0003,

0xae48,	// (0x0000ae48) ai_message_heading_pane_g_ParamLimits

0xae48,	// (0x0000ae48) ai_message_heading_pane_g

0x4cdd,	// (0x00004cdd) ai_message_heading_pane_t1_ParamLimits

0x4cdd,	// (0x00004cdd) ai_message_heading_pane_t1

0x4cf7,	// (0x00004cf7) ai_message_heading_pane_t2_ParamLimits

0x4cf7,	// (0x00004cf7) ai_message_heading_pane_t2

0x0001,

0xae51,	// (0x0000ae51) ai_message_heading_pane_t_ParamLimits

0xae51,	// (0x0000ae51) ai_message_heading_pane_t

0x4d09,	// (0x00004d09) bg_popup_heading_pane_cp1_ParamLimits

0x4d09,	// (0x00004d09) bg_popup_heading_pane_cp1

0x4c9b,	// (0x00004c9b) list_ai_message_pane_ParamLimits

0x4c9b,	// (0x00004c9b) list_ai_message_pane

0x1646,	// (0x00001646) scroll_pane_cp10

0x4be7,	// (0x00004be7) list_ai_message_pane_g1

0x4bef,	// (0x00004bef) list_ai_message_pane_g2

0x0001,

0xae25,	// (0x0000ae25) list_ai_message_pane_g

0x4bf7,	// (0x00004bf7) list_ai_message_pane_t1_ParamLimits

0x4bf7,	// (0x00004bf7) list_ai_message_pane_t1

0x4c0c,	// (0x00004c0c) list_ai_message_pane_t2_ParamLimits

0x4c0c,	// (0x00004c0c) list_ai_message_pane_t2

0x4c21,	// (0x00004c21) list_ai_message_pane_t3_ParamLimits

0x4c21,	// (0x00004c21) list_ai_message_pane_t3

0x4c36,	// (0x00004c36) list_ai_message_pane_t4_ParamLimits

0x4c36,	// (0x00004c36) list_ai_message_pane_t4

0x0003,

0xae2a,	// (0x0000ae2a) list_ai_message_pane_t_ParamLimits

0xae2a,	// (0x0000ae2a) list_ai_message_pane_t

0xd2eb,	// (0x0000d2eb) cell_ai_soft_ind_pane_ParamLimits

0xd2eb,	// (0x0000d2eb) cell_ai_soft_ind_pane

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a4,	// (0x000026a4) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b1,	// (0x000026b1) text_secondary_cp56_ParamLimits

0x26b1,	// (0x000026b1) text_secondary_cp56

0x4ba6,	// (0x00004ba6) example_general_pane_ParamLimits

0x4ba6,	// (0x00004ba6) example_general_pane

0x4bb2,	// (0x00004bb2) example_parent_pane_g1_ParamLimits

0x4bb2,	// (0x00004bb2) example_parent_pane_g1

0x4bbe,	// (0x00004bbe) example_parent_pane_t1_ParamLimits

0x4bbe,	// (0x00004bbe) example_parent_pane_t1

0xc7a5,	// (0x0000c7a5) popup_preview_text_window_ParamLimits

0xc7a5,	// (0x0000c7a5) popup_preview_text_window

0x24d6,	// (0x000024d6) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x48dd,	// (0x000048dd) popup_preview_text_window_t1_ParamLimits

0x48dd,	// (0x000048dd) popup_preview_text_window_t1

0x48fb,	// (0x000048fb) popup_preview_text_window_t2_ParamLimits

0x48fb,	// (0x000048fb) popup_preview_text_window_t2

0x4944,	// (0x00004944) popup_preview_text_window_t3_ParamLimits

0x4944,	// (0x00004944) popup_preview_text_window_t3

0x4989,	// (0x00004989) popup_preview_text_window_t4_ParamLimits

0x4989,	// (0x00004989) popup_preview_text_window_t4

0x0004,

0xadf9,	// (0x0000adf9) popup_preview_text_window_t_ParamLimits

0xadf9,	// (0x0000adf9) popup_preview_text_window_t

0x4a07,	// (0x00004a07) scroll_pane_cp11

0x3643,	// (0x00003643) bg_popup_preview_window_pane_g1

0x489d,	// (0x0000489d) bg_popup_preview_window_pane_g2

0x48a5,	// (0x000048a5) bg_popup_preview_window_pane_g3

0x48ad,	// (0x000048ad) bg_popup_preview_window_pane_g4

0x48b5,	// (0x000048b5) bg_popup_preview_window_pane_g5

0x48bd,	// (0x000048bd) bg_popup_preview_window_pane_g6

0x48c5,	// (0x000048c5) bg_popup_preview_window_pane_g7

0x48cd,	// (0x000048cd) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc721,	// (0x0000c721) popup_midp_note_alarm_window_ParamLimits

0xc721,	// (0x0000c721) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xbd44,	// (0x0000bd44) form_field_data_pane_g1

0xbd4e,	// (0x0000bd4e) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xbe9b,	// (0x0000be9b) input_popup_find_pane_g1_ParamLimits

0xbe9b,	// (0x0000be9b) input_popup_find_pane_g1

0x1975,	// (0x00001975) aid_navi_side_left_pane

0x198a,	// (0x0000198a) aid_navi_side_right_pane

0x4164,	// (0x00004164) bg_popup_window_pane_cp30_ParamLimits

0x4164,	// (0x00004164) bg_popup_window_pane_cp30

0x41de,	// (0x000041de) popup_midp_note_alarm_window_g1_ParamLimits

0x41de,	// (0x000041de) popup_midp_note_alarm_window_g1

0x420e,	// (0x0000420e) popup_midp_note_alarm_window_t1_ParamLimits

0x420e,	// (0x0000420e) popup_midp_note_alarm_window_t1

0x42af,	// (0x000042af) popup_midp_note_alarm_window_t2_ParamLimits

0x42af,	// (0x000042af) popup_midp_note_alarm_window_t2

0x435d,	// (0x0000435d) popup_midp_note_alarm_window_t3_ParamLimits

0x435d,	// (0x0000435d) popup_midp_note_alarm_window_t3

0x4385,	// (0x00004385) popup_midp_note_alarm_window_t4_ParamLimits

0x4385,	// (0x00004385) popup_midp_note_alarm_window_t4

0x43a5,	// (0x000043a5) popup_midp_note_alarm_window_t5_ParamLimits

0x43a5,	// (0x000043a5) popup_midp_note_alarm_window_t5

0x000a,

0xad96,	// (0x0000ad96) popup_midp_note_alarm_window_t_ParamLimits

0xad96,	// (0x0000ad96) popup_midp_note_alarm_window_t

0x4451,	// (0x00004451) wait_bar_pane_cp1_ParamLimits

0x4451,	// (0x00004451) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e42,	// (0x00003e42) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xbd68,	// (0x0000bd68) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x5273,	// (0x00005273) aid_size_cell_graphic_pane

0xbde7,	// (0x0000bde7) data_form_pane_t1_ParamLimits

0xd4a1,	// (0x0000d4a1) data_form_wide_pane_t1_ParamLimits

0xcb61,	// (0x0000cb61) bg_status_flat_pane

0xb601,	// (0x0000b601) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xf026,	// (0x0000f026) title_pane_t_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_signal_ParamLimits

0x1c97,	// (0x00001c97) level_2_signal_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_signal_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_signal_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_signal_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_signal_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_signal_ParamLimits

0x1c8a,	// (0x00001c8a) level_1_battery_ParamLimits

0x1c97,	// (0x00001c97) level_2_battery_ParamLimits

0x1ca4,	// (0x00001ca4) level_3_battery_ParamLimits

0x1cb1,	// (0x00001cb1) level_4_battery_ParamLimits

0x1cbe,	// (0x00001cbe) level_5_battery_ParamLimits

0x1ccb,	// (0x00001ccb) level_6_battery_ParamLimits

0x1cd8,	// (0x00001cd8) level_7_battery_ParamLimits

0x4069,	// (0x00004069) bg_status_flat_pane_g1

0x4071,	// (0x00004071) bg_status_flat_pane_g2

0x4079,	// (0x00004079) bg_status_flat_pane_g3

0x4081,	// (0x00004081) bg_status_flat_pane_g4

0x4089,	// (0x00004089) bg_status_flat_pane_g5

0x4091,	// (0x00004091) bg_status_flat_pane_g6

0x4099,	// (0x00004099) bg_status_flat_pane_g7

0xb695,	// (0x0000b695) tabs_3_active_pane_t1_ParamLimits

0xb695,	// (0x0000b695) tabs_3_passive_pane_t1_ParamLimits

0xb6af,	// (0x0000b6af) tabs_4_active_pane_t1_ParamLimits

0xb6af,	// (0x0000b6af) tabs_4_1_passive_pane_t1_ParamLimits

0xbeb1,	// (0x0000beb1) tabs_2_active_pane_t1_ParamLimits

0xbeb1,	// (0x0000beb1) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xbec3,	// (0x0000bec3) tabs_2_long_active_pane_t1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp4_ParamLimits

0x3700,	// (0x00003700) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xbed6,	// (0x0000bed6) tabs_3_long_active_pane_t1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_passive_tab_pane_cp5_ParamLimits

0x3700,	// (0x00003700) list_single_midp_graphic_pane_t1

0xcb61,	// (0x0000cb61) bg_status_flat_pane_ParamLimits

0x3237,	// (0x00003237) indicator_pane_cp2_ParamLimits

0x3237,	// (0x00003237) indicator_pane_cp2

0xccd9,	// (0x0000ccd9) navi_pane_srt_ParamLimits

0xccd9,	// (0x0000ccd9) navi_pane_srt

0x3380,	// (0x00003380) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x25a7,	// (0x000025a7) copy_highlight_pane

0x25a7,	// (0x000025a7) cursor_graphics_pane

0x25a7,	// (0x000025a7) graphic_within_text_pane

0x25a7,	// (0x000025a7) link_highlight_pane

0x49ca,	// (0x000049ca) popup_preview_text_window_t5_ParamLimits

0x49ca,	// (0x000049ca) popup_preview_text_window_t5

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

0x4107,	// (0x00004107) graphic_text_primary_pane

0x4110,	// (0x00004110) graphic_text_primary_small_pane

0x26dc,	// (0x000026dc) graphic_text_secondary_pane

0x26cb,	// (0x000026cb) graphic_text_title_pane

0xc22f,	// (0x0000c22f) cursor_primary_pane_g1

0x40f9,	// (0x000040f9) cursor_text_primary_t1

0xd005,	// (0x0000d005) cursor_primary_small_pane_g1

0x40eb,	// (0x000040eb) cursor_text_primary_small_t1

0xcffb,	// (0x0000cffb) cursor_primary_small_pane_g1_copy1

0x40d3,	// (0x000040d3) cursor_text_primary_small_t1_copy1

0x40b1,	// (0x000040b1) cursor_text_title_t1

0xcff1,	// (0x0000cff1) cursor_title_pane_g1

0xc22f,	// (0x0000c22f) cursor_digital_pane_g1

0x26fe,	// (0x000026fe) cursor_text_digital_t1

0x4052,	// (0x00004052) link_highlight_primary_pane_g1

0x405a,	// (0x0000405a) link_highlight_primary_pane_t1

0x270c,	// (0x0000270c) link_highlight_primary_small_pane_g1

0x2714,	// (0x00002714) link_highlight_primary_small_pane_t1

0x270c,	// (0x0000270c) link_highlight_secondary_pane_g1

0x2723,	// (0x00002723) link_highlight_secondary_pane_t1

0x3fc6,	// (0x00003fc6) link_highlight_title_pane_g1

0x3fce,	// (0x00003fce) link_highlight_title_pane_t1

0x3faf,	// (0x00003faf) link_highlight_digital_pane_g1

0x3fb7,	// (0x00003fb7) link_highlight_digital_pane_t1

0x3e87,	// (0x00003e87) copy_highlight_primary_pane_g1

0x3e8f,	// (0x00003e8f) copy_highlight_primary_pane_t1

0x3e61,	// (0x00003e61) copy_highlight_primary_small_pane_g1

0x3e78,	// (0x00003e78) copy_highlight_primary_small_pane_t1

0x2732,	// (0x00002732) copy_highlight_secondary_pane_g1

0x273a,	// (0x0000273a) copy_highlight_secondary_pane_t1

0x3e61,	// (0x00003e61) copy_highlight_title_pane_g1

0x3e69,	// (0x00003e69) copy_highlight_title_pane_t1

0x3e87,	// (0x00003e87) copy_highlight_digital_pane_g1

0x54f9,	// (0x000054f9) copy_highlight_digital_pane_t1

0x544d,	// (0x0000544d) graphic_text_primary_pane_g1

0x54dd,	// (0x000054dd) graphic_text_primary_pane_t1

0x54eb,	// (0x000054eb) graphic_text_primary_pane_t2

0x0001,

0xaec5,	// (0x0000aec5) graphic_text_primary_pane_t

0x54b9,	// (0x000054b9) graphic_text_primary_small_pane_g1

0x54c1,	// (0x000054c1) graphic_text_primary_small_pane_t1

0x54cf,	// (0x000054cf) graphic_text_primary_small_pane_t2

0x0001,

0xaec0,	// (0x0000aec0) graphic_text_primary_small_pane_t

0x5495,	// (0x00005495) graphic_text_secondary_pane_g1

0x549d,	// (0x0000549d) graphic_text_secondary_pane_t1

0x54ab,	// (0x000054ab) graphic_text_secondary_pane_t2

0x0001,

0xaebb,	// (0x0000aebb) graphic_text_secondary_pane_t

0x5471,	// (0x00005471) graphic_text_title_pane_g1

0x5479,	// (0x00005479) graphic_text_title_pane_t1

0x5487,	// (0x00005487) graphic_text_title_pane_t2

0x0001,

0xaeb6,	// (0x0000aeb6) graphic_text_title_pane_t

0x544d,	// (0x0000544d) graphic_text_digital_pane_g1

0x5455,	// (0x00005455) graphic_text_digital_pane_t1

0x5463,	// (0x00005463) graphic_text_digital_pane_t2

0x0001,

0xaeb1,	// (0x0000aeb1) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x5418,	// (0x00005418) navi_navi_icon_text_pane_srt

0x5420,	// (0x00005420) navi_navi_pane_srt_g1_ParamLimits

0x5420,	// (0x00005420) navi_navi_pane_srt_g1

0x5432,	// (0x00005432) navi_navi_pane_srt_g2_ParamLimits

0x5432,	// (0x00005432) navi_navi_pane_srt_g2

0x0001,

0xaeac,	// (0x0000aeac) navi_navi_pane_srt_g_ParamLimits

0xaeac,	// (0x0000aeac) navi_navi_pane_srt_g

0x5444,	// (0x00005444) navi_navi_tabs_pane_srt

0x5418,	// (0x00005418) navi_navi_text_pane_srt

0x5418,	// (0x00005418) navi_navi_volume_pane_srt

0x5409,	// (0x00005409) navi_navi_text_pane_srt_t1

0x53e4,	// (0x000053e4) navi_navi_volume_pane_srt_g1

0x53ec,	// (0x000053ec) volume_small_pane_srt_ParamLimits

0x53ec,	// (0x000053ec) volume_small_pane_srt

0x2749,	// (0x00002749) volume_small_pane_srt_g1_ParamLimits

0x2749,	// (0x00002749) volume_small_pane_srt_g1

0x2759,	// (0x00002759) volume_small_pane_srt_g2_ParamLimits

0x2759,	// (0x00002759) volume_small_pane_srt_g2

0x276a,	// (0x0000276a) volume_small_pane_srt_g3_ParamLimits

0x276a,	// (0x0000276a) volume_small_pane_srt_g3

0x277b,	// (0x0000277b) volume_small_pane_srt_g4_ParamLimits

0x277b,	// (0x0000277b) volume_small_pane_srt_g4

0x278c,	// (0x0000278c) volume_small_pane_srt_g5_ParamLimits

0x278c,	// (0x0000278c) volume_small_pane_srt_g5

0x279d,	// (0x0000279d) volume_small_pane_srt_g6_ParamLimits

0x279d,	// (0x0000279d) volume_small_pane_srt_g6

0x27ae,	// (0x000027ae) volume_small_pane_srt_g7_ParamLimits

0x27ae,	// (0x000027ae) volume_small_pane_srt_g7

0x27bf,	// (0x000027bf) volume_small_pane_srt_g8_ParamLimits

0x27bf,	// (0x000027bf) volume_small_pane_srt_g8

0x27d0,	// (0x000027d0) volume_small_pane_srt_g9_ParamLimits

0x27d0,	// (0x000027d0) volume_small_pane_srt_g9

0x27e1,	// (0x000027e1) volume_small_pane_srt_g10_ParamLimits

0x27e1,	// (0x000027e1) volume_small_pane_srt_g10

0x0009,

0xac5b,	// (0x0000ac5b) volume_small_pane_srt_g_ParamLimits

0xac5b,	// (0x0000ac5b) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x53d2,	// (0x000053d2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x53d2,	// (0x000053d2) navi_navi_icon_text_pane_srt_t1

0x4107,	// (0x00004107) navi_tabs_2_long_pane_srt

0x4107,	// (0x00004107) navi_tabs_2_pane_srt

0x4107,	// (0x00004107) navi_tabs_3_long_pane_srt

0x4107,	// (0x00004107) navi_tabs_3_pane_srt

0x4107,	// (0x00004107) navi_tabs_4_pane_srt

0x53aa,	// (0x000053aa) tabs_2_active_pane_srt_ParamLimits

0x53aa,	// (0x000053aa) tabs_2_active_pane_srt

0x53ba,	// (0x000053ba) tabs_2_passive_pane_srt_ParamLimits

0x53ba,	// (0x000053ba) tabs_2_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp1_srt

0x537e,	// (0x0000537e) bg_passive_tab_pane_g1_cp1_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp1_srt

0x5387,	// (0x00005387) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x5390,	// (0x00005390) tabs_2_active_pane_srt_g1

0xd5df,	// (0x0000d5df) tabs_2_active_pane_srt_t1_ParamLimits

0xd5df,	// (0x0000d5df) tabs_2_active_pane_srt_t1

0x537e,	// (0x0000537e) bg_active_tab_pane_g1_cp1_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp1_srt

0x5387,	// (0x00005387) bg_active_tab_pane_g3_cp1_srt

0x534b,	// (0x0000534b) tabs_3_active_pane_srt_ParamLimits

0x534b,	// (0x0000534b) tabs_3_active_pane_srt

0x535c,	// (0x0000535c) tabs_3_passive_pane_cp_srt_ParamLimits

0x535c,	// (0x0000535c) tabs_3_passive_pane_cp_srt

0x536d,	// (0x0000536d) tabs_3_passive_pane_srt_ParamLimits

0x536d,	// (0x0000536d) tabs_3_passive_pane_srt

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37d3,	// (0x000037d3) bg_passive_tab_pane_cp2_srt

0x27f2,	// (0x000027f2) bg_passive_tab_pane_g1_cp2_srt

0x20ae,	// (0x000020ae) bg_passive_tab_pane_g2_cp2_srt

0x27fb,	// (0x000027fb) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x5331,	// (0x00005331) tabs_3_active_pane_srt_g1

0xd5c9,	// (0x0000d5c9) tabs_3_active_pane_srt_t1_ParamLimits

0xd5c9,	// (0x0000d5c9) tabs_3_active_pane_srt_t1

0x27f2,	// (0x000027f2) bg_active_tab_pane_g1_cp2_srt

0x20ae,	// (0x000020ae) bg_active_tab_pane_g2_cp2_srt

0x27fb,	// (0x000027fb) bg_active_tab_pane_g3_cp2_srt

0x52e9,	// (0x000052e9) tabs_4_active_pane_srt_ParamLimits

0x52e9,	// (0x000052e9) tabs_4_active_pane_srt

0x52fb,	// (0x000052fb) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52fb,	// (0x000052fb) tabs_4_passive_pane_cp2_srt

0x2a94,	// (0x00002a94) aid_size_cell_toolbar

0x4e75,	// (0x00004e75) main_idle_act_pane_ParamLimits

0x2cad,	// (0x00002cad) popup_large_graphic_colour_window_ParamLimits

0xca25,	// (0x0000ca25) popup_toolbar_window_ParamLimits

0xca25,	// (0x0000ca25) popup_toolbar_window

0x5077,	// (0x00005077) list_single_graphic_2heading_pane_ParamLimits

0x5077,	// (0x00005077) list_single_graphic_2heading_pane

0x1a01,	// (0x00001a01) aid_size_cell_apps_grid_lsc_pane

0x1a13,	// (0x00001a13) aid_size_cell_apps_grid_prt_pane

0x2b0e,	// (0x00002b0e) bg_wml_button_pane_cp1_ParamLimits

0x2b0e,	// (0x00002b0e) bg_wml_button_pane_cp1

0xcf85,	// (0x0000cf85) form_midp_field_text_pane_t1_ParamLimits

0x37d3,	// (0x000037d3) input_focus_pane_cp050_ParamLimits

0x3af7,	// (0x00003af7) list_midp_form_text_pane_ParamLimits

0x3a95,	// (0x00003a95) input_focus_pane_cp051_ParamLimits

0x3aa9,	// (0x00003aa9) list_midp_choice_pane_ParamLimits

0xcf16,	// (0x0000cf16) list_single_2graphic_pane_cp3_ParamLimits

0xcf16,	// (0x0000cf16) list_single_2graphic_pane_cp3

0xcf2c,	// (0x0000cf2c) list_single_midp_graphic_pane_ParamLimits

0xcf2c,	// (0x0000cf2c) list_single_midp_graphic_pane

0x34dd,	// (0x000034dd) list_single_graphic_2heading_pane_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_2heading_pane_g1

0x247a,	// (0x0000247a) list_single_graphic_2heading_pane_g4_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_2heading_pane_g4

0x34e9,	// (0x000034e9) list_single_graphic_2heading_pane_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_2heading_pane_g5

0x0002,

0xacae,	// (0x0000acae) list_single_graphic_2heading_pane_g_ParamLimits

0xacae,	// (0x0000acae) list_single_graphic_2heading_pane_g

0x34f5,	// (0x000034f5) list_single_graphic_2heading_pane_t1_ParamLimits

0x34f5,	// (0x000034f5) list_single_graphic_2heading_pane_t1

0x3509,	// (0x00003509) list_single_graphic_2heading_pane_t2_ParamLimits

0x3509,	// (0x00003509) list_single_graphic_2heading_pane_t2

0x3523,	// (0x00003523) list_single_graphic_2heading_pane_t3_ParamLimits

0x3523,	// (0x00003523) list_single_graphic_2heading_pane_t3

0x0002,

0xacb5,	// (0x0000acb5) list_single_graphic_2heading_pane_t_ParamLimits

0xacb5,	// (0x0000acb5) list_single_graphic_2heading_pane_t

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp2

0x3565,	// (0x00003565) grid_toobar_pane

0x35a1,	// (0x000035a1) cell_toolbar_pane_ParamLimits

0x35a1,	// (0x000035a1) cell_toolbar_pane

0x35e7,	// (0x000035e7) cell_toolbar_pane_g1_ParamLimits

0x35e7,	// (0x000035e7) cell_toolbar_pane_g1

0x35fb,	// (0x000035fb) cell_toolbar_pane_g2_ParamLimits

0x35fb,	// (0x000035fb) cell_toolbar_pane_g2

0x0001,

0xacbc,	// (0x0000acbc) cell_toolbar_pane_g_ParamLimits

0xacbc,	// (0x0000acbc) cell_toolbar_pane_g

0x361d,	// (0x0000361d) grid_highlight_pane_cp2_ParamLimits

0x361d,	// (0x0000361d) grid_highlight_pane_cp2

0x3637,	// (0x00003637) toolbar_button_pane

0x3643,	// (0x00003643) toolbar_button_pane_g1

0x364b,	// (0x0000364b) toolbar_button_pane_g2

0x3653,	// (0x00003653) toolbar_button_pane_g3

0x365b,	// (0x0000365b) toolbar_button_pane_g4

0x3663,	// (0x00003663) toolbar_button_pane_g5

0x366b,	// (0x0000366b) toolbar_button_pane_g6

0x3673,	// (0x00003673) toolbar_button_pane_g7

0x367b,	// (0x0000367b) toolbar_button_pane_g8

0x3683,	// (0x00003683) toolbar_button_pane_g9

0x0009,

0xacc1,	// (0x0000acc1) toolbar_button_pane_g

0x3693,	// (0x00003693) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3693,	// (0x00003693) list_single_2graphic_pane_g1_cp3

0xce78,	// (0x0000ce78) list_single_2graphic_pane_g2_cp3_ParamLimits

0xce78,	// (0x0000ce78) list_single_2graphic_pane_g2_cp3

0x23d3,	// (0x000023d3) list_single_2graphic_pane_g3_cp3

0x36b0,	// (0x000036b0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x36b0,	// (0x000036b0) list_single_2graphic_pane_g4_cp3

0x36bc,	// (0x000036bc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36bc,	// (0x000036bc) list_single_2graphic_pane_t1_cp3

0x23c7,	// (0x000023c7) list_single_midp_graphic_pane_g2_ParamLimits

0x23c7,	// (0x000023c7) list_single_midp_graphic_pane_g2

0x2a9c,	// (0x00002a9c) aid_zoom_text_primary

0x2aa4,	// (0x00002aa4) aid_zoom_text_secondary

0x28af,	// (0x000028af) status_small_pane_g7_ParamLimits

0x28af,	// (0x000028af) status_small_pane_g7

0x28d2,	// (0x000028d2) status_small_pane_t1_ParamLimits

0xb5dd,	// (0x0000b5dd) title_pane_g2

0x0003,

0xf01d,	// (0x0000f01d) title_pane_g

0xb868,	// (0x0000b868) aid_size_cell_colour_1_pane_ParamLimits

0xb868,	// (0x0000b868) aid_size_cell_colour_1_pane

0xb87c,	// (0x0000b87c) aid_size_cell_colour_2_pane_ParamLimits

0xb87c,	// (0x0000b87c) aid_size_cell_colour_2_pane

0xb890,	// (0x0000b890) aid_size_cell_colour_3_pane_ParamLimits

0xb890,	// (0x0000b890) aid_size_cell_colour_3_pane

0xb8a4,	// (0x0000b8a4) aid_size_cell_colour_4_pane_ParamLimits

0xb8a4,	// (0x0000b8a4) aid_size_cell_colour_4_pane

0x187c,	// (0x0000187c) title_pane_stacon_g1_ParamLimits

0x187c,	// (0x0000187c) title_pane_stacon_g1

0x3ee6,	// (0x00003ee6) popup_note_wait_window_g3_ParamLimits

0x3ee6,	// (0x00003ee6) popup_note_wait_window_g3

0x3f5c,	// (0x00003f5c) popup_note_wait_window_t5_ParamLimits

0x3f5c,	// (0x00003f5c) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc44d,	// (0x0000c44d) popup_feb_china_hwr_fs_window_ParamLimits

0xc44d,	// (0x0000c44d) popup_feb_china_hwr_fs_window

0xce89,	// (0x0000ce89) aid_size_cell_hwr_fs_ParamLimits

0xce89,	// (0x0000ce89) aid_size_cell_hwr_fs

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp3_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp3

0xce9e,	// (0x0000ce9e) grid_hwr_fs_pane_ParamLimits

0xce9e,	// (0x0000ce9e) grid_hwr_fs_pane

0x37f7,	// (0x000037f7) linegrid_hwr_fs_pane_ParamLimits

0x37f7,	// (0x000037f7) linegrid_hwr_fs_pane

0xceb6,	// (0x0000ceb6) cell_hwr_fs_pane_ParamLimits

0xceb6,	// (0x0000ceb6) cell_hwr_fs_pane

0x3829,	// (0x00003829) linegrid_hwr_fs_pane_g1_ParamLimits

0x3829,	// (0x00003829) linegrid_hwr_fs_pane_g1

0xcedc,	// (0x0000cedc) linegrid_hwr_fs_pane_g2_ParamLimits

0xcedc,	// (0x0000cedc) linegrid_hwr_fs_pane_g2

0x3847,	// (0x00003847) linegrid_hwr_fs_pane_g3_ParamLimits

0x3847,	// (0x00003847) linegrid_hwr_fs_pane_g3

0x3853,	// (0x00003853) linegrid_hwr_fs_pane_g4_ParamLimits

0x3853,	// (0x00003853) linegrid_hwr_fs_pane_g4

0x386d,	// (0x0000386d) linegrid_hwr_fs_pane_g5_ParamLimits

0x386d,	// (0x0000386d) linegrid_hwr_fs_pane_g5

0x0004,

0xf13c,	// (0x0000f13c) linegrid_hwr_fs_pane_g_ParamLimits

0xf13c,	// (0x0000f13c) linegrid_hwr_fs_pane_g

0x3883,	// (0x00003883) cell_hwr_fs_pane_g1_ParamLimits

0x3883,	// (0x00003883) cell_hwr_fs_pane_g1

0x3416,	// (0x00003416) cell_hwr_fs_pane_g2_ParamLimits

0x3416,	// (0x00003416) cell_hwr_fs_pane_g2

0xceee,	// (0x0000ceee) cell_hwr_fs_pane_g3_ParamLimits

0xceee,	// (0x0000ceee) cell_hwr_fs_pane_g3

0xcefb,	// (0x0000cefb) cell_hwr_fs_pane_g4_ParamLimits

0xcefb,	// (0x0000cefb) cell_hwr_fs_pane_g4

0x0003,

0xf147,	// (0x0000f147) cell_hwr_fs_pane_g_ParamLimits

0xf147,	// (0x0000f147) cell_hwr_fs_pane_g

0xcf08,	// (0x0000cf08) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x162d,	// (0x0000162d) aid_inside_area_popup_secondary

0xd1a8,	// (0x0000d1a8) aid_inside_area_window_primary_ParamLimits

0xd1a8,	// (0x0000d1a8) aid_inside_area_window_primary

0x5508,	// (0x00005508) ai2_news_ticker_pane

0x5510,	// (0x00005510) aid_size_cell_ai1_link_ParamLimits

0x5510,	// (0x00005510) aid_size_cell_ai1_link

0x552a,	// (0x0000552a) popup_ai2_data_window_ParamLimits

0x552a,	// (0x0000552a) popup_ai2_data_window

0x553e,	// (0x0000553e) popup_ai2_link_window_ParamLimits

0x553e,	// (0x0000553e) popup_ai2_link_window

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp4_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_sub_pane_cp4

0x5552,	// (0x00005552) grid_ai2_link_pane_ParamLimits

0x5552,	// (0x00005552) grid_ai2_link_pane

0x5569,	// (0x00005569) popup_ai2_link_window_g1_ParamLimits

0x5569,	// (0x00005569) popup_ai2_link_window_g1

0x5575,	// (0x00005575) popup_ai2_link_window_g2_ParamLimits

0x5575,	// (0x00005575) popup_ai2_link_window_g2

0x0001,

0xaeca,	// (0x0000aeca) popup_ai2_link_window_g_ParamLimits

0xaeca,	// (0x0000aeca) popup_ai2_link_window_g

0x5584,	// (0x00005584) ai2_mp_button_pane

0x558c,	// (0x0000558c) ai2_mp_volume_pane

0x3a95,	// (0x00003a95) bg_popup_sub_pane_cp5_ParamLimits

0x3a95,	// (0x00003a95) bg_popup_sub_pane_cp5

0x5594,	// (0x00005594) heading_ai2_gene_pane_ParamLimits

0x5594,	// (0x00005594) heading_ai2_gene_pane

0x55a0,	// (0x000055a0) list_ai2_gene_pane_ParamLimits

0x55a0,	// (0x000055a0) list_ai2_gene_pane

0x55e8,	// (0x000055e8) cell_ai2_link_pane_ParamLimits

0x55e8,	// (0x000055e8) cell_ai2_link_pane

0x55fe,	// (0x000055fe) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x56cf,	// (0x000056cf) ai2_mp_volume_pane_g1

0x56d7,	// (0x000056d7) ai2_mp_volume_pane_g2

0x5644,	// (0x00005644) list_ai2_gene_pane_t1

0x56df,	// (0x000056df) ai2_mp_volume_pane_g3

0x0002,

0xaee3,	// (0x0000aee3) ai2_mp_volume_pane_g

0x56e7,	// (0x000056e7) volume_small_pane_cp3

0x56f0,	// (0x000056f0) aid_size_cell_ai2_button

0x56f8,	// (0x000056f8) grid_ai2_button_pane

0x5701,	// (0x00005701) cell_ai2_button_pane_ParamLimits

0x5701,	// (0x00005701) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x568f,	// (0x0000568f) ai2_gene_pane_t1_ParamLimits

0x568f,	// (0x0000568f) ai2_gene_pane_t1

0xc3c3,	// (0x0000c3c3) aid_height_parent_landscape

0xd34f,	// (0x0000d34f) aid_height_set_list

0x4e75,	// (0x00004e75) aid_size_parent

0x5273,	// (0x00005273) aid_size_cell_graphic_pane_ParamLimits

0x55b0,	// (0x000055b0) popup_ai2_data_window_g1_ParamLimits

0x55b0,	// (0x000055b0) popup_ai2_data_window_g1

0x55bc,	// (0x000055bc) ai2_news_ticker_pane_g1

0x55c4,	// (0x000055c4) ai2_news_ticker_pane_g2

0x0001,

0xaecf,	// (0x0000aecf) ai2_news_ticker_pane_g

0x55cc,	// (0x000055cc) ai2_news_ticker_pane_t1

0x55da,	// (0x000055da) ai2_news_ticker_pane_t2

0x0001,

0xaed4,	// (0x0000aed4) ai2_news_ticker_pane_t

0x5607,	// (0x00005607) heading_ai2_gene_pane_g1

0x560f,	// (0x0000560f) heading_ai2_gene_pane_t1_ParamLimits

0x560f,	// (0x0000560f) heading_ai2_gene_pane_t1

0x5624,	// (0x00005624) list_highlight_pane_cp6

0x562c,	// (0x0000562c) ai2_gene_pane_ParamLimits

0x562c,	// (0x0000562c) ai2_gene_pane

0x5652,	// (0x00005652) list_ai2_gene_pane_t2

0x0001,

0xaed9,	// (0x0000aed9) list_ai2_gene_pane_t

0x5660,	// (0x00005660) list_highlight_pane_cp8_ParamLimits

0x5660,	// (0x00005660) list_highlight_pane_cp8

0x5671,	// (0x00005671) ai2_gene_pane_g1_ParamLimits

0x5671,	// (0x00005671) ai2_gene_pane_g1

0x5683,	// (0x00005683) ai2_gene_pane_g2_ParamLimits

0x5683,	// (0x00005683) ai2_gene_pane_g2

0x0001,

0xaede,	// (0x0000aede) ai2_gene_pane_g_ParamLimits

0xaede,	// (0x0000aede) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xc382,	// (0x0000c382) control_pane_t3_ParamLimits

0xc382,	// (0x0000c382) control_pane_t3

0x28c3,	// (0x000028c3) status_small_pane_g8_ParamLimits

0x28c3,	// (0x000028c3) status_small_pane_g8

0xc4e0,	// (0x0000c4e0) popup_find_window_ParamLimits

0xc75b,	// (0x0000c75b) popup_note_image_window_ParamLimits

0x34dd,	// (0x000034dd) list_double2_graphic_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_double2_graphic_pane_vc_g1

0x247a,	// (0x0000247a) list_double2_graphic_pane_vc_g2_ParamLimits

0x247a,	// (0x0000247a) list_double2_graphic_pane_vc_g2

0x34e9,	// (0x000034e9) list_double2_graphic_pane_vc_g3_ParamLimits

0x34e9,	// (0x000034e9) list_double2_graphic_pane_vc_g3

0x0002,

0xacae,	// (0x0000acae) list_double2_graphic_pane_vc_g_ParamLimits

0xacae,	// (0x0000acae) list_double2_graphic_pane_vc_g

0x35d1,	// (0x000035d1) list_double2_graphic_pane_vc_t1_ParamLimits

0x35d1,	// (0x000035d1) list_double2_graphic_pane_vc_t1

0x247a,	// (0x0000247a) list_single_heading_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_heading_pane_vc_g1

0x34e9,	// (0x000034e9) list_single_heading_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_heading_pane_vc_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_heading_pane_vc_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_heading_pane_vc_t1

0x36ec,	// (0x000036ec) list_single_heading_pane_vc_t2_ParamLimits

0x36ec,	// (0x000036ec) list_single_heading_pane_vc_t2

0x0001,

0xacdb,	// (0x0000acdb) list_single_heading_pane_vc_t_ParamLimits

0xacdb,	// (0x0000acdb) list_single_heading_pane_vc_t

0x3716,	// (0x00003716) list_setting_number_pane_vc_g1_ParamLimits

0x3716,	// (0x00003716) list_setting_number_pane_vc_g1

0x3722,	// (0x00003722) list_setting_number_pane_vc_g2_ParamLimits

0x3722,	// (0x00003722) list_setting_number_pane_vc_g2

0x0001,

0xace0,	// (0x0000ace0) list_setting_number_pane_vc_g_ParamLimits

0xace0,	// (0x0000ace0) list_setting_number_pane_vc_g

0x372e,	// (0x0000372e) list_setting_number_pane_vc_t1_ParamLimits

0x372e,	// (0x0000372e) list_setting_number_pane_vc_t1

0x3742,	// (0x00003742) list_setting_number_pane_vc_t2_ParamLimits

0x3742,	// (0x00003742) list_setting_number_pane_vc_t2

0x375c,	// (0x0000375c) list_setting_number_pane_vc_t3_ParamLimits

0x375c,	// (0x0000375c) list_setting_number_pane_vc_t3

0x0002,

0xace5,	// (0x0000ace5) list_setting_number_pane_vc_t_ParamLimits

0xace5,	// (0x0000ace5) list_setting_number_pane_vc_t

0x3782,	// (0x00003782) set_value_pane_vc_ParamLimits

0x3782,	// (0x00003782) set_value_pane_vc

0x5077,	// (0x00005077) list_double2_graphic_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double2_graphic_pane_vc

0x508b,	// (0x0000508b) list_double2_large_graphic_pane_vc_ParamLimits

0x508b,	// (0x0000508b) list_double2_large_graphic_pane_vc

0x5077,	// (0x00005077) list_double2_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double2_pane_vc

0x5077,	// (0x00005077) list_double_graphic_heading_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_graphic_heading_pane_vc

0x5077,	// (0x00005077) list_double_graphic_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_graphic_pane_vc

0x5077,	// (0x00005077) list_double_heading_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_heading_pane_vc

0x508b,	// (0x0000508b) list_double_large_graphic_pane_vc_ParamLimits

0x508b,	// (0x0000508b) list_double_large_graphic_pane_vc

0x5077,	// (0x00005077) list_double_number_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_number_pane_vc

0x5077,	// (0x00005077) list_double_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_pane_vc

0x5077,	// (0x00005077) list_double_time_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_double_time_pane_vc

0x5077,	// (0x00005077) list_setting_number_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_setting_number_pane_vc

0x5077,	// (0x00005077) list_setting_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_setting_pane_vc

0x5077,	// (0x00005077) list_single_graphic_heading_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_single_graphic_heading_pane_vc

0x5077,	// (0x00005077) list_single_heading_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_single_heading_pane_vc

0x5077,	// (0x00005077) list_single_number_heading_pane_vc_ParamLimits

0x5077,	// (0x00005077) list_single_number_heading_pane_vc

0x5735,	// (0x00005735) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5735,	// (0x00005735) list_double_graphic_heading_pane_vc_g1

0x24de,	// (0x000024de) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x24de,	// (0x000024de) list_double_graphic_heading_pane_vc_g2

0x5741,	// (0x00005741) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5741,	// (0x00005741) list_double_graphic_heading_pane_vc_g3

0x0002,

0xaeea,	// (0x0000aeea) list_double_graphic_heading_pane_vc_g_ParamLimits

0xaeea,	// (0x0000aeea) list_double_graphic_heading_pane_vc_g

0x574d,	// (0x0000574d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x574d,	// (0x0000574d) list_double_graphic_heading_pane_vc_t1

0x36d6,	// (0x000036d6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36d6,	// (0x000036d6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xaef1,	// (0x0000aef1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xaef1,	// (0x0000aef1) list_double_graphic_heading_pane_vc_t

0x3716,	// (0x00003716) list_setting_pane_vc_g1_ParamLimits

0x3716,	// (0x00003716) list_setting_pane_vc_g1

0x3722,	// (0x00003722) list_setting_pane_vc_g2_ParamLimits

0x3722,	// (0x00003722) list_setting_pane_vc_g2

0x0001,

0xace0,	// (0x0000ace0) list_setting_pane_vc_g_ParamLimits

0xace0,	// (0x0000ace0) list_setting_pane_vc_g

0x59aa,	// (0x000059aa) list_setting_pane_vc_t1_ParamLimits

0x59aa,	// (0x000059aa) list_setting_pane_vc_t1

0x59c4,	// (0x000059c4) list_setting_pane_vc_t2_ParamLimits

0x59c4,	// (0x000059c4) list_setting_pane_vc_t2

0x0001,

0xaf34,	// (0x0000af34) list_setting_pane_vc_t_ParamLimits

0xaf34,	// (0x0000af34) list_setting_pane_vc_t

0x3782,	// (0x00003782) set_value_pane_cp_vc_ParamLimits

0x3782,	// (0x00003782) set_value_pane_cp_vc

0x247a,	// (0x0000247a) list_single_number_heading_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_single_number_heading_pane_vc_g1

0x34e9,	// (0x000034e9) list_single_number_heading_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_single_number_heading_pane_vc_g2

0x0001,

0xacd6,	// (0x0000acd6) list_single_number_heading_pane_vc_g_ParamLimits

0xacd6,	// (0x0000acd6) list_single_number_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_number_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_number_heading_pane_vc_t1

0x59da,	// (0x000059da) list_single_number_heading_pane_vc_t2_ParamLimits

0x59da,	// (0x000059da) list_single_number_heading_pane_vc_t2

0x59ee,	// (0x000059ee) list_single_number_heading_pane_vc_t3_ParamLimits

0x59ee,	// (0x000059ee) list_single_number_heading_pane_vc_t3

0x0002,

0xaf39,	// (0x0000af39) list_single_number_heading_pane_vc_t_ParamLimits

0xaf39,	// (0x0000af39) list_single_number_heading_pane_vc_t

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_single_graphic_heading_pane_vc_g1

0x247a,	// (0x0000247a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x247a,	// (0x0000247a) list_single_graphic_heading_pane_vc_g4

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x34e9,	// (0x000034e9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xacae,	// (0x0000acae) list_single_graphic_heading_pane_vc_g_ParamLimits

0xacae,	// (0x0000acae) list_single_graphic_heading_pane_vc_g

0x36d6,	// (0x000036d6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36d6,	// (0x000036d6) list_single_graphic_heading_pane_vc_t1

0x5a00,	// (0x00005a00) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a00,	// (0x00005a00) list_single_graphic_heading_pane_vc_t2

0x0001,

0xaf40,	// (0x0000af40) list_single_graphic_heading_pane_vc_t_ParamLimits

0xaf40,	// (0x0000af40) list_single_graphic_heading_pane_vc_t

0x247a,	// (0x0000247a) list_double2_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double2_pane_vc_g1

0x34e9,	// (0x000034e9) list_double2_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double2_pane_vc_g2

0x0001,

0xacd6,	// (0x0000acd6) list_double2_pane_vc_g_ParamLimits

0xacd6,	// (0x0000acd6) list_double2_pane_vc_g

0x5a14,	// (0x00005a14) list_double2_pane_vc_t1_ParamLimits

0x5a14,	// (0x00005a14) list_double2_pane_vc_t1

0x5a2a,	// (0x00005a2a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5a2a,	// (0x00005a2a) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xaf45,	// (0x0000af45) list_double2_large_graphic_pane_vc_g_ParamLimits

0xaf45,	// (0x0000af45) list_double2_large_graphic_pane_vc_g

0x5a36,	// (0x00005a36) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5a36,	// (0x00005a36) list_double2_large_graphic_pane_vc_t1

0x5a4c,	// (0x00005a4c) list_double_time_pane_vc_g1_ParamLimits

0x5a4c,	// (0x00005a4c) list_double_time_pane_vc_g1

0x5a58,	// (0x00005a58) list_double_time_pane_vc_g2_ParamLimits

0x5a58,	// (0x00005a58) list_double_time_pane_vc_g2

0x0001,

0xaf4c,	// (0x0000af4c) list_double_time_pane_vc_g_ParamLimits

0xaf4c,	// (0x0000af4c) list_double_time_pane_vc_g

0x5a64,	// (0x00005a64) list_double_time_pane_vc_t1_ParamLimits

0x5a64,	// (0x00005a64) list_double_time_pane_vc_t1

0x5a82,	// (0x00005a82) list_double_time_pane_vc_t2_ParamLimits

0x5a82,	// (0x00005a82) list_double_time_pane_vc_t2

0x5aac,	// (0x00005aac) list_double_time_pane_vc_t3_ParamLimits

0x5aac,	// (0x00005aac) list_double_time_pane_vc_t3

0x5abe,	// (0x00005abe) list_double_time_pane_vc_t4_ParamLimits

0x5abe,	// (0x00005abe) list_double_time_pane_vc_t4

0x0003,

0xaf51,	// (0x0000af51) list_double_time_pane_vc_t_ParamLimits

0xaf51,	// (0x0000af51) list_double_time_pane_vc_t

0x247a,	// (0x0000247a) list_double_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double_pane_vc_g1

0x34e9,	// (0x000034e9) list_double_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double_pane_vc_g2

0x0001,

0xacd6,	// (0x0000acd6) list_double_pane_vc_g_ParamLimits

0xacd6,	// (0x0000acd6) list_double_pane_vc_g

0x5ad2,	// (0x00005ad2) list_double_pane_vc_t1_ParamLimits

0x5ad2,	// (0x00005ad2) list_double_pane_vc_t1

0x5ae4,	// (0x00005ae4) list_double_pane_vc_t2_ParamLimits

0x5ae4,	// (0x00005ae4) list_double_pane_vc_t2

0x0001,

0xaf5a,	// (0x0000af5a) list_double_pane_vc_t_ParamLimits

0xaf5a,	// (0x0000af5a) list_double_pane_vc_t

0x247a,	// (0x0000247a) list_double_number_pane_vc_g1_ParamLimits

0x247a,	// (0x0000247a) list_double_number_pane_vc_g1

0x34e9,	// (0x000034e9) list_double_number_pane_vc_g2_ParamLimits

0x34e9,	// (0x000034e9) list_double_number_pane_vc_g2

0x0001,

0xacd6,	// (0x0000acd6) list_double_number_pane_vc_g_ParamLimits

0xacd6,	// (0x0000acd6) list_double_number_pane_vc_g

0x5afc,	// (0x00005afc) list_double_number_pane_vc_t1_ParamLimits

0x5afc,	// (0x00005afc) list_double_number_pane_vc_t1

0x5b10,	// (0x00005b10) list_double_number_pane_vc_t2_ParamLimits

0x5b10,	// (0x00005b10) list_double_number_pane_vc_t2

0x5ae4,	// (0x00005ae4) list_double_number_pane_vc_t3_ParamLimits

0x5ae4,	// (0x00005ae4) list_double_number_pane_vc_t3

0x0002,

0xaf5f,	// (0x0000af5f) list_double_number_pane_vc_t_ParamLimits

0xaf5f,	// (0x0000af5f) list_double_number_pane_vc_t

0x5b22,	// (0x00005b22) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5b22,	// (0x00005b22) list_double_large_graphic_pane_vc_g1

0x5b33,	// (0x00005b33) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5b33,	// (0x00005b33) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5b42,	// (0x00005b42) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5b42,	// (0x00005b42) list_double_large_graphic_pane_vc_g4

0x0003,

0xaf66,	// (0x0000af66) list_double_large_graphic_pane_vc_g_ParamLimits

0xaf66,	// (0x0000af66) list_double_large_graphic_pane_vc_g

0x5b4e,	// (0x00005b4e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5b4e,	// (0x00005b4e) list_double_large_graphic_pane_vc_t1

0x5b65,	// (0x00005b65) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5b65,	// (0x00005b65) list_double_large_graphic_pane_vc_t2

0x0001,

0xaf6f,	// (0x0000af6f) list_double_large_graphic_pane_vc_t_ParamLimits

0xaf6f,	// (0x0000af6f) list_double_large_graphic_pane_vc_t

0x24de,	// (0x000024de) list_double_heading_pane_vc_g1_ParamLimits

0x24de,	// (0x000024de) list_double_heading_pane_vc_g1

0x5741,	// (0x00005741) list_double_heading_pane_vc_g2_ParamLimits

0x5741,	// (0x00005741) list_double_heading_pane_vc_g2

0x0001,

0xaf74,	// (0x0000af74) list_double_heading_pane_vc_g_ParamLimits

0xaf74,	// (0x0000af74) list_double_heading_pane_vc_g

0x5b7e,	// (0x00005b7e) list_double_heading_pane_vc_t1_ParamLimits

0x5b7e,	// (0x00005b7e) list_double_heading_pane_vc_t1

0x36d6,	// (0x000036d6) list_double_heading_pane_vc_t2_ParamLimits

0x36d6,	// (0x000036d6) list_double_heading_pane_vc_t2

0x0001,

0xaf79,	// (0x0000af79) list_double_heading_pane_vc_t_ParamLimits

0xaf79,	// (0x0000af79) list_double_heading_pane_vc_t

0x34dd,	// (0x000034dd) list_double_graphic_pane_vc_g1_ParamLimits

0x34dd,	// (0x000034dd) list_double_graphic_pane_vc_g1

0x47dd,	// (0x000047dd) list_double_graphic_pane_vc_g2_ParamLimits

0x47dd,	// (0x000047dd) list_double_graphic_pane_vc_g2

0x5b92,	// (0x00005b92) list_double_graphic_pane_vc_g3_ParamLimits

0x5b92,	// (0x00005b92) list_double_graphic_pane_vc_g3

0x0002,

0xaf7e,	// (0x0000af7e) list_double_graphic_pane_vc_g_ParamLimits

0xaf7e,	// (0x0000af7e) list_double_graphic_pane_vc_g

0x5b9e,	// (0x00005b9e) list_double_graphic_pane_vc_t1_ParamLimits

0x5b9e,	// (0x00005b9e) list_double_graphic_pane_vc_t1

0x5ae4,	// (0x00005ae4) list_double_graphic_pane_vc_t2_ParamLimits

0x5ae4,	// (0x00005ae4) list_double_graphic_pane_vc_t2

0x0001,

0xaf85,	// (0x0000af85) list_double_graphic_pane_vc_t_ParamLimits

0xaf85,	// (0x0000af85) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb429,	// (0x0000b429) aid_size_cell_touch_ParamLimits

0xb429,	// (0x0000b429) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb574,	// (0x0000b574) touch_pane_ParamLimits

0xb574,	// (0x0000b574) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xbd05,	// (0x0000bd05) form_field_data_wide_pane_cp2

0x1ae3,	// (0x00001ae3) bg_scroll_pane_ParamLimits

0x1b02,	// (0x00001b02) scroll_handle_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane_ParamLimits

0x1b16,	// (0x00001b16) scroll_sc2_down_pane

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_up_pane

0xd716,	// (0x0000d716) grid_wheel_folder_pane_g1_ParamLimits

0xd716,	// (0x0000d716) grid_wheel_folder_pane_g1

0x21f5,	// (0x000021f5) clock_nsta_pane_cp2_ParamLimits

0x21f5,	// (0x000021f5) clock_nsta_pane_cp2

0x2b0e,	// (0x00002b0e) listscroll_midp_pane_ParamLimits

0xc194,	// (0x0000c194) midp_canvas_pane

0x2a82,	// (0x00002a82) nsta_clock_indic_pane

0x2ae0,	// (0x00002ae0) listscroll_form_pane_vc

0x2afc,	// (0x00002afc) listscroll_set_pane_vc_ParamLimits

0x2afc,	// (0x00002afc) listscroll_set_pane_vc

0xcb89,	// (0x0000cb89) clock_nsta_pane

0xcbb3,	// (0x0000cbb3) indicator_nsta_pane

0x353b,	// (0x0000353b) bg_popup_sub_pane_cp2_ParamLimits

0x354f,	// (0x0000354f) find_pane_cp2_ParamLimits

0x354f,	// (0x0000354f) find_pane_cp2

0x3565,	// (0x00003565) grid_toobar_pane_ParamLimits

0x3792,	// (0x00003792) list_form_gen_pane_vc_ParamLimits

0x3792,	// (0x00003792) list_form_gen_pane_vc

0x37a8,	// (0x000037a8) scroll_pane_cp8_vc_ParamLimits

0x37a8,	// (0x000037a8) scroll_pane_cp8_vc

0x38c1,	// (0x000038c1) data_form_wide_pane_vc_ParamLimits

0x38c1,	// (0x000038c1) data_form_wide_pane_vc

0x38cd,	// (0x000038cd) form_field_data_wide_pane_vc_g1

0x38d5,	// (0x000038d5) form_field_data_wide_pane_vc_t1_ParamLimits

0x38d5,	// (0x000038d5) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xcfc5,	// (0x0000cfc5) list_midp_pane_ParamLimits

0x52dd,	// (0x000052dd) scroll_pane_cp16_ParamLimits

0x52dd,	// (0x000052dd) scroll_pane_cp16

0x3cc0,	// (0x00003cc0) button_value_adjust_pane_ParamLimits

0x3cc0,	// (0x00003cc0) button_value_adjust_pane

0xd360,	// (0x0000d360) button_value_adjust_pane_cp6_ParamLimits

0xd360,	// (0x0000d360) button_value_adjust_pane_cp6

0xd476,	// (0x0000d476) settings_code_pane_cp_ParamLimits

0xd476,	// (0x0000d476) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xac01,	// (0x0000ac01) cell_touch_pane_g

0xd5f5,	// (0x0000d5f5) cell_touch_pane_cp_ParamLimits

0xd5f5,	// (0x0000d5f5) cell_touch_pane_cp

0xd611,	// (0x0000d611) cell_touch_pane_ParamLimits

0xd611,	// (0x0000d611) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5761,	// (0x00005761) list_set_graphic_pane_vc_g1_ParamLimits

0x5761,	// (0x00005761) list_set_graphic_pane_vc_g1

0x576d,	// (0x0000576d) list_set_graphic_pane_vc_g2_ParamLimits

0x576d,	// (0x0000576d) list_set_graphic_pane_vc_g2

0x0001,

0xaef6,	// (0x0000aef6) list_set_graphic_pane_vc_g_ParamLimits

0xaef6,	// (0x0000aef6) list_set_graphic_pane_vc_g

0x5779,	// (0x00005779) text_primary_small_cp13_vc_ParamLimits

0x5779,	// (0x00005779) text_primary_small_cp13_vc

0x5791,	// (0x00005791) list_set_graphic_pane_vc_ParamLimits

0x5791,	// (0x00005791) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05c1,	// (0x000005c1) setting_code_pane_vc_t1

0x57a5,	// (0x000057a5) set_text_pane_vc_t1_ParamLimits

0x57a5,	// (0x000057a5) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x57c4,	// (0x000057c4) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x0592,	// (0x00000592) setting_slider_graphic_pane_vc_g1

0x57ce,	// (0x000057ce) setting_slider_graphic_pane_vc_t1

0x57dd,	// (0x000057dd) setting_slider_graphic_pane_vc_t2

0x0001,

0xaefb,	// (0x0000aefb) setting_slider_graphic_pane_vc_t

0x57ec,	// (0x000057ec) slider_set_pane_cp_vc

0x57f4,	// (0x000057f4) slider_set_pane_vc_g1

0x57fd,	// (0x000057fd) slider_set_pane_vc_g2

0x0006,

0xaf00,	// (0x0000af00) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x5829,	// (0x00005829) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x5831,	// (0x00005831) set_opt_bg_pane_g7_copy1

0x583b,	// (0x0000583b) set_opt_bg_pane_g8_copy1

0x5843,	// (0x00005843) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x584b,	// (0x0000584b) setting_slider_pane_vc_t1

0x585a,	// (0x0000585a) setting_slider_pane_vc_t2

0x5869,	// (0x00005869) setting_slider_pane_vc_t3

0x0002,

0xaf0f,	// (0x0000af0f) setting_slider_pane_vc_t

0x5878,	// (0x00005878) slider_set_pane_vc

0x44f6,	// (0x000044f6) volume_set_pane_vc_g1

0x5880,	// (0x00005880) volume_set_pane_vc_g2

0x5889,	// (0x00005889) volume_set_pane_vc_g3

0x5892,	// (0x00005892) volume_set_pane_vc_g4

0x589b,	// (0x0000589b) volume_set_pane_vc_g5

0x58a4,	// (0x000058a4) volume_set_pane_vc_g6

0x58ad,	// (0x000058ad) volume_set_pane_vc_g7

0x58b6,	// (0x000058b6) volume_set_pane_vc_g8

0x58bf,	// (0x000058bf) volume_set_pane_vc_g9

0x58c8,	// (0x000058c8) volume_set_pane_vc_g10

0x0009,

0xaf16,	// (0x0000af16) volume_set_pane_vc_g

0x58d1,	// (0x000058d1) volume_set_pane_vc

0x58db,	// (0x000058db) button_value_adjust_pane_cp1_vc

0x58e5,	// (0x000058e5) list_highlight_pane_cp2_vc

0x58ee,	// (0x000058ee) list_set_pane_vc_ParamLimits

0x58ee,	// (0x000058ee) list_set_pane_vc

0x5940,	// (0x00005940) main_pane_set_vc_t1_ParamLimits

0x5940,	// (0x00005940) main_pane_set_vc_t1

0x5955,	// (0x00005955) main_pane_set_vc_t2_ParamLimits

0x5955,	// (0x00005955) main_pane_set_vc_t2

0x5967,	// (0x00005967) main_pane_set_vc_t3_ParamLimits

0x5967,	// (0x00005967) main_pane_set_vc_t3

0x5979,	// (0x00005979) main_pane_set_vc_t4_ParamLimits

0x5979,	// (0x00005979) main_pane_set_vc_t4

0x0003,

0xaf2b,	// (0x0000af2b) main_pane_set_vc_t_ParamLimits

0xaf2b,	// (0x0000af2b) main_pane_set_vc_t

0x598b,	// (0x0000598b) setting_code_pane_vc_ParamLimits

0x598b,	// (0x0000598b) setting_code_pane_vc

0x599a,	// (0x0000599a) setting_slider_graphic_pane_vc

0x599a,	// (0x0000599a) setting_slider_pane_vc

0x599a,	// (0x0000599a) setting_text_pane_vc

0x599a,	// (0x0000599a) setting_volume_pane_vc

0x59a2,	// (0x000059a2) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5bb0,	// (0x00005bb0) button_value_adjust_pane_g1

0x5bb9,	// (0x00005bb9) button_value_adjust_pane_g2

0x0001,

0xaf8a,	// (0x0000af8a) button_value_adjust_pane_g

0x5bc2,	// (0x00005bc2) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5bc2,	// (0x00005bc2) form_field_slider_wide_pane_vc_t1

0x5bd6,	// (0x00005bd6) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5bd6,	// (0x00005bd6) form_field_slider_wide_pane_vc_t2

0x0002,

0xaf8f,	// (0x0000af8f) form_field_slider_wide_pane_vc_t_ParamLimits

0xaf8f,	// (0x0000af8f) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5c02,	// (0x00005c02) slider_cont_pane_cp1_vc_ParamLimits

0x5c02,	// (0x00005c02) slider_cont_pane_cp1_vc

0x5c12,	// (0x00005c12) slider_form_pane_g1_cp2

0x57fd,	// (0x000057fd) slider_form_pane_g2_cp2

0x5c3f,	// (0x00005c3f) form_field_slider_pane_vc_t3

0x5c4d,	// (0x00005c4d) form_field_slider_pane_vc_t4

0x5c5b,	// (0x00005c5b) slider_form_pane_vc_ParamLimits

0x5c5b,	// (0x00005c5b) slider_form_pane_vc

0x5c68,	// (0x00005c68) form_field_slider_pane_vc_t1_ParamLimits

0x5c68,	// (0x00005c68) form_field_slider_pane_vc_t1

0x5bd6,	// (0x00005bd6) form_field_slider_pane_vc_t2_ParamLimits

0x5bd6,	// (0x00005bd6) form_field_slider_pane_vc_t2

0x0001,

0xafa1,	// (0x0000afa1) form_field_slider_pane_vc_t_ParamLimits

0xafa1,	// (0x0000afa1) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5c84,	// (0x00005c84) slider_cont_pane_vc_ParamLimits

0x5c84,	// (0x00005c84) slider_cont_pane_vc

0x5c96,	// (0x00005c96) list_form_graphic_pane_cp_vc_ParamLimits

0x5c96,	// (0x00005c96) list_form_graphic_pane_cp_vc

0x38cd,	// (0x000038cd) form_field_popup_wide_pane_vc_g1

0x5cab,	// (0x00005cab) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cab,	// (0x00005cab) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5cf0,	// (0x00005cf0) list_form_wide_pane_vc_ParamLimits

0x5cf0,	// (0x00005cf0) list_form_wide_pane_vc

0x5cfc,	// (0x00005cfc) list_form_graphic_pane_vc_g1

0x5d04,	// (0x00005d04) list_form_graphic_pane_vc_t1_ParamLimits

0x5d04,	// (0x00005d04) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5d20,	// (0x00005d20) list_form_graphic_pane_vc_ParamLimits

0x5d20,	// (0x00005d20) list_form_graphic_pane_vc

0x38cd,	// (0x000038cd) form_field_popup_pane_vc_g1

0x5d36,	// (0x00005d36) form_field_popup_pane_vc_t1_ParamLimits

0x5d36,	// (0x00005d36) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5d4d,	// (0x00005d4d) list_form_pane_vc_ParamLimits

0x5d4d,	// (0x00005d4d) list_form_pane_vc

0x5d59,	// (0x00005d59) data_form_pane_vc_t1_ParamLimits

0x5d59,	// (0x00005d59) data_form_pane_vc_t1

0x148b,	// (0x0000148b) input_focus_pane_vc_g1

0x1493,	// (0x00001493) input_focus_pane_vc_g2

0x149b,	// (0x0000149b) input_focus_pane_vc_g3

0x14a3,	// (0x000014a3) input_focus_pane_vc_g4

0x14ab,	// (0x000014ab) input_focus_pane_vc_g5

0x14b3,	// (0x000014b3) input_focus_pane_vc_g6

0x14bb,	// (0x000014bb) input_focus_pane_vc_g7

0x14c3,	// (0x000014c3) input_focus_pane_vc_g8

0x14cb,	// (0x000014cb) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xab8a,	// (0x0000ab8a) input_focus_pane_vc_g

0x38c1,	// (0x000038c1) data_form_pane_vc_ParamLimits

0x38c1,	// (0x000038c1) data_form_pane_vc

0x38cd,	// (0x000038cd) form_field_data_pane_vc_g1

0x5d74,	// (0x00005d74) form_field_data_pane_vc_t1_ParamLimits

0x5d74,	// (0x00005d74) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5d8e,	// (0x00005d8e) button_value_adjust_pane_cp3_vc

0x5d96,	// (0x00005d96) button_value_adjust_pane_cp5_vc

0x5d9e,	// (0x00005d9e) form_field_data_pane_vc_ParamLimits

0x5d9e,	// (0x00005d9e) form_field_data_pane_vc

0x5db5,	// (0x00005db5) form_field_data_pane_vc_cp2

0x5dbd,	// (0x00005dbd) form_field_data_wide_pane_vc_ParamLimits

0x5dbd,	// (0x00005dbd) form_field_data_wide_pane_vc

0x5dd3,	// (0x00005dd3) form_field_data_wide_pane_vc_cp2

0x5ddb,	// (0x00005ddb) form_field_popup_pane_vc_ParamLimits

0x5ddb,	// (0x00005ddb) form_field_popup_pane_vc

0x5df2,	// (0x00005df2) form_field_popup_wide_pane_vc_ParamLimits

0x5df2,	// (0x00005df2) form_field_popup_wide_pane_vc

0x5e08,	// (0x00005e08) form_field_slider_pane_vc_ParamLimits

0x5e08,	// (0x00005e08) form_field_slider_pane_vc

0x5e1b,	// (0x00005e1b) form_field_slider_wide_pane_vc_ParamLimits

0x5e1b,	// (0x00005e1b) form_field_slider_wide_pane_vc

0xd62f,	// (0x0000d62f) grid_touch_1_pane_ParamLimits

0xd62f,	// (0x0000d62f) grid_touch_1_pane

0xd643,	// (0x0000d643) grid_touch_2_pane_ParamLimits

0xd643,	// (0x0000d643) grid_touch_2_pane

0x5ef0,	// (0x00005ef0) touch_pane_g1_ParamLimits

0x5ef0,	// (0x00005ef0) touch_pane_g1

0x5e52,	// (0x00005e52) cell_app_pane_cp_wide_ParamLimits

0x5e52,	// (0x00005e52) cell_app_pane_cp_wide

0x5e63,	// (0x00005e63) grid_popup_fast_wide_pane_ParamLimits

0x5e63,	// (0x00005e63) grid_popup_fast_wide_pane

0x5e77,	// (0x00005e77) scroll_pane_cp19_ParamLimits

0x5e77,	// (0x00005e77) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5e8b,	// (0x00005e8b) listscroll_popup_fast_wide_pane

0x1698,	// (0x00001698) grid_indicator_nsta_pane

0x5e93,	// (0x00005e93) clock_nsta_pane_g1

0x5e9c,	// (0x00005e9c) clock_nsta_pane_t1

0xd66d,	// (0x0000d66d) cell_indicator_nsta_pane_ParamLimits

0xd66d,	// (0x0000d66d) cell_indicator_nsta_pane

0x5ef0,	// (0x00005ef0) cell_indicator_nsta_pane_g1

0xd68a,	// (0x0000d68a) cell_indicator_nsta_pane_g2

0x0001,

0xf1bd,	// (0x0000f1bd) cell_indicator_nsta_pane_g

0x5f14,	// (0x00005f14) clock_nsta_pane_cp

0x5f1c,	// (0x00005f1c) indicator_nsta_pane_cp

0x5f25,	// (0x00005f25) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2f,	// (0x00001c2f) scroll_pane_cp29

0x2122,	// (0x00002122) indicator_nsta_pane_cp2_ParamLimits

0x2122,	// (0x00002122) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3b4d,	// (0x00003b4d) form_midp_field_text_pane_ParamLimits

0x3c92,	// (0x00003c92) scroll_bar_cp050_ParamLimits

0x5f8e,	// (0x00005f8e) cell_indicator_pane_ParamLimits

0x5f8e,	// (0x00005f8e) cell_indicator_pane

0x5fab,	// (0x00005fab) cell_indicator_pane_g1

0xd6a0,	// (0x0000d6a0) grid_wheel_folder_pane_ParamLimits

0xd6a0,	// (0x0000d6a0) grid_wheel_folder_pane

0xd6ae,	// (0x0000d6ae) list_wheel_apps_pane_ParamLimits

0xd6ae,	// (0x0000d6ae) list_wheel_apps_pane

0xd6bc,	// (0x0000d6bc) main_apps_wheel_pane_g1_ParamLimits

0xd6bc,	// (0x0000d6bc) main_apps_wheel_pane_g1

0xd6c8,	// (0x0000d6c8) main_apps_wheel_pane_g2_ParamLimits

0xd6c8,	// (0x0000d6c8) main_apps_wheel_pane_g2

0x0001,

0xf1c2,	// (0x0000f1c2) main_apps_wheel_pane_g_ParamLimits

0xf1c2,	// (0x0000f1c2) main_apps_wheel_pane_g

0xd6d6,	// (0x0000d6d6) main_apps_wheel_pane_t1_ParamLimits

0xd6d6,	// (0x0000d6d6) main_apps_wheel_pane_t1

0xd6ea,	// (0x0000d6ea) list_wheel_apps_pane_g1

0xd6f2,	// (0x0000d6f2) list_wheel_apps_pane_g2

0xd6fa,	// (0x0000d6fa) list_wheel_apps_pane_g3

0xd702,	// (0x0000d702) list_wheel_apps_pane_g4

0xd70c,	// (0x0000d70c) list_wheel_apps_pane_g5

0x0004,

0xf1c7,	// (0x0000f1c7) list_wheel_apps_pane_g

0x2425,	// (0x00002425) navi_icon_text_pane

0xca7d,	// (0x0000ca7d) aid_fill_nsta

0x6072,	// (0x00006072) navi_icon_text_pane_g1

0x607e,	// (0x0000607e) navi_icon_text_pane_t1

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_ParamLimits

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1

0x43d4,	// (0x000043d4) popup_midp_note_alarm_window_t6_ParamLimits

0x43d4,	// (0x000043d4) popup_midp_note_alarm_window_t6

0x43e6,	// (0x000043e6) popup_midp_note_alarm_window_t7_ParamLimits

0x43e6,	// (0x000043e6) popup_midp_note_alarm_window_t7

0x43f8,	// (0x000043f8) popup_midp_note_alarm_window_t8_ParamLimits

0x43f8,	// (0x000043f8) popup_midp_note_alarm_window_t8

0x440a,	// (0x0000440a) popup_midp_note_alarm_window_t9_ParamLimits

0x440a,	// (0x0000440a) popup_midp_note_alarm_window_t9

0x441c,	// (0x0000441c) popup_midp_note_alarm_window_t10_ParamLimits

0x441c,	// (0x0000441c) popup_midp_note_alarm_window_t10

0x442e,	// (0x0000442e) popup_midp_note_alarm_window_t11_ParamLimits

0x442e,	// (0x0000442e) popup_midp_note_alarm_window_t11

0x4440,	// (0x00004440) scroll_pane_cp17_ParamLimits

0x4440,	// (0x00004440) scroll_pane_cp17

0x44f6,	// (0x000044f6) volume_small_pane_cp_g1

0x6090,	// (0x00006090) volume_small_pane_cp_g2

0x6099,	// (0x00006099) volume_small_pane_cp_g3

0x60a2,	// (0x000060a2) volume_small_pane_cp_g4

0x60ab,	// (0x000060ab) volume_small_pane_cp_g5

0x60b4,	// (0x000060b4) volume_small_pane_cp_g6

0x60bd,	// (0x000060bd) volume_small_pane_cp_g7

0x60c6,	// (0x000060c6) volume_small_pane_cp_g8

0x60cf,	// (0x000060cf) volume_small_pane_cp_g9

0x60d8,	// (0x000060d8) volume_small_pane_cp_g10

0x267a,	// (0x0000267a) midp_ticker_pane_g1_ParamLimits

0x2686,	// (0x00002686) midp_ticker_pane_g2_ParamLimits

0xac56,	// (0x0000ac56) midp_ticker_pane_g_ParamLimits

0x2692,	// (0x00002692) midp_ticker_pane_t1_ParamLimits

0xcaa1,	// (0x0000caa1) aid_fill_nsta_2

0x3c7e,	// (0x00003c7e) list_form2_midp_pane

0x5027,	// (0x00005027) midp_editing_number_pane_ParamLimits

0x5036,	// (0x00005036) midp_ticker_pane_ParamLimits

0x60e1,	// (0x000060e1) form2_midp_field_pane

0x6105,	// (0x00006105) scroll_pane_cp51

0x6125,	// (0x00006125) form2_midp_button_pane_ParamLimits

0x6125,	// (0x00006125) form2_midp_button_pane

0x6137,	// (0x00006137) form2_midp_content_pane_ParamLimits

0x6137,	// (0x00006137) form2_midp_content_pane

0x6151,	// (0x00006151) form2_midp_field_choice_group_pane

0x6159,	// (0x00006159) form2_midp_field_pane_g1

0x6161,	// (0x00006161) form2_midp_field_pane_g2

0x6169,	// (0x00006169) form2_midp_field_pane_g3

0x6171,	// (0x00006171) form2_midp_field_pane_g4

0x0003,

0xaff8,	// (0x0000aff8) form2_midp_field_pane_g

0x6179,	// (0x00006179) form2_midp_gauge_slider_pane

0x6181,	// (0x00006181) form2_midp_gauge_wait_pane

0x6189,	// (0x00006189) form2_midp_image_pane_ParamLimits

0x6189,	// (0x00006189) form2_midp_image_pane

0x61a4,	// (0x000061a4) form2_midp_label_pane_ParamLimits

0x61a4,	// (0x000061a4) form2_midp_label_pane

0xd73f,	// (0x0000d73f) form2_midp_label_pane_cp_ParamLimits

0xd73f,	// (0x0000d73f) form2_midp_label_pane_cp

0x61de,	// (0x000061de) form2_midp_string_pane_ParamLimits

0x61de,	// (0x000061de) form2_midp_string_pane

0x61f0,	// (0x000061f0) form2_midp_text_pane_ParamLimits

0x61f0,	// (0x000061f0) form2_midp_text_pane

0x6209,	// (0x00006209) form2_midp_time_pane

0x6219,	// (0x00006219) input_focus_pane_cp51_ParamLimits

0x6219,	// (0x00006219) input_focus_pane_cp51

0x6231,	// (0x00006231) form2_midp_label_pane_t1_ParamLimits

0x6231,	// (0x00006231) form2_midp_label_pane_t1

0x6271,	// (0x00006271) form2_mdip_text_pane_t1_ParamLimits

0x6271,	// (0x00006271) form2_mdip_text_pane_t1

0x628d,	// (0x0000628d) form2_midp_time_pane_t1

0x62a8,	// (0x000062a8) form2_midp_gauge_slider_pane_t1

0xd760,	// (0x0000d760) form2_midp_gauge_slider_pane_t2

0xd774,	// (0x0000d774) form2_midp_gauge_slider_pane_t3

0x0002,

0xf1d7,	// (0x0000f1d7) form2_midp_gauge_slider_pane_t

0x62de,	// (0x000062de) form2_midp_slider_pane

0x62ea,	// (0x000062ea) form2_midp_gauge_wait_pane_t1

0x62f8,	// (0x000062f8) form2_midp_wait_pane_ParamLimits

0x62f8,	// (0x000062f8) form2_midp_wait_pane

0xd788,	// (0x0000d788) list_single_2graphic_pane_cp4_ParamLimits

0xd788,	// (0x0000d788) list_single_2graphic_pane_cp4

0xcf2c,	// (0x0000cf2c) list_single_midp_graphic_pane_cp_ParamLimits

0xcf2c,	// (0x0000cf2c) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6352,	// (0x00006352) list_single_2graphic_pane_g1_cp4

0x5607,	// (0x00005607) list_single_2graphic_pane_g2_cp4

0x635a,	// (0x0000635a) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x6369,	// (0x00006369) list_single_midp_graphic_pane_g4_cp

0x6378,	// (0x00006378) list_single_midp_graphic_pane_t1_cp

0xd79f,	// (0x0000d79f) form2_mdip_string_pane_t1_ParamLimits

0xd79f,	// (0x0000d79f) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0x2b0e,	// (0x00002b0e) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc7d9,	// (0x0000c7d9) popup_preview_window_ParamLimits

0xc7d9,	// (0x0000c7d9) popup_preview_window

0x3064,	// (0x00003064) popup_touch_info_window_ParamLimits

0x3064,	// (0x00003064) popup_touch_info_window

0x3082,	// (0x00003082) popup_touch_menu_window_ParamLimits

0x3082,	// (0x00003082) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x64c7,	// (0x000064c7) list_touch_menu_pane

0x64cf,	// (0x000064cf) list_single_touch_menu_pane_ParamLimits

0x64cf,	// (0x000064cf) list_single_touch_menu_pane

0x64e3,	// (0x000064e3) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x64f1,	// (0x000064f1) heading_sub_pane

0x64f9,	// (0x000064f9) list_touch_info_pane_ParamLimits

0x64f9,	// (0x000064f9) list_touch_info_pane

0x6508,	// (0x00006508) list_single_touch_info_pane_ParamLimits

0x6508,	// (0x00006508) list_single_touch_info_pane

0x651a,	// (0x0000651a) list_single_touch_info_pane_t1

0x6528,	// (0x00006528) list_single_touch_info_pane_t2

0x0001,

0xb00f,	// (0x0000b00f) list_single_touch_info_pane_t

0x25a7,	// (0x000025a7) bg_popup_heading_pane_cp

0x6536,	// (0x00006536) heading_sub_pane_t1

0x37d3,	// (0x000037d3) bg_popup_preview_window_pane_cp_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_preview_window_pane_cp

0x64f1,	// (0x000064f1) heading_preview_pane

0x64f9,	// (0x000064f9) list_preview_pane_ParamLimits

0x64f9,	// (0x000064f9) list_preview_pane

0x6544,	// (0x00006544) popup_preview_window_g1

0x6508,	// (0x00006508) list_single_preview_pane_ParamLimits

0x6508,	// (0x00006508) list_single_preview_pane

0x654c,	// (0x0000654c) list_single_preview_pane_g1

0x6554,	// (0x00006554) list_single_preview_pane_t1

0x651a,	// (0x0000651a) list_single_preview_pane_t2

0x0001,

0xb014,	// (0x0000b014) list_single_preview_pane_t

0x6562,	// (0x00006562) bg_popup_heading_pane_cp2_ParamLimits

0x6562,	// (0x00006562) bg_popup_heading_pane_cp2

0x6578,	// (0x00006578) heading_preview_pane_g1

0x6580,	// (0x00006580) heading_preview_pane_t1_ParamLimits

0x6580,	// (0x00006580) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b2b,	// (0x00001b2b) scroll_sc2_left_pane

0x1b34,	// (0x00001b34) scroll_sc2_right_pane

0x1b53,	// (0x00001b53) scroll_bg_pane_g1_ParamLimits

0x1b68,	// (0x00001b68) scroll_bg_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_bg_pane_g3_ParamLimits

0xabe1,	// (0x0000abe1) scroll_bg_pane_g_ParamLimits

0x1b53,	// (0x00001b53) scroll_handle_pane_g1_ParamLimits

0x1ba2,	// (0x00001ba2) scroll_handle_pane_g2_ParamLimits

0x1b80,	// (0x00001b80) scroll_handle_pane_g3_ParamLimits

0xabe8,	// (0x0000abe8) scroll_handle_pane_g_ParamLimits

0x2b3e,	// (0x00002b3e) popup_choice_list_window_ParamLimits

0x2b3e,	// (0x00002b3e) popup_choice_list_window

0x3547,	// (0x00003547) choice_list_pane

0x360f,	// (0x0000360f) cell_toolbar_pane_t1

0x3637,	// (0x00003637) toolbar_button_pane_ParamLimits

0x4a5c,	// (0x00004a5c) ai_gene_pane_1_t2_ParamLimits

0x4a5c,	// (0x00004a5c) ai_gene_pane_1_t2

0x0001,

0xae09,	// (0x0000ae09) ai_gene_pane_1_t_ParamLimits

0xae09,	// (0x0000ae09) ai_gene_pane_1_t

0x659d,	// (0x0000659d) scroll_sc2_left_pane_g1

0x659d,	// (0x0000659d) scroll_sc2_right_pane_g1

0x2b0e,	// (0x00002b0e) bg_popup_sub_pane_cp10

0x65a7,	// (0x000065a7) list_choice_list_pane

0x65be,	// (0x000065be) list_single_choice_list_pane_ParamLimits

0x65be,	// (0x000065be) list_single_choice_list_pane

0x1661,	// (0x00001661) list_single_choice_list_pane_g1

0x1669,	// (0x00001669) list_single_choice_list_pane_t1_ParamLimits

0x1669,	// (0x00001669) list_single_choice_list_pane_t1

0x65d1,	// (0x000065d1) choice_list_pane_g1

0x65d9,	// (0x000065d9) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x1890,	// (0x00001890) title_pane_stacon_g2_ParamLimits

0x1890,	// (0x00001890) title_pane_stacon_g2

0x0002,

0xabc7,	// (0x0000abc7) title_pane_stacon_g_ParamLimits

0xabc7,	// (0x0000abc7) title_pane_stacon_g

0x25a7,	// (0x000025a7) cursor_press_pane

0xc498,	// (0x0000c498) popup_fep_hwr_window_ParamLimits

0xc498,	// (0x0000c498) popup_fep_hwr_window

0x2c5c,	// (0x00002c5c) popup_fep_vkb_window_ParamLimits

0x2c5c,	// (0x00002c5c) popup_fep_vkb_window

0x65e7,	// (0x000065e7) cursor_press_pane_g1

0x0002,

0xf1eb,	// (0x0000f1eb) fep_vkb_side_pane_g_ParamLimits

0x6628,	// (0x00006628) fep_hwr_candidate_pane_ParamLimits

0x6628,	// (0x00006628) fep_hwr_candidate_pane

0x6652,	// (0x00006652) fep_hwr_side_pane_ParamLimits

0x6652,	// (0x00006652) fep_hwr_side_pane

0x6672,	// (0x00006672) fep_hwr_top_pane_ParamLimits

0x6672,	// (0x00006672) fep_hwr_top_pane

0x668a,	// (0x0000668a) fep_hwr_write_pane_ParamLimits

0x668a,	// (0x0000668a) fep_hwr_write_pane

0xf1eb,	// (0x0000f1eb) fep_vkb_side_pane_g

0x66c4,	// (0x000066c4) fep_hwr_top_pane_g1

0x66d6,	// (0x000066d6) fep_hwr_top_pane_g2

0x66e8,	// (0x000066e8) fep_hwr_top_pane_g3

0x0002,

0xb019,	// (0x0000b019) fep_hwr_top_pane_g

0x66fd,	// (0x000066fd) fep_hwr_top_text_pane

0x1cf5,	// (0x00001cf5) fep_hwr_top_text_pane_g1

0x67d5,	// (0x000067d5) fep_hwr_top_text_pane_t1

0x6825,	// (0x00006825) fep_hwr_candidate_pane_g1

0x6aa5,	// (0x00006aa5) fep_vkb_keypad_pane_g3_ParamLimits

0x6aa5,	// (0x00006aa5) fep_vkb_keypad_pane_g3

0x6acd,	// (0x00006acd) fep_vkb_keypad_pane_g4_ParamLimits

0x6acd,	// (0x00006acd) fep_vkb_keypad_pane_g4

0x6b3c,	// (0x00006b3c) fep_vkb_bottom_pane_g2_ParamLimits

0x6b3c,	// (0x00006b3c) fep_vkb_bottom_pane_g2

0x0001,

0xb044,	// (0x0000b044) fep_vkb_bottom_pane_g_ParamLimits

0xb044,	// (0x0000b044) fep_vkb_bottom_pane_g

0x659d,	// (0x0000659d) cell_vkb_side_pane_g2

0x0001,

0xb04e,	// (0x0000b04e) cell_vkb_side_pane_g

0x6bc7,	// (0x00006bc7) cell_vkb_side_pane_t1

0x6bd5,	// (0x00006bd5) cell_vkb_side_pane_t1_copy1

0x659d,	// (0x0000659d) bg_fep_vkb_candidate_pane_g2

0x6d07,	// (0x00006d07) cell_vkb_candidate_pane_ParamLimits

0x6859,	// (0x00006859) aid_size_cell_vkb_ParamLimits

0x6859,	// (0x00006859) aid_size_cell_vkb

0x6d07,	// (0x00006d07) cell_vkb_candidate_pane

0x6d3d,	// (0x00006d3d) bg_popup_fep_shadow_pane_g1

0x68e7,	// (0x000068e7) fep_vkb_bottom_pane_ParamLimits

0x68e7,	// (0x000068e7) fep_vkb_bottom_pane

0x6924,	// (0x00006924) fep_vkb_candidate_pane_ParamLimits

0x6924,	// (0x00006924) fep_vkb_candidate_pane

0x6940,	// (0x00006940) fep_vkb_keypad_pane_ParamLimits

0x6940,	// (0x00006940) fep_vkb_keypad_pane

0x6986,	// (0x00006986) fep_vkb_side_pane_ParamLimits

0x6986,	// (0x00006986) fep_vkb_side_pane

0x69c2,	// (0x000069c2) fep_vkb_top_pane_ParamLimits

0x69c2,	// (0x000069c2) fep_vkb_top_pane

0x69fe,	// (0x000069fe) fep_vkb_top_pane_g1_ParamLimits

0x69fe,	// (0x000069fe) fep_vkb_top_pane_g1

0x6a0d,	// (0x00006a0d) fep_vkb_top_pane_g2_ParamLimits

0x6a0d,	// (0x00006a0d) fep_vkb_top_pane_g2

0x6a1c,	// (0x00006a1c) fep_vkb_top_pane_g3_ParamLimits

0x6a1c,	// (0x00006a1c) fep_vkb_top_pane_g3

0x0003,

0xb034,	// (0x0000b034) fep_vkb_top_pane_g_ParamLimits

0xb034,	// (0x0000b034) fep_vkb_top_pane_g

0x6a3a,	// (0x00006a3a) fep_vkb_top_text_pane_ParamLimits

0x6a3a,	// (0x00006a3a) fep_vkb_top_text_pane

0xd884,	// (0x0000d884) fep_vkb_side_pane_g1_ParamLimits

0xd884,	// (0x0000d884) fep_vkb_side_pane_g1

0x6a94,	// (0x00006a94) grid_vkb_side_pane_ParamLimits

0x6a94,	// (0x00006a94) grid_vkb_side_pane

0x6d45,	// (0x00006d45) bg_popup_fep_shadow_pane_g2

0x6d4e,	// (0x00006d4e) bg_popup_fep_shadow_pane_g3

0x6d56,	// (0x00006d56) bg_popup_fep_shadow_pane_g4

0x6d5f,	// (0x00006d5f) bg_popup_fep_shadow_pane_g5

0x6d69,	// (0x00006d69) bg_popup_fep_shadow_pane_g6

0x6d71,	// (0x00006d71) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x6aeb,	// (0x00006aeb) grid_vkb_keypad_number_pane_ParamLimits

0x6aeb,	// (0x00006aeb) grid_vkb_keypad_number_pane

0x6afb,	// (0x00006afb) grid_vkb_keypad_pane_ParamLimits

0x6afb,	// (0x00006afb) grid_vkb_keypad_pane

0x6b21,	// (0x00006b21) fep_vkb_bottom_pane_g1_ParamLimits

0x6b21,	// (0x00006b21) fep_vkb_bottom_pane_g1

0x6b4a,	// (0x00006b4a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b4a,	// (0x00006b4a) grid_vkb_keypad_bottom_left_pane

0x6b5f,	// (0x00006b5f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b5f,	// (0x00006b5f) grid_vkb_keypad_bottom_right_pane

0x6b74,	// (0x00006b74) fep_vkb_top_text_pane_g1

0xd8cb,	// (0x0000d8cb) fep_vkb_top_text_pane_t1

0xd8dd,	// (0x0000d8dd) cell_vkb_side_pane_ParamLimits

0xd8dd,	// (0x0000d8dd) cell_vkb_side_pane

0x659d,	// (0x0000659d) cell_vkb_side_pane_g1

0x6be3,	// (0x00006be3) cell_vkb_keypad_pane_ParamLimits

0x6be3,	// (0x00006be3) cell_vkb_keypad_pane

0x6c5e,	// (0x00006c5e) cell_vkb_keypad_pane_g1

0x0008,

0xb061,	// (0x0000b061) bg_popup_fep_shadow_pane_g

0x659d,	// (0x0000659d) cell_hwr_side_pane_g1

0x659d,	// (0x0000659d) cell_hwr_side_pane_g2

0x6c68,	// (0x00006c68) cell_vkb_keypad_pane_t1

0xd8f3,	// (0x0000d8f3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8f3,	// (0x0000d8f3) cell_vkb_keypad_bottom_left_pane

0xd908,	// (0x0000d908) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd908,	// (0x0000d908) cell_vkb_keypad_bottom_right_pane

0x659d,	// (0x0000659d) cell_vkb_keypad_bottom_left_pane_g1

0x659d,	// (0x0000659d) cell_vkb_keypad_bottom_right_pane_g1

0x6ccc,	// (0x00006ccc) cell_vkb_keypad_number_pane_ParamLimits

0x6ccc,	// (0x00006ccc) cell_vkb_keypad_number_pane

0x6ceb,	// (0x00006ceb) cell_vkb_keypad_number_pane_g1

0x6cf5,	// (0x00006cf5) cell_vkb_keypad_number_pane_g2

0x6cfe,	// (0x00006cfe) cell_vkb_keypad_number_pane_g3

0x0002,

0xb053,	// (0x0000b053) cell_vkb_keypad_number_pane_g

0x6c68,	// (0x00006c68) cell_vkb_keypad_number_pane_t1

0x6d24,	// (0x00006d24) fep_vkb_candidate_pane_g1

0x0001,

0xb04e,	// (0x0000b04e) cell_hwr_side_pane_g

0x6d83,	// (0x00006d83) cell_hwr_side_pane_t1

0x6d91,	// (0x00006d91) cell_hwr_side_pane_t1_copy1

0x6a2c,	// (0x00006a2c) cell_hwr_candidate_pane_g1

0x6de1,	// (0x00006de1) cell_hwr_candidate_pane_t1

0x659d,	// (0x0000659d) cell_vkb_candidate_pane_g2

0x6e35,	// (0x00006e35) cell_vkb_candidate_pane_t1

0x65ef,	// (0x000065ef) bg_popup_fep_shadow_pane_ParamLimits

0x65ef,	// (0x000065ef) bg_popup_fep_shadow_pane

0x66a4,	// (0x000066a4) bg_fep_hwr_top_pane_g4

0x6712,	// (0x00006712) bg_hwr_side_pane_g1_ParamLimits

0x6712,	// (0x00006712) bg_hwr_side_pane_g1

0xd83d,	// (0x0000d83d) cell_hwr_side_pane_ParamLimits

0xd83d,	// (0x0000d83d) cell_hwr_side_pane

0x6780,	// (0x00006780) fep_hwr_write_pane_g1_ParamLimits

0x6780,	// (0x00006780) fep_hwr_write_pane_g1

0x678d,	// (0x0000678d) fep_hwr_write_pane_g2_ParamLimits

0x678d,	// (0x0000678d) fep_hwr_write_pane_g2

0x679a,	// (0x0000679a) fep_hwr_write_pane_g3_ParamLimits

0x679a,	// (0x0000679a) fep_hwr_write_pane_g3

0xd85d,	// (0x0000d85d) fep_hwr_write_pane_g4_ParamLimits

0xd85d,	// (0x0000d85d) fep_hwr_write_pane_g4

0x0005,

0xf1de,	// (0x0000f1de) fep_hwr_write_pane_g_ParamLimits

0xf1de,	// (0x0000f1de) fep_hwr_write_pane_g

0x66a4,	// (0x000066a4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x66a4,	// (0x000066a4) bg_fep_hwr_candidate_pane_g2

0x67e3,	// (0x000067e3) cell_hwr_candidate_pane_ParamLimits

0x67e3,	// (0x000067e3) cell_hwr_candidate_pane

0x6825,	// (0x00006825) fep_hwr_candidate_pane_g1_ParamLimits

0x6887,	// (0x00006887) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6887,	// (0x00006887) bg_popup_fep_shadow_pane_cp2

0x6a2c,	// (0x00006a2c) fep_vkb_top_pane_g4_ParamLimits

0x6a2c,	// (0x00006a2c) fep_vkb_top_pane_g4

0x6a72,	// (0x00006a72) fep_vkb_side_pane_g2_ParamLimits

0x6a72,	// (0x00006a72) fep_vkb_side_pane_g2

0xbc33,	// (0x0000bc33) list_setting_pane_t4_ParamLimits

0xbc33,	// (0x0000bc33) list_setting_pane_t4

0xbcad,	// (0x0000bcad) list_setting_number_pane_t5_ParamLimits

0xbcad,	// (0x0000bcad) list_setting_number_pane_t5

0x1d5b,	// (0x00001d5b) list_double_heading_pane_cp2_ParamLimits

0x1d5b,	// (0x00001d5b) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6e43,	// (0x00006e43) list_double_heading_pane_t1_cp2_ParamLimits

0x6e43,	// (0x00006e43) list_double_heading_pane_t1_cp2

0x6e59,	// (0x00006e59) list_double_heading_pane_t2_cp2_ParamLimits

0x6e59,	// (0x00006e59) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6e6b,	// (0x00006e6b) list_preview_fixed_pane

0x6eb1,	// (0x00006eb1) list_empty_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_empty_pane_fp

0x6eb1,	// (0x00006eb1) list_single_cale_day_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_cale_day_pane_fp

0x6eb1,	// (0x00006eb1) list_single_graphic_heading_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_graphic_heading_pane_fp

0x6eb1,	// (0x00006eb1) list_single_graphic_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_graphic_pane_fp

0x6eb1,	// (0x00006eb1) list_single_heading_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_heading_pane_fp

0x6eb1,	// (0x00006eb1) list_single_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_pane_fp

0x6ec8,	// (0x00006ec8) list_single_pane_fp_g1_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6ed4,	// (0x00006ed4) list_single_pane_fp_g4_ParamLimits

0x6ed4,	// (0x00006ed4) list_single_pane_fp_g4

0x0003,

0xb082,	// (0x0000b082) list_single_pane_fp_g_ParamLimits

0xb082,	// (0x0000b082) list_single_pane_fp_g

0x6ee0,	// (0x00006ee0) list_single_pane_fp_t1_ParamLimits

0x6ee0,	// (0x00006ee0) list_single_pane_fp_t1

0x6ef7,	// (0x00006ef7) list_single_graphic_pane_fp_g1_ParamLimits

0x6ef7,	// (0x00006ef7) list_single_graphic_pane_fp_g1

0x6ec8,	// (0x00006ec8) list_single_graphic_pane_fp_g2_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6ed4,	// (0x00006ed4) list_single_graphic_pane_fp_g5_ParamLimits

0x6ed4,	// (0x00006ed4) list_single_graphic_pane_fp_g5

0x0004,

0xb08b,	// (0x0000b08b) list_single_graphic_pane_fp_g_ParamLimits

0xb08b,	// (0x0000b08b) list_single_graphic_pane_fp_g

0x6f03,	// (0x00006f03) list_single_graphic_pane_fp_t1_ParamLimits

0x6f03,	// (0x00006f03) list_single_graphic_pane_fp_t1

0x6ef7,	// (0x00006ef7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6ef7,	// (0x00006ef7) list_single_graphic_heading_pane_fp_g1

0x6ec8,	// (0x00006ec8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6ed4,	// (0x00006ed4) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6ed4,	// (0x00006ed4) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb08b,	// (0x0000b08b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb08b,	// (0x0000b08b) list_single_graphic_heading_pane_fp_g

0x6f19,	// (0x00006f19) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f19,	// (0x00006f19) list_single_graphic_heading_pane_fp_t1

0x6f2f,	// (0x00006f2f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f2f,	// (0x00006f2f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb096,	// (0x0000b096) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb096,	// (0x0000b096) list_single_graphic_heading_pane_fp_t

0x6f41,	// (0x00006f41) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f41,	// (0x00006f41) list_single_cale_day_pane_fp_g1

0x6f79,	// (0x00006f79) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f79,	// (0x00006f79) list_single_cale_day_pane_fp_g2

0x6f85,	// (0x00006f85) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f85,	// (0x00006f85) list_single_cale_day_pane_fp_g3

0x6fad,	// (0x00006fad) list_single_cale_day_pane_fp_g4_ParamLimits

0x6fad,	// (0x00006fad) list_single_cale_day_pane_fp_g4

0x6fd1,	// (0x00006fd1) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fd1,	// (0x00006fd1) list_single_cale_day_pane_fp_g5

0x0004,

0xb09b,	// (0x0000b09b) list_single_cale_day_pane_fp_g_ParamLimits

0xb09b,	// (0x0000b09b) list_single_cale_day_pane_fp_g

0x6ff5,	// (0x00006ff5) list_single_cale_day_pane_fp_t1_ParamLimits

0x6ff5,	// (0x00006ff5) list_single_cale_day_pane_fp_t1

0x701b,	// (0x0000701b) list_single_cale_day_pane_fp_t2_ParamLimits

0x701b,	// (0x0000701b) list_single_cale_day_pane_fp_t2

0x7034,	// (0x00007034) list_single_cale_day_pane_fp_t3_ParamLimits

0x7034,	// (0x00007034) list_single_cale_day_pane_fp_t3

0x0002,

0xb0a6,	// (0x0000b0a6) list_single_cale_day_pane_fp_t_ParamLimits

0xb0a6,	// (0x0000b0a6) list_single_cale_day_pane_fp_t

0x6ec8,	// (0x00006ec8) list_empty_pane_fp_g1_ParamLimits

0x6ec8,	// (0x00006ec8) list_empty_pane_fp_g1

0x704d,	// (0x0000704d) list_empty_pane_fp_t1

0x705b,	// (0x0000705b) list_empty_pane_fp_t2

0x0001,

0xb0ad,	// (0x0000b0ad) list_empty_pane_fp_t

0x6ec8,	// (0x00006ec8) list_single_heading_pane_fp_g1_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xb0b2,	// (0x0000b0b2) list_single_heading_pane_fp_g_ParamLimits

0xb0b2,	// (0x0000b0b2) list_single_heading_pane_fp_g

0x7069,	// (0x00007069) list_single_heading_pane_fp_t1_ParamLimits

0x7069,	// (0x00007069) list_single_heading_pane_fp_t1

0x707b,	// (0x0000707b) list_single_heading_pane_fp_t2_ParamLimits

0x707b,	// (0x0000707b) list_single_heading_pane_fp_t2

0x0001,

0xb0b9,	// (0x0000b0b9) list_single_heading_pane_fp_t_ParamLimits

0xb0b9,	// (0x0000b0b9) list_single_heading_pane_fp_t

0x16d7,	// (0x000016d7) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1714,	// (0x00001714) cell_app_pane_cp2_ParamLimits

0x1714,	// (0x00001714) cell_app_pane_cp2

0x6611,	// (0x00006611) fep_hwr_candidate_drop_down_list_pane

0x683f,	// (0x0000683f) fep_hwr_candidate_pane_g3_ParamLimits

0x683f,	// (0x0000683f) fep_hwr_candidate_pane_g3

0x684c,	// (0x0000684c) fep_hwr_candidate_pane_g4_ParamLimits

0x684c,	// (0x0000684c) fep_hwr_candidate_pane_g4

0x0002,

0xb02d,	// (0x0000b02d) fep_hwr_candidate_pane_g_ParamLimits

0xb02d,	// (0x0000b02d) fep_hwr_candidate_pane_g

0x6913,	// (0x00006913) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6913,	// (0x00006913) fep_vkb_candidate_drop_down_list_pane

0x6d2c,	// (0x00006d2c) fep_vkb_candidate_pane_g3

0x6d34,	// (0x00006d34) fep_vkb_candidate_pane_g4

0x0002,

0xb05a,	// (0x0000b05a) fep_vkb_candidate_pane_g

0x6a2c,	// (0x00006a2c) cell_hwr_candidate_pane_g1_ParamLimits

0x6d9f,	// (0x00006d9f) cell_hwr_candidate_pane_g3_ParamLimits

0x6d9f,	// (0x00006d9f) cell_hwr_candidate_pane_g3

0x6dc0,	// (0x00006dc0) cell_hwr_candidate_pane_g4_ParamLimits

0x6dc0,	// (0x00006dc0) cell_hwr_candidate_pane_g4

0x0002,

0xb074,	// (0x0000b074) cell_hwr_candidate_pane_g_ParamLimits

0xb074,	// (0x0000b074) cell_hwr_candidate_pane_g

0x6dff,	// (0x00006dff) cell_vkb_candidate_pane_g3_ParamLimits

0x6dff,	// (0x00006dff) cell_vkb_candidate_pane_g3

0x6e1a,	// (0x00006e1a) cell_vkb_candidate_pane_g4_ParamLimits

0x6e1a,	// (0x00006e1a) cell_vkb_candidate_pane_g4

0x7091,	// (0x00007091) cell_app_pane_cp2_g1_ParamLimits

0x7091,	// (0x00007091) cell_app_pane_cp2_g1

0x70af,	// (0x000070af) cell_app_pane_cp2_g2_ParamLimits

0x70af,	// (0x000070af) cell_app_pane_cp2_g2

0x0001,

0xb0be,	// (0x0000b0be) cell_app_pane_cp2_g_ParamLimits

0xb0be,	// (0x0000b0be) cell_app_pane_cp2_g

0x70bb,	// (0x000070bb) cell_app_pane_cp2_t1_ParamLimits

0x70bb,	// (0x000070bb) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x70cd,	// (0x000070cd) cell_hwr_candidate_pane_cp1_ParamLimits

0x70cd,	// (0x000070cd) cell_hwr_candidate_pane_cp1

0x6a2c,	// (0x00006a2c) fep_hwr_candidate_drop_down_list_pane_g1

0x70ec,	// (0x000070ec) fep_hwr_candidate_drop_down_list_pane_g2

0x70f9,	// (0x000070f9) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb0c3,	// (0x0000b0c3) fep_hwr_candidate_drop_down_list_pane_g

0x7106,	// (0x00007106) fep_hwr_candidate_drop_down_list_scroll_pane

0x710f,	// (0x0000710f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x710f,	// (0x0000710f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x711c,	// (0x0000711c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x711c,	// (0x0000711c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7129,	// (0x00007129) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7129,	// (0x00007129) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6dff,	// (0x00006dff) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6dff,	// (0x00006dff) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6e1a,	// (0x00006e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6e1a,	// (0x00006e1a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7136,	// (0x00007136) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7136,	// (0x00007136) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7151,	// (0x00007151) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7151,	// (0x00007151) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x716c,	// (0x0000716c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x716c,	// (0x0000716c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb0ca,	// (0x0000b0ca) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb0ca,	// (0x0000b0ca) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7187,	// (0x00007187) cell_vkb_candidate_pane_cp1_ParamLimits

0x7187,	// (0x00007187) cell_vkb_candidate_pane_cp1

0x6a2c,	// (0x00006a2c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) fep_vkb_candidate_drop_down_list_pane_g1

0x70ec,	// (0x000070ec) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70ec,	// (0x000070ec) fep_vkb_candidate_drop_down_list_pane_g2

0x70f9,	// (0x000070f9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70f9,	// (0x000070f9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb0c3,	// (0x0000b0c3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb0c3,	// (0x0000b0c3) fep_vkb_candidate_drop_down_list_pane_g

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71a7,	// (0x000071a7) fep_vkb_candidate_drop_down_list_scroll_pane

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71b4,	// (0x000071b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x71c1,	// (0x000071c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71c1,	// (0x000071c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71cd,	// (0x000071cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71cd,	// (0x000071cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d9f,	// (0x00006d9f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d9f,	// (0x00006d9f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6dc0,	// (0x00006dc0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6dc0,	// (0x00006dc0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71d9,	// (0x000071d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71d9,	// (0x000071d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71fa,	// (0x000071fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71fa,	// (0x000071fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x716c,	// (0x0000716c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x716c,	// (0x0000716c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb0db,	// (0x0000b0db) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb0db,	// (0x0000b0db) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb5ca,	// (0x0000b5ca) title_pane_g1_ParamLimits

0xb5dd,	// (0x0000b5dd) title_pane_g2_ParamLimits

0xf01d,	// (0x0000f01d) title_pane_g_ParamLimits

0x1ce5,	// (0x00001ce5) aid_call2_pane

0x1ced,	// (0x00001ced) aid_call_pane

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g1

0x1cf5,	// (0x00001cf5) popup_clock_analogue_window_g2

0x1cfd,	// (0x00001cfd) popup_clock_analogue_window_g3

0x1d06,	// (0x00001d06) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xabf6,	// (0x0000abf6) popup_clock_analogue_window_g

0x1d0e,	// (0x00001d0e) popup_clock_analogue_window_t1

0x1d95,	// (0x00001d95) clock_digital_number_pane_ParamLimits

0x1d95,	// (0x00001d95) clock_digital_number_pane

0x1da1,	// (0x00001da1) clock_digital_number_pane_cp02_ParamLimits

0x1da1,	// (0x00001da1) clock_digital_number_pane_cp02

0x1dad,	// (0x00001dad) clock_digital_number_pane_cp03_ParamLimits

0x1dad,	// (0x00001dad) clock_digital_number_pane_cp03

0x1db9,	// (0x00001db9) clock_digital_number_pane_cp04_ParamLimits

0x1db9,	// (0x00001db9) clock_digital_number_pane_cp04

0x1dc5,	// (0x00001dc5) clock_digital_separator_pane_ParamLimits

0x1dc5,	// (0x00001dc5) clock_digital_separator_pane

0x1dd1,	// (0x00001dd1) popup_clock_digital_window_t1_ParamLimits

0x1dd1,	// (0x00001dd1) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xac01,	// (0x0000ac01) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xac01,	// (0x0000ac01) clock_digital_separator_pane_g

0xca7d,	// (0x0000ca7d) aid_fill_nsta_ParamLimits

0xcbb3,	// (0x0000cbb3) indicator_nsta_pane_ParamLimits

0x3378,	// (0x00003378) popup_clock_analogue_window

0x3378,	// (0x00003378) popup_clock_digital_window

0x1698,	// (0x00001698) grid_indicator_nsta_pane_ParamLimits

0x5eaa,	// (0x00005eaa) clock_nsta_pane_t2

0x0001,

0xafad,	// (0x0000afad) clock_nsta_pane_t

0x1ad0,	// (0x00001ad0) aid_size_max_handle

0xbfb5,	// (0x0000bfb5) aid_size_min_handle

0x25a7,	// (0x000025a7) editor_scroll_pane

0x721b,	// (0x0000721b) ex_editor_pane

0x1646,	// (0x00001646) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d43,	// (0x00001d43) scroll_pane_cp36

0x1d6d,	// (0x00001d6d) list_single_graphic_hl_pane_cp2_ParamLimits

0x1d6d,	// (0x00001d6d) list_single_graphic_hl_pane_cp2

0xd4fa,	// (0x0000d4fa) list_single_graphic_hl_pane_ParamLimits

0xd4fa,	// (0x0000d4fa) list_single_graphic_hl_pane

0x7223,	// (0x00007223) aid_size_min_hl_cp1

0x722c,	// (0x0000722c) list_highlight_pane_cp34_ParamLimits

0x722c,	// (0x0000722c) list_highlight_pane_cp34

0x723d,	// (0x0000723d) list_single_graphic_hl_pane_g1_ParamLimits

0x723d,	// (0x0000723d) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd923,	// (0x0000d923) list_single_graphic_hl_pane_g5_ParamLimits

0xd923,	// (0x0000d923) list_single_graphic_hl_pane_g5

0x0004,

0xf1f7,	// (0x0000f1f7) list_single_graphic_hl_pane_g_ParamLimits

0xf1f7,	// (0x0000f1f7) list_single_graphic_hl_pane_g

0xd937,	// (0x0000d937) list_single_graphic_hl_pane_t1_ParamLimits

0xd937,	// (0x0000d937) list_single_graphic_hl_pane_t1

0x726a,	// (0x0000726a) aid_size_min_hl_cp2

0x7273,	// (0x00007273) list_highlight_pane_cp34_cp2_ParamLimits

0x7273,	// (0x00007273) list_highlight_pane_cp34_cp2

0x723d,	// (0x0000723d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x723d,	// (0x0000723d) list_single_graphic_hl_pane_g1_cp2

0x7280,	// (0x00007280) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7280,	// (0x00007280) list_single_graphic_hl_pane_g2_cp2

0xd94d,	// (0x0000d94d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xd94d,	// (0x0000d94d) list_single_graphic_hl_pane_g3_cp2

0x24de,	// (0x000024de) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24de,	// (0x000024de) list_single_graphic_hl_pane_g4_cp2

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g5_cp2

0xc287,	// (0x0000c287) control_pane_g4_ParamLimits

0xc287,	// (0x0000c287) control_pane_g4

0x2b0e,	// (0x00002b0e) bg_popup_sub_pane_cp10_ParamLimits

0x65a7,	// (0x000065a7) list_choice_list_pane_ParamLimits

0x65b6,	// (0x000065b6) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e6b,	// (0x00006e6b) list_preview_fixed_pane_ParamLimits

0x6e81,	// (0x00006e81) list_preview_fixed_pane_cp_ParamLimits

0x6e81,	// (0x00006e81) list_preview_fixed_pane_cp

0x6e8d,	// (0x00006e8d) popup_preview_fixed_window_g1_ParamLimits

0x6e8d,	// (0x00006e8d) popup_preview_fixed_window_g1

0x6e99,	// (0x00006e99) popup_preview_fixed_window_g2_ParamLimits

0x6e99,	// (0x00006e99) popup_preview_fixed_window_g2

0x0002,

0xb07b,	// (0x0000b07b) popup_preview_fixed_window_g_ParamLimits

0xb07b,	// (0x0000b07b) popup_preview_fixed_window_g

0x1975,	// (0x00001975) aid_navi_side_left_pane_ParamLimits

0x198a,	// (0x0000198a) aid_navi_side_right_pane_ParamLimits

0x19a2,	// (0x000019a2) navi_icon_pane_stacon_ParamLimits

0x19b6,	// (0x000019b6) navi_navi_pane_stacon_ParamLimits

0x19a2,	// (0x000019a2) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72b0,	// (0x000072b0) listscroll_text_info_pane

0x72b8,	// (0x000072b8) list_text_info_pane_ParamLimits

0x72b8,	// (0x000072b8) list_text_info_pane

0x72c7,	// (0x000072c7) scroll_pane_cp24_ParamLimits

0x72c7,	// (0x000072c7) scroll_pane_cp24

0xd95b,	// (0x0000d95b) list_text_info_pane_t1_ParamLimits

0xd95b,	// (0x0000d95b) list_text_info_pane_t1

0xc40d,	// (0x0000c40d) popup_fast_swap2_window_ParamLimits

0xc40d,	// (0x0000c40d) popup_fast_swap2_window

0x731e,	// (0x0000731e) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3caa,	// (0x00003caa) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x7328,	// (0x00007328) grid_fast2_pane

0x7332,	// (0x00007332) listscroll_fast2_pane_g1

0x733a,	// (0x0000733a) listscroll_fast2_pane_g2

0x0001,

0xb0f7,	// (0x0000b0f7) listscroll_fast2_pane_g

0x1646,	// (0x00001646) scroll_pane_cp26

0x7344,	// (0x00007344) cell_fast2_pane_ParamLimits

0x7344,	// (0x00007344) cell_fast2_pane

0x7359,	// (0x00007359) cell_fast2_pane_g1

0x7362,	// (0x00007362) cell_fast2_pane_g2

0x736b,	// (0x0000736b) cell_fast2_pane_g3

0x0002,

0xb0fc,	// (0x0000b0fc) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x72dc,	// (0x000072dc) list_single_text_info_pane

0x7373,	// (0x00007373) eswt_ctrl_button_pane

0x7373,	// (0x00007373) eswt_ctrl_canvas_pane

0x737b,	// (0x0000737b) eswt_ctrl_combo_pane

0x7373,	// (0x00007373) eswt_ctrl_default_pane

0x7373,	// (0x00007373) eswt_ctrl_label_pane

0x7383,	// (0x00007383) eswt_ctrl_wait_pane

0x738b,	// (0x0000738b) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73ab,	// (0x000073ab) popup_eswt_tasktip_window_ParamLimits

0x73ab,	// (0x000073ab) popup_eswt_tasktip_window

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp18

0x73bc,	// (0x000073bc) eswt_control_pane_g1_ParamLimits

0x73bc,	// (0x000073bc) eswt_control_pane_g1

0x73c9,	// (0x000073c9) eswt_control_pane_g2_ParamLimits

0x73c9,	// (0x000073c9) eswt_control_pane_g2

0x73d6,	// (0x000073d6) eswt_control_pane_g3_ParamLimits

0x73d6,	// (0x000073d6) eswt_control_pane_g3

0x73e3,	// (0x000073e3) eswt_control_pane_g4_ParamLimits

0x73e3,	// (0x000073e3) eswt_control_pane_g4

0x0003,

0xb103,	// (0x0000b103) eswt_control_pane_g_ParamLimits

0xb103,	// (0x0000b103) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x73f0,	// (0x000073f0) control_button_pane_g1_ParamLimits

0x73f0,	// (0x000073f0) control_button_pane_g1

0x73fc,	// (0x000073fc) control_button_pane_g2_ParamLimits

0x73fc,	// (0x000073fc) control_button_pane_g2

0x7408,	// (0x00007408) control_button_pane_g3_ParamLimits

0x7408,	// (0x00007408) control_button_pane_g3

0x0002,

0xb10c,	// (0x0000b10c) control_button_pane_g_ParamLimits

0xb10c,	// (0x0000b10c) control_button_pane_g

0x741c,	// (0x0000741c) control_button_pane_t1

0x742a,	// (0x0000742a) control_button_pane_t2

0x0001,

0xb113,	// (0x0000b113) control_button_pane_t

0x3643,	// (0x00003643) bg_button_pane_g1

0x364b,	// (0x0000364b) bg_button_pane_g2

0x3653,	// (0x00003653) bg_button_pane_g3

0x365b,	// (0x0000365b) bg_button_pane_g4

0x3663,	// (0x00003663) bg_button_pane_g5

0x366b,	// (0x0000366b) bg_button_pane_g6

0x3673,	// (0x00003673) bg_button_pane_g7

0x367b,	// (0x0000367b) bg_button_pane_g8

0x3683,	// (0x00003683) bg_button_pane_g9

0x0008,

0xad5d,	// (0x0000ad5d) bg_button_pane_g

0x6562,	// (0x00006562) common_borders_pane_ParamLimits

0x6562,	// (0x00006562) common_borders_pane

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy1_ParamLimits

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy1

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy1_ParamLimits

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy1

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy1_ParamLimits

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy1

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy1_ParamLimits

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy1

0x659d,	// (0x0000659d) bg_eswt_ctrl_canvas_pane_g1

0x6562,	// (0x00006562) common_borders_pane_cp2_ParamLimits

0x6562,	// (0x00006562) common_borders_pane_cp2

0x6562,	// (0x00006562) common_borders_pane_cp3_ParamLimits

0x6562,	// (0x00006562) common_borders_pane_cp3

0x7438,	// (0x00007438) separator_horizontal_pane

0x7440,	// (0x00007440) separator_vertical_pane

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy2_ParamLimits

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy2

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy2_ParamLimits

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy2

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy2_ParamLimits

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy2

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy2_ParamLimits

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7449,	// (0x00007449) separator_horizontal_pane_g1

0x7452,	// (0x00007452) separator_horizontal_pane_g2

0x745b,	// (0x0000745b) separator_horizontal_pane_g3

0x0002,

0xb118,	// (0x0000b118) separator_horizontal_pane_g

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy3_ParamLimits

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy3

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy3_ParamLimits

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy3

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy3_ParamLimits

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy3

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy3_ParamLimits

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7464,	// (0x00007464) separator_vertical_pane_g1

0x746d,	// (0x0000746d) separator_vertical_pane_g2

0x7476,	// (0x00007476) separator_vertical_pane_g3

0x0002,

0xb11f,	// (0x0000b11f) separator_vertical_pane_g

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy4_ParamLimits

0x73bc,	// (0x000073bc) eswt_control_pane_g1_copy4

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy4_ParamLimits

0x73c9,	// (0x000073c9) eswt_control_pane_g2_copy4

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy4_ParamLimits

0x73d6,	// (0x000073d6) eswt_control_pane_g3_copy4

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy4_ParamLimits

0x73e3,	// (0x000073e3) eswt_control_pane_g4_copy4

0xd979,	// (0x0000d979) eswt_ctrl_combo_button_pane

0xd981,	// (0x0000d981) eswt_ctrl_input_pane

0xd989,	// (0x0000d989) popup_choice_list_window_cp70

0xd991,	// (0x0000d991) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6562,	// (0x00006562) bg_button_pane_cp70_ParamLimits

0x6562,	// (0x00006562) bg_button_pane_cp70

0xd99f,	// (0x0000d99f) eswt_ctrl_combo_button_pane_g1

0x74ad,	// (0x000074ad) wait_bar_pane_cp70

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp70_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp70

0x74b5,	// (0x000074b5) popup_eswt_tasktip_window_t1

0x74cb,	// (0x000074cb) wait_bar_pane_cp71_ParamLimits

0x74cb,	// (0x000074cb) wait_bar_pane_cp71

0x74d7,	// (0x000074d7) grid_eswt_app_pane

0x1b34,	// (0x00001b34) scroll_pane_cp70

0xd9a7,	// (0x0000d9a7) cell_eswt_app_pane_ParamLimits

0xd9a7,	// (0x0000d9a7) cell_eswt_app_pane

0xd9d1,	// (0x0000d9d1) cell_eswt_app_pane_g1_ParamLimits

0xd9d1,	// (0x0000d9d1) cell_eswt_app_pane_g1

0xda00,	// (0x0000da00) cell_eswt_app_pane_g2_ParamLimits

0xda00,	// (0x0000da00) cell_eswt_app_pane_g2

0x0001,

0xf202,	// (0x0000f202) cell_eswt_app_pane_g_ParamLimits

0xf202,	// (0x0000f202) cell_eswt_app_pane_g

0xda29,	// (0x0000da29) cell_eswt_app_pane_t1_ParamLimits

0xda29,	// (0x0000da29) cell_eswt_app_pane_t1

0x759e,	// (0x0000759e) grid_highlight_pane_cp70_ParamLimits

0x759e,	// (0x0000759e) grid_highlight_pane_cp70

0x247a,	// (0x0000247a) set_content_pane_g1

0x28ec,	// (0x000028ec) status_small_volume_pane

0x75aa,	// (0x000075aa) status_small_volume_pane_g1

0x75b2,	// (0x000075b2) volume_small2_pane

0x75bb,	// (0x000075bb) volume_small2_pane_g1

0x75c4,	// (0x000075c4) volume_small2_pane_g2

0x75cd,	// (0x000075cd) volume_small2_pane_g3

0x75d6,	// (0x000075d6) volume_small2_pane_g4

0x75df,	// (0x000075df) volume_small2_pane_g5

0x75e8,	// (0x000075e8) volume_small2_pane_g6

0x75f1,	// (0x000075f1) volume_small2_pane_g7

0x75fa,	// (0x000075fa) volume_small2_pane_g8

0x7603,	// (0x00007603) volume_small2_pane_g9

0x760c,	// (0x0000760c) volume_small2_pane_g10

0x0009,

0xb12b,	// (0x0000b12b) volume_small2_pane_g

0x6b74,	// (0x00006b74) fep_vkb_top_text_pane_g1_ParamLimits

0xd8cb,	// (0x0000d8cb) fep_vkb_top_text_pane_t1_ParamLimits

0x6ea5,	// (0x00006ea5) popup_preview_fixed_window_g3_ParamLimits

0x6ea5,	// (0x00006ea5) popup_preview_fixed_window_g3

0xca10,	// (0x0000ca10) popup_toolbar_trans_pane

0xd34f,	// (0x0000d34f) aid_height_set_list_ParamLimits

0x4e75,	// (0x00004e75) aid_size_parent_ParamLimits

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_ParamLimits

0x247a,	// (0x0000247a) set_content_pane_g1_ParamLimits

0xd50d,	// (0x0000d50d) list_single_image_pane_ParamLimits

0xd50d,	// (0x0000d50d) list_single_image_pane

0xda5b,	// (0x0000da5b) aid_size_cell_image_ParamLimits

0xda5b,	// (0x0000da5b) aid_size_cell_image

0xda68,	// (0x0000da68) grid_single_image_pane_ParamLimits

0xda68,	// (0x0000da68) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xb140,	// (0x0000b140) list_single_image_pane_g_ParamLimits

0xb140,	// (0x0000b140) list_single_image_pane_g

0x762e,	// (0x0000762e) list_single_image_pane_t1_ParamLimits

0x762e,	// (0x0000762e) list_single_image_pane_t1

0xda74,	// (0x0000da74) cell_image_list_pane_ParamLimits

0xda74,	// (0x0000da74) cell_image_list_pane

0xda88,	// (0x0000da88) cell_image_list_pane_g1

0xda91,	// (0x0000da91) cell_image_list_pane_g2

0x0001,

0xf207,	// (0x0000f207) cell_image_list_pane_g

0x766a,	// (0x0000766a) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x767c,	// (0x0000767c) grid_tb_trans_pane

0x3643,	// (0x00003643) bg_tb_trans_pane_g1

0x364b,	// (0x0000364b) bg_tb_trans_pane_g2

0x3653,	// (0x00003653) bg_tb_trans_pane_g3

0x365b,	// (0x0000365b) bg_tb_trans_pane_g4

0x3663,	// (0x00003663) bg_tb_trans_pane_g5

0x367b,	// (0x0000367b) bg_tb_trans_pane_g6

0x3683,	// (0x00003683) bg_tb_trans_pane_g7

0x366b,	// (0x0000366b) bg_tb_trans_pane_g8

0x3673,	// (0x00003673) bg_tb_trans_pane_g9

0x0008,

0xb14a,	// (0x0000b14a) bg_tb_trans_pane_g

0x7690,	// (0x00007690) cell_toolbar_trans_pane_ParamLimits

0x7690,	// (0x00007690) cell_toolbar_trans_pane

0x659d,	// (0x0000659d) cell_toolbar_trans_pane_g1

0xd723,	// (0x0000d723) list_form2_midp_pane_t1

0xd731,	// (0x0000d731) list_form2_midp_pane_t2

0x0001,

0xf1d2,	// (0x0000f1d2) list_form2_midp_pane_t

0x6105,	// (0x00006105) scroll_pane_cp51_ParamLimits

0x6308,	// (0x00006308) form2_midp_wait_pane_g1

0x6311,	// (0x00006311) form2_midp_wait_pane_g2

0x631a,	// (0x0000631a) form2_midp_wait_pane_g3

0x0002,

0xb008,	// (0x0000b008) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x6369,	// (0x00006369) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6378,	// (0x00006378) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5077,	// (0x00005077) list_single_2graphic_im_pane_ParamLimits

0x5077,	// (0x00005077) list_single_2graphic_im_pane

0xda9a,	// (0x0000da9a) list_single_2graphic_im_pane_g1_ParamLimits

0xda9a,	// (0x0000da9a) list_single_2graphic_im_pane_g1

0xdaab,	// (0x0000daab) list_single_2graphic_im_pane_g2_ParamLimits

0xdaab,	// (0x0000daab) list_single_2graphic_im_pane_g2

0xdab7,	// (0x0000dab7) list_single_2graphic_im_pane_g3_ParamLimits

0xdab7,	// (0x0000dab7) list_single_2graphic_im_pane_g3

0x0003,

0xf20c,	// (0x0000f20c) list_single_2graphic_im_pane_g_ParamLimits

0xf20c,	// (0x0000f20c) list_single_2graphic_im_pane_g

0xdacb,	// (0x0000dacb) list_single_2graphic_im_pane_t1_ParamLimits

0xdacb,	// (0x0000dacb) list_single_2graphic_im_pane_t1

0x6eb1,	// (0x00006eb1) list_single_graphic_2heading_pane_fp_ParamLimits

0x6eb1,	// (0x00006eb1) list_single_graphic_2heading_pane_fp

0x6ef7,	// (0x00006ef7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6ef7,	// (0x00006ef7) list_single_graphic_2heading_pane_fp_g1

0x6ec8,	// (0x00006ec8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ec8,	// (0x00006ec8) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6ed4,	// (0x00006ed4) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6ed4,	// (0x00006ed4) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb08b,	// (0x0000b08b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb08b,	// (0x0000b08b) list_single_graphic_2heading_pane_fp_g

0x7724,	// (0x00007724) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7724,	// (0x00007724) list_single_graphic_2heading_pane_fp_t1

0x6f2f,	// (0x00006f2f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f2f,	// (0x00006f2f) list_single_graphic_2heading_pane_fp_t2

0x773a,	// (0x0000773a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x773a,	// (0x0000773a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb166,	// (0x0000b166) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb166,	// (0x0000b166) list_single_graphic_2heading_pane_fp_t

0x67bd,	// (0x000067bd) fep_hwr_write_pane_g5_ParamLimits

0x67bd,	// (0x000067bd) fep_hwr_write_pane_g5

0x67c9,	// (0x000067c9) fep_hwr_write_pane_g6_ParamLimits

0x67c9,	// (0x000067c9) fep_hwr_write_pane_g6

0x738b,	// (0x0000738b) eswt_shell_pane_ParamLimits

0x37d3,	// (0x000037d3) bg_popup_window_pane_cp18_ParamLimits

0x4d23,	// (0x00004d23) heading_pane_cp70

0x74b5,	// (0x000074b5) popup_eswt_tasktip_window_t1_ParamLimits

0xcad8,	// (0x0000cad8) aid_touch_tab_arrow_left

0xcaee,	// (0x0000caee) aid_touch_tab_arrow_right

0xb5f5,	// (0x0000b5f5) title_pane_g3_ParamLimits

0xb5f5,	// (0x0000b5f5) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xca10,	// (0x0000ca10) popup_toolbar_trans_pane_ParamLimits

0x766a,	// (0x0000766a) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x767c,	// (0x0000767c) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3ec0,	// (0x00003ec0) cont_note_wait_pane_ParamLimits

0x3ec0,	// (0x00003ec0) cont_note_wait_pane

0x3ec0,	// (0x00003ec0) cont_note_image_pane_ParamLimits

0x3ec0,	// (0x00003ec0) cont_note_image_pane

0x7750,	// (0x00007750) popup_note2_window_g1_ParamLimits

0x7750,	// (0x00007750) popup_note2_window_g1

0x7781,	// (0x00007781) popup_note2_window_t1_ParamLimits

0x7781,	// (0x00007781) popup_note2_window_t1

0x77c6,	// (0x000077c6) popup_note2_window_t2_ParamLimits

0x77c6,	// (0x000077c6) popup_note2_window_t2

0x780b,	// (0x0000780b) popup_note2_window_t3_ParamLimits

0x780b,	// (0x0000780b) popup_note2_window_t3

0x7850,	// (0x00007850) popup_note2_window_t4_ParamLimits

0x7850,	// (0x00007850) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xb172,	// (0x0000b172) popup_note2_window_t_ParamLimits

0xb172,	// (0x0000b172) popup_note2_window_t

0x787f,	// (0x0000787f) popup_note2_image_window_g1_ParamLimits

0x787f,	// (0x0000787f) popup_note2_image_window_g1

0x788b,	// (0x0000788b) popup_note2_image_window_g2_ParamLimits

0x788b,	// (0x0000788b) popup_note2_image_window_g2

0x0001,

0xb17d,	// (0x0000b17d) popup_note2_image_window_g_ParamLimits

0xb17d,	// (0x0000b17d) popup_note2_image_window_g

0x789d,	// (0x0000789d) popup_note2_image_window_t1_ParamLimits

0x789d,	// (0x0000789d) popup_note2_image_window_t1

0x78b5,	// (0x000078b5) popup_note2_image_window_t2_ParamLimits

0x78b5,	// (0x000078b5) popup_note2_image_window_t2

0x78cd,	// (0x000078cd) popup_note2_image_window_t3_ParamLimits

0x78cd,	// (0x000078cd) popup_note2_image_window_t3

0x0002,

0xb182,	// (0x0000b182) popup_note2_image_window_t_ParamLimits

0xb182,	// (0x0000b182) popup_note2_image_window_t

0x3ece,	// (0x00003ece) popup_note2_wait_window_g1_ParamLimits

0x3ece,	// (0x00003ece) popup_note2_wait_window_g1

0x3eda,	// (0x00003eda) popup_note2_wait_window_g2_ParamLimits

0x3eda,	// (0x00003eda) popup_note2_wait_window_g2

0x3ee6,	// (0x00003ee6) popup_note2_wait_window_g3_ParamLimits

0x3ee6,	// (0x00003ee6) popup_note2_wait_window_g3

0x0002,

0xad3f,	// (0x0000ad3f) popup_note2_wait_window_g_ParamLimits

0xad3f,	// (0x0000ad3f) popup_note2_wait_window_g

0x78e9,	// (0x000078e9) popup_note2_wait_window_t1_ParamLimits

0x78e9,	// (0x000078e9) popup_note2_wait_window_t1

0x7907,	// (0x00007907) popup_note2_wait_window_t2_ParamLimits

0x7907,	// (0x00007907) popup_note2_wait_window_t2

0x7925,	// (0x00007925) popup_note2_wait_window_t3_ParamLimits

0x7925,	// (0x00007925) popup_note2_wait_window_t3

0x7937,	// (0x00007937) popup_note2_wait_window_t4_ParamLimits

0x7937,	// (0x00007937) popup_note2_wait_window_t4

0x0003,

0xb189,	// (0x0000b189) popup_note2_wait_window_t_ParamLimits

0xb189,	// (0x0000b189) popup_note2_wait_window_t

0x7949,	// (0x00007949) wait_bar2_pane_ParamLimits

0x7949,	// (0x00007949) wait_bar2_pane

0x7961,	// (0x00007961) popup_snote2_single_text_window_g1_ParamLimits

0x7961,	// (0x00007961) popup_snote2_single_text_window_g1

0x7989,	// (0x00007989) popup_snote2_single_text_window_t1_ParamLimits

0x7989,	// (0x00007989) popup_snote2_single_text_window_t1

0x79d5,	// (0x000079d5) popup_snote2_single_text_window_t2_ParamLimits

0x79d5,	// (0x000079d5) popup_snote2_single_text_window_t2

0x7a21,	// (0x00007a21) popup_snote2_single_text_window_t3_ParamLimits

0x7a21,	// (0x00007a21) popup_snote2_single_text_window_t3

0x7a62,	// (0x00007a62) popup_snote2_single_text_window_t4_ParamLimits

0x7a62,	// (0x00007a62) popup_snote2_single_text_window_t4

0x7a98,	// (0x00007a98) popup_snote2_single_text_window_t5_ParamLimits

0x7a98,	// (0x00007a98) popup_snote2_single_text_window_t5

0x0004,

0xb192,	// (0x0000b192) popup_snote2_single_text_window_t_ParamLimits

0xb192,	// (0x0000b192) popup_snote2_single_text_window_t

0x7ac3,	// (0x00007ac3) popup_snote2_single_graphic_window_g1_ParamLimits

0x7ac3,	// (0x00007ac3) popup_snote2_single_graphic_window_g1

0x7aeb,	// (0x00007aeb) popup_snote2_single_graphic_window_g2_ParamLimits

0x7aeb,	// (0x00007aeb) popup_snote2_single_graphic_window_g2

0x0001,

0xb19d,	// (0x0000b19d) popup_snote2_single_graphic_window_g_ParamLimits

0xb19d,	// (0x0000b19d) popup_snote2_single_graphic_window_g

0x7b13,	// (0x00007b13) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b13,	// (0x00007b13) popup_snote2_single_graphic_window_t1

0x7b5f,	// (0x00007b5f) popup_snote2_single_graphic_window_t2_ParamLimits

0x7b5f,	// (0x00007b5f) popup_snote2_single_graphic_window_t2

0x7a21,	// (0x00007a21) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a21,	// (0x00007a21) popup_snote2_single_graphic_window_t3

0x7a62,	// (0x00007a62) popup_snote2_single_graphic_window_t4_ParamLimits

0x7a62,	// (0x00007a62) popup_snote2_single_graphic_window_t4

0x7a98,	// (0x00007a98) popup_snote2_single_graphic_window_t5_ParamLimits

0x7a98,	// (0x00007a98) popup_snote2_single_graphic_window_t5

0x0004,

0xb1a2,	// (0x0000b1a2) popup_snote2_single_graphic_window_t_ParamLimits

0xb1a2,	// (0x0000b1a2) popup_snote2_single_graphic_window_t

0x5f6d,	// (0x00005f6d) clock_nsta_pane_cp2_t1

0x5f6d,	// (0x00005f6d) clock_nsta_pane_cp2_t2

0x0001,

0xafc9,	// (0x0000afc9) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xab79,	// (0x0000ab79) form_field_data_wide_pane_g_ParamLimits

0xab79,	// (0x0000ab79) form_field_data_wide_pane_g

0xd657,	// (0x0000d657) grid_touch_3_pane_ParamLimits

0xd657,	// (0x0000d657) grid_touch_3_pane

0xdafc,	// (0x0000dafc) cell_touch_3_pane_ParamLimits

0xdafc,	// (0x0000dafc) cell_touch_3_pane

0x659d,	// (0x0000659d) cell_touch_3_pane_g1

0x659d,	// (0x0000659d) cell_touch_3_pane_g2

0x0001,

0xb04e,	// (0x0000b04e) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7bda,	// (0x00007bda) button_value_adjust_pane_cp7

0x7be2,	// (0x00007be2) query_popup_pane_cp3

0x1e5b,	// (0x00001e5b) bg_popup_sub_pane_cp22_ParamLimits

0x1e71,	// (0x00001e71) navi_navi_volume_pane_cp2

0x1e8c,	// (0x00001e8c) popup_side_volume_key_window_g2

0x1e9b,	// (0x00001e9b) popup_side_volume_key_window_g3

0x0002,

0xac0f,	// (0x0000ac0f) popup_side_volume_key_window_g

0x1eb8,	// (0x00001eb8) popup_side_volume_key_window_t2

0x0001,

0xac16,	// (0x0000ac16) popup_side_volume_key_window_t

0x2344,	// (0x00002344) popup_side_volume_key_window_ParamLimits

0xba63,	// (0x0000ba63) list_double_graphic_pane_g4_ParamLimits

0xba63,	// (0x0000ba63) list_double_graphic_pane_g4

0xd4e5,	// (0x0000d4e5) list_single_2heading_msg_pane_ParamLimits

0xd4e5,	// (0x0000d4e5) list_single_2heading_msg_pane

0xdb46,	// (0x0000db46) list_single_2heading_msg_pane_g1_ParamLimits

0xdb46,	// (0x0000db46) list_single_2heading_msg_pane_g1

0xdb52,	// (0x0000db52) list_single_2heading_msg_pane_g2_ParamLimits

0xdb52,	// (0x0000db52) list_single_2heading_msg_pane_g2

0xdb65,	// (0x0000db65) list_single_2heading_msg_pane_g3_ParamLimits

0xdb65,	// (0x0000db65) list_single_2heading_msg_pane_g3

0xdb71,	// (0x0000db71) list_single_2heading_msg_pane_g4_ParamLimits

0xdb71,	// (0x0000db71) list_single_2heading_msg_pane_g4

0x0003,

0xf215,	// (0x0000f215) list_single_2heading_msg_pane_g_ParamLimits

0xf215,	// (0x0000f215) list_single_2heading_msg_pane_g

0xdb89,	// (0x0000db89) list_single_2heading_msg_pane_t1_ParamLimits

0xdb89,	// (0x0000db89) list_single_2heading_msg_pane_t1

0xdbb1,	// (0x0000dbb1) list_single_2heading_msg_pane_t2_ParamLimits

0xdbb1,	// (0x0000dbb1) list_single_2heading_msg_pane_t2

0xdc1c,	// (0x0000dc1c) list_single_2heading_msg_pane_t3_ParamLimits

0xdc1c,	// (0x0000dc1c) list_single_2heading_msg_pane_t3

0x7cd6,	// (0x00007cd6) list_single_2heading_msg_pane_t4_ParamLimits

0x7cd6,	// (0x00007cd6) list_single_2heading_msg_pane_t4

0x0003,

0xf21e,	// (0x0000f21e) list_single_2heading_msg_pane_t_ParamLimits

0xf21e,	// (0x0000f21e) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x189d,	// (0x0000189d) title_pane_stacon_g3_ParamLimits

0x189d,	// (0x0000189d) title_pane_stacon_g3

0x76e7,	// (0x000076e7) list_single_2graphic_im_pane_g4_ParamLimits

0x76e7,	// (0x000076e7) list_single_2graphic_im_pane_g4

0x4a79,	// (0x00004a79) popup_side_volume_key_window_cp

0x551c,	// (0x0000551c) main_idle_act2_pane_t1

0x368b,	// (0x0000368b) toolbar_button_pane_g10

0xb964,	// (0x0000b964) popup_toolbar_window_cp1

0x5f5e,	// (0x00005f5e) clock_nsta_pane_cp_t1

0x5f5e,	// (0x00005f5e) clock_nsta_pane_cp_t2

0x0001,

0xafc4,	// (0x0000afc4) clock_nsta_pane_cp_t

0x1e71,	// (0x00001e71) navi_navi_volume_pane_cp2_ParamLimits

0x1e80,	// (0x00001e80) popup_side_volume_key_window_g1_ParamLimits

0x1e8c,	// (0x00001e8c) popup_side_volume_key_window_g2_ParamLimits

0x1e9b,	// (0x00001e9b) popup_side_volume_key_window_g3_ParamLimits

0xac0f,	// (0x0000ac0f) popup_side_volume_key_window_g_ParamLimits

0x65fd,	// (0x000065fd) fep_hwr_aid_pane

0x66a4,	// (0x000066a4) bg_fep_hwr_top_pane_g4_ParamLimits

0x66c4,	// (0x000066c4) fep_hwr_top_pane_g1_ParamLimits

0x66d6,	// (0x000066d6) fep_hwr_top_pane_g2_ParamLimits

0x66e8,	// (0x000066e8) fep_hwr_top_pane_g3_ParamLimits

0xb019,	// (0x0000b019) fep_hwr_top_pane_g_ParamLimits

0x66fd,	// (0x000066fd) fep_hwr_top_text_pane_ParamLimits

0x483a,	// (0x0000483a) aid_touch_tab_arrow_arrow_2

0x4843,	// (0x00004843) aid_touch_tab_arrow_left_2

0x6611,	// (0x00006611) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6648,	// (0x00006648) fep_hwr_prediction_pane

0x697c,	// (0x0000697c) fep_vkb_prediction_pane

0xd8ab,	// (0x0000d8ab) fep_vkb_side_pane_g3_ParamLimits

0xd8ab,	// (0x0000d8ab) fep_vkb_side_pane_g3

0x6a2c,	// (0x00006a2c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70ec,	// (0x000070ec) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70f9,	// (0x000070f9) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb0c3,	// (0x0000b0c3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7cfb,	// (0x00007cfb) fep_hwr_prediction_pane_g1

0x7d05,	// (0x00007d05) fep_hwr_prediction_pane_g2

0x7d0d,	// (0x00007d0d) fep_hwr_prediction_pane_g3

0x7d15,	// (0x00007d15) fep_hwr_prediction_pane_g4

0x0003,

0xb1bf,	// (0x0000b1bf) fep_hwr_prediction_pane_g

0x7cfb,	// (0x00007cfb) fep_vkb_prediction_pane_g1

0x7d1d,	// (0x00007d1d) fep_vkb_prediction_pane_g2

0x7d25,	// (0x00007d25) fep_vkb_prediction_pane_g3

0x7d2d,	// (0x00007d2d) fep_vkb_prediction_pane_g4

0x0003,

0xb1c8,	// (0x0000b1c8) fep_vkb_prediction_pane_g

0x4de4,	// (0x00004de4) slider_set_pane_g3

0x4df8,	// (0x00004df8) slider_set_pane_g4

0x4e10,	// (0x00004e10) slider_set_pane_g5

0x4de4,	// (0x00004de4) slider_set_pane_g6

0x4e26,	// (0x00004e26) slider_set_pane_g7

0x4fd2,	// (0x00004fd2) slider_form_pane_g3

0x4fdb,	// (0x00004fdb) slider_form_pane_g4

0x4fe3,	// (0x00004fe3) slider_form_pane_g5

0x4fd2,	// (0x00004fd2) slider_form_pane_g6

0xd496,	// (0x0000d496) slider_form_pane_g7

0x5805,	// (0x00005805) slider_set_pane_vc_g3

0x580e,	// (0x0000580e) slider_set_pane_vc_g4

0x5817,	// (0x00005817) slider_set_pane_vc_g5

0x5805,	// (0x00005805) slider_set_pane_vc_g6

0x5820,	// (0x00005820) slider_set_pane_vc_g7

0x5c1b,	// (0x00005c1b) slider_form_pane_vc_g1

0x5c24,	// (0x00005c24) slider_form_pane_vc_g2

0x5c2d,	// (0x00005c2d) slider_form_pane_vc_g3

0x5c1b,	// (0x00005c1b) slider_form_pane_vc_g4

0x5c36,	// (0x00005c36) slider_form_pane_vc_g5

0x0004,

0xaf96,	// (0x0000af96) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d35,	// (0x00007d35) ai3_links_pane

0xdc8a,	// (0x0000dc8a) popup_ai3_data_window_ParamLimits

0xdc8a,	// (0x0000dc8a) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdca2,	// (0x0000dca2) cell_ai3_links_pane_ParamLimits

0xdca2,	// (0x0000dca2) cell_ai3_links_pane

0x7d6e,	// (0x00007d6e) bg_popup_sub_pane_cp11

0x7d7b,	// (0x00007d7b) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7da0,	// (0x00007da0) heading_ai3_data_pane

0x7da8,	// (0x00007da8) list_ai3_gene_pane

0x7db4,	// (0x00007db4) popup_ai3_data_window_g1

0x7dbc,	// (0x00007dbc) heading_ai3_data_pane_g1

0x7dc4,	// (0x00007dc4) heading_ai3_data_pane_t1

0x7dd2,	// (0x00007dd2) list_double_ai3_gene_pane_ParamLimits

0x7dd2,	// (0x00007dd2) list_double_ai3_gene_pane

0x7ddf,	// (0x00007ddf) list_single_ai3_gene_pane_ParamLimits

0x7ddf,	// (0x00007ddf) list_single_ai3_gene_pane

0x6562,	// (0x00006562) list_highlight_pane_cp7_ParamLimits

0x6562,	// (0x00006562) list_highlight_pane_cp7

0x7dec,	// (0x00007dec) list_single_a13_gene_pane_t1_ParamLimits

0x7dec,	// (0x00007dec) list_single_a13_gene_pane_t1

0x7e03,	// (0x00007e03) list_single_ai3_gene_pane_g1

0x7e0c,	// (0x00007e0c) list_single_ai3_gene_pane_g2

0x0001,

0xb1d1,	// (0x0000b1d1) list_single_ai3_gene_pane_g

0x7e14,	// (0x00007e14) list_double_ai3_gene_pane_g1_ParamLimits

0x7e14,	// (0x00007e14) list_double_ai3_gene_pane_g1

0x7e20,	// (0x00007e20) list_double_ai3_gene_pane_t1_ParamLimits

0x7e20,	// (0x00007e20) list_double_ai3_gene_pane_t1

0x7e3c,	// (0x00007e3c) list_double_ai3_gene_pane_t2_ParamLimits

0x7e3c,	// (0x00007e3c) list_double_ai3_gene_pane_t2

0x7e51,	// (0x00007e51) list_double_ai3_gene_pane_t3_ParamLimits

0x7e51,	// (0x00007e51) list_double_ai3_gene_pane_t3

0x0002,

0xb1d6,	// (0x0000b1d6) list_double_ai3_gene_pane_t_ParamLimits

0xb1d6,	// (0x0000b1d6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7bf3,	// (0x00007bf3) aid_size_min_col_2

0xdb30,	// (0x0000db30) aid_size_min_msg_ParamLimits

0xdb30,	// (0x0000db30) aid_size_min_msg

0xd8bf,	// (0x0000d8bf) fep_vkb_top_text_pane_g2_ParamLimits

0xd8bf,	// (0x0000d8bf) fep_vkb_top_text_pane_g2

0x0001,

0xf1f2,	// (0x0000f1f2) fep_vkb_top_text_pane_g_ParamLimits

0xf1f2,	// (0x0000f1f2) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7e6e,	// (0x00007e6e) grid_hc_apps_pane_ParamLimits

0x7e6e,	// (0x00007e6e) grid_hc_apps_pane

0x7e7d,	// (0x00007e7d) list_hc_apps_pane

0x7e85,	// (0x00007e85) scroll_pane_cp37_ParamLimits

0x7e85,	// (0x00007e85) scroll_pane_cp37

0xdcbc,	// (0x0000dcbc) cell_hc_apps_pane_ParamLimits

0xdcbc,	// (0x0000dcbc) cell_hc_apps_pane

0xdd7c,	// (0x0000dd7c) cell_hc_apps_pane_g1_ParamLimits

0xdd7c,	// (0x0000dd7c) cell_hc_apps_pane_g1

0x7f72,	// (0x00007f72) cell_hc_apps_pane_g2_ParamLimits

0x7f72,	// (0x00007f72) cell_hc_apps_pane_g2

0x7f8e,	// (0x00007f8e) cell_hc_apps_pane_g3_ParamLimits

0x7f8e,	// (0x00007f8e) cell_hc_apps_pane_g3

0x0002,

0xf227,	// (0x0000f227) cell_hc_apps_pane_g_ParamLimits

0xf227,	// (0x0000f227) cell_hc_apps_pane_g

0xdda9,	// (0x0000dda9) cell_hc_apps_pane_t1_ParamLimits

0xdda9,	// (0x0000dda9) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xdde7,	// (0x0000dde7) list_single_hc_apps_pane_ParamLimits

0xdde7,	// (0x0000dde7) list_single_hc_apps_pane

0xde1a,	// (0x0000de1a) list_single_hc_apps_pane_g1

0xde33,	// (0x0000de33) list_single_hc_apps_pane_g2

0x0001,

0xf22e,	// (0x0000f22e) list_single_hc_apps_pane_g

0xde4c,	// (0x0000de4c) list_single_hc_apps_pane_g2_copy1

0xde68,	// (0x0000de68) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xaa61,	// (0x0000aa61) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2975,	// (0x00002975) control_pane_g5_ParamLimits

0x2975,	// (0x00002975) control_pane_g5

0x4dcb,	// (0x00004dcb) slider_set_pane_g1_ParamLimits

0x4dd8,	// (0x00004dd8) slider_set_pane_g2_ParamLimits

0x4de4,	// (0x00004de4) slider_set_pane_g3_ParamLimits

0x4df8,	// (0x00004df8) slider_set_pane_g4_ParamLimits

0x4e10,	// (0x00004e10) slider_set_pane_g5_ParamLimits

0x4de4,	// (0x00004de4) slider_set_pane_g6_ParamLimits

0x4e26,	// (0x00004e26) slider_set_pane_g7_ParamLimits

0xae5b,	// (0x0000ae5b) slider_set_pane_g_ParamLimits

0x2425,	// (0x00002425) navi_icon_text_pane_ParamLimits

0xcaa1,	// (0x0000caa1) aid_fill_nsta_2_ParamLimits

0xcad8,	// (0x0000cad8) aid_touch_tab_arrow_left_ParamLimits

0xcaee,	// (0x0000caee) aid_touch_tab_arrow_right_ParamLimits

0xcb89,	// (0x0000cb89) clock_nsta_pane_ParamLimits

0x481c,	// (0x0000481c) navi_icon_pane_g1_ParamLimits

0x4828,	// (0x00004828) navi_text_pane_t1_ParamLimits

0x6072,	// (0x00006072) navi_icon_text_pane_g1_ParamLimits

0x607e,	// (0x0000607e) navi_icon_text_pane_t1_ParamLimits

0xde1a,	// (0x0000de1a) list_single_hc_apps_pane_g1_ParamLimits

0xde33,	// (0x0000de33) list_single_hc_apps_pane_g2_ParamLimits

0xf22e,	// (0x0000f22e) list_single_hc_apps_pane_g_ParamLimits

0xde4c,	// (0x0000de4c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xde68,	// (0x0000de68) list_single_hc_apps_pane_t1_ParamLimits

0xb55f,	// (0x0000b55f) popup_toolbar2_fixed_window_ParamLimits

0xb55f,	// (0x0000b55f) popup_toolbar2_fixed_window

0xca06,	// (0x0000ca06) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x80df,	// (0x000080df) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x80df,	// (0x000080df) grid_toolbar2_fixed_pane

0xde96,	// (0x0000de96) cell_toolbar2_fixed_pane_ParamLimits

0xde96,	// (0x0000de96) cell_toolbar2_fixed_pane

0xdeb0,	// (0x0000deb0) cell_toolbar2_fixed_pane_g1

0x8101,	// (0x00008101) toolbar2_fixed_button_pane

0x3643,	// (0x00003643) toolbar2_fixed_button_pane_g1

0x364b,	// (0x0000364b) toolbar2_fixed_button_pane_g2

0x3653,	// (0x00003653) toolbar2_fixed_button_pane_g3

0x365b,	// (0x0000365b) toolbar2_fixed_button_pane_g4

0x3663,	// (0x00003663) toolbar2_fixed_button_pane_g5

0x366b,	// (0x0000366b) toolbar2_fixed_button_pane_g6

0x3673,	// (0x00003673) toolbar2_fixed_button_pane_g7

0x367b,	// (0x0000367b) toolbar2_fixed_button_pane_g8

0x3683,	// (0x00003683) toolbar2_fixed_button_pane_g9

0x0008,

0xad5d,	// (0x0000ad5d) toolbar2_fixed_button_pane_g

0x8109,	// (0x00008109) cell_toolbar2_float_pane_ParamLimits

0x8109,	// (0x00008109) cell_toolbar2_float_pane

0x811a,	// (0x0000811a) cell_toolbar2_float_pane_g1

0x8101,	// (0x00008101) toolbar2_fixed_button_pane_cp

0xd872,	// (0x0000d872) fep_vkb_accented_list_pane_ParamLimits

0xd872,	// (0x0000d872) fep_vkb_accented_list_pane

0x6d7b,	// (0x00006d7b) bg_popup_fep_shadow_pane_g9

0x25a7,	// (0x000025a7) bg_popup_fep_shadow_pane_cp3

0x162d,	// (0x0000162d) list_accented_list_pane

0x8123,	// (0x00008123) list_single_accented_list_pane_ParamLimits

0x8123,	// (0x00008123) list_single_accented_list_pane

0x25a7,	// (0x000025a7) list_highlight_pane_cp10

0x8134,	// (0x00008134) list_single_accented_list_pane_t1

0xc930,	// (0x0000c930) popup_slider_window_ParamLimits

0xc930,	// (0x0000c930) popup_slider_window

0x7bea,	// (0x00007bea) aid_indentation_list_msg

0xdfa9,	// (0x0000dfa9) bg_popup_window_pane_cp19

0x8258,	// (0x00008258) popup_slider_window_g1

0x8274,	// (0x00008274) popup_slider_window_g2

0x8290,	// (0x00008290) popup_slider_window_g3

0x0005,

0xf233,	// (0x0000f233) popup_slider_window_g

0x82ec,	// (0x000082ec) popup_slider_window_t1

0x8360,	// (0x00008360) small_volume_slider_vertical_pane

0x659d,	// (0x0000659d) small_volume_slider_vertical_pane_g1

0x659d,	// (0x0000659d) small_volume_slider_vertical_pane_g2

0x837c,	// (0x0000837c) small_volume_slider_vertical_pane_g3

0x0002,

0xb1fb,	// (0x0000b1fb) small_volume_slider_vertical_pane_g

0xb4cd,	// (0x0000b4cd) area_side_right_pane_ParamLimits

0xb4cd,	// (0x0000b4cd) area_side_right_pane

0xe061,	// (0x0000e061) aid_size_side_button_ParamLimits

0xe061,	// (0x0000e061) aid_size_side_button

0xe07a,	// (0x0000e07a) grid_sctrl_middle_pane_ParamLimits

0xe07a,	// (0x0000e07a) grid_sctrl_middle_pane

0x83b9,	// (0x000083b9) sctrl_sk_bottom_pane

0x83ca,	// (0x000083ca) sctrl_sk_top_pane

0x83dc,	// (0x000083dc) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x83e9,	// (0x000083e9) sctrl_sk_top_pane_g1

0x83f6,	// (0x000083f6) sctrl_sk_top_pane_t1

0x83dc,	// (0x000083dc) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x8411,	// (0x00008411) sctrl_sk_bottom_pane_g1

0x83f6,	// (0x000083f6) sctrl_sk_bottom_pane_t1

0xe094,	// (0x0000e094) cell_sctrl_middle_pane_ParamLimits

0xe094,	// (0x0000e094) cell_sctrl_middle_pane

0xe0a5,	// (0x0000e0a5) aid_touch_sctrl_middle_ParamLimits

0xe0a5,	// (0x0000e0a5) aid_touch_sctrl_middle

0xe0b2,	// (0x0000e0b2) bg_sctrl_middle_pane_ParamLimits

0xe0b2,	// (0x0000e0b2) bg_sctrl_middle_pane

0x84d6,	// (0x000084d6) cell_sctrl_middle_pane_g1_ParamLimits

0x84d6,	// (0x000084d6) cell_sctrl_middle_pane_g1

0xe0c0,	// (0x0000e0c0) cell_sctrl_middle_pane_g2_ParamLimits

0xe0c0,	// (0x0000e0c0) cell_sctrl_middle_pane_g2

0x0001,

0xf240,	// (0x0000f240) cell_sctrl_middle_pane_g_ParamLimits

0xf240,	// (0x0000f240) cell_sctrl_middle_pane_g

0x3643,	// (0x00003643) bg_sctrl_middle_pane_g1

0x364b,	// (0x0000364b) bg_sctrl_middle_pane_g2

0x3653,	// (0x00003653) bg_sctrl_middle_pane_g3

0x365b,	// (0x0000365b) bg_sctrl_middle_pane_g4

0x3663,	// (0x00003663) bg_sctrl_middle_pane_g5

0x366b,	// (0x0000366b) bg_sctrl_middle_pane_g6

0x3673,	// (0x00003673) bg_sctrl_middle_pane_g7

0x367b,	// (0x0000367b) bg_sctrl_middle_pane_g8

0x0007,

0xb20c,	// (0x0000b20c) bg_sctrl_middle_pane_g

0x3683,	// (0x00003683) bg_sctrl_middle_pane_g8_copy1

0x3643,	// (0x00003643) bg_sctrl_sk_pane_g1

0x364b,	// (0x0000364b) bg_sctrl_sk_pane_g2

0x3653,	// (0x00003653) bg_sctrl_sk_pane_g3

0x0008,

0xad5d,	// (0x0000ad5d) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x365b,	// (0x0000365b) bg_sctrl_sk_pane_g4

0x3663,	// (0x00003663) bg_sctrl_sk_pane_g5

0x366b,	// (0x0000366b) bg_sctrl_sk_pane_g6

0x3673,	// (0x00003673) bg_sctrl_sk_pane_g7

0x367b,	// (0x0000367b) bg_sctrl_sk_pane_g8

0x3683,	// (0x00003683) bg_sctrl_sk_pane_g9

0x2bb6,	// (0x00002bb6) popup_fep_china_hwr2_fs_candidate_window

0xc46a,	// (0x0000c46a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc46a,	// (0x0000c46a) popup_fep_china_hwr2_fs_control_window

0x6a2c,	// (0x00006a2c) sctrl_sk_top_pane_g2

0x0001,

0xb202,	// (0x0000b202) sctrl_sk_top_pane_g

0xe0cc,	// (0x0000e0cc) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe0cc,	// (0x0000e0cc) aid_fep_china_hwr2_fs_cell

0xe0e0,	// (0x0000e0e0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe0e0,	// (0x0000e0e0) bg_popup_fep_shadow_pane_cp4

0xe0f7,	// (0x0000e0f7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe0f7,	// (0x0000e0f7) bg_popup_fep_shadow_pane_cp5

0xe109,	// (0x0000e109) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe109,	// (0x0000e109) popup_fep_china_hwr2_fs_control_bar_grid

0xe11d,	// (0x0000e11d) popup_fep_china_hwr2_fs_control_funtion_grid

0x84aa,	// (0x000084aa) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84b4,	// (0x000084b4) popup_fep_china_hwr2_fs_candidate_grid

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid

0x659d,	// (0x0000659d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x84d6,	// (0x000084d6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x84d6,	// (0x000084d6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x84e4,	// (0x000084e4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x84e4,	// (0x000084e4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb21d,	// (0x0000b21d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb21d,	// (0x0000b21d) cell_fep_china_hwr2_fs_funtion_grid_g

0xe13d,	// (0x0000e13d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe13d,	// (0x0000e13d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe152,	// (0x0000e152) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe152,	// (0x0000e152) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf245,	// (0x0000f245) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf245,	// (0x0000f245) cell_fep_china_hwr2_fs_funtion_grid_t

0x852b,	// (0x0000852b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8533,	// (0x00008533) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x853b,	// (0x0000853b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb227,	// (0x0000b227) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8543,	// (0x00008543) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8543,	// (0x00008543) cell_fep_china_hwr2_fs_candidate_grid

0x855c,	// (0x0000855c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8564,	// (0x00008564) popup_fep_china_hwr2_fs_candidate_grid_g21

0x659d,	// (0x0000659d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x659d,	// (0x0000659d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb04e,	// (0x0000b04e) cell_fep_china_hwr2_fs_candidate_grid_g

0x856c,	// (0x0000856c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x319d,	// (0x0000319d) clock_nsta_pane_cp_24_ParamLimits

0x319d,	// (0x0000319d) clock_nsta_pane_cp_24

0x321b,	// (0x0000321b) indicator_nsta_pane_cp_24_ParamLimits

0x321b,	// (0x0000321b) indicator_nsta_pane_cp_24

0x4693,	// (0x00004693) heading_pane_g1

0x0001,

0xadc2,	// (0x0000adc2) heading_pane_g

0x52ab,	// (0x000052ab) grid_sct_catagory_button_pane

0x52dd,	// (0x000052dd) scroll_pane_cp5_ParamLimits

0x6111,	// (0x00006111) button_value_adjust_pane_cp5_ParamLimits

0x6111,	// (0x00006111) button_value_adjust_pane_cp5

0x6209,	// (0x00006209) form2_midp_time_pane_ParamLimits

0x857a,	// (0x0000857a) cell_sct_catagory_button_pane_ParamLimits

0x857a,	// (0x0000857a) cell_sct_catagory_button_pane

0x6562,	// (0x00006562) bg_button_pane_cp01_ParamLimits

0x6562,	// (0x00006562) bg_button_pane_cp01

0x659d,	// (0x0000659d) cell_sct_catagory_button_pane_g1

0xc9a9,	// (0x0000c9a9) popup_tb_extension_window

0xe16e,	// (0x0000e16e) aid_size_cell_ext_ParamLimits

0xe16e,	// (0x0000e16e) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xe194,	// (0x0000e194) grid_tb_ext_pane_ParamLimits

0xe194,	// (0x0000e194) grid_tb_ext_pane

0xe1d1,	// (0x0000e1d1) cell_tb_ext_pane_ParamLimits

0xe1d1,	// (0x0000e1d1) cell_tb_ext_pane

0xe1f9,	// (0x0000e1f9) cell_tb_ext_pane_g1_ParamLimits

0xe1f9,	// (0x0000e1f9) cell_tb_ext_pane_g1

0x8610,	// (0x00008610) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x862b,	// (0x0000862b) list_uniindi_pane

0x8637,	// (0x00008637) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x8656,	// (0x00008656) uniindi_top_pane_g1

0x866c,	// (0x0000866c) uniindi_top_pane_g2

0x0003,

0xb22e,	// (0x0000b22e) uniindi_top_pane_g

0x8696,	// (0x00008696) uniindi_top_pane_t1

0x86c0,	// (0x000086c0) list_single_uniindi_pane_ParamLimits

0x86c0,	// (0x000086c0) list_single_uniindi_pane

0x659d,	// (0x0000659d) bg_uniindi_top_pane_g1

0x86d2,	// (0x000086d2) list_single_uniindi_pane_g1

0x86e5,	// (0x000086e5) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x870a,	// (0x0000870a) bg_sctrl_sk_pane_cp1

0x8713,	// (0x00008713) bg_sctrl_sk_pane_cp2

0x871c,	// (0x0000871c) control_bg_pane_g1

0x8725,	// (0x00008725) control_bg_pane_g2

0x0001,

0xb237,	// (0x0000b237) control_bg_pane_g

0x5ef0,	// (0x00005ef0) cell_indicator_nsta_pane_g1_ParamLimits

0xd68a,	// (0x0000d68a) cell_indicator_nsta_pane_g2_ParamLimits

0xf1bd,	// (0x0000f1bd) cell_indicator_nsta_pane_g_ParamLimits

0x628d,	// (0x0000628d) form2_midp_time_pane_t1_ParamLimits

0x65ef,	// (0x000065ef) main_idle_act4_pane_ParamLimits

0x65ef,	// (0x000065ef) main_idle_act4_pane

0xc9a9,	// (0x0000c9a9) popup_tb_extension_window_ParamLimits

0xe1b8,	// (0x0000e1b8) tb_ext_find_pane_ParamLimits

0xe1b8,	// (0x0000e1b8) tb_ext_find_pane

0x872e,	// (0x0000872e) ai_gene_pane_1_cp1

0x26e4,	// (0x000026e4) ai_gene_pane_2_cp1

0x8736,	// (0x00008736) list_single_idle_plugin_calendar_pane

0x873f,	// (0x0000873f) list_single_idle_plugin_notification_pane

0x8748,	// (0x00008748) list_single_idle_plugin_player_pane

0xe216,	// (0x0000e216) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe216,	// (0x0000e216) list_single_idle_plugin_shortcut_pane

0xe23e,	// (0x0000e23e) main_idle_act4_pane_t1

0xe254,	// (0x0000e254) main_idle_act4_pane_t2

0x0001,

0xf24a,	// (0x0000f24a) main_idle_act4_pane_t

0xe26c,	// (0x0000e26c) middle_sk_idle_act4_pane_ParamLimits

0xe26c,	// (0x0000e26c) middle_sk_idle_act4_pane

0xe288,	// (0x0000e288) popup_clock_digital_analogue_window_cp2

0xe2af,	// (0x0000e2af) shortcut_wheel_idle_act4_pane_ParamLimits

0xe2af,	// (0x0000e2af) shortcut_wheel_idle_act4_pane

0x659d,	// (0x0000659d) shortcut_wheel_idle_act4_pane_g1

0x659d,	// (0x0000659d) shortcut_wheel_idle_act4_pane_g2

0x659d,	// (0x0000659d) shortcut_wheel_idle_act4_pane_g3

0x659d,	// (0x0000659d) shortcut_wheel_idle_act4_pane_g4

0x659d,	// (0x0000659d) shortcut_wheel_idle_act4_pane_g5

0x87db,	// (0x000087db) shortcut_wheel_idle_act4_pane_g6

0x87e3,	// (0x000087e3) shortcut_wheel_idle_act4_pane_g7

0x87eb,	// (0x000087eb) shortcut_wheel_idle_act4_pane_g8

0x87f3,	// (0x000087f3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb241,	// (0x0000b241) shortcut_wheel_idle_act4_pane_g

0x66a4,	// (0x000066a4) middle_sk_idle_act4_pane_g1_ParamLimits

0x66a4,	// (0x000066a4) middle_sk_idle_act4_pane_g1

0xe32c,	// (0x0000e32c) middle_sk_idle_act4_pane_g2_ParamLimits

0xe32c,	// (0x0000e32c) middle_sk_idle_act4_pane_g2

0x0001,

0xf25f,	// (0x0000f25f) middle_sk_idle_act4_pane_g_ParamLimits

0xf25f,	// (0x0000f25f) middle_sk_idle_act4_pane_g

0xe344,	// (0x0000e344) middle_sk_idle_act4_pane_t1_ParamLimits

0xe344,	// (0x0000e344) middle_sk_idle_act4_pane_t1

0xe373,	// (0x0000e373) grid_ai_shortcut_pane_ParamLimits

0xe373,	// (0x0000e373) grid_ai_shortcut_pane

0xe390,	// (0x0000e390) list_highlight_pane_cp16_ParamLimits

0xe390,	// (0x0000e390) list_highlight_pane_cp16

0xe39d,	// (0x0000e39d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe39d,	// (0x0000e39d) list_single_idle_plugin_shortcut_pane_g1

0xe3a9,	// (0x0000e3a9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe3a9,	// (0x0000e3a9) list_single_idle_plugin_shortcut_pane_g2

0xe3c5,	// (0x0000e3c5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe3c5,	// (0x0000e3c5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf264,	// (0x0000f264) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf264,	// (0x0000f264) list_single_idle_plugin_shortcut_pane_g

0xe3da,	// (0x0000e3da) cell_ai_shortcut_pane_ParamLimits

0xe3da,	// (0x0000e3da) cell_ai_shortcut_pane

0xe3f0,	// (0x0000e3f0) cell_ai_shortcut_pane_g1_ParamLimits

0xe3f0,	// (0x0000e3f0) cell_ai_shortcut_pane_g1

0x872e,	// (0x0000872e) ai_gene_pane_1_cp2

0x8920,	// (0x00008920) ai_gene_pane_2_cp2

0x8928,	// (0x00008928) list_highlight_pane_cp15

0x8931,	// (0x00008931) list_single_idle_plugin_calendar_pane_g1

0x8928,	// (0x00008928) list_highlight_pane_cp17

0x8939,	// (0x00008939) list_single_idle_plugin_calendar_pane_g1_copy1

0x8941,	// (0x00008941) list_single_idle_plugin_player_pane_g1

0x55bc,	// (0x000055bc) list_single_idle_plugin_player_pane_g2

0x0001,

0xb270,	// (0x0000b270) list_single_idle_plugin_player_pane_g

0x8949,	// (0x00008949) list_single_idle_plugin_player_pane_t1

0x8957,	// (0x00008957) list_single_idle_plugin_player_pane_t2

0x8965,	// (0x00008965) list_single_idle_plugin_player_pane_t3

0x8973,	// (0x00008973) list_single_idle_plugin_player_pane_t4

0x0003,

0xb275,	// (0x0000b275) list_single_idle_plugin_player_pane_t

0x8981,	// (0x00008981) wait_bar_pane_cp15

0x8989,	// (0x00008989) grid_ai_notification_pane

0x55bc,	// (0x000055bc) list_single_idle_plugin_notification_pane_g1

0xe412,	// (0x0000e412) cell_ai_notification_pane_ParamLimits

0xe412,	// (0x0000e412) cell_ai_notification_pane

0x899f,	// (0x0000899f) cell_ai_notification_pane_g1

0x89a7,	// (0x000089a7) cell_ai_notification_pane_t1

0xe41f,	// (0x0000e41f) tb_ext_find_button_pane

0xe427,	// (0x0000e427) tb_ext_find_pane_g1

0xe42f,	// (0x0000e42f) tb_ext_find_pane_t1

0x1cf5,	// (0x00001cf5) tb_ext_find_button_pane_g1

0x89d3,	// (0x000089d3) tb_ext_find_button_pane_g2

0x0001,

0xb27e,	// (0x0000b27e) tb_ext_find_button_pane_g

0xe23e,	// (0x0000e23e) main_idle_act4_pane_t1_ParamLimits

0xe254,	// (0x0000e254) main_idle_act4_pane_t2_ParamLimits

0xf24a,	// (0x0000f24a) main_idle_act4_pane_t_ParamLimits

0xe288,	// (0x0000e288) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe29f,	// (0x0000e29f) sat_plugin_idle_act4_pane_ParamLimits

0xe29f,	// (0x0000e29f) sat_plugin_idle_act4_pane

0xe43d,	// (0x0000e43d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe43d,	// (0x0000e43d) sat_plugin_idle_act4_pane_t1

0xe455,	// (0x0000e455) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe455,	// (0x0000e455) sat_plugin_idle_act4_pane_t2

0xe46d,	// (0x0000e46d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe46d,	// (0x0000e46d) sat_plugin_idle_act4_pane_t3

0xe485,	// (0x0000e485) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe485,	// (0x0000e485) sat_plugin_idle_act4_pane_t4

0x0003,

0xf26b,	// (0x0000f26b) sat_plugin_idle_act4_pane_t_ParamLimits

0xf26b,	// (0x0000f26b) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x8a28,	// (0x00008a28) popup_battery_window_g1_ParamLimits

0x8a28,	// (0x00008a28) popup_battery_window_g1

0x8a34,	// (0x00008a34) popup_battery_window_t1_ParamLimits

0x8a34,	// (0x00008a34) popup_battery_window_t1

0x8a46,	// (0x00008a46) popup_battery_window_t2_ParamLimits

0x8a46,	// (0x00008a46) popup_battery_window_t2

0x0001,

0xb28c,	// (0x0000b28c) popup_battery_window_t_ParamLimits

0xb28c,	// (0x0000b28c) popup_battery_window_t

0xc194,	// (0x0000c194) midp_canvas_pane_ParamLimits

0xc1f1,	// (0x0000c1f1) midp_keypad_pane_ParamLimits

0xc1f1,	// (0x0000c1f1) midp_keypad_pane

0x2b0e,	// (0x00002b0e) main_midp_pane_ParamLimits

0x5f7c,	// (0x00005f7c) signal_pane_g2_cp_ParamLimits

0xe49d,	// (0x0000e49d) aid_size_cell_midp_keypad_ParamLimits

0xe49d,	// (0x0000e49d) aid_size_cell_midp_keypad

0xe4bb,	// (0x0000e4bb) midp_keyp_game_grid_pane_ParamLimits

0xe4bb,	// (0x0000e4bb) midp_keyp_game_grid_pane

0xe4e2,	// (0x0000e4e2) midp_keyp_rocker_pane_ParamLimits

0xe4e2,	// (0x0000e4e2) midp_keyp_rocker_pane

0xe523,	// (0x0000e523) midp_keyp_sk_left_pane_ParamLimits

0xe523,	// (0x0000e523) midp_keyp_sk_left_pane

0xe577,	// (0x0000e577) midp_keyp_sk_right_pane_ParamLimits

0xe577,	// (0x0000e577) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe5cb,	// (0x0000e5cb) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe5cb,	// (0x0000e5cb) midp_keyp_sk_right_pane_g1

0x659d,	// (0x0000659d) midp_keyp_rocker_pane_g1

0xe5d4,	// (0x0000e5d4) keyp_game_cell_pane_ParamLimits

0xe5d4,	// (0x0000e5d4) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe5f8,	// (0x0000e5f8) keyp_game_cell_pane_g1

0xb50f,	// (0x0000b50f) popup_fep_vkb2_window_ParamLimits

0xb50f,	// (0x0000b50f) popup_fep_vkb2_window

0xe601,	// (0x0000e601) aid_size_cell_vkb2_ParamLimits

0xe601,	// (0x0000e601) aid_size_cell_vkb2

0xe637,	// (0x0000e637) popup_fep_vkb2_window_g1_ParamLimits

0xe637,	// (0x0000e637) popup_fep_vkb2_window_g1

0xe67e,	// (0x0000e67e) vkb2_area_bottom_pane_ParamLimits

0xe67e,	// (0x0000e67e) vkb2_area_bottom_pane

0xe6d2,	// (0x0000e6d2) vkb2_area_keypad_pane_ParamLimits

0xe6d2,	// (0x0000e6d2) vkb2_area_keypad_pane

0xe71a,	// (0x0000e71a) vkb2_area_top_pane_ParamLimits

0xe71a,	// (0x0000e71a) vkb2_area_top_pane

0xe7a0,	// (0x0000e7a0) vkb2_top_entry_pane_ParamLimits

0xe7a0,	// (0x0000e7a0) vkb2_top_entry_pane

0xe7cd,	// (0x0000e7cd) vkb2_top_grid_left_pane_ParamLimits

0xe7cd,	// (0x0000e7cd) vkb2_top_grid_left_pane

0xe7ed,	// (0x0000e7ed) vkb2_top_grid_right_pane_ParamLimits

0xe7ed,	// (0x0000e7ed) vkb2_top_grid_right_pane

0x8db1,	// (0x00008db1) vkb2_cell_keypad_pane_ParamLimits

0x8db1,	// (0x00008db1) vkb2_cell_keypad_pane

0xe833,	// (0x0000e833) vkb2_area_bottom_grid_pane_ParamLimits

0xe833,	// (0x0000e833) vkb2_area_bottom_grid_pane

0xe85d,	// (0x0000e85d) vkb2_area_bottom_pane_g1_ParamLimits

0xe85d,	// (0x0000e85d) vkb2_area_bottom_pane_g1

0xe883,	// (0x0000e883) vkb2_area_bottom_pane_g2_ParamLimits

0xe883,	// (0x0000e883) vkb2_area_bottom_pane_g2

0xe8b4,	// (0x0000e8b4) vkb2_area_bottom_pane_g3_ParamLimits

0xe8b4,	// (0x0000e8b4) vkb2_area_bottom_pane_g3

0x0002,

0xf274,	// (0x0000f274) vkb2_area_bottom_pane_g_ParamLimits

0xf274,	// (0x0000f274) vkb2_area_bottom_pane_g

0x8f5b,	// (0x00008f5b) vkb2_top_cell_left_pane_ParamLimits

0x8f5b,	// (0x00008f5b) vkb2_top_cell_left_pane

0xe91e,	// (0x0000e91e) vkb2_top_entry_pane_g1_ParamLimits

0xe91e,	// (0x0000e91e) vkb2_top_entry_pane_g1

0xe92c,	// (0x0000e92c) vkb2_top_entry_pane_t1_ParamLimits

0xe92c,	// (0x0000e92c) vkb2_top_entry_pane_t1

0x8fc3,	// (0x00008fc3) vkb2_top_entry_pane_t2_ParamLimits

0x8fc3,	// (0x00008fc3) vkb2_top_entry_pane_t2

0x8ff5,	// (0x00008ff5) vkb2_top_entry_pane_t3_ParamLimits

0x8ff5,	// (0x00008ff5) vkb2_top_entry_pane_t3

0x0002,

0xf27b,	// (0x0000f27b) vkb2_top_entry_pane_t_ParamLimits

0xf27b,	// (0x0000f27b) vkb2_top_entry_pane_t

0xe965,	// (0x0000e965) vkb2_top_grid_right_pane_g1_ParamLimits

0xe965,	// (0x0000e965) vkb2_top_grid_right_pane_g1

0x905c,	// (0x0000905c) vkb2_top_grid_right_pane_g2_ParamLimits

0x905c,	// (0x0000905c) vkb2_top_grid_right_pane_g2

0x9074,	// (0x00009074) vkb2_top_grid_right_pane_g3_ParamLimits

0x9074,	// (0x00009074) vkb2_top_grid_right_pane_g3

0xe97b,	// (0x0000e97b) vkb2_top_grid_right_pane_g4_ParamLimits

0xe97b,	// (0x0000e97b) vkb2_top_grid_right_pane_g4

0x0003,

0xf282,	// (0x0000f282) vkb2_top_grid_right_pane_g_ParamLimits

0xf282,	// (0x0000f282) vkb2_top_grid_right_pane_g

0x90a2,	// (0x000090a2) vkb2_top_cell_left_pane_g1

0x90b9,	// (0x000090b9) vkb2_cell_keypad_pane_g1_ParamLimits

0x90b9,	// (0x000090b9) vkb2_cell_keypad_pane_g1

0x90c7,	// (0x000090c7) vkb2_cell_keypad_pane_t1_ParamLimits

0x90c7,	// (0x000090c7) vkb2_cell_keypad_pane_t1

0x90de,	// (0x000090de) vkb2_cell_bottom_grid_pane_ParamLimits

0x90de,	// (0x000090de) vkb2_cell_bottom_grid_pane

0x9117,	// (0x00009117) vkb2_cell_bottom_grid_pane_g1

0xe2d0,	// (0x0000e2d0) aid_call2_pane_cp02

0xe2d8,	// (0x0000e2d8) aid_call_pane_cp02

0xe2e0,	// (0x0000e2e0) clock_digital_number_pane_cp10

0xe2e8,	// (0x0000e2e8) clock_digital_number_pane_cp11

0xe2f0,	// (0x0000e2f0) clock_digital_number_pane_cp12

0xe2f8,	// (0x0000e2f8) clock_digital_number_pane_cp13

0xe300,	// (0x0000e300) clock_digital_separator_pane_cp10

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g1

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g2

0xe308,	// (0x0000e308) popup_clock_digital_analogue_window_cp2_g3

0x1cf5,	// (0x00001cf5) popup_clock_digital_analogue_window_cp2_g4

0xe308,	// (0x0000e308) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf24f,	// (0x0000f24f) popup_clock_digital_analogue_window_cp2_g

0xe310,	// (0x0000e310) popup_clock_digital_analogue_window_cp2_t1

0xe31e,	// (0x0000e31e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf25a,	// (0x0000f25a) popup_clock_digital_analogue_window_cp2_t

0x659d,	// (0x0000659d) clock_digital_number_pane_cp10_g1

0x659d,	// (0x0000659d) clock_digital_number_pane_cp10_g2

0x0001,

0xb04e,	// (0x0000b04e) clock_digital_number_pane_cp10_g

0x659d,	// (0x0000659d) clock_digital_separator_pane_cp10_g1

0x659d,	// (0x0000659d) clock_digital_separator_pane_cp10_g2

0x0001,

0xb04e,	// (0x0000b04e) clock_digital_separator_pane_cp10_g

0x8678,	// (0x00008678) uniindi_top_pane_g3

0x8689,	// (0x00008689) uniindi_top_pane_g4

0x8e3c,	// (0x00008e3c) vkb2_row_keypad_pane_ParamLimits

0x8e3c,	// (0x00008e3c) vkb2_row_keypad_pane

0x9137,	// (0x00009137) vkb2_cell_t_keypad_pane_ParamLimits

0x9137,	// (0x00009137) vkb2_cell_t_keypad_pane

0x9147,	// (0x00009147) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9147,	// (0x00009147) vkb2_cell_t_keypad_pane_cp08

0x915a,	// (0x0000915a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x915a,	// (0x0000915a) vkb2_cell_t_keypad_pane_cp09

0x916e,	// (0x0000916e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x916e,	// (0x0000916e) vkb2_cell_t_keypad_pane_cp01

0x917f,	// (0x0000917f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x917f,	// (0x0000917f) vkb2_cell_t_keypad_pane_cp02

0x9190,	// (0x00009190) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9190,	// (0x00009190) vkb2_cell_t_keypad_pane_cp03

0x91a1,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91a1,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp04

0x91b2,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91b2,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp05

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp06

0x91d4,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91d4,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp07

0x91e5,	// (0x000091e5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91e5,	// (0x000091e5) vkb2_cell_t_keypad_pane_cp10

0x6a2c,	// (0x00006a2c) vkb2_cell_t_keypad_pane_g1

0x91fa,	// (0x000091fa) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe991,	// (0x0000e991) aid_size_cell_graphic2_ParamLimits

0xe991,	// (0x0000e991) aid_size_cell_graphic2

0xe9cf,	// (0x0000e9cf) bg_popup_window_pane_cp21_ParamLimits

0xe9cf,	// (0x0000e9cf) bg_popup_window_pane_cp21

0xe9dd,	// (0x0000e9dd) graphic2_pages_pane_ParamLimits

0xe9dd,	// (0x0000e9dd) graphic2_pages_pane

0xea33,	// (0x0000ea33) grid_graphic2_control_pane_ParamLimits

0xea33,	// (0x0000ea33) grid_graphic2_control_pane

0xea7b,	// (0x0000ea7b) grid_graphic2_pane_ParamLimits

0xea7b,	// (0x0000ea7b) grid_graphic2_pane

0xeb02,	// (0x0000eb02) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7da8,	// (0x00007da8) list_ai3_gene_pane_ParamLimits

0xdfa9,	// (0x0000dfa9) bg_popup_window_pane_cp19_ParamLimits

0x81fa,	// (0x000081fa) bg_touch_area_indi_pane_ParamLimits

0x81fa,	// (0x000081fa) bg_touch_area_indi_pane

0x8210,	// (0x00008210) bg_touch_area_indi_pane_cp01_ParamLimits

0x8210,	// (0x00008210) bg_touch_area_indi_pane_cp01

0x8226,	// (0x00008226) bg_touch_area_indi_pane_cp02_ParamLimits

0x8226,	// (0x00008226) bg_touch_area_indi_pane_cp02

0x823e,	// (0x0000823e) bg_touch_area_indi_pane_cp03_ParamLimits

0x823e,	// (0x0000823e) bg_touch_area_indi_pane_cp03

0x8258,	// (0x00008258) popup_slider_window_g1_ParamLimits

0x8274,	// (0x00008274) popup_slider_window_g2_ParamLimits

0x8290,	// (0x00008290) popup_slider_window_g3_ParamLimits

0xf233,	// (0x0000f233) popup_slider_window_g_ParamLimits

0x82ec,	// (0x000082ec) popup_slider_window_t1_ParamLimits

0x8360,	// (0x00008360) small_volume_slider_vertical_pane_ParamLimits

0xeb02,	// (0x0000eb02) cell_graphic2_pane_ParamLimits

0xeb5f,	// (0x0000eb5f) bg_button_pane_cp10_ParamLimits

0xeb5f,	// (0x0000eb5f) bg_button_pane_cp10

0xeb72,	// (0x0000eb72) bg_button_pane_cp11_ParamLimits

0xeb72,	// (0x0000eb72) bg_button_pane_cp11

0xeb85,	// (0x0000eb85) graphic2_pages_pane_g1_ParamLimits

0xeb85,	// (0x0000eb85) graphic2_pages_pane_g1

0xeba0,	// (0x0000eba0) graphic2_pages_pane_g2_ParamLimits

0xeba0,	// (0x0000eba0) graphic2_pages_pane_g2

0x0001,

0xf290,	// (0x0000f290) graphic2_pages_pane_g_ParamLimits

0xf290,	// (0x0000f290) graphic2_pages_pane_g

0xebb8,	// (0x0000ebb8) graphic2_pages_pane_t1_ParamLimits

0xebb8,	// (0x0000ebb8) graphic2_pages_pane_t1

0xebd0,	// (0x0000ebd0) cell_graphic2_control_pane_ParamLimits

0xebd0,	// (0x0000ebd0) cell_graphic2_control_pane

0xec02,	// (0x0000ec02) cell_graphic2_pane_g1_ParamLimits

0xec02,	// (0x0000ec02) cell_graphic2_pane_g1

0x683f,	// (0x0000683f) cell_graphic2_pane_g2_ParamLimits

0x683f,	// (0x0000683f) cell_graphic2_pane_g2

0xec0f,	// (0x0000ec0f) cell_graphic2_pane_g3_ParamLimits

0xec0f,	// (0x0000ec0f) cell_graphic2_pane_g3

0x684c,	// (0x0000684c) cell_graphic2_pane_g4_ParamLimits

0x684c,	// (0x0000684c) cell_graphic2_pane_g4

0xec1c,	// (0x0000ec1c) cell_graphic2_pane_g5_ParamLimits

0xec1c,	// (0x0000ec1c) cell_graphic2_pane_g5

0x0004,

0xf295,	// (0x0000f295) cell_graphic2_pane_g_ParamLimits

0xf295,	// (0x0000f295) cell_graphic2_pane_g

0xec3c,	// (0x0000ec3c) cell_graphic2_pane_t1_ParamLimits

0xec3c,	// (0x0000ec3c) cell_graphic2_pane_t1

0x4687,	// (0x00004687) grid_highlight_pane_cp11_ParamLimits

0x4687,	// (0x00004687) grid_highlight_pane_cp11

0x0819,	// (0x00000819) bg_button_pane_cp05

0xec71,	// (0x0000ec71) cell_graphic2_control_pane_g1

0x659d,	// (0x0000659d) bg_touch_area_indi_pane_g1

0x94c8,	// (0x000094c8) aid_cmod_rocker_key_size

0x94d2,	// (0x000094d2) aid_cmode_itu_key_size

0x94dc,	// (0x000094dc) main_cmode_video_pane

0x94e6,	// (0x000094e6) main_comp_mode_itu_pane

0x94f2,	// (0x000094f2) main_comp_mode_rocker_pane

0x94fe,	// (0x000094fe) cell_cmode_rocker_pane_ParamLimits

0x94fe,	// (0x000094fe) cell_cmode_rocker_pane

0x9510,	// (0x00009510) cell_cmode_itu_pane_ParamLimits

0x9510,	// (0x00009510) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x6a2c,	// (0x00006a2c) cell_cmode_rocker_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) cell_cmode_rocker_pane_g1

0x84d6,	// (0x000084d6) cell_cmode_rocker_pane_g2_ParamLimits

0x84d6,	// (0x000084d6) cell_cmode_rocker_pane_g2

0x0001,

0xb2c2,	// (0x0000b2c2) cell_cmode_rocker_pane_g_ParamLimits

0xb2c2,	// (0x0000b2c2) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9525,	// (0x00009525) cell_cmode_itu_pane_g1

0x952e,	// (0x0000952e) cell_cmode_itu_pane_t1

0x953c,	// (0x0000953c) cell_cmode_itu_pane_t2

0x0001,

0xb2c7,	// (0x0000b2c7) cell_cmode_itu_pane_t

0x86fa,	// (0x000086fa) aid_touch_ctrl_left

0x8702,	// (0x00008702) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xec97,	// (0x0000ec97) aid_cmod_rocker_key_size_cp

0xeca1,	// (0x0000eca1) aid_cmode_itu_key_size_cp

0x955e,	// (0x0000955e) compa_mode_pane_g1

0x9566,	// (0x00009566) compa_mode_pane_g2

0x956e,	// (0x0000956e) compa_mode_pane_g3

0x0002,

0xb2cc,	// (0x0000b2cc) compa_mode_pane_g

0xecab,	// (0x0000ecab) main_comp_mode_itu_pane_cp

0xecb3,	// (0x0000ecb3) main_comp_mode_rocker_pane_cp

0xecbb,	// (0x0000ecbb) cell_cmode_itu_pane_cp_ParamLimits

0xecbb,	// (0x0000ecbb) cell_cmode_itu_pane_cp

0xecd0,	// (0x0000ecd0) cell_cmode_rocker_pane_cp_ParamLimits

0xecd0,	// (0x0000ecd0) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x6a2c,	// (0x00006a2c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6a2c,	// (0x00006a2c) cell_cmode_rocker_pane_g1_cp

0x659d,	// (0x0000659d) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xece2,	// (0x0000ece2) cell_cmode_itu_pane_g1_cp

0xeceb,	// (0x0000eceb) cell_cmode_itu_pane_t1_cp

0xeceb,	// (0x0000eceb) cell_cmode_itu_pane_t2_cp

0xd48c,	// (0x0000d48c) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x65fd,	// (0x000065fd) fep_hwr_aid_pane_ParamLimits

0x83dc,	// (0x000083dc) aid_touch_sctrl_top_ParamLimits

0x83e9,	// (0x000083e9) sctrl_sk_top_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) sctrl_sk_top_pane_g2_ParamLimits

0xb202,	// (0x0000b202) sctrl_sk_top_pane_g_ParamLimits

0x83f6,	// (0x000083f6) sctrl_sk_top_pane_t1_ParamLimits

0x83dc,	// (0x000083dc) aid_touch_sctrl_bottom_ParamLimits

0x83f6,	// (0x000083f6) sctrl_sk_bottom_pane_t1_ParamLimits

0x8644,	// (0x00008644) aid_area_touch_clock

0xe762,	// (0x0000e762) aid_vkb2_area_top_pane_cell_ParamLimits

0xe762,	// (0x0000e762) aid_vkb2_area_top_pane_cell

0xe80d,	// (0x0000e80d) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe80d,	// (0x0000e80d) aid_vkb2_area_bottom_pane_cell

0x8f7b,	// (0x00008f7b) popup_char_count_window

0x95c4,	// (0x000095c4) popup_char_count_window_g1

0x95cd,	// (0x000095cd) popup_char_count_window_g2

0x95d6,	// (0x000095d6) popup_char_count_window_g3

0x0002,

0xb2d3,	// (0x0000b2d3) popup_char_count_window_g

0x95df,	// (0x000095df) popup_char_count_window_t1

0x8be1,	// (0x00008be1) popup_fep_char_preview_window_ParamLimits

0x8be1,	// (0x00008be1) popup_fep_char_preview_window

0xe782,	// (0x0000e782) vkb2_top_candi_pane_ParamLimits

0xe782,	// (0x0000e782) vkb2_top_candi_pane

0xecf9,	// (0x0000ecf9) cell_vkb2_top_candi_pane_ParamLimits

0xecf9,	// (0x0000ecf9) cell_vkb2_top_candi_pane

0x3ec0,	// (0x00003ec0) bg_popup_fep_char_preview_window_ParamLimits

0x3ec0,	// (0x00003ec0) bg_popup_fep_char_preview_window

0x963a,	// (0x0000963a) popup_fep_char_preview_window_t1_ParamLimits

0x963a,	// (0x0000963a) popup_fep_char_preview_window_t1

0x9674,	// (0x00009674) bg_popup_fep_char_preview_window_g1

0x967c,	// (0x0000967c) bg_popup_fep_char_preview_window_g2

0x9684,	// (0x00009684) bg_popup_fep_char_preview_window_g3

0x968c,	// (0x0000968c) bg_popup_fep_char_preview_window_g4

0x9694,	// (0x00009694) bg_popup_fep_char_preview_window_g5

0x969c,	// (0x0000969c) bg_popup_fep_char_preview_window_g6

0x96a4,	// (0x000096a4) bg_popup_fep_char_preview_window_g7

0x96ac,	// (0x000096ac) bg_popup_fep_char_preview_window_g8

0x96b4,	// (0x000096b4) bg_popup_fep_char_preview_window_g9

0x0008,

0xb2da,	// (0x0000b2da) bg_popup_fep_char_preview_window_g

0x6a2c,	// (0x00006a2c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) cell_vkb2_top_candi_pane_g1

0x6d9f,	// (0x00006d9f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d9f,	// (0x00006d9f) cell_vkb2_top_candi_pane_g2

0x6dc0,	// (0x00006dc0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6dc0,	// (0x00006dc0) cell_vkb2_top_candi_pane_g3

0x96bc,	// (0x000096bc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x96bc,	// (0x000096bc) cell_vkb2_top_candi_pane_g4

0x96dd,	// (0x000096dd) cell_vkb2_top_candi_pane_g5_ParamLimits

0x96dd,	// (0x000096dd) cell_vkb2_top_candi_pane_g5

0x84d6,	// (0x000084d6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x84d6,	// (0x000084d6) cell_vkb2_top_candi_pane_g6

0x0005,

0xb2ed,	// (0x0000b2ed) cell_vkb2_top_candi_pane_g_ParamLimits

0xb2ed,	// (0x0000b2ed) cell_vkb2_top_candi_pane_g

0x96fe,	// (0x000096fe) cell_vkb2_top_candi_pane_t1

0x4db7,	// (0x00004db7) aid_size_touch_slider_mark_ParamLimits

0x4db7,	// (0x00004db7) aid_size_touch_slider_mark

0xea19,	// (0x0000ea19) grid_graphic2_catg_pane_ParamLimits

0xea19,	// (0x0000ea19) grid_graphic2_catg_pane

0xead5,	// (0x0000ead5) popup_grid_graphic2_window_t1_ParamLimits

0xead5,	// (0x0000ead5) popup_grid_graphic2_window_t1

0xeaeb,	// (0x0000eaeb) popup_grid_graphic2_window_t2_ParamLimits

0xeaeb,	// (0x0000eaeb) popup_grid_graphic2_window_t2

0x0001,

0xf28b,	// (0x0000f28b) popup_grid_graphic2_window_t_ParamLimits

0xf28b,	// (0x0000f28b) popup_grid_graphic2_window_t

0x0819,	// (0x00000819) bg_button_pane_cp05_ParamLimits

0xec71,	// (0x0000ec71) cell_graphic2_control_pane_g1_ParamLimits

0xed5f,	// (0x0000ed5f) cell_graphic2_catg_pane_ParamLimits

0xed5f,	// (0x0000ed5f) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xed71,	// (0x0000ed71) cell_graphic2_catg_pane_g1

0x8610,	// (0x00008610) cell_tb_ext_pane_t1_ParamLimits

0x9019,	// (0x00009019) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9019,	// (0x00009019) vkb2_top_cell_right_narrow_pane

0x9031,	// (0x00009031) vkb2_top_cell_right_wide_pane_ParamLimits

0x9031,	// (0x00009031) vkb2_top_cell_right_wide_pane

0x65ef,	// (0x000065ef) bg_vkb2_func_pane_ParamLimits

0x65ef,	// (0x000065ef) bg_vkb2_func_pane

0x90a2,	// (0x000090a2) vkb2_top_cell_left_pane_g1_ParamLimits

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp03_ParamLimits

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp03

0x9117,	// (0x00009117) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x364b,	// (0x0000364b) bg_vkb2_func_pane_g1

0x3653,	// (0x00003653) bg_vkb2_func_pane_g2

0x3663,	// (0x00003663) bg_vkb2_func_pane_g3

0x365b,	// (0x0000365b) bg_vkb2_func_pane_g4

0x366b,	// (0x0000366b) bg_vkb2_func_pane_g5

0x3673,	// (0x00003673) bg_vkb2_func_pane_g6

0x367b,	// (0x0000367b) bg_vkb2_func_pane_g7

0x3683,	// (0x00003683) bg_vkb2_func_pane_g8

0x3643,	// (0x00003643) bg_vkb2_func_pane_g9

0x0008,

0xb2fa,	// (0x0000b2fa) bg_vkb2_func_pane_g

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp01_ParamLimits

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp01

0x90a2,	// (0x000090a2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x90a2,	// (0x000090a2) vkb2_top_cell_right_wide_pane_g1

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp02_ParamLimits

0x65ef,	// (0x000065ef) bg_vkb2_fuc_pane_cp02

0x9117,	// (0x00009117) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9117,	// (0x00009117) vkb2_top_cell_right_narrow_pane_g1

0xdee3,	// (0x0000dee3) aid_touch_area_decrease_ParamLimits

0xdee3,	// (0x0000dee3) aid_touch_area_decrease

0xdf1d,	// (0x0000df1d) aid_touch_area_increase_ParamLimits

0xdf1d,	// (0x0000df1d) aid_touch_area_increase

0xdf45,	// (0x0000df45) aid_touch_area_mute_ParamLimits

0xdf45,	// (0x0000df45) aid_touch_area_mute

0xdf75,	// (0x0000df75) aid_touch_area_slider_ParamLimits

0xdf75,	// (0x0000df75) aid_touch_area_slider

0xdfb5,	// (0x0000dfb5) popup_slider_window_g4_ParamLimits

0xdfb5,	// (0x0000dfb5) popup_slider_window_g4

0xdfdd,	// (0x0000dfdd) popup_slider_window_g5_ParamLimits

0xdfdd,	// (0x0000dfdd) popup_slider_window_g5

0xe011,	// (0x0000e011) popup_slider_window_g6_ParamLimits

0xe011,	// (0x0000e011) popup_slider_window_g6

0x831a,	// (0x0000831a) popup_slider_window_t2_ParamLimits

0x831a,	// (0x0000831a) popup_slider_window_t2

0x0001,

0xb1f6,	// (0x0000b1f6) popup_slider_window_t_ParamLimits

0xb1f6,	// (0x0000b1f6) popup_slider_window_t

0xe02d,	// (0x0000e02d) slider_pane_ParamLimits

0xe02d,	// (0x0000e02d) slider_pane

0x9738,	// (0x00009738) slider_pane_g1_ParamLimits

0x9738,	// (0x00009738) slider_pane_g1

0x974c,	// (0x0000974c) slider_pane_g2_ParamLimits

0x974c,	// (0x0000974c) slider_pane_g2

0x9762,	// (0x00009762) slider_pane_g3_ParamLimits

0x9762,	// (0x00009762) slider_pane_g3

0x0003,

0xb30d,	// (0x0000b30d) slider_pane_g_ParamLimits

0xb30d,	// (0x0000b30d) slider_pane_g

0xc9f1,	// (0x0000c9f1) popup_tb_float_extension_window_ParamLimits

0xc9f1,	// (0x0000c9f1) popup_tb_float_extension_window

0x978e,	// (0x0000978e) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x979a,	// (0x0000979a) grid_tb_float_ext_pane

0x97a4,	// (0x000097a4) cell_tb_float_ext_pane_ParamLimits

0x97a4,	// (0x000097a4) cell_tb_float_ext_pane

0x97be,	// (0x000097be) cell_tb_float_ext_pane_g1

0x97c7,	// (0x000097c7) grid_highlight_pane_cp12

0xd850,	// (0x0000d850) cell_last_hwr_side_pane_ParamLimits

0xd850,	// (0x0000d850) cell_last_hwr_side_pane

0x659d,	// (0x0000659d) cell_last_hwr_side_pane_g1

0x97d0,	// (0x000097d0) cell_last_hwr_side_pane_g2

0x0001,

0xb316,	// (0x0000b316) cell_last_hwr_side_pane_g

0xe8e9,	// (0x0000e8e9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe8e9,	// (0x0000e8e9) vkb2_area_bottom_space_btn_pane

0x6a2c,	// (0x00006a2c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x91fa,	// (0x000091fa) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96fe,	// (0x000096fe) cell_vkb2_top_candi_pane_t1_ParamLimits

0x97d9,	// (0x000097d9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x97d9,	// (0x000097d9) vkb2_area_bottom_space_btn_pane_g1

0x9813,	// (0x00009813) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9813,	// (0x00009813) vkb2_area_bottom_space_btn_pane_g2

0x9849,	// (0x00009849) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9849,	// (0x00009849) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb31b,	// (0x0000b31b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb31b,	// (0x0000b31b) vkb2_area_bottom_space_btn_pane_g

0x66b2,	// (0x000066b2) cel_fep_hwr_func_pane_ParamLimits

0x66b2,	// (0x000066b2) cel_fep_hwr_func_pane

0xd825,	// (0x0000d825) cell_hwr_side_button_pane_ParamLimits

0xd825,	// (0x0000d825) cell_hwr_side_button_pane

0x8644,	// (0x00008644) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x8656,	// (0x00008656) uniindi_top_pane_g1_ParamLimits

0x866c,	// (0x0000866c) uniindi_top_pane_g2_ParamLimits

0x8678,	// (0x00008678) uniindi_top_pane_g3_ParamLimits

0x8689,	// (0x00008689) uniindi_top_pane_g4_ParamLimits

0xb22e,	// (0x0000b22e) uniindi_top_pane_g_ParamLimits

0x8696,	// (0x00008696) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x9893,	// (0x00009893) cel_fep_hwr_func_pane_g1_ParamLimits

0x9893,	// (0x00009893) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x9893,	// (0x00009893) cell_hwr_side_button_pane_g1_ParamLimits

0x9893,	// (0x00009893) cell_hwr_side_button_pane_g1

0x3422,	// (0x00003422) status_pane_g4_ParamLimits

0x3422,	// (0x00003422) status_pane_g4

0x343a,	// (0x0000343a) status_pane_t1

0x62a0,	// (0x000062a0) form2_midp_gauge_slider_cont_pane

0x62a8,	// (0x000062a8) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd760,	// (0x0000d760) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd774,	// (0x0000d774) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf1d7,	// (0x0000f1d7) form2_midp_gauge_slider_pane_t_ParamLimits

0x62de,	// (0x000062de) form2_midp_slider_pane_ParamLimits

0x8ba1,	// (0x00008ba1) aid_size_cell_func_vkb2_ParamLimits

0x8ba1,	// (0x00008ba1) aid_size_cell_func_vkb2

0x977a,	// (0x0000977a) slider_pane_g4_ParamLimits

0x977a,	// (0x0000977a) slider_pane_g4

0xed7a,	// (0x0000ed7a) form2_midp_gauge_slider_pane_t2_cp01

0xed8a,	// (0x0000ed8a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xed8a,	// (0x0000ed8a) form2_midp_gauge_slider_pane_t3_cp01

0x98cc,	// (0x000098cc) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9900,	// (0x00009900) navi_smil_pane_g1

0x9908,	// (0x00009908) navi_smil_pane_t1

0x98d5,	// (0x000098d5) form2_midp_slider_pane_g1

0x98de,	// (0x000098de) form2_midp_slider_pane_g2

0x98e6,	// (0x000098e6) form2_midp_slider_pane_g3

0x98d5,	// (0x000098d5) form2_midp_slider_pane_g4

0xeda9,	// (0x0000eda9) form2_midp_slider_pane_g5

0x0004,

0xf2a5,	// (0x0000f2a5) form2_midp_slider_pane_g

0x9883,	// (0x00009883) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9883,	// (0x00009883) vkb2_area_bottom_space_btn_pane_g4

0xcbd4,	// (0x0000cbd4) lc0_navi_pane_ParamLimits

0xcbd4,	// (0x0000cbd4) lc0_navi_pane

0xcc3e,	// (0x0000cc3e) lc0_stat_indi_pane_ParamLimits

0xcc3e,	// (0x0000cc3e) lc0_stat_indi_pane

0xcc53,	// (0x0000cc53) ls0_title_pane_ParamLimits

0xcc53,	// (0x0000cc53) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x862b,	// (0x0000862b) list_uniindi_pane_ParamLimits

0x8637,	// (0x00008637) uniindi_top_pane_ParamLimits

0x86d2,	// (0x000086d2) list_single_uniindi_pane_g1_ParamLimits

0x86e5,	// (0x000086e5) list_single_uniindi_pane_t1_ParamLimits

0xedb4,	// (0x0000edb4) lc0_stat_clock_pane_ParamLimits

0xedb4,	// (0x0000edb4) lc0_stat_clock_pane

0xedc1,	// (0x0000edc1) lc0_stat_indi_pane_g1_ParamLimits

0xedc1,	// (0x0000edc1) lc0_stat_indi_pane_g1

0xedce,	// (0x0000edce) lc0_stat_indi_pane_g2_ParamLimits

0xedce,	// (0x0000edce) lc0_stat_indi_pane_g2

0x0001,

0xf2b0,	// (0x0000f2b0) lc0_stat_indi_pane_g_ParamLimits

0xf2b0,	// (0x0000f2b0) lc0_stat_indi_pane_g

0xeddb,	// (0x0000eddb) lc0_uni_indicator_pane_ParamLimits

0xeddb,	// (0x0000eddb) lc0_uni_indicator_pane

0x994a,	// (0x0000994a) ls0_title_pane_g1_ParamLimits

0x994a,	// (0x0000994a) ls0_title_pane_g1

0xede8,	// (0x0000ede8) ls0_title_pane_t1_ParamLimits

0xede8,	// (0x0000ede8) ls0_title_pane_t1

0xee16,	// (0x0000ee16) lc0_uni_indicator_pane_g1_ParamLimits

0xee16,	// (0x0000ee16) lc0_uni_indicator_pane_g1

0x99aa,	// (0x000099aa) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x99b8,	// (0x000099b8) ai5_sk_pane_ParamLimits

0x99b8,	// (0x000099b8) ai5_sk_pane

0xee45,	// (0x0000ee45) cell_ai5_widget_pane_ParamLimits

0xee45,	// (0x0000ee45) cell_ai5_widget_pane

0x9a95,	// (0x00009a95) aid_size_cell_widget_grid

0x9aab,	// (0x00009aab) bg_ai5_widget_pane_ParamLimits

0x9aab,	// (0x00009aab) bg_ai5_widget_pane

0x9b15,	// (0x00009b15) cell_ai5_widget_pane_g2

0x9b25,	// (0x00009b25) cell_ai5_widget_pane_g3

0x9b44,	// (0x00009b44) cell_ai5_widget_pane_g4

0x9b50,	// (0x00009b50) cell_ai5_widget_pane_g5

0x9b5c,	// (0x00009b5c) cell_ai5_widget_pane_g6

0x9b68,	// (0x00009b68) cell_ai5_widget_pane_g7

0x9bb0,	// (0x00009bb0) cell_ai5_widget_pane_t1_ParamLimits

0x9bb0,	// (0x00009bb0) cell_ai5_widget_pane_t1

0x9bcd,	// (0x00009bcd) cell_ai5_widget_pane_t2_ParamLimits

0x9bcd,	// (0x00009bcd) cell_ai5_widget_pane_t2

0x9be5,	// (0x00009be5) cell_ai5_widget_pane_t3_ParamLimits

0x9be5,	// (0x00009be5) cell_ai5_widget_pane_t3

0x9bfd,	// (0x00009bfd) cell_ai5_widget_pane_t4_ParamLimits

0x9bfd,	// (0x00009bfd) cell_ai5_widget_pane_t4

0x9c17,	// (0x00009c17) cell_ai5_widget_pane_t5_ParamLimits

0x9c17,	// (0x00009c17) cell_ai5_widget_pane_t5

0x9c36,	// (0x00009c36) cell_ai5_widget_pane_t6_ParamLimits

0x9c36,	// (0x00009c36) cell_ai5_widget_pane_t6

0x9c48,	// (0x00009c48) cell_ai5_widget_pane_t7_ParamLimits

0x9c48,	// (0x00009c48) cell_ai5_widget_pane_t7

0x9c61,	// (0x00009c61) cell_ai5_widget_pane_t8_ParamLimits

0x9c61,	// (0x00009c61) cell_ai5_widget_pane_t8

0x0009,

0xb349,	// (0x0000b349) cell_ai5_widget_pane_t_ParamLimits

0xb349,	// (0x0000b349) cell_ai5_widget_pane_t

0x9cad,	// (0x00009cad) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xeeb0,	// (0x0000eeb0) ai5_sk_left_pane

0xeeba,	// (0x0000eeba) ai5_sk_middle_pane

0xeec4,	// (0x0000eec4) ai5_sk_right_pane

0x9cdf,	// (0x00009cdf) bg_ai5_widget_pane_g1_ParamLimits

0x9cdf,	// (0x00009cdf) bg_ai5_widget_pane_g1

0x9ceb,	// (0x00009ceb) bg_ai5_widget_pane_g2_ParamLimits

0x9ceb,	// (0x00009ceb) bg_ai5_widget_pane_g2

0x9cf7,	// (0x00009cf7) bg_ai5_widget_pane_g3_ParamLimits

0x9cf7,	// (0x00009cf7) bg_ai5_widget_pane_g3

0x9d03,	// (0x00009d03) bg_ai5_widget_pane_g4_ParamLimits

0x9d03,	// (0x00009d03) bg_ai5_widget_pane_g4

0x9d0f,	// (0x00009d0f) bg_ai5_widget_pane_g5_ParamLimits

0x9d0f,	// (0x00009d0f) bg_ai5_widget_pane_g5

0x9d1b,	// (0x00009d1b) bg_ai5_widget_pane_g6_ParamLimits

0x9d1b,	// (0x00009d1b) bg_ai5_widget_pane_g6

0x9d27,	// (0x00009d27) bg_ai5_widget_pane_g7_ParamLimits

0x9d27,	// (0x00009d27) bg_ai5_widget_pane_g7

0x9d33,	// (0x00009d33) bg_ai5_widget_pane_g8_ParamLimits

0x9d33,	// (0x00009d33) bg_ai5_widget_pane_g8

0x9d3f,	// (0x00009d3f) bg_ai5_widget_pane_g9_ParamLimits

0x9d3f,	// (0x00009d3f) bg_ai5_widget_pane_g9

0x0008,

0xb35e,	// (0x0000b35e) bg_ai5_widget_pane_g_ParamLimits

0xb35e,	// (0x0000b35e) bg_ai5_widget_pane_g

0x9d72,	// (0x00009d72) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d72,	// (0x00009d72) cell_shortcut_ai5_widget_pane

0x25a7,	// (0x000025a7) bg_cell_shortcut_ai5_widget_pane

0x9d83,	// (0x00009d83) cell_grid_ai5_widget_pane_g1

0x9d8c,	// (0x00009d8c) highlight_cell_shortcut_ai5_widget_pane

0x3653,	// (0x00003653) ai5_sk_left_pane_g1

0x9d94,	// (0x00009d94) ai5_sk_left_pane_g2

0x9d9c,	// (0x00009d9c) ai5_sk_left_pane_g3

0x9da4,	// (0x00009da4) ai5_sk_left_pane_g4

0x0003,

0xb371,	// (0x0000b371) ai5_sk_left_pane_g

0x9dac,	// (0x00009dac) ai5_sk_left_pane_t1

0x364b,	// (0x0000364b) ai5_sk_right_pane_g1

0x9dba,	// (0x00009dba) ai5_sk_right_pane_g2

0x9dc2,	// (0x00009dc2) ai5_sk_right_pane_g3

0x9dca,	// (0x00009dca) ai5_sk_right_pane_g4

0x0003,

0xb37a,	// (0x0000b37a) ai5_sk_right_pane_g

0x9dd2,	// (0x00009dd2) ai5_sk_right_pane_t1

0x364b,	// (0x0000364b) ai5_sk_middle_pane_g1

0x3653,	// (0x00003653) ai5_sk_middle_pane_g2

0x366b,	// (0x0000366b) ai5_sk_middle_pane_g3

0x9dc2,	// (0x00009dc2) ai5_sk_middle_pane_g4

0x9d9c,	// (0x00009d9c) ai5_sk_middle_pane_g5

0x9de0,	// (0x00009de0) ai5_sk_middle_pane_g6

0xeece,	// (0x0000eece) ai5_sk_middle_pane_g7

0x0006,

0xf2b5,	// (0x0000f2b5) ai5_sk_middle_pane_g

0xcac0,	// (0x0000cac0) aid_touch_area_size_lc0_ParamLimits

0xcac0,	// (0x0000cac0) aid_touch_area_size_lc0

0x6de1,	// (0x00006de1) cell_hwr_candidate_pane_t1_ParamLimits

0x30ff,	// (0x000030ff) aid_touch_navi_pane

0xcd46,	// (0x0000cd46) status_dt_navi_pane_ParamLimits

0xcd46,	// (0x0000cd46) status_dt_navi_pane

0xcd5e,	// (0x0000cd5e) status_dt_sta_pane_ParamLimits

0xcd5e,	// (0x0000cd5e) status_dt_sta_pane

0xeed6,	// (0x0000eed6) dt_sta_controll_pane

0xeee3,	// (0x0000eee3) dt_sta_indi_pane

0xeef0,	// (0x0000eef0) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0x9e1b,	// (0x00009e1b) dt_sta_battery_pane

0x9e23,	// (0x00009e23) dt_sta_indi_pane_g1

0x9e2c,	// (0x00009e2c) dt_sta_indi_pane_g2

0x9e35,	// (0x00009e35) dt_sta_indi_pane_g3

0x0002,

0xb392,	// (0x0000b392) dt_sta_indi_pane_g

0x9e3e,	// (0x00009e3e) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x47ec,	// (0x000047ec) dt_sta_title_pane_g1

0x9e47,	// (0x00009e47) dt_sta_title_pane_t1_ParamLimits

0x9e47,	// (0x00009e47) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0x9e5c,	// (0x00009e5c) dt_sta_controll_pane_g1

0x9e65,	// (0x00009e65) bg_dt_sta_title_pane_g1

0x9e6e,	// (0x00009e6e) bg_dt_sta_title_pane_g2

0x9e77,	// (0x00009e77) bg_dt_sta_title_pane_g3

0x0002,

0xb399,	// (0x0000b399) bg_dt_sta_title_pane_g

0x659d,	// (0x0000659d) bg_dt_sta_indi_pane_g1

0x9e80,	// (0x00009e80) dt_sta_signal_pane_g1

0x9e88,	// (0x00009e88) dt_sta_signal_pane_g2

0x0001,

0xb3a0,	// (0x0000b3a0) dt_sta_signal_pane_g

0x9e90,	// (0x00009e90) dt_sta_battery_pane_g1

0x9e99,	// (0x00009e99) dt_sta_battery_pane_t1

0x659d,	// (0x0000659d) bg_dt_sta_control_pane_g1

0x1eda,	// (0x00001eda) fep_china_uni_eep_pane

0x1ee2,	// (0x00001ee2) fep_china_uni_entry_pane_ParamLimits

0x1ef2,	// (0x00001ef2) popup_fep_china_uni_window_g1_ParamLimits

0x1f02,	// (0x00001f02) popup_fep_china_uni_window_g2_ParamLimits

0x1f02,	// (0x00001f02) popup_fep_china_uni_window_g2

0x0001,

0xac1b,	// (0x0000ac1b) popup_fep_china_uni_window_g_ParamLimits

0xac1b,	// (0x0000ac1b) popup_fep_china_uni_window_g

0x9ea8,	// (0x00009ea8) fep_china_uni_eep_pane_g1

0x9eb0,	// (0x00009eb0) fep_china_uni_eep_pane_t1

0x98f7,	// (0x000098f7) aid_touch_area_size_smil_player

0x324f,	// (0x0000324f) lc0_clock_pane

0x342e,	// (0x0000342e) status_pane_g5_ParamLimits

0x342e,	// (0x0000342e) status_pane_g5

0xc585,	// (0x0000c585) popup_keymap_window

0x33ee,	// (0x000033ee) status_icon_pane

0x9b25,	// (0x00009b25) cell_ai5_widget_pane_g3_ParamLimits

0x9b44,	// (0x00009b44) cell_ai5_widget_pane_g4_ParamLimits

0x9b50,	// (0x00009b50) cell_ai5_widget_pane_g5_ParamLimits

0x9b74,	// (0x00009b74) cell_ai5_widget_pane_g8_ParamLimits

0x9b74,	// (0x00009b74) cell_ai5_widget_pane_g8

0x9b88,	// (0x00009b88) cell_ai5_widget_pane_g9_ParamLimits

0x9b88,	// (0x00009b88) cell_ai5_widget_pane_g9

0x9b9c,	// (0x00009b9c) cell_ai5_widget_pane_g10_ParamLimits

0x9b9c,	// (0x00009b9c) cell_ai5_widget_pane_g10

0x9ebf,	// (0x00009ebf) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9ec7,	// (0x00009ec7) popup_keymap_window_t1

0xc29f,	// (0x0000c29f) control_pane_g6_ParamLimits

0xc29f,	// (0x0000c29f) control_pane_g6

0xc2ac,	// (0x0000c2ac) control_pane_g7_ParamLimits

0xc2ac,	// (0x0000c2ac) control_pane_g7

0xc2b9,	// (0x0000c2b9) control_pane_g8_ParamLimits

0xc2b9,	// (0x0000c2b9) control_pane_g8

0xeed6,	// (0x0000eed6) dt_sta_controll_pane_ParamLimits

0xeee3,	// (0x0000eee3) dt_sta_indi_pane_ParamLimits

0xeef0,	// (0x0000eef0) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb555,	// (0x0000b555) popup_sk_window

0x3ec0,	// (0x00003ec0) bg_popup_sub_pane_cp28_ParamLimits

0x3ec0,	// (0x00003ec0) bg_popup_sub_pane_cp28

0x9ed5,	// (0x00009ed5) popup_discreet_window_g1_ParamLimits

0x9ed5,	// (0x00009ed5) popup_discreet_window_g1

0x9ef5,	// (0x00009ef5) popup_discreet_window_t1_ParamLimits

0x9ef5,	// (0x00009ef5) popup_discreet_window_t1

0x9f13,	// (0x00009f13) popup_discreet_window_t2_ParamLimits

0x9f13,	// (0x00009f13) popup_discreet_window_t2

0x0002,

0xb3a5,	// (0x0000b3a5) popup_discreet_window_t_ParamLimits

0xb3a5,	// (0x0000b3a5) popup_discreet_window_t

0x9f65,	// (0x00009f65) popup_sk_window_g1

0x9f6f,	// (0x00009f6f) popup_sk_window_g2

0x0001,

0xb3ac,	// (0x0000b3ac) popup_sk_window_g

0x9f79,	// (0x00009f79) popup_sk_window_t1

0x9f87,	// (0x00009f87) popup_sk_window_t1_copy1

0x9b15,	// (0x00009b15) cell_ai5_widget_pane_g2_ParamLimits

0x9c73,	// (0x00009c73) cell_ai5_widget_pane_t9_ParamLimits

0x9c73,	// (0x00009c73) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xef02,	// (0x0000ef02) aid_fshwr2_btn_pane

0xef11,	// (0x0000ef11) aid_fshwr2_syb_pane

0xef23,	// (0x0000ef23) aid_fshwr2_txt_pane

0xef32,	// (0x0000ef32) fshwr2_func_candi_pane

0xef43,	// (0x0000ef43) fshwr2_hwr_syb_pane

0xef5e,	// (0x0000ef5e) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xef76,	// (0x0000ef76) fshwr2_icf_pane_t1_ParamLimits

0xef76,	// (0x0000ef76) fshwr2_icf_pane_t1

0x659d,	// (0x0000659d) fshwr2_func_candi_pane_g1

0xa02a,	// (0x0000a02a) fshwr2_func_candi_row_pane_ParamLimits

0xa02a,	// (0x0000a02a) fshwr2_func_candi_row_pane

0xef90,	// (0x0000ef90) cell_fshwr2_syb_pane_ParamLimits

0xef90,	// (0x0000ef90) cell_fshwr2_syb_pane

0x6a2c,	// (0x00006a2c) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xa057,	// (0x0000a057) fshwr2_func_candi_cell_pane_ParamLimits

0xa057,	// (0x0000a057) fshwr2_func_candi_cell_pane

0xa088,	// (0x0000a088) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa088,	// (0x0000a088) fshwr2_func_candi_cell_bg_pane

0xa0a2,	// (0x0000a0a2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa0a2,	// (0x0000a0a2) fshwr2_func_candi_cell_pane_g1

0xa0c2,	// (0x0000a0c2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa0c2,	// (0x0000a0c2) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25a7,	// (0x000025a7) cell_fshwr2_syb_bg_pane

0xefaa,	// (0x0000efaa) cell_fshwr2_syb_bg_pane_g1

0xa0dd,	// (0x0000a0dd) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xd2c0,	// (0x0000d2c0) uni_indicator_pane_g1_ParamLimits

0xd2d5,	// (0x0000d2d5) uni_indicator_pane_g2_ParamLimits

0x4b54,	// (0x00004b54) uni_indicator_pane_g3_ParamLimits

0x4b6a,	// (0x00004b6a) uni_indicator_pane_g4_ParamLimits

0x4b6a,	// (0x00004b6a) uni_indicator_pane_g4

0x4b7e,	// (0x00004b7e) uni_indicator_pane_g5_ParamLimits

0x4b7e,	// (0x00004b7e) uni_indicator_pane_g5

0x4b92,	// (0x00004b92) uni_indicator_pane_g6_ParamLimits

0x4b92,	// (0x00004b92) uni_indicator_pane_g6

0xf183,	// (0x0000f183) uni_indicator_pane_g_ParamLimits

0xdec5,	// (0x0000dec5) popup_tmo_note_window_ParamLimits

0xdec5,	// (0x0000dec5) popup_tmo_note_window

0x134f,	// (0x0000134f) fshwr2_bg_pane

0xa0b3,	// (0x0000a0b3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa0b3,	// (0x0000a0b3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb3b1,	// (0x0000b3b1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb3b1,	// (0x0000b3b1) fshwr2_func_candi_cell_pane_g

0x659d,	// (0x0000659d) bg_popup_window_pane_cp01

0xa0ec,	// (0x0000a0ec) bg_popup_window_pane_g1_cp01

0xa0f5,	// (0x0000a0f5) bg_popup_window_pane_cp22_ParamLimits

0xa0f5,	// (0x0000a0f5) bg_popup_window_pane_cp22

0xa103,	// (0x0000a103) listscroll_tmo_link_pane_ParamLimits

0xa103,	// (0x0000a103) listscroll_tmo_link_pane

0xa143,	// (0x0000a143) popup_tmo_note_window_g1_ParamLimits

0xa143,	// (0x0000a143) popup_tmo_note_window_g1

0xa150,	// (0x0000a150) tmo_note_info_pane_ParamLimits

0xa150,	// (0x0000a150) tmo_note_info_pane

0xefb2,	// (0x0000efb2) list_tmo_note_info_pane_g1_ParamLimits

0xefb2,	// (0x0000efb2) list_tmo_note_info_pane_g1

0xa181,	// (0x0000a181) list_tmo_note_info_pane_g2_ParamLimits

0xa181,	// (0x0000a181) list_tmo_note_info_pane_g2

0x0001,

0xf2c4,	// (0x0000f2c4) list_tmo_note_info_pane_g_ParamLimits

0xf2c4,	// (0x0000f2c4) list_tmo_note_info_pane_g

0xa19d,	// (0x0000a19d) list_tmo_note_info_text_pane_ParamLimits

0xa19d,	// (0x0000a19d) list_tmo_note_info_text_pane

0xa222,	// (0x0000a222) list_tmo_link_pane

0xa22f,	// (0x0000a22f) scroll_pane_cp20

0xa23c,	// (0x0000a23c) list_single_tmo_link_pane_ParamLimits

0xa23c,	// (0x0000a23c) list_single_tmo_link_pane

0xa24c,	// (0x0000a24c) list_single_tmo_link_pane_t1

0xa25a,	// (0x0000a25a) list_tmo_note_info_text_pane_t1_ParamLimits

0xa25a,	// (0x0000a25a) list_tmo_note_info_text_pane_t1

0xbe67,	// (0x0000be67) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbe67,	// (0x0000be67) aid_size_touch_scroll_bar_cp01

0xbd82,	// (0x0000bd82) aid_size_touch_slider_marker

0xb545,	// (0x0000b545) popup_settings_window_ParamLimits

0xb545,	// (0x0000b545) popup_settings_window

0x2b36,	// (0x00002b36) popup_candi_list_indi_window

0x30ff,	// (0x000030ff) aid_touch_navi_pane_ParamLimits

0x83b0,	// (0x000083b0) rs_clock_indi_pane

0x83b9,	// (0x000083b9) sctrl_sk_bottom_pane_ParamLimits

0x83ca,	// (0x000083ca) sctrl_sk_top_pane_ParamLimits

0x8bfb,	// (0x00008bfb) popup_fep_tooltip_window

0x9a95,	// (0x00009a95) aid_size_cell_widget_grid_ParamLimits

0x9b09,	// (0x00009b09) cell_ai5_widget_pane_g1_ParamLimits

0x9b09,	// (0x00009b09) cell_ai5_widget_pane_g1

0x9b5c,	// (0x00009b5c) cell_ai5_widget_pane_g6_ParamLimits

0x9b68,	// (0x00009b68) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb334,	// (0x0000b334) cell_ai5_widget_pane_g_ParamLimits

0xb334,	// (0x0000b334) cell_ai5_widget_pane_g

0x9c97,	// (0x00009c97) cell_ai5_widget_pane_t10_ParamLimits

0x9c97,	// (0x00009c97) cell_ai5_widget_pane_t10

0x9cad,	// (0x00009cad) grid_ai5_widget_pane_ParamLimits

0x9d4b,	// (0x00009d4b) cell_contacts_ai5_widget_pane_ParamLimits

0x9d4b,	// (0x00009d4b) cell_contacts_ai5_widget_pane

0x9f28,	// (0x00009f28) popup_discreet_window_t3_ParamLimits

0x9f28,	// (0x00009f28) popup_discreet_window_t3

0x9fff,	// (0x00009fff) popup_fshwr2_char_preview_window_ParamLimits

0x9fff,	// (0x00009fff) popup_fshwr2_char_preview_window

0xefc9,	// (0x0000efc9) tmo_note_info_pane_t1

0xefde,	// (0x0000efde) tmo_note_info_pane_t2

0xeff7,	// (0x0000eff7) tmo_note_info_pane_t3

0xa1fe,	// (0x0000a1fe) tmo_note_info_pane_t4

0xa210,	// (0x0000a210) tmo_note_info_pane_t5

0x0004,

0xf2c9,	// (0x0000f2c9) tmo_note_info_pane_t

0xa222,	// (0x0000a222) list_tmo_link_pane_ParamLimits

0xa22f,	// (0x0000a22f) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa273,	// (0x0000a273) popup_fshwr2_char_preview_window_t1

0xa281,	// (0x0000a281) popup_candi_list_indi_window_g1

0xa28a,	// (0x0000a28a) bg_cell_contacts_ai5_widget_pane

0xa296,	// (0x0000a296) cell_contacts_ai5_widget_pane_g1

0xa2a9,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_g2

0xa2b5,	// (0x0000a2b5) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb3c6,	// (0x0000b3c6) cell_contacts_ai5_widget_pane_g

0xa2c7,	// (0x0000a2c7) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa341,	// (0x0000a341) settings_container_pane

0x25a7,	// (0x000025a7) listscroll_set_pane_copy1

0x59a2,	// (0x000059a2) scroll_pane_cp121_copy1

0xa34d,	// (0x0000a34d) set_content_pane_copy1

0xa355,	// (0x0000a355) aid_height_set_list_copy1_ParamLimits

0xa355,	// (0x0000a355) aid_height_set_list_copy1

0x4e75,	// (0x00004e75) aid_size_parent_copy1_ParamLimits

0x4e75,	// (0x00004e75) aid_size_parent_copy1

0xa361,	// (0x0000a361) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa361,	// (0x0000a361) button_value_adjust_pane_cp6_copy1

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_copy1_ParamLimits

0x2b0e,	// (0x00002b0e) list_highlight_pane_cp2_copy1

0xa375,	// (0x0000a375) list_set_pane_copy1_ParamLimits

0xa375,	// (0x0000a375) list_set_pane_copy1

0xa2dc,	// (0x0000a2dc) main_pane_set_t1_copy1_ParamLimits

0xa2dc,	// (0x0000a2dc) main_pane_set_t1_copy1

0xa316,	// (0x0000a316) main_pane_set_t2_copy1_ParamLimits

0xa316,	// (0x0000a316) main_pane_set_t2_copy1

0xa422,	// (0x0000a422) main_pane_set_t3_copy1

0xa430,	// (0x0000a430) main_pane_set_t4_copy1

0xa335,	// (0x0000a335) set_content_pane_g1_copy1_ParamLimits

0xa335,	// (0x0000a335) set_content_pane_g1_copy1

0xa43e,	// (0x0000a43e) setting_code_pane_copy1

0xa446,	// (0x0000a446) setting_slider_graphic_pane_copy1

0xa446,	// (0x0000a446) setting_slider_pane_copy1

0xa446,	// (0x0000a446) setting_text_pane_copy1

0xa446,	// (0x0000a446) setting_volume_pane_copy1

0xa43e,	// (0x0000a43e) settings_code_pane_cp2_copy1

0xa44e,	// (0x0000a44e) settings_code_pane_cp_copy1_ParamLimits

0xa44e,	// (0x0000a44e) settings_code_pane_cp_copy1

0xa462,	// (0x0000a462) volume_set_pane_copy1

0xa46a,	// (0x0000a46a) volume_set_pane_g10_copy1

0xa472,	// (0x0000a472) volume_set_pane_g1_copy1

0xa47a,	// (0x0000a47a) volume_set_pane_g2_copy1

0xa482,	// (0x0000a482) volume_set_pane_g3_copy1

0xa48a,	// (0x0000a48a) volume_set_pane_g4_copy1

0xa492,	// (0x0000a492) volume_set_pane_g5_copy1

0xa49a,	// (0x0000a49a) volume_set_pane_g6_copy1

0xa4a2,	// (0x0000a4a2) volume_set_pane_g7_copy1

0xa4aa,	// (0x0000a4aa) volume_set_pane_g8_copy1

0xa4b2,	// (0x0000a4b2) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa4ba,	// (0x0000a4ba) setting_slider_pane_t1_copy1_ParamLimits

0xa4ba,	// (0x0000a4ba) setting_slider_pane_t1_copy1

0xa4d8,	// (0x0000a4d8) setting_slider_pane_t2_copy1_ParamLimits

0xa4d8,	// (0x0000a4d8) setting_slider_pane_t2_copy1

0xa4f2,	// (0x0000a4f2) setting_slider_pane_t3_copy1_ParamLimits

0xa4f2,	// (0x0000a4f2) setting_slider_pane_t3_copy1

0xa50a,	// (0x0000a50a) slider_set_pane_copy1_ParamLimits

0xa50a,	// (0x0000a50a) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa520,	// (0x0000a520) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa52a,	// (0x0000a52a) set_opt_bg_pane_g7_copy2

0xa532,	// (0x0000a532) set_opt_bg_pane_g8_copy2

0xa53c,	// (0x0000a53c) set_opt_bg_pane_g9_copy2

0xa546,	// (0x0000a546) aid_size_touch_slider_mark_copy1_ParamLimits

0xa546,	// (0x0000a546) aid_size_touch_slider_mark_copy1

0xa55a,	// (0x0000a55a) slider_set_pane_g1_copy1

0xa563,	// (0x0000a563) slider_set_pane_g2_copy1

0x4de4,	// (0x00004de4) slider_set_pane_g3_copy1_ParamLimits

0x4de4,	// (0x00004de4) slider_set_pane_g3_copy1

0x4df8,	// (0x00004df8) slider_set_pane_g4_copy1_ParamLimits

0x4df8,	// (0x00004df8) slider_set_pane_g4_copy1

0x4e10,	// (0x00004e10) slider_set_pane_g5_copy1_ParamLimits

0x4e10,	// (0x00004e10) slider_set_pane_g5_copy1

0x4de4,	// (0x00004de4) slider_set_pane_g6_copy1_ParamLimits

0x4de4,	// (0x00004de4) slider_set_pane_g6_copy1

0xa56b,	// (0x0000a56b) slider_set_pane_g7_copy1_ParamLimits

0xa56b,	// (0x0000a56b) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa581,	// (0x0000a581) setting_slider_graphic_pane_g1_copy1

0xa58a,	// (0x0000a58a) setting_slider_graphic_pane_t1_copy1

0xa59a,	// (0x0000a59a) setting_slider_graphic_pane_t2_copy1

0xa5aa,	// (0x0000a5aa) slider_set_pane_cp_copy1

0xa5ba,	// (0x0000a5ba) input_focus_pane_cp1_copy1

0xa5c3,	// (0x0000a5c3) list_set_text_pane_copy1

0xa5cb,	// (0x0000a5cb) setting_text_pane_g1_copy1

0xa5d4,	// (0x0000a5d4) set_text_pane_t1_copy1

0xa5ba,	// (0x0000a5ba) input_focus_pane_cp2_copy1

0xa5cb,	// (0x0000a5cb) setting_code_pane_g1_copy1

0xa5f1,	// (0x0000a5f1) setting_code_pane_t1_copy1

0x5791,	// (0x00005791) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_copy1_ParamLimits

0x22a9,	// (0x000022a9) list_set_graphic_pane_g1_copy1

0xa5ff,	// (0x0000a5ff) list_set_graphic_pane_g2_copy1

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_copy1_ParamLimits

0x22c1,	// (0x000022c1) list_set_graphic_pane_t1_copy1

0x659d,	// (0x0000659d) rs_clock_indi_pane_g1

0xa607,	// (0x0000a607) rs_clock_indi_pane_t1

0xa615,	// (0x0000a615) rs_indi_pane

0xa61d,	// (0x0000a61d) rs_indi_pane_g1

0xa626,	// (0x0000a626) rs_indi_pane_g2

0xa62f,	// (0x0000a62f) rs_indi_pane_g3

0x0002,

0xb3cd,	// (0x0000b3cd) rs_indi_pane_g

0x25a7,	// (0x000025a7) bg_popup_preview_window_pane_cp03

0xa638,	// (0x0000a638) popup_fep_tooltip_window_t1

0x7774,	// (0x00007774) popup_note2_window_g2_ParamLimits

0x7774,	// (0x00007774) popup_note2_window_g2

0x0001,

0xb16d,	// (0x0000b16d) popup_note2_window_g_ParamLimits

0xb16d,	// (0x0000b16d) popup_note2_window_g

0x7d6e,	// (0x00007d6e) bg_popup_sub_pane_cp11_ParamLimits

0x7d7b,	// (0x00007d7b) cell_ai3_links_pane_g1_ParamLimits

0x7d92,	// (0x00007d92) cell_ai3_links_pane_t1

0xa5d4,	// (0x0000a5d4) set_text_pane_t1_copy1_ParamLimits

0xc16e,	// (0x0000c16e) cell_graphic_popup_pane_cp2_ParamLimits

0xc16e,	// (0x0000c16e) cell_graphic_popup_pane_cp2

0xf00c,	// (0x0000f00c) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa64e,	// (0x0000a64e) cell_graphic_popup_pane_g3_cp2

0xa656,	// (0x0000a656) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x1a01,	// (0x00001a01) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xdeb9,	// (0x0000deb9) popup_tmo_big_image_note_window

0x9af9,	// (0x00009af9) cell_ai5_widget_list_pane

0x9b01,	// (0x00009b01) cell_ai5_widget_lrg_icon_pane

0xefc9,	// (0x0000efc9) tmo_note_info_pane_t1_ParamLimits

0xefde,	// (0x0000efde) tmo_note_info_pane_t2_ParamLimits

0xeff7,	// (0x0000eff7) tmo_note_info_pane_t3_ParamLimits

0xa1fe,	// (0x0000a1fe) tmo_note_info_pane_t4_ParamLimits

0xa210,	// (0x0000a210) tmo_note_info_pane_t5_ParamLimits

0xf2c9,	// (0x0000f2c9) tmo_note_info_pane_t_ParamLimits

0xa341,	// (0x0000a341) settings_container_pane_ParamLimits

0xa5b2,	// (0x0000a5b2) indicator_popup_pane_cp5

0xa5b2,	// (0x0000a5b2) indicator_popup_pane_cp6

0x5791,	// (0x00005791) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa664,	// (0x0000a664) popup_tmo_big_image_note_window_g1

0xa66f,	// (0x0000a66f) popup_tmo_big_image_note_window_t1

0xa67f,	// (0x0000a67f) popup_tmo_big_image_note_window_t2

0xa68f,	// (0x0000a68f) popup_tmo_big_image_note_window_t3

0x0002,

0xb3d4,	// (0x0000b3d4) popup_tmo_big_image_note_window_t

0xa69f,	// (0x0000a69f) cell_ai5_widget_lrg_icon_pane_g1

0xa6a7,	// (0x0000a6a7) cell_ai5_widget_lrg_icon_pane_t1

0xa6b5,	// (0x0000a6b5) cell_ai5_widget_list_row_pane_ParamLimits

0xa6b5,	// (0x0000a6b5) cell_ai5_widget_list_row_pane

0xa6ce,	// (0x0000a6ce) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa6ce,	// (0x0000a6ce) cell_ai5_widget_list_row_pane_g1

0xa6db,	// (0x0000a6db) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa6db,	// (0x0000a6db) cell_ai5_widget_list_row_pane_t1

0xa6f3,	// (0x0000a6f3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa6f3,	// (0x0000a6f3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb3db,	// (0x0000b3db) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb3db,	// (0x0000b3db) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa72a,	// (0x0000a72a) popup_fep_char_pre_window

0xa732,	// (0x0000a732) popup_fep_ituss_window

0xa753,	// (0x0000a753) popup_fep_vkbss_window

0xa772,	// (0x0000a772) grid_vkbss_keypad_pane_ParamLimits

0xa772,	// (0x0000a772) grid_vkbss_keypad_pane

0xa782,	// (0x0000a782) ituss_keypad_pane

0xa79e,	// (0x0000a79e) aid_vkbss_key_offset_ParamLimits

0xa79e,	// (0x0000a79e) aid_vkbss_key_offset

0xa7aa,	// (0x0000a7aa) cell_vkbss_key_pane_ParamLimits

0xa7aa,	// (0x0000a7aa) cell_vkbss_key_pane

0x340a,	// (0x0000340a) bg_cell_vkbss_key_g1_ParamLimits

0x340a,	// (0x0000340a) bg_cell_vkbss_key_g1

0xa7c0,	// (0x0000a7c0) cell_vkbss_key_3p_pane_ParamLimits

0xa7c0,	// (0x0000a7c0) cell_vkbss_key_3p_pane

0xa7da,	// (0x0000a7da) cell_vkbss_key_g1_ParamLimits

0xa7da,	// (0x0000a7da) cell_vkbss_key_g1

0xa7f4,	// (0x0000a7f4) cell_vkbss_key_t1_ParamLimits

0xa7f4,	// (0x0000a7f4) cell_vkbss_key_t1

0xa81f,	// (0x0000a81f) cell_ituss_key_pane_ParamLimits

0xa81f,	// (0x0000a81f) cell_ituss_key_pane

0xa830,	// (0x0000a830) bg_cell_ituss_key_g1_ParamLimits

0xa830,	// (0x0000a830) bg_cell_ituss_key_g1

0xa83c,	// (0x0000a83c) cell_ituss_key_pane_g1_ParamLimits

0xa83c,	// (0x0000a83c) cell_ituss_key_pane_g1

0xa850,	// (0x0000a850) cell_ituss_key_pane_g2_ParamLimits

0xa850,	// (0x0000a850) cell_ituss_key_pane_g2

0x0001,

0xb3e2,	// (0x0000b3e2) cell_ituss_key_pane_g_ParamLimits

0xb3e2,	// (0x0000b3e2) cell_ituss_key_pane_g

0xa87b,	// (0x0000a87b) cell_ituss_key_t1_ParamLimits

0xa87b,	// (0x0000a87b) cell_ituss_key_t1

0xa8a9,	// (0x0000a8a9) cell_ituss_key_t2_ParamLimits

0xa8a9,	// (0x0000a8a9) cell_ituss_key_t2

0xa8da,	// (0x0000a8da) cell_ituss_key_t3_ParamLimits

0xa8da,	// (0x0000a8da) cell_ituss_key_t3

0xa90b,	// (0x0000a90b) cell_ituss_key_t4_ParamLimits

0xa90b,	// (0x0000a90b) cell_ituss_key_t4

0x0003,

0xb3e7,	// (0x0000b3e7) cell_ituss_key_t_ParamLimits

0xb3e7,	// (0x0000b3e7) cell_ituss_key_t

0xa93c,	// (0x0000a93c) cell_vkbss_key_3p_pane_g1

0xa944,	// (0x0000a944) cell_vkbss_key_3p_pane_g2

0xa94c,	// (0x0000a94c) cell_vkbss_key_3p_pane_g3

0x0002,

0xb3f0,	// (0x0000b3f0) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa954,	// (0x0000a954) popup_fep_char_pre_window_t1

0xeea6,	// (0x0000eea6) main_ai5_sk_pane

0xa28a,	// (0x0000a28a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa296,	// (0x0000a296) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa2a9,	// (0x0000a2a9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa2b5,	// (0x0000a2b5) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb3c6,	// (0x0000b3c6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa2c7,	// (0x0000a2c7) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf014,	// (0x0000f014) main_ai5_sk_pane_g1

0x3cfe,	// (0x00003cfe) popup_query_code_window_g1

0xa748,	// (0x0000a748) popup_fep_vkb_icf_pane

0xa75c,	// (0x0000a75c) popup_fep_vtchi_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane

0xa96c,	// (0x0000a96c) list_vkb_icf_pane

0x134f,	// (0x0000134f) bg_icf_pane_cp01

0xa978,	// (0x0000a978) vtchi_icf_list_pane

0xa989,	// (0x0000a989) list_vkb_icf_pane_t1_ParamLimits

0xa989,	// (0x0000a989) list_vkb_icf_pane_t1

0xa9a3,	// (0x0000a9a3) vtchi_icf_list_pane_t1_ParamLimits

0xa9a3,	// (0x0000a9a3) vtchi_icf_list_pane_t1

0xa732,	// (0x0000a732) popup_fep_ituss_window_ParamLimits

0xa75c,	// (0x0000a75c) popup_fep_vtchi_icf_pane_ParamLimits

0xa782,	// (0x0000a782) ituss_keypad_pane_ParamLimits

0xa792,	// (0x0000a792) ituss_sks_pane

0x134f,	// (0x0000134f) bg_icf_pane_ParamLimits

0xa71b,	// (0x0000a71b) icf_edit_indi_pane_ParamLimits

0xa71b,	// (0x0000a71b) icf_edit_indi_pane

0xa96c,	// (0x0000a96c) list_vkb_icf_pane_ParamLimits

0x134f,	// (0x0000134f) bg_icf_pane_cp01_ParamLimits

0xa71b,	// (0x0000a71b) icf_edit_indi_pane_cp01_ParamLimits

0xa71b,	// (0x0000a71b) icf_edit_indi_pane_cp01

0xa980,	// (0x0000a980) vtchi_query_pane

0x6a2c,	// (0x00006a2c) icf_edit_indi_pane_g1_ParamLimits

0x6a2c,	// (0x00006a2c) icf_edit_indi_pane_g1

0xaa34,	// (0x0000aa34) icf_edit_indi_pane_g2_ParamLimits

0xaa34,	// (0x0000aa34) icf_edit_indi_pane_g2

0x0001,

0xb408,	// (0x0000b408) icf_edit_indi_pane_g_ParamLimits

0xb408,	// (0x0000b408) icf_edit_indi_pane_g

0xaa43,	// (0x0000aa43) icf_edit_indi_pane_t1

0xa9ca,	// (0x0000a9ca) bg_input_focus_pane_cp042

0x0d12,	// (0x00000d12) vtchi_button_pane

0xa9d3,	// (0x0000a9d3) vtchi_query_pane_t1

0xa9e1,	// (0x0000a9e1) vtchi_query_pane_t2

0xa9ef,	// (0x0000a9ef) vtchi_query_pane_t3

0x0002,

0xb3f7,	// (0x0000b3f7) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa9fd,	// (0x0000a9fd) vtchi_button_pane_g1

0xaa05,	// (0x0000aa05) ituss_sks_pane_g1

0xaa10,	// (0x0000aa10) ituss_sks_pane_g2

0x0001,

0xb3fe,	// (0x0000b3fe) ituss_sks_pane_g

0xaa18,	// (0x0000aa18) ituss_sks_pane_t1

0xaa26,	// (0x0000aa26) ituss_sks_pane_t2

0x0001,

0xb403,	// (0x0000b403) ituss_sks_pane_t

0x5f2d,	// (0x00005f2d) indicator_nsta_pane_cp_g1

0x5f36,	// (0x00005f36) indicator_nsta_pane_cp_g2

0x5f3e,	// (0x00005f3e) indicator_nsta_pane_cp_g3

0x5f46,	// (0x00005f46) indicator_nsta_pane_cp_g4

0x5f4e,	// (0x00005f4e) indicator_nsta_pane_cp_g5

0x5f56,	// (0x00005f56) indicator_nsta_pane_cp_g6

0x0005,

0xafb7,	// (0x0000afb7) indicator_nsta_pane_cp_g

0xec53,	// (0x0000ec53) cell_graphic2_pane_t2_ParamLimits

0xec53,	// (0x0000ec53) cell_graphic2_pane_t2

0x0001,

0xf2a0,	// (0x0000f2a0) cell_graphic2_pane_t_ParamLimits

0xf2a0,	// (0x0000f2a0) cell_graphic2_pane_t

0xec89,	// (0x0000ec89) cell_graphic2_control_pane_t1

0xc00d,	// (0x0000c00d) signal_pane_g3_ParamLimits

0xc00d,	// (0x0000c00d) signal_pane_g3

0xc021,	// (0x0000c021) signal_pane_g4_ParamLimits

0xc021,	// (0x0000c021) signal_pane_g4

0xa705,	// (0x0000a705) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa705,	// (0x0000a705) cell_ai5_widget_list_row_pane_t3

0xa869,	// (0x0000a869) cell_ituss_key_pane_t1_ParamLimits

0xa869,	// (0x0000a869) cell_ituss_key_pane_t1

0x38ec,	// (0x000038ec) form_field_data_wide_pane_vc_t2_ParamLimits

0x38ec,	// (0x000038ec) form_field_data_wide_pane_vc_t2

0x3900,	// (0x00003900) form_field_data_wide_pane_vc_t3_ParamLimits

0x3900,	// (0x00003900) form_field_data_wide_pane_vc_t3

0x0002,

0xad00,	// (0x0000ad00) form_field_data_wide_pane_vc_t_ParamLimits

0xad00,	// (0x0000ad00) form_field_data_wide_pane_vc_t

0x5be8,	// (0x00005be8) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5be8,	// (0x00005be8) form_field_slider_wide_pane_vc_t3

0x5cc2,	// (0x00005cc2) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5cc2,	// (0x00005cc2) form_field_popup_wide_pane_vc_t2

0x5cd9,	// (0x00005cd9) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5cd9,	// (0x00005cd9) form_field_popup_wide_pane_vc_t3

0x0002,

0xafa6,	// (0x0000afa6) form_field_popup_wide_pane_vc_t_ParamLimits

0xafa6,	// (0x0000afa6) form_field_popup_wide_pane_vc_t

0xef02,	// (0x0000ef02) aid_fshwr2_btn_pane_ParamLimits

0xef11,	// (0x0000ef11) aid_fshwr2_syb_pane_ParamLimits

0xef23,	// (0x0000ef23) aid_fshwr2_txt_pane_ParamLimits

0x134f,	// (0x0000134f) fshwr2_bg_pane_ParamLimits

0xef32,	// (0x0000ef32) fshwr2_func_candi_pane_ParamLimits

0xef43,	// (0x0000ef43) fshwr2_hwr_syb_pane_ParamLimits

0xef5e,	// (0x0000ef5e) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
