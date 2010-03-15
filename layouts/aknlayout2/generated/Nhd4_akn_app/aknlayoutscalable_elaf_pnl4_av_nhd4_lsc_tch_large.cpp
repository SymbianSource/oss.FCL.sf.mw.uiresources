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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0003769d };

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
0x83f8,	// (0x0003fa95) Screen

0x8404,	// (0x0003faa1) application_window_ParamLimits

0x8404,	// (0x0003faa1) application_window

0xb287,	// (0x00042924) screen_g1

0x843c,	// (0x0003fad9) area_bottom_pane_ParamLimits

0x843c,	// (0x0003fad9) area_bottom_pane

0x13a8,	// (0x00038a45) area_top_pane_ParamLimits

0x13a8,	// (0x00038a45) area_top_pane

0x143c,	// (0x00038ad9) main_pane_ParamLimits

0x143c,	// (0x00038ad9) main_pane

0xb291,	// (0x0004292e) misc_graphics

0xa2c4,	// (0x00041961) battery_pane_ParamLimits

0xa2c4,	// (0x00041961) battery_pane

0xd524,	// (0x00044bc1) bg_status_flat_pane_g8

0xd52c,	// (0x00044bc9) bg_status_flat_pane_g9

0xcc9a,	// (0x00044337) context_pane_ParamLimits

0xcc9a,	// (0x00044337) context_pane

0xa42f,	// (0x00041acc) navi_pane_ParamLimits

0xa42f,	// (0x00041acc) navi_pane

0xa4a7,	// (0x00041b44) signal_pane_ParamLimits

0xa4a7,	// (0x00041b44) signal_pane

0x0008,

0xf87a,	// (0x00046f17) bg_status_flat_pane_g

0xa537,	// (0x00041bd4) status_pane_g1_ParamLimits

0xa537,	// (0x00041bd4) status_pane_g1

0xa54d,	// (0x00041bea) status_pane_g2_ParamLimits

0xa54d,	// (0x00041bea) status_pane_g2

0xccff,	// (0x0004439c) status_pane_g3_ParamLimits

0xccff,	// (0x0004439c) status_pane_g3

0x0004,

0xf7a6,	// (0x00046e43) status_pane_g_ParamLimits

0xf7a6,	// (0x00046e43) status_pane_g

0xa559,	// (0x00041bf6) title_pane_ParamLimits

0xa559,	// (0x00041bf6) title_pane

0xa5bc,	// (0x00041c59) uni_indicator_pane_ParamLimits

0xa5bc,	// (0x00041c59) uni_indicator_pane

0xcbdd,	// (0x0004427a) bg_list_pane_ParamLimits

0xcbdd,	// (0x0004427a) bg_list_pane

0x2396,	// (0x00039a33) find_pane

0xa233,	// (0x000418d0) listscroll_app_pane_ParamLimits

0xa233,	// (0x000418d0) listscroll_app_pane

0xcbfd,	// (0x0004429a) listscroll_form_pane

0x23aa,	// (0x00039a47) listscroll_gen_pane_ParamLimits

0x23aa,	// (0x00039a47) listscroll_gen_pane

0xcbfd,	// (0x0004429a) listscroll_set_pane

0xcd99,	// (0x00044436) main_idle_act_pane

0xc9c1,	// (0x0004405e) main_idle_trad_pane

0xc9c1,	// (0x0004405e) main_list_empty_pane

0xc155,	// (0x000437f2) main_midp_pane

0xcc17,	// (0x000442b4) main_pane_g1_ParamLimits

0xcc17,	// (0x000442b4) main_pane_g1

0x8c13,	// (0x000402b0) popup_ai_message_window_ParamLimits

0x8c13,	// (0x000402b0) popup_ai_message_window

0x8ca4,	// (0x00040341) popup_fep_china_uni_window_ParamLimits

0x8ca4,	// (0x00040341) popup_fep_china_uni_window

0x24bc,	// (0x00039b59) popup_fep_japan_candidate_window_ParamLimits

0x24bc,	// (0x00039b59) popup_fep_japan_candidate_window

0x24da,	// (0x00039b77) popup_fep_japan_predictive_window_ParamLimits

0x24da,	// (0x00039b77) popup_fep_japan_predictive_window

0x8cfe,	// (0x0004039b) popup_find_window

0x8d1b,	// (0x000403b8) popup_grid_graphic_window_ParamLimits

0x8d1b,	// (0x000403b8) popup_grid_graphic_window

0x253f,	// (0x00039bdc) popup_large_graphic_colour_window

0x8db3,	// (0x00040450) popup_menu_window_ParamLimits

0x8db3,	// (0x00040450) popup_menu_window

0x8f7f,	// (0x0004061c) popup_note_image_window

0x8f45,	// (0x000405e2) popup_note_wait_window_ParamLimits

0x8f45,	// (0x000405e2) popup_note_wait_window

0x8f97,	// (0x00040634) popup_note_window_ParamLimits

0x8f97,	// (0x00040634) popup_note_window

0x903d,	// (0x000406da) popup_query_code_window_ParamLimits

0x903d,	// (0x000406da) popup_query_code_window

0x2789,	// (0x00039e26) popup_query_data_code_window_ParamLimits

0x2789,	// (0x00039e26) popup_query_data_code_window

0x9077,	// (0x00040714) popup_query_data_window_ParamLimits

0x9077,	// (0x00040714) popup_query_data_window

0x90f3,	// (0x00040790) popup_query_sat_info_window_ParamLimits

0x90f3,	// (0x00040790) popup_query_sat_info_window

0x918a,	// (0x00040827) popup_snote_single_graphic_window_ParamLimits

0x918a,	// (0x00040827) popup_snote_single_graphic_window

0x918a,	// (0x00040827) popup_snote_single_text_window_ParamLimits

0x918a,	// (0x00040827) popup_snote_single_text_window

0x280c,	// (0x00039ea9) popup_sub_window_general

0x293a,	// (0x00039fd7) popup_window_general_ParamLimits

0x293a,	// (0x00039fd7) popup_window_general

0xcc25,	// (0x000442c2) power_save_pane

0x8aa2,	// (0x0004013f) control_pane_g1_ParamLimits

0x8aa2,	// (0x0004013f) control_pane_g1

0x8acb,	// (0x00040168) control_pane_g2_ParamLimits

0x8acb,	// (0x00040168) control_pane_g2

0xcbc7,	// (0x00044264) control_pane_g3_ParamLimits

0xcbc7,	// (0x00044264) control_pane_g3

0x0007,

0xf78e,	// (0x00046e2b) control_pane_g_ParamLimits

0xf78e,	// (0x00046e2b) control_pane_g

0x8b0c,	// (0x000401a9) control_pane_t1_ParamLimits

0x8b0c,	// (0x000401a9) control_pane_t1

0x8b6a,	// (0x00040207) control_pane_t2_ParamLimits

0x8b6a,	// (0x00040207) control_pane_t2

0x0002,

0xf79f,	// (0x00046e3c) control_pane_t_ParamLimits

0xf79f,	// (0x00046e3c) control_pane_t

0xcae8,	// (0x00044185) navi_navi_volume_pane_cp1

0xcaf1,	// (0x0004418e) status_small_icon_pane

0xcaf9,	// (0x00044196) status_small_pane_g1_ParamLimits

0xcaf9,	// (0x00044196) status_small_pane_g1

0xcb2d,	// (0x000441ca) status_small_pane_g2_ParamLimits

0xcb2d,	// (0x000441ca) status_small_pane_g2

0xcb39,	// (0x000441d6) status_small_pane_g3_ParamLimits

0xcb39,	// (0x000441d6) status_small_pane_g3

0xcb45,	// (0x000441e2) status_small_pane_g4_ParamLimits

0xcb45,	// (0x000441e2) status_small_pane_g4

0xcb51,	// (0x000441ee) status_small_pane_g5_ParamLimits

0xcb51,	// (0x000441ee) status_small_pane_g5

0xcb60,	// (0x000441fd) status_small_pane_g6_ParamLimits

0xcb60,	// (0x000441fd) status_small_pane_g6

0x0007,

0xf77d,	// (0x00046e1a) status_small_pane_g_ParamLimits

0xf77d,	// (0x00046e1a) status_small_pane_g

0xcb90,	// (0x0004422d) status_small_pane_t1

0xcbb3,	// (0x00044250) status_small_wait_pane_ParamLimits

0xcbb3,	// (0x00044250) status_small_wait_pane

0x8a8a,	// (0x00040127) aid_levels_signal_ParamLimits

0x8a8a,	// (0x00040127) aid_levels_signal

0xa04c,	// (0x000416e9) signal_pane_g1_ParamLimits

0xa04c,	// (0x000416e9) signal_pane_g1

0xa067,	// (0x00041704) signal_pane_g2_ParamLimits

0xa067,	// (0x00041704) signal_pane_g2

0x0003,

0xf70e,	// (0x00046dab) signal_pane_g_ParamLimits

0xf70e,	// (0x00046dab) signal_pane_g

0xc577,	// (0x00043c14) context_pane_g1

0x85b5,	// (0x0003fc52) title_pane_g1

0x85ec,	// (0x0003fc89) title_pane_t1

0xb2a7,	// (0x00042944) title_pane_t2

0xb2cd,	// (0x0004296a) title_pane_t3

0x0002,

0xf55d,	// (0x00046bfa) title_pane_t

0xa5e4,	// (0x00041c81) aid_levels_battery_ParamLimits

0xa5e4,	// (0x00041c81) aid_levels_battery

0xa600,	// (0x00041c9d) battery_pane_g1_ParamLimits

0xa600,	// (0x00041c9d) battery_pane_g1

0xa61d,	// (0x00041cba) battery_pane_g2_ParamLimits

0xa61d,	// (0x00041cba) battery_pane_g2

0x0001,

0xf7b1,	// (0x00046e4e) battery_pane_g_ParamLimits

0xf7b1,	// (0x00046e4e) battery_pane_g

0xa8b5,	// (0x00041f52) uni_indicator_pane_g1

0xa8ca,	// (0x00041f67) uni_indicator_pane_g2

0xdd1f,	// (0x000453bc) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x00046fbf) uni_indicator_pane_g

0xc857,	// (0x00043ef4) navi_icon_pane_ParamLimits

0xc857,	// (0x00043ef4) navi_icon_pane

0xc7db,	// (0x00043e78) navi_midp_pane

0xc873,	// (0x00043f10) navi_navi_pane

0xc87d,	// (0x00043f1a) navi_text_pane_ParamLimits

0xc87d,	// (0x00043f1a) navi_text_pane

0xb287,	// (0x00042924) status_small_wait_pane_g1

0xb5a8,	// (0x00042c45) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x00046fba) status_small_wait_pane_g

0xda68,	// (0x00045105) navi_navi_icon_text_pane

0xda70,	// (0x0004510d) navi_navi_pane_g1_ParamLimits

0xda70,	// (0x0004510d) navi_navi_pane_g1

0xda82,	// (0x0004511f) navi_navi_pane_g2_ParamLimits

0xda82,	// (0x0004511f) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x00046f88) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x00046f88) navi_navi_pane_g

0xda94,	// (0x00045131) navi_navi_tabs_pane

0xda9d,	// (0x0004513a) navi_navi_text_pane

0xda68,	// (0x00045105) navi_navi_volume_pane

0xa83e,	// (0x00041edb) navi_text_pane_t1

0xda4a,	// (0x000450e7) navi_icon_pane_g1

0xd9b1,	// (0x0004504e) navi_navi_text_pane_t1

0x9455,	// (0x00040af2) navi_navi_volume_pane_g1

0x945d,	// (0x00040afa) volume_small_pane

0xa786,	// (0x00041e23) navi_navi_icon_text_pane_g1

0xa78e,	// (0x00041e2b) navi_navi_icon_text_pane_t1

0xc873,	// (0x00043f10) navi_tabs_2_long_pane

0xc873,	// (0x00043f10) navi_tabs_2_pane

0xc873,	// (0x00043f10) navi_tabs_3_long_pane

0xc873,	// (0x00043f10) navi_tabs_3_pane

0xc873,	// (0x00043f10) navi_tabs_4_pane

0x9435,	// (0x00040ad2) tabs_2_active_pane_ParamLimits

0x9435,	// (0x00040ad2) tabs_2_active_pane

0x9445,	// (0x00040ae2) tabs_2_passive_pane_ParamLimits

0x9445,	// (0x00040ae2) tabs_2_passive_pane

0x9403,	// (0x00040aa0) tabs_3_active_pane_ParamLimits

0x9403,	// (0x00040aa0) tabs_3_active_pane

0x9413,	// (0x00040ab0) tabs_3_passive_pane_ParamLimits

0x9413,	// (0x00040ab0) tabs_3_passive_pane

0x9424,	// (0x00040ac1) tabs_3_passive_pane_cp_ParamLimits

0x9424,	// (0x00040ac1) tabs_3_passive_pane_cp

0x93bf,	// (0x00040a5c) tabs_4_active_pane_ParamLimits

0x93bf,	// (0x00040a5c) tabs_4_active_pane

0x93d0,	// (0x00040a6d) tabs_4_passive_pane_ParamLimits

0x93d0,	// (0x00040a6d) tabs_4_passive_pane

0x93e1,	// (0x00040a7e) tabs_4_passive_pane_cp_ParamLimits

0x93e1,	// (0x00040a7e) tabs_4_passive_pane_cp

0x93f2,	// (0x00040a8f) tabs_4_passive_pane_cp2_ParamLimits

0x93f2,	// (0x00040a8f) tabs_4_passive_pane_cp2

0x939f,	// (0x00040a3c) tabs_2_long_active_pane_ParamLimits

0x939f,	// (0x00040a3c) tabs_2_long_active_pane

0x93af,	// (0x00040a4c) tabs_2_long_passive_pane_ParamLimits

0x93af,	// (0x00040a4c) tabs_2_long_passive_pane

0x936a,	// (0x00040a07) tabs_3_long_active_pane_ParamLimits

0x936a,	// (0x00040a07) tabs_3_long_active_pane

0x937b,	// (0x00040a18) tabs_3_long_passive_pane_ParamLimits

0x937b,	// (0x00040a18) tabs_3_long_passive_pane

0x938e,	// (0x00040a2b) tabs_3_long_passive_pane_cp_ParamLimits

0x938e,	// (0x00040a2b) tabs_3_long_passive_pane_cp

0x2f16,	// (0x0003a5b3) volume_small_pane_g1

0x9319,	// (0x000409b6) volume_small_pane_g2

0x9322,	// (0x000409bf) volume_small_pane_g3

0x932b,	// (0x000409c8) volume_small_pane_g4

0x9334,	// (0x000409d1) volume_small_pane_g5

0x933d,	// (0x000409da) volume_small_pane_g6

0x9346,	// (0x000409e3) volume_small_pane_g7

0x934f,	// (0x000409ec) volume_small_pane_g8

0x9358,	// (0x000409f5) volume_small_pane_g9

0x9361,	// (0x000409fe) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x00046f54) volume_small_pane_g

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp2_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp2

0x8678,	// (0x0003fd15) tabs_3_active_pane_g1

0x8680,	// (0x0003fd1d) tabs_3_active_pane_t1

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp2_ParamLimits

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp2

0x8678,	// (0x0003fd15) tabs_3_passive_pane_g1

0x8680,	// (0x0003fd1d) tabs_3_passive_pane_t1

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp3_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp3

0x8692,	// (0x0003fd2f) tabs_4_active_pane_g1

0x869a,	// (0x0003fd37) tabs_4_active_pane_t1

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp3_ParamLimits

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp3

0x8692,	// (0x0003fd2f) tabs_4_1_passive_pane_g1

0x869a,	// (0x0003fd37) tabs_4_1_passive_pane_t1

0xc155,	// (0x000437f2) list_highlight_pane_cp2

0xa954,	// (0x00041ff1) list_set_pane_ParamLimits

0xa954,	// (0x00041ff1) list_set_pane

0xa9ee,	// (0x0004208b) main_pane_set_t1_ParamLimits

0xa9ee,	// (0x0004208b) main_pane_set_t1

0xaa0e,	// (0x000420ab) main_pane_set_t2_ParamLimits

0xaa0e,	// (0x000420ab) main_pane_set_t2

0xaa22,	// (0x000420bf) main_pane_set_t3_ParamLimits

0xaa22,	// (0x000420bf) main_pane_set_t3

0xaa34,	// (0x000420d1) main_pane_set_t4_ParamLimits

0xaa34,	// (0x000420d1) main_pane_set_t4

0x0003,

0xf987,	// (0x00047024) main_pane_set_t_ParamLimits

0xf987,	// (0x00047024) main_pane_set_t

0xaa46,	// (0x000420e3) setting_code_pane

0xaa4e,	// (0x000420eb) setting_slider_graphic_pane

0xaa4e,	// (0x000420eb) setting_slider_pane

0xaa4e,	// (0x000420eb) setting_text_pane

0xaa4e,	// (0x000420eb) setting_volume_pane

0x1739,	// (0x00038dd6) volume_set_pane

0xb2ed,	// (0x0004298a) bg_set_opt_pane_cp

0x1741,	// (0x00038dde) setting_slider_pane_t1

0x175a,	// (0x00038df7) setting_slider_pane_t2

0x1774,	// (0x00038e11) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00046c01) setting_slider_pane_t

0x178c,	// (0x00038e29) slider_set_pane

0xb291,	// (0x0004292e) bg_set_opt_pane_cp2

0xb2fb,	// (0x00042998) setting_slider_graphic_pane_g1

0x17a2,	// (0x00038e3f) setting_slider_graphic_pane_t1

0x17b2,	// (0x00038e4f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00046c08) setting_slider_graphic_pane_t

0x17c2,	// (0x00038e5f) slider_set_pane_cp

0xb291,	// (0x0004292e) input_focus_pane_cp1

0xdefc,	// (0x00045599) list_set_text_pane

0xb287,	// (0x00042924) setting_text_pane_g1

0xb291,	// (0x0004292e) input_focus_pane_cp2

0xb287,	// (0x00042924) setting_code_pane_g1

0xb304,	// (0x000429a1) setting_code_pane_t1

0x0444,	// (0x00037ae1) set_text_pane_t1_ParamLimits

0x0444,	// (0x00037ae1) set_text_pane_t1

0xc04b,	// (0x000436e8) set_opt_bg_pane_g1

0xc053,	// (0x000436f0) set_opt_bg_pane_g2

0xdedc,	// (0x00045579) set_opt_bg_pane_g3

0xc063,	// (0x00043700) set_opt_bg_pane_g4

0xc06b,	// (0x00043708) set_opt_bg_pane_g5

0xc073,	// (0x00043710) set_opt_bg_pane_g6

0xdee4,	// (0x00045581) set_opt_bg_pane_g7

0xdeec,	// (0x00045589) set_opt_bg_pane_g8

0xdef4,	// (0x00045591) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x00047011) set_opt_bg_pane_g

0xdecf,	// (0x0004556c) slider_set_pane_g1

0x326f,	// (0x0003a90c) slider_set_pane_g2

0x0006,

0xf965,	// (0x00047002) slider_set_pane_g

0x31e6,	// (0x0003a883) volume_set_pane_g1

0x31ee,	// (0x0003a88b) volume_set_pane_g2

0x31f6,	// (0x0003a893) volume_set_pane_g3

0x31fe,	// (0x0003a89b) volume_set_pane_g4

0x3206,	// (0x0003a8a3) volume_set_pane_g5

0x320e,	// (0x0003a8ab) volume_set_pane_g6

0x3216,	// (0x0003a8b3) volume_set_pane_g7

0x321e,	// (0x0003a8bb) volume_set_pane_g8

0x3226,	// (0x0003a8c3) volume_set_pane_g9

0x322e,	// (0x0003a8cb) volume_set_pane_g10

0x0009,

0xf93d,	// (0x00046fda) volume_set_pane_g

0x86ac,	// (0x0003fd49) indicator_pane_ParamLimits

0x86ac,	// (0x0003fd49) indicator_pane

0x86d4,	// (0x0003fd71) main_idle_pane_g2_ParamLimits

0x86d4,	// (0x0003fd71) main_idle_pane_g2

0x870c,	// (0x0003fda9) main_pane_idle_g1_ParamLimits

0x870c,	// (0x0003fda9) main_pane_idle_g1

0xb312,	// (0x000429af) popup_clock_digital_analogue_window_ParamLimits

0xb312,	// (0x000429af) popup_clock_digital_analogue_window

0x8733,	// (0x0003fdd0) soft_indicator_pane_ParamLimits

0x8733,	// (0x0003fdd0) soft_indicator_pane

0x874d,	// (0x0003fdea) wallpaper_pane_ParamLimits

0x874d,	// (0x0003fdea) wallpaper_pane

0xb287,	// (0x00042924) wallpaper_pane_g1

0x875f,	// (0x0003fdfc) indicator_pane_g1_ParamLimits

0x875f,	// (0x0003fdfc) indicator_pane_g1

0xe04e,	// (0x000456eb) navi_navi_icon_text_pane_srt_g1

0xb340,	// (0x000429dd) soft_indicator_pane_t1

0xb35a,	// (0x000429f7) aid_ps_area_pane

0x8775,	// (0x0003fe12) aid_ps_clock_pane

0xb36b,	// (0x00042a08) aid_ps_indicator_pane

0xb377,	// (0x00042a14) indicator_ps_pane_ParamLimits

0xb377,	// (0x00042a14) indicator_ps_pane

0xb386,	// (0x00042a23) power_save_pane_g1_ParamLimits

0xb386,	// (0x00042a23) power_save_pane_g1

0xb392,	// (0x00042a2f) power_save_pane_g2_ParamLimits

0xb392,	// (0x00042a2f) power_save_pane_g2

0x129c,	// (0x00038939) aid_navinavi_width_pane

0xb35a,	// (0x000429f7) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00046c0d) power_save_pane_g_ParamLimits

0xf570,	// (0x00046c0d) power_save_pane_g

0xb3a0,	// (0x00042a3d) power_save_pane_t1_ParamLimits

0xb3a0,	// (0x00042a3d) power_save_pane_t1

0x8775,	// (0x0003fe12) aid_ps_clock_pane_ParamLimits

0xb36b,	// (0x00042a08) aid_ps_indicator_pane_ParamLimits

0xb3b2,	// (0x00042a4f) power_save_pane_t4_ParamLimits

0xb3b2,	// (0x00042a4f) power_save_pane_t4

0x0001,

0xf575,	// (0x00046c12) power_save_pane_t_ParamLimits

0xf575,	// (0x00046c12) power_save_pane_t

0xb3dc,	// (0x00042a79) power_save_t3_ParamLimits

0xb3dc,	// (0x00042a79) power_save_t3

0xb3c7,	// (0x00042a64) power_save_t2_ParamLimits

0xb3c7,	// (0x00042a64) power_save_t2

0xb3f1,	// (0x00042a8e) indicator_ps_pane_g1

0x8783,	// (0x0003fe20) ai_gene_pane_ParamLimits

0x8783,	// (0x0003fe20) ai_gene_pane

0x879a,	// (0x0003fe37) ai_links_pane_ParamLimits

0x879a,	// (0x0003fe37) ai_links_pane

0x87b2,	// (0x0003fe4f) indicator_pane_cp1_ParamLimits

0x87b2,	// (0x0003fe4f) indicator_pane_cp1

0x87c1,	// (0x0003fe5e) main_pane_idle_g1_cp_ParamLimits

0x87c1,	// (0x0003fe5e) main_pane_idle_g1_cp

0xb3fa,	// (0x00042a97) popup_ai_links_title_window

0x87d9,	// (0x0003fe76) soft_indicator_pane_cp1_ParamLimits

0x87d9,	// (0x0003fe76) soft_indicator_pane_cp1

0xdd0d,	// (0x000453aa) ai_links_pane_g1

0xdd16,	// (0x000453b3) grid_ai_links_pane

0xa8ac,	// (0x00041f49) ai_gene_pane_1

0xdcfb,	// (0x00045398) ai_gene_pane_2

0xdd04,	// (0x000453a1) list_highlight_pane_cp4

0xa888,	// (0x00041f25) cell_ai_link_pane_ParamLimits

0xa888,	// (0x00041f25) cell_ai_link_pane

0xdcf3,	// (0x00045390) cell_ai_link_pane_g1

0xb5a8,	// (0x00042c45) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x00046fb5) cell_ai_link_pane_g

0xb291,	// (0x0004292e) grid_highlight_cp2

0xb291,	// (0x0004292e) bg_popup_sub_pane_cp1

0xb411,	// (0x00042aae) popup_ai_links_title_window_t1

0xdc65,	// (0x00045302) ai_gene_pane_1_g1_ParamLimits

0xdc65,	// (0x00045302) ai_gene_pane_1_g1

0xdc71,	// (0x0004530e) ai_gene_pane_1_g2_ParamLimits

0xdc71,	// (0x0004530e) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x00046fab) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x00046fab) ai_gene_pane_1_g

0xdc7e,	// (0x0004531b) ai_gene_pane_1_t1_ParamLimits

0xdc7e,	// (0x0004531b) ai_gene_pane_1_t1

0xdcb2,	// (0x0004534f) grid_ai_soft_ind_pane

0xdc50,	// (0x000452ed) ai_gene_pane_2_t1_ParamLimits

0xdc50,	// (0x000452ed) ai_gene_pane_2_t1

0x87ed,	// (0x0003fe8a) main_pane_empty_t1_ParamLimits

0x87ed,	// (0x0003fe8a) main_pane_empty_t1

0x8805,	// (0x0003fea2) main_pane_empty_t2_ParamLimits

0x8805,	// (0x0003fea2) main_pane_empty_t2

0x881a,	// (0x0003feb7) main_pane_empty_t3_ParamLimits

0x881a,	// (0x0003feb7) main_pane_empty_t3

0x882c,	// (0x0003fec9) main_pane_empty_t4_ParamLimits

0x882c,	// (0x0003fec9) main_pane_empty_t4

0x883e,	// (0x0003fedb) main_pane_empty_t5_ParamLimits

0x883e,	// (0x0003fedb) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00046c17) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00046c17) main_pane_empty_t

0xc09c,	// (0x00043739) bg_popup_window_pane_ParamLimits

0xc09c,	// (0x00043739) bg_popup_window_pane

0xd9bf,	// (0x0004505c) find_popup_pane_cp2_ParamLimits

0xd9bf,	// (0x0004505c) find_popup_pane_cp2

0xd9cb,	// (0x00045068) heading_pane_ParamLimits

0xd9cb,	// (0x00045068) heading_pane

0xb291,	// (0x0004292e) bg_popup_sub_pane

0xa7ab,	// (0x00041e48) bg_popup_window_pane_g1_ParamLimits

0xa7ab,	// (0x00041e48) bg_popup_window_pane_g1

0xa7ba,	// (0x00041e57) bg_popup_window_pane_g2_ParamLimits

0xa7ba,	// (0x00041e57) bg_popup_window_pane_g2

0xa7c6,	// (0x00041e63) bg_popup_window_pane_g3_ParamLimits

0xa7c6,	// (0x00041e63) bg_popup_window_pane_g3

0xa7d2,	// (0x00041e6f) bg_popup_window_pane_g4_ParamLimits

0xa7d2,	// (0x00041e6f) bg_popup_window_pane_g4

0xa7e1,	// (0x00041e7e) bg_popup_window_pane_g5_ParamLimits

0xa7e1,	// (0x00041e7e) bg_popup_window_pane_g5

0xa7f1,	// (0x00041e8e) bg_popup_window_pane_g6_ParamLimits

0xa7f1,	// (0x00041e8e) bg_popup_window_pane_g6

0xa7fd,	// (0x00041e9a) bg_popup_window_pane_g7_ParamLimits

0xa7fd,	// (0x00041e9a) bg_popup_window_pane_g7

0xa80c,	// (0x00041ea9) bg_popup_window_pane_g8_ParamLimits

0xa80c,	// (0x00041ea9) bg_popup_window_pane_g8

0xa81b,	// (0x00041eb8) bg_popup_window_pane_g9_ParamLimits

0xa81b,	// (0x00041eb8) bg_popup_window_pane_g9

0xd9a5,	// (0x00045042) bg_popup_window_pane_g10_ParamLimits

0xd9a5,	// (0x00045042) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x00046f73) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x00046f73) bg_popup_window_pane_g

0xd95c,	// (0x00044ff9) bg_popup_heading_pane_ParamLimits

0xd95c,	// (0x00044ff9) bg_popup_heading_pane

0x35a9,	// (0x0003ac46) tabs_4_passive_pane_cp_srt_ParamLimits

0x35a9,	// (0x0003ac46) tabs_4_passive_pane_cp_srt

0x35bb,	// (0x0003ac58) tabs_4_passive_pane_srt_ParamLimits

0xd970,	// (0x0004500d) heading_pane_g2

0x35bb,	// (0x0003ac58) tabs_4_passive_pane_srt

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp3_srt_ParamLimits

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp3_srt

0xd978,	// (0x00045015) heading_pane_t1_ParamLimits

0xd978,	// (0x00045015) heading_pane_t1

0xd98f,	// (0x0004502c) heading_pane_t2_ParamLimits

0xd98f,	// (0x0004502c) heading_pane_t2

0x0001,

0xf8d1,	// (0x00046f6e) heading_pane_t_ParamLimits

0xf8d1,	// (0x00046f6e) heading_pane_t

0xd4ec,	// (0x00044b89) bg_popup_heading_pane_g1

0xd57d,	// (0x00044c1a) bg_popup_heading_pane_g2

0xd587,	// (0x00044c24) bg_popup_heading_pane_g3

0xd591,	// (0x00044c2e) bg_popup_heading_pane_g4

0xd59b,	// (0x00044c38) bg_popup_heading_pane_g5

0xd5a5,	// (0x00044c42) bg_popup_heading_pane_g6

0xd5ad,	// (0x00044c4a) bg_popup_heading_pane_g7

0xd5b5,	// (0x00044c52) bg_popup_heading_pane_g8

0xd5bf,	// (0x00044c5c) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x00046f2a) bg_popup_heading_pane_g

0xce07,	// (0x000444a4) bg_popup_sub_pane_g1

0xce0f,	// (0x000444ac) bg_popup_sub_pane_g2

0xce17,	// (0x000444b4) bg_popup_sub_pane_g3

0xce1f,	// (0x000444bc) bg_popup_sub_pane_g4

0xce27,	// (0x000444c4) bg_popup_sub_pane_g5

0xce2f,	// (0x000444cc) bg_popup_sub_pane_g6

0xce37,	// (0x000444d4) bg_popup_sub_pane_g7

0xce3f,	// (0x000444dc) bg_popup_sub_pane_g8

0xce47,	// (0x000444e4) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x00046f04) bg_popup_sub_pane_g

0xb2df,	// (0x0004297c) bg_popup_window_pane_cp5_ParamLimits

0xb2df,	// (0x0004297c) bg_popup_window_pane_cp5

0xb42e,	// (0x00042acb) popup_note_window_g1_ParamLimits

0xb42e,	// (0x00042acb) popup_note_window_g1

0xb43a,	// (0x00042ad7) popup_note_window_t1_ParamLimits

0xb43a,	// (0x00042ad7) popup_note_window_t1

0xb44c,	// (0x00042ae9) popup_note_window_t2_ParamLimits

0xb44c,	// (0x00042ae9) popup_note_window_t2

0xb45e,	// (0x00042afb) popup_note_window_t3_ParamLimits

0xb45e,	// (0x00042afb) popup_note_window_t3

0xb470,	// (0x00042b0d) popup_note_window_t4_ParamLimits

0xb470,	// (0x00042b0d) popup_note_window_t4

0xb498,	// (0x00042b35) popup_note_window_t5_ParamLimits

0xb498,	// (0x00042b35) popup_note_window_t5

0x0004,

0xf585,	// (0x00046c22) popup_note_window_t_ParamLimits

0xf585,	// (0x00046c22) popup_note_window_t

0xb4bc,	// (0x00042b59) bg_popup_window_pane_cp6_ParamLimits

0xb4bc,	// (0x00042b59) bg_popup_window_pane_cp6

0xd460,	// (0x00044afd) popup_note_image_window_g1_ParamLimits

0xd460,	// (0x00044afd) popup_note_image_window_g1

0xd46c,	// (0x00044b09) popup_note_image_window_g2_ParamLimits

0xd46c,	// (0x00044b09) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x00046ef8) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x00046ef8) popup_note_image_window_g

0xd485,	// (0x00044b22) popup_note_image_window_t1_ParamLimits

0xd485,	// (0x00044b22) popup_note_image_window_t1

0xd49e,	// (0x00044b3b) popup_note_image_window_t2_ParamLimits

0xd49e,	// (0x00044b3b) popup_note_image_window_t2

0xd4b7,	// (0x00044b54) popup_note_image_window_t3_ParamLimits

0xd4b7,	// (0x00044b54) popup_note_image_window_t3

0x0002,

0xf860,	// (0x00046efd) popup_note_image_window_t_ParamLimits

0xf860,	// (0x00046efd) popup_note_image_window_t

0xd33d,	// (0x000449da) bg_popup_window_pane_cp7_ParamLimits

0xd33d,	// (0x000449da) bg_popup_window_pane_cp7

0xd36d,	// (0x00044a0a) popup_note_wait_window_g1_ParamLimits

0xd36d,	// (0x00044a0a) popup_note_wait_window_g1

0xd379,	// (0x00044a16) popup_note_wait_window_g2_ParamLimits

0xd379,	// (0x00044a16) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x00046ee6) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x00046ee6) popup_note_wait_window_g

0xd391,	// (0x00044a2e) popup_note_wait_window_t1_ParamLimits

0xd391,	// (0x00044a2e) popup_note_wait_window_t1

0xd3b8,	// (0x00044a55) popup_note_wait_window_t2_ParamLimits

0xd3b8,	// (0x00044a55) popup_note_wait_window_t2

0xd3d5,	// (0x00044a72) popup_note_wait_window_t3_ParamLimits

0xd3d5,	// (0x00044a72) popup_note_wait_window_t3

0xd3e8,	// (0x00044a85) popup_note_wait_window_t4_ParamLimits

0xd3e8,	// (0x00044a85) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x00046eed) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x00046eed) popup_note_wait_window_t

0xd40d,	// (0x00044aaa) wait_bar_pane_ParamLimits

0xd40d,	// (0x00044aaa) wait_bar_pane

0xb291,	// (0x0004292e) wait_anim_pane

0xb291,	// (0x0004292e) wait_border_pane

0xb287,	// (0x00042924) wait_anim_pane_g1

0xb287,	// (0x00042924) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00046da6) wait_anim_pane_g

0xd2e1,	// (0x0004497e) wait_border_pane_g1

0xd2ec,	// (0x00044989) wait_border_pane_g2

0xd2f5,	// (0x00044992) wait_border_pane_g3

0x0002,

0xf842,	// (0x00046edf) wait_border_pane_g

0xd151,	// (0x000447ee) bg_popup_window_pane_cp16_ParamLimits

0xd151,	// (0x000447ee) bg_popup_window_pane_cp16

0xd251,	// (0x000448ee) indicator_popup_pane_cp4_ParamLimits

0xd251,	// (0x000448ee) indicator_popup_pane_cp4

0xd265,	// (0x00044902) popup_query_data_window_t1_ParamLimits

0xd265,	// (0x00044902) popup_query_data_window_t1

0xd277,	// (0x00044914) popup_query_data_window_t2_ParamLimits

0xd277,	// (0x00044914) popup_query_data_window_t2

0xd290,	// (0x0004492d) popup_query_data_window_t3_ParamLimits

0xd290,	// (0x0004492d) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x00046ed8) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x00046ed8) popup_query_data_window_t

0xd2aa,	// (0x00044947) query_popup_data_pane_ParamLimits

0xd2aa,	// (0x00044947) query_popup_data_pane

0xd2be,	// (0x0004495b) query_popup_data_pane_cp1_ParamLimits

0xd2be,	// (0x0004495b) query_popup_data_pane_cp1

0xd151,	// (0x000447ee) bg_popup_window_pane_cp10_ParamLimits

0xd151,	// (0x000447ee) bg_popup_window_pane_cp10

0xd183,	// (0x00044820) indicator_popup_pane_ParamLimits

0xd183,	// (0x00044820) indicator_popup_pane

0xd1a5,	// (0x00044842) popup_query_code_window_t1_ParamLimits

0xd1a5,	// (0x00044842) popup_query_code_window_t1

0xd1bf,	// (0x0004485c) popup_query_code_window_t2_ParamLimits

0xd1bf,	// (0x0004485c) popup_query_code_window_t2

0xd208,	// (0x000448a5) popup_query_code_window_t3_ParamLimits

0xd208,	// (0x000448a5) popup_query_code_window_t3

0x0002,

0xf834,	// (0x00046ed1) popup_query_code_window_t_ParamLimits

0xf834,	// (0x00046ed1) popup_query_code_window_t

0xd237,	// (0x000448d4) query_popup_pane_ParamLimits

0xd237,	// (0x000448d4) query_popup_pane

0xb4bc,	// (0x00042b59) bg_popup_window_pane_cp15_ParamLimits

0xb4bc,	// (0x00042b59) bg_popup_window_pane_cp15

0xb4da,	// (0x00042b77) indicator_popup_pane_cp1_ParamLimits

0xb4da,	// (0x00042b77) indicator_popup_pane_cp1

0xb4ed,	// (0x00042b8a) indicator_popup_pane_cp2_ParamLimits

0xb4ed,	// (0x00042b8a) indicator_popup_pane_cp2

0xb500,	// (0x00042b9d) popup_query_data_code_window_g1_ParamLimits

0xb500,	// (0x00042b9d) popup_query_data_code_window_g1

0xb513,	// (0x00042bb0) popup_query_data_code_window_t1_ParamLimits

0xb513,	// (0x00042bb0) popup_query_data_code_window_t1

0xb525,	// (0x00042bc2) popup_query_data_code_window_t2_ParamLimits

0xb525,	// (0x00042bc2) popup_query_data_code_window_t2

0xb537,	// (0x00042bd4) popup_query_data_code_window_t3_ParamLimits

0xb537,	// (0x00042bd4) popup_query_data_code_window_t3

0xb54d,	// (0x00042bea) popup_query_data_code_window_t4_ParamLimits

0xb54d,	// (0x00042bea) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00046c2d) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00046c2d) popup_query_data_code_window_t

0xc827,	// (0x00043ec4) list_single_midp_graphic_pane_g3

0xb565,	// (0x00042c02) query_popup_data_pane_cp2_ParamLimits

0xb578,	// (0x00042c15) query_popup_pane_cp2_ParamLimits

0xb578,	// (0x00042c15) query_popup_pane_cp2

0xb291,	// (0x0004292e) bg_popup_window_pane_cp11

0xd149,	// (0x000447e6) heading_pane_cp5

0xb606,	// (0x00042ca3) listscroll_popup_info_pane

0xb291,	// (0x0004292e) input_focus_pane_cp3

0xb58b,	// (0x00042c28) query_popup_pane_t1

0xb599,	// (0x00042c36) list_popup_info_pane_ParamLimits

0xb599,	// (0x00042c36) list_popup_info_pane

0xb5a8,	// (0x00042c45) listscroll_popup_info_pane_g1

0xb5b0,	// (0x00042c4d) scroll_pane_cp7

0xb5ba,	// (0x00042c57) popup_info_list_pane_t1_ParamLimits

0xb5ba,	// (0x00042c57) popup_info_list_pane_t1

0xb5d4,	// (0x00042c71) popup_info_list_pane_t2_ParamLimits

0xb5d4,	// (0x00042c71) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00046c36) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00046c36) popup_info_list_pane_t

0xb291,	// (0x0004292e) bg_popup_window_pane_cp12

0xe068,	// (0x00045705) find_popup_pane

0xb2ed,	// (0x0004298a) bg_popup_window_pane_cp3

0xb5ee,	// (0x00042c8b) heading_pane_cp3

0xb5fa,	// (0x00042c97) listscroll_popup_graphic_pane

0xb291,	// (0x0004292e) bg_popup_window_pane_cp4

0x88a0,	// (0x0003ff3d) heading_pane_cp4

0xb606,	// (0x00042ca3) listscroll_popup_colour_pane

0xb60e,	// (0x00042cab) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb60e,	// (0x00042cab) cell_large_graphic_colour_none_popup_pane

0x88a8,	// (0x0003ff45) grid_large_graphic_colour_popup_pane_ParamLimits

0x88a8,	// (0x0003ff45) grid_large_graphic_colour_popup_pane

0xb622,	// (0x00042cbf) listscroll_popup_colour_pane_g1_ParamLimits

0xb622,	// (0x00042cbf) listscroll_popup_colour_pane_g1

0xb639,	// (0x00042cd6) listscroll_popup_colour_pane_g2_ParamLimits

0xb639,	// (0x00042cd6) listscroll_popup_colour_pane_g2

0xb650,	// (0x00042ced) listscroll_popup_colour_pane_g3_ParamLimits

0xb650,	// (0x00042ced) listscroll_popup_colour_pane_g3

0x88cc,	// (0x0003ff69) listscroll_popup_colour_pane_g4_ParamLimits

0x88cc,	// (0x0003ff69) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00046c3b) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00046c3b) listscroll_popup_colour_pane_g

0xb660,	// (0x00042cfd) scroll_pane_cp6_ParamLimits

0xb660,	// (0x00042cfd) scroll_pane_cp6

0x88db,	// (0x0003ff78) cell_large_graphic_colour_popup_pane_ParamLimits

0x88db,	// (0x0003ff78) cell_large_graphic_colour_popup_pane

0xb672,	// (0x00042d0f) cell_large_graphic_colour_none_popup_pane_t1

0xb291,	// (0x0004292e) grid_highlight_pane_cp5

0xb681,	// (0x00042d1e) cell_large_graphic_colour_popup_pane_g1

0xb689,	// (0x00042d26) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00046c44) cell_large_graphic_colour_popup_pane_g

0xb691,	// (0x00042d2e) cell_large_graphic_colour_popup_pane_g2_copy1

0xb69a,	// (0x00042d37) grid_highlight_pane_cp4

0xb6a2,	// (0x00042d3f) bg_popup_window_pane_cp8_ParamLimits

0xb6a2,	// (0x00042d3f) bg_popup_window_pane_cp8

0xb6bd,	// (0x00042d5a) popup_snote_single_text_window_g1_ParamLimits

0xb6bd,	// (0x00042d5a) popup_snote_single_text_window_g1

0xb6cf,	// (0x00042d6c) popup_snote_single_text_window_t1_ParamLimits

0xb6cf,	// (0x00042d6c) popup_snote_single_text_window_t1

0xb6e2,	// (0x00042d7f) popup_snote_single_text_window_t2_ParamLimits

0xb6e2,	// (0x00042d7f) popup_snote_single_text_window_t2

0xb6f5,	// (0x00042d92) popup_snote_single_text_window_t3_ParamLimits

0xb6f5,	// (0x00042d92) popup_snote_single_text_window_t3

0xb72e,	// (0x00042dcb) popup_snote_single_text_window_t4_ParamLimits

0xb72e,	// (0x00042dcb) popup_snote_single_text_window_t4

0xb762,	// (0x00042dff) popup_snote_single_text_window_t5_ParamLimits

0xb762,	// (0x00042dff) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00046c49) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00046c49) popup_snote_single_text_window_t

0xb791,	// (0x00042e2e) bg_popup_window_pane_cp9_ParamLimits

0xb791,	// (0x00042e2e) bg_popup_window_pane_cp9

0xb6bd,	// (0x00042d5a) popup_snote_single_graphic_window_g1_ParamLimits

0xb6bd,	// (0x00042d5a) popup_snote_single_graphic_window_g1

0xb79f,	// (0x00042e3c) popup_snote_single_graphic_window_g2_ParamLimits

0xb79f,	// (0x00042e3c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00046c54) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00046c54) popup_snote_single_graphic_window_g

0xb7ab,	// (0x00042e48) popup_snote_single_graphic_window_t1_ParamLimits

0xb7ab,	// (0x00042e48) popup_snote_single_graphic_window_t1

0xb7be,	// (0x00042e5b) popup_snote_single_graphic_window_t2_ParamLimits

0xb7be,	// (0x00042e5b) popup_snote_single_graphic_window_t2

0xb7d1,	// (0x00042e6e) popup_snote_single_graphic_window_t3_ParamLimits

0xb7d1,	// (0x00042e6e) popup_snote_single_graphic_window_t3

0xb80a,	// (0x00042ea7) popup_snote_single_graphic_window_t4_ParamLimits

0xb80a,	// (0x00042ea7) popup_snote_single_graphic_window_t4

0xb83e,	// (0x00042edb) popup_snote_single_graphic_window_t5_ParamLimits

0xb83e,	// (0x00042edb) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00046c59) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00046c59) popup_snote_single_graphic_window_t

0xdff0,	// (0x0004568d) grid_graphic_popup_pane_ParamLimits

0xdff0,	// (0x0004568d) grid_graphic_popup_pane

0xe018,	// (0x000456b5) listscroll_popup_graphic_pane_g1_ParamLimits

0xe018,	// (0x000456b5) listscroll_popup_graphic_pane_g1

0xab3d,	// (0x000421da) listscroll_popup_graphic_pane_g2_ParamLimits

0xab3d,	// (0x000421da) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0004704e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0004704e) listscroll_popup_graphic_pane_g

0xdb30,	// (0x000451cd) scroll_pane_cp5

0xab01,	// (0x0004219e) cell_graphic_popup_pane_ParamLimits

0xab01,	// (0x0004219e) cell_graphic_popup_pane

0xdfbb,	// (0x00045658) cell_graphic_popup_pane_g1

0xdfc3,	// (0x00045660) cell_graphic_popup_pane_g2

0xb691,	// (0x00042d2e) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x00047047) cell_graphic_popup_pane_g

0xdfcc,	// (0x00045669) cell_graphic_popup_pane_t2

0xb69a,	// (0x00042d37) grid_highlight_pane_cp3

0xb87f,	// (0x00042f1c) list_gen_pane_ParamLimits

0xb87f,	// (0x00042f1c) list_gen_pane

0xb8a7,	// (0x00042f44) scroll_pane

0xaabc,	// (0x00042159) bg_list_pane_g1_ParamLimits

0xaabc,	// (0x00042159) bg_list_pane_g1

0xdf6a,	// (0x00045607) bg_list_pane_g2_ParamLimits

0xdf6a,	// (0x00045607) bg_list_pane_g2

0xdf7d,	// (0x0004561a) bg_list_pane_g3_ParamLimits

0xdf7d,	// (0x0004561a) bg_list_pane_g3

0xdf8f,	// (0x0004562c) bg_list_pane_g4_ParamLimits

0xdf8f,	// (0x0004562c) bg_list_pane_g4

0xaad7,	// (0x00042174) bg_list_pane_g5_ParamLimits

0xaad7,	// (0x00042174) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0004703c) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0004703c) bg_list_pane_g

0x9466,	// (0x00040b03) list_double2_graphic_large_graphic_pane_ParamLimits

0x9466,	// (0x00040b03) list_double2_graphic_large_graphic_pane

0x9466,	// (0x00040b03) list_double2_graphic_pane_ParamLimits

0x9466,	// (0x00040b03) list_double2_graphic_pane

0x9466,	// (0x00040b03) list_double2_large_graphic_pane_ParamLimits

0x9466,	// (0x00040b03) list_double2_large_graphic_pane

0x9466,	// (0x00040b03) list_double2_pane_ParamLimits

0x9466,	// (0x00040b03) list_double2_pane

0x9466,	// (0x00040b03) list_double_graphic_heading_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_graphic_heading_pane

0x9466,	// (0x00040b03) list_double_graphic_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_graphic_pane

0x9466,	// (0x00040b03) list_double_heading_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_heading_pane

0x9466,	// (0x00040b03) list_double_large_graphic_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_large_graphic_pane

0x9466,	// (0x00040b03) list_double_number_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_number_pane

0x9466,	// (0x00040b03) list_double_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_pane

0x9466,	// (0x00040b03) list_double_time_pane_ParamLimits

0x9466,	// (0x00040b03) list_double_time_pane

0x9466,	// (0x00040b03) list_setting_number_pane_ParamLimits

0x9466,	// (0x00040b03) list_setting_number_pane

0x9466,	// (0x00040b03) list_setting_pane_ParamLimits

0x9466,	// (0x00040b03) list_setting_pane

0xaa81,	// (0x0004211e) list_single_2graphic_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_2graphic_pane

0xaa81,	// (0x0004211e) list_single_graphic_heading_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_graphic_heading_pane

0xaa81,	// (0x0004211e) list_single_graphic_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_graphic_pane

0xaa81,	// (0x0004211e) list_single_heading_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_heading_pane

0xaaa9,	// (0x00042146) list_single_large_graphic_pane_ParamLimits

0xaaa9,	// (0x00042146) list_single_large_graphic_pane

0xaa81,	// (0x0004211e) list_single_number_heading_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_number_heading_pane

0xaa81,	// (0x0004211e) list_single_number_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_number_pane

0xaa81,	// (0x0004211e) list_single_pane_ParamLimits

0xaa81,	// (0x0004211e) list_single_pane

0xb291,	// (0x0004292e) list_highlight_pane_cp1

0x1998,	// (0x00039035) list_single_pane_g1_ParamLimits

0x1998,	// (0x00039035) list_single_pane_g1

0x19a4,	// (0x00039041) list_single_pane_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_pane_g2

0x0001,

0xf5d8,	// (0x00046c75) list_single_pane_g_ParamLimits

0xf5d8,	// (0x00046c75) list_single_pane_g

0x0d56,	// (0x000383f3) list_single_pane_t1_ParamLimits

0x0d56,	// (0x000383f3) list_single_pane_t1

0x1998,	// (0x00039035) list_single_number_pane_g1_ParamLimits

0x1998,	// (0x00039035) list_single_number_pane_g1

0x19a4,	// (0x00039041) list_single_number_pane_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x00046c75) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x00046c75) list_single_number_pane_g

0x0c2d,	// (0x000382ca) list_single_number_pane_t1_ParamLimits

0x0c2d,	// (0x000382ca) list_single_number_pane_t1

0x0d14,	// (0x000383b1) list_single_number_pane_t2_ParamLimits

0x0d14,	// (0x000383b1) list_single_number_pane_t2

0x0001,

0xf960,	// (0x00046ffd) list_single_number_pane_t_ParamLimits

0xf960,	// (0x00046ffd) list_single_number_pane_t

0x045d,	// (0x00037afa) list_single_graphic_pane_g1_ParamLimits

0x045d,	// (0x00037afa) list_single_graphic_pane_g1

0x1998,	// (0x00039035) list_single_graphic_pane_g2_ParamLimits

0x1998,	// (0x00039035) list_single_graphic_pane_g2

0x19a4,	// (0x00039041) list_single_graphic_pane_g3_ParamLimits

0x19a4,	// (0x00039041) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00046c64) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00046c64) list_single_graphic_pane_g

0x0469,	// (0x00037b06) list_single_graphic_pane_t1_ParamLimits

0x0469,	// (0x00037b06) list_single_graphic_pane_t1

0x047f,	// (0x00037b1c) list_single_heading_pane_g1_ParamLimits

0x047f,	// (0x00037b1c) list_single_heading_pane_g1

0x19a4,	// (0x00039041) list_single_heading_pane_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00046c6b) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00046c6b) list_single_heading_pane_g

0x0492,	// (0x00037b2f) list_single_heading_pane_t1_ParamLimits

0x0492,	// (0x00037b2f) list_single_heading_pane_t1

0x19b0,	// (0x0003904d) list_single_heading_pane_t2_ParamLimits

0x19b0,	// (0x0003904d) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00046c70) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00046c70) list_single_heading_pane_t

0x1998,	// (0x00039035) list_single_number_heading_pane_g1_ParamLimits

0x1998,	// (0x00039035) list_single_number_heading_pane_g1

0x19a4,	// (0x00039041) list_single_number_heading_pane_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x00046c75) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x00046c75) list_single_number_heading_pane_g

0x04a8,	// (0x00037b45) list_single_number_heading_pane_t1_ParamLimits

0x04a8,	// (0x00037b45) list_single_number_heading_pane_t1

0x04be,	// (0x00037b5b) list_single_number_heading_pane_t2_ParamLimits

0x04be,	// (0x00037b5b) list_single_number_heading_pane_t2

0x04d0,	// (0x00037b6d) list_single_number_heading_pane_t3_ParamLimits

0x04d0,	// (0x00037b6d) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x00046c7a) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x00046c7a) list_single_number_heading_pane_t

0x04e2,	// (0x00037b7f) list_single_graphic_heading_pane_g1_ParamLimits

0x04e2,	// (0x00037b7f) list_single_graphic_heading_pane_g1

0x7d1a,	// (0x0003f3b7) list_single_graphic_heading_pane_g4_ParamLimits

0x7d1a,	// (0x0003f3b7) list_single_graphic_heading_pane_g4

0x19a4,	// (0x00039041) list_single_graphic_heading_pane_g5_ParamLimits

0x19a4,	// (0x00039041) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x00046c81) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x00046c81) list_single_graphic_heading_pane_g

0x04a8,	// (0x00037b45) list_single_graphic_heading_pane_t1_ParamLimits

0x04a8,	// (0x00037b45) list_single_graphic_heading_pane_t1

0x0509,	// (0x00037ba6) list_single_graphic_heading_pane_t2_ParamLimits

0x0509,	// (0x00037ba6) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x00046c88) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x00046c88) list_single_graphic_heading_pane_t

0x36db,	// (0x0003ad78) list_single_large_graphic_pane_g1_ParamLimits

0x36db,	// (0x0003ad78) list_single_large_graphic_pane_g1

0x36e7,	// (0x0003ad84) list_single_large_graphic_pane_g2_ParamLimits

0x36e7,	// (0x0003ad84) list_single_large_graphic_pane_g2

0x36f3,	// (0x0003ad90) list_single_large_graphic_pane_g3_ParamLimits

0x36f3,	// (0x0003ad90) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00046c8d) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00046c8d) list_single_large_graphic_pane_g

0xd2ec,	// (0x00044989) wait_border_pane_g2_copy1

0x8904,	// (0x0003ffa1) list_single_large_graphic_pane_g4_cp2

0x0dfa,	// (0x00038497) list_single_large_graphic_pane_t1_ParamLimits

0x0dfa,	// (0x00038497) list_single_large_graphic_pane_t1

0x7d2b,	// (0x0003f3c8) list_double_pane_g1_ParamLimits

0x7d2b,	// (0x0003f3c8) list_double_pane_g1

0x7d37,	// (0x0003f3d4) list_double_pane_g2_ParamLimits

0x7d37,	// (0x0003f3d4) list_double_pane_g2

0x0001,

0xf5f7,	// (0x00046c94) list_double_pane_g_ParamLimits

0xf5f7,	// (0x00046c94) list_double_pane_g

0x7d43,	// (0x0003f3e0) list_double_pane_t1_ParamLimits

0x7d43,	// (0x0003f3e0) list_double_pane_t1

0x7d59,	// (0x0003f3f6) list_double_pane_t2_ParamLimits

0x7d59,	// (0x0003f3f6) list_double_pane_t2

0x0001,

0xf5fc,	// (0x00046c99) list_double_pane_t_ParamLimits

0xf5fc,	// (0x00046c99) list_double_pane_t

0x7d6b,	// (0x0003f408) list_double2_pane_g1_ParamLimits

0x7d6b,	// (0x0003f408) list_double2_pane_g1

0x7d7c,	// (0x0003f419) list_double2_pane_g2_ParamLimits

0x7d7c,	// (0x0003f419) list_double2_pane_g2

0x0001,

0xf601,	// (0x00046c9e) list_double2_pane_g_ParamLimits

0xf601,	// (0x00046c9e) list_double2_pane_g

0x7d88,	// (0x0003f425) list_double2_pane_t1_ParamLimits

0x7d88,	// (0x0003f425) list_double2_pane_t1

0x7d9e,	// (0x0003f43b) list_double2_pane_t2_ParamLimits

0x7d9e,	// (0x0003f43b) list_double2_pane_t2

0x0001,

0xf606,	// (0x00046ca3) list_double2_pane_t_ParamLimits

0xf606,	// (0x00046ca3) list_double2_pane_t

0x7d2b,	// (0x0003f3c8) list_double_number_pane_g1_ParamLimits

0x7d2b,	// (0x0003f3c8) list_double_number_pane_g1

0x7d37,	// (0x0003f3d4) list_double_number_pane_g2_ParamLimits

0x7d37,	// (0x0003f3d4) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x00046c94) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x00046c94) list_double_number_pane_g

0x7db0,	// (0x0003f44d) list_double_number_pane_t1_ParamLimits

0x7db0,	// (0x0003f44d) list_double_number_pane_t1

0x7dc2,	// (0x0003f45f) list_double_number_pane_t2_ParamLimits

0x7dc2,	// (0x0003f45f) list_double_number_pane_t2

0x7dd8,	// (0x0003f475) list_double_number_pane_t3_ParamLimits

0x7dd8,	// (0x0003f475) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x00046ca8) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x00046ca8) list_double_number_pane_t

0x7dea,	// (0x0003f487) list_double_graphic_pane_g1_ParamLimits

0x7dea,	// (0x0003f487) list_double_graphic_pane_g1

0x7df6,	// (0x0003f493) list_double_graphic_pane_g2_ParamLimits

0x7df6,	// (0x0003f493) list_double_graphic_pane_g2

0x7e05,	// (0x0003f4a2) list_double_graphic_pane_g3_ParamLimits

0x7e05,	// (0x0003f4a2) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x00046caf) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x00046caf) list_double_graphic_pane_g

0x7e1d,	// (0x0003f4ba) list_double_graphic_pane_t1_ParamLimits

0x7e1d,	// (0x0003f4ba) list_double_graphic_pane_t1

0x7e33,	// (0x0003f4d0) list_double_graphic_pane_t2_ParamLimits

0x7e33,	// (0x0003f4d0) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x00046cb8) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x00046cb8) list_double_graphic_pane_t

0x7dea,	// (0x0003f487) list_double2_graphic_pane_g1_ParamLimits

0x7dea,	// (0x0003f487) list_double2_graphic_pane_g1

0x7d2b,	// (0x0003f3c8) list_double2_graphic_pane_g2_ParamLimits

0x7d2b,	// (0x0003f3c8) list_double2_graphic_pane_g2

0x7d37,	// (0x0003f3d4) list_double2_graphic_pane_g3_ParamLimits

0x7d37,	// (0x0003f3d4) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x00046cbd) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x00046cbd) list_double2_graphic_pane_g

0x7dc2,	// (0x0003f45f) list_double2_graphic_pane_t1_ParamLimits

0x7dc2,	// (0x0003f45f) list_double2_graphic_pane_t1

0x7e45,	// (0x0003f4e2) list_double2_graphic_pane_t2_ParamLimits

0x7e45,	// (0x0003f4e2) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x00046cc4) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x00046cc4) list_double2_graphic_pane_t

0x7e57,	// (0x0003f4f4) list_double_large_graphic_pane_g1_ParamLimits

0x7e57,	// (0x0003f4f4) list_double_large_graphic_pane_g1

0x7e82,	// (0x0003f51f) list_double_large_graphic_pane_g2_ParamLimits

0x7e82,	// (0x0003f51f) list_double_large_graphic_pane_g2

0x7d37,	// (0x0003f3d4) list_double_large_graphic_pane_g3_ParamLimits

0x7d37,	// (0x0003f3d4) list_double_large_graphic_pane_g3

0x7e98,	// (0x0003f535) list_double_large_graphic_pane_g4_ParamLimits

0x7e98,	// (0x0003f535) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x00046cc9) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x00046cc9) list_double_large_graphic_pane_g

0x7eab,	// (0x0003f548) list_double_large_graphic_pane_t1_ParamLimits

0x7eab,	// (0x0003f548) list_double_large_graphic_pane_t1

0x7ec4,	// (0x0003f561) list_double_large_graphic_pane_t2_ParamLimits

0x7ec4,	// (0x0003f561) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x00046cd4) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x00046cd4) list_double_large_graphic_pane_t

0x7ed6,	// (0x0003f573) list_double2_large_graphic_pane_g1_ParamLimits

0x7ed6,	// (0x0003f573) list_double2_large_graphic_pane_g1

0x7ee2,	// (0x0003f57f) list_double2_large_graphic_pane_g2_ParamLimits

0x7ee2,	// (0x0003f57f) list_double2_large_graphic_pane_g2

0x7d37,	// (0x0003f3d4) list_double2_large_graphic_pane_g3_ParamLimits

0x7d37,	// (0x0003f3d4) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x00046cd9) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x00046cd9) list_double2_large_graphic_pane_g

0x7ef3,	// (0x0003f590) list_double2_large_graphic_pane_t1_ParamLimits

0x7ef3,	// (0x0003f590) list_double2_large_graphic_pane_t1

0x7f09,	// (0x0003f5a6) list_double2_large_graphic_pane_t2_ParamLimits

0x7f09,	// (0x0003f5a6) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x00046ce0) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x00046ce0) list_double2_large_graphic_pane_t

0x7f1b,	// (0x0003f5b8) list_double_heading_pane_g1_ParamLimits

0x7f1b,	// (0x0003f5b8) list_double_heading_pane_g1

0x890c,	// (0x0003ffa9) list_double_heading_pane_g2_ParamLimits

0x890c,	// (0x0003ffa9) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x00046ce5) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x00046ce5) list_double_heading_pane_g

0x7f2c,	// (0x0003f5c9) list_double_heading_pane_t1_ParamLimits

0x7f2c,	// (0x0003f5c9) list_double_heading_pane_t1

0x7f42,	// (0x0003f5df) list_double_heading_pane_t2_ParamLimits

0x7f42,	// (0x0003f5df) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x00046cea) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x00046cea) list_double_heading_pane_t

0x7dea,	// (0x0003f487) list_double_graphic_heading_pane_g1_ParamLimits

0x7dea,	// (0x0003f487) list_double_graphic_heading_pane_g1

0x7f1b,	// (0x0003f5b8) list_double_graphic_heading_pane_g2_ParamLimits

0x7f1b,	// (0x0003f5b8) list_double_graphic_heading_pane_g2

0x890c,	// (0x0003ffa9) list_double_graphic_heading_pane_g3_ParamLimits

0x890c,	// (0x0003ffa9) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x00046cef) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x00046cef) list_double_graphic_heading_pane_g

0x7f54,	// (0x0003f5f1) list_double_graphic_heading_pane_t1_ParamLimits

0x7f54,	// (0x0003f5f1) list_double_graphic_heading_pane_t1

0x7f6a,	// (0x0003f607) list_double_graphic_heading_pane_t2_ParamLimits

0x7f6a,	// (0x0003f607) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x00046cf6) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x00046cf6) list_double_graphic_heading_pane_t

0x7d6b,	// (0x0003f408) list_double_time_pane_g1_ParamLimits

0x7d6b,	// (0x0003f408) list_double_time_pane_g1

0x7d7c,	// (0x0003f419) list_double_time_pane_g2_ParamLimits

0x7d7c,	// (0x0003f419) list_double_time_pane_g2

0x0001,

0xf601,	// (0x00046c9e) list_double_time_pane_g_ParamLimits

0xf601,	// (0x00046c9e) list_double_time_pane_g

0x7f7c,	// (0x0003f619) list_double_time_pane_t1_ParamLimits

0x7f7c,	// (0x0003f619) list_double_time_pane_t1

0x7f92,	// (0x0003f62f) list_double_time_pane_t2_ParamLimits

0x7f92,	// (0x0003f62f) list_double_time_pane_t2

0x7fa4,	// (0x0003f641) list_double_time_pane_t3_ParamLimits

0x7fa4,	// (0x0003f641) list_double_time_pane_t3

0x7fb6,	// (0x0003f653) list_double_time_pane_t4_ParamLimits

0x7fb6,	// (0x0003f653) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00046cfb) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00046cfb) list_double_time_pane_t

0x7fc8,	// (0x0003f665) list_setting_pane_g1_ParamLimits

0x7fc8,	// (0x0003f665) list_setting_pane_g1

0x7fd4,	// (0x0003f671) list_setting_pane_g2_ParamLimits

0x7fd4,	// (0x0003f671) list_setting_pane_g2

0x0001,

0xf667,	// (0x00046d04) list_setting_pane_g_ParamLimits

0xf667,	// (0x00046d04) list_setting_pane_g

0x7fe0,	// (0x0003f67d) list_setting_pane_t1_ParamLimits

0x7fe0,	// (0x0003f67d) list_setting_pane_t1

0x7ffa,	// (0x0003f697) list_setting_pane_t2_ParamLimits

0x7ffa,	// (0x0003f697) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00046d09) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00046d09) list_setting_pane_t

0x8037,	// (0x0003f6d4) set_value_pane_cp_ParamLimits

0x8037,	// (0x0003f6d4) set_value_pane_cp

0x8043,	// (0x0003f6e0) list_setting_number_pane_g1_ParamLimits

0x8043,	// (0x0003f6e0) list_setting_number_pane_g1

0x804f,	// (0x0003f6ec) list_setting_number_pane_g2_ParamLimits

0x804f,	// (0x0003f6ec) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00046d10) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00046d10) list_setting_number_pane_g

0x805b,	// (0x0003f6f8) list_setting_number_pane_t1_ParamLimits

0x805b,	// (0x0003f6f8) list_setting_number_pane_t1

0x8074,	// (0x0003f711) list_setting_number_pane_t2_ParamLimits

0x8074,	// (0x0003f711) list_setting_number_pane_t2

0x808e,	// (0x0003f72b) list_setting_number_pane_t3_ParamLimits

0x808e,	// (0x0003f72b) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00046d15) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00046d15) list_setting_number_pane_t

0x8037,	// (0x0003f6d4) set_value_pane_ParamLimits

0x8037,	// (0x0003f6d4) set_value_pane

0xb8db,	// (0x00042f78) bg_set_opt_pane_ParamLimits

0xb8db,	// (0x00042f78) bg_set_opt_pane

0x08cf,	// (0x00037f6c) set_value_pane_t1

0xb8fc,	// (0x00042f99) slider_set_pane_cp3

0xb905,	// (0x00042fa2) volume_small_pane_cp

0xb90e,	// (0x00042fab) list_form_gen_pane

0xb917,	// (0x00042fb4) scroll_pane_cp8

0x80d1,	// (0x0003f76e) form_field_data_pane_ParamLimits

0x80d1,	// (0x0003f76e) form_field_data_pane

0x80e8,	// (0x0003f785) form_field_data_wide_pane_ParamLimits

0x80e8,	// (0x0003f785) form_field_data_wide_pane

0x8108,	// (0x0003f7a5) form_field_popup_pane_ParamLimits

0x8108,	// (0x0003f7a5) form_field_popup_pane

0x8128,	// (0x0003f7c5) form_field_popup_wide_pane_ParamLimits

0x8128,	// (0x0003f7c5) form_field_popup_wide_pane

0x0965,	// (0x00038002) form_field_slider_pane_ParamLimits

0x0965,	// (0x00038002) form_field_slider_pane

0x0978,	// (0x00038015) form_field_slider_wide_pane_ParamLimits

0x0978,	// (0x00038015) form_field_slider_wide_pane

0xb928,	// (0x00042fc5) data_form_pane

0x8149,	// (0x0003f7e6) form_field_data_pane_t1

0xbff0,	// (0x0004368d) input_focus_pane

0x09af,	// (0x0003804c) data_form_wide_pane

0x09cc,	// (0x00038069) form_field_data_wide_pane_t1

0xb6af,	// (0x00042d4c) input_focus_pane_cp6

0x8163,	// (0x0003f800) form_field_popup_pane_t1

0xbff0,	// (0x0004368d) input_focus_pane_cp7

0xc01e,	// (0x000436bb) list_form_pane

0x0a10,	// (0x000380ad) form_field_popup_wide_pane_t1

0xbff0,	// (0x0004368d) input_focus_pane_cp8

0xc02a,	// (0x000436c7) list_form_wide_pane

0x8185,	// (0x0003f822) form_field_slider_pane_t1_ParamLimits

0x8185,	// (0x0003f822) form_field_slider_pane_t1

0x819d,	// (0x0003f83a) form_field_slider_pane_t2_ParamLimits

0x819d,	// (0x0003f83a) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00046d25) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00046d25) form_field_slider_pane_t

0xb2df,	// (0x0004297c) input_focus_pane_cp9_ParamLimits

0xb2df,	// (0x0004297c) input_focus_pane_cp9

0x81b2,	// (0x0003f84f) slider_cont_pane_ParamLimits

0x81b2,	// (0x0003f84f) slider_cont_pane

0xc039,	// (0x000436d6) form_field_slider_wide_pane_t1_ParamLimits

0xc039,	// (0x000436d6) form_field_slider_wide_pane_t1

0x0a6e,	// (0x0003810b) form_field_slider_wide_pane_t2_ParamLimits

0x0a6e,	// (0x0003810b) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00046d2a) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00046d2a) form_field_slider_wide_pane_t

0xb2df,	// (0x0004297c) input_focus_pane_cp10_ParamLimits

0xb2df,	// (0x0004297c) input_focus_pane_cp10

0x81c6,	// (0x0003f863) slider_cont_pane_cp1_ParamLimits

0x81c6,	// (0x0003f863) slider_cont_pane_cp1

0x81da,	// (0x0003f877) slider_form_pane_cp

0xc04b,	// (0x000436e8) input_focus_pane_g1

0xc053,	// (0x000436f0) input_focus_pane_g2

0xc05b,	// (0x000436f8) input_focus_pane_g3

0xc063,	// (0x00043700) input_focus_pane_g4

0xc06b,	// (0x00043708) input_focus_pane_g5

0xc073,	// (0x00043710) input_focus_pane_g6

0xc07b,	// (0x00043718) input_focus_pane_g7

0xc083,	// (0x00043720) input_focus_pane_g8

0xc08b,	// (0x00043728) input_focus_pane_g9

0xb287,	// (0x00042924) input_focus_pane_g10

0x0009,

0xf692,	// (0x00046d2f) input_focus_pane_g

0xd2f5,	// (0x00044992) wait_border_pane_g3_copy1

0x81e2,	// (0x0003f87f) data_form_pane_t1

0xb287,	// (0x00042924) wait_anim_pane_g1_copy1

0x826d,	// (0x0003f90a) data_form_wide_pane_t1

0x81fc,	// (0x0003f899) list_form_graphic_pane_cp_ParamLimits

0x81fc,	// (0x0003f899) list_form_graphic_pane_cp

0xdf04,	// (0x000455a1) slider_form_pane_g1

0xdf0d,	// (0x000455aa) slider_form_pane_g2

0x0006,

0xf990,	// (0x0004702d) slider_form_pane_g

0x81fc,	// (0x0003f899) list_form_graphic_pane_ParamLimits

0x81fc,	// (0x0003f899) list_form_graphic_pane

0x0ace,	// (0x0003816b) list_form_graphic_pane_g1

0x0ad6,	// (0x00038173) list_form_graphic_pane_t1_ParamLimits

0x0ad6,	// (0x00038173) list_form_graphic_pane_t1

0xb2ed,	// (0x0004298a) list_highlight_pane_cp5_ParamLimits

0xb2ed,	// (0x0004298a) list_highlight_pane_cp5

0x0aeb,	// (0x00038188) find_pane_g1

0xc093,	// (0x00043730) input_find_pane

0x0af4,	// (0x00038191) input_find_pane_g1_ParamLimits

0x0af4,	// (0x00038191) input_find_pane_g1

0x0b00,	// (0x0003819d) input_find_pane_t1_ParamLimits

0x0b00,	// (0x0003819d) input_find_pane_t1

0x0b15,	// (0x000381b2) input_find_pane_t2_ParamLimits

0x0b15,	// (0x000381b2) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00046d44) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00046d44) input_find_pane_t

0xc09c,	// (0x00043739) input_focus_pane_cp5_ParamLimits

0xc09c,	// (0x00043739) input_focus_pane_cp5

0xc0aa,	// (0x00043747) bg_popup_window_pane_cp2_ParamLimits

0xc0aa,	// (0x00043747) bg_popup_window_pane_cp2

0xc0b7,	// (0x00043754) listscroll_menu_pane_ParamLimits

0xc0b7,	// (0x00043754) listscroll_menu_pane

0x8924,	// (0x0003ffc1) popup_submenu_window_ParamLimits

0x8924,	// (0x0003ffc1) popup_submenu_window

0xc0c3,	// (0x00043760) find_popup_pane_g1

0xc0cb,	// (0x00043768) input_popup_find_pane_cp

0xc09c,	// (0x00043739) input_focus_pane_cp4_ParamLimits

0xc09c,	// (0x00043739) input_focus_pane_cp4

0xc0d5,	// (0x00043772) input_popup_find_pane_t1_ParamLimits

0xc0d5,	// (0x00043772) input_popup_find_pane_t1

0xb291,	// (0x0004292e) bg_popup_sub_pane_cp

0xc103,	// (0x000437a0) listscroll_popup_sub_pane

0xc10b,	// (0x000437a8) list_submenu_pane_ParamLimits

0xc10b,	// (0x000437a8) list_submenu_pane

0xc11c,	// (0x000437b9) scroll_pane_cp4

0xc124,	// (0x000437c1) list_single_popup_submenu_pane_ParamLimits

0xc124,	// (0x000437c1) list_single_popup_submenu_pane

0xc138,	// (0x000437d5) list_single_popup_submenu_pane_g1

0xc140,	// (0x000437dd) list_single_popup_submenu_pane_t1_ParamLimits

0xc140,	// (0x000437dd) list_single_popup_submenu_pane_t1

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp1_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp1

0x895a,	// (0x0003fff7) tabs_2_active_pane_g1

0x8962,	// (0x0003ffff) tabs_2_active_pane_t1

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp1_ParamLimits

0xb2df,	// (0x0004297c) bg_passive_tab_pane_cp1

0x895a,	// (0x0003fff7) tabs_2_passive_pane_g1

0x8962,	// (0x0003ffff) tabs_2_passive_pane_t1

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp4

0x8974,	// (0x00040011) tabs_2_long_active_pane_t1

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp4

0x2cb2,	// (0x0003a34f) list_single_midp_graphic_pane_g4_ParamLimits

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp5

0x8987,	// (0x00040024) tabs_3_long_active_pane_t1

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp5

0x2cb2,	// (0x0003a34f) list_single_midp_graphic_pane_g4

0xb2ed,	// (0x0004298a) bg_popup_window_pane_cp13_ParamLimits

0xb2ed,	// (0x0004298a) bg_popup_window_pane_cp13

0xc16a,	// (0x00043807) listscroll_popup_fast_pane_ParamLimits

0xc16a,	// (0x00043807) listscroll_popup_fast_pane

0xc176,	// (0x00043813) grid_popup_fast_pane_ParamLimits

0xc176,	// (0x00043813) grid_popup_fast_pane

0xc188,	// (0x00043825) scroll_pane_cp9_ParamLimits

0xc188,	// (0x00043825) scroll_pane_cp9

0xf24b,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf24b,	// (0x000468e8) list_single_graphic_hl_pane_t1_cp2

0xc1ac,	// (0x00043849) input_focus_pane_cp20_ParamLimits

0xc1ac,	// (0x00043849) input_focus_pane_cp20

0xc1ba,	// (0x00043857) query_popup_data_pane_t1_ParamLimits

0xc1ba,	// (0x00043857) query_popup_data_pane_t1

0xc1cd,	// (0x0004386a) query_popup_data_pane_t2_ParamLimits

0xc1cd,	// (0x0004386a) query_popup_data_pane_t2

0xc213,	// (0x000438b0) query_popup_data_pane_t3_ParamLimits

0xc213,	// (0x000438b0) query_popup_data_pane_t3

0xc254,	// (0x000438f1) query_popup_data_pane_t4_ParamLimits

0xc254,	// (0x000438f1) query_popup_data_pane_t4

0xc290,	// (0x0004392d) query_popup_data_pane_t5_ParamLimits

0xc290,	// (0x0004392d) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00046d49) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00046d49) query_popup_data_pane_t

0xc04b,	// (0x000436e8) bg_set_opt_pane_g1

0xc053,	// (0x000436f0) bg_set_opt_pane_g2

0xc05b,	// (0x000436f8) bg_set_opt_pane_g3

0xc063,	// (0x00043700) bg_set_opt_pane_g4

0xc06b,	// (0x00043708) bg_set_opt_pane_g5

0xc073,	// (0x00043710) bg_set_opt_pane_g6

0xc07b,	// (0x00043718) bg_set_opt_pane_g7

0xc083,	// (0x00043720) bg_set_opt_pane_g8

0xc08b,	// (0x00043728) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00046d54) bg_set_opt_pane_g

0x1edc,	// (0x00039579) control_top_pane_stacon_ParamLimits

0x1edc,	// (0x00039579) control_top_pane_stacon

0x1f2f,	// (0x000395cc) signal_pane_stacon_ParamLimits

0x1f2f,	// (0x000395cc) signal_pane_stacon

0xc6f7,	// (0x00043d94) stacon_top_pane_g1_ParamLimits

0xc6f7,	// (0x00043d94) stacon_top_pane_g1

0x1f54,	// (0x000395f1) title_pane_stacon_ParamLimits

0x1f54,	// (0x000395f1) title_pane_stacon

0x1f7e,	// (0x0003961b) uni_indicator_pane_stacon_ParamLimits

0x1f7e,	// (0x0003961b) uni_indicator_pane_stacon

0x1f93,	// (0x00039630) battery_pane_stacon_ParamLimits

0x1f93,	// (0x00039630) battery_pane_stacon

0x1fd7,	// (0x00039674) control_bottom_pane_stacon_ParamLimits

0x1fd7,	// (0x00039674) control_bottom_pane_stacon

0x1ffa,	// (0x00039697) navi_pane_stacon_ParamLimits

0x1ffa,	// (0x00039697) navi_pane_stacon

0xc719,	// (0x00043db6) stacon_bottom_pane_g1_ParamLimits

0xc719,	// (0x00043db6) stacon_bottom_pane_g1

0x1ad1,	// (0x0003916e) aid_levels_signal_lsc_ParamLimits

0x1ad1,	// (0x0003916e) aid_levels_signal_lsc

0x1ae8,	// (0x00039185) signal_pane_stacon_g1_ParamLimits

0x1ae8,	// (0x00039185) signal_pane_stacon_g1

0x1afc,	// (0x00039199) signal_pane_stacon_g2_ParamLimits

0x1afc,	// (0x00039199) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00046d67) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00046d67) signal_pane_stacon_g

0x1b31,	// (0x000391ce) title_pane_stacon_t1_ParamLimits

0x1b31,	// (0x000391ce) title_pane_stacon_t1

0xc2d4,	// (0x00043971) uni_indicator_pane_stacon_g1

0xc2de,	// (0x0004397b) uni_indicator_pane_stacon_g2

0xc2e8,	// (0x00043985) uni_indicator_pane_stacon_g3

0xc2f2,	// (0x0004398f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00046d73) uni_indicator_pane_stacon_g

0x1b56,	// (0x000391f3) control_top_pane_stacon_g1

0x1b5e,	// (0x000391fb) control_top_pane_stacon_t1_ParamLimits

0x1b5e,	// (0x000391fb) control_top_pane_stacon_t1

0x1b95,	// (0x00039232) aid_levels_battery_lsc_ParamLimits

0x1b95,	// (0x00039232) aid_levels_battery_lsc

0x1bad,	// (0x0003924a) battery_pane_stacon_g1_ParamLimits

0x1bad,	// (0x0003924a) battery_pane_stacon_g1

0x1bc0,	// (0x0003925d) battery_pane_stacon_g2_ParamLimits

0x1bc0,	// (0x0003925d) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00046d7c) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00046d7c) battery_pane_stacon_g

0x1bfe,	// (0x0003929b) navi_icon_pane_stacon

0x1c12,	// (0x000392af) navi_navi_pane_stacon

0x1bfe,	// (0x0003929b) navi_text_pane_stacon

0x1b56,	// (0x000391f3) control_bottom_pane_stacon_g1

0x1c26,	// (0x000392c3) control_bottom_pane_stacon_t1_ParamLimits

0x1c26,	// (0x000392c3) control_bottom_pane_stacon_t1

0x8999,	// (0x00040036) grid_app_pane_ParamLimits

0x8999,	// (0x00040036) grid_app_pane

0x89cf,	// (0x0004006c) scroll_pane_cp15_ParamLimits

0x89cf,	// (0x0004006c) scroll_pane_cp15

0x89e8,	// (0x00040085) cell_app_pane_ParamLimits

0x89e8,	// (0x00040085) cell_app_pane

0x8a2f,	// (0x000400cc) cell_app_pane_g1_ParamLimits

0x8a2f,	// (0x000400cc) cell_app_pane_g1

0xc316,	// (0x000439b3) cell_app_pane_g2_ParamLimits

0xc316,	// (0x000439b3) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00046d81) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00046d81) cell_app_pane_g

0x8a4f,	// (0x000400ec) cell_app_pane_t1_ParamLimits

0x8a4f,	// (0x000400ec) cell_app_pane_t1

0xc322,	// (0x000439bf) grid_highlight_pane_ParamLimits

0xc322,	// (0x000439bf) grid_highlight_pane

0xc04b,	// (0x000436e8) cell_highlight_pane_g1

0xc053,	// (0x000436f0) cell_highlight_pane_g2

0xc05b,	// (0x000436f8) cell_highlight_pane_g3

0xc063,	// (0x00043700) cell_highlight_pane_g4

0xc06b,	// (0x00043708) cell_highlight_pane_g5

0xc073,	// (0x00043710) cell_highlight_pane_g6

0xc07b,	// (0x00043718) cell_highlight_pane_g7

0xc083,	// (0x00043720) cell_highlight_pane_g8

0xc08b,	// (0x00043728) cell_highlight_pane_g9

0xb287,	// (0x00042924) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00046d2f) cell_highlight_pane_g

0xc333,	// (0x000439d0) bg_scroll_pane

0x1d04,	// (0x000393a1) scroll_handle_pane

0xc37a,	// (0x00043a17) scroll_bg_pane_g1

0xc38f,	// (0x00043a2c) scroll_bg_pane_g2

0xc3a7,	// (0x00043a44) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00046d86) scroll_bg_pane_g

0xc3bc,	// (0x00043a59) scroll_handle_focus_pane_ParamLimits

0xc3bc,	// (0x00043a59) scroll_handle_focus_pane

0xc37a,	// (0x00043a17) scroll_handle_pane_g1

0xc3c9,	// (0x00043a66) scroll_handle_pane_g2

0xc3a7,	// (0x00043a44) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00046d8d) scroll_handle_pane_g

0xc09c,	// (0x00043739) bg_popup_sub_pane_cp21_ParamLimits

0xc09c,	// (0x00043739) bg_popup_sub_pane_cp21

0xc3dd,	// (0x00043a7a) popup_fep_japan_predictive_window_t1_ParamLimits

0xc3dd,	// (0x00043a7a) popup_fep_japan_predictive_window_t1

0xc3f7,	// (0x00043a94) popup_fep_japan_predictive_window_t2_ParamLimits

0xc3f7,	// (0x00043a94) popup_fep_japan_predictive_window_t2

0xc42a,	// (0x00043ac7) popup_fep_japan_predictive_window_t3_ParamLimits

0xc42a,	// (0x00043ac7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00046d94) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00046d94) popup_fep_japan_predictive_window_t

0xb291,	// (0x0004292e) bg_popup_sub_pane_cp23

0xc461,	// (0x00043afe) listscroll_japin_cand_pane

0xc469,	// (0x00043b06) popup_fep_japan_candidate_window_t1

0xc477,	// (0x00043b14) candidate_pane_ParamLimits

0xc477,	// (0x00043b14) candidate_pane

0xc489,	// (0x00043b26) scroll_pane_cp30

0xc491,	// (0x00043b2e) list_single_popup_jap_candidate_pane_ParamLimits

0xc491,	// (0x00043b2e) list_single_popup_jap_candidate_pane

0xb291,	// (0x0004292e) list_highlight_pane_cp30

0xc4a5,	// (0x00043b42) list_single_popup_jap_candidate_pane_t1

0xc4b4,	// (0x00043b51) level_1_signal

0xc4c1,	// (0x00043b5e) level_2_signal

0xc4ce,	// (0x00043b6b) level_3_signal

0xc4db,	// (0x00043b78) level_4_signal

0xc4e8,	// (0x00043b85) level_5_signal

0xc4f5,	// (0x00043b92) level_6_signal

0xc502,	// (0x00043b9f) level_7_signal

0xc4b4,	// (0x00043b51) level_1_battery

0xc4c1,	// (0x00043b5e) level_2_battery

0xc4ce,	// (0x00043b6b) level_3_battery

0xc4db,	// (0x00043b78) level_4_battery

0xc4e8,	// (0x00043b85) level_5_battery

0xc4f5,	// (0x00043b92) level_6_battery

0xc502,	// (0x00043b9f) level_7_battery

0xc527,	// (0x00043bc4) list_menu_pane_ParamLimits

0xc527,	// (0x00043bc4) list_menu_pane

0xc53d,	// (0x00043bda) scroll_pane_cp25_ParamLimits

0xc53d,	// (0x00043bda) scroll_pane_cp25

0xc556,	// (0x00043bf3) list_double2_graphic_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double2_graphic_pane_cp2

0xc556,	// (0x00043bf3) list_double2_large_graphic_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double2_large_graphic_pane_cp2

0xc556,	// (0x00043bf3) list_double2_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double2_pane_cp2

0xc556,	// (0x00043bf3) list_double_graphic_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double_graphic_pane_cp2

0xc556,	// (0x00043bf3) list_double_large_graphic_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double_large_graphic_pane_cp2

0xc556,	// (0x00043bf3) list_double_number_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double_number_pane_cp2

0xc556,	// (0x00043bf3) list_double_pane_cp2_ParamLimits

0xc556,	// (0x00043bf3) list_double_pane_cp2

0x8a77,	// (0x00040114) list_single_2graphic_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_2graphic_pane_cp2

0x8a77,	// (0x00040114) list_single_graphic_heading_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_graphic_heading_pane_cp2

0x8a77,	// (0x00040114) list_single_graphic_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_graphic_pane_cp2

0x8a77,	// (0x00040114) list_single_heading_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_heading_pane_cp2

0xc566,	// (0x00043c03) list_single_large_graphic_pane_cp2_ParamLimits

0xc566,	// (0x00043c03) list_single_large_graphic_pane_cp2

0x8a77,	// (0x00040114) list_single_number_heading_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_number_heading_pane_cp2

0x8a77,	// (0x00040114) list_single_number_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_number_pane_cp2

0x8a77,	// (0x00040114) list_single_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_pane_cp2

0xc580,	// (0x00043c1d) bg_popup_sub_pane_cp22

0x1e3e,	// (0x000394db) popup_side_volume_key_window_g1

0x1e62,	// (0x000394ff) popup_side_volume_key_window_t1

0x1e7e,	// (0x0003951b) volume_small_pane_cp1

0xb2df,	// (0x0004297c) bg_popup_sub_pane_cp24_ParamLimits

0xb2df,	// (0x0004297c) bg_popup_sub_pane_cp24

0xc596,	// (0x00043c33) fep_china_uni_candidate_pane_ParamLimits

0xc596,	// (0x00043c33) fep_china_uni_candidate_pane

0xc5aa,	// (0x00043c47) fep_china_uni_entry_pane

0xc5ba,	// (0x00043c57) popup_fep_china_uni_window_g1

0xc5d6,	// (0x00043c73) fep_china_uni_entry_pane_g1

0xc5de,	// (0x00043c7b) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00046dc5) fep_china_uni_entry_pane_g

0xc5e6,	// (0x00043c83) fep_entry_item_pane

0xc5f0,	// (0x00043c8d) fep_candidate_item_pane

0xc5f8,	// (0x00043c95) fep_china_uni_candidate_pane_g1

0xc600,	// (0x00043c9d) fep_china_uni_candidate_pane_g2

0xc608,	// (0x00043ca5) fep_china_uni_candidate_pane_g3

0xc610,	// (0x00043cad) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00046dca) fep_china_uni_candidate_pane_g

0xb287,	// (0x00042924) fep_entry_item_pane_g1

0xc618,	// (0x00043cb5) fep_entry_item_pane_t1_ParamLimits

0xc618,	// (0x00043cb5) fep_entry_item_pane_t1

0xc62e,	// (0x00043ccb) fep_candidate_item_pane_t1_ParamLimits

0xc62e,	// (0x00043ccb) fep_candidate_item_pane_t1

0xc643,	// (0x00043ce0) fep_candidate_item_pane_t2_ParamLimits

0xc643,	// (0x00043ce0) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00046dd3) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00046dd3) fep_candidate_item_pane_t

0xb2ed,	// (0x0004298a) list_highlight_pane_cp31_ParamLimits

0xb2ed,	// (0x0004298a) list_highlight_pane_cp31

0xc655,	// (0x00043cf2) level_1_signal_lsc

0xc65e,	// (0x00043cfb) level_2_signal_lsc

0xc667,	// (0x00043d04) level_3_signal_lsc

0xc670,	// (0x00043d0d) level_4_signal_lsc

0xc679,	// (0x00043d16) level_5_signal_lsc

0xc682,	// (0x00043d1f) level_6_signal_lsc

0xc68b,	// (0x00043d28) level_7_signal_lsc

0xc68b,	// (0x00043d28) level_1_battery_lsc

0xc694,	// (0x00043d31) level_2_battery_lsc

0xc69d,	// (0x00043d3a) level_3_battery_lsc

0xc6a6,	// (0x00043d43) level_4_battery_lsc

0xc6af,	// (0x00043d4c) level_5_battery_lsc

0xc6b8,	// (0x00043d55) level_6_battery_lsc

0xc655,	// (0x00043cf2) level_7_battery_lsc

0xc6c1,	// (0x00043d5e) scroll_handle_focus_pane_g1

0xc6ca,	// (0x00043d67) scroll_handle_focus_pane_g2

0xc6d3,	// (0x00043d70) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00046dd8) scroll_handle_focus_pane_g

0x0b2a,	// (0x000381c7) list_single_2graphic_pane_g1_ParamLimits

0x0b2a,	// (0x000381c7) list_single_2graphic_pane_g1

0x7d1a,	// (0x0003f3b7) list_single_2graphic_pane_g2_ParamLimits

0x7d1a,	// (0x0003f3b7) list_single_2graphic_pane_g2

0x19a4,	// (0x00039041) list_single_2graphic_pane_g3_ParamLimits

0x19a4,	// (0x00039041) list_single_2graphic_pane_g3

0x0b36,	// (0x000381d3) list_single_2graphic_pane_g4_ParamLimits

0x0b36,	// (0x000381d3) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00046ddf) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00046ddf) list_single_2graphic_pane_g

0x0b47,	// (0x000381e4) list_single_2graphic_pane_t1_ParamLimits

0x0b47,	// (0x000381e4) list_single_2graphic_pane_t1

0x820e,	// (0x0003f8ab) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x820e,	// (0x0003f8ab) list_double2_graphic_large_graphic_pane_g1

0x7ee2,	// (0x0003f57f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7ee2,	// (0x0003f57f) list_double2_graphic_large_graphic_pane_g2

0x7d37,	// (0x0003f3d4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7d37,	// (0x0003f3d4) list_double2_graphic_large_graphic_pane_g3

0x8220,	// (0x0003f8bd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8220,	// (0x0003f8bd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00046de8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00046de8) list_double2_graphic_large_graphic_pane_g

0x822c,	// (0x0003f8c9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x822c,	// (0x0003f8c9) list_double2_graphic_large_graphic_pane_t1

0x8242,	// (0x0003f8df) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8242,	// (0x0003f8df) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00046df1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00046df1) list_double2_graphic_large_graphic_pane_t

0xc7a5,	// (0x00043e42) popup_fast_swap_window_ParamLimits

0xc7a5,	// (0x00043e42) popup_fast_swap_window

0xc7c1,	// (0x00043e5e) popup_side_volume_key_window

0xc7db,	// (0x00043e78) stacon_top_pane

0xc7e5,	// (0x00043e82) status_pane_ParamLimits

0xc7e5,	// (0x00043e82) status_pane

0xc7db,	// (0x00043e78) status_small_pane

0xb291,	// (0x0004292e) control_pane

0xb291,	// (0x0004292e) stacon_bottom_pane

0xb917,	// (0x00042fb4) scroll_pane_cp121

0xb90e,	// (0x00042fab) set_content_pane

0xc6dc,	// (0x00043d79) bg_active_tab_pane_g1_cp1

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp1

0xc6ee,	// (0x00043d8b) bg_active_tab_pane_g3_cp1

0xc6dc,	// (0x00043d79) bg_passive_tab_pane_g1_cp1

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp1

0xc6ee,	// (0x00043d8b) bg_passive_tab_pane_g3_cp1

0xa0af,	// (0x0004174c) bg_active_tab_pane_g1_cp2

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp2

0xa0b8,	// (0x00041755) bg_active_tab_pane_g3_cp2

0xa0af,	// (0x0004174c) bg_passive_tab_pane_g1_cp2

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp2

0xa0b8,	// (0x00041755) bg_passive_tab_pane_g3_cp2

0xa0c1,	// (0x0004175e) bg_active_tab_pane_g1_cp3

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp3

0xa0ca,	// (0x00041767) bg_active_tab_pane_g3_cp3

0xa0c1,	// (0x0004175e) bg_passive_tab_pane_g1_cp3

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp3

0xa0ca,	// (0x00041767) bg_passive_tab_pane_g3_cp3

0xa0d3,	// (0x00041770) bg_active_tab_pane_g1_cp4

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp4

0xa0dc,	// (0x00041779) bg_active_tab_pane_g3_cp4

0xa0d3,	// (0x00041770) bg_passive_tab_pane_g1_cp4

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp4

0xa0dc,	// (0x00041779) bg_passive_tab_pane_g3_cp4

0xc735,	// (0x00043dd2) bg_active_tab_pane_g1_cp5

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp5

0xc73e,	// (0x00043ddb) bg_active_tab_pane_g3_cp5

0xc735,	// (0x00043dd2) bg_passive_tab_pane_g1_cp5

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp5

0xc73e,	// (0x00043ddb) bg_passive_tab_pane_g3_cp5

0xdb1d,	// (0x000451ba) list_set_graphic_pane_ParamLimits

0xdb1d,	// (0x000451ba) list_set_graphic_pane

0xb291,	// (0x0004292e) bg_set_opt_pane_cp4

0xc747,	// (0x00043de4) list_set_graphic_pane_g1_ParamLimits

0xc747,	// (0x00043de4) list_set_graphic_pane_g1

0xc753,	// (0x00043df0) list_set_graphic_pane_g2_ParamLimits

0xc753,	// (0x00043df0) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00046df6) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00046df6) list_set_graphic_pane_g

0x0009,

0xfad5,	// (0x00047172) volume_small_pane_cp_g

0xa0e5,	// (0x00041782) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa0e5,	// (0x00041782) list_double2_large_graphic_pane_g1_cp2

0xa0f3,	// (0x00041790) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa0f3,	// (0x00041790) list_double2_large_graphic_pane_g2_cp2

0xc775,	// (0x00043e12) list_double2_large_graphic_pane_g3_cp2

0xc77d,	// (0x00043e1a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc77d,	// (0x00043e1a) list_double2_large_graphic_pane_t1_cp2

0xc793,	// (0x00043e30) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc793,	// (0x00043e30) list_double2_large_graphic_pane_t2_cp2

0xa864,	// (0x00041f01) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa864,	// (0x00041f01) list_double_large_graphic_pane_g1_cp2

0xa877,	// (0x00041f14) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa877,	// (0x00041f14) list_double_large_graphic_pane_g2_cp2

0xc8c6,	// (0x00043f63) list_double_large_graphic_pane_g3_cp2

0xdcc2,	// (0x0004535f) list_double_large_graphic_pane_g4_cp

0xdcca,	// (0x00045367) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdcca,	// (0x00045367) list_double_large_graphic_pane_t1_cp2

0xdce1,	// (0x0004537e) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xdce1,	// (0x0004537e) list_double_large_graphic_pane_t2_cp2

0xa104,	// (0x000417a1) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa104,	// (0x000417a1) list_double2_graphic_pane_g1_cp2

0xa112,	// (0x000417af) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa112,	// (0x000417af) list_double2_graphic_pane_g2_cp2

0xa123,	// (0x000417c0) list_double2_graphic_pane_g3_cp2

0xc7f3,	// (0x00043e90) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc7f3,	// (0x00043e90) list_double2_graphic_pane_t1_cp2

0xc809,	// (0x00043ea6) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc809,	// (0x00043ea6) list_double2_graphic_pane_t2_cp2

0xc81b,	// (0x00043eb8) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00043eb8) list_single_number_heading_pane_g1_cp2

0xc827,	// (0x00043ec4) list_single_number_heading_pane_g2_cp2

0xc82f,	// (0x00043ecc) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc82f,	// (0x00043ecc) list_single_number_heading_pane_t1_cp2

0xa12d,	// (0x000417ca) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa12d,	// (0x000417ca) list_single_number_heading_pane_t2_cp2

0xc845,	// (0x00043ee2) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc845,	// (0x00043ee2) list_single_number_heading_pane_t3_cp2

0xc81b,	// (0x00043eb8) list_single_heading_pane_g1_cp2_ParamLimits

0xc81b,	// (0x00043eb8) list_single_heading_pane_g1_cp2

0xc827,	// (0x00043ec4) list_single_heading_pane_g2_cp2

0xc82f,	// (0x00043ecc) list_single_heading_pane_t1_cp2_ParamLimits

0xc82f,	// (0x00043ecc) list_single_heading_pane_t1_cp2

0xa850,	// (0x00041eed) list_single_heading_pane_t2_cp2_ParamLimits

0xa850,	// (0x00041eed) list_single_heading_pane_t2_cp2

0xd9ff,	// (0x0004509c) list_double_graphic_pane_g1_cp2_ParamLimits

0xd9ff,	// (0x0004509c) list_double_graphic_pane_g1_cp2

0xda0b,	// (0x000450a8) list_double_graphic_pane_g2_cp2_ParamLimits

0xda0b,	// (0x000450a8) list_double_graphic_pane_g2_cp2

0xda1a,	// (0x000450b7) list_double_graphic_pane_g3_cp2

0xda22,	// (0x000450bf) list_double_graphic_pane_t1_cp2_ParamLimits

0xda22,	// (0x000450bf) list_double_graphic_pane_t1_cp2

0xda38,	// (0x000450d5) list_double_graphic_pane_t2_cp2_ParamLimits

0xda38,	// (0x000450d5) list_double_graphic_pane_t2_cp2

0xc8ba,	// (0x00043f57) list_double_number_pane_g1_cp2_ParamLimits

0xc8ba,	// (0x00043f57) list_double_number_pane_g1_cp2

0xc8c6,	// (0x00043f63) list_double_number_pane_g2_cp2

0xa82a,	// (0x00041ec7) list_double_number_pane_t1_cp2_ParamLimits

0xa82a,	// (0x00041ec7) list_double_number_pane_t1_cp2

0xd9d7,	// (0x00045074) list_double_number_pane_t2_cp2_ParamLimits

0xd9d7,	// (0x00045074) list_double_number_pane_t2_cp2

0xd9ed,	// (0x0004508a) list_double_number_pane_t3_cp2_ParamLimits

0xd9ed,	// (0x0004508a) list_double_number_pane_t3_cp2

0xa778,	// (0x00041e15) list_single_graphic_pane_g1_cp2_ParamLimits

0xa778,	// (0x00041e15) list_single_graphic_pane_g1_cp2

0xc906,	// (0x00043fa3) list_single_graphic_pane_g2_cp2_ParamLimits

0xc906,	// (0x00043fa3) list_single_graphic_pane_g2_cp2

0xc912,	// (0x00043faf) list_single_graphic_pane_g3_cp2

0xd946,	// (0x00044fe3) list_single_graphic_pane_t1_cp2_ParamLimits

0xd946,	// (0x00044fe3) list_single_graphic_pane_t1_cp2

0xc906,	// (0x00043fa3) list_single_number_pane_g1_cp2_ParamLimits

0xc906,	// (0x00043fa3) list_single_number_pane_g1_cp2

0xc912,	// (0x00043faf) list_single_number_pane_g2_cp2

0xd946,	// (0x00044fe3) list_single_number_pane_t1_cp2_ParamLimits

0xd946,	// (0x00044fe3) list_single_number_pane_t1_cp2

0xa764,	// (0x00041e01) list_single_number_pane_t2_cp2_ParamLimits

0xa764,	// (0x00041e01) list_single_number_pane_t2_cp2

0xa0f3,	// (0x00041790) list_double2_pane_g1_cp2_ParamLimits

0xa0f3,	// (0x00041790) list_double2_pane_g1_cp2

0xc775,	// (0x00043e12) list_double2_pane_g2_cp2

0xc892,	// (0x00043f2f) list_double2_pane_t1_cp2_ParamLimits

0xc892,	// (0x00043f2f) list_double2_pane_t1_cp2

0xc8a8,	// (0x00043f45) list_double2_pane_t2_cp2_ParamLimits

0xc8a8,	// (0x00043f45) list_double2_pane_t2_cp2

0xc8ba,	// (0x00043f57) list_double_pane_g1_cp2_ParamLimits

0xc8ba,	// (0x00043f57) list_double_pane_g1_cp2

0xc8c6,	// (0x00043f63) list_double_pane_g2_cp2

0xc8ce,	// (0x00043f6b) list_double_pane_t1_cp2_ParamLimits

0xc8ce,	// (0x00043f6b) list_double_pane_t1_cp2

0xc8e4,	// (0x00043f81) list_double_pane_t2_cp2_ParamLimits

0xc8e4,	// (0x00043f81) list_double_pane_t2_cp2

0xc8f6,	// (0x00043f93) list_single_pane_cp2_g3

0xc906,	// (0x00043fa3) list_single_pane_g1_cp2_ParamLimits

0xc906,	// (0x00043fa3) list_single_pane_g1_cp2

0xc912,	// (0x00043faf) list_single_pane_g2_cp2

0xc91a,	// (0x00043fb7) list_single_pane_t1_cp2_ParamLimits

0xc91a,	// (0x00043fb7) list_single_pane_t1_cp2

0xa159,	// (0x000417f6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa159,	// (0x000417f6) list_single_large_graphic_pane_g1_cp2

0xc932,	// (0x00043fcf) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc932,	// (0x00043fcf) list_single_large_graphic_pane_g2_cp2

0xc93e,	// (0x00043fdb) list_single_large_graphic_pane_g3_cp2

0xc946,	// (0x00043fe3) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc946,	// (0x00043fe3) list_single_large_graphic_pane_g4_cp1

0xc960,	// (0x00043ffd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc960,	// (0x00043ffd) list_single_large_graphic_pane_t1_cp2

0xd924,	// (0x00044fc1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd924,	// (0x00044fc1) list_single_graphic_heading_pane_g1_cp2

0xa73f,	// (0x00041ddc) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa73f,	// (0x00041ddc) list_single_graphic_heading_pane_g4_cp2

0xc912,	// (0x00043faf) list_single_graphic_heading_pane_g5_cp2

0xd930,	// (0x00044fcd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd930,	// (0x00044fcd) list_single_graphic_heading_pane_t1_cp2

0xa750,	// (0x00041ded) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa750,	// (0x00041ded) list_single_graphic_heading_pane_t2_cp2

0xd8f6,	// (0x00044f93) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd8f6,	// (0x00044f93) list_single_2graphic_pane_g1_cp2

0xa73f,	// (0x00041ddc) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa73f,	// (0x00041ddc) list_single_2graphic_pane_g2_cp2

0xc912,	// (0x00043faf) list_single_2graphic_pane_g3_cp2

0xd902,	// (0x00044f9f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd902,	// (0x00044f9f) list_single_2graphic_pane_g4_cp2

0xd90e,	// (0x00044fab) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd90e,	// (0x00044fab) list_single_2graphic_pane_t1_cp2

0xb287,	// (0x00042924) list_highlight_pane_g10_cp1

0xd4ec,	// (0x00044b89) list_highlight_pane_g1_cp1

0xd4f4,	// (0x00044b91) list_highlight_pane_g2_cp1

0xd4fc,	// (0x00044b99) list_highlight_pane_g3_cp1

0xd504,	// (0x00044ba1) list_highlight_pane_g4_cp1

0xd50c,	// (0x00044ba9) list_highlight_pane_g5_cp1

0xd514,	// (0x00044bb1) list_highlight_pane_g6_cp1

0xd51c,	// (0x00044bb9) list_highlight_pane_g7_cp1

0xd524,	// (0x00044bc1) list_highlight_pane_g8_cp1

0xd52c,	// (0x00044bc9) list_highlight_pane_g9_cp1

0xa701,	// (0x00041d9e) form_field_slider_pane_t3

0xa711,	// (0x00041dae) form_field_slider_pane_t4

0xd420,	// (0x00044abd) slider_form_pane_ParamLimits

0xd420,	// (0x00044abd) slider_form_pane

0xb291,	// (0x0004292e) control_abbreviations

0xb291,	// (0x0004292e) control_conventions

0xb291,	// (0x0004292e) control_definitions

0xb291,	// (0x0004292e) format_table_attribute

0xdadd,	// (0x0004517a) bg_popup_preview_window_pane_g9

0xb291,	// (0x0004292e) format_table_data2

0xb291,	// (0x0004292e) format_table_data3

0xb291,	// (0x0004292e) format_table_data_example

0x0008,

0xb291,	// (0x0004292e) intro_purpose

0xf8f0,	// (0x00046f8d) bg_popup_preview_window_pane_g

0xb291,	// (0x0004292e) texts_category

0xb291,	// (0x0004292e) texts_graphics

0xc976,	// (0x00044013) text_digital

0xc985,	// (0x00044022) text_primary

0xc994,	// (0x00044031) text_primary_small

0xc9a3,	// (0x00044040) text_secondary

0xc9b2,	// (0x0004404f) text_title

0xdfa1,	// (0x0004563e) bg_passive_tab_pane_g1_cp3_srt

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp3_srt

0xdfaa,	// (0x00045647) bg_passive_tab_pane_g3_cp3_srt

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp3_srt_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp3_srt

0xdfb3,	// (0x00045650) tabs_4_active_pane_srt_g1

0xaaeb,	// (0x00042188) tabs_4_active_pane_srt_t1_ParamLimits

0xaaeb,	// (0x00042188) tabs_4_active_pane_srt_t1

0xdfa1,	// (0x0004563e) bg_active_tab_pane_g1_cp3_copy1

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp3_copy1

0xdfaa,	// (0x00045647) bg_active_tab_pane_g3_cp3_copy1

0xb2ed,	// (0x0004298a) tabs_2_long_active_pane_srt_ParamLimits

0xb2ed,	// (0x0004298a) tabs_2_long_active_pane_srt

0xb2ed,	// (0x0004298a) tabs_2_long_passive_pane_srt_ParamLimits

0xb2ed,	// (0x0004298a) tabs_2_long_passive_pane_srt

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp4_srt

0xdebd,	// (0x0004555a) bg_passive_tab_pane_g1_cp4_srt

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp4_srt

0xdec6,	// (0x00045563) bg_passive_tab_pane_g3_cp4_srt

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp4_srt_ParamLimits

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp4_srt

0xa918,	// (0x00041fb5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa918,	// (0x00041fb5) tabs_2_long_active_pane_srt_t1

0xdebd,	// (0x0004555a) bg_active_tab_pane_g1_cp4_srt

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp4_srt

0xdec6,	// (0x00045563) bg_active_tab_pane_g3_cp4_srt

0xb2df,	// (0x0004297c) tabs_3_long_active_pane_srt_ParamLimits

0xb2df,	// (0x0004297c) tabs_3_long_active_pane_srt

0xb2df,	// (0x0004297c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb2df,	// (0x0004297c) tabs_3_long_passive_pane_cp_srt

0xb2df,	// (0x0004297c) tabs_3_long_passive_pane_srt_ParamLimits

0xb2df,	// (0x0004297c) tabs_3_long_passive_pane_srt

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp5_srt

0xc735,	// (0x00043dd2) bg_passive_tab_pane_g1_cp5_srt

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp5_srt

0xc73e,	// (0x00043ddb) bg_passive_tab_pane_g3_cp5_srt

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp5_srt_ParamLimits

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp5_srt

0xa902,	// (0x00041f9f) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa902,	// (0x00041f9f) tabs_3_long_active_pane_srt_t1

0xc735,	// (0x00043dd2) bg_active_tab_pane_g1_cp5_srt

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp5_srt

0xc73e,	// (0x00043ddb) bg_active_tab_pane_g3_cp5_srt

0xdeaf,	// (0x0004554c) navi_text_pane_srt_t1

0xdea7,	// (0x00045544) navi_icon_pane_srt_g1

0xcac2,	// (0x0004415f) midp_editing_number_pane_srt

0xc9c1,	// (0x0004405e) midp_ticker_pane_srt

0xcaca,	// (0x00044167) midp_ticker_pane_srt_g1

0xcad2,	// (0x0004416f) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00046e15) midp_ticker_pane_srt_g

0xcada,	// (0x00044177) midp_ticker_pane_srt_t1

0xde98,	// (0x00045535) midp_editing_number_pane_t1_copy1

0xc155,	// (0x000437f2) listscroll_midp_pane

0xc155,	// (0x000437f2) midp_form_pane

0xc9c9,	// (0x00044066) midp_info_popup_window_ParamLimits

0xc9c9,	// (0x00044066) midp_info_popup_window

0xc09c,	// (0x00043739) bg_popup_sub_pane_cp50_ParamLimits

0xc09c,	// (0x00043739) bg_popup_sub_pane_cp50

0xd13d,	// (0x000447da) listscroll_midp_info_pane_ParamLimits

0xd13d,	// (0x000447da) listscroll_midp_info_pane

0xd125,	// (0x000447c2) listscroll_form_midp_pane_ParamLimits

0xd125,	// (0x000447c2) listscroll_form_midp_pane

0xd131,	// (0x000447ce) scroll_bar_cp050

0xa6f5,	// (0x00041d92) list_midp_pane

0xe8ec,	// (0x00045f89) signal_pane_g2_cp

0xd057,	// (0x000446f4) listscroll_midp_info_pane_t1_ParamLimits

0xd057,	// (0x000446f4) listscroll_midp_info_pane_t1

0xd06f,	// (0x0004470c) listscroll_midp_info_pane_t2_ParamLimits

0xd06f,	// (0x0004470c) listscroll_midp_info_pane_t2

0xd0ad,	// (0x0004474a) listscroll_midp_info_pane_t3_ParamLimits

0xd0ad,	// (0x0004474a) listscroll_midp_info_pane_t3

0xd0e7,	// (0x00044784) listscroll_midp_info_pane_t4_ParamLimits

0xd0e7,	// (0x00044784) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x00046ec8) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x00046ec8) listscroll_midp_info_pane_t

0xc11c,	// (0x000437b9) scroll_pane_cp21

0xcff9,	// (0x00044696) form_midp_field_choice_group_pane

0xd002,	// (0x0004469f) form_midp_field_text_pane

0xd03d,	// (0x000446da) form_midp_field_time_pane

0xd045,	// (0x000446e2) form_midp_gauge_slider_pane

0xd04e,	// (0x000446eb) form_midp_gauge_wait_pane

0xb291,	// (0x0004292e) form_midp_image_pane

0x8254,	// (0x0003f8f1) list_single_midp_pane_ParamLimits

0x8254,	// (0x0003f8f1) list_single_midp_pane

0xa6d2,	// (0x00041d6f) form_midp_field_text_pane_t1

0xce7b,	// (0x00044518) input_focus_pane_cp050

0xcfe8,	// (0x00044685) list_midp_form_text_pane

0xcfb7,	// (0x00044654) form_midp_field_choice_group_pane_t1

0xcfc5,	// (0x00044662) input_focus_pane_cp051

0xcfd9,	// (0x00044676) list_midp_choice_pane

0xb291,	// (0x0004292e) status_idle_pane

0xcf9b,	// (0x00044638) form_midp_field_time_pane_t1

0xb287,	// (0x00042924) wait_anim_pane_g2_copy1

0xcfa9,	// (0x00044646) form_midp_field_time_pane_t2

0x0001,

0xca34,	// (0x000440d1) aid_navinavi_width_2_pane

0xf826,	// (0x00046ec3) form_midp_field_time_pane_t

0xb291,	// (0x0004292e) input_focus_pane_cp052

0xb291,	// (0x0004292e) bg_input_focus_pane_cp040

0xcf77,	// (0x00044614) form_midp_gauge_slider_pane_t1

0xcf85,	// (0x00044622) form_midp_gauge_slider_pane_t2

0xa6b2,	// (0x00041d4f) form_midp_gauge_slider_pane_t3

0xa6c2,	// (0x00041d5f) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x00046eba) form_midp_gauge_slider_pane_t

0xcf93,	// (0x00044630) form_midp_slider_pane

0xb2ed,	// (0x0004298a) bg_input_focus_pane_cp041_ParamLimits

0xb2ed,	// (0x0004298a) bg_input_focus_pane_cp041

0xcf44,	// (0x000445e1) form_midp_gauge_wait_pane_t1_ParamLimits

0xcf44,	// (0x000445e1) form_midp_gauge_wait_pane_t1

0xcf56,	// (0x000445f3) form_midp_gauge_wait_pane_t2_ParamLimits

0xcf56,	// (0x000445f3) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x00046eb5) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x00046eb5) form_midp_gauge_wait_pane_t

0xcf68,	// (0x00044605) form_midp_wait_pane_ParamLimits

0xcf68,	// (0x00044605) form_midp_wait_pane

0xcf0e,	// (0x000445ab) form_midp_image_pane_g1

0xcf17,	// (0x000445b4) form_midp_image_pane_t1

0xcf26,	// (0x000445c3) form_midp_image_pane_t2

0xcf35,	// (0x000445d2) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x00046eae) form_midp_image_pane_t

0xcf05,	// (0x000445a2) list_single_midp_pane_g1

0x0cd3,	// (0x00038370) list_single_midp_pane_t1

0xa69c,	// (0x00041d39) list_midp_form_item_pane_ParamLimits

0xa69c,	// (0x00041d39) list_midp_form_item_pane

0xc9dc,	// (0x00044079) list_midp_form_item_pane_t1

0xc9eb,	// (0x00044088) midp_ticker_pane_g1

0xc9f7,	// (0x00044094) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00046dfb) midp_ticker_pane_g

0xca03,	// (0x000440a0) midp_ticker_pane_t1

0xdf48,	// (0x000455e5) midp_editing_number_pane_t1

0xdf26,	// (0x000455c3) midp_editing_number_pane

0xdf35,	// (0x000455d2) midp_ticker_pane

0xde88,	// (0x00045525) ai_message_heading_pane

0xb291,	// (0x0004292e) bg_popup_window_pane_cp14

0xde90,	// (0x0004552d) listscroll_ai_message_pane

0xde12,	// (0x000454af) ai_message_heading_pane_g1_ParamLimits

0xde12,	// (0x000454af) ai_message_heading_pane_g1

0xde1e,	// (0x000454bb) ai_message_heading_pane_g2_ParamLimits

0xde1e,	// (0x000454bb) ai_message_heading_pane_g2

0xde2a,	// (0x000454c7) ai_message_heading_pane_g3_ParamLimits

0xde2a,	// (0x000454c7) ai_message_heading_pane_g3

0xde36,	// (0x000454d3) ai_message_heading_pane_g4_ParamLimits

0xde36,	// (0x000454d3) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x00046fef) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x00046fef) ai_message_heading_pane_g

0xde42,	// (0x000454df) ai_message_heading_pane_t1_ParamLimits

0xde42,	// (0x000454df) ai_message_heading_pane_t1

0xde5c,	// (0x000454f9) ai_message_heading_pane_t2_ParamLimits

0xde5c,	// (0x000454f9) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x00046ff8) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x00046ff8) ai_message_heading_pane_t

0xde6e,	// (0x0004550b) bg_popup_heading_pane_cp1_ParamLimits

0xde6e,	// (0x0004550b) bg_popup_heading_pane_cp1

0xde00,	// (0x0004549d) list_ai_message_pane_ParamLimits

0xde00,	// (0x0004549d) list_ai_message_pane

0xc11c,	// (0x000437b9) scroll_pane_cp10

0xdd9c,	// (0x00045439) list_ai_message_pane_g1

0xdda4,	// (0x00045441) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x00046fcc) list_ai_message_pane_g

0xddac,	// (0x00045449) list_ai_message_pane_t1_ParamLimits

0xddac,	// (0x00045449) list_ai_message_pane_t1

0xddc1,	// (0x0004545e) list_ai_message_pane_t2_ParamLimits

0xddc1,	// (0x0004545e) list_ai_message_pane_t2

0xddd6,	// (0x00045473) list_ai_message_pane_t3_ParamLimits

0xddd6,	// (0x00045473) list_ai_message_pane_t3

0xddeb,	// (0x00045488) list_ai_message_pane_t4_ParamLimits

0xddeb,	// (0x00045488) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x00046fd1) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x00046fd1) list_ai_message_pane_t

0xa8e0,	// (0x00041f7d) cell_ai_soft_ind_pane_ParamLimits

0xa8e0,	// (0x00041f7d) cell_ai_soft_ind_pane

0xca15,	// (0x000440b2) cell_ai_soft_ind_pane_g1_ParamLimits

0xca15,	// (0x000440b2) cell_ai_soft_ind_pane_g1

0xb291,	// (0x0004292e) grid_highlight_cp1

0xca22,	// (0x000440bf) text_secondary_cp56_ParamLimits

0xca22,	// (0x000440bf) text_secondary_cp56

0xdd71,	// (0x0004540e) example_general_pane_ParamLimits

0xdd71,	// (0x0004540e) example_general_pane

0xdd7d,	// (0x0004541a) example_parent_pane_g1_ParamLimits

0xdd7d,	// (0x0004541a) example_parent_pane_g1

0xdd89,	// (0x00045426) example_parent_pane_t1_ParamLimits

0xdd89,	// (0x00045426) example_parent_pane_t1

0x8fc9,	// (0x00040666) popup_preview_text_window_ParamLimits

0x8fc9,	// (0x00040666) popup_preview_text_window

0xc8fe,	// (0x00043f9b) list_single_pane_cp2_g4

0xb4bc,	// (0x00042b59) bg_popup_preview_window_pane_ParamLimits

0xb4bc,	// (0x00042b59) bg_popup_preview_window_pane

0xdae5,	// (0x00045182) popup_preview_text_window_t1_ParamLimits

0xdae5,	// (0x00045182) popup_preview_text_window_t1

0xdb3c,	// (0x000451d9) popup_preview_text_window_t2_ParamLimits

0xdb3c,	// (0x000451d9) popup_preview_text_window_t2

0xdb85,	// (0x00045222) popup_preview_text_window_t3_ParamLimits

0xdb85,	// (0x00045222) popup_preview_text_window_t3

0xdbca,	// (0x00045267) popup_preview_text_window_t4_ParamLimits

0xdbca,	// (0x00045267) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x00046fa0) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x00046fa0) popup_preview_text_window_t

0xdc48,	// (0x000452e5) scroll_pane_cp11

0xce07,	// (0x000444a4) bg_popup_preview_window_pane_g1

0xdaa5,	// (0x00045142) bg_popup_preview_window_pane_g2

0xdaad,	// (0x0004514a) bg_popup_preview_window_pane_g3

0xdab5,	// (0x00045152) bg_popup_preview_window_pane_g4

0xdabd,	// (0x0004515a) bg_popup_preview_window_pane_g5

0xdac5,	// (0x00045162) bg_popup_preview_window_pane_g6

0xdacd,	// (0x0004516a) bg_popup_preview_window_pane_g7

0xdad5,	// (0x00045172) bg_popup_preview_window_pane_g8

0x12a8,	// (0x00038945) aid_popup_width_pane

0x8f45,	// (0x000405e2) popup_midp_note_alarm_window_ParamLimits

0x8f45,	// (0x000405e2) popup_midp_note_alarm_window

0xb928,	// (0x00042fc5) data_form_pane_ParamLimits

0x813f,	// (0x0003f7dc) form_field_data_pane_g1

0x8149,	// (0x0003f7e6) form_field_data_pane_t1_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_ParamLimits

0x09af,	// (0x0003804c) data_form_wide_pane_ParamLimits

0x09c0,	// (0x0003805d) form_field_data_wide_pane_g1

0x09cc,	// (0x00038069) form_field_data_wide_pane_t1_ParamLimits

0xb6af,	// (0x00042d4c) input_focus_pane_cp6_ParamLimits

0x894c,	// (0x0003ffe9) input_popup_find_pane_g1_ParamLimits

0x894c,	// (0x0003ffe9) input_popup_find_pane_g1

0x1bd1,	// (0x0003926e) aid_navi_side_left_pane

0x1be6,	// (0x00039283) aid_navi_side_right_pane

0xd5c9,	// (0x00044c66) bg_popup_window_pane_cp30_ParamLimits

0xd5c9,	// (0x00044c66) bg_popup_window_pane_cp30

0xd643,	// (0x00044ce0) popup_midp_note_alarm_window_g1_ParamLimits

0xd643,	// (0x00044ce0) popup_midp_note_alarm_window_g1

0xd673,	// (0x00044d10) popup_midp_note_alarm_window_t1_ParamLimits

0xd673,	// (0x00044d10) popup_midp_note_alarm_window_t1

0xd714,	// (0x00044db1) popup_midp_note_alarm_window_t2_ParamLimits

0xd714,	// (0x00044db1) popup_midp_note_alarm_window_t2

0xd7c2,	// (0x00044e5f) popup_midp_note_alarm_window_t3_ParamLimits

0xd7c2,	// (0x00044e5f) popup_midp_note_alarm_window_t3

0xd7f4,	// (0x00044e91) popup_midp_note_alarm_window_t4_ParamLimits

0xd7f4,	// (0x00044e91) popup_midp_note_alarm_window_t4

0xd81a,	// (0x00044eb7) popup_midp_note_alarm_window_t5_ParamLimits

0xd81a,	// (0x00044eb7) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x00046f3d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x00046f3d) popup_midp_note_alarm_window_t

0xd8c6,	// (0x00044f63) wait_bar_pane_cp1_ParamLimits

0xd8c6,	// (0x00044f63) wait_bar_pane_cp1

0xb291,	// (0x0004292e) wait_anim_pane_copy1

0xb291,	// (0x0004292e) wait_border_pane_copy1

0xd2e1,	// (0x0004497e) wait_border_pane_g1_copy1

0x09e6,	// (0x00038083) form_field_popup_pane_g1

0x8163,	// (0x0003f800) form_field_popup_pane_t1_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_cp7_ParamLimits

0xc01e,	// (0x000436bb) list_form_pane_ParamLimits

0x0a08,	// (0x000380a5) form_field_popup_wide_pane_g1

0x0a10,	// (0x000380ad) form_field_popup_wide_pane_t1_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_cp8_ParamLimits

0xc02a,	// (0x000436c7) list_form_wide_pane_ParamLimits

0xdfda,	// (0x00045677) aid_size_cell_graphic_pane

0x81e2,	// (0x0003f87f) data_form_pane_t1_ParamLimits

0x826d,	// (0x0003f90a) data_form_wide_pane_t1_ParamLimits

0xa323,	// (0x000419c0) bg_status_flat_pane

0x85ec,	// (0x0003fc89) title_pane_t1_ParamLimits

0xb2a7,	// (0x00042944) title_pane_t2_ParamLimits

0xb2cd,	// (0x0004296a) title_pane_t3_ParamLimits

0xf55d,	// (0x00046bfa) title_pane_t_ParamLimits

0xc4b4,	// (0x00043b51) level_1_signal_ParamLimits

0xc4c1,	// (0x00043b5e) level_2_signal_ParamLimits

0xc4ce,	// (0x00043b6b) level_3_signal_ParamLimits

0xc4db,	// (0x00043b78) level_4_signal_ParamLimits

0xc4e8,	// (0x00043b85) level_5_signal_ParamLimits

0xc4f5,	// (0x00043b92) level_6_signal_ParamLimits

0xc502,	// (0x00043b9f) level_7_signal_ParamLimits

0xc4b4,	// (0x00043b51) level_1_battery_ParamLimits

0xc4c1,	// (0x00043b5e) level_2_battery_ParamLimits

0xc4ce,	// (0x00043b6b) level_3_battery_ParamLimits

0xc4db,	// (0x00043b78) level_4_battery_ParamLimits

0xc4e8,	// (0x00043b85) level_5_battery_ParamLimits

0xc4f5,	// (0x00043b92) level_6_battery_ParamLimits

0xc502,	// (0x00043b9f) level_7_battery_ParamLimits

0xd4ec,	// (0x00044b89) bg_status_flat_pane_g1

0xd4f4,	// (0x00044b91) bg_status_flat_pane_g2

0xd4fc,	// (0x00044b99) bg_status_flat_pane_g3

0xd504,	// (0x00044ba1) bg_status_flat_pane_g4

0xd50c,	// (0x00044ba9) bg_status_flat_pane_g5

0xd514,	// (0x00044bb1) bg_status_flat_pane_g6

0xd51c,	// (0x00044bb9) bg_status_flat_pane_g7

0x8680,	// (0x0003fd1d) tabs_3_active_pane_t1_ParamLimits

0x8680,	// (0x0003fd1d) tabs_3_passive_pane_t1_ParamLimits

0x869a,	// (0x0003fd37) tabs_4_active_pane_t1_ParamLimits

0x869a,	// (0x0003fd37) tabs_4_1_passive_pane_t1_ParamLimits

0x8962,	// (0x0003ffff) tabs_2_active_pane_t1_ParamLimits

0x8962,	// (0x0003ffff) tabs_2_passive_pane_t1_ParamLimits

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp4_ParamLimits

0x8974,	// (0x00040011) tabs_2_long_active_pane_t1_ParamLimits

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp4_ParamLimits

0x2cd8,	// (0x0003a375) list_single_midp_graphic_pane_t1_ParamLimits

0xb2ed,	// (0x0004298a) bg_active_tab_pane_cp5_ParamLimits

0x8987,	// (0x00040024) tabs_3_long_active_pane_t1_ParamLimits

0xc155,	// (0x000437f2) bg_passive_tab_pane_cp5_ParamLimits

0x2cd8,	// (0x0003a375) list_single_midp_graphic_pane_t1

0xa323,	// (0x000419c0) bg_status_flat_pane_ParamLimits

0xccc6,	// (0x00044363) indicator_pane_cp2_ParamLimits

0xccc6,	// (0x00044363) indicator_pane_cp2

0xa49b,	// (0x00041b38) navi_pane_srt_ParamLimits

0xa49b,	// (0x00041b38) navi_pane_srt

0xccee,	// (0x0004438b) popup_clock_digital_analogue_window_cp1

0xb331,	// (0x000429ce) indicator_pane_t1

0xc9c1,	// (0x0004405e) copy_highlight_pane

0xc9c1,	// (0x0004405e) cursor_graphics_pane

0xc9c1,	// (0x0004405e) graphic_within_text_pane

0xc9c1,	// (0x0004405e) link_highlight_pane

0xdc0b,	// (0x000452a8) popup_preview_text_window_t5_ParamLimits

0xdc0b,	// (0x000452a8) popup_preview_text_window_t5

0xca3c,	// (0x000440d9) cursor_digital_pane

0xca3c,	// (0x000440d9) cursor_primary_pane

0xca4d,	// (0x000440ea) cursor_primary_small_pane

0xca55,	// (0x000440f2) cursor_secondary_pane

0xca5d,	// (0x000440fa) cursor_title_pane

0xca3c,	// (0x000440d9) link_highlight_digital_pane

0xca44,	// (0x000440e1) link_highlight_primary_pane

0xca4d,	// (0x000440ea) link_highlight_primary_small_pane

0xca55,	// (0x000440f2) link_highlight_secondary_pane

0xca5d,	// (0x000440fa) link_highlight_title_pane

0xca3c,	// (0x000440d9) copy_highlight_digital_pane

0xca3c,	// (0x000440d9) copy_highlight_primary_pane

0xca4d,	// (0x000440ea) copy_highlight_primary_small_pane

0xca55,	// (0x000440f2) copy_highlight_secondary_pane

0xca5d,	// (0x000440fa) copy_highlight_title_pane

0xca55,	// (0x000440f2) graphic_text_digital_pane

0xd56c,	// (0x00044c09) graphic_text_primary_pane

0xd575,	// (0x00044c12) graphic_text_primary_small_pane

0xca4d,	// (0x000440ea) graphic_text_secondary_pane

0xca3c,	// (0x000440d9) graphic_text_title_pane

0xa202,	// (0x0004189f) cursor_primary_pane_g1

0xd55e,	// (0x00044bfb) cursor_text_primary_t1

0xa735,	// (0x00041dd2) cursor_primary_small_pane_g1

0xd550,	// (0x00044bed) cursor_text_primary_small_t1

0xa72b,	// (0x00041dc8) cursor_primary_small_pane_g1_copy1

0xd542,	// (0x00044bdf) cursor_text_primary_small_t1_copy1

0xd534,	// (0x00044bd1) cursor_text_title_t1

0xa721,	// (0x00041dbe) cursor_title_pane_g1

0xa202,	// (0x0004189f) cursor_digital_pane_g1

0xca65,	// (0x00044102) cursor_text_digital_t1

0xd4d5,	// (0x00044b72) link_highlight_primary_pane_g1

0xd4dd,	// (0x00044b7a) link_highlight_primary_pane_t1

0xca73,	// (0x00044110) link_highlight_primary_small_pane_g1

0xca7b,	// (0x00044118) link_highlight_primary_small_pane_t1

0xca73,	// (0x00044110) link_highlight_secondary_pane_g1

0xca8a,	// (0x00044127) link_highlight_secondary_pane_t1

0xd449,	// (0x00044ae6) link_highlight_title_pane_g1

0xd451,	// (0x00044aee) link_highlight_title_pane_t1

0xd432,	// (0x00044acf) link_highlight_digital_pane_g1

0xd43a,	// (0x00044ad7) link_highlight_digital_pane_t1

0xd326,	// (0x000449c3) copy_highlight_primary_pane_g1

0xd32e,	// (0x000449cb) copy_highlight_primary_pane_t1

0xd300,	// (0x0004499d) copy_highlight_primary_small_pane_g1

0xd317,	// (0x000449b4) copy_highlight_primary_small_pane_t1

0xca99,	// (0x00044136) copy_highlight_secondary_pane_g1

0xcaa1,	// (0x0004413e) copy_highlight_secondary_pane_t1

0xd300,	// (0x0004499d) copy_highlight_title_pane_g1

0xd308,	// (0x000449a5) copy_highlight_title_pane_t1

0xd326,	// (0x000449c3) copy_highlight_digital_pane_g1

0xe160,	// (0x000457fd) copy_highlight_digital_pane_t1

0xe0b4,	// (0x00045751) graphic_text_primary_pane_g1

0xe144,	// (0x000457e1) graphic_text_primary_pane_t1

0xe152,	// (0x000457ef) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0004706c) graphic_text_primary_pane_t

0xe120,	// (0x000457bd) graphic_text_primary_small_pane_g1

0xe128,	// (0x000457c5) graphic_text_primary_small_pane_t1

0xe136,	// (0x000457d3) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x00047067) graphic_text_primary_small_pane_t

0xe0fc,	// (0x00045799) graphic_text_secondary_pane_g1

0xe104,	// (0x000457a1) graphic_text_secondary_pane_t1

0xe112,	// (0x000457af) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x00047062) graphic_text_secondary_pane_t

0xe0d8,	// (0x00045775) graphic_text_title_pane_g1

0xe0e0,	// (0x0004577d) graphic_text_title_pane_t1

0xe0ee,	// (0x0004578b) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0004705d) graphic_text_title_pane_t

0xe0b4,	// (0x00045751) graphic_text_digital_pane_g1

0xe0bc,	// (0x00045759) graphic_text_digital_pane_t1

0xe0ca,	// (0x00045767) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x00047058) graphic_text_digital_pane_t

0xb2ed,	// (0x0004298a) navi_icon_pane_srt_ParamLimits

0xb2ed,	// (0x0004298a) navi_icon_pane_srt

0xb291,	// (0x0004292e) navi_midp_pane_srt

0xb291,	// (0x0004292e) navi_navi_pane_srt

0xb2ed,	// (0x0004298a) navi_text_pane_srt_ParamLimits

0xb2ed,	// (0x0004298a) navi_text_pane_srt

0xe07f,	// (0x0004571c) navi_navi_icon_text_pane_srt

0xe087,	// (0x00045724) navi_navi_pane_srt_g1_ParamLimits

0xe087,	// (0x00045724) navi_navi_pane_srt_g1

0xe099,	// (0x00045736) navi_navi_pane_srt_g2_ParamLimits

0xe099,	// (0x00045736) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x00047053) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x00047053) navi_navi_pane_srt_g

0xe0ab,	// (0x00045748) navi_navi_tabs_pane_srt

0xe07f,	// (0x0004571c) navi_navi_text_pane_srt

0xe07f,	// (0x0004571c) navi_navi_volume_pane_srt

0xe070,	// (0x0004570d) navi_navi_text_pane_srt_t1

0x3644,	// (0x0003ace1) navi_navi_volume_pane_srt_g1

0x364c,	// (0x0003ace9) volume_small_pane_srt_ParamLimits

0x364c,	// (0x0003ace9) volume_small_pane_srt

0x216c,	// (0x00039809) volume_small_pane_srt_g1_ParamLimits

0x216c,	// (0x00039809) volume_small_pane_srt_g1

0x217c,	// (0x00039819) volume_small_pane_srt_g2_ParamLimits

0x217c,	// (0x00039819) volume_small_pane_srt_g2

0x218d,	// (0x0003982a) volume_small_pane_srt_g3_ParamLimits

0x218d,	// (0x0003982a) volume_small_pane_srt_g3

0x219e,	// (0x0003983b) volume_small_pane_srt_g4_ParamLimits

0x219e,	// (0x0003983b) volume_small_pane_srt_g4

0x21af,	// (0x0003984c) volume_small_pane_srt_g5_ParamLimits

0x21af,	// (0x0003984c) volume_small_pane_srt_g5

0x21c0,	// (0x0003985d) volume_small_pane_srt_g6_ParamLimits

0x21c0,	// (0x0003985d) volume_small_pane_srt_g6

0x21d1,	// (0x0003986e) volume_small_pane_srt_g7_ParamLimits

0x21d1,	// (0x0003986e) volume_small_pane_srt_g7

0x21e2,	// (0x0003987f) volume_small_pane_srt_g8_ParamLimits

0x21e2,	// (0x0003987f) volume_small_pane_srt_g8

0x21f3,	// (0x00039890) volume_small_pane_srt_g9_ParamLimits

0x21f3,	// (0x00039890) volume_small_pane_srt_g9

0x2204,	// (0x000398a1) volume_small_pane_srt_g10_ParamLimits

0x2204,	// (0x000398a1) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00046e00) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00046e00) volume_small_pane_srt_g

0xb565,	// (0x00042c02) query_popup_data_pane_cp2

0xe056,	// (0x000456f3) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe056,	// (0x000456f3) navi_navi_icon_text_pane_srt_t1

0xd56c,	// (0x00044c09) navi_tabs_2_long_pane_srt

0xd56c,	// (0x00044c09) navi_tabs_2_pane_srt

0xd56c,	// (0x00044c09) navi_tabs_3_long_pane_srt

0xd56c,	// (0x00044c09) navi_tabs_3_pane_srt

0xd56c,	// (0x00044c09) navi_tabs_4_pane_srt

0x3624,	// (0x0003acc1) tabs_2_active_pane_srt_ParamLimits

0x3624,	// (0x0003acc1) tabs_2_active_pane_srt

0x3634,	// (0x0003acd1) tabs_2_passive_pane_srt_ParamLimits

0x3634,	// (0x0003acd1) tabs_2_passive_pane_srt

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp1_srt_ParamLimits

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp1_srt

0xe034,	// (0x000456d1) bg_passive_tab_pane_g1_cp1_srt

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp1_srt

0xe03d,	// (0x000456da) bg_passive_tab_pane_g3_cp1_srt

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp1_srt_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp1_srt

0xe046,	// (0x000456e3) tabs_2_active_pane_srt_g1

0xab67,	// (0x00042204) tabs_2_active_pane_srt_t1_ParamLimits

0xab67,	// (0x00042204) tabs_2_active_pane_srt_t1

0xe034,	// (0x000456d1) bg_active_tab_pane_g1_cp1_srt

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp1_srt

0xe03d,	// (0x000456da) bg_active_tab_pane_g3_cp1_srt

0x35df,	// (0x0003ac7c) tabs_3_active_pane_srt_ParamLimits

0x35df,	// (0x0003ac7c) tabs_3_active_pane_srt

0x35f0,	// (0x0003ac8d) tabs_3_passive_pane_cp_srt_ParamLimits

0x35f0,	// (0x0003ac8d) tabs_3_passive_pane_cp_srt

0x3601,	// (0x0003ac9e) tabs_3_passive_pane_srt_ParamLimits

0x3601,	// (0x0003ac9e) tabs_3_passive_pane_srt

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp2_srt_ParamLimits

0xce7b,	// (0x00044518) bg_passive_tab_pane_cp2_srt

0xcab0,	// (0x0004414d) bg_passive_tab_pane_g1_cp2_srt

0xc6e5,	// (0x00043d82) bg_passive_tab_pane_g2_cp2_srt

0xcab9,	// (0x00044156) bg_passive_tab_pane_g3_cp2_srt

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp2_srt_ParamLimits

0xb2df,	// (0x0004297c) bg_active_tab_pane_cp2_srt

0xe02c,	// (0x000456c9) tabs_3_active_pane_srt_g1

0xab51,	// (0x000421ee) tabs_3_active_pane_srt_t1_ParamLimits

0xab51,	// (0x000421ee) tabs_3_active_pane_srt_t1

0xcab0,	// (0x0004414d) bg_active_tab_pane_g1_cp2_srt

0xc6e5,	// (0x00043d82) bg_active_tab_pane_g2_cp2_srt

0xcab9,	// (0x00044156) bg_active_tab_pane_g3_cp2_srt

0x3585,	// (0x0003ac22) tabs_4_active_pane_srt_ParamLimits

0x3585,	// (0x0003ac22) tabs_4_active_pane_srt

0x3597,	// (0x0003ac34) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3597,	// (0x0003ac34) tabs_4_passive_pane_cp2_srt

0x238e,	// (0x00039a2b) aid_size_cell_toolbar

0xcd99,	// (0x00044436) main_idle_act_pane_ParamLimits

0x253f,	// (0x00039bdc) popup_large_graphic_colour_window_ParamLimits

0x924f,	// (0x000408ec) popup_toolbar_window_ParamLimits

0x924f,	// (0x000408ec) popup_toolbar_window

0xdf57,	// (0x000455f4) list_single_graphic_2heading_pane_ParamLimits

0xdf57,	// (0x000455f4) list_single_graphic_2heading_pane

0xc2fc,	// (0x00043999) aid_size_cell_apps_grid_lsc_pane

0xc30e,	// (0x000439ab) aid_size_cell_apps_grid_prt_pane

0xc155,	// (0x000437f2) bg_wml_button_pane_cp1_ParamLimits

0xc155,	// (0x000437f2) bg_wml_button_pane_cp1

0xa6d2,	// (0x00041d6f) form_midp_field_text_pane_t1_ParamLimits

0xce7b,	// (0x00044518) input_focus_pane_cp050_ParamLimits

0xcfe8,	// (0x00044685) list_midp_form_text_pane_ParamLimits

0xcfc5,	// (0x00044662) input_focus_pane_cp051_ParamLimits

0xcfd9,	// (0x00044676) list_midp_choice_pane_ParamLimits

0xa666,	// (0x00041d03) list_single_2graphic_pane_cp3_ParamLimits

0xa666,	// (0x00041d03) list_single_2graphic_pane_cp3

0xa67b,	// (0x00041d18) list_single_midp_graphic_pane_ParamLimits

0xa67b,	// (0x00041d18) list_single_midp_graphic_pane

0x0bb5,	// (0x00038252) list_single_graphic_2heading_pane_g1_ParamLimits

0x0bb5,	// (0x00038252) list_single_graphic_2heading_pane_g1

0x0bc1,	// (0x0003825e) list_single_graphic_2heading_pane_g4_ParamLimits

0x0bc1,	// (0x0003825e) list_single_graphic_2heading_pane_g4

0x0bcd,	// (0x0003826a) list_single_graphic_2heading_pane_g5_ParamLimits

0x0bcd,	// (0x0003826a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00046e53) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00046e53) list_single_graphic_2heading_pane_g

0x0bd9,	// (0x00038276) list_single_graphic_2heading_pane_t1_ParamLimits

0x0bd9,	// (0x00038276) list_single_graphic_2heading_pane_t1

0x0bed,	// (0x0003828a) list_single_graphic_2heading_pane_t2_ParamLimits

0x0bed,	// (0x0003828a) list_single_graphic_2heading_pane_t2

0x0c09,	// (0x000382a6) list_single_graphic_2heading_pane_t3_ParamLimits

0x0c09,	// (0x000382a6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00046e5a) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00046e5a) list_single_graphic_2heading_pane_t

0xcd33,	// (0x000443d0) bg_popup_sub_pane_cp2

0xcd5d,	// (0x000443fa) grid_toobar_pane

0x2c5d,	// (0x0003a2fa) cell_toolbar_pane_ParamLimits

0x2c5d,	// (0x0003a2fa) cell_toolbar_pane

0xcdab,	// (0x00044448) cell_toolbar_pane_g1_ParamLimits

0xcdab,	// (0x00044448) cell_toolbar_pane_g1

0xcdbf,	// (0x0004445c) cell_toolbar_pane_g2_ParamLimits

0xcdbf,	// (0x0004445c) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00046e68) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00046e68) cell_toolbar_pane_g

0xcde1,	// (0x0004447e) grid_highlight_pane_cp2_ParamLimits

0xcde1,	// (0x0004447e) grid_highlight_pane_cp2

0xcdfb,	// (0x00044498) toolbar_button_pane

0xce07,	// (0x000444a4) toolbar_button_pane_g1

0xce0f,	// (0x000444ac) toolbar_button_pane_g2

0xce17,	// (0x000444b4) toolbar_button_pane_g3

0xce1f,	// (0x000444bc) toolbar_button_pane_g4

0xce27,	// (0x000444c4) toolbar_button_pane_g5

0xce2f,	// (0x000444cc) toolbar_button_pane_g6

0xce37,	// (0x000444d4) toolbar_button_pane_g7

0xce3f,	// (0x000444dc) toolbar_button_pane_g8

0xce47,	// (0x000444e4) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00046e6d) toolbar_button_pane_g

0x2c95,	// (0x0003a332) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2c95,	// (0x0003a332) list_single_2graphic_pane_g1_cp3

0x92a7,	// (0x00040944) list_single_2graphic_pane_g2_cp3_ParamLimits

0x92a7,	// (0x00040944) list_single_2graphic_pane_g2_cp3

0xc827,	// (0x00043ec4) list_single_2graphic_pane_g3_cp3

0x2cb2,	// (0x0003a34f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2cb2,	// (0x0003a34f) list_single_2graphic_pane_g4_cp3

0x2cbe,	// (0x0003a35b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x2cbe,	// (0x0003a35b) list_single_2graphic_pane_t1_cp3

0xc81b,	// (0x00043eb8) list_single_midp_graphic_pane_g2_ParamLimits

0xc81b,	// (0x00043eb8) list_single_midp_graphic_pane_g2

0x0b9d,	// (0x0003823a) aid_zoom_text_primary

0x0ba5,	// (0x00038242) aid_zoom_text_secondary

0xcb6d,	// (0x0004420a) status_small_pane_g7_ParamLimits

0xcb6d,	// (0x0004420a) status_small_pane_g7

0xcb90,	// (0x0004422d) status_small_pane_t1_ParamLimits

0x85c8,	// (0x0003fc65) title_pane_g2

0x0003,

0xf554,	// (0x00046bf1) title_pane_g

0x8850,	// (0x0003feed) aid_size_cell_colour_1_pane_ParamLimits

0x8850,	// (0x0003feed) aid_size_cell_colour_1_pane

0x8864,	// (0x0003ff01) aid_size_cell_colour_2_pane_ParamLimits

0x8864,	// (0x0003ff01) aid_size_cell_colour_2_pane

0x8878,	// (0x0003ff15) aid_size_cell_colour_3_pane_ParamLimits

0x8878,	// (0x0003ff15) aid_size_cell_colour_3_pane

0x888c,	// (0x0003ff29) aid_size_cell_colour_4_pane_ParamLimits

0x888c,	// (0x0003ff29) aid_size_cell_colour_4_pane

0x1b0d,	// (0x000391aa) title_pane_stacon_g1_ParamLimits

0x1b0d,	// (0x000391aa) title_pane_stacon_g1

0xd385,	// (0x00044a22) popup_note_wait_window_g3_ParamLimits

0xd385,	// (0x00044a22) popup_note_wait_window_g3

0xd3fb,	// (0x00044a98) popup_note_wait_window_t5_ParamLimits

0xd3fb,	// (0x00044a98) popup_note_wait_window_t5

0xb291,	// (0x0004292e) main_feb_china_hwr_fs_writing_pane

0x8c6b,	// (0x00040308) popup_feb_china_hwr_fs_window_ParamLimits

0x8c6b,	// (0x00040308) popup_feb_china_hwr_fs_window

0x92b8,	// (0x00040955) aid_size_cell_hwr_fs_ParamLimits

0x92b8,	// (0x00040955) aid_size_cell_hwr_fs

0xce7b,	// (0x00044518) bg_popup_sub_pane_cp3_ParamLimits

0xce7b,	// (0x00044518) bg_popup_sub_pane_cp3

0x92cd,	// (0x0004096a) grid_hwr_fs_pane_ParamLimits

0x92cd,	// (0x0004096a) grid_hwr_fs_pane

0x2d1b,	// (0x0003a3b8) linegrid_hwr_fs_pane_ParamLimits

0x2d1b,	// (0x0003a3b8) linegrid_hwr_fs_pane

0x92e5,	// (0x00040982) cell_hwr_fs_pane_ParamLimits

0x92e5,	// (0x00040982) cell_hwr_fs_pane

0xce87,	// (0x00044524) linegrid_hwr_fs_pane_g1_ParamLimits

0xce87,	// (0x00044524) linegrid_hwr_fs_pane_g1

0xa63a,	// (0x00041cd7) linegrid_hwr_fs_pane_g2_ParamLimits

0xa63a,	// (0x00041cd7) linegrid_hwr_fs_pane_g2

0xce93,	// (0x00044530) linegrid_hwr_fs_pane_g3_ParamLimits

0xce93,	// (0x00044530) linegrid_hwr_fs_pane_g3

0x2d5f,	// (0x0003a3fc) linegrid_hwr_fs_pane_g4_ParamLimits

0x2d5f,	// (0x0003a3fc) linegrid_hwr_fs_pane_g4

0x2d79,	// (0x0003a416) linegrid_hwr_fs_pane_g5_ParamLimits

0x2d79,	// (0x0003a416) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x00046e93) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x00046e93) linegrid_hwr_fs_pane_g

0xce9f,	// (0x0004453c) cell_hwr_fs_pane_g1_ParamLimits

0xce9f,	// (0x0004453c) cell_hwr_fs_pane_g1

0xccff,	// (0x0004439c) cell_hwr_fs_pane_g2_ParamLimits

0xccff,	// (0x0004439c) cell_hwr_fs_pane_g2

0xa64c,	// (0x00041ce9) cell_hwr_fs_pane_g3_ParamLimits

0xa64c,	// (0x00041ce9) cell_hwr_fs_pane_g3

0xa659,	// (0x00041cf6) cell_hwr_fs_pane_g4_ParamLimits

0xa659,	// (0x00041cf6) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x00046e9e) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x00046e9e) cell_hwr_fs_pane_g

0x930b,	// (0x000409a8) cell_hwr_fs_pane_t1

0xb291,	// (0x0004292e) grid_highlight_pane_cp6

0xb291,	// (0x0004292e) main_idle_act2_pane

0xc103,	// (0x000437a0) aid_inside_area_popup_secondary

0xa79c,	// (0x00041e39) aid_inside_area_window_primary_ParamLimits

0xa79c,	// (0x00041e39) aid_inside_area_window_primary

0xe16f,	// (0x0004580c) ai2_news_ticker_pane

0xe177,	// (0x00045814) aid_size_cell_ai1_link_ParamLimits

0xe177,	// (0x00045814) aid_size_cell_ai1_link

0xe191,	// (0x0004582e) popup_ai2_data_window_ParamLimits

0xe191,	// (0x0004582e) popup_ai2_data_window

0xe1a5,	// (0x00045842) popup_ai2_link_window_ParamLimits

0xe1a5,	// (0x00045842) popup_ai2_link_window

0xce7b,	// (0x00044518) bg_popup_sub_pane_cp4_ParamLimits

0xce7b,	// (0x00044518) bg_popup_sub_pane_cp4

0xe1b9,	// (0x00045856) grid_ai2_link_pane_ParamLimits

0xe1b9,	// (0x00045856) grid_ai2_link_pane

0xe1d0,	// (0x0004586d) popup_ai2_link_window_g1_ParamLimits

0xe1d0,	// (0x0004586d) popup_ai2_link_window_g1

0xe1dc,	// (0x00045879) popup_ai2_link_window_g2_ParamLimits

0xe1dc,	// (0x00045879) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x00047071) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x00047071) popup_ai2_link_window_g

0xe1eb,	// (0x00045888) ai2_mp_button_pane

0xe1f3,	// (0x00045890) ai2_mp_volume_pane

0xcfc5,	// (0x00044662) bg_popup_sub_pane_cp5_ParamLimits

0xcfc5,	// (0x00044662) bg_popup_sub_pane_cp5

0xe1fb,	// (0x00045898) heading_ai2_gene_pane_ParamLimits

0xe1fb,	// (0x00045898) heading_ai2_gene_pane

0xe207,	// (0x000458a4) list_ai2_gene_pane_ParamLimits

0xe207,	// (0x000458a4) list_ai2_gene_pane

0xe24f,	// (0x000458ec) cell_ai2_link_pane_ParamLimits

0xe24f,	// (0x000458ec) cell_ai2_link_pane

0xe265,	// (0x00045902) cell_ai2_link_pane_g1

0xb291,	// (0x0004292e) grid_highlight_pane_cp7

0x3661,	// (0x0003acfe) ai2_mp_volume_pane_g1

0xe336,	// (0x000459d3) ai2_mp_volume_pane_g2

0xe2ab,	// (0x00045948) list_ai2_gene_pane_t1

0xe33e,	// (0x000459db) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0004708a) ai2_mp_volume_pane_g

0x3669,	// (0x0003ad06) volume_small_pane_cp3

0xe346,	// (0x000459e3) aid_size_cell_ai2_button

0xe34e,	// (0x000459eb) grid_ai2_button_pane

0xe357,	// (0x000459f4) cell_ai2_button_pane_ParamLimits

0xe357,	// (0x000459f4) cell_ai2_button_pane

0xb287,	// (0x00042924) cell_ai2_button_pane_g1

0xb291,	// (0x0004292e) grid_highlight_pane_cp8

0xe2f6,	// (0x00045993) ai2_gene_pane_t1_ParamLimits

0xe2f6,	// (0x00045993) ai2_gene_pane_t1

0x8c09,	// (0x000402a6) aid_height_parent_landscape

0xa92f,	// (0x00041fcc) aid_height_set_list

0xcd99,	// (0x00044436) aid_size_parent

0xdfda,	// (0x00045677) aid_size_cell_graphic_pane_ParamLimits

0xe217,	// (0x000458b4) popup_ai2_data_window_g1_ParamLimits

0xe217,	// (0x000458b4) popup_ai2_data_window_g1

0xe223,	// (0x000458c0) ai2_news_ticker_pane_g1

0xe22b,	// (0x000458c8) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x00047076) ai2_news_ticker_pane_g

0xe233,	// (0x000458d0) ai2_news_ticker_pane_t1

0xe241,	// (0x000458de) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0004707b) ai2_news_ticker_pane_t

0xe26e,	// (0x0004590b) heading_ai2_gene_pane_g1

0xe276,	// (0x00045913) heading_ai2_gene_pane_t1_ParamLimits

0xe276,	// (0x00045913) heading_ai2_gene_pane_t1

0xe28b,	// (0x00045928) list_highlight_pane_cp6

0xe293,	// (0x00045930) ai2_gene_pane_ParamLimits

0xe293,	// (0x00045930) ai2_gene_pane

0xe2b9,	// (0x00045956) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x00047080) list_ai2_gene_pane_t

0xe2c7,	// (0x00045964) list_highlight_pane_cp8_ParamLimits

0xe2c7,	// (0x00045964) list_highlight_pane_cp8

0xe2d8,	// (0x00045975) ai2_gene_pane_g1_ParamLimits

0xe2d8,	// (0x00045975) ai2_gene_pane_g1

0xe2ea,	// (0x00045987) ai2_gene_pane_g2_ParamLimits

0xe2ea,	// (0x00045987) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x00047085) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x00047085) ai2_gene_pane_g

0xb8ca,	// (0x00042f67) scroll_pane_cp12

0x8bc8,	// (0x00040265) control_pane_t3_ParamLimits

0x8bc8,	// (0x00040265) control_pane_t3

0xcb81,	// (0x0004421e) status_small_pane_g8_ParamLimits

0xcb81,	// (0x0004421e) status_small_pane_g8

0x8cfe,	// (0x0004039b) popup_find_window_ParamLimits

0x8f7f,	// (0x0004061c) popup_note_image_window_ParamLimits

0x0c21,	// (0x000382be) list_double2_graphic_pane_vc_g1_ParamLimits

0x0c21,	// (0x000382be) list_double2_graphic_pane_vc_g1

0x1998,	// (0x00039035) list_double2_graphic_pane_vc_g2_ParamLimits

0x1998,	// (0x00039035) list_double2_graphic_pane_vc_g2

0x19a4,	// (0x00039041) list_double2_graphic_pane_vc_g3_ParamLimits

0x19a4,	// (0x00039041) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00046e61) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00046e61) list_double2_graphic_pane_vc_g

0x0c2d,	// (0x000382ca) list_double2_graphic_pane_vc_t1_ParamLimits

0x0c2d,	// (0x000382ca) list_double2_graphic_pane_vc_t1

0x1998,	// (0x00039035) list_single_heading_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_single_heading_pane_vc_g1

0x19a4,	// (0x00039041) list_single_heading_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_single_heading_pane_vc_g

0x0c43,	// (0x000382e0) list_single_heading_pane_vc_t1_ParamLimits

0x0c43,	// (0x000382e0) list_single_heading_pane_vc_t1

0x0c59,	// (0x000382f6) list_single_heading_pane_vc_t2_ParamLimits

0x0c59,	// (0x000382f6) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x00046e82) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x00046e82) list_single_heading_pane_vc_t

0x733f,	// (0x0003e9dc) list_setting_number_pane_vc_g1_ParamLimits

0x733f,	// (0x0003e9dc) list_setting_number_pane_vc_g1

0x734b,	// (0x0003e9e8) list_setting_number_pane_vc_g2_ParamLimits

0x734b,	// (0x0003e9e8) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046e87) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046e87) list_setting_number_pane_vc_g

0x0c6d,	// (0x0003830a) list_setting_number_pane_vc_t1_ParamLimits

0x0c6d,	// (0x0003830a) list_setting_number_pane_vc_t1

0x0c81,	// (0x0003831e) list_setting_number_pane_vc_t2_ParamLimits

0x0c81,	// (0x0003831e) list_setting_number_pane_vc_t2

0x0c9b,	// (0x00038338) list_setting_number_pane_vc_t3_ParamLimits

0x0c9b,	// (0x00038338) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x00046e8c) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x00046e8c) list_setting_number_pane_vc_t

0x0cc3,	// (0x00038360) set_value_pane_vc_ParamLimits

0x0cc3,	// (0x00038360) set_value_pane_vc

0xdf57,	// (0x000455f4) list_double2_graphic_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double2_graphic_pane_vc

0x340d,	// (0x0003aaaa) list_double2_large_graphic_pane_vc_ParamLimits

0x340d,	// (0x0003aaaa) list_double2_large_graphic_pane_vc

0xdf57,	// (0x000455f4) list_double2_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double2_pane_vc

0xdf57,	// (0x000455f4) list_double_graphic_heading_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_graphic_heading_pane_vc

0xdf57,	// (0x000455f4) list_double_graphic_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_graphic_pane_vc

0xdf57,	// (0x000455f4) list_double_heading_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_heading_pane_vc

0x340d,	// (0x0003aaaa) list_double_large_graphic_pane_vc_ParamLimits

0x340d,	// (0x0003aaaa) list_double_large_graphic_pane_vc

0xdf57,	// (0x000455f4) list_double_number_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_number_pane_vc

0xdf57,	// (0x000455f4) list_double_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_pane_vc

0xdf57,	// (0x000455f4) list_double_time_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_double_time_pane_vc

0xdf57,	// (0x000455f4) list_setting_number_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_setting_number_pane_vc

0xdf57,	// (0x000455f4) list_setting_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_setting_pane_vc

0xdf57,	// (0x000455f4) list_single_graphic_heading_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_single_graphic_heading_pane_vc

0xdf57,	// (0x000455f4) list_single_heading_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_single_heading_pane_vc

0xdf57,	// (0x000455f4) list_single_number_heading_pane_vc_ParamLimits

0xdf57,	// (0x000455f4) list_single_number_heading_pane_vc

0x0c21,	// (0x000382be) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0c21,	// (0x000382be) list_double_graphic_heading_pane_vc_g1

0x1998,	// (0x00039035) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1998,	// (0x00039035) list_double_graphic_heading_pane_vc_g2

0x19a4,	// (0x00039041) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x19a4,	// (0x00039041) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x00046e61) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00046e61) list_double_graphic_heading_pane_vc_g

0x0d6c,	// (0x00038409) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0d6c,	// (0x00038409) list_double_graphic_heading_pane_vc_t1

0x0d88,	// (0x00038425) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0d88,	// (0x00038425) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f4,	// (0x00047091) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f4,	// (0x00047091) list_double_graphic_heading_pane_vc_t

0x733f,	// (0x0003e9dc) list_setting_pane_vc_g1_ParamLimits

0x733f,	// (0x0003e9dc) list_setting_pane_vc_g1

0x734b,	// (0x0003e9e8) list_setting_pane_vc_g2_ParamLimits

0x734b,	// (0x0003e9e8) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x00046e87) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x00046e87) list_setting_pane_vc_g

0x0da0,	// (0x0003843d) list_setting_pane_vc_t1_ParamLimits

0x0da0,	// (0x0003843d) list_setting_pane_vc_t1

0x0dba,	// (0x00038457) list_setting_pane_vc_t2_ParamLimits

0x0dba,	// (0x00038457) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x000470d4) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x000470d4) list_setting_pane_vc_t

0x0cc3,	// (0x00038360) set_value_pane_cp_vc_ParamLimits

0x0cc3,	// (0x00038360) set_value_pane_cp_vc

0x1998,	// (0x00039035) list_single_number_heading_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_single_number_heading_pane_vc_g1

0x19a4,	// (0x00039041) list_single_number_heading_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_single_number_heading_pane_vc_g

0x0c43,	// (0x000382e0) list_single_number_heading_pane_vc_t1_ParamLimits

0x0c43,	// (0x000382e0) list_single_number_heading_pane_vc_t1

0x0dd2,	// (0x0003846f) list_single_number_heading_pane_vc_t2_ParamLimits

0x0dd2,	// (0x0003846f) list_single_number_heading_pane_vc_t2

0x04d0,	// (0x00037b6d) list_single_number_heading_pane_vc_t3_ParamLimits

0x04d0,	// (0x00037b6d) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x000470d9) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x000470d9) list_single_number_heading_pane_vc_t

0x0c21,	// (0x000382be) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0c21,	// (0x000382be) list_single_graphic_heading_pane_vc_g1

0x1998,	// (0x00039035) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1998,	// (0x00039035) list_single_graphic_heading_pane_vc_g4

0x19a4,	// (0x00039041) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x19a4,	// (0x00039041) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00046e61) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00046e61) list_single_graphic_heading_pane_vc_g

0x0c43,	// (0x000382e0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0c43,	// (0x000382e0) list_single_graphic_heading_pane_vc_t1

0x0de6,	// (0x00038483) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0de6,	// (0x00038483) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x000470e0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x000470e0) list_single_graphic_heading_pane_vc_t

0x1998,	// (0x00039035) list_double2_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_double2_pane_vc_g1

0x19a4,	// (0x00039041) list_double2_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_double2_pane_vc_g

0x0d56,	// (0x000383f3) list_double2_pane_vc_t1_ParamLimits

0x0d56,	// (0x000383f3) list_double2_pane_vc_t1

0x36db,	// (0x0003ad78) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x36db,	// (0x0003ad78) list_double2_large_graphic_pane_vc_g1

0x36e7,	// (0x0003ad84) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x36e7,	// (0x0003ad84) list_double2_large_graphic_pane_vc_g2

0x36f3,	// (0x0003ad90) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x36f3,	// (0x0003ad90) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x00046c8d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x00046c8d) list_double2_large_graphic_pane_vc_g

0x0dfa,	// (0x00038497) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0dfa,	// (0x00038497) list_double2_large_graphic_pane_vc_t1

0x0e10,	// (0x000384ad) list_double_time_pane_vc_g1_ParamLimits

0x0e10,	// (0x000384ad) list_double_time_pane_vc_g1

0x0e1c,	// (0x000384b9) list_double_time_pane_vc_g2_ParamLimits

0x0e1c,	// (0x000384b9) list_double_time_pane_vc_g2

0x0001,

0xfa48,	// (0x000470e5) list_double_time_pane_vc_g_ParamLimits

0xfa48,	// (0x000470e5) list_double_time_pane_vc_g

0x0e28,	// (0x000384c5) list_double_time_pane_vc_t1_ParamLimits

0x0e28,	// (0x000384c5) list_double_time_pane_vc_t1

0x0e4c,	// (0x000384e9) list_double_time_pane_vc_t2_ParamLimits

0x0e4c,	// (0x000384e9) list_double_time_pane_vc_t2

0x0e96,	// (0x00038533) list_double_time_pane_vc_t3_ParamLimits

0x0e96,	// (0x00038533) list_double_time_pane_vc_t3

0x0ea8,	// (0x00038545) list_double_time_pane_vc_t4_ParamLimits

0x0ea8,	// (0x00038545) list_double_time_pane_vc_t4

0x0003,

0xfa4d,	// (0x000470ea) list_double_time_pane_vc_t_ParamLimits

0xfa4d,	// (0x000470ea) list_double_time_pane_vc_t

0x1998,	// (0x00039035) list_double_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_double_pane_vc_g1

0x19a4,	// (0x00039041) list_double_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_double_pane_vc_g

0x0ebc,	// (0x00038559) list_double_pane_vc_t1_ParamLimits

0x0ebc,	// (0x00038559) list_double_pane_vc_t1

0x0ed0,	// (0x0003856d) list_double_pane_vc_t2_ParamLimits

0x0ed0,	// (0x0003856d) list_double_pane_vc_t2

0x0001,

0xfa56,	// (0x000470f3) list_double_pane_vc_t_ParamLimits

0xfa56,	// (0x000470f3) list_double_pane_vc_t

0x1998,	// (0x00039035) list_double_number_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_double_number_pane_vc_g1

0x19a4,	// (0x00039041) list_double_number_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_double_number_pane_vc_g

0x0ee8,	// (0x00038585) list_double_number_pane_vc_t1_ParamLimits

0x0ee8,	// (0x00038585) list_double_number_pane_vc_t1

0x0efc,	// (0x00038599) list_double_number_pane_vc_t2_ParamLimits

0x0efc,	// (0x00038599) list_double_number_pane_vc_t2

0x0ed0,	// (0x0003856d) list_double_number_pane_vc_t3_ParamLimits

0x0ed0,	// (0x0003856d) list_double_number_pane_vc_t3

0x0002,

0xfa5b,	// (0x000470f8) list_double_number_pane_vc_t_ParamLimits

0xfa5b,	// (0x000470f8) list_double_number_pane_vc_t

0x36ff,	// (0x0003ad9c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x36ff,	// (0x0003ad9c) list_double_large_graphic_pane_vc_g1

0x3710,	// (0x0003adad) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3710,	// (0x0003adad) list_double_large_graphic_pane_vc_g2

0x36f3,	// (0x0003ad90) list_double_large_graphic_pane_vc_g3_ParamLimits

0x36f3,	// (0x0003ad90) list_double_large_graphic_pane_vc_g3

0x0f10,	// (0x000385ad) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0f10,	// (0x000385ad) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa62,	// (0x000470ff) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa62,	// (0x000470ff) list_double_large_graphic_pane_vc_g

0x0f1c,	// (0x000385b9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0f1c,	// (0x000385b9) list_double_large_graphic_pane_vc_t1

0x0f35,	// (0x000385d2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0f35,	// (0x000385d2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6b,	// (0x00047108) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6b,	// (0x00047108) list_double_large_graphic_pane_vc_t

0x1998,	// (0x00039035) list_double_heading_pane_vc_g1_ParamLimits

0x1998,	// (0x00039035) list_double_heading_pane_vc_g1

0x19a4,	// (0x00039041) list_double_heading_pane_vc_g2_ParamLimits

0x19a4,	// (0x00039041) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x00046c75) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x00046c75) list_double_heading_pane_vc_g

0x0f4e,	// (0x000385eb) list_double_heading_pane_vc_t1_ParamLimits

0x0f4e,	// (0x000385eb) list_double_heading_pane_vc_t1

0x0c43,	// (0x000382e0) list_double_heading_pane_vc_t2_ParamLimits

0x0c43,	// (0x000382e0) list_double_heading_pane_vc_t2

0x0001,

0xfa70,	// (0x0004710d) list_double_heading_pane_vc_t_ParamLimits

0xfa70,	// (0x0004710d) list_double_heading_pane_vc_t

0x0c21,	// (0x000382be) list_double_graphic_pane_vc_g1_ParamLimits

0x0c21,	// (0x000382be) list_double_graphic_pane_vc_g1

0x0f62,	// (0x000385ff) list_double_graphic_pane_vc_g2_ParamLimits

0x0f62,	// (0x000385ff) list_double_graphic_pane_vc_g2

0xe375,	// (0x00045a12) list_double_graphic_pane_vc_g3_ParamLimits

0xe375,	// (0x00045a12) list_double_graphic_pane_vc_g3

0x0002,

0xfa75,	// (0x00047112) list_double_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x00047112) list_double_graphic_pane_vc_g

0x0f71,	// (0x0003860e) list_double_graphic_pane_vc_t1_ParamLimits

0x0f71,	// (0x0003860e) list_double_graphic_pane_vc_t1

0x0f85,	// (0x00038622) list_double_graphic_pane_vc_t2_ParamLimits

0x0f85,	// (0x00038622) list_double_graphic_pane_vc_t2

0x0001,

0xfa7c,	// (0x00047119) list_double_graphic_pane_vc_t_ParamLimits

0xfa7c,	// (0x00047119) list_double_graphic_pane_vc_t

0x12b4,	// (0x00038951) aid_size_cell_fastswap

0x8414,	// (0x0003fab1) aid_size_cell_touch_ParamLimits

0x8414,	// (0x0003fab1) aid_size_cell_touch

0x1517,	// (0x00038bb4) popup_fast_swap_wide_window_ParamLimits

0x1517,	// (0x00038bb4) popup_fast_swap_wide_window

0x855f,	// (0x0003fbfc) touch_pane_ParamLimits

0x855f,	// (0x0003fbfc) touch_pane

0xb920,	// (0x00042fbd) button_value_adjust_pane_cp2

0x08dd,	// (0x00037f7a) button_value_adjust_pane_cp4

0x08ff,	// (0x00037f9c) form_field_data_pane_cp2

0x80fe,	// (0x0003f79b) form_field_data_wide_pane_cp2

0xc333,	// (0x000439d0) bg_scroll_pane_ParamLimits

0x1d04,	// (0x000393a1) scroll_handle_pane_ParamLimits

0x1d18,	// (0x000393b5) scroll_sc2_down_pane_ParamLimits

0x1d18,	// (0x000393b5) scroll_sc2_down_pane

0xc364,	// (0x00043a01) scroll_sc2_up_pane_ParamLimits

0xc364,	// (0x00043a01) scroll_sc2_up_pane

0xac9e,	// (0x0004233b) grid_wheel_folder_pane_g1_ParamLimits

0xac9e,	// (0x0004233b) grid_wheel_folder_pane_g1

0x1fb5,	// (0x00039652) clock_nsta_pane_cp2_ParamLimits

0x1fb5,	// (0x00039652) clock_nsta_pane_cp2

0xc155,	// (0x000437f2) listscroll_midp_pane_ParamLimits

0xa167,	// (0x00041804) midp_canvas_pane

0xcbd5,	// (0x00044272) nsta_clock_indic_pane

0xcbfd,	// (0x0004429a) listscroll_form_pane_vc

0xcc05,	// (0x000442a2) listscroll_set_pane_vc_ParamLimits

0xcc05,	// (0x000442a2) listscroll_set_pane_vc

0xa34b,	// (0x000419e8) clock_nsta_pane

0xa375,	// (0x00041a12) indicator_nsta_pane

0xcd33,	// (0x000443d0) bg_popup_sub_pane_cp2_ParamLimits

0xcd47,	// (0x000443e4) find_pane_cp2_ParamLimits

0xcd47,	// (0x000443e4) find_pane_cp2

0xcd5d,	// (0x000443fa) grid_toobar_pane_ParamLimits

0xce4f,	// (0x000444ec) list_form_gen_pane_vc_ParamLimits

0xce4f,	// (0x000444ec) list_form_gen_pane_vc

0xce65,	// (0x00044502) scroll_pane_cp8_vc_ParamLimits

0xce65,	// (0x00044502) scroll_pane_cp8_vc

0xceb5,	// (0x00044552) data_form_wide_pane_vc_ParamLimits

0xceb5,	// (0x00044552) data_form_wide_pane_vc

0xcec1,	// (0x0004455e) form_field_data_wide_pane_vc_g1

0xcec9,	// (0x00044566) form_field_data_wide_pane_vc_t1_ParamLimits

0xcec9,	// (0x00044566) form_field_data_wide_pane_vc_t1

0xbff0,	// (0x0004368d) input_focus_pane_cp6_vc_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_cp6_vc

0xa6f5,	// (0x00041d92) list_midp_pane_ParamLimits

0xdb30,	// (0x000451cd) scroll_pane_cp16_ParamLimits

0xdb30,	// (0x000451cd) scroll_pane_cp16

0xd15f,	// (0x000447fc) button_value_adjust_pane_ParamLimits

0xd15f,	// (0x000447fc) button_value_adjust_pane

0xa940,	// (0x00041fdd) button_value_adjust_pane_cp6_ParamLimits

0xa940,	// (0x00041fdd) button_value_adjust_pane_cp6

0xaa56,	// (0x000420f3) settings_code_pane_cp_ParamLimits

0xaa56,	// (0x000420f3) settings_code_pane_cp

0xb287,	// (0x00042924) cell_touch_pane_g1

0xb287,	// (0x00042924) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00046da6) cell_touch_pane_g

0xab7d,	// (0x0004221a) cell_touch_pane_cp_ParamLimits

0xab7d,	// (0x0004221a) cell_touch_pane_cp

0xab99,	// (0x00042236) cell_touch_pane_ParamLimits

0xab99,	// (0x00042236) cell_touch_pane

0xb287,	// (0x00042924) scroll_sc2_down_pane_g1

0xb287,	// (0x00042924) scroll_sc2_up_pane_g1

0xb291,	// (0x0004292e) bg_set_opt_pane_cp4_vc

0xe369,	// (0x00045a06) list_set_graphic_pane_vc_g1_ParamLimits

0xe369,	// (0x00045a06) list_set_graphic_pane_vc_g1

0xe375,	// (0x00045a12) list_set_graphic_pane_vc_g2_ParamLimits

0xe375,	// (0x00045a12) list_set_graphic_pane_vc_g2

0x0001,

0xf9f9,	// (0x00047096) list_set_graphic_pane_vc_g_ParamLimits

0xf9f9,	// (0x00047096) list_set_graphic_pane_vc_g

0xe381,	// (0x00045a1e) text_primary_small_cp13_vc_ParamLimits

0xe381,	// (0x00045a1e) text_primary_small_cp13_vc

0xdb1d,	// (0x000451ba) list_set_graphic_pane_vc_ParamLimits

0xdb1d,	// (0x000451ba) list_set_graphic_pane_vc

0xb291,	// (0x0004292e) input_focus_pane_cp2_vc

0xb287,	// (0x00042924) setting_code_pane_vc_g1

0xb304,	// (0x000429a1) setting_code_pane_vc_t1

0xe399,	// (0x00045a36) set_text_pane_vc_t1_ParamLimits

0xe399,	// (0x00045a36) set_text_pane_vc_t1

0xb291,	// (0x0004292e) input_focus_pane_cp1_vc

0xe3b6,	// (0x00045a53) list_set_text_pane_vc

0xb287,	// (0x00042924) setting_text_pane_vc_g1

0xb291,	// (0x0004292e) bg_set_opt_pane_cp2_vc

0xb2fb,	// (0x00042998) setting_slider_graphic_pane_vc_g1

0xe3c0,	// (0x00045a5d) setting_slider_graphic_pane_vc_t1

0xe3d0,	// (0x00045a6d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fe,	// (0x0004709b) setting_slider_graphic_pane_vc_t

0xe3e0,	// (0x00045a7d) slider_set_pane_cp_vc

0xe3e8,	// (0x00045a85) slider_set_pane_vc_g1

0xe3f1,	// (0x00045a8e) slider_set_pane_vc_g2

0x0006,

0xfa03,	// (0x000470a0) slider_set_pane_vc_g

0xc04b,	// (0x000436e8) set_opt_bg_pane_g1_copy1

0xc053,	// (0x000436f0) set_opt_bg_pane_g2_copy1

0xe41d,	// (0x00045aba) set_opt_bg_pane_g3_copy1

0xc063,	// (0x00043700) set_opt_bg_pane_g4_copy1

0xc06b,	// (0x00043708) set_opt_bg_pane_g5_copy1

0xc073,	// (0x00043710) set_opt_bg_pane_g6_copy1

0xe425,	// (0x00045ac2) set_opt_bg_pane_g7_copy1

0xe42f,	// (0x00045acc) set_opt_bg_pane_g8_copy1

0xe437,	// (0x00045ad4) set_opt_bg_pane_g9_copy1

0xb291,	// (0x0004292e) bg_set_opt_pane_cp_vc

0xe43f,	// (0x00045adc) setting_slider_pane_vc_t1

0xe44e,	// (0x00045aeb) setting_slider_pane_vc_t2

0xe45e,	// (0x00045afb) setting_slider_pane_vc_t3

0x0002,

0xfa12,	// (0x000470af) setting_slider_pane_vc_t

0xe46e,	// (0x00045b0b) slider_set_pane_vc

0x2f16,	// (0x0003a5b3) volume_set_pane_vc_g1

0x3693,	// (0x0003ad30) volume_set_pane_vc_g2

0x369c,	// (0x0003ad39) volume_set_pane_vc_g3

0x36a5,	// (0x0003ad42) volume_set_pane_vc_g4

0x36ae,	// (0x0003ad4b) volume_set_pane_vc_g5

0x36b7,	// (0x0003ad54) volume_set_pane_vc_g6

0x2f43,	// (0x0003a5e0) volume_set_pane_vc_g7

0x36c0,	// (0x0003ad5d) volume_set_pane_vc_g8

0x36c9,	// (0x0003ad66) volume_set_pane_vc_g9

0x36d2,	// (0x0003ad6f) volume_set_pane_vc_g10

0x0009,

0xfa19,	// (0x000470b6) volume_set_pane_vc_g

0xe476,	// (0x00045b13) volume_set_pane_vc

0xe47e,	// (0x00045b1b) button_value_adjust_pane_cp1_vc

0xe488,	// (0x00045b25) list_highlight_pane_cp2_vc

0xe491,	// (0x00045b2e) list_set_pane_vc_ParamLimits

0xe491,	// (0x00045b2e) list_set_pane_vc

0xe4ef,	// (0x00045b8c) main_pane_set_vc_t1_ParamLimits

0xe4ef,	// (0x00045b8c) main_pane_set_vc_t1

0xe504,	// (0x00045ba1) main_pane_set_vc_t2_ParamLimits

0xe504,	// (0x00045ba1) main_pane_set_vc_t2

0xe516,	// (0x00045bb3) main_pane_set_vc_t3_ParamLimits

0xe516,	// (0x00045bb3) main_pane_set_vc_t3

0xe528,	// (0x00045bc5) main_pane_set_vc_t4_ParamLimits

0xe528,	// (0x00045bc5) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x000470cb) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x000470cb) main_pane_set_vc_t

0xe53a,	// (0x00045bd7) setting_code_pane_vc_ParamLimits

0xe53a,	// (0x00045bd7) setting_code_pane_vc

0xe549,	// (0x00045be6) setting_slider_graphic_pane_vc

0xe549,	// (0x00045be6) setting_slider_pane_vc

0xe549,	// (0x00045be6) setting_text_pane_vc

0xe549,	// (0x00045be6) setting_volume_pane_vc

0xe551,	// (0x00045bee) scroll_pane_cp121_vc

0xb90e,	// (0x00042fab) set_content_pane_vc

0xe559,	// (0x00045bf6) button_value_adjust_pane_g1

0xe562,	// (0x00045bff) button_value_adjust_pane_g2

0x0001,

0xfa81,	// (0x0004711e) button_value_adjust_pane_g

0xe56b,	// (0x00045c08) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe56b,	// (0x00045c08) form_field_slider_wide_pane_vc_t1

0xe57f,	// (0x00045c1c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe57f,	// (0x00045c1c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa86,	// (0x00047123) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa86,	// (0x00047123) form_field_slider_wide_pane_vc_t

0xb2df,	// (0x0004297c) input_focus_pane_cp10_vc_ParamLimits

0xb2df,	// (0x0004297c) input_focus_pane_cp10_vc

0xe5ab,	// (0x00045c48) slider_cont_pane_cp1_vc_ParamLimits

0xe5ab,	// (0x00045c48) slider_cont_pane_cp1_vc

0xe5bb,	// (0x00045c58) slider_form_pane_g1_cp2

0xe3f1,	// (0x00045a8e) slider_form_pane_g2_cp2

0xe5e8,	// (0x00045c85) form_field_slider_pane_vc_t3

0xe5f6,	// (0x00045c93) form_field_slider_pane_vc_t4

0xe604,	// (0x00045ca1) slider_form_pane_vc_ParamLimits

0xe604,	// (0x00045ca1) slider_form_pane_vc

0xe611,	// (0x00045cae) form_field_slider_pane_vc_t1_ParamLimits

0xe611,	// (0x00045cae) form_field_slider_pane_vc_t1

0xe57f,	// (0x00045c1c) form_field_slider_pane_vc_t2_ParamLimits

0xe57f,	// (0x00045c1c) form_field_slider_pane_vc_t2

0x0001,

0xfa98,	// (0x00047135) form_field_slider_pane_vc_t_ParamLimits

0xfa98,	// (0x00047135) form_field_slider_pane_vc_t

0xb2df,	// (0x0004297c) input_focus_pane_cp9_vc_ParamLimits

0xb2df,	// (0x0004297c) input_focus_pane_cp9_vc

0xe62d,	// (0x00045cca) slider_cont_pane_vc_ParamLimits

0xe62d,	// (0x00045cca) slider_cont_pane_vc

0xe63f,	// (0x00045cdc) list_form_graphic_pane_cp_vc_ParamLimits

0xe63f,	// (0x00045cdc) list_form_graphic_pane_cp_vc

0xcec1,	// (0x0004455e) form_field_popup_wide_pane_vc_g1

0xe654,	// (0x00045cf1) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe654,	// (0x00045cf1) form_field_popup_wide_pane_vc_t1

0xbff0,	// (0x0004368d) input_focus_pane_cp8_vc_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_cp8_vc

0xe699,	// (0x00045d36) list_form_wide_pane_vc_ParamLimits

0xe699,	// (0x00045d36) list_form_wide_pane_vc

0xe6a5,	// (0x00045d42) list_form_graphic_pane_vc_g1

0xe6ad,	// (0x00045d4a) list_form_graphic_pane_vc_t1_ParamLimits

0xe6ad,	// (0x00045d4a) list_form_graphic_pane_vc_t1

0xb2ed,	// (0x0004298a) list_highlight_pane_cp5_vc_ParamLimits

0xb2ed,	// (0x0004298a) list_highlight_pane_cp5_vc

0xe6c9,	// (0x00045d66) list_form_graphic_pane_vc_ParamLimits

0xe6c9,	// (0x00045d66) list_form_graphic_pane_vc

0xcec1,	// (0x0004455e) form_field_popup_pane_vc_g1

0xe6df,	// (0x00045d7c) form_field_popup_pane_vc_t1_ParamLimits

0xe6df,	// (0x00045d7c) form_field_popup_pane_vc_t1

0xbff0,	// (0x0004368d) input_focus_pane_cp7_vc_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_cp7_vc

0xe6f6,	// (0x00045d93) list_form_pane_vc_ParamLimits

0xe6f6,	// (0x00045d93) list_form_pane_vc

0xe702,	// (0x00045d9f) data_form_pane_vc_t1_ParamLimits

0xe702,	// (0x00045d9f) data_form_pane_vc_t1

0xc04b,	// (0x000436e8) input_focus_pane_vc_g1

0xc053,	// (0x000436f0) input_focus_pane_vc_g2

0xc05b,	// (0x000436f8) input_focus_pane_vc_g3

0xc063,	// (0x00043700) input_focus_pane_vc_g4

0xc06b,	// (0x00043708) input_focus_pane_vc_g5

0xc073,	// (0x00043710) input_focus_pane_vc_g6

0xc07b,	// (0x00043718) input_focus_pane_vc_g7

0xc083,	// (0x00043720) input_focus_pane_vc_g8

0xc08b,	// (0x00043728) input_focus_pane_vc_g9

0xb287,	// (0x00042924) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00046d2f) input_focus_pane_vc_g

0xceb5,	// (0x00044552) data_form_pane_vc_ParamLimits

0xceb5,	// (0x00044552) data_form_pane_vc

0xcec1,	// (0x0004455e) form_field_data_pane_vc_g1

0xe71d,	// (0x00045dba) form_field_data_pane_vc_t1_ParamLimits

0xe71d,	// (0x00045dba) form_field_data_pane_vc_t1

0xbff0,	// (0x0004368d) input_focus_pane_vc_ParamLimits

0xbff0,	// (0x0004368d) input_focus_pane_vc

0xe737,	// (0x00045dd4) button_value_adjust_pane_cp3_vc

0xe73f,	// (0x00045ddc) button_value_adjust_pane_cp5_vc

0xe747,	// (0x00045de4) form_field_data_pane_vc_ParamLimits

0xe747,	// (0x00045de4) form_field_data_pane_vc

0xe75e,	// (0x00045dfb) form_field_data_pane_vc_cp2

0xe766,	// (0x00045e03) form_field_data_wide_pane_vc_ParamLimits

0xe766,	// (0x00045e03) form_field_data_wide_pane_vc

0xe77c,	// (0x00045e19) form_field_data_wide_pane_vc_cp2

0xe784,	// (0x00045e21) form_field_popup_pane_vc_ParamLimits

0xe784,	// (0x00045e21) form_field_popup_pane_vc

0xe79b,	// (0x00045e38) form_field_popup_wide_pane_vc_ParamLimits

0xe79b,	// (0x00045e38) form_field_popup_wide_pane_vc

0xe7b1,	// (0x00045e4e) form_field_slider_pane_vc_ParamLimits

0xe7b1,	// (0x00045e4e) form_field_slider_pane_vc

0xe7c4,	// (0x00045e61) form_field_slider_wide_pane_vc_ParamLimits

0xe7c4,	// (0x00045e61) form_field_slider_wide_pane_vc

0xabb7,	// (0x00042254) grid_touch_1_pane_ParamLimits

0xabb7,	// (0x00042254) grid_touch_1_pane

0xabcb,	// (0x00042268) grid_touch_2_pane_ParamLimits

0xabcb,	// (0x00042268) grid_touch_2_pane

0xe7d7,	// (0x00045e74) touch_pane_g1_ParamLimits

0xe7d7,	// (0x00045e74) touch_pane_g1

0xe7e5,	// (0x00045e82) cell_app_pane_cp_wide_ParamLimits

0xe7e5,	// (0x00045e82) cell_app_pane_cp_wide

0xe7f6,	// (0x00045e93) grid_popup_fast_wide_pane_ParamLimits

0xe7f6,	// (0x00045e93) grid_popup_fast_wide_pane

0xe80a,	// (0x00045ea7) scroll_pane_cp19_ParamLimits

0xe80a,	// (0x00045ea7) scroll_pane_cp19

0xb291,	// (0x0004292e) bg_popup_window_pane_cp20

0xe81e,	// (0x00045ebb) listscroll_popup_fast_wide_pane

0xdb03,	// (0x000451a0) grid_indicator_nsta_pane

0xe826,	// (0x00045ec3) clock_nsta_pane_g1

0xe82f,	// (0x00045ecc) clock_nsta_pane_t1

0xabf5,	// (0x00042292) cell_indicator_nsta_pane_ParamLimits

0xabf5,	// (0x00042292) cell_indicator_nsta_pane

0xe7d7,	// (0x00045e74) cell_indicator_nsta_pane_g1

0xac12,	// (0x000422af) cell_indicator_nsta_pane_g2

0x0001,

0xfaa9,	// (0x00047146) cell_indicator_nsta_pane_g

0xe84b,	// (0x00045ee8) clock_nsta_pane_cp

0xe853,	// (0x00045ef0) indicator_nsta_pane_cp

0xe85b,	// (0x00045ef8) nsta_clock_indic_pane_g1

0xb329,	// (0x000429c6) grid_indicator_pane

0xc459,	// (0x00043af6) scroll_pane_cp29

0x1f04,	// (0x000395a1) indicator_nsta_pane_cp2_ParamLimits

0x1f04,	// (0x000395a1) indicator_nsta_pane_cp2

0xb2ed,	// (0x0004298a) main_apps_wheel_pane

0xd002,	// (0x0004469f) form_midp_field_text_pane_ParamLimits

0xd131,	// (0x000447ce) scroll_bar_cp050_ParamLimits

0xe8fe,	// (0x00045f9b) cell_indicator_pane_ParamLimits

0xe8fe,	// (0x00045f9b) cell_indicator_pane

0xe919,	// (0x00045fb6) cell_indicator_pane_g1

0xac28,	// (0x000422c5) grid_wheel_folder_pane_ParamLimits

0xac28,	// (0x000422c5) grid_wheel_folder_pane

0xac36,	// (0x000422d3) list_wheel_apps_pane_ParamLimits

0xac36,	// (0x000422d3) list_wheel_apps_pane

0xac44,	// (0x000422e1) main_apps_wheel_pane_g1_ParamLimits

0xac44,	// (0x000422e1) main_apps_wheel_pane_g1

0xac50,	// (0x000422ed) main_apps_wheel_pane_g2_ParamLimits

0xac50,	// (0x000422ed) main_apps_wheel_pane_g2

0x0001,

0xfac5,	// (0x00047162) main_apps_wheel_pane_g_ParamLimits

0xfac5,	// (0x00047162) main_apps_wheel_pane_g

0xac5e,	// (0x000422fb) main_apps_wheel_pane_t1_ParamLimits

0xac5e,	// (0x000422fb) main_apps_wheel_pane_t1

0xac72,	// (0x0004230f) list_wheel_apps_pane_g1

0xac7a,	// (0x00042317) list_wheel_apps_pane_g2

0xac82,	// (0x0004231f) list_wheel_apps_pane_g3

0xac8a,	// (0x00042327) list_wheel_apps_pane_g4

0xac94,	// (0x00042331) list_wheel_apps_pane_g5

0x0004,

0xfaca,	// (0x00047167) list_wheel_apps_pane_g

0xc865,	// (0x00043f02) navi_icon_text_pane

0xa23f,	// (0x000418dc) aid_fill_nsta

0xe923,	// (0x00045fc0) navi_icon_text_pane_g1

0xe92f,	// (0x00045fcc) navi_icon_text_pane_t1

0xc75f,	// (0x00043dfc) list_set_graphic_pane_t1_ParamLimits

0xc75f,	// (0x00043dfc) list_set_graphic_pane_t1

0xd849,	// (0x00044ee6) popup_midp_note_alarm_window_t6_ParamLimits

0xd849,	// (0x00044ee6) popup_midp_note_alarm_window_t6

0xd85b,	// (0x00044ef8) popup_midp_note_alarm_window_t7_ParamLimits

0xd85b,	// (0x00044ef8) popup_midp_note_alarm_window_t7

0xd86d,	// (0x00044f0a) popup_midp_note_alarm_window_t8_ParamLimits

0xd86d,	// (0x00044f0a) popup_midp_note_alarm_window_t8

0xd87f,	// (0x00044f1c) popup_midp_note_alarm_window_t9_ParamLimits

0xd87f,	// (0x00044f1c) popup_midp_note_alarm_window_t9

0xd891,	// (0x00044f2e) popup_midp_note_alarm_window_t10_ParamLimits

0xd891,	// (0x00044f2e) popup_midp_note_alarm_window_t10

0xd8a3,	// (0x00044f40) popup_midp_note_alarm_window_t11_ParamLimits

0xd8a3,	// (0x00044f40) popup_midp_note_alarm_window_t11

0xd8b5,	// (0x00044f52) scroll_pane_cp17_ParamLimits

0xd8b5,	// (0x00044f52) scroll_pane_cp17

0x2f16,	// (0x0003a5b3) volume_small_pane_cp_g1

0x384e,	// (0x0003aeeb) volume_small_pane_cp_g2

0x3857,	// (0x0003aef4) volume_small_pane_cp_g3

0x2f28,	// (0x0003a5c5) volume_small_pane_cp_g4

0x3860,	// (0x0003aefd) volume_small_pane_cp_g5

0x36ae,	// (0x0003ad4b) volume_small_pane_cp_g6

0x2f3a,	// (0x0003a5d7) volume_small_pane_cp_g7

0x3869,	// (0x0003af06) volume_small_pane_cp_g8

0x3872,	// (0x0003af0f) volume_small_pane_cp_g9

0x2f4c,	// (0x0003a5e9) volume_small_pane_cp_g10

0xc9eb,	// (0x00044088) midp_ticker_pane_g1_ParamLimits

0xc9f7,	// (0x00044094) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00046dfb) midp_ticker_pane_g_ParamLimits

0xca03,	// (0x000440a0) midp_ticker_pane_t1_ParamLimits

0xa263,	// (0x00041900) aid_fill_nsta_2

0xd11d,	// (0x000447ba) list_form2_midp_pane

0xdf26,	// (0x000455c3) midp_editing_number_pane_ParamLimits

0xdf35,	// (0x000455d2) midp_ticker_pane_ParamLimits

0xe941,	// (0x00045fde) form2_midp_field_pane

0xe949,	// (0x00045fe6) scroll_pane_cp51

0xe969,	// (0x00046006) form2_midp_button_pane_ParamLimits

0xe969,	// (0x00046006) form2_midp_button_pane

0xe97b,	// (0x00046018) form2_midp_content_pane_ParamLimits

0xe97b,	// (0x00046018) form2_midp_content_pane

0xe995,	// (0x00046032) form2_midp_field_choice_group_pane

0xe99d,	// (0x0004603a) form2_midp_field_pane_g1

0xe9a5,	// (0x00046042) form2_midp_field_pane_g2

0xe9ad,	// (0x0004604a) form2_midp_field_pane_g3

0xe9b5,	// (0x00046052) form2_midp_field_pane_g4

0x0003,

0xfaef,	// (0x0004718c) form2_midp_field_pane_g

0xe9bd,	// (0x0004605a) form2_midp_gauge_slider_pane

0xe9c5,	// (0x00046062) form2_midp_gauge_wait_pane

0xe9cd,	// (0x0004606a) form2_midp_image_pane_ParamLimits

0xe9cd,	// (0x0004606a) form2_midp_image_pane

0xe9e8,	// (0x00046085) form2_midp_label_pane_ParamLimits

0xe9e8,	// (0x00046085) form2_midp_label_pane

0xacc7,	// (0x00042364) form2_midp_label_pane_cp_ParamLimits

0xacc7,	// (0x00042364) form2_midp_label_pane_cp

0xea01,	// (0x0004609e) form2_midp_string_pane_ParamLimits

0xea01,	// (0x0004609e) form2_midp_string_pane

0x829b,	// (0x0003f938) form2_midp_text_pane_ParamLimits

0x829b,	// (0x0003f938) form2_midp_text_pane

0xea13,	// (0x000460b0) form2_midp_time_pane

0xea23,	// (0x000460c0) input_focus_pane_cp51_ParamLimits

0xea23,	// (0x000460c0) input_focus_pane_cp51

0xea3b,	// (0x000460d8) form2_midp_label_pane_t1_ParamLimits

0xea3b,	// (0x000460d8) form2_midp_label_pane_t1

0x82b4,	// (0x0003f951) form2_mdip_text_pane_t1_ParamLimits

0x82b4,	// (0x0003f951) form2_mdip_text_pane_t1

0x0fd4,	// (0x00038671) form2_midp_time_pane_t1

0xea83,	// (0x00046120) form2_midp_gauge_slider_pane_t1

0xace8,	// (0x00042385) form2_midp_gauge_slider_pane_t2

0xacfc,	// (0x00042399) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf8,	// (0x00047195) form2_midp_gauge_slider_pane_t

0xea95,	// (0x00046132) form2_midp_slider_pane

0xeaa1,	// (0x0004613e) form2_midp_gauge_wait_pane_t1

0xeaaf,	// (0x0004614c) form2_midp_wait_pane_ParamLimits

0xeaaf,	// (0x0004614c) form2_midp_wait_pane

0xad10,	// (0x000423ad) list_single_2graphic_pane_cp4_ParamLimits

0xad10,	// (0x000423ad) list_single_2graphic_pane_cp4

0xa67b,	// (0x00041d18) list_single_midp_graphic_pane_cp_ParamLimits

0xa67b,	// (0x00041d18) list_single_midp_graphic_pane_cp

0xb291,	// (0x0004292e) list_highlight_pane_cp20

0xeadb,	// (0x00046178) list_single_2graphic_pane_g1_cp4

0xe26e,	// (0x0004590b) list_single_2graphic_pane_g2_cp4

0xeae3,	// (0x00046180) list_single_2graphic_pane_t1_cp4

0xb2ed,	// (0x0004298a) list_highlight_pane_cp21

0xeaf2,	// (0x0004618f) list_single_midp_graphic_pane_g4_cp

0xeb01,	// (0x0004619e) list_single_midp_graphic_pane_t1_cp

0xad26,	// (0x000423c3) form2_mdip_string_pane_t1_ParamLimits

0xad26,	// (0x000423c3) form2_mdip_string_pane_t1

0xb291,	// (0x0004292e) bg_wml_button_pane_cp2

0xb287,	// (0x00042924) form2_midp_image_pane_g1

0x1a06,	// (0x000390a3) list_double_large_graphic_pane_g5_ParamLimits

0x1a06,	// (0x000390a3) list_double_large_graphic_pane_g5

0xc155,	// (0x000437f2) midp_form_pane_ParamLimits

0xb2ed,	// (0x0004298a) main_apps_wheel_pane_ParamLimits

0x8ffd,	// (0x0004069a) popup_preview_window_ParamLimits

0x8ffd,	// (0x0004069a) popup_preview_window

0x28fc,	// (0x00039f99) popup_touch_info_window_ParamLimits

0x28fc,	// (0x00039f99) popup_touch_info_window

0x291a,	// (0x00039fb7) popup_touch_menu_window_ParamLimits

0x291a,	// (0x00039fb7) popup_touch_menu_window

0xb27d,	// (0x0004291a) bg_popup_sub_pane_cp6

0xeb16,	// (0x000461b3) list_touch_menu_pane

0xeb1e,	// (0x000461bb) list_single_touch_menu_pane_ParamLimits

0xeb1e,	// (0x000461bb) list_single_touch_menu_pane

0xeb32,	// (0x000461cf) list_single_touch_menu_pane_t1

0xb2ed,	// (0x0004298a) bg_popup_sub_pane_cp7_ParamLimits

0xb2ed,	// (0x0004298a) bg_popup_sub_pane_cp7

0xeb40,	// (0x000461dd) heading_sub_pane

0xeb48,	// (0x000461e5) list_touch_info_pane_ParamLimits

0xeb48,	// (0x000461e5) list_touch_info_pane

0xeb57,	// (0x000461f4) list_single_touch_info_pane_ParamLimits

0xeb57,	// (0x000461f4) list_single_touch_info_pane

0xeb69,	// (0x00046206) list_single_touch_info_pane_t1

0xeb77,	// (0x00046214) list_single_touch_info_pane_t2

0x0001,

0xfb06,	// (0x000471a3) list_single_touch_info_pane_t

0xc9c1,	// (0x0004405e) bg_popup_heading_pane_cp

0xeb85,	// (0x00046222) heading_sub_pane_t1

0xce7b,	// (0x00044518) bg_popup_preview_window_pane_cp_ParamLimits

0xce7b,	// (0x00044518) bg_popup_preview_window_pane_cp

0xeb40,	// (0x000461dd) heading_preview_pane

0xeb48,	// (0x000461e5) list_preview_pane_ParamLimits

0xeb48,	// (0x000461e5) list_preview_pane

0xeb93,	// (0x00046230) popup_preview_window_g1

0xeb57,	// (0x000461f4) list_single_preview_pane_ParamLimits

0xeb57,	// (0x000461f4) list_single_preview_pane

0xeb9b,	// (0x00046238) list_single_preview_pane_g1

0xeba3,	// (0x00046240) list_single_preview_pane_t1

0xeb69,	// (0x00046206) list_single_preview_pane_t2

0x0001,

0xfb0b,	// (0x000471a8) list_single_preview_pane_t

0xebb1,	// (0x0004624e) bg_popup_heading_pane_cp2_ParamLimits

0xebb1,	// (0x0004624e) bg_popup_heading_pane_cp2

0xebc7,	// (0x00046264) heading_preview_pane_g1

0xebcf,	// (0x0004626c) heading_preview_pane_t1_ParamLimits

0xebcf,	// (0x0004626c) heading_preview_pane_t1

0xb340,	// (0x000429dd) soft_indicator_pane_t1_ParamLimits

0xb8a7,	// (0x00042f44) scroll_pane_ParamLimits

0xc352,	// (0x000439ef) scroll_sc2_left_pane

0xc35b,	// (0x000439f8) scroll_sc2_right_pane

0xc37a,	// (0x00043a17) scroll_bg_pane_g1_ParamLimits

0xc38f,	// (0x00043a2c) scroll_bg_pane_g2_ParamLimits

0xc3a7,	// (0x00043a44) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00046d86) scroll_bg_pane_g_ParamLimits

0xc37a,	// (0x00043a17) scroll_handle_pane_g1_ParamLimits

0xc3c9,	// (0x00043a66) scroll_handle_pane_g2_ParamLimits

0xc3a7,	// (0x00043a44) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00046d8d) scroll_handle_pane_g_ParamLimits

0x23cc,	// (0x00039a69) popup_choice_list_window_ParamLimits

0x23cc,	// (0x00039a69) popup_choice_list_window

0xcd3f,	// (0x000443dc) choice_list_pane

0xcdd3,	// (0x00044470) cell_toolbar_pane_t1

0xcdfb,	// (0x00044498) toolbar_button_pane_ParamLimits

0xdc9d,	// (0x0004533a) ai_gene_pane_1_t2_ParamLimits

0xdc9d,	// (0x0004533a) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x00046fb0) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x00046fb0) ai_gene_pane_1_t

0xebec,	// (0x00046289) scroll_sc2_left_pane_g1

0xebec,	// (0x00046289) scroll_sc2_right_pane_g1

0xc155,	// (0x000437f2) bg_popup_sub_pane_cp10

0xebf6,	// (0x00046293) list_choice_list_pane

0xec0f,	// (0x000462ac) list_single_choice_list_pane_ParamLimits

0xec0f,	// (0x000462ac) list_single_choice_list_pane

0xec22,	// (0x000462bf) list_single_choice_list_pane_g1

0xc140,	// (0x000437dd) list_single_choice_list_pane_t1_ParamLimits

0xc140,	// (0x000437dd) list_single_choice_list_pane_t1

0xec2a,	// (0x000462c7) choice_list_pane_g1

0xec32,	// (0x000462cf) choice_list_pane_t1

0xb27d,	// (0x0004291a) input_focus_pane_cp11

0xc2c7,	// (0x00043964) title_pane_stacon_g2_ParamLimits

0xc2c7,	// (0x00043964) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00046d6c) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00046d6c) title_pane_stacon_g

0xc9c1,	// (0x0004405e) cursor_press_pane

0x8cb6,	// (0x00040353) popup_fep_hwr_window_ParamLimits

0x8cb6,	// (0x00040353) popup_fep_hwr_window

0x24ec,	// (0x00039b89) popup_fep_vkb_window_ParamLimits

0x24ec,	// (0x00039b89) popup_fep_vkb_window

0xec40,	// (0x000462dd) cursor_press_pane_g1

0x0002,

0xfb34,	// (0x000471d1) fep_vkb_side_pane_g_ParamLimits

0x3a66,	// (0x0003b103) fep_hwr_candidate_pane_ParamLimits

0x3a66,	// (0x0003b103) fep_hwr_candidate_pane

0x3a90,	// (0x0003b12d) fep_hwr_side_pane_ParamLimits

0x3a90,	// (0x0003b12d) fep_hwr_side_pane

0x3ab0,	// (0x0003b14d) fep_hwr_top_pane_ParamLimits

0x3ab0,	// (0x0003b14d) fep_hwr_top_pane

0x3ac8,	// (0x0003b165) fep_hwr_write_pane_ParamLimits

0x3ac8,	// (0x0003b165) fep_hwr_write_pane

0xfb34,	// (0x000471d1) fep_vkb_side_pane_g

0xec48,	// (0x000462e5) fep_hwr_top_pane_g1

0xec5a,	// (0x000462f7) fep_hwr_top_pane_g2

0x3af4,	// (0x0003b191) fep_hwr_top_pane_g3

0x0002,

0xfb10,	// (0x000471ad) fep_hwr_top_pane_g

0x3b09,	// (0x0003b1a6) fep_hwr_top_text_pane

0xc51f,	// (0x00043bbc) fep_hwr_top_text_pane_g1

0xec90,	// (0x0004632d) fep_hwr_top_text_pane_t1

0x3bff,	// (0x0003b29c) fep_hwr_candidate_pane_g1

0xedbb,	// (0x00046458) fep_vkb_keypad_pane_g3_ParamLimits

0xedbb,	// (0x00046458) fep_vkb_keypad_pane_g3

0xede3,	// (0x00046480) fep_vkb_keypad_pane_g4_ParamLimits

0xede3,	// (0x00046480) fep_vkb_keypad_pane_g4

0xee52,	// (0x000464ef) fep_vkb_bottom_pane_g2_ParamLimits

0xee52,	// (0x000464ef) fep_vkb_bottom_pane_g2

0x0001,

0xfb3b,	// (0x000471d8) fep_vkb_bottom_pane_g_ParamLimits

0xfb3b,	// (0x000471d8) fep_vkb_bottom_pane_g

0xebec,	// (0x00046289) cell_vkb_side_pane_g2

0x0001,

0xfb45,	// (0x000471e2) cell_vkb_side_pane_g

0xee96,	// (0x00046533) cell_vkb_side_pane_t1

0xeea4,	// (0x00046541) cell_vkb_side_pane_t1_copy1

0xebec,	// (0x00046289) bg_fep_vkb_candidate_pane_g2

0xef7a,	// (0x00046617) cell_vkb_candidate_pane_ParamLimits

0xec9e,	// (0x0004633b) aid_size_cell_vkb_ParamLimits

0xec9e,	// (0x0004633b) aid_size_cell_vkb

0xef7a,	// (0x00046617) cell_vkb_candidate_pane

0x3dce,	// (0x0003b46b) bg_popup_fep_shadow_pane_g1

0xadb6,	// (0x00042453) fep_vkb_bottom_pane_ParamLimits

0xadb6,	// (0x00042453) fep_vkb_bottom_pane

0xed29,	// (0x000463c6) fep_vkb_candidate_pane_ParamLimits

0xed29,	// (0x000463c6) fep_vkb_candidate_pane

0xaddb,	// (0x00042478) fep_vkb_keypad_pane_ParamLimits

0xaddb,	// (0x00042478) fep_vkb_keypad_pane

0xae10,	// (0x000424ad) fep_vkb_side_pane_ParamLimits

0xae10,	// (0x000424ad) fep_vkb_side_pane

0xae4c,	// (0x000424e9) fep_vkb_top_pane_ParamLimits

0xae4c,	// (0x000424e9) fep_vkb_top_pane

0xed4f,	// (0x000463ec) fep_vkb_top_pane_g1_ParamLimits

0xed4f,	// (0x000463ec) fep_vkb_top_pane_g1

0xed5e,	// (0x000463fb) fep_vkb_top_pane_g2_ParamLimits

0xed5e,	// (0x000463fb) fep_vkb_top_pane_g2

0xed6d,	// (0x0004640a) fep_vkb_top_pane_g3_ParamLimits

0xed6d,	// (0x0004640a) fep_vkb_top_pane_g3

0x0003,

0xfb2b,	// (0x000471c8) fep_vkb_top_pane_g_ParamLimits

0xfb2b,	// (0x000471c8) fep_vkb_top_pane_g

0xed8b,	// (0x00046428) fep_vkb_top_text_pane_ParamLimits

0xed8b,	// (0x00046428) fep_vkb_top_text_pane

0xae81,	// (0x0004251e) fep_vkb_side_pane_g1_ParamLimits

0xae81,	// (0x0004251e) fep_vkb_side_pane_g1

0xedaa,	// (0x00046447) grid_vkb_side_pane_ParamLimits

0xedaa,	// (0x00046447) grid_vkb_side_pane

0x3dd6,	// (0x0003b473) bg_popup_fep_shadow_pane_g2

0x3ddf,	// (0x0003b47c) bg_popup_fep_shadow_pane_g3

0x3de7,	// (0x0003b484) bg_popup_fep_shadow_pane_g4

0x3df0,	// (0x0003b48d) bg_popup_fep_shadow_pane_g5

0x3dfa,	// (0x0003b497) bg_popup_fep_shadow_pane_g6

0x3e02,	// (0x0003b49f) bg_popup_fep_shadow_pane_g7

0xc06b,	// (0x00043708) bg_popup_fep_shadow_pane_g8

0xee01,	// (0x0004649e) grid_vkb_keypad_number_pane_ParamLimits

0xee01,	// (0x0004649e) grid_vkb_keypad_number_pane

0xee11,	// (0x000464ae) grid_vkb_keypad_pane_ParamLimits

0xee11,	// (0x000464ae) grid_vkb_keypad_pane

0xee37,	// (0x000464d4) fep_vkb_bottom_pane_g1_ParamLimits

0xee37,	// (0x000464d4) fep_vkb_bottom_pane_g1

0xee60,	// (0x000464fd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xee60,	// (0x000464fd) grid_vkb_keypad_bottom_left_pane

0xee75,	// (0x00046512) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xee75,	// (0x00046512) grid_vkb_keypad_bottom_right_pane

0xee8a,	// (0x00046527) fep_vkb_top_text_pane_g1

0xaec8,	// (0x00042565) fep_vkb_top_text_pane_t1

0xaeda,	// (0x00042577) cell_vkb_side_pane_ParamLimits

0xaeda,	// (0x00042577) cell_vkb_side_pane

0xebec,	// (0x00046289) cell_vkb_side_pane_g1

0xeeb2,	// (0x0004654f) cell_vkb_keypad_pane_ParamLimits

0xeeb2,	// (0x0004654f) cell_vkb_keypad_pane

0xef27,	// (0x000465c4) cell_vkb_keypad_pane_g1

0x0008,

0xfb58,	// (0x000471f5) bg_popup_fep_shadow_pane_g

0xebec,	// (0x00046289) cell_hwr_side_pane_g1

0xebec,	// (0x00046289) cell_hwr_side_pane_g2

0xef31,	// (0x000465ce) cell_vkb_keypad_pane_t1

0xaef0,	// (0x0004258d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xaef0,	// (0x0004258d) cell_vkb_keypad_bottom_left_pane

0xaf05,	// (0x000425a2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xaf05,	// (0x000425a2) cell_vkb_keypad_bottom_right_pane

0xebec,	// (0x00046289) cell_vkb_keypad_bottom_left_pane_g1

0xebec,	// (0x00046289) cell_vkb_keypad_bottom_right_pane_g1

0xef3f,	// (0x000465dc) cell_vkb_keypad_number_pane_ParamLimits

0xef3f,	// (0x000465dc) cell_vkb_keypad_number_pane

0xef5e,	// (0x000465fb) cell_vkb_keypad_number_pane_g1

0xef68,	// (0x00046605) cell_vkb_keypad_number_pane_g2

0xef71,	// (0x0004660e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4a,	// (0x000471e7) cell_vkb_keypad_number_pane_g

0xef31,	// (0x000465ce) cell_vkb_keypad_number_pane_t1

0xef95,	// (0x00046632) fep_vkb_candidate_pane_g1

0x0001,

0xfb45,	// (0x000471e2) cell_hwr_side_pane_g

0xefae,	// (0x0004664b) cell_hwr_side_pane_t1

0x3e14,	// (0x0003b4b1) cell_hwr_side_pane_t1_copy1

0xed7d,	// (0x0004641a) cell_hwr_candidate_pane_g1

0x3e22,	// (0x0003b4bf) cell_hwr_candidate_pane_t1

0xebec,	// (0x00046289) cell_vkb_candidate_pane_g2

0xf034,	// (0x000466d1) cell_vkb_candidate_pane_t1

0x3a2d,	// (0x0003b0ca) bg_popup_fep_shadow_pane_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_popup_fep_shadow_pane

0x57bc,	// (0x0003ce59) bg_fep_hwr_top_pane_g4

0xec6c,	// (0x00046309) bg_hwr_side_pane_g1_ParamLimits

0xec6c,	// (0x00046309) bg_hwr_side_pane_g1

0x94b4,	// (0x00040b51) cell_hwr_side_pane_ParamLimits

0x94b4,	// (0x00040b51) cell_hwr_side_pane

0x3b80,	// (0x0003b21d) fep_hwr_write_pane_g1_ParamLimits

0x3b80,	// (0x0003b21d) fep_hwr_write_pane_g1

0x3b8d,	// (0x0003b22a) fep_hwr_write_pane_g2_ParamLimits

0x3b8d,	// (0x0003b22a) fep_hwr_write_pane_g2

0x3b9a,	// (0x0003b237) fep_hwr_write_pane_g3_ParamLimits

0x3b9a,	// (0x0003b237) fep_hwr_write_pane_g3

0x94d4,	// (0x00040b71) fep_hwr_write_pane_g4_ParamLimits

0x94d4,	// (0x00040b71) fep_hwr_write_pane_g4

0x0005,

0xfb17,	// (0x000471b4) fep_hwr_write_pane_g_ParamLimits

0xfb17,	// (0x000471b4) fep_hwr_write_pane_g

0x57bc,	// (0x0003ce59) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x57bc,	// (0x0003ce59) bg_fep_hwr_candidate_pane_g2

0x3bbd,	// (0x0003b25a) cell_hwr_candidate_pane_ParamLimits

0x3bbd,	// (0x0003b25a) cell_hwr_candidate_pane

0x3bff,	// (0x0003b29c) fep_hwr_candidate_pane_g1_ParamLimits

0xeccc,	// (0x00046369) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xeccc,	// (0x00046369) bg_popup_fep_shadow_pane_cp2

0xed7d,	// (0x0004641a) fep_vkb_top_pane_g4_ParamLimits

0xed7d,	// (0x0004641a) fep_vkb_top_pane_g4

0xed9c,	// (0x00046439) fep_vkb_side_pane_g2_ParamLimits

0xed9c,	// (0x00046439) fep_vkb_side_pane_g2

0x800c,	// (0x0003f6a9) list_setting_pane_t4_ParamLimits

0x800c,	// (0x0003f6a9) list_setting_pane_t4

0x80a6,	// (0x0003f743) list_setting_number_pane_t5_ParamLimits

0x80a6,	// (0x0003f743) list_setting_number_pane_t5

0x8a66,	// (0x00040103) list_double_heading_pane_cp2_ParamLimits

0x8a66,	// (0x00040103) list_double_heading_pane_cp2

0xbffe,	// (0x0004369b) list_double_heading_pane_g1_cp2_ParamLimits

0xbffe,	// (0x0004369b) list_double_heading_pane_g1_cp2

0xc00a,	// (0x000436a7) list_double_heading_pane_g2_cp2_ParamLimits

0xc00a,	// (0x000436a7) list_double_heading_pane_g2_cp2

0xf042,	// (0x000466df) list_double_heading_pane_t1_cp2_ParamLimits

0xf042,	// (0x000466df) list_double_heading_pane_t1_cp2

0xf058,	// (0x000466f5) list_double_heading_pane_t2_cp2_ParamLimits

0xf058,	// (0x000466f5) list_double_heading_pane_t2_cp2

0xb275,	// (0x00042912) aid_value_unit2

0x1563,	// (0x00038c00) popup_preview_fixed_window

0xb420,	// (0x00042abd) bg_popup_preview_window_pane_cp02

0xf06a,	// (0x00046707) list_preview_fixed_pane

0xf0b0,	// (0x0004674d) list_empty_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_empty_pane_fp

0xf0b0,	// (0x0004674d) list_single_cale_day_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_cale_day_pane_fp

0xf0b0,	// (0x0004674d) list_single_graphic_heading_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_graphic_heading_pane_fp

0xf0b0,	// (0x0004674d) list_single_graphic_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_graphic_pane_fp

0xf0b0,	// (0x0004674d) list_single_heading_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_heading_pane_fp

0xf0b0,	// (0x0004674d) list_single_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_pane_fp

0xf0c6,	// (0x00046763) list_single_pane_fp_g1_ParamLimits

0xf0c6,	// (0x00046763) list_single_pane_fp_g1

0xbffe,	// (0x0004369b) list_single_pane_fp_g2_ParamLimits

0xbffe,	// (0x0004369b) list_single_pane_fp_g2

0xc00a,	// (0x000436a7) list_single_pane_fp_g3_ParamLimits

0xc00a,	// (0x000436a7) list_single_pane_fp_g3

0xf0d2,	// (0x0004676f) list_single_pane_fp_g4_ParamLimits

0xf0d2,	// (0x0004676f) list_single_pane_fp_g4

0x0003,

0xfb79,	// (0x00047216) list_single_pane_fp_g_ParamLimits

0xfb79,	// (0x00047216) list_single_pane_fp_g

0x0fe7,	// (0x00038684) list_single_pane_fp_t1_ParamLimits

0x0fe7,	// (0x00038684) list_single_pane_fp_t1

0x0ffe,	// (0x0003869b) list_single_graphic_pane_fp_g1_ParamLimits

0x0ffe,	// (0x0003869b) list_single_graphic_pane_fp_g1

0xf0c6,	// (0x00046763) list_single_graphic_pane_fp_g2_ParamLimits

0xf0c6,	// (0x00046763) list_single_graphic_pane_fp_g2

0xbffe,	// (0x0004369b) list_single_graphic_pane_fp_g3_ParamLimits

0xbffe,	// (0x0004369b) list_single_graphic_pane_fp_g3

0xc00a,	// (0x000436a7) list_single_graphic_pane_fp_g4_ParamLimits

0xc00a,	// (0x000436a7) list_single_graphic_pane_fp_g4

0xf0d2,	// (0x0004676f) list_single_graphic_pane_fp_g5_ParamLimits

0xf0d2,	// (0x0004676f) list_single_graphic_pane_fp_g5

0x0004,

0xfb82,	// (0x0004721f) list_single_graphic_pane_fp_g_ParamLimits

0xfb82,	// (0x0004721f) list_single_graphic_pane_fp_g

0x100a,	// (0x000386a7) list_single_graphic_pane_fp_t1_ParamLimits

0x100a,	// (0x000386a7) list_single_graphic_pane_fp_t1

0x0ffe,	// (0x0003869b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0ffe,	// (0x0003869b) list_single_graphic_heading_pane_fp_g1

0xf0c6,	// (0x00046763) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf0c6,	// (0x00046763) list_single_graphic_heading_pane_fp_g2

0xbffe,	// (0x0004369b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbffe,	// (0x0004369b) list_single_graphic_heading_pane_fp_g3

0xc00a,	// (0x000436a7) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc00a,	// (0x000436a7) list_single_graphic_heading_pane_fp_g4

0xf0d2,	// (0x0004676f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf0d2,	// (0x0004676f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0004721f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0004721f) list_single_graphic_heading_pane_fp_g

0x1020,	// (0x000386bd) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1020,	// (0x000386bd) list_single_graphic_heading_pane_fp_t1

0x1036,	// (0x000386d3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1036,	// (0x000386d3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8d,	// (0x0004722a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8d,	// (0x0004722a) list_single_graphic_heading_pane_fp_t

0x1048,	// (0x000386e5) list_single_cale_day_pane_fp_g1_ParamLimits

0x1048,	// (0x000386e5) list_single_cale_day_pane_fp_g1

0xf0de,	// (0x0004677b) list_single_cale_day_pane_fp_g2_ParamLimits

0xf0de,	// (0x0004677b) list_single_cale_day_pane_fp_g2

0x3e40,	// (0x0003b4dd) list_single_cale_day_pane_fp_g3_ParamLimits

0x3e40,	// (0x0003b4dd) list_single_cale_day_pane_fp_g3

0x3e68,	// (0x0003b505) list_single_cale_day_pane_fp_g4_ParamLimits

0x3e68,	// (0x0003b505) list_single_cale_day_pane_fp_g4

0x3e8c,	// (0x0003b529) list_single_cale_day_pane_fp_g5_ParamLimits

0x3e8c,	// (0x0003b529) list_single_cale_day_pane_fp_g5

0x0004,

0xfb92,	// (0x0004722f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb92,	// (0x0004722f) list_single_cale_day_pane_fp_g

0x1080,	// (0x0003871d) list_single_cale_day_pane_fp_t1_ParamLimits

0x1080,	// (0x0003871d) list_single_cale_day_pane_fp_t1

0x10a6,	// (0x00038743) list_single_cale_day_pane_fp_t2_ParamLimits

0x10a6,	// (0x00038743) list_single_cale_day_pane_fp_t2

0x10bf,	// (0x0003875c) list_single_cale_day_pane_fp_t3_ParamLimits

0x10bf,	// (0x0003875c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9d,	// (0x0004723a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9d,	// (0x0004723a) list_single_cale_day_pane_fp_t

0xf0c6,	// (0x00046763) list_empty_pane_fp_g1_ParamLimits

0xf0c6,	// (0x00046763) list_empty_pane_fp_g1

0x10d8,	// (0x00038775) list_empty_pane_fp_t1

0x10e6,	// (0x00038783) list_empty_pane_fp_t2

0x0001,

0xfba4,	// (0x00047241) list_empty_pane_fp_t

0xf0c6,	// (0x00046763) list_single_heading_pane_fp_g1_ParamLimits

0xf0c6,	// (0x00046763) list_single_heading_pane_fp_g1

0xbffe,	// (0x0004369b) list_single_heading_pane_fp_g2_ParamLimits

0xbffe,	// (0x0004369b) list_single_heading_pane_fp_g2

0xc00a,	// (0x000436a7) list_single_heading_pane_fp_g3_ParamLimits

0xc00a,	// (0x000436a7) list_single_heading_pane_fp_g3

0x0002,

0xfba9,	// (0x00047246) list_single_heading_pane_fp_g_ParamLimits

0xfba9,	// (0x00047246) list_single_heading_pane_fp_g

0x10f4,	// (0x00038791) list_single_heading_pane_fp_t1_ParamLimits

0x10f4,	// (0x00038791) list_single_heading_pane_fp_t1

0x1106,	// (0x000387a3) list_single_heading_pane_fp_t2_ParamLimits

0x1106,	// (0x000387a3) list_single_heading_pane_fp_t2

0x0001,

0xfbb0,	// (0x0004724d) list_single_heading_pane_fp_t_ParamLimits

0xfbb0,	// (0x0004724d) list_single_heading_pane_fp_t

0xc161,	// (0x000437fe) aid_size_cell_fast

0xb403,	// (0x00042aa0) soft_indicator_pane_cp1_t1

0xc19b,	// (0x00043838) cell_app_pane_cp2_ParamLimits

0xc19b,	// (0x00043838) cell_app_pane_cp2

0x3a4f,	// (0x0003b0ec) fep_hwr_candidate_drop_down_list_pane

0x57ca,	// (0x0003ce67) fep_hwr_candidate_pane_g3_ParamLimits

0x57ca,	// (0x0003ce67) fep_hwr_candidate_pane_g3

0x57d7,	// (0x0003ce74) fep_hwr_candidate_pane_g4_ParamLimits

0x57d7,	// (0x0003ce74) fep_hwr_candidate_pane_g4

0x0002,

0xfb24,	// (0x000471c1) fep_hwr_candidate_pane_g_ParamLimits

0xfb24,	// (0x000471c1) fep_hwr_candidate_pane_g

0xed18,	// (0x000463b5) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed18,	// (0x000463b5) fep_vkb_candidate_drop_down_list_pane

0xef9d,	// (0x0004663a) fep_vkb_candidate_pane_g3

0xefa5,	// (0x00046642) fep_vkb_candidate_pane_g4

0x0002,

0xfb51,	// (0x000471ee) fep_vkb_candidate_pane_g

0xed7d,	// (0x0004641a) cell_hwr_candidate_pane_g1_ParamLimits

0xefbc,	// (0x00046659) cell_hwr_candidate_pane_g3_ParamLimits

0xefbc,	// (0x00046659) cell_hwr_candidate_pane_g3

0xefdd,	// (0x0004667a) cell_hwr_candidate_pane_g4_ParamLimits

0xefdd,	// (0x0004667a) cell_hwr_candidate_pane_g4

0x0002,

0xfb6b,	// (0x00047208) cell_hwr_candidate_pane_g_ParamLimits

0xfb6b,	// (0x00047208) cell_hwr_candidate_pane_g

0xeffe,	// (0x0004669b) cell_vkb_candidate_pane_g3_ParamLimits

0xeffe,	// (0x0004669b) cell_vkb_candidate_pane_g3

0xf019,	// (0x000466b6) cell_vkb_candidate_pane_g4_ParamLimits

0xf019,	// (0x000466b6) cell_vkb_candidate_pane_g4

0xf0ea,	// (0x00046787) cell_app_pane_cp2_g1_ParamLimits

0xf0ea,	// (0x00046787) cell_app_pane_cp2_g1

0xf108,	// (0x000467a5) cell_app_pane_cp2_g2_ParamLimits

0xf108,	// (0x000467a5) cell_app_pane_cp2_g2

0x0001,

0xfbb5,	// (0x00047252) cell_app_pane_cp2_g_ParamLimits

0xfbb5,	// (0x00047252) cell_app_pane_cp2_g

0xf114,	// (0x000467b1) cell_app_pane_cp2_t1_ParamLimits

0xf114,	// (0x000467b1) cell_app_pane_cp2_t1

0xbff0,	// (0x0004368d) grid_highlight_pane_cp1_ParamLimits

0xbff0,	// (0x0004368d) grid_highlight_pane_cp1

0x3eb0,	// (0x0003b54d) cell_hwr_candidate_pane_cp1_ParamLimits

0x3eb0,	// (0x0003b54d) cell_hwr_candidate_pane_cp1

0xed7d,	// (0x0004641a) fep_hwr_candidate_drop_down_list_pane_g1

0xf126,	// (0x000467c3) fep_hwr_candidate_drop_down_list_pane_g2

0xf133,	// (0x000467d0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00047257) fep_hwr_candidate_drop_down_list_pane_g

0x3ecf,	// (0x0003b56c) fep_hwr_candidate_drop_down_list_scroll_pane

0x3ed8,	// (0x0003b575) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x3ed8,	// (0x0003b575) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x3ee5,	// (0x0003b582) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x3ee5,	// (0x0003b582) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x3ef2,	// (0x0003b58f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x3ef2,	// (0x0003b58f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeffe,	// (0x0004669b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeffe,	// (0x0004669b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf019,	// (0x000466b6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf019,	// (0x000466b6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x3eff,	// (0x0003b59c) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x3eff,	// (0x0003b59c) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x3f1a,	// (0x0003b5b7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x3f1a,	// (0x0003b5b7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x3f35,	// (0x0003b5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x3f35,	// (0x0003b5d2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x0004725e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x0004725e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf140,	// (0x000467dd) cell_vkb_candidate_pane_cp1_ParamLimits

0xf140,	// (0x000467dd) cell_vkb_candidate_pane_cp1

0xed7d,	// (0x0004641a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) fep_vkb_candidate_drop_down_list_pane_g1

0xf126,	// (0x000467c3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf126,	// (0x000467c3) fep_vkb_candidate_drop_down_list_pane_g2

0xf133,	// (0x000467d0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf133,	// (0x000467d0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00047257) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00047257) fep_vkb_candidate_drop_down_list_pane_g

0xf160,	// (0x000467fd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf160,	// (0x000467fd) fep_vkb_candidate_drop_down_list_scroll_pane

0xf16d,	// (0x0004680a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf16d,	// (0x0004680a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf17a,	// (0x00046817) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf17a,	// (0x00046817) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf186,	// (0x00046823) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf186,	// (0x00046823) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xefbc,	// (0x00046659) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xefbc,	// (0x00046659) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xefdd,	// (0x0004667a) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xefdd,	// (0x0004667a) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf192,	// (0x0004682f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf192,	// (0x0004682f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf1b3,	// (0x00046850) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf1b3,	// (0x00046850) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf1d4,	// (0x00046871) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf1d4,	// (0x00046871) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd2,	// (0x0004726f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd2,	// (0x0004726f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x85b5,	// (0x0003fc52) title_pane_g1_ParamLimits

0x85c8,	// (0x0003fc65) title_pane_g2_ParamLimits

0xf554,	// (0x00046bf1) title_pane_g_ParamLimits

0xc50f,	// (0x00043bac) aid_call2_pane

0xc517,	// (0x00043bb4) aid_call_pane

0xc51f,	// (0x00043bbc) popup_clock_analogue_window_g1

0xc51f,	// (0x00043bbc) popup_clock_analogue_window_g2

0x1d2d,	// (0x000393ca) popup_clock_analogue_window_g3

0x1d36,	// (0x000393d3) popup_clock_analogue_window_g4

0xb287,	// (0x00042924) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00046d9b) popup_clock_analogue_window_g

0x1d3e,	// (0x000393db) popup_clock_analogue_window_t1

0x1d76,	// (0x00039413) clock_digital_number_pane_ParamLimits

0x1d76,	// (0x00039413) clock_digital_number_pane

0x1d82,	// (0x0003941f) clock_digital_number_pane_cp02_ParamLimits

0x1d82,	// (0x0003941f) clock_digital_number_pane_cp02

0x1d8e,	// (0x0003942b) clock_digital_number_pane_cp03_ParamLimits

0x1d8e,	// (0x0003942b) clock_digital_number_pane_cp03

0x1d9a,	// (0x00039437) clock_digital_number_pane_cp04_ParamLimits

0x1d9a,	// (0x00039437) clock_digital_number_pane_cp04

0x1da6,	// (0x00039443) clock_digital_separator_pane_ParamLimits

0x1da6,	// (0x00039443) clock_digital_separator_pane

0x1db2,	// (0x0003944f) popup_clock_digital_window_t1_ParamLimits

0x1db2,	// (0x0003944f) popup_clock_digital_window_t1

0xb287,	// (0x00042924) clock_digital_number_pane_g1

0xb287,	// (0x00042924) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00046da6) clock_digital_number_pane_g

0xb287,	// (0x00042924) clock_digital_separator_pane_g1

0xb287,	// (0x00042924) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00046da6) clock_digital_separator_pane_g

0xa23f,	// (0x000418dc) aid_fill_nsta_ParamLimits

0xa375,	// (0x00041a12) indicator_nsta_pane_ParamLimits

0xcce6,	// (0x00044383) popup_clock_analogue_window

0xcce6,	// (0x00044383) popup_clock_digital_window

0xdb03,	// (0x000451a0) grid_indicator_nsta_pane_ParamLimits

0xe83d,	// (0x00045eda) clock_nsta_pane_t2

0x0001,

0xfaa4,	// (0x00047141) clock_nsta_pane_t

0x1cf1,	// (0x0003938e) aid_size_max_handle

0x1cfb,	// (0x00039398) aid_size_min_handle

0xc9c1,	// (0x0004405e) editor_scroll_pane

0xf1ef,	// (0x0004688c) ex_editor_pane

0xc11c,	// (0x000437b9) scroll_pane_cp13

0xb8d3,	// (0x00042f70) scroll_pane_cp14

0xc54e,	// (0x00043beb) scroll_pane_cp36

0x8a77,	// (0x00040114) list_single_graphic_hl_pane_cp2_ParamLimits

0x8a77,	// (0x00040114) list_single_graphic_hl_pane_cp2

0x9478,	// (0x00040b15) list_single_graphic_hl_pane_ParamLimits

0x9478,	// (0x00040b15) list_single_graphic_hl_pane

0x111c,	// (0x000387b9) aid_size_min_hl_cp1

0xf1f7,	// (0x00046894) list_highlight_pane_cp34_ParamLimits

0xf1f7,	// (0x00046894) list_highlight_pane_cp34

0xf208,	// (0x000468a5) list_single_graphic_hl_pane_g1_ParamLimits

0xf208,	// (0x000468a5) list_single_graphic_hl_pane_g1

0x82cf,	// (0x0003f96c) list_single_graphic_hl_pane_g2_ParamLimits

0x82cf,	// (0x0003f96c) list_single_graphic_hl_pane_g2

0x82cf,	// (0x0003f96c) list_single_graphic_hl_pane_g3_ParamLimits

0x82cf,	// (0x0003f96c) list_single_graphic_hl_pane_g3

0xc932,	// (0x00043fcf) list_single_graphic_hl_pane_g4_ParamLimits

0xc932,	// (0x00043fcf) list_single_graphic_hl_pane_g4

0x94e9,	// (0x00040b86) list_single_graphic_hl_pane_g5_ParamLimits

0x94e9,	// (0x00040b86) list_single_graphic_hl_pane_g5

0x0004,

0xfbe3,	// (0x00047280) list_single_graphic_hl_pane_g_ParamLimits

0xfbe3,	// (0x00047280) list_single_graphic_hl_pane_g

0x82db,	// (0x0003f978) list_single_graphic_hl_pane_t1_ParamLimits

0x82db,	// (0x0003f978) list_single_graphic_hl_pane_t1

0xf215,	// (0x000468b2) aid_size_min_hl_cp2

0xf21e,	// (0x000468bb) list_highlight_pane_cp34_cp2_ParamLimits

0xf21e,	// (0x000468bb) list_highlight_pane_cp34_cp2

0xf208,	// (0x000468a5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf208,	// (0x000468a5) list_single_graphic_hl_pane_g1_cp2

0xf22b,	// (0x000468c8) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf22b,	// (0x000468c8) list_single_graphic_hl_pane_g2_cp2

0xaf20,	// (0x000425bd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xaf20,	// (0x000425bd) list_single_graphic_hl_pane_g3_cp2

0xc906,	// (0x00043fa3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc906,	// (0x00043fa3) list_single_graphic_hl_pane_g4_cp2

0xf237,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf237,	// (0x000468d4) list_single_graphic_hl_pane_g5_cp2

0x8af4,	// (0x00040191) control_pane_g4_ParamLimits

0x8af4,	// (0x00040191) control_pane_g4

0xc155,	// (0x000437f2) bg_popup_sub_pane_cp10_ParamLimits

0xebf6,	// (0x00046293) list_choice_list_pane_ParamLimits

0xec05,	// (0x000462a2) scroll_pane_cp23

0xb420,	// (0x00042abd) bg_popup_preview_window_pane_cp02_ParamLimits

0xf06a,	// (0x00046707) list_preview_fixed_pane_ParamLimits

0xf080,	// (0x0004671d) list_preview_fixed_pane_cp_ParamLimits

0xf080,	// (0x0004671d) list_preview_fixed_pane_cp

0xf08c,	// (0x00046729) popup_preview_fixed_window_g1_ParamLimits

0xf08c,	// (0x00046729) popup_preview_fixed_window_g1

0xf098,	// (0x00046735) popup_preview_fixed_window_g2_ParamLimits

0xf098,	// (0x00046735) popup_preview_fixed_window_g2

0x0002,

0xfb72,	// (0x0004720f) popup_preview_fixed_window_g_ParamLimits

0xfb72,	// (0x0004720f) popup_preview_fixed_window_g

0x1bd1,	// (0x0003926e) aid_navi_side_left_pane_ParamLimits

0x1be6,	// (0x00039283) aid_navi_side_right_pane_ParamLimits

0x1bfe,	// (0x0003929b) navi_icon_pane_stacon_ParamLimits

0x1c12,	// (0x000392af) navi_navi_pane_stacon_ParamLimits

0x1bfe,	// (0x0003929b) navi_text_pane_stacon_ParamLimits

0xb27d,	// (0x0004291a) main_text_info_pane

0xf261,	// (0x000468fe) listscroll_text_info_pane

0xf269,	// (0x00046906) list_text_info_pane_ParamLimits

0xf269,	// (0x00046906) list_text_info_pane

0xf278,	// (0x00046915) scroll_pane_cp24_ParamLimits

0xf278,	// (0x00046915) scroll_pane_cp24

0xaf2e,	// (0x000425cb) list_text_info_pane_t1_ParamLimits

0xaf2e,	// (0x000425cb) list_text_info_pane_t1

0x8c2b,	// (0x000402c8) popup_fast_swap2_window_ParamLimits

0x8c2b,	// (0x000402c8) popup_fast_swap2_window

0xf296,	// (0x00046933) aid_size_cell_fast2

0xb27d,	// (0x0004291a) bg_popup_window_pane_cp17

0xd149,	// (0x000447e6) heading_pane_cp2

0xb606,	// (0x00042ca3) listscroll_fast2_pane

0xf2a0,	// (0x0004693d) grid_fast2_pane

0xf2aa,	// (0x00046947) listscroll_fast2_pane_g1

0xf2b2,	// (0x0004694f) listscroll_fast2_pane_g2

0x0001,

0xfbee,	// (0x0004728b) listscroll_fast2_pane_g

0xc11c,	// (0x000437b9) scroll_pane_cp26

0xf2bc,	// (0x00046959) cell_fast2_pane_ParamLimits

0xf2bc,	// (0x00046959) cell_fast2_pane

0xf2d1,	// (0x0004696e) cell_fast2_pane_g1

0xf2da,	// (0x00046977) cell_fast2_pane_g2

0xf2e3,	// (0x00046980) cell_fast2_pane_g3

0x0002,

0xfbf3,	// (0x00047290) cell_fast2_pane_g

0xb69a,	// (0x00042d37) grid_highlight_pane_cp9

0xb6af,	// (0x00042d4c) main_eswt_pane_ParamLimits

0xb6af,	// (0x00042d4c) main_eswt_pane

0xf28d,	// (0x0004692a) list_single_text_info_pane

0xf2eb,	// (0x00046988) eswt_ctrl_button_pane

0xf2eb,	// (0x00046988) eswt_ctrl_canvas_pane

0xf2f3,	// (0x00046990) eswt_ctrl_combo_pane

0xf2eb,	// (0x00046988) eswt_ctrl_default_pane

0xf2eb,	// (0x00046988) eswt_ctrl_label_pane

0xf2fb,	// (0x00046998) eswt_ctrl_wait_pane

0xf303,	// (0x000469a0) eswt_shell_pane

0xb27d,	// (0x0004291a) listscroll_eswt_app_pane

0xf323,	// (0x000469c0) popup_eswt_tasktip_window_ParamLimits

0xf323,	// (0x000469c0) popup_eswt_tasktip_window

0xce7b,	// (0x00044518) bg_popup_window_pane_cp18

0xf334,	// (0x000469d1) eswt_control_pane_g1_ParamLimits

0xf334,	// (0x000469d1) eswt_control_pane_g1

0xf341,	// (0x000469de) eswt_control_pane_g2_ParamLimits

0xf341,	// (0x000469de) eswt_control_pane_g2

0xf34e,	// (0x000469eb) eswt_control_pane_g3_ParamLimits

0xf34e,	// (0x000469eb) eswt_control_pane_g3

0xf35b,	// (0x000469f8) eswt_control_pane_g4_ParamLimits

0xf35b,	// (0x000469f8) eswt_control_pane_g4

0x0003,

0xfbfa,	// (0x00047297) eswt_control_pane_g_ParamLimits

0xfbfa,	// (0x00047297) eswt_control_pane_g

0xbff0,	// (0x0004368d) bg_button_pane_ParamLimits

0xbff0,	// (0x0004368d) bg_button_pane

0xb6af,	// (0x00042d4c) common_borders_pane_copy2_ParamLimits

0xb6af,	// (0x00042d4c) common_borders_pane_copy2

0xf368,	// (0x00046a05) control_button_pane_g1_ParamLimits

0xf368,	// (0x00046a05) control_button_pane_g1

0xf374,	// (0x00046a11) control_button_pane_g2_ParamLimits

0xf374,	// (0x00046a11) control_button_pane_g2

0xf380,	// (0x00046a1d) control_button_pane_g3_ParamLimits

0xf380,	// (0x00046a1d) control_button_pane_g3

0x0002,

0xfc03,	// (0x000472a0) control_button_pane_g_ParamLimits

0xfc03,	// (0x000472a0) control_button_pane_g

0xf394,	// (0x00046a31) control_button_pane_t1

0xf3a2,	// (0x00046a3f) control_button_pane_t2

0x0001,

0xfc0a,	// (0x000472a7) control_button_pane_t

0xce07,	// (0x000444a4) bg_button_pane_g1

0xce0f,	// (0x000444ac) bg_button_pane_g2

0xce17,	// (0x000444b4) bg_button_pane_g3

0xce1f,	// (0x000444bc) bg_button_pane_g4

0xce27,	// (0x000444c4) bg_button_pane_g5

0xce2f,	// (0x000444cc) bg_button_pane_g6

0xce37,	// (0x000444d4) bg_button_pane_g7

0xce3f,	// (0x000444dc) bg_button_pane_g8

0xce47,	// (0x000444e4) bg_button_pane_g9

0x0008,

0xf867,	// (0x00046f04) bg_button_pane_g

0xebb1,	// (0x0004624e) common_borders_pane_ParamLimits

0xebb1,	// (0x0004624e) common_borders_pane

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy1_ParamLimits

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy1

0xf341,	// (0x000469de) eswt_control_pane_g2_copy1_ParamLimits

0xf341,	// (0x000469de) eswt_control_pane_g2_copy1

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy1_ParamLimits

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy1

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy1_ParamLimits

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy1

0xebec,	// (0x00046289) bg_eswt_ctrl_canvas_pane_g1

0xebb1,	// (0x0004624e) common_borders_pane_cp2_ParamLimits

0xebb1,	// (0x0004624e) common_borders_pane_cp2

0xebb1,	// (0x0004624e) common_borders_pane_cp3_ParamLimits

0xebb1,	// (0x0004624e) common_borders_pane_cp3

0xf3b0,	// (0x00046a4d) separator_horizontal_pane

0xf3b8,	// (0x00046a55) separator_vertical_pane

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy2_ParamLimits

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy2

0xf341,	// (0x000469de) eswt_control_pane_g2_copy2_ParamLimits

0xf341,	// (0x000469de) eswt_control_pane_g2_copy2

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy2_ParamLimits

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy2

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy2_ParamLimits

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy2

0xb27d,	// (0x0004291a) common_borders_pane_cp4

0xf3c1,	// (0x00046a5e) separator_horizontal_pane_g1

0xf3ca,	// (0x00046a67) separator_horizontal_pane_g2

0xf3d3,	// (0x00046a70) separator_horizontal_pane_g3

0x0002,

0xfc0f,	// (0x000472ac) separator_horizontal_pane_g

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy3_ParamLimits

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy3

0xf341,	// (0x000469de) eswt_control_pane_g2_copy3_ParamLimits

0xf341,	// (0x000469de) eswt_control_pane_g2_copy3

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy3_ParamLimits

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy3

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy3_ParamLimits

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy3

0xb27d,	// (0x0004291a) common_borders_pane_cp5

0xf3dc,	// (0x00046a79) separator_vertical_pane_g1

0xf3e5,	// (0x00046a82) separator_vertical_pane_g2

0xf3ee,	// (0x00046a8b) separator_vertical_pane_g3

0x0002,

0xfc16,	// (0x000472b3) separator_vertical_pane_g

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy4_ParamLimits

0xf334,	// (0x000469d1) eswt_control_pane_g1_copy4

0xf341,	// (0x000469de) eswt_control_pane_g2_copy4_ParamLimits

0xf341,	// (0x000469de) eswt_control_pane_g2_copy4

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy4_ParamLimits

0xf34e,	// (0x000469eb) eswt_control_pane_g3_copy4

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy4_ParamLimits

0xf35b,	// (0x000469f8) eswt_control_pane_g4_copy4

0xf3f7,	// (0x00046a94) eswt_ctrl_combo_button_pane

0xf3ff,	// (0x00046a9c) eswt_ctrl_input_pane

0xf407,	// (0x00046aa4) popup_choice_list_window_cp70

0xf40f,	// (0x00046aac) eswt_ctrl_input_pane_t1

0xb27d,	// (0x0004291a) input_focus_pane_cp70

0xebb1,	// (0x0004624e) bg_button_pane_cp70_ParamLimits

0xebb1,	// (0x0004624e) bg_button_pane_cp70

0xf41d,	// (0x00046aba) eswt_ctrl_combo_button_pane_g1

0xf425,	// (0x00046ac2) wait_bar_pane_cp70

0xce7b,	// (0x00044518) bg_popup_window_pane_cp70_ParamLimits

0xce7b,	// (0x00044518) bg_popup_window_pane_cp70

0xf42d,	// (0x00046aca) popup_eswt_tasktip_window_t1

0xf443,	// (0x00046ae0) wait_bar_pane_cp71_ParamLimits

0xf443,	// (0x00046ae0) wait_bar_pane_cp71

0xf44f,	// (0x00046aec) grid_eswt_app_pane

0xc35b,	// (0x000439f8) scroll_pane_cp70

0xaf4b,	// (0x000425e8) cell_eswt_app_pane_ParamLimits

0xaf4b,	// (0x000425e8) cell_eswt_app_pane

0xaf75,	// (0x00042612) cell_eswt_app_pane_g1_ParamLimits

0xaf75,	// (0x00042612) cell_eswt_app_pane_g1

0xafa4,	// (0x00042641) cell_eswt_app_pane_g2_ParamLimits

0xafa4,	// (0x00042641) cell_eswt_app_pane_g2

0x0001,

0xfc1d,	// (0x000472ba) cell_eswt_app_pane_g_ParamLimits

0xfc1d,	// (0x000472ba) cell_eswt_app_pane_g

0xafc8,	// (0x00042665) cell_eswt_app_pane_t1_ParamLimits

0xafc8,	// (0x00042665) cell_eswt_app_pane_t1

0xf458,	// (0x00046af5) grid_highlight_pane_cp70_ParamLimits

0xf458,	// (0x00046af5) grid_highlight_pane_cp70

0xc8ba,	// (0x00043f57) set_content_pane_g1

0xcbaa,	// (0x00044247) status_small_volume_pane

0x4060,	// (0x0003b6fd) status_small_volume_pane_g1

0x4068,	// (0x0003b705) volume_small2_pane

0x4071,	// (0x0003b70e) volume_small2_pane_g1

0x407a,	// (0x0003b717) volume_small2_pane_g2

0x4083,	// (0x0003b720) volume_small2_pane_g3

0x408c,	// (0x0003b729) volume_small2_pane_g4

0x4095,	// (0x0003b732) volume_small2_pane_g5

0x409e,	// (0x0003b73b) volume_small2_pane_g6

0x40a7,	// (0x0003b744) volume_small2_pane_g7

0x40b0,	// (0x0003b74d) volume_small2_pane_g8

0x40b9,	// (0x0003b756) volume_small2_pane_g9

0x40c2,	// (0x0003b75f) volume_small2_pane_g10

0x0009,

0xfc22,	// (0x000472bf) volume_small2_pane_g

0xee8a,	// (0x00046527) fep_vkb_top_text_pane_g1_ParamLimits

0xaec8,	// (0x00042565) fep_vkb_top_text_pane_t1_ParamLimits

0xf0a4,	// (0x00046741) popup_preview_fixed_window_g3_ParamLimits

0xf0a4,	// (0x00046741) popup_preview_fixed_window_g3

0x923a,	// (0x000408d7) popup_toolbar_trans_pane

0xa92f,	// (0x00041fcc) aid_height_set_list_ParamLimits

0xcd99,	// (0x00044436) aid_size_parent_ParamLimits

0xc155,	// (0x000437f2) list_highlight_pane_cp2_ParamLimits

0xc8ba,	// (0x00043f57) set_content_pane_g1_ParamLimits

0x948a,	// (0x00040b27) list_single_image_pane_ParamLimits

0x948a,	// (0x00040b27) list_single_image_pane

0xaffa,	// (0x00042697) aid_size_cell_image_ParamLimits

0xaffa,	// (0x00042697) aid_size_cell_image

0xb007,	// (0x000426a4) grid_single_image_pane_ParamLimits

0xb007,	// (0x000426a4) grid_single_image_pane

0xf464,	// (0x00046b01) list_single_image_pane_g1_ParamLimits

0xf464,	// (0x00046b01) list_single_image_pane_g1

0xf470,	// (0x00046b0d) list_single_image_pane_g2_ParamLimits

0xf470,	// (0x00046b0d) list_single_image_pane_g2

0x0001,

0xfc37,	// (0x000472d4) list_single_image_pane_g_ParamLimits

0xfc37,	// (0x000472d4) list_single_image_pane_g

0xf484,	// (0x00046b21) list_single_image_pane_t1_ParamLimits

0xf484,	// (0x00046b21) list_single_image_pane_t1

0xb013,	// (0x000426b0) cell_image_list_pane_ParamLimits

0xb013,	// (0x000426b0) cell_image_list_pane

0xb027,	// (0x000426c4) cell_image_list_pane_g1

0xb030,	// (0x000426cd) cell_image_list_pane_g2

0x0001,

0xfc3c,	// (0x000472d9) cell_image_list_pane_g

0xf49a,	// (0x00046b37) aid_size_cell_tb_trans_pane

0xbff0,	// (0x0004368d) bg_tb_trans_pane

0xf4ac,	// (0x00046b49) grid_tb_trans_pane

0xce07,	// (0x000444a4) bg_tb_trans_pane_g1

0xce0f,	// (0x000444ac) bg_tb_trans_pane_g2

0xce17,	// (0x000444b4) bg_tb_trans_pane_g3

0xce1f,	// (0x000444bc) bg_tb_trans_pane_g4

0xce27,	// (0x000444c4) bg_tb_trans_pane_g5

0xce3f,	// (0x000444dc) bg_tb_trans_pane_g6

0xce47,	// (0x000444e4) bg_tb_trans_pane_g7

0xce2f,	// (0x000444cc) bg_tb_trans_pane_g8

0xce37,	// (0x000444d4) bg_tb_trans_pane_g9

0x0008,

0xfc41,	// (0x000472de) bg_tb_trans_pane_g

0xf4c0,	// (0x00046b5d) cell_toolbar_trans_pane_ParamLimits

0xf4c0,	// (0x00046b5d) cell_toolbar_trans_pane

0xebec,	// (0x00046289) cell_toolbar_trans_pane_g1

0xacab,	// (0x00042348) list_form2_midp_pane_t1

0xacb9,	// (0x00042356) list_form2_midp_pane_t2

0x0001,

0xfaea,	// (0x00047187) list_form2_midp_pane_t

0xe949,	// (0x00045fe6) scroll_pane_cp51_ParamLimits

0xeac0,	// (0x0004615d) form2_midp_wait_pane_g1

0xeac9,	// (0x00046166) form2_midp_wait_pane_g2

0xead2,	// (0x0004616f) form2_midp_wait_pane_g3

0x0002,

0xfaff,	// (0x0004719c) form2_midp_wait_pane_g

0xb2ed,	// (0x0004298a) list_highlight_pane_cp21_ParamLimits

0xeaf2,	// (0x0004618f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb01,	// (0x0004619e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xdf57,	// (0x000455f4) list_single_2graphic_im_pane_ParamLimits

0xdf57,	// (0x000455f4) list_single_2graphic_im_pane

0xf4e6,	// (0x00046b83) list_single_2graphic_im_pane_g1_ParamLimits

0xf4e6,	// (0x00046b83) list_single_2graphic_im_pane_g1

0xf4f7,	// (0x00046b94) list_single_2graphic_im_pane_g2_ParamLimits

0xf4f7,	// (0x00046b94) list_single_2graphic_im_pane_g2

0xf503,	// (0x00046ba0) list_single_2graphic_im_pane_g3_ParamLimits

0xf503,	// (0x00046ba0) list_single_2graphic_im_pane_g3

0x0003,

0xfc54,	// (0x000472f1) list_single_2graphic_im_pane_g_ParamLimits

0xfc54,	// (0x000472f1) list_single_2graphic_im_pane_g

0xf523,	// (0x00046bc0) list_single_2graphic_im_pane_t1_ParamLimits

0xf523,	// (0x00046bc0) list_single_2graphic_im_pane_t1

0xf0b0,	// (0x0004674d) list_single_graphic_2heading_pane_fp_ParamLimits

0xf0b0,	// (0x0004674d) list_single_graphic_2heading_pane_fp

0x0ffe,	// (0x0003869b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0ffe,	// (0x0003869b) list_single_graphic_2heading_pane_fp_g1

0xf0c6,	// (0x00046763) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf0c6,	// (0x00046763) list_single_graphic_2heading_pane_fp_g2

0xbffe,	// (0x0004369b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbffe,	// (0x0004369b) list_single_graphic_2heading_pane_fp_g3

0xc00a,	// (0x000436a7) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc00a,	// (0x000436a7) list_single_graphic_2heading_pane_fp_g4

0xf0d2,	// (0x0004676f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf0d2,	// (0x0004676f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb82,	// (0x0004721f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0004721f) list_single_graphic_2heading_pane_fp_g

0x1147,	// (0x000387e4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1147,	// (0x000387e4) list_single_graphic_2heading_pane_fp_t1

0x1036,	// (0x000386d3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1036,	// (0x000386d3) list_single_graphic_2heading_pane_fp_t2

0x115d,	// (0x000387fa) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x115d,	// (0x000387fa) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5d,	// (0x000472fa) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5d,	// (0x000472fa) list_single_graphic_2heading_pane_fp_t

0xec78,	// (0x00046315) fep_hwr_write_pane_g5_ParamLimits

0xec78,	// (0x00046315) fep_hwr_write_pane_g5

0xec84,	// (0x00046321) fep_hwr_write_pane_g6_ParamLimits

0xec84,	// (0x00046321) fep_hwr_write_pane_g6

0xf303,	// (0x000469a0) eswt_shell_pane_ParamLimits

0xce7b,	// (0x00044518) bg_popup_window_pane_cp18_ParamLimits

0xde88,	// (0x00045525) heading_pane_cp70

0xf42d,	// (0x00046aca) popup_eswt_tasktip_window_t1_ParamLimits

0xa29a,	// (0x00041937) aid_touch_tab_arrow_left

0xa2b0,	// (0x0004194d) aid_touch_tab_arrow_right

0x85e0,	// (0x0003fc7d) title_pane_g3_ParamLimits

0x85e0,	// (0x0003fc7d) title_pane_g3

0xb8f3,	// (0x00042f90) set_value_pane_g1

0x923a,	// (0x000408d7) popup_toolbar_trans_pane_ParamLimits

0xf49a,	// (0x00046b37) aid_size_cell_tb_trans_pane_ParamLimits

0xbff0,	// (0x0004368d) bg_tb_trans_pane_ParamLimits

0xf4ac,	// (0x00046b49) grid_tb_trans_pane_ParamLimits

0xb420,	// (0x00042abd) cont_note_pane_ParamLimits

0xb420,	// (0x00042abd) cont_note_pane

0xb6af,	// (0x00042d4c) cont_snote2_single_text_pane_ParamLimits

0xb6af,	// (0x00042d4c) cont_snote2_single_text_pane

0xb6af,	// (0x00042d4c) cont_snote2_single_graphic_pane_ParamLimits

0xb6af,	// (0x00042d4c) cont_snote2_single_graphic_pane

0xd35f,	// (0x000449fc) cont_note_wait_pane_ParamLimits

0xd35f,	// (0x000449fc) cont_note_wait_pane

0xd35f,	// (0x000449fc) cont_note_image_pane_ParamLimits

0xd35f,	// (0x000449fc) cont_note_image_pane

0x410a,	// (0x0003b7a7) popup_note2_window_g1_ParamLimits

0x410a,	// (0x0003b7a7) popup_note2_window_g1

0x413b,	// (0x0003b7d8) popup_note2_window_t1_ParamLimits

0x413b,	// (0x0003b7d8) popup_note2_window_t1

0x4180,	// (0x0003b81d) popup_note2_window_t2_ParamLimits

0x4180,	// (0x0003b81d) popup_note2_window_t2

0x41c5,	// (0x0003b862) popup_note2_window_t3_ParamLimits

0x41c5,	// (0x0003b862) popup_note2_window_t3

0x420a,	// (0x0003b8a7) popup_note2_window_t4_ParamLimits

0x420a,	// (0x0003b8a7) popup_note2_window_t4

0xb498,	// (0x00042b35) popup_note2_window_t5_ParamLimits

0xb498,	// (0x00042b35) popup_note2_window_t5

0x0004,

0xfc69,	// (0x00047306) popup_note2_window_t_ParamLimits

0xfc69,	// (0x00047306) popup_note2_window_t

0x4239,	// (0x0003b8d6) popup_note2_image_window_g1_ParamLimits

0x4239,	// (0x0003b8d6) popup_note2_image_window_g1

0x4245,	// (0x0003b8e2) popup_note2_image_window_g2_ParamLimits

0x4245,	// (0x0003b8e2) popup_note2_image_window_g2

0x0001,

0xfc74,	// (0x00047311) popup_note2_image_window_g_ParamLimits

0xfc74,	// (0x00047311) popup_note2_image_window_g

0x4257,	// (0x0003b8f4) popup_note2_image_window_t1_ParamLimits

0x4257,	// (0x0003b8f4) popup_note2_image_window_t1

0x426f,	// (0x0003b90c) popup_note2_image_window_t2_ParamLimits

0x426f,	// (0x0003b90c) popup_note2_image_window_t2

0x4287,	// (0x0003b924) popup_note2_image_window_t3_ParamLimits

0x4287,	// (0x0003b924) popup_note2_image_window_t3

0x0002,

0xfc79,	// (0x00047316) popup_note2_image_window_t_ParamLimits

0xfc79,	// (0x00047316) popup_note2_image_window_t

0xd36d,	// (0x00044a0a) popup_note2_wait_window_g1_ParamLimits

0xd36d,	// (0x00044a0a) popup_note2_wait_window_g1

0x42a3,	// (0x0003b940) popup_note2_wait_window_g2_ParamLimits

0x42a3,	// (0x0003b940) popup_note2_wait_window_g2

0xd385,	// (0x00044a22) popup_note2_wait_window_g3_ParamLimits

0xd385,	// (0x00044a22) popup_note2_wait_window_g3

0x0002,

0xfc80,	// (0x0004731d) popup_note2_wait_window_g_ParamLimits

0xfc80,	// (0x0004731d) popup_note2_wait_window_g

0x42af,	// (0x0003b94c) popup_note2_wait_window_t1_ParamLimits

0x42af,	// (0x0003b94c) popup_note2_wait_window_t1

0x42cd,	// (0x0003b96a) popup_note2_wait_window_t2_ParamLimits

0x42cd,	// (0x0003b96a) popup_note2_wait_window_t2

0x42eb,	// (0x0003b988) popup_note2_wait_window_t3_ParamLimits

0x42eb,	// (0x0003b988) popup_note2_wait_window_t3

0x42fd,	// (0x0003b99a) popup_note2_wait_window_t4_ParamLimits

0x42fd,	// (0x0003b99a) popup_note2_wait_window_t4

0x0003,

0xfc87,	// (0x00047324) popup_note2_wait_window_t_ParamLimits

0xfc87,	// (0x00047324) popup_note2_wait_window_t

0x430f,	// (0x0003b9ac) wait_bar2_pane_ParamLimits

0x430f,	// (0x0003b9ac) wait_bar2_pane

0x4327,	// (0x0003b9c4) popup_snote2_single_text_window_g1_ParamLimits

0x4327,	// (0x0003b9c4) popup_snote2_single_text_window_g1

0x434f,	// (0x0003b9ec) popup_snote2_single_text_window_t1_ParamLimits

0x434f,	// (0x0003b9ec) popup_snote2_single_text_window_t1

0x439b,	// (0x0003ba38) popup_snote2_single_text_window_t2_ParamLimits

0x439b,	// (0x0003ba38) popup_snote2_single_text_window_t2

0x43e7,	// (0x0003ba84) popup_snote2_single_text_window_t3_ParamLimits

0x43e7,	// (0x0003ba84) popup_snote2_single_text_window_t3

0x4428,	// (0x0003bac5) popup_snote2_single_text_window_t4_ParamLimits

0x4428,	// (0x0003bac5) popup_snote2_single_text_window_t4

0x445e,	// (0x0003bafb) popup_snote2_single_text_window_t5_ParamLimits

0x445e,	// (0x0003bafb) popup_snote2_single_text_window_t5

0x0004,

0xfc90,	// (0x0004732d) popup_snote2_single_text_window_t_ParamLimits

0xfc90,	// (0x0004732d) popup_snote2_single_text_window_t

0x4489,	// (0x0003bb26) popup_snote2_single_graphic_window_g1_ParamLimits

0x4489,	// (0x0003bb26) popup_snote2_single_graphic_window_g1

0x44b1,	// (0x0003bb4e) popup_snote2_single_graphic_window_g2_ParamLimits

0x44b1,	// (0x0003bb4e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9b,	// (0x00047338) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9b,	// (0x00047338) popup_snote2_single_graphic_window_g

0x44d9,	// (0x0003bb76) popup_snote2_single_graphic_window_t1_ParamLimits

0x44d9,	// (0x0003bb76) popup_snote2_single_graphic_window_t1

0x4525,	// (0x0003bbc2) popup_snote2_single_graphic_window_t2_ParamLimits

0x4525,	// (0x0003bbc2) popup_snote2_single_graphic_window_t2

0x43e7,	// (0x0003ba84) popup_snote2_single_graphic_window_t3_ParamLimits

0x43e7,	// (0x0003ba84) popup_snote2_single_graphic_window_t3

0x4428,	// (0x0003bac5) popup_snote2_single_graphic_window_t4_ParamLimits

0x4428,	// (0x0003bac5) popup_snote2_single_graphic_window_t4

0x445e,	// (0x0003bafb) popup_snote2_single_graphic_window_t5_ParamLimits

0x445e,	// (0x0003bafb) popup_snote2_single_graphic_window_t5

0x0004,

0xfca0,	// (0x0004733d) popup_snote2_single_graphic_window_t_ParamLimits

0xfca0,	// (0x0004733d) popup_snote2_single_graphic_window_t

0xe8dd,	// (0x00045f7a) clock_nsta_pane_cp2_t1

0xe8dd,	// (0x00045f7a) clock_nsta_pane_cp2_t2

0x0001,

0xfac0,	// (0x0004715d) clock_nsta_pane_cp2_t

0x09c0,	// (0x0003805d) form_field_data_wide_pane_g1_ParamLimits

0xbffe,	// (0x0004369b) form_field_data_wide_pane_g2_ParamLimits

0xbffe,	// (0x0004369b) form_field_data_wide_pane_g2

0xc00a,	// (0x000436a7) form_field_data_wide_pane_g3_ParamLimits

0xc00a,	// (0x000436a7) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00046d1e) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00046d1e) form_field_data_wide_pane_g

0xabdf,	// (0x0004227c) grid_touch_3_pane_ParamLimits

0xabdf,	// (0x0004227c) grid_touch_3_pane

0xb039,	// (0x000426d6) cell_touch_3_pane_ParamLimits

0xb039,	// (0x000426d6) cell_touch_3_pane

0xebec,	// (0x00046289) cell_touch_3_pane_g1

0xebec,	// (0x00046289) cell_touch_3_pane_g2

0x0001,

0xfb45,	// (0x000471e2) cell_touch_3_pane_g

0xb4ca,	// (0x00042b67) cont_query_data_pane

0xb4d2,	// (0x00042b6f) cont_query_data_pane_cp1

0x4571,	// (0x0003bc0e) button_value_adjust_pane_cp7

0x4579,	// (0x0003bc16) query_popup_pane_cp3

0xc580,	// (0x00043c1d) bg_popup_sub_pane_cp22_ParamLimits

0x1e32,	// (0x000394cf) navi_navi_volume_pane_cp2

0x1e4a,	// (0x000394e7) popup_side_volume_key_window_g2

0x1e56,	// (0x000394f3) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00046db4) popup_side_volume_key_window_g

0x1e70,	// (0x0003950d) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00046dbb) popup_side_volume_key_window_t

0xc7c1,	// (0x00043e5e) popup_side_volume_key_window_ParamLimits

0x7e11,	// (0x0003f4ae) list_double_graphic_pane_g4_ParamLimits

0x7e11,	// (0x0003f4ae) list_double_graphic_pane_g4

0xaa95,	// (0x00042132) list_single_2heading_msg_pane_ParamLimits

0xaa95,	// (0x00042132) list_single_2heading_msg_pane

0x94fd,	// (0x00040b9a) list_single_2heading_msg_pane_g1_ParamLimits

0x94fd,	// (0x00040b9a) list_single_2heading_msg_pane_g1

0x9509,	// (0x00040ba6) list_single_2heading_msg_pane_g2_ParamLimits

0x9509,	// (0x00040ba6) list_single_2heading_msg_pane_g2

0x951c,	// (0x00040bb9) list_single_2heading_msg_pane_g3_ParamLimits

0x951c,	// (0x00040bb9) list_single_2heading_msg_pane_g3

0x45a2,	// (0x0003bc3f) list_single_2heading_msg_pane_g4_ParamLimits

0x45a2,	// (0x0003bc3f) list_single_2heading_msg_pane_g4

0x0003,

0xfcab,	// (0x00047348) list_single_2heading_msg_pane_g_ParamLimits

0xfcab,	// (0x00047348) list_single_2heading_msg_pane_g

0x117d,	// (0x0003881a) list_single_2heading_msg_pane_t1_ParamLimits

0x117d,	// (0x0003881a) list_single_2heading_msg_pane_t1

0x82f1,	// (0x0003f98e) list_single_2heading_msg_pane_t2_ParamLimits

0x82f1,	// (0x0003f98e) list_single_2heading_msg_pane_t2

0x835c,	// (0x0003f9f9) list_single_2heading_msg_pane_t3_ParamLimits

0x835c,	// (0x0003f9f9) list_single_2heading_msg_pane_t3

0x1212,	// (0x000388af) list_single_2heading_msg_pane_t4_ParamLimits

0x1212,	// (0x000388af) list_single_2heading_msg_pane_t4

0x0003,

0xfcb4,	// (0x00047351) list_single_2heading_msg_pane_t_ParamLimits

0xfcb4,	// (0x00047351) list_single_2heading_msg_pane_t

0xb29b,	// (0x00042938) title_pane_g4_ParamLimits

0xb29b,	// (0x00042938) title_pane_g4

0x1b21,	// (0x000391be) title_pane_stacon_g3_ParamLimits

0x1b21,	// (0x000391be) title_pane_stacon_g3

0xf517,	// (0x00046bb4) list_single_2graphic_im_pane_g4_ParamLimits

0xf517,	// (0x00046bb4) list_single_2graphic_im_pane_g4

0xdcba,	// (0x00045357) popup_side_volume_key_window_cp

0xe183,	// (0x00045820) main_idle_act2_pane_t1

0x2c8d,	// (0x0003a32a) toolbar_button_pane_g10

0x88fa,	// (0x0003ff97) popup_toolbar_window_cp1

0xe88c,	// (0x00045f29) clock_nsta_pane_cp_t1

0xe88c,	// (0x00045f29) clock_nsta_pane_cp_t2

0x0001,

0xfabb,	// (0x00047158) clock_nsta_pane_cp_t

0x1e32,	// (0x000394cf) navi_navi_volume_pane_cp2_ParamLimits

0x1e3e,	// (0x000394db) popup_side_volume_key_window_g1_ParamLimits

0x1e4a,	// (0x000394e7) popup_side_volume_key_window_g2_ParamLimits

0x1e56,	// (0x000394f3) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00046db4) popup_side_volume_key_window_g_ParamLimits

0x3a3b,	// (0x0003b0d8) fep_hwr_aid_pane

0x57bc,	// (0x0003ce59) bg_fep_hwr_top_pane_g4_ParamLimits

0xec48,	// (0x000462e5) fep_hwr_top_pane_g1_ParamLimits

0xec5a,	// (0x000462f7) fep_hwr_top_pane_g2_ParamLimits

0x3af4,	// (0x0003b191) fep_hwr_top_pane_g3_ParamLimits

0xfb10,	// (0x000471ad) fep_hwr_top_pane_g_ParamLimits

0x3b09,	// (0x0003b1a6) fep_hwr_top_text_pane_ParamLimits

0xda56,	// (0x000450f3) aid_touch_tab_arrow_arrow_2

0xda5f,	// (0x000450fc) aid_touch_tab_arrow_left_2

0x3a4f,	// (0x0003b0ec) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3a86,	// (0x0003b123) fep_hwr_prediction_pane

0xed45,	// (0x000463e2) fep_vkb_prediction_pane

0xaea8,	// (0x00042545) fep_vkb_side_pane_g3_ParamLimits

0xaea8,	// (0x00042545) fep_vkb_side_pane_g3

0xed7d,	// (0x0004641a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf126,	// (0x000467c3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf133,	// (0x000467d0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbba,	// (0x00047257) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x45ba,	// (0x0003bc57) fep_hwr_prediction_pane_g1

0x45c4,	// (0x0003bc61) fep_hwr_prediction_pane_g2

0x45cc,	// (0x0003bc69) fep_hwr_prediction_pane_g3

0x45d4,	// (0x0003bc71) fep_hwr_prediction_pane_g4

0x0003,

0xfcbd,	// (0x0004735a) fep_hwr_prediction_pane_g

0x45ba,	// (0x0003bc57) fep_vkb_prediction_pane_g1

0x45dc,	// (0x0003bc79) fep_vkb_prediction_pane_g2

0x45e4,	// (0x0003bc81) fep_vkb_prediction_pane_g3

0x45ec,	// (0x0003bc89) fep_vkb_prediction_pane_g4

0x0003,

0xfcc6,	// (0x00047363) fep_vkb_prediction_pane_g

0xe89b,	// (0x00045f38) slider_set_pane_g3

0xe8af,	// (0x00045f4c) slider_set_pane_g4

0xe8c7,	// (0x00045f64) slider_set_pane_g5

0xe89b,	// (0x00045f38) slider_set_pane_g6

0x327b,	// (0x0003a918) slider_set_pane_g7

0xdf0d,	// (0x000455aa) slider_form_pane_g3

0xdf16,	// (0x000455b3) slider_form_pane_g4

0xdf1e,	// (0x000455bb) slider_form_pane_g5

0xdf0d,	// (0x000455aa) slider_form_pane_g6

0xaa76,	// (0x00042113) slider_form_pane_g7

0xe3f9,	// (0x00045a96) slider_set_pane_vc_g3

0xe402,	// (0x00045a9f) slider_set_pane_vc_g4

0xe40b,	// (0x00045aa8) slider_set_pane_vc_g5

0xe3f9,	// (0x00045a96) slider_set_pane_vc_g6

0xe414,	// (0x00045ab1) slider_set_pane_vc_g7

0xe5c4,	// (0x00045c61) slider_form_pane_vc_g1

0xe5cd,	// (0x00045c6a) slider_form_pane_vc_g2

0xe5d6,	// (0x00045c73) slider_form_pane_vc_g3

0xe5c4,	// (0x00045c61) slider_form_pane_vc_g4

0xe5df,	// (0x00045c7c) slider_form_pane_vc_g5

0x0004,

0xfa8d,	// (0x0004712a) slider_form_pane_vc_g

0xb27d,	// (0x0004291a) main_idle_act3_pane

0x45f4,	// (0x0003bc91) ai3_links_pane

0xb082,	// (0x0004271f) popup_ai3_data_window_ParamLimits

0xb082,	// (0x0004271f) popup_ai3_data_window

0xb27d,	// (0x0004291a) grid_ai3_links_pane

0xb09a,	// (0x00042737) cell_ai3_links_pane_ParamLimits

0xb09a,	// (0x00042737) cell_ai3_links_pane

0x45fd,	// (0x0003bc9a) bg_popup_sub_pane_cp11

0x460a,	// (0x0003bca7) cell_ai3_links_pane_g1

0xb27d,	// (0x0004291a) bg_popup_sub_pane_cp12

0x462f,	// (0x0003bccc) heading_ai3_data_pane

0x4637,	// (0x0003bcd4) list_ai3_gene_pane

0x4643,	// (0x0003bce0) popup_ai3_data_window_g1

0x464b,	// (0x0003bce8) heading_ai3_data_pane_g1

0x4653,	// (0x0003bcf0) heading_ai3_data_pane_t1

0x4661,	// (0x0003bcfe) list_double_ai3_gene_pane_ParamLimits

0x4661,	// (0x0003bcfe) list_double_ai3_gene_pane

0x466e,	// (0x0003bd0b) list_single_ai3_gene_pane_ParamLimits

0x466e,	// (0x0003bd0b) list_single_ai3_gene_pane

0xebb1,	// (0x0004624e) list_highlight_pane_cp7_ParamLimits

0xebb1,	// (0x0004624e) list_highlight_pane_cp7

0x467b,	// (0x0003bd18) list_single_a13_gene_pane_t1_ParamLimits

0x467b,	// (0x0003bd18) list_single_a13_gene_pane_t1

0x4692,	// (0x0003bd2f) list_single_ai3_gene_pane_g1

0x469b,	// (0x0003bd38) list_single_ai3_gene_pane_g2

0x0001,

0xfccf,	// (0x0004736c) list_single_ai3_gene_pane_g

0x46a3,	// (0x0003bd40) list_double_ai3_gene_pane_g1_ParamLimits

0x46a3,	// (0x0003bd40) list_double_ai3_gene_pane_g1

0x46af,	// (0x0003bd4c) list_double_ai3_gene_pane_t1_ParamLimits

0x46af,	// (0x0003bd4c) list_double_ai3_gene_pane_t1

0x46cb,	// (0x0003bd68) list_double_ai3_gene_pane_t2_ParamLimits

0x46cb,	// (0x0003bd68) list_double_ai3_gene_pane_t2

0x46e0,	// (0x0003bd7d) list_double_ai3_gene_pane_t3_ParamLimits

0x46e0,	// (0x0003bd7d) list_double_ai3_gene_pane_t3

0x0002,

0xfcd4,	// (0x00047371) list_double_ai3_gene_pane_t_ParamLimits

0xfcd4,	// (0x00047371) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1173,	// (0x00038810) aid_size_min_col_2

0xb06c,	// (0x00042709) aid_size_min_msg_ParamLimits

0xb06c,	// (0x00042709) aid_size_min_msg

0xaebc,	// (0x00042559) fep_vkb_top_text_pane_g2_ParamLimits

0xaebc,	// (0x00042559) fep_vkb_top_text_pane_g2

0x0001,

0xfb40,	// (0x000471dd) fep_vkb_top_text_pane_g_ParamLimits

0xfb40,	// (0x000471dd) fep_vkb_top_text_pane_g

0xb27d,	// (0x0004291a) main_hc_apps_shell_pane

0x46fd,	// (0x0003bd9a) grid_hc_apps_pane_ParamLimits

0x46fd,	// (0x0003bd9a) grid_hc_apps_pane

0x470c,	// (0x0003bda9) list_hc_apps_pane

0x4714,	// (0x0003bdb1) scroll_pane_cp37_ParamLimits

0x4714,	// (0x0003bdb1) scroll_pane_cp37

0xb0b4,	// (0x00042751) cell_hc_apps_pane_ParamLimits

0xb0b4,	// (0x00042751) cell_hc_apps_pane

0xb172,	// (0x0004280f) cell_hc_apps_pane_g1_ParamLimits

0xb172,	// (0x0004280f) cell_hc_apps_pane_g1

0x4720,	// (0x0003bdbd) cell_hc_apps_pane_g2_ParamLimits

0x4720,	// (0x0003bdbd) cell_hc_apps_pane_g2

0x473c,	// (0x0003bdd9) cell_hc_apps_pane_g3_ParamLimits

0x473c,	// (0x0003bdd9) cell_hc_apps_pane_g3

0x0002,

0xfcdb,	// (0x00047378) cell_hc_apps_pane_g_ParamLimits

0xfcdb,	// (0x00047378) cell_hc_apps_pane_g

0xb19f,	// (0x0004283c) cell_hc_apps_pane_t1_ParamLimits

0xb19f,	// (0x0004283c) cell_hc_apps_pane_t1

0xb420,	// (0x00042abd) grid_highlight_pane_cp10_ParamLimits

0xb420,	// (0x00042abd) grid_highlight_pane_cp10

0xb1dd,	// (0x0004287a) list_single_hc_apps_pane_ParamLimits

0xb1dd,	// (0x0004287a) list_single_hc_apps_pane

0xb20e,	// (0x000428ab) list_single_hc_apps_pane_g1

0x9528,	// (0x00040bc5) list_single_hc_apps_pane_g2

0x0001,

0xfce2,	// (0x0004737f) list_single_hc_apps_pane_g

0x9541,	// (0x00040bde) list_single_hc_apps_pane_g2_copy1

0x83ca,	// (0x0003fa67) list_single_hc_apps_pane_t1

0xb2ed,	// (0x0004298a) bg_set_opt_pane_cp_ParamLimits

0x1741,	// (0x00038dde) setting_slider_pane_t1_ParamLimits

0x175a,	// (0x00038df7) setting_slider_pane_t2_ParamLimits

0x1774,	// (0x00038e11) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00046c01) setting_slider_pane_t_ParamLimits

0x178c,	// (0x00038e29) slider_set_pane_ParamLimits

0x2277,	// (0x00039914) control_pane_g5_ParamLimits

0x2277,	// (0x00039914) control_pane_g5

0xdecf,	// (0x0004556c) slider_set_pane_g1_ParamLimits

0x326f,	// (0x0003a90c) slider_set_pane_g2_ParamLimits

0xe89b,	// (0x00045f38) slider_set_pane_g3_ParamLimits

0xe8af,	// (0x00045f4c) slider_set_pane_g4_ParamLimits

0xe8c7,	// (0x00045f64) slider_set_pane_g5_ParamLimits

0xe89b,	// (0x00045f38) slider_set_pane_g6_ParamLimits

0x327b,	// (0x0003a918) slider_set_pane_g7_ParamLimits

0xf965,	// (0x00047002) slider_set_pane_g_ParamLimits

0xc865,	// (0x00043f02) navi_icon_text_pane_ParamLimits

0xa263,	// (0x00041900) aid_fill_nsta_2_ParamLimits

0xa29a,	// (0x00041937) aid_touch_tab_arrow_left_ParamLimits

0xa2b0,	// (0x0004194d) aid_touch_tab_arrow_right_ParamLimits

0xa34b,	// (0x000419e8) clock_nsta_pane_ParamLimits

0xda4a,	// (0x000450e7) navi_icon_pane_g1_ParamLimits

0xa83e,	// (0x00041edb) navi_text_pane_t1_ParamLimits

0xe923,	// (0x00045fc0) navi_icon_text_pane_g1_ParamLimits

0xe92f,	// (0x00045fcc) navi_icon_text_pane_t1_ParamLimits

0xb20e,	// (0x000428ab) list_single_hc_apps_pane_g1_ParamLimits

0x9528,	// (0x00040bc5) list_single_hc_apps_pane_g2_ParamLimits

0xfce2,	// (0x0004737f) list_single_hc_apps_pane_g_ParamLimits

0x9541,	// (0x00040bde) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x83ca,	// (0x0003fa67) list_single_hc_apps_pane_t1_ParamLimits

0x854a,	// (0x0003fbe7) popup_toolbar2_fixed_window_ParamLimits

0x854a,	// (0x0003fbe7) popup_toolbar2_fixed_window

0x9230,	// (0x000408cd) popup_toolbar2_float_window

0xb27d,	// (0x0004291a) bg_popup_sub_pane_cp27

0x4793,	// (0x0003be30) grid_toolbar2_float_pane

0xb27d,	// (0x0004291a) bg_popup_sub_pane_cp26

0x4793,	// (0x0003be30) grid_toolbar2_fixed_pane

0xb227,	// (0x000428c4) cell_toolbar2_fixed_pane_ParamLimits

0xb227,	// (0x000428c4) cell_toolbar2_fixed_pane

0xb242,	// (0x000428df) cell_toolbar2_fixed_pane_g1

0xcd75,	// (0x00044412) toolbar2_fixed_button_pane

0xce07,	// (0x000444a4) toolbar2_fixed_button_pane_g1

0xce0f,	// (0x000444ac) toolbar2_fixed_button_pane_g2

0xce17,	// (0x000444b4) toolbar2_fixed_button_pane_g3

0xce1f,	// (0x000444bc) toolbar2_fixed_button_pane_g4

0xce27,	// (0x000444c4) toolbar2_fixed_button_pane_g5

0xce2f,	// (0x000444cc) toolbar2_fixed_button_pane_g6

0xce37,	// (0x000444d4) toolbar2_fixed_button_pane_g7

0xce3f,	// (0x000444dc) toolbar2_fixed_button_pane_g8

0xce47,	// (0x000444e4) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x00046f04) toolbar2_fixed_button_pane_g

0x479b,	// (0x0003be38) cell_toolbar2_float_pane_ParamLimits

0x479b,	// (0x0003be38) cell_toolbar2_float_pane

0x47af,	// (0x0003be4c) cell_toolbar2_float_pane_g1

0xcd75,	// (0x00044412) toolbar2_fixed_button_pane_cp

0xada4,	// (0x00042441) fep_vkb_accented_list_pane_ParamLimits

0xada4,	// (0x00042441) fep_vkb_accented_list_pane

0x3e0c,	// (0x0003b4a9) bg_popup_fep_shadow_pane_g9

0xc9c1,	// (0x0004405e) bg_popup_fep_shadow_pane_cp3

0xc103,	// (0x000437a0) list_accented_list_pane

0x47b8,	// (0x0003be55) list_single_accented_list_pane_ParamLimits

0x47b8,	// (0x0003be55) list_single_accented_list_pane

0xc9c1,	// (0x0004405e) list_highlight_pane_cp10

0x47c9,	// (0x0003be66) list_single_accented_list_pane_t1

0x915a,	// (0x000407f7) popup_slider_window_ParamLimits

0x915a,	// (0x000407f7) popup_slider_window

0x4581,	// (0x0003bc1e) aid_indentation_list_msg

0xb9fa,	// (0x00043097) bg_popup_window_pane_cp19

0x4835,	// (0x0003bed2) popup_slider_window_g1

0x4851,	// (0x0003beee) popup_slider_window_g2

0x486d,	// (0x0003bf0a) popup_slider_window_g3

0x0005,

0xfce7,	// (0x00047384) popup_slider_window_g

0x4889,	// (0x0003bf26) popup_slider_window_t1

0x48cf,	// (0x0003bf6c) small_volume_slider_vertical_pane

0xebec,	// (0x00046289) small_volume_slider_vertical_pane_g1

0xebec,	// (0x00046289) small_volume_slider_vertical_pane_g2

0x48eb,	// (0x0003bf88) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf9,	// (0x00047396) small_volume_slider_vertical_pane_g

0x84b8,	// (0x0003fb55) area_side_right_pane_ParamLimits

0x84b8,	// (0x0003fb55) area_side_right_pane

0x955d,	// (0x00040bfa) aid_size_side_button_ParamLimits

0x955d,	// (0x00040bfa) aid_size_side_button

0x9576,	// (0x00040c13) grid_sctrl_middle_pane_ParamLimits

0x9576,	// (0x00040c13) grid_sctrl_middle_pane

0x4927,	// (0x0003bfc4) sctrl_sk_bottom_pane

0x4938,	// (0x0003bfd5) sctrl_sk_top_pane

0x494a,	// (0x0003bfe7) aid_touch_sctrl_top

0xb420,	// (0x00042abd) bg_sctrl_sk_pane_ParamLimits

0xb420,	// (0x00042abd) bg_sctrl_sk_pane

0x4957,	// (0x0003bff4) sctrl_sk_top_pane_g1

0x4964,	// (0x0003c001) sctrl_sk_top_pane_t1

0x494a,	// (0x0003bfe7) aid_touch_sctrl_bottom

0xb420,	// (0x00042abd) bg_sctrl_sk_pane_cp_ParamLimits

0xb420,	// (0x00042abd) bg_sctrl_sk_pane_cp

0x497f,	// (0x0003c01c) sctrl_sk_bottom_pane_g1

0x4964,	// (0x0003c001) sctrl_sk_bottom_pane_t1

0x9590,	// (0x00040c2d) cell_sctrl_middle_pane_ParamLimits

0x9590,	// (0x00040c2d) cell_sctrl_middle_pane

0x95a1,	// (0x00040c3e) aid_touch_sctrl_middle_ParamLimits

0x95a1,	// (0x00040c3e) aid_touch_sctrl_middle

0x95ae,	// (0x00040c4b) bg_sctrl_middle_pane_ParamLimits

0x95ae,	// (0x00040c4b) bg_sctrl_middle_pane

0x49d9,	// (0x0003c076) cell_sctrl_middle_pane_g1_ParamLimits

0x49d9,	// (0x0003c076) cell_sctrl_middle_pane_g1

0x95bc,	// (0x00040c59) cell_sctrl_middle_pane_g2_ParamLimits

0x95bc,	// (0x00040c59) cell_sctrl_middle_pane_g2

0x0001,

0xfd05,	// (0x000473a2) cell_sctrl_middle_pane_g_ParamLimits

0xfd05,	// (0x000473a2) cell_sctrl_middle_pane_g

0xce07,	// (0x000444a4) bg_sctrl_middle_pane_g1

0xce0f,	// (0x000444ac) bg_sctrl_middle_pane_g2

0xce17,	// (0x000444b4) bg_sctrl_middle_pane_g3

0xce1f,	// (0x000444bc) bg_sctrl_middle_pane_g4

0xce27,	// (0x000444c4) bg_sctrl_middle_pane_g5

0xce2f,	// (0x000444cc) bg_sctrl_middle_pane_g6

0xce37,	// (0x000444d4) bg_sctrl_middle_pane_g7

0xce3f,	// (0x000444dc) bg_sctrl_middle_pane_g8

0x0007,

0xfd0a,	// (0x000473a7) bg_sctrl_middle_pane_g

0xce47,	// (0x000444e4) bg_sctrl_middle_pane_g8_copy1

0xce07,	// (0x000444a4) bg_sctrl_sk_pane_g1

0xce0f,	// (0x000444ac) bg_sctrl_sk_pane_g2

0xce17,	// (0x000444b4) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x00046f04) bg_sctrl_sk_pane_g

0xb86d,	// (0x00042f0a) aid_size_touch_scroll_bar

0xce1f,	// (0x000444bc) bg_sctrl_sk_pane_g4

0xce27,	// (0x000444c4) bg_sctrl_sk_pane_g5

0xce2f,	// (0x000444cc) bg_sctrl_sk_pane_g6

0xce37,	// (0x000444d4) bg_sctrl_sk_pane_g7

0xce3f,	// (0x000444dc) bg_sctrl_sk_pane_g8

0xce47,	// (0x000444e4) bg_sctrl_sk_pane_g9

0x2446,	// (0x00039ae3) popup_fep_china_hwr2_fs_candidate_window

0x8c88,	// (0x00040325) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8c88,	// (0x00040325) popup_fep_china_hwr2_fs_control_window

0xed7d,	// (0x0004641a) sctrl_sk_top_pane_g2

0x0001,

0xfd00,	// (0x0004739d) sctrl_sk_top_pane_g

0xbab2,	// (0x0004314f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xbab2,	// (0x0004314f) aid_fep_china_hwr2_fs_cell

0xbac6,	// (0x00043163) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xbac6,	// (0x00043163) bg_popup_fep_shadow_pane_cp4

0xbadd,	// (0x0004317a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xbadd,	// (0x0004317a) bg_popup_fep_shadow_pane_cp5

0xbaef,	// (0x0004318c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xbaef,	// (0x0004318c) popup_fep_china_hwr2_fs_control_bar_grid

0xbb03,	// (0x000431a0) popup_fep_china_hwr2_fs_control_funtion_grid

0x49c5,	// (0x0003c062) aid_fep_china_hwr2_fs_candi_cell

0xb27d,	// (0x0004291a) bg_popup_fep_shadow_pane_cp6

0x49cf,	// (0x0003c06c) popup_fep_china_hwr2_fs_candidate_grid

0xbb0b,	// (0x000431a8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xbb0b,	// (0x000431a8) cell_fep_china_hwr2_fs_funtion_grid

0xebec,	// (0x00046289) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x49d9,	// (0x0003c076) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x49d9,	// (0x0003c076) cell_fep_china_hwr2_fs_funtion_grid_g1

0x49e7,	// (0x0003c084) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x49e7,	// (0x0003c084) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1b,	// (0x000473b8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1b,	// (0x000473b8) cell_fep_china_hwr2_fs_funtion_grid_g

0xbb23,	// (0x000431c0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xbb23,	// (0x000431c0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xbb38,	// (0x000431d5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xbb38,	// (0x000431d5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd20,	// (0x000473bd) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd20,	// (0x000473bd) cell_fep_china_hwr2_fs_funtion_grid_t

0x49fd,	// (0x0003c09a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4a05,	// (0x0003c0a2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4a0d,	// (0x0003c0aa) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd25,	// (0x000473c2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4a15,	// (0x0003c0b2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4a15,	// (0x0003c0b2) cell_fep_china_hwr2_fs_candidate_grid

0x4a2e,	// (0x0003c0cb) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4a36,	// (0x0003c0d3) popup_fep_china_hwr2_fs_candidate_grid_g21

0xebec,	// (0x00046289) cell_fep_china_hwr2_fs_candidate_grid_g1

0xebec,	// (0x00046289) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb45,	// (0x000471e2) cell_fep_china_hwr2_fs_candidate_grid_g

0x4a3e,	// (0x0003c0db) cell_fep_china_hwr2_fs_candidate_grid_t1

0xcc42,	// (0x000442df) clock_nsta_pane_cp_24_ParamLimits

0xcc42,	// (0x000442df) clock_nsta_pane_cp_24

0xccaa,	// (0x00044347) indicator_nsta_pane_cp_24_ParamLimits

0xccaa,	// (0x00044347) indicator_nsta_pane_cp_24

0xd968,	// (0x00045005) heading_pane_g1

0x0001,

0xf8cc,	// (0x00046f69) heading_pane_g

0xe010,	// (0x000456ad) grid_sct_catagory_button_pane

0xdb30,	// (0x000451cd) scroll_pane_cp5_ParamLimits

0xe955,	// (0x00045ff2) button_value_adjust_pane_cp5_ParamLimits

0xe955,	// (0x00045ff2) button_value_adjust_pane_cp5

0xea13,	// (0x000460b0) form2_midp_time_pane_ParamLimits

0x4a4c,	// (0x0003c0e9) cell_sct_catagory_button_pane_ParamLimits

0x4a4c,	// (0x0003c0e9) cell_sct_catagory_button_pane

0xebb1,	// (0x0004624e) bg_button_pane_cp01_ParamLimits

0xebb1,	// (0x0004624e) bg_button_pane_cp01

0xebec,	// (0x00046289) cell_sct_catagory_button_pane_g1

0x91d3,	// (0x00040870) popup_tb_extension_window

0xbb54,	// (0x000431f1) aid_size_cell_ext_ParamLimits

0xbb54,	// (0x000431f1) aid_size_cell_ext

0xb6af,	// (0x00042d4c) bg_tb_trans_pane_cp1_ParamLimits

0xb6af,	// (0x00042d4c) bg_tb_trans_pane_cp1

0xbb7a,	// (0x00043217) grid_tb_ext_pane_ParamLimits

0xbb7a,	// (0x00043217) grid_tb_ext_pane

0xbbbc,	// (0x00043259) cell_tb_ext_pane_ParamLimits

0xbbbc,	// (0x00043259) cell_tb_ext_pane

0xbbe4,	// (0x00043281) cell_tb_ext_pane_g1_ParamLimits

0xbbe4,	// (0x00043281) cell_tb_ext_pane_g1

0x4a5e,	// (0x0003c0fb) cell_tb_ext_pane_t1

0xb420,	// (0x00042abd) list_highlight_pane_cp11_ParamLimits

0xb420,	// (0x00042abd) list_highlight_pane_cp11

0x15ae,	// (0x00038c4b) popup_uni_indicator_window_ParamLimits

0x15ae,	// (0x00038c4b) popup_uni_indicator_window

0xbff0,	// (0x0004368d) bg_popup_sub_pane_cp14

0x4a79,	// (0x0003c116) list_uniindi_pane

0x4a85,	// (0x0003c122) uniindi_top_pane

0xb420,	// (0x00042abd) bg_uniindi_top_pane

0x4aa4,	// (0x0003c141) uniindi_top_pane_g1

0x4aba,	// (0x0003c157) uniindi_top_pane_g2

0x0003,

0xfd2c,	// (0x000473c9) uniindi_top_pane_g

0x4ae4,	// (0x0003c181) uniindi_top_pane_t1

0x4b0e,	// (0x0003c1ab) list_single_uniindi_pane_ParamLimits

0x4b0e,	// (0x0003c1ab) list_single_uniindi_pane

0xebec,	// (0x00046289) bg_uniindi_top_pane_g1

0x4b21,	// (0x0003c1be) list_single_uniindi_pane_g1

0x4b34,	// (0x0003c1d1) list_single_uniindi_pane_t1

0xb27d,	// (0x0004291a) control_bg_pane

0x4b59,	// (0x0003c1f6) bg_sctrl_sk_pane_cp1

0x4b62,	// (0x0003c1ff) bg_sctrl_sk_pane_cp2

0x4b6b,	// (0x0003c208) control_bg_pane_g1

0x4b74,	// (0x0003c211) control_bg_pane_g2

0x0001,

0xfd35,	// (0x000473d2) control_bg_pane_g

0xe7d7,	// (0x00045e74) cell_indicator_nsta_pane_g1_ParamLimits

0xac12,	// (0x000422af) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa9,	// (0x00047146) cell_indicator_nsta_pane_g_ParamLimits

0x0fd4,	// (0x00038671) form2_midp_time_pane_t1_ParamLimits

0x3a2d,	// (0x0003b0ca) main_idle_act4_pane_ParamLimits

0x3a2d,	// (0x0003b0ca) main_idle_act4_pane

0x91d3,	// (0x00040870) popup_tb_extension_window_ParamLimits

0xbba2,	// (0x0004323f) tb_ext_find_pane_ParamLimits

0xbba2,	// (0x0004323f) tb_ext_find_pane

0x4b7d,	// (0x0003c21a) ai_gene_pane_1_cp1

0xca55,	// (0x000440f2) ai_gene_pane_2_cp1

0x4b85,	// (0x0003c222) list_single_idle_plugin_calendar_pane

0x4b8e,	// (0x0003c22b) list_single_idle_plugin_notification_pane

0x4b97,	// (0x0003c234) list_single_idle_plugin_player_pane

0xbc01,	// (0x0004329e) list_single_idle_plugin_shortcut_pane_ParamLimits

0xbc01,	// (0x0004329e) list_single_idle_plugin_shortcut_pane

0xbc29,	// (0x000432c6) main_idle_act4_pane_t1

0xbc3f,	// (0x000432dc) main_idle_act4_pane_t2

0x0001,

0xfd3a,	// (0x000473d7) main_idle_act4_pane_t

0xbc57,	// (0x000432f4) middle_sk_idle_act4_pane_ParamLimits

0xbc57,	// (0x000432f4) middle_sk_idle_act4_pane

0xbc73,	// (0x00043310) popup_clock_digital_analogue_window_cp2

0xbc9a,	// (0x00043337) shortcut_wheel_idle_act4_pane_ParamLimits

0xbc9a,	// (0x00043337) shortcut_wheel_idle_act4_pane

0xebec,	// (0x00046289) shortcut_wheel_idle_act4_pane_g1

0xebec,	// (0x00046289) shortcut_wheel_idle_act4_pane_g2

0xebec,	// (0x00046289) shortcut_wheel_idle_act4_pane_g3

0xebec,	// (0x00046289) shortcut_wheel_idle_act4_pane_g4

0xebec,	// (0x00046289) shortcut_wheel_idle_act4_pane_g5

0x4ba0,	// (0x0003c23d) shortcut_wheel_idle_act4_pane_g6

0x4ba8,	// (0x0003c245) shortcut_wheel_idle_act4_pane_g7

0x4bb0,	// (0x0003c24d) shortcut_wheel_idle_act4_pane_g8

0x4bb8,	// (0x0003c255) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3f,	// (0x000473dc) shortcut_wheel_idle_act4_pane_g

0x57bc,	// (0x0003ce59) middle_sk_idle_act4_pane_g1_ParamLimits

0x57bc,	// (0x0003ce59) middle_sk_idle_act4_pane_g1

0xbd17,	// (0x000433b4) middle_sk_idle_act4_pane_g2_ParamLimits

0xbd17,	// (0x000433b4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd62,	// (0x000473ff) middle_sk_idle_act4_pane_g_ParamLimits

0xfd62,	// (0x000473ff) middle_sk_idle_act4_pane_g

0xbd2f,	// (0x000433cc) middle_sk_idle_act4_pane_t1_ParamLimits

0xbd2f,	// (0x000433cc) middle_sk_idle_act4_pane_t1

0xbd5e,	// (0x000433fb) grid_ai_shortcut_pane_ParamLimits

0xbd5e,	// (0x000433fb) grid_ai_shortcut_pane

0xbd7b,	// (0x00043418) list_highlight_pane_cp16_ParamLimits

0xbd7b,	// (0x00043418) list_highlight_pane_cp16

0xbd88,	// (0x00043425) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xbd88,	// (0x00043425) list_single_idle_plugin_shortcut_pane_g1

0xbd94,	// (0x00043431) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xbd94,	// (0x00043431) list_single_idle_plugin_shortcut_pane_g2

0xbdb0,	// (0x0004344d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xbdb0,	// (0x0004344d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd67,	// (0x00047404) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd67,	// (0x00047404) list_single_idle_plugin_shortcut_pane_g

0xbdc5,	// (0x00043462) cell_ai_shortcut_pane_ParamLimits

0xbdc5,	// (0x00043462) cell_ai_shortcut_pane

0xbddb,	// (0x00043478) cell_ai_shortcut_pane_g1_ParamLimits

0xbddb,	// (0x00043478) cell_ai_shortcut_pane_g1

0x4b7d,	// (0x0003c21a) ai_gene_pane_1_cp2

0x4bc0,	// (0x0003c25d) ai_gene_pane_2_cp2

0x4bc8,	// (0x0003c265) list_highlight_pane_cp15

0x4bd1,	// (0x0003c26e) list_single_idle_plugin_calendar_pane_g1

0x4bc8,	// (0x0003c265) list_highlight_pane_cp17

0x4bd9,	// (0x0003c276) list_single_idle_plugin_calendar_pane_g1_copy1

0x4be1,	// (0x0003c27e) list_single_idle_plugin_player_pane_g1

0xe223,	// (0x000458c0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6e,	// (0x0004740b) list_single_idle_plugin_player_pane_g

0x4be9,	// (0x0003c286) list_single_idle_plugin_player_pane_t1

0x4bf7,	// (0x0003c294) list_single_idle_plugin_player_pane_t2

0x4c05,	// (0x0003c2a2) list_single_idle_plugin_player_pane_t3

0x4c13,	// (0x0003c2b0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd73,	// (0x00047410) list_single_idle_plugin_player_pane_t

0x4c21,	// (0x0003c2be) wait_bar_pane_cp15

0x4c29,	// (0x0003c2c6) grid_ai_notification_pane

0xe223,	// (0x000458c0) list_single_idle_plugin_notification_pane_g1

0xbdfd,	// (0x0004349a) cell_ai_notification_pane_ParamLimits

0xbdfd,	// (0x0004349a) cell_ai_notification_pane

0x4c32,	// (0x0003c2cf) cell_ai_notification_pane_g1

0x4c3a,	// (0x0003c2d7) cell_ai_notification_pane_t1

0xbe0a,	// (0x000434a7) tb_ext_find_button_pane

0xbe12,	// (0x000434af) tb_ext_find_pane_g1

0xbe1a,	// (0x000434b7) tb_ext_find_pane_t1

0xc51f,	// (0x00043bbc) tb_ext_find_button_pane_g1

0x5de8,	// (0x0003d485) tb_ext_find_button_pane_g2

0x0001,

0xfd7c,	// (0x00047419) tb_ext_find_button_pane_g

0xbc29,	// (0x000432c6) main_idle_act4_pane_t1_ParamLimits

0xbc3f,	// (0x000432dc) main_idle_act4_pane_t2_ParamLimits

0xfd3a,	// (0x000473d7) main_idle_act4_pane_t_ParamLimits

0xbc73,	// (0x00043310) popup_clock_digital_analogue_window_cp2_ParamLimits

0xbc8a,	// (0x00043327) sat_plugin_idle_act4_pane_ParamLimits

0xbc8a,	// (0x00043327) sat_plugin_idle_act4_pane

0xbe28,	// (0x000434c5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xbe28,	// (0x000434c5) sat_plugin_idle_act4_pane_t1

0xbe40,	// (0x000434dd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xbe40,	// (0x000434dd) sat_plugin_idle_act4_pane_t2

0xbe58,	// (0x000434f5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xbe58,	// (0x000434f5) sat_plugin_idle_act4_pane_t3

0xbe70,	// (0x0004350d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xbe70,	// (0x0004350d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd81,	// (0x0004741e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd81,	// (0x0004741e) sat_plugin_idle_act4_pane_t

0x14f7,	// (0x00038b94) popup_battery_window_ParamLimits

0x14f7,	// (0x00038b94) popup_battery_window

0xb420,	// (0x00042abd) bg_popup_sub_pane_cp25_ParamLimits

0xb420,	// (0x00042abd) bg_popup_sub_pane_cp25

0x5df1,	// (0x0003d48e) popup_battery_window_g1_ParamLimits

0x5df1,	// (0x0003d48e) popup_battery_window_g1

0x5dfd,	// (0x0003d49a) popup_battery_window_t1_ParamLimits

0x5dfd,	// (0x0003d49a) popup_battery_window_t1

0x5e0f,	// (0x0003d4ac) popup_battery_window_t2_ParamLimits

0x5e0f,	// (0x0003d4ac) popup_battery_window_t2

0x0001,

0xfd8a,	// (0x00047427) popup_battery_window_t_ParamLimits

0xfd8a,	// (0x00047427) popup_battery_window_t

0xa167,	// (0x00041804) midp_canvas_pane_ParamLimits

0xa1c4,	// (0x00041861) midp_keypad_pane_ParamLimits

0xa1c4,	// (0x00041861) midp_keypad_pane

0xc155,	// (0x000437f2) main_midp_pane_ParamLimits

0xe8ec,	// (0x00045f89) signal_pane_g2_cp_ParamLimits

0xbe88,	// (0x00043525) aid_size_cell_midp_keypad_ParamLimits

0xbe88,	// (0x00043525) aid_size_cell_midp_keypad

0xbea6,	// (0x00043543) midp_keyp_game_grid_pane_ParamLimits

0xbea6,	// (0x00043543) midp_keyp_game_grid_pane

0xbecd,	// (0x0004356a) midp_keyp_rocker_pane_ParamLimits

0xbecd,	// (0x0004356a) midp_keyp_rocker_pane

0xbf16,	// (0x000435b3) midp_keyp_sk_left_pane_ParamLimits

0xbf16,	// (0x000435b3) midp_keyp_sk_left_pane

0xbf68,	// (0x00043605) midp_keyp_sk_right_pane_ParamLimits

0xbf68,	// (0x00043605) midp_keyp_sk_right_pane

0xb27d,	// (0x0004291a) bg_button_pane_cp03

0xbfba,	// (0x00043657) midp_keyp_sk_left_pane_g1

0xb27d,	// (0x0004291a) bg_button_pane_cp04

0xbfba,	// (0x00043657) midp_keyp_sk_right_pane_g1

0xebec,	// (0x00046289) midp_keyp_rocker_pane_g1

0xbfc3,	// (0x00043660) keyp_game_cell_pane_ParamLimits

0xbfc3,	// (0x00043660) keyp_game_cell_pane

0xb27d,	// (0x0004291a) bg_button_pane_cp02

0xbfe7,	// (0x00043684) keyp_game_cell_pane_g1

0x84fa,	// (0x0003fb97) popup_fep_vkb2_window_ParamLimits

0x84fa,	// (0x0003fb97) popup_fep_vkb2_window

0x95c8,	// (0x00040c65) aid_size_cell_vkb2_ParamLimits

0x95c8,	// (0x00040c65) aid_size_cell_vkb2

0x95fe,	// (0x00040c9b) popup_fep_vkb2_window_g1_ParamLimits

0x95fe,	// (0x00040c9b) popup_fep_vkb2_window_g1

0x964e,	// (0x00040ceb) vkb2_area_bottom_pane_ParamLimits

0x964e,	// (0x00040ceb) vkb2_area_bottom_pane

0x96a2,	// (0x00040d3f) vkb2_area_keypad_pane_ParamLimits

0x96a2,	// (0x00040d3f) vkb2_area_keypad_pane

0x96ea,	// (0x00040d87) vkb2_area_top_pane_ParamLimits

0x96ea,	// (0x00040d87) vkb2_area_top_pane

0x9770,	// (0x00040e0d) vkb2_top_entry_pane_ParamLimits

0x9770,	// (0x00040e0d) vkb2_top_entry_pane

0x979d,	// (0x00040e3a) vkb2_top_grid_left_pane_ParamLimits

0x979d,	// (0x00040e3a) vkb2_top_grid_left_pane

0x97bd,	// (0x00040e5a) vkb2_top_grid_right_pane_ParamLimits

0x97bd,	// (0x00040e5a) vkb2_top_grid_right_pane

0x4e60,	// (0x0003c4fd) vkb2_cell_keypad_pane_ParamLimits

0x4e60,	// (0x0003c4fd) vkb2_cell_keypad_pane

0x9803,	// (0x00040ea0) vkb2_area_bottom_grid_pane_ParamLimits

0x9803,	// (0x00040ea0) vkb2_area_bottom_grid_pane

0x982d,	// (0x00040eca) vkb2_area_bottom_pane_g1_ParamLimits

0x982d,	// (0x00040eca) vkb2_area_bottom_pane_g1

0x9853,	// (0x00040ef0) vkb2_area_bottom_pane_g2_ParamLimits

0x9853,	// (0x00040ef0) vkb2_area_bottom_pane_g2

0x9884,	// (0x00040f21) vkb2_area_bottom_pane_g3_ParamLimits

0x9884,	// (0x00040f21) vkb2_area_bottom_pane_g3

0x0002,

0xfd8f,	// (0x0004742c) vkb2_area_bottom_pane_g_ParamLimits

0xfd8f,	// (0x0004742c) vkb2_area_bottom_pane_g

0x500a,	// (0x0003c6a7) vkb2_top_cell_left_pane_ParamLimits

0x500a,	// (0x0003c6a7) vkb2_top_cell_left_pane

0x98ee,	// (0x00040f8b) vkb2_top_entry_pane_g1_ParamLimits

0x98ee,	// (0x00040f8b) vkb2_top_entry_pane_g1

0x98fc,	// (0x00040f99) vkb2_top_entry_pane_t1_ParamLimits

0x98fc,	// (0x00040f99) vkb2_top_entry_pane_t1

0x5e34,	// (0x0003d4d1) vkb2_top_entry_pane_t2_ParamLimits

0x5e34,	// (0x0003d4d1) vkb2_top_entry_pane_t2

0x5e66,	// (0x0003d503) vkb2_top_entry_pane_t3_ParamLimits

0x5e66,	// (0x0003d503) vkb2_top_entry_pane_t3

0x0002,

0xfd96,	// (0x00047433) vkb2_top_entry_pane_t_ParamLimits

0xfd96,	// (0x00047433) vkb2_top_entry_pane_t

0x9935,	// (0x00040fd2) vkb2_top_grid_right_pane_g1_ParamLimits

0x9935,	// (0x00040fd2) vkb2_top_grid_right_pane_g1

0x506d,	// (0x0003c70a) vkb2_top_grid_right_pane_g2_ParamLimits

0x506d,	// (0x0003c70a) vkb2_top_grid_right_pane_g2

0x5085,	// (0x0003c722) vkb2_top_grid_right_pane_g3_ParamLimits

0x5085,	// (0x0003c722) vkb2_top_grid_right_pane_g3

0x994b,	// (0x00040fe8) vkb2_top_grid_right_pane_g4_ParamLimits

0x994b,	// (0x00040fe8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9d,	// (0x0004743a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9d,	// (0x0004743a) vkb2_top_grid_right_pane_g

0x50b3,	// (0x0003c750) vkb2_top_cell_left_pane_g1

0x50ca,	// (0x0003c767) vkb2_cell_keypad_pane_g1_ParamLimits

0x50ca,	// (0x0003c767) vkb2_cell_keypad_pane_g1

0x5e8a,	// (0x0003d527) vkb2_cell_keypad_pane_t1_ParamLimits

0x5e8a,	// (0x0003d527) vkb2_cell_keypad_pane_t1

0x50d8,	// (0x0003c775) vkb2_cell_bottom_grid_pane_ParamLimits

0x50d8,	// (0x0003c775) vkb2_cell_bottom_grid_pane

0x5111,	// (0x0003c7ae) vkb2_cell_bottom_grid_pane_g1

0xbcbb,	// (0x00043358) aid_call2_pane_cp02

0xbcc3,	// (0x00043360) aid_call_pane_cp02

0xbccb,	// (0x00043368) clock_digital_number_pane_cp10

0xbcd3,	// (0x00043370) clock_digital_number_pane_cp11

0xbcdb,	// (0x00043378) clock_digital_number_pane_cp12

0xbce3,	// (0x00043380) clock_digital_number_pane_cp13

0xbceb,	// (0x00043388) clock_digital_separator_pane_cp10

0xc51f,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g1

0xc51f,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g2

0xbcf3,	// (0x00043390) popup_clock_digital_analogue_window_cp2_g3

0xc51f,	// (0x00043bbc) popup_clock_digital_analogue_window_cp2_g4

0xbcf3,	// (0x00043390) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd52,	// (0x000473ef) popup_clock_digital_analogue_window_cp2_g

0xbcfb,	// (0x00043398) popup_clock_digital_analogue_window_cp2_t1

0xbd09,	// (0x000433a6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5d,	// (0x000473fa) popup_clock_digital_analogue_window_cp2_t

0xebec,	// (0x00046289) clock_digital_number_pane_cp10_g1

0xebec,	// (0x00046289) clock_digital_number_pane_cp10_g2

0x0001,

0xfb45,	// (0x000471e2) clock_digital_number_pane_cp10_g

0xebec,	// (0x00046289) clock_digital_separator_pane_cp10_g1

0xebec,	// (0x00046289) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb45,	// (0x000471e2) clock_digital_separator_pane_cp10_g

0x4ac6,	// (0x0003c163) uniindi_top_pane_g3

0x4ad7,	// (0x0003c174) uniindi_top_pane_g4

0x4eeb,	// (0x0003c588) vkb2_row_keypad_pane_ParamLimits

0x4eeb,	// (0x0003c588) vkb2_row_keypad_pane

0x5131,	// (0x0003c7ce) vkb2_cell_t_keypad_pane_ParamLimits

0x5131,	// (0x0003c7ce) vkb2_cell_t_keypad_pane

0x5141,	// (0x0003c7de) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5141,	// (0x0003c7de) vkb2_cell_t_keypad_pane_cp08

0x5154,	// (0x0003c7f1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5154,	// (0x0003c7f1) vkb2_cell_t_keypad_pane_cp09

0x5168,	// (0x0003c805) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5168,	// (0x0003c805) vkb2_cell_t_keypad_pane_cp01

0x5179,	// (0x0003c816) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5179,	// (0x0003c816) vkb2_cell_t_keypad_pane_cp02

0x518a,	// (0x0003c827) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x518a,	// (0x0003c827) vkb2_cell_t_keypad_pane_cp03

0x519b,	// (0x0003c838) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x519b,	// (0x0003c838) vkb2_cell_t_keypad_pane_cp04

0x51ac,	// (0x0003c849) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x51ac,	// (0x0003c849) vkb2_cell_t_keypad_pane_cp05

0x51bd,	// (0x0003c85a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x51bd,	// (0x0003c85a) vkb2_cell_t_keypad_pane_cp06

0x51ce,	// (0x0003c86b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x51ce,	// (0x0003c86b) vkb2_cell_t_keypad_pane_cp07

0x51df,	// (0x0003c87c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x51df,	// (0x0003c87c) vkb2_cell_t_keypad_pane_cp10

0xed7d,	// (0x0004641a) vkb2_cell_t_keypad_pane_g1

0x5ea1,	// (0x0003d53e) vkb2_cell_t_keypad_pane_t1

0xb27d,	// (0x0004291a) popup_grid_graphic2_window

0x9961,	// (0x00040ffe) aid_size_cell_graphic2_ParamLimits

0x9961,	// (0x00040ffe) aid_size_cell_graphic2

0x999f,	// (0x0004103c) bg_popup_window_pane_cp21_ParamLimits

0x999f,	// (0x0004103c) bg_popup_window_pane_cp21

0x99ad,	// (0x0004104a) graphic2_pages_pane_ParamLimits

0x99ad,	// (0x0004104a) graphic2_pages_pane

0x9a03,	// (0x000410a0) grid_graphic2_control_pane_ParamLimits

0x9a03,	// (0x000410a0) grid_graphic2_control_pane

0x9a4b,	// (0x000410e8) grid_graphic2_pane_ParamLimits

0x9a4b,	// (0x000410e8) grid_graphic2_pane

0x9ad2,	// (0x0004116f) cell_graphic2_pane

0xb27d,	// (0x0004291a) main_comp_mode_pane

0x4637,	// (0x0003bcd4) list_ai3_gene_pane_ParamLimits

0xb9fa,	// (0x00043097) bg_popup_window_pane_cp19_ParamLimits

0x47d7,	// (0x0003be74) bg_touch_area_indi_pane_ParamLimits

0x47d7,	// (0x0003be74) bg_touch_area_indi_pane

0x47ed,	// (0x0003be8a) bg_touch_area_indi_pane_cp01_ParamLimits

0x47ed,	// (0x0003be8a) bg_touch_area_indi_pane_cp01

0x4803,	// (0x0003bea0) bg_touch_area_indi_pane_cp02_ParamLimits

0x4803,	// (0x0003bea0) bg_touch_area_indi_pane_cp02

0x481b,	// (0x0003beb8) bg_touch_area_indi_pane_cp03_ParamLimits

0x481b,	// (0x0003beb8) bg_touch_area_indi_pane_cp03

0x4835,	// (0x0003bed2) popup_slider_window_g1_ParamLimits

0x4851,	// (0x0003beee) popup_slider_window_g2_ParamLimits

0x486d,	// (0x0003bf0a) popup_slider_window_g3_ParamLimits

0xfce7,	// (0x00047384) popup_slider_window_g_ParamLimits

0x4889,	// (0x0003bf26) popup_slider_window_t1_ParamLimits

0x48cf,	// (0x0003bf6c) small_volume_slider_vertical_pane_ParamLimits

0x9ad2,	// (0x0004116f) cell_graphic2_pane_ParamLimits

0x9b2f,	// (0x000411cc) bg_button_pane_cp10_ParamLimits

0x9b2f,	// (0x000411cc) bg_button_pane_cp10

0x9b42,	// (0x000411df) bg_button_pane_cp11_ParamLimits

0x9b42,	// (0x000411df) bg_button_pane_cp11

0x9b55,	// (0x000411f2) graphic2_pages_pane_g1_ParamLimits

0x9b55,	// (0x000411f2) graphic2_pages_pane_g1

0x9b70,	// (0x0004120d) graphic2_pages_pane_g2_ParamLimits

0x9b70,	// (0x0004120d) graphic2_pages_pane_g2

0x0001,

0xfdab,	// (0x00047448) graphic2_pages_pane_g_ParamLimits

0xfdab,	// (0x00047448) graphic2_pages_pane_g

0x9b88,	// (0x00041225) graphic2_pages_pane_t1_ParamLimits

0x9b88,	// (0x00041225) graphic2_pages_pane_t1

0x9ba0,	// (0x0004123d) cell_graphic2_control_pane_ParamLimits

0x9ba0,	// (0x0004123d) cell_graphic2_control_pane

0x9bd2,	// (0x0004126f) cell_graphic2_pane_g1_ParamLimits

0x9bd2,	// (0x0004126f) cell_graphic2_pane_g1

0x57ca,	// (0x0003ce67) cell_graphic2_pane_g2_ParamLimits

0x57ca,	// (0x0003ce67) cell_graphic2_pane_g2

0x9bdf,	// (0x0004127c) cell_graphic2_pane_g3_ParamLimits

0x9bdf,	// (0x0004127c) cell_graphic2_pane_g3

0x57d7,	// (0x0003ce74) cell_graphic2_pane_g4_ParamLimits

0x57d7,	// (0x0003ce74) cell_graphic2_pane_g4

0x9bec,	// (0x00041289) cell_graphic2_pane_g5_ParamLimits

0x9bec,	// (0x00041289) cell_graphic2_pane_g5

0x0004,

0xfdb0,	// (0x0004744d) cell_graphic2_pane_g_ParamLimits

0xfdb0,	// (0x0004744d) cell_graphic2_pane_g

0x9c0c,	// (0x000412a9) cell_graphic2_pane_t1_ParamLimits

0x9c0c,	// (0x000412a9) cell_graphic2_pane_t1

0xd95c,	// (0x00044ff9) grid_highlight_pane_cp11_ParamLimits

0xd95c,	// (0x00044ff9) grid_highlight_pane_cp11

0xb420,	// (0x00042abd) bg_button_pane_cp05

0x9c40,	// (0x000412dd) cell_graphic2_control_pane_g1

0xebec,	// (0x00046289) bg_touch_area_indi_pane_g1

0x5eb3,	// (0x0003d550) aid_cmod_rocker_key_size

0x5ebd,	// (0x0003d55a) aid_cmode_itu_key_size

0x5ec7,	// (0x0003d564) main_cmode_video_pane

0x5ed1,	// (0x0003d56e) main_comp_mode_itu_pane

0x5edd,	// (0x0003d57a) main_comp_mode_rocker_pane

0x5ee9,	// (0x0003d586) cell_cmode_rocker_pane_ParamLimits

0x5ee9,	// (0x0003d586) cell_cmode_rocker_pane

0x5efb,	// (0x0003d598) cell_cmode_itu_pane_ParamLimits

0x5efb,	// (0x0003d598) cell_cmode_itu_pane

0xbff0,	// (0x0004368d) bg_button_pane_cp06_ParamLimits

0xbff0,	// (0x0004368d) bg_button_pane_cp06

0xed7d,	// (0x0004641a) cell_cmode_rocker_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) cell_cmode_rocker_pane_g1

0x49d9,	// (0x0003c076) cell_cmode_rocker_pane_g2_ParamLimits

0x49d9,	// (0x0003c076) cell_cmode_rocker_pane_g2

0x0001,

0xfdc0,	// (0x0004745d) cell_cmode_rocker_pane_g_ParamLimits

0xfdc0,	// (0x0004745d) cell_cmode_rocker_pane_g

0xb27d,	// (0x0004291a) bg_button_pane_cp07

0x5f10,	// (0x0003d5ad) cell_cmode_itu_pane_g1

0x5f19,	// (0x0003d5b6) cell_cmode_itu_pane_t1

0x5f27,	// (0x0003d5c4) cell_cmode_itu_pane_t2

0x0001,

0xfdc5,	// (0x00047462) cell_cmode_itu_pane_t

0x4b49,	// (0x0003c1e6) aid_touch_ctrl_left

0x4b51,	// (0x0003c1ee) aid_touch_ctrl_right

0xb27d,	// (0x0004291a) compa_mode_pane

0x9c64,	// (0x00041301) aid_cmod_rocker_key_size_cp

0x9c6e,	// (0x0004130b) aid_cmode_itu_key_size_cp

0x5f35,	// (0x0003d5d2) compa_mode_pane_g1

0x5f3d,	// (0x0003d5da) compa_mode_pane_g2

0x5f45,	// (0x0003d5e2) compa_mode_pane_g3

0x0002,

0xfdca,	// (0x00047467) compa_mode_pane_g

0x9c78,	// (0x00041315) main_comp_mode_itu_pane_cp

0x9c80,	// (0x0004131d) main_comp_mode_rocker_pane_cp

0x9c88,	// (0x00041325) cell_cmode_itu_pane_cp_ParamLimits

0x9c88,	// (0x00041325) cell_cmode_itu_pane_cp

0x9c9d,	// (0x0004133a) cell_cmode_rocker_pane_cp_ParamLimits

0x9c9d,	// (0x0004133a) cell_cmode_rocker_pane_cp

0xbff0,	// (0x0004368d) bg_button_pane_cp06_cp_ParamLimits

0xbff0,	// (0x0004368d) bg_button_pane_cp06_cp

0xed7d,	// (0x0004641a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xed7d,	// (0x0004641a) cell_cmode_rocker_pane_g1_cp

0xebec,	// (0x00046289) cell_cmode_rocker_pane_g2_cp

0xb27d,	// (0x0004291a) bg_button_pane_cp07_cp

0x9caf,	// (0x0004134c) cell_cmode_itu_pane_g1_cp

0x9cb8,	// (0x00041355) cell_cmode_itu_pane_t1_cp

0x9cb8,	// (0x00041355) cell_cmode_itu_pane_t2_cp

0xaa6c,	// (0x00042109) settings_code_pane_cp2

0xb2ed,	// (0x0004298a) bg_popup_window_pane_cp3_ParamLimits

0xb5ee,	// (0x00042c8b) heading_pane_cp3_ParamLimits

0xb5fa,	// (0x00042c97) listscroll_popup_graphic_pane_ParamLimits

0x3a3b,	// (0x0003b0d8) fep_hwr_aid_pane_ParamLimits

0x494a,	// (0x0003bfe7) aid_touch_sctrl_top_ParamLimits

0x4957,	// (0x0003bff4) sctrl_sk_top_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) sctrl_sk_top_pane_g2_ParamLimits

0xfd00,	// (0x0004739d) sctrl_sk_top_pane_g_ParamLimits

0x4964,	// (0x0003c001) sctrl_sk_top_pane_t1_ParamLimits

0x494a,	// (0x0003bfe7) aid_touch_sctrl_bottom_ParamLimits

0x4964,	// (0x0003c001) sctrl_sk_bottom_pane_t1_ParamLimits

0x4a92,	// (0x0003c12f) aid_area_touch_clock

0x9732,	// (0x00040dcf) aid_vkb2_area_top_pane_cell_ParamLimits

0x9732,	// (0x00040dcf) aid_vkb2_area_top_pane_cell

0x97dd,	// (0x00040e7a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x97dd,	// (0x00040e7a) aid_vkb2_area_bottom_pane_cell

0x5e2c,	// (0x0003d4c9) popup_char_count_window

0x5f4d,	// (0x0003d5ea) popup_char_count_window_g1

0x5f56,	// (0x0003d5f3) popup_char_count_window_g2

0x5f5f,	// (0x0003d5fc) popup_char_count_window_g3

0x0002,

0xfdd1,	// (0x0004746e) popup_char_count_window_g

0x5f68,	// (0x0003d605) popup_char_count_window_t1

0x4c88,	// (0x0003c325) popup_fep_char_preview_window_ParamLimits

0x4c88,	// (0x0003c325) popup_fep_char_preview_window

0x9752,	// (0x00040def) vkb2_top_candi_pane_ParamLimits

0x9752,	// (0x00040def) vkb2_top_candi_pane

0x9cc6,	// (0x00041363) cell_vkb2_top_candi_pane_ParamLimits

0x9cc6,	// (0x00041363) cell_vkb2_top_candi_pane

0xd35f,	// (0x000449fc) bg_popup_fep_char_preview_window_ParamLimits

0xd35f,	// (0x000449fc) bg_popup_fep_char_preview_window

0x51f4,	// (0x0003c891) popup_fep_char_preview_window_t1_ParamLimits

0x51f4,	// (0x0003c891) popup_fep_char_preview_window_t1

0x5f76,	// (0x0003d613) bg_popup_fep_char_preview_window_g1

0x5f7e,	// (0x0003d61b) bg_popup_fep_char_preview_window_g2

0x5f86,	// (0x0003d623) bg_popup_fep_char_preview_window_g3

0x5f8e,	// (0x0003d62b) bg_popup_fep_char_preview_window_g4

0x5f96,	// (0x0003d633) bg_popup_fep_char_preview_window_g5

0x522e,	// (0x0003c8cb) bg_popup_fep_char_preview_window_g6

0x5f9e,	// (0x0003d63b) bg_popup_fep_char_preview_window_g7

0x5fa6,	// (0x0003d643) bg_popup_fep_char_preview_window_g8

0x5fae,	// (0x0003d64b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd8,	// (0x00047475) bg_popup_fep_char_preview_window_g

0xed7d,	// (0x0004641a) cell_vkb2_top_candi_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) cell_vkb2_top_candi_pane_g1

0xefbc,	// (0x00046659) cell_vkb2_top_candi_pane_g2_ParamLimits

0xefbc,	// (0x00046659) cell_vkb2_top_candi_pane_g2

0xefdd,	// (0x0004667a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xefdd,	// (0x0004667a) cell_vkb2_top_candi_pane_g3

0x5236,	// (0x0003c8d3) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5236,	// (0x0003c8d3) cell_vkb2_top_candi_pane_g4

0x5fb6,	// (0x0003d653) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5fb6,	// (0x0003d653) cell_vkb2_top_candi_pane_g5

0x49d9,	// (0x0003c076) cell_vkb2_top_candi_pane_g6_ParamLimits

0x49d9,	// (0x0003c076) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdeb,	// (0x00047488) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdeb,	// (0x00047488) cell_vkb2_top_candi_pane_g

0x5257,	// (0x0003c8f4) cell_vkb2_top_candi_pane_t1

0x325b,	// (0x0003a8f8) aid_size_touch_slider_mark_ParamLimits

0x325b,	// (0x0003a8f8) aid_size_touch_slider_mark

0x99e9,	// (0x00041086) grid_graphic2_catg_pane_ParamLimits

0x99e9,	// (0x00041086) grid_graphic2_catg_pane

0x9aa5,	// (0x00041142) popup_grid_graphic2_window_t1_ParamLimits

0x9aa5,	// (0x00041142) popup_grid_graphic2_window_t1

0x9abb,	// (0x00041158) popup_grid_graphic2_window_t2_ParamLimits

0x9abb,	// (0x00041158) popup_grid_graphic2_window_t2

0x0001,

0xfda6,	// (0x00047443) popup_grid_graphic2_window_t_ParamLimits

0xfda6,	// (0x00047443) popup_grid_graphic2_window_t

0xb420,	// (0x00042abd) bg_button_pane_cp05_ParamLimits

0x9c40,	// (0x000412dd) cell_graphic2_control_pane_g1_ParamLimits

0x9d2c,	// (0x000413c9) cell_graphic2_catg_pane_ParamLimits

0x9d2c,	// (0x000413c9) cell_graphic2_catg_pane

0xb27d,	// (0x0004291a) bg_button_pane_cp12

0x9d3e,	// (0x000413db) cell_graphic2_catg_pane_g1

0x4a5e,	// (0x0003c0fb) cell_tb_ext_pane_t1_ParamLimits

0x502a,	// (0x0003c6c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x502a,	// (0x0003c6c7) vkb2_top_cell_right_narrow_pane

0x5042,	// (0x0003c6df) vkb2_top_cell_right_wide_pane_ParamLimits

0x5042,	// (0x0003c6df) vkb2_top_cell_right_wide_pane

0x3a2d,	// (0x0003b0ca) bg_vkb2_func_pane_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_vkb2_func_pane

0x50b3,	// (0x0003c750) vkb2_top_cell_left_pane_g1_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp03

0x5111,	// (0x0003c7ae) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce0f,	// (0x000444ac) bg_vkb2_func_pane_g1

0xce17,	// (0x000444b4) bg_vkb2_func_pane_g2

0xce27,	// (0x000444c4) bg_vkb2_func_pane_g3

0xce1f,	// (0x000444bc) bg_vkb2_func_pane_g4

0xce2f,	// (0x000444cc) bg_vkb2_func_pane_g5

0xce37,	// (0x000444d4) bg_vkb2_func_pane_g6

0xce3f,	// (0x000444dc) bg_vkb2_func_pane_g7

0xce47,	// (0x000444e4) bg_vkb2_func_pane_g8

0xce07,	// (0x000444a4) bg_vkb2_func_pane_g9

0x0008,

0xfdf8,	// (0x00047495) bg_vkb2_func_pane_g

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp01

0x50b3,	// (0x0003c750) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x50b3,	// (0x0003c750) vkb2_top_cell_right_wide_pane_g1

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3a2d,	// (0x0003b0ca) bg_vkb2_fuc_pane_cp02

0x5111,	// (0x0003c7ae) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5111,	// (0x0003c7ae) vkb2_top_cell_right_narrow_pane_g1

0xb934,	// (0x00042fd1) aid_touch_area_decrease_ParamLimits

0xb934,	// (0x00042fd1) aid_touch_area_decrease

0xb96e,	// (0x0004300b) aid_touch_area_increase_ParamLimits

0xb96e,	// (0x0004300b) aid_touch_area_increase

0xb996,	// (0x00043033) aid_touch_area_mute_ParamLimits

0xb996,	// (0x00043033) aid_touch_area_mute

0xb9c6,	// (0x00043063) aid_touch_area_slider_ParamLimits

0xb9c6,	// (0x00043063) aid_touch_area_slider

0xba06,	// (0x000430a3) popup_slider_window_g4_ParamLimits

0xba06,	// (0x000430a3) popup_slider_window_g4

0xba2e,	// (0x000430cb) popup_slider_window_g5_ParamLimits

0xba2e,	// (0x000430cb) popup_slider_window_g5

0xba62,	// (0x000430ff) popup_slider_window_g6_ParamLimits

0xba62,	// (0x000430ff) popup_slider_window_g6

0x48b7,	// (0x0003bf54) popup_slider_window_t2_ParamLimits

0x48b7,	// (0x0003bf54) popup_slider_window_t2

0x0001,

0xfcf4,	// (0x00047391) popup_slider_window_t_ParamLimits

0xfcf4,	// (0x00047391) popup_slider_window_t

0xba7e,	// (0x0004311b) slider_pane_ParamLimits

0xba7e,	// (0x0004311b) slider_pane

0x5fd7,	// (0x0003d674) slider_pane_g1_ParamLimits

0x5fd7,	// (0x0003d674) slider_pane_g1

0x5feb,	// (0x0003d688) slider_pane_g2_ParamLimits

0x5feb,	// (0x0003d688) slider_pane_g2

0x6001,	// (0x0003d69e) slider_pane_g3_ParamLimits

0x6001,	// (0x0003d69e) slider_pane_g3

0x0003,

0xfe0b,	// (0x000474a8) slider_pane_g_ParamLimits

0xfe0b,	// (0x000474a8) slider_pane_g

0x921b,	// (0x000408b8) popup_tb_float_extension_window_ParamLimits

0x921b,	// (0x000408b8) popup_tb_float_extension_window

0x602d,	// (0x0003d6ca) aid_size_cell_tb_float_ext

0xb27d,	// (0x0004291a) bg_popup_sub_window_cp28

0x6039,	// (0x0003d6d6) grid_tb_float_ext_pane

0x6043,	// (0x0003d6e0) cell_tb_float_ext_pane_ParamLimits

0x6043,	// (0x0003d6e0) cell_tb_float_ext_pane

0x605d,	// (0x0003d6fa) cell_tb_float_ext_pane_g1

0x6066,	// (0x0003d703) grid_highlight_pane_cp12

0x94c7,	// (0x00040b64) cell_last_hwr_side_pane_ParamLimits

0x94c7,	// (0x00040b64) cell_last_hwr_side_pane

0xebec,	// (0x00046289) cell_last_hwr_side_pane_g1

0x606f,	// (0x0003d70c) cell_last_hwr_side_pane_g2

0x0001,

0xfe14,	// (0x000474b1) cell_last_hwr_side_pane_g

0x98b9,	// (0x00040f56) vkb2_area_bottom_space_btn_pane_ParamLimits

0x98b9,	// (0x00040f56) vkb2_area_bottom_space_btn_pane

0xed7d,	// (0x0004641a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5ea1,	// (0x0003d53e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5257,	// (0x0003c8f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5276,	// (0x0003c913) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5276,	// (0x0003c913) vkb2_area_bottom_space_btn_pane_g1

0x52b0,	// (0x0003c94d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x52b0,	// (0x0003c94d) vkb2_area_bottom_space_btn_pane_g2

0x52e6,	// (0x0003c983) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x52e6,	// (0x0003c983) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe19,	// (0x000474b6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe19,	// (0x000474b6) vkb2_area_bottom_space_btn_pane_g

0x3ae2,	// (0x0003b17f) cel_fep_hwr_func_pane_ParamLimits

0x3ae2,	// (0x0003b17f) cel_fep_hwr_func_pane

0x949c,	// (0x00040b39) cell_hwr_side_button_pane_ParamLimits

0x949c,	// (0x00040b39) cell_hwr_side_button_pane

0x4a92,	// (0x0003c12f) aid_area_touch_clock_ParamLimits

0xb420,	// (0x00042abd) bg_uniindi_top_pane_ParamLimits

0x4aa4,	// (0x0003c141) uniindi_top_pane_g1_ParamLimits

0x4aba,	// (0x0003c157) uniindi_top_pane_g2_ParamLimits

0x4ac6,	// (0x0003c163) uniindi_top_pane_g3_ParamLimits

0x4ad7,	// (0x0003c174) uniindi_top_pane_g4_ParamLimits

0xfd2c,	// (0x000473c9) uniindi_top_pane_g_ParamLimits

0x4ae4,	// (0x0003c181) uniindi_top_pane_t1_ParamLimits

0xb420,	// (0x00042abd) bg_vkb2_func_pane_cp01_ParamLimits

0xb420,	// (0x00042abd) bg_vkb2_func_pane_cp01

0x6078,	// (0x0003d715) cel_fep_hwr_func_pane_g1_ParamLimits

0x6078,	// (0x0003d715) cel_fep_hwr_func_pane_g1

0xb420,	// (0x00042abd) bg_vkb2_func_pane_cp02_ParamLimits

0xb420,	// (0x00042abd) bg_vkb2_func_pane_cp02

0x6078,	// (0x0003d715) cell_hwr_side_button_pane_g1_ParamLimits

0x6078,	// (0x0003d715) cell_hwr_side_button_pane_g1

0xcd0b,	// (0x000443a8) status_pane_g4_ParamLimits

0xcd0b,	// (0x000443a8) status_pane_g4

0xcd25,	// (0x000443c2) status_pane_t1

0xea7b,	// (0x00046118) form2_midp_gauge_slider_cont_pane

0xea83,	// (0x00046120) form2_midp_gauge_slider_pane_t1_ParamLimits

0xace8,	// (0x00042385) form2_midp_gauge_slider_pane_t2_ParamLimits

0xacfc,	// (0x00042399) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf8,	// (0x00047195) form2_midp_gauge_slider_pane_t_ParamLimits

0xea95,	// (0x00046132) form2_midp_slider_pane_ParamLimits

0x4c48,	// (0x0003c2e5) aid_size_cell_func_vkb2_ParamLimits

0x4c48,	// (0x0003c2e5) aid_size_cell_func_vkb2

0x6019,	// (0x0003d6b6) slider_pane_g4_ParamLimits

0x6019,	// (0x0003d6b6) slider_pane_g4

0x9d47,	// (0x000413e4) form2_midp_gauge_slider_pane_t2_cp01

0x9d57,	// (0x000413f4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x9d57,	// (0x000413f4) form2_midp_gauge_slider_pane_t3_cp01

0x535b,	// (0x0003c9f8) form2_midp_slider_pane_cp01

0xb27d,	// (0x0004291a) navi_smil_pane

0x60a8,	// (0x0003d745) navi_smil_pane_g1

0x60b0,	// (0x0003d74d) navi_smil_pane_t1

0x6086,	// (0x0003d723) form2_midp_slider_pane_g1

0x608f,	// (0x0003d72c) form2_midp_slider_pane_g2

0x6097,	// (0x0003d734) form2_midp_slider_pane_g3

0x6086,	// (0x0003d723) form2_midp_slider_pane_g4

0x9d76,	// (0x00041413) form2_midp_slider_pane_g5

0x0004,

0xfe22,	// (0x000474bf) form2_midp_slider_pane_g

0x5320,	// (0x0003c9bd) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5320,	// (0x0003c9bd) vkb2_area_bottom_space_btn_pane_g4

0xa396,	// (0x00041a33) lc0_navi_pane_ParamLimits

0xa396,	// (0x00041a33) lc0_navi_pane

0xa400,	// (0x00041a9d) lc0_stat_indi_pane_ParamLimits

0xa400,	// (0x00041a9d) lc0_stat_indi_pane

0xa415,	// (0x00041ab2) ls0_title_pane_ParamLimits

0xa415,	// (0x00041ab2) ls0_title_pane

0xbff0,	// (0x0004368d) bg_popup_sub_pane_cp14_ParamLimits

0x4a79,	// (0x0003c116) list_uniindi_pane_ParamLimits

0x4a85,	// (0x0003c122) uniindi_top_pane_ParamLimits

0x4b21,	// (0x0003c1be) list_single_uniindi_pane_g1_ParamLimits

0x4b34,	// (0x0003c1d1) list_single_uniindi_pane_t1_ParamLimits

0x9d81,	// (0x0004141e) lc0_stat_clock_pane_ParamLimits

0x9d81,	// (0x0004141e) lc0_stat_clock_pane

0x9d8e,	// (0x0004142b) lc0_stat_indi_pane_g1_ParamLimits

0x9d8e,	// (0x0004142b) lc0_stat_indi_pane_g1

0x9d9b,	// (0x00041438) lc0_stat_indi_pane_g2_ParamLimits

0x9d9b,	// (0x00041438) lc0_stat_indi_pane_g2

0x0001,

0xfe2d,	// (0x000474ca) lc0_stat_indi_pane_g_ParamLimits

0xfe2d,	// (0x000474ca) lc0_stat_indi_pane_g

0x9da8,	// (0x00041445) lc0_uni_indicator_pane_ParamLimits

0x9da8,	// (0x00041445) lc0_uni_indicator_pane

0x9db5,	// (0x00041452) ls0_title_pane_g1_ParamLimits

0x9db5,	// (0x00041452) ls0_title_pane_g1

0x9dc9,	// (0x00041466) ls0_title_pane_t1_ParamLimits

0x9dc9,	// (0x00041466) ls0_title_pane_t1

0x9df7,	// (0x00041494) lc0_uni_indicator_pane_g1_ParamLimits

0x9df7,	// (0x00041494) lc0_uni_indicator_pane_g1

0x60be,	// (0x0003d75b) lc0_stat_clock_pane_t1

0xb27d,	// (0x0004291a) main_ai5_pane

0x60cc,	// (0x0003d769) ai5_sk_pane_ParamLimits

0x60cc,	// (0x0003d769) ai5_sk_pane

0x9e25,	// (0x000414c2) cell_ai5_widget_pane_ParamLimits

0x9e25,	// (0x000414c2) cell_ai5_widget_pane

0x60d9,	// (0x0003d776) aid_size_cell_widget_grid

0x60ef,	// (0x0003d78c) bg_ai5_widget_pane_ParamLimits

0x60ef,	// (0x0003d78c) bg_ai5_widget_pane

0x6159,	// (0x0003d7f6) cell_ai5_widget_pane_g2

0x6169,	// (0x0003d806) cell_ai5_widget_pane_g3

0x6188,	// (0x0003d825) cell_ai5_widget_pane_g4

0x6194,	// (0x0003d831) cell_ai5_widget_pane_g5

0x61a0,	// (0x0003d83d) cell_ai5_widget_pane_g6

0x61ac,	// (0x0003d849) cell_ai5_widget_pane_g7

0x61f4,	// (0x0003d891) cell_ai5_widget_pane_t1_ParamLimits

0x61f4,	// (0x0003d891) cell_ai5_widget_pane_t1

0x6211,	// (0x0003d8ae) cell_ai5_widget_pane_t2_ParamLimits

0x6211,	// (0x0003d8ae) cell_ai5_widget_pane_t2

0x6229,	// (0x0003d8c6) cell_ai5_widget_pane_t3_ParamLimits

0x6229,	// (0x0003d8c6) cell_ai5_widget_pane_t3

0x6241,	// (0x0003d8de) cell_ai5_widget_pane_t4_ParamLimits

0x6241,	// (0x0003d8de) cell_ai5_widget_pane_t4

0x625b,	// (0x0003d8f8) cell_ai5_widget_pane_t5_ParamLimits

0x625b,	// (0x0003d8f8) cell_ai5_widget_pane_t5

0x627a,	// (0x0003d917) cell_ai5_widget_pane_t6_ParamLimits

0x627a,	// (0x0003d917) cell_ai5_widget_pane_t6

0x628c,	// (0x0003d929) cell_ai5_widget_pane_t7_ParamLimits

0x628c,	// (0x0003d929) cell_ai5_widget_pane_t7

0x62a5,	// (0x0003d942) cell_ai5_widget_pane_t8_ParamLimits

0x62a5,	// (0x0003d942) cell_ai5_widget_pane_t8

0x0009,

0xfe47,	// (0x000474e4) cell_ai5_widget_pane_t_ParamLimits

0xfe47,	// (0x000474e4) cell_ai5_widget_pane_t

0x62f1,	// (0x0003d98e) grid_ai5_widget_pane

0xbff0,	// (0x0004368d) highlight_cell_ai5_widget_pane_ParamLimits

0xbff0,	// (0x0004368d) highlight_cell_ai5_widget_pane

0x9e8f,	// (0x0004152c) ai5_sk_left_pane

0x9e99,	// (0x00041536) ai5_sk_middle_pane

0x9ea3,	// (0x00041540) ai5_sk_right_pane

0x6309,	// (0x0003d9a6) bg_ai5_widget_pane_g1_ParamLimits

0x6309,	// (0x0003d9a6) bg_ai5_widget_pane_g1

0x6315,	// (0x0003d9b2) bg_ai5_widget_pane_g2_ParamLimits

0x6315,	// (0x0003d9b2) bg_ai5_widget_pane_g2

0x6321,	// (0x0003d9be) bg_ai5_widget_pane_g3_ParamLimits

0x6321,	// (0x0003d9be) bg_ai5_widget_pane_g3

0x632d,	// (0x0003d9ca) bg_ai5_widget_pane_g4_ParamLimits

0x632d,	// (0x0003d9ca) bg_ai5_widget_pane_g4

0x6339,	// (0x0003d9d6) bg_ai5_widget_pane_g5_ParamLimits

0x6339,	// (0x0003d9d6) bg_ai5_widget_pane_g5

0x6345,	// (0x0003d9e2) bg_ai5_widget_pane_g6_ParamLimits

0x6345,	// (0x0003d9e2) bg_ai5_widget_pane_g6

0x6351,	// (0x0003d9ee) bg_ai5_widget_pane_g7_ParamLimits

0x6351,	// (0x0003d9ee) bg_ai5_widget_pane_g7

0x635d,	// (0x0003d9fa) bg_ai5_widget_pane_g8_ParamLimits

0x635d,	// (0x0003d9fa) bg_ai5_widget_pane_g8

0x6369,	// (0x0003da06) bg_ai5_widget_pane_g9_ParamLimits

0x6369,	// (0x0003da06) bg_ai5_widget_pane_g9

0x0008,

0xfe5c,	// (0x000474f9) bg_ai5_widget_pane_g_ParamLimits

0xfe5c,	// (0x000474f9) bg_ai5_widget_pane_g

0x639c,	// (0x0003da39) cell_shortcut_ai5_widget_pane_ParamLimits

0x639c,	// (0x0003da39) cell_shortcut_ai5_widget_pane

0xc9c1,	// (0x0004405e) bg_cell_shortcut_ai5_widget_pane

0x63ad,	// (0x0003da4a) cell_grid_ai5_widget_pane_g1

0x63b6,	// (0x0003da53) highlight_cell_shortcut_ai5_widget_pane

0xce17,	// (0x000444b4) ai5_sk_left_pane_g1

0x63be,	// (0x0003da5b) ai5_sk_left_pane_g2

0x63c6,	// (0x0003da63) ai5_sk_left_pane_g3

0x63ce,	// (0x0003da6b) ai5_sk_left_pane_g4

0x0003,

0xfe6f,	// (0x0004750c) ai5_sk_left_pane_g

0x63d6,	// (0x0003da73) ai5_sk_left_pane_t1

0xce0f,	// (0x000444ac) ai5_sk_right_pane_g1

0x63e4,	// (0x0003da81) ai5_sk_right_pane_g2

0x63ec,	// (0x0003da89) ai5_sk_right_pane_g3

0x63f4,	// (0x0003da91) ai5_sk_right_pane_g4

0x0003,

0xfe78,	// (0x00047515) ai5_sk_right_pane_g

0x63fc,	// (0x0003da99) ai5_sk_right_pane_t1

0xce0f,	// (0x000444ac) ai5_sk_middle_pane_g1

0xce17,	// (0x000444b4) ai5_sk_middle_pane_g2

0xce2f,	// (0x000444cc) ai5_sk_middle_pane_g3

0x63ec,	// (0x0003da89) ai5_sk_middle_pane_g4

0x63c6,	// (0x0003da63) ai5_sk_middle_pane_g5

0x640a,	// (0x0003daa7) ai5_sk_middle_pane_g6

0x9ead,	// (0x0004154a) ai5_sk_middle_pane_g7

0x0006,

0xfe81,	// (0x0004751e) ai5_sk_middle_pane_g

0xa282,	// (0x0004191f) aid_touch_area_size_lc0_ParamLimits

0xa282,	// (0x0004191f) aid_touch_area_size_lc0

0x3e22,	// (0x0003b4bf) cell_hwr_candidate_pane_t1_ParamLimits

0xcc2d,	// (0x000442ca) aid_touch_navi_pane

0xa508,	// (0x00041ba5) status_dt_navi_pane_ParamLimits

0xa508,	// (0x00041ba5) status_dt_navi_pane

0xa520,	// (0x00041bbd) status_dt_sta_pane_ParamLimits

0xa520,	// (0x00041bbd) status_dt_sta_pane

0x9eb5,	// (0x00041552) dt_sta_controll_pane

0x9ec2,	// (0x0004155f) dt_sta_indi_pane

0x9ecf,	// (0x0004156c) dt_sta_title_pane

0xb420,	// (0x00042abd) bg_dt_sta_indi_pane_ParamLimits

0xb420,	// (0x00042abd) bg_dt_sta_indi_pane

0x6412,	// (0x0003daaf) dt_sta_battery_pane

0x9ee1,	// (0x0004157e) dt_sta_indi_pane_g1

0x9eea,	// (0x00041587) dt_sta_indi_pane_g2

0x9ef3,	// (0x00041590) dt_sta_indi_pane_g3

0x0002,

0xfe90,	// (0x0004752d) dt_sta_indi_pane_g

0x9efc,	// (0x00041599) dt_sta_signal_pane

0xbff0,	// (0x0004368d) bg_dt_sta_title_pane_ParamLimits

0xbff0,	// (0x0004368d) bg_dt_sta_title_pane

0x641a,	// (0x0003dab7) dt_sta_title_pane_g1

0x9f05,	// (0x000415a2) dt_sta_title_pane_t1_ParamLimits

0x9f05,	// (0x000415a2) dt_sta_title_pane_t1

0xb27d,	// (0x0004291a) bg_dt_sta_control_pane

0x9f1a,	// (0x000415b7) dt_sta_controll_pane_g1

0x6422,	// (0x0003dabf) bg_dt_sta_title_pane_g1

0x642b,	// (0x0003dac8) bg_dt_sta_title_pane_g2

0x6434,	// (0x0003dad1) bg_dt_sta_title_pane_g3

0x0002,

0xfe97,	// (0x00047534) bg_dt_sta_title_pane_g

0xebec,	// (0x00046289) bg_dt_sta_indi_pane_g1

0x643d,	// (0x0003dada) dt_sta_signal_pane_g1

0x6445,	// (0x0003dae2) dt_sta_signal_pane_g2

0x0001,

0xfe9e,	// (0x0004753b) dt_sta_signal_pane_g

0x644d,	// (0x0003daea) dt_sta_battery_pane_g1

0x6456,	// (0x0003daf3) dt_sta_battery_pane_t1

0xebec,	// (0x00046289) bg_dt_sta_control_pane_g1

0xc5a2,	// (0x00043c3f) fep_china_uni_eep_pane

0xc5aa,	// (0x00043c47) fep_china_uni_entry_pane_ParamLimits

0xc5ba,	// (0x00043c57) popup_fep_china_uni_window_g1_ParamLimits

0xc5ca,	// (0x00043c67) popup_fep_china_uni_window_g2_ParamLimits

0xc5ca,	// (0x00043c67) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00046dc0) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00046dc0) popup_fep_china_uni_window_g

0x6465,	// (0x0003db02) fep_china_uni_eep_pane_g1

0x646d,	// (0x0003db0a) fep_china_uni_eep_pane_t1

0x609f,	// (0x0003d73c) aid_touch_area_size_smil_player

0xccde,	// (0x0004437b) lc0_clock_pane

0xcd19,	// (0x000443b6) status_pane_g5_ParamLimits

0xcd19,	// (0x000443b6) status_pane_g5

0x8da9,	// (0x00040446) popup_keymap_window

0xccf7,	// (0x00044394) status_icon_pane

0x6169,	// (0x0003d806) cell_ai5_widget_pane_g3_ParamLimits

0x6188,	// (0x0003d825) cell_ai5_widget_pane_g4_ParamLimits

0x6194,	// (0x0003d831) cell_ai5_widget_pane_g5_ParamLimits

0x61b8,	// (0x0003d855) cell_ai5_widget_pane_g8_ParamLimits

0x61b8,	// (0x0003d855) cell_ai5_widget_pane_g8

0x61cc,	// (0x0003d869) cell_ai5_widget_pane_g9_ParamLimits

0x61cc,	// (0x0003d869) cell_ai5_widget_pane_g9

0x61e0,	// (0x0003d87d) cell_ai5_widget_pane_g10_ParamLimits

0x61e0,	// (0x0003d87d) cell_ai5_widget_pane_g10

0x647c,	// (0x0003db19) status_icon_pane_g1

0xb27d,	// (0x0004291a) bg_popup_sub_pane_cp13

0x6484,	// (0x0003db21) popup_keymap_window_t1

0xa20c,	// (0x000418a9) control_pane_g6_ParamLimits

0xa20c,	// (0x000418a9) control_pane_g6

0xa219,	// (0x000418b6) control_pane_g7_ParamLimits

0xa219,	// (0x000418b6) control_pane_g7

0xa226,	// (0x000418c3) control_pane_g8_ParamLimits

0xa226,	// (0x000418c3) control_pane_g8

0x9eb5,	// (0x00041552) dt_sta_controll_pane_ParamLimits

0x9ec2,	// (0x0004155f) dt_sta_indi_pane_ParamLimits

0x9ecf,	// (0x0004156c) dt_sta_title_pane_ParamLimits

0xb876,	// (0x00042f13) aid_size_touch_scroll_bar_cale

0x150b,	// (0x00038ba8) popup_discreet_window_ParamLimits

0x150b,	// (0x00038ba8) popup_discreet_window

0x8540,	// (0x0003fbdd) popup_sk_window

0xd35f,	// (0x000449fc) bg_popup_sub_pane_cp28_ParamLimits

0xd35f,	// (0x000449fc) bg_popup_sub_pane_cp28

0x6492,	// (0x0003db2f) popup_discreet_window_g1_ParamLimits

0x6492,	// (0x0003db2f) popup_discreet_window_g1

0x64b2,	// (0x0003db4f) popup_discreet_window_t1_ParamLimits

0x64b2,	// (0x0003db4f) popup_discreet_window_t1

0x64d0,	// (0x0003db6d) popup_discreet_window_t2_ParamLimits

0x64d0,	// (0x0003db6d) popup_discreet_window_t2

0x0002,

0xfea3,	// (0x00047540) popup_discreet_window_t_ParamLimits

0xfea3,	// (0x00047540) popup_discreet_window_t

0x5563,	// (0x0003cc00) popup_sk_window_g1

0x556d,	// (0x0003cc0a) popup_sk_window_g2

0x0001,

0xfeaa,	// (0x00047547) popup_sk_window_g

0x5577,	// (0x0003cc14) popup_sk_window_t1

0x5585,	// (0x0003cc22) popup_sk_window_t1_copy1

0x6159,	// (0x0003d7f6) cell_ai5_widget_pane_g2_ParamLimits

0x62b7,	// (0x0003d954) cell_ai5_widget_pane_t9_ParamLimits

0x62b7,	// (0x0003d954) cell_ai5_widget_pane_t9

0xb27d,	// (0x0004291a) main_fep_fshwr2_pane

0x9f23,	// (0x000415c0) aid_fshwr2_btn_pane

0x9f32,	// (0x000415cf) aid_fshwr2_syb_pane

0x9f44,	// (0x000415e1) aid_fshwr2_txt_pane

0x9f53,	// (0x000415f0) fshwr2_func_candi_pane

0x9f64,	// (0x00041601) fshwr2_hwr_syb_pane

0x9f7f,	// (0x0004161c) fshwr2_icf_pane

0xb27d,	// (0x0004291a) fshwr2_icf_bg_pane

0x9f97,	// (0x00041634) fshwr2_icf_pane_t1_ParamLimits

0x9f97,	// (0x00041634) fshwr2_icf_pane_t1

0xebec,	// (0x00046289) fshwr2_func_candi_pane_g1

0x6522,	// (0x0003dbbf) fshwr2_func_candi_row_pane_ParamLimits

0x6522,	// (0x0003dbbf) fshwr2_func_candi_row_pane

0x9fb0,	// (0x0004164d) cell_fshwr2_syb_pane_ParamLimits

0x9fb0,	// (0x0004164d) cell_fshwr2_syb_pane

0xed7d,	// (0x0004641a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) fshwr2_hwr_syb_pane_g1

0xb27d,	// (0x0004291a) bg_popup_call_pane_cp01

0x6533,	// (0x0003dbd0) fshwr2_func_candi_cell_pane_ParamLimits

0x6533,	// (0x0003dbd0) fshwr2_func_candi_cell_pane

0x6561,	// (0x0003dbfe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x6561,	// (0x0003dbfe) fshwr2_func_candi_cell_bg_pane

0x657b,	// (0x0003dc18) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x657b,	// (0x0003dc18) fshwr2_func_candi_cell_pane_g1

0x659b,	// (0x0003dc38) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x659b,	// (0x0003dc38) fshwr2_func_candi_cell_pane_t1

0xb27d,	// (0x0004291a) bg_button_pane_cp08

0xc9c1,	// (0x0004405e) cell_fshwr2_syb_bg_pane

0x9fca,	// (0x00041667) cell_fshwr2_syb_bg_pane_g1

0x9fd2,	// (0x0004166f) cell_fshwr2_syb_bg_pane_t1

0xbff0,	// (0x0004368d) main_tmo_pane

0xa8b5,	// (0x00041f52) uni_indicator_pane_g1_ParamLimits

0xa8ca,	// (0x00041f67) uni_indicator_pane_g2_ParamLimits

0xdd1f,	// (0x000453bc) uni_indicator_pane_g3_ParamLimits

0xdd35,	// (0x000453d2) uni_indicator_pane_g4_ParamLimits

0xdd35,	// (0x000453d2) uni_indicator_pane_g4

0xdd49,	// (0x000453e6) uni_indicator_pane_g5_ParamLimits

0xdd49,	// (0x000453e6) uni_indicator_pane_g5

0xdd5d,	// (0x000453fa) uni_indicator_pane_g6_ParamLimits

0xdd5d,	// (0x000453fa) uni_indicator_pane_g6

0xf922,	// (0x00046fbf) uni_indicator_pane_g_ParamLimits

0xb257,	// (0x000428f4) popup_tmo_note_window_ParamLimits

0xb257,	// (0x000428f4) popup_tmo_note_window

0xbff0,	// (0x0004368d) fshwr2_bg_pane

0x658c,	// (0x0003dc29) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x658c,	// (0x0003dc29) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaf,	// (0x0004754c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaf,	// (0x0004754c) fshwr2_func_candi_cell_pane_g

0xebec,	// (0x00046289) bg_popup_window_pane_cp01

0x65ae,	// (0x0003dc4b) bg_popup_window_pane_g1_cp01

0x65b7,	// (0x0003dc54) bg_popup_window_pane_cp22_ParamLimits

0x65b7,	// (0x0003dc54) bg_popup_window_pane_cp22

0x65c5,	// (0x0003dc62) listscroll_tmo_link_pane_ParamLimits

0x65c5,	// (0x0003dc62) listscroll_tmo_link_pane

0x6605,	// (0x0003dca2) popup_tmo_note_window_g1_ParamLimits

0x6605,	// (0x0003dca2) popup_tmo_note_window_g1

0x6612,	// (0x0003dcaf) tmo_note_info_pane_ParamLimits

0x6612,	// (0x0003dcaf) tmo_note_info_pane

0x9fe1,	// (0x0004167e) list_tmo_note_info_pane_g1_ParamLimits

0x9fe1,	// (0x0004167e) list_tmo_note_info_pane_g1

0x662c,	// (0x0003dcc9) list_tmo_note_info_pane_g2_ParamLimits

0x662c,	// (0x0003dcc9) list_tmo_note_info_pane_g2

0x0001,

0xfeb4,	// (0x00047551) list_tmo_note_info_pane_g_ParamLimits

0xfeb4,	// (0x00047551) list_tmo_note_info_pane_g

0x6648,	// (0x0003dce5) list_tmo_note_info_text_pane_ParamLimits

0x6648,	// (0x0003dce5) list_tmo_note_info_text_pane

0x668a,	// (0x0003dd27) list_tmo_link_pane

0x6697,	// (0x0003dd34) scroll_pane_cp20

0x66a4,	// (0x0003dd41) list_single_tmo_link_pane_ParamLimits

0x66a4,	// (0x0003dd41) list_single_tmo_link_pane

0x66b4,	// (0x0003dd51) list_single_tmo_link_pane_t1

0x66c2,	// (0x0003dd5f) list_tmo_note_info_text_pane_t1_ParamLimits

0x66c2,	// (0x0003dd5f) list_tmo_note_info_text_pane_t1

0x8918,	// (0x0003ffb5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8918,	// (0x0003ffb5) aid_size_touch_scroll_bar_cp01

0x817d,	// (0x0003f81a) aid_size_touch_slider_marker

0x8530,	// (0x0003fbcd) popup_settings_window_ParamLimits

0x8530,	// (0x0003fbcd) popup_settings_window

0x0bad,	// (0x0003824a) popup_candi_list_indi_window

0xcc2d,	// (0x000442ca) aid_touch_navi_pane_ParamLimits

0x491e,	// (0x0003bfbb) rs_clock_indi_pane

0x4927,	// (0x0003bfc4) sctrl_sk_bottom_pane_ParamLimits

0x4938,	// (0x0003bfd5) sctrl_sk_top_pane_ParamLimits

0x4ca2,	// (0x0003c33f) popup_fep_tooltip_window

0x60d9,	// (0x0003d776) aid_size_cell_widget_grid_ParamLimits

0x614d,	// (0x0003d7ea) cell_ai5_widget_pane_g1_ParamLimits

0x614d,	// (0x0003d7ea) cell_ai5_widget_pane_g1

0x61a0,	// (0x0003d83d) cell_ai5_widget_pane_g6_ParamLimits

0x61ac,	// (0x0003d849) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe32,	// (0x000474cf) cell_ai5_widget_pane_g_ParamLimits

0xfe32,	// (0x000474cf) cell_ai5_widget_pane_g

0x62db,	// (0x0003d978) cell_ai5_widget_pane_t10_ParamLimits

0x62db,	// (0x0003d978) cell_ai5_widget_pane_t10

0x62f1,	// (0x0003d98e) grid_ai5_widget_pane_ParamLimits

0x6375,	// (0x0003da12) cell_contacts_ai5_widget_pane_ParamLimits

0x6375,	// (0x0003da12) cell_contacts_ai5_widget_pane

0x64e5,	// (0x0003db82) popup_discreet_window_t3_ParamLimits

0x64e5,	// (0x0003db82) popup_discreet_window_t3

0x55f1,	// (0x0003cc8e) popup_fshwr2_char_preview_window_ParamLimits

0x55f1,	// (0x0003cc8e) popup_fshwr2_char_preview_window

0x9ff8,	// (0x00041695) tmo_note_info_pane_t1

0xa00d,	// (0x000416aa) tmo_note_info_pane_t2

0xa026,	// (0x000416c3) tmo_note_info_pane_t3

0x6666,	// (0x0003dd03) tmo_note_info_pane_t4

0x6678,	// (0x0003dd15) tmo_note_info_pane_t5

0x0004,

0xfeb9,	// (0x00047556) tmo_note_info_pane_t

0x668a,	// (0x0003dd27) list_tmo_link_pane_ParamLimits

0x6697,	// (0x0003dd34) scroll_pane_cp20_ParamLimits

0xb27d,	// (0x0004291a) bg_popup_fep_char_preview_window_cp01

0x66db,	// (0x0003dd78) popup_fshwr2_char_preview_window_t1

0x66e9,	// (0x0003dd86) popup_candi_list_indi_window_g1

0x66f2,	// (0x0003dd8f) bg_cell_contacts_ai5_widget_pane

0x66fe,	// (0x0003dd9b) cell_contacts_ai5_widget_pane_g1

0x6711,	// (0x0003ddae) cell_contacts_ai5_widget_pane_g2

0x671d,	// (0x0003ddba) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec4,	// (0x00047561) cell_contacts_ai5_widget_pane_g

0x672f,	// (0x0003ddcc) cell_contacts_ai5_widget_pane_t1

0xbff0,	// (0x0004368d) highlight_cell_shortcut_ai5_widget_pane_cp01

0x67a9,	// (0x0003de46) settings_container_pane

0xc9c1,	// (0x0004405e) listscroll_set_pane_copy1

0xe551,	// (0x00045bee) scroll_pane_cp121_copy1

0x67b5,	// (0x0003de52) set_content_pane_copy1

0x67bd,	// (0x0003de5a) aid_height_set_list_copy1_ParamLimits

0x67bd,	// (0x0003de5a) aid_height_set_list_copy1

0xcd99,	// (0x00044436) aid_size_parent_copy1_ParamLimits

0xcd99,	// (0x00044436) aid_size_parent_copy1

0x67c9,	// (0x0003de66) button_value_adjust_pane_cp6_copy1_ParamLimits

0x67c9,	// (0x0003de66) button_value_adjust_pane_cp6_copy1

0xc155,	// (0x000437f2) list_highlight_pane_cp2_copy1_ParamLimits

0xc155,	// (0x000437f2) list_highlight_pane_cp2_copy1

0x67dd,	// (0x0003de7a) list_set_pane_copy1_ParamLimits

0x67dd,	// (0x0003de7a) list_set_pane_copy1

0x6744,	// (0x0003dde1) main_pane_set_t1_copy1_ParamLimits

0x6744,	// (0x0003dde1) main_pane_set_t1_copy1

0x677e,	// (0x0003de1b) main_pane_set_t2_copy1_ParamLimits

0x677e,	// (0x0003de1b) main_pane_set_t2_copy1

0x688a,	// (0x0003df27) main_pane_set_t3_copy1

0x6898,	// (0x0003df35) main_pane_set_t4_copy1

0x679d,	// (0x0003de3a) set_content_pane_g1_copy1_ParamLimits

0x679d,	// (0x0003de3a) set_content_pane_g1_copy1

0x68a6,	// (0x0003df43) setting_code_pane_copy1

0x68ae,	// (0x0003df4b) setting_slider_graphic_pane_copy1

0x68ae,	// (0x0003df4b) setting_slider_pane_copy1

0x68ae,	// (0x0003df4b) setting_text_pane_copy1

0x68ae,	// (0x0003df4b) setting_volume_pane_copy1

0x68a6,	// (0x0003df43) settings_code_pane_cp2_copy1

0x68b6,	// (0x0003df53) settings_code_pane_cp_copy1_ParamLimits

0x68b6,	// (0x0003df53) settings_code_pane_cp_copy1

0x56a7,	// (0x0003cd44) volume_set_pane_copy1

0x68ca,	// (0x0003df67) volume_set_pane_g10_copy1

0x68d2,	// (0x0003df6f) volume_set_pane_g1_copy1

0x68da,	// (0x0003df77) volume_set_pane_g2_copy1

0x68e2,	// (0x0003df7f) volume_set_pane_g3_copy1

0x68ea,	// (0x0003df87) volume_set_pane_g4_copy1

0x68f2,	// (0x0003df8f) volume_set_pane_g5_copy1

0x68fa,	// (0x0003df97) volume_set_pane_g6_copy1

0x6902,	// (0x0003df9f) volume_set_pane_g7_copy1

0x690a,	// (0x0003dfa7) volume_set_pane_g8_copy1

0x6912,	// (0x0003dfaf) volume_set_pane_g9_copy1

0xb2ed,	// (0x0004298a) bg_set_opt_pane_cp_copy1_ParamLimits

0xb2ed,	// (0x0004298a) bg_set_opt_pane_cp_copy1

0x56af,	// (0x0003cd4c) setting_slider_pane_t1_copy1_ParamLimits

0x56af,	// (0x0003cd4c) setting_slider_pane_t1_copy1

0x56cd,	// (0x0003cd6a) setting_slider_pane_t2_copy1_ParamLimits

0x56cd,	// (0x0003cd6a) setting_slider_pane_t2_copy1

0x56e7,	// (0x0003cd84) setting_slider_pane_t3_copy1_ParamLimits

0x56e7,	// (0x0003cd84) setting_slider_pane_t3_copy1

0x56ff,	// (0x0003cd9c) slider_set_pane_copy1_ParamLimits

0x56ff,	// (0x0003cd9c) slider_set_pane_copy1

0xc04b,	// (0x000436e8) set_opt_bg_pane_g1_copy2

0xc053,	// (0x000436f0) set_opt_bg_pane_g2_copy2

0x691a,	// (0x0003dfb7) set_opt_bg_pane_g3_copy2

0xc063,	// (0x00043700) set_opt_bg_pane_g4_copy2

0xc06b,	// (0x00043708) set_opt_bg_pane_g5_copy2

0xc073,	// (0x00043710) set_opt_bg_pane_g6_copy2

0x6924,	// (0x0003dfc1) set_opt_bg_pane_g7_copy2

0x692c,	// (0x0003dfc9) set_opt_bg_pane_g8_copy2

0x6936,	// (0x0003dfd3) set_opt_bg_pane_g9_copy2

0x6940,	// (0x0003dfdd) aid_size_touch_slider_mark_copy1_ParamLimits

0x6940,	// (0x0003dfdd) aid_size_touch_slider_mark_copy1

0x6954,	// (0x0003dff1) slider_set_pane_g1_copy1

0x695d,	// (0x0003dffa) slider_set_pane_g2_copy1

0xe89b,	// (0x00045f38) slider_set_pane_g3_copy1_ParamLimits

0xe89b,	// (0x00045f38) slider_set_pane_g3_copy1

0xe8af,	// (0x00045f4c) slider_set_pane_g4_copy1_ParamLimits

0xe8af,	// (0x00045f4c) slider_set_pane_g4_copy1

0xe8c7,	// (0x00045f64) slider_set_pane_g5_copy1_ParamLimits

0xe8c7,	// (0x00045f64) slider_set_pane_g5_copy1

0xe89b,	// (0x00045f38) slider_set_pane_g6_copy1_ParamLimits

0xe89b,	// (0x00045f38) slider_set_pane_g6_copy1

0x6965,	// (0x0003e002) slider_set_pane_g7_copy1_ParamLimits

0x6965,	// (0x0003e002) slider_set_pane_g7_copy1

0xb291,	// (0x0004292e) bg_set_opt_pane_cp2_copy1

0x697b,	// (0x0003e018) setting_slider_graphic_pane_g1_copy1

0x6984,	// (0x0003e021) setting_slider_graphic_pane_t1_copy1

0x6994,	// (0x0003e031) setting_slider_graphic_pane_t2_copy1

0x69a4,	// (0x0003e041) slider_set_pane_cp_copy1

0x69b4,	// (0x0003e051) input_focus_pane_cp1_copy1

0x69bd,	// (0x0003e05a) list_set_text_pane_copy1

0x69c5,	// (0x0003e062) setting_text_pane_g1_copy1

0x1265,	// (0x00038902) set_text_pane_t1_copy1

0x69b4,	// (0x0003e051) input_focus_pane_cp2_copy1

0x69c5,	// (0x0003e062) setting_code_pane_g1_copy1

0x69ce,	// (0x0003e06b) setting_code_pane_t1_copy1

0xdb1d,	// (0x000451ba) list_set_graphic_pane_copy1

0xb291,	// (0x0004292e) bg_set_opt_pane_cp4_copy1

0xc747,	// (0x00043de4) list_set_graphic_pane_g1_copy1_ParamLimits

0xc747,	// (0x00043de4) list_set_graphic_pane_g1_copy1

0x69dc,	// (0x0003e079) list_set_graphic_pane_g2_copy1

0xc75f,	// (0x00043dfc) list_set_graphic_pane_t1_copy1_ParamLimits

0xc75f,	// (0x00043dfc) list_set_graphic_pane_t1_copy1

0xebec,	// (0x00046289) rs_clock_indi_pane_g1

0x69e4,	// (0x0003e081) rs_clock_indi_pane_t1

0x69f2,	// (0x0003e08f) rs_indi_pane

0x69fa,	// (0x0003e097) rs_indi_pane_g1

0x6a03,	// (0x0003e0a0) rs_indi_pane_g2

0x6a0c,	// (0x0003e0a9) rs_indi_pane_g3

0x0002,

0xfecb,	// (0x00047568) rs_indi_pane_g

0xc9c1,	// (0x0004405e) bg_popup_preview_window_pane_cp03

0x6a15,	// (0x0003e0b2) popup_fep_tooltip_window_t1

0x412e,	// (0x0003b7cb) popup_note2_window_g2_ParamLimits

0x412e,	// (0x0003b7cb) popup_note2_window_g2

0x0001,

0xfc64,	// (0x00047301) popup_note2_window_g_ParamLimits

0xfc64,	// (0x00047301) popup_note2_window_g

0x45fd,	// (0x0003bc9a) bg_popup_sub_pane_cp11_ParamLimits

0x460a,	// (0x0003bca7) cell_ai3_links_pane_g1_ParamLimits

0x4621,	// (0x0003bcbe) cell_ai3_links_pane_t1

0x1265,	// (0x00038902) set_text_pane_t1_copy1_ParamLimits

0xa141,	// (0x000417de) cell_graphic_popup_pane_cp2_ParamLimits

0xa141,	// (0x000417de) cell_graphic_popup_pane_cp2

0xa03b,	// (0x000416d8) cell_graphic_popup_pane_g1_cp2

0xb689,	// (0x00042d26) cell_graphic_popup_pane_g2_cp2

0x6a23,	// (0x0003e0c0) cell_graphic_popup_pane_g3_cp2

0x6a2b,	// (0x0003e0c8) cell_graphic_popup_pane_t2_cp2

0xb69a,	// (0x00042d37) grid_highlight_pane_cp3_cp2

0xc2fc,	// (0x00043999) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbff0,	// (0x0004368d) main_tmo_pane_ParamLimits

0xb24b,	// (0x000428e8) popup_tmo_big_image_note_window

0x613d,	// (0x0003d7da) cell_ai5_widget_list_pane

0x6145,	// (0x0003d7e2) cell_ai5_widget_lrg_icon_pane

0x9ff8,	// (0x00041695) tmo_note_info_pane_t1_ParamLimits

0xa00d,	// (0x000416aa) tmo_note_info_pane_t2_ParamLimits

0xa026,	// (0x000416c3) tmo_note_info_pane_t3_ParamLimits

0x6666,	// (0x0003dd03) tmo_note_info_pane_t4_ParamLimits

0x6678,	// (0x0003dd15) tmo_note_info_pane_t5_ParamLimits

0xfeb9,	// (0x00047556) tmo_note_info_pane_t_ParamLimits

0x67a9,	// (0x0003de46) settings_container_pane_ParamLimits

0x69ac,	// (0x0003e049) indicator_popup_pane_cp5

0x69ac,	// (0x0003e049) indicator_popup_pane_cp6

0xdb1d,	// (0x000451ba) list_set_graphic_pane_copy1_ParamLimits

0xb27d,	// (0x0004291a) bg_popup_window_pane_cp23

0x6a39,	// (0x0003e0d6) popup_tmo_big_image_note_window_g1

0x6a42,	// (0x0003e0df) popup_tmo_big_image_note_window_t1

0x6a52,	// (0x0003e0ef) popup_tmo_big_image_note_window_t2

0x6a62,	// (0x0003e0ff) popup_tmo_big_image_note_window_t3

0x0002,

0xfed2,	// (0x0004756f) popup_tmo_big_image_note_window_t

0x6a72,	// (0x0003e10f) cell_ai5_widget_lrg_icon_pane_g1

0x6a7a,	// (0x0003e117) cell_ai5_widget_lrg_icon_pane_t1

0x6a88,	// (0x0003e125) cell_ai5_widget_list_row_pane_ParamLimits

0x6a88,	// (0x0003e125) cell_ai5_widget_list_row_pane

0x6aa0,	// (0x0003e13d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x6aa0,	// (0x0003e13d) cell_ai5_widget_list_row_pane_g1

0x6aad,	// (0x0003e14a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x6aad,	// (0x0003e14a) cell_ai5_widget_list_row_pane_t1

0x6ac5,	// (0x0003e162) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x6ac5,	// (0x0003e162) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed9,	// (0x00047576) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed9,	// (0x00047576) cell_ai5_widget_list_row_pane_t

0xb27d,	// (0x0004291a) main_fep_vtchi_ss_pane

0x572c,	// (0x0003cdc9) popup_fep_char_pre_window

0x5734,	// (0x0003cdd1) popup_fep_ituss_window

0x5755,	// (0x0003cdf2) popup_fep_vkbss_window

0x6aed,	// (0x0003e18a) grid_vkbss_keypad_pane_ParamLimits

0x6aed,	// (0x0003e18a) grid_vkbss_keypad_pane

0x6afd,	// (0x0003e19a) ituss_keypad_pane

0x5780,	// (0x0003ce1d) aid_vkbss_key_offset_ParamLimits

0x5780,	// (0x0003ce1d) aid_vkbss_key_offset

0x578c,	// (0x0003ce29) cell_vkbss_key_pane_ParamLimits

0x578c,	// (0x0003ce29) cell_vkbss_key_pane

0xdb11,	// (0x000451ae) bg_cell_vkbss_key_g1_ParamLimits

0xdb11,	// (0x000451ae) bg_cell_vkbss_key_g1

0x6b0d,	// (0x0003e1aa) cell_vkbss_key_3p_pane_ParamLimits

0x6b0d,	// (0x0003e1aa) cell_vkbss_key_3p_pane

0x6b27,	// (0x0003e1c4) cell_vkbss_key_g1_ParamLimits

0x6b27,	// (0x0003e1c4) cell_vkbss_key_g1

0x6b41,	// (0x0003e1de) cell_vkbss_key_t1_ParamLimits

0x6b41,	// (0x0003e1de) cell_vkbss_key_t1

0x57a2,	// (0x0003ce3f) cell_ituss_key_pane_ParamLimits

0x57a2,	// (0x0003ce3f) cell_ituss_key_pane

0x6b6c,	// (0x0003e209) bg_cell_ituss_key_g1_ParamLimits

0x6b6c,	// (0x0003e209) bg_cell_ituss_key_g1

0x6b78,	// (0x0003e215) cell_ituss_key_pane_g1_ParamLimits

0x6b78,	// (0x0003e215) cell_ituss_key_pane_g1

0x6b8c,	// (0x0003e229) cell_ituss_key_pane_g2_ParamLimits

0x6b8c,	// (0x0003e229) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0004757d) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0004757d) cell_ituss_key_pane_g

0x6bba,	// (0x0003e257) cell_ituss_key_t1_ParamLimits

0x6bba,	// (0x0003e257) cell_ituss_key_t1

0x6bf0,	// (0x0003e28d) cell_ituss_key_t2_ParamLimits

0x6bf0,	// (0x0003e28d) cell_ituss_key_t2

0x6c21,	// (0x0003e2be) cell_ituss_key_t3_ParamLimits

0x6c21,	// (0x0003e2be) cell_ituss_key_t3

0x6c5b,	// (0x0003e2f8) cell_ituss_key_t4_ParamLimits

0x6c5b,	// (0x0003e2f8) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00047582) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00047582) cell_ituss_key_t

0x6c95,	// (0x0003e332) cell_vkbss_key_3p_pane_g1

0x6c9d,	// (0x0003e33a) cell_vkbss_key_3p_pane_g2

0x6ca5,	// (0x0003e342) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0004758b) cell_vkbss_key_3p_pane_g

0xb27d,	// (0x0004291a) bg_popup_fep_char_preview_window_cp02

0x6cad,	// (0x0003e34a) popup_fep_char_pre_window_t1

0x9e85,	// (0x00041522) main_ai5_sk_pane

0x66f2,	// (0x0003dd8f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x66fe,	// (0x0003dd9b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x6711,	// (0x0003ddae) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x671d,	// (0x0003ddba) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec4,	// (0x00047561) cell_contacts_ai5_widget_pane_g_ParamLimits

0x672f,	// (0x0003ddcc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbff0,	// (0x0004368d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xa043,	// (0x000416e0) main_ai5_sk_pane_g1

0xd19d,	// (0x0004483a) popup_query_code_window_g1

0x574a,	// (0x0003cde7) popup_fep_vkb_icf_pane

0x575e,	// (0x0003cdfb) popup_fep_vtchi_icf_pane

0xbff0,	// (0x0004368d) bg_icf_pane

0x6cbc,	// (0x0003e359) list_vkb_icf_pane

0xbff0,	// (0x0004368d) bg_icf_pane_cp01

0x6cc8,	// (0x0003e365) vtchi_icf_list_pane

0x6cd9,	// (0x0003e376) list_vkb_icf_pane_t1_ParamLimits

0x6cd9,	// (0x0003e376) list_vkb_icf_pane_t1

0x6cf2,	// (0x0003e38f) vtchi_icf_list_pane_t1_ParamLimits

0x6cf2,	// (0x0003e38f) vtchi_icf_list_pane_t1

0x5734,	// (0x0003cdd1) popup_fep_ituss_window_ParamLimits

0x575e,	// (0x0003cdfb) popup_fep_vtchi_icf_pane_ParamLimits

0x6afd,	// (0x0003e19a) ituss_keypad_pane_ParamLimits

0x5774,	// (0x0003ce11) ituss_sks_pane

0xbff0,	// (0x0004368d) bg_icf_pane_ParamLimits

0x571d,	// (0x0003cdba) icf_edit_indi_pane_ParamLimits

0x571d,	// (0x0003cdba) icf_edit_indi_pane

0x6cbc,	// (0x0003e359) list_vkb_icf_pane_ParamLimits

0xbff0,	// (0x0004368d) bg_icf_pane_cp01_ParamLimits

0x571d,	// (0x0003cdba) icf_edit_indi_pane_cp01_ParamLimits

0x571d,	// (0x0003cdba) icf_edit_indi_pane_cp01

0x6cd0,	// (0x0003e36d) vtchi_query_pane

0xed7d,	// (0x0004641a) icf_edit_indi_pane_g1_ParamLimits

0xed7d,	// (0x0004641a) icf_edit_indi_pane_g1

0x6d7f,	// (0x0003e41c) icf_edit_indi_pane_g2_ParamLimits

0x6d7f,	// (0x0003e41c) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x000475a3) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x000475a3) icf_edit_indi_pane_g

0x6d8e,	// (0x0003e42b) icf_edit_indi_pane_t1

0x6d15,	// (0x0003e3b2) bg_input_focus_pane_cp042

0xb86d,	// (0x00042f0a) vtchi_button_pane

0x6d1e,	// (0x0003e3bb) vtchi_query_pane_t1

0x6d2c,	// (0x0003e3c9) vtchi_query_pane_t2

0x6d3a,	// (0x0003e3d7) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x00047592) vtchi_query_pane_t

0xb27d,	// (0x0004291a) bg_button_pane_cp13

0x6d48,	// (0x0003e3e5) vtchi_button_pane_g1

0x6d50,	// (0x0003e3ed) ituss_sks_pane_g1

0x6d5b,	// (0x0003e3f8) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00047599) ituss_sks_pane_g

0x6d63,	// (0x0003e400) ituss_sks_pane_t1

0x6d71,	// (0x0003e40e) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0004759e) ituss_sks_pane_t

0xe863,	// (0x00045f00) indicator_nsta_pane_cp_g1

0xe86c,	// (0x00045f09) indicator_nsta_pane_cp_g2

0xe874,	// (0x00045f11) indicator_nsta_pane_cp_g3

0xe87c,	// (0x00045f19) indicator_nsta_pane_cp_g4

0xe884,	// (0x00045f21) indicator_nsta_pane_cp_g5

0xe884,	// (0x00045f21) indicator_nsta_pane_cp_g6

0x0005,

0xfaae,	// (0x0004714b) indicator_nsta_pane_cp_g

0x9c23,	// (0x000412c0) cell_graphic2_pane_t2_ParamLimits

0x9c23,	// (0x000412c0) cell_graphic2_pane_t2

0x0001,

0xfdbb,	// (0x00047458) cell_graphic2_pane_t_ParamLimits

0xfdbb,	// (0x00047458) cell_graphic2_pane_t

0x9c56,	// (0x000412f3) cell_graphic2_control_pane_t1

0xa083,	// (0x00041720) signal_pane_g3_ParamLimits

0xa083,	// (0x00041720) signal_pane_g3

0xa097,	// (0x00041734) signal_pane_g4_ParamLimits

0xa097,	// (0x00041734) signal_pane_g4

0x6ad7,	// (0x0003e174) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x6ad7,	// (0x0003e174) cell_ai5_widget_list_row_pane_t3

0x6ba8,	// (0x0003e245) cell_ituss_key_pane_t1_ParamLimits

0x6ba8,	// (0x0003e245) cell_ituss_key_pane_t1

0xcedd,	// (0x0004457a) form_field_data_wide_pane_vc_t2_ParamLimits

0xcedd,	// (0x0004457a) form_field_data_wide_pane_vc_t2

0xcef1,	// (0x0004458e) form_field_data_wide_pane_vc_t3_ParamLimits

0xcef1,	// (0x0004458e) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x00046ea7) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x00046ea7) form_field_data_wide_pane_vc_t

0xe591,	// (0x00045c2e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xe591,	// (0x00045c2e) form_field_slider_wide_pane_vc_t3

0xe66b,	// (0x00045d08) form_field_popup_wide_pane_vc_t2_ParamLimits

0xe66b,	// (0x00045d08) form_field_popup_wide_pane_vc_t2

0xe682,	// (0x00045d1f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xe682,	// (0x00045d1f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9d,	// (0x0004713a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9d,	// (0x0004713a) form_field_popup_wide_pane_vc_t

0x9f23,	// (0x000415c0) aid_fshwr2_btn_pane_ParamLimits

0x9f32,	// (0x000415cf) aid_fshwr2_syb_pane_ParamLimits

0x9f44,	// (0x000415e1) aid_fshwr2_txt_pane_ParamLimits

0xbff0,	// (0x0004368d) fshwr2_bg_pane_ParamLimits

0x9f53,	// (0x000415f0) fshwr2_func_candi_pane_ParamLimits

0x9f64,	// (0x00041601) fshwr2_hwr_syb_pane_ParamLimits

0x9f7f,	// (0x0004161c) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large
