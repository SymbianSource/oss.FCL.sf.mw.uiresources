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
0xb21d,	// (0x0000b21d) Screen

0xb229,	// (0x0000b229) application_window_ParamLimits

0xb229,	// (0x0000b229) application_window

0x002e,	// (0x0000002e) screen_g1

0xb261,	// (0x0000b261) area_bottom_pane_ParamLimits

0xb261,	// (0x0000b261) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc93e,	// (0x0000c93e) battery_pane_ParamLimits

0xc93e,	// (0x0000c93e) battery_pane

0x4077,	// (0x00004077) bg_status_flat_pane_g8

0x407f,	// (0x0000407f) bg_status_flat_pane_g9

0x3210,	// (0x00003210) context_pane_ParamLimits

0x3210,	// (0x00003210) context_pane

0xcaa9,	// (0x0000caa9) navi_pane_ParamLimits

0xcaa9,	// (0x0000caa9) navi_pane

0xcb20,	// (0x0000cb20) signal_pane_ParamLimits

0xcb20,	// (0x0000cb20) signal_pane

0x0008,

0xab9e,	// (0x0000ab9e) bg_status_flat_pane_g

0xcbb0,	// (0x0000cbb0) status_pane_g1_ParamLimits

0xcbb0,	// (0x0000cbb0) status_pane_g1

0xcbc6,	// (0x0000cbc6) status_pane_g2_ParamLimits

0xcbc6,	// (0x0000cbc6) status_pane_g2

0x3430,	// (0x00003430) status_pane_g3_ParamLimits

0x3430,	// (0x00003430) status_pane_g3

0x0004,

0xf4af,	// (0x0000f4af) status_pane_g_ParamLimits

0xf4af,	// (0x0000f4af) status_pane_g

0xcbd2,	// (0x0000cbd2) title_pane_ParamLimits

0xcbd2,	// (0x0000cbd2) title_pane

0xcc33,	// (0x0000cc33) uni_indicator_pane_ParamLimits

0xcc33,	// (0x0000cc33) uni_indicator_pane

0x2abb,	// (0x00002abb) bg_list_pane_ParamLimits

0x2abb,	// (0x00002abb) bg_list_pane

0xc21a,	// (0x0000c21a) find_pane

0xc222,	// (0x0000c222) listscroll_app_pane_ParamLimits

0xc222,	// (0x0000c222) listscroll_app_pane

0x2aef,	// (0x00002aef) listscroll_form_pane

0xc22e,	// (0x0000c22e) listscroll_gen_pane_ParamLimits

0xc22e,	// (0x0000c22e) listscroll_gen_pane

0x2aef,	// (0x00002aef) listscroll_set_pane

0x4e68,	// (0x00004e68) main_idle_act_pane

0x25a4,	// (0x000025a4) main_idle_trad_pane

0x25a4,	// (0x000025a4) main_list_empty_pane

0x2b1d,	// (0x00002b1d) main_midp_pane

0x2b29,	// (0x00002b29) main_pane_g1_ParamLimits

0x2b29,	// (0x00002b29) main_pane_g1

0xc242,	// (0x0000c242) popup_ai_message_window_ParamLimits

0xc242,	// (0x0000c242) popup_ai_message_window

0xc2d3,	// (0x0000c2d3) popup_fep_china_uni_window_ParamLimits

0xc2d3,	// (0x0000c2d3) popup_fep_china_uni_window

0x2c3d,	// (0x00002c3d) popup_fep_japan_candidate_window_ParamLimits

0x2c3d,	// (0x00002c3d) popup_fep_japan_candidate_window

0x2c5d,	// (0x00002c5d) popup_fep_japan_predictive_window_ParamLimits

0x2c5d,	// (0x00002c5d) popup_fep_japan_predictive_window

0xc32f,	// (0x0000c32f) popup_find_window

0xc34c,	// (0x0000c34c) popup_grid_graphic_window_ParamLimits

0xc34c,	// (0x0000c34c) popup_grid_graphic_window

0x2cc2,	// (0x00002cc2) popup_large_graphic_colour_window

0xc3e4,	// (0x0000c3e4) popup_menu_window_ParamLimits

0xc3e4,	// (0x0000c3e4) popup_menu_window

0xc59e,	// (0x0000c59e) popup_note_image_window

0xc564,	// (0x0000c564) popup_note_wait_window_ParamLimits

0xc564,	// (0x0000c564) popup_note_wait_window

0xc5b6,	// (0x0000c5b6) popup_note_window_ParamLimits

0xc5b6,	// (0x0000c5b6) popup_note_window

0xc65c,	// (0x0000c65c) popup_query_code_window_ParamLimits

0xc65c,	// (0x0000c65c) popup_query_code_window

0x2f0a,	// (0x00002f0a) popup_query_data_code_window_ParamLimits

0x2f0a,	// (0x00002f0a) popup_query_data_code_window

0xc696,	// (0x0000c696) popup_query_data_window_ParamLimits

0xc696,	// (0x0000c696) popup_query_data_window

0xc70c,	// (0x0000c70c) popup_query_sat_info_window_ParamLimits

0xc70c,	// (0x0000c70c) popup_query_sat_info_window

0xc7a3,	// (0x0000c7a3) popup_snote_single_graphic_window_ParamLimits

0xc7a3,	// (0x0000c7a3) popup_snote_single_graphic_window

0xc7a3,	// (0x0000c7a3) popup_snote_single_text_window_ParamLimits

0xc7a3,	// (0x0000c7a3) popup_snote_single_text_window

0x2f91,	// (0x00002f91) popup_sub_window_general

0x30c1,	// (0x000030c1) popup_window_general_ParamLimits

0x30c1,	// (0x000030c1) popup_window_general

0x30d6,	// (0x000030d6) power_save_pane

0xc088,	// (0x0000c088) control_pane_g1_ParamLimits

0xc088,	// (0x0000c088) control_pane_g1

0xc0b1,	// (0x0000c0b1) control_pane_g2_ParamLimits

0xc0b1,	// (0x0000c0b1) control_pane_g2

0x2960,	// (0x00002960) control_pane_g3_ParamLimits

0x2960,	// (0x00002960) control_pane_g3

0x0007,

0xf497,	// (0x0000f497) control_pane_g_ParamLimits

0xf497,	// (0x0000f497) control_pane_g

0xc113,	// (0x0000c113) control_pane_t1_ParamLimits

0xc113,	// (0x0000c113) control_pane_t1

0xc171,	// (0x0000c171) control_pane_t2_ParamLimits

0xc171,	// (0x0000c171) control_pane_t2

0x0002,

0xf4a8,	// (0x0000f4a8) control_pane_t_ParamLimits

0xf4a8,	// (0x0000f4a8) control_pane_t

0x2837,	// (0x00002837) navi_navi_volume_pane_cp1

0x2840,	// (0x00002840) status_small_icon_pane

0x2848,	// (0x00002848) status_small_pane_g1_ParamLimits

0x2848,	// (0x00002848) status_small_pane_g1

0x287c,	// (0x0000287c) status_small_pane_g2_ParamLimits

0x287c,	// (0x0000287c) status_small_pane_g2

0x2888,	// (0x00002888) status_small_pane_g3_ParamLimits

0x2888,	// (0x00002888) status_small_pane_g3

0x2894,	// (0x00002894) status_small_pane_g4_ParamLimits

0x2894,	// (0x00002894) status_small_pane_g4

0x28a0,	// (0x000028a0) status_small_pane_g5_ParamLimits

0x28a0,	// (0x000028a0) status_small_pane_g5

0x28af,	// (0x000028af) status_small_pane_g6_ParamLimits

0x28af,	// (0x000028af) status_small_pane_g6

0x0007,

0xaaaa,	// (0x0000aaaa) status_small_pane_g_ParamLimits

0xaaaa,	// (0x0000aaaa) status_small_pane_g

0x28df,	// (0x000028df) status_small_pane_t1

0x2902,	// (0x00002902) status_small_wait_pane_ParamLimits

0x2902,	// (0x00002902) status_small_wait_pane

0xbe71,	// (0x0000be71) aid_levels_signal_ParamLimits

0xbe71,	// (0x0000be71) aid_levels_signal

0xbe89,	// (0x0000be89) signal_pane_g1_ParamLimits

0xbe89,	// (0x0000be89) signal_pane_g1

0xbea4,	// (0x0000bea4) signal_pane_g2_ParamLimits

0xbea4,	// (0x0000bea4) signal_pane_g2

0x0001,

0xf476,	// (0x0000f476) signal_pane_g_ParamLimits

0xf476,	// (0x0000f476) signal_pane_g

0x1e56,	// (0x00001e56) context_pane_g1

0xb3da,	// (0x0000b3da) title_pane_g1

0xb40f,	// (0x0000b40f) title_pane_t1

0x04c5,	// (0x000004c5) title_pane_t2

0x04eb,	// (0x000004eb) title_pane_t3

0x0002,

0xf3a3,	// (0x0000f3a3) title_pane_t

0xcc5b,	// (0x0000cc5b) aid_levels_battery_ParamLimits

0xcc5b,	// (0x0000cc5b) aid_levels_battery

0xcc77,	// (0x0000cc77) battery_pane_g1_ParamLimits

0xcc77,	// (0x0000cc77) battery_pane_g1

0xcc94,	// (0x0000cc94) battery_pane_g2_ParamLimits

0xcc94,	// (0x0000cc94) battery_pane_g2

0x0001,

0xf4ba,	// (0x0000f4ba) battery_pane_g_ParamLimits

0xf4ba,	// (0x0000f4ba) battery_pane_g

0xd06f,	// (0x0000d06f) uni_indicator_pane_g1

0xd084,	// (0x0000d084) uni_indicator_pane_g2

0xd099,	// (0x0000d099) uni_indicator_pane_g3

0x0005,

0xf506,	// (0x0000f506) uni_indicator_pane_g

0x2416,	// (0x00002416) navi_icon_pane_ParamLimits

0x2416,	// (0x00002416) navi_icon_pane

0x235f,	// (0x0000235f) navi_midp_pane

0x2432,	// (0x00002432) navi_navi_pane

0x243c,	// (0x0000243c) navi_text_pane_ParamLimits

0x243c,	// (0x0000243c) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09c5,	// (0x000009c5) status_small_wait_pane_g2

0x0001,

0xac41,	// (0x0000ac41) status_small_wait_pane_g

0x483c,	// (0x0000483c) navi_navi_icon_text_pane

0x4844,	// (0x00004844) navi_navi_pane_g1_ParamLimits

0x4844,	// (0x00004844) navi_navi_pane_g1

0x4856,	// (0x00004856) navi_navi_pane_g2_ParamLimits

0x4856,	// (0x00004856) navi_navi_pane_g2

0x0001,

0xac0f,	// (0x0000ac0f) navi_navi_pane_g_ParamLimits

0xac0f,	// (0x0000ac0f) navi_navi_pane_g

0x4868,	// (0x00004868) navi_navi_tabs_pane

0x4871,	// (0x00004871) navi_navi_text_pane

0x483c,	// (0x0000483c) navi_navi_volume_pane

0xd030,	// (0x0000d030) navi_text_pane_t1

0xd024,	// (0x0000d024) navi_icon_pane_g1

0x4759,	// (0x00004759) navi_navi_text_pane_t1

0xd013,	// (0x0000d013) navi_navi_volume_pane_g1

0xd01b,	// (0x0000d01b) volume_small_pane

0xcf6f,	// (0x0000cf6f) navi_navi_icon_text_pane_g1

0xcf77,	// (0x0000cf77) navi_navi_icon_text_pane_t1

0x2432,	// (0x00002432) navi_tabs_2_long_pane

0x2432,	// (0x00002432) navi_tabs_2_pane

0x2432,	// (0x00002432) navi_tabs_3_long_pane

0x2432,	// (0x00002432) navi_tabs_3_pane

0x2432,	// (0x00002432) navi_tabs_4_pane

0xcf4f,	// (0x0000cf4f) tabs_2_active_pane_ParamLimits

0xcf4f,	// (0x0000cf4f) tabs_2_active_pane

0xcf5f,	// (0x0000cf5f) tabs_2_passive_pane_ParamLimits

0xcf5f,	// (0x0000cf5f) tabs_2_passive_pane

0xcf1d,	// (0x0000cf1d) tabs_3_active_pane_ParamLimits

0xcf1d,	// (0x0000cf1d) tabs_3_active_pane

0xcf2d,	// (0x0000cf2d) tabs_3_passive_pane_ParamLimits

0xcf2d,	// (0x0000cf2d) tabs_3_passive_pane

0xcf3e,	// (0x0000cf3e) tabs_3_passive_pane_cp_ParamLimits

0xcf3e,	// (0x0000cf3e) tabs_3_passive_pane_cp

0xced9,	// (0x0000ced9) tabs_4_active_pane_ParamLimits

0xced9,	// (0x0000ced9) tabs_4_active_pane

0xceea,	// (0x0000ceea) tabs_4_passive_pane_ParamLimits

0xceea,	// (0x0000ceea) tabs_4_passive_pane

0xcefb,	// (0x0000cefb) tabs_4_passive_pane_cp_ParamLimits

0xcefb,	// (0x0000cefb) tabs_4_passive_pane_cp

0xcf0c,	// (0x0000cf0c) tabs_4_passive_pane_cp2_ParamLimits

0xcf0c,	// (0x0000cf0c) tabs_4_passive_pane_cp2

0xceb9,	// (0x0000ceb9) tabs_2_long_active_pane_ParamLimits

0xceb9,	// (0x0000ceb9) tabs_2_long_active_pane

0xcec9,	// (0x0000cec9) tabs_2_long_passive_pane_ParamLimits

0xcec9,	// (0x0000cec9) tabs_2_long_passive_pane

0xce86,	// (0x0000ce86) tabs_3_long_active_pane_ParamLimits

0xce86,	// (0x0000ce86) tabs_3_long_active_pane

0xce97,	// (0x0000ce97) tabs_3_long_passive_pane_ParamLimits

0xce97,	// (0x0000ce97) tabs_3_long_passive_pane

0xcea8,	// (0x0000cea8) tabs_3_long_passive_pane_cp_ParamLimits

0xcea8,	// (0x0000cea8) tabs_3_long_passive_pane_cp

0x44da,	// (0x000044da) volume_small_pane_g1

0xce35,	// (0x0000ce35) volume_small_pane_g2

0xce3e,	// (0x0000ce3e) volume_small_pane_g3

0xce47,	// (0x0000ce47) volume_small_pane_g4

0xce50,	// (0x0000ce50) volume_small_pane_g5

0xce59,	// (0x0000ce59) volume_small_pane_g6

0xce62,	// (0x0000ce62) volume_small_pane_g7

0xce6b,	// (0x0000ce6b) volume_small_pane_g8

0xce74,	// (0x0000ce74) volume_small_pane_g9

0xce7d,	// (0x0000ce7d) volume_small_pane_g10

0x0009,

0xf4dc,	// (0x0000f4dc) volume_small_pane_g

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2

0xb49b,	// (0x0000b49b) tabs_3_active_pane_g1

0xb4a3,	// (0x0000b4a3) tabs_3_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp2

0xb49b,	// (0x0000b49b) tabs_3_passive_pane_g1

0xb4a3,	// (0x0000b4a3) tabs_3_passive_pane_t1

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3

0xb4b5,	// (0x0000b4b5) tabs_4_active_pane_g1

0xb4bd,	// (0x0000b4bd) tabs_4_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp3

0xb4b5,	// (0x0000b4b5) tabs_4_1_passive_pane_g1

0xb4bd,	// (0x0000b4bd) tabs_4_1_passive_pane_t1

0x2b1d,	// (0x00002b1d) list_highlight_pane_cp2

0xd134,	// (0x0000d134) list_set_pane_ParamLimits

0xd134,	// (0x0000d134) list_set_pane

0xd1ce,	// (0x0000d1ce) main_pane_set_t1_ParamLimits

0xd1ce,	// (0x0000d1ce) main_pane_set_t1

0xd1ee,	// (0x0000d1ee) main_pane_set_t2_ParamLimits

0xd1ee,	// (0x0000d1ee) main_pane_set_t2

0xd202,	// (0x0000d202) main_pane_set_t3_ParamLimits

0xd202,	// (0x0000d202) main_pane_set_t3

0xd214,	// (0x0000d214) main_pane_set_t4_ParamLimits

0xd214,	// (0x0000d214) main_pane_set_t4

0x0003,

0xf518,	// (0x0000f518) main_pane_set_t_ParamLimits

0xf518,	// (0x0000f518) main_pane_set_t

0xd226,	// (0x0000d226) setting_code_pane

0xd230,	// (0x0000d230) setting_slider_graphic_pane

0xd230,	// (0x0000d230) setting_slider_pane

0xd230,	// (0x0000d230) setting_text_pane

0xd230,	// (0x0000d230) setting_volume_pane

0x053f,	// (0x0000053f) volume_set_pane

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp

0x0547,	// (0x00000547) setting_slider_pane_t1

0x0560,	// (0x00000560) setting_slider_pane_t2

0x057a,	// (0x0000057a) setting_slider_pane_t3

0x0002,

0xa89a,	// (0x0000a89a) setting_slider_pane_t

0x0592,	// (0x00000592) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05a8,	// (0x000005a8) setting_slider_graphic_pane_g1

0x05b1,	// (0x000005b1) setting_slider_graphic_pane_t1

0x05c1,	// (0x000005c1) setting_slider_graphic_pane_t2

0x0001,

0xa8a1,	// (0x0000a8a1) setting_slider_graphic_pane_t

0x05d1,	// (0x000005d1) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4e4f,	// (0x00004e4f) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05d9,	// (0x000005d9) setting_code_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_ParamLimits

0x05e7,	// (0x000005e7) set_text_pane_t1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2

0x4e29,	// (0x00004e29) set_opt_bg_pane_g3

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6

0x4e33,	// (0x00004e33) set_opt_bg_pane_g7

0x4e3b,	// (0x00004e3b) set_opt_bg_pane_g8

0x4e45,	// (0x00004e45) set_opt_bg_pane_g9

0x0008,

0xac98,	// (0x0000ac98) set_opt_bg_pane_g

0x4db8,	// (0x00004db8) slider_set_pane_g1

0x4dc5,	// (0x00004dc5) slider_set_pane_g2

0x0006,

0xac89,	// (0x0000ac89) slider_set_pane_g

0x4c38,	// (0x00004c38) volume_set_pane_g1

0x4c40,	// (0x00004c40) volume_set_pane_g2

0x4c48,	// (0x00004c48) volume_set_pane_g3

0x4c50,	// (0x00004c50) volume_set_pane_g4

0x4c58,	// (0x00004c58) volume_set_pane_g5

0x4c60,	// (0x00004c60) volume_set_pane_g6

0x4c68,	// (0x00004c68) volume_set_pane_g7

0x4c70,	// (0x00004c70) volume_set_pane_g8

0x4c78,	// (0x00004c78) volume_set_pane_g9

0x4c80,	// (0x00004c80) volume_set_pane_g10

0x0009,

0xac61,	// (0x0000ac61) volume_set_pane_g

0xb4cf,	// (0x0000b4cf) indicator_pane_ParamLimits

0xb4cf,	// (0x0000b4cf) indicator_pane

0xb4f7,	// (0x0000b4f7) main_idle_pane_g2_ParamLimits

0xb4f7,	// (0x0000b4f7) main_idle_pane_g2

0xb52f,	// (0x0000b52f) main_pane_idle_g1_ParamLimits

0xb52f,	// (0x0000b52f) main_pane_idle_g1

0x0642,	// (0x00000642) popup_clock_digital_analogue_window_ParamLimits

0x0642,	// (0x00000642) popup_clock_digital_analogue_window

0xb556,	// (0x0000b556) soft_indicator_pane_ParamLimits

0xb556,	// (0x0000b556) soft_indicator_pane

0xb570,	// (0x0000b570) wallpaper_pane_ParamLimits

0xb570,	// (0x0000b570) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb582,	// (0x0000b582) indicator_pane_g1_ParamLimits

0xb582,	// (0x0000b582) indicator_pane_g1

0x5391,	// (0x00005391) navi_navi_icon_text_pane_srt_g1

0x0694,	// (0x00000694) soft_indicator_pane_t1

0x06ae,	// (0x000006ae) aid_ps_area_pane

0xb598,	// (0x0000b598) aid_ps_clock_pane

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

0xa8a6,	// (0x0000a8a6) power_save_pane_g_ParamLimits

0xa8a6,	// (0x0000a8a6) power_save_pane_g

0x0702,	// (0x00000702) power_save_pane_t1_ParamLimits

0x0702,	// (0x00000702) power_save_pane_t1

0xb598,	// (0x0000b598) aid_ps_clock_pane_ParamLimits

0x06cd,	// (0x000006cd) aid_ps_indicator_pane_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4_ParamLimits

0x0714,	// (0x00000714) power_save_pane_t4

0x0001,

0xa8ab,	// (0x0000a8ab) power_save_pane_t_ParamLimits

0xa8ab,	// (0x0000a8ab) power_save_pane_t

0x073e,	// (0x0000073e) power_save_t3_ParamLimits

0x073e,	// (0x0000073e) power_save_t3

0x0729,	// (0x00000729) power_save_t2_ParamLimits

0x0729,	// (0x00000729) power_save_t2

0x0753,	// (0x00000753) indicator_ps_pane_g1

0xb5a6,	// (0x0000b5a6) ai_gene_pane_ParamLimits

0xb5a6,	// (0x0000b5a6) ai_gene_pane

0xb5bd,	// (0x0000b5bd) ai_links_pane_ParamLimits

0xb5bd,	// (0x0000b5bd) ai_links_pane

0xb5d5,	// (0x0000b5d5) indicator_pane_cp1_ParamLimits

0xb5d5,	// (0x0000b5d5) indicator_pane_cp1

0xb5e4,	// (0x0000b5e4) main_pane_idle_g1_cp_ParamLimits

0xb5e4,	// (0x0000b5e4) main_pane_idle_g1_cp

0x078c,	// (0x0000078c) popup_ai_links_title_window

0xb5fc,	// (0x0000b5fc) soft_indicator_pane_cp1_ParamLimits

0xb5fc,	// (0x0000b5fc) soft_indicator_pane_cp1

0x4b05,	// (0x00004b05) ai_links_pane_g1

0x4b0e,	// (0x00004b0e) grid_ai_links_pane

0xd066,	// (0x0000d066) ai_gene_pane_1

0x4af3,	// (0x00004af3) ai_gene_pane_2

0x4afc,	// (0x00004afc) list_highlight_pane_cp4

0xd042,	// (0x0000d042) cell_ai_link_pane_ParamLimits

0xd042,	// (0x0000d042) cell_ai_link_pane

0x4ac4,	// (0x00004ac4) cell_ai_link_pane_g1

0x09c5,	// (0x000009c5) cell_ai_link_pane_g2

0x0001,

0xac3c,	// (0x0000ac3c) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07af,	// (0x000007af) popup_ai_links_title_window_t1

0x4a12,	// (0x00004a12) ai_gene_pane_1_g1_ParamLimits

0x4a12,	// (0x00004a12) ai_gene_pane_1_g1

0x4a1e,	// (0x00004a1e) ai_gene_pane_1_g2_ParamLimits

0x4a1e,	// (0x00004a1e) ai_gene_pane_1_g2

0x0001,

0xac32,	// (0x0000ac32) ai_gene_pane_1_g_ParamLimits

0xac32,	// (0x0000ac32) ai_gene_pane_1_g

0x4a2b,	// (0x00004a2b) ai_gene_pane_1_t1_ParamLimits

0x4a2b,	// (0x00004a2b) ai_gene_pane_1_t1

0x4a5f,	// (0x00004a5f) grid_ai_soft_ind_pane

0x49fd,	// (0x000049fd) ai_gene_pane_2_t1_ParamLimits

0x49fd,	// (0x000049fd) ai_gene_pane_2_t1

0xb610,	// (0x0000b610) main_pane_empty_t1_ParamLimits

0xb610,	// (0x0000b610) main_pane_empty_t1

0xb628,	// (0x0000b628) main_pane_empty_t2_ParamLimits

0xb628,	// (0x0000b628) main_pane_empty_t2

0xb63d,	// (0x0000b63d) main_pane_empty_t3_ParamLimits

0xb63d,	// (0x0000b63d) main_pane_empty_t3

0xb64f,	// (0x0000b64f) main_pane_empty_t4_ParamLimits

0xb64f,	// (0x0000b64f) main_pane_empty_t4

0xb661,	// (0x0000b661) main_pane_empty_t5_ParamLimits

0xb661,	// (0x0000b661) main_pane_empty_t5

0x0004,

0xf3aa,	// (0x0000f3aa) main_pane_empty_t_ParamLimits

0xf3aa,	// (0x0000f3aa) main_pane_empty_t

0x15aa,	// (0x000015aa) bg_popup_window_pane_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_window_pane

0x4767,	// (0x00004767) find_popup_pane_cp2_ParamLimits

0x4767,	// (0x00004767) find_popup_pane_cp2

0x4773,	// (0x00004773) heading_pane_ParamLimits

0x4773,	// (0x00004773) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcf94,	// (0x0000cf94) bg_popup_window_pane_g1_ParamLimits

0xcf94,	// (0x0000cf94) bg_popup_window_pane_g1

0xcfa3,	// (0x0000cfa3) bg_popup_window_pane_g2_ParamLimits

0xcfa3,	// (0x0000cfa3) bg_popup_window_pane_g2

0xcfaf,	// (0x0000cfaf) bg_popup_window_pane_g3_ParamLimits

0xcfaf,	// (0x0000cfaf) bg_popup_window_pane_g3

0xcfbb,	// (0x0000cfbb) bg_popup_window_pane_g4_ParamLimits

0xcfbb,	// (0x0000cfbb) bg_popup_window_pane_g4

0xcfca,	// (0x0000cfca) bg_popup_window_pane_g5_ParamLimits

0xcfca,	// (0x0000cfca) bg_popup_window_pane_g5

0xcfda,	// (0x0000cfda) bg_popup_window_pane_g6_ParamLimits

0xcfda,	// (0x0000cfda) bg_popup_window_pane_g6

0xcfe6,	// (0x0000cfe6) bg_popup_window_pane_g7_ParamLimits

0xcfe6,	// (0x0000cfe6) bg_popup_window_pane_g7

0xcff5,	// (0x0000cff5) bg_popup_window_pane_g8_ParamLimits

0xcff5,	// (0x0000cff5) bg_popup_window_pane_g8

0xd004,	// (0x0000d004) bg_popup_window_pane_g9_ParamLimits

0xd004,	// (0x0000d004) bg_popup_window_pane_g9

0x473c,	// (0x0000473c) bg_popup_window_pane_g10_ParamLimits

0x473c,	// (0x0000473c) bg_popup_window_pane_g10

0x0009,

0xf4f1,	// (0x0000f4f1) bg_popup_window_pane_g_ParamLimits

0xf4f1,	// (0x0000f4f1) bg_popup_window_pane_g

0x4665,	// (0x00004665) bg_popup_heading_pane_ParamLimits

0x4665,	// (0x00004665) bg_popup_heading_pane

0x52d4,	// (0x000052d4) tabs_4_passive_pane_cp_srt_ParamLimits

0x52d4,	// (0x000052d4) tabs_4_passive_pane_cp_srt

0x52e6,	// (0x000052e6) tabs_4_passive_pane_srt_ParamLimits

0x4679,	// (0x00004679) heading_pane_g2

0x52e6,	// (0x000052e6) tabs_4_passive_pane_srt

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp3_srt

0x4681,	// (0x00004681) heading_pane_t1_ParamLimits

0x4681,	// (0x00004681) heading_pane_t1

0x4698,	// (0x00004698) heading_pane_t2_ParamLimits

0x4698,	// (0x00004698) heading_pane_t2

0x0001,

0xabf5,	// (0x0000abf5) heading_pane_t_ParamLimits

0xabf5,	// (0x0000abf5) heading_pane_t

0x403f,	// (0x0000403f) bg_popup_heading_pane_g1

0x40ee,	// (0x000040ee) bg_popup_heading_pane_g2

0x40f8,	// (0x000040f8) bg_popup_heading_pane_g3

0x4102,	// (0x00004102) bg_popup_heading_pane_g4

0x410c,	// (0x0000410c) bg_popup_heading_pane_g5

0x4116,	// (0x00004116) bg_popup_heading_pane_g6

0x411e,	// (0x0000411e) bg_popup_heading_pane_g7

0x4126,	// (0x00004126) bg_popup_heading_pane_g8

0x4130,	// (0x00004130) bg_popup_heading_pane_g9

0x0008,

0xabb1,	// (0x0000abb1) bg_popup_heading_pane_g

0x366d,	// (0x0000366d) bg_popup_sub_pane_g1

0x3675,	// (0x00003675) bg_popup_sub_pane_g2

0x367d,	// (0x0000367d) bg_popup_sub_pane_g3

0x3685,	// (0x00003685) bg_popup_sub_pane_g4

0x368d,	// (0x0000368d) bg_popup_sub_pane_g5

0x3695,	// (0x00003695) bg_popup_sub_pane_g6

0x369d,	// (0x0000369d) bg_popup_sub_pane_g7

0x36a5,	// (0x000036a5) bg_popup_sub_pane_g8

0x36ad,	// (0x000036ad) bg_popup_sub_pane_g9

0x0008,

0xab8b,	// (0x0000ab8b) bg_popup_sub_pane_g

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

0xa8bb,	// (0x0000a8bb) popup_note_window_t_ParamLimits

0xa8bb,	// (0x0000a8bb) popup_note_window_t

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_window_pane_cp6

0x3fbb,	// (0x00003fbb) popup_note_image_window_g1_ParamLimits

0x3fbb,	// (0x00003fbb) popup_note_image_window_g1

0x3fc7,	// (0x00003fc7) popup_note_image_window_g2_ParamLimits

0x3fc7,	// (0x00003fc7) popup_note_image_window_g2

0x0001,

0xab7f,	// (0x0000ab7f) popup_note_image_window_g_ParamLimits

0xab7f,	// (0x0000ab7f) popup_note_image_window_g

0x3fe0,	// (0x00003fe0) popup_note_image_window_t1_ParamLimits

0x3fe0,	// (0x00003fe0) popup_note_image_window_t1

0x3ff9,	// (0x00003ff9) popup_note_image_window_t2_ParamLimits

0x3ff9,	// (0x00003ff9) popup_note_image_window_t2

0x4012,	// (0x00004012) popup_note_image_window_t3_ParamLimits

0x4012,	// (0x00004012) popup_note_image_window_t3

0x0002,

0xab84,	// (0x0000ab84) popup_note_image_window_t_ParamLimits

0xab84,	// (0x0000ab84) popup_note_image_window_t

0x3e7c,	// (0x00003e7c) bg_popup_window_pane_cp7_ParamLimits

0x3e7c,	// (0x00003e7c) bg_popup_window_pane_cp7

0x3eac,	// (0x00003eac) popup_note_wait_window_g1_ParamLimits

0x3eac,	// (0x00003eac) popup_note_wait_window_g1

0x3eb8,	// (0x00003eb8) popup_note_wait_window_g2_ParamLimits

0x3eb8,	// (0x00003eb8) popup_note_wait_window_g2

0x0002,

0xab6d,	// (0x0000ab6d) popup_note_wait_window_g_ParamLimits

0xab6d,	// (0x0000ab6d) popup_note_wait_window_g

0x3ed0,	// (0x00003ed0) popup_note_wait_window_t1_ParamLimits

0x3ed0,	// (0x00003ed0) popup_note_wait_window_t1

0x3ef7,	// (0x00003ef7) popup_note_wait_window_t2_ParamLimits

0x3ef7,	// (0x00003ef7) popup_note_wait_window_t2

0x3f14,	// (0x00003f14) popup_note_wait_window_t3_ParamLimits

0x3f14,	// (0x00003f14) popup_note_wait_window_t3

0x3f27,	// (0x00003f27) popup_note_wait_window_t4_ParamLimits

0x3f27,	// (0x00003f27) popup_note_wait_window_t4

0x0004,

0xab74,	// (0x0000ab74) popup_note_wait_window_t_ParamLimits

0xab74,	// (0x0000ab74) popup_note_wait_window_t

0x3f4c,	// (0x00003f4c) wait_bar_pane_ParamLimits

0x3f4c,	// (0x00003f4c) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xaa3a,	// (0x0000aa3a) wait_anim_pane_g

0x3e20,	// (0x00003e20) wait_border_pane_g1

0x3e2b,	// (0x00003e2b) wait_border_pane_g2

0x3e34,	// (0x00003e34) wait_border_pane_g3

0x0002,

0xab66,	// (0x0000ab66) wait_border_pane_g

0x3c8b,	// (0x00003c8b) bg_popup_window_pane_cp16_ParamLimits

0x3c8b,	// (0x00003c8b) bg_popup_window_pane_cp16

0x3d8b,	// (0x00003d8b) indicator_popup_pane_cp4_ParamLimits

0x3d8b,	// (0x00003d8b) indicator_popup_pane_cp4

0x3d9f,	// (0x00003d9f) popup_query_data_window_t1_ParamLimits

0x3d9f,	// (0x00003d9f) popup_query_data_window_t1

0x3db1,	// (0x00003db1) popup_query_data_window_t2_ParamLimits

0x3db1,	// (0x00003db1) popup_query_data_window_t2

0x3dca,	// (0x00003dca) popup_query_data_window_t3_ParamLimits

0x3dca,	// (0x00003dca) popup_query_data_window_t3

0x0002,

0xab5f,	// (0x0000ab5f) popup_query_data_window_t_ParamLimits

0xab5f,	// (0x0000ab5f) popup_query_data_window_t

0x3de4,	// (0x00003de4) query_popup_data_pane_ParamLimits

0x3de4,	// (0x00003de4) query_popup_data_pane

0x3df8,	// (0x00003df8) query_popup_data_pane_cp1_ParamLimits

0x3df8,	// (0x00003df8) query_popup_data_pane_cp1

0x3c8b,	// (0x00003c8b) bg_popup_window_pane_cp10_ParamLimits

0x3c8b,	// (0x00003c8b) bg_popup_window_pane_cp10

0x3cbd,	// (0x00003cbd) indicator_popup_pane_ParamLimits

0x3cbd,	// (0x00003cbd) indicator_popup_pane

0x3cdf,	// (0x00003cdf) popup_query_code_window_t1_ParamLimits

0x3cdf,	// (0x00003cdf) popup_query_code_window_t1

0x3cf9,	// (0x00003cf9) popup_query_code_window_t2_ParamLimits

0x3cf9,	// (0x00003cf9) popup_query_code_window_t2

0x3d42,	// (0x00003d42) popup_query_code_window_t3_ParamLimits

0x3d42,	// (0x00003d42) popup_query_code_window_t3

0x0002,

0xab58,	// (0x0000ab58) popup_query_code_window_t_ParamLimits

0xab58,	// (0x0000ab58) popup_query_code_window_t

0x3d71,	// (0x00003d71) query_popup_pane_ParamLimits

0x3d71,	// (0x00003d71) query_popup_pane

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

0xa8c6,	// (0x0000a8c6) popup_query_data_code_window_t_ParamLimits

0xa8c6,	// (0x0000a8c6) popup_query_data_code_window_t

0x36da,	// (0x000036da) list_single_midp_graphic_pane_g3

0x0982,	// (0x00000982) query_popup_data_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2_ParamLimits

0x0995,	// (0x00000995) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c83,	// (0x00003c83) heading_pane_cp5

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

0xa8cf,	// (0x0000a8cf) popup_info_list_pane_t_ParamLimits

0xa8cf,	// (0x0000a8cf) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x53c8,	// (0x000053c8) find_popup_pane

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3

0x0a0b,	// (0x00000a0b) heading_pane_cp3

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb6c3,	// (0x0000b6c3) heading_pane_cp4

0x0a7d,	// (0x00000a7d) listscroll_popup_colour_pane

0xb6cb,	// (0x0000b6cb) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb6cb,	// (0x0000b6cb) cell_large_graphic_colour_none_popup_pane

0xb6df,	// (0x0000b6df) grid_large_graphic_colour_popup_pane_ParamLimits

0xb6df,	// (0x0000b6df) grid_large_graphic_colour_popup_pane

0xb703,	// (0x0000b703) listscroll_popup_colour_pane_g1_ParamLimits

0xb703,	// (0x0000b703) listscroll_popup_colour_pane_g1

0xb71a,	// (0x0000b71a) listscroll_popup_colour_pane_g2_ParamLimits

0xb71a,	// (0x0000b71a) listscroll_popup_colour_pane_g2

0xb731,	// (0x0000b731) listscroll_popup_colour_pane_g3_ParamLimits

0xb731,	// (0x0000b731) listscroll_popup_colour_pane_g3

0xb741,	// (0x0000b741) listscroll_popup_colour_pane_g4_ParamLimits

0xb741,	// (0x0000b741) listscroll_popup_colour_pane_g4

0x0003,

0xf3b5,	// (0x0000f3b5) listscroll_popup_colour_pane_g_ParamLimits

0xf3b5,	// (0x0000f3b5) listscroll_popup_colour_pane_g

0x0b17,	// (0x00000b17) scroll_pane_cp6_ParamLimits

0x0b17,	// (0x00000b17) scroll_pane_cp6

0xb751,	// (0x0000b751) cell_large_graphic_colour_popup_pane_ParamLimits

0xb751,	// (0x0000b751) cell_large_graphic_colour_popup_pane

0x0b48,	// (0x00000b48) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b57,	// (0x00000b57) cell_large_graphic_colour_popup_pane_g1

0x0b5f,	// (0x00000b5f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa8dd,	// (0x0000a8dd) cell_large_graphic_colour_popup_pane_g

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

0xa8e2,	// (0x0000a8e2) popup_snote_single_text_window_t_ParamLimits

0xa8e2,	// (0x0000a8e2) popup_snote_single_text_window_t

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9_ParamLimits

0x0c67,	// (0x00000c67) bg_popup_window_pane_cp9

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1_ParamLimits

0x0b93,	// (0x00000b93) popup_snote_single_graphic_window_g1

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2_ParamLimits

0x0c75,	// (0x00000c75) popup_snote_single_graphic_window_g2

0x0001,

0xa8ed,	// (0x0000a8ed) popup_snote_single_graphic_window_g_ParamLimits

0xa8ed,	// (0x0000a8ed) popup_snote_single_graphic_window_g

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

0xa8f2,	// (0x0000a8f2) popup_snote_single_graphic_window_t_ParamLimits

0xa8f2,	// (0x0000a8f2) popup_snote_single_graphic_window_t

0x5254,	// (0x00005254) grid_graphic_popup_pane_ParamLimits

0x5254,	// (0x00005254) grid_graphic_popup_pane

0x527c,	// (0x0000527c) listscroll_popup_graphic_pane_g1_ParamLimits

0x527c,	// (0x0000527c) listscroll_popup_graphic_pane_g1

0xd369,	// (0x0000d369) listscroll_popup_graphic_pane_g2_ParamLimits

0xd369,	// (0x0000d369) listscroll_popup_graphic_pane_g2

0x0001,

0xf53b,	// (0x0000f53b) listscroll_popup_graphic_pane_g_ParamLimits

0xf53b,	// (0x0000f53b) listscroll_popup_graphic_pane_g

0x52a4,	// (0x000052a4) scroll_pane_cp5

0xd32d,	// (0x0000d32d) cell_graphic_popup_pane_ParamLimits

0xd32d,	// (0x0000d32d) cell_graphic_popup_pane

0x51de,	// (0x000051de) cell_graphic_popup_pane_g1

0x51e6,	// (0x000051e6) cell_graphic_popup_pane_g2

0x0b67,	// (0x00000b67) cell_graphic_popup_pane_g3

0x0002,

0xacce,	// (0x0000acce) cell_graphic_popup_pane_g

0x51ef,	// (0x000051ef) cell_graphic_popup_pane_t2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3

0x0d55,	// (0x00000d55) list_gen_pane_ParamLimits

0x0d55,	// (0x00000d55) list_gen_pane

0x0d87,	// (0x00000d87) scroll_pane

0xd2e8,	// (0x0000d2e8) bg_list_pane_g1_ParamLimits

0xd2e8,	// (0x0000d2e8) bg_list_pane_g1

0x515b,	// (0x0000515b) bg_list_pane_g2_ParamLimits

0x515b,	// (0x0000515b) bg_list_pane_g2

0x516e,	// (0x0000516e) bg_list_pane_g3_ParamLimits

0x516e,	// (0x0000516e) bg_list_pane_g3

0x5180,	// (0x00005180) bg_list_pane_g4_ParamLimits

0x5180,	// (0x00005180) bg_list_pane_g4

0xd303,	// (0x0000d303) bg_list_pane_g5_ParamLimits

0xd303,	// (0x0000d303) bg_list_pane_g5

0x0004,

0xf530,	// (0x0000f530) bg_list_pane_g_ParamLimits

0xf530,	// (0x0000f530) bg_list_pane_g

0xd28e,	// (0x0000d28e) list_double2_graphic_large_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double2_graphic_large_graphic_pane

0xd28e,	// (0x0000d28e) list_double2_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double2_graphic_pane

0xd28e,	// (0x0000d28e) list_double2_large_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double2_large_graphic_pane

0xd28e,	// (0x0000d28e) list_double2_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double2_pane

0xd28e,	// (0x0000d28e) list_double_graphic_heading_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_graphic_heading_pane

0xd28e,	// (0x0000d28e) list_double_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_graphic_pane

0xd28e,	// (0x0000d28e) list_double_heading_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_heading_pane

0xd28e,	// (0x0000d28e) list_double_large_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_large_graphic_pane

0xd28e,	// (0x0000d28e) list_double_number_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_number_pane

0xd28e,	// (0x0000d28e) list_double_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_pane

0xd28e,	// (0x0000d28e) list_double_time_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_double_time_pane

0xd28e,	// (0x0000d28e) list_setting_number_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_setting_number_pane

0xd28e,	// (0x0000d28e) list_setting_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_setting_pane

0xd2a0,	// (0x0000d2a0) list_single_2graphic_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_2graphic_pane

0xd2a0,	// (0x0000d2a0) list_single_graphic_heading_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_graphic_heading_pane

0xd2a0,	// (0x0000d2a0) list_single_graphic_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_graphic_pane

0xd2a0,	// (0x0000d2a0) list_single_heading_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_heading_pane

0xd28e,	// (0x0000d28e) list_single_large_graphic_pane_ParamLimits

0xd28e,	// (0x0000d28e) list_single_large_graphic_pane

0xd2a0,	// (0x0000d2a0) list_single_number_heading_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_number_heading_pane

0xd2a0,	// (0x0000d2a0) list_single_number_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_number_pane

0xd2a0,	// (0x0000d2a0) list_single_pane_ParamLimits

0xd2a0,	// (0x0000d2a0) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x3505,	// (0x00003505) list_single_pane_g1_ParamLimits

0x3505,	// (0x00003505) list_single_pane_g1

0x3511,	// (0x00003511) list_single_pane_g2_ParamLimits

0x3511,	// (0x00003511) list_single_pane_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_pane_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_pane_g

0x5991,	// (0x00005991) list_single_pane_t1_ParamLimits

0x5991,	// (0x00005991) list_single_pane_t1

0x3505,	// (0x00003505) list_single_number_pane_g1_ParamLimits

0x3505,	// (0x00003505) list_single_number_pane_g1

0x3511,	// (0x00003511) list_single_number_pane_g2_ParamLimits

0x3511,	// (0x00003511) list_single_number_pane_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_number_pane_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_number_pane_g

0x35fb,	// (0x000035fb) list_single_number_pane_t1_ParamLimits

0x35fb,	// (0x000035fb) list_single_number_pane_t1

0xd0d0,	// (0x0000d0d0) list_single_number_pane_t2_ParamLimits

0xd0d0,	// (0x0000d0d0) list_single_number_pane_t2

0x0001,

0xf513,	// (0x0000f513) list_single_number_pane_t_ParamLimits

0xf513,	// (0x0000f513) list_single_number_pane_t

0x7174,	// (0x00007174) list_single_graphic_pane_g1_ParamLimits

0x7174,	// (0x00007174) list_single_graphic_pane_g1

0x3505,	// (0x00003505) list_single_graphic_pane_g2_ParamLimits

0x3505,	// (0x00003505) list_single_graphic_pane_g2

0x3511,	// (0x00003511) list_single_graphic_pane_g3_ParamLimits

0x3511,	// (0x00003511) list_single_graphic_pane_g3

0x0002,

0xf3be,	// (0x0000f3be) list_single_graphic_pane_g_ParamLimits

0xf3be,	// (0x0000f3be) list_single_graphic_pane_g

0xb77a,	// (0x0000b77a) list_single_graphic_pane_t1_ParamLimits

0xb77a,	// (0x0000b77a) list_single_graphic_pane_t1

0x3505,	// (0x00003505) list_single_heading_pane_g1_ParamLimits

0x3505,	// (0x00003505) list_single_heading_pane_g1

0x3511,	// (0x00003511) list_single_heading_pane_g2_ParamLimits

0x3511,	// (0x00003511) list_single_heading_pane_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_heading_pane_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_heading_pane_g

0xb790,	// (0x0000b790) list_single_heading_pane_t1_ParamLimits

0xb790,	// (0x0000b790) list_single_heading_pane_t1

0xb7a6,	// (0x0000b7a6) list_single_heading_pane_t2_ParamLimits

0xb7a6,	// (0x0000b7a6) list_single_heading_pane_t2

0x0001,

0xf3c5,	// (0x0000f3c5) list_single_heading_pane_t_ParamLimits

0xf3c5,	// (0x0000f3c5) list_single_heading_pane_t

0x3505,	// (0x00003505) list_single_number_heading_pane_g1_ParamLimits

0x3505,	// (0x00003505) list_single_number_heading_pane_g1

0x3511,	// (0x00003511) list_single_number_heading_pane_g2_ParamLimits

0x3511,	// (0x00003511) list_single_number_heading_pane_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_number_heading_pane_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_number_heading_pane_g

0xb790,	// (0x0000b790) list_single_number_heading_pane_t1_ParamLimits

0xb790,	// (0x0000b790) list_single_number_heading_pane_t1

0xb7b8,	// (0x0000b7b8) list_single_number_heading_pane_t2_ParamLimits

0xb7b8,	// (0x0000b7b8) list_single_number_heading_pane_t2

0x596b,	// (0x0000596b) list_single_number_heading_pane_t3_ParamLimits

0x596b,	// (0x0000596b) list_single_number_heading_pane_t3

0x0002,

0xf3ca,	// (0x0000f3ca) list_single_number_heading_pane_t_ParamLimits

0xf3ca,	// (0x0000f3ca) list_single_number_heading_pane_t

0x34f9,	// (0x000034f9) list_single_graphic_heading_pane_g1_ParamLimits

0x34f9,	// (0x000034f9) list_single_graphic_heading_pane_g1

0xb7ca,	// (0x0000b7ca) list_single_graphic_heading_pane_g4_ParamLimits

0xb7ca,	// (0x0000b7ca) list_single_graphic_heading_pane_g4

0x3511,	// (0x00003511) list_single_graphic_heading_pane_g5_ParamLimits

0x3511,	// (0x00003511) list_single_graphic_heading_pane_g5

0x0002,

0xf3d1,	// (0x0000f3d1) list_single_graphic_heading_pane_g_ParamLimits

0xf3d1,	// (0x0000f3d1) list_single_graphic_heading_pane_g

0xb790,	// (0x0000b790) list_single_graphic_heading_pane_t1_ParamLimits

0xb790,	// (0x0000b790) list_single_graphic_heading_pane_t1

0xb7db,	// (0x0000b7db) list_single_graphic_heading_pane_t2_ParamLimits

0xb7db,	// (0x0000b7db) list_single_graphic_heading_pane_t2

0x0001,

0xf3d8,	// (0x0000f3d8) list_single_graphic_heading_pane_t_ParamLimits

0xf3d8,	// (0x0000f3d8) list_single_graphic_heading_pane_t

0x59a7,	// (0x000059a7) list_single_large_graphic_pane_g1_ParamLimits

0x59a7,	// (0x000059a7) list_single_large_graphic_pane_g1

0x59b3,	// (0x000059b3) list_single_large_graphic_pane_g2_ParamLimits

0x59b3,	// (0x000059b3) list_single_large_graphic_pane_g2

0x59bf,	// (0x000059bf) list_single_large_graphic_pane_g3_ParamLimits

0x59bf,	// (0x000059bf) list_single_large_graphic_pane_g3

0x0002,

0xad5e,	// (0x0000ad5e) list_single_large_graphic_pane_g_ParamLimits

0xad5e,	// (0x0000ad5e) list_single_large_graphic_pane_g

0x3e2b,	// (0x00003e2b) wait_border_pane_g2_copy1

0xb7ed,	// (0x0000b7ed) list_single_large_graphic_pane_g4_cp2

0x59cb,	// (0x000059cb) list_single_large_graphic_pane_t1_ParamLimits

0x59cb,	// (0x000059cb) list_single_large_graphic_pane_t1

0x23c8,	// (0x000023c8) list_double_pane_g1_ParamLimits

0x23c8,	// (0x000023c8) list_double_pane_g1

0xb7f5,	// (0x0000b7f5) list_double_pane_g2_ParamLimits

0xb7f5,	// (0x0000b7f5) list_double_pane_g2

0x0001,

0xf3dd,	// (0x0000f3dd) list_double_pane_g_ParamLimits

0xf3dd,	// (0x0000f3dd) list_double_pane_g

0xb801,	// (0x0000b801) list_double_pane_t1_ParamLimits

0xb801,	// (0x0000b801) list_double_pane_t1

0xb817,	// (0x0000b817) list_double_pane_t2_ParamLimits

0xb817,	// (0x0000b817) list_double_pane_t2

0x0001,

0xf3e2,	// (0x0000f3e2) list_double_pane_t_ParamLimits

0xf3e2,	// (0x0000f3e2) list_double_pane_t

0xb829,	// (0x0000b829) list_double2_pane_g1_ParamLimits

0xb829,	// (0x0000b829) list_double2_pane_g1

0x10dc,	// (0x000010dc) list_double2_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_double2_pane_g2

0x0001,

0xf3e7,	// (0x0000f3e7) list_double2_pane_g_ParamLimits

0xf3e7,	// (0x0000f3e7) list_double2_pane_g

0xb83a,	// (0x0000b83a) list_double2_pane_t1_ParamLimits

0xb83a,	// (0x0000b83a) list_double2_pane_t1

0xb850,	// (0x0000b850) list_double2_pane_t2_ParamLimits

0xb850,	// (0x0000b850) list_double2_pane_t2

0x0001,

0xf3ec,	// (0x0000f3ec) list_double2_pane_t_ParamLimits

0xf3ec,	// (0x0000f3ec) list_double2_pane_t

0x23c8,	// (0x000023c8) list_double_number_pane_g1_ParamLimits

0x23c8,	// (0x000023c8) list_double_number_pane_g1

0xb7f5,	// (0x0000b7f5) list_double_number_pane_g2_ParamLimits

0xb7f5,	// (0x0000b7f5) list_double_number_pane_g2

0x0001,

0xf3dd,	// (0x0000f3dd) list_double_number_pane_g_ParamLimits

0xf3dd,	// (0x0000f3dd) list_double_number_pane_g

0xb862,	// (0x0000b862) list_double_number_pane_t1_ParamLimits

0xb862,	// (0x0000b862) list_double_number_pane_t1

0xb874,	// (0x0000b874) list_double_number_pane_t2_ParamLimits

0xb874,	// (0x0000b874) list_double_number_pane_t2

0xb88a,	// (0x0000b88a) list_double_number_pane_t3_ParamLimits

0xb88a,	// (0x0000b88a) list_double_number_pane_t3

0x0002,

0xf3f1,	// (0x0000f3f1) list_double_number_pane_t_ParamLimits

0xf3f1,	// (0x0000f3f1) list_double_number_pane_t

0xb89c,	// (0x0000b89c) list_double_graphic_pane_g1_ParamLimits

0xb89c,	// (0x0000b89c) list_double_graphic_pane_g1

0xb8a8,	// (0x0000b8a8) list_double_graphic_pane_g2_ParamLimits

0xb8a8,	// (0x0000b8a8) list_double_graphic_pane_g2

0xb8b7,	// (0x0000b8b7) list_double_graphic_pane_g3_ParamLimits

0xb8b7,	// (0x0000b8b7) list_double_graphic_pane_g3

0x0003,

0xf3f8,	// (0x0000f3f8) list_double_graphic_pane_g_ParamLimits

0xf3f8,	// (0x0000f3f8) list_double_graphic_pane_g

0xb8cf,	// (0x0000b8cf) list_double_graphic_pane_t1_ParamLimits

0xb8cf,	// (0x0000b8cf) list_double_graphic_pane_t1

0xb8e5,	// (0x0000b8e5) list_double_graphic_pane_t2_ParamLimits

0xb8e5,	// (0x0000b8e5) list_double_graphic_pane_t2

0x0001,

0xf401,	// (0x0000f401) list_double_graphic_pane_t_ParamLimits

0xf401,	// (0x0000f401) list_double_graphic_pane_t

0xb8f7,	// (0x0000b8f7) list_double2_graphic_pane_g1_ParamLimits

0xb8f7,	// (0x0000b8f7) list_double2_graphic_pane_g1

0xb903,	// (0x0000b903) list_double2_graphic_pane_g2_ParamLimits

0xb903,	// (0x0000b903) list_double2_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_pane_g3

0x0002,

0xf406,	// (0x0000f406) list_double2_graphic_pane_g_ParamLimits

0xf406,	// (0x0000f406) list_double2_graphic_pane_g

0xb90f,	// (0x0000b90f) list_double2_graphic_pane_t1_ParamLimits

0xb90f,	// (0x0000b90f) list_double2_graphic_pane_t1

0xb925,	// (0x0000b925) list_double2_graphic_pane_t2_ParamLimits

0xb925,	// (0x0000b925) list_double2_graphic_pane_t2

0x0001,

0xf40d,	// (0x0000f40d) list_double2_graphic_pane_t_ParamLimits

0xf40d,	// (0x0000f40d) list_double2_graphic_pane_t

0xb937,	// (0x0000b937) list_double_large_graphic_pane_g1_ParamLimits

0xb937,	// (0x0000b937) list_double_large_graphic_pane_g1

0xb962,	// (0x0000b962) list_double_large_graphic_pane_g2_ParamLimits

0xb962,	// (0x0000b962) list_double_large_graphic_pane_g2

0xb7f5,	// (0x0000b7f5) list_double_large_graphic_pane_g3_ParamLimits

0xb7f5,	// (0x0000b7f5) list_double_large_graphic_pane_g3

0xb973,	// (0x0000b973) list_double_large_graphic_pane_g4_ParamLimits

0xb973,	// (0x0000b973) list_double_large_graphic_pane_g4

0x0004,

0xf412,	// (0x0000f412) list_double_large_graphic_pane_g_ParamLimits

0xf412,	// (0x0000f412) list_double_large_graphic_pane_g

0xb985,	// (0x0000b985) list_double_large_graphic_pane_t1_ParamLimits

0xb985,	// (0x0000b985) list_double_large_graphic_pane_t1

0xb99e,	// (0x0000b99e) list_double_large_graphic_pane_t2_ParamLimits

0xb99e,	// (0x0000b99e) list_double_large_graphic_pane_t2

0x0001,

0xf41d,	// (0x0000f41d) list_double_large_graphic_pane_t_ParamLimits

0xf41d,	// (0x0000f41d) list_double_large_graphic_pane_t

0xb9b0,	// (0x0000b9b0) list_double2_large_graphic_pane_g1_ParamLimits

0xb9b0,	// (0x0000b9b0) list_double2_large_graphic_pane_g1

0xb829,	// (0x0000b829) list_double2_large_graphic_pane_g2_ParamLimits

0xb829,	// (0x0000b829) list_double2_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_large_graphic_pane_g3

0x0002,

0xf422,	// (0x0000f422) list_double2_large_graphic_pane_g_ParamLimits

0xf422,	// (0x0000f422) list_double2_large_graphic_pane_g

0xb9bc,	// (0x0000b9bc) list_double2_large_graphic_pane_t1_ParamLimits

0xb9bc,	// (0x0000b9bc) list_double2_large_graphic_pane_t1

0xb9d2,	// (0x0000b9d2) list_double2_large_graphic_pane_t2_ParamLimits

0xb9d2,	// (0x0000b9d2) list_double2_large_graphic_pane_t2

0x0001,

0xf429,	// (0x0000f429) list_double2_large_graphic_pane_t_ParamLimits

0xf429,	// (0x0000f429) list_double2_large_graphic_pane_t

0xb9e4,	// (0x0000b9e4) list_double_heading_pane_g1_ParamLimits

0xb9e4,	// (0x0000b9e4) list_double_heading_pane_g1

0xb9f5,	// (0x0000b9f5) list_double_heading_pane_g2_ParamLimits

0xb9f5,	// (0x0000b9f5) list_double_heading_pane_g2

0x0001,

0xf42e,	// (0x0000f42e) list_double_heading_pane_g_ParamLimits

0xf42e,	// (0x0000f42e) list_double_heading_pane_g

0xba01,	// (0x0000ba01) list_double_heading_pane_t1_ParamLimits

0xba01,	// (0x0000ba01) list_double_heading_pane_t1

0xba17,	// (0x0000ba17) list_double_heading_pane_t2_ParamLimits

0xba17,	// (0x0000ba17) list_double_heading_pane_t2

0x0001,

0xf433,	// (0x0000f433) list_double_heading_pane_t_ParamLimits

0xf433,	// (0x0000f433) list_double_heading_pane_t

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1_ParamLimits

0x0f71,	// (0x00000f71) list_double_graphic_heading_pane_g1

0xb9e4,	// (0x0000b9e4) list_double_graphic_heading_pane_g2_ParamLimits

0xb9e4,	// (0x0000b9e4) list_double_graphic_heading_pane_g2

0xb9f5,	// (0x0000b9f5) list_double_graphic_heading_pane_g3_ParamLimits

0xb9f5,	// (0x0000b9f5) list_double_graphic_heading_pane_g3

0x0002,

0xf438,	// (0x0000f438) list_double_graphic_heading_pane_g_ParamLimits

0xf438,	// (0x0000f438) list_double_graphic_heading_pane_g

0xba29,	// (0x0000ba29) list_double_graphic_heading_pane_t1_ParamLimits

0xba29,	// (0x0000ba29) list_double_graphic_heading_pane_t1

0xba3f,	// (0x0000ba3f) list_double_graphic_heading_pane_t2_ParamLimits

0xba3f,	// (0x0000ba3f) list_double_graphic_heading_pane_t2

0x0001,

0xf43f,	// (0x0000f43f) list_double_graphic_heading_pane_t_ParamLimits

0xf43f,	// (0x0000f43f) list_double_graphic_heading_pane_t

0xb962,	// (0x0000b962) list_double_time_pane_g1_ParamLimits

0xb962,	// (0x0000b962) list_double_time_pane_g1

0xb7f5,	// (0x0000b7f5) list_double_time_pane_g2_ParamLimits

0xb7f5,	// (0x0000b7f5) list_double_time_pane_g2

0x0001,

0xf444,	// (0x0000f444) list_double_time_pane_g_ParamLimits

0xf444,	// (0x0000f444) list_double_time_pane_g

0xba51,	// (0x0000ba51) list_double_time_pane_t1_ParamLimits

0xba51,	// (0x0000ba51) list_double_time_pane_t1

0xba67,	// (0x0000ba67) list_double_time_pane_t2_ParamLimits

0xba67,	// (0x0000ba67) list_double_time_pane_t2

0xba79,	// (0x0000ba79) list_double_time_pane_t3_ParamLimits

0xba79,	// (0x0000ba79) list_double_time_pane_t3

0xba8b,	// (0x0000ba8b) list_double_time_pane_t4_ParamLimits

0xba8b,	// (0x0000ba8b) list_double_time_pane_t4

0x0003,

0xf449,	// (0x0000f449) list_double_time_pane_t_ParamLimits

0xf449,	// (0x0000f449) list_double_time_pane_t

0xb903,	// (0x0000b903) list_setting_pane_g1_ParamLimits

0xb903,	// (0x0000b903) list_setting_pane_g1

0x10dc,	// (0x000010dc) list_setting_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_pane_g2

0x0001,

0xf452,	// (0x0000f452) list_setting_pane_g_ParamLimits

0xf452,	// (0x0000f452) list_setting_pane_g

0xba9d,	// (0x0000ba9d) list_setting_pane_t1_ParamLimits

0xba9d,	// (0x0000ba9d) list_setting_pane_t1

0xbab4,	// (0x0000bab4) list_setting_pane_t2_ParamLimits

0xbab4,	// (0x0000bab4) list_setting_pane_t2

0x0002,

0xf457,	// (0x0000f457) list_setting_pane_t_ParamLimits

0xf457,	// (0x0000f457) list_setting_pane_t

0xbaf3,	// (0x0000baf3) set_value_pane_cp_ParamLimits

0xbaf3,	// (0x0000baf3) set_value_pane_cp

0xb903,	// (0x0000b903) list_setting_number_pane_g1_ParamLimits

0xb903,	// (0x0000b903) list_setting_number_pane_g1

0x10dc,	// (0x000010dc) list_setting_number_pane_g2_ParamLimits

0x10dc,	// (0x000010dc) list_setting_number_pane_g2

0x0001,

0xf452,	// (0x0000f452) list_setting_number_pane_g_ParamLimits

0xf452,	// (0x0000f452) list_setting_number_pane_g

0xbaff,	// (0x0000baff) list_setting_number_pane_t1_ParamLimits

0xbaff,	// (0x0000baff) list_setting_number_pane_t1

0xbb13,	// (0x0000bb13) list_setting_number_pane_t2_ParamLimits

0xbb13,	// (0x0000bb13) list_setting_number_pane_t2

0xbb2a,	// (0x0000bb2a) list_setting_number_pane_t3_ParamLimits

0xbb2a,	// (0x0000bb2a) list_setting_number_pane_t3

0x0003,

0xf45e,	// (0x0000f45e) list_setting_number_pane_t_ParamLimits

0xf45e,	// (0x0000f45e) list_setting_number_pane_t

0xbaf3,	// (0x0000baf3) set_value_pane_ParamLimits

0xbaf3,	// (0x0000baf3) set_value_pane

0x123c,	// (0x0000123c) bg_set_opt_pane_ParamLimits

0x123c,	// (0x0000123c) bg_set_opt_pane

0x125d,	// (0x0000125d) set_value_pane_t1

0x126b,	// (0x0000126b) slider_set_pane_cp3

0x1274,	// (0x00001274) volume_small_pane_cp

0x127d,	// (0x0000127d) list_form_gen_pane

0x1286,	// (0x00001286) scroll_pane_cp8

0xbb6d,	// (0x0000bb6d) form_field_data_pane_ParamLimits

0xbb6d,	// (0x0000bb6d) form_field_data_pane

0xbb84,	// (0x0000bb84) form_field_data_wide_pane_ParamLimits

0xbb84,	// (0x0000bb84) form_field_data_wide_pane

0xbba4,	// (0x0000bba4) form_field_popup_pane_ParamLimits

0xbba4,	// (0x0000bba4) form_field_popup_pane

0xbbbc,	// (0x0000bbbc) form_field_popup_wide_pane_ParamLimits

0xbbbc,	// (0x0000bbbc) form_field_popup_wide_pane

0x1321,	// (0x00001321) form_field_slider_pane_ParamLimits

0x1321,	// (0x00001321) form_field_slider_pane

0x1334,	// (0x00001334) form_field_slider_wide_pane_ParamLimits

0x1334,	// (0x00001334) form_field_slider_wide_pane

0x1347,	// (0x00001347) data_form_pane

0xbbdd,	// (0x0000bbdd) form_field_data_pane_t1

0x1375,	// (0x00001375) input_focus_pane

0x1383,	// (0x00001383) data_form_wide_pane

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1

0x0b85,	// (0x00000b85) input_focus_pane_cp6

0xbbf7,	// (0x0000bbf7) form_field_popup_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp7

0x13f5,	// (0x000013f5) list_form_pane

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1

0x1375,	// (0x00001375) input_focus_pane_cp8

0x141e,	// (0x0000141e) list_form_wide_pane

0xbc19,	// (0x0000bc19) form_field_slider_pane_t1_ParamLimits

0xbc19,	// (0x0000bc19) form_field_slider_pane_t1

0xbc31,	// (0x0000bc31) form_field_slider_pane_t2_ParamLimits

0xbc31,	// (0x0000bc31) form_field_slider_pane_t2

0x0001,

0xf467,	// (0x0000f467) form_field_slider_pane_t_ParamLimits

0xf467,	// (0x0000f467) form_field_slider_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp9_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9

0xbc46,	// (0x0000bc46) slider_cont_pane_ParamLimits

0xbc46,	// (0x0000bc46) slider_cont_pane

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1_ParamLimits

0x146d,	// (0x0000146d) form_field_slider_wide_pane_t1

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t2

0x0001,

0xa9be,	// (0x0000a9be) form_field_slider_wide_pane_t_ParamLimits

0xa9be,	// (0x0000a9be) form_field_slider_wide_pane_t

0x0823,	// (0x00000823) input_focus_pane_cp10_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10

0xbc5a,	// (0x0000bc5a) slider_cont_pane_cp1_ParamLimits

0xbc5a,	// (0x0000bc5a) slider_cont_pane_cp1

0xbc6e,	// (0x0000bc6e) slider_form_pane_cp

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

0xa9c3,	// (0x0000a9c3) input_focus_pane_g

0x3e34,	// (0x00003e34) wait_border_pane_g3_copy1

0xbc76,	// (0x0000bc76) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd263,	// (0x0000d263) data_form_wide_pane_t1

0xbc90,	// (0x0000bc90) list_form_graphic_pane_cp_ParamLimits

0xbc90,	// (0x0000bc90) list_form_graphic_pane_cp

0x4fc4,	// (0x00004fc4) slider_form_pane_g1

0x4fcd,	// (0x00004fcd) slider_form_pane_g2

0x0006,

0xf521,	// (0x0000f521) slider_form_pane_g

0xbca1,	// (0x0000bca1) list_form_graphic_pane_ParamLimits

0xbca1,	// (0x0000bca1) list_form_graphic_pane

0x1545,	// (0x00001545) list_form_graphic_pane_g1

0x154d,	// (0x0000154d) list_form_graphic_pane_t1_ParamLimits

0x154d,	// (0x0000154d) list_form_graphic_pane_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5

0xbcb3,	// (0x0000bcb3) find_pane_g1

0x156b,	// (0x0000156b) input_find_pane

0xbcbc,	// (0x0000bcbc) input_find_pane_g1_ParamLimits

0xbcbc,	// (0x0000bcbc) input_find_pane_g1

0xbcc8,	// (0x0000bcc8) input_find_pane_t1_ParamLimits

0xbcc8,	// (0x0000bcc8) input_find_pane_t1

0xbcdd,	// (0x0000bcdd) input_find_pane_t2_ParamLimits

0xbcdd,	// (0x0000bcdd) input_find_pane_t2

0x0001,

0xf46c,	// (0x0000f46c) input_find_pane_t_ParamLimits

0xf46c,	// (0x0000f46c) input_find_pane_t

0x15aa,	// (0x000015aa) input_focus_pane_cp5_ParamLimits

0x15aa,	// (0x000015aa) input_focus_pane_cp5

0xbcfe,	// (0x0000bcfe) bg_popup_window_pane_cp2_ParamLimits

0xbcfe,	// (0x0000bcfe) bg_popup_window_pane_cp2

0xbd0b,	// (0x0000bd0b) listscroll_menu_pane_ParamLimits

0xbd0b,	// (0x0000bd0b) listscroll_menu_pane

0xbd17,	// (0x0000bd17) popup_submenu_window_ParamLimits

0xbd17,	// (0x0000bd17) popup_submenu_window

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

0xbd4f,	// (0x0000bd4f) tabs_2_active_pane_g1

0xbd57,	// (0x0000bd57) tabs_2_active_pane_t1

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1_ParamLimits

0x0823,	// (0x00000823) bg_passive_tab_pane_cp1

0xbd4f,	// (0x0000bd4f) tabs_2_passive_pane_g1

0xbd57,	// (0x0000bd57) tabs_2_passive_pane_t1

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4

0xbd69,	// (0x0000bd69) tabs_2_long_active_pane_t1

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp4

0x2073,	// (0x00002073) list_single_midp_graphic_pane_g4_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5

0xbd7c,	// (0x0000bd7c) tabs_3_long_active_pane_t1

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp5

0x2073,	// (0x00002073) list_single_midp_graphic_pane_g4

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp13

0x1707,	// (0x00001707) listscroll_popup_fast_pane_ParamLimits

0x1707,	// (0x00001707) listscroll_popup_fast_pane

0x1716,	// (0x00001716) grid_popup_fast_pane_ParamLimits

0x1716,	// (0x00001716) grid_popup_fast_pane

0x1728,	// (0x00001728) scroll_pane_cp9_ParamLimits

0x1728,	// (0x00001728) scroll_pane_cp9

0x71da,	// (0x000071da) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x71da,	// (0x000071da) list_single_graphic_hl_pane_t1_cp2

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

0xa9dd,	// (0x0000a9dd) query_popup_data_pane_t_ParamLimits

0xa9dd,	// (0x0000a9dd) query_popup_data_pane_t

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

0xa9e8,	// (0x0000a9e8) bg_set_opt_pane_g

0x20fc,	// (0x000020fc) control_top_pane_stacon_ParamLimits

0x20fc,	// (0x000020fc) control_top_pane_stacon

0x214f,	// (0x0000214f) signal_pane_stacon_ParamLimits

0x214f,	// (0x0000214f) signal_pane_stacon

0x2174,	// (0x00002174) stacon_top_pane_g1_ParamLimits

0x2174,	// (0x00002174) stacon_top_pane_g1

0x2196,	// (0x00002196) title_pane_stacon_ParamLimits

0x2196,	// (0x00002196) title_pane_stacon

0x21c0,	// (0x000021c0) uni_indicator_pane_stacon_ParamLimits

0x21c0,	// (0x000021c0) uni_indicator_pane_stacon

0x21d5,	// (0x000021d5) battery_pane_stacon_ParamLimits

0x21d5,	// (0x000021d5) battery_pane_stacon

0x2219,	// (0x00002219) control_bottom_pane_stacon_ParamLimits

0x2219,	// (0x00002219) control_bottom_pane_stacon

0x223c,	// (0x0000223c) navi_pane_stacon_ParamLimits

0x223c,	// (0x0000223c) navi_pane_stacon

0x225f,	// (0x0000225f) stacon_bottom_pane_g1_ParamLimits

0x225f,	// (0x0000225f) stacon_bottom_pane_g1

0x1867,	// (0x00001867) aid_levels_signal_lsc_ParamLimits

0x1867,	// (0x00001867) aid_levels_signal_lsc

0x187e,	// (0x0000187e) signal_pane_stacon_g1_ParamLimits

0x187e,	// (0x0000187e) signal_pane_stacon_g1

0x1892,	// (0x00001892) signal_pane_stacon_g2_ParamLimits

0x1892,	// (0x00001892) signal_pane_stacon_g2

0x0001,

0xa9fb,	// (0x0000a9fb) signal_pane_stacon_g_ParamLimits

0xa9fb,	// (0x0000a9fb) signal_pane_stacon_g

0x18d4,	// (0x000018d4) title_pane_stacon_t1_ParamLimits

0x18d4,	// (0x000018d4) title_pane_stacon_t1

0x18f9,	// (0x000018f9) uni_indicator_pane_stacon_g1

0x1903,	// (0x00001903) uni_indicator_pane_stacon_g2

0x190d,	// (0x0000190d) uni_indicator_pane_stacon_g3

0x1917,	// (0x00001917) uni_indicator_pane_stacon_g4

0x0003,

0xaa07,	// (0x0000aa07) uni_indicator_pane_stacon_g

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

0xaa10,	// (0x0000aa10) battery_pane_stacon_g_ParamLimits

0xaa10,	// (0x0000aa10) battery_pane_stacon_g

0x19c9,	// (0x000019c9) navi_icon_pane_stacon

0x19dd,	// (0x000019dd) navi_navi_pane_stacon

0x19c9,	// (0x000019c9) navi_text_pane_stacon

0x1921,	// (0x00001921) control_bottom_pane_stacon_g1

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1_ParamLimits

0x19f1,	// (0x000019f1) control_bottom_pane_stacon_t1

0xbd8e,	// (0x0000bd8e) grid_app_pane_ParamLimits

0xbd8e,	// (0x0000bd8e) grid_app_pane

0xbdc6,	// (0x0000bdc6) scroll_pane_cp15_ParamLimits

0xbdc6,	// (0x0000bdc6) scroll_pane_cp15

0xbddf,	// (0x0000bddf) cell_app_pane_ParamLimits

0xbddf,	// (0x0000bddf) cell_app_pane

0xbe24,	// (0x0000be24) cell_app_pane_g1_ParamLimits

0xbe24,	// (0x0000be24) cell_app_pane_g1

0x1ac3,	// (0x00001ac3) cell_app_pane_g2_ParamLimits

0x1ac3,	// (0x00001ac3) cell_app_pane_g2

0x0001,

0xf471,	// (0x0000f471) cell_app_pane_g_ParamLimits

0xf471,	// (0x0000f471) cell_app_pane_g

0x1acf,	// (0x00001acf) cell_app_pane_t1_ParamLimits

0x1acf,	// (0x00001acf) cell_app_pane_t1

0x1ae6,	// (0x00001ae6) grid_highlight_pane_ParamLimits

0x1ae6,	// (0x00001ae6) grid_highlight_pane

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

0xa9c3,	// (0x0000a9c3) cell_highlight_pane_g

0x1b0a,	// (0x00001b0a) bg_scroll_pane

0x1b29,	// (0x00001b29) scroll_handle_pane

0x1b7a,	// (0x00001b7a) scroll_bg_pane_g1

0x1b8f,	// (0x00001b8f) scroll_bg_pane_g2

0x1ba7,	// (0x00001ba7) scroll_bg_pane_g3

0x0002,

0xaa1a,	// (0x0000aa1a) scroll_bg_pane_g

0x1bbc,	// (0x00001bbc) scroll_handle_focus_pane_ParamLimits

0x1bbc,	// (0x00001bbc) scroll_handle_focus_pane

0x1b7a,	// (0x00001b7a) scroll_handle_pane_g1

0x1bc9,	// (0x00001bc9) scroll_handle_pane_g2

0x1ba7,	// (0x00001ba7) scroll_handle_pane_g3

0x0002,

0xaa21,	// (0x0000aa21) scroll_handle_pane_g

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp21

0x1bdd,	// (0x00001bdd) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bdd,	// (0x00001bdd) popup_fep_japan_predictive_window_t1

0x1bf7,	// (0x00001bf7) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bf7,	// (0x00001bf7) popup_fep_japan_predictive_window_t2

0x1c2a,	// (0x00001c2a) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c2a,	// (0x00001c2a) popup_fep_japan_predictive_window_t3

0x0002,

0xaa28,	// (0x0000aa28) popup_fep_japan_predictive_window_t_ParamLimits

0xaa28,	// (0x0000aa28) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c61,	// (0x00001c61) listscroll_japin_cand_pane

0x1c69,	// (0x00001c69) popup_fep_japan_candidate_window_t1

0x1c77,	// (0x00001c77) candidate_pane_ParamLimits

0x1c77,	// (0x00001c77) candidate_pane

0x1c89,	// (0x00001c89) scroll_pane_cp30

0x1c91,	// (0x00001c91) list_single_popup_jap_candidate_pane_ParamLimits

0x1c91,	// (0x00001c91) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1ca6,	// (0x00001ca6) list_single_popup_jap_candidate_pane_t1

0x1cb5,	// (0x00001cb5) level_1_signal

0x1cc2,	// (0x00001cc2) level_2_signal

0x1ccf,	// (0x00001ccf) level_3_signal

0x1cdc,	// (0x00001cdc) level_4_signal

0x1ce9,	// (0x00001ce9) level_5_signal

0x1cf6,	// (0x00001cf6) level_6_signal

0x1d03,	// (0x00001d03) level_7_signal

0x1cb5,	// (0x00001cb5) level_1_battery

0x1cc2,	// (0x00001cc2) level_2_battery

0x1ccf,	// (0x00001ccf) level_3_battery

0x1cdc,	// (0x00001cdc) level_4_battery

0x1ce9,	// (0x00001ce9) level_5_battery

0x1cf6,	// (0x00001cf6) level_6_battery

0x1d03,	// (0x00001d03) level_7_battery

0x1d47,	// (0x00001d47) list_menu_pane_ParamLimits

0x1d47,	// (0x00001d47) list_menu_pane

0x1d58,	// (0x00001d58) scroll_pane_cp25_ParamLimits

0x1d58,	// (0x00001d58) scroll_pane_cp25

0x1d71,	// (0x00001d71) list_double2_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_large_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double2_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double2_pane_cp2

0x1d71,	// (0x00001d71) list_double_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double_large_graphic_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_large_graphic_pane_cp2

0x1d71,	// (0x00001d71) list_double_number_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_number_pane_cp2

0x1d71,	// (0x00001d71) list_double_pane_cp2_ParamLimits

0x1d71,	// (0x00001d71) list_double_pane_cp2

0xbe60,	// (0x0000be60) list_single_2graphic_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_2graphic_pane_cp2

0xbe60,	// (0x0000be60) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_graphic_heading_pane_cp2

0xbe60,	// (0x0000be60) list_single_graphic_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_graphic_pane_cp2

0xbe60,	// (0x0000be60) list_single_heading_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_heading_pane_cp2

0x1dae,	// (0x00001dae) list_single_large_graphic_pane_cp2_ParamLimits

0x1dae,	// (0x00001dae) list_single_large_graphic_pane_cp2

0xbe60,	// (0x0000be60) list_single_number_heading_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_number_heading_pane_cp2

0xbe60,	// (0x0000be60) list_single_number_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_number_pane_cp2

0xbe60,	// (0x0000be60) list_single_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_pane_cp2

0x1e5f,	// (0x00001e5f) bg_popup_sub_pane_cp22

0x1e84,	// (0x00001e84) popup_side_volume_key_window_g1

0x1eae,	// (0x00001eae) popup_side_volume_key_window_t1

0x1eca,	// (0x00001eca) volume_small_pane_cp1

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24_ParamLimits

0x0823,	// (0x00000823) bg_popup_sub_pane_cp24

0x1ed2,	// (0x00001ed2) fep_china_uni_candidate_pane_ParamLimits

0x1ed2,	// (0x00001ed2) fep_china_uni_candidate_pane

0x1ee6,	// (0x00001ee6) fep_china_uni_entry_pane

0x1ef6,	// (0x00001ef6) popup_fep_china_uni_window_g1

0x1f12,	// (0x00001f12) fep_china_uni_entry_pane_g1

0x1f1a,	// (0x00001f1a) fep_china_uni_entry_pane_g2

0x0001,

0xaa55,	// (0x0000aa55) fep_china_uni_entry_pane_g

0x1f22,	// (0x00001f22) fep_entry_item_pane

0x1f2c,	// (0x00001f2c) fep_candidate_item_pane

0x1f34,	// (0x00001f34) fep_china_uni_candidate_pane_g1

0x1f3c,	// (0x00001f3c) fep_china_uni_candidate_pane_g2

0x1f44,	// (0x00001f44) fep_china_uni_candidate_pane_g3

0x1f4c,	// (0x00001f4c) fep_china_uni_candidate_pane_g4

0x0003,

0xaa5a,	// (0x0000aa5a) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f54,	// (0x00001f54) fep_entry_item_pane_t1_ParamLimits

0x1f54,	// (0x00001f54) fep_entry_item_pane_t1

0x1f6a,	// (0x00001f6a) fep_candidate_item_pane_t1_ParamLimits

0x1f6a,	// (0x00001f6a) fep_candidate_item_pane_t1

0x1f7f,	// (0x00001f7f) fep_candidate_item_pane_t2_ParamLimits

0x1f7f,	// (0x00001f7f) fep_candidate_item_pane_t2

0x0001,

0xaa63,	// (0x0000aa63) fep_candidate_item_pane_t_ParamLimits

0xaa63,	// (0x0000aa63) fep_candidate_item_pane_t

0x04fd,	// (0x000004fd) list_highlight_pane_cp31_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp31

0x1f91,	// (0x00001f91) level_1_signal_lsc

0x1f9a,	// (0x00001f9a) level_2_signal_lsc

0x1fa3,	// (0x00001fa3) level_3_signal_lsc

0x1fac,	// (0x00001fac) level_4_signal_lsc

0x1fb5,	// (0x00001fb5) level_5_signal_lsc

0x1fbe,	// (0x00001fbe) level_6_signal_lsc

0x1fc7,	// (0x00001fc7) level_7_signal_lsc

0x1fc7,	// (0x00001fc7) level_1_battery_lsc

0x1fd0,	// (0x00001fd0) level_2_battery_lsc

0x1fd9,	// (0x00001fd9) level_3_battery_lsc

0x1fe2,	// (0x00001fe2) level_4_battery_lsc

0x1feb,	// (0x00001feb) level_5_battery_lsc

0x1ff4,	// (0x00001ff4) level_6_battery_lsc

0x1f91,	// (0x00001f91) level_7_battery_lsc

0x1ffd,	// (0x00001ffd) scroll_handle_focus_pane_g1

0x2006,	// (0x00002006) scroll_handle_focus_pane_g2

0x200f,	// (0x0000200f) scroll_handle_focus_pane_g3

0x0002,

0xaa68,	// (0x0000aa68) scroll_handle_focus_pane_g

0xbec0,	// (0x0000bec0) list_single_2graphic_pane_g1_ParamLimits

0xbec0,	// (0x0000bec0) list_single_2graphic_pane_g1

0xb7ca,	// (0x0000b7ca) list_single_2graphic_pane_g2_ParamLimits

0xb7ca,	// (0x0000b7ca) list_single_2graphic_pane_g2

0x3511,	// (0x00003511) list_single_2graphic_pane_g3_ParamLimits

0x3511,	// (0x00003511) list_single_2graphic_pane_g3

0xbecc,	// (0x0000becc) list_single_2graphic_pane_g4_ParamLimits

0xbecc,	// (0x0000becc) list_single_2graphic_pane_g4

0x0003,

0xf47b,	// (0x0000f47b) list_single_2graphic_pane_g_ParamLimits

0xf47b,	// (0x0000f47b) list_single_2graphic_pane_g

0xbed8,	// (0x0000bed8) list_single_2graphic_pane_t1_ParamLimits

0xbed8,	// (0x0000bed8) list_single_2graphic_pane_t1

0xbf06,	// (0x0000bf06) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf06,	// (0x0000bf06) list_double2_graphic_large_graphic_pane_g1

0xb829,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb829,	// (0x0000b829) list_double2_graphic_large_graphic_pane_g2

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x10dc,	// (0x000010dc) list_double2_graphic_large_graphic_pane_g3

0xbf18,	// (0x0000bf18) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf18,	// (0x0000bf18) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf484,	// (0x0000f484) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf484,	// (0x0000f484) list_double2_graphic_large_graphic_pane_g

0xbf24,	// (0x0000bf24) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf24,	// (0x0000bf24) list_double2_graphic_large_graphic_pane_t1

0xbf3a,	// (0x0000bf3a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf3a,	// (0x0000bf3a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf48d,	// (0x0000f48d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf48d,	// (0x0000f48d) list_double2_graphic_large_graphic_pane_t

0x2327,	// (0x00002327) popup_fast_swap_window_ParamLimits

0x2327,	// (0x00002327) popup_fast_swap_window

0x2343,	// (0x00002343) popup_side_volume_key_window

0x235f,	// (0x0000235f) stacon_top_pane

0x2369,	// (0x00002369) status_pane_ParamLimits

0x2369,	// (0x00002369) status_pane

0x235f,	// (0x0000235f) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x1286,	// (0x00001286) scroll_pane_cp121

0x127d,	// (0x0000127d) set_content_pane

0x20c2,	// (0x000020c2) bg_active_tab_pane_g1_cp1

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp1

0x20cb,	// (0x000020cb) bg_active_tab_pane_g3_cp1

0x20c2,	// (0x000020c2) bg_passive_tab_pane_g1_cp1

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp1

0x20cb,	// (0x000020cb) bg_passive_tab_pane_g3_cp1

0xbf4c,	// (0x0000bf4c) bg_active_tab_pane_g1_cp2

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp2

0xbf55,	// (0x0000bf55) bg_active_tab_pane_g3_cp2

0xbf4c,	// (0x0000bf4c) bg_passive_tab_pane_g1_cp2

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp2

0xbf55,	// (0x0000bf55) bg_passive_tab_pane_g3_cp2

0xbf5e,	// (0x0000bf5e) bg_active_tab_pane_g1_cp3

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp3

0xbf67,	// (0x0000bf67) bg_active_tab_pane_g3_cp3

0xbf5e,	// (0x0000bf5e) bg_passive_tab_pane_g1_cp3

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp3

0xbf67,	// (0x0000bf67) bg_passive_tab_pane_g3_cp3

0xbf70,	// (0x0000bf70) bg_active_tab_pane_g1_cp4

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp4

0xbf79,	// (0x0000bf79) bg_active_tab_pane_g3_cp4

0xbf70,	// (0x0000bf70) bg_passive_tab_pane_g1_cp4

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp4

0xbf79,	// (0x0000bf79) bg_passive_tab_pane_g3_cp4

0x227b,	// (0x0000227b) bg_active_tab_pane_g1_cp5

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp5

0x2284,	// (0x00002284) bg_active_tab_pane_g3_cp5

0x227b,	// (0x0000227b) bg_passive_tab_pane_g1_cp5

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp5

0x2284,	// (0x00002284) bg_passive_tab_pane_g3_cp5

0xbf82,	// (0x0000bf82) list_set_graphic_pane_ParamLimits

0xbf82,	// (0x0000bf82) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0xbf94,	// (0x0000bf94) list_set_graphic_pane_g1_ParamLimits

0xbf94,	// (0x0000bf94) list_set_graphic_pane_g1

0xbfa0,	// (0x0000bfa0) list_set_graphic_pane_g2_ParamLimits

0xbfa0,	// (0x0000bfa0) list_set_graphic_pane_g2

0x0001,

0xf492,	// (0x0000f492) list_set_graphic_pane_g_ParamLimits

0xf492,	// (0x0000f492) list_set_graphic_pane_g

0x0009,

0xade9,	// (0x0000ade9) volume_small_pane_cp_g

0x22da,	// (0x000022da) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22da,	// (0x000022da) list_double2_large_graphic_pane_g1_cp2

0x22e6,	// (0x000022e6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22e6,	// (0x000022e6) list_double2_large_graphic_pane_g2_cp2

0x22f7,	// (0x000022f7) list_double2_large_graphic_pane_g3_cp2

0x22ff,	// (0x000022ff) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22ff,	// (0x000022ff) list_double2_large_graphic_pane_t1_cp2

0x2315,	// (0x00002315) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2315,	// (0x00002315) list_double2_large_graphic_pane_t2_cp2

0x4a71,	// (0x00004a71) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a71,	// (0x00004a71) list_double_large_graphic_pane_g1_cp2

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a82,	// (0x00004a82) list_double_large_graphic_pane_g2_cp2

0x2485,	// (0x00002485) list_double_large_graphic_pane_g3_cp2

0x4a93,	// (0x00004a93) list_double_large_graphic_pane_g4_cp

0x4a9b,	// (0x00004a9b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a9b,	// (0x00004a9b) list_double_large_graphic_pane_t1_cp2

0x4ab2,	// (0x00004ab2) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4ab2,	// (0x00004ab2) list_double_large_graphic_pane_t2_cp2

0x2377,	// (0x00002377) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2377,	// (0x00002377) list_double2_graphic_pane_g1_cp2

0x2385,	// (0x00002385) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2385,	// (0x00002385) list_double2_graphic_pane_g2_cp2

0x2396,	// (0x00002396) list_double2_graphic_pane_g3_cp2

0x23a0,	// (0x000023a0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x23a0,	// (0x000023a0) list_double2_graphic_pane_t1_cp2

0x23b6,	// (0x000023b6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x23b6,	// (0x000023b6) list_double2_graphic_pane_t2_cp2

0x23c8,	// (0x000023c8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x23c8,	// (0x000023c8) list_single_number_heading_pane_g1_cp2

0x23d4,	// (0x000023d4) list_single_number_heading_pane_g2_cp2

0x23dc,	// (0x000023dc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23dc,	// (0x000023dc) list_single_number_heading_pane_t1_cp2

0x23f2,	// (0x000023f2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23f2,	// (0x000023f2) list_single_number_heading_pane_t2_cp2

0x2404,	// (0x00002404) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2404,	// (0x00002404) list_single_number_heading_pane_t3_cp2

0x23c8,	// (0x000023c8) list_single_heading_pane_g1_cp2_ParamLimits

0x23c8,	// (0x000023c8) list_single_heading_pane_g1_cp2

0x23d4,	// (0x000023d4) list_single_heading_pane_g2_cp2

0x23dc,	// (0x000023dc) list_single_heading_pane_t1_cp2_ParamLimits

0x23dc,	// (0x000023dc) list_single_heading_pane_t1_cp2

0x4879,	// (0x00004879) list_single_heading_pane_t2_cp2_ParamLimits

0x4879,	// (0x00004879) list_single_heading_pane_t2_cp2

0x47bb,	// (0x000047bb) list_double_graphic_pane_g1_cp2_ParamLimits

0x47bb,	// (0x000047bb) list_double_graphic_pane_g1_cp2

0x47c7,	// (0x000047c7) list_double_graphic_pane_g2_cp2_ParamLimits

0x47c7,	// (0x000047c7) list_double_graphic_pane_g2_cp2

0x47d6,	// (0x000047d6) list_double_graphic_pane_g3_cp2

0x47de,	// (0x000047de) list_double_graphic_pane_t1_cp2_ParamLimits

0x47de,	// (0x000047de) list_double_graphic_pane_t1_cp2

0x47f4,	// (0x000047f4) list_double_graphic_pane_t2_cp2_ParamLimits

0x47f4,	// (0x000047f4) list_double_graphic_pane_t2_cp2

0x2479,	// (0x00002479) list_double_number_pane_g1_cp2_ParamLimits

0x2479,	// (0x00002479) list_double_number_pane_g1_cp2

0x2485,	// (0x00002485) list_double_number_pane_g2_cp2

0x477f,	// (0x0000477f) list_double_number_pane_t1_cp2_ParamLimits

0x477f,	// (0x0000477f) list_double_number_pane_t1_cp2

0x4793,	// (0x00004793) list_double_number_pane_t2_cp2_ParamLimits

0x4793,	// (0x00004793) list_double_number_pane_t2_cp2

0x47a9,	// (0x000047a9) list_double_number_pane_t3_cp2_ParamLimits

0x47a9,	// (0x000047a9) list_double_number_pane_t3_cp2

0x4657,	// (0x00004657) list_single_graphic_pane_g1_cp2_ParamLimits

0x4657,	// (0x00004657) list_single_graphic_pane_g1_cp2

0x24dd,	// (0x000024dd) list_single_graphic_pane_g2_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_graphic_pane_g2_cp2

0x24e9,	// (0x000024e9) list_single_graphic_pane_g3_cp2

0x462d,	// (0x0000462d) list_single_graphic_pane_t1_cp2_ParamLimits

0x462d,	// (0x0000462d) list_single_graphic_pane_t1_cp2

0x24dd,	// (0x000024dd) list_single_number_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_number_pane_g1_cp2

0x24e9,	// (0x000024e9) list_single_number_pane_g2_cp2

0x462d,	// (0x0000462d) list_single_number_pane_t1_cp2_ParamLimits

0x462d,	// (0x0000462d) list_single_number_pane_t1_cp2

0x4643,	// (0x00004643) list_single_number_pane_t2_cp2_ParamLimits

0x4643,	// (0x00004643) list_single_number_pane_t2_cp2

0x22e6,	// (0x000022e6) list_double2_pane_g1_cp2_ParamLimits

0x22e6,	// (0x000022e6) list_double2_pane_g1_cp2

0x22f7,	// (0x000022f7) list_double2_pane_g2_cp2

0x2451,	// (0x00002451) list_double2_pane_t1_cp2_ParamLimits

0x2451,	// (0x00002451) list_double2_pane_t1_cp2

0x2467,	// (0x00002467) list_double2_pane_t2_cp2_ParamLimits

0x2467,	// (0x00002467) list_double2_pane_t2_cp2

0x2479,	// (0x00002479) list_double_pane_g1_cp2_ParamLimits

0x2479,	// (0x00002479) list_double_pane_g1_cp2

0x2485,	// (0x00002485) list_double_pane_g2_cp2

0x248d,	// (0x0000248d) list_double_pane_t1_cp2_ParamLimits

0x248d,	// (0x0000248d) list_double_pane_t1_cp2

0x24a3,	// (0x000024a3) list_double_pane_t2_cp2_ParamLimits

0x24a3,	// (0x000024a3) list_double_pane_t2_cp2

0x24cd,	// (0x000024cd) list_single_pane_cp2_g3

0x24dd,	// (0x000024dd) list_single_pane_g1_cp2_ParamLimits

0x24dd,	// (0x000024dd) list_single_pane_g1_cp2

0x24e9,	// (0x000024e9) list_single_pane_g2_cp2

0x24f1,	// (0x000024f1) list_single_pane_t1_cp2_ParamLimits

0x24f1,	// (0x000024f1) list_single_pane_t1_cp2

0x2509,	// (0x00002509) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2509,	// (0x00002509) list_single_large_graphic_pane_g1_cp2

0x2515,	// (0x00002515) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2515,	// (0x00002515) list_single_large_graphic_pane_g2_cp2

0x2521,	// (0x00002521) list_single_large_graphic_pane_g3_cp2

0x2529,	// (0x00002529) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2529,	// (0x00002529) list_single_large_graphic_pane_g4_cp1

0x2543,	// (0x00002543) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2543,	// (0x00002543) list_single_large_graphic_pane_t1_cp2

0x44a6,	// (0x000044a6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x44a6,	// (0x000044a6) list_single_graphic_heading_pane_g1_cp2

0x4473,	// (0x00004473) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4473,	// (0x00004473) list_single_graphic_heading_pane_g4_cp2

0x24e9,	// (0x000024e9) list_single_graphic_heading_pane_g5_cp2

0x44b2,	// (0x000044b2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x44b2,	// (0x000044b2) list_single_graphic_heading_pane_t1_cp2

0x44c8,	// (0x000044c8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x44c8,	// (0x000044c8) list_single_graphic_heading_pane_t2_cp2

0x4467,	// (0x00004467) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4467,	// (0x00004467) list_single_2graphic_pane_g1_cp2

0x4473,	// (0x00004473) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4473,	// (0x00004473) list_single_2graphic_pane_g2_cp2

0x24e9,	// (0x000024e9) list_single_2graphic_pane_g3_cp2

0x4484,	// (0x00004484) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4484,	// (0x00004484) list_single_2graphic_pane_g4_cp2

0x4490,	// (0x00004490) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4490,	// (0x00004490) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x403f,	// (0x0000403f) list_highlight_pane_g1_cp1

0x4047,	// (0x00004047) list_highlight_pane_g2_cp1

0x404f,	// (0x0000404f) list_highlight_pane_g3_cp1

0x4057,	// (0x00004057) list_highlight_pane_g4_cp1

0x405f,	// (0x0000405f) list_highlight_pane_g5_cp1

0x4067,	// (0x00004067) list_highlight_pane_g6_cp1

0x406f,	// (0x0000406f) list_highlight_pane_g7_cp1

0x4077,	// (0x00004077) list_highlight_pane_g8_cp1

0x407f,	// (0x0000407f) list_highlight_pane_g9_cp1

0xcdfb,	// (0x0000cdfb) form_field_slider_pane_t3

0xce09,	// (0x0000ce09) form_field_slider_pane_t4

0x3f7b,	// (0x00003f7b) slider_form_pane_ParamLimits

0x3f7b,	// (0x00003f7b) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x48c3,	// (0x000048c3) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xac14,	// (0x0000ac14) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x2559,	// (0x00002559) text_digital

0x2568,	// (0x00002568) text_primary

0x2577,	// (0x00002577) text_primary_small

0x2586,	// (0x00002586) text_secondary

0x2595,	// (0x00002595) text_title

0x51b2,	// (0x000051b2) bg_passive_tab_pane_g1_cp3_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp3_srt

0x51bb,	// (0x000051bb) bg_passive_tab_pane_g3_cp3_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp3_srt

0x51c4,	// (0x000051c4) tabs_4_active_pane_srt_g1

0xd317,	// (0x0000d317) tabs_4_active_pane_srt_t1_ParamLimits

0xd317,	// (0x0000d317) tabs_4_active_pane_srt_t1

0x51b2,	// (0x000051b2) bg_active_tab_pane_g1_cp3_copy1

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp3_copy1

0x51bb,	// (0x000051bb) bg_active_tab_pane_g3_cp3_copy1

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_active_pane_srt

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) tabs_2_long_passive_pane_srt

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp4_srt

0x4d7f,	// (0x00004d7f) bg_passive_tab_pane_g1_cp4_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp4_srt

0x4d88,	// (0x00004d88) bg_passive_tab_pane_g3_cp4_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_srt

0xd0f8,	// (0x0000d0f8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd0f8,	// (0x0000d0f8) tabs_2_long_active_pane_srt_t1

0x4d7f,	// (0x00004d7f) bg_active_tab_pane_g1_cp4_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp4_srt

0x4d88,	// (0x00004d88) bg_active_tab_pane_g3_cp4_srt

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_active_pane_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_cp_srt

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt_ParamLimits

0x0823,	// (0x00000823) tabs_3_long_passive_pane_srt

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp5_srt

0x227b,	// (0x0000227b) bg_passive_tab_pane_g1_cp5_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp5_srt

0x2284,	// (0x00002284) bg_passive_tab_pane_g3_cp5_srt

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_srt

0xd0e2,	// (0x0000d0e2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd0e2,	// (0x0000d0e2) tabs_3_long_active_pane_srt_t1

0x227b,	// (0x0000227b) bg_active_tab_pane_g1_cp5_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp5_srt

0x2284,	// (0x00002284) bg_active_tab_pane_g3_cp5_srt

0x4d5f,	// (0x00004d5f) navi_text_pane_srt_t1

0x4d57,	// (0x00004d57) navi_icon_pane_srt_g1

0x2811,	// (0x00002811) midp_editing_number_pane_srt

0x25a4,	// (0x000025a4) midp_ticker_pane_srt

0x2819,	// (0x00002819) midp_ticker_pane_srt_g1

0x2821,	// (0x00002821) midp_ticker_pane_srt_g2

0x0001,

0xaaa5,	// (0x0000aaa5) midp_ticker_pane_srt_g

0x2829,	// (0x00002829) midp_ticker_pane_srt_t1

0x4d48,	// (0x00004d48) midp_editing_number_pane_t1_copy1

0xbfc4,	// (0x0000bfc4) listscroll_midp_pane

0xbfc4,	// (0x0000bfc4) midp_form_pane

0x261a,	// (0x0000261a) midp_info_popup_window_ParamLimits

0x261a,	// (0x0000261a) midp_info_popup_window

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50_ParamLimits

0x15aa,	// (0x000015aa) bg_popup_sub_pane_cp50

0x3c77,	// (0x00003c77) listscroll_midp_info_pane_ParamLimits

0x3c77,	// (0x00003c77) listscroll_midp_info_pane

0x3c5f,	// (0x00003c5f) listscroll_form_midp_pane_ParamLimits

0x3c5f,	// (0x00003c5f) listscroll_form_midp_pane

0x3c6b,	// (0x00003c6b) scroll_bar_cp050

0xcdef,	// (0x0000cdef) list_midp_pane

0x5e9c,	// (0x00005e9c) signal_pane_g2_cp

0x3b79,	// (0x00003b79) listscroll_midp_info_pane_t1_ParamLimits

0x3b79,	// (0x00003b79) listscroll_midp_info_pane_t1

0x3b91,	// (0x00003b91) listscroll_midp_info_pane_t2_ParamLimits

0x3b91,	// (0x00003b91) listscroll_midp_info_pane_t2

0x3bcf,	// (0x00003bcf) listscroll_midp_info_pane_t3_ParamLimits

0x3bcf,	// (0x00003bcf) listscroll_midp_info_pane_t3

0x3c09,	// (0x00003c09) listscroll_midp_info_pane_t4_ParamLimits

0x3c09,	// (0x00003c09) listscroll_midp_info_pane_t4

0x0003,

0xab4f,	// (0x0000ab4f) listscroll_midp_info_pane_t_ParamLimits

0xab4f,	// (0x0000ab4f) listscroll_midp_info_pane_t

0x166c,	// (0x0000166c) scroll_pane_cp21

0x3b17,	// (0x00003b17) form_midp_field_choice_group_pane

0x3b20,	// (0x00003b20) form_midp_field_text_pane

0x3b5f,	// (0x00003b5f) form_midp_field_time_pane

0x3b67,	// (0x00003b67) form_midp_gauge_slider_pane

0x3b70,	// (0x00003b70) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcdd6,	// (0x0000cdd6) list_single_midp_pane_ParamLimits

0xcdd6,	// (0x0000cdd6) list_single_midp_pane

0xcdb4,	// (0x0000cdb4) form_midp_field_text_pane_t1

0x37fb,	// (0x000037fb) input_focus_pane_cp050

0x3ad7,	// (0x00003ad7) list_midp_form_text_pane

0x3a6f,	// (0x00003a6f) form_midp_field_choice_group_pane_t1

0x3a7d,	// (0x00003a7d) input_focus_pane_cp051

0x3a91,	// (0x00003a91) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a53,	// (0x00003a53) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a61,	// (0x00003a61) form_midp_field_time_pane_t2

0x0001,

0x26c8,	// (0x000026c8) aid_navinavi_width_2_pane

0xab4a,	// (0x0000ab4a) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3a13,	// (0x00003a13) form_midp_gauge_slider_pane_t1

0x3a21,	// (0x00003a21) form_midp_gauge_slider_pane_t2

0xcd98,	// (0x0000cd98) form_midp_gauge_slider_pane_t3

0xcda6,	// (0x0000cda6) form_midp_gauge_slider_pane_t4

0x0003,

0xf4d3,	// (0x0000f4d3) form_midp_gauge_slider_pane_t

0x3a4b,	// (0x00003a4b) form_midp_slider_pane

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041_ParamLimits

0x04fd,	// (0x000004fd) bg_input_focus_pane_cp041

0x39e0,	// (0x000039e0) form_midp_gauge_wait_pane_t1_ParamLimits

0x39e0,	// (0x000039e0) form_midp_gauge_wait_pane_t1

0x39f2,	// (0x000039f2) form_midp_gauge_wait_pane_t2_ParamLimits

0x39f2,	// (0x000039f2) form_midp_gauge_wait_pane_t2

0x0001,

0xab3c,	// (0x0000ab3c) form_midp_gauge_wait_pane_t_ParamLimits

0xab3c,	// (0x0000ab3c) form_midp_gauge_wait_pane_t

0x3a04,	// (0x00003a04) form_midp_wait_pane_ParamLimits

0x3a04,	// (0x00003a04) form_midp_wait_pane

0x39aa,	// (0x000039aa) form_midp_image_pane_g1

0x39b3,	// (0x000039b3) form_midp_image_pane_t1

0x39c2,	// (0x000039c2) form_midp_image_pane_t2

0x39d1,	// (0x000039d1) form_midp_image_pane_t3

0x0002,

0xab35,	// (0x0000ab35) form_midp_image_pane_t

0x3992,	// (0x00003992) list_single_midp_pane_g1

0x399b,	// (0x0000399b) list_single_midp_pane_t1

0xcd83,	// (0x0000cd83) list_midp_form_item_pane_ParamLimits

0xcd83,	// (0x0000cd83) list_midp_form_item_pane

0x2670,	// (0x00002670) list_midp_form_item_pane_t1

0x267f,	// (0x0000267f) midp_ticker_pane_g1

0x268b,	// (0x0000268b) midp_ticker_pane_g2

0x0001,

0xaa8b,	// (0x0000aa8b) midp_ticker_pane_g

0xc06c,	// (0x0000c06c) midp_ticker_pane_t1

0xd27f,	// (0x0000d27f) midp_editing_number_pane_t1

0x5022,	// (0x00005022) midp_editing_number_pane

0x5031,	// (0x00005031) midp_ticker_pane

0x4d10,	// (0x00004d10) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4d18,	// (0x00004d18) listscroll_ai_message_pane

0x4c9a,	// (0x00004c9a) ai_message_heading_pane_g1_ParamLimits

0x4c9a,	// (0x00004c9a) ai_message_heading_pane_g1

0x4ca6,	// (0x00004ca6) ai_message_heading_pane_g2_ParamLimits

0x4ca6,	// (0x00004ca6) ai_message_heading_pane_g2

0x4cb2,	// (0x00004cb2) ai_message_heading_pane_g3_ParamLimits

0x4cb2,	// (0x00004cb2) ai_message_heading_pane_g3

0x4cbe,	// (0x00004cbe) ai_message_heading_pane_g4_ParamLimits

0x4cbe,	// (0x00004cbe) ai_message_heading_pane_g4

0x0003,

0xac76,	// (0x0000ac76) ai_message_heading_pane_g_ParamLimits

0xac76,	// (0x0000ac76) ai_message_heading_pane_g

0x4cca,	// (0x00004cca) ai_message_heading_pane_t1_ParamLimits

0x4cca,	// (0x00004cca) ai_message_heading_pane_t1

0x4ce4,	// (0x00004ce4) ai_message_heading_pane_t2_ParamLimits

0x4ce4,	// (0x00004ce4) ai_message_heading_pane_t2

0x0001,

0xac7f,	// (0x0000ac7f) ai_message_heading_pane_t_ParamLimits

0xac7f,	// (0x0000ac7f) ai_message_heading_pane_t

0x4cf6,	// (0x00004cf6) bg_popup_heading_pane_cp1_ParamLimits

0x4cf6,	// (0x00004cf6) bg_popup_heading_pane_cp1

0x4c88,	// (0x00004c88) list_ai_message_pane_ParamLimits

0x4c88,	// (0x00004c88) list_ai_message_pane

0x166c,	// (0x0000166c) scroll_pane_cp10

0x4bd4,	// (0x00004bd4) list_ai_message_pane_g1

0x4bdc,	// (0x00004bdc) list_ai_message_pane_g2

0x0001,

0xac53,	// (0x0000ac53) list_ai_message_pane_g

0x4be4,	// (0x00004be4) list_ai_message_pane_t1_ParamLimits

0x4be4,	// (0x00004be4) list_ai_message_pane_t1

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t2_ParamLimits

0x4bf9,	// (0x00004bf9) list_ai_message_pane_t2

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t3_ParamLimits

0x4c0e,	// (0x00004c0e) list_ai_message_pane_t3

0x4c23,	// (0x00004c23) list_ai_message_pane_t4_ParamLimits

0x4c23,	// (0x00004c23) list_ai_message_pane_t4

0x0003,

0xac58,	// (0x0000ac58) list_ai_message_pane_t_ParamLimits

0xac58,	// (0x0000ac58) list_ai_message_pane_t

0xd0af,	// (0x0000d0af) cell_ai_soft_ind_pane_ParamLimits

0xd0af,	// (0x0000d0af) cell_ai_soft_ind_pane

0x26a9,	// (0x000026a9) cell_ai_soft_ind_pane_g1_ParamLimits

0x26a9,	// (0x000026a9) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x26b6,	// (0x000026b6) text_secondary_cp56_ParamLimits

0x26b6,	// (0x000026b6) text_secondary_cp56

0x4b94,	// (0x00004b94) example_general_pane_ParamLimits

0x4b94,	// (0x00004b94) example_general_pane

0x4ba0,	// (0x00004ba0) example_parent_pane_g1_ParamLimits

0x4ba0,	// (0x00004ba0) example_parent_pane_g1

0x4bac,	// (0x00004bac) example_parent_pane_t1_ParamLimits

0x4bac,	// (0x00004bac) example_parent_pane_t1

0xc5e8,	// (0x0000c5e8) popup_preview_text_window_ParamLimits

0xc5e8,	// (0x0000c5e8) popup_preview_text_window

0x24d5,	// (0x000024d5) list_single_pane_cp2_g4

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane_ParamLimits

0x08d9,	// (0x000008d9) bg_popup_preview_window_pane

0x48cb,	// (0x000048cb) popup_preview_text_window_t1_ParamLimits

0x48cb,	// (0x000048cb) popup_preview_text_window_t1

0x48e9,	// (0x000048e9) popup_preview_text_window_t2_ParamLimits

0x48e9,	// (0x000048e9) popup_preview_text_window_t2

0x4932,	// (0x00004932) popup_preview_text_window_t3_ParamLimits

0x4932,	// (0x00004932) popup_preview_text_window_t3

0x4977,	// (0x00004977) popup_preview_text_window_t4_ParamLimits

0x4977,	// (0x00004977) popup_preview_text_window_t4

0x0004,

0xac27,	// (0x0000ac27) popup_preview_text_window_t_ParamLimits

0xac27,	// (0x0000ac27) popup_preview_text_window_t

0x49f5,	// (0x000049f5) scroll_pane_cp11

0x366d,	// (0x0000366d) bg_popup_preview_window_pane_g1

0x488b,	// (0x0000488b) bg_popup_preview_window_pane_g2

0x4893,	// (0x00004893) bg_popup_preview_window_pane_g3

0x489b,	// (0x0000489b) bg_popup_preview_window_pane_g4

0x48a3,	// (0x000048a3) bg_popup_preview_window_pane_g5

0x48ab,	// (0x000048ab) bg_popup_preview_window_pane_g6

0x48b3,	// (0x000048b3) bg_popup_preview_window_pane_g7

0x48bb,	// (0x000048bb) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc564,	// (0x0000c564) popup_midp_note_alarm_window_ParamLimits

0xc564,	// (0x0000c564) popup_midp_note_alarm_window

0x1347,	// (0x00001347) data_form_pane_ParamLimits

0xbbd3,	// (0x0000bbd3) form_field_data_pane_g1

0xbbdd,	// (0x0000bbdd) form_field_data_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_ParamLimits

0x1383,	// (0x00001383) data_form_wide_pane_ParamLimits

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1

0x13bb,	// (0x000013bb) form_field_data_wide_pane_t1_ParamLimits

0x0b85,	// (0x00000b85) input_focus_pane_cp6_ParamLimits

0xbd41,	// (0x0000bd41) input_popup_find_pane_g1_ParamLimits

0xbd41,	// (0x0000bd41) input_popup_find_pane_g1

0x199c,	// (0x0000199c) aid_navi_side_left_pane

0x19b1,	// (0x000019b1) aid_navi_side_right_pane

0x413a,	// (0x0000413a) bg_popup_window_pane_cp30_ParamLimits

0x413a,	// (0x0000413a) bg_popup_window_pane_cp30

0x41b4,	// (0x000041b4) popup_midp_note_alarm_window_g1_ParamLimits

0x41b4,	// (0x000041b4) popup_midp_note_alarm_window_g1

0x41e4,	// (0x000041e4) popup_midp_note_alarm_window_t1_ParamLimits

0x41e4,	// (0x000041e4) popup_midp_note_alarm_window_t1

0x4285,	// (0x00004285) popup_midp_note_alarm_window_t2_ParamLimits

0x4285,	// (0x00004285) popup_midp_note_alarm_window_t2

0x4333,	// (0x00004333) popup_midp_note_alarm_window_t3_ParamLimits

0x4333,	// (0x00004333) popup_midp_note_alarm_window_t3

0x4365,	// (0x00004365) popup_midp_note_alarm_window_t4_ParamLimits

0x4365,	// (0x00004365) popup_midp_note_alarm_window_t4

0x438b,	// (0x0000438b) popup_midp_note_alarm_window_t5_ParamLimits

0x438b,	// (0x0000438b) popup_midp_note_alarm_window_t5

0x000a,

0xabc4,	// (0x0000abc4) popup_midp_note_alarm_window_t_ParamLimits

0xabc4,	// (0x0000abc4) popup_midp_note_alarm_window_t

0x4437,	// (0x00004437) wait_bar_pane_cp1_ParamLimits

0x4437,	// (0x00004437) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3e20,	// (0x00003e20) wait_border_pane_g1_copy1

0x13d5,	// (0x000013d5) form_field_popup_pane_g1

0xbbf7,	// (0x0000bbf7) form_field_popup_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_ParamLimits

0x13f5,	// (0x000013f5) list_form_pane_ParamLimits

0x1401,	// (0x00001401) form_field_popup_wide_pane_g1

0x1409,	// (0x00001409) form_field_popup_wide_pane_t1_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_ParamLimits

0x141e,	// (0x0000141e) list_form_wide_pane_ParamLimits

0x523e,	// (0x0000523e) aid_size_cell_graphic_pane

0xbc76,	// (0x0000bc76) data_form_pane_t1_ParamLimits

0xd263,	// (0x0000d263) data_form_wide_pane_t1_ParamLimits

0xc99d,	// (0x0000c99d) bg_status_flat_pane

0xb40f,	// (0x0000b40f) title_pane_t1_ParamLimits

0x04c5,	// (0x000004c5) title_pane_t2_ParamLimits

0x04eb,	// (0x000004eb) title_pane_t3_ParamLimits

0xf3a3,	// (0x0000f3a3) title_pane_t_ParamLimits

0x1cb5,	// (0x00001cb5) level_1_signal_ParamLimits

0x1cc2,	// (0x00001cc2) level_2_signal_ParamLimits

0x1ccf,	// (0x00001ccf) level_3_signal_ParamLimits

0x1cdc,	// (0x00001cdc) level_4_signal_ParamLimits

0x1ce9,	// (0x00001ce9) level_5_signal_ParamLimits

0x1cf6,	// (0x00001cf6) level_6_signal_ParamLimits

0x1d03,	// (0x00001d03) level_7_signal_ParamLimits

0x1cb5,	// (0x00001cb5) level_1_battery_ParamLimits

0x1cc2,	// (0x00001cc2) level_2_battery_ParamLimits

0x1ccf,	// (0x00001ccf) level_3_battery_ParamLimits

0x1cdc,	// (0x00001cdc) level_4_battery_ParamLimits

0x1ce9,	// (0x00001ce9) level_5_battery_ParamLimits

0x1cf6,	// (0x00001cf6) level_6_battery_ParamLimits

0x1d03,	// (0x00001d03) level_7_battery_ParamLimits

0x403f,	// (0x0000403f) bg_status_flat_pane_g1

0x4047,	// (0x00004047) bg_status_flat_pane_g2

0x404f,	// (0x0000404f) bg_status_flat_pane_g3

0x4057,	// (0x00004057) bg_status_flat_pane_g4

0x405f,	// (0x0000405f) bg_status_flat_pane_g5

0x4067,	// (0x00004067) bg_status_flat_pane_g6

0x406f,	// (0x0000406f) bg_status_flat_pane_g7

0xb4a3,	// (0x0000b4a3) tabs_3_active_pane_t1_ParamLimits

0xb4a3,	// (0x0000b4a3) tabs_3_passive_pane_t1_ParamLimits

0xb4bd,	// (0x0000b4bd) tabs_4_active_pane_t1_ParamLimits

0xb4bd,	// (0x0000b4bd) tabs_4_1_passive_pane_t1_ParamLimits

0xbd57,	// (0x0000bd57) tabs_2_active_pane_t1_ParamLimits

0xbd57,	// (0x0000bd57) tabs_2_passive_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp4_ParamLimits

0xbd69,	// (0x0000bd69) tabs_2_long_active_pane_t1_ParamLimits

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp4_ParamLimits

0x3728,	// (0x00003728) list_single_midp_graphic_pane_t1_ParamLimits

0x04fd,	// (0x000004fd) bg_active_tab_pane_cp5_ParamLimits

0xbd7c,	// (0x0000bd7c) tabs_3_long_active_pane_t1_ParamLimits

0x2b1d,	// (0x00002b1d) bg_passive_tab_pane_cp5_ParamLimits

0x3728,	// (0x00003728) list_single_midp_graphic_pane_t1

0xc99d,	// (0x0000c99d) bg_status_flat_pane_ParamLimits

0x3252,	// (0x00003252) indicator_pane_cp2_ParamLimits

0x3252,	// (0x00003252) indicator_pane_cp2

0xcb14,	// (0x0000cb14) navi_pane_srt_ParamLimits

0xcb14,	// (0x0000cb14) navi_pane_srt

0x339a,	// (0x0000339a) popup_clock_digital_analogue_window_cp1

0x0685,	// (0x00000685) indicator_pane_t1

0x25a4,	// (0x000025a4) copy_highlight_pane

0x25a4,	// (0x000025a4) cursor_graphics_pane

0x25a4,	// (0x000025a4) graphic_within_text_pane

0x25a4,	// (0x000025a4) link_highlight_pane

0x49b8,	// (0x000049b8) popup_preview_text_window_t5_ParamLimits

0x49b8,	// (0x000049b8) popup_preview_text_window_t5

0x26d0,	// (0x000026d0) cursor_digital_pane

0x26d0,	// (0x000026d0) cursor_primary_pane

0x26e1,	// (0x000026e1) cursor_primary_small_pane

0x26e9,	// (0x000026e9) cursor_secondary_pane

0x26f1,	// (0x000026f1) cursor_title_pane

0x26d0,	// (0x000026d0) link_highlight_digital_pane

0x26d8,	// (0x000026d8) link_highlight_primary_pane

0x26e1,	// (0x000026e1) link_highlight_primary_small_pane

0x26e9,	// (0x000026e9) link_highlight_secondary_pane

0x26f1,	// (0x000026f1) link_highlight_title_pane

0x26d0,	// (0x000026d0) copy_highlight_digital_pane

0x26d0,	// (0x000026d0) copy_highlight_primary_pane

0x26e1,	// (0x000026e1) copy_highlight_primary_small_pane

0x26e9,	// (0x000026e9) copy_highlight_secondary_pane

0x26f1,	// (0x000026f1) copy_highlight_title_pane

0x26e9,	// (0x000026e9) graphic_text_digital_pane

0x40dd,	// (0x000040dd) graphic_text_primary_pane

0x40e6,	// (0x000040e6) graphic_text_primary_small_pane

0x26e1,	// (0x000026e1) graphic_text_secondary_pane

0x26d0,	// (0x000026d0) graphic_text_title_pane

0xc07e,	// (0x0000c07e) cursor_primary_pane_g1

0x40cf,	// (0x000040cf) cursor_text_primary_t1

0xce2b,	// (0x0000ce2b) cursor_primary_small_pane_g1

0x40c1,	// (0x000040c1) cursor_text_primary_small_t1

0xce21,	// (0x0000ce21) cursor_primary_small_pane_g1_copy1

0x40a9,	// (0x000040a9) cursor_text_primary_small_t1_copy1

0x4087,	// (0x00004087) cursor_text_title_t1

0xce17,	// (0x0000ce17) cursor_title_pane_g1

0xc07e,	// (0x0000c07e) cursor_digital_pane_g1

0x2703,	// (0x00002703) cursor_text_digital_t1

0x2728,	// (0x00002728) link_highlight_primary_pane_g1

0x4030,	// (0x00004030) link_highlight_primary_pane_t1

0x2711,	// (0x00002711) link_highlight_primary_small_pane_g1

0x2719,	// (0x00002719) link_highlight_primary_small_pane_t1

0x2728,	// (0x00002728) link_highlight_secondary_pane_g1

0x2730,	// (0x00002730) link_highlight_secondary_pane_t1

0x3fa4,	// (0x00003fa4) link_highlight_title_pane_g1

0x3fac,	// (0x00003fac) link_highlight_title_pane_t1

0x3f8d,	// (0x00003f8d) link_highlight_digital_pane_g1

0x3f95,	// (0x00003f95) link_highlight_digital_pane_t1

0x3e65,	// (0x00003e65) copy_highlight_primary_pane_g1

0x3e6d,	// (0x00003e6d) copy_highlight_primary_pane_t1

0x3e3f,	// (0x00003e3f) copy_highlight_primary_small_pane_g1

0x3e56,	// (0x00003e56) copy_highlight_primary_small_pane_t1

0x273f,	// (0x0000273f) copy_highlight_secondary_pane_g1

0x2747,	// (0x00002747) copy_highlight_secondary_pane_t1

0x3e3f,	// (0x00003e3f) copy_highlight_title_pane_g1

0x3e47,	// (0x00003e47) copy_highlight_title_pane_t1

0x3e65,	// (0x00003e65) copy_highlight_digital_pane_g1

0x54c0,	// (0x000054c0) copy_highlight_digital_pane_t1

0x5414,	// (0x00005414) graphic_text_primary_pane_g1

0x54a4,	// (0x000054a4) graphic_text_primary_pane_t1

0x54b2,	// (0x000054b2) graphic_text_primary_pane_t2

0x0001,

0xacf3,	// (0x0000acf3) graphic_text_primary_pane_t

0x5480,	// (0x00005480) graphic_text_primary_small_pane_g1

0x5488,	// (0x00005488) graphic_text_primary_small_pane_t1

0x5496,	// (0x00005496) graphic_text_primary_small_pane_t2

0x0001,

0xacee,	// (0x0000acee) graphic_text_primary_small_pane_t

0x545c,	// (0x0000545c) graphic_text_secondary_pane_g1

0x5464,	// (0x00005464) graphic_text_secondary_pane_t1

0x5472,	// (0x00005472) graphic_text_secondary_pane_t2

0x0001,

0xace9,	// (0x0000ace9) graphic_text_secondary_pane_t

0x5438,	// (0x00005438) graphic_text_title_pane_g1

0x5440,	// (0x00005440) graphic_text_title_pane_t1

0x544e,	// (0x0000544e) graphic_text_title_pane_t2

0x0001,

0xace4,	// (0x0000ace4) graphic_text_title_pane_t

0x5414,	// (0x00005414) graphic_text_digital_pane_g1

0x541c,	// (0x0000541c) graphic_text_digital_pane_t1

0x542a,	// (0x0000542a) graphic_text_digital_pane_t2

0x0001,

0xacdf,	// (0x0000acdf) graphic_text_digital_pane_t

0x04fd,	// (0x000004fd) navi_icon_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04fd,	// (0x000004fd) navi_text_pane_srt_ParamLimits

0x04fd,	// (0x000004fd) navi_text_pane_srt

0x53df,	// (0x000053df) navi_navi_icon_text_pane_srt

0x53e7,	// (0x000053e7) navi_navi_pane_srt_g1_ParamLimits

0x53e7,	// (0x000053e7) navi_navi_pane_srt_g1

0x53f9,	// (0x000053f9) navi_navi_pane_srt_g2_ParamLimits

0x53f9,	// (0x000053f9) navi_navi_pane_srt_g2

0x0001,

0xacda,	// (0x0000acda) navi_navi_pane_srt_g_ParamLimits

0xacda,	// (0x0000acda) navi_navi_pane_srt_g

0x540b,	// (0x0000540b) navi_navi_tabs_pane_srt

0x53df,	// (0x000053df) navi_navi_text_pane_srt

0x53df,	// (0x000053df) navi_navi_volume_pane_srt

0x53d0,	// (0x000053d0) navi_navi_text_pane_srt_t1

0x53ab,	// (0x000053ab) navi_navi_volume_pane_srt_g1

0x53b3,	// (0x000053b3) volume_small_pane_srt_ParamLimits

0x53b3,	// (0x000053b3) volume_small_pane_srt

0x2756,	// (0x00002756) volume_small_pane_srt_g1_ParamLimits

0x2756,	// (0x00002756) volume_small_pane_srt_g1

0x2766,	// (0x00002766) volume_small_pane_srt_g2_ParamLimits

0x2766,	// (0x00002766) volume_small_pane_srt_g2

0x2777,	// (0x00002777) volume_small_pane_srt_g3_ParamLimits

0x2777,	// (0x00002777) volume_small_pane_srt_g3

0x2788,	// (0x00002788) volume_small_pane_srt_g4_ParamLimits

0x2788,	// (0x00002788) volume_small_pane_srt_g4

0x2799,	// (0x00002799) volume_small_pane_srt_g5_ParamLimits

0x2799,	// (0x00002799) volume_small_pane_srt_g5

0x27aa,	// (0x000027aa) volume_small_pane_srt_g6_ParamLimits

0x27aa,	// (0x000027aa) volume_small_pane_srt_g6

0x27bb,	// (0x000027bb) volume_small_pane_srt_g7_ParamLimits

0x27bb,	// (0x000027bb) volume_small_pane_srt_g7

0x27cc,	// (0x000027cc) volume_small_pane_srt_g8_ParamLimits

0x27cc,	// (0x000027cc) volume_small_pane_srt_g8

0x27dd,	// (0x000027dd) volume_small_pane_srt_g9_ParamLimits

0x27dd,	// (0x000027dd) volume_small_pane_srt_g9

0x27ee,	// (0x000027ee) volume_small_pane_srt_g10_ParamLimits

0x27ee,	// (0x000027ee) volume_small_pane_srt_g10

0x0009,

0xaa90,	// (0x0000aa90) volume_small_pane_srt_g_ParamLimits

0xaa90,	// (0x0000aa90) volume_small_pane_srt_g

0x0982,	// (0x00000982) query_popup_data_pane_cp2

0x5399,	// (0x00005399) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5399,	// (0x00005399) navi_navi_icon_text_pane_srt_t1

0x40dd,	// (0x000040dd) navi_tabs_2_long_pane_srt

0x40dd,	// (0x000040dd) navi_tabs_2_pane_srt

0x40dd,	// (0x000040dd) navi_tabs_3_long_pane_srt

0x40dd,	// (0x000040dd) navi_tabs_3_pane_srt

0x40dd,	// (0x000040dd) navi_tabs_4_pane_srt

0x5371,	// (0x00005371) tabs_2_active_pane_srt_ParamLimits

0x5371,	// (0x00005371) tabs_2_active_pane_srt

0x5381,	// (0x00005381) tabs_2_passive_pane_srt_ParamLimits

0x5381,	// (0x00005381) tabs_2_passive_pane_srt

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp1_srt

0x5345,	// (0x00005345) bg_passive_tab_pane_g1_cp1_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp1_srt

0x534e,	// (0x0000534e) bg_passive_tab_pane_g3_cp1_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp1_srt

0x5357,	// (0x00005357) tabs_2_active_pane_srt_g1

0xd393,	// (0x0000d393) tabs_2_active_pane_srt_t1_ParamLimits

0xd393,	// (0x0000d393) tabs_2_active_pane_srt_t1

0x5345,	// (0x00005345) bg_active_tab_pane_g1_cp1_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp1_srt

0x534e,	// (0x0000534e) bg_active_tab_pane_g3_cp1_srt

0x5312,	// (0x00005312) tabs_3_active_pane_srt_ParamLimits

0x5312,	// (0x00005312) tabs_3_active_pane_srt

0x5323,	// (0x00005323) tabs_3_passive_pane_cp_srt_ParamLimits

0x5323,	// (0x00005323) tabs_3_passive_pane_cp_srt

0x5334,	// (0x00005334) tabs_3_passive_pane_srt_ParamLimits

0x5334,	// (0x00005334) tabs_3_passive_pane_srt

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37fb,	// (0x000037fb) bg_passive_tab_pane_cp2_srt

0x27ff,	// (0x000027ff) bg_passive_tab_pane_g1_cp2_srt

0x20b0,	// (0x000020b0) bg_passive_tab_pane_g2_cp2_srt

0x2808,	// (0x00002808) bg_passive_tab_pane_g3_cp2_srt

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt_ParamLimits

0x0823,	// (0x00000823) bg_active_tab_pane_cp2_srt

0x52f8,	// (0x000052f8) tabs_3_active_pane_srt_g1

0xd37d,	// (0x0000d37d) tabs_3_active_pane_srt_t1_ParamLimits

0xd37d,	// (0x0000d37d) tabs_3_active_pane_srt_t1

0x27ff,	// (0x000027ff) bg_active_tab_pane_g1_cp2_srt

0x20b0,	// (0x000020b0) bg_active_tab_pane_g2_cp2_srt

0x2808,	// (0x00002808) bg_active_tab_pane_g3_cp2_srt

0x52b0,	// (0x000052b0) tabs_4_active_pane_srt_ParamLimits

0x52b0,	// (0x000052b0) tabs_4_active_pane_srt

0x52c2,	// (0x000052c2) tabs_4_passive_pane_cp2_srt_ParamLimits

0x52c2,	// (0x000052c2) tabs_4_passive_pane_cp2_srt

0x2aa3,	// (0x00002aa3) aid_size_cell_toolbar

0x4e68,	// (0x00004e68) main_idle_act_pane_ParamLimits

0x2cc2,	// (0x00002cc2) popup_large_graphic_colour_window_ParamLimits

0xc868,	// (0x0000c868) popup_toolbar_window_ParamLimits

0xc868,	// (0x0000c868) popup_toolbar_window

0x506e,	// (0x0000506e) list_single_graphic_2heading_pane_ParamLimits

0x506e,	// (0x0000506e) list_single_graphic_2heading_pane

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_prt_pane

0x2b1d,	// (0x00002b1d) bg_wml_button_pane_cp1_ParamLimits

0x2b1d,	// (0x00002b1d) bg_wml_button_pane_cp1

0xcdb4,	// (0x0000cdb4) form_midp_field_text_pane_t1_ParamLimits

0x37fb,	// (0x000037fb) input_focus_pane_cp050_ParamLimits

0x3ad7,	// (0x00003ad7) list_midp_form_text_pane_ParamLimits

0x3a7d,	// (0x00003a7d) input_focus_pane_cp051_ParamLimits

0x3a91,	// (0x00003a91) list_midp_choice_pane_ParamLimits

0xcd4f,	// (0x0000cd4f) list_single_2graphic_pane_cp3_ParamLimits

0xcd4f,	// (0x0000cd4f) list_single_2graphic_pane_cp3

0xcd63,	// (0x0000cd63) list_single_midp_graphic_pane_ParamLimits

0xcd63,	// (0x0000cd63) list_single_midp_graphic_pane

0x34f9,	// (0x000034f9) list_single_graphic_2heading_pane_g1_ParamLimits

0x34f9,	// (0x000034f9) list_single_graphic_2heading_pane_g1

0x3505,	// (0x00003505) list_single_graphic_2heading_pane_g4_ParamLimits

0x3505,	// (0x00003505) list_single_graphic_2heading_pane_g4

0x3511,	// (0x00003511) list_single_graphic_2heading_pane_g5_ParamLimits

0x3511,	// (0x00003511) list_single_graphic_2heading_pane_g5

0x0002,

0xaae3,	// (0x0000aae3) list_single_graphic_2heading_pane_g_ParamLimits

0xaae3,	// (0x0000aae3) list_single_graphic_2heading_pane_g

0x351d,	// (0x0000351d) list_single_graphic_2heading_pane_t1_ParamLimits

0x351d,	// (0x0000351d) list_single_graphic_2heading_pane_t1

0x3531,	// (0x00003531) list_single_graphic_2heading_pane_t2_ParamLimits

0x3531,	// (0x00003531) list_single_graphic_2heading_pane_t2

0x354d,	// (0x0000354d) list_single_graphic_2heading_pane_t3_ParamLimits

0x354d,	// (0x0000354d) list_single_graphic_2heading_pane_t3

0x0002,

0xaaea,	// (0x0000aaea) list_single_graphic_2heading_pane_t_ParamLimits

0xaaea,	// (0x0000aaea) list_single_graphic_2heading_pane_t

0x3565,	// (0x00003565) bg_popup_sub_pane_cp2

0x358f,	// (0x0000358f) grid_toobar_pane

0x35cb,	// (0x000035cb) cell_toolbar_pane_ParamLimits

0x35cb,	// (0x000035cb) cell_toolbar_pane

0x3611,	// (0x00003611) cell_toolbar_pane_g1_ParamLimits

0x3611,	// (0x00003611) cell_toolbar_pane_g1

0x3625,	// (0x00003625) cell_toolbar_pane_g2_ParamLimits

0x3625,	// (0x00003625) cell_toolbar_pane_g2

0x0001,

0xaaf1,	// (0x0000aaf1) cell_toolbar_pane_g_ParamLimits

0xaaf1,	// (0x0000aaf1) cell_toolbar_pane_g

0x3647,	// (0x00003647) grid_highlight_pane_cp2_ParamLimits

0x3647,	// (0x00003647) grid_highlight_pane_cp2

0x3661,	// (0x00003661) toolbar_button_pane

0x366d,	// (0x0000366d) toolbar_button_pane_g1

0x3675,	// (0x00003675) toolbar_button_pane_g2

0x367d,	// (0x0000367d) toolbar_button_pane_g3

0x3685,	// (0x00003685) toolbar_button_pane_g4

0x368d,	// (0x0000368d) toolbar_button_pane_g5

0x3695,	// (0x00003695) toolbar_button_pane_g6

0x369d,	// (0x0000369d) toolbar_button_pane_g7

0x36a5,	// (0x000036a5) toolbar_button_pane_g8

0x36ad,	// (0x000036ad) toolbar_button_pane_g9

0x0009,

0xaaf6,	// (0x0000aaf6) toolbar_button_pane_g

0x36bd,	// (0x000036bd) list_single_2graphic_pane_g1_cp3_ParamLimits

0x36bd,	// (0x000036bd) list_single_2graphic_pane_g1_cp3

0xccb1,	// (0x0000ccb1) list_single_2graphic_pane_g2_cp3_ParamLimits

0xccb1,	// (0x0000ccb1) list_single_2graphic_pane_g2_cp3

0x36da,	// (0x000036da) list_single_2graphic_pane_g3_cp3

0x2073,	// (0x00002073) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2073,	// (0x00002073) list_single_2graphic_pane_g4_cp3

0x36e2,	// (0x000036e2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x36e2,	// (0x000036e2) list_single_2graphic_pane_t1_cp3

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_midp_graphic_pane_g2

0x2aab,	// (0x00002aab) aid_zoom_text_primary

0x2ab3,	// (0x00002ab3) aid_zoom_text_secondary

0x28bc,	// (0x000028bc) status_small_pane_g7_ParamLimits

0x28bc,	// (0x000028bc) status_small_pane_g7

0x28df,	// (0x000028df) status_small_pane_t1_ParamLimits

0xb3eb,	// (0x0000b3eb) title_pane_g2

0x0003,

0xf39a,	// (0x0000f39a) title_pane_g

0xb673,	// (0x0000b673) aid_size_cell_colour_1_pane_ParamLimits

0xb673,	// (0x0000b673) aid_size_cell_colour_1_pane

0xb687,	// (0x0000b687) aid_size_cell_colour_2_pane_ParamLimits

0xb687,	// (0x0000b687) aid_size_cell_colour_2_pane

0xb69b,	// (0x0000b69b) aid_size_cell_colour_3_pane_ParamLimits

0xb69b,	// (0x0000b69b) aid_size_cell_colour_3_pane

0xb6af,	// (0x0000b6af) aid_size_cell_colour_4_pane_ParamLimits

0xb6af,	// (0x0000b6af) aid_size_cell_colour_4_pane

0x18a3,	// (0x000018a3) title_pane_stacon_g1_ParamLimits

0x18a3,	// (0x000018a3) title_pane_stacon_g1

0x3ec4,	// (0x00003ec4) popup_note_wait_window_g3_ParamLimits

0x3ec4,	// (0x00003ec4) popup_note_wait_window_g3

0x3f3a,	// (0x00003f3a) popup_note_wait_window_t5_ParamLimits

0x3f3a,	// (0x00003f3a) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc29a,	// (0x0000c29a) popup_feb_china_hwr_fs_window_ParamLimits

0xc29a,	// (0x0000c29a) popup_feb_china_hwr_fs_window

0xccc2,	// (0x0000ccc2) aid_size_cell_hwr_fs_ParamLimits

0xccc2,	// (0x0000ccc2) aid_size_cell_hwr_fs

0x37fb,	// (0x000037fb) bg_popup_sub_pane_cp3_ParamLimits

0x37fb,	// (0x000037fb) bg_popup_sub_pane_cp3

0xccd7,	// (0x0000ccd7) grid_hwr_fs_pane_ParamLimits

0xccd7,	// (0x0000ccd7) grid_hwr_fs_pane

0x381f,	// (0x0000381f) linegrid_hwr_fs_pane_ParamLimits

0x381f,	// (0x0000381f) linegrid_hwr_fs_pane

0xccef,	// (0x0000ccef) cell_hwr_fs_pane_ParamLimits

0xccef,	// (0x0000ccef) cell_hwr_fs_pane

0x3851,	// (0x00003851) linegrid_hwr_fs_pane_g1_ParamLimits

0x3851,	// (0x00003851) linegrid_hwr_fs_pane_g1

0xcd15,	// (0x0000cd15) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd15,	// (0x0000cd15) linegrid_hwr_fs_pane_g2

0x386f,	// (0x0000386f) linegrid_hwr_fs_pane_g3_ParamLimits

0x386f,	// (0x0000386f) linegrid_hwr_fs_pane_g3

0x387b,	// (0x0000387b) linegrid_hwr_fs_pane_g4_ParamLimits

0x387b,	// (0x0000387b) linegrid_hwr_fs_pane_g4

0x3895,	// (0x00003895) linegrid_hwr_fs_pane_g5_ParamLimits

0x3895,	// (0x00003895) linegrid_hwr_fs_pane_g5

0x0004,

0xf4bf,	// (0x0000f4bf) linegrid_hwr_fs_pane_g_ParamLimits

0xf4bf,	// (0x0000f4bf) linegrid_hwr_fs_pane_g

0x38ab,	// (0x000038ab) cell_hwr_fs_pane_g1_ParamLimits

0x38ab,	// (0x000038ab) cell_hwr_fs_pane_g1

0x3430,	// (0x00003430) cell_hwr_fs_pane_g2_ParamLimits

0x3430,	// (0x00003430) cell_hwr_fs_pane_g2

0xcd27,	// (0x0000cd27) cell_hwr_fs_pane_g3_ParamLimits

0xcd27,	// (0x0000cd27) cell_hwr_fs_pane_g3

0xcd34,	// (0x0000cd34) cell_hwr_fs_pane_g4_ParamLimits

0xcd34,	// (0x0000cd34) cell_hwr_fs_pane_g4

0x0003,

0xf4ca,	// (0x0000f4ca) cell_hwr_fs_pane_g_ParamLimits

0xf4ca,	// (0x0000f4ca) cell_hwr_fs_pane_g

0xcd41,	// (0x0000cd41) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1653,	// (0x00001653) aid_inside_area_popup_secondary

0xcf85,	// (0x0000cf85) aid_inside_area_window_primary_ParamLimits

0xcf85,	// (0x0000cf85) aid_inside_area_window_primary

0x54cf,	// (0x000054cf) ai2_news_ticker_pane

0x54d7,	// (0x000054d7) aid_size_cell_ai1_link_ParamLimits

0x54d7,	// (0x000054d7) aid_size_cell_ai1_link

0xd3a9,	// (0x0000d3a9) popup_ai2_data_window_ParamLimits

0xd3a9,	// (0x0000d3a9) popup_ai2_data_window

0x5507,	// (0x00005507) popup_ai2_link_window_ParamLimits

0x5507,	// (0x00005507) popup_ai2_link_window

0x37fb,	// (0x000037fb) bg_popup_sub_pane_cp4_ParamLimits

0x37fb,	// (0x000037fb) bg_popup_sub_pane_cp4

0x551b,	// (0x0000551b) grid_ai2_link_pane_ParamLimits

0x551b,	// (0x0000551b) grid_ai2_link_pane

0x5532,	// (0x00005532) popup_ai2_link_window_g1_ParamLimits

0x5532,	// (0x00005532) popup_ai2_link_window_g1

0x553e,	// (0x0000553e) popup_ai2_link_window_g2_ParamLimits

0x553e,	// (0x0000553e) popup_ai2_link_window_g2

0x0001,

0xacf8,	// (0x0000acf8) popup_ai2_link_window_g_ParamLimits

0xacf8,	// (0x0000acf8) popup_ai2_link_window_g

0x554d,	// (0x0000554d) ai2_mp_button_pane

0x5555,	// (0x00005555) ai2_mp_volume_pane

0x3a7d,	// (0x00003a7d) bg_popup_sub_pane_cp5_ParamLimits

0x3a7d,	// (0x00003a7d) bg_popup_sub_pane_cp5

0x555d,	// (0x0000555d) heading_ai2_gene_pane_ParamLimits

0x555d,	// (0x0000555d) heading_ai2_gene_pane

0x5569,	// (0x00005569) list_ai2_gene_pane_ParamLimits

0x5569,	// (0x00005569) list_ai2_gene_pane

0x55b1,	// (0x000055b1) cell_ai2_link_pane_ParamLimits

0x55b1,	// (0x000055b1) cell_ai2_link_pane

0x55c7,	// (0x000055c7) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5697,	// (0x00005697) ai2_mp_volume_pane_g1

0x569f,	// (0x0000569f) ai2_mp_volume_pane_g2

0xd3d3,	// (0x0000d3d3) list_ai2_gene_pane_t1

0x56a7,	// (0x000056a7) ai2_mp_volume_pane_g3

0x0002,

0xad11,	// (0x0000ad11) ai2_mp_volume_pane_g

0x56af,	// (0x000056af) volume_small_pane_cp3

0x56b8,	// (0x000056b8) aid_size_cell_ai2_button

0x56c0,	// (0x000056c0) grid_ai2_button_pane

0x56c9,	// (0x000056c9) cell_ai2_button_pane_ParamLimits

0x56c9,	// (0x000056c9) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5657,	// (0x00005657) ai2_gene_pane_t1_ParamLimits

0x5657,	// (0x00005657) ai2_gene_pane_t1

0xc210,	// (0x0000c210) aid_height_parent_landscape

0xd10f,	// (0x0000d10f) aid_height_set_list

0x4e68,	// (0x00004e68) aid_size_parent

0x523e,	// (0x0000523e) aid_size_cell_graphic_pane_ParamLimits

0x5579,	// (0x00005579) popup_ai2_data_window_g1_ParamLimits

0x5579,	// (0x00005579) popup_ai2_data_window_g1

0x5585,	// (0x00005585) ai2_news_ticker_pane_g1

0x558d,	// (0x0000558d) ai2_news_ticker_pane_g2

0x0001,

0xacfd,	// (0x0000acfd) ai2_news_ticker_pane_g

0x5595,	// (0x00005595) ai2_news_ticker_pane_t1

0x55a3,	// (0x000055a3) ai2_news_ticker_pane_t2

0x0001,

0xad02,	// (0x0000ad02) ai2_news_ticker_pane_t

0x55d0,	// (0x000055d0) heading_ai2_gene_pane_g1

0x55d8,	// (0x000055d8) heading_ai2_gene_pane_t1_ParamLimits

0x55d8,	// (0x000055d8) heading_ai2_gene_pane_t1

0x55ed,	// (0x000055ed) list_highlight_pane_cp6

0xd3bd,	// (0x0000d3bd) ai2_gene_pane_ParamLimits

0xd3bd,	// (0x0000d3bd) ai2_gene_pane

0xd3e1,	// (0x0000d3e1) list_ai2_gene_pane_t2

0x0001,

0xf540,	// (0x0000f540) list_ai2_gene_pane_t

0x5628,	// (0x00005628) list_highlight_pane_cp8_ParamLimits

0x5628,	// (0x00005628) list_highlight_pane_cp8

0x5639,	// (0x00005639) ai2_gene_pane_g1_ParamLimits

0x5639,	// (0x00005639) ai2_gene_pane_g1

0x564b,	// (0x0000564b) ai2_gene_pane_g2_ParamLimits

0x564b,	// (0x0000564b) ai2_gene_pane_g2

0x0001,

0xad0c,	// (0x0000ad0c) ai2_gene_pane_g_ParamLimits

0xad0c,	// (0x0000ad0c) ai2_gene_pane_g

0x0daa,	// (0x00000daa) scroll_pane_cp12

0xc1cf,	// (0x0000c1cf) control_pane_t3_ParamLimits

0xc1cf,	// (0x0000c1cf) control_pane_t3

0x28d0,	// (0x000028d0) status_small_pane_g8_ParamLimits

0x28d0,	// (0x000028d0) status_small_pane_g8

0xc32f,	// (0x0000c32f) popup_find_window_ParamLimits

0xc59e,	// (0x0000c59e) popup_note_image_window_ParamLimits

0x34f9,	// (0x000034f9) list_double2_graphic_pane_vc_g1_ParamLimits

0x34f9,	// (0x000034f9) list_double2_graphic_pane_vc_g1

0x3505,	// (0x00003505) list_double2_graphic_pane_vc_g2_ParamLimits

0x3505,	// (0x00003505) list_double2_graphic_pane_vc_g2

0x3511,	// (0x00003511) list_double2_graphic_pane_vc_g3_ParamLimits

0x3511,	// (0x00003511) list_double2_graphic_pane_vc_g3

0x0002,

0xaae3,	// (0x0000aae3) list_double2_graphic_pane_vc_g_ParamLimits

0xaae3,	// (0x0000aae3) list_double2_graphic_pane_vc_g

0x35fb,	// (0x000035fb) list_double2_graphic_pane_vc_t1_ParamLimits

0x35fb,	// (0x000035fb) list_double2_graphic_pane_vc_t1

0x3505,	// (0x00003505) list_single_heading_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_single_heading_pane_vc_g1

0x3511,	// (0x00003511) list_single_heading_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_single_heading_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_heading_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_heading_pane_vc_g

0x36fe,	// (0x000036fe) list_single_heading_pane_vc_t1_ParamLimits

0x36fe,	// (0x000036fe) list_single_heading_pane_vc_t1

0x3714,	// (0x00003714) list_single_heading_pane_vc_t2_ParamLimits

0x3714,	// (0x00003714) list_single_heading_pane_vc_t2

0x0001,

0xab10,	// (0x0000ab10) list_single_heading_pane_vc_t_ParamLimits

0xab10,	// (0x0000ab10) list_single_heading_pane_vc_t

0x373e,	// (0x0000373e) list_setting_number_pane_vc_g1_ParamLimits

0x373e,	// (0x0000373e) list_setting_number_pane_vc_g1

0x374a,	// (0x0000374a) list_setting_number_pane_vc_g2_ParamLimits

0x374a,	// (0x0000374a) list_setting_number_pane_vc_g2

0x0001,

0xab15,	// (0x0000ab15) list_setting_number_pane_vc_g_ParamLimits

0xab15,	// (0x0000ab15) list_setting_number_pane_vc_g

0x3756,	// (0x00003756) list_setting_number_pane_vc_t1_ParamLimits

0x3756,	// (0x00003756) list_setting_number_pane_vc_t1

0x376a,	// (0x0000376a) list_setting_number_pane_vc_t2_ParamLimits

0x376a,	// (0x0000376a) list_setting_number_pane_vc_t2

0x3786,	// (0x00003786) list_setting_number_pane_vc_t3_ParamLimits

0x3786,	// (0x00003786) list_setting_number_pane_vc_t3

0x0002,

0xab1a,	// (0x0000ab1a) list_setting_number_pane_vc_t_ParamLimits

0xab1a,	// (0x0000ab1a) list_setting_number_pane_vc_t

0x37ac,	// (0x000037ac) set_value_pane_vc_ParamLimits

0x37ac,	// (0x000037ac) set_value_pane_vc

0x506e,	// (0x0000506e) list_double2_graphic_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double2_graphic_pane_vc

0x5080,	// (0x00005080) list_double2_large_graphic_pane_vc_ParamLimits

0x5080,	// (0x00005080) list_double2_large_graphic_pane_vc

0x506e,	// (0x0000506e) list_double2_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double2_pane_vc

0x506e,	// (0x0000506e) list_double_graphic_heading_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_graphic_heading_pane_vc

0x506e,	// (0x0000506e) list_double_graphic_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_graphic_pane_vc

0x506e,	// (0x0000506e) list_double_heading_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_heading_pane_vc

0x5080,	// (0x00005080) list_double_large_graphic_pane_vc_ParamLimits

0x5080,	// (0x00005080) list_double_large_graphic_pane_vc

0x506e,	// (0x0000506e) list_double_number_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_number_pane_vc

0x506e,	// (0x0000506e) list_double_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_pane_vc

0x506e,	// (0x0000506e) list_double_time_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_double_time_pane_vc

0x506e,	// (0x0000506e) list_setting_number_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_setting_number_pane_vc

0x506e,	// (0x0000506e) list_setting_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_setting_pane_vc

0x506e,	// (0x0000506e) list_single_graphic_heading_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_single_graphic_heading_pane_vc

0x506e,	// (0x0000506e) list_single_heading_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_single_heading_pane_vc

0x506e,	// (0x0000506e) list_single_number_heading_pane_vc_ParamLimits

0x506e,	// (0x0000506e) list_single_number_heading_pane_vc

0x56fd,	// (0x000056fd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x56fd,	// (0x000056fd) list_double_graphic_heading_pane_vc_g1

0x3505,	// (0x00003505) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3505,	// (0x00003505) list_double_graphic_heading_pane_vc_g2

0x3511,	// (0x00003511) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x3511,	// (0x00003511) list_double_graphic_heading_pane_vc_g3

0x0002,

0xad18,	// (0x0000ad18) list_double_graphic_heading_pane_vc_g_ParamLimits

0xad18,	// (0x0000ad18) list_double_graphic_heading_pane_vc_g

0x5709,	// (0x00005709) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5709,	// (0x00005709) list_double_graphic_heading_pane_vc_t1

0x36fe,	// (0x000036fe) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36fe,	// (0x000036fe) list_double_graphic_heading_pane_vc_t2

0x0001,

0xad1f,	// (0x0000ad1f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xad1f,	// (0x0000ad1f) list_double_graphic_heading_pane_vc_t

0x373e,	// (0x0000373e) list_setting_pane_vc_g1_ParamLimits

0x373e,	// (0x0000373e) list_setting_pane_vc_g1

0x374a,	// (0x0000374a) list_setting_pane_vc_g2_ParamLimits

0x374a,	// (0x0000374a) list_setting_pane_vc_g2

0x0001,

0xab15,	// (0x0000ab15) list_setting_pane_vc_g_ParamLimits

0xab15,	// (0x0000ab15) list_setting_pane_vc_g

0x5921,	// (0x00005921) list_setting_pane_vc_t1_ParamLimits

0x5921,	// (0x00005921) list_setting_pane_vc_t1

0x5935,	// (0x00005935) list_setting_pane_vc_t2_ParamLimits

0x5935,	// (0x00005935) list_setting_pane_vc_t2

0x0001,

0xad4d,	// (0x0000ad4d) list_setting_pane_vc_t_ParamLimits

0xad4d,	// (0x0000ad4d) list_setting_pane_vc_t

0x37ac,	// (0x000037ac) set_value_pane_cp_vc_ParamLimits

0x37ac,	// (0x000037ac) set_value_pane_cp_vc

0x3505,	// (0x00003505) list_single_number_heading_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_single_number_heading_pane_vc_g1

0x3511,	// (0x00003511) list_single_number_heading_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_single_number_heading_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_single_number_heading_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_single_number_heading_pane_vc_g

0x36fe,	// (0x000036fe) list_single_number_heading_pane_vc_t1_ParamLimits

0x36fe,	// (0x000036fe) list_single_number_heading_pane_vc_t1

0x5957,	// (0x00005957) list_single_number_heading_pane_vc_t2_ParamLimits

0x5957,	// (0x00005957) list_single_number_heading_pane_vc_t2

0x596b,	// (0x0000596b) list_single_number_heading_pane_vc_t3_ParamLimits

0x596b,	// (0x0000596b) list_single_number_heading_pane_vc_t3

0x0002,

0xad52,	// (0x0000ad52) list_single_number_heading_pane_vc_t_ParamLimits

0xad52,	// (0x0000ad52) list_single_number_heading_pane_vc_t

0x34f9,	// (0x000034f9) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34f9,	// (0x000034f9) list_single_graphic_heading_pane_vc_g1

0x3505,	// (0x00003505) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3505,	// (0x00003505) list_single_graphic_heading_pane_vc_g4

0x3511,	// (0x00003511) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3511,	// (0x00003511) list_single_graphic_heading_pane_vc_g5

0x0002,

0xaae3,	// (0x0000aae3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xaae3,	// (0x0000aae3) list_single_graphic_heading_pane_vc_g

0x36fe,	// (0x000036fe) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36fe,	// (0x000036fe) list_single_graphic_heading_pane_vc_t1

0x597d,	// (0x0000597d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x597d,	// (0x0000597d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xad59,	// (0x0000ad59) list_single_graphic_heading_pane_vc_t_ParamLimits

0xad59,	// (0x0000ad59) list_single_graphic_heading_pane_vc_t

0x3505,	// (0x00003505) list_double2_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_double2_pane_vc_g1

0x3511,	// (0x00003511) list_double2_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_double2_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_double2_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_double2_pane_vc_g

0x5991,	// (0x00005991) list_double2_pane_vc_t1_ParamLimits

0x5991,	// (0x00005991) list_double2_pane_vc_t1

0x59a7,	// (0x000059a7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x59a7,	// (0x000059a7) list_double2_large_graphic_pane_vc_g1

0x59b3,	// (0x000059b3) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x59b3,	// (0x000059b3) list_double2_large_graphic_pane_vc_g2

0x59bf,	// (0x000059bf) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x59bf,	// (0x000059bf) list_double2_large_graphic_pane_vc_g3

0x0002,

0xad5e,	// (0x0000ad5e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xad5e,	// (0x0000ad5e) list_double2_large_graphic_pane_vc_g

0x59cb,	// (0x000059cb) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x59cb,	// (0x000059cb) list_double2_large_graphic_pane_vc_t1

0x59e1,	// (0x000059e1) list_double_time_pane_vc_g1_ParamLimits

0x59e1,	// (0x000059e1) list_double_time_pane_vc_g1

0x59ed,	// (0x000059ed) list_double_time_pane_vc_g2_ParamLimits

0x59ed,	// (0x000059ed) list_double_time_pane_vc_g2

0x0001,

0xad65,	// (0x0000ad65) list_double_time_pane_vc_g_ParamLimits

0xad65,	// (0x0000ad65) list_double_time_pane_vc_g

0x59f9,	// (0x000059f9) list_double_time_pane_vc_t1_ParamLimits

0x59f9,	// (0x000059f9) list_double_time_pane_vc_t1

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t2_ParamLimits

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t2

0x5a2d,	// (0x00005a2d) list_double_time_pane_vc_t3_ParamLimits

0x5a2d,	// (0x00005a2d) list_double_time_pane_vc_t3

0x5a45,	// (0x00005a45) list_double_time_pane_vc_t4_ParamLimits

0x5a45,	// (0x00005a45) list_double_time_pane_vc_t4

0x0003,

0xad6a,	// (0x0000ad6a) list_double_time_pane_vc_t_ParamLimits

0xad6a,	// (0x0000ad6a) list_double_time_pane_vc_t

0x3505,	// (0x00003505) list_double_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_double_pane_vc_g1

0x3511,	// (0x00003511) list_double_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_double_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_double_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_double_pane_vc_g

0x5a59,	// (0x00005a59) list_double_pane_vc_t1_ParamLimits

0x5a59,	// (0x00005a59) list_double_pane_vc_t1

0x5a6b,	// (0x00005a6b) list_double_pane_vc_t2_ParamLimits

0x5a6b,	// (0x00005a6b) list_double_pane_vc_t2

0x0001,

0xad73,	// (0x0000ad73) list_double_pane_vc_t_ParamLimits

0xad73,	// (0x0000ad73) list_double_pane_vc_t

0x3505,	// (0x00003505) list_double_number_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_double_number_pane_vc_g1

0x3511,	// (0x00003511) list_double_number_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_double_number_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_double_number_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_double_number_pane_vc_g

0x5a83,	// (0x00005a83) list_double_number_pane_vc_t1_ParamLimits

0x5a83,	// (0x00005a83) list_double_number_pane_vc_t1

0x5a97,	// (0x00005a97) list_double_number_pane_vc_t2_ParamLimits

0x5a97,	// (0x00005a97) list_double_number_pane_vc_t2

0x5a6b,	// (0x00005a6b) list_double_number_pane_vc_t3_ParamLimits

0x5a6b,	// (0x00005a6b) list_double_number_pane_vc_t3

0x0002,

0xad78,	// (0x0000ad78) list_double_number_pane_vc_t_ParamLimits

0xad78,	// (0x0000ad78) list_double_number_pane_vc_t

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5aa9,	// (0x00005aa9) list_double_large_graphic_pane_vc_g1

0x5ab5,	// (0x00005ab5) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5ab5,	// (0x00005ab5) list_double_large_graphic_pane_vc_g2

0x59bf,	// (0x000059bf) list_double_large_graphic_pane_vc_g3_ParamLimits

0x59bf,	// (0x000059bf) list_double_large_graphic_pane_vc_g3

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5ac4,	// (0x00005ac4) list_double_large_graphic_pane_vc_g4

0x0003,

0xad7f,	// (0x0000ad7f) list_double_large_graphic_pane_vc_g_ParamLimits

0xad7f,	// (0x0000ad7f) list_double_large_graphic_pane_vc_g

0x5ad0,	// (0x00005ad0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5ad0,	// (0x00005ad0) list_double_large_graphic_pane_vc_t1

0x5ae2,	// (0x00005ae2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5ae2,	// (0x00005ae2) list_double_large_graphic_pane_vc_t2

0x0001,

0xad88,	// (0x0000ad88) list_double_large_graphic_pane_vc_t_ParamLimits

0xad88,	// (0x0000ad88) list_double_large_graphic_pane_vc_t

0x3505,	// (0x00003505) list_double_heading_pane_vc_g1_ParamLimits

0x3505,	// (0x00003505) list_double_heading_pane_vc_g1

0x3511,	// (0x00003511) list_double_heading_pane_vc_g2_ParamLimits

0x3511,	// (0x00003511) list_double_heading_pane_vc_g2

0x0001,

0xab0b,	// (0x0000ab0b) list_double_heading_pane_vc_g_ParamLimits

0xab0b,	// (0x0000ab0b) list_double_heading_pane_vc_g

0x5afb,	// (0x00005afb) list_double_heading_pane_vc_t1_ParamLimits

0x5afb,	// (0x00005afb) list_double_heading_pane_vc_t1

0x36fe,	// (0x000036fe) list_double_heading_pane_vc_t2_ParamLimits

0x36fe,	// (0x000036fe) list_double_heading_pane_vc_t2

0x0001,

0xad8d,	// (0x0000ad8d) list_double_heading_pane_vc_t_ParamLimits

0xad8d,	// (0x0000ad8d) list_double_heading_pane_vc_t

0x34f9,	// (0x000034f9) list_double_graphic_pane_vc_g1_ParamLimits

0x34f9,	// (0x000034f9) list_double_graphic_pane_vc_g1

0x5b0f,	// (0x00005b0f) list_double_graphic_pane_vc_g2_ParamLimits

0x5b0f,	// (0x00005b0f) list_double_graphic_pane_vc_g2

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_g3_ParamLimits

0x5b1e,	// (0x00005b1e) list_double_graphic_pane_vc_g3

0x0002,

0xad92,	// (0x0000ad92) list_double_graphic_pane_vc_g_ParamLimits

0xad92,	// (0x0000ad92) list_double_graphic_pane_vc_g

0x5b2a,	// (0x00005b2a) list_double_graphic_pane_vc_t1_ParamLimits

0x5b2a,	// (0x00005b2a) list_double_graphic_pane_vc_t1

0x5a6b,	// (0x00005a6b) list_double_graphic_pane_vc_t2_ParamLimits

0x5a6b,	// (0x00005a6b) list_double_graphic_pane_vc_t2

0x0001,

0xad99,	// (0x0000ad99) list_double_graphic_pane_vc_t_ParamLimits

0xad99,	// (0x0000ad99) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb239,	// (0x0000b239) aid_size_cell_touch_ParamLimits

0xb239,	// (0x0000b239) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb384,	// (0x0000b384) touch_pane_ParamLimits

0xb384,	// (0x0000b384) touch_pane

0x128f,	// (0x0000128f) button_value_adjust_pane_cp2

0x1297,	// (0x00001297) button_value_adjust_pane_cp4

0x12b9,	// (0x000012b9) form_field_data_pane_cp2

0xbb9a,	// (0x0000bb9a) form_field_data_wide_pane_cp2

0x1b0a,	// (0x00001b0a) bg_scroll_pane_ParamLimits

0x1b29,	// (0x00001b29) scroll_handle_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_down_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_sc2_down_pane

0x1b64,	// (0x00001b64) scroll_sc2_up_pane_ParamLimits

0x1b64,	// (0x00001b64) scroll_sc2_up_pane

0xd50c,	// (0x0000d50c) grid_wheel_folder_pane_g1_ParamLimits

0xd50c,	// (0x0000d50c) grid_wheel_folder_pane_g1

0x21f7,	// (0x000021f7) clock_nsta_pane_cp2_ParamLimits

0x21f7,	// (0x000021f7) clock_nsta_pane_cp2

0xbfc4,	// (0x0000bfc4) listscroll_midp_pane_ParamLimits

0xbfd5,	// (0x0000bfd5) midp_canvas_pane

0x2a91,	// (0x00002a91) nsta_clock_indic_pane

0x2aef,	// (0x00002aef) listscroll_form_pane_vc

0x2b0b,	// (0x00002b0b) listscroll_set_pane_vc_ParamLimits

0x2b0b,	// (0x00002b0b) listscroll_set_pane_vc

0xc9c5,	// (0x0000c9c5) clock_nsta_pane

0xc9ef,	// (0x0000c9ef) indicator_nsta_pane

0x3565,	// (0x00003565) bg_popup_sub_pane_cp2_ParamLimits

0x3579,	// (0x00003579) find_pane_cp2_ParamLimits

0x3579,	// (0x00003579) find_pane_cp2

0x358f,	// (0x0000358f) grid_toobar_pane_ParamLimits

0x37ba,	// (0x000037ba) list_form_gen_pane_vc_ParamLimits

0x37ba,	// (0x000037ba) list_form_gen_pane_vc

0x37d0,	// (0x000037d0) scroll_pane_cp8_vc_ParamLimits

0x37d0,	// (0x000037d0) scroll_pane_cp8_vc

0x38e9,	// (0x000038e9) data_form_wide_pane_vc_ParamLimits

0x38e9,	// (0x000038e9) data_form_wide_pane_vc

0x38f5,	// (0x000038f5) form_field_data_wide_pane_vc_g1

0x38fd,	// (0x000038fd) form_field_data_wide_pane_vc_t1_ParamLimits

0x38fd,	// (0x000038fd) form_field_data_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp6_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp6_vc

0xcdef,	// (0x0000cdef) list_midp_pane_ParamLimits

0x52a4,	// (0x000052a4) scroll_pane_cp16_ParamLimits

0x52a4,	// (0x000052a4) scroll_pane_cp16

0x3c99,	// (0x00003c99) button_value_adjust_pane_ParamLimits

0x3c99,	// (0x00003c99) button_value_adjust_pane

0xd120,	// (0x0000d120) button_value_adjust_pane_cp6_ParamLimits

0xd120,	// (0x0000d120) button_value_adjust_pane_cp6

0xd23a,	// (0x0000d23a) settings_code_pane_cp_ParamLimits

0xd23a,	// (0x0000d23a) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xaa3a,	// (0x0000aa3a) cell_touch_pane_g

0xd3ef,	// (0x0000d3ef) cell_touch_pane_cp_ParamLimits

0xd3ef,	// (0x0000d3ef) cell_touch_pane_cp

0xd40b,	// (0x0000d40b) cell_touch_pane_ParamLimits

0xd40b,	// (0x0000d40b) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x571d,	// (0x0000571d) list_set_graphic_pane_vc_g1_ParamLimits

0x571d,	// (0x0000571d) list_set_graphic_pane_vc_g1

0x5729,	// (0x00005729) list_set_graphic_pane_vc_g2_ParamLimits

0x5729,	// (0x00005729) list_set_graphic_pane_vc_g2

0x0001,

0xad24,	// (0x0000ad24) list_set_graphic_pane_vc_g_ParamLimits

0xad24,	// (0x0000ad24) list_set_graphic_pane_vc_g

0x5735,	// (0x00005735) text_primary_small_cp13_vc_ParamLimits

0x5735,	// (0x00005735) text_primary_small_cp13_vc

0x574d,	// (0x0000574d) list_set_graphic_pane_vc_ParamLimits

0x574d,	// (0x0000574d) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5761,	// (0x00005761) setting_code_pane_vc_t1

0x576f,	// (0x0000576f) set_text_pane_vc_t1_ParamLimits

0x576f,	// (0x0000576f) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x578a,	// (0x0000578a) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x5794,	// (0x00005794) setting_slider_graphic_pane_vc_g1

0x579c,	// (0x0000579c) setting_slider_graphic_pane_vc_t1

0x57aa,	// (0x000057aa) setting_slider_graphic_pane_vc_t2

0x0001,

0xad29,	// (0x0000ad29) setting_slider_graphic_pane_vc_t

0x57b8,	// (0x000057b8) slider_set_pane_cp_vc

0x57c0,	// (0x000057c0) slider_set_pane_vc_g1

0x57c9,	// (0x000057c9) slider_set_pane_vc_g2

0x0006,

0xad2e,	// (0x0000ad2e) slider_set_pane_vc_g

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy1

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy1

0x57f5,	// (0x000057f5) set_opt_bg_pane_g3_copy1

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy1

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy1

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy1

0x57ff,	// (0x000057ff) set_opt_bg_pane_g7_copy1

0x5807,	// (0x00005807) set_opt_bg_pane_g8_copy1

0x5811,	// (0x00005811) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x581b,	// (0x0000581b) setting_slider_pane_vc_t1

0x579c,	// (0x0000579c) setting_slider_pane_vc_t2

0x57aa,	// (0x000057aa) setting_slider_pane_vc_t3

0x0002,

0xad3d,	// (0x0000ad3d) setting_slider_pane_vc_t

0x57b8,	// (0x000057b8) slider_set_pane_vc

0x44da,	// (0x000044da) volume_set_pane_vc_g1

0x44e3,	// (0x000044e3) volume_set_pane_vc_g2

0x44ec,	// (0x000044ec) volume_set_pane_vc_g3

0x44f5,	// (0x000044f5) volume_set_pane_vc_g4

0x44fe,	// (0x000044fe) volume_set_pane_vc_g5

0x4507,	// (0x00004507) volume_set_pane_vc_g6

0x4510,	// (0x00004510) volume_set_pane_vc_g7

0x4519,	// (0x00004519) volume_set_pane_vc_g8

0x4522,	// (0x00004522) volume_set_pane_vc_g9

0x452b,	// (0x0000452b) volume_set_pane_vc_g10

0x0009,

0xabdb,	// (0x0000abdb) volume_set_pane_vc_g

0x582a,	// (0x0000582a) volume_set_pane_vc

0x5832,	// (0x00005832) button_value_adjust_pane_cp1_vc

0x583c,	// (0x0000583c) list_highlight_pane_cp2_vc

0x5845,	// (0x00005845) list_set_pane_vc_ParamLimits

0x5845,	// (0x00005845) list_set_pane_vc

0x58af,	// (0x000058af) main_pane_set_vc_t1_ParamLimits

0x58af,	// (0x000058af) main_pane_set_vc_t1

0x58c4,	// (0x000058c4) main_pane_set_vc_t2_ParamLimits

0x58c4,	// (0x000058c4) main_pane_set_vc_t2

0x58d6,	// (0x000058d6) main_pane_set_vc_t3_ParamLimits

0x58d6,	// (0x000058d6) main_pane_set_vc_t3

0x58ea,	// (0x000058ea) main_pane_set_vc_t4_ParamLimits

0x58ea,	// (0x000058ea) main_pane_set_vc_t4

0x0003,

0xad44,	// (0x0000ad44) main_pane_set_vc_t_ParamLimits

0xad44,	// (0x0000ad44) main_pane_set_vc_t

0x58fe,	// (0x000058fe) setting_code_pane_vc_ParamLimits

0x58fe,	// (0x000058fe) setting_code_pane_vc

0x590f,	// (0x0000590f) setting_slider_graphic_pane_vc

0x590f,	// (0x0000590f) setting_slider_pane_vc

0x590f,	// (0x0000590f) setting_text_pane_vc

0x590f,	// (0x0000590f) setting_volume_pane_vc

0x5919,	// (0x00005919) scroll_pane_cp121_vc

0x127d,	// (0x0000127d) set_content_pane_vc

0x5b3c,	// (0x00005b3c) button_value_adjust_pane_g1

0x5b45,	// (0x00005b45) button_value_adjust_pane_g2

0x0001,

0xad9e,	// (0x0000ad9e) button_value_adjust_pane_g

0x5b4e,	// (0x00005b4e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b4e,	// (0x00005b4e) form_field_slider_wide_pane_vc_t1

0x5b62,	// (0x00005b62) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b62,	// (0x00005b62) form_field_slider_wide_pane_vc_t2

0x0001,

0xada3,	// (0x0000ada3) form_field_slider_wide_pane_vc_t_ParamLimits

0xada3,	// (0x0000ada3) form_field_slider_wide_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp10_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp10_vc

0x5b74,	// (0x00005b74) slider_cont_pane_cp1_vc_ParamLimits

0x5b74,	// (0x00005b74) slider_cont_pane_cp1_vc

0x57c0,	// (0x000057c0) slider_form_pane_g1_cp2

0x57c9,	// (0x000057c9) slider_form_pane_g2_cp2

0x5b8d,	// (0x00005b8d) form_field_slider_pane_vc_t3

0x5b9b,	// (0x00005b9b) form_field_slider_pane_vc_t4

0x5ba9,	// (0x00005ba9) slider_form_pane_vc_ParamLimits

0x5ba9,	// (0x00005ba9) slider_form_pane_vc

0x5bb6,	// (0x00005bb6) form_field_slider_pane_vc_t1_ParamLimits

0x5bb6,	// (0x00005bb6) form_field_slider_pane_vc_t1

0x5b62,	// (0x00005b62) form_field_slider_pane_vc_t2_ParamLimits

0x5b62,	// (0x00005b62) form_field_slider_pane_vc_t2

0x0001,

0xadb3,	// (0x0000adb3) form_field_slider_pane_vc_t_ParamLimits

0xadb3,	// (0x0000adb3) form_field_slider_pane_vc_t

0x0823,	// (0x00000823) input_focus_pane_cp9_vc_ParamLimits

0x0823,	// (0x00000823) input_focus_pane_cp9_vc

0x5bd2,	// (0x00005bd2) slider_cont_pane_vc_ParamLimits

0x5bd2,	// (0x00005bd2) slider_cont_pane_vc

0x5be4,	// (0x00005be4) list_form_graphic_pane_cp_vc_ParamLimits

0x5be4,	// (0x00005be4) list_form_graphic_pane_cp_vc

0x38f5,	// (0x000038f5) form_field_popup_wide_pane_vc_g1

0x5bf9,	// (0x00005bf9) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bf9,	// (0x00005bf9) form_field_popup_wide_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp8_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp8_vc

0x5c10,	// (0x00005c10) list_form_wide_pane_vc_ParamLimits

0x5c10,	// (0x00005c10) list_form_wide_pane_vc

0x5c1c,	// (0x00005c1c) list_form_graphic_pane_vc_g1

0x5c24,	// (0x00005c24) list_form_graphic_pane_vc_t1_ParamLimits

0x5c24,	// (0x00005c24) list_form_graphic_pane_vc_t1

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc_ParamLimits

0x04fd,	// (0x000004fd) list_highlight_pane_cp5_vc

0x5c40,	// (0x00005c40) list_form_graphic_pane_vc_ParamLimits

0x5c40,	// (0x00005c40) list_form_graphic_pane_vc

0x38f5,	// (0x000038f5) form_field_popup_pane_vc_g1

0x5c56,	// (0x00005c56) form_field_popup_pane_vc_t1_ParamLimits

0x5c56,	// (0x00005c56) form_field_popup_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_cp7_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_cp7_vc

0x5c6d,	// (0x00005c6d) list_form_pane_vc_ParamLimits

0x5c6d,	// (0x00005c6d) list_form_pane_vc

0x5c79,	// (0x00005c79) data_form_pane_vc_t1_ParamLimits

0x5c79,	// (0x00005c79) data_form_pane_vc_t1

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

0xa9c3,	// (0x0000a9c3) input_focus_pane_vc_g

0x38e9,	// (0x000038e9) data_form_pane_vc_ParamLimits

0x38e9,	// (0x000038e9) data_form_pane_vc

0x38f5,	// (0x000038f5) form_field_data_pane_vc_g1

0x5c94,	// (0x00005c94) form_field_data_pane_vc_t1_ParamLimits

0x5c94,	// (0x00005c94) form_field_data_pane_vc_t1

0x1375,	// (0x00001375) input_focus_pane_vc_ParamLimits

0x1375,	// (0x00001375) input_focus_pane_vc

0x5cae,	// (0x00005cae) button_value_adjust_pane_cp3_vc

0x5cb6,	// (0x00005cb6) button_value_adjust_pane_cp5_vc

0x5cbe,	// (0x00005cbe) form_field_data_pane_vc_ParamLimits

0x5cbe,	// (0x00005cbe) form_field_data_pane_vc

0x5cd5,	// (0x00005cd5) form_field_data_pane_vc_cp2

0x5cdd,	// (0x00005cdd) form_field_data_wide_pane_vc_ParamLimits

0x5cdd,	// (0x00005cdd) form_field_data_wide_pane_vc

0x5cf3,	// (0x00005cf3) form_field_data_wide_pane_vc_cp2

0x5cfb,	// (0x00005cfb) form_field_popup_pane_vc_ParamLimits

0x5cfb,	// (0x00005cfb) form_field_popup_pane_vc

0x5d12,	// (0x00005d12) form_field_popup_wide_pane_vc_ParamLimits

0x5d12,	// (0x00005d12) form_field_popup_wide_pane_vc

0x5d28,	// (0x00005d28) form_field_slider_pane_vc_ParamLimits

0x5d28,	// (0x00005d28) form_field_slider_pane_vc

0x5d3b,	// (0x00005d3b) form_field_slider_wide_pane_vc_ParamLimits

0x5d3b,	// (0x00005d3b) form_field_slider_wide_pane_vc

0xd429,	// (0x0000d429) grid_touch_1_pane_ParamLimits

0xd429,	// (0x0000d429) grid_touch_1_pane

0xd43d,	// (0x0000d43d) grid_touch_2_pane_ParamLimits

0xd43d,	// (0x0000d43d) grid_touch_2_pane

0x5e10,	// (0x00005e10) touch_pane_g1_ParamLimits

0x5e10,	// (0x00005e10) touch_pane_g1

0x5d72,	// (0x00005d72) cell_app_pane_cp_wide_ParamLimits

0x5d72,	// (0x00005d72) cell_app_pane_cp_wide

0x5d83,	// (0x00005d83) grid_popup_fast_wide_pane_ParamLimits

0x5d83,	// (0x00005d83) grid_popup_fast_wide_pane

0x5d97,	// (0x00005d97) scroll_pane_cp19_ParamLimits

0x5d97,	// (0x00005d97) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5dab,	// (0x00005dab) listscroll_popup_fast_wide_pane

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane

0x5db3,	// (0x00005db3) clock_nsta_pane_g1

0x5dbc,	// (0x00005dbc) clock_nsta_pane_t1

0xd467,	// (0x0000d467) cell_indicator_nsta_pane_ParamLimits

0xd467,	// (0x0000d467) cell_indicator_nsta_pane

0x5e10,	// (0x00005e10) cell_indicator_nsta_pane_g1

0xd480,	// (0x0000d480) cell_indicator_nsta_pane_g2

0x0001,

0xf545,	// (0x0000f545) cell_indicator_nsta_pane_g

0x5e34,	// (0x00005e34) clock_nsta_pane_cp

0x5e3c,	// (0x00005e3c) indicator_nsta_pane_cp

0x5e45,	// (0x00005e45) nsta_clock_indic_pane_g1

0x0671,	// (0x00000671) grid_indicator_pane

0x1c59,	// (0x00001c59) scroll_pane_cp29

0x2124,	// (0x00002124) indicator_nsta_pane_cp2_ParamLimits

0x2124,	// (0x00002124) indicator_nsta_pane_cp2

0x04fd,	// (0x000004fd) main_apps_wheel_pane

0x3b20,	// (0x00003b20) form_midp_field_text_pane_ParamLimits

0x3c6b,	// (0x00003c6b) scroll_bar_cp050_ParamLimits

0x5eae,	// (0x00005eae) cell_indicator_pane_ParamLimits

0x5eae,	// (0x00005eae) cell_indicator_pane

0x5ec5,	// (0x00005ec5) cell_indicator_pane_g1

0xd496,	// (0x0000d496) grid_wheel_folder_pane_ParamLimits

0xd496,	// (0x0000d496) grid_wheel_folder_pane

0xd4a4,	// (0x0000d4a4) list_wheel_apps_pane_ParamLimits

0xd4a4,	// (0x0000d4a4) list_wheel_apps_pane

0xd4b2,	// (0x0000d4b2) main_apps_wheel_pane_g1_ParamLimits

0xd4b2,	// (0x0000d4b2) main_apps_wheel_pane_g1

0xd4be,	// (0x0000d4be) main_apps_wheel_pane_g2_ParamLimits

0xd4be,	// (0x0000d4be) main_apps_wheel_pane_g2

0x0001,

0xf54a,	// (0x0000f54a) main_apps_wheel_pane_g_ParamLimits

0xf54a,	// (0x0000f54a) main_apps_wheel_pane_g

0xd4cc,	// (0x0000d4cc) main_apps_wheel_pane_t1_ParamLimits

0xd4cc,	// (0x0000d4cc) main_apps_wheel_pane_t1

0xd4e0,	// (0x0000d4e0) list_wheel_apps_pane_g1

0xd4e8,	// (0x0000d4e8) list_wheel_apps_pane_g2

0xd4f0,	// (0x0000d4f0) list_wheel_apps_pane_g3

0xd4f8,	// (0x0000d4f8) list_wheel_apps_pane_g4

0xd502,	// (0x0000d502) list_wheel_apps_pane_g5

0x0004,

0xf54f,	// (0x0000f54f) list_wheel_apps_pane_g

0x2424,	// (0x00002424) navi_icon_text_pane

0xc8c0,	// (0x0000c8c0) aid_fill_nsta

0xd519,	// (0x0000d519) navi_icon_text_pane_g1

0xd525,	// (0x0000d525) navi_icon_text_pane_t1

0xbfac,	// (0x0000bfac) list_set_graphic_pane_t1_ParamLimits

0xbfac,	// (0x0000bfac) list_set_graphic_pane_t1

0x43ba,	// (0x000043ba) popup_midp_note_alarm_window_t6_ParamLimits

0x43ba,	// (0x000043ba) popup_midp_note_alarm_window_t6

0x43cc,	// (0x000043cc) popup_midp_note_alarm_window_t7_ParamLimits

0x43cc,	// (0x000043cc) popup_midp_note_alarm_window_t7

0x43de,	// (0x000043de) popup_midp_note_alarm_window_t8_ParamLimits

0x43de,	// (0x000043de) popup_midp_note_alarm_window_t8

0x43f0,	// (0x000043f0) popup_midp_note_alarm_window_t9_ParamLimits

0x43f0,	// (0x000043f0) popup_midp_note_alarm_window_t9

0x4402,	// (0x00004402) popup_midp_note_alarm_window_t10_ParamLimits

0x4402,	// (0x00004402) popup_midp_note_alarm_window_t10

0x4414,	// (0x00004414) popup_midp_note_alarm_window_t11_ParamLimits

0x4414,	// (0x00004414) popup_midp_note_alarm_window_t11

0x4426,	// (0x00004426) scroll_pane_cp17_ParamLimits

0x4426,	// (0x00004426) scroll_pane_cp17

0x44da,	// (0x000044da) volume_small_pane_cp_g1

0x5fac,	// (0x00005fac) volume_small_pane_cp_g2

0x5fb5,	// (0x00005fb5) volume_small_pane_cp_g3

0x5fbe,	// (0x00005fbe) volume_small_pane_cp_g4

0x5fc7,	// (0x00005fc7) volume_small_pane_cp_g5

0x5fd0,	// (0x00005fd0) volume_small_pane_cp_g6

0x5fd9,	// (0x00005fd9) volume_small_pane_cp_g7

0x5fe2,	// (0x00005fe2) volume_small_pane_cp_g8

0x5feb,	// (0x00005feb) volume_small_pane_cp_g9

0x5ff4,	// (0x00005ff4) volume_small_pane_cp_g10

0x267f,	// (0x0000267f) midp_ticker_pane_g1_ParamLimits

0x268b,	// (0x0000268b) midp_ticker_pane_g2_ParamLimits

0xaa8b,	// (0x0000aa8b) midp_ticker_pane_g_ParamLimits

0xc06c,	// (0x0000c06c) midp_ticker_pane_t1_ParamLimits

0xc8e0,	// (0x0000c8e0) aid_fill_nsta_2

0x3c57,	// (0x00003c57) list_form2_midp_pane

0x5022,	// (0x00005022) midp_editing_number_pane_ParamLimits

0x5031,	// (0x00005031) midp_ticker_pane_ParamLimits

0x5ffd,	// (0x00005ffd) form2_midp_field_pane

0x6021,	// (0x00006021) scroll_pane_cp51

0x6041,	// (0x00006041) form2_midp_button_pane_ParamLimits

0x6041,	// (0x00006041) form2_midp_button_pane

0x6053,	// (0x00006053) form2_midp_content_pane_ParamLimits

0x6053,	// (0x00006053) form2_midp_content_pane

0x606d,	// (0x0000606d) form2_midp_field_choice_group_pane

0x6075,	// (0x00006075) form2_midp_field_pane_g1

0x607d,	// (0x0000607d) form2_midp_field_pane_g2

0x6085,	// (0x00006085) form2_midp_field_pane_g3

0x608d,	// (0x0000608d) form2_midp_field_pane_g4

0x0003,

0xae03,	// (0x0000ae03) form2_midp_field_pane_g

0x6095,	// (0x00006095) form2_midp_gauge_slider_pane

0x609d,	// (0x0000609d) form2_midp_gauge_wait_pane

0x60a5,	// (0x000060a5) form2_midp_image_pane_ParamLimits

0x60a5,	// (0x000060a5) form2_midp_image_pane

0x60c0,	// (0x000060c0) form2_midp_label_pane_ParamLimits

0x60c0,	// (0x000060c0) form2_midp_label_pane

0xd553,	// (0x0000d553) form2_midp_label_pane_cp_ParamLimits

0xd553,	// (0x0000d553) form2_midp_label_pane_cp

0x60fa,	// (0x000060fa) form2_midp_string_pane_ParamLimits

0x60fa,	// (0x000060fa) form2_midp_string_pane

0xd574,	// (0x0000d574) form2_midp_text_pane_ParamLimits

0xd574,	// (0x0000d574) form2_midp_text_pane

0x6129,	// (0x00006129) form2_midp_time_pane

0x6139,	// (0x00006139) input_focus_pane_cp51_ParamLimits

0x6139,	// (0x00006139) input_focus_pane_cp51

0x6151,	// (0x00006151) form2_midp_label_pane_t1_ParamLimits

0x6151,	// (0x00006151) form2_midp_label_pane_t1

0xd591,	// (0x0000d591) form2_mdip_text_pane_t1_ParamLimits

0xd591,	// (0x0000d591) form2_mdip_text_pane_t1

0x61b1,	// (0x000061b1) form2_midp_time_pane_t1

0x61cc,	// (0x000061cc) form2_midp_gauge_slider_pane_t1

0xd5ad,	// (0x0000d5ad) form2_midp_gauge_slider_pane_t2

0xd5bf,	// (0x0000d5bf) form2_midp_gauge_slider_pane_t3

0x0002,

0xf55f,	// (0x0000f55f) form2_midp_gauge_slider_pane_t

0x6202,	// (0x00006202) form2_midp_slider_pane

0x620e,	// (0x0000620e) form2_midp_gauge_wait_pane_t1

0x621c,	// (0x0000621c) form2_midp_wait_pane_ParamLimits

0x621c,	// (0x0000621c) form2_midp_wait_pane

0xd5d1,	// (0x0000d5d1) list_single_2graphic_pane_cp4_ParamLimits

0xd5d1,	// (0x0000d5d1) list_single_2graphic_pane_cp4

0xcd63,	// (0x0000cd63) list_single_midp_graphic_pane_cp_ParamLimits

0xcd63,	// (0x0000cd63) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6276,	// (0x00006276) list_single_2graphic_pane_g1_cp4

0x627e,	// (0x0000627e) list_single_2graphic_pane_g2_cp4

0x6286,	// (0x00006286) list_single_2graphic_pane_t1_cp4

0x04fd,	// (0x000004fd) list_highlight_pane_cp21

0x6295,	// (0x00006295) list_single_midp_graphic_pane_g4_cp

0x62a4,	// (0x000062a4) list_single_midp_graphic_pane_t1_cp

0xd5e6,	// (0x0000d5e6) form2_mdip_string_pane_t1_ParamLimits

0xd5e6,	// (0x0000d5e6) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5_ParamLimits

0x1057,	// (0x00001057) list_double_large_graphic_pane_g5

0xbfc4,	// (0x0000bfc4) midp_form_pane_ParamLimits

0x04fd,	// (0x000004fd) main_apps_wheel_pane_ParamLimits

0xc61c,	// (0x0000c61c) popup_preview_window_ParamLimits

0xc61c,	// (0x0000c61c) popup_preview_window

0x3081,	// (0x00003081) popup_touch_info_window_ParamLimits

0x3081,	// (0x00003081) popup_touch_info_window

0x309f,	// (0x0000309f) popup_touch_menu_window_ParamLimits

0x309f,	// (0x0000309f) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x63b2,	// (0x000063b2) list_touch_menu_pane

0x63ba,	// (0x000063ba) list_single_touch_menu_pane_ParamLimits

0x63ba,	// (0x000063ba) list_single_touch_menu_pane

0x63d1,	// (0x000063d1) list_single_touch_menu_pane_t1

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7_ParamLimits

0x04fd,	// (0x000004fd) bg_popup_sub_pane_cp7

0x63df,	// (0x000063df) heading_sub_pane

0x63e7,	// (0x000063e7) list_touch_info_pane_ParamLimits

0x63e7,	// (0x000063e7) list_touch_info_pane

0x63f6,	// (0x000063f6) list_single_touch_info_pane_ParamLimits

0x63f6,	// (0x000063f6) list_single_touch_info_pane

0x6408,	// (0x00006408) list_single_touch_info_pane_t1

0x6416,	// (0x00006416) list_single_touch_info_pane_t2

0x0001,

0xae1a,	// (0x0000ae1a) list_single_touch_info_pane_t

0x25a4,	// (0x000025a4) bg_popup_heading_pane_cp

0x6424,	// (0x00006424) heading_sub_pane_t1

0x37fb,	// (0x000037fb) bg_popup_preview_window_pane_cp_ParamLimits

0x37fb,	// (0x000037fb) bg_popup_preview_window_pane_cp

0x63df,	// (0x000063df) heading_preview_pane

0x63e7,	// (0x000063e7) list_preview_pane_ParamLimits

0x63e7,	// (0x000063e7) list_preview_pane

0x6432,	// (0x00006432) popup_preview_window_g1

0x63f6,	// (0x000063f6) list_single_preview_pane_ParamLimits

0x63f6,	// (0x000063f6) list_single_preview_pane

0x643a,	// (0x0000643a) list_single_preview_pane_g1

0x6442,	// (0x00006442) list_single_preview_pane_t1

0x6408,	// (0x00006408) list_single_preview_pane_t2

0x0001,

0xae1f,	// (0x0000ae1f) list_single_preview_pane_t

0x6450,	// (0x00006450) bg_popup_heading_pane_cp2_ParamLimits

0x6450,	// (0x00006450) bg_popup_heading_pane_cp2

0x6466,	// (0x00006466) heading_preview_pane_g1

0x646e,	// (0x0000646e) heading_preview_pane_t1_ParamLimits

0x646e,	// (0x0000646e) heading_preview_pane_t1

0x0694,	// (0x00000694) soft_indicator_pane_t1_ParamLimits

0x0d87,	// (0x00000d87) scroll_pane_ParamLimits

0x1b52,	// (0x00001b52) scroll_sc2_left_pane

0x1b5b,	// (0x00001b5b) scroll_sc2_right_pane

0x1b7a,	// (0x00001b7a) scroll_bg_pane_g1_ParamLimits

0x1b8f,	// (0x00001b8f) scroll_bg_pane_g2_ParamLimits

0x1ba7,	// (0x00001ba7) scroll_bg_pane_g3_ParamLimits

0xaa1a,	// (0x0000aa1a) scroll_bg_pane_g_ParamLimits

0x1b7a,	// (0x00001b7a) scroll_handle_pane_g1_ParamLimits

0x1bc9,	// (0x00001bc9) scroll_handle_pane_g2_ParamLimits

0x1ba7,	// (0x00001ba7) scroll_handle_pane_g3_ParamLimits

0xaa21,	// (0x0000aa21) scroll_handle_pane_g_ParamLimits

0x2b4d,	// (0x00002b4d) popup_choice_list_window_ParamLimits

0x2b4d,	// (0x00002b4d) popup_choice_list_window

0x3571,	// (0x00003571) choice_list_pane

0x3639,	// (0x00003639) cell_toolbar_pane_t1

0x3661,	// (0x00003661) toolbar_button_pane_ParamLimits

0x4a4a,	// (0x00004a4a) ai_gene_pane_1_t2_ParamLimits

0x4a4a,	// (0x00004a4a) ai_gene_pane_1_t2

0x0001,

0xac37,	// (0x0000ac37) ai_gene_pane_1_t_ParamLimits

0xac37,	// (0x0000ac37) ai_gene_pane_1_t

0x648b,	// (0x0000648b) scroll_sc2_left_pane_g1

0x648b,	// (0x0000648b) scroll_sc2_right_pane_g1

0x2b1d,	// (0x00002b1d) bg_popup_sub_pane_cp10

0x6495,	// (0x00006495) list_choice_list_pane

0x64ac,	// (0x000064ac) list_single_choice_list_pane_ParamLimits

0x64ac,	// (0x000064ac) list_single_choice_list_pane

0x64c0,	// (0x000064c0) list_single_choice_list_pane_g1

0x64c8,	// (0x000064c8) list_single_choice_list_pane_t1_ParamLimits

0x64c8,	// (0x000064c8) list_single_choice_list_pane_t1

0x64dd,	// (0x000064dd) choice_list_pane_g1

0x64e5,	// (0x000064e5) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18b7,	// (0x000018b7) title_pane_stacon_g2_ParamLimits

0x18b7,	// (0x000018b7) title_pane_stacon_g2

0x0002,

0xaa00,	// (0x0000aa00) title_pane_stacon_g_ParamLimits

0xaa00,	// (0x0000aa00) title_pane_stacon_g

0x25a4,	// (0x000025a4) cursor_press_pane

0xc2e7,	// (0x0000c2e7) popup_fep_hwr_window_ParamLimits

0xc2e7,	// (0x0000c2e7) popup_fep_hwr_window

0x2c6f,	// (0x00002c6f) popup_fep_vkb_window_ParamLimits

0x2c6f,	// (0x00002c6f) popup_fep_vkb_window

0x64f3,	// (0x000064f3) cursor_press_pane_g1

0x0002,

0xf573,	// (0x0000f573) fep_vkb_side_pane_g_ParamLimits

0x6534,	// (0x00006534) fep_hwr_candidate_pane_ParamLimits

0x6534,	// (0x00006534) fep_hwr_candidate_pane

0x655e,	// (0x0000655e) fep_hwr_side_pane_ParamLimits

0x655e,	// (0x0000655e) fep_hwr_side_pane

0x657e,	// (0x0000657e) fep_hwr_top_pane_ParamLimits

0x657e,	// (0x0000657e) fep_hwr_top_pane

0x6596,	// (0x00006596) fep_hwr_write_pane_ParamLimits

0x6596,	// (0x00006596) fep_hwr_write_pane

0xf573,	// (0x0000f573) fep_vkb_side_pane_g

0x65d0,	// (0x000065d0) fep_hwr_top_pane_g1

0x65e2,	// (0x000065e2) fep_hwr_top_pane_g2

0x65f4,	// (0x000065f4) fep_hwr_top_pane_g3

0x0002,

0xae24,	// (0x0000ae24) fep_hwr_top_pane_g

0x6609,	// (0x00006609) fep_hwr_top_text_pane

0x1d20,	// (0x00001d20) fep_hwr_top_text_pane_g1

0x66e1,	// (0x000066e1) fep_hwr_top_text_pane_t1

0x6731,	// (0x00006731) fep_hwr_candidate_pane_g1

0x69aa,	// (0x000069aa) fep_vkb_keypad_pane_g3_ParamLimits

0x69aa,	// (0x000069aa) fep_vkb_keypad_pane_g3

0x69d2,	// (0x000069d2) fep_vkb_keypad_pane_g4_ParamLimits

0x69d2,	// (0x000069d2) fep_vkb_keypad_pane_g4

0x6a41,	// (0x00006a41) fep_vkb_bottom_pane_g2_ParamLimits

0x6a41,	// (0x00006a41) fep_vkb_bottom_pane_g2

0x0001,

0xae4f,	// (0x0000ae4f) fep_vkb_bottom_pane_g_ParamLimits

0xae4f,	// (0x0000ae4f) fep_vkb_bottom_pane_g

0x648b,	// (0x0000648b) cell_vkb_side_pane_g2

0x0001,

0xae59,	// (0x0000ae59) cell_vkb_side_pane_g

0x6acc,	// (0x00006acc) cell_vkb_side_pane_t1

0x6ada,	// (0x00006ada) cell_vkb_side_pane_t1_copy1

0x648b,	// (0x0000648b) bg_fep_vkb_candidate_pane_g2

0x6c06,	// (0x00006c06) cell_vkb_candidate_pane_ParamLimits

0x6765,	// (0x00006765) aid_size_cell_vkb_ParamLimits

0x6765,	// (0x00006765) aid_size_cell_vkb

0x6c06,	// (0x00006c06) cell_vkb_candidate_pane

0x6c3a,	// (0x00006c3a) bg_popup_fep_shadow_pane_g1

0xd6c1,	// (0x0000d6c1) fep_vkb_bottom_pane_ParamLimits

0xd6c1,	// (0x0000d6c1) fep_vkb_bottom_pane

0x6829,	// (0x00006829) fep_vkb_candidate_pane_ParamLimits

0x6829,	// (0x00006829) fep_vkb_candidate_pane

0xd6e6,	// (0x0000d6e6) fep_vkb_keypad_pane_ParamLimits

0xd6e6,	// (0x0000d6e6) fep_vkb_keypad_pane

0xd722,	// (0x0000d722) fep_vkb_side_pane_ParamLimits

0xd722,	// (0x0000d722) fep_vkb_side_pane

0xd75e,	// (0x0000d75e) fep_vkb_top_pane_ParamLimits

0xd75e,	// (0x0000d75e) fep_vkb_top_pane

0x6903,	// (0x00006903) fep_vkb_top_pane_g1_ParamLimits

0x6903,	// (0x00006903) fep_vkb_top_pane_g1

0x6912,	// (0x00006912) fep_vkb_top_pane_g2_ParamLimits

0x6912,	// (0x00006912) fep_vkb_top_pane_g2

0x6921,	// (0x00006921) fep_vkb_top_pane_g3_ParamLimits

0x6921,	// (0x00006921) fep_vkb_top_pane_g3

0x0003,

0xae3f,	// (0x0000ae3f) fep_vkb_top_pane_g_ParamLimits

0xae3f,	// (0x0000ae3f) fep_vkb_top_pane_g

0x693f,	// (0x0000693f) fep_vkb_top_text_pane_ParamLimits

0x693f,	// (0x0000693f) fep_vkb_top_text_pane

0xd79a,	// (0x0000d79a) fep_vkb_side_pane_g1_ParamLimits

0xd79a,	// (0x0000d79a) fep_vkb_side_pane_g1

0x6999,	// (0x00006999) grid_vkb_side_pane_ParamLimits

0x6999,	// (0x00006999) grid_vkb_side_pane

0x6c42,	// (0x00006c42) bg_popup_fep_shadow_pane_g2

0x6c4b,	// (0x00006c4b) bg_popup_fep_shadow_pane_g3

0x6c53,	// (0x00006c53) bg_popup_fep_shadow_pane_g4

0x6c5c,	// (0x00006c5c) bg_popup_fep_shadow_pane_g5

0x6c66,	// (0x00006c66) bg_popup_fep_shadow_pane_g6

0x6c6e,	// (0x00006c6e) bg_popup_fep_shadow_pane_g7

0x14cd,	// (0x000014cd) bg_popup_fep_shadow_pane_g8

0x69f0,	// (0x000069f0) grid_vkb_keypad_number_pane_ParamLimits

0x69f0,	// (0x000069f0) grid_vkb_keypad_number_pane

0x6a00,	// (0x00006a00) grid_vkb_keypad_pane_ParamLimits

0x6a00,	// (0x00006a00) grid_vkb_keypad_pane

0x6a26,	// (0x00006a26) fep_vkb_bottom_pane_g1_ParamLimits

0x6a26,	// (0x00006a26) fep_vkb_bottom_pane_g1

0x6a4f,	// (0x00006a4f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a4f,	// (0x00006a4f) grid_vkb_keypad_bottom_left_pane

0x6a64,	// (0x00006a64) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a64,	// (0x00006a64) grid_vkb_keypad_bottom_right_pane

0x6a79,	// (0x00006a79) fep_vkb_top_text_pane_g1

0xd7e1,	// (0x0000d7e1) fep_vkb_top_text_pane_t1

0xd7f3,	// (0x0000d7f3) cell_vkb_side_pane_ParamLimits

0xd7f3,	// (0x0000d7f3) cell_vkb_side_pane

0x648b,	// (0x0000648b) cell_vkb_side_pane_g1

0x6ae8,	// (0x00006ae8) cell_vkb_keypad_pane_ParamLimits

0x6ae8,	// (0x00006ae8) cell_vkb_keypad_pane

0x6b5d,	// (0x00006b5d) cell_vkb_keypad_pane_g1

0x0008,

0xae6c,	// (0x0000ae6c) bg_popup_fep_shadow_pane_g

0x648b,	// (0x0000648b) cell_hwr_side_pane_g1

0x648b,	// (0x0000648b) cell_hwr_side_pane_g2

0x6b67,	// (0x00006b67) cell_vkb_keypad_pane_t1

0xd809,	// (0x0000d809) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd809,	// (0x0000d809) cell_vkb_keypad_bottom_left_pane

0xd81e,	// (0x0000d81e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd81e,	// (0x0000d81e) cell_vkb_keypad_bottom_right_pane

0x648b,	// (0x0000648b) cell_vkb_keypad_bottom_left_pane_g1

0x648b,	// (0x0000648b) cell_vkb_keypad_bottom_right_pane_g1

0x6bcb,	// (0x00006bcb) cell_vkb_keypad_number_pane_ParamLimits

0x6bcb,	// (0x00006bcb) cell_vkb_keypad_number_pane

0x6bea,	// (0x00006bea) cell_vkb_keypad_number_pane_g1

0x6bf4,	// (0x00006bf4) cell_vkb_keypad_number_pane_g2

0x6bfd,	// (0x00006bfd) cell_vkb_keypad_number_pane_g3

0x0002,

0xae5e,	// (0x0000ae5e) cell_vkb_keypad_number_pane_g

0x6b67,	// (0x00006b67) cell_vkb_keypad_number_pane_t1

0x6c21,	// (0x00006c21) fep_vkb_candidate_pane_g1

0x0001,

0xae59,	// (0x0000ae59) cell_hwr_side_pane_g

0x6c80,	// (0x00006c80) cell_hwr_side_pane_t1

0x6c8e,	// (0x00006c8e) cell_hwr_side_pane_t1_copy1

0x6931,	// (0x00006931) cell_hwr_candidate_pane_g1

0x6cde,	// (0x00006cde) cell_hwr_candidate_pane_t1

0x648b,	// (0x0000648b) cell_vkb_candidate_pane_g2

0x6d32,	// (0x00006d32) cell_vkb_candidate_pane_t1

0x64fb,	// (0x000064fb) bg_popup_fep_shadow_pane_ParamLimits

0x64fb,	// (0x000064fb) bg_popup_fep_shadow_pane

0x65b0,	// (0x000065b0) bg_fep_hwr_top_pane_g4

0x661e,	// (0x0000661e) bg_hwr_side_pane_g1_ParamLimits

0x661e,	// (0x0000661e) bg_hwr_side_pane_g1

0xd67a,	// (0x0000d67a) cell_hwr_side_pane_ParamLimits

0xd67a,	// (0x0000d67a) cell_hwr_side_pane

0x668c,	// (0x0000668c) fep_hwr_write_pane_g1_ParamLimits

0x668c,	// (0x0000668c) fep_hwr_write_pane_g1

0x6699,	// (0x00006699) fep_hwr_write_pane_g2_ParamLimits

0x6699,	// (0x00006699) fep_hwr_write_pane_g2

0x66a6,	// (0x000066a6) fep_hwr_write_pane_g3_ParamLimits

0x66a6,	// (0x000066a6) fep_hwr_write_pane_g3

0xd69a,	// (0x0000d69a) fep_hwr_write_pane_g4_ParamLimits

0xd69a,	// (0x0000d69a) fep_hwr_write_pane_g4

0x0005,

0xf566,	// (0x0000f566) fep_hwr_write_pane_g_ParamLimits

0xf566,	// (0x0000f566) fep_hwr_write_pane_g

0x65b0,	// (0x000065b0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65b0,	// (0x000065b0) bg_fep_hwr_candidate_pane_g2

0x66ef,	// (0x000066ef) cell_hwr_candidate_pane_ParamLimits

0x66ef,	// (0x000066ef) cell_hwr_candidate_pane

0x6731,	// (0x00006731) fep_hwr_candidate_pane_g1_ParamLimits

0x6793,	// (0x00006793) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6793,	// (0x00006793) bg_popup_fep_shadow_pane_cp2

0x6931,	// (0x00006931) fep_vkb_top_pane_g4_ParamLimits

0x6931,	// (0x00006931) fep_vkb_top_pane_g4

0x6977,	// (0x00006977) fep_vkb_side_pane_g2_ParamLimits

0x6977,	// (0x00006977) fep_vkb_side_pane_g2

0xbac8,	// (0x0000bac8) list_setting_pane_t4_ParamLimits

0xbac8,	// (0x0000bac8) list_setting_pane_t4

0xbb42,	// (0x0000bb42) list_setting_number_pane_t5_ParamLimits

0xbb42,	// (0x0000bb42) list_setting_number_pane_t5

0xbe51,	// (0x0000be51) list_double_heading_pane_cp2_ParamLimits

0xbe51,	// (0x0000be51) list_double_heading_pane_cp2

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2_ParamLimits

0x139b,	// (0x0000139b) list_double_heading_pane_g1_cp2

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2_ParamLimits

0x13a7,	// (0x000013a7) list_double_heading_pane_g2_cp2

0x6d40,	// (0x00006d40) list_double_heading_pane_t1_cp2_ParamLimits

0x6d40,	// (0x00006d40) list_double_heading_pane_t1_cp2

0x6d56,	// (0x00006d56) list_double_heading_pane_t2_cp2_ParamLimits

0x6d56,	// (0x00006d56) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02

0x6d68,	// (0x00006d68) list_preview_fixed_pane

0x6dae,	// (0x00006dae) list_empty_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_empty_pane_fp

0x6dae,	// (0x00006dae) list_single_cale_day_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_cale_day_pane_fp

0x6dae,	// (0x00006dae) list_single_graphic_heading_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_graphic_heading_pane_fp

0x6dae,	// (0x00006dae) list_single_graphic_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_graphic_pane_fp

0x6dae,	// (0x00006dae) list_single_heading_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_heading_pane_fp

0x6dae,	// (0x00006dae) list_single_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_pane_fp

0x6dc3,	// (0x00006dc3) list_single_pane_fp_g1_ParamLimits

0x6dc3,	// (0x00006dc3) list_single_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_pane_fp_g2

0x6dcf,	// (0x00006dcf) list_single_pane_fp_g3_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_pane_fp_g3

0x6de3,	// (0x00006de3) list_single_pane_fp_g4_ParamLimits

0x6de3,	// (0x00006de3) list_single_pane_fp_g4

0x0003,

0xae8d,	// (0x0000ae8d) list_single_pane_fp_g_ParamLimits

0xae8d,	// (0x0000ae8d) list_single_pane_fp_g

0x6def,	// (0x00006def) list_single_pane_fp_t1_ParamLimits

0x6def,	// (0x00006def) list_single_pane_fp_t1

0x6e06,	// (0x00006e06) list_single_graphic_pane_fp_g1_ParamLimits

0x6e06,	// (0x00006e06) list_single_graphic_pane_fp_g1

0x6dc3,	// (0x00006dc3) list_single_graphic_pane_fp_g2_ParamLimits

0x6dc3,	// (0x00006dc3) list_single_graphic_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_pane_fp_g3

0x6dcf,	// (0x00006dcf) list_single_graphic_pane_fp_g4_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_graphic_pane_fp_g4

0x6de3,	// (0x00006de3) list_single_graphic_pane_fp_g5_ParamLimits

0x6de3,	// (0x00006de3) list_single_graphic_pane_fp_g5

0x0004,

0xae96,	// (0x0000ae96) list_single_graphic_pane_fp_g_ParamLimits

0xae96,	// (0x0000ae96) list_single_graphic_pane_fp_g

0x6e12,	// (0x00006e12) list_single_graphic_pane_fp_t1_ParamLimits

0x6e12,	// (0x00006e12) list_single_graphic_pane_fp_t1

0x6e06,	// (0x00006e06) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6e06,	// (0x00006e06) list_single_graphic_heading_pane_fp_g1

0x6dc3,	// (0x00006dc3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6dc3,	// (0x00006dc3) list_single_graphic_heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_heading_pane_fp_g3

0x6dcf,	// (0x00006dcf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_graphic_heading_pane_fp_g4

0x6de3,	// (0x00006de3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6de3,	// (0x00006de3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xae96,	// (0x0000ae96) list_single_graphic_heading_pane_fp_g_ParamLimits

0xae96,	// (0x0000ae96) list_single_graphic_heading_pane_fp_g

0x6e28,	// (0x00006e28) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6e28,	// (0x00006e28) list_single_graphic_heading_pane_fp_t1

0x6e3e,	// (0x00006e3e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e3e,	// (0x00006e3e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xaea1,	// (0x0000aea1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xaea1,	// (0x0000aea1) list_single_graphic_heading_pane_fp_t

0x6e50,	// (0x00006e50) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e50,	// (0x00006e50) list_single_cale_day_pane_fp_g1

0x6e88,	// (0x00006e88) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e88,	// (0x00006e88) list_single_cale_day_pane_fp_g2

0x6e94,	// (0x00006e94) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e94,	// (0x00006e94) list_single_cale_day_pane_fp_g3

0x6ebc,	// (0x00006ebc) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ebc,	// (0x00006ebc) list_single_cale_day_pane_fp_g4

0x6ee0,	// (0x00006ee0) list_single_cale_day_pane_fp_g5_ParamLimits

0x6ee0,	// (0x00006ee0) list_single_cale_day_pane_fp_g5

0x0004,

0xaea6,	// (0x0000aea6) list_single_cale_day_pane_fp_g_ParamLimits

0xaea6,	// (0x0000aea6) list_single_cale_day_pane_fp_g

0x6f04,	// (0x00006f04) list_single_cale_day_pane_fp_t1_ParamLimits

0x6f04,	// (0x00006f04) list_single_cale_day_pane_fp_t1

0x6f2a,	// (0x00006f2a) list_single_cale_day_pane_fp_t2_ParamLimits

0x6f2a,	// (0x00006f2a) list_single_cale_day_pane_fp_t2

0x6f43,	// (0x00006f43) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f43,	// (0x00006f43) list_single_cale_day_pane_fp_t3

0x0002,

0xaeb1,	// (0x0000aeb1) list_single_cale_day_pane_fp_t_ParamLimits

0xaeb1,	// (0x0000aeb1) list_single_cale_day_pane_fp_t

0x6dc3,	// (0x00006dc3) list_empty_pane_fp_g1_ParamLimits

0x6dc3,	// (0x00006dc3) list_empty_pane_fp_g1

0x6f5c,	// (0x00006f5c) list_empty_pane_fp_t1

0x6f6a,	// (0x00006f6a) list_empty_pane_fp_t2

0x0001,

0xaeb8,	// (0x0000aeb8) list_empty_pane_fp_t

0x6dc3,	// (0x00006dc3) list_single_heading_pane_fp_g1_ParamLimits

0x6dc3,	// (0x00006dc3) list_single_heading_pane_fp_g1

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_heading_pane_fp_g2

0x6dcf,	// (0x00006dcf) list_single_heading_pane_fp_g3_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_heading_pane_fp_g3

0x0002,

0xaebd,	// (0x0000aebd) list_single_heading_pane_fp_g_ParamLimits

0xaebd,	// (0x0000aebd) list_single_heading_pane_fp_g

0x6f78,	// (0x00006f78) list_single_heading_pane_fp_t1_ParamLimits

0x6f78,	// (0x00006f78) list_single_heading_pane_fp_t1

0x6f8a,	// (0x00006f8a) list_single_heading_pane_fp_t2_ParamLimits

0x6f8a,	// (0x00006f8a) list_single_heading_pane_fp_t2

0x0001,

0xaec4,	// (0x0000aec4) list_single_heading_pane_fp_t_ParamLimits

0xaec4,	// (0x0000aec4) list_single_heading_pane_fp_t

0x16fe,	// (0x000016fe) aid_size_cell_fast

0x07a1,	// (0x000007a1) soft_indicator_pane_cp1_t1

0x173b,	// (0x0000173b) cell_app_pane_cp2_ParamLimits

0x173b,	// (0x0000173b) cell_app_pane_cp2

0x651d,	// (0x0000651d) fep_hwr_candidate_drop_down_list_pane

0x674b,	// (0x0000674b) fep_hwr_candidate_pane_g3_ParamLimits

0x674b,	// (0x0000674b) fep_hwr_candidate_pane_g3

0x6758,	// (0x00006758) fep_hwr_candidate_pane_g4_ParamLimits

0x6758,	// (0x00006758) fep_hwr_candidate_pane_g4

0x0002,

0xae38,	// (0x0000ae38) fep_hwr_candidate_pane_g_ParamLimits

0xae38,	// (0x0000ae38) fep_hwr_candidate_pane_g

0x6818,	// (0x00006818) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6818,	// (0x00006818) fep_vkb_candidate_drop_down_list_pane

0x6c29,	// (0x00006c29) fep_vkb_candidate_pane_g3

0x6c31,	// (0x00006c31) fep_vkb_candidate_pane_g4

0x0002,

0xae65,	// (0x0000ae65) fep_vkb_candidate_pane_g

0x6931,	// (0x00006931) cell_hwr_candidate_pane_g1_ParamLimits

0x6c9c,	// (0x00006c9c) cell_hwr_candidate_pane_g3_ParamLimits

0x6c9c,	// (0x00006c9c) cell_hwr_candidate_pane_g3

0x6cbd,	// (0x00006cbd) cell_hwr_candidate_pane_g4_ParamLimits

0x6cbd,	// (0x00006cbd) cell_hwr_candidate_pane_g4

0x0002,

0xae7f,	// (0x0000ae7f) cell_hwr_candidate_pane_g_ParamLimits

0xae7f,	// (0x0000ae7f) cell_hwr_candidate_pane_g

0x6cfc,	// (0x00006cfc) cell_vkb_candidate_pane_g3_ParamLimits

0x6cfc,	// (0x00006cfc) cell_vkb_candidate_pane_g3

0x6d17,	// (0x00006d17) cell_vkb_candidate_pane_g4_ParamLimits

0x6d17,	// (0x00006d17) cell_vkb_candidate_pane_g4

0x6fa0,	// (0x00006fa0) cell_app_pane_cp2_g1_ParamLimits

0x6fa0,	// (0x00006fa0) cell_app_pane_cp2_g1

0x6fbe,	// (0x00006fbe) cell_app_pane_cp2_g2_ParamLimits

0x6fbe,	// (0x00006fbe) cell_app_pane_cp2_g2

0x0001,

0xaec9,	// (0x0000aec9) cell_app_pane_cp2_g_ParamLimits

0xaec9,	// (0x0000aec9) cell_app_pane_cp2_g

0x6fca,	// (0x00006fca) cell_app_pane_cp2_t1_ParamLimits

0x6fca,	// (0x00006fca) cell_app_pane_cp2_t1

0x1375,	// (0x00001375) grid_highlight_pane_cp1_ParamLimits

0x1375,	// (0x00001375) grid_highlight_pane_cp1

0x6fdc,	// (0x00006fdc) cell_hwr_candidate_pane_cp1_ParamLimits

0x6fdc,	// (0x00006fdc) cell_hwr_candidate_pane_cp1

0x6931,	// (0x00006931) fep_hwr_candidate_drop_down_list_pane_g1

0x6ffb,	// (0x00006ffb) fep_hwr_candidate_drop_down_list_pane_g2

0x7008,	// (0x00007008) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaece,	// (0x0000aece) fep_hwr_candidate_drop_down_list_pane_g

0x7015,	// (0x00007015) fep_hwr_candidate_drop_down_list_scroll_pane

0x701e,	// (0x0000701e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x701e,	// (0x0000701e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x702b,	// (0x0000702b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x702b,	// (0x0000702b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7038,	// (0x00007038) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7038,	// (0x00007038) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6cfc,	// (0x00006cfc) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cfc,	// (0x00006cfc) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6d17,	// (0x00006d17) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6d17,	// (0x00006d17) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7045,	// (0x00007045) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7045,	// (0x00007045) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7060,	// (0x00007060) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x707b,	// (0x0000707b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x707b,	// (0x0000707b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaed5,	// (0x0000aed5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaed5,	// (0x0000aed5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7096,	// (0x00007096) cell_vkb_candidate_pane_cp1_ParamLimits

0x7096,	// (0x00007096) cell_vkb_candidate_pane_cp1

0x6931,	// (0x00006931) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6931,	// (0x00006931) fep_vkb_candidate_drop_down_list_pane_g1

0x6ffb,	// (0x00006ffb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6ffb,	// (0x00006ffb) fep_vkb_candidate_drop_down_list_pane_g2

0x7008,	// (0x00007008) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7008,	// (0x00007008) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaece,	// (0x0000aece) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaece,	// (0x0000aece) fep_vkb_candidate_drop_down_list_pane_g

0x70b6,	// (0x000070b6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x70b6,	// (0x000070b6) fep_vkb_candidate_drop_down_list_scroll_pane

0x70c3,	// (0x000070c3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70c3,	// (0x000070c3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x70d0,	// (0x000070d0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70d0,	// (0x000070d0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x70dc,	// (0x000070dc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x70dc,	// (0x000070dc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6c9c,	// (0x00006c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c9c,	// (0x00006c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6cbd,	// (0x00006cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cbd,	// (0x00006cbd) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70e8,	// (0x000070e8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70e8,	// (0x000070e8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7109,	// (0x00007109) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7109,	// (0x00007109) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x712a,	// (0x0000712a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x712a,	// (0x0000712a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xaee6,	// (0x0000aee6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xaee6,	// (0x0000aee6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb3da,	// (0x0000b3da) title_pane_g1_ParamLimits

0xb3eb,	// (0x0000b3eb) title_pane_g2_ParamLimits

0xf39a,	// (0x0000f39a) title_pane_g_ParamLimits

0x1d10,	// (0x00001d10) aid_call2_pane

0x1d18,	// (0x00001d18) aid_call_pane

0x1d20,	// (0x00001d20) popup_clock_analogue_window_g1

0x1d20,	// (0x00001d20) popup_clock_analogue_window_g2

0x1d28,	// (0x00001d28) popup_clock_analogue_window_g3

0x1d31,	// (0x00001d31) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xaa2f,	// (0x0000aa2f) popup_clock_analogue_window_g

0x1d39,	// (0x00001d39) popup_clock_analogue_window_t1

0x1dbf,	// (0x00001dbf) clock_digital_number_pane_ParamLimits

0x1dbf,	// (0x00001dbf) clock_digital_number_pane

0x1dcb,	// (0x00001dcb) clock_digital_number_pane_cp02_ParamLimits

0x1dcb,	// (0x00001dcb) clock_digital_number_pane_cp02

0x1dd7,	// (0x00001dd7) clock_digital_number_pane_cp03_ParamLimits

0x1dd7,	// (0x00001dd7) clock_digital_number_pane_cp03

0x1de3,	// (0x00001de3) clock_digital_number_pane_cp04_ParamLimits

0x1de3,	// (0x00001de3) clock_digital_number_pane_cp04

0x1def,	// (0x00001def) clock_digital_separator_pane_ParamLimits

0x1def,	// (0x00001def) clock_digital_separator_pane

0x1dfb,	// (0x00001dfb) popup_clock_digital_window_t1_ParamLimits

0x1dfb,	// (0x00001dfb) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xaa3a,	// (0x0000aa3a) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xaa3a,	// (0x0000aa3a) clock_digital_separator_pane_g

0xc8c0,	// (0x0000c8c0) aid_fill_nsta_ParamLimits

0xc9ef,	// (0x0000c9ef) indicator_nsta_pane_ParamLimits

0x3392,	// (0x00003392) popup_clock_analogue_window

0x3392,	// (0x00003392) popup_clock_digital_window

0x16bf,	// (0x000016bf) grid_indicator_nsta_pane_ParamLimits

0x5dca,	// (0x00005dca) clock_nsta_pane_t2

0x0001,

0xadb8,	// (0x0000adb8) clock_nsta_pane_t

0x1af7,	// (0x00001af7) aid_size_max_handle

0xbe48,	// (0x0000be48) aid_size_min_handle

0x25a4,	// (0x000025a4) editor_scroll_pane

0x7145,	// (0x00007145) ex_editor_pane

0x166c,	// (0x0000166c) scroll_pane_cp13

0x0db3,	// (0x00000db3) scroll_pane_cp14

0x1d69,	// (0x00001d69) scroll_pane_cp36

0xbe60,	// (0x0000be60) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe60,	// (0x0000be60) list_single_graphic_hl_pane_cp2

0xd2c6,	// (0x0000d2c6) list_single_graphic_hl_pane_ParamLimits

0xd2c6,	// (0x0000d2c6) list_single_graphic_hl_pane

0x714d,	// (0x0000714d) aid_size_min_hl_cp1

0x7156,	// (0x00007156) list_highlight_pane_cp34_ParamLimits

0x7156,	// (0x00007156) list_highlight_pane_cp34

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g1_ParamLimits

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g1

0xd839,	// (0x0000d839) list_single_graphic_hl_pane_g2_ParamLimits

0xd839,	// (0x0000d839) list_single_graphic_hl_pane_g2

0xd839,	// (0x0000d839) list_single_graphic_hl_pane_g3_ParamLimits

0xd839,	// (0x0000d839) list_single_graphic_hl_pane_g3

0x2515,	// (0x00002515) list_single_graphic_hl_pane_g4_ParamLimits

0x2515,	// (0x00002515) list_single_graphic_hl_pane_g4

0xd845,	// (0x0000d845) list_single_graphic_hl_pane_g5_ParamLimits

0xd845,	// (0x0000d845) list_single_graphic_hl_pane_g5

0x0004,

0xf57f,	// (0x0000f57f) list_single_graphic_hl_pane_g_ParamLimits

0xf57f,	// (0x0000f57f) list_single_graphic_hl_pane_g

0xd859,	// (0x0000d859) list_single_graphic_hl_pane_t1_ParamLimits

0xd859,	// (0x0000d859) list_single_graphic_hl_pane_t1

0x71aa,	// (0x000071aa) aid_size_min_hl_cp2

0x71b3,	// (0x000071b3) list_highlight_pane_cp34_cp2_ParamLimits

0x71b3,	// (0x000071b3) list_highlight_pane_cp34_cp2

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7167,	// (0x00007167) list_single_graphic_hl_pane_g1_cp2

0x71c0,	// (0x000071c0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x71c0,	// (0x000071c0) list_single_graphic_hl_pane_g2_cp2

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x71cc,	// (0x000071cc) list_single_graphic_hl_pane_g3_cp2

0x3505,	// (0x00003505) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3505,	// (0x00003505) list_single_graphic_hl_pane_g4_cp2

0x7180,	// (0x00007180) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7180,	// (0x00007180) list_single_graphic_hl_pane_g5_cp2

0xc0d6,	// (0x0000c0d6) control_pane_g4_ParamLimits

0xc0d6,	// (0x0000c0d6) control_pane_g4

0x2b1d,	// (0x00002b1d) bg_popup_sub_pane_cp10_ParamLimits

0x6495,	// (0x00006495) list_choice_list_pane_ParamLimits

0x64a4,	// (0x000064a4) scroll_pane_cp23

0x0831,	// (0x00000831) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d68,	// (0x00006d68) list_preview_fixed_pane_ParamLimits

0x6d7e,	// (0x00006d7e) list_preview_fixed_pane_cp_ParamLimits

0x6d7e,	// (0x00006d7e) list_preview_fixed_pane_cp

0x6d8a,	// (0x00006d8a) popup_preview_fixed_window_g1_ParamLimits

0x6d8a,	// (0x00006d8a) popup_preview_fixed_window_g1

0x6d96,	// (0x00006d96) popup_preview_fixed_window_g2_ParamLimits

0x6d96,	// (0x00006d96) popup_preview_fixed_window_g2

0x0002,

0xae86,	// (0x0000ae86) popup_preview_fixed_window_g_ParamLimits

0xae86,	// (0x0000ae86) popup_preview_fixed_window_g

0x199c,	// (0x0000199c) aid_navi_side_left_pane_ParamLimits

0x19b1,	// (0x000019b1) aid_navi_side_right_pane_ParamLimits

0x19c9,	// (0x000019c9) navi_icon_pane_stacon_ParamLimits

0x19dd,	// (0x000019dd) navi_navi_pane_stacon_ParamLimits

0x19c9,	// (0x000019c9) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x71f0,	// (0x000071f0) listscroll_text_info_pane

0x71f8,	// (0x000071f8) list_text_info_pane_ParamLimits

0x71f8,	// (0x000071f8) list_text_info_pane

0x7207,	// (0x00007207) scroll_pane_cp24_ParamLimits

0x7207,	// (0x00007207) scroll_pane_cp24

0xd86f,	// (0x0000d86f) list_text_info_pane_t1_ParamLimits

0xd86f,	// (0x0000d86f) list_text_info_pane_t1

0xc25a,	// (0x0000c25a) popup_fast_swap2_window_ParamLimits

0xc25a,	// (0x0000c25a) popup_fast_swap2_window

0x7256,	// (0x00007256) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c83,	// (0x00003c83) heading_pane_cp2

0x0a7d,	// (0x00000a7d) listscroll_fast2_pane

0x7260,	// (0x00007260) grid_fast2_pane

0x726a,	// (0x0000726a) listscroll_fast2_pane_g1

0x7272,	// (0x00007272) listscroll_fast2_pane_g2

0x0001,

0xaf02,	// (0x0000af02) listscroll_fast2_pane_g

0x166c,	// (0x0000166c) scroll_pane_cp26

0x727c,	// (0x0000727c) cell_fast2_pane_ParamLimits

0x727c,	// (0x0000727c) cell_fast2_pane

0x7291,	// (0x00007291) cell_fast2_pane_g1

0x729a,	// (0x0000729a) cell_fast2_pane_g2

0x72a3,	// (0x000072a3) cell_fast2_pane_g3

0x0002,

0xaf07,	// (0x0000af07) cell_fast2_pane_g

0x0b70,	// (0x00000b70) grid_highlight_pane_cp9

0x0b85,	// (0x00000b85) main_eswt_pane_ParamLimits

0x0b85,	// (0x00000b85) main_eswt_pane

0x721c,	// (0x0000721c) list_single_text_info_pane

0x72ab,	// (0x000072ab) eswt_ctrl_button_pane

0x72ab,	// (0x000072ab) eswt_ctrl_canvas_pane

0x72b3,	// (0x000072b3) eswt_ctrl_combo_pane

0x72ab,	// (0x000072ab) eswt_ctrl_default_pane

0x72ab,	// (0x000072ab) eswt_ctrl_label_pane

0x72bb,	// (0x000072bb) eswt_ctrl_wait_pane

0x72c3,	// (0x000072c3) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x72e3,	// (0x000072e3) popup_eswt_tasktip_window_ParamLimits

0x72e3,	// (0x000072e3) popup_eswt_tasktip_window

0x37fb,	// (0x000037fb) bg_popup_window_pane_cp18

0x72f4,	// (0x000072f4) eswt_control_pane_g1_ParamLimits

0x72f4,	// (0x000072f4) eswt_control_pane_g1

0x7301,	// (0x00007301) eswt_control_pane_g2_ParamLimits

0x7301,	// (0x00007301) eswt_control_pane_g2

0x730e,	// (0x0000730e) eswt_control_pane_g3_ParamLimits

0x730e,	// (0x0000730e) eswt_control_pane_g3

0x731b,	// (0x0000731b) eswt_control_pane_g4_ParamLimits

0x731b,	// (0x0000731b) eswt_control_pane_g4

0x0003,

0xaf0e,	// (0x0000af0e) eswt_control_pane_g_ParamLimits

0xaf0e,	// (0x0000af0e) eswt_control_pane_g

0x1375,	// (0x00001375) bg_button_pane_ParamLimits

0x1375,	// (0x00001375) bg_button_pane

0x0b85,	// (0x00000b85) common_borders_pane_copy2_ParamLimits

0x0b85,	// (0x00000b85) common_borders_pane_copy2

0x7328,	// (0x00007328) control_button_pane_g1_ParamLimits

0x7328,	// (0x00007328) control_button_pane_g1

0x7334,	// (0x00007334) control_button_pane_g2_ParamLimits

0x7334,	// (0x00007334) control_button_pane_g2

0x7340,	// (0x00007340) control_button_pane_g3_ParamLimits

0x7340,	// (0x00007340) control_button_pane_g3

0x0002,

0xaf17,	// (0x0000af17) control_button_pane_g_ParamLimits

0xaf17,	// (0x0000af17) control_button_pane_g

0x7354,	// (0x00007354) control_button_pane_t1

0x7362,	// (0x00007362) control_button_pane_t2

0x0001,

0xaf1e,	// (0x0000af1e) control_button_pane_t

0x366d,	// (0x0000366d) bg_button_pane_g1

0x3675,	// (0x00003675) bg_button_pane_g2

0x367d,	// (0x0000367d) bg_button_pane_g3

0x3685,	// (0x00003685) bg_button_pane_g4

0x368d,	// (0x0000368d) bg_button_pane_g5

0x3695,	// (0x00003695) bg_button_pane_g6

0x369d,	// (0x0000369d) bg_button_pane_g7

0x36a5,	// (0x000036a5) bg_button_pane_g8

0x36ad,	// (0x000036ad) bg_button_pane_g9

0x0008,

0xab8b,	// (0x0000ab8b) bg_button_pane_g

0x6450,	// (0x00006450) common_borders_pane_ParamLimits

0x6450,	// (0x00006450) common_borders_pane

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy1_ParamLimits

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy1

0x7301,	// (0x00007301) eswt_control_pane_g2_copy1_ParamLimits

0x7301,	// (0x00007301) eswt_control_pane_g2_copy1

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy1_ParamLimits

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy1

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy1_ParamLimits

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy1

0x648b,	// (0x0000648b) bg_eswt_ctrl_canvas_pane_g1

0x6450,	// (0x00006450) common_borders_pane_cp2_ParamLimits

0x6450,	// (0x00006450) common_borders_pane_cp2

0x6450,	// (0x00006450) common_borders_pane_cp3_ParamLimits

0x6450,	// (0x00006450) common_borders_pane_cp3

0x7370,	// (0x00007370) separator_horizontal_pane

0x7378,	// (0x00007378) separator_vertical_pane

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy2_ParamLimits

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy2

0x7301,	// (0x00007301) eswt_control_pane_g2_copy2_ParamLimits

0x7301,	// (0x00007301) eswt_control_pane_g2_copy2

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy2_ParamLimits

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy2

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy2_ParamLimits

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7381,	// (0x00007381) separator_horizontal_pane_g1

0x738a,	// (0x0000738a) separator_horizontal_pane_g2

0x7393,	// (0x00007393) separator_horizontal_pane_g3

0x0002,

0xaf23,	// (0x0000af23) separator_horizontal_pane_g

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy3_ParamLimits

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy3

0x7301,	// (0x00007301) eswt_control_pane_g2_copy3_ParamLimits

0x7301,	// (0x00007301) eswt_control_pane_g2_copy3

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy3_ParamLimits

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy3

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy3_ParamLimits

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x739c,	// (0x0000739c) separator_vertical_pane_g1

0x73a5,	// (0x000073a5) separator_vertical_pane_g2

0x73ae,	// (0x000073ae) separator_vertical_pane_g3

0x0002,

0xaf2a,	// (0x0000af2a) separator_vertical_pane_g

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy4_ParamLimits

0x72f4,	// (0x000072f4) eswt_control_pane_g1_copy4

0x7301,	// (0x00007301) eswt_control_pane_g2_copy4_ParamLimits

0x7301,	// (0x00007301) eswt_control_pane_g2_copy4

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy4_ParamLimits

0x730e,	// (0x0000730e) eswt_control_pane_g3_copy4

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy4_ParamLimits

0x731b,	// (0x0000731b) eswt_control_pane_g4_copy4

0xd88a,	// (0x0000d88a) eswt_ctrl_combo_button_pane

0xd892,	// (0x0000d892) eswt_ctrl_input_pane

0xd89a,	// (0x0000d89a) popup_choice_list_window_cp70

0xd8a2,	// (0x0000d8a2) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6450,	// (0x00006450) bg_button_pane_cp70_ParamLimits

0x6450,	// (0x00006450) bg_button_pane_cp70

0xd8b0,	// (0x0000d8b0) eswt_ctrl_combo_button_pane_g1

0x73e5,	// (0x000073e5) wait_bar_pane_cp70

0x37fb,	// (0x000037fb) bg_popup_window_pane_cp70_ParamLimits

0x37fb,	// (0x000037fb) bg_popup_window_pane_cp70

0x73ed,	// (0x000073ed) popup_eswt_tasktip_window_t1

0x7403,	// (0x00007403) wait_bar_pane_cp71_ParamLimits

0x7403,	// (0x00007403) wait_bar_pane_cp71

0x740f,	// (0x0000740f) grid_eswt_app_pane

0x1b5b,	// (0x00001b5b) scroll_pane_cp70

0xd8b8,	// (0x0000d8b8) cell_eswt_app_pane_ParamLimits

0xd8b8,	// (0x0000d8b8) cell_eswt_app_pane

0xd8e2,	// (0x0000d8e2) cell_eswt_app_pane_g1_ParamLimits

0xd8e2,	// (0x0000d8e2) cell_eswt_app_pane_g1

0xd911,	// (0x0000d911) cell_eswt_app_pane_g2_ParamLimits

0xd911,	// (0x0000d911) cell_eswt_app_pane_g2

0x0001,

0xf58a,	// (0x0000f58a) cell_eswt_app_pane_g_ParamLimits

0xf58a,	// (0x0000f58a) cell_eswt_app_pane_g

0xd93a,	// (0x0000d93a) cell_eswt_app_pane_t1_ParamLimits

0xd93a,	// (0x0000d93a) cell_eswt_app_pane_t1

0x74d2,	// (0x000074d2) grid_highlight_pane_cp70_ParamLimits

0x74d2,	// (0x000074d2) grid_highlight_pane_cp70

0x2479,	// (0x00002479) set_content_pane_g1

0x28f9,	// (0x000028f9) status_small_volume_pane

0x74de,	// (0x000074de) status_small_volume_pane_g1

0x74e6,	// (0x000074e6) volume_small2_pane

0x74ef,	// (0x000074ef) volume_small2_pane_g1

0x74f8,	// (0x000074f8) volume_small2_pane_g2

0x7501,	// (0x00007501) volume_small2_pane_g3

0x750a,	// (0x0000750a) volume_small2_pane_g4

0x7513,	// (0x00007513) volume_small2_pane_g5

0x751c,	// (0x0000751c) volume_small2_pane_g6

0x7525,	// (0x00007525) volume_small2_pane_g7

0x752e,	// (0x0000752e) volume_small2_pane_g8

0x7537,	// (0x00007537) volume_small2_pane_g9

0x7540,	// (0x00007540) volume_small2_pane_g10

0x0009,

0xaf36,	// (0x0000af36) volume_small2_pane_g

0x6a79,	// (0x00006a79) fep_vkb_top_text_pane_g1_ParamLimits

0xd7e1,	// (0x0000d7e1) fep_vkb_top_text_pane_t1_ParamLimits

0x6da2,	// (0x00006da2) popup_preview_fixed_window_g3_ParamLimits

0x6da2,	// (0x00006da2) popup_preview_fixed_window_g3

0xc853,	// (0x0000c853) popup_toolbar_trans_pane

0xd10f,	// (0x0000d10f) aid_height_set_list_ParamLimits

0x4e68,	// (0x00004e68) aid_size_parent_ParamLimits

0x2b1d,	// (0x00002b1d) list_highlight_pane_cp2_ParamLimits

0x2479,	// (0x00002479) set_content_pane_g1_ParamLimits

0xd2d7,	// (0x0000d2d7) list_single_image_pane_ParamLimits

0xd2d7,	// (0x0000d2d7) list_single_image_pane

0x7549,	// (0x00007549) aid_size_cell_image_ParamLimits

0x7549,	// (0x00007549) aid_size_cell_image

0xd96c,	// (0x0000d96c) grid_single_image_pane_ParamLimits

0xd96c,	// (0x0000d96c) grid_single_image_pane

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_image_pane_g1

0x6dcf,	// (0x00006dcf) list_single_image_pane_g2_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_image_pane_g2

0x0001,

0xaf4b,	// (0x0000af4b) list_single_image_pane_g_ParamLimits

0xaf4b,	// (0x0000af4b) list_single_image_pane_g

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1_ParamLimits

0x0f0f,	// (0x00000f0f) list_single_image_pane_t1

0xd97a,	// (0x0000d97a) cell_image_list_pane_ParamLimits

0xd97a,	// (0x0000d97a) cell_image_list_pane

0x7577,	// (0x00007577) cell_image_list_pane_g1

0x7580,	// (0x00007580) cell_image_list_pane_g2

0x0001,

0xaf50,	// (0x0000af50) cell_image_list_pane_g

0x7589,	// (0x00007589) aid_size_cell_tb_trans_pane

0x1375,	// (0x00001375) bg_tb_trans_pane

0x759b,	// (0x0000759b) grid_tb_trans_pane

0x366d,	// (0x0000366d) bg_tb_trans_pane_g1

0x3675,	// (0x00003675) bg_tb_trans_pane_g2

0x367d,	// (0x0000367d) bg_tb_trans_pane_g3

0x3685,	// (0x00003685) bg_tb_trans_pane_g4

0x368d,	// (0x0000368d) bg_tb_trans_pane_g5

0x36a5,	// (0x000036a5) bg_tb_trans_pane_g6

0x36ad,	// (0x000036ad) bg_tb_trans_pane_g7

0x3695,	// (0x00003695) bg_tb_trans_pane_g8

0x369d,	// (0x0000369d) bg_tb_trans_pane_g9

0x0008,

0xaf55,	// (0x0000af55) bg_tb_trans_pane_g

0x75af,	// (0x000075af) cell_toolbar_trans_pane_ParamLimits

0x75af,	// (0x000075af) cell_toolbar_trans_pane

0x648b,	// (0x0000648b) cell_toolbar_trans_pane_g1

0xd537,	// (0x0000d537) list_form2_midp_pane_t1

0xd545,	// (0x0000d545) list_form2_midp_pane_t2

0x0001,

0xf55a,	// (0x0000f55a) list_form2_midp_pane_t

0x6021,	// (0x00006021) scroll_pane_cp51_ParamLimits

0x622c,	// (0x0000622c) form2_midp_wait_pane_g1

0x6235,	// (0x00006235) form2_midp_wait_pane_g2

0x623e,	// (0x0000623e) form2_midp_wait_pane_g3

0x0002,

0xae13,	// (0x0000ae13) form2_midp_wait_pane_g

0x04fd,	// (0x000004fd) list_highlight_pane_cp21_ParamLimits

0x6295,	// (0x00006295) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x62a4,	// (0x000062a4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x506e,	// (0x0000506e) list_single_2graphic_im_pane_ParamLimits

0x506e,	// (0x0000506e) list_single_2graphic_im_pane

0xd990,	// (0x0000d990) list_single_2graphic_im_pane_g1_ParamLimits

0xd990,	// (0x0000d990) list_single_2graphic_im_pane_g1

0xd9a1,	// (0x0000d9a1) list_single_2graphic_im_pane_g2_ParamLimits

0xd9a1,	// (0x0000d9a1) list_single_2graphic_im_pane_g2

0xd9ad,	// (0x0000d9ad) list_single_2graphic_im_pane_g3_ParamLimits

0xd9ad,	// (0x0000d9ad) list_single_2graphic_im_pane_g3

0x0003,

0xf58f,	// (0x0000f58f) list_single_2graphic_im_pane_g_ParamLimits

0xf58f,	// (0x0000f58f) list_single_2graphic_im_pane_g

0xd9c1,	// (0x0000d9c1) list_single_2graphic_im_pane_t1_ParamLimits

0xd9c1,	// (0x0000d9c1) list_single_2graphic_im_pane_t1

0x6dae,	// (0x00006dae) list_single_graphic_2heading_pane_fp_ParamLimits

0x6dae,	// (0x00006dae) list_single_graphic_2heading_pane_fp

0x6e06,	// (0x00006e06) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6e06,	// (0x00006e06) list_single_graphic_2heading_pane_fp_g1

0x6dc3,	// (0x00006dc3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6dc3,	// (0x00006dc3) list_single_graphic_2heading_pane_fp_g2

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fd8,	// (0x00000fd8) list_single_graphic_2heading_pane_fp_g3

0x6dcf,	// (0x00006dcf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6dcf,	// (0x00006dcf) list_single_graphic_2heading_pane_fp_g4

0x6de3,	// (0x00006de3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6de3,	// (0x00006de3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xae96,	// (0x0000ae96) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xae96,	// (0x0000ae96) list_single_graphic_2heading_pane_fp_g

0x7643,	// (0x00007643) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7643,	// (0x00007643) list_single_graphic_2heading_pane_fp_t1

0x6e3e,	// (0x00006e3e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e3e,	// (0x00006e3e) list_single_graphic_2heading_pane_fp_t2

0x7659,	// (0x00007659) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7659,	// (0x00007659) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xaf71,	// (0x0000af71) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xaf71,	// (0x0000af71) list_single_graphic_2heading_pane_fp_t

0x66c9,	// (0x000066c9) fep_hwr_write_pane_g5_ParamLimits

0x66c9,	// (0x000066c9) fep_hwr_write_pane_g5

0x66d5,	// (0x000066d5) fep_hwr_write_pane_g6_ParamLimits

0x66d5,	// (0x000066d5) fep_hwr_write_pane_g6

0x72c3,	// (0x000072c3) eswt_shell_pane_ParamLimits

0x37fb,	// (0x000037fb) bg_popup_window_pane_cp18_ParamLimits

0x4d10,	// (0x00004d10) heading_pane_cp70

0x73ed,	// (0x000073ed) popup_eswt_tasktip_window_t1_ParamLimits

0xc914,	// (0x0000c914) aid_touch_tab_arrow_left

0xc92a,	// (0x0000c92a) aid_touch_tab_arrow_right

0xb403,	// (0x0000b403) title_pane_g3_ParamLimits

0xb403,	// (0x0000b403) title_pane_g3

0x1254,	// (0x00001254) set_value_pane_g1

0xc853,	// (0x0000c853) popup_toolbar_trans_pane_ParamLimits

0x7589,	// (0x00007589) aid_size_cell_tb_trans_pane_ParamLimits

0x1375,	// (0x00001375) bg_tb_trans_pane_ParamLimits

0x759b,	// (0x0000759b) grid_tb_trans_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane_ParamLimits

0x0831,	// (0x00000831) cont_note_pane

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_text_pane

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane_ParamLimits

0x0b85,	// (0x00000b85) cont_snote2_single_graphic_pane

0x3e9e,	// (0x00003e9e) cont_note_wait_pane_ParamLimits

0x3e9e,	// (0x00003e9e) cont_note_wait_pane

0x3e9e,	// (0x00003e9e) cont_note_image_pane_ParamLimits

0x3e9e,	// (0x00003e9e) cont_note_image_pane

0x766f,	// (0x0000766f) popup_note2_window_g1_ParamLimits

0x766f,	// (0x0000766f) popup_note2_window_g1

0x76a0,	// (0x000076a0) popup_note2_window_t1_ParamLimits

0x76a0,	// (0x000076a0) popup_note2_window_t1

0x76e5,	// (0x000076e5) popup_note2_window_t2_ParamLimits

0x76e5,	// (0x000076e5) popup_note2_window_t2

0x772a,	// (0x0000772a) popup_note2_window_t3_ParamLimits

0x772a,	// (0x0000772a) popup_note2_window_t3

0x776f,	// (0x0000776f) popup_note2_window_t4_ParamLimits

0x776f,	// (0x0000776f) popup_note2_window_t4

0x08b5,	// (0x000008b5) popup_note2_window_t5_ParamLimits

0x08b5,	// (0x000008b5) popup_note2_window_t5

0x0004,

0xaf7d,	// (0x0000af7d) popup_note2_window_t_ParamLimits

0xaf7d,	// (0x0000af7d) popup_note2_window_t

0x779e,	// (0x0000779e) popup_note2_image_window_g1_ParamLimits

0x779e,	// (0x0000779e) popup_note2_image_window_g1

0x77aa,	// (0x000077aa) popup_note2_image_window_g2_ParamLimits

0x77aa,	// (0x000077aa) popup_note2_image_window_g2

0x0001,

0xaf88,	// (0x0000af88) popup_note2_image_window_g_ParamLimits

0xaf88,	// (0x0000af88) popup_note2_image_window_g

0x77bc,	// (0x000077bc) popup_note2_image_window_t1_ParamLimits

0x77bc,	// (0x000077bc) popup_note2_image_window_t1

0x77d4,	// (0x000077d4) popup_note2_image_window_t2_ParamLimits

0x77d4,	// (0x000077d4) popup_note2_image_window_t2

0x77ec,	// (0x000077ec) popup_note2_image_window_t3_ParamLimits

0x77ec,	// (0x000077ec) popup_note2_image_window_t3

0x0002,

0xaf8d,	// (0x0000af8d) popup_note2_image_window_t_ParamLimits

0xaf8d,	// (0x0000af8d) popup_note2_image_window_t

0x3eac,	// (0x00003eac) popup_note2_wait_window_g1_ParamLimits

0x3eac,	// (0x00003eac) popup_note2_wait_window_g1

0x7808,	// (0x00007808) popup_note2_wait_window_g2_ParamLimits

0x7808,	// (0x00007808) popup_note2_wait_window_g2

0x3ec4,	// (0x00003ec4) popup_note2_wait_window_g3_ParamLimits

0x3ec4,	// (0x00003ec4) popup_note2_wait_window_g3

0x0002,

0xaf94,	// (0x0000af94) popup_note2_wait_window_g_ParamLimits

0xaf94,	// (0x0000af94) popup_note2_wait_window_g

0x7814,	// (0x00007814) popup_note2_wait_window_t1_ParamLimits

0x7814,	// (0x00007814) popup_note2_wait_window_t1

0x7832,	// (0x00007832) popup_note2_wait_window_t2_ParamLimits

0x7832,	// (0x00007832) popup_note2_wait_window_t2

0x7850,	// (0x00007850) popup_note2_wait_window_t3_ParamLimits

0x7850,	// (0x00007850) popup_note2_wait_window_t3

0x7862,	// (0x00007862) popup_note2_wait_window_t4_ParamLimits

0x7862,	// (0x00007862) popup_note2_wait_window_t4

0x0003,

0xaf9b,	// (0x0000af9b) popup_note2_wait_window_t_ParamLimits

0xaf9b,	// (0x0000af9b) popup_note2_wait_window_t

0x7874,	// (0x00007874) wait_bar2_pane_ParamLimits

0x7874,	// (0x00007874) wait_bar2_pane

0x788c,	// (0x0000788c) popup_snote2_single_text_window_g1_ParamLimits

0x788c,	// (0x0000788c) popup_snote2_single_text_window_g1

0x78b4,	// (0x000078b4) popup_snote2_single_text_window_t1_ParamLimits

0x78b4,	// (0x000078b4) popup_snote2_single_text_window_t1

0x7900,	// (0x00007900) popup_snote2_single_text_window_t2_ParamLimits

0x7900,	// (0x00007900) popup_snote2_single_text_window_t2

0x794c,	// (0x0000794c) popup_snote2_single_text_window_t3_ParamLimits

0x794c,	// (0x0000794c) popup_snote2_single_text_window_t3

0x798d,	// (0x0000798d) popup_snote2_single_text_window_t4_ParamLimits

0x798d,	// (0x0000798d) popup_snote2_single_text_window_t4

0x79c3,	// (0x000079c3) popup_snote2_single_text_window_t5_ParamLimits

0x79c3,	// (0x000079c3) popup_snote2_single_text_window_t5

0x0004,

0xafa4,	// (0x0000afa4) popup_snote2_single_text_window_t_ParamLimits

0xafa4,	// (0x0000afa4) popup_snote2_single_text_window_t

0x79ee,	// (0x000079ee) popup_snote2_single_graphic_window_g1_ParamLimits

0x79ee,	// (0x000079ee) popup_snote2_single_graphic_window_g1

0x7a16,	// (0x00007a16) popup_snote2_single_graphic_window_g2_ParamLimits

0x7a16,	// (0x00007a16) popup_snote2_single_graphic_window_g2

0x0001,

0xafaf,	// (0x0000afaf) popup_snote2_single_graphic_window_g_ParamLimits

0xafaf,	// (0x0000afaf) popup_snote2_single_graphic_window_g

0x7a3e,	// (0x00007a3e) popup_snote2_single_graphic_window_t1_ParamLimits

0x7a3e,	// (0x00007a3e) popup_snote2_single_graphic_window_t1

0x7a8a,	// (0x00007a8a) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a8a,	// (0x00007a8a) popup_snote2_single_graphic_window_t2

0x794c,	// (0x0000794c) popup_snote2_single_graphic_window_t3_ParamLimits

0x794c,	// (0x0000794c) popup_snote2_single_graphic_window_t3

0x798d,	// (0x0000798d) popup_snote2_single_graphic_window_t4_ParamLimits

0x798d,	// (0x0000798d) popup_snote2_single_graphic_window_t4

0x79c3,	// (0x000079c3) popup_snote2_single_graphic_window_t5_ParamLimits

0x79c3,	// (0x000079c3) popup_snote2_single_graphic_window_t5

0x0004,

0xafb4,	// (0x0000afb4) popup_snote2_single_graphic_window_t_ParamLimits

0xafb4,	// (0x0000afb4) popup_snote2_single_graphic_window_t

0x5e8d,	// (0x00005e8d) clock_nsta_pane_cp2_t1

0x5e8d,	// (0x00005e8d) clock_nsta_pane_cp2_t2

0x0001,

0xadd4,	// (0x0000add4) clock_nsta_pane_cp2_t

0x138f,	// (0x0000138f) form_field_data_wide_pane_g1_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2_ParamLimits

0x139b,	// (0x0000139b) form_field_data_wide_pane_g2

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3_ParamLimits

0x13a7,	// (0x000013a7) form_field_data_wide_pane_g3

0x0002,

0xa9b2,	// (0x0000a9b2) form_field_data_wide_pane_g_ParamLimits

0xa9b2,	// (0x0000a9b2) form_field_data_wide_pane_g

0xd451,	// (0x0000d451) grid_touch_3_pane_ParamLimits

0xd451,	// (0x0000d451) grid_touch_3_pane

0xd9f2,	// (0x0000d9f2) cell_touch_3_pane_ParamLimits

0xd9f2,	// (0x0000d9f2) cell_touch_3_pane

0x648b,	// (0x0000648b) cell_touch_3_pane_g1

0x648b,	// (0x0000648b) cell_touch_3_pane_g2

0x0001,

0xae59,	// (0x0000ae59) cell_touch_3_pane_g

0x08e7,	// (0x000008e7) cont_query_data_pane

0x08ef,	// (0x000008ef) cont_query_data_pane_cp1

0x7b04,	// (0x00007b04) button_value_adjust_pane_cp7

0x7b0c,	// (0x00007b0c) query_popup_pane_cp3

0x1e5f,	// (0x00001e5f) bg_popup_sub_pane_cp22_ParamLimits

0x1e75,	// (0x00001e75) navi_navi_volume_pane_cp2

0x1e90,	// (0x00001e90) popup_side_volume_key_window_g2

0x1e9f,	// (0x00001e9f) popup_side_volume_key_window_g3

0x0002,

0xaa44,	// (0x0000aa44) popup_side_volume_key_window_g

0x1ebc,	// (0x00001ebc) popup_side_volume_key_window_t2

0x0001,

0xaa4b,	// (0x0000aa4b) popup_side_volume_key_window_t

0x2343,	// (0x00002343) popup_side_volume_key_window_ParamLimits

0xb8c3,	// (0x0000b8c3) list_double_graphic_pane_g4_ParamLimits

0xb8c3,	// (0x0000b8c3) list_double_graphic_pane_g4

0xd2b3,	// (0x0000d2b3) list_single_2heading_msg_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) list_single_2heading_msg_pane

0xda3b,	// (0x0000da3b) list_single_2heading_msg_pane_g1_ParamLimits

0xda3b,	// (0x0000da3b) list_single_2heading_msg_pane_g1

0xda47,	// (0x0000da47) list_single_2heading_msg_pane_g2_ParamLimits

0xda47,	// (0x0000da47) list_single_2heading_msg_pane_g2

0xda5a,	// (0x0000da5a) list_single_2heading_msg_pane_g3_ParamLimits

0xda5a,	// (0x0000da5a) list_single_2heading_msg_pane_g3

0xda66,	// (0x0000da66) list_single_2heading_msg_pane_g4_ParamLimits

0xda66,	// (0x0000da66) list_single_2heading_msg_pane_g4

0x0003,

0xf598,	// (0x0000f598) list_single_2heading_msg_pane_g_ParamLimits

0xf598,	// (0x0000f598) list_single_2heading_msg_pane_g

0xda7e,	// (0x0000da7e) list_single_2heading_msg_pane_t1_ParamLimits

0xda7e,	// (0x0000da7e) list_single_2heading_msg_pane_t1

0xdaa6,	// (0x0000daa6) list_single_2heading_msg_pane_t2_ParamLimits

0xdaa6,	// (0x0000daa6) list_single_2heading_msg_pane_t2

0xdb11,	// (0x0000db11) list_single_2heading_msg_pane_t3_ParamLimits

0xdb11,	// (0x0000db11) list_single_2heading_msg_pane_t3

0x7bfb,	// (0x00007bfb) list_single_2heading_msg_pane_t4_ParamLimits

0x7bfb,	// (0x00007bfb) list_single_2heading_msg_pane_t4

0x0003,

0xf5a1,	// (0x0000f5a1) list_single_2heading_msg_pane_t_ParamLimits

0xf5a1,	// (0x0000f5a1) list_single_2heading_msg_pane_t

0x0451,	// (0x00000451) title_pane_g4_ParamLimits

0x0451,	// (0x00000451) title_pane_g4

0x18c4,	// (0x000018c4) title_pane_stacon_g3_ParamLimits

0x18c4,	// (0x000018c4) title_pane_stacon_g3

0x7606,	// (0x00007606) list_single_2graphic_im_pane_g4_ParamLimits

0x7606,	// (0x00007606) list_single_2graphic_im_pane_g4

0x4a67,	// (0x00004a67) popup_side_volume_key_window_cp

0x54e3,	// (0x000054e3) main_idle_act2_pane_t1

0x36b5,	// (0x000036b5) toolbar_button_pane_g10

0xb770,	// (0x0000b770) popup_toolbar_window_cp1

0x5e7e,	// (0x00005e7e) clock_nsta_pane_cp_t1

0x5e7e,	// (0x00005e7e) clock_nsta_pane_cp_t2

0x0001,

0xadcf,	// (0x0000adcf) clock_nsta_pane_cp_t

0x1e75,	// (0x00001e75) navi_navi_volume_pane_cp2_ParamLimits

0x1e84,	// (0x00001e84) popup_side_volume_key_window_g1_ParamLimits

0x1e90,	// (0x00001e90) popup_side_volume_key_window_g2_ParamLimits

0x1e9f,	// (0x00001e9f) popup_side_volume_key_window_g3_ParamLimits

0xaa44,	// (0x0000aa44) popup_side_volume_key_window_g_ParamLimits

0x6509,	// (0x00006509) fep_hwr_aid_pane

0x65b0,	// (0x000065b0) bg_fep_hwr_top_pane_g4_ParamLimits

0x65d0,	// (0x000065d0) fep_hwr_top_pane_g1_ParamLimits

0x65e2,	// (0x000065e2) fep_hwr_top_pane_g2_ParamLimits

0x65f4,	// (0x000065f4) fep_hwr_top_pane_g3_ParamLimits

0xae24,	// (0x0000ae24) fep_hwr_top_pane_g_ParamLimits

0x6609,	// (0x00006609) fep_hwr_top_text_pane_ParamLimits

0x482a,	// (0x0000482a) aid_touch_tab_arrow_arrow_2

0x4833,	// (0x00004833) aid_touch_tab_arrow_left_2

0x651d,	// (0x0000651d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6554,	// (0x00006554) fep_hwr_prediction_pane

0x6881,	// (0x00006881) fep_vkb_prediction_pane

0xd7c1,	// (0x0000d7c1) fep_vkb_side_pane_g3_ParamLimits

0xd7c1,	// (0x0000d7c1) fep_vkb_side_pane_g3

0x6931,	// (0x00006931) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6ffb,	// (0x00006ffb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7008,	// (0x00007008) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaece,	// (0x0000aece) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7c20,	// (0x00007c20) fep_hwr_prediction_pane_g1

0x7c2a,	// (0x00007c2a) fep_hwr_prediction_pane_g2

0x7c32,	// (0x00007c32) fep_hwr_prediction_pane_g3

0x7c3a,	// (0x00007c3a) fep_hwr_prediction_pane_g4

0x0003,

0xafd1,	// (0x0000afd1) fep_hwr_prediction_pane_g

0x7c20,	// (0x00007c20) fep_vkb_prediction_pane_g1

0x7c42,	// (0x00007c42) fep_vkb_prediction_pane_g2

0x7c4a,	// (0x00007c4a) fep_vkb_prediction_pane_g3

0x7c52,	// (0x00007c52) fep_vkb_prediction_pane_g4

0x0003,

0xafda,	// (0x0000afda) fep_vkb_prediction_pane_g

0x4dd1,	// (0x00004dd1) slider_set_pane_g3

0x4de5,	// (0x00004de5) slider_set_pane_g4

0x4dfd,	// (0x00004dfd) slider_set_pane_g5

0x4dd1,	// (0x00004dd1) slider_set_pane_g6

0x4e13,	// (0x00004e13) slider_set_pane_g7

0x4fcd,	// (0x00004fcd) slider_form_pane_g3

0x4fd6,	// (0x00004fd6) slider_form_pane_g4

0x4fde,	// (0x00004fde) slider_form_pane_g5

0x4fcd,	// (0x00004fcd) slider_form_pane_g6

0xd25a,	// (0x0000d25a) slider_form_pane_g7

0x57d1,	// (0x000057d1) slider_set_pane_vc_g3

0x57da,	// (0x000057da) slider_set_pane_vc_g4

0x57e3,	// (0x000057e3) slider_set_pane_vc_g5

0x57d1,	// (0x000057d1) slider_set_pane_vc_g6

0x57ec,	// (0x000057ec) slider_set_pane_vc_g7

0x57d1,	// (0x000057d1) slider_form_pane_vc_g1

0x57da,	// (0x000057da) slider_form_pane_vc_g2

0x57e3,	// (0x000057e3) slider_form_pane_vc_g3

0x57d1,	// (0x000057d1) slider_form_pane_vc_g4

0x5b84,	// (0x00005b84) slider_form_pane_vc_g5

0x0004,

0xada8,	// (0x0000ada8) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c5a,	// (0x00007c5a) ai3_links_pane

0xdb7f,	// (0x0000db7f) popup_ai3_data_window_ParamLimits

0xdb7f,	// (0x0000db7f) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdb99,	// (0x0000db99) cell_ai3_links_pane_ParamLimits

0xdb99,	// (0x0000db99) cell_ai3_links_pane

0x7c95,	// (0x00007c95) bg_popup_sub_pane_cp11

0x7ca2,	// (0x00007ca2) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7cc7,	// (0x00007cc7) heading_ai3_data_pane

0x7ccf,	// (0x00007ccf) list_ai3_gene_pane

0x7cdb,	// (0x00007cdb) popup_ai3_data_window_g1

0x7ce3,	// (0x00007ce3) heading_ai3_data_pane_g1

0x7ceb,	// (0x00007ceb) heading_ai3_data_pane_t1

0x7cf9,	// (0x00007cf9) list_double_ai3_gene_pane_ParamLimits

0x7cf9,	// (0x00007cf9) list_double_ai3_gene_pane

0x7d06,	// (0x00007d06) list_single_ai3_gene_pane_ParamLimits

0x7d06,	// (0x00007d06) list_single_ai3_gene_pane

0x6450,	// (0x00006450) list_highlight_pane_cp7_ParamLimits

0x6450,	// (0x00006450) list_highlight_pane_cp7

0x7d13,	// (0x00007d13) list_single_a13_gene_pane_t1_ParamLimits

0x7d13,	// (0x00007d13) list_single_a13_gene_pane_t1

0x7d2a,	// (0x00007d2a) list_single_ai3_gene_pane_g1

0x7d33,	// (0x00007d33) list_single_ai3_gene_pane_g2

0x0001,

0xafe3,	// (0x0000afe3) list_single_ai3_gene_pane_g

0x7d3b,	// (0x00007d3b) list_double_ai3_gene_pane_g1_ParamLimits

0x7d3b,	// (0x00007d3b) list_double_ai3_gene_pane_g1

0x7d47,	// (0x00007d47) list_double_ai3_gene_pane_t1_ParamLimits

0x7d47,	// (0x00007d47) list_double_ai3_gene_pane_t1

0x7d63,	// (0x00007d63) list_double_ai3_gene_pane_t2_ParamLimits

0x7d63,	// (0x00007d63) list_double_ai3_gene_pane_t2

0x7d79,	// (0x00007d79) list_double_ai3_gene_pane_t3_ParamLimits

0x7d79,	// (0x00007d79) list_double_ai3_gene_pane_t3

0x0002,

0xafe8,	// (0x0000afe8) list_double_ai3_gene_pane_t_ParamLimits

0xafe8,	// (0x0000afe8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b1d,	// (0x00007b1d) aid_size_min_col_2

0xda25,	// (0x0000da25) aid_size_min_msg_ParamLimits

0xda25,	// (0x0000da25) aid_size_min_msg

0xd7d5,	// (0x0000d7d5) fep_vkb_top_text_pane_g2_ParamLimits

0xd7d5,	// (0x0000d7d5) fep_vkb_top_text_pane_g2

0x0001,

0xf57a,	// (0x0000f57a) fep_vkb_top_text_pane_g_ParamLimits

0xf57a,	// (0x0000f57a) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7d96,	// (0x00007d96) grid_hc_apps_pane_ParamLimits

0x7d96,	// (0x00007d96) grid_hc_apps_pane

0x7da5,	// (0x00007da5) list_hc_apps_pane

0x7dad,	// (0x00007dad) scroll_pane_cp37_ParamLimits

0x7dad,	// (0x00007dad) scroll_pane_cp37

0xdbb3,	// (0x0000dbb3) cell_hc_apps_pane_ParamLimits

0xdbb3,	// (0x0000dbb3) cell_hc_apps_pane

0xdc71,	// (0x0000dc71) cell_hc_apps_pane_g1_ParamLimits

0xdc71,	// (0x0000dc71) cell_hc_apps_pane_g1

0x7e98,	// (0x00007e98) cell_hc_apps_pane_g2_ParamLimits

0x7e98,	// (0x00007e98) cell_hc_apps_pane_g2

0x7eb4,	// (0x00007eb4) cell_hc_apps_pane_g3_ParamLimits

0x7eb4,	// (0x00007eb4) cell_hc_apps_pane_g3

0x0002,

0xf5aa,	// (0x0000f5aa) cell_hc_apps_pane_g_ParamLimits

0xf5aa,	// (0x0000f5aa) cell_hc_apps_pane_g

0xdc9e,	// (0x0000dc9e) cell_hc_apps_pane_t1_ParamLimits

0xdc9e,	// (0x0000dc9e) cell_hc_apps_pane_t1

0x0831,	// (0x00000831) grid_highlight_pane_cp10_ParamLimits

0x0831,	// (0x00000831) grid_highlight_pane_cp10

0xdcdc,	// (0x0000dcdc) list_single_hc_apps_pane_ParamLimits

0xdcdc,	// (0x0000dcdc) list_single_hc_apps_pane

0xdd09,	// (0x0000dd09) list_single_hc_apps_pane_g1

0xdd22,	// (0x0000dd22) list_single_hc_apps_pane_g2

0x0001,

0xf5b1,	// (0x0000f5b1) list_single_hc_apps_pane_g

0xdd3b,	// (0x0000dd3b) list_single_hc_apps_pane_g2_copy1

0x7fc0,	// (0x00007fc0) list_single_hc_apps_pane_t1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_ParamLimits

0x0547,	// (0x00000547) setting_slider_pane_t1_ParamLimits

0x0560,	// (0x00000560) setting_slider_pane_t2_ParamLimits

0x057a,	// (0x0000057a) setting_slider_pane_t3_ParamLimits

0xa89a,	// (0x0000a89a) setting_slider_pane_t_ParamLimits

0x0592,	// (0x00000592) slider_set_pane_ParamLimits

0x2982,	// (0x00002982) control_pane_g5_ParamLimits

0x2982,	// (0x00002982) control_pane_g5

0x4db8,	// (0x00004db8) slider_set_pane_g1_ParamLimits

0x4dc5,	// (0x00004dc5) slider_set_pane_g2_ParamLimits

0x4dd1,	// (0x00004dd1) slider_set_pane_g3_ParamLimits

0x4de5,	// (0x00004de5) slider_set_pane_g4_ParamLimits

0x4dfd,	// (0x00004dfd) slider_set_pane_g5_ParamLimits

0x4dd1,	// (0x00004dd1) slider_set_pane_g6_ParamLimits

0x4e13,	// (0x00004e13) slider_set_pane_g7_ParamLimits

0xac89,	// (0x0000ac89) slider_set_pane_g_ParamLimits

0x2424,	// (0x00002424) navi_icon_text_pane_ParamLimits

0xc8e0,	// (0x0000c8e0) aid_fill_nsta_2_ParamLimits

0xc914,	// (0x0000c914) aid_touch_tab_arrow_left_ParamLimits

0xc92a,	// (0x0000c92a) aid_touch_tab_arrow_right_ParamLimits

0xc9c5,	// (0x0000c9c5) clock_nsta_pane_ParamLimits

0xd024,	// (0x0000d024) navi_icon_pane_g1_ParamLimits

0xd030,	// (0x0000d030) navi_text_pane_t1_ParamLimits

0xd519,	// (0x0000d519) navi_icon_text_pane_g1_ParamLimits

0xd525,	// (0x0000d525) navi_icon_text_pane_t1_ParamLimits

0xdd09,	// (0x0000dd09) list_single_hc_apps_pane_g1_ParamLimits

0xdd22,	// (0x0000dd22) list_single_hc_apps_pane_g2_ParamLimits

0xf5b1,	// (0x0000f5b1) list_single_hc_apps_pane_g_ParamLimits

0xdd3b,	// (0x0000dd3b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7fc0,	// (0x00007fc0) list_single_hc_apps_pane_t1_ParamLimits

0xb36f,	// (0x0000b36f) popup_toolbar2_fixed_window_ParamLimits

0xb36f,	// (0x0000b36f) popup_toolbar2_fixed_window

0xc849,	// (0x0000c849) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7fee,	// (0x00007fee) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7fee,	// (0x00007fee) grid_toolbar2_fixed_pane

0xdd57,	// (0x0000dd57) cell_toolbar2_fixed_pane_ParamLimits

0xdd57,	// (0x0000dd57) cell_toolbar2_fixed_pane

0xdd72,	// (0x0000dd72) cell_toolbar2_fixed_pane_g1

0x800f,	// (0x0000800f) toolbar2_fixed_button_pane

0x366d,	// (0x0000366d) toolbar2_fixed_button_pane_g1

0x3675,	// (0x00003675) toolbar2_fixed_button_pane_g2

0x367d,	// (0x0000367d) toolbar2_fixed_button_pane_g3

0x3685,	// (0x00003685) toolbar2_fixed_button_pane_g4

0x368d,	// (0x0000368d) toolbar2_fixed_button_pane_g5

0x3695,	// (0x00003695) toolbar2_fixed_button_pane_g6

0x369d,	// (0x0000369d) toolbar2_fixed_button_pane_g7

0x36a5,	// (0x000036a5) toolbar2_fixed_button_pane_g8

0x36ad,	// (0x000036ad) toolbar2_fixed_button_pane_g9

0x0008,

0xab8b,	// (0x0000ab8b) toolbar2_fixed_button_pane_g

0x8017,	// (0x00008017) cell_toolbar2_float_pane_ParamLimits

0x8017,	// (0x00008017) cell_toolbar2_float_pane

0x8028,	// (0x00008028) cell_toolbar2_float_pane_g1

0x800f,	// (0x0000800f) toolbar2_fixed_button_pane_cp

0xd6af,	// (0x0000d6af) fep_vkb_accented_list_pane_ParamLimits

0xd6af,	// (0x0000d6af) fep_vkb_accented_list_pane

0x6c78,	// (0x00006c78) bg_popup_fep_shadow_pane_g9

0x25a4,	// (0x000025a4) bg_popup_fep_shadow_pane_cp3

0x1653,	// (0x00001653) list_accented_list_pane

0x8031,	// (0x00008031) list_single_accented_list_pane_ParamLimits

0x8031,	// (0x00008031) list_single_accented_list_pane

0x25a4,	// (0x000025a4) list_highlight_pane_cp10

0x8042,	// (0x00008042) list_single_accented_list_pane_t1

0xc773,	// (0x0000c773) popup_slider_window_ParamLimits

0xc773,	// (0x0000c773) popup_slider_window

0x7b14,	// (0x00007b14) aid_indentation_list_msg

0xde6b,	// (0x0000de6b) bg_popup_window_pane_cp19

0x8166,	// (0x00008166) popup_slider_window_g1

0x8182,	// (0x00008182) popup_slider_window_g2

0x819e,	// (0x0000819e) popup_slider_window_g3

0x0005,

0xf5b6,	// (0x0000f5b6) popup_slider_window_g

0x81fa,	// (0x000081fa) popup_slider_window_t1

0x826e,	// (0x0000826e) small_volume_slider_vertical_pane

0x648b,	// (0x0000648b) small_volume_slider_vertical_pane_g1

0x648b,	// (0x0000648b) small_volume_slider_vertical_pane_g2

0x828a,	// (0x0000828a) small_volume_slider_vertical_pane_g3

0x0002,

0xb00d,	// (0x0000b00d) small_volume_slider_vertical_pane_g

0xb2dd,	// (0x0000b2dd) area_side_right_pane_ParamLimits

0xb2dd,	// (0x0000b2dd) area_side_right_pane

0xdf23,	// (0x0000df23) aid_size_side_button_ParamLimits

0xdf23,	// (0x0000df23) aid_size_side_button

0xdf3c,	// (0x0000df3c) grid_sctrl_middle_pane_ParamLimits

0xdf3c,	// (0x0000df3c) grid_sctrl_middle_pane

0x82c7,	// (0x000082c7) sctrl_sk_bottom_pane

0x82d8,	// (0x000082d8) sctrl_sk_top_pane

0x82ea,	// (0x000082ea) aid_touch_sctrl_top

0x0831,	// (0x00000831) bg_sctrl_sk_pane_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane

0x82f7,	// (0x000082f7) sctrl_sk_top_pane_g1

0x8304,	// (0x00008304) sctrl_sk_top_pane_t1

0x82ea,	// (0x000082ea) aid_touch_sctrl_bottom

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp_ParamLimits

0x0831,	// (0x00000831) bg_sctrl_sk_pane_cp

0x831f,	// (0x0000831f) sctrl_sk_bottom_pane_g1

0x8304,	// (0x00008304) sctrl_sk_bottom_pane_t1

0xdf56,	// (0x0000df56) cell_sctrl_middle_pane_ParamLimits

0xdf56,	// (0x0000df56) cell_sctrl_middle_pane

0xdf67,	// (0x0000df67) aid_touch_sctrl_middle_ParamLimits

0xdf67,	// (0x0000df67) aid_touch_sctrl_middle

0xdf74,	// (0x0000df74) bg_sctrl_middle_pane_ParamLimits

0xdf74,	// (0x0000df74) bg_sctrl_middle_pane

0x83e4,	// (0x000083e4) cell_sctrl_middle_pane_g1_ParamLimits

0x83e4,	// (0x000083e4) cell_sctrl_middle_pane_g1

0xdf82,	// (0x0000df82) cell_sctrl_middle_pane_g2_ParamLimits

0xdf82,	// (0x0000df82) cell_sctrl_middle_pane_g2

0x0001,

0xf5c3,	// (0x0000f5c3) cell_sctrl_middle_pane_g_ParamLimits

0xf5c3,	// (0x0000f5c3) cell_sctrl_middle_pane_g

0x366d,	// (0x0000366d) bg_sctrl_middle_pane_g1

0x3675,	// (0x00003675) bg_sctrl_middle_pane_g2

0x367d,	// (0x0000367d) bg_sctrl_middle_pane_g3

0x3685,	// (0x00003685) bg_sctrl_middle_pane_g4

0x368d,	// (0x0000368d) bg_sctrl_middle_pane_g5

0x3695,	// (0x00003695) bg_sctrl_middle_pane_g6

0x369d,	// (0x0000369d) bg_sctrl_middle_pane_g7

0x36a5,	// (0x000036a5) bg_sctrl_middle_pane_g8

0x0007,

0xb01e,	// (0x0000b01e) bg_sctrl_middle_pane_g

0x36ad,	// (0x000036ad) bg_sctrl_middle_pane_g8_copy1

0x366d,	// (0x0000366d) bg_sctrl_sk_pane_g1

0x3675,	// (0x00003675) bg_sctrl_sk_pane_g2

0x367d,	// (0x0000367d) bg_sctrl_sk_pane_g3

0x0008,

0xab8b,	// (0x0000ab8b) bg_sctrl_sk_pane_g

0x0d43,	// (0x00000d43) aid_size_touch_scroll_bar

0x3685,	// (0x00003685) bg_sctrl_sk_pane_g4

0x368d,	// (0x0000368d) bg_sctrl_sk_pane_g5

0x3695,	// (0x00003695) bg_sctrl_sk_pane_g6

0x369d,	// (0x0000369d) bg_sctrl_sk_pane_g7

0x36a5,	// (0x000036a5) bg_sctrl_sk_pane_g8

0x36ad,	// (0x000036ad) bg_sctrl_sk_pane_g9

0x2bc5,	// (0x00002bc5) popup_fep_china_hwr2_fs_candidate_window

0xc2b7,	// (0x0000c2b7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc2b7,	// (0x0000c2b7) popup_fep_china_hwr2_fs_control_window

0x6931,	// (0x00006931) sctrl_sk_top_pane_g2

0x0001,

0xb014,	// (0x0000b014) sctrl_sk_top_pane_g

0xdf8e,	// (0x0000df8e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdf8e,	// (0x0000df8e) aid_fep_china_hwr2_fs_cell

0xdfa2,	// (0x0000dfa2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdfa2,	// (0x0000dfa2) bg_popup_fep_shadow_pane_cp4

0xdfb9,	// (0x0000dfb9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdfb9,	// (0x0000dfb9) bg_popup_fep_shadow_pane_cp5

0xdfcb,	// (0x0000dfcb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdfcb,	// (0x0000dfcb) popup_fep_china_hwr2_fs_control_bar_grid

0xdfdf,	// (0x0000dfdf) popup_fep_china_hwr2_fs_control_funtion_grid

0x83b8,	// (0x000083b8) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x83c2,	// (0x000083c2) popup_fep_china_hwr2_fs_candidate_grid

0xdfe7,	// (0x0000dfe7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdfe7,	// (0x0000dfe7) cell_fep_china_hwr2_fs_funtion_grid

0x648b,	// (0x0000648b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x83e4,	// (0x000083e4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x83e4,	// (0x000083e4) cell_fep_china_hwr2_fs_funtion_grid_g1

0x83f2,	// (0x000083f2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x83f2,	// (0x000083f2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb02f,	// (0x0000b02f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb02f,	// (0x0000b02f) cell_fep_china_hwr2_fs_funtion_grid_g

0xdfff,	// (0x0000dfff) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdfff,	// (0x0000dfff) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe014,	// (0x0000e014) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe014,	// (0x0000e014) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf5c8,	// (0x0000f5c8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf5c8,	// (0x0000f5c8) cell_fep_china_hwr2_fs_funtion_grid_t

0x8439,	// (0x00008439) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8441,	// (0x00008441) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8449,	// (0x00008449) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb039,	// (0x0000b039) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8451,	// (0x00008451) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8451,	// (0x00008451) cell_fep_china_hwr2_fs_candidate_grid

0x846a,	// (0x0000846a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8472,	// (0x00008472) popup_fep_china_hwr2_fs_candidate_grid_g21

0x648b,	// (0x0000648b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x648b,	// (0x0000648b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xae59,	// (0x0000ae59) cell_fep_china_hwr2_fs_candidate_grid_g

0x847a,	// (0x0000847a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x31b8,	// (0x000031b8) clock_nsta_pane_cp_24_ParamLimits

0x31b8,	// (0x000031b8) clock_nsta_pane_cp_24

0x3236,	// (0x00003236) indicator_nsta_pane_cp_24_ParamLimits

0x3236,	// (0x00003236) indicator_nsta_pane_cp_24

0x4671,	// (0x00004671) heading_pane_g1

0x0001,

0xabf0,	// (0x0000abf0) heading_pane_g

0x5274,	// (0x00005274) grid_sct_catagory_button_pane

0x52a4,	// (0x000052a4) scroll_pane_cp5_ParamLimits

0x602d,	// (0x0000602d) button_value_adjust_pane_cp5_ParamLimits

0x602d,	// (0x0000602d) button_value_adjust_pane_cp5

0x6129,	// (0x00006129) form2_midp_time_pane_ParamLimits

0x8488,	// (0x00008488) cell_sct_catagory_button_pane_ParamLimits

0x8488,	// (0x00008488) cell_sct_catagory_button_pane

0x6450,	// (0x00006450) bg_button_pane_cp01_ParamLimits

0x6450,	// (0x00006450) bg_button_pane_cp01

0x648b,	// (0x0000648b) cell_sct_catagory_button_pane_g1

0xc7ec,	// (0x0000c7ec) popup_tb_extension_window

0xe030,	// (0x0000e030) aid_size_cell_ext_ParamLimits

0xe030,	// (0x0000e030) aid_size_cell_ext

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1_ParamLimits

0x0b85,	// (0x00000b85) bg_tb_trans_pane_cp1

0xe056,	// (0x0000e056) grid_tb_ext_pane_ParamLimits

0xe056,	// (0x0000e056) grid_tb_ext_pane

0xe091,	// (0x0000e091) cell_tb_ext_pane_ParamLimits

0xe091,	// (0x0000e091) cell_tb_ext_pane

0xe0b9,	// (0x0000e0b9) cell_tb_ext_pane_g1_ParamLimits

0xe0b9,	// (0x0000e0b9) cell_tb_ext_pane_g1

0x851c,	// (0x0000851c) cell_tb_ext_pane_t1

0x0831,	// (0x00000831) list_highlight_pane_cp11_ParamLimits

0x0831,	// (0x00000831) list_highlight_pane_cp11

0x0362,	// (0x00000362) popup_uni_indicator_window_ParamLimits

0x0362,	// (0x00000362) popup_uni_indicator_window

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14

0x8537,	// (0x00008537) list_uniindi_pane

0x8543,	// (0x00008543) uniindi_top_pane

0x0831,	// (0x00000831) bg_uniindi_top_pane

0x8562,	// (0x00008562) uniindi_top_pane_g1

0x8578,	// (0x00008578) uniindi_top_pane_g2

0x0003,

0xb040,	// (0x0000b040) uniindi_top_pane_g

0x85a2,	// (0x000085a2) uniindi_top_pane_t1

0x85cc,	// (0x000085cc) list_single_uniindi_pane_ParamLimits

0x85cc,	// (0x000085cc) list_single_uniindi_pane

0x648b,	// (0x0000648b) bg_uniindi_top_pane_g1

0x85df,	// (0x000085df) list_single_uniindi_pane_g1

0x85f2,	// (0x000085f2) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x8617,	// (0x00008617) bg_sctrl_sk_pane_cp1

0x8620,	// (0x00008620) bg_sctrl_sk_pane_cp2

0x8629,	// (0x00008629) control_bg_pane_g1

0x8632,	// (0x00008632) control_bg_pane_g2

0x0001,

0xb049,	// (0x0000b049) control_bg_pane_g

0x5e10,	// (0x00005e10) cell_indicator_nsta_pane_g1_ParamLimits

0xd480,	// (0x0000d480) cell_indicator_nsta_pane_g2_ParamLimits

0xf545,	// (0x0000f545) cell_indicator_nsta_pane_g_ParamLimits

0x61b1,	// (0x000061b1) form2_midp_time_pane_t1_ParamLimits

0x64fb,	// (0x000064fb) main_idle_act4_pane_ParamLimits

0x64fb,	// (0x000064fb) main_idle_act4_pane

0xc7ec,	// (0x0000c7ec) popup_tb_extension_window_ParamLimits

0xe078,	// (0x0000e078) tb_ext_find_pane_ParamLimits

0xe078,	// (0x0000e078) tb_ext_find_pane

0x863b,	// (0x0000863b) ai_gene_pane_1_cp1

0x26e9,	// (0x000026e9) ai_gene_pane_2_cp1

0x8643,	// (0x00008643) list_single_idle_plugin_calendar_pane

0x864c,	// (0x0000864c) list_single_idle_plugin_notification_pane

0x8655,	// (0x00008655) list_single_idle_plugin_player_pane

0xe0d6,	// (0x0000e0d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe0d6,	// (0x0000e0d6) list_single_idle_plugin_shortcut_pane

0xe0fe,	// (0x0000e0fe) main_idle_act4_pane_t1

0xe114,	// (0x0000e114) main_idle_act4_pane_t2

0x0001,

0xf5cd,	// (0x0000f5cd) main_idle_act4_pane_t

0xe12a,	// (0x0000e12a) middle_sk_idle_act4_pane_ParamLimits

0xe12a,	// (0x0000e12a) middle_sk_idle_act4_pane

0xe146,	// (0x0000e146) popup_clock_digital_analogue_window_cp2

0xe16e,	// (0x0000e16e) shortcut_wheel_idle_act4_pane_ParamLimits

0xe16e,	// (0x0000e16e) shortcut_wheel_idle_act4_pane

0x648b,	// (0x0000648b) shortcut_wheel_idle_act4_pane_g1

0x648b,	// (0x0000648b) shortcut_wheel_idle_act4_pane_g2

0x648b,	// (0x0000648b) shortcut_wheel_idle_act4_pane_g3

0x648b,	// (0x0000648b) shortcut_wheel_idle_act4_pane_g4

0x648b,	// (0x0000648b) shortcut_wheel_idle_act4_pane_g5

0x86e8,	// (0x000086e8) shortcut_wheel_idle_act4_pane_g6

0x86f0,	// (0x000086f0) shortcut_wheel_idle_act4_pane_g7

0x86f8,	// (0x000086f8) shortcut_wheel_idle_act4_pane_g8

0x8700,	// (0x00008700) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb053,	// (0x0000b053) shortcut_wheel_idle_act4_pane_g

0x65b0,	// (0x000065b0) middle_sk_idle_act4_pane_g1_ParamLimits

0x65b0,	// (0x000065b0) middle_sk_idle_act4_pane_g1

0xe1eb,	// (0x0000e1eb) middle_sk_idle_act4_pane_g2_ParamLimits

0xe1eb,	// (0x0000e1eb) middle_sk_idle_act4_pane_g2

0x0001,

0xf5e2,	// (0x0000f5e2) middle_sk_idle_act4_pane_g_ParamLimits

0xf5e2,	// (0x0000f5e2) middle_sk_idle_act4_pane_g

0xe203,	// (0x0000e203) middle_sk_idle_act4_pane_t1_ParamLimits

0xe203,	// (0x0000e203) middle_sk_idle_act4_pane_t1

0xe232,	// (0x0000e232) grid_ai_shortcut_pane_ParamLimits

0xe232,	// (0x0000e232) grid_ai_shortcut_pane

0xe24f,	// (0x0000e24f) list_highlight_pane_cp16_ParamLimits

0xe24f,	// (0x0000e24f) list_highlight_pane_cp16

0xe25c,	// (0x0000e25c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe25c,	// (0x0000e25c) list_single_idle_plugin_shortcut_pane_g1

0xe268,	// (0x0000e268) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe268,	// (0x0000e268) list_single_idle_plugin_shortcut_pane_g2

0xe284,	// (0x0000e284) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe284,	// (0x0000e284) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf5e7,	// (0x0000f5e7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf5e7,	// (0x0000f5e7) list_single_idle_plugin_shortcut_pane_g

0xe299,	// (0x0000e299) cell_ai_shortcut_pane_ParamLimits

0xe299,	// (0x0000e299) cell_ai_shortcut_pane

0xe2af,	// (0x0000e2af) cell_ai_shortcut_pane_g1_ParamLimits

0xe2af,	// (0x0000e2af) cell_ai_shortcut_pane_g1

0x863b,	// (0x0000863b) ai_gene_pane_1_cp2

0x8830,	// (0x00008830) ai_gene_pane_2_cp2

0x8838,	// (0x00008838) list_highlight_pane_cp15

0x8841,	// (0x00008841) list_single_idle_plugin_calendar_pane_g1

0x8838,	// (0x00008838) list_highlight_pane_cp17

0x8849,	// (0x00008849) list_single_idle_plugin_calendar_pane_g1_copy1

0x8851,	// (0x00008851) list_single_idle_plugin_player_pane_g1

0x5585,	// (0x00005585) list_single_idle_plugin_player_pane_g2

0x0001,

0xb082,	// (0x0000b082) list_single_idle_plugin_player_pane_g

0x8859,	// (0x00008859) list_single_idle_plugin_player_pane_t1

0x8867,	// (0x00008867) list_single_idle_plugin_player_pane_t2

0x8875,	// (0x00008875) list_single_idle_plugin_player_pane_t3

0x8883,	// (0x00008883) list_single_idle_plugin_player_pane_t4

0x0003,

0xb087,	// (0x0000b087) list_single_idle_plugin_player_pane_t

0x8891,	// (0x00008891) wait_bar_pane_cp15

0x8899,	// (0x00008899) grid_ai_notification_pane

0x5585,	// (0x00005585) list_single_idle_plugin_notification_pane_g1

0xe2d1,	// (0x0000e2d1) cell_ai_notification_pane_ParamLimits

0xe2d1,	// (0x0000e2d1) cell_ai_notification_pane

0x88af,	// (0x000088af) cell_ai_notification_pane_g1

0x88b7,	// (0x000088b7) cell_ai_notification_pane_t1

0xe2de,	// (0x0000e2de) tb_ext_find_button_pane

0xe2e6,	// (0x0000e2e6) tb_ext_find_pane_g1

0xe2ee,	// (0x0000e2ee) tb_ext_find_pane_t1

0x1d20,	// (0x00001d20) tb_ext_find_button_pane_g1

0x88e3,	// (0x000088e3) tb_ext_find_button_pane_g2

0x0001,

0xb090,	// (0x0000b090) tb_ext_find_button_pane_g

0xe0fe,	// (0x0000e0fe) main_idle_act4_pane_t1_ParamLimits

0xe114,	// (0x0000e114) main_idle_act4_pane_t2_ParamLimits

0xf5cd,	// (0x0000f5cd) main_idle_act4_pane_t_ParamLimits

0xe146,	// (0x0000e146) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe15e,	// (0x0000e15e) sat_plugin_idle_act4_pane_ParamLimits

0xe15e,	// (0x0000e15e) sat_plugin_idle_act4_pane

0xe2fc,	// (0x0000e2fc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe2fc,	// (0x0000e2fc) sat_plugin_idle_act4_pane_t1

0xe314,	// (0x0000e314) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe314,	// (0x0000e314) sat_plugin_idle_act4_pane_t2

0xe32c,	// (0x0000e32c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe32c,	// (0x0000e32c) sat_plugin_idle_act4_pane_t3

0xe344,	// (0x0000e344) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe344,	// (0x0000e344) sat_plugin_idle_act4_pane_t4

0x0003,

0xf5ee,	// (0x0000f5ee) sat_plugin_idle_act4_pane_t_ParamLimits

0xf5ee,	// (0x0000f5ee) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25_ParamLimits

0x0831,	// (0x00000831) bg_popup_sub_pane_cp25

0x8938,	// (0x00008938) popup_battery_window_g1_ParamLimits

0x8938,	// (0x00008938) popup_battery_window_g1

0x8944,	// (0x00008944) popup_battery_window_t1_ParamLimits

0x8944,	// (0x00008944) popup_battery_window_t1

0x8956,	// (0x00008956) popup_battery_window_t2_ParamLimits

0x8956,	// (0x00008956) popup_battery_window_t2

0x0001,

0xb09e,	// (0x0000b09e) popup_battery_window_t_ParamLimits

0xb09e,	// (0x0000b09e) popup_battery_window_t

0xbfd5,	// (0x0000bfd5) midp_canvas_pane_ParamLimits

0xc030,	// (0x0000c030) midp_keypad_pane_ParamLimits

0xc030,	// (0x0000c030) midp_keypad_pane

0x2b1d,	// (0x00002b1d) main_midp_pane_ParamLimits

0x5e9c,	// (0x00005e9c) signal_pane_g2_cp_ParamLimits

0xe35c,	// (0x0000e35c) aid_size_cell_midp_keypad_ParamLimits

0xe35c,	// (0x0000e35c) aid_size_cell_midp_keypad

0xe37a,	// (0x0000e37a) midp_keyp_game_grid_pane_ParamLimits

0xe37a,	// (0x0000e37a) midp_keyp_game_grid_pane

0xe3a1,	// (0x0000e3a1) midp_keyp_rocker_pane_ParamLimits

0xe3a1,	// (0x0000e3a1) midp_keyp_rocker_pane

0xe3fa,	// (0x0000e3fa) midp_keyp_sk_left_pane_ParamLimits

0xe3fa,	// (0x0000e3fa) midp_keyp_sk_left_pane

0xe44e,	// (0x0000e44e) midp_keyp_sk_right_pane_ParamLimits

0xe44e,	// (0x0000e44e) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe4a2,	// (0x0000e4a2) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe4a2,	// (0x0000e4a2) midp_keyp_sk_right_pane_g1

0x648b,	// (0x0000648b) midp_keyp_rocker_pane_g1

0xe4ab,	// (0x0000e4ab) keyp_game_cell_pane_ParamLimits

0xe4ab,	// (0x0000e4ab) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe4cf,	// (0x0000e4cf) keyp_game_cell_pane_g1

0xb31f,	// (0x0000b31f) popup_fep_vkb2_window_ParamLimits

0xb31f,	// (0x0000b31f) popup_fep_vkb2_window

0xe4d8,	// (0x0000e4d8) aid_size_cell_vkb2_ParamLimits

0xe4d8,	// (0x0000e4d8) aid_size_cell_vkb2

0xe50e,	// (0x0000e50e) popup_fep_vkb2_window_g1_ParamLimits

0xe50e,	// (0x0000e50e) popup_fep_vkb2_window_g1

0xe55e,	// (0x0000e55e) vkb2_area_bottom_pane_ParamLimits

0xe55e,	// (0x0000e55e) vkb2_area_bottom_pane

0xe5b2,	// (0x0000e5b2) vkb2_area_keypad_pane_ParamLimits

0xe5b2,	// (0x0000e5b2) vkb2_area_keypad_pane

0xe5fa,	// (0x0000e5fa) vkb2_area_top_pane_ParamLimits

0xe5fa,	// (0x0000e5fa) vkb2_area_top_pane

0xe680,	// (0x0000e680) vkb2_top_entry_pane_ParamLimits

0xe680,	// (0x0000e680) vkb2_top_entry_pane

0xe6ad,	// (0x0000e6ad) vkb2_top_grid_left_pane_ParamLimits

0xe6ad,	// (0x0000e6ad) vkb2_top_grid_left_pane

0xe6cd,	// (0x0000e6cd) vkb2_top_grid_right_pane_ParamLimits

0xe6cd,	// (0x0000e6cd) vkb2_top_grid_right_pane

0x8cd7,	// (0x00008cd7) vkb2_cell_keypad_pane_ParamLimits

0x8cd7,	// (0x00008cd7) vkb2_cell_keypad_pane

0xe713,	// (0x0000e713) vkb2_area_bottom_grid_pane_ParamLimits

0xe713,	// (0x0000e713) vkb2_area_bottom_grid_pane

0xe73d,	// (0x0000e73d) vkb2_area_bottom_pane_g1_ParamLimits

0xe73d,	// (0x0000e73d) vkb2_area_bottom_pane_g1

0xe763,	// (0x0000e763) vkb2_area_bottom_pane_g2_ParamLimits

0xe763,	// (0x0000e763) vkb2_area_bottom_pane_g2

0xe794,	// (0x0000e794) vkb2_area_bottom_pane_g3_ParamLimits

0xe794,	// (0x0000e794) vkb2_area_bottom_pane_g3

0x0002,

0xf5f7,	// (0x0000f5f7) vkb2_area_bottom_pane_g_ParamLimits

0xf5f7,	// (0x0000f5f7) vkb2_area_bottom_pane_g

0x8e81,	// (0x00008e81) vkb2_top_cell_left_pane_ParamLimits

0x8e81,	// (0x00008e81) vkb2_top_cell_left_pane

0xe7fe,	// (0x0000e7fe) vkb2_top_entry_pane_g1_ParamLimits

0xe7fe,	// (0x0000e7fe) vkb2_top_entry_pane_g1

0xe80c,	// (0x0000e80c) vkb2_top_entry_pane_t1_ParamLimits

0xe80c,	// (0x0000e80c) vkb2_top_entry_pane_t1

0x8ee9,	// (0x00008ee9) vkb2_top_entry_pane_t2_ParamLimits

0x8ee9,	// (0x00008ee9) vkb2_top_entry_pane_t2

0x8f1b,	// (0x00008f1b) vkb2_top_entry_pane_t3_ParamLimits

0x8f1b,	// (0x00008f1b) vkb2_top_entry_pane_t3

0x0002,

0xf5fe,	// (0x0000f5fe) vkb2_top_entry_pane_t_ParamLimits

0xf5fe,	// (0x0000f5fe) vkb2_top_entry_pane_t

0xe845,	// (0x0000e845) vkb2_top_grid_right_pane_g1_ParamLimits

0xe845,	// (0x0000e845) vkb2_top_grid_right_pane_g1

0x8f82,	// (0x00008f82) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f82,	// (0x00008f82) vkb2_top_grid_right_pane_g2

0x8f9a,	// (0x00008f9a) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f9a,	// (0x00008f9a) vkb2_top_grid_right_pane_g3

0xe85b,	// (0x0000e85b) vkb2_top_grid_right_pane_g4_ParamLimits

0xe85b,	// (0x0000e85b) vkb2_top_grid_right_pane_g4

0x0003,

0xf605,	// (0x0000f605) vkb2_top_grid_right_pane_g_ParamLimits

0xf605,	// (0x0000f605) vkb2_top_grid_right_pane_g

0x8fc8,	// (0x00008fc8) vkb2_top_cell_left_pane_g1

0x8fdf,	// (0x00008fdf) vkb2_cell_keypad_pane_g1_ParamLimits

0x8fdf,	// (0x00008fdf) vkb2_cell_keypad_pane_g1

0x8fed,	// (0x00008fed) vkb2_cell_keypad_pane_t1_ParamLimits

0x8fed,	// (0x00008fed) vkb2_cell_keypad_pane_t1

0x9004,	// (0x00009004) vkb2_cell_bottom_grid_pane_ParamLimits

0x9004,	// (0x00009004) vkb2_cell_bottom_grid_pane

0x903d,	// (0x0000903d) vkb2_cell_bottom_grid_pane_g1

0xe18f,	// (0x0000e18f) aid_call2_pane_cp02

0xe197,	// (0x0000e197) aid_call_pane_cp02

0xe19f,	// (0x0000e19f) clock_digital_number_pane_cp10

0xe1a7,	// (0x0000e1a7) clock_digital_number_pane_cp11

0xe1af,	// (0x0000e1af) clock_digital_number_pane_cp12

0xe1b7,	// (0x0000e1b7) clock_digital_number_pane_cp13

0xe1bf,	// (0x0000e1bf) clock_digital_separator_pane_cp10

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g1

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g2

0xe1c7,	// (0x0000e1c7) popup_clock_digital_analogue_window_cp2_g3

0x1d20,	// (0x00001d20) popup_clock_digital_analogue_window_cp2_g4

0xe1c7,	// (0x0000e1c7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf5d2,	// (0x0000f5d2) popup_clock_digital_analogue_window_cp2_g

0xe1cf,	// (0x0000e1cf) popup_clock_digital_analogue_window_cp2_t1

0xe1dd,	// (0x0000e1dd) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf5dd,	// (0x0000f5dd) popup_clock_digital_analogue_window_cp2_t

0x648b,	// (0x0000648b) clock_digital_number_pane_cp10_g1

0x648b,	// (0x0000648b) clock_digital_number_pane_cp10_g2

0x0001,

0xae59,	// (0x0000ae59) clock_digital_number_pane_cp10_g

0x648b,	// (0x0000648b) clock_digital_separator_pane_cp10_g1

0x648b,	// (0x0000648b) clock_digital_separator_pane_cp10_g2

0x0001,

0xae59,	// (0x0000ae59) clock_digital_separator_pane_cp10_g

0x8584,	// (0x00008584) uniindi_top_pane_g3

0x8595,	// (0x00008595) uniindi_top_pane_g4

0x8d62,	// (0x00008d62) vkb2_row_keypad_pane_ParamLimits

0x8d62,	// (0x00008d62) vkb2_row_keypad_pane

0x9059,	// (0x00009059) vkb2_cell_t_keypad_pane_ParamLimits

0x9059,	// (0x00009059) vkb2_cell_t_keypad_pane

0x9069,	// (0x00009069) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9069,	// (0x00009069) vkb2_cell_t_keypad_pane_cp08

0x907c,	// (0x0000907c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x907c,	// (0x0000907c) vkb2_cell_t_keypad_pane_cp09

0x9090,	// (0x00009090) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9090,	// (0x00009090) vkb2_cell_t_keypad_pane_cp01

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x90a1,	// (0x000090a1) vkb2_cell_t_keypad_pane_cp02

0x90b2,	// (0x000090b2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x90b2,	// (0x000090b2) vkb2_cell_t_keypad_pane_cp03

0x90c3,	// (0x000090c3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x90c3,	// (0x000090c3) vkb2_cell_t_keypad_pane_cp04

0x90d4,	// (0x000090d4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90d4,	// (0x000090d4) vkb2_cell_t_keypad_pane_cp05

0x90e5,	// (0x000090e5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x90e5,	// (0x000090e5) vkb2_cell_t_keypad_pane_cp06

0x90f6,	// (0x000090f6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x90f6,	// (0x000090f6) vkb2_cell_t_keypad_pane_cp07

0x9107,	// (0x00009107) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x9107,	// (0x00009107) vkb2_cell_t_keypad_pane_cp10

0x6931,	// (0x00006931) vkb2_cell_t_keypad_pane_g1

0x911c,	// (0x0000911c) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe871,	// (0x0000e871) aid_size_cell_graphic2_ParamLimits

0xe871,	// (0x0000e871) aid_size_cell_graphic2

0xe8af,	// (0x0000e8af) bg_popup_window_pane_cp21_ParamLimits

0xe8af,	// (0x0000e8af) bg_popup_window_pane_cp21

0xe8bd,	// (0x0000e8bd) graphic2_pages_pane_ParamLimits

0xe8bd,	// (0x0000e8bd) graphic2_pages_pane

0xe913,	// (0x0000e913) grid_graphic2_control_pane_ParamLimits

0xe913,	// (0x0000e913) grid_graphic2_control_pane

0xe95b,	// (0x0000e95b) grid_graphic2_pane_ParamLimits

0xe95b,	// (0x0000e95b) grid_graphic2_pane

0xe9e2,	// (0x0000e9e2) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7ccf,	// (0x00007ccf) list_ai3_gene_pane_ParamLimits

0xde6b,	// (0x0000de6b) bg_popup_window_pane_cp19_ParamLimits

0x8108,	// (0x00008108) bg_touch_area_indi_pane_ParamLimits

0x8108,	// (0x00008108) bg_touch_area_indi_pane

0x811e,	// (0x0000811e) bg_touch_area_indi_pane_cp01_ParamLimits

0x811e,	// (0x0000811e) bg_touch_area_indi_pane_cp01

0x8134,	// (0x00008134) bg_touch_area_indi_pane_cp02_ParamLimits

0x8134,	// (0x00008134) bg_touch_area_indi_pane_cp02

0x814c,	// (0x0000814c) bg_touch_area_indi_pane_cp03_ParamLimits

0x814c,	// (0x0000814c) bg_touch_area_indi_pane_cp03

0x8166,	// (0x00008166) popup_slider_window_g1_ParamLimits

0x8182,	// (0x00008182) popup_slider_window_g2_ParamLimits

0x819e,	// (0x0000819e) popup_slider_window_g3_ParamLimits

0xf5b6,	// (0x0000f5b6) popup_slider_window_g_ParamLimits

0x81fa,	// (0x000081fa) popup_slider_window_t1_ParamLimits

0x826e,	// (0x0000826e) small_volume_slider_vertical_pane_ParamLimits

0xe9e2,	// (0x0000e9e2) cell_graphic2_pane_ParamLimits

0xea3f,	// (0x0000ea3f) bg_button_pane_cp10_ParamLimits

0xea3f,	// (0x0000ea3f) bg_button_pane_cp10

0xea52,	// (0x0000ea52) bg_button_pane_cp11_ParamLimits

0xea52,	// (0x0000ea52) bg_button_pane_cp11

0xea65,	// (0x0000ea65) graphic2_pages_pane_g1_ParamLimits

0xea65,	// (0x0000ea65) graphic2_pages_pane_g1

0xea80,	// (0x0000ea80) graphic2_pages_pane_g2_ParamLimits

0xea80,	// (0x0000ea80) graphic2_pages_pane_g2

0x0001,

0xf613,	// (0x0000f613) graphic2_pages_pane_g_ParamLimits

0xf613,	// (0x0000f613) graphic2_pages_pane_g

0xea98,	// (0x0000ea98) graphic2_pages_pane_t1_ParamLimits

0xea98,	// (0x0000ea98) graphic2_pages_pane_t1

0xeab0,	// (0x0000eab0) cell_graphic2_control_pane_ParamLimits

0xeab0,	// (0x0000eab0) cell_graphic2_control_pane

0xeae2,	// (0x0000eae2) cell_graphic2_pane_g1_ParamLimits

0xeae2,	// (0x0000eae2) cell_graphic2_pane_g1

0x674b,	// (0x0000674b) cell_graphic2_pane_g2_ParamLimits

0x674b,	// (0x0000674b) cell_graphic2_pane_g2

0xeaef,	// (0x0000eaef) cell_graphic2_pane_g3_ParamLimits

0xeaef,	// (0x0000eaef) cell_graphic2_pane_g3

0x6758,	// (0x00006758) cell_graphic2_pane_g4_ParamLimits

0x6758,	// (0x00006758) cell_graphic2_pane_g4

0xeafc,	// (0x0000eafc) cell_graphic2_pane_g5_ParamLimits

0xeafc,	// (0x0000eafc) cell_graphic2_pane_g5

0x0004,

0xf618,	// (0x0000f618) cell_graphic2_pane_g_ParamLimits

0xf618,	// (0x0000f618) cell_graphic2_pane_g

0xeb1c,	// (0x0000eb1c) cell_graphic2_pane_t1_ParamLimits

0xeb1c,	// (0x0000eb1c) cell_graphic2_pane_t1

0x4665,	// (0x00004665) grid_highlight_pane_cp11_ParamLimits

0x4665,	// (0x00004665) grid_highlight_pane_cp11

0x0831,	// (0x00000831) bg_button_pane_cp05

0xeb51,	// (0x0000eb51) cell_graphic2_control_pane_g1

0x648b,	// (0x0000648b) bg_touch_area_indi_pane_g1

0x93ec,	// (0x000093ec) aid_cmod_rocker_key_size

0x93f6,	// (0x000093f6) aid_cmode_itu_key_size

0x9400,	// (0x00009400) main_cmode_video_pane

0x940a,	// (0x0000940a) main_comp_mode_itu_pane

0x9416,	// (0x00009416) main_comp_mode_rocker_pane

0x9422,	// (0x00009422) cell_cmode_rocker_pane_ParamLimits

0x9422,	// (0x00009422) cell_cmode_rocker_pane

0x9434,	// (0x00009434) cell_cmode_itu_pane_ParamLimits

0x9434,	// (0x00009434) cell_cmode_itu_pane

0x1375,	// (0x00001375) bg_button_pane_cp06_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06

0x6931,	// (0x00006931) cell_cmode_rocker_pane_g1_ParamLimits

0x6931,	// (0x00006931) cell_cmode_rocker_pane_g1

0x83e4,	// (0x000083e4) cell_cmode_rocker_pane_g2_ParamLimits

0x83e4,	// (0x000083e4) cell_cmode_rocker_pane_g2

0x0001,

0xb0d4,	// (0x0000b0d4) cell_cmode_rocker_pane_g_ParamLimits

0xb0d4,	// (0x0000b0d4) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x9449,	// (0x00009449) cell_cmode_itu_pane_g1

0x9452,	// (0x00009452) cell_cmode_itu_pane_t1

0x9460,	// (0x00009460) cell_cmode_itu_pane_t2

0x0001,

0xb0d9,	// (0x0000b0d9) cell_cmode_itu_pane_t

0x8607,	// (0x00008607) aid_touch_ctrl_left

0x860f,	// (0x0000860f) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xeb77,	// (0x0000eb77) aid_cmod_rocker_key_size_cp

0xeb81,	// (0x0000eb81) aid_cmode_itu_key_size_cp

0x9482,	// (0x00009482) compa_mode_pane_g1

0x948a,	// (0x0000948a) compa_mode_pane_g2

0x9492,	// (0x00009492) compa_mode_pane_g3

0x0002,

0xb0de,	// (0x0000b0de) compa_mode_pane_g

0xeb8b,	// (0x0000eb8b) main_comp_mode_itu_pane_cp

0xeb93,	// (0x0000eb93) main_comp_mode_rocker_pane_cp

0xeb9b,	// (0x0000eb9b) cell_cmode_itu_pane_cp_ParamLimits

0xeb9b,	// (0x0000eb9b) cell_cmode_itu_pane_cp

0xebb0,	// (0x0000ebb0) cell_cmode_rocker_pane_cp_ParamLimits

0xebb0,	// (0x0000ebb0) cell_cmode_rocker_pane_cp

0x1375,	// (0x00001375) bg_button_pane_cp06_cp_ParamLimits

0x1375,	// (0x00001375) bg_button_pane_cp06_cp

0x6931,	// (0x00006931) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6931,	// (0x00006931) cell_cmode_rocker_pane_g1_cp

0x648b,	// (0x0000648b) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xebc2,	// (0x0000ebc2) cell_cmode_itu_pane_g1_cp

0xebcb,	// (0x0000ebcb) cell_cmode_itu_pane_t1_cp

0xebcb,	// (0x0000ebcb) cell_cmode_itu_pane_t2_cp

0xd250,	// (0x0000d250) settings_code_pane_cp2

0x04fd,	// (0x000004fd) bg_popup_window_pane_cp3_ParamLimits

0x0a0b,	// (0x00000a0b) heading_pane_cp3_ParamLimits

0x0a17,	// (0x00000a17) listscroll_popup_graphic_pane_ParamLimits

0x6509,	// (0x00006509) fep_hwr_aid_pane_ParamLimits

0x82ea,	// (0x000082ea) aid_touch_sctrl_top_ParamLimits

0x82f7,	// (0x000082f7) sctrl_sk_top_pane_g1_ParamLimits

0x6931,	// (0x00006931) sctrl_sk_top_pane_g2_ParamLimits

0xb014,	// (0x0000b014) sctrl_sk_top_pane_g_ParamLimits

0x8304,	// (0x00008304) sctrl_sk_top_pane_t1_ParamLimits

0x82ea,	// (0x000082ea) aid_touch_sctrl_bottom_ParamLimits

0x8304,	// (0x00008304) sctrl_sk_bottom_pane_t1_ParamLimits

0x8550,	// (0x00008550) aid_area_touch_clock

0xe642,	// (0x0000e642) aid_vkb2_area_top_pane_cell_ParamLimits

0xe642,	// (0x0000e642) aid_vkb2_area_top_pane_cell

0xe6ed,	// (0x0000e6ed) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe6ed,	// (0x0000e6ed) aid_vkb2_area_bottom_pane_cell

0x8ea1,	// (0x00008ea1) popup_char_count_window

0x94df,	// (0x000094df) popup_char_count_window_g1

0x94e8,	// (0x000094e8) popup_char_count_window_g2

0x94f1,	// (0x000094f1) popup_char_count_window_g3

0x0002,

0xb0e5,	// (0x0000b0e5) popup_char_count_window_g

0x94fa,	// (0x000094fa) popup_char_count_window_t1

0x8aff,	// (0x00008aff) popup_fep_char_preview_window_ParamLimits

0x8aff,	// (0x00008aff) popup_fep_char_preview_window

0xe662,	// (0x0000e662) vkb2_top_candi_pane_ParamLimits

0xe662,	// (0x0000e662) vkb2_top_candi_pane

0xebd9,	// (0x0000ebd9) cell_vkb2_top_candi_pane_ParamLimits

0xebd9,	// (0x0000ebd9) cell_vkb2_top_candi_pane

0x3e9e,	// (0x00003e9e) bg_popup_fep_char_preview_window_ParamLimits

0x3e9e,	// (0x00003e9e) bg_popup_fep_char_preview_window

0x9555,	// (0x00009555) popup_fep_char_preview_window_t1_ParamLimits

0x9555,	// (0x00009555) popup_fep_char_preview_window_t1

0x958f,	// (0x0000958f) bg_popup_fep_char_preview_window_g1

0x9597,	// (0x00009597) bg_popup_fep_char_preview_window_g2

0x959f,	// (0x0000959f) bg_popup_fep_char_preview_window_g3

0x95a7,	// (0x000095a7) bg_popup_fep_char_preview_window_g4

0x95af,	// (0x000095af) bg_popup_fep_char_preview_window_g5

0x95b7,	// (0x000095b7) bg_popup_fep_char_preview_window_g6

0x95bf,	// (0x000095bf) bg_popup_fep_char_preview_window_g7

0x95c7,	// (0x000095c7) bg_popup_fep_char_preview_window_g8

0x95cf,	// (0x000095cf) bg_popup_fep_char_preview_window_g9

0x0008,

0xb0ec,	// (0x0000b0ec) bg_popup_fep_char_preview_window_g

0x6931,	// (0x00006931) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6931,	// (0x00006931) cell_vkb2_top_candi_pane_g1

0x6c9c,	// (0x00006c9c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c9c,	// (0x00006c9c) cell_vkb2_top_candi_pane_g2

0x6cbd,	// (0x00006cbd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6cbd,	// (0x00006cbd) cell_vkb2_top_candi_pane_g3

0x95d7,	// (0x000095d7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x95d7,	// (0x000095d7) cell_vkb2_top_candi_pane_g4

0x95f8,	// (0x000095f8) cell_vkb2_top_candi_pane_g5_ParamLimits

0x95f8,	// (0x000095f8) cell_vkb2_top_candi_pane_g5

0x83e4,	// (0x000083e4) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83e4,	// (0x000083e4) cell_vkb2_top_candi_pane_g6

0x0005,

0xb0ff,	// (0x0000b0ff) cell_vkb2_top_candi_pane_g_ParamLimits

0xb0ff,	// (0x0000b0ff) cell_vkb2_top_candi_pane_g

0x9619,	// (0x00009619) cell_vkb2_top_candi_pane_t1

0x4da4,	// (0x00004da4) aid_size_touch_slider_mark_ParamLimits

0x4da4,	// (0x00004da4) aid_size_touch_slider_mark

0xe8f9,	// (0x0000e8f9) grid_graphic2_catg_pane_ParamLimits

0xe8f9,	// (0x0000e8f9) grid_graphic2_catg_pane

0xe9b5,	// (0x0000e9b5) popup_grid_graphic2_window_t1_ParamLimits

0xe9b5,	// (0x0000e9b5) popup_grid_graphic2_window_t1

0xe9cb,	// (0x0000e9cb) popup_grid_graphic2_window_t2_ParamLimits

0xe9cb,	// (0x0000e9cb) popup_grid_graphic2_window_t2

0x0001,

0xf60e,	// (0x0000f60e) popup_grid_graphic2_window_t_ParamLimits

0xf60e,	// (0x0000f60e) popup_grid_graphic2_window_t

0x0831,	// (0x00000831) bg_button_pane_cp05_ParamLimits

0xeb51,	// (0x0000eb51) cell_graphic2_control_pane_g1_ParamLimits

0xec3f,	// (0x0000ec3f) cell_graphic2_catg_pane_ParamLimits

0xec3f,	// (0x0000ec3f) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xec51,	// (0x0000ec51) cell_graphic2_catg_pane_g1

0x851c,	// (0x0000851c) cell_tb_ext_pane_t1_ParamLimits

0x8f3f,	// (0x00008f3f) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f3f,	// (0x00008f3f) vkb2_top_cell_right_narrow_pane

0x8f57,	// (0x00008f57) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f57,	// (0x00008f57) vkb2_top_cell_right_wide_pane

0x64fb,	// (0x000064fb) bg_vkb2_func_pane_ParamLimits

0x64fb,	// (0x000064fb) bg_vkb2_func_pane

0x8fc8,	// (0x00008fc8) vkb2_top_cell_left_pane_g1_ParamLimits

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp03

0x903d,	// (0x0000903d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3675,	// (0x00003675) bg_vkb2_func_pane_g1

0x367d,	// (0x0000367d) bg_vkb2_func_pane_g2

0x368d,	// (0x0000368d) bg_vkb2_func_pane_g3

0x3685,	// (0x00003685) bg_vkb2_func_pane_g4

0x3695,	// (0x00003695) bg_vkb2_func_pane_g5

0x369d,	// (0x0000369d) bg_vkb2_func_pane_g6

0x36a5,	// (0x000036a5) bg_vkb2_func_pane_g7

0x36ad,	// (0x000036ad) bg_vkb2_func_pane_g8

0x366d,	// (0x0000366d) bg_vkb2_func_pane_g9

0x0008,

0xb10c,	// (0x0000b10c) bg_vkb2_func_pane_g

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp01

0x8fc8,	// (0x00008fc8) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8fc8,	// (0x00008fc8) vkb2_top_cell_right_wide_pane_g1

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64fb,	// (0x000064fb) bg_vkb2_fuc_pane_cp02

0x903d,	// (0x0000903d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x903d,	// (0x0000903d) vkb2_top_cell_right_narrow_pane_g1

0xddab,	// (0x0000ddab) aid_touch_area_decrease_ParamLimits

0xddab,	// (0x0000ddab) aid_touch_area_decrease

0xdddf,	// (0x0000dddf) aid_touch_area_increase_ParamLimits

0xdddf,	// (0x0000dddf) aid_touch_area_increase

0xde07,	// (0x0000de07) aid_touch_area_mute_ParamLimits

0xde07,	// (0x0000de07) aid_touch_area_mute

0xde37,	// (0x0000de37) aid_touch_area_slider_ParamLimits

0xde37,	// (0x0000de37) aid_touch_area_slider

0xde77,	// (0x0000de77) popup_slider_window_g4_ParamLimits

0xde77,	// (0x0000de77) popup_slider_window_g4

0xde9f,	// (0x0000de9f) popup_slider_window_g5_ParamLimits

0xde9f,	// (0x0000de9f) popup_slider_window_g5

0xded3,	// (0x0000ded3) popup_slider_window_g6_ParamLimits

0xded3,	// (0x0000ded3) popup_slider_window_g6

0x8228,	// (0x00008228) popup_slider_window_t2_ParamLimits

0x8228,	// (0x00008228) popup_slider_window_t2

0x0001,

0xb008,	// (0x0000b008) popup_slider_window_t_ParamLimits

0xb008,	// (0x0000b008) popup_slider_window_t

0xdeef,	// (0x0000deef) slider_pane_ParamLimits

0xdeef,	// (0x0000deef) slider_pane

0x9653,	// (0x00009653) slider_pane_g1_ParamLimits

0x9653,	// (0x00009653) slider_pane_g1

0x9667,	// (0x00009667) slider_pane_g2_ParamLimits

0x9667,	// (0x00009667) slider_pane_g2

0x967d,	// (0x0000967d) slider_pane_g3_ParamLimits

0x967d,	// (0x0000967d) slider_pane_g3

0x0003,

0xb11f,	// (0x0000b11f) slider_pane_g_ParamLimits

0xb11f,	// (0x0000b11f) slider_pane_g

0xc834,	// (0x0000c834) popup_tb_float_extension_window_ParamLimits

0xc834,	// (0x0000c834) popup_tb_float_extension_window

0x96a9,	// (0x000096a9) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x96b5,	// (0x000096b5) grid_tb_float_ext_pane

0x96bf,	// (0x000096bf) cell_tb_float_ext_pane_ParamLimits

0x96bf,	// (0x000096bf) cell_tb_float_ext_pane

0x96d9,	// (0x000096d9) cell_tb_float_ext_pane_g1

0x96e2,	// (0x000096e2) grid_highlight_pane_cp12

0xd68d,	// (0x0000d68d) cell_last_hwr_side_pane_ParamLimits

0xd68d,	// (0x0000d68d) cell_last_hwr_side_pane

0x648b,	// (0x0000648b) cell_last_hwr_side_pane_g1

0x96eb,	// (0x000096eb) cell_last_hwr_side_pane_g2

0x0001,

0xb128,	// (0x0000b128) cell_last_hwr_side_pane_g

0xe7c9,	// (0x0000e7c9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe7c9,	// (0x0000e7c9) vkb2_area_bottom_space_btn_pane

0x6931,	// (0x00006931) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x911c,	// (0x0000911c) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9619,	// (0x00009619) cell_vkb2_top_candi_pane_t1_ParamLimits

0x96f4,	// (0x000096f4) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x96f4,	// (0x000096f4) vkb2_area_bottom_space_btn_pane_g1

0x972e,	// (0x0000972e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x972e,	// (0x0000972e) vkb2_area_bottom_space_btn_pane_g2

0x9764,	// (0x00009764) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9764,	// (0x00009764) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb12d,	// (0x0000b12d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb12d,	// (0x0000b12d) vkb2_area_bottom_space_btn_pane_g

0x65be,	// (0x000065be) cel_fep_hwr_func_pane_ParamLimits

0x65be,	// (0x000065be) cel_fep_hwr_func_pane

0xd662,	// (0x0000d662) cell_hwr_side_button_pane_ParamLimits

0xd662,	// (0x0000d662) cell_hwr_side_button_pane

0x8550,	// (0x00008550) aid_area_touch_clock_ParamLimits

0x0831,	// (0x00000831) bg_uniindi_top_pane_ParamLimits

0x8562,	// (0x00008562) uniindi_top_pane_g1_ParamLimits

0x8578,	// (0x00008578) uniindi_top_pane_g2_ParamLimits

0x8584,	// (0x00008584) uniindi_top_pane_g3_ParamLimits

0x8595,	// (0x00008595) uniindi_top_pane_g4_ParamLimits

0xb040,	// (0x0000b040) uniindi_top_pane_g_ParamLimits

0x85a2,	// (0x000085a2) uniindi_top_pane_t1_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp01

0x97ae,	// (0x000097ae) cel_fep_hwr_func_pane_g1_ParamLimits

0x97ae,	// (0x000097ae) cel_fep_hwr_func_pane_g1

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02_ParamLimits

0x0831,	// (0x00000831) bg_vkb2_func_pane_cp02

0x97ae,	// (0x000097ae) cell_hwr_side_button_pane_g1_ParamLimits

0x97ae,	// (0x000097ae) cell_hwr_side_button_pane_g1

0x343c,	// (0x0000343c) status_pane_g4_ParamLimits

0x343c,	// (0x0000343c) status_pane_g4

0x3456,	// (0x00003456) status_pane_t1

0x61c4,	// (0x000061c4) form2_midp_gauge_slider_cont_pane

0x61cc,	// (0x000061cc) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd5ad,	// (0x0000d5ad) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd5bf,	// (0x0000d5bf) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf55f,	// (0x0000f55f) form2_midp_gauge_slider_pane_t_ParamLimits

0x6202,	// (0x00006202) form2_midp_slider_pane_ParamLimits

0x8abf,	// (0x00008abf) aid_size_cell_func_vkb2_ParamLimits

0x8abf,	// (0x00008abf) aid_size_cell_func_vkb2

0x9695,	// (0x00009695) slider_pane_g4_ParamLimits

0x9695,	// (0x00009695) slider_pane_g4

0xec5a,	// (0x0000ec5a) form2_midp_gauge_slider_pane_t2_cp01

0xec68,	// (0x0000ec68) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xec68,	// (0x0000ec68) form2_midp_gauge_slider_pane_t3_cp01

0x97e7,	// (0x000097e7) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x981b,	// (0x0000981b) navi_smil_pane_g1

0x9823,	// (0x00009823) navi_smil_pane_t1

0x97f0,	// (0x000097f0) form2_midp_slider_pane_g1

0x97f9,	// (0x000097f9) form2_midp_slider_pane_g2

0x9801,	// (0x00009801) form2_midp_slider_pane_g3

0x97f0,	// (0x000097f0) form2_midp_slider_pane_g4

0xec85,	// (0x0000ec85) form2_midp_slider_pane_g5

0x0004,

0xf628,	// (0x0000f628) form2_midp_slider_pane_g

0x979e,	// (0x0000979e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x979e,	// (0x0000979e) vkb2_area_bottom_space_btn_pane_g4

0xca10,	// (0x0000ca10) lc0_navi_pane_ParamLimits

0xca10,	// (0x0000ca10) lc0_navi_pane

0xca7a,	// (0x0000ca7a) lc0_stat_indi_pane_ParamLimits

0xca7a,	// (0x0000ca7a) lc0_stat_indi_pane

0xca8f,	// (0x0000ca8f) ls0_title_pane_ParamLimits

0xca8f,	// (0x0000ca8f) ls0_title_pane

0x1375,	// (0x00001375) bg_popup_sub_pane_cp14_ParamLimits

0x8537,	// (0x00008537) list_uniindi_pane_ParamLimits

0x8543,	// (0x00008543) uniindi_top_pane_ParamLimits

0x85df,	// (0x000085df) list_single_uniindi_pane_g1_ParamLimits

0x85f2,	// (0x000085f2) list_single_uniindi_pane_t1_ParamLimits

0xec8e,	// (0x0000ec8e) lc0_stat_clock_pane_ParamLimits

0xec8e,	// (0x0000ec8e) lc0_stat_clock_pane

0xec9b,	// (0x0000ec9b) lc0_stat_indi_pane_g1_ParamLimits

0xec9b,	// (0x0000ec9b) lc0_stat_indi_pane_g1

0xeca8,	// (0x0000eca8) lc0_stat_indi_pane_g2_ParamLimits

0xeca8,	// (0x0000eca8) lc0_stat_indi_pane_g2

0x0001,

0xf633,	// (0x0000f633) lc0_stat_indi_pane_g_ParamLimits

0xf633,	// (0x0000f633) lc0_stat_indi_pane_g

0xecb5,	// (0x0000ecb5) lc0_uni_indicator_pane_ParamLimits

0xecb5,	// (0x0000ecb5) lc0_uni_indicator_pane

0x9865,	// (0x00009865) ls0_title_pane_g1_ParamLimits

0x9865,	// (0x00009865) ls0_title_pane_g1

0xecc2,	// (0x0000ecc2) ls0_title_pane_t1_ParamLimits

0xecc2,	// (0x0000ecc2) ls0_title_pane_t1

0xecf0,	// (0x0000ecf0) lc0_uni_indicator_pane_g1_ParamLimits

0xecf0,	// (0x0000ecf0) lc0_uni_indicator_pane_g1

0x98c3,	// (0x000098c3) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x98d1,	// (0x000098d1) ai5_sk_pane_ParamLimits

0x98d1,	// (0x000098d1) ai5_sk_pane

0xed17,	// (0x0000ed17) cell_ai5_widget_pane_ParamLimits

0xed17,	// (0x0000ed17) cell_ai5_widget_pane

0x9960,	// (0x00009960) aid_size_cell_widget_grid

0x9974,	// (0x00009974) bg_ai5_widget_pane_ParamLimits

0x9974,	// (0x00009974) bg_ai5_widget_pane

0xeda0,	// (0x0000eda0) cell_ai5_widget_pane_g2

0xedb0,	// (0x0000edb0) cell_ai5_widget_pane_g3

0xedcf,	// (0x0000edcf) cell_ai5_widget_pane_g4

0xeddb,	// (0x0000eddb) cell_ai5_widget_pane_g5

0xede7,	// (0x0000ede7) cell_ai5_widget_pane_g6

0xedf3,	// (0x0000edf3) cell_ai5_widget_pane_g7

0xee3b,	// (0x0000ee3b) cell_ai5_widget_pane_t1_ParamLimits

0xee3b,	// (0x0000ee3b) cell_ai5_widget_pane_t1

0xee58,	// (0x0000ee58) cell_ai5_widget_pane_t2_ParamLimits

0xee58,	// (0x0000ee58) cell_ai5_widget_pane_t2

0xee70,	// (0x0000ee70) cell_ai5_widget_pane_t3_ParamLimits

0xee70,	// (0x0000ee70) cell_ai5_widget_pane_t3

0xee88,	// (0x0000ee88) cell_ai5_widget_pane_t4_ParamLimits

0xee88,	// (0x0000ee88) cell_ai5_widget_pane_t4

0xeea2,	// (0x0000eea2) cell_ai5_widget_pane_t5_ParamLimits

0xeea2,	// (0x0000eea2) cell_ai5_widget_pane_t5

0x9abd,	// (0x00009abd) cell_ai5_widget_pane_t6_ParamLimits

0x9abd,	// (0x00009abd) cell_ai5_widget_pane_t6

0x9acf,	// (0x00009acf) cell_ai5_widget_pane_t7_ParamLimits

0x9acf,	// (0x00009acf) cell_ai5_widget_pane_t7

0xeec1,	// (0x0000eec1) cell_ai5_widget_pane_t8_ParamLimits

0xeec1,	// (0x0000eec1) cell_ai5_widget_pane_t8

0x0009,

0xf64d,	// (0x0000f64d) cell_ai5_widget_pane_t_ParamLimits

0xf64d,	// (0x0000f64d) cell_ai5_widget_pane_t

0xef0d,	// (0x0000ef0d) grid_ai5_widget_pane

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane_ParamLimits

0x1375,	// (0x00001375) highlight_cell_ai5_widget_pane

0xef25,	// (0x0000ef25) ai5_sk_left_pane

0xef2f,	// (0x0000ef2f) ai5_sk_middle_pane

0xef39,	// (0x0000ef39) ai5_sk_right_pane

0x9b6a,	// (0x00009b6a) bg_ai5_widget_pane_g1_ParamLimits

0x9b6a,	// (0x00009b6a) bg_ai5_widget_pane_g1

0x9b76,	// (0x00009b76) bg_ai5_widget_pane_g2_ParamLimits

0x9b76,	// (0x00009b76) bg_ai5_widget_pane_g2

0x9b82,	// (0x00009b82) bg_ai5_widget_pane_g3_ParamLimits

0x9b82,	// (0x00009b82) bg_ai5_widget_pane_g3

0x9b8e,	// (0x00009b8e) bg_ai5_widget_pane_g4_ParamLimits

0x9b8e,	// (0x00009b8e) bg_ai5_widget_pane_g4

0x9b9a,	// (0x00009b9a) bg_ai5_widget_pane_g5_ParamLimits

0x9b9a,	// (0x00009b9a) bg_ai5_widget_pane_g5

0x9ba6,	// (0x00009ba6) bg_ai5_widget_pane_g6_ParamLimits

0x9ba6,	// (0x00009ba6) bg_ai5_widget_pane_g6

0x9bb2,	// (0x00009bb2) bg_ai5_widget_pane_g7_ParamLimits

0x9bb2,	// (0x00009bb2) bg_ai5_widget_pane_g7

0x9bbe,	// (0x00009bbe) bg_ai5_widget_pane_g8_ParamLimits

0x9bbe,	// (0x00009bbe) bg_ai5_widget_pane_g8

0x9bca,	// (0x00009bca) bg_ai5_widget_pane_g9_ParamLimits

0x9bca,	// (0x00009bca) bg_ai5_widget_pane_g9

0x0008,

0xb170,	// (0x0000b170) bg_ai5_widget_pane_g_ParamLimits

0xb170,	// (0x0000b170) bg_ai5_widget_pane_g

0x9bfd,	// (0x00009bfd) cell_shortcut_ai5_widget_pane_ParamLimits

0x9bfd,	// (0x00009bfd) cell_shortcut_ai5_widget_pane

0x0671,	// (0x00000671) bg_cell_shortcut_ai5_widget_pane

0x9c0e,	// (0x00009c0e) cell_grid_ai5_widget_pane_g1

0x9c17,	// (0x00009c17) highlight_cell_shortcut_ai5_widget_pane

0x367d,	// (0x0000367d) ai5_sk_left_pane_g1

0x9c1f,	// (0x00009c1f) ai5_sk_left_pane_g2

0x9c27,	// (0x00009c27) ai5_sk_left_pane_g3

0x9c2f,	// (0x00009c2f) ai5_sk_left_pane_g4

0x0003,

0xb183,	// (0x0000b183) ai5_sk_left_pane_g

0x9c37,	// (0x00009c37) ai5_sk_left_pane_t1

0x3675,	// (0x00003675) ai5_sk_right_pane_g1

0x9c45,	// (0x00009c45) ai5_sk_right_pane_g2

0x9c4d,	// (0x00009c4d) ai5_sk_right_pane_g3

0x9c55,	// (0x00009c55) ai5_sk_right_pane_g4

0x0003,

0xb18c,	// (0x0000b18c) ai5_sk_right_pane_g

0x9c5d,	// (0x00009c5d) ai5_sk_right_pane_t1

0x3675,	// (0x00003675) ai5_sk_middle_pane_g1

0x367d,	// (0x0000367d) ai5_sk_middle_pane_g2

0x3695,	// (0x00003695) ai5_sk_middle_pane_g3

0x9c4d,	// (0x00009c4d) ai5_sk_middle_pane_g4

0x9c27,	// (0x00009c27) ai5_sk_middle_pane_g5

0x9c6b,	// (0x00009c6b) ai5_sk_middle_pane_g6

0xef43,	// (0x0000ef43) ai5_sk_middle_pane_g7

0x0006,

0xf662,	// (0x0000f662) ai5_sk_middle_pane_g

0xc8fc,	// (0x0000c8fc) aid_touch_area_size_lc0_ParamLimits

0xc8fc,	// (0x0000c8fc) aid_touch_area_size_lc0

0x6cde,	// (0x00006cde) cell_hwr_candidate_pane_t1_ParamLimits

0x311e,	// (0x0000311e) aid_touch_navi_pane

0xcb81,	// (0x0000cb81) status_dt_navi_pane_ParamLimits

0xcb81,	// (0x0000cb81) status_dt_navi_pane

0xcb99,	// (0x0000cb99) status_dt_sta_pane_ParamLimits

0xcb99,	// (0x0000cb99) status_dt_sta_pane

0xef4b,	// (0x0000ef4b) dt_sta_controll_pane

0xef58,	// (0x0000ef58) dt_sta_indi_pane

0xef65,	// (0x0000ef65) dt_sta_title_pane

0x0831,	// (0x00000831) bg_dt_sta_indi_pane_ParamLimits

0x0831,	// (0x00000831) bg_dt_sta_indi_pane

0x9cac,	// (0x00009cac) dt_sta_battery_pane

0xef77,	// (0x0000ef77) dt_sta_indi_pane_g1

0xef80,	// (0x0000ef80) dt_sta_indi_pane_g2

0xef89,	// (0x0000ef89) dt_sta_indi_pane_g3

0x0002,

0xf671,	// (0x0000f671) dt_sta_indi_pane_g

0xef92,	// (0x0000ef92) dt_sta_signal_pane

0x1375,	// (0x00001375) bg_dt_sta_title_pane_ParamLimits

0x1375,	// (0x00001375) bg_dt_sta_title_pane

0x47d6,	// (0x000047d6) dt_sta_title_pane_g1

0xef9b,	// (0x0000ef9b) dt_sta_title_pane_t1_ParamLimits

0xef9b,	// (0x0000ef9b) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xefb0,	// (0x0000efb0) dt_sta_controll_pane_g1

0xefb9,	// (0x0000efb9) bg_dt_sta_title_pane_g1

0xefc2,	// (0x0000efc2) bg_dt_sta_title_pane_g2

0xefcb,	// (0x0000efcb) bg_dt_sta_title_pane_g3

0x0002,

0xf678,	// (0x0000f678) bg_dt_sta_title_pane_g

0x648b,	// (0x0000648b) bg_dt_sta_indi_pane_g1

0x9d19,	// (0x00009d19) dt_sta_signal_pane_g1

0x9d21,	// (0x00009d21) dt_sta_signal_pane_g2

0x0001,

0xb1b2,	// (0x0000b1b2) dt_sta_signal_pane_g

0x9d29,	// (0x00009d29) dt_sta_battery_pane_g1

0x9d32,	// (0x00009d32) dt_sta_battery_pane_t1

0x648b,	// (0x0000648b) bg_dt_sta_control_pane_g1

0x1ede,	// (0x00001ede) fep_china_uni_eep_pane

0x1ee6,	// (0x00001ee6) fep_china_uni_entry_pane_ParamLimits

0x1ef6,	// (0x00001ef6) popup_fep_china_uni_window_g1_ParamLimits

0x1f06,	// (0x00001f06) popup_fep_china_uni_window_g2_ParamLimits

0x1f06,	// (0x00001f06) popup_fep_china_uni_window_g2

0x0001,

0xaa50,	// (0x0000aa50) popup_fep_china_uni_window_g_ParamLimits

0xaa50,	// (0x0000aa50) popup_fep_china_uni_window_g

0x9d41,	// (0x00009d41) fep_china_uni_eep_pane_g1

0x9d49,	// (0x00009d49) fep_china_uni_eep_pane_t1

0x9812,	// (0x00009812) aid_touch_area_size_smil_player

0x326a,	// (0x0000326a) lc0_clock_pane

0x344a,	// (0x0000344a) status_pane_g5_ParamLimits

0x344a,	// (0x0000344a) status_pane_g5

0xc3da,	// (0x0000c3da) popup_keymap_window

0x3408,	// (0x00003408) status_icon_pane

0xedb0,	// (0x0000edb0) cell_ai5_widget_pane_g3_ParamLimits

0xedcf,	// (0x0000edcf) cell_ai5_widget_pane_g4_ParamLimits

0xeddb,	// (0x0000eddb) cell_ai5_widget_pane_g5_ParamLimits

0xedff,	// (0x0000edff) cell_ai5_widget_pane_g8_ParamLimits

0xedff,	// (0x0000edff) cell_ai5_widget_pane_g8

0xee13,	// (0x0000ee13) cell_ai5_widget_pane_g9_ParamLimits

0xee13,	// (0x0000ee13) cell_ai5_widget_pane_g9

0xee27,	// (0x0000ee27) cell_ai5_widget_pane_g10_ParamLimits

0xee27,	// (0x0000ee27) cell_ai5_widget_pane_g10

0x9d58,	// (0x00009d58) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9d60,	// (0x00009d60) popup_keymap_window_t1

0xc0ec,	// (0x0000c0ec) control_pane_g6_ParamLimits

0xc0ec,	// (0x0000c0ec) control_pane_g6

0xc0f9,	// (0x0000c0f9) control_pane_g7_ParamLimits

0xc0f9,	// (0x0000c0f9) control_pane_g7

0xc106,	// (0x0000c106) control_pane_g8_ParamLimits

0xc106,	// (0x0000c106) control_pane_g8

0xef4b,	// (0x0000ef4b) dt_sta_controll_pane_ParamLimits

0xef58,	// (0x0000ef58) dt_sta_indi_pane_ParamLimits

0xef65,	// (0x0000ef65) dt_sta_title_pane_ParamLimits

0x0d4c,	// (0x00000d4c) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb365,	// (0x0000b365) popup_sk_window

0x3e9e,	// (0x00003e9e) bg_popup_sub_pane_cp28_ParamLimits

0x3e9e,	// (0x00003e9e) bg_popup_sub_pane_cp28

0x9d6e,	// (0x00009d6e) popup_discreet_window_g1_ParamLimits

0x9d6e,	// (0x00009d6e) popup_discreet_window_g1

0x9d8e,	// (0x00009d8e) popup_discreet_window_t1_ParamLimits

0x9d8e,	// (0x00009d8e) popup_discreet_window_t1

0x9dac,	// (0x00009dac) popup_discreet_window_t2_ParamLimits

0x9dac,	// (0x00009dac) popup_discreet_window_t2

0x0002,

0xb1b7,	// (0x0000b1b7) popup_discreet_window_t_ParamLimits

0xb1b7,	// (0x0000b1b7) popup_discreet_window_t

0x9dfe,	// (0x00009dfe) popup_sk_window_g1

0x9e08,	// (0x00009e08) popup_sk_window_g2

0x0001,

0xb1be,	// (0x0000b1be) popup_sk_window_g

0x9e12,	// (0x00009e12) popup_sk_window_t1

0x9e20,	// (0x00009e20) popup_sk_window_t1_copy1

0xeda0,	// (0x0000eda0) cell_ai5_widget_pane_g2_ParamLimits

0xeed3,	// (0x0000eed3) cell_ai5_widget_pane_t9_ParamLimits

0xeed3,	// (0x0000eed3) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefd4,	// (0x0000efd4) aid_fshwr2_btn_pane

0xefdc,	// (0x0000efdc) aid_fshwr2_syb_pane

0xefe4,	// (0x0000efe4) aid_fshwr2_txt_pane

0xefec,	// (0x0000efec) fshwr2_func_candi_pane

0xeff6,	// (0x0000eff6) fshwr2_hwr_syb_pane

0xf004,	// (0x0000f004) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xf00e,	// (0x0000f00e) fshwr2_icf_pane_t1_ParamLimits

0xf00e,	// (0x0000f00e) fshwr2_icf_pane_t1

0x648b,	// (0x0000648b) fshwr2_func_candi_pane_g1

0x9e93,	// (0x00009e93) fshwr2_func_candi_row_pane_ParamLimits

0x9e93,	// (0x00009e93) fshwr2_func_candi_row_pane

0xf026,	// (0x0000f026) cell_fshwr2_syb_pane_ParamLimits

0xf026,	// (0x0000f026) cell_fshwr2_syb_pane

0x6931,	// (0x00006931) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6931,	// (0x00006931) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9ebe,	// (0x00009ebe) fshwr2_func_candi_cell_pane_ParamLimits

0x9ebe,	// (0x00009ebe) fshwr2_func_candi_cell_pane

0x9eef,	// (0x00009eef) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9eef,	// (0x00009eef) fshwr2_func_candi_cell_bg_pane

0x9f09,	// (0x00009f09) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f09,	// (0x00009f09) fshwr2_func_candi_cell_pane_g1

0x9f31,	// (0x00009f31) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f31,	// (0x00009f31) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x25a4,	// (0x000025a4) cell_fshwr2_syb_bg_pane

0xf040,	// (0x0000f040) cell_fshwr2_syb_bg_pane_g1

0xf048,	// (0x0000f048) cell_fshwr2_syb_bg_pane_t1

0x1375,	// (0x00001375) main_tmo_pane

0xd06f,	// (0x0000d06f) uni_indicator_pane_g1_ParamLimits

0xd084,	// (0x0000d084) uni_indicator_pane_g2_ParamLimits

0xd099,	// (0x0000d099) uni_indicator_pane_g3_ParamLimits

0x4b58,	// (0x00004b58) uni_indicator_pane_g4_ParamLimits

0x4b58,	// (0x00004b58) uni_indicator_pane_g4

0x4b6c,	// (0x00004b6c) uni_indicator_pane_g5_ParamLimits

0x4b6c,	// (0x00004b6c) uni_indicator_pane_g5

0x4b80,	// (0x00004b80) uni_indicator_pane_g6_ParamLimits

0x4b80,	// (0x00004b80) uni_indicator_pane_g6

0xf506,	// (0x0000f506) uni_indicator_pane_g_ParamLimits

0xdd87,	// (0x0000dd87) popup_tmo_note_window_ParamLimits

0xdd87,	// (0x0000dd87) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9f22,	// (0x00009f22) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f22,	// (0x00009f22) fshwr2_func_candi_cell_pane_g2

0x0001,

0xb1c3,	// (0x0000b1c3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xb1c3,	// (0x0000b1c3) fshwr2_func_candi_cell_pane_g

0x648b,	// (0x0000648b) bg_popup_window_pane_cp01

0x9f5b,	// (0x00009f5b) bg_popup_window_pane_g1_cp01

0x9f64,	// (0x00009f64) bg_popup_window_pane_cp22_ParamLimits

0x9f64,	// (0x00009f64) bg_popup_window_pane_cp22

0x9f72,	// (0x00009f72) listscroll_tmo_link_pane_ParamLimits

0x9f72,	// (0x00009f72) listscroll_tmo_link_pane

0x9fb2,	// (0x00009fb2) popup_tmo_note_window_g1_ParamLimits

0x9fb2,	// (0x00009fb2) popup_tmo_note_window_g1

0x9fbf,	// (0x00009fbf) tmo_note_info_pane_ParamLimits

0x9fbf,	// (0x00009fbf) tmo_note_info_pane

0xf057,	// (0x0000f057) list_tmo_note_info_pane_g1_ParamLimits

0xf057,	// (0x0000f057) list_tmo_note_info_pane_g1

0x9ff0,	// (0x00009ff0) list_tmo_note_info_pane_g2_ParamLimits

0x9ff0,	// (0x00009ff0) list_tmo_note_info_pane_g2

0x0001,

0xf67f,	// (0x0000f67f) list_tmo_note_info_pane_g_ParamLimits

0xf67f,	// (0x0000f67f) list_tmo_note_info_pane_g

0xa00c,	// (0x0000a00c) list_tmo_note_info_text_pane_ParamLimits

0xa00c,	// (0x0000a00c) list_tmo_note_info_text_pane

0xa08d,	// (0x0000a08d) list_tmo_link_pane

0xa09a,	// (0x0000a09a) scroll_pane_cp20

0xa0a7,	// (0x0000a0a7) list_single_tmo_link_pane_ParamLimits

0xa0a7,	// (0x0000a0a7) list_single_tmo_link_pane

0xa0b7,	// (0x0000a0b7) list_single_tmo_link_pane_t1

0xa0c5,	// (0x0000a0c5) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0c5,	// (0x0000a0c5) list_tmo_note_info_text_pane_t1

0xbcf2,	// (0x0000bcf2) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbcf2,	// (0x0000bcf2) aid_size_touch_scroll_bar_cp01

0xbc11,	// (0x0000bc11) aid_size_touch_slider_marker

0xb355,	// (0x0000b355) popup_settings_window_ParamLimits

0xb355,	// (0x0000b355) popup_settings_window

0x2b45,	// (0x00002b45) popup_candi_list_indi_window

0x311e,	// (0x0000311e) aid_touch_navi_pane_ParamLimits

0x82be,	// (0x000082be) rs_clock_indi_pane

0x82c7,	// (0x000082c7) sctrl_sk_bottom_pane_ParamLimits

0x82d8,	// (0x000082d8) sctrl_sk_top_pane_ParamLimits

0x8b19,	// (0x00008b19) popup_fep_tooltip_window

0x9960,	// (0x00009960) aid_size_cell_widget_grid_ParamLimits

0xed94,	// (0x0000ed94) cell_ai5_widget_pane_g1_ParamLimits

0xed94,	// (0x0000ed94) cell_ai5_widget_pane_g1

0xede7,	// (0x0000ede7) cell_ai5_widget_pane_g6_ParamLimits

0xedf3,	// (0x0000edf3) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xf638,	// (0x0000f638) cell_ai5_widget_pane_g_ParamLimits

0xf638,	// (0x0000f638) cell_ai5_widget_pane_g

0xeef7,	// (0x0000eef7) cell_ai5_widget_pane_t10_ParamLimits

0xeef7,	// (0x0000eef7) cell_ai5_widget_pane_t10

0xef0d,	// (0x0000ef0d) grid_ai5_widget_pane_ParamLimits

0x9bd6,	// (0x00009bd6) cell_contacts_ai5_widget_pane_ParamLimits

0x9bd6,	// (0x00009bd6) cell_contacts_ai5_widget_pane

0x9dc1,	// (0x00009dc1) popup_discreet_window_t3_ParamLimits

0x9dc1,	// (0x00009dc1) popup_discreet_window_t3

0x9e68,	// (0x00009e68) popup_fshwr2_char_preview_window_ParamLimits

0x9e68,	// (0x00009e68) popup_fshwr2_char_preview_window

0xf06e,	// (0x0000f06e) tmo_note_info_pane_t1

0xf083,	// (0x0000f083) tmo_note_info_pane_t2

0xf09a,	// (0x0000f09a) tmo_note_info_pane_t3

0xa069,	// (0x0000a069) tmo_note_info_pane_t4

0xa07b,	// (0x0000a07b) tmo_note_info_pane_t5

0x0004,

0xf684,	// (0x0000f684) tmo_note_info_pane_t

0xa08d,	// (0x0000a08d) list_tmo_link_pane_ParamLimits

0xa09a,	// (0x0000a09a) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa0de,	// (0x0000a0de) popup_fshwr2_char_preview_window_t1

0xa0ec,	// (0x0000a0ec) popup_candi_list_indi_window_g1

0xa0f5,	// (0x0000a0f5) bg_cell_contacts_ai5_widget_pane

0xa101,	// (0x0000a101) cell_contacts_ai5_widget_pane_g1

0xa115,	// (0x0000a115) cell_contacts_ai5_widget_pane_g2

0xa124,	// (0x0000a124) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb1d8,	// (0x0000b1d8) cell_contacts_ai5_widget_pane_g

0xa137,	// (0x0000a137) cell_contacts_ai5_widget_pane_t1

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf114,	// (0x0000f114) settings_container_pane

0x25a4,	// (0x000025a4) listscroll_set_pane_copy1

0x5919,	// (0x00005919) scroll_pane_cp121_copy1

0xa1bd,	// (0x0000a1bd) set_content_pane_copy1

0xf120,	// (0x0000f120) aid_height_set_list_copy1_ParamLimits

0xf120,	// (0x0000f120) aid_height_set_list_copy1

0x4e68,	// (0x00004e68) aid_size_parent_copy1_ParamLimits

0x4e68,	// (0x00004e68) aid_size_parent_copy1

0xf12c,	// (0x0000f12c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf12c,	// (0x0000f12c) button_value_adjust_pane_cp6_copy1

0x2b1d,	// (0x00002b1d) list_highlight_pane_cp2_copy1_ParamLimits

0x2b1d,	// (0x00002b1d) list_highlight_pane_cp2_copy1

0xf140,	// (0x0000f140) list_set_pane_copy1_ParamLimits

0xf140,	// (0x0000f140) list_set_pane_copy1

0xf0af,	// (0x0000f0af) main_pane_set_t1_copy1_ParamLimits

0xf0af,	// (0x0000f0af) main_pane_set_t1_copy1

0xf0e9,	// (0x0000f0e9) main_pane_set_t2_copy1_ParamLimits

0xf0e9,	// (0x0000f0e9) main_pane_set_t2_copy1

0xf1ed,	// (0x0000f1ed) main_pane_set_t3_copy1

0xf1fb,	// (0x0000f1fb) main_pane_set_t4_copy1

0xf108,	// (0x0000f108) set_content_pane_g1_copy1_ParamLimits

0xf108,	// (0x0000f108) set_content_pane_g1_copy1

0xf209,	// (0x0000f209) setting_code_pane_copy1

0xa2b8,	// (0x0000a2b8) setting_slider_graphic_pane_copy1

0xa2b8,	// (0x0000a2b8) setting_slider_pane_copy1

0xa2b8,	// (0x0000a2b8) setting_text_pane_copy1

0xa2c2,	// (0x0000a2c2) setting_volume_pane_copy1

0xf213,	// (0x0000f213) settings_code_pane_cp2_copy1

0xf21b,	// (0x0000f21b) settings_code_pane_cp_copy1_ParamLimits

0xf21b,	// (0x0000f21b) settings_code_pane_cp_copy1

0xf22f,	// (0x0000f22f) volume_set_pane_copy1

0xf237,	// (0x0000f237) volume_set_pane_g10_copy1

0xf23f,	// (0x0000f23f) volume_set_pane_g1_copy1

0xf247,	// (0x0000f247) volume_set_pane_g2_copy1

0xf24f,	// (0x0000f24f) volume_set_pane_g3_copy1

0xf257,	// (0x0000f257) volume_set_pane_g4_copy1

0xf25f,	// (0x0000f25f) volume_set_pane_g5_copy1

0xf267,	// (0x0000f267) volume_set_pane_g6_copy1

0xf26f,	// (0x0000f26f) volume_set_pane_g7_copy1

0xf277,	// (0x0000f277) volume_set_pane_g8_copy1

0xf27f,	// (0x0000f27f) volume_set_pane_g9_copy1

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1_ParamLimits

0x04fd,	// (0x000004fd) bg_set_opt_pane_cp_copy1

0xa33f,	// (0x0000a33f) setting_slider_pane_t1_copy1_ParamLimits

0xa33f,	// (0x0000a33f) setting_slider_pane_t1_copy1

0xf287,	// (0x0000f287) setting_slider_pane_t2_copy1_ParamLimits

0xf287,	// (0x0000f287) setting_slider_pane_t2_copy1

0xf2a1,	// (0x0000f2a1) setting_slider_pane_t3_copy1_ParamLimits

0xf2a1,	// (0x0000f2a1) setting_slider_pane_t3_copy1

0xf2b9,	// (0x0000f2b9) slider_set_pane_copy1_ParamLimits

0xf2b9,	// (0x0000f2b9) slider_set_pane_copy1

0x14ad,	// (0x000014ad) set_opt_bg_pane_g1_copy2

0x14b5,	// (0x000014b5) set_opt_bg_pane_g2_copy2

0xa3a5,	// (0x0000a3a5) set_opt_bg_pane_g3_copy2

0x14c5,	// (0x000014c5) set_opt_bg_pane_g4_copy2

0x14cd,	// (0x000014cd) set_opt_bg_pane_g5_copy2

0x14d5,	// (0x000014d5) set_opt_bg_pane_g6_copy2

0xf2cf,	// (0x0000f2cf) set_opt_bg_pane_g7_copy2

0xa3b7,	// (0x0000a3b7) set_opt_bg_pane_g8_copy2

0xa3c1,	// (0x0000a3c1) set_opt_bg_pane_g9_copy2

0xa3cb,	// (0x0000a3cb) aid_size_touch_slider_mark_copy1_ParamLimits

0xa3cb,	// (0x0000a3cb) aid_size_touch_slider_mark_copy1

0xa3df,	// (0x0000a3df) slider_set_pane_g1_copy1

0xa3e8,	// (0x0000a3e8) slider_set_pane_g2_copy1

0x4dd1,	// (0x00004dd1) slider_set_pane_g3_copy1_ParamLimits

0x4dd1,	// (0x00004dd1) slider_set_pane_g3_copy1

0x4de5,	// (0x00004de5) slider_set_pane_g4_copy1_ParamLimits

0x4de5,	// (0x00004de5) slider_set_pane_g4_copy1

0x4dfd,	// (0x00004dfd) slider_set_pane_g5_copy1_ParamLimits

0x4dfd,	// (0x00004dfd) slider_set_pane_g5_copy1

0x4dd1,	// (0x00004dd1) slider_set_pane_g6_copy1_ParamLimits

0x4dd1,	// (0x00004dd1) slider_set_pane_g6_copy1

0xf2d7,	// (0x0000f2d7) slider_set_pane_g7_copy1_ParamLimits

0xf2d7,	// (0x0000f2d7) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa406,	// (0x0000a406) setting_slider_graphic_pane_g1_copy1

0xf2ed,	// (0x0000f2ed) setting_slider_graphic_pane_t1_copy1

0xf2fd,	// (0x0000f2fd) setting_slider_graphic_pane_t2_copy1

0xf30d,	// (0x0000f30d) slider_set_pane_cp_copy1

0xa43f,	// (0x0000a43f) input_focus_pane_cp1_copy1

0xa448,	// (0x0000a448) list_set_text_pane_copy1

0xa450,	// (0x0000a450) setting_text_pane_g1_copy1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1

0xa43f,	// (0x0000a43f) input_focus_pane_cp2_copy1

0xa450,	// (0x0000a450) setting_code_pane_g1_copy1

0xf315,	// (0x0000f315) setting_code_pane_t1_copy1

0xbf82,	// (0x0000bf82) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0xbf94,	// (0x0000bf94) list_set_graphic_pane_g1_copy1_ParamLimits

0xbf94,	// (0x0000bf94) list_set_graphic_pane_g1_copy1

0xf323,	// (0x0000f323) list_set_graphic_pane_g2_copy1

0xbfac,	// (0x0000bfac) list_set_graphic_pane_t1_copy1_ParamLimits

0xbfac,	// (0x0000bfac) list_set_graphic_pane_t1_copy1

0x648b,	// (0x0000648b) rs_clock_indi_pane_g1

0xa481,	// (0x0000a481) rs_clock_indi_pane_t1

0x9cac,	// (0x00009cac) rs_indi_pane

0xa48f,	// (0x0000a48f) rs_indi_pane_g1

0xa498,	// (0x0000a498) rs_indi_pane_g2

0xa4a1,	// (0x0000a4a1) rs_indi_pane_g3

0x0002,

0xb1df,	// (0x0000b1df) rs_indi_pane_g

0x25a4,	// (0x000025a4) bg_popup_preview_window_pane_cp03

0xa4aa,	// (0x0000a4aa) popup_fep_tooltip_window_t1

0x7693,	// (0x00007693) popup_note2_window_g2_ParamLimits

0x7693,	// (0x00007693) popup_note2_window_g2

0x0001,

0xaf78,	// (0x0000af78) popup_note2_window_g_ParamLimits

0xaf78,	// (0x0000af78) popup_note2_window_g

0x7c95,	// (0x00007c95) bg_popup_sub_pane_cp11_ParamLimits

0x7ca2,	// (0x00007ca2) cell_ai3_links_pane_g1_ParamLimits

0x7cb9,	// (0x00007cb9) cell_ai3_links_pane_t1

0x05e7,	// (0x000005e7) set_text_pane_t1_copy1_ParamLimits

0x24b5,	// (0x000024b5) cell_graphic_popup_pane_cp2_ParamLimits

0x24b5,	// (0x000024b5) cell_graphic_popup_pane_cp2

0xa4b8,	// (0x0000a4b8) cell_graphic_popup_pane_g1_cp2

0x0b5f,	// (0x00000b5f) cell_graphic_popup_pane_g2_cp2

0xa4c0,	// (0x0000a4c0) cell_graphic_popup_pane_g3_cp2

0xa4c8,	// (0x0000a4c8) cell_graphic_popup_pane_t2_cp2

0x0b70,	// (0x00000b70) grid_highlight_pane_cp3_cp2

0x1a28,	// (0x00001a28) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1375,	// (0x00001375) main_tmo_pane_ParamLimits

0xdd7b,	// (0x0000dd7b) popup_tmo_big_image_note_window

0xed84,	// (0x0000ed84) cell_ai5_widget_list_pane

0xed8c,	// (0x0000ed8c) cell_ai5_widget_lrg_icon_pane

0xf06e,	// (0x0000f06e) tmo_note_info_pane_t1_ParamLimits

0xf083,	// (0x0000f083) tmo_note_info_pane_t2_ParamLimits

0xf09a,	// (0x0000f09a) tmo_note_info_pane_t3_ParamLimits

0xa069,	// (0x0000a069) tmo_note_info_pane_t4_ParamLimits

0xa07b,	// (0x0000a07b) tmo_note_info_pane_t5_ParamLimits

0xf684,	// (0x0000f684) tmo_note_info_pane_t_ParamLimits

0xf114,	// (0x0000f114) settings_container_pane_ParamLimits

0xa437,	// (0x0000a437) indicator_popup_pane_cp5

0xa437,	// (0x0000a437) indicator_popup_pane_cp6

0xbf82,	// (0x0000bf82) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa4d6,	// (0x0000a4d6) popup_tmo_big_image_note_window_g1

0xa4e0,	// (0x0000a4e0) popup_tmo_big_image_note_window_t1

0xa4f0,	// (0x0000a4f0) popup_tmo_big_image_note_window_t2

0xa500,	// (0x0000a500) popup_tmo_big_image_note_window_t3

0x0002,

0xb1e6,	// (0x0000b1e6) popup_tmo_big_image_note_window_t

0xf32b,	// (0x0000f32b) cell_ai5_widget_lrg_icon_pane_g1

0xf333,	// (0x0000f333) cell_ai5_widget_lrg_icon_pane_t1

0xf341,	// (0x0000f341) cell_ai5_widget_list_row_pane_ParamLimits

0xf341,	// (0x0000f341) cell_ai5_widget_list_row_pane

0xf35a,	// (0x0000f35a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf35a,	// (0x0000f35a) cell_ai5_widget_list_row_pane_g1

0xf367,	// (0x0000f367) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf367,	// (0x0000f367) cell_ai5_widget_list_row_pane_t1

0xf37f,	// (0x0000f37f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf37f,	// (0x0000f37f) cell_ai5_widget_list_row_pane_t2

0x0001,

0xf68f,	// (0x0000f68f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xf68f,	// (0x0000f68f) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa576,	// (0x0000a576) popup_fep_char_pre_window

0xa57e,	// (0x0000a57e) popup_fep_ituss_window

0xa59f,	// (0x0000a59f) popup_fep_vkbss_window

0xa5be,	// (0x0000a5be) grid_vkbss_keypad_pane_ParamLimits

0xa5be,	// (0x0000a5be) grid_vkbss_keypad_pane

0xa5ce,	// (0x0000a5ce) ituss_keypad_pane

0xa5e7,	// (0x0000a5e7) aid_vkbss_key_offset_ParamLimits

0xa5e7,	// (0x0000a5e7) aid_vkbss_key_offset

0xa5f3,	// (0x0000a5f3) cell_vkbss_key_pane_ParamLimits

0xa5f3,	// (0x0000a5f3) cell_vkbss_key_pane

0xa609,	// (0x0000a609) bg_cell_vkbss_key_g1_ParamLimits

0xa609,	// (0x0000a609) bg_cell_vkbss_key_g1

0xa615,	// (0x0000a615) cell_vkbss_key_3p_pane_ParamLimits

0xa615,	// (0x0000a615) cell_vkbss_key_3p_pane

0xa62f,	// (0x0000a62f) cell_vkbss_key_g1_ParamLimits

0xa62f,	// (0x0000a62f) cell_vkbss_key_g1

0xa649,	// (0x0000a649) cell_vkbss_key_t1_ParamLimits

0xa649,	// (0x0000a649) cell_vkbss_key_t1

0xa674,	// (0x0000a674) cell_ituss_key_pane_ParamLimits

0xa674,	// (0x0000a674) cell_ituss_key_pane

0xa684,	// (0x0000a684) bg_cell_ituss_key_g1_ParamLimits

0xa684,	// (0x0000a684) bg_cell_ituss_key_g1

0xa690,	// (0x0000a690) cell_ituss_key_pane_g1_ParamLimits

0xa690,	// (0x0000a690) cell_ituss_key_pane_g1

0xa69c,	// (0x0000a69c) cell_ituss_key_pane_g2_ParamLimits

0xa69c,	// (0x0000a69c) cell_ituss_key_pane_g2

0x0001,

0xb1f2,	// (0x0000b1f2) cell_ituss_key_pane_g_ParamLimits

0xb1f2,	// (0x0000b1f2) cell_ituss_key_pane_g

0xa6b5,	// (0x0000a6b5) cell_ituss_key_t1_ParamLimits

0xa6b5,	// (0x0000a6b5) cell_ituss_key_t1

0xa6e3,	// (0x0000a6e3) cell_ituss_key_t2_ParamLimits

0xa6e3,	// (0x0000a6e3) cell_ituss_key_t2

0xa714,	// (0x0000a714) cell_ituss_key_t3_ParamLimits

0xa714,	// (0x0000a714) cell_ituss_key_t3

0xa745,	// (0x0000a745) cell_ituss_key_t4_ParamLimits

0xa745,	// (0x0000a745) cell_ituss_key_t4

0x0003,

0xb1f7,	// (0x0000b1f7) cell_ituss_key_t_ParamLimits

0xb1f7,	// (0x0000b1f7) cell_ituss_key_t

0xa776,	// (0x0000a776) cell_vkbss_key_3p_pane_g1

0xa77e,	// (0x0000a77e) cell_vkbss_key_3p_pane_g2

0xa786,	// (0x0000a786) cell_vkbss_key_3p_pane_g3

0x0002,

0xb200,	// (0x0000b200) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa78e,	// (0x0000a78e) popup_fep_char_pre_window_t1

0xed7a,	// (0x0000ed7a) main_ai5_sk_pane

0xa0f5,	// (0x0000a0f5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa101,	// (0x0000a101) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa115,	// (0x0000a115) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa124,	// (0x0000a124) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb1d8,	// (0x0000b1d8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa137,	// (0x0000a137) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1375,	// (0x00001375) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf391,	// (0x0000f391) main_ai5_sk_pane_g1

0x3cd7,	// (0x00003cd7) popup_query_code_window_g1

0xa594,	// (0x0000a594) popup_fep_vkb_icf_pane

0xa5a8,	// (0x0000a5a8) popup_fep_vtchi_icf_pane

0x1375,	// (0x00001375) bg_icf_pane

0xa7b5,	// (0x0000a7b5) list_vkb_icf_pane

0x1375,	// (0x00001375) bg_icf_pane_cp01

0xa7cd,	// (0x0000a7cd) vtchi_icf_list_pane

0xa7dd,	// (0x0000a7dd) list_vkb_icf_pane_t1_ParamLimits

0xa7dd,	// (0x0000a7dd) list_vkb_icf_pane_t1

0xa7f4,	// (0x0000a7f4) vtchi_icf_list_pane_t1_ParamLimits

0xa7f4,	// (0x0000a7f4) vtchi_icf_list_pane_t1

0xa57e,	// (0x0000a57e) popup_fep_ituss_window_ParamLimits

0xa5a8,	// (0x0000a5a8) popup_fep_vtchi_icf_pane_ParamLimits

0xa5ce,	// (0x0000a5ce) ituss_keypad_pane_ParamLimits

0xa5de,	// (0x0000a5de) ituss_sks_pane

0x1375,	// (0x00001375) bg_icf_pane_ParamLimits

0xa7a6,	// (0x0000a7a6) icf_edit_indi_pane_ParamLimits

0xa7a6,	// (0x0000a7a6) icf_edit_indi_pane

0xa7b5,	// (0x0000a7b5) list_vkb_icf_pane_ParamLimits

0x1375,	// (0x00001375) bg_icf_pane_cp01_ParamLimits

0xa7c1,	// (0x0000a7c1) icf_edit_indi_pane_cp01_ParamLimits

0xa7c1,	// (0x0000a7c1) icf_edit_indi_pane_cp01

0xa7d5,	// (0x0000a7d5) vtchi_query_pane

0x6931,	// (0x00006931) icf_edit_indi_pane_g1_ParamLimits

0x6931,	// (0x00006931) icf_edit_indi_pane_g1

0xa810,	// (0x0000a810) icf_edit_indi_pane_g2_ParamLimits

0xa810,	// (0x0000a810) icf_edit_indi_pane_g2

0x0001,

0xb207,	// (0x0000b207) icf_edit_indi_pane_g_ParamLimits

0xb207,	// (0x0000b207) icf_edit_indi_pane_g

0xa81c,	// (0x0000a81c) icf_edit_indi_pane_t1

0xa82a,	// (0x0000a82a) bg_input_focus_pane_cp042

0x0d43,	// (0x00000d43) vtchi_button_pane

0xa833,	// (0x0000a833) vtchi_query_pane_t1

0xa841,	// (0x0000a841) vtchi_query_pane_t2

0xa84f,	// (0x0000a84f) vtchi_query_pane_t3

0x0002,

0xb20c,	// (0x0000b20c) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xa85d,	// (0x0000a85d) vtchi_button_pane_g1

0x8629,	// (0x00008629) ituss_sks_pane_g1

0xa865,	// (0x0000a865) ituss_sks_pane_g2

0x0001,

0xb213,	// (0x0000b213) ituss_sks_pane_g

0xa86e,	// (0x0000a86e) ituss_sks_pane_t1

0xa87c,	// (0x0000a87c) ituss_sks_pane_t2

0x0001,

0xb218,	// (0x0000b218) ituss_sks_pane_t

0x5e4d,	// (0x00005e4d) indicator_nsta_pane_cp_g1

0x5e56,	// (0x00005e56) indicator_nsta_pane_cp_g2

0x5e5e,	// (0x00005e5e) indicator_nsta_pane_cp_g3

0x5e66,	// (0x00005e66) indicator_nsta_pane_cp_g4

0x5e6e,	// (0x00005e6e) indicator_nsta_pane_cp_g5

0x5e76,	// (0x00005e76) indicator_nsta_pane_cp_g6

0x0005,

0xadc2,	// (0x0000adc2) indicator_nsta_pane_cp_g

0xeb33,	// (0x0000eb33) cell_graphic2_pane_t2_ParamLimits

0xeb33,	// (0x0000eb33) cell_graphic2_pane_t2

0x0001,

0xf623,	// (0x0000f623) cell_graphic2_pane_t_ParamLimits

0xf623,	// (0x0000f623) cell_graphic2_pane_t

0xeb69,	// (0x0000eb69) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
