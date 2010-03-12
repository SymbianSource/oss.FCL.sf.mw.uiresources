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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000f5f5 };

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
0xc5ee,	// (0x0001bbe3) Screen

0xc5fa,	// (0x0001bbef) application_window_ParamLimits

0xc5fa,	// (0x0001bbef) application_window

0x22c1,	// (0x000118b6) screen_g1

0xb5a2,	// (0x0001ab97) area_bottom_pane_ParamLimits

0xb5a2,	// (0x0001ab97) area_bottom_pane

0x014e,	// (0x0000f743) area_top_pane_ParamLimits

0x014e,	// (0x0000f743) area_top_pane

0x01ec,	// (0x0000f7e1) main_pane_ParamLimits

0x01ec,	// (0x0000f7e1) main_pane

0x22cb,	// (0x000118c0) misc_graphics

0xd3a7,	// (0x0001c99c) battery_pane_ParamLimits

0xd3a7,	// (0x0001c99c) battery_pane

0x51c3,	// (0x000147b8) bg_status_flat_pane_g8

0x51cb,	// (0x000147c0) bg_status_flat_pane_g9

0x44a8,	// (0x00013a9d) context_pane_ParamLimits

0x44a8,	// (0x00013a9d) context_pane

0xd512,	// (0x0001cb07) navi_pane_ParamLimits

0xd512,	// (0x0001cb07) navi_pane

0xd58a,	// (0x0001cb7f) signal_pane_ParamLimits

0xd58a,	// (0x0001cb7f) signal_pane

0x0008,

0xf875,	// (0x0001ee6a) bg_status_flat_pane_g

0xd61a,	// (0x0001cc0f) status_pane_g1_ParamLimits

0xd61a,	// (0x0001cc0f) status_pane_g1

0xd630,	// (0x0001cc25) status_pane_g2_ParamLimits

0xd630,	// (0x0001cc25) status_pane_g2

0x46c1,	// (0x00013cb6) status_pane_g3_ParamLimits

0x46c1,	// (0x00013cb6) status_pane_g3

0x0004,

0xf7a1,	// (0x0001ed96) status_pane_g_ParamLimits

0xf7a1,	// (0x0001ed96) status_pane_g

0xd63c,	// (0x0001cc31) title_pane_ParamLimits

0xd63c,	// (0x0001cc31) title_pane

0xd69f,	// (0x0001cc94) uni_indicator_pane_ParamLimits

0xd69f,	// (0x0001cc94) uni_indicator_pane

0x42fe,	// (0x000138f3) bg_list_pane_ParamLimits

0x42fe,	// (0x000138f3) bg_list_pane

0xd2e6,	// (0x0001c8db) find_pane

0xd2ee,	// (0x0001c8e3) listscroll_app_pane_ParamLimits

0xd2ee,	// (0x0001c8e3) listscroll_app_pane

0x4332,	// (0x00013927) listscroll_form_pane

0xb891,	// (0x0001ae86) listscroll_gen_pane_ParamLimits

0xb891,	// (0x0001ae86) listscroll_gen_pane

0x4332,	// (0x00013927) listscroll_set_pane

0x5d82,	// (0x00015377) main_idle_act_pane

0x4004,	// (0x000135f9) main_idle_trad_pane

0x4004,	// (0x000135f9) main_list_empty_pane

0x434c,	// (0x00013941) main_midp_pane

0x4358,	// (0x0001394d) main_pane_g1_ParamLimits

0x4358,	// (0x0001394d) main_pane_g1

0xb8a5,	// (0x0001ae9a) popup_ai_message_window_ParamLimits

0xb8a5,	// (0x0001ae9a) popup_ai_message_window

0xb936,	// (0x0001af2b) popup_fep_china_uni_window_ParamLimits

0xb936,	// (0x0001af2b) popup_fep_china_uni_window

0x0bd7,	// (0x000101cc) popup_fep_japan_candidate_window_ParamLimits

0x0bd7,	// (0x000101cc) popup_fep_japan_candidate_window

0x0bf7,	// (0x000101ec) popup_fep_japan_predictive_window_ParamLimits

0x0bf7,	// (0x000101ec) popup_fep_japan_predictive_window

0xb992,	// (0x0001af87) popup_find_window

0xb9af,	// (0x0001afa4) popup_grid_graphic_window_ParamLimits

0xb9af,	// (0x0001afa4) popup_grid_graphic_window

0x0c5c,	// (0x00010251) popup_large_graphic_colour_window

0xba47,	// (0x0001b03c) popup_menu_window_ParamLimits

0xba47,	// (0x0001b03c) popup_menu_window

0xbc19,	// (0x0001b20e) popup_note_image_window

0xbbdf,	// (0x0001b1d4) popup_note_wait_window_ParamLimits

0xbbdf,	// (0x0001b1d4) popup_note_wait_window

0xbc31,	// (0x0001b226) popup_note_window_ParamLimits

0xbc31,	// (0x0001b226) popup_note_window

0xbcd7,	// (0x0001b2cc) popup_query_code_window_ParamLimits

0xbcd7,	// (0x0001b2cc) popup_query_code_window

0x0ea4,	// (0x00010499) popup_query_data_code_window_ParamLimits

0x0ea4,	// (0x00010499) popup_query_data_code_window

0xbd11,	// (0x0001b306) popup_query_data_window_ParamLimits

0xbd11,	// (0x0001b306) popup_query_data_window

0xbd93,	// (0x0001b388) popup_query_sat_info_window_ParamLimits

0xbd93,	// (0x0001b388) popup_query_sat_info_window

0xbe2a,	// (0x0001b41f) popup_snote_single_graphic_window_ParamLimits

0xbe2a,	// (0x0001b41f) popup_snote_single_graphic_window

0xbe2a,	// (0x0001b41f) popup_snote_single_text_window_ParamLimits

0xbe2a,	// (0x0001b41f) popup_snote_single_text_window

0x0f2b,	// (0x00010520) popup_sub_window_general

0x105b,	// (0x00010650) popup_window_general_ParamLimits

0x105b,	// (0x00010650) popup_window_general

0x436e,	// (0x00013963) power_save_pane

0xb724,	// (0x0001ad19) control_pane_g1_ParamLimits

0xb724,	// (0x0001ad19) control_pane_g1

0xb74d,	// (0x0001ad42) control_pane_g2_ParamLimits

0xb74d,	// (0x0001ad42) control_pane_g2

0x42c1,	// (0x000138b6) control_pane_g3_ParamLimits

0x42c1,	// (0x000138b6) control_pane_g3

0x0007,

0xf789,	// (0x0001ed7e) control_pane_g_ParamLimits

0xf789,	// (0x0001ed7e) control_pane_g

0xb78a,	// (0x0001ad7f) control_pane_t1_ParamLimits

0xb78a,	// (0x0001ad7f) control_pane_t1

0xb7e8,	// (0x0001addd) control_pane_t2_ParamLimits

0xb7e8,	// (0x0001addd) control_pane_t2

0x0002,

0xf79a,	// (0x0001ed8f) control_pane_t_ParamLimits

0xf79a,	// (0x0001ed8f) control_pane_t

0x41e2,	// (0x000137d7) navi_navi_volume_pane_cp1

0x41eb,	// (0x000137e0) status_small_icon_pane

0x41f3,	// (0x000137e8) status_small_pane_g1_ParamLimits

0x41f3,	// (0x000137e8) status_small_pane_g1

0x4227,	// (0x0001381c) status_small_pane_g2_ParamLimits

0x4227,	// (0x0001381c) status_small_pane_g2

0x4233,	// (0x00013828) status_small_pane_g3_ParamLimits

0x4233,	// (0x00013828) status_small_pane_g3

0x423f,	// (0x00013834) status_small_pane_g4_ParamLimits

0x423f,	// (0x00013834) status_small_pane_g4

0x424b,	// (0x00013840) status_small_pane_g5_ParamLimits

0x424b,	// (0x00013840) status_small_pane_g5

0x425a,	// (0x0001384f) status_small_pane_g6_ParamLimits

0x425a,	// (0x0001384f) status_small_pane_g6

0x0007,

0xf778,	// (0x0001ed6d) status_small_pane_g_ParamLimits

0xf778,	// (0x0001ed6d) status_small_pane_g

0x428a,	// (0x0001387f) status_small_pane_t1

0x42ad,	// (0x000138a2) status_small_wait_pane_ParamLimits

0x42ad,	// (0x000138a2) status_small_wait_pane

0xd02f,	// (0x0001c624) aid_levels_signal_ParamLimits

0xd02f,	// (0x0001c624) aid_levels_signal

0xd047,	// (0x0001c63c) signal_pane_g1_ParamLimits

0xd047,	// (0x0001c63c) signal_pane_g1

0xd062,	// (0x0001c657) signal_pane_g2_ParamLimits

0xd062,	// (0x0001c657) signal_pane_g2

0x0003,

0xf709,	// (0x0001ecfe) signal_pane_g_ParamLimits

0xf709,	// (0x0001ecfe) signal_pane_g

0x3a54,	// (0x00013049) context_pane_g1

0xc60a,	// (0x0001bbff) title_pane_g1

0xc641,	// (0x0001bc36) title_pane_t1

0x2373,	// (0x00011968) title_pane_t2

0x2399,	// (0x0001198e) title_pane_t3

0x0002,

0xf55d,	// (0x0001eb52) title_pane_t

0xd6c7,	// (0x0001ccbc) aid_levels_battery_ParamLimits

0xd6c7,	// (0x0001ccbc) aid_levels_battery

0xd6e3,	// (0x0001ccd8) battery_pane_g1_ParamLimits

0xd6e3,	// (0x0001ccd8) battery_pane_g1

0xd700,	// (0x0001ccf5) battery_pane_g2_ParamLimits

0xd700,	// (0x0001ccf5) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001eda1) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001eda1) battery_pane_g

0x5af9,	// (0x000150ee) uni_indicator_pane_g1

0x5b0e,	// (0x00015103) uni_indicator_pane_g2

0x5b24,	// (0x00015119) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0001ef12) uni_indicator_pane_g

0x3e76,	// (0x0001346b) navi_icon_pane_ParamLimits

0x3e76,	// (0x0001346b) navi_icon_pane

0x3dbf,	// (0x000133b4) navi_midp_pane

0x3e92,	// (0x00013487) navi_navi_pane

0x3e9c,	// (0x00013491) navi_text_pane_ParamLimits

0x3e9c,	// (0x00013491) navi_text_pane

0x22c1,	// (0x000118b6) status_small_wait_pane_g1

0x27e2,	// (0x00011dd7) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0001ef0d) status_small_wait_pane_g

0x581e,	// (0x00014e13) navi_navi_icon_text_pane

0x5826,	// (0x00014e1b) navi_navi_pane_g1_ParamLimits

0x5826,	// (0x00014e1b) navi_navi_pane_g1

0x5838,	// (0x00014e2d) navi_navi_pane_g2_ParamLimits

0x5838,	// (0x00014e2d) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0001eedb) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0001eedb) navi_navi_pane_g

0x584a,	// (0x00014e3f) navi_navi_tabs_pane

0x5853,	// (0x00014e48) navi_navi_text_pane

0x581e,	// (0x00014e13) navi_navi_volume_pane

0x57fa,	// (0x00014def) navi_text_pane_t1

0x57ee,	// (0x00014de3) navi_icon_pane_g1

0x5741,	// (0x00014d36) navi_navi_text_pane_t1

0xc0f3,	// (0x0001b6e8) navi_navi_volume_pane_g1

0xc0fb,	// (0x0001b6f0) volume_small_pane

0xd871,	// (0x0001ce66) navi_navi_icon_text_pane_g1

0xd879,	// (0x0001ce6e) navi_navi_icon_text_pane_t1

0x3e92,	// (0x00013487) navi_tabs_2_long_pane

0x3e92,	// (0x00013487) navi_tabs_2_pane

0x3e92,	// (0x00013487) navi_tabs_3_long_pane

0x3e92,	// (0x00013487) navi_tabs_3_pane

0x3e92,	// (0x00013487) navi_tabs_4_pane

0xc0d3,	// (0x0001b6c8) tabs_2_active_pane_ParamLimits

0xc0d3,	// (0x0001b6c8) tabs_2_active_pane

0xc0e3,	// (0x0001b6d8) tabs_2_passive_pane_ParamLimits

0xc0e3,	// (0x0001b6d8) tabs_2_passive_pane

0xc0a1,	// (0x0001b696) tabs_3_active_pane_ParamLimits

0xc0a1,	// (0x0001b696) tabs_3_active_pane

0xc0b1,	// (0x0001b6a6) tabs_3_passive_pane_ParamLimits

0xc0b1,	// (0x0001b6a6) tabs_3_passive_pane

0xc0c2,	// (0x0001b6b7) tabs_3_passive_pane_cp_ParamLimits

0xc0c2,	// (0x0001b6b7) tabs_3_passive_pane_cp

0xc05d,	// (0x0001b652) tabs_4_active_pane_ParamLimits

0xc05d,	// (0x0001b652) tabs_4_active_pane

0xc06e,	// (0x0001b663) tabs_4_passive_pane_ParamLimits

0xc06e,	// (0x0001b663) tabs_4_passive_pane

0xc07f,	// (0x0001b674) tabs_4_passive_pane_cp_ParamLimits

0xc07f,	// (0x0001b674) tabs_4_passive_pane_cp

0xc090,	// (0x0001b685) tabs_4_passive_pane_cp2_ParamLimits

0xc090,	// (0x0001b685) tabs_4_passive_pane_cp2

0xc03d,	// (0x0001b632) tabs_2_long_active_pane_ParamLimits

0xc03d,	// (0x0001b632) tabs_2_long_active_pane

0xc04d,	// (0x0001b642) tabs_2_long_passive_pane_ParamLimits

0xc04d,	// (0x0001b642) tabs_2_long_passive_pane

0xc00a,	// (0x0001b5ff) tabs_3_long_active_pane_ParamLimits

0xc00a,	// (0x0001b5ff) tabs_3_long_active_pane

0xc01b,	// (0x0001b610) tabs_3_long_passive_pane_ParamLimits

0xc01b,	// (0x0001b610) tabs_3_long_passive_pane

0xc02c,	// (0x0001b621) tabs_3_long_passive_pane_cp_ParamLimits

0xc02c,	// (0x0001b621) tabs_3_long_passive_pane_cp

0x1220,	// (0x00010815) volume_small_pane_g1

0xbfb9,	// (0x0001b5ae) volume_small_pane_g2

0xbfc2,	// (0x0001b5b7) volume_small_pane_g3

0xbfcb,	// (0x0001b5c0) volume_small_pane_g4

0xbfd4,	// (0x0001b5c9) volume_small_pane_g5

0xbfdd,	// (0x0001b5d2) volume_small_pane_g6

0xbfe6,	// (0x0001b5db) volume_small_pane_g7

0xbfef,	// (0x0001b5e4) volume_small_pane_g8

0xbff8,	// (0x0001b5ed) volume_small_pane_g9

0xc001,	// (0x0001b5f6) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001eea7) volume_small_pane_g

0x2640,	// (0x00011c35) bg_active_tab_pane_cp2_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp2

0xc6cd,	// (0x0001bcc2) tabs_3_active_pane_g1

0xc6d5,	// (0x0001bcca) tabs_3_active_pane_t1

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp2_ParamLimits

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp2

0xc6cd,	// (0x0001bcc2) tabs_3_passive_pane_g1

0xc6d5,	// (0x0001bcca) tabs_3_passive_pane_t1

0x2640,	// (0x00011c35) bg_active_tab_pane_cp3_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp3

0xc6e7,	// (0x0001bcdc) tabs_4_active_pane_g1

0xc6ef,	// (0x0001bce4) tabs_4_active_pane_t1

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp3_ParamLimits

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp3

0xc6e7,	// (0x0001bcdc) tabs_4_1_passive_pane_g1

0xc6ef,	// (0x0001bce4) tabs_4_1_passive_pane_t1

0x434c,	// (0x00013941) list_highlight_pane_cp2

0xda13,	// (0x0001d008) list_set_pane_ParamLimits

0xda13,	// (0x0001d008) list_set_pane

0xdaad,	// (0x0001d0a2) main_pane_set_t1_ParamLimits

0xdaad,	// (0x0001d0a2) main_pane_set_t1

0xdacd,	// (0x0001d0c2) main_pane_set_t2_ParamLimits

0xdacd,	// (0x0001d0c2) main_pane_set_t2

0xdae1,	// (0x0001d0d6) main_pane_set_t3_ParamLimits

0xdae1,	// (0x0001d0d6) main_pane_set_t3

0xdaf3,	// (0x0001d0e8) main_pane_set_t4_ParamLimits

0xdaf3,	// (0x0001d0e8) main_pane_set_t4

0x0003,

0xf982,	// (0x0001ef77) main_pane_set_t_ParamLimits

0xf982,	// (0x0001ef77) main_pane_set_t

0xdb05,	// (0x0001d0fa) setting_code_pane

0xdb0f,	// (0x0001d104) setting_slider_graphic_pane

0xdb0f,	// (0x0001d104) setting_slider_pane

0xdb0f,	// (0x0001d104) setting_text_pane

0xdb0f,	// (0x0001d104) setting_volume_pane

0x0431,	// (0x0000fa26) volume_set_pane

0x23ab,	// (0x000119a0) bg_set_opt_pane_cp

0x0439,	// (0x0000fa2e) setting_slider_pane_t1

0x0452,	// (0x0000fa47) setting_slider_pane_t2

0x046c,	// (0x0000fa61) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001eb59) setting_slider_pane_t

0x0484,	// (0x0000fa79) slider_set_pane

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp2

0x23ed,	// (0x000119e2) setting_slider_graphic_pane_g1

0x049a,	// (0x0000fa8f) setting_slider_graphic_pane_t1

0x04aa,	// (0x0000fa9f) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001eb60) setting_slider_graphic_pane_t

0x04ba,	// (0x0000faaf) slider_set_pane_cp

0x22cb,	// (0x000118c0) input_focus_pane_cp1

0x5d69,	// (0x0001535e) list_set_text_pane

0x22c1,	// (0x000118b6) setting_text_pane_g1

0x22cb,	// (0x000118c0) input_focus_pane_cp2

0x22c1,	// (0x000118b6) setting_code_pane_g1

0x23f6,	// (0x000119eb) setting_code_pane_t1

0x2404,	// (0x000119f9) set_text_pane_t1_ParamLimits

0x2404,	// (0x000119f9) set_text_pane_t1

0x32ca,	// (0x000128bf) set_opt_bg_pane_g1

0x32d2,	// (0x000128c7) set_opt_bg_pane_g2

0x5d43,	// (0x00015338) set_opt_bg_pane_g3

0x32e2,	// (0x000128d7) set_opt_bg_pane_g4

0x32ea,	// (0x000128df) set_opt_bg_pane_g5

0x32f2,	// (0x000128e7) set_opt_bg_pane_g6

0x5d4d,	// (0x00015342) set_opt_bg_pane_g7

0x5d55,	// (0x0001534a) set_opt_bg_pane_g8

0x5d5f,	// (0x00015354) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001ef64) set_opt_bg_pane_g

0x5d36,	// (0x0001532b) slider_set_pane_g1

0x13e8,	// (0x000109dd) slider_set_pane_g2

0x0006,

0xf960,	// (0x0001ef55) slider_set_pane_g

0x1384,	// (0x00010979) volume_set_pane_g1

0x138c,	// (0x00010981) volume_set_pane_g2

0x1394,	// (0x00010989) volume_set_pane_g3

0x139c,	// (0x00010991) volume_set_pane_g4

0x13a4,	// (0x00010999) volume_set_pane_g5

0x13ac,	// (0x000109a1) volume_set_pane_g6

0x13b4,	// (0x000109a9) volume_set_pane_g7

0x13bc,	// (0x000109b1) volume_set_pane_g8

0x13c4,	// (0x000109b9) volume_set_pane_g9

0x13cc,	// (0x000109c1) volume_set_pane_g10

0x0009,

0xf938,	// (0x0001ef2d) volume_set_pane_g

0xc701,	// (0x0001bcf6) indicator_pane_ParamLimits

0xc701,	// (0x0001bcf6) indicator_pane

0xc729,	// (0x0001bd1e) main_idle_pane_g2_ParamLimits

0xc729,	// (0x0001bd1e) main_idle_pane_g2

0xc761,	// (0x0001bd56) main_pane_idle_g1_ParamLimits

0xc761,	// (0x0001bd56) main_pane_idle_g1

0x245f,	// (0x00011a54) popup_clock_digital_analogue_window_ParamLimits

0x245f,	// (0x00011a54) popup_clock_digital_analogue_window

0xc788,	// (0x0001bd7d) soft_indicator_pane_ParamLimits

0xc788,	// (0x0001bd7d) soft_indicator_pane

0xc7a2,	// (0x0001bd97) wallpaper_pane_ParamLimits

0xc7a2,	// (0x0001bd97) wallpaper_pane

0x22c1,	// (0x000118b6) wallpaper_pane_g1

0xc7b4,	// (0x0001bda9) indicator_pane_g1_ParamLimits

0xc7b4,	// (0x0001bda9) indicator_pane_g1

0x625c,	// (0x00015851) navi_navi_icon_text_pane_srt_g1

0x24b1,	// (0x00011aa6) soft_indicator_pane_t1

0x24cb,	// (0x00011ac0) aid_ps_area_pane

0xc7ca,	// (0x0001bdbf) aid_ps_clock_pane

0x24ea,	// (0x00011adf) aid_ps_indicator_pane

0x24f6,	// (0x00011aeb) indicator_ps_pane_ParamLimits

0x24f6,	// (0x00011aeb) indicator_ps_pane

0x2505,	// (0x00011afa) power_save_pane_g1_ParamLimits

0x2505,	// (0x00011afa) power_save_pane_g1

0x2511,	// (0x00011b06) power_save_pane_g2_ParamLimits

0x2511,	// (0x00011b06) power_save_pane_g2

0x0042,	// (0x0000f637) aid_navinavi_width_pane

0x24cb,	// (0x00011ac0) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001eb65) power_save_pane_g_ParamLimits

0xf570,	// (0x0001eb65) power_save_pane_g

0x251f,	// (0x00011b14) power_save_pane_t1_ParamLimits

0x251f,	// (0x00011b14) power_save_pane_t1

0xc7ca,	// (0x0001bdbf) aid_ps_clock_pane_ParamLimits

0x24ea,	// (0x00011adf) aid_ps_indicator_pane_ParamLimits

0x2531,	// (0x00011b26) power_save_pane_t4_ParamLimits

0x2531,	// (0x00011b26) power_save_pane_t4

0x0001,

0xf575,	// (0x0001eb6a) power_save_pane_t_ParamLimits

0xf575,	// (0x0001eb6a) power_save_pane_t

0x255b,	// (0x00011b50) power_save_t3_ParamLimits

0x255b,	// (0x00011b50) power_save_t3

0x2546,	// (0x00011b3b) power_save_t2_ParamLimits

0x2546,	// (0x00011b3b) power_save_t2

0x2570,	// (0x00011b65) indicator_ps_pane_g1

0xc7d8,	// (0x0001bdcd) ai_gene_pane_ParamLimits

0xc7d8,	// (0x0001bdcd) ai_gene_pane

0xc7ef,	// (0x0001bde4) ai_links_pane_ParamLimits

0xc7ef,	// (0x0001bde4) ai_links_pane

0xc807,	// (0x0001bdfc) indicator_pane_cp1_ParamLimits

0xc807,	// (0x0001bdfc) indicator_pane_cp1

0xc816,	// (0x0001be0b) main_pane_idle_g1_cp_ParamLimits

0xc816,	// (0x0001be0b) main_pane_idle_g1_cp

0x25a9,	// (0x00011b9e) popup_ai_links_title_window

0xc82e,	// (0x0001be23) soft_indicator_pane_cp1_ParamLimits

0xc82e,	// (0x0001be23) soft_indicator_pane_cp1

0x5ae7,	// (0x000150dc) ai_links_pane_g1

0x5af0,	// (0x000150e5) grid_ai_links_pane

0xd985,	// (0x0001cf7a) ai_gene_pane_1

0x5ad5,	// (0x000150ca) ai_gene_pane_2

0x5ade,	// (0x000150d3) list_highlight_pane_cp4

0xd961,	// (0x0001cf56) cell_ai_link_pane_ParamLimits

0xd961,	// (0x0001cf56) cell_ai_link_pane

0x5aa6,	// (0x0001509b) cell_ai_link_pane_g1

0x27e2,	// (0x00011dd7) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001ef08) cell_ai_link_pane_g

0x22cb,	// (0x000118c0) grid_highlight_cp2

0x22cb,	// (0x000118c0) bg_popup_sub_pane_cp1

0x25cc,	// (0x00011bc1) popup_ai_links_title_window_t1

0x59f4,	// (0x00014fe9) ai_gene_pane_1_g1_ParamLimits

0x59f4,	// (0x00014fe9) ai_gene_pane_1_g1

0x5a00,	// (0x00014ff5) ai_gene_pane_1_g2_ParamLimits

0x5a00,	// (0x00014ff5) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0001eefe) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0001eefe) ai_gene_pane_1_g

0x5a0d,	// (0x00015002) ai_gene_pane_1_t1_ParamLimits

0x5a0d,	// (0x00015002) ai_gene_pane_1_t1

0x5a41,	// (0x00015036) grid_ai_soft_ind_pane

0x59df,	// (0x00014fd4) ai_gene_pane_2_t1_ParamLimits

0x59df,	// (0x00014fd4) ai_gene_pane_2_t1

0xc842,	// (0x0001be37) main_pane_empty_t1_ParamLimits

0xc842,	// (0x0001be37) main_pane_empty_t1

0xc85a,	// (0x0001be4f) main_pane_empty_t2_ParamLimits

0xc85a,	// (0x0001be4f) main_pane_empty_t2

0xc86f,	// (0x0001be64) main_pane_empty_t3_ParamLimits

0xc86f,	// (0x0001be64) main_pane_empty_t3

0xc881,	// (0x0001be76) main_pane_empty_t4_ParamLimits

0xc881,	// (0x0001be76) main_pane_empty_t4

0xc893,	// (0x0001be88) main_pane_empty_t5_ParamLimits

0xc893,	// (0x0001be88) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001eb6f) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001eb6f) main_pane_empty_t

0x33c7,	// (0x000129bc) bg_popup_window_pane_ParamLimits

0x33c7,	// (0x000129bc) bg_popup_window_pane

0x574f,	// (0x00014d44) find_popup_pane_cp2_ParamLimits

0x574f,	// (0x00014d44) find_popup_pane_cp2

0x575b,	// (0x00014d50) heading_pane_ParamLimits

0x575b,	// (0x00014d50) heading_pane

0x22cb,	// (0x000118c0) bg_popup_sub_pane

0xd896,	// (0x0001ce8b) bg_popup_window_pane_g1_ParamLimits

0xd896,	// (0x0001ce8b) bg_popup_window_pane_g1

0xd8a5,	// (0x0001ce9a) bg_popup_window_pane_g2_ParamLimits

0xd8a5,	// (0x0001ce9a) bg_popup_window_pane_g2

0xd8b1,	// (0x0001cea6) bg_popup_window_pane_g3_ParamLimits

0xd8b1,	// (0x0001cea6) bg_popup_window_pane_g3

0xd8bd,	// (0x0001ceb2) bg_popup_window_pane_g4_ParamLimits

0xd8bd,	// (0x0001ceb2) bg_popup_window_pane_g4

0xd8cc,	// (0x0001cec1) bg_popup_window_pane_g5_ParamLimits

0xd8cc,	// (0x0001cec1) bg_popup_window_pane_g5

0xd8dc,	// (0x0001ced1) bg_popup_window_pane_g6_ParamLimits

0xd8dc,	// (0x0001ced1) bg_popup_window_pane_g6

0xd8e8,	// (0x0001cedd) bg_popup_window_pane_g7_ParamLimits

0xd8e8,	// (0x0001cedd) bg_popup_window_pane_g7

0xd8f7,	// (0x0001ceec) bg_popup_window_pane_g8_ParamLimits

0xd8f7,	// (0x0001ceec) bg_popup_window_pane_g8

0xd906,	// (0x0001cefb) bg_popup_window_pane_g9_ParamLimits

0xd906,	// (0x0001cefb) bg_popup_window_pane_g9

0x5735,	// (0x00014d2a) bg_popup_window_pane_g10_ParamLimits

0x5735,	// (0x00014d2a) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001eec6) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001eec6) bg_popup_window_pane_g

0x565e,	// (0x00014c53) bg_popup_heading_pane_ParamLimits

0x565e,	// (0x00014c53) bg_popup_heading_pane

0x1470,	// (0x00010a65) tabs_4_passive_pane_cp_srt_ParamLimits

0x1470,	// (0x00010a65) tabs_4_passive_pane_cp_srt

0x1482,	// (0x00010a77) tabs_4_passive_pane_srt_ParamLimits

0x5672,	// (0x00014c67) heading_pane_g2

0x1482,	// (0x00010a77) tabs_4_passive_pane_srt

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp3_srt

0x567a,	// (0x00014c6f) heading_pane_t1_ParamLimits

0x567a,	// (0x00014c6f) heading_pane_t1

0x5691,	// (0x00014c86) heading_pane_t2_ParamLimits

0x5691,	// (0x00014c86) heading_pane_t2

0x0001,

0xf8cc,	// (0x0001eec1) heading_pane_t_ParamLimits

0xf8cc,	// (0x0001eec1) heading_pane_t

0x518b,	// (0x00014780) bg_popup_heading_pane_g1

0x523a,	// (0x0001482f) bg_popup_heading_pane_g2

0x5244,	// (0x00014839) bg_popup_heading_pane_g3

0x524e,	// (0x00014843) bg_popup_heading_pane_g4

0x5258,	// (0x0001484d) bg_popup_heading_pane_g5

0x5262,	// (0x00014857) bg_popup_heading_pane_g6

0x526a,	// (0x0001485f) bg_popup_heading_pane_g7

0x5272,	// (0x00014867) bg_popup_heading_pane_g8

0x527c,	// (0x00014871) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0001ee7d) bg_popup_heading_pane_g

0x4883,	// (0x00013e78) bg_popup_sub_pane_g1

0x4893,	// (0x00013e88) bg_popup_sub_pane_g2

0x488b,	// (0x00013e80) bg_popup_sub_pane_g3

0x48a3,	// (0x00013e98) bg_popup_sub_pane_g4

0x489b,	// (0x00013e90) bg_popup_sub_pane_g5

0x48ab,	// (0x00013ea0) bg_popup_sub_pane_g6

0x48b3,	// (0x00013ea8) bg_popup_sub_pane_g7

0x48c3,	// (0x00013eb8) bg_popup_sub_pane_g8

0x48bb,	// (0x00013eb0) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0001ee57) bg_popup_sub_pane_g

0x2640,	// (0x00011c35) bg_popup_window_pane_cp5_ParamLimits

0x2640,	// (0x00011c35) bg_popup_window_pane_cp5

0x265c,	// (0x00011c51) popup_note_window_g1_ParamLimits

0x265c,	// (0x00011c51) popup_note_window_g1

0x2668,	// (0x00011c5d) popup_note_window_t1_ParamLimits

0x2668,	// (0x00011c5d) popup_note_window_t1

0x267e,	// (0x00011c73) popup_note_window_t2_ParamLimits

0x267e,	// (0x00011c73) popup_note_window_t2

0x2694,	// (0x00011c89) popup_note_window_t3_ParamLimits

0x2694,	// (0x00011c89) popup_note_window_t3

0x26aa,	// (0x00011c9f) popup_note_window_t4_ParamLimits

0x26aa,	// (0x00011c9f) popup_note_window_t4

0x26d2,	// (0x00011cc7) popup_note_window_t5_ParamLimits

0x26d2,	// (0x00011cc7) popup_note_window_t5

0x0004,

0xf585,	// (0x0001eb7a) popup_note_window_t_ParamLimits

0xf585,	// (0x0001eb7a) popup_note_window_t

0x26f6,	// (0x00011ceb) bg_popup_window_pane_cp6_ParamLimits

0x26f6,	// (0x00011ceb) bg_popup_window_pane_cp6

0x5107,	// (0x000146fc) popup_note_image_window_g1_ParamLimits

0x5107,	// (0x000146fc) popup_note_image_window_g1

0x5113,	// (0x00014708) popup_note_image_window_g2_ParamLimits

0x5113,	// (0x00014708) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0001ee4b) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0001ee4b) popup_note_image_window_g

0x512c,	// (0x00014721) popup_note_image_window_t1_ParamLimits

0x512c,	// (0x00014721) popup_note_image_window_t1

0x5145,	// (0x0001473a) popup_note_image_window_t2_ParamLimits

0x5145,	// (0x0001473a) popup_note_image_window_t2

0x515e,	// (0x00014753) popup_note_image_window_t3_ParamLimits

0x515e,	// (0x00014753) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0001ee50) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0001ee50) popup_note_image_window_t

0x4fc8,	// (0x000145bd) bg_popup_window_pane_cp7_ParamLimits

0x4fc8,	// (0x000145bd) bg_popup_window_pane_cp7

0x4ff8,	// (0x000145ed) popup_note_wait_window_g1_ParamLimits

0x4ff8,	// (0x000145ed) popup_note_wait_window_g1

0x5004,	// (0x000145f9) popup_note_wait_window_g2_ParamLimits

0x5004,	// (0x000145f9) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0001ee39) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0001ee39) popup_note_wait_window_g

0x501c,	// (0x00014611) popup_note_wait_window_t1_ParamLimits

0x501c,	// (0x00014611) popup_note_wait_window_t1

0x5043,	// (0x00014638) popup_note_wait_window_t2_ParamLimits

0x5043,	// (0x00014638) popup_note_wait_window_t2

0x5060,	// (0x00014655) popup_note_wait_window_t3_ParamLimits

0x5060,	// (0x00014655) popup_note_wait_window_t3

0x5073,	// (0x00014668) popup_note_wait_window_t4_ParamLimits

0x5073,	// (0x00014668) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0001ee40) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0001ee40) popup_note_wait_window_t

0x5098,	// (0x0001468d) wait_bar_pane_ParamLimits

0x5098,	// (0x0001468d) wait_bar_pane

0x22cb,	// (0x000118c0) wait_anim_pane

0x22cb,	// (0x000118c0) wait_border_pane

0x22c1,	// (0x000118b6) wait_anim_pane_g1

0x22c1,	// (0x000118b6) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001ecf9) wait_anim_pane_g

0x4f6c,	// (0x00014561) wait_border_pane_g1

0x4f77,	// (0x0001456c) wait_border_pane_g2

0x4f80,	// (0x00014575) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0001ee32) wait_border_pane_g

0x4dd7,	// (0x000143cc) bg_popup_window_pane_cp16_ParamLimits

0x4dd7,	// (0x000143cc) bg_popup_window_pane_cp16

0x4ed7,	// (0x000144cc) indicator_popup_pane_cp4_ParamLimits

0x4ed7,	// (0x000144cc) indicator_popup_pane_cp4

0x4eeb,	// (0x000144e0) popup_query_data_window_t1_ParamLimits

0x4eeb,	// (0x000144e0) popup_query_data_window_t1

0x4efd,	// (0x000144f2) popup_query_data_window_t2_ParamLimits

0x4efd,	// (0x000144f2) popup_query_data_window_t2

0x4f16,	// (0x0001450b) popup_query_data_window_t3_ParamLimits

0x4f16,	// (0x0001450b) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0001ee2b) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0001ee2b) popup_query_data_window_t

0x4f30,	// (0x00014525) query_popup_data_pane_ParamLimits

0x4f30,	// (0x00014525) query_popup_data_pane

0x4f44,	// (0x00014539) query_popup_data_pane_cp1_ParamLimits

0x4f44,	// (0x00014539) query_popup_data_pane_cp1

0x4dd7,	// (0x000143cc) bg_popup_window_pane_cp10_ParamLimits

0x4dd7,	// (0x000143cc) bg_popup_window_pane_cp10

0x4e09,	// (0x000143fe) indicator_popup_pane_ParamLimits

0x4e09,	// (0x000143fe) indicator_popup_pane

0x4e2b,	// (0x00014420) popup_query_code_window_t1_ParamLimits

0x4e2b,	// (0x00014420) popup_query_code_window_t1

0x4e45,	// (0x0001443a) popup_query_code_window_t2_ParamLimits

0x4e45,	// (0x0001443a) popup_query_code_window_t2

0x4e8e,	// (0x00014483) popup_query_code_window_t3_ParamLimits

0x4e8e,	// (0x00014483) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0001ee24) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0001ee24) popup_query_code_window_t

0x4ebd,	// (0x000144b2) query_popup_pane_ParamLimits

0x4ebd,	// (0x000144b2) query_popup_pane

0x26f6,	// (0x00011ceb) bg_popup_window_pane_cp15_ParamLimits

0x26f6,	// (0x00011ceb) bg_popup_window_pane_cp15

0x2714,	// (0x00011d09) indicator_popup_pane_cp1_ParamLimits

0x2714,	// (0x00011d09) indicator_popup_pane_cp1

0x2727,	// (0x00011d1c) indicator_popup_pane_cp2_ParamLimits

0x2727,	// (0x00011d1c) indicator_popup_pane_cp2

0x273a,	// (0x00011d2f) popup_query_data_code_window_g1_ParamLimits

0x273a,	// (0x00011d2f) popup_query_data_code_window_g1

0x274d,	// (0x00011d42) popup_query_data_code_window_t1_ParamLimits

0x274d,	// (0x00011d42) popup_query_data_code_window_t1

0x275f,	// (0x00011d54) popup_query_data_code_window_t2_ParamLimits

0x275f,	// (0x00011d54) popup_query_data_code_window_t2

0x2771,	// (0x00011d66) popup_query_data_code_window_t3_ParamLimits

0x2771,	// (0x00011d66) popup_query_data_code_window_t3

0x2787,	// (0x00011d7c) popup_query_data_code_window_t4_ParamLimits

0x2787,	// (0x00011d7c) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001eb85) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001eb85) popup_query_data_code_window_t

0x1131,	// (0x00010726) list_single_midp_graphic_pane_g3

0x279f,	// (0x00011d94) query_popup_data_pane_cp2_ParamLimits

0x27b2,	// (0x00011da7) query_popup_pane_cp2_ParamLimits

0x27b2,	// (0x00011da7) query_popup_pane_cp2

0x22cb,	// (0x000118c0) bg_popup_window_pane_cp11

0x4dcf,	// (0x000143c4) heading_pane_cp5

0x289a,	// (0x00011e8f) listscroll_popup_info_pane

0x22cb,	// (0x000118c0) input_focus_pane_cp3

0x27c5,	// (0x00011dba) query_popup_pane_t1

0x27d3,	// (0x00011dc8) list_popup_info_pane_ParamLimits

0x27d3,	// (0x00011dc8) list_popup_info_pane

0x27e2,	// (0x00011dd7) listscroll_popup_info_pane_g1

0x27ea,	// (0x00011ddf) scroll_pane_cp7

0x27f4,	// (0x00011de9) popup_info_list_pane_t1_ParamLimits

0x27f4,	// (0x00011de9) popup_info_list_pane_t1

0x280e,	// (0x00011e03) popup_info_list_pane_t2_ParamLimits

0x280e,	// (0x00011e03) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001eb8e) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001eb8e) popup_info_list_pane_t

0x22cb,	// (0x000118c0) bg_popup_window_pane_cp12

0x6276,	// (0x0001586b) find_popup_pane

0x23ab,	// (0x000119a0) bg_popup_window_pane_cp3

0x2828,	// (0x00011e1d) heading_pane_cp3

0x2834,	// (0x00011e29) listscroll_popup_graphic_pane

0x22cb,	// (0x000118c0) bg_popup_window_pane_cp4

0xc8f5,	// (0x0001beea) heading_pane_cp4

0x289a,	// (0x00011e8f) listscroll_popup_colour_pane

0xc8fd,	// (0x0001bef2) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc8fd,	// (0x0001bef2) cell_large_graphic_colour_none_popup_pane

0xc911,	// (0x0001bf06) grid_large_graphic_colour_popup_pane_ParamLimits

0xc911,	// (0x0001bf06) grid_large_graphic_colour_popup_pane

0xc935,	// (0x0001bf2a) listscroll_popup_colour_pane_g1_ParamLimits

0xc935,	// (0x0001bf2a) listscroll_popup_colour_pane_g1

0xc94c,	// (0x0001bf41) listscroll_popup_colour_pane_g2_ParamLimits

0xc94c,	// (0x0001bf41) listscroll_popup_colour_pane_g2

0xc963,	// (0x0001bf58) listscroll_popup_colour_pane_g3_ParamLimits

0xc963,	// (0x0001bf58) listscroll_popup_colour_pane_g3

0xc973,	// (0x0001bf68) listscroll_popup_colour_pane_g4_ParamLimits

0xc973,	// (0x0001bf68) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001eb93) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001eb93) listscroll_popup_colour_pane_g

0x2934,	// (0x00011f29) scroll_pane_cp6_ParamLimits

0x2934,	// (0x00011f29) scroll_pane_cp6

0xc983,	// (0x0001bf78) cell_large_graphic_colour_popup_pane_ParamLimits

0xc983,	// (0x0001bf78) cell_large_graphic_colour_popup_pane

0x2965,	// (0x00011f5a) cell_large_graphic_colour_none_popup_pane_t1

0x22cb,	// (0x000118c0) grid_highlight_pane_cp5

0x2974,	// (0x00011f69) cell_large_graphic_colour_popup_pane_g1

0x297c,	// (0x00011f71) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001eb9c) cell_large_graphic_colour_popup_pane_g

0x2984,	// (0x00011f79) cell_large_graphic_colour_popup_pane_g2_copy1

0x298d,	// (0x00011f82) grid_highlight_pane_cp4

0x2995,	// (0x00011f8a) bg_popup_window_pane_cp8_ParamLimits

0x2995,	// (0x00011f8a) bg_popup_window_pane_cp8

0x29b0,	// (0x00011fa5) popup_snote_single_text_window_g1_ParamLimits

0x29b0,	// (0x00011fa5) popup_snote_single_text_window_g1

0x29c2,	// (0x00011fb7) popup_snote_single_text_window_t1_ParamLimits

0x29c2,	// (0x00011fb7) popup_snote_single_text_window_t1

0x29d5,	// (0x00011fca) popup_snote_single_text_window_t2_ParamLimits

0x29d5,	// (0x00011fca) popup_snote_single_text_window_t2

0x29e8,	// (0x00011fdd) popup_snote_single_text_window_t3_ParamLimits

0x29e8,	// (0x00011fdd) popup_snote_single_text_window_t3

0x2a21,	// (0x00012016) popup_snote_single_text_window_t4_ParamLimits

0x2a21,	// (0x00012016) popup_snote_single_text_window_t4

0x2a55,	// (0x0001204a) popup_snote_single_text_window_t5_ParamLimits

0x2a55,	// (0x0001204a) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001eba1) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001eba1) popup_snote_single_text_window_t

0x2a84,	// (0x00012079) bg_popup_window_pane_cp9_ParamLimits

0x2a84,	// (0x00012079) bg_popup_window_pane_cp9

0x29b0,	// (0x00011fa5) popup_snote_single_graphic_window_g1_ParamLimits

0x29b0,	// (0x00011fa5) popup_snote_single_graphic_window_g1

0x2a92,	// (0x00012087) popup_snote_single_graphic_window_g2_ParamLimits

0x2a92,	// (0x00012087) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001ebac) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001ebac) popup_snote_single_graphic_window_g

0x2a9e,	// (0x00012093) popup_snote_single_graphic_window_t1_ParamLimits

0x2a9e,	// (0x00012093) popup_snote_single_graphic_window_t1

0x2ab1,	// (0x000120a6) popup_snote_single_graphic_window_t2_ParamLimits

0x2ab1,	// (0x000120a6) popup_snote_single_graphic_window_t2

0x2ac4,	// (0x000120b9) popup_snote_single_graphic_window_t3_ParamLimits

0x2ac4,	// (0x000120b9) popup_snote_single_graphic_window_t3

0x2afd,	// (0x000120f2) popup_snote_single_graphic_window_t4_ParamLimits

0x2afd,	// (0x000120f2) popup_snote_single_graphic_window_t4

0x2b31,	// (0x00012126) popup_snote_single_graphic_window_t5_ParamLimits

0x2b31,	// (0x00012126) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001ebb1) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001ebb1) popup_snote_single_graphic_window_t

0x61ba,	// (0x000157af) grid_graphic_popup_pane_ParamLimits

0x61ba,	// (0x000157af) grid_graphic_popup_pane

0x61e2,	// (0x000157d7) listscroll_popup_graphic_pane_g1_ParamLimits

0x61e2,	// (0x000157d7) listscroll_popup_graphic_pane_g1

0xdc3e,	// (0x0001d233) listscroll_popup_graphic_pane_g2_ParamLimits

0xdc3e,	// (0x0001d233) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001efa1) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001efa1) listscroll_popup_graphic_pane_g

0x620a,	// (0x000157ff) scroll_pane_cp5

0xdc01,	// (0x0001d1f6) cell_graphic_popup_pane_ParamLimits

0xdc01,	// (0x0001d1f6) cell_graphic_popup_pane

0x6144,	// (0x00015739) cell_graphic_popup_pane_g1

0x614c,	// (0x00015741) cell_graphic_popup_pane_g2

0x2984,	// (0x00011f79) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0001ef9a) cell_graphic_popup_pane_g

0x6155,	// (0x0001574a) cell_graphic_popup_pane_t2

0x298d,	// (0x00011f82) grid_highlight_pane_cp3

0x2b72,	// (0x00012167) list_gen_pane_ParamLimits

0x2b72,	// (0x00012167) list_gen_pane

0x2ba4,	// (0x00012199) scroll_pane

0xdbb8,	// (0x0001d1ad) bg_list_pane_g1_ParamLimits

0xdbb8,	// (0x0001d1ad) bg_list_pane_g1

0x60b9,	// (0x000156ae) bg_list_pane_g2_ParamLimits

0x60b9,	// (0x000156ae) bg_list_pane_g2

0x60ce,	// (0x000156c3) bg_list_pane_g3_ParamLimits

0x60ce,	// (0x000156c3) bg_list_pane_g3

0x60e2,	// (0x000156d7) bg_list_pane_g4_ParamLimits

0x60e2,	// (0x000156d7) bg_list_pane_g4

0xdbd5,	// (0x0001d1ca) bg_list_pane_g5_ParamLimits

0xdbd5,	// (0x0001d1ca) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001ef8f) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001ef8f) bg_list_pane_g

0xdb5e,	// (0x0001d153) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double2_graphic_large_graphic_pane

0xdb5e,	// (0x0001d153) list_double2_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double2_graphic_pane

0xdb5e,	// (0x0001d153) list_double2_large_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double2_large_graphic_pane

0xdb5e,	// (0x0001d153) list_double2_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double2_pane

0xdb5e,	// (0x0001d153) list_double_graphic_heading_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_graphic_heading_pane

0xdb5e,	// (0x0001d153) list_double_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_graphic_pane

0xdb5e,	// (0x0001d153) list_double_heading_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_heading_pane

0xdb5e,	// (0x0001d153) list_double_large_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_large_graphic_pane

0xdb5e,	// (0x0001d153) list_double_number_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_number_pane

0xdb5e,	// (0x0001d153) list_double_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_pane

0xdb5e,	// (0x0001d153) list_double_time_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_double_time_pane

0xdb5e,	// (0x0001d153) list_setting_number_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_setting_number_pane

0xdb5e,	// (0x0001d153) list_setting_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_setting_pane

0xdb70,	// (0x0001d165) list_single_2graphic_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_2graphic_pane

0xdb70,	// (0x0001d165) list_single_graphic_heading_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_graphic_heading_pane

0xdb70,	// (0x0001d165) list_single_graphic_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_graphic_pane

0xdb70,	// (0x0001d165) list_single_heading_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_heading_pane

0xdb5e,	// (0x0001d153) list_single_large_graphic_pane_ParamLimits

0xdb5e,	// (0x0001d153) list_single_large_graphic_pane

0xdb70,	// (0x0001d165) list_single_number_heading_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_number_heading_pane

0xdb70,	// (0x0001d165) list_single_number_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_number_pane

0xdb70,	// (0x0001d165) list_single_pane_ParamLimits

0xdb70,	// (0x0001d165) list_single_pane

0x22cb,	// (0x000118c0) list_highlight_pane_cp1

0x47f9,	// (0x00013dee) list_single_pane_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_pane_g1

0x4805,	// (0x00013dfa) list_single_pane_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_pane_g

0x6838,	// (0x00015e2d) list_single_pane_t1_ParamLimits

0x6838,	// (0x00015e2d) list_single_pane_t1

0x47f9,	// (0x00013dee) list_single_number_pane_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_number_pane_g1

0x4805,	// (0x00013dfa) list_single_number_pane_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_number_pane_g

0x4811,	// (0x00013e06) list_single_number_pane_t1_ParamLimits

0x4811,	// (0x00013e06) list_single_number_pane_t1

0xd9af,	// (0x0001cfa4) list_single_number_pane_t2_ParamLimits

0xd9af,	// (0x0001cfa4) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001ef50) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001ef50) list_single_number_pane_t

0x7d1e,	// (0x00017313) list_single_graphic_pane_g1_ParamLimits

0x7d1e,	// (0x00017313) list_single_graphic_pane_g1

0x47f9,	// (0x00013dee) list_single_graphic_pane_g2_ParamLimits

0x47f9,	// (0x00013dee) list_single_graphic_pane_g2

0x4805,	// (0x00013dfa) list_single_graphic_pane_g3_ParamLimits

0x4805,	// (0x00013dfa) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001ebbc) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001ebbc) list_single_graphic_pane_g

0xc9ac,	// (0x0001bfa1) list_single_graphic_pane_t1_ParamLimits

0xc9ac,	// (0x0001bfa1) list_single_graphic_pane_t1

0x47f9,	// (0x00013dee) list_single_heading_pane_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_heading_pane_g1

0x4805,	// (0x00013dfa) list_single_heading_pane_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_heading_pane_g

0xc9c2,	// (0x0001bfb7) list_single_heading_pane_t1_ParamLimits

0xc9c2,	// (0x0001bfb7) list_single_heading_pane_t1

0xc9d8,	// (0x0001bfcd) list_single_heading_pane_t2_ParamLimits

0xc9d8,	// (0x0001bfcd) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001ebc8) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001ebc8) list_single_heading_pane_t

0x47f9,	// (0x00013dee) list_single_number_heading_pane_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_number_heading_pane_g1

0x4805,	// (0x00013dfa) list_single_number_heading_pane_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_number_heading_pane_g

0xc9c2,	// (0x0001bfb7) list_single_number_heading_pane_t1_ParamLimits

0xc9c2,	// (0x0001bfb7) list_single_number_heading_pane_t1

0xc9ea,	// (0x0001bfdf) list_single_number_heading_pane_t2_ParamLimits

0xc9ea,	// (0x0001bfdf) list_single_number_heading_pane_t2

0x6812,	// (0x00015e07) list_single_number_heading_pane_t3_ParamLimits

0x6812,	// (0x00015e07) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001ebcd) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001ebcd) list_single_number_heading_pane_t

0x47ed,	// (0x00013de2) list_single_graphic_heading_pane_g1_ParamLimits

0x47ed,	// (0x00013de2) list_single_graphic_heading_pane_g1

0xc9fc,	// (0x0001bff1) list_single_graphic_heading_pane_g4_ParamLimits

0xc9fc,	// (0x0001bff1) list_single_graphic_heading_pane_g4

0x4805,	// (0x00013dfa) list_single_graphic_heading_pane_g5_ParamLimits

0x4805,	// (0x00013dfa) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001ebd4) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001ebd4) list_single_graphic_heading_pane_g

0xc9c2,	// (0x0001bfb7) list_single_graphic_heading_pane_t1_ParamLimits

0xc9c2,	// (0x0001bfb7) list_single_graphic_heading_pane_t1

0xca0d,	// (0x0001c002) list_single_graphic_heading_pane_t2_ParamLimits

0xca0d,	// (0x0001c002) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001ebdb) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001ebdb) list_single_graphic_heading_pane_t

0x684e,	// (0x00015e43) list_single_large_graphic_pane_g1_ParamLimits

0x684e,	// (0x00015e43) list_single_large_graphic_pane_g1

0x685a,	// (0x00015e4f) list_single_large_graphic_pane_g2_ParamLimits

0x685a,	// (0x00015e4f) list_single_large_graphic_pane_g2

0x6866,	// (0x00015e5b) list_single_large_graphic_pane_g3_ParamLimits

0x6866,	// (0x00015e5b) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001ebe0) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001ebe0) list_single_large_graphic_pane_g

0x4f77,	// (0x0001456c) wait_border_pane_g2_copy1

0xca1f,	// (0x0001c014) list_single_large_graphic_pane_g4_cp2

0x6872,	// (0x00015e67) list_single_large_graphic_pane_t1_ParamLimits

0x6872,	// (0x00015e67) list_single_large_graphic_pane_t1

0x2df5,	// (0x000123ea) list_double_pane_g1_ParamLimits

0x2df5,	// (0x000123ea) list_double_pane_g1

0x2d20,	// (0x00012315) list_double_pane_g2_ParamLimits

0x2d20,	// (0x00012315) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001ebe7) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001ebe7) list_double_pane_g

0x2d2c,	// (0x00012321) list_double_pane_t1_ParamLimits

0x2d2c,	// (0x00012321) list_double_pane_t1

0xca27,	// (0x0001c01c) list_double_pane_t2_ParamLimits

0xca27,	// (0x0001c01c) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001ebec) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001ebec) list_double_pane_t

0xca39,	// (0x0001c02e) list_double2_pane_g1_ParamLimits

0xca39,	// (0x0001c02e) list_double2_pane_g1

0xca4a,	// (0x0001c03f) list_double2_pane_g2_ParamLimits

0xca4a,	// (0x0001c03f) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001ebf1) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001ebf1) list_double2_pane_g

0xca56,	// (0x0001c04b) list_double2_pane_t1_ParamLimits

0xca56,	// (0x0001c04b) list_double2_pane_t1

0xca6c,	// (0x0001c061) list_double2_pane_t2_ParamLimits

0xca6c,	// (0x0001c061) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001ebf6) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001ebf6) list_double2_pane_t

0x2df5,	// (0x000123ea) list_double_number_pane_g1_ParamLimits

0x2df5,	// (0x000123ea) list_double_number_pane_g1

0x2d20,	// (0x00012315) list_double_number_pane_g2_ParamLimits

0x2d20,	// (0x00012315) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001ebe7) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001ebe7) list_double_number_pane_g

0xca7e,	// (0x0001c073) list_double_number_pane_t1_ParamLimits

0xca7e,	// (0x0001c073) list_double_number_pane_t1

0x2e01,	// (0x000123f6) list_double_number_pane_t2_ParamLimits

0x2e01,	// (0x000123f6) list_double_number_pane_t2

0xca90,	// (0x0001c085) list_double_number_pane_t3_ParamLimits

0xca90,	// (0x0001c085) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001ebfb) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001ebfb) list_double_number_pane_t

0x2de9,	// (0x000123de) list_double_graphic_pane_g1_ParamLimits

0x2de9,	// (0x000123de) list_double_graphic_pane_g1

0xcaa2,	// (0x0001c097) list_double_graphic_pane_g2_ParamLimits

0xcaa2,	// (0x0001c097) list_double_graphic_pane_g2

0xcab1,	// (0x0001c0a6) list_double_graphic_pane_g3_ParamLimits

0xcab1,	// (0x0001c0a6) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001ec02) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001ec02) list_double_graphic_pane_g

0xcac9,	// (0x0001c0be) list_double_graphic_pane_t1_ParamLimits

0xcac9,	// (0x0001c0be) list_double_graphic_pane_t1

0xcadf,	// (0x0001c0d4) list_double_graphic_pane_t2_ParamLimits

0xcadf,	// (0x0001c0d4) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001ec0b) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001ec0b) list_double_graphic_pane_t

0xcaf1,	// (0x0001c0e6) list_double2_graphic_pane_g1_ParamLimits

0xcaf1,	// (0x0001c0e6) list_double2_graphic_pane_g1

0x3e28,	// (0x0001341d) list_double2_graphic_pane_g2_ParamLimits

0x3e28,	// (0x0001341d) list_double2_graphic_pane_g2

0xca4a,	// (0x0001c03f) list_double2_graphic_pane_g3_ParamLimits

0xca4a,	// (0x0001c03f) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001ec10) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001ec10) list_double2_graphic_pane_g

0xcafd,	// (0x0001c0f2) list_double2_graphic_pane_t1_ParamLimits

0xcafd,	// (0x0001c0f2) list_double2_graphic_pane_t1

0xcb13,	// (0x0001c108) list_double2_graphic_pane_t2_ParamLimits

0xcb13,	// (0x0001c108) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001ec17) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001ec17) list_double2_graphic_pane_t

0xcb25,	// (0x0001c11a) list_double_large_graphic_pane_g1_ParamLimits

0xcb25,	// (0x0001c11a) list_double_large_graphic_pane_g1

0xcb50,	// (0x0001c145) list_double_large_graphic_pane_g2_ParamLimits

0xcb50,	// (0x0001c145) list_double_large_graphic_pane_g2

0x2d20,	// (0x00012315) list_double_large_graphic_pane_g3_ParamLimits

0x2d20,	// (0x00012315) list_double_large_graphic_pane_g3

0xcb61,	// (0x0001c156) list_double_large_graphic_pane_g4_ParamLimits

0xcb61,	// (0x0001c156) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001ec1c) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001ec1c) list_double_large_graphic_pane_g

0xcb73,	// (0x0001c168) list_double_large_graphic_pane_t1_ParamLimits

0xcb73,	// (0x0001c168) list_double_large_graphic_pane_t1

0xcb8c,	// (0x0001c181) list_double_large_graphic_pane_t2_ParamLimits

0xcb8c,	// (0x0001c181) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001ec27) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001ec27) list_double_large_graphic_pane_t

0xcb9e,	// (0x0001c193) list_double2_large_graphic_pane_g1_ParamLimits

0xcb9e,	// (0x0001c193) list_double2_large_graphic_pane_g1

0xca39,	// (0x0001c02e) list_double2_large_graphic_pane_g2_ParamLimits

0xca39,	// (0x0001c02e) list_double2_large_graphic_pane_g2

0xca4a,	// (0x0001c03f) list_double2_large_graphic_pane_g3_ParamLimits

0xca4a,	// (0x0001c03f) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001ec2c) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001ec2c) list_double2_large_graphic_pane_g

0xcbaa,	// (0x0001c19f) list_double2_large_graphic_pane_t1_ParamLimits

0xcbaa,	// (0x0001c19f) list_double2_large_graphic_pane_t1

0xcbc0,	// (0x0001c1b5) list_double2_large_graphic_pane_t2_ParamLimits

0xcbc0,	// (0x0001c1b5) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001ec33) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001ec33) list_double2_large_graphic_pane_t

0xcbd2,	// (0x0001c1c7) list_double_heading_pane_g1_ParamLimits

0xcbd2,	// (0x0001c1c7) list_double_heading_pane_g1

0xcbe3,	// (0x0001c1d8) list_double_heading_pane_g2_ParamLimits

0xcbe3,	// (0x0001c1d8) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001ec38) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001ec38) list_double_heading_pane_g

0xcbef,	// (0x0001c1e4) list_double_heading_pane_t1_ParamLimits

0xcbef,	// (0x0001c1e4) list_double_heading_pane_t1

0xcc05,	// (0x0001c1fa) list_double_heading_pane_t2_ParamLimits

0xcc05,	// (0x0001c1fa) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001ec3d) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001ec3d) list_double_heading_pane_t

0x2d8e,	// (0x00012383) list_double_graphic_heading_pane_g1_ParamLimits

0x2d8e,	// (0x00012383) list_double_graphic_heading_pane_g1

0xcbd2,	// (0x0001c1c7) list_double_graphic_heading_pane_g2_ParamLimits

0xcbd2,	// (0x0001c1c7) list_double_graphic_heading_pane_g2

0xcbe3,	// (0x0001c1d8) list_double_graphic_heading_pane_g3_ParamLimits

0xcbe3,	// (0x0001c1d8) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001ec42) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001ec42) list_double_graphic_heading_pane_g

0xcc17,	// (0x0001c20c) list_double_graphic_heading_pane_t1_ParamLimits

0xcc17,	// (0x0001c20c) list_double_graphic_heading_pane_t1

0xcc2d,	// (0x0001c222) list_double_graphic_heading_pane_t2_ParamLimits

0xcc2d,	// (0x0001c222) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001ec49) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001ec49) list_double_graphic_heading_pane_t

0xcb50,	// (0x0001c145) list_double_time_pane_g1_ParamLimits

0xcb50,	// (0x0001c145) list_double_time_pane_g1

0x2d20,	// (0x00012315) list_double_time_pane_g2_ParamLimits

0x2d20,	// (0x00012315) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001ec4e) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001ec4e) list_double_time_pane_g

0x2ec0,	// (0x000124b5) list_double_time_pane_t1_ParamLimits

0x2ec0,	// (0x000124b5) list_double_time_pane_t1

0xcc3f,	// (0x0001c234) list_double_time_pane_t2_ParamLimits

0xcc3f,	// (0x0001c234) list_double_time_pane_t2

0xcc51,	// (0x0001c246) list_double_time_pane_t3_ParamLimits

0xcc51,	// (0x0001c246) list_double_time_pane_t3

0xcc63,	// (0x0001c258) list_double_time_pane_t4_ParamLimits

0xcc63,	// (0x0001c258) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001ec53) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001ec53) list_double_time_pane_t

0x3e28,	// (0x0001341d) list_setting_pane_g1_ParamLimits

0x3e28,	// (0x0001341d) list_setting_pane_g1

0xca4a,	// (0x0001c03f) list_setting_pane_g2_ParamLimits

0xca4a,	// (0x0001c03f) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001ec5c) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001ec5c) list_setting_pane_g

0xcc75,	// (0x0001c26a) list_setting_pane_t1_ParamLimits

0xcc75,	// (0x0001c26a) list_setting_pane_t1

0xcc8c,	// (0x0001c281) list_setting_pane_t2_ParamLimits

0xcc8c,	// (0x0001c281) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001ec61) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001ec61) list_setting_pane_t

0xcccb,	// (0x0001c2c0) set_value_pane_cp_ParamLimits

0xcccb,	// (0x0001c2c0) set_value_pane_cp

0x3e28,	// (0x0001341d) list_setting_number_pane_g1_ParamLimits

0x3e28,	// (0x0001341d) list_setting_number_pane_g1

0xca4a,	// (0x0001c03f) list_setting_number_pane_g2_ParamLimits

0xca4a,	// (0x0001c03f) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001ec5c) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001ec5c) list_setting_number_pane_g

0xccd7,	// (0x0001c2cc) list_setting_number_pane_t1_ParamLimits

0xccd7,	// (0x0001c2cc) list_setting_number_pane_t1

0xcceb,	// (0x0001c2e0) list_setting_number_pane_t2_ParamLimits

0xcceb,	// (0x0001c2e0) list_setting_number_pane_t2

0xcd02,	// (0x0001c2f7) list_setting_number_pane_t3_ParamLimits

0xcd02,	// (0x0001c2f7) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001ec68) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001ec68) list_setting_number_pane_t

0xcccb,	// (0x0001c2c0) set_value_pane_ParamLimits

0xcccb,	// (0x0001c2c0) set_value_pane

0x3059,	// (0x0001264e) bg_set_opt_pane_ParamLimits

0x3059,	// (0x0001264e) bg_set_opt_pane

0x307a,	// (0x0001266f) set_value_pane_t1

0x3088,	// (0x0001267d) slider_set_pane_cp3

0x3091,	// (0x00012686) volume_small_pane_cp

0x309a,	// (0x0001268f) list_form_gen_pane

0x30a3,	// (0x00012698) scroll_pane_cp8

0xcd45,	// (0x0001c33a) form_field_data_pane_ParamLimits

0xcd45,	// (0x0001c33a) form_field_data_pane

0xcd5c,	// (0x0001c351) form_field_data_wide_pane_ParamLimits

0xcd5c,	// (0x0001c351) form_field_data_wide_pane

0xcd7c,	// (0x0001c371) form_field_popup_pane_ParamLimits

0xcd7c,	// (0x0001c371) form_field_popup_pane

0xcd94,	// (0x0001c389) form_field_popup_wide_pane_ParamLimits

0xcd94,	// (0x0001c389) form_field_popup_wide_pane

0x313e,	// (0x00012733) form_field_slider_pane_ParamLimits

0x313e,	// (0x00012733) form_field_slider_pane

0x3151,	// (0x00012746) form_field_slider_wide_pane_ParamLimits

0x3151,	// (0x00012746) form_field_slider_wide_pane

0x3164,	// (0x00012759) data_form_pane

0xcdb5,	// (0x0001c3aa) form_field_data_pane_t1

0x3192,	// (0x00012787) input_focus_pane

0x31a0,	// (0x00012795) data_form_wide_pane

0x31d8,	// (0x000127cd) form_field_data_wide_pane_t1

0x29a2,	// (0x00011f97) input_focus_pane_cp6

0xcdcf,	// (0x0001c3c4) form_field_popup_pane_t1

0x3192,	// (0x00012787) input_focus_pane_cp7

0x3212,	// (0x00012807) list_form_pane

0x3226,	// (0x0001281b) form_field_popup_wide_pane_t1

0x3192,	// (0x00012787) input_focus_pane_cp8

0x323b,	// (0x00012830) list_form_wide_pane

0xcdf1,	// (0x0001c3e6) form_field_slider_pane_t1_ParamLimits

0xcdf1,	// (0x0001c3e6) form_field_slider_pane_t1

0xce09,	// (0x0001c3fe) form_field_slider_pane_t2_ParamLimits

0xce09,	// (0x0001c3fe) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001ec78) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001ec78) form_field_slider_pane_t

0x2640,	// (0x00011c35) input_focus_pane_cp9_ParamLimits

0x2640,	// (0x00011c35) input_focus_pane_cp9

0xce1e,	// (0x0001c413) slider_cont_pane_ParamLimits

0xce1e,	// (0x0001c413) slider_cont_pane

0x328a,	// (0x0001287f) form_field_slider_wide_pane_t1_ParamLimits

0x328a,	// (0x0001287f) form_field_slider_wide_pane_t1

0x329c,	// (0x00012891) form_field_slider_wide_pane_t2_ParamLimits

0x329c,	// (0x00012891) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001ec7d) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001ec7d) form_field_slider_wide_pane_t

0x2640,	// (0x00011c35) input_focus_pane_cp10_ParamLimits

0x2640,	// (0x00011c35) input_focus_pane_cp10

0xce32,	// (0x0001c427) slider_cont_pane_cp1_ParamLimits

0xce32,	// (0x0001c427) slider_cont_pane_cp1

0xce46,	// (0x0001c43b) slider_form_pane_cp

0x32ca,	// (0x000128bf) input_focus_pane_g1

0x32d2,	// (0x000128c7) input_focus_pane_g2

0x32da,	// (0x000128cf) input_focus_pane_g3

0x32e2,	// (0x000128d7) input_focus_pane_g4

0x32ea,	// (0x000128df) input_focus_pane_g5

0x32f2,	// (0x000128e7) input_focus_pane_g6

0x32fa,	// (0x000128ef) input_focus_pane_g7

0x3302,	// (0x000128f7) input_focus_pane_g8

0x330a,	// (0x000128ff) input_focus_pane_g9

0x22c1,	// (0x000118b6) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001ec82) input_focus_pane_g

0x4f80,	// (0x00014575) wait_border_pane_g3_copy1

0xce4e,	// (0x0001c443) data_form_pane_t1

0x22c1,	// (0x000118b6) wait_anim_pane_g1_copy1

0xdb42,	// (0x0001d137) data_form_wide_pane_t1

0xce68,	// (0x0001c45d) list_form_graphic_pane_cp_ParamLimits

0xce68,	// (0x0001c45d) list_form_graphic_pane_cp

0x5f20,	// (0x00015515) slider_form_pane_g1

0x5f29,	// (0x0001551e) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001ef80) slider_form_pane_g

0xce68,	// (0x0001c45d) list_form_graphic_pane_ParamLimits

0xce68,	// (0x0001c45d) list_form_graphic_pane

0x3362,	// (0x00012957) list_form_graphic_pane_g1

0x336a,	// (0x0001295f) list_form_graphic_pane_t1_ParamLimits

0x336a,	// (0x0001295f) list_form_graphic_pane_t1

0x23ab,	// (0x000119a0) list_highlight_pane_cp5_ParamLimits

0x23ab,	// (0x000119a0) list_highlight_pane_cp5

0xce7a,	// (0x0001c46f) find_pane_g1

0x3388,	// (0x0001297d) input_find_pane

0xce83,	// (0x0001c478) input_find_pane_g1_ParamLimits

0xce83,	// (0x0001c478) input_find_pane_g1

0xce8f,	// (0x0001c484) input_find_pane_t1_ParamLimits

0xce8f,	// (0x0001c484) input_find_pane_t1

0xcea4,	// (0x0001c499) input_find_pane_t2_ParamLimits

0xcea4,	// (0x0001c499) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001ec97) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001ec97) input_find_pane_t

0x33c7,	// (0x000129bc) input_focus_pane_cp5_ParamLimits

0x33c7,	// (0x000129bc) input_focus_pane_cp5

0x33e1,	// (0x000129d6) bg_popup_window_pane_cp2_ParamLimits

0x33e1,	// (0x000129d6) bg_popup_window_pane_cp2

0x33ee,	// (0x000129e3) listscroll_menu_pane_ParamLimits

0x33ee,	// (0x000129e3) listscroll_menu_pane

0xcec5,	// (0x0001c4ba) popup_submenu_window_ParamLimits

0xcec5,	// (0x0001c4ba) popup_submenu_window

0x3426,	// (0x00012a1b) find_popup_pane_g1

0x342e,	// (0x00012a23) input_popup_find_pane_cp

0x33c7,	// (0x000129bc) input_focus_pane_cp4_ParamLimits

0x33c7,	// (0x000129bc) input_focus_pane_cp4

0x3444,	// (0x00012a39) input_popup_find_pane_t1_ParamLimits

0x3444,	// (0x00012a39) input_popup_find_pane_t1

0x22cb,	// (0x000118c0) bg_popup_sub_pane_cp

0x3472,	// (0x00012a67) listscroll_popup_sub_pane

0x347a,	// (0x00012a6f) list_submenu_pane_ParamLimits

0x347a,	// (0x00012a6f) list_submenu_pane

0x348b,	// (0x00012a80) scroll_pane_cp4

0x3493,	// (0x00012a88) list_single_popup_submenu_pane_ParamLimits

0x3493,	// (0x00012a88) list_single_popup_submenu_pane

0x34a7,	// (0x00012a9c) list_single_popup_submenu_pane_g1

0x34af,	// (0x00012aa4) list_single_popup_submenu_pane_t1_ParamLimits

0x34af,	// (0x00012aa4) list_single_popup_submenu_pane_t1

0x2640,	// (0x00011c35) bg_active_tab_pane_cp1_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp1

0xceff,	// (0x0001c4f4) tabs_2_active_pane_g1

0xcf07,	// (0x0001c4fc) tabs_2_active_pane_t1

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp1_ParamLimits

0x2640,	// (0x00011c35) bg_passive_tab_pane_cp1

0xceff,	// (0x0001c4f4) tabs_2_passive_pane_g1

0xcf07,	// (0x0001c4fc) tabs_2_passive_pane_t1

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp4

0xcf19,	// (0x0001c50e) tabs_2_long_active_pane_t1

0x434c,	// (0x00013941) bg_passive_tab_pane_cp4

0x1139,	// (0x0001072e) list_single_midp_graphic_pane_g4_ParamLimits

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp5

0xcf2c,	// (0x0001c521) tabs_3_long_active_pane_t1

0x434c,	// (0x00013941) bg_passive_tab_pane_cp5

0x1139,	// (0x0001072e) list_single_midp_graphic_pane_g4

0x23ab,	// (0x000119a0) bg_popup_window_pane_cp13_ParamLimits

0x23ab,	// (0x000119a0) bg_popup_window_pane_cp13

0x3526,	// (0x00012b1b) listscroll_popup_fast_pane_ParamLimits

0x3526,	// (0x00012b1b) listscroll_popup_fast_pane

0x3535,	// (0x00012b2a) grid_popup_fast_pane_ParamLimits

0x3535,	// (0x00012b2a) grid_popup_fast_pane

0x3547,	// (0x00012b3c) scroll_pane_cp9_ParamLimits

0x3547,	// (0x00012b3c) scroll_pane_cp9

0x7d84,	// (0x00017379) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7d84,	// (0x00017379) list_single_graphic_hl_pane_t1_cp2

0x356b,	// (0x00012b60) input_focus_pane_cp20_ParamLimits

0x356b,	// (0x00012b60) input_focus_pane_cp20

0x3579,	// (0x00012b6e) query_popup_data_pane_t1_ParamLimits

0x3579,	// (0x00012b6e) query_popup_data_pane_t1

0x358c,	// (0x00012b81) query_popup_data_pane_t2_ParamLimits

0x358c,	// (0x00012b81) query_popup_data_pane_t2

0x35d2,	// (0x00012bc7) query_popup_data_pane_t3_ParamLimits

0x35d2,	// (0x00012bc7) query_popup_data_pane_t3

0x3613,	// (0x00012c08) query_popup_data_pane_t4_ParamLimits

0x3613,	// (0x00012c08) query_popup_data_pane_t4

0x364f,	// (0x00012c44) query_popup_data_pane_t5_ParamLimits

0x364f,	// (0x00012c44) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001ec9c) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001ec9c) query_popup_data_pane_t

0x32ca,	// (0x000128bf) bg_set_opt_pane_g1

0x32d2,	// (0x000128c7) bg_set_opt_pane_g2

0x32da,	// (0x000128cf) bg_set_opt_pane_g3

0x32e2,	// (0x000128d7) bg_set_opt_pane_g4

0x32ea,	// (0x000128df) bg_set_opt_pane_g5

0x32f2,	// (0x000128e7) bg_set_opt_pane_g6

0x32fa,	// (0x000128ef) bg_set_opt_pane_g7

0x3302,	// (0x000128f7) bg_set_opt_pane_g8

0x330a,	// (0x000128ff) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001eca7) bg_set_opt_pane_g

0x0761,	// (0x0000fd56) control_top_pane_stacon_ParamLimits

0x0761,	// (0x0000fd56) control_top_pane_stacon

0x07b4,	// (0x0000fda9) signal_pane_stacon_ParamLimits

0x07b4,	// (0x0000fda9) signal_pane_stacon

0x3c9d,	// (0x00013292) stacon_top_pane_g1_ParamLimits

0x3c9d,	// (0x00013292) stacon_top_pane_g1

0x07d9,	// (0x0000fdce) title_pane_stacon_ParamLimits

0x07d9,	// (0x0000fdce) title_pane_stacon

0x0803,	// (0x0000fdf8) uni_indicator_pane_stacon_ParamLimits

0x0803,	// (0x0000fdf8) uni_indicator_pane_stacon

0x0818,	// (0x0000fe0d) battery_pane_stacon_ParamLimits

0x0818,	// (0x0000fe0d) battery_pane_stacon

0x085c,	// (0x0000fe51) control_bottom_pane_stacon_ParamLimits

0x085c,	// (0x0000fe51) control_bottom_pane_stacon

0x087f,	// (0x0000fe74) navi_pane_stacon_ParamLimits

0x087f,	// (0x0000fe74) navi_pane_stacon

0x3cbf,	// (0x000132b4) stacon_bottom_pane_g1_ParamLimits

0x3cbf,	// (0x000132b4) stacon_bottom_pane_g1

0x04c2,	// (0x0000fab7) aid_levels_signal_lsc_ParamLimits

0x04c2,	// (0x0000fab7) aid_levels_signal_lsc

0x04d9,	// (0x0000face) signal_pane_stacon_g1_ParamLimits

0x04d9,	// (0x0000face) signal_pane_stacon_g1

0x04ed,	// (0x0000fae2) signal_pane_stacon_g2_ParamLimits

0x04ed,	// (0x0000fae2) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001ecba) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001ecba) signal_pane_stacon_g

0x0522,	// (0x0000fb17) title_pane_stacon_t1_ParamLimits

0x0522,	// (0x0000fb17) title_pane_stacon_t1

0x3693,	// (0x00012c88) uni_indicator_pane_stacon_g1

0x369d,	// (0x00012c92) uni_indicator_pane_stacon_g2

0x36a7,	// (0x00012c9c) uni_indicator_pane_stacon_g3

0x36b1,	// (0x00012ca6) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001ecc6) uni_indicator_pane_stacon_g

0x0547,	// (0x0000fb3c) control_top_pane_stacon_g1

0x054f,	// (0x0000fb44) control_top_pane_stacon_t1_ParamLimits

0x054f,	// (0x0000fb44) control_top_pane_stacon_t1

0x0586,	// (0x0000fb7b) aid_levels_battery_lsc_ParamLimits

0x0586,	// (0x0000fb7b) aid_levels_battery_lsc

0x059e,	// (0x0000fb93) battery_pane_stacon_g1_ParamLimits

0x059e,	// (0x0000fb93) battery_pane_stacon_g1

0x05b1,	// (0x0000fba6) battery_pane_stacon_g2_ParamLimits

0x05b1,	// (0x0000fba6) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001eccf) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001eccf) battery_pane_stacon_g

0x05ef,	// (0x0000fbe4) navi_icon_pane_stacon

0x0603,	// (0x0000fbf8) navi_navi_pane_stacon

0x05ef,	// (0x0000fbe4) navi_text_pane_stacon

0x0547,	// (0x0000fb3c) control_bottom_pane_stacon_g1

0x0617,	// (0x0000fc0c) control_bottom_pane_stacon_t1_ParamLimits

0x0617,	// (0x0000fc0c) control_bottom_pane_stacon_t1

0xcf3e,	// (0x0001c533) grid_app_pane_ParamLimits

0xcf3e,	// (0x0001c533) grid_app_pane

0xcf76,	// (0x0001c56b) scroll_pane_cp15_ParamLimits

0xcf76,	// (0x0001c56b) scroll_pane_cp15

0xcf8f,	// (0x0001c584) cell_app_pane_ParamLimits

0xcf8f,	// (0x0001c584) cell_app_pane

0xcfd4,	// (0x0001c5c9) cell_app_pane_g1_ParamLimits

0xcfd4,	// (0x0001c5c9) cell_app_pane_g1

0x3752,	// (0x00012d47) cell_app_pane_g2_ParamLimits

0x3752,	// (0x00012d47) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001ecd4) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001ecd4) cell_app_pane_g

0xcff4,	// (0x0001c5e9) cell_app_pane_t1_ParamLimits

0xcff4,	// (0x0001c5e9) cell_app_pane_t1

0x3775,	// (0x00012d6a) grid_highlight_pane_ParamLimits

0x3775,	// (0x00012d6a) grid_highlight_pane

0x32ca,	// (0x000128bf) cell_highlight_pane_g1

0x32d2,	// (0x000128c7) cell_highlight_pane_g2

0x32da,	// (0x000128cf) cell_highlight_pane_g3

0x32e2,	// (0x000128d7) cell_highlight_pane_g4

0x32ea,	// (0x000128df) cell_highlight_pane_g5

0x32f2,	// (0x000128e7) cell_highlight_pane_g6

0x32fa,	// (0x000128ef) cell_highlight_pane_g7

0x3302,	// (0x000128f7) cell_highlight_pane_g8

0x330a,	// (0x000128ff) cell_highlight_pane_g9

0x22c1,	// (0x000118b6) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001ec82) cell_highlight_pane_g

0x3786,	// (0x00012d7b) bg_scroll_pane

0x0661,	// (0x0000fc56) scroll_handle_pane

0x37cd,	// (0x00012dc2) scroll_bg_pane_g1

0x37e2,	// (0x00012dd7) scroll_bg_pane_g2

0x37fa,	// (0x00012def) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001ecd9) scroll_bg_pane_g

0x380f,	// (0x00012e04) scroll_handle_focus_pane_ParamLimits

0x380f,	// (0x00012e04) scroll_handle_focus_pane

0x37cd,	// (0x00012dc2) scroll_handle_pane_g1

0x381c,	// (0x00012e11) scroll_handle_pane_g2

0x37fa,	// (0x00012def) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001ece0) scroll_handle_pane_g

0x33c7,	// (0x000129bc) bg_popup_sub_pane_cp21_ParamLimits

0x33c7,	// (0x000129bc) bg_popup_sub_pane_cp21

0x3830,	// (0x00012e25) popup_fep_japan_predictive_window_t1_ParamLimits

0x3830,	// (0x00012e25) popup_fep_japan_predictive_window_t1

0x384a,	// (0x00012e3f) popup_fep_japan_predictive_window_t2_ParamLimits

0x384a,	// (0x00012e3f) popup_fep_japan_predictive_window_t2

0x387d,	// (0x00012e72) popup_fep_japan_predictive_window_t3_ParamLimits

0x387d,	// (0x00012e72) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001ece7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001ece7) popup_fep_japan_predictive_window_t

0x22cb,	// (0x000118c0) bg_popup_sub_pane_cp23

0x38b4,	// (0x00012ea9) listscroll_japin_cand_pane

0x38bc,	// (0x00012eb1) popup_fep_japan_candidate_window_t1

0x38ca,	// (0x00012ebf) candidate_pane_ParamLimits

0x38ca,	// (0x00012ebf) candidate_pane

0x38dc,	// (0x00012ed1) scroll_pane_cp30

0x38e4,	// (0x00012ed9) list_single_popup_jap_candidate_pane_ParamLimits

0x38e4,	// (0x00012ed9) list_single_popup_jap_candidate_pane

0x22cb,	// (0x000118c0) list_highlight_pane_cp30

0x38f9,	// (0x00012eee) list_single_popup_jap_candidate_pane_t1

0x3908,	// (0x00012efd) level_1_signal

0x3915,	// (0x00012f0a) level_2_signal

0x3922,	// (0x00012f17) level_3_signal

0x392f,	// (0x00012f24) level_4_signal

0x393c,	// (0x00012f31) level_5_signal

0x3949,	// (0x00012f3e) level_6_signal

0x3956,	// (0x00012f4b) level_7_signal

0x3908,	// (0x00012efd) level_1_battery

0x3915,	// (0x00012f0a) level_2_battery

0x3922,	// (0x00012f17) level_3_battery

0x392f,	// (0x00012f24) level_4_battery

0x393c,	// (0x00012f31) level_5_battery

0x3949,	// (0x00012f3e) level_6_battery

0x3956,	// (0x00012f4b) level_7_battery

0x397b,	// (0x00012f70) list_menu_pane_ParamLimits

0x397b,	// (0x00012f70) list_menu_pane

0x3991,	// (0x00012f86) scroll_pane_cp25_ParamLimits

0x3991,	// (0x00012f86) scroll_pane_cp25

0x39aa,	// (0x00012f9f) list_double2_graphic_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double2_graphic_pane_cp2

0x39aa,	// (0x00012f9f) list_double2_large_graphic_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double2_large_graphic_pane_cp2

0x39aa,	// (0x00012f9f) list_double2_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double2_pane_cp2

0x39aa,	// (0x00012f9f) list_double_graphic_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double_graphic_pane_cp2

0x39aa,	// (0x00012f9f) list_double_large_graphic_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double_large_graphic_pane_cp2

0x39aa,	// (0x00012f9f) list_double_number_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double_number_pane_cp2

0x39aa,	// (0x00012f9f) list_double_pane_cp2_ParamLimits

0x39aa,	// (0x00012f9f) list_double_pane_cp2

0xd01c,	// (0x0001c611) list_single_2graphic_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_2graphic_pane_cp2

0xd01c,	// (0x0001c611) list_single_graphic_heading_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_graphic_heading_pane_cp2

0xd01c,	// (0x0001c611) list_single_graphic_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_graphic_pane_cp2

0xd01c,	// (0x0001c611) list_single_heading_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_heading_pane_cp2

0x39e7,	// (0x00012fdc) list_single_large_graphic_pane_cp2_ParamLimits

0x39e7,	// (0x00012fdc) list_single_large_graphic_pane_cp2

0xd01c,	// (0x0001c611) list_single_number_heading_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_number_heading_pane_cp2

0xd01c,	// (0x0001c611) list_single_number_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_number_pane_cp2

0xd01c,	// (0x0001c611) list_single_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_pane_cp2

0x3a5d,	// (0x00013052) bg_popup_sub_pane_cp22

0x0713,	// (0x0000fd08) popup_side_volume_key_window_g1

0x073d,	// (0x0000fd32) popup_side_volume_key_window_t1

0x0759,	// (0x0000fd4e) volume_small_pane_cp1

0x2640,	// (0x00011c35) bg_popup_sub_pane_cp24_ParamLimits

0x2640,	// (0x00011c35) bg_popup_sub_pane_cp24

0x3a73,	// (0x00013068) fep_china_uni_candidate_pane_ParamLimits

0x3a73,	// (0x00013068) fep_china_uni_candidate_pane

0x3a87,	// (0x0001307c) fep_china_uni_entry_pane

0x3a97,	// (0x0001308c) popup_fep_china_uni_window_g1

0x3ab3,	// (0x000130a8) fep_china_uni_entry_pane_g1

0x3abb,	// (0x000130b0) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001ed18) fep_china_uni_entry_pane_g

0x3ac3,	// (0x000130b8) fep_entry_item_pane

0x3acd,	// (0x000130c2) fep_candidate_item_pane

0x3ad5,	// (0x000130ca) fep_china_uni_candidate_pane_g1

0x3add,	// (0x000130d2) fep_china_uni_candidate_pane_g2

0x3ae5,	// (0x000130da) fep_china_uni_candidate_pane_g3

0x3aed,	// (0x000130e2) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001ed1d) fep_china_uni_candidate_pane_g

0x22c1,	// (0x000118b6) fep_entry_item_pane_g1

0x3af5,	// (0x000130ea) fep_entry_item_pane_t1_ParamLimits

0x3af5,	// (0x000130ea) fep_entry_item_pane_t1

0x3b0b,	// (0x00013100) fep_candidate_item_pane_t1_ParamLimits

0x3b0b,	// (0x00013100) fep_candidate_item_pane_t1

0x3b20,	// (0x00013115) fep_candidate_item_pane_t2_ParamLimits

0x3b20,	// (0x00013115) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001ed26) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001ed26) fep_candidate_item_pane_t

0x23ab,	// (0x000119a0) list_highlight_pane_cp31_ParamLimits

0x23ab,	// (0x000119a0) list_highlight_pane_cp31

0x3b32,	// (0x00013127) level_1_signal_lsc

0x3b3b,	// (0x00013130) level_2_signal_lsc

0x3b44,	// (0x00013139) level_3_signal_lsc

0x3b4d,	// (0x00013142) level_4_signal_lsc

0x3b56,	// (0x0001314b) level_5_signal_lsc

0x3b5f,	// (0x00013154) level_6_signal_lsc

0x3b68,	// (0x0001315d) level_7_signal_lsc

0x3b68,	// (0x0001315d) level_1_battery_lsc

0x3b71,	// (0x00013166) level_2_battery_lsc

0x3b7a,	// (0x0001316f) level_3_battery_lsc

0x3b83,	// (0x00013178) level_4_battery_lsc

0x3b8c,	// (0x00013181) level_5_battery_lsc

0x3b95,	// (0x0001318a) level_6_battery_lsc

0x3b32,	// (0x00013127) level_7_battery_lsc

0x3b9e,	// (0x00013193) scroll_handle_focus_pane_g1

0x3ba7,	// (0x0001319c) scroll_handle_focus_pane_g2

0x3bb0,	// (0x000131a5) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001ed2b) scroll_handle_focus_pane_g

0xd0aa,	// (0x0001c69f) list_single_2graphic_pane_g1_ParamLimits

0xd0aa,	// (0x0001c69f) list_single_2graphic_pane_g1

0xc9fc,	// (0x0001bff1) list_single_2graphic_pane_g2_ParamLimits

0xc9fc,	// (0x0001bff1) list_single_2graphic_pane_g2

0x4805,	// (0x00013dfa) list_single_2graphic_pane_g3_ParamLimits

0x4805,	// (0x00013dfa) list_single_2graphic_pane_g3

0xd0b6,	// (0x0001c6ab) list_single_2graphic_pane_g4_ParamLimits

0xd0b6,	// (0x0001c6ab) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001ed32) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001ed32) list_single_2graphic_pane_g

0xd0c2,	// (0x0001c6b7) list_single_2graphic_pane_t1_ParamLimits

0xd0c2,	// (0x0001c6b7) list_single_2graphic_pane_t1

0xd0f0,	// (0x0001c6e5) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd0f0,	// (0x0001c6e5) list_double2_graphic_large_graphic_pane_g1

0xca39,	// (0x0001c02e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xca39,	// (0x0001c02e) list_double2_graphic_large_graphic_pane_g2

0xca4a,	// (0x0001c03f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xca4a,	// (0x0001c03f) list_double2_graphic_large_graphic_pane_g3

0xd102,	// (0x0001c6f7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd102,	// (0x0001c6f7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001ed3b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001ed3b) list_double2_graphic_large_graphic_pane_g

0xd10e,	// (0x0001c703) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd10e,	// (0x0001c703) list_double2_graphic_large_graphic_pane_t1

0xd124,	// (0x0001c719) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd124,	// (0x0001c719) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001ed44) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001ed44) list_double2_graphic_large_graphic_pane_t

0x3d87,	// (0x0001337c) popup_fast_swap_window_ParamLimits

0x3d87,	// (0x0001337c) popup_fast_swap_window

0x3da3,	// (0x00013398) popup_side_volume_key_window

0x3dbf,	// (0x000133b4) stacon_top_pane

0x3dc9,	// (0x000133be) status_pane_ParamLimits

0x3dc9,	// (0x000133be) status_pane

0x3dbf,	// (0x000133b4) status_small_pane

0x22cb,	// (0x000118c0) control_pane

0x22cb,	// (0x000118c0) stacon_bottom_pane

0x30a3,	// (0x00012698) scroll_pane_cp121

0x309a,	// (0x0001268f) set_content_pane

0x3c63,	// (0x00013258) bg_active_tab_pane_g1_cp1

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp1

0x3c6c,	// (0x00013261) bg_active_tab_pane_g3_cp1

0x3c63,	// (0x00013258) bg_passive_tab_pane_g1_cp1

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp1

0x3c6c,	// (0x00013261) bg_passive_tab_pane_g3_cp1

0xd136,	// (0x0001c72b) bg_active_tab_pane_g1_cp2

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp2

0xd13f,	// (0x0001c734) bg_active_tab_pane_g3_cp2

0xd136,	// (0x0001c72b) bg_passive_tab_pane_g1_cp2

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp2

0xd13f,	// (0x0001c734) bg_passive_tab_pane_g3_cp2

0xd148,	// (0x0001c73d) bg_active_tab_pane_g1_cp3

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp3

0xd151,	// (0x0001c746) bg_active_tab_pane_g3_cp3

0xd148,	// (0x0001c73d) bg_passive_tab_pane_g1_cp3

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp3

0xd151,	// (0x0001c746) bg_passive_tab_pane_g3_cp3

0xd15a,	// (0x0001c74f) bg_active_tab_pane_g1_cp4

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp4

0xd163,	// (0x0001c758) bg_active_tab_pane_g3_cp4

0xd15a,	// (0x0001c74f) bg_passive_tab_pane_g1_cp4

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp4

0xd163,	// (0x0001c758) bg_passive_tab_pane_g3_cp4

0x3cdb,	// (0x000132d0) bg_active_tab_pane_g1_cp5

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp5

0x3ce4,	// (0x000132d9) bg_active_tab_pane_g3_cp5

0x3cdb,	// (0x000132d0) bg_passive_tab_pane_g1_cp5

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp5

0x3ce4,	// (0x000132d9) bg_passive_tab_pane_g3_cp5

0x65ea,	// (0x00015bdf) list_set_graphic_pane_ParamLimits

0x65ea,	// (0x00015bdf) list_set_graphic_pane

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp4

0xd16c,	// (0x0001c761) list_set_graphic_pane_g1_ParamLimits

0xd16c,	// (0x0001c761) list_set_graphic_pane_g1

0xd178,	// (0x0001c76d) list_set_graphic_pane_g2_ParamLimits

0xd178,	// (0x0001c76d) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001ed49) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001ed49) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0001f0cc) volume_small_pane_cp_g

0xd19c,	// (0x0001c791) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd19c,	// (0x0001c791) list_double2_large_graphic_pane_g1_cp2

0xd1aa,	// (0x0001c79f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd1aa,	// (0x0001c79f) list_double2_large_graphic_pane_g2_cp2

0x3d57,	// (0x0001334c) list_double2_large_graphic_pane_g3_cp2

0x3d5f,	// (0x00013354) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3d5f,	// (0x00013354) list_double2_large_graphic_pane_t1_cp2

0x3d75,	// (0x0001336a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3d75,	// (0x0001336a) list_double2_large_graphic_pane_t2_cp2

0xd93d,	// (0x0001cf32) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd93d,	// (0x0001cf32) list_double_large_graphic_pane_g1_cp2

0xd950,	// (0x0001cf45) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd950,	// (0x0001cf45) list_double_large_graphic_pane_g2_cp2

0x3ee5,	// (0x000134da) list_double_large_graphic_pane_g3_cp2

0x5a75,	// (0x0001506a) list_double_large_graphic_pane_g4_cp

0x5a7d,	// (0x00015072) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5a7d,	// (0x00015072) list_double_large_graphic_pane_t1_cp2

0x5a94,	// (0x00015089) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5a94,	// (0x00015089) list_double_large_graphic_pane_t2_cp2

0xd1bb,	// (0x0001c7b0) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1bb,	// (0x0001c7b0) list_double2_graphic_pane_g1_cp2

0xd1c9,	// (0x0001c7be) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1c9,	// (0x0001c7be) list_double2_graphic_pane_g2_cp2

0xd1da,	// (0x0001c7cf) list_double2_graphic_pane_g3_cp2

0x3e00,	// (0x000133f5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3e00,	// (0x000133f5) list_double2_graphic_pane_t1_cp2

0x3e16,	// (0x0001340b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3e16,	// (0x0001340b) list_double2_graphic_pane_t2_cp2

0x3e28,	// (0x0001341d) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3e28,	// (0x0001341d) list_single_number_heading_pane_g1_cp2

0x3e34,	// (0x00013429) list_single_number_heading_pane_g2_cp2

0x3e3c,	// (0x00013431) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3e3c,	// (0x00013431) list_single_number_heading_pane_t1_cp2

0xd1e4,	// (0x0001c7d9) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd1e4,	// (0x0001c7d9) list_single_number_heading_pane_t2_cp2

0x3e64,	// (0x00013459) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3e64,	// (0x00013459) list_single_number_heading_pane_t3_cp2

0x3e28,	// (0x0001341d) list_single_heading_pane_g1_cp2_ParamLimits

0x3e28,	// (0x0001341d) list_single_heading_pane_g1_cp2

0x3e34,	// (0x00013429) list_single_heading_pane_g2_cp2

0x3e3c,	// (0x00013431) list_single_heading_pane_t1_cp2_ParamLimits

0x3e3c,	// (0x00013431) list_single_heading_pane_t1_cp2

0xd929,	// (0x0001cf1e) list_single_heading_pane_t2_cp2_ParamLimits

0xd929,	// (0x0001cf1e) list_single_heading_pane_t2_cp2

0x57a3,	// (0x00014d98) list_double_graphic_pane_g1_cp2_ParamLimits

0x57a3,	// (0x00014d98) list_double_graphic_pane_g1_cp2

0x57af,	// (0x00014da4) list_double_graphic_pane_g2_cp2_ParamLimits

0x57af,	// (0x00014da4) list_double_graphic_pane_g2_cp2

0x57be,	// (0x00014db3) list_double_graphic_pane_g3_cp2

0x57c6,	// (0x00014dbb) list_double_graphic_pane_t1_cp2_ParamLimits

0x57c6,	// (0x00014dbb) list_double_graphic_pane_t1_cp2

0x57dc,	// (0x00014dd1) list_double_graphic_pane_t2_cp2_ParamLimits

0x57dc,	// (0x00014dd1) list_double_graphic_pane_t2_cp2

0x3ed9,	// (0x000134ce) list_double_number_pane_g1_cp2_ParamLimits

0x3ed9,	// (0x000134ce) list_double_number_pane_g1_cp2

0x3ee5,	// (0x000134da) list_double_number_pane_g2_cp2

0xd915,	// (0x0001cf0a) list_double_number_pane_t1_cp2_ParamLimits

0xd915,	// (0x0001cf0a) list_double_number_pane_t1_cp2

0x577b,	// (0x00014d70) list_double_number_pane_t2_cp2_ParamLimits

0x577b,	// (0x00014d70) list_double_number_pane_t2_cp2

0x5791,	// (0x00014d86) list_double_number_pane_t3_cp2_ParamLimits

0x5791,	// (0x00014d86) list_double_number_pane_t3_cp2

0xd863,	// (0x0001ce58) list_single_graphic_pane_g1_cp2_ParamLimits

0xd863,	// (0x0001ce58) list_single_graphic_pane_g1_cp2

0x3f3d,	// (0x00013532) list_single_graphic_pane_g2_cp2_ParamLimits

0x3f3d,	// (0x00013532) list_single_graphic_pane_g2_cp2

0x3f49,	// (0x0001353e) list_single_graphic_pane_g3_cp2

0x5626,	// (0x00014c1b) list_single_graphic_pane_t1_cp2_ParamLimits

0x5626,	// (0x00014c1b) list_single_graphic_pane_t1_cp2

0x3f3d,	// (0x00013532) list_single_number_pane_g1_cp2_ParamLimits

0x3f3d,	// (0x00013532) list_single_number_pane_g1_cp2

0x3f49,	// (0x0001353e) list_single_number_pane_g2_cp2

0x5626,	// (0x00014c1b) list_single_number_pane_t1_cp2_ParamLimits

0x5626,	// (0x00014c1b) list_single_number_pane_t1_cp2

0xd84f,	// (0x0001ce44) list_single_number_pane_t2_cp2_ParamLimits

0xd84f,	// (0x0001ce44) list_single_number_pane_t2_cp2

0xd1aa,	// (0x0001c79f) list_double2_pane_g1_cp2_ParamLimits

0xd1aa,	// (0x0001c79f) list_double2_pane_g1_cp2

0x3d57,	// (0x0001334c) list_double2_pane_g2_cp2

0x3eb1,	// (0x000134a6) list_double2_pane_t1_cp2_ParamLimits

0x3eb1,	// (0x000134a6) list_double2_pane_t1_cp2

0x3ec7,	// (0x000134bc) list_double2_pane_t2_cp2_ParamLimits

0x3ec7,	// (0x000134bc) list_double2_pane_t2_cp2

0x3ed9,	// (0x000134ce) list_double_pane_g1_cp2_ParamLimits

0x3ed9,	// (0x000134ce) list_double_pane_g1_cp2

0x3ee5,	// (0x000134da) list_double_pane_g2_cp2

0x3eed,	// (0x000134e2) list_double_pane_t1_cp2_ParamLimits

0x3eed,	// (0x000134e2) list_double_pane_t1_cp2

0x3f03,	// (0x000134f8) list_double_pane_t2_cp2_ParamLimits

0x3f03,	// (0x000134f8) list_double_pane_t2_cp2

0x3f2d,	// (0x00013522) list_single_pane_cp2_g3

0x3f3d,	// (0x00013532) list_single_pane_g1_cp2_ParamLimits

0x3f3d,	// (0x00013532) list_single_pane_g1_cp2

0x3f49,	// (0x0001353e) list_single_pane_g2_cp2

0x3f51,	// (0x00013546) list_single_pane_t1_cp2_ParamLimits

0x3f51,	// (0x00013546) list_single_pane_t1_cp2

0xd210,	// (0x0001c805) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd210,	// (0x0001c805) list_single_large_graphic_pane_g1_cp2

0x3f75,	// (0x0001356a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3f75,	// (0x0001356a) list_single_large_graphic_pane_g2_cp2

0x3f81,	// (0x00013576) list_single_large_graphic_pane_g3_cp2

0x3f89,	// (0x0001357e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3f89,	// (0x0001357e) list_single_large_graphic_pane_g4_cp1

0x3fa3,	// (0x00013598) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3fa3,	// (0x00013598) list_single_large_graphic_pane_t1_cp2

0x55f2,	// (0x00014be7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x55f2,	// (0x00014be7) list_single_graphic_heading_pane_g1_cp2

0xd82a,	// (0x0001ce1f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd82a,	// (0x0001ce1f) list_single_graphic_heading_pane_g4_cp2

0x3f49,	// (0x0001353e) list_single_graphic_heading_pane_g5_cp2

0x55fe,	// (0x00014bf3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x55fe,	// (0x00014bf3) list_single_graphic_heading_pane_t1_cp2

0xd83b,	// (0x0001ce30) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd83b,	// (0x0001ce30) list_single_graphic_heading_pane_t2_cp2

0x55b3,	// (0x00014ba8) list_single_2graphic_pane_g1_cp2_ParamLimits

0x55b3,	// (0x00014ba8) list_single_2graphic_pane_g1_cp2

0xd82a,	// (0x0001ce1f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd82a,	// (0x0001ce1f) list_single_2graphic_pane_g2_cp2

0x3f49,	// (0x0001353e) list_single_2graphic_pane_g3_cp2

0x55d0,	// (0x00014bc5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x55d0,	// (0x00014bc5) list_single_2graphic_pane_g4_cp2

0x55dc,	// (0x00014bd1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x55dc,	// (0x00014bd1) list_single_2graphic_pane_t1_cp2

0x22c1,	// (0x000118b6) list_highlight_pane_g10_cp1

0x518b,	// (0x00014780) list_highlight_pane_g1_cp1

0x5193,	// (0x00014788) list_highlight_pane_g2_cp1

0x519b,	// (0x00014790) list_highlight_pane_g3_cp1

0x51a3,	// (0x00014798) list_highlight_pane_g4_cp1

0x51ab,	// (0x000147a0) list_highlight_pane_g5_cp1

0x51b3,	// (0x000147a8) list_highlight_pane_g6_cp1

0x51bb,	// (0x000147b0) list_highlight_pane_g7_cp1

0x51c3,	// (0x000147b8) list_highlight_pane_g8_cp1

0x51cb,	// (0x000147c0) list_highlight_pane_g9_cp1

0xd7f0,	// (0x0001cde5) form_field_slider_pane_t3

0xd7fe,	// (0x0001cdf3) form_field_slider_pane_t4

0x50c7,	// (0x000146bc) slider_form_pane_ParamLimits

0x50c7,	// (0x000146bc) slider_form_pane

0x22cb,	// (0x000118c0) control_abbreviations

0x22cb,	// (0x000118c0) control_conventions

0x22cb,	// (0x000118c0) control_definitions

0x22cb,	// (0x000118c0) format_table_attribute

0x58a5,	// (0x00014e9a) bg_popup_preview_window_pane_g9

0x22cb,	// (0x000118c0) format_table_data2

0x22cb,	// (0x000118c0) format_table_data3

0x22cb,	// (0x000118c0) format_table_data_example

0x0008,

0x22cb,	// (0x000118c0) intro_purpose

0xf8eb,	// (0x0001eee0) bg_popup_preview_window_pane_g

0x22cb,	// (0x000118c0) texts_category

0x22cb,	// (0x000118c0) texts_graphics

0x3fb9,	// (0x000135ae) text_digital

0x3fc8,	// (0x000135bd) text_primary

0x3fd7,	// (0x000135cc) text_primary_small

0x3fe6,	// (0x000135db) text_secondary

0x3ff5,	// (0x000135ea) text_title

0x6118,	// (0x0001570d) bg_passive_tab_pane_g1_cp3_srt

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp3_srt

0x6121,	// (0x00015716) bg_passive_tab_pane_g3_cp3_srt

0x2640,	// (0x00011c35) bg_active_tab_pane_cp3_srt_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp3_srt

0x612a,	// (0x0001571f) tabs_4_active_pane_srt_g1

0xdbeb,	// (0x0001d1e0) tabs_4_active_pane_srt_t1_ParamLimits

0xdbeb,	// (0x0001d1e0) tabs_4_active_pane_srt_t1

0x6118,	// (0x0001570d) bg_active_tab_pane_g1_cp3_copy1

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp3_copy1

0x6121,	// (0x00015716) bg_active_tab_pane_g3_cp3_copy1

0x23ab,	// (0x000119a0) tabs_2_long_active_pane_srt_ParamLimits

0x23ab,	// (0x000119a0) tabs_2_long_active_pane_srt

0x23ab,	// (0x000119a0) tabs_2_long_passive_pane_srt_ParamLimits

0x23ab,	// (0x000119a0) tabs_2_long_passive_pane_srt

0x434c,	// (0x00013941) bg_passive_tab_pane_cp4_srt_ParamLimits

0x434c,	// (0x00013941) bg_passive_tab_pane_cp4_srt

0x5d11,	// (0x00015306) bg_passive_tab_pane_g1_cp4_srt

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp4_srt

0x5d1a,	// (0x0001530f) bg_passive_tab_pane_g3_cp4_srt

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp4_srt_ParamLimits

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp4_srt

0xd9d7,	// (0x0001cfcc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd9d7,	// (0x0001cfcc) tabs_2_long_active_pane_srt_t1

0x5d11,	// (0x00015306) bg_active_tab_pane_g1_cp4_srt

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp4_srt

0x5d1a,	// (0x0001530f) bg_active_tab_pane_g3_cp4_srt

0x2640,	// (0x00011c35) tabs_3_long_active_pane_srt_ParamLimits

0x2640,	// (0x00011c35) tabs_3_long_active_pane_srt

0x2640,	// (0x00011c35) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2640,	// (0x00011c35) tabs_3_long_passive_pane_cp_srt

0x2640,	// (0x00011c35) tabs_3_long_passive_pane_srt_ParamLimits

0x2640,	// (0x00011c35) tabs_3_long_passive_pane_srt

0x434c,	// (0x00013941) bg_passive_tab_pane_cp5_srt_ParamLimits

0x434c,	// (0x00013941) bg_passive_tab_pane_cp5_srt

0x3cdb,	// (0x000132d0) bg_passive_tab_pane_g1_cp5_srt

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp5_srt

0x3ce4,	// (0x000132d9) bg_passive_tab_pane_g3_cp5_srt

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp5_srt_ParamLimits

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp5_srt

0xd9c1,	// (0x0001cfb6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd9c1,	// (0x0001cfb6) tabs_3_long_active_pane_srt_t1

0x3cdb,	// (0x000132d0) bg_active_tab_pane_g1_cp5_srt

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp5_srt

0x3ce4,	// (0x000132d9) bg_active_tab_pane_g3_cp5_srt

0x5cf1,	// (0x000152e6) navi_text_pane_srt_t1

0x5ce9,	// (0x000152de) navi_icon_pane_srt_g1

0x41bc,	// (0x000137b1) midp_editing_number_pane_srt

0x4004,	// (0x000135f9) midp_ticker_pane_srt

0x41c4,	// (0x000137b9) midp_ticker_pane_srt_g1

0x41cc,	// (0x000137c1) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001ed68) midp_ticker_pane_srt_g

0x41d4,	// (0x000137c9) midp_ticker_pane_srt_t1

0x5cda,	// (0x000152cf) midp_editing_number_pane_t1_copy1

0x434c,	// (0x00013941) listscroll_midp_pane

0x434c,	// (0x00013941) midp_form_pane

0x406e,	// (0x00013663) midp_info_popup_window_ParamLimits

0x406e,	// (0x00013663) midp_info_popup_window

0x33c7,	// (0x000129bc) bg_popup_sub_pane_cp50_ParamLimits

0x33c7,	// (0x000129bc) bg_popup_sub_pane_cp50

0x4dc3,	// (0x000143b8) listscroll_midp_info_pane_ParamLimits

0x4dc3,	// (0x000143b8) listscroll_midp_info_pane

0x4dab,	// (0x000143a0) listscroll_form_midp_pane_ParamLimits

0x4dab,	// (0x000143a0) listscroll_form_midp_pane

0x4db7,	// (0x000143ac) scroll_bar_cp050

0xd7e4,	// (0x0001cdd9) list_midp_pane

0x6dec,	// (0x000163e1) signal_pane_g2_cp

0x4cc5,	// (0x000142ba) listscroll_midp_info_pane_t1_ParamLimits

0x4cc5,	// (0x000142ba) listscroll_midp_info_pane_t1

0x4cdd,	// (0x000142d2) listscroll_midp_info_pane_t2_ParamLimits

0x4cdd,	// (0x000142d2) listscroll_midp_info_pane_t2

0x4d1b,	// (0x00014310) listscroll_midp_info_pane_t3_ParamLimits

0x4d1b,	// (0x00014310) listscroll_midp_info_pane_t3

0x4d55,	// (0x0001434a) listscroll_midp_info_pane_t4_ParamLimits

0x4d55,	// (0x0001434a) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0001ee1b) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0001ee1b) listscroll_midp_info_pane_t

0x348b,	// (0x00012a80) scroll_pane_cp21

0x4c63,	// (0x00014258) form_midp_field_choice_group_pane

0x4c6c,	// (0x00014261) form_midp_field_text_pane

0x4cab,	// (0x000142a0) form_midp_field_time_pane

0x4cb3,	// (0x000142a8) form_midp_gauge_slider_pane

0x4cbc,	// (0x000142b1) form_midp_gauge_wait_pane

0x22cb,	// (0x000118c0) form_midp_image_pane

0xd7ce,	// (0x0001cdc3) list_single_midp_pane_ParamLimits

0xd7ce,	// (0x0001cdc3) list_single_midp_pane

0xd7ac,	// (0x0001cda1) form_midp_field_text_pane_t1

0x49a7,	// (0x00013f9c) input_focus_pane_cp050

0x4c23,	// (0x00014218) list_midp_form_text_pane

0x4bbb,	// (0x000141b0) form_midp_field_choice_group_pane_t1

0x4bc9,	// (0x000141be) input_focus_pane_cp051

0x4bdd,	// (0x000141d2) list_midp_choice_pane

0x22cb,	// (0x000118c0) status_idle_pane

0x4b9f,	// (0x00014194) form_midp_field_time_pane_t1

0x22c1,	// (0x000118b6) wait_anim_pane_g2_copy1

0x4bad,	// (0x000141a2) form_midp_field_time_pane_t2

0x0001,

0x411c,	// (0x00013711) aid_navinavi_width_2_pane

0xf821,	// (0x0001ee16) form_midp_field_time_pane_t

0x22cb,	// (0x000118c0) input_focus_pane_cp052

0x22cb,	// (0x000118c0) bg_input_focus_pane_cp040

0x4b5f,	// (0x00014154) form_midp_gauge_slider_pane_t1

0x4b6d,	// (0x00014162) form_midp_gauge_slider_pane_t2

0xd790,	// (0x0001cd85) form_midp_gauge_slider_pane_t3

0xd79e,	// (0x0001cd93) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0001ee0d) form_midp_gauge_slider_pane_t

0x4b97,	// (0x0001418c) form_midp_slider_pane

0x23ab,	// (0x000119a0) bg_input_focus_pane_cp041_ParamLimits

0x23ab,	// (0x000119a0) bg_input_focus_pane_cp041

0x4b2c,	// (0x00014121) form_midp_gauge_wait_pane_t1_ParamLimits

0x4b2c,	// (0x00014121) form_midp_gauge_wait_pane_t1

0x4b3e,	// (0x00014133) form_midp_gauge_wait_pane_t2_ParamLimits

0x4b3e,	// (0x00014133) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001ee08) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001ee08) form_midp_gauge_wait_pane_t

0x4b50,	// (0x00014145) form_midp_wait_pane_ParamLimits

0x4b50,	// (0x00014145) form_midp_wait_pane

0x4af6,	// (0x000140eb) form_midp_image_pane_g1

0x4aff,	// (0x000140f4) form_midp_image_pane_t1

0x4b0e,	// (0x00014103) form_midp_image_pane_t2

0x4b1d,	// (0x00014112) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0001ee01) form_midp_image_pane_t

0x4ade,	// (0x000140d3) list_single_midp_pane_g1

0x4ae7,	// (0x000140dc) list_single_midp_pane_t1

0xd77b,	// (0x0001cd70) list_midp_form_item_pane_ParamLimits

0xd77b,	// (0x0001cd70) list_midp_form_item_pane

0x40c4,	// (0x000136b9) list_midp_form_item_pane_t1

0x40d3,	// (0x000136c8) midp_ticker_pane_g1

0x40df,	// (0x000136d4) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001ed4e) midp_ticker_pane_g

0x40eb,	// (0x000136e0) midp_ticker_pane_t1

0x5fa0,	// (0x00015595) midp_editing_number_pane_t1

0x5f7e,	// (0x00015573) midp_editing_number_pane

0x5f8d,	// (0x00015582) midp_ticker_pane

0x5ca2,	// (0x00015297) ai_message_heading_pane

0x22cb,	// (0x000118c0) bg_popup_window_pane_cp14

0x5caa,	// (0x0001529f) listscroll_ai_message_pane

0x5c2c,	// (0x00015221) ai_message_heading_pane_g1_ParamLimits

0x5c2c,	// (0x00015221) ai_message_heading_pane_g1

0x5c38,	// (0x0001522d) ai_message_heading_pane_g2_ParamLimits

0x5c38,	// (0x0001522d) ai_message_heading_pane_g2

0x5c44,	// (0x00015239) ai_message_heading_pane_g3_ParamLimits

0x5c44,	// (0x00015239) ai_message_heading_pane_g3

0x5c50,	// (0x00015245) ai_message_heading_pane_g4_ParamLimits

0x5c50,	// (0x00015245) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001ef42) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001ef42) ai_message_heading_pane_g

0x5c5c,	// (0x00015251) ai_message_heading_pane_t1_ParamLimits

0x5c5c,	// (0x00015251) ai_message_heading_pane_t1

0x5c76,	// (0x0001526b) ai_message_heading_pane_t2_ParamLimits

0x5c76,	// (0x0001526b) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0001ef4b) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0001ef4b) ai_message_heading_pane_t

0x5c88,	// (0x0001527d) bg_popup_heading_pane_cp1_ParamLimits

0x5c88,	// (0x0001527d) bg_popup_heading_pane_cp1

0x5c1a,	// (0x0001520f) list_ai_message_pane_ParamLimits

0x5c1a,	// (0x0001520f) list_ai_message_pane

0x348b,	// (0x00012a80) scroll_pane_cp10

0x5bb6,	// (0x000151ab) list_ai_message_pane_g1

0x5bbe,	// (0x000151b3) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0001ef1f) list_ai_message_pane_g

0x5bc6,	// (0x000151bb) list_ai_message_pane_t1_ParamLimits

0x5bc6,	// (0x000151bb) list_ai_message_pane_t1

0x5bdb,	// (0x000151d0) list_ai_message_pane_t2_ParamLimits

0x5bdb,	// (0x000151d0) list_ai_message_pane_t2

0x5bf0,	// (0x000151e5) list_ai_message_pane_t3_ParamLimits

0x5bf0,	// (0x000151e5) list_ai_message_pane_t3

0x5c05,	// (0x000151fa) list_ai_message_pane_t4_ParamLimits

0x5c05,	// (0x000151fa) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0001ef24) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0001ef24) list_ai_message_pane_t

0xd98e,	// (0x0001cf83) cell_ai_soft_ind_pane_ParamLimits

0xd98e,	// (0x0001cf83) cell_ai_soft_ind_pane

0x40fd,	// (0x000136f2) cell_ai_soft_ind_pane_g1_ParamLimits

0x40fd,	// (0x000136f2) cell_ai_soft_ind_pane_g1

0x22cb,	// (0x000118c0) grid_highlight_cp1

0x410a,	// (0x000136ff) text_secondary_cp56_ParamLimits

0x410a,	// (0x000136ff) text_secondary_cp56

0x5b76,	// (0x0001516b) example_general_pane_ParamLimits

0x5b76,	// (0x0001516b) example_general_pane

0x5b82,	// (0x00015177) example_parent_pane_g1_ParamLimits

0x5b82,	// (0x00015177) example_parent_pane_g1

0x5b8e,	// (0x00015183) example_parent_pane_t1_ParamLimits

0x5b8e,	// (0x00015183) example_parent_pane_t1

0xbc63,	// (0x0001b258) popup_preview_text_window_ParamLimits

0xbc63,	// (0x0001b258) popup_preview_text_window

0x3f35,	// (0x0001352a) list_single_pane_cp2_g4

0x26f6,	// (0x00011ceb) bg_popup_preview_window_pane_ParamLimits

0x26f6,	// (0x00011ceb) bg_popup_preview_window_pane

0x58ad,	// (0x00014ea2) popup_preview_text_window_t1_ParamLimits

0x58ad,	// (0x00014ea2) popup_preview_text_window_t1

0x58cb,	// (0x00014ec0) popup_preview_text_window_t2_ParamLimits

0x58cb,	// (0x00014ec0) popup_preview_text_window_t2

0x5914,	// (0x00014f09) popup_preview_text_window_t3_ParamLimits

0x5914,	// (0x00014f09) popup_preview_text_window_t3

0x5959,	// (0x00014f4e) popup_preview_text_window_t4_ParamLimits

0x5959,	// (0x00014f4e) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001eef3) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001eef3) popup_preview_text_window_t

0x59d7,	// (0x00014fcc) scroll_pane_cp11

0x4883,	// (0x00013e78) bg_popup_preview_window_pane_g1

0x586d,	// (0x00014e62) bg_popup_preview_window_pane_g2

0x5875,	// (0x00014e6a) bg_popup_preview_window_pane_g3

0x587d,	// (0x00014e72) bg_popup_preview_window_pane_g4

0x5885,	// (0x00014e7a) bg_popup_preview_window_pane_g5

0x588d,	// (0x00014e82) bg_popup_preview_window_pane_g6

0x5895,	// (0x00014e8a) bg_popup_preview_window_pane_g7

0x589d,	// (0x00014e92) bg_popup_preview_window_pane_g8

0x004e,	// (0x0000f643) aid_popup_width_pane

0xbbdf,	// (0x0001b1d4) popup_midp_note_alarm_window_ParamLimits

0xbbdf,	// (0x0001b1d4) popup_midp_note_alarm_window

0x3164,	// (0x00012759) data_form_pane_ParamLimits

0xcdab,	// (0x0001c3a0) form_field_data_pane_g1

0xcdb5,	// (0x0001c3aa) form_field_data_pane_t1_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_ParamLimits

0x31a0,	// (0x00012795) data_form_wide_pane_ParamLimits

0x31ac,	// (0x000127a1) form_field_data_wide_pane_g1

0x31d8,	// (0x000127cd) form_field_data_wide_pane_t1_ParamLimits

0x29a2,	// (0x00011f97) input_focus_pane_cp6_ParamLimits

0xcef1,	// (0x0001c4e6) input_popup_find_pane_g1_ParamLimits

0xcef1,	// (0x0001c4e6) input_popup_find_pane_g1

0x05c2,	// (0x0000fbb7) aid_navi_side_left_pane

0x05d7,	// (0x0000fbcc) aid_navi_side_right_pane

0x5286,	// (0x0001487b) bg_popup_window_pane_cp30_ParamLimits

0x5286,	// (0x0001487b) bg_popup_window_pane_cp30

0x5300,	// (0x000148f5) popup_midp_note_alarm_window_g1_ParamLimits

0x5300,	// (0x000148f5) popup_midp_note_alarm_window_g1

0x5330,	// (0x00014925) popup_midp_note_alarm_window_t1_ParamLimits

0x5330,	// (0x00014925) popup_midp_note_alarm_window_t1

0x53d1,	// (0x000149c6) popup_midp_note_alarm_window_t2_ParamLimits

0x53d1,	// (0x000149c6) popup_midp_note_alarm_window_t2

0x547f,	// (0x00014a74) popup_midp_note_alarm_window_t3_ParamLimits

0x547f,	// (0x00014a74) popup_midp_note_alarm_window_t3

0x54b1,	// (0x00014aa6) popup_midp_note_alarm_window_t4_ParamLimits

0x54b1,	// (0x00014aa6) popup_midp_note_alarm_window_t4

0x54d7,	// (0x00014acc) popup_midp_note_alarm_window_t5_ParamLimits

0x54d7,	// (0x00014acc) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0001ee90) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0001ee90) popup_midp_note_alarm_window_t

0x5583,	// (0x00014b78) wait_bar_pane_cp1_ParamLimits

0x5583,	// (0x00014b78) wait_bar_pane_cp1

0x22cb,	// (0x000118c0) wait_anim_pane_copy1

0x22cb,	// (0x000118c0) wait_border_pane_copy1

0x4f6c,	// (0x00014561) wait_border_pane_g1_copy1

0x31f2,	// (0x000127e7) form_field_popup_pane_g1

0xcdcf,	// (0x0001c3c4) form_field_popup_pane_t1_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_cp7_ParamLimits

0x3212,	// (0x00012807) list_form_pane_ParamLimits

0x321e,	// (0x00012813) form_field_popup_wide_pane_g1

0x3226,	// (0x0001281b) form_field_popup_wide_pane_t1_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_cp8_ParamLimits

0x323b,	// (0x00012830) list_form_wide_pane_ParamLimits

0x61a4,	// (0x00015799) aid_size_cell_graphic_pane

0xce4e,	// (0x0001c443) data_form_pane_t1_ParamLimits

0xdb42,	// (0x0001d137) data_form_wide_pane_t1_ParamLimits

0xd406,	// (0x0001c9fb) bg_status_flat_pane

0xc641,	// (0x0001bc36) title_pane_t1_ParamLimits

0x2373,	// (0x00011968) title_pane_t2_ParamLimits

0x2399,	// (0x0001198e) title_pane_t3_ParamLimits

0xf55d,	// (0x0001eb52) title_pane_t_ParamLimits

0x3908,	// (0x00012efd) level_1_signal_ParamLimits

0x3915,	// (0x00012f0a) level_2_signal_ParamLimits

0x3922,	// (0x00012f17) level_3_signal_ParamLimits

0x392f,	// (0x00012f24) level_4_signal_ParamLimits

0x393c,	// (0x00012f31) level_5_signal_ParamLimits

0x3949,	// (0x00012f3e) level_6_signal_ParamLimits

0x3956,	// (0x00012f4b) level_7_signal_ParamLimits

0x3908,	// (0x00012efd) level_1_battery_ParamLimits

0x3915,	// (0x00012f0a) level_2_battery_ParamLimits

0x3922,	// (0x00012f17) level_3_battery_ParamLimits

0x392f,	// (0x00012f24) level_4_battery_ParamLimits

0x393c,	// (0x00012f31) level_5_battery_ParamLimits

0x3949,	// (0x00012f3e) level_6_battery_ParamLimits

0x3956,	// (0x00012f4b) level_7_battery_ParamLimits

0x518b,	// (0x00014780) bg_status_flat_pane_g1

0x5193,	// (0x00014788) bg_status_flat_pane_g2

0x519b,	// (0x00014790) bg_status_flat_pane_g3

0x51a3,	// (0x00014798) bg_status_flat_pane_g4

0x51ab,	// (0x000147a0) bg_status_flat_pane_g5

0x51b3,	// (0x000147a8) bg_status_flat_pane_g6

0x51bb,	// (0x000147b0) bg_status_flat_pane_g7

0xc6d5,	// (0x0001bcca) tabs_3_active_pane_t1_ParamLimits

0xc6d5,	// (0x0001bcca) tabs_3_passive_pane_t1_ParamLimits

0xc6ef,	// (0x0001bce4) tabs_4_active_pane_t1_ParamLimits

0xc6ef,	// (0x0001bce4) tabs_4_1_passive_pane_t1_ParamLimits

0xcf07,	// (0x0001c4fc) tabs_2_active_pane_t1_ParamLimits

0xcf07,	// (0x0001c4fc) tabs_2_passive_pane_t1_ParamLimits

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp4_ParamLimits

0xcf19,	// (0x0001c50e) tabs_2_long_active_pane_t1_ParamLimits

0x434c,	// (0x00013941) bg_passive_tab_pane_cp4_ParamLimits

0x116d,	// (0x00010762) list_single_midp_graphic_pane_t1_ParamLimits

0x23ab,	// (0x000119a0) bg_active_tab_pane_cp5_ParamLimits

0xcf2c,	// (0x0001c521) tabs_3_long_active_pane_t1_ParamLimits

0x434c,	// (0x00013941) bg_passive_tab_pane_cp5_ParamLimits

0x116d,	// (0x00010762) list_single_midp_graphic_pane_t1

0xd406,	// (0x0001c9fb) bg_status_flat_pane_ParamLimits

0x44ea,	// (0x00013adf) indicator_pane_cp2_ParamLimits

0x44ea,	// (0x00013adf) indicator_pane_cp2

0xd57e,	// (0x0001cb73) navi_pane_srt_ParamLimits

0xd57e,	// (0x0001cb73) navi_pane_srt

0x4633,	// (0x00013c28) popup_clock_digital_analogue_window_cp1

0x24a2,	// (0x00011a97) indicator_pane_t1

0x4004,	// (0x000135f9) copy_highlight_pane

0x4004,	// (0x000135f9) cursor_graphics_pane

0x4004,	// (0x000135f9) graphic_within_text_pane

0x4004,	// (0x000135f9) link_highlight_pane

0x599a,	// (0x00014f8f) popup_preview_text_window_t5_ParamLimits

0x599a,	// (0x00014f8f) popup_preview_text_window_t5

0x4124,	// (0x00013719) cursor_digital_pane

0x4124,	// (0x00013719) cursor_primary_pane

0x4135,	// (0x0001372a) cursor_primary_small_pane

0x413d,	// (0x00013732) cursor_secondary_pane

0x4145,	// (0x0001373a) cursor_title_pane

0x4124,	// (0x00013719) link_highlight_digital_pane

0x412c,	// (0x00013721) link_highlight_primary_pane

0x4135,	// (0x0001372a) link_highlight_primary_small_pane

0x413d,	// (0x00013732) link_highlight_secondary_pane

0x4145,	// (0x0001373a) link_highlight_title_pane

0x4124,	// (0x00013719) copy_highlight_digital_pane

0x4124,	// (0x00013719) copy_highlight_primary_pane

0x4135,	// (0x0001372a) copy_highlight_primary_small_pane

0x413d,	// (0x00013732) copy_highlight_secondary_pane

0x4145,	// (0x0001373a) copy_highlight_title_pane

0x413d,	// (0x00013732) graphic_text_digital_pane

0x5229,	// (0x0001481e) graphic_text_primary_pane

0x5232,	// (0x00014827) graphic_text_primary_small_pane

0x4135,	// (0x0001372a) graphic_text_secondary_pane

0x4124,	// (0x00013719) graphic_text_title_pane

0xd2b5,	// (0x0001c8aa) cursor_primary_pane_g1

0x521b,	// (0x00014810) cursor_text_primary_t1

0xd820,	// (0x0001ce15) cursor_primary_small_pane_g1

0x520d,	// (0x00014802) cursor_text_primary_small_t1

0xd816,	// (0x0001ce0b) cursor_primary_small_pane_g1_copy1

0x51f5,	// (0x000147ea) cursor_text_primary_small_t1_copy1

0x51d3,	// (0x000147c8) cursor_text_title_t1

0xd80c,	// (0x0001ce01) cursor_title_pane_g1

0xd2b5,	// (0x0001c8aa) cursor_digital_pane_g1

0x4157,	// (0x0001374c) cursor_text_digital_t1

0x417c,	// (0x00013771) link_highlight_primary_pane_g1

0x517c,	// (0x00014771) link_highlight_primary_pane_t1

0x4165,	// (0x0001375a) link_highlight_primary_small_pane_g1

0x416d,	// (0x00013762) link_highlight_primary_small_pane_t1

0x417c,	// (0x00013771) link_highlight_secondary_pane_g1

0x4184,	// (0x00013779) link_highlight_secondary_pane_t1

0x50f0,	// (0x000146e5) link_highlight_title_pane_g1

0x50f8,	// (0x000146ed) link_highlight_title_pane_t1

0x50d9,	// (0x000146ce) link_highlight_digital_pane_g1

0x50e1,	// (0x000146d6) link_highlight_digital_pane_t1

0x4fb1,	// (0x000145a6) copy_highlight_primary_pane_g1

0x4fb9,	// (0x000145ae) copy_highlight_primary_pane_t1

0x4f8b,	// (0x00014580) copy_highlight_primary_small_pane_g1

0x4fa2,	// (0x00014597) copy_highlight_primary_small_pane_t1

0x4193,	// (0x00013788) copy_highlight_secondary_pane_g1

0x419b,	// (0x00013790) copy_highlight_secondary_pane_t1

0x4f8b,	// (0x00014580) copy_highlight_title_pane_g1

0x4f93,	// (0x00014588) copy_highlight_title_pane_t1

0x4fb1,	// (0x000145a6) copy_highlight_digital_pane_g1

0x636e,	// (0x00015963) copy_highlight_digital_pane_t1

0x62c2,	// (0x000158b7) graphic_text_primary_pane_g1

0x6352,	// (0x00015947) graphic_text_primary_pane_t1

0x6360,	// (0x00015955) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001efbf) graphic_text_primary_pane_t

0x632e,	// (0x00015923) graphic_text_primary_small_pane_g1

0x6336,	// (0x0001592b) graphic_text_primary_small_pane_t1

0x6344,	// (0x00015939) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0001efba) graphic_text_primary_small_pane_t

0x630a,	// (0x000158ff) graphic_text_secondary_pane_g1

0x6312,	// (0x00015907) graphic_text_secondary_pane_t1

0x6320,	// (0x00015915) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001efb5) graphic_text_secondary_pane_t

0x62e6,	// (0x000158db) graphic_text_title_pane_g1

0x62ee,	// (0x000158e3) graphic_text_title_pane_t1

0x62fc,	// (0x000158f1) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001efb0) graphic_text_title_pane_t

0x62c2,	// (0x000158b7) graphic_text_digital_pane_g1

0x62ca,	// (0x000158bf) graphic_text_digital_pane_t1

0x62d8,	// (0x000158cd) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0001efab) graphic_text_digital_pane_t

0x23ab,	// (0x000119a0) navi_icon_pane_srt_ParamLimits

0x23ab,	// (0x000119a0) navi_icon_pane_srt

0x22cb,	// (0x000118c0) navi_midp_pane_srt

0x22cb,	// (0x000118c0) navi_navi_pane_srt

0x23ab,	// (0x000119a0) navi_text_pane_srt_ParamLimits

0x23ab,	// (0x000119a0) navi_text_pane_srt

0x628d,	// (0x00015882) navi_navi_icon_text_pane_srt

0x6295,	// (0x0001588a) navi_navi_pane_srt_g1_ParamLimits

0x6295,	// (0x0001588a) navi_navi_pane_srt_g1

0x62a7,	// (0x0001589c) navi_navi_pane_srt_g2_ParamLimits

0x62a7,	// (0x0001589c) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001efa6) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001efa6) navi_navi_pane_srt_g

0x62b9,	// (0x000158ae) navi_navi_tabs_pane_srt

0x628d,	// (0x00015882) navi_navi_text_pane_srt

0x628d,	// (0x00015882) navi_navi_volume_pane_srt

0x627e,	// (0x00015873) navi_navi_text_pane_srt_t1

0x14e7,	// (0x00010adc) navi_navi_volume_pane_srt_g1

0x14ef,	// (0x00010ae4) volume_small_pane_srt_ParamLimits

0x14ef,	// (0x00010ae4) volume_small_pane_srt

0x08a2,	// (0x0000fe97) volume_small_pane_srt_g1_ParamLimits

0x08a2,	// (0x0000fe97) volume_small_pane_srt_g1

0x08b2,	// (0x0000fea7) volume_small_pane_srt_g2_ParamLimits

0x08b2,	// (0x0000fea7) volume_small_pane_srt_g2

0x08c3,	// (0x0000feb8) volume_small_pane_srt_g3_ParamLimits

0x08c3,	// (0x0000feb8) volume_small_pane_srt_g3

0x08d4,	// (0x0000fec9) volume_small_pane_srt_g4_ParamLimits

0x08d4,	// (0x0000fec9) volume_small_pane_srt_g4

0x08e5,	// (0x0000feda) volume_small_pane_srt_g5_ParamLimits

0x08e5,	// (0x0000feda) volume_small_pane_srt_g5

0x08f6,	// (0x0000feeb) volume_small_pane_srt_g6_ParamLimits

0x08f6,	// (0x0000feeb) volume_small_pane_srt_g6

0x0907,	// (0x0000fefc) volume_small_pane_srt_g7_ParamLimits

0x0907,	// (0x0000fefc) volume_small_pane_srt_g7

0x0918,	// (0x0000ff0d) volume_small_pane_srt_g8_ParamLimits

0x0918,	// (0x0000ff0d) volume_small_pane_srt_g8

0x0929,	// (0x0000ff1e) volume_small_pane_srt_g9_ParamLimits

0x0929,	// (0x0000ff1e) volume_small_pane_srt_g9

0x093a,	// (0x0000ff2f) volume_small_pane_srt_g10_ParamLimits

0x093a,	// (0x0000ff2f) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001ed53) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001ed53) volume_small_pane_srt_g

0x279f,	// (0x00011d94) query_popup_data_pane_cp2

0x6264,	// (0x00015859) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6264,	// (0x00015859) navi_navi_icon_text_pane_srt_t1

0x5229,	// (0x0001481e) navi_tabs_2_long_pane_srt

0x5229,	// (0x0001481e) navi_tabs_2_pane_srt

0x5229,	// (0x0001481e) navi_tabs_3_long_pane_srt

0x5229,	// (0x0001481e) navi_tabs_3_pane_srt

0x5229,	// (0x0001481e) navi_tabs_4_pane_srt

0x14c7,	// (0x00010abc) tabs_2_active_pane_srt_ParamLimits

0x14c7,	// (0x00010abc) tabs_2_active_pane_srt

0x14d7,	// (0x00010acc) tabs_2_passive_pane_srt_ParamLimits

0x14d7,	// (0x00010acc) tabs_2_passive_pane_srt

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp1_srt

0x6230,	// (0x00015825) bg_passive_tab_pane_g1_cp1_srt

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp1_srt

0x6239,	// (0x0001582e) bg_passive_tab_pane_g3_cp1_srt

0x2640,	// (0x00011c35) bg_active_tab_pane_cp1_srt_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp1_srt

0x6242,	// (0x00015837) tabs_2_active_pane_srt_g1

0xdc68,	// (0x0001d25d) tabs_2_active_pane_srt_t1_ParamLimits

0xdc68,	// (0x0001d25d) tabs_2_active_pane_srt_t1

0x6230,	// (0x00015825) bg_active_tab_pane_g1_cp1_srt

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp1_srt

0x6239,	// (0x0001582e) bg_active_tab_pane_g3_cp1_srt

0x1494,	// (0x00010a89) tabs_3_active_pane_srt_ParamLimits

0x1494,	// (0x00010a89) tabs_3_active_pane_srt

0x14a5,	// (0x00010a9a) tabs_3_passive_pane_cp_srt_ParamLimits

0x14a5,	// (0x00010a9a) tabs_3_passive_pane_cp_srt

0x14b6,	// (0x00010aab) tabs_3_passive_pane_srt_ParamLimits

0x14b6,	// (0x00010aab) tabs_3_passive_pane_srt

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x49a7,	// (0x00013f9c) bg_passive_tab_pane_cp2_srt

0x41aa,	// (0x0001379f) bg_passive_tab_pane_g1_cp2_srt

0x3c51,	// (0x00013246) bg_passive_tab_pane_g2_cp2_srt

0x41b3,	// (0x000137a8) bg_passive_tab_pane_g3_cp2_srt

0x2640,	// (0x00011c35) bg_active_tab_pane_cp2_srt_ParamLimits

0x2640,	// (0x00011c35) bg_active_tab_pane_cp2_srt

0x6216,	// (0x0001580b) tabs_3_active_pane_srt_g1

0xdc52,	// (0x0001d247) tabs_3_active_pane_srt_t1_ParamLimits

0xdc52,	// (0x0001d247) tabs_3_active_pane_srt_t1

0x41aa,	// (0x0001379f) bg_active_tab_pane_g1_cp2_srt

0x3c51,	// (0x00013246) bg_active_tab_pane_g2_cp2_srt

0x41b3,	// (0x000137a8) bg_active_tab_pane_g3_cp2_srt

0x144c,	// (0x00010a41) tabs_4_active_pane_srt_ParamLimits

0x144c,	// (0x00010a41) tabs_4_active_pane_srt

0x145e,	// (0x00010a53) tabs_4_passive_pane_cp2_srt_ParamLimits

0x145e,	// (0x00010a53) tabs_4_passive_pane_cp2_srt

0x0a9b,	// (0x00010090) aid_size_cell_toolbar

0x5d82,	// (0x00015377) main_idle_act_pane_ParamLimits

0x0c5c,	// (0x00010251) popup_large_graphic_colour_window_ParamLimits

0xbeef,	// (0x0001b4e4) popup_toolbar_window_ParamLimits

0xbeef,	// (0x0001b4e4) popup_toolbar_window

0x5fca,	// (0x000155bf) list_single_graphic_2heading_pane_ParamLimits

0x5fca,	// (0x000155bf) list_single_graphic_2heading_pane

0x36bb,	// (0x00012cb0) aid_size_cell_apps_grid_lsc_pane

0x36cd,	// (0x00012cc2) aid_size_cell_apps_grid_prt_pane

0x434c,	// (0x00013941) bg_wml_button_pane_cp1_ParamLimits

0x434c,	// (0x00013941) bg_wml_button_pane_cp1

0xd7ac,	// (0x0001cda1) form_midp_field_text_pane_t1_ParamLimits

0x49a7,	// (0x00013f9c) input_focus_pane_cp050_ParamLimits

0x4c23,	// (0x00014218) list_midp_form_text_pane_ParamLimits

0x4bc9,	// (0x000141be) input_focus_pane_cp051_ParamLimits

0x4bdd,	// (0x000141d2) list_midp_choice_pane_ParamLimits

0xd749,	// (0x0001cd3e) list_single_2graphic_pane_cp3_ParamLimits

0xd749,	// (0x0001cd3e) list_single_2graphic_pane_cp3

0xd75c,	// (0x0001cd51) list_single_midp_graphic_pane_ParamLimits

0xd75c,	// (0x0001cd51) list_single_midp_graphic_pane

0x1070,	// (0x00010665) list_single_graphic_2heading_pane_g1_ParamLimits

0x1070,	// (0x00010665) list_single_graphic_2heading_pane_g1

0x107c,	// (0x00010671) list_single_graphic_2heading_pane_g4_ParamLimits

0x107c,	// (0x00010671) list_single_graphic_2heading_pane_g4

0x1088,	// (0x0001067d) list_single_graphic_2heading_pane_g5_ParamLimits

0x1088,	// (0x0001067d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001eda6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001eda6) list_single_graphic_2heading_pane_g

0x1094,	// (0x00010689) list_single_graphic_2heading_pane_t1_ParamLimits

0x1094,	// (0x00010689) list_single_graphic_2heading_pane_t1

0x10a8,	// (0x0001069d) list_single_graphic_2heading_pane_t2_ParamLimits

0x10a8,	// (0x0001069d) list_single_graphic_2heading_pane_t2

0x10c4,	// (0x000106b9) list_single_graphic_2heading_pane_t3_ParamLimits

0x10c4,	// (0x000106b9) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001edad) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001edad) list_single_graphic_2heading_pane_t

0x4787,	// (0x00013d7c) bg_popup_sub_pane_cp2

0x47b1,	// (0x00013da6) grid_toobar_pane

0x10dc,	// (0x000106d1) cell_toolbar_pane_ParamLimits

0x10dc,	// (0x000106d1) cell_toolbar_pane

0x4827,	// (0x00013e1c) cell_toolbar_pane_g1_ParamLimits

0x4827,	// (0x00013e1c) cell_toolbar_pane_g1

0x483b,	// (0x00013e30) cell_toolbar_pane_g2_ParamLimits

0x483b,	// (0x00013e30) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001edbb) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001edbb) cell_toolbar_pane_g

0x485d,	// (0x00013e52) grid_highlight_pane_cp2_ParamLimits

0x485d,	// (0x00013e52) grid_highlight_pane_cp2

0x4877,	// (0x00013e6c) toolbar_button_pane

0x4883,	// (0x00013e78) toolbar_button_pane_g1

0x488b,	// (0x00013e80) toolbar_button_pane_g2

0x4893,	// (0x00013e88) toolbar_button_pane_g3

0x489b,	// (0x00013e90) toolbar_button_pane_g4

0x48a3,	// (0x00013e98) toolbar_button_pane_g5

0x48ab,	// (0x00013ea0) toolbar_button_pane_g6

0x48b3,	// (0x00013ea8) toolbar_button_pane_g7

0x48bb,	// (0x00013eb0) toolbar_button_pane_g8

0x48c3,	// (0x00013eb8) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001edc0) toolbar_button_pane_g

0x1114,	// (0x00010709) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1114,	// (0x00010709) list_single_2graphic_pane_g1_cp3

0xbf47,	// (0x0001b53c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbf47,	// (0x0001b53c) list_single_2graphic_pane_g2_cp3

0x1131,	// (0x00010726) list_single_2graphic_pane_g3_cp3

0x1139,	// (0x0001072e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1139,	// (0x0001072e) list_single_2graphic_pane_g4_cp3

0x1145,	// (0x0001073a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1145,	// (0x0001073a) list_single_2graphic_pane_t1_cp3

0x1161,	// (0x00010756) list_single_midp_graphic_pane_g2_ParamLimits

0x1161,	// (0x00010756) list_single_midp_graphic_pane_g2

0x0aa3,	// (0x00010098) aid_zoom_text_primary

0x0aab,	// (0x000100a0) aid_zoom_text_secondary

0x4267,	// (0x0001385c) status_small_pane_g7_ParamLimits

0x4267,	// (0x0001385c) status_small_pane_g7

0x428a,	// (0x0001387f) status_small_pane_t1_ParamLimits

0xc61d,	// (0x0001bc12) title_pane_g2

0x0003,

0xf554,	// (0x0001eb49) title_pane_g

0xc8a5,	// (0x0001be9a) aid_size_cell_colour_1_pane_ParamLimits

0xc8a5,	// (0x0001be9a) aid_size_cell_colour_1_pane

0xc8b9,	// (0x0001beae) aid_size_cell_colour_2_pane_ParamLimits

0xc8b9,	// (0x0001beae) aid_size_cell_colour_2_pane

0xc8cd,	// (0x0001bec2) aid_size_cell_colour_3_pane_ParamLimits

0xc8cd,	// (0x0001bec2) aid_size_cell_colour_3_pane

0xc8e1,	// (0x0001bed6) aid_size_cell_colour_4_pane_ParamLimits

0xc8e1,	// (0x0001bed6) aid_size_cell_colour_4_pane

0x04fe,	// (0x0000faf3) title_pane_stacon_g1_ParamLimits

0x04fe,	// (0x0000faf3) title_pane_stacon_g1

0x5010,	// (0x00014605) popup_note_wait_window_g3_ParamLimits

0x5010,	// (0x00014605) popup_note_wait_window_g3

0x5086,	// (0x0001467b) popup_note_wait_window_t5_ParamLimits

0x5086,	// (0x0001467b) popup_note_wait_window_t5

0x22cb,	// (0x000118c0) main_feb_china_hwr_fs_writing_pane

0xb8fd,	// (0x0001aef2) popup_feb_china_hwr_fs_window_ParamLimits

0xb8fd,	// (0x0001aef2) popup_feb_china_hwr_fs_window

0xbf58,	// (0x0001b54d) aid_size_cell_hwr_fs_ParamLimits

0xbf58,	// (0x0001b54d) aid_size_cell_hwr_fs

0x49a7,	// (0x00013f9c) bg_popup_sub_pane_cp3_ParamLimits

0x49a7,	// (0x00013f9c) bg_popup_sub_pane_cp3

0xbf6d,	// (0x0001b562) grid_hwr_fs_pane_ParamLimits

0xbf6d,	// (0x0001b562) grid_hwr_fs_pane

0x11b0,	// (0x000107a5) linegrid_hwr_fs_pane_ParamLimits

0x11b0,	// (0x000107a5) linegrid_hwr_fs_pane

0xbf85,	// (0x0001b57a) cell_hwr_fs_pane_ParamLimits

0xbf85,	// (0x0001b57a) cell_hwr_fs_pane

0x49b3,	// (0x00013fa8) linegrid_hwr_fs_pane_g1_ParamLimits

0x49b3,	// (0x00013fa8) linegrid_hwr_fs_pane_g1

0xd71d,	// (0x0001cd12) linegrid_hwr_fs_pane_g2_ParamLimits

0xd71d,	// (0x0001cd12) linegrid_hwr_fs_pane_g2

0x49d1,	// (0x00013fc6) linegrid_hwr_fs_pane_g3_ParamLimits

0x49d1,	// (0x00013fc6) linegrid_hwr_fs_pane_g3

0x11e2,	// (0x000107d7) linegrid_hwr_fs_pane_g4_ParamLimits

0x11e2,	// (0x000107d7) linegrid_hwr_fs_pane_g4

0x11fc,	// (0x000107f1) linegrid_hwr_fs_pane_g5_ParamLimits

0x11fc,	// (0x000107f1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001ede6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001ede6) linegrid_hwr_fs_pane_g

0x49dd,	// (0x00013fd2) cell_hwr_fs_pane_g1_ParamLimits

0x49dd,	// (0x00013fd2) cell_hwr_fs_pane_g1

0x46c1,	// (0x00013cb6) cell_hwr_fs_pane_g2_ParamLimits

0x46c1,	// (0x00013cb6) cell_hwr_fs_pane_g2

0xd72f,	// (0x0001cd24) cell_hwr_fs_pane_g3_ParamLimits

0xd72f,	// (0x0001cd24) cell_hwr_fs_pane_g3

0xd73c,	// (0x0001cd31) cell_hwr_fs_pane_g4_ParamLimits

0xd73c,	// (0x0001cd31) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0001edf1) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001edf1) cell_hwr_fs_pane_g

0xbfab,	// (0x0001b5a0) cell_hwr_fs_pane_t1

0x22cb,	// (0x000118c0) grid_highlight_pane_cp6

0x22cb,	// (0x000118c0) main_idle_act2_pane

0x3472,	// (0x00012a67) aid_inside_area_popup_secondary

0xd887,	// (0x0001ce7c) aid_inside_area_window_primary_ParamLimits

0xd887,	// (0x0001ce7c) aid_inside_area_window_primary

0x637d,	// (0x00015972) ai2_news_ticker_pane

0x6385,	// (0x0001597a) aid_size_cell_ai1_link_ParamLimits

0x6385,	// (0x0001597a) aid_size_cell_ai1_link

0xdc7e,	// (0x0001d273) popup_ai2_data_window_ParamLimits

0xdc7e,	// (0x0001d273) popup_ai2_data_window

0x63b5,	// (0x000159aa) popup_ai2_link_window_ParamLimits

0x63b5,	// (0x000159aa) popup_ai2_link_window

0x49a7,	// (0x00013f9c) bg_popup_sub_pane_cp4_ParamLimits

0x49a7,	// (0x00013f9c) bg_popup_sub_pane_cp4

0x63c9,	// (0x000159be) grid_ai2_link_pane_ParamLimits

0x63c9,	// (0x000159be) grid_ai2_link_pane

0x63e0,	// (0x000159d5) popup_ai2_link_window_g1_ParamLimits

0x63e0,	// (0x000159d5) popup_ai2_link_window_g1

0x63ec,	// (0x000159e1) popup_ai2_link_window_g2_ParamLimits

0x63ec,	// (0x000159e1) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001efc4) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001efc4) popup_ai2_link_window_g

0x63fb,	// (0x000159f0) ai2_mp_button_pane

0x6403,	// (0x000159f8) ai2_mp_volume_pane

0x4bc9,	// (0x000141be) bg_popup_sub_pane_cp5_ParamLimits

0x4bc9,	// (0x000141be) bg_popup_sub_pane_cp5

0x640b,	// (0x00015a00) heading_ai2_gene_pane_ParamLimits

0x640b,	// (0x00015a00) heading_ai2_gene_pane

0x6417,	// (0x00015a0c) list_ai2_gene_pane_ParamLimits

0x6417,	// (0x00015a0c) list_ai2_gene_pane

0x645f,	// (0x00015a54) cell_ai2_link_pane_ParamLimits

0x645f,	// (0x00015a54) cell_ai2_link_pane

0x6475,	// (0x00015a6a) cell_ai2_link_pane_g1

0x22cb,	// (0x000118c0) grid_highlight_pane_cp7

0x1504,	// (0x00010af9) ai2_mp_volume_pane_g1

0x6545,	// (0x00015b3a) ai2_mp_volume_pane_g2

0xdca8,	// (0x0001d29d) list_ai2_gene_pane_t1

0x654d,	// (0x00015b42) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0001efdd) ai2_mp_volume_pane_g

0x150c,	// (0x00010b01) volume_small_pane_cp3

0x6555,	// (0x00015b4a) aid_size_cell_ai2_button

0x655d,	// (0x00015b52) grid_ai2_button_pane

0x6566,	// (0x00015b5b) cell_ai2_button_pane_ParamLimits

0x6566,	// (0x00015b5b) cell_ai2_button_pane

0x22c1,	// (0x000118b6) cell_ai2_button_pane_g1

0x22cb,	// (0x000118c0) grid_highlight_pane_cp8

0x6505,	// (0x00015afa) ai2_gene_pane_t1_ParamLimits

0x6505,	// (0x00015afa) ai2_gene_pane_t1

0xb887,	// (0x0001ae7c) aid_height_parent_landscape

0xd9ee,	// (0x0001cfe3) aid_height_set_list

0x5d82,	// (0x00015377) aid_size_parent

0x61a4,	// (0x00015799) aid_size_cell_graphic_pane_ParamLimits

0x6427,	// (0x00015a1c) popup_ai2_data_window_g1_ParamLimits

0x6427,	// (0x00015a1c) popup_ai2_data_window_g1

0x6433,	// (0x00015a28) ai2_news_ticker_pane_g1

0x643b,	// (0x00015a30) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0001efc9) ai2_news_ticker_pane_g

0x6443,	// (0x00015a38) ai2_news_ticker_pane_t1

0x6451,	// (0x00015a46) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0001efce) ai2_news_ticker_pane_t

0x647e,	// (0x00015a73) heading_ai2_gene_pane_g1

0x6486,	// (0x00015a7b) heading_ai2_gene_pane_t1_ParamLimits

0x6486,	// (0x00015a7b) heading_ai2_gene_pane_t1

0x649b,	// (0x00015a90) list_highlight_pane_cp6

0xdc92,	// (0x0001d287) ai2_gene_pane_ParamLimits

0xdc92,	// (0x0001d287) ai2_gene_pane

0xdcb6,	// (0x0001d2ab) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001efd3) list_ai2_gene_pane_t

0x64d6,	// (0x00015acb) list_highlight_pane_cp8_ParamLimits

0x64d6,	// (0x00015acb) list_highlight_pane_cp8

0x64e7,	// (0x00015adc) ai2_gene_pane_g1_ParamLimits

0x64e7,	// (0x00015adc) ai2_gene_pane_g1

0x64f9,	// (0x00015aee) ai2_gene_pane_g2_ParamLimits

0x64f9,	// (0x00015aee) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001efd8) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001efd8) ai2_gene_pane_g

0x2bc7,	// (0x000121bc) scroll_pane_cp12

0xb846,	// (0x0001ae3b) control_pane_t3_ParamLimits

0xb846,	// (0x0001ae3b) control_pane_t3

0x427b,	// (0x00013870) status_small_pane_g8_ParamLimits

0x427b,	// (0x00013870) status_small_pane_g8

0xb992,	// (0x0001af87) popup_find_window_ParamLimits

0xbc19,	// (0x0001b20e) popup_note_image_window_ParamLimits

0x47ed,	// (0x00013de2) list_double2_graphic_pane_vc_g1_ParamLimits

0x47ed,	// (0x00013de2) list_double2_graphic_pane_vc_g1

0x47f9,	// (0x00013dee) list_double2_graphic_pane_vc_g2_ParamLimits

0x47f9,	// (0x00013dee) list_double2_graphic_pane_vc_g2

0x4805,	// (0x00013dfa) list_double2_graphic_pane_vc_g3_ParamLimits

0x4805,	// (0x00013dfa) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001edb4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001edb4) list_double2_graphic_pane_vc_g

0x4811,	// (0x00013e06) list_double2_graphic_pane_vc_t1_ParamLimits

0x4811,	// (0x00013e06) list_double2_graphic_pane_vc_t1

0x47f9,	// (0x00013dee) list_single_heading_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_heading_pane_vc_g1

0x4805,	// (0x00013dfa) list_single_heading_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_heading_pane_vc_g

0x48cb,	// (0x00013ec0) list_single_heading_pane_vc_t1_ParamLimits

0x48cb,	// (0x00013ec0) list_single_heading_pane_vc_t1

0x48e3,	// (0x00013ed8) list_single_heading_pane_vc_t2_ParamLimits

0x48e3,	// (0x00013ed8) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001edd5) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001edd5) list_single_heading_pane_vc_t

0x48f7,	// (0x00013eec) list_setting_number_pane_vc_g1_ParamLimits

0x48f7,	// (0x00013eec) list_setting_number_pane_vc_g1

0x4903,	// (0x00013ef8) list_setting_number_pane_vc_g2_ParamLimits

0x4903,	// (0x00013ef8) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001edda) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001edda) list_setting_number_pane_vc_g

0x490f,	// (0x00013f04) list_setting_number_pane_vc_t1_ParamLimits

0x490f,	// (0x00013f04) list_setting_number_pane_vc_t1

0x4923,	// (0x00013f18) list_setting_number_pane_vc_t2_ParamLimits

0x4923,	// (0x00013f18) list_setting_number_pane_vc_t2

0x493f,	// (0x00013f34) list_setting_number_pane_vc_t3_ParamLimits

0x493f,	// (0x00013f34) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0001eddf) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0001eddf) list_setting_number_pane_vc_t

0x496b,	// (0x00013f60) set_value_pane_vc_ParamLimits

0x496b,	// (0x00013f60) set_value_pane_vc

0x5fca,	// (0x000155bf) list_double2_graphic_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double2_graphic_pane_vc

0x5fdc,	// (0x000155d1) list_double2_large_graphic_pane_vc_ParamLimits

0x5fdc,	// (0x000155d1) list_double2_large_graphic_pane_vc

0x5fca,	// (0x000155bf) list_double2_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double2_pane_vc

0x5fca,	// (0x000155bf) list_double_graphic_heading_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_graphic_heading_pane_vc

0x5fca,	// (0x000155bf) list_double_graphic_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_graphic_pane_vc

0x5fca,	// (0x000155bf) list_double_heading_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_heading_pane_vc

0x5fdc,	// (0x000155d1) list_double_large_graphic_pane_vc_ParamLimits

0x5fdc,	// (0x000155d1) list_double_large_graphic_pane_vc

0x5fca,	// (0x000155bf) list_double_number_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_number_pane_vc

0x5fca,	// (0x000155bf) list_double_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_pane_vc

0x5fca,	// (0x000155bf) list_double_time_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_double_time_pane_vc

0x5fca,	// (0x000155bf) list_setting_number_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_setting_number_pane_vc

0x5fca,	// (0x000155bf) list_setting_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_setting_pane_vc

0x5fca,	// (0x000155bf) list_single_graphic_heading_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_single_graphic_heading_pane_vc

0x5fca,	// (0x000155bf) list_single_heading_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_single_heading_pane_vc

0x5fca,	// (0x000155bf) list_single_number_heading_pane_vc_ParamLimits

0x5fca,	// (0x000155bf) list_single_number_heading_pane_vc

0x659a,	// (0x00015b8f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x659a,	// (0x00015b8f) list_double_graphic_heading_pane_vc_g1

0x47f9,	// (0x00013dee) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x47f9,	// (0x00013dee) list_double_graphic_heading_pane_vc_g2

0x4805,	// (0x00013dfa) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4805,	// (0x00013dfa) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001efe4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001efe4) list_double_graphic_heading_pane_vc_g

0x65a6,	// (0x00015b9b) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x65a6,	// (0x00015b9b) list_double_graphic_heading_pane_vc_t1

0x48cb,	// (0x00013ec0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x48cb,	// (0x00013ec0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x0001efeb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x0001efeb) list_double_graphic_heading_pane_vc_t

0x48f7,	// (0x00013eec) list_setting_pane_vc_g1_ParamLimits

0x48f7,	// (0x00013eec) list_setting_pane_vc_g1

0x4903,	// (0x00013ef8) list_setting_pane_vc_g2_ParamLimits

0x4903,	// (0x00013ef8) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001edda) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001edda) list_setting_pane_vc_g

0x67c6,	// (0x00015dbb) list_setting_pane_vc_t1_ParamLimits

0x67c6,	// (0x00015dbb) list_setting_pane_vc_t1

0x67e2,	// (0x00015dd7) list_setting_pane_vc_t2_ParamLimits

0x67e2,	// (0x00015dd7) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0001f02e) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0001f02e) list_setting_pane_vc_t

0x496b,	// (0x00013f60) set_value_pane_cp_vc_ParamLimits

0x496b,	// (0x00013f60) set_value_pane_cp_vc

0x47f9,	// (0x00013dee) list_single_number_heading_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_single_number_heading_pane_vc_g1

0x4805,	// (0x00013dfa) list_single_number_heading_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_single_number_heading_pane_vc_g

0x48cb,	// (0x00013ec0) list_single_number_heading_pane_vc_t1_ParamLimits

0x48cb,	// (0x00013ec0) list_single_number_heading_pane_vc_t1

0x67fe,	// (0x00015df3) list_single_number_heading_pane_vc_t2_ParamLimits

0x67fe,	// (0x00015df3) list_single_number_heading_pane_vc_t2

0x6812,	// (0x00015e07) list_single_number_heading_pane_vc_t3_ParamLimits

0x6812,	// (0x00015e07) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0001f033) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001f033) list_single_number_heading_pane_vc_t

0x47ed,	// (0x00013de2) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x47ed,	// (0x00013de2) list_single_graphic_heading_pane_vc_g1

0x47f9,	// (0x00013dee) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x47f9,	// (0x00013dee) list_single_graphic_heading_pane_vc_g4

0x4805,	// (0x00013dfa) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4805,	// (0x00013dfa) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001edb4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001edb4) list_single_graphic_heading_pane_vc_g

0x48cb,	// (0x00013ec0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x48cb,	// (0x00013ec0) list_single_graphic_heading_pane_vc_t1

0x6824,	// (0x00015e19) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6824,	// (0x00015e19) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0001f03a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0001f03a) list_single_graphic_heading_pane_vc_t

0x47f9,	// (0x00013dee) list_double2_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_double2_pane_vc_g1

0x4805,	// (0x00013dfa) list_double2_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_double2_pane_vc_g

0x6838,	// (0x00015e2d) list_double2_pane_vc_t1_ParamLimits

0x6838,	// (0x00015e2d) list_double2_pane_vc_t1

0x684e,	// (0x00015e43) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x684e,	// (0x00015e43) list_double2_large_graphic_pane_vc_g1

0x685a,	// (0x00015e4f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x685a,	// (0x00015e4f) list_double2_large_graphic_pane_vc_g2

0x6866,	// (0x00015e5b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6866,	// (0x00015e5b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001ebe0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001ebe0) list_double2_large_graphic_pane_vc_g

0x6872,	// (0x00015e67) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6872,	// (0x00015e67) list_double2_large_graphic_pane_vc_t1

0x6888,	// (0x00015e7d) list_double_time_pane_vc_g1_ParamLimits

0x6888,	// (0x00015e7d) list_double_time_pane_vc_g1

0x6894,	// (0x00015e89) list_double_time_pane_vc_g2_ParamLimits

0x6894,	// (0x00015e89) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0001f03f) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001f03f) list_double_time_pane_vc_g

0x68a0,	// (0x00015e95) list_double_time_pane_vc_t1_ParamLimits

0x68a0,	// (0x00015e95) list_double_time_pane_vc_t1

0x68c4,	// (0x00015eb9) list_double_time_pane_vc_t2_ParamLimits

0x68c4,	// (0x00015eb9) list_double_time_pane_vc_t2

0x68ee,	// (0x00015ee3) list_double_time_pane_vc_t3_ParamLimits

0x68ee,	// (0x00015ee3) list_double_time_pane_vc_t3

0x6900,	// (0x00015ef5) list_double_time_pane_vc_t4_ParamLimits

0x6900,	// (0x00015ef5) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0001f044) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001f044) list_double_time_pane_vc_t

0x47f9,	// (0x00013dee) list_double_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_double_pane_vc_g1

0x4805,	// (0x00013dfa) list_double_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_double_pane_vc_g

0x6925,	// (0x00015f1a) list_double_pane_vc_t1_ParamLimits

0x6925,	// (0x00015f1a) list_double_pane_vc_t1

0x6939,	// (0x00015f2e) list_double_pane_vc_t2_ParamLimits

0x6939,	// (0x00015f2e) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x0001f04d) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x0001f04d) list_double_pane_vc_t

0x47f9,	// (0x00013dee) list_double_number_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_double_number_pane_vc_g1

0x4805,	// (0x00013dfa) list_double_number_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_double_number_pane_vc_g

0x6951,	// (0x00015f46) list_double_number_pane_vc_t1_ParamLimits

0x6951,	// (0x00015f46) list_double_number_pane_vc_t1

0x6965,	// (0x00015f5a) list_double_number_pane_vc_t2_ParamLimits

0x6965,	// (0x00015f5a) list_double_number_pane_vc_t2

0x6939,	// (0x00015f2e) list_double_number_pane_vc_t3_ParamLimits

0x6939,	// (0x00015f2e) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0001f052) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001f052) list_double_number_pane_vc_t

0x6979,	// (0x00015f6e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6979,	// (0x00015f6e) list_double_large_graphic_pane_vc_g1

0x698a,	// (0x00015f7f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x698a,	// (0x00015f7f) list_double_large_graphic_pane_vc_g2

0x6866,	// (0x00015e5b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6866,	// (0x00015e5b) list_double_large_graphic_pane_vc_g3

0x6999,	// (0x00015f8e) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6999,	// (0x00015f8e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x0001f059) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x0001f059) list_double_large_graphic_pane_vc_g

0x69a5,	// (0x00015f9a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x69a5,	// (0x00015f9a) list_double_large_graphic_pane_vc_t1

0x69be,	// (0x00015fb3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x69be,	// (0x00015fb3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001f062) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001f062) list_double_large_graphic_pane_vc_t

0x47f9,	// (0x00013dee) list_double_heading_pane_vc_g1_ParamLimits

0x47f9,	// (0x00013dee) list_double_heading_pane_vc_g1

0x4805,	// (0x00013dfa) list_double_heading_pane_vc_g2_ParamLimits

0x4805,	// (0x00013dfa) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001ebc3) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001ebc3) list_double_heading_pane_vc_g

0x69d7,	// (0x00015fcc) list_double_heading_pane_vc_t1_ParamLimits

0x69d7,	// (0x00015fcc) list_double_heading_pane_vc_t1

0x48cb,	// (0x00013ec0) list_double_heading_pane_vc_t2_ParamLimits

0x48cb,	// (0x00013ec0) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0001f067) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0001f067) list_double_heading_pane_vc_t

0x47ed,	// (0x00013de2) list_double_graphic_pane_vc_g1_ParamLimits

0x47ed,	// (0x00013de2) list_double_graphic_pane_vc_g1

0x69eb,	// (0x00015fe0) list_double_graphic_pane_vc_g2_ParamLimits

0x69eb,	// (0x00015fe0) list_double_graphic_pane_vc_g2

0x69fa,	// (0x00015fef) list_double_graphic_pane_vc_g3_ParamLimits

0x69fa,	// (0x00015fef) list_double_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0001f06c) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0001f06c) list_double_graphic_pane_vc_g

0x6a06,	// (0x00015ffb) list_double_graphic_pane_vc_t1_ParamLimits

0x6a06,	// (0x00015ffb) list_double_graphic_pane_vc_t1

0x6939,	// (0x00015f2e) list_double_graphic_pane_vc_t2_ParamLimits

0x6939,	// (0x00015f2e) list_double_graphic_pane_vc_t2

0x0001,

0xfa7e,	// (0x0001f073) list_double_graphic_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001f073) list_double_graphic_pane_vc_t

0x005a,	// (0x0000f64f) aid_size_cell_fastswap

0xb57a,	// (0x0001ab6f) aid_size_cell_touch_ParamLimits

0xb57a,	// (0x0001ab6f) aid_size_cell_touch

0x02c7,	// (0x0000f8bc) popup_fast_swap_wide_window_ParamLimits

0x02c7,	// (0x0000f8bc) popup_fast_swap_wide_window

0xb6c5,	// (0x0001acba) touch_pane_ParamLimits

0xb6c5,	// (0x0001acba) touch_pane

0x30ac,	// (0x000126a1) button_value_adjust_pane_cp2

0x30b4,	// (0x000126a9) button_value_adjust_pane_cp4

0x30d6,	// (0x000126cb) form_field_data_pane_cp2

0xcd72,	// (0x0001c367) form_field_data_wide_pane_cp2

0x3786,	// (0x00012d7b) bg_scroll_pane_ParamLimits

0x0661,	// (0x0000fc56) scroll_handle_pane_ParamLimits

0x0675,	// (0x0000fc6a) scroll_sc2_down_pane_ParamLimits

0x0675,	// (0x0000fc6a) scroll_sc2_down_pane

0x37b7,	// (0x00012dac) scroll_sc2_up_pane_ParamLimits

0x37b7,	// (0x00012dac) scroll_sc2_up_pane

0xdde0,	// (0x0001d3d5) grid_wheel_folder_pane_g1_ParamLimits

0xdde0,	// (0x0001d3d5) grid_wheel_folder_pane_g1

0x083a,	// (0x0000fe2f) clock_nsta_pane_cp2_ParamLimits

0x083a,	// (0x0000fe2f) clock_nsta_pane_cp2

0x434c,	// (0x00013941) listscroll_midp_pane_ParamLimits

0xd21e,	// (0x0001c813) midp_canvas_pane

0x42f6,	// (0x000138eb) nsta_clock_indic_pane

0x4332,	// (0x00013927) listscroll_form_pane_vc

0x433a,	// (0x0001392f) listscroll_set_pane_vc_ParamLimits

0x433a,	// (0x0001392f) listscroll_set_pane_vc

0xd42e,	// (0x0001ca23) clock_nsta_pane

0xd458,	// (0x0001ca4d) indicator_nsta_pane

0x4787,	// (0x00013d7c) bg_popup_sub_pane_cp2_ParamLimits

0x479b,	// (0x00013d90) find_pane_cp2_ParamLimits

0x479b,	// (0x00013d90) find_pane_cp2

0x47b1,	// (0x00013da6) grid_toobar_pane_ParamLimits

0x497b,	// (0x00013f70) list_form_gen_pane_vc_ParamLimits

0x497b,	// (0x00013f70) list_form_gen_pane_vc

0x4991,	// (0x00013f86) scroll_pane_cp8_vc_ParamLimits

0x4991,	// (0x00013f86) scroll_pane_cp8_vc

0x4a0d,	// (0x00014002) data_form_wide_pane_vc_ParamLimits

0x4a0d,	// (0x00014002) data_form_wide_pane_vc

0x4a19,	// (0x0001400e) form_field_data_wide_pane_vc_g1

0x4a21,	// (0x00014016) form_field_data_wide_pane_vc_t1_ParamLimits

0x4a21,	// (0x00014016) form_field_data_wide_pane_vc_t1

0x3192,	// (0x00012787) input_focus_pane_cp6_vc_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_cp6_vc

0xd7e4,	// (0x0001cdd9) list_midp_pane_ParamLimits

0x620a,	// (0x000157ff) scroll_pane_cp16_ParamLimits

0x620a,	// (0x000157ff) scroll_pane_cp16

0x4de5,	// (0x000143da) button_value_adjust_pane_ParamLimits

0x4de5,	// (0x000143da) button_value_adjust_pane

0xd9ff,	// (0x0001cff4) button_value_adjust_pane_cp6_ParamLimits

0xd9ff,	// (0x0001cff4) button_value_adjust_pane_cp6

0xdb19,	// (0x0001d10e) settings_code_pane_cp_ParamLimits

0xdb19,	// (0x0001d10e) settings_code_pane_cp

0x22c1,	// (0x000118b6) cell_touch_pane_g1

0x22c1,	// (0x000118b6) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001ecf9) cell_touch_pane_g

0xdcc4,	// (0x0001d2b9) cell_touch_pane_cp_ParamLimits

0xdcc4,	// (0x0001d2b9) cell_touch_pane_cp

0xdce0,	// (0x0001d2d5) cell_touch_pane_ParamLimits

0xdce0,	// (0x0001d2d5) cell_touch_pane

0x22c1,	// (0x000118b6) scroll_sc2_down_pane_g1

0x22c1,	// (0x000118b6) scroll_sc2_up_pane_g1

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp4_vc

0x65ba,	// (0x00015baf) list_set_graphic_pane_vc_g1_ParamLimits

0x65ba,	// (0x00015baf) list_set_graphic_pane_vc_g1

0x65c6,	// (0x00015bbb) list_set_graphic_pane_vc_g2_ParamLimits

0x65c6,	// (0x00015bbb) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x0001eff0) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x0001eff0) list_set_graphic_pane_vc_g

0x65d2,	// (0x00015bc7) text_primary_small_cp13_vc_ParamLimits

0x65d2,	// (0x00015bc7) text_primary_small_cp13_vc

0x65ea,	// (0x00015bdf) list_set_graphic_pane_vc_ParamLimits

0x65ea,	// (0x00015bdf) list_set_graphic_pane_vc

0x22cb,	// (0x000118c0) input_focus_pane_cp2_vc

0x22c1,	// (0x000118b6) setting_code_pane_vc_g1

0x23f6,	// (0x000119eb) setting_code_pane_vc_t1

0x65fc,	// (0x00015bf1) set_text_pane_vc_t1_ParamLimits

0x65fc,	// (0x00015bf1) set_text_pane_vc_t1

0x22cb,	// (0x000118c0) input_focus_pane_cp1_vc

0x6617,	// (0x00015c0c) list_set_text_pane_vc

0x22c1,	// (0x000118b6) setting_text_pane_vc_g1

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp2_vc

0x23ed,	// (0x000119e2) setting_slider_graphic_pane_vc_g1

0x6621,	// (0x00015c16) setting_slider_graphic_pane_vc_t1

0x6631,	// (0x00015c26) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001eff5) setting_slider_graphic_pane_vc_t

0x6641,	// (0x00015c36) slider_set_pane_cp_vc

0x6649,	// (0x00015c3e) slider_set_pane_vc_g1

0x6652,	// (0x00015c47) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x0001effa) slider_set_pane_vc_g

0x32ca,	// (0x000128bf) set_opt_bg_pane_g1_copy1

0x32d2,	// (0x000128c7) set_opt_bg_pane_g2_copy1

0x667e,	// (0x00015c73) set_opt_bg_pane_g3_copy1

0x32e2,	// (0x000128d7) set_opt_bg_pane_g4_copy1

0x32ea,	// (0x000128df) set_opt_bg_pane_g5_copy1

0x32f2,	// (0x000128e7) set_opt_bg_pane_g6_copy1

0x6688,	// (0x00015c7d) set_opt_bg_pane_g7_copy1

0x6690,	// (0x00015c85) set_opt_bg_pane_g8_copy1

0x669a,	// (0x00015c8f) set_opt_bg_pane_g9_copy1

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp_vc

0x66a4,	// (0x00015c99) setting_slider_pane_vc_t1

0x66b3,	// (0x00015ca8) setting_slider_pane_vc_t2

0x66c3,	// (0x00015cb8) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x0001f009) setting_slider_pane_vc_t

0x66d3,	// (0x00015cc8) slider_set_pane_vc

0x1220,	// (0x00010815) volume_set_pane_vc_g1

0x1229,	// (0x0001081e) volume_set_pane_vc_g2

0x1232,	// (0x00010827) volume_set_pane_vc_g3

0x123b,	// (0x00010830) volume_set_pane_vc_g4

0x1244,	// (0x00010839) volume_set_pane_vc_g5

0x124d,	// (0x00010842) volume_set_pane_vc_g6

0x1256,	// (0x0001084b) volume_set_pane_vc_g7

0x125f,	// (0x00010854) volume_set_pane_vc_g8

0x1268,	// (0x0001085d) volume_set_pane_vc_g9

0x1271,	// (0x00010866) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x0001f010) volume_set_pane_vc_g

0x66db,	// (0x00015cd0) volume_set_pane_vc

0x66e3,	// (0x00015cd8) button_value_adjust_pane_cp1_vc

0x66ed,	// (0x00015ce2) list_highlight_pane_cp2_vc

0x66f6,	// (0x00015ceb) list_set_pane_vc_ParamLimits

0x66f6,	// (0x00015ceb) list_set_pane_vc

0x6754,	// (0x00015d49) main_pane_set_vc_t1_ParamLimits

0x6754,	// (0x00015d49) main_pane_set_vc_t1

0x6769,	// (0x00015d5e) main_pane_set_vc_t2_ParamLimits

0x6769,	// (0x00015d5e) main_pane_set_vc_t2

0x677b,	// (0x00015d70) main_pane_set_vc_t3_ParamLimits

0x677b,	// (0x00015d70) main_pane_set_vc_t3

0x678f,	// (0x00015d84) main_pane_set_vc_t4_ParamLimits

0x678f,	// (0x00015d84) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0001f025) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0001f025) main_pane_set_vc_t

0x67a3,	// (0x00015d98) setting_code_pane_vc_ParamLimits

0x67a3,	// (0x00015d98) setting_code_pane_vc

0x67b4,	// (0x00015da9) setting_slider_graphic_pane_vc

0x67b4,	// (0x00015da9) setting_slider_pane_vc

0x67b4,	// (0x00015da9) setting_text_pane_vc

0x67b4,	// (0x00015da9) setting_volume_pane_vc

0x67be,	// (0x00015db3) scroll_pane_cp121_vc

0x309a,	// (0x0001268f) set_content_pane_vc

0x6a1a,	// (0x0001600f) button_value_adjust_pane_g1

0x6a23,	// (0x00016018) button_value_adjust_pane_g2

0x0001,

0xfa83,	// (0x0001f078) button_value_adjust_pane_g

0x6a2c,	// (0x00016021) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a2c,	// (0x00016021) form_field_slider_wide_pane_vc_t1

0x6a40,	// (0x00016035) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a40,	// (0x00016035) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa88,	// (0x0001f07d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x0001f07d) form_field_slider_wide_pane_vc_t

0x2640,	// (0x00011c35) input_focus_pane_cp10_vc_ParamLimits

0x2640,	// (0x00011c35) input_focus_pane_cp10_vc

0x6a6e,	// (0x00016063) slider_cont_pane_cp1_vc_ParamLimits

0x6a6e,	// (0x00016063) slider_cont_pane_cp1_vc

0x6a80,	// (0x00016075) slider_form_pane_g1_cp2

0x6652,	// (0x00015c47) slider_form_pane_g2_cp2

0x6aad,	// (0x000160a2) form_field_slider_pane_vc_t3

0x6abb,	// (0x000160b0) form_field_slider_pane_vc_t4

0x6ac9,	// (0x000160be) slider_form_pane_vc_ParamLimits

0x6ac9,	// (0x000160be) slider_form_pane_vc

0x6ad6,	// (0x000160cb) form_field_slider_pane_vc_t1_ParamLimits

0x6ad6,	// (0x000160cb) form_field_slider_pane_vc_t1

0x6a40,	// (0x00016035) form_field_slider_pane_vc_t2_ParamLimits

0x6a40,	// (0x00016035) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x0001f08f) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x0001f08f) form_field_slider_pane_vc_t

0x2640,	// (0x00011c35) input_focus_pane_cp9_vc_ParamLimits

0x2640,	// (0x00011c35) input_focus_pane_cp9_vc

0x6af2,	// (0x000160e7) slider_cont_pane_vc_ParamLimits

0x6af2,	// (0x000160e7) slider_cont_pane_vc

0x6b06,	// (0x000160fb) list_form_graphic_pane_cp_vc_ParamLimits

0x6b06,	// (0x000160fb) list_form_graphic_pane_cp_vc

0x4a19,	// (0x0001400e) form_field_popup_wide_pane_vc_g1

0x6b1b,	// (0x00016110) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b1b,	// (0x00016110) form_field_popup_wide_pane_vc_t1

0x3192,	// (0x00012787) input_focus_pane_cp8_vc_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_cp8_vc

0x6b60,	// (0x00016155) list_form_wide_pane_vc_ParamLimits

0x6b60,	// (0x00016155) list_form_wide_pane_vc

0x6b6c,	// (0x00016161) list_form_graphic_pane_vc_g1

0x6b74,	// (0x00016169) list_form_graphic_pane_vc_t1_ParamLimits

0x6b74,	// (0x00016169) list_form_graphic_pane_vc_t1

0x23ab,	// (0x000119a0) list_highlight_pane_cp5_vc_ParamLimits

0x23ab,	// (0x000119a0) list_highlight_pane_cp5_vc

0x6b90,	// (0x00016185) list_form_graphic_pane_vc_ParamLimits

0x6b90,	// (0x00016185) list_form_graphic_pane_vc

0x4a19,	// (0x0001400e) form_field_popup_pane_vc_g1

0x6ba6,	// (0x0001619b) form_field_popup_pane_vc_t1_ParamLimits

0x6ba6,	// (0x0001619b) form_field_popup_pane_vc_t1

0x3192,	// (0x00012787) input_focus_pane_cp7_vc_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_cp7_vc

0x6bbd,	// (0x000161b2) list_form_pane_vc_ParamLimits

0x6bbd,	// (0x000161b2) list_form_pane_vc

0x6bc9,	// (0x000161be) data_form_pane_vc_t1_ParamLimits

0x6bc9,	// (0x000161be) data_form_pane_vc_t1

0x32ca,	// (0x000128bf) input_focus_pane_vc_g1

0x32d2,	// (0x000128c7) input_focus_pane_vc_g2

0x32da,	// (0x000128cf) input_focus_pane_vc_g3

0x32e2,	// (0x000128d7) input_focus_pane_vc_g4

0x32ea,	// (0x000128df) input_focus_pane_vc_g5

0x32f2,	// (0x000128e7) input_focus_pane_vc_g6

0x32fa,	// (0x000128ef) input_focus_pane_vc_g7

0x3302,	// (0x000128f7) input_focus_pane_vc_g8

0x330a,	// (0x000128ff) input_focus_pane_vc_g9

0x22c1,	// (0x000118b6) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001ec82) input_focus_pane_vc_g

0x4a0d,	// (0x00014002) data_form_pane_vc_ParamLimits

0x4a0d,	// (0x00014002) data_form_pane_vc

0x4a19,	// (0x0001400e) form_field_data_pane_vc_g1

0x6be4,	// (0x000161d9) form_field_data_pane_vc_t1_ParamLimits

0x6be4,	// (0x000161d9) form_field_data_pane_vc_t1

0x3192,	// (0x00012787) input_focus_pane_vc_ParamLimits

0x3192,	// (0x00012787) input_focus_pane_vc

0x6bfe,	// (0x000161f3) button_value_adjust_pane_cp3_vc

0x6c06,	// (0x000161fb) button_value_adjust_pane_cp5_vc

0x6c0e,	// (0x00016203) form_field_data_pane_vc_ParamLimits

0x6c0e,	// (0x00016203) form_field_data_pane_vc

0x6c25,	// (0x0001621a) form_field_data_pane_vc_cp2

0x6c2d,	// (0x00016222) form_field_data_wide_pane_vc_ParamLimits

0x6c2d,	// (0x00016222) form_field_data_wide_pane_vc

0x6c43,	// (0x00016238) form_field_data_wide_pane_vc_cp2

0x6c4b,	// (0x00016240) form_field_popup_pane_vc_ParamLimits

0x6c4b,	// (0x00016240) form_field_popup_pane_vc

0x6c62,	// (0x00016257) form_field_popup_wide_pane_vc_ParamLimits

0x6c62,	// (0x00016257) form_field_popup_wide_pane_vc

0x6c78,	// (0x0001626d) form_field_slider_pane_vc_ParamLimits

0x6c78,	// (0x0001626d) form_field_slider_pane_vc

0x6c8b,	// (0x00016280) form_field_slider_wide_pane_vc_ParamLimits

0x6c8b,	// (0x00016280) form_field_slider_wide_pane_vc

0xdcfe,	// (0x0001d2f3) grid_touch_1_pane_ParamLimits

0xdcfe,	// (0x0001d2f3) grid_touch_1_pane

0xdd12,	// (0x0001d307) grid_touch_2_pane_ParamLimits

0xdd12,	// (0x0001d307) grid_touch_2_pane

0x6d60,	// (0x00016355) touch_pane_g1_ParamLimits

0x6d60,	// (0x00016355) touch_pane_g1

0x6cc2,	// (0x000162b7) cell_app_pane_cp_wide_ParamLimits

0x6cc2,	// (0x000162b7) cell_app_pane_cp_wide

0x6cd3,	// (0x000162c8) grid_popup_fast_wide_pane_ParamLimits

0x6cd3,	// (0x000162c8) grid_popup_fast_wide_pane

0x6ce7,	// (0x000162dc) scroll_pane_cp19_ParamLimits

0x6ce7,	// (0x000162dc) scroll_pane_cp19

0x22cb,	// (0x000118c0) bg_popup_window_pane_cp20

0x6cfb,	// (0x000162f0) listscroll_popup_fast_wide_pane

0x34de,	// (0x00012ad3) grid_indicator_nsta_pane

0x6d03,	// (0x000162f8) clock_nsta_pane_g1

0x6d0c,	// (0x00016301) clock_nsta_pane_t1

0xdd3c,	// (0x0001d331) cell_indicator_nsta_pane_ParamLimits

0xdd3c,	// (0x0001d331) cell_indicator_nsta_pane

0x6d60,	// (0x00016355) cell_indicator_nsta_pane_g1

0xdd55,	// (0x0001d34a) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0001f0a0) cell_indicator_nsta_pane_g

0x6d84,	// (0x00016379) clock_nsta_pane_cp

0x6d8c,	// (0x00016381) indicator_nsta_pane_cp

0x6d95,	// (0x0001638a) nsta_clock_indic_pane_g1

0x248e,	// (0x00011a83) grid_indicator_pane

0x38ac,	// (0x00012ea1) scroll_pane_cp29

0x0789,	// (0x0000fd7e) indicator_nsta_pane_cp2_ParamLimits

0x0789,	// (0x0000fd7e) indicator_nsta_pane_cp2

0x23ab,	// (0x000119a0) main_apps_wheel_pane

0x4c6c,	// (0x00014261) form_midp_field_text_pane_ParamLimits

0x4db7,	// (0x000143ac) scroll_bar_cp050_ParamLimits

0x6dfe,	// (0x000163f3) cell_indicator_pane_ParamLimits

0x6dfe,	// (0x000163f3) cell_indicator_pane

0x6e15,	// (0x0001640a) cell_indicator_pane_g1

0xdd6a,	// (0x0001d35f) grid_wheel_folder_pane_ParamLimits

0xdd6a,	// (0x0001d35f) grid_wheel_folder_pane

0xdd78,	// (0x0001d36d) list_wheel_apps_pane_ParamLimits

0xdd78,	// (0x0001d36d) list_wheel_apps_pane

0xdd86,	// (0x0001d37b) main_apps_wheel_pane_g1_ParamLimits

0xdd86,	// (0x0001d37b) main_apps_wheel_pane_g1

0xdd92,	// (0x0001d387) main_apps_wheel_pane_g2_ParamLimits

0xdd92,	// (0x0001d387) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0001f0bc) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0001f0bc) main_apps_wheel_pane_g

0xdda0,	// (0x0001d395) main_apps_wheel_pane_t1_ParamLimits

0xdda0,	// (0x0001d395) main_apps_wheel_pane_t1

0xddb4,	// (0x0001d3a9) list_wheel_apps_pane_g1

0xddbc,	// (0x0001d3b1) list_wheel_apps_pane_g2

0xddc4,	// (0x0001d3b9) list_wheel_apps_pane_g3

0xddcc,	// (0x0001d3c1) list_wheel_apps_pane_g4

0xddd6,	// (0x0001d3cb) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0001f0c1) list_wheel_apps_pane_g

0x3e84,	// (0x00013479) navi_icon_text_pane

0xd322,	// (0x0001c917) aid_fill_nsta

0x6ed8,	// (0x000164cd) navi_icon_text_pane_g1

0x6ee4,	// (0x000164d9) navi_icon_text_pane_t1

0xd184,	// (0x0001c779) list_set_graphic_pane_t1_ParamLimits

0xd184,	// (0x0001c779) list_set_graphic_pane_t1

0x5506,	// (0x00014afb) popup_midp_note_alarm_window_t6_ParamLimits

0x5506,	// (0x00014afb) popup_midp_note_alarm_window_t6

0x5518,	// (0x00014b0d) popup_midp_note_alarm_window_t7_ParamLimits

0x5518,	// (0x00014b0d) popup_midp_note_alarm_window_t7

0x552a,	// (0x00014b1f) popup_midp_note_alarm_window_t8_ParamLimits

0x552a,	// (0x00014b1f) popup_midp_note_alarm_window_t8

0x553c,	// (0x00014b31) popup_midp_note_alarm_window_t9_ParamLimits

0x553c,	// (0x00014b31) popup_midp_note_alarm_window_t9

0x554e,	// (0x00014b43) popup_midp_note_alarm_window_t10_ParamLimits

0x554e,	// (0x00014b43) popup_midp_note_alarm_window_t10

0x5560,	// (0x00014b55) popup_midp_note_alarm_window_t11_ParamLimits

0x5560,	// (0x00014b55) popup_midp_note_alarm_window_t11

0x5572,	// (0x00014b67) scroll_pane_cp17_ParamLimits

0x5572,	// (0x00014b67) scroll_pane_cp17

0x1220,	// (0x00010815) volume_small_pane_cp_g1

0x1515,	// (0x00010b0a) volume_small_pane_cp_g2

0x151e,	// (0x00010b13) volume_small_pane_cp_g3

0x1527,	// (0x00010b1c) volume_small_pane_cp_g4

0x1530,	// (0x00010b25) volume_small_pane_cp_g5

0x1539,	// (0x00010b2e) volume_small_pane_cp_g6

0x1542,	// (0x00010b37) volume_small_pane_cp_g7

0x154b,	// (0x00010b40) volume_small_pane_cp_g8

0x1554,	// (0x00010b49) volume_small_pane_cp_g9

0x155d,	// (0x00010b52) volume_small_pane_cp_g10

0x40d3,	// (0x000136c8) midp_ticker_pane_g1_ParamLimits

0x40df,	// (0x000136d4) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001ed4e) midp_ticker_pane_g_ParamLimits

0x40eb,	// (0x000136e0) midp_ticker_pane_t1_ParamLimits

0xd346,	// (0x0001c93b) aid_fill_nsta_2

0x4da3,	// (0x00014398) list_form2_midp_pane

0x5f7e,	// (0x00015573) midp_editing_number_pane_ParamLimits

0x5f8d,	// (0x00015582) midp_ticker_pane_ParamLimits

0x6ef6,	// (0x000164eb) form2_midp_field_pane

0x6f1a,	// (0x0001650f) scroll_pane_cp51

0x6f3a,	// (0x0001652f) form2_midp_button_pane_ParamLimits

0x6f3a,	// (0x0001652f) form2_midp_button_pane

0x6f4c,	// (0x00016541) form2_midp_content_pane_ParamLimits

0x6f4c,	// (0x00016541) form2_midp_content_pane

0x6f66,	// (0x0001655b) form2_midp_field_choice_group_pane

0x6f6e,	// (0x00016563) form2_midp_field_pane_g1

0x6f76,	// (0x0001656b) form2_midp_field_pane_g2

0x6f7e,	// (0x00016573) form2_midp_field_pane_g3

0x6f86,	// (0x0001657b) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0001f0e6) form2_midp_field_pane_g

0x6f8e,	// (0x00016583) form2_midp_gauge_slider_pane

0x6f96,	// (0x0001658b) form2_midp_gauge_wait_pane

0x6f9e,	// (0x00016593) form2_midp_image_pane_ParamLimits

0x6f9e,	// (0x00016593) form2_midp_image_pane

0x6fb9,	// (0x000165ae) form2_midp_label_pane_ParamLimits

0x6fb9,	// (0x000165ae) form2_midp_label_pane

0xde09,	// (0x0001d3fe) form2_midp_label_pane_cp_ParamLimits

0xde09,	// (0x0001d3fe) form2_midp_label_pane_cp

0x6ff3,	// (0x000165e8) form2_midp_string_pane_ParamLimits

0x6ff3,	// (0x000165e8) form2_midp_string_pane

0xde28,	// (0x0001d41d) form2_midp_text_pane_ParamLimits

0xde28,	// (0x0001d41d) form2_midp_text_pane

0x7022,	// (0x00016617) form2_midp_time_pane

0x7032,	// (0x00016627) input_focus_pane_cp51_ParamLimits

0x7032,	// (0x00016627) input_focus_pane_cp51

0x704a,	// (0x0001663f) form2_midp_label_pane_t1_ParamLimits

0x704a,	// (0x0001663f) form2_midp_label_pane_t1

0xde41,	// (0x0001d436) form2_mdip_text_pane_t1_ParamLimits

0xde41,	// (0x0001d436) form2_mdip_text_pane_t1

0x70aa,	// (0x0001669f) form2_midp_time_pane_t1

0x70c5,	// (0x000166ba) form2_midp_gauge_slider_pane_t1

0xde5c,	// (0x0001d451) form2_midp_gauge_slider_pane_t2

0xde6e,	// (0x0001d463) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0001f0ef) form2_midp_gauge_slider_pane_t

0x70fb,	// (0x000166f0) form2_midp_slider_pane

0x7107,	// (0x000166fc) form2_midp_gauge_wait_pane_t1

0x7115,	// (0x0001670a) form2_midp_wait_pane_ParamLimits

0x7115,	// (0x0001670a) form2_midp_wait_pane

0xde80,	// (0x0001d475) list_single_2graphic_pane_cp4_ParamLimits

0xde80,	// (0x0001d475) list_single_2graphic_pane_cp4

0xd75c,	// (0x0001cd51) list_single_midp_graphic_pane_cp_ParamLimits

0xd75c,	// (0x0001cd51) list_single_midp_graphic_pane_cp

0x22cb,	// (0x000118c0) list_highlight_pane_cp20

0x716f,	// (0x00016764) list_single_2graphic_pane_g1_cp4

0x7177,	// (0x0001676c) list_single_2graphic_pane_g2_cp4

0x717f,	// (0x00016774) list_single_2graphic_pane_t1_cp4

0x23ab,	// (0x000119a0) list_highlight_pane_cp21

0x718e,	// (0x00016783) list_single_midp_graphic_pane_g4_cp

0x719d,	// (0x00016792) list_single_midp_graphic_pane_t1_cp

0xde94,	// (0x0001d489) form2_mdip_string_pane_t1_ParamLimits

0xde94,	// (0x0001d489) form2_mdip_string_pane_t1

0x22cb,	// (0x000118c0) bg_wml_button_pane_cp2

0x22c1,	// (0x000118b6) form2_midp_image_pane_g1

0x2e74,	// (0x00012469) list_double_large_graphic_pane_g5_ParamLimits

0x2e74,	// (0x00012469) list_double_large_graphic_pane_g5

0x434c,	// (0x00013941) midp_form_pane_ParamLimits

0x23ab,	// (0x000119a0) main_apps_wheel_pane_ParamLimits

0xbc97,	// (0x0001b28c) popup_preview_window_ParamLimits

0xbc97,	// (0x0001b28c) popup_preview_window

0x101b,	// (0x00010610) popup_touch_info_window_ParamLimits

0x101b,	// (0x00010610) popup_touch_info_window

0x1039,	// (0x0001062e) popup_touch_menu_window_ParamLimits

0x1039,	// (0x0001062e) popup_touch_menu_window

0x22b7,	// (0x000118ac) bg_popup_sub_pane_cp6

0x72ab,	// (0x000168a0) list_touch_menu_pane

0x72b3,	// (0x000168a8) list_single_touch_menu_pane_ParamLimits

0x72b3,	// (0x000168a8) list_single_touch_menu_pane

0x72c9,	// (0x000168be) list_single_touch_menu_pane_t1

0x23ab,	// (0x000119a0) bg_popup_sub_pane_cp7_ParamLimits

0x23ab,	// (0x000119a0) bg_popup_sub_pane_cp7

0x72d7,	// (0x000168cc) heading_sub_pane

0x72df,	// (0x000168d4) list_touch_info_pane_ParamLimits

0x72df,	// (0x000168d4) list_touch_info_pane

0x72ee,	// (0x000168e3) list_single_touch_info_pane_ParamLimits

0x72ee,	// (0x000168e3) list_single_touch_info_pane

0x7300,	// (0x000168f5) list_single_touch_info_pane_t1

0x730e,	// (0x00016903) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0001f0fd) list_single_touch_info_pane_t

0x4004,	// (0x000135f9) bg_popup_heading_pane_cp

0x731c,	// (0x00016911) heading_sub_pane_t1

0x49a7,	// (0x00013f9c) bg_popup_preview_window_pane_cp_ParamLimits

0x49a7,	// (0x00013f9c) bg_popup_preview_window_pane_cp

0x72d7,	// (0x000168cc) heading_preview_pane

0x72df,	// (0x000168d4) list_preview_pane_ParamLimits

0x72df,	// (0x000168d4) list_preview_pane

0x732a,	// (0x0001691f) popup_preview_window_g1

0x72ee,	// (0x000168e3) list_single_preview_pane_ParamLimits

0x72ee,	// (0x000168e3) list_single_preview_pane

0x7332,	// (0x00016927) list_single_preview_pane_g1

0x733a,	// (0x0001692f) list_single_preview_pane_t1

0x7300,	// (0x000168f5) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0001f102) list_single_preview_pane_t

0x7348,	// (0x0001693d) bg_popup_heading_pane_cp2_ParamLimits

0x7348,	// (0x0001693d) bg_popup_heading_pane_cp2

0x735e,	// (0x00016953) heading_preview_pane_g1

0x7366,	// (0x0001695b) heading_preview_pane_t1_ParamLimits

0x7366,	// (0x0001695b) heading_preview_pane_t1

0x24b1,	// (0x00011aa6) soft_indicator_pane_t1_ParamLimits

0x2ba4,	// (0x00012199) scroll_pane_ParamLimits

0x37a5,	// (0x00012d9a) scroll_sc2_left_pane

0x37ae,	// (0x00012da3) scroll_sc2_right_pane

0x37cd,	// (0x00012dc2) scroll_bg_pane_g1_ParamLimits

0x37e2,	// (0x00012dd7) scroll_bg_pane_g2_ParamLimits

0x37fa,	// (0x00012def) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001ecd9) scroll_bg_pane_g_ParamLimits

0x37cd,	// (0x00012dc2) scroll_handle_pane_g1_ParamLimits

0x381c,	// (0x00012e11) scroll_handle_pane_g2_ParamLimits

0x37fa,	// (0x00012def) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001ece0) scroll_handle_pane_g_ParamLimits

0x0ae3,	// (0x000100d8) popup_choice_list_window_ParamLimits

0x0ae3,	// (0x000100d8) popup_choice_list_window

0x4793,	// (0x00013d88) choice_list_pane

0x484f,	// (0x00013e44) cell_toolbar_pane_t1

0x4877,	// (0x00013e6c) toolbar_button_pane_ParamLimits

0x5a2c,	// (0x00015021) ai_gene_pane_1_t2_ParamLimits

0x5a2c,	// (0x00015021) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001ef03) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001ef03) ai_gene_pane_1_t

0x7383,	// (0x00016978) scroll_sc2_left_pane_g1

0x7383,	// (0x00016978) scroll_sc2_right_pane_g1

0x434c,	// (0x00013941) bg_popup_sub_pane_cp10

0x738d,	// (0x00016982) list_choice_list_pane

0x73a6,	// (0x0001699b) list_single_choice_list_pane_ParamLimits

0x73a6,	// (0x0001699b) list_single_choice_list_pane

0x73b9,	// (0x000169ae) list_single_choice_list_pane_g1

0x34af,	// (0x00012aa4) list_single_choice_list_pane_t1_ParamLimits

0x34af,	// (0x00012aa4) list_single_choice_list_pane_t1

0x73c1,	// (0x000169b6) choice_list_pane_g1

0x73c9,	// (0x000169be) choice_list_pane_t1

0x22b7,	// (0x000118ac) input_focus_pane_cp11

0x3686,	// (0x00012c7b) title_pane_stacon_g2_ParamLimits

0x3686,	// (0x00012c7b) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001ecbf) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001ecbf) title_pane_stacon_g

0x4004,	// (0x000135f9) cursor_press_pane

0xb94a,	// (0x0001af3f) popup_fep_hwr_window_ParamLimits

0xb94a,	// (0x0001af3f) popup_fep_hwr_window

0x0c09,	// (0x000101fe) popup_fep_vkb_window_ParamLimits

0x0c09,	// (0x000101fe) popup_fep_vkb_window

0x73d7,	// (0x000169cc) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0001f12b) fep_vkb_side_pane_g_ParamLimits

0x159f,	// (0x00010b94) fep_hwr_candidate_pane_ParamLimits

0x159f,	// (0x00010b94) fep_hwr_candidate_pane

0x15c9,	// (0x00010bbe) fep_hwr_side_pane_ParamLimits

0x15c9,	// (0x00010bbe) fep_hwr_side_pane

0x15e9,	// (0x00010bde) fep_hwr_top_pane_ParamLimits

0x15e9,	// (0x00010bde) fep_hwr_top_pane

0x1601,	// (0x00010bf6) fep_hwr_write_pane_ParamLimits

0x1601,	// (0x00010bf6) fep_hwr_write_pane

0xfb36,	// (0x0001f12b) fep_vkb_side_pane_g

0x73df,	// (0x000169d4) fep_hwr_top_pane_g1

0x73f1,	// (0x000169e6) fep_hwr_top_pane_g2

0x163b,	// (0x00010c30) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0001f107) fep_hwr_top_pane_g

0x1650,	// (0x00010c45) fep_hwr_top_text_pane

0x3973,	// (0x00012f68) fep_hwr_top_text_pane_g1

0x7427,	// (0x00016a1c) fep_hwr_top_text_pane_t1

0x1746,	// (0x00010d3b) fep_hwr_candidate_pane_g1

0x767a,	// (0x00016c6f) fep_vkb_keypad_pane_g3_ParamLimits

0x767a,	// (0x00016c6f) fep_vkb_keypad_pane_g3

0x76a2,	// (0x00016c97) fep_vkb_keypad_pane_g4_ParamLimits

0x76a2,	// (0x00016c97) fep_vkb_keypad_pane_g4

0x7711,	// (0x00016d06) fep_vkb_bottom_pane_g2_ParamLimits

0x7711,	// (0x00016d06) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0001f132) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0001f132) fep_vkb_bottom_pane_g

0x7383,	// (0x00016978) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0001f13c) cell_vkb_side_pane_g

0x779c,	// (0x00016d91) cell_vkb_side_pane_t1

0x77aa,	// (0x00016d9f) cell_vkb_side_pane_t1_copy1

0x7383,	// (0x00016978) bg_fep_vkb_candidate_pane_g2

0x78d6,	// (0x00016ecb) cell_vkb_candidate_pane_ParamLimits

0x7435,	// (0x00016a2a) aid_size_cell_vkb_ParamLimits

0x7435,	// (0x00016a2a) aid_size_cell_vkb

0x78d6,	// (0x00016ecb) cell_vkb_candidate_pane

0x176d,	// (0x00010d62) bg_popup_fep_shadow_pane_g1

0xdf18,	// (0x0001d50d) fep_vkb_bottom_pane_ParamLimits

0xdf18,	// (0x0001d50d) fep_vkb_bottom_pane

0x74f9,	// (0x00016aee) fep_vkb_candidate_pane_ParamLimits

0x74f9,	// (0x00016aee) fep_vkb_candidate_pane

0xdf3d,	// (0x0001d532) fep_vkb_keypad_pane_ParamLimits

0xdf3d,	// (0x0001d532) fep_vkb_keypad_pane

0xdf79,	// (0x0001d56e) fep_vkb_side_pane_ParamLimits

0xdf79,	// (0x0001d56e) fep_vkb_side_pane

0xdfb5,	// (0x0001d5aa) fep_vkb_top_pane_ParamLimits

0xdfb5,	// (0x0001d5aa) fep_vkb_top_pane

0x75d3,	// (0x00016bc8) fep_vkb_top_pane_g1_ParamLimits

0x75d3,	// (0x00016bc8) fep_vkb_top_pane_g1

0x75e2,	// (0x00016bd7) fep_vkb_top_pane_g2_ParamLimits

0x75e2,	// (0x00016bd7) fep_vkb_top_pane_g2

0x75f1,	// (0x00016be6) fep_vkb_top_pane_g3_ParamLimits

0x75f1,	// (0x00016be6) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0001f122) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0001f122) fep_vkb_top_pane_g

0x760f,	// (0x00016c04) fep_vkb_top_text_pane_ParamLimits

0x760f,	// (0x00016c04) fep_vkb_top_text_pane

0xdff1,	// (0x0001d5e6) fep_vkb_side_pane_g1_ParamLimits

0xdff1,	// (0x0001d5e6) fep_vkb_side_pane_g1

0x7669,	// (0x00016c5e) grid_vkb_side_pane_ParamLimits

0x7669,	// (0x00016c5e) grid_vkb_side_pane

0x1775,	// (0x00010d6a) bg_popup_fep_shadow_pane_g2

0x177e,	// (0x00010d73) bg_popup_fep_shadow_pane_g3

0x1786,	// (0x00010d7b) bg_popup_fep_shadow_pane_g4

0x178f,	// (0x00010d84) bg_popup_fep_shadow_pane_g5

0x1799,	// (0x00010d8e) bg_popup_fep_shadow_pane_g6

0x17a1,	// (0x00010d96) bg_popup_fep_shadow_pane_g7

0x32e2,	// (0x000128d7) bg_popup_fep_shadow_pane_g8

0x76c0,	// (0x00016cb5) grid_vkb_keypad_number_pane_ParamLimits

0x76c0,	// (0x00016cb5) grid_vkb_keypad_number_pane

0x76d0,	// (0x00016cc5) grid_vkb_keypad_pane_ParamLimits

0x76d0,	// (0x00016cc5) grid_vkb_keypad_pane

0x76f6,	// (0x00016ceb) fep_vkb_bottom_pane_g1_ParamLimits

0x76f6,	// (0x00016ceb) fep_vkb_bottom_pane_g1

0x771f,	// (0x00016d14) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x771f,	// (0x00016d14) grid_vkb_keypad_bottom_left_pane

0x7734,	// (0x00016d29) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7734,	// (0x00016d29) grid_vkb_keypad_bottom_right_pane

0x7749,	// (0x00016d3e) fep_vkb_top_text_pane_g1

0xe038,	// (0x0001d62d) fep_vkb_top_text_pane_t1

0xe04a,	// (0x0001d63f) cell_vkb_side_pane_ParamLimits

0xe04a,	// (0x0001d63f) cell_vkb_side_pane

0x7383,	// (0x00016978) cell_vkb_side_pane_g1

0x77b8,	// (0x00016dad) cell_vkb_keypad_pane_ParamLimits

0x77b8,	// (0x00016dad) cell_vkb_keypad_pane

0x782d,	// (0x00016e22) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0001f14f) bg_popup_fep_shadow_pane_g

0x17b3,	// (0x00010da8) cell_hwr_side_pane_g1

0x17b3,	// (0x00010da8) cell_hwr_side_pane_g2

0x7837,	// (0x00016e2c) cell_vkb_keypad_pane_t1

0xe060,	// (0x0001d655) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe060,	// (0x0001d655) cell_vkb_keypad_bottom_left_pane

0xe075,	// (0x0001d66a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe075,	// (0x0001d66a) cell_vkb_keypad_bottom_right_pane

0x7383,	// (0x00016978) cell_vkb_keypad_bottom_left_pane_g1

0x7383,	// (0x00016978) cell_vkb_keypad_bottom_right_pane_g1

0x789b,	// (0x00016e90) cell_vkb_keypad_number_pane_ParamLimits

0x789b,	// (0x00016e90) cell_vkb_keypad_number_pane

0x78ba,	// (0x00016eaf) cell_vkb_keypad_number_pane_g1

0x78c4,	// (0x00016eb9) cell_vkb_keypad_number_pane_g2

0x78cd,	// (0x00016ec2) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0001f141) cell_vkb_keypad_number_pane_g

0x7837,	// (0x00016e2c) cell_vkb_keypad_number_pane_t1

0x78f1,	// (0x00016ee6) fep_vkb_candidate_pane_g1

0x0001,

0xfb6d,	// (0x0001f162) cell_hwr_side_pane_g

0x790a,	// (0x00016eff) cell_hwr_side_pane_t1

0x17bd,	// (0x00010db2) cell_hwr_side_pane_t1_copy1

0x17cb,	// (0x00010dc0) cell_hwr_candidate_pane_g1

0x17fa,	// (0x00010def) cell_hwr_candidate_pane_t1

0x7383,	// (0x00016978) cell_vkb_candidate_pane_g2

0x794e,	// (0x00016f43) cell_vkb_candidate_pane_t1

0x1566,	// (0x00010b5b) bg_popup_fep_shadow_pane_ParamLimits

0x1566,	// (0x00010b5b) bg_popup_fep_shadow_pane

0x161b,	// (0x00010c10) bg_fep_hwr_top_pane_g4

0x7403,	// (0x000169f8) bg_hwr_side_pane_g1_ParamLimits

0x7403,	// (0x000169f8) bg_hwr_side_pane_g1

0xc11c,	// (0x0001b711) cell_hwr_side_pane_ParamLimits

0xc11c,	// (0x0001b711) cell_hwr_side_pane

0x16c7,	// (0x00010cbc) fep_hwr_write_pane_g1_ParamLimits

0x16c7,	// (0x00010cbc) fep_hwr_write_pane_g1

0x16d4,	// (0x00010cc9) fep_hwr_write_pane_g2_ParamLimits

0x16d4,	// (0x00010cc9) fep_hwr_write_pane_g2

0x16e1,	// (0x00010cd6) fep_hwr_write_pane_g3_ParamLimits

0x16e1,	// (0x00010cd6) fep_hwr_write_pane_g3

0xc13c,	// (0x0001b731) fep_hwr_write_pane_g4_ParamLimits

0xc13c,	// (0x0001b731) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0001f10e) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0001f10e) fep_hwr_write_pane_g

0x161b,	// (0x00010c10) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x161b,	// (0x00010c10) bg_fep_hwr_candidate_pane_g2

0x1704,	// (0x00010cf9) cell_hwr_candidate_pane_ParamLimits

0x1704,	// (0x00010cf9) cell_hwr_candidate_pane

0x1746,	// (0x00010d3b) fep_hwr_candidate_pane_g1_ParamLimits

0x7463,	// (0x00016a58) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7463,	// (0x00016a58) bg_popup_fep_shadow_pane_cp2

0x7601,	// (0x00016bf6) fep_vkb_top_pane_g4_ParamLimits

0x7601,	// (0x00016bf6) fep_vkb_top_pane_g4

0x7647,	// (0x00016c3c) fep_vkb_side_pane_g2_ParamLimits

0x7647,	// (0x00016c3c) fep_vkb_side_pane_g2

0xcca0,	// (0x0001c295) list_setting_pane_t4_ParamLimits

0xcca0,	// (0x0001c295) list_setting_pane_t4

0xcd1a,	// (0x0001c30f) list_setting_number_pane_t5_ParamLimits

0xcd1a,	// (0x0001c30f) list_setting_number_pane_t5

0xd00b,	// (0x0001c600) list_double_heading_pane_cp2_ParamLimits

0xd00b,	// (0x0001c600) list_double_heading_pane_cp2

0x31b8,	// (0x000127ad) list_double_heading_pane_g1_cp2_ParamLimits

0x31b8,	// (0x000127ad) list_double_heading_pane_g1_cp2

0x31c4,	// (0x000127b9) list_double_heading_pane_g2_cp2_ParamLimits

0x31c4,	// (0x000127b9) list_double_heading_pane_g2_cp2

0x795c,	// (0x00016f51) list_double_heading_pane_t1_cp2_ParamLimits

0x795c,	// (0x00016f51) list_double_heading_pane_t1_cp2

0x7972,	// (0x00016f67) list_double_heading_pane_t2_cp2_ParamLimits

0x7972,	// (0x00016f67) list_double_heading_pane_t2_cp2

0x229f,	// (0x00011894) aid_value_unit2

0x0321,	// (0x0000f916) popup_preview_fixed_window

0x264e,	// (0x00011c43) bg_popup_preview_window_pane_cp02

0x7984,	// (0x00016f79) list_preview_fixed_pane

0x79ca,	// (0x00016fbf) list_empty_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_empty_pane_fp

0x79ca,	// (0x00016fbf) list_single_cale_day_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_cale_day_pane_fp

0x79ca,	// (0x00016fbf) list_single_graphic_heading_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_graphic_heading_pane_fp

0x79ca,	// (0x00016fbf) list_single_graphic_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_graphic_pane_fp

0x79ca,	// (0x00016fbf) list_single_heading_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_heading_pane_fp

0x79ca,	// (0x00016fbf) list_single_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_pane_fp

0x7a21,	// (0x00017016) list_single_pane_fp_g1_ParamLimits

0x7a21,	// (0x00017016) list_single_pane_fp_g1

0x31b8,	// (0x000127ad) list_single_pane_fp_g2_ParamLimits

0x31b8,	// (0x000127ad) list_single_pane_fp_g2

0x31c4,	// (0x000127b9) list_single_pane_fp_g3_ParamLimits

0x31c4,	// (0x000127b9) list_single_pane_fp_g3

0x7a2d,	// (0x00017022) list_single_pane_fp_g4_ParamLimits

0x7a2d,	// (0x00017022) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0001f175) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0001f175) list_single_pane_fp_g

0x7a39,	// (0x0001702e) list_single_pane_fp_t1_ParamLimits

0x7a39,	// (0x0001702e) list_single_pane_fp_t1

0x7a50,	// (0x00017045) list_single_graphic_pane_fp_g1_ParamLimits

0x7a50,	// (0x00017045) list_single_graphic_pane_fp_g1

0x7a21,	// (0x00017016) list_single_graphic_pane_fp_g2_ParamLimits

0x7a21,	// (0x00017016) list_single_graphic_pane_fp_g2

0x31b8,	// (0x000127ad) list_single_graphic_pane_fp_g3_ParamLimits

0x31b8,	// (0x000127ad) list_single_graphic_pane_fp_g3

0x31c4,	// (0x000127b9) list_single_graphic_pane_fp_g4_ParamLimits

0x31c4,	// (0x000127b9) list_single_graphic_pane_fp_g4

0x7a2d,	// (0x00017022) list_single_graphic_pane_fp_g5_ParamLimits

0x7a2d,	// (0x00017022) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0001f17e) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0001f17e) list_single_graphic_pane_fp_g

0x7a5c,	// (0x00017051) list_single_graphic_pane_fp_t1_ParamLimits

0x7a5c,	// (0x00017051) list_single_graphic_pane_fp_t1

0x7a50,	// (0x00017045) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7a50,	// (0x00017045) list_single_graphic_heading_pane_fp_g1

0x7a21,	// (0x00017016) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a21,	// (0x00017016) list_single_graphic_heading_pane_fp_g2

0x31b8,	// (0x000127ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x31b8,	// (0x000127ad) list_single_graphic_heading_pane_fp_g3

0x31c4,	// (0x000127b9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x31c4,	// (0x000127b9) list_single_graphic_heading_pane_fp_g4

0x7a2d,	// (0x00017022) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a2d,	// (0x00017022) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0001f17e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0001f17e) list_single_graphic_heading_pane_fp_g

0x7a72,	// (0x00017067) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7a72,	// (0x00017067) list_single_graphic_heading_pane_fp_t1

0x7a88,	// (0x0001707d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7a88,	// (0x0001707d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0001f189) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0001f189) list_single_graphic_heading_pane_fp_t

0x7a9a,	// (0x0001708f) list_single_cale_day_pane_fp_g1_ParamLimits

0x7a9a,	// (0x0001708f) list_single_cale_day_pane_fp_g1

0x7ad2,	// (0x000170c7) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ad2,	// (0x000170c7) list_single_cale_day_pane_fp_g2

0x7ade,	// (0x000170d3) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ade,	// (0x000170d3) list_single_cale_day_pane_fp_g3

0x7b06,	// (0x000170fb) list_single_cale_day_pane_fp_g4_ParamLimits

0x7b06,	// (0x000170fb) list_single_cale_day_pane_fp_g4

0x7b2a,	// (0x0001711f) list_single_cale_day_pane_fp_g5_ParamLimits

0x7b2a,	// (0x0001711f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0001f18e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0001f18e) list_single_cale_day_pane_fp_g

0x7b4e,	// (0x00017143) list_single_cale_day_pane_fp_t1_ParamLimits

0x7b4e,	// (0x00017143) list_single_cale_day_pane_fp_t1

0x7b74,	// (0x00017169) list_single_cale_day_pane_fp_t2_ParamLimits

0x7b74,	// (0x00017169) list_single_cale_day_pane_fp_t2

0x7b8d,	// (0x00017182) list_single_cale_day_pane_fp_t3_ParamLimits

0x7b8d,	// (0x00017182) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0001f199) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0001f199) list_single_cale_day_pane_fp_t

0x7a21,	// (0x00017016) list_empty_pane_fp_g1_ParamLimits

0x7a21,	// (0x00017016) list_empty_pane_fp_g1

0x7ba6,	// (0x0001719b) list_empty_pane_fp_t1

0x7bb4,	// (0x000171a9) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0001f1a0) list_empty_pane_fp_t

0x7a21,	// (0x00017016) list_single_heading_pane_fp_g1_ParamLimits

0x7a21,	// (0x00017016) list_single_heading_pane_fp_g1

0x31b8,	// (0x000127ad) list_single_heading_pane_fp_g2_ParamLimits

0x31b8,	// (0x000127ad) list_single_heading_pane_fp_g2

0x31c4,	// (0x000127b9) list_single_heading_pane_fp_g3_ParamLimits

0x31c4,	// (0x000127b9) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0001f1a5) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0001f1a5) list_single_heading_pane_fp_g

0x7bc2,	// (0x000171b7) list_single_heading_pane_fp_t1_ParamLimits

0x7bc2,	// (0x000171b7) list_single_heading_pane_fp_t1

0x7bd4,	// (0x000171c9) list_single_heading_pane_fp_t2_ParamLimits

0x7bd4,	// (0x000171c9) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0001f1ac) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0001f1ac) list_single_heading_pane_fp_t

0x351d,	// (0x00012b12) aid_size_cell_fast

0x25be,	// (0x00011bb3) soft_indicator_pane_cp1_t1

0x355a,	// (0x00012b4f) cell_app_pane_cp2_ParamLimits

0x355a,	// (0x00012b4f) cell_app_pane_cp2

0x1588,	// (0x00010b7d) fep_hwr_candidate_drop_down_list_pane

0x1760,	// (0x00010d55) fep_hwr_candidate_pane_g3_ParamLimits

0x1760,	// (0x00010d55) fep_hwr_candidate_pane_g3

0xecdd,	// (0x0001e2d2) fep_hwr_candidate_pane_g4_ParamLimits

0xecdd,	// (0x0001e2d2) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001f11b) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0001f11b) fep_hwr_candidate_pane_g

0x74e8,	// (0x00016add) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74e8,	// (0x00016add) fep_vkb_candidate_drop_down_list_pane

0x78f9,	// (0x00016eee) fep_vkb_candidate_pane_g3

0x7901,	// (0x00016ef6) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0001f148) fep_vkb_candidate_pane_g

0x17cb,	// (0x00010dc0) cell_hwr_candidate_pane_g1_ParamLimits

0x17d9,	// (0x00010dce) cell_hwr_candidate_pane_g3_ParamLimits

0x17d9,	// (0x00010dce) cell_hwr_candidate_pane_g3

0x9a0a,	// (0x00018fff) cell_hwr_candidate_pane_g4_ParamLimits

0x9a0a,	// (0x00018fff) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0001f167) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0001f167) cell_hwr_candidate_pane_g

0x7918,	// (0x00016f0d) cell_vkb_candidate_pane_g3_ParamLimits

0x7918,	// (0x00016f0d) cell_vkb_candidate_pane_g3

0x7933,	// (0x00016f28) cell_vkb_candidate_pane_g4_ParamLimits

0x7933,	// (0x00016f28) cell_vkb_candidate_pane_g4

0x7bea,	// (0x000171df) cell_app_pane_cp2_g1_ParamLimits

0x7bea,	// (0x000171df) cell_app_pane_cp2_g1

0x7c08,	// (0x000171fd) cell_app_pane_cp2_g2_ParamLimits

0x7c08,	// (0x000171fd) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0001f1b1) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0001f1b1) cell_app_pane_cp2_g

0x7c14,	// (0x00017209) cell_app_pane_cp2_t1_ParamLimits

0x7c14,	// (0x00017209) cell_app_pane_cp2_t1

0x3192,	// (0x00012787) grid_highlight_pane_cp1_ParamLimits

0x3192,	// (0x00012787) grid_highlight_pane_cp1

0x1818,	// (0x00010e0d) cell_hwr_candidate_pane_cp1_ParamLimits

0x1818,	// (0x00010e0d) cell_hwr_candidate_pane_cp1

0x17cb,	// (0x00010dc0) fep_hwr_candidate_drop_down_list_pane_g1

0x1837,	// (0x00010e2c) fep_hwr_candidate_drop_down_list_pane_g2

0x1844,	// (0x00010e39) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0001f1b6) fep_hwr_candidate_drop_down_list_pane_g

0x1851,	// (0x00010e46) fep_hwr_candidate_drop_down_list_scroll_pane

0x185a,	// (0x00010e4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x185a,	// (0x00010e4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1867,	// (0x00010e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1867,	// (0x00010e5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1874,	// (0x00010e69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1874,	// (0x00010e69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1881,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1881,	// (0x00010e76) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x189c,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x189c,	// (0x00010e91) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x18b7,	// (0x00010eac) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x18b7,	// (0x00010eac) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x18d2,	// (0x00010ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x18d2,	// (0x00010ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x18ed,	// (0x00010ee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x18ed,	// (0x00010ee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0001f1bd) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0001f1bd) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7c26,	// (0x0001721b) cell_vkb_candidate_pane_cp1_ParamLimits

0x7c26,	// (0x0001721b) cell_vkb_candidate_pane_cp1

0x7601,	// (0x00016bf6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7601,	// (0x00016bf6) fep_vkb_candidate_drop_down_list_pane_g1

0x7c46,	// (0x0001723b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7c46,	// (0x0001723b) fep_vkb_candidate_drop_down_list_pane_g2

0x7c53,	// (0x00017248) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7c53,	// (0x00017248) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001f1ce) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0001f1ce) fep_vkb_candidate_drop_down_list_pane_g

0x7c60,	// (0x00017255) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7c60,	// (0x00017255) fep_vkb_candidate_drop_down_list_scroll_pane

0x7c6d,	// (0x00017262) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7c6d,	// (0x00017262) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7c7a,	// (0x0001726f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7c7a,	// (0x0001726f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7c86,	// (0x0001727b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7c86,	// (0x0001727b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79df,	// (0x00016fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79df,	// (0x00016fd4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7a00,	// (0x00016ff5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7a00,	// (0x00016ff5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7c92,	// (0x00017287) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7c92,	// (0x00017287) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7cb3,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7cb3,	// (0x000172a8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7cd4,	// (0x000172c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7cd4,	// (0x000172c9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0001f1d5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0001f1d5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc60a,	// (0x0001bbff) title_pane_g1_ParamLimits

0xc61d,	// (0x0001bc12) title_pane_g2_ParamLimits

0xf554,	// (0x0001eb49) title_pane_g_ParamLimits

0x3963,	// (0x00012f58) aid_call2_pane

0x396b,	// (0x00012f60) aid_call_pane

0x3973,	// (0x00012f68) popup_clock_analogue_window_g1

0x3973,	// (0x00012f68) popup_clock_analogue_window_g2

0x068a,	// (0x0000fc7f) popup_clock_analogue_window_g3

0x0693,	// (0x0000fc88) popup_clock_analogue_window_g4

0x22c1,	// (0x000118b6) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001ecee) popup_clock_analogue_window_g

0x069b,	// (0x0000fc90) popup_clock_analogue_window_t1

0x06a9,	// (0x0000fc9e) clock_digital_number_pane_ParamLimits

0x06a9,	// (0x0000fc9e) clock_digital_number_pane

0x06b5,	// (0x0000fcaa) clock_digital_number_pane_cp02_ParamLimits

0x06b5,	// (0x0000fcaa) clock_digital_number_pane_cp02

0x06c1,	// (0x0000fcb6) clock_digital_number_pane_cp03_ParamLimits

0x06c1,	// (0x0000fcb6) clock_digital_number_pane_cp03

0x06cd,	// (0x0000fcc2) clock_digital_number_pane_cp04_ParamLimits

0x06cd,	// (0x0000fcc2) clock_digital_number_pane_cp04

0x06d9,	// (0x0000fcce) clock_digital_separator_pane_ParamLimits

0x06d9,	// (0x0000fcce) clock_digital_separator_pane

0x06e5,	// (0x0000fcda) popup_clock_digital_window_t1_ParamLimits

0x06e5,	// (0x0000fcda) popup_clock_digital_window_t1

0x22c1,	// (0x000118b6) clock_digital_number_pane_g1

0x22c1,	// (0x000118b6) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001ecf9) clock_digital_number_pane_g

0x22c1,	// (0x000118b6) clock_digital_separator_pane_g1

0x22c1,	// (0x000118b6) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001ecf9) clock_digital_separator_pane_g

0xd322,	// (0x0001c917) aid_fill_nsta_ParamLimits

0xd458,	// (0x0001ca4d) indicator_nsta_pane_ParamLimits

0x462b,	// (0x00013c20) popup_clock_analogue_window

0x462b,	// (0x00013c20) popup_clock_digital_window

0x34de,	// (0x00012ad3) grid_indicator_nsta_pane_ParamLimits

0x6d1a,	// (0x0001630f) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0001f09b) clock_nsta_pane_t

0x064e,	// (0x0000fc43) aid_size_max_handle

0xb71b,	// (0x0001ad10) aid_size_min_handle

0x4004,	// (0x000135f9) editor_scroll_pane

0x7cef,	// (0x000172e4) ex_editor_pane

0x348b,	// (0x00012a80) scroll_pane_cp13

0x2bd0,	// (0x000121c5) scroll_pane_cp14

0x39a2,	// (0x00012f97) scroll_pane_cp36

0xd01c,	// (0x0001c611) list_single_graphic_hl_pane_cp2_ParamLimits

0xd01c,	// (0x0001c611) list_single_graphic_hl_pane_cp2

0xdb96,	// (0x0001d18b) list_single_graphic_hl_pane_ParamLimits

0xdb96,	// (0x0001d18b) list_single_graphic_hl_pane

0x7cf7,	// (0x000172ec) aid_size_min_hl_cp1

0x7d00,	// (0x000172f5) list_highlight_pane_cp34_ParamLimits

0x7d00,	// (0x000172f5) list_highlight_pane_cp34

0x7d11,	// (0x00017306) list_single_graphic_hl_pane_g1_ParamLimits

0x7d11,	// (0x00017306) list_single_graphic_hl_pane_g1

0xe090,	// (0x0001d685) list_single_graphic_hl_pane_g2_ParamLimits

0xe090,	// (0x0001d685) list_single_graphic_hl_pane_g2

0xe090,	// (0x0001d685) list_single_graphic_hl_pane_g3_ParamLimits

0xe090,	// (0x0001d685) list_single_graphic_hl_pane_g3

0x3f75,	// (0x0001356a) list_single_graphic_hl_pane_g4_ParamLimits

0x3f75,	// (0x0001356a) list_single_graphic_hl_pane_g4

0xe09c,	// (0x0001d691) list_single_graphic_hl_pane_g5_ParamLimits

0xe09c,	// (0x0001d691) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0001f1e6) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0001f1e6) list_single_graphic_hl_pane_g

0xe0b0,	// (0x0001d6a5) list_single_graphic_hl_pane_t1_ParamLimits

0xe0b0,	// (0x0001d6a5) list_single_graphic_hl_pane_t1

0x7d54,	// (0x00017349) aid_size_min_hl_cp2

0x7d5d,	// (0x00017352) list_highlight_pane_cp34_cp2_ParamLimits

0x7d5d,	// (0x00017352) list_highlight_pane_cp34_cp2

0x7d11,	// (0x00017306) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7d11,	// (0x00017306) list_single_graphic_hl_pane_g1_cp2

0x7d6a,	// (0x0001735f) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7d6a,	// (0x0001735f) list_single_graphic_hl_pane_g2_cp2

0xe0c6,	// (0x0001d6bb) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe0c6,	// (0x0001d6bb) list_single_graphic_hl_pane_g3_cp2

0x47f9,	// (0x00013dee) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x47f9,	// (0x00013dee) list_single_graphic_hl_pane_g4_cp2

0x7d2a,	// (0x0001731f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7d2a,	// (0x0001731f) list_single_graphic_hl_pane_g5_cp2

0xb772,	// (0x0001ad67) control_pane_g4_ParamLimits

0xb772,	// (0x0001ad67) control_pane_g4

0x434c,	// (0x00013941) bg_popup_sub_pane_cp10_ParamLimits

0x738d,	// (0x00016982) list_choice_list_pane_ParamLimits

0x739c,	// (0x00016991) scroll_pane_cp23

0x264e,	// (0x00011c43) bg_popup_preview_window_pane_cp02_ParamLimits

0x7984,	// (0x00016f79) list_preview_fixed_pane_ParamLimits

0x799a,	// (0x00016f8f) list_preview_fixed_pane_cp_ParamLimits

0x799a,	// (0x00016f8f) list_preview_fixed_pane_cp

0x79a6,	// (0x00016f9b) popup_preview_fixed_window_g1_ParamLimits

0x79a6,	// (0x00016f9b) popup_preview_fixed_window_g1

0x79b2,	// (0x00016fa7) popup_preview_fixed_window_g2_ParamLimits

0x79b2,	// (0x00016fa7) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0001f16e) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0001f16e) popup_preview_fixed_window_g

0x05c2,	// (0x0000fbb7) aid_navi_side_left_pane_ParamLimits

0x05d7,	// (0x0000fbcc) aid_navi_side_right_pane_ParamLimits

0x05ef,	// (0x0000fbe4) navi_icon_pane_stacon_ParamLimits

0x0603,	// (0x0000fbf8) navi_navi_pane_stacon_ParamLimits

0x05ef,	// (0x0000fbe4) navi_text_pane_stacon_ParamLimits

0x01e2,	// (0x0000f7d7) main_text_info_pane

0x7d9a,	// (0x0001738f) listscroll_text_info_pane

0x7da2,	// (0x00017397) list_text_info_pane_ParamLimits

0x7da2,	// (0x00017397) list_text_info_pane

0x7db1,	// (0x000173a6) scroll_pane_cp24_ParamLimits

0x7db1,	// (0x000173a6) scroll_pane_cp24

0xe0d4,	// (0x0001d6c9) list_text_info_pane_t1_ParamLimits

0xe0d4,	// (0x0001d6c9) list_text_info_pane_t1

0xb8bd,	// (0x0001aeb2) popup_fast_swap2_window_ParamLimits

0xb8bd,	// (0x0001aeb2) popup_fast_swap2_window

0x7e00,	// (0x000173f5) aid_size_cell_fast2

0x22b7,	// (0x000118ac) bg_popup_window_pane_cp17

0x4dcf,	// (0x000143c4) heading_pane_cp2

0x289a,	// (0x00011e8f) listscroll_fast2_pane

0x7e0a,	// (0x000173ff) grid_fast2_pane

0x7e14,	// (0x00017409) listscroll_fast2_pane_g1

0x7e1c,	// (0x00017411) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x0001f1f1) listscroll_fast2_pane_g

0x348b,	// (0x00012a80) scroll_pane_cp26

0x7e26,	// (0x0001741b) cell_fast2_pane_ParamLimits

0x7e26,	// (0x0001741b) cell_fast2_pane

0x7e3b,	// (0x00017430) cell_fast2_pane_g1

0x7e44,	// (0x00017439) cell_fast2_pane_g2

0x7e4d,	// (0x00017442) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0001f1f6) cell_fast2_pane_g

0x298d,	// (0x00011f82) grid_highlight_pane_cp9

0x0ac7,	// (0x000100bc) main_eswt_pane_ParamLimits

0x0ac7,	// (0x000100bc) main_eswt_pane

0x7dc6,	// (0x000173bb) list_single_text_info_pane

0x7e55,	// (0x0001744a) eswt_ctrl_button_pane

0x7e55,	// (0x0001744a) eswt_ctrl_canvas_pane

0x7e5d,	// (0x00017452) eswt_ctrl_combo_pane

0x7e55,	// (0x0001744a) eswt_ctrl_default_pane

0x7e55,	// (0x0001744a) eswt_ctrl_label_pane

0x7e65,	// (0x0001745a) eswt_ctrl_wait_pane

0x7e6d,	// (0x00017462) eswt_shell_pane

0x22b7,	// (0x000118ac) listscroll_eswt_app_pane

0x7e8d,	// (0x00017482) popup_eswt_tasktip_window_ParamLimits

0x7e8d,	// (0x00017482) popup_eswt_tasktip_window

0x49a7,	// (0x00013f9c) bg_popup_window_pane_cp18

0x7e9e,	// (0x00017493) eswt_control_pane_g1_ParamLimits

0x7e9e,	// (0x00017493) eswt_control_pane_g1

0x7eab,	// (0x000174a0) eswt_control_pane_g2_ParamLimits

0x7eab,	// (0x000174a0) eswt_control_pane_g2

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_ParamLimits

0x7eb8,	// (0x000174ad) eswt_control_pane_g3

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_ParamLimits

0x7ec5,	// (0x000174ba) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x0001f1fd) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x0001f1fd) eswt_control_pane_g

0x3192,	// (0x00012787) bg_button_pane_ParamLimits

0x3192,	// (0x00012787) bg_button_pane

0x29a2,	// (0x00011f97) common_borders_pane_copy2_ParamLimits

0x29a2,	// (0x00011f97) common_borders_pane_copy2

0x7ed2,	// (0x000174c7) control_button_pane_g1_ParamLimits

0x7ed2,	// (0x000174c7) control_button_pane_g1

0x7ede,	// (0x000174d3) control_button_pane_g2_ParamLimits

0x7ede,	// (0x000174d3) control_button_pane_g2

0x7eea,	// (0x000174df) control_button_pane_g3_ParamLimits

0x7eea,	// (0x000174df) control_button_pane_g3

0x0002,

0xfc11,	// (0x0001f206) control_button_pane_g_ParamLimits

0xfc11,	// (0x0001f206) control_button_pane_g

0x7efe,	// (0x000174f3) control_button_pane_t1

0x7f0c,	// (0x00017501) control_button_pane_t2

0x0001,

0xfc18,	// (0x0001f20d) control_button_pane_t

0x4883,	// (0x00013e78) bg_button_pane_g1

0x4893,	// (0x00013e88) bg_button_pane_g2

0x488b,	// (0x00013e80) bg_button_pane_g3

0x48a3,	// (0x00013e98) bg_button_pane_g4

0x489b,	// (0x00013e90) bg_button_pane_g5

0x48ab,	// (0x00013ea0) bg_button_pane_g6

0x48b3,	// (0x00013ea8) bg_button_pane_g7

0x48c3,	// (0x00013eb8) bg_button_pane_g8

0x48bb,	// (0x00013eb0) bg_button_pane_g9

0x0008,

0xf862,	// (0x0001ee57) bg_button_pane_g

0x7348,	// (0x0001693d) common_borders_pane_ParamLimits

0x7348,	// (0x0001693d) common_borders_pane

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy1_ParamLimits

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy1

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy1_ParamLimits

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy1

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy1_ParamLimits

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy1

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy1_ParamLimits

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy1

0x7383,	// (0x00016978) bg_eswt_ctrl_canvas_pane_g1

0x7348,	// (0x0001693d) common_borders_pane_cp2_ParamLimits

0x7348,	// (0x0001693d) common_borders_pane_cp2

0x7348,	// (0x0001693d) common_borders_pane_cp3_ParamLimits

0x7348,	// (0x0001693d) common_borders_pane_cp3

0x7f1a,	// (0x0001750f) separator_horizontal_pane

0x7f22,	// (0x00017517) separator_vertical_pane

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy2_ParamLimits

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy2

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy2_ParamLimits

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy2

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy2_ParamLimits

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy2

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy2_ParamLimits

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy2

0x22b7,	// (0x000118ac) common_borders_pane_cp4

0x7f2b,	// (0x00017520) separator_horizontal_pane_g1

0x7f34,	// (0x00017529) separator_horizontal_pane_g2

0x7f3d,	// (0x00017532) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x0001f212) separator_horizontal_pane_g

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy3_ParamLimits

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy3

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy3_ParamLimits

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy3

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy3_ParamLimits

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy3

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy3_ParamLimits

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy3

0x22b7,	// (0x000118ac) common_borders_pane_cp5

0x7f46,	// (0x0001753b) separator_vertical_pane_g1

0x7f4f,	// (0x00017544) separator_vertical_pane_g2

0x7f58,	// (0x0001754d) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0001f219) separator_vertical_pane_g

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy4_ParamLimits

0x7e9e,	// (0x00017493) eswt_control_pane_g1_copy4

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy4_ParamLimits

0x7eab,	// (0x000174a0) eswt_control_pane_g2_copy4

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy4_ParamLimits

0x7eb8,	// (0x000174ad) eswt_control_pane_g3_copy4

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy4_ParamLimits

0x7ec5,	// (0x000174ba) eswt_control_pane_g4_copy4

0xe0ef,	// (0x0001d6e4) eswt_ctrl_combo_button_pane

0xe0f7,	// (0x0001d6ec) eswt_ctrl_input_pane

0xe0ff,	// (0x0001d6f4) popup_choice_list_window_cp70

0xe107,	// (0x0001d6fc) eswt_ctrl_input_pane_t1

0x22b7,	// (0x000118ac) input_focus_pane_cp70

0x7348,	// (0x0001693d) bg_button_pane_cp70_ParamLimits

0x7348,	// (0x0001693d) bg_button_pane_cp70

0xe115,	// (0x0001d70a) eswt_ctrl_combo_button_pane_g1

0x7f8f,	// (0x00017584) wait_bar_pane_cp70

0x49a7,	// (0x00013f9c) bg_popup_window_pane_cp70_ParamLimits

0x49a7,	// (0x00013f9c) bg_popup_window_pane_cp70

0x7f97,	// (0x0001758c) popup_eswt_tasktip_window_t1

0x7fad,	// (0x000175a2) wait_bar_pane_cp71_ParamLimits

0x7fad,	// (0x000175a2) wait_bar_pane_cp71

0x7fb9,	// (0x000175ae) grid_eswt_app_pane

0x37a5,	// (0x00012d9a) scroll_pane_cp70

0xe11d,	// (0x0001d712) cell_eswt_app_pane_ParamLimits

0xe11d,	// (0x0001d712) cell_eswt_app_pane

0xe147,	// (0x0001d73c) cell_eswt_app_pane_g1_ParamLimits

0xe147,	// (0x0001d73c) cell_eswt_app_pane_g1

0xe176,	// (0x0001d76b) cell_eswt_app_pane_g2_ParamLimits

0xe176,	// (0x0001d76b) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x0001f220) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x0001f220) cell_eswt_app_pane_g

0xe19f,	// (0x0001d794) cell_eswt_app_pane_t1_ParamLimits

0xe19f,	// (0x0001d794) cell_eswt_app_pane_t1

0x807c,	// (0x00017671) grid_highlight_pane_cp70_ParamLimits

0x807c,	// (0x00017671) grid_highlight_pane_cp70

0x3ed9,	// (0x000134ce) set_content_pane_g1

0x42a4,	// (0x00013899) status_small_volume_pane

0x1908,	// (0x00010efd) status_small_volume_pane_g1

0x1910,	// (0x00010f05) volume_small2_pane

0x1919,	// (0x00010f0e) volume_small2_pane_g1

0x1922,	// (0x00010f17) volume_small2_pane_g2

0x192b,	// (0x00010f20) volume_small2_pane_g3

0x1934,	// (0x00010f29) volume_small2_pane_g4

0x193d,	// (0x00010f32) volume_small2_pane_g5

0x1946,	// (0x00010f3b) volume_small2_pane_g6

0x194f,	// (0x00010f44) volume_small2_pane_g7

0x1958,	// (0x00010f4d) volume_small2_pane_g8

0x1961,	// (0x00010f56) volume_small2_pane_g9

0x196a,	// (0x00010f5f) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x0001f225) volume_small2_pane_g

0x7749,	// (0x00016d3e) fep_vkb_top_text_pane_g1_ParamLimits

0xe038,	// (0x0001d62d) fep_vkb_top_text_pane_t1_ParamLimits

0x79be,	// (0x00016fb3) popup_preview_fixed_window_g3_ParamLimits

0x79be,	// (0x00016fb3) popup_preview_fixed_window_g3

0xbeda,	// (0x0001b4cf) popup_toolbar_trans_pane

0xd9ee,	// (0x0001cfe3) aid_height_set_list_ParamLimits

0x5d82,	// (0x00015377) aid_size_parent_ParamLimits

0x434c,	// (0x00013941) list_highlight_pane_cp2_ParamLimits

0x3ed9,	// (0x000134ce) set_content_pane_g1_ParamLimits

0xdba7,	// (0x0001d19c) list_single_image_pane_ParamLimits

0xdba7,	// (0x0001d19c) list_single_image_pane

0xe1d1,	// (0x0001d7c6) aid_size_cell_image_ParamLimits

0xe1d1,	// (0x0001d7c6) aid_size_cell_image

0xe1de,	// (0x0001d7d3) grid_single_image_pane_ParamLimits

0xe1de,	// (0x0001d7d3) grid_single_image_pane

0x2df5,	// (0x000123ea) list_single_image_pane_g1_ParamLimits

0x2df5,	// (0x000123ea) list_single_image_pane_g1

0x80a3,	// (0x00017698) list_single_image_pane_g2_ParamLimits

0x80a3,	// (0x00017698) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0001f23a) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0001f23a) list_single_image_pane_g

0x2d2c,	// (0x00012321) list_single_image_pane_t1_ParamLimits

0x2d2c,	// (0x00012321) list_single_image_pane_t1

0xe1ec,	// (0x0001d7e1) cell_image_list_pane_ParamLimits

0xe1ec,	// (0x0001d7e1) cell_image_list_pane

0xe202,	// (0x0001d7f7) cell_image_list_pane_g1

0xe20b,	// (0x0001d800) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x0001f23f) cell_image_list_pane_g

0x80dc,	// (0x000176d1) aid_size_cell_tb_trans_pane

0x3192,	// (0x00012787) bg_tb_trans_pane

0x80ee,	// (0x000176e3) grid_tb_trans_pane

0x4883,	// (0x00013e78) bg_tb_trans_pane_g1

0x4893,	// (0x00013e88) bg_tb_trans_pane_g2

0x488b,	// (0x00013e80) bg_tb_trans_pane_g3

0x48a3,	// (0x00013e98) bg_tb_trans_pane_g4

0x489b,	// (0x00013e90) bg_tb_trans_pane_g5

0x48c3,	// (0x00013eb8) bg_tb_trans_pane_g6

0x48bb,	// (0x00013eb0) bg_tb_trans_pane_g7

0x48ab,	// (0x00013ea0) bg_tb_trans_pane_g8

0x48b3,	// (0x00013ea8) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x0001f244) bg_tb_trans_pane_g

0x8102,	// (0x000176f7) cell_toolbar_trans_pane_ParamLimits

0x8102,	// (0x000176f7) cell_toolbar_trans_pane

0x7383,	// (0x00016978) cell_toolbar_trans_pane_g1

0xdded,	// (0x0001d3e2) list_form2_midp_pane_t1

0xddfb,	// (0x0001d3f0) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0001f0e1) list_form2_midp_pane_t

0x6f1a,	// (0x0001650f) scroll_pane_cp51_ParamLimits

0x7125,	// (0x0001671a) form2_midp_wait_pane_g1

0x712e,	// (0x00016723) form2_midp_wait_pane_g2

0x7137,	// (0x0001672c) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0001f0f6) form2_midp_wait_pane_g

0x23ab,	// (0x000119a0) list_highlight_pane_cp21_ParamLimits

0x718e,	// (0x00016783) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x719d,	// (0x00016792) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5fca,	// (0x000155bf) list_single_2graphic_im_pane_ParamLimits

0x5fca,	// (0x000155bf) list_single_2graphic_im_pane

0xe214,	// (0x0001d809) list_single_2graphic_im_pane_g1_ParamLimits

0xe214,	// (0x0001d809) list_single_2graphic_im_pane_g1

0xe225,	// (0x0001d81a) list_single_2graphic_im_pane_g2_ParamLimits

0xe225,	// (0x0001d81a) list_single_2graphic_im_pane_g2

0xe231,	// (0x0001d826) list_single_2graphic_im_pane_g3_ParamLimits

0xe231,	// (0x0001d826) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0001f257) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0001f257) list_single_2graphic_im_pane_g

0xe245,	// (0x0001d83a) list_single_2graphic_im_pane_t1_ParamLimits

0xe245,	// (0x0001d83a) list_single_2graphic_im_pane_t1

0x79ca,	// (0x00016fbf) list_single_graphic_2heading_pane_fp_ParamLimits

0x79ca,	// (0x00016fbf) list_single_graphic_2heading_pane_fp

0x7a50,	// (0x00017045) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7a50,	// (0x00017045) list_single_graphic_2heading_pane_fp_g1

0x7a21,	// (0x00017016) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a21,	// (0x00017016) list_single_graphic_2heading_pane_fp_g2

0x31b8,	// (0x000127ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x31b8,	// (0x000127ad) list_single_graphic_2heading_pane_fp_g3

0x31c4,	// (0x000127b9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x31c4,	// (0x000127b9) list_single_graphic_2heading_pane_fp_g4

0x7a2d,	// (0x00017022) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a2d,	// (0x00017022) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0001f17e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0001f17e) list_single_graphic_2heading_pane_fp_g

0x8196,	// (0x0001778b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8196,	// (0x0001778b) list_single_graphic_2heading_pane_fp_t1

0x7a88,	// (0x0001707d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7a88,	// (0x0001707d) list_single_graphic_2heading_pane_fp_t2

0x81ac,	// (0x000177a1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x81ac,	// (0x000177a1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x0001f260) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x0001f260) list_single_graphic_2heading_pane_fp_t

0x740f,	// (0x00016a04) fep_hwr_write_pane_g5_ParamLimits

0x740f,	// (0x00016a04) fep_hwr_write_pane_g5

0x741b,	// (0x00016a10) fep_hwr_write_pane_g6_ParamLimits

0x741b,	// (0x00016a10) fep_hwr_write_pane_g6

0x7e6d,	// (0x00017462) eswt_shell_pane_ParamLimits

0x49a7,	// (0x00013f9c) bg_popup_window_pane_cp18_ParamLimits

0x5ca2,	// (0x00015297) heading_pane_cp70

0x7f97,	// (0x0001758c) popup_eswt_tasktip_window_t1_ParamLimits

0xd37d,	// (0x0001c972) aid_touch_tab_arrow_left

0xd393,	// (0x0001c988) aid_touch_tab_arrow_right

0xc635,	// (0x0001bc2a) title_pane_g3_ParamLimits

0xc635,	// (0x0001bc2a) title_pane_g3

0x3071,	// (0x00012666) set_value_pane_g1

0xbeda,	// (0x0001b4cf) popup_toolbar_trans_pane_ParamLimits

0x80dc,	// (0x000176d1) aid_size_cell_tb_trans_pane_ParamLimits

0x3192,	// (0x00012787) bg_tb_trans_pane_ParamLimits

0x80ee,	// (0x000176e3) grid_tb_trans_pane_ParamLimits

0x264e,	// (0x00011c43) cont_note_pane_ParamLimits

0x264e,	// (0x00011c43) cont_note_pane

0x29a2,	// (0x00011f97) cont_snote2_single_text_pane_ParamLimits

0x29a2,	// (0x00011f97) cont_snote2_single_text_pane

0x29a2,	// (0x00011f97) cont_snote2_single_graphic_pane_ParamLimits

0x29a2,	// (0x00011f97) cont_snote2_single_graphic_pane

0x4fea,	// (0x000145df) cont_note_wait_pane_ParamLimits

0x4fea,	// (0x000145df) cont_note_wait_pane

0x4fea,	// (0x000145df) cont_note_image_pane_ParamLimits

0x4fea,	// (0x000145df) cont_note_image_pane

0x81c2,	// (0x000177b7) popup_note2_window_g1_ParamLimits

0x81c2,	// (0x000177b7) popup_note2_window_g1

0x81f3,	// (0x000177e8) popup_note2_window_t1_ParamLimits

0x81f3,	// (0x000177e8) popup_note2_window_t1

0x8238,	// (0x0001782d) popup_note2_window_t2_ParamLimits

0x8238,	// (0x0001782d) popup_note2_window_t2

0x827d,	// (0x00017872) popup_note2_window_t3_ParamLimits

0x827d,	// (0x00017872) popup_note2_window_t3

0x82c2,	// (0x000178b7) popup_note2_window_t4_ParamLimits

0x82c2,	// (0x000178b7) popup_note2_window_t4

0x26d2,	// (0x00011cc7) popup_note2_window_t5_ParamLimits

0x26d2,	// (0x00011cc7) popup_note2_window_t5

0x0004,

0xfc77,	// (0x0001f26c) popup_note2_window_t_ParamLimits

0xfc77,	// (0x0001f26c) popup_note2_window_t

0x82f1,	// (0x000178e6) popup_note2_image_window_g1_ParamLimits

0x82f1,	// (0x000178e6) popup_note2_image_window_g1

0x82fd,	// (0x000178f2) popup_note2_image_window_g2_ParamLimits

0x82fd,	// (0x000178f2) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x0001f277) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x0001f277) popup_note2_image_window_g

0x830f,	// (0x00017904) popup_note2_image_window_t1_ParamLimits

0x830f,	// (0x00017904) popup_note2_image_window_t1

0x8327,	// (0x0001791c) popup_note2_image_window_t2_ParamLimits

0x8327,	// (0x0001791c) popup_note2_image_window_t2

0x833f,	// (0x00017934) popup_note2_image_window_t3_ParamLimits

0x833f,	// (0x00017934) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x0001f27c) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x0001f27c) popup_note2_image_window_t

0x4ff8,	// (0x000145ed) popup_note2_wait_window_g1_ParamLimits

0x4ff8,	// (0x000145ed) popup_note2_wait_window_g1

0x835b,	// (0x00017950) popup_note2_wait_window_g2_ParamLimits

0x835b,	// (0x00017950) popup_note2_wait_window_g2

0x5010,	// (0x00014605) popup_note2_wait_window_g3_ParamLimits

0x5010,	// (0x00014605) popup_note2_wait_window_g3

0x0002,

0xfc8e,	// (0x0001f283) popup_note2_wait_window_g_ParamLimits

0xfc8e,	// (0x0001f283) popup_note2_wait_window_g

0x8367,	// (0x0001795c) popup_note2_wait_window_t1_ParamLimits

0x8367,	// (0x0001795c) popup_note2_wait_window_t1

0x8385,	// (0x0001797a) popup_note2_wait_window_t2_ParamLimits

0x8385,	// (0x0001797a) popup_note2_wait_window_t2

0x83a3,	// (0x00017998) popup_note2_wait_window_t3_ParamLimits

0x83a3,	// (0x00017998) popup_note2_wait_window_t3

0x83b5,	// (0x000179aa) popup_note2_wait_window_t4_ParamLimits

0x83b5,	// (0x000179aa) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x0001f28a) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x0001f28a) popup_note2_wait_window_t

0x83c7,	// (0x000179bc) wait_bar2_pane_ParamLimits

0x83c7,	// (0x000179bc) wait_bar2_pane

0x83df,	// (0x000179d4) popup_snote2_single_text_window_g1_ParamLimits

0x83df,	// (0x000179d4) popup_snote2_single_text_window_g1

0x8407,	// (0x000179fc) popup_snote2_single_text_window_t1_ParamLimits

0x8407,	// (0x000179fc) popup_snote2_single_text_window_t1

0x8453,	// (0x00017a48) popup_snote2_single_text_window_t2_ParamLimits

0x8453,	// (0x00017a48) popup_snote2_single_text_window_t2

0x849f,	// (0x00017a94) popup_snote2_single_text_window_t3_ParamLimits

0x849f,	// (0x00017a94) popup_snote2_single_text_window_t3

0x84e0,	// (0x00017ad5) popup_snote2_single_text_window_t4_ParamLimits

0x84e0,	// (0x00017ad5) popup_snote2_single_text_window_t4

0x8516,	// (0x00017b0b) popup_snote2_single_text_window_t5_ParamLimits

0x8516,	// (0x00017b0b) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x0001f293) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x0001f293) popup_snote2_single_text_window_t

0x8541,	// (0x00017b36) popup_snote2_single_graphic_window_g1_ParamLimits

0x8541,	// (0x00017b36) popup_snote2_single_graphic_window_g1

0x8569,	// (0x00017b5e) popup_snote2_single_graphic_window_g2_ParamLimits

0x8569,	// (0x00017b5e) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x0001f29e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x0001f29e) popup_snote2_single_graphic_window_g

0x8591,	// (0x00017b86) popup_snote2_single_graphic_window_t1_ParamLimits

0x8591,	// (0x00017b86) popup_snote2_single_graphic_window_t1

0x85dd,	// (0x00017bd2) popup_snote2_single_graphic_window_t2_ParamLimits

0x85dd,	// (0x00017bd2) popup_snote2_single_graphic_window_t2

0x849f,	// (0x00017a94) popup_snote2_single_graphic_window_t3_ParamLimits

0x849f,	// (0x00017a94) popup_snote2_single_graphic_window_t3

0x84e0,	// (0x00017ad5) popup_snote2_single_graphic_window_t4_ParamLimits

0x84e0,	// (0x00017ad5) popup_snote2_single_graphic_window_t4

0x8516,	// (0x00017b0b) popup_snote2_single_graphic_window_t5_ParamLimits

0x8516,	// (0x00017b0b) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x0001f2a3) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x0001f2a3) popup_snote2_single_graphic_window_t

0x6ddd,	// (0x000163d2) clock_nsta_pane_cp2_t1

0x6ddd,	// (0x000163d2) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0001f0b7) clock_nsta_pane_cp2_t

0x31ac,	// (0x000127a1) form_field_data_wide_pane_g1_ParamLimits

0x31b8,	// (0x000127ad) form_field_data_wide_pane_g2_ParamLimits

0x31b8,	// (0x000127ad) form_field_data_wide_pane_g2

0x31c4,	// (0x000127b9) form_field_data_wide_pane_g3_ParamLimits

0x31c4,	// (0x000127b9) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001ec71) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001ec71) form_field_data_wide_pane_g

0xdd26,	// (0x0001d31b) grid_touch_3_pane_ParamLimits

0xdd26,	// (0x0001d31b) grid_touch_3_pane

0xe276,	// (0x0001d86b) cell_touch_3_pane_ParamLimits

0xe276,	// (0x0001d86b) cell_touch_3_pane

0x7383,	// (0x00016978) cell_touch_3_pane_g1

0x7383,	// (0x00016978) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0001f13c) cell_touch_3_pane_g

0x2704,	// (0x00011cf9) cont_query_data_pane

0x270c,	// (0x00011d01) cont_query_data_pane_cp1

0x8657,	// (0x00017c4c) button_value_adjust_pane_cp7

0x865f,	// (0x00017c54) query_popup_pane_cp3

0x3a5d,	// (0x00013052) bg_popup_sub_pane_cp22_ParamLimits

0x0704,	// (0x0000fcf9) navi_navi_volume_pane_cp2

0x071f,	// (0x0000fd14) popup_side_volume_key_window_g2

0x072e,	// (0x0000fd23) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001ed07) popup_side_volume_key_window_g

0x074b,	// (0x0000fd40) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001ed0e) popup_side_volume_key_window_t

0x3da3,	// (0x00013398) popup_side_volume_key_window_ParamLimits

0xcabd,	// (0x0001c0b2) list_double_graphic_pane_g4_ParamLimits

0xcabd,	// (0x0001c0b2) list_double_graphic_pane_g4

0xdb83,	// (0x0001d178) list_single_2heading_msg_pane_ParamLimits

0xdb83,	// (0x0001d178) list_single_2heading_msg_pane

0xe2c0,	// (0x0001d8b5) list_single_2heading_msg_pane_g1_ParamLimits

0xe2c0,	// (0x0001d8b5) list_single_2heading_msg_pane_g1

0xe2cc,	// (0x0001d8c1) list_single_2heading_msg_pane_g2_ParamLimits

0xe2cc,	// (0x0001d8c1) list_single_2heading_msg_pane_g2

0xe2df,	// (0x0001d8d4) list_single_2heading_msg_pane_g3_ParamLimits

0xe2df,	// (0x0001d8d4) list_single_2heading_msg_pane_g3

0xe2eb,	// (0x0001d8e0) list_single_2heading_msg_pane_g4_ParamLimits

0xe2eb,	// (0x0001d8e0) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x0001f2ae) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x0001f2ae) list_single_2heading_msg_pane_g

0xe303,	// (0x0001d8f8) list_single_2heading_msg_pane_t1_ParamLimits

0xe303,	// (0x0001d8f8) list_single_2heading_msg_pane_t1

0xe32b,	// (0x0001d920) list_single_2heading_msg_pane_t2_ParamLimits

0xe32b,	// (0x0001d920) list_single_2heading_msg_pane_t2

0xe396,	// (0x0001d98b) list_single_2heading_msg_pane_t3_ParamLimits

0xe396,	// (0x0001d98b) list_single_2heading_msg_pane_t3

0x874e,	// (0x00017d43) list_single_2heading_msg_pane_t4_ParamLimits

0x874e,	// (0x00017d43) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x0001f2b7) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x0001f2b7) list_single_2heading_msg_pane_t

0x22ff,	// (0x000118f4) title_pane_g4_ParamLimits

0x22ff,	// (0x000118f4) title_pane_g4

0x0512,	// (0x0000fb07) title_pane_stacon_g3_ParamLimits

0x0512,	// (0x0000fb07) title_pane_stacon_g3

0x8159,	// (0x0001774e) list_single_2graphic_im_pane_g4_ParamLimits

0x8159,	// (0x0001774e) list_single_2graphic_im_pane_g4

0x5a49,	// (0x0001503e) popup_side_volume_key_window_cp

0x6391,	// (0x00015986) main_idle_act2_pane_t1

0x110c,	// (0x00010701) toolbar_button_pane_g10

0xc9a2,	// (0x0001bf97) popup_toolbar_window_cp1

0x6dce,	// (0x000163c3) clock_nsta_pane_cp_t1

0x6dce,	// (0x000163c3) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0001f0b2) clock_nsta_pane_cp_t

0x0704,	// (0x0000fcf9) navi_navi_volume_pane_cp2_ParamLimits

0x0713,	// (0x0000fd08) popup_side_volume_key_window_g1_ParamLimits

0x071f,	// (0x0000fd14) popup_side_volume_key_window_g2_ParamLimits

0x072e,	// (0x0000fd23) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001ed07) popup_side_volume_key_window_g_ParamLimits

0x1574,	// (0x00010b69) fep_hwr_aid_pane

0x161b,	// (0x00010c10) bg_fep_hwr_top_pane_g4_ParamLimits

0x73df,	// (0x000169d4) fep_hwr_top_pane_g1_ParamLimits

0x73f1,	// (0x000169e6) fep_hwr_top_pane_g2_ParamLimits

0x163b,	// (0x00010c30) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0001f107) fep_hwr_top_pane_g_ParamLimits

0x1650,	// (0x00010c45) fep_hwr_top_text_pane_ParamLimits

0x580c,	// (0x00014e01) aid_touch_tab_arrow_arrow_2

0x5815,	// (0x00014e0a) aid_touch_tab_arrow_left_2

0x1588,	// (0x00010b7d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x15bf,	// (0x00010bb4) fep_hwr_prediction_pane

0x7551,	// (0x00016b46) fep_vkb_prediction_pane

0xe018,	// (0x0001d60d) fep_vkb_side_pane_g3_ParamLimits

0xe018,	// (0x0001d60d) fep_vkb_side_pane_g3

0x17cb,	// (0x00010dc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1837,	// (0x00010e2c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1844,	// (0x00010e39) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0001f1b6) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1973,	// (0x00010f68) fep_hwr_prediction_pane_g1

0x197d,	// (0x00010f72) fep_hwr_prediction_pane_g2

0x1985,	// (0x00010f7a) fep_hwr_prediction_pane_g3

0x198d,	// (0x00010f82) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x0001f2c0) fep_hwr_prediction_pane_g

0x8773,	// (0x00017d68) fep_vkb_prediction_pane_g1

0x877d,	// (0x00017d72) fep_vkb_prediction_pane_g2

0x8785,	// (0x00017d7a) fep_vkb_prediction_pane_g3

0x878d,	// (0x00017d82) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x0001f2c9) fep_vkb_prediction_pane_g

0x13f4,	// (0x000109e9) slider_set_pane_g3

0x1408,	// (0x000109fd) slider_set_pane_g4

0x1420,	// (0x00010a15) slider_set_pane_g5

0x13f4,	// (0x000109e9) slider_set_pane_g6

0x1436,	// (0x00010a2b) slider_set_pane_g7

0x5f29,	// (0x0001551e) slider_form_pane_g3

0x5f32,	// (0x00015527) slider_form_pane_g4

0x5f3a,	// (0x0001552f) slider_form_pane_g5

0x5f29,	// (0x0001551e) slider_form_pane_g6

0xdb39,	// (0x0001d12e) slider_form_pane_g7

0x665a,	// (0x00015c4f) slider_set_pane_vc_g3

0x6663,	// (0x00015c58) slider_set_pane_vc_g4

0x666c,	// (0x00015c61) slider_set_pane_vc_g5

0x665a,	// (0x00015c4f) slider_set_pane_vc_g6

0x6675,	// (0x00015c6a) slider_set_pane_vc_g7

0x6a89,	// (0x0001607e) slider_form_pane_vc_g1

0x6a92,	// (0x00016087) slider_form_pane_vc_g2

0x6a9b,	// (0x00016090) slider_form_pane_vc_g3

0x6a89,	// (0x0001607e) slider_form_pane_vc_g4

0x6aa4,	// (0x00016099) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x0001f084) slider_form_pane_vc_g

0x01e2,	// (0x0000f7d7) main_idle_act3_pane

0x8795,	// (0x00017d8a) ai3_links_pane

0xe404,	// (0x0001d9f9) popup_ai3_data_window_ParamLimits

0xe404,	// (0x0001d9f9) popup_ai3_data_window

0x22b7,	// (0x000118ac) grid_ai3_links_pane

0xe41e,	// (0x0001da13) cell_ai3_links_pane_ParamLimits

0xe41e,	// (0x0001da13) cell_ai3_links_pane

0x87d0,	// (0x00017dc5) bg_popup_sub_pane_cp11

0x87dd,	// (0x00017dd2) cell_ai3_links_pane_g1

0x22b7,	// (0x000118ac) bg_popup_sub_pane_cp12

0x8802,	// (0x00017df7) heading_ai3_data_pane

0x880a,	// (0x00017dff) list_ai3_gene_pane

0x8816,	// (0x00017e0b) popup_ai3_data_window_g1

0x881e,	// (0x00017e13) heading_ai3_data_pane_g1

0x8826,	// (0x00017e1b) heading_ai3_data_pane_t1

0x8834,	// (0x00017e29) list_double_ai3_gene_pane_ParamLimits

0x8834,	// (0x00017e29) list_double_ai3_gene_pane

0x8841,	// (0x00017e36) list_single_ai3_gene_pane_ParamLimits

0x8841,	// (0x00017e36) list_single_ai3_gene_pane

0x7348,	// (0x0001693d) list_highlight_pane_cp7_ParamLimits

0x7348,	// (0x0001693d) list_highlight_pane_cp7

0x884e,	// (0x00017e43) list_single_a13_gene_pane_t1_ParamLimits

0x884e,	// (0x00017e43) list_single_a13_gene_pane_t1

0x8865,	// (0x00017e5a) list_single_ai3_gene_pane_g1

0x886e,	// (0x00017e63) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x0001f2d2) list_single_ai3_gene_pane_g

0x8876,	// (0x00017e6b) list_double_ai3_gene_pane_g1_ParamLimits

0x8876,	// (0x00017e6b) list_double_ai3_gene_pane_g1

0x8882,	// (0x00017e77) list_double_ai3_gene_pane_t1_ParamLimits

0x8882,	// (0x00017e77) list_double_ai3_gene_pane_t1

0x889e,	// (0x00017e93) list_double_ai3_gene_pane_t2_ParamLimits

0x889e,	// (0x00017e93) list_double_ai3_gene_pane_t2

0x88b4,	// (0x00017ea9) list_double_ai3_gene_pane_t3_ParamLimits

0x88b4,	// (0x00017ea9) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x0001f2d7) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x0001f2d7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8670,	// (0x00017c65) aid_size_min_col_2

0xe2aa,	// (0x0001d89f) aid_size_min_msg_ParamLimits

0xe2aa,	// (0x0001d89f) aid_size_min_msg

0xe02c,	// (0x0001d621) fep_vkb_top_text_pane_g2_ParamLimits

0xe02c,	// (0x0001d621) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0001f137) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0001f137) fep_vkb_top_text_pane_g

0x01e2,	// (0x0000f7d7) main_hc_apps_shell_pane

0x88d1,	// (0x00017ec6) grid_hc_apps_pane_ParamLimits

0x88d1,	// (0x00017ec6) grid_hc_apps_pane

0x88e0,	// (0x00017ed5) list_hc_apps_pane

0x88e8,	// (0x00017edd) scroll_pane_cp37_ParamLimits

0x88e8,	// (0x00017edd) scroll_pane_cp37

0xe438,	// (0x0001da2d) cell_hc_apps_pane_ParamLimits

0xe438,	// (0x0001da2d) cell_hc_apps_pane

0xe4f6,	// (0x0001daeb) cell_hc_apps_pane_g1_ParamLimits

0xe4f6,	// (0x0001daeb) cell_hc_apps_pane_g1

0x89d3,	// (0x00017fc8) cell_hc_apps_pane_g2_ParamLimits

0x89d3,	// (0x00017fc8) cell_hc_apps_pane_g2

0x89ef,	// (0x00017fe4) cell_hc_apps_pane_g3_ParamLimits

0x89ef,	// (0x00017fe4) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x0001f2de) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x0001f2de) cell_hc_apps_pane_g

0xe523,	// (0x0001db18) cell_hc_apps_pane_t1_ParamLimits

0xe523,	// (0x0001db18) cell_hc_apps_pane_t1

0x264e,	// (0x00011c43) grid_highlight_pane_cp10_ParamLimits

0x264e,	// (0x00011c43) grid_highlight_pane_cp10

0xe561,	// (0x0001db56) list_single_hc_apps_pane_ParamLimits

0xe561,	// (0x0001db56) list_single_hc_apps_pane

0xe58e,	// (0x0001db83) list_single_hc_apps_pane_g1

0xe5a7,	// (0x0001db9c) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x0001f2e5) list_single_hc_apps_pane_g

0xe5c0,	// (0x0001dbb5) list_single_hc_apps_pane_g2_copy1

0x8afb,	// (0x000180f0) list_single_hc_apps_pane_t1

0x23ab,	// (0x000119a0) bg_set_opt_pane_cp_ParamLimits

0x0439,	// (0x0000fa2e) setting_slider_pane_t1_ParamLimits

0x0452,	// (0x0000fa47) setting_slider_pane_t2_ParamLimits

0x046c,	// (0x0000fa61) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001eb59) setting_slider_pane_t_ParamLimits

0x0484,	// (0x0000fa79) slider_set_pane_ParamLimits

0x09a9,	// (0x0000ff9e) control_pane_g5_ParamLimits

0x09a9,	// (0x0000ff9e) control_pane_g5

0x5d36,	// (0x0001532b) slider_set_pane_g1_ParamLimits

0x13e8,	// (0x000109dd) slider_set_pane_g2_ParamLimits

0x13f4,	// (0x000109e9) slider_set_pane_g3_ParamLimits

0x1408,	// (0x000109fd) slider_set_pane_g4_ParamLimits

0x1420,	// (0x00010a15) slider_set_pane_g5_ParamLimits

0x13f4,	// (0x000109e9) slider_set_pane_g6_ParamLimits

0x1436,	// (0x00010a2b) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0001ef55) slider_set_pane_g_ParamLimits

0x3e84,	// (0x00013479) navi_icon_text_pane_ParamLimits

0xd346,	// (0x0001c93b) aid_fill_nsta_2_ParamLimits

0xd37d,	// (0x0001c972) aid_touch_tab_arrow_left_ParamLimits

0xd393,	// (0x0001c988) aid_touch_tab_arrow_right_ParamLimits

0xd42e,	// (0x0001ca23) clock_nsta_pane_ParamLimits

0x57ee,	// (0x00014de3) navi_icon_pane_g1_ParamLimits

0x57fa,	// (0x00014def) navi_text_pane_t1_ParamLimits

0x6ed8,	// (0x000164cd) navi_icon_text_pane_g1_ParamLimits

0x6ee4,	// (0x000164d9) navi_icon_text_pane_t1_ParamLimits

0xe58e,	// (0x0001db83) list_single_hc_apps_pane_g1_ParamLimits

0xe5a7,	// (0x0001db9c) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x0001f2e5) list_single_hc_apps_pane_g_ParamLimits

0xe5c0,	// (0x0001dbb5) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8afb,	// (0x000180f0) list_single_hc_apps_pane_t1_ParamLimits

0xb6b0,	// (0x0001aca5) popup_toolbar2_fixed_window_ParamLimits

0xb6b0,	// (0x0001aca5) popup_toolbar2_fixed_window

0xbed0,	// (0x0001b4c5) popup_toolbar2_float_window

0x22b7,	// (0x000118ac) bg_popup_sub_pane_cp27

0x8b29,	// (0x0001811e) grid_toolbar2_float_pane

0x22b7,	// (0x000118ac) bg_popup_sub_pane_cp26

0x8b29,	// (0x0001811e) grid_toolbar2_fixed_pane

0xe5dc,	// (0x0001dbd1) cell_toolbar2_fixed_pane_ParamLimits

0xe5dc,	// (0x0001dbd1) cell_toolbar2_fixed_pane

0xe5f7,	// (0x0001dbec) cell_toolbar2_fixed_pane_g1

0x8b4a,	// (0x0001813f) toolbar2_fixed_button_pane

0x4883,	// (0x00013e78) toolbar2_fixed_button_pane_g1

0x4893,	// (0x00013e88) toolbar2_fixed_button_pane_g2

0x488b,	// (0x00013e80) toolbar2_fixed_button_pane_g3

0x48a3,	// (0x00013e98) toolbar2_fixed_button_pane_g4

0x489b,	// (0x00013e90) toolbar2_fixed_button_pane_g5

0x48ab,	// (0x00013ea0) toolbar2_fixed_button_pane_g6

0x48b3,	// (0x00013ea8) toolbar2_fixed_button_pane_g7

0x48c3,	// (0x00013eb8) toolbar2_fixed_button_pane_g8

0x48bb,	// (0x00013eb0) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0001ee57) toolbar2_fixed_button_pane_g

0x8b52,	// (0x00018147) cell_toolbar2_float_pane_ParamLimits

0x8b52,	// (0x00018147) cell_toolbar2_float_pane

0x8b63,	// (0x00018158) cell_toolbar2_float_pane_g1

0x8b4a,	// (0x0001813f) toolbar2_fixed_button_pane_cp

0xdf06,	// (0x0001d4fb) fep_vkb_accented_list_pane_ParamLimits

0xdf06,	// (0x0001d4fb) fep_vkb_accented_list_pane

0x17ab,	// (0x00010da0) bg_popup_fep_shadow_pane_g9

0x4004,	// (0x000135f9) bg_popup_fep_shadow_pane_cp3

0x3472,	// (0x00012a67) list_accented_list_pane

0x8b6c,	// (0x00018161) list_single_accented_list_pane_ParamLimits

0x8b6c,	// (0x00018161) list_single_accented_list_pane

0x4004,	// (0x000135f9) list_highlight_pane_cp10

0x8b7d,	// (0x00018172) list_single_accented_list_pane_t1

0xbdfa,	// (0x0001b3ef) popup_slider_window_ParamLimits

0xbdfa,	// (0x0001b3ef) popup_slider_window

0x8667,	// (0x00017c5c) aid_indentation_list_msg

0xe6f0,	// (0x0001dce5) bg_popup_window_pane_cp19

0x8ca1,	// (0x00018296) popup_slider_window_g1

0x8cbd,	// (0x000182b2) popup_slider_window_g2

0x8cd9,	// (0x000182ce) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x0001f2ea) popup_slider_window_g

0x8d35,	// (0x0001832a) popup_slider_window_t1

0x8da9,	// (0x0001839e) small_volume_slider_vertical_pane

0x7383,	// (0x00016978) small_volume_slider_vertical_pane_g1

0x7383,	// (0x00016978) small_volume_slider_vertical_pane_g2

0x8dc5,	// (0x000183ba) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x0001f2fc) small_volume_slider_vertical_pane_g

0xb61e,	// (0x0001ac13) area_side_right_pane_ParamLimits

0xb61e,	// (0x0001ac13) area_side_right_pane

0xc151,	// (0x0001b746) aid_size_side_button_ParamLimits

0xc151,	// (0x0001b746) aid_size_side_button

0xc16a,	// (0x0001b75f) grid_sctrl_middle_pane_ParamLimits

0xc16a,	// (0x0001b75f) grid_sctrl_middle_pane

0x19c9,	// (0x00010fbe) sctrl_sk_bottom_pane

0x19da,	// (0x00010fcf) sctrl_sk_top_pane

0x19ec,	// (0x00010fe1) aid_touch_sctrl_top

0x19f9,	// (0x00010fee) bg_sctrl_sk_pane_ParamLimits

0x19f9,	// (0x00010fee) bg_sctrl_sk_pane

0x1a07,	// (0x00010ffc) sctrl_sk_top_pane_g1

0x1a14,	// (0x00011009) sctrl_sk_top_pane_t1

0x19ec,	// (0x00010fe1) aid_touch_sctrl_bottom

0x19f9,	// (0x00010fee) bg_sctrl_sk_pane_cp_ParamLimits

0x19f9,	// (0x00010fee) bg_sctrl_sk_pane_cp

0x1a2f,	// (0x00011024) sctrl_sk_bottom_pane_g1

0x1a14,	// (0x00011009) sctrl_sk_bottom_pane_t1

0xc184,	// (0x0001b779) cell_sctrl_middle_pane_ParamLimits

0xc184,	// (0x0001b779) cell_sctrl_middle_pane

0xc195,	// (0x0001b78a) aid_touch_sctrl_middle_ParamLimits

0xc195,	// (0x0001b78a) aid_touch_sctrl_middle

0xc1a2,	// (0x0001b797) bg_sctrl_middle_pane_ParamLimits

0xc1a2,	// (0x0001b797) bg_sctrl_middle_pane

0x209c,	// (0x00011691) cell_sctrl_middle_pane_g1_ParamLimits

0x209c,	// (0x00011691) cell_sctrl_middle_pane_g1

0xc1b0,	// (0x0001b7a5) cell_sctrl_middle_pane_g2_ParamLimits

0xc1b0,	// (0x0001b7a5) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x0001f308) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x0001f308) cell_sctrl_middle_pane_g

0x4883,	// (0x00013e78) bg_sctrl_middle_pane_g1

0x488b,	// (0x00013e80) bg_sctrl_middle_pane_g2

0x4893,	// (0x00013e88) bg_sctrl_middle_pane_g3

0x489b,	// (0x00013e90) bg_sctrl_middle_pane_g4

0x48a3,	// (0x00013e98) bg_sctrl_middle_pane_g5

0x48ab,	// (0x00013ea0) bg_sctrl_middle_pane_g6

0x48b3,	// (0x00013ea8) bg_sctrl_middle_pane_g7

0x48bb,	// (0x00013eb0) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x0001f30d) bg_sctrl_middle_pane_g

0x48c3,	// (0x00013eb8) bg_sctrl_middle_pane_g8_copy1

0x4883,	// (0x00013e78) bg_sctrl_sk_pane_g1

0x4893,	// (0x00013e88) bg_sctrl_sk_pane_g2

0x488b,	// (0x00013e80) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0001ee57) bg_sctrl_sk_pane_g

0x2b60,	// (0x00012155) aid_size_touch_scroll_bar

0x48a3,	// (0x00013e98) bg_sctrl_sk_pane_g4

0x489b,	// (0x00013e90) bg_sctrl_sk_pane_g5

0x48ab,	// (0x00013ea0) bg_sctrl_sk_pane_g6

0x48b3,	// (0x00013ea8) bg_sctrl_sk_pane_g7

0x48c3,	// (0x00013eb8) bg_sctrl_sk_pane_g8

0x48bb,	// (0x00013eb0) bg_sctrl_sk_pane_g9

0x0b5f,	// (0x00010154) popup_fep_china_hwr2_fs_candidate_window

0xb91a,	// (0x0001af0f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb91a,	// (0x0001af0f) popup_fep_china_hwr2_fs_control_window

0x17cb,	// (0x00010dc0) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x0001f303) sctrl_sk_top_pane_g

0xe7a8,	// (0x0001dd9d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe7a8,	// (0x0001dd9d) aid_fep_china_hwr2_fs_cell

0xe7bc,	// (0x0001ddb1) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe7bc,	// (0x0001ddb1) bg_popup_fep_shadow_pane_cp4

0xe7d3,	// (0x0001ddc8) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe7d3,	// (0x0001ddc8) bg_popup_fep_shadow_pane_cp5

0xe7e5,	// (0x0001ddda) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe7e5,	// (0x0001ddda) popup_fep_china_hwr2_fs_control_bar_grid

0xe7f9,	// (0x0001ddee) popup_fep_china_hwr2_fs_control_funtion_grid

0x8e21,	// (0x00018416) aid_fep_china_hwr2_fs_candi_cell

0x22b7,	// (0x000118ac) bg_popup_fep_shadow_pane_cp6

0x8e2b,	// (0x00018420) popup_fep_china_hwr2_fs_candidate_grid

0xe801,	// (0x0001ddf6) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe801,	// (0x0001ddf6) cell_fep_china_hwr2_fs_funtion_grid

0x7383,	// (0x00016978) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8e4d,	// (0x00018442) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8e4d,	// (0x00018442) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8e5b,	// (0x00018450) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8e5b,	// (0x00018450) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x0001f31e) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x0001f31e) cell_fep_china_hwr2_fs_funtion_grid_g

0xe819,	// (0x0001de0e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe819,	// (0x0001de0e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe82e,	// (0x0001de23) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe82e,	// (0x0001de23) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x0001f323) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x0001f323) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ea2,	// (0x00018497) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8eaa,	// (0x0001849f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8eb2,	// (0x000184a7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x0001f328) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8eba,	// (0x000184af) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8eba,	// (0x000184af) cell_fep_china_hwr2_fs_candidate_grid

0x8ed3,	// (0x000184c8) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8edb,	// (0x000184d0) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7383,	// (0x00016978) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7383,	// (0x00016978) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0001f13c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8ee3,	// (0x000184d8) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4450,	// (0x00013a45) clock_nsta_pane_cp_24_ParamLimits

0x4450,	// (0x00013a45) clock_nsta_pane_cp_24

0x44ce,	// (0x00013ac3) indicator_nsta_pane_cp_24_ParamLimits

0x44ce,	// (0x00013ac3) indicator_nsta_pane_cp_24

0x566a,	// (0x00014c5f) heading_pane_g1

0x0001,

0xf8c7,	// (0x0001eebc) heading_pane_g

0x61da,	// (0x000157cf) grid_sct_catagory_button_pane

0x620a,	// (0x000157ff) scroll_pane_cp5_ParamLimits

0x6f26,	// (0x0001651b) button_value_adjust_pane_cp5_ParamLimits

0x6f26,	// (0x0001651b) button_value_adjust_pane_cp5

0x7022,	// (0x00016617) form2_midp_time_pane_ParamLimits

0x8ef1,	// (0x000184e6) cell_sct_catagory_button_pane_ParamLimits

0x8ef1,	// (0x000184e6) cell_sct_catagory_button_pane

0x7348,	// (0x0001693d) bg_button_pane_cp01_ParamLimits

0x7348,	// (0x0001693d) bg_button_pane_cp01

0x7383,	// (0x00016978) cell_sct_catagory_button_pane_g1

0xbe73,	// (0x0001b468) popup_tb_extension_window

0xe84a,	// (0x0001de3f) aid_size_cell_ext_ParamLimits

0xe84a,	// (0x0001de3f) aid_size_cell_ext

0x29a2,	// (0x00011f97) bg_tb_trans_pane_cp1_ParamLimits

0x29a2,	// (0x00011f97) bg_tb_trans_pane_cp1

0xe870,	// (0x0001de65) grid_tb_ext_pane_ParamLimits

0xe870,	// (0x0001de65) grid_tb_ext_pane

0xe8ae,	// (0x0001dea3) cell_tb_ext_pane_ParamLimits

0xe8ae,	// (0x0001dea3) cell_tb_ext_pane

0xe8d6,	// (0x0001decb) cell_tb_ext_pane_g1_ParamLimits

0xe8d6,	// (0x0001decb) cell_tb_ext_pane_g1

0x8f87,	// (0x0001857c) cell_tb_ext_pane_t1

0x264e,	// (0x00011c43) list_highlight_pane_cp11_ParamLimits

0x264e,	// (0x00011c43) list_highlight_pane_cp11

0x036c,	// (0x0000f961) popup_uni_indicator_window_ParamLimits

0x036c,	// (0x0000f961) popup_uni_indicator_window

0x3192,	// (0x00012787) bg_popup_sub_pane_cp14

0x8fa2,	// (0x00018597) list_uniindi_pane

0x8fae,	// (0x000185a3) uniindi_top_pane

0x264e,	// (0x00011c43) bg_uniindi_top_pane

0x8fcd,	// (0x000185c2) uniindi_top_pane_g1

0x8fe3,	// (0x000185d8) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x0001f32f) uniindi_top_pane_g

0x900d,	// (0x00018602) uniindi_top_pane_t1

0x9037,	// (0x0001862c) list_single_uniindi_pane_ParamLimits

0x9037,	// (0x0001862c) list_single_uniindi_pane

0x7383,	// (0x00016978) bg_uniindi_top_pane_g1

0x904a,	// (0x0001863f) list_single_uniindi_pane_g1

0x905d,	// (0x00018652) list_single_uniindi_pane_t1

0x01e2,	// (0x0000f7d7) control_bg_pane

0x9082,	// (0x00018677) bg_sctrl_sk_pane_cp1

0x908b,	// (0x00018680) bg_sctrl_sk_pane_cp2

0x9094,	// (0x00018689) control_bg_pane_g1

0x909d,	// (0x00018692) control_bg_pane_g2

0x0001,

0xfd43,	// (0x0001f338) control_bg_pane_g

0x6d60,	// (0x00016355) cell_indicator_nsta_pane_g1_ParamLimits

0xdd55,	// (0x0001d34a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0001f0a0) cell_indicator_nsta_pane_g_ParamLimits

0x70aa,	// (0x0001669f) form2_midp_time_pane_t1_ParamLimits

0x1566,	// (0x00010b5b) main_idle_act4_pane_ParamLimits

0x1566,	// (0x00010b5b) main_idle_act4_pane

0xbe73,	// (0x0001b468) popup_tb_extension_window_ParamLimits

0xe895,	// (0x0001de8a) tb_ext_find_pane_ParamLimits

0xe895,	// (0x0001de8a) tb_ext_find_pane

0x90a6,	// (0x0001869b) ai_gene_pane_1_cp1

0x413d,	// (0x00013732) ai_gene_pane_2_cp1

0x90ae,	// (0x000186a3) list_single_idle_plugin_calendar_pane

0x90b7,	// (0x000186ac) list_single_idle_plugin_notification_pane

0x90c0,	// (0x000186b5) list_single_idle_plugin_player_pane

0xe8f3,	// (0x0001dee8) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe8f3,	// (0x0001dee8) list_single_idle_plugin_shortcut_pane

0xe91b,	// (0x0001df10) main_idle_act4_pane_t1

0xe931,	// (0x0001df26) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x0001f33d) main_idle_act4_pane_t

0xe947,	// (0x0001df3c) middle_sk_idle_act4_pane_ParamLimits

0xe947,	// (0x0001df3c) middle_sk_idle_act4_pane

0xe963,	// (0x0001df58) popup_clock_digital_analogue_window_cp2

0xe98b,	// (0x0001df80) shortcut_wheel_idle_act4_pane_ParamLimits

0xe98b,	// (0x0001df80) shortcut_wheel_idle_act4_pane

0x7383,	// (0x00016978) shortcut_wheel_idle_act4_pane_g1

0x7383,	// (0x00016978) shortcut_wheel_idle_act4_pane_g2

0x7383,	// (0x00016978) shortcut_wheel_idle_act4_pane_g3

0x7383,	// (0x00016978) shortcut_wheel_idle_act4_pane_g4

0x7383,	// (0x00016978) shortcut_wheel_idle_act4_pane_g5

0x9153,	// (0x00018748) shortcut_wheel_idle_act4_pane_g6

0x915b,	// (0x00018750) shortcut_wheel_idle_act4_pane_g7

0x9163,	// (0x00018758) shortcut_wheel_idle_act4_pane_g8

0x916b,	// (0x00018760) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x0001f342) shortcut_wheel_idle_act4_pane_g

0xd2fa,	// (0x0001c8ef) middle_sk_idle_act4_pane_g1_ParamLimits

0xd2fa,	// (0x0001c8ef) middle_sk_idle_act4_pane_g1

0xea08,	// (0x0001dffd) middle_sk_idle_act4_pane_g2_ParamLimits

0xea08,	// (0x0001dffd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x0001f365) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x0001f365) middle_sk_idle_act4_pane_g

0xea20,	// (0x0001e015) middle_sk_idle_act4_pane_t1_ParamLimits

0xea20,	// (0x0001e015) middle_sk_idle_act4_pane_t1

0xea4f,	// (0x0001e044) grid_ai_shortcut_pane_ParamLimits

0xea4f,	// (0x0001e044) grid_ai_shortcut_pane

0xea6c,	// (0x0001e061) list_highlight_pane_cp16_ParamLimits

0xea6c,	// (0x0001e061) list_highlight_pane_cp16

0xea79,	// (0x0001e06e) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xea79,	// (0x0001e06e) list_single_idle_plugin_shortcut_pane_g1

0xea85,	// (0x0001e07a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xea85,	// (0x0001e07a) list_single_idle_plugin_shortcut_pane_g2

0xeaa1,	// (0x0001e096) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeaa1,	// (0x0001e096) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x0001f36a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x0001f36a) list_single_idle_plugin_shortcut_pane_g

0xeab6,	// (0x0001e0ab) cell_ai_shortcut_pane_ParamLimits

0xeab6,	// (0x0001e0ab) cell_ai_shortcut_pane

0xeacc,	// (0x0001e0c1) cell_ai_shortcut_pane_g1_ParamLimits

0xeacc,	// (0x0001e0c1) cell_ai_shortcut_pane_g1

0x90a6,	// (0x0001869b) ai_gene_pane_1_cp2

0x929b,	// (0x00018890) ai_gene_pane_2_cp2

0x92a3,	// (0x00018898) list_highlight_pane_cp15

0x92ac,	// (0x000188a1) list_single_idle_plugin_calendar_pane_g1

0x92a3,	// (0x00018898) list_highlight_pane_cp17

0x92b4,	// (0x000188a9) list_single_idle_plugin_calendar_pane_g1_copy1

0x92bc,	// (0x000188b1) list_single_idle_plugin_player_pane_g1

0x6433,	// (0x00015a28) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x0001f371) list_single_idle_plugin_player_pane_g

0x92c4,	// (0x000188b9) list_single_idle_plugin_player_pane_t1

0x92d2,	// (0x000188c7) list_single_idle_plugin_player_pane_t2

0x92e0,	// (0x000188d5) list_single_idle_plugin_player_pane_t3

0x92ee,	// (0x000188e3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x0001f376) list_single_idle_plugin_player_pane_t

0x92fc,	// (0x000188f1) wait_bar_pane_cp15

0x9304,	// (0x000188f9) grid_ai_notification_pane

0x6433,	// (0x00015a28) list_single_idle_plugin_notification_pane_g1

0xeaee,	// (0x0001e0e3) cell_ai_notification_pane_ParamLimits

0xeaee,	// (0x0001e0e3) cell_ai_notification_pane

0x931a,	// (0x0001890f) cell_ai_notification_pane_g1

0x9322,	// (0x00018917) cell_ai_notification_pane_t1

0xeafb,	// (0x0001e0f0) tb_ext_find_button_pane

0xeb03,	// (0x0001e0f8) tb_ext_find_pane_g1

0xeb0b,	// (0x0001e100) tb_ext_find_pane_t1

0x3973,	// (0x00012f68) tb_ext_find_button_pane_g1

0x934e,	// (0x00018943) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x0001f37f) tb_ext_find_button_pane_g

0xe91b,	// (0x0001df10) main_idle_act4_pane_t1_ParamLimits

0xe931,	// (0x0001df26) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x0001f33d) main_idle_act4_pane_t_ParamLimits

0xe963,	// (0x0001df58) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe97b,	// (0x0001df70) sat_plugin_idle_act4_pane_ParamLimits

0xe97b,	// (0x0001df70) sat_plugin_idle_act4_pane

0xeb19,	// (0x0001e10e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeb19,	// (0x0001e10e) sat_plugin_idle_act4_pane_t1

0xeb31,	// (0x0001e126) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeb31,	// (0x0001e126) sat_plugin_idle_act4_pane_t2

0xeb49,	// (0x0001e13e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xeb49,	// (0x0001e13e) sat_plugin_idle_act4_pane_t3

0xeb61,	// (0x0001e156) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeb61,	// (0x0001e156) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x0001f384) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x0001f384) sat_plugin_idle_act4_pane_t

0x02a7,	// (0x0000f89c) popup_battery_window_ParamLimits

0x02a7,	// (0x0000f89c) popup_battery_window

0x264e,	// (0x00011c43) bg_popup_sub_pane_cp25_ParamLimits

0x264e,	// (0x00011c43) bg_popup_sub_pane_cp25

0x93a3,	// (0x00018998) popup_battery_window_g1_ParamLimits

0x93a3,	// (0x00018998) popup_battery_window_g1

0x93af,	// (0x000189a4) popup_battery_window_t1_ParamLimits

0x93af,	// (0x000189a4) popup_battery_window_t1

0x93c1,	// (0x000189b6) popup_battery_window_t2_ParamLimits

0x93c1,	// (0x000189b6) popup_battery_window_t2

0x0001,

0xfd98,	// (0x0001f38d) popup_battery_window_t_ParamLimits

0xfd98,	// (0x0001f38d) popup_battery_window_t

0xd21e,	// (0x0001c813) midp_canvas_pane_ParamLimits

0xd279,	// (0x0001c86e) midp_keypad_pane_ParamLimits

0xd279,	// (0x0001c86e) midp_keypad_pane

0x434c,	// (0x00013941) main_midp_pane_ParamLimits

0x6dec,	// (0x000163e1) signal_pane_g2_cp_ParamLimits

0xeb79,	// (0x0001e16e) aid_size_cell_midp_keypad_ParamLimits

0xeb79,	// (0x0001e16e) aid_size_cell_midp_keypad

0xeb97,	// (0x0001e18c) midp_keyp_game_grid_pane_ParamLimits

0xeb97,	// (0x0001e18c) midp_keyp_game_grid_pane

0xebbe,	// (0x0001e1b3) midp_keyp_rocker_pane_ParamLimits

0xebbe,	// (0x0001e1b3) midp_keyp_rocker_pane

0xebff,	// (0x0001e1f4) midp_keyp_sk_left_pane_ParamLimits

0xebff,	// (0x0001e1f4) midp_keyp_sk_left_pane

0xec53,	// (0x0001e248) midp_keyp_sk_right_pane_ParamLimits

0xec53,	// (0x0001e248) midp_keyp_sk_right_pane

0x22b7,	// (0x000118ac) bg_button_pane_cp03

0xeca7,	// (0x0001e29c) midp_keyp_sk_left_pane_g1

0x22b7,	// (0x000118ac) bg_button_pane_cp04

0xeca7,	// (0x0001e29c) midp_keyp_sk_right_pane_g1

0x7383,	// (0x00016978) midp_keyp_rocker_pane_g1

0xecb0,	// (0x0001e2a5) keyp_game_cell_pane_ParamLimits

0xecb0,	// (0x0001e2a5) keyp_game_cell_pane

0x22b7,	// (0x000118ac) bg_button_pane_cp02

0xecd4,	// (0x0001e2c9) keyp_game_cell_pane_g1

0xb660,	// (0x0001ac55) popup_fep_vkb2_window_ParamLimits

0xb660,	// (0x0001ac55) popup_fep_vkb2_window

0xc1bc,	// (0x0001b7b1) aid_size_cell_vkb2_ParamLimits

0xc1bc,	// (0x0001b7b1) aid_size_cell_vkb2

0xc1f2,	// (0x0001b7e7) popup_fep_vkb2_window_g1_ParamLimits

0xc1f2,	// (0x0001b7e7) popup_fep_vkb2_window_g1

0xc242,	// (0x0001b837) vkb2_area_bottom_pane_ParamLimits

0xc242,	// (0x0001b837) vkb2_area_bottom_pane

0xc296,	// (0x0001b88b) vkb2_area_keypad_pane_ParamLimits

0xc296,	// (0x0001b88b) vkb2_area_keypad_pane

0xc2de,	// (0x0001b8d3) vkb2_area_top_pane_ParamLimits

0xc2de,	// (0x0001b8d3) vkb2_area_top_pane

0xc364,	// (0x0001b959) vkb2_top_entry_pane_ParamLimits

0xc364,	// (0x0001b959) vkb2_top_entry_pane

0xc391,	// (0x0001b986) vkb2_top_grid_left_pane_ParamLimits

0xc391,	// (0x0001b986) vkb2_top_grid_left_pane

0xc3b1,	// (0x0001b9a6) vkb2_top_grid_right_pane_ParamLimits

0xc3b1,	// (0x0001b9a6) vkb2_top_grid_right_pane

0x1c9b,	// (0x00011290) vkb2_cell_keypad_pane_ParamLimits

0x1c9b,	// (0x00011290) vkb2_cell_keypad_pane

0xc3f7,	// (0x0001b9ec) vkb2_area_bottom_grid_pane_ParamLimits

0xc3f7,	// (0x0001b9ec) vkb2_area_bottom_grid_pane

0xc421,	// (0x0001ba16) vkb2_area_bottom_pane_g1_ParamLimits

0xc421,	// (0x0001ba16) vkb2_area_bottom_pane_g1

0xc447,	// (0x0001ba3c) vkb2_area_bottom_pane_g2_ParamLimits

0xc447,	// (0x0001ba3c) vkb2_area_bottom_pane_g2

0xc478,	// (0x0001ba6d) vkb2_area_bottom_pane_g3_ParamLimits

0xc478,	// (0x0001ba6d) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x0001f392) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x0001f392) vkb2_area_bottom_pane_g

0x1e45,	// (0x0001143a) vkb2_top_cell_left_pane_ParamLimits

0x1e45,	// (0x0001143a) vkb2_top_cell_left_pane

0xecea,	// (0x0001e2df) vkb2_top_entry_pane_g1_ParamLimits

0xecea,	// (0x0001e2df) vkb2_top_entry_pane_g1

0xecf8,	// (0x0001e2ed) vkb2_top_entry_pane_t1_ParamLimits

0xecf8,	// (0x0001e2ed) vkb2_top_entry_pane_t1

0x9564,	// (0x00018b59) vkb2_top_entry_pane_t2_ParamLimits

0x9564,	// (0x00018b59) vkb2_top_entry_pane_t2

0x9596,	// (0x00018b8b) vkb2_top_entry_pane_t3_ParamLimits

0x9596,	// (0x00018b8b) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x0001f399) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x0001f399) vkb2_top_entry_pane_t

0xc4e2,	// (0x0001bad7) vkb2_top_grid_right_pane_g1_ParamLimits

0xc4e2,	// (0x0001bad7) vkb2_top_grid_right_pane_g1

0x1ea8,	// (0x0001149d) vkb2_top_grid_right_pane_g2_ParamLimits

0x1ea8,	// (0x0001149d) vkb2_top_grid_right_pane_g2

0x1ec0,	// (0x000114b5) vkb2_top_grid_right_pane_g3_ParamLimits

0x1ec0,	// (0x000114b5) vkb2_top_grid_right_pane_g3

0xc4f8,	// (0x0001baed) vkb2_top_grid_right_pane_g4_ParamLimits

0xc4f8,	// (0x0001baed) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x0001f3a0) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x0001f3a0) vkb2_top_grid_right_pane_g

0x1eee,	// (0x000114e3) vkb2_top_cell_left_pane_g1

0x1f05,	// (0x000114fa) vkb2_cell_keypad_pane_g1_ParamLimits

0x1f05,	// (0x000114fa) vkb2_cell_keypad_pane_g1

0x95ba,	// (0x00018baf) vkb2_cell_keypad_pane_t1_ParamLimits

0x95ba,	// (0x00018baf) vkb2_cell_keypad_pane_t1

0x1f13,	// (0x00011508) vkb2_cell_bottom_grid_pane_ParamLimits

0x1f13,	// (0x00011508) vkb2_cell_bottom_grid_pane

0x1f4c,	// (0x00011541) vkb2_cell_bottom_grid_pane_g1

0xe9ac,	// (0x0001dfa1) aid_call2_pane_cp02

0xe9b4,	// (0x0001dfa9) aid_call_pane_cp02

0xe9bc,	// (0x0001dfb1) clock_digital_number_pane_cp10

0xe9c4,	// (0x0001dfb9) clock_digital_number_pane_cp11

0xe9cc,	// (0x0001dfc1) clock_digital_number_pane_cp12

0xe9d4,	// (0x0001dfc9) clock_digital_number_pane_cp13

0xe9dc,	// (0x0001dfd1) clock_digital_separator_pane_cp10

0x3973,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g1

0x3973,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g2

0xe9e4,	// (0x0001dfd9) popup_clock_digital_analogue_window_cp2_g3

0x3973,	// (0x00012f68) popup_clock_digital_analogue_window_cp2_g4

0xe9e4,	// (0x0001dfd9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x0001f355) popup_clock_digital_analogue_window_cp2_g

0xe9ec,	// (0x0001dfe1) popup_clock_digital_analogue_window_cp2_t1

0xe9fa,	// (0x0001dfef) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x0001f360) popup_clock_digital_analogue_window_cp2_t

0x7383,	// (0x00016978) clock_digital_number_pane_cp10_g1

0x7383,	// (0x00016978) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001f13c) clock_digital_number_pane_cp10_g

0x7383,	// (0x00016978) clock_digital_separator_pane_cp10_g1

0x7383,	// (0x00016978) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001f13c) clock_digital_separator_pane_cp10_g

0x8fef,	// (0x000185e4) uniindi_top_pane_g3

0x9000,	// (0x000185f5) uniindi_top_pane_g4

0x1d26,	// (0x0001131b) vkb2_row_keypad_pane_ParamLimits

0x1d26,	// (0x0001131b) vkb2_row_keypad_pane

0x1f68,	// (0x0001155d) vkb2_cell_t_keypad_pane_ParamLimits

0x1f68,	// (0x0001155d) vkb2_cell_t_keypad_pane

0x1f78,	// (0x0001156d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1f78,	// (0x0001156d) vkb2_cell_t_keypad_pane_cp08

0x1f8b,	// (0x00011580) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1f8b,	// (0x00011580) vkb2_cell_t_keypad_pane_cp09

0x1f9f,	// (0x00011594) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1f9f,	// (0x00011594) vkb2_cell_t_keypad_pane_cp01

0x1fb0,	// (0x000115a5) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1fb0,	// (0x000115a5) vkb2_cell_t_keypad_pane_cp02

0x1fc1,	// (0x000115b6) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1fc1,	// (0x000115b6) vkb2_cell_t_keypad_pane_cp03

0x1fd2,	// (0x000115c7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1fd2,	// (0x000115c7) vkb2_cell_t_keypad_pane_cp04

0x1fe3,	// (0x000115d8) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1fe3,	// (0x000115d8) vkb2_cell_t_keypad_pane_cp05

0x1ff4,	// (0x000115e9) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1ff4,	// (0x000115e9) vkb2_cell_t_keypad_pane_cp06

0x2005,	// (0x000115fa) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2005,	// (0x000115fa) vkb2_cell_t_keypad_pane_cp07

0x2016,	// (0x0001160b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2016,	// (0x0001160b) vkb2_cell_t_keypad_pane_cp10

0x17cb,	// (0x00010dc0) vkb2_cell_t_keypad_pane_g1

0x95d1,	// (0x00018bc6) vkb2_cell_t_keypad_pane_t1

0x01e2,	// (0x0000f7d7) popup_grid_graphic2_window

0xed31,	// (0x0001e326) aid_size_cell_graphic2_ParamLimits

0xed31,	// (0x0001e326) aid_size_cell_graphic2

0xed6f,	// (0x0001e364) bg_popup_window_pane_cp21_ParamLimits

0xed6f,	// (0x0001e364) bg_popup_window_pane_cp21

0xed7d,	// (0x0001e372) graphic2_pages_pane_ParamLimits

0xed7d,	// (0x0001e372) graphic2_pages_pane

0xedd3,	// (0x0001e3c8) grid_graphic2_control_pane_ParamLimits

0xedd3,	// (0x0001e3c8) grid_graphic2_control_pane

0xee1b,	// (0x0001e410) grid_graphic2_pane_ParamLimits

0xee1b,	// (0x0001e410) grid_graphic2_pane

0xeea2,	// (0x0001e497) cell_graphic2_pane

0x01e2,	// (0x0000f7d7) main_comp_mode_pane

0x880a,	// (0x00017dff) list_ai3_gene_pane_ParamLimits

0xe6f0,	// (0x0001dce5) bg_popup_window_pane_cp19_ParamLimits

0x8c43,	// (0x00018238) bg_touch_area_indi_pane_ParamLimits

0x8c43,	// (0x00018238) bg_touch_area_indi_pane

0x8c59,	// (0x0001824e) bg_touch_area_indi_pane_cp01_ParamLimits

0x8c59,	// (0x0001824e) bg_touch_area_indi_pane_cp01

0x8c6f,	// (0x00018264) bg_touch_area_indi_pane_cp02_ParamLimits

0x8c6f,	// (0x00018264) bg_touch_area_indi_pane_cp02

0x8c87,	// (0x0001827c) bg_touch_area_indi_pane_cp03_ParamLimits

0x8c87,	// (0x0001827c) bg_touch_area_indi_pane_cp03

0x8ca1,	// (0x00018296) popup_slider_window_g1_ParamLimits

0x8cbd,	// (0x000182b2) popup_slider_window_g2_ParamLimits

0x8cd9,	// (0x000182ce) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x0001f2ea) popup_slider_window_g_ParamLimits

0x8d35,	// (0x0001832a) popup_slider_window_t1_ParamLimits

0x8da9,	// (0x0001839e) small_volume_slider_vertical_pane_ParamLimits

0xeea2,	// (0x0001e497) cell_graphic2_pane_ParamLimits

0xeeff,	// (0x0001e4f4) bg_button_pane_cp10_ParamLimits

0xeeff,	// (0x0001e4f4) bg_button_pane_cp10

0xef12,	// (0x0001e507) bg_button_pane_cp11_ParamLimits

0xef12,	// (0x0001e507) bg_button_pane_cp11

0xef25,	// (0x0001e51a) graphic2_pages_pane_g1_ParamLimits

0xef25,	// (0x0001e51a) graphic2_pages_pane_g1

0xef40,	// (0x0001e535) graphic2_pages_pane_g2_ParamLimits

0xef40,	// (0x0001e535) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x0001f3ae) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x0001f3ae) graphic2_pages_pane_g

0xef58,	// (0x0001e54d) graphic2_pages_pane_t1_ParamLimits

0xef58,	// (0x0001e54d) graphic2_pages_pane_t1

0xef70,	// (0x0001e565) cell_graphic2_control_pane_ParamLimits

0xef70,	// (0x0001e565) cell_graphic2_control_pane

0xefa2,	// (0x0001e597) cell_graphic2_pane_g1_ParamLimits

0xefa2,	// (0x0001e597) cell_graphic2_pane_g1

0xd308,	// (0x0001c8fd) cell_graphic2_pane_g2_ParamLimits

0xd308,	// (0x0001c8fd) cell_graphic2_pane_g2

0xecdd,	// (0x0001e2d2) cell_graphic2_pane_g3_ParamLimits

0xecdd,	// (0x0001e2d2) cell_graphic2_pane_g3

0xd315,	// (0x0001c90a) cell_graphic2_pane_g4_ParamLimits

0xd315,	// (0x0001c90a) cell_graphic2_pane_g4

0xefaf,	// (0x0001e5a4) cell_graphic2_pane_g5_ParamLimits

0xefaf,	// (0x0001e5a4) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x0001f3b3) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x0001f3b3) cell_graphic2_pane_g

0xefcf,	// (0x0001e5c4) cell_graphic2_pane_t1_ParamLimits

0xefcf,	// (0x0001e5c4) cell_graphic2_pane_t1

0x565e,	// (0x00014c53) grid_highlight_pane_cp11_ParamLimits

0x565e,	// (0x00014c53) grid_highlight_pane_cp11

0x264e,	// (0x00011c43) bg_button_pane_cp05

0xf004,	// (0x0001e5f9) cell_graphic2_control_pane_g1

0x7383,	// (0x00016978) bg_touch_area_indi_pane_g1

0x98a1,	// (0x00018e96) aid_cmod_rocker_key_size

0x98ab,	// (0x00018ea0) aid_cmode_itu_key_size

0x98b5,	// (0x00018eaa) main_cmode_video_pane

0x98bf,	// (0x00018eb4) main_comp_mode_itu_pane

0x98cb,	// (0x00018ec0) main_comp_mode_rocker_pane

0x98d7,	// (0x00018ecc) cell_cmode_rocker_pane_ParamLimits

0x98d7,	// (0x00018ecc) cell_cmode_rocker_pane

0x98e9,	// (0x00018ede) cell_cmode_itu_pane_ParamLimits

0x98e9,	// (0x00018ede) cell_cmode_itu_pane

0x3192,	// (0x00012787) bg_button_pane_cp06_ParamLimits

0x3192,	// (0x00012787) bg_button_pane_cp06

0x7601,	// (0x00016bf6) cell_cmode_rocker_pane_g1_ParamLimits

0x7601,	// (0x00016bf6) cell_cmode_rocker_pane_g1

0x8e4d,	// (0x00018442) cell_cmode_rocker_pane_g2_ParamLimits

0x8e4d,	// (0x00018442) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x0001f3c3) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x0001f3c3) cell_cmode_rocker_pane_g

0x22b7,	// (0x000118ac) bg_button_pane_cp07

0x98fe,	// (0x00018ef3) cell_cmode_itu_pane_g1

0x9907,	// (0x00018efc) cell_cmode_itu_pane_t1

0x9915,	// (0x00018f0a) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x0001f3c8) cell_cmode_itu_pane_t

0x9072,	// (0x00018667) aid_touch_ctrl_left

0x907a,	// (0x0001866f) aid_touch_ctrl_right

0x22b7,	// (0x000118ac) compa_mode_pane

0xf02a,	// (0x0001e61f) aid_cmod_rocker_key_size_cp

0xf034,	// (0x0001e629) aid_cmode_itu_key_size_cp

0x9937,	// (0x00018f2c) compa_mode_pane_g1

0x993f,	// (0x00018f34) compa_mode_pane_g2

0x9947,	// (0x00018f3c) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x0001f3cd) compa_mode_pane_g

0xf03e,	// (0x0001e633) main_comp_mode_itu_pane_cp

0xf046,	// (0x0001e63b) main_comp_mode_rocker_pane_cp

0xf04e,	// (0x0001e643) cell_cmode_itu_pane_cp_ParamLimits

0xf04e,	// (0x0001e643) cell_cmode_itu_pane_cp

0xf063,	// (0x0001e658) cell_cmode_rocker_pane_cp_ParamLimits

0xf063,	// (0x0001e658) cell_cmode_rocker_pane_cp

0x3192,	// (0x00012787) bg_button_pane_cp06_cp_ParamLimits

0x3192,	// (0x00012787) bg_button_pane_cp06_cp

0x7601,	// (0x00016bf6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7601,	// (0x00016bf6) cell_cmode_rocker_pane_g1_cp

0x7383,	// (0x00016978) cell_cmode_rocker_pane_g2_cp

0x22b7,	// (0x000118ac) bg_button_pane_cp07_cp

0xf075,	// (0x0001e66a) cell_cmode_itu_pane_g1_cp

0xf07e,	// (0x0001e673) cell_cmode_itu_pane_t1_cp

0xf07e,	// (0x0001e673) cell_cmode_itu_pane_t2_cp

0xdb2f,	// (0x0001d124) settings_code_pane_cp2

0x23ab,	// (0x000119a0) bg_popup_window_pane_cp3_ParamLimits

0x2828,	// (0x00011e1d) heading_pane_cp3_ParamLimits

0x2834,	// (0x00011e29) listscroll_popup_graphic_pane_ParamLimits

0x1574,	// (0x00010b69) fep_hwr_aid_pane_ParamLimits

0x19ec,	// (0x00010fe1) aid_touch_sctrl_top_ParamLimits

0x1a07,	// (0x00010ffc) sctrl_sk_top_pane_g1_ParamLimits

0x17cb,	// (0x00010dc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x0001f303) sctrl_sk_top_pane_g_ParamLimits

0x1a14,	// (0x00011009) sctrl_sk_top_pane_t1_ParamLimits

0x19ec,	// (0x00010fe1) aid_touch_sctrl_bottom_ParamLimits

0x1a14,	// (0x00011009) sctrl_sk_bottom_pane_t1_ParamLimits

0x8fbb,	// (0x000185b0) aid_area_touch_clock

0xc326,	// (0x0001b91b) aid_vkb2_area_top_pane_cell_ParamLimits

0xc326,	// (0x0001b91b) aid_vkb2_area_top_pane_cell

0xc3d1,	// (0x0001b9c6) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc3d1,	// (0x0001b9c6) aid_vkb2_area_bottom_pane_cell

0x951c,	// (0x00018b11) popup_char_count_window

0x9994,	// (0x00018f89) popup_char_count_window_g1

0x999d,	// (0x00018f92) popup_char_count_window_g2

0x99a6,	// (0x00018f9b) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x0001f3d4) popup_char_count_window_g

0x99af,	// (0x00018fa4) popup_char_count_window_t1

0x1ac3,	// (0x000110b8) popup_fep_char_preview_window_ParamLimits

0x1ac3,	// (0x000110b8) popup_fep_char_preview_window

0xc346,	// (0x0001b93b) vkb2_top_candi_pane_ParamLimits

0xc346,	// (0x0001b93b) vkb2_top_candi_pane

0xf08c,	// (0x0001e681) cell_vkb2_top_candi_pane_ParamLimits

0xf08c,	// (0x0001e681) cell_vkb2_top_candi_pane

0x202b,	// (0x00011620) bg_popup_fep_char_preview_window_ParamLimits

0x202b,	// (0x00011620) bg_popup_fep_char_preview_window

0x2039,	// (0x0001162e) popup_fep_char_preview_window_t1_ParamLimits

0x2039,	// (0x0001162e) popup_fep_char_preview_window_t1

0x9a2b,	// (0x00019020) bg_popup_fep_char_preview_window_g1

0x9a33,	// (0x00019028) bg_popup_fep_char_preview_window_g2

0x9a3b,	// (0x00019030) bg_popup_fep_char_preview_window_g3

0x9a43,	// (0x00019038) bg_popup_fep_char_preview_window_g4

0x9a4b,	// (0x00019040) bg_popup_fep_char_preview_window_g5

0x2073,	// (0x00011668) bg_popup_fep_char_preview_window_g6

0x9a53,	// (0x00019048) bg_popup_fep_char_preview_window_g7

0x9a5b,	// (0x00019050) bg_popup_fep_char_preview_window_g8

0x9a63,	// (0x00019058) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x0001f3db) bg_popup_fep_char_preview_window_g

0x17cb,	// (0x00010dc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x17cb,	// (0x00010dc0) cell_vkb2_top_candi_pane_g1

0x17d9,	// (0x00010dce) cell_vkb2_top_candi_pane_g2_ParamLimits

0x17d9,	// (0x00010dce) cell_vkb2_top_candi_pane_g2

0x9a0a,	// (0x00018fff) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9a0a,	// (0x00018fff) cell_vkb2_top_candi_pane_g3

0x207b,	// (0x00011670) cell_vkb2_top_candi_pane_g4_ParamLimits

0x207b,	// (0x00011670) cell_vkb2_top_candi_pane_g4

0x7a00,	// (0x00016ff5) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7a00,	// (0x00016ff5) cell_vkb2_top_candi_pane_g5

0x209c,	// (0x00011691) cell_vkb2_top_candi_pane_g6_ParamLimits

0x209c,	// (0x00011691) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x0001f3ee) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x0001f3ee) cell_vkb2_top_candi_pane_g

0x20aa,	// (0x0001169f) cell_vkb2_top_candi_pane_t1

0x13d4,	// (0x000109c9) aid_size_touch_slider_mark_ParamLimits

0x13d4,	// (0x000109c9) aid_size_touch_slider_mark

0xedb9,	// (0x0001e3ae) grid_graphic2_catg_pane_ParamLimits

0xedb9,	// (0x0001e3ae) grid_graphic2_catg_pane

0xee75,	// (0x0001e46a) popup_grid_graphic2_window_t1_ParamLimits

0xee75,	// (0x0001e46a) popup_grid_graphic2_window_t1

0xee8b,	// (0x0001e480) popup_grid_graphic2_window_t2_ParamLimits

0xee8b,	// (0x0001e480) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x0001f3a9) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x0001f3a9) popup_grid_graphic2_window_t

0x264e,	// (0x00011c43) bg_button_pane_cp05_ParamLimits

0xf004,	// (0x0001e5f9) cell_graphic2_control_pane_g1_ParamLimits

0xf0f2,	// (0x0001e6e7) cell_graphic2_catg_pane_ParamLimits

0xf0f2,	// (0x0001e6e7) cell_graphic2_catg_pane

0x22b7,	// (0x000118ac) bg_button_pane_cp12

0xf104,	// (0x0001e6f9) cell_graphic2_catg_pane_g1

0x8f87,	// (0x0001857c) cell_tb_ext_pane_t1_ParamLimits

0x1e65,	// (0x0001145a) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1e65,	// (0x0001145a) vkb2_top_cell_right_narrow_pane

0x1e7d,	// (0x00011472) vkb2_top_cell_right_wide_pane_ParamLimits

0x1e7d,	// (0x00011472) vkb2_top_cell_right_wide_pane

0x1566,	// (0x00010b5b) bg_vkb2_func_pane_ParamLimits

0x1566,	// (0x00010b5b) bg_vkb2_func_pane

0x1eee,	// (0x000114e3) vkb2_top_cell_left_pane_g1_ParamLimits

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp03

0x1f4c,	// (0x00011541) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x488b,	// (0x00013e80) bg_vkb2_func_pane_g1

0x4893,	// (0x00013e88) bg_vkb2_func_pane_g2

0x48a3,	// (0x00013e98) bg_vkb2_func_pane_g3

0x489b,	// (0x00013e90) bg_vkb2_func_pane_g4

0x48ab,	// (0x00013ea0) bg_vkb2_func_pane_g5

0x48b3,	// (0x00013ea8) bg_vkb2_func_pane_g6

0x48bb,	// (0x00013eb0) bg_vkb2_func_pane_g7

0x48c3,	// (0x00013eb8) bg_vkb2_func_pane_g8

0x4883,	// (0x00013e78) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x0001f3fb) bg_vkb2_func_pane_g

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp01

0x1eee,	// (0x000114e3) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1eee,	// (0x000114e3) vkb2_top_cell_right_wide_pane_g1

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1566,	// (0x00010b5b) bg_vkb2_fuc_pane_cp02

0x1f4c,	// (0x00011541) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1f4c,	// (0x00011541) vkb2_top_cell_right_narrow_pane_g1

0xe630,	// (0x0001dc25) aid_touch_area_decrease_ParamLimits

0xe630,	// (0x0001dc25) aid_touch_area_decrease

0xe664,	// (0x0001dc59) aid_touch_area_increase_ParamLimits

0xe664,	// (0x0001dc59) aid_touch_area_increase

0xe68c,	// (0x0001dc81) aid_touch_area_mute_ParamLimits

0xe68c,	// (0x0001dc81) aid_touch_area_mute

0xe6bc,	// (0x0001dcb1) aid_touch_area_slider_ParamLimits

0xe6bc,	// (0x0001dcb1) aid_touch_area_slider

0xe6fc,	// (0x0001dcf1) popup_slider_window_g4_ParamLimits

0xe6fc,	// (0x0001dcf1) popup_slider_window_g4

0xe724,	// (0x0001dd19) popup_slider_window_g5_ParamLimits

0xe724,	// (0x0001dd19) popup_slider_window_g5

0xe758,	// (0x0001dd4d) popup_slider_window_g6_ParamLimits

0xe758,	// (0x0001dd4d) popup_slider_window_g6

0x8d63,	// (0x00018358) popup_slider_window_t2_ParamLimits

0x8d63,	// (0x00018358) popup_slider_window_t2

0x0001,

0xfd02,	// (0x0001f2f7) popup_slider_window_t_ParamLimits

0xfd02,	// (0x0001f2f7) popup_slider_window_t

0xe774,	// (0x0001dd69) slider_pane_ParamLimits

0xe774,	// (0x0001dd69) slider_pane

0x9a86,	// (0x0001907b) slider_pane_g1_ParamLimits

0x9a86,	// (0x0001907b) slider_pane_g1

0x9a9a,	// (0x0001908f) slider_pane_g2_ParamLimits

0x9a9a,	// (0x0001908f) slider_pane_g2

0x9ab0,	// (0x000190a5) slider_pane_g3_ParamLimits

0x9ab0,	// (0x000190a5) slider_pane_g3

0x0003,

0xfe19,	// (0x0001f40e) slider_pane_g_ParamLimits

0xfe19,	// (0x0001f40e) slider_pane_g

0xbebb,	// (0x0001b4b0) popup_tb_float_extension_window_ParamLimits

0xbebb,	// (0x0001b4b0) popup_tb_float_extension_window

0x9adc,	// (0x000190d1) aid_size_cell_tb_float_ext

0x22b7,	// (0x000118ac) bg_popup_sub_window_cp28

0x9ae8,	// (0x000190dd) grid_tb_float_ext_pane

0x9af2,	// (0x000190e7) cell_tb_float_ext_pane_ParamLimits

0x9af2,	// (0x000190e7) cell_tb_float_ext_pane

0x9b0c,	// (0x00019101) cell_tb_float_ext_pane_g1

0x9b15,	// (0x0001910a) grid_highlight_pane_cp12

0xc12f,	// (0x0001b724) cell_last_hwr_side_pane_ParamLimits

0xc12f,	// (0x0001b724) cell_last_hwr_side_pane

0x7383,	// (0x00016978) cell_last_hwr_side_pane_g1

0x9b1e,	// (0x00019113) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x0001f417) cell_last_hwr_side_pane_g

0xc4ad,	// (0x0001baa2) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc4ad,	// (0x0001baa2) vkb2_area_bottom_space_btn_pane

0x17cb,	// (0x00010dc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x95d1,	// (0x00018bc6) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x20aa,	// (0x0001169f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x20c9,	// (0x000116be) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x20c9,	// (0x000116be) vkb2_area_bottom_space_btn_pane_g1

0x2103,	// (0x000116f8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2103,	// (0x000116f8) vkb2_area_bottom_space_btn_pane_g2

0x2139,	// (0x0001172e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2139,	// (0x0001172e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x0001f41c) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x0001f41c) vkb2_area_bottom_space_btn_pane_g

0x1629,	// (0x00010c1e) cel_fep_hwr_func_pane_ParamLimits

0x1629,	// (0x00010c1e) cel_fep_hwr_func_pane

0xc104,	// (0x0001b6f9) cell_hwr_side_button_pane_ParamLimits

0xc104,	// (0x0001b6f9) cell_hwr_side_button_pane

0x8fbb,	// (0x000185b0) aid_area_touch_clock_ParamLimits

0x264e,	// (0x00011c43) bg_uniindi_top_pane_ParamLimits

0x8fcd,	// (0x000185c2) uniindi_top_pane_g1_ParamLimits

0x8fe3,	// (0x000185d8) uniindi_top_pane_g2_ParamLimits

0x8fef,	// (0x000185e4) uniindi_top_pane_g3_ParamLimits

0x9000,	// (0x000185f5) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x0001f32f) uniindi_top_pane_g_ParamLimits

0x900d,	// (0x00018602) uniindi_top_pane_t1_ParamLimits

0x264e,	// (0x00011c43) bg_vkb2_func_pane_cp01_ParamLimits

0x264e,	// (0x00011c43) bg_vkb2_func_pane_cp01

0x9b27,	// (0x0001911c) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b27,	// (0x0001911c) cel_fep_hwr_func_pane_g1

0x264e,	// (0x00011c43) bg_vkb2_func_pane_cp02_ParamLimits

0x264e,	// (0x00011c43) bg_vkb2_func_pane_cp02

0x9b27,	// (0x0001911c) cell_hwr_side_button_pane_g1_ParamLimits

0x9b27,	// (0x0001911c) cell_hwr_side_button_pane_g1

0x46cd,	// (0x00013cc2) status_pane_g4_ParamLimits

0x46cd,	// (0x00013cc2) status_pane_g4

0x46e7,	// (0x00013cdc) status_pane_t1

0x70bd,	// (0x000166b2) form2_midp_gauge_slider_cont_pane

0x70c5,	// (0x000166ba) form2_midp_gauge_slider_pane_t1_ParamLimits

0xde5c,	// (0x0001d451) form2_midp_gauge_slider_pane_t2_ParamLimits

0xde6e,	// (0x0001d463) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0001f0ef) form2_midp_gauge_slider_pane_t_ParamLimits

0x70fb,	// (0x000166f0) form2_midp_slider_pane_ParamLimits

0x1a83,	// (0x00011078) aid_size_cell_func_vkb2_ParamLimits

0x1a83,	// (0x00011078) aid_size_cell_func_vkb2

0x9ac8,	// (0x000190bd) slider_pane_g4_ParamLimits

0x9ac8,	// (0x000190bd) slider_pane_g4

0xc50e,	// (0x0001bb03) form2_midp_gauge_slider_pane_t2_cp01

0xc51c,	// (0x0001bb11) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc51c,	// (0x0001bb11) form2_midp_gauge_slider_pane_t3_cp01

0x21ae,	// (0x000117a3) form2_midp_slider_pane_cp01

0x22b7,	// (0x000118ac) navi_smil_pane

0x9b60,	// (0x00019155) navi_smil_pane_g1

0x9b68,	// (0x0001915d) navi_smil_pane_t1

0x9b35,	// (0x0001912a) form2_midp_slider_pane_g1

0x9b3e,	// (0x00019133) form2_midp_slider_pane_g2

0x9b46,	// (0x0001913b) form2_midp_slider_pane_g3

0x9b35,	// (0x0001912a) form2_midp_slider_pane_g4

0xf10d,	// (0x0001e702) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x0001f425) form2_midp_slider_pane_g

0x2173,	// (0x00011768) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2173,	// (0x00011768) vkb2_area_bottom_space_btn_pane_g4

0xd479,	// (0x0001ca6e) lc0_navi_pane_ParamLimits

0xd479,	// (0x0001ca6e) lc0_navi_pane

0xd4e3,	// (0x0001cad8) lc0_stat_indi_pane_ParamLimits

0xd4e3,	// (0x0001cad8) lc0_stat_indi_pane

0xd4f8,	// (0x0001caed) ls0_title_pane_ParamLimits

0xd4f8,	// (0x0001caed) ls0_title_pane

0x3192,	// (0x00012787) bg_popup_sub_pane_cp14_ParamLimits

0x8fa2,	// (0x00018597) list_uniindi_pane_ParamLimits

0x8fae,	// (0x000185a3) uniindi_top_pane_ParamLimits

0x904a,	// (0x0001863f) list_single_uniindi_pane_g1_ParamLimits

0x905d,	// (0x00018652) list_single_uniindi_pane_t1_ParamLimits

0xc539,	// (0x0001bb2e) lc0_stat_clock_pane_ParamLimits

0xc539,	// (0x0001bb2e) lc0_stat_clock_pane

0xf118,	// (0x0001e70d) lc0_stat_indi_pane_g1_ParamLimits

0xf118,	// (0x0001e70d) lc0_stat_indi_pane_g1

0xf125,	// (0x0001e71a) lc0_stat_indi_pane_g2_ParamLimits

0xf125,	// (0x0001e71a) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x0001f430) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x0001f430) lc0_stat_indi_pane_g

0xc546,	// (0x0001bb3b) lc0_uni_indicator_pane_ParamLimits

0xc546,	// (0x0001bb3b) lc0_uni_indicator_pane

0xf132,	// (0x0001e727) ls0_title_pane_g1_ParamLimits

0xf132,	// (0x0001e727) ls0_title_pane_g1

0xf146,	// (0x0001e73b) ls0_title_pane_t1_ParamLimits

0xf146,	// (0x0001e73b) ls0_title_pane_t1

0xc553,	// (0x0001bb48) lc0_uni_indicator_pane_g1_ParamLimits

0xc553,	// (0x0001bb48) lc0_uni_indicator_pane_g1

0x9bda,	// (0x000191cf) lc0_stat_clock_pane_t1

0x01e2,	// (0x0000f7d7) main_ai5_pane

0x9be8,	// (0x000191dd) ai5_sk_pane_ParamLimits

0x9be8,	// (0x000191dd) ai5_sk_pane

0xf174,	// (0x0001e769) cell_ai5_widget_pane_ParamLimits

0xf174,	// (0x0001e769) cell_ai5_widget_pane

0x9cab,	// (0x000192a0) aid_size_cell_widget_grid

0x9cc1,	// (0x000192b6) bg_ai5_widget_pane_ParamLimits

0x9cc1,	// (0x000192b6) bg_ai5_widget_pane

0x9d2b,	// (0x00019320) cell_ai5_widget_pane_g2

0x9d3b,	// (0x00019330) cell_ai5_widget_pane_g3

0x9d5a,	// (0x0001934f) cell_ai5_widget_pane_g4

0x9d66,	// (0x0001935b) cell_ai5_widget_pane_g5

0x9d72,	// (0x00019367) cell_ai5_widget_pane_g6

0x9d7e,	// (0x00019373) cell_ai5_widget_pane_g7

0x9dc6,	// (0x000193bb) cell_ai5_widget_pane_t1_ParamLimits

0x9dc6,	// (0x000193bb) cell_ai5_widget_pane_t1

0x9de3,	// (0x000193d8) cell_ai5_widget_pane_t2_ParamLimits

0x9de3,	// (0x000193d8) cell_ai5_widget_pane_t2

0x9dfb,	// (0x000193f0) cell_ai5_widget_pane_t3_ParamLimits

0x9dfb,	// (0x000193f0) cell_ai5_widget_pane_t3

0x9e13,	// (0x00019408) cell_ai5_widget_pane_t4_ParamLimits

0x9e13,	// (0x00019408) cell_ai5_widget_pane_t4

0x9e2d,	// (0x00019422) cell_ai5_widget_pane_t5_ParamLimits

0x9e2d,	// (0x00019422) cell_ai5_widget_pane_t5

0x9e4c,	// (0x00019441) cell_ai5_widget_pane_t6_ParamLimits

0x9e4c,	// (0x00019441) cell_ai5_widget_pane_t6

0x9e5e,	// (0x00019453) cell_ai5_widget_pane_t7_ParamLimits

0x9e5e,	// (0x00019453) cell_ai5_widget_pane_t7

0x9e77,	// (0x0001946c) cell_ai5_widget_pane_t8_ParamLimits

0x9e77,	// (0x0001946c) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x0001f44a) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x0001f44a) cell_ai5_widget_pane_t

0x9ec3,	// (0x000194b8) grid_ai5_widget_pane

0x3192,	// (0x00012787) highlight_cell_ai5_widget_pane_ParamLimits

0x3192,	// (0x00012787) highlight_cell_ai5_widget_pane

0xf1de,	// (0x0001e7d3) ai5_sk_left_pane

0xf1e8,	// (0x0001e7dd) ai5_sk_middle_pane

0xf1f2,	// (0x0001e7e7) ai5_sk_right_pane

0x9ef9,	// (0x000194ee) bg_ai5_widget_pane_g1_ParamLimits

0x9ef9,	// (0x000194ee) bg_ai5_widget_pane_g1

0x9f05,	// (0x000194fa) bg_ai5_widget_pane_g2_ParamLimits

0x9f05,	// (0x000194fa) bg_ai5_widget_pane_g2

0x9f11,	// (0x00019506) bg_ai5_widget_pane_g3_ParamLimits

0x9f11,	// (0x00019506) bg_ai5_widget_pane_g3

0x9f1d,	// (0x00019512) bg_ai5_widget_pane_g4_ParamLimits

0x9f1d,	// (0x00019512) bg_ai5_widget_pane_g4

0x9f29,	// (0x0001951e) bg_ai5_widget_pane_g5_ParamLimits

0x9f29,	// (0x0001951e) bg_ai5_widget_pane_g5

0x9f35,	// (0x0001952a) bg_ai5_widget_pane_g6_ParamLimits

0x9f35,	// (0x0001952a) bg_ai5_widget_pane_g6

0x9f41,	// (0x00019536) bg_ai5_widget_pane_g7_ParamLimits

0x9f41,	// (0x00019536) bg_ai5_widget_pane_g7

0x9f4d,	// (0x00019542) bg_ai5_widget_pane_g8_ParamLimits

0x9f4d,	// (0x00019542) bg_ai5_widget_pane_g8

0x9f59,	// (0x0001954e) bg_ai5_widget_pane_g9_ParamLimits

0x9f59,	// (0x0001954e) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x0001f45f) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x0001f45f) bg_ai5_widget_pane_g

0x9f8c,	// (0x00019581) cell_shortcut_ai5_widget_pane_ParamLimits

0x9f8c,	// (0x00019581) cell_shortcut_ai5_widget_pane

0x4004,	// (0x000135f9) bg_cell_shortcut_ai5_widget_pane

0x9f9d,	// (0x00019592) cell_grid_ai5_widget_pane_g1

0x9fa6,	// (0x0001959b) highlight_cell_shortcut_ai5_widget_pane

0x488b,	// (0x00013e80) ai5_sk_left_pane_g1

0x9fae,	// (0x000195a3) ai5_sk_left_pane_g2

0x9fb6,	// (0x000195ab) ai5_sk_left_pane_g3

0x9fbe,	// (0x000195b3) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x0001f472) ai5_sk_left_pane_g

0x9fc6,	// (0x000195bb) ai5_sk_left_pane_t1

0x4893,	// (0x00013e88) ai5_sk_right_pane_g1

0x9fd4,	// (0x000195c9) ai5_sk_right_pane_g2

0x9fdc,	// (0x000195d1) ai5_sk_right_pane_g3

0x9fe4,	// (0x000195d9) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x0001f47b) ai5_sk_right_pane_g

0x9fec,	// (0x000195e1) ai5_sk_right_pane_t1

0x4893,	// (0x00013e88) ai5_sk_middle_pane_g1

0x488b,	// (0x00013e80) ai5_sk_middle_pane_g2

0x48ab,	// (0x00013ea0) ai5_sk_middle_pane_g3

0x9fdc,	// (0x000195d1) ai5_sk_middle_pane_g4

0x9fb6,	// (0x000195ab) ai5_sk_middle_pane_g5

0x9ffa,	// (0x000195ef) ai5_sk_middle_pane_g6

0xf1fc,	// (0x0001e7f1) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x0001f484) ai5_sk_middle_pane_g

0xd365,	// (0x0001c95a) aid_touch_area_size_lc0_ParamLimits

0xd365,	// (0x0001c95a) aid_touch_area_size_lc0

0x17fa,	// (0x00010def) cell_hwr_candidate_pane_t1_ParamLimits

0x43b6,	// (0x000139ab) aid_touch_navi_pane

0xd5eb,	// (0x0001cbe0) status_dt_navi_pane_ParamLimits

0xd5eb,	// (0x0001cbe0) status_dt_navi_pane

0xd603,	// (0x0001cbf8) status_dt_sta_pane_ParamLimits

0xd603,	// (0x0001cbf8) status_dt_sta_pane

0xf204,	// (0x0001e7f9) dt_sta_controll_pane

0xf211,	// (0x0001e806) dt_sta_indi_pane

0xf21e,	// (0x0001e813) dt_sta_title_pane

0x264e,	// (0x00011c43) bg_dt_sta_indi_pane_ParamLimits

0x264e,	// (0x00011c43) bg_dt_sta_indi_pane

0xa035,	// (0x0001962a) dt_sta_battery_pane

0xa03d,	// (0x00019632) dt_sta_indi_pane_g1

0xa046,	// (0x0001963b) dt_sta_indi_pane_g2

0xa04f,	// (0x00019644) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x0001f493) dt_sta_indi_pane_g

0xa058,	// (0x0001964d) dt_sta_signal_pane

0x3192,	// (0x00012787) bg_dt_sta_title_pane_ParamLimits

0x3192,	// (0x00012787) bg_dt_sta_title_pane

0xa061,	// (0x00019656) dt_sta_title_pane_g1

0xa069,	// (0x0001965e) dt_sta_title_pane_t1_ParamLimits

0xa069,	// (0x0001965e) dt_sta_title_pane_t1

0x22b7,	// (0x000118ac) bg_dt_sta_control_pane

0xa07e,	// (0x00019673) dt_sta_controll_pane_g1

0xa087,	// (0x0001967c) bg_dt_sta_title_pane_g1

0xa090,	// (0x00019685) bg_dt_sta_title_pane_g2

0xa099,	// (0x0001968e) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x0001f49a) bg_dt_sta_title_pane_g

0x7383,	// (0x00016978) bg_dt_sta_indi_pane_g1

0xa0a2,	// (0x00019697) dt_sta_signal_pane_g1

0xa0aa,	// (0x0001969f) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x0001f4a1) dt_sta_signal_pane_g

0xa0b2,	// (0x000196a7) dt_sta_battery_pane_g1

0xa0bb,	// (0x000196b0) dt_sta_battery_pane_t1

0x7383,	// (0x00016978) bg_dt_sta_control_pane_g1

0x3a7f,	// (0x00013074) fep_china_uni_eep_pane

0x3a87,	// (0x0001307c) fep_china_uni_entry_pane_ParamLimits

0x3a97,	// (0x0001308c) popup_fep_china_uni_window_g1_ParamLimits

0x3aa7,	// (0x0001309c) popup_fep_china_uni_window_g2_ParamLimits

0x3aa7,	// (0x0001309c) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001ed13) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001ed13) popup_fep_china_uni_window_g

0xa0ca,	// (0x000196bf) fep_china_uni_eep_pane_g1

0xa0d2,	// (0x000196c7) fep_china_uni_eep_pane_t1

0x9b57,	// (0x0001914c) aid_touch_area_size_smil_player

0x4502,	// (0x00013af7) lc0_clock_pane

0x46db,	// (0x00013cd0) status_pane_g5_ParamLimits

0x46db,	// (0x00013cd0) status_pane_g5

0xba3d,	// (0x0001b032) popup_keymap_window

0x46a1,	// (0x00013c96) status_icon_pane

0x9d3b,	// (0x00019330) cell_ai5_widget_pane_g3_ParamLimits

0x9d5a,	// (0x0001934f) cell_ai5_widget_pane_g4_ParamLimits

0x9d66,	// (0x0001935b) cell_ai5_widget_pane_g5_ParamLimits

0x9d8a,	// (0x0001937f) cell_ai5_widget_pane_g8_ParamLimits

0x9d8a,	// (0x0001937f) cell_ai5_widget_pane_g8

0x9d9e,	// (0x00019393) cell_ai5_widget_pane_g9_ParamLimits

0x9d9e,	// (0x00019393) cell_ai5_widget_pane_g9

0x9db2,	// (0x000193a7) cell_ai5_widget_pane_g10_ParamLimits

0x9db2,	// (0x000193a7) cell_ai5_widget_pane_g10

0xa0e1,	// (0x000196d6) status_icon_pane_g1

0x22b7,	// (0x000118ac) bg_popup_sub_pane_cp13

0xa0e9,	// (0x000196de) popup_keymap_window_t1

0xd2bf,	// (0x0001c8b4) control_pane_g6_ParamLimits

0xd2bf,	// (0x0001c8b4) control_pane_g6

0xd2cc,	// (0x0001c8c1) control_pane_g7_ParamLimits

0xd2cc,	// (0x0001c8c1) control_pane_g7

0xd2d9,	// (0x0001c8ce) control_pane_g8_ParamLimits

0xd2d9,	// (0x0001c8ce) control_pane_g8

0xf204,	// (0x0001e7f9) dt_sta_controll_pane_ParamLimits

0xf211,	// (0x0001e806) dt_sta_indi_pane_ParamLimits

0xf21e,	// (0x0001e813) dt_sta_title_pane_ParamLimits

0x2b69,	// (0x0001215e) aid_size_touch_scroll_bar_cale

0x02bb,	// (0x0000f8b0) popup_discreet_window_ParamLimits

0x02bb,	// (0x0000f8b0) popup_discreet_window

0xb6a6,	// (0x0001ac9b) popup_sk_window

0x4fea,	// (0x000145df) bg_popup_sub_pane_cp28_ParamLimits

0x4fea,	// (0x000145df) bg_popup_sub_pane_cp28

0xa0f7,	// (0x000196ec) popup_discreet_window_g1_ParamLimits

0xa0f7,	// (0x000196ec) popup_discreet_window_g1

0xa117,	// (0x0001970c) popup_discreet_window_t1_ParamLimits

0xa117,	// (0x0001970c) popup_discreet_window_t1

0xa135,	// (0x0001972a) popup_discreet_window_t2_ParamLimits

0xa135,	// (0x0001972a) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x0001f4a6) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x0001f4a6) popup_discreet_window_t

0x21e5,	// (0x000117da) popup_sk_window_g1

0x21ef,	// (0x000117e4) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x0001f4ad) popup_sk_window_g

0x21f9,	// (0x000117ee) popup_sk_window_t1

0x2207,	// (0x000117fc) popup_sk_window_t1_copy1

0x9d2b,	// (0x00019320) cell_ai5_widget_pane_g2_ParamLimits

0x9e89,	// (0x0001947e) cell_ai5_widget_pane_t9_ParamLimits

0x9e89,	// (0x0001947e) cell_ai5_widget_pane_t9

0x22b7,	// (0x000118ac) main_fep_fshwr2_pane

0xc57a,	// (0x0001bb6f) aid_fshwr2_btn_pane

0xc589,	// (0x0001bb7e) aid_fshwr2_syb_pane

0xc59b,	// (0x0001bb90) aid_fshwr2_txt_pane

0xc5aa,	// (0x0001bb9f) fshwr2_func_candi_pane

0xc5bb,	// (0x0001bbb0) fshwr2_hwr_syb_pane

0xc5d6,	// (0x0001bbcb) fshwr2_icf_pane

0x22b7,	// (0x000118ac) fshwr2_icf_bg_pane

0xf230,	// (0x0001e825) fshwr2_icf_pane_t1_ParamLimits

0xf230,	// (0x0001e825) fshwr2_icf_pane_t1

0x7383,	// (0x00016978) fshwr2_func_candi_pane_g1

0xa19e,	// (0x00019793) fshwr2_func_candi_row_pane_ParamLimits

0xa19e,	// (0x00019793) fshwr2_func_candi_row_pane

0xf248,	// (0x0001e83d) cell_fshwr2_syb_pane_ParamLimits

0xf248,	// (0x0001e83d) cell_fshwr2_syb_pane

0x7601,	// (0x00016bf6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7601,	// (0x00016bf6) fshwr2_hwr_syb_pane_g1

0x22b7,	// (0x000118ac) bg_popup_call_pane_cp01

0xa1c9,	// (0x000197be) fshwr2_func_candi_cell_pane_ParamLimits

0xa1c9,	// (0x000197be) fshwr2_func_candi_cell_pane

0xa1fa,	// (0x000197ef) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa1fa,	// (0x000197ef) fshwr2_func_candi_cell_bg_pane

0xa214,	// (0x00019809) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa214,	// (0x00019809) fshwr2_func_candi_cell_pane_g1

0xa23c,	// (0x00019831) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa23c,	// (0x00019831) fshwr2_func_candi_cell_pane_t1

0x22b7,	// (0x000118ac) bg_button_pane_cp08

0x4004,	// (0x000135f9) cell_fshwr2_syb_bg_pane

0xf262,	// (0x0001e857) cell_fshwr2_syb_bg_pane_g1

0xf26a,	// (0x0001e85f) cell_fshwr2_syb_bg_pane_t1

0x3192,	// (0x00012787) main_tmo_pane

0x5af9,	// (0x000150ee) uni_indicator_pane_g1_ParamLimits

0x5b0e,	// (0x00015103) uni_indicator_pane_g2_ParamLimits

0x5b24,	// (0x00015119) uni_indicator_pane_g3_ParamLimits

0x5b3a,	// (0x0001512f) uni_indicator_pane_g4_ParamLimits

0x5b3a,	// (0x0001512f) uni_indicator_pane_g4

0x5b4e,	// (0x00015143) uni_indicator_pane_g5_ParamLimits

0x5b4e,	// (0x00015143) uni_indicator_pane_g5

0x5b62,	// (0x00015157) uni_indicator_pane_g6_ParamLimits

0x5b62,	// (0x00015157) uni_indicator_pane_g6

0xf91d,	// (0x0001ef12) uni_indicator_pane_g_ParamLimits

0xe60c,	// (0x0001dc01) popup_tmo_note_window_ParamLimits

0xe60c,	// (0x0001dc01) popup_tmo_note_window

0x1a65,	// (0x0001105a) fshwr2_bg_pane

0xa22d,	// (0x00019822) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa22d,	// (0x00019822) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x0001f4b2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x0001f4b2) fshwr2_func_candi_cell_pane_g

0x7383,	// (0x00016978) bg_popup_window_pane_cp01

0xa266,	// (0x0001985b) bg_popup_window_pane_g1_cp01

0xa26f,	// (0x00019864) bg_popup_window_pane_cp22_ParamLimits

0xa26f,	// (0x00019864) bg_popup_window_pane_cp22

0xa27d,	// (0x00019872) listscroll_tmo_link_pane_ParamLimits

0xa27d,	// (0x00019872) listscroll_tmo_link_pane

0xa2bd,	// (0x000198b2) popup_tmo_note_window_g1_ParamLimits

0xa2bd,	// (0x000198b2) popup_tmo_note_window_g1

0xa2ca,	// (0x000198bf) tmo_note_info_pane_ParamLimits

0xa2ca,	// (0x000198bf) tmo_note_info_pane

0xf279,	// (0x0001e86e) list_tmo_note_info_pane_g1_ParamLimits

0xf279,	// (0x0001e86e) list_tmo_note_info_pane_g1

0xa2fb,	// (0x000198f0) list_tmo_note_info_pane_g2_ParamLimits

0xa2fb,	// (0x000198f0) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x0001f4b7) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x0001f4b7) list_tmo_note_info_pane_g

0xa317,	// (0x0001990c) list_tmo_note_info_text_pane_ParamLimits

0xa317,	// (0x0001990c) list_tmo_note_info_text_pane

0xa398,	// (0x0001998d) list_tmo_link_pane

0xa3a5,	// (0x0001999a) scroll_pane_cp20

0xa3b2,	// (0x000199a7) list_single_tmo_link_pane_ParamLimits

0xa3b2,	// (0x000199a7) list_single_tmo_link_pane

0xa3c2,	// (0x000199b7) list_single_tmo_link_pane_t1

0xa3d0,	// (0x000199c5) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3d0,	// (0x000199c5) list_tmo_note_info_text_pane_t1

0xceb9,	// (0x0001c4ae) aid_size_touch_scroll_bar_cp01_ParamLimits

0xceb9,	// (0x0001c4ae) aid_size_touch_scroll_bar_cp01

0xcde9,	// (0x0001c3de) aid_size_touch_slider_marker

0xb696,	// (0x0001ac8b) popup_settings_window_ParamLimits

0xb696,	// (0x0001ac8b) popup_settings_window

0x4366,	// (0x0001395b) popup_candi_list_indi_window

0x43b6,	// (0x000139ab) aid_touch_navi_pane_ParamLimits

0x19c0,	// (0x00010fb5) rs_clock_indi_pane

0x19c9,	// (0x00010fbe) sctrl_sk_bottom_pane_ParamLimits

0x19da,	// (0x00010fcf) sctrl_sk_top_pane_ParamLimits

0x1add,	// (0x000110d2) popup_fep_tooltip_window

0x9cab,	// (0x000192a0) aid_size_cell_widget_grid_ParamLimits

0x9d1f,	// (0x00019314) cell_ai5_widget_pane_g1_ParamLimits

0x9d1f,	// (0x00019314) cell_ai5_widget_pane_g1

0x9d72,	// (0x00019367) cell_ai5_widget_pane_g6_ParamLimits

0x9d7e,	// (0x00019373) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x0001f435) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x0001f435) cell_ai5_widget_pane_g

0x9ead,	// (0x000194a2) cell_ai5_widget_pane_t10_ParamLimits

0x9ead,	// (0x000194a2) cell_ai5_widget_pane_t10

0x9ec3,	// (0x000194b8) grid_ai5_widget_pane_ParamLimits

0x9f65,	// (0x0001955a) cell_contacts_ai5_widget_pane_ParamLimits

0x9f65,	// (0x0001955a) cell_contacts_ai5_widget_pane

0xa14a,	// (0x0001973f) popup_discreet_window_t3_ParamLimits

0xa14a,	// (0x0001973f) popup_discreet_window_t3

0x227f,	// (0x00011874) popup_fshwr2_char_preview_window_ParamLimits

0x227f,	// (0x00011874) popup_fshwr2_char_preview_window

0xf290,	// (0x0001e885) tmo_note_info_pane_t1

0xf2a5,	// (0x0001e89a) tmo_note_info_pane_t2

0xf2bc,	// (0x0001e8b1) tmo_note_info_pane_t3

0xa374,	// (0x00019969) tmo_note_info_pane_t4

0xa386,	// (0x0001997b) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x0001f4bc) tmo_note_info_pane_t

0xa398,	// (0x0001998d) list_tmo_link_pane_ParamLimits

0xa3a5,	// (0x0001999a) scroll_pane_cp20_ParamLimits

0x22b7,	// (0x000118ac) bg_popup_fep_char_preview_window_cp01

0xa3e9,	// (0x000199de) popup_fshwr2_char_preview_window_t1

0xa3f7,	// (0x000199ec) popup_candi_list_indi_window_g1

0xa400,	// (0x000199f5) bg_cell_contacts_ai5_widget_pane

0xa40c,	// (0x00019a01) cell_contacts_ai5_widget_pane_g1

0xa420,	// (0x00019a15) cell_contacts_ai5_widget_pane_g2

0xa42c,	// (0x00019a21) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x0001f4c7) cell_contacts_ai5_widget_pane_g

0xa43f,	// (0x00019a34) cell_contacts_ai5_widget_pane_t1

0x3192,	// (0x00012787) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf336,	// (0x0001e92b) settings_container_pane

0x4004,	// (0x000135f9) listscroll_set_pane_copy1

0x67be,	// (0x00015db3) scroll_pane_cp121_copy1

0xa4c2,	// (0x00019ab7) set_content_pane_copy1

0xf342,	// (0x0001e937) aid_height_set_list_copy1_ParamLimits

0xf342,	// (0x0001e937) aid_height_set_list_copy1

0x5d82,	// (0x00015377) aid_size_parent_copy1_ParamLimits

0x5d82,	// (0x00015377) aid_size_parent_copy1

0xf34e,	// (0x0001e943) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf34e,	// (0x0001e943) button_value_adjust_pane_cp6_copy1

0x434c,	// (0x00013941) list_highlight_pane_cp2_copy1_ParamLimits

0x434c,	// (0x00013941) list_highlight_pane_cp2_copy1

0xf362,	// (0x0001e957) list_set_pane_copy1_ParamLimits

0xf362,	// (0x0001e957) list_set_pane_copy1

0xf2d1,	// (0x0001e8c6) main_pane_set_t1_copy1_ParamLimits

0xf2d1,	// (0x0001e8c6) main_pane_set_t1_copy1

0xf30b,	// (0x0001e900) main_pane_set_t2_copy1_ParamLimits

0xf30b,	// (0x0001e900) main_pane_set_t2_copy1

0xf40f,	// (0x0001ea04) main_pane_set_t3_copy1

0xf41d,	// (0x0001ea12) main_pane_set_t4_copy1

0xf32a,	// (0x0001e91f) set_content_pane_g1_copy1_ParamLimits

0xf32a,	// (0x0001e91f) set_content_pane_g1_copy1

0xf42b,	// (0x0001ea20) setting_code_pane_copy1

0xa5bb,	// (0x00019bb0) setting_slider_graphic_pane_copy1

0xa5bb,	// (0x00019bb0) setting_slider_pane_copy1

0xa5bb,	// (0x00019bb0) setting_text_pane_copy1

0xa5bb,	// (0x00019bb0) setting_volume_pane_copy1

0xf42b,	// (0x0001ea20) settings_code_pane_cp2_copy1

0xf433,	// (0x0001ea28) settings_code_pane_cp_copy1_ParamLimits

0xf433,	// (0x0001ea28) settings_code_pane_cp_copy1

0xf447,	// (0x0001ea3c) volume_set_pane_copy1

0xf44f,	// (0x0001ea44) volume_set_pane_g10_copy1

0xf457,	// (0x0001ea4c) volume_set_pane_g1_copy1

0xf45f,	// (0x0001ea54) volume_set_pane_g2_copy1

0xf467,	// (0x0001ea5c) volume_set_pane_g3_copy1

0xf46f,	// (0x0001ea64) volume_set_pane_g4_copy1

0xf477,	// (0x0001ea6c) volume_set_pane_g5_copy1

0xf47f,	// (0x0001ea74) volume_set_pane_g6_copy1

0xf487,	// (0x0001ea7c) volume_set_pane_g7_copy1

0xf48f,	// (0x0001ea84) volume_set_pane_g8_copy1

0xf497,	// (0x0001ea8c) volume_set_pane_g9_copy1

0x23ab,	// (0x000119a0) bg_set_opt_pane_cp_copy1_ParamLimits

0x23ab,	// (0x000119a0) bg_set_opt_pane_cp_copy1

0xa62f,	// (0x00019c24) setting_slider_pane_t1_copy1_ParamLimits

0xa62f,	// (0x00019c24) setting_slider_pane_t1_copy1

0xf49f,	// (0x0001ea94) setting_slider_pane_t2_copy1_ParamLimits

0xf49f,	// (0x0001ea94) setting_slider_pane_t2_copy1

0xf4b9,	// (0x0001eaae) setting_slider_pane_t3_copy1_ParamLimits

0xf4b9,	// (0x0001eaae) setting_slider_pane_t3_copy1

0xf4d1,	// (0x0001eac6) slider_set_pane_copy1_ParamLimits

0xf4d1,	// (0x0001eac6) slider_set_pane_copy1

0x32ca,	// (0x000128bf) set_opt_bg_pane_g1_copy2

0x32d2,	// (0x000128c7) set_opt_bg_pane_g2_copy2

0xa695,	// (0x00019c8a) set_opt_bg_pane_g3_copy2

0x32e2,	// (0x000128d7) set_opt_bg_pane_g4_copy2

0x32ea,	// (0x000128df) set_opt_bg_pane_g5_copy2

0x32f2,	// (0x000128e7) set_opt_bg_pane_g6_copy2

0xf4e7,	// (0x0001eadc) set_opt_bg_pane_g7_copy2

0xa6a7,	// (0x00019c9c) set_opt_bg_pane_g8_copy2

0xa6b1,	// (0x00019ca6) set_opt_bg_pane_g9_copy2

0xa6bb,	// (0x00019cb0) aid_size_touch_slider_mark_copy1_ParamLimits

0xa6bb,	// (0x00019cb0) aid_size_touch_slider_mark_copy1

0xa6cf,	// (0x00019cc4) slider_set_pane_g1_copy1

0xa6d8,	// (0x00019ccd) slider_set_pane_g2_copy1

0x5eb4,	// (0x000154a9) slider_set_pane_g3_copy1_ParamLimits

0x5eb4,	// (0x000154a9) slider_set_pane_g3_copy1

0x5ec8,	// (0x000154bd) slider_set_pane_g4_copy1_ParamLimits

0x5ec8,	// (0x000154bd) slider_set_pane_g4_copy1

0x5ee0,	// (0x000154d5) slider_set_pane_g5_copy1_ParamLimits

0x5ee0,	// (0x000154d5) slider_set_pane_g5_copy1

0x5eb4,	// (0x000154a9) slider_set_pane_g6_copy1_ParamLimits

0x5eb4,	// (0x000154a9) slider_set_pane_g6_copy1

0xf4ef,	// (0x0001eae4) slider_set_pane_g7_copy1_ParamLimits

0xf4ef,	// (0x0001eae4) slider_set_pane_g7_copy1

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp2_copy1

0xa6f6,	// (0x00019ceb) setting_slider_graphic_pane_g1_copy1

0xf505,	// (0x0001eafa) setting_slider_graphic_pane_t1_copy1

0xf515,	// (0x0001eb0a) setting_slider_graphic_pane_t2_copy1

0xf525,	// (0x0001eb1a) slider_set_pane_cp_copy1

0xa72f,	// (0x00019d24) input_focus_pane_cp1_copy1

0xa738,	// (0x00019d2d) list_set_text_pane_copy1

0xa740,	// (0x00019d35) setting_text_pane_g1_copy1

0x2404,	// (0x000119f9) set_text_pane_t1_copy1

0xa72f,	// (0x00019d24) input_focus_pane_cp2_copy1

0xa740,	// (0x00019d35) setting_code_pane_g1_copy1

0xf52d,	// (0x0001eb22) setting_code_pane_t1_copy1

0x65ea,	// (0x00015bdf) list_set_graphic_pane_copy1

0x22cb,	// (0x000118c0) bg_set_opt_pane_cp4_copy1

0xd16c,	// (0x0001c761) list_set_graphic_pane_g1_copy1_ParamLimits

0xd16c,	// (0x0001c761) list_set_graphic_pane_g1_copy1

0xf53b,	// (0x0001eb30) list_set_graphic_pane_g2_copy1

0xd184,	// (0x0001c779) list_set_graphic_pane_t1_copy1_ParamLimits

0xd184,	// (0x0001c779) list_set_graphic_pane_t1_copy1

0x7383,	// (0x00016978) rs_clock_indi_pane_g1

0xa771,	// (0x00019d66) rs_clock_indi_pane_t1

0xa77f,	// (0x00019d74) rs_indi_pane

0xa787,	// (0x00019d7c) rs_indi_pane_g1

0xa790,	// (0x00019d85) rs_indi_pane_g2

0xa799,	// (0x00019d8e) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x0001f4ce) rs_indi_pane_g

0x4004,	// (0x000135f9) bg_popup_preview_window_pane_cp03

0xa7a2,	// (0x00019d97) popup_fep_tooltip_window_t1

0x81e6,	// (0x000177db) popup_note2_window_g2_ParamLimits

0x81e6,	// (0x000177db) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0001f267) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0001f267) popup_note2_window_g

0x87d0,	// (0x00017dc5) bg_popup_sub_pane_cp11_ParamLimits

0x87dd,	// (0x00017dd2) cell_ai3_links_pane_g1_ParamLimits

0x87f4,	// (0x00017de9) cell_ai3_links_pane_t1

0x2404,	// (0x000119f9) set_text_pane_t1_copy1_ParamLimits

0xd1f8,	// (0x0001c7ed) cell_graphic_popup_pane_cp2_ParamLimits

0xd1f8,	// (0x0001c7ed) cell_graphic_popup_pane_cp2

0xf543,	// (0x0001eb38) cell_graphic_popup_pane_g1_cp2

0x297c,	// (0x00011f71) cell_graphic_popup_pane_g2_cp2

0xa7b8,	// (0x00019dad) cell_graphic_popup_pane_g3_cp2

0xa7c0,	// (0x00019db5) cell_graphic_popup_pane_t2_cp2

0x298d,	// (0x00011f82) grid_highlight_pane_cp3_cp2

0x36bb,	// (0x00012cb0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3192,	// (0x00012787) main_tmo_pane_ParamLimits

0xe600,	// (0x0001dbf5) popup_tmo_big_image_note_window

0x9d0f,	// (0x00019304) cell_ai5_widget_list_pane

0x9d17,	// (0x0001930c) cell_ai5_widget_lrg_icon_pane

0xf290,	// (0x0001e885) tmo_note_info_pane_t1_ParamLimits

0xf2a5,	// (0x0001e89a) tmo_note_info_pane_t2_ParamLimits

0xf2bc,	// (0x0001e8b1) tmo_note_info_pane_t3_ParamLimits

0xa374,	// (0x00019969) tmo_note_info_pane_t4_ParamLimits

0xa386,	// (0x0001997b) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x0001f4bc) tmo_note_info_pane_t_ParamLimits

0xf336,	// (0x0001e92b) settings_container_pane_ParamLimits

0xa727,	// (0x00019d1c) indicator_popup_pane_cp5

0xa727,	// (0x00019d1c) indicator_popup_pane_cp6

0x65ea,	// (0x00015bdf) list_set_graphic_pane_copy1_ParamLimits

0x22b7,	// (0x000118ac) bg_popup_window_pane_cp23

0xa7ce,	// (0x00019dc3) popup_tmo_big_image_note_window_g1

0xa7d8,	// (0x00019dcd) popup_tmo_big_image_note_window_t1

0xa7e8,	// (0x00019ddd) popup_tmo_big_image_note_window_t2

0xa7f8,	// (0x00019ded) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x0001f4d5) popup_tmo_big_image_note_window_t

0xa808,	// (0x00019dfd) cell_ai5_widget_lrg_icon_pane_g1

0xa810,	// (0x00019e05) cell_ai5_widget_lrg_icon_pane_t1

0xa81e,	// (0x00019e13) cell_ai5_widget_list_row_pane_ParamLimits

0xa81e,	// (0x00019e13) cell_ai5_widget_list_row_pane

0xa837,	// (0x00019e2c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa837,	// (0x00019e2c) cell_ai5_widget_list_row_pane_g1

0xa844,	// (0x00019e39) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa844,	// (0x00019e39) cell_ai5_widget_list_row_pane_t1

0xa85c,	// (0x00019e51) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa85c,	// (0x00019e51) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee7,	// (0x0001f4dc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x0001f4dc) cell_ai5_widget_list_row_pane_t

0x01e2,	// (0x0000f7d7) main_fep_vtchi_ss_pane

0xa893,	// (0x00019e88) popup_fep_char_pre_window

0xa89b,	// (0x00019e90) popup_fep_ituss_window

0xa8bc,	// (0x00019eb1) popup_fep_vkbss_window

0xa8db,	// (0x00019ed0) grid_vkbss_keypad_pane_ParamLimits

0xa8db,	// (0x00019ed0) grid_vkbss_keypad_pane

0xa8eb,	// (0x00019ee0) ituss_keypad_pane

0xa907,	// (0x00019efc) aid_vkbss_key_offset_ParamLimits

0xa907,	// (0x00019efc) aid_vkbss_key_offset

0xa913,	// (0x00019f08) cell_vkbss_key_pane_ParamLimits

0xa913,	// (0x00019f08) cell_vkbss_key_pane

0xa929,	// (0x00019f1e) bg_cell_vkbss_key_g1_ParamLimits

0xa929,	// (0x00019f1e) bg_cell_vkbss_key_g1

0xa935,	// (0x00019f2a) cell_vkbss_key_3p_pane_ParamLimits

0xa935,	// (0x00019f2a) cell_vkbss_key_3p_pane

0xa94f,	// (0x00019f44) cell_vkbss_key_g1_ParamLimits

0xa94f,	// (0x00019f44) cell_vkbss_key_g1

0xa969,	// (0x00019f5e) cell_vkbss_key_t1_ParamLimits

0xa969,	// (0x00019f5e) cell_vkbss_key_t1

0xa994,	// (0x00019f89) cell_ituss_key_pane_ParamLimits

0xa994,	// (0x00019f89) cell_ituss_key_pane

0xa9a5,	// (0x00019f9a) bg_cell_ituss_key_g1_ParamLimits

0xa9a5,	// (0x00019f9a) bg_cell_ituss_key_g1

0xa9b1,	// (0x00019fa6) cell_ituss_key_pane_g1_ParamLimits

0xa9b1,	// (0x00019fa6) cell_ituss_key_pane_g1

0xa9cb,	// (0x00019fc0) cell_ituss_key_pane_g2_ParamLimits

0xa9cb,	// (0x00019fc0) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0001f4e3) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0001f4e3) cell_ituss_key_pane_g

0xa9f6,	// (0x00019feb) cell_ituss_key_t1_ParamLimits

0xa9f6,	// (0x00019feb) cell_ituss_key_t1

0xaa24,	// (0x0001a019) cell_ituss_key_t2_ParamLimits

0xaa24,	// (0x0001a019) cell_ituss_key_t2

0xaa55,	// (0x0001a04a) cell_ituss_key_t3_ParamLimits

0xaa55,	// (0x0001a04a) cell_ituss_key_t3

0xaa86,	// (0x0001a07b) cell_ituss_key_t4_ParamLimits

0xaa86,	// (0x0001a07b) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0001f4e8) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001f4e8) cell_ituss_key_t

0xaab7,	// (0x0001a0ac) cell_vkbss_key_3p_pane_g1

0xaabf,	// (0x0001a0b4) cell_vkbss_key_3p_pane_g2

0xaac7,	// (0x0001a0bc) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0001f4f1) cell_vkbss_key_3p_pane_g

0x22b7,	// (0x000118ac) bg_popup_fep_char_preview_window_cp02

0xaacf,	// (0x0001a0c4) popup_fep_char_pre_window_t1

0xf1d4,	// (0x0001e7c9) main_ai5_sk_pane

0xa400,	// (0x000199f5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa40c,	// (0x00019a01) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa420,	// (0x00019a15) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa42c,	// (0x00019a21) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x0001f4c7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa43f,	// (0x00019a34) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3192,	// (0x00012787) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf54b,	// (0x0001eb40) main_ai5_sk_pane_g1

0x4e23,	// (0x00014418) popup_query_code_window_g1

0xa8b1,	// (0x00019ea6) popup_fep_vkb_icf_pane

0xa8c5,	// (0x00019eba) popup_fep_vtchi_icf_pane

0x3192,	// (0x00012787) bg_icf_pane

0xaae7,	// (0x0001a0dc) list_vkb_icf_pane

0x3192,	// (0x00012787) bg_icf_pane_cp01

0xaaf3,	// (0x0001a0e8) vtchi_icf_list_pane

0xab04,	// (0x0001a0f9) list_vkb_icf_pane_t1_ParamLimits

0xab04,	// (0x0001a0f9) list_vkb_icf_pane_t1

0xab1b,	// (0x0001a110) vtchi_icf_list_pane_t1_ParamLimits

0xab1b,	// (0x0001a110) vtchi_icf_list_pane_t1

0xa89b,	// (0x00019e90) popup_fep_ituss_window_ParamLimits

0xa8c5,	// (0x00019eba) popup_fep_vtchi_icf_pane_ParamLimits

0xa8eb,	// (0x00019ee0) ituss_keypad_pane_ParamLimits

0xa8fb,	// (0x00019ef0) ituss_sks_pane

0x3192,	// (0x00012787) bg_icf_pane_ParamLimits

0xa884,	// (0x00019e79) icf_edit_indi_pane_ParamLimits

0xa884,	// (0x00019e79) icf_edit_indi_pane

0xaae7,	// (0x0001a0dc) list_vkb_icf_pane_ParamLimits

0x3192,	// (0x00012787) bg_icf_pane_cp01_ParamLimits

0xa884,	// (0x00019e79) icf_edit_indi_pane_cp01_ParamLimits

0xa884,	// (0x00019e79) icf_edit_indi_pane_cp01

0xaafb,	// (0x0001a0f0) vtchi_query_pane

0x7601,	// (0x00016bf6) icf_edit_indi_pane_g1_ParamLimits

0x7601,	// (0x00016bf6) icf_edit_indi_pane_g1

0xaba1,	// (0x0001a196) icf_edit_indi_pane_g2_ParamLimits

0xaba1,	// (0x0001a196) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0001f509) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0001f509) icf_edit_indi_pane_g

0xabb0,	// (0x0001a1a5) icf_edit_indi_pane_t1

0xab37,	// (0x0001a12c) bg_input_focus_pane_cp042

0x2b60,	// (0x00012155) vtchi_button_pane

0xab40,	// (0x0001a135) vtchi_query_pane_t1

0xab4e,	// (0x0001a143) vtchi_query_pane_t2

0xab5c,	// (0x0001a151) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0001f4f8) vtchi_query_pane_t

0x22b7,	// (0x000118ac) bg_button_pane_cp13

0xab6a,	// (0x0001a15f) vtchi_button_pane_g1

0xab72,	// (0x0001a167) ituss_sks_pane_g1

0xab7d,	// (0x0001a172) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0001f4ff) ituss_sks_pane_g

0xab85,	// (0x0001a17a) ituss_sks_pane_t1

0xab93,	// (0x0001a188) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0001f504) ituss_sks_pane_t

0x6d9d,	// (0x00016392) indicator_nsta_pane_cp_g1

0x6da6,	// (0x0001639b) indicator_nsta_pane_cp_g2

0x6dae,	// (0x000163a3) indicator_nsta_pane_cp_g3

0x6db6,	// (0x000163ab) indicator_nsta_pane_cp_g4

0x6dbe,	// (0x000163b3) indicator_nsta_pane_cp_g5

0x6dc6,	// (0x000163bb) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0001f0a5) indicator_nsta_pane_cp_g

0xefe6,	// (0x0001e5db) cell_graphic2_pane_t2_ParamLimits

0xefe6,	// (0x0001e5db) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x0001f3be) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x0001f3be) cell_graphic2_pane_t

0xf01c,	// (0x0001e611) cell_graphic2_control_pane_t1

0xd07e,	// (0x0001c673) signal_pane_g3_ParamLimits

0xd07e,	// (0x0001c673) signal_pane_g3

0xd092,	// (0x0001c687) signal_pane_g4_ParamLimits

0xd092,	// (0x0001c687) signal_pane_g4

0xa86e,	// (0x00019e63) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa86e,	// (0x00019e63) cell_ai5_widget_list_row_pane_t3

0xa9e4,	// (0x00019fd9) cell_ituss_key_pane_t1_ParamLimits

0xa9e4,	// (0x00019fd9) cell_ituss_key_pane_t1

0x4a38,	// (0x0001402d) form_field_data_wide_pane_vc_t2_ParamLimits

0x4a38,	// (0x0001402d) form_field_data_wide_pane_vc_t2

0x4a4c,	// (0x00014041) form_field_data_wide_pane_vc_t3_ParamLimits

0x4a4c,	// (0x00014041) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0001edfa) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0001edfa) form_field_data_wide_pane_vc_t

0x6a54,	// (0x00016049) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6a54,	// (0x00016049) form_field_slider_wide_pane_vc_t3

0x6b32,	// (0x00016127) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b32,	// (0x00016127) form_field_popup_wide_pane_vc_t2

0x6b49,	// (0x0001613e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b49,	// (0x0001613e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9f,	// (0x0001f094) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001f094) form_field_popup_wide_pane_vc_t

0xc57a,	// (0x0001bb6f) aid_fshwr2_btn_pane_ParamLimits

0xc589,	// (0x0001bb7e) aid_fshwr2_syb_pane_ParamLimits

0xc59b,	// (0x0001bb90) aid_fshwr2_txt_pane_ParamLimits

0x1a65,	// (0x0001105a) fshwr2_bg_pane_ParamLimits

0xc5aa,	// (0x0001bb9f) fshwr2_func_candi_pane_ParamLimits

0xc5bb,	// (0x0001bbb0) fshwr2_hwr_syb_pane_ParamLimits

0xc5d6,	// (0x0001bbcb) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal
