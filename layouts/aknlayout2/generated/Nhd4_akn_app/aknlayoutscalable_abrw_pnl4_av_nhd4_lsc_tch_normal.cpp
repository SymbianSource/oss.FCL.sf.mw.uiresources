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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00014122 };

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
0x9cf7,	// (0x0001de19) Screen

0x9d03,	// (0x0001de25) application_window_ParamLimits

0x9d03,	// (0x0001de25) application_window

0xc2e8,	// (0x0002040a) screen_g1

0x87ea,	// (0x0001c90c) area_bottom_pane_ParamLimits

0x87ea,	// (0x0001c90c) area_bottom_pane

0xe0e2,	// (0x00022204) area_top_pane_ParamLimits

0xe0e2,	// (0x00022204) area_top_pane

0xe180,	// (0x000222a2) main_pane_ParamLimits

0xe180,	// (0x000222a2) main_pane

0xc2f2,	// (0x00020414) misc_graphics

0xae7d,	// (0x0001ef9f) battery_pane_ParamLimits

0xae7d,	// (0x0001ef9f) battery_pane

0x2637,	// (0x00016759) bg_status_flat_pane_g8

0x263f,	// (0x00016761) bg_status_flat_pane_g9

0x192e,	// (0x00015a50) context_pane_ParamLimits

0x192e,	// (0x00015a50) context_pane

0xafe8,	// (0x0001f10a) navi_pane_ParamLimits

0xafe8,	// (0x0001f10a) navi_pane

0xb066,	// (0x0001f188) signal_pane_ParamLimits

0xb066,	// (0x0001f188) signal_pane

0x0008,

0xf85e,	// (0x00023980) bg_status_flat_pane_g

0xb0f6,	// (0x0001f218) status_pane_g1_ParamLimits

0xb0f6,	// (0x0001f218) status_pane_g1

0xb10c,	// (0x0001f22e) status_pane_g2_ParamLimits

0xb10c,	// (0x0001f22e) status_pane_g2

0x1b55,	// (0x00015c77) status_pane_g3_ParamLimits

0x1b55,	// (0x00015c77) status_pane_g3

0x0004,

0xf791,	// (0x000238b3) status_pane_g_ParamLimits

0xf791,	// (0x000238b3) status_pane_g

0xb118,	// (0x0001f23a) title_pane_ParamLimits

0xb118,	// (0x0001f23a) title_pane

0xb17b,	// (0x0001f29d) uni_indicator_pane_ParamLimits

0xb17b,	// (0x0001f29d) uni_indicator_pane

0x177a,	// (0x0001589c) bg_list_pane_ParamLimits

0x177a,	// (0x0001589c) bg_list_pane

0xadf0,	// (0x0001ef12) find_pane

0x8c54,	// (0x0001cd76) listscroll_app_pane_ParamLimits

0x8c54,	// (0x0001cd76) listscroll_app_pane

0x17ae,	// (0x000158d0) listscroll_form_pane

0x8c64,	// (0x0001cd86) listscroll_gen_pane_ParamLimits

0x8c64,	// (0x0001cd86) listscroll_gen_pane

0xe98b,	// (0x00022aad) listscroll_set_pane

0x31ad,	// (0x000172cf) main_idle_act_pane

0x147a,	// (0x0001559c) main_idle_trad_pane

0x147a,	// (0x0001559c) main_list_empty_pane

0x17c8,	// (0x000158ea) main_midp_pane

0x17d4,	// (0x000158f6) main_pane_g1_ParamLimits

0x17d4,	// (0x000158f6) main_pane_g1

0x8c78,	// (0x0001cd9a) popup_ai_message_window_ParamLimits

0x8c78,	// (0x0001cd9a) popup_ai_message_window

0x8d29,	// (0x0001ce4b) popup_fep_china_uni_window_ParamLimits

0x8d29,	// (0x0001ce4b) popup_fep_china_uni_window

0x8d83,	// (0x0001cea5) popup_fep_japan_candidate_window_ParamLimits

0x8d83,	// (0x0001cea5) popup_fep_japan_candidate_window

0x8da1,	// (0x0001cec3) popup_fep_japan_predictive_window_ParamLimits

0x8da1,	// (0x0001cec3) popup_fep_japan_predictive_window

0x8db3,	// (0x0001ced5) popup_find_window

0x8dd0,	// (0x0001cef2) popup_grid_graphic_window_ParamLimits

0x8dd0,	// (0x0001cef2) popup_grid_graphic_window

0x8e6e,	// (0x0001cf90) popup_large_graphic_colour_window

0x8e94,	// (0x0001cfb6) popup_menu_window_ParamLimits

0x8e94,	// (0x0001cfb6) popup_menu_window

0x9066,	// (0x0001d188) popup_note_image_window

0x902c,	// (0x0001d14e) popup_note_wait_window_ParamLimits

0x902c,	// (0x0001d14e) popup_note_wait_window

0x907e,	// (0x0001d1a0) popup_note_window_ParamLimits

0x907e,	// (0x0001d1a0) popup_note_window

0x912d,	// (0x0001d24f) popup_query_code_window_ParamLimits

0x912d,	// (0x0001d24f) popup_query_code_window

0x9167,	// (0x0001d289) popup_query_data_code_window_ParamLimits

0x9167,	// (0x0001d289) popup_query_data_code_window

0x9184,	// (0x0001d2a6) popup_query_data_window_ParamLimits

0x9184,	// (0x0001d2a6) popup_query_data_window

0x9206,	// (0x0001d328) popup_query_sat_info_window_ParamLimits

0x9206,	// (0x0001d328) popup_query_sat_info_window

0x929d,	// (0x0001d3bf) popup_snote_single_graphic_window_ParamLimits

0x929d,	// (0x0001d3bf) popup_snote_single_graphic_window

0x929d,	// (0x0001d3bf) popup_snote_single_text_window_ParamLimits

0x929d,	// (0x0001d3bf) popup_snote_single_text_window

0xe9c9,	// (0x00022aeb) popup_sub_window_general

0x93fa,	// (0x0001d51c) popup_window_general_ParamLimits

0x93fa,	// (0x0001d51c) popup_window_general

0x17ea,	// (0x0001590c) power_save_pane

0x8ad9,	// (0x0001cbfb) control_pane_g1_ParamLimits

0x8ad9,	// (0x0001cbfb) control_pane_g1

0x8b02,	// (0x0001cc24) control_pane_g2_ParamLimits

0x8b02,	// (0x0001cc24) control_pane_g2

0x173d,	// (0x0001585f) control_pane_g3_ParamLimits

0x173d,	// (0x0001585f) control_pane_g3

0x0007,

0xf779,	// (0x0002389b) control_pane_g_ParamLimits

0xf779,	// (0x0002389b) control_pane_g

0x8b43,	// (0x0001cc65) control_pane_t1_ParamLimits

0x8b43,	// (0x0001cc65) control_pane_t1

0x8ba9,	// (0x0001cccb) control_pane_t2_ParamLimits

0x8ba9,	// (0x0001cccb) control_pane_t2

0x0002,

0xf78a,	// (0x000238ac) control_pane_t_ParamLimits

0xf78a,	// (0x000238ac) control_pane_t

0xad22,	// (0x0001ee44) navi_navi_volume_pane_cp1

0xad2a,	// (0x0001ee4c) status_small_icon_pane

0x1672,	// (0x00015794) status_small_pane_g1_ParamLimits

0x1672,	// (0x00015794) status_small_pane_g1

0xad32,	// (0x0001ee54) status_small_pane_g2_ParamLimits

0xad32,	// (0x0001ee54) status_small_pane_g2

0xad3e,	// (0x0001ee60) status_small_pane_g3_ParamLimits

0xad3e,	// (0x0001ee60) status_small_pane_g3

0xad4a,	// (0x0001ee6c) status_small_pane_g4_ParamLimits

0xad4a,	// (0x0001ee6c) status_small_pane_g4

0xad56,	// (0x0001ee78) status_small_pane_g5_ParamLimits

0xad56,	// (0x0001ee78) status_small_pane_g5

0xad64,	// (0x0001ee86) status_small_pane_g6_ParamLimits

0xad64,	// (0x0001ee86) status_small_pane_g6

0x0007,

0xf768,	// (0x0002388a) status_small_pane_g_ParamLimits

0xf768,	// (0x0002388a) status_small_pane_g

0xad93,	// (0x0001eeb5) status_small_pane_t1

0xadb5,	// (0x0001eed7) status_small_wait_pane_ParamLimits

0xadb5,	// (0x0001eed7) status_small_wait_pane

0xaa41,	// (0x0001eb63) aid_levels_signal_ParamLimits

0xaa41,	// (0x0001eb63) aid_levels_signal

0xaa59,	// (0x0001eb7b) signal_pane_g1_ParamLimits

0xaa59,	// (0x0001eb7b) signal_pane_g1

0xaa74,	// (0x0001eb96) signal_pane_g2_ParamLimits

0xaa74,	// (0x0001eb96) signal_pane_g2

0x0003,

0xf6f9,	// (0x0002381b) signal_pane_g_ParamLimits

0xf6f9,	// (0x0002381b) signal_pane_g

0xe701,	// (0x00022823) context_pane_g1

0x9d13,	// (0x0001de35) title_pane_g1

0x9d4a,	// (0x0001de6c) title_pane_t1

0xc308,	// (0x0002042a) title_pane_t2

0xc32e,	// (0x00020450) title_pane_t3

0x0002,

0xf557,	// (0x00023679) title_pane_t

0xb1a3,	// (0x0001f2c5) aid_levels_battery_ParamLimits

0xb1a3,	// (0x0001f2c5) aid_levels_battery

0xb1bf,	// (0x0001f2e1) battery_pane_g1_ParamLimits

0xb1bf,	// (0x0001f2e1) battery_pane_g1

0xb1dc,	// (0x0001f2fe) battery_pane_g2_ParamLimits

0xb1dc,	// (0x0001f2fe) battery_pane_g2

0x0001,

0xf79c,	// (0x000238be) battery_pane_g_ParamLimits

0xf79c,	// (0x000238be) battery_pane_g

0xb7b9,	// (0x0001f8db) uni_indicator_pane_g1

0xb7cf,	// (0x0001f8f1) uni_indicator_pane_g2

0xb7e5,	// (0x0001f907) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x00023a28) uni_indicator_pane_g

0x12ec,	// (0x0001540e) navi_icon_pane_ParamLimits

0x12ec,	// (0x0001540e) navi_icon_pane

0x1236,	// (0x00015358) navi_midp_pane

0x1308,	// (0x0001542a) navi_navi_pane

0x1312,	// (0x00015434) navi_text_pane_ParamLimits

0x1312,	// (0x00015434) navi_text_pane

0xc2e8,	// (0x0002040a) status_small_wait_pane_g1

0xc599,	// (0x000206bb) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x00023a23) status_small_wait_pane_g

0xb712,	// (0x0001f834) navi_navi_icon_text_pane

0x2c8a,	// (0x00016dac) navi_navi_pane_g1_ParamLimits

0x2c8a,	// (0x00016dac) navi_navi_pane_g1

0x2c9c,	// (0x00016dbe) navi_navi_pane_g2_ParamLimits

0x2c9c,	// (0x00016dbe) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x000239f1) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x000239f1) navi_navi_pane_g

0x2cae,	// (0x00016dd0) navi_navi_tabs_pane

0x2cb7,	// (0x00016dd9) navi_navi_text_pane

0xb712,	// (0x0001f834) navi_navi_volume_pane

0x2c5e,	// (0x00016d80) navi_text_pane_t1

0x2c52,	// (0x00016d74) navi_icon_pane_g1

0x2ba5,	// (0x00016cc7) navi_navi_text_pane_t1

0x94b7,	// (0x0001d5d9) navi_navi_volume_pane_g1

0xec4a,	// (0x00022d6c) volume_small_pane

0x2b0b,	// (0x00016c2d) navi_navi_icon_text_pane_g1

0xb66a,	// (0x0001f78c) navi_navi_icon_text_pane_t1

0x1308,	// (0x0001542a) navi_tabs_2_long_pane

0x1308,	// (0x0001542a) navi_tabs_2_pane

0x1308,	// (0x0001542a) navi_tabs_3_long_pane

0x1308,	// (0x0001542a) navi_tabs_3_pane

0x1308,	// (0x0001542a) navi_tabs_4_pane

0xec2a,	// (0x00022d4c) tabs_2_active_pane_ParamLimits

0xec2a,	// (0x00022d4c) tabs_2_active_pane

0xec3a,	// (0x00022d5c) tabs_2_passive_pane_ParamLimits

0xec3a,	// (0x00022d5c) tabs_2_passive_pane

0xebf8,	// (0x00022d1a) tabs_3_active_pane_ParamLimits

0xebf8,	// (0x00022d1a) tabs_3_active_pane

0xec08,	// (0x00022d2a) tabs_3_passive_pane_ParamLimits

0xec08,	// (0x00022d2a) tabs_3_passive_pane

0xec19,	// (0x00022d3b) tabs_3_passive_pane_cp_ParamLimits

0xec19,	// (0x00022d3b) tabs_3_passive_pane_cp

0xebb4,	// (0x00022cd6) tabs_4_active_pane_ParamLimits

0xebb4,	// (0x00022cd6) tabs_4_active_pane

0xebc5,	// (0x00022ce7) tabs_4_passive_pane_ParamLimits

0xebc5,	// (0x00022ce7) tabs_4_passive_pane

0xebd6,	// (0x00022cf8) tabs_4_passive_pane_cp_ParamLimits

0xebd6,	// (0x00022cf8) tabs_4_passive_pane_cp

0xebe7,	// (0x00022d09) tabs_4_passive_pane_cp2_ParamLimits

0xebe7,	// (0x00022d09) tabs_4_passive_pane_cp2

0xeb90,	// (0x00022cb2) tabs_2_long_active_pane_ParamLimits

0xeb90,	// (0x00022cb2) tabs_2_long_active_pane

0xeba2,	// (0x00022cc4) tabs_2_long_passive_pane_ParamLimits

0xeba2,	// (0x00022cc4) tabs_2_long_passive_pane

0xeb4b,	// (0x00022c6d) tabs_3_long_active_pane_ParamLimits

0xeb4b,	// (0x00022c6d) tabs_3_long_active_pane

0xeb64,	// (0x00022c86) tabs_3_long_passive_pane_ParamLimits

0xeb64,	// (0x00022c86) tabs_3_long_passive_pane

0xeb77,	// (0x00022c99) tabs_3_long_passive_pane_cp_ParamLimits

0xeb77,	// (0x00022c99) tabs_3_long_passive_pane_cp

0xeaf1,	// (0x00022c13) volume_small_pane_g1

0xeafa,	// (0x00022c1c) volume_small_pane_g2

0xeb03,	// (0x00022c25) volume_small_pane_g3

0xeb0c,	// (0x00022c2e) volume_small_pane_g4

0xeb15,	// (0x00022c37) volume_small_pane_g5

0xeb1e,	// (0x00022c40) volume_small_pane_g6

0xeb27,	// (0x00022c49) volume_small_pane_g7

0xeb30,	// (0x00022c52) volume_small_pane_g8

0xeb39,	// (0x00022c5b) volume_small_pane_g9

0xeb42,	// (0x00022c64) volume_small_pane_g10

0x0009,

0xf89b,	// (0x000239bd) volume_small_pane_g

0xc340,	// (0x00020462) bg_active_tab_pane_cp2_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp2

0x9dd6,	// (0x0001def8) tabs_3_active_pane_g1

0x9dde,	// (0x0001df00) tabs_3_active_pane_t1

0xc340,	// (0x00020462) bg_passive_tab_pane_cp2_ParamLimits

0xc340,	// (0x00020462) bg_passive_tab_pane_cp2

0x9dd6,	// (0x0001def8) tabs_3_passive_pane_g1

0x9dde,	// (0x0001df00) tabs_3_passive_pane_t1

0xc340,	// (0x00020462) bg_active_tab_pane_cp3_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp3

0x9df0,	// (0x0001df12) tabs_4_active_pane_g1

0x9df8,	// (0x0001df1a) tabs_4_active_pane_t1

0xc340,	// (0x00020462) bg_passive_tab_pane_cp3_ParamLimits

0xc340,	// (0x00020462) bg_passive_tab_pane_cp3

0x9df0,	// (0x0001df12) tabs_4_1_passive_pane_g1

0x9df8,	// (0x0001df1a) tabs_4_1_passive_pane_t1

0x17c8,	// (0x000158ea) list_highlight_pane_cp2

0xb8fd,	// (0x0001fa1f) list_set_pane_ParamLimits

0xb8fd,	// (0x0001fa1f) list_set_pane

0xb997,	// (0x0001fab9) main_pane_set_t1_ParamLimits

0xb997,	// (0x0001fab9) main_pane_set_t1

0xb9b7,	// (0x0001fad9) main_pane_set_t2_ParamLimits

0xb9b7,	// (0x0001fad9) main_pane_set_t2

0xb9cb,	// (0x0001faed) main_pane_set_t3_ParamLimits

0xb9cb,	// (0x0001faed) main_pane_set_t3

0xb9dd,	// (0x0001faff) main_pane_set_t4_ParamLimits

0xb9dd,	// (0x0001faff) main_pane_set_t4

0x0003,

0xf96b,	// (0x00023a8d) main_pane_set_t_ParamLimits

0xf96b,	// (0x00023a8d) main_pane_set_t

0xb9ef,	// (0x0001fb11) setting_code_pane

0xb9f9,	// (0x0001fb1b) setting_slider_graphic_pane

0xb9f9,	// (0x0001fb1b) setting_slider_pane

0xb9f9,	// (0x0001fb1b) setting_text_pane

0xb9f9,	// (0x0001fb1b) setting_volume_pane

0x89e8,	// (0x0001cb0a) volume_set_pane

0xc34e,	// (0x00020470) bg_set_opt_pane_cp

0x89f0,	// (0x0001cb12) setting_slider_pane_t1

0x8a09,	// (0x0001cb2b) setting_slider_pane_t2

0x8a23,	// (0x0001cb45) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023680) setting_slider_pane_t

0x8a3b,	// (0x0001cb5d) slider_set_pane

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp2

0xc35c,	// (0x0002047e) setting_slider_graphic_pane_g1

0x8a51,	// (0x0001cb73) setting_slider_graphic_pane_t1

0x8a61,	// (0x0001cb83) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023687) setting_slider_graphic_pane_t

0x8a71,	// (0x0001cb93) slider_set_pane_cp

0xc2f2,	// (0x00020414) input_focus_pane_cp1

0x3194,	// (0x000172b6) list_set_text_pane

0xc2e8,	// (0x0002040a) setting_text_pane_g1

0xc2f2,	// (0x00020414) input_focus_pane_cp2

0xc2e8,	// (0x0002040a) setting_code_pane_g1

0xc365,	// (0x00020487) setting_code_pane_t1

0xc373,	// (0x00020495) set_text_pane_t1_ParamLimits

0xc373,	// (0x00020495) set_text_pane_t1

0xc83e,	// (0x00020960) set_opt_bg_pane_g1

0xc846,	// (0x00020968) set_opt_bg_pane_g2

0xb8b2,	// (0x0001f9d4) set_opt_bg_pane_g3

0xc856,	// (0x00020978) set_opt_bg_pane_g4

0xc85e,	// (0x00020980) set_opt_bg_pane_g5

0xc866,	// (0x00020988) set_opt_bg_pane_g6

0xb8bc,	// (0x0001f9de) set_opt_bg_pane_g7

0xb8c4,	// (0x0001f9e6) set_opt_bg_pane_g8

0xb8ce,	// (0x0001f9f0) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x00023a7a) set_opt_bg_pane_g

0xb8a5,	// (0x0001f9c7) slider_set_pane_g1

0xec53,	// (0x00022d75) slider_set_pane_g2

0x0006,

0xf949,	// (0x00023a6b) slider_set_pane_g

0x94bf,	// (0x0001d5e1) volume_set_pane_g1

0x94c7,	// (0x0001d5e9) volume_set_pane_g2

0x94cf,	// (0x0001d5f1) volume_set_pane_g3

0x94d7,	// (0x0001d5f9) volume_set_pane_g4

0x94df,	// (0x0001d601) volume_set_pane_g5

0x94e7,	// (0x0001d609) volume_set_pane_g6

0x94ef,	// (0x0001d611) volume_set_pane_g7

0x94f7,	// (0x0001d619) volume_set_pane_g8

0x94ff,	// (0x0001d621) volume_set_pane_g9

0x9507,	// (0x0001d629) volume_set_pane_g10

0x0009,

0xf921,	// (0x00023a43) volume_set_pane_g

0x9e0a,	// (0x0001df2c) indicator_pane_ParamLimits

0x9e0a,	// (0x0001df2c) indicator_pane

0x9e32,	// (0x0001df54) main_idle_pane_g2_ParamLimits

0x9e32,	// (0x0001df54) main_idle_pane_g2

0x9e6a,	// (0x0001df8c) main_pane_idle_g1_ParamLimits

0x9e6a,	// (0x0001df8c) main_pane_idle_g1

0xc38d,	// (0x000204af) popup_clock_digital_analogue_window_ParamLimits

0xc38d,	// (0x000204af) popup_clock_digital_analogue_window

0x9e91,	// (0x0001dfb3) soft_indicator_pane_ParamLimits

0x9e91,	// (0x0001dfb3) soft_indicator_pane

0x9eb5,	// (0x0001dfd7) wallpaper_pane_ParamLimits

0x9eb5,	// (0x0001dfd7) wallpaper_pane

0xc2e8,	// (0x0002040a) wallpaper_pane_g1

0x9ec7,	// (0x0001dfe9) indicator_pane_g1_ParamLimits

0x9ec7,	// (0x0001dfe9) indicator_pane_g1

0x3667,	// (0x00017789) navi_navi_icon_text_pane_srt_g1

0xc3bb,	// (0x000204dd) soft_indicator_pane_t1

0xc3d5,	// (0x000204f7) aid_ps_area_pane

0x9edd,	// (0x0001dfff) aid_ps_clock_pane

0xc3e6,	// (0x00020508) aid_ps_indicator_pane

0xc3f2,	// (0x00020514) indicator_ps_pane_ParamLimits

0xc3f2,	// (0x00020514) indicator_ps_pane

0xc401,	// (0x00020523) power_save_pane_g1_ParamLimits

0xc401,	// (0x00020523) power_save_pane_g1

0xc40d,	// (0x0002052f) power_save_pane_g2_ParamLimits

0xc40d,	// (0x0002052f) power_save_pane_g2

0xe0c2,	// (0x000221e4) aid_navinavi_width_pane

0xc3d5,	// (0x000204f7) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002368c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002368c) power_save_pane_g

0xc41b,	// (0x0002053d) power_save_pane_t1_ParamLimits

0xc41b,	// (0x0002053d) power_save_pane_t1

0x9edd,	// (0x0001dfff) aid_ps_clock_pane_ParamLimits

0xc3e6,	// (0x00020508) aid_ps_indicator_pane_ParamLimits

0xc42d,	// (0x0002054f) power_save_pane_t4_ParamLimits

0xc42d,	// (0x0002054f) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023691) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023691) power_save_pane_t

0xc457,	// (0x00020579) power_save_t3_ParamLimits

0xc457,	// (0x00020579) power_save_t3

0xc442,	// (0x00020564) power_save_t2_ParamLimits

0xc442,	// (0x00020564) power_save_t2

0xc46c,	// (0x0002058e) indicator_ps_pane_g1

0x9eeb,	// (0x0001e00d) ai_gene_pane_ParamLimits

0x9eeb,	// (0x0001e00d) ai_gene_pane

0x9f02,	// (0x0001e024) ai_links_pane_ParamLimits

0x9f02,	// (0x0001e024) ai_links_pane

0x9f1a,	// (0x0001e03c) indicator_pane_cp1_ParamLimits

0x9f1a,	// (0x0001e03c) indicator_pane_cp1

0x9f29,	// (0x0001e04b) main_pane_idle_g1_cp_ParamLimits

0x9f29,	// (0x0001e04b) main_pane_idle_g1_cp

0x9f41,	// (0x0001e063) popup_ai_links_title_window

0x9f4a,	// (0x0001e06c) soft_indicator_pane_cp1_ParamLimits

0x9f4a,	// (0x0001e06c) soft_indicator_pane_cp1

0x2f49,	// (0x0001706b) ai_links_pane_g1

0x2f52,	// (0x00017074) grid_ai_links_pane

0xb7b0,	// (0x0001f8d2) ai_gene_pane_1

0x2f37,	// (0x00017059) ai_gene_pane_2

0x2f40,	// (0x00017062) list_highlight_pane_cp4

0xb78c,	// (0x0001f8ae) cell_ai_link_pane_ParamLimits

0xb78c,	// (0x0001f8ae) cell_ai_link_pane

0x2f08,	// (0x0001702a) cell_ai_link_pane_g1

0xc599,	// (0x000206bb) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00023a1e) cell_ai_link_pane_g

0xc2f2,	// (0x00020414) grid_highlight_cp2

0xc2f2,	// (0x00020414) bg_popup_sub_pane_cp1

0xc483,	// (0x000205a5) popup_ai_links_title_window_t1

0x2e58,	// (0x00016f7a) ai_gene_pane_1_g1_ParamLimits

0x2e58,	// (0x00016f7a) ai_gene_pane_1_g1

0x2e64,	// (0x00016f86) ai_gene_pane_1_g2_ParamLimits

0x2e64,	// (0x00016f86) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x00023a14) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x00023a14) ai_gene_pane_1_g

0x2e71,	// (0x00016f93) ai_gene_pane_1_t1_ParamLimits

0x2e71,	// (0x00016f93) ai_gene_pane_1_t1

0x2ea5,	// (0x00016fc7) grid_ai_soft_ind_pane

0x2e43,	// (0x00016f65) ai_gene_pane_2_t1_ParamLimits

0x2e43,	// (0x00016f65) ai_gene_pane_2_t1

0x9f5e,	// (0x0001e080) main_pane_empty_t1_ParamLimits

0x9f5e,	// (0x0001e080) main_pane_empty_t1

0x9f76,	// (0x0001e098) main_pane_empty_t2_ParamLimits

0x9f76,	// (0x0001e098) main_pane_empty_t2

0x9f8b,	// (0x0001e0ad) main_pane_empty_t3_ParamLimits

0x9f8b,	// (0x0001e0ad) main_pane_empty_t3

0x9f9d,	// (0x0001e0bf) main_pane_empty_t4_ParamLimits

0x9f9d,	// (0x0001e0bf) main_pane_empty_t4

0x9faf,	// (0x0001e0d1) main_pane_empty_t5_ParamLimits

0x9faf,	// (0x0001e0d1) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023696) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023696) main_pane_empty_t

0xc88f,	// (0x000209b1) bg_popup_window_pane_ParamLimits

0xc88f,	// (0x000209b1) bg_popup_window_pane

0xb706,	// (0x0001f828) find_popup_pane_cp2_ParamLimits

0xb706,	// (0x0001f828) find_popup_pane_cp2

0x2bbf,	// (0x00016ce1) heading_pane_ParamLimits

0x2bbf,	// (0x00016ce1) heading_pane

0xc2f2,	// (0x00020414) bg_popup_sub_pane

0xb687,	// (0x0001f7a9) bg_popup_window_pane_g1_ParamLimits

0xb687,	// (0x0001f7a9) bg_popup_window_pane_g1

0xb696,	// (0x0001f7b8) bg_popup_window_pane_g2_ParamLimits

0xb696,	// (0x0001f7b8) bg_popup_window_pane_g2

0xb6a2,	// (0x0001f7c4) bg_popup_window_pane_g3_ParamLimits

0xb6a2,	// (0x0001f7c4) bg_popup_window_pane_g3

0xb6ae,	// (0x0001f7d0) bg_popup_window_pane_g4_ParamLimits

0xb6ae,	// (0x0001f7d0) bg_popup_window_pane_g4

0xb6bd,	// (0x0001f7df) bg_popup_window_pane_g5_ParamLimits

0xb6bd,	// (0x0001f7df) bg_popup_window_pane_g5

0xb6cd,	// (0x0001f7ef) bg_popup_window_pane_g6_ParamLimits

0xb6cd,	// (0x0001f7ef) bg_popup_window_pane_g6

0xb6d9,	// (0x0001f7fb) bg_popup_window_pane_g7_ParamLimits

0xb6d9,	// (0x0001f7fb) bg_popup_window_pane_g7

0xb6e8,	// (0x0001f80a) bg_popup_window_pane_g8_ParamLimits

0xb6e8,	// (0x0001f80a) bg_popup_window_pane_g8

0xb6f7,	// (0x0001f819) bg_popup_window_pane_g9_ParamLimits

0xb6f7,	// (0x0001f819) bg_popup_window_pane_g9

0x2b99,	// (0x00016cbb) bg_popup_window_pane_g10_ParamLimits

0x2b99,	// (0x00016cbb) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x000239dc) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x000239dc) bg_popup_window_pane_g

0x2ac2,	// (0x00016be4) bg_popup_heading_pane_ParamLimits

0x2ac2,	// (0x00016be4) bg_popup_heading_pane

0xec83,	// (0x00022da5) tabs_4_passive_pane_cp_srt_ParamLimits

0xec83,	// (0x00022da5) tabs_4_passive_pane_cp_srt

0xec95,	// (0x00022db7) tabs_4_passive_pane_srt_ParamLimits

0x2ad6,	// (0x00016bf8) heading_pane_g2

0xec95,	// (0x00022db7) tabs_4_passive_pane_srt

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp3_srt

0x2ade,	// (0x00016c00) heading_pane_t1_ParamLimits

0x2ade,	// (0x00016c00) heading_pane_t1

0x2af5,	// (0x00016c17) heading_pane_t2_ParamLimits

0x2af5,	// (0x00016c17) heading_pane_t2

0x0001,

0xf8b5,	// (0x000239d7) heading_pane_t_ParamLimits

0xf8b5,	// (0x000239d7) heading_pane_t

0x25ff,	// (0x00016721) bg_popup_heading_pane_g1

0x26ae,	// (0x000167d0) bg_popup_heading_pane_g2

0x26b8,	// (0x000167da) bg_popup_heading_pane_g3

0x26c2,	// (0x000167e4) bg_popup_heading_pane_g4

0x26cc,	// (0x000167ee) bg_popup_heading_pane_g5

0x26d6,	// (0x000167f8) bg_popup_heading_pane_g6

0x26de,	// (0x00016800) bg_popup_heading_pane_g7

0x26e6,	// (0x00016808) bg_popup_heading_pane_g8

0x26f0,	// (0x00016812) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00023993) bg_popup_heading_pane_g

0x1cff,	// (0x00015e21) bg_popup_sub_pane_g1

0x1d0f,	// (0x00015e31) bg_popup_sub_pane_g2

0x1d07,	// (0x00015e29) bg_popup_sub_pane_g3

0x1d1f,	// (0x00015e41) bg_popup_sub_pane_g4

0x1d17,	// (0x00015e39) bg_popup_sub_pane_g5

0x1d27,	// (0x00015e49) bg_popup_sub_pane_g6

0x1d2f,	// (0x00015e51) bg_popup_sub_pane_g7

0x1d3f,	// (0x00015e61) bg_popup_sub_pane_g8

0x1d37,	// (0x00015e59) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x0002396d) bg_popup_sub_pane_g

0xc340,	// (0x00020462) bg_popup_window_pane_cp5_ParamLimits

0xc340,	// (0x00020462) bg_popup_window_pane_cp5

0xc4a0,	// (0x000205c2) popup_note_window_g1_ParamLimits

0xc4a0,	// (0x000205c2) popup_note_window_g1

0xc4ac,	// (0x000205ce) popup_note_window_t1_ParamLimits

0xc4ac,	// (0x000205ce) popup_note_window_t1

0xc4c2,	// (0x000205e4) popup_note_window_t2_ParamLimits

0xc4c2,	// (0x000205e4) popup_note_window_t2

0xc4d8,	// (0x000205fa) popup_note_window_t3_ParamLimits

0xc4d8,	// (0x000205fa) popup_note_window_t3

0xc4ee,	// (0x00020610) popup_note_window_t4_ParamLimits

0xc4ee,	// (0x00020610) popup_note_window_t4

0xc516,	// (0x00020638) popup_note_window_t5_ParamLimits

0xc516,	// (0x00020638) popup_note_window_t5

0x0004,

0xf57f,	// (0x000236a1) popup_note_window_t_ParamLimits

0xf57f,	// (0x000236a1) popup_note_window_t

0xc53a,	// (0x0002065c) bg_popup_window_pane_cp6_ParamLimits

0xc53a,	// (0x0002065c) bg_popup_window_pane_cp6

0x257b,	// (0x0001669d) popup_note_image_window_g1_ParamLimits

0x257b,	// (0x0001669d) popup_note_image_window_g1

0xb52c,	// (0x0001f64e) popup_note_image_window_g2_ParamLimits

0xb52c,	// (0x0001f64e) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00023961) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00023961) popup_note_image_window_g

0x25a0,	// (0x000166c2) popup_note_image_window_t1_ParamLimits

0x25a0,	// (0x000166c2) popup_note_image_window_t1

0x25b9,	// (0x000166db) popup_note_image_window_t2_ParamLimits

0x25b9,	// (0x000166db) popup_note_image_window_t2

0x25d2,	// (0x000166f4) popup_note_image_window_t3_ParamLimits

0x25d2,	// (0x000166f4) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00023966) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00023966) popup_note_image_window_t

0x2444,	// (0x00016566) bg_popup_window_pane_cp7_ParamLimits

0x2444,	// (0x00016566) bg_popup_window_pane_cp7

0x2474,	// (0x00016596) popup_note_wait_window_g1_ParamLimits

0x2474,	// (0x00016596) popup_note_wait_window_g1

0x2480,	// (0x000165a2) popup_note_wait_window_g2_ParamLimits

0x2480,	// (0x000165a2) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x0002394f) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x0002394f) popup_note_wait_window_g

0x2498,	// (0x000165ba) popup_note_wait_window_t1_ParamLimits

0x2498,	// (0x000165ba) popup_note_wait_window_t1

0xb4cd,	// (0x0001f5ef) popup_note_wait_window_t2_ParamLimits

0xb4cd,	// (0x0001f5ef) popup_note_wait_window_t2

0xb4ea,	// (0x0001f60c) popup_note_wait_window_t3_ParamLimits

0xb4ea,	// (0x0001f60c) popup_note_wait_window_t3

0xb4fd,	// (0x0001f61f) popup_note_wait_window_t4_ParamLimits

0xb4fd,	// (0x0001f61f) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00023956) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00023956) popup_note_wait_window_t

0x2514,	// (0x00016636) wait_bar_pane_ParamLimits

0x2514,	// (0x00016636) wait_bar_pane

0xc2f2,	// (0x00020414) wait_anim_pane

0xc2f2,	// (0x00020414) wait_border_pane

0xc2e8,	// (0x0002040a) wait_anim_pane_g1

0xc2e8,	// (0x0002040a) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00023816) wait_anim_pane_g

0x23f0,	// (0x00016512) wait_border_pane_g1

0x23fb,	// (0x0001651d) wait_border_pane_g2

0x2404,	// (0x00016526) wait_border_pane_g3

0x0002,

0xf826,	// (0x00023948) wait_border_pane_g

0x225b,	// (0x0001637d) bg_popup_window_pane_cp16_ParamLimits

0x225b,	// (0x0001637d) bg_popup_window_pane_cp16

0xb47d,	// (0x0001f59f) indicator_popup_pane_cp4_ParamLimits

0xb47d,	// (0x0001f59f) indicator_popup_pane_cp4

0x236f,	// (0x00016491) popup_query_data_window_t1_ParamLimits

0x236f,	// (0x00016491) popup_query_data_window_t1

0x2381,	// (0x000164a3) popup_query_data_window_t2_ParamLimits

0x2381,	// (0x000164a3) popup_query_data_window_t2

0x239a,	// (0x000164bc) popup_query_data_window_t3_ParamLimits

0x239a,	// (0x000164bc) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00023941) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00023941) popup_query_data_window_t

0xb491,	// (0x0001f5b3) query_popup_data_pane_ParamLimits

0xb491,	// (0x0001f5b3) query_popup_data_pane

0xb4a5,	// (0x0001f5c7) query_popup_data_pane_cp1_ParamLimits

0xb4a5,	// (0x0001f5c7) query_popup_data_pane_cp1

0x225b,	// (0x0001637d) bg_popup_window_pane_cp10_ParamLimits

0x225b,	// (0x0001637d) bg_popup_window_pane_cp10

0xb3f8,	// (0x0001f51a) indicator_popup_pane_ParamLimits

0xb3f8,	// (0x0001f51a) indicator_popup_pane

0xb41a,	// (0x0001f53c) popup_query_code_window_t1_ParamLimits

0xb41a,	// (0x0001f53c) popup_query_code_window_t1

0xb434,	// (0x0001f556) popup_query_code_window_t2_ParamLimits

0xb434,	// (0x0001f556) popup_query_code_window_t2

0x2312,	// (0x00016434) popup_query_code_window_t3_ParamLimits

0x2312,	// (0x00016434) popup_query_code_window_t3

0x0002,

0xf818,	// (0x0002393a) popup_query_code_window_t_ParamLimits

0xf818,	// (0x0002393a) popup_query_code_window_t

0x2341,	// (0x00016463) query_popup_pane_ParamLimits

0x2341,	// (0x00016463) query_popup_pane

0xc53a,	// (0x0002065c) bg_popup_window_pane_cp15_ParamLimits

0xc53a,	// (0x0002065c) bg_popup_window_pane_cp15

0x9fc1,	// (0x0001e0e3) indicator_popup_pane_cp1_ParamLimits

0x9fc1,	// (0x0001e0e3) indicator_popup_pane_cp1

0x9fd4,	// (0x0001e0f6) indicator_popup_pane_cp2_ParamLimits

0x9fd4,	// (0x0001e0f6) indicator_popup_pane_cp2

0x9fe7,	// (0x0001e109) popup_query_data_code_window_g1_ParamLimits

0x9fe7,	// (0x0001e109) popup_query_data_code_window_g1

0xc558,	// (0x0002067a) popup_query_data_code_window_t1_ParamLimits

0xc558,	// (0x0002067a) popup_query_data_code_window_t1

0xc56a,	// (0x0002068c) popup_query_data_code_window_t2_ParamLimits

0xc56a,	// (0x0002068c) popup_query_data_code_window_t2

0x9ffa,	// (0x0001e11c) popup_query_data_code_window_t3_ParamLimits

0x9ffa,	// (0x0001e11c) popup_query_data_code_window_t3

0xa010,	// (0x0001e132) popup_query_data_code_window_t4_ParamLimits

0xa010,	// (0x0001e132) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000236ac) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000236ac) popup_query_data_code_window_t

0xea95,	// (0x00022bb7) list_single_midp_graphic_pane_g3

0xa028,	// (0x0001e14a) query_popup_data_pane_cp2_ParamLimits

0xa03b,	// (0x0001e15d) query_popup_pane_cp2_ParamLimits

0xa03b,	// (0x0001e15d) query_popup_pane_cp2

0xc2f2,	// (0x00020414) bg_popup_window_pane_cp11

0x2253,	// (0x00016375) heading_pane_cp5

0xc5c6,	// (0x000206e8) listscroll_popup_info_pane

0xc2f2,	// (0x00020414) input_focus_pane_cp3

0xc57c,	// (0x0002069e) query_popup_pane_t1

0xc58a,	// (0x000206ac) list_popup_info_pane_ParamLimits

0xc58a,	// (0x000206ac) list_popup_info_pane

0xc599,	// (0x000206bb) listscroll_popup_info_pane_g1

0xc5a1,	// (0x000206c3) scroll_pane_cp7

0xa04e,	// (0x0001e170) popup_info_list_pane_t1_ParamLimits

0xa04e,	// (0x0001e170) popup_info_list_pane_t1

0xa068,	// (0x0001e18a) popup_info_list_pane_t2_ParamLimits

0xa068,	// (0x0001e18a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000236b5) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000236b5) popup_info_list_pane_t

0xc2f2,	// (0x00020414) bg_popup_window_pane_cp12

0xbc0d,	// (0x0001fd2f) find_popup_pane

0xc34e,	// (0x00020470) bg_popup_window_pane_cp3

0xc5ab,	// (0x000206cd) heading_pane_cp3

0xc5b7,	// (0x000206d9) listscroll_popup_graphic_pane

0xc2f2,	// (0x00020414) bg_popup_window_pane_cp4

0xa0d2,	// (0x0001e1f4) heading_pane_cp4

0xc5c6,	// (0x000206e8) listscroll_popup_colour_pane

0xa0da,	// (0x0001e1fc) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa0da,	// (0x0001e1fc) cell_large_graphic_colour_none_popup_pane

0xa0ee,	// (0x0001e210) grid_large_graphic_colour_popup_pane_ParamLimits

0xa0ee,	// (0x0001e210) grid_large_graphic_colour_popup_pane

0xa112,	// (0x0001e234) listscroll_popup_colour_pane_g1_ParamLimits

0xa112,	// (0x0001e234) listscroll_popup_colour_pane_g1

0xa129,	// (0x0001e24b) listscroll_popup_colour_pane_g2_ParamLimits

0xa129,	// (0x0001e24b) listscroll_popup_colour_pane_g2

0xa140,	// (0x0001e262) listscroll_popup_colour_pane_g3_ParamLimits

0xa140,	// (0x0001e262) listscroll_popup_colour_pane_g3

0xa150,	// (0x0001e272) listscroll_popup_colour_pane_g4_ParamLimits

0xa150,	// (0x0001e272) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000236ba) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000236ba) listscroll_popup_colour_pane_g

0xc5ce,	// (0x000206f0) scroll_pane_cp6_ParamLimits

0xc5ce,	// (0x000206f0) scroll_pane_cp6

0xa160,	// (0x0001e282) cell_large_graphic_colour_popup_pane_ParamLimits

0xa160,	// (0x0001e282) cell_large_graphic_colour_popup_pane

0xa17f,	// (0x0001e2a1) cell_large_graphic_colour_none_popup_pane_t1

0xc2f2,	// (0x00020414) grid_highlight_pane_cp5

0xc5e0,	// (0x00020702) cell_large_graphic_colour_popup_pane_g1

0xc5e8,	// (0x0002070a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000236c3) cell_large_graphic_colour_popup_pane_g

0xc5f0,	// (0x00020712) cell_large_graphic_colour_popup_pane_g2_copy1

0xc5f9,	// (0x0002071b) grid_highlight_pane_cp4

0xc601,	// (0x00020723) bg_popup_window_pane_cp8_ParamLimits

0xc601,	// (0x00020723) bg_popup_window_pane_cp8

0xa18e,	// (0x0001e2b0) popup_snote_single_text_window_g1_ParamLimits

0xa18e,	// (0x0001e2b0) popup_snote_single_text_window_g1

0xa1a0,	// (0x0001e2c2) popup_snote_single_text_window_t1_ParamLimits

0xa1a0,	// (0x0001e2c2) popup_snote_single_text_window_t1

0xa1b3,	// (0x0001e2d5) popup_snote_single_text_window_t2_ParamLimits

0xa1b3,	// (0x0001e2d5) popup_snote_single_text_window_t2

0xa1c6,	// (0x0001e2e8) popup_snote_single_text_window_t3_ParamLimits

0xa1c6,	// (0x0001e2e8) popup_snote_single_text_window_t3

0xa1ff,	// (0x0001e321) popup_snote_single_text_window_t4_ParamLimits

0xa1ff,	// (0x0001e321) popup_snote_single_text_window_t4

0xa233,	// (0x0001e355) popup_snote_single_text_window_t5_ParamLimits

0xa233,	// (0x0001e355) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000236c8) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000236c8) popup_snote_single_text_window_t

0xc61c,	// (0x0002073e) bg_popup_window_pane_cp9_ParamLimits

0xc61c,	// (0x0002073e) bg_popup_window_pane_cp9

0xa18e,	// (0x0001e2b0) popup_snote_single_graphic_window_g1_ParamLimits

0xa18e,	// (0x0001e2b0) popup_snote_single_graphic_window_g1

0xc62a,	// (0x0002074c) popup_snote_single_graphic_window_g2_ParamLimits

0xc62a,	// (0x0002074c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000236d3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000236d3) popup_snote_single_graphic_window_g

0xc636,	// (0x00020758) popup_snote_single_graphic_window_t1_ParamLimits

0xc636,	// (0x00020758) popup_snote_single_graphic_window_t1

0xc649,	// (0x0002076b) popup_snote_single_graphic_window_t2_ParamLimits

0xc649,	// (0x0002076b) popup_snote_single_graphic_window_t2

0xa1c6,	// (0x0001e2e8) popup_snote_single_graphic_window_t3_ParamLimits

0xa1c6,	// (0x0001e2e8) popup_snote_single_graphic_window_t3

0xa1ff,	// (0x0001e321) popup_snote_single_graphic_window_t4_ParamLimits

0xa1ff,	// (0x0001e321) popup_snote_single_graphic_window_t4

0xa262,	// (0x0001e384) popup_snote_single_graphic_window_t5_ParamLimits

0xa262,	// (0x0001e384) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000236d8) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000236d8) popup_snote_single_graphic_window_t

0x35c3,	// (0x000176e5) grid_graphic_popup_pane_ParamLimits

0x35c3,	// (0x000176e5) grid_graphic_popup_pane

0x35ed,	// (0x0001770f) listscroll_popup_graphic_pane_g1_ParamLimits

0x35ed,	// (0x0001770f) listscroll_popup_graphic_pane_g1

0xbbab,	// (0x0001fccd) listscroll_popup_graphic_pane_g2_ParamLimits

0xbbab,	// (0x0001fccd) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x00023ab7) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x00023ab7) listscroll_popup_graphic_pane_g

0x3615,	// (0x00017737) scroll_pane_cp5

0xbb50,	// (0x0001fc72) cell_graphic_popup_pane_ParamLimits

0xbb50,	// (0x0001fc72) cell_graphic_popup_pane

0x3543,	// (0x00017665) cell_graphic_popup_pane_g1

0x354b,	// (0x0001766d) cell_graphic_popup_pane_g2

0xc5f0,	// (0x00020712) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00023ab0) cell_graphic_popup_pane_g

0x3554,	// (0x00017676) cell_graphic_popup_pane_t2

0xc5f9,	// (0x0002071b) grid_highlight_pane_cp3

0xc66e,	// (0x00020790) list_gen_pane_ParamLimits

0xc66e,	// (0x00020790) list_gen_pane

0xc696,	// (0x000207b8) scroll_pane

0xbaba,	// (0x0001fbdc) bg_list_pane_g1_ParamLimits

0xbaba,	// (0x0001fbdc) bg_list_pane_g1

0xbad5,	// (0x0001fbf7) bg_list_pane_g2_ParamLimits

0xbad5,	// (0x0001fbf7) bg_list_pane_g2

0xbae8,	// (0x0001fc0a) bg_list_pane_g3_ParamLimits

0xbae8,	// (0x0001fc0a) bg_list_pane_g3

0xbafa,	// (0x0001fc1c) bg_list_pane_g4_ParamLimits

0xbafa,	// (0x0001fc1c) bg_list_pane_g4

0xbb0c,	// (0x0001fc2e) bg_list_pane_g5_ParamLimits

0xbb0c,	// (0x0001fc2e) bg_list_pane_g5

0x0004,

0xf983,	// (0x00023aa5) bg_list_pane_g_ParamLimits

0xf983,	// (0x00023aa5) bg_list_pane_g

0xba5e,	// (0x0001fb80) list_double2_graphic_large_graphic_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double2_graphic_large_graphic_pane

0xba5e,	// (0x0001fb80) list_double2_graphic_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double2_graphic_pane

0xba5e,	// (0x0001fb80) list_double2_large_graphic_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double2_large_graphic_pane

0xba5e,	// (0x0001fb80) list_double2_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double2_pane

0xba5e,	// (0x0001fb80) list_double_graphic_heading_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_graphic_heading_pane

0xba5e,	// (0x0001fb80) list_double_graphic_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_graphic_pane

0xba5e,	// (0x0001fb80) list_double_heading_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_heading_pane

0xba5e,	// (0x0001fb80) list_double_large_graphic_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_large_graphic_pane

0xba5e,	// (0x0001fb80) list_double_number_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_number_pane

0xba5e,	// (0x0001fb80) list_double_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_pane

0xba5e,	// (0x0001fb80) list_double_time_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_double_time_pane

0xba5e,	// (0x0001fb80) list_setting_number_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_setting_number_pane

0xba5e,	// (0x0001fb80) list_setting_pane_ParamLimits

0xba5e,	// (0x0001fb80) list_setting_pane

0xba70,	// (0x0001fb92) list_single_2graphic_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_2graphic_pane

0xba70,	// (0x0001fb92) list_single_graphic_heading_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_graphic_heading_pane

0xba70,	// (0x0001fb92) list_single_graphic_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_graphic_pane

0xba70,	// (0x0001fb92) list_single_heading_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_heading_pane

0xba70,	// (0x0001fb92) list_single_large_graphic_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_large_graphic_pane

0xba70,	// (0x0001fb92) list_single_number_heading_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_number_heading_pane

0xba70,	// (0x0001fb92) list_single_number_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_number_pane

0xba70,	// (0x0001fb92) list_single_pane_ParamLimits

0xba70,	// (0x0001fb92) list_single_pane

0xc2f2,	// (0x00020414) list_highlight_pane_cp1

0xc6ca,	// (0x000207ec) list_single_pane_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_pane_g1

0xc6d6,	// (0x000207f8) list_single_pane_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_pane_g

0xba48,	// (0x0001fb6a) list_single_pane_t1_ParamLimits

0xba48,	// (0x0001fb6a) list_single_pane_t1

0xc6ca,	// (0x000207ec) list_single_number_pane_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_number_pane_g1

0xc6d6,	// (0x000207f8) list_single_number_pane_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_number_pane_g

0x1c8d,	// (0x00015daf) list_single_number_pane_t1_ParamLimits

0x1c8d,	// (0x00015daf) list_single_number_pane_t1

0xb854,	// (0x0001f976) list_single_number_pane_t2_ParamLimits

0xb854,	// (0x0001f976) list_single_number_pane_t2

0x0001,

0xf944,	// (0x00023a66) list_single_number_pane_t_ParamLimits

0xf944,	// (0x00023a66) list_single_number_pane_t

0x1c81,	// (0x00015da3) list_single_graphic_pane_g1_ParamLimits

0x1c81,	// (0x00015da3) list_single_graphic_pane_g1

0xc6ca,	// (0x000207ec) list_single_graphic_pane_g2_ParamLimits

0xc6ca,	// (0x000207ec) list_single_graphic_pane_g2

0xc6d6,	// (0x000207f8) list_single_graphic_pane_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000236e3) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000236e3) list_single_graphic_pane_g

0x1c8d,	// (0x00015daf) list_single_graphic_pane_t1_ParamLimits

0x1c8d,	// (0x00015daf) list_single_graphic_pane_t1

0xc6ca,	// (0x000207ec) list_single_heading_pane_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_heading_pane_g1

0xc6d6,	// (0x000207f8) list_single_heading_pane_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_heading_pane_g

0xa29b,	// (0x0001e3bd) list_single_heading_pane_t1_ParamLimits

0xa29b,	// (0x0001e3bd) list_single_heading_pane_t1

0xa2b1,	// (0x0001e3d3) list_single_heading_pane_t2_ParamLimits

0xa2b1,	// (0x0001e3d3) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000236ef) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000236ef) list_single_heading_pane_t

0xc6ca,	// (0x000207ec) list_single_number_heading_pane_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_number_heading_pane_g1

0xc6d6,	// (0x000207f8) list_single_number_heading_pane_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_number_heading_pane_g

0xa29b,	// (0x0001e3bd) list_single_number_heading_pane_t1_ParamLimits

0xa29b,	// (0x0001e3bd) list_single_number_heading_pane_t1

0xa2c3,	// (0x0001e3e5) list_single_number_heading_pane_t2_ParamLimits

0xa2c3,	// (0x0001e3e5) list_single_number_heading_pane_t2

0xa2d5,	// (0x0001e3f7) list_single_number_heading_pane_t3_ParamLimits

0xa2d5,	// (0x0001e3f7) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000236f4) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000236f4) list_single_number_heading_pane_t

0xa2e7,	// (0x0001e409) list_single_graphic_heading_pane_g1_ParamLimits

0xa2e7,	// (0x0001e409) list_single_graphic_heading_pane_g1

0xa2f3,	// (0x0001e415) list_single_graphic_heading_pane_g4_ParamLimits

0xa2f3,	// (0x0001e415) list_single_graphic_heading_pane_g4

0xc6d6,	// (0x000207f8) list_single_graphic_heading_pane_g5_ParamLimits

0xc6d6,	// (0x000207f8) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000236fb) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000236fb) list_single_graphic_heading_pane_g

0xa29b,	// (0x0001e3bd) list_single_graphic_heading_pane_t1_ParamLimits

0xa29b,	// (0x0001e3bd) list_single_graphic_heading_pane_t1

0xa304,	// (0x0001e426) list_single_graphic_heading_pane_t2_ParamLimits

0xa304,	// (0x0001e426) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023702) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023702) list_single_graphic_heading_pane_t

0x3c99,	// (0x00017dbb) list_single_large_graphic_pane_g1_ParamLimits

0x3c99,	// (0x00017dbb) list_single_large_graphic_pane_g1

0xc6ca,	// (0x000207ec) list_single_large_graphic_pane_g2_ParamLimits

0xc6ca,	// (0x000207ec) list_single_large_graphic_pane_g2

0xc6d6,	// (0x000207f8) list_single_large_graphic_pane_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023707) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023707) list_single_large_graphic_pane_g

0x23fb,	// (0x0001651d) wait_border_pane_g2_copy1

0xa316,	// (0x0001e438) list_single_large_graphic_pane_g4_cp2

0x1c8d,	// (0x00015daf) list_single_large_graphic_pane_t1_ParamLimits

0x1c8d,	// (0x00015daf) list_single_large_graphic_pane_t1

0xa31e,	// (0x0001e440) list_double_pane_g1_ParamLimits

0xa31e,	// (0x0001e440) list_double_pane_g1

0xa32a,	// (0x0001e44c) list_double_pane_g2_ParamLimits

0xa32a,	// (0x0001e44c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002370e) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002370e) list_double_pane_g

0xa336,	// (0x0001e458) list_double_pane_t1_ParamLimits

0xa336,	// (0x0001e458) list_double_pane_t1

0xa34c,	// (0x0001e46e) list_double_pane_t2_ParamLimits

0xa34c,	// (0x0001e46e) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023713) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023713) list_double_pane_t

0xa35e,	// (0x0001e480) list_double2_pane_g1_ParamLimits

0xa35e,	// (0x0001e480) list_double2_pane_g1

0xa36f,	// (0x0001e491) list_double2_pane_g2_ParamLimits

0xa36f,	// (0x0001e491) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023718) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023718) list_double2_pane_g

0xa37b,	// (0x0001e49d) list_double2_pane_t1_ParamLimits

0xa37b,	// (0x0001e49d) list_double2_pane_t1

0xa391,	// (0x0001e4b3) list_double2_pane_t2_ParamLimits

0xa391,	// (0x0001e4b3) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002371d) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002371d) list_double2_pane_t

0xa31e,	// (0x0001e440) list_double_number_pane_g1_ParamLimits

0xa31e,	// (0x0001e440) list_double_number_pane_g1

0xa32a,	// (0x0001e44c) list_double_number_pane_g2_ParamLimits

0xa32a,	// (0x0001e44c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002370e) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002370e) list_double_number_pane_g

0xa3a3,	// (0x0001e4c5) list_double_number_pane_t1_ParamLimits

0xa3a3,	// (0x0001e4c5) list_double_number_pane_t1

0xa3b5,	// (0x0001e4d7) list_double_number_pane_t2_ParamLimits

0xa3b5,	// (0x0001e4d7) list_double_number_pane_t2

0xa3cb,	// (0x0001e4ed) list_double_number_pane_t3_ParamLimits

0xa3cb,	// (0x0001e4ed) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023722) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023722) list_double_number_pane_t

0xa3dd,	// (0x0001e4ff) list_double_graphic_pane_g1_ParamLimits

0xa3dd,	// (0x0001e4ff) list_double_graphic_pane_g1

0xa3e9,	// (0x0001e50b) list_double_graphic_pane_g2_ParamLimits

0xa3e9,	// (0x0001e50b) list_double_graphic_pane_g2

0xa3f8,	// (0x0001e51a) list_double_graphic_pane_g3_ParamLimits

0xa3f8,	// (0x0001e51a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023729) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023729) list_double_graphic_pane_g

0xa3b5,	// (0x0001e4d7) list_double_graphic_pane_t1_ParamLimits

0xa3b5,	// (0x0001e4d7) list_double_graphic_pane_t1

0xa3cb,	// (0x0001e4ed) list_double_graphic_pane_t2_ParamLimits

0xa3cb,	// (0x0001e4ed) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00023732) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00023732) list_double_graphic_pane_t

0xa410,	// (0x0001e532) list_double2_graphic_pane_g1_ParamLimits

0xa410,	// (0x0001e532) list_double2_graphic_pane_g1

0x4dc7,	// (0x00018ee9) list_double2_graphic_pane_g2_ParamLimits

0x4dc7,	// (0x00018ee9) list_double2_graphic_pane_g2

0xa36f,	// (0x0001e491) list_double2_graphic_pane_g3_ParamLimits

0xa36f,	// (0x0001e491) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00023737) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00023737) list_double2_graphic_pane_g

0xa41c,	// (0x0001e53e) list_double2_graphic_pane_t1_ParamLimits

0xa41c,	// (0x0001e53e) list_double2_graphic_pane_t1

0xa432,	// (0x0001e554) list_double2_graphic_pane_t2_ParamLimits

0xa432,	// (0x0001e554) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002373e) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002373e) list_double2_graphic_pane_t

0xa444,	// (0x0001e566) list_double_large_graphic_pane_g1_ParamLimits

0xa444,	// (0x0001e566) list_double_large_graphic_pane_g1

0xa463,	// (0x0001e585) list_double_large_graphic_pane_g2_ParamLimits

0xa463,	// (0x0001e585) list_double_large_graphic_pane_g2

0xa32a,	// (0x0001e44c) list_double_large_graphic_pane_g3_ParamLimits

0xa32a,	// (0x0001e44c) list_double_large_graphic_pane_g3

0xa474,	// (0x0001e596) list_double_large_graphic_pane_g4_ParamLimits

0xa474,	// (0x0001e596) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00023743) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00023743) list_double_large_graphic_pane_g

0xa487,	// (0x0001e5a9) list_double_large_graphic_pane_t1_ParamLimits

0xa487,	// (0x0001e5a9) list_double_large_graphic_pane_t1

0xa4a0,	// (0x0001e5c2) list_double_large_graphic_pane_t2_ParamLimits

0xa4a0,	// (0x0001e5c2) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002374e) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002374e) list_double_large_graphic_pane_t

0xa4b2,	// (0x0001e5d4) list_double2_large_graphic_pane_g1_ParamLimits

0xa4b2,	// (0x0001e5d4) list_double2_large_graphic_pane_g1

0xa35e,	// (0x0001e480) list_double2_large_graphic_pane_g2_ParamLimits

0xa35e,	// (0x0001e480) list_double2_large_graphic_pane_g2

0xa36f,	// (0x0001e491) list_double2_large_graphic_pane_g3_ParamLimits

0xa36f,	// (0x0001e491) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00023753) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00023753) list_double2_large_graphic_pane_g

0xa41c,	// (0x0001e53e) list_double2_large_graphic_pane_t1_ParamLimits

0xa41c,	// (0x0001e53e) list_double2_large_graphic_pane_t1

0xa432,	// (0x0001e554) list_double2_large_graphic_pane_t2_ParamLimits

0xa432,	// (0x0001e554) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002373e) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002373e) list_double2_large_graphic_pane_t

0xa4be,	// (0x0001e5e0) list_double_heading_pane_g1_ParamLimits

0xa4be,	// (0x0001e5e0) list_double_heading_pane_g1

0xa4cf,	// (0x0001e5f1) list_double_heading_pane_g2_ParamLimits

0xa4cf,	// (0x0001e5f1) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x0002375a) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x0002375a) list_double_heading_pane_g

0xa4db,	// (0x0001e5fd) list_double_heading_pane_t1_ParamLimits

0xa4db,	// (0x0001e5fd) list_double_heading_pane_t1

0xa4f1,	// (0x0001e613) list_double_heading_pane_t2_ParamLimits

0xa4f1,	// (0x0001e613) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x0002375f) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x0002375f) list_double_heading_pane_t

0xa3dd,	// (0x0001e4ff) list_double_graphic_heading_pane_g1_ParamLimits

0xa3dd,	// (0x0001e4ff) list_double_graphic_heading_pane_g1

0xa4be,	// (0x0001e5e0) list_double_graphic_heading_pane_g2_ParamLimits

0xa4be,	// (0x0001e5e0) list_double_graphic_heading_pane_g2

0xa4cf,	// (0x0001e5f1) list_double_graphic_heading_pane_g3_ParamLimits

0xa4cf,	// (0x0001e5f1) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x00023764) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x00023764) list_double_graphic_heading_pane_g

0xa4db,	// (0x0001e5fd) list_double_graphic_heading_pane_t1_ParamLimits

0xa4db,	// (0x0001e5fd) list_double_graphic_heading_pane_t1

0xa4f1,	// (0x0001e613) list_double_graphic_heading_pane_t2_ParamLimits

0xa4f1,	// (0x0001e613) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x0002375f) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x0002375f) list_double_graphic_heading_pane_t

0xa463,	// (0x0001e585) list_double_time_pane_g1_ParamLimits

0xa463,	// (0x0001e585) list_double_time_pane_g1

0xa32a,	// (0x0001e44c) list_double_time_pane_g2_ParamLimits

0xa32a,	// (0x0001e44c) list_double_time_pane_g2

0x0001,

0xf649,	// (0x0002376b) list_double_time_pane_g_ParamLimits

0xf649,	// (0x0002376b) list_double_time_pane_g

0xa503,	// (0x0001e625) list_double_time_pane_t1_ParamLimits

0xa503,	// (0x0001e625) list_double_time_pane_t1

0xa519,	// (0x0001e63b) list_double_time_pane_t2_ParamLimits

0xa519,	// (0x0001e63b) list_double_time_pane_t2

0xa52b,	// (0x0001e64d) list_double_time_pane_t3_ParamLimits

0xa52b,	// (0x0001e64d) list_double_time_pane_t3

0xa53d,	// (0x0001e65f) list_double_time_pane_t4_ParamLimits

0xa53d,	// (0x0001e65f) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x00023770) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x00023770) list_double_time_pane_t

0x4dc7,	// (0x00018ee9) list_setting_pane_g1_ParamLimits

0x4dc7,	// (0x00018ee9) list_setting_pane_g1

0xa36f,	// (0x0001e491) list_setting_pane_g2_ParamLimits

0xa36f,	// (0x0001e491) list_setting_pane_g2

0x0001,

0xf657,	// (0x00023779) list_setting_pane_g_ParamLimits

0xf657,	// (0x00023779) list_setting_pane_g

0xa54f,	// (0x0001e671) list_setting_pane_t1_ParamLimits

0xa54f,	// (0x0001e671) list_setting_pane_t1

0xa566,	// (0x0001e688) list_setting_pane_t2_ParamLimits

0xa566,	// (0x0001e688) list_setting_pane_t2

0x0002,

0xf65c,	// (0x0002377e) list_setting_pane_t_ParamLimits

0xf65c,	// (0x0002377e) list_setting_pane_t

0xa5a5,	// (0x0001e6c7) set_value_pane_cp_ParamLimits

0xa5a5,	// (0x0001e6c7) set_value_pane_cp

0x4dc7,	// (0x00018ee9) list_setting_number_pane_g1_ParamLimits

0x4dc7,	// (0x00018ee9) list_setting_number_pane_g1

0xa36f,	// (0x0001e491) list_setting_number_pane_g2_ParamLimits

0xa36f,	// (0x0001e491) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x00023779) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x00023779) list_setting_number_pane_g

0xa5b1,	// (0x0001e6d3) list_setting_number_pane_t1_ParamLimits

0xa5b1,	// (0x0001e6d3) list_setting_number_pane_t1

0xa5c5,	// (0x0001e6e7) list_setting_number_pane_t2_ParamLimits

0xa5c5,	// (0x0001e6e7) list_setting_number_pane_t2

0xa5dc,	// (0x0001e6fe) list_setting_number_pane_t3_ParamLimits

0xa5dc,	// (0x0001e6fe) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00023785) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00023785) list_setting_number_pane_t

0xa5a5,	// (0x0001e6c7) set_value_pane_ParamLimits

0xa5a5,	// (0x0001e6c7) set_value_pane

0xc6f7,	// (0x00020819) bg_set_opt_pane_ParamLimits

0xc6f7,	// (0x00020819) bg_set_opt_pane

0xc718,	// (0x0002083a) set_value_pane_t1

0xc726,	// (0x00020848) slider_set_pane_cp3

0xa61f,	// (0x0001e741) volume_small_pane_cp

0xc72f,	// (0x00020851) list_form_gen_pane

0xc738,	// (0x0002085a) scroll_pane_cp8

0xa628,	// (0x0001e74a) form_field_data_pane_ParamLimits

0xa628,	// (0x0001e74a) form_field_data_pane

0xa63f,	// (0x0001e761) form_field_data_wide_pane_ParamLimits

0xa63f,	// (0x0001e761) form_field_data_wide_pane

0xa65f,	// (0x0001e781) form_field_popup_pane_ParamLimits

0xa65f,	// (0x0001e781) form_field_popup_pane

0xa67f,	// (0x0001e7a1) form_field_popup_wide_pane_ParamLimits

0xa67f,	// (0x0001e7a1) form_field_popup_wide_pane

0xc759,	// (0x0002087b) form_field_slider_pane_ParamLimits

0xc759,	// (0x0002087b) form_field_slider_pane

0xa696,	// (0x0001e7b8) form_field_slider_wide_pane_ParamLimits

0xa696,	// (0x0001e7b8) form_field_slider_wide_pane

0xc76c,	// (0x0002088e) data_form_pane

0xa6b3,	// (0x0001e7d5) form_field_data_pane_t1

0xc778,	// (0x0002089a) input_focus_pane

0xc786,	// (0x000208a8) data_form_wide_pane

0xc7c3,	// (0x000208e5) form_field_data_wide_pane_t1

0xc60e,	// (0x00020730) input_focus_pane_cp6

0xa6cd,	// (0x0001e7ef) form_field_popup_pane_t1

0xc778,	// (0x0002089a) input_focus_pane_cp7

0xc7e5,	// (0x00020907) list_form_pane

0xc7f9,	// (0x0002091b) form_field_popup_wide_pane_t1

0xc778,	// (0x0002089a) input_focus_pane_cp8

0xc80e,	// (0x00020930) list_form_wide_pane

0xa6ef,	// (0x0001e811) form_field_slider_pane_t1_ParamLimits

0xa6ef,	// (0x0001e811) form_field_slider_pane_t1

0xa707,	// (0x0001e829) form_field_slider_pane_t2_ParamLimits

0xa707,	// (0x0001e829) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00023795) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00023795) form_field_slider_pane_t

0xc340,	// (0x00020462) input_focus_pane_cp9_ParamLimits

0xc340,	// (0x00020462) input_focus_pane_cp9

0xa71c,	// (0x0001e83e) slider_cont_pane_ParamLimits

0xa71c,	// (0x0001e83e) slider_cont_pane

0xc81a,	// (0x0002093c) form_field_slider_wide_pane_t1_ParamLimits

0xc81a,	// (0x0002093c) form_field_slider_wide_pane_t1

0xc82c,	// (0x0002094e) form_field_slider_wide_pane_t2_ParamLimits

0xc82c,	// (0x0002094e) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x0002379a) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x0002379a) form_field_slider_wide_pane_t

0xc340,	// (0x00020462) input_focus_pane_cp10_ParamLimits

0xc340,	// (0x00020462) input_focus_pane_cp10

0xa730,	// (0x0001e852) slider_cont_pane_cp1_ParamLimits

0xa730,	// (0x0001e852) slider_cont_pane_cp1

0xa744,	// (0x0001e866) slider_form_pane_cp

0xc83e,	// (0x00020960) input_focus_pane_g1

0xc846,	// (0x00020968) input_focus_pane_g2

0xc84e,	// (0x00020970) input_focus_pane_g3

0xc856,	// (0x00020978) input_focus_pane_g4

0xc85e,	// (0x00020980) input_focus_pane_g5

0xc866,	// (0x00020988) input_focus_pane_g6

0xc86e,	// (0x00020990) input_focus_pane_g7

0xc876,	// (0x00020998) input_focus_pane_g8

0xc87e,	// (0x000209a0) input_focus_pane_g9

0xc2e8,	// (0x0002040a) input_focus_pane_g10

0x0009,

0xf67d,	// (0x0002379f) input_focus_pane_g

0x2404,	// (0x00016526) wait_border_pane_g3_copy1

0xa74c,	// (0x0001e86e) data_form_pane_t1

0xc2e8,	// (0x0002040a) wait_anim_pane_g1_copy1

0xba2c,	// (0x0001fb4e) data_form_wide_pane_t1

0xa766,	// (0x0001e888) list_form_graphic_pane_cp_ParamLimits

0xa766,	// (0x0001e888) list_form_graphic_pane_cp

0x3305,	// (0x00017427) slider_form_pane_g1

0x330e,	// (0x00017430) slider_form_pane_g2

0x0006,

0xf974,	// (0x00023a96) slider_form_pane_g

0xa778,	// (0x0001e89a) list_form_graphic_pane_ParamLimits

0xa778,	// (0x0001e89a) list_form_graphic_pane

0xa78b,	// (0x0001e8ad) list_form_graphic_pane_g1

0xa793,	// (0x0001e8b5) list_form_graphic_pane_t1_ParamLimits

0xa793,	// (0x0001e8b5) list_form_graphic_pane_t1

0xc34e,	// (0x00020470) list_highlight_pane_cp5_ParamLimits

0xc34e,	// (0x00020470) list_highlight_pane_cp5

0xa7a8,	// (0x0001e8ca) find_pane_g1

0xc886,	// (0x000209a8) input_find_pane

0xa7b1,	// (0x0001e8d3) input_find_pane_g1_ParamLimits

0xa7b1,	// (0x0001e8d3) input_find_pane_g1

0xa7bd,	// (0x0001e8df) input_find_pane_t1_ParamLimits

0xa7bd,	// (0x0001e8df) input_find_pane_t1

0xa7d2,	// (0x0001e8f4) input_find_pane_t2_ParamLimits

0xa7d2,	// (0x0001e8f4) input_find_pane_t2

0x0001,

0xf692,	// (0x000237b4) input_find_pane_t_ParamLimits

0xf692,	// (0x000237b4) input_find_pane_t

0xc88f,	// (0x000209b1) input_focus_pane_cp5_ParamLimits

0xc88f,	// (0x000209b1) input_focus_pane_cp5

0xc89d,	// (0x000209bf) bg_popup_window_pane_cp2_ParamLimits

0xc89d,	// (0x000209bf) bg_popup_window_pane_cp2

0xc8aa,	// (0x000209cc) listscroll_menu_pane_ParamLimits

0xc8aa,	// (0x000209cc) listscroll_menu_pane

0xa7f3,	// (0x0001e915) popup_submenu_window_ParamLimits

0xa7f3,	// (0x0001e915) popup_submenu_window

0xc8b6,	// (0x000209d8) find_popup_pane_g1

0xa81b,	// (0x0001e93d) input_popup_find_pane_cp

0xc88f,	// (0x000209b1) input_focus_pane_cp4_ParamLimits

0xc88f,	// (0x000209b1) input_focus_pane_cp4

0xc8be,	// (0x000209e0) input_popup_find_pane_t1_ParamLimits

0xc8be,	// (0x000209e0) input_popup_find_pane_t1

0xc2f2,	// (0x00020414) bg_popup_sub_pane_cp

0xc8ec,	// (0x00020a0e) listscroll_popup_sub_pane

0xc8f4,	// (0x00020a16) list_submenu_pane_ParamLimits

0xc8f4,	// (0x00020a16) list_submenu_pane

0xc905,	// (0x00020a27) scroll_pane_cp4

0xa833,	// (0x0001e955) list_single_popup_submenu_pane_ParamLimits

0xa833,	// (0x0001e955) list_single_popup_submenu_pane

0xa847,	// (0x0001e969) list_single_popup_submenu_pane_g1

0xa84f,	// (0x0001e971) list_single_popup_submenu_pane_t1_ParamLimits

0xa84f,	// (0x0001e971) list_single_popup_submenu_pane_t1

0xc340,	// (0x00020462) bg_active_tab_pane_cp1_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp1

0xc90d,	// (0x00020a2f) tabs_2_active_pane_g1

0xa864,	// (0x0001e986) tabs_2_active_pane_t1

0xc340,	// (0x00020462) bg_passive_tab_pane_cp1_ParamLimits

0xc340,	// (0x00020462) bg_passive_tab_pane_cp1

0xc90d,	// (0x00020a2f) tabs_2_passive_pane_g1

0xa864,	// (0x0001e986) tabs_2_passive_pane_t1

0xc34e,	// (0x00020470) bg_active_tab_pane_cp4

0xa876,	// (0x0001e998) tabs_2_long_active_pane_t1

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp4

0xea9d,	// (0x00022bbf) list_single_midp_graphic_pane_g4_ParamLimits

0xc34e,	// (0x00020470) bg_active_tab_pane_cp5

0xa889,	// (0x0001e9ab) tabs_3_long_active_pane_t1

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp5

0xea9d,	// (0x00022bbf) list_single_midp_graphic_pane_g4

0xc34e,	// (0x00020470) bg_popup_window_pane_cp13_ParamLimits

0xc34e,	// (0x00020470) bg_popup_window_pane_cp13

0xc915,	// (0x00020a37) listscroll_popup_fast_pane_ParamLimits

0xc915,	// (0x00020a37) listscroll_popup_fast_pane

0xc921,	// (0x00020a43) grid_popup_fast_pane_ParamLimits

0xc921,	// (0x00020a43) grid_popup_fast_pane

0xc933,	// (0x00020a55) scroll_pane_cp9_ParamLimits

0xc933,	// (0x00020a55) scroll_pane_cp9

0x5250,	// (0x00019372) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5250,	// (0x00019372) list_single_graphic_hl_pane_t1_cp2

0xc946,	// (0x00020a68) input_focus_pane_cp20_ParamLimits

0xc946,	// (0x00020a68) input_focus_pane_cp20

0xc954,	// (0x00020a76) query_popup_data_pane_t1_ParamLimits

0xc954,	// (0x00020a76) query_popup_data_pane_t1

0xc967,	// (0x00020a89) query_popup_data_pane_t2_ParamLimits

0xc967,	// (0x00020a89) query_popup_data_pane_t2

0xc9ad,	// (0x00020acf) query_popup_data_pane_t3_ParamLimits

0xc9ad,	// (0x00020acf) query_popup_data_pane_t3

0xe25b,	// (0x0002237d) query_popup_data_pane_t4_ParamLimits

0xe25b,	// (0x0002237d) query_popup_data_pane_t4

0xe297,	// (0x000223b9) query_popup_data_pane_t5_ParamLimits

0xe297,	// (0x000223b9) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x000237b9) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x000237b9) query_popup_data_pane_t

0xc83e,	// (0x00020960) bg_set_opt_pane_g1

0xc846,	// (0x00020968) bg_set_opt_pane_g2

0xc84e,	// (0x00020970) bg_set_opt_pane_g3

0xc856,	// (0x00020978) bg_set_opt_pane_g4

0xc85e,	// (0x00020980) bg_set_opt_pane_g5

0xc866,	// (0x00020988) bg_set_opt_pane_g6

0xc86e,	// (0x00020990) bg_set_opt_pane_g7

0xc876,	// (0x00020998) bg_set_opt_pane_g8

0xc87e,	// (0x000209a0) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x000237c4) bg_set_opt_pane_g

0xe77a,	// (0x0002289c) control_top_pane_stacon_ParamLimits

0xe77a,	// (0x0002289c) control_top_pane_stacon

0xe7cd,	// (0x000228ef) signal_pane_stacon_ParamLimits

0xe7cd,	// (0x000228ef) signal_pane_stacon

0x1117,	// (0x00015239) stacon_top_pane_g1_ParamLimits

0x1117,	// (0x00015239) stacon_top_pane_g1

0xe7f2,	// (0x00022914) title_pane_stacon_ParamLimits

0xe7f2,	// (0x00022914) title_pane_stacon

0xe81c,	// (0x0002293e) uni_indicator_pane_stacon_ParamLimits

0xe81c,	// (0x0002293e) uni_indicator_pane_stacon

0xe831,	// (0x00022953) battery_pane_stacon_ParamLimits

0xe831,	// (0x00022953) battery_pane_stacon

0xe875,	// (0x00022997) control_bottom_pane_stacon_ParamLimits

0xe875,	// (0x00022997) control_bottom_pane_stacon

0xe898,	// (0x000229ba) navi_pane_stacon_ParamLimits

0xe898,	// (0x000229ba) navi_pane_stacon

0x1139,	// (0x0001525b) stacon_bottom_pane_g1_ParamLimits

0x1139,	// (0x0001525b) stacon_bottom_pane_g1

0xe2ce,	// (0x000223f0) aid_levels_signal_lsc_ParamLimits

0xe2ce,	// (0x000223f0) aid_levels_signal_lsc

0xe2e4,	// (0x00022406) signal_pane_stacon_g1_ParamLimits

0xe2e4,	// (0x00022406) signal_pane_stacon_g1

0xe2f8,	// (0x0002241a) signal_pane_stacon_g2_ParamLimits

0xe2f8,	// (0x0002241a) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x000237d7) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x000237d7) signal_pane_stacon_g

0xe33a,	// (0x0002245c) title_pane_stacon_t1_ParamLimits

0xe33a,	// (0x0002245c) title_pane_stacon_t1

0xe35f,	// (0x00022481) uni_indicator_pane_stacon_g1

0xe369,	// (0x0002248b) uni_indicator_pane_stacon_g2

0xe373,	// (0x00022495) uni_indicator_pane_stacon_g3

0xe37d,	// (0x0002249f) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x000237e3) uni_indicator_pane_stacon_g

0xe387,	// (0x000224a9) control_top_pane_stacon_g1

0xe38f,	// (0x000224b1) control_top_pane_stacon_t1_ParamLimits

0xe38f,	// (0x000224b1) control_top_pane_stacon_t1

0xe3c6,	// (0x000224e8) aid_levels_battery_lsc_ParamLimits

0xe3c6,	// (0x000224e8) aid_levels_battery_lsc

0xe3dd,	// (0x000224ff) battery_pane_stacon_g1_ParamLimits

0xe3dd,	// (0x000224ff) battery_pane_stacon_g1

0xe3f0,	// (0x00022512) battery_pane_stacon_g2_ParamLimits

0xe3f0,	// (0x00022512) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x000237ec) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x000237ec) battery_pane_stacon_g

0xe42e,	// (0x00022550) navi_icon_pane_stacon

0xe442,	// (0x00022564) navi_navi_pane_stacon

0xe42e,	// (0x00022550) navi_text_pane_stacon

0xe387,	// (0x000224a9) control_bottom_pane_stacon_g1

0xe456,	// (0x00022578) control_bottom_pane_stacon_t1_ParamLimits

0xe456,	// (0x00022578) control_bottom_pane_stacon_t1

0xa8b5,	// (0x0001e9d7) grid_app_pane_ParamLimits

0xa8b5,	// (0x0001e9d7) grid_app_pane

0xa8ed,	// (0x0001ea0f) scroll_pane_cp15_ParamLimits

0xa8ed,	// (0x0001ea0f) scroll_pane_cp15

0xa902,	// (0x0001ea24) cell_app_pane_ParamLimits

0xa902,	// (0x0001ea24) cell_app_pane

0xa947,	// (0x0001ea69) cell_app_pane_g1_ParamLimits

0xa947,	// (0x0001ea69) cell_app_pane_g1

0xe4a7,	// (0x000225c9) cell_app_pane_g2_ParamLimits

0xe4a7,	// (0x000225c9) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x000237f1) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x000237f1) cell_app_pane_g

0xa96b,	// (0x0001ea8d) cell_app_pane_t1_ParamLimits

0xa96b,	// (0x0001ea8d) cell_app_pane_t1

0xe4b3,	// (0x000225d5) grid_highlight_pane_ParamLimits

0xe4b3,	// (0x000225d5) grid_highlight_pane

0xc83e,	// (0x00020960) cell_highlight_pane_g1

0xc846,	// (0x00020968) cell_highlight_pane_g2

0xc84e,	// (0x00020970) cell_highlight_pane_g3

0xc856,	// (0x00020978) cell_highlight_pane_g4

0xc85e,	// (0x00020980) cell_highlight_pane_g5

0xc866,	// (0x00020988) cell_highlight_pane_g6

0xc86e,	// (0x00020990) cell_highlight_pane_g7

0xc876,	// (0x00020998) cell_highlight_pane_g8

0xc87e,	// (0x000209a0) cell_highlight_pane_g9

0xc2e8,	// (0x0002040a) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x0002379f) cell_highlight_pane_g

0xe4ce,	// (0x000225f0) bg_scroll_pane

0x8a82,	// (0x0001cba4) scroll_handle_pane

0xe52a,	// (0x0002264c) scroll_bg_pane_g1

0xe53f,	// (0x00022661) scroll_bg_pane_g2

0xe557,	// (0x00022679) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x000237f6) scroll_bg_pane_g

0xa982,	// (0x0001eaa4) scroll_handle_focus_pane_ParamLimits

0xa982,	// (0x0001eaa4) scroll_handle_focus_pane

0xe52a,	// (0x0002264c) scroll_handle_pane_g1

0xe56c,	// (0x0002268e) scroll_handle_pane_g2

0xe557,	// (0x00022679) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x000237fd) scroll_handle_pane_g

0xc88f,	// (0x000209b1) bg_popup_sub_pane_cp21_ParamLimits

0xc88f,	// (0x000209b1) bg_popup_sub_pane_cp21

0xa98f,	// (0x0001eab1) popup_fep_japan_predictive_window_t1_ParamLimits

0xa98f,	// (0x0001eab1) popup_fep_japan_predictive_window_t1

0xa9a6,	// (0x0001eac8) popup_fep_japan_predictive_window_t2_ParamLimits

0xa9a6,	// (0x0001eac8) popup_fep_japan_predictive_window_t2

0xa9d9,	// (0x0001eafb) popup_fep_japan_predictive_window_t3_ParamLimits

0xa9d9,	// (0x0001eafb) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00023804) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00023804) popup_fep_japan_predictive_window_t

0xc2f2,	// (0x00020414) bg_popup_sub_pane_cp23

0xaa10,	// (0x0001eb32) listscroll_japin_cand_pane

0xe580,	// (0x000226a2) popup_fep_japan_candidate_window_t1

0xe58e,	// (0x000226b0) candidate_pane_ParamLimits

0xe58e,	// (0x000226b0) candidate_pane

0xaa18,	// (0x0001eb3a) scroll_pane_cp30

0xe5a0,	// (0x000226c2) list_single_popup_jap_candidate_pane_ParamLimits

0xe5a0,	// (0x000226c2) list_single_popup_jap_candidate_pane

0xc2f2,	// (0x00020414) list_highlight_pane_cp30

0xe5b5,	// (0x000226d7) list_single_popup_jap_candidate_pane_t1

0xe5c4,	// (0x000226e6) level_1_signal

0xe5d1,	// (0x000226f3) level_2_signal

0xe5de,	// (0x00022700) level_3_signal

0xe5eb,	// (0x0002270d) level_4_signal

0xe5f8,	// (0x0002271a) level_5_signal

0xe605,	// (0x00022727) level_6_signal

0xe612,	// (0x00022734) level_7_signal

0xe5c4,	// (0x000226e6) level_1_battery

0xe5d1,	// (0x000226f3) level_2_battery

0xe5de,	// (0x00022700) level_3_battery

0xe5eb,	// (0x0002270d) level_4_battery

0xe5f8,	// (0x0002271a) level_5_battery

0xe605,	// (0x00022727) level_6_battery

0xe612,	// (0x00022734) level_7_battery

0xe656,	// (0x00022778) list_menu_pane_ParamLimits

0xe656,	// (0x00022778) list_menu_pane

0xe66c,	// (0x0002278e) scroll_pane_cp25_ParamLimits

0xe66c,	// (0x0002278e) scroll_pane_cp25

0xaa20,	// (0x0001eb42) list_double2_graphic_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double2_graphic_pane_cp2

0xaa20,	// (0x0001eb42) list_double2_large_graphic_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double2_large_graphic_pane_cp2

0xaa20,	// (0x0001eb42) list_double2_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double2_pane_cp2

0xaa20,	// (0x0001eb42) list_double_graphic_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double_graphic_pane_cp2

0xaa20,	// (0x0001eb42) list_double_large_graphic_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double_large_graphic_pane_cp2

0xaa20,	// (0x0001eb42) list_double_number_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double_number_pane_cp2

0xaa20,	// (0x0001eb42) list_double_pane_cp2_ParamLimits

0xaa20,	// (0x0001eb42) list_double_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_2graphic_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_2graphic_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_graphic_heading_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_graphic_heading_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_graphic_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_graphic_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_heading_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_heading_pane_cp2

0xe695,	// (0x000227b7) list_single_large_graphic_pane_cp2_ParamLimits

0xe695,	// (0x000227b7) list_single_large_graphic_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_number_heading_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_number_heading_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_number_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_number_pane_cp2

0xaa2f,	// (0x0001eb51) list_single_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_pane_cp2

0xe70a,	// (0x0002282c) bg_popup_sub_pane_cp22

0xe720,	// (0x00022842) popup_side_volume_key_window_g1

0xe72c,	// (0x0002284e) popup_side_volume_key_window_t1

0x8ad1,	// (0x0001cbf3) volume_small_pane_cp1

0xc340,	// (0x00020462) bg_popup_sub_pane_cp24_ParamLimits

0xc340,	// (0x00020462) bg_popup_sub_pane_cp24

0xe73a,	// (0x0002285c) fep_china_uni_candidate_pane_ParamLimits

0xe73a,	// (0x0002285c) fep_china_uni_candidate_pane

0xe74e,	// (0x00022870) fep_china_uni_entry_pane

0xe75e,	// (0x00022880) popup_fep_china_uni_window_g1

0xaabc,	// (0x0001ebde) fep_china_uni_entry_pane_g1

0xaac4,	// (0x0001ebe6) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00023835) fep_china_uni_entry_pane_g

0x0f42,	// (0x00015064) fep_entry_item_pane

0x0f4c,	// (0x0001506e) fep_candidate_item_pane

0xaacc,	// (0x0001ebee) fep_china_uni_candidate_pane_g1

0x0f5c,	// (0x0001507e) fep_china_uni_candidate_pane_g2

0x0f64,	// (0x00015086) fep_china_uni_candidate_pane_g3

0xaad4,	// (0x0001ebf6) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x0002383a) fep_china_uni_candidate_pane_g

0xc2e8,	// (0x0002040a) fep_entry_item_pane_g1

0x0f74,	// (0x00015096) fep_entry_item_pane_t1_ParamLimits

0x0f74,	// (0x00015096) fep_entry_item_pane_t1

0x0f8a,	// (0x000150ac) fep_candidate_item_pane_t1_ParamLimits

0x0f8a,	// (0x000150ac) fep_candidate_item_pane_t1

0x0f9f,	// (0x000150c1) fep_candidate_item_pane_t2_ParamLimits

0x0f9f,	// (0x000150c1) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00023843) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00023843) fep_candidate_item_pane_t

0xc34e,	// (0x00020470) list_highlight_pane_cp31_ParamLimits

0xc34e,	// (0x00020470) list_highlight_pane_cp31

0x0fb1,	// (0x000150d3) level_1_signal_lsc

0x0fba,	// (0x000150dc) level_2_signal_lsc

0x0fc3,	// (0x000150e5) level_3_signal_lsc

0x0fcc,	// (0x000150ee) level_4_signal_lsc

0x0fd5,	// (0x000150f7) level_5_signal_lsc

0x0fde,	// (0x00015100) level_6_signal_lsc

0x0fe7,	// (0x00015109) level_7_signal_lsc

0x0fe7,	// (0x00015109) level_1_battery_lsc

0x0ff0,	// (0x00015112) level_2_battery_lsc

0x0ff9,	// (0x0001511b) level_3_battery_lsc

0x1002,	// (0x00015124) level_4_battery_lsc

0x100b,	// (0x0001512d) level_5_battery_lsc

0x1014,	// (0x00015136) level_6_battery_lsc

0x0fb1,	// (0x000150d3) level_7_battery_lsc

0x101d,	// (0x0001513f) scroll_handle_focus_pane_g1

0x1026,	// (0x00015148) scroll_handle_focus_pane_g2

0x102f,	// (0x00015151) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00023848) scroll_handle_focus_pane_g

0xaadc,	// (0x0001ebfe) list_single_2graphic_pane_g1_ParamLimits

0xaadc,	// (0x0001ebfe) list_single_2graphic_pane_g1

0xa2f3,	// (0x0001e415) list_single_2graphic_pane_g2_ParamLimits

0xa2f3,	// (0x0001e415) list_single_2graphic_pane_g2

0xc6d6,	// (0x000207f8) list_single_2graphic_pane_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_single_2graphic_pane_g3

0xaae8,	// (0x0001ec0a) list_single_2graphic_pane_g4_ParamLimits

0xaae8,	// (0x0001ec0a) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x0002384f) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x0002384f) list_single_2graphic_pane_g

0xaaf4,	// (0x0001ec16) list_single_2graphic_pane_t1_ParamLimits

0xaaf4,	// (0x0001ec16) list_single_2graphic_pane_t1

0xab22,	// (0x0001ec44) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xab22,	// (0x0001ec44) list_double2_graphic_large_graphic_pane_g1

0xa35e,	// (0x0001e480) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa35e,	// (0x0001e480) list_double2_graphic_large_graphic_pane_g2

0xa36f,	// (0x0001e491) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa36f,	// (0x0001e491) list_double2_graphic_large_graphic_pane_g3

0xab34,	// (0x0001ec56) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xab34,	// (0x0001ec56) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00023858) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00023858) list_double2_graphic_large_graphic_pane_g

0xab40,	// (0x0001ec62) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xab40,	// (0x0001ec62) list_double2_graphic_large_graphic_pane_t1

0xab56,	// (0x0001ec78) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xab56,	// (0x0001ec78) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00023861) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00023861) list_double2_graphic_large_graphic_pane_t

0xabdb,	// (0x0001ecfd) popup_fast_swap_window_ParamLimits

0xabdb,	// (0x0001ecfd) popup_fast_swap_window

0xabf7,	// (0x0001ed19) popup_side_volume_key_window

0x1236,	// (0x00015358) stacon_top_pane

0x1240,	// (0x00015362) status_pane_ParamLimits

0x1240,	// (0x00015362) status_pane

0xac11,	// (0x0001ed33) status_small_pane

0xc2f2,	// (0x00020414) control_pane

0xc2f2,	// (0x00020414) stacon_bottom_pane

0xc738,	// (0x0002085a) scroll_pane_cp121

0xc72f,	// (0x00020851) set_content_pane

0xab68,	// (0x0001ec8a) bg_active_tab_pane_g1_cp1

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp1

0xab7a,	// (0x0001ec9c) bg_active_tab_pane_g3_cp1

0xab68,	// (0x0001ec8a) bg_passive_tab_pane_g1_cp1

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp1

0xab7a,	// (0x0001ec9c) bg_passive_tab_pane_g3_cp1

0xab83,	// (0x0001eca5) bg_active_tab_pane_g1_cp2

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp2

0xab8c,	// (0x0001ecae) bg_active_tab_pane_g3_cp2

0xab83,	// (0x0001eca5) bg_passive_tab_pane_g1_cp2

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp2

0xab8c,	// (0x0001ecae) bg_passive_tab_pane_g3_cp2

0xab95,	// (0x0001ecb7) bg_active_tab_pane_g1_cp3

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp3

0xab9e,	// (0x0001ecc0) bg_active_tab_pane_g3_cp3

0xab95,	// (0x0001ecb7) bg_passive_tab_pane_g1_cp3

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp3

0xab9e,	// (0x0001ecc0) bg_passive_tab_pane_g3_cp3

0xaba7,	// (0x0001ecc9) bg_active_tab_pane_g1_cp4

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp4

0xabb2,	// (0x0001ecd4) bg_active_tab_pane_g3_cp4

0xaba7,	// (0x0001ecc9) bg_passive_tab_pane_g1_cp4

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp4

0xabb2,	// (0x0001ecd4) bg_passive_tab_pane_g3_cp4

0xabbd,	// (0x0001ecdf) bg_active_tab_pane_g1_cp5

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp5

0xabc6,	// (0x0001ece8) bg_active_tab_pane_g3_cp5

0xabbd,	// (0x0001ecdf) bg_passive_tab_pane_g1_cp5

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp5

0xabc6,	// (0x0001ece8) bg_passive_tab_pane_g3_cp5

0x3a0d,	// (0x00017b2f) list_set_graphic_pane_ParamLimits

0x3a0d,	// (0x00017b2f) list_set_graphic_pane

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp4

0x1185,	// (0x000152a7) list_set_graphic_pane_g1_ParamLimits

0x1185,	// (0x000152a7) list_set_graphic_pane_g1

0x1191,	// (0x000152b3) list_set_graphic_pane_g2_ParamLimits

0x1191,	// (0x000152b3) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00023866) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00023866) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00023beb) volume_small_pane_cp_g

0xabcf,	// (0x0001ecf1) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xabcf,	// (0x0001ecf1) list_double2_large_graphic_pane_g1_cp2

0x11bf,	// (0x000152e1) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x11bf,	// (0x000152e1) list_double2_large_graphic_pane_g2_cp2

0x11d0,	// (0x000152f2) list_double2_large_graphic_pane_g3_cp2

0x11d8,	// (0x000152fa) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x11d8,	// (0x000152fa) list_double2_large_graphic_pane_t1_cp2

0x11ee,	// (0x00015310) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x11ee,	// (0x00015310) list_double2_large_graphic_pane_t2_cp2

0xb77b,	// (0x0001f89d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb77b,	// (0x0001f89d) list_double_large_graphic_pane_g1_cp2

0x2ec6,	// (0x00016fe8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2ec6,	// (0x00016fe8) list_double_large_graphic_pane_g2_cp2

0x135b,	// (0x0001547d) list_double_large_graphic_pane_g3_cp2

0x2ed7,	// (0x00016ff9) list_double_large_graphic_pane_g4_cp

0x2edf,	// (0x00017001) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2edf,	// (0x00017001) list_double_large_graphic_pane_t1_cp2

0x2ef6,	// (0x00017018) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2ef6,	// (0x00017018) list_double_large_graphic_pane_t2_cp2

0x1259,	// (0x0001537b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1259,	// (0x0001537b) list_double2_graphic_pane_g1_cp2

0x1267,	// (0x00015389) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1267,	// (0x00015389) list_double2_graphic_pane_g2_cp2

0x1278,	// (0x0001539a) list_double2_graphic_pane_g3_cp2

0x1282,	// (0x000153a4) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1282,	// (0x000153a4) list_double2_graphic_pane_t1_cp2

0x1298,	// (0x000153ba) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1298,	// (0x000153ba) list_double2_graphic_pane_t2_cp2

0xc9ee,	// (0x00020b10) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc9ee,	// (0x00020b10) list_single_number_heading_pane_g1_cp2

0x12aa,	// (0x000153cc) list_single_number_heading_pane_g2_cp2

0x12b2,	// (0x000153d4) list_single_number_heading_pane_t1_cp2_ParamLimits

0x12b2,	// (0x000153d4) list_single_number_heading_pane_t1_cp2

0x12c8,	// (0x000153ea) list_single_number_heading_pane_t2_cp2_ParamLimits

0x12c8,	// (0x000153ea) list_single_number_heading_pane_t2_cp2

0x12da,	// (0x000153fc) list_single_number_heading_pane_t3_cp2_ParamLimits

0x12da,	// (0x000153fc) list_single_number_heading_pane_t3_cp2

0xc9ee,	// (0x00020b10) list_single_heading_pane_g1_cp2_ParamLimits

0xc9ee,	// (0x00020b10) list_single_heading_pane_g1_cp2

0x12aa,	// (0x000153cc) list_single_heading_pane_g2_cp2

0x12b2,	// (0x000153d4) list_single_heading_pane_t1_cp2_ParamLimits

0x12b2,	// (0x000153d4) list_single_heading_pane_t1_cp2

0x2cbf,	// (0x00016de1) list_single_heading_pane_t2_cp2_ParamLimits

0x2cbf,	// (0x00016de1) list_single_heading_pane_t2_cp2

0x2c07,	// (0x00016d29) list_double_graphic_pane_g1_cp2_ParamLimits

0x2c07,	// (0x00016d29) list_double_graphic_pane_g1_cp2

0x2c13,	// (0x00016d35) list_double_graphic_pane_g2_cp2_ParamLimits

0x2c13,	// (0x00016d35) list_double_graphic_pane_g2_cp2

0x2c22,	// (0x00016d44) list_double_graphic_pane_g3_cp2

0x2c2a,	// (0x00016d4c) list_double_graphic_pane_t1_cp2_ParamLimits

0x2c2a,	// (0x00016d4c) list_double_graphic_pane_t1_cp2

0x2c40,	// (0x00016d62) list_double_graphic_pane_t2_cp2_ParamLimits

0x2c40,	// (0x00016d62) list_double_graphic_pane_t2_cp2

0x134f,	// (0x00015471) list_double_number_pane_g1_cp2_ParamLimits

0x134f,	// (0x00015471) list_double_number_pane_g1_cp2

0x135b,	// (0x0001547d) list_double_number_pane_g2_cp2

0x2bcb,	// (0x00016ced) list_double_number_pane_t1_cp2_ParamLimits

0x2bcb,	// (0x00016ced) list_double_number_pane_t1_cp2

0x2bdf,	// (0x00016d01) list_double_number_pane_t2_cp2_ParamLimits

0x2bdf,	// (0x00016d01) list_double_number_pane_t2_cp2

0x2bf5,	// (0x00016d17) list_double_number_pane_t3_cp2_ParamLimits

0x2bf5,	// (0x00016d17) list_double_number_pane_t3_cp2

0x2ab4,	// (0x00016bd6) list_single_graphic_pane_g1_cp2_ParamLimits

0x2ab4,	// (0x00016bd6) list_single_graphic_pane_g1_cp2

0x13b3,	// (0x000154d5) list_single_graphic_pane_g2_cp2_ParamLimits

0x13b3,	// (0x000154d5) list_single_graphic_pane_g2_cp2

0x13bf,	// (0x000154e1) list_single_graphic_pane_g3_cp2

0x2a8a,	// (0x00016bac) list_single_graphic_pane_t1_cp2_ParamLimits

0x2a8a,	// (0x00016bac) list_single_graphic_pane_t1_cp2

0x13b3,	// (0x000154d5) list_single_number_pane_g1_cp2_ParamLimits

0x13b3,	// (0x000154d5) list_single_number_pane_g1_cp2

0x13bf,	// (0x000154e1) list_single_number_pane_g2_cp2

0x2a8a,	// (0x00016bac) list_single_number_pane_t1_cp2_ParamLimits

0x2a8a,	// (0x00016bac) list_single_number_pane_t1_cp2

0x2aa0,	// (0x00016bc2) list_single_number_pane_t2_cp2_ParamLimits

0x2aa0,	// (0x00016bc2) list_single_number_pane_t2_cp2

0x11bf,	// (0x000152e1) list_double2_pane_g1_cp2_ParamLimits

0x11bf,	// (0x000152e1) list_double2_pane_g1_cp2

0x11d0,	// (0x000152f2) list_double2_pane_g2_cp2

0x1327,	// (0x00015449) list_double2_pane_t1_cp2_ParamLimits

0x1327,	// (0x00015449) list_double2_pane_t1_cp2

0x133d,	// (0x0001545f) list_double2_pane_t2_cp2_ParamLimits

0x133d,	// (0x0001545f) list_double2_pane_t2_cp2

0x134f,	// (0x00015471) list_double_pane_g1_cp2_ParamLimits

0x134f,	// (0x00015471) list_double_pane_g1_cp2

0x135b,	// (0x0001547d) list_double_pane_g2_cp2

0x1363,	// (0x00015485) list_double_pane_t1_cp2_ParamLimits

0x1363,	// (0x00015485) list_double_pane_t1_cp2

0x1379,	// (0x0001549b) list_double_pane_t2_cp2_ParamLimits

0x1379,	// (0x0001549b) list_double_pane_t2_cp2

0xac1c,	// (0x0001ed3e) list_single_pane_cp2_g3

0x13b3,	// (0x000154d5) list_single_pane_g1_cp2_ParamLimits

0x13b3,	// (0x000154d5) list_single_pane_g1_cp2

0x13bf,	// (0x000154e1) list_single_pane_g2_cp2

0x13c7,	// (0x000154e9) list_single_pane_t1_cp2_ParamLimits

0x13c7,	// (0x000154e9) list_single_pane_t1_cp2

0xac24,	// (0x0001ed46) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xac24,	// (0x0001ed46) list_single_large_graphic_pane_g1_cp2

0x13eb,	// (0x0001550d) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x13eb,	// (0x0001550d) list_single_large_graphic_pane_g2_cp2

0x13f7,	// (0x00015519) list_single_large_graphic_pane_g3_cp2

0xac30,	// (0x0001ed52) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xac30,	// (0x0001ed52) list_single_large_graphic_pane_g4_cp1

0x1419,	// (0x0001553b) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1419,	// (0x0001553b) list_single_large_graphic_pane_t1_cp2

0x2a56,	// (0x00016b78) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2a56,	// (0x00016b78) list_single_graphic_heading_pane_g1_cp2

0x2a23,	// (0x00016b45) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2a23,	// (0x00016b45) list_single_graphic_heading_pane_g4_cp2

0x13bf,	// (0x000154e1) list_single_graphic_heading_pane_g5_cp2

0x2a62,	// (0x00016b84) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2a62,	// (0x00016b84) list_single_graphic_heading_pane_t1_cp2

0x2a78,	// (0x00016b9a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2a78,	// (0x00016b9a) list_single_graphic_heading_pane_t2_cp2

0x2a17,	// (0x00016b39) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2a17,	// (0x00016b39) list_single_2graphic_pane_g1_cp2

0x2a23,	// (0x00016b45) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2a23,	// (0x00016b45) list_single_2graphic_pane_g2_cp2

0x13bf,	// (0x000154e1) list_single_2graphic_pane_g3_cp2

0x2a34,	// (0x00016b56) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2a34,	// (0x00016b56) list_single_2graphic_pane_g4_cp2

0x2a40,	// (0x00016b62) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2a40,	// (0x00016b62) list_single_2graphic_pane_t1_cp2

0xc2e8,	// (0x0002040a) list_highlight_pane_g10_cp1

0x25ff,	// (0x00016721) list_highlight_pane_g1_cp1

0x2607,	// (0x00016729) list_highlight_pane_g2_cp1

0x260f,	// (0x00016731) list_highlight_pane_g3_cp1

0x2617,	// (0x00016739) list_highlight_pane_g4_cp1

0x261f,	// (0x00016741) list_highlight_pane_g5_cp1

0x2627,	// (0x00016749) list_highlight_pane_g6_cp1

0x262f,	// (0x00016751) list_highlight_pane_g7_cp1

0x2637,	// (0x00016759) list_highlight_pane_g8_cp1

0x263f,	// (0x00016761) list_highlight_pane_g9_cp1

0xb510,	// (0x0001f632) form_field_slider_pane_t3

0xb51e,	// (0x0001f640) form_field_slider_pane_t4

0x2543,	// (0x00016665) slider_form_pane_ParamLimits

0x2543,	// (0x00016665) slider_form_pane

0xc2f2,	// (0x00020414) control_abbreviations

0xc2f2,	// (0x00020414) control_conventions

0xc2f2,	// (0x00020414) control_definitions

0xc2f2,	// (0x00020414) format_table_attribute

0xb752,	// (0x0001f874) bg_popup_preview_window_pane_g9

0xc2f2,	// (0x00020414) format_table_data2

0xc2f2,	// (0x00020414) format_table_data3

0xc2f2,	// (0x00020414) format_table_data_example

0x0008,

0xc2f2,	// (0x00020414) intro_purpose

0xf8d4,	// (0x000239f6) bg_popup_preview_window_pane_g

0xc2f2,	// (0x00020414) texts_category

0xc2f2,	// (0x00020414) texts_graphics

0x142f,	// (0x00015551) text_digital

0x143e,	// (0x00015560) text_primary

0x144d,	// (0x0001556f) text_primary_small

0x145c,	// (0x0001557e) text_secondary

0x146b,	// (0x0001558d) text_title

0xbb20,	// (0x0001fc42) bg_passive_tab_pane_g1_cp3_srt

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp3_srt

0xbb29,	// (0x0001fc4b) bg_passive_tab_pane_g3_cp3_srt

0xc340,	// (0x00020462) bg_active_tab_pane_cp3_srt_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp3_srt

0xbb32,	// (0x0001fc54) tabs_4_active_pane_srt_g1

0xbb3a,	// (0x0001fc5c) tabs_4_active_pane_srt_t1_ParamLimits

0xbb3a,	// (0x0001fc5c) tabs_4_active_pane_srt_t1

0xbb20,	// (0x0001fc42) bg_active_tab_pane_g1_cp3_copy1

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp3_copy1

0xbb29,	// (0x0001fc4b) bg_active_tab_pane_g3_cp3_copy1

0xc34e,	// (0x00020470) tabs_2_long_active_pane_srt_ParamLimits

0xc34e,	// (0x00020470) tabs_2_long_active_pane_srt

0xc34e,	// (0x00020470) tabs_2_long_passive_pane_srt_ParamLimits

0xc34e,	// (0x00020470) tabs_2_long_passive_pane_srt

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp4_srt_ParamLimits

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp4_srt

0xb87c,	// (0x0001f99e) bg_passive_tab_pane_g1_cp4_srt

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp4_srt

0xb885,	// (0x0001f9a7) bg_passive_tab_pane_g3_cp4_srt

0xc34e,	// (0x00020470) bg_active_tab_pane_cp4_srt_ParamLimits

0xc34e,	// (0x00020470) bg_active_tab_pane_cp4_srt

0xb88e,	// (0x0001f9b0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb88e,	// (0x0001f9b0) tabs_2_long_active_pane_srt_t1

0xb87c,	// (0x0001f99e) bg_active_tab_pane_g1_cp4_srt

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp4_srt

0xb885,	// (0x0001f9a7) bg_active_tab_pane_g3_cp4_srt

0xc340,	// (0x00020462) tabs_3_long_active_pane_srt_ParamLimits

0xc340,	// (0x00020462) tabs_3_long_active_pane_srt

0xc340,	// (0x00020462) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc340,	// (0x00020462) tabs_3_long_passive_pane_cp_srt

0xc340,	// (0x00020462) tabs_3_long_passive_pane_srt_ParamLimits

0xc340,	// (0x00020462) tabs_3_long_passive_pane_srt

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp5_srt_ParamLimits

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp5_srt

0xabbd,	// (0x0001ecdf) bg_passive_tab_pane_g1_cp5_srt

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp5_srt

0xabc6,	// (0x0001ece8) bg_passive_tab_pane_g3_cp5_srt

0xc34e,	// (0x00020470) bg_active_tab_pane_cp5_srt_ParamLimits

0xc34e,	// (0x00020470) bg_active_tab_pane_cp5_srt

0xb866,	// (0x0001f988) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb866,	// (0x0001f988) tabs_3_long_active_pane_srt_t1

0xabbd,	// (0x0001ecdf) bg_active_tab_pane_g1_cp5_srt

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp5_srt

0xabc6,	// (0x0001ece8) bg_active_tab_pane_g3_cp5_srt

0x311c,	// (0x0001723e) navi_text_pane_srt_t1

0x3114,	// (0x00017236) navi_icon_pane_srt_g1

0x163c,	// (0x0001575e) midp_editing_number_pane_srt

0x147a,	// (0x0001559c) midp_ticker_pane_srt

0x1644,	// (0x00015766) midp_ticker_pane_srt_g1

0x164c,	// (0x0001576e) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00023885) midp_ticker_pane_srt_g

0x1654,	// (0x00015776) midp_ticker_pane_srt_t1

0x3105,	// (0x00017227) midp_editing_number_pane_t1_copy1

0xac4a,	// (0x0001ed6c) listscroll_midp_pane

0xac4a,	// (0x0001ed6c) midp_form_pane

0xacb5,	// (0x0001edd7) midp_info_popup_window_ParamLimits

0xacb5,	// (0x0001edd7) midp_info_popup_window

0xc88f,	// (0x000209b1) bg_popup_sub_pane_cp50_ParamLimits

0xc88f,	// (0x000209b1) bg_popup_sub_pane_cp50

0x2247,	// (0x00016369) listscroll_midp_info_pane_ParamLimits

0x2247,	// (0x00016369) listscroll_midp_info_pane

0x2227,	// (0x00016349) listscroll_form_midp_pane_ParamLimits

0x2227,	// (0x00016349) listscroll_form_midp_pane

0x2233,	// (0x00016355) scroll_bar_cp050

0x2227,	// (0x00016349) list_midp_pane

0xbcce,	// (0x0001fdf0) signal_pane_g2_cp

0x2141,	// (0x00016263) listscroll_midp_info_pane_t1_ParamLimits

0x2141,	// (0x00016263) listscroll_midp_info_pane_t1

0xb34a,	// (0x0001f46c) listscroll_midp_info_pane_t2_ParamLimits

0xb34a,	// (0x0001f46c) listscroll_midp_info_pane_t2

0xb388,	// (0x0001f4aa) listscroll_midp_info_pane_t3_ParamLimits

0xb388,	// (0x0001f4aa) listscroll_midp_info_pane_t3

0xb3c2,	// (0x0001f4e4) listscroll_midp_info_pane_t4_ParamLimits

0xb3c2,	// (0x0001f4e4) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00023931) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00023931) listscroll_midp_info_pane_t

0xc905,	// (0x00020a27) scroll_pane_cp21

0x20e1,	// (0x00016203) form_midp_field_choice_group_pane

0xb30d,	// (0x0001f42f) form_midp_field_text_pane

0x2127,	// (0x00016249) form_midp_field_time_pane

0x212f,	// (0x00016251) form_midp_gauge_slider_pane

0x2138,	// (0x0001625a) form_midp_gauge_wait_pane

0xc2f2,	// (0x00020414) form_midp_image_pane

0xb2f6,	// (0x0001f418) list_single_midp_pane_ParamLimits

0xb2f6,	// (0x0001f418) list_single_midp_pane

0xb2d4,	// (0x0001f3f6) form_midp_field_text_pane_t1

0x1e1f,	// (0x00015f41) input_focus_pane_cp050

0x209e,	// (0x000161c0) list_midp_form_text_pane

0x2033,	// (0x00016155) form_midp_field_choice_group_pane_t1

0x2041,	// (0x00016163) input_focus_pane_cp051

0x2055,	// (0x00016177) list_midp_choice_pane

0xc2f2,	// (0x00020414) status_idle_pane

0x2017,	// (0x00016139) form_midp_field_time_pane_t1

0xc2e8,	// (0x0002040a) wait_anim_pane_g2_copy1

0x2025,	// (0x00016147) form_midp_field_time_pane_t2

0x0001,

0x15a4,	// (0x000156c6) aid_navinavi_width_2_pane

0xf80a,	// (0x0002392c) form_midp_field_time_pane_t

0xc2f2,	// (0x00020414) input_focus_pane_cp052

0xc2f2,	// (0x00020414) bg_input_focus_pane_cp040

0x1fd7,	// (0x000160f9) form_midp_gauge_slider_pane_t1

0x1fe5,	// (0x00016107) form_midp_gauge_slider_pane_t2

0xb2b8,	// (0x0001f3da) form_midp_gauge_slider_pane_t3

0xb2c6,	// (0x0001f3e8) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00023923) form_midp_gauge_slider_pane_t

0x200f,	// (0x00016131) form_midp_slider_pane

0xc34e,	// (0x00020470) bg_input_focus_pane_cp041_ParamLimits

0xc34e,	// (0x00020470) bg_input_focus_pane_cp041

0x1fa4,	// (0x000160c6) form_midp_gauge_wait_pane_t1_ParamLimits

0x1fa4,	// (0x000160c6) form_midp_gauge_wait_pane_t1

0x1fb6,	// (0x000160d8) form_midp_gauge_wait_pane_t2_ParamLimits

0x1fb6,	// (0x000160d8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x0002391e) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x0002391e) form_midp_gauge_wait_pane_t

0x1fc8,	// (0x000160ea) form_midp_wait_pane_ParamLimits

0x1fc8,	// (0x000160ea) form_midp_wait_pane

0xb282,	// (0x0001f3a4) form_midp_image_pane_g1

0xb28b,	// (0x0001f3ad) form_midp_image_pane_t1

0xb29a,	// (0x0001f3bc) form_midp_image_pane_t2

0xb2a9,	// (0x0001f3cb) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00023917) form_midp_image_pane_t

0x1f56,	// (0x00016078) list_single_midp_pane_g1

0x1f5f,	// (0x00016081) list_single_midp_pane_t1

0xb26d,	// (0x0001f38f) list_midp_form_item_pane_ParamLimits

0xb26d,	// (0x0001f38f) list_midp_form_item_pane

0x154c,	// (0x0001566e) list_midp_form_item_pane_t1

0x155b,	// (0x0001567d) midp_ticker_pane_g1

0x1567,	// (0x00015689) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x0002386b) midp_ticker_pane_g

0x1573,	// (0x00015695) midp_ticker_pane_t1

0x3385,	// (0x000174a7) midp_editing_number_pane_t1

0x3363,	// (0x00017485) midp_editing_number_pane

0x3372,	// (0x00017494) midp_ticker_pane

0x30e3,	// (0x00017205) ai_message_heading_pane

0xc2f2,	// (0x00020414) bg_popup_window_pane_cp14

0x30eb,	// (0x0001720d) listscroll_ai_message_pane

0x306d,	// (0x0001718f) ai_message_heading_pane_g1_ParamLimits

0x306d,	// (0x0001718f) ai_message_heading_pane_g1

0xb81c,	// (0x0001f93e) ai_message_heading_pane_g2_ParamLimits

0xb81c,	// (0x0001f93e) ai_message_heading_pane_g2

0x3085,	// (0x000171a7) ai_message_heading_pane_g3_ParamLimits

0x3085,	// (0x000171a7) ai_message_heading_pane_g3

0x3091,	// (0x000171b3) ai_message_heading_pane_g4_ParamLimits

0x3091,	// (0x000171b3) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x00023a58) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x00023a58) ai_message_heading_pane_g

0xb828,	// (0x0001f94a) ai_message_heading_pane_t1_ParamLimits

0xb828,	// (0x0001f94a) ai_message_heading_pane_t1

0xb842,	// (0x0001f964) ai_message_heading_pane_t2_ParamLimits

0xb842,	// (0x0001f964) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x00023a61) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x00023a61) ai_message_heading_pane_t

0x30c9,	// (0x000171eb) bg_popup_heading_pane_cp1_ParamLimits

0x30c9,	// (0x000171eb) bg_popup_heading_pane_cp1

0x305b,	// (0x0001717d) list_ai_message_pane_ParamLimits

0x305b,	// (0x0001717d) list_ai_message_pane

0xc905,	// (0x00020a27) scroll_pane_cp10

0x2ff7,	// (0x00017119) list_ai_message_pane_g1

0x2fff,	// (0x00017121) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x00023a35) list_ai_message_pane_g

0x3007,	// (0x00017129) list_ai_message_pane_t1_ParamLimits

0x3007,	// (0x00017129) list_ai_message_pane_t1

0x301c,	// (0x0001713e) list_ai_message_pane_t2_ParamLimits

0x301c,	// (0x0001713e) list_ai_message_pane_t2

0x3031,	// (0x00017153) list_ai_message_pane_t3_ParamLimits

0x3031,	// (0x00017153) list_ai_message_pane_t3

0x3046,	// (0x00017168) list_ai_message_pane_t4_ParamLimits

0x3046,	// (0x00017168) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x00023a3a) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x00023a3a) list_ai_message_pane_t

0xb7f8,	// (0x0001f91a) cell_ai_soft_ind_pane_ParamLimits

0xb7f8,	// (0x0001f91a) cell_ai_soft_ind_pane

0x1585,	// (0x000156a7) cell_ai_soft_ind_pane_g1_ParamLimits

0x1585,	// (0x000156a7) cell_ai_soft_ind_pane_g1

0xc2f2,	// (0x00020414) grid_highlight_cp1

0x1592,	// (0x000156b4) text_secondary_cp56_ParamLimits

0x1592,	// (0x000156b4) text_secondary_cp56

0x2fb7,	// (0x000170d9) example_general_pane_ParamLimits

0x2fb7,	// (0x000170d9) example_general_pane

0x2fc3,	// (0x000170e5) example_parent_pane_g1_ParamLimits

0x2fc3,	// (0x000170e5) example_parent_pane_g1

0x2fcf,	// (0x000170f1) example_parent_pane_t1_ParamLimits

0x2fcf,	// (0x000170f1) example_parent_pane_t1

0x90b0,	// (0x0001d1d2) popup_preview_text_window_ParamLimits

0x90b0,	// (0x0001d1d2) popup_preview_text_window

0x13ab,	// (0x000154cd) list_single_pane_cp2_g4

0xc53a,	// (0x0002065c) bg_popup_preview_window_pane_ParamLimits

0xc53a,	// (0x0002065c) bg_popup_preview_window_pane

0xb75a,	// (0x0001f87c) popup_preview_text_window_t1_ParamLimits

0xb75a,	// (0x0001f87c) popup_preview_text_window_t1

0x2d2f,	// (0x00016e51) popup_preview_text_window_t2_ParamLimits

0x2d2f,	// (0x00016e51) popup_preview_text_window_t2

0x2d78,	// (0x00016e9a) popup_preview_text_window_t3_ParamLimits

0x2d78,	// (0x00016e9a) popup_preview_text_window_t3

0x2dbd,	// (0x00016edf) popup_preview_text_window_t4_ParamLimits

0x2dbd,	// (0x00016edf) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00023a09) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00023a09) popup_preview_text_window_t

0x2e3b,	// (0x00016f5d) scroll_pane_cp11

0x1cff,	// (0x00015e21) bg_popup_preview_window_pane_g1

0xb71a,	// (0x0001f83c) bg_popup_preview_window_pane_g2

0xb722,	// (0x0001f844) bg_popup_preview_window_pane_g3

0xb72a,	// (0x0001f84c) bg_popup_preview_window_pane_g4

0xb732,	// (0x0001f854) bg_popup_preview_window_pane_g5

0xb73a,	// (0x0001f85c) bg_popup_preview_window_pane_g6

0xb742,	// (0x0001f864) bg_popup_preview_window_pane_g7

0xb74a,	// (0x0001f86c) bg_popup_preview_window_pane_g8

0xe0ce,	// (0x000221f0) aid_popup_width_pane

0x902c,	// (0x0001d14e) popup_midp_note_alarm_window_ParamLimits

0x902c,	// (0x0001d14e) popup_midp_note_alarm_window

0xc76c,	// (0x0002088e) data_form_pane_ParamLimits

0xa6a9,	// (0x0001e7cb) form_field_data_pane_g1

0xa6b3,	// (0x0001e7d5) form_field_data_pane_t1_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_ParamLimits

0xc786,	// (0x000208a8) data_form_wide_pane_ParamLimits

0xc797,	// (0x000208b9) form_field_data_wide_pane_g1

0xc7c3,	// (0x000208e5) form_field_data_wide_pane_t1_ParamLimits

0xc60e,	// (0x00020730) input_focus_pane_cp6_ParamLimits

0xa825,	// (0x0001e947) input_popup_find_pane_g1_ParamLimits

0xa825,	// (0x0001e947) input_popup_find_pane_g1

0xe401,	// (0x00022523) aid_navi_side_left_pane

0xe416,	// (0x00022538) aid_navi_side_right_pane

0x26fa,	// (0x0001681c) bg_popup_window_pane_cp30_ParamLimits

0x26fa,	// (0x0001681c) bg_popup_window_pane_cp30

0x2774,	// (0x00016896) popup_midp_note_alarm_window_g1_ParamLimits

0x2774,	// (0x00016896) popup_midp_note_alarm_window_g1

0x27a4,	// (0x000168c6) popup_midp_note_alarm_window_t1_ParamLimits

0x27a4,	// (0x000168c6) popup_midp_note_alarm_window_t1

0xb563,	// (0x0001f685) popup_midp_note_alarm_window_t2_ParamLimits

0xb563,	// (0x0001f685) popup_midp_note_alarm_window_t2

0xb611,	// (0x0001f733) popup_midp_note_alarm_window_t3_ParamLimits

0xb611,	// (0x0001f733) popup_midp_note_alarm_window_t3

0xb639,	// (0x0001f75b) popup_midp_note_alarm_window_t4_ParamLimits

0xb639,	// (0x0001f75b) popup_midp_note_alarm_window_t4

0x293b,	// (0x00016a5d) popup_midp_note_alarm_window_t5_ParamLimits

0x293b,	// (0x00016a5d) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x000239a6) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x000239a6) popup_midp_note_alarm_window_t

0x29e7,	// (0x00016b09) wait_bar_pane_cp1_ParamLimits

0x29e7,	// (0x00016b09) wait_bar_pane_cp1

0xc2f2,	// (0x00020414) wait_anim_pane_copy1

0xc2f2,	// (0x00020414) wait_border_pane_copy1

0x23f0,	// (0x00016512) wait_border_pane_g1_copy1

0xc7dd,	// (0x000208ff) form_field_popup_pane_g1

0xa6cd,	// (0x0001e7ef) form_field_popup_pane_t1_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_cp7_ParamLimits

0xc7e5,	// (0x00020907) list_form_pane_ParamLimits

0xc7f1,	// (0x00020913) form_field_popup_wide_pane_g1

0xc7f9,	// (0x0002091b) form_field_popup_wide_pane_t1_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_cp8_ParamLimits

0xc80e,	// (0x00020930) list_form_wide_pane_ParamLimits

0xbb93,	// (0x0001fcb5) aid_size_cell_graphic_pane

0xa74c,	// (0x0001e86e) data_form_pane_t1_ParamLimits

0xba2c,	// (0x0001fb4e) data_form_wide_pane_t1_ParamLimits

0xaedc,	// (0x0001effe) bg_status_flat_pane

0x9d4a,	// (0x0001de6c) title_pane_t1_ParamLimits

0xc308,	// (0x0002042a) title_pane_t2_ParamLimits

0xc32e,	// (0x00020450) title_pane_t3_ParamLimits

0xf557,	// (0x00023679) title_pane_t_ParamLimits

0xe5c4,	// (0x000226e6) level_1_signal_ParamLimits

0xe5d1,	// (0x000226f3) level_2_signal_ParamLimits

0xe5de,	// (0x00022700) level_3_signal_ParamLimits

0xe5eb,	// (0x0002270d) level_4_signal_ParamLimits

0xe5f8,	// (0x0002271a) level_5_signal_ParamLimits

0xe605,	// (0x00022727) level_6_signal_ParamLimits

0xe612,	// (0x00022734) level_7_signal_ParamLimits

0xe5c4,	// (0x000226e6) level_1_battery_ParamLimits

0xe5d1,	// (0x000226f3) level_2_battery_ParamLimits

0xe5de,	// (0x00022700) level_3_battery_ParamLimits

0xe5eb,	// (0x0002270d) level_4_battery_ParamLimits

0xe5f8,	// (0x0002271a) level_5_battery_ParamLimits

0xe605,	// (0x00022727) level_6_battery_ParamLimits

0xe612,	// (0x00022734) level_7_battery_ParamLimits

0x25ff,	// (0x00016721) bg_status_flat_pane_g1

0x2607,	// (0x00016729) bg_status_flat_pane_g2

0x260f,	// (0x00016731) bg_status_flat_pane_g3

0x2617,	// (0x00016739) bg_status_flat_pane_g4

0x261f,	// (0x00016741) bg_status_flat_pane_g5

0x2627,	// (0x00016749) bg_status_flat_pane_g6

0x262f,	// (0x00016751) bg_status_flat_pane_g7

0x9dde,	// (0x0001df00) tabs_3_active_pane_t1_ParamLimits

0x9dde,	// (0x0001df00) tabs_3_passive_pane_t1_ParamLimits

0x9df8,	// (0x0001df1a) tabs_4_active_pane_t1_ParamLimits

0x9df8,	// (0x0001df1a) tabs_4_1_passive_pane_t1_ParamLimits

0xa864,	// (0x0001e986) tabs_2_active_pane_t1_ParamLimits

0xa864,	// (0x0001e986) tabs_2_passive_pane_t1_ParamLimits

0xc34e,	// (0x00020470) bg_active_tab_pane_cp4_ParamLimits

0xa876,	// (0x0001e998) tabs_2_long_active_pane_t1_ParamLimits

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp4_ParamLimits

0xeab5,	// (0x00022bd7) list_single_midp_graphic_pane_t1_ParamLimits

0xc34e,	// (0x00020470) bg_active_tab_pane_cp5_ParamLimits

0xa889,	// (0x0001e9ab) tabs_3_long_active_pane_t1_ParamLimits

0x17c8,	// (0x000158ea) bg_passive_tab_pane_cp5_ParamLimits

0xeab5,	// (0x00022bd7) list_single_midp_graphic_pane_t1

0xaedc,	// (0x0001effe) bg_status_flat_pane_ParamLimits

0x1970,	// (0x00015a92) indicator_pane_cp2_ParamLimits

0x1970,	// (0x00015a92) indicator_pane_cp2

0xb05a,	// (0x0001f17c) navi_pane_srt_ParamLimits

0xb05a,	// (0x0001f17c) navi_pane_srt

0x1abf,	// (0x00015be1) popup_clock_digital_analogue_window_cp1

0xc3ac,	// (0x000204ce) indicator_pane_t1

0x147a,	// (0x0001559c) copy_highlight_pane

0x147a,	// (0x0001559c) cursor_graphics_pane

0x147a,	// (0x0001559c) graphic_within_text_pane

0x147a,	// (0x0001559c) link_highlight_pane

0x2dfe,	// (0x00016f20) popup_preview_text_window_t5_ParamLimits

0x2dfe,	// (0x00016f20) popup_preview_text_window_t5

0x15ac,	// (0x000156ce) cursor_digital_pane

0x15ac,	// (0x000156ce) cursor_primary_pane

0x15bd,	// (0x000156df) cursor_primary_small_pane

0x15c5,	// (0x000156e7) cursor_secondary_pane

0x15cd,	// (0x000156ef) cursor_title_pane

0x15ac,	// (0x000156ce) link_highlight_digital_pane

0x15b4,	// (0x000156d6) link_highlight_primary_pane

0x15bd,	// (0x000156df) link_highlight_primary_small_pane

0x15c5,	// (0x000156e7) link_highlight_secondary_pane

0x15cd,	// (0x000156ef) link_highlight_title_pane

0x15ac,	// (0x000156ce) copy_highlight_digital_pane

0x15ac,	// (0x000156ce) copy_highlight_primary_pane

0x15bd,	// (0x000156df) copy_highlight_primary_small_pane

0x15c5,	// (0x000156e7) copy_highlight_secondary_pane

0x15cd,	// (0x000156ef) copy_highlight_title_pane

0x15c5,	// (0x000156e7) graphic_text_digital_pane

0x269d,	// (0x000167bf) graphic_text_primary_pane

0x26a6,	// (0x000167c8) graphic_text_primary_small_pane

0x15bd,	// (0x000156df) graphic_text_secondary_pane

0x15ac,	// (0x000156ce) graphic_text_title_pane

0xad06,	// (0x0001ee28) cursor_primary_pane_g1

0x268f,	// (0x000167b1) cursor_text_primary_t1

0xb559,	// (0x0001f67b) cursor_primary_small_pane_g1

0x2681,	// (0x000167a3) cursor_text_primary_small_t1

0xb54f,	// (0x0001f671) cursor_primary_small_pane_g1_copy1

0x2669,	// (0x0001678b) cursor_text_primary_small_t1_copy1

0x2647,	// (0x00016769) cursor_text_title_t1

0xb545,	// (0x0001f667) cursor_title_pane_g1

0xad06,	// (0x0001ee28) cursor_digital_pane_g1

0x15df,	// (0x00015701) cursor_text_digital_t1

0x15ed,	// (0x0001570f) link_highlight_primary_pane_g1

0x25f0,	// (0x00016712) link_highlight_primary_pane_t1

0x15ed,	// (0x0001570f) link_highlight_primary_small_pane_g1

0x15f5,	// (0x00015717) link_highlight_primary_small_pane_t1

0x15ed,	// (0x0001570f) link_highlight_secondary_pane_g1

0x1604,	// (0x00015726) link_highlight_secondary_pane_t1

0x2555,	// (0x00016677) link_highlight_title_pane_g1

0x256c,	// (0x0001668e) link_highlight_title_pane_t1

0x2555,	// (0x00016677) link_highlight_digital_pane_g1

0x255d,	// (0x0001667f) link_highlight_digital_pane_t1

0x240f,	// (0x00016531) copy_highlight_primary_pane_g1

0x2435,	// (0x00016557) copy_highlight_primary_pane_t1

0x240f,	// (0x00016531) copy_highlight_primary_small_pane_g1

0x2426,	// (0x00016548) copy_highlight_primary_small_pane_t1

0x1613,	// (0x00015735) copy_highlight_secondary_pane_g1

0x161b,	// (0x0001573d) copy_highlight_secondary_pane_t1

0x240f,	// (0x00016531) copy_highlight_title_pane_g1

0x2417,	// (0x00016539) copy_highlight_title_pane_t1

0x240f,	// (0x00016531) copy_highlight_digital_pane_g1

0x3779,	// (0x0001789b) copy_highlight_digital_pane_t1

0x36cd,	// (0x000177ef) graphic_text_primary_pane_g1

0x375d,	// (0x0001787f) graphic_text_primary_pane_t1

0x376b,	// (0x0001788d) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x00023ad5) graphic_text_primary_pane_t

0x3739,	// (0x0001785b) graphic_text_primary_small_pane_g1

0x3741,	// (0x00017863) graphic_text_primary_small_pane_t1

0x374f,	// (0x00017871) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00023ad0) graphic_text_primary_small_pane_t

0x3715,	// (0x00017837) graphic_text_secondary_pane_g1

0x371d,	// (0x0001783f) graphic_text_secondary_pane_t1

0x372b,	// (0x0001784d) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00023acb) graphic_text_secondary_pane_t

0x36f1,	// (0x00017813) graphic_text_title_pane_g1

0x36f9,	// (0x0001781b) graphic_text_title_pane_t1

0x3707,	// (0x00017829) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x00023ac6) graphic_text_title_pane_t

0x36cd,	// (0x000177ef) graphic_text_digital_pane_g1

0x36d5,	// (0x000177f7) graphic_text_digital_pane_t1

0x36e3,	// (0x00017805) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00023ac1) graphic_text_digital_pane_t

0xc34e,	// (0x00020470) navi_icon_pane_srt_ParamLimits

0xc34e,	// (0x00020470) navi_icon_pane_srt

0xc2f2,	// (0x00020414) navi_midp_pane_srt

0xc2f2,	// (0x00020414) navi_navi_pane_srt

0xc34e,	// (0x00020470) navi_text_pane_srt_ParamLimits

0xc34e,	// (0x00020470) navi_text_pane_srt

0x3698,	// (0x000177ba) navi_navi_icon_text_pane_srt

0x36a0,	// (0x000177c2) navi_navi_pane_srt_g1_ParamLimits

0x36a0,	// (0x000177c2) navi_navi_pane_srt_g1

0x36b2,	// (0x000177d4) navi_navi_pane_srt_g2_ParamLimits

0x36b2,	// (0x000177d4) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00023abc) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00023abc) navi_navi_pane_srt_g

0x36c4,	// (0x000177e6) navi_navi_tabs_pane_srt

0x3698,	// (0x000177ba) navi_navi_text_pane_srt

0x3698,	// (0x000177ba) navi_navi_volume_pane_srt

0x3689,	// (0x000177ab) navi_navi_text_pane_srt_t1

0xeca7,	// (0x00022dc9) navi_navi_volume_pane_srt_g1

0xecaf,	// (0x00022dd1) volume_small_pane_srt_ParamLimits

0xecaf,	// (0x00022dd1) volume_small_pane_srt

0xe8bb,	// (0x000229dd) volume_small_pane_srt_g1_ParamLimits

0xe8bb,	// (0x000229dd) volume_small_pane_srt_g1

0xe8cb,	// (0x000229ed) volume_small_pane_srt_g2_ParamLimits

0xe8cb,	// (0x000229ed) volume_small_pane_srt_g2

0xe8dc,	// (0x000229fe) volume_small_pane_srt_g3_ParamLimits

0xe8dc,	// (0x000229fe) volume_small_pane_srt_g3

0xe8ed,	// (0x00022a0f) volume_small_pane_srt_g4_ParamLimits

0xe8ed,	// (0x00022a0f) volume_small_pane_srt_g4

0xe8fe,	// (0x00022a20) volume_small_pane_srt_g5_ParamLimits

0xe8fe,	// (0x00022a20) volume_small_pane_srt_g5

0xe90f,	// (0x00022a31) volume_small_pane_srt_g6_ParamLimits

0xe90f,	// (0x00022a31) volume_small_pane_srt_g6

0xe920,	// (0x00022a42) volume_small_pane_srt_g7_ParamLimits

0xe920,	// (0x00022a42) volume_small_pane_srt_g7

0xe931,	// (0x00022a53) volume_small_pane_srt_g8_ParamLimits

0xe931,	// (0x00022a53) volume_small_pane_srt_g8

0xe942,	// (0x00022a64) volume_small_pane_srt_g9_ParamLimits

0xe942,	// (0x00022a64) volume_small_pane_srt_g9

0xe953,	// (0x00022a75) volume_small_pane_srt_g10_ParamLimits

0xe953,	// (0x00022a75) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00023870) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00023870) volume_small_pane_srt_g

0xa028,	// (0x0001e14a) query_popup_data_pane_cp2

0x366f,	// (0x00017791) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x366f,	// (0x00017791) navi_navi_icon_text_pane_srt_t1

0x269d,	// (0x000167bf) navi_tabs_2_long_pane_srt

0x269d,	// (0x000167bf) navi_tabs_2_pane_srt

0x269d,	// (0x000167bf) navi_tabs_3_long_pane_srt

0x269d,	// (0x000167bf) navi_tabs_3_pane_srt

0x269d,	// (0x000167bf) navi_tabs_4_pane_srt

0x95ae,	// (0x0001d6d0) tabs_2_active_pane_srt_ParamLimits

0x95ae,	// (0x0001d6d0) tabs_2_active_pane_srt

0x95be,	// (0x0001d6e0) tabs_2_passive_pane_srt_ParamLimits

0x95be,	// (0x0001d6e0) tabs_2_passive_pane_srt

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp1_srt

0xbbdd,	// (0x0001fcff) bg_passive_tab_pane_g1_cp1_srt

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp1_srt

0xbbe6,	// (0x0001fd08) bg_passive_tab_pane_g3_cp1_srt

0xc340,	// (0x00020462) bg_active_tab_pane_cp1_srt_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp1_srt

0xbbef,	// (0x0001fd11) tabs_2_active_pane_srt_g1

0xbbf7,	// (0x0001fd19) tabs_2_active_pane_srt_t1_ParamLimits

0xbbf7,	// (0x0001fd19) tabs_2_active_pane_srt_t1

0xbbdd,	// (0x0001fcff) bg_active_tab_pane_g1_cp1_srt

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp1_srt

0xbbe6,	// (0x0001fd08) bg_active_tab_pane_g3_cp1_srt

0x957b,	// (0x0001d69d) tabs_3_active_pane_srt_ParamLimits

0x957b,	// (0x0001d69d) tabs_3_active_pane_srt

0x958c,	// (0x0001d6ae) tabs_3_passive_pane_cp_srt_ParamLimits

0x958c,	// (0x0001d6ae) tabs_3_passive_pane_cp_srt

0x959d,	// (0x0001d6bf) tabs_3_passive_pane_srt_ParamLimits

0x959d,	// (0x0001d6bf) tabs_3_passive_pane_srt

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1e1f,	// (0x00015f41) bg_passive_tab_pane_cp2_srt

0xad10,	// (0x0001ee32) bg_passive_tab_pane_g1_cp2_srt

0xab71,	// (0x0001ec93) bg_passive_tab_pane_g2_cp2_srt

0xad19,	// (0x0001ee3b) bg_passive_tab_pane_g3_cp2_srt

0xc340,	// (0x00020462) bg_active_tab_pane_cp2_srt_ParamLimits

0xc340,	// (0x00020462) bg_active_tab_pane_cp2_srt

0xbbbf,	// (0x0001fce1) tabs_3_active_pane_srt_g1

0xbbc7,	// (0x0001fce9) tabs_3_active_pane_srt_t1_ParamLimits

0xbbc7,	// (0x0001fce9) tabs_3_active_pane_srt_t1

0xad10,	// (0x0001ee32) bg_active_tab_pane_g1_cp2_srt

0xab71,	// (0x0001ec93) bg_active_tab_pane_g2_cp2_srt

0xad19,	// (0x0001ee3b) bg_active_tab_pane_g3_cp2_srt

0xec5f,	// (0x00022d81) tabs_4_active_pane_srt_ParamLimits

0xec5f,	// (0x00022d81) tabs_4_active_pane_srt

0xec71,	// (0x00022d93) tabs_4_passive_pane_cp2_srt_ParamLimits

0xec71,	// (0x00022d93) tabs_4_passive_pane_cp2_srt

0xe973,	// (0x00022a95) aid_size_cell_toolbar

0x31ad,	// (0x000172cf) main_idle_act_pane_ParamLimits

0x8e6e,	// (0x0001cf90) popup_large_graphic_colour_window_ParamLimits

0x9362,	// (0x0001d484) popup_toolbar_window_ParamLimits

0x9362,	// (0x0001d484) popup_toolbar_window

0x33b0,	// (0x000174d2) list_single_graphic_2heading_pane_ParamLimits

0x33b0,	// (0x000174d2) list_single_graphic_2heading_pane

0xe48d,	// (0x000225af) aid_size_cell_apps_grid_lsc_pane

0xe49f,	// (0x000225c1) aid_size_cell_apps_grid_prt_pane

0x17c8,	// (0x000158ea) bg_wml_button_pane_cp1_ParamLimits

0x17c8,	// (0x000158ea) bg_wml_button_pane_cp1

0xb2d4,	// (0x0001f3f6) form_midp_field_text_pane_t1_ParamLimits

0x1e1f,	// (0x00015f41) input_focus_pane_cp050_ParamLimits

0x209e,	// (0x000161c0) list_midp_form_text_pane_ParamLimits

0x2041,	// (0x00016163) input_focus_pane_cp051_ParamLimits

0x2055,	// (0x00016177) list_midp_choice_pane_ParamLimits

0xb239,	// (0x0001f35b) list_single_2graphic_pane_cp3_ParamLimits

0xb239,	// (0x0001f35b) list_single_2graphic_pane_cp3

0xb24d,	// (0x0001f36f) list_single_midp_graphic_pane_ParamLimits

0xb24d,	// (0x0001f36f) list_single_midp_graphic_pane

0xe9e7,	// (0x00022b09) list_single_graphic_2heading_pane_g1_ParamLimits

0xe9e7,	// (0x00022b09) list_single_graphic_2heading_pane_g1

0xe9f3,	// (0x00022b15) list_single_graphic_2heading_pane_g4_ParamLimits

0xe9f3,	// (0x00022b15) list_single_graphic_2heading_pane_g4

0xe9ff,	// (0x00022b21) list_single_graphic_2heading_pane_g5_ParamLimits

0xe9ff,	// (0x00022b21) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x000238c3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x000238c3) list_single_graphic_2heading_pane_g

0xea0b,	// (0x00022b2d) list_single_graphic_2heading_pane_t1_ParamLimits

0xea0b,	// (0x00022b2d) list_single_graphic_2heading_pane_t1

0xea1f,	// (0x00022b41) list_single_graphic_2heading_pane_t2_ParamLimits

0xea1f,	// (0x00022b41) list_single_graphic_2heading_pane_t2

0xea39,	// (0x00022b5b) list_single_graphic_2heading_pane_t3_ParamLimits

0xea39,	// (0x00022b5b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x000238ca) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x000238ca) list_single_graphic_2heading_pane_t

0x1c1b,	// (0x00015d3d) bg_popup_sub_pane_cp2

0x1c45,	// (0x00015d67) grid_toobar_pane

0xea51,	// (0x00022b73) cell_toolbar_pane_ParamLimits

0xea51,	// (0x00022b73) cell_toolbar_pane

0x1ca3,	// (0x00015dc5) cell_toolbar_pane_g1_ParamLimits

0x1ca3,	// (0x00015dc5) cell_toolbar_pane_g1

0xb1f9,	// (0x0001f31b) cell_toolbar_pane_g2_ParamLimits

0xb1f9,	// (0x0001f31b) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x000238d1) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x000238d1) cell_toolbar_pane_g

0x1cd9,	// (0x00015dfb) grid_highlight_pane_cp2_ParamLimits

0x1cd9,	// (0x00015dfb) grid_highlight_pane_cp2

0x1cf3,	// (0x00015e15) toolbar_button_pane

0x1cff,	// (0x00015e21) toolbar_button_pane_g1

0x1d07,	// (0x00015e29) toolbar_button_pane_g2

0x1d0f,	// (0x00015e31) toolbar_button_pane_g3

0x1d17,	// (0x00015e39) toolbar_button_pane_g4

0x1d1f,	// (0x00015e41) toolbar_button_pane_g5

0x1d27,	// (0x00015e49) toolbar_button_pane_g6

0x1d2f,	// (0x00015e51) toolbar_button_pane_g7

0x1d37,	// (0x00015e59) toolbar_button_pane_g8

0x1d3f,	// (0x00015e61) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x000238d6) toolbar_button_pane_g

0xea89,	// (0x00022bab) list_single_2graphic_pane_g1_cp3_ParamLimits

0xea89,	// (0x00022bab) list_single_2graphic_pane_g1_cp3

0x940f,	// (0x0001d531) list_single_2graphic_pane_g2_cp3_ParamLimits

0x940f,	// (0x0001d531) list_single_2graphic_pane_g2_cp3

0xea95,	// (0x00022bb7) list_single_2graphic_pane_g3_cp3

0xea9d,	// (0x00022bbf) list_single_2graphic_pane_g4_cp3_ParamLimits

0xea9d,	// (0x00022bbf) list_single_2graphic_pane_g4_cp3

0x9420,	// (0x0001d542) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9420,	// (0x0001d542) list_single_2graphic_pane_t1_cp3

0xeaa9,	// (0x00022bcb) list_single_midp_graphic_pane_g2_ParamLimits

0xeaa9,	// (0x00022bcb) list_single_midp_graphic_pane_g2

0xe97b,	// (0x00022a9d) aid_zoom_text_primary

0xe983,	// (0x00022aa5) aid_zoom_text_secondary

0xad70,	// (0x0001ee92) status_small_pane_g7_ParamLimits

0xad70,	// (0x0001ee92) status_small_pane_g7

0xad93,	// (0x0001eeb5) status_small_pane_t1_ParamLimits

0x9d26,	// (0x0001de48) title_pane_g2

0x0003,

0xf54e,	// (0x00023670) title_pane_g

0xa082,	// (0x0001e1a4) aid_size_cell_colour_1_pane_ParamLimits

0xa082,	// (0x0001e1a4) aid_size_cell_colour_1_pane

0xa096,	// (0x0001e1b8) aid_size_cell_colour_2_pane_ParamLimits

0xa096,	// (0x0001e1b8) aid_size_cell_colour_2_pane

0xa0aa,	// (0x0001e1cc) aid_size_cell_colour_3_pane_ParamLimits

0xa0aa,	// (0x0001e1cc) aid_size_cell_colour_3_pane

0xa0be,	// (0x0001e1e0) aid_size_cell_colour_4_pane_ParamLimits

0xa0be,	// (0x0001e1e0) aid_size_cell_colour_4_pane

0xe309,	// (0x0002242b) title_pane_stacon_g1_ParamLimits

0xe309,	// (0x0002242b) title_pane_stacon_g1

0x248c,	// (0x000165ae) popup_note_wait_window_g3_ParamLimits

0x248c,	// (0x000165ae) popup_note_wait_window_g3

0x2502,	// (0x00016624) popup_note_wait_window_t5_ParamLimits

0x2502,	// (0x00016624) popup_note_wait_window_t5

0xc2f2,	// (0x00020414) main_feb_china_hwr_fs_writing_pane

0x8cf0,	// (0x0001ce12) popup_feb_china_hwr_fs_window_ParamLimits

0x8cf0,	// (0x0001ce12) popup_feb_china_hwr_fs_window

0x943c,	// (0x0001d55e) aid_size_cell_hwr_fs_ParamLimits

0x943c,	// (0x0001d55e) aid_size_cell_hwr_fs

0x1e1f,	// (0x00015f41) bg_popup_sub_pane_cp3_ParamLimits

0x1e1f,	// (0x00015f41) bg_popup_sub_pane_cp3

0x9451,	// (0x0001d573) grid_hwr_fs_pane_ParamLimits

0x9451,	// (0x0001d573) grid_hwr_fs_pane

0xeacb,	// (0x00022bed) linegrid_hwr_fs_pane_ParamLimits

0xeacb,	// (0x00022bed) linegrid_hwr_fs_pane

0x9469,	// (0x0001d58b) cell_hwr_fs_pane_ParamLimits

0x9469,	// (0x0001d58b) cell_hwr_fs_pane

0x1e2b,	// (0x00015f4d) linegrid_hwr_fs_pane_g1_ParamLimits

0x1e2b,	// (0x00015f4d) linegrid_hwr_fs_pane_g1

0xb20d,	// (0x0001f32f) linegrid_hwr_fs_pane_g2_ParamLimits

0xb20d,	// (0x0001f32f) linegrid_hwr_fs_pane_g2

0x1e49,	// (0x00015f6b) linegrid_hwr_fs_pane_g3_ParamLimits

0x1e49,	// (0x00015f6b) linegrid_hwr_fs_pane_g3

0x948f,	// (0x0001d5b1) linegrid_hwr_fs_pane_g4_ParamLimits

0x948f,	// (0x0001d5b1) linegrid_hwr_fs_pane_g4

0xeadb,	// (0x00022bfd) linegrid_hwr_fs_pane_g5_ParamLimits

0xeadb,	// (0x00022bfd) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x000238fc) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x000238fc) linegrid_hwr_fs_pane_g

0x1e55,	// (0x00015f77) cell_hwr_fs_pane_g1_ParamLimits

0x1e55,	// (0x00015f77) cell_hwr_fs_pane_g1

0x1b55,	// (0x00015c77) cell_hwr_fs_pane_g2_ParamLimits

0x1b55,	// (0x00015c77) cell_hwr_fs_pane_g2

0xb21f,	// (0x0001f341) cell_hwr_fs_pane_g3_ParamLimits

0xb21f,	// (0x0001f341) cell_hwr_fs_pane_g3

0xb22c,	// (0x0001f34e) cell_hwr_fs_pane_g4_ParamLimits

0xb22c,	// (0x0001f34e) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00023907) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00023907) cell_hwr_fs_pane_g

0x94a9,	// (0x0001d5cb) cell_hwr_fs_pane_t1

0xc2f2,	// (0x00020414) grid_highlight_pane_cp6

0xc2f2,	// (0x00020414) main_idle_act2_pane

0xc8ec,	// (0x00020a0e) aid_inside_area_popup_secondary

0xb678,	// (0x0001f79a) aid_inside_area_window_primary_ParamLimits

0xb678,	// (0x0001f79a) aid_inside_area_window_primary

0xbc15,	// (0x0001fd37) ai2_news_ticker_pane

0x3790,	// (0x000178b2) aid_size_cell_ai1_link_ParamLimits

0x3790,	// (0x000178b2) aid_size_cell_ai1_link

0xbc1d,	// (0x0001fd3f) popup_ai2_data_window_ParamLimits

0xbc1d,	// (0x0001fd3f) popup_ai2_data_window

0x37c0,	// (0x000178e2) popup_ai2_link_window_ParamLimits

0x37c0,	// (0x000178e2) popup_ai2_link_window

0x1e1f,	// (0x00015f41) bg_popup_sub_pane_cp4_ParamLimits

0x1e1f,	// (0x00015f41) bg_popup_sub_pane_cp4

0x37d4,	// (0x000178f6) grid_ai2_link_pane_ParamLimits

0x37d4,	// (0x000178f6) grid_ai2_link_pane

0x37eb,	// (0x0001790d) popup_ai2_link_window_g1_ParamLimits

0x37eb,	// (0x0001790d) popup_ai2_link_window_g1

0x37f7,	// (0x00017919) popup_ai2_link_window_g2_ParamLimits

0x37f7,	// (0x00017919) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00023ada) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00023ada) popup_ai2_link_window_g

0x3806,	// (0x00017928) ai2_mp_button_pane

0x380e,	// (0x00017930) ai2_mp_volume_pane

0x2041,	// (0x00016163) bg_popup_sub_pane_cp5_ParamLimits

0x2041,	// (0x00016163) bg_popup_sub_pane_cp5

0x3816,	// (0x00017938) heading_ai2_gene_pane_ParamLimits

0x3816,	// (0x00017938) heading_ai2_gene_pane

0x3822,	// (0x00017944) list_ai2_gene_pane_ParamLimits

0x3822,	// (0x00017944) list_ai2_gene_pane

0x386a,	// (0x0001798c) cell_ai2_link_pane_ParamLimits

0x386a,	// (0x0001798c) cell_ai2_link_pane

0x3880,	// (0x000179a2) cell_ai2_link_pane_g1

0xc2f2,	// (0x00020414) grid_highlight_pane_cp7

0xecc4,	// (0x00022de6) ai2_mp_volume_pane_g1

0x3950,	// (0x00017a72) ai2_mp_volume_pane_g2

0x38c5,	// (0x000179e7) list_ai2_gene_pane_t1

0x3958,	// (0x00017a7a) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x00023af3) ai2_mp_volume_pane_g

0x95ce,	// (0x0001d6f0) volume_small_pane_cp3

0x3960,	// (0x00017a82) aid_size_cell_ai2_button

0x3968,	// (0x00017a8a) grid_ai2_button_pane

0x3971,	// (0x00017a93) cell_ai2_button_pane_ParamLimits

0x3971,	// (0x00017a93) cell_ai2_button_pane

0xc2e8,	// (0x0002040a) cell_ai2_button_pane_g1

0xc2f2,	// (0x00020414) grid_highlight_pane_cp8

0x3910,	// (0x00017a32) ai2_gene_pane_t1_ParamLimits

0x3910,	// (0x00017a32) ai2_gene_pane_t1

0x8c4a,	// (0x0001cd6c) aid_height_parent_landscape

0xb8d8,	// (0x0001f9fa) aid_height_set_list

0x31ad,	// (0x000172cf) aid_size_parent

0xbb93,	// (0x0001fcb5) aid_size_cell_graphic_pane_ParamLimits

0x3832,	// (0x00017954) popup_ai2_data_window_g1_ParamLimits

0x3832,	// (0x00017954) popup_ai2_data_window_g1

0x383e,	// (0x00017960) ai2_news_ticker_pane_g1

0x3846,	// (0x00017968) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00023adf) ai2_news_ticker_pane_g

0x384e,	// (0x00017970) ai2_news_ticker_pane_t1

0x385c,	// (0x0001797e) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x00023ae4) ai2_news_ticker_pane_t

0x3889,	// (0x000179ab) heading_ai2_gene_pane_g1

0x3891,	// (0x000179b3) heading_ai2_gene_pane_t1_ParamLimits

0x3891,	// (0x000179b3) heading_ai2_gene_pane_t1

0x38a6,	// (0x000179c8) list_highlight_pane_cp6

0x38ae,	// (0x000179d0) ai2_gene_pane_ParamLimits

0x38ae,	// (0x000179d0) ai2_gene_pane

0x38d3,	// (0x000179f5) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00023ae9) list_ai2_gene_pane_t

0x38e1,	// (0x00017a03) list_highlight_pane_cp8_ParamLimits

0x38e1,	// (0x00017a03) list_highlight_pane_cp8

0x38f2,	// (0x00017a14) ai2_gene_pane_g1_ParamLimits

0x38f2,	// (0x00017a14) ai2_gene_pane_g1

0x3904,	// (0x00017a26) ai2_gene_pane_g2_ParamLimits

0x3904,	// (0x00017a26) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00023aee) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00023aee) ai2_gene_pane_g

0xc6b9,	// (0x000207db) scroll_pane_cp12

0x8c07,	// (0x0001cd29) control_pane_t3_ParamLimits

0x8c07,	// (0x0001cd29) control_pane_t3

0xad84,	// (0x0001eea6) status_small_pane_g8_ParamLimits

0xad84,	// (0x0001eea6) status_small_pane_g8

0x8db3,	// (0x0001ced5) popup_find_window_ParamLimits

0x9066,	// (0x0001d188) popup_note_image_window_ParamLimits

0x1c81,	// (0x00015da3) list_double2_graphic_pane_vc_g1_ParamLimits

0x1c81,	// (0x00015da3) list_double2_graphic_pane_vc_g1

0xc6ca,	// (0x000207ec) list_double2_graphic_pane_vc_g2_ParamLimits

0xc6ca,	// (0x000207ec) list_double2_graphic_pane_vc_g2

0xc6d6,	// (0x000207f8) list_double2_graphic_pane_vc_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x000236e3) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x000236e3) list_double2_graphic_pane_vc_g

0x1c8d,	// (0x00015daf) list_double2_graphic_pane_vc_t1_ParamLimits

0x1c8d,	// (0x00015daf) list_double2_graphic_pane_vc_t1

0xc6ca,	// (0x000207ec) list_single_heading_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_heading_pane_vc_g1

0xc6d6,	// (0x000207f8) list_single_heading_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_heading_pane_vc_g

0x1d47,	// (0x00015e69) list_single_heading_pane_vc_t1_ParamLimits

0x1d47,	// (0x00015e69) list_single_heading_pane_vc_t1

0x1d5d,	// (0x00015e7f) list_single_heading_pane_vc_t2_ParamLimits

0x1d5d,	// (0x00015e7f) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x000238eb) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x000238eb) list_single_heading_pane_vc_t

0x1d6f,	// (0x00015e91) list_setting_number_pane_vc_g1_ParamLimits

0x1d6f,	// (0x00015e91) list_setting_number_pane_vc_g1

0x1d7b,	// (0x00015e9d) list_setting_number_pane_vc_g2_ParamLimits

0x1d7b,	// (0x00015e9d) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x000238f0) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x000238f0) list_setting_number_pane_vc_g

0x1d87,	// (0x00015ea9) list_setting_number_pane_vc_t1_ParamLimits

0x1d87,	// (0x00015ea9) list_setting_number_pane_vc_t1

0x1d9b,	// (0x00015ebd) list_setting_number_pane_vc_t2_ParamLimits

0x1d9b,	// (0x00015ebd) list_setting_number_pane_vc_t2

0x1db7,	// (0x00015ed9) list_setting_number_pane_vc_t3_ParamLimits

0x1db7,	// (0x00015ed9) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x000238f5) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x000238f5) list_setting_number_pane_vc_t

0x1de3,	// (0x00015f05) set_value_pane_vc_ParamLimits

0x1de3,	// (0x00015f05) set_value_pane_vc

0x33b0,	// (0x000174d2) list_double2_graphic_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double2_graphic_pane_vc

0x33b0,	// (0x000174d2) list_double2_large_graphic_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double2_large_graphic_pane_vc

0x33b0,	// (0x000174d2) list_double2_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double2_pane_vc

0x33b0,	// (0x000174d2) list_double_graphic_heading_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_graphic_heading_pane_vc

0x33b0,	// (0x000174d2) list_double_graphic_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_graphic_pane_vc

0x33b0,	// (0x000174d2) list_double_heading_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_heading_pane_vc

0x33c2,	// (0x000174e4) list_double_large_graphic_pane_vc_ParamLimits

0x33c2,	// (0x000174e4) list_double_large_graphic_pane_vc

0x33b0,	// (0x000174d2) list_double_number_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_number_pane_vc

0x33b0,	// (0x000174d2) list_double_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_pane_vc

0x33b0,	// (0x000174d2) list_double_time_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_double_time_pane_vc

0x33b0,	// (0x000174d2) list_setting_number_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_setting_number_pane_vc

0x33b0,	// (0x000174d2) list_setting_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_setting_pane_vc

0x33b0,	// (0x000174d2) list_single_graphic_heading_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_single_graphic_heading_pane_vc

0x33b0,	// (0x000174d2) list_single_heading_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_single_heading_pane_vc

0x33b0,	// (0x000174d2) list_single_number_heading_pane_vc_ParamLimits

0x33b0,	// (0x000174d2) list_single_number_heading_pane_vc

0x39a5,	// (0x00017ac7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x39a5,	// (0x00017ac7) list_double_graphic_heading_pane_vc_g1

0xc6ca,	// (0x000207ec) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc6ca,	// (0x000207ec) list_double_graphic_heading_pane_vc_g2

0xc6d6,	// (0x000207f8) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00023afa) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00023afa) list_double_graphic_heading_pane_vc_g

0x39b1,	// (0x00017ad3) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x39b1,	// (0x00017ad3) list_double_graphic_heading_pane_vc_t1

0x39c5,	// (0x00017ae7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x39c5,	// (0x00017ae7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00023b01) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00023b01) list_double_graphic_heading_pane_vc_t

0x1d6f,	// (0x00015e91) list_setting_pane_vc_g1_ParamLimits

0x1d6f,	// (0x00015e91) list_setting_pane_vc_g1

0x1d7b,	// (0x00015e9d) list_setting_pane_vc_g2_ParamLimits

0x1d7b,	// (0x00015e9d) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x000238f0) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x000238f0) list_setting_pane_vc_g

0x3bdd,	// (0x00017cff) list_setting_pane_vc_t1_ParamLimits

0x3bdd,	// (0x00017cff) list_setting_pane_vc_t1

0x3bf9,	// (0x00017d1b) list_setting_pane_vc_t2_ParamLimits

0x3bf9,	// (0x00017d1b) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x00023b44) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x00023b44) list_setting_pane_vc_t

0x1de3,	// (0x00015f05) set_value_pane_cp_vc_ParamLimits

0x1de3,	// (0x00015f05) set_value_pane_cp_vc

0xc6ca,	// (0x000207ec) list_single_number_heading_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_single_number_heading_pane_vc_g1

0xc6d6,	// (0x000207f8) list_single_number_heading_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_single_number_heading_pane_vc_g

0x3c13,	// (0x00017d35) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c13,	// (0x00017d35) list_single_number_heading_pane_vc_t1

0x3c29,	// (0x00017d4b) list_single_number_heading_pane_vc_t2_ParamLimits

0x3c29,	// (0x00017d4b) list_single_number_heading_pane_vc_t2

0x3c3b,	// (0x00017d5d) list_single_number_heading_pane_vc_t3_ParamLimits

0x3c3b,	// (0x00017d5d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x00023b49) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x00023b49) list_single_number_heading_pane_vc_t

0x3c4d,	// (0x00017d6f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3c4d,	// (0x00017d6f) list_single_graphic_heading_pane_vc_g1

0xc6ca,	// (0x000207ec) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc6ca,	// (0x000207ec) list_single_graphic_heading_pane_vc_g4

0xc6d6,	// (0x000207f8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xc6d6,	// (0x000207f8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x00023b50) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x00023b50) list_single_graphic_heading_pane_vc_g

0x3c59,	// (0x00017d7b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c59,	// (0x00017d7b) list_single_graphic_heading_pane_vc_t1

0x3c6f,	// (0x00017d91) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3c6f,	// (0x00017d91) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x00023b57) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x00023b57) list_single_graphic_heading_pane_vc_t

0xc6ca,	// (0x000207ec) list_double2_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_double2_pane_vc_g1

0xc6d6,	// (0x000207f8) list_double2_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_double2_pane_vc_g

0x3c81,	// (0x00017da3) list_double2_pane_vc_t1_ParamLimits

0x3c81,	// (0x00017da3) list_double2_pane_vc_t1

0x3c99,	// (0x00017dbb) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3c99,	// (0x00017dbb) list_double2_large_graphic_pane_vc_g1

0xc6ca,	// (0x000207ec) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc6ca,	// (0x000207ec) list_double2_large_graphic_pane_vc_g2

0xc6d6,	// (0x000207f8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc6d6,	// (0x000207f8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023707) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023707) list_double2_large_graphic_pane_vc_g

0x1c8d,	// (0x00015daf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x1c8d,	// (0x00015daf) list_double2_large_graphic_pane_vc_t1

0x3ca5,	// (0x00017dc7) list_double_time_pane_vc_g1_ParamLimits

0x3ca5,	// (0x00017dc7) list_double_time_pane_vc_g1

0x3cb1,	// (0x00017dd3) list_double_time_pane_vc_g2_ParamLimits

0x3cb1,	// (0x00017dd3) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x00023b5c) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x00023b5c) list_double_time_pane_vc_g

0x3cbd,	// (0x00017ddf) list_double_time_pane_vc_t1_ParamLimits

0x3cbd,	// (0x00017ddf) list_double_time_pane_vc_t1

0x3ce1,	// (0x00017e03) list_double_time_pane_vc_t2_ParamLimits

0x3ce1,	// (0x00017e03) list_double_time_pane_vc_t2

0x3d10,	// (0x00017e32) list_double_time_pane_vc_t3_ParamLimits

0x3d10,	// (0x00017e32) list_double_time_pane_vc_t3

0x3d22,	// (0x00017e44) list_double_time_pane_vc_t4_ParamLimits

0x3d22,	// (0x00017e44) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x00023b61) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x00023b61) list_double_time_pane_vc_t

0xc6ca,	// (0x000207ec) list_double_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_double_pane_vc_g1

0xc6d6,	// (0x000207f8) list_double_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_double_pane_vc_g

0x3d36,	// (0x00017e58) list_double_pane_vc_t1_ParamLimits

0x3d36,	// (0x00017e58) list_double_pane_vc_t1

0x3d4a,	// (0x00017e6c) list_double_pane_vc_t2_ParamLimits

0x3d4a,	// (0x00017e6c) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x00023b6a) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x00023b6a) list_double_pane_vc_t

0xc6ca,	// (0x000207ec) list_double_number_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_double_number_pane_vc_g1

0xc6d6,	// (0x000207f8) list_double_number_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_double_number_pane_vc_g

0x3d62,	// (0x00017e84) list_double_number_pane_vc_t1_ParamLimits

0x3d62,	// (0x00017e84) list_double_number_pane_vc_t1

0x3d36,	// (0x00017e58) list_double_number_pane_vc_t2_ParamLimits

0x3d36,	// (0x00017e58) list_double_number_pane_vc_t2

0x3d74,	// (0x00017e96) list_double_number_pane_vc_t3_ParamLimits

0x3d74,	// (0x00017e96) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x00023b6f) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x00023b6f) list_double_number_pane_vc_t

0x3d8c,	// (0x00017eae) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3d8c,	// (0x00017eae) list_double_large_graphic_pane_vc_g1

0x3dae,	// (0x00017ed0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3dae,	// (0x00017ed0) list_double_large_graphic_pane_vc_g2

0x3dc2,	// (0x00017ee4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3dc2,	// (0x00017ee4) list_double_large_graphic_pane_vc_g3

0x3dd1,	// (0x00017ef3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3dd1,	// (0x00017ef3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x00023b76) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x00023b76) list_double_large_graphic_pane_vc_g

0x3ddd,	// (0x00017eff) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3ddd,	// (0x00017eff) list_double_large_graphic_pane_vc_t1

0x3df9,	// (0x00017f1b) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3df9,	// (0x00017f1b) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x00023b7f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x00023b7f) list_double_large_graphic_pane_vc_t

0xc6ca,	// (0x000207ec) list_double_heading_pane_vc_g1_ParamLimits

0xc6ca,	// (0x000207ec) list_double_heading_pane_vc_g1

0xc6d6,	// (0x000207f8) list_double_heading_pane_vc_g2_ParamLimits

0xc6d6,	// (0x000207f8) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000236ea) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000236ea) list_double_heading_pane_vc_g

0x3e1b,	// (0x00017f3d) list_double_heading_pane_vc_t1_ParamLimits

0x3e1b,	// (0x00017f3d) list_double_heading_pane_vc_t1

0x3e2f,	// (0x00017f51) list_double_heading_pane_vc_t2_ParamLimits

0x3e2f,	// (0x00017f51) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x00023b84) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x00023b84) list_double_heading_pane_vc_t

0x3e47,	// (0x00017f69) list_double_graphic_pane_vc_g1_ParamLimits

0x3e47,	// (0x00017f69) list_double_graphic_pane_vc_g1

0x3e5a,	// (0x00017f7c) list_double_graphic_pane_vc_g2_ParamLimits

0x3e5a,	// (0x00017f7c) list_double_graphic_pane_vc_g2

0xc6ca,	// (0x000207ec) list_double_graphic_pane_vc_g3_ParamLimits

0xc6ca,	// (0x000207ec) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00023b89) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00023b89) list_double_graphic_pane_vc_g

0x3e77,	// (0x00017f99) list_double_graphic_pane_vc_t1_ParamLimits

0x3e77,	// (0x00017f99) list_double_graphic_pane_vc_t1

0x3e96,	// (0x00017fb8) list_double_graphic_pane_vc_t2_ParamLimits

0x3e96,	// (0x00017fb8) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00023b92) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00023b92) list_double_graphic_pane_vc_t

0xe0da,	// (0x000221fc) aid_size_cell_fastswap

0x87c2,	// (0x0001c8e4) aid_size_cell_touch_ParamLimits

0x87c2,	// (0x0001c8e4) aid_size_cell_touch

0xe23b,	// (0x0002235d) popup_fast_swap_wide_window_ParamLimits

0xe23b,	// (0x0002235d) popup_fast_swap_wide_window

0x8992,	// (0x0001cab4) touch_pane_ParamLimits

0x8992,	// (0x0001cab4) touch_pane

0xc741,	// (0x00020863) button_value_adjust_pane_cp2

0xc749,	// (0x0002086b) button_value_adjust_pane_cp4

0xc751,	// (0x00020873) form_field_data_pane_cp2

0xa655,	// (0x0001e777) form_field_data_wide_pane_cp2

0xe4ce,	// (0x000225f0) bg_scroll_pane_ParamLimits

0x8a82,	// (0x0001cba4) scroll_handle_pane_ParamLimits

0xe4ed,	// (0x0002260f) scroll_sc2_down_pane_ParamLimits

0xe4ed,	// (0x0002260f) scroll_sc2_down_pane

0xe514,	// (0x00022636) scroll_sc2_up_pane_ParamLimits

0xe514,	// (0x00022636) scroll_sc2_up_pane

0xbd56,	// (0x0001fe78) grid_wheel_folder_pane_g1_ParamLimits

0xbd56,	// (0x0001fe78) grid_wheel_folder_pane_g1

0xe853,	// (0x00022975) clock_nsta_pane_cp2_ParamLimits

0xe853,	// (0x00022975) clock_nsta_pane_cp2

0xac4a,	// (0x0001ed6c) listscroll_midp_pane_ParamLimits

0xac56,	// (0x0001ed78) midp_canvas_pane

0x1772,	// (0x00015894) nsta_clock_indic_pane

0x17ae,	// (0x000158d0) listscroll_form_pane_vc

0x17b6,	// (0x000158d8) listscroll_set_pane_vc_ParamLimits

0x17b6,	// (0x000158d8) listscroll_set_pane_vc

0xaf04,	// (0x0001f026) clock_nsta_pane

0xaf2e,	// (0x0001f050) indicator_nsta_pane

0x1c1b,	// (0x00015d3d) bg_popup_sub_pane_cp2_ParamLimits

0x1c2f,	// (0x00015d51) find_pane_cp2_ParamLimits

0x1c2f,	// (0x00015d51) find_pane_cp2

0x1c45,	// (0x00015d67) grid_toobar_pane_ParamLimits

0x1df3,	// (0x00015f15) list_form_gen_pane_vc_ParamLimits

0x1df3,	// (0x00015f15) list_form_gen_pane_vc

0x1e09,	// (0x00015f2b) scroll_pane_cp8_vc_ParamLimits

0x1e09,	// (0x00015f2b) scroll_pane_cp8_vc

0x1e85,	// (0x00015fa7) data_form_wide_pane_vc_ParamLimits

0x1e85,	// (0x00015fa7) data_form_wide_pane_vc

0x1e91,	// (0x00015fb3) form_field_data_wide_pane_vc_g1

0x1e99,	// (0x00015fbb) form_field_data_wide_pane_vc_t1_ParamLimits

0x1e99,	// (0x00015fbb) form_field_data_wide_pane_vc_t1

0xc778,	// (0x0002089a) input_focus_pane_cp6_vc_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_cp6_vc

0x2227,	// (0x00016349) list_midp_pane_ParamLimits

0x3615,	// (0x00017737) scroll_pane_cp16_ParamLimits

0x3615,	// (0x00017737) scroll_pane_cp16

0x2269,	// (0x0001638b) button_value_adjust_pane_ParamLimits

0x2269,	// (0x0001638b) button_value_adjust_pane

0xb8e9,	// (0x0001fa0b) button_value_adjust_pane_cp6_ParamLimits

0xb8e9,	// (0x0001fa0b) button_value_adjust_pane_cp6

0xba03,	// (0x0001fb25) settings_code_pane_cp_ParamLimits

0xba03,	// (0x0001fb25) settings_code_pane_cp

0xc2e8,	// (0x0002040a) cell_touch_pane_g1

0xc2e8,	// (0x0002040a) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00023816) cell_touch_pane_g

0xbc33,	// (0x0001fd55) cell_touch_pane_cp_ParamLimits

0xbc33,	// (0x0001fd55) cell_touch_pane_cp

0xbc4f,	// (0x0001fd71) cell_touch_pane_ParamLimits

0xbc4f,	// (0x0001fd71) cell_touch_pane

0xc2e8,	// (0x0002040a) scroll_sc2_down_pane_g1

0xc2e8,	// (0x0002040a) scroll_sc2_up_pane_g1

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp4_vc

0x39dd,	// (0x00017aff) list_set_graphic_pane_vc_g1_ParamLimits

0x39dd,	// (0x00017aff) list_set_graphic_pane_vc_g1

0x39e9,	// (0x00017b0b) list_set_graphic_pane_vc_g2_ParamLimits

0x39e9,	// (0x00017b0b) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x00023b06) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x00023b06) list_set_graphic_pane_vc_g

0x39f5,	// (0x00017b17) text_primary_small_cp13_vc_ParamLimits

0x39f5,	// (0x00017b17) text_primary_small_cp13_vc

0x3a0d,	// (0x00017b2f) list_set_graphic_pane_vc_ParamLimits

0x3a0d,	// (0x00017b2f) list_set_graphic_pane_vc

0xc2f2,	// (0x00020414) input_focus_pane_cp2_vc

0xc2e8,	// (0x0002040a) setting_code_pane_vc_g1

0xc365,	// (0x00020487) setting_code_pane_vc_t1

0x3a20,	// (0x00017b42) set_text_pane_vc_t1_ParamLimits

0x3a20,	// (0x00017b42) set_text_pane_vc_t1

0xc2f2,	// (0x00020414) input_focus_pane_cp1_vc

0x3a3c,	// (0x00017b5e) list_set_text_pane_vc

0xc2e8,	// (0x0002040a) setting_text_pane_vc_g1

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp2_vc

0xc35c,	// (0x0002047e) setting_slider_graphic_pane_vc_g1

0x3a46,	// (0x00017b68) setting_slider_graphic_pane_vc_t1

0x3a56,	// (0x00017b78) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00023b0b) setting_slider_graphic_pane_vc_t

0x3a66,	// (0x00017b88) slider_set_pane_cp_vc

0x3a6e,	// (0x00017b90) slider_set_pane_vc_g1

0x3a77,	// (0x00017b99) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00023b10) slider_set_pane_vc_g

0xc83e,	// (0x00020960) set_opt_bg_pane_g1_copy1

0xc846,	// (0x00020968) set_opt_bg_pane_g2_copy1

0x3aa3,	// (0x00017bc5) set_opt_bg_pane_g3_copy1

0xc856,	// (0x00020978) set_opt_bg_pane_g4_copy1

0xc85e,	// (0x00020980) set_opt_bg_pane_g5_copy1

0xc866,	// (0x00020988) set_opt_bg_pane_g6_copy1

0x3aab,	// (0x00017bcd) set_opt_bg_pane_g7_copy1

0x3ab3,	// (0x00017bd5) set_opt_bg_pane_g8_copy1

0x3abb,	// (0x00017bdd) set_opt_bg_pane_g9_copy1

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp_vc

0x3ac3,	// (0x00017be5) setting_slider_pane_vc_t1

0x3ad2,	// (0x00017bf4) setting_slider_pane_vc_t2

0x3ae2,	// (0x00017c04) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00023b1f) setting_slider_pane_vc_t

0x3af2,	// (0x00017c14) slider_set_pane_vc

0xeaf1,	// (0x00022c13) volume_set_pane_vc_g1

0xeccc,	// (0x00022dee) volume_set_pane_vc_g2

0xecd5,	// (0x00022df7) volume_set_pane_vc_g3

0xecde,	// (0x00022e00) volume_set_pane_vc_g4

0xece7,	// (0x00022e09) volume_set_pane_vc_g5

0xecf0,	// (0x00022e12) volume_set_pane_vc_g6

0xecf9,	// (0x00022e1b) volume_set_pane_vc_g7

0xed02,	// (0x00022e24) volume_set_pane_vc_g8

0xed0b,	// (0x00022e2d) volume_set_pane_vc_g9

0xed14,	// (0x00022e36) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x00023b26) volume_set_pane_vc_g

0x3afa,	// (0x00017c1c) volume_set_pane_vc

0x3b02,	// (0x00017c24) button_value_adjust_pane_cp1_vc

0x3b0c,	// (0x00017c2e) list_highlight_pane_cp2_vc

0x3b15,	// (0x00017c37) list_set_pane_vc_ParamLimits

0x3b15,	// (0x00017c37) list_set_pane_vc

0x3b73,	// (0x00017c95) main_pane_set_vc_t1_ParamLimits

0x3b73,	// (0x00017c95) main_pane_set_vc_t1

0x3b88,	// (0x00017caa) main_pane_set_vc_t2_ParamLimits

0x3b88,	// (0x00017caa) main_pane_set_vc_t2

0x3b9a,	// (0x00017cbc) main_pane_set_vc_t3_ParamLimits

0x3b9a,	// (0x00017cbc) main_pane_set_vc_t3

0x3bac,	// (0x00017cce) main_pane_set_vc_t4_ParamLimits

0x3bac,	// (0x00017cce) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x00023b3b) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x00023b3b) main_pane_set_vc_t

0x3bbe,	// (0x00017ce0) setting_code_pane_vc_ParamLimits

0x3bbe,	// (0x00017ce0) setting_code_pane_vc

0x3bcd,	// (0x00017cef) setting_slider_graphic_pane_vc

0x3bcd,	// (0x00017cef) setting_slider_pane_vc

0x3bcd,	// (0x00017cef) setting_text_pane_vc

0x3bcd,	// (0x00017cef) setting_volume_pane_vc

0x3bd5,	// (0x00017cf7) scroll_pane_cp121_vc

0xc72f,	// (0x00020851) set_content_pane_vc

0x3ec0,	// (0x00017fe2) button_value_adjust_pane_g1

0x3ec9,	// (0x00017feb) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x00023b97) button_value_adjust_pane_g

0x3ed2,	// (0x00017ff4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3ed2,	// (0x00017ff4) form_field_slider_wide_pane_vc_t1

0x3ee6,	// (0x00018008) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3ee6,	// (0x00018008) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00023b9c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00023b9c) form_field_slider_wide_pane_vc_t

0xc340,	// (0x00020462) input_focus_pane_cp10_vc_ParamLimits

0xc340,	// (0x00020462) input_focus_pane_cp10_vc

0x3f14,	// (0x00018036) slider_cont_pane_cp1_vc_ParamLimits

0x3f14,	// (0x00018036) slider_cont_pane_cp1_vc

0x3f26,	// (0x00018048) slider_form_pane_g1_cp2

0x3a77,	// (0x00017b99) slider_form_pane_g2_cp2

0x3f53,	// (0x00018075) form_field_slider_pane_vc_t3

0x3f61,	// (0x00018083) form_field_slider_pane_vc_t4

0x3f6f,	// (0x00018091) slider_form_pane_vc_ParamLimits

0x3f6f,	// (0x00018091) slider_form_pane_vc

0x3f7c,	// (0x0001809e) form_field_slider_pane_vc_t1_ParamLimits

0x3f7c,	// (0x0001809e) form_field_slider_pane_vc_t1

0x3ee6,	// (0x00018008) form_field_slider_pane_vc_t2_ParamLimits

0x3ee6,	// (0x00018008) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00023bae) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00023bae) form_field_slider_pane_vc_t

0xc340,	// (0x00020462) input_focus_pane_cp9_vc_ParamLimits

0xc340,	// (0x00020462) input_focus_pane_cp9_vc

0x3f98,	// (0x000180ba) slider_cont_pane_vc_ParamLimits

0x3f98,	// (0x000180ba) slider_cont_pane_vc

0x3fac,	// (0x000180ce) list_form_graphic_pane_cp_vc_ParamLimits

0x3fac,	// (0x000180ce) list_form_graphic_pane_cp_vc

0x1e91,	// (0x00015fb3) form_field_popup_wide_pane_vc_g1

0x3fc1,	// (0x000180e3) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3fc1,	// (0x000180e3) form_field_popup_wide_pane_vc_t1

0xc778,	// (0x0002089a) input_focus_pane_cp8_vc_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_cp8_vc

0x4006,	// (0x00018128) list_form_wide_pane_vc_ParamLimits

0x4006,	// (0x00018128) list_form_wide_pane_vc

0x4012,	// (0x00018134) list_form_graphic_pane_vc_g1

0x401a,	// (0x0001813c) list_form_graphic_pane_vc_t1_ParamLimits

0x401a,	// (0x0001813c) list_form_graphic_pane_vc_t1

0xc34e,	// (0x00020470) list_highlight_pane_cp5_vc_ParamLimits

0xc34e,	// (0x00020470) list_highlight_pane_cp5_vc

0x4036,	// (0x00018158) list_form_graphic_pane_vc_ParamLimits

0x4036,	// (0x00018158) list_form_graphic_pane_vc

0x1e91,	// (0x00015fb3) form_field_popup_pane_vc_g1

0x404c,	// (0x0001816e) form_field_popup_pane_vc_t1_ParamLimits

0x404c,	// (0x0001816e) form_field_popup_pane_vc_t1

0xc778,	// (0x0002089a) input_focus_pane_cp7_vc_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_cp7_vc

0x4063,	// (0x00018185) list_form_pane_vc_ParamLimits

0x4063,	// (0x00018185) list_form_pane_vc

0x406f,	// (0x00018191) data_form_pane_vc_t1_ParamLimits

0x406f,	// (0x00018191) data_form_pane_vc_t1

0xc83e,	// (0x00020960) input_focus_pane_vc_g1

0xc846,	// (0x00020968) input_focus_pane_vc_g2

0xc84e,	// (0x00020970) input_focus_pane_vc_g3

0xc856,	// (0x00020978) input_focus_pane_vc_g4

0xc85e,	// (0x00020980) input_focus_pane_vc_g5

0xc866,	// (0x00020988) input_focus_pane_vc_g6

0xc86e,	// (0x00020990) input_focus_pane_vc_g7

0xc876,	// (0x00020998) input_focus_pane_vc_g8

0xc87e,	// (0x000209a0) input_focus_pane_vc_g9

0xc2e8,	// (0x0002040a) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x0002379f) input_focus_pane_vc_g

0x1e85,	// (0x00015fa7) data_form_pane_vc_ParamLimits

0x1e85,	// (0x00015fa7) data_form_pane_vc

0x1e91,	// (0x00015fb3) form_field_data_pane_vc_g1

0x408a,	// (0x000181ac) form_field_data_pane_vc_t1_ParamLimits

0x408a,	// (0x000181ac) form_field_data_pane_vc_t1

0xc778,	// (0x0002089a) input_focus_pane_vc_ParamLimits

0xc778,	// (0x0002089a) input_focus_pane_vc

0x40a4,	// (0x000181c6) button_value_adjust_pane_cp3_vc

0x40ac,	// (0x000181ce) button_value_adjust_pane_cp5_vc

0x40b4,	// (0x000181d6) form_field_data_pane_vc_ParamLimits

0x40b4,	// (0x000181d6) form_field_data_pane_vc

0x40cb,	// (0x000181ed) form_field_data_pane_vc_cp2

0x40d3,	// (0x000181f5) form_field_data_wide_pane_vc_ParamLimits

0x40d3,	// (0x000181f5) form_field_data_wide_pane_vc

0x40e9,	// (0x0001820b) form_field_data_wide_pane_vc_cp2

0x40f1,	// (0x00018213) form_field_popup_pane_vc_ParamLimits

0x40f1,	// (0x00018213) form_field_popup_pane_vc

0x4108,	// (0x0001822a) form_field_popup_wide_pane_vc_ParamLimits

0x4108,	// (0x0001822a) form_field_popup_wide_pane_vc

0x411e,	// (0x00018240) form_field_slider_pane_vc_ParamLimits

0x411e,	// (0x00018240) form_field_slider_pane_vc

0x4131,	// (0x00018253) form_field_slider_wide_pane_vc_ParamLimits

0x4131,	// (0x00018253) form_field_slider_wide_pane_vc

0xbc6c,	// (0x0001fd8e) grid_touch_1_pane_ParamLimits

0xbc6c,	// (0x0001fd8e) grid_touch_1_pane

0xbc80,	// (0x0001fda2) grid_touch_2_pane_ParamLimits

0xbc80,	// (0x0001fda2) grid_touch_2_pane

0x41ff,	// (0x00018321) touch_pane_g1_ParamLimits

0x41ff,	// (0x00018321) touch_pane_g1

0x4168,	// (0x0001828a) cell_app_pane_cp_wide_ParamLimits

0x4168,	// (0x0001828a) cell_app_pane_cp_wide

0x4179,	// (0x0001829b) grid_popup_fast_wide_pane_ParamLimits

0x4179,	// (0x0001829b) grid_popup_fast_wide_pane

0x418d,	// (0x000182af) scroll_pane_cp19_ParamLimits

0x418d,	// (0x000182af) scroll_pane_cp19

0xc2f2,	// (0x00020414) bg_popup_window_pane_cp20

0x41a1,	// (0x000182c3) listscroll_popup_fast_wide_pane

0xc9fa,	// (0x00020b1c) grid_indicator_nsta_pane

0x41a9,	// (0x000182cb) clock_nsta_pane_g1

0x41b2,	// (0x000182d4) clock_nsta_pane_t1

0xbcaa,	// (0x0001fdcc) cell_indicator_nsta_pane_ParamLimits

0xbcaa,	// (0x0001fdcc) cell_indicator_nsta_pane

0x41ff,	// (0x00018321) cell_indicator_nsta_pane_g1

0xbcc1,	// (0x0001fde3) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00023bbf) cell_indicator_nsta_pane_g

0x421a,	// (0x0001833c) clock_nsta_pane_cp

0x4222,	// (0x00018344) indicator_nsta_pane_cp

0x422a,	// (0x0001834c) nsta_clock_indic_pane_g1

0xc3a4,	// (0x000204c6) grid_indicator_pane

0xaa08,	// (0x0001eb2a) scroll_pane_cp29

0xe7a2,	// (0x000228c4) indicator_nsta_pane_cp2_ParamLimits

0xe7a2,	// (0x000228c4) indicator_nsta_pane_cp2

0xc34e,	// (0x00020470) main_apps_wheel_pane

0xb30d,	// (0x0001f42f) form_midp_field_text_pane_ParamLimits

0x2233,	// (0x00016355) scroll_bar_cp050_ParamLimits

0x427a,	// (0x0001839c) cell_indicator_pane_ParamLimits

0x427a,	// (0x0001839c) cell_indicator_pane

0x4293,	// (0x000183b5) cell_indicator_pane_g1

0xbce0,	// (0x0001fe02) grid_wheel_folder_pane_ParamLimits

0xbce0,	// (0x0001fe02) grid_wheel_folder_pane

0xbcee,	// (0x0001fe10) list_wheel_apps_pane_ParamLimits

0xbcee,	// (0x0001fe10) list_wheel_apps_pane

0xbcfc,	// (0x0001fe1e) main_apps_wheel_pane_g1_ParamLimits

0xbcfc,	// (0x0001fe1e) main_apps_wheel_pane_g1

0xbd08,	// (0x0001fe2a) main_apps_wheel_pane_g2_ParamLimits

0xbd08,	// (0x0001fe2a) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00023bdb) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00023bdb) main_apps_wheel_pane_g

0xbd16,	// (0x0001fe38) main_apps_wheel_pane_t1_ParamLimits

0xbd16,	// (0x0001fe38) main_apps_wheel_pane_t1

0xbd2a,	// (0x0001fe4c) list_wheel_apps_pane_g1

0xbd32,	// (0x0001fe54) list_wheel_apps_pane_g2

0xbd3a,	// (0x0001fe5c) list_wheel_apps_pane_g3

0xbd42,	// (0x0001fe64) list_wheel_apps_pane_g4

0xbd4c,	// (0x0001fe6e) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00023be0) list_wheel_apps_pane_g

0x12fa,	// (0x0001541c) navi_icon_text_pane

0xadf8,	// (0x0001ef1a) aid_fill_nsta

0x435a,	// (0x0001847c) navi_icon_text_pane_g1

0x4366,	// (0x00018488) navi_icon_text_pane_t1

0x119d,	// (0x000152bf) list_set_graphic_pane_t1_ParamLimits

0x119d,	// (0x000152bf) list_set_graphic_pane_t1

0x296a,	// (0x00016a8c) popup_midp_note_alarm_window_t6_ParamLimits

0x296a,	// (0x00016a8c) popup_midp_note_alarm_window_t6

0x297c,	// (0x00016a9e) popup_midp_note_alarm_window_t7_ParamLimits

0x297c,	// (0x00016a9e) popup_midp_note_alarm_window_t7

0x298e,	// (0x00016ab0) popup_midp_note_alarm_window_t8_ParamLimits

0x298e,	// (0x00016ab0) popup_midp_note_alarm_window_t8

0x29a0,	// (0x00016ac2) popup_midp_note_alarm_window_t9_ParamLimits

0x29a0,	// (0x00016ac2) popup_midp_note_alarm_window_t9

0x29b2,	// (0x00016ad4) popup_midp_note_alarm_window_t10_ParamLimits

0x29b2,	// (0x00016ad4) popup_midp_note_alarm_window_t10

0x29c4,	// (0x00016ae6) popup_midp_note_alarm_window_t11_ParamLimits

0x29c4,	// (0x00016ae6) popup_midp_note_alarm_window_t11

0xb659,	// (0x0001f77b) scroll_pane_cp17_ParamLimits

0xb659,	// (0x0001f77b) scroll_pane_cp17

0xeaf1,	// (0x00022c13) volume_small_pane_cp_g1

0xed1d,	// (0x00022e3f) volume_small_pane_cp_g2

0xed26,	// (0x00022e48) volume_small_pane_cp_g3

0xed2f,	// (0x00022e51) volume_small_pane_cp_g4

0xed38,	// (0x00022e5a) volume_small_pane_cp_g5

0xece7,	// (0x00022e09) volume_small_pane_cp_g6

0xed41,	// (0x00022e63) volume_small_pane_cp_g7

0xed4a,	// (0x00022e6c) volume_small_pane_cp_g8

0xed53,	// (0x00022e75) volume_small_pane_cp_g9

0xed5c,	// (0x00022e7e) volume_small_pane_cp_g10

0x155b,	// (0x0001567d) midp_ticker_pane_g1_ParamLimits

0x1567,	// (0x00015689) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x0002386b) midp_ticker_pane_g_ParamLimits

0x1573,	// (0x00015695) midp_ticker_pane_t1_ParamLimits

0xae1c,	// (0x0001ef3e) aid_fill_nsta_2

0x221f,	// (0x00016341) list_form2_midp_pane

0x3363,	// (0x00017485) midp_editing_number_pane_ParamLimits

0x3372,	// (0x00017494) midp_ticker_pane_ParamLimits

0x4378,	// (0x0001849a) form2_midp_field_pane

0x439c,	// (0x000184be) scroll_pane_cp51

0x43bc,	// (0x000184de) form2_midp_button_pane_ParamLimits

0x43bc,	// (0x000184de) form2_midp_button_pane

0x43ce,	// (0x000184f0) form2_midp_content_pane_ParamLimits

0x43ce,	// (0x000184f0) form2_midp_content_pane

0x43e8,	// (0x0001850a) form2_midp_field_choice_group_pane

0x43f0,	// (0x00018512) form2_midp_field_pane_g1

0x43f8,	// (0x0001851a) form2_midp_field_pane_g2

0x4400,	// (0x00018522) form2_midp_field_pane_g3

0x4408,	// (0x0001852a) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x00023c05) form2_midp_field_pane_g

0x4410,	// (0x00018532) form2_midp_gauge_slider_pane

0x4418,	// (0x0001853a) form2_midp_gauge_wait_pane

0x4420,	// (0x00018542) form2_midp_image_pane_ParamLimits

0x4420,	// (0x00018542) form2_midp_image_pane

0xbd7f,	// (0x0001fea1) form2_midp_label_pane_ParamLimits

0xbd7f,	// (0x0001fea1) form2_midp_label_pane

0xbd98,	// (0x0001feba) form2_midp_label_pane_cp_ParamLimits

0xbd98,	// (0x0001feba) form2_midp_label_pane_cp

0x4475,	// (0x00018597) form2_midp_string_pane_ParamLimits

0x4475,	// (0x00018597) form2_midp_string_pane

0xbdb7,	// (0x0001fed9) form2_midp_text_pane_ParamLimits

0xbdb7,	// (0x0001fed9) form2_midp_text_pane

0x44a2,	// (0x000185c4) form2_midp_time_pane

0x44b2,	// (0x000185d4) input_focus_pane_cp51_ParamLimits

0x44b2,	// (0x000185d4) input_focus_pane_cp51

0xbdd0,	// (0x0001fef2) form2_midp_label_pane_t1_ParamLimits

0xbdd0,	// (0x0001fef2) form2_midp_label_pane_t1

0xbe10,	// (0x0001ff32) form2_mdip_text_pane_t1_ParamLimits

0xbe10,	// (0x0001ff32) form2_mdip_text_pane_t1

0x452a,	// (0x0001864c) form2_midp_time_pane_t1

0x4545,	// (0x00018667) form2_midp_gauge_slider_pane_t1

0xbe2c,	// (0x0001ff4e) form2_midp_gauge_slider_pane_t2

0xbe3e,	// (0x0001ff60) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00023c0e) form2_midp_gauge_slider_pane_t

0x457b,	// (0x0001869d) form2_midp_slider_pane

0x4587,	// (0x000186a9) form2_midp_gauge_wait_pane_t1

0x4595,	// (0x000186b7) form2_midp_wait_pane_ParamLimits

0x4595,	// (0x000186b7) form2_midp_wait_pane

0xb239,	// (0x0001f35b) list_single_2graphic_pane_cp4_ParamLimits

0xb239,	// (0x0001f35b) list_single_2graphic_pane_cp4

0xbe50,	// (0x0001ff72) list_single_midp_graphic_pane_cp_ParamLimits

0xbe50,	// (0x0001ff72) list_single_midp_graphic_pane_cp

0xc2f2,	// (0x00020414) list_highlight_pane_cp20

0x45e8,	// (0x0001870a) list_single_2graphic_pane_g1_cp4

0x3889,	// (0x000179ab) list_single_2graphic_pane_g2_cp4

0x45f0,	// (0x00018712) list_single_2graphic_pane_t1_cp4

0xc34e,	// (0x00020470) list_highlight_pane_cp21

0x45ff,	// (0x00018721) list_single_midp_graphic_pane_g4_cp

0x460e,	// (0x00018730) list_single_midp_graphic_pane_t1_cp

0xbe6f,	// (0x0001ff91) form2_mdip_string_pane_t1_ParamLimits

0xbe6f,	// (0x0001ff91) form2_mdip_string_pane_t1

0xc2f2,	// (0x00020414) bg_wml_button_pane_cp2

0xc2e8,	// (0x0002040a) form2_midp_image_pane_g1

0xc6e2,	// (0x00020804) list_double_large_graphic_pane_g5_ParamLimits

0xc6e2,	// (0x00020804) list_double_large_graphic_pane_g5

0xac4a,	// (0x0001ed6c) midp_form_pane_ParamLimits

0xc34e,	// (0x00020470) main_apps_wheel_pane_ParamLimits

0x90ed,	// (0x0001d20f) popup_preview_window_ParamLimits

0x90ed,	// (0x0001d20f) popup_preview_window

0x93ba,	// (0x0001d4dc) popup_touch_info_window_ParamLimits

0x93ba,	// (0x0001d4dc) popup_touch_info_window

0x93d8,	// (0x0001d4fa) popup_touch_menu_window_ParamLimits

0x93d8,	// (0x0001d4fa) popup_touch_menu_window

0xc2de,	// (0x00020400) bg_popup_sub_pane_cp6

0x4724,	// (0x00018846) list_touch_menu_pane

0xbee3,	// (0x00020005) list_single_touch_menu_pane_ParamLimits

0xbee3,	// (0x00020005) list_single_touch_menu_pane

0xbef7,	// (0x00020019) list_single_touch_menu_pane_t1

0xc34e,	// (0x00020470) bg_popup_sub_pane_cp7_ParamLimits

0xc34e,	// (0x00020470) bg_popup_sub_pane_cp7

0x4750,	// (0x00018872) heading_sub_pane

0x4758,	// (0x0001887a) list_touch_info_pane_ParamLimits

0x4758,	// (0x0001887a) list_touch_info_pane

0x4767,	// (0x00018889) list_single_touch_info_pane_ParamLimits

0x4767,	// (0x00018889) list_single_touch_info_pane

0x4779,	// (0x0001889b) list_single_touch_info_pane_t1

0x4787,	// (0x000188a9) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00023c1c) list_single_touch_info_pane_t

0x147a,	// (0x0001559c) bg_popup_heading_pane_cp

0x4795,	// (0x000188b7) heading_sub_pane_t1

0x1e1f,	// (0x00015f41) bg_popup_preview_window_pane_cp_ParamLimits

0x1e1f,	// (0x00015f41) bg_popup_preview_window_pane_cp

0x4750,	// (0x00018872) heading_preview_pane

0x4758,	// (0x0001887a) list_preview_pane_ParamLimits

0x4758,	// (0x0001887a) list_preview_pane

0x47a3,	// (0x000188c5) popup_preview_window_g1

0x4767,	// (0x00018889) list_single_preview_pane_ParamLimits

0x4767,	// (0x00018889) list_single_preview_pane

0x47ab,	// (0x000188cd) list_single_preview_pane_g1

0x47b3,	// (0x000188d5) list_single_preview_pane_t1

0x4779,	// (0x0001889b) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00023c21) list_single_preview_pane_t

0x47c1,	// (0x000188e3) bg_popup_heading_pane_cp2_ParamLimits

0x47c1,	// (0x000188e3) bg_popup_heading_pane_cp2

0x47d7,	// (0x000188f9) heading_preview_pane_g1

0x47df,	// (0x00018901) heading_preview_pane_t1_ParamLimits

0x47df,	// (0x00018901) heading_preview_pane_t1

0xc3bb,	// (0x000204dd) soft_indicator_pane_t1_ParamLimits

0xc696,	// (0x000207b8) scroll_pane_ParamLimits

0xe502,	// (0x00022624) scroll_sc2_left_pane

0xe50b,	// (0x0002262d) scroll_sc2_right_pane

0xe52a,	// (0x0002264c) scroll_bg_pane_g1_ParamLimits

0xe53f,	// (0x00022661) scroll_bg_pane_g2_ParamLimits

0xe557,	// (0x00022679) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x000237f6) scroll_bg_pane_g_ParamLimits

0xe52a,	// (0x0002264c) scroll_handle_pane_g1_ParamLimits

0xe56c,	// (0x0002268e) scroll_handle_pane_g2_ParamLimits

0xe557,	// (0x00022679) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x000237fd) scroll_handle_pane_g_ParamLimits

0x8c94,	// (0x0001cdb6) popup_choice_list_window_ParamLimits

0x8c94,	// (0x0001cdb6) popup_choice_list_window

0x1c27,	// (0x00015d49) choice_list_pane

0x1ccb,	// (0x00015ded) cell_toolbar_pane_t1

0x1cf3,	// (0x00015e15) toolbar_button_pane_ParamLimits

0x2e90,	// (0x00016fb2) ai_gene_pane_1_t2_ParamLimits

0x2e90,	// (0x00016fb2) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00023a19) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00023a19) ai_gene_pane_1_t

0x47fc,	// (0x0001891e) scroll_sc2_left_pane_g1

0x47fc,	// (0x0001891e) scroll_sc2_right_pane_g1

0x17c8,	// (0x000158ea) bg_popup_sub_pane_cp10

0x4806,	// (0x00018928) list_choice_list_pane

0xbf05,	// (0x00020027) list_single_choice_list_pane_ParamLimits

0xbf05,	// (0x00020027) list_single_choice_list_pane

0xca08,	// (0x00020b2a) list_single_choice_list_pane_g1

0xa84f,	// (0x0001e971) list_single_choice_list_pane_t1_ParamLimits

0xa84f,	// (0x0001e971) list_single_choice_list_pane_t1

0x483a,	// (0x0001895c) choice_list_pane_g1

0xbf19,	// (0x0002003b) choice_list_pane_t1

0xc2de,	// (0x00020400) input_focus_pane_cp11

0xe31d,	// (0x0002243f) title_pane_stacon_g2_ParamLimits

0xe31d,	// (0x0002243f) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x000237dc) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x000237dc) title_pane_stacon_g

0x147a,	// (0x0001559c) cursor_press_pane

0x8d3b,	// (0x0001ce5d) popup_fep_hwr_window_ParamLimits

0x8d3b,	// (0x0001ce5d) popup_fep_hwr_window

0xe9ab,	// (0x00022acd) popup_fep_vkb_window_ParamLimits

0xe9ab,	// (0x00022acd) popup_fep_vkb_window

0xbf27,	// (0x00020049) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x00023c4a) fep_vkb_side_pane_g_ParamLimits

0xed90,	// (0x00022eb2) fep_hwr_candidate_pane_ParamLimits

0xed90,	// (0x00022eb2) fep_hwr_candidate_pane

0xedba,	// (0x00022edc) fep_hwr_side_pane_ParamLimits

0xedba,	// (0x00022edc) fep_hwr_side_pane

0xedda,	// (0x00022efc) fep_hwr_top_pane_ParamLimits

0xedda,	// (0x00022efc) fep_hwr_top_pane

0xedf2,	// (0x00022f14) fep_hwr_write_pane_ParamLimits

0xedf2,	// (0x00022f14) fep_hwr_write_pane

0xfb28,	// (0x00023c4a) fep_vkb_side_pane_g

0x4858,	// (0x0001897a) fep_hwr_top_pane_g1

0x486a,	// (0x0001898c) fep_hwr_top_pane_g2

0xee2c,	// (0x00022f4e) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x00023c26) fep_hwr_top_pane_g

0xee41,	// (0x00022f63) fep_hwr_top_text_pane

0xe62f,	// (0x00022751) fep_hwr_top_text_pane_g1

0x48a0,	// (0x000189c2) fep_hwr_top_text_pane_t1

0xeec0,	// (0x00022fe2) fep_hwr_candidate_pane_g1

0x4ae5,	// (0x00018c07) fep_vkb_keypad_pane_g3_ParamLimits

0x4ae5,	// (0x00018c07) fep_vkb_keypad_pane_g3

0x4b0d,	// (0x00018c2f) fep_vkb_keypad_pane_g4_ParamLimits

0x4b0d,	// (0x00018c2f) fep_vkb_keypad_pane_g4

0x4b7c,	// (0x00018c9e) fep_vkb_bottom_pane_g2_ParamLimits

0x4b7c,	// (0x00018c9e) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x00023c51) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x00023c51) fep_vkb_bottom_pane_g

0x47fc,	// (0x0001891e) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x00023c5b) cell_vkb_side_pane_g

0x4c07,	// (0x00018d29) cell_vkb_side_pane_t1

0x4c15,	// (0x00018d37) cell_vkb_side_pane_t1_copy1

0x47fc,	// (0x0001891e) bg_fep_vkb_candidate_pane_g2

0x4d41,	// (0x00018e63) cell_vkb_candidate_pane_ParamLimits

0x48ae,	// (0x000189d0) aid_size_cell_vkb_ParamLimits

0x48ae,	// (0x000189d0) aid_size_cell_vkb

0x4d41,	// (0x00018e63) cell_vkb_candidate_pane

0xeee7,	// (0x00023009) bg_popup_fep_shadow_pane_g1

0xbf41,	// (0x00020063) fep_vkb_bottom_pane_ParamLimits

0xbf41,	// (0x00020063) fep_vkb_bottom_pane

0x4972,	// (0x00018a94) fep_vkb_candidate_pane_ParamLimits

0x4972,	// (0x00018a94) fep_vkb_candidate_pane

0xbf66,	// (0x00020088) fep_vkb_keypad_pane_ParamLimits

0xbf66,	// (0x00020088) fep_vkb_keypad_pane

0xbf9b,	// (0x000200bd) fep_vkb_side_pane_ParamLimits

0xbf9b,	// (0x000200bd) fep_vkb_side_pane

0xbfd7,	// (0x000200f9) fep_vkb_top_pane_ParamLimits

0xbfd7,	// (0x000200f9) fep_vkb_top_pane

0x4a3e,	// (0x00018b60) fep_vkb_top_pane_g1_ParamLimits

0x4a3e,	// (0x00018b60) fep_vkb_top_pane_g1

0x4a4d,	// (0x00018b6f) fep_vkb_top_pane_g2_ParamLimits

0x4a4d,	// (0x00018b6f) fep_vkb_top_pane_g2

0x4a5c,	// (0x00018b7e) fep_vkb_top_pane_g3_ParamLimits

0x4a5c,	// (0x00018b7e) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x00023c41) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x00023c41) fep_vkb_top_pane_g

0x4a7a,	// (0x00018b9c) fep_vkb_top_text_pane_ParamLimits

0x4a7a,	// (0x00018b9c) fep_vkb_top_text_pane

0xc00c,	// (0x0002012e) fep_vkb_side_pane_g1_ParamLimits

0xc00c,	// (0x0002012e) fep_vkb_side_pane_g1

0x4ad4,	// (0x00018bf6) grid_vkb_side_pane_ParamLimits

0x4ad4,	// (0x00018bf6) grid_vkb_side_pane

0xeeef,	// (0x00023011) bg_popup_fep_shadow_pane_g2

0xeef8,	// (0x0002301a) bg_popup_fep_shadow_pane_g3

0xef00,	// (0x00023022) bg_popup_fep_shadow_pane_g4

0xef09,	// (0x0002302b) bg_popup_fep_shadow_pane_g5

0xef13,	// (0x00023035) bg_popup_fep_shadow_pane_g6

0xef1b,	// (0x0002303d) bg_popup_fep_shadow_pane_g7

0xc856,	// (0x00020978) bg_popup_fep_shadow_pane_g8

0x4b2b,	// (0x00018c4d) grid_vkb_keypad_number_pane_ParamLimits

0x4b2b,	// (0x00018c4d) grid_vkb_keypad_number_pane

0x4b3b,	// (0x00018c5d) grid_vkb_keypad_pane_ParamLimits

0x4b3b,	// (0x00018c5d) grid_vkb_keypad_pane

0x4b61,	// (0x00018c83) fep_vkb_bottom_pane_g1_ParamLimits

0x4b61,	// (0x00018c83) fep_vkb_bottom_pane_g1

0x4b8a,	// (0x00018cac) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b8a,	// (0x00018cac) grid_vkb_keypad_bottom_left_pane

0x4b9f,	// (0x00018cc1) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b9f,	// (0x00018cc1) grid_vkb_keypad_bottom_right_pane

0x4bb4,	// (0x00018cd6) fep_vkb_top_text_pane_g1

0xc053,	// (0x00020175) fep_vkb_top_text_pane_t1

0xc065,	// (0x00020187) cell_vkb_side_pane_ParamLimits

0xc065,	// (0x00020187) cell_vkb_side_pane

0x47fc,	// (0x0001891e) cell_vkb_side_pane_g1

0x4c23,	// (0x00018d45) cell_vkb_keypad_pane_ParamLimits

0x4c23,	// (0x00018d45) cell_vkb_keypad_pane

0x4c98,	// (0x00018dba) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x00023c6e) bg_popup_fep_shadow_pane_g

0xef2d,	// (0x0002304f) cell_hwr_side_pane_g1

0xef2d,	// (0x0002304f) cell_hwr_side_pane_g2

0x4ca2,	// (0x00018dc4) cell_vkb_keypad_pane_t1

0xc07b,	// (0x0002019d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc07b,	// (0x0002019d) cell_vkb_keypad_bottom_left_pane

0xc090,	// (0x000201b2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc090,	// (0x000201b2) cell_vkb_keypad_bottom_right_pane

0x47fc,	// (0x0001891e) cell_vkb_keypad_bottom_left_pane_g1

0x47fc,	// (0x0001891e) cell_vkb_keypad_bottom_right_pane_g1

0x4d06,	// (0x00018e28) cell_vkb_keypad_number_pane_ParamLimits

0x4d06,	// (0x00018e28) cell_vkb_keypad_number_pane

0x4d25,	// (0x00018e47) cell_vkb_keypad_number_pane_g1

0x4d2f,	// (0x00018e51) cell_vkb_keypad_number_pane_g2

0x4d38,	// (0x00018e5a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x00023c60) cell_vkb_keypad_number_pane_g

0x4ca2,	// (0x00018dc4) cell_vkb_keypad_number_pane_t1

0x4d5c,	// (0x00018e7e) fep_vkb_candidate_pane_g1

0x0001,

0xfb5f,	// (0x00023c81) cell_hwr_side_pane_g

0x4d75,	// (0x00018e97) cell_hwr_side_pane_t1

0xef37,	// (0x00023059) cell_hwr_side_pane_t1_copy1

0xef45,	// (0x00023067) cell_hwr_candidate_pane_g1

0xef74,	// (0x00023096) cell_hwr_candidate_pane_t1

0x47fc,	// (0x0001891e) cell_vkb_candidate_pane_g2

0x4db9,	// (0x00018edb) cell_vkb_candidate_pane_t1

0xe9d9,	// (0x00022afb) bg_popup_fep_shadow_pane_ParamLimits

0xe9d9,	// (0x00022afb) bg_popup_fep_shadow_pane

0xee0c,	// (0x00022f2e) bg_fep_hwr_top_pane_g4

0x487c,	// (0x0001899e) bg_hwr_side_pane_g1_ParamLimits

0x487c,	// (0x0001899e) bg_hwr_side_pane_g1

0x95ef,	// (0x0001d711) cell_hwr_side_pane_ParamLimits

0x95ef,	// (0x0001d711) cell_hwr_side_pane

0xee56,	// (0x00022f78) fep_hwr_write_pane_g1_ParamLimits

0xee56,	// (0x00022f78) fep_hwr_write_pane_g1

0xee63,	// (0x00022f85) fep_hwr_write_pane_g2_ParamLimits

0xee63,	// (0x00022f85) fep_hwr_write_pane_g2

0xee70,	// (0x00022f92) fep_hwr_write_pane_g3_ParamLimits

0xee70,	// (0x00022f92) fep_hwr_write_pane_g3

0x960f,	// (0x0001d731) fep_hwr_write_pane_g4_ParamLimits

0x960f,	// (0x0001d731) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x00023c2d) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x00023c2d) fep_hwr_write_pane_g

0xee0c,	// (0x00022f2e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xee0c,	// (0x00022f2e) bg_fep_hwr_candidate_pane_g2

0xee7e,	// (0x00022fa0) cell_hwr_candidate_pane_ParamLimits

0xee7e,	// (0x00022fa0) cell_hwr_candidate_pane

0xeec0,	// (0x00022fe2) fep_hwr_candidate_pane_g1_ParamLimits

0x48dc,	// (0x000189fe) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x48dc,	// (0x000189fe) bg_popup_fep_shadow_pane_cp2

0x4a6c,	// (0x00018b8e) fep_vkb_top_pane_g4_ParamLimits

0x4a6c,	// (0x00018b8e) fep_vkb_top_pane_g4

0x4ab2,	// (0x00018bd4) fep_vkb_side_pane_g2_ParamLimits

0x4ab2,	// (0x00018bd4) fep_vkb_side_pane_g2

0xa57a,	// (0x0001e69c) list_setting_pane_t4_ParamLimits

0xa57a,	// (0x0001e69c) list_setting_pane_t4

0xa5f4,	// (0x0001e716) list_setting_number_pane_t5_ParamLimits

0xa5f4,	// (0x0001e716) list_setting_number_pane_t5

0xe685,	// (0x000227a7) list_double_heading_pane_cp2_ParamLimits

0xe685,	// (0x000227a7) list_double_heading_pane_cp2

0x4dc7,	// (0x00018ee9) list_double_heading_pane_g1_cp2_ParamLimits

0x4dc7,	// (0x00018ee9) list_double_heading_pane_g1_cp2

0x4dd3,	// (0x00018ef5) list_double_heading_pane_g2_cp2_ParamLimits

0x4dd3,	// (0x00018ef5) list_double_heading_pane_g2_cp2

0x4de7,	// (0x00018f09) list_double_heading_pane_t1_cp2_ParamLimits

0x4de7,	// (0x00018f09) list_double_heading_pane_t1_cp2

0x4dfd,	// (0x00018f1f) list_double_heading_pane_t2_cp2_ParamLimits

0x4dfd,	// (0x00018f1f) list_double_heading_pane_t2_cp2

0xc2d6,	// (0x000203f8) aid_value_unit2

0xe251,	// (0x00022373) popup_preview_fixed_window

0xc492,	// (0x000205b4) bg_popup_preview_window_pane_cp02

0x4e0f,	// (0x00018f31) list_preview_fixed_pane

0x4e55,	// (0x00018f77) list_empty_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_empty_pane_fp

0x4e55,	// (0x00018f77) list_single_cale_day_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_cale_day_pane_fp

0x4e55,	// (0x00018f77) list_single_graphic_heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_graphic_heading_pane_fp

0x4e55,	// (0x00018f77) list_single_graphic_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_graphic_pane_fp

0x4e55,	// (0x00018f77) list_single_heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_heading_pane_fp

0x4e55,	// (0x00018f77) list_single_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_pane_fp

0x4e6b,	// (0x00018f8d) list_single_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018f8d) list_single_pane_fp_g1

0x4e77,	// (0x00018f99) list_single_pane_fp_g2_ParamLimits

0x4e77,	// (0x00018f99) list_single_pane_fp_g2

0x4e83,	// (0x00018fa5) list_single_pane_fp_g3_ParamLimits

0x4e83,	// (0x00018fa5) list_single_pane_fp_g3

0x4e97,	// (0x00018fb9) list_single_pane_fp_g4_ParamLimits

0x4e97,	// (0x00018fb9) list_single_pane_fp_g4

0x0003,

0xfb72,	// (0x00023c94) list_single_pane_fp_g_ParamLimits

0xfb72,	// (0x00023c94) list_single_pane_fp_g

0x4ea3,	// (0x00018fc5) list_single_pane_fp_t1_ParamLimits

0x4ea3,	// (0x00018fc5) list_single_pane_fp_t1

0x4eba,	// (0x00018fdc) list_single_graphic_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018fdc) list_single_graphic_pane_fp_g1

0x4e6b,	// (0x00018f8d) list_single_graphic_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018f8d) list_single_graphic_pane_fp_g2

0x4e77,	// (0x00018f99) list_single_graphic_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018f99) list_single_graphic_pane_fp_g3

0x4e83,	// (0x00018fa5) list_single_graphic_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fa5) list_single_graphic_pane_fp_g4

0x4e97,	// (0x00018fb9) list_single_graphic_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fb9) list_single_graphic_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023c9d) list_single_graphic_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023c9d) list_single_graphic_pane_fp_g

0x4ec6,	// (0x00018fe8) list_single_graphic_pane_fp_t1_ParamLimits

0x4ec6,	// (0x00018fe8) list_single_graphic_pane_fp_t1

0x4eba,	// (0x00018fdc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018fdc) list_single_graphic_heading_pane_fp_g1

0x4e6b,	// (0x00018f8d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018f8d) list_single_graphic_heading_pane_fp_g2

0x4e77,	// (0x00018f99) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018f99) list_single_graphic_heading_pane_fp_g3

0x4e83,	// (0x00018fa5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fa5) list_single_graphic_heading_pane_fp_g4

0x4e97,	// (0x00018fb9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fb9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023c9d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023c9d) list_single_graphic_heading_pane_fp_g

0x4edc,	// (0x00018ffe) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4edc,	// (0x00018ffe) list_single_graphic_heading_pane_fp_t1

0x4ef2,	// (0x00019014) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4ef2,	// (0x00019014) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb86,	// (0x00023ca8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb86,	// (0x00023ca8) list_single_graphic_heading_pane_fp_t

0x4f04,	// (0x00019026) list_single_cale_day_pane_fp_g1_ParamLimits

0x4f04,	// (0x00019026) list_single_cale_day_pane_fp_g1

0x4f3c,	// (0x0001905e) list_single_cale_day_pane_fp_g2_ParamLimits

0x4f3c,	// (0x0001905e) list_single_cale_day_pane_fp_g2

0x4f48,	// (0x0001906a) list_single_cale_day_pane_fp_g3_ParamLimits

0x4f48,	// (0x0001906a) list_single_cale_day_pane_fp_g3

0x4f70,	// (0x00019092) list_single_cale_day_pane_fp_g4_ParamLimits

0x4f70,	// (0x00019092) list_single_cale_day_pane_fp_g4

0x4f94,	// (0x000190b6) list_single_cale_day_pane_fp_g5_ParamLimits

0x4f94,	// (0x000190b6) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8b,	// (0x00023cad) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8b,	// (0x00023cad) list_single_cale_day_pane_fp_g

0x4fb8,	// (0x000190da) list_single_cale_day_pane_fp_t1_ParamLimits

0x4fb8,	// (0x000190da) list_single_cale_day_pane_fp_t1

0x4fde,	// (0x00019100) list_single_cale_day_pane_fp_t2_ParamLimits

0x4fde,	// (0x00019100) list_single_cale_day_pane_fp_t2

0x4ff7,	// (0x00019119) list_single_cale_day_pane_fp_t3_ParamLimits

0x4ff7,	// (0x00019119) list_single_cale_day_pane_fp_t3

0x0002,

0xfb96,	// (0x00023cb8) list_single_cale_day_pane_fp_t_ParamLimits

0xfb96,	// (0x00023cb8) list_single_cale_day_pane_fp_t

0x4e6b,	// (0x00018f8d) list_empty_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018f8d) list_empty_pane_fp_g1

0x5010,	// (0x00019132) list_empty_pane_fp_t1

0x501e,	// (0x00019140) list_empty_pane_fp_t2

0x0001,

0xfb9d,	// (0x00023cbf) list_empty_pane_fp_t

0x4e6b,	// (0x00018f8d) list_single_heading_pane_fp_g1_ParamLimits

0x4e6b,	// (0x00018f8d) list_single_heading_pane_fp_g1

0x4e77,	// (0x00018f99) list_single_heading_pane_fp_g2_ParamLimits

0x4e77,	// (0x00018f99) list_single_heading_pane_fp_g2

0x4e83,	// (0x00018fa5) list_single_heading_pane_fp_g3_ParamLimits

0x4e83,	// (0x00018fa5) list_single_heading_pane_fp_g3

0x0002,

0xfba2,	// (0x00023cc4) list_single_heading_pane_fp_g_ParamLimits

0xfba2,	// (0x00023cc4) list_single_heading_pane_fp_g

0x502c,	// (0x0001914e) list_single_heading_pane_fp_t1_ParamLimits

0x502c,	// (0x0001914e) list_single_heading_pane_fp_t1

0x503e,	// (0x00019160) list_single_heading_pane_fp_t2_ParamLimits

0x503e,	// (0x00019160) list_single_heading_pane_fp_t2

0x0001,

0xfba9,	// (0x00023ccb) list_single_heading_pane_fp_t_ParamLimits

0xfba9,	// (0x00023ccb) list_single_heading_pane_fp_t

0xa89b,	// (0x0001e9bd) aid_size_cell_fast

0xc475,	// (0x00020597) soft_indicator_pane_cp1_t1

0xa8a4,	// (0x0001e9c6) cell_app_pane_cp2_ParamLimits

0xa8a4,	// (0x0001e9c6) cell_app_pane_cp2

0xed79,	// (0x00022e9b) fep_hwr_candidate_drop_down_list_pane

0xeeda,	// (0x00022ffc) fep_hwr_candidate_pane_g3_ParamLimits

0xeeda,	// (0x00022ffc) fep_hwr_candidate_pane_g3

0xca10,	// (0x00020b32) fep_hwr_candidate_pane_g4_ParamLimits

0xca10,	// (0x00020b32) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x00023c3a) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x00023c3a) fep_hwr_candidate_pane_g

0x4961,	// (0x00018a83) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4961,	// (0x00018a83) fep_vkb_candidate_drop_down_list_pane

0x4d64,	// (0x00018e86) fep_vkb_candidate_pane_g3

0x4d6c,	// (0x00018e8e) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x00023c67) fep_vkb_candidate_pane_g

0xef45,	// (0x00023067) cell_hwr_candidate_pane_g1_ParamLimits

0xef53,	// (0x00023075) cell_hwr_candidate_pane_g3_ParamLimits

0xef53,	// (0x00023075) cell_hwr_candidate_pane_g3

0x5c3e,	// (0x00019d60) cell_hwr_candidate_pane_g4_ParamLimits

0x5c3e,	// (0x00019d60) cell_hwr_candidate_pane_g4

0x0002,

0xfb64,	// (0x00023c86) cell_hwr_candidate_pane_g_ParamLimits

0xfb64,	// (0x00023c86) cell_hwr_candidate_pane_g

0x4d83,	// (0x00018ea5) cell_vkb_candidate_pane_g3_ParamLimits

0x4d83,	// (0x00018ea5) cell_vkb_candidate_pane_g3

0x4d9e,	// (0x00018ec0) cell_vkb_candidate_pane_g4_ParamLimits

0x4d9e,	// (0x00018ec0) cell_vkb_candidate_pane_g4

0xc0ab,	// (0x000201cd) cell_app_pane_cp2_g1_ParamLimits

0xc0ab,	// (0x000201cd) cell_app_pane_cp2_g1

0x5072,	// (0x00019194) cell_app_pane_cp2_g2_ParamLimits

0x5072,	// (0x00019194) cell_app_pane_cp2_g2

0x0001,

0xfbae,	// (0x00023cd0) cell_app_pane_cp2_g_ParamLimits

0xfbae,	// (0x00023cd0) cell_app_pane_cp2_g

0x507e,	// (0x000191a0) cell_app_pane_cp2_t1_ParamLimits

0x507e,	// (0x000191a0) cell_app_pane_cp2_t1

0xc778,	// (0x0002089a) grid_highlight_pane_cp1_ParamLimits

0xc778,	// (0x0002089a) grid_highlight_pane_cp1

0xef92,	// (0x000230b4) cell_hwr_candidate_pane_cp1_ParamLimits

0xef92,	// (0x000230b4) cell_hwr_candidate_pane_cp1

0xef45,	// (0x00023067) fep_hwr_candidate_drop_down_list_pane_g1

0xefb1,	// (0x000230d3) fep_hwr_candidate_drop_down_list_pane_g2

0xefbe,	// (0x000230e0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb3,	// (0x00023cd5) fep_hwr_candidate_drop_down_list_pane_g

0xefcb,	// (0x000230ed) fep_hwr_candidate_drop_down_list_scroll_pane

0xefd4,	// (0x000230f6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xefd4,	// (0x000230f6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xefe1,	// (0x00023103) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xefe1,	// (0x00023103) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xefee,	// (0x00023110) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xefee,	// (0x00023110) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeffb,	// (0x0002311d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeffb,	// (0x0002311d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf016,	// (0x00023138) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf016,	// (0x00023138) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf031,	// (0x00023153) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf031,	// (0x00023153) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf04c,	// (0x0002316e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf04c,	// (0x0002316e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf067,	// (0x00023189) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf067,	// (0x00023189) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x00023cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x00023cdc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5090,	// (0x000191b2) cell_vkb_candidate_pane_cp1_ParamLimits

0x5090,	// (0x000191b2) cell_vkb_candidate_pane_cp1

0x4a6c,	// (0x00018b8e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a6c,	// (0x00018b8e) fep_vkb_candidate_drop_down_list_pane_g1

0x50b0,	// (0x000191d2) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x50b0,	// (0x000191d2) fep_vkb_candidate_drop_down_list_pane_g2

0x50bd,	// (0x000191df) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x50bd,	// (0x000191df) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcb,	// (0x00023ced) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcb,	// (0x00023ced) fep_vkb_candidate_drop_down_list_pane_g

0x50ca,	// (0x000191ec) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x50ca,	// (0x000191ec) fep_vkb_candidate_drop_down_list_scroll_pane

0x50d7,	// (0x000191f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x50d7,	// (0x000191f9) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x50e4,	// (0x00019206) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x50e4,	// (0x00019206) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x50f0,	// (0x00019212) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x50f0,	// (0x00019212) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x50fc,	// (0x0001921e) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x50fc,	// (0x0001921e) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x511d,	// (0x0001923f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x511d,	// (0x0001923f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x513e,	// (0x00019260) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x513e,	// (0x00019260) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x515f,	// (0x00019281) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x515f,	// (0x00019281) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5180,	// (0x000192a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5180,	// (0x000192a2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x00023cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x00023cf4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9d13,	// (0x0001de35) title_pane_g1_ParamLimits

0x9d26,	// (0x0001de48) title_pane_g2_ParamLimits

0xf54e,	// (0x00023670) title_pane_g_ParamLimits

0xe61f,	// (0x00022741) aid_call2_pane

0xe627,	// (0x00022749) aid_call_pane

0xe62f,	// (0x00022751) popup_clock_analogue_window_g1

0xe62f,	// (0x00022751) popup_clock_analogue_window_g2

0xe637,	// (0x00022759) popup_clock_analogue_window_g3

0xe640,	// (0x00022762) popup_clock_analogue_window_g4

0xc2e8,	// (0x0002040a) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x0002380b) popup_clock_analogue_window_g

0xe648,	// (0x0002276a) popup_clock_analogue_window_t1

0xe6a6,	// (0x000227c8) clock_digital_number_pane_ParamLimits

0xe6a6,	// (0x000227c8) clock_digital_number_pane

0xe6b2,	// (0x000227d4) clock_digital_number_pane_cp02_ParamLimits

0xe6b2,	// (0x000227d4) clock_digital_number_pane_cp02

0xe6be,	// (0x000227e0) clock_digital_number_pane_cp03_ParamLimits

0xe6be,	// (0x000227e0) clock_digital_number_pane_cp03

0xe6ca,	// (0x000227ec) clock_digital_number_pane_cp04_ParamLimits

0xe6ca,	// (0x000227ec) clock_digital_number_pane_cp04

0xe6d6,	// (0x000227f8) clock_digital_separator_pane_ParamLimits

0xe6d6,	// (0x000227f8) clock_digital_separator_pane

0xe6e2,	// (0x00022804) popup_clock_digital_window_t1_ParamLimits

0xe6e2,	// (0x00022804) popup_clock_digital_window_t1

0xc2e8,	// (0x0002040a) clock_digital_number_pane_g1

0xc2e8,	// (0x0002040a) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00023816) clock_digital_number_pane_g

0xc2e8,	// (0x0002040a) clock_digital_separator_pane_g1

0xc2e8,	// (0x0002040a) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00023816) clock_digital_separator_pane_g

0xadf8,	// (0x0001ef1a) aid_fill_nsta_ParamLimits

0xaf2e,	// (0x0001f050) indicator_nsta_pane_ParamLimits

0x1ab7,	// (0x00015bd9) popup_clock_analogue_window

0x1ab7,	// (0x00015bd9) popup_clock_digital_window

0xc9fa,	// (0x00020b1c) grid_indicator_nsta_pane_ParamLimits

0x41c0,	// (0x000182e2) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00023bba) clock_nsta_pane_t

0xe4c4,	// (0x000225e6) aid_size_max_handle

0x8a79,	// (0x0001cb9b) aid_size_min_handle

0x147a,	// (0x0001559c) editor_scroll_pane

0x519b,	// (0x000192bd) ex_editor_pane

0xc905,	// (0x00020a27) scroll_pane_cp13

0xc6c2,	// (0x000207e4) scroll_pane_cp14

0xe67d,	// (0x0002279f) scroll_pane_cp36

0xaa2f,	// (0x0001eb51) list_single_graphic_hl_pane_cp2_ParamLimits

0xaa2f,	// (0x0001eb51) list_single_graphic_hl_pane_cp2

0xba96,	// (0x0001fbb8) list_single_graphic_hl_pane_ParamLimits

0xba96,	// (0x0001fbb8) list_single_graphic_hl_pane

0xc0c9,	// (0x000201eb) aid_size_min_hl_cp1

0x51ac,	// (0x000192ce) list_highlight_pane_cp34_ParamLimits

0x51ac,	// (0x000192ce) list_highlight_pane_cp34

0x51bd,	// (0x000192df) list_single_graphic_hl_pane_g1_ParamLimits

0x51bd,	// (0x000192df) list_single_graphic_hl_pane_g1

0xc0d2,	// (0x000201f4) list_single_graphic_hl_pane_g2_ParamLimits

0xc0d2,	// (0x000201f4) list_single_graphic_hl_pane_g2

0xc0d2,	// (0x000201f4) list_single_graphic_hl_pane_g3_ParamLimits

0xc0d2,	// (0x000201f4) list_single_graphic_hl_pane_g3

0x13b3,	// (0x000154d5) list_single_graphic_hl_pane_g4_ParamLimits

0x13b3,	// (0x000154d5) list_single_graphic_hl_pane_g4

0x523c,	// (0x0001935e) list_single_graphic_hl_pane_g5_ParamLimits

0x523c,	// (0x0001935e) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00023d05) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00023d05) list_single_graphic_hl_pane_g

0xc0de,	// (0x00020200) list_single_graphic_hl_pane_t1_ParamLimits

0xc0de,	// (0x00020200) list_single_graphic_hl_pane_t1

0x520c,	// (0x0001932e) aid_size_min_hl_cp2

0x5215,	// (0x00019337) list_highlight_pane_cp34_cp2_ParamLimits

0x5215,	// (0x00019337) list_highlight_pane_cp34_cp2

0x51bd,	// (0x000192df) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x51bd,	// (0x000192df) list_single_graphic_hl_pane_g1_cp2

0x5222,	// (0x00019344) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5222,	// (0x00019344) list_single_graphic_hl_pane_g2_cp2

0xc0f4,	// (0x00020216) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc0f4,	// (0x00020216) list_single_graphic_hl_pane_g3_cp2

0x13b3,	// (0x000154d5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x13b3,	// (0x000154d5) list_single_graphic_hl_pane_g4_cp2

0x523c,	// (0x0001935e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x523c,	// (0x0001935e) list_single_graphic_hl_pane_g5_cp2

0x8b2b,	// (0x0001cc4d) control_pane_g4_ParamLimits

0x8b2b,	// (0x0001cc4d) control_pane_g4

0x17c8,	// (0x000158ea) bg_popup_sub_pane_cp10_ParamLimits

0x4806,	// (0x00018928) list_choice_list_pane_ParamLimits

0x4815,	// (0x00018937) scroll_pane_cp23

0xc492,	// (0x000205b4) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e0f,	// (0x00018f31) list_preview_fixed_pane_ParamLimits

0x4e25,	// (0x00018f47) list_preview_fixed_pane_cp_ParamLimits

0x4e25,	// (0x00018f47) list_preview_fixed_pane_cp

0x4e31,	// (0x00018f53) popup_preview_fixed_window_g1_ParamLimits

0x4e31,	// (0x00018f53) popup_preview_fixed_window_g1

0x4e3d,	// (0x00018f5f) popup_preview_fixed_window_g2_ParamLimits

0x4e3d,	// (0x00018f5f) popup_preview_fixed_window_g2

0x0002,

0xfb6b,	// (0x00023c8d) popup_preview_fixed_window_g_ParamLimits

0xfb6b,	// (0x00023c8d) popup_preview_fixed_window_g

0xe401,	// (0x00022523) aid_navi_side_left_pane_ParamLimits

0xe416,	// (0x00022538) aid_navi_side_right_pane_ParamLimits

0xe42e,	// (0x00022550) navi_icon_pane_stacon_ParamLimits

0xe442,	// (0x00022564) navi_navi_pane_stacon_ParamLimits

0xe42e,	// (0x00022550) navi_text_pane_stacon_ParamLimits

0xe176,	// (0x00022298) main_text_info_pane

0x5266,	// (0x00019388) listscroll_text_info_pane

0x526e,	// (0x00019390) list_text_info_pane_ParamLimits

0x526e,	// (0x00019390) list_text_info_pane

0x527d,	// (0x0001939f) scroll_pane_cp24_ParamLimits

0x527d,	// (0x0001939f) scroll_pane_cp24

0xc102,	// (0x00020224) list_text_info_pane_t1_ParamLimits

0xc102,	// (0x00020224) list_text_info_pane_t1

0x8cb0,	// (0x0001cdd2) popup_fast_swap2_window_ParamLimits

0x8cb0,	// (0x0001cdd2) popup_fast_swap2_window

0x52cf,	// (0x000193f1) aid_size_cell_fast2

0xc2de,	// (0x00020400) bg_popup_window_pane_cp17

0x2253,	// (0x00016375) heading_pane_cp2

0xc5c6,	// (0x000206e8) listscroll_fast2_pane

0x52d9,	// (0x000193fb) grid_fast2_pane

0x52e3,	// (0x00019405) listscroll_fast2_pane_g1

0x52eb,	// (0x0001940d) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x00023d10) listscroll_fast2_pane_g

0xc905,	// (0x00020a27) scroll_pane_cp26

0x52f5,	// (0x00019417) cell_fast2_pane_ParamLimits

0x52f5,	// (0x00019417) cell_fast2_pane

0x530a,	// (0x0001942c) cell_fast2_pane_g1

0x5313,	// (0x00019435) cell_fast2_pane_g2

0x531c,	// (0x0001943e) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00023d15) cell_fast2_pane_g

0xc5f9,	// (0x0002071b) grid_highlight_pane_cp9

0xe993,	// (0x00022ab5) main_eswt_pane_ParamLimits

0xe993,	// (0x00022ab5) main_eswt_pane

0x5292,	// (0x000193b4) list_single_text_info_pane

0x5324,	// (0x00019446) eswt_ctrl_button_pane

0x5324,	// (0x00019446) eswt_ctrl_canvas_pane

0xc11e,	// (0x00020240) eswt_ctrl_combo_pane

0x5324,	// (0x00019446) eswt_ctrl_default_pane

0x5324,	// (0x00019446) eswt_ctrl_label_pane

0x5334,	// (0x00019456) eswt_ctrl_wait_pane

0xc126,	// (0x00020248) eswt_shell_pane

0xc2de,	// (0x00020400) listscroll_eswt_app_pane

0x535c,	// (0x0001947e) popup_eswt_tasktip_window_ParamLimits

0x535c,	// (0x0001947e) popup_eswt_tasktip_window

0x1e1f,	// (0x00015f41) bg_popup_window_pane_cp18

0x536d,	// (0x0001948f) eswt_control_pane_g1_ParamLimits

0x536d,	// (0x0001948f) eswt_control_pane_g1

0x537a,	// (0x0001949c) eswt_control_pane_g2_ParamLimits

0x537a,	// (0x0001949c) eswt_control_pane_g2

0x5387,	// (0x000194a9) eswt_control_pane_g3_ParamLimits

0x5387,	// (0x000194a9) eswt_control_pane_g3

0x5394,	// (0x000194b6) eswt_control_pane_g4_ParamLimits

0x5394,	// (0x000194b6) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00023d1c) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00023d1c) eswt_control_pane_g

0xc778,	// (0x0002089a) bg_button_pane_ParamLimits

0xc778,	// (0x0002089a) bg_button_pane

0xc60e,	// (0x00020730) common_borders_pane_copy2_ParamLimits

0xc60e,	// (0x00020730) common_borders_pane_copy2

0x53a1,	// (0x000194c3) control_button_pane_g1_ParamLimits

0x53a1,	// (0x000194c3) control_button_pane_g1

0x53ad,	// (0x000194cf) control_button_pane_g2_ParamLimits

0x53ad,	// (0x000194cf) control_button_pane_g2

0x53b9,	// (0x000194db) control_button_pane_g3_ParamLimits

0x53b9,	// (0x000194db) control_button_pane_g3

0x0002,

0xfc03,	// (0x00023d25) control_button_pane_g_ParamLimits

0xfc03,	// (0x00023d25) control_button_pane_g

0x53cd,	// (0x000194ef) control_button_pane_t1

0x53db,	// (0x000194fd) control_button_pane_t2

0x0001,

0xfc0a,	// (0x00023d2c) control_button_pane_t

0x1cff,	// (0x00015e21) bg_button_pane_g1

0x1d0f,	// (0x00015e31) bg_button_pane_g2

0x1d07,	// (0x00015e29) bg_button_pane_g3

0x1d1f,	// (0x00015e41) bg_button_pane_g4

0x1d17,	// (0x00015e39) bg_button_pane_g5

0x1d27,	// (0x00015e49) bg_button_pane_g6

0x1d2f,	// (0x00015e51) bg_button_pane_g7

0x1d3f,	// (0x00015e61) bg_button_pane_g8

0x1d37,	// (0x00015e59) bg_button_pane_g9

0x0008,

0xf84b,	// (0x0002396d) bg_button_pane_g

0x47c1,	// (0x000188e3) common_borders_pane_ParamLimits

0x47c1,	// (0x000188e3) common_borders_pane

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy1_ParamLimits

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy1

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy1_ParamLimits

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy1

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy1_ParamLimits

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy1

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy1_ParamLimits

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy1

0x47fc,	// (0x0001891e) bg_eswt_ctrl_canvas_pane_g1

0x47c1,	// (0x000188e3) common_borders_pane_cp2_ParamLimits

0x47c1,	// (0x000188e3) common_borders_pane_cp2

0x47c1,	// (0x000188e3) common_borders_pane_cp3_ParamLimits

0x47c1,	// (0x000188e3) common_borders_pane_cp3

0x53e9,	// (0x0001950b) separator_horizontal_pane

0x53f1,	// (0x00019513) separator_vertical_pane

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy2_ParamLimits

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy2

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy2_ParamLimits

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy2

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy2_ParamLimits

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy2

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy2_ParamLimits

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy2

0xc2de,	// (0x00020400) common_borders_pane_cp4

0x53fa,	// (0x0001951c) separator_horizontal_pane_g1

0x5403,	// (0x00019525) separator_horizontal_pane_g2

0x540c,	// (0x0001952e) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x00023d31) separator_horizontal_pane_g

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy3_ParamLimits

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy3

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy3_ParamLimits

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy3

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy3_ParamLimits

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy3

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy3_ParamLimits

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy3

0xc2de,	// (0x00020400) common_borders_pane_cp5

0x5415,	// (0x00019537) separator_vertical_pane_g1

0x541e,	// (0x00019540) separator_vertical_pane_g2

0x5427,	// (0x00019549) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x00023d38) separator_vertical_pane_g

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy4_ParamLimits

0x536d,	// (0x0001948f) eswt_control_pane_g1_copy4

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy4_ParamLimits

0x537a,	// (0x0001949c) eswt_control_pane_g2_copy4

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy4_ParamLimits

0x5387,	// (0x000194a9) eswt_control_pane_g3_copy4

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy4_ParamLimits

0x5394,	// (0x000194b6) eswt_control_pane_g4_copy4

0xc146,	// (0x00020268) eswt_ctrl_combo_button_pane

0xc14e,	// (0x00020270) eswt_ctrl_input_pane

0xc156,	// (0x00020278) popup_choice_list_window_cp70

0xc15e,	// (0x00020280) eswt_ctrl_input_pane_t1

0xc2de,	// (0x00020400) input_focus_pane_cp70

0x47c1,	// (0x000188e3) bg_button_pane_cp70_ParamLimits

0x47c1,	// (0x000188e3) bg_button_pane_cp70

0xc16c,	// (0x0002028e) eswt_ctrl_combo_button_pane_g1

0x545e,	// (0x00019580) wait_bar_pane_cp70

0x1e1f,	// (0x00015f41) bg_popup_window_pane_cp70_ParamLimits

0x1e1f,	// (0x00015f41) bg_popup_window_pane_cp70

0x5466,	// (0x00019588) popup_eswt_tasktip_window_t1

0x547c,	// (0x0001959e) wait_bar_pane_cp71_ParamLimits

0x547c,	// (0x0001959e) wait_bar_pane_cp71

0x5488,	// (0x000195aa) grid_eswt_app_pane

0xe502,	// (0x00022624) scroll_pane_cp70

0xc174,	// (0x00020296) cell_eswt_app_pane_ParamLimits

0xc174,	// (0x00020296) cell_eswt_app_pane

0xc19e,	// (0x000202c0) cell_eswt_app_pane_g1_ParamLimits

0xc19e,	// (0x000202c0) cell_eswt_app_pane_g1

0xc1cd,	// (0x000202ef) cell_eswt_app_pane_g2_ParamLimits

0xc1cd,	// (0x000202ef) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x00023d3f) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x00023d3f) cell_eswt_app_pane_g

0xc1f1,	// (0x00020313) cell_eswt_app_pane_t1_ParamLimits

0xc1f1,	// (0x00020313) cell_eswt_app_pane_t1

0x5546,	// (0x00019668) grid_highlight_pane_cp70_ParamLimits

0x5546,	// (0x00019668) grid_highlight_pane_cp70

0x134f,	// (0x00015471) set_content_pane_g1

0xadad,	// (0x0001eecf) status_small_volume_pane

0x9624,	// (0x0001d746) status_small_volume_pane_g1

0x962c,	// (0x0001d74e) volume_small2_pane

0x9635,	// (0x0001d757) volume_small2_pane_g1

0x963e,	// (0x0001d760) volume_small2_pane_g2

0x9647,	// (0x0001d769) volume_small2_pane_g3

0x9650,	// (0x0001d772) volume_small2_pane_g4

0x9659,	// (0x0001d77b) volume_small2_pane_g5

0x9662,	// (0x0001d784) volume_small2_pane_g6

0x966b,	// (0x0001d78d) volume_small2_pane_g7

0x9674,	// (0x0001d796) volume_small2_pane_g8

0x967d,	// (0x0001d79f) volume_small2_pane_g9

0x9686,	// (0x0001d7a8) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x00023d44) volume_small2_pane_g

0x4bb4,	// (0x00018cd6) fep_vkb_top_text_pane_g1_ParamLimits

0xc053,	// (0x00020175) fep_vkb_top_text_pane_t1_ParamLimits

0x4e49,	// (0x00018f6b) popup_preview_fixed_window_g3_ParamLimits

0x4e49,	// (0x00018f6b) popup_preview_fixed_window_g3

0x934d,	// (0x0001d46f) popup_toolbar_trans_pane

0xb8d8,	// (0x0001f9fa) aid_height_set_list_ParamLimits

0x31ad,	// (0x000172cf) aid_size_parent_ParamLimits

0x17c8,	// (0x000158ea) list_highlight_pane_cp2_ParamLimits

0x134f,	// (0x00015471) set_content_pane_g1_ParamLimits

0xbaa8,	// (0x0001fbca) list_single_image_pane_ParamLimits

0xbaa8,	// (0x0001fbca) list_single_image_pane

0xc223,	// (0x00020345) aid_size_cell_image_ParamLimits

0xc223,	// (0x00020345) aid_size_cell_image

0xc230,	// (0x00020352) grid_single_image_pane_ParamLimits

0xc230,	// (0x00020352) grid_single_image_pane

0x4e77,	// (0x00018f99) list_single_image_pane_g1_ParamLimits

0x4e77,	// (0x00018f99) list_single_image_pane_g1

0x4e83,	// (0x00018fa5) list_single_image_pane_g2_ParamLimits

0x4e83,	// (0x00018fa5) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x00023d59) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x00023d59) list_single_image_pane_g

0x556d,	// (0x0001968f) list_single_image_pane_t1_ParamLimits

0x556d,	// (0x0001968f) list_single_image_pane_t1

0xc23c,	// (0x0002035e) cell_image_list_pane_ParamLimits

0xc23c,	// (0x0002035e) cell_image_list_pane

0xc250,	// (0x00020372) cell_image_list_pane_g1

0xc259,	// (0x0002037b) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x00023d5e) cell_image_list_pane_g

0xc262,	// (0x00020384) aid_size_cell_tb_trans_pane

0xc778,	// (0x0002089a) bg_tb_trans_pane

0xc274,	// (0x00020396) grid_tb_trans_pane

0x1cff,	// (0x00015e21) bg_tb_trans_pane_g1

0x1d0f,	// (0x00015e31) bg_tb_trans_pane_g2

0x1d07,	// (0x00015e29) bg_tb_trans_pane_g3

0x1d1f,	// (0x00015e41) bg_tb_trans_pane_g4

0x1d17,	// (0x00015e39) bg_tb_trans_pane_g5

0x1d3f,	// (0x00015e61) bg_tb_trans_pane_g6

0x1d37,	// (0x00015e59) bg_tb_trans_pane_g7

0x1d27,	// (0x00015e49) bg_tb_trans_pane_g8

0x1d2f,	// (0x00015e51) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x00023d63) bg_tb_trans_pane_g

0xc288,	// (0x000203aa) cell_toolbar_trans_pane_ParamLimits

0xc288,	// (0x000203aa) cell_toolbar_trans_pane

0x47fc,	// (0x0001891e) cell_toolbar_trans_pane_g1

0xbd63,	// (0x0001fe85) list_form2_midp_pane_t1

0xbd71,	// (0x0001fe93) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00023c00) list_form2_midp_pane_t

0x439c,	// (0x000184be) scroll_pane_cp51_ParamLimits

0x45a5,	// (0x000186c7) form2_midp_wait_pane_g1

0x45ae,	// (0x000186d0) form2_midp_wait_pane_g2

0x45b7,	// (0x000186d9) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x00023c15) form2_midp_wait_pane_g

0xc34e,	// (0x00020470) list_highlight_pane_cp21_ParamLimits

0x45ff,	// (0x00018721) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x460e,	// (0x00018730) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x33b0,	// (0x000174d2) list_single_2graphic_im_pane_ParamLimits

0x33b0,	// (0x000174d2) list_single_2graphic_im_pane

0xca1d,	// (0x00020b3f) list_single_2graphic_im_pane_g1_ParamLimits

0xca1d,	// (0x00020b3f) list_single_2graphic_im_pane_g1

0xca2e,	// (0x00020b50) list_single_2graphic_im_pane_g2_ParamLimits

0xca2e,	// (0x00020b50) list_single_2graphic_im_pane_g2

0xca3a,	// (0x00020b5c) list_single_2graphic_im_pane_g3_ParamLimits

0xca3a,	// (0x00020b5c) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x00023d76) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x00023d76) list_single_2graphic_im_pane_g

0xca4e,	// (0x00020b70) list_single_2graphic_im_pane_t1_ParamLimits

0xca4e,	// (0x00020b70) list_single_2graphic_im_pane_t1

0x4e55,	// (0x00018f77) list_single_graphic_2heading_pane_fp_ParamLimits

0x4e55,	// (0x00018f77) list_single_graphic_2heading_pane_fp

0x4eba,	// (0x00018fdc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4eba,	// (0x00018fdc) list_single_graphic_2heading_pane_fp_g1

0x4e6b,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4e6b,	// (0x00018f8d) list_single_graphic_2heading_pane_fp_g2

0x4e77,	// (0x00018f99) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4e77,	// (0x00018f99) list_single_graphic_2heading_pane_fp_g3

0x4e83,	// (0x00018fa5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4e83,	// (0x00018fa5) list_single_graphic_2heading_pane_fp_g4

0x4e97,	// (0x00018fb9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4e97,	// (0x00018fb9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7b,	// (0x00023c9d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7b,	// (0x00023c9d) list_single_graphic_2heading_pane_fp_g

0x5663,	// (0x00019785) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x5663,	// (0x00019785) list_single_graphic_2heading_pane_fp_t1

0x4ef2,	// (0x00019014) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4ef2,	// (0x00019014) list_single_graphic_2heading_pane_fp_t2

0x5679,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5679,	// (0x0001979b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x00023d7f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x00023d7f) list_single_graphic_2heading_pane_fp_t

0x4888,	// (0x000189aa) fep_hwr_write_pane_g5_ParamLimits

0x4888,	// (0x000189aa) fep_hwr_write_pane_g5

0x4894,	// (0x000189b6) fep_hwr_write_pane_g6_ParamLimits

0x4894,	// (0x000189b6) fep_hwr_write_pane_g6

0xc126,	// (0x00020248) eswt_shell_pane_ParamLimits

0x1e1f,	// (0x00015f41) bg_popup_window_pane_cp18_ParamLimits

0x30e3,	// (0x00017205) heading_pane_cp70

0x5466,	// (0x00019588) popup_eswt_tasktip_window_t1_ParamLimits

0xae53,	// (0x0001ef75) aid_touch_tab_arrow_left

0xae69,	// (0x0001ef8b) aid_touch_tab_arrow_right

0x9d3e,	// (0x0001de60) title_pane_g3_ParamLimits

0x9d3e,	// (0x0001de60) title_pane_g3

0xc70f,	// (0x00020831) set_value_pane_g1

0x934d,	// (0x0001d46f) popup_toolbar_trans_pane_ParamLimits

0xc262,	// (0x00020384) aid_size_cell_tb_trans_pane_ParamLimits

0xc778,	// (0x0002089a) bg_tb_trans_pane_ParamLimits

0xc274,	// (0x00020396) grid_tb_trans_pane_ParamLimits

0xc492,	// (0x000205b4) cont_note_pane_ParamLimits

0xc492,	// (0x000205b4) cont_note_pane

0xc60e,	// (0x00020730) cont_snote2_single_text_pane_ParamLimits

0xc60e,	// (0x00020730) cont_snote2_single_text_pane

0xc60e,	// (0x00020730) cont_snote2_single_graphic_pane_ParamLimits

0xc60e,	// (0x00020730) cont_snote2_single_graphic_pane

0x2466,	// (0x00016588) cont_note_wait_pane_ParamLimits

0x2466,	// (0x00016588) cont_note_wait_pane

0x2466,	// (0x00016588) cont_note_image_pane_ParamLimits

0x2466,	// (0x00016588) cont_note_image_pane

0x568f,	// (0x000197b1) popup_note2_window_g1_ParamLimits

0x568f,	// (0x000197b1) popup_note2_window_g1

0xca8c,	// (0x00020bae) popup_note2_window_t1_ParamLimits

0xca8c,	// (0x00020bae) popup_note2_window_t1

0xcad1,	// (0x00020bf3) popup_note2_window_t2_ParamLimits

0xcad1,	// (0x00020bf3) popup_note2_window_t2

0xcb16,	// (0x00020c38) popup_note2_window_t3_ParamLimits

0xcb16,	// (0x00020c38) popup_note2_window_t3

0x578f,	// (0x000198b1) popup_note2_window_t4_ParamLimits

0x578f,	// (0x000198b1) popup_note2_window_t4

0xc516,	// (0x00020638) popup_note2_window_t5_ParamLimits

0xc516,	// (0x00020638) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00023d8b) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00023d8b) popup_note2_window_t

0x57be,	// (0x000198e0) popup_note2_image_window_g1_ParamLimits

0x57be,	// (0x000198e0) popup_note2_image_window_g1

0xcb5b,	// (0x00020c7d) popup_note2_image_window_g2_ParamLimits

0xcb5b,	// (0x00020c7d) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00023d96) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00023d96) popup_note2_image_window_g

0x57dc,	// (0x000198fe) popup_note2_image_window_t1_ParamLimits

0x57dc,	// (0x000198fe) popup_note2_image_window_t1

0x57f4,	// (0x00019916) popup_note2_image_window_t2_ParamLimits

0x57f4,	// (0x00019916) popup_note2_image_window_t2

0x580c,	// (0x0001992e) popup_note2_image_window_t3_ParamLimits

0x580c,	// (0x0001992e) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00023d9b) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00023d9b) popup_note2_image_window_t

0x2474,	// (0x00016596) popup_note2_wait_window_g1_ParamLimits

0x2474,	// (0x00016596) popup_note2_wait_window_g1

0x2480,	// (0x000165a2) popup_note2_wait_window_g2_ParamLimits

0x2480,	// (0x000165a2) popup_note2_wait_window_g2

0x248c,	// (0x000165ae) popup_note2_wait_window_g3_ParamLimits

0x248c,	// (0x000165ae) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x0002394f) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x0002394f) popup_note2_wait_window_g

0x5828,	// (0x0001994a) popup_note2_wait_window_t1_ParamLimits

0x5828,	// (0x0001994a) popup_note2_wait_window_t1

0x5846,	// (0x00019968) popup_note2_wait_window_t2_ParamLimits

0x5846,	// (0x00019968) popup_note2_wait_window_t2

0x5864,	// (0x00019986) popup_note2_wait_window_t3_ParamLimits

0x5864,	// (0x00019986) popup_note2_wait_window_t3

0x5876,	// (0x00019998) popup_note2_wait_window_t4_ParamLimits

0x5876,	// (0x00019998) popup_note2_wait_window_t4

0x0003,

0xfc80,	// (0x00023da2) popup_note2_wait_window_t_ParamLimits

0xfc80,	// (0x00023da2) popup_note2_wait_window_t

0x5888,	// (0x000199aa) wait_bar2_pane_ParamLimits

0x5888,	// (0x000199aa) wait_bar2_pane

0x58a0,	// (0x000199c2) popup_snote2_single_text_window_g1_ParamLimits

0x58a0,	// (0x000199c2) popup_snote2_single_text_window_g1

0x58c8,	// (0x000199ea) popup_snote2_single_text_window_t1_ParamLimits

0x58c8,	// (0x000199ea) popup_snote2_single_text_window_t1

0x5914,	// (0x00019a36) popup_snote2_single_text_window_t2_ParamLimits

0x5914,	// (0x00019a36) popup_snote2_single_text_window_t2

0x5960,	// (0x00019a82) popup_snote2_single_text_window_t3_ParamLimits

0x5960,	// (0x00019a82) popup_snote2_single_text_window_t3

0x59a1,	// (0x00019ac3) popup_snote2_single_text_window_t4_ParamLimits

0x59a1,	// (0x00019ac3) popup_snote2_single_text_window_t4

0x59d7,	// (0x00019af9) popup_snote2_single_text_window_t5_ParamLimits

0x59d7,	// (0x00019af9) popup_snote2_single_text_window_t5

0x0004,

0xfc89,	// (0x00023dab) popup_snote2_single_text_window_t_ParamLimits

0xfc89,	// (0x00023dab) popup_snote2_single_text_window_t

0xcb6d,	// (0x00020c8f) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb6d,	// (0x00020c8f) popup_snote2_single_graphic_window_g1

0x5a2a,	// (0x00019b4c) popup_snote2_single_graphic_window_g2_ParamLimits

0x5a2a,	// (0x00019b4c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc94,	// (0x00023db6) popup_snote2_single_graphic_window_g_ParamLimits

0xfc94,	// (0x00023db6) popup_snote2_single_graphic_window_g

0x5a52,	// (0x00019b74) popup_snote2_single_graphic_window_t1_ParamLimits

0x5a52,	// (0x00019b74) popup_snote2_single_graphic_window_t1

0x5a9e,	// (0x00019bc0) popup_snote2_single_graphic_window_t2_ParamLimits

0x5a9e,	// (0x00019bc0) popup_snote2_single_graphic_window_t2

0x5960,	// (0x00019a82) popup_snote2_single_graphic_window_t3_ParamLimits

0x5960,	// (0x00019a82) popup_snote2_single_graphic_window_t3

0x59a1,	// (0x00019ac3) popup_snote2_single_graphic_window_t4_ParamLimits

0x59a1,	// (0x00019ac3) popup_snote2_single_graphic_window_t4

0x59d7,	// (0x00019af9) popup_snote2_single_graphic_window_t5_ParamLimits

0x59d7,	// (0x00019af9) popup_snote2_single_graphic_window_t5

0x0004,

0xfc99,	// (0x00023dbb) popup_snote2_single_graphic_window_t_ParamLimits

0xfc99,	// (0x00023dbb) popup_snote2_single_graphic_window_t

0x4259,	// (0x0001837b) clock_nsta_pane_cp2_t1

0x4259,	// (0x0001837b) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x00023bd6) clock_nsta_pane_cp2_t

0xc797,	// (0x000208b9) form_field_data_wide_pane_g1_ParamLimits

0xc7a3,	// (0x000208c5) form_field_data_wide_pane_g2_ParamLimits

0xc7a3,	// (0x000208c5) form_field_data_wide_pane_g2

0xc7af,	// (0x000208d1) form_field_data_wide_pane_g3_ParamLimits

0xc7af,	// (0x000208d1) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x0002378e) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x0002378e) form_field_data_wide_pane_g

0xbc94,	// (0x0001fdb6) grid_touch_3_pane_ParamLimits

0xbc94,	// (0x0001fdb6) grid_touch_3_pane

0xcb95,	// (0x00020cb7) cell_touch_3_pane_ParamLimits

0xcb95,	// (0x00020cb7) cell_touch_3_pane

0x47fc,	// (0x0001891e) cell_touch_3_pane_g1

0x47fc,	// (0x0001891e) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x00023c5b) cell_touch_3_pane_g

0xc548,	// (0x0002066a) cont_query_data_pane

0xc550,	// (0x00020672) cont_query_data_pane_cp1

0x5b18,	// (0x00019c3a) button_value_adjust_pane_cp7

0x5b20,	// (0x00019c42) query_popup_pane_cp3

0xe70a,	// (0x0002282c) bg_popup_sub_pane_cp22_ParamLimits

0x8a96,	// (0x0001cbb8) navi_navi_volume_pane_cp2

0x8aa5,	// (0x0001cbc7) popup_side_volume_key_window_g2

0x8ab4,	// (0x0001cbd6) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00023824) popup_side_volume_key_window_g

0x8ac3,	// (0x0001cbe5) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x0002382b) popup_side_volume_key_window_t

0xabf7,	// (0x0001ed19) popup_side_volume_key_window_ParamLimits

0xa404,	// (0x0001e526) list_double_graphic_pane_g4_ParamLimits

0xa404,	// (0x0001e526) list_double_graphic_pane_g4

0xba83,	// (0x0001fba5) list_single_2heading_msg_pane_ParamLimits

0xba83,	// (0x0001fba5) list_single_2heading_msg_pane

0xcbde,	// (0x00020d00) list_single_2heading_msg_pane_g1_ParamLimits

0xcbde,	// (0x00020d00) list_single_2heading_msg_pane_g1

0xcbea,	// (0x00020d0c) list_single_2heading_msg_pane_g2_ParamLimits

0xcbea,	// (0x00020d0c) list_single_2heading_msg_pane_g2

0xcbfd,	// (0x00020d1f) list_single_2heading_msg_pane_g3_ParamLimits

0xcbfd,	// (0x00020d1f) list_single_2heading_msg_pane_g3

0xcc09,	// (0x00020d2b) list_single_2heading_msg_pane_g4_ParamLimits

0xcc09,	// (0x00020d2b) list_single_2heading_msg_pane_g4

0x0003,

0xfca4,	// (0x00023dc6) list_single_2heading_msg_pane_g_ParamLimits

0xfca4,	// (0x00023dc6) list_single_2heading_msg_pane_g

0xcc21,	// (0x00020d43) list_single_2heading_msg_pane_t1_ParamLimits

0xcc21,	// (0x00020d43) list_single_2heading_msg_pane_t1

0xcc49,	// (0x00020d6b) list_single_2heading_msg_pane_t2_ParamLimits

0xcc49,	// (0x00020d6b) list_single_2heading_msg_pane_t2

0xccb4,	// (0x00020dd6) list_single_2heading_msg_pane_t3_ParamLimits

0xccb4,	// (0x00020dd6) list_single_2heading_msg_pane_t3

0x5c0f,	// (0x00019d31) list_single_2heading_msg_pane_t4_ParamLimits

0x5c0f,	// (0x00019d31) list_single_2heading_msg_pane_t4

0x0003,

0xfcad,	// (0x00023dcf) list_single_2heading_msg_pane_t_ParamLimits

0xfcad,	// (0x00023dcf) list_single_2heading_msg_pane_t

0xc2fc,	// (0x0002041e) title_pane_g4_ParamLimits

0xc2fc,	// (0x0002041e) title_pane_g4

0xe32a,	// (0x0002244c) title_pane_stacon_g3_ParamLimits

0xe32a,	// (0x0002244c) title_pane_stacon_g3

0x5626,	// (0x00019748) list_single_2graphic_im_pane_g4_ParamLimits

0x5626,	// (0x00019748) list_single_2graphic_im_pane_g4

0xb773,	// (0x0001f895) popup_side_volume_key_window_cp

0x379c,	// (0x000178be) main_idle_act2_pane_t1

0xea81,	// (0x00022ba3) toolbar_button_pane_g10

0xa291,	// (0x0001e3b3) popup_toolbar_window_cp1

0x424a,	// (0x0001836c) clock_nsta_pane_cp_t1

0x424a,	// (0x0001836c) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00023bd1) clock_nsta_pane_cp_t

0x8a96,	// (0x0001cbb8) navi_navi_volume_pane_cp2_ParamLimits

0xe720,	// (0x00022842) popup_side_volume_key_window_g1_ParamLimits

0x8aa5,	// (0x0001cbc7) popup_side_volume_key_window_g2_ParamLimits

0x8ab4,	// (0x0001cbd6) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00023824) popup_side_volume_key_window_g_ParamLimits

0xed65,	// (0x00022e87) fep_hwr_aid_pane

0xee0c,	// (0x00022f2e) bg_fep_hwr_top_pane_g4_ParamLimits

0x4858,	// (0x0001897a) fep_hwr_top_pane_g1_ParamLimits

0x486a,	// (0x0001898c) fep_hwr_top_pane_g2_ParamLimits

0xee2c,	// (0x00022f4e) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x00023c26) fep_hwr_top_pane_g_ParamLimits

0xee41,	// (0x00022f63) fep_hwr_top_text_pane_ParamLimits

0x2c70,	// (0x00016d92) aid_touch_tab_arrow_arrow_2

0x2c79,	// (0x00016d9b) aid_touch_tab_arrow_left_2

0xed79,	// (0x00022e9b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xedb0,	// (0x00022ed2) fep_hwr_prediction_pane

0x49c3,	// (0x00018ae5) fep_vkb_prediction_pane

0xc033,	// (0x00020155) fep_vkb_side_pane_g3_ParamLimits

0xc033,	// (0x00020155) fep_vkb_side_pane_g3

0xef45,	// (0x00023067) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xefb1,	// (0x000230d3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xefbe,	// (0x000230e0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb3,	// (0x00023cd5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf082,	// (0x000231a4) fep_hwr_prediction_pane_g1

0xf08c,	// (0x000231ae) fep_hwr_prediction_pane_g2

0xf094,	// (0x000231b6) fep_hwr_prediction_pane_g3

0xf09c,	// (0x000231be) fep_hwr_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00023dd8) fep_hwr_prediction_pane_g

0x5c34,	// (0x00019d56) fep_vkb_prediction_pane_g1

0x5c5f,	// (0x00019d81) fep_vkb_prediction_pane_g2

0x5c67,	// (0x00019d89) fep_vkb_prediction_pane_g3

0x5c6f,	// (0x00019d91) fep_vkb_prediction_pane_g4

0x0003,

0xfcbf,	// (0x00023de1) fep_vkb_prediction_pane_g

0x9523,	// (0x0001d645) slider_set_pane_g3

0x9537,	// (0x0001d659) slider_set_pane_g4

0x954f,	// (0x0001d671) slider_set_pane_g5

0x9523,	// (0x0001d645) slider_set_pane_g6

0x9565,	// (0x0001d687) slider_set_pane_g7

0x330e,	// (0x00017430) slider_form_pane_g3

0x3317,	// (0x00017439) slider_form_pane_g4

0x331f,	// (0x00017441) slider_form_pane_g5

0x330e,	// (0x00017430) slider_form_pane_g6

0xba23,	// (0x0001fb45) slider_form_pane_g7

0x3a7f,	// (0x00017ba1) slider_set_pane_vc_g3

0x3a88,	// (0x00017baa) slider_set_pane_vc_g4

0x3a91,	// (0x00017bb3) slider_set_pane_vc_g5

0x3a7f,	// (0x00017ba1) slider_set_pane_vc_g6

0x3a9a,	// (0x00017bbc) slider_set_pane_vc_g7

0x3f2f,	// (0x00018051) slider_form_pane_vc_g1

0x3f38,	// (0x0001805a) slider_form_pane_vc_g2

0x3f41,	// (0x00018063) slider_form_pane_vc_g3

0x3f2f,	// (0x00018051) slider_form_pane_vc_g4

0x3f4a,	// (0x0001806c) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x00023ba3) slider_form_pane_vc_g

0xe176,	// (0x00022298) main_idle_act3_pane

0x5c77,	// (0x00019d99) ai3_links_pane

0xcd22,	// (0x00020e44) popup_ai3_data_window_ParamLimits

0xcd22,	// (0x00020e44) popup_ai3_data_window

0xc2de,	// (0x00020400) grid_ai3_links_pane

0xcd3a,	// (0x00020e5c) cell_ai3_links_pane_ParamLimits

0xcd3a,	// (0x00020e5c) cell_ai3_links_pane

0x5cb0,	// (0x00019dd2) bg_popup_sub_pane_cp11

0x5cbd,	// (0x00019ddf) cell_ai3_links_pane_g1

0xc2de,	// (0x00020400) bg_popup_sub_pane_cp12

0x5ce2,	// (0x00019e04) heading_ai3_data_pane

0x5cea,	// (0x00019e0c) list_ai3_gene_pane

0x5cf6,	// (0x00019e18) popup_ai3_data_window_g1

0x5cfe,	// (0x00019e20) heading_ai3_data_pane_g1

0x5d06,	// (0x00019e28) heading_ai3_data_pane_t1

0xcd54,	// (0x00020e76) list_double_ai3_gene_pane_ParamLimits

0xcd54,	// (0x00020e76) list_double_ai3_gene_pane

0x5d21,	// (0x00019e43) list_single_ai3_gene_pane_ParamLimits

0x5d21,	// (0x00019e43) list_single_ai3_gene_pane

0x47c1,	// (0x000188e3) list_highlight_pane_cp7_ParamLimits

0x47c1,	// (0x000188e3) list_highlight_pane_cp7

0x5d2e,	// (0x00019e50) list_single_a13_gene_pane_t1_ParamLimits

0x5d2e,	// (0x00019e50) list_single_a13_gene_pane_t1

0x5d45,	// (0x00019e67) list_single_ai3_gene_pane_g1

0x5d4e,	// (0x00019e70) list_single_ai3_gene_pane_g2

0x0001,

0xfcc8,	// (0x00023dea) list_single_ai3_gene_pane_g

0x5d56,	// (0x00019e78) list_double_ai3_gene_pane_g1_ParamLimits

0x5d56,	// (0x00019e78) list_double_ai3_gene_pane_g1

0xcd61,	// (0x00020e83) list_double_ai3_gene_pane_t1_ParamLimits

0xcd61,	// (0x00020e83) list_double_ai3_gene_pane_t1

0x5d7e,	// (0x00019ea0) list_double_ai3_gene_pane_t2_ParamLimits

0x5d7e,	// (0x00019ea0) list_double_ai3_gene_pane_t2

0x5d93,	// (0x00019eb5) list_double_ai3_gene_pane_t3_ParamLimits

0x5d93,	// (0x00019eb5) list_double_ai3_gene_pane_t3

0x0002,

0xfccd,	// (0x00023def) list_double_ai3_gene_pane_t_ParamLimits

0xfccd,	// (0x00023def) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5b31,	// (0x00019c53) aid_size_min_col_2

0xcbc8,	// (0x00020cea) aid_size_min_msg_ParamLimits

0xcbc8,	// (0x00020cea) aid_size_min_msg

0xc047,	// (0x00020169) fep_vkb_top_text_pane_g2_ParamLimits

0xc047,	// (0x00020169) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x00023c56) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x00023c56) fep_vkb_top_text_pane_g

0xe176,	// (0x00022298) main_hc_apps_shell_pane

0x5db0,	// (0x00019ed2) grid_hc_apps_pane_ParamLimits

0x5db0,	// (0x00019ed2) grid_hc_apps_pane

0x5dbf,	// (0x00019ee1) list_hc_apps_pane

0x5dc7,	// (0x00019ee9) scroll_pane_cp37_ParamLimits

0x5dc7,	// (0x00019ee9) scroll_pane_cp37

0xcd7d,	// (0x00020e9f) cell_hc_apps_pane_ParamLimits

0xcd7d,	// (0x00020e9f) cell_hc_apps_pane

0xce3b,	// (0x00020f5d) cell_hc_apps_pane_g1_ParamLimits

0xce3b,	// (0x00020f5d) cell_hc_apps_pane_g1

0x5eb2,	// (0x00019fd4) cell_hc_apps_pane_g2_ParamLimits

0x5eb2,	// (0x00019fd4) cell_hc_apps_pane_g2

0x5ece,	// (0x00019ff0) cell_hc_apps_pane_g3_ParamLimits

0x5ece,	// (0x00019ff0) cell_hc_apps_pane_g3

0x0002,

0xfcd4,	// (0x00023df6) cell_hc_apps_pane_g_ParamLimits

0xfcd4,	// (0x00023df6) cell_hc_apps_pane_g

0xce68,	// (0x00020f8a) cell_hc_apps_pane_t1_ParamLimits

0xce68,	// (0x00020f8a) cell_hc_apps_pane_t1

0xc492,	// (0x000205b4) grid_highlight_pane_cp10_ParamLimits

0xc492,	// (0x000205b4) grid_highlight_pane_cp10

0xcea6,	// (0x00020fc8) list_single_hc_apps_pane_ParamLimits

0xcea6,	// (0x00020fc8) list_single_hc_apps_pane

0xced6,	// (0x00020ff8) list_single_hc_apps_pane_g1

0xceef,	// (0x00021011) list_single_hc_apps_pane_g2

0x0001,

0xfcdb,	// (0x00023dfd) list_single_hc_apps_pane_g

0xcf08,	// (0x0002102a) list_single_hc_apps_pane_g2_copy1

0xcf24,	// (0x00021046) list_single_hc_apps_pane_t1

0xc34e,	// (0x00020470) bg_set_opt_pane_cp_ParamLimits

0x89f0,	// (0x0001cb12) setting_slider_pane_t1_ParamLimits

0x8a09,	// (0x0001cb2b) setting_slider_pane_t2_ParamLimits

0x8a23,	// (0x0001cb45) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023680) setting_slider_pane_t_ParamLimits

0x8a3b,	// (0x0001cb5d) slider_set_pane_ParamLimits

0xe964,	// (0x00022a86) control_pane_g5_ParamLimits

0xe964,	// (0x00022a86) control_pane_g5

0xb8a5,	// (0x0001f9c7) slider_set_pane_g1_ParamLimits

0xec53,	// (0x00022d75) slider_set_pane_g2_ParamLimits

0x9523,	// (0x0001d645) slider_set_pane_g3_ParamLimits

0x9537,	// (0x0001d659) slider_set_pane_g4_ParamLimits

0x954f,	// (0x0001d671) slider_set_pane_g5_ParamLimits

0x9523,	// (0x0001d645) slider_set_pane_g6_ParamLimits

0x9565,	// (0x0001d687) slider_set_pane_g7_ParamLimits

0xf949,	// (0x00023a6b) slider_set_pane_g_ParamLimits

0x12fa,	// (0x0001541c) navi_icon_text_pane_ParamLimits

0xae1c,	// (0x0001ef3e) aid_fill_nsta_2_ParamLimits

0xae53,	// (0x0001ef75) aid_touch_tab_arrow_left_ParamLimits

0xae69,	// (0x0001ef8b) aid_touch_tab_arrow_right_ParamLimits

0xaf04,	// (0x0001f026) clock_nsta_pane_ParamLimits

0x2c52,	// (0x00016d74) navi_icon_pane_g1_ParamLimits

0x2c5e,	// (0x00016d80) navi_text_pane_t1_ParamLimits

0x435a,	// (0x0001847c) navi_icon_text_pane_g1_ParamLimits

0x4366,	// (0x00018488) navi_icon_text_pane_t1_ParamLimits

0xced6,	// (0x00020ff8) list_single_hc_apps_pane_g1_ParamLimits

0xceef,	// (0x00021011) list_single_hc_apps_pane_g2_ParamLimits

0xfcdb,	// (0x00023dfd) list_single_hc_apps_pane_g_ParamLimits

0xcf08,	// (0x0002102a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf24,	// (0x00021046) list_single_hc_apps_pane_t1_ParamLimits

0x8918,	// (0x0001ca3a) popup_toolbar2_fixed_window_ParamLimits

0x8918,	// (0x0001ca3a) popup_toolbar2_fixed_window

0x9343,	// (0x0001d465) popup_toolbar2_float_window

0xc2de,	// (0x00020400) bg_popup_sub_pane_cp27

0x600f,	// (0x0001a131) grid_toolbar2_float_pane

0xc2de,	// (0x00020400) bg_popup_sub_pane_cp26

0x600f,	// (0x0001a131) grid_toolbar2_fixed_pane

0xcf52,	// (0x00021074) cell_toolbar2_fixed_pane_ParamLimits

0xcf52,	// (0x00021074) cell_toolbar2_fixed_pane

0xcf6c,	// (0x0002108e) cell_toolbar2_fixed_pane_g1

0x1c5d,	// (0x00015d7f) toolbar2_fixed_button_pane

0x1cff,	// (0x00015e21) toolbar2_fixed_button_pane_g1

0x1d0f,	// (0x00015e31) toolbar2_fixed_button_pane_g2

0x1d07,	// (0x00015e29) toolbar2_fixed_button_pane_g3

0x1d1f,	// (0x00015e41) toolbar2_fixed_button_pane_g4

0x1d17,	// (0x00015e39) toolbar2_fixed_button_pane_g5

0x1d27,	// (0x00015e49) toolbar2_fixed_button_pane_g6

0x1d2f,	// (0x00015e51) toolbar2_fixed_button_pane_g7

0x1d3f,	// (0x00015e61) toolbar2_fixed_button_pane_g8

0x1d37,	// (0x00015e59) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x0002396d) toolbar2_fixed_button_pane_g

0x6030,	// (0x0001a152) cell_toolbar2_float_pane_ParamLimits

0x6030,	// (0x0001a152) cell_toolbar2_float_pane

0x6041,	// (0x0001a163) cell_toolbar2_float_pane_g1

0x1c5d,	// (0x00015d7f) toolbar2_fixed_button_pane_cp

0xbf2f,	// (0x00020051) fep_vkb_accented_list_pane_ParamLimits

0xbf2f,	// (0x00020051) fep_vkb_accented_list_pane

0xef25,	// (0x00023047) bg_popup_fep_shadow_pane_g9

0x147a,	// (0x0001559c) bg_popup_fep_shadow_pane_cp3

0xc8ec,	// (0x00020a0e) list_accented_list_pane

0x604a,	// (0x0001a16c) list_single_accented_list_pane_ParamLimits

0x604a,	// (0x0001a16c) list_single_accented_list_pane

0x147a,	// (0x0001559c) list_highlight_pane_cp10

0x605b,	// (0x0001a17d) list_single_accented_list_pane_t1

0x926d,	// (0x0001d38f) popup_slider_window_ParamLimits

0x926d,	// (0x0001d38f) popup_slider_window

0x5b28,	// (0x00019c4a) aid_indentation_list_msg

0xd061,	// (0x00021183) bg_popup_window_pane_cp19

0x617b,	// (0x0001a29d) popup_slider_window_g1

0x6197,	// (0x0001a2b9) popup_slider_window_g2

0x61b3,	// (0x0001a2d5) popup_slider_window_g3

0x0005,

0xfce0,	// (0x00023e02) popup_slider_window_g

0x620f,	// (0x0001a331) popup_slider_window_t1

0x6283,	// (0x0001a3a5) small_volume_slider_vertical_pane

0x47fc,	// (0x0001891e) small_volume_slider_vertical_pane_g1

0x47fc,	// (0x0001891e) small_volume_slider_vertical_pane_g2

0x629f,	// (0x0001a3c1) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf2,	// (0x00023e14) small_volume_slider_vertical_pane_g

0x8866,	// (0x0001c988) area_side_right_pane_ParamLimits

0x8866,	// (0x0001c988) area_side_right_pane

0x968f,	// (0x0001d7b1) aid_size_side_button_ParamLimits

0x968f,	// (0x0001d7b1) aid_size_side_button

0x96a8,	// (0x0001d7ca) grid_sctrl_middle_pane_ParamLimits

0x96a8,	// (0x0001d7ca) grid_sctrl_middle_pane

0xf0ad,	// (0x000231cf) sctrl_sk_bottom_pane

0xf0be,	// (0x000231e0) sctrl_sk_top_pane

0xf0d0,	// (0x000231f2) aid_touch_sctrl_top

0xf0dd,	// (0x000231ff) bg_sctrl_sk_pane_ParamLimits

0xf0dd,	// (0x000231ff) bg_sctrl_sk_pane

0xf0eb,	// (0x0002320d) sctrl_sk_top_pane_g1

0xf0f8,	// (0x0002321a) sctrl_sk_top_pane_t1

0xf0d0,	// (0x000231f2) aid_touch_sctrl_bottom

0xf0dd,	// (0x000231ff) bg_sctrl_sk_pane_cp_ParamLimits

0xf0dd,	// (0x000231ff) bg_sctrl_sk_pane_cp

0xf113,	// (0x00023235) sctrl_sk_bottom_pane_g1

0xf0f8,	// (0x0002321a) sctrl_sk_bottom_pane_t1

0x96c2,	// (0x0001d7e4) cell_sctrl_middle_pane_ParamLimits

0x96c2,	// (0x0001d7e4) cell_sctrl_middle_pane

0x96d3,	// (0x0001d7f5) aid_touch_sctrl_middle_ParamLimits

0x96d3,	// (0x0001d7f5) aid_touch_sctrl_middle

0x96e0,	// (0x0001d802) bg_sctrl_middle_pane_ParamLimits

0x96e0,	// (0x0001d802) bg_sctrl_middle_pane

0xf3c7,	// (0x000234e9) cell_sctrl_middle_pane_g1_ParamLimits

0xf3c7,	// (0x000234e9) cell_sctrl_middle_pane_g1

0x96ee,	// (0x0001d810) cell_sctrl_middle_pane_g2_ParamLimits

0x96ee,	// (0x0001d810) cell_sctrl_middle_pane_g2

0x0001,

0xfcfe,	// (0x00023e20) cell_sctrl_middle_pane_g_ParamLimits

0xfcfe,	// (0x00023e20) cell_sctrl_middle_pane_g

0x1cff,	// (0x00015e21) bg_sctrl_middle_pane_g1

0x1d07,	// (0x00015e29) bg_sctrl_middle_pane_g2

0x1d0f,	// (0x00015e31) bg_sctrl_middle_pane_g3

0x1d17,	// (0x00015e39) bg_sctrl_middle_pane_g4

0x1d1f,	// (0x00015e41) bg_sctrl_middle_pane_g5

0x1d27,	// (0x00015e49) bg_sctrl_middle_pane_g6

0x1d2f,	// (0x00015e51) bg_sctrl_middle_pane_g7

0x1d37,	// (0x00015e59) bg_sctrl_middle_pane_g8

0x0007,

0xfd03,	// (0x00023e25) bg_sctrl_middle_pane_g

0x1d3f,	// (0x00015e61) bg_sctrl_middle_pane_g8_copy1

0x1cff,	// (0x00015e21) bg_sctrl_sk_pane_g1

0x1d0f,	// (0x00015e31) bg_sctrl_sk_pane_g2

0x1d07,	// (0x00015e29) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x0002396d) bg_sctrl_sk_pane_g

0xc65c,	// (0x0002077e) aid_size_touch_scroll_bar

0x1d1f,	// (0x00015e41) bg_sctrl_sk_pane_g4

0x1d17,	// (0x00015e39) bg_sctrl_sk_pane_g5

0x1d27,	// (0x00015e49) bg_sctrl_sk_pane_g6

0x1d2f,	// (0x00015e51) bg_sctrl_sk_pane_g7

0x1d3f,	// (0x00015e61) bg_sctrl_sk_pane_g8

0x1d37,	// (0x00015e59) bg_sctrl_sk_pane_g9

0xe9a1,	// (0x00022ac3) popup_fep_china_hwr2_fs_candidate_window

0x8d0d,	// (0x0001ce2f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8d0d,	// (0x0001ce2f) popup_fep_china_hwr2_fs_control_window

0xef45,	// (0x00023067) sctrl_sk_top_pane_g2

0x0001,

0xfcf9,	// (0x00023e1b) sctrl_sk_top_pane_g

0xd119,	// (0x0002123b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd119,	// (0x0002123b) aid_fep_china_hwr2_fs_cell

0xd12d,	// (0x0002124f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd12d,	// (0x0002124f) bg_popup_fep_shadow_pane_cp4

0xd144,	// (0x00021266) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd144,	// (0x00021266) bg_popup_fep_shadow_pane_cp5

0xd156,	// (0x00021278) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd156,	// (0x00021278) popup_fep_china_hwr2_fs_control_bar_grid

0xe9d1,	// (0x00022af3) popup_fep_china_hwr2_fs_control_funtion_grid

0x62fb,	// (0x0001a41d) aid_fep_china_hwr2_fs_candi_cell

0xc2de,	// (0x00020400) bg_popup_fep_shadow_pane_cp6

0x6305,	// (0x0001a427) popup_fep_china_hwr2_fs_candidate_grid

0xd16a,	// (0x0002128c) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd16a,	// (0x0002128c) cell_fep_china_hwr2_fs_funtion_grid

0x47fc,	// (0x0001891e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6327,	// (0x0001a449) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6327,	// (0x0001a449) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6335,	// (0x0001a457) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6335,	// (0x0001a457) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd14,	// (0x00023e36) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd14,	// (0x00023e36) cell_fep_china_hwr2_fs_funtion_grid_g

0xd182,	// (0x000212a4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd182,	// (0x000212a4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd197,	// (0x000212b9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd197,	// (0x000212b9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd19,	// (0x00023e3b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd19,	// (0x00023e3b) cell_fep_china_hwr2_fs_funtion_grid_t

0x637c,	// (0x0001a49e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6384,	// (0x0001a4a6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x638c,	// (0x0001a4ae) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1e,	// (0x00023e40) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6394,	// (0x0001a4b6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6394,	// (0x0001a4b6) cell_fep_china_hwr2_fs_candidate_grid

0x63ad,	// (0x0001a4cf) popup_fep_china_hwr2_fs_candidate_grid_g20

0x63b5,	// (0x0001a4d7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x47fc,	// (0x0001891e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x47fc,	// (0x0001891e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x00023c5b) cell_fep_china_hwr2_fs_candidate_grid_g

0x63bd,	// (0x0001a4df) cell_fep_china_hwr2_fs_candidate_grid_t1

0x18d6,	// (0x000159f8) clock_nsta_pane_cp_24_ParamLimits

0x18d6,	// (0x000159f8) clock_nsta_pane_cp_24

0x1954,	// (0x00015a76) indicator_nsta_pane_cp_24_ParamLimits

0x1954,	// (0x00015a76) indicator_nsta_pane_cp_24

0x2ace,	// (0x00016bf0) heading_pane_g1

0x0001,

0xf8b0,	// (0x000239d2) heading_pane_g

0x35e5,	// (0x00017707) grid_sct_catagory_button_pane

0x3615,	// (0x00017737) scroll_pane_cp5_ParamLimits

0x43a8,	// (0x000184ca) button_value_adjust_pane_cp5_ParamLimits

0x43a8,	// (0x000184ca) button_value_adjust_pane_cp5

0x44a2,	// (0x000185c4) form2_midp_time_pane_ParamLimits

0x63cb,	// (0x0001a4ed) cell_sct_catagory_button_pane_ParamLimits

0x63cb,	// (0x0001a4ed) cell_sct_catagory_button_pane

0x47c1,	// (0x000188e3) bg_button_pane_cp01_ParamLimits

0x47c1,	// (0x000188e3) bg_button_pane_cp01

0x47fc,	// (0x0001891e) cell_sct_catagory_button_pane_g1

0x92e6,	// (0x0001d408) popup_tb_extension_window

0xd1b3,	// (0x000212d5) aid_size_cell_ext_ParamLimits

0xd1b3,	// (0x000212d5) aid_size_cell_ext

0xc60e,	// (0x00020730) bg_tb_trans_pane_cp1_ParamLimits

0xc60e,	// (0x00020730) bg_tb_trans_pane_cp1

0xd1d9,	// (0x000212fb) grid_tb_ext_pane_ParamLimits

0xd1d9,	// (0x000212fb) grid_tb_ext_pane

0xd218,	// (0x0002133a) cell_tb_ext_pane_ParamLimits

0xd218,	// (0x0002133a) cell_tb_ext_pane

0xd240,	// (0x00021362) cell_tb_ext_pane_g1_ParamLimits

0xd240,	// (0x00021362) cell_tb_ext_pane_g1

0x6461,	// (0x0001a583) cell_tb_ext_pane_t1

0xc492,	// (0x000205b4) list_highlight_pane_cp11_ParamLimits

0xc492,	// (0x000205b4) list_highlight_pane_cp11

0x892d,	// (0x0001ca4f) popup_uni_indicator_window_ParamLimits

0x892d,	// (0x0001ca4f) popup_uni_indicator_window

0xc778,	// (0x0002089a) bg_popup_sub_pane_cp14

0xd25d,	// (0x0002137f) list_uniindi_pane

0xd269,	// (0x0002138b) uniindi_top_pane

0xc492,	// (0x000205b4) bg_uniindi_top_pane

0xd288,	// (0x000213aa) uniindi_top_pane_g1

0xd29e,	// (0x000213c0) uniindi_top_pane_g2

0x0003,

0xfd25,	// (0x00023e47) uniindi_top_pane_g

0xd2bb,	// (0x000213dd) uniindi_top_pane_t1

0x6512,	// (0x0001a634) list_single_uniindi_pane_ParamLimits

0x6512,	// (0x0001a634) list_single_uniindi_pane

0x47fc,	// (0x0001891e) bg_uniindi_top_pane_g1

0x6524,	// (0x0001a646) list_single_uniindi_pane_g1

0x6537,	// (0x0001a659) list_single_uniindi_pane_t1

0xe176,	// (0x00022298) control_bg_pane

0x655c,	// (0x0001a67e) bg_sctrl_sk_pane_cp1

0x6565,	// (0x0001a687) bg_sctrl_sk_pane_cp2

0x656e,	// (0x0001a690) control_bg_pane_g1

0x6577,	// (0x0001a699) control_bg_pane_g2

0x0001,

0xfd2e,	// (0x00023e50) control_bg_pane_g

0x41ff,	// (0x00018321) cell_indicator_nsta_pane_g1_ParamLimits

0xbcc1,	// (0x0001fde3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00023bbf) cell_indicator_nsta_pane_g_ParamLimits

0x452a,	// (0x0001864c) form2_midp_time_pane_t1_ParamLimits

0xe9d9,	// (0x00022afb) main_idle_act4_pane_ParamLimits

0xe9d9,	// (0x00022afb) main_idle_act4_pane

0x92e6,	// (0x0001d408) popup_tb_extension_window_ParamLimits

0xd1fe,	// (0x00021320) tb_ext_find_pane_ParamLimits

0xd1fe,	// (0x00021320) tb_ext_find_pane

0x6580,	// (0x0001a6a2) ai_gene_pane_1_cp1

0x15c5,	// (0x000156e7) ai_gene_pane_2_cp1

0xd2e5,	// (0x00021407) list_single_idle_plugin_calendar_pane

0x6591,	// (0x0001a6b3) list_single_idle_plugin_notification_pane

0x659a,	// (0x0001a6bc) list_single_idle_plugin_player_pane

0xd2ee,	// (0x00021410) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd2ee,	// (0x00021410) list_single_idle_plugin_shortcut_pane

0xd316,	// (0x00021438) main_idle_act4_pane_t1

0xd32d,	// (0x0002144f) main_idle_act4_pane_t2

0x0001,

0xfd33,	// (0x00023e55) main_idle_act4_pane_t

0xd344,	// (0x00021466) middle_sk_idle_act4_pane_ParamLimits

0xd344,	// (0x00021466) middle_sk_idle_act4_pane

0xd360,	// (0x00021482) popup_clock_digital_analogue_window_cp2

0xd38c,	// (0x000214ae) shortcut_wheel_idle_act4_pane_ParamLimits

0xd38c,	// (0x000214ae) shortcut_wheel_idle_act4_pane

0x47fc,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g1

0x47fc,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g2

0x47fc,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g3

0x47fc,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g4

0x47fc,	// (0x0001891e) shortcut_wheel_idle_act4_pane_g5

0x662d,	// (0x0001a74f) shortcut_wheel_idle_act4_pane_g6

0x6635,	// (0x0001a757) shortcut_wheel_idle_act4_pane_g7

0x663d,	// (0x0001a75f) shortcut_wheel_idle_act4_pane_g8

0x6645,	// (0x0001a767) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd38,	// (0x00023e5a) shortcut_wheel_idle_act4_pane_g

0xc2ae,	// (0x000203d0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2ae,	// (0x000203d0) middle_sk_idle_act4_pane_g1

0xd409,	// (0x0002152b) middle_sk_idle_act4_pane_g2_ParamLimits

0xd409,	// (0x0002152b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5b,	// (0x00023e7d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5b,	// (0x00023e7d) middle_sk_idle_act4_pane_g

0xd421,	// (0x00021543) middle_sk_idle_act4_pane_t1_ParamLimits

0xd421,	// (0x00021543) middle_sk_idle_act4_pane_t1

0xd450,	// (0x00021572) grid_ai_shortcut_pane_ParamLimits

0xd450,	// (0x00021572) grid_ai_shortcut_pane

0xd46d,	// (0x0002158f) list_highlight_pane_cp16_ParamLimits

0xd46d,	// (0x0002158f) list_highlight_pane_cp16

0xd47a,	// (0x0002159c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd47a,	// (0x0002159c) list_single_idle_plugin_shortcut_pane_g1

0xd486,	// (0x000215a8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd486,	// (0x000215a8) list_single_idle_plugin_shortcut_pane_g2

0xd4a2,	// (0x000215c4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd4a2,	// (0x000215c4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd60,	// (0x00023e82) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd60,	// (0x00023e82) list_single_idle_plugin_shortcut_pane_g

0xd4b7,	// (0x000215d9) cell_ai_shortcut_pane_ParamLimits

0xd4b7,	// (0x000215d9) cell_ai_shortcut_pane

0xd4cd,	// (0x000215ef) cell_ai_shortcut_pane_g1_ParamLimits

0xd4cd,	// (0x000215ef) cell_ai_shortcut_pane_g1

0x6580,	// (0x0001a6a2) ai_gene_pane_1_cp2

0x6775,	// (0x0001a897) ai_gene_pane_2_cp2

0x677d,	// (0x0001a89f) list_highlight_pane_cp15

0xd4ef,	// (0x00021611) list_single_idle_plugin_calendar_pane_g1

0x677d,	// (0x0001a89f) list_highlight_pane_cp17

0x678e,	// (0x0001a8b0) list_single_idle_plugin_calendar_pane_g1_copy1

0x6796,	// (0x0001a8b8) list_single_idle_plugin_player_pane_g1

0x383e,	// (0x00017960) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd67,	// (0x00023e89) list_single_idle_plugin_player_pane_g

0x679e,	// (0x0001a8c0) list_single_idle_plugin_player_pane_t1

0x67ac,	// (0x0001a8ce) list_single_idle_plugin_player_pane_t2

0x67ba,	// (0x0001a8dc) list_single_idle_plugin_player_pane_t3

0x67c8,	// (0x0001a8ea) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6c,	// (0x00023e8e) list_single_idle_plugin_player_pane_t

0x67d6,	// (0x0001a8f8) wait_bar_pane_cp15

0x67de,	// (0x0001a900) grid_ai_notification_pane

0x383e,	// (0x00017960) list_single_idle_plugin_notification_pane_g1

0xd4f7,	// (0x00021619) cell_ai_notification_pane_ParamLimits

0xd4f7,	// (0x00021619) cell_ai_notification_pane

0x67f4,	// (0x0001a916) cell_ai_notification_pane_g1

0x67fc,	// (0x0001a91e) cell_ai_notification_pane_t1

0xd504,	// (0x00021626) tb_ext_find_button_pane

0xd50c,	// (0x0002162e) tb_ext_find_pane_g1

0xd514,	// (0x00021636) tb_ext_find_pane_t1

0xe62f,	// (0x00022751) tb_ext_find_button_pane_g1

0xd522,	// (0x00021644) tb_ext_find_button_pane_g2

0x0001,

0xfd75,	// (0x00023e97) tb_ext_find_button_pane_g

0xd316,	// (0x00021438) main_idle_act4_pane_t1_ParamLimits

0xd32d,	// (0x0002144f) main_idle_act4_pane_t2_ParamLimits

0xfd33,	// (0x00023e55) main_idle_act4_pane_t_ParamLimits

0xd360,	// (0x00021482) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd378,	// (0x0002149a) sat_plugin_idle_act4_pane_ParamLimits

0xd378,	// (0x0002149a) sat_plugin_idle_act4_pane

0xd52b,	// (0x0002164d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd52b,	// (0x0002164d) sat_plugin_idle_act4_pane_t1

0xd543,	// (0x00021665) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd543,	// (0x00021665) sat_plugin_idle_act4_pane_t2

0xd55b,	// (0x0002167d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd55b,	// (0x0002167d) sat_plugin_idle_act4_pane_t3

0xd573,	// (0x00021695) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd573,	// (0x00021695) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7a,	// (0x00023e9c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7a,	// (0x00023e9c) sat_plugin_idle_act4_pane_t

0x88a8,	// (0x0001c9ca) popup_battery_window_ParamLimits

0x88a8,	// (0x0001c9ca) popup_battery_window

0xc492,	// (0x000205b4) bg_popup_sub_pane_cp25_ParamLimits

0xc492,	// (0x000205b4) bg_popup_sub_pane_cp25

0x687d,	// (0x0001a99f) popup_battery_window_g1_ParamLimits

0x687d,	// (0x0001a99f) popup_battery_window_g1

0x6889,	// (0x0001a9ab) popup_battery_window_t1_ParamLimits

0x6889,	// (0x0001a9ab) popup_battery_window_t1

0x689b,	// (0x0001a9bd) popup_battery_window_t2_ParamLimits

0x689b,	// (0x0001a9bd) popup_battery_window_t2

0x0001,

0xfd83,	// (0x00023ea5) popup_battery_window_t_ParamLimits

0xfd83,	// (0x00023ea5) popup_battery_window_t

0xac56,	// (0x0001ed78) midp_canvas_pane_ParamLimits

0xacc8,	// (0x0001edea) midp_keypad_pane_ParamLimits

0xacc8,	// (0x0001edea) midp_keypad_pane

0x17c8,	// (0x000158ea) main_midp_pane_ParamLimits

0xbcce,	// (0x0001fdf0) signal_pane_g2_cp_ParamLimits

0xd58b,	// (0x000216ad) aid_size_cell_midp_keypad_ParamLimits

0xd58b,	// (0x000216ad) aid_size_cell_midp_keypad

0xd5a9,	// (0x000216cb) midp_keyp_game_grid_pane_ParamLimits

0xd5a9,	// (0x000216cb) midp_keyp_game_grid_pane

0xd5d0,	// (0x000216f2) midp_keyp_rocker_pane_ParamLimits

0xd5d0,	// (0x000216f2) midp_keyp_rocker_pane

0xd621,	// (0x00021743) midp_keyp_sk_left_pane_ParamLimits

0xd621,	// (0x00021743) midp_keyp_sk_left_pane

0xd675,	// (0x00021797) midp_keyp_sk_right_pane_ParamLimits

0xd675,	// (0x00021797) midp_keyp_sk_right_pane

0xc2de,	// (0x00020400) bg_button_pane_cp03

0xd6c9,	// (0x000217eb) midp_keyp_sk_left_pane_g1

0xc2de,	// (0x00020400) bg_button_pane_cp04

0xd6c9,	// (0x000217eb) midp_keyp_sk_right_pane_g1

0x47fc,	// (0x0001891e) midp_keyp_rocker_pane_g1

0xd6d2,	// (0x000217f4) keyp_game_cell_pane_ParamLimits

0xd6d2,	// (0x000217f4) keyp_game_cell_pane

0xc2de,	// (0x00020400) bg_button_pane_cp02

0xd6f6,	// (0x00021818) keyp_game_cell_pane_g1

0x88c8,	// (0x0001c9ea) popup_fep_vkb2_window_ParamLimits

0x88c8,	// (0x0001c9ea) popup_fep_vkb2_window

0x96fa,	// (0x0001d81c) aid_size_cell_vkb2_ParamLimits

0x96fa,	// (0x0001d81c) aid_size_cell_vkb2

0x9738,	// (0x0001d85a) popup_fep_vkb2_window_g1_ParamLimits

0x9738,	// (0x0001d85a) popup_fep_vkb2_window_g1

0x9788,	// (0x0001d8aa) vkb2_area_bottom_pane_ParamLimits

0x9788,	// (0x0001d8aa) vkb2_area_bottom_pane

0x97dc,	// (0x0001d8fe) vkb2_area_keypad_pane_ParamLimits

0x97dc,	// (0x0001d8fe) vkb2_area_keypad_pane

0x9824,	// (0x0001d946) vkb2_area_top_pane_ParamLimits

0x9824,	// (0x0001d946) vkb2_area_top_pane

0x98aa,	// (0x0001d9cc) vkb2_top_entry_pane_ParamLimits

0x98aa,	// (0x0001d9cc) vkb2_top_entry_pane

0x98d7,	// (0x0001d9f9) vkb2_top_grid_left_pane_ParamLimits

0x98d7,	// (0x0001d9f9) vkb2_top_grid_left_pane

0x98f7,	// (0x0001da19) vkb2_top_grid_right_pane_ParamLimits

0x98f7,	// (0x0001da19) vkb2_top_grid_right_pane

0xf144,	// (0x00023266) vkb2_cell_keypad_pane_ParamLimits

0xf144,	// (0x00023266) vkb2_cell_keypad_pane

0x993d,	// (0x0001da5f) vkb2_area_bottom_grid_pane_ParamLimits

0x993d,	// (0x0001da5f) vkb2_area_bottom_grid_pane

0x9967,	// (0x0001da89) vkb2_area_bottom_pane_g1_ParamLimits

0x9967,	// (0x0001da89) vkb2_area_bottom_pane_g1

0x998d,	// (0x0001daaf) vkb2_area_bottom_pane_g2_ParamLimits

0x998d,	// (0x0001daaf) vkb2_area_bottom_pane_g2

0x99be,	// (0x0001dae0) vkb2_area_bottom_pane_g3_ParamLimits

0x99be,	// (0x0001dae0) vkb2_area_bottom_pane_g3

0x0002,

0xfd88,	// (0x00023eaa) vkb2_area_bottom_pane_g_ParamLimits

0xfd88,	// (0x00023eaa) vkb2_area_bottom_pane_g

0xf1ff,	// (0x00023321) vkb2_top_cell_left_pane_ParamLimits

0xf1ff,	// (0x00023321) vkb2_top_cell_left_pane

0xd6ff,	// (0x00021821) vkb2_top_entry_pane_g1_ParamLimits

0xd6ff,	// (0x00021821) vkb2_top_entry_pane_g1

0xd70d,	// (0x0002182f) vkb2_top_entry_pane_t1_ParamLimits

0xd70d,	// (0x0002182f) vkb2_top_entry_pane_t1

0x6a4c,	// (0x0001ab6e) vkb2_top_entry_pane_t2_ParamLimits

0x6a4c,	// (0x0001ab6e) vkb2_top_entry_pane_t2

0x6a7e,	// (0x0001aba0) vkb2_top_entry_pane_t3_ParamLimits

0x6a7e,	// (0x0001aba0) vkb2_top_entry_pane_t3

0x0002,

0xfd8f,	// (0x00023eb1) vkb2_top_entry_pane_t_ParamLimits

0xfd8f,	// (0x00023eb1) vkb2_top_entry_pane_t

0x9a28,	// (0x0001db4a) vkb2_top_grid_right_pane_g1_ParamLimits

0x9a28,	// (0x0001db4a) vkb2_top_grid_right_pane_g1

0xf24c,	// (0x0002336e) vkb2_top_grid_right_pane_g2_ParamLimits

0xf24c,	// (0x0002336e) vkb2_top_grid_right_pane_g2

0xf264,	// (0x00023386) vkb2_top_grid_right_pane_g3_ParamLimits

0xf264,	// (0x00023386) vkb2_top_grid_right_pane_g3

0x9a3e,	// (0x0001db60) vkb2_top_grid_right_pane_g4_ParamLimits

0x9a3e,	// (0x0001db60) vkb2_top_grid_right_pane_g4

0x0003,

0xfd96,	// (0x00023eb8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd96,	// (0x00023eb8) vkb2_top_grid_right_pane_g

0xf27c,	// (0x0002339e) vkb2_top_cell_left_pane_g1

0xf293,	// (0x000233b5) vkb2_cell_keypad_pane_g1_ParamLimits

0xf293,	// (0x000233b5) vkb2_cell_keypad_pane_g1

0x6aa2,	// (0x0001abc4) vkb2_cell_keypad_pane_t1_ParamLimits

0x6aa2,	// (0x0001abc4) vkb2_cell_keypad_pane_t1

0xf2a1,	// (0x000233c3) vkb2_cell_bottom_grid_pane_ParamLimits

0xf2a1,	// (0x000233c3) vkb2_cell_bottom_grid_pane

0xf2da,	// (0x000233fc) vkb2_cell_bottom_grid_pane_g1

0xd3ad,	// (0x000214cf) aid_call2_pane_cp02

0xd3b5,	// (0x000214d7) aid_call_pane_cp02

0xd3bd,	// (0x000214df) clock_digital_number_pane_cp10

0xd3c5,	// (0x000214e7) clock_digital_number_pane_cp11

0xd3cd,	// (0x000214ef) clock_digital_number_pane_cp12

0xd3d5,	// (0x000214f7) clock_digital_number_pane_cp13

0xd3dd,	// (0x000214ff) clock_digital_separator_pane_cp10

0xe62f,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g1

0xe62f,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g2

0xd3e5,	// (0x00021507) popup_clock_digital_analogue_window_cp2_g3

0xe62f,	// (0x00022751) popup_clock_digital_analogue_window_cp2_g4

0xd3e5,	// (0x00021507) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4b,	// (0x00023e6d) popup_clock_digital_analogue_window_cp2_g

0xd3ed,	// (0x0002150f) popup_clock_digital_analogue_window_cp2_t1

0xd3fb,	// (0x0002151d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd56,	// (0x00023e78) popup_clock_digital_analogue_window_cp2_t

0x47fc,	// (0x0001891e) clock_digital_number_pane_cp10_g1

0x47fc,	// (0x0001891e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x00023c5b) clock_digital_number_pane_cp10_g

0x47fc,	// (0x0001891e) clock_digital_separator_pane_cp10_g1

0x47fc,	// (0x0001891e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x00023c5b) clock_digital_separator_pane_cp10_g

0xd2aa,	// (0x000213cc) uniindi_top_pane_g3

0x64db,	// (0x0001a5fd) uniindi_top_pane_g4

0xf1cf,	// (0x000232f1) vkb2_row_keypad_pane_ParamLimits

0xf1cf,	// (0x000232f1) vkb2_row_keypad_pane

0xf2f6,	// (0x00023418) vkb2_cell_t_keypad_pane_ParamLimits

0xf2f6,	// (0x00023418) vkb2_cell_t_keypad_pane

0xf306,	// (0x00023428) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf306,	// (0x00023428) vkb2_cell_t_keypad_pane_cp08

0xf319,	// (0x0002343b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf319,	// (0x0002343b) vkb2_cell_t_keypad_pane_cp09

0xf32d,	// (0x0002344f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf32d,	// (0x0002344f) vkb2_cell_t_keypad_pane_cp01

0xf33e,	// (0x00023460) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf33e,	// (0x00023460) vkb2_cell_t_keypad_pane_cp02

0xf34f,	// (0x00023471) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf34f,	// (0x00023471) vkb2_cell_t_keypad_pane_cp03

0xf360,	// (0x00023482) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf360,	// (0x00023482) vkb2_cell_t_keypad_pane_cp04

0xf371,	// (0x00023493) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf371,	// (0x00023493) vkb2_cell_t_keypad_pane_cp05

0xf382,	// (0x000234a4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf382,	// (0x000234a4) vkb2_cell_t_keypad_pane_cp06

0xf393,	// (0x000234b5) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf393,	// (0x000234b5) vkb2_cell_t_keypad_pane_cp07

0xf3a4,	// (0x000234c6) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf3a4,	// (0x000234c6) vkb2_cell_t_keypad_pane_cp10

0xef45,	// (0x00023067) vkb2_cell_t_keypad_pane_g1

0x6ab9,	// (0x0001abdb) vkb2_cell_t_keypad_pane_t1

0xe176,	// (0x00022298) popup_grid_graphic2_window

0xd746,	// (0x00021868) aid_size_cell_graphic2_ParamLimits

0xd746,	// (0x00021868) aid_size_cell_graphic2

0xd784,	// (0x000218a6) bg_popup_window_pane_cp21_ParamLimits

0xd784,	// (0x000218a6) bg_popup_window_pane_cp21

0xd792,	// (0x000218b4) graphic2_pages_pane_ParamLimits

0xd792,	// (0x000218b4) graphic2_pages_pane

0xd7e8,	// (0x0002190a) grid_graphic2_control_pane_ParamLimits

0xd7e8,	// (0x0002190a) grid_graphic2_control_pane

0xd830,	// (0x00021952) grid_graphic2_pane_ParamLimits

0xd830,	// (0x00021952) grid_graphic2_pane

0xd8b7,	// (0x000219d9) cell_graphic2_pane

0xe176,	// (0x00022298) main_comp_mode_pane

0x5cea,	// (0x00019e0c) list_ai3_gene_pane_ParamLimits

0xd061,	// (0x00021183) bg_popup_window_pane_cp19_ParamLimits

0x611d,	// (0x0001a23f) bg_touch_area_indi_pane_ParamLimits

0x611d,	// (0x0001a23f) bg_touch_area_indi_pane

0x6133,	// (0x0001a255) bg_touch_area_indi_pane_cp01_ParamLimits

0x6133,	// (0x0001a255) bg_touch_area_indi_pane_cp01

0x6149,	// (0x0001a26b) bg_touch_area_indi_pane_cp02_ParamLimits

0x6149,	// (0x0001a26b) bg_touch_area_indi_pane_cp02

0x6161,	// (0x0001a283) bg_touch_area_indi_pane_cp03_ParamLimits

0x6161,	// (0x0001a283) bg_touch_area_indi_pane_cp03

0x617b,	// (0x0001a29d) popup_slider_window_g1_ParamLimits

0x6197,	// (0x0001a2b9) popup_slider_window_g2_ParamLimits

0x61b3,	// (0x0001a2d5) popup_slider_window_g3_ParamLimits

0xfce0,	// (0x00023e02) popup_slider_window_g_ParamLimits

0x620f,	// (0x0001a331) popup_slider_window_t1_ParamLimits

0x6283,	// (0x0001a3a5) small_volume_slider_vertical_pane_ParamLimits

0xd8b7,	// (0x000219d9) cell_graphic2_pane_ParamLimits

0xd912,	// (0x00021a34) bg_button_pane_cp10_ParamLimits

0xd912,	// (0x00021a34) bg_button_pane_cp10

0xd925,	// (0x00021a47) bg_button_pane_cp11_ParamLimits

0xd925,	// (0x00021a47) bg_button_pane_cp11

0xd938,	// (0x00021a5a) graphic2_pages_pane_g1_ParamLimits

0xd938,	// (0x00021a5a) graphic2_pages_pane_g1

0xd953,	// (0x00021a75) graphic2_pages_pane_g2_ParamLimits

0xd953,	// (0x00021a75) graphic2_pages_pane_g2

0x0001,

0xfda4,	// (0x00023ec6) graphic2_pages_pane_g_ParamLimits

0xfda4,	// (0x00023ec6) graphic2_pages_pane_g

0xd96b,	// (0x00021a8d) graphic2_pages_pane_t1_ParamLimits

0xd96b,	// (0x00021a8d) graphic2_pages_pane_t1

0xd983,	// (0x00021aa5) cell_graphic2_control_pane_ParamLimits

0xd983,	// (0x00021aa5) cell_graphic2_control_pane

0xd9b5,	// (0x00021ad7) cell_graphic2_pane_g1_ParamLimits

0xd9b5,	// (0x00021ad7) cell_graphic2_pane_g1

0xc2bc,	// (0x000203de) cell_graphic2_pane_g2_ParamLimits

0xc2bc,	// (0x000203de) cell_graphic2_pane_g2

0xca10,	// (0x00020b32) cell_graphic2_pane_g3_ParamLimits

0xca10,	// (0x00020b32) cell_graphic2_pane_g3

0xc2c9,	// (0x000203eb) cell_graphic2_pane_g4_ParamLimits

0xc2c9,	// (0x000203eb) cell_graphic2_pane_g4

0xd9c2,	// (0x00021ae4) cell_graphic2_pane_g5_ParamLimits

0xd9c2,	// (0x00021ae4) cell_graphic2_pane_g5

0x0004,

0xfda9,	// (0x00023ecb) cell_graphic2_pane_g_ParamLimits

0xfda9,	// (0x00023ecb) cell_graphic2_pane_g

0xd9e2,	// (0x00021b04) cell_graphic2_pane_t1_ParamLimits

0xd9e2,	// (0x00021b04) cell_graphic2_pane_t1

0x2ac2,	// (0x00016be4) grid_highlight_pane_cp11_ParamLimits

0x2ac2,	// (0x00016be4) grid_highlight_pane_cp11

0xc492,	// (0x000205b4) bg_button_pane_cp05

0xda2e,	// (0x00021b50) cell_graphic2_control_pane_g1

0x47fc,	// (0x0001891e) bg_touch_area_indi_pane_g1

0x6d95,	// (0x0001aeb7) aid_cmod_rocker_key_size

0x6d9f,	// (0x0001aec1) aid_cmode_itu_key_size

0x6da9,	// (0x0001aecb) main_cmode_video_pane

0x6db3,	// (0x0001aed5) main_comp_mode_itu_pane

0x6dbf,	// (0x0001aee1) main_comp_mode_rocker_pane

0x6dcb,	// (0x0001aeed) cell_cmode_rocker_pane_ParamLimits

0x6dcb,	// (0x0001aeed) cell_cmode_rocker_pane

0x6ddd,	// (0x0001aeff) cell_cmode_itu_pane_ParamLimits

0x6ddd,	// (0x0001aeff) cell_cmode_itu_pane

0xc778,	// (0x0002089a) bg_button_pane_cp06_ParamLimits

0xc778,	// (0x0002089a) bg_button_pane_cp06

0x4a6c,	// (0x00018b8e) cell_cmode_rocker_pane_g1_ParamLimits

0x4a6c,	// (0x00018b8e) cell_cmode_rocker_pane_g1

0x6327,	// (0x0001a449) cell_cmode_rocker_pane_g2_ParamLimits

0x6327,	// (0x0001a449) cell_cmode_rocker_pane_g2

0x0001,

0xfdb9,	// (0x00023edb) cell_cmode_rocker_pane_g_ParamLimits

0xfdb9,	// (0x00023edb) cell_cmode_rocker_pane_g

0xc2de,	// (0x00020400) bg_button_pane_cp07

0x6df2,	// (0x0001af14) cell_cmode_itu_pane_g1

0x6dfb,	// (0x0001af1d) cell_cmode_itu_pane_t1

0x6e09,	// (0x0001af2b) cell_cmode_itu_pane_t2

0x0001,

0xfdbe,	// (0x00023ee0) cell_cmode_itu_pane_t

0x654c,	// (0x0001a66e) aid_touch_ctrl_left

0x6554,	// (0x0001a676) aid_touch_ctrl_right

0xc2de,	// (0x00020400) compa_mode_pane

0xda54,	// (0x00021b76) aid_cmod_rocker_key_size_cp

0xda5e,	// (0x00021b80) aid_cmode_itu_key_size_cp

0x6e2b,	// (0x0001af4d) compa_mode_pane_g1

0x6e33,	// (0x0001af55) compa_mode_pane_g2

0x6e3b,	// (0x0001af5d) compa_mode_pane_g3

0x0002,

0xfdc3,	// (0x00023ee5) compa_mode_pane_g

0xda68,	// (0x00021b8a) main_comp_mode_itu_pane_cp

0xda70,	// (0x00021b92) main_comp_mode_rocker_pane_cp

0xda78,	// (0x00021b9a) cell_cmode_itu_pane_cp_ParamLimits

0xda78,	// (0x00021b9a) cell_cmode_itu_pane_cp

0xda8d,	// (0x00021baf) cell_cmode_rocker_pane_cp_ParamLimits

0xda8d,	// (0x00021baf) cell_cmode_rocker_pane_cp

0xc778,	// (0x0002089a) bg_button_pane_cp06_cp_ParamLimits

0xc778,	// (0x0002089a) bg_button_pane_cp06_cp

0x4a6c,	// (0x00018b8e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a6c,	// (0x00018b8e) cell_cmode_rocker_pane_g1_cp

0x47fc,	// (0x0001891e) cell_cmode_rocker_pane_g2_cp

0xc2de,	// (0x00020400) bg_button_pane_cp07_cp

0xda9f,	// (0x00021bc1) cell_cmode_itu_pane_g1_cp

0xdaa8,	// (0x00021bca) cell_cmode_itu_pane_t1_cp

0xdaa8,	// (0x00021bca) cell_cmode_itu_pane_t2_cp

0xba19,	// (0x0001fb3b) settings_code_pane_cp2

0xc34e,	// (0x00020470) bg_popup_window_pane_cp3_ParamLimits

0xc5ab,	// (0x000206cd) heading_pane_cp3_ParamLimits

0xc5b7,	// (0x000206d9) listscroll_popup_graphic_pane_ParamLimits

0xed65,	// (0x00022e87) fep_hwr_aid_pane_ParamLimits

0xf0d0,	// (0x000231f2) aid_touch_sctrl_top_ParamLimits

0xf0eb,	// (0x0002320d) sctrl_sk_top_pane_g1_ParamLimits

0xef45,	// (0x00023067) sctrl_sk_top_pane_g2_ParamLimits

0xfcf9,	// (0x00023e1b) sctrl_sk_top_pane_g_ParamLimits

0xf0f8,	// (0x0002321a) sctrl_sk_top_pane_t1_ParamLimits

0xf0d0,	// (0x000231f2) aid_touch_sctrl_bottom_ParamLimits

0xf0f8,	// (0x0002321a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd276,	// (0x00021398) aid_area_touch_clock

0x986c,	// (0x0001d98e) aid_vkb2_area_top_pane_cell_ParamLimits

0x986c,	// (0x0001d98e) aid_vkb2_area_top_pane_cell

0x9917,	// (0x0001da39) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x9917,	// (0x0001da39) aid_vkb2_area_bottom_pane_cell

0x6a04,	// (0x0001ab26) popup_char_count_window

0x6e91,	// (0x0001afb3) popup_char_count_window_g1

0x6e9a,	// (0x0001afbc) popup_char_count_window_g2

0x6ea3,	// (0x0001afc5) popup_char_count_window_g3

0x0002,

0xfdca,	// (0x00023eec) popup_char_count_window_g

0x6eac,	// (0x0001afce) popup_char_count_window_t1

0xf12a,	// (0x0002324c) popup_fep_char_preview_window_ParamLimits

0xf12a,	// (0x0002324c) popup_fep_char_preview_window

0x988c,	// (0x0001d9ae) vkb2_top_candi_pane_ParamLimits

0x988c,	// (0x0001d9ae) vkb2_top_candi_pane

0xdab6,	// (0x00021bd8) cell_vkb2_top_candi_pane_ParamLimits

0xdab6,	// (0x00021bd8) cell_vkb2_top_candi_pane

0xf3b9,	// (0x000234db) bg_popup_fep_char_preview_window_ParamLimits

0xf3b9,	// (0x000234db) bg_popup_fep_char_preview_window

0xf3d5,	// (0x000234f7) popup_fep_char_preview_window_t1_ParamLimits

0xf3d5,	// (0x000234f7) popup_fep_char_preview_window_t1

0x6f07,	// (0x0001b029) bg_popup_fep_char_preview_window_g1

0x6f0f,	// (0x0001b031) bg_popup_fep_char_preview_window_g2

0x6f17,	// (0x0001b039) bg_popup_fep_char_preview_window_g3

0x6f1f,	// (0x0001b041) bg_popup_fep_char_preview_window_g4

0x6f27,	// (0x0001b049) bg_popup_fep_char_preview_window_g5

0xf40f,	// (0x00023531) bg_popup_fep_char_preview_window_g6

0x6f2f,	// (0x0001b051) bg_popup_fep_char_preview_window_g7

0x6f37,	// (0x0001b059) bg_popup_fep_char_preview_window_g8

0x6f3f,	// (0x0001b061) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd1,	// (0x00023ef3) bg_popup_fep_char_preview_window_g

0xef45,	// (0x00023067) cell_vkb2_top_candi_pane_g1_ParamLimits

0xef45,	// (0x00023067) cell_vkb2_top_candi_pane_g1

0xef53,	// (0x00023075) cell_vkb2_top_candi_pane_g2_ParamLimits

0xef53,	// (0x00023075) cell_vkb2_top_candi_pane_g2

0x5c3e,	// (0x00019d60) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5c3e,	// (0x00019d60) cell_vkb2_top_candi_pane_g3

0xf417,	// (0x00023539) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf417,	// (0x00023539) cell_vkb2_top_candi_pane_g4

0x511d,	// (0x0001923f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x511d,	// (0x0001923f) cell_vkb2_top_candi_pane_g5

0xf3c7,	// (0x000234e9) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf3c7,	// (0x000234e9) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde4,	// (0x00023f06) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde4,	// (0x00023f06) cell_vkb2_top_candi_pane_g

0xf438,	// (0x0002355a) cell_vkb2_top_candi_pane_t1

0x950f,	// (0x0001d631) aid_size_touch_slider_mark_ParamLimits

0x950f,	// (0x0001d631) aid_size_touch_slider_mark

0xd7ce,	// (0x000218f0) grid_graphic2_catg_pane_ParamLimits

0xd7ce,	// (0x000218f0) grid_graphic2_catg_pane

0xd88a,	// (0x000219ac) popup_grid_graphic2_window_t1_ParamLimits

0xd88a,	// (0x000219ac) popup_grid_graphic2_window_t1

0xd8a0,	// (0x000219c2) popup_grid_graphic2_window_t2_ParamLimits

0xd8a0,	// (0x000219c2) popup_grid_graphic2_window_t2

0x0001,

0xfd9f,	// (0x00023ec1) popup_grid_graphic2_window_t_ParamLimits

0xfd9f,	// (0x00023ec1) popup_grid_graphic2_window_t

0xc492,	// (0x000205b4) bg_button_pane_cp05_ParamLimits

0xda2e,	// (0x00021b50) cell_graphic2_control_pane_g1_ParamLimits

0xdb1c,	// (0x00021c3e) cell_graphic2_catg_pane_ParamLimits

0xdb1c,	// (0x00021c3e) cell_graphic2_catg_pane

0xc2de,	// (0x00020400) bg_button_pane_cp12

0xdb2e,	// (0x00021c50) cell_graphic2_catg_pane_g1

0x6461,	// (0x0001a583) cell_tb_ext_pane_t1_ParamLimits

0xf21f,	// (0x00023341) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf21f,	// (0x00023341) vkb2_top_cell_right_narrow_pane

0xf237,	// (0x00023359) vkb2_top_cell_right_wide_pane_ParamLimits

0xf237,	// (0x00023359) vkb2_top_cell_right_wide_pane

0xe9d9,	// (0x00022afb) bg_vkb2_func_pane_ParamLimits

0xe9d9,	// (0x00022afb) bg_vkb2_func_pane

0xf27c,	// (0x0002339e) vkb2_top_cell_left_pane_g1_ParamLimits

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp03_ParamLimits

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp03

0xf2da,	// (0x000233fc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1d07,	// (0x00015e29) bg_vkb2_func_pane_g1

0x1d0f,	// (0x00015e31) bg_vkb2_func_pane_g2

0x1d1f,	// (0x00015e41) bg_vkb2_func_pane_g3

0x1d17,	// (0x00015e39) bg_vkb2_func_pane_g4

0x1d27,	// (0x00015e49) bg_vkb2_func_pane_g5

0x1d2f,	// (0x00015e51) bg_vkb2_func_pane_g6

0x1d37,	// (0x00015e59) bg_vkb2_func_pane_g7

0x1d3f,	// (0x00015e61) bg_vkb2_func_pane_g8

0x1cff,	// (0x00015e21) bg_vkb2_func_pane_g9

0x0008,

0xfdf1,	// (0x00023f13) bg_vkb2_func_pane_g

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp01_ParamLimits

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp01

0xf27c,	// (0x0002339e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf27c,	// (0x0002339e) vkb2_top_cell_right_wide_pane_g1

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp02_ParamLimits

0xe9d9,	// (0x00022afb) bg_vkb2_fuc_pane_cp02

0xf2da,	// (0x000233fc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf2da,	// (0x000233fc) vkb2_top_cell_right_narrow_pane_g1

0xcf9f,	// (0x000210c1) aid_touch_area_decrease_ParamLimits

0xcf9f,	// (0x000210c1) aid_touch_area_decrease

0xcfd5,	// (0x000210f7) aid_touch_area_increase_ParamLimits

0xcfd5,	// (0x000210f7) aid_touch_area_increase

0xcffd,	// (0x0002111f) aid_touch_area_mute_ParamLimits

0xcffd,	// (0x0002111f) aid_touch_area_mute

0xd02d,	// (0x0002114f) aid_touch_area_slider_ParamLimits

0xd02d,	// (0x0002114f) aid_touch_area_slider

0xd06d,	// (0x0002118f) popup_slider_window_g4_ParamLimits

0xd06d,	// (0x0002118f) popup_slider_window_g4

0xd095,	// (0x000211b7) popup_slider_window_g5_ParamLimits

0xd095,	// (0x000211b7) popup_slider_window_g5

0xd0c9,	// (0x000211eb) popup_slider_window_g6_ParamLimits

0xd0c9,	// (0x000211eb) popup_slider_window_g6

0x623d,	// (0x0001a35f) popup_slider_window_t2_ParamLimits

0x623d,	// (0x0001a35f) popup_slider_window_t2

0x0001,

0xfced,	// (0x00023e0f) popup_slider_window_t_ParamLimits

0xfced,	// (0x00023e0f) popup_slider_window_t

0xd0e5,	// (0x00021207) slider_pane_ParamLimits

0xd0e5,	// (0x00021207) slider_pane

0x6f62,	// (0x0001b084) slider_pane_g1_ParamLimits

0x6f62,	// (0x0001b084) slider_pane_g1

0x6f76,	// (0x0001b098) slider_pane_g2_ParamLimits

0x6f76,	// (0x0001b098) slider_pane_g2

0x6f8c,	// (0x0001b0ae) slider_pane_g3_ParamLimits

0x6f8c,	// (0x0001b0ae) slider_pane_g3

0x0003,

0xfe04,	// (0x00023f26) slider_pane_g_ParamLimits

0xfe04,	// (0x00023f26) slider_pane_g

0x932e,	// (0x0001d450) popup_tb_float_extension_window_ParamLimits

0x932e,	// (0x0001d450) popup_tb_float_extension_window

0x6fb8,	// (0x0001b0da) aid_size_cell_tb_float_ext

0xc2de,	// (0x00020400) bg_popup_sub_window_cp28

0xdb37,	// (0x00021c59) grid_tb_float_ext_pane

0xdb41,	// (0x00021c63) cell_tb_float_ext_pane_ParamLimits

0xdb41,	// (0x00021c63) cell_tb_float_ext_pane

0xdb5b,	// (0x00021c7d) cell_tb_float_ext_pane_g1

0xdb64,	// (0x00021c86) grid_highlight_pane_cp12

0x9602,	// (0x0001d724) cell_last_hwr_side_pane_ParamLimits

0x9602,	// (0x0001d724) cell_last_hwr_side_pane

0x47fc,	// (0x0001891e) cell_last_hwr_side_pane_g1

0x6ffa,	// (0x0001b11c) cell_last_hwr_side_pane_g2

0x0001,

0xfe0d,	// (0x00023f2f) cell_last_hwr_side_pane_g

0x99f3,	// (0x0001db15) vkb2_area_bottom_space_btn_pane_ParamLimits

0x99f3,	// (0x0001db15) vkb2_area_bottom_space_btn_pane

0xef45,	// (0x00023067) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6ab9,	// (0x0001abdb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf438,	// (0x0002355a) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf457,	// (0x00023579) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf457,	// (0x00023579) vkb2_area_bottom_space_btn_pane_g1

0xf491,	// (0x000235b3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf491,	// (0x000235b3) vkb2_area_bottom_space_btn_pane_g2

0xf4c7,	// (0x000235e9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf4c7,	// (0x000235e9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe12,	// (0x00023f34) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe12,	// (0x00023f34) vkb2_area_bottom_space_btn_pane_g

0xee1a,	// (0x00022f3c) cel_fep_hwr_func_pane_ParamLimits

0xee1a,	// (0x00022f3c) cel_fep_hwr_func_pane

0x95d7,	// (0x0001d6f9) cell_hwr_side_button_pane_ParamLimits

0x95d7,	// (0x0001d6f9) cell_hwr_side_button_pane

0xd276,	// (0x00021398) aid_area_touch_clock_ParamLimits

0xc492,	// (0x000205b4) bg_uniindi_top_pane_ParamLimits

0xd288,	// (0x000213aa) uniindi_top_pane_g1_ParamLimits

0xd29e,	// (0x000213c0) uniindi_top_pane_g2_ParamLimits

0xd2aa,	// (0x000213cc) uniindi_top_pane_g3_ParamLimits

0x64db,	// (0x0001a5fd) uniindi_top_pane_g4_ParamLimits

0xfd25,	// (0x00023e47) uniindi_top_pane_g_ParamLimits

0xd2bb,	// (0x000213dd) uniindi_top_pane_t1_ParamLimits

0xc492,	// (0x000205b4) bg_vkb2_func_pane_cp01_ParamLimits

0xc492,	// (0x000205b4) bg_vkb2_func_pane_cp01

0x7003,	// (0x0001b125) cel_fep_hwr_func_pane_g1_ParamLimits

0x7003,	// (0x0001b125) cel_fep_hwr_func_pane_g1

0xc492,	// (0x000205b4) bg_vkb2_func_pane_cp02_ParamLimits

0xc492,	// (0x000205b4) bg_vkb2_func_pane_cp02

0x7003,	// (0x0001b125) cell_hwr_side_button_pane_g1_ParamLimits

0x7003,	// (0x0001b125) cell_hwr_side_button_pane_g1

0x1b61,	// (0x00015c83) status_pane_g4_ParamLimits

0x1b61,	// (0x00015c83) status_pane_g4

0x1b7b,	// (0x00015c9d) status_pane_t1

0x453d,	// (0x0001865f) form2_midp_gauge_slider_cont_pane

0x4545,	// (0x00018667) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe2c,	// (0x0001ff4e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe3e,	// (0x0001ff60) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00023c0e) form2_midp_gauge_slider_pane_t_ParamLimits

0x457b,	// (0x0001869d) form2_midp_slider_pane_ParamLimits

0xf11c,	// (0x0002323e) aid_size_cell_func_vkb2_ParamLimits

0xf11c,	// (0x0002323e) aid_size_cell_func_vkb2

0x6fa4,	// (0x0001b0c6) slider_pane_g4_ParamLimits

0x6fa4,	// (0x0001b0c6) slider_pane_g4

0x9a54,	// (0x0001db76) form2_midp_gauge_slider_pane_t2_cp01

0x9a62,	// (0x0001db84) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9a62,	// (0x0001db84) form2_midp_gauge_slider_pane_t3_cp01

0xf511,	// (0x00023633) form2_midp_slider_pane_cp01

0xc2de,	// (0x00020400) navi_smil_pane

0x703c,	// (0x0001b15e) navi_smil_pane_g1

0x7044,	// (0x0001b166) navi_smil_pane_t1

0x7011,	// (0x0001b133) form2_midp_slider_pane_g1

0x701a,	// (0x0001b13c) form2_midp_slider_pane_g2

0x7022,	// (0x0001b144) form2_midp_slider_pane_g3

0x7011,	// (0x0001b133) form2_midp_slider_pane_g4

0xdb6d,	// (0x00021c8f) form2_midp_slider_pane_g5

0x0004,

0xfe1b,	// (0x00023f3d) form2_midp_slider_pane_g

0xf501,	// (0x00023623) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf501,	// (0x00023623) vkb2_area_bottom_space_btn_pane_g4

0xaf4f,	// (0x0001f071) lc0_navi_pane_ParamLimits

0xaf4f,	// (0x0001f071) lc0_navi_pane

0xafb9,	// (0x0001f0db) lc0_stat_indi_pane_ParamLimits

0xafb9,	// (0x0001f0db) lc0_stat_indi_pane

0xafce,	// (0x0001f0f0) ls0_title_pane_ParamLimits

0xafce,	// (0x0001f0f0) ls0_title_pane

0xc778,	// (0x0002089a) bg_popup_sub_pane_cp14_ParamLimits

0xd25d,	// (0x0002137f) list_uniindi_pane_ParamLimits

0xd269,	// (0x0002138b) uniindi_top_pane_ParamLimits

0x6524,	// (0x0001a646) list_single_uniindi_pane_g1_ParamLimits

0x6537,	// (0x0001a659) list_single_uniindi_pane_t1_ParamLimits

0x9a7f,	// (0x0001dba1) lc0_stat_clock_pane_ParamLimits

0x9a7f,	// (0x0001dba1) lc0_stat_clock_pane

0xdb78,	// (0x00021c9a) lc0_stat_indi_pane_g1_ParamLimits

0xdb78,	// (0x00021c9a) lc0_stat_indi_pane_g1

0xdb85,	// (0x00021ca7) lc0_stat_indi_pane_g2_ParamLimits

0xdb85,	// (0x00021ca7) lc0_stat_indi_pane_g2

0x0001,

0xfe26,	// (0x00023f48) lc0_stat_indi_pane_g_ParamLimits

0xfe26,	// (0x00023f48) lc0_stat_indi_pane_g

0x9a8f,	// (0x0001dbb1) lc0_uni_indicator_pane_ParamLimits

0x9a8f,	// (0x0001dbb1) lc0_uni_indicator_pane

0xdb92,	// (0x00021cb4) ls0_title_pane_g1_ParamLimits

0xdb92,	// (0x00021cb4) ls0_title_pane_g1

0xdba6,	// (0x00021cc8) ls0_title_pane_t1_ParamLimits

0xdba6,	// (0x00021cc8) ls0_title_pane_t1

0x9a9f,	// (0x0001dbc1) lc0_uni_indicator_pane_g1_ParamLimits

0x9a9f,	// (0x0001dbc1) lc0_uni_indicator_pane_g1

0x70b6,	// (0x0001b1d8) lc0_stat_clock_pane_t1

0xe176,	// (0x00022298) main_ai5_pane

0x70c4,	// (0x0001b1e6) ai5_sk_pane_ParamLimits

0x70c4,	// (0x0001b1e6) ai5_sk_pane

0xdbd4,	// (0x00021cf6) cell_ai5_widget_pane_ParamLimits

0xdbd4,	// (0x00021cf6) cell_ai5_widget_pane

0x7183,	// (0x0001b2a5) aid_size_cell_widget_grid

0x7191,	// (0x0001b2b3) bg_ai5_widget_pane_ParamLimits

0x7191,	// (0x0001b2b3) bg_ai5_widget_pane

0x7205,	// (0x0001b327) cell_ai5_widget_pane_g2

0x7215,	// (0x0001b337) cell_ai5_widget_pane_g3

0x722c,	// (0x0001b34e) cell_ai5_widget_pane_g4

0x7238,	// (0x0001b35a) cell_ai5_widget_pane_g5

0x7244,	// (0x0001b366) cell_ai5_widget_pane_g6

0x7250,	// (0x0001b372) cell_ai5_widget_pane_g7

0x7298,	// (0x0001b3ba) cell_ai5_widget_pane_t1_ParamLimits

0x7298,	// (0x0001b3ba) cell_ai5_widget_pane_t1

0x72b5,	// (0x0001b3d7) cell_ai5_widget_pane_t2_ParamLimits

0x72b5,	// (0x0001b3d7) cell_ai5_widget_pane_t2

0x72cd,	// (0x0001b3ef) cell_ai5_widget_pane_t3_ParamLimits

0x72cd,	// (0x0001b3ef) cell_ai5_widget_pane_t3

0x72e5,	// (0x0001b407) cell_ai5_widget_pane_t4_ParamLimits

0x72e5,	// (0x0001b407) cell_ai5_widget_pane_t4

0x7302,	// (0x0001b424) cell_ai5_widget_pane_t5_ParamLimits

0x7302,	// (0x0001b424) cell_ai5_widget_pane_t5

0x7321,	// (0x0001b443) cell_ai5_widget_pane_t6_ParamLimits

0x7321,	// (0x0001b443) cell_ai5_widget_pane_t6

0x7333,	// (0x0001b455) cell_ai5_widget_pane_t7_ParamLimits

0x7333,	// (0x0001b455) cell_ai5_widget_pane_t7

0x734c,	// (0x0001b46e) cell_ai5_widget_pane_t8_ParamLimits

0x734c,	// (0x0001b46e) cell_ai5_widget_pane_t8

0x0009,

0xfe40,	// (0x00023f62) cell_ai5_widget_pane_t_ParamLimits

0xfe40,	// (0x00023f62) cell_ai5_widget_pane_t

0x73a0,	// (0x0001b4c2) grid_ai5_widget_pane

0xc778,	// (0x0002089a) highlight_cell_ai5_widget_pane_ParamLimits

0xc778,	// (0x0002089a) highlight_cell_ai5_widget_pane

0xdc3a,	// (0x00021d5c) ai5_sk_left_pane

0xdc44,	// (0x00021d66) ai5_sk_middle_pane

0xdc4e,	// (0x00021d70) ai5_sk_right_pane

0x73cc,	// (0x0001b4ee) bg_ai5_widget_pane_g1_ParamLimits

0x73cc,	// (0x0001b4ee) bg_ai5_widget_pane_g1

0x73d8,	// (0x0001b4fa) bg_ai5_widget_pane_g2_ParamLimits

0x73d8,	// (0x0001b4fa) bg_ai5_widget_pane_g2

0x73e4,	// (0x0001b506) bg_ai5_widget_pane_g3_ParamLimits

0x73e4,	// (0x0001b506) bg_ai5_widget_pane_g3

0x73f0,	// (0x0001b512) bg_ai5_widget_pane_g4_ParamLimits

0x73f0,	// (0x0001b512) bg_ai5_widget_pane_g4

0x73fc,	// (0x0001b51e) bg_ai5_widget_pane_g5_ParamLimits

0x73fc,	// (0x0001b51e) bg_ai5_widget_pane_g5

0x7408,	// (0x0001b52a) bg_ai5_widget_pane_g6_ParamLimits

0x7408,	// (0x0001b52a) bg_ai5_widget_pane_g6

0x7414,	// (0x0001b536) bg_ai5_widget_pane_g7_ParamLimits

0x7414,	// (0x0001b536) bg_ai5_widget_pane_g7

0x7420,	// (0x0001b542) bg_ai5_widget_pane_g8_ParamLimits

0x7420,	// (0x0001b542) bg_ai5_widget_pane_g8

0x742c,	// (0x0001b54e) bg_ai5_widget_pane_g9_ParamLimits

0x742c,	// (0x0001b54e) bg_ai5_widget_pane_g9

0x0008,

0xfe55,	// (0x00023f77) bg_ai5_widget_pane_g_ParamLimits

0xfe55,	// (0x00023f77) bg_ai5_widget_pane_g

0x745e,	// (0x0001b580) cell_shortcut_ai5_widget_pane_ParamLimits

0x745e,	// (0x0001b580) cell_shortcut_ai5_widget_pane

0x147a,	// (0x0001559c) bg_cell_shortcut_ai5_widget_pane

0x746f,	// (0x0001b591) cell_grid_ai5_widget_pane_g1

0x147a,	// (0x0001559c) highlight_cell_shortcut_ai5_widget_pane

0x1d07,	// (0x00015e29) ai5_sk_left_pane_g1

0x7478,	// (0x0001b59a) ai5_sk_left_pane_g2

0x7480,	// (0x0001b5a2) ai5_sk_left_pane_g3

0x7488,	// (0x0001b5aa) ai5_sk_left_pane_g4

0x0003,

0xfe68,	// (0x00023f8a) ai5_sk_left_pane_g

0x7490,	// (0x0001b5b2) ai5_sk_left_pane_t1

0x1d0f,	// (0x00015e31) ai5_sk_right_pane_g1

0x749e,	// (0x0001b5c0) ai5_sk_right_pane_g2

0x74a6,	// (0x0001b5c8) ai5_sk_right_pane_g3

0x74ae,	// (0x0001b5d0) ai5_sk_right_pane_g4

0x0003,

0xfe71,	// (0x00023f93) ai5_sk_right_pane_g

0x74b6,	// (0x0001b5d8) ai5_sk_right_pane_t1

0x1d0f,	// (0x00015e31) ai5_sk_middle_pane_g1

0x1d07,	// (0x00015e29) ai5_sk_middle_pane_g2

0x1d27,	// (0x00015e49) ai5_sk_middle_pane_g3

0x74a6,	// (0x0001b5c8) ai5_sk_middle_pane_g4

0x7480,	// (0x0001b5a2) ai5_sk_middle_pane_g5

0x74c4,	// (0x0001b5e6) ai5_sk_middle_pane_g6

0xdc58,	// (0x00021d7a) ai5_sk_middle_pane_g7

0x0006,

0xfe7a,	// (0x00023f9c) ai5_sk_middle_pane_g

0xae3b,	// (0x0001ef5d) aid_touch_area_size_lc0_ParamLimits

0xae3b,	// (0x0001ef5d) aid_touch_area_size_lc0

0xef74,	// (0x00023096) cell_hwr_candidate_pane_t1_ParamLimits

0x1832,	// (0x00015954) aid_touch_navi_pane

0xb0c7,	// (0x0001f1e9) status_dt_navi_pane_ParamLimits

0xb0c7,	// (0x0001f1e9) status_dt_navi_pane

0xb0df,	// (0x0001f201) status_dt_sta_pane_ParamLimits

0xb0df,	// (0x0001f201) status_dt_sta_pane

0xdc60,	// (0x00021d82) dt_sta_controll_pane

0xdc6d,	// (0x00021d8f) dt_sta_indi_pane

0xdc7a,	// (0x00021d9c) dt_sta_title_pane

0xc492,	// (0x000205b4) bg_dt_sta_indi_pane_ParamLimits

0xc492,	// (0x000205b4) bg_dt_sta_indi_pane

0xdc8c,	// (0x00021dae) dt_sta_battery_pane

0xdc94,	// (0x00021db6) dt_sta_indi_pane_g1

0x7516,	// (0x0001b638) dt_sta_indi_pane_g2

0x751f,	// (0x0001b641) dt_sta_indi_pane_g3

0x0002,

0xfe89,	// (0x00023fab) dt_sta_indi_pane_g

0x7528,	// (0x0001b64a) dt_sta_signal_pane

0xc778,	// (0x0002089a) bg_dt_sta_title_pane_ParamLimits

0xc778,	// (0x0002089a) bg_dt_sta_title_pane

0x2c22,	// (0x00016d44) dt_sta_title_pane_g1

0xdc9d,	// (0x00021dbf) dt_sta_title_pane_t1_ParamLimits

0xdc9d,	// (0x00021dbf) dt_sta_title_pane_t1

0xc2de,	// (0x00020400) bg_dt_sta_control_pane

0xdcb2,	// (0x00021dd4) dt_sta_controll_pane_g1

0xdcbb,	// (0x00021ddd) bg_dt_sta_title_pane_g1

0xdcc4,	// (0x00021de6) bg_dt_sta_title_pane_g2

0xdccd,	// (0x00021def) bg_dt_sta_title_pane_g3

0x0002,

0xfe90,	// (0x00023fb2) bg_dt_sta_title_pane_g

0x47fc,	// (0x0001891e) bg_dt_sta_indi_pane_g1

0x756a,	// (0x0001b68c) dt_sta_signal_pane_g1

0x7572,	// (0x0001b694) dt_sta_signal_pane_g2

0x0001,

0xfe97,	// (0x00023fb9) dt_sta_signal_pane_g

0x757a,	// (0x0001b69c) dt_sta_battery_pane_g1

0x7583,	// (0x0001b6a5) dt_sta_battery_pane_t1

0x47fc,	// (0x0001891e) bg_dt_sta_control_pane_g1

0xe746,	// (0x00022868) fep_china_uni_eep_pane

0xe74e,	// (0x00022870) fep_china_uni_entry_pane_ParamLimits

0xe75e,	// (0x00022880) popup_fep_china_uni_window_g1_ParamLimits

0xe76e,	// (0x00022890) popup_fep_china_uni_window_g2_ParamLimits

0xe76e,	// (0x00022890) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00023830) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00023830) popup_fep_china_uni_window_g

0x7592,	// (0x0001b6b4) fep_china_uni_eep_pane_g1

0x759a,	// (0x0001b6bc) fep_china_uni_eep_pane_t1

0x7033,	// (0x0001b155) aid_touch_area_size_smil_player

0x1988,	// (0x00015aaa) lc0_clock_pane

0x1b6f,	// (0x00015c91) status_pane_g5_ParamLimits

0x1b6f,	// (0x00015c91) status_pane_g5

0x8e64,	// (0x0001cf86) popup_keymap_window

0x1b2d,	// (0x00015c4f) status_icon_pane

0x7215,	// (0x0001b337) cell_ai5_widget_pane_g3_ParamLimits

0x722c,	// (0x0001b34e) cell_ai5_widget_pane_g4_ParamLimits

0x7238,	// (0x0001b35a) cell_ai5_widget_pane_g5_ParamLimits

0x725c,	// (0x0001b37e) cell_ai5_widget_pane_g8_ParamLimits

0x725c,	// (0x0001b37e) cell_ai5_widget_pane_g8

0x7270,	// (0x0001b392) cell_ai5_widget_pane_g9_ParamLimits

0x7270,	// (0x0001b392) cell_ai5_widget_pane_g9

0x7284,	// (0x0001b3a6) cell_ai5_widget_pane_g10_ParamLimits

0x7284,	// (0x0001b3a6) cell_ai5_widget_pane_g10

0x75a9,	// (0x0001b6cb) status_icon_pane_g1

0xc2de,	// (0x00020400) bg_popup_sub_pane_cp13

0x75b1,	// (0x0001b6d3) popup_keymap_window_t1

0xadc9,	// (0x0001eeeb) control_pane_g6_ParamLimits

0xadc9,	// (0x0001eeeb) control_pane_g6

0xadd6,	// (0x0001eef8) control_pane_g7_ParamLimits

0xadd6,	// (0x0001eef8) control_pane_g7

0xade3,	// (0x0001ef05) control_pane_g8_ParamLimits

0xade3,	// (0x0001ef05) control_pane_g8

0xdc60,	// (0x00021d82) dt_sta_controll_pane_ParamLimits

0xdc6d,	// (0x00021d8f) dt_sta_indi_pane_ParamLimits

0xdc7a,	// (0x00021d9c) dt_sta_title_pane_ParamLimits

0xc665,	// (0x00020787) aid_size_touch_scroll_bar_cale

0x88bc,	// (0x0001c9de) popup_discreet_window_ParamLimits

0x88bc,	// (0x0001c9de) popup_discreet_window

0x890e,	// (0x0001ca30) popup_sk_window

0x2466,	// (0x00016588) bg_popup_sub_pane_cp28_ParamLimits

0x2466,	// (0x00016588) bg_popup_sub_pane_cp28

0x75bf,	// (0x0001b6e1) popup_discreet_window_g1_ParamLimits

0x75bf,	// (0x0001b6e1) popup_discreet_window_g1

0xdcd6,	// (0x00021df8) popup_discreet_window_t1_ParamLimits

0xdcd6,	// (0x00021df8) popup_discreet_window_t1

0x75fd,	// (0x0001b71f) popup_discreet_window_t2_ParamLimits

0x75fd,	// (0x0001b71f) popup_discreet_window_t2

0x0002,

0xfe9c,	// (0x00023fbe) popup_discreet_window_t_ParamLimits

0xfe9c,	// (0x00023fbe) popup_discreet_window_t

0xf51a,	// (0x0002363c) popup_sk_window_g1

0xf524,	// (0x00023646) popup_sk_window_g2

0x0001,

0xfea3,	// (0x00023fc5) popup_sk_window_g

0x9aca,	// (0x0001dbec) popup_sk_window_t1

0x9ad8,	// (0x0001dbfa) popup_sk_window_t1_copy1

0x7205,	// (0x0001b327) cell_ai5_widget_pane_g2_ParamLimits

0x735e,	// (0x0001b480) cell_ai5_widget_pane_t9_ParamLimits

0x735e,	// (0x0001b480) cell_ai5_widget_pane_t9

0xc2de,	// (0x00020400) main_fep_fshwr2_pane

0x9ae6,	// (0x0001dc08) aid_fshwr2_btn_pane

0x9af8,	// (0x0001dc1a) aid_fshwr2_syb_pane

0x9b0a,	// (0x0001dc2c) aid_fshwr2_txt_pane

0x9b19,	// (0x0001dc3b) fshwr2_func_candi_pane

0x9b38,	// (0x0001dc5a) fshwr2_hwr_syb_pane

0x9b53,	// (0x0001dc75) fshwr2_icf_pane

0xe176,	// (0x00022298) fshwr2_icf_bg_pane

0xf52c,	// (0x0002364e) fshwr2_icf_pane_t1_ParamLimits

0xf52c,	// (0x0002364e) fshwr2_icf_pane_t1

0xe62f,	// (0x00022751) fshwr2_func_candi_pane_g1

0xdcf4,	// (0x00021e16) fshwr2_func_candi_row_pane_ParamLimits

0xdcf4,	// (0x00021e16) fshwr2_func_candi_row_pane

0x9b7f,	// (0x0001dca1) cell_fshwr2_syb_pane_ParamLimits

0x9b7f,	// (0x0001dca1) cell_fshwr2_syb_pane

0xef45,	// (0x00023067) fshwr2_hwr_syb_pane_g1_ParamLimits

0xef45,	// (0x00023067) fshwr2_hwr_syb_pane_g1

0xe176,	// (0x00022298) bg_popup_call_pane_cp01

0x9b95,	// (0x0001dcb7) fshwr2_func_candi_cell_pane_ParamLimits

0x9b95,	// (0x0001dcb7) fshwr2_func_candi_cell_pane

0xdd17,	// (0x00021e39) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xdd17,	// (0x00021e39) fshwr2_func_candi_cell_bg_pane

0x9be0,	// (0x0001dd02) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9be0,	// (0x0001dd02) fshwr2_func_candi_cell_pane_g1

0x9c17,	// (0x0001dd39) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9c17,	// (0x0001dd39) fshwr2_func_candi_cell_pane_t1

0xe176,	// (0x00022298) bg_button_pane_cp08

0x765f,	// (0x0001b781) cell_fshwr2_syb_bg_pane

0x9c32,	// (0x0001dd54) cell_fshwr2_syb_bg_pane_g1

0x9c3a,	// (0x0001dd5c) cell_fshwr2_syb_bg_pane_t1

0xc778,	// (0x0002089a) main_tmo_pane

0xb7b9,	// (0x0001f8db) uni_indicator_pane_g1_ParamLimits

0xb7cf,	// (0x0001f8f1) uni_indicator_pane_g2_ParamLimits

0xb7e5,	// (0x0001f907) uni_indicator_pane_g3_ParamLimits

0x2f8f,	// (0x000170b1) uni_indicator_pane_g4_ParamLimits

0x2f8f,	// (0x000170b1) uni_indicator_pane_g4

0x2fa3,	// (0x000170c5) uni_indicator_pane_g5_ParamLimits

0x2fa3,	// (0x000170c5) uni_indicator_pane_g5

0x2fa3,	// (0x000170c5) uni_indicator_pane_g6_ParamLimits

0x2fa3,	// (0x000170c5) uni_indicator_pane_g6

0xf906,	// (0x00023a28) uni_indicator_pane_g_ParamLimits

0xcf81,	// (0x000210a3) popup_tmo_note_window_ParamLimits

0xcf81,	// (0x000210a3) popup_tmo_note_window

0xf1f1,	// (0x00023313) fshwr2_bg_pane

0x9c08,	// (0x0001dd2a) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9c08,	// (0x0001dd2a) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea8,	// (0x00023fca) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea8,	// (0x00023fca) fshwr2_func_candi_cell_pane_g

0xef2d,	// (0x0002304f) bg_popup_window_pane_cp01

0xf545,	// (0x00023667) bg_popup_window_pane_g1_cp01

0x7667,	// (0x0001b789) bg_popup_window_pane_cp22_ParamLimits

0x7667,	// (0x0001b789) bg_popup_window_pane_cp22

0xdd23,	// (0x00021e45) listscroll_tmo_link_pane_ParamLimits

0xdd23,	// (0x00021e45) listscroll_tmo_link_pane

0x76b5,	// (0x0001b7d7) popup_tmo_note_window_g1_ParamLimits

0x76b5,	// (0x0001b7d7) popup_tmo_note_window_g1

0xdd63,	// (0x00021e85) tmo_note_info_pane_ParamLimits

0xdd63,	// (0x00021e85) tmo_note_info_pane

0xdd7d,	// (0x00021e9f) list_tmo_note_info_pane_g1_ParamLimits

0xdd7d,	// (0x00021e9f) list_tmo_note_info_pane_g1

0x76f3,	// (0x0001b815) list_tmo_note_info_pane_g2_ParamLimits

0x76f3,	// (0x0001b815) list_tmo_note_info_pane_g2

0x0001,

0xfead,	// (0x00023fcf) list_tmo_note_info_pane_g_ParamLimits

0xfead,	// (0x00023fcf) list_tmo_note_info_pane_g

0x770f,	// (0x0001b831) list_tmo_note_info_text_pane_ParamLimits

0x770f,	// (0x0001b831) list_tmo_note_info_text_pane

0x7790,	// (0x0001b8b2) list_tmo_link_pane

0x779d,	// (0x0001b8bf) scroll_pane_cp20

0x77aa,	// (0x0001b8cc) list_single_tmo_link_pane_ParamLimits

0x77aa,	// (0x0001b8cc) list_single_tmo_link_pane

0x77ba,	// (0x0001b8dc) list_single_tmo_link_pane_t1

0x77c8,	// (0x0001b8ea) list_tmo_note_info_text_pane_t1_ParamLimits

0x77c8,	// (0x0001b8ea) list_tmo_note_info_text_pane_t1

0xa7e7,	// (0x0001e909) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7e7,	// (0x0001e909) aid_size_touch_scroll_bar_cp01

0xa6e7,	// (0x0001e809) aid_size_touch_slider_marker

0x88fe,	// (0x0001ca20) popup_settings_window_ParamLimits

0x88fe,	// (0x0001ca20) popup_settings_window

0x17e2,	// (0x00015904) popup_candi_list_indi_window

0x1832,	// (0x00015954) aid_touch_navi_pane_ParamLimits

0xf0a4,	// (0x000231c6) rs_clock_indi_pane

0xf0ad,	// (0x000231cf) sctrl_sk_bottom_pane_ParamLimits

0xf0be,	// (0x000231e0) sctrl_sk_top_pane_ParamLimits

0x9730,	// (0x0001d852) popup_fep_tooltip_window

0x7183,	// (0x0001b2a5) aid_size_cell_widget_grid_ParamLimits

0x71f0,	// (0x0001b312) cell_ai5_widget_pane_g1_ParamLimits

0x71f0,	// (0x0001b312) cell_ai5_widget_pane_g1

0x7244,	// (0x0001b366) cell_ai5_widget_pane_g6_ParamLimits

0x7250,	// (0x0001b372) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2b,	// (0x00023f4d) cell_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x00023f4d) cell_ai5_widget_pane_g

0x7382,	// (0x0001b4a4) cell_ai5_widget_pane_t10_ParamLimits

0x7382,	// (0x0001b4a4) cell_ai5_widget_pane_t10

0x73a0,	// (0x0001b4c2) grid_ai5_widget_pane_ParamLimits

0x7438,	// (0x0001b55a) cell_contacts_ai5_widget_pane_ParamLimits

0x7438,	// (0x0001b55a) cell_contacts_ai5_widget_pane

0x7612,	// (0x0001b734) popup_discreet_window_t3_ParamLimits

0x7612,	// (0x0001b734) popup_discreet_window_t3

0x9b6b,	// (0x0001dc8d) popup_fshwr2_char_preview_window_ParamLimits

0x9b6b,	// (0x0001dc8d) popup_fshwr2_char_preview_window

0xdd94,	// (0x00021eb6) tmo_note_info_pane_t1

0xdda9,	// (0x00021ecb) tmo_note_info_pane_t2

0xddc0,	// (0x00021ee2) tmo_note_info_pane_t3

0x776c,	// (0x0001b88e) tmo_note_info_pane_t4

0x777e,	// (0x0001b8a0) tmo_note_info_pane_t5

0x0004,

0xfeb2,	// (0x00023fd4) tmo_note_info_pane_t

0x7790,	// (0x0001b8b2) list_tmo_link_pane_ParamLimits

0x779d,	// (0x0001b8bf) scroll_pane_cp20_ParamLimits

0xe176,	// (0x00022298) bg_popup_fep_char_preview_window_cp01

0xddd5,	// (0x00021ef7) popup_fshwr2_char_preview_window_t1

0x77ef,	// (0x0001b911) popup_candi_list_indi_window_g1

0x77f8,	// (0x0001b91a) bg_cell_contacts_ai5_widget_pane

0x7804,	// (0x0001b926) cell_contacts_ai5_widget_pane_g1

0x5072,	// (0x00019194) cell_contacts_ai5_widget_pane_g2

0x7819,	// (0x0001b93b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebd,	// (0x00023fdf) cell_contacts_ai5_widget_pane_g

0x7825,	// (0x0001b947) cell_contacts_ai5_widget_pane_t1

0xc778,	// (0x0002089a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x789c,	// (0x0001b9be) settings_container_pane

0x147a,	// (0x0001559c) listscroll_set_pane_copy1

0x3bd5,	// (0x00017cf7) scroll_pane_cp121_copy1

0x221f,	// (0x00016341) set_content_pane_copy1

0xde48,	// (0x00021f6a) aid_height_set_list_copy1_ParamLimits

0xde48,	// (0x00021f6a) aid_height_set_list_copy1

0x31ad,	// (0x000172cf) aid_size_parent_copy1_ParamLimits

0x31ad,	// (0x000172cf) aid_size_parent_copy1

0xde54,	// (0x00021f76) button_value_adjust_pane_cp6_copy1_ParamLimits

0xde54,	// (0x00021f76) button_value_adjust_pane_cp6_copy1

0x17c8,	// (0x000158ea) list_highlight_pane_cp2_copy1_ParamLimits

0x17c8,	// (0x000158ea) list_highlight_pane_cp2_copy1

0xde68,	// (0x00021f8a) list_set_pane_copy1_ParamLimits

0xde68,	// (0x00021f8a) list_set_pane_copy1

0xdde3,	// (0x00021f05) main_pane_set_t1_copy1_ParamLimits

0xdde3,	// (0x00021f05) main_pane_set_t1_copy1

0xde1d,	// (0x00021f3f) main_pane_set_t2_copy1_ParamLimits

0xde1d,	// (0x00021f3f) main_pane_set_t2_copy1

0xdf15,	// (0x00022037) main_pane_set_t3_copy1

0xdf23,	// (0x00022045) main_pane_set_t4_copy1

0xde3c,	// (0x00021f5e) set_content_pane_g1_copy1_ParamLimits

0xde3c,	// (0x00021f5e) set_content_pane_g1_copy1

0xdf31,	// (0x00022053) setting_code_pane_copy1

0x7999,	// (0x0001babb) setting_slider_graphic_pane_copy1

0x7999,	// (0x0001babb) setting_slider_pane_copy1

0x7999,	// (0x0001babb) setting_text_pane_copy1

0x7999,	// (0x0001babb) setting_volume_pane_copy1

0xdf31,	// (0x00022053) settings_code_pane_cp2_copy1

0xdf39,	// (0x0002205b) settings_code_pane_cp_copy1_ParamLimits

0xdf39,	// (0x0002205b) settings_code_pane_cp_copy1

0x9c49,	// (0x0001dd6b) volume_set_pane_copy1

0xdf4d,	// (0x0002206f) volume_set_pane_g10_copy1

0xdf55,	// (0x00022077) volume_set_pane_g1_copy1

0xdf5d,	// (0x0002207f) volume_set_pane_g2_copy1

0xdf65,	// (0x00022087) volume_set_pane_g3_copy1

0xdf6d,	// (0x0002208f) volume_set_pane_g4_copy1

0xdf75,	// (0x00022097) volume_set_pane_g5_copy1

0xdf7d,	// (0x0002209f) volume_set_pane_g6_copy1

0xdf85,	// (0x000220a7) volume_set_pane_g7_copy1

0xdf8d,	// (0x000220af) volume_set_pane_g8_copy1

0xdf95,	// (0x000220b7) volume_set_pane_g9_copy1

0xc34e,	// (0x00020470) bg_set_opt_pane_cp_copy1_ParamLimits

0xc34e,	// (0x00020470) bg_set_opt_pane_cp_copy1

0x9c51,	// (0x0001dd73) setting_slider_pane_t1_copy1_ParamLimits

0x9c51,	// (0x0001dd73) setting_slider_pane_t1_copy1

0x9c6f,	// (0x0001dd91) setting_slider_pane_t2_copy1_ParamLimits

0x9c6f,	// (0x0001dd91) setting_slider_pane_t2_copy1

0x9c89,	// (0x0001ddab) setting_slider_pane_t3_copy1_ParamLimits

0x9c89,	// (0x0001ddab) setting_slider_pane_t3_copy1

0x9ca1,	// (0x0001ddc3) slider_set_pane_copy1_ParamLimits

0x9ca1,	// (0x0001ddc3) slider_set_pane_copy1

0xc83e,	// (0x00020960) set_opt_bg_pane_g1_copy2

0xc846,	// (0x00020968) set_opt_bg_pane_g2_copy2

0x7a05,	// (0x0001bb27) set_opt_bg_pane_g3_copy2

0xc856,	// (0x00020978) set_opt_bg_pane_g4_copy2

0xc85e,	// (0x00020980) set_opt_bg_pane_g5_copy2

0xc866,	// (0x00020988) set_opt_bg_pane_g6_copy2

0xdf9d,	// (0x000220bf) set_opt_bg_pane_g7_copy2

0x7a17,	// (0x0001bb39) set_opt_bg_pane_g8_copy2

0x7a21,	// (0x0001bb43) set_opt_bg_pane_g9_copy2

0x9cb7,	// (0x0001ddd9) aid_size_touch_slider_mark_copy1_ParamLimits

0x9cb7,	// (0x0001ddd9) aid_size_touch_slider_mark_copy1

0xdfa5,	// (0x000220c7) slider_set_pane_g1_copy1

0x006e,	// (0x00014190) slider_set_pane_g2_copy1

0x9523,	// (0x0001d645) slider_set_pane_g3_copy1_ParamLimits

0x9523,	// (0x0001d645) slider_set_pane_g3_copy1

0x9537,	// (0x0001d659) slider_set_pane_g4_copy1_ParamLimits

0x9537,	// (0x0001d659) slider_set_pane_g4_copy1

0x954f,	// (0x0001d671) slider_set_pane_g5_copy1_ParamLimits

0x954f,	// (0x0001d671) slider_set_pane_g5_copy1

0x9523,	// (0x0001d645) slider_set_pane_g6_copy1_ParamLimits

0x9523,	// (0x0001d645) slider_set_pane_g6_copy1

0x9ccb,	// (0x0001dded) slider_set_pane_g7_copy1_ParamLimits

0x9ccb,	// (0x0001dded) slider_set_pane_g7_copy1

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp2_copy1

0xdfae,	// (0x000220d0) setting_slider_graphic_pane_g1_copy1

0xdfb7,	// (0x000220d9) setting_slider_graphic_pane_t1_copy1

0xdfc7,	// (0x000220e9) setting_slider_graphic_pane_t2_copy1

0xdfd7,	// (0x000220f9) slider_set_pane_cp_copy1

0x7a6d,	// (0x0001bb8f) input_focus_pane_cp1_copy1

0x7a76,	// (0x0001bb98) list_set_text_pane_copy1

0x7a7e,	// (0x0001bba0) setting_text_pane_g1_copy1

0x7a87,	// (0x0001bba9) set_text_pane_t1_copy1

0x7a6d,	// (0x0001bb8f) input_focus_pane_cp2_copy1

0x7a7e,	// (0x0001bba0) setting_code_pane_g1_copy1

0x7aa2,	// (0x0001bbc4) setting_code_pane_t1_copy1

0x7ab0,	// (0x0001bbd2) list_set_graphic_pane_copy1

0xc2f2,	// (0x00020414) bg_set_opt_pane_cp4_copy1

0x1185,	// (0x000152a7) list_set_graphic_pane_g1_copy1_ParamLimits

0x1185,	// (0x000152a7) list_set_graphic_pane_g1_copy1

0x7ac4,	// (0x0001bbe6) list_set_graphic_pane_g2_copy1

0x119d,	// (0x000152bf) list_set_graphic_pane_t1_copy1_ParamLimits

0x119d,	// (0x000152bf) list_set_graphic_pane_t1_copy1

0x47fc,	// (0x0001891e) rs_clock_indi_pane_g1

0x7acc,	// (0x0001bbee) rs_clock_indi_pane_t1

0x7ada,	// (0x0001bbfc) rs_indi_pane

0x7ae2,	// (0x0001bc04) rs_indi_pane_g1

0x7aeb,	// (0x0001bc0d) rs_indi_pane_g2

0x77ef,	// (0x0001b911) rs_indi_pane_g3

0x0002,

0xfec4,	// (0x00023fe6) rs_indi_pane_g

0x147a,	// (0x0001559c) bg_popup_preview_window_pane_cp03

0x7af4,	// (0x0001bc16) popup_fep_tooltip_window_t1

0xca7f,	// (0x00020ba1) popup_note2_window_g2_ParamLimits

0xca7f,	// (0x00020ba1) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00023d86) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00023d86) popup_note2_window_g

0x5cb0,	// (0x00019dd2) bg_popup_sub_pane_cp11_ParamLimits

0x5cbd,	// (0x00019ddf) cell_ai3_links_pane_g1_ParamLimits

0x5cd4,	// (0x00019df6) cell_ai3_links_pane_t1

0x7a87,	// (0x0001bba9) set_text_pane_t1_copy1_ParamLimits

0x138b,	// (0x000154ad) cell_graphic_popup_pane_cp2_ParamLimits

0x138b,	// (0x000154ad) cell_graphic_popup_pane_cp2

0xdfe7,	// (0x00022109) cell_graphic_popup_pane_g1_cp2

0xc5e8,	// (0x0002070a) cell_graphic_popup_pane_g2_cp2

0x7b0a,	// (0x0001bc2c) cell_graphic_popup_pane_g3_cp2

0xdfef,	// (0x00022111) cell_graphic_popup_pane_t2_cp2

0xc5f9,	// (0x0002071b) grid_highlight_pane_cp3_cp2

0xe48d,	// (0x000225af) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc778,	// (0x0002089a) main_tmo_pane_ParamLimits

0xcf75,	// (0x00021097) popup_tmo_big_image_note_window

0x71df,	// (0x0001b301) cell_ai5_widget_list_pane

0x71e7,	// (0x0001b309) cell_ai5_widget_lrg_icon_pane

0xdd94,	// (0x00021eb6) tmo_note_info_pane_t1_ParamLimits

0xdda9,	// (0x00021ecb) tmo_note_info_pane_t2_ParamLimits

0xddc0,	// (0x00021ee2) tmo_note_info_pane_t3_ParamLimits

0x776c,	// (0x0001b88e) tmo_note_info_pane_t4_ParamLimits

0x777e,	// (0x0001b8a0) tmo_note_info_pane_t5_ParamLimits

0xfeb2,	// (0x00023fd4) tmo_note_info_pane_t_ParamLimits

0x789c,	// (0x0001b9be) settings_container_pane_ParamLimits

0xdfdf,	// (0x00022101) indicator_popup_pane_cp5

0xdfdf,	// (0x00022101) indicator_popup_pane_cp6

0x7ab0,	// (0x0001bbd2) list_set_graphic_pane_copy1_ParamLimits

0xc2de,	// (0x00020400) bg_popup_window_pane_cp23

0x7b20,	// (0x0001bc42) popup_tmo_big_image_note_window_g1

0x7b29,	// (0x0001bc4b) popup_tmo_big_image_note_window_t1

0x7b39,	// (0x0001bc5b) popup_tmo_big_image_note_window_t2

0x7b49,	// (0x0001bc6b) popup_tmo_big_image_note_window_t3

0x0002,

0xfecb,	// (0x00023fed) popup_tmo_big_image_note_window_t

0x47fc,	// (0x0001891e) cell_ai5_widget_lrg_icon_pane_g1

0x7b59,	// (0x0001bc7b) cell_ai5_widget_lrg_icon_pane_t1

0x7b67,	// (0x0001bc89) cell_ai5_widget_list_row_pane_ParamLimits

0x7b67,	// (0x0001bc89) cell_ai5_widget_list_row_pane

0x7b7e,	// (0x0001bca0) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b7e,	// (0x0001bca0) cell_ai5_widget_list_row_pane_g1

0xdffd,	// (0x0002211f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdffd,	// (0x0002211f) cell_ai5_widget_list_row_pane_t1

0x7bb6,	// (0x0001bcd8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7bb6,	// (0x0001bcd8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed2,	// (0x00023ff4) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed2,	// (0x00023ff4) cell_ai5_widget_list_row_pane_t

0xe176,	// (0x00022298) main_fep_vtchi_ss_pane

0x7bfa,	// (0x0001bd1c) popup_fep_char_pre_window

0x7c02,	// (0x0001bd24) popup_fep_ituss_window

0xe03d,	// (0x0002215f) popup_fep_vkbss_window

0xe04a,	// (0x0002216c) grid_vkbss_keypad_pane_ParamLimits

0xe04a,	// (0x0002216c) grid_vkbss_keypad_pane

0x7c59,	// (0x0001bd7b) ituss_keypad_pane

0x0098,	// (0x000141ba) aid_vkbss_key_offset_ParamLimits

0x0098,	// (0x000141ba) aid_vkbss_key_offset

0x9ce1,	// (0x0001de03) cell_vkbss_key_pane_ParamLimits

0x9ce1,	// (0x0001de03) cell_vkbss_key_pane

0x1b49,	// (0x00015c6b) bg_cell_vkbss_key_g1_ParamLimits

0x1b49,	// (0x00015c6b) bg_cell_vkbss_key_g1

0xe05a,	// (0x0002217c) cell_vkbss_key_3p_pane_ParamLimits

0xe05a,	// (0x0002217c) cell_vkbss_key_3p_pane

0xe074,	// (0x00022196) cell_vkbss_key_g1_ParamLimits

0xe074,	// (0x00022196) cell_vkbss_key_g1

0xe08e,	// (0x000221b0) cell_vkbss_key_t1_ParamLimits

0xe08e,	// (0x000221b0) cell_vkbss_key_t1

0x00ba,	// (0x000141dc) cell_ituss_key_pane_ParamLimits

0x00ba,	// (0x000141dc) cell_ituss_key_pane

0x7cbb,	// (0x0001bddd) bg_cell_ituss_key_g1_ParamLimits

0x7cbb,	// (0x0001bddd) bg_cell_ituss_key_g1

0x7cc7,	// (0x0001bde9) cell_ituss_key_pane_g1_ParamLimits

0x7cc7,	// (0x0001bde9) cell_ituss_key_pane_g1

0x00cb,	// (0x000141ed) cell_ituss_key_pane_g2_ParamLimits

0x00cb,	// (0x000141ed) cell_ituss_key_pane_g2

0x0002,

0xfed9,	// (0x00023ffb) cell_ituss_key_pane_g_ParamLimits

0xfed9,	// (0x00023ffb) cell_ituss_key_pane_g

0x00f7,	// (0x00014219) cell_ituss_key_t1_ParamLimits

0x00f7,	// (0x00014219) cell_ituss_key_t1

0x0131,	// (0x00014253) cell_ituss_key_t2_ParamLimits

0x0131,	// (0x00014253) cell_ituss_key_t2

0x0162,	// (0x00014284) cell_ituss_key_t3_ParamLimits

0x0162,	// (0x00014284) cell_ituss_key_t3

0x0131,	// (0x00014253) cell_ituss_key_t4_ParamLimits

0x0131,	// (0x00014253) cell_ituss_key_t4

0x0004,

0xfee0,	// (0x00024002) cell_ituss_key_t_ParamLimits

0xfee0,	// (0x00024002) cell_ituss_key_t

0x7ced,	// (0x0001be0f) cell_vkbss_key_3p_pane_g1

0x7cf5,	// (0x0001be17) cell_vkbss_key_3p_pane_g2

0x7cfd,	// (0x0001be1f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeeb,	// (0x0002400d) cell_vkbss_key_3p_pane_g

0xe176,	// (0x00022298) bg_popup_fep_char_preview_window_cp02

0x01a5,	// (0x000142c7) popup_fep_char_pre_window_t1

0xdc30,	// (0x00021d52) main_ai5_sk_pane

0x77f8,	// (0x0001b91a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7804,	// (0x0001b926) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5072,	// (0x00019194) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7819,	// (0x0001b93b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebd,	// (0x00023fdf) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7825,	// (0x0001b947) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc778,	// (0x0002089a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe0b9,	// (0x000221db) main_ai5_sk_pane_g1

0xb412,	// (0x0001f534) popup_query_code_window_g1

0x7c18,	// (0x0001bd3a) popup_fep_vkb_icf_pane

0x7c37,	// (0x0001bd59) popup_fep_vtchi_icf_pane

0x7d0e,	// (0x0001be30) bg_icf_pane

0x7d1a,	// (0x0001be3c) list_vkb_icf_pane

0x7d29,	// (0x0001be4b) bg_icf_pane_cp01

0x7d3c,	// (0x0001be5e) vtchi_icf_list_pane

0x7d4c,	// (0x0001be6e) list_vkb_icf_pane_t1_ParamLimits

0x7d4c,	// (0x0001be6e) list_vkb_icf_pane_t1

0x7d63,	// (0x0001be85) vtchi_icf_list_pane_t1_ParamLimits

0x7d63,	// (0x0001be85) vtchi_icf_list_pane_t1

0x7c02,	// (0x0001bd24) popup_fep_ituss_window_ParamLimits

0x7c37,	// (0x0001bd59) popup_fep_vtchi_icf_pane_ParamLimits

0x7c59,	// (0x0001bd7b) ituss_keypad_pane_ParamLimits

0x008c,	// (0x000141ae) ituss_sks_pane

0x7d0e,	// (0x0001be30) bg_icf_pane_ParamLimits

0xe02e,	// (0x00022150) icf_edit_indi_pane_ParamLimits

0xe02e,	// (0x00022150) icf_edit_indi_pane

0x7d1a,	// (0x0001be3c) list_vkb_icf_pane_ParamLimits

0x7d29,	// (0x0001be4b) bg_icf_pane_cp01_ParamLimits

0x7bed,	// (0x0001bd0f) icf_edit_indi_pane_cp01_ParamLimits

0x7bed,	// (0x0001bd0f) icf_edit_indi_pane_cp01

0x7d44,	// (0x0001be66) vtchi_query_pane

0x4a6c,	// (0x00018b8e) icf_edit_indi_pane_g1_ParamLimits

0x4a6c,	// (0x00018b8e) icf_edit_indi_pane_g1

0x7dd8,	// (0x0001befa) icf_edit_indi_pane_g2_ParamLimits

0x7dd8,	// (0x0001befa) icf_edit_indi_pane_g2

0x0001,

0xff03,	// (0x00024025) icf_edit_indi_pane_g_ParamLimits

0xff03,	// (0x00024025) icf_edit_indi_pane_g

0x7de7,	// (0x0001bf09) icf_edit_indi_pane_t1

0x7d81,	// (0x0001bea3) bg_input_focus_pane_cp042

0xc65c,	// (0x0002077e) vtchi_button_pane

0x7d8a,	// (0x0001beac) vtchi_query_pane_t1

0x7d98,	// (0x0001beba) vtchi_query_pane_t2

0x7da6,	// (0x0001bec8) vtchi_query_pane_t3

0x0002,

0xfef2,	// (0x00024014) vtchi_query_pane_t

0xe176,	// (0x00022298) bg_button_pane_cp13

0x7db4,	// (0x0001bed6) vtchi_button_pane_g1

0x01b4,	// (0x000142d6) ituss_sks_pane_g1

0x01bf,	// (0x000142e1) ituss_sks_pane_g2

0x0001,

0xfef9,	// (0x0002401b) ituss_sks_pane_g

0x7dbc,	// (0x0001bede) ituss_sks_pane_t1

0x7dca,	// (0x0001beec) ituss_sks_pane_t2

0x0001,

0xfefe,	// (0x00024020) ituss_sks_pane_t

0x4232,	// (0x00018354) indicator_nsta_pane_cp_g1

0x423a,	// (0x0001835c) indicator_nsta_pane_cp_g2

0x4242,	// (0x00018364) indicator_nsta_pane_cp_g3

0x4232,	// (0x00018354) indicator_nsta_pane_cp_g4

0x423a,	// (0x0001835c) indicator_nsta_pane_cp_g5

0x4242,	// (0x00018364) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x00023bc4) indicator_nsta_pane_cp_g

0xda0d,	// (0x00021b2f) cell_graphic2_pane_t2_ParamLimits

0xda0d,	// (0x00021b2f) cell_graphic2_pane_t2

0x0001,

0xfdb4,	// (0x00023ed6) cell_graphic2_pane_t_ParamLimits

0xfdb4,	// (0x00023ed6) cell_graphic2_pane_t

0xda46,	// (0x00021b68) cell_graphic2_control_pane_t1

0xaa90,	// (0x0001ebb2) signal_pane_g3_ParamLimits

0xaa90,	// (0x0001ebb2) signal_pane_g3

0xaaa4,	// (0x0001ebc6) signal_pane_g4_ParamLimits

0xaaa4,	// (0x0001ebc6) signal_pane_g4

0x7bc8,	// (0x0001bcea) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7bc8,	// (0x0001bcea) cell_ai5_widget_list_row_pane_t3

0x7cdb,	// (0x0001bdfd) cell_ituss_key_pane_t1_ParamLimits

0x7cdb,	// (0x0001bdfd) cell_ituss_key_pane_t1

0x1ead,	// (0x00015fcf) form_field_data_wide_pane_vc_t2_ParamLimits

0x1ead,	// (0x00015fcf) form_field_data_wide_pane_vc_t2

0x1ec1,	// (0x00015fe3) form_field_data_wide_pane_vc_t3_ParamLimits

0x1ec1,	// (0x00015fe3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00023910) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00023910) form_field_data_wide_pane_vc_t

0x3efa,	// (0x0001801c) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3efa,	// (0x0001801c) form_field_slider_wide_pane_vc_t3

0x3fd8,	// (0x000180fa) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3fd8,	// (0x000180fa) form_field_popup_wide_pane_vc_t2

0x3fef,	// (0x00018111) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3fef,	// (0x00018111) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x00023bb3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x00023bb3) form_field_popup_wide_pane_vc_t

0x9ae6,	// (0x0001dc08) aid_fshwr2_btn_pane_ParamLimits

0x9af8,	// (0x0001dc1a) aid_fshwr2_syb_pane_ParamLimits

0x9b0a,	// (0x0001dc2c) aid_fshwr2_txt_pane_ParamLimits

0xf1f1,	// (0x00023313) fshwr2_bg_pane_ParamLimits

0x9b19,	// (0x0001dc3b) fshwr2_func_candi_pane_ParamLimits

0x9b38,	// (0x0001dc5a) fshwr2_hwr_syb_pane_ParamLimits

0x9b53,	// (0x0001dc75) fshwr2_icf_pane_ParamLimits

0x3e6b,	// (0x00017f8d) list_double_graphic_pane_vc_g4_ParamLimits

0x3e6b,	// (0x00017f8d) list_double_graphic_pane_vc_g4

0x00eb,	// (0x0001420d) cell_ituss_key_pane_g3_ParamLimits

0x00eb,	// (0x0001420d) cell_ituss_key_pane_g3

0x0193,	// (0x000142b5) cell_ituss_key_t5_ParamLimits

0x0193,	// (0x000142b5) cell_ituss_key_t5

0xe03d,	// (0x0002215f) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
