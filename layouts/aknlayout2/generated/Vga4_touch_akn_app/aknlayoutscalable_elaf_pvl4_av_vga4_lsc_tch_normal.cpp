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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00000000 };

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
0xb154,	// (0x0000b154) Screen

0xb160,	// (0x0000b160) application_window_ParamLimits

0xb160,	// (0x0000b160) application_window

0x002e,	// (0x0000002e) screen_g1

0xb198,	// (0x0000b198) area_bottom_pane_ParamLimits

0xb198,	// (0x0000b198) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc965,	// (0x0000c965) battery_pane_ParamLimits

0xc965,	// (0x0000c965) battery_pane

0x4135,	// (0x00004135) bg_status_flat_pane_g8

0x413d,	// (0x0000413d) bg_status_flat_pane_g9

0x3317,	// (0x00003317) context_pane_ParamLimits

0x3317,	// (0x00003317) context_pane

0xcadc,	// (0x0000cadc) navi_pane_ParamLimits

0xcadc,	// (0x0000cadc) navi_pane

0xcb65,	// (0x0000cb65) signal_pane_ParamLimits

0xcb65,	// (0x0000cb65) signal_pane

0x0008,

0xaaf8,	// (0x0000aaf8) bg_status_flat_pane_g

0xcbf5,	// (0x0000cbf5) status_pane_g1_ParamLimits

0xcbf5,	// (0x0000cbf5) status_pane_g1

0xcc0b,	// (0x0000cc0b) status_pane_g2_ParamLimits

0xcc0b,	// (0x0000cc0b) status_pane_g2

0x3557,	// (0x00003557) status_pane_g3_ParamLimits

0x3557,	// (0x00003557) status_pane_g3

0x0004,

0xf5ad,	// (0x0000f5ad) status_pane_g_ParamLimits

0xf5ad,	// (0x0000f5ad) status_pane_g

0xcc17,	// (0x0000cc17) title_pane_ParamLimits

0xcc17,	// (0x0000cc17) title_pane

0xcc74,	// (0x0000cc74) uni_indicator_pane_ParamLimits

0xcc74,	// (0x0000cc74) uni_indicator_pane

0x2b3c,	// (0x00002b3c) bg_list_pane_ParamLimits

0x2b3c,	// (0x00002b3c) bg_list_pane

0xc1a2,	// (0x0000c1a2) find_pane

0xc1aa,	// (0x0000c1aa) listscroll_app_pane_ParamLimits

0xc1aa,	// (0x0000c1aa) listscroll_app_pane

0x2b70,	// (0x00002b70) listscroll_form_pane

0xc1b6,	// (0x0000c1b6) listscroll_gen_pane_ParamLimits

0xc1b6,	// (0x0000c1b6) listscroll_gen_pane

0x2b70,	// (0x00002b70) listscroll_set_pane

0x4f5e,	// (0x00004f5e) main_idle_act_pane

0x260e,	// (0x0000260e) main_idle_trad_pane

0x260e,	// (0x0000260e) main_list_empty_pane

0x2b9e,	// (0x00002b9e) main_midp_pane

0x2baa,	// (0x00002baa) main_pane_g1_ParamLimits

0x2baa,	// (0x00002baa) main_pane_g1

0xc1ca,	// (0x0000c1ca) popup_ai_message_window_ParamLimits

0xc1ca,	// (0x0000c1ca) popup_ai_message_window

0xc26a,	// (0x0000c26a) popup_fep_china_uni_window_ParamLimits

0xc26a,	// (0x0000c26a) popup_fep_china_uni_window

0x2cd0,	// (0x00002cd0) popup_fep_japan_candidate_window_ParamLimits

0x2cd0,	// (0x00002cd0) popup_fep_japan_candidate_window

0x2cfa,	// (0x00002cfa) popup_fep_japan_predictive_window_ParamLimits

0x2cfa,	// (0x00002cfa) popup_fep_japan_predictive_window

0xc2ca,	// (0x0000c2ca) popup_find_window

0xc2e7,	// (0x0000c2e7) popup_grid_graphic_window_ParamLimits

0xc2e7,	// (0x0000c2e7) popup_grid_graphic_window

0x2d6b,	// (0x00002d6b) popup_large_graphic_colour_window

0xc38b,	// (0x0000c38b) popup_menu_window_ParamLimits

0xc38b,	// (0x0000c38b) popup_menu_window

0xc577,	// (0x0000c577) popup_note_image_window

0xc537,	// (0x0000c537) popup_note_wait_window_ParamLimits

0xc537,	// (0x0000c537) popup_note_wait_window

0xc58f,	// (0x0000c58f) popup_note_window_ParamLimits

0xc58f,	// (0x0000c58f) popup_note_window

0xc63d,	// (0x0000c63d) popup_query_code_window_ParamLimits

0xc63d,	// (0x0000c63d) popup_query_code_window

0x2fd7,	// (0x00002fd7) popup_query_data_code_window_ParamLimits

0x2fd7,	// (0x00002fd7) popup_query_data_code_window

0xc67d,	// (0x0000c67d) popup_query_data_window_ParamLimits

0xc67d,	// (0x0000c67d) popup_query_data_window

0xc711,	// (0x0000c711) popup_query_sat_info_window_ParamLimits

0xc711,	// (0x0000c711) popup_query_sat_info_window

0xc7bc,	// (0x0000c7bc) popup_snote_single_graphic_window_ParamLimits

0xc7bc,	// (0x0000c7bc) popup_snote_single_graphic_window

0xc7bc,	// (0x0000c7bc) popup_snote_single_text_window_ParamLimits

0xc7bc,	// (0x0000c7bc) popup_snote_single_text_window

0x3072,	// (0x00003072) popup_sub_window_general

0x31b8,	// (0x000031b8) popup_window_general_ParamLimits

0x31b8,	// (0x000031b8) popup_window_general

0x31d1,	// (0x000031d1) power_save_pane

0xc032,	// (0x0000c032) control_pane_g1_ParamLimits

0xc032,	// (0x0000c032) control_pane_g1

0x29ad,	// (0x000029ad) control_pane_g2_ParamLimits

0x29ad,	// (0x000029ad) control_pane_g2

0x29d2,	// (0x000029d2) control_pane_g3_ParamLimits

0x29d2,	// (0x000029d2) control_pane_g3

0x0007,

0xf595,	// (0x0000f595) control_pane_g_ParamLimits

0xf595,	// (0x0000f595) control_pane_g

0xc09b,	// (0x0000c09b) control_pane_t1_ParamLimits

0xc09b,	// (0x0000c09b) control_pane_t1

0xc0f9,	// (0x0000c0f9) control_pane_t2_ParamLimits

0xc0f9,	// (0x0000c0f9) control_pane_t2

0x0002,

0xf5a6,	// (0x0000f5a6) control_pane_t_ParamLimits

0xf5a6,	// (0x0000f5a6) control_pane_t

0x28a5,	// (0x000028a5) navi_navi_volume_pane_cp1

0x28ae,	// (0x000028ae) status_small_icon_pane

0x28b6,	// (0x000028b6) status_small_pane_g1_ParamLimits

0x28b6,	// (0x000028b6) status_small_pane_g1

0x28ea,	// (0x000028ea) status_small_pane_g2_ParamLimits

0x28ea,	// (0x000028ea) status_small_pane_g2

0x28f6,	// (0x000028f6) status_small_pane_g3_ParamLimits

0x28f6,	// (0x000028f6) status_small_pane_g3

0x2902,	// (0x00002902) status_small_pane_g4_ParamLimits

0x2902,	// (0x00002902) status_small_pane_g4

0x290e,	// (0x0000290e) status_small_pane_g5_ParamLimits

0x290e,	// (0x0000290e) status_small_pane_g5

0x291d,	// (0x0000291d) status_small_pane_g6_ParamLimits

0x291d,	// (0x0000291d) status_small_pane_g6

0x0007,

0xaa04,	// (0x0000aa04) status_small_pane_g_ParamLimits

0xaa04,	// (0x0000aa04) status_small_pane_g

0x294d,	// (0x0000294d) status_small_pane_t1

0x2970,	// (0x00002970) status_small_wait_pane_ParamLimits

0x2970,	// (0x00002970) status_small_wait_pane

0xbe22,	// (0x0000be22) aid_levels_signal_ParamLimits

0xbe22,	// (0x0000be22) aid_levels_signal

0xbe3a,	// (0x0000be3a) signal_pane_g1_ParamLimits

0xbe3a,	// (0x0000be3a) signal_pane_g1

0xbe55,	// (0x0000be55) signal_pane_g2_ParamLimits

0xbe55,	// (0x0000be55) signal_pane_g2

0x0001,

0xf574,	// (0x0000f574) signal_pane_g_ParamLimits

0xf574,	// (0x0000f574) signal_pane_g

0x1eb2,	// (0x00001eb2) context_pane_g1

0xb315,	// (0x0000b315) title_pane_g1

0xb34a,	// (0x0000b34a) title_pane_t1

0x04d7,	// (0x000004d7) title_pane_t2

0x04fd,	// (0x000004fd) title_pane_t3

0x0002,

0xf4a1,	// (0x0000f4a1) title_pane_t

0xcc9c,	// (0x0000cc9c) aid_levels_battery_ParamLimits

0xcc9c,	// (0x0000cc9c) aid_levels_battery

0xccb8,	// (0x0000ccb8) battery_pane_g1_ParamLimits

0xccb8,	// (0x0000ccb8) battery_pane_g1

0xccd5,	// (0x0000ccd5) battery_pane_g2_ParamLimits

0xccd5,	// (0x0000ccd5) battery_pane_g2

0x0001,

0xf5b8,	// (0x0000f5b8) battery_pane_g_ParamLimits

0xf5b8,	// (0x0000f5b8) battery_pane_g

0xd0ee,	// (0x0000d0ee) uni_indicator_pane_g1

0xd103,	// (0x0000d103) uni_indicator_pane_g2

0xd118,	// (0x0000d118) uni_indicator_pane_g3

0x0005,

0xf609,	// (0x0000f609) uni_indicator_pane_g

0x247c,	// (0x0000247c) navi_icon_pane_ParamLimits

0x247c,	// (0x0000247c) navi_icon_pane

0x23c3,	// (0x000023c3) navi_midp_pane

0x2498,	// (0x00002498) navi_navi_pane

0x24a2,	// (0x000024a2) navi_text_pane_ParamLimits

0x24a2,	// (0x000024a2) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09eb,	// (0x000009eb) status_small_wait_pane_g2

0x0001,

0xab9b,	// (0x0000ab9b) status_small_wait_pane_g

0xd08d,	// (0x0000d08d) navi_navi_icon_text_pane

0xd095,	// (0x0000d095) navi_navi_pane_g1_ParamLimits

0xd095,	// (0x0000d095) navi_navi_pane_g1

0xd0a7,	// (0x0000d0a7) navi_navi_pane_g2_ParamLimits

0xd0a7,	// (0x0000d0a7) navi_navi_pane_g2

0x0001,

0xf604,	// (0x0000f604) navi_navi_pane_g_ParamLimits

0xf604,	// (0x0000f604) navi_navi_pane_g

0x4930,	// (0x00004930) navi_navi_tabs_pane

0xd0b9,	// (0x0000d0b9) navi_navi_text_pane

0xd08d,	// (0x0000d08d) navi_navi_volume_pane

0xd07b,	// (0x0000d07b) navi_text_pane_t1

0xd06f,	// (0x0000d06f) navi_icon_pane_g1

0x4821,	// (0x00004821) navi_navi_text_pane_t1

0xd05e,	// (0x0000d05e) navi_navi_volume_pane_g1

0xd066,	// (0x0000d066) volume_small_pane

0xcfba,	// (0x0000cfba) navi_navi_icon_text_pane_g1

0xcfc2,	// (0x0000cfc2) navi_navi_icon_text_pane_t1

0x2498,	// (0x00002498) navi_tabs_2_long_pane

0x2498,	// (0x00002498) navi_tabs_2_pane

0x2498,	// (0x00002498) navi_tabs_3_long_pane

0x2498,	// (0x00002498) navi_tabs_3_pane

0x2498,	// (0x00002498) navi_tabs_4_pane

0xcf9a,	// (0x0000cf9a) tabs_2_active_pane_ParamLimits

0xcf9a,	// (0x0000cf9a) tabs_2_active_pane

0xcfaa,	// (0x0000cfaa) tabs_2_passive_pane_ParamLimits

0xcfaa,	// (0x0000cfaa) tabs_2_passive_pane

0xcf68,	// (0x0000cf68) tabs_3_active_pane_ParamLimits

0xcf68,	// (0x0000cf68) tabs_3_active_pane

0xcf78,	// (0x0000cf78) tabs_3_passive_pane_ParamLimits

0xcf78,	// (0x0000cf78) tabs_3_passive_pane

0xcf89,	// (0x0000cf89) tabs_3_passive_pane_cp_ParamLimits

0xcf89,	// (0x0000cf89) tabs_3_passive_pane_cp

0xcf24,	// (0x0000cf24) tabs_4_active_pane_ParamLimits

0xcf24,	// (0x0000cf24) tabs_4_active_pane

0xcf35,	// (0x0000cf35) tabs_4_passive_pane_ParamLimits

0xcf35,	// (0x0000cf35) tabs_4_passive_pane

0xcf46,	// (0x0000cf46) tabs_4_passive_pane_cp_ParamLimits

0xcf46,	// (0x0000cf46) tabs_4_passive_pane_cp

0xcf57,	// (0x0000cf57) tabs_4_passive_pane_cp2_ParamLimits

0xcf57,	// (0x0000cf57) tabs_4_passive_pane_cp2

0xcf00,	// (0x0000cf00) tabs_2_long_active_pane_ParamLimits

0xcf00,	// (0x0000cf00) tabs_2_long_active_pane

0xcf12,	// (0x0000cf12) tabs_2_long_passive_pane_ParamLimits

0xcf12,	// (0x0000cf12) tabs_2_long_passive_pane

0xceb5,	// (0x0000ceb5) tabs_3_long_active_pane_ParamLimits

0xceb5,	// (0x0000ceb5) tabs_3_long_active_pane

0xcece,	// (0x0000cece) tabs_3_long_passive_pane_ParamLimits

0xcece,	// (0x0000cece) tabs_3_long_passive_pane

0xcee7,	// (0x0000cee7) tabs_3_long_passive_pane_cp_ParamLimits

0xcee7,	// (0x0000cee7) tabs_3_long_passive_pane_cp

0x459a,	// (0x0000459a) volume_small_pane_g1

0xce64,	// (0x0000ce64) volume_small_pane_g2

0xce6d,	// (0x0000ce6d) volume_small_pane_g3

0xce76,	// (0x0000ce76) volume_small_pane_g4

0xce7f,	// (0x0000ce7f) volume_small_pane_g5

0xce88,	// (0x0000ce88) volume_small_pane_g6

0xce91,	// (0x0000ce91) volume_small_pane_g7

0xce9a,	// (0x0000ce9a) volume_small_pane_g8

0xcea3,	// (0x0000cea3) volume_small_pane_g9

0xceac,	// (0x0000ceac) volume_small_pane_g10

0x0009,

0xf5da,	// (0x0000f5da) volume_small_pane_g

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp2

0xb3d6,	// (0x0000b3d6) tabs_3_active_pane_g1

0xb3de,	// (0x0000b3de) tabs_3_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp2_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp2

0xb3d6,	// (0x0000b3d6) tabs_3_passive_pane_g1

0xb3de,	// (0x0000b3de) tabs_3_passive_pane_t1

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp3

0xb3f0,	// (0x0000b3f0) tabs_4_active_pane_g1

0xb3f8,	// (0x0000b3f8) tabs_4_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp3_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp3

0xb3f0,	// (0x0000b3f0) tabs_4_1_passive_pane_g1

0xb3f8,	// (0x0000b3f8) tabs_4_1_passive_pane_t1

0x2b9e,	// (0x00002b9e) list_highlight_pane_cp2

0xd1e8,	// (0x0000d1e8) list_set_pane_ParamLimits

0xd1e8,	// (0x0000d1e8) list_set_pane

0xd2b0,	// (0x0000d2b0) main_pane_set_t1_ParamLimits

0xd2b0,	// (0x0000d2b0) main_pane_set_t1

0xd2d0,	// (0x0000d2d0) main_pane_set_t2_ParamLimits

0xd2d0,	// (0x0000d2d0) main_pane_set_t2

0xd2e4,	// (0x0000d2e4) main_pane_set_t3_ParamLimits

0xd2e4,	// (0x0000d2e4) main_pane_set_t3

0xd2f8,	// (0x0000d2f8) main_pane_set_t4_ParamLimits

0xd2f8,	// (0x0000d2f8) main_pane_set_t4

0x0003,

0xf61b,	// (0x0000f61b) main_pane_set_t_ParamLimits

0xf61b,	// (0x0000f61b) main_pane_set_t

0xd30c,	// (0x0000d30c) setting_code_pane

0x50be,	// (0x000050be) setting_slider_graphic_pane

0x50be,	// (0x000050be) setting_slider_pane

0x50be,	// (0x000050be) setting_text_pane

0x50be,	// (0x000050be) setting_volume_pane

0x0551,	// (0x00000551) volume_set_pane

0x050f,	// (0x0000050f) bg_set_opt_pane_cp

0x055b,	// (0x0000055b) setting_slider_pane_t1

0x0571,	// (0x00000571) setting_slider_pane_t2

0x058b,	// (0x0000058b) setting_slider_pane_t3

0x0002,

0xa7f4,	// (0x0000a7f4) setting_slider_pane_t

0x05a3,	// (0x000005a3) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b9,	// (0x000005b9) setting_slider_graphic_pane_g1

0x05c2,	// (0x000005c2) setting_slider_graphic_pane_t1

0x05d2,	// (0x000005d2) setting_slider_graphic_pane_t2

0x0001,

0xa7fb,	// (0x0000a7fb) setting_slider_graphic_pane_t

0x05e2,	// (0x000005e2) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f45,	// (0x00004f45) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05ea,	// (0x000005ea) setting_code_pane_t1

0x05f8,	// (0x000005f8) set_text_pane_t1_ParamLimits

0x05f8,	// (0x000005f8) set_text_pane_t1

0x1517,	// (0x00001517) set_opt_bg_pane_g1

0x151f,	// (0x0000151f) set_opt_bg_pane_g2

0x4f1d,	// (0x00004f1d) set_opt_bg_pane_g3

0x152f,	// (0x0000152f) set_opt_bg_pane_g4

0x1537,	// (0x00001537) set_opt_bg_pane_g5

0x153f,	// (0x0000153f) set_opt_bg_pane_g6

0x4f27,	// (0x00004f27) set_opt_bg_pane_g7

0x4f31,	// (0x00004f31) set_opt_bg_pane_g8

0x4f3b,	// (0x00004f3b) set_opt_bg_pane_g9

0x0008,

0xabf2,	// (0x0000abf2) set_opt_bg_pane_g

0x4eac,	// (0x00004eac) slider_set_pane_g1

0x4eb9,	// (0x00004eb9) slider_set_pane_g2

0x0006,

0xabe3,	// (0x0000abe3) slider_set_pane_g

0x4d14,	// (0x00004d14) volume_set_pane_g1

0x4d1e,	// (0x00004d1e) volume_set_pane_g2

0x4d28,	// (0x00004d28) volume_set_pane_g3

0x4d32,	// (0x00004d32) volume_set_pane_g4

0x4d3c,	// (0x00004d3c) volume_set_pane_g5

0x4d46,	// (0x00004d46) volume_set_pane_g6

0x4d50,	// (0x00004d50) volume_set_pane_g7

0x4d5a,	// (0x00004d5a) volume_set_pane_g8

0x4d64,	// (0x00004d64) volume_set_pane_g9

0x4d6e,	// (0x00004d6e) volume_set_pane_g10

0x0009,

0xabbb,	// (0x0000abbb) volume_set_pane_g

0xb40a,	// (0x0000b40a) indicator_pane_ParamLimits

0xb40a,	// (0x0000b40a) indicator_pane

0xb436,	// (0x0000b436) main_idle_pane_g2_ParamLimits

0xb436,	// (0x0000b436) main_idle_pane_g2

0xb46e,	// (0x0000b46e) main_pane_idle_g1_ParamLimits

0xb46e,	// (0x0000b46e) main_pane_idle_g1

0x0654,	// (0x00000654) popup_clock_digital_analogue_window_ParamLimits

0x0654,	// (0x00000654) popup_clock_digital_analogue_window

0xb49c,	// (0x0000b49c) soft_indicator_pane_ParamLimits

0xb49c,	// (0x0000b49c) soft_indicator_pane

0xb4b8,	// (0x0000b4b8) wallpaper_pane_ParamLimits

0xb4b8,	// (0x0000b4b8) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb4ca,	// (0x0000b4ca) indicator_pane_g1_ParamLimits

0xb4ca,	// (0x0000b4ca) indicator_pane_g1

0x547e,	// (0x0000547e) navi_navi_icon_text_pane_srt_g1

0x06a8,	// (0x000006a8) soft_indicator_pane_t1

0x06c2,	// (0x000006c2) aid_ps_area_pane

0xb4e3,	// (0x0000b4e3) aid_ps_clock_pane

0x06e1,	// (0x000006e1) aid_ps_indicator_pane

0x06ed,	// (0x000006ed) indicator_ps_pane_ParamLimits

0x06ed,	// (0x000006ed) indicator_ps_pane

0x06fc,	// (0x000006fc) power_save_pane_g1_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_g1

0x0708,	// (0x00000708) power_save_pane_g2_ParamLimits

0x0708,	// (0x00000708) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06c2,	// (0x000006c2) aid_ps_area_pane_ParamLimits

0x0001,

0xa800,	// (0x0000a800) power_save_pane_g_ParamLimits

0xa800,	// (0x0000a800) power_save_pane_g

0x0716,	// (0x00000716) power_save_pane_t1_ParamLimits

0x0716,	// (0x00000716) power_save_pane_t1

0xb4e3,	// (0x0000b4e3) aid_ps_clock_pane_ParamLimits

0x06e1,	// (0x000006e1) aid_ps_indicator_pane_ParamLimits

0x0728,	// (0x00000728) power_save_pane_t4_ParamLimits

0x0728,	// (0x00000728) power_save_pane_t4

0x0001,

0xa805,	// (0x0000a805) power_save_pane_t_ParamLimits

0xa805,	// (0x0000a805) power_save_pane_t

0x0752,	// (0x00000752) power_save_t3_ParamLimits

0x0752,	// (0x00000752) power_save_t3

0x073d,	// (0x0000073d) power_save_t2_ParamLimits

0x073d,	// (0x0000073d) power_save_t2

0x0767,	// (0x00000767) indicator_ps_pane_g1

0xb4f1,	// (0x0000b4f1) ai_gene_pane_ParamLimits

0xb4f1,	// (0x0000b4f1) ai_gene_pane

0xb508,	// (0x0000b508) ai_links_pane_ParamLimits

0xb508,	// (0x0000b508) ai_links_pane

0xb520,	// (0x0000b520) indicator_pane_cp1_ParamLimits

0xb520,	// (0x0000b520) indicator_pane_cp1

0xb52f,	// (0x0000b52f) main_pane_idle_g1_cp_ParamLimits

0xb52f,	// (0x0000b52f) main_pane_idle_g1_cp

0x07a0,	// (0x000007a0) popup_ai_links_title_window

0xb547,	// (0x0000b547) soft_indicator_pane_cp1_ParamLimits

0xb547,	// (0x0000b547) soft_indicator_pane_cp1

0x4bdf,	// (0x00004bdf) ai_links_pane_g1

0x4be8,	// (0x00004be8) grid_ai_links_pane

0xd0e5,	// (0x0000d0e5) ai_gene_pane_1

0x4bcd,	// (0x00004bcd) ai_gene_pane_2

0x4bd6,	// (0x00004bd6) list_highlight_pane_cp4

0xd0c1,	// (0x0000d0c1) cell_ai_link_pane_ParamLimits

0xd0c1,	// (0x0000d0c1) cell_ai_link_pane

0x4b9c,	// (0x00004b9c) cell_ai_link_pane_g1

0x09eb,	// (0x000009eb) cell_ai_link_pane_g2

0x0001,

0xab96,	// (0x0000ab96) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07c3,	// (0x000007c3) popup_ai_links_title_window_t1

0x4ae8,	// (0x00004ae8) ai_gene_pane_1_g1_ParamLimits

0x4ae8,	// (0x00004ae8) ai_gene_pane_1_g1

0x4af4,	// (0x00004af4) ai_gene_pane_1_g2_ParamLimits

0x4af4,	// (0x00004af4) ai_gene_pane_1_g2

0x0001,

0xab8c,	// (0x0000ab8c) ai_gene_pane_1_g_ParamLimits

0xab8c,	// (0x0000ab8c) ai_gene_pane_1_g

0x4b01,	// (0x00004b01) ai_gene_pane_1_t1_ParamLimits

0x4b01,	// (0x00004b01) ai_gene_pane_1_t1

0x4b35,	// (0x00004b35) grid_ai_soft_ind_pane

0x4ad3,	// (0x00004ad3) ai_gene_pane_2_t1_ParamLimits

0x4ad3,	// (0x00004ad3) ai_gene_pane_2_t1

0xb55b,	// (0x0000b55b) main_pane_empty_t1_ParamLimits

0xb55b,	// (0x0000b55b) main_pane_empty_t1

0xb573,	// (0x0000b573) main_pane_empty_t2_ParamLimits

0xb573,	// (0x0000b573) main_pane_empty_t2

0xb588,	// (0x0000b588) main_pane_empty_t3_ParamLimits

0xb588,	// (0x0000b588) main_pane_empty_t3

0xb59a,	// (0x0000b59a) main_pane_empty_t4_ParamLimits

0xb59a,	// (0x0000b59a) main_pane_empty_t4

0xb5ac,	// (0x0000b5ac) main_pane_empty_t5_ParamLimits

0xb5ac,	// (0x0000b5ac) main_pane_empty_t5

0x0004,

0xf4a8,	// (0x0000f4a8) main_pane_empty_t_ParamLimits

0xf4a8,	// (0x0000f4a8) main_pane_empty_t

0x15f5,	// (0x000015f5) bg_popup_window_pane_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_window_pane

0x482f,	// (0x0000482f) find_popup_pane_cp2_ParamLimits

0x482f,	// (0x0000482f) find_popup_pane_cp2

0x483b,	// (0x0000483b) heading_pane_ParamLimits

0x483b,	// (0x0000483b) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcfdf,	// (0x0000cfdf) bg_popup_window_pane_g1_ParamLimits

0xcfdf,	// (0x0000cfdf) bg_popup_window_pane_g1

0xcfee,	// (0x0000cfee) bg_popup_window_pane_g2_ParamLimits

0xcfee,	// (0x0000cfee) bg_popup_window_pane_g2

0xcffa,	// (0x0000cffa) bg_popup_window_pane_g3_ParamLimits

0xcffa,	// (0x0000cffa) bg_popup_window_pane_g3

0xd006,	// (0x0000d006) bg_popup_window_pane_g4_ParamLimits

0xd006,	// (0x0000d006) bg_popup_window_pane_g4

0xd015,	// (0x0000d015) bg_popup_window_pane_g5_ParamLimits

0xd015,	// (0x0000d015) bg_popup_window_pane_g5

0xd025,	// (0x0000d025) bg_popup_window_pane_g6_ParamLimits

0xd025,	// (0x0000d025) bg_popup_window_pane_g6

0xd031,	// (0x0000d031) bg_popup_window_pane_g7_ParamLimits

0xd031,	// (0x0000d031) bg_popup_window_pane_g7

0xd040,	// (0x0000d040) bg_popup_window_pane_g8_ParamLimits

0xd040,	// (0x0000d040) bg_popup_window_pane_g8

0xd04f,	// (0x0000d04f) bg_popup_window_pane_g9_ParamLimits

0xd04f,	// (0x0000d04f) bg_popup_window_pane_g9

0x4804,	// (0x00004804) bg_popup_window_pane_g10_ParamLimits

0x4804,	// (0x00004804) bg_popup_window_pane_g10

0x0009,

0xf5ef,	// (0x0000f5ef) bg_popup_window_pane_g_ParamLimits

0xf5ef,	// (0x0000f5ef) bg_popup_window_pane_g

0x472d,	// (0x0000472d) bg_popup_heading_pane_ParamLimits

0x472d,	// (0x0000472d) bg_popup_heading_pane

0x53c1,	// (0x000053c1) tabs_4_passive_pane_cp_srt_ParamLimits

0x53c1,	// (0x000053c1) tabs_4_passive_pane_cp_srt

0x53d3,	// (0x000053d3) tabs_4_passive_pane_srt_ParamLimits

0x4741,	// (0x00004741) heading_pane_g2

0x53d3,	// (0x000053d3) tabs_4_passive_pane_srt

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp3_srt_ParamLimits

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp3_srt

0x4749,	// (0x00004749) heading_pane_t1_ParamLimits

0x4749,	// (0x00004749) heading_pane_t1

0x4760,	// (0x00004760) heading_pane_t2_ParamLimits

0x4760,	// (0x00004760) heading_pane_t2

0x0001,

0xab4f,	// (0x0000ab4f) heading_pane_t_ParamLimits

0xab4f,	// (0x0000ab4f) heading_pane_t

0x40fd,	// (0x000040fd) bg_popup_heading_pane_g1

0x41ac,	// (0x000041ac) bg_popup_heading_pane_g2

0x41b6,	// (0x000041b6) bg_popup_heading_pane_g3

0x41c0,	// (0x000041c0) bg_popup_heading_pane_g4

0x41ca,	// (0x000041ca) bg_popup_heading_pane_g5

0x41d4,	// (0x000041d4) bg_popup_heading_pane_g6

0x41dc,	// (0x000041dc) bg_popup_heading_pane_g7

0x41e4,	// (0x000041e4) bg_popup_heading_pane_g8

0x41ee,	// (0x000041ee) bg_popup_heading_pane_g9

0x0008,

0xab0b,	// (0x0000ab0b) bg_popup_heading_pane_g

0x3788,	// (0x00003788) bg_popup_sub_pane_g1

0x3790,	// (0x00003790) bg_popup_sub_pane_g2

0x3798,	// (0x00003798) bg_popup_sub_pane_g3

0x37a0,	// (0x000037a0) bg_popup_sub_pane_g4

0x37a8,	// (0x000037a8) bg_popup_sub_pane_g5

0x37b0,	// (0x000037b0) bg_popup_sub_pane_g6

0x37b8,	// (0x000037b8) bg_popup_sub_pane_g7

0x37c0,	// (0x000037c0) bg_popup_sub_pane_g8

0x37c8,	// (0x000037c8) bg_popup_sub_pane_g9

0x0008,

0xaae5,	// (0x0000aae5) bg_popup_sub_pane_g

0x0835,	// (0x00000835) bg_popup_window_pane_cp5_ParamLimits

0x0835,	// (0x00000835) bg_popup_window_pane_cp5

0x0851,	// (0x00000851) popup_note_window_g1_ParamLimits

0x0851,	// (0x00000851) popup_note_window_g1

0x085d,	// (0x0000085d) popup_note_window_t1_ParamLimits

0x085d,	// (0x0000085d) popup_note_window_t1

0x0873,	// (0x00000873) popup_note_window_t2_ParamLimits

0x0873,	// (0x00000873) popup_note_window_t2

0x0889,	// (0x00000889) popup_note_window_t3_ParamLimits

0x0889,	// (0x00000889) popup_note_window_t3

0x089f,	// (0x0000089f) popup_note_window_t4_ParamLimits

0x089f,	// (0x0000089f) popup_note_window_t4

0x08c7,	// (0x000008c7) popup_note_window_t5_ParamLimits

0x08c7,	// (0x000008c7) popup_note_window_t5

0x0004,

0xa815,	// (0x0000a815) popup_note_window_t_ParamLimits

0xa815,	// (0x0000a815) popup_note_window_t

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp6_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp6

0x4079,	// (0x00004079) popup_note_image_window_g1_ParamLimits

0x4079,	// (0x00004079) popup_note_image_window_g1

0x4085,	// (0x00004085) popup_note_image_window_g2_ParamLimits

0x4085,	// (0x00004085) popup_note_image_window_g2

0x0001,

0xaad9,	// (0x0000aad9) popup_note_image_window_g_ParamLimits

0xaad9,	// (0x0000aad9) popup_note_image_window_g

0x409e,	// (0x0000409e) popup_note_image_window_t1_ParamLimits

0x409e,	// (0x0000409e) popup_note_image_window_t1

0x40b7,	// (0x000040b7) popup_note_image_window_t2_ParamLimits

0x40b7,	// (0x000040b7) popup_note_image_window_t2

0x40d0,	// (0x000040d0) popup_note_image_window_t3_ParamLimits

0x40d0,	// (0x000040d0) popup_note_image_window_t3

0x0002,

0xaade,	// (0x0000aade) popup_note_image_window_t_ParamLimits

0xaade,	// (0x0000aade) popup_note_image_window_t

0x3f39,	// (0x00003f39) bg_popup_window_pane_cp7_ParamLimits

0x3f39,	// (0x00003f39) bg_popup_window_pane_cp7

0x3f69,	// (0x00003f69) popup_note_wait_window_g1_ParamLimits

0x3f69,	// (0x00003f69) popup_note_wait_window_g1

0x3f75,	// (0x00003f75) popup_note_wait_window_g2_ParamLimits

0x3f75,	// (0x00003f75) popup_note_wait_window_g2

0x0002,

0xaac7,	// (0x0000aac7) popup_note_wait_window_g_ParamLimits

0xaac7,	// (0x0000aac7) popup_note_wait_window_g

0x3f8d,	// (0x00003f8d) popup_note_wait_window_t1_ParamLimits

0x3f8d,	// (0x00003f8d) popup_note_wait_window_t1

0x3fb4,	// (0x00003fb4) popup_note_wait_window_t2_ParamLimits

0x3fb4,	// (0x00003fb4) popup_note_wait_window_t2

0x3fd2,	// (0x00003fd2) popup_note_wait_window_t3_ParamLimits

0x3fd2,	// (0x00003fd2) popup_note_wait_window_t3

0x3fe5,	// (0x00003fe5) popup_note_wait_window_t4_ParamLimits

0x3fe5,	// (0x00003fe5) popup_note_wait_window_t4

0x0004,

0xaace,	// (0x0000aace) popup_note_wait_window_t_ParamLimits

0xaace,	// (0x0000aace) popup_note_wait_window_t

0x400a,	// (0x0000400a) wait_bar_pane_ParamLimits

0x400a,	// (0x0000400a) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa994,	// (0x0000a994) wait_anim_pane_g

0x3edd,	// (0x00003edd) wait_border_pane_g1

0x3ee8,	// (0x00003ee8) wait_border_pane_g2

0x3ef1,	// (0x00003ef1) wait_border_pane_g3

0x0002,

0xaac0,	// (0x0000aac0) wait_border_pane_g

0x3e39,	// (0x00003e39) bg_popup_window_pane_cp16_ParamLimits

0x3e39,	// (0x00003e39) bg_popup_window_pane_cp16

0x3e47,	// (0x00003e47) indicator_popup_pane_cp4_ParamLimits

0x3e47,	// (0x00003e47) indicator_popup_pane_cp4

0x3e5b,	// (0x00003e5b) popup_query_data_window_t1_ParamLimits

0x3e5b,	// (0x00003e5b) popup_query_data_window_t1

0x3e6d,	// (0x00003e6d) popup_query_data_window_t2_ParamLimits

0x3e6d,	// (0x00003e6d) popup_query_data_window_t2

0x3e86,	// (0x00003e86) popup_query_data_window_t3_ParamLimits

0x3e86,	// (0x00003e86) popup_query_data_window_t3

0x0002,

0xaab9,	// (0x0000aab9) popup_query_data_window_t_ParamLimits

0xaab9,	// (0x0000aab9) popup_query_data_window_t

0x3ea0,	// (0x00003ea0) query_popup_data_pane_ParamLimits

0x3ea0,	// (0x00003ea0) query_popup_data_pane

0x3eb4,	// (0x00003eb4) query_popup_data_pane_cp1_ParamLimits

0x3eb4,	// (0x00003eb4) query_popup_data_pane_cp1

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp10_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp10

0x3d9c,	// (0x00003d9c) indicator_popup_pane_ParamLimits

0x3d9c,	// (0x00003d9c) indicator_popup_pane

0x094c,	// (0x0000094c) popup_query_code_window_t1_ParamLimits

0x094c,	// (0x0000094c) popup_query_code_window_t1

0x3db4,	// (0x00003db4) popup_query_code_window_t2_ParamLimits

0x3db4,	// (0x00003db4) popup_query_code_window_t2

0x3df2,	// (0x00003df2) popup_query_code_window_t3_ParamLimits

0x3df2,	// (0x00003df2) popup_query_code_window_t3

0x0002,

0xaab2,	// (0x0000aab2) popup_query_code_window_t_ParamLimits

0xaab2,	// (0x0000aab2) popup_query_code_window_t

0x3e21,	// (0x00003e21) query_popup_pane_ParamLimits

0x3e21,	// (0x00003e21) query_popup_pane

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp15_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_window_pane_cp15

0x090b,	// (0x0000090b) indicator_popup_pane_cp1_ParamLimits

0x090b,	// (0x0000090b) indicator_popup_pane_cp1

0x091e,	// (0x0000091e) indicator_popup_pane_cp2_ParamLimits

0x091e,	// (0x0000091e) indicator_popup_pane_cp2

0x0939,	// (0x00000939) popup_query_data_code_window_g1_ParamLimits

0x0939,	// (0x00000939) popup_query_data_code_window_g1

0x094c,	// (0x0000094c) popup_query_data_code_window_t1_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t1

0x095e,	// (0x0000095e) popup_query_data_code_window_t2_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t2

0x0970,	// (0x00000970) popup_query_data_code_window_t3_ParamLimits

0x0970,	// (0x00000970) popup_query_data_code_window_t3

0x0986,	// (0x00000986) popup_query_data_code_window_t4_ParamLimits

0x0986,	// (0x00000986) popup_query_data_code_window_t4

0x0003,

0xa820,	// (0x0000a820) popup_query_data_code_window_t_ParamLimits

0xa820,	// (0x0000a820) popup_query_data_code_window_t

0x2438,	// (0x00002438) list_single_midp_graphic_pane_g3

0x09a0,	// (0x000009a0) query_popup_data_pane_cp2_ParamLimits

0x09b3,	// (0x000009b3) query_popup_pane_cp2_ParamLimits

0x09b3,	// (0x000009b3) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d70,	// (0x00003d70) heading_pane_cp5

0x0aa3,	// (0x00000aa3) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09ce,	// (0x000009ce) query_popup_pane_t1

0x09dc,	// (0x000009dc) list_popup_info_pane_ParamLimits

0x09dc,	// (0x000009dc) list_popup_info_pane

0x09eb,	// (0x000009eb) listscroll_popup_info_pane_g1

0x09f3,	// (0x000009f3) scroll_pane_cp7

0x09fd,	// (0x000009fd) popup_info_list_pane_t1_ParamLimits

0x09fd,	// (0x000009fd) popup_info_list_pane_t1

0x0a17,	// (0x00000a17) popup_info_list_pane_t2_ParamLimits

0x0a17,	// (0x00000a17) popup_info_list_pane_t2

0x0001,

0xa829,	// (0x0000a829) popup_info_list_pane_t_ParamLimits

0xa829,	// (0x0000a829) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x54b5,	// (0x000054b5) find_popup_pane

0x050f,	// (0x0000050f) bg_popup_window_pane_cp3

0x0a31,	// (0x00000a31) heading_pane_cp3

0x0a3d,	// (0x00000a3d) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb60e,	// (0x0000b60e) heading_pane_cp4

0x0aa3,	// (0x00000aa3) listscroll_popup_colour_pane

0xb618,	// (0x0000b618) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb618,	// (0x0000b618) cell_large_graphic_colour_none_popup_pane

0xb62c,	// (0x0000b62c) grid_large_graphic_colour_popup_pane_ParamLimits

0xb62c,	// (0x0000b62c) grid_large_graphic_colour_popup_pane

0xb658,	// (0x0000b658) listscroll_popup_colour_pane_g1_ParamLimits

0xb658,	// (0x0000b658) listscroll_popup_colour_pane_g1

0xb66f,	// (0x0000b66f) listscroll_popup_colour_pane_g2_ParamLimits

0xb66f,	// (0x0000b66f) listscroll_popup_colour_pane_g2

0xb686,	// (0x0000b686) listscroll_popup_colour_pane_g3_ParamLimits

0xb686,	// (0x0000b686) listscroll_popup_colour_pane_g3

0xb696,	// (0x0000b696) listscroll_popup_colour_pane_g4_ParamLimits

0xb696,	// (0x0000b696) listscroll_popup_colour_pane_g4

0x0003,

0xf4b3,	// (0x0000f4b3) listscroll_popup_colour_pane_g_ParamLimits

0xf4b3,	// (0x0000f4b3) listscroll_popup_colour_pane_g

0x0b3d,	// (0x00000b3d) scroll_pane_cp6_ParamLimits

0x0b3d,	// (0x00000b3d) scroll_pane_cp6

0xb6aa,	// (0x0000b6aa) cell_large_graphic_colour_popup_pane_ParamLimits

0xb6aa,	// (0x0000b6aa) cell_large_graphic_colour_popup_pane

0x0b74,	// (0x00000b74) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b83,	// (0x00000b83) cell_large_graphic_colour_popup_pane_g1

0x0b8b,	// (0x00000b8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa837,	// (0x0000a837) cell_large_graphic_colour_popup_pane_g

0x0b93,	// (0x00000b93) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp4

0x0ba4,	// (0x00000ba4) bg_popup_window_pane_cp8_ParamLimits

0x0ba4,	// (0x00000ba4) bg_popup_window_pane_cp8

0x0bbf,	// (0x00000bbf) popup_snote_single_text_window_g1_ParamLimits

0x0bbf,	// (0x00000bbf) popup_snote_single_text_window_g1

0x0bd1,	// (0x00000bd1) popup_snote_single_text_window_t1_ParamLimits

0x0bd1,	// (0x00000bd1) popup_snote_single_text_window_t1

0x0be4,	// (0x00000be4) popup_snote_single_text_window_t2_ParamLimits

0x0be4,	// (0x00000be4) popup_snote_single_text_window_t2

0x0bf7,	// (0x00000bf7) popup_snote_single_text_window_t3_ParamLimits

0x0bf7,	// (0x00000bf7) popup_snote_single_text_window_t3

0x0c30,	// (0x00000c30) popup_snote_single_text_window_t4_ParamLimits

0x0c30,	// (0x00000c30) popup_snote_single_text_window_t4

0x0c64,	// (0x00000c64) popup_snote_single_text_window_t5_ParamLimits

0x0c64,	// (0x00000c64) popup_snote_single_text_window_t5

0x0004,

0xa83c,	// (0x0000a83c) popup_snote_single_text_window_t_ParamLimits

0xa83c,	// (0x0000a83c) popup_snote_single_text_window_t

0x0c93,	// (0x00000c93) bg_popup_window_pane_cp9_ParamLimits

0x0c93,	// (0x00000c93) bg_popup_window_pane_cp9

0x0bbf,	// (0x00000bbf) popup_snote_single_graphic_window_g1_ParamLimits

0x0bbf,	// (0x00000bbf) popup_snote_single_graphic_window_g1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_g2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_g2

0x0001,

0xa847,	// (0x0000a847) popup_snote_single_graphic_window_g_ParamLimits

0xa847,	// (0x0000a847) popup_snote_single_graphic_window_g

0x0cad,	// (0x00000cad) popup_snote_single_graphic_window_t1_ParamLimits

0x0cad,	// (0x00000cad) popup_snote_single_graphic_window_t1

0x0cc0,	// (0x00000cc0) popup_snote_single_graphic_window_t2_ParamLimits

0x0cc0,	// (0x00000cc0) popup_snote_single_graphic_window_t2

0x0cd3,	// (0x00000cd3) popup_snote_single_graphic_window_t3_ParamLimits

0x0cd3,	// (0x00000cd3) popup_snote_single_graphic_window_t3

0x0d0c,	// (0x00000d0c) popup_snote_single_graphic_window_t4_ParamLimits

0x0d0c,	// (0x00000d0c) popup_snote_single_graphic_window_t4

0x0d40,	// (0x00000d40) popup_snote_single_graphic_window_t5_ParamLimits

0x0d40,	// (0x00000d40) popup_snote_single_graphic_window_t5

0x0004,

0xa84c,	// (0x0000a84c) popup_snote_single_graphic_window_t_ParamLimits

0xa84c,	// (0x0000a84c) popup_snote_single_graphic_window_t

0x533b,	// (0x0000533b) grid_graphic_popup_pane_ParamLimits

0x533b,	// (0x0000533b) grid_graphic_popup_pane

0x5369,	// (0x00005369) listscroll_popup_graphic_pane_g1_ParamLimits

0x5369,	// (0x00005369) listscroll_popup_graphic_pane_g1

0xd44e,	// (0x0000d44e) listscroll_popup_graphic_pane_g2_ParamLimits

0xd44e,	// (0x0000d44e) listscroll_popup_graphic_pane_g2

0x0001,

0xf63e,	// (0x0000f63e) listscroll_popup_graphic_pane_g_ParamLimits

0xf63e,	// (0x0000f63e) listscroll_popup_graphic_pane_g

0x5391,	// (0x00005391) scroll_pane_cp5

0xd40e,	// (0x0000d40e) cell_graphic_popup_pane_ParamLimits

0xd40e,	// (0x0000d40e) cell_graphic_popup_pane

0x52c4,	// (0x000052c4) cell_graphic_popup_pane_g1

0x52cc,	// (0x000052cc) cell_graphic_popup_pane_g2

0x0b93,	// (0x00000b93) cell_graphic_popup_pane_g3

0x0002,

0xac28,	// (0x0000ac28) cell_graphic_popup_pane_g

0x52d5,	// (0x000052d5) cell_graphic_popup_pane_t2

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp3

0x0d81,	// (0x00000d81) list_gen_pane_ParamLimits

0x0d81,	// (0x00000d81) list_gen_pane

0x0db3,	// (0x00000db3) scroll_pane

0xd3c9,	// (0x0000d3c9) bg_list_pane_g1_ParamLimits

0xd3c9,	// (0x0000d3c9) bg_list_pane_g1

0x5241,	// (0x00005241) bg_list_pane_g2_ParamLimits

0x5241,	// (0x00005241) bg_list_pane_g2

0x5254,	// (0x00005254) bg_list_pane_g3_ParamLimits

0x5254,	// (0x00005254) bg_list_pane_g3

0x5266,	// (0x00005266) bg_list_pane_g4_ParamLimits

0x5266,	// (0x00005266) bg_list_pane_g4

0xd3e4,	// (0x0000d3e4) bg_list_pane_g5_ParamLimits

0xd3e4,	// (0x0000d3e4) bg_list_pane_g5

0x0004,

0xf633,	// (0x0000f633) bg_list_pane_g_ParamLimits

0xf633,	// (0x0000f633) bg_list_pane_g

0xd366,	// (0x0000d366) list_double2_graphic_large_graphic_pane_ParamLimits

0xd366,	// (0x0000d366) list_double2_graphic_large_graphic_pane

0xd366,	// (0x0000d366) list_double2_graphic_pane_ParamLimits

0xd366,	// (0x0000d366) list_double2_graphic_pane

0xd366,	// (0x0000d366) list_double2_large_graphic_pane_ParamLimits

0xd366,	// (0x0000d366) list_double2_large_graphic_pane

0xd366,	// (0x0000d366) list_double2_pane_ParamLimits

0xd366,	// (0x0000d366) list_double2_pane

0xd366,	// (0x0000d366) list_double_graphic_heading_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_graphic_heading_pane

0xd366,	// (0x0000d366) list_double_graphic_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_graphic_pane

0xd366,	// (0x0000d366) list_double_heading_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_heading_pane

0xd366,	// (0x0000d366) list_double_large_graphic_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_large_graphic_pane

0xd366,	// (0x0000d366) list_double_number_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_number_pane

0xd366,	// (0x0000d366) list_double_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_pane

0xd366,	// (0x0000d366) list_double_time_pane_ParamLimits

0xd366,	// (0x0000d366) list_double_time_pane

0xd366,	// (0x0000d366) list_setting_number_pane_ParamLimits

0xd366,	// (0x0000d366) list_setting_number_pane

0xd366,	// (0x0000d366) list_setting_pane_ParamLimits

0xd366,	// (0x0000d366) list_setting_pane

0xd37a,	// (0x0000d37a) list_single_2graphic_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_2graphic_pane

0xd37a,	// (0x0000d37a) list_single_graphic_heading_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_graphic_heading_pane

0xd37a,	// (0x0000d37a) list_single_graphic_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_graphic_pane

0xd37a,	// (0x0000d37a) list_single_heading_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_heading_pane

0xd37a,	// (0x0000d37a) list_single_large_graphic_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_large_graphic_pane

0xd37a,	// (0x0000d37a) list_single_number_heading_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_number_heading_pane

0xd37a,	// (0x0000d37a) list_single_number_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_number_pane

0xd37a,	// (0x0000d37a) list_single_pane_ParamLimits

0xd37a,	// (0x0000d37a) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x257f,	// (0x0000257f) list_single_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_pane_g1

0x362c,	// (0x0000362c) list_single_pane_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_pane_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_pane_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_pane_g

0x5a9d,	// (0x00005a9d) list_single_pane_t1_ParamLimits

0x5a9d,	// (0x00005a9d) list_single_pane_t1

0x257f,	// (0x0000257f) list_single_number_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_pane_g1

0x362c,	// (0x0000362c) list_single_number_pane_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_number_pane_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_number_pane_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_number_pane_g

0x3716,	// (0x00003716) list_single_number_pane_t1_ParamLimits

0x3716,	// (0x00003716) list_single_number_pane_t1

0xd184,	// (0x0000d184) list_single_number_pane_t2_ParamLimits

0xd184,	// (0x0000d184) list_single_number_pane_t2

0x0001,

0xf616,	// (0x0000f616) list_single_number_pane_t_ParamLimits

0xf616,	// (0x0000f616) list_single_number_pane_t

0x7263,	// (0x00007263) list_single_graphic_pane_g1_ParamLimits

0x7263,	// (0x00007263) list_single_graphic_pane_g1

0x257f,	// (0x0000257f) list_single_graphic_pane_g2_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_pane_g2

0x362c,	// (0x0000362c) list_single_graphic_pane_g3_ParamLimits

0x362c,	// (0x0000362c) list_single_graphic_pane_g3

0x0002,

0xf4bc,	// (0x0000f4bc) list_single_graphic_pane_g_ParamLimits

0xf4bc,	// (0x0000f4bc) list_single_graphic_pane_g

0xb6d5,	// (0x0000b6d5) list_single_graphic_pane_t1_ParamLimits

0xb6d5,	// (0x0000b6d5) list_single_graphic_pane_t1

0x257f,	// (0x0000257f) list_single_heading_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_heading_pane_g1

0x362c,	// (0x0000362c) list_single_heading_pane_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_heading_pane_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_heading_pane_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_heading_pane_g

0x5abf,	// (0x00005abf) list_single_heading_pane_t1_ParamLimits

0x5abf,	// (0x00005abf) list_single_heading_pane_t1

0xb6eb,	// (0x0000b6eb) list_single_heading_pane_t2_ParamLimits

0xb6eb,	// (0x0000b6eb) list_single_heading_pane_t2

0x0001,

0xf4c3,	// (0x0000f4c3) list_single_heading_pane_t_ParamLimits

0xf4c3,	// (0x0000f4c3) list_single_heading_pane_t

0x257f,	// (0x0000257f) list_single_number_heading_pane_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_heading_pane_g1

0x362c,	// (0x0000362c) list_single_number_heading_pane_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_number_heading_pane_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_number_heading_pane_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_number_heading_pane_g

0x5abf,	// (0x00005abf) list_single_number_heading_pane_t1_ParamLimits

0x5abf,	// (0x00005abf) list_single_number_heading_pane_t1

0xb6fd,	// (0x0000b6fd) list_single_number_heading_pane_t2_ParamLimits

0xb6fd,	// (0x0000b6fd) list_single_number_heading_pane_t2

0x5a77,	// (0x00005a77) list_single_number_heading_pane_t3_ParamLimits

0x5a77,	// (0x00005a77) list_single_number_heading_pane_t3

0x0002,

0xf4c8,	// (0x0000f4c8) list_single_number_heading_pane_t_ParamLimits

0xf4c8,	// (0x0000f4c8) list_single_number_heading_pane_t

0x3620,	// (0x00003620) list_single_graphic_heading_pane_g1_ParamLimits

0x3620,	// (0x00003620) list_single_graphic_heading_pane_g1

0xb70f,	// (0x0000b70f) list_single_graphic_heading_pane_g4_ParamLimits

0xb70f,	// (0x0000b70f) list_single_graphic_heading_pane_g4

0x362c,	// (0x0000362c) list_single_graphic_heading_pane_g5_ParamLimits

0x362c,	// (0x0000362c) list_single_graphic_heading_pane_g5

0x0002,

0xf4cf,	// (0x0000f4cf) list_single_graphic_heading_pane_g_ParamLimits

0xf4cf,	// (0x0000f4cf) list_single_graphic_heading_pane_g

0x5abf,	// (0x00005abf) list_single_graphic_heading_pane_t1_ParamLimits

0x5abf,	// (0x00005abf) list_single_graphic_heading_pane_t1

0xb720,	// (0x0000b720) list_single_graphic_heading_pane_t2_ParamLimits

0xb720,	// (0x0000b720) list_single_graphic_heading_pane_t2

0x0001,

0xf4d6,	// (0x0000f4d6) list_single_graphic_heading_pane_t_ParamLimits

0xf4d6,	// (0x0000f4d6) list_single_graphic_heading_pane_t

0x5ab3,	// (0x00005ab3) list_single_large_graphic_pane_g1_ParamLimits

0x5ab3,	// (0x00005ab3) list_single_large_graphic_pane_g1

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_ParamLimits

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2

0x362c,	// (0x0000362c) list_single_large_graphic_pane_g3_ParamLimits

0x362c,	// (0x0000362c) list_single_large_graphic_pane_g3

0x0002,

0xacb8,	// (0x0000acb8) list_single_large_graphic_pane_g_ParamLimits

0xacb8,	// (0x0000acb8) list_single_large_graphic_pane_g

0x3ee8,	// (0x00003ee8) wait_border_pane_g2_copy1

0xb732,	// (0x0000b732) list_single_large_graphic_pane_g4_cp2

0x5abf,	// (0x00005abf) list_single_large_graphic_pane_t1_ParamLimits

0x5abf,	// (0x00005abf) list_single_large_graphic_pane_t1

0xb73a,	// (0x0000b73a) list_double_pane_g1_ParamLimits

0xb73a,	// (0x0000b73a) list_double_pane_g1

0xb746,	// (0x0000b746) list_double_pane_g2_ParamLimits

0xb746,	// (0x0000b746) list_double_pane_g2

0x0001,

0xf4db,	// (0x0000f4db) list_double_pane_g_ParamLimits

0xf4db,	// (0x0000f4db) list_double_pane_g

0xb752,	// (0x0000b752) list_double_pane_t1_ParamLimits

0xb752,	// (0x0000b752) list_double_pane_t1

0xb768,	// (0x0000b768) list_double_pane_t2_ParamLimits

0xb768,	// (0x0000b768) list_double_pane_t2

0x0001,

0xf4e0,	// (0x0000f4e0) list_double_pane_t_ParamLimits

0xf4e0,	// (0x0000f4e0) list_double_pane_t

0xb77a,	// (0x0000b77a) list_double2_pane_g1_ParamLimits

0xb77a,	// (0x0000b77a) list_double2_pane_g1

0xb78b,	// (0x0000b78b) list_double2_pane_g2_ParamLimits

0xb78b,	// (0x0000b78b) list_double2_pane_g2

0x0001,

0xf4e5,	// (0x0000f4e5) list_double2_pane_g_ParamLimits

0xf4e5,	// (0x0000f4e5) list_double2_pane_g

0xb797,	// (0x0000b797) list_double2_pane_t1_ParamLimits

0xb797,	// (0x0000b797) list_double2_pane_t1

0xb7ad,	// (0x0000b7ad) list_double2_pane_t2_ParamLimits

0xb7ad,	// (0x0000b7ad) list_double2_pane_t2

0x0001,

0xf4ea,	// (0x0000f4ea) list_double2_pane_t_ParamLimits

0xf4ea,	// (0x0000f4ea) list_double2_pane_t

0xb73a,	// (0x0000b73a) list_double_number_pane_g1_ParamLimits

0xb73a,	// (0x0000b73a) list_double_number_pane_g1

0xb746,	// (0x0000b746) list_double_number_pane_g2_ParamLimits

0xb746,	// (0x0000b746) list_double_number_pane_g2

0x0001,

0xf4db,	// (0x0000f4db) list_double_number_pane_g_ParamLimits

0xf4db,	// (0x0000f4db) list_double_number_pane_g

0xb7bf,	// (0x0000b7bf) list_double_number_pane_t1_ParamLimits

0xb7bf,	// (0x0000b7bf) list_double_number_pane_t1

0xb7d1,	// (0x0000b7d1) list_double_number_pane_t2_ParamLimits

0xb7d1,	// (0x0000b7d1) list_double_number_pane_t2

0xb7e7,	// (0x0000b7e7) list_double_number_pane_t3_ParamLimits

0xb7e7,	// (0x0000b7e7) list_double_number_pane_t3

0x0002,

0xf4ef,	// (0x0000f4ef) list_double_number_pane_t_ParamLimits

0xf4ef,	// (0x0000f4ef) list_double_number_pane_t

0xb7f9,	// (0x0000b7f9) list_double_graphic_pane_g1_ParamLimits

0xb7f9,	// (0x0000b7f9) list_double_graphic_pane_g1

0xb805,	// (0x0000b805) list_double_graphic_pane_g2_ParamLimits

0xb805,	// (0x0000b805) list_double_graphic_pane_g2

0xb814,	// (0x0000b814) list_double_graphic_pane_g3_ParamLimits

0xb814,	// (0x0000b814) list_double_graphic_pane_g3

0x0003,

0xf4f6,	// (0x0000f4f6) list_double_graphic_pane_g_ParamLimits

0xf4f6,	// (0x0000f4f6) list_double_graphic_pane_g

0xb82c,	// (0x0000b82c) list_double_graphic_pane_t1_ParamLimits

0xb82c,	// (0x0000b82c) list_double_graphic_pane_t1

0xb842,	// (0x0000b842) list_double_graphic_pane_t2_ParamLimits

0xb842,	// (0x0000b842) list_double_graphic_pane_t2

0x0001,

0xf4ff,	// (0x0000f4ff) list_double_graphic_pane_t_ParamLimits

0xf4ff,	// (0x0000f4ff) list_double_graphic_pane_t

0x4564,	// (0x00004564) list_double2_graphic_pane_g1_ParamLimits

0x4564,	// (0x00004564) list_double2_graphic_pane_g1

0x242c,	// (0x0000242c) list_double2_graphic_pane_g2_ParamLimits

0x242c,	// (0x0000242c) list_double2_graphic_pane_g2

0xb78b,	// (0x0000b78b) list_double2_graphic_pane_g3_ParamLimits

0xb78b,	// (0x0000b78b) list_double2_graphic_pane_g3

0x0002,

0xf504,	// (0x0000f504) list_double2_graphic_pane_g_ParamLimits

0xf504,	// (0x0000f504) list_double2_graphic_pane_g

0xb854,	// (0x0000b854) list_double2_graphic_pane_t1_ParamLimits

0xb854,	// (0x0000b854) list_double2_graphic_pane_t1

0xb86a,	// (0x0000b86a) list_double2_graphic_pane_t2_ParamLimits

0xb86a,	// (0x0000b86a) list_double2_graphic_pane_t2

0x0001,

0xf50b,	// (0x0000f50b) list_double2_graphic_pane_t_ParamLimits

0xf50b,	// (0x0000f50b) list_double2_graphic_pane_t

0xb87c,	// (0x0000b87c) list_double_large_graphic_pane_g1_ParamLimits

0xb87c,	// (0x0000b87c) list_double_large_graphic_pane_g1

0xb8a7,	// (0x0000b8a7) list_double_large_graphic_pane_g2_ParamLimits

0xb8a7,	// (0x0000b8a7) list_double_large_graphic_pane_g2

0xb746,	// (0x0000b746) list_double_large_graphic_pane_g3_ParamLimits

0xb746,	// (0x0000b746) list_double_large_graphic_pane_g3

0xb8b8,	// (0x0000b8b8) list_double_large_graphic_pane_g4_ParamLimits

0xb8b8,	// (0x0000b8b8) list_double_large_graphic_pane_g4

0x0004,

0xf510,	// (0x0000f510) list_double_large_graphic_pane_g_ParamLimits

0xf510,	// (0x0000f510) list_double_large_graphic_pane_g

0xb8cb,	// (0x0000b8cb) list_double_large_graphic_pane_t1_ParamLimits

0xb8cb,	// (0x0000b8cb) list_double_large_graphic_pane_t1

0xb8e4,	// (0x0000b8e4) list_double_large_graphic_pane_t2_ParamLimits

0xb8e4,	// (0x0000b8e4) list_double_large_graphic_pane_t2

0x0001,

0xf51b,	// (0x0000f51b) list_double_large_graphic_pane_t_ParamLimits

0xf51b,	// (0x0000f51b) list_double_large_graphic_pane_t

0xb8f6,	// (0x0000b8f6) list_double2_large_graphic_pane_g1_ParamLimits

0xb8f6,	// (0x0000b8f6) list_double2_large_graphic_pane_g1

0xb77a,	// (0x0000b77a) list_double2_large_graphic_pane_g2_ParamLimits

0xb77a,	// (0x0000b77a) list_double2_large_graphic_pane_g2

0xb78b,	// (0x0000b78b) list_double2_large_graphic_pane_g3_ParamLimits

0xb78b,	// (0x0000b78b) list_double2_large_graphic_pane_g3

0x0002,

0xf520,	// (0x0000f520) list_double2_large_graphic_pane_g_ParamLimits

0xf520,	// (0x0000f520) list_double2_large_graphic_pane_g

0xb902,	// (0x0000b902) list_double2_large_graphic_pane_t1_ParamLimits

0xb902,	// (0x0000b902) list_double2_large_graphic_pane_t1

0xb918,	// (0x0000b918) list_double2_large_graphic_pane_t2_ParamLimits

0xb918,	// (0x0000b918) list_double2_large_graphic_pane_t2

0x0001,

0xf527,	// (0x0000f527) list_double2_large_graphic_pane_t_ParamLimits

0xf527,	// (0x0000f527) list_double2_large_graphic_pane_t

0xb92a,	// (0x0000b92a) list_double_heading_pane_g1_ParamLimits

0xb92a,	// (0x0000b92a) list_double_heading_pane_g1

0xb93b,	// (0x0000b93b) list_double_heading_pane_g2_ParamLimits

0xb93b,	// (0x0000b93b) list_double_heading_pane_g2

0x0001,

0xf52c,	// (0x0000f52c) list_double_heading_pane_g_ParamLimits

0xf52c,	// (0x0000f52c) list_double_heading_pane_g

0xb947,	// (0x0000b947) list_double_heading_pane_t1_ParamLimits

0xb947,	// (0x0000b947) list_double_heading_pane_t1

0xb95d,	// (0x0000b95d) list_double_heading_pane_t2_ParamLimits

0xb95d,	// (0x0000b95d) list_double_heading_pane_t2

0x0001,

0xf531,	// (0x0000f531) list_double_heading_pane_t_ParamLimits

0xf531,	// (0x0000f531) list_double_heading_pane_t

0x0ff8,	// (0x00000ff8) list_double_graphic_heading_pane_g1_ParamLimits

0x0ff8,	// (0x00000ff8) list_double_graphic_heading_pane_g1

0xb92a,	// (0x0000b92a) list_double_graphic_heading_pane_g2_ParamLimits

0xb92a,	// (0x0000b92a) list_double_graphic_heading_pane_g2

0xb93b,	// (0x0000b93b) list_double_graphic_heading_pane_g3_ParamLimits

0xb93b,	// (0x0000b93b) list_double_graphic_heading_pane_g3

0x0002,

0xf536,	// (0x0000f536) list_double_graphic_heading_pane_g_ParamLimits

0xf536,	// (0x0000f536) list_double_graphic_heading_pane_g

0xb96f,	// (0x0000b96f) list_double_graphic_heading_pane_t1_ParamLimits

0xb96f,	// (0x0000b96f) list_double_graphic_heading_pane_t1

0xb985,	// (0x0000b985) list_double_graphic_heading_pane_t2_ParamLimits

0xb985,	// (0x0000b985) list_double_graphic_heading_pane_t2

0x0001,

0xf53d,	// (0x0000f53d) list_double_graphic_heading_pane_t_ParamLimits

0xf53d,	// (0x0000f53d) list_double_graphic_heading_pane_t

0xb8a7,	// (0x0000b8a7) list_double_time_pane_g1_ParamLimits

0xb8a7,	// (0x0000b8a7) list_double_time_pane_g1

0xb746,	// (0x0000b746) list_double_time_pane_g2_ParamLimits

0xb746,	// (0x0000b746) list_double_time_pane_g2

0x0001,

0xf542,	// (0x0000f542) list_double_time_pane_g_ParamLimits

0xf542,	// (0x0000f542) list_double_time_pane_g

0xb997,	// (0x0000b997) list_double_time_pane_t1_ParamLimits

0xb997,	// (0x0000b997) list_double_time_pane_t1

0xb9ad,	// (0x0000b9ad) list_double_time_pane_t2_ParamLimits

0xb9ad,	// (0x0000b9ad) list_double_time_pane_t2

0xb9bf,	// (0x0000b9bf) list_double_time_pane_t3_ParamLimits

0xb9bf,	// (0x0000b9bf) list_double_time_pane_t3

0xb9d1,	// (0x0000b9d1) list_double_time_pane_t4_ParamLimits

0xb9d1,	// (0x0000b9d1) list_double_time_pane_t4

0x0003,

0xf547,	// (0x0000f547) list_double_time_pane_t_ParamLimits

0xf547,	// (0x0000f547) list_double_time_pane_t

0x242c,	// (0x0000242c) list_setting_pane_g1_ParamLimits

0x242c,	// (0x0000242c) list_setting_pane_g1

0xb78b,	// (0x0000b78b) list_setting_pane_g2_ParamLimits

0xb78b,	// (0x0000b78b) list_setting_pane_g2

0x0001,

0xf550,	// (0x0000f550) list_setting_pane_g_ParamLimits

0xf550,	// (0x0000f550) list_setting_pane_g

0xb9e3,	// (0x0000b9e3) list_setting_pane_t1_ParamLimits

0xb9e3,	// (0x0000b9e3) list_setting_pane_t1

0xb9fa,	// (0x0000b9fa) list_setting_pane_t2_ParamLimits

0xb9fa,	// (0x0000b9fa) list_setting_pane_t2

0x0002,

0xf555,	// (0x0000f555) list_setting_pane_t_ParamLimits

0xf555,	// (0x0000f555) list_setting_pane_t

0xba39,	// (0x0000ba39) set_value_pane_cp_ParamLimits

0xba39,	// (0x0000ba39) set_value_pane_cp

0x242c,	// (0x0000242c) list_setting_number_pane_g1_ParamLimits

0x242c,	// (0x0000242c) list_setting_number_pane_g1

0xb78b,	// (0x0000b78b) list_setting_number_pane_g2_ParamLimits

0xb78b,	// (0x0000b78b) list_setting_number_pane_g2

0x0001,

0xf550,	// (0x0000f550) list_setting_number_pane_g_ParamLimits

0xf550,	// (0x0000f550) list_setting_number_pane_g

0xba47,	// (0x0000ba47) list_setting_number_pane_t1_ParamLimits

0xba47,	// (0x0000ba47) list_setting_number_pane_t1

0xba5b,	// (0x0000ba5b) list_setting_number_pane_t2_ParamLimits

0xba5b,	// (0x0000ba5b) list_setting_number_pane_t2

0xba72,	// (0x0000ba72) list_setting_number_pane_t3_ParamLimits

0xba72,	// (0x0000ba72) list_setting_number_pane_t3

0x0003,

0xf55c,	// (0x0000f55c) list_setting_number_pane_t_ParamLimits

0xf55c,	// (0x0000f55c) list_setting_number_pane_t

0xba39,	// (0x0000ba39) set_value_pane_ParamLimits

0xba39,	// (0x0000ba39) set_value_pane

0x1292,	// (0x00001292) bg_set_opt_pane_ParamLimits

0x1292,	// (0x00001292) bg_set_opt_pane

0x12b3,	// (0x000012b3) set_value_pane_t1

0x12c1,	// (0x000012c1) slider_set_pane_cp3

0x12ca,	// (0x000012ca) volume_small_pane_cp

0x12d3,	// (0x000012d3) list_form_gen_pane

0x12dc,	// (0x000012dc) scroll_pane_cp8

0xbab5,	// (0x0000bab5) form_field_data_pane_ParamLimits

0xbab5,	// (0x0000bab5) form_field_data_pane

0xbad0,	// (0x0000bad0) form_field_data_wide_pane_ParamLimits

0xbad0,	// (0x0000bad0) form_field_data_wide_pane

0xbaf4,	// (0x0000baf4) form_field_popup_pane_ParamLimits

0xbaf4,	// (0x0000baf4) form_field_popup_pane

0x1364,	// (0x00001364) form_field_popup_wide_pane_ParamLimits

0x1364,	// (0x00001364) form_field_popup_wide_pane

0x1385,	// (0x00001385) form_field_slider_pane_ParamLimits

0x1385,	// (0x00001385) form_field_slider_pane

0x1398,	// (0x00001398) form_field_slider_wide_pane_ParamLimits

0x1398,	// (0x00001398) form_field_slider_wide_pane

0x13ab,	// (0x000013ab) data_form_pane

0xbb20,	// (0x0000bb20) form_field_data_pane_t1

0x13db,	// (0x000013db) input_focus_pane

0x13e9,	// (0x000013e9) data_form_wide_pane

0x1421,	// (0x00001421) form_field_data_wide_pane_t1

0x0bb1,	// (0x00000bb1) input_focus_pane_cp6

0xbb3a,	// (0x0000bb3a) form_field_popup_pane_t1

0x13db,	// (0x000013db) input_focus_pane_cp7

0x145d,	// (0x0000145d) list_form_pane

0x1471,	// (0x00001471) form_field_popup_wide_pane_t1

0x13db,	// (0x000013db) input_focus_pane_cp8

0x1486,	// (0x00001486) list_form_wide_pane

0xbb5c,	// (0x0000bb5c) form_field_slider_pane_t1_ParamLimits

0xbb5c,	// (0x0000bb5c) form_field_slider_pane_t1

0xbb74,	// (0x0000bb74) form_field_slider_pane_t2_ParamLimits

0xbb74,	// (0x0000bb74) form_field_slider_pane_t2

0x0001,

0xf565,	// (0x0000f565) form_field_slider_pane_t_ParamLimits

0xf565,	// (0x0000f565) form_field_slider_pane_t

0x0835,	// (0x00000835) input_focus_pane_cp9_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp9

0xbb89,	// (0x0000bb89) slider_cont_pane_ParamLimits

0xbb89,	// (0x0000bb89) slider_cont_pane

0x14d7,	// (0x000014d7) form_field_slider_wide_pane_t1_ParamLimits

0x14d7,	// (0x000014d7) form_field_slider_wide_pane_t1

0x14e9,	// (0x000014e9) form_field_slider_wide_pane_t2_ParamLimits

0x14e9,	// (0x000014e9) form_field_slider_wide_pane_t2

0x0001,

0xa918,	// (0x0000a918) form_field_slider_wide_pane_t_ParamLimits

0xa918,	// (0x0000a918) form_field_slider_wide_pane_t

0x0835,	// (0x00000835) input_focus_pane_cp10_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp10

0xbb9d,	// (0x0000bb9d) slider_cont_pane_cp1_ParamLimits

0xbb9d,	// (0x0000bb9d) slider_cont_pane_cp1

0xbbb1,	// (0x0000bbb1) slider_form_pane_cp

0x1517,	// (0x00001517) input_focus_pane_g1

0x151f,	// (0x0000151f) input_focus_pane_g2

0x1527,	// (0x00001527) input_focus_pane_g3

0x152f,	// (0x0000152f) input_focus_pane_g4

0x1537,	// (0x00001537) input_focus_pane_g5

0x153f,	// (0x0000153f) input_focus_pane_g6

0x1547,	// (0x00001547) input_focus_pane_g7

0x154f,	// (0x0000154f) input_focus_pane_g8

0x1557,	// (0x00001557) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xa91d,	// (0x0000a91d) input_focus_pane_g

0x3ef1,	// (0x00003ef1) wait_border_pane_g3_copy1

0xbbb9,	// (0x0000bbb9) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd33b,	// (0x0000d33b) data_form_wide_pane_t1

0x157e,	// (0x0000157e) list_form_graphic_pane_cp_ParamLimits

0x157e,	// (0x0000157e) list_form_graphic_pane_cp

0x50e6,	// (0x000050e6) slider_form_pane_g1

0x50ef,	// (0x000050ef) slider_form_pane_g2

0x0006,

0xf624,	// (0x0000f624) slider_form_pane_g

0xbbd5,	// (0x0000bbd5) list_form_graphic_pane_ParamLimits

0xbbd5,	// (0x0000bbd5) list_form_graphic_pane

0x1590,	// (0x00001590) list_form_graphic_pane_g1

0x1598,	// (0x00001598) list_form_graphic_pane_t1_ParamLimits

0x1598,	// (0x00001598) list_form_graphic_pane_t1

0x050f,	// (0x0000050f) list_highlight_pane_cp5_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp5

0xbbe6,	// (0x0000bbe6) find_pane_g1

0x15b6,	// (0x000015b6) input_find_pane

0xbbef,	// (0x0000bbef) input_find_pane_g1_ParamLimits

0xbbef,	// (0x0000bbef) input_find_pane_g1

0xbbfb,	// (0x0000bbfb) input_find_pane_t1_ParamLimits

0xbbfb,	// (0x0000bbfb) input_find_pane_t1

0xbc10,	// (0x0000bc10) input_find_pane_t2_ParamLimits

0xbc10,	// (0x0000bc10) input_find_pane_t2

0x0001,

0xf56a,	// (0x0000f56a) input_find_pane_t_ParamLimits

0xf56a,	// (0x0000f56a) input_find_pane_t

0x15f5,	// (0x000015f5) input_focus_pane_cp5_ParamLimits

0x15f5,	// (0x000015f5) input_focus_pane_cp5

0xbc31,	// (0x0000bc31) bg_popup_window_pane_cp2_ParamLimits

0xbc31,	// (0x0000bc31) bg_popup_window_pane_cp2

0xbc3e,	// (0x0000bc3e) listscroll_menu_pane_ParamLimits

0xbc3e,	// (0x0000bc3e) listscroll_menu_pane

0xbc4a,	// (0x0000bc4a) popup_submenu_window_ParamLimits

0xbc4a,	// (0x0000bc4a) popup_submenu_window

0x1658,	// (0x00001658) find_popup_pane_g1

0x1660,	// (0x00001660) input_popup_find_pane_cp

0x15f5,	// (0x000015f5) input_focus_pane_cp4_ParamLimits

0x15f5,	// (0x000015f5) input_focus_pane_cp4

0x1678,	// (0x00001678) input_popup_find_pane_t1_ParamLimits

0x1678,	// (0x00001678) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x16a6,	// (0x000016a6) listscroll_popup_sub_pane

0x16ae,	// (0x000016ae) list_submenu_pane_ParamLimits

0x16ae,	// (0x000016ae) list_submenu_pane

0x16bf,	// (0x000016bf) scroll_pane_cp4

0x16c7,	// (0x000016c7) list_single_popup_submenu_pane_ParamLimits

0x16c7,	// (0x000016c7) list_single_popup_submenu_pane

0x16dc,	// (0x000016dc) list_single_popup_submenu_pane_g1

0x16e4,	// (0x000016e4) list_single_popup_submenu_pane_t1_ParamLimits

0x16e4,	// (0x000016e4) list_single_popup_submenu_pane_t1

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp1

0xbc88,	// (0x0000bc88) tabs_2_active_pane_g1

0xbc90,	// (0x0000bc90) tabs_2_active_pane_t1

0x0835,	// (0x00000835) bg_passive_tab_pane_cp1_ParamLimits

0x0835,	// (0x00000835) bg_passive_tab_pane_cp1

0xbc88,	// (0x0000bc88) tabs_2_passive_pane_g1

0xbc90,	// (0x0000bc90) tabs_2_passive_pane_t1

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4

0xbca2,	// (0x0000bca2) tabs_2_long_active_pane_t1

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp4

0x37f5,	// (0x000037f5) list_single_midp_graphic_pane_g4_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5

0xbcb5,	// (0x0000bcb5) tabs_3_long_active_pane_t1

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp5

0x37f5,	// (0x000037f5) list_single_midp_graphic_pane_g4

0x050f,	// (0x0000050f) bg_popup_window_pane_cp13_ParamLimits

0x050f,	// (0x0000050f) bg_popup_window_pane_cp13

0x175b,	// (0x0000175b) listscroll_popup_fast_pane_ParamLimits

0x175b,	// (0x0000175b) listscroll_popup_fast_pane

0x176a,	// (0x0000176a) grid_popup_fast_pane_ParamLimits

0x176a,	// (0x0000176a) grid_popup_fast_pane

0x177c,	// (0x0000177c) scroll_pane_cp9_ParamLimits

0x177c,	// (0x0000177c) scroll_pane_cp9

0x72dd,	// (0x000072dd) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x72dd,	// (0x000072dd) list_single_graphic_hl_pane_t1_cp2

0x17a0,	// (0x000017a0) input_focus_pane_cp20_ParamLimits

0x17a0,	// (0x000017a0) input_focus_pane_cp20

0x17ae,	// (0x000017ae) query_popup_data_pane_t1_ParamLimits

0x17ae,	// (0x000017ae) query_popup_data_pane_t1

0x17c1,	// (0x000017c1) query_popup_data_pane_t2_ParamLimits

0x17c1,	// (0x000017c1) query_popup_data_pane_t2

0x1807,	// (0x00001807) query_popup_data_pane_t3_ParamLimits

0x1807,	// (0x00001807) query_popup_data_pane_t3

0x1848,	// (0x00001848) query_popup_data_pane_t4_ParamLimits

0x1848,	// (0x00001848) query_popup_data_pane_t4

0x1884,	// (0x00001884) query_popup_data_pane_t5_ParamLimits

0x1884,	// (0x00001884) query_popup_data_pane_t5

0x0004,

0xa937,	// (0x0000a937) query_popup_data_pane_t_ParamLimits

0xa937,	// (0x0000a937) query_popup_data_pane_t

0x1517,	// (0x00001517) bg_set_opt_pane_g1

0x151f,	// (0x0000151f) bg_set_opt_pane_g2

0x1527,	// (0x00001527) bg_set_opt_pane_g3

0x152f,	// (0x0000152f) bg_set_opt_pane_g4

0x1537,	// (0x00001537) bg_set_opt_pane_g5

0x153f,	// (0x0000153f) bg_set_opt_pane_g6

0x1547,	// (0x00001547) bg_set_opt_pane_g7

0x154f,	// (0x0000154f) bg_set_opt_pane_g8

0x1557,	// (0x00001557) bg_set_opt_pane_g9

0x0008,

0xa942,	// (0x0000a942) bg_set_opt_pane_g

0x215f,	// (0x0000215f) control_top_pane_stacon_ParamLimits

0x215f,	// (0x0000215f) control_top_pane_stacon

0x21b2,	// (0x000021b2) signal_pane_stacon_ParamLimits

0x21b2,	// (0x000021b2) signal_pane_stacon

0x21d7,	// (0x000021d7) stacon_top_pane_g1_ParamLimits

0x21d7,	// (0x000021d7) stacon_top_pane_g1

0x21f9,	// (0x000021f9) title_pane_stacon_ParamLimits

0x21f9,	// (0x000021f9) title_pane_stacon

0x2223,	// (0x00002223) uni_indicator_pane_stacon_ParamLimits

0x2223,	// (0x00002223) uni_indicator_pane_stacon

0x223b,	// (0x0000223b) battery_pane_stacon_ParamLimits

0x223b,	// (0x0000223b) battery_pane_stacon

0x227f,	// (0x0000227f) control_bottom_pane_stacon_ParamLimits

0x227f,	// (0x0000227f) control_bottom_pane_stacon

0x22a2,	// (0x000022a2) navi_pane_stacon_ParamLimits

0x22a2,	// (0x000022a2) navi_pane_stacon

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1_ParamLimits

0x22c5,	// (0x000022c5) stacon_bottom_pane_g1

0x18bb,	// (0x000018bb) aid_levels_signal_lsc_ParamLimits

0x18bb,	// (0x000018bb) aid_levels_signal_lsc

0x18d2,	// (0x000018d2) signal_pane_stacon_g1_ParamLimits

0x18d2,	// (0x000018d2) signal_pane_stacon_g1

0x18e6,	// (0x000018e6) signal_pane_stacon_g2_ParamLimits

0x18e6,	// (0x000018e6) signal_pane_stacon_g2

0x0001,

0xa955,	// (0x0000a955) signal_pane_stacon_g_ParamLimits

0xa955,	// (0x0000a955) signal_pane_stacon_g

0x1928,	// (0x00001928) title_pane_stacon_t1_ParamLimits

0x1928,	// (0x00001928) title_pane_stacon_t1

0x194d,	// (0x0000194d) uni_indicator_pane_stacon_g1

0x1957,	// (0x00001957) uni_indicator_pane_stacon_g2

0x1961,	// (0x00001961) uni_indicator_pane_stacon_g3

0x196b,	// (0x0000196b) uni_indicator_pane_stacon_g4

0x0003,

0xa961,	// (0x0000a961) uni_indicator_pane_stacon_g

0x1975,	// (0x00001975) control_top_pane_stacon_g1

0x197d,	// (0x0000197d) control_top_pane_stacon_t1_ParamLimits

0x197d,	// (0x0000197d) control_top_pane_stacon_t1

0x19b4,	// (0x000019b4) aid_levels_battery_lsc_ParamLimits

0x19b4,	// (0x000019b4) aid_levels_battery_lsc

0x19cc,	// (0x000019cc) battery_pane_stacon_g1_ParamLimits

0x19cc,	// (0x000019cc) battery_pane_stacon_g1

0x19df,	// (0x000019df) battery_pane_stacon_g2_ParamLimits

0x19df,	// (0x000019df) battery_pane_stacon_g2

0x0001,

0xa96a,	// (0x0000a96a) battery_pane_stacon_g_ParamLimits

0xa96a,	// (0x0000a96a) battery_pane_stacon_g

0x1a1d,	// (0x00001a1d) navi_icon_pane_stacon

0x1a31,	// (0x00001a31) navi_navi_pane_stacon

0x1a1d,	// (0x00001a1d) navi_text_pane_stacon

0x1975,	// (0x00001975) control_bottom_pane_stacon_g1

0x1a47,	// (0x00001a47) control_bottom_pane_stacon_t1_ParamLimits

0x1a47,	// (0x00001a47) control_bottom_pane_stacon_t1

0xbcc7,	// (0x0000bcc7) grid_app_pane_ParamLimits

0xbcc7,	// (0x0000bcc7) grid_app_pane

0xbcff,	// (0x0000bcff) scroll_pane_cp15_ParamLimits

0xbcff,	// (0x0000bcff) scroll_pane_cp15

0xbd1c,	// (0x0000bd1c) cell_app_pane_ParamLimits

0xbd1c,	// (0x0000bd1c) cell_app_pane

0xbd5d,	// (0x0000bd5d) cell_app_pane_g1_ParamLimits

0xbd5d,	// (0x0000bd5d) cell_app_pane_g1

0x1b21,	// (0x00001b21) cell_app_pane_g2_ParamLimits

0x1b21,	// (0x00001b21) cell_app_pane_g2

0x0001,

0xf56f,	// (0x0000f56f) cell_app_pane_g_ParamLimits

0xf56f,	// (0x0000f56f) cell_app_pane_g

0x1b2d,	// (0x00001b2d) cell_app_pane_t1_ParamLimits

0x1b2d,	// (0x00001b2d) cell_app_pane_t1

0x1b3f,	// (0x00001b3f) grid_highlight_pane_ParamLimits

0x1b3f,	// (0x00001b3f) grid_highlight_pane

0x1517,	// (0x00001517) cell_highlight_pane_g1

0x151f,	// (0x0000151f) cell_highlight_pane_g2

0x1527,	// (0x00001527) cell_highlight_pane_g3

0x152f,	// (0x0000152f) cell_highlight_pane_g4

0x1537,	// (0x00001537) cell_highlight_pane_g5

0x153f,	// (0x0000153f) cell_highlight_pane_g6

0x1547,	// (0x00001547) cell_highlight_pane_g7

0x154f,	// (0x0000154f) cell_highlight_pane_g8

0x1557,	// (0x00001557) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xa91d,	// (0x0000a91d) cell_highlight_pane_g

0x1b63,	// (0x00001b63) bg_scroll_pane

0x1b82,	// (0x00001b82) scroll_handle_pane

0x1bd3,	// (0x00001bd3) scroll_bg_pane_g1

0x1be8,	// (0x00001be8) scroll_bg_pane_g2

0x1c00,	// (0x00001c00) scroll_bg_pane_g3

0x0002,

0xa974,	// (0x0000a974) scroll_bg_pane_g

0x1c15,	// (0x00001c15) scroll_handle_focus_pane_ParamLimits

0x1c15,	// (0x00001c15) scroll_handle_focus_pane

0x1bd3,	// (0x00001bd3) scroll_handle_pane_g1

0x1c22,	// (0x00001c22) scroll_handle_pane_g2

0x1c00,	// (0x00001c00) scroll_handle_pane_g3

0x0002,

0xa97b,	// (0x0000a97b) scroll_handle_pane_g

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp21_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp21

0x1c36,	// (0x00001c36) popup_fep_japan_predictive_window_t1_ParamLimits

0x1c36,	// (0x00001c36) popup_fep_japan_predictive_window_t1

0x1c4d,	// (0x00001c4d) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c4d,	// (0x00001c4d) popup_fep_japan_predictive_window_t2

0x1c80,	// (0x00001c80) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c80,	// (0x00001c80) popup_fep_japan_predictive_window_t3

0x0002,

0xa982,	// (0x0000a982) popup_fep_japan_predictive_window_t_ParamLimits

0xa982,	// (0x0000a982) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1cb7,	// (0x00001cb7) listscroll_japin_cand_pane

0x1cbf,	// (0x00001cbf) popup_fep_japan_candidate_window_t1

0x1ccd,	// (0x00001ccd) candidate_pane_ParamLimits

0x1ccd,	// (0x00001ccd) candidate_pane

0x1cdf,	// (0x00001cdf) scroll_pane_cp30

0x1ce9,	// (0x00001ce9) list_single_popup_jap_candidate_pane_ParamLimits

0x1ce9,	// (0x00001ce9) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cfd,	// (0x00001cfd) list_single_popup_jap_candidate_pane_t1

0xbd8a,	// (0x0000bd8a) level_1_signal

0xbd9c,	// (0x0000bd9c) level_2_signal

0xbdaf,	// (0x0000bdaf) level_3_signal

0xbdc2,	// (0x0000bdc2) level_4_signal

0xbdd5,	// (0x0000bdd5) level_5_signal

0xbde8,	// (0x0000bde8) level_6_signal

0xbdfb,	// (0x0000bdfb) level_7_signal

0xbd8a,	// (0x0000bd8a) level_1_battery

0xbd9c,	// (0x0000bd9c) level_2_battery

0xbdaf,	// (0x0000bdaf) level_3_battery

0xbdc2,	// (0x0000bdc2) level_4_battery

0xbdd5,	// (0x0000bdd5) level_5_battery

0xbde8,	// (0x0000bde8) level_6_battery

0xbdfb,	// (0x0000bdfb) level_7_battery

0x1d9e,	// (0x00001d9e) list_menu_pane_ParamLimits

0x1d9e,	// (0x00001d9e) list_menu_pane

0x1daf,	// (0x00001daf) scroll_pane_cp25_ParamLimits

0x1daf,	// (0x00001daf) scroll_pane_cp25

0x1dc8,	// (0x00001dc8) list_double2_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double2_large_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_large_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double2_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double2_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_large_graphic_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_large_graphic_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_number_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_number_pane_cp2

0x1dc8,	// (0x00001dc8) list_double_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_2graphic_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_2graphic_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_graphic_heading_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_graphic_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_graphic_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_heading_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_heading_pane_cp2

0x1e0b,	// (0x00001e0b) list_single_large_graphic_pane_cp2_ParamLimits

0x1e0b,	// (0x00001e0b) list_single_large_graphic_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_number_heading_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_number_heading_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_number_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_number_pane_cp2

0xbe0e,	// (0x0000be0e) list_single_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_pane_cp2

0x1ebb,	// (0x00001ebb) bg_popup_sub_pane_cp22

0x1ee0,	// (0x00001ee0) popup_side_volume_key_window_g1

0x1f0a,	// (0x00001f0a) popup_side_volume_key_window_t1

0x1f28,	// (0x00001f28) volume_small_pane_cp1

0x0835,	// (0x00000835) bg_popup_sub_pane_cp24_ParamLimits

0x0835,	// (0x00000835) bg_popup_sub_pane_cp24

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane_ParamLimits

0x1f30,	// (0x00001f30) fep_china_uni_candidate_pane

0x1f44,	// (0x00001f44) fep_china_uni_entry_pane

0x1f54,	// (0x00001f54) popup_fep_china_uni_window_g1

0x1f70,	// (0x00001f70) fep_china_uni_entry_pane_g1

0x1f7a,	// (0x00001f7a) fep_china_uni_entry_pane_g2

0x0001,

0xa9af,	// (0x0000a9af) fep_china_uni_entry_pane_g

0x1f84,	// (0x00001f84) fep_entry_item_pane

0x1f8e,	// (0x00001f8e) fep_candidate_item_pane

0x1f96,	// (0x00001f96) fep_china_uni_candidate_pane_g1

0x1fa0,	// (0x00001fa0) fep_china_uni_candidate_pane_g2

0x1fa8,	// (0x00001fa8) fep_china_uni_candidate_pane_g3

0x1fb0,	// (0x00001fb0) fep_china_uni_candidate_pane_g4

0x0003,

0xa9b4,	// (0x0000a9b4) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1_ParamLimits

0x1fba,	// (0x00001fba) fep_entry_item_pane_t1

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1_ParamLimits

0x1fd0,	// (0x00001fd0) fep_candidate_item_pane_t1

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2_ParamLimits

0x1fe5,	// (0x00001fe5) fep_candidate_item_pane_t2

0x0001,

0xa9bd,	// (0x0000a9bd) fep_candidate_item_pane_t_ParamLimits

0xa9bd,	// (0x0000a9bd) fep_candidate_item_pane_t

0x050f,	// (0x0000050f) list_highlight_pane_cp31_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp31

0x1ff7,	// (0x00001ff7) level_1_signal_lsc

0x2000,	// (0x00002000) level_2_signal_lsc

0x2009,	// (0x00002009) level_3_signal_lsc

0x2012,	// (0x00002012) level_4_signal_lsc

0x201b,	// (0x0000201b) level_5_signal_lsc

0x2024,	// (0x00002024) level_6_signal_lsc

0x202d,	// (0x0000202d) level_7_signal_lsc

0x202d,	// (0x0000202d) level_1_battery_lsc

0x2036,	// (0x00002036) level_2_battery_lsc

0x203f,	// (0x0000203f) level_3_battery_lsc

0x2048,	// (0x00002048) level_4_battery_lsc

0x2051,	// (0x00002051) level_5_battery_lsc

0x205a,	// (0x0000205a) level_6_battery_lsc

0x1ff7,	// (0x00001ff7) level_7_battery_lsc

0x2063,	// (0x00002063) scroll_handle_focus_pane_g1

0x206c,	// (0x0000206c) scroll_handle_focus_pane_g2

0x2075,	// (0x00002075) scroll_handle_focus_pane_g3

0x0002,

0xa9c2,	// (0x0000a9c2) scroll_handle_focus_pane_g

0xbe71,	// (0x0000be71) list_single_2graphic_pane_g1_ParamLimits

0xbe71,	// (0x0000be71) list_single_2graphic_pane_g1

0xb70f,	// (0x0000b70f) list_single_2graphic_pane_g2_ParamLimits

0xb70f,	// (0x0000b70f) list_single_2graphic_pane_g2

0x362c,	// (0x0000362c) list_single_2graphic_pane_g3_ParamLimits

0x362c,	// (0x0000362c) list_single_2graphic_pane_g3

0xbe7d,	// (0x0000be7d) list_single_2graphic_pane_g4_ParamLimits

0xbe7d,	// (0x0000be7d) list_single_2graphic_pane_g4

0x0003,

0xf579,	// (0x0000f579) list_single_2graphic_pane_g_ParamLimits

0xf579,	// (0x0000f579) list_single_2graphic_pane_g

0xbe8e,	// (0x0000be8e) list_single_2graphic_pane_t1_ParamLimits

0xbe8e,	// (0x0000be8e) list_single_2graphic_pane_t1

0xbebc,	// (0x0000bebc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbebc,	// (0x0000bebc) list_double2_graphic_large_graphic_pane_g1

0xb77a,	// (0x0000b77a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb77a,	// (0x0000b77a) list_double2_graphic_large_graphic_pane_g2

0xb78b,	// (0x0000b78b) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb78b,	// (0x0000b78b) list_double2_graphic_large_graphic_pane_g3

0x37f5,	// (0x000037f5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x37f5,	// (0x000037f5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf582,	// (0x0000f582) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf582,	// (0x0000f582) list_double2_graphic_large_graphic_pane_g

0xbece,	// (0x0000bece) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbece,	// (0x0000bece) list_double2_graphic_large_graphic_pane_t1

0xbee4,	// (0x0000bee4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbee4,	// (0x0000bee4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf58b,	// (0x0000f58b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf58b,	// (0x0000f58b) list_double2_graphic_large_graphic_pane_t

0x2387,	// (0x00002387) popup_fast_swap_window_ParamLimits

0x2387,	// (0x00002387) popup_fast_swap_window

0x23a5,	// (0x000023a5) popup_side_volume_key_window

0x23c3,	// (0x000023c3) stacon_top_pane

0x23cd,	// (0x000023cd) status_pane_ParamLimits

0x23cd,	// (0x000023cd) status_pane

0x23c3,	// (0x000023c3) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12dc,	// (0x000012dc) scroll_pane_cp121

0x12d3,	// (0x000012d3) set_content_pane

0xbef6,	// (0x0000bef6) bg_active_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1

0xbeff,	// (0x0000beff) bg_active_tab_pane_g3_cp1

0xbef6,	// (0x0000bef6) bg_passive_tab_pane_g1_cp1

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1

0xbeff,	// (0x0000beff) bg_passive_tab_pane_g3_cp1

0xbf08,	// (0x0000bf08) bg_active_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2

0xbf11,	// (0x0000bf11) bg_active_tab_pane_g3_cp2

0xbf08,	// (0x0000bf08) bg_passive_tab_pane_g1_cp2

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2

0xbf11,	// (0x0000bf11) bg_passive_tab_pane_g3_cp2

0xbf1a,	// (0x0000bf1a) bg_active_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3

0xbf23,	// (0x0000bf23) bg_active_tab_pane_g3_cp3

0xbf1a,	// (0x0000bf1a) bg_passive_tab_pane_g1_cp3

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3

0xbf23,	// (0x0000bf23) bg_passive_tab_pane_g3_cp3

0xbf2c,	// (0x0000bf2c) bg_active_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4

0xbf35,	// (0x0000bf35) bg_active_tab_pane_g3_cp4

0xbf2c,	// (0x0000bf2c) bg_passive_tab_pane_g1_cp4

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4

0xbf35,	// (0x0000bf35) bg_passive_tab_pane_g3_cp4

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5

0x16c7,	// (0x000016c7) list_set_graphic_pane_ParamLimits

0x16c7,	// (0x000016c7) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbf3e,	// (0x0000bf3e) list_set_graphic_pane_g1_ParamLimits

0xbf3e,	// (0x0000bf3e) list_set_graphic_pane_g1

0xbf4a,	// (0x0000bf4a) list_set_graphic_pane_g2_ParamLimits

0xbf4a,	// (0x0000bf4a) list_set_graphic_pane_g2

0x0001,

0xf590,	// (0x0000f590) list_set_graphic_pane_g_ParamLimits

0xf590,	// (0x0000f590) list_set_graphic_pane_g

0x0009,

0xad3b,	// (0x0000ad3b) volume_small_pane_cp_g

0x2338,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2338,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2

0x2346,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2346,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2

0x2357,	// (0x00002357) list_double2_large_graphic_pane_g3_cp2

0x235f,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x235f,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2

0x2375,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2375,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2

0x4b47,	// (0x00004b47) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b47,	// (0x00004b47) list_double_large_graphic_pane_g1_cp2

0x4b5a,	// (0x00004b5a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b5a,	// (0x00004b5a) list_double_large_graphic_pane_g2_cp2

0x24eb,	// (0x000024eb) list_double_large_graphic_pane_g3_cp2

0x4b6b,	// (0x00004b6b) list_double_large_graphic_pane_g4_cp

0x4b73,	// (0x00004b73) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b73,	// (0x00004b73) list_double_large_graphic_pane_t1_cp2

0x4b8a,	// (0x00004b8a) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b8a,	// (0x00004b8a) list_double_large_graphic_pane_t2_cp2

0x23db,	// (0x000023db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23db,	// (0x000023db) list_double2_graphic_pane_g1_cp2

0x23e9,	// (0x000023e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23e9,	// (0x000023e9) list_double2_graphic_pane_g2_cp2

0x23fa,	// (0x000023fa) list_double2_graphic_pane_g3_cp2

0x2404,	// (0x00002404) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2404,	// (0x00002404) list_double2_graphic_pane_t1_cp2

0x241a,	// (0x0000241a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x241a,	// (0x0000241a) list_double2_graphic_pane_t2_cp2

0x242c,	// (0x0000242c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x242c,	// (0x0000242c) list_single_number_heading_pane_g1_cp2

0x2438,	// (0x00002438) list_single_number_heading_pane_g2_cp2

0x2440,	// (0x00002440) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2440,	// (0x00002440) list_single_number_heading_pane_t1_cp2

0x2456,	// (0x00002456) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2456,	// (0x00002456) list_single_number_heading_pane_t2_cp2

0x246a,	// (0x0000246a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x246a,	// (0x0000246a) list_single_number_heading_pane_t3_cp2

0x242c,	// (0x0000242c) list_single_heading_pane_g1_cp2_ParamLimits

0x242c,	// (0x0000242c) list_single_heading_pane_g1_cp2

0x2438,	// (0x00002438) list_single_heading_pane_g2_cp2

0x2440,	// (0x00002440) list_single_heading_pane_t1_cp2_ParamLimits

0x2440,	// (0x00002440) list_single_heading_pane_t1_cp2

0x4941,	// (0x00004941) list_single_heading_pane_t2_cp2_ParamLimits

0x4941,	// (0x00004941) list_single_heading_pane_t2_cp2

0x4883,	// (0x00004883) list_double_graphic_pane_g1_cp2_ParamLimits

0x4883,	// (0x00004883) list_double_graphic_pane_g1_cp2

0x488f,	// (0x0000488f) list_double_graphic_pane_g2_cp2_ParamLimits

0x488f,	// (0x0000488f) list_double_graphic_pane_g2_cp2

0x489e,	// (0x0000489e) list_double_graphic_pane_g3_cp2

0x48a6,	// (0x000048a6) list_double_graphic_pane_t1_cp2_ParamLimits

0x48a6,	// (0x000048a6) list_double_graphic_pane_t1_cp2

0x48bc,	// (0x000048bc) list_double_graphic_pane_t2_cp2_ParamLimits

0x48bc,	// (0x000048bc) list_double_graphic_pane_t2_cp2

0x24df,	// (0x000024df) list_double_number_pane_g1_cp2_ParamLimits

0x24df,	// (0x000024df) list_double_number_pane_g1_cp2

0x24eb,	// (0x000024eb) list_double_number_pane_g2_cp2

0x4847,	// (0x00004847) list_double_number_pane_t1_cp2_ParamLimits

0x4847,	// (0x00004847) list_double_number_pane_t1_cp2

0x485b,	// (0x0000485b) list_double_number_pane_t2_cp2_ParamLimits

0x485b,	// (0x0000485b) list_double_number_pane_t2_cp2

0x4871,	// (0x00004871) list_double_number_pane_t3_cp2_ParamLimits

0x4871,	// (0x00004871) list_double_number_pane_t3_cp2

0x471f,	// (0x0000471f) list_single_graphic_pane_g1_cp2_ParamLimits

0x471f,	// (0x0000471f) list_single_graphic_pane_g1_cp2

0x2545,	// (0x00002545) list_single_graphic_pane_g2_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_graphic_pane_g2_cp2

0x2551,	// (0x00002551) list_single_graphic_pane_g3_cp2

0x46f5,	// (0x000046f5) list_single_graphic_pane_t1_cp2_ParamLimits

0x46f5,	// (0x000046f5) list_single_graphic_pane_t1_cp2

0x2545,	// (0x00002545) list_single_number_pane_g1_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_number_pane_g1_cp2

0x2551,	// (0x00002551) list_single_number_pane_g2_cp2

0x46f5,	// (0x000046f5) list_single_number_pane_t1_cp2_ParamLimits

0x46f5,	// (0x000046f5) list_single_number_pane_t1_cp2

0x470b,	// (0x0000470b) list_single_number_pane_t2_cp2_ParamLimits

0x470b,	// (0x0000470b) list_single_number_pane_t2_cp2

0x2346,	// (0x00002346) list_double2_pane_g1_cp2_ParamLimits

0x2346,	// (0x00002346) list_double2_pane_g1_cp2

0x2357,	// (0x00002357) list_double2_pane_g2_cp2

0x24b7,	// (0x000024b7) list_double2_pane_t1_cp2_ParamLimits

0x24b7,	// (0x000024b7) list_double2_pane_t1_cp2

0x24cd,	// (0x000024cd) list_double2_pane_t2_cp2_ParamLimits

0x24cd,	// (0x000024cd) list_double2_pane_t2_cp2

0x24df,	// (0x000024df) list_double_pane_g1_cp2_ParamLimits

0x24df,	// (0x000024df) list_double_pane_g1_cp2

0x24eb,	// (0x000024eb) list_double_pane_g2_cp2

0x24f3,	// (0x000024f3) list_double_pane_t1_cp2_ParamLimits

0x24f3,	// (0x000024f3) list_double_pane_t1_cp2

0x2509,	// (0x00002509) list_double_pane_t2_cp2_ParamLimits

0x2509,	// (0x00002509) list_double_pane_t2_cp2

0x2535,	// (0x00002535) list_single_pane_cp2_g3

0x2545,	// (0x00002545) list_single_pane_g1_cp2_ParamLimits

0x2545,	// (0x00002545) list_single_pane_g1_cp2

0x2551,	// (0x00002551) list_single_pane_g2_cp2

0x2559,	// (0x00002559) list_single_pane_t1_cp2_ParamLimits

0x2559,	// (0x00002559) list_single_pane_t1_cp2

0x2571,	// (0x00002571) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2571,	// (0x00002571) list_single_large_graphic_pane_g1_cp2

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x257f,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2

0x258b,	// (0x0000258b) list_single_large_graphic_pane_g3_cp2

0x2593,	// (0x00002593) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2593,	// (0x00002593) list_single_large_graphic_pane_g4_cp1

0x25ad,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25ad,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2

0x4564,	// (0x00004564) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4564,	// (0x00004564) list_single_graphic_heading_pane_g1_cp2

0x4531,	// (0x00004531) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4531,	// (0x00004531) list_single_graphic_heading_pane_g4_cp2

0x2551,	// (0x00002551) list_single_graphic_heading_pane_g5_cp2

0x4570,	// (0x00004570) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4570,	// (0x00004570) list_single_graphic_heading_pane_t1_cp2

0x4586,	// (0x00004586) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4586,	// (0x00004586) list_single_graphic_heading_pane_t2_cp2

0x4525,	// (0x00004525) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4525,	// (0x00004525) list_single_2graphic_pane_g1_cp2

0x4531,	// (0x00004531) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4531,	// (0x00004531) list_single_2graphic_pane_g2_cp2

0x2551,	// (0x00002551) list_single_2graphic_pane_g3_cp2

0x4542,	// (0x00004542) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4542,	// (0x00004542) list_single_2graphic_pane_g4_cp2

0x454e,	// (0x0000454e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x454e,	// (0x0000454e) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x40fd,	// (0x000040fd) list_highlight_pane_g1_cp1

0x4105,	// (0x00004105) list_highlight_pane_g2_cp1

0x410d,	// (0x0000410d) list_highlight_pane_g3_cp1

0x4115,	// (0x00004115) list_highlight_pane_g4_cp1

0x411d,	// (0x0000411d) list_highlight_pane_g5_cp1

0x4125,	// (0x00004125) list_highlight_pane_g6_cp1

0x412d,	// (0x0000412d) list_highlight_pane_g7_cp1

0x4135,	// (0x00004135) list_highlight_pane_g8_cp1

0x413d,	// (0x0000413d) list_highlight_pane_g9_cp1

0xce2a,	// (0x0000ce2a) form_field_slider_pane_t3

0xce38,	// (0x0000ce38) form_field_slider_pane_t4

0x4039,	// (0x00004039) slider_form_pane_ParamLimits

0x4039,	// (0x00004039) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4997,	// (0x00004997) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xab6e,	// (0x0000ab6e) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25c3,	// (0x000025c3) text_digital

0x25d2,	// (0x000025d2) text_primary

0x25e1,	// (0x000025e1) text_primary_small

0x25f0,	// (0x000025f0) text_secondary

0x25ff,	// (0x000025ff) text_title

0x5298,	// (0x00005298) bg_passive_tab_pane_g1_cp3_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp3_srt

0x52a1,	// (0x000052a1) bg_passive_tab_pane_g3_cp3_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp3_srt

0x52aa,	// (0x000052aa) tabs_4_active_pane_srt_g1

0xd3f8,	// (0x0000d3f8) tabs_4_active_pane_srt_t1_ParamLimits

0xd3f8,	// (0x0000d3f8) tabs_4_active_pane_srt_t1

0x5298,	// (0x00005298) bg_active_tab_pane_g1_cp3_copy1

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp3_copy1

0x52a1,	// (0x000052a1) bg_active_tab_pane_g3_cp3_copy1

0x050f,	// (0x0000050f) tabs_2_long_active_pane_srt_ParamLimits

0x050f,	// (0x0000050f) tabs_2_long_active_pane_srt

0x050f,	// (0x0000050f) tabs_2_long_passive_pane_srt_ParamLimits

0x050f,	// (0x0000050f) tabs_2_long_passive_pane_srt

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp4_srt

0x4e73,	// (0x00004e73) bg_passive_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp4_srt

0x4e7c,	// (0x00004e7c) bg_passive_tab_pane_g3_cp4_srt

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_srt_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_srt

0xd1ac,	// (0x0000d1ac) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd1ac,	// (0x0000d1ac) tabs_2_long_active_pane_srt_t1

0x4e73,	// (0x00004e73) bg_active_tab_pane_g1_cp4_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp4_srt

0x4e7c,	// (0x00004e7c) bg_active_tab_pane_g3_cp4_srt

0x0835,	// (0x00000835) tabs_3_long_active_pane_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_active_pane_srt

0x0835,	// (0x00000835) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_passive_pane_cp_srt

0x0835,	// (0x00000835) tabs_3_long_passive_pane_srt_ParamLimits

0x0835,	// (0x00000835) tabs_3_long_passive_pane_srt

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp5_srt

0x22e1,	// (0x000022e1) bg_passive_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_passive_tab_pane_g3_cp5_srt

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_srt_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_srt

0xd196,	// (0x0000d196) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd196,	// (0x0000d196) tabs_3_long_active_pane_srt_t1

0x22e1,	// (0x000022e1) bg_active_tab_pane_g1_cp5_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp5_srt

0x22ea,	// (0x000022ea) bg_active_tab_pane_g3_cp5_srt

0x4e53,	// (0x00004e53) navi_text_pane_srt_t1

0x4e4b,	// (0x00004e4b) navi_icon_pane_srt_g1

0x287f,	// (0x0000287f) midp_editing_number_pane_srt

0x260e,	// (0x0000260e) midp_ticker_pane_srt

0x2887,	// (0x00002887) midp_ticker_pane_srt_g1

0x288f,	// (0x0000288f) midp_ticker_pane_srt_g2

0x0001,

0xa9ff,	// (0x0000a9ff) midp_ticker_pane_srt_g

0x2897,	// (0x00002897) midp_ticker_pane_srt_t1

0x4e3c,	// (0x00004e3c) midp_editing_number_pane_t1_copy1

0xbf6e,	// (0x0000bf6e) listscroll_midp_pane

0xbf6e,	// (0x0000bf6e) midp_form_pane

0x2684,	// (0x00002684) midp_info_popup_window_ParamLimits

0x2684,	// (0x00002684) midp_info_popup_window

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp50_ParamLimits

0x15f5,	// (0x000015f5) bg_popup_sub_pane_cp50

0x3d64,	// (0x00003d64) listscroll_midp_info_pane_ParamLimits

0x3d64,	// (0x00003d64) listscroll_midp_info_pane

0x3d4c,	// (0x00003d4c) listscroll_form_midp_pane_ParamLimits

0x3d4c,	// (0x00003d4c) listscroll_form_midp_pane

0x3d58,	// (0x00003d58) scroll_bar_cp050

0xce1e,	// (0x0000ce1e) list_midp_pane

0x5f76,	// (0x00005f76) signal_pane_g2_cp

0x3c66,	// (0x00003c66) listscroll_midp_info_pane_t1_ParamLimits

0x3c66,	// (0x00003c66) listscroll_midp_info_pane_t1

0x3c7e,	// (0x00003c7e) listscroll_midp_info_pane_t2_ParamLimits

0x3c7e,	// (0x00003c7e) listscroll_midp_info_pane_t2

0x3cbc,	// (0x00003cbc) listscroll_midp_info_pane_t3_ParamLimits

0x3cbc,	// (0x00003cbc) listscroll_midp_info_pane_t3

0x3cf6,	// (0x00003cf6) listscroll_midp_info_pane_t4_ParamLimits

0x3cf6,	// (0x00003cf6) listscroll_midp_info_pane_t4

0x0003,

0xaaa9,	// (0x0000aaa9) listscroll_midp_info_pane_t_ParamLimits

0xaaa9,	// (0x0000aaa9) listscroll_midp_info_pane_t

0x16bf,	// (0x000016bf) scroll_pane_cp21

0x3c00,	// (0x00003c00) form_midp_field_choice_group_pane

0x3c09,	// (0x00003c09) form_midp_field_text_pane

0x3c4c,	// (0x00003c4c) form_midp_field_time_pane

0x3c54,	// (0x00003c54) form_midp_gauge_slider_pane

0x3c5d,	// (0x00003c5d) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xce01,	// (0x0000ce01) list_single_midp_pane_ParamLimits

0xce01,	// (0x0000ce01) list_single_midp_pane

0xcdd9,	// (0x0000cdd9) form_midp_field_text_pane_t1

0x391b,	// (0x0000391b) input_focus_pane_cp050

0x3bcf,	// (0x00003bcf) list_midp_form_text_pane

0x3b73,	// (0x00003b73) form_midp_field_choice_group_pane_t1

0x3b81,	// (0x00003b81) input_focus_pane_cp051

0x3b95,	// (0x00003b95) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b57,	// (0x00003b57) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b65,	// (0x00003b65) form_midp_field_time_pane_t2

0x0001,

0x2734,	// (0x00002734) aid_navinavi_width_2_pane

0xaaa4,	// (0x0000aaa4) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3b17,	// (0x00003b17) form_midp_gauge_slider_pane_t1

0x3b25,	// (0x00003b25) form_midp_gauge_slider_pane_t2

0xcdbd,	// (0x0000cdbd) form_midp_gauge_slider_pane_t3

0xcdcb,	// (0x0000cdcb) form_midp_gauge_slider_pane_t4

0x0003,

0xf5d1,	// (0x0000f5d1) form_midp_gauge_slider_pane_t

0x3b4f,	// (0x00003b4f) form_midp_slider_pane

0x050f,	// (0x0000050f) bg_input_focus_pane_cp041_ParamLimits

0x050f,	// (0x0000050f) bg_input_focus_pane_cp041

0x3ae4,	// (0x00003ae4) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ae4,	// (0x00003ae4) form_midp_gauge_wait_pane_t1

0x3af6,	// (0x00003af6) form_midp_gauge_wait_pane_t2_ParamLimits

0x3af6,	// (0x00003af6) form_midp_gauge_wait_pane_t2

0x0001,

0xaa96,	// (0x0000aa96) form_midp_gauge_wait_pane_t_ParamLimits

0xaa96,	// (0x0000aa96) form_midp_gauge_wait_pane_t

0x3b08,	// (0x00003b08) form_midp_wait_pane_ParamLimits

0x3b08,	// (0x00003b08) form_midp_wait_pane

0x3aac,	// (0x00003aac) form_midp_image_pane_g1

0x3ab5,	// (0x00003ab5) form_midp_image_pane_t1

0x3ac4,	// (0x00003ac4) form_midp_image_pane_t2

0x3ad3,	// (0x00003ad3) form_midp_image_pane_t3

0x0002,

0xaa8f,	// (0x0000aa8f) form_midp_image_pane_t

0x3a94,	// (0x00003a94) list_single_midp_pane_g1

0x3a9d,	// (0x00003a9d) list_single_midp_pane_t1

0xcda6,	// (0x0000cda6) list_midp_form_item_pane_ParamLimits

0xcda6,	// (0x0000cda6) list_midp_form_item_pane

0x26dc,	// (0x000026dc) list_midp_form_item_pane_t1

0x26eb,	// (0x000026eb) midp_ticker_pane_g1

0x26f7,	// (0x000026f7) midp_ticker_pane_g2

0x0001,

0xa9e5,	// (0x0000a9e5) midp_ticker_pane_g

0xc016,	// (0x0000c016) midp_ticker_pane_t1

0xd357,	// (0x0000d357) midp_editing_number_pane_t1

0x5146,	// (0x00005146) midp_editing_number_pane

0x5155,	// (0x00005155) midp_ticker_pane

0x4e04,	// (0x00004e04) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4e0c,	// (0x00004e0c) listscroll_ai_message_pane

0x4d8a,	// (0x00004d8a) ai_message_heading_pane_g1_ParamLimits

0x4d8a,	// (0x00004d8a) ai_message_heading_pane_g1

0x4d96,	// (0x00004d96) ai_message_heading_pane_g2_ParamLimits

0x4d96,	// (0x00004d96) ai_message_heading_pane_g2

0x4da4,	// (0x00004da4) ai_message_heading_pane_g3_ParamLimits

0x4da4,	// (0x00004da4) ai_message_heading_pane_g3

0x4db0,	// (0x00004db0) ai_message_heading_pane_g4_ParamLimits

0x4db0,	// (0x00004db0) ai_message_heading_pane_g4

0x0003,

0xabd0,	// (0x0000abd0) ai_message_heading_pane_g_ParamLimits

0xabd0,	// (0x0000abd0) ai_message_heading_pane_g

0x4dbc,	// (0x00004dbc) ai_message_heading_pane_t1_ParamLimits

0x4dbc,	// (0x00004dbc) ai_message_heading_pane_t1

0x4dd6,	// (0x00004dd6) ai_message_heading_pane_t2_ParamLimits

0x4dd6,	// (0x00004dd6) ai_message_heading_pane_t2

0x0001,

0xabd9,	// (0x0000abd9) ai_message_heading_pane_t_ParamLimits

0xabd9,	// (0x0000abd9) ai_message_heading_pane_t

0x4dea,	// (0x00004dea) bg_popup_heading_pane_cp1_ParamLimits

0x4dea,	// (0x00004dea) bg_popup_heading_pane_cp1

0x4d78,	// (0x00004d78) list_ai_message_pane_ParamLimits

0x4d78,	// (0x00004d78) list_ai_message_pane

0x16bf,	// (0x000016bf) scroll_pane_cp10

0x4cb0,	// (0x00004cb0) list_ai_message_pane_g1

0x4cb8,	// (0x00004cb8) list_ai_message_pane_g2

0x0001,

0xabad,	// (0x0000abad) list_ai_message_pane_g

0x4cc0,	// (0x00004cc0) list_ai_message_pane_t1_ParamLimits

0x4cc0,	// (0x00004cc0) list_ai_message_pane_t1

0x4cd5,	// (0x00004cd5) list_ai_message_pane_t2_ParamLimits

0x4cd5,	// (0x00004cd5) list_ai_message_pane_t2

0x4cea,	// (0x00004cea) list_ai_message_pane_t3_ParamLimits

0x4cea,	// (0x00004cea) list_ai_message_pane_t3

0x4cff,	// (0x00004cff) list_ai_message_pane_t4_ParamLimits

0x4cff,	// (0x00004cff) list_ai_message_pane_t4

0x0003,

0xabb2,	// (0x0000abb2) list_ai_message_pane_t_ParamLimits

0xabb2,	// (0x0000abb2) list_ai_message_pane_t

0xd16a,	// (0x0000d16a) cell_ai_soft_ind_pane_ParamLimits

0xd16a,	// (0x0000d16a) cell_ai_soft_ind_pane

0x2715,	// (0x00002715) cell_ai_soft_ind_pane_g1_ParamLimits

0x2715,	// (0x00002715) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x2722,	// (0x00002722) text_secondary_cp56_ParamLimits

0x2722,	// (0x00002722) text_secondary_cp56

0x4c6e,	// (0x00004c6e) example_general_pane_ParamLimits

0x4c6e,	// (0x00004c6e) example_general_pane

0x4c7a,	// (0x00004c7a) example_parent_pane_g1_ParamLimits

0x4c7a,	// (0x00004c7a) example_parent_pane_g1

0x4c86,	// (0x00004c86) example_parent_pane_t1_ParamLimits

0x4c86,	// (0x00004c86) example_parent_pane_t1

0xc5c7,	// (0x0000c5c7) popup_preview_text_window_ParamLimits

0xc5c7,	// (0x0000c5c7) popup_preview_text_window

0x253d,	// (0x0000253d) list_single_pane_cp2_g4

0x08eb,	// (0x000008eb) bg_popup_preview_window_pane_ParamLimits

0x08eb,	// (0x000008eb) bg_popup_preview_window_pane

0x49a1,	// (0x000049a1) popup_preview_text_window_t1_ParamLimits

0x49a1,	// (0x000049a1) popup_preview_text_window_t1

0x49bf,	// (0x000049bf) popup_preview_text_window_t2_ParamLimits

0x49bf,	// (0x000049bf) popup_preview_text_window_t2

0x4a08,	// (0x00004a08) popup_preview_text_window_t3_ParamLimits

0x4a08,	// (0x00004a08) popup_preview_text_window_t3

0x4a4d,	// (0x00004a4d) popup_preview_text_window_t4_ParamLimits

0x4a4d,	// (0x00004a4d) popup_preview_text_window_t4

0x0004,

0xab81,	// (0x0000ab81) popup_preview_text_window_t_ParamLimits

0xab81,	// (0x0000ab81) popup_preview_text_window_t

0x4acb,	// (0x00004acb) scroll_pane_cp11

0x3788,	// (0x00003788) bg_popup_preview_window_pane_g1

0x4955,	// (0x00004955) bg_popup_preview_window_pane_g2

0x495f,	// (0x0000495f) bg_popup_preview_window_pane_g3

0x4969,	// (0x00004969) bg_popup_preview_window_pane_g4

0x4973,	// (0x00004973) bg_popup_preview_window_pane_g5

0x497d,	// (0x0000497d) bg_popup_preview_window_pane_g6

0x4985,	// (0x00004985) bg_popup_preview_window_pane_g7

0x498d,	// (0x0000498d) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc537,	// (0x0000c537) popup_midp_note_alarm_window_ParamLimits

0xc537,	// (0x0000c537) popup_midp_note_alarm_window

0x13ab,	// (0x000013ab) data_form_pane_ParamLimits

0xbb16,	// (0x0000bb16) form_field_data_pane_g1

0xbb20,	// (0x0000bb20) form_field_data_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_ParamLimits

0x13e9,	// (0x000013e9) data_form_wide_pane_ParamLimits

0x13f5,	// (0x000013f5) form_field_data_wide_pane_g1

0x1421,	// (0x00001421) form_field_data_wide_pane_t1_ParamLimits

0x0bb1,	// (0x00000bb1) input_focus_pane_cp6_ParamLimits

0xbc7a,	// (0x0000bc7a) input_popup_find_pane_g1_ParamLimits

0xbc7a,	// (0x0000bc7a) input_popup_find_pane_g1

0x19f0,	// (0x000019f0) aid_navi_side_left_pane

0x1a05,	// (0x00001a05) aid_navi_side_right_pane

0x41f8,	// (0x000041f8) bg_popup_window_pane_cp30_ParamLimits

0x41f8,	// (0x000041f8) bg_popup_window_pane_cp30

0x4272,	// (0x00004272) popup_midp_note_alarm_window_g1_ParamLimits

0x4272,	// (0x00004272) popup_midp_note_alarm_window_g1

0x42a2,	// (0x000042a2) popup_midp_note_alarm_window_t1_ParamLimits

0x42a2,	// (0x000042a2) popup_midp_note_alarm_window_t1

0x4343,	// (0x00004343) popup_midp_note_alarm_window_t2_ParamLimits

0x4343,	// (0x00004343) popup_midp_note_alarm_window_t2

0x43f1,	// (0x000043f1) popup_midp_note_alarm_window_t3_ParamLimits

0x43f1,	// (0x000043f1) popup_midp_note_alarm_window_t3

0x4423,	// (0x00004423) popup_midp_note_alarm_window_t4_ParamLimits

0x4423,	// (0x00004423) popup_midp_note_alarm_window_t4

0x4449,	// (0x00004449) popup_midp_note_alarm_window_t5_ParamLimits

0x4449,	// (0x00004449) popup_midp_note_alarm_window_t5

0x000a,

0xab1e,	// (0x0000ab1e) popup_midp_note_alarm_window_t_ParamLimits

0xab1e,	// (0x0000ab1e) popup_midp_note_alarm_window_t

0x44f5,	// (0x000044f5) wait_bar_pane_cp1_ParamLimits

0x44f5,	// (0x000044f5) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3edd,	// (0x00003edd) wait_border_pane_g1_copy1

0x143b,	// (0x0000143b) form_field_popup_pane_g1

0xbb3a,	// (0x0000bb3a) form_field_popup_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp7_ParamLimits

0x145d,	// (0x0000145d) list_form_pane_ParamLimits

0x1469,	// (0x00001469) form_field_popup_wide_pane_g1

0x1471,	// (0x00001471) form_field_popup_wide_pane_t1_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp8_ParamLimits

0x1486,	// (0x00001486) list_form_wide_pane_ParamLimits

0x5325,	// (0x00005325) aid_size_cell_graphic_pane

0xbbb9,	// (0x0000bbb9) data_form_pane_t1_ParamLimits

0xd33b,	// (0x0000d33b) data_form_wide_pane_t1_ParamLimits

0xc9c4,	// (0x0000c9c4) bg_status_flat_pane

0xb34a,	// (0x0000b34a) title_pane_t1_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t2_ParamLimits

0x04fd,	// (0x000004fd) title_pane_t3_ParamLimits

0xf4a1,	// (0x0000f4a1) title_pane_t_ParamLimits

0xbd8a,	// (0x0000bd8a) level_1_signal_ParamLimits

0xbd9c,	// (0x0000bd9c) level_2_signal_ParamLimits

0xbdaf,	// (0x0000bdaf) level_3_signal_ParamLimits

0xbdc2,	// (0x0000bdc2) level_4_signal_ParamLimits

0xbdd5,	// (0x0000bdd5) level_5_signal_ParamLimits

0xbde8,	// (0x0000bde8) level_6_signal_ParamLimits

0xbdfb,	// (0x0000bdfb) level_7_signal_ParamLimits

0xbd8a,	// (0x0000bd8a) level_1_battery_ParamLimits

0xbd9c,	// (0x0000bd9c) level_2_battery_ParamLimits

0xbdaf,	// (0x0000bdaf) level_3_battery_ParamLimits

0xbdc2,	// (0x0000bdc2) level_4_battery_ParamLimits

0xbdd5,	// (0x0000bdd5) level_5_battery_ParamLimits

0xbde8,	// (0x0000bde8) level_6_battery_ParamLimits

0xbdfb,	// (0x0000bdfb) level_7_battery_ParamLimits

0x40fd,	// (0x000040fd) bg_status_flat_pane_g1

0x4105,	// (0x00004105) bg_status_flat_pane_g2

0x410d,	// (0x0000410d) bg_status_flat_pane_g3

0x4115,	// (0x00004115) bg_status_flat_pane_g4

0x411d,	// (0x0000411d) bg_status_flat_pane_g5

0x4125,	// (0x00004125) bg_status_flat_pane_g6

0x412d,	// (0x0000412d) bg_status_flat_pane_g7

0xb3de,	// (0x0000b3de) tabs_3_active_pane_t1_ParamLimits

0xb3de,	// (0x0000b3de) tabs_3_passive_pane_t1_ParamLimits

0xb3f8,	// (0x0000b3f8) tabs_4_active_pane_t1_ParamLimits

0xb3f8,	// (0x0000b3f8) tabs_4_1_passive_pane_t1_ParamLimits

0xbc90,	// (0x0000bc90) tabs_2_active_pane_t1_ParamLimits

0xbc90,	// (0x0000bc90) tabs_2_passive_pane_t1_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp4_ParamLimits

0xbca2,	// (0x0000bca2) tabs_2_long_active_pane_t1_ParamLimits

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp4_ParamLimits

0x3846,	// (0x00003846) list_single_midp_graphic_pane_t1_ParamLimits

0x050f,	// (0x0000050f) bg_active_tab_pane_cp5_ParamLimits

0xbcb5,	// (0x0000bcb5) tabs_3_long_active_pane_t1_ParamLimits

0x2b9e,	// (0x00002b9e) bg_passive_tab_pane_cp5_ParamLimits

0x3846,	// (0x00003846) list_single_midp_graphic_pane_t1

0xc9c4,	// (0x0000c9c4) bg_status_flat_pane_ParamLimits

0x335b,	// (0x0000335b) indicator_pane_cp2_ParamLimits

0x335b,	// (0x0000335b) indicator_pane_cp2

0xcb59,	// (0x0000cb59) navi_pane_srt_ParamLimits

0xcb59,	// (0x0000cb59) navi_pane_srt

0x34c1,	// (0x000034c1) popup_clock_digital_analogue_window_cp1

0x0699,	// (0x00000699) indicator_pane_t1

0x260e,	// (0x0000260e) copy_highlight_pane

0x260e,	// (0x0000260e) cursor_graphics_pane

0x260e,	// (0x0000260e) graphic_within_text_pane

0x260e,	// (0x0000260e) link_highlight_pane

0x4a8e,	// (0x00004a8e) popup_preview_text_window_t5_ParamLimits

0x4a8e,	// (0x00004a8e) popup_preview_text_window_t5

0x273e,	// (0x0000273e) cursor_digital_pane

0x273e,	// (0x0000273e) cursor_primary_pane

0x274f,	// (0x0000274f) cursor_primary_small_pane

0x2757,	// (0x00002757) cursor_secondary_pane

0x275f,	// (0x0000275f) cursor_title_pane

0x273e,	// (0x0000273e) link_highlight_digital_pane

0x2746,	// (0x00002746) link_highlight_primary_pane

0x274f,	// (0x0000274f) link_highlight_primary_small_pane

0x2757,	// (0x00002757) link_highlight_secondary_pane

0x275f,	// (0x0000275f) link_highlight_title_pane

0x273e,	// (0x0000273e) copy_highlight_digital_pane

0x273e,	// (0x0000273e) copy_highlight_primary_pane

0x274f,	// (0x0000274f) copy_highlight_primary_small_pane

0x2757,	// (0x00002757) copy_highlight_secondary_pane

0x275f,	// (0x0000275f) copy_highlight_title_pane

0x2757,	// (0x00002757) graphic_text_digital_pane

0x419b,	// (0x0000419b) graphic_text_primary_pane

0x41a4,	// (0x000041a4) graphic_text_primary_small_pane

0x274f,	// (0x0000274f) graphic_text_secondary_pane

0x273e,	// (0x0000273e) graphic_text_title_pane

0xc028,	// (0x0000c028) cursor_primary_pane_g1

0x418d,	// (0x0000418d) cursor_text_primary_t1

0xce5a,	// (0x0000ce5a) cursor_primary_small_pane_g1

0x417f,	// (0x0000417f) cursor_text_primary_small_t1

0xce50,	// (0x0000ce50) cursor_primary_small_pane_g1_copy1

0x4167,	// (0x00004167) cursor_text_primary_small_t1_copy1

0x4145,	// (0x00004145) cursor_text_title_t1

0xce46,	// (0x0000ce46) cursor_title_pane_g1

0xc028,	// (0x0000c028) cursor_digital_pane_g1

0x2771,	// (0x00002771) cursor_text_digital_t1

0x277f,	// (0x0000277f) link_highlight_primary_pane_g1

0x40ee,	// (0x000040ee) link_highlight_primary_pane_t1

0x277f,	// (0x0000277f) link_highlight_primary_small_pane_g1

0x2787,	// (0x00002787) link_highlight_primary_small_pane_t1

0x2796,	// (0x00002796) link_highlight_secondary_pane_g1

0x279e,	// (0x0000279e) link_highlight_secondary_pane_t1

0x4062,	// (0x00004062) link_highlight_title_pane_g1

0x406a,	// (0x0000406a) link_highlight_title_pane_t1

0x404b,	// (0x0000404b) link_highlight_digital_pane_g1

0x4053,	// (0x00004053) link_highlight_digital_pane_t1

0x3f13,	// (0x00003f13) copy_highlight_primary_pane_g1

0x3f2a,	// (0x00003f2a) copy_highlight_primary_pane_t1

0x3f13,	// (0x00003f13) copy_highlight_primary_small_pane_g1

0x3f1b,	// (0x00003f1b) copy_highlight_primary_small_pane_t1

0x27ad,	// (0x000027ad) copy_highlight_secondary_pane_g1

0x27b5,	// (0x000027b5) copy_highlight_secondary_pane_t1

0x3efc,	// (0x00003efc) copy_highlight_title_pane_g1

0x3f04,	// (0x00003f04) copy_highlight_title_pane_t1

0x3f13,	// (0x00003f13) copy_highlight_digital_pane_g1

0x55ad,	// (0x000055ad) copy_highlight_digital_pane_t1

0x5501,	// (0x00005501) graphic_text_primary_pane_g1

0x5591,	// (0x00005591) graphic_text_primary_pane_t1

0x559f,	// (0x0000559f) graphic_text_primary_pane_t2

0x0001,

0xac4d,	// (0x0000ac4d) graphic_text_primary_pane_t

0x556d,	// (0x0000556d) graphic_text_primary_small_pane_g1

0x5575,	// (0x00005575) graphic_text_primary_small_pane_t1

0x5583,	// (0x00005583) graphic_text_primary_small_pane_t2

0x0001,

0xac48,	// (0x0000ac48) graphic_text_primary_small_pane_t

0x5549,	// (0x00005549) graphic_text_secondary_pane_g1

0x5551,	// (0x00005551) graphic_text_secondary_pane_t1

0x555f,	// (0x0000555f) graphic_text_secondary_pane_t2

0x0001,

0xac43,	// (0x0000ac43) graphic_text_secondary_pane_t

0x5525,	// (0x00005525) graphic_text_title_pane_g1

0x552d,	// (0x0000552d) graphic_text_title_pane_t1

0x553b,	// (0x0000553b) graphic_text_title_pane_t2

0x0001,

0xac3e,	// (0x0000ac3e) graphic_text_title_pane_t

0x5501,	// (0x00005501) graphic_text_digital_pane_g1

0x5509,	// (0x00005509) graphic_text_digital_pane_t1

0x5517,	// (0x00005517) graphic_text_digital_pane_t2

0x0001,

0xac39,	// (0x0000ac39) graphic_text_digital_pane_t

0x050f,	// (0x0000050f) navi_icon_pane_srt_ParamLimits

0x050f,	// (0x0000050f) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x050f,	// (0x0000050f) navi_text_pane_srt_ParamLimits

0x050f,	// (0x0000050f) navi_text_pane_srt

0x54cc,	// (0x000054cc) navi_navi_icon_text_pane_srt

0x54d4,	// (0x000054d4) navi_navi_pane_srt_g1_ParamLimits

0x54d4,	// (0x000054d4) navi_navi_pane_srt_g1

0x54e6,	// (0x000054e6) navi_navi_pane_srt_g2_ParamLimits

0x54e6,	// (0x000054e6) navi_navi_pane_srt_g2

0x0001,

0xac34,	// (0x0000ac34) navi_navi_pane_srt_g_ParamLimits

0xac34,	// (0x0000ac34) navi_navi_pane_srt_g

0x54f8,	// (0x000054f8) navi_navi_tabs_pane_srt

0x54cc,	// (0x000054cc) navi_navi_text_pane_srt

0x54cc,	// (0x000054cc) navi_navi_volume_pane_srt

0x54bd,	// (0x000054bd) navi_navi_text_pane_srt_t1

0x5498,	// (0x00005498) navi_navi_volume_pane_srt_g1

0x54a0,	// (0x000054a0) volume_small_pane_srt_ParamLimits

0x54a0,	// (0x000054a0) volume_small_pane_srt

0x27c4,	// (0x000027c4) volume_small_pane_srt_g1_ParamLimits

0x27c4,	// (0x000027c4) volume_small_pane_srt_g1

0x27d4,	// (0x000027d4) volume_small_pane_srt_g2_ParamLimits

0x27d4,	// (0x000027d4) volume_small_pane_srt_g2

0x27e5,	// (0x000027e5) volume_small_pane_srt_g3_ParamLimits

0x27e5,	// (0x000027e5) volume_small_pane_srt_g3

0x27f6,	// (0x000027f6) volume_small_pane_srt_g4_ParamLimits

0x27f6,	// (0x000027f6) volume_small_pane_srt_g4

0x2807,	// (0x00002807) volume_small_pane_srt_g5_ParamLimits

0x2807,	// (0x00002807) volume_small_pane_srt_g5

0x2818,	// (0x00002818) volume_small_pane_srt_g6_ParamLimits

0x2818,	// (0x00002818) volume_small_pane_srt_g6

0x2829,	// (0x00002829) volume_small_pane_srt_g7_ParamLimits

0x2829,	// (0x00002829) volume_small_pane_srt_g7

0x283a,	// (0x0000283a) volume_small_pane_srt_g8_ParamLimits

0x283a,	// (0x0000283a) volume_small_pane_srt_g8

0x284b,	// (0x0000284b) volume_small_pane_srt_g9_ParamLimits

0x284b,	// (0x0000284b) volume_small_pane_srt_g9

0x285c,	// (0x0000285c) volume_small_pane_srt_g10_ParamLimits

0x285c,	// (0x0000285c) volume_small_pane_srt_g10

0x0009,

0xa9ea,	// (0x0000a9ea) volume_small_pane_srt_g_ParamLimits

0xa9ea,	// (0x0000a9ea) volume_small_pane_srt_g

0x09a0,	// (0x000009a0) query_popup_data_pane_cp2

0x5486,	// (0x00005486) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5486,	// (0x00005486) navi_navi_icon_text_pane_srt_t1

0x419b,	// (0x0000419b) navi_tabs_2_long_pane_srt

0x419b,	// (0x0000419b) navi_tabs_2_pane_srt

0x419b,	// (0x0000419b) navi_tabs_3_long_pane_srt

0x419b,	// (0x0000419b) navi_tabs_3_pane_srt

0x419b,	// (0x0000419b) navi_tabs_4_pane_srt

0x545e,	// (0x0000545e) tabs_2_active_pane_srt_ParamLimits

0x545e,	// (0x0000545e) tabs_2_active_pane_srt

0x546e,	// (0x0000546e) tabs_2_passive_pane_srt_ParamLimits

0x546e,	// (0x0000546e) tabs_2_passive_pane_srt

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp1_srt_ParamLimits

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp1_srt

0x5432,	// (0x00005432) bg_passive_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp1_srt

0x543b,	// (0x0000543b) bg_passive_tab_pane_g3_cp1_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp1_srt

0x5444,	// (0x00005444) tabs_2_active_pane_srt_g1

0xd478,	// (0x0000d478) tabs_2_active_pane_srt_t1_ParamLimits

0xd478,	// (0x0000d478) tabs_2_active_pane_srt_t1

0x5432,	// (0x00005432) bg_active_tab_pane_g1_cp1_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp1_srt

0x543b,	// (0x0000543b) bg_active_tab_pane_g3_cp1_srt

0x53ff,	// (0x000053ff) tabs_3_active_pane_srt_ParamLimits

0x53ff,	// (0x000053ff) tabs_3_active_pane_srt

0x5410,	// (0x00005410) tabs_3_passive_pane_cp_srt_ParamLimits

0x5410,	// (0x00005410) tabs_3_passive_pane_cp_srt

0x5421,	// (0x00005421) tabs_3_passive_pane_srt_ParamLimits

0x5421,	// (0x00005421) tabs_3_passive_pane_srt

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp2_srt_ParamLimits

0x391b,	// (0x0000391b) bg_passive_tab_pane_cp2_srt

0x286d,	// (0x0000286d) bg_passive_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_passive_tab_pane_g2_cp2_srt

0x2876,	// (0x00002876) bg_passive_tab_pane_g3_cp2_srt

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_srt_ParamLimits

0x0835,	// (0x00000835) bg_active_tab_pane_cp2_srt

0x53e5,	// (0x000053e5) tabs_3_active_pane_srt_g1

0xd462,	// (0x0000d462) tabs_3_active_pane_srt_t1_ParamLimits

0xd462,	// (0x0000d462) tabs_3_active_pane_srt_t1

0x286d,	// (0x0000286d) bg_active_tab_pane_g1_cp2_srt

0x2113,	// (0x00002113) bg_active_tab_pane_g2_cp2_srt

0x2876,	// (0x00002876) bg_active_tab_pane_g3_cp2_srt

0x539d,	// (0x0000539d) tabs_4_active_pane_srt_ParamLimits

0x539d,	// (0x0000539d) tabs_4_active_pane_srt

0x53af,	// (0x000053af) tabs_4_passive_pane_cp2_srt_ParamLimits

0x53af,	// (0x000053af) tabs_4_passive_pane_cp2_srt

0x2b24,	// (0x00002b24) aid_size_cell_toolbar

0x4f5e,	// (0x00004f5e) main_idle_act_pane_ParamLimits

0x2d6b,	// (0x00002d6b) popup_large_graphic_colour_window_ParamLimits

0xc88d,	// (0x0000c88d) popup_toolbar_window_ParamLimits

0xc88d,	// (0x0000c88d) popup_toolbar_window

0x518b,	// (0x0000518b) list_single_graphic_2heading_pane_ParamLimits

0x518b,	// (0x0000518b) list_single_graphic_2heading_pane

0x1a7e,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane

0x1a90,	// (0x00001a90) aid_size_cell_apps_grid_prt_pane

0x2b9e,	// (0x00002b9e) bg_wml_button_pane_cp1_ParamLimits

0x2b9e,	// (0x00002b9e) bg_wml_button_pane_cp1

0xcdd9,	// (0x0000cdd9) form_midp_field_text_pane_t1_ParamLimits

0x391b,	// (0x0000391b) input_focus_pane_cp050_ParamLimits

0x3bcf,	// (0x00003bcf) list_midp_form_text_pane_ParamLimits

0x3b81,	// (0x00003b81) input_focus_pane_cp051_ParamLimits

0x3b95,	// (0x00003b95) list_midp_choice_pane_ParamLimits

0xcd90,	// (0x0000cd90) list_single_2graphic_pane_cp3_ParamLimits

0xcd90,	// (0x0000cd90) list_single_2graphic_pane_cp3

0x6346,	// (0x00006346) list_single_midp_graphic_pane_ParamLimits

0x6346,	// (0x00006346) list_single_midp_graphic_pane

0x3620,	// (0x00003620) list_single_graphic_2heading_pane_g1_ParamLimits

0x3620,	// (0x00003620) list_single_graphic_2heading_pane_g1

0x257f,	// (0x0000257f) list_single_graphic_2heading_pane_g4_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_2heading_pane_g4

0x362c,	// (0x0000362c) list_single_graphic_2heading_pane_g5_ParamLimits

0x362c,	// (0x0000362c) list_single_graphic_2heading_pane_g5

0x0002,

0xaa3d,	// (0x0000aa3d) list_single_graphic_2heading_pane_g_ParamLimits

0xaa3d,	// (0x0000aa3d) list_single_graphic_2heading_pane_g

0x3638,	// (0x00003638) list_single_graphic_2heading_pane_t1_ParamLimits

0x3638,	// (0x00003638) list_single_graphic_2heading_pane_t1

0x364c,	// (0x0000364c) list_single_graphic_2heading_pane_t2_ParamLimits

0x364c,	// (0x0000364c) list_single_graphic_2heading_pane_t2

0x3668,	// (0x00003668) list_single_graphic_2heading_pane_t3_ParamLimits

0x3668,	// (0x00003668) list_single_graphic_2heading_pane_t3

0x0002,

0xaa44,	// (0x0000aa44) list_single_graphic_2heading_pane_t_ParamLimits

0xaa44,	// (0x0000aa44) list_single_graphic_2heading_pane_t

0x3680,	// (0x00003680) bg_popup_sub_pane_cp2

0x36aa,	// (0x000036aa) grid_toobar_pane

0x36e6,	// (0x000036e6) cell_toolbar_pane_ParamLimits

0x36e6,	// (0x000036e6) cell_toolbar_pane

0x372c,	// (0x0000372c) cell_toolbar_pane_g1_ParamLimits

0x372c,	// (0x0000372c) cell_toolbar_pane_g1

0x3740,	// (0x00003740) cell_toolbar_pane_g2_ParamLimits

0x3740,	// (0x00003740) cell_toolbar_pane_g2

0x0001,

0xaa4b,	// (0x0000aa4b) cell_toolbar_pane_g_ParamLimits

0xaa4b,	// (0x0000aa4b) cell_toolbar_pane_g

0x3762,	// (0x00003762) grid_highlight_pane_cp2_ParamLimits

0x3762,	// (0x00003762) grid_highlight_pane_cp2

0x377c,	// (0x0000377c) toolbar_button_pane

0x3788,	// (0x00003788) toolbar_button_pane_g1

0x3790,	// (0x00003790) toolbar_button_pane_g2

0x3798,	// (0x00003798) toolbar_button_pane_g3

0x37a0,	// (0x000037a0) toolbar_button_pane_g4

0x37a8,	// (0x000037a8) toolbar_button_pane_g5

0x37b0,	// (0x000037b0) toolbar_button_pane_g6

0x37b8,	// (0x000037b8) toolbar_button_pane_g7

0x37c0,	// (0x000037c0) toolbar_button_pane_g8

0x37c8,	// (0x000037c8) toolbar_button_pane_g9

0x0009,

0xaa50,	// (0x0000aa50) toolbar_button_pane_g

0x37d8,	// (0x000037d8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x37d8,	// (0x000037d8) list_single_2graphic_pane_g1_cp3

0xccf2,	// (0x0000ccf2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xccf2,	// (0x0000ccf2) list_single_2graphic_pane_g2_cp3

0x2438,	// (0x00002438) list_single_2graphic_pane_g3_cp3

0x37f5,	// (0x000037f5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x37f5,	// (0x000037f5) list_single_2graphic_pane_g4_cp3

0x3801,	// (0x00003801) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3801,	// (0x00003801) list_single_2graphic_pane_t1_cp3

0x242c,	// (0x0000242c) list_single_midp_graphic_pane_g2_ParamLimits

0x242c,	// (0x0000242c) list_single_midp_graphic_pane_g2

0x2b2c,	// (0x00002b2c) aid_zoom_text_primary

0x2b34,	// (0x00002b34) aid_zoom_text_secondary

0x292a,	// (0x0000292a) status_small_pane_g7_ParamLimits

0x292a,	// (0x0000292a) status_small_pane_g7

0x294d,	// (0x0000294d) status_small_pane_t1_ParamLimits

0xb326,	// (0x0000b326) title_pane_g2

0x0003,

0xf498,	// (0x0000f498) title_pane_g

0xb5be,	// (0x0000b5be) aid_size_cell_colour_1_pane_ParamLimits

0xb5be,	// (0x0000b5be) aid_size_cell_colour_1_pane

0xb5d2,	// (0x0000b5d2) aid_size_cell_colour_2_pane_ParamLimits

0xb5d2,	// (0x0000b5d2) aid_size_cell_colour_2_pane

0xb5e6,	// (0x0000b5e6) aid_size_cell_colour_3_pane_ParamLimits

0xb5e6,	// (0x0000b5e6) aid_size_cell_colour_3_pane

0xb5fa,	// (0x0000b5fa) aid_size_cell_colour_4_pane_ParamLimits

0xb5fa,	// (0x0000b5fa) aid_size_cell_colour_4_pane

0x18f7,	// (0x000018f7) title_pane_stacon_g1_ParamLimits

0x18f7,	// (0x000018f7) title_pane_stacon_g1

0x3f81,	// (0x00003f81) popup_note_wait_window_g3_ParamLimits

0x3f81,	// (0x00003f81) popup_note_wait_window_g3

0x3ff8,	// (0x00003ff8) popup_note_wait_window_t5_ParamLimits

0x3ff8,	// (0x00003ff8) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc228,	// (0x0000c228) popup_feb_china_hwr_fs_window_ParamLimits

0xc228,	// (0x0000c228) popup_feb_china_hwr_fs_window

0xcd03,	// (0x0000cd03) aid_size_cell_hwr_fs_ParamLimits

0xcd03,	// (0x0000cd03) aid_size_cell_hwr_fs

0x391b,	// (0x0000391b) bg_popup_sub_pane_cp3_ParamLimits

0x391b,	// (0x0000391b) bg_popup_sub_pane_cp3

0xcd18,	// (0x0000cd18) grid_hwr_fs_pane_ParamLimits

0xcd18,	// (0x0000cd18) grid_hwr_fs_pane

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane_ParamLimits

0x393f,	// (0x0000393f) linegrid_hwr_fs_pane

0xcd30,	// (0x0000cd30) cell_hwr_fs_pane_ParamLimits

0xcd30,	// (0x0000cd30) cell_hwr_fs_pane

0x3973,	// (0x00003973) linegrid_hwr_fs_pane_g1_ParamLimits

0x3973,	// (0x00003973) linegrid_hwr_fs_pane_g1

0xcd56,	// (0x0000cd56) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd56,	// (0x0000cd56) linegrid_hwr_fs_pane_g2

0x3991,	// (0x00003991) linegrid_hwr_fs_pane_g3_ParamLimits

0x3991,	// (0x00003991) linegrid_hwr_fs_pane_g3

0x399d,	// (0x0000399d) linegrid_hwr_fs_pane_g4_ParamLimits

0x399d,	// (0x0000399d) linegrid_hwr_fs_pane_g4

0x39bb,	// (0x000039bb) linegrid_hwr_fs_pane_g5_ParamLimits

0x39bb,	// (0x000039bb) linegrid_hwr_fs_pane_g5

0x0004,

0xf5bd,	// (0x0000f5bd) linegrid_hwr_fs_pane_g_ParamLimits

0xf5bd,	// (0x0000f5bd) linegrid_hwr_fs_pane_g

0x39d1,	// (0x000039d1) cell_hwr_fs_pane_g1_ParamLimits

0x39d1,	// (0x000039d1) cell_hwr_fs_pane_g1

0x3557,	// (0x00003557) cell_hwr_fs_pane_g2_ParamLimits

0x3557,	// (0x00003557) cell_hwr_fs_pane_g2

0xcd68,	// (0x0000cd68) cell_hwr_fs_pane_g3_ParamLimits

0xcd68,	// (0x0000cd68) cell_hwr_fs_pane_g3

0xcd75,	// (0x0000cd75) cell_hwr_fs_pane_g4_ParamLimits

0xcd75,	// (0x0000cd75) cell_hwr_fs_pane_g4

0x0003,

0xf5c8,	// (0x0000f5c8) cell_hwr_fs_pane_g_ParamLimits

0xf5c8,	// (0x0000f5c8) cell_hwr_fs_pane_g

0xcd82,	// (0x0000cd82) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x16a6,	// (0x000016a6) aid_inside_area_popup_secondary

0xcfd0,	// (0x0000cfd0) aid_inside_area_window_primary_ParamLimits

0xcfd0,	// (0x0000cfd0) aid_inside_area_window_primary

0x55bc,	// (0x000055bc) ai2_news_ticker_pane

0x55c4,	// (0x000055c4) aid_size_cell_ai1_link_ParamLimits

0x55c4,	// (0x000055c4) aid_size_cell_ai1_link

0x55de,	// (0x000055de) popup_ai2_data_window_ParamLimits

0x55de,	// (0x000055de) popup_ai2_data_window

0x55fc,	// (0x000055fc) popup_ai2_link_window_ParamLimits

0x55fc,	// (0x000055fc) popup_ai2_link_window

0x391b,	// (0x0000391b) bg_popup_sub_pane_cp4_ParamLimits

0x391b,	// (0x0000391b) bg_popup_sub_pane_cp4

0x5612,	// (0x00005612) grid_ai2_link_pane_ParamLimits

0x5612,	// (0x00005612) grid_ai2_link_pane

0x5629,	// (0x00005629) popup_ai2_link_window_g1_ParamLimits

0x5629,	// (0x00005629) popup_ai2_link_window_g1

0x5635,	// (0x00005635) popup_ai2_link_window_g2_ParamLimits

0x5635,	// (0x00005635) popup_ai2_link_window_g2

0x0001,

0xac52,	// (0x0000ac52) popup_ai2_link_window_g_ParamLimits

0xac52,	// (0x0000ac52) popup_ai2_link_window_g

0x5646,	// (0x00005646) ai2_mp_button_pane

0x564e,	// (0x0000564e) ai2_mp_volume_pane

0x3b81,	// (0x00003b81) bg_popup_sub_pane_cp5_ParamLimits

0x3b81,	// (0x00003b81) bg_popup_sub_pane_cp5

0x5656,	// (0x00005656) heading_ai2_gene_pane_ParamLimits

0x5656,	// (0x00005656) heading_ai2_gene_pane

0x5662,	// (0x00005662) list_ai2_gene_pane_ParamLimits

0x5662,	// (0x00005662) list_ai2_gene_pane

0x56aa,	// (0x000056aa) cell_ai2_link_pane_ParamLimits

0x56aa,	// (0x000056aa) cell_ai2_link_pane

0x56c0,	// (0x000056c0) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5793,	// (0x00005793) ai2_mp_volume_pane_g1

0x579b,	// (0x0000579b) ai2_mp_volume_pane_g2

0x5708,	// (0x00005708) list_ai2_gene_pane_t1

0x57a3,	// (0x000057a3) ai2_mp_volume_pane_g3

0x0002,

0xac6b,	// (0x0000ac6b) ai2_mp_volume_pane_g

0x57ab,	// (0x000057ab) volume_small_pane_cp3

0x57b4,	// (0x000057b4) aid_size_cell_ai2_button

0x57bc,	// (0x000057bc) grid_ai2_button_pane

0x57c5,	// (0x000057c5) cell_ai2_button_pane_ParamLimits

0x57c5,	// (0x000057c5) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5753,	// (0x00005753) ai2_gene_pane_t1_ParamLimits

0x5753,	// (0x00005753) ai2_gene_pane_t1

0xc198,	// (0x0000c198) aid_height_parent_landscape

0xd1c3,	// (0x0000d1c3) aid_height_set_list

0x4f5e,	// (0x00004f5e) aid_size_parent

0x5325,	// (0x00005325) aid_size_cell_graphic_pane_ParamLimits

0x5672,	// (0x00005672) popup_ai2_data_window_g1_ParamLimits

0x5672,	// (0x00005672) popup_ai2_data_window_g1

0x567e,	// (0x0000567e) ai2_news_ticker_pane_g1

0x5686,	// (0x00005686) ai2_news_ticker_pane_g2

0x0001,

0xac57,	// (0x0000ac57) ai2_news_ticker_pane_g

0x568e,	// (0x0000568e) ai2_news_ticker_pane_t1

0x569c,	// (0x0000569c) ai2_news_ticker_pane_t2

0x0001,

0xac5c,	// (0x0000ac5c) ai2_news_ticker_pane_t

0x56c9,	// (0x000056c9) heading_ai2_gene_pane_g1

0x56d1,	// (0x000056d1) heading_ai2_gene_pane_t1_ParamLimits

0x56d1,	// (0x000056d1) heading_ai2_gene_pane_t1

0x56e6,	// (0x000056e6) list_highlight_pane_cp6

0x56ee,	// (0x000056ee) ai2_gene_pane_ParamLimits

0x56ee,	// (0x000056ee) ai2_gene_pane

0x5716,	// (0x00005716) list_ai2_gene_pane_t2

0x0001,

0xac61,	// (0x0000ac61) list_ai2_gene_pane_t

0x5724,	// (0x00005724) list_highlight_pane_cp8_ParamLimits

0x5724,	// (0x00005724) list_highlight_pane_cp8

0x5735,	// (0x00005735) ai2_gene_pane_g1_ParamLimits

0x5735,	// (0x00005735) ai2_gene_pane_g1

0x5747,	// (0x00005747) ai2_gene_pane_g2_ParamLimits

0x5747,	// (0x00005747) ai2_gene_pane_g2

0x0001,

0xac66,	// (0x0000ac66) ai2_gene_pane_g_ParamLimits

0xac66,	// (0x0000ac66) ai2_gene_pane_g

0x0dd6,	// (0x00000dd6) scroll_pane_cp12

0xc157,	// (0x0000c157) control_pane_t3_ParamLimits

0xc157,	// (0x0000c157) control_pane_t3

0x293e,	// (0x0000293e) status_small_pane_g8_ParamLimits

0x293e,	// (0x0000293e) status_small_pane_g8

0xc2ca,	// (0x0000c2ca) popup_find_window_ParamLimits

0xc577,	// (0x0000c577) popup_note_image_window_ParamLimits

0x3620,	// (0x00003620) list_double2_graphic_pane_vc_g1_ParamLimits

0x3620,	// (0x00003620) list_double2_graphic_pane_vc_g1

0x257f,	// (0x0000257f) list_double2_graphic_pane_vc_g2_ParamLimits

0x257f,	// (0x0000257f) list_double2_graphic_pane_vc_g2

0x362c,	// (0x0000362c) list_double2_graphic_pane_vc_g3_ParamLimits

0x362c,	// (0x0000362c) list_double2_graphic_pane_vc_g3

0x0002,

0xaa3d,	// (0x0000aa3d) list_double2_graphic_pane_vc_g_ParamLimits

0xaa3d,	// (0x0000aa3d) list_double2_graphic_pane_vc_g

0x3716,	// (0x00003716) list_double2_graphic_pane_vc_t1_ParamLimits

0x3716,	// (0x00003716) list_double2_graphic_pane_vc_t1

0x257f,	// (0x0000257f) list_single_heading_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_heading_pane_vc_g1

0x362c,	// (0x0000362c) list_single_heading_pane_vc_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_heading_pane_vc_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_heading_pane_vc_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_heading_pane_vc_g

0x381c,	// (0x0000381c) list_single_heading_pane_vc_t1_ParamLimits

0x381c,	// (0x0000381c) list_single_heading_pane_vc_t1

0x3832,	// (0x00003832) list_single_heading_pane_vc_t2_ParamLimits

0x3832,	// (0x00003832) list_single_heading_pane_vc_t2

0x0001,

0xaa6a,	// (0x0000aa6a) list_single_heading_pane_vc_t_ParamLimits

0xaa6a,	// (0x0000aa6a) list_single_heading_pane_vc_t

0x385c,	// (0x0000385c) list_setting_number_pane_vc_g1_ParamLimits

0x385c,	// (0x0000385c) list_setting_number_pane_vc_g1

0x3868,	// (0x00003868) list_setting_number_pane_vc_g2_ParamLimits

0x3868,	// (0x00003868) list_setting_number_pane_vc_g2

0x0001,

0xaa6f,	// (0x0000aa6f) list_setting_number_pane_vc_g_ParamLimits

0xaa6f,	// (0x0000aa6f) list_setting_number_pane_vc_g

0x3874,	// (0x00003874) list_setting_number_pane_vc_t1_ParamLimits

0x3874,	// (0x00003874) list_setting_number_pane_vc_t1

0x3888,	// (0x00003888) list_setting_number_pane_vc_t2_ParamLimits

0x3888,	// (0x00003888) list_setting_number_pane_vc_t2

0x38a4,	// (0x000038a4) list_setting_number_pane_vc_t3_ParamLimits

0x38a4,	// (0x000038a4) list_setting_number_pane_vc_t3

0x0002,

0xaa74,	// (0x0000aa74) list_setting_number_pane_vc_t_ParamLimits

0xaa74,	// (0x0000aa74) list_setting_number_pane_vc_t

0x38cc,	// (0x000038cc) set_value_pane_vc_ParamLimits

0x38cc,	// (0x000038cc) set_value_pane_vc

0x518b,	// (0x0000518b) list_double2_graphic_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double2_graphic_pane_vc

0x518b,	// (0x0000518b) list_double2_large_graphic_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double2_large_graphic_pane_vc

0x518b,	// (0x0000518b) list_double2_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double2_pane_vc

0x518b,	// (0x0000518b) list_double_graphic_heading_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_graphic_heading_pane_vc

0x518b,	// (0x0000518b) list_double_graphic_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_graphic_pane_vc

0x518b,	// (0x0000518b) list_double_heading_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_heading_pane_vc

0x518b,	// (0x0000518b) list_double_large_graphic_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_large_graphic_pane_vc

0x518b,	// (0x0000518b) list_double_number_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_number_pane_vc

0x518b,	// (0x0000518b) list_double_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_pane_vc

0x518b,	// (0x0000518b) list_double_time_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_double_time_pane_vc

0x518b,	// (0x0000518b) list_setting_number_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_setting_number_pane_vc

0x518b,	// (0x0000518b) list_setting_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_setting_pane_vc

0x518b,	// (0x0000518b) list_single_graphic_heading_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_single_graphic_heading_pane_vc

0x518b,	// (0x0000518b) list_single_heading_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_single_heading_pane_vc

0x518b,	// (0x0000518b) list_single_number_heading_pane_vc_ParamLimits

0x518b,	// (0x0000518b) list_single_number_heading_pane_vc

0x3620,	// (0x00003620) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3620,	// (0x00003620) list_double_graphic_heading_pane_vc_g1

0x57f8,	// (0x000057f8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57f8,	// (0x000057f8) list_double_graphic_heading_pane_vc_g2

0x5804,	// (0x00005804) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5804,	// (0x00005804) list_double_graphic_heading_pane_vc_g3

0x0002,

0xac72,	// (0x0000ac72) list_double_graphic_heading_pane_vc_g_ParamLimits

0xac72,	// (0x0000ac72) list_double_graphic_heading_pane_vc_g

0x5810,	// (0x00005810) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5810,	// (0x00005810) list_double_graphic_heading_pane_vc_t1

0x381c,	// (0x0000381c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x381c,	// (0x0000381c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xac79,	// (0x0000ac79) list_double_graphic_heading_pane_vc_t_ParamLimits

0xac79,	// (0x0000ac79) list_double_graphic_heading_pane_vc_t

0x385c,	// (0x0000385c) list_setting_pane_vc_g1_ParamLimits

0x385c,	// (0x0000385c) list_setting_pane_vc_g1

0x3868,	// (0x00003868) list_setting_pane_vc_g2_ParamLimits

0x3868,	// (0x00003868) list_setting_pane_vc_g2

0x0001,

0xaa6f,	// (0x0000aa6f) list_setting_pane_vc_g_ParamLimits

0xaa6f,	// (0x0000aa6f) list_setting_pane_vc_g

0x5a2d,	// (0x00005a2d) list_setting_pane_vc_t1_ParamLimits

0x5a2d,	// (0x00005a2d) list_setting_pane_vc_t1

0x5a41,	// (0x00005a41) list_setting_pane_vc_t2_ParamLimits

0x5a41,	// (0x00005a41) list_setting_pane_vc_t2

0x0001,

0xaca7,	// (0x0000aca7) list_setting_pane_vc_t_ParamLimits

0xaca7,	// (0x0000aca7) list_setting_pane_vc_t

0x38cc,	// (0x000038cc) set_value_pane_cp_vc_ParamLimits

0x38cc,	// (0x000038cc) set_value_pane_cp_vc

0x257f,	// (0x0000257f) list_single_number_heading_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_single_number_heading_pane_vc_g1

0x362c,	// (0x0000362c) list_single_number_heading_pane_vc_g2_ParamLimits

0x362c,	// (0x0000362c) list_single_number_heading_pane_vc_g2

0x0001,

0xaa65,	// (0x0000aa65) list_single_number_heading_pane_vc_g_ParamLimits

0xaa65,	// (0x0000aa65) list_single_number_heading_pane_vc_g

0x381c,	// (0x0000381c) list_single_number_heading_pane_vc_t1_ParamLimits

0x381c,	// (0x0000381c) list_single_number_heading_pane_vc_t1

0x5a63,	// (0x00005a63) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a63,	// (0x00005a63) list_single_number_heading_pane_vc_t2

0x5a77,	// (0x00005a77) list_single_number_heading_pane_vc_t3_ParamLimits

0x5a77,	// (0x00005a77) list_single_number_heading_pane_vc_t3

0x0002,

0xacac,	// (0x0000acac) list_single_number_heading_pane_vc_t_ParamLimits

0xacac,	// (0x0000acac) list_single_number_heading_pane_vc_t

0x3620,	// (0x00003620) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3620,	// (0x00003620) list_single_graphic_heading_pane_vc_g1

0x257f,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x257f,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4

0x362c,	// (0x0000362c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x362c,	// (0x0000362c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaa3d,	// (0x0000aa3d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaa3d,	// (0x0000aa3d) list_single_graphic_heading_pane_vc_g

0x381c,	// (0x0000381c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x381c,	// (0x0000381c) list_single_graphic_heading_pane_vc_t1

0x5a89,	// (0x00005a89) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5a89,	// (0x00005a89) list_single_graphic_heading_pane_vc_t2

0x0001,

0xacb3,	// (0x0000acb3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xacb3,	// (0x0000acb3) list_single_graphic_heading_pane_vc_t

0x257f,	// (0x0000257f) list_double2_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double2_pane_vc_g1

0x362c,	// (0x0000362c) list_double2_pane_vc_g2_ParamLimits

0x362c,	// (0x0000362c) list_double2_pane_vc_g2

0x0001,

0xaa65,	// (0x0000aa65) list_double2_pane_vc_g_ParamLimits

0xaa65,	// (0x0000aa65) list_double2_pane_vc_g

0x5a9d,	// (0x00005a9d) list_double2_pane_vc_t1_ParamLimits

0x5a9d,	// (0x00005a9d) list_double2_pane_vc_t1

0x5ab3,	// (0x00005ab3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5ab3,	// (0x00005ab3) list_double2_large_graphic_pane_vc_g1

0x257f,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x257f,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2

0x362c,	// (0x0000362c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x362c,	// (0x0000362c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xacb8,	// (0x0000acb8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xacb8,	// (0x0000acb8) list_double2_large_graphic_pane_vc_g

0x5abf,	// (0x00005abf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5abf,	// (0x00005abf) list_double2_large_graphic_pane_vc_t1

0x5ad5,	// (0x00005ad5) list_double_time_pane_vc_g1_ParamLimits

0x5ad5,	// (0x00005ad5) list_double_time_pane_vc_g1

0x5ae1,	// (0x00005ae1) list_double_time_pane_vc_g2_ParamLimits

0x5ae1,	// (0x00005ae1) list_double_time_pane_vc_g2

0x0001,

0xacbf,	// (0x0000acbf) list_double_time_pane_vc_g_ParamLimits

0xacbf,	// (0x0000acbf) list_double_time_pane_vc_g

0x5aed,	// (0x00005aed) list_double_time_pane_vc_t1_ParamLimits

0x5aed,	// (0x00005aed) list_double_time_pane_vc_t1

0x5b06,	// (0x00005b06) list_double_time_pane_vc_t2_ParamLimits

0x5b06,	// (0x00005b06) list_double_time_pane_vc_t2

0x5b26,	// (0x00005b26) list_double_time_pane_vc_t3_ParamLimits

0x5b26,	// (0x00005b26) list_double_time_pane_vc_t3

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t4_ParamLimits

0x5b3e,	// (0x00005b3e) list_double_time_pane_vc_t4

0x0003,

0xacc4,	// (0x0000acc4) list_double_time_pane_vc_t_ParamLimits

0xacc4,	// (0x0000acc4) list_double_time_pane_vc_t

0x257f,	// (0x0000257f) list_double_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double_pane_vc_g1

0x362c,	// (0x0000362c) list_double_pane_vc_g2_ParamLimits

0x362c,	// (0x0000362c) list_double_pane_vc_g2

0x0001,

0xaa65,	// (0x0000aa65) list_double_pane_vc_g_ParamLimits

0xaa65,	// (0x0000aa65) list_double_pane_vc_g

0x5b52,	// (0x00005b52) list_double_pane_vc_t1_ParamLimits

0x5b52,	// (0x00005b52) list_double_pane_vc_t1

0x5b64,	// (0x00005b64) list_double_pane_vc_t2_ParamLimits

0x5b64,	// (0x00005b64) list_double_pane_vc_t2

0x0001,

0xaccd,	// (0x0000accd) list_double_pane_vc_t_ParamLimits

0xaccd,	// (0x0000accd) list_double_pane_vc_t

0x257f,	// (0x0000257f) list_double_number_pane_vc_g1_ParamLimits

0x257f,	// (0x0000257f) list_double_number_pane_vc_g1

0x362c,	// (0x0000362c) list_double_number_pane_vc_g2_ParamLimits

0x362c,	// (0x0000362c) list_double_number_pane_vc_g2

0x0001,

0xaa65,	// (0x0000aa65) list_double_number_pane_vc_g_ParamLimits

0xaa65,	// (0x0000aa65) list_double_number_pane_vc_g

0x5b7c,	// (0x00005b7c) list_double_number_pane_vc_t1_ParamLimits

0x5b7c,	// (0x00005b7c) list_double_number_pane_vc_t1

0x5b90,	// (0x00005b90) list_double_number_pane_vc_t2_ParamLimits

0x5b90,	// (0x00005b90) list_double_number_pane_vc_t2

0x5b64,	// (0x00005b64) list_double_number_pane_vc_t3_ParamLimits

0x5b64,	// (0x00005b64) list_double_number_pane_vc_t3

0x0002,

0xacd2,	// (0x0000acd2) list_double_number_pane_vc_t_ParamLimits

0xacd2,	// (0x0000acd2) list_double_number_pane_vc_t

0x5ba2,	// (0x00005ba2) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5ba2,	// (0x00005ba2) list_double_large_graphic_pane_vc_g1

0x5bae,	// (0x00005bae) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5bae,	// (0x00005bae) list_double_large_graphic_pane_vc_g2

0x362c,	// (0x0000362c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x362c,	// (0x0000362c) list_double_large_graphic_pane_vc_g3

0x5bbd,	// (0x00005bbd) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5bbd,	// (0x00005bbd) list_double_large_graphic_pane_vc_g4

0x0003,

0xacd9,	// (0x0000acd9) list_double_large_graphic_pane_vc_g_ParamLimits

0xacd9,	// (0x0000acd9) list_double_large_graphic_pane_vc_g

0x5bc9,	// (0x00005bc9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5bc9,	// (0x00005bc9) list_double_large_graphic_pane_vc_t1

0x5bdb,	// (0x00005bdb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5bdb,	// (0x00005bdb) list_double_large_graphic_pane_vc_t2

0x0001,

0xace2,	// (0x0000ace2) list_double_large_graphic_pane_vc_t_ParamLimits

0xace2,	// (0x0000ace2) list_double_large_graphic_pane_vc_t

0x57f8,	// (0x000057f8) list_double_heading_pane_vc_g1_ParamLimits

0x57f8,	// (0x000057f8) list_double_heading_pane_vc_g1

0x5804,	// (0x00005804) list_double_heading_pane_vc_g2_ParamLimits

0x5804,	// (0x00005804) list_double_heading_pane_vc_g2

0x0001,

0xace7,	// (0x0000ace7) list_double_heading_pane_vc_g_ParamLimits

0xace7,	// (0x0000ace7) list_double_heading_pane_vc_g

0x5bf4,	// (0x00005bf4) list_double_heading_pane_vc_t1_ParamLimits

0x5bf4,	// (0x00005bf4) list_double_heading_pane_vc_t1

0x381c,	// (0x0000381c) list_double_heading_pane_vc_t2_ParamLimits

0x381c,	// (0x0000381c) list_double_heading_pane_vc_t2

0x0001,

0xacec,	// (0x0000acec) list_double_heading_pane_vc_t_ParamLimits

0xacec,	// (0x0000acec) list_double_heading_pane_vc_t

0x3620,	// (0x00003620) list_double_graphic_pane_vc_g1_ParamLimits

0x3620,	// (0x00003620) list_double_graphic_pane_vc_g1

0x5c08,	// (0x00005c08) list_double_graphic_pane_vc_g2_ParamLimits

0x5c08,	// (0x00005c08) list_double_graphic_pane_vc_g2

0x5c17,	// (0x00005c17) list_double_graphic_pane_vc_g3_ParamLimits

0x5c17,	// (0x00005c17) list_double_graphic_pane_vc_g3

0x0002,

0xacf1,	// (0x0000acf1) list_double_graphic_pane_vc_g_ParamLimits

0xacf1,	// (0x0000acf1) list_double_graphic_pane_vc_g

0x5c23,	// (0x00005c23) list_double_graphic_pane_vc_t1_ParamLimits

0x5c23,	// (0x00005c23) list_double_graphic_pane_vc_t1

0x5b64,	// (0x00005b64) list_double_graphic_pane_vc_t2_ParamLimits

0x5b64,	// (0x00005b64) list_double_graphic_pane_vc_t2

0x0001,

0xacf8,	// (0x0000acf8) list_double_graphic_pane_vc_t_ParamLimits

0xacf8,	// (0x0000acf8) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb170,	// (0x0000b170) aid_size_cell_touch_ParamLimits

0xb170,	// (0x0000b170) aid_size_cell_touch

0x02c3,	// (0x000002c3) popup_fast_swap_wide_window_ParamLimits

0x02c3,	// (0x000002c3) popup_fast_swap_wide_window

0xb2bf,	// (0x0000b2bf) touch_pane_ParamLimits

0xb2bf,	// (0x0000b2bf) touch_pane

0x12e5,	// (0x000012e5) button_value_adjust_pane_cp2

0x12ed,	// (0x000012ed) button_value_adjust_pane_cp4

0x1313,	// (0x00001313) form_field_data_pane_cp2

0xbaea,	// (0x0000baea) form_field_data_wide_pane_cp2

0x1b63,	// (0x00001b63) bg_scroll_pane_ParamLimits

0x1b82,	// (0x00001b82) scroll_handle_pane_ParamLimits

0x1b96,	// (0x00001b96) scroll_sc2_down_pane_ParamLimits

0x1b96,	// (0x00001b96) scroll_sc2_down_pane

0x1bbd,	// (0x00001bbd) scroll_sc2_up_pane_ParamLimits

0x1bbd,	// (0x00001bbd) scroll_sc2_up_pane

0xd5b9,	// (0x0000d5b9) grid_wheel_folder_pane_g1_ParamLimits

0xd5b9,	// (0x0000d5b9) grid_wheel_folder_pane_g1

0x225d,	// (0x0000225d) clock_nsta_pane_cp2_ParamLimits

0x225d,	// (0x0000225d) clock_nsta_pane_cp2

0xbf6e,	// (0x0000bf6e) listscroll_midp_pane_ParamLimits

0xbf7f,	// (0x0000bf7f) midp_canvas_pane

0x2b12,	// (0x00002b12) nsta_clock_indic_pane

0x2b70,	// (0x00002b70) listscroll_form_pane_vc

0x2b8c,	// (0x00002b8c) listscroll_set_pane_vc_ParamLimits

0x2b8c,	// (0x00002b8c) listscroll_set_pane_vc

0xc9ec,	// (0x0000c9ec) clock_nsta_pane

0xca16,	// (0x0000ca16) indicator_nsta_pane

0x3680,	// (0x00003680) bg_popup_sub_pane_cp2_ParamLimits

0x3694,	// (0x00003694) find_pane_cp2_ParamLimits

0x3694,	// (0x00003694) find_pane_cp2

0x36aa,	// (0x000036aa) grid_toobar_pane_ParamLimits

0x38da,	// (0x000038da) list_form_gen_pane_vc_ParamLimits

0x38da,	// (0x000038da) list_form_gen_pane_vc

0x38f0,	// (0x000038f0) scroll_pane_cp8_vc_ParamLimits

0x38f0,	// (0x000038f0) scroll_pane_cp8_vc

0x3a0f,	// (0x00003a0f) data_form_wide_pane_vc_ParamLimits

0x3a0f,	// (0x00003a0f) data_form_wide_pane_vc

0x3a1b,	// (0x00003a1b) form_field_data_wide_pane_vc_g1

0x3a23,	// (0x00003a23) form_field_data_wide_pane_vc_t1_ParamLimits

0x3a23,	// (0x00003a23) form_field_data_wide_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp6_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp6_vc

0xce1e,	// (0x0000ce1e) list_midp_pane_ParamLimits

0x5391,	// (0x00005391) scroll_pane_cp16_ParamLimits

0x5391,	// (0x00005391) scroll_pane_cp16

0x3d78,	// (0x00003d78) button_value_adjust_pane_ParamLimits

0x3d78,	// (0x00003d78) button_value_adjust_pane

0xd1d4,	// (0x0000d1d4) button_value_adjust_pane_cp6_ParamLimits

0xd1d4,	// (0x0000d1d4) button_value_adjust_pane_cp6

0xd316,	// (0x0000d316) settings_code_pane_cp_ParamLimits

0xd316,	// (0x0000d316) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa994,	// (0x0000a994) cell_touch_pane_g

0xd48e,	// (0x0000d48e) cell_touch_pane_cp_ParamLimits

0xd48e,	// (0x0000d48e) cell_touch_pane_cp

0xd4aa,	// (0x0000d4aa) cell_touch_pane_ParamLimits

0xd4aa,	// (0x0000d4aa) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5824,	// (0x00005824) list_set_graphic_pane_vc_g1_ParamLimits

0x5824,	// (0x00005824) list_set_graphic_pane_vc_g1

0x5830,	// (0x00005830) list_set_graphic_pane_vc_g2_ParamLimits

0x5830,	// (0x00005830) list_set_graphic_pane_vc_g2

0x0001,

0xac7e,	// (0x0000ac7e) list_set_graphic_pane_vc_g_ParamLimits

0xac7e,	// (0x0000ac7e) list_set_graphic_pane_vc_g

0x583c,	// (0x0000583c) text_primary_small_cp13_vc_ParamLimits

0x583c,	// (0x0000583c) text_primary_small_cp13_vc

0x5854,	// (0x00005854) list_set_graphic_pane_vc_ParamLimits

0x5854,	// (0x00005854) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5868,	// (0x00005868) setting_code_pane_vc_t1

0x5876,	// (0x00005876) set_text_pane_vc_t1_ParamLimits

0x5876,	// (0x00005876) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5894,	// (0x00005894) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x589e,	// (0x0000589e) setting_slider_graphic_pane_vc_g1

0x58a6,	// (0x000058a6) setting_slider_graphic_pane_vc_t1

0x58b4,	// (0x000058b4) setting_slider_graphic_pane_vc_t2

0x0001,

0xac83,	// (0x0000ac83) setting_slider_graphic_pane_vc_t

0x58c2,	// (0x000058c2) slider_set_pane_cp_vc

0x58ca,	// (0x000058ca) slider_set_pane_vc_g1

0x58d3,	// (0x000058d3) slider_set_pane_vc_g2

0x0006,

0xac88,	// (0x0000ac88) slider_set_pane_vc_g

0x1517,	// (0x00001517) set_opt_bg_pane_g1_copy1

0x151f,	// (0x0000151f) set_opt_bg_pane_g2_copy1

0x58ff,	// (0x000058ff) set_opt_bg_pane_g3_copy1

0x152f,	// (0x0000152f) set_opt_bg_pane_g4_copy1

0x1537,	// (0x00001537) set_opt_bg_pane_g5_copy1

0x153f,	// (0x0000153f) set_opt_bg_pane_g6_copy1

0x5909,	// (0x00005909) set_opt_bg_pane_g7_copy1

0x5913,	// (0x00005913) set_opt_bg_pane_g8_copy1

0x591d,	// (0x0000591d) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x5927,	// (0x00005927) setting_slider_pane_vc_t1

0x58a6,	// (0x000058a6) setting_slider_pane_vc_t2

0x58b4,	// (0x000058b4) setting_slider_pane_vc_t3

0x0002,

0xac97,	// (0x0000ac97) setting_slider_pane_vc_t

0x58c2,	// (0x000058c2) slider_set_pane_vc

0x459a,	// (0x0000459a) volume_set_pane_vc_g1

0x45a3,	// (0x000045a3) volume_set_pane_vc_g2

0x45ac,	// (0x000045ac) volume_set_pane_vc_g3

0x45b5,	// (0x000045b5) volume_set_pane_vc_g4

0x45be,	// (0x000045be) volume_set_pane_vc_g5

0x45c7,	// (0x000045c7) volume_set_pane_vc_g6

0x45d0,	// (0x000045d0) volume_set_pane_vc_g7

0x45d9,	// (0x000045d9) volume_set_pane_vc_g8

0x45e2,	// (0x000045e2) volume_set_pane_vc_g9

0x45eb,	// (0x000045eb) volume_set_pane_vc_g10

0x0009,

0xab35,	// (0x0000ab35) volume_set_pane_vc_g

0x5936,	// (0x00005936) volume_set_pane_vc

0x593e,	// (0x0000593e) button_value_adjust_pane_cp1_vc

0x5948,	// (0x00005948) list_highlight_pane_cp2_vc

0x5951,	// (0x00005951) list_set_pane_vc_ParamLimits

0x5951,	// (0x00005951) list_set_pane_vc

0x59bb,	// (0x000059bb) main_pane_set_vc_t1_ParamLimits

0x59bb,	// (0x000059bb) main_pane_set_vc_t1

0x59d0,	// (0x000059d0) main_pane_set_vc_t2_ParamLimits

0x59d0,	// (0x000059d0) main_pane_set_vc_t2

0x59e2,	// (0x000059e2) main_pane_set_vc_t3_ParamLimits

0x59e2,	// (0x000059e2) main_pane_set_vc_t3

0x59f6,	// (0x000059f6) main_pane_set_vc_t4_ParamLimits

0x59f6,	// (0x000059f6) main_pane_set_vc_t4

0x0003,

0xac9e,	// (0x0000ac9e) main_pane_set_vc_t_ParamLimits

0xac9e,	// (0x0000ac9e) main_pane_set_vc_t

0x5a0a,	// (0x00005a0a) setting_code_pane_vc_ParamLimits

0x5a0a,	// (0x00005a0a) setting_code_pane_vc

0x5a1b,	// (0x00005a1b) setting_slider_graphic_pane_vc

0x5a1b,	// (0x00005a1b) setting_slider_pane_vc

0x5a1b,	// (0x00005a1b) setting_text_pane_vc

0x5a1b,	// (0x00005a1b) setting_volume_pane_vc

0x5a25,	// (0x00005a25) scroll_pane_cp121_vc

0x12d3,	// (0x000012d3) set_content_pane_vc

0x5c35,	// (0x00005c35) button_value_adjust_pane_g1

0x5c3e,	// (0x00005c3e) button_value_adjust_pane_g2

0x0001,

0xacfd,	// (0x0000acfd) button_value_adjust_pane_g

0x5c47,	// (0x00005c47) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5c47,	// (0x00005c47) form_field_slider_wide_pane_vc_t1

0x5c5b,	// (0x00005c5b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5c5b,	// (0x00005c5b) form_field_slider_wide_pane_vc_t2

0x0001,

0xad02,	// (0x0000ad02) form_field_slider_wide_pane_vc_t_ParamLimits

0xad02,	// (0x0000ad02) form_field_slider_wide_pane_vc_t

0x0835,	// (0x00000835) input_focus_pane_cp10_vc_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp10_vc

0x5c6d,	// (0x00005c6d) slider_cont_pane_cp1_vc_ParamLimits

0x5c6d,	// (0x00005c6d) slider_cont_pane_cp1_vc

0x58ca,	// (0x000058ca) slider_form_pane_g1_cp2

0x58d3,	// (0x000058d3) slider_form_pane_g2_cp2

0x5c86,	// (0x00005c86) form_field_slider_pane_vc_t3

0x5c94,	// (0x00005c94) form_field_slider_pane_vc_t4

0x5ca2,	// (0x00005ca2) slider_form_pane_vc_ParamLimits

0x5ca2,	// (0x00005ca2) slider_form_pane_vc

0x5caf,	// (0x00005caf) form_field_slider_pane_vc_t1_ParamLimits

0x5caf,	// (0x00005caf) form_field_slider_pane_vc_t1

0x5c5b,	// (0x00005c5b) form_field_slider_pane_vc_t2_ParamLimits

0x5c5b,	// (0x00005c5b) form_field_slider_pane_vc_t2

0x0001,

0xad12,	// (0x0000ad12) form_field_slider_pane_vc_t_ParamLimits

0xad12,	// (0x0000ad12) form_field_slider_pane_vc_t

0x0835,	// (0x00000835) input_focus_pane_cp9_vc_ParamLimits

0x0835,	// (0x00000835) input_focus_pane_cp9_vc

0x5ccb,	// (0x00005ccb) slider_cont_pane_vc_ParamLimits

0x5ccb,	// (0x00005ccb) slider_cont_pane_vc

0x5cdd,	// (0x00005cdd) list_form_graphic_pane_cp_vc_ParamLimits

0x5cdd,	// (0x00005cdd) list_form_graphic_pane_cp_vc

0x3a1b,	// (0x00003a1b) form_field_popup_wide_pane_vc_g1

0x5cf2,	// (0x00005cf2) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5cf2,	// (0x00005cf2) form_field_popup_wide_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp8_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp8_vc

0x5d09,	// (0x00005d09) list_form_wide_pane_vc_ParamLimits

0x5d09,	// (0x00005d09) list_form_wide_pane_vc

0x5d15,	// (0x00005d15) list_form_graphic_pane_vc_g1

0x5d1d,	// (0x00005d1d) list_form_graphic_pane_vc_t1_ParamLimits

0x5d1d,	// (0x00005d1d) list_form_graphic_pane_vc_t1

0x050f,	// (0x0000050f) list_highlight_pane_cp5_vc_ParamLimits

0x050f,	// (0x0000050f) list_highlight_pane_cp5_vc

0x5d39,	// (0x00005d39) list_form_graphic_pane_vc_ParamLimits

0x5d39,	// (0x00005d39) list_form_graphic_pane_vc

0x3a1b,	// (0x00003a1b) form_field_popup_pane_vc_g1

0x5d4f,	// (0x00005d4f) form_field_popup_pane_vc_t1_ParamLimits

0x5d4f,	// (0x00005d4f) form_field_popup_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_cp7_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_cp7_vc

0x5d66,	// (0x00005d66) list_form_pane_vc_ParamLimits

0x5d66,	// (0x00005d66) list_form_pane_vc

0x5d72,	// (0x00005d72) data_form_pane_vc_t1_ParamLimits

0x5d72,	// (0x00005d72) data_form_pane_vc_t1

0x1517,	// (0x00001517) input_focus_pane_vc_g1

0x151f,	// (0x0000151f) input_focus_pane_vc_g2

0x1527,	// (0x00001527) input_focus_pane_vc_g3

0x152f,	// (0x0000152f) input_focus_pane_vc_g4

0x1537,	// (0x00001537) input_focus_pane_vc_g5

0x153f,	// (0x0000153f) input_focus_pane_vc_g6

0x1547,	// (0x00001547) input_focus_pane_vc_g7

0x154f,	// (0x0000154f) input_focus_pane_vc_g8

0x1557,	// (0x00001557) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xa91d,	// (0x0000a91d) input_focus_pane_vc_g

0x3a0f,	// (0x00003a0f) data_form_pane_vc_ParamLimits

0x3a0f,	// (0x00003a0f) data_form_pane_vc

0x3a1b,	// (0x00003a1b) form_field_data_pane_vc_g1

0x5d8f,	// (0x00005d8f) form_field_data_pane_vc_t1_ParamLimits

0x5d8f,	// (0x00005d8f) form_field_data_pane_vc_t1

0x13db,	// (0x000013db) input_focus_pane_vc_ParamLimits

0x13db,	// (0x000013db) input_focus_pane_vc

0x5da9,	// (0x00005da9) button_value_adjust_pane_cp3_vc

0x5db1,	// (0x00005db1) button_value_adjust_pane_cp5_vc

0x5db9,	// (0x00005db9) form_field_data_pane_vc_ParamLimits

0x5db9,	// (0x00005db9) form_field_data_pane_vc

0x5dd4,	// (0x00005dd4) form_field_data_pane_vc_cp2

0x5ddc,	// (0x00005ddc) form_field_data_wide_pane_vc_ParamLimits

0x5ddc,	// (0x00005ddc) form_field_data_wide_pane_vc

0x5df6,	// (0x00005df6) form_field_data_wide_pane_vc_cp2

0x5dfe,	// (0x00005dfe) form_field_popup_pane_vc_ParamLimits

0x5dfe,	// (0x00005dfe) form_field_popup_pane_vc

0x5e19,	// (0x00005e19) form_field_popup_wide_pane_vc_ParamLimits

0x5e19,	// (0x00005e19) form_field_popup_wide_pane_vc

0x5e33,	// (0x00005e33) form_field_slider_pane_vc_ParamLimits

0x5e33,	// (0x00005e33) form_field_slider_pane_vc

0x5e46,	// (0x00005e46) form_field_slider_wide_pane_vc_ParamLimits

0x5e46,	// (0x00005e46) form_field_slider_wide_pane_vc

0xd4c8,	// (0x0000d4c8) grid_touch_1_pane_ParamLimits

0xd4c8,	// (0x0000d4c8) grid_touch_1_pane

0xd4dc,	// (0x0000d4dc) grid_touch_2_pane_ParamLimits

0xd4dc,	// (0x0000d4dc) grid_touch_2_pane

0x5f1d,	// (0x00005f1d) touch_pane_g1_ParamLimits

0x5f1d,	// (0x00005f1d) touch_pane_g1

0x5e7f,	// (0x00005e7f) cell_app_pane_cp_wide_ParamLimits

0x5e7f,	// (0x00005e7f) cell_app_pane_cp_wide

0x5e90,	// (0x00005e90) grid_popup_fast_wide_pane_ParamLimits

0x5e90,	// (0x00005e90) grid_popup_fast_wide_pane

0x5ea4,	// (0x00005ea4) scroll_pane_cp19_ParamLimits

0x5ea4,	// (0x00005ea4) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5eb8,	// (0x00005eb8) listscroll_popup_fast_wide_pane

0x1713,	// (0x00001713) grid_indicator_nsta_pane

0x5ec0,	// (0x00005ec0) clock_nsta_pane_g1

0x5ec9,	// (0x00005ec9) clock_nsta_pane_t1

0xd508,	// (0x0000d508) cell_indicator_nsta_pane_ParamLimits

0xd508,	// (0x0000d508) cell_indicator_nsta_pane

0x5f1d,	// (0x00005f1d) cell_indicator_nsta_pane_g1

0xd525,	// (0x0000d525) cell_indicator_nsta_pane_g2

0x0001,

0xf643,	// (0x0000f643) cell_indicator_nsta_pane_g

0x5f40,	// (0x00005f40) clock_nsta_pane_cp

0x5f48,	// (0x00005f48) indicator_nsta_pane_cp

0x5f50,	// (0x00005f50) nsta_clock_indic_pane_g1

0x0685,	// (0x00000685) grid_indicator_pane

0x1caf,	// (0x00001caf) scroll_pane_cp29

0x2187,	// (0x00002187) indicator_nsta_pane_cp2_ParamLimits

0x2187,	// (0x00002187) indicator_nsta_pane_cp2

0x050f,	// (0x0000050f) main_apps_wheel_pane

0x3c09,	// (0x00003c09) form_midp_field_text_pane_ParamLimits

0x3d58,	// (0x00003d58) scroll_bar_cp050_ParamLimits

0x5f88,	// (0x00005f88) cell_indicator_pane_ParamLimits

0x5f88,	// (0x00005f88) cell_indicator_pane

0x5fa0,	// (0x00005fa0) cell_indicator_pane_g1

0xd53b,	// (0x0000d53b) grid_wheel_folder_pane_ParamLimits

0xd53b,	// (0x0000d53b) grid_wheel_folder_pane

0xd549,	// (0x0000d549) list_wheel_apps_pane_ParamLimits

0xd549,	// (0x0000d549) list_wheel_apps_pane

0xd557,	// (0x0000d557) main_apps_wheel_pane_g1_ParamLimits

0xd557,	// (0x0000d557) main_apps_wheel_pane_g1

0xd567,	// (0x0000d567) main_apps_wheel_pane_g2_ParamLimits

0xd567,	// (0x0000d567) main_apps_wheel_pane_g2

0x0001,

0xf648,	// (0x0000f648) main_apps_wheel_pane_g_ParamLimits

0xf648,	// (0x0000f648) main_apps_wheel_pane_g

0xd577,	// (0x0000d577) main_apps_wheel_pane_t1_ParamLimits

0xd577,	// (0x0000d577) main_apps_wheel_pane_t1

0xd58f,	// (0x0000d58f) list_wheel_apps_pane_g1

0xd597,	// (0x0000d597) list_wheel_apps_pane_g2

0xd59f,	// (0x0000d59f) list_wheel_apps_pane_g3

0xd5a7,	// (0x0000d5a7) list_wheel_apps_pane_g4

0xd5af,	// (0x0000d5af) list_wheel_apps_pane_g5

0x0004,

0xf64d,	// (0x0000f64d) list_wheel_apps_pane_g

0x248a,	// (0x0000248a) navi_icon_text_pane

0xc8e5,	// (0x0000c8e5) aid_fill_nsta

0xd5cc,	// (0x0000d5cc) navi_icon_text_pane_g1

0xd5d8,	// (0x0000d5d8) navi_icon_text_pane_t1

0xbf56,	// (0x0000bf56) list_set_graphic_pane_t1_ParamLimits

0xbf56,	// (0x0000bf56) list_set_graphic_pane_t1

0x4478,	// (0x00004478) popup_midp_note_alarm_window_t6_ParamLimits

0x4478,	// (0x00004478) popup_midp_note_alarm_window_t6

0x448a,	// (0x0000448a) popup_midp_note_alarm_window_t7_ParamLimits

0x448a,	// (0x0000448a) popup_midp_note_alarm_window_t7

0x449c,	// (0x0000449c) popup_midp_note_alarm_window_t8_ParamLimits

0x449c,	// (0x0000449c) popup_midp_note_alarm_window_t8

0x44ae,	// (0x000044ae) popup_midp_note_alarm_window_t9_ParamLimits

0x44ae,	// (0x000044ae) popup_midp_note_alarm_window_t9

0x44c0,	// (0x000044c0) popup_midp_note_alarm_window_t10_ParamLimits

0x44c0,	// (0x000044c0) popup_midp_note_alarm_window_t10

0x44d2,	// (0x000044d2) popup_midp_note_alarm_window_t11_ParamLimits

0x44d2,	// (0x000044d2) popup_midp_note_alarm_window_t11

0x44e4,	// (0x000044e4) scroll_pane_cp17_ParamLimits

0x44e4,	// (0x000044e4) scroll_pane_cp17

0x459a,	// (0x0000459a) volume_small_pane_cp_g1

0x6099,	// (0x00006099) volume_small_pane_cp_g2

0x60a2,	// (0x000060a2) volume_small_pane_cp_g3

0x60ab,	// (0x000060ab) volume_small_pane_cp_g4

0x60b4,	// (0x000060b4) volume_small_pane_cp_g5

0x60bd,	// (0x000060bd) volume_small_pane_cp_g6

0x60c6,	// (0x000060c6) volume_small_pane_cp_g7

0x60cf,	// (0x000060cf) volume_small_pane_cp_g8

0x60d8,	// (0x000060d8) volume_small_pane_cp_g9

0x60e1,	// (0x000060e1) volume_small_pane_cp_g10

0x26eb,	// (0x000026eb) midp_ticker_pane_g1_ParamLimits

0x26f7,	// (0x000026f7) midp_ticker_pane_g2_ParamLimits

0xa9e5,	// (0x0000a9e5) midp_ticker_pane_g_ParamLimits

0xc016,	// (0x0000c016) midp_ticker_pane_t1_ParamLimits

0xc905,	// (0x0000c905) aid_fill_nsta_2

0x3d44,	// (0x00003d44) list_form2_midp_pane

0x5146,	// (0x00005146) midp_editing_number_pane_ParamLimits

0x5155,	// (0x00005155) midp_ticker_pane_ParamLimits

0x60ea,	// (0x000060ea) form2_midp_field_pane

0x610e,	// (0x0000610e) scroll_pane_cp51

0x612e,	// (0x0000612e) form2_midp_button_pane_ParamLimits

0x612e,	// (0x0000612e) form2_midp_button_pane

0x6140,	// (0x00006140) form2_midp_content_pane_ParamLimits

0x6140,	// (0x00006140) form2_midp_content_pane

0x615a,	// (0x0000615a) form2_midp_field_choice_group_pane

0x6162,	// (0x00006162) form2_midp_field_pane_g1

0x616a,	// (0x0000616a) form2_midp_field_pane_g2

0x6172,	// (0x00006172) form2_midp_field_pane_g3

0x617a,	// (0x0000617a) form2_midp_field_pane_g4

0x0003,

0xad55,	// (0x0000ad55) form2_midp_field_pane_g

0x6182,	// (0x00006182) form2_midp_gauge_slider_pane

0x618a,	// (0x0000618a) form2_midp_gauge_wait_pane

0x6192,	// (0x00006192) form2_midp_image_pane_ParamLimits

0x6192,	// (0x00006192) form2_midp_image_pane

0x61ad,	// (0x000061ad) form2_midp_label_pane_ParamLimits

0x61ad,	// (0x000061ad) form2_midp_label_pane

0xd606,	// (0x0000d606) form2_midp_label_pane_cp_ParamLimits

0xd606,	// (0x0000d606) form2_midp_label_pane_cp

0x61ed,	// (0x000061ed) form2_midp_string_pane_ParamLimits

0x61ed,	// (0x000061ed) form2_midp_string_pane

0xd627,	// (0x0000d627) form2_midp_text_pane_ParamLimits

0xd627,	// (0x0000d627) form2_midp_text_pane

0x6220,	// (0x00006220) form2_midp_time_pane

0x6230,	// (0x00006230) input_focus_pane_cp51_ParamLimits

0x6230,	// (0x00006230) input_focus_pane_cp51

0x6248,	// (0x00006248) form2_midp_label_pane_t1_ParamLimits

0x6248,	// (0x00006248) form2_midp_label_pane_t1

0xd648,	// (0x0000d648) form2_mdip_text_pane_t1_ParamLimits

0xd648,	// (0x0000d648) form2_mdip_text_pane_t1

0x62b0,	// (0x000062b0) form2_midp_time_pane_t1

0x62cb,	// (0x000062cb) form2_midp_gauge_slider_pane_t1

0xd667,	// (0x0000d667) form2_midp_gauge_slider_pane_t2

0xd679,	// (0x0000d679) form2_midp_gauge_slider_pane_t3

0x0002,

0xf65d,	// (0x0000f65d) form2_midp_gauge_slider_pane_t

0x6301,	// (0x00006301) form2_midp_slider_pane

0x630d,	// (0x0000630d) form2_midp_gauge_wait_pane_t1

0x631b,	// (0x0000631b) form2_midp_wait_pane_ParamLimits

0x631b,	// (0x0000631b) form2_midp_wait_pane

0xcd90,	// (0x0000cd90) list_single_2graphic_pane_cp4_ParamLimits

0xcd90,	// (0x0000cd90) list_single_2graphic_pane_cp4

0xd68b,	// (0x0000d68b) list_single_midp_graphic_pane_cp_ParamLimits

0xd68b,	// (0x0000d68b) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x636a,	// (0x0000636a) list_single_2graphic_pane_g1_cp4

0x56c9,	// (0x000056c9) list_single_2graphic_pane_g2_cp4

0x6372,	// (0x00006372) list_single_2graphic_pane_t1_cp4

0x050f,	// (0x0000050f) list_highlight_pane_cp21

0x6381,	// (0x00006381) list_single_midp_graphic_pane_g4_cp

0x6390,	// (0x00006390) list_single_midp_graphic_pane_t1_cp

0xd6ac,	// (0x0000d6ac) form2_mdip_string_pane_t1_ParamLimits

0xd6ac,	// (0x0000d6ac) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1087,	// (0x00001087) list_double_large_graphic_pane_g5_ParamLimits

0x1087,	// (0x00001087) list_double_large_graphic_pane_g5

0xbf6e,	// (0x0000bf6e) midp_form_pane_ParamLimits

0x050f,	// (0x0000050f) main_apps_wheel_pane_ParamLimits

0xc5fd,	// (0x0000c5fd) popup_preview_window_ParamLimits

0xc5fd,	// (0x0000c5fd) popup_preview_window

0x316a,	// (0x0000316a) popup_touch_info_window_ParamLimits

0x316a,	// (0x0000316a) popup_touch_info_window

0x318c,	// (0x0000318c) popup_touch_menu_window_ParamLimits

0x318c,	// (0x0000318c) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x644a,	// (0x0000644a) list_touch_menu_pane

0x6452,	// (0x00006452) list_single_touch_menu_pane_ParamLimits

0x6452,	// (0x00006452) list_single_touch_menu_pane

0x646d,	// (0x0000646d) list_single_touch_menu_pane_t1

0x050f,	// (0x0000050f) bg_popup_sub_pane_cp7_ParamLimits

0x050f,	// (0x0000050f) bg_popup_sub_pane_cp7

0x647b,	// (0x0000647b) heading_sub_pane

0x6483,	// (0x00006483) list_touch_info_pane_ParamLimits

0x6483,	// (0x00006483) list_touch_info_pane

0x6492,	// (0x00006492) list_single_touch_info_pane_ParamLimits

0x6492,	// (0x00006492) list_single_touch_info_pane

0x64a4,	// (0x000064a4) list_single_touch_info_pane_t1

0x64b2,	// (0x000064b2) list_single_touch_info_pane_t2

0x0001,

0xad6c,	// (0x0000ad6c) list_single_touch_info_pane_t

0x260e,	// (0x0000260e) bg_popup_heading_pane_cp

0x64c0,	// (0x000064c0) heading_sub_pane_t1

0x391b,	// (0x0000391b) bg_popup_preview_window_pane_cp_ParamLimits

0x391b,	// (0x0000391b) bg_popup_preview_window_pane_cp

0x647b,	// (0x0000647b) heading_preview_pane

0x6483,	// (0x00006483) list_preview_pane_ParamLimits

0x6483,	// (0x00006483) list_preview_pane

0x64ce,	// (0x000064ce) popup_preview_window_g1

0x6492,	// (0x00006492) list_single_preview_pane_ParamLimits

0x6492,	// (0x00006492) list_single_preview_pane

0x64d6,	// (0x000064d6) list_single_preview_pane_g1

0x64de,	// (0x000064de) list_single_preview_pane_t1

0x64a4,	// (0x000064a4) list_single_preview_pane_t2

0x0001,

0xad71,	// (0x0000ad71) list_single_preview_pane_t

0x64ec,	// (0x000064ec) bg_popup_heading_pane_cp2_ParamLimits

0x64ec,	// (0x000064ec) bg_popup_heading_pane_cp2

0x6502,	// (0x00006502) heading_preview_pane_g1

0x650a,	// (0x0000650a) heading_preview_pane_t1_ParamLimits

0x650a,	// (0x0000650a) heading_preview_pane_t1

0x06a8,	// (0x000006a8) soft_indicator_pane_t1_ParamLimits

0x0db3,	// (0x00000db3) scroll_pane_ParamLimits

0x1bab,	// (0x00001bab) scroll_sc2_left_pane

0x1bb4,	// (0x00001bb4) scroll_sc2_right_pane

0x1bd3,	// (0x00001bd3) scroll_bg_pane_g1_ParamLimits

0x1be8,	// (0x00001be8) scroll_bg_pane_g2_ParamLimits

0x1c00,	// (0x00001c00) scroll_bg_pane_g3_ParamLimits

0xa974,	// (0x0000a974) scroll_bg_pane_g_ParamLimits

0x1bd3,	// (0x00001bd3) scroll_handle_pane_g1_ParamLimits

0x1c22,	// (0x00001c22) scroll_handle_pane_g2_ParamLimits

0x1c00,	// (0x00001c00) scroll_handle_pane_g3_ParamLimits

0xa97b,	// (0x0000a97b) scroll_handle_pane_g_ParamLimits

0x2bce,	// (0x00002bce) popup_choice_list_window_ParamLimits

0x2bce,	// (0x00002bce) popup_choice_list_window

0x368c,	// (0x0000368c) choice_list_pane

0x3754,	// (0x00003754) cell_toolbar_pane_t1

0x377c,	// (0x0000377c) toolbar_button_pane_ParamLimits

0x4b20,	// (0x00004b20) ai_gene_pane_1_t2_ParamLimits

0x4b20,	// (0x00004b20) ai_gene_pane_1_t2

0x0001,

0xab91,	// (0x0000ab91) ai_gene_pane_1_t_ParamLimits

0xab91,	// (0x0000ab91) ai_gene_pane_1_t

0x6527,	// (0x00006527) scroll_sc2_left_pane_g1

0x6527,	// (0x00006527) scroll_sc2_right_pane_g1

0x2b9e,	// (0x00002b9e) bg_popup_sub_pane_cp10

0x6531,	// (0x00006531) list_choice_list_pane

0x6548,	// (0x00006548) list_single_choice_list_pane_ParamLimits

0x6548,	// (0x00006548) list_single_choice_list_pane

0x655c,	// (0x0000655c) list_single_choice_list_pane_g1

0x6564,	// (0x00006564) list_single_choice_list_pane_t1_ParamLimits

0x6564,	// (0x00006564) list_single_choice_list_pane_t1

0x6579,	// (0x00006579) choice_list_pane_g1

0x6581,	// (0x00006581) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x190b,	// (0x0000190b) title_pane_stacon_g2_ParamLimits

0x190b,	// (0x0000190b) title_pane_stacon_g2

0x0002,

0xa95a,	// (0x0000a95a) title_pane_stacon_g_ParamLimits

0xa95a,	// (0x0000a95a) title_pane_stacon_g

0x260e,	// (0x0000260e) cursor_press_pane

0xc27e,	// (0x0000c27e) popup_fep_hwr_window_ParamLimits

0xc27e,	// (0x0000c27e) popup_fep_hwr_window

0x2d0e,	// (0x00002d0e) popup_fep_vkb_window_ParamLimits

0x2d0e,	// (0x00002d0e) popup_fep_vkb_window

0x658f,	// (0x0000658f) cursor_press_pane_g1

0x0002,

0xf671,	// (0x0000f671) fep_vkb_side_pane_g_ParamLimits

0x65d0,	// (0x000065d0) fep_hwr_candidate_pane_ParamLimits

0x65d0,	// (0x000065d0) fep_hwr_candidate_pane

0x65fa,	// (0x000065fa) fep_hwr_side_pane_ParamLimits

0x65fa,	// (0x000065fa) fep_hwr_side_pane

0x661c,	// (0x0000661c) fep_hwr_top_pane_ParamLimits

0x661c,	// (0x0000661c) fep_hwr_top_pane

0x6634,	// (0x00006634) fep_hwr_write_pane_ParamLimits

0x6634,	// (0x00006634) fep_hwr_write_pane

0xf671,	// (0x0000f671) fep_vkb_side_pane_g

0x666e,	// (0x0000666e) fep_hwr_top_pane_g1

0x6680,	// (0x00006680) fep_hwr_top_pane_g2

0x6692,	// (0x00006692) fep_hwr_top_pane_g3

0x0002,

0xad76,	// (0x0000ad76) fep_hwr_top_pane_g

0x66a7,	// (0x000066a7) fep_hwr_top_text_pane

0x1d77,	// (0x00001d77) fep_hwr_top_text_pane_g1

0x6783,	// (0x00006783) fep_hwr_top_text_pane_t1

0x67e3,	// (0x000067e3) fep_hwr_candidate_pane_g1

0x6a54,	// (0x00006a54) fep_vkb_keypad_pane_g3_ParamLimits

0x6a54,	// (0x00006a54) fep_vkb_keypad_pane_g3

0x6a80,	// (0x00006a80) fep_vkb_keypad_pane_g4_ParamLimits

0x6a80,	// (0x00006a80) fep_vkb_keypad_pane_g4

0x6af7,	// (0x00006af7) fep_vkb_bottom_pane_g2_ParamLimits

0x6af7,	// (0x00006af7) fep_vkb_bottom_pane_g2

0x0001,

0xada1,	// (0x0000ada1) fep_vkb_bottom_pane_g_ParamLimits

0xada1,	// (0x0000ada1) fep_vkb_bottom_pane_g

0x6527,	// (0x00006527) cell_vkb_side_pane_g2

0x0001,

0xadab,	// (0x0000adab) cell_vkb_side_pane_g

0x6b82,	// (0x00006b82) cell_vkb_side_pane_t1

0x6b90,	// (0x00006b90) cell_vkb_side_pane_t1_copy1

0x6527,	// (0x00006527) bg_fep_vkb_candidate_pane_g2

0x6cd4,	// (0x00006cd4) cell_vkb_candidate_pane_ParamLimits

0x6817,	// (0x00006817) aid_size_cell_vkb_ParamLimits

0x6817,	// (0x00006817) aid_size_cell_vkb

0x6cd4,	// (0x00006cd4) cell_vkb_candidate_pane

0x6d0e,	// (0x00006d0e) bg_popup_fep_shadow_pane_g1

0xd795,	// (0x0000d795) fep_vkb_bottom_pane_ParamLimits

0xd795,	// (0x0000d795) fep_vkb_bottom_pane

0x68e6,	// (0x000068e6) fep_vkb_candidate_pane_ParamLimits

0x68e6,	// (0x000068e6) fep_vkb_candidate_pane

0xd7c1,	// (0x0000d7c1) fep_vkb_keypad_pane_ParamLimits

0xd7c1,	// (0x0000d7c1) fep_vkb_keypad_pane

0xd7e8,	// (0x0000d7e8) fep_vkb_side_pane_ParamLimits

0xd7e8,	// (0x0000d7e8) fep_vkb_side_pane

0xd824,	// (0x0000d824) fep_vkb_top_pane_ParamLimits

0xd824,	// (0x0000d824) fep_vkb_top_pane

0x69ad,	// (0x000069ad) fep_vkb_top_pane_g1_ParamLimits

0x69ad,	// (0x000069ad) fep_vkb_top_pane_g1

0x69bc,	// (0x000069bc) fep_vkb_top_pane_g2_ParamLimits

0x69bc,	// (0x000069bc) fep_vkb_top_pane_g2

0x69cb,	// (0x000069cb) fep_vkb_top_pane_g3_ParamLimits

0x69cb,	// (0x000069cb) fep_vkb_top_pane_g3

0x0003,

0xad91,	// (0x0000ad91) fep_vkb_top_pane_g_ParamLimits

0xad91,	// (0x0000ad91) fep_vkb_top_pane_g

0x69e9,	// (0x000069e9) fep_vkb_top_text_pane_ParamLimits

0x69e9,	// (0x000069e9) fep_vkb_top_text_pane

0xd860,	// (0x0000d860) fep_vkb_side_pane_g1_ParamLimits

0xd860,	// (0x0000d860) fep_vkb_side_pane_g1

0x6a43,	// (0x00006a43) grid_vkb_side_pane_ParamLimits

0x6a43,	// (0x00006a43) grid_vkb_side_pane

0x6d16,	// (0x00006d16) bg_popup_fep_shadow_pane_g2

0x6d1f,	// (0x00006d1f) bg_popup_fep_shadow_pane_g3

0x6d27,	// (0x00006d27) bg_popup_fep_shadow_pane_g4

0x6d30,	// (0x00006d30) bg_popup_fep_shadow_pane_g5

0x6d3a,	// (0x00006d3a) bg_popup_fep_shadow_pane_g6

0x6d42,	// (0x00006d42) bg_popup_fep_shadow_pane_g7

0x1537,	// (0x00001537) bg_popup_fep_shadow_pane_g8

0x6aa2,	// (0x00006aa2) grid_vkb_keypad_number_pane_ParamLimits

0x6aa2,	// (0x00006aa2) grid_vkb_keypad_number_pane

0x6ab6,	// (0x00006ab6) grid_vkb_keypad_pane_ParamLimits

0x6ab6,	// (0x00006ab6) grid_vkb_keypad_pane

0x6adc,	// (0x00006adc) fep_vkb_bottom_pane_g1_ParamLimits

0x6adc,	// (0x00006adc) fep_vkb_bottom_pane_g1

0x6b05,	// (0x00006b05) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6b05,	// (0x00006b05) grid_vkb_keypad_bottom_left_pane

0x6b1a,	// (0x00006b1a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6b1a,	// (0x00006b1a) grid_vkb_keypad_bottom_right_pane

0x6b2f,	// (0x00006b2f) fep_vkb_top_text_pane_g1

0xd8a7,	// (0x0000d8a7) fep_vkb_top_text_pane_t1

0xd8b9,	// (0x0000d8b9) cell_vkb_side_pane_ParamLimits

0xd8b9,	// (0x0000d8b9) cell_vkb_side_pane

0x6527,	// (0x00006527) cell_vkb_side_pane_g1

0x6b9e,	// (0x00006b9e) cell_vkb_keypad_pane_ParamLimits

0x6b9e,	// (0x00006b9e) cell_vkb_keypad_pane

0x6c2b,	// (0x00006c2b) cell_vkb_keypad_pane_g1

0x0008,

0xadbe,	// (0x0000adbe) bg_popup_fep_shadow_pane_g

0x6527,	// (0x00006527) cell_hwr_side_pane_g1

0x6527,	// (0x00006527) cell_hwr_side_pane_g2

0x6c35,	// (0x00006c35) cell_vkb_keypad_pane_t1

0xd8cf,	// (0x0000d8cf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd8cf,	// (0x0000d8cf) cell_vkb_keypad_bottom_left_pane

0xd8e4,	// (0x0000d8e4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd8e4,	// (0x0000d8e4) cell_vkb_keypad_bottom_right_pane

0x6527,	// (0x00006527) cell_vkb_keypad_bottom_left_pane_g1

0x6527,	// (0x00006527) cell_vkb_keypad_bottom_right_pane_g1

0x6c99,	// (0x00006c99) cell_vkb_keypad_number_pane_ParamLimits

0x6c99,	// (0x00006c99) cell_vkb_keypad_number_pane

0x6cb8,	// (0x00006cb8) cell_vkb_keypad_number_pane_g1

0x6cc2,	// (0x00006cc2) cell_vkb_keypad_number_pane_g2

0x6ccb,	// (0x00006ccb) cell_vkb_keypad_number_pane_g3

0x0002,

0xadb0,	// (0x0000adb0) cell_vkb_keypad_number_pane_g

0x6c35,	// (0x00006c35) cell_vkb_keypad_number_pane_t1

0x6cf5,	// (0x00006cf5) fep_vkb_candidate_pane_g1

0x0001,

0xadab,	// (0x0000adab) cell_hwr_side_pane_g

0x6d54,	// (0x00006d54) cell_hwr_side_pane_t1

0x6d62,	// (0x00006d62) cell_hwr_side_pane_t1_copy1

0x69db,	// (0x000069db) cell_hwr_candidate_pane_g1

0x6db2,	// (0x00006db2) cell_hwr_candidate_pane_t1

0x6527,	// (0x00006527) cell_vkb_candidate_pane_g2

0x6e06,	// (0x00006e06) cell_vkb_candidate_pane_t1

0x6597,	// (0x00006597) bg_popup_fep_shadow_pane_ParamLimits

0x6597,	// (0x00006597) bg_popup_fep_shadow_pane

0x664e,	// (0x0000664e) bg_fep_hwr_top_pane_g4

0x66bc,	// (0x000066bc) bg_hwr_side_pane_g1_ParamLimits

0x66bc,	// (0x000066bc) bg_hwr_side_pane_g1

0xd74e,	// (0x0000d74e) cell_hwr_side_pane_ParamLimits

0xd74e,	// (0x0000d74e) cell_hwr_side_pane

0x672e,	// (0x0000672e) fep_hwr_write_pane_g1_ParamLimits

0x672e,	// (0x0000672e) fep_hwr_write_pane_g1

0x673b,	// (0x0000673b) fep_hwr_write_pane_g2_ParamLimits

0x673b,	// (0x0000673b) fep_hwr_write_pane_g2

0x6748,	// (0x00006748) fep_hwr_write_pane_g3_ParamLimits

0x6748,	// (0x00006748) fep_hwr_write_pane_g3

0xd76e,	// (0x0000d76e) fep_hwr_write_pane_g4_ParamLimits

0xd76e,	// (0x0000d76e) fep_hwr_write_pane_g4

0x0005,

0xf664,	// (0x0000f664) fep_hwr_write_pane_g_ParamLimits

0xf664,	// (0x0000f664) fep_hwr_write_pane_g

0x664e,	// (0x0000664e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x664e,	// (0x0000664e) bg_fep_hwr_candidate_pane_g2

0x6791,	// (0x00006791) cell_hwr_candidate_pane_ParamLimits

0x6791,	// (0x00006791) cell_hwr_candidate_pane

0x67e3,	// (0x000067e3) fep_hwr_candidate_pane_g1_ParamLimits

0x6845,	// (0x00006845) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6845,	// (0x00006845) bg_popup_fep_shadow_pane_cp2

0x69db,	// (0x000069db) fep_vkb_top_pane_g4_ParamLimits

0x69db,	// (0x000069db) fep_vkb_top_pane_g4

0x6a21,	// (0x00006a21) fep_vkb_side_pane_g2_ParamLimits

0x6a21,	// (0x00006a21) fep_vkb_side_pane_g2

0xba0e,	// (0x0000ba0e) list_setting_pane_t4_ParamLimits

0xba0e,	// (0x0000ba0e) list_setting_pane_t4

0xba8a,	// (0x0000ba8a) list_setting_number_pane_t5_ParamLimits

0xba8a,	// (0x0000ba8a) list_setting_number_pane_t5

0x1dc8,	// (0x00001dc8) list_double_heading_pane_cp2_ParamLimits

0x1dc8,	// (0x00001dc8) list_double_heading_pane_cp2

0x1401,	// (0x00001401) list_double_heading_pane_g1_cp2_ParamLimits

0x1401,	// (0x00001401) list_double_heading_pane_g1_cp2

0x140d,	// (0x0000140d) list_double_heading_pane_g2_cp2_ParamLimits

0x140d,	// (0x0000140d) list_double_heading_pane_g2_cp2

0x6e14,	// (0x00006e14) list_double_heading_pane_t1_cp2_ParamLimits

0x6e14,	// (0x00006e14) list_double_heading_pane_t1_cp2

0x6e2a,	// (0x00006e2a) list_double_heading_pane_t2_cp2_ParamLimits

0x6e2a,	// (0x00006e2a) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0321,	// (0x00000321) popup_preview_fixed_window

0x0843,	// (0x00000843) bg_popup_preview_window_pane_cp02

0x6e3c,	// (0x00006e3c) list_preview_fixed_pane

0x6e82,	// (0x00006e82) list_empty_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_empty_pane_fp

0x6e82,	// (0x00006e82) list_single_cale_day_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_cale_day_pane_fp

0x6e82,	// (0x00006e82) list_single_graphic_heading_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_graphic_heading_pane_fp

0x6e82,	// (0x00006e82) list_single_graphic_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_graphic_pane_fp

0x6e82,	// (0x00006e82) list_single_heading_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_heading_pane_fp

0x6e82,	// (0x00006e82) list_single_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_pane_fp

0x6e9b,	// (0x00006e9b) list_single_pane_fp_g1_ParamLimits

0x6e9b,	// (0x00006e9b) list_single_pane_fp_g1

0x6ea7,	// (0x00006ea7) list_single_pane_fp_g2_ParamLimits

0x6ea7,	// (0x00006ea7) list_single_pane_fp_g2

0x6eb3,	// (0x00006eb3) list_single_pane_fp_g3_ParamLimits

0x6eb3,	// (0x00006eb3) list_single_pane_fp_g3

0x6ec7,	// (0x00006ec7) list_single_pane_fp_g4_ParamLimits

0x6ec7,	// (0x00006ec7) list_single_pane_fp_g4

0x0003,

0xaddf,	// (0x0000addf) list_single_pane_fp_g_ParamLimits

0xaddf,	// (0x0000addf) list_single_pane_fp_g

0x6ed3,	// (0x00006ed3) list_single_pane_fp_t1_ParamLimits

0x6ed3,	// (0x00006ed3) list_single_pane_fp_t1

0x6eea,	// (0x00006eea) list_single_graphic_pane_fp_g1_ParamLimits

0x6eea,	// (0x00006eea) list_single_graphic_pane_fp_g1

0x6e9b,	// (0x00006e9b) list_single_graphic_pane_fp_g2_ParamLimits

0x6e9b,	// (0x00006e9b) list_single_graphic_pane_fp_g2

0x6ea7,	// (0x00006ea7) list_single_graphic_pane_fp_g3_ParamLimits

0x6ea7,	// (0x00006ea7) list_single_graphic_pane_fp_g3

0x6eb3,	// (0x00006eb3) list_single_graphic_pane_fp_g4_ParamLimits

0x6eb3,	// (0x00006eb3) list_single_graphic_pane_fp_g4

0x6ec7,	// (0x00006ec7) list_single_graphic_pane_fp_g5_ParamLimits

0x6ec7,	// (0x00006ec7) list_single_graphic_pane_fp_g5

0x0004,

0xade8,	// (0x0000ade8) list_single_graphic_pane_fp_g_ParamLimits

0xade8,	// (0x0000ade8) list_single_graphic_pane_fp_g

0x6ef6,	// (0x00006ef6) list_single_graphic_pane_fp_t1_ParamLimits

0x6ef6,	// (0x00006ef6) list_single_graphic_pane_fp_t1

0x6eea,	// (0x00006eea) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6eea,	// (0x00006eea) list_single_graphic_heading_pane_fp_g1

0x6e9b,	// (0x00006e9b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6e9b,	// (0x00006e9b) list_single_graphic_heading_pane_fp_g2

0x6ea7,	// (0x00006ea7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6ea7,	// (0x00006ea7) list_single_graphic_heading_pane_fp_g3

0x6eb3,	// (0x00006eb3) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6eb3,	// (0x00006eb3) list_single_graphic_heading_pane_fp_g4

0x6ec7,	// (0x00006ec7) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6ec7,	// (0x00006ec7) list_single_graphic_heading_pane_fp_g5

0x0004,

0xade8,	// (0x0000ade8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xade8,	// (0x0000ade8) list_single_graphic_heading_pane_fp_g

0x6f0c,	// (0x00006f0c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6f0c,	// (0x00006f0c) list_single_graphic_heading_pane_fp_t1

0x6f22,	// (0x00006f22) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6f22,	// (0x00006f22) list_single_graphic_heading_pane_fp_t2

0x0001,

0xadf3,	// (0x0000adf3) list_single_graphic_heading_pane_fp_t_ParamLimits

0xadf3,	// (0x0000adf3) list_single_graphic_heading_pane_fp_t

0x6f34,	// (0x00006f34) list_single_cale_day_pane_fp_g1_ParamLimits

0x6f34,	// (0x00006f34) list_single_cale_day_pane_fp_g1

0x6f6c,	// (0x00006f6c) list_single_cale_day_pane_fp_g2_ParamLimits

0x6f6c,	// (0x00006f6c) list_single_cale_day_pane_fp_g2

0x6f78,	// (0x00006f78) list_single_cale_day_pane_fp_g3_ParamLimits

0x6f78,	// (0x00006f78) list_single_cale_day_pane_fp_g3

0x6fa0,	// (0x00006fa0) list_single_cale_day_pane_fp_g4_ParamLimits

0x6fa0,	// (0x00006fa0) list_single_cale_day_pane_fp_g4

0x6fc4,	// (0x00006fc4) list_single_cale_day_pane_fp_g5_ParamLimits

0x6fc4,	// (0x00006fc4) list_single_cale_day_pane_fp_g5

0x0004,

0xadf8,	// (0x0000adf8) list_single_cale_day_pane_fp_g_ParamLimits

0xadf8,	// (0x0000adf8) list_single_cale_day_pane_fp_g

0x6fe8,	// (0x00006fe8) list_single_cale_day_pane_fp_t1_ParamLimits

0x6fe8,	// (0x00006fe8) list_single_cale_day_pane_fp_t1

0x700e,	// (0x0000700e) list_single_cale_day_pane_fp_t2_ParamLimits

0x700e,	// (0x0000700e) list_single_cale_day_pane_fp_t2

0x7027,	// (0x00007027) list_single_cale_day_pane_fp_t3_ParamLimits

0x7027,	// (0x00007027) list_single_cale_day_pane_fp_t3

0x0002,

0xae03,	// (0x0000ae03) list_single_cale_day_pane_fp_t_ParamLimits

0xae03,	// (0x0000ae03) list_single_cale_day_pane_fp_t

0x6e9b,	// (0x00006e9b) list_empty_pane_fp_g1_ParamLimits

0x6e9b,	// (0x00006e9b) list_empty_pane_fp_g1

0x7040,	// (0x00007040) list_empty_pane_fp_t1

0x704e,	// (0x0000704e) list_empty_pane_fp_t2

0x0001,

0xae0a,	// (0x0000ae0a) list_empty_pane_fp_t

0x6e9b,	// (0x00006e9b) list_single_heading_pane_fp_g1_ParamLimits

0x6e9b,	// (0x00006e9b) list_single_heading_pane_fp_g1

0x6ea7,	// (0x00006ea7) list_single_heading_pane_fp_g2_ParamLimits

0x6ea7,	// (0x00006ea7) list_single_heading_pane_fp_g2

0x6eb3,	// (0x00006eb3) list_single_heading_pane_fp_g3_ParamLimits

0x6eb3,	// (0x00006eb3) list_single_heading_pane_fp_g3

0x0002,

0xae0f,	// (0x0000ae0f) list_single_heading_pane_fp_g_ParamLimits

0xae0f,	// (0x0000ae0f) list_single_heading_pane_fp_g

0x705c,	// (0x0000705c) list_single_heading_pane_fp_t1_ParamLimits

0x705c,	// (0x0000705c) list_single_heading_pane_fp_t1

0x706e,	// (0x0000706e) list_single_heading_pane_fp_t2_ParamLimits

0x706e,	// (0x0000706e) list_single_heading_pane_fp_t2

0x0001,

0xae16,	// (0x0000ae16) list_single_heading_pane_fp_t_ParamLimits

0xae16,	// (0x0000ae16) list_single_heading_pane_fp_t

0x1752,	// (0x00001752) aid_size_cell_fast

0x07b5,	// (0x000007b5) soft_indicator_pane_cp1_t1

0x178f,	// (0x0000178f) cell_app_pane_cp2_ParamLimits

0x178f,	// (0x0000178f) cell_app_pane_cp2

0x65b9,	// (0x000065b9) fep_hwr_candidate_drop_down_list_pane

0x67fd,	// (0x000067fd) fep_hwr_candidate_pane_g3_ParamLimits

0x67fd,	// (0x000067fd) fep_hwr_candidate_pane_g3

0x680a,	// (0x0000680a) fep_hwr_candidate_pane_g4_ParamLimits

0x680a,	// (0x0000680a) fep_hwr_candidate_pane_g4

0x0002,

0xad8a,	// (0x0000ad8a) fep_hwr_candidate_pane_g_ParamLimits

0xad8a,	// (0x0000ad8a) fep_hwr_candidate_pane_g

0x68d5,	// (0x000068d5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x68d5,	// (0x000068d5) fep_vkb_candidate_drop_down_list_pane

0x6cfd,	// (0x00006cfd) fep_vkb_candidate_pane_g3

0x6d05,	// (0x00006d05) fep_vkb_candidate_pane_g4

0x0002,

0xadb7,	// (0x0000adb7) fep_vkb_candidate_pane_g

0x69db,	// (0x000069db) cell_hwr_candidate_pane_g1_ParamLimits

0x6d70,	// (0x00006d70) cell_hwr_candidate_pane_g3_ParamLimits

0x6d70,	// (0x00006d70) cell_hwr_candidate_pane_g3

0x6d91,	// (0x00006d91) cell_hwr_candidate_pane_g4_ParamLimits

0x6d91,	// (0x00006d91) cell_hwr_candidate_pane_g4

0x0002,

0xadd1,	// (0x0000add1) cell_hwr_candidate_pane_g_ParamLimits

0xadd1,	// (0x0000add1) cell_hwr_candidate_pane_g

0x6dd0,	// (0x00006dd0) cell_vkb_candidate_pane_g3_ParamLimits

0x6dd0,	// (0x00006dd0) cell_vkb_candidate_pane_g3

0x6deb,	// (0x00006deb) cell_vkb_candidate_pane_g4_ParamLimits

0x6deb,	// (0x00006deb) cell_vkb_candidate_pane_g4

0x7084,	// (0x00007084) cell_app_pane_cp2_g1_ParamLimits

0x7084,	// (0x00007084) cell_app_pane_cp2_g1

0x70a2,	// (0x000070a2) cell_app_pane_cp2_g2_ParamLimits

0x70a2,	// (0x000070a2) cell_app_pane_cp2_g2

0x0001,

0xae1b,	// (0x0000ae1b) cell_app_pane_cp2_g_ParamLimits

0xae1b,	// (0x0000ae1b) cell_app_pane_cp2_g

0x70ae,	// (0x000070ae) cell_app_pane_cp2_t1_ParamLimits

0x70ae,	// (0x000070ae) cell_app_pane_cp2_t1

0x13db,	// (0x000013db) grid_highlight_pane_cp1_ParamLimits

0x13db,	// (0x000013db) grid_highlight_pane_cp1

0x70c0,	// (0x000070c0) cell_hwr_candidate_pane_cp1_ParamLimits

0x70c0,	// (0x000070c0) cell_hwr_candidate_pane_cp1

0x69db,	// (0x000069db) fep_hwr_candidate_drop_down_list_pane_g1

0x70e4,	// (0x000070e4) fep_hwr_candidate_drop_down_list_pane_g2

0x70f1,	// (0x000070f1) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xae20,	// (0x0000ae20) fep_hwr_candidate_drop_down_list_pane_g

0x70fe,	// (0x000070fe) fep_hwr_candidate_drop_down_list_scroll_pane

0x7107,	// (0x00007107) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7107,	// (0x00007107) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7114,	// (0x00007114) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7114,	// (0x00007114) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7121,	// (0x00007121) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7121,	// (0x00007121) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6dd0,	// (0x00006dd0) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6dd0,	// (0x00006dd0) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6deb,	// (0x00006deb) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6deb,	// (0x00006deb) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x712e,	// (0x0000712e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x712e,	// (0x0000712e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7149,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7149,	// (0x00007149) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7164,	// (0x00007164) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7164,	// (0x00007164) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae27,	// (0x0000ae27) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae27,	// (0x0000ae27) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x717f,	// (0x0000717f) cell_vkb_candidate_pane_cp1_ParamLimits

0x717f,	// (0x0000717f) cell_vkb_candidate_pane_cp1

0x69db,	// (0x000069db) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x69db,	// (0x000069db) fep_vkb_candidate_drop_down_list_pane_g1

0x70e4,	// (0x000070e4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x70e4,	// (0x000070e4) fep_vkb_candidate_drop_down_list_pane_g2

0x70f1,	// (0x000070f1) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x70f1,	// (0x000070f1) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xae20,	// (0x0000ae20) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xae20,	// (0x0000ae20) fep_vkb_candidate_drop_down_list_pane_g

0x71a5,	// (0x000071a5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x71a5,	// (0x000071a5) fep_vkb_candidate_drop_down_list_scroll_pane

0x71b2,	// (0x000071b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71b2,	// (0x000071b2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x71bf,	// (0x000071bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71bf,	// (0x000071bf) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x71cb,	// (0x000071cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71cb,	// (0x000071cb) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6d70,	// (0x00006d70) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6d70,	// (0x00006d70) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6d91,	// (0x00006d91) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d91,	// (0x00006d91) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x71d7,	// (0x000071d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71d7,	// (0x000071d7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x71f8,	// (0x000071f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x71f8,	// (0x000071f8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7219,	// (0x00007219) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7219,	// (0x00007219) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xae38,	// (0x0000ae38) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xae38,	// (0x0000ae38) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb315,	// (0x0000b315) title_pane_g1_ParamLimits

0xb326,	// (0x0000b326) title_pane_g2_ParamLimits

0xf498,	// (0x0000f498) title_pane_g_ParamLimits

0x1d67,	// (0x00001d67) aid_call2_pane

0x1d6f,	// (0x00001d6f) aid_call_pane

0x1d77,	// (0x00001d77) popup_clock_analogue_window_g1

0x1d77,	// (0x00001d77) popup_clock_analogue_window_g2

0x1d7f,	// (0x00001d7f) popup_clock_analogue_window_g3

0x1d88,	// (0x00001d88) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa989,	// (0x0000a989) popup_clock_analogue_window_g

0x1d90,	// (0x00001d90) popup_clock_analogue_window_t1

0x1e1b,	// (0x00001e1b) clock_digital_number_pane_ParamLimits

0x1e1b,	// (0x00001e1b) clock_digital_number_pane

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp02_ParamLimits

0x1e27,	// (0x00001e27) clock_digital_number_pane_cp02

0x1e33,	// (0x00001e33) clock_digital_number_pane_cp03_ParamLimits

0x1e33,	// (0x00001e33) clock_digital_number_pane_cp03

0x1e3f,	// (0x00001e3f) clock_digital_number_pane_cp04_ParamLimits

0x1e3f,	// (0x00001e3f) clock_digital_number_pane_cp04

0x1e4b,	// (0x00001e4b) clock_digital_separator_pane_ParamLimits

0x1e4b,	// (0x00001e4b) clock_digital_separator_pane

0x1e57,	// (0x00001e57) popup_clock_digital_window_t1_ParamLimits

0x1e57,	// (0x00001e57) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa994,	// (0x0000a994) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa994,	// (0x0000a994) clock_digital_separator_pane_g

0xc8e5,	// (0x0000c8e5) aid_fill_nsta_ParamLimits

0xca16,	// (0x0000ca16) indicator_nsta_pane_ParamLimits

0x34b9,	// (0x000034b9) popup_clock_analogue_window

0x34b9,	// (0x000034b9) popup_clock_digital_window

0x1713,	// (0x00001713) grid_indicator_nsta_pane_ParamLimits

0x5ed7,	// (0x00005ed7) clock_nsta_pane_t2

0x0001,

0xad17,	// (0x0000ad17) clock_nsta_pane_t

0x1b50,	// (0x00001b50) aid_size_max_handle

0xbd81,	// (0x0000bd81) aid_size_min_handle

0x260e,	// (0x0000260e) editor_scroll_pane

0x7234,	// (0x00007234) ex_editor_pane

0x16bf,	// (0x000016bf) scroll_pane_cp13

0x0ddf,	// (0x00000ddf) scroll_pane_cp14

0x1dc0,	// (0x00001dc0) scroll_pane_cp36

0xbe0e,	// (0x0000be0e) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe0e,	// (0x0000be0e) list_single_graphic_hl_pane_cp2

0xd3a4,	// (0x0000d3a4) list_single_graphic_hl_pane_ParamLimits

0xd3a4,	// (0x0000d3a4) list_single_graphic_hl_pane

0x723c,	// (0x0000723c) aid_size_min_hl_cp1

0x7245,	// (0x00007245) list_highlight_pane_cp34_ParamLimits

0x7245,	// (0x00007245) list_highlight_pane_cp34

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g1_ParamLimits

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g1

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g2_ParamLimits

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g2

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g3_ParamLimits

0x0de7,	// (0x00000de7) list_single_graphic_hl_pane_g3

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_ParamLimits

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4

0x72c9,	// (0x000072c9) list_single_graphic_hl_pane_g5_ParamLimits

0x72c9,	// (0x000072c9) list_single_graphic_hl_pane_g5

0x0004,

0xf67d,	// (0x0000f67d) list_single_graphic_hl_pane_g_ParamLimits

0xf67d,	// (0x0000f67d) list_single_graphic_hl_pane_g

0xd8ff,	// (0x0000d8ff) list_single_graphic_hl_pane_t1_ParamLimits

0xd8ff,	// (0x0000d8ff) list_single_graphic_hl_pane_t1

0x7299,	// (0x00007299) aid_size_min_hl_cp2

0x72a2,	// (0x000072a2) list_highlight_pane_cp34_cp2_ParamLimits

0x72a2,	// (0x000072a2) list_highlight_pane_cp34_cp2

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7256,	// (0x00007256) list_single_graphic_hl_pane_g1_cp2

0x72af,	// (0x000072af) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x72af,	// (0x000072af) list_single_graphic_hl_pane_g2_cp2

0x72bb,	// (0x000072bb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x72bb,	// (0x000072bb) list_single_graphic_hl_pane_g3_cp2

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0df3,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2

0x72c9,	// (0x000072c9) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x72c9,	// (0x000072c9) list_single_graphic_hl_pane_g5_cp2

0xc05b,	// (0x0000c05b) control_pane_g4_ParamLimits

0xc05b,	// (0x0000c05b) control_pane_g4

0x2b9e,	// (0x00002b9e) bg_popup_sub_pane_cp10_ParamLimits

0x6531,	// (0x00006531) list_choice_list_pane_ParamLimits

0x6540,	// (0x00006540) scroll_pane_cp23

0x0843,	// (0x00000843) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e3c,	// (0x00006e3c) list_preview_fixed_pane_ParamLimits

0x6e52,	// (0x00006e52) list_preview_fixed_pane_cp_ParamLimits

0x6e52,	// (0x00006e52) list_preview_fixed_pane_cp

0x6e5e,	// (0x00006e5e) popup_preview_fixed_window_g1_ParamLimits

0x6e5e,	// (0x00006e5e) popup_preview_fixed_window_g1

0x6e6a,	// (0x00006e6a) popup_preview_fixed_window_g2_ParamLimits

0x6e6a,	// (0x00006e6a) popup_preview_fixed_window_g2

0x0002,

0xadd8,	// (0x0000add8) popup_preview_fixed_window_g_ParamLimits

0xadd8,	// (0x0000add8) popup_preview_fixed_window_g

0x19f0,	// (0x000019f0) aid_navi_side_left_pane_ParamLimits

0x1a05,	// (0x00001a05) aid_navi_side_right_pane_ParamLimits

0x1a1d,	// (0x00001a1d) navi_icon_pane_stacon_ParamLimits

0x1a31,	// (0x00001a31) navi_navi_pane_stacon_ParamLimits

0x1a1d,	// (0x00001a1d) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x72f3,	// (0x000072f3) listscroll_text_info_pane

0x72fb,	// (0x000072fb) list_text_info_pane_ParamLimits

0x72fb,	// (0x000072fb) list_text_info_pane

0x730a,	// (0x0000730a) scroll_pane_cp24_ParamLimits

0x730a,	// (0x0000730a) scroll_pane_cp24

0xd915,	// (0x0000d915) list_text_info_pane_t1_ParamLimits

0xd915,	// (0x0000d915) list_text_info_pane_t1

0xc1e2,	// (0x0000c1e2) popup_fast_swap2_window_ParamLimits

0xc1e2,	// (0x0000c1e2) popup_fast_swap2_window

0x734d,	// (0x0000734d) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d70,	// (0x00003d70) heading_pane_cp2

0x0aa3,	// (0x00000aa3) listscroll_fast2_pane

0x7357,	// (0x00007357) grid_fast2_pane

0x7361,	// (0x00007361) listscroll_fast2_pane_g1

0x736b,	// (0x0000736b) listscroll_fast2_pane_g2

0x0001,

0xae54,	// (0x0000ae54) listscroll_fast2_pane_g

0x16bf,	// (0x000016bf) scroll_pane_cp26

0x7375,	// (0x00007375) cell_fast2_pane_ParamLimits

0x7375,	// (0x00007375) cell_fast2_pane

0x738c,	// (0x0000738c) cell_fast2_pane_g1

0x7395,	// (0x00007395) cell_fast2_pane_g2

0x739e,	// (0x0000739e) cell_fast2_pane_g3

0x0002,

0xae59,	// (0x0000ae59) cell_fast2_pane_g

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp9

0x0bb1,	// (0x00000bb1) main_eswt_pane_ParamLimits

0x0bb1,	// (0x00000bb1) main_eswt_pane

0x731f,	// (0x0000731f) list_single_text_info_pane

0x73a6,	// (0x000073a6) eswt_ctrl_button_pane

0x73a6,	// (0x000073a6) eswt_ctrl_canvas_pane

0x73ae,	// (0x000073ae) eswt_ctrl_combo_pane

0x73a6,	// (0x000073a6) eswt_ctrl_default_pane

0x73a6,	// (0x000073a6) eswt_ctrl_label_pane

0x73b6,	// (0x000073b6) eswt_ctrl_wait_pane

0x73be,	// (0x000073be) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x73de,	// (0x000073de) popup_eswt_tasktip_window_ParamLimits

0x73de,	// (0x000073de) popup_eswt_tasktip_window

0x391b,	// (0x0000391b) bg_popup_window_pane_cp18

0x73ef,	// (0x000073ef) eswt_control_pane_g1_ParamLimits

0x73ef,	// (0x000073ef) eswt_control_pane_g1

0x73fc,	// (0x000073fc) eswt_control_pane_g2_ParamLimits

0x73fc,	// (0x000073fc) eswt_control_pane_g2

0x7409,	// (0x00007409) eswt_control_pane_g3_ParamLimits

0x7409,	// (0x00007409) eswt_control_pane_g3

0x7416,	// (0x00007416) eswt_control_pane_g4_ParamLimits

0x7416,	// (0x00007416) eswt_control_pane_g4

0x0003,

0xae60,	// (0x0000ae60) eswt_control_pane_g_ParamLimits

0xae60,	// (0x0000ae60) eswt_control_pane_g

0x13db,	// (0x000013db) bg_button_pane_ParamLimits

0x13db,	// (0x000013db) bg_button_pane

0x0bb1,	// (0x00000bb1) common_borders_pane_copy2_ParamLimits

0x0bb1,	// (0x00000bb1) common_borders_pane_copy2

0x7423,	// (0x00007423) control_button_pane_g1_ParamLimits

0x7423,	// (0x00007423) control_button_pane_g1

0x742f,	// (0x0000742f) control_button_pane_g2_ParamLimits

0x742f,	// (0x0000742f) control_button_pane_g2

0x743b,	// (0x0000743b) control_button_pane_g3_ParamLimits

0x743b,	// (0x0000743b) control_button_pane_g3

0x0002,

0xae69,	// (0x0000ae69) control_button_pane_g_ParamLimits

0xae69,	// (0x0000ae69) control_button_pane_g

0x744f,	// (0x0000744f) control_button_pane_t1

0x745d,	// (0x0000745d) control_button_pane_t2

0x0001,

0xae70,	// (0x0000ae70) control_button_pane_t

0x3788,	// (0x00003788) bg_button_pane_g1

0x3790,	// (0x00003790) bg_button_pane_g2

0x3798,	// (0x00003798) bg_button_pane_g3

0x37a0,	// (0x000037a0) bg_button_pane_g4

0x37a8,	// (0x000037a8) bg_button_pane_g5

0x37b0,	// (0x000037b0) bg_button_pane_g6

0x37b8,	// (0x000037b8) bg_button_pane_g7

0x37c0,	// (0x000037c0) bg_button_pane_g8

0x37c8,	// (0x000037c8) bg_button_pane_g9

0x0008,

0xaae5,	// (0x0000aae5) bg_button_pane_g

0x64ec,	// (0x000064ec) common_borders_pane_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy1_ParamLimits

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy1

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy1_ParamLimits

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy1

0x7409,	// (0x00007409) eswt_control_pane_g3_copy1_ParamLimits

0x7409,	// (0x00007409) eswt_control_pane_g3_copy1

0x7416,	// (0x00007416) eswt_control_pane_g4_copy1_ParamLimits

0x7416,	// (0x00007416) eswt_control_pane_g4_copy1

0x6527,	// (0x00006527) bg_eswt_ctrl_canvas_pane_g1

0x64ec,	// (0x000064ec) common_borders_pane_cp2_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane_cp2

0x64ec,	// (0x000064ec) common_borders_pane_cp3_ParamLimits

0x64ec,	// (0x000064ec) common_borders_pane_cp3

0x746b,	// (0x0000746b) separator_horizontal_pane

0x7473,	// (0x00007473) separator_vertical_pane

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy2_ParamLimits

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy2

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy2_ParamLimits

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy2

0x7409,	// (0x00007409) eswt_control_pane_g3_copy2_ParamLimits

0x7409,	// (0x00007409) eswt_control_pane_g3_copy2

0x7416,	// (0x00007416) eswt_control_pane_g4_copy2_ParamLimits

0x7416,	// (0x00007416) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x747c,	// (0x0000747c) separator_horizontal_pane_g1

0x7485,	// (0x00007485) separator_horizontal_pane_g2

0x748e,	// (0x0000748e) separator_horizontal_pane_g3

0x0002,

0xae75,	// (0x0000ae75) separator_horizontal_pane_g

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy3_ParamLimits

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy3

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy3_ParamLimits

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy3

0x7409,	// (0x00007409) eswt_control_pane_g3_copy3_ParamLimits

0x7409,	// (0x00007409) eswt_control_pane_g3_copy3

0x7416,	// (0x00007416) eswt_control_pane_g4_copy3_ParamLimits

0x7416,	// (0x00007416) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7497,	// (0x00007497) separator_vertical_pane_g1

0x74a0,	// (0x000074a0) separator_vertical_pane_g2

0x74a9,	// (0x000074a9) separator_vertical_pane_g3

0x0002,

0xae7c,	// (0x0000ae7c) separator_vertical_pane_g

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy4_ParamLimits

0x73ef,	// (0x000073ef) eswt_control_pane_g1_copy4

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy4_ParamLimits

0x73fc,	// (0x000073fc) eswt_control_pane_g2_copy4

0x7409,	// (0x00007409) eswt_control_pane_g3_copy4_ParamLimits

0x7409,	// (0x00007409) eswt_control_pane_g3_copy4

0x7416,	// (0x00007416) eswt_control_pane_g4_copy4_ParamLimits

0x7416,	// (0x00007416) eswt_control_pane_g4_copy4

0xd937,	// (0x0000d937) eswt_ctrl_combo_button_pane

0xd93f,	// (0x0000d93f) eswt_ctrl_input_pane

0xd947,	// (0x0000d947) popup_choice_list_window_cp70

0xd94f,	// (0x0000d94f) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x64ec,	// (0x000064ec) bg_button_pane_cp70_ParamLimits

0x64ec,	// (0x000064ec) bg_button_pane_cp70

0xd95d,	// (0x0000d95d) eswt_ctrl_combo_button_pane_g1

0x74e0,	// (0x000074e0) wait_bar_pane_cp70

0x391b,	// (0x0000391b) bg_popup_window_pane_cp70_ParamLimits

0x391b,	// (0x0000391b) bg_popup_window_pane_cp70

0x74e8,	// (0x000074e8) popup_eswt_tasktip_window_t1

0x74fe,	// (0x000074fe) wait_bar_pane_cp71_ParamLimits

0x74fe,	// (0x000074fe) wait_bar_pane_cp71

0x750a,	// (0x0000750a) grid_eswt_app_pane

0x1bb4,	// (0x00001bb4) scroll_pane_cp70

0xd965,	// (0x0000d965) cell_eswt_app_pane_ParamLimits

0xd965,	// (0x0000d965) cell_eswt_app_pane

0xd997,	// (0x0000d997) cell_eswt_app_pane_g1_ParamLimits

0xd997,	// (0x0000d997) cell_eswt_app_pane_g1

0xd9c6,	// (0x0000d9c6) cell_eswt_app_pane_g2_ParamLimits

0xd9c6,	// (0x0000d9c6) cell_eswt_app_pane_g2

0x0001,

0xf688,	// (0x0000f688) cell_eswt_app_pane_g_ParamLimits

0xf688,	// (0x0000f688) cell_eswt_app_pane_g

0xd9ef,	// (0x0000d9ef) cell_eswt_app_pane_t1_ParamLimits

0xd9ef,	// (0x0000d9ef) cell_eswt_app_pane_t1

0x75cf,	// (0x000075cf) grid_highlight_pane_cp70_ParamLimits

0x75cf,	// (0x000075cf) grid_highlight_pane_cp70

0x50a8,	// (0x000050a8) set_content_pane_g1

0x2967,	// (0x00002967) status_small_volume_pane

0x75db,	// (0x000075db) status_small_volume_pane_g1

0x75e3,	// (0x000075e3) volume_small2_pane

0x75ec,	// (0x000075ec) volume_small2_pane_g1

0x75f5,	// (0x000075f5) volume_small2_pane_g2

0x75fe,	// (0x000075fe) volume_small2_pane_g3

0x7607,	// (0x00007607) volume_small2_pane_g4

0x7610,	// (0x00007610) volume_small2_pane_g5

0x7619,	// (0x00007619) volume_small2_pane_g6

0x7622,	// (0x00007622) volume_small2_pane_g7

0x762b,	// (0x0000762b) volume_small2_pane_g8

0x7634,	// (0x00007634) volume_small2_pane_g9

0x763d,	// (0x0000763d) volume_small2_pane_g10

0x0009,

0xae88,	// (0x0000ae88) volume_small2_pane_g

0x6b2f,	// (0x00006b2f) fep_vkb_top_text_pane_g1_ParamLimits

0xd8a7,	// (0x0000d8a7) fep_vkb_top_text_pane_t1_ParamLimits

0x6e76,	// (0x00006e76) popup_preview_fixed_window_g3_ParamLimits

0x6e76,	// (0x00006e76) popup_preview_fixed_window_g3

0xc878,	// (0x0000c878) popup_toolbar_trans_pane

0xd1c3,	// (0x0000d1c3) aid_height_set_list_ParamLimits

0x4f5e,	// (0x00004f5e) aid_size_parent_ParamLimits

0x2b9e,	// (0x00002b9e) list_highlight_pane_cp2_ParamLimits

0x50a8,	// (0x000050a8) set_content_pane_g1_ParamLimits

0xd3b8,	// (0x0000d3b8) list_single_image_pane_ParamLimits

0xd3b8,	// (0x0000d3b8) list_single_image_pane

0xda21,	// (0x0000da21) aid_size_cell_image_ParamLimits

0xda21,	// (0x0000da21) aid_size_cell_image

0xda2e,	// (0x0000da2e) grid_single_image_pane_ParamLimits

0xda2e,	// (0x0000da2e) grid_single_image_pane

0x1401,	// (0x00001401) list_single_image_pane_g1_ParamLimits

0x1401,	// (0x00001401) list_single_image_pane_g1

0x140d,	// (0x0000140d) list_single_image_pane_g2_ParamLimits

0x140d,	// (0x0000140d) list_single_image_pane_g2

0x0001,

0xae9d,	// (0x0000ae9d) list_single_image_pane_g_ParamLimits

0xae9d,	// (0x0000ae9d) list_single_image_pane_g

0x7661,	// (0x00007661) list_single_image_pane_t1_ParamLimits

0x7661,	// (0x00007661) list_single_image_pane_t1

0xda3c,	// (0x0000da3c) cell_image_list_pane_ParamLimits

0xda3c,	// (0x0000da3c) cell_image_list_pane

0xda56,	// (0x0000da56) cell_image_list_pane_g1

0xda5f,	// (0x0000da5f) cell_image_list_pane_g2

0x0001,

0xf68d,	// (0x0000f68d) cell_image_list_pane_g

0x769f,	// (0x0000769f) aid_size_cell_tb_trans_pane

0x13db,	// (0x000013db) bg_tb_trans_pane

0x76b1,	// (0x000076b1) grid_tb_trans_pane

0x3788,	// (0x00003788) bg_tb_trans_pane_g1

0x3790,	// (0x00003790) bg_tb_trans_pane_g2

0x3798,	// (0x00003798) bg_tb_trans_pane_g3

0x37a0,	// (0x000037a0) bg_tb_trans_pane_g4

0x37a8,	// (0x000037a8) bg_tb_trans_pane_g5

0x37c0,	// (0x000037c0) bg_tb_trans_pane_g6

0x37c8,	// (0x000037c8) bg_tb_trans_pane_g7

0x37b0,	// (0x000037b0) bg_tb_trans_pane_g8

0x37b8,	// (0x000037b8) bg_tb_trans_pane_g9

0x0008,

0xaea7,	// (0x0000aea7) bg_tb_trans_pane_g

0x76c5,	// (0x000076c5) cell_toolbar_trans_pane_ParamLimits

0x76c5,	// (0x000076c5) cell_toolbar_trans_pane

0x6527,	// (0x00006527) cell_toolbar_trans_pane_g1

0xd5ea,	// (0x0000d5ea) list_form2_midp_pane_t1

0xd5f8,	// (0x0000d5f8) list_form2_midp_pane_t2

0x0001,

0xf658,	// (0x0000f658) list_form2_midp_pane_t

0x610e,	// (0x0000610e) scroll_pane_cp51_ParamLimits

0x632b,	// (0x0000632b) form2_midp_wait_pane_g1

0x6334,	// (0x00006334) form2_midp_wait_pane_g2

0x633d,	// (0x0000633d) form2_midp_wait_pane_g3

0x0002,

0xad65,	// (0x0000ad65) form2_midp_wait_pane_g

0x050f,	// (0x0000050f) list_highlight_pane_cp21_ParamLimits

0x6381,	// (0x00006381) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6390,	// (0x00006390) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x518b,	// (0x0000518b) list_single_2graphic_im_pane_ParamLimits

0x518b,	// (0x0000518b) list_single_2graphic_im_pane

0xda68,	// (0x0000da68) list_single_2graphic_im_pane_g1_ParamLimits

0xda68,	// (0x0000da68) list_single_2graphic_im_pane_g1

0xda79,	// (0x0000da79) list_single_2graphic_im_pane_g2_ParamLimits

0xda79,	// (0x0000da79) list_single_2graphic_im_pane_g2

0xda85,	// (0x0000da85) list_single_2graphic_im_pane_g3_ParamLimits

0xda85,	// (0x0000da85) list_single_2graphic_im_pane_g3

0x0003,

0xf692,	// (0x0000f692) list_single_2graphic_im_pane_g_ParamLimits

0xf692,	// (0x0000f692) list_single_2graphic_im_pane_g

0xda99,	// (0x0000da99) list_single_2graphic_im_pane_t1_ParamLimits

0xda99,	// (0x0000da99) list_single_2graphic_im_pane_t1

0x6e82,	// (0x00006e82) list_single_graphic_2heading_pane_fp_ParamLimits

0x6e82,	// (0x00006e82) list_single_graphic_2heading_pane_fp

0x6eea,	// (0x00006eea) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6eea,	// (0x00006eea) list_single_graphic_2heading_pane_fp_g1

0x6e9b,	// (0x00006e9b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6e9b,	// (0x00006e9b) list_single_graphic_2heading_pane_fp_g2

0x6ea7,	// (0x00006ea7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6ea7,	// (0x00006ea7) list_single_graphic_2heading_pane_fp_g3

0x6eb3,	// (0x00006eb3) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6eb3,	// (0x00006eb3) list_single_graphic_2heading_pane_fp_g4

0x6ec7,	// (0x00006ec7) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6ec7,	// (0x00006ec7) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xade8,	// (0x0000ade8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xade8,	// (0x0000ade8) list_single_graphic_2heading_pane_fp_g

0x7759,	// (0x00007759) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7759,	// (0x00007759) list_single_graphic_2heading_pane_fp_t1

0x6f22,	// (0x00006f22) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6f22,	// (0x00006f22) list_single_graphic_2heading_pane_fp_t2

0x776f,	// (0x0000776f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x776f,	// (0x0000776f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaec3,	// (0x0000aec3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaec3,	// (0x0000aec3) list_single_graphic_2heading_pane_fp_t

0x676b,	// (0x0000676b) fep_hwr_write_pane_g5_ParamLimits

0x676b,	// (0x0000676b) fep_hwr_write_pane_g5

0x6777,	// (0x00006777) fep_hwr_write_pane_g6_ParamLimits

0x6777,	// (0x00006777) fep_hwr_write_pane_g6

0x73be,	// (0x000073be) eswt_shell_pane_ParamLimits

0x391b,	// (0x0000391b) bg_popup_window_pane_cp18_ParamLimits

0x4e04,	// (0x00004e04) heading_pane_cp70

0x74e8,	// (0x000074e8) popup_eswt_tasktip_window_t1_ParamLimits

0xc93b,	// (0x0000c93b) aid_touch_tab_arrow_left

0xc951,	// (0x0000c951) aid_touch_tab_arrow_right

0xb33e,	// (0x0000b33e) title_pane_g3_ParamLimits

0xb33e,	// (0x0000b33e) title_pane_g3

0x12aa,	// (0x000012aa) set_value_pane_g1

0xc878,	// (0x0000c878) popup_toolbar_trans_pane_ParamLimits

0x769f,	// (0x0000769f) aid_size_cell_tb_trans_pane_ParamLimits

0x13db,	// (0x000013db) bg_tb_trans_pane_ParamLimits

0x76b1,	// (0x000076b1) grid_tb_trans_pane_ParamLimits

0x0843,	// (0x00000843) cont_note_pane_ParamLimits

0x0843,	// (0x00000843) cont_note_pane

0x0bb1,	// (0x00000bb1) cont_snote2_single_text_pane_ParamLimits

0x0bb1,	// (0x00000bb1) cont_snote2_single_text_pane

0x0bb1,	// (0x00000bb1) cont_snote2_single_graphic_pane_ParamLimits

0x0bb1,	// (0x00000bb1) cont_snote2_single_graphic_pane

0x3f5b,	// (0x00003f5b) cont_note_wait_pane_ParamLimits

0x3f5b,	// (0x00003f5b) cont_note_wait_pane

0x3f5b,	// (0x00003f5b) cont_note_image_pane_ParamLimits

0x3f5b,	// (0x00003f5b) cont_note_image_pane

0x7785,	// (0x00007785) popup_note2_window_g1_ParamLimits

0x7785,	// (0x00007785) popup_note2_window_g1

0x77b6,	// (0x000077b6) popup_note2_window_t1_ParamLimits

0x77b6,	// (0x000077b6) popup_note2_window_t1

0x77fb,	// (0x000077fb) popup_note2_window_t2_ParamLimits

0x77fb,	// (0x000077fb) popup_note2_window_t2

0x7840,	// (0x00007840) popup_note2_window_t3_ParamLimits

0x7840,	// (0x00007840) popup_note2_window_t3

0x7885,	// (0x00007885) popup_note2_window_t4_ParamLimits

0x7885,	// (0x00007885) popup_note2_window_t4

0x08c7,	// (0x000008c7) popup_note2_window_t5_ParamLimits

0x08c7,	// (0x000008c7) popup_note2_window_t5

0x0004,

0xaecf,	// (0x0000aecf) popup_note2_window_t_ParamLimits

0xaecf,	// (0x0000aecf) popup_note2_window_t

0x78b4,	// (0x000078b4) popup_note2_image_window_g1_ParamLimits

0x78b4,	// (0x000078b4) popup_note2_image_window_g1

0x78c0,	// (0x000078c0) popup_note2_image_window_g2_ParamLimits

0x78c0,	// (0x000078c0) popup_note2_image_window_g2

0x0001,

0xaeda,	// (0x0000aeda) popup_note2_image_window_g_ParamLimits

0xaeda,	// (0x0000aeda) popup_note2_image_window_g

0x78d2,	// (0x000078d2) popup_note2_image_window_t1_ParamLimits

0x78d2,	// (0x000078d2) popup_note2_image_window_t1

0x78ea,	// (0x000078ea) popup_note2_image_window_t2_ParamLimits

0x78ea,	// (0x000078ea) popup_note2_image_window_t2

0x7902,	// (0x00007902) popup_note2_image_window_t3_ParamLimits

0x7902,	// (0x00007902) popup_note2_image_window_t3

0x0002,

0xaedf,	// (0x0000aedf) popup_note2_image_window_t_ParamLimits

0xaedf,	// (0x0000aedf) popup_note2_image_window_t

0x3f69,	// (0x00003f69) popup_note2_wait_window_g1_ParamLimits

0x3f69,	// (0x00003f69) popup_note2_wait_window_g1

0x791e,	// (0x0000791e) popup_note2_wait_window_g2_ParamLimits

0x791e,	// (0x0000791e) popup_note2_wait_window_g2

0x3f81,	// (0x00003f81) popup_note2_wait_window_g3_ParamLimits

0x3f81,	// (0x00003f81) popup_note2_wait_window_g3

0x0002,

0xaee6,	// (0x0000aee6) popup_note2_wait_window_g_ParamLimits

0xaee6,	// (0x0000aee6) popup_note2_wait_window_g

0x792a,	// (0x0000792a) popup_note2_wait_window_t1_ParamLimits

0x792a,	// (0x0000792a) popup_note2_wait_window_t1

0x7948,	// (0x00007948) popup_note2_wait_window_t2_ParamLimits

0x7948,	// (0x00007948) popup_note2_wait_window_t2

0x7966,	// (0x00007966) popup_note2_wait_window_t3_ParamLimits

0x7966,	// (0x00007966) popup_note2_wait_window_t3

0x7978,	// (0x00007978) popup_note2_wait_window_t4_ParamLimits

0x7978,	// (0x00007978) popup_note2_wait_window_t4

0x0003,

0xaeed,	// (0x0000aeed) popup_note2_wait_window_t_ParamLimits

0xaeed,	// (0x0000aeed) popup_note2_wait_window_t

0x798a,	// (0x0000798a) wait_bar2_pane_ParamLimits

0x798a,	// (0x0000798a) wait_bar2_pane

0x79a2,	// (0x000079a2) popup_snote2_single_text_window_g1_ParamLimits

0x79a2,	// (0x000079a2) popup_snote2_single_text_window_g1

0x79ca,	// (0x000079ca) popup_snote2_single_text_window_t1_ParamLimits

0x79ca,	// (0x000079ca) popup_snote2_single_text_window_t1

0x7a16,	// (0x00007a16) popup_snote2_single_text_window_t2_ParamLimits

0x7a16,	// (0x00007a16) popup_snote2_single_text_window_t2

0x7a62,	// (0x00007a62) popup_snote2_single_text_window_t3_ParamLimits

0x7a62,	// (0x00007a62) popup_snote2_single_text_window_t3

0x7aa3,	// (0x00007aa3) popup_snote2_single_text_window_t4_ParamLimits

0x7aa3,	// (0x00007aa3) popup_snote2_single_text_window_t4

0x7ad9,	// (0x00007ad9) popup_snote2_single_text_window_t5_ParamLimits

0x7ad9,	// (0x00007ad9) popup_snote2_single_text_window_t5

0x0004,

0xaef6,	// (0x0000aef6) popup_snote2_single_text_window_t_ParamLimits

0xaef6,	// (0x0000aef6) popup_snote2_single_text_window_t

0x7b04,	// (0x00007b04) popup_snote2_single_graphic_window_g1_ParamLimits

0x7b04,	// (0x00007b04) popup_snote2_single_graphic_window_g1

0x7b2c,	// (0x00007b2c) popup_snote2_single_graphic_window_g2_ParamLimits

0x7b2c,	// (0x00007b2c) popup_snote2_single_graphic_window_g2

0x0001,

0xaf01,	// (0x0000af01) popup_snote2_single_graphic_window_g_ParamLimits

0xaf01,	// (0x0000af01) popup_snote2_single_graphic_window_g

0x7b54,	// (0x00007b54) popup_snote2_single_graphic_window_t1_ParamLimits

0x7b54,	// (0x00007b54) popup_snote2_single_graphic_window_t1

0x7ba0,	// (0x00007ba0) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ba0,	// (0x00007ba0) popup_snote2_single_graphic_window_t2

0x7a62,	// (0x00007a62) popup_snote2_single_graphic_window_t3_ParamLimits

0x7a62,	// (0x00007a62) popup_snote2_single_graphic_window_t3

0x7aa3,	// (0x00007aa3) popup_snote2_single_graphic_window_t4_ParamLimits

0x7aa3,	// (0x00007aa3) popup_snote2_single_graphic_window_t4

0x7ad9,	// (0x00007ad9) popup_snote2_single_graphic_window_t5_ParamLimits

0x7ad9,	// (0x00007ad9) popup_snote2_single_graphic_window_t5

0x0004,

0xaf06,	// (0x0000af06) popup_snote2_single_graphic_window_t_ParamLimits

0xaf06,	// (0x0000af06) popup_snote2_single_graphic_window_t

0x5f67,	// (0x00005f67) clock_nsta_pane_cp2_t1

0x5f67,	// (0x00005f67) clock_nsta_pane_cp2_t2

0x0001,

0xad26,	// (0x0000ad26) clock_nsta_pane_cp2_t

0x13f5,	// (0x000013f5) form_field_data_wide_pane_g1_ParamLimits

0x1401,	// (0x00001401) form_field_data_wide_pane_g2_ParamLimits

0x1401,	// (0x00001401) form_field_data_wide_pane_g2

0x140d,	// (0x0000140d) form_field_data_wide_pane_g3_ParamLimits

0x140d,	// (0x0000140d) form_field_data_wide_pane_g3

0x0002,

0xa90c,	// (0x0000a90c) form_field_data_wide_pane_g_ParamLimits

0xa90c,	// (0x0000a90c) form_field_data_wide_pane_g

0xd4f2,	// (0x0000d4f2) grid_touch_3_pane_ParamLimits

0xd4f2,	// (0x0000d4f2) grid_touch_3_pane

0xdaca,	// (0x0000daca) cell_touch_3_pane_ParamLimits

0xdaca,	// (0x0000daca) cell_touch_3_pane

0x6527,	// (0x00006527) cell_touch_3_pane_g1

0x6527,	// (0x00006527) cell_touch_3_pane_g2

0x0001,

0xadab,	// (0x0000adab) cell_touch_3_pane_g

0x08f9,	// (0x000008f9) cont_query_data_pane

0x0901,	// (0x00000901) cont_query_data_pane_cp1

0x7c1f,	// (0x00007c1f) button_value_adjust_pane_cp7

0x7c27,	// (0x00007c27) query_popup_pane_cp3

0x1ebb,	// (0x00001ebb) bg_popup_sub_pane_cp22_ParamLimits

0x1ed1,	// (0x00001ed1) navi_navi_volume_pane_cp2

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g2

0x1efb,	// (0x00001efb) popup_side_volume_key_window_g3

0x0002,

0xa99e,	// (0x0000a99e) popup_side_volume_key_window_g

0x1f18,	// (0x00001f18) popup_side_volume_key_window_t2

0x0001,

0xa9a5,	// (0x0000a9a5) popup_side_volume_key_window_t

0x23a5,	// (0x000023a5) popup_side_volume_key_window_ParamLimits

0xb820,	// (0x0000b820) list_double_graphic_pane_g4_ParamLimits

0xb820,	// (0x0000b820) list_double_graphic_pane_g4

0xd38f,	// (0x0000d38f) list_single_2heading_msg_pane_ParamLimits

0xd38f,	// (0x0000d38f) list_single_2heading_msg_pane

0xdb14,	// (0x0000db14) list_single_2heading_msg_pane_g1_ParamLimits

0xdb14,	// (0x0000db14) list_single_2heading_msg_pane_g1

0xdb20,	// (0x0000db20) list_single_2heading_msg_pane_g2_ParamLimits

0xdb20,	// (0x0000db20) list_single_2heading_msg_pane_g2

0xdb33,	// (0x0000db33) list_single_2heading_msg_pane_g3_ParamLimits

0xdb33,	// (0x0000db33) list_single_2heading_msg_pane_g3

0xdb3f,	// (0x0000db3f) list_single_2heading_msg_pane_g4_ParamLimits

0xdb3f,	// (0x0000db3f) list_single_2heading_msg_pane_g4

0x0003,

0xf69b,	// (0x0000f69b) list_single_2heading_msg_pane_g_ParamLimits

0xf69b,	// (0x0000f69b) list_single_2heading_msg_pane_g

0xdb57,	// (0x0000db57) list_single_2heading_msg_pane_t1_ParamLimits

0xdb57,	// (0x0000db57) list_single_2heading_msg_pane_t1

0xdb7f,	// (0x0000db7f) list_single_2heading_msg_pane_t2_ParamLimits

0xdb7f,	// (0x0000db7f) list_single_2heading_msg_pane_t2

0xdbea,	// (0x0000dbea) list_single_2heading_msg_pane_t3_ParamLimits

0xdbea,	// (0x0000dbea) list_single_2heading_msg_pane_t3

0x7d18,	// (0x00007d18) list_single_2heading_msg_pane_t4_ParamLimits

0x7d18,	// (0x00007d18) list_single_2heading_msg_pane_t4

0x0003,

0xf6a4,	// (0x0000f6a4) list_single_2heading_msg_pane_t_ParamLimits

0xf6a4,	// (0x0000f6a4) list_single_2heading_msg_pane_t

0x0463,	// (0x00000463) title_pane_g4_ParamLimits

0x0463,	// (0x00000463) title_pane_g4

0x1918,	// (0x00001918) title_pane_stacon_g3_ParamLimits

0x1918,	// (0x00001918) title_pane_stacon_g3

0x771c,	// (0x0000771c) list_single_2graphic_im_pane_g4_ParamLimits

0x771c,	// (0x0000771c) list_single_2graphic_im_pane_g4

0x4b3d,	// (0x00004b3d) popup_side_volume_key_window_cp

0x55d0,	// (0x000055d0) main_idle_act2_pane_t1

0x37d0,	// (0x000037d0) toolbar_button_pane_g10

0xb6cb,	// (0x0000b6cb) popup_toolbar_window_cp1

0x5f58,	// (0x00005f58) clock_nsta_pane_cp_t1

0x5f58,	// (0x00005f58) clock_nsta_pane_cp_t2

0x0001,

0xad21,	// (0x0000ad21) clock_nsta_pane_cp_t

0x1ed1,	// (0x00001ed1) navi_navi_volume_pane_cp2_ParamLimits

0x1ee0,	// (0x00001ee0) popup_side_volume_key_window_g1_ParamLimits

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g2_ParamLimits

0x1efb,	// (0x00001efb) popup_side_volume_key_window_g3_ParamLimits

0xa99e,	// (0x0000a99e) popup_side_volume_key_window_g_ParamLimits

0x65a5,	// (0x000065a5) fep_hwr_aid_pane

0x664e,	// (0x0000664e) bg_fep_hwr_top_pane_g4_ParamLimits

0x666e,	// (0x0000666e) fep_hwr_top_pane_g1_ParamLimits

0x6680,	// (0x00006680) fep_hwr_top_pane_g2_ParamLimits

0x6692,	// (0x00006692) fep_hwr_top_pane_g3_ParamLimits

0xad76,	// (0x0000ad76) fep_hwr_top_pane_g_ParamLimits

0x66a7,	// (0x000066a7) fep_hwr_top_text_pane_ParamLimits

0x48f2,	// (0x000048f2) aid_touch_tab_arrow_arrow_2

0x48fb,	// (0x000048fb) aid_touch_tab_arrow_left_2

0x65b9,	// (0x000065b9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x65f0,	// (0x000065f0) fep_hwr_prediction_pane

0x6929,	// (0x00006929) fep_vkb_prediction_pane

0xd887,	// (0x0000d887) fep_vkb_side_pane_g3_ParamLimits

0xd887,	// (0x0000d887) fep_vkb_side_pane_g3

0x69db,	// (0x000069db) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x70e4,	// (0x000070e4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x70f1,	// (0x000070f1) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xae20,	// (0x0000ae20) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7d3d,	// (0x00007d3d) fep_hwr_prediction_pane_g1

0x7d47,	// (0x00007d47) fep_hwr_prediction_pane_g2

0x7d4f,	// (0x00007d4f) fep_hwr_prediction_pane_g3

0x7d57,	// (0x00007d57) fep_hwr_prediction_pane_g4

0x0003,

0xaf23,	// (0x0000af23) fep_hwr_prediction_pane_g

0x7d3d,	// (0x00007d3d) fep_vkb_prediction_pane_g1

0x7d5f,	// (0x00007d5f) fep_vkb_prediction_pane_g2

0x7d67,	// (0x00007d67) fep_vkb_prediction_pane_g3

0x7d6f,	// (0x00007d6f) fep_vkb_prediction_pane_g4

0x0003,

0xaf2c,	// (0x0000af2c) fep_vkb_prediction_pane_g

0x4ec5,	// (0x00004ec5) slider_set_pane_g3

0x4ed9,	// (0x00004ed9) slider_set_pane_g4

0x4ef1,	// (0x00004ef1) slider_set_pane_g5

0x4ec5,	// (0x00004ec5) slider_set_pane_g6

0x4f07,	// (0x00004f07) slider_set_pane_g7

0x50ef,	// (0x000050ef) slider_form_pane_g3

0x50f8,	// (0x000050f8) slider_form_pane_g4

0x5100,	// (0x00005100) slider_form_pane_g5

0x50ef,	// (0x000050ef) slider_form_pane_g6

0xd332,	// (0x0000d332) slider_form_pane_g7

0x58db,	// (0x000058db) slider_set_pane_vc_g3

0x58e4,	// (0x000058e4) slider_set_pane_vc_g4

0x58ed,	// (0x000058ed) slider_set_pane_vc_g5

0x58db,	// (0x000058db) slider_set_pane_vc_g6

0x58f6,	// (0x000058f6) slider_set_pane_vc_g7

0x58db,	// (0x000058db) slider_form_pane_vc_g1

0x58e4,	// (0x000058e4) slider_form_pane_vc_g2

0x58ed,	// (0x000058ed) slider_form_pane_vc_g3

0x58db,	// (0x000058db) slider_form_pane_vc_g4

0x5c7d,	// (0x00005c7d) slider_form_pane_vc_g5

0x0004,

0xad07,	// (0x0000ad07) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7d77,	// (0x00007d77) ai3_links_pane

0xdc58,	// (0x0000dc58) popup_ai3_data_window_ParamLimits

0xdc58,	// (0x0000dc58) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdc76,	// (0x0000dc76) cell_ai3_links_pane_ParamLimits

0xdc76,	// (0x0000dc76) cell_ai3_links_pane

0x7db8,	// (0x00007db8) bg_popup_sub_pane_cp11

0x7dc5,	// (0x00007dc5) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7dea,	// (0x00007dea) heading_ai3_data_pane

0x7df2,	// (0x00007df2) list_ai3_gene_pane

0x7dfe,	// (0x00007dfe) popup_ai3_data_window_g1

0x7e06,	// (0x00007e06) heading_ai3_data_pane_g1

0x7e0e,	// (0x00007e0e) heading_ai3_data_pane_t1

0x7e1c,	// (0x00007e1c) list_double_ai3_gene_pane_ParamLimits

0x7e1c,	// (0x00007e1c) list_double_ai3_gene_pane

0x7e29,	// (0x00007e29) list_single_ai3_gene_pane_ParamLimits

0x7e29,	// (0x00007e29) list_single_ai3_gene_pane

0x64ec,	// (0x000064ec) list_highlight_pane_cp7_ParamLimits

0x64ec,	// (0x000064ec) list_highlight_pane_cp7

0x7e36,	// (0x00007e36) list_single_a13_gene_pane_t1_ParamLimits

0x7e36,	// (0x00007e36) list_single_a13_gene_pane_t1

0x7e4d,	// (0x00007e4d) list_single_ai3_gene_pane_g1

0x7e56,	// (0x00007e56) list_single_ai3_gene_pane_g2

0x0001,

0xaf35,	// (0x0000af35) list_single_ai3_gene_pane_g

0x7e5e,	// (0x00007e5e) list_double_ai3_gene_pane_g1_ParamLimits

0x7e5e,	// (0x00007e5e) list_double_ai3_gene_pane_g1

0x7e6a,	// (0x00007e6a) list_double_ai3_gene_pane_t1_ParamLimits

0x7e6a,	// (0x00007e6a) list_double_ai3_gene_pane_t1

0x7e86,	// (0x00007e86) list_double_ai3_gene_pane_t2_ParamLimits

0x7e86,	// (0x00007e86) list_double_ai3_gene_pane_t2

0x7e9b,	// (0x00007e9b) list_double_ai3_gene_pane_t3_ParamLimits

0x7e9b,	// (0x00007e9b) list_double_ai3_gene_pane_t3

0x0002,

0xaf3a,	// (0x0000af3a) list_double_ai3_gene_pane_t_ParamLimits

0xaf3a,	// (0x0000af3a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7c38,	// (0x00007c38) aid_size_min_col_2

0xdafe,	// (0x0000dafe) aid_size_min_msg_ParamLimits

0xdafe,	// (0x0000dafe) aid_size_min_msg

0xd89b,	// (0x0000d89b) fep_vkb_top_text_pane_g2_ParamLimits

0xd89b,	// (0x0000d89b) fep_vkb_top_text_pane_g2

0x0001,

0xf678,	// (0x0000f678) fep_vkb_top_text_pane_g_ParamLimits

0xf678,	// (0x0000f678) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7eb8,	// (0x00007eb8) grid_hc_apps_pane_ParamLimits

0x7eb8,	// (0x00007eb8) grid_hc_apps_pane

0x7ec7,	// (0x00007ec7) list_hc_apps_pane

0x7ecf,	// (0x00007ecf) scroll_pane_cp37_ParamLimits

0x7ecf,	// (0x00007ecf) scroll_pane_cp37

0xdc90,	// (0x0000dc90) cell_hc_apps_pane_ParamLimits

0xdc90,	// (0x0000dc90) cell_hc_apps_pane

0xdd5a,	// (0x0000dd5a) cell_hc_apps_pane_g1_ParamLimits

0xdd5a,	// (0x0000dd5a) cell_hc_apps_pane_g1

0x7fc4,	// (0x00007fc4) cell_hc_apps_pane_g2_ParamLimits

0x7fc4,	// (0x00007fc4) cell_hc_apps_pane_g2

0x7fe0,	// (0x00007fe0) cell_hc_apps_pane_g3_ParamLimits

0x7fe0,	// (0x00007fe0) cell_hc_apps_pane_g3

0x0002,

0xf6ad,	// (0x0000f6ad) cell_hc_apps_pane_g_ParamLimits

0xf6ad,	// (0x0000f6ad) cell_hc_apps_pane_g

0xdd87,	// (0x0000dd87) cell_hc_apps_pane_t1_ParamLimits

0xdd87,	// (0x0000dd87) cell_hc_apps_pane_t1

0x0843,	// (0x00000843) grid_highlight_pane_cp10_ParamLimits

0x0843,	// (0x00000843) grid_highlight_pane_cp10

0xddc7,	// (0x0000ddc7) list_single_hc_apps_pane_ParamLimits

0xddc7,	// (0x0000ddc7) list_single_hc_apps_pane

0xde01,	// (0x0000de01) list_single_hc_apps_pane_g1

0xde1a,	// (0x0000de1a) list_single_hc_apps_pane_g2

0x0001,

0xf6b4,	// (0x0000f6b4) list_single_hc_apps_pane_g

0xde33,	// (0x0000de33) list_single_hc_apps_pane_g2_copy1

0xde4f,	// (0x0000de4f) list_single_hc_apps_pane_t1

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_ParamLimits

0x055b,	// (0x0000055b) setting_slider_pane_t1_ParamLimits

0x0571,	// (0x00000571) setting_slider_pane_t2_ParamLimits

0x058b,	// (0x0000058b) setting_slider_pane_t3_ParamLimits

0xa7f4,	// (0x0000a7f4) setting_slider_pane_t_ParamLimits

0x05a3,	// (0x000005a3) slider_set_pane_ParamLimits

0x29f7,	// (0x000029f7) control_pane_g5_ParamLimits

0x29f7,	// (0x000029f7) control_pane_g5

0x4eac,	// (0x00004eac) slider_set_pane_g1_ParamLimits

0x4eb9,	// (0x00004eb9) slider_set_pane_g2_ParamLimits

0x4ec5,	// (0x00004ec5) slider_set_pane_g3_ParamLimits

0x4ed9,	// (0x00004ed9) slider_set_pane_g4_ParamLimits

0x4ef1,	// (0x00004ef1) slider_set_pane_g5_ParamLimits

0x4ec5,	// (0x00004ec5) slider_set_pane_g6_ParamLimits

0x4f07,	// (0x00004f07) slider_set_pane_g7_ParamLimits

0xabe3,	// (0x0000abe3) slider_set_pane_g_ParamLimits

0x248a,	// (0x0000248a) navi_icon_text_pane_ParamLimits

0xc905,	// (0x0000c905) aid_fill_nsta_2_ParamLimits

0xc93b,	// (0x0000c93b) aid_touch_tab_arrow_left_ParamLimits

0xc951,	// (0x0000c951) aid_touch_tab_arrow_right_ParamLimits

0xc9ec,	// (0x0000c9ec) clock_nsta_pane_ParamLimits

0xd06f,	// (0x0000d06f) navi_icon_pane_g1_ParamLimits

0xd07b,	// (0x0000d07b) navi_text_pane_t1_ParamLimits

0xd5cc,	// (0x0000d5cc) navi_icon_text_pane_g1_ParamLimits

0xd5d8,	// (0x0000d5d8) navi_icon_text_pane_t1_ParamLimits

0xde01,	// (0x0000de01) list_single_hc_apps_pane_g1_ParamLimits

0xde1a,	// (0x0000de1a) list_single_hc_apps_pane_g2_ParamLimits

0xf6b4,	// (0x0000f6b4) list_single_hc_apps_pane_g_ParamLimits

0xde33,	// (0x0000de33) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xde4f,	// (0x0000de4f) list_single_hc_apps_pane_t1_ParamLimits

0xb2aa,	// (0x0000b2aa) popup_toolbar2_fixed_window_ParamLimits

0xb2aa,	// (0x0000b2aa) popup_toolbar2_fixed_window

0xc86e,	// (0x0000c86e) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x80fd,	// (0x000080fd) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x80fd,	// (0x000080fd) grid_toolbar2_fixed_pane

0xde7d,	// (0x0000de7d) cell_toolbar2_fixed_pane_ParamLimits

0xde7d,	// (0x0000de7d) cell_toolbar2_fixed_pane

0xde9a,	// (0x0000de9a) cell_toolbar2_fixed_pane_g1

0x811e,	// (0x0000811e) toolbar2_fixed_button_pane

0x3788,	// (0x00003788) toolbar2_fixed_button_pane_g1

0x3790,	// (0x00003790) toolbar2_fixed_button_pane_g2

0x3798,	// (0x00003798) toolbar2_fixed_button_pane_g3

0x37a0,	// (0x000037a0) toolbar2_fixed_button_pane_g4

0x37a8,	// (0x000037a8) toolbar2_fixed_button_pane_g5

0x37b0,	// (0x000037b0) toolbar2_fixed_button_pane_g6

0x37b8,	// (0x000037b8) toolbar2_fixed_button_pane_g7

0x37c0,	// (0x000037c0) toolbar2_fixed_button_pane_g8

0x37c8,	// (0x000037c8) toolbar2_fixed_button_pane_g9

0x0008,

0xaae5,	// (0x0000aae5) toolbar2_fixed_button_pane_g

0x8126,	// (0x00008126) cell_toolbar2_float_pane_ParamLimits

0x8126,	// (0x00008126) cell_toolbar2_float_pane

0x8137,	// (0x00008137) cell_toolbar2_float_pane_g1

0x811e,	// (0x0000811e) toolbar2_fixed_button_pane_cp

0xd783,	// (0x0000d783) fep_vkb_accented_list_pane_ParamLimits

0xd783,	// (0x0000d783) fep_vkb_accented_list_pane

0x6d4c,	// (0x00006d4c) bg_popup_fep_shadow_pane_g9

0x260e,	// (0x0000260e) bg_popup_fep_shadow_pane_cp3

0x16a6,	// (0x000016a6) list_accented_list_pane

0x8140,	// (0x00008140) list_single_accented_list_pane_ParamLimits

0x8140,	// (0x00008140) list_single_accented_list_pane

0x260e,	// (0x0000260e) list_highlight_pane_cp10

0x8151,	// (0x00008151) list_single_accented_list_pane_t1

0xc78a,	// (0x0000c78a) popup_slider_window_ParamLimits

0xc78a,	// (0x0000c78a) popup_slider_window

0x7c2f,	// (0x00007c2f) aid_indentation_list_msg

0xdfa5,	// (0x0000dfa5) bg_popup_window_pane_cp19

0x828b,	// (0x0000828b) popup_slider_window_g1

0x82a7,	// (0x000082a7) popup_slider_window_g2

0x82c3,	// (0x000082c3) popup_slider_window_g3

0x0005,

0xf6b9,	// (0x0000f6b9) popup_slider_window_g

0x831f,	// (0x0000831f) popup_slider_window_t1

0x8393,	// (0x00008393) small_volume_slider_vertical_pane

0x6527,	// (0x00006527) small_volume_slider_vertical_pane_g1

0x6527,	// (0x00006527) small_volume_slider_vertical_pane_g2

0x83af,	// (0x000083af) small_volume_slider_vertical_pane_g3

0x0002,

0xaf5f,	// (0x0000af5f) small_volume_slider_vertical_pane_g

0xb214,	// (0x0000b214) area_side_right_pane_ParamLimits

0xb214,	// (0x0000b214) area_side_right_pane

0xe05d,	// (0x0000e05d) aid_size_side_button_ParamLimits

0xe05d,	// (0x0000e05d) aid_size_side_button

0xe076,	// (0x0000e076) grid_sctrl_middle_pane_ParamLimits

0xe076,	// (0x0000e076) grid_sctrl_middle_pane

0x83ec,	// (0x000083ec) sctrl_sk_bottom_pane

0x83fd,	// (0x000083fd) sctrl_sk_top_pane

0x840f,	// (0x0000840f) aid_touch_sctrl_top

0x0843,	// (0x00000843) bg_sctrl_sk_pane_ParamLimits

0x0843,	// (0x00000843) bg_sctrl_sk_pane

0x841c,	// (0x0000841c) sctrl_sk_top_pane_g1

0x8429,	// (0x00008429) sctrl_sk_top_pane_t1

0x840f,	// (0x0000840f) aid_touch_sctrl_bottom

0x0843,	// (0x00000843) bg_sctrl_sk_pane_cp_ParamLimits

0x0843,	// (0x00000843) bg_sctrl_sk_pane_cp

0x8444,	// (0x00008444) sctrl_sk_bottom_pane_g1

0x8429,	// (0x00008429) sctrl_sk_bottom_pane_t1

0xe090,	// (0x0000e090) cell_sctrl_middle_pane_ParamLimits

0xe090,	// (0x0000e090) cell_sctrl_middle_pane

0xe0a3,	// (0x0000e0a3) aid_touch_sctrl_middle_ParamLimits

0xe0a3,	// (0x0000e0a3) aid_touch_sctrl_middle

0xe0b0,	// (0x0000e0b0) bg_sctrl_middle_pane_ParamLimits

0xe0b0,	// (0x0000e0b0) bg_sctrl_middle_pane

0x8512,	// (0x00008512) cell_sctrl_middle_pane_g1_ParamLimits

0x8512,	// (0x00008512) cell_sctrl_middle_pane_g1

0xe0be,	// (0x0000e0be) cell_sctrl_middle_pane_g2_ParamLimits

0xe0be,	// (0x0000e0be) cell_sctrl_middle_pane_g2

0x0001,

0xf6c6,	// (0x0000f6c6) cell_sctrl_middle_pane_g_ParamLimits

0xf6c6,	// (0x0000f6c6) cell_sctrl_middle_pane_g

0x3788,	// (0x00003788) bg_sctrl_middle_pane_g1

0x3790,	// (0x00003790) bg_sctrl_middle_pane_g2

0x3798,	// (0x00003798) bg_sctrl_middle_pane_g3

0x37a0,	// (0x000037a0) bg_sctrl_middle_pane_g4

0x37a8,	// (0x000037a8) bg_sctrl_middle_pane_g5

0x37b0,	// (0x000037b0) bg_sctrl_middle_pane_g6

0x37b8,	// (0x000037b8) bg_sctrl_middle_pane_g7

0x37c0,	// (0x000037c0) bg_sctrl_middle_pane_g8

0x0007,

0xaf70,	// (0x0000af70) bg_sctrl_middle_pane_g

0x37c8,	// (0x000037c8) bg_sctrl_middle_pane_g8_copy1

0x3788,	// (0x00003788) bg_sctrl_sk_pane_g1

0x3790,	// (0x00003790) bg_sctrl_sk_pane_g2

0x3798,	// (0x00003798) bg_sctrl_sk_pane_g3

0x0008,

0xaae5,	// (0x0000aae5) bg_sctrl_sk_pane_g

0x0d6f,	// (0x00000d6f) aid_size_touch_scroll_bar

0x37a0,	// (0x000037a0) bg_sctrl_sk_pane_g4

0x37a8,	// (0x000037a8) bg_sctrl_sk_pane_g5

0x37b0,	// (0x000037b0) bg_sctrl_sk_pane_g6

0x37b8,	// (0x000037b8) bg_sctrl_sk_pane_g7

0x37c0,	// (0x000037c0) bg_sctrl_sk_pane_g8

0x37c8,	// (0x000037c8) bg_sctrl_sk_pane_g9

0x2c50,	// (0x00002c50) popup_fep_china_hwr2_fs_candidate_window

0xc246,	// (0x0000c246) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc246,	// (0x0000c246) popup_fep_china_hwr2_fs_control_window

0x69db,	// (0x000069db) sctrl_sk_top_pane_g2

0x0001,

0xaf66,	// (0x0000af66) sctrl_sk_top_pane_g

0xe0ca,	// (0x0000e0ca) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe0ca,	// (0x0000e0ca) aid_fep_china_hwr2_fs_cell

0xe0e0,	// (0x0000e0e0) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe0e0,	// (0x0000e0e0) bg_popup_fep_shadow_pane_cp4

0xe0f7,	// (0x0000e0f7) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe0f7,	// (0x0000e0f7) bg_popup_fep_shadow_pane_cp5

0xe109,	// (0x0000e109) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe109,	// (0x0000e109) popup_fep_china_hwr2_fs_control_bar_grid

0xe11d,	// (0x0000e11d) popup_fep_china_hwr2_fs_control_funtion_grid

0x84e6,	// (0x000084e6) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x84f0,	// (0x000084f0) popup_fep_china_hwr2_fs_candidate_grid

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe125,	// (0x0000e125) cell_fep_china_hwr2_fs_funtion_grid

0x6527,	// (0x00006527) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8512,	// (0x00008512) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8512,	// (0x00008512) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8520,	// (0x00008520) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8520,	// (0x00008520) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xaf81,	// (0x0000af81) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xaf81,	// (0x0000af81) cell_fep_china_hwr2_fs_funtion_grid_g

0xe13d,	// (0x0000e13d) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe13d,	// (0x0000e13d) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe152,	// (0x0000e152) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe152,	// (0x0000e152) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf6cb,	// (0x0000f6cb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf6cb,	// (0x0000f6cb) cell_fep_china_hwr2_fs_funtion_grid_t

0x8567,	// (0x00008567) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x856f,	// (0x0000856f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8577,	// (0x00008577) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xaf8b,	// (0x0000af8b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x857f,	// (0x0000857f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x857f,	// (0x0000857f) cell_fep_china_hwr2_fs_candidate_grid

0x859e,	// (0x0000859e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x85a6,	// (0x000085a6) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6527,	// (0x00006527) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6527,	// (0x00006527) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xadab,	// (0x0000adab) cell_fep_china_hwr2_fs_candidate_grid_g

0x85ae,	// (0x000085ae) cell_fep_china_hwr2_fs_candidate_grid_t1

0x32bf,	// (0x000032bf) clock_nsta_pane_cp_24_ParamLimits

0x32bf,	// (0x000032bf) clock_nsta_pane_cp_24

0x333f,	// (0x0000333f) indicator_nsta_pane_cp_24_ParamLimits

0x333f,	// (0x0000333f) indicator_nsta_pane_cp_24

0x4739,	// (0x00004739) heading_pane_g1

0x0001,

0xab4a,	// (0x0000ab4a) heading_pane_g

0x535f,	// (0x0000535f) grid_sct_catagory_button_pane

0x5391,	// (0x00005391) scroll_pane_cp5_ParamLimits

0x611a,	// (0x0000611a) button_value_adjust_pane_cp5_ParamLimits

0x611a,	// (0x0000611a) button_value_adjust_pane_cp5

0x6220,	// (0x00006220) form2_midp_time_pane_ParamLimits

0x85bc,	// (0x000085bc) cell_sct_catagory_button_pane_ParamLimits

0x85bc,	// (0x000085bc) cell_sct_catagory_button_pane

0x64ec,	// (0x000064ec) bg_button_pane_cp01_ParamLimits

0x64ec,	// (0x000064ec) bg_button_pane_cp01

0x6527,	// (0x00006527) cell_sct_catagory_button_pane_g1

0xc80b,	// (0x0000c80b) popup_tb_extension_window

0xe16e,	// (0x0000e16e) aid_size_cell_ext_ParamLimits

0xe16e,	// (0x0000e16e) aid_size_cell_ext

0x0bb1,	// (0x00000bb1) bg_tb_trans_pane_cp1_ParamLimits

0x0bb1,	// (0x00000bb1) bg_tb_trans_pane_cp1

0xe194,	// (0x0000e194) grid_tb_ext_pane_ParamLimits

0xe194,	// (0x0000e194) grid_tb_ext_pane

0xe1d4,	// (0x0000e1d4) cell_tb_ext_pane_ParamLimits

0xe1d4,	// (0x0000e1d4) cell_tb_ext_pane

0xe1fe,	// (0x0000e1fe) cell_tb_ext_pane_g1_ParamLimits

0xe1fe,	// (0x0000e1fe) cell_tb_ext_pane_g1

0x8652,	// (0x00008652) cell_tb_ext_pane_t1

0x0843,	// (0x00000843) list_highlight_pane_cp11_ParamLimits

0x0843,	// (0x00000843) list_highlight_pane_cp11

0x036c,	// (0x0000036c) popup_uni_indicator_window_ParamLimits

0x036c,	// (0x0000036c) popup_uni_indicator_window

0x13db,	// (0x000013db) bg_popup_sub_pane_cp14

0x866d,	// (0x0000866d) list_uniindi_pane

0x8679,	// (0x00008679) uniindi_top_pane

0x0843,	// (0x00000843) bg_uniindi_top_pane

0x869a,	// (0x0000869a) uniindi_top_pane_g1

0x86b0,	// (0x000086b0) uniindi_top_pane_g2

0x0003,

0xaf92,	// (0x0000af92) uniindi_top_pane_g

0x86da,	// (0x000086da) uniindi_top_pane_t1

0x8706,	// (0x00008706) list_single_uniindi_pane_ParamLimits

0x8706,	// (0x00008706) list_single_uniindi_pane

0x6527,	// (0x00006527) bg_uniindi_top_pane_g1

0x8718,	// (0x00008718) list_single_uniindi_pane_g1

0x872b,	// (0x0000872b) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8750,	// (0x00008750) bg_sctrl_sk_pane_cp1

0x8759,	// (0x00008759) bg_sctrl_sk_pane_cp2

0x8762,	// (0x00008762) control_bg_pane_g1

0x876b,	// (0x0000876b) control_bg_pane_g2

0x0001,

0xaf9b,	// (0x0000af9b) control_bg_pane_g

0x5f1d,	// (0x00005f1d) cell_indicator_nsta_pane_g1_ParamLimits

0xd525,	// (0x0000d525) cell_indicator_nsta_pane_g2_ParamLimits

0xf643,	// (0x0000f643) cell_indicator_nsta_pane_g_ParamLimits

0x62b0,	// (0x000062b0) form2_midp_time_pane_t1_ParamLimits

0x6597,	// (0x00006597) main_idle_act4_pane_ParamLimits

0x6597,	// (0x00006597) main_idle_act4_pane

0xc80b,	// (0x0000c80b) popup_tb_extension_window_ParamLimits

0xe1bc,	// (0x0000e1bc) tb_ext_find_pane_ParamLimits

0xe1bc,	// (0x0000e1bc) tb_ext_find_pane

0x8774,	// (0x00008774) ai_gene_pane_1_cp1

0x2757,	// (0x00002757) ai_gene_pane_2_cp1

0x877c,	// (0x0000877c) list_single_idle_plugin_calendar_pane

0x8785,	// (0x00008785) list_single_idle_plugin_notification_pane

0x878e,	// (0x0000878e) list_single_idle_plugin_player_pane

0xe21b,	// (0x0000e21b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe21b,	// (0x0000e21b) list_single_idle_plugin_shortcut_pane

0xe243,	// (0x0000e243) main_idle_act4_pane_t1

0xe25b,	// (0x0000e25b) main_idle_act4_pane_t2

0x0001,

0xf6d0,	// (0x0000f6d0) main_idle_act4_pane_t

0xe273,	// (0x0000e273) middle_sk_idle_act4_pane_ParamLimits

0xe273,	// (0x0000e273) middle_sk_idle_act4_pane

0xe28f,	// (0x0000e28f) popup_clock_digital_analogue_window_cp2

0xe2b6,	// (0x0000e2b6) shortcut_wheel_idle_act4_pane_ParamLimits

0xe2b6,	// (0x0000e2b6) shortcut_wheel_idle_act4_pane

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g1

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g2

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g3

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g4

0x6527,	// (0x00006527) shortcut_wheel_idle_act4_pane_g5

0x8821,	// (0x00008821) shortcut_wheel_idle_act4_pane_g6

0x8829,	// (0x00008829) shortcut_wheel_idle_act4_pane_g7

0x8831,	// (0x00008831) shortcut_wheel_idle_act4_pane_g8

0x8839,	// (0x00008839) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xafa5,	// (0x0000afa5) shortcut_wheel_idle_act4_pane_g

0x664e,	// (0x0000664e) middle_sk_idle_act4_pane_g1_ParamLimits

0x664e,	// (0x0000664e) middle_sk_idle_act4_pane_g1

0xe333,	// (0x0000e333) middle_sk_idle_act4_pane_g2_ParamLimits

0xe333,	// (0x0000e333) middle_sk_idle_act4_pane_g2

0x0001,

0xf6e5,	// (0x0000f6e5) middle_sk_idle_act4_pane_g_ParamLimits

0xf6e5,	// (0x0000f6e5) middle_sk_idle_act4_pane_g

0xe34b,	// (0x0000e34b) middle_sk_idle_act4_pane_t1_ParamLimits

0xe34b,	// (0x0000e34b) middle_sk_idle_act4_pane_t1

0xe37a,	// (0x0000e37a) grid_ai_shortcut_pane_ParamLimits

0xe37a,	// (0x0000e37a) grid_ai_shortcut_pane

0xe397,	// (0x0000e397) list_highlight_pane_cp16_ParamLimits

0xe397,	// (0x0000e397) list_highlight_pane_cp16

0xe3a4,	// (0x0000e3a4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe3a4,	// (0x0000e3a4) list_single_idle_plugin_shortcut_pane_g1

0xe3b0,	// (0x0000e3b0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe3b0,	// (0x0000e3b0) list_single_idle_plugin_shortcut_pane_g2

0xe3ce,	// (0x0000e3ce) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe3ce,	// (0x0000e3ce) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf6ea,	// (0x0000f6ea) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf6ea,	// (0x0000f6ea) list_single_idle_plugin_shortcut_pane_g

0xe3e3,	// (0x0000e3e3) cell_ai_shortcut_pane_ParamLimits

0xe3e3,	// (0x0000e3e3) cell_ai_shortcut_pane

0xe3f9,	// (0x0000e3f9) cell_ai_shortcut_pane_g1_ParamLimits

0xe3f9,	// (0x0000e3f9) cell_ai_shortcut_pane_g1

0x8774,	// (0x00008774) ai_gene_pane_1_cp2

0x896a,	// (0x0000896a) ai_gene_pane_2_cp2

0x8972,	// (0x00008972) list_highlight_pane_cp15

0x897b,	// (0x0000897b) list_single_idle_plugin_calendar_pane_g1

0x8972,	// (0x00008972) list_highlight_pane_cp17

0x8983,	// (0x00008983) list_single_idle_plugin_calendar_pane_g1_copy1

0x898b,	// (0x0000898b) list_single_idle_plugin_player_pane_g1

0x567e,	// (0x0000567e) list_single_idle_plugin_player_pane_g2

0x0001,

0xafd4,	// (0x0000afd4) list_single_idle_plugin_player_pane_g

0x8993,	// (0x00008993) list_single_idle_plugin_player_pane_t1

0x89a1,	// (0x000089a1) list_single_idle_plugin_player_pane_t2

0x89af,	// (0x000089af) list_single_idle_plugin_player_pane_t3

0x89bd,	// (0x000089bd) list_single_idle_plugin_player_pane_t4

0x0003,

0xafd9,	// (0x0000afd9) list_single_idle_plugin_player_pane_t

0x89cb,	// (0x000089cb) wait_bar_pane_cp15

0x89d3,	// (0x000089d3) grid_ai_notification_pane

0x567e,	// (0x0000567e) list_single_idle_plugin_notification_pane_g1

0xe41b,	// (0x0000e41b) cell_ai_notification_pane_ParamLimits

0xe41b,	// (0x0000e41b) cell_ai_notification_pane

0x89e9,	// (0x000089e9) cell_ai_notification_pane_g1

0x89f1,	// (0x000089f1) cell_ai_notification_pane_t1

0xe428,	// (0x0000e428) tb_ext_find_button_pane

0xe430,	// (0x0000e430) tb_ext_find_pane_g1

0xe438,	// (0x0000e438) tb_ext_find_pane_t1

0x1d77,	// (0x00001d77) tb_ext_find_button_pane_g1

0x8a1d,	// (0x00008a1d) tb_ext_find_button_pane_g2

0x0001,

0xafe2,	// (0x0000afe2) tb_ext_find_button_pane_g

0xe243,	// (0x0000e243) main_idle_act4_pane_t1_ParamLimits

0xe25b,	// (0x0000e25b) main_idle_act4_pane_t2_ParamLimits

0xf6d0,	// (0x0000f6d0) main_idle_act4_pane_t_ParamLimits

0xe28f,	// (0x0000e28f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe2a6,	// (0x0000e2a6) sat_plugin_idle_act4_pane_ParamLimits

0xe2a6,	// (0x0000e2a6) sat_plugin_idle_act4_pane

0xe446,	// (0x0000e446) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe446,	// (0x0000e446) sat_plugin_idle_act4_pane_t1

0xe45e,	// (0x0000e45e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe45e,	// (0x0000e45e) sat_plugin_idle_act4_pane_t2

0xe476,	// (0x0000e476) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe476,	// (0x0000e476) sat_plugin_idle_act4_pane_t3

0xe48e,	// (0x0000e48e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe48e,	// (0x0000e48e) sat_plugin_idle_act4_pane_t4

0x0003,

0xf6f1,	// (0x0000f6f1) sat_plugin_idle_act4_pane_t_ParamLimits

0xf6f1,	// (0x0000f6f1) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0843,	// (0x00000843) bg_popup_sub_pane_cp25_ParamLimits

0x0843,	// (0x00000843) bg_popup_sub_pane_cp25

0x8a72,	// (0x00008a72) popup_battery_window_g1_ParamLimits

0x8a72,	// (0x00008a72) popup_battery_window_g1

0x8a7e,	// (0x00008a7e) popup_battery_window_t1_ParamLimits

0x8a7e,	// (0x00008a7e) popup_battery_window_t1

0x8a90,	// (0x00008a90) popup_battery_window_t2_ParamLimits

0x8a90,	// (0x00008a90) popup_battery_window_t2

0x0001,

0xaff0,	// (0x0000aff0) popup_battery_window_t_ParamLimits

0xaff0,	// (0x0000aff0) popup_battery_window_t

0xbf7f,	// (0x0000bf7f) midp_canvas_pane_ParamLimits

0xbfda,	// (0x0000bfda) midp_keypad_pane_ParamLimits

0xbfda,	// (0x0000bfda) midp_keypad_pane

0x2b9e,	// (0x00002b9e) main_midp_pane_ParamLimits

0x5f76,	// (0x00005f76) signal_pane_g2_cp_ParamLimits

0xe4a6,	// (0x0000e4a6) aid_size_cell_midp_keypad_ParamLimits

0xe4a6,	// (0x0000e4a6) aid_size_cell_midp_keypad

0xe4c4,	// (0x0000e4c4) midp_keyp_game_grid_pane_ParamLimits

0xe4c4,	// (0x0000e4c4) midp_keyp_game_grid_pane

0xe4eb,	// (0x0000e4eb) midp_keyp_rocker_pane_ParamLimits

0xe4eb,	// (0x0000e4eb) midp_keyp_rocker_pane

0xe530,	// (0x0000e530) midp_keyp_sk_left_pane_ParamLimits

0xe530,	// (0x0000e530) midp_keyp_sk_left_pane

0xe584,	// (0x0000e584) midp_keyp_sk_right_pane_ParamLimits

0xe584,	// (0x0000e584) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe5d8,	// (0x0000e5d8) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe5d8,	// (0x0000e5d8) midp_keyp_sk_right_pane_g1

0x6527,	// (0x00006527) midp_keyp_rocker_pane_g1

0xe5e1,	// (0x0000e5e1) keyp_game_cell_pane_ParamLimits

0xe5e1,	// (0x0000e5e1) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe607,	// (0x0000e607) keyp_game_cell_pane_g1

0xb256,	// (0x0000b256) popup_fep_vkb2_window_ParamLimits

0xb256,	// (0x0000b256) popup_fep_vkb2_window

0xe610,	// (0x0000e610) aid_size_cell_vkb2_ParamLimits

0xe610,	// (0x0000e610) aid_size_cell_vkb2

0xe63e,	// (0x0000e63e) popup_fep_vkb2_window_g1_ParamLimits

0xe63e,	// (0x0000e63e) popup_fep_vkb2_window_g1

0xe68e,	// (0x0000e68e) vkb2_area_bottom_pane_ParamLimits

0xe68e,	// (0x0000e68e) vkb2_area_bottom_pane

0xe6ea,	// (0x0000e6ea) vkb2_area_keypad_pane_ParamLimits

0xe6ea,	// (0x0000e6ea) vkb2_area_keypad_pane

0xe738,	// (0x0000e738) vkb2_area_top_pane_ParamLimits

0xe738,	// (0x0000e738) vkb2_area_top_pane

0xe7be,	// (0x0000e7be) vkb2_top_entry_pane_ParamLimits

0xe7be,	// (0x0000e7be) vkb2_top_entry_pane

0xe7eb,	// (0x0000e7eb) vkb2_top_grid_left_pane_ParamLimits

0xe7eb,	// (0x0000e7eb) vkb2_top_grid_left_pane

0xe80b,	// (0x0000e80b) vkb2_top_grid_right_pane_ParamLimits

0xe80b,	// (0x0000e80b) vkb2_top_grid_right_pane

0x8e0b,	// (0x00008e0b) vkb2_cell_keypad_pane_ParamLimits

0x8e0b,	// (0x00008e0b) vkb2_cell_keypad_pane

0xe851,	// (0x0000e851) vkb2_area_bottom_grid_pane_ParamLimits

0xe851,	// (0x0000e851) vkb2_area_bottom_grid_pane

0xe87b,	// (0x0000e87b) vkb2_area_bottom_pane_g1_ParamLimits

0xe87b,	// (0x0000e87b) vkb2_area_bottom_pane_g1

0xe8a1,	// (0x0000e8a1) vkb2_area_bottom_pane_g2_ParamLimits

0xe8a1,	// (0x0000e8a1) vkb2_area_bottom_pane_g2

0xe8d2,	// (0x0000e8d2) vkb2_area_bottom_pane_g3_ParamLimits

0xe8d2,	// (0x0000e8d2) vkb2_area_bottom_pane_g3

0x0002,

0xf6fa,	// (0x0000f6fa) vkb2_area_bottom_pane_g_ParamLimits

0xf6fa,	// (0x0000f6fa) vkb2_area_bottom_pane_g

0x8f9a,	// (0x00008f9a) vkb2_top_cell_left_pane_ParamLimits

0x8f9a,	// (0x00008f9a) vkb2_top_cell_left_pane

0xe93c,	// (0x0000e93c) vkb2_top_entry_pane_g1_ParamLimits

0xe93c,	// (0x0000e93c) vkb2_top_entry_pane_g1

0xe94a,	// (0x0000e94a) vkb2_top_entry_pane_t1_ParamLimits

0xe94a,	// (0x0000e94a) vkb2_top_entry_pane_t1

0x8fe8,	// (0x00008fe8) vkb2_top_entry_pane_t2_ParamLimits

0x8fe8,	// (0x00008fe8) vkb2_top_entry_pane_t2

0x9000,	// (0x00009000) vkb2_top_entry_pane_t3_ParamLimits

0x9000,	// (0x00009000) vkb2_top_entry_pane_t3

0x0002,

0xf701,	// (0x0000f701) vkb2_top_entry_pane_t_ParamLimits

0xf701,	// (0x0000f701) vkb2_top_entry_pane_t

0xe983,	// (0x0000e983) vkb2_top_grid_right_pane_g1_ParamLimits

0xe983,	// (0x0000e983) vkb2_top_grid_right_pane_g1

0x9059,	// (0x00009059) vkb2_top_grid_right_pane_g2_ParamLimits

0x9059,	// (0x00009059) vkb2_top_grid_right_pane_g2

0x9071,	// (0x00009071) vkb2_top_grid_right_pane_g3_ParamLimits

0x9071,	// (0x00009071) vkb2_top_grid_right_pane_g3

0xe999,	// (0x0000e999) vkb2_top_grid_right_pane_g4_ParamLimits

0xe999,	// (0x0000e999) vkb2_top_grid_right_pane_g4

0x0003,

0xf708,	// (0x0000f708) vkb2_top_grid_right_pane_g_ParamLimits

0xf708,	// (0x0000f708) vkb2_top_grid_right_pane_g

0x909f,	// (0x0000909f) vkb2_top_cell_left_pane_g1

0x90b6,	// (0x000090b6) vkb2_cell_keypad_pane_g1_ParamLimits

0x90b6,	// (0x000090b6) vkb2_cell_keypad_pane_g1

0x90da,	// (0x000090da) vkb2_cell_keypad_pane_t1_ParamLimits

0x90da,	// (0x000090da) vkb2_cell_keypad_pane_t1

0x90f1,	// (0x000090f1) vkb2_cell_bottom_grid_pane_ParamLimits

0x90f1,	// (0x000090f1) vkb2_cell_bottom_grid_pane

0x912a,	// (0x0000912a) vkb2_cell_bottom_grid_pane_g1

0xe2d7,	// (0x0000e2d7) aid_call2_pane_cp02

0xe2df,	// (0x0000e2df) aid_call_pane_cp02

0xe2e7,	// (0x0000e2e7) clock_digital_number_pane_cp10

0xe2ef,	// (0x0000e2ef) clock_digital_number_pane_cp11

0xe2f7,	// (0x0000e2f7) clock_digital_number_pane_cp12

0xe2ff,	// (0x0000e2ff) clock_digital_number_pane_cp13

0xe307,	// (0x0000e307) clock_digital_separator_pane_cp10

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g1

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g2

0xe30f,	// (0x0000e30f) popup_clock_digital_analogue_window_cp2_g3

0x1d77,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g4

0xe30f,	// (0x0000e30f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf6d5,	// (0x0000f6d5) popup_clock_digital_analogue_window_cp2_g

0xe317,	// (0x0000e317) popup_clock_digital_analogue_window_cp2_t1

0xe325,	// (0x0000e325) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf6e0,	// (0x0000f6e0) popup_clock_digital_analogue_window_cp2_t

0x6527,	// (0x00006527) clock_digital_number_pane_cp10_g1

0x6527,	// (0x00006527) clock_digital_number_pane_cp10_g2

0x0001,

0xadab,	// (0x0000adab) clock_digital_number_pane_cp10_g

0x6527,	// (0x00006527) clock_digital_separator_pane_cp10_g1

0x6527,	// (0x00006527) clock_digital_separator_pane_cp10_g2

0x0001,

0xadab,	// (0x0000adab) clock_digital_separator_pane_cp10_g

0x86bc,	// (0x000086bc) uniindi_top_pane_g3

0x86cd,	// (0x000086cd) uniindi_top_pane_g4

0x8e7b,	// (0x00008e7b) vkb2_row_keypad_pane_ParamLimits

0x8e7b,	// (0x00008e7b) vkb2_row_keypad_pane

0x9146,	// (0x00009146) vkb2_cell_t_keypad_pane_ParamLimits

0x9146,	// (0x00009146) vkb2_cell_t_keypad_pane

0x9156,	// (0x00009156) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9156,	// (0x00009156) vkb2_cell_t_keypad_pane_cp08

0x916b,	// (0x0000916b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x916b,	// (0x0000916b) vkb2_cell_t_keypad_pane_cp09

0x917f,	// (0x0000917f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x917f,	// (0x0000917f) vkb2_cell_t_keypad_pane_cp01

0x9190,	// (0x00009190) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9190,	// (0x00009190) vkb2_cell_t_keypad_pane_cp02

0x91a1,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x91a1,	// (0x000091a1) vkb2_cell_t_keypad_pane_cp03

0x91b2,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x91b2,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp04

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x91c3,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp05

0x91d4,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x91d4,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp06

0x91e7,	// (0x000091e7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x91e7,	// (0x000091e7) vkb2_cell_t_keypad_pane_cp07

0x91fc,	// (0x000091fc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x91fc,	// (0x000091fc) vkb2_cell_t_keypad_pane_cp10

0x69db,	// (0x000069db) vkb2_cell_t_keypad_pane_g1

0x9211,	// (0x00009211) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe9af,	// (0x0000e9af) aid_size_cell_graphic2_ParamLimits

0xe9af,	// (0x0000e9af) aid_size_cell_graphic2

0x3f5b,	// (0x00003f5b) bg_popup_window_pane_cp21_ParamLimits

0x3f5b,	// (0x00003f5b) bg_popup_window_pane_cp21

0xe9e1,	// (0x0000e9e1) graphic2_pages_pane_ParamLimits

0xe9e1,	// (0x0000e9e1) graphic2_pages_pane

0xea39,	// (0x0000ea39) grid_graphic2_control_pane_ParamLimits

0xea39,	// (0x0000ea39) grid_graphic2_control_pane

0xea6d,	// (0x0000ea6d) grid_graphic2_pane_ParamLimits

0xea6d,	// (0x0000ea6d) grid_graphic2_pane

0xeae4,	// (0x0000eae4) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7df2,	// (0x00007df2) list_ai3_gene_pane_ParamLimits

0xdfa5,	// (0x0000dfa5) bg_popup_window_pane_cp19_ParamLimits

0x8229,	// (0x00008229) bg_touch_area_indi_pane_ParamLimits

0x8229,	// (0x00008229) bg_touch_area_indi_pane

0x823f,	// (0x0000823f) bg_touch_area_indi_pane_cp01_ParamLimits

0x823f,	// (0x0000823f) bg_touch_area_indi_pane_cp01

0x8257,	// (0x00008257) bg_touch_area_indi_pane_cp02_ParamLimits

0x8257,	// (0x00008257) bg_touch_area_indi_pane_cp02

0x8271,	// (0x00008271) bg_touch_area_indi_pane_cp03_ParamLimits

0x8271,	// (0x00008271) bg_touch_area_indi_pane_cp03

0x828b,	// (0x0000828b) popup_slider_window_g1_ParamLimits

0x82a7,	// (0x000082a7) popup_slider_window_g2_ParamLimits

0x82c3,	// (0x000082c3) popup_slider_window_g3_ParamLimits

0xf6b9,	// (0x0000f6b9) popup_slider_window_g_ParamLimits

0x831f,	// (0x0000831f) popup_slider_window_t1_ParamLimits

0x8393,	// (0x00008393) small_volume_slider_vertical_pane_ParamLimits

0xeae4,	// (0x0000eae4) cell_graphic2_pane_ParamLimits

0xeb47,	// (0x0000eb47) bg_button_pane_cp10_ParamLimits

0xeb47,	// (0x0000eb47) bg_button_pane_cp10

0xeb5a,	// (0x0000eb5a) bg_button_pane_cp11_ParamLimits

0xeb5a,	// (0x0000eb5a) bg_button_pane_cp11

0xeb6d,	// (0x0000eb6d) graphic2_pages_pane_g1_ParamLimits

0xeb6d,	// (0x0000eb6d) graphic2_pages_pane_g1

0xeb88,	// (0x0000eb88) graphic2_pages_pane_g2_ParamLimits

0xeb88,	// (0x0000eb88) graphic2_pages_pane_g2

0x0001,

0xf716,	// (0x0000f716) graphic2_pages_pane_g_ParamLimits

0xf716,	// (0x0000f716) graphic2_pages_pane_g

0xeba0,	// (0x0000eba0) graphic2_pages_pane_t1_ParamLimits

0xeba0,	// (0x0000eba0) graphic2_pages_pane_t1

0xebb8,	// (0x0000ebb8) cell_graphic2_control_pane_ParamLimits

0xebb8,	// (0x0000ebb8) cell_graphic2_control_pane

0xebd2,	// (0x0000ebd2) cell_graphic2_pane_g1_ParamLimits

0xebd2,	// (0x0000ebd2) cell_graphic2_pane_g1

0x67fd,	// (0x000067fd) cell_graphic2_pane_g2_ParamLimits

0x67fd,	// (0x000067fd) cell_graphic2_pane_g2

0xebdf,	// (0x0000ebdf) cell_graphic2_pane_g3_ParamLimits

0xebdf,	// (0x0000ebdf) cell_graphic2_pane_g3

0x680a,	// (0x0000680a) cell_graphic2_pane_g4_ParamLimits

0x680a,	// (0x0000680a) cell_graphic2_pane_g4

0xebec,	// (0x0000ebec) cell_graphic2_pane_g5_ParamLimits

0xebec,	// (0x0000ebec) cell_graphic2_pane_g5

0x0004,

0xf71b,	// (0x0000f71b) cell_graphic2_pane_g_ParamLimits

0xf71b,	// (0x0000f71b) cell_graphic2_pane_g

0xec0c,	// (0x0000ec0c) cell_graphic2_pane_t1_ParamLimits

0xec0c,	// (0x0000ec0c) cell_graphic2_pane_t1

0x472d,	// (0x0000472d) grid_highlight_pane_cp11_ParamLimits

0x472d,	// (0x0000472d) grid_highlight_pane_cp11

0x13db,	// (0x000013db) bg_button_pane_cp05

0xec23,	// (0x0000ec23) cell_graphic2_control_pane_g1

0x6527,	// (0x00006527) bg_touch_area_indi_pane_g1

0x9479,	// (0x00009479) aid_cmod_rocker_key_size

0x9483,	// (0x00009483) aid_cmode_itu_key_size

0x948d,	// (0x0000948d) main_cmode_video_pane

0x9497,	// (0x00009497) main_comp_mode_itu_pane

0x94a3,	// (0x000094a3) main_comp_mode_rocker_pane

0x94af,	// (0x000094af) cell_cmode_rocker_pane_ParamLimits

0x94af,	// (0x000094af) cell_cmode_rocker_pane

0x94c3,	// (0x000094c3) cell_cmode_itu_pane_ParamLimits

0x94c3,	// (0x000094c3) cell_cmode_itu_pane

0x13db,	// (0x000013db) bg_button_pane_cp06_ParamLimits

0x13db,	// (0x000013db) bg_button_pane_cp06

0x69db,	// (0x000069db) cell_cmode_rocker_pane_g1_ParamLimits

0x69db,	// (0x000069db) cell_cmode_rocker_pane_g1

0x8512,	// (0x00008512) cell_cmode_rocker_pane_g2_ParamLimits

0x8512,	// (0x00008512) cell_cmode_rocker_pane_g2

0x0001,

0xb021,	// (0x0000b021) cell_cmode_rocker_pane_g_ParamLimits

0xb021,	// (0x0000b021) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x94da,	// (0x000094da) cell_cmode_itu_pane_g1

0x94e3,	// (0x000094e3) cell_cmode_itu_pane_t1

0x94f1,	// (0x000094f1) cell_cmode_itu_pane_t2

0x0001,

0xb026,	// (0x0000b026) cell_cmode_itu_pane_t

0x8740,	// (0x00008740) aid_touch_ctrl_left

0x8748,	// (0x00008748) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xec30,	// (0x0000ec30) aid_cmod_rocker_key_size_cp

0xec3a,	// (0x0000ec3a) aid_cmode_itu_key_size_cp

0x9513,	// (0x00009513) compa_mode_pane_g1

0x951b,	// (0x0000951b) compa_mode_pane_g2

0x9523,	// (0x00009523) compa_mode_pane_g3

0x0002,

0xb02b,	// (0x0000b02b) compa_mode_pane_g

0xec44,	// (0x0000ec44) main_comp_mode_itu_pane_cp

0xec4c,	// (0x0000ec4c) main_comp_mode_rocker_pane_cp

0xec54,	// (0x0000ec54) cell_cmode_itu_pane_cp_ParamLimits

0xec54,	// (0x0000ec54) cell_cmode_itu_pane_cp

0xec69,	// (0x0000ec69) cell_cmode_rocker_pane_cp_ParamLimits

0xec69,	// (0x0000ec69) cell_cmode_rocker_pane_cp

0x13db,	// (0x000013db) bg_button_pane_cp06_cp_ParamLimits

0x13db,	// (0x000013db) bg_button_pane_cp06_cp

0x69db,	// (0x000069db) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x69db,	// (0x000069db) cell_cmode_rocker_pane_g1_cp

0x6527,	// (0x00006527) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xec7b,	// (0x0000ec7b) cell_cmode_itu_pane_g1_cp

0xec84,	// (0x0000ec84) cell_cmode_itu_pane_t1_cp

0xec84,	// (0x0000ec84) cell_cmode_itu_pane_t2_cp

0xd32a,	// (0x0000d32a) settings_code_pane_cp2

0x050f,	// (0x0000050f) bg_popup_window_pane_cp3_ParamLimits

0x0a31,	// (0x00000a31) heading_pane_cp3_ParamLimits

0x0a3d,	// (0x00000a3d) listscroll_popup_graphic_pane_ParamLimits

0x65a5,	// (0x000065a5) fep_hwr_aid_pane_ParamLimits

0x840f,	// (0x0000840f) aid_touch_sctrl_top_ParamLimits

0x841c,	// (0x0000841c) sctrl_sk_top_pane_g1_ParamLimits

0x69db,	// (0x000069db) sctrl_sk_top_pane_g2_ParamLimits

0xaf66,	// (0x0000af66) sctrl_sk_top_pane_g_ParamLimits

0x8429,	// (0x00008429) sctrl_sk_top_pane_t1_ParamLimits

0x840f,	// (0x0000840f) aid_touch_sctrl_bottom_ParamLimits

0x8429,	// (0x00008429) sctrl_sk_bottom_pane_t1_ParamLimits

0x8686,	// (0x00008686) aid_area_touch_clock

0xe780,	// (0x0000e780) aid_vkb2_area_top_pane_cell_ParamLimits

0xe780,	// (0x0000e780) aid_vkb2_area_top_pane_cell

0xe82b,	// (0x0000e82b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe82b,	// (0x0000e82b) aid_vkb2_area_bottom_pane_cell

0x8fba,	// (0x00008fba) popup_char_count_window

0x9579,	// (0x00009579) popup_char_count_window_g1

0x9582,	// (0x00009582) popup_char_count_window_g2

0x958b,	// (0x0000958b) popup_char_count_window_g3

0x0002,

0xb032,	// (0x0000b032) popup_char_count_window_g

0x9594,	// (0x00009594) popup_char_count_window_t1

0x8c27,	// (0x00008c27) popup_fep_char_preview_window_ParamLimits

0x8c27,	// (0x00008c27) popup_fep_char_preview_window

0xe7a0,	// (0x0000e7a0) vkb2_top_candi_pane_ParamLimits

0xe7a0,	// (0x0000e7a0) vkb2_top_candi_pane

0xec92,	// (0x0000ec92) cell_vkb2_top_candi_pane_ParamLimits

0xec92,	// (0x0000ec92) cell_vkb2_top_candi_pane

0x3f5b,	// (0x00003f5b) bg_popup_fep_char_preview_window_ParamLimits

0x3f5b,	// (0x00003f5b) bg_popup_fep_char_preview_window

0x95f3,	// (0x000095f3) popup_fep_char_preview_window_t1_ParamLimits

0x95f3,	// (0x000095f3) popup_fep_char_preview_window_t1

0x962d,	// (0x0000962d) bg_popup_fep_char_preview_window_g1

0x9635,	// (0x00009635) bg_popup_fep_char_preview_window_g2

0x963d,	// (0x0000963d) bg_popup_fep_char_preview_window_g3

0x9645,	// (0x00009645) bg_popup_fep_char_preview_window_g4

0x964d,	// (0x0000964d) bg_popup_fep_char_preview_window_g5

0x9655,	// (0x00009655) bg_popup_fep_char_preview_window_g6

0x965d,	// (0x0000965d) bg_popup_fep_char_preview_window_g7

0x9665,	// (0x00009665) bg_popup_fep_char_preview_window_g8

0x966d,	// (0x0000966d) bg_popup_fep_char_preview_window_g9

0x0008,

0xb039,	// (0x0000b039) bg_popup_fep_char_preview_window_g

0x69db,	// (0x000069db) cell_vkb2_top_candi_pane_g1_ParamLimits

0x69db,	// (0x000069db) cell_vkb2_top_candi_pane_g1

0x6d70,	// (0x00006d70) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6d70,	// (0x00006d70) cell_vkb2_top_candi_pane_g2

0x6d91,	// (0x00006d91) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6d91,	// (0x00006d91) cell_vkb2_top_candi_pane_g3

0x9675,	// (0x00009675) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9675,	// (0x00009675) cell_vkb2_top_candi_pane_g4

0x9696,	// (0x00009696) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9696,	// (0x00009696) cell_vkb2_top_candi_pane_g5

0x8512,	// (0x00008512) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8512,	// (0x00008512) cell_vkb2_top_candi_pane_g6

0x0005,

0xb04c,	// (0x0000b04c) cell_vkb2_top_candi_pane_g_ParamLimits

0xb04c,	// (0x0000b04c) cell_vkb2_top_candi_pane_g

0x96b7,	// (0x000096b7) cell_vkb2_top_candi_pane_t1

0x4e98,	// (0x00004e98) aid_size_touch_slider_mark_ParamLimits

0x4e98,	// (0x00004e98) aid_size_touch_slider_mark

0xea1d,	// (0x0000ea1d) grid_graphic2_catg_pane_ParamLimits

0xea1d,	// (0x0000ea1d) grid_graphic2_catg_pane

0xeab3,	// (0x0000eab3) popup_grid_graphic2_window_t1_ParamLimits

0xeab3,	// (0x0000eab3) popup_grid_graphic2_window_t1

0xeac9,	// (0x0000eac9) popup_grid_graphic2_window_t2_ParamLimits

0xeac9,	// (0x0000eac9) popup_grid_graphic2_window_t2

0x0001,

0xf711,	// (0x0000f711) popup_grid_graphic2_window_t_ParamLimits

0xf711,	// (0x0000f711) popup_grid_graphic2_window_t

0x13db,	// (0x000013db) bg_button_pane_cp05_ParamLimits

0xec23,	// (0x0000ec23) cell_graphic2_control_pane_g1_ParamLimits

0xece6,	// (0x0000ece6) cell_graphic2_catg_pane_ParamLimits

0xece6,	// (0x0000ece6) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xecf8,	// (0x0000ecf8) cell_graphic2_catg_pane_g1

0x8652,	// (0x00008652) cell_tb_ext_pane_t1_ParamLimits

0x9016,	// (0x00009016) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9016,	// (0x00009016) vkb2_top_cell_right_narrow_pane

0x902e,	// (0x0000902e) vkb2_top_cell_right_wide_pane_ParamLimits

0x902e,	// (0x0000902e) vkb2_top_cell_right_wide_pane

0x6597,	// (0x00006597) bg_vkb2_func_pane_ParamLimits

0x6597,	// (0x00006597) bg_vkb2_func_pane

0x909f,	// (0x0000909f) vkb2_top_cell_left_pane_g1_ParamLimits

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp03

0x912a,	// (0x0000912a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3790,	// (0x00003790) bg_vkb2_func_pane_g1

0x3798,	// (0x00003798) bg_vkb2_func_pane_g2

0x37a8,	// (0x000037a8) bg_vkb2_func_pane_g3

0x37a0,	// (0x000037a0) bg_vkb2_func_pane_g4

0x37b0,	// (0x000037b0) bg_vkb2_func_pane_g5

0x37b8,	// (0x000037b8) bg_vkb2_func_pane_g6

0x37c0,	// (0x000037c0) bg_vkb2_func_pane_g7

0x37c8,	// (0x000037c8) bg_vkb2_func_pane_g8

0x3788,	// (0x00003788) bg_vkb2_func_pane_g9

0x0008,

0xb059,	// (0x0000b059) bg_vkb2_func_pane_g

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp01

0x909f,	// (0x0000909f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x909f,	// (0x0000909f) vkb2_top_cell_right_wide_pane_g1

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6597,	// (0x00006597) bg_vkb2_fuc_pane_cp02

0x912a,	// (0x0000912a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x912a,	// (0x0000912a) vkb2_top_cell_right_narrow_pane_g1

0xdedf,	// (0x0000dedf) aid_touch_area_decrease_ParamLimits

0xdedf,	// (0x0000dedf) aid_touch_area_decrease

0xdf19,	// (0x0000df19) aid_touch_area_increase_ParamLimits

0xdf19,	// (0x0000df19) aid_touch_area_increase

0xdf41,	// (0x0000df41) aid_touch_area_mute_ParamLimits

0xdf41,	// (0x0000df41) aid_touch_area_mute

0xdf71,	// (0x0000df71) aid_touch_area_slider_ParamLimits

0xdf71,	// (0x0000df71) aid_touch_area_slider

0xdfb1,	// (0x0000dfb1) popup_slider_window_g4_ParamLimits

0xdfb1,	// (0x0000dfb1) popup_slider_window_g4

0xdfd9,	// (0x0000dfd9) popup_slider_window_g5_ParamLimits

0xdfd9,	// (0x0000dfd9) popup_slider_window_g5

0xe00d,	// (0x0000e00d) popup_slider_window_g6_ParamLimits

0xe00d,	// (0x0000e00d) popup_slider_window_g6

0x834d,	// (0x0000834d) popup_slider_window_t2_ParamLimits

0x834d,	// (0x0000834d) popup_slider_window_t2

0x0001,

0xaf5a,	// (0x0000af5a) popup_slider_window_t_ParamLimits

0xaf5a,	// (0x0000af5a) popup_slider_window_t

0xe029,	// (0x0000e029) slider_pane_ParamLimits

0xe029,	// (0x0000e029) slider_pane

0x96f0,	// (0x000096f0) slider_pane_g1_ParamLimits

0x96f0,	// (0x000096f0) slider_pane_g1

0x9704,	// (0x00009704) slider_pane_g2_ParamLimits

0x9704,	// (0x00009704) slider_pane_g2

0x971a,	// (0x0000971a) slider_pane_g3_ParamLimits

0x971a,	// (0x0000971a) slider_pane_g3

0x0003,

0xb06c,	// (0x0000b06c) slider_pane_g_ParamLimits

0xb06c,	// (0x0000b06c) slider_pane_g

0xc857,	// (0x0000c857) popup_tb_float_extension_window_ParamLimits

0xc857,	// (0x0000c857) popup_tb_float_extension_window

0x9746,	// (0x00009746) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9752,	// (0x00009752) grid_tb_float_ext_pane

0x975e,	// (0x0000975e) cell_tb_float_ext_pane_ParamLimits

0x975e,	// (0x0000975e) cell_tb_float_ext_pane

0x977a,	// (0x0000977a) cell_tb_float_ext_pane_g1

0x9783,	// (0x00009783) grid_highlight_pane_cp12

0xd761,	// (0x0000d761) cell_last_hwr_side_pane_ParamLimits

0xd761,	// (0x0000d761) cell_last_hwr_side_pane

0x6527,	// (0x00006527) cell_last_hwr_side_pane_g1

0x978c,	// (0x0000978c) cell_last_hwr_side_pane_g2

0x0001,

0xb075,	// (0x0000b075) cell_last_hwr_side_pane_g

0xe907,	// (0x0000e907) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe907,	// (0x0000e907) vkb2_area_bottom_space_btn_pane

0x69db,	// (0x000069db) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9211,	// (0x00009211) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x96b7,	// (0x000096b7) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9795,	// (0x00009795) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9795,	// (0x00009795) vkb2_area_bottom_space_btn_pane_g1

0x97cf,	// (0x000097cf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x97cf,	// (0x000097cf) vkb2_area_bottom_space_btn_pane_g2

0x9805,	// (0x00009805) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9805,	// (0x00009805) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb07a,	// (0x0000b07a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb07a,	// (0x0000b07a) vkb2_area_bottom_space_btn_pane_g

0x665c,	// (0x0000665c) cel_fep_hwr_func_pane_ParamLimits

0x665c,	// (0x0000665c) cel_fep_hwr_func_pane

0xd736,	// (0x0000d736) cell_hwr_side_button_pane_ParamLimits

0xd736,	// (0x0000d736) cell_hwr_side_button_pane

0x8686,	// (0x00008686) aid_area_touch_clock_ParamLimits

0x0843,	// (0x00000843) bg_uniindi_top_pane_ParamLimits

0x869a,	// (0x0000869a) uniindi_top_pane_g1_ParamLimits

0x86b0,	// (0x000086b0) uniindi_top_pane_g2_ParamLimits

0x86bc,	// (0x000086bc) uniindi_top_pane_g3_ParamLimits

0x86cd,	// (0x000086cd) uniindi_top_pane_g4_ParamLimits

0xaf92,	// (0x0000af92) uniindi_top_pane_g_ParamLimits

0x86da,	// (0x000086da) uniindi_top_pane_t1_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp01_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp01

0x984f,	// (0x0000984f) cel_fep_hwr_func_pane_g1_ParamLimits

0x984f,	// (0x0000984f) cel_fep_hwr_func_pane_g1

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp02_ParamLimits

0x0843,	// (0x00000843) bg_vkb2_func_pane_cp02

0x984f,	// (0x0000984f) cell_hwr_side_button_pane_g1_ParamLimits

0x984f,	// (0x0000984f) cell_hwr_side_button_pane_g1

0x3563,	// (0x00003563) status_pane_g4_ParamLimits

0x3563,	// (0x00003563) status_pane_g4

0x357d,	// (0x0000357d) status_pane_t1

0x62c3,	// (0x000062c3) form2_midp_gauge_slider_cont_pane

0x62cb,	// (0x000062cb) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd667,	// (0x0000d667) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd679,	// (0x0000d679) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf65d,	// (0x0000f65d) form2_midp_gauge_slider_pane_t_ParamLimits

0x6301,	// (0x00006301) form2_midp_slider_pane_ParamLimits

0x8bef,	// (0x00008bef) aid_size_cell_func_vkb2_ParamLimits

0x8bef,	// (0x00008bef) aid_size_cell_func_vkb2

0x9732,	// (0x00009732) slider_pane_g4_ParamLimits

0x9732,	// (0x00009732) slider_pane_g4

0xed01,	// (0x0000ed01) form2_midp_gauge_slider_pane_t2_cp01

0xed0f,	// (0x0000ed0f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xed0f,	// (0x0000ed0f) form2_midp_gauge_slider_pane_t3_cp01

0x9888,	// (0x00009888) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x98bc,	// (0x000098bc) navi_smil_pane_g1

0x98c4,	// (0x000098c4) navi_smil_pane_t1

0x9891,	// (0x00009891) form2_midp_slider_pane_g1

0x989a,	// (0x0000989a) form2_midp_slider_pane_g2

0x98a2,	// (0x000098a2) form2_midp_slider_pane_g3

0x9891,	// (0x00009891) form2_midp_slider_pane_g4

0xed2c,	// (0x0000ed2c) form2_midp_slider_pane_g5

0x0004,

0xf726,	// (0x0000f726) form2_midp_slider_pane_g

0x983f,	// (0x0000983f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x983f,	// (0x0000983f) vkb2_area_bottom_space_btn_pane_g4

0xca37,	// (0x0000ca37) lc0_navi_pane_ParamLimits

0xca37,	// (0x0000ca37) lc0_navi_pane

0xcaa7,	// (0x0000caa7) lc0_stat_indi_pane_ParamLimits

0xcaa7,	// (0x0000caa7) lc0_stat_indi_pane

0xcabc,	// (0x0000cabc) ls0_title_pane_ParamLimits

0xcabc,	// (0x0000cabc) ls0_title_pane

0x13db,	// (0x000013db) bg_popup_sub_pane_cp14_ParamLimits

0x866d,	// (0x0000866d) list_uniindi_pane_ParamLimits

0x8679,	// (0x00008679) uniindi_top_pane_ParamLimits

0x8718,	// (0x00008718) list_single_uniindi_pane_g1_ParamLimits

0x872b,	// (0x0000872b) list_single_uniindi_pane_t1_ParamLimits

0xed35,	// (0x0000ed35) lc0_stat_clock_pane_ParamLimits

0xed35,	// (0x0000ed35) lc0_stat_clock_pane

0xed42,	// (0x0000ed42) lc0_stat_indi_pane_g1_ParamLimits

0xed42,	// (0x0000ed42) lc0_stat_indi_pane_g1

0xed4f,	// (0x0000ed4f) lc0_stat_indi_pane_g2_ParamLimits

0xed4f,	// (0x0000ed4f) lc0_stat_indi_pane_g2

0x0001,

0xf731,	// (0x0000f731) lc0_stat_indi_pane_g_ParamLimits

0xf731,	// (0x0000f731) lc0_stat_indi_pane_g

0xed5c,	// (0x0000ed5c) lc0_uni_indicator_pane_ParamLimits

0xed5c,	// (0x0000ed5c) lc0_uni_indicator_pane

0xed69,	// (0x0000ed69) ls0_title_pane_g1_ParamLimits

0xed69,	// (0x0000ed69) ls0_title_pane_g1

0xed7d,	// (0x0000ed7d) ls0_title_pane_t1_ParamLimits

0xed7d,	// (0x0000ed7d) ls0_title_pane_t1

0xedab,	// (0x0000edab) lc0_uni_indicator_pane_g1_ParamLimits

0xedab,	// (0x0000edab) lc0_uni_indicator_pane_g1

0x9963,	// (0x00009963) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9971,	// (0x00009971) ai5_sk_pane_ParamLimits

0x9971,	// (0x00009971) ai5_sk_pane

0xedca,	// (0x0000edca) cell_ai5_widget_pane_ParamLimits

0xedca,	// (0x0000edca) cell_ai5_widget_pane

0x99f4,	// (0x000099f4) aid_size_cell_widget_grid

0x9a08,	// (0x00009a08) bg_ai5_widget_pane_ParamLimits

0x9a08,	// (0x00009a08) bg_ai5_widget_pane

0xee57,	// (0x0000ee57) cell_ai5_widget_pane_g2

0xee67,	// (0x0000ee67) cell_ai5_widget_pane_g3

0xee7b,	// (0x0000ee7b) cell_ai5_widget_pane_g4

0xee87,	// (0x0000ee87) cell_ai5_widget_pane_g5

0xee93,	// (0x0000ee93) cell_ai5_widget_pane_g6

0xee9f,	// (0x0000ee9f) cell_ai5_widget_pane_g7

0xeee7,	// (0x0000eee7) cell_ai5_widget_pane_t1_ParamLimits

0xeee7,	// (0x0000eee7) cell_ai5_widget_pane_t1

0xef04,	// (0x0000ef04) cell_ai5_widget_pane_t2_ParamLimits

0xef04,	// (0x0000ef04) cell_ai5_widget_pane_t2

0xef1c,	// (0x0000ef1c) cell_ai5_widget_pane_t3_ParamLimits

0xef1c,	// (0x0000ef1c) cell_ai5_widget_pane_t3

0xef34,	// (0x0000ef34) cell_ai5_widget_pane_t4_ParamLimits

0xef34,	// (0x0000ef34) cell_ai5_widget_pane_t4

0xef4e,	// (0x0000ef4e) cell_ai5_widget_pane_t5_ParamLimits

0xef4e,	// (0x0000ef4e) cell_ai5_widget_pane_t5

0x9b48,	// (0x00009b48) cell_ai5_widget_pane_t6_ParamLimits

0x9b48,	// (0x00009b48) cell_ai5_widget_pane_t6

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_t7_ParamLimits

0x9b5a,	// (0x00009b5a) cell_ai5_widget_pane_t7

0xef6d,	// (0x0000ef6d) cell_ai5_widget_pane_t8_ParamLimits

0xef6d,	// (0x0000ef6d) cell_ai5_widget_pane_t8

0x0009,

0xf74b,	// (0x0000f74b) cell_ai5_widget_pane_t_ParamLimits

0xf74b,	// (0x0000f74b) cell_ai5_widget_pane_t

0xefb5,	// (0x0000efb5) grid_ai5_widget_pane

0x13db,	// (0x000013db) highlight_cell_ai5_widget_pane_ParamLimits

0x13db,	// (0x000013db) highlight_cell_ai5_widget_pane

0xefcc,	// (0x0000efcc) ai5_sk_left_pane

0xefd6,	// (0x0000efd6) ai5_sk_middle_pane

0xefe0,	// (0x0000efe0) ai5_sk_right_pane

0x9bf0,	// (0x00009bf0) bg_ai5_widget_pane_g1_ParamLimits

0x9bf0,	// (0x00009bf0) bg_ai5_widget_pane_g1

0x9bfc,	// (0x00009bfc) bg_ai5_widget_pane_g2_ParamLimits

0x9bfc,	// (0x00009bfc) bg_ai5_widget_pane_g2

0x9c08,	// (0x00009c08) bg_ai5_widget_pane_g3_ParamLimits

0x9c08,	// (0x00009c08) bg_ai5_widget_pane_g3

0x9c14,	// (0x00009c14) bg_ai5_widget_pane_g4_ParamLimits

0x9c14,	// (0x00009c14) bg_ai5_widget_pane_g4

0x9c20,	// (0x00009c20) bg_ai5_widget_pane_g5_ParamLimits

0x9c20,	// (0x00009c20) bg_ai5_widget_pane_g5

0x9c2c,	// (0x00009c2c) bg_ai5_widget_pane_g6_ParamLimits

0x9c2c,	// (0x00009c2c) bg_ai5_widget_pane_g6

0x9c38,	// (0x00009c38) bg_ai5_widget_pane_g7_ParamLimits

0x9c38,	// (0x00009c38) bg_ai5_widget_pane_g7

0x9c44,	// (0x00009c44) bg_ai5_widget_pane_g8_ParamLimits

0x9c44,	// (0x00009c44) bg_ai5_widget_pane_g8

0x9c50,	// (0x00009c50) bg_ai5_widget_pane_g9_ParamLimits

0x9c50,	// (0x00009c50) bg_ai5_widget_pane_g9

0x0008,

0xb0bd,	// (0x0000b0bd) bg_ai5_widget_pane_g_ParamLimits

0xb0bd,	// (0x0000b0bd) bg_ai5_widget_pane_g

0x9c77,	// (0x00009c77) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c77,	// (0x00009c77) cell_shortcut_ai5_widget_pane

0x0685,	// (0x00000685) bg_cell_shortcut_ai5_widget_pane

0x9c89,	// (0x00009c89) cell_grid_ai5_widget_pane_g1

0x9c92,	// (0x00009c92) highlight_cell_shortcut_ai5_widget_pane

0x3798,	// (0x00003798) ai5_sk_left_pane_g1

0x9c9a,	// (0x00009c9a) ai5_sk_left_pane_g2

0x9ca2,	// (0x00009ca2) ai5_sk_left_pane_g3

0x9caa,	// (0x00009caa) ai5_sk_left_pane_g4

0x0003,

0xb0d0,	// (0x0000b0d0) ai5_sk_left_pane_g

0x9cb2,	// (0x00009cb2) ai5_sk_left_pane_t1

0x3790,	// (0x00003790) ai5_sk_right_pane_g1

0x9cc0,	// (0x00009cc0) ai5_sk_right_pane_g2

0x9cc8,	// (0x00009cc8) ai5_sk_right_pane_g3

0x9cd0,	// (0x00009cd0) ai5_sk_right_pane_g4

0x0003,

0xb0d9,	// (0x0000b0d9) ai5_sk_right_pane_g

0x9cd8,	// (0x00009cd8) ai5_sk_right_pane_t1

0x3790,	// (0x00003790) ai5_sk_middle_pane_g1

0x3798,	// (0x00003798) ai5_sk_middle_pane_g2

0x37b0,	// (0x000037b0) ai5_sk_middle_pane_g3

0x9cc8,	// (0x00009cc8) ai5_sk_middle_pane_g4

0x9ca2,	// (0x00009ca2) ai5_sk_middle_pane_g5

0x9ce6,	// (0x00009ce6) ai5_sk_middle_pane_g6

0xefea,	// (0x0000efea) ai5_sk_middle_pane_g7

0x0006,

0xf760,	// (0x0000f760) ai5_sk_middle_pane_g

0xc921,	// (0x0000c921) aid_touch_area_size_lc0_ParamLimits

0xc921,	// (0x0000c921) aid_touch_area_size_lc0

0x6db2,	// (0x00006db2) cell_hwr_candidate_pane_t1_ParamLimits

0x321b,	// (0x0000321b) aid_touch_navi_pane

0xcbc6,	// (0x0000cbc6) status_dt_navi_pane_ParamLimits

0xcbc6,	// (0x0000cbc6) status_dt_navi_pane

0xcbde,	// (0x0000cbde) status_dt_sta_pane_ParamLimits

0xcbde,	// (0x0000cbde) status_dt_sta_pane

0xeff2,	// (0x0000eff2) dt_sta_controll_pane

0xefff,	// (0x0000efff) dt_sta_indi_pane

0xf00c,	// (0x0000f00c) dt_sta_title_pane

0x0843,	// (0x00000843) bg_dt_sta_indi_pane_ParamLimits

0x0843,	// (0x00000843) bg_dt_sta_indi_pane

0xf01e,	// (0x0000f01e) dt_sta_battery_pane

0xf026,	// (0x0000f026) dt_sta_indi_pane_g1

0xf02f,	// (0x0000f02f) dt_sta_indi_pane_g2

0xf038,	// (0x0000f038) dt_sta_indi_pane_g3

0x0002,

0xf76f,	// (0x0000f76f) dt_sta_indi_pane_g

0xf041,	// (0x0000f041) dt_sta_signal_pane

0x13db,	// (0x000013db) bg_dt_sta_title_pane_ParamLimits

0x13db,	// (0x000013db) bg_dt_sta_title_pane

0xf04a,	// (0x0000f04a) dt_sta_title_pane_g1

0xf052,	// (0x0000f052) dt_sta_title_pane_t1_ParamLimits

0xf052,	// (0x0000f052) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xf067,	// (0x0000f067) dt_sta_controll_pane_g1

0xf070,	// (0x0000f070) bg_dt_sta_title_pane_g1

0xf079,	// (0x0000f079) bg_dt_sta_title_pane_g2

0xf082,	// (0x0000f082) bg_dt_sta_title_pane_g3

0x0002,

0xf776,	// (0x0000f776) bg_dt_sta_title_pane_g

0x6527,	// (0x00006527) bg_dt_sta_indi_pane_g1

0x9d94,	// (0x00009d94) dt_sta_signal_pane_g1

0x9d9c,	// (0x00009d9c) dt_sta_signal_pane_g2

0x0001,

0xb0ff,	// (0x0000b0ff) dt_sta_signal_pane_g

0x9da4,	// (0x00009da4) dt_sta_battery_pane_g1

0x9dad,	// (0x00009dad) dt_sta_battery_pane_t1

0x6527,	// (0x00006527) bg_dt_sta_control_pane_g1

0x1f3c,	// (0x00001f3c) fep_china_uni_eep_pane

0x1f44,	// (0x00001f44) fep_china_uni_entry_pane_ParamLimits

0x1f54,	// (0x00001f54) popup_fep_china_uni_window_g1_ParamLimits

0x1f64,	// (0x00001f64) popup_fep_china_uni_window_g2_ParamLimits

0x1f64,	// (0x00001f64) popup_fep_china_uni_window_g2

0x0001,

0xa9aa,	// (0x0000a9aa) popup_fep_china_uni_window_g_ParamLimits

0xa9aa,	// (0x0000a9aa) popup_fep_china_uni_window_g

0x9dbc,	// (0x00009dbc) fep_china_uni_eep_pane_g1

0x9dc4,	// (0x00009dc4) fep_china_uni_eep_pane_t1

0x98b3,	// (0x000098b3) aid_touch_area_size_smil_player

0x3373,	// (0x00003373) lc0_clock_pane

0x3571,	// (0x00003571) status_pane_g5_ParamLimits

0x3571,	// (0x00003571) status_pane_g5

0xc381,	// (0x0000c381) popup_keymap_window

0x352f,	// (0x0000352f) status_icon_pane

0xee67,	// (0x0000ee67) cell_ai5_widget_pane_g3_ParamLimits

0xee7b,	// (0x0000ee7b) cell_ai5_widget_pane_g4_ParamLimits

0xee87,	// (0x0000ee87) cell_ai5_widget_pane_g5_ParamLimits

0xeeab,	// (0x0000eeab) cell_ai5_widget_pane_g8_ParamLimits

0xeeab,	// (0x0000eeab) cell_ai5_widget_pane_g8

0xeebf,	// (0x0000eebf) cell_ai5_widget_pane_g9_ParamLimits

0xeebf,	// (0x0000eebf) cell_ai5_widget_pane_g9

0xeed3,	// (0x0000eed3) cell_ai5_widget_pane_g10_ParamLimits

0xeed3,	// (0x0000eed3) cell_ai5_widget_pane_g10

0x9dd3,	// (0x00009dd3) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9ddb,	// (0x00009ddb) popup_keymap_window_t1

0xc074,	// (0x0000c074) control_pane_g6_ParamLimits

0xc074,	// (0x0000c074) control_pane_g6

0xc081,	// (0x0000c081) control_pane_g7_ParamLimits

0xc081,	// (0x0000c081) control_pane_g7

0xc08e,	// (0x0000c08e) control_pane_g8_ParamLimits

0xc08e,	// (0x0000c08e) control_pane_g8

0xeff2,	// (0x0000eff2) dt_sta_controll_pane_ParamLimits

0xefff,	// (0x0000efff) dt_sta_indi_pane_ParamLimits

0xf00c,	// (0x0000f00c) dt_sta_title_pane_ParamLimits

0x0d78,	// (0x00000d78) aid_size_touch_scroll_bar_cale

0x02b5,	// (0x000002b5) popup_discreet_window_ParamLimits

0x02b5,	// (0x000002b5) popup_discreet_window

0xb2a0,	// (0x0000b2a0) popup_sk_window

0x3f5b,	// (0x00003f5b) bg_popup_sub_pane_cp28_ParamLimits

0x3f5b,	// (0x00003f5b) bg_popup_sub_pane_cp28

0x9de9,	// (0x00009de9) popup_discreet_window_g1_ParamLimits

0x9de9,	// (0x00009de9) popup_discreet_window_g1

0x9e09,	// (0x00009e09) popup_discreet_window_t1_ParamLimits

0x9e09,	// (0x00009e09) popup_discreet_window_t1

0x9e27,	// (0x00009e27) popup_discreet_window_t2_ParamLimits

0x9e27,	// (0x00009e27) popup_discreet_window_t2

0x0002,

0xb104,	// (0x0000b104) popup_discreet_window_t_ParamLimits

0xb104,	// (0x0000b104) popup_discreet_window_t

0x9e79,	// (0x00009e79) popup_sk_window_g1

0x9e83,	// (0x00009e83) popup_sk_window_g2

0x0001,

0xb10b,	// (0x0000b10b) popup_sk_window_g

0x9e8d,	// (0x00009e8d) popup_sk_window_t1

0x9e9b,	// (0x00009e9b) popup_sk_window_t1_copy1

0xee57,	// (0x0000ee57) cell_ai5_widget_pane_g2_ParamLimits

0xef7f,	// (0x0000ef7f) cell_ai5_widget_pane_t9_ParamLimits

0xef7f,	// (0x0000ef7f) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xf08b,	// (0x0000f08b) aid_fshwr2_btn_pane

0xf093,	// (0x0000f093) aid_fshwr2_syb_pane

0xf09b,	// (0x0000f09b) aid_fshwr2_txt_pane

0xf0a3,	// (0x0000f0a3) fshwr2_func_candi_pane

0xf0ad,	// (0x0000f0ad) fshwr2_hwr_syb_pane

0xf0b9,	// (0x0000f0b9) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xf0c3,	// (0x0000f0c3) fshwr2_icf_pane_t1_ParamLimits

0xf0c3,	// (0x0000f0c3) fshwr2_icf_pane_t1

0x6527,	// (0x00006527) fshwr2_func_candi_pane_g1

0x9f0e,	// (0x00009f0e) fshwr2_func_candi_row_pane_ParamLimits

0x9f0e,	// (0x00009f0e) fshwr2_func_candi_row_pane

0xf0db,	// (0x0000f0db) cell_fshwr2_syb_pane_ParamLimits

0xf0db,	// (0x0000f0db) cell_fshwr2_syb_pane

0x69db,	// (0x000069db) fshwr2_hwr_syb_pane_g1_ParamLimits

0x69db,	// (0x000069db) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9f39,	// (0x00009f39) fshwr2_func_candi_cell_pane_ParamLimits

0x9f39,	// (0x00009f39) fshwr2_func_candi_cell_pane

0x9f6b,	// (0x00009f6b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f6b,	// (0x00009f6b) fshwr2_func_candi_cell_bg_pane

0x9f85,	// (0x00009f85) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f85,	// (0x00009f85) fshwr2_func_candi_cell_pane_g1

0x9fa5,	// (0x00009fa5) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9fa5,	// (0x00009fa5) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x260e,	// (0x0000260e) cell_fshwr2_syb_bg_pane

0xf0f4,	// (0x0000f0f4) cell_fshwr2_syb_bg_pane_g1

0xf0fc,	// (0x0000f0fc) cell_fshwr2_syb_bg_pane_t1

0x13db,	// (0x000013db) main_tmo_pane

0xd0ee,	// (0x0000d0ee) uni_indicator_pane_g1_ParamLimits

0xd103,	// (0x0000d103) uni_indicator_pane_g2_ParamLimits

0xd118,	// (0x0000d118) uni_indicator_pane_g3_ParamLimits

0xd12e,	// (0x0000d12e) uni_indicator_pane_g4_ParamLimits

0xd12e,	// (0x0000d12e) uni_indicator_pane_g4

0xd142,	// (0x0000d142) uni_indicator_pane_g5_ParamLimits

0xd142,	// (0x0000d142) uni_indicator_pane_g5

0xd156,	// (0x0000d156) uni_indicator_pane_g6_ParamLimits

0xd156,	// (0x0000d156) uni_indicator_pane_g6

0xf609,	// (0x0000f609) uni_indicator_pane_g_ParamLimits

0xdeaf,	// (0x0000deaf) popup_tmo_note_window_ParamLimits

0xdeaf,	// (0x0000deaf) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f96,	// (0x00009f96) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f96,	// (0x00009f96) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb110,	// (0x0000b110) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb110,	// (0x0000b110) fshwr2_func_candi_cell_pane_g

0x6527,	// (0x00006527) bg_popup_window_pane_cp01

0x9fcf,	// (0x00009fcf) bg_popup_window_pane_g1_cp01

0x9fd8,	// (0x00009fd8) bg_popup_window_pane_cp22_ParamLimits

0x9fd8,	// (0x00009fd8) bg_popup_window_pane_cp22

0x9fe6,	// (0x00009fe6) listscroll_tmo_link_pane_ParamLimits

0x9fe6,	// (0x00009fe6) listscroll_tmo_link_pane

0xa026,	// (0x0000a026) popup_tmo_note_window_g1_ParamLimits

0xa026,	// (0x0000a026) popup_tmo_note_window_g1

0xa033,	// (0x0000a033) tmo_note_info_pane_ParamLimits

0xa033,	// (0x0000a033) tmo_note_info_pane

0xf10b,	// (0x0000f10b) list_tmo_note_info_pane_g1_ParamLimits

0xf10b,	// (0x0000f10b) list_tmo_note_info_pane_g1

0xa064,	// (0x0000a064) list_tmo_note_info_pane_g2_ParamLimits

0xa064,	// (0x0000a064) list_tmo_note_info_pane_g2

0x0001,

0xf77d,	// (0x0000f77d) list_tmo_note_info_pane_g_ParamLimits

0xf77d,	// (0x0000f77d) list_tmo_note_info_pane_g

0xa080,	// (0x0000a080) list_tmo_note_info_text_pane_ParamLimits

0xa080,	// (0x0000a080) list_tmo_note_info_text_pane

0xa105,	// (0x0000a105) list_tmo_link_pane

0xa112,	// (0x0000a112) scroll_pane_cp20

0xa11f,	// (0x0000a11f) list_single_tmo_link_pane_ParamLimits

0xa11f,	// (0x0000a11f) list_single_tmo_link_pane

0xa12f,	// (0x0000a12f) list_single_tmo_link_pane_t1

0xa13d,	// (0x0000a13d) list_tmo_note_info_text_pane_t1_ParamLimits

0xa13d,	// (0x0000a13d) list_tmo_note_info_text_pane_t1

0xbc25,	// (0x0000bc25) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbc25,	// (0x0000bc25) aid_size_touch_scroll_bar_cp01

0xbb54,	// (0x0000bb54) aid_size_touch_slider_marker

0xb290,	// (0x0000b290) popup_settings_window_ParamLimits

0xb290,	// (0x0000b290) popup_settings_window

0x2bc6,	// (0x00002bc6) popup_candi_list_indi_window

0x321b,	// (0x0000321b) aid_touch_navi_pane_ParamLimits

0x83e3,	// (0x000083e3) rs_clock_indi_pane

0x83ec,	// (0x000083ec) sctrl_sk_bottom_pane_ParamLimits

0x83fd,	// (0x000083fd) sctrl_sk_top_pane_ParamLimits

0x8c41,	// (0x00008c41) popup_fep_tooltip_window

0x99f4,	// (0x000099f4) aid_size_cell_widget_grid_ParamLimits

0xee4b,	// (0x0000ee4b) cell_ai5_widget_pane_g1_ParamLimits

0xee4b,	// (0x0000ee4b) cell_ai5_widget_pane_g1

0xee93,	// (0x0000ee93) cell_ai5_widget_pane_g6_ParamLimits

0xee9f,	// (0x0000ee9f) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf736,	// (0x0000f736) cell_ai5_widget_pane_g_ParamLimits

0xf736,	// (0x0000f736) cell_ai5_widget_pane_g

0xefa3,	// (0x0000efa3) cell_ai5_widget_pane_t10_ParamLimits

0xefa3,	// (0x0000efa3) cell_ai5_widget_pane_t10

0xefb5,	// (0x0000efb5) grid_ai5_widget_pane_ParamLimits

0x9c5c,	// (0x00009c5c) cell_contacts_ai5_widget_pane_ParamLimits

0x9c5c,	// (0x00009c5c) cell_contacts_ai5_widget_pane

0x9e3c,	// (0x00009e3c) popup_discreet_window_t3_ParamLimits

0x9e3c,	// (0x00009e3c) popup_discreet_window_t3

0x9edf,	// (0x00009edf) popup_fshwr2_char_preview_window_ParamLimits

0x9edf,	// (0x00009edf) popup_fshwr2_char_preview_window

0xf122,	// (0x0000f122) tmo_note_info_pane_t1

0xf137,	// (0x0000f137) tmo_note_info_pane_t2

0xf150,	// (0x0000f150) tmo_note_info_pane_t3

0xa0e1,	// (0x0000a0e1) tmo_note_info_pane_t4

0xa0f3,	// (0x0000a0f3) tmo_note_info_pane_t5

0x0004,

0xf782,	// (0x0000f782) tmo_note_info_pane_t

0xa105,	// (0x0000a105) list_tmo_link_pane_ParamLimits

0xa112,	// (0x0000a112) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa156,	// (0x0000a156) popup_fshwr2_char_preview_window_t1

0xa164,	// (0x0000a164) popup_candi_list_indi_window_g1

0xa16d,	// (0x0000a16d) bg_cell_contacts_ai5_widget_pane

0xa179,	// (0x0000a179) cell_contacts_ai5_widget_pane_g1

0xa18d,	// (0x0000a18d) cell_contacts_ai5_widget_pane_g2

0xa19c,	// (0x0000a19c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb125,	// (0x0000b125) cell_contacts_ai5_widget_pane_g

0xa1af,	// (0x0000a1af) cell_contacts_ai5_widget_pane_t1

0x13db,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf1ca,	// (0x0000f1ca) settings_container_pane

0x260e,	// (0x0000260e) listscroll_set_pane_copy1

0x5a25,	// (0x00005a25) scroll_pane_cp121_copy1

0xa235,	// (0x0000a235) set_content_pane_copy1

0xf1d6,	// (0x0000f1d6) aid_height_set_list_copy1_ParamLimits

0xf1d6,	// (0x0000f1d6) aid_height_set_list_copy1

0x4f5e,	// (0x00004f5e) aid_size_parent_copy1_ParamLimits

0x4f5e,	// (0x00004f5e) aid_size_parent_copy1

0xf1e2,	// (0x0000f1e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf1e2,	// (0x0000f1e2) button_value_adjust_pane_cp6_copy1

0x2b9e,	// (0x00002b9e) list_highlight_pane_cp2_copy1_ParamLimits

0x2b9e,	// (0x00002b9e) list_highlight_pane_cp2_copy1

0xf1f6,	// (0x0000f1f6) list_set_pane_copy1_ParamLimits

0xf1f6,	// (0x0000f1f6) list_set_pane_copy1

0xf165,	// (0x0000f165) main_pane_set_t1_copy1_ParamLimits

0xf165,	// (0x0000f165) main_pane_set_t1_copy1

0xf19f,	// (0x0000f19f) main_pane_set_t2_copy1_ParamLimits

0xf19f,	// (0x0000f19f) main_pane_set_t2_copy1

0xf2bd,	// (0x0000f2bd) main_pane_set_t3_copy1

0xf2cb,	// (0x0000f2cb) main_pane_set_t4_copy1

0xf1be,	// (0x0000f1be) set_content_pane_g1_copy1_ParamLimits

0xf1be,	// (0x0000f1be) set_content_pane_g1_copy1

0xf2d9,	// (0x0000f2d9) setting_code_pane_copy1

0xa34a,	// (0x0000a34a) setting_slider_graphic_pane_copy1

0xa34a,	// (0x0000a34a) setting_slider_pane_copy1

0xa354,	// (0x0000a354) setting_text_pane_copy1

0xa35e,	// (0x0000a35e) setting_volume_pane_copy1

0xf2e3,	// (0x0000f2e3) settings_code_pane_cp2_copy1

0xf2eb,	// (0x0000f2eb) settings_code_pane_cp_copy1_ParamLimits

0xf2eb,	// (0x0000f2eb) settings_code_pane_cp_copy1

0xf2ff,	// (0x0000f2ff) volume_set_pane_copy1

0xf30b,	// (0x0000f30b) volume_set_pane_g10_copy1

0xf317,	// (0x0000f317) volume_set_pane_g1_copy1

0xf321,	// (0x0000f321) volume_set_pane_g2_copy1

0xf32b,	// (0x0000f32b) volume_set_pane_g3_copy1

0xf335,	// (0x0000f335) volume_set_pane_g4_copy1

0xf33f,	// (0x0000f33f) volume_set_pane_g5_copy1

0xf349,	// (0x0000f349) volume_set_pane_g6_copy1

0xf353,	// (0x0000f353) volume_set_pane_g7_copy1

0xf35d,	// (0x0000f35d) volume_set_pane_g8_copy1

0xf367,	// (0x0000f367) volume_set_pane_g9_copy1

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_copy1_ParamLimits

0x050f,	// (0x0000050f) bg_set_opt_pane_cp_copy1

0xa3f5,	// (0x0000a3f5) setting_slider_pane_t1_copy1_ParamLimits

0xa3f5,	// (0x0000a3f5) setting_slider_pane_t1_copy1

0xf371,	// (0x0000f371) setting_slider_pane_t2_copy1_ParamLimits

0xf371,	// (0x0000f371) setting_slider_pane_t2_copy1

0xf38b,	// (0x0000f38b) setting_slider_pane_t3_copy1_ParamLimits

0xf38b,	// (0x0000f38b) setting_slider_pane_t3_copy1

0xf3a3,	// (0x0000f3a3) slider_set_pane_copy1_ParamLimits

0xf3a3,	// (0x0000f3a3) slider_set_pane_copy1

0x1517,	// (0x00001517) set_opt_bg_pane_g1_copy2

0x151f,	// (0x0000151f) set_opt_bg_pane_g2_copy2

0xa45b,	// (0x0000a45b) set_opt_bg_pane_g3_copy2

0x152f,	// (0x0000152f) set_opt_bg_pane_g4_copy2

0x1537,	// (0x00001537) set_opt_bg_pane_g5_copy2

0x153f,	// (0x0000153f) set_opt_bg_pane_g6_copy2

0xf3b9,	// (0x0000f3b9) set_opt_bg_pane_g7_copy2

0xa46f,	// (0x0000a46f) set_opt_bg_pane_g8_copy2

0xa479,	// (0x0000a479) set_opt_bg_pane_g9_copy2

0xa483,	// (0x0000a483) aid_size_touch_slider_mark_copy1_ParamLimits

0xa483,	// (0x0000a483) aid_size_touch_slider_mark_copy1

0xa497,	// (0x0000a497) slider_set_pane_g1_copy1

0xa4a0,	// (0x0000a4a0) slider_set_pane_g2_copy1

0x4ec5,	// (0x00004ec5) slider_set_pane_g3_copy1_ParamLimits

0x4ec5,	// (0x00004ec5) slider_set_pane_g3_copy1

0x4ed9,	// (0x00004ed9) slider_set_pane_g4_copy1_ParamLimits

0x4ed9,	// (0x00004ed9) slider_set_pane_g4_copy1

0x4ef1,	// (0x00004ef1) slider_set_pane_g5_copy1_ParamLimits

0x4ef1,	// (0x00004ef1) slider_set_pane_g5_copy1

0x4ec5,	// (0x00004ec5) slider_set_pane_g6_copy1_ParamLimits

0x4ec5,	// (0x00004ec5) slider_set_pane_g6_copy1

0xf3c3,	// (0x0000f3c3) slider_set_pane_g7_copy1_ParamLimits

0xf3c3,	// (0x0000f3c3) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa4be,	// (0x0000a4be) setting_slider_graphic_pane_g1_copy1

0xf3d9,	// (0x0000f3d9) setting_slider_graphic_pane_t1_copy1

0xf3e9,	// (0x0000f3e9) setting_slider_graphic_pane_t2_copy1

0xf3f9,	// (0x0000f3f9) slider_set_pane_cp_copy1

0xa4f7,	// (0x0000a4f7) input_focus_pane_cp1_copy1

0xa500,	// (0x0000a500) list_set_text_pane_copy1

0xa508,	// (0x0000a508) setting_text_pane_g1_copy1

0x05f8,	// (0x000005f8) set_text_pane_t1_copy1

0xa4f7,	// (0x0000a4f7) input_focus_pane_cp2_copy1

0xa508,	// (0x0000a508) setting_code_pane_g1_copy1

0xf401,	// (0x0000f401) setting_code_pane_t1_copy1

0xf40f,	// (0x0000f40f) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbf3e,	// (0x0000bf3e) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf3e,	// (0x0000bf3e) list_set_graphic_pane_g1_copy1

0xf421,	// (0x0000f421) list_set_graphic_pane_g2_copy1

0xbf56,	// (0x0000bf56) list_set_graphic_pane_t1_copy1_ParamLimits

0xbf56,	// (0x0000bf56) list_set_graphic_pane_t1_copy1

0x6527,	// (0x00006527) rs_clock_indi_pane_g1

0xa539,	// (0x0000a539) rs_clock_indi_pane_t1

0xa547,	// (0x0000a547) rs_indi_pane

0xa54f,	// (0x0000a54f) rs_indi_pane_g1

0xa558,	// (0x0000a558) rs_indi_pane_g2

0xa561,	// (0x0000a561) rs_indi_pane_g3

0x0002,

0xb12c,	// (0x0000b12c) rs_indi_pane_g

0x260e,	// (0x0000260e) bg_popup_preview_window_pane_cp03

0xa56a,	// (0x0000a56a) popup_fep_tooltip_window_t1

0x77a9,	// (0x000077a9) popup_note2_window_g2_ParamLimits

0x77a9,	// (0x000077a9) popup_note2_window_g2

0x0001,

0xaeca,	// (0x0000aeca) popup_note2_window_g_ParamLimits

0xaeca,	// (0x0000aeca) popup_note2_window_g

0x7db8,	// (0x00007db8) bg_popup_sub_pane_cp11_ParamLimits

0x7dc5,	// (0x00007dc5) cell_ai3_links_pane_g1_ParamLimits

0x7ddc,	// (0x00007ddc) cell_ai3_links_pane_t1

0x05f8,	// (0x000005f8) set_text_pane_t1_copy1_ParamLimits

0x251b,	// (0x0000251b) cell_graphic_popup_pane_cp2_ParamLimits

0x251b,	// (0x0000251b) cell_graphic_popup_pane_cp2

0xa578,	// (0x0000a578) cell_graphic_popup_pane_g1_cp2

0x0b8b,	// (0x00000b8b) cell_graphic_popup_pane_g2_cp2

0xa580,	// (0x0000a580) cell_graphic_popup_pane_g3_cp2

0xa588,	// (0x0000a588) cell_graphic_popup_pane_t2_cp2

0x0b9c,	// (0x00000b9c) grid_highlight_pane_cp3_cp2

0x1a7e,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x13db,	// (0x000013db) main_tmo_pane_ParamLimits

0xdea3,	// (0x0000dea3) popup_tmo_big_image_note_window

0xee3b,	// (0x0000ee3b) cell_ai5_widget_list_pane

0xee43,	// (0x0000ee43) cell_ai5_widget_lrg_icon_pane

0xf122,	// (0x0000f122) tmo_note_info_pane_t1_ParamLimits

0xf137,	// (0x0000f137) tmo_note_info_pane_t2_ParamLimits

0xf150,	// (0x0000f150) tmo_note_info_pane_t3_ParamLimits

0xa0e1,	// (0x0000a0e1) tmo_note_info_pane_t4_ParamLimits

0xa0f3,	// (0x0000a0f3) tmo_note_info_pane_t5_ParamLimits

0xf782,	// (0x0000f782) tmo_note_info_pane_t_ParamLimits

0xf1ca,	// (0x0000f1ca) settings_container_pane_ParamLimits

0xa4ef,	// (0x0000a4ef) indicator_popup_pane_cp5

0xa4ef,	// (0x0000a4ef) indicator_popup_pane_cp6

0xf40f,	// (0x0000f40f) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa596,	// (0x0000a596) popup_tmo_big_image_note_window_g1

0xa5a2,	// (0x0000a5a2) popup_tmo_big_image_note_window_t1

0xa5b2,	// (0x0000a5b2) popup_tmo_big_image_note_window_t2

0xa5c2,	// (0x0000a5c2) popup_tmo_big_image_note_window_t3

0x0002,

0xb133,	// (0x0000b133) popup_tmo_big_image_note_window_t

0xf429,	// (0x0000f429) cell_ai5_widget_lrg_icon_pane_g1

0xf431,	// (0x0000f431) cell_ai5_widget_lrg_icon_pane_t1

0xf43f,	// (0x0000f43f) cell_ai5_widget_list_row_pane_ParamLimits

0xf43f,	// (0x0000f43f) cell_ai5_widget_list_row_pane

0xf458,	// (0x0000f458) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf458,	// (0x0000f458) cell_ai5_widget_list_row_pane_g1

0xf465,	// (0x0000f465) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf465,	// (0x0000f465) cell_ai5_widget_list_row_pane_t1

0xf47d,	// (0x0000f47d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf47d,	// (0x0000f47d) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf78d,	// (0x0000f78d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf78d,	// (0x0000f78d) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa638,	// (0x0000a638) popup_fep_char_pre_window

0xa640,	// (0x0000a640) popup_fep_ituss_window

0xa64b,	// (0x0000a64b) popup_fep_vkbss_window

0xa656,	// (0x0000a656) grid_vkbss_keypad_pane_ParamLimits

0xa656,	// (0x0000a656) grid_vkbss_keypad_pane

0xa666,	// (0x0000a666) ituss_keypad_pane

0xa66e,	// (0x0000a66e) aid_vkbss_key_offset_ParamLimits

0xa66e,	// (0x0000a66e) aid_vkbss_key_offset

0xa67d,	// (0x0000a67d) cell_vkbss_key_pane_ParamLimits

0xa67d,	// (0x0000a67d) cell_vkbss_key_pane

0xa693,	// (0x0000a693) bg_cell_vkbss_key_g1_ParamLimits

0xa693,	// (0x0000a693) bg_cell_vkbss_key_g1

0xa69f,	// (0x0000a69f) cell_vkbss_key_3p_pane_ParamLimits

0xa69f,	// (0x0000a69f) cell_vkbss_key_3p_pane

0xa6b9,	// (0x0000a6b9) cell_vkbss_key_g1_ParamLimits

0xa6b9,	// (0x0000a6b9) cell_vkbss_key_g1

0xa6d3,	// (0x0000a6d3) cell_vkbss_key_t1_ParamLimits

0xa6d3,	// (0x0000a6d3) cell_vkbss_key_t1

0xa6fe,	// (0x0000a6fe) cell_ituss_key_pane_ParamLimits

0xa6fe,	// (0x0000a6fe) cell_ituss_key_pane

0xa70d,	// (0x0000a70d) bg_cell_ituss_key_g1_ParamLimits

0xa70d,	// (0x0000a70d) bg_cell_ituss_key_g1

0xa719,	// (0x0000a719) cell_ituss_key_pane_g1_ParamLimits

0xa719,	// (0x0000a719) cell_ituss_key_pane_g1

0xa725,	// (0x0000a725) cell_ituss_key_pane_g2_ParamLimits

0xa725,	// (0x0000a725) cell_ituss_key_pane_g2

0x0001,

0xb13f,	// (0x0000b13f) cell_ituss_key_pane_g_ParamLimits

0xb13f,	// (0x0000b13f) cell_ituss_key_pane_g

0xa739,	// (0x0000a739) cell_ituss_key_t1_ParamLimits

0xa739,	// (0x0000a739) cell_ituss_key_t1

0xa757,	// (0x0000a757) cell_ituss_key_t2_ParamLimits

0xa757,	// (0x0000a757) cell_ituss_key_t2

0xa776,	// (0x0000a776) cell_ituss_key_t3_ParamLimits

0xa776,	// (0x0000a776) cell_ituss_key_t3

0xa795,	// (0x0000a795) cell_ituss_key_t4_ParamLimits

0xa795,	// (0x0000a795) cell_ituss_key_t4

0x0003,

0xb144,	// (0x0000b144) cell_ituss_key_t_ParamLimits

0xb144,	// (0x0000b144) cell_ituss_key_t

0xa7b4,	// (0x0000a7b4) cell_vkbss_key_3p_pane_g1

0xa7bc,	// (0x0000a7bc) cell_vkbss_key_3p_pane_g2

0xa7c4,	// (0x0000a7c4) cell_vkbss_key_3p_pane_g3

0x0002,

0xb14d,	// (0x0000b14d) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa7cc,	// (0x0000a7cc) popup_fep_char_pre_window_t1

0xee31,	// (0x0000ee31) main_ai5_sk_pane

0xa16d,	// (0x0000a16d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa179,	// (0x0000a179) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa18d,	// (0x0000a18d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa19c,	// (0x0000a19c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb125,	// (0x0000b125) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa1af,	// (0x0000a1af) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x13db,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48f,	// (0x0000f48f) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
