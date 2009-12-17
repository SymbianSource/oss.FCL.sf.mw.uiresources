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
0xaff8,	// (0x0000aff8) Screen

0xb004,	// (0x0000b004) application_window_ParamLimits

0xb004,	// (0x0000b004) application_window

0x002e,	// (0x0000002e) screen_g1

0xb03c,	// (0x0000b03c) area_bottom_pane_ParamLimits

0xb03c,	// (0x0000b03c) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc5e9,	// (0x0000c5e9) battery_pane_ParamLimits

0xc5e9,	// (0x0000c5e9) battery_pane

0x401d,	// (0x0000401d) bg_status_flat_pane_g8

0x4025,	// (0x00004025) bg_status_flat_pane_g9

0x31d5,	// (0x000031d5) context_pane_ParamLimits

0x31d5,	// (0x000031d5) context_pane

0xc754,	// (0x0000c754) navi_pane_ParamLimits

0xc754,	// (0x0000c754) navi_pane

0xc7cb,	// (0x0000c7cb) signal_pane_ParamLimits

0xc7cb,	// (0x0000c7cb) signal_pane

0x0008,

0xa99a,	// (0x0000a99a) bg_status_flat_pane_g

0xc85b,	// (0x0000c85b) status_pane_g1_ParamLimits

0xc85b,	// (0x0000c85b) status_pane_g1

0xc871,	// (0x0000c871) status_pane_g2_ParamLimits

0xc871,	// (0x0000c871) status_pane_g2

0x33f5,	// (0x000033f5) status_pane_g3_ParamLimits

0x33f5,	// (0x000033f5) status_pane_g3

0x0004,

0xece1,	// (0x0000ece1) status_pane_g_ParamLimits

0xece1,	// (0x0000ece1) status_pane_g

0xc87d,	// (0x0000c87d) title_pane_ParamLimits

0xc87d,	// (0x0000c87d) title_pane

0xc8de,	// (0x0000c8de) uni_indicator_pane_ParamLimits

0xc8de,	// (0x0000c8de) uni_indicator_pane

0x2a8c,	// (0x00002a8c) bg_list_pane_ParamLimits

0x2a8c,	// (0x00002a8c) bg_list_pane

0xbebb,	// (0x0000bebb) find_pane

0xbec3,	// (0x0000bec3) listscroll_app_pane_ParamLimits

0xbec3,	// (0x0000bec3) listscroll_app_pane

0x2ac0,	// (0x00002ac0) listscroll_form_pane

0xbecf,	// (0x0000becf) listscroll_gen_pane_ParamLimits

0xbecf,	// (0x0000becf) listscroll_gen_pane

0x2ac0,	// (0x00002ac0) listscroll_set_pane

0x4e03,	// (0x00004e03) main_idle_act_pane

0x2575,	// (0x00002575) main_idle_trad_pane

0x2575,	// (0x00002575) main_list_empty_pane

0x2aee,	// (0x00002aee) main_midp_pane

0x2afa,	// (0x00002afa) main_pane_g1_ParamLimits

0x2afa,	// (0x00002afa) main_pane_g1

0xbee3,	// (0x0000bee3) popup_ai_message_window_ParamLimits

0xbee3,	// (0x0000bee3) popup_ai_message_window

0xbf74,	// (0x0000bf74) popup_fep_china_uni_window_ParamLimits

0xbf74,	// (0x0000bf74) popup_fep_china_uni_window

0x2c0c,	// (0x00002c0c) popup_fep_japan_candidate_window_ParamLimits

0x2c0c,	// (0x00002c0c) popup_fep_japan_candidate_window

0x2c2a,	// (0x00002c2a) popup_fep_japan_predictive_window_ParamLimits

0x2c2a,	// (0x00002c2a) popup_fep_japan_predictive_window

0xbfce,	// (0x0000bfce) popup_find_window

0xbfeb,	// (0x0000bfeb) popup_grid_graphic_window_ParamLimits

0xbfeb,	// (0x0000bfeb) popup_grid_graphic_window

0x2c8d,	// (0x00002c8d) popup_large_graphic_colour_window

0xc07d,	// (0x0000c07d) popup_menu_window_ParamLimits

0xc07d,	// (0x0000c07d) popup_menu_window

0xc249,	// (0x0000c249) popup_note_image_window

0xc20f,	// (0x0000c20f) popup_note_wait_window_ParamLimits

0xc20f,	// (0x0000c20f) popup_note_wait_window

0xc261,	// (0x0000c261) popup_note_window_ParamLimits

0xc261,	// (0x0000c261) popup_note_window

0xc307,	// (0x0000c307) popup_query_code_window_ParamLimits

0xc307,	// (0x0000c307) popup_query_code_window

0x2ed7,	// (0x00002ed7) popup_query_data_code_window_ParamLimits

0x2ed7,	// (0x00002ed7) popup_query_data_code_window

0xc341,	// (0x0000c341) popup_query_data_window_ParamLimits

0xc341,	// (0x0000c341) popup_query_data_window

0xc3b7,	// (0x0000c3b7) popup_query_sat_info_window_ParamLimits

0xc3b7,	// (0x0000c3b7) popup_query_sat_info_window

0xc44e,	// (0x0000c44e) popup_snote_single_graphic_window_ParamLimits

0xc44e,	// (0x0000c44e) popup_snote_single_graphic_window

0xc44e,	// (0x0000c44e) popup_snote_single_text_window_ParamLimits

0xc44e,	// (0x0000c44e) popup_snote_single_text_window

0x2f54,	// (0x00002f54) popup_sub_window_general

0x3082,	// (0x00003082) popup_window_general_ParamLimits

0x3082,	// (0x00003082) popup_window_general

0x3097,	// (0x00003097) power_save_pane

0xbd54,	// (0x0000bd54) control_pane_g1_ParamLimits

0xbd54,	// (0x0000bd54) control_pane_g1

0x290c,	// (0x0000290c) control_pane_g2_ParamLimits

0x290c,	// (0x0000290c) control_pane_g2

0x292f,	// (0x0000292f) control_pane_g3_ParamLimits

0x292f,	// (0x0000292f) control_pane_g3

0x0007,

0xecc9,	// (0x0000ecc9) control_pane_g_ParamLimits

0xecc9,	// (0x0000ecc9) control_pane_g

0xbdb2,	// (0x0000bdb2) control_pane_t1_ParamLimits

0xbdb2,	// (0x0000bdb2) control_pane_t1

0xbe10,	// (0x0000be10) control_pane_t2_ParamLimits

0xbe10,	// (0x0000be10) control_pane_t2

0x0002,

0xecda,	// (0x0000ecda) control_pane_t_ParamLimits

0xecda,	// (0x0000ecda) control_pane_t

0x2804,	// (0x00002804) navi_navi_volume_pane_cp1

0x280d,	// (0x0000280d) status_small_icon_pane

0x2815,	// (0x00002815) status_small_pane_g1_ParamLimits

0x2815,	// (0x00002815) status_small_pane_g1

0x2849,	// (0x00002849) status_small_pane_g2_ParamLimits

0x2849,	// (0x00002849) status_small_pane_g2

0x2855,	// (0x00002855) status_small_pane_g3_ParamLimits

0x2855,	// (0x00002855) status_small_pane_g3

0x2861,	// (0x00002861) status_small_pane_g4_ParamLimits

0x2861,	// (0x00002861) status_small_pane_g4

0x286d,	// (0x0000286d) status_small_pane_g5_ParamLimits

0x286d,	// (0x0000286d) status_small_pane_g5

0x287c,	// (0x0000287c) status_small_pane_g6_ParamLimits

0x287c,	// (0x0000287c) status_small_pane_g6

0x0007,

0xa8a6,	// (0x0000a8a6) status_small_pane_g_ParamLimits

0xa8a6,	// (0x0000a8a6) status_small_pane_g

0x28ac,	// (0x000028ac) status_small_pane_t1

0x28cf,	// (0x000028cf) status_small_wait_pane_ParamLimits

0x28cf,	// (0x000028cf) status_small_wait_pane

0xbb69,	// (0x0000bb69) aid_levels_signal_ParamLimits

0xbb69,	// (0x0000bb69) aid_levels_signal

0xbb81,	// (0x0000bb81) signal_pane_g1_ParamLimits

0xbb81,	// (0x0000bb81) signal_pane_g1

0xbb9c,	// (0x0000bb9c) signal_pane_g2_ParamLimits

0xbb9c,	// (0x0000bb9c) signal_pane_g2

0x0001,

0xecad,	// (0x0000ecad) signal_pane_g_ParamLimits

0xecad,	// (0x0000ecad) signal_pane_g

0x1e22,	// (0x00001e22) context_pane_g1

0xb1b5,	// (0x0000b1b5) title_pane_g1

0xb1ea,	// (0x0000b1ea) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xebdf,	// (0x0000ebdf) title_pane_t

0xc906,	// (0x0000c906) aid_levels_battery_ParamLimits

0xc906,	// (0x0000c906) aid_levels_battery

0xc922,	// (0x0000c922) battery_pane_g1_ParamLimits

0xc922,	// (0x0000c922) battery_pane_g1

0xc93f,	// (0x0000c93f) battery_pane_g2_ParamLimits

0xc93f,	// (0x0000c93f) battery_pane_g2

0x0001,

0xecec,	// (0x0000ecec) battery_pane_g_ParamLimits

0xecec,	// (0x0000ecec) battery_pane_g

0xcd5f,	// (0x0000cd5f) uni_indicator_pane_g1

0xcd74,	// (0x0000cd74) uni_indicator_pane_g2

0xcd89,	// (0x0000cd89) uni_indicator_pane_g3

0x0005,

0xed3d,	// (0x0000ed3d) uni_indicator_pane_g

0x23e5,	// (0x000023e5) navi_icon_pane_ParamLimits

0x23e5,	// (0x000023e5) navi_icon_pane

0x232c,	// (0x0000232c) navi_midp_pane

0x2401,	// (0x00002401) navi_navi_pane

0x240b,	// (0x0000240b) navi_text_pane_ParamLimits

0x240b,	// (0x0000240b) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xaa3d,	// (0x0000aa3d) status_small_wait_pane_g

0xccfe,	// (0x0000ccfe) navi_navi_icon_text_pane

0xcd06,	// (0x0000cd06) navi_navi_pane_g1_ParamLimits

0xcd06,	// (0x0000cd06) navi_navi_pane_g1

0xcd18,	// (0x0000cd18) navi_navi_pane_g2_ParamLimits

0xcd18,	// (0x0000cd18) navi_navi_pane_g2

0x0001,

0xed38,	// (0x0000ed38) navi_navi_pane_g_ParamLimits

0xed38,	// (0x0000ed38) navi_navi_pane_g

0x4806,	// (0x00004806) navi_navi_tabs_pane

0xcd2a,	// (0x0000cd2a) navi_navi_text_pane

0xccfe,	// (0x0000ccfe) navi_navi_volume_pane

0xccec,	// (0x0000ccec) navi_text_pane_t1

0xcce0,	// (0x0000cce0) navi_icon_pane_g1

0x46f7,	// (0x000046f7) navi_navi_text_pane_t1

0xcccf,	// (0x0000cccf) navi_navi_volume_pane_g1

0xccd7,	// (0x0000ccd7) volume_small_pane

0xcc2b,	// (0x0000cc2b) navi_navi_icon_text_pane_g1

0xcc33,	// (0x0000cc33) navi_navi_icon_text_pane_t1

0x2401,	// (0x00002401) navi_tabs_2_long_pane

0x2401,	// (0x00002401) navi_tabs_2_pane

0x2401,	// (0x00002401) navi_tabs_3_long_pane

0x2401,	// (0x00002401) navi_tabs_3_pane

0x2401,	// (0x00002401) navi_tabs_4_pane

0xcc0b,	// (0x0000cc0b) tabs_2_active_pane_ParamLimits

0xcc0b,	// (0x0000cc0b) tabs_2_active_pane

0xcc1b,	// (0x0000cc1b) tabs_2_passive_pane_ParamLimits

0xcc1b,	// (0x0000cc1b) tabs_2_passive_pane

0xcbd9,	// (0x0000cbd9) tabs_3_active_pane_ParamLimits

0xcbd9,	// (0x0000cbd9) tabs_3_active_pane

0xcbe9,	// (0x0000cbe9) tabs_3_passive_pane_ParamLimits

0xcbe9,	// (0x0000cbe9) tabs_3_passive_pane

0xcbfa,	// (0x0000cbfa) tabs_3_passive_pane_cp_ParamLimits

0xcbfa,	// (0x0000cbfa) tabs_3_passive_pane_cp

0xcb95,	// (0x0000cb95) tabs_4_active_pane_ParamLimits

0xcb95,	// (0x0000cb95) tabs_4_active_pane

0xcba6,	// (0x0000cba6) tabs_4_passive_pane_ParamLimits

0xcba6,	// (0x0000cba6) tabs_4_passive_pane

0xcbb7,	// (0x0000cbb7) tabs_4_passive_pane_cp_ParamLimits

0xcbb7,	// (0x0000cbb7) tabs_4_passive_pane_cp

0xcbc8,	// (0x0000cbc8) tabs_4_passive_pane_cp2_ParamLimits

0xcbc8,	// (0x0000cbc8) tabs_4_passive_pane_cp2

0xcb75,	// (0x0000cb75) tabs_2_long_active_pane_ParamLimits

0xcb75,	// (0x0000cb75) tabs_2_long_active_pane

0xcb85,	// (0x0000cb85) tabs_2_long_passive_pane_ParamLimits

0xcb85,	// (0x0000cb85) tabs_2_long_passive_pane

0xcb40,	// (0x0000cb40) tabs_3_long_active_pane_ParamLimits

0xcb40,	// (0x0000cb40) tabs_3_long_active_pane

0xcb51,	// (0x0000cb51) tabs_3_long_passive_pane_ParamLimits

0xcb51,	// (0x0000cb51) tabs_3_long_passive_pane

0xcb64,	// (0x0000cb64) tabs_3_long_passive_pane_cp_ParamLimits

0xcb64,	// (0x0000cb64) tabs_3_long_passive_pane_cp

0x4472,	// (0x00004472) volume_small_pane_g1

0xcaef,	// (0x0000caef) volume_small_pane_g2

0xcaf8,	// (0x0000caf8) volume_small_pane_g3

0xcb01,	// (0x0000cb01) volume_small_pane_g4

0xcb0a,	// (0x0000cb0a) volume_small_pane_g5

0xcb13,	// (0x0000cb13) volume_small_pane_g6

0xcb1c,	// (0x0000cb1c) volume_small_pane_g7

0xcb25,	// (0x0000cb25) volume_small_pane_g8

0xcb2e,	// (0x0000cb2e) volume_small_pane_g9

0xcb37,	// (0x0000cb37) volume_small_pane_g10

0x0009,

0xed0e,	// (0x0000ed0e) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb276,	// (0x0000b276) tabs_3_active_pane_g1

0xb27e,	// (0x0000b27e) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb276,	// (0x0000b276) tabs_3_passive_pane_g1

0xb27e,	// (0x0000b27e) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb290,	// (0x0000b290) tabs_4_active_pane_g1

0xb298,	// (0x0000b298) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb290,	// (0x0000b290) tabs_4_1_passive_pane_g1

0xb298,	// (0x0000b298) tabs_4_1_passive_pane_t1

0x2aee,	// (0x00002aee) list_highlight_pane_cp2

0xce28,	// (0x0000ce28) list_set_pane_ParamLimits

0xce28,	// (0x0000ce28) list_set_pane

0xcec2,	// (0x0000cec2) main_pane_set_t1_ParamLimits

0xcec2,	// (0x0000cec2) main_pane_set_t1

0xcee2,	// (0x0000cee2) main_pane_set_t2_ParamLimits

0xcee2,	// (0x0000cee2) main_pane_set_t2

0xcef6,	// (0x0000cef6) main_pane_set_t3_ParamLimits

0xcef6,	// (0x0000cef6) main_pane_set_t3

0xcf08,	// (0x0000cf08) main_pane_set_t4_ParamLimits

0xcf08,	// (0x0000cf08) main_pane_set_t4

0x0003,

0xed4f,	// (0x0000ed4f) main_pane_set_t_ParamLimits

0xed4f,	// (0x0000ed4f) main_pane_set_t

0xcf1a,	// (0x0000cf1a) setting_code_pane

0xcf22,	// (0x0000cf22) setting_slider_graphic_pane

0xcf22,	// (0x0000cf22) setting_slider_pane

0xcf22,	// (0x0000cf22) setting_text_pane

0xcf22,	// (0x0000cf22) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xa696,	// (0x0000a696) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xa69d,	// (0x0000a69d) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4dea,	// (0x00004dea) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4dca,	// (0x00004dca) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4dd2,	// (0x00004dd2) set_opt_bg_pane_g7

0x4dda,	// (0x00004dda) set_opt_bg_pane_g8

0x4de2,	// (0x00004de2) set_opt_bg_pane_g9

0x0008,

0xaa94,	// (0x0000aa94) set_opt_bg_pane_g

0x4d59,	// (0x00004d59) slider_set_pane_g1

0x4d66,	// (0x00004d66) slider_set_pane_g2

0x0006,

0xaa85,	// (0x0000aa85) slider_set_pane_g

0x4bd9,	// (0x00004bd9) volume_set_pane_g1

0x4be1,	// (0x00004be1) volume_set_pane_g2

0x4be9,	// (0x00004be9) volume_set_pane_g3

0x4bf1,	// (0x00004bf1) volume_set_pane_g4

0x4bf9,	// (0x00004bf9) volume_set_pane_g5

0x4c01,	// (0x00004c01) volume_set_pane_g6

0x4c09,	// (0x00004c09) volume_set_pane_g7

0x4c11,	// (0x00004c11) volume_set_pane_g8

0x4c19,	// (0x00004c19) volume_set_pane_g9

0x4c21,	// (0x00004c21) volume_set_pane_g10

0x0009,

0xaa5d,	// (0x0000aa5d) volume_set_pane_g

0xb2aa,	// (0x0000b2aa) indicator_pane_ParamLimits

0xb2aa,	// (0x0000b2aa) indicator_pane

0xb2d2,	// (0x0000b2d2) main_idle_pane_g2_ParamLimits

0xb2d2,	// (0x0000b2d2) main_idle_pane_g2

0xb30a,	// (0x0000b30a) main_pane_idle_g1_ParamLimits

0xb30a,	// (0x0000b30a) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb331,	// (0x0000b331) soft_indicator_pane_ParamLimits

0xb331,	// (0x0000b331) soft_indicator_pane

0xb34b,	// (0x0000b34b) wallpaper_pane_ParamLimits

0xb34b,	// (0x0000b34b) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb35d,	// (0x0000b35d) indicator_pane_g1_ParamLimits

0xb35d,	// (0x0000b35d) indicator_pane_g1

0x5344,	// (0x00005344) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb376,	// (0x0000b376) aid_ps_clock_pane

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

0xa6a2,	// (0x0000a6a2) power_save_pane_g_ParamLimits

0xa6a2,	// (0x0000a6a2) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb376,	// (0x0000b376) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xa6a7,	// (0x0000a6a7) power_save_pane_t_ParamLimits

0xa6a7,	// (0x0000a6a7) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb384,	// (0x0000b384) ai_gene_pane_ParamLimits

0xb384,	// (0x0000b384) ai_gene_pane

0xb39b,	// (0x0000b39b) ai_links_pane_ParamLimits

0xb39b,	// (0x0000b39b) ai_links_pane

0xb3b3,	// (0x0000b3b3) indicator_pane_cp1_ParamLimits

0xb3b3,	// (0x0000b3b3) indicator_pane_cp1

0xb3c2,	// (0x0000b3c2) main_pane_idle_g1_cp_ParamLimits

0xb3c2,	// (0x0000b3c2) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb3da,	// (0x0000b3da) soft_indicator_pane_cp1_ParamLimits

0xb3da,	// (0x0000b3da) soft_indicator_pane_cp1

0x4aa5,	// (0x00004aa5) ai_links_pane_g1

0x4aae,	// (0x00004aae) grid_ai_links_pane

0xcd56,	// (0x0000cd56) ai_gene_pane_1

0x4a93,	// (0x00004a93) ai_gene_pane_2

0x4a9c,	// (0x00004a9c) list_highlight_pane_cp4

0xcd32,	// (0x0000cd32) cell_ai_link_pane_ParamLimits

0xcd32,	// (0x0000cd32) cell_ai_link_pane

0x4a64,	// (0x00004a64) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xaa38,	// (0x0000aa38) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x49b2,	// (0x000049b2) ai_gene_pane_1_g1_ParamLimits

0x49b2,	// (0x000049b2) ai_gene_pane_1_g1

0x49be,	// (0x000049be) ai_gene_pane_1_g2_ParamLimits

0x49be,	// (0x000049be) ai_gene_pane_1_g2

0x0001,

0xaa2e,	// (0x0000aa2e) ai_gene_pane_1_g_ParamLimits

0xaa2e,	// (0x0000aa2e) ai_gene_pane_1_g

0x49cb,	// (0x000049cb) ai_gene_pane_1_t1_ParamLimits

0x49cb,	// (0x000049cb) ai_gene_pane_1_t1

0x49ff,	// (0x000049ff) grid_ai_soft_ind_pane

0x499d,	// (0x0000499d) ai_gene_pane_2_t1_ParamLimits

0x499d,	// (0x0000499d) ai_gene_pane_2_t1

0xb3ee,	// (0x0000b3ee) main_pane_empty_t1_ParamLimits

0xb3ee,	// (0x0000b3ee) main_pane_empty_t1

0xb406,	// (0x0000b406) main_pane_empty_t2_ParamLimits

0xb406,	// (0x0000b406) main_pane_empty_t2

0xb41b,	// (0x0000b41b) main_pane_empty_t3_ParamLimits

0xb41b,	// (0x0000b41b) main_pane_empty_t3

0xb42d,	// (0x0000b42d) main_pane_empty_t4_ParamLimits

0xb42d,	// (0x0000b42d) main_pane_empty_t4

0xb43f,	// (0x0000b43f) main_pane_empty_t5_ParamLimits

0xb43f,	// (0x0000b43f) main_pane_empty_t5

0x0004,

0xebe6,	// (0x0000ebe6) main_pane_empty_t_ParamLimits

0xebe6,	// (0x0000ebe6) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x4705,	// (0x00004705) find_popup_pane_cp2_ParamLimits

0x4705,	// (0x00004705) find_popup_pane_cp2

0x4711,	// (0x00004711) heading_pane_ParamLimits

0x4711,	// (0x00004711) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcc50,	// (0x0000cc50) bg_popup_window_pane_g1_ParamLimits

0xcc50,	// (0x0000cc50) bg_popup_window_pane_g1

0xcc5f,	// (0x0000cc5f) bg_popup_window_pane_g2_ParamLimits

0xcc5f,	// (0x0000cc5f) bg_popup_window_pane_g2

0xcc6b,	// (0x0000cc6b) bg_popup_window_pane_g3_ParamLimits

0xcc6b,	// (0x0000cc6b) bg_popup_window_pane_g3

0xcc77,	// (0x0000cc77) bg_popup_window_pane_g4_ParamLimits

0xcc77,	// (0x0000cc77) bg_popup_window_pane_g4

0xcc86,	// (0x0000cc86) bg_popup_window_pane_g5_ParamLimits

0xcc86,	// (0x0000cc86) bg_popup_window_pane_g5

0xcc96,	// (0x0000cc96) bg_popup_window_pane_g6_ParamLimits

0xcc96,	// (0x0000cc96) bg_popup_window_pane_g6

0xcca2,	// (0x0000cca2) bg_popup_window_pane_g7_ParamLimits

0xcca2,	// (0x0000cca2) bg_popup_window_pane_g7

0xccb1,	// (0x0000ccb1) bg_popup_window_pane_g8_ParamLimits

0xccb1,	// (0x0000ccb1) bg_popup_window_pane_g8

0xccc0,	// (0x0000ccc0) bg_popup_window_pane_g9_ParamLimits

0xccc0,	// (0x0000ccc0) bg_popup_window_pane_g9

0x46da,	// (0x000046da) bg_popup_window_pane_g10_ParamLimits

0x46da,	// (0x000046da) bg_popup_window_pane_g10

0x0009,

0xed23,	// (0x0000ed23) bg_popup_window_pane_g_ParamLimits

0xed23,	// (0x0000ed23) bg_popup_window_pane_g

0x4603,	// (0x00004603) bg_popup_heading_pane_ParamLimits

0x4603,	// (0x00004603) bg_popup_heading_pane

0x5287,	// (0x00005287) tabs_4_passive_pane_cp_srt_ParamLimits

0x5287,	// (0x00005287) tabs_4_passive_pane_cp_srt

0x5299,	// (0x00005299) tabs_4_passive_pane_srt_ParamLimits

0x4617,	// (0x00004617) heading_pane_g2

0x5299,	// (0x00005299) tabs_4_passive_pane_srt

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp3_srt

0x461f,	// (0x0000461f) heading_pane_t1_ParamLimits

0x461f,	// (0x0000461f) heading_pane_t1

0x4636,	// (0x00004636) heading_pane_t2_ParamLimits

0x4636,	// (0x00004636) heading_pane_t2

0x0001,

0xa9f1,	// (0x0000a9f1) heading_pane_t_ParamLimits

0xa9f1,	// (0x0000a9f1) heading_pane_t

0x3fe5,	// (0x00003fe5) bg_popup_heading_pane_g1

0x4094,	// (0x00004094) bg_popup_heading_pane_g2

0x409e,	// (0x0000409e) bg_popup_heading_pane_g3

0x40a8,	// (0x000040a8) bg_popup_heading_pane_g4

0x40b2,	// (0x000040b2) bg_popup_heading_pane_g5

0x40bc,	// (0x000040bc) bg_popup_heading_pane_g6

0x40c4,	// (0x000040c4) bg_popup_heading_pane_g7

0x40cc,	// (0x000040cc) bg_popup_heading_pane_g8

0x40d6,	// (0x000040d6) bg_popup_heading_pane_g9

0x0008,

0xa9ad,	// (0x0000a9ad) bg_popup_heading_pane_g

0x3618,	// (0x00003618) bg_popup_sub_pane_g1

0x3620,	// (0x00003620) bg_popup_sub_pane_g2

0x3628,	// (0x00003628) bg_popup_sub_pane_g3

0x3630,	// (0x00003630) bg_popup_sub_pane_g4

0x3638,	// (0x00003638) bg_popup_sub_pane_g5

0x3640,	// (0x00003640) bg_popup_sub_pane_g6

0x3648,	// (0x00003648) bg_popup_sub_pane_g7

0x3650,	// (0x00003650) bg_popup_sub_pane_g8

0x3658,	// (0x00003658) bg_popup_sub_pane_g9

0x0008,

0xa987,	// (0x0000a987) bg_popup_sub_pane_g

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

0xa6b7,	// (0x0000a6b7) popup_note_window_t_ParamLimits

0xa6b7,	// (0x0000a6b7) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3f59,	// (0x00003f59) popup_note_image_window_g1_ParamLimits

0x3f59,	// (0x00003f59) popup_note_image_window_g1

0x3f65,	// (0x00003f65) popup_note_image_window_g2_ParamLimits

0x3f65,	// (0x00003f65) popup_note_image_window_g2

0x0001,

0xa97b,	// (0x0000a97b) popup_note_image_window_g_ParamLimits

0xa97b,	// (0x0000a97b) popup_note_image_window_g

0x3f7e,	// (0x00003f7e) popup_note_image_window_t1_ParamLimits

0x3f7e,	// (0x00003f7e) popup_note_image_window_t1

0x3f97,	// (0x00003f97) popup_note_image_window_t2_ParamLimits

0x3f97,	// (0x00003f97) popup_note_image_window_t2

0x3fb0,	// (0x00003fb0) popup_note_image_window_t3_ParamLimits

0x3fb0,	// (0x00003fb0) popup_note_image_window_t3

0x0002,

0xa980,	// (0x0000a980) popup_note_image_window_t_ParamLimits

0xa980,	// (0x0000a980) popup_note_image_window_t

0x3e1a,	// (0x00003e1a) bg_popup_window_pane_cp7_ParamLimits

0x3e1a,	// (0x00003e1a) bg_popup_window_pane_cp7

0x3e4a,	// (0x00003e4a) popup_note_wait_window_g1_ParamLimits

0x3e4a,	// (0x00003e4a) popup_note_wait_window_g1

0x3e56,	// (0x00003e56) popup_note_wait_window_g2_ParamLimits

0x3e56,	// (0x00003e56) popup_note_wait_window_g2

0x0002,

0xa969,	// (0x0000a969) popup_note_wait_window_g_ParamLimits

0xa969,	// (0x0000a969) popup_note_wait_window_g

0x3e6e,	// (0x00003e6e) popup_note_wait_window_t1_ParamLimits

0x3e6e,	// (0x00003e6e) popup_note_wait_window_t1

0x3e95,	// (0x00003e95) popup_note_wait_window_t2_ParamLimits

0x3e95,	// (0x00003e95) popup_note_wait_window_t2

0x3eb2,	// (0x00003eb2) popup_note_wait_window_t3_ParamLimits

0x3eb2,	// (0x00003eb2) popup_note_wait_window_t3

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t4_ParamLimits

0x3ec5,	// (0x00003ec5) popup_note_wait_window_t4

0x0004,

0xa970,	// (0x0000a970) popup_note_wait_window_t_ParamLimits

0xa970,	// (0x0000a970) popup_note_wait_window_t

0x3eea,	// (0x00003eea) wait_bar_pane_ParamLimits

0x3eea,	// (0x00003eea) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa836,	// (0x0000a836) wait_anim_pane_g

0x3dbe,	// (0x00003dbe) wait_border_pane_g1

0x3dc9,	// (0x00003dc9) wait_border_pane_g2

0x3dd2,	// (0x00003dd2) wait_border_pane_g3

0x0002,

0xa962,	// (0x0000a962) wait_border_pane_g

0x3d20,	// (0x00003d20) bg_popup_window_pane_cp16_ParamLimits

0x3d20,	// (0x00003d20) bg_popup_window_pane_cp16

0x3d2e,	// (0x00003d2e) indicator_popup_pane_cp4_ParamLimits

0x3d2e,	// (0x00003d2e) indicator_popup_pane_cp4

0x3d42,	// (0x00003d42) popup_query_data_window_t1_ParamLimits

0x3d42,	// (0x00003d42) popup_query_data_window_t1

0x3d54,	// (0x00003d54) popup_query_data_window_t2_ParamLimits

0x3d54,	// (0x00003d54) popup_query_data_window_t2

0x3d6d,	// (0x00003d6d) popup_query_data_window_t3_ParamLimits

0x3d6d,	// (0x00003d6d) popup_query_data_window_t3

0x0002,

0xa95b,	// (0x0000a95b) popup_query_data_window_t_ParamLimits

0xa95b,	// (0x0000a95b) popup_query_data_window_t

0x3d87,	// (0x00003d87) query_popup_data_pane_ParamLimits

0x3d87,	// (0x00003d87) query_popup_data_pane

0x3d9b,	// (0x00003d9b) query_popup_data_pane_cp1_ParamLimits

0x3d9b,	// (0x00003d9b) query_popup_data_pane_cp1

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp10_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp10

0x3c83,	// (0x00003c83) indicator_popup_pane_ParamLimits

0x3c83,	// (0x00003c83) indicator_popup_pane

0x090c,	// (0x0000090c) popup_query_code_window_t1_ParamLimits

0x090c,	// (0x0000090c) popup_query_code_window_t1

0x3c9b,	// (0x00003c9b) popup_query_code_window_t2_ParamLimits

0x3c9b,	// (0x00003c9b) popup_query_code_window_t2

0x3cd9,	// (0x00003cd9) popup_query_code_window_t3_ParamLimits

0x3cd9,	// (0x00003cd9) popup_query_code_window_t3

0x0002,

0xa954,	// (0x0000a954) popup_query_code_window_t_ParamLimits

0xa954,	// (0x0000a954) popup_query_code_window_t

0x3d08,	// (0x00003d08) query_popup_pane_ParamLimits

0x3d08,	// (0x00003d08) query_popup_pane

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

0xa6c2,	// (0x0000a6c2) popup_query_data_code_window_t_ParamLimits

0xa6c2,	// (0x0000a6c2) popup_query_data_code_window_t

0x23a1,	// (0x000023a1) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c57,	// (0x00003c57) heading_pane_cp5

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

0xa6cb,	// (0x0000a6cb) popup_info_list_pane_t_ParamLimits

0xa6cb,	// (0x0000a6cb) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x537b,	// (0x0000537b) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb4a1,	// (0x0000b4a1) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane

0xb4a9,	// (0x0000b4a9) grid_large_graphic_colour_popup_pane_ParamLimits

0xb4a9,	// (0x0000b4a9) grid_large_graphic_colour_popup_pane

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1_ParamLimits

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2_ParamLimits

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3_ParamLimits

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3

0xb4cd,	// (0x0000b4cd) listscroll_popup_colour_pane_g4_ParamLimits

0xb4cd,	// (0x0000b4cd) listscroll_popup_colour_pane_g4

0x0003,

0xebf1,	// (0x0000ebf1) listscroll_popup_colour_pane_g_ParamLimits

0xebf1,	// (0x0000ebf1) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb4dc,	// (0x0000b4dc) cell_large_graphic_colour_popup_pane_ParamLimits

0xb4dc,	// (0x0000b4dc) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa6d9,	// (0x0000a6d9) cell_large_graphic_colour_popup_pane_g

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

0xa6de,	// (0x0000a6de) popup_snote_single_text_window_t_ParamLimits

0xa6de,	// (0x0000a6de) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xa6e9,	// (0x0000a6e9) popup_snote_single_graphic_window_g_ParamLimits

0xa6e9,	// (0x0000a6e9) popup_snote_single_graphic_window_g

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

0xa6ee,	// (0x0000a6ee) popup_snote_single_graphic_window_t_ParamLimits

0xa6ee,	// (0x0000a6ee) popup_snote_single_graphic_window_t

0x5203,	// (0x00005203) grid_graphic_popup_pane_ParamLimits

0x5203,	// (0x00005203) grid_graphic_popup_pane

0x522f,	// (0x0000522f) listscroll_popup_graphic_pane_g1_ParamLimits

0x522f,	// (0x0000522f) listscroll_popup_graphic_pane_g1

0xd063,	// (0x0000d063) listscroll_popup_graphic_pane_g2_ParamLimits

0xd063,	// (0x0000d063) listscroll_popup_graphic_pane_g2

0x0001,

0xed72,	// (0x0000ed72) listscroll_popup_graphic_pane_g_ParamLimits

0xed72,	// (0x0000ed72) listscroll_popup_graphic_pane_g

0x5257,	// (0x00005257) scroll_pane_cp5

0xd026,	// (0x0000d026) cell_graphic_popup_pane_ParamLimits

0xd026,	// (0x0000d026) cell_graphic_popup_pane

0x518f,	// (0x0000518f) cell_graphic_popup_pane_g1

0x5197,	// (0x00005197) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xaaca,	// (0x0000aaca) cell_graphic_popup_pane_g

0x51a0,	// (0x000051a0) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xcfe1,	// (0x0000cfe1) bg_list_pane_g1_ParamLimits

0xcfe1,	// (0x0000cfe1) bg_list_pane_g1

0x510c,	// (0x0000510c) bg_list_pane_g2_ParamLimits

0x510c,	// (0x0000510c) bg_list_pane_g2

0x511f,	// (0x0000511f) bg_list_pane_g3_ParamLimits

0x511f,	// (0x0000511f) bg_list_pane_g3

0x5131,	// (0x00005131) bg_list_pane_g4_ParamLimits

0x5131,	// (0x00005131) bg_list_pane_g4

0xcffc,	// (0x0000cffc) bg_list_pane_g5_ParamLimits

0xcffc,	// (0x0000cffc) bg_list_pane_g5

0x0004,

0xed67,	// (0x0000ed67) bg_list_pane_g_ParamLimits

0xed67,	// (0x0000ed67) bg_list_pane_g

0xcf80,	// (0x0000cf80) list_double2_graphic_large_graphic_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double2_graphic_large_graphic_pane

0xcf80,	// (0x0000cf80) list_double2_graphic_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double2_graphic_pane

0xcf80,	// (0x0000cf80) list_double2_large_graphic_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double2_large_graphic_pane

0xcf80,	// (0x0000cf80) list_double2_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double2_pane

0xcf80,	// (0x0000cf80) list_double_graphic_heading_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_graphic_heading_pane

0xcf80,	// (0x0000cf80) list_double_graphic_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_graphic_pane

0xcf80,	// (0x0000cf80) list_double_heading_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_heading_pane

0xcf80,	// (0x0000cf80) list_double_large_graphic_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_large_graphic_pane

0xcf80,	// (0x0000cf80) list_double_number_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_number_pane

0xcf80,	// (0x0000cf80) list_double_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_pane

0xcf80,	// (0x0000cf80) list_double_time_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_double_time_pane

0xcf80,	// (0x0000cf80) list_setting_number_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_setting_number_pane

0xcf80,	// (0x0000cf80) list_setting_pane_ParamLimits

0xcf80,	// (0x0000cf80) list_setting_pane

0xcf93,	// (0x0000cf93) list_single_2graphic_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_2graphic_pane

0xcf93,	// (0x0000cf93) list_single_graphic_heading_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_graphic_heading_pane

0xcf93,	// (0x0000cf93) list_single_graphic_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_graphic_pane

0xcf93,	// (0x0000cf93) list_single_heading_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_heading_pane

0xcf93,	// (0x0000cf93) list_single_large_graphic_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_large_graphic_pane

0xcf93,	// (0x0000cf93) list_single_number_heading_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_number_heading_pane

0xcf93,	// (0x0000cf93) list_single_number_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_number_pane

0xcf93,	// (0x0000cf93) list_single_pane_ParamLimits

0xcf93,	// (0x0000cf93) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0e4b,	// (0x00000e4b) list_single_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_pane_g1

0x0e57,	// (0x00000e57) list_single_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_pane_g2

0x0001,

0xa907,	// (0x0000a907) list_single_pane_g_ParamLimits

0xa907,	// (0x0000a907) list_single_pane_g

0x5968,	// (0x00005968) list_single_pane_t1_ParamLimits

0x5968,	// (0x00005968) list_single_pane_t1

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1

0x0e57,	// (0x00000e57) list_single_number_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_pane_g2

0x0001,

0xa907,	// (0x0000a907) list_single_number_pane_g_ParamLimits

0xa907,	// (0x0000a907) list_single_number_pane_g

0x35a6,	// (0x000035a6) list_single_number_pane_t1_ParamLimits

0x35a6,	// (0x000035a6) list_single_number_pane_t1

0xcdc4,	// (0x0000cdc4) list_single_number_pane_t2_ParamLimits

0xcdc4,	// (0x0000cdc4) list_single_number_pane_t2

0x0001,

0xed4a,	// (0x0000ed4a) list_single_number_pane_t_ParamLimits

0xed4a,	// (0x0000ed4a) list_single_number_pane_t

0xb505,	// (0x0000b505) list_single_graphic_pane_g1_ParamLimits

0xb505,	// (0x0000b505) list_single_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3

0x0002,

0xebfa,	// (0x0000ebfa) list_single_graphic_pane_g_ParamLimits

0xebfa,	// (0x0000ebfa) list_single_graphic_pane_g

0xb511,	// (0x0000b511) list_single_graphic_pane_t1_ParamLimits

0xb511,	// (0x0000b511) list_single_graphic_pane_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_g2

0x0001,

0xa907,	// (0x0000a907) list_single_heading_pane_g_ParamLimits

0xa907,	// (0x0000a907) list_single_heading_pane_g

0x598a,	// (0x0000598a) list_single_heading_pane_t1_ParamLimits

0x598a,	// (0x0000598a) list_single_heading_pane_t1

0xb527,	// (0x0000b527) list_single_heading_pane_t2_ParamLimits

0xb527,	// (0x0000b527) list_single_heading_pane_t2

0x0001,

0xec01,	// (0x0000ec01) list_single_heading_pane_t_ParamLimits

0xec01,	// (0x0000ec01) list_single_heading_pane_t

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2

0x0001,

0xa907,	// (0x0000a907) list_single_number_heading_pane_g_ParamLimits

0xa907,	// (0x0000a907) list_single_number_heading_pane_g

0x598a,	// (0x0000598a) list_single_number_heading_pane_t1_ParamLimits

0x598a,	// (0x0000598a) list_single_number_heading_pane_t1

0xb539,	// (0x0000b539) list_single_number_heading_pane_t2_ParamLimits

0xb539,	// (0x0000b539) list_single_number_heading_pane_t2

0x5942,	// (0x00005942) list_single_number_heading_pane_t3_ParamLimits

0x5942,	// (0x00005942) list_single_number_heading_pane_t3

0x0002,

0xec06,	// (0x0000ec06) list_single_number_heading_pane_t_ParamLimits

0xec06,	// (0x0000ec06) list_single_number_heading_pane_t

0x34bc,	// (0x000034bc) list_single_graphic_heading_pane_g1_ParamLimits

0x34bc,	// (0x000034bc) list_single_graphic_heading_pane_g1

0xb54b,	// (0x0000b54b) list_single_graphic_heading_pane_g4_ParamLimits

0xb54b,	// (0x0000b54b) list_single_graphic_heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5

0x0002,

0xec0d,	// (0x0000ec0d) list_single_graphic_heading_pane_g_ParamLimits

0xec0d,	// (0x0000ec0d) list_single_graphic_heading_pane_g

0x598a,	// (0x0000598a) list_single_graphic_heading_pane_t1_ParamLimits

0x598a,	// (0x0000598a) list_single_graphic_heading_pane_t1

0xb55c,	// (0x0000b55c) list_single_graphic_heading_pane_t2_ParamLimits

0xb55c,	// (0x0000b55c) list_single_graphic_heading_pane_t2

0x0001,

0xec14,	// (0x0000ec14) list_single_graphic_heading_pane_t_ParamLimits

0xec14,	// (0x0000ec14) list_single_graphic_heading_pane_t

0x597e,	// (0x0000597e) list_single_large_graphic_pane_g1_ParamLimits

0x597e,	// (0x0000597e) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xab68,	// (0x0000ab68) list_single_large_graphic_pane_g_ParamLimits

0xab68,	// (0x0000ab68) list_single_large_graphic_pane_g

0x3dc9,	// (0x00003dc9) wait_border_pane_g2_copy1

0xb56e,	// (0x0000b56e) list_single_large_graphic_pane_g4_cp2

0x598a,	// (0x0000598a) list_single_large_graphic_pane_t1_ParamLimits

0x598a,	// (0x0000598a) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xa799,	// (0x0000a799) list_double_pane_g_ParamLimits

0xa799,	// (0x0000a799) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb576,	// (0x0000b576) list_double_pane_t2_ParamLimits

0xb576,	// (0x0000b576) list_double_pane_t2

0x0001,

0xec19,	// (0x0000ec19) list_double_pane_t_ParamLimits

0xec19,	// (0x0000ec19) list_double_pane_t

0xb588,	// (0x0000b588) list_double2_pane_g1_ParamLimits

0xb588,	// (0x0000b588) list_double2_pane_g1

0xb599,	// (0x0000b599) list_double2_pane_g2_ParamLimits

0xb599,	// (0x0000b599) list_double2_pane_g2

0x0001,

0xec1e,	// (0x0000ec1e) list_double2_pane_g_ParamLimits

0xec1e,	// (0x0000ec1e) list_double2_pane_g

0x7503,	// (0x00007503) list_double2_pane_t1_ParamLimits

0x7503,	// (0x00007503) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xec23,	// (0x0000ec23) list_double2_pane_t_ParamLimits

0xec23,	// (0x0000ec23) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xa799,	// (0x0000a799) list_double_number_pane_g_ParamLimits

0xa799,	// (0x0000a799) list_double_number_pane_g

0xb5a5,	// (0x0000b5a5) list_double_number_pane_t1_ParamLimits

0xb5a5,	// (0x0000b5a5) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xb5b7,	// (0x0000b5b7) list_double_number_pane_t3_ParamLimits

0xb5b7,	// (0x0000b5b7) list_double_number_pane_t3

0x0002,

0xec28,	// (0x0000ec28) list_double_number_pane_t_ParamLimits

0xec28,	// (0x0000ec28) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xb5c9,	// (0x0000b5c9) list_double_graphic_pane_g2_ParamLimits

0xb5c9,	// (0x0000b5c9) list_double_graphic_pane_g2

0xb5d8,	// (0x0000b5d8) list_double_graphic_pane_g3_ParamLimits

0xb5d8,	// (0x0000b5d8) list_double_graphic_pane_g3

0x0003,

0xec2f,	// (0x0000ec2f) list_double_graphic_pane_g_ParamLimits

0xec2f,	// (0x0000ec2f) list_double_graphic_pane_g

0xb5f0,	// (0x0000b5f0) list_double_graphic_pane_t1_ParamLimits

0xb5f0,	// (0x0000b5f0) list_double_graphic_pane_t1

0xb606,	// (0x0000b606) list_double_graphic_pane_t2_ParamLimits

0xb606,	// (0x0000b606) list_double_graphic_pane_t2

0x0001,

0xec38,	// (0x0000ec38) list_double_graphic_pane_t_ParamLimits

0xec38,	// (0x0000ec38) list_double_graphic_pane_t

0xb618,	// (0x0000b618) list_double2_graphic_pane_g1_ParamLimits

0xb618,	// (0x0000b618) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xb599,	// (0x0000b599) list_double2_graphic_pane_g3_ParamLimits

0xb599,	// (0x0000b599) list_double2_graphic_pane_g3

0x0002,

0xec3d,	// (0x0000ec3d) list_double2_graphic_pane_g_ParamLimits

0xec3d,	// (0x0000ec3d) list_double2_graphic_pane_g

0xb624,	// (0x0000b624) list_double2_graphic_pane_t1_ParamLimits

0xb624,	// (0x0000b624) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xec44,	// (0x0000ec44) list_double2_graphic_pane_t_ParamLimits

0xec44,	// (0x0000ec44) list_double2_graphic_pane_t

0xb63a,	// (0x0000b63a) list_double_large_graphic_pane_g1_ParamLimits

0xb63a,	// (0x0000b63a) list_double_large_graphic_pane_g1

0xb665,	// (0x0000b665) list_double_large_graphic_pane_g2_ParamLimits

0xb665,	// (0x0000b665) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xb676,	// (0x0000b676) list_double_large_graphic_pane_g4_ParamLimits

0xb676,	// (0x0000b676) list_double_large_graphic_pane_g4

0x0004,

0xec49,	// (0x0000ec49) list_double_large_graphic_pane_g_ParamLimits

0xec49,	// (0x0000ec49) list_double_large_graphic_pane_g

0xb689,	// (0x0000b689) list_double_large_graphic_pane_t1_ParamLimits

0xb689,	// (0x0000b689) list_double_large_graphic_pane_t1

0xb6a2,	// (0x0000b6a2) list_double_large_graphic_pane_t2_ParamLimits

0xb6a2,	// (0x0000b6a2) list_double_large_graphic_pane_t2

0x0001,

0xec54,	// (0x0000ec54) list_double_large_graphic_pane_t_ParamLimits

0xec54,	// (0x0000ec54) list_double_large_graphic_pane_t

0xb6b4,	// (0x0000b6b4) list_double2_large_graphic_pane_g1_ParamLimits

0xb6b4,	// (0x0000b6b4) list_double2_large_graphic_pane_g1

0xb588,	// (0x0000b588) list_double2_large_graphic_pane_g2_ParamLimits

0xb588,	// (0x0000b588) list_double2_large_graphic_pane_g2

0xb599,	// (0x0000b599) list_double2_large_graphic_pane_g3_ParamLimits

0xb599,	// (0x0000b599) list_double2_large_graphic_pane_g3

0x0002,

0xec59,	// (0x0000ec59) list_double2_large_graphic_pane_g_ParamLimits

0xec59,	// (0x0000ec59) list_double2_large_graphic_pane_g

0xb6c0,	// (0x0000b6c0) list_double2_large_graphic_pane_t1_ParamLimits

0xb6c0,	// (0x0000b6c0) list_double2_large_graphic_pane_t1

0xb6d6,	// (0x0000b6d6) list_double2_large_graphic_pane_t2_ParamLimits

0xb6d6,	// (0x0000b6d6) list_double2_large_graphic_pane_t2

0x0001,

0xec60,	// (0x0000ec60) list_double2_large_graphic_pane_t_ParamLimits

0xec60,	// (0x0000ec60) list_double2_large_graphic_pane_t

0xb6e8,	// (0x0000b6e8) list_double_heading_pane_g1_ParamLimits

0xb6e8,	// (0x0000b6e8) list_double_heading_pane_g1

0xb6f9,	// (0x0000b6f9) list_double_heading_pane_g2_ParamLimits

0xb6f9,	// (0x0000b6f9) list_double_heading_pane_g2

0x0001,

0xec65,	// (0x0000ec65) list_double_heading_pane_g_ParamLimits

0xec65,	// (0x0000ec65) list_double_heading_pane_g

0xb705,	// (0x0000b705) list_double_heading_pane_t1_ParamLimits

0xb705,	// (0x0000b705) list_double_heading_pane_t1

0xb71b,	// (0x0000b71b) list_double_heading_pane_t2_ParamLimits

0xb71b,	// (0x0000b71b) list_double_heading_pane_t2

0x0001,

0xec6a,	// (0x0000ec6a) list_double_heading_pane_t_ParamLimits

0xec6a,	// (0x0000ec6a) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xb6e8,	// (0x0000b6e8) list_double_graphic_heading_pane_g2_ParamLimits

0xb6e8,	// (0x0000b6e8) list_double_graphic_heading_pane_g2

0xb6f9,	// (0x0000b6f9) list_double_graphic_heading_pane_g3_ParamLimits

0xb6f9,	// (0x0000b6f9) list_double_graphic_heading_pane_g3

0x0002,

0xec6f,	// (0x0000ec6f) list_double_graphic_heading_pane_g_ParamLimits

0xec6f,	// (0x0000ec6f) list_double_graphic_heading_pane_g

0xb72d,	// (0x0000b72d) list_double_graphic_heading_pane_t1_ParamLimits

0xb72d,	// (0x0000b72d) list_double_graphic_heading_pane_t1

0xb743,	// (0x0000b743) list_double_graphic_heading_pane_t2_ParamLimits

0xb743,	// (0x0000b743) list_double_graphic_heading_pane_t2

0x0001,

0xec76,	// (0x0000ec76) list_double_graphic_heading_pane_t_ParamLimits

0xec76,	// (0x0000ec76) list_double_graphic_heading_pane_t

0xb665,	// (0x0000b665) list_double_time_pane_g1_ParamLimits

0xb665,	// (0x0000b665) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xec7b,	// (0x0000ec7b) list_double_time_pane_g_ParamLimits

0xec7b,	// (0x0000ec7b) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xb755,	// (0x0000b755) list_double_time_pane_t2_ParamLimits

0xb755,	// (0x0000b755) list_double_time_pane_t2

0xb767,	// (0x0000b767) list_double_time_pane_t3_ParamLimits

0xb767,	// (0x0000b767) list_double_time_pane_t3

0xb779,	// (0x0000b779) list_double_time_pane_t4_ParamLimits

0xb779,	// (0x0000b779) list_double_time_pane_t4

0x0003,

0xec80,	// (0x0000ec80) list_double_time_pane_t_ParamLimits

0xec80,	// (0x0000ec80) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xb599,	// (0x0000b599) list_setting_pane_g2_ParamLimits

0xb599,	// (0x0000b599) list_setting_pane_g2

0x0001,

0xec89,	// (0x0000ec89) list_setting_pane_g_ParamLimits

0xec89,	// (0x0000ec89) list_setting_pane_g

0xb78b,	// (0x0000b78b) list_setting_pane_t1_ParamLimits

0xb78b,	// (0x0000b78b) list_setting_pane_t1

0xb7a2,	// (0x0000b7a2) list_setting_pane_t2_ParamLimits

0xb7a2,	// (0x0000b7a2) list_setting_pane_t2

0x0002,

0xec8e,	// (0x0000ec8e) list_setting_pane_t_ParamLimits

0xec8e,	// (0x0000ec8e) list_setting_pane_t

0xb7df,	// (0x0000b7df) set_value_pane_cp_ParamLimits

0xb7df,	// (0x0000b7df) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xb599,	// (0x0000b599) list_setting_number_pane_g2_ParamLimits

0xb599,	// (0x0000b599) list_setting_number_pane_g2

0x0001,

0xec89,	// (0x0000ec89) list_setting_number_pane_g_ParamLimits

0xec89,	// (0x0000ec89) list_setting_number_pane_g

0xb7eb,	// (0x0000b7eb) list_setting_number_pane_t1_ParamLimits

0xb7eb,	// (0x0000b7eb) list_setting_number_pane_t1

0xb7ff,	// (0x0000b7ff) list_setting_number_pane_t2_ParamLimits

0xb7ff,	// (0x0000b7ff) list_setting_number_pane_t2

0xb816,	// (0x0000b816) list_setting_number_pane_t3_ParamLimits

0xb816,	// (0x0000b816) list_setting_number_pane_t3

0x0003,

0xec95,	// (0x0000ec95) list_setting_number_pane_t_ParamLimits

0xec95,	// (0x0000ec95) list_setting_number_pane_t

0xb7df,	// (0x0000b7df) set_value_pane_ParamLimits

0xb7df,	// (0x0000b7df) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xb859,	// (0x0000b859) form_field_data_pane_ParamLimits

0xb859,	// (0x0000b859) form_field_data_pane

0xb870,	// (0x0000b870) form_field_data_wide_pane_ParamLimits

0xb870,	// (0x0000b870) form_field_data_wide_pane

0xb890,	// (0x0000b890) form_field_popup_pane_ParamLimits

0xb890,	// (0x0000b890) form_field_popup_pane

0xb8ae,	// (0x0000b8ae) form_field_popup_wide_pane_ParamLimits

0xb8ae,	// (0x0000b8ae) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xb8cf,	// (0x0000b8cf) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xb8e9,	// (0x0000b8e9) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xb90b,	// (0x0000b90b) form_field_slider_pane_t1_ParamLimits

0xb90b,	// (0x0000b90b) form_field_slider_pane_t1

0xb923,	// (0x0000b923) form_field_slider_pane_t2_ParamLimits

0xb923,	// (0x0000b923) form_field_slider_pane_t2

0x0001,

0xec9e,	// (0x0000ec9e) form_field_slider_pane_t_ParamLimits

0xec9e,	// (0x0000ec9e) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xb938,	// (0x0000b938) slider_cont_pane_ParamLimits

0xb938,	// (0x0000b938) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xa7ba,	// (0x0000a7ba) form_field_slider_wide_pane_t_ParamLimits

0xa7ba,	// (0x0000a7ba) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xb94c,	// (0x0000b94c) slider_cont_pane_cp1_ParamLimits

0xb94c,	// (0x0000b94c) slider_cont_pane_cp1

0xb960,	// (0x0000b960) slider_form_pane_cp

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

0xa7bf,	// (0x0000a7bf) input_focus_pane_g

0x3dd2,	// (0x00003dd2) wait_border_pane_g3_copy1

0xb968,	// (0x0000b968) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xcf55,	// (0x0000cf55) data_form_wide_pane_t1

0xb982,	// (0x0000b982) list_form_graphic_pane_cp_ParamLimits

0xb982,	// (0x0000b982) list_form_graphic_pane_cp

0x4f57,	// (0x00004f57) slider_form_pane_g1

0x4f60,	// (0x00004f60) slider_form_pane_g2

0x0006,

0xed58,	// (0x0000ed58) slider_form_pane_g

0xb995,	// (0x0000b995) list_form_graphic_pane_ParamLimits

0xb995,	// (0x0000b995) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xb9a9,	// (0x0000b9a9) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xb9b2,	// (0x0000b9b2) input_find_pane_g1_ParamLimits

0xb9b2,	// (0x0000b9b2) input_find_pane_g1

0xb9be,	// (0x0000b9be) input_find_pane_t1_ParamLimits

0xb9be,	// (0x0000b9be) input_find_pane_t1

0xb9d3,	// (0x0000b9d3) input_find_pane_t2_ParamLimits

0xb9d3,	// (0x0000b9d3) input_find_pane_t2

0x0001,

0xeca3,	// (0x0000eca3) input_find_pane_t_ParamLimits

0xeca3,	// (0x0000eca3) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0xb9f4,	// (0x0000b9f4) bg_popup_window_pane_cp2_ParamLimits

0xb9f4,	// (0x0000b9f4) bg_popup_window_pane_cp2

0xba01,	// (0x0000ba01) listscroll_menu_pane_ParamLimits

0xba01,	// (0x0000ba01) listscroll_menu_pane

0xba0d,	// (0x0000ba0d) popup_submenu_window_ParamLimits

0xba0d,	// (0x0000ba0d) popup_submenu_window

0x15db,	// (0x000015db) find_popup_pane_g1

0x15e3,	// (0x000015e3) input_popup_find_pane_cp

0x1584,	// (0x00001584) input_focus_pane_cp4_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp4

0x15fb,	// (0x000015fb) input_popup_find_pane_t1_ParamLimits

0x15fb,	// (0x000015fb) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1629,	// (0x00001629) listscroll_popup_sub_pane

0x1631,	// (0x00001631) list_submenu_pane_ParamLimits

0x1631,	// (0x00001631) list_submenu_pane

0x1642,	// (0x00001642) scroll_pane_cp4

0x164a,	// (0x0000164a) list_single_popup_submenu_pane_ParamLimits

0x164a,	// (0x0000164a) list_single_popup_submenu_pane

0x165d,	// (0x0000165d) list_single_popup_submenu_pane_g1

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1_ParamLimits

0x1665,	// (0x00001665) list_single_popup_submenu_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1

0xba3f,	// (0x0000ba3f) tabs_2_active_pane_g1

0xba47,	// (0x0000ba47) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xba3f,	// (0x0000ba3f) tabs_2_passive_pane_g1

0xba47,	// (0x0000ba47) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xba59,	// (0x0000ba59) tabs_2_long_active_pane_t1

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp4

0x3685,	// (0x00003685) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xba6c,	// (0x0000ba6c) tabs_3_long_active_pane_t1

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp5

0x3685,	// (0x00003685) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane_ParamLimits

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane

0x16eb,	// (0x000016eb) grid_popup_fast_pane_ParamLimits

0x16eb,	// (0x000016eb) grid_popup_fast_pane

0x16fd,	// (0x000016fd) scroll_pane_cp9_ParamLimits

0x16fd,	// (0x000016fd) scroll_pane_cp9

0x716f,	// (0x0000716f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x716f,	// (0x0000716f) list_single_graphic_hl_pane_t1_cp2

0x1721,	// (0x00001721) input_focus_pane_cp20_ParamLimits

0x1721,	// (0x00001721) input_focus_pane_cp20

0x172f,	// (0x0000172f) query_popup_data_pane_t1_ParamLimits

0x172f,	// (0x0000172f) query_popup_data_pane_t1

0x1742,	// (0x00001742) query_popup_data_pane_t2_ParamLimits

0x1742,	// (0x00001742) query_popup_data_pane_t2

0x1788,	// (0x00001788) query_popup_data_pane_t3_ParamLimits

0x1788,	// (0x00001788) query_popup_data_pane_t3

0x17c9,	// (0x000017c9) query_popup_data_pane_t4_ParamLimits

0x17c9,	// (0x000017c9) query_popup_data_pane_t4

0x1805,	// (0x00001805) query_popup_data_pane_t5_ParamLimits

0x1805,	// (0x00001805) query_popup_data_pane_t5

0x0004,

0xa7d9,	// (0x0000a7d9) query_popup_data_pane_t_ParamLimits

0xa7d9,	// (0x0000a7d9) query_popup_data_pane_t

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

0xa7e4,	// (0x0000a7e4) bg_set_opt_pane_g

0x20c8,	// (0x000020c8) control_top_pane_stacon_ParamLimits

0x20c8,	// (0x000020c8) control_top_pane_stacon

0x211b,	// (0x0000211b) signal_pane_stacon_ParamLimits

0x211b,	// (0x0000211b) signal_pane_stacon

0x2140,	// (0x00002140) stacon_top_pane_g1_ParamLimits

0x2140,	// (0x00002140) stacon_top_pane_g1

0x2162,	// (0x00002162) title_pane_stacon_ParamLimits

0x2162,	// (0x00002162) title_pane_stacon

0x218c,	// (0x0000218c) uni_indicator_pane_stacon_ParamLimits

0x218c,	// (0x0000218c) uni_indicator_pane_stacon

0x21a1,	// (0x000021a1) battery_pane_stacon_ParamLimits

0x21a1,	// (0x000021a1) battery_pane_stacon

0x21e5,	// (0x000021e5) control_bottom_pane_stacon_ParamLimits

0x21e5,	// (0x000021e5) control_bottom_pane_stacon

0x2208,	// (0x00002208) navi_pane_stacon_ParamLimits

0x2208,	// (0x00002208) navi_pane_stacon

0x222b,	// (0x0000222b) stacon_bottom_pane_g1_ParamLimits

0x222b,	// (0x0000222b) stacon_bottom_pane_g1

0x183c,	// (0x0000183c) aid_levels_signal_lsc_ParamLimits

0x183c,	// (0x0000183c) aid_levels_signal_lsc

0x1853,	// (0x00001853) signal_pane_stacon_g1_ParamLimits

0x1853,	// (0x00001853) signal_pane_stacon_g1

0x1867,	// (0x00001867) signal_pane_stacon_g2_ParamLimits

0x1867,	// (0x00001867) signal_pane_stacon_g2

0x0001,

0xa7f7,	// (0x0000a7f7) signal_pane_stacon_g_ParamLimits

0xa7f7,	// (0x0000a7f7) signal_pane_stacon_g

0x18a9,	// (0x000018a9) title_pane_stacon_t1_ParamLimits

0x18a9,	// (0x000018a9) title_pane_stacon_t1

0x18ce,	// (0x000018ce) uni_indicator_pane_stacon_g1

0x18d8,	// (0x000018d8) uni_indicator_pane_stacon_g2

0x18e2,	// (0x000018e2) uni_indicator_pane_stacon_g3

0x18ec,	// (0x000018ec) uni_indicator_pane_stacon_g4

0x0003,

0xa803,	// (0x0000a803) uni_indicator_pane_stacon_g

0x18f6,	// (0x000018f6) control_top_pane_stacon_g1

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1_ParamLimits

0x18fe,	// (0x000018fe) control_top_pane_stacon_t1

0x1935,	// (0x00001935) aid_levels_battery_lsc_ParamLimits

0x1935,	// (0x00001935) aid_levels_battery_lsc

0x194d,	// (0x0000194d) battery_pane_stacon_g1_ParamLimits

0x194d,	// (0x0000194d) battery_pane_stacon_g1

0x1960,	// (0x00001960) battery_pane_stacon_g2_ParamLimits

0x1960,	// (0x00001960) battery_pane_stacon_g2

0x0001,

0xa80c,	// (0x0000a80c) battery_pane_stacon_g_ParamLimits

0xa80c,	// (0x0000a80c) battery_pane_stacon_g

0x199e,	// (0x0000199e) navi_icon_pane_stacon

0x19b2,	// (0x000019b2) navi_navi_pane_stacon

0x199e,	// (0x0000199e) navi_text_pane_stacon

0x18f6,	// (0x000018f6) control_bottom_pane_stacon_g1

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1_ParamLimits

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1

0xba7e,	// (0x0000ba7e) grid_app_pane_ParamLimits

0xba7e,	// (0x0000ba7e) grid_app_pane

0xbab4,	// (0x0000bab4) scroll_pane_cp15_ParamLimits

0xbab4,	// (0x0000bab4) scroll_pane_cp15

0xbad1,	// (0x0000bad1) cell_app_pane_ParamLimits

0xbad1,	// (0x0000bad1) cell_app_pane

0xbb18,	// (0x0000bb18) cell_app_pane_g1_ParamLimits

0xbb18,	// (0x0000bb18) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xeca8,	// (0x0000eca8) cell_app_pane_g_ParamLimits

0xeca8,	// (0x0000eca8) cell_app_pane_g

0x1aa8,	// (0x00001aa8) cell_app_pane_t1_ParamLimits

0x1aa8,	// (0x00001aa8) cell_app_pane_t1

0x1aba,	// (0x00001aba) grid_highlight_pane_ParamLimits

0x1aba,	// (0x00001aba) grid_highlight_pane

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

0xa7bf,	// (0x0000a7bf) cell_highlight_pane_g

0x1ade,	// (0x00001ade) bg_scroll_pane

0x1afd,	// (0x00001afd) scroll_handle_pane

0x1b4e,	// (0x00001b4e) scroll_bg_pane_g1

0x1b63,	// (0x00001b63) scroll_bg_pane_g2

0x1b7b,	// (0x00001b7b) scroll_bg_pane_g3

0x0002,

0xa816,	// (0x0000a816) scroll_bg_pane_g

0x1b90,	// (0x00001b90) scroll_handle_focus_pane_ParamLimits

0x1b90,	// (0x00001b90) scroll_handle_focus_pane

0x1b4e,	// (0x00001b4e) scroll_handle_pane_g1

0x1b9d,	// (0x00001b9d) scroll_handle_pane_g2

0x1b7b,	// (0x00001b7b) scroll_handle_pane_g3

0x0002,

0xa81d,	// (0x0000a81d) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb1,	// (0x00001bb1) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb1,	// (0x00001bb1) popup_fep_japan_predictive_window_t1

0x1bc8,	// (0x00001bc8) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bc8,	// (0x00001bc8) popup_fep_japan_predictive_window_t2

0x1bfb,	// (0x00001bfb) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bfb,	// (0x00001bfb) popup_fep_japan_predictive_window_t3

0x0002,

0xa824,	// (0x0000a824) popup_fep_japan_predictive_window_t_ParamLimits

0xa824,	// (0x0000a824) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c32,	// (0x00001c32) listscroll_japin_cand_pane

0x1c3a,	// (0x00001c3a) popup_fep_japan_candidate_window_t1

0x1c48,	// (0x00001c48) candidate_pane_ParamLimits

0x1c48,	// (0x00001c48) candidate_pane

0x1c5a,	// (0x00001c5a) scroll_pane_cp30

0x1c62,	// (0x00001c62) list_single_popup_jap_candidate_pane_ParamLimits

0x1c62,	// (0x00001c62) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1c76,	// (0x00001c76) list_single_popup_jap_candidate_pane_t1

0x1c85,	// (0x00001c85) level_1_signal

0x1c92,	// (0x00001c92) level_2_signal

0x1c9f,	// (0x00001c9f) level_3_signal

0x1cac,	// (0x00001cac) level_4_signal

0x1cb9,	// (0x00001cb9) level_5_signal

0x1cc6,	// (0x00001cc6) level_6_signal

0x1cd3,	// (0x00001cd3) level_7_signal

0x1c85,	// (0x00001c85) level_1_battery

0x1c92,	// (0x00001c92) level_2_battery

0x1c9f,	// (0x00001c9f) level_3_battery

0x1cac,	// (0x00001cac) level_4_battery

0x1cb9,	// (0x00001cb9) level_5_battery

0x1cc6,	// (0x00001cc6) level_6_battery

0x1cd3,	// (0x00001cd3) level_7_battery

0x1d17,	// (0x00001d17) list_menu_pane_ParamLimits

0x1d17,	// (0x00001d17) list_menu_pane

0x1d28,	// (0x00001d28) scroll_pane_cp25_ParamLimits

0x1d28,	// (0x00001d28) scroll_pane_cp25

0x1d41,	// (0x00001d41) list_double2_graphic_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double2_graphic_pane_cp2

0x1d41,	// (0x00001d41) list_double2_large_graphic_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double2_large_graphic_pane_cp2

0x1d41,	// (0x00001d41) list_double2_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double2_pane_cp2

0x1d41,	// (0x00001d41) list_double_graphic_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double_graphic_pane_cp2

0x1d41,	// (0x00001d41) list_double_large_graphic_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double_large_graphic_pane_cp2

0x1d41,	// (0x00001d41) list_double_number_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double_number_pane_cp2

0x1d41,	// (0x00001d41) list_double_pane_cp2_ParamLimits

0x1d41,	// (0x00001d41) list_double_pane_cp2

0xbb56,	// (0x0000bb56) list_single_2graphic_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_2graphic_pane_cp2

0xbb56,	// (0x0000bb56) list_single_graphic_heading_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_graphic_heading_pane_cp2

0xbb56,	// (0x0000bb56) list_single_graphic_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_graphic_pane_cp2

0xbb56,	// (0x0000bb56) list_single_heading_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_heading_pane_cp2

0x1d7a,	// (0x00001d7a) list_single_large_graphic_pane_cp2_ParamLimits

0x1d7a,	// (0x00001d7a) list_single_large_graphic_pane_cp2

0xbb56,	// (0x0000bb56) list_single_number_heading_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_number_heading_pane_cp2

0xbb56,	// (0x0000bb56) list_single_number_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_number_pane_cp2

0xbb56,	// (0x0000bb56) list_single_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_pane_cp2

0x1e2b,	// (0x00001e2b) bg_popup_sub_pane_cp22

0x1e50,	// (0x00001e50) popup_side_volume_key_window_g1

0x1e7a,	// (0x00001e7a) popup_side_volume_key_window_t1

0x1e96,	// (0x00001e96) volume_small_pane_cp1

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24_ParamLimits

0x080b,	// (0x0000080b) bg_popup_sub_pane_cp24

0x1e9e,	// (0x00001e9e) fep_china_uni_candidate_pane_ParamLimits

0x1e9e,	// (0x00001e9e) fep_china_uni_candidate_pane

0x1eb2,	// (0x00001eb2) fep_china_uni_entry_pane

0x1ec2,	// (0x00001ec2) popup_fep_china_uni_window_g1

0x1ede,	// (0x00001ede) fep_china_uni_entry_pane_g1

0x1ee6,	// (0x00001ee6) fep_china_uni_entry_pane_g2

0x0001,

0xa851,	// (0x0000a851) fep_china_uni_entry_pane_g

0x1eee,	// (0x00001eee) fep_entry_item_pane

0x1ef8,	// (0x00001ef8) fep_candidate_item_pane

0x1f00,	// (0x00001f00) fep_china_uni_candidate_pane_g1

0x1f08,	// (0x00001f08) fep_china_uni_candidate_pane_g2

0x1f10,	// (0x00001f10) fep_china_uni_candidate_pane_g3

0x1f18,	// (0x00001f18) fep_china_uni_candidate_pane_g4

0x0003,

0xa856,	// (0x0000a856) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f20,	// (0x00001f20) fep_entry_item_pane_t1_ParamLimits

0x1f20,	// (0x00001f20) fep_entry_item_pane_t1

0x1f36,	// (0x00001f36) fep_candidate_item_pane_t1_ParamLimits

0x1f36,	// (0x00001f36) fep_candidate_item_pane_t1

0x1f4b,	// (0x00001f4b) fep_candidate_item_pane_t2_ParamLimits

0x1f4b,	// (0x00001f4b) fep_candidate_item_pane_t2

0x0001,

0xa85f,	// (0x0000a85f) fep_candidate_item_pane_t_ParamLimits

0xa85f,	// (0x0000a85f) fep_candidate_item_pane_t

0x04e9,	// (0x000004e9) list_highlight_pane_cp31_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp31

0x1f5d,	// (0x00001f5d) level_1_signal_lsc

0x1f66,	// (0x00001f66) level_2_signal_lsc

0x1f6f,	// (0x00001f6f) level_3_signal_lsc

0x1f78,	// (0x00001f78) level_4_signal_lsc

0x1f81,	// (0x00001f81) level_5_signal_lsc

0x1f8a,	// (0x00001f8a) level_6_signal_lsc

0x1f93,	// (0x00001f93) level_7_signal_lsc

0x1f93,	// (0x00001f93) level_1_battery_lsc

0x1f9c,	// (0x00001f9c) level_2_battery_lsc

0x1fa5,	// (0x00001fa5) level_3_battery_lsc

0x1fae,	// (0x00001fae) level_4_battery_lsc

0x1fb7,	// (0x00001fb7) level_5_battery_lsc

0x1fc0,	// (0x00001fc0) level_6_battery_lsc

0x1f5d,	// (0x00001f5d) level_7_battery_lsc

0x1fc9,	// (0x00001fc9) scroll_handle_focus_pane_g1

0x1fd2,	// (0x00001fd2) scroll_handle_focus_pane_g2

0x1fdb,	// (0x00001fdb) scroll_handle_focus_pane_g3

0x0002,

0xa864,	// (0x0000a864) scroll_handle_focus_pane_g

0xbbb8,	// (0x0000bbb8) list_single_2graphic_pane_g1_ParamLimits

0xbbb8,	// (0x0000bbb8) list_single_2graphic_pane_g1

0xb54b,	// (0x0000b54b) list_single_2graphic_pane_g2_ParamLimits

0xb54b,	// (0x0000b54b) list_single_2graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3

0xbbc4,	// (0x0000bbc4) list_single_2graphic_pane_g4_ParamLimits

0xbbc4,	// (0x0000bbc4) list_single_2graphic_pane_g4

0x0003,

0xecb2,	// (0x0000ecb2) list_single_2graphic_pane_g_ParamLimits

0xecb2,	// (0x0000ecb2) list_single_2graphic_pane_g

0xbbd0,	// (0x0000bbd0) list_single_2graphic_pane_t1_ParamLimits

0xbbd0,	// (0x0000bbd0) list_single_2graphic_pane_t1

0xbbfe,	// (0x0000bbfe) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbbfe,	// (0x0000bbfe) list_double2_graphic_large_graphic_pane_g1

0xb588,	// (0x0000b588) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb588,	// (0x0000b588) list_double2_graphic_large_graphic_pane_g2

0xb599,	// (0x0000b599) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb599,	// (0x0000b599) list_double2_graphic_large_graphic_pane_g3

0xbc10,	// (0x0000bc10) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbc10,	// (0x0000bc10) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xecbb,	// (0x0000ecbb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xecbb,	// (0x0000ecbb) list_double2_graphic_large_graphic_pane_g

0xbc1c,	// (0x0000bc1c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbc1c,	// (0x0000bc1c) list_double2_graphic_large_graphic_pane_t1

0xbc32,	// (0x0000bc32) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbc32,	// (0x0000bc32) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xecc4,	// (0x0000ecc4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xecc4,	// (0x0000ecc4) list_double2_graphic_large_graphic_pane_t

0x22f6,	// (0x000022f6) popup_fast_swap_window_ParamLimits

0x22f6,	// (0x000022f6) popup_fast_swap_window

0x2312,	// (0x00002312) popup_side_volume_key_window

0x232c,	// (0x0000232c) stacon_top_pane

0x2336,	// (0x00002336) status_pane_ParamLimits

0x2336,	// (0x00002336) status_pane

0x232c,	// (0x0000232c) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x126e,	// (0x0000126e) scroll_pane_cp121

0x1265,	// (0x00001265) set_content_pane

0xbc44,	// (0x0000bc44) bg_active_tab_pane_g1_cp1

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp1

0xbc4d,	// (0x0000bc4d) bg_active_tab_pane_g3_cp1

0xbc44,	// (0x0000bc44) bg_passive_tab_pane_g1_cp1

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp1

0xbc4d,	// (0x0000bc4d) bg_passive_tab_pane_g3_cp1

0xbc56,	// (0x0000bc56) bg_active_tab_pane_g1_cp2

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp2

0xbc5f,	// (0x0000bc5f) bg_active_tab_pane_g3_cp2

0xbc56,	// (0x0000bc56) bg_passive_tab_pane_g1_cp2

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp2

0xbc5f,	// (0x0000bc5f) bg_passive_tab_pane_g3_cp2

0xbc68,	// (0x0000bc68) bg_active_tab_pane_g1_cp3

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp3

0xbc71,	// (0x0000bc71) bg_active_tab_pane_g3_cp3

0xbc68,	// (0x0000bc68) bg_passive_tab_pane_g1_cp3

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp3

0xbc71,	// (0x0000bc71) bg_passive_tab_pane_g3_cp3

0xbc7a,	// (0x0000bc7a) bg_active_tab_pane_g1_cp4

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp4

0xbc83,	// (0x0000bc83) bg_active_tab_pane_g3_cp4

0xbc7a,	// (0x0000bc7a) bg_passive_tab_pane_g1_cp4

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp4

0xbc83,	// (0x0000bc83) bg_passive_tab_pane_g3_cp4

0x2247,	// (0x00002247) bg_active_tab_pane_g1_cp5

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp5

0x2250,	// (0x00002250) bg_active_tab_pane_g3_cp5

0x2247,	// (0x00002247) bg_passive_tab_pane_g1_cp5

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp5

0x2250,	// (0x00002250) bg_passive_tab_pane_g3_cp5

0xa3c3,	// (0x0000a3c3) list_set_graphic_pane_ParamLimits

0xa3c3,	// (0x0000a3c3) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2277,	// (0x00002277) list_set_graphic_pane_g1_ParamLimits

0x2277,	// (0x00002277) list_set_graphic_pane_g1

0x2283,	// (0x00002283) list_set_graphic_pane_g2_ParamLimits

0x2283,	// (0x00002283) list_set_graphic_pane_g2

0x0001,

0xa882,	// (0x0000a882) list_set_graphic_pane_g_ParamLimits

0xa882,	// (0x0000a882) list_set_graphic_pane_g

0x0009,

0xabe6,	// (0x0000abe6) volume_small_pane_cp_g

0x22a7,	// (0x000022a7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22a7,	// (0x000022a7) list_double2_large_graphic_pane_g1_cp2

0x22b5,	// (0x000022b5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22b5,	// (0x000022b5) list_double2_large_graphic_pane_g2_cp2

0x22c6,	// (0x000022c6) list_double2_large_graphic_pane_g3_cp2

0x22ce,	// (0x000022ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22ce,	// (0x000022ce) list_double2_large_graphic_pane_t1_cp2

0x22e4,	// (0x000022e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22e4,	// (0x000022e4) list_double2_large_graphic_pane_t2_cp2

0x4a0f,	// (0x00004a0f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a0f,	// (0x00004a0f) list_double_large_graphic_pane_g1_cp2

0x4a22,	// (0x00004a22) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a22,	// (0x00004a22) list_double_large_graphic_pane_g2_cp2

0x2454,	// (0x00002454) list_double_large_graphic_pane_g3_cp2

0x4a33,	// (0x00004a33) list_double_large_graphic_pane_g4_cp

0x4a3b,	// (0x00004a3b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a3b,	// (0x00004a3b) list_double_large_graphic_pane_t1_cp2

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a52,	// (0x00004a52) list_double_large_graphic_pane_t2_cp2

0x2344,	// (0x00002344) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2344,	// (0x00002344) list_double2_graphic_pane_g1_cp2

0x2352,	// (0x00002352) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2352,	// (0x00002352) list_double2_graphic_pane_g2_cp2

0x2363,	// (0x00002363) list_double2_graphic_pane_g3_cp2

0x236d,	// (0x0000236d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x236d,	// (0x0000236d) list_double2_graphic_pane_t1_cp2

0x2383,	// (0x00002383) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2383,	// (0x00002383) list_double2_graphic_pane_t2_cp2

0x2395,	// (0x00002395) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2395,	// (0x00002395) list_single_number_heading_pane_g1_cp2

0x23a1,	// (0x000023a1) list_single_number_heading_pane_g2_cp2

0x23a9,	// (0x000023a9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x23a9,	// (0x000023a9) list_single_number_heading_pane_t1_cp2

0x23bf,	// (0x000023bf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x23bf,	// (0x000023bf) list_single_number_heading_pane_t2_cp2

0x23d3,	// (0x000023d3) list_single_number_heading_pane_t3_cp2_ParamLimits

0x23d3,	// (0x000023d3) list_single_number_heading_pane_t3_cp2

0x2395,	// (0x00002395) list_single_heading_pane_g1_cp2_ParamLimits

0x2395,	// (0x00002395) list_single_heading_pane_g1_cp2

0x23a1,	// (0x000023a1) list_single_heading_pane_g2_cp2

0x23a9,	// (0x000023a9) list_single_heading_pane_t1_cp2_ParamLimits

0x23a9,	// (0x000023a9) list_single_heading_pane_t1_cp2

0x4817,	// (0x00004817) list_single_heading_pane_t2_cp2_ParamLimits

0x4817,	// (0x00004817) list_single_heading_pane_t2_cp2

0x4759,	// (0x00004759) list_double_graphic_pane_g1_cp2_ParamLimits

0x4759,	// (0x00004759) list_double_graphic_pane_g1_cp2

0x4765,	// (0x00004765) list_double_graphic_pane_g2_cp2_ParamLimits

0x4765,	// (0x00004765) list_double_graphic_pane_g2_cp2

0x4774,	// (0x00004774) list_double_graphic_pane_g3_cp2

0x477c,	// (0x0000477c) list_double_graphic_pane_t1_cp2_ParamLimits

0x477c,	// (0x0000477c) list_double_graphic_pane_t1_cp2

0x4792,	// (0x00004792) list_double_graphic_pane_t2_cp2_ParamLimits

0x4792,	// (0x00004792) list_double_graphic_pane_t2_cp2

0x2448,	// (0x00002448) list_double_number_pane_g1_cp2_ParamLimits

0x2448,	// (0x00002448) list_double_number_pane_g1_cp2

0x2454,	// (0x00002454) list_double_number_pane_g2_cp2

0x471d,	// (0x0000471d) list_double_number_pane_t1_cp2_ParamLimits

0x471d,	// (0x0000471d) list_double_number_pane_t1_cp2

0x4731,	// (0x00004731) list_double_number_pane_t2_cp2_ParamLimits

0x4731,	// (0x00004731) list_double_number_pane_t2_cp2

0x4747,	// (0x00004747) list_double_number_pane_t3_cp2_ParamLimits

0x4747,	// (0x00004747) list_double_number_pane_t3_cp2

0x45f5,	// (0x000045f5) list_single_graphic_pane_g1_cp2_ParamLimits

0x45f5,	// (0x000045f5) list_single_graphic_pane_g1_cp2

0x24ac,	// (0x000024ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_graphic_pane_g2_cp2

0x24b8,	// (0x000024b8) list_single_graphic_pane_g3_cp2

0x45cb,	// (0x000045cb) list_single_graphic_pane_t1_cp2_ParamLimits

0x45cb,	// (0x000045cb) list_single_graphic_pane_t1_cp2

0x24ac,	// (0x000024ac) list_single_number_pane_g1_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_number_pane_g1_cp2

0x24b8,	// (0x000024b8) list_single_number_pane_g2_cp2

0x45cb,	// (0x000045cb) list_single_number_pane_t1_cp2_ParamLimits

0x45cb,	// (0x000045cb) list_single_number_pane_t1_cp2

0x45e1,	// (0x000045e1) list_single_number_pane_t2_cp2_ParamLimits

0x45e1,	// (0x000045e1) list_single_number_pane_t2_cp2

0x22b5,	// (0x000022b5) list_double2_pane_g1_cp2_ParamLimits

0x22b5,	// (0x000022b5) list_double2_pane_g1_cp2

0x22c6,	// (0x000022c6) list_double2_pane_g2_cp2

0x2420,	// (0x00002420) list_double2_pane_t1_cp2_ParamLimits

0x2420,	// (0x00002420) list_double2_pane_t1_cp2

0x2436,	// (0x00002436) list_double2_pane_t2_cp2_ParamLimits

0x2436,	// (0x00002436) list_double2_pane_t2_cp2

0x2448,	// (0x00002448) list_double_pane_g1_cp2_ParamLimits

0x2448,	// (0x00002448) list_double_pane_g1_cp2

0x2454,	// (0x00002454) list_double_pane_g2_cp2

0x245c,	// (0x0000245c) list_double_pane_t1_cp2_ParamLimits

0x245c,	// (0x0000245c) list_double_pane_t1_cp2

0x2472,	// (0x00002472) list_double_pane_t2_cp2_ParamLimits

0x2472,	// (0x00002472) list_double_pane_t2_cp2

0x249c,	// (0x0000249c) list_single_pane_cp2_g3

0x24ac,	// (0x000024ac) list_single_pane_g1_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_pane_g1_cp2

0x24b8,	// (0x000024b8) list_single_pane_g2_cp2

0x24c0,	// (0x000024c0) list_single_pane_t1_cp2_ParamLimits

0x24c0,	// (0x000024c0) list_single_pane_t1_cp2

0x24d8,	// (0x000024d8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x24d8,	// (0x000024d8) list_single_large_graphic_pane_g1_cp2

0x24e6,	// (0x000024e6) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x24e6,	// (0x000024e6) list_single_large_graphic_pane_g2_cp2

0x24f2,	// (0x000024f2) list_single_large_graphic_pane_g3_cp2

0x24fa,	// (0x000024fa) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x24fa,	// (0x000024fa) list_single_large_graphic_pane_g4_cp1

0x2514,	// (0x00002514) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2514,	// (0x00002514) list_single_large_graphic_pane_t1_cp2

0x443c,	// (0x0000443c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x443c,	// (0x0000443c) list_single_graphic_heading_pane_g1_cp2

0x4409,	// (0x00004409) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4409,	// (0x00004409) list_single_graphic_heading_pane_g4_cp2

0x24b8,	// (0x000024b8) list_single_graphic_heading_pane_g5_cp2

0x4448,	// (0x00004448) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4448,	// (0x00004448) list_single_graphic_heading_pane_t1_cp2

0x445e,	// (0x0000445e) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x445e,	// (0x0000445e) list_single_graphic_heading_pane_t2_cp2

0x43fd,	// (0x000043fd) list_single_2graphic_pane_g1_cp2_ParamLimits

0x43fd,	// (0x000043fd) list_single_2graphic_pane_g1_cp2

0x4409,	// (0x00004409) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4409,	// (0x00004409) list_single_2graphic_pane_g2_cp2

0x24b8,	// (0x000024b8) list_single_2graphic_pane_g3_cp2

0x441a,	// (0x0000441a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x441a,	// (0x0000441a) list_single_2graphic_pane_g4_cp2

0x4426,	// (0x00004426) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4426,	// (0x00004426) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x3fe5,	// (0x00003fe5) list_highlight_pane_g1_cp1

0x3fed,	// (0x00003fed) list_highlight_pane_g2_cp1

0x3ff5,	// (0x00003ff5) list_highlight_pane_g3_cp1

0x3ffd,	// (0x00003ffd) list_highlight_pane_g4_cp1

0x4005,	// (0x00004005) list_highlight_pane_g5_cp1

0x400d,	// (0x0000400d) list_highlight_pane_g6_cp1

0x4015,	// (0x00004015) list_highlight_pane_g7_cp1

0x401d,	// (0x0000401d) list_highlight_pane_g8_cp1

0x4025,	// (0x00004025) list_highlight_pane_g9_cp1

0xcab1,	// (0x0000cab1) form_field_slider_pane_t3

0xcac1,	// (0x0000cac1) form_field_slider_pane_t4

0x3f19,	// (0x00003f19) slider_form_pane_ParamLimits

0x3f19,	// (0x00003f19) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4863,	// (0x00004863) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaa10,	// (0x0000aa10) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x252a,	// (0x0000252a) text_digital

0x2539,	// (0x00002539) text_primary

0x2548,	// (0x00002548) text_primary_small

0x2557,	// (0x00002557) text_secondary

0x2566,	// (0x00002566) text_title

0x5163,	// (0x00005163) bg_passive_tab_pane_g1_cp3_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp3_srt

0x516c,	// (0x0000516c) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x5175,	// (0x00005175) tabs_4_active_pane_srt_g1

0xd010,	// (0x0000d010) tabs_4_active_pane_srt_t1_ParamLimits

0xd010,	// (0x0000d010) tabs_4_active_pane_srt_t1

0x5163,	// (0x00005163) bg_active_tab_pane_g1_cp3_copy1

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp3_copy1

0x516c,	// (0x0000516c) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp4_srt

0x4d20,	// (0x00004d20) bg_passive_tab_pane_g1_cp4_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp4_srt

0x4d29,	// (0x00004d29) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xcdec,	// (0x0000cdec) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcdec,	// (0x0000cdec) tabs_2_long_active_pane_srt_t1

0x4d20,	// (0x00004d20) bg_active_tab_pane_g1_cp4_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp4_srt

0x4d29,	// (0x00004d29) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp5_srt

0x2247,	// (0x00002247) bg_passive_tab_pane_g1_cp5_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp5_srt

0x2250,	// (0x00002250) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xcdd6,	// (0x0000cdd6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcdd6,	// (0x0000cdd6) tabs_3_long_active_pane_srt_t1

0x2247,	// (0x00002247) bg_active_tab_pane_g1_cp5_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp5_srt

0x2250,	// (0x00002250) bg_active_tab_pane_g3_cp5_srt

0x4d00,	// (0x00004d00) navi_text_pane_srt_t1

0x4cf8,	// (0x00004cf8) navi_icon_pane_srt_g1

0x27de,	// (0x000027de) midp_editing_number_pane_srt

0x2575,	// (0x00002575) midp_ticker_pane_srt

0x27e6,	// (0x000027e6) midp_ticker_pane_srt_g1

0x27ee,	// (0x000027ee) midp_ticker_pane_srt_g2

0x0001,

0xa8a1,	// (0x0000a8a1) midp_ticker_pane_srt_g

0x27f6,	// (0x000027f6) midp_ticker_pane_srt_t1

0x4ce9,	// (0x00004ce9) midp_editing_number_pane_t1_copy1

0xbc8c,	// (0x0000bc8c) listscroll_midp_pane

0xbc8c,	// (0x0000bc8c) midp_form_pane

0x25ed,	// (0x000025ed) midp_info_popup_window_ParamLimits

0x25ed,	// (0x000025ed) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane_ParamLimits

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane

0x3c33,	// (0x00003c33) listscroll_form_midp_pane_ParamLimits

0x3c33,	// (0x00003c33) listscroll_form_midp_pane

0x3c3f,	// (0x00003c3f) scroll_bar_cp050

0xcaa5,	// (0x0000caa5) list_midp_pane

0x5e2e,	// (0x00005e2e) signal_pane_g2_cp

0x3b4d,	// (0x00003b4d) listscroll_midp_info_pane_t1_ParamLimits

0x3b4d,	// (0x00003b4d) listscroll_midp_info_pane_t1

0x3b65,	// (0x00003b65) listscroll_midp_info_pane_t2_ParamLimits

0x3b65,	// (0x00003b65) listscroll_midp_info_pane_t2

0x3ba3,	// (0x00003ba3) listscroll_midp_info_pane_t3_ParamLimits

0x3ba3,	// (0x00003ba3) listscroll_midp_info_pane_t3

0x3bdd,	// (0x00003bdd) listscroll_midp_info_pane_t4_ParamLimits

0x3bdd,	// (0x00003bdd) listscroll_midp_info_pane_t4

0x0003,

0xa94b,	// (0x0000a94b) listscroll_midp_info_pane_t_ParamLimits

0xa94b,	// (0x0000a94b) listscroll_midp_info_pane_t

0x1642,	// (0x00001642) scroll_pane_cp21

0x3af1,	// (0x00003af1) form_midp_field_choice_group_pane

0x3afa,	// (0x00003afa) form_midp_field_text_pane

0x3b33,	// (0x00003b33) form_midp_field_time_pane

0x3b3b,	// (0x00003b3b) form_midp_gauge_slider_pane

0x3b44,	// (0x00003b44) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xca89,	// (0x0000ca89) list_single_midp_pane_ParamLimits

0xca89,	// (0x0000ca89) list_single_midp_pane

0xca65,	// (0x0000ca65) form_midp_field_text_pane_t1

0x37a8,	// (0x000037a8) input_focus_pane_cp050

0x3aa4,	// (0x00003aa4) list_midp_form_text_pane

0x3a34,	// (0x00003a34) form_midp_field_choice_group_pane_t1

0x3a42,	// (0x00003a42) input_focus_pane_cp051

0x3a56,	// (0x00003a56) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a18,	// (0x00003a18) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a26,	// (0x00003a26) form_midp_field_time_pane_t2

0x0001,

0x269d,	// (0x0000269d) aid_navinavi_width_2_pane

0xa946,	// (0x0000a946) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39d8,	// (0x000039d8) form_midp_gauge_slider_pane_t1

0x39e6,	// (0x000039e6) form_midp_gauge_slider_pane_t2

0xca49,	// (0x0000ca49) form_midp_gauge_slider_pane_t3

0xca57,	// (0x0000ca57) form_midp_gauge_slider_pane_t4

0x0003,

0xed05,	// (0x0000ed05) form_midp_gauge_slider_pane_t

0x3a10,	// (0x00003a10) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39a5,	// (0x000039a5) form_midp_gauge_wait_pane_t1_ParamLimits

0x39a5,	// (0x000039a5) form_midp_gauge_wait_pane_t1

0x39b7,	// (0x000039b7) form_midp_gauge_wait_pane_t2_ParamLimits

0x39b7,	// (0x000039b7) form_midp_gauge_wait_pane_t2

0x0001,

0xa938,	// (0x0000a938) form_midp_gauge_wait_pane_t_ParamLimits

0xa938,	// (0x0000a938) form_midp_gauge_wait_pane_t

0x39c9,	// (0x000039c9) form_midp_wait_pane_ParamLimits

0x39c9,	// (0x000039c9) form_midp_wait_pane

0x396f,	// (0x0000396f) form_midp_image_pane_g1

0x3978,	// (0x00003978) form_midp_image_pane_t1

0x3987,	// (0x00003987) form_midp_image_pane_t2

0x3996,	// (0x00003996) form_midp_image_pane_t3

0x0002,

0xa931,	// (0x0000a931) form_midp_image_pane_t

0x3957,	// (0x00003957) list_single_midp_pane_g1

0x3960,	// (0x00003960) list_single_midp_pane_t1

0xca32,	// (0x0000ca32) list_midp_form_item_pane_ParamLimits

0xca32,	// (0x0000ca32) list_midp_form_item_pane

0x2645,	// (0x00002645) list_midp_form_item_pane_t1

0x2654,	// (0x00002654) midp_ticker_pane_g1

0x2660,	// (0x00002660) midp_ticker_pane_g2

0x0001,

0xa887,	// (0x0000a887) midp_ticker_pane_g

0xbd38,	// (0x0000bd38) midp_ticker_pane_t1

0xcf71,	// (0x0000cf71) midp_editing_number_pane_t1

0x4fb5,	// (0x00004fb5) midp_editing_number_pane

0x4fc4,	// (0x00004fc4) midp_ticker_pane

0x4cb1,	// (0x00004cb1) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cb9,	// (0x00004cb9) listscroll_ai_message_pane

0x4c3b,	// (0x00004c3b) ai_message_heading_pane_g1_ParamLimits

0x4c3b,	// (0x00004c3b) ai_message_heading_pane_g1

0x4c47,	// (0x00004c47) ai_message_heading_pane_g2_ParamLimits

0x4c47,	// (0x00004c47) ai_message_heading_pane_g2

0x4c53,	// (0x00004c53) ai_message_heading_pane_g3_ParamLimits

0x4c53,	// (0x00004c53) ai_message_heading_pane_g3

0x4c5f,	// (0x00004c5f) ai_message_heading_pane_g4_ParamLimits

0x4c5f,	// (0x00004c5f) ai_message_heading_pane_g4

0x0003,

0xaa72,	// (0x0000aa72) ai_message_heading_pane_g_ParamLimits

0xaa72,	// (0x0000aa72) ai_message_heading_pane_g

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_t1_ParamLimits

0x4c6b,	// (0x00004c6b) ai_message_heading_pane_t1

0x4c85,	// (0x00004c85) ai_message_heading_pane_t2_ParamLimits

0x4c85,	// (0x00004c85) ai_message_heading_pane_t2

0x0001,

0xaa7b,	// (0x0000aa7b) ai_message_heading_pane_t_ParamLimits

0xaa7b,	// (0x0000aa7b) ai_message_heading_pane_t

0x4c97,	// (0x00004c97) bg_popup_heading_pane_cp1_ParamLimits

0x4c97,	// (0x00004c97) bg_popup_heading_pane_cp1

0x4c29,	// (0x00004c29) list_ai_message_pane_ParamLimits

0x4c29,	// (0x00004c29) list_ai_message_pane

0x1642,	// (0x00001642) scroll_pane_cp10

0x4b75,	// (0x00004b75) list_ai_message_pane_g1

0x4b7d,	// (0x00004b7d) list_ai_message_pane_g2

0x0001,

0xaa4f,	// (0x0000aa4f) list_ai_message_pane_g

0x4b85,	// (0x00004b85) list_ai_message_pane_t1_ParamLimits

0x4b85,	// (0x00004b85) list_ai_message_pane_t1

0x4b9a,	// (0x00004b9a) list_ai_message_pane_t2_ParamLimits

0x4b9a,	// (0x00004b9a) list_ai_message_pane_t2

0x4baf,	// (0x00004baf) list_ai_message_pane_t3_ParamLimits

0x4baf,	// (0x00004baf) list_ai_message_pane_t3

0x4bc4,	// (0x00004bc4) list_ai_message_pane_t4_ParamLimits

0x4bc4,	// (0x00004bc4) list_ai_message_pane_t4

0x0003,

0xaa54,	// (0x0000aa54) list_ai_message_pane_t_ParamLimits

0xaa54,	// (0x0000aa54) list_ai_message_pane_t

0xcd9f,	// (0x0000cd9f) cell_ai_soft_ind_pane_ParamLimits

0xcd9f,	// (0x0000cd9f) cell_ai_soft_ind_pane

0x267e,	// (0x0000267e) cell_ai_soft_ind_pane_g1_ParamLimits

0x267e,	// (0x0000267e) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x268b,	// (0x0000268b) text_secondary_cp56_ParamLimits

0x268b,	// (0x0000268b) text_secondary_cp56

0x4b34,	// (0x00004b34) example_general_pane_ParamLimits

0x4b34,	// (0x00004b34) example_general_pane

0x4b40,	// (0x00004b40) example_parent_pane_g1_ParamLimits

0x4b40,	// (0x00004b40) example_parent_pane_g1

0x4b4c,	// (0x00004b4c) example_parent_pane_t1_ParamLimits

0x4b4c,	// (0x00004b4c) example_parent_pane_t1

0xc293,	// (0x0000c293) popup_preview_text_window_ParamLimits

0xc293,	// (0x0000c293) popup_preview_text_window

0x24a4,	// (0x000024a4) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x486b,	// (0x0000486b) popup_preview_text_window_t1_ParamLimits

0x486b,	// (0x0000486b) popup_preview_text_window_t1

0x4889,	// (0x00004889) popup_preview_text_window_t2_ParamLimits

0x4889,	// (0x00004889) popup_preview_text_window_t2

0x48d2,	// (0x000048d2) popup_preview_text_window_t3_ParamLimits

0x48d2,	// (0x000048d2) popup_preview_text_window_t3

0x4917,	// (0x00004917) popup_preview_text_window_t4_ParamLimits

0x4917,	// (0x00004917) popup_preview_text_window_t4

0x0004,

0xaa23,	// (0x0000aa23) popup_preview_text_window_t_ParamLimits

0xaa23,	// (0x0000aa23) popup_preview_text_window_t

0x4995,	// (0x00004995) scroll_pane_cp11

0x3618,	// (0x00003618) bg_popup_preview_window_pane_g1

0x482b,	// (0x0000482b) bg_popup_preview_window_pane_g2

0x4833,	// (0x00004833) bg_popup_preview_window_pane_g3

0x483b,	// (0x0000483b) bg_popup_preview_window_pane_g4

0x4843,	// (0x00004843) bg_popup_preview_window_pane_g5

0x484b,	// (0x0000484b) bg_popup_preview_window_pane_g6

0x4853,	// (0x00004853) bg_popup_preview_window_pane_g7

0x485b,	// (0x0000485b) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc20f,	// (0x0000c20f) popup_midp_note_alarm_window_ParamLimits

0xc20f,	// (0x0000c20f) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xb8c5,	// (0x0000b8c5) form_field_data_pane_g1

0xb8cf,	// (0x0000b8cf) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xba31,	// (0x0000ba31) input_popup_find_pane_g1_ParamLimits

0xba31,	// (0x0000ba31) input_popup_find_pane_g1

0x1971,	// (0x00001971) aid_navi_side_left_pane

0x1986,	// (0x00001986) aid_navi_side_right_pane

0x40e0,	// (0x000040e0) bg_popup_window_pane_cp30_ParamLimits

0x40e0,	// (0x000040e0) bg_popup_window_pane_cp30

0x415a,	// (0x0000415a) popup_midp_note_alarm_window_g1_ParamLimits

0x415a,	// (0x0000415a) popup_midp_note_alarm_window_g1

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_t1_ParamLimits

0x418a,	// (0x0000418a) popup_midp_note_alarm_window_t1

0x422b,	// (0x0000422b) popup_midp_note_alarm_window_t2_ParamLimits

0x422b,	// (0x0000422b) popup_midp_note_alarm_window_t2

0x42d9,	// (0x000042d9) popup_midp_note_alarm_window_t3_ParamLimits

0x42d9,	// (0x000042d9) popup_midp_note_alarm_window_t3

0x4301,	// (0x00004301) popup_midp_note_alarm_window_t4_ParamLimits

0x4301,	// (0x00004301) popup_midp_note_alarm_window_t4

0x4321,	// (0x00004321) popup_midp_note_alarm_window_t5_ParamLimits

0x4321,	// (0x00004321) popup_midp_note_alarm_window_t5

0x000a,

0xa9c0,	// (0x0000a9c0) popup_midp_note_alarm_window_t_ParamLimits

0xa9c0,	// (0x0000a9c0) popup_midp_note_alarm_window_t

0x43cd,	// (0x000043cd) wait_bar_pane_cp1_ParamLimits

0x43cd,	// (0x000043cd) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3dbe,	// (0x00003dbe) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xb8e9,	// (0x0000b8e9) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x51ed,	// (0x000051ed) aid_size_cell_graphic_pane

0xb968,	// (0x0000b968) data_form_pane_t1_ParamLimits

0xcf55,	// (0x0000cf55) data_form_wide_pane_t1_ParamLimits

0xc648,	// (0x0000c648) bg_status_flat_pane

0xb1ea,	// (0x0000b1ea) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xebdf,	// (0x0000ebdf) title_pane_t_ParamLimits

0x1c85,	// (0x00001c85) level_1_signal_ParamLimits

0x1c92,	// (0x00001c92) level_2_signal_ParamLimits

0x1c9f,	// (0x00001c9f) level_3_signal_ParamLimits

0x1cac,	// (0x00001cac) level_4_signal_ParamLimits

0x1cb9,	// (0x00001cb9) level_5_signal_ParamLimits

0x1cc6,	// (0x00001cc6) level_6_signal_ParamLimits

0x1cd3,	// (0x00001cd3) level_7_signal_ParamLimits

0x1c85,	// (0x00001c85) level_1_battery_ParamLimits

0x1c92,	// (0x00001c92) level_2_battery_ParamLimits

0x1c9f,	// (0x00001c9f) level_3_battery_ParamLimits

0x1cac,	// (0x00001cac) level_4_battery_ParamLimits

0x1cb9,	// (0x00001cb9) level_5_battery_ParamLimits

0x1cc6,	// (0x00001cc6) level_6_battery_ParamLimits

0x1cd3,	// (0x00001cd3) level_7_battery_ParamLimits

0x3fe5,	// (0x00003fe5) bg_status_flat_pane_g1

0x3fed,	// (0x00003fed) bg_status_flat_pane_g2

0x3ff5,	// (0x00003ff5) bg_status_flat_pane_g3

0x3ffd,	// (0x00003ffd) bg_status_flat_pane_g4

0x4005,	// (0x00004005) bg_status_flat_pane_g5

0x400d,	// (0x0000400d) bg_status_flat_pane_g6

0x4015,	// (0x00004015) bg_status_flat_pane_g7

0xb27e,	// (0x0000b27e) tabs_3_active_pane_t1_ParamLimits

0xb27e,	// (0x0000b27e) tabs_3_passive_pane_t1_ParamLimits

0xb298,	// (0x0000b298) tabs_4_active_pane_t1_ParamLimits

0xb298,	// (0x0000b298) tabs_4_1_passive_pane_t1_ParamLimits

0xba47,	// (0x0000ba47) tabs_2_active_pane_t1_ParamLimits

0xba47,	// (0x0000ba47) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xba59,	// (0x0000ba59) tabs_2_long_active_pane_t1_ParamLimits

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp4_ParamLimits

0x36d5,	// (0x000036d5) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xba6c,	// (0x0000ba6c) tabs_3_long_active_pane_t1_ParamLimits

0x2aee,	// (0x00002aee) bg_passive_tab_pane_cp5_ParamLimits

0x36d5,	// (0x000036d5) list_single_midp_graphic_pane_t1

0xc648,	// (0x0000c648) bg_status_flat_pane_ParamLimits

0x3217,	// (0x00003217) indicator_pane_cp2_ParamLimits

0x3217,	// (0x00003217) indicator_pane_cp2

0xc7bf,	// (0x0000c7bf) navi_pane_srt_ParamLimits

0xc7bf,	// (0x0000c7bf) navi_pane_srt

0x335f,	// (0x0000335f) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x2575,	// (0x00002575) copy_highlight_pane

0x2575,	// (0x00002575) cursor_graphics_pane

0x2575,	// (0x00002575) graphic_within_text_pane

0x2575,	// (0x00002575) link_highlight_pane

0x4958,	// (0x00004958) popup_preview_text_window_t5_ParamLimits

0x4958,	// (0x00004958) popup_preview_text_window_t5

0x26a5,	// (0x000026a5) cursor_digital_pane

0x26a5,	// (0x000026a5) cursor_primary_pane

0x26b6,	// (0x000026b6) cursor_primary_small_pane

0x26be,	// (0x000026be) cursor_secondary_pane

0x26c6,	// (0x000026c6) cursor_title_pane

0x26a5,	// (0x000026a5) link_highlight_digital_pane

0x26ad,	// (0x000026ad) link_highlight_primary_pane

0x26b6,	// (0x000026b6) link_highlight_primary_small_pane

0x26be,	// (0x000026be) link_highlight_secondary_pane

0x26c6,	// (0x000026c6) link_highlight_title_pane

0x26a5,	// (0x000026a5) copy_highlight_digital_pane

0x26a5,	// (0x000026a5) copy_highlight_primary_pane

0x26b6,	// (0x000026b6) copy_highlight_primary_small_pane

0x26be,	// (0x000026be) copy_highlight_secondary_pane

0x26c6,	// (0x000026c6) copy_highlight_title_pane

0x26be,	// (0x000026be) graphic_text_digital_pane

0x4083,	// (0x00004083) graphic_text_primary_pane

0x408c,	// (0x0000408c) graphic_text_primary_small_pane

0x26b6,	// (0x000026b6) graphic_text_secondary_pane

0x26a5,	// (0x000026a5) graphic_text_title_pane

0xbd4a,	// (0x0000bd4a) cursor_primary_pane_g1

0x4075,	// (0x00004075) cursor_text_primary_t1

0xcae5,	// (0x0000cae5) cursor_primary_small_pane_g1

0x4067,	// (0x00004067) cursor_text_primary_small_t1

0xcadb,	// (0x0000cadb) cursor_primary_small_pane_g1_copy1

0x404f,	// (0x0000404f) cursor_text_primary_small_t1_copy1

0x402d,	// (0x0000402d) cursor_text_title_t1

0xcad1,	// (0x0000cad1) cursor_title_pane_g1

0xbd4a,	// (0x0000bd4a) cursor_digital_pane_g1

0x26d8,	// (0x000026d8) cursor_text_digital_t1

0x3fce,	// (0x00003fce) link_highlight_primary_pane_g1

0x3fd6,	// (0x00003fd6) link_highlight_primary_pane_t1

0x26e6,	// (0x000026e6) link_highlight_primary_small_pane_g1

0x26ee,	// (0x000026ee) link_highlight_primary_small_pane_t1

0x26e6,	// (0x000026e6) link_highlight_secondary_pane_g1

0x26fd,	// (0x000026fd) link_highlight_secondary_pane_t1

0x3f42,	// (0x00003f42) link_highlight_title_pane_g1

0x3f4a,	// (0x00003f4a) link_highlight_title_pane_t1

0x3f2b,	// (0x00003f2b) link_highlight_digital_pane_g1

0x3f33,	// (0x00003f33) link_highlight_digital_pane_t1

0x3e03,	// (0x00003e03) copy_highlight_primary_pane_g1

0x3e0b,	// (0x00003e0b) copy_highlight_primary_pane_t1

0x3ddd,	// (0x00003ddd) copy_highlight_primary_small_pane_g1

0x3df4,	// (0x00003df4) copy_highlight_primary_small_pane_t1

0x270c,	// (0x0000270c) copy_highlight_secondary_pane_g1

0x2714,	// (0x00002714) copy_highlight_secondary_pane_t1

0x3ddd,	// (0x00003ddd) copy_highlight_title_pane_g1

0x3de5,	// (0x00003de5) copy_highlight_title_pane_t1

0x3e03,	// (0x00003e03) copy_highlight_digital_pane_g1

0x5473,	// (0x00005473) copy_highlight_digital_pane_t1

0x53c7,	// (0x000053c7) graphic_text_primary_pane_g1

0x5457,	// (0x00005457) graphic_text_primary_pane_t1

0x5465,	// (0x00005465) graphic_text_primary_pane_t2

0x0001,

0xaaef,	// (0x0000aaef) graphic_text_primary_pane_t

0x5433,	// (0x00005433) graphic_text_primary_small_pane_g1

0x543b,	// (0x0000543b) graphic_text_primary_small_pane_t1

0x5449,	// (0x00005449) graphic_text_primary_small_pane_t2

0x0001,

0xaaea,	// (0x0000aaea) graphic_text_primary_small_pane_t

0x540f,	// (0x0000540f) graphic_text_secondary_pane_g1

0x5417,	// (0x00005417) graphic_text_secondary_pane_t1

0x5425,	// (0x00005425) graphic_text_secondary_pane_t2

0x0001,

0xaae5,	// (0x0000aae5) graphic_text_secondary_pane_t

0x53eb,	// (0x000053eb) graphic_text_title_pane_g1

0x53f3,	// (0x000053f3) graphic_text_title_pane_t1

0x5401,	// (0x00005401) graphic_text_title_pane_t2

0x0001,

0xaae0,	// (0x0000aae0) graphic_text_title_pane_t

0x53c7,	// (0x000053c7) graphic_text_digital_pane_g1

0x53cf,	// (0x000053cf) graphic_text_digital_pane_t1

0x53dd,	// (0x000053dd) graphic_text_digital_pane_t2

0x0001,

0xaadb,	// (0x0000aadb) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x5392,	// (0x00005392) navi_navi_icon_text_pane_srt

0x539a,	// (0x0000539a) navi_navi_pane_srt_g1_ParamLimits

0x539a,	// (0x0000539a) navi_navi_pane_srt_g1

0x53ac,	// (0x000053ac) navi_navi_pane_srt_g2_ParamLimits

0x53ac,	// (0x000053ac) navi_navi_pane_srt_g2

0x0001,

0xaad6,	// (0x0000aad6) navi_navi_pane_srt_g_ParamLimits

0xaad6,	// (0x0000aad6) navi_navi_pane_srt_g

0x53be,	// (0x000053be) navi_navi_tabs_pane_srt

0x5392,	// (0x00005392) navi_navi_text_pane_srt

0x5392,	// (0x00005392) navi_navi_volume_pane_srt

0x5383,	// (0x00005383) navi_navi_text_pane_srt_t1

0x535e,	// (0x0000535e) navi_navi_volume_pane_srt_g1

0x5366,	// (0x00005366) volume_small_pane_srt_ParamLimits

0x5366,	// (0x00005366) volume_small_pane_srt

0x2723,	// (0x00002723) volume_small_pane_srt_g1_ParamLimits

0x2723,	// (0x00002723) volume_small_pane_srt_g1

0x2733,	// (0x00002733) volume_small_pane_srt_g2_ParamLimits

0x2733,	// (0x00002733) volume_small_pane_srt_g2

0x2744,	// (0x00002744) volume_small_pane_srt_g3_ParamLimits

0x2744,	// (0x00002744) volume_small_pane_srt_g3

0x2755,	// (0x00002755) volume_small_pane_srt_g4_ParamLimits

0x2755,	// (0x00002755) volume_small_pane_srt_g4

0x2766,	// (0x00002766) volume_small_pane_srt_g5_ParamLimits

0x2766,	// (0x00002766) volume_small_pane_srt_g5

0x2777,	// (0x00002777) volume_small_pane_srt_g6_ParamLimits

0x2777,	// (0x00002777) volume_small_pane_srt_g6

0x2788,	// (0x00002788) volume_small_pane_srt_g7_ParamLimits

0x2788,	// (0x00002788) volume_small_pane_srt_g7

0x2799,	// (0x00002799) volume_small_pane_srt_g8_ParamLimits

0x2799,	// (0x00002799) volume_small_pane_srt_g8

0x27aa,	// (0x000027aa) volume_small_pane_srt_g9_ParamLimits

0x27aa,	// (0x000027aa) volume_small_pane_srt_g9

0x27bb,	// (0x000027bb) volume_small_pane_srt_g10_ParamLimits

0x27bb,	// (0x000027bb) volume_small_pane_srt_g10

0x0009,

0xa88c,	// (0x0000a88c) volume_small_pane_srt_g_ParamLimits

0xa88c,	// (0x0000a88c) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x534c,	// (0x0000534c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x534c,	// (0x0000534c) navi_navi_icon_text_pane_srt_t1

0x4083,	// (0x00004083) navi_tabs_2_long_pane_srt

0x4083,	// (0x00004083) navi_tabs_2_pane_srt

0x4083,	// (0x00004083) navi_tabs_3_long_pane_srt

0x4083,	// (0x00004083) navi_tabs_3_pane_srt

0x4083,	// (0x00004083) navi_tabs_4_pane_srt

0x5324,	// (0x00005324) tabs_2_active_pane_srt_ParamLimits

0x5324,	// (0x00005324) tabs_2_active_pane_srt

0x5334,	// (0x00005334) tabs_2_passive_pane_srt_ParamLimits

0x5334,	// (0x00005334) tabs_2_passive_pane_srt

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp1_srt

0x52f8,	// (0x000052f8) bg_passive_tab_pane_g1_cp1_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp1_srt

0x5301,	// (0x00005301) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x530a,	// (0x0000530a) tabs_2_active_pane_srt_g1

0xd08d,	// (0x0000d08d) tabs_2_active_pane_srt_t1_ParamLimits

0xd08d,	// (0x0000d08d) tabs_2_active_pane_srt_t1

0x52f8,	// (0x000052f8) bg_active_tab_pane_g1_cp1_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp1_srt

0x5301,	// (0x00005301) bg_active_tab_pane_g3_cp1_srt

0x52c5,	// (0x000052c5) tabs_3_active_pane_srt_ParamLimits

0x52c5,	// (0x000052c5) tabs_3_active_pane_srt

0x52d6,	// (0x000052d6) tabs_3_passive_pane_cp_srt_ParamLimits

0x52d6,	// (0x000052d6) tabs_3_passive_pane_cp_srt

0x52e7,	// (0x000052e7) tabs_3_passive_pane_srt_ParamLimits

0x52e7,	// (0x000052e7) tabs_3_passive_pane_srt

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37a8,	// (0x000037a8) bg_passive_tab_pane_cp2_srt

0x27cc,	// (0x000027cc) bg_passive_tab_pane_g1_cp2_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp2_srt

0x27d5,	// (0x000027d5) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x52ab,	// (0x000052ab) tabs_3_active_pane_srt_g1

0xd077,	// (0x0000d077) tabs_3_active_pane_srt_t1_ParamLimits

0xd077,	// (0x0000d077) tabs_3_active_pane_srt_t1

0x27cc,	// (0x000027cc) bg_active_tab_pane_g1_cp2_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp2_srt

0x27d5,	// (0x000027d5) bg_active_tab_pane_g3_cp2_srt

0x5263,	// (0x00005263) tabs_4_active_pane_srt_ParamLimits

0x5263,	// (0x00005263) tabs_4_active_pane_srt

0x5275,	// (0x00005275) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5275,	// (0x00005275) tabs_4_passive_pane_cp2_srt

0x2a74,	// (0x00002a74) aid_size_cell_toolbar

0x4e03,	// (0x00004e03) main_idle_act_pane_ParamLimits

0x2c8d,	// (0x00002c8d) popup_large_graphic_colour_window_ParamLimits

0xc513,	// (0x0000c513) popup_toolbar_window_ParamLimits

0xc513,	// (0x0000c513) popup_toolbar_window

0x5005,	// (0x00005005) list_single_graphic_2heading_pane_ParamLimits

0x5005,	// (0x00005005) list_single_graphic_2heading_pane

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane

0x1a0f,	// (0x00001a0f) aid_size_cell_apps_grid_prt_pane

0x2aee,	// (0x00002aee) bg_wml_button_pane_cp1_ParamLimits

0x2aee,	// (0x00002aee) bg_wml_button_pane_cp1

0xca65,	// (0x0000ca65) form_midp_field_text_pane_t1_ParamLimits

0x37a8,	// (0x000037a8) input_focus_pane_cp050_ParamLimits

0x3aa4,	// (0x00003aa4) list_midp_form_text_pane_ParamLimits

0x3a42,	// (0x00003a42) input_focus_pane_cp051_ParamLimits

0x3a56,	// (0x00003a56) list_midp_choice_pane_ParamLimits

0xc9fa,	// (0x0000c9fa) list_single_2graphic_pane_cp3_ParamLimits

0xc9fa,	// (0x0000c9fa) list_single_2graphic_pane_cp3

0xca10,	// (0x0000ca10) list_single_midp_graphic_pane_ParamLimits

0xca10,	// (0x0000ca10) list_single_midp_graphic_pane

0x34bc,	// (0x000034bc) list_single_graphic_2heading_pane_g1_ParamLimits

0x34bc,	// (0x000034bc) list_single_graphic_2heading_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5

0x0002,

0xa8df,	// (0x0000a8df) list_single_graphic_2heading_pane_g_ParamLimits

0xa8df,	// (0x0000a8df) list_single_graphic_2heading_pane_g

0x34c8,	// (0x000034c8) list_single_graphic_2heading_pane_t1_ParamLimits

0x34c8,	// (0x000034c8) list_single_graphic_2heading_pane_t1

0x34dc,	// (0x000034dc) list_single_graphic_2heading_pane_t2_ParamLimits

0x34dc,	// (0x000034dc) list_single_graphic_2heading_pane_t2

0x34f8,	// (0x000034f8) list_single_graphic_2heading_pane_t3_ParamLimits

0x34f8,	// (0x000034f8) list_single_graphic_2heading_pane_t3

0x0002,

0xa8e6,	// (0x0000a8e6) list_single_graphic_2heading_pane_t_ParamLimits

0xa8e6,	// (0x0000a8e6) list_single_graphic_2heading_pane_t

0x3510,	// (0x00003510) bg_popup_sub_pane_cp2

0x353a,	// (0x0000353a) grid_toobar_pane

0x3576,	// (0x00003576) cell_toolbar_pane_ParamLimits

0x3576,	// (0x00003576) cell_toolbar_pane

0x35bc,	// (0x000035bc) cell_toolbar_pane_g1_ParamLimits

0x35bc,	// (0x000035bc) cell_toolbar_pane_g1

0x35d0,	// (0x000035d0) cell_toolbar_pane_g2_ParamLimits

0x35d0,	// (0x000035d0) cell_toolbar_pane_g2

0x0001,

0xa8ed,	// (0x0000a8ed) cell_toolbar_pane_g_ParamLimits

0xa8ed,	// (0x0000a8ed) cell_toolbar_pane_g

0x35f2,	// (0x000035f2) grid_highlight_pane_cp2_ParamLimits

0x35f2,	// (0x000035f2) grid_highlight_pane_cp2

0x360c,	// (0x0000360c) toolbar_button_pane

0x3618,	// (0x00003618) toolbar_button_pane_g1

0x3620,	// (0x00003620) toolbar_button_pane_g2

0x3628,	// (0x00003628) toolbar_button_pane_g3

0x3630,	// (0x00003630) toolbar_button_pane_g4

0x3638,	// (0x00003638) toolbar_button_pane_g5

0x3640,	// (0x00003640) toolbar_button_pane_g6

0x3648,	// (0x00003648) toolbar_button_pane_g7

0x3650,	// (0x00003650) toolbar_button_pane_g8

0x3658,	// (0x00003658) toolbar_button_pane_g9

0x0009,

0xa8f2,	// (0x0000a8f2) toolbar_button_pane_g

0x3668,	// (0x00003668) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3668,	// (0x00003668) list_single_2graphic_pane_g1_cp3

0xc95c,	// (0x0000c95c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc95c,	// (0x0000c95c) list_single_2graphic_pane_g2_cp3

0x23a1,	// (0x000023a1) list_single_2graphic_pane_g3_cp3

0x3685,	// (0x00003685) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3685,	// (0x00003685) list_single_2graphic_pane_g4_cp3

0x3691,	// (0x00003691) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3691,	// (0x00003691) list_single_2graphic_pane_t1_cp3

0x2395,	// (0x00002395) list_single_midp_graphic_pane_g2_ParamLimits

0x2395,	// (0x00002395) list_single_midp_graphic_pane_g2

0x2a7c,	// (0x00002a7c) aid_zoom_text_primary

0x2a84,	// (0x00002a84) aid_zoom_text_secondary

0x2889,	// (0x00002889) status_small_pane_g7_ParamLimits

0x2889,	// (0x00002889) status_small_pane_g7

0x28ac,	// (0x000028ac) status_small_pane_t1_ParamLimits

0xb1c6,	// (0x0000b1c6) title_pane_g2

0x0003,

0xebd6,	// (0x0000ebd6) title_pane_g

0xb451,	// (0x0000b451) aid_size_cell_colour_1_pane_ParamLimits

0xb451,	// (0x0000b451) aid_size_cell_colour_1_pane

0xb465,	// (0x0000b465) aid_size_cell_colour_2_pane_ParamLimits

0xb465,	// (0x0000b465) aid_size_cell_colour_2_pane

0xb479,	// (0x0000b479) aid_size_cell_colour_3_pane_ParamLimits

0xb479,	// (0x0000b479) aid_size_cell_colour_3_pane

0xb48d,	// (0x0000b48d) aid_size_cell_colour_4_pane_ParamLimits

0xb48d,	// (0x0000b48d) aid_size_cell_colour_4_pane

0x1878,	// (0x00001878) title_pane_stacon_g1_ParamLimits

0x1878,	// (0x00001878) title_pane_stacon_g1

0x3e62,	// (0x00003e62) popup_note_wait_window_g3_ParamLimits

0x3e62,	// (0x00003e62) popup_note_wait_window_g3

0x3ed8,	// (0x00003ed8) popup_note_wait_window_t5_ParamLimits

0x3ed8,	// (0x00003ed8) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xbf3b,	// (0x0000bf3b) popup_feb_china_hwr_fs_window_ParamLimits

0xbf3b,	// (0x0000bf3b) popup_feb_china_hwr_fs_window

0xc96d,	// (0x0000c96d) aid_size_cell_hwr_fs_ParamLimits

0xc96d,	// (0x0000c96d) aid_size_cell_hwr_fs

0x37a8,	// (0x000037a8) bg_popup_sub_pane_cp3_ParamLimits

0x37a8,	// (0x000037a8) bg_popup_sub_pane_cp3

0xc982,	// (0x0000c982) grid_hwr_fs_pane_ParamLimits

0xc982,	// (0x0000c982) grid_hwr_fs_pane

0x37cc,	// (0x000037cc) linegrid_hwr_fs_pane_ParamLimits

0x37cc,	// (0x000037cc) linegrid_hwr_fs_pane

0xc99a,	// (0x0000c99a) cell_hwr_fs_pane_ParamLimits

0xc99a,	// (0x0000c99a) cell_hwr_fs_pane

0x37fe,	// (0x000037fe) linegrid_hwr_fs_pane_g1_ParamLimits

0x37fe,	// (0x000037fe) linegrid_hwr_fs_pane_g1

0xc9c0,	// (0x0000c9c0) linegrid_hwr_fs_pane_g2_ParamLimits

0xc9c0,	// (0x0000c9c0) linegrid_hwr_fs_pane_g2

0x381c,	// (0x0000381c) linegrid_hwr_fs_pane_g3_ParamLimits

0x381c,	// (0x0000381c) linegrid_hwr_fs_pane_g3

0x3828,	// (0x00003828) linegrid_hwr_fs_pane_g4_ParamLimits

0x3828,	// (0x00003828) linegrid_hwr_fs_pane_g4

0x3842,	// (0x00003842) linegrid_hwr_fs_pane_g5_ParamLimits

0x3842,	// (0x00003842) linegrid_hwr_fs_pane_g5

0x0004,

0xecf1,	// (0x0000ecf1) linegrid_hwr_fs_pane_g_ParamLimits

0xecf1,	// (0x0000ecf1) linegrid_hwr_fs_pane_g

0x3858,	// (0x00003858) cell_hwr_fs_pane_g1_ParamLimits

0x3858,	// (0x00003858) cell_hwr_fs_pane_g1

0x33f5,	// (0x000033f5) cell_hwr_fs_pane_g2_ParamLimits

0x33f5,	// (0x000033f5) cell_hwr_fs_pane_g2

0xc9d2,	// (0x0000c9d2) cell_hwr_fs_pane_g3_ParamLimits

0xc9d2,	// (0x0000c9d2) cell_hwr_fs_pane_g3

0xc9df,	// (0x0000c9df) cell_hwr_fs_pane_g4_ParamLimits

0xc9df,	// (0x0000c9df) cell_hwr_fs_pane_g4

0x0003,

0xecfc,	// (0x0000ecfc) cell_hwr_fs_pane_g_ParamLimits

0xecfc,	// (0x0000ecfc) cell_hwr_fs_pane_g

0xc9ec,	// (0x0000c9ec) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1629,	// (0x00001629) aid_inside_area_popup_secondary

0xcc41,	// (0x0000cc41) aid_inside_area_window_primary_ParamLimits

0xcc41,	// (0x0000cc41) aid_inside_area_window_primary

0x5482,	// (0x00005482) ai2_news_ticker_pane

0x548a,	// (0x0000548a) aid_size_cell_ai1_link_ParamLimits

0x548a,	// (0x0000548a) aid_size_cell_ai1_link

0x54a4,	// (0x000054a4) popup_ai2_data_window_ParamLimits

0x54a4,	// (0x000054a4) popup_ai2_data_window

0x54b8,	// (0x000054b8) popup_ai2_link_window_ParamLimits

0x54b8,	// (0x000054b8) popup_ai2_link_window

0x37a8,	// (0x000037a8) bg_popup_sub_pane_cp4_ParamLimits

0x37a8,	// (0x000037a8) bg_popup_sub_pane_cp4

0x54cc,	// (0x000054cc) grid_ai2_link_pane_ParamLimits

0x54cc,	// (0x000054cc) grid_ai2_link_pane

0x54e3,	// (0x000054e3) popup_ai2_link_window_g1_ParamLimits

0x54e3,	// (0x000054e3) popup_ai2_link_window_g1

0x54ef,	// (0x000054ef) popup_ai2_link_window_g2_ParamLimits

0x54ef,	// (0x000054ef) popup_ai2_link_window_g2

0x0001,

0xaaf4,	// (0x0000aaf4) popup_ai2_link_window_g_ParamLimits

0xaaf4,	// (0x0000aaf4) popup_ai2_link_window_g

0x54fe,	// (0x000054fe) ai2_mp_button_pane

0x5506,	// (0x00005506) ai2_mp_volume_pane

0x3a42,	// (0x00003a42) bg_popup_sub_pane_cp5_ParamLimits

0x3a42,	// (0x00003a42) bg_popup_sub_pane_cp5

0x550e,	// (0x0000550e) heading_ai2_gene_pane_ParamLimits

0x550e,	// (0x0000550e) heading_ai2_gene_pane

0x551a,	// (0x0000551a) list_ai2_gene_pane_ParamLimits

0x551a,	// (0x0000551a) list_ai2_gene_pane

0x5562,	// (0x00005562) cell_ai2_link_pane_ParamLimits

0x5562,	// (0x00005562) cell_ai2_link_pane

0x5578,	// (0x00005578) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5649,	// (0x00005649) ai2_mp_volume_pane_g1

0x5651,	// (0x00005651) ai2_mp_volume_pane_g2

0x55be,	// (0x000055be) list_ai2_gene_pane_t1

0x5659,	// (0x00005659) ai2_mp_volume_pane_g3

0x0002,

0xab0d,	// (0x0000ab0d) ai2_mp_volume_pane_g

0x5661,	// (0x00005661) volume_small_pane_cp3

0x566a,	// (0x0000566a) aid_size_cell_ai2_button

0x5672,	// (0x00005672) grid_ai2_button_pane

0x567b,	// (0x0000567b) cell_ai2_button_pane_ParamLimits

0x567b,	// (0x0000567b) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5609,	// (0x00005609) ai2_gene_pane_t1_ParamLimits

0x5609,	// (0x00005609) ai2_gene_pane_t1

0xbeb1,	// (0x0000beb1) aid_height_parent_landscape

0xce03,	// (0x0000ce03) aid_height_set_list

0x4e03,	// (0x00004e03) aid_size_parent

0x51ed,	// (0x000051ed) aid_size_cell_graphic_pane_ParamLimits

0x552a,	// (0x0000552a) popup_ai2_data_window_g1_ParamLimits

0x552a,	// (0x0000552a) popup_ai2_data_window_g1

0x5536,	// (0x00005536) ai2_news_ticker_pane_g1

0x553e,	// (0x0000553e) ai2_news_ticker_pane_g2

0x0001,

0xaaf9,	// (0x0000aaf9) ai2_news_ticker_pane_g

0x5546,	// (0x00005546) ai2_news_ticker_pane_t1

0x5554,	// (0x00005554) ai2_news_ticker_pane_t2

0x0001,

0xaafe,	// (0x0000aafe) ai2_news_ticker_pane_t

0x5581,	// (0x00005581) heading_ai2_gene_pane_g1

0x5589,	// (0x00005589) heading_ai2_gene_pane_t1_ParamLimits

0x5589,	// (0x00005589) heading_ai2_gene_pane_t1

0x559e,	// (0x0000559e) list_highlight_pane_cp6

0x55a6,	// (0x000055a6) ai2_gene_pane_ParamLimits

0x55a6,	// (0x000055a6) ai2_gene_pane

0x55cc,	// (0x000055cc) list_ai2_gene_pane_t2

0x0001,

0xab03,	// (0x0000ab03) list_ai2_gene_pane_t

0x55da,	// (0x000055da) list_highlight_pane_cp8_ParamLimits

0x55da,	// (0x000055da) list_highlight_pane_cp8

0x55eb,	// (0x000055eb) ai2_gene_pane_g1_ParamLimits

0x55eb,	// (0x000055eb) ai2_gene_pane_g1

0x55fd,	// (0x000055fd) ai2_gene_pane_g2_ParamLimits

0x55fd,	// (0x000055fd) ai2_gene_pane_g2

0x0001,

0xab08,	// (0x0000ab08) ai2_gene_pane_g_ParamLimits

0xab08,	// (0x0000ab08) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xbe6e,	// (0x0000be6e) control_pane_t3_ParamLimits

0xbe6e,	// (0x0000be6e) control_pane_t3

0x289d,	// (0x0000289d) status_small_pane_g8_ParamLimits

0x289d,	// (0x0000289d) status_small_pane_g8

0xbfce,	// (0x0000bfce) popup_find_window_ParamLimits

0xc249,	// (0x0000c249) popup_note_image_window_ParamLimits

0x34bc,	// (0x000034bc) list_double2_graphic_pane_vc_g1_ParamLimits

0x34bc,	// (0x000034bc) list_double2_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3

0x0002,

0xa8df,	// (0x0000a8df) list_double2_graphic_pane_vc_g_ParamLimits

0xa8df,	// (0x0000a8df) list_double2_graphic_pane_vc_g

0x35a6,	// (0x000035a6) list_double2_graphic_pane_vc_t1_ParamLimits

0x35a6,	// (0x000035a6) list_double2_graphic_pane_vc_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_single_heading_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_single_heading_pane_vc_g

0x36ab,	// (0x000036ab) list_single_heading_pane_vc_t1_ParamLimits

0x36ab,	// (0x000036ab) list_single_heading_pane_vc_t1

0x36c1,	// (0x000036c1) list_single_heading_pane_vc_t2_ParamLimits

0x36c1,	// (0x000036c1) list_single_heading_pane_vc_t2

0x0001,

0xa90c,	// (0x0000a90c) list_single_heading_pane_vc_t_ParamLimits

0xa90c,	// (0x0000a90c) list_single_heading_pane_vc_t

0x36eb,	// (0x000036eb) list_setting_number_pane_vc_g1_ParamLimits

0x36eb,	// (0x000036eb) list_setting_number_pane_vc_g1

0x36f7,	// (0x000036f7) list_setting_number_pane_vc_g2_ParamLimits

0x36f7,	// (0x000036f7) list_setting_number_pane_vc_g2

0x0001,

0xa911,	// (0x0000a911) list_setting_number_pane_vc_g_ParamLimits

0xa911,	// (0x0000a911) list_setting_number_pane_vc_g

0x3703,	// (0x00003703) list_setting_number_pane_vc_t1_ParamLimits

0x3703,	// (0x00003703) list_setting_number_pane_vc_t1

0x3717,	// (0x00003717) list_setting_number_pane_vc_t2_ParamLimits

0x3717,	// (0x00003717) list_setting_number_pane_vc_t2

0x3733,	// (0x00003733) list_setting_number_pane_vc_t3_ParamLimits

0x3733,	// (0x00003733) list_setting_number_pane_vc_t3

0x0002,

0xa916,	// (0x0000a916) list_setting_number_pane_vc_t_ParamLimits

0xa916,	// (0x0000a916) list_setting_number_pane_vc_t

0x375b,	// (0x0000375b) set_value_pane_vc_ParamLimits

0x375b,	// (0x0000375b) set_value_pane_vc

0x5005,	// (0x00005005) list_double2_graphic_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double2_graphic_pane_vc

0x5005,	// (0x00005005) list_double2_large_graphic_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double2_large_graphic_pane_vc

0x5005,	// (0x00005005) list_double2_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double2_pane_vc

0x5005,	// (0x00005005) list_double_graphic_heading_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_graphic_heading_pane_vc

0x5005,	// (0x00005005) list_double_graphic_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_graphic_pane_vc

0x5005,	// (0x00005005) list_double_heading_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_heading_pane_vc

0x5005,	// (0x00005005) list_double_large_graphic_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_large_graphic_pane_vc

0x5005,	// (0x00005005) list_double_number_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_number_pane_vc

0x5005,	// (0x00005005) list_double_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_pane_vc

0x5005,	// (0x00005005) list_double_time_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_double_time_pane_vc

0x5005,	// (0x00005005) list_setting_number_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_setting_number_pane_vc

0x5005,	// (0x00005005) list_setting_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_setting_pane_vc

0x5005,	// (0x00005005) list_single_graphic_heading_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_single_graphic_heading_pane_vc

0x5005,	// (0x00005005) list_single_heading_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_single_heading_pane_vc

0x5005,	// (0x00005005) list_single_number_heading_pane_vc_ParamLimits

0x5005,	// (0x00005005) list_single_number_heading_pane_vc

0x34bc,	// (0x000034bc) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x34bc,	// (0x000034bc) list_double_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa8df,	// (0x0000a8df) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa8df,	// (0x0000a8df) list_double_graphic_heading_pane_vc_g

0x56af,	// (0x000056af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56af,	// (0x000056af) list_double_graphic_heading_pane_vc_t1

0x36ab,	// (0x000036ab) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36ab,	// (0x000036ab) list_double_graphic_heading_pane_vc_t2

0x0001,

0xab14,	// (0x0000ab14) list_double_graphic_heading_pane_vc_t_ParamLimits

0xab14,	// (0x0000ab14) list_double_graphic_heading_pane_vc_t

0x36eb,	// (0x000036eb) list_setting_pane_vc_g1_ParamLimits

0x36eb,	// (0x000036eb) list_setting_pane_vc_g1

0x36f7,	// (0x000036f7) list_setting_pane_vc_g2_ParamLimits

0x36f7,	// (0x000036f7) list_setting_pane_vc_g2

0x0001,

0xa911,	// (0x0000a911) list_setting_pane_vc_g_ParamLimits

0xa911,	// (0x0000a911) list_setting_pane_vc_g

0x58f8,	// (0x000058f8) list_setting_pane_vc_t1_ParamLimits

0x58f8,	// (0x000058f8) list_setting_pane_vc_t1

0x590c,	// (0x0000590c) list_setting_pane_vc_t2_ParamLimits

0x590c,	// (0x0000590c) list_setting_pane_vc_t2

0x0001,

0xab57,	// (0x0000ab57) list_setting_pane_vc_t_ParamLimits

0xab57,	// (0x0000ab57) list_setting_pane_vc_t

0x375b,	// (0x0000375b) set_value_pane_cp_vc_ParamLimits

0x375b,	// (0x0000375b) set_value_pane_cp_vc

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_single_number_heading_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_single_number_heading_pane_vc_g

0x36ab,	// (0x000036ab) list_single_number_heading_pane_vc_t1_ParamLimits

0x36ab,	// (0x000036ab) list_single_number_heading_pane_vc_t1

0x592e,	// (0x0000592e) list_single_number_heading_pane_vc_t2_ParamLimits

0x592e,	// (0x0000592e) list_single_number_heading_pane_vc_t2

0x5942,	// (0x00005942) list_single_number_heading_pane_vc_t3_ParamLimits

0x5942,	// (0x00005942) list_single_number_heading_pane_vc_t3

0x0002,

0xab5c,	// (0x0000ab5c) list_single_number_heading_pane_vc_t_ParamLimits

0xab5c,	// (0x0000ab5c) list_single_number_heading_pane_vc_t

0x34bc,	// (0x000034bc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34bc,	// (0x000034bc) list_single_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa8df,	// (0x0000a8df) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa8df,	// (0x0000a8df) list_single_graphic_heading_pane_vc_g

0x36ab,	// (0x000036ab) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36ab,	// (0x000036ab) list_single_graphic_heading_pane_vc_t1

0x5954,	// (0x00005954) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5954,	// (0x00005954) list_single_graphic_heading_pane_vc_t2

0x0001,

0xab63,	// (0x0000ab63) list_single_graphic_heading_pane_vc_t_ParamLimits

0xab63,	// (0x0000ab63) list_single_graphic_heading_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_double2_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_double2_pane_vc_g

0x5968,	// (0x00005968) list_double2_pane_vc_t1_ParamLimits

0x5968,	// (0x00005968) list_double2_pane_vc_t1

0x597e,	// (0x0000597e) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x597e,	// (0x0000597e) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xab68,	// (0x0000ab68) list_double2_large_graphic_pane_vc_g_ParamLimits

0xab68,	// (0x0000ab68) list_double2_large_graphic_pane_vc_g

0x598a,	// (0x0000598a) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x598a,	// (0x0000598a) list_double2_large_graphic_pane_vc_t1

0x59a0,	// (0x000059a0) list_double_time_pane_vc_g1_ParamLimits

0x59a0,	// (0x000059a0) list_double_time_pane_vc_g1

0x59ac,	// (0x000059ac) list_double_time_pane_vc_g2_ParamLimits

0x59ac,	// (0x000059ac) list_double_time_pane_vc_g2

0x0001,

0xab6f,	// (0x0000ab6f) list_double_time_pane_vc_g_ParamLimits

0xab6f,	// (0x0000ab6f) list_double_time_pane_vc_g

0x59b8,	// (0x000059b8) list_double_time_pane_vc_t1_ParamLimits

0x59b8,	// (0x000059b8) list_double_time_pane_vc_t1

0x59d1,	// (0x000059d1) list_double_time_pane_vc_t2_ParamLimits

0x59d1,	// (0x000059d1) list_double_time_pane_vc_t2

0x59f1,	// (0x000059f1) list_double_time_pane_vc_t3_ParamLimits

0x59f1,	// (0x000059f1) list_double_time_pane_vc_t3

0x5a09,	// (0x00005a09) list_double_time_pane_vc_t4_ParamLimits

0x5a09,	// (0x00005a09) list_double_time_pane_vc_t4

0x0003,

0xab74,	// (0x0000ab74) list_double_time_pane_vc_t_ParamLimits

0xab74,	// (0x0000ab74) list_double_time_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_double_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_double_pane_vc_g

0x5a1d,	// (0x00005a1d) list_double_pane_vc_t1_ParamLimits

0x5a1d,	// (0x00005a1d) list_double_pane_vc_t1

0x5a2f,	// (0x00005a2f) list_double_pane_vc_t2_ParamLimits

0x5a2f,	// (0x00005a2f) list_double_pane_vc_t2

0x0001,

0xab7d,	// (0x0000ab7d) list_double_pane_vc_t_ParamLimits

0xab7d,	// (0x0000ab7d) list_double_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_double_number_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_double_number_pane_vc_g

0x5a47,	// (0x00005a47) list_double_number_pane_vc_t1_ParamLimits

0x5a47,	// (0x00005a47) list_double_number_pane_vc_t1

0x5a5b,	// (0x00005a5b) list_double_number_pane_vc_t2_ParamLimits

0x5a5b,	// (0x00005a5b) list_double_number_pane_vc_t2

0x5a2f,	// (0x00005a2f) list_double_number_pane_vc_t3_ParamLimits

0x5a2f,	// (0x00005a2f) list_double_number_pane_vc_t3

0x0002,

0xab82,	// (0x0000ab82) list_double_number_pane_vc_t_ParamLimits

0xab82,	// (0x0000ab82) list_double_number_pane_vc_t

0x5a6d,	// (0x00005a6d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a6d,	// (0x00005a6d) list_double_large_graphic_pane_vc_g1

0x5a79,	// (0x00005a79) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a79,	// (0x00005a79) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5a88,	// (0x00005a88) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a88,	// (0x00005a88) list_double_large_graphic_pane_vc_g4

0x0003,

0xab89,	// (0x0000ab89) list_double_large_graphic_pane_vc_g_ParamLimits

0xab89,	// (0x0000ab89) list_double_large_graphic_pane_vc_g

0x5a94,	// (0x00005a94) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a94,	// (0x00005a94) list_double_large_graphic_pane_vc_t1

0x5aa6,	// (0x00005aa6) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5aa6,	// (0x00005aa6) list_double_large_graphic_pane_vc_t2

0x0001,

0xab92,	// (0x0000ab92) list_double_large_graphic_pane_vc_t_ParamLimits

0xab92,	// (0x0000ab92) list_double_large_graphic_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2

0x0001,

0xa907,	// (0x0000a907) list_double_heading_pane_vc_g_ParamLimits

0xa907,	// (0x0000a907) list_double_heading_pane_vc_g

0x5abf,	// (0x00005abf) list_double_heading_pane_vc_t1_ParamLimits

0x5abf,	// (0x00005abf) list_double_heading_pane_vc_t1

0x36ab,	// (0x000036ab) list_double_heading_pane_vc_t2_ParamLimits

0x36ab,	// (0x000036ab) list_double_heading_pane_vc_t2

0x0001,

0xab97,	// (0x0000ab97) list_double_heading_pane_vc_t_ParamLimits

0xab97,	// (0x0000ab97) list_double_heading_pane_vc_t

0x34bc,	// (0x000034bc) list_double_graphic_pane_vc_g1_ParamLimits

0x34bc,	// (0x000034bc) list_double_graphic_pane_vc_g1

0x5ad3,	// (0x00005ad3) list_double_graphic_pane_vc_g2_ParamLimits

0x5ad3,	// (0x00005ad3) list_double_graphic_pane_vc_g2

0x5ae2,	// (0x00005ae2) list_double_graphic_pane_vc_g3_ParamLimits

0x5ae2,	// (0x00005ae2) list_double_graphic_pane_vc_g3

0x0002,

0xab9c,	// (0x0000ab9c) list_double_graphic_pane_vc_g_ParamLimits

0xab9c,	// (0x0000ab9c) list_double_graphic_pane_vc_g

0x5aee,	// (0x00005aee) list_double_graphic_pane_vc_t1_ParamLimits

0x5aee,	// (0x00005aee) list_double_graphic_pane_vc_t1

0x5a2f,	// (0x00005a2f) list_double_graphic_pane_vc_t2_ParamLimits

0x5a2f,	// (0x00005a2f) list_double_graphic_pane_vc_t2

0x0001,

0xaba3,	// (0x0000aba3) list_double_graphic_pane_vc_t_ParamLimits

0xaba3,	// (0x0000aba3) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb014,	// (0x0000b014) aid_size_cell_touch_ParamLimits

0xb014,	// (0x0000b014) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb15f,	// (0x0000b15f) touch_pane_ParamLimits

0xb15f,	// (0x0000b15f) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xb886,	// (0x0000b886) form_field_data_wide_pane_cp2

0x1ade,	// (0x00001ade) bg_scroll_pane_ParamLimits

0x1afd,	// (0x00001afd) scroll_handle_pane_ParamLimits

0x1b11,	// (0x00001b11) scroll_sc2_down_pane_ParamLimits

0x1b11,	// (0x00001b11) scroll_sc2_down_pane

0x1b38,	// (0x00001b38) scroll_sc2_up_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_up_pane

0xd1c4,	// (0x0000d1c4) grid_wheel_folder_pane_g1_ParamLimits

0xd1c4,	// (0x0000d1c4) grid_wheel_folder_pane_g1

0x21c3,	// (0x000021c3) clock_nsta_pane_cp2_ParamLimits

0x21c3,	// (0x000021c3) clock_nsta_pane_cp2

0xbc8c,	// (0x0000bc8c) listscroll_midp_pane_ParamLimits

0xbc9d,	// (0x0000bc9d) midp_canvas_pane

0x2a62,	// (0x00002a62) nsta_clock_indic_pane

0x2ac0,	// (0x00002ac0) listscroll_form_pane_vc

0x2adc,	// (0x00002adc) listscroll_set_pane_vc_ParamLimits

0x2adc,	// (0x00002adc) listscroll_set_pane_vc

0xc670,	// (0x0000c670) clock_nsta_pane

0xc69a,	// (0x0000c69a) indicator_nsta_pane

0x3510,	// (0x00003510) bg_popup_sub_pane_cp2_ParamLimits

0x3524,	// (0x00003524) find_pane_cp2_ParamLimits

0x3524,	// (0x00003524) find_pane_cp2

0x353a,	// (0x0000353a) grid_toobar_pane_ParamLimits

0x3767,	// (0x00003767) list_form_gen_pane_vc_ParamLimits

0x3767,	// (0x00003767) list_form_gen_pane_vc

0x377d,	// (0x0000377d) scroll_pane_cp8_vc_ParamLimits

0x377d,	// (0x0000377d) scroll_pane_cp8_vc

0x3896,	// (0x00003896) data_form_wide_pane_vc_ParamLimits

0x3896,	// (0x00003896) data_form_wide_pane_vc

0x38a2,	// (0x000038a2) form_field_data_wide_pane_vc_g1

0x38aa,	// (0x000038aa) form_field_data_wide_pane_vc_t1_ParamLimits

0x38aa,	// (0x000038aa) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xcaa5,	// (0x0000caa5) list_midp_pane_ParamLimits

0x5257,	// (0x00005257) scroll_pane_cp16_ParamLimits

0x5257,	// (0x00005257) scroll_pane_cp16

0x3c5f,	// (0x00003c5f) button_value_adjust_pane_ParamLimits

0x3c5f,	// (0x00003c5f) button_value_adjust_pane

0xce14,	// (0x0000ce14) button_value_adjust_pane_cp6_ParamLimits

0xce14,	// (0x0000ce14) button_value_adjust_pane_cp6

0xcf2a,	// (0x0000cf2a) settings_code_pane_cp_ParamLimits

0xcf2a,	// (0x0000cf2a) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa836,	// (0x0000a836) cell_touch_pane_g

0xd0a3,	// (0x0000d0a3) cell_touch_pane_cp_ParamLimits

0xd0a3,	// (0x0000d0a3) cell_touch_pane_cp

0xd0bf,	// (0x0000d0bf) cell_touch_pane_ParamLimits

0xd0bf,	// (0x0000d0bf) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56c3,	// (0x000056c3) list_set_graphic_pane_vc_g1_ParamLimits

0x56c3,	// (0x000056c3) list_set_graphic_pane_vc_g1

0x56cf,	// (0x000056cf) list_set_graphic_pane_vc_g2_ParamLimits

0x56cf,	// (0x000056cf) list_set_graphic_pane_vc_g2

0x0001,

0xab19,	// (0x0000ab19) list_set_graphic_pane_vc_g_ParamLimits

0xab19,	// (0x0000ab19) list_set_graphic_pane_vc_g

0x56db,	// (0x000056db) text_primary_small_cp13_vc_ParamLimits

0x56db,	// (0x000056db) text_primary_small_cp13_vc

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc_ParamLimits

0x56f3,	// (0x000056f3) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5707,	// (0x00005707) setting_code_pane_vc_t1

0x5715,	// (0x00005715) set_text_pane_vc_t1_ParamLimits

0x5715,	// (0x00005715) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5734,	// (0x00005734) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x573e,	// (0x0000573e) setting_slider_graphic_pane_vc_g1

0x5746,	// (0x00005746) setting_slider_graphic_pane_vc_t1

0x5754,	// (0x00005754) setting_slider_graphic_pane_vc_t2

0x0001,

0xab1e,	// (0x0000ab1e) setting_slider_graphic_pane_vc_t

0x5762,	// (0x00005762) slider_set_pane_cp_vc

0x576a,	// (0x0000576a) slider_set_pane_vc_g1

0x5773,	// (0x00005773) slider_set_pane_vc_g2

0x0006,

0xab23,	// (0x0000ab23) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x579f,	// (0x0000579f) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x57a7,	// (0x000057a7) set_opt_bg_pane_g7_copy1

0x57b1,	// (0x000057b1) set_opt_bg_pane_g8_copy1

0x57b9,	// (0x000057b9) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57c1,	// (0x000057c1) setting_slider_pane_vc_t1

0x5746,	// (0x00005746) setting_slider_pane_vc_t2

0x5754,	// (0x00005754) setting_slider_pane_vc_t3

0x0002,

0xab32,	// (0x0000ab32) setting_slider_pane_vc_t

0x5762,	// (0x00005762) slider_set_pane_vc

0x4472,	// (0x00004472) volume_set_pane_vc_g1

0x57d0,	// (0x000057d0) volume_set_pane_vc_g2

0x57d9,	// (0x000057d9) volume_set_pane_vc_g3

0x57e2,	// (0x000057e2) volume_set_pane_vc_g4

0x57eb,	// (0x000057eb) volume_set_pane_vc_g5

0x57f4,	// (0x000057f4) volume_set_pane_vc_g6

0x57fd,	// (0x000057fd) volume_set_pane_vc_g7

0x5806,	// (0x00005806) volume_set_pane_vc_g8

0x580f,	// (0x0000580f) volume_set_pane_vc_g9

0x5818,	// (0x00005818) volume_set_pane_vc_g10

0x0009,

0xab39,	// (0x0000ab39) volume_set_pane_vc_g

0x5821,	// (0x00005821) volume_set_pane_vc

0x5829,	// (0x00005829) button_value_adjust_pane_cp1_vc

0x5833,	// (0x00005833) list_highlight_pane_cp2_vc

0x583c,	// (0x0000583c) list_set_pane_vc_ParamLimits

0x583c,	// (0x0000583c) list_set_pane_vc

0x588e,	// (0x0000588e) main_pane_set_vc_t1_ParamLimits

0x588e,	// (0x0000588e) main_pane_set_vc_t1

0x58a3,	// (0x000058a3) main_pane_set_vc_t2_ParamLimits

0x58a3,	// (0x000058a3) main_pane_set_vc_t2

0x58b5,	// (0x000058b5) main_pane_set_vc_t3_ParamLimits

0x58b5,	// (0x000058b5) main_pane_set_vc_t3

0x58c7,	// (0x000058c7) main_pane_set_vc_t4_ParamLimits

0x58c7,	// (0x000058c7) main_pane_set_vc_t4

0x0003,

0xab4e,	// (0x0000ab4e) main_pane_set_vc_t_ParamLimits

0xab4e,	// (0x0000ab4e) main_pane_set_vc_t

0x58d9,	// (0x000058d9) setting_code_pane_vc_ParamLimits

0x58d9,	// (0x000058d9) setting_code_pane_vc

0x58e8,	// (0x000058e8) setting_slider_graphic_pane_vc

0x58e8,	// (0x000058e8) setting_slider_pane_vc

0x58e8,	// (0x000058e8) setting_text_pane_vc

0x58e8,	// (0x000058e8) setting_volume_pane_vc

0x58f0,	// (0x000058f0) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5b00,	// (0x00005b00) button_value_adjust_pane_g1

0x5b09,	// (0x00005b09) button_value_adjust_pane_g2

0x0001,

0xaba8,	// (0x0000aba8) button_value_adjust_pane_g

0x5b12,	// (0x00005b12) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b12,	// (0x00005b12) form_field_slider_wide_pane_vc_t1

0x5b26,	// (0x00005b26) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b26,	// (0x00005b26) form_field_slider_wide_pane_vc_t2

0x0001,

0xabad,	// (0x0000abad) form_field_slider_wide_pane_vc_t_ParamLimits

0xabad,	// (0x0000abad) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5b38,	// (0x00005b38) slider_cont_pane_cp1_vc_ParamLimits

0x5b38,	// (0x00005b38) slider_cont_pane_cp1_vc

0x576a,	// (0x0000576a) slider_form_pane_g1_cp2

0x5773,	// (0x00005773) slider_form_pane_g2_cp2

0x5b51,	// (0x00005b51) form_field_slider_pane_vc_t3

0x5b5f,	// (0x00005b5f) form_field_slider_pane_vc_t4

0x5b6d,	// (0x00005b6d) slider_form_pane_vc_ParamLimits

0x5b6d,	// (0x00005b6d) slider_form_pane_vc

0x5b7a,	// (0x00005b7a) form_field_slider_pane_vc_t1_ParamLimits

0x5b7a,	// (0x00005b7a) form_field_slider_pane_vc_t1

0x5b26,	// (0x00005b26) form_field_slider_pane_vc_t2_ParamLimits

0x5b26,	// (0x00005b26) form_field_slider_pane_vc_t2

0x0001,

0xabbd,	// (0x0000abbd) form_field_slider_pane_vc_t_ParamLimits

0xabbd,	// (0x0000abbd) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5b96,	// (0x00005b96) slider_cont_pane_vc_ParamLimits

0x5b96,	// (0x00005b96) slider_cont_pane_vc

0x5ba8,	// (0x00005ba8) list_form_graphic_pane_cp_vc_ParamLimits

0x5ba8,	// (0x00005ba8) list_form_graphic_pane_cp_vc

0x38a2,	// (0x000038a2) form_field_popup_wide_pane_vc_g1

0x5bbd,	// (0x00005bbd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bbd,	// (0x00005bbd) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5bd4,	// (0x00005bd4) list_form_wide_pane_vc_ParamLimits

0x5bd4,	// (0x00005bd4) list_form_wide_pane_vc

0x5be0,	// (0x00005be0) list_form_graphic_pane_vc_g1

0x5be8,	// (0x00005be8) list_form_graphic_pane_vc_t1_ParamLimits

0x5be8,	// (0x00005be8) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5c04,	// (0x00005c04) list_form_graphic_pane_vc_ParamLimits

0x5c04,	// (0x00005c04) list_form_graphic_pane_vc

0x38a2,	// (0x000038a2) form_field_popup_pane_vc_g1

0x5c1a,	// (0x00005c1a) form_field_popup_pane_vc_t1_ParamLimits

0x5c1a,	// (0x00005c1a) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5c31,	// (0x00005c31) list_form_pane_vc_ParamLimits

0x5c31,	// (0x00005c31) list_form_pane_vc

0x5c3d,	// (0x00005c3d) data_form_pane_vc_t1_ParamLimits

0x5c3d,	// (0x00005c3d) data_form_pane_vc_t1

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

0xa7bf,	// (0x0000a7bf) input_focus_pane_vc_g

0x3896,	// (0x00003896) data_form_pane_vc_ParamLimits

0x3896,	// (0x00003896) data_form_pane_vc

0x38a2,	// (0x000038a2) form_field_data_pane_vc_g1

0x5c58,	// (0x00005c58) form_field_data_pane_vc_t1_ParamLimits

0x5c58,	// (0x00005c58) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5c72,	// (0x00005c72) button_value_adjust_pane_cp3_vc

0x5c7a,	// (0x00005c7a) button_value_adjust_pane_cp5_vc

0x5c82,	// (0x00005c82) form_field_data_pane_vc_ParamLimits

0x5c82,	// (0x00005c82) form_field_data_pane_vc

0x5c99,	// (0x00005c99) form_field_data_pane_vc_cp2

0x5ca1,	// (0x00005ca1) form_field_data_wide_pane_vc_ParamLimits

0x5ca1,	// (0x00005ca1) form_field_data_wide_pane_vc

0x5cb7,	// (0x00005cb7) form_field_data_wide_pane_vc_cp2

0x5cbf,	// (0x00005cbf) form_field_popup_pane_vc_ParamLimits

0x5cbf,	// (0x00005cbf) form_field_popup_pane_vc

0x5cd6,	// (0x00005cd6) form_field_popup_wide_pane_vc_ParamLimits

0x5cd6,	// (0x00005cd6) form_field_popup_wide_pane_vc

0x5cec,	// (0x00005cec) form_field_slider_pane_vc_ParamLimits

0x5cec,	// (0x00005cec) form_field_slider_pane_vc

0x5cff,	// (0x00005cff) form_field_slider_wide_pane_vc_ParamLimits

0x5cff,	// (0x00005cff) form_field_slider_wide_pane_vc

0xd0dd,	// (0x0000d0dd) grid_touch_1_pane_ParamLimits

0xd0dd,	// (0x0000d0dd) grid_touch_1_pane

0xd0f1,	// (0x0000d0f1) grid_touch_2_pane_ParamLimits

0xd0f1,	// (0x0000d0f1) grid_touch_2_pane

0x5dd4,	// (0x00005dd4) touch_pane_g1_ParamLimits

0x5dd4,	// (0x00005dd4) touch_pane_g1

0x5d36,	// (0x00005d36) cell_app_pane_cp_wide_ParamLimits

0x5d36,	// (0x00005d36) cell_app_pane_cp_wide

0x5d47,	// (0x00005d47) grid_popup_fast_wide_pane_ParamLimits

0x5d47,	// (0x00005d47) grid_popup_fast_wide_pane

0x5d5b,	// (0x00005d5b) scroll_pane_cp19_ParamLimits

0x5d5b,	// (0x00005d5b) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5d6f,	// (0x00005d6f) listscroll_popup_fast_wide_pane

0x1694,	// (0x00001694) grid_indicator_nsta_pane

0x5d77,	// (0x00005d77) clock_nsta_pane_g1

0x5d80,	// (0x00005d80) clock_nsta_pane_t1

0xd11b,	// (0x0000d11b) cell_indicator_nsta_pane_ParamLimits

0xd11b,	// (0x0000d11b) cell_indicator_nsta_pane

0x5dd4,	// (0x00005dd4) cell_indicator_nsta_pane_g1

0xd138,	// (0x0000d138) cell_indicator_nsta_pane_g2

0x0001,

0xed77,	// (0x0000ed77) cell_indicator_nsta_pane_g

0x5df8,	// (0x00005df8) clock_nsta_pane_cp

0x5e00,	// (0x00005e00) indicator_nsta_pane_cp

0x5e08,	// (0x00005e08) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2a,	// (0x00001c2a) scroll_pane_cp29

0x20f0,	// (0x000020f0) indicator_nsta_pane_cp2_ParamLimits

0x20f0,	// (0x000020f0) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3afa,	// (0x00003afa) form_midp_field_text_pane_ParamLimits

0x3c3f,	// (0x00003c3f) scroll_bar_cp050_ParamLimits

0x5e40,	// (0x00005e40) cell_indicator_pane_ParamLimits

0x5e40,	// (0x00005e40) cell_indicator_pane

0x5e5d,	// (0x00005e5d) cell_indicator_pane_g1

0xd14e,	// (0x0000d14e) grid_wheel_folder_pane_ParamLimits

0xd14e,	// (0x0000d14e) grid_wheel_folder_pane

0xd15c,	// (0x0000d15c) list_wheel_apps_pane_ParamLimits

0xd15c,	// (0x0000d15c) list_wheel_apps_pane

0xd16a,	// (0x0000d16a) main_apps_wheel_pane_g1_ParamLimits

0xd16a,	// (0x0000d16a) main_apps_wheel_pane_g1

0xd176,	// (0x0000d176) main_apps_wheel_pane_g2_ParamLimits

0xd176,	// (0x0000d176) main_apps_wheel_pane_g2

0x0001,

0xed7c,	// (0x0000ed7c) main_apps_wheel_pane_g_ParamLimits

0xed7c,	// (0x0000ed7c) main_apps_wheel_pane_g

0xd184,	// (0x0000d184) main_apps_wheel_pane_t1_ParamLimits

0xd184,	// (0x0000d184) main_apps_wheel_pane_t1

0xd198,	// (0x0000d198) list_wheel_apps_pane_g1

0xd1a0,	// (0x0000d1a0) list_wheel_apps_pane_g2

0xd1a8,	// (0x0000d1a8) list_wheel_apps_pane_g3

0xd1b0,	// (0x0000d1b0) list_wheel_apps_pane_g4

0xd1ba,	// (0x0000d1ba) list_wheel_apps_pane_g5

0x0004,

0xed81,	// (0x0000ed81) list_wheel_apps_pane_g

0x23f3,	// (0x000023f3) navi_icon_text_pane

0xc56b,	// (0x0000c56b) aid_fill_nsta

0xd1d1,	// (0x0000d1d1) navi_icon_text_pane_g1

0xd1dd,	// (0x0000d1dd) navi_icon_text_pane_t1

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_ParamLimits

0x228f,	// (0x0000228f) list_set_graphic_pane_t1

0x4350,	// (0x00004350) popup_midp_note_alarm_window_t6_ParamLimits

0x4350,	// (0x00004350) popup_midp_note_alarm_window_t6

0x4362,	// (0x00004362) popup_midp_note_alarm_window_t7_ParamLimits

0x4362,	// (0x00004362) popup_midp_note_alarm_window_t7

0x4374,	// (0x00004374) popup_midp_note_alarm_window_t8_ParamLimits

0x4374,	// (0x00004374) popup_midp_note_alarm_window_t8

0x4386,	// (0x00004386) popup_midp_note_alarm_window_t9_ParamLimits

0x4386,	// (0x00004386) popup_midp_note_alarm_window_t9

0x4398,	// (0x00004398) popup_midp_note_alarm_window_t10_ParamLimits

0x4398,	// (0x00004398) popup_midp_note_alarm_window_t10

0x43aa,	// (0x000043aa) popup_midp_note_alarm_window_t11_ParamLimits

0x43aa,	// (0x000043aa) popup_midp_note_alarm_window_t11

0x43bc,	// (0x000043bc) scroll_pane_cp17_ParamLimits

0x43bc,	// (0x000043bc) scroll_pane_cp17

0x4472,	// (0x00004472) volume_small_pane_cp_g1

0x5f46,	// (0x00005f46) volume_small_pane_cp_g2

0x5f4f,	// (0x00005f4f) volume_small_pane_cp_g3

0x5f58,	// (0x00005f58) volume_small_pane_cp_g4

0x5f61,	// (0x00005f61) volume_small_pane_cp_g5

0x5f6a,	// (0x00005f6a) volume_small_pane_cp_g6

0x5f73,	// (0x00005f73) volume_small_pane_cp_g7

0x5f7c,	// (0x00005f7c) volume_small_pane_cp_g8

0x5f85,	// (0x00005f85) volume_small_pane_cp_g9

0x5f8e,	// (0x00005f8e) volume_small_pane_cp_g10

0x2654,	// (0x00002654) midp_ticker_pane_g1_ParamLimits

0x2660,	// (0x00002660) midp_ticker_pane_g2_ParamLimits

0xa887,	// (0x0000a887) midp_ticker_pane_g_ParamLimits

0xbd38,	// (0x0000bd38) midp_ticker_pane_t1_ParamLimits

0xc58b,	// (0x0000c58b) aid_fill_nsta_2

0x3c2b,	// (0x00003c2b) list_form2_midp_pane

0x4fb5,	// (0x00004fb5) midp_editing_number_pane_ParamLimits

0x4fc4,	// (0x00004fc4) midp_ticker_pane_ParamLimits

0x5f97,	// (0x00005f97) form2_midp_field_pane

0x5fbb,	// (0x00005fbb) scroll_pane_cp51

0x5fdb,	// (0x00005fdb) form2_midp_button_pane_ParamLimits

0x5fdb,	// (0x00005fdb) form2_midp_button_pane

0x5fed,	// (0x00005fed) form2_midp_content_pane_ParamLimits

0x5fed,	// (0x00005fed) form2_midp_content_pane

0x6007,	// (0x00006007) form2_midp_field_choice_group_pane

0x600f,	// (0x0000600f) form2_midp_field_pane_g1

0x6017,	// (0x00006017) form2_midp_field_pane_g2

0x601f,	// (0x0000601f) form2_midp_field_pane_g3

0x6027,	// (0x00006027) form2_midp_field_pane_g4

0x0003,

0xac00,	// (0x0000ac00) form2_midp_field_pane_g

0x602f,	// (0x0000602f) form2_midp_gauge_slider_pane

0x6037,	// (0x00006037) form2_midp_gauge_wait_pane

0x603f,	// (0x0000603f) form2_midp_image_pane_ParamLimits

0x603f,	// (0x0000603f) form2_midp_image_pane

0x605a,	// (0x0000605a) form2_midp_label_pane_ParamLimits

0x605a,	// (0x0000605a) form2_midp_label_pane

0xd20b,	// (0x0000d20b) form2_midp_label_pane_cp_ParamLimits

0xd20b,	// (0x0000d20b) form2_midp_label_pane_cp

0x6094,	// (0x00006094) form2_midp_string_pane_ParamLimits

0x6094,	// (0x00006094) form2_midp_string_pane

0x60a6,	// (0x000060a6) form2_midp_text_pane_ParamLimits

0x60a6,	// (0x000060a6) form2_midp_text_pane

0x60bf,	// (0x000060bf) form2_midp_time_pane

0x60cf,	// (0x000060cf) input_focus_pane_cp51_ParamLimits

0x60cf,	// (0x000060cf) input_focus_pane_cp51

0x60e7,	// (0x000060e7) form2_midp_label_pane_t1_ParamLimits

0x60e7,	// (0x000060e7) form2_midp_label_pane_t1

0x6127,	// (0x00006127) form2_mdip_text_pane_t1_ParamLimits

0x6127,	// (0x00006127) form2_mdip_text_pane_t1

0x6143,	// (0x00006143) form2_midp_time_pane_t1

0x615e,	// (0x0000615e) form2_midp_gauge_slider_pane_t1

0xd22c,	// (0x0000d22c) form2_midp_gauge_slider_pane_t2

0xd23e,	// (0x0000d23e) form2_midp_gauge_slider_pane_t3

0x0002,

0xed91,	// (0x0000ed91) form2_midp_gauge_slider_pane_t

0x6194,	// (0x00006194) form2_midp_slider_pane

0x61a0,	// (0x000061a0) form2_midp_gauge_wait_pane_t1

0x61ae,	// (0x000061ae) form2_midp_wait_pane_ParamLimits

0x61ae,	// (0x000061ae) form2_midp_wait_pane

0xd250,	// (0x0000d250) list_single_2graphic_pane_cp4_ParamLimits

0xd250,	// (0x0000d250) list_single_2graphic_pane_cp4

0xca10,	// (0x0000ca10) list_single_midp_graphic_pane_cp_ParamLimits

0xca10,	// (0x0000ca10) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6208,	// (0x00006208) list_single_2graphic_pane_g1_cp4

0x5581,	// (0x00005581) list_single_2graphic_pane_g2_cp4

0x6210,	// (0x00006210) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x621f,	// (0x0000621f) list_single_midp_graphic_pane_g4_cp

0x622e,	// (0x0000622e) list_single_midp_graphic_pane_t1_cp

0xd267,	// (0x0000d267) form2_mdip_string_pane_t1_ParamLimits

0xd267,	// (0x0000d267) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0xbc8c,	// (0x0000bc8c) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc2c7,	// (0x0000c2c7) popup_preview_window_ParamLimits

0xc2c7,	// (0x0000c2c7) popup_preview_window

0x3044,	// (0x00003044) popup_touch_info_window_ParamLimits

0x3044,	// (0x00003044) popup_touch_info_window

0x3062,	// (0x00003062) popup_touch_menu_window_ParamLimits

0x3062,	// (0x00003062) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x637d,	// (0x0000637d) list_touch_menu_pane

0x6385,	// (0x00006385) list_single_touch_menu_pane_ParamLimits

0x6385,	// (0x00006385) list_single_touch_menu_pane

0x639a,	// (0x0000639a) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x63a8,	// (0x000063a8) heading_sub_pane

0x63b0,	// (0x000063b0) list_touch_info_pane_ParamLimits

0x63b0,	// (0x000063b0) list_touch_info_pane

0x63bf,	// (0x000063bf) list_single_touch_info_pane_ParamLimits

0x63bf,	// (0x000063bf) list_single_touch_info_pane

0x63d1,	// (0x000063d1) list_single_touch_info_pane_t1

0x63df,	// (0x000063df) list_single_touch_info_pane_t2

0x0001,

0xac17,	// (0x0000ac17) list_single_touch_info_pane_t

0x2575,	// (0x00002575) bg_popup_heading_pane_cp

0x63ed,	// (0x000063ed) heading_sub_pane_t1

0x37a8,	// (0x000037a8) bg_popup_preview_window_pane_cp_ParamLimits

0x37a8,	// (0x000037a8) bg_popup_preview_window_pane_cp

0x63a8,	// (0x000063a8) heading_preview_pane

0x63b0,	// (0x000063b0) list_preview_pane_ParamLimits

0x63b0,	// (0x000063b0) list_preview_pane

0x63fb,	// (0x000063fb) popup_preview_window_g1

0x63bf,	// (0x000063bf) list_single_preview_pane_ParamLimits

0x63bf,	// (0x000063bf) list_single_preview_pane

0x6403,	// (0x00006403) list_single_preview_pane_g1

0x640b,	// (0x0000640b) list_single_preview_pane_t1

0x63d1,	// (0x000063d1) list_single_preview_pane_t2

0x0001,

0xac1c,	// (0x0000ac1c) list_single_preview_pane_t

0x6419,	// (0x00006419) bg_popup_heading_pane_cp2_ParamLimits

0x6419,	// (0x00006419) bg_popup_heading_pane_cp2

0x642f,	// (0x0000642f) heading_preview_pane_g1

0x6437,	// (0x00006437) heading_preview_pane_t1_ParamLimits

0x6437,	// (0x00006437) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b26,	// (0x00001b26) scroll_sc2_left_pane

0x1b2f,	// (0x00001b2f) scroll_sc2_right_pane

0x1b4e,	// (0x00001b4e) scroll_bg_pane_g1_ParamLimits

0x1b63,	// (0x00001b63) scroll_bg_pane_g2_ParamLimits

0x1b7b,	// (0x00001b7b) scroll_bg_pane_g3_ParamLimits

0xa816,	// (0x0000a816) scroll_bg_pane_g_ParamLimits

0x1b4e,	// (0x00001b4e) scroll_handle_pane_g1_ParamLimits

0x1b9d,	// (0x00001b9d) scroll_handle_pane_g2_ParamLimits

0x1b7b,	// (0x00001b7b) scroll_handle_pane_g3_ParamLimits

0xa81d,	// (0x0000a81d) scroll_handle_pane_g_ParamLimits

0x2b1e,	// (0x00002b1e) popup_choice_list_window_ParamLimits

0x2b1e,	// (0x00002b1e) popup_choice_list_window

0x351c,	// (0x0000351c) choice_list_pane

0x35e4,	// (0x000035e4) cell_toolbar_pane_t1

0x360c,	// (0x0000360c) toolbar_button_pane_ParamLimits

0x49ea,	// (0x000049ea) ai_gene_pane_1_t2_ParamLimits

0x49ea,	// (0x000049ea) ai_gene_pane_1_t2

0x0001,

0xaa33,	// (0x0000aa33) ai_gene_pane_1_t_ParamLimits

0xaa33,	// (0x0000aa33) ai_gene_pane_1_t

0x6454,	// (0x00006454) scroll_sc2_left_pane_g1

0x6454,	// (0x00006454) scroll_sc2_right_pane_g1

0x2aee,	// (0x00002aee) bg_popup_sub_pane_cp10

0x645e,	// (0x0000645e) list_choice_list_pane

0x6475,	// (0x00006475) list_single_choice_list_pane_ParamLimits

0x6475,	// (0x00006475) list_single_choice_list_pane

0x6489,	// (0x00006489) list_single_choice_list_pane_g1

0x6491,	// (0x00006491) list_single_choice_list_pane_t1_ParamLimits

0x6491,	// (0x00006491) list_single_choice_list_pane_t1

0x64a6,	// (0x000064a6) choice_list_pane_g1

0x64ae,	// (0x000064ae) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x188c,	// (0x0000188c) title_pane_stacon_g2_ParamLimits

0x188c,	// (0x0000188c) title_pane_stacon_g2

0x0002,

0xa7fc,	// (0x0000a7fc) title_pane_stacon_g_ParamLimits

0xa7fc,	// (0x0000a7fc) title_pane_stacon_g

0x2575,	// (0x00002575) cursor_press_pane

0xbf86,	// (0x0000bf86) popup_fep_hwr_window_ParamLimits

0xbf86,	// (0x0000bf86) popup_fep_hwr_window

0x2c3c,	// (0x00002c3c) popup_fep_vkb_window_ParamLimits

0x2c3c,	// (0x00002c3c) popup_fep_vkb_window

0x64bc,	// (0x000064bc) cursor_press_pane_g1

0x0002,

0xeda5,	// (0x0000eda5) fep_vkb_side_pane_g_ParamLimits

0x64fd,	// (0x000064fd) fep_hwr_candidate_pane_ParamLimits

0x64fd,	// (0x000064fd) fep_hwr_candidate_pane

0x6527,	// (0x00006527) fep_hwr_side_pane_ParamLimits

0x6527,	// (0x00006527) fep_hwr_side_pane

0x6547,	// (0x00006547) fep_hwr_top_pane_ParamLimits

0x6547,	// (0x00006547) fep_hwr_top_pane

0x655f,	// (0x0000655f) fep_hwr_write_pane_ParamLimits

0x655f,	// (0x0000655f) fep_hwr_write_pane

0xeda5,	// (0x0000eda5) fep_vkb_side_pane_g

0x6599,	// (0x00006599) fep_hwr_top_pane_g1

0x65ab,	// (0x000065ab) fep_hwr_top_pane_g2

0x65bd,	// (0x000065bd) fep_hwr_top_pane_g3

0x0002,

0xac21,	// (0x0000ac21) fep_hwr_top_pane_g

0x65d2,	// (0x000065d2) fep_hwr_top_text_pane

0x1cf0,	// (0x00001cf0) fep_hwr_top_text_pane_g1

0x66aa,	// (0x000066aa) fep_hwr_top_text_pane_t1

0x66fa,	// (0x000066fa) fep_hwr_candidate_pane_g1

0x697a,	// (0x0000697a) fep_vkb_keypad_pane_g3_ParamLimits

0x697a,	// (0x0000697a) fep_vkb_keypad_pane_g3

0x69a2,	// (0x000069a2) fep_vkb_keypad_pane_g4_ParamLimits

0x69a2,	// (0x000069a2) fep_vkb_keypad_pane_g4

0x6a11,	// (0x00006a11) fep_vkb_bottom_pane_g2_ParamLimits

0x6a11,	// (0x00006a11) fep_vkb_bottom_pane_g2

0x0001,

0xac4c,	// (0x0000ac4c) fep_vkb_bottom_pane_g_ParamLimits

0xac4c,	// (0x0000ac4c) fep_vkb_bottom_pane_g

0x6454,	// (0x00006454) cell_vkb_side_pane_g2

0x0001,

0xac56,	// (0x0000ac56) cell_vkb_side_pane_g

0x6a9c,	// (0x00006a9c) cell_vkb_side_pane_t1

0x6aaa,	// (0x00006aaa) cell_vkb_side_pane_t1_copy1

0x6454,	// (0x00006454) bg_fep_vkb_candidate_pane_g2

0x6bdc,	// (0x00006bdc) cell_vkb_candidate_pane_ParamLimits

0x672e,	// (0x0000672e) aid_size_cell_vkb_ParamLimits

0x672e,	// (0x0000672e) aid_size_cell_vkb

0x6bdc,	// (0x00006bdc) cell_vkb_candidate_pane

0x6c12,	// (0x00006c12) bg_popup_fep_shadow_pane_g1

0x67bc,	// (0x000067bc) fep_vkb_bottom_pane_ParamLimits

0x67bc,	// (0x000067bc) fep_vkb_bottom_pane

0x67f9,	// (0x000067f9) fep_vkb_candidate_pane_ParamLimits

0x67f9,	// (0x000067f9) fep_vkb_candidate_pane

0x6815,	// (0x00006815) fep_vkb_keypad_pane_ParamLimits

0x6815,	// (0x00006815) fep_vkb_keypad_pane

0x685b,	// (0x0000685b) fep_vkb_side_pane_ParamLimits

0x685b,	// (0x0000685b) fep_vkb_side_pane

0x6897,	// (0x00006897) fep_vkb_top_pane_ParamLimits

0x6897,	// (0x00006897) fep_vkb_top_pane

0x68d3,	// (0x000068d3) fep_vkb_top_pane_g1_ParamLimits

0x68d3,	// (0x000068d3) fep_vkb_top_pane_g1

0x68e2,	// (0x000068e2) fep_vkb_top_pane_g2_ParamLimits

0x68e2,	// (0x000068e2) fep_vkb_top_pane_g2

0x68f1,	// (0x000068f1) fep_vkb_top_pane_g3_ParamLimits

0x68f1,	// (0x000068f1) fep_vkb_top_pane_g3

0x0003,

0xac3c,	// (0x0000ac3c) fep_vkb_top_pane_g_ParamLimits

0xac3c,	// (0x0000ac3c) fep_vkb_top_pane_g

0x690f,	// (0x0000690f) fep_vkb_top_text_pane_ParamLimits

0x690f,	// (0x0000690f) fep_vkb_top_text_pane

0xd34c,	// (0x0000d34c) fep_vkb_side_pane_g1_ParamLimits

0xd34c,	// (0x0000d34c) fep_vkb_side_pane_g1

0x6969,	// (0x00006969) grid_vkb_side_pane_ParamLimits

0x6969,	// (0x00006969) grid_vkb_side_pane

0x6c1a,	// (0x00006c1a) bg_popup_fep_shadow_pane_g2

0x6c23,	// (0x00006c23) bg_popup_fep_shadow_pane_g3

0x6c2b,	// (0x00006c2b) bg_popup_fep_shadow_pane_g4

0x6c34,	// (0x00006c34) bg_popup_fep_shadow_pane_g5

0x6c3e,	// (0x00006c3e) bg_popup_fep_shadow_pane_g6

0x6c46,	// (0x00006c46) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x69c0,	// (0x000069c0) grid_vkb_keypad_number_pane_ParamLimits

0x69c0,	// (0x000069c0) grid_vkb_keypad_number_pane

0x69d0,	// (0x000069d0) grid_vkb_keypad_pane_ParamLimits

0x69d0,	// (0x000069d0) grid_vkb_keypad_pane

0x69f6,	// (0x000069f6) fep_vkb_bottom_pane_g1_ParamLimits

0x69f6,	// (0x000069f6) fep_vkb_bottom_pane_g1

0x6a1f,	// (0x00006a1f) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a1f,	// (0x00006a1f) grid_vkb_keypad_bottom_left_pane

0x6a34,	// (0x00006a34) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a34,	// (0x00006a34) grid_vkb_keypad_bottom_right_pane

0x6a49,	// (0x00006a49) fep_vkb_top_text_pane_g1

0xd393,	// (0x0000d393) fep_vkb_top_text_pane_t1

0xd3a5,	// (0x0000d3a5) cell_vkb_side_pane_ParamLimits

0xd3a5,	// (0x0000d3a5) cell_vkb_side_pane

0x6454,	// (0x00006454) cell_vkb_side_pane_g1

0x6ab8,	// (0x00006ab8) cell_vkb_keypad_pane_ParamLimits

0x6ab8,	// (0x00006ab8) cell_vkb_keypad_pane

0x6b33,	// (0x00006b33) cell_vkb_keypad_pane_g1

0x0008,

0xac69,	// (0x0000ac69) bg_popup_fep_shadow_pane_g

0x6454,	// (0x00006454) cell_hwr_side_pane_g1

0x6454,	// (0x00006454) cell_hwr_side_pane_g2

0x6b3d,	// (0x00006b3d) cell_vkb_keypad_pane_t1

0xd3bb,	// (0x0000d3bb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd3bb,	// (0x0000d3bb) cell_vkb_keypad_bottom_left_pane

0xd3d0,	// (0x0000d3d0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd3d0,	// (0x0000d3d0) cell_vkb_keypad_bottom_right_pane

0x6454,	// (0x00006454) cell_vkb_keypad_bottom_left_pane_g1

0x6454,	// (0x00006454) cell_vkb_keypad_bottom_right_pane_g1

0x6ba1,	// (0x00006ba1) cell_vkb_keypad_number_pane_ParamLimits

0x6ba1,	// (0x00006ba1) cell_vkb_keypad_number_pane

0x6bc0,	// (0x00006bc0) cell_vkb_keypad_number_pane_g1

0x6bca,	// (0x00006bca) cell_vkb_keypad_number_pane_g2

0x6bd3,	// (0x00006bd3) cell_vkb_keypad_number_pane_g3

0x0002,

0xac5b,	// (0x0000ac5b) cell_vkb_keypad_number_pane_g

0x6b3d,	// (0x00006b3d) cell_vkb_keypad_number_pane_t1

0x6bf9,	// (0x00006bf9) fep_vkb_candidate_pane_g1

0x0001,

0xac56,	// (0x0000ac56) cell_hwr_side_pane_g

0x6c58,	// (0x00006c58) cell_hwr_side_pane_t1

0x6c66,	// (0x00006c66) cell_hwr_side_pane_t1_copy1

0x6901,	// (0x00006901) cell_hwr_candidate_pane_g1

0x6cb6,	// (0x00006cb6) cell_hwr_candidate_pane_t1

0x6454,	// (0x00006454) cell_vkb_candidate_pane_g2

0x6d0a,	// (0x00006d0a) cell_vkb_candidate_pane_t1

0x64c4,	// (0x000064c4) bg_popup_fep_shadow_pane_ParamLimits

0x64c4,	// (0x000064c4) bg_popup_fep_shadow_pane

0x6579,	// (0x00006579) bg_fep_hwr_top_pane_g4

0x65e7,	// (0x000065e7) bg_hwr_side_pane_g1_ParamLimits

0x65e7,	// (0x000065e7) bg_hwr_side_pane_g1

0xd305,	// (0x0000d305) cell_hwr_side_pane_ParamLimits

0xd305,	// (0x0000d305) cell_hwr_side_pane

0x6655,	// (0x00006655) fep_hwr_write_pane_g1_ParamLimits

0x6655,	// (0x00006655) fep_hwr_write_pane_g1

0x6662,	// (0x00006662) fep_hwr_write_pane_g2_ParamLimits

0x6662,	// (0x00006662) fep_hwr_write_pane_g2

0x666f,	// (0x0000666f) fep_hwr_write_pane_g3_ParamLimits

0x666f,	// (0x0000666f) fep_hwr_write_pane_g3

0xd325,	// (0x0000d325) fep_hwr_write_pane_g4_ParamLimits

0xd325,	// (0x0000d325) fep_hwr_write_pane_g4

0x0005,

0xed98,	// (0x0000ed98) fep_hwr_write_pane_g_ParamLimits

0xed98,	// (0x0000ed98) fep_hwr_write_pane_g

0x6579,	// (0x00006579) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6579,	// (0x00006579) bg_fep_hwr_candidate_pane_g2

0x66b8,	// (0x000066b8) cell_hwr_candidate_pane_ParamLimits

0x66b8,	// (0x000066b8) cell_hwr_candidate_pane

0x66fa,	// (0x000066fa) fep_hwr_candidate_pane_g1_ParamLimits

0x675c,	// (0x0000675c) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x675c,	// (0x0000675c) bg_popup_fep_shadow_pane_cp2

0x6901,	// (0x00006901) fep_vkb_top_pane_g4_ParamLimits

0x6901,	// (0x00006901) fep_vkb_top_pane_g4

0x6947,	// (0x00006947) fep_vkb_side_pane_g2_ParamLimits

0x6947,	// (0x00006947) fep_vkb_side_pane_g2

0xb7b4,	// (0x0000b7b4) list_setting_pane_t4_ParamLimits

0xb7b4,	// (0x0000b7b4) list_setting_pane_t4

0xb82e,	// (0x0000b82e) list_setting_number_pane_t5_ParamLimits

0xb82e,	// (0x0000b82e) list_setting_number_pane_t5

0xbb45,	// (0x0000bb45) list_double_heading_pane_cp2_ParamLimits

0xbb45,	// (0x0000bb45) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6d18,	// (0x00006d18) list_double_heading_pane_t1_cp2_ParamLimits

0x6d18,	// (0x00006d18) list_double_heading_pane_t1_cp2

0x6d2e,	// (0x00006d2e) list_double_heading_pane_t2_cp2_ParamLimits

0x6d2e,	// (0x00006d2e) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6d40,	// (0x00006d40) list_preview_fixed_pane

0x6d86,	// (0x00006d86) list_empty_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_empty_pane_fp

0x6d86,	// (0x00006d86) list_single_cale_day_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_cale_day_pane_fp

0x6d86,	// (0x00006d86) list_single_graphic_heading_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_graphic_heading_pane_fp

0x6d86,	// (0x00006d86) list_single_graphic_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_graphic_pane_fp

0x6d86,	// (0x00006d86) list_single_heading_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_heading_pane_fp

0x6d86,	// (0x00006d86) list_single_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_pane_fp

0x6d9d,	// (0x00006d9d) list_single_pane_fp_g1_ParamLimits

0x6d9d,	// (0x00006d9d) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6da9,	// (0x00006da9) list_single_pane_fp_g4_ParamLimits

0x6da9,	// (0x00006da9) list_single_pane_fp_g4

0x0003,

0xac8a,	// (0x0000ac8a) list_single_pane_fp_g_ParamLimits

0xac8a,	// (0x0000ac8a) list_single_pane_fp_g

0x6db5,	// (0x00006db5) list_single_pane_fp_t1_ParamLimits

0x6db5,	// (0x00006db5) list_single_pane_fp_t1

0x6dcc,	// (0x00006dcc) list_single_graphic_pane_fp_g1_ParamLimits

0x6dcc,	// (0x00006dcc) list_single_graphic_pane_fp_g1

0x6d9d,	// (0x00006d9d) list_single_graphic_pane_fp_g2_ParamLimits

0x6d9d,	// (0x00006d9d) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6da9,	// (0x00006da9) list_single_graphic_pane_fp_g5_ParamLimits

0x6da9,	// (0x00006da9) list_single_graphic_pane_fp_g5

0x0004,

0xac93,	// (0x0000ac93) list_single_graphic_pane_fp_g_ParamLimits

0xac93,	// (0x0000ac93) list_single_graphic_pane_fp_g

0x6dd8,	// (0x00006dd8) list_single_graphic_pane_fp_t1_ParamLimits

0x6dd8,	// (0x00006dd8) list_single_graphic_pane_fp_t1

0x6dcc,	// (0x00006dcc) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6dcc,	// (0x00006dcc) list_single_graphic_heading_pane_fp_g1

0x6d9d,	// (0x00006d9d) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6d9d,	// (0x00006d9d) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6da9,	// (0x00006da9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6da9,	// (0x00006da9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xac93,	// (0x0000ac93) list_single_graphic_heading_pane_fp_g_ParamLimits

0xac93,	// (0x0000ac93) list_single_graphic_heading_pane_fp_g

0x6dee,	// (0x00006dee) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6dee,	// (0x00006dee) list_single_graphic_heading_pane_fp_t1

0x6e04,	// (0x00006e04) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e04,	// (0x00006e04) list_single_graphic_heading_pane_fp_t2

0x0001,

0xac9e,	// (0x0000ac9e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xac9e,	// (0x0000ac9e) list_single_graphic_heading_pane_fp_t

0x6e16,	// (0x00006e16) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e16,	// (0x00006e16) list_single_cale_day_pane_fp_g1

0x6e4e,	// (0x00006e4e) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e4e,	// (0x00006e4e) list_single_cale_day_pane_fp_g2

0x6e5a,	// (0x00006e5a) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e5a,	// (0x00006e5a) list_single_cale_day_pane_fp_g3

0x6e82,	// (0x00006e82) list_single_cale_day_pane_fp_g4_ParamLimits

0x6e82,	// (0x00006e82) list_single_cale_day_pane_fp_g4

0x6ea6,	// (0x00006ea6) list_single_cale_day_pane_fp_g5_ParamLimits

0x6ea6,	// (0x00006ea6) list_single_cale_day_pane_fp_g5

0x0004,

0xaca3,	// (0x0000aca3) list_single_cale_day_pane_fp_g_ParamLimits

0xaca3,	// (0x0000aca3) list_single_cale_day_pane_fp_g

0x6eca,	// (0x00006eca) list_single_cale_day_pane_fp_t1_ParamLimits

0x6eca,	// (0x00006eca) list_single_cale_day_pane_fp_t1

0x6ef0,	// (0x00006ef0) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ef0,	// (0x00006ef0) list_single_cale_day_pane_fp_t2

0x6f09,	// (0x00006f09) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f09,	// (0x00006f09) list_single_cale_day_pane_fp_t3

0x0002,

0xacae,	// (0x0000acae) list_single_cale_day_pane_fp_t_ParamLimits

0xacae,	// (0x0000acae) list_single_cale_day_pane_fp_t

0x6d9d,	// (0x00006d9d) list_empty_pane_fp_g1_ParamLimits

0x6d9d,	// (0x00006d9d) list_empty_pane_fp_g1

0x6f22,	// (0x00006f22) list_empty_pane_fp_t1

0x6f30,	// (0x00006f30) list_empty_pane_fp_t2

0x0001,

0xacb5,	// (0x0000acb5) list_empty_pane_fp_t

0x6d9d,	// (0x00006d9d) list_single_heading_pane_fp_g1_ParamLimits

0x6d9d,	// (0x00006d9d) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xacba,	// (0x0000acba) list_single_heading_pane_fp_g_ParamLimits

0xacba,	// (0x0000acba) list_single_heading_pane_fp_g

0x6f3e,	// (0x00006f3e) list_single_heading_pane_fp_t1_ParamLimits

0x6f3e,	// (0x00006f3e) list_single_heading_pane_fp_t1

0x6f50,	// (0x00006f50) list_single_heading_pane_fp_t2_ParamLimits

0x6f50,	// (0x00006f50) list_single_heading_pane_fp_t2

0x0001,

0xacc1,	// (0x0000acc1) list_single_heading_pane_fp_t_ParamLimits

0xacc1,	// (0x0000acc1) list_single_heading_pane_fp_t

0x16d3,	// (0x000016d3) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1710,	// (0x00001710) cell_app_pane_cp2_ParamLimits

0x1710,	// (0x00001710) cell_app_pane_cp2

0x64e6,	// (0x000064e6) fep_hwr_candidate_drop_down_list_pane

0x6714,	// (0x00006714) fep_hwr_candidate_pane_g3_ParamLimits

0x6714,	// (0x00006714) fep_hwr_candidate_pane_g3

0x6721,	// (0x00006721) fep_hwr_candidate_pane_g4_ParamLimits

0x6721,	// (0x00006721) fep_hwr_candidate_pane_g4

0x0002,

0xac35,	// (0x0000ac35) fep_hwr_candidate_pane_g_ParamLimits

0xac35,	// (0x0000ac35) fep_hwr_candidate_pane_g

0x67e8,	// (0x000067e8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x67e8,	// (0x000067e8) fep_vkb_candidate_drop_down_list_pane

0x6c01,	// (0x00006c01) fep_vkb_candidate_pane_g3

0x6c09,	// (0x00006c09) fep_vkb_candidate_pane_g4

0x0002,

0xac62,	// (0x0000ac62) fep_vkb_candidate_pane_g

0x6901,	// (0x00006901) cell_hwr_candidate_pane_g1_ParamLimits

0x6c74,	// (0x00006c74) cell_hwr_candidate_pane_g3_ParamLimits

0x6c74,	// (0x00006c74) cell_hwr_candidate_pane_g3

0x6c95,	// (0x00006c95) cell_hwr_candidate_pane_g4_ParamLimits

0x6c95,	// (0x00006c95) cell_hwr_candidate_pane_g4

0x0002,

0xac7c,	// (0x0000ac7c) cell_hwr_candidate_pane_g_ParamLimits

0xac7c,	// (0x0000ac7c) cell_hwr_candidate_pane_g

0x6cd4,	// (0x00006cd4) cell_vkb_candidate_pane_g3_ParamLimits

0x6cd4,	// (0x00006cd4) cell_vkb_candidate_pane_g3

0x6cef,	// (0x00006cef) cell_vkb_candidate_pane_g4_ParamLimits

0x6cef,	// (0x00006cef) cell_vkb_candidate_pane_g4

0x6f66,	// (0x00006f66) cell_app_pane_cp2_g1_ParamLimits

0x6f66,	// (0x00006f66) cell_app_pane_cp2_g1

0x6f84,	// (0x00006f84) cell_app_pane_cp2_g2_ParamLimits

0x6f84,	// (0x00006f84) cell_app_pane_cp2_g2

0x0001,

0xacc6,	// (0x0000acc6) cell_app_pane_cp2_g_ParamLimits

0xacc6,	// (0x0000acc6) cell_app_pane_cp2_g

0x6f90,	// (0x00006f90) cell_app_pane_cp2_t1_ParamLimits

0x6f90,	// (0x00006f90) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x6fa2,	// (0x00006fa2) cell_hwr_candidate_pane_cp1_ParamLimits

0x6fa2,	// (0x00006fa2) cell_hwr_candidate_pane_cp1

0x6901,	// (0x00006901) fep_hwr_candidate_drop_down_list_pane_g1

0x6fc1,	// (0x00006fc1) fep_hwr_candidate_drop_down_list_pane_g2

0x6fce,	// (0x00006fce) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xaccb,	// (0x0000accb) fep_hwr_candidate_drop_down_list_pane_g

0x6fdb,	// (0x00006fdb) fep_hwr_candidate_drop_down_list_scroll_pane

0x6fe4,	// (0x00006fe4) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6fe4,	// (0x00006fe4) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ff1,	// (0x00006ff1) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ff1,	// (0x00006ff1) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ffe,	// (0x00006ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ffe,	// (0x00006ffe) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6cd4,	// (0x00006cd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cd4,	// (0x00006cd4) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cef,	// (0x00006cef) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cef,	// (0x00006cef) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x700b,	// (0x0000700b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x700b,	// (0x0000700b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7026,	// (0x00007026) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7026,	// (0x00007026) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7041,	// (0x00007041) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7041,	// (0x00007041) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xacd2,	// (0x0000acd2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xacd2,	// (0x0000acd2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x705c,	// (0x0000705c) cell_vkb_candidate_pane_cp1_ParamLimits

0x705c,	// (0x0000705c) cell_vkb_candidate_pane_cp1

0x6901,	// (0x00006901) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6901,	// (0x00006901) fep_vkb_candidate_drop_down_list_pane_g1

0x6fc1,	// (0x00006fc1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6fc1,	// (0x00006fc1) fep_vkb_candidate_drop_down_list_pane_g2

0x6fce,	// (0x00006fce) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6fce,	// (0x00006fce) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xaccb,	// (0x0000accb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xaccb,	// (0x0000accb) fep_vkb_candidate_drop_down_list_pane_g

0x707c,	// (0x0000707c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x707c,	// (0x0000707c) fep_vkb_candidate_drop_down_list_scroll_pane

0x7089,	// (0x00007089) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7089,	// (0x00007089) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7096,	// (0x00007096) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7096,	// (0x00007096) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x70a2,	// (0x000070a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x70a2,	// (0x000070a2) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6c74,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c74,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6c95,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c95,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70ae,	// (0x000070ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70ae,	// (0x000070ae) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x70cf,	// (0x000070cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70cf,	// (0x000070cf) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7041,	// (0x00007041) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7041,	// (0x00007041) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xace3,	// (0x0000ace3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xace3,	// (0x0000ace3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb1b5,	// (0x0000b1b5) title_pane_g1_ParamLimits

0xb1c6,	// (0x0000b1c6) title_pane_g2_ParamLimits

0xebd6,	// (0x0000ebd6) title_pane_g_ParamLimits

0x1ce0,	// (0x00001ce0) aid_call2_pane

0x1ce8,	// (0x00001ce8) aid_call_pane

0x1cf0,	// (0x00001cf0) popup_clock_analogue_window_g1

0x1cf0,	// (0x00001cf0) popup_clock_analogue_window_g2

0x1cf8,	// (0x00001cf8) popup_clock_analogue_window_g3

0x1d01,	// (0x00001d01) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa82b,	// (0x0000a82b) popup_clock_analogue_window_g

0x1d09,	// (0x00001d09) popup_clock_analogue_window_t1

0x1d8b,	// (0x00001d8b) clock_digital_number_pane_ParamLimits

0x1d8b,	// (0x00001d8b) clock_digital_number_pane

0x1d97,	// (0x00001d97) clock_digital_number_pane_cp02_ParamLimits

0x1d97,	// (0x00001d97) clock_digital_number_pane_cp02

0x1da3,	// (0x00001da3) clock_digital_number_pane_cp03_ParamLimits

0x1da3,	// (0x00001da3) clock_digital_number_pane_cp03

0x1daf,	// (0x00001daf) clock_digital_number_pane_cp04_ParamLimits

0x1daf,	// (0x00001daf) clock_digital_number_pane_cp04

0x1dbb,	// (0x00001dbb) clock_digital_separator_pane_ParamLimits

0x1dbb,	// (0x00001dbb) clock_digital_separator_pane

0x1dc7,	// (0x00001dc7) popup_clock_digital_window_t1_ParamLimits

0x1dc7,	// (0x00001dc7) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xa836,	// (0x0000a836) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa836,	// (0x0000a836) clock_digital_separator_pane_g

0xc56b,	// (0x0000c56b) aid_fill_nsta_ParamLimits

0xc69a,	// (0x0000c69a) indicator_nsta_pane_ParamLimits

0x3357,	// (0x00003357) popup_clock_analogue_window

0x3357,	// (0x00003357) popup_clock_digital_window

0x1694,	// (0x00001694) grid_indicator_nsta_pane_ParamLimits

0x5d8e,	// (0x00005d8e) clock_nsta_pane_t2

0x0001,

0xabc2,	// (0x0000abc2) clock_nsta_pane_t

0x1acb,	// (0x00001acb) aid_size_max_handle

0xbb3c,	// (0x0000bb3c) aid_size_min_handle

0x2575,	// (0x00002575) editor_scroll_pane

0x70f0,	// (0x000070f0) ex_editor_pane

0x1642,	// (0x00001642) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d39,	// (0x00001d39) scroll_pane_cp36

0xbb56,	// (0x0000bb56) list_single_graphic_hl_pane_cp2_ParamLimits

0xbb56,	// (0x0000bb56) list_single_graphic_hl_pane_cp2

0xcfbb,	// (0x0000cfbb) list_single_graphic_hl_pane_ParamLimits

0xcfbb,	// (0x0000cfbb) list_single_graphic_hl_pane

0x70f8,	// (0x000070f8) aid_size_min_hl_cp1

0x7101,	// (0x00007101) list_highlight_pane_cp34_ParamLimits

0x7101,	// (0x00007101) list_highlight_pane_cp34

0x7112,	// (0x00007112) list_single_graphic_hl_pane_g1_ParamLimits

0x7112,	// (0x00007112) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd3eb,	// (0x0000d3eb) list_single_graphic_hl_pane_g5_ParamLimits

0xd3eb,	// (0x0000d3eb) list_single_graphic_hl_pane_g5

0x0004,

0xedb1,	// (0x0000edb1) list_single_graphic_hl_pane_g_ParamLimits

0xedb1,	// (0x0000edb1) list_single_graphic_hl_pane_g

0xd3ff,	// (0x0000d3ff) list_single_graphic_hl_pane_t1_ParamLimits

0xd3ff,	// (0x0000d3ff) list_single_graphic_hl_pane_t1

0x713f,	// (0x0000713f) aid_size_min_hl_cp2

0x7148,	// (0x00007148) list_highlight_pane_cp34_cp2_ParamLimits

0x7148,	// (0x00007148) list_highlight_pane_cp34_cp2

0x7112,	// (0x00007112) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7112,	// (0x00007112) list_single_graphic_hl_pane_g1_cp2

0x7155,	// (0x00007155) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7155,	// (0x00007155) list_single_graphic_hl_pane_g2_cp2

0x7161,	// (0x00007161) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7161,	// (0x00007161) list_single_graphic_hl_pane_g3_cp2

0x24ac,	// (0x000024ac) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_graphic_hl_pane_g4_cp2

0x712b,	// (0x0000712b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x712b,	// (0x0000712b) list_single_graphic_hl_pane_g5_cp2

0xbd7d,	// (0x0000bd7d) control_pane_g4_ParamLimits

0xbd7d,	// (0x0000bd7d) control_pane_g4

0x2aee,	// (0x00002aee) bg_popup_sub_pane_cp10_ParamLimits

0x645e,	// (0x0000645e) list_choice_list_pane_ParamLimits

0x646d,	// (0x0000646d) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d40,	// (0x00006d40) list_preview_fixed_pane_ParamLimits

0x6d56,	// (0x00006d56) list_preview_fixed_pane_cp_ParamLimits

0x6d56,	// (0x00006d56) list_preview_fixed_pane_cp

0x6d62,	// (0x00006d62) popup_preview_fixed_window_g1_ParamLimits

0x6d62,	// (0x00006d62) popup_preview_fixed_window_g1

0x6d6e,	// (0x00006d6e) popup_preview_fixed_window_g2_ParamLimits

0x6d6e,	// (0x00006d6e) popup_preview_fixed_window_g2

0x0002,

0xac83,	// (0x0000ac83) popup_preview_fixed_window_g_ParamLimits

0xac83,	// (0x0000ac83) popup_preview_fixed_window_g

0x1971,	// (0x00001971) aid_navi_side_left_pane_ParamLimits

0x1986,	// (0x00001986) aid_navi_side_right_pane_ParamLimits

0x199e,	// (0x0000199e) navi_icon_pane_stacon_ParamLimits

0x19b2,	// (0x000019b2) navi_navi_pane_stacon_ParamLimits

0x199e,	// (0x0000199e) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7185,	// (0x00007185) listscroll_text_info_pane

0x718d,	// (0x0000718d) list_text_info_pane_ParamLimits

0x718d,	// (0x0000718d) list_text_info_pane

0x719c,	// (0x0000719c) scroll_pane_cp24_ParamLimits

0x719c,	// (0x0000719c) scroll_pane_cp24

0xd415,	// (0x0000d415) list_text_info_pane_t1_ParamLimits

0xd415,	// (0x0000d415) list_text_info_pane_t1

0xbefb,	// (0x0000befb) popup_fast_swap2_window_ParamLimits

0xbefb,	// (0x0000befb) popup_fast_swap2_window

0x71f3,	// (0x000071f3) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c57,	// (0x00003c57) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x71fd,	// (0x000071fd) grid_fast2_pane

0x7207,	// (0x00007207) listscroll_fast2_pane_g1

0x720f,	// (0x0000720f) listscroll_fast2_pane_g2

0x0001,

0xacff,	// (0x0000acff) listscroll_fast2_pane_g

0x1642,	// (0x00001642) scroll_pane_cp26

0x7219,	// (0x00007219) cell_fast2_pane_ParamLimits

0x7219,	// (0x00007219) cell_fast2_pane

0x722e,	// (0x0000722e) cell_fast2_pane_g1

0x7237,	// (0x00007237) cell_fast2_pane_g2

0x7240,	// (0x00007240) cell_fast2_pane_g3

0x0002,

0xad04,	// (0x0000ad04) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x71b1,	// (0x000071b1) list_single_text_info_pane

0x7248,	// (0x00007248) eswt_ctrl_button_pane

0x7248,	// (0x00007248) eswt_ctrl_canvas_pane

0x7250,	// (0x00007250) eswt_ctrl_combo_pane

0x7248,	// (0x00007248) eswt_ctrl_default_pane

0x7248,	// (0x00007248) eswt_ctrl_label_pane

0x7258,	// (0x00007258) eswt_ctrl_wait_pane

0x7260,	// (0x00007260) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7280,	// (0x00007280) popup_eswt_tasktip_window_ParamLimits

0x7280,	// (0x00007280) popup_eswt_tasktip_window

0x37a8,	// (0x000037a8) bg_popup_window_pane_cp18

0x7291,	// (0x00007291) eswt_control_pane_g1_ParamLimits

0x7291,	// (0x00007291) eswt_control_pane_g1

0x729e,	// (0x0000729e) eswt_control_pane_g2_ParamLimits

0x729e,	// (0x0000729e) eswt_control_pane_g2

0x72ab,	// (0x000072ab) eswt_control_pane_g3_ParamLimits

0x72ab,	// (0x000072ab) eswt_control_pane_g3

0x72b8,	// (0x000072b8) eswt_control_pane_g4_ParamLimits

0x72b8,	// (0x000072b8) eswt_control_pane_g4

0x0003,

0xad0b,	// (0x0000ad0b) eswt_control_pane_g_ParamLimits

0xad0b,	// (0x0000ad0b) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x72c5,	// (0x000072c5) control_button_pane_g1_ParamLimits

0x72c5,	// (0x000072c5) control_button_pane_g1

0x72d1,	// (0x000072d1) control_button_pane_g2_ParamLimits

0x72d1,	// (0x000072d1) control_button_pane_g2

0x72dd,	// (0x000072dd) control_button_pane_g3_ParamLimits

0x72dd,	// (0x000072dd) control_button_pane_g3

0x0002,

0xad14,	// (0x0000ad14) control_button_pane_g_ParamLimits

0xad14,	// (0x0000ad14) control_button_pane_g

0x72f1,	// (0x000072f1) control_button_pane_t1

0x72ff,	// (0x000072ff) control_button_pane_t2

0x0001,

0xad1b,	// (0x0000ad1b) control_button_pane_t

0x3618,	// (0x00003618) bg_button_pane_g1

0x3620,	// (0x00003620) bg_button_pane_g2

0x3628,	// (0x00003628) bg_button_pane_g3

0x3630,	// (0x00003630) bg_button_pane_g4

0x3638,	// (0x00003638) bg_button_pane_g5

0x3640,	// (0x00003640) bg_button_pane_g6

0x3648,	// (0x00003648) bg_button_pane_g7

0x3650,	// (0x00003650) bg_button_pane_g8

0x3658,	// (0x00003658) bg_button_pane_g9

0x0008,

0xa987,	// (0x0000a987) bg_button_pane_g

0x6419,	// (0x00006419) common_borders_pane_ParamLimits

0x6419,	// (0x00006419) common_borders_pane

0x7291,	// (0x00007291) eswt_control_pane_g1_copy1_ParamLimits

0x7291,	// (0x00007291) eswt_control_pane_g1_copy1

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy1_ParamLimits

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy1

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy1_ParamLimits

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy1

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy1_ParamLimits

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy1

0x6454,	// (0x00006454) bg_eswt_ctrl_canvas_pane_g1

0x6419,	// (0x00006419) common_borders_pane_cp2_ParamLimits

0x6419,	// (0x00006419) common_borders_pane_cp2

0x6419,	// (0x00006419) common_borders_pane_cp3_ParamLimits

0x6419,	// (0x00006419) common_borders_pane_cp3

0x730d,	// (0x0000730d) separator_horizontal_pane

0x7315,	// (0x00007315) separator_vertical_pane

0x7291,	// (0x00007291) eswt_control_pane_g1_copy2_ParamLimits

0x7291,	// (0x00007291) eswt_control_pane_g1_copy2

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy2_ParamLimits

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy2

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy2_ParamLimits

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy2

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy2_ParamLimits

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x731e,	// (0x0000731e) separator_horizontal_pane_g1

0x7327,	// (0x00007327) separator_horizontal_pane_g2

0x7330,	// (0x00007330) separator_horizontal_pane_g3

0x0002,

0xad20,	// (0x0000ad20) separator_horizontal_pane_g

0x7291,	// (0x00007291) eswt_control_pane_g1_copy3_ParamLimits

0x7291,	// (0x00007291) eswt_control_pane_g1_copy3

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy3_ParamLimits

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy3

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy3_ParamLimits

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy3

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy3_ParamLimits

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7339,	// (0x00007339) separator_vertical_pane_g1

0x7342,	// (0x00007342) separator_vertical_pane_g2

0x734b,	// (0x0000734b) separator_vertical_pane_g3

0x0002,

0xad27,	// (0x0000ad27) separator_vertical_pane_g

0x7291,	// (0x00007291) eswt_control_pane_g1_copy4_ParamLimits

0x7291,	// (0x00007291) eswt_control_pane_g1_copy4

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy4_ParamLimits

0x729e,	// (0x0000729e) eswt_control_pane_g2_copy4

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy4_ParamLimits

0x72ab,	// (0x000072ab) eswt_control_pane_g3_copy4

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy4_ParamLimits

0x72b8,	// (0x000072b8) eswt_control_pane_g4_copy4

0xd433,	// (0x0000d433) eswt_ctrl_combo_button_pane

0xd43b,	// (0x0000d43b) eswt_ctrl_input_pane

0xd443,	// (0x0000d443) popup_choice_list_window_cp70

0xd44b,	// (0x0000d44b) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6419,	// (0x00006419) bg_button_pane_cp70_ParamLimits

0x6419,	// (0x00006419) bg_button_pane_cp70

0xd459,	// (0x0000d459) eswt_ctrl_combo_button_pane_g1

0x7382,	// (0x00007382) wait_bar_pane_cp70

0x37a8,	// (0x000037a8) bg_popup_window_pane_cp70_ParamLimits

0x37a8,	// (0x000037a8) bg_popup_window_pane_cp70

0x738a,	// (0x0000738a) popup_eswt_tasktip_window_t1

0x73a0,	// (0x000073a0) wait_bar_pane_cp71_ParamLimits

0x73a0,	// (0x000073a0) wait_bar_pane_cp71

0x73ac,	// (0x000073ac) grid_eswt_app_pane

0x1b2f,	// (0x00001b2f) scroll_pane_cp70

0xd461,	// (0x0000d461) cell_eswt_app_pane_ParamLimits

0xd461,	// (0x0000d461) cell_eswt_app_pane

0xd48b,	// (0x0000d48b) cell_eswt_app_pane_g1_ParamLimits

0xd48b,	// (0x0000d48b) cell_eswt_app_pane_g1

0xd4ba,	// (0x0000d4ba) cell_eswt_app_pane_g2_ParamLimits

0xd4ba,	// (0x0000d4ba) cell_eswt_app_pane_g2

0x0001,

0xedbc,	// (0x0000edbc) cell_eswt_app_pane_g_ParamLimits

0xedbc,	// (0x0000edbc) cell_eswt_app_pane_g

0xd4e3,	// (0x0000d4e3) cell_eswt_app_pane_t1_ParamLimits

0xd4e3,	// (0x0000d4e3) cell_eswt_app_pane_t1

0x7473,	// (0x00007473) grid_highlight_pane_cp70_ParamLimits

0x7473,	// (0x00007473) grid_highlight_pane_cp70

0x2448,	// (0x00002448) set_content_pane_g1

0x28c6,	// (0x000028c6) status_small_volume_pane

0x747f,	// (0x0000747f) status_small_volume_pane_g1

0x7487,	// (0x00007487) volume_small2_pane

0x7490,	// (0x00007490) volume_small2_pane_g1

0x7499,	// (0x00007499) volume_small2_pane_g2

0x74a2,	// (0x000074a2) volume_small2_pane_g3

0x74ab,	// (0x000074ab) volume_small2_pane_g4

0x74b4,	// (0x000074b4) volume_small2_pane_g5

0x74bd,	// (0x000074bd) volume_small2_pane_g6

0x74c6,	// (0x000074c6) volume_small2_pane_g7

0x74cf,	// (0x000074cf) volume_small2_pane_g8

0x74d8,	// (0x000074d8) volume_small2_pane_g9

0x74e1,	// (0x000074e1) volume_small2_pane_g10

0x0009,

0xad33,	// (0x0000ad33) volume_small2_pane_g

0x6a49,	// (0x00006a49) fep_vkb_top_text_pane_g1_ParamLimits

0xd393,	// (0x0000d393) fep_vkb_top_text_pane_t1_ParamLimits

0x6d7a,	// (0x00006d7a) popup_preview_fixed_window_g3_ParamLimits

0x6d7a,	// (0x00006d7a) popup_preview_fixed_window_g3

0xc4fe,	// (0x0000c4fe) popup_toolbar_trans_pane

0xce03,	// (0x0000ce03) aid_height_set_list_ParamLimits

0x4e03,	// (0x00004e03) aid_size_parent_ParamLimits

0x2aee,	// (0x00002aee) list_highlight_pane_cp2_ParamLimits

0x2448,	// (0x00002448) set_content_pane_g1_ParamLimits

0xcfce,	// (0x0000cfce) list_single_image_pane_ParamLimits

0xcfce,	// (0x0000cfce) list_single_image_pane

0xd515,	// (0x0000d515) aid_size_cell_image_ParamLimits

0xd515,	// (0x0000d515) aid_size_cell_image

0xd522,	// (0x0000d522) grid_single_image_pane_ParamLimits

0xd522,	// (0x0000d522) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xad48,	// (0x0000ad48) list_single_image_pane_g_ParamLimits

0xad48,	// (0x0000ad48) list_single_image_pane_g

0x7503,	// (0x00007503) list_single_image_pane_t1_ParamLimits

0x7503,	// (0x00007503) list_single_image_pane_t1

0xd52e,	// (0x0000d52e) cell_image_list_pane_ParamLimits

0xd52e,	// (0x0000d52e) cell_image_list_pane

0xd542,	// (0x0000d542) cell_image_list_pane_g1

0xd54b,	// (0x0000d54b) cell_image_list_pane_g2

0x0001,

0xedc1,	// (0x0000edc1) cell_image_list_pane_g

0x753f,	// (0x0000753f) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x7551,	// (0x00007551) grid_tb_trans_pane

0x3618,	// (0x00003618) bg_tb_trans_pane_g1

0x3620,	// (0x00003620) bg_tb_trans_pane_g2

0x3628,	// (0x00003628) bg_tb_trans_pane_g3

0x3630,	// (0x00003630) bg_tb_trans_pane_g4

0x3638,	// (0x00003638) bg_tb_trans_pane_g5

0x3650,	// (0x00003650) bg_tb_trans_pane_g6

0x3658,	// (0x00003658) bg_tb_trans_pane_g7

0x3640,	// (0x00003640) bg_tb_trans_pane_g8

0x3648,	// (0x00003648) bg_tb_trans_pane_g9

0x0008,

0xad52,	// (0x0000ad52) bg_tb_trans_pane_g

0x7565,	// (0x00007565) cell_toolbar_trans_pane_ParamLimits

0x7565,	// (0x00007565) cell_toolbar_trans_pane

0x6454,	// (0x00006454) cell_toolbar_trans_pane_g1

0xd1ef,	// (0x0000d1ef) list_form2_midp_pane_t1

0xd1fd,	// (0x0000d1fd) list_form2_midp_pane_t2

0x0001,

0xed8c,	// (0x0000ed8c) list_form2_midp_pane_t

0x5fbb,	// (0x00005fbb) scroll_pane_cp51_ParamLimits

0x61be,	// (0x000061be) form2_midp_wait_pane_g1

0x61c7,	// (0x000061c7) form2_midp_wait_pane_g2

0x61d0,	// (0x000061d0) form2_midp_wait_pane_g3

0x0002,

0xac10,	// (0x0000ac10) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x621f,	// (0x0000621f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x622e,	// (0x0000622e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5005,	// (0x00005005) list_single_2graphic_im_pane_ParamLimits

0x5005,	// (0x00005005) list_single_2graphic_im_pane

0xd554,	// (0x0000d554) list_single_2graphic_im_pane_g1_ParamLimits

0xd554,	// (0x0000d554) list_single_2graphic_im_pane_g1

0xd565,	// (0x0000d565) list_single_2graphic_im_pane_g2_ParamLimits

0xd565,	// (0x0000d565) list_single_2graphic_im_pane_g2

0xd571,	// (0x0000d571) list_single_2graphic_im_pane_g3_ParamLimits

0xd571,	// (0x0000d571) list_single_2graphic_im_pane_g3

0x0003,

0xedc6,	// (0x0000edc6) list_single_2graphic_im_pane_g_ParamLimits

0xedc6,	// (0x0000edc6) list_single_2graphic_im_pane_g

0xd585,	// (0x0000d585) list_single_2graphic_im_pane_t1_ParamLimits

0xd585,	// (0x0000d585) list_single_2graphic_im_pane_t1

0x6d86,	// (0x00006d86) list_single_graphic_2heading_pane_fp_ParamLimits

0x6d86,	// (0x00006d86) list_single_graphic_2heading_pane_fp

0x6dcc,	// (0x00006dcc) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6dcc,	// (0x00006dcc) list_single_graphic_2heading_pane_fp_g1

0x6d9d,	// (0x00006d9d) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6d9d,	// (0x00006d9d) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6da9,	// (0x00006da9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6da9,	// (0x00006da9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xac93,	// (0x0000ac93) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xac93,	// (0x0000ac93) list_single_graphic_2heading_pane_fp_g

0x75f9,	// (0x000075f9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x75f9,	// (0x000075f9) list_single_graphic_2heading_pane_fp_t1

0x6e04,	// (0x00006e04) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e04,	// (0x00006e04) list_single_graphic_2heading_pane_fp_t2

0x760f,	// (0x0000760f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x760f,	// (0x0000760f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xad6e,	// (0x0000ad6e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xad6e,	// (0x0000ad6e) list_single_graphic_2heading_pane_fp_t

0x6692,	// (0x00006692) fep_hwr_write_pane_g5_ParamLimits

0x6692,	// (0x00006692) fep_hwr_write_pane_g5

0x669e,	// (0x0000669e) fep_hwr_write_pane_g6_ParamLimits

0x669e,	// (0x0000669e) fep_hwr_write_pane_g6

0x7260,	// (0x00007260) eswt_shell_pane_ParamLimits

0x37a8,	// (0x000037a8) bg_popup_window_pane_cp18_ParamLimits

0x4cb1,	// (0x00004cb1) heading_pane_cp70

0x738a,	// (0x0000738a) popup_eswt_tasktip_window_t1_ParamLimits

0xc5bf,	// (0x0000c5bf) aid_touch_tab_arrow_left

0xc5d5,	// (0x0000c5d5) aid_touch_tab_arrow_right

0xb1de,	// (0x0000b1de) title_pane_g3_ParamLimits

0xb1de,	// (0x0000b1de) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xc4fe,	// (0x0000c4fe) popup_toolbar_trans_pane_ParamLimits

0x753f,	// (0x0000753f) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x7551,	// (0x00007551) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3e3c,	// (0x00003e3c) cont_note_wait_pane_ParamLimits

0x3e3c,	// (0x00003e3c) cont_note_wait_pane

0x3e3c,	// (0x00003e3c) cont_note_image_pane_ParamLimits

0x3e3c,	// (0x00003e3c) cont_note_image_pane

0x7625,	// (0x00007625) popup_note2_window_g1_ParamLimits

0x7625,	// (0x00007625) popup_note2_window_g1

0x7656,	// (0x00007656) popup_note2_window_t1_ParamLimits

0x7656,	// (0x00007656) popup_note2_window_t1

0x769b,	// (0x0000769b) popup_note2_window_t2_ParamLimits

0x769b,	// (0x0000769b) popup_note2_window_t2

0x76e0,	// (0x000076e0) popup_note2_window_t3_ParamLimits

0x76e0,	// (0x000076e0) popup_note2_window_t3

0x7725,	// (0x00007725) popup_note2_window_t4_ParamLimits

0x7725,	// (0x00007725) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xad7a,	// (0x0000ad7a) popup_note2_window_t_ParamLimits

0xad7a,	// (0x0000ad7a) popup_note2_window_t

0x7754,	// (0x00007754) popup_note2_image_window_g1_ParamLimits

0x7754,	// (0x00007754) popup_note2_image_window_g1

0x7760,	// (0x00007760) popup_note2_image_window_g2_ParamLimits

0x7760,	// (0x00007760) popup_note2_image_window_g2

0x0001,

0xad85,	// (0x0000ad85) popup_note2_image_window_g_ParamLimits

0xad85,	// (0x0000ad85) popup_note2_image_window_g

0x7772,	// (0x00007772) popup_note2_image_window_t1_ParamLimits

0x7772,	// (0x00007772) popup_note2_image_window_t1

0x778a,	// (0x0000778a) popup_note2_image_window_t2_ParamLimits

0x778a,	// (0x0000778a) popup_note2_image_window_t2

0x77a2,	// (0x000077a2) popup_note2_image_window_t3_ParamLimits

0x77a2,	// (0x000077a2) popup_note2_image_window_t3

0x0002,

0xad8a,	// (0x0000ad8a) popup_note2_image_window_t_ParamLimits

0xad8a,	// (0x0000ad8a) popup_note2_image_window_t

0x3e4a,	// (0x00003e4a) popup_note2_wait_window_g1_ParamLimits

0x3e4a,	// (0x00003e4a) popup_note2_wait_window_g1

0x3e56,	// (0x00003e56) popup_note2_wait_window_g2_ParamLimits

0x3e56,	// (0x00003e56) popup_note2_wait_window_g2

0x3e62,	// (0x00003e62) popup_note2_wait_window_g3_ParamLimits

0x3e62,	// (0x00003e62) popup_note2_wait_window_g3

0x0002,

0xa969,	// (0x0000a969) popup_note2_wait_window_g_ParamLimits

0xa969,	// (0x0000a969) popup_note2_wait_window_g

0x77be,	// (0x000077be) popup_note2_wait_window_t1_ParamLimits

0x77be,	// (0x000077be) popup_note2_wait_window_t1

0x77dc,	// (0x000077dc) popup_note2_wait_window_t2_ParamLimits

0x77dc,	// (0x000077dc) popup_note2_wait_window_t2

0x77fa,	// (0x000077fa) popup_note2_wait_window_t3_ParamLimits

0x77fa,	// (0x000077fa) popup_note2_wait_window_t3

0x780c,	// (0x0000780c) popup_note2_wait_window_t4_ParamLimits

0x780c,	// (0x0000780c) popup_note2_wait_window_t4

0x0003,

0xad91,	// (0x0000ad91) popup_note2_wait_window_t_ParamLimits

0xad91,	// (0x0000ad91) popup_note2_wait_window_t

0x781e,	// (0x0000781e) wait_bar2_pane_ParamLimits

0x781e,	// (0x0000781e) wait_bar2_pane

0x7836,	// (0x00007836) popup_snote2_single_text_window_g1_ParamLimits

0x7836,	// (0x00007836) popup_snote2_single_text_window_g1

0x785e,	// (0x0000785e) popup_snote2_single_text_window_t1_ParamLimits

0x785e,	// (0x0000785e) popup_snote2_single_text_window_t1

0x78aa,	// (0x000078aa) popup_snote2_single_text_window_t2_ParamLimits

0x78aa,	// (0x000078aa) popup_snote2_single_text_window_t2

0x78f6,	// (0x000078f6) popup_snote2_single_text_window_t3_ParamLimits

0x78f6,	// (0x000078f6) popup_snote2_single_text_window_t3

0x7937,	// (0x00007937) popup_snote2_single_text_window_t4_ParamLimits

0x7937,	// (0x00007937) popup_snote2_single_text_window_t4

0x796d,	// (0x0000796d) popup_snote2_single_text_window_t5_ParamLimits

0x796d,	// (0x0000796d) popup_snote2_single_text_window_t5

0x0004,

0xad9a,	// (0x0000ad9a) popup_snote2_single_text_window_t_ParamLimits

0xad9a,	// (0x0000ad9a) popup_snote2_single_text_window_t

0x7998,	// (0x00007998) popup_snote2_single_graphic_window_g1_ParamLimits

0x7998,	// (0x00007998) popup_snote2_single_graphic_window_g1

0x79c0,	// (0x000079c0) popup_snote2_single_graphic_window_g2_ParamLimits

0x79c0,	// (0x000079c0) popup_snote2_single_graphic_window_g2

0x0001,

0xada5,	// (0x0000ada5) popup_snote2_single_graphic_window_g_ParamLimits

0xada5,	// (0x0000ada5) popup_snote2_single_graphic_window_g

0x79e8,	// (0x000079e8) popup_snote2_single_graphic_window_t1_ParamLimits

0x79e8,	// (0x000079e8) popup_snote2_single_graphic_window_t1

0x7a34,	// (0x00007a34) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a34,	// (0x00007a34) popup_snote2_single_graphic_window_t2

0x78f6,	// (0x000078f6) popup_snote2_single_graphic_window_t3_ParamLimits

0x78f6,	// (0x000078f6) popup_snote2_single_graphic_window_t3

0x7937,	// (0x00007937) popup_snote2_single_graphic_window_t4_ParamLimits

0x7937,	// (0x00007937) popup_snote2_single_graphic_window_t4

0x796d,	// (0x0000796d) popup_snote2_single_graphic_window_t5_ParamLimits

0x796d,	// (0x0000796d) popup_snote2_single_graphic_window_t5

0x0004,

0xadaa,	// (0x0000adaa) popup_snote2_single_graphic_window_t_ParamLimits

0xadaa,	// (0x0000adaa) popup_snote2_single_graphic_window_t

0x5e1f,	// (0x00005e1f) clock_nsta_pane_cp2_t1

0x5e1f,	// (0x00005e1f) clock_nsta_pane_cp2_t2

0x0001,

0xabd1,	// (0x0000abd1) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xa7ae,	// (0x0000a7ae) form_field_data_wide_pane_g_ParamLimits

0xa7ae,	// (0x0000a7ae) form_field_data_wide_pane_g

0xd105,	// (0x0000d105) grid_touch_3_pane_ParamLimits

0xd105,	// (0x0000d105) grid_touch_3_pane

0xd5b6,	// (0x0000d5b6) cell_touch_3_pane_ParamLimits

0xd5b6,	// (0x0000d5b6) cell_touch_3_pane

0x6454,	// (0x00006454) cell_touch_3_pane_g1

0x6454,	// (0x00006454) cell_touch_3_pane_g2

0x0001,

0xac56,	// (0x0000ac56) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7aaf,	// (0x00007aaf) button_value_adjust_pane_cp7

0x7ab7,	// (0x00007ab7) query_popup_pane_cp3

0x1e2b,	// (0x00001e2b) bg_popup_sub_pane_cp22_ParamLimits

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2

0x1e5c,	// (0x00001e5c) popup_side_volume_key_window_g2

0x1e6b,	// (0x00001e6b) popup_side_volume_key_window_g3

0x0002,

0xa840,	// (0x0000a840) popup_side_volume_key_window_g

0x1e88,	// (0x00001e88) popup_side_volume_key_window_t2

0x0001,

0xa847,	// (0x0000a847) popup_side_volume_key_window_t

0x2312,	// (0x00002312) popup_side_volume_key_window_ParamLimits

0xb5e4,	// (0x0000b5e4) list_double_graphic_pane_g4_ParamLimits

0xb5e4,	// (0x0000b5e4) list_double_graphic_pane_g4

0xcfa7,	// (0x0000cfa7) list_single_2heading_msg_pane_ParamLimits

0xcfa7,	// (0x0000cfa7) list_single_2heading_msg_pane

0xd5ff,	// (0x0000d5ff) list_single_2heading_msg_pane_g1_ParamLimits

0xd5ff,	// (0x0000d5ff) list_single_2heading_msg_pane_g1

0xd60b,	// (0x0000d60b) list_single_2heading_msg_pane_g2_ParamLimits

0xd60b,	// (0x0000d60b) list_single_2heading_msg_pane_g2

0xd61e,	// (0x0000d61e) list_single_2heading_msg_pane_g3_ParamLimits

0xd61e,	// (0x0000d61e) list_single_2heading_msg_pane_g3

0xd62a,	// (0x0000d62a) list_single_2heading_msg_pane_g4_ParamLimits

0xd62a,	// (0x0000d62a) list_single_2heading_msg_pane_g4

0x0003,

0xedcf,	// (0x0000edcf) list_single_2heading_msg_pane_g_ParamLimits

0xedcf,	// (0x0000edcf) list_single_2heading_msg_pane_g

0xd642,	// (0x0000d642) list_single_2heading_msg_pane_t1_ParamLimits

0xd642,	// (0x0000d642) list_single_2heading_msg_pane_t1

0xd66a,	// (0x0000d66a) list_single_2heading_msg_pane_t2_ParamLimits

0xd66a,	// (0x0000d66a) list_single_2heading_msg_pane_t2

0xd6d5,	// (0x0000d6d5) list_single_2heading_msg_pane_t3_ParamLimits

0xd6d5,	// (0x0000d6d5) list_single_2heading_msg_pane_t3

0x7bab,	// (0x00007bab) list_single_2heading_msg_pane_t4_ParamLimits

0x7bab,	// (0x00007bab) list_single_2heading_msg_pane_t4

0x0003,

0xedd8,	// (0x0000edd8) list_single_2heading_msg_pane_t_ParamLimits

0xedd8,	// (0x0000edd8) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x1899,	// (0x00001899) title_pane_stacon_g3_ParamLimits

0x1899,	// (0x00001899) title_pane_stacon_g3

0x75bc,	// (0x000075bc) list_single_2graphic_im_pane_g4_ParamLimits

0x75bc,	// (0x000075bc) list_single_2graphic_im_pane_g4

0x4a07,	// (0x00004a07) popup_side_volume_key_window_cp

0x5496,	// (0x00005496) main_idle_act2_pane_t1

0x3660,	// (0x00003660) toolbar_button_pane_g10

0xb4fb,	// (0x0000b4fb) popup_toolbar_window_cp1

0x5e10,	// (0x00005e10) clock_nsta_pane_cp_t1

0x5e10,	// (0x00005e10) clock_nsta_pane_cp_t2

0x0001,

0xabcc,	// (0x0000abcc) clock_nsta_pane_cp_t

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2_ParamLimits

0x1e50,	// (0x00001e50) popup_side_volume_key_window_g1_ParamLimits

0x1e5c,	// (0x00001e5c) popup_side_volume_key_window_g2_ParamLimits

0x1e6b,	// (0x00001e6b) popup_side_volume_key_window_g3_ParamLimits

0xa840,	// (0x0000a840) popup_side_volume_key_window_g_ParamLimits

0x64d2,	// (0x000064d2) fep_hwr_aid_pane

0x6579,	// (0x00006579) bg_fep_hwr_top_pane_g4_ParamLimits

0x6599,	// (0x00006599) fep_hwr_top_pane_g1_ParamLimits

0x65ab,	// (0x000065ab) fep_hwr_top_pane_g2_ParamLimits

0x65bd,	// (0x000065bd) fep_hwr_top_pane_g3_ParamLimits

0xac21,	// (0x0000ac21) fep_hwr_top_pane_g_ParamLimits

0x65d2,	// (0x000065d2) fep_hwr_top_text_pane_ParamLimits

0x47c8,	// (0x000047c8) aid_touch_tab_arrow_arrow_2

0x47d1,	// (0x000047d1) aid_touch_tab_arrow_left_2

0x64e6,	// (0x000064e6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x651d,	// (0x0000651d) fep_hwr_prediction_pane

0x6851,	// (0x00006851) fep_vkb_prediction_pane

0xd373,	// (0x0000d373) fep_vkb_side_pane_g3_ParamLimits

0xd373,	// (0x0000d373) fep_vkb_side_pane_g3

0x6901,	// (0x00006901) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6fc1,	// (0x00006fc1) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6fce,	// (0x00006fce) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xaccb,	// (0x0000accb) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7bd0,	// (0x00007bd0) fep_hwr_prediction_pane_g1

0x7bda,	// (0x00007bda) fep_hwr_prediction_pane_g2

0x7be2,	// (0x00007be2) fep_hwr_prediction_pane_g3

0x7bea,	// (0x00007bea) fep_hwr_prediction_pane_g4

0x0003,

0xadc7,	// (0x0000adc7) fep_hwr_prediction_pane_g

0x7bd0,	// (0x00007bd0) fep_vkb_prediction_pane_g1

0x7bf2,	// (0x00007bf2) fep_vkb_prediction_pane_g2

0x7bfa,	// (0x00007bfa) fep_vkb_prediction_pane_g3

0x7c02,	// (0x00007c02) fep_vkb_prediction_pane_g4

0x0003,

0xadd0,	// (0x0000add0) fep_vkb_prediction_pane_g

0x4d72,	// (0x00004d72) slider_set_pane_g3

0x4d86,	// (0x00004d86) slider_set_pane_g4

0x4d9e,	// (0x00004d9e) slider_set_pane_g5

0x4d72,	// (0x00004d72) slider_set_pane_g6

0x4db4,	// (0x00004db4) slider_set_pane_g7

0x4f60,	// (0x00004f60) slider_form_pane_g3

0x4f69,	// (0x00004f69) slider_form_pane_g4

0x4f71,	// (0x00004f71) slider_form_pane_g5

0x4f60,	// (0x00004f60) slider_form_pane_g6

0xcf4a,	// (0x0000cf4a) slider_form_pane_g7

0x577b,	// (0x0000577b) slider_set_pane_vc_g3

0x5784,	// (0x00005784) slider_set_pane_vc_g4

0x578d,	// (0x0000578d) slider_set_pane_vc_g5

0x577b,	// (0x0000577b) slider_set_pane_vc_g6

0x5796,	// (0x00005796) slider_set_pane_vc_g7

0x577b,	// (0x0000577b) slider_form_pane_vc_g1

0x5784,	// (0x00005784) slider_form_pane_vc_g2

0x578d,	// (0x0000578d) slider_form_pane_vc_g3

0x577b,	// (0x0000577b) slider_form_pane_vc_g4

0x5b48,	// (0x00005b48) slider_form_pane_vc_g5

0x0004,

0xabb2,	// (0x0000abb2) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c0a,	// (0x00007c0a) ai3_links_pane

0xd743,	// (0x0000d743) popup_ai3_data_window_ParamLimits

0xd743,	// (0x0000d743) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xd75b,	// (0x0000d75b) cell_ai3_links_pane_ParamLimits

0xd75b,	// (0x0000d75b) cell_ai3_links_pane

0x7c43,	// (0x00007c43) bg_popup_sub_pane_cp11

0x7c50,	// (0x00007c50) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7c75,	// (0x00007c75) heading_ai3_data_pane

0x7c7d,	// (0x00007c7d) list_ai3_gene_pane

0x7c89,	// (0x00007c89) popup_ai3_data_window_g1

0x7c91,	// (0x00007c91) heading_ai3_data_pane_g1

0x7c99,	// (0x00007c99) heading_ai3_data_pane_t1

0x7ca7,	// (0x00007ca7) list_double_ai3_gene_pane_ParamLimits

0x7ca7,	// (0x00007ca7) list_double_ai3_gene_pane

0x7cb4,	// (0x00007cb4) list_single_ai3_gene_pane_ParamLimits

0x7cb4,	// (0x00007cb4) list_single_ai3_gene_pane

0x6419,	// (0x00006419) list_highlight_pane_cp7_ParamLimits

0x6419,	// (0x00006419) list_highlight_pane_cp7

0x7cc1,	// (0x00007cc1) list_single_a13_gene_pane_t1_ParamLimits

0x7cc1,	// (0x00007cc1) list_single_a13_gene_pane_t1

0x7cd8,	// (0x00007cd8) list_single_ai3_gene_pane_g1

0x7ce1,	// (0x00007ce1) list_single_ai3_gene_pane_g2

0x0001,

0xadd9,	// (0x0000add9) list_single_ai3_gene_pane_g

0x7ce9,	// (0x00007ce9) list_double_ai3_gene_pane_g1_ParamLimits

0x7ce9,	// (0x00007ce9) list_double_ai3_gene_pane_g1

0x7cf5,	// (0x00007cf5) list_double_ai3_gene_pane_t1_ParamLimits

0x7cf5,	// (0x00007cf5) list_double_ai3_gene_pane_t1

0x7d11,	// (0x00007d11) list_double_ai3_gene_pane_t2_ParamLimits

0x7d11,	// (0x00007d11) list_double_ai3_gene_pane_t2

0x7d26,	// (0x00007d26) list_double_ai3_gene_pane_t3_ParamLimits

0x7d26,	// (0x00007d26) list_double_ai3_gene_pane_t3

0x0002,

0xadde,	// (0x0000adde) list_double_ai3_gene_pane_t_ParamLimits

0xadde,	// (0x0000adde) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7ac8,	// (0x00007ac8) aid_size_min_col_2

0xd5e9,	// (0x0000d5e9) aid_size_min_msg_ParamLimits

0xd5e9,	// (0x0000d5e9) aid_size_min_msg

0xd387,	// (0x0000d387) fep_vkb_top_text_pane_g2_ParamLimits

0xd387,	// (0x0000d387) fep_vkb_top_text_pane_g2

0x0001,

0xedac,	// (0x0000edac) fep_vkb_top_text_pane_g_ParamLimits

0xedac,	// (0x0000edac) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7d43,	// (0x00007d43) grid_hc_apps_pane_ParamLimits

0x7d43,	// (0x00007d43) grid_hc_apps_pane

0x7d52,	// (0x00007d52) list_hc_apps_pane

0x7d5a,	// (0x00007d5a) scroll_pane_cp37_ParamLimits

0x7d5a,	// (0x00007d5a) scroll_pane_cp37

0xd775,	// (0x0000d775) cell_hc_apps_pane_ParamLimits

0xd775,	// (0x0000d775) cell_hc_apps_pane

0xd835,	// (0x0000d835) cell_hc_apps_pane_g1_ParamLimits

0xd835,	// (0x0000d835) cell_hc_apps_pane_g1

0x7e47,	// (0x00007e47) cell_hc_apps_pane_g2_ParamLimits

0x7e47,	// (0x00007e47) cell_hc_apps_pane_g2

0x7e63,	// (0x00007e63) cell_hc_apps_pane_g3_ParamLimits

0x7e63,	// (0x00007e63) cell_hc_apps_pane_g3

0x0002,

0xede1,	// (0x0000ede1) cell_hc_apps_pane_g_ParamLimits

0xede1,	// (0x0000ede1) cell_hc_apps_pane_g

0xd862,	// (0x0000d862) cell_hc_apps_pane_t1_ParamLimits

0xd862,	// (0x0000d862) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xd8a0,	// (0x0000d8a0) list_single_hc_apps_pane_ParamLimits

0xd8a0,	// (0x0000d8a0) list_single_hc_apps_pane

0x7f38,	// (0x00007f38) list_single_hc_apps_pane_g1

0x7f51,	// (0x00007f51) list_single_hc_apps_pane_g2

0x0001,

0xadec,	// (0x0000adec) list_single_hc_apps_pane_g

0x7f6a,	// (0x00007f6a) list_single_hc_apps_pane_g2_copy1

0x7f86,	// (0x00007f86) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xa696,	// (0x0000a696) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2949,	// (0x00002949) control_pane_g5_ParamLimits

0x2949,	// (0x00002949) control_pane_g5

0x4d59,	// (0x00004d59) slider_set_pane_g1_ParamLimits

0x4d66,	// (0x00004d66) slider_set_pane_g2_ParamLimits

0x4d72,	// (0x00004d72) slider_set_pane_g3_ParamLimits

0x4d86,	// (0x00004d86) slider_set_pane_g4_ParamLimits

0x4d9e,	// (0x00004d9e) slider_set_pane_g5_ParamLimits

0x4d72,	// (0x00004d72) slider_set_pane_g6_ParamLimits

0x4db4,	// (0x00004db4) slider_set_pane_g7_ParamLimits

0xaa85,	// (0x0000aa85) slider_set_pane_g_ParamLimits

0x23f3,	// (0x000023f3) navi_icon_text_pane_ParamLimits

0xc58b,	// (0x0000c58b) aid_fill_nsta_2_ParamLimits

0xc5bf,	// (0x0000c5bf) aid_touch_tab_arrow_left_ParamLimits

0xc5d5,	// (0x0000c5d5) aid_touch_tab_arrow_right_ParamLimits

0xc670,	// (0x0000c670) clock_nsta_pane_ParamLimits

0xcce0,	// (0x0000cce0) navi_icon_pane_g1_ParamLimits

0xccec,	// (0x0000ccec) navi_text_pane_t1_ParamLimits

0xd1d1,	// (0x0000d1d1) navi_icon_text_pane_g1_ParamLimits

0xd1dd,	// (0x0000d1dd) navi_icon_text_pane_t1_ParamLimits

0x7f38,	// (0x00007f38) list_single_hc_apps_pane_g1_ParamLimits

0x7f51,	// (0x00007f51) list_single_hc_apps_pane_g2_ParamLimits

0xadec,	// (0x0000adec) list_single_hc_apps_pane_g_ParamLimits

0x7f6a,	// (0x00007f6a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f86,	// (0x00007f86) list_single_hc_apps_pane_t1_ParamLimits

0xb14a,	// (0x0000b14a) popup_toolbar2_fixed_window_ParamLimits

0xb14a,	// (0x0000b14a) popup_toolbar2_fixed_window

0xc4f4,	// (0x0000c4f4) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7fb4,	// (0x00007fb4) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7fb4,	// (0x00007fb4) grid_toolbar2_fixed_pane

0xd8d3,	// (0x0000d8d3) cell_toolbar2_fixed_pane_ParamLimits

0xd8d3,	// (0x0000d8d3) cell_toolbar2_fixed_pane

0xd8ee,	// (0x0000d8ee) cell_toolbar2_fixed_pane_g1

0x7fd6,	// (0x00007fd6) toolbar2_fixed_button_pane

0x3618,	// (0x00003618) toolbar2_fixed_button_pane_g1

0x3620,	// (0x00003620) toolbar2_fixed_button_pane_g2

0x3628,	// (0x00003628) toolbar2_fixed_button_pane_g3

0x3630,	// (0x00003630) toolbar2_fixed_button_pane_g4

0x3638,	// (0x00003638) toolbar2_fixed_button_pane_g5

0x3640,	// (0x00003640) toolbar2_fixed_button_pane_g6

0x3648,	// (0x00003648) toolbar2_fixed_button_pane_g7

0x3650,	// (0x00003650) toolbar2_fixed_button_pane_g8

0x3658,	// (0x00003658) toolbar2_fixed_button_pane_g9

0x0008,

0xa987,	// (0x0000a987) toolbar2_fixed_button_pane_g

0x7fde,	// (0x00007fde) cell_toolbar2_float_pane_ParamLimits

0x7fde,	// (0x00007fde) cell_toolbar2_float_pane

0x7fef,	// (0x00007fef) cell_toolbar2_float_pane_g1

0x7fd6,	// (0x00007fd6) toolbar2_fixed_button_pane_cp

0xd33a,	// (0x0000d33a) fep_vkb_accented_list_pane_ParamLimits

0xd33a,	// (0x0000d33a) fep_vkb_accented_list_pane

0x6c50,	// (0x00006c50) bg_popup_fep_shadow_pane_g9

0x2575,	// (0x00002575) bg_popup_fep_shadow_pane_cp3

0x1629,	// (0x00001629) list_accented_list_pane

0x7ff8,	// (0x00007ff8) list_single_accented_list_pane_ParamLimits

0x7ff8,	// (0x00007ff8) list_single_accented_list_pane

0x2575,	// (0x00002575) list_highlight_pane_cp10

0x8009,	// (0x00008009) list_single_accented_list_pane_t1

0xc41e,	// (0x0000c41e) popup_slider_window_ParamLimits

0xc41e,	// (0x0000c41e) popup_slider_window

0x7abf,	// (0x00007abf) aid_indentation_list_msg

0xd9e7,	// (0x0000d9e7) bg_popup_window_pane_cp19

0x812d,	// (0x0000812d) popup_slider_window_g1

0x8149,	// (0x00008149) popup_slider_window_g2

0x8165,	// (0x00008165) popup_slider_window_g3

0x0005,

0xede8,	// (0x0000ede8) popup_slider_window_g

0x81c1,	// (0x000081c1) popup_slider_window_t1

0x8235,	// (0x00008235) small_volume_slider_vertical_pane

0x6454,	// (0x00006454) small_volume_slider_vertical_pane_g1

0x6454,	// (0x00006454) small_volume_slider_vertical_pane_g2

0x8251,	// (0x00008251) small_volume_slider_vertical_pane_g3

0x0002,

0xae03,	// (0x0000ae03) small_volume_slider_vertical_pane_g

0xb0b8,	// (0x0000b0b8) area_side_right_pane_ParamLimits

0xb0b8,	// (0x0000b0b8) area_side_right_pane

0xda9f,	// (0x0000da9f) aid_size_side_button_ParamLimits

0xda9f,	// (0x0000da9f) aid_size_side_button

0xdab8,	// (0x0000dab8) grid_sctrl_middle_pane_ParamLimits

0xdab8,	// (0x0000dab8) grid_sctrl_middle_pane

0x828e,	// (0x0000828e) sctrl_sk_bottom_pane

0x829f,	// (0x0000829f) sctrl_sk_top_pane

0x82b1,	// (0x000082b1) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x82be,	// (0x000082be) sctrl_sk_top_pane_g1

0x82cb,	// (0x000082cb) sctrl_sk_top_pane_t1

0x82b1,	// (0x000082b1) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x82e6,	// (0x000082e6) sctrl_sk_bottom_pane_g1

0x82cb,	// (0x000082cb) sctrl_sk_bottom_pane_t1

0xdad2,	// (0x0000dad2) cell_sctrl_middle_pane_ParamLimits

0xdad2,	// (0x0000dad2) cell_sctrl_middle_pane

0xdae3,	// (0x0000dae3) aid_touch_sctrl_middle_ParamLimits

0xdae3,	// (0x0000dae3) aid_touch_sctrl_middle

0xdaf0,	// (0x0000daf0) bg_sctrl_middle_pane_ParamLimits

0xdaf0,	// (0x0000daf0) bg_sctrl_middle_pane

0x83af,	// (0x000083af) cell_sctrl_middle_pane_g1_ParamLimits

0x83af,	// (0x000083af) cell_sctrl_middle_pane_g1

0xdafe,	// (0x0000dafe) cell_sctrl_middle_pane_g2_ParamLimits

0xdafe,	// (0x0000dafe) cell_sctrl_middle_pane_g2

0x0001,

0xedf5,	// (0x0000edf5) cell_sctrl_middle_pane_g_ParamLimits

0xedf5,	// (0x0000edf5) cell_sctrl_middle_pane_g

0x3618,	// (0x00003618) bg_sctrl_middle_pane_g1

0x3620,	// (0x00003620) bg_sctrl_middle_pane_g2

0x3628,	// (0x00003628) bg_sctrl_middle_pane_g3

0x3630,	// (0x00003630) bg_sctrl_middle_pane_g4

0x3638,	// (0x00003638) bg_sctrl_middle_pane_g5

0x3640,	// (0x00003640) bg_sctrl_middle_pane_g6

0x3648,	// (0x00003648) bg_sctrl_middle_pane_g7

0x3650,	// (0x00003650) bg_sctrl_middle_pane_g8

0x0007,

0xae14,	// (0x0000ae14) bg_sctrl_middle_pane_g

0x3658,	// (0x00003658) bg_sctrl_middle_pane_g8_copy1

0x3618,	// (0x00003618) bg_sctrl_sk_pane_g1

0x3620,	// (0x00003620) bg_sctrl_sk_pane_g2

0x3628,	// (0x00003628) bg_sctrl_sk_pane_g3

0x0008,

0xa987,	// (0x0000a987) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x3630,	// (0x00003630) bg_sctrl_sk_pane_g4

0x3638,	// (0x00003638) bg_sctrl_sk_pane_g5

0x3640,	// (0x00003640) bg_sctrl_sk_pane_g6

0x3648,	// (0x00003648) bg_sctrl_sk_pane_g7

0x3650,	// (0x00003650) bg_sctrl_sk_pane_g8

0x3658,	// (0x00003658) bg_sctrl_sk_pane_g9

0x2b96,	// (0x00002b96) popup_fep_china_hwr2_fs_candidate_window

0xbf58,	// (0x0000bf58) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf58,	// (0x0000bf58) popup_fep_china_hwr2_fs_control_window

0x6901,	// (0x00006901) sctrl_sk_top_pane_g2

0x0001,

0xae0a,	// (0x0000ae0a) sctrl_sk_top_pane_g

0xdb0a,	// (0x0000db0a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb0a,	// (0x0000db0a) aid_fep_china_hwr2_fs_cell

0xdb1e,	// (0x0000db1e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb1e,	// (0x0000db1e) bg_popup_fep_shadow_pane_cp4

0xdb35,	// (0x0000db35) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb35,	// (0x0000db35) bg_popup_fep_shadow_pane_cp5

0xdb47,	// (0x0000db47) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb47,	// (0x0000db47) popup_fep_china_hwr2_fs_control_bar_grid

0xdb5b,	// (0x0000db5b) popup_fep_china_hwr2_fs_control_funtion_grid

0x8383,	// (0x00008383) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x838d,	// (0x0000838d) popup_fep_china_hwr2_fs_candidate_grid

0xdb63,	// (0x0000db63) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb63,	// (0x0000db63) cell_fep_china_hwr2_fs_funtion_grid

0x6454,	// (0x00006454) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x83af,	// (0x000083af) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x83af,	// (0x000083af) cell_fep_china_hwr2_fs_funtion_grid_g1

0x83bd,	// (0x000083bd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x83bd,	// (0x000083bd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xae25,	// (0x0000ae25) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xae25,	// (0x0000ae25) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb7b,	// (0x0000db7b) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb7b,	// (0x0000db7b) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb90,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb90,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xedfa,	// (0x0000edfa) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xedfa,	// (0x0000edfa) cell_fep_china_hwr2_fs_funtion_grid_t

0x8404,	// (0x00008404) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x840c,	// (0x0000840c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8414,	// (0x00008414) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xae2f,	// (0x0000ae2f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x841c,	// (0x0000841c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x841c,	// (0x0000841c) cell_fep_china_hwr2_fs_candidate_grid

0x8435,	// (0x00008435) popup_fep_china_hwr2_fs_candidate_grid_g20

0x843d,	// (0x0000843d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6454,	// (0x00006454) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6454,	// (0x00006454) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xac56,	// (0x0000ac56) cell_fep_china_hwr2_fs_candidate_grid_g

0x8445,	// (0x00008445) cell_fep_china_hwr2_fs_candidate_grid_t1

0x317d,	// (0x0000317d) clock_nsta_pane_cp_24_ParamLimits

0x317d,	// (0x0000317d) clock_nsta_pane_cp_24

0x31fb,	// (0x000031fb) indicator_nsta_pane_cp_24_ParamLimits

0x31fb,	// (0x000031fb) indicator_nsta_pane_cp_24

0x460f,	// (0x0000460f) heading_pane_g1

0x0001,

0xa9ec,	// (0x0000a9ec) heading_pane_g

0x5225,	// (0x00005225) grid_sct_catagory_button_pane

0x5257,	// (0x00005257) scroll_pane_cp5_ParamLimits

0x5fc7,	// (0x00005fc7) button_value_adjust_pane_cp5_ParamLimits

0x5fc7,	// (0x00005fc7) button_value_adjust_pane_cp5

0x60bf,	// (0x000060bf) form2_midp_time_pane_ParamLimits

0x8453,	// (0x00008453) cell_sct_catagory_button_pane_ParamLimits

0x8453,	// (0x00008453) cell_sct_catagory_button_pane

0x6419,	// (0x00006419) bg_button_pane_cp01_ParamLimits

0x6419,	// (0x00006419) bg_button_pane_cp01

0x6454,	// (0x00006454) cell_sct_catagory_button_pane_g1

0xc497,	// (0x0000c497) popup_tb_extension_window

0xdbac,	// (0x0000dbac) aid_size_cell_ext_ParamLimits

0xdbac,	// (0x0000dbac) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xdbd2,	// (0x0000dbd2) grid_tb_ext_pane_ParamLimits

0xdbd2,	// (0x0000dbd2) grid_tb_ext_pane

0xdc12,	// (0x0000dc12) cell_tb_ext_pane_ParamLimits

0xdc12,	// (0x0000dc12) cell_tb_ext_pane

0xdc3a,	// (0x0000dc3a) cell_tb_ext_pane_g1_ParamLimits

0xdc3a,	// (0x0000dc3a) cell_tb_ext_pane_g1

0x84eb,	// (0x000084eb) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x8506,	// (0x00008506) list_uniindi_pane

0x8512,	// (0x00008512) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x8531,	// (0x00008531) uniindi_top_pane_g1

0x8547,	// (0x00008547) uniindi_top_pane_g2

0x0003,

0xae36,	// (0x0000ae36) uniindi_top_pane_g

0x8571,	// (0x00008571) uniindi_top_pane_t1

0x859b,	// (0x0000859b) list_single_uniindi_pane_ParamLimits

0x859b,	// (0x0000859b) list_single_uniindi_pane

0x6454,	// (0x00006454) bg_uniindi_top_pane_g1

0x85ad,	// (0x000085ad) list_single_uniindi_pane_g1

0x85c0,	// (0x000085c0) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x85e5,	// (0x000085e5) bg_sctrl_sk_pane_cp1

0x85ee,	// (0x000085ee) bg_sctrl_sk_pane_cp2

0x85f7,	// (0x000085f7) control_bg_pane_g1

0x8600,	// (0x00008600) control_bg_pane_g2

0x0001,

0xae3f,	// (0x0000ae3f) control_bg_pane_g

0x5dd4,	// (0x00005dd4) cell_indicator_nsta_pane_g1_ParamLimits

0xd138,	// (0x0000d138) cell_indicator_nsta_pane_g2_ParamLimits

0xed77,	// (0x0000ed77) cell_indicator_nsta_pane_g_ParamLimits

0x6143,	// (0x00006143) form2_midp_time_pane_t1_ParamLimits

0x64c4,	// (0x000064c4) main_idle_act4_pane_ParamLimits

0x64c4,	// (0x000064c4) main_idle_act4_pane

0xc497,	// (0x0000c497) popup_tb_extension_window_ParamLimits

0xdbf9,	// (0x0000dbf9) tb_ext_find_pane_ParamLimits

0xdbf9,	// (0x0000dbf9) tb_ext_find_pane

0x8609,	// (0x00008609) ai_gene_pane_1_cp1

0x26be,	// (0x000026be) ai_gene_pane_2_cp1

0x8611,	// (0x00008611) list_single_idle_plugin_calendar_pane

0x861a,	// (0x0000861a) list_single_idle_plugin_notification_pane

0x8623,	// (0x00008623) list_single_idle_plugin_player_pane

0xdc57,	// (0x0000dc57) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc57,	// (0x0000dc57) list_single_idle_plugin_shortcut_pane

0xdc7f,	// (0x0000dc7f) main_idle_act4_pane_t1

0xdc95,	// (0x0000dc95) main_idle_act4_pane_t2

0x0001,

0xedff,	// (0x0000edff) main_idle_act4_pane_t

0xdcad,	// (0x0000dcad) middle_sk_idle_act4_pane_ParamLimits

0xdcad,	// (0x0000dcad) middle_sk_idle_act4_pane

0xdcc9,	// (0x0000dcc9) popup_clock_digital_analogue_window_cp2

0xdcf0,	// (0x0000dcf0) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcf0,	// (0x0000dcf0) shortcut_wheel_idle_act4_pane

0x6454,	// (0x00006454) shortcut_wheel_idle_act4_pane_g1

0x6454,	// (0x00006454) shortcut_wheel_idle_act4_pane_g2

0x6454,	// (0x00006454) shortcut_wheel_idle_act4_pane_g3

0x6454,	// (0x00006454) shortcut_wheel_idle_act4_pane_g4

0x6454,	// (0x00006454) shortcut_wheel_idle_act4_pane_g5

0x86b6,	// (0x000086b6) shortcut_wheel_idle_act4_pane_g6

0x86be,	// (0x000086be) shortcut_wheel_idle_act4_pane_g7

0x86c6,	// (0x000086c6) shortcut_wheel_idle_act4_pane_g8

0x86ce,	// (0x000086ce) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xae49,	// (0x0000ae49) shortcut_wheel_idle_act4_pane_g

0x6579,	// (0x00006579) middle_sk_idle_act4_pane_g1_ParamLimits

0x6579,	// (0x00006579) middle_sk_idle_act4_pane_g1

0xdd6d,	// (0x0000dd6d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd6d,	// (0x0000dd6d) middle_sk_idle_act4_pane_g2

0x0001,

0xee14,	// (0x0000ee14) middle_sk_idle_act4_pane_g_ParamLimits

0xee14,	// (0x0000ee14) middle_sk_idle_act4_pane_g

0xdd85,	// (0x0000dd85) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd85,	// (0x0000dd85) middle_sk_idle_act4_pane_t1

0xddb4,	// (0x0000ddb4) grid_ai_shortcut_pane_ParamLimits

0xddb4,	// (0x0000ddb4) grid_ai_shortcut_pane

0xddd1,	// (0x0000ddd1) list_highlight_pane_cp16_ParamLimits

0xddd1,	// (0x0000ddd1) list_highlight_pane_cp16

0xddde,	// (0x0000ddde) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddde,	// (0x0000ddde) list_single_idle_plugin_shortcut_pane_g1

0xddea,	// (0x0000ddea) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddea,	// (0x0000ddea) list_single_idle_plugin_shortcut_pane_g2

0xde06,	// (0x0000de06) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde06,	// (0x0000de06) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xee19,	// (0x0000ee19) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xee19,	// (0x0000ee19) list_single_idle_plugin_shortcut_pane_g

0xde1b,	// (0x0000de1b) cell_ai_shortcut_pane_ParamLimits

0xde1b,	// (0x0000de1b) cell_ai_shortcut_pane

0xde31,	// (0x0000de31) cell_ai_shortcut_pane_g1_ParamLimits

0xde31,	// (0x0000de31) cell_ai_shortcut_pane_g1

0x8609,	// (0x00008609) ai_gene_pane_1_cp2

0x87fb,	// (0x000087fb) ai_gene_pane_2_cp2

0x8803,	// (0x00008803) list_highlight_pane_cp15

0x880c,	// (0x0000880c) list_single_idle_plugin_calendar_pane_g1

0x8803,	// (0x00008803) list_highlight_pane_cp17

0x8814,	// (0x00008814) list_single_idle_plugin_calendar_pane_g1_copy1

0x881c,	// (0x0000881c) list_single_idle_plugin_player_pane_g1

0x5536,	// (0x00005536) list_single_idle_plugin_player_pane_g2

0x0001,

0xae78,	// (0x0000ae78) list_single_idle_plugin_player_pane_g

0x8824,	// (0x00008824) list_single_idle_plugin_player_pane_t1

0x8832,	// (0x00008832) list_single_idle_plugin_player_pane_t2

0x8840,	// (0x00008840) list_single_idle_plugin_player_pane_t3

0x884e,	// (0x0000884e) list_single_idle_plugin_player_pane_t4

0x0003,

0xae7d,	// (0x0000ae7d) list_single_idle_plugin_player_pane_t

0x885c,	// (0x0000885c) wait_bar_pane_cp15

0x8864,	// (0x00008864) grid_ai_notification_pane

0x5536,	// (0x00005536) list_single_idle_plugin_notification_pane_g1

0xde53,	// (0x0000de53) cell_ai_notification_pane_ParamLimits

0xde53,	// (0x0000de53) cell_ai_notification_pane

0x887a,	// (0x0000887a) cell_ai_notification_pane_g1

0x8882,	// (0x00008882) cell_ai_notification_pane_t1

0xde60,	// (0x0000de60) tb_ext_find_button_pane

0xde68,	// (0x0000de68) tb_ext_find_pane_g1

0xde70,	// (0x0000de70) tb_ext_find_pane_t1

0x1cf0,	// (0x00001cf0) tb_ext_find_button_pane_g1

0x88ae,	// (0x000088ae) tb_ext_find_button_pane_g2

0x0001,

0xae86,	// (0x0000ae86) tb_ext_find_button_pane_g

0xdc7f,	// (0x0000dc7f) main_idle_act4_pane_t1_ParamLimits

0xdc95,	// (0x0000dc95) main_idle_act4_pane_t2_ParamLimits

0xedff,	// (0x0000edff) main_idle_act4_pane_t_ParamLimits

0xdcc9,	// (0x0000dcc9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdce0,	// (0x0000dce0) sat_plugin_idle_act4_pane_ParamLimits

0xdce0,	// (0x0000dce0) sat_plugin_idle_act4_pane

0xde7e,	// (0x0000de7e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde7e,	// (0x0000de7e) sat_plugin_idle_act4_pane_t1

0xde96,	// (0x0000de96) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde96,	// (0x0000de96) sat_plugin_idle_act4_pane_t2

0xdeae,	// (0x0000deae) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdeae,	// (0x0000deae) sat_plugin_idle_act4_pane_t3

0xdec6,	// (0x0000dec6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdec6,	// (0x0000dec6) sat_plugin_idle_act4_pane_t4

0x0003,

0xee20,	// (0x0000ee20) sat_plugin_idle_act4_pane_t_ParamLimits

0xee20,	// (0x0000ee20) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x8903,	// (0x00008903) popup_battery_window_g1_ParamLimits

0x8903,	// (0x00008903) popup_battery_window_g1

0x890f,	// (0x0000890f) popup_battery_window_t1_ParamLimits

0x890f,	// (0x0000890f) popup_battery_window_t1

0x8921,	// (0x00008921) popup_battery_window_t2_ParamLimits

0x8921,	// (0x00008921) popup_battery_window_t2

0x0001,

0xae94,	// (0x0000ae94) popup_battery_window_t_ParamLimits

0xae94,	// (0x0000ae94) popup_battery_window_t

0xbc9d,	// (0x0000bc9d) midp_canvas_pane_ParamLimits

0xbcfa,	// (0x0000bcfa) midp_keypad_pane_ParamLimits

0xbcfa,	// (0x0000bcfa) midp_keypad_pane

0x2aee,	// (0x00002aee) main_midp_pane_ParamLimits

0x5e2e,	// (0x00005e2e) signal_pane_g2_cp_ParamLimits

0xdede,	// (0x0000dede) aid_size_cell_midp_keypad_ParamLimits

0xdede,	// (0x0000dede) aid_size_cell_midp_keypad

0xdefc,	// (0x0000defc) midp_keyp_game_grid_pane_ParamLimits

0xdefc,	// (0x0000defc) midp_keyp_game_grid_pane

0xdf23,	// (0x0000df23) midp_keyp_rocker_pane_ParamLimits

0xdf23,	// (0x0000df23) midp_keyp_rocker_pane

0xdf7c,	// (0x0000df7c) midp_keyp_sk_left_pane_ParamLimits

0xdf7c,	// (0x0000df7c) midp_keyp_sk_left_pane

0xdfd0,	// (0x0000dfd0) midp_keyp_sk_right_pane_ParamLimits

0xdfd0,	// (0x0000dfd0) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe024,	// (0x0000e024) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe024,	// (0x0000e024) midp_keyp_sk_right_pane_g1

0x6454,	// (0x00006454) midp_keyp_rocker_pane_g1

0xe02d,	// (0x0000e02d) keyp_game_cell_pane_ParamLimits

0xe02d,	// (0x0000e02d) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe051,	// (0x0000e051) keyp_game_cell_pane_g1

0xb0fa,	// (0x0000b0fa) popup_fep_vkb2_window_ParamLimits

0xb0fa,	// (0x0000b0fa) popup_fep_vkb2_window

0xe05a,	// (0x0000e05a) aid_size_cell_vkb2_ParamLimits

0xe05a,	// (0x0000e05a) aid_size_cell_vkb2

0xe090,	// (0x0000e090) popup_fep_vkb2_window_g1_ParamLimits

0xe090,	// (0x0000e090) popup_fep_vkb2_window_g1

0xe0d7,	// (0x0000e0d7) vkb2_area_bottom_pane_ParamLimits

0xe0d7,	// (0x0000e0d7) vkb2_area_bottom_pane

0xe12b,	// (0x0000e12b) vkb2_area_keypad_pane_ParamLimits

0xe12b,	// (0x0000e12b) vkb2_area_keypad_pane

0xe173,	// (0x0000e173) vkb2_area_top_pane_ParamLimits

0xe173,	// (0x0000e173) vkb2_area_top_pane

0xe1f9,	// (0x0000e1f9) vkb2_top_entry_pane_ParamLimits

0xe1f9,	// (0x0000e1f9) vkb2_top_entry_pane

0xe226,	// (0x0000e226) vkb2_top_grid_left_pane_ParamLimits

0xe226,	// (0x0000e226) vkb2_top_grid_left_pane

0xe246,	// (0x0000e246) vkb2_top_grid_right_pane_ParamLimits

0xe246,	// (0x0000e246) vkb2_top_grid_right_pane

0x8c9a,	// (0x00008c9a) vkb2_cell_keypad_pane_ParamLimits

0x8c9a,	// (0x00008c9a) vkb2_cell_keypad_pane

0xe28c,	// (0x0000e28c) vkb2_area_bottom_grid_pane_ParamLimits

0xe28c,	// (0x0000e28c) vkb2_area_bottom_grid_pane

0xe2b6,	// (0x0000e2b6) vkb2_area_bottom_pane_g1_ParamLimits

0xe2b6,	// (0x0000e2b6) vkb2_area_bottom_pane_g1

0xe2dc,	// (0x0000e2dc) vkb2_area_bottom_pane_g2_ParamLimits

0xe2dc,	// (0x0000e2dc) vkb2_area_bottom_pane_g2

0xe30d,	// (0x0000e30d) vkb2_area_bottom_pane_g3_ParamLimits

0xe30d,	// (0x0000e30d) vkb2_area_bottom_pane_g3

0x0002,

0xee29,	// (0x0000ee29) vkb2_area_bottom_pane_g_ParamLimits

0xee29,	// (0x0000ee29) vkb2_area_bottom_pane_g

0x8e44,	// (0x00008e44) vkb2_top_cell_left_pane_ParamLimits

0x8e44,	// (0x00008e44) vkb2_top_cell_left_pane

0xe377,	// (0x0000e377) vkb2_top_entry_pane_g1_ParamLimits

0xe377,	// (0x0000e377) vkb2_top_entry_pane_g1

0xe385,	// (0x0000e385) vkb2_top_entry_pane_t1_ParamLimits

0xe385,	// (0x0000e385) vkb2_top_entry_pane_t1

0x8eac,	// (0x00008eac) vkb2_top_entry_pane_t2_ParamLimits

0x8eac,	// (0x00008eac) vkb2_top_entry_pane_t2

0x8ede,	// (0x00008ede) vkb2_top_entry_pane_t3_ParamLimits

0x8ede,	// (0x00008ede) vkb2_top_entry_pane_t3

0x0002,

0xee30,	// (0x0000ee30) vkb2_top_entry_pane_t_ParamLimits

0xee30,	// (0x0000ee30) vkb2_top_entry_pane_t

0xe3be,	// (0x0000e3be) vkb2_top_grid_right_pane_g1_ParamLimits

0xe3be,	// (0x0000e3be) vkb2_top_grid_right_pane_g1

0x8f37,	// (0x00008f37) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f37,	// (0x00008f37) vkb2_top_grid_right_pane_g2

0x8f4f,	// (0x00008f4f) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f4f,	// (0x00008f4f) vkb2_top_grid_right_pane_g3

0xe3d4,	// (0x0000e3d4) vkb2_top_grid_right_pane_g4_ParamLimits

0xe3d4,	// (0x0000e3d4) vkb2_top_grid_right_pane_g4

0x0003,

0xee37,	// (0x0000ee37) vkb2_top_grid_right_pane_g_ParamLimits

0xee37,	// (0x0000ee37) vkb2_top_grid_right_pane_g

0x8f7d,	// (0x00008f7d) vkb2_top_cell_left_pane_g1

0x8f94,	// (0x00008f94) vkb2_cell_keypad_pane_g1_ParamLimits

0x8f94,	// (0x00008f94) vkb2_cell_keypad_pane_g1

0x8fa2,	// (0x00008fa2) vkb2_cell_keypad_pane_t1_ParamLimits

0x8fa2,	// (0x00008fa2) vkb2_cell_keypad_pane_t1

0x8fb9,	// (0x00008fb9) vkb2_cell_bottom_grid_pane_ParamLimits

0x8fb9,	// (0x00008fb9) vkb2_cell_bottom_grid_pane

0x8ff2,	// (0x00008ff2) vkb2_cell_bottom_grid_pane_g1

0xdd11,	// (0x0000dd11) aid_call2_pane_cp02

0xdd19,	// (0x0000dd19) aid_call_pane_cp02

0xdd21,	// (0x0000dd21) clock_digital_number_pane_cp10

0xdd29,	// (0x0000dd29) clock_digital_number_pane_cp11

0xdd31,	// (0x0000dd31) clock_digital_number_pane_cp12

0xdd39,	// (0x0000dd39) clock_digital_number_pane_cp13

0xdd41,	// (0x0000dd41) clock_digital_separator_pane_cp10

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g1

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g2

0xdd49,	// (0x0000dd49) popup_clock_digital_analogue_window_cp2_g3

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g4

0xdd49,	// (0x0000dd49) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xee04,	// (0x0000ee04) popup_clock_digital_analogue_window_cp2_g

0xdd51,	// (0x0000dd51) popup_clock_digital_analogue_window_cp2_t1

0xdd5f,	// (0x0000dd5f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xee0f,	// (0x0000ee0f) popup_clock_digital_analogue_window_cp2_t

0x6454,	// (0x00006454) clock_digital_number_pane_cp10_g1

0x6454,	// (0x00006454) clock_digital_number_pane_cp10_g2

0x0001,

0xac56,	// (0x0000ac56) clock_digital_number_pane_cp10_g

0x6454,	// (0x00006454) clock_digital_separator_pane_cp10_g1

0x6454,	// (0x00006454) clock_digital_separator_pane_cp10_g2

0x0001,

0xac56,	// (0x0000ac56) clock_digital_separator_pane_cp10_g

0x8553,	// (0x00008553) uniindi_top_pane_g3

0x8564,	// (0x00008564) uniindi_top_pane_g4

0x8d25,	// (0x00008d25) vkb2_row_keypad_pane_ParamLimits

0x8d25,	// (0x00008d25) vkb2_row_keypad_pane

0x9012,	// (0x00009012) vkb2_cell_t_keypad_pane_ParamLimits

0x9012,	// (0x00009012) vkb2_cell_t_keypad_pane

0x9022,	// (0x00009022) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9022,	// (0x00009022) vkb2_cell_t_keypad_pane_cp08

0x9035,	// (0x00009035) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x9035,	// (0x00009035) vkb2_cell_t_keypad_pane_cp09

0x9049,	// (0x00009049) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9049,	// (0x00009049) vkb2_cell_t_keypad_pane_cp01

0x905a,	// (0x0000905a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x905a,	// (0x0000905a) vkb2_cell_t_keypad_pane_cp02

0x906b,	// (0x0000906b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x906b,	// (0x0000906b) vkb2_cell_t_keypad_pane_cp03

0x907c,	// (0x0000907c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x907c,	// (0x0000907c) vkb2_cell_t_keypad_pane_cp04

0x908d,	// (0x0000908d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x908d,	// (0x0000908d) vkb2_cell_t_keypad_pane_cp05

0x909e,	// (0x0000909e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x909e,	// (0x0000909e) vkb2_cell_t_keypad_pane_cp06

0x90af,	// (0x000090af) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x90af,	// (0x000090af) vkb2_cell_t_keypad_pane_cp07

0x90c0,	// (0x000090c0) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x90c0,	// (0x000090c0) vkb2_cell_t_keypad_pane_cp10

0x6901,	// (0x00006901) vkb2_cell_t_keypad_pane_g1

0x90d5,	// (0x000090d5) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe3ea,	// (0x0000e3ea) aid_size_cell_graphic2_ParamLimits

0xe3ea,	// (0x0000e3ea) aid_size_cell_graphic2

0x3e3c,	// (0x00003e3c) bg_popup_window_pane_cp21_ParamLimits

0x3e3c,	// (0x00003e3c) bg_popup_window_pane_cp21

0xe41c,	// (0x0000e41c) graphic2_pages_pane_ParamLimits

0xe41c,	// (0x0000e41c) graphic2_pages_pane

0xe472,	// (0x0000e472) grid_graphic2_control_pane_ParamLimits

0xe472,	// (0x0000e472) grid_graphic2_control_pane

0xe4a6,	// (0x0000e4a6) grid_graphic2_pane_ParamLimits

0xe4a6,	// (0x0000e4a6) grid_graphic2_pane

0xe519,	// (0x0000e519) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7c7d,	// (0x00007c7d) list_ai3_gene_pane_ParamLimits

0xd9e7,	// (0x0000d9e7) bg_popup_window_pane_cp19_ParamLimits

0x80cf,	// (0x000080cf) bg_touch_area_indi_pane_ParamLimits

0x80cf,	// (0x000080cf) bg_touch_area_indi_pane

0x80e5,	// (0x000080e5) bg_touch_area_indi_pane_cp01_ParamLimits

0x80e5,	// (0x000080e5) bg_touch_area_indi_pane_cp01

0x80fb,	// (0x000080fb) bg_touch_area_indi_pane_cp02_ParamLimits

0x80fb,	// (0x000080fb) bg_touch_area_indi_pane_cp02

0x8113,	// (0x00008113) bg_touch_area_indi_pane_cp03_ParamLimits

0x8113,	// (0x00008113) bg_touch_area_indi_pane_cp03

0x812d,	// (0x0000812d) popup_slider_window_g1_ParamLimits

0x8149,	// (0x00008149) popup_slider_window_g2_ParamLimits

0x8165,	// (0x00008165) popup_slider_window_g3_ParamLimits

0xede8,	// (0x0000ede8) popup_slider_window_g_ParamLimits

0x81c1,	// (0x000081c1) popup_slider_window_t1_ParamLimits

0x8235,	// (0x00008235) small_volume_slider_vertical_pane_ParamLimits

0xe519,	// (0x0000e519) cell_graphic2_pane_ParamLimits

0xe574,	// (0x0000e574) bg_button_pane_cp10_ParamLimits

0xe574,	// (0x0000e574) bg_button_pane_cp10

0xe587,	// (0x0000e587) bg_button_pane_cp11_ParamLimits

0xe587,	// (0x0000e587) bg_button_pane_cp11

0xe59a,	// (0x0000e59a) graphic2_pages_pane_g1_ParamLimits

0xe59a,	// (0x0000e59a) graphic2_pages_pane_g1

0xe5b5,	// (0x0000e5b5) graphic2_pages_pane_g2_ParamLimits

0xe5b5,	// (0x0000e5b5) graphic2_pages_pane_g2

0x0001,

0xee45,	// (0x0000ee45) graphic2_pages_pane_g_ParamLimits

0xee45,	// (0x0000ee45) graphic2_pages_pane_g

0xe5cd,	// (0x0000e5cd) graphic2_pages_pane_t1_ParamLimits

0xe5cd,	// (0x0000e5cd) graphic2_pages_pane_t1

0xe5e5,	// (0x0000e5e5) cell_graphic2_control_pane_ParamLimits

0xe5e5,	// (0x0000e5e5) cell_graphic2_control_pane

0xe5ff,	// (0x0000e5ff) cell_graphic2_pane_g1_ParamLimits

0xe5ff,	// (0x0000e5ff) cell_graphic2_pane_g1

0x6714,	// (0x00006714) cell_graphic2_pane_g2_ParamLimits

0x6714,	// (0x00006714) cell_graphic2_pane_g2

0xe60c,	// (0x0000e60c) cell_graphic2_pane_g3_ParamLimits

0xe60c,	// (0x0000e60c) cell_graphic2_pane_g3

0x6721,	// (0x00006721) cell_graphic2_pane_g4_ParamLimits

0x6721,	// (0x00006721) cell_graphic2_pane_g4

0xe619,	// (0x0000e619) cell_graphic2_pane_g5_ParamLimits

0xe619,	// (0x0000e619) cell_graphic2_pane_g5

0x0004,

0xee4a,	// (0x0000ee4a) cell_graphic2_pane_g_ParamLimits

0xee4a,	// (0x0000ee4a) cell_graphic2_pane_g

0xe639,	// (0x0000e639) cell_graphic2_pane_t1_ParamLimits

0xe639,	// (0x0000e639) cell_graphic2_pane_t1

0x4603,	// (0x00004603) grid_highlight_pane_cp11_ParamLimits

0x4603,	// (0x00004603) grid_highlight_pane_cp11

0x134f,	// (0x0000134f) bg_button_pane_cp05

0xe650,	// (0x0000e650) cell_graphic2_control_pane_g1

0x6454,	// (0x00006454) bg_touch_area_indi_pane_g1

0x9331,	// (0x00009331) aid_cmod_rocker_key_size

0x933b,	// (0x0000933b) aid_cmode_itu_key_size

0x9345,	// (0x00009345) main_cmode_video_pane

0x934f,	// (0x0000934f) main_comp_mode_itu_pane

0x935b,	// (0x0000935b) main_comp_mode_rocker_pane

0x9367,	// (0x00009367) cell_cmode_rocker_pane_ParamLimits

0x9367,	// (0x00009367) cell_cmode_rocker_pane

0x9379,	// (0x00009379) cell_cmode_itu_pane_ParamLimits

0x9379,	// (0x00009379) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x6901,	// (0x00006901) cell_cmode_rocker_pane_g1_ParamLimits

0x6901,	// (0x00006901) cell_cmode_rocker_pane_g1

0x83af,	// (0x000083af) cell_cmode_rocker_pane_g2_ParamLimits

0x83af,	// (0x000083af) cell_cmode_rocker_pane_g2

0x0001,

0xaec5,	// (0x0000aec5) cell_cmode_rocker_pane_g_ParamLimits

0xaec5,	// (0x0000aec5) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x938e,	// (0x0000938e) cell_cmode_itu_pane_g1

0x9397,	// (0x00009397) cell_cmode_itu_pane_t1

0x93a5,	// (0x000093a5) cell_cmode_itu_pane_t2

0x0001,

0xaeca,	// (0x0000aeca) cell_cmode_itu_pane_t

0x85d5,	// (0x000085d5) aid_touch_ctrl_left

0x85dd,	// (0x000085dd) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe65d,	// (0x0000e65d) aid_cmod_rocker_key_size_cp

0xe667,	// (0x0000e667) aid_cmode_itu_key_size_cp

0x93c7,	// (0x000093c7) compa_mode_pane_g1

0x93cf,	// (0x000093cf) compa_mode_pane_g2

0x93d7,	// (0x000093d7) compa_mode_pane_g3

0x0002,

0xaecf,	// (0x0000aecf) compa_mode_pane_g

0xe671,	// (0x0000e671) main_comp_mode_itu_pane_cp

0xe679,	// (0x0000e679) main_comp_mode_rocker_pane_cp

0xe681,	// (0x0000e681) cell_cmode_itu_pane_cp_ParamLimits

0xe681,	// (0x0000e681) cell_cmode_itu_pane_cp

0xe696,	// (0x0000e696) cell_cmode_rocker_pane_cp_ParamLimits

0xe696,	// (0x0000e696) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x6901,	// (0x00006901) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6901,	// (0x00006901) cell_cmode_rocker_pane_g1_cp

0x6454,	// (0x00006454) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe6a8,	// (0x0000e6a8) cell_cmode_itu_pane_g1_cp

0xe6b1,	// (0x0000e6b1) cell_cmode_itu_pane_t1_cp

0xe6b1,	// (0x0000e6b1) cell_cmode_itu_pane_t2_cp

0xcf40,	// (0x0000cf40) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x64d2,	// (0x000064d2) fep_hwr_aid_pane_ParamLimits

0x82b1,	// (0x000082b1) aid_touch_sctrl_top_ParamLimits

0x82be,	// (0x000082be) sctrl_sk_top_pane_g1_ParamLimits

0x6901,	// (0x00006901) sctrl_sk_top_pane_g2_ParamLimits

0xae0a,	// (0x0000ae0a) sctrl_sk_top_pane_g_ParamLimits

0x82cb,	// (0x000082cb) sctrl_sk_top_pane_t1_ParamLimits

0x82b1,	// (0x000082b1) aid_touch_sctrl_bottom_ParamLimits

0x82cb,	// (0x000082cb) sctrl_sk_bottom_pane_t1_ParamLimits

0x851f,	// (0x0000851f) aid_area_touch_clock

0xe1bb,	// (0x0000e1bb) aid_vkb2_area_top_pane_cell_ParamLimits

0xe1bb,	// (0x0000e1bb) aid_vkb2_area_top_pane_cell

0xe266,	// (0x0000e266) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe266,	// (0x0000e266) aid_vkb2_area_bottom_pane_cell

0x8e64,	// (0x00008e64) popup_char_count_window

0x942d,	// (0x0000942d) popup_char_count_window_g1

0x9436,	// (0x00009436) popup_char_count_window_g2

0x943f,	// (0x0000943f) popup_char_count_window_g3

0x0002,

0xaed6,	// (0x0000aed6) popup_char_count_window_g

0x9448,	// (0x00009448) popup_char_count_window_t1

0x8aca,	// (0x00008aca) popup_fep_char_preview_window_ParamLimits

0x8aca,	// (0x00008aca) popup_fep_char_preview_window

0xe1db,	// (0x0000e1db) vkb2_top_candi_pane_ParamLimits

0xe1db,	// (0x0000e1db) vkb2_top_candi_pane

0xe6bf,	// (0x0000e6bf) cell_vkb2_top_candi_pane_ParamLimits

0xe6bf,	// (0x0000e6bf) cell_vkb2_top_candi_pane

0x3e3c,	// (0x00003e3c) bg_popup_fep_char_preview_window_ParamLimits

0x3e3c,	// (0x00003e3c) bg_popup_fep_char_preview_window

0x94a3,	// (0x000094a3) popup_fep_char_preview_window_t1_ParamLimits

0x94a3,	// (0x000094a3) popup_fep_char_preview_window_t1

0x94dd,	// (0x000094dd) bg_popup_fep_char_preview_window_g1

0x94e5,	// (0x000094e5) bg_popup_fep_char_preview_window_g2

0x94ed,	// (0x000094ed) bg_popup_fep_char_preview_window_g3

0x94f5,	// (0x000094f5) bg_popup_fep_char_preview_window_g4

0x94fd,	// (0x000094fd) bg_popup_fep_char_preview_window_g5

0x9505,	// (0x00009505) bg_popup_fep_char_preview_window_g6

0x950d,	// (0x0000950d) bg_popup_fep_char_preview_window_g7

0x9515,	// (0x00009515) bg_popup_fep_char_preview_window_g8

0x951d,	// (0x0000951d) bg_popup_fep_char_preview_window_g9

0x0008,

0xaedd,	// (0x0000aedd) bg_popup_fep_char_preview_window_g

0x6901,	// (0x00006901) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6901,	// (0x00006901) cell_vkb2_top_candi_pane_g1

0x6c74,	// (0x00006c74) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c74,	// (0x00006c74) cell_vkb2_top_candi_pane_g2

0x6c95,	// (0x00006c95) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6c95,	// (0x00006c95) cell_vkb2_top_candi_pane_g3

0x9525,	// (0x00009525) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9525,	// (0x00009525) cell_vkb2_top_candi_pane_g4

0x9546,	// (0x00009546) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9546,	// (0x00009546) cell_vkb2_top_candi_pane_g5

0x83af,	// (0x000083af) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83af,	// (0x000083af) cell_vkb2_top_candi_pane_g6

0x0005,

0xaef0,	// (0x0000aef0) cell_vkb2_top_candi_pane_g_ParamLimits

0xaef0,	// (0x0000aef0) cell_vkb2_top_candi_pane_g

0x9567,	// (0x00009567) cell_vkb2_top_candi_pane_t1

0x4d45,	// (0x00004d45) aid_size_touch_slider_mark_ParamLimits

0x4d45,	// (0x00004d45) aid_size_touch_slider_mark

0xe458,	// (0x0000e458) grid_graphic2_catg_pane_ParamLimits

0xe458,	// (0x0000e458) grid_graphic2_catg_pane

0xe4ec,	// (0x0000e4ec) popup_grid_graphic2_window_t1_ParamLimits

0xe4ec,	// (0x0000e4ec) popup_grid_graphic2_window_t1

0xe502,	// (0x0000e502) popup_grid_graphic2_window_t2_ParamLimits

0xe502,	// (0x0000e502) popup_grid_graphic2_window_t2

0x0001,

0xee40,	// (0x0000ee40) popup_grid_graphic2_window_t_ParamLimits

0xee40,	// (0x0000ee40) popup_grid_graphic2_window_t

0x134f,	// (0x0000134f) bg_button_pane_cp05_ParamLimits

0xe650,	// (0x0000e650) cell_graphic2_control_pane_g1_ParamLimits

0xe725,	// (0x0000e725) cell_graphic2_catg_pane_ParamLimits

0xe725,	// (0x0000e725) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xe737,	// (0x0000e737) cell_graphic2_catg_pane_g1

0x84eb,	// (0x000084eb) cell_tb_ext_pane_t1_ParamLimits

0x8ef4,	// (0x00008ef4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8ef4,	// (0x00008ef4) vkb2_top_cell_right_narrow_pane

0x8f0c,	// (0x00008f0c) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f0c,	// (0x00008f0c) vkb2_top_cell_right_wide_pane

0x64c4,	// (0x000064c4) bg_vkb2_func_pane_ParamLimits

0x64c4,	// (0x000064c4) bg_vkb2_func_pane

0x8f7d,	// (0x00008f7d) vkb2_top_cell_left_pane_g1_ParamLimits

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp03

0x8ff2,	// (0x00008ff2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3620,	// (0x00003620) bg_vkb2_func_pane_g1

0x3628,	// (0x00003628) bg_vkb2_func_pane_g2

0x3638,	// (0x00003638) bg_vkb2_func_pane_g3

0x3630,	// (0x00003630) bg_vkb2_func_pane_g4

0x3640,	// (0x00003640) bg_vkb2_func_pane_g5

0x3648,	// (0x00003648) bg_vkb2_func_pane_g6

0x3650,	// (0x00003650) bg_vkb2_func_pane_g7

0x3658,	// (0x00003658) bg_vkb2_func_pane_g8

0x3618,	// (0x00003618) bg_vkb2_func_pane_g9

0x0008,

0xaefd,	// (0x0000aefd) bg_vkb2_func_pane_g

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp01

0x8f7d,	// (0x00008f7d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f7d,	// (0x00008f7d) vkb2_top_cell_right_wide_pane_g1

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64c4,	// (0x000064c4) bg_vkb2_fuc_pane_cp02

0x8ff2,	// (0x00008ff2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8ff2,	// (0x00008ff2) vkb2_top_cell_right_narrow_pane_g1

0xd921,	// (0x0000d921) aid_touch_area_decrease_ParamLimits

0xd921,	// (0x0000d921) aid_touch_area_decrease

0xd95b,	// (0x0000d95b) aid_touch_area_increase_ParamLimits

0xd95b,	// (0x0000d95b) aid_touch_area_increase

0xd983,	// (0x0000d983) aid_touch_area_mute_ParamLimits

0xd983,	// (0x0000d983) aid_touch_area_mute

0xd9b3,	// (0x0000d9b3) aid_touch_area_slider_ParamLimits

0xd9b3,	// (0x0000d9b3) aid_touch_area_slider

0xd9f3,	// (0x0000d9f3) popup_slider_window_g4_ParamLimits

0xd9f3,	// (0x0000d9f3) popup_slider_window_g4

0xda1b,	// (0x0000da1b) popup_slider_window_g5_ParamLimits

0xda1b,	// (0x0000da1b) popup_slider_window_g5

0xda4f,	// (0x0000da4f) popup_slider_window_g6_ParamLimits

0xda4f,	// (0x0000da4f) popup_slider_window_g6

0x81ef,	// (0x000081ef) popup_slider_window_t2_ParamLimits

0x81ef,	// (0x000081ef) popup_slider_window_t2

0x0001,

0xadfe,	// (0x0000adfe) popup_slider_window_t_ParamLimits

0xadfe,	// (0x0000adfe) popup_slider_window_t

0xda6b,	// (0x0000da6b) slider_pane_ParamLimits

0xda6b,	// (0x0000da6b) slider_pane

0x95a1,	// (0x000095a1) slider_pane_g1_ParamLimits

0x95a1,	// (0x000095a1) slider_pane_g1

0x95b5,	// (0x000095b5) slider_pane_g2_ParamLimits

0x95b5,	// (0x000095b5) slider_pane_g2

0x95cb,	// (0x000095cb) slider_pane_g3_ParamLimits

0x95cb,	// (0x000095cb) slider_pane_g3

0x0003,

0xaf10,	// (0x0000af10) slider_pane_g_ParamLimits

0xaf10,	// (0x0000af10) slider_pane_g

0xc4df,	// (0x0000c4df) popup_tb_float_extension_window_ParamLimits

0xc4df,	// (0x0000c4df) popup_tb_float_extension_window

0x95f7,	// (0x000095f7) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x9603,	// (0x00009603) grid_tb_float_ext_pane

0x960d,	// (0x0000960d) cell_tb_float_ext_pane_ParamLimits

0x960d,	// (0x0000960d) cell_tb_float_ext_pane

0x9627,	// (0x00009627) cell_tb_float_ext_pane_g1

0x9630,	// (0x00009630) grid_highlight_pane_cp12

0xd318,	// (0x0000d318) cell_last_hwr_side_pane_ParamLimits

0xd318,	// (0x0000d318) cell_last_hwr_side_pane

0x6454,	// (0x00006454) cell_last_hwr_side_pane_g1

0x9639,	// (0x00009639) cell_last_hwr_side_pane_g2

0x0001,

0xaf19,	// (0x0000af19) cell_last_hwr_side_pane_g

0xe342,	// (0x0000e342) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe342,	// (0x0000e342) vkb2_area_bottom_space_btn_pane

0x6901,	// (0x00006901) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x90d5,	// (0x000090d5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x9567,	// (0x00009567) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9642,	// (0x00009642) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9642,	// (0x00009642) vkb2_area_bottom_space_btn_pane_g1

0x967c,	// (0x0000967c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x967c,	// (0x0000967c) vkb2_area_bottom_space_btn_pane_g2

0x96b2,	// (0x000096b2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x96b2,	// (0x000096b2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xaf1e,	// (0x0000af1e) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xaf1e,	// (0x0000af1e) vkb2_area_bottom_space_btn_pane_g

0x6587,	// (0x00006587) cel_fep_hwr_func_pane_ParamLimits

0x6587,	// (0x00006587) cel_fep_hwr_func_pane

0xd2ed,	// (0x0000d2ed) cell_hwr_side_button_pane_ParamLimits

0xd2ed,	// (0x0000d2ed) cell_hwr_side_button_pane

0x851f,	// (0x0000851f) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x8531,	// (0x00008531) uniindi_top_pane_g1_ParamLimits

0x8547,	// (0x00008547) uniindi_top_pane_g2_ParamLimits

0x8553,	// (0x00008553) uniindi_top_pane_g3_ParamLimits

0x8564,	// (0x00008564) uniindi_top_pane_g4_ParamLimits

0xae36,	// (0x0000ae36) uniindi_top_pane_g_ParamLimits

0x8571,	// (0x00008571) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x96fc,	// (0x000096fc) cel_fep_hwr_func_pane_g1_ParamLimits

0x96fc,	// (0x000096fc) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x96fc,	// (0x000096fc) cell_hwr_side_button_pane_g1_ParamLimits

0x96fc,	// (0x000096fc) cell_hwr_side_button_pane_g1

0x3401,	// (0x00003401) status_pane_g4_ParamLimits

0x3401,	// (0x00003401) status_pane_g4

0x3419,	// (0x00003419) status_pane_t1

0x6156,	// (0x00006156) form2_midp_gauge_slider_cont_pane

0x615e,	// (0x0000615e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd22c,	// (0x0000d22c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd23e,	// (0x0000d23e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xed91,	// (0x0000ed91) form2_midp_gauge_slider_pane_t_ParamLimits

0x6194,	// (0x00006194) form2_midp_slider_pane_ParamLimits

0x8a8a,	// (0x00008a8a) aid_size_cell_func_vkb2_ParamLimits

0x8a8a,	// (0x00008a8a) aid_size_cell_func_vkb2

0x95e3,	// (0x000095e3) slider_pane_g4_ParamLimits

0x95e3,	// (0x000095e3) slider_pane_g4

0xe740,	// (0x0000e740) form2_midp_gauge_slider_pane_t2_cp01

0xe74e,	// (0x0000e74e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe74e,	// (0x0000e74e) form2_midp_gauge_slider_pane_t3_cp01

0x9735,	// (0x00009735) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9769,	// (0x00009769) navi_smil_pane_g1

0x9771,	// (0x00009771) navi_smil_pane_t1

0x973e,	// (0x0000973e) form2_midp_slider_pane_g1

0x9747,	// (0x00009747) form2_midp_slider_pane_g2

0x974f,	// (0x0000974f) form2_midp_slider_pane_g3

0x973e,	// (0x0000973e) form2_midp_slider_pane_g4

0xe76b,	// (0x0000e76b) form2_midp_slider_pane_g5

0x0004,

0xee55,	// (0x0000ee55) form2_midp_slider_pane_g

0x96ec,	// (0x000096ec) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x96ec,	// (0x000096ec) vkb2_area_bottom_space_btn_pane_g4

0xc6bb,	// (0x0000c6bb) lc0_navi_pane_ParamLimits

0xc6bb,	// (0x0000c6bb) lc0_navi_pane

0xc725,	// (0x0000c725) lc0_stat_indi_pane_ParamLimits

0xc725,	// (0x0000c725) lc0_stat_indi_pane

0xc73a,	// (0x0000c73a) ls0_title_pane_ParamLimits

0xc73a,	// (0x0000c73a) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x8506,	// (0x00008506) list_uniindi_pane_ParamLimits

0x8512,	// (0x00008512) uniindi_top_pane_ParamLimits

0x85ad,	// (0x000085ad) list_single_uniindi_pane_g1_ParamLimits

0x85c0,	// (0x000085c0) list_single_uniindi_pane_t1_ParamLimits

0xe774,	// (0x0000e774) lc0_stat_clock_pane_ParamLimits

0xe774,	// (0x0000e774) lc0_stat_clock_pane

0xe781,	// (0x0000e781) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x0000e781) lc0_stat_indi_pane_g1

0xe78e,	// (0x0000e78e) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x0000e78e) lc0_stat_indi_pane_g2

0x0001,

0xee60,	// (0x0000ee60) lc0_stat_indi_pane_g_ParamLimits

0xee60,	// (0x0000ee60) lc0_stat_indi_pane_g

0xe79b,	// (0x0000e79b) lc0_uni_indicator_pane_ParamLimits

0xe79b,	// (0x0000e79b) lc0_uni_indicator_pane

0xe7a8,	// (0x0000e7a8) ls0_title_pane_g1_ParamLimits

0xe7a8,	// (0x0000e7a8) ls0_title_pane_g1

0xe7bc,	// (0x0000e7bc) ls0_title_pane_t1_ParamLimits

0xe7bc,	// (0x0000e7bc) ls0_title_pane_t1

0xe7ea,	// (0x0000e7ea) lc0_uni_indicator_pane_g1_ParamLimits

0xe7ea,	// (0x0000e7ea) lc0_uni_indicator_pane_g1

0x9813,	// (0x00009813) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9821,	// (0x00009821) ai5_sk_pane_ParamLimits

0x9821,	// (0x00009821) ai5_sk_pane

0xe819,	// (0x0000e819) cell_ai5_widget_pane_ParamLimits

0xe819,	// (0x0000e819) cell_ai5_widget_pane

0x98bc,	// (0x000098bc) aid_size_cell_widget_grid

0x98ce,	// (0x000098ce) bg_ai5_widget_pane_ParamLimits

0x98ce,	// (0x000098ce) bg_ai5_widget_pane

0xe8a2,	// (0x0000e8a2) cell_ai5_widget_pane_g2

0xe8b2,	// (0x0000e8b2) cell_ai5_widget_pane_g3

0xe8c6,	// (0x0000e8c6) cell_ai5_widget_pane_g4

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_pane_g5

0xe8de,	// (0x0000e8de) cell_ai5_widget_pane_g6

0xe8ea,	// (0x0000e8ea) cell_ai5_widget_pane_g7

0xe932,	// (0x0000e932) cell_ai5_widget_pane_t1_ParamLimits

0xe932,	// (0x0000e932) cell_ai5_widget_pane_t1

0xe94f,	// (0x0000e94f) cell_ai5_widget_pane_t2_ParamLimits

0xe94f,	// (0x0000e94f) cell_ai5_widget_pane_t2

0xe967,	// (0x0000e967) cell_ai5_widget_pane_t3_ParamLimits

0xe967,	// (0x0000e967) cell_ai5_widget_pane_t3

0xe97f,	// (0x0000e97f) cell_ai5_widget_pane_t4_ParamLimits

0xe97f,	// (0x0000e97f) cell_ai5_widget_pane_t4

0xe999,	// (0x0000e999) cell_ai5_widget_pane_t5_ParamLimits

0xe999,	// (0x0000e999) cell_ai5_widget_pane_t5

0x9a0c,	// (0x00009a0c) cell_ai5_widget_pane_t6_ParamLimits

0x9a0c,	// (0x00009a0c) cell_ai5_widget_pane_t6

0x9a1e,	// (0x00009a1e) cell_ai5_widget_pane_t7_ParamLimits

0x9a1e,	// (0x00009a1e) cell_ai5_widget_pane_t7

0xe9b8,	// (0x0000e9b8) cell_ai5_widget_pane_t8_ParamLimits

0xe9b8,	// (0x0000e9b8) cell_ai5_widget_pane_t8

0x0009,

0xee7a,	// (0x0000ee7a) cell_ai5_widget_pane_t_ParamLimits

0xee7a,	// (0x0000ee7a) cell_ai5_widget_pane_t

0xea00,	// (0x0000ea00) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xea16,	// (0x0000ea16) ai5_sk_left_pane

0xea20,	// (0x0000ea20) ai5_sk_middle_pane

0xea2a,	// (0x0000ea2a) ai5_sk_right_pane

0x9ab3,	// (0x00009ab3) bg_ai5_widget_pane_g1_ParamLimits

0x9ab3,	// (0x00009ab3) bg_ai5_widget_pane_g1

0x9abf,	// (0x00009abf) bg_ai5_widget_pane_g2_ParamLimits

0x9abf,	// (0x00009abf) bg_ai5_widget_pane_g2

0x9acb,	// (0x00009acb) bg_ai5_widget_pane_g3_ParamLimits

0x9acb,	// (0x00009acb) bg_ai5_widget_pane_g3

0x9ad7,	// (0x00009ad7) bg_ai5_widget_pane_g4_ParamLimits

0x9ad7,	// (0x00009ad7) bg_ai5_widget_pane_g4

0x9ae3,	// (0x00009ae3) bg_ai5_widget_pane_g5_ParamLimits

0x9ae3,	// (0x00009ae3) bg_ai5_widget_pane_g5

0x9aef,	// (0x00009aef) bg_ai5_widget_pane_g6_ParamLimits

0x9aef,	// (0x00009aef) bg_ai5_widget_pane_g6

0x9afb,	// (0x00009afb) bg_ai5_widget_pane_g7_ParamLimits

0x9afb,	// (0x00009afb) bg_ai5_widget_pane_g7

0x9b07,	// (0x00009b07) bg_ai5_widget_pane_g8_ParamLimits

0x9b07,	// (0x00009b07) bg_ai5_widget_pane_g8

0x9b13,	// (0x00009b13) bg_ai5_widget_pane_g9_ParamLimits

0x9b13,	// (0x00009b13) bg_ai5_widget_pane_g9

0x0008,

0xaf61,	// (0x0000af61) bg_ai5_widget_pane_g_ParamLimits

0xaf61,	// (0x0000af61) bg_ai5_widget_pane_g

0x9b3b,	// (0x00009b3b) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b3b,	// (0x00009b3b) cell_shortcut_ai5_widget_pane

0x0659,	// (0x00000659) bg_cell_shortcut_ai5_widget_pane

0x9b4d,	// (0x00009b4d) cell_grid_ai5_widget_pane_g1

0x9b56,	// (0x00009b56) highlight_cell_shortcut_ai5_widget_pane

0x3628,	// (0x00003628) ai5_sk_left_pane_g1

0x9b5e,	// (0x00009b5e) ai5_sk_left_pane_g2

0x9b66,	// (0x00009b66) ai5_sk_left_pane_g3

0x9b6e,	// (0x00009b6e) ai5_sk_left_pane_g4

0x0003,

0xaf74,	// (0x0000af74) ai5_sk_left_pane_g

0x9b76,	// (0x00009b76) ai5_sk_left_pane_t1

0x3620,	// (0x00003620) ai5_sk_right_pane_g1

0x9b84,	// (0x00009b84) ai5_sk_right_pane_g2

0x9b8c,	// (0x00009b8c) ai5_sk_right_pane_g3

0x9b94,	// (0x00009b94) ai5_sk_right_pane_g4

0x0003,

0xaf7d,	// (0x0000af7d) ai5_sk_right_pane_g

0x9b9c,	// (0x00009b9c) ai5_sk_right_pane_t1

0x3620,	// (0x00003620) ai5_sk_middle_pane_g1

0x3628,	// (0x00003628) ai5_sk_middle_pane_g2

0x3640,	// (0x00003640) ai5_sk_middle_pane_g3

0x9b8c,	// (0x00009b8c) ai5_sk_middle_pane_g4

0x9b66,	// (0x00009b66) ai5_sk_middle_pane_g5

0x9baa,	// (0x00009baa) ai5_sk_middle_pane_g6

0xea34,	// (0x0000ea34) ai5_sk_middle_pane_g7

0x0006,

0xee8f,	// (0x0000ee8f) ai5_sk_middle_pane_g

0xc5a7,	// (0x0000c5a7) aid_touch_area_size_lc0_ParamLimits

0xc5a7,	// (0x0000c5a7) aid_touch_area_size_lc0

0x6cb6,	// (0x00006cb6) cell_hwr_candidate_pane_t1_ParamLimits

0x30df,	// (0x000030df) aid_touch_navi_pane

0xc82c,	// (0x0000c82c) status_dt_navi_pane_ParamLimits

0xc82c,	// (0x0000c82c) status_dt_navi_pane

0xc844,	// (0x0000c844) status_dt_sta_pane_ParamLimits

0xc844,	// (0x0000c844) status_dt_sta_pane

0xea3c,	// (0x0000ea3c) dt_sta_controll_pane

0xea49,	// (0x0000ea49) dt_sta_indi_pane

0xea56,	// (0x0000ea56) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0xea68,	// (0x0000ea68) dt_sta_battery_pane

0xea70,	// (0x0000ea70) dt_sta_indi_pane_g1

0x9bfc,	// (0x00009bfc) dt_sta_indi_pane_g2

0x9c05,	// (0x00009c05) dt_sta_indi_pane_g3

0x0002,

0xee9e,	// (0x0000ee9e) dt_sta_indi_pane_g

0x9c0e,	// (0x00009c0e) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x4774,	// (0x00004774) dt_sta_title_pane_g1

0xea79,	// (0x0000ea79) dt_sta_title_pane_t1_ParamLimits

0xea79,	// (0x0000ea79) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xea8e,	// (0x0000ea8e) dt_sta_controll_pane_g1

0x9c35,	// (0x00009c35) bg_dt_sta_title_pane_g1

0x9c3e,	// (0x00009c3e) bg_dt_sta_title_pane_g2

0x9c47,	// (0x00009c47) bg_dt_sta_title_pane_g3

0x0002,

0xaf9c,	// (0x0000af9c) bg_dt_sta_title_pane_g

0x6454,	// (0x00006454) bg_dt_sta_indi_pane_g1

0x9c50,	// (0x00009c50) dt_sta_signal_pane_g1

0x9c58,	// (0x00009c58) dt_sta_signal_pane_g2

0x0001,

0xafa3,	// (0x0000afa3) dt_sta_signal_pane_g

0x9c60,	// (0x00009c60) dt_sta_battery_pane_g1

0x9c69,	// (0x00009c69) dt_sta_battery_pane_t1

0x6454,	// (0x00006454) bg_dt_sta_control_pane_g1

0x1eaa,	// (0x00001eaa) fep_china_uni_eep_pane

0x1eb2,	// (0x00001eb2) fep_china_uni_entry_pane_ParamLimits

0x1ec2,	// (0x00001ec2) popup_fep_china_uni_window_g1_ParamLimits

0x1ed2,	// (0x00001ed2) popup_fep_china_uni_window_g2_ParamLimits

0x1ed2,	// (0x00001ed2) popup_fep_china_uni_window_g2

0x0001,

0xa84c,	// (0x0000a84c) popup_fep_china_uni_window_g_ParamLimits

0xa84c,	// (0x0000a84c) popup_fep_china_uni_window_g

0x9c78,	// (0x00009c78) fep_china_uni_eep_pane_g1

0x9c80,	// (0x00009c80) fep_china_uni_eep_pane_t1

0x9760,	// (0x00009760) aid_touch_area_size_smil_player

0x322f,	// (0x0000322f) lc0_clock_pane

0x340d,	// (0x0000340d) status_pane_g5_ParamLimits

0x340d,	// (0x0000340d) status_pane_g5

0xc073,	// (0x0000c073) popup_keymap_window

0x33cd,	// (0x000033cd) status_icon_pane

0xe8b2,	// (0x0000e8b2) cell_ai5_widget_pane_g3_ParamLimits

0xe8c6,	// (0x0000e8c6) cell_ai5_widget_pane_g4_ParamLimits

0xe8d2,	// (0x0000e8d2) cell_ai5_widget_pane_g5_ParamLimits

0xe8f6,	// (0x0000e8f6) cell_ai5_widget_pane_g8_ParamLimits

0xe8f6,	// (0x0000e8f6) cell_ai5_widget_pane_g8

0xe90a,	// (0x0000e90a) cell_ai5_widget_pane_g9_ParamLimits

0xe90a,	// (0x0000e90a) cell_ai5_widget_pane_g9

0xe91e,	// (0x0000e91e) cell_ai5_widget_pane_g10_ParamLimits

0xe91e,	// (0x0000e91e) cell_ai5_widget_pane_g10

0x9c8f,	// (0x00009c8f) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9c97,	// (0x00009c97) popup_keymap_window_t1

0xbd8b,	// (0x0000bd8b) control_pane_g6_ParamLimits

0xbd8b,	// (0x0000bd8b) control_pane_g6

0xbd98,	// (0x0000bd98) control_pane_g7_ParamLimits

0xbd98,	// (0x0000bd98) control_pane_g7

0xbda5,	// (0x0000bda5) control_pane_g8_ParamLimits

0xbda5,	// (0x0000bda5) control_pane_g8

0xea3c,	// (0x0000ea3c) dt_sta_controll_pane_ParamLimits

0xea49,	// (0x0000ea49) dt_sta_indi_pane_ParamLimits

0xea56,	// (0x0000ea56) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb140,	// (0x0000b140) popup_sk_window

0x3e3c,	// (0x00003e3c) bg_popup_sub_pane_cp28_ParamLimits

0x3e3c,	// (0x00003e3c) bg_popup_sub_pane_cp28

0x9ca5,	// (0x00009ca5) popup_discreet_window_g1_ParamLimits

0x9ca5,	// (0x00009ca5) popup_discreet_window_g1

0x9cc5,	// (0x00009cc5) popup_discreet_window_t1_ParamLimits

0x9cc5,	// (0x00009cc5) popup_discreet_window_t1

0x9ce3,	// (0x00009ce3) popup_discreet_window_t2_ParamLimits

0x9ce3,	// (0x00009ce3) popup_discreet_window_t2

0x0002,

0xafa8,	// (0x0000afa8) popup_discreet_window_t_ParamLimits

0xafa8,	// (0x0000afa8) popup_discreet_window_t

0x9d35,	// (0x00009d35) popup_sk_window_g1

0x9d3f,	// (0x00009d3f) popup_sk_window_g2

0x0001,

0xafaf,	// (0x0000afaf) popup_sk_window_g

0x9d49,	// (0x00009d49) popup_sk_window_t1

0x9d57,	// (0x00009d57) popup_sk_window_t1_copy1

0xe8a2,	// (0x0000e8a2) cell_ai5_widget_pane_g2_ParamLimits

0xe9ca,	// (0x0000e9ca) cell_ai5_widget_pane_t9_ParamLimits

0xe9ca,	// (0x0000e9ca) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xea97,	// (0x0000ea97) aid_fshwr2_btn_pane

0xea9f,	// (0x0000ea9f) aid_fshwr2_syb_pane

0xeaa7,	// (0x0000eaa7) aid_fshwr2_txt_pane

0xeaaf,	// (0x0000eaaf) fshwr2_func_candi_pane

0xeab9,	// (0x0000eab9) fshwr2_hwr_syb_pane

0xeac7,	// (0x0000eac7) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xead1,	// (0x0000ead1) fshwr2_icf_pane_t1_ParamLimits

0xead1,	// (0x0000ead1) fshwr2_icf_pane_t1

0x6454,	// (0x00006454) fshwr2_func_candi_pane_g1

0x9dca,	// (0x00009dca) fshwr2_func_candi_row_pane_ParamLimits

0x9dca,	// (0x00009dca) fshwr2_func_candi_row_pane

0xeaeb,	// (0x0000eaeb) cell_fshwr2_syb_pane_ParamLimits

0xeaeb,	// (0x0000eaeb) cell_fshwr2_syb_pane

0x6901,	// (0x00006901) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6901,	// (0x00006901) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9df7,	// (0x00009df7) fshwr2_func_candi_cell_pane_ParamLimits

0x9df7,	// (0x00009df7) fshwr2_func_candi_cell_pane

0x9e28,	// (0x00009e28) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e28,	// (0x00009e28) fshwr2_func_candi_cell_bg_pane

0x9e42,	// (0x00009e42) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e42,	// (0x00009e42) fshwr2_func_candi_cell_pane_g1

0x9e62,	// (0x00009e62) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e62,	// (0x00009e62) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2575,	// (0x00002575) cell_fshwr2_syb_bg_pane

0xeb05,	// (0x0000eb05) cell_fshwr2_syb_bg_pane_g1

0x9e7d,	// (0x00009e7d) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xcd5f,	// (0x0000cd5f) uni_indicator_pane_g1_ParamLimits

0xcd74,	// (0x0000cd74) uni_indicator_pane_g2_ParamLimits

0xcd89,	// (0x0000cd89) uni_indicator_pane_g3_ParamLimits

0x4af8,	// (0x00004af8) uni_indicator_pane_g4_ParamLimits

0x4af8,	// (0x00004af8) uni_indicator_pane_g4

0x4b0c,	// (0x00004b0c) uni_indicator_pane_g5_ParamLimits

0x4b0c,	// (0x00004b0c) uni_indicator_pane_g5

0x4b20,	// (0x00004b20) uni_indicator_pane_g6_ParamLimits

0x4b20,	// (0x00004b20) uni_indicator_pane_g6

0xed3d,	// (0x0000ed3d) uni_indicator_pane_g_ParamLimits

0xd903,	// (0x0000d903) popup_tmo_note_window_ParamLimits

0xd903,	// (0x0000d903) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9e53,	// (0x00009e53) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e53,	// (0x00009e53) fshwr2_func_candi_cell_pane_g2

0x0001,

0xafb4,	// (0x0000afb4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xafb4,	// (0x0000afb4) fshwr2_func_candi_cell_pane_g

0x6454,	// (0x00006454) bg_popup_window_pane_cp01

0x9e8c,	// (0x00009e8c) bg_popup_window_pane_g1_cp01

0x9e95,	// (0x00009e95) bg_popup_window_pane_cp22_ParamLimits

0x9e95,	// (0x00009e95) bg_popup_window_pane_cp22

0x9ea3,	// (0x00009ea3) listscroll_tmo_link_pane_ParamLimits

0x9ea3,	// (0x00009ea3) listscroll_tmo_link_pane

0x9ee3,	// (0x00009ee3) popup_tmo_note_window_g1_ParamLimits

0x9ee3,	// (0x00009ee3) popup_tmo_note_window_g1

0x9ef0,	// (0x00009ef0) tmo_note_info_pane_ParamLimits

0x9ef0,	// (0x00009ef0) tmo_note_info_pane

0xeb0d,	// (0x0000eb0d) list_tmo_note_info_pane_g1_ParamLimits

0xeb0d,	// (0x0000eb0d) list_tmo_note_info_pane_g1

0x9f21,	// (0x00009f21) list_tmo_note_info_pane_g2_ParamLimits

0x9f21,	// (0x00009f21) list_tmo_note_info_pane_g2

0x0001,

0xeea5,	// (0x0000eea5) list_tmo_note_info_pane_g_ParamLimits

0xeea5,	// (0x0000eea5) list_tmo_note_info_pane_g

0x9f3d,	// (0x00009f3d) list_tmo_note_info_text_pane_ParamLimits

0x9f3d,	// (0x00009f3d) list_tmo_note_info_text_pane

0x9fc2,	// (0x00009fc2) list_tmo_link_pane

0x9fcf,	// (0x00009fcf) scroll_pane_cp20

0x9fdc,	// (0x00009fdc) list_single_tmo_link_pane_ParamLimits

0x9fdc,	// (0x00009fdc) list_single_tmo_link_pane

0x9fec,	// (0x00009fec) list_single_tmo_link_pane_t1

0x9ffa,	// (0x00009ffa) list_tmo_note_info_text_pane_t1_ParamLimits

0x9ffa,	// (0x00009ffa) list_tmo_note_info_text_pane_t1

0xb9e8,	// (0x0000b9e8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb9e8,	// (0x0000b9e8) aid_size_touch_scroll_bar_cp01

0xb903,	// (0x0000b903) aid_size_touch_slider_marker

0xb130,	// (0x0000b130) popup_settings_window_ParamLimits

0xb130,	// (0x0000b130) popup_settings_window

0x2b16,	// (0x00002b16) popup_candi_list_indi_window

0x30df,	// (0x000030df) aid_touch_navi_pane_ParamLimits

0x8285,	// (0x00008285) rs_clock_indi_pane

0x828e,	// (0x0000828e) sctrl_sk_bottom_pane_ParamLimits

0x829f,	// (0x0000829f) sctrl_sk_top_pane_ParamLimits

0x8ae4,	// (0x00008ae4) popup_fep_tooltip_window

0x98bc,	// (0x000098bc) aid_size_cell_widget_grid_ParamLimits

0xe896,	// (0x0000e896) cell_ai5_widget_pane_g1_ParamLimits

0xe896,	// (0x0000e896) cell_ai5_widget_pane_g1

0xe8de,	// (0x0000e8de) cell_ai5_widget_pane_g6_ParamLimits

0xe8ea,	// (0x0000e8ea) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xee65,	// (0x0000ee65) cell_ai5_widget_pane_g_ParamLimits

0xee65,	// (0x0000ee65) cell_ai5_widget_pane_g

0xe9ee,	// (0x0000e9ee) cell_ai5_widget_pane_t10_ParamLimits

0xe9ee,	// (0x0000e9ee) cell_ai5_widget_pane_t10

0xea00,	// (0x0000ea00) grid_ai5_widget_pane_ParamLimits

0x9b1f,	// (0x00009b1f) cell_contacts_ai5_widget_pane_ParamLimits

0x9b1f,	// (0x00009b1f) cell_contacts_ai5_widget_pane

0x9cf8,	// (0x00009cf8) popup_discreet_window_t3_ParamLimits

0x9cf8,	// (0x00009cf8) popup_discreet_window_t3

0x9d9f,	// (0x00009d9f) popup_fshwr2_char_preview_window_ParamLimits

0x9d9f,	// (0x00009d9f) popup_fshwr2_char_preview_window

0xeb24,	// (0x0000eb24) tmo_note_info_pane_t1

0xeb39,	// (0x0000eb39) tmo_note_info_pane_t2

0xeb52,	// (0x0000eb52) tmo_note_info_pane_t3

0x9f9e,	// (0x00009f9e) tmo_note_info_pane_t4

0x9fb0,	// (0x00009fb0) tmo_note_info_pane_t5

0x0004,

0xeeaa,	// (0x0000eeaa) tmo_note_info_pane_t

0x9fc2,	// (0x00009fc2) list_tmo_link_pane_ParamLimits

0x9fcf,	// (0x00009fcf) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa013,	// (0x0000a013) popup_fshwr2_char_preview_window_t1

0xa021,	// (0x0000a021) popup_candi_list_indi_window_g1

0xa02a,	// (0x0000a02a) bg_cell_contacts_ai5_widget_pane

0xa036,	// (0x0000a036) cell_contacts_ai5_widget_pane_g1

0xa04a,	// (0x0000a04a) cell_contacts_ai5_widget_pane_g2

0xa059,	// (0x0000a059) cell_contacts_ai5_widget_pane_g3

0x0002,

0xafc9,	// (0x0000afc9) cell_contacts_ai5_widget_pane_g

0xa06c,	// (0x0000a06c) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa0e6,	// (0x0000a0e6) settings_container_pane

0x2575,	// (0x00002575) listscroll_set_pane_copy1

0x58f0,	// (0x000058f0) scroll_pane_cp121_copy1

0xa0f2,	// (0x0000a0f2) set_content_pane_copy1

0xa0fa,	// (0x0000a0fa) aid_height_set_list_copy1_ParamLimits

0xa0fa,	// (0x0000a0fa) aid_height_set_list_copy1

0x4e03,	// (0x00004e03) aid_size_parent_copy1_ParamLimits

0x4e03,	// (0x00004e03) aid_size_parent_copy1

0xa106,	// (0x0000a106) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa106,	// (0x0000a106) button_value_adjust_pane_cp6_copy1

0x2aee,	// (0x00002aee) list_highlight_pane_cp2_copy1_ParamLimits

0x2aee,	// (0x00002aee) list_highlight_pane_cp2_copy1

0xa11a,	// (0x0000a11a) list_set_pane_copy1_ParamLimits

0xa11a,	// (0x0000a11a) list_set_pane_copy1

0xa081,	// (0x0000a081) main_pane_set_t1_copy1_ParamLimits

0xa081,	// (0x0000a081) main_pane_set_t1_copy1

0xa0bb,	// (0x0000a0bb) main_pane_set_t2_copy1_ParamLimits

0xa0bb,	// (0x0000a0bb) main_pane_set_t2_copy1

0xa1c7,	// (0x0000a1c7) main_pane_set_t3_copy1

0xa1d5,	// (0x0000a1d5) main_pane_set_t4_copy1

0xa0da,	// (0x0000a0da) set_content_pane_g1_copy1_ParamLimits

0xa0da,	// (0x0000a0da) set_content_pane_g1_copy1

0xa1e3,	// (0x0000a1e3) setting_code_pane_copy1

0xa1ed,	// (0x0000a1ed) setting_slider_graphic_pane_copy1

0xa1ed,	// (0x0000a1ed) setting_slider_pane_copy1

0xa1f7,	// (0x0000a1f7) setting_text_pane_copy1

0xa201,	// (0x0000a201) setting_volume_pane_copy1

0xa20a,	// (0x0000a20a) settings_code_pane_cp2_copy1

0xa212,	// (0x0000a212) settings_code_pane_cp_copy1_ParamLimits

0xa212,	// (0x0000a212) settings_code_pane_cp_copy1

0xa226,	// (0x0000a226) volume_set_pane_copy1

0xa22e,	// (0x0000a22e) volume_set_pane_g10_copy1

0xa236,	// (0x0000a236) volume_set_pane_g1_copy1

0xa23e,	// (0x0000a23e) volume_set_pane_g2_copy1

0xa246,	// (0x0000a246) volume_set_pane_g3_copy1

0xa24e,	// (0x0000a24e) volume_set_pane_g4_copy1

0xa256,	// (0x0000a256) volume_set_pane_g5_copy1

0xa25e,	// (0x0000a25e) volume_set_pane_g6_copy1

0xa266,	// (0x0000a266) volume_set_pane_g7_copy1

0xa26e,	// (0x0000a26e) volume_set_pane_g8_copy1

0xa276,	// (0x0000a276) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa27e,	// (0x0000a27e) setting_slider_pane_t1_copy1_ParamLimits

0xa27e,	// (0x0000a27e) setting_slider_pane_t1_copy1

0xa29c,	// (0x0000a29c) setting_slider_pane_t2_copy1_ParamLimits

0xa29c,	// (0x0000a29c) setting_slider_pane_t2_copy1

0xa2b6,	// (0x0000a2b6) setting_slider_pane_t3_copy1_ParamLimits

0xa2b6,	// (0x0000a2b6) setting_slider_pane_t3_copy1

0xa2ce,	// (0x0000a2ce) slider_set_pane_copy1_ParamLimits

0xa2ce,	// (0x0000a2ce) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa2e4,	// (0x0000a2e4) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa2ee,	// (0x0000a2ee) set_opt_bg_pane_g7_copy2

0xa2f6,	// (0x0000a2f6) set_opt_bg_pane_g8_copy2

0xa300,	// (0x0000a300) set_opt_bg_pane_g9_copy2

0xa30a,	// (0x0000a30a) aid_size_touch_slider_mark_copy1_ParamLimits

0xa30a,	// (0x0000a30a) aid_size_touch_slider_mark_copy1

0xa31e,	// (0x0000a31e) slider_set_pane_g1_copy1

0xa327,	// (0x0000a327) slider_set_pane_g2_copy1

0x4d72,	// (0x00004d72) slider_set_pane_g3_copy1_ParamLimits

0x4d72,	// (0x00004d72) slider_set_pane_g3_copy1

0x4d86,	// (0x00004d86) slider_set_pane_g4_copy1_ParamLimits

0x4d86,	// (0x00004d86) slider_set_pane_g4_copy1

0x4d9e,	// (0x00004d9e) slider_set_pane_g5_copy1_ParamLimits

0x4d9e,	// (0x00004d9e) slider_set_pane_g5_copy1

0x4d72,	// (0x00004d72) slider_set_pane_g6_copy1_ParamLimits

0x4d72,	// (0x00004d72) slider_set_pane_g6_copy1

0xa32f,	// (0x0000a32f) slider_set_pane_g7_copy1_ParamLimits

0xa32f,	// (0x0000a32f) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa345,	// (0x0000a345) setting_slider_graphic_pane_g1_copy1

0xa34e,	// (0x0000a34e) setting_slider_graphic_pane_t1_copy1

0xa35e,	// (0x0000a35e) setting_slider_graphic_pane_t2_copy1

0xa36e,	// (0x0000a36e) slider_set_pane_cp_copy1

0xa37e,	// (0x0000a37e) input_focus_pane_cp1_copy1

0xa387,	// (0x0000a387) list_set_text_pane_copy1

0xa38f,	// (0x0000a38f) setting_text_pane_g1_copy1

0xa398,	// (0x0000a398) set_text_pane_t1_copy1

0xa37e,	// (0x0000a37e) input_focus_pane_cp2_copy1

0xa38f,	// (0x0000a38f) setting_code_pane_g1_copy1

0xa3b5,	// (0x0000a3b5) setting_code_pane_t1_copy1

0xa3c3,	// (0x0000a3c3) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2277,	// (0x00002277) list_set_graphic_pane_g1_copy1_ParamLimits

0x2277,	// (0x00002277) list_set_graphic_pane_g1_copy1

0xa3d7,	// (0x0000a3d7) list_set_graphic_pane_g2_copy1

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_copy1_ParamLimits

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_copy1

0x6454,	// (0x00006454) rs_clock_indi_pane_g1

0xa3df,	// (0x0000a3df) rs_clock_indi_pane_t1

0xa3ed,	// (0x0000a3ed) rs_indi_pane

0xa3f5,	// (0x0000a3f5) rs_indi_pane_g1

0xa3fe,	// (0x0000a3fe) rs_indi_pane_g2

0xa407,	// (0x0000a407) rs_indi_pane_g3

0x0002,

0xafd0,	// (0x0000afd0) rs_indi_pane_g

0x2575,	// (0x00002575) bg_popup_preview_window_pane_cp03

0xa410,	// (0x0000a410) popup_fep_tooltip_window_t1

0x7649,	// (0x00007649) popup_note2_window_g2_ParamLimits

0x7649,	// (0x00007649) popup_note2_window_g2

0x0001,

0xad75,	// (0x0000ad75) popup_note2_window_g_ParamLimits

0xad75,	// (0x0000ad75) popup_note2_window_g

0x7c43,	// (0x00007c43) bg_popup_sub_pane_cp11_ParamLimits

0x7c50,	// (0x00007c50) cell_ai3_links_pane_g1_ParamLimits

0x7c67,	// (0x00007c67) cell_ai3_links_pane_t1

0xa398,	// (0x0000a398) set_text_pane_t1_copy1_ParamLimits

0x2484,	// (0x00002484) cell_graphic_popup_pane_cp2_ParamLimits

0x2484,	// (0x00002484) cell_graphic_popup_pane_cp2

0xa41e,	// (0x0000a41e) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa426,	// (0x0000a426) cell_graphic_popup_pane_g3_cp2

0xa42e,	// (0x0000a42e) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xd8f7,	// (0x0000d8f7) popup_tmo_big_image_note_window

0xe886,	// (0x0000e886) cell_ai5_widget_list_pane

0xe88e,	// (0x0000e88e) cell_ai5_widget_lrg_icon_pane

0xeb24,	// (0x0000eb24) tmo_note_info_pane_t1_ParamLimits

0xeb39,	// (0x0000eb39) tmo_note_info_pane_t2_ParamLimits

0xeb52,	// (0x0000eb52) tmo_note_info_pane_t3_ParamLimits

0x9f9e,	// (0x00009f9e) tmo_note_info_pane_t4_ParamLimits

0x9fb0,	// (0x00009fb0) tmo_note_info_pane_t5_ParamLimits

0xeeaa,	// (0x0000eeaa) tmo_note_info_pane_t_ParamLimits

0xa0e6,	// (0x0000a0e6) settings_container_pane_ParamLimits

0xa376,	// (0x0000a376) indicator_popup_pane_cp5

0xa376,	// (0x0000a376) indicator_popup_pane_cp6

0xa3c3,	// (0x0000a3c3) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa43c,	// (0x0000a43c) popup_tmo_big_image_note_window_g1

0xa447,	// (0x0000a447) popup_tmo_big_image_note_window_t1

0xa457,	// (0x0000a457) popup_tmo_big_image_note_window_t2

0xa467,	// (0x0000a467) popup_tmo_big_image_note_window_t3

0x0002,

0xafd7,	// (0x0000afd7) popup_tmo_big_image_note_window_t

0xeb67,	// (0x0000eb67) cell_ai5_widget_lrg_icon_pane_g1

0xeb6f,	// (0x0000eb6f) cell_ai5_widget_lrg_icon_pane_t1

0xeb7d,	// (0x0000eb7d) cell_ai5_widget_list_row_pane_ParamLimits

0xeb7d,	// (0x0000eb7d) cell_ai5_widget_list_row_pane

0xeb96,	// (0x0000eb96) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeb96,	// (0x0000eb96) cell_ai5_widget_list_row_pane_g1

0xeba3,	// (0x0000eba3) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeba3,	// (0x0000eba3) cell_ai5_widget_list_row_pane_t1

0xebbb,	// (0x0000ebbb) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebbb,	// (0x0000ebbb) cell_ai5_widget_list_row_pane_t2

0x0001,

0xeeb5,	// (0x0000eeb5) cell_ai5_widget_list_row_pane_t_ParamLimits

0xeeb5,	// (0x0000eeb5) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa4dd,	// (0x0000a4dd) popup_fep_char_pre_window

0xa4e5,	// (0x0000a4e5) popup_fep_ituss_window

0xa4f0,	// (0x0000a4f0) popup_fep_vkbss_window

0xa4f9,	// (0x0000a4f9) grid_vkbss_keypad_pane_ParamLimits

0xa4f9,	// (0x0000a4f9) grid_vkbss_keypad_pane

0xa509,	// (0x0000a509) ituss_keypad_pane

0xa511,	// (0x0000a511) aid_vkbss_key_offset_ParamLimits

0xa511,	// (0x0000a511) aid_vkbss_key_offset

0xa520,	// (0x0000a520) cell_vkbss_key_pane_ParamLimits

0xa520,	// (0x0000a520) cell_vkbss_key_pane

0xa536,	// (0x0000a536) bg_cell_vkbss_key_g1_ParamLimits

0xa536,	// (0x0000a536) bg_cell_vkbss_key_g1

0xa542,	// (0x0000a542) cell_vkbss_key_3p_pane_ParamLimits

0xa542,	// (0x0000a542) cell_vkbss_key_3p_pane

0xa55c,	// (0x0000a55c) cell_vkbss_key_g1_ParamLimits

0xa55c,	// (0x0000a55c) cell_vkbss_key_g1

0xa576,	// (0x0000a576) cell_vkbss_key_t1_ParamLimits

0xa576,	// (0x0000a576) cell_vkbss_key_t1

0xa5a1,	// (0x0000a5a1) cell_ituss_key_pane_ParamLimits

0xa5a1,	// (0x0000a5a1) cell_ituss_key_pane

0xa5b0,	// (0x0000a5b0) bg_cell_ituss_key_g1_ParamLimits

0xa5b0,	// (0x0000a5b0) bg_cell_ituss_key_g1

0xa5bc,	// (0x0000a5bc) cell_ituss_key_pane_g1_ParamLimits

0xa5bc,	// (0x0000a5bc) cell_ituss_key_pane_g1

0xa5c8,	// (0x0000a5c8) cell_ituss_key_pane_g2_ParamLimits

0xa5c8,	// (0x0000a5c8) cell_ituss_key_pane_g2

0x0001,

0xafe3,	// (0x0000afe3) cell_ituss_key_pane_g_ParamLimits

0xafe3,	// (0x0000afe3) cell_ituss_key_pane_g

0xa5db,	// (0x0000a5db) cell_ituss_key_t1_ParamLimits

0xa5db,	// (0x0000a5db) cell_ituss_key_t1

0xa5f9,	// (0x0000a5f9) cell_ituss_key_t2_ParamLimits

0xa5f9,	// (0x0000a5f9) cell_ituss_key_t2

0xa618,	// (0x0000a618) cell_ituss_key_t3_ParamLimits

0xa618,	// (0x0000a618) cell_ituss_key_t3

0xa637,	// (0x0000a637) cell_ituss_key_t4_ParamLimits

0xa637,	// (0x0000a637) cell_ituss_key_t4

0x0003,

0xafe8,	// (0x0000afe8) cell_ituss_key_t_ParamLimits

0xafe8,	// (0x0000afe8) cell_ituss_key_t

0xa656,	// (0x0000a656) cell_vkbss_key_3p_pane_g1

0xa65e,	// (0x0000a65e) cell_vkbss_key_3p_pane_g2

0xa666,	// (0x0000a666) cell_vkbss_key_3p_pane_g3

0x0002,

0xaff1,	// (0x0000aff1) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa66e,	// (0x0000a66e) popup_fep_char_pre_window_t1

0xe87c,	// (0x0000e87c) main_ai5_sk_pane

0xa02a,	// (0x0000a02a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa036,	// (0x0000a036) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa04a,	// (0x0000a04a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa059,	// (0x0000a059) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xafc9,	// (0x0000afc9) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa06c,	// (0x0000a06c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebcd,	// (0x0000ebcd) main_ai5_sk_pane_g1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
