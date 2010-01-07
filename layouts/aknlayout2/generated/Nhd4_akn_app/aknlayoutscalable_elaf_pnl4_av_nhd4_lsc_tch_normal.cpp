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
0xb01b,	// (0x0000b01b) Screen

0xb027,	// (0x0000b027) application_window_ParamLimits

0xb027,	// (0x0000b027) application_window

0x002e,	// (0x0000002e) screen_g1

0xb05f,	// (0x0000b05f) area_bottom_pane_ParamLimits

0xb05f,	// (0x0000b05f) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xc616,	// (0x0000c616) battery_pane_ParamLimits

0xc616,	// (0x0000c616) battery_pane

0x4026,	// (0x00004026) bg_status_flat_pane_g8

0x402e,	// (0x0000402e) bg_status_flat_pane_g9

0x31de,	// (0x000031de) context_pane_ParamLimits

0x31de,	// (0x000031de) context_pane

0xc781,	// (0x0000c781) navi_pane_ParamLimits

0xc781,	// (0x0000c781) navi_pane

0xc7f8,	// (0x0000c7f8) signal_pane_ParamLimits

0xc7f8,	// (0x0000c7f8) signal_pane

0x0008,

0xa9bd,	// (0x0000a9bd) bg_status_flat_pane_g

0xc888,	// (0x0000c888) status_pane_g1_ParamLimits

0xc888,	// (0x0000c888) status_pane_g1

0xc89e,	// (0x0000c89e) status_pane_g2_ParamLimits

0xc89e,	// (0x0000c89e) status_pane_g2

0x33fe,	// (0x000033fe) status_pane_g3_ParamLimits

0x33fe,	// (0x000033fe) status_pane_g3

0x0004,

0xed0e,	// (0x0000ed0e) status_pane_g_ParamLimits

0xed0e,	// (0x0000ed0e) status_pane_g

0xc8aa,	// (0x0000c8aa) title_pane_ParamLimits

0xc8aa,	// (0x0000c8aa) title_pane

0xc90b,	// (0x0000c90b) uni_indicator_pane_ParamLimits

0xc90b,	// (0x0000c90b) uni_indicator_pane

0x2a95,	// (0x00002a95) bg_list_pane_ParamLimits

0x2a95,	// (0x00002a95) bg_list_pane

0xbee8,	// (0x0000bee8) find_pane

0xbef0,	// (0x0000bef0) listscroll_app_pane_ParamLimits

0xbef0,	// (0x0000bef0) listscroll_app_pane

0x2ac9,	// (0x00002ac9) listscroll_form_pane

0xbefc,	// (0x0000befc) listscroll_gen_pane_ParamLimits

0xbefc,	// (0x0000befc) listscroll_gen_pane

0x2ac9,	// (0x00002ac9) listscroll_set_pane

0x4e0c,	// (0x00004e0c) main_idle_act_pane

0x2575,	// (0x00002575) main_idle_trad_pane

0x2575,	// (0x00002575) main_list_empty_pane

0x2af7,	// (0x00002af7) main_midp_pane

0x2b03,	// (0x00002b03) main_pane_g1_ParamLimits

0x2b03,	// (0x00002b03) main_pane_g1

0xbf10,	// (0x0000bf10) popup_ai_message_window_ParamLimits

0xbf10,	// (0x0000bf10) popup_ai_message_window

0xbfa1,	// (0x0000bfa1) popup_fep_china_uni_window_ParamLimits

0xbfa1,	// (0x0000bfa1) popup_fep_china_uni_window

0x2c15,	// (0x00002c15) popup_fep_japan_candidate_window_ParamLimits

0x2c15,	// (0x00002c15) popup_fep_japan_candidate_window

0x2c33,	// (0x00002c33) popup_fep_japan_predictive_window_ParamLimits

0x2c33,	// (0x00002c33) popup_fep_japan_predictive_window

0xbffb,	// (0x0000bffb) popup_find_window

0xc018,	// (0x0000c018) popup_grid_graphic_window_ParamLimits

0xc018,	// (0x0000c018) popup_grid_graphic_window

0x2c96,	// (0x00002c96) popup_large_graphic_colour_window

0xc0aa,	// (0x0000c0aa) popup_menu_window_ParamLimits

0xc0aa,	// (0x0000c0aa) popup_menu_window

0xc276,	// (0x0000c276) popup_note_image_window

0xc23c,	// (0x0000c23c) popup_note_wait_window_ParamLimits

0xc23c,	// (0x0000c23c) popup_note_wait_window

0xc28e,	// (0x0000c28e) popup_note_window_ParamLimits

0xc28e,	// (0x0000c28e) popup_note_window

0xc334,	// (0x0000c334) popup_query_code_window_ParamLimits

0xc334,	// (0x0000c334) popup_query_code_window

0x2ee0,	// (0x00002ee0) popup_query_data_code_window_ParamLimits

0x2ee0,	// (0x00002ee0) popup_query_data_code_window

0xc36e,	// (0x0000c36e) popup_query_data_window_ParamLimits

0xc36e,	// (0x0000c36e) popup_query_data_window

0xc3e4,	// (0x0000c3e4) popup_query_sat_info_window_ParamLimits

0xc3e4,	// (0x0000c3e4) popup_query_sat_info_window

0xc47b,	// (0x0000c47b) popup_snote_single_graphic_window_ParamLimits

0xc47b,	// (0x0000c47b) popup_snote_single_graphic_window

0xc47b,	// (0x0000c47b) popup_snote_single_text_window_ParamLimits

0xc47b,	// (0x0000c47b) popup_snote_single_text_window

0x2f5d,	// (0x00002f5d) popup_sub_window_general

0x308b,	// (0x0000308b) popup_window_general_ParamLimits

0x308b,	// (0x0000308b) popup_window_general

0x30a0,	// (0x000030a0) power_save_pane

0xbd77,	// (0x0000bd77) control_pane_g1_ParamLimits

0xbd77,	// (0x0000bd77) control_pane_g1

0x290c,	// (0x0000290c) control_pane_g2_ParamLimits

0x290c,	// (0x0000290c) control_pane_g2

0x292f,	// (0x0000292f) control_pane_g3_ParamLimits

0x292f,	// (0x0000292f) control_pane_g3

0x0007,

0xecf6,	// (0x0000ecf6) control_pane_g_ParamLimits

0xecf6,	// (0x0000ecf6) control_pane_g

0xbddf,	// (0x0000bddf) control_pane_t1_ParamLimits

0xbddf,	// (0x0000bddf) control_pane_t1

0xbe3d,	// (0x0000be3d) control_pane_t2_ParamLimits

0xbe3d,	// (0x0000be3d) control_pane_t2

0x0002,

0xed07,	// (0x0000ed07) control_pane_t_ParamLimits

0xed07,	// (0x0000ed07) control_pane_t

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

0xa8c9,	// (0x0000a8c9) status_small_pane_g_ParamLimits

0xa8c9,	// (0x0000a8c9) status_small_pane_g

0x28ac,	// (0x000028ac) status_small_pane_t1

0x28cf,	// (0x000028cf) status_small_wait_pane_ParamLimits

0x28cf,	// (0x000028cf) status_small_wait_pane

0xbb8c,	// (0x0000bb8c) aid_levels_signal_ParamLimits

0xbb8c,	// (0x0000bb8c) aid_levels_signal

0xbba4,	// (0x0000bba4) signal_pane_g1_ParamLimits

0xbba4,	// (0x0000bba4) signal_pane_g1

0xbbbf,	// (0x0000bbbf) signal_pane_g2_ParamLimits

0xbbbf,	// (0x0000bbbf) signal_pane_g2

0x0001,

0xecda,	// (0x0000ecda) signal_pane_g_ParamLimits

0xecda,	// (0x0000ecda) signal_pane_g

0x1e22,	// (0x00001e22) context_pane_g1

0xb1d8,	// (0x0000b1d8) title_pane_g1

0xb20d,	// (0x0000b20d) title_pane_t1

0x04b1,	// (0x000004b1) title_pane_t2

0x04d7,	// (0x000004d7) title_pane_t3

0x0002,

0xec0c,	// (0x0000ec0c) title_pane_t

0xc933,	// (0x0000c933) aid_levels_battery_ParamLimits

0xc933,	// (0x0000c933) aid_levels_battery

0xc94f,	// (0x0000c94f) battery_pane_g1_ParamLimits

0xc94f,	// (0x0000c94f) battery_pane_g1

0xc96c,	// (0x0000c96c) battery_pane_g2_ParamLimits

0xc96c,	// (0x0000c96c) battery_pane_g2

0x0001,

0xed19,	// (0x0000ed19) battery_pane_g_ParamLimits

0xed19,	// (0x0000ed19) battery_pane_g

0xcd8c,	// (0x0000cd8c) uni_indicator_pane_g1

0xcda1,	// (0x0000cda1) uni_indicator_pane_g2

0xcdb6,	// (0x0000cdb6) uni_indicator_pane_g3

0x0005,

0xed6a,	// (0x0000ed6a) uni_indicator_pane_g

0x23e5,	// (0x000023e5) navi_icon_pane_ParamLimits

0x23e5,	// (0x000023e5) navi_icon_pane

0x232c,	// (0x0000232c) navi_midp_pane

0x2401,	// (0x00002401) navi_navi_pane

0x240b,	// (0x0000240b) navi_text_pane_ParamLimits

0x240b,	// (0x0000240b) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09a1,	// (0x000009a1) status_small_wait_pane_g2

0x0001,

0xaa60,	// (0x0000aa60) status_small_wait_pane_g

0xcd2b,	// (0x0000cd2b) navi_navi_icon_text_pane

0xcd33,	// (0x0000cd33) navi_navi_pane_g1_ParamLimits

0xcd33,	// (0x0000cd33) navi_navi_pane_g1

0xcd45,	// (0x0000cd45) navi_navi_pane_g2_ParamLimits

0xcd45,	// (0x0000cd45) navi_navi_pane_g2

0x0001,

0xed65,	// (0x0000ed65) navi_navi_pane_g_ParamLimits

0xed65,	// (0x0000ed65) navi_navi_pane_g

0x480f,	// (0x0000480f) navi_navi_tabs_pane

0xcd57,	// (0x0000cd57) navi_navi_text_pane

0xcd2b,	// (0x0000cd2b) navi_navi_volume_pane

0xcd19,	// (0x0000cd19) navi_text_pane_t1

0xcd0d,	// (0x0000cd0d) navi_icon_pane_g1

0x4700,	// (0x00004700) navi_navi_text_pane_t1

0xccfc,	// (0x0000ccfc) navi_navi_volume_pane_g1

0xcd04,	// (0x0000cd04) volume_small_pane

0xcc58,	// (0x0000cc58) navi_navi_icon_text_pane_g1

0xcc60,	// (0x0000cc60) navi_navi_icon_text_pane_t1

0x2401,	// (0x00002401) navi_tabs_2_long_pane

0x2401,	// (0x00002401) navi_tabs_2_pane

0x2401,	// (0x00002401) navi_tabs_3_long_pane

0x2401,	// (0x00002401) navi_tabs_3_pane

0x2401,	// (0x00002401) navi_tabs_4_pane

0xcc38,	// (0x0000cc38) tabs_2_active_pane_ParamLimits

0xcc38,	// (0x0000cc38) tabs_2_active_pane

0xcc48,	// (0x0000cc48) tabs_2_passive_pane_ParamLimits

0xcc48,	// (0x0000cc48) tabs_2_passive_pane

0xcc06,	// (0x0000cc06) tabs_3_active_pane_ParamLimits

0xcc06,	// (0x0000cc06) tabs_3_active_pane

0xcc16,	// (0x0000cc16) tabs_3_passive_pane_ParamLimits

0xcc16,	// (0x0000cc16) tabs_3_passive_pane

0xcc27,	// (0x0000cc27) tabs_3_passive_pane_cp_ParamLimits

0xcc27,	// (0x0000cc27) tabs_3_passive_pane_cp

0xcbc2,	// (0x0000cbc2) tabs_4_active_pane_ParamLimits

0xcbc2,	// (0x0000cbc2) tabs_4_active_pane

0xcbd3,	// (0x0000cbd3) tabs_4_passive_pane_ParamLimits

0xcbd3,	// (0x0000cbd3) tabs_4_passive_pane

0xcbe4,	// (0x0000cbe4) tabs_4_passive_pane_cp_ParamLimits

0xcbe4,	// (0x0000cbe4) tabs_4_passive_pane_cp

0xcbf5,	// (0x0000cbf5) tabs_4_passive_pane_cp2_ParamLimits

0xcbf5,	// (0x0000cbf5) tabs_4_passive_pane_cp2

0xcba2,	// (0x0000cba2) tabs_2_long_active_pane_ParamLimits

0xcba2,	// (0x0000cba2) tabs_2_long_active_pane

0xcbb2,	// (0x0000cbb2) tabs_2_long_passive_pane_ParamLimits

0xcbb2,	// (0x0000cbb2) tabs_2_long_passive_pane

0xcb6d,	// (0x0000cb6d) tabs_3_long_active_pane_ParamLimits

0xcb6d,	// (0x0000cb6d) tabs_3_long_active_pane

0xcb7e,	// (0x0000cb7e) tabs_3_long_passive_pane_ParamLimits

0xcb7e,	// (0x0000cb7e) tabs_3_long_passive_pane

0xcb91,	// (0x0000cb91) tabs_3_long_passive_pane_cp_ParamLimits

0xcb91,	// (0x0000cb91) tabs_3_long_passive_pane_cp

0x447b,	// (0x0000447b) volume_small_pane_g1

0xcb1c,	// (0x0000cb1c) volume_small_pane_g2

0xcb25,	// (0x0000cb25) volume_small_pane_g3

0xcb2e,	// (0x0000cb2e) volume_small_pane_g4

0xcb37,	// (0x0000cb37) volume_small_pane_g5

0xcb40,	// (0x0000cb40) volume_small_pane_g6

0xcb49,	// (0x0000cb49) volume_small_pane_g7

0xcb52,	// (0x0000cb52) volume_small_pane_g8

0xcb5b,	// (0x0000cb5b) volume_small_pane_g9

0xcb64,	// (0x0000cb64) volume_small_pane_g10

0x0009,

0xed3b,	// (0x0000ed3b) volume_small_pane_g

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2

0xb299,	// (0x0000b299) tabs_3_active_pane_g1

0xb2a1,	// (0x0000b2a1) tabs_3_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp2

0xb299,	// (0x0000b299) tabs_3_passive_pane_g1

0xb2a1,	// (0x0000b2a1) tabs_3_passive_pane_t1

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3

0xb2b3,	// (0x0000b2b3) tabs_4_active_pane_g1

0xb2bb,	// (0x0000b2bb) tabs_4_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp3

0xb2b3,	// (0x0000b2b3) tabs_4_1_passive_pane_g1

0xb2bb,	// (0x0000b2bb) tabs_4_1_passive_pane_t1

0x2af7,	// (0x00002af7) list_highlight_pane_cp2

0xce55,	// (0x0000ce55) list_set_pane_ParamLimits

0xce55,	// (0x0000ce55) list_set_pane

0xceef,	// (0x0000ceef) main_pane_set_t1_ParamLimits

0xceef,	// (0x0000ceef) main_pane_set_t1

0xcf0f,	// (0x0000cf0f) main_pane_set_t2_ParamLimits

0xcf0f,	// (0x0000cf0f) main_pane_set_t2

0xcf23,	// (0x0000cf23) main_pane_set_t3_ParamLimits

0xcf23,	// (0x0000cf23) main_pane_set_t3

0xcf35,	// (0x0000cf35) main_pane_set_t4_ParamLimits

0xcf35,	// (0x0000cf35) main_pane_set_t4

0x0003,

0xed7c,	// (0x0000ed7c) main_pane_set_t_ParamLimits

0xed7c,	// (0x0000ed7c) main_pane_set_t

0xcf47,	// (0x0000cf47) setting_code_pane

0xcf4f,	// (0x0000cf4f) setting_slider_graphic_pane

0xcf4f,	// (0x0000cf4f) setting_slider_pane

0xcf4f,	// (0x0000cf4f) setting_text_pane

0xcf4f,	// (0x0000cf4f) setting_volume_pane

0x052b,	// (0x0000052b) volume_set_pane

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp

0x0533,	// (0x00000533) setting_slider_pane_t1

0x054c,	// (0x0000054c) setting_slider_pane_t2

0x0565,	// (0x00000565) setting_slider_pane_t3

0x0002,

0xa6b9,	// (0x0000a6b9) setting_slider_pane_t

0x057c,	// (0x0000057c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x0592,	// (0x00000592) setting_slider_graphic_pane_g1

0x059b,	// (0x0000059b) setting_slider_graphic_pane_t1

0x05aa,	// (0x000005aa) setting_slider_graphic_pane_t2

0x0001,

0xa6c0,	// (0x0000a6c0) setting_slider_graphic_pane_t

0x05b9,	// (0x000005b9) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4df3,	// (0x00004df3) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05c1,	// (0x000005c1) setting_code_pane_t1

0x05cf,	// (0x000005cf) set_text_pane_t1_ParamLimits

0x05cf,	// (0x000005cf) set_text_pane_t1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1

0x1493,	// (0x00001493) set_opt_bg_pane_g2

0x4dd3,	// (0x00004dd3) set_opt_bg_pane_g3

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6

0x4ddb,	// (0x00004ddb) set_opt_bg_pane_g7

0x4de3,	// (0x00004de3) set_opt_bg_pane_g8

0x4deb,	// (0x00004deb) set_opt_bg_pane_g9

0x0008,

0xaab7,	// (0x0000aab7) set_opt_bg_pane_g

0x4d62,	// (0x00004d62) slider_set_pane_g1

0x4d6f,	// (0x00004d6f) slider_set_pane_g2

0x0006,

0xaaa8,	// (0x0000aaa8) slider_set_pane_g

0x4be2,	// (0x00004be2) volume_set_pane_g1

0x4bea,	// (0x00004bea) volume_set_pane_g2

0x4bf2,	// (0x00004bf2) volume_set_pane_g3

0x4bfa,	// (0x00004bfa) volume_set_pane_g4

0x4c02,	// (0x00004c02) volume_set_pane_g5

0x4c0a,	// (0x00004c0a) volume_set_pane_g6

0x4c12,	// (0x00004c12) volume_set_pane_g7

0x4c1a,	// (0x00004c1a) volume_set_pane_g8

0x4c22,	// (0x00004c22) volume_set_pane_g9

0x4c2a,	// (0x00004c2a) volume_set_pane_g10

0x0009,

0xaa80,	// (0x0000aa80) volume_set_pane_g

0xb2cd,	// (0x0000b2cd) indicator_pane_ParamLimits

0xb2cd,	// (0x0000b2cd) indicator_pane

0xb2f5,	// (0x0000b2f5) main_idle_pane_g2_ParamLimits

0xb2f5,	// (0x0000b2f5) main_idle_pane_g2

0xb32d,	// (0x0000b32d) main_pane_idle_g1_ParamLimits

0xb32d,	// (0x0000b32d) main_pane_idle_g1

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window_ParamLimits

0x062a,	// (0x0000062a) popup_clock_digital_analogue_window

0xb354,	// (0x0000b354) soft_indicator_pane_ParamLimits

0xb354,	// (0x0000b354) soft_indicator_pane

0xb36e,	// (0x0000b36e) wallpaper_pane_ParamLimits

0xb36e,	// (0x0000b36e) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb380,	// (0x0000b380) indicator_pane_g1_ParamLimits

0xb380,	// (0x0000b380) indicator_pane_g1

0x534d,	// (0x0000534d) navi_navi_icon_text_pane_srt_g1

0x067c,	// (0x0000067c) soft_indicator_pane_t1

0x0696,	// (0x00000696) aid_ps_area_pane

0xb399,	// (0x0000b399) aid_ps_clock_pane

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

0xa6c5,	// (0x0000a6c5) power_save_pane_g_ParamLimits

0xa6c5,	// (0x0000a6c5) power_save_pane_g

0x06ea,	// (0x000006ea) power_save_pane_t1_ParamLimits

0x06ea,	// (0x000006ea) power_save_pane_t1

0xb399,	// (0x0000b399) aid_ps_clock_pane_ParamLimits

0x06b5,	// (0x000006b5) aid_ps_indicator_pane_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4_ParamLimits

0x06fc,	// (0x000006fc) power_save_pane_t4

0x0001,

0xa6ca,	// (0x0000a6ca) power_save_pane_t_ParamLimits

0xa6ca,	// (0x0000a6ca) power_save_pane_t

0x0726,	// (0x00000726) power_save_t3_ParamLimits

0x0726,	// (0x00000726) power_save_t3

0x0711,	// (0x00000711) power_save_t2_ParamLimits

0x0711,	// (0x00000711) power_save_t2

0x073b,	// (0x0000073b) indicator_ps_pane_g1

0xb3a7,	// (0x0000b3a7) ai_gene_pane_ParamLimits

0xb3a7,	// (0x0000b3a7) ai_gene_pane

0xb3be,	// (0x0000b3be) ai_links_pane_ParamLimits

0xb3be,	// (0x0000b3be) ai_links_pane

0xb3d6,	// (0x0000b3d6) indicator_pane_cp1_ParamLimits

0xb3d6,	// (0x0000b3d6) indicator_pane_cp1

0xb3e5,	// (0x0000b3e5) main_pane_idle_g1_cp_ParamLimits

0xb3e5,	// (0x0000b3e5) main_pane_idle_g1_cp

0x0774,	// (0x00000774) popup_ai_links_title_window

0xb3fd,	// (0x0000b3fd) soft_indicator_pane_cp1_ParamLimits

0xb3fd,	// (0x0000b3fd) soft_indicator_pane_cp1

0x4aae,	// (0x00004aae) ai_links_pane_g1

0x4ab7,	// (0x00004ab7) grid_ai_links_pane

0xcd83,	// (0x0000cd83) ai_gene_pane_1

0x4a9c,	// (0x00004a9c) ai_gene_pane_2

0x4aa5,	// (0x00004aa5) list_highlight_pane_cp4

0xcd5f,	// (0x0000cd5f) cell_ai_link_pane_ParamLimits

0xcd5f,	// (0x0000cd5f) cell_ai_link_pane

0x4a6d,	// (0x00004a6d) cell_ai_link_pane_g1

0x09a1,	// (0x000009a1) cell_ai_link_pane_g2

0x0001,

0xaa5b,	// (0x0000aa5b) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x0797,	// (0x00000797) popup_ai_links_title_window_t1

0x49bb,	// (0x000049bb) ai_gene_pane_1_g1_ParamLimits

0x49bb,	// (0x000049bb) ai_gene_pane_1_g1

0x49c7,	// (0x000049c7) ai_gene_pane_1_g2_ParamLimits

0x49c7,	// (0x000049c7) ai_gene_pane_1_g2

0x0001,

0xaa51,	// (0x0000aa51) ai_gene_pane_1_g_ParamLimits

0xaa51,	// (0x0000aa51) ai_gene_pane_1_g

0x49d4,	// (0x000049d4) ai_gene_pane_1_t1_ParamLimits

0x49d4,	// (0x000049d4) ai_gene_pane_1_t1

0x4a08,	// (0x00004a08) grid_ai_soft_ind_pane

0x49a6,	// (0x000049a6) ai_gene_pane_2_t1_ParamLimits

0x49a6,	// (0x000049a6) ai_gene_pane_2_t1

0xb411,	// (0x0000b411) main_pane_empty_t1_ParamLimits

0xb411,	// (0x0000b411) main_pane_empty_t1

0xb429,	// (0x0000b429) main_pane_empty_t2_ParamLimits

0xb429,	// (0x0000b429) main_pane_empty_t2

0xb43e,	// (0x0000b43e) main_pane_empty_t3_ParamLimits

0xb43e,	// (0x0000b43e) main_pane_empty_t3

0xb450,	// (0x0000b450) main_pane_empty_t4_ParamLimits

0xb450,	// (0x0000b450) main_pane_empty_t4

0xb462,	// (0x0000b462) main_pane_empty_t5_ParamLimits

0xb462,	// (0x0000b462) main_pane_empty_t5

0x0004,

0xec13,	// (0x0000ec13) main_pane_empty_t_ParamLimits

0xec13,	// (0x0000ec13) main_pane_empty_t

0x1584,	// (0x00001584) bg_popup_window_pane_ParamLimits

0x1584,	// (0x00001584) bg_popup_window_pane

0x470e,	// (0x0000470e) find_popup_pane_cp2_ParamLimits

0x470e,	// (0x0000470e) find_popup_pane_cp2

0x471a,	// (0x0000471a) heading_pane_ParamLimits

0x471a,	// (0x0000471a) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xcc7d,	// (0x0000cc7d) bg_popup_window_pane_g1_ParamLimits

0xcc7d,	// (0x0000cc7d) bg_popup_window_pane_g1

0xcc8c,	// (0x0000cc8c) bg_popup_window_pane_g2_ParamLimits

0xcc8c,	// (0x0000cc8c) bg_popup_window_pane_g2

0xcc98,	// (0x0000cc98) bg_popup_window_pane_g3_ParamLimits

0xcc98,	// (0x0000cc98) bg_popup_window_pane_g3

0xcca4,	// (0x0000cca4) bg_popup_window_pane_g4_ParamLimits

0xcca4,	// (0x0000cca4) bg_popup_window_pane_g4

0xccb3,	// (0x0000ccb3) bg_popup_window_pane_g5_ParamLimits

0xccb3,	// (0x0000ccb3) bg_popup_window_pane_g5

0xccc3,	// (0x0000ccc3) bg_popup_window_pane_g6_ParamLimits

0xccc3,	// (0x0000ccc3) bg_popup_window_pane_g6

0xcccf,	// (0x0000cccf) bg_popup_window_pane_g7_ParamLimits

0xcccf,	// (0x0000cccf) bg_popup_window_pane_g7

0xccde,	// (0x0000ccde) bg_popup_window_pane_g8_ParamLimits

0xccde,	// (0x0000ccde) bg_popup_window_pane_g8

0xcced,	// (0x0000cced) bg_popup_window_pane_g9_ParamLimits

0xcced,	// (0x0000cced) bg_popup_window_pane_g9

0x46e3,	// (0x000046e3) bg_popup_window_pane_g10_ParamLimits

0x46e3,	// (0x000046e3) bg_popup_window_pane_g10

0x0009,

0xed50,	// (0x0000ed50) bg_popup_window_pane_g_ParamLimits

0xed50,	// (0x0000ed50) bg_popup_window_pane_g

0x460c,	// (0x0000460c) bg_popup_heading_pane_ParamLimits

0x460c,	// (0x0000460c) bg_popup_heading_pane

0x5290,	// (0x00005290) tabs_4_passive_pane_cp_srt_ParamLimits

0x5290,	// (0x00005290) tabs_4_passive_pane_cp_srt

0x52a2,	// (0x000052a2) tabs_4_passive_pane_srt_ParamLimits

0x4620,	// (0x00004620) heading_pane_g2

0x52a2,	// (0x000052a2) tabs_4_passive_pane_srt

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp3_srt

0x4628,	// (0x00004628) heading_pane_t1_ParamLimits

0x4628,	// (0x00004628) heading_pane_t1

0x463f,	// (0x0000463f) heading_pane_t2_ParamLimits

0x463f,	// (0x0000463f) heading_pane_t2

0x0001,

0xaa14,	// (0x0000aa14) heading_pane_t_ParamLimits

0xaa14,	// (0x0000aa14) heading_pane_t

0x3fee,	// (0x00003fee) bg_popup_heading_pane_g1

0x409d,	// (0x0000409d) bg_popup_heading_pane_g2

0x40a7,	// (0x000040a7) bg_popup_heading_pane_g3

0x40b1,	// (0x000040b1) bg_popup_heading_pane_g4

0x40bb,	// (0x000040bb) bg_popup_heading_pane_g5

0x40c5,	// (0x000040c5) bg_popup_heading_pane_g6

0x40cd,	// (0x000040cd) bg_popup_heading_pane_g7

0x40d5,	// (0x000040d5) bg_popup_heading_pane_g8

0x40df,	// (0x000040df) bg_popup_heading_pane_g9

0x0008,

0xa9d0,	// (0x0000a9d0) bg_popup_heading_pane_g

0x3621,	// (0x00003621) bg_popup_sub_pane_g1

0x3629,	// (0x00003629) bg_popup_sub_pane_g2

0x3631,	// (0x00003631) bg_popup_sub_pane_g3

0x3639,	// (0x00003639) bg_popup_sub_pane_g4

0x3641,	// (0x00003641) bg_popup_sub_pane_g5

0x3649,	// (0x00003649) bg_popup_sub_pane_g6

0x3651,	// (0x00003651) bg_popup_sub_pane_g7

0x3659,	// (0x00003659) bg_popup_sub_pane_g8

0x3661,	// (0x00003661) bg_popup_sub_pane_g9

0x0008,

0xa9aa,	// (0x0000a9aa) bg_popup_sub_pane_g

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

0xa6da,	// (0x0000a6da) popup_note_window_t_ParamLimits

0xa6da,	// (0x0000a6da) popup_note_window_t

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp6

0x3f62,	// (0x00003f62) popup_note_image_window_g1_ParamLimits

0x3f62,	// (0x00003f62) popup_note_image_window_g1

0x3f6e,	// (0x00003f6e) popup_note_image_window_g2_ParamLimits

0x3f6e,	// (0x00003f6e) popup_note_image_window_g2

0x0001,

0xa99e,	// (0x0000a99e) popup_note_image_window_g_ParamLimits

0xa99e,	// (0x0000a99e) popup_note_image_window_g

0x3f87,	// (0x00003f87) popup_note_image_window_t1_ParamLimits

0x3f87,	// (0x00003f87) popup_note_image_window_t1

0x3fa0,	// (0x00003fa0) popup_note_image_window_t2_ParamLimits

0x3fa0,	// (0x00003fa0) popup_note_image_window_t2

0x3fb9,	// (0x00003fb9) popup_note_image_window_t3_ParamLimits

0x3fb9,	// (0x00003fb9) popup_note_image_window_t3

0x0002,

0xa9a3,	// (0x0000a9a3) popup_note_image_window_t_ParamLimits

0xa9a3,	// (0x0000a9a3) popup_note_image_window_t

0x3e23,	// (0x00003e23) bg_popup_window_pane_cp7_ParamLimits

0x3e23,	// (0x00003e23) bg_popup_window_pane_cp7

0x3e53,	// (0x00003e53) popup_note_wait_window_g1_ParamLimits

0x3e53,	// (0x00003e53) popup_note_wait_window_g1

0x3e5f,	// (0x00003e5f) popup_note_wait_window_g2_ParamLimits

0x3e5f,	// (0x00003e5f) popup_note_wait_window_g2

0x0002,

0xa98c,	// (0x0000a98c) popup_note_wait_window_g_ParamLimits

0xa98c,	// (0x0000a98c) popup_note_wait_window_g

0x3e77,	// (0x00003e77) popup_note_wait_window_t1_ParamLimits

0x3e77,	// (0x00003e77) popup_note_wait_window_t1

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t2_ParamLimits

0x3e9e,	// (0x00003e9e) popup_note_wait_window_t2

0x3ebb,	// (0x00003ebb) popup_note_wait_window_t3_ParamLimits

0x3ebb,	// (0x00003ebb) popup_note_wait_window_t3

0x3ece,	// (0x00003ece) popup_note_wait_window_t4_ParamLimits

0x3ece,	// (0x00003ece) popup_note_wait_window_t4

0x0004,

0xa993,	// (0x0000a993) popup_note_wait_window_t_ParamLimits

0xa993,	// (0x0000a993) popup_note_wait_window_t

0x3ef3,	// (0x00003ef3) wait_bar_pane_ParamLimits

0x3ef3,	// (0x00003ef3) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xa859,	// (0x0000a859) wait_anim_pane_g

0x3dc7,	// (0x00003dc7) wait_border_pane_g1

0x3dd2,	// (0x00003dd2) wait_border_pane_g2

0x3ddb,	// (0x00003ddb) wait_border_pane_g3

0x0002,

0xa985,	// (0x0000a985) wait_border_pane_g

0x3d29,	// (0x00003d29) bg_popup_window_pane_cp16_ParamLimits

0x3d29,	// (0x00003d29) bg_popup_window_pane_cp16

0x3d37,	// (0x00003d37) indicator_popup_pane_cp4_ParamLimits

0x3d37,	// (0x00003d37) indicator_popup_pane_cp4

0x3d4b,	// (0x00003d4b) popup_query_data_window_t1_ParamLimits

0x3d4b,	// (0x00003d4b) popup_query_data_window_t1

0x3d5d,	// (0x00003d5d) popup_query_data_window_t2_ParamLimits

0x3d5d,	// (0x00003d5d) popup_query_data_window_t2

0x3d76,	// (0x00003d76) popup_query_data_window_t3_ParamLimits

0x3d76,	// (0x00003d76) popup_query_data_window_t3

0x0002,

0xa97e,	// (0x0000a97e) popup_query_data_window_t_ParamLimits

0xa97e,	// (0x0000a97e) popup_query_data_window_t

0x3d90,	// (0x00003d90) query_popup_data_pane_ParamLimits

0x3d90,	// (0x00003d90) query_popup_data_pane

0x3da4,	// (0x00003da4) query_popup_data_pane_cp1_ParamLimits

0x3da4,	// (0x00003da4) query_popup_data_pane_cp1

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp10_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_window_pane_cp10

0x3c8c,	// (0x00003c8c) indicator_popup_pane_ParamLimits

0x3c8c,	// (0x00003c8c) indicator_popup_pane

0x090c,	// (0x0000090c) popup_query_code_window_t1_ParamLimits

0x090c,	// (0x0000090c) popup_query_code_window_t1

0x3ca4,	// (0x00003ca4) popup_query_code_window_t2_ParamLimits

0x3ca4,	// (0x00003ca4) popup_query_code_window_t2

0x3ce2,	// (0x00003ce2) popup_query_code_window_t3_ParamLimits

0x3ce2,	// (0x00003ce2) popup_query_code_window_t3

0x0002,

0xa977,	// (0x0000a977) popup_query_code_window_t_ParamLimits

0xa977,	// (0x0000a977) popup_query_code_window_t

0x3d11,	// (0x00003d11) query_popup_pane_ParamLimits

0x3d11,	// (0x00003d11) query_popup_pane

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

0xa6e5,	// (0x0000a6e5) popup_query_data_code_window_t_ParamLimits

0xa6e5,	// (0x0000a6e5) popup_query_data_code_window_t

0x23a1,	// (0x000023a1) list_single_midp_graphic_pane_g3

0x095e,	// (0x0000095e) query_popup_data_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2_ParamLimits

0x0971,	// (0x00000971) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3c60,	// (0x00003c60) heading_pane_cp5

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

0xa6ee,	// (0x0000a6ee) popup_info_list_pane_t_ParamLimits

0xa6ee,	// (0x0000a6ee) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x5384,	// (0x00005384) find_popup_pane

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3

0x09e7,	// (0x000009e7) heading_pane_cp3

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xb4c4,	// (0x0000b4c4) heading_pane_cp4

0x0a59,	// (0x00000a59) listscroll_popup_colour_pane

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a61,	// (0x00000a61) cell_large_graphic_colour_none_popup_pane

0xb4cc,	// (0x0000b4cc) grid_large_graphic_colour_popup_pane_ParamLimits

0xb4cc,	// (0x0000b4cc) grid_large_graphic_colour_popup_pane

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1_ParamLimits

0x0a99,	// (0x00000a99) listscroll_popup_colour_pane_g1

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2_ParamLimits

0x0ab0,	// (0x00000ab0) listscroll_popup_colour_pane_g2

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3_ParamLimits

0x0ac7,	// (0x00000ac7) listscroll_popup_colour_pane_g3

0xb4f0,	// (0x0000b4f0) listscroll_popup_colour_pane_g4_ParamLimits

0xb4f0,	// (0x0000b4f0) listscroll_popup_colour_pane_g4

0x0003,

0xec1e,	// (0x0000ec1e) listscroll_popup_colour_pane_g_ParamLimits

0xec1e,	// (0x0000ec1e) listscroll_popup_colour_pane_g

0x0ae6,	// (0x00000ae6) scroll_pane_cp6_ParamLimits

0x0ae6,	// (0x00000ae6) scroll_pane_cp6

0xb4ff,	// (0x0000b4ff) cell_large_graphic_colour_popup_pane_ParamLimits

0xb4ff,	// (0x0000b4ff) cell_large_graphic_colour_popup_pane

0x0b17,	// (0x00000b17) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b26,	// (0x00000b26) cell_large_graphic_colour_popup_pane_g1

0x0b2e,	// (0x00000b2e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xa6fc,	// (0x0000a6fc) cell_large_graphic_colour_popup_pane_g

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

0xa701,	// (0x0000a701) popup_snote_single_text_window_t_ParamLimits

0xa701,	// (0x0000a701) popup_snote_single_text_window_t

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9_ParamLimits

0x0c36,	// (0x00000c36) bg_popup_window_pane_cp9

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1_ParamLimits

0x0b62,	// (0x00000b62) popup_snote_single_graphic_window_g1

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2_ParamLimits

0x0c44,	// (0x00000c44) popup_snote_single_graphic_window_g2

0x0001,

0xa70c,	// (0x0000a70c) popup_snote_single_graphic_window_g_ParamLimits

0xa70c,	// (0x0000a70c) popup_snote_single_graphic_window_g

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

0xa711,	// (0x0000a711) popup_snote_single_graphic_window_t_ParamLimits

0xa711,	// (0x0000a711) popup_snote_single_graphic_window_t

0x520c,	// (0x0000520c) grid_graphic_popup_pane_ParamLimits

0x520c,	// (0x0000520c) grid_graphic_popup_pane

0x5238,	// (0x00005238) listscroll_popup_graphic_pane_g1_ParamLimits

0x5238,	// (0x00005238) listscroll_popup_graphic_pane_g1

0xd090,	// (0x0000d090) listscroll_popup_graphic_pane_g2_ParamLimits

0xd090,	// (0x0000d090) listscroll_popup_graphic_pane_g2

0x0001,

0xed9f,	// (0x0000ed9f) listscroll_popup_graphic_pane_g_ParamLimits

0xed9f,	// (0x0000ed9f) listscroll_popup_graphic_pane_g

0x5260,	// (0x00005260) scroll_pane_cp5

0xd053,	// (0x0000d053) cell_graphic_popup_pane_ParamLimits

0xd053,	// (0x0000d053) cell_graphic_popup_pane

0x5198,	// (0x00005198) cell_graphic_popup_pane_g1

0x51a0,	// (0x000051a0) cell_graphic_popup_pane_g2

0x0b36,	// (0x00000b36) cell_graphic_popup_pane_g3

0x0002,

0xaaed,	// (0x0000aaed) cell_graphic_popup_pane_g

0x51a9,	// (0x000051a9) cell_graphic_popup_pane_t2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3

0x0d24,	// (0x00000d24) list_gen_pane_ParamLimits

0x0d24,	// (0x00000d24) list_gen_pane

0x0d56,	// (0x00000d56) scroll_pane

0xd00e,	// (0x0000d00e) bg_list_pane_g1_ParamLimits

0xd00e,	// (0x0000d00e) bg_list_pane_g1

0x5115,	// (0x00005115) bg_list_pane_g2_ParamLimits

0x5115,	// (0x00005115) bg_list_pane_g2

0x5128,	// (0x00005128) bg_list_pane_g3_ParamLimits

0x5128,	// (0x00005128) bg_list_pane_g3

0x513a,	// (0x0000513a) bg_list_pane_g4_ParamLimits

0x513a,	// (0x0000513a) bg_list_pane_g4

0xd029,	// (0x0000d029) bg_list_pane_g5_ParamLimits

0xd029,	// (0x0000d029) bg_list_pane_g5

0x0004,

0xed94,	// (0x0000ed94) bg_list_pane_g_ParamLimits

0xed94,	// (0x0000ed94) bg_list_pane_g

0xcfad,	// (0x0000cfad) list_double2_graphic_large_graphic_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double2_graphic_large_graphic_pane

0xcfad,	// (0x0000cfad) list_double2_graphic_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double2_graphic_pane

0xcfad,	// (0x0000cfad) list_double2_large_graphic_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double2_large_graphic_pane

0xcfad,	// (0x0000cfad) list_double2_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double2_pane

0xcfad,	// (0x0000cfad) list_double_graphic_heading_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_graphic_heading_pane

0xcfad,	// (0x0000cfad) list_double_graphic_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_graphic_pane

0xcfad,	// (0x0000cfad) list_double_heading_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_heading_pane

0xcfad,	// (0x0000cfad) list_double_large_graphic_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_large_graphic_pane

0xcfad,	// (0x0000cfad) list_double_number_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_number_pane

0xcfad,	// (0x0000cfad) list_double_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_pane

0xcfad,	// (0x0000cfad) list_double_time_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_double_time_pane

0xcfad,	// (0x0000cfad) list_setting_number_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_setting_number_pane

0xcfad,	// (0x0000cfad) list_setting_pane_ParamLimits

0xcfad,	// (0x0000cfad) list_setting_pane

0xcfc0,	// (0x0000cfc0) list_single_2graphic_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_2graphic_pane

0xcfc0,	// (0x0000cfc0) list_single_graphic_heading_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_graphic_heading_pane

0xcfc0,	// (0x0000cfc0) list_single_graphic_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_graphic_pane

0xcfc0,	// (0x0000cfc0) list_single_heading_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_heading_pane

0xcfc0,	// (0x0000cfc0) list_single_large_graphic_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_large_graphic_pane

0xcfc0,	// (0x0000cfc0) list_single_number_heading_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_number_heading_pane

0xcfc0,	// (0x0000cfc0) list_single_number_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_number_pane

0xcfc0,	// (0x0000cfc0) list_single_pane_ParamLimits

0xcfc0,	// (0x0000cfc0) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x0e4b,	// (0x00000e4b) list_single_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_pane_g1

0x0e57,	// (0x00000e57) list_single_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_pane_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_pane_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_pane_g

0x5971,	// (0x00005971) list_single_pane_t1_ParamLimits

0x5971,	// (0x00005971) list_single_pane_t1

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_pane_g1

0x0e57,	// (0x00000e57) list_single_number_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_pane_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_number_pane_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_number_pane_g

0x35af,	// (0x000035af) list_single_number_pane_t1_ParamLimits

0x35af,	// (0x000035af) list_single_number_pane_t1

0xcdf1,	// (0x0000cdf1) list_single_number_pane_t2_ParamLimits

0xcdf1,	// (0x0000cdf1) list_single_number_pane_t2

0x0001,

0xed77,	// (0x0000ed77) list_single_number_pane_t_ParamLimits

0xed77,	// (0x0000ed77) list_single_number_pane_t

0xb528,	// (0x0000b528) list_single_graphic_pane_g1_ParamLimits

0xb528,	// (0x0000b528) list_single_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_pane_g3

0x0002,

0xec27,	// (0x0000ec27) list_single_graphic_pane_g_ParamLimits

0xec27,	// (0x0000ec27) list_single_graphic_pane_g

0xb534,	// (0x0000b534) list_single_graphic_pane_t1_ParamLimits

0xb534,	// (0x0000b534) list_single_graphic_pane_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_heading_pane_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_heading_pane_g

0x5993,	// (0x00005993) list_single_heading_pane_t1_ParamLimits

0x5993,	// (0x00005993) list_single_heading_pane_t1

0xb54a,	// (0x0000b54a) list_single_heading_pane_t2_ParamLimits

0xb54a,	// (0x0000b54a) list_single_heading_pane_t2

0x0001,

0xec2e,	// (0x0000ec2e) list_single_heading_pane_t_ParamLimits

0xec2e,	// (0x0000ec2e) list_single_heading_pane_t

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_number_heading_pane_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_number_heading_pane_g

0x5993,	// (0x00005993) list_single_number_heading_pane_t1_ParamLimits

0x5993,	// (0x00005993) list_single_number_heading_pane_t1

0xb55c,	// (0x0000b55c) list_single_number_heading_pane_t2_ParamLimits

0xb55c,	// (0x0000b55c) list_single_number_heading_pane_t2

0x594b,	// (0x0000594b) list_single_number_heading_pane_t3_ParamLimits

0x594b,	// (0x0000594b) list_single_number_heading_pane_t3

0x0002,

0xec33,	// (0x0000ec33) list_single_number_heading_pane_t_ParamLimits

0xec33,	// (0x0000ec33) list_single_number_heading_pane_t

0x34c5,	// (0x000034c5) list_single_graphic_heading_pane_g1_ParamLimits

0x34c5,	// (0x000034c5) list_single_graphic_heading_pane_g1

0xb56e,	// (0x0000b56e) list_single_graphic_heading_pane_g4_ParamLimits

0xb56e,	// (0x0000b56e) list_single_graphic_heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_g5

0x0002,

0xec3a,	// (0x0000ec3a) list_single_graphic_heading_pane_g_ParamLimits

0xec3a,	// (0x0000ec3a) list_single_graphic_heading_pane_g

0x5993,	// (0x00005993) list_single_graphic_heading_pane_t1_ParamLimits

0x5993,	// (0x00005993) list_single_graphic_heading_pane_t1

0xb57f,	// (0x0000b57f) list_single_graphic_heading_pane_t2_ParamLimits

0xb57f,	// (0x0000b57f) list_single_graphic_heading_pane_t2

0x0001,

0xec41,	// (0x0000ec41) list_single_graphic_heading_pane_t_ParamLimits

0xec41,	// (0x0000ec41) list_single_graphic_heading_pane_t

0x5987,	// (0x00005987) list_single_large_graphic_pane_g1_ParamLimits

0x5987,	// (0x00005987) list_single_large_graphic_pane_g1

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_large_graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_large_graphic_pane_g3

0x0002,

0xab8b,	// (0x0000ab8b) list_single_large_graphic_pane_g_ParamLimits

0xab8b,	// (0x0000ab8b) list_single_large_graphic_pane_g

0x3dd2,	// (0x00003dd2) wait_border_pane_g2_copy1

0xb591,	// (0x0000b591) list_single_large_graphic_pane_g4_cp2

0x5993,	// (0x00005993) list_single_large_graphic_pane_t1_ParamLimits

0x5993,	// (0x00005993) list_single_large_graphic_pane_t1

0x0fa7,	// (0x00000fa7) list_double_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_pane_g1

0x0ed2,	// (0x00000ed2) list_double_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_pane_g2

0x0001,

0xa7bc,	// (0x0000a7bc) list_double_pane_g_ParamLimits

0xa7bc,	// (0x0000a7bc) list_double_pane_g

0x0ede,	// (0x00000ede) list_double_pane_t1_ParamLimits

0x0ede,	// (0x00000ede) list_double_pane_t1

0xb599,	// (0x0000b599) list_double_pane_t2_ParamLimits

0xb599,	// (0x0000b599) list_double_pane_t2

0x0001,

0xec46,	// (0x0000ec46) list_double_pane_t_ParamLimits

0xec46,	// (0x0000ec46) list_double_pane_t

0xb5ab,	// (0x0000b5ab) list_double2_pane_g1_ParamLimits

0xb5ab,	// (0x0000b5ab) list_double2_pane_g1

0xb5bc,	// (0x0000b5bc) list_double2_pane_g2_ParamLimits

0xb5bc,	// (0x0000b5bc) list_double2_pane_g2

0x0001,

0xec4b,	// (0x0000ec4b) list_double2_pane_g_ParamLimits

0xec4b,	// (0x0000ec4b) list_double2_pane_g

0x750c,	// (0x0000750c) list_double2_pane_t1_ParamLimits

0x750c,	// (0x0000750c) list_double2_pane_t1

0x10d0,	// (0x000010d0) list_double2_pane_t2_ParamLimits

0x10d0,	// (0x000010d0) list_double2_pane_t2

0x0001,

0xec50,	// (0x0000ec50) list_double2_pane_t_ParamLimits

0xec50,	// (0x0000ec50) list_double2_pane_t

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1_ParamLimits

0x0fa7,	// (0x00000fa7) list_double_number_pane_g1

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_number_pane_g2

0x0001,

0xa7bc,	// (0x0000a7bc) list_double_number_pane_g_ParamLimits

0xa7bc,	// (0x0000a7bc) list_double_number_pane_g

0xb5c8,	// (0x0000b5c8) list_double_number_pane_t1_ParamLimits

0xb5c8,	// (0x0000b5c8) list_double_number_pane_t1

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2_ParamLimits

0x0fb3,	// (0x00000fb3) list_double_number_pane_t2

0xb5da,	// (0x0000b5da) list_double_number_pane_t3_ParamLimits

0xb5da,	// (0x0000b5da) list_double_number_pane_t3

0x0002,

0xec55,	// (0x0000ec55) list_double_number_pane_t_ParamLimits

0xec55,	// (0x0000ec55) list_double_number_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_pane_g1

0xb5ec,	// (0x0000b5ec) list_double_graphic_pane_g2_ParamLimits

0xb5ec,	// (0x0000b5ec) list_double_graphic_pane_g2

0xb5fb,	// (0x0000b5fb) list_double_graphic_pane_g3_ParamLimits

0xb5fb,	// (0x0000b5fb) list_double_graphic_pane_g3

0x0003,

0xec5c,	// (0x0000ec5c) list_double_graphic_pane_g_ParamLimits

0xec5c,	// (0x0000ec5c) list_double_graphic_pane_g

0xb613,	// (0x0000b613) list_double_graphic_pane_t1_ParamLimits

0xb613,	// (0x0000b613) list_double_graphic_pane_t1

0xb629,	// (0x0000b629) list_double_graphic_pane_t2_ParamLimits

0xb629,	// (0x0000b629) list_double_graphic_pane_t2

0x0001,

0xec65,	// (0x0000ec65) list_double_graphic_pane_t_ParamLimits

0xec65,	// (0x0000ec65) list_double_graphic_pane_t

0xb63b,	// (0x0000b63b) list_double2_graphic_pane_g1_ParamLimits

0xb63b,	// (0x0000b63b) list_double2_graphic_pane_g1

0x1375,	// (0x00001375) list_double2_graphic_pane_g2_ParamLimits

0x1375,	// (0x00001375) list_double2_graphic_pane_g2

0xb5bc,	// (0x0000b5bc) list_double2_graphic_pane_g3_ParamLimits

0xb5bc,	// (0x0000b5bc) list_double2_graphic_pane_g3

0x0002,

0xec6a,	// (0x0000ec6a) list_double2_graphic_pane_g_ParamLimits

0xec6a,	// (0x0000ec6a) list_double2_graphic_pane_g

0xb647,	// (0x0000b647) list_double2_graphic_pane_t1_ParamLimits

0xb647,	// (0x0000b647) list_double2_graphic_pane_t1

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2_ParamLimits

0x10f8,	// (0x000010f8) list_double2_graphic_pane_t2

0x0001,

0xec71,	// (0x0000ec71) list_double2_graphic_pane_t_ParamLimits

0xec71,	// (0x0000ec71) list_double2_graphic_pane_t

0xb65d,	// (0x0000b65d) list_double_large_graphic_pane_g1_ParamLimits

0xb65d,	// (0x0000b65d) list_double_large_graphic_pane_g1

0xb688,	// (0x0000b688) list_double_large_graphic_pane_g2_ParamLimits

0xb688,	// (0x0000b688) list_double_large_graphic_pane_g2

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_large_graphic_pane_g3

0xb699,	// (0x0000b699) list_double_large_graphic_pane_g4_ParamLimits

0xb699,	// (0x0000b699) list_double_large_graphic_pane_g4

0x0004,

0xec76,	// (0x0000ec76) list_double_large_graphic_pane_g_ParamLimits

0xec76,	// (0x0000ec76) list_double_large_graphic_pane_g

0xb6ac,	// (0x0000b6ac) list_double_large_graphic_pane_t1_ParamLimits

0xb6ac,	// (0x0000b6ac) list_double_large_graphic_pane_t1

0xb6c5,	// (0x0000b6c5) list_double_large_graphic_pane_t2_ParamLimits

0xb6c5,	// (0x0000b6c5) list_double_large_graphic_pane_t2

0x0001,

0xec81,	// (0x0000ec81) list_double_large_graphic_pane_t_ParamLimits

0xec81,	// (0x0000ec81) list_double_large_graphic_pane_t

0xb6d7,	// (0x0000b6d7) list_double2_large_graphic_pane_g1_ParamLimits

0xb6d7,	// (0x0000b6d7) list_double2_large_graphic_pane_g1

0xb5ab,	// (0x0000b5ab) list_double2_large_graphic_pane_g2_ParamLimits

0xb5ab,	// (0x0000b5ab) list_double2_large_graphic_pane_g2

0xb5bc,	// (0x0000b5bc) list_double2_large_graphic_pane_g3_ParamLimits

0xb5bc,	// (0x0000b5bc) list_double2_large_graphic_pane_g3

0x0002,

0xec86,	// (0x0000ec86) list_double2_large_graphic_pane_g_ParamLimits

0xec86,	// (0x0000ec86) list_double2_large_graphic_pane_g

0xb6e3,	// (0x0000b6e3) list_double2_large_graphic_pane_t1_ParamLimits

0xb6e3,	// (0x0000b6e3) list_double2_large_graphic_pane_t1

0xb6f9,	// (0x0000b6f9) list_double2_large_graphic_pane_t2_ParamLimits

0xb6f9,	// (0x0000b6f9) list_double2_large_graphic_pane_t2

0x0001,

0xec8d,	// (0x0000ec8d) list_double2_large_graphic_pane_t_ParamLimits

0xec8d,	// (0x0000ec8d) list_double2_large_graphic_pane_t

0xb70b,	// (0x0000b70b) list_double_heading_pane_g1_ParamLimits

0xb70b,	// (0x0000b70b) list_double_heading_pane_g1

0xb71c,	// (0x0000b71c) list_double_heading_pane_g2_ParamLimits

0xb71c,	// (0x0000b71c) list_double_heading_pane_g2

0x0001,

0xec92,	// (0x0000ec92) list_double_heading_pane_g_ParamLimits

0xec92,	// (0x0000ec92) list_double_heading_pane_g

0xb728,	// (0x0000b728) list_double_heading_pane_t1_ParamLimits

0xb728,	// (0x0000b728) list_double_heading_pane_t1

0xb73e,	// (0x0000b73e) list_double_heading_pane_t2_ParamLimits

0xb73e,	// (0x0000b73e) list_double_heading_pane_t2

0x0001,

0xec97,	// (0x0000ec97) list_double_heading_pane_t_ParamLimits

0xec97,	// (0x0000ec97) list_double_heading_pane_t

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1_ParamLimits

0x0f9b,	// (0x00000f9b) list_double_graphic_heading_pane_g1

0xb70b,	// (0x0000b70b) list_double_graphic_heading_pane_g2_ParamLimits

0xb70b,	// (0x0000b70b) list_double_graphic_heading_pane_g2

0xb71c,	// (0x0000b71c) list_double_graphic_heading_pane_g3_ParamLimits

0xb71c,	// (0x0000b71c) list_double_graphic_heading_pane_g3

0x0002,

0xec9c,	// (0x0000ec9c) list_double_graphic_heading_pane_g_ParamLimits

0xec9c,	// (0x0000ec9c) list_double_graphic_heading_pane_g

0xb750,	// (0x0000b750) list_double_graphic_heading_pane_t1_ParamLimits

0xb750,	// (0x0000b750) list_double_graphic_heading_pane_t1

0xb766,	// (0x0000b766) list_double_graphic_heading_pane_t2_ParamLimits

0xb766,	// (0x0000b766) list_double_graphic_heading_pane_t2

0x0001,

0xeca3,	// (0x0000eca3) list_double_graphic_heading_pane_t_ParamLimits

0xeca3,	// (0x0000eca3) list_double_graphic_heading_pane_t

0xb688,	// (0x0000b688) list_double_time_pane_g1_ParamLimits

0xb688,	// (0x0000b688) list_double_time_pane_g1

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2_ParamLimits

0x0ed2,	// (0x00000ed2) list_double_time_pane_g2

0x0001,

0xeca8,	// (0x0000eca8) list_double_time_pane_g_ParamLimits

0xeca8,	// (0x0000eca8) list_double_time_pane_g

0x1075,	// (0x00001075) list_double_time_pane_t1_ParamLimits

0x1075,	// (0x00001075) list_double_time_pane_t1

0xb778,	// (0x0000b778) list_double_time_pane_t2_ParamLimits

0xb778,	// (0x0000b778) list_double_time_pane_t2

0xb78a,	// (0x0000b78a) list_double_time_pane_t3_ParamLimits

0xb78a,	// (0x0000b78a) list_double_time_pane_t3

0xb79c,	// (0x0000b79c) list_double_time_pane_t4_ParamLimits

0xb79c,	// (0x0000b79c) list_double_time_pane_t4

0x0003,

0xecad,	// (0x0000ecad) list_double_time_pane_t_ParamLimits

0xecad,	// (0x0000ecad) list_double_time_pane_t

0x1375,	// (0x00001375) list_setting_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_pane_g1

0xb5bc,	// (0x0000b5bc) list_setting_pane_g2_ParamLimits

0xb5bc,	// (0x0000b5bc) list_setting_pane_g2

0x0001,

0xecb6,	// (0x0000ecb6) list_setting_pane_g_ParamLimits

0xecb6,	// (0x0000ecb6) list_setting_pane_g

0xb7ae,	// (0x0000b7ae) list_setting_pane_t1_ParamLimits

0xb7ae,	// (0x0000b7ae) list_setting_pane_t1

0xb7c5,	// (0x0000b7c5) list_setting_pane_t2_ParamLimits

0xb7c5,	// (0x0000b7c5) list_setting_pane_t2

0x0002,

0xecbb,	// (0x0000ecbb) list_setting_pane_t_ParamLimits

0xecbb,	// (0x0000ecbb) list_setting_pane_t

0xb802,	// (0x0000b802) set_value_pane_cp_ParamLimits

0xb802,	// (0x0000b802) set_value_pane_cp

0x1375,	// (0x00001375) list_setting_number_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_setting_number_pane_g1

0xb5bc,	// (0x0000b5bc) list_setting_number_pane_g2_ParamLimits

0xb5bc,	// (0x0000b5bc) list_setting_number_pane_g2

0x0001,

0xecb6,	// (0x0000ecb6) list_setting_number_pane_g_ParamLimits

0xecb6,	// (0x0000ecb6) list_setting_number_pane_g

0xb80e,	// (0x0000b80e) list_setting_number_pane_t1_ParamLimits

0xb80e,	// (0x0000b80e) list_setting_number_pane_t1

0xb822,	// (0x0000b822) list_setting_number_pane_t2_ParamLimits

0xb822,	// (0x0000b822) list_setting_number_pane_t2

0xb839,	// (0x0000b839) list_setting_number_pane_t3_ParamLimits

0xb839,	// (0x0000b839) list_setting_number_pane_t3

0x0003,

0xecc2,	// (0x0000ecc2) list_setting_number_pane_t_ParamLimits

0xecc2,	// (0x0000ecc2) list_setting_number_pane_t

0xb802,	// (0x0000b802) set_value_pane_ParamLimits

0xb802,	// (0x0000b802) set_value_pane

0x1224,	// (0x00001224) bg_set_opt_pane_ParamLimits

0x1224,	// (0x00001224) bg_set_opt_pane

0x1245,	// (0x00001245) set_value_pane_t1

0x1253,	// (0x00001253) slider_set_pane_cp3

0x125c,	// (0x0000125c) volume_small_pane_cp

0x1265,	// (0x00001265) list_form_gen_pane

0x126e,	// (0x0000126e) scroll_pane_cp8

0xb87c,	// (0x0000b87c) form_field_data_pane_ParamLimits

0xb87c,	// (0x0000b87c) form_field_data_pane

0xb893,	// (0x0000b893) form_field_data_wide_pane_ParamLimits

0xb893,	// (0x0000b893) form_field_data_wide_pane

0xb8b3,	// (0x0000b8b3) form_field_popup_pane_ParamLimits

0xb8b3,	// (0x0000b8b3) form_field_popup_pane

0xb8d1,	// (0x0000b8d1) form_field_popup_wide_pane_ParamLimits

0xb8d1,	// (0x0000b8d1) form_field_popup_wide_pane

0x12f9,	// (0x000012f9) form_field_slider_pane_ParamLimits

0x12f9,	// (0x000012f9) form_field_slider_pane

0x130c,	// (0x0000130c) form_field_slider_wide_pane_ParamLimits

0x130c,	// (0x0000130c) form_field_slider_wide_pane

0x131f,	// (0x0000131f) data_form_pane

0xb8f2,	// (0x0000b8f2) form_field_data_pane_t1

0x134f,	// (0x0000134f) input_focus_pane

0x135d,	// (0x0000135d) data_form_wide_pane

0x1395,	// (0x00001395) form_field_data_wide_pane_t1

0x0b54,	// (0x00000b54) input_focus_pane_cp6

0xb90c,	// (0x0000b90c) form_field_popup_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7

0x13d1,	// (0x000013d1) list_form_pane

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8

0x13fa,	// (0x000013fa) list_form_wide_pane

0xb92e,	// (0x0000b92e) form_field_slider_pane_t1_ParamLimits

0xb92e,	// (0x0000b92e) form_field_slider_pane_t1

0xb946,	// (0x0000b946) form_field_slider_pane_t2_ParamLimits

0xb946,	// (0x0000b946) form_field_slider_pane_t2

0x0001,

0xeccb,	// (0x0000eccb) form_field_slider_pane_t_ParamLimits

0xeccb,	// (0x0000eccb) form_field_slider_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9

0xb95b,	// (0x0000b95b) slider_cont_pane_ParamLimits

0xb95b,	// (0x0000b95b) slider_cont_pane

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1_ParamLimits

0x144b,	// (0x0000144b) form_field_slider_wide_pane_t1

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2_ParamLimits

0x145d,	// (0x0000145d) form_field_slider_wide_pane_t2

0x0001,

0xa7dd,	// (0x0000a7dd) form_field_slider_wide_pane_t_ParamLimits

0xa7dd,	// (0x0000a7dd) form_field_slider_wide_pane_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10

0xb96f,	// (0x0000b96f) slider_cont_pane_cp1_ParamLimits

0xb96f,	// (0x0000b96f) slider_cont_pane_cp1

0xb983,	// (0x0000b983) slider_form_pane_cp

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

0xa7e2,	// (0x0000a7e2) input_focus_pane_g

0x3ddb,	// (0x00003ddb) wait_border_pane_g3_copy1

0xb98b,	// (0x0000b98b) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xcf82,	// (0x0000cf82) data_form_wide_pane_t1

0xb9a5,	// (0x0000b9a5) list_form_graphic_pane_cp_ParamLimits

0xb9a5,	// (0x0000b9a5) list_form_graphic_pane_cp

0x4f60,	// (0x00004f60) slider_form_pane_g1

0x4f69,	// (0x00004f69) slider_form_pane_g2

0x0006,

0xed85,	// (0x0000ed85) slider_form_pane_g

0xb9b8,	// (0x0000b9b8) list_form_graphic_pane_ParamLimits

0xb9b8,	// (0x0000b9b8) list_form_graphic_pane

0x151f,	// (0x0000151f) list_form_graphic_pane_g1

0x1527,	// (0x00001527) list_form_graphic_pane_t1_ParamLimits

0x1527,	// (0x00001527) list_form_graphic_pane_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5

0xb9cc,	// (0x0000b9cc) find_pane_g1

0x1545,	// (0x00001545) input_find_pane

0xb9d5,	// (0x0000b9d5) input_find_pane_g1_ParamLimits

0xb9d5,	// (0x0000b9d5) input_find_pane_g1

0xb9e1,	// (0x0000b9e1) input_find_pane_t1_ParamLimits

0xb9e1,	// (0x0000b9e1) input_find_pane_t1

0xb9f6,	// (0x0000b9f6) input_find_pane_t2_ParamLimits

0xb9f6,	// (0x0000b9f6) input_find_pane_t2

0x0001,

0xecd0,	// (0x0000ecd0) input_find_pane_t_ParamLimits

0xecd0,	// (0x0000ecd0) input_find_pane_t

0x1584,	// (0x00001584) input_focus_pane_cp5_ParamLimits

0x1584,	// (0x00001584) input_focus_pane_cp5

0xba17,	// (0x0000ba17) bg_popup_window_pane_cp2_ParamLimits

0xba17,	// (0x0000ba17) bg_popup_window_pane_cp2

0xba24,	// (0x0000ba24) listscroll_menu_pane_ParamLimits

0xba24,	// (0x0000ba24) listscroll_menu_pane

0xba30,	// (0x0000ba30) popup_submenu_window_ParamLimits

0xba30,	// (0x0000ba30) popup_submenu_window

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

0xba62,	// (0x0000ba62) tabs_2_active_pane_g1

0xba6a,	// (0x0000ba6a) tabs_2_active_pane_t1

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1_ParamLimits

0x080b,	// (0x0000080b) bg_passive_tab_pane_cp1

0xba62,	// (0x0000ba62) tabs_2_passive_pane_g1

0xba6a,	// (0x0000ba6a) tabs_2_passive_pane_t1

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4

0xba7c,	// (0x0000ba7c) tabs_2_long_active_pane_t1

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp4

0x368e,	// (0x0000368e) list_single_midp_graphic_pane_g4_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5

0xba8f,	// (0x0000ba8f) tabs_3_long_active_pane_t1

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp5

0x368e,	// (0x0000368e) list_single_midp_graphic_pane_g4

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp13

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane_ParamLimits

0x16dc,	// (0x000016dc) listscroll_popup_fast_pane

0x16eb,	// (0x000016eb) grid_popup_fast_pane_ParamLimits

0x16eb,	// (0x000016eb) grid_popup_fast_pane

0x16fd,	// (0x000016fd) scroll_pane_cp9_ParamLimits

0x16fd,	// (0x000016fd) scroll_pane_cp9

0x7178,	// (0x00007178) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7178,	// (0x00007178) list_single_graphic_hl_pane_t1_cp2

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

0xa7fc,	// (0x0000a7fc) query_popup_data_pane_t_ParamLimits

0xa7fc,	// (0x0000a7fc) query_popup_data_pane_t

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

0xa807,	// (0x0000a807) bg_set_opt_pane_g

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

0xa81a,	// (0x0000a81a) signal_pane_stacon_g_ParamLimits

0xa81a,	// (0x0000a81a) signal_pane_stacon_g

0x18a9,	// (0x000018a9) title_pane_stacon_t1_ParamLimits

0x18a9,	// (0x000018a9) title_pane_stacon_t1

0x18ce,	// (0x000018ce) uni_indicator_pane_stacon_g1

0x18d8,	// (0x000018d8) uni_indicator_pane_stacon_g2

0x18e2,	// (0x000018e2) uni_indicator_pane_stacon_g3

0x18ec,	// (0x000018ec) uni_indicator_pane_stacon_g4

0x0003,

0xa826,	// (0x0000a826) uni_indicator_pane_stacon_g

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

0xa82f,	// (0x0000a82f) battery_pane_stacon_g_ParamLimits

0xa82f,	// (0x0000a82f) battery_pane_stacon_g

0x199e,	// (0x0000199e) navi_icon_pane_stacon

0x19b2,	// (0x000019b2) navi_navi_pane_stacon

0x199e,	// (0x0000199e) navi_text_pane_stacon

0x18f6,	// (0x000018f6) control_bottom_pane_stacon_g1

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1_ParamLimits

0x19c6,	// (0x000019c6) control_bottom_pane_stacon_t1

0xbaa1,	// (0x0000baa1) grid_app_pane_ParamLimits

0xbaa1,	// (0x0000baa1) grid_app_pane

0xbad7,	// (0x0000bad7) scroll_pane_cp15_ParamLimits

0xbad7,	// (0x0000bad7) scroll_pane_cp15

0xbaf4,	// (0x0000baf4) cell_app_pane_ParamLimits

0xbaf4,	// (0x0000baf4) cell_app_pane

0xbb3b,	// (0x0000bb3b) cell_app_pane_g1_ParamLimits

0xbb3b,	// (0x0000bb3b) cell_app_pane_g1

0x1a9c,	// (0x00001a9c) cell_app_pane_g2_ParamLimits

0x1a9c,	// (0x00001a9c) cell_app_pane_g2

0x0001,

0xecd5,	// (0x0000ecd5) cell_app_pane_g_ParamLimits

0xecd5,	// (0x0000ecd5) cell_app_pane_g

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

0xa7e2,	// (0x0000a7e2) cell_highlight_pane_g

0x1ade,	// (0x00001ade) bg_scroll_pane

0x1afd,	// (0x00001afd) scroll_handle_pane

0x1b4e,	// (0x00001b4e) scroll_bg_pane_g1

0x1b63,	// (0x00001b63) scroll_bg_pane_g2

0x1b7b,	// (0x00001b7b) scroll_bg_pane_g3

0x0002,

0xa839,	// (0x0000a839) scroll_bg_pane_g

0x1b90,	// (0x00001b90) scroll_handle_focus_pane_ParamLimits

0x1b90,	// (0x00001b90) scroll_handle_focus_pane

0x1b4e,	// (0x00001b4e) scroll_handle_pane_g1

0x1b9d,	// (0x00001b9d) scroll_handle_pane_g2

0x1b7b,	// (0x00001b7b) scroll_handle_pane_g3

0x0002,

0xa840,	// (0x0000a840) scroll_handle_pane_g

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp21

0x1bb1,	// (0x00001bb1) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bb1,	// (0x00001bb1) popup_fep_japan_predictive_window_t1

0x1bc8,	// (0x00001bc8) popup_fep_japan_predictive_window_t2_ParamLimits

0x1bc8,	// (0x00001bc8) popup_fep_japan_predictive_window_t2

0x1bfb,	// (0x00001bfb) popup_fep_japan_predictive_window_t3_ParamLimits

0x1bfb,	// (0x00001bfb) popup_fep_japan_predictive_window_t3

0x0002,

0xa847,	// (0x0000a847) popup_fep_japan_predictive_window_t_ParamLimits

0xa847,	// (0x0000a847) popup_fep_japan_predictive_window_t

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

0xbb79,	// (0x0000bb79) list_single_2graphic_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_2graphic_pane_cp2

0xbb79,	// (0x0000bb79) list_single_graphic_heading_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_graphic_heading_pane_cp2

0xbb79,	// (0x0000bb79) list_single_graphic_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_graphic_pane_cp2

0xbb79,	// (0x0000bb79) list_single_heading_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_heading_pane_cp2

0x1d7a,	// (0x00001d7a) list_single_large_graphic_pane_cp2_ParamLimits

0x1d7a,	// (0x00001d7a) list_single_large_graphic_pane_cp2

0xbb79,	// (0x0000bb79) list_single_number_heading_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_number_heading_pane_cp2

0xbb79,	// (0x0000bb79) list_single_number_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_number_pane_cp2

0xbb79,	// (0x0000bb79) list_single_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_pane_cp2

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

0xa874,	// (0x0000a874) fep_china_uni_entry_pane_g

0x1eee,	// (0x00001eee) fep_entry_item_pane

0x1ef8,	// (0x00001ef8) fep_candidate_item_pane

0x1f00,	// (0x00001f00) fep_china_uni_candidate_pane_g1

0x1f08,	// (0x00001f08) fep_china_uni_candidate_pane_g2

0x1f10,	// (0x00001f10) fep_china_uni_candidate_pane_g3

0x1f18,	// (0x00001f18) fep_china_uni_candidate_pane_g4

0x0003,

0xa879,	// (0x0000a879) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1f20,	// (0x00001f20) fep_entry_item_pane_t1_ParamLimits

0x1f20,	// (0x00001f20) fep_entry_item_pane_t1

0x1f36,	// (0x00001f36) fep_candidate_item_pane_t1_ParamLimits

0x1f36,	// (0x00001f36) fep_candidate_item_pane_t1

0x1f4b,	// (0x00001f4b) fep_candidate_item_pane_t2_ParamLimits

0x1f4b,	// (0x00001f4b) fep_candidate_item_pane_t2

0x0001,

0xa882,	// (0x0000a882) fep_candidate_item_pane_t_ParamLimits

0xa882,	// (0x0000a882) fep_candidate_item_pane_t

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

0xa887,	// (0x0000a887) scroll_handle_focus_pane_g

0xbbdb,	// (0x0000bbdb) list_single_2graphic_pane_g1_ParamLimits

0xbbdb,	// (0x0000bbdb) list_single_2graphic_pane_g1

0xb56e,	// (0x0000b56e) list_single_2graphic_pane_g2_ParamLimits

0xb56e,	// (0x0000b56e) list_single_2graphic_pane_g2

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3_ParamLimits

0x0e57,	// (0x00000e57) list_single_2graphic_pane_g3

0xbbe7,	// (0x0000bbe7) list_single_2graphic_pane_g4_ParamLimits

0xbbe7,	// (0x0000bbe7) list_single_2graphic_pane_g4

0x0003,

0xecdf,	// (0x0000ecdf) list_single_2graphic_pane_g_ParamLimits

0xecdf,	// (0x0000ecdf) list_single_2graphic_pane_g

0xbbf3,	// (0x0000bbf3) list_single_2graphic_pane_t1_ParamLimits

0xbbf3,	// (0x0000bbf3) list_single_2graphic_pane_t1

0xbc21,	// (0x0000bc21) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbc21,	// (0x0000bc21) list_double2_graphic_large_graphic_pane_g1

0xb5ab,	// (0x0000b5ab) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5ab,	// (0x0000b5ab) list_double2_graphic_large_graphic_pane_g2

0xb5bc,	// (0x0000b5bc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb5bc,	// (0x0000b5bc) list_double2_graphic_large_graphic_pane_g3

0xbc33,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbc33,	// (0x0000bc33) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xece8,	// (0x0000ece8) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xece8,	// (0x0000ece8) list_double2_graphic_large_graphic_pane_g

0xbc3f,	// (0x0000bc3f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbc3f,	// (0x0000bc3f) list_double2_graphic_large_graphic_pane_t1

0xbc55,	// (0x0000bc55) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbc55,	// (0x0000bc55) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xecf1,	// (0x0000ecf1) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xecf1,	// (0x0000ecf1) list_double2_graphic_large_graphic_pane_t

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

0xbc67,	// (0x0000bc67) bg_active_tab_pane_g1_cp1

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp1

0xbc70,	// (0x0000bc70) bg_active_tab_pane_g3_cp1

0xbc67,	// (0x0000bc67) bg_passive_tab_pane_g1_cp1

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp1

0xbc70,	// (0x0000bc70) bg_passive_tab_pane_g3_cp1

0xbc79,	// (0x0000bc79) bg_active_tab_pane_g1_cp2

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp2

0xbc82,	// (0x0000bc82) bg_active_tab_pane_g3_cp2

0xbc79,	// (0x0000bc79) bg_passive_tab_pane_g1_cp2

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp2

0xbc82,	// (0x0000bc82) bg_passive_tab_pane_g3_cp2

0xbc8b,	// (0x0000bc8b) bg_active_tab_pane_g1_cp3

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp3

0xbc94,	// (0x0000bc94) bg_active_tab_pane_g3_cp3

0xbc8b,	// (0x0000bc8b) bg_passive_tab_pane_g1_cp3

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp3

0xbc94,	// (0x0000bc94) bg_passive_tab_pane_g3_cp3

0xbc9d,	// (0x0000bc9d) bg_active_tab_pane_g1_cp4

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp4

0xbca6,	// (0x0000bca6) bg_active_tab_pane_g3_cp4

0xbc9d,	// (0x0000bc9d) bg_passive_tab_pane_g1_cp4

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp4

0xbca6,	// (0x0000bca6) bg_passive_tab_pane_g3_cp4

0x2247,	// (0x00002247) bg_active_tab_pane_g1_cp5

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp5

0x2250,	// (0x00002250) bg_active_tab_pane_g3_cp5

0x2247,	// (0x00002247) bg_passive_tab_pane_g1_cp5

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp5

0x2250,	// (0x00002250) bg_passive_tab_pane_g3_cp5

0xa3e6,	// (0x0000a3e6) list_set_graphic_pane_ParamLimits

0xa3e6,	// (0x0000a3e6) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2277,	// (0x00002277) list_set_graphic_pane_g1_ParamLimits

0x2277,	// (0x00002277) list_set_graphic_pane_g1

0x2283,	// (0x00002283) list_set_graphic_pane_g2_ParamLimits

0x2283,	// (0x00002283) list_set_graphic_pane_g2

0x0001,

0xa8a5,	// (0x0000a8a5) list_set_graphic_pane_g_ParamLimits

0xa8a5,	// (0x0000a8a5) list_set_graphic_pane_g

0x0009,

0xac09,	// (0x0000ac09) volume_small_pane_cp_g

0x22a7,	// (0x000022a7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x22a7,	// (0x000022a7) list_double2_large_graphic_pane_g1_cp2

0x22b5,	// (0x000022b5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x22b5,	// (0x000022b5) list_double2_large_graphic_pane_g2_cp2

0x22c6,	// (0x000022c6) list_double2_large_graphic_pane_g3_cp2

0x22ce,	// (0x000022ce) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x22ce,	// (0x000022ce) list_double2_large_graphic_pane_t1_cp2

0x22e4,	// (0x000022e4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x22e4,	// (0x000022e4) list_double2_large_graphic_pane_t2_cp2

0x4a18,	// (0x00004a18) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4a18,	// (0x00004a18) list_double_large_graphic_pane_g1_cp2

0x4a2b,	// (0x00004a2b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4a2b,	// (0x00004a2b) list_double_large_graphic_pane_g2_cp2

0x2454,	// (0x00002454) list_double_large_graphic_pane_g3_cp2

0x4a3c,	// (0x00004a3c) list_double_large_graphic_pane_g4_cp

0x4a44,	// (0x00004a44) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4a44,	// (0x00004a44) list_double_large_graphic_pane_t1_cp2

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4a5b,	// (0x00004a5b) list_double_large_graphic_pane_t2_cp2

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

0x4820,	// (0x00004820) list_single_heading_pane_t2_cp2_ParamLimits

0x4820,	// (0x00004820) list_single_heading_pane_t2_cp2

0x4762,	// (0x00004762) list_double_graphic_pane_g1_cp2_ParamLimits

0x4762,	// (0x00004762) list_double_graphic_pane_g1_cp2

0x476e,	// (0x0000476e) list_double_graphic_pane_g2_cp2_ParamLimits

0x476e,	// (0x0000476e) list_double_graphic_pane_g2_cp2

0x477d,	// (0x0000477d) list_double_graphic_pane_g3_cp2

0x4785,	// (0x00004785) list_double_graphic_pane_t1_cp2_ParamLimits

0x4785,	// (0x00004785) list_double_graphic_pane_t1_cp2

0x479b,	// (0x0000479b) list_double_graphic_pane_t2_cp2_ParamLimits

0x479b,	// (0x0000479b) list_double_graphic_pane_t2_cp2

0x2448,	// (0x00002448) list_double_number_pane_g1_cp2_ParamLimits

0x2448,	// (0x00002448) list_double_number_pane_g1_cp2

0x2454,	// (0x00002454) list_double_number_pane_g2_cp2

0x4726,	// (0x00004726) list_double_number_pane_t1_cp2_ParamLimits

0x4726,	// (0x00004726) list_double_number_pane_t1_cp2

0x473a,	// (0x0000473a) list_double_number_pane_t2_cp2_ParamLimits

0x473a,	// (0x0000473a) list_double_number_pane_t2_cp2

0x4750,	// (0x00004750) list_double_number_pane_t3_cp2_ParamLimits

0x4750,	// (0x00004750) list_double_number_pane_t3_cp2

0x45fe,	// (0x000045fe) list_single_graphic_pane_g1_cp2_ParamLimits

0x45fe,	// (0x000045fe) list_single_graphic_pane_g1_cp2

0x24ac,	// (0x000024ac) list_single_graphic_pane_g2_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_graphic_pane_g2_cp2

0x24b8,	// (0x000024b8) list_single_graphic_pane_g3_cp2

0x45d4,	// (0x000045d4) list_single_graphic_pane_t1_cp2_ParamLimits

0x45d4,	// (0x000045d4) list_single_graphic_pane_t1_cp2

0x24ac,	// (0x000024ac) list_single_number_pane_g1_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_number_pane_g1_cp2

0x24b8,	// (0x000024b8) list_single_number_pane_g2_cp2

0x45d4,	// (0x000045d4) list_single_number_pane_t1_cp2_ParamLimits

0x45d4,	// (0x000045d4) list_single_number_pane_t1_cp2

0x45ea,	// (0x000045ea) list_single_number_pane_t2_cp2_ParamLimits

0x45ea,	// (0x000045ea) list_single_number_pane_t2_cp2

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

0x4445,	// (0x00004445) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4445,	// (0x00004445) list_single_graphic_heading_pane_g1_cp2

0x4412,	// (0x00004412) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4412,	// (0x00004412) list_single_graphic_heading_pane_g4_cp2

0x24b8,	// (0x000024b8) list_single_graphic_heading_pane_g5_cp2

0x4451,	// (0x00004451) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4451,	// (0x00004451) list_single_graphic_heading_pane_t1_cp2

0x4467,	// (0x00004467) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4467,	// (0x00004467) list_single_graphic_heading_pane_t2_cp2

0x4406,	// (0x00004406) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4406,	// (0x00004406) list_single_2graphic_pane_g1_cp2

0x4412,	// (0x00004412) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4412,	// (0x00004412) list_single_2graphic_pane_g2_cp2

0x24b8,	// (0x000024b8) list_single_2graphic_pane_g3_cp2

0x4423,	// (0x00004423) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4423,	// (0x00004423) list_single_2graphic_pane_g4_cp2

0x442f,	// (0x0000442f) list_single_2graphic_pane_t1_cp2_ParamLimits

0x442f,	// (0x0000442f) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x3fee,	// (0x00003fee) list_highlight_pane_g1_cp1

0x3ff6,	// (0x00003ff6) list_highlight_pane_g2_cp1

0x3ffe,	// (0x00003ffe) list_highlight_pane_g3_cp1

0x4006,	// (0x00004006) list_highlight_pane_g4_cp1

0x400e,	// (0x0000400e) list_highlight_pane_g5_cp1

0x4016,	// (0x00004016) list_highlight_pane_g6_cp1

0x401e,	// (0x0000401e) list_highlight_pane_g7_cp1

0x4026,	// (0x00004026) list_highlight_pane_g8_cp1

0x402e,	// (0x0000402e) list_highlight_pane_g9_cp1

0xcade,	// (0x0000cade) form_field_slider_pane_t3

0xcaee,	// (0x0000caee) form_field_slider_pane_t4

0x3f22,	// (0x00003f22) slider_form_pane_ParamLimits

0x3f22,	// (0x00003f22) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x486c,	// (0x0000486c) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaa33,	// (0x0000aa33) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x252a,	// (0x0000252a) text_digital

0x2539,	// (0x00002539) text_primary

0x2548,	// (0x00002548) text_primary_small

0x2557,	// (0x00002557) text_secondary

0x2566,	// (0x00002566) text_title

0x516c,	// (0x0000516c) bg_passive_tab_pane_g1_cp3_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp3_srt

0x5175,	// (0x00005175) bg_passive_tab_pane_g3_cp3_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp3_srt

0x517e,	// (0x0000517e) tabs_4_active_pane_srt_g1

0xd03d,	// (0x0000d03d) tabs_4_active_pane_srt_t1_ParamLimits

0xd03d,	// (0x0000d03d) tabs_4_active_pane_srt_t1

0x516c,	// (0x0000516c) bg_active_tab_pane_g1_cp3_copy1

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp3_copy1

0x5175,	// (0x00005175) bg_active_tab_pane_g3_cp3_copy1

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_active_pane_srt

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) tabs_2_long_passive_pane_srt

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp4_srt

0x4d29,	// (0x00004d29) bg_passive_tab_pane_g1_cp4_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp4_srt

0x4d32,	// (0x00004d32) bg_passive_tab_pane_g3_cp4_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_srt

0xce19,	// (0x0000ce19) tabs_2_long_active_pane_srt_t1_ParamLimits

0xce19,	// (0x0000ce19) tabs_2_long_active_pane_srt_t1

0x4d29,	// (0x00004d29) bg_active_tab_pane_g1_cp4_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp4_srt

0x4d32,	// (0x00004d32) bg_active_tab_pane_g3_cp4_srt

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_active_pane_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_cp_srt

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt_ParamLimits

0x080b,	// (0x0000080b) tabs_3_long_passive_pane_srt

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp5_srt

0x2247,	// (0x00002247) bg_passive_tab_pane_g1_cp5_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp5_srt

0x2250,	// (0x00002250) bg_passive_tab_pane_g3_cp5_srt

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_srt

0xce03,	// (0x0000ce03) tabs_3_long_active_pane_srt_t1_ParamLimits

0xce03,	// (0x0000ce03) tabs_3_long_active_pane_srt_t1

0x2247,	// (0x00002247) bg_active_tab_pane_g1_cp5_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp5_srt

0x2250,	// (0x00002250) bg_active_tab_pane_g3_cp5_srt

0x4d09,	// (0x00004d09) navi_text_pane_srt_t1

0x4d01,	// (0x00004d01) navi_icon_pane_srt_g1

0x27de,	// (0x000027de) midp_editing_number_pane_srt

0x2575,	// (0x00002575) midp_ticker_pane_srt

0x27e6,	// (0x000027e6) midp_ticker_pane_srt_g1

0x27ee,	// (0x000027ee) midp_ticker_pane_srt_g2

0x0001,

0xa8c4,	// (0x0000a8c4) midp_ticker_pane_srt_g

0x27f6,	// (0x000027f6) midp_ticker_pane_srt_t1

0x4cf2,	// (0x00004cf2) midp_editing_number_pane_t1_copy1

0xbcaf,	// (0x0000bcaf) listscroll_midp_pane

0xbcaf,	// (0x0000bcaf) midp_form_pane

0x25ed,	// (0x000025ed) midp_info_popup_window_ParamLimits

0x25ed,	// (0x000025ed) midp_info_popup_window

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50_ParamLimits

0x1584,	// (0x00001584) bg_popup_sub_pane_cp50

0x3c54,	// (0x00003c54) listscroll_midp_info_pane_ParamLimits

0x3c54,	// (0x00003c54) listscroll_midp_info_pane

0x3c3c,	// (0x00003c3c) listscroll_form_midp_pane_ParamLimits

0x3c3c,	// (0x00003c3c) listscroll_form_midp_pane

0x3c48,	// (0x00003c48) scroll_bar_cp050

0xcad2,	// (0x0000cad2) list_midp_pane

0x5e37,	// (0x00005e37) signal_pane_g2_cp

0x3b56,	// (0x00003b56) listscroll_midp_info_pane_t1_ParamLimits

0x3b56,	// (0x00003b56) listscroll_midp_info_pane_t1

0x3b6e,	// (0x00003b6e) listscroll_midp_info_pane_t2_ParamLimits

0x3b6e,	// (0x00003b6e) listscroll_midp_info_pane_t2

0x3bac,	// (0x00003bac) listscroll_midp_info_pane_t3_ParamLimits

0x3bac,	// (0x00003bac) listscroll_midp_info_pane_t3

0x3be6,	// (0x00003be6) listscroll_midp_info_pane_t4_ParamLimits

0x3be6,	// (0x00003be6) listscroll_midp_info_pane_t4

0x0003,

0xa96e,	// (0x0000a96e) listscroll_midp_info_pane_t_ParamLimits

0xa96e,	// (0x0000a96e) listscroll_midp_info_pane_t

0x1642,	// (0x00001642) scroll_pane_cp21

0x3afa,	// (0x00003afa) form_midp_field_choice_group_pane

0x3b03,	// (0x00003b03) form_midp_field_text_pane

0x3b3c,	// (0x00003b3c) form_midp_field_time_pane

0x3b44,	// (0x00003b44) form_midp_gauge_slider_pane

0x3b4d,	// (0x00003b4d) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xcab6,	// (0x0000cab6) list_single_midp_pane_ParamLimits

0xcab6,	// (0x0000cab6) list_single_midp_pane

0xca92,	// (0x0000ca92) form_midp_field_text_pane_t1

0x37b1,	// (0x000037b1) input_focus_pane_cp050

0x3aad,	// (0x00003aad) list_midp_form_text_pane

0x3a3d,	// (0x00003a3d) form_midp_field_choice_group_pane_t1

0x3a4b,	// (0x00003a4b) input_focus_pane_cp051

0x3a5f,	// (0x00003a5f) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3a21,	// (0x00003a21) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3a2f,	// (0x00003a2f) form_midp_field_time_pane_t2

0x0001,

0x269d,	// (0x0000269d) aid_navinavi_width_2_pane

0xa969,	// (0x0000a969) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x39e1,	// (0x000039e1) form_midp_gauge_slider_pane_t1

0x39ef,	// (0x000039ef) form_midp_gauge_slider_pane_t2

0xca76,	// (0x0000ca76) form_midp_gauge_slider_pane_t3

0xca84,	// (0x0000ca84) form_midp_gauge_slider_pane_t4

0x0003,

0xed32,	// (0x0000ed32) form_midp_gauge_slider_pane_t

0x3a19,	// (0x00003a19) form_midp_slider_pane

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041_ParamLimits

0x04e9,	// (0x000004e9) bg_input_focus_pane_cp041

0x39ae,	// (0x000039ae) form_midp_gauge_wait_pane_t1_ParamLimits

0x39ae,	// (0x000039ae) form_midp_gauge_wait_pane_t1

0x39c0,	// (0x000039c0) form_midp_gauge_wait_pane_t2_ParamLimits

0x39c0,	// (0x000039c0) form_midp_gauge_wait_pane_t2

0x0001,

0xa95b,	// (0x0000a95b) form_midp_gauge_wait_pane_t_ParamLimits

0xa95b,	// (0x0000a95b) form_midp_gauge_wait_pane_t

0x39d2,	// (0x000039d2) form_midp_wait_pane_ParamLimits

0x39d2,	// (0x000039d2) form_midp_wait_pane

0x3978,	// (0x00003978) form_midp_image_pane_g1

0x3981,	// (0x00003981) form_midp_image_pane_t1

0x3990,	// (0x00003990) form_midp_image_pane_t2

0x399f,	// (0x0000399f) form_midp_image_pane_t3

0x0002,

0xa954,	// (0x0000a954) form_midp_image_pane_t

0x3960,	// (0x00003960) list_single_midp_pane_g1

0x3969,	// (0x00003969) list_single_midp_pane_t1

0xca5f,	// (0x0000ca5f) list_midp_form_item_pane_ParamLimits

0xca5f,	// (0x0000ca5f) list_midp_form_item_pane

0x2645,	// (0x00002645) list_midp_form_item_pane_t1

0x2654,	// (0x00002654) midp_ticker_pane_g1

0x2660,	// (0x00002660) midp_ticker_pane_g2

0x0001,

0xa8aa,	// (0x0000a8aa) midp_ticker_pane_g

0xbd5b,	// (0x0000bd5b) midp_ticker_pane_t1

0xcf9e,	// (0x0000cf9e) midp_editing_number_pane_t1

0x4fbe,	// (0x00004fbe) midp_editing_number_pane

0x4fcd,	// (0x00004fcd) midp_ticker_pane

0x4cba,	// (0x00004cba) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4cc2,	// (0x00004cc2) listscroll_ai_message_pane

0x4c44,	// (0x00004c44) ai_message_heading_pane_g1_ParamLimits

0x4c44,	// (0x00004c44) ai_message_heading_pane_g1

0x4c50,	// (0x00004c50) ai_message_heading_pane_g2_ParamLimits

0x4c50,	// (0x00004c50) ai_message_heading_pane_g2

0x4c5c,	// (0x00004c5c) ai_message_heading_pane_g3_ParamLimits

0x4c5c,	// (0x00004c5c) ai_message_heading_pane_g3

0x4c68,	// (0x00004c68) ai_message_heading_pane_g4_ParamLimits

0x4c68,	// (0x00004c68) ai_message_heading_pane_g4

0x0003,

0xaa95,	// (0x0000aa95) ai_message_heading_pane_g_ParamLimits

0xaa95,	// (0x0000aa95) ai_message_heading_pane_g

0x4c74,	// (0x00004c74) ai_message_heading_pane_t1_ParamLimits

0x4c74,	// (0x00004c74) ai_message_heading_pane_t1

0x4c8e,	// (0x00004c8e) ai_message_heading_pane_t2_ParamLimits

0x4c8e,	// (0x00004c8e) ai_message_heading_pane_t2

0x0001,

0xaa9e,	// (0x0000aa9e) ai_message_heading_pane_t_ParamLimits

0xaa9e,	// (0x0000aa9e) ai_message_heading_pane_t

0x4ca0,	// (0x00004ca0) bg_popup_heading_pane_cp1_ParamLimits

0x4ca0,	// (0x00004ca0) bg_popup_heading_pane_cp1

0x4c32,	// (0x00004c32) list_ai_message_pane_ParamLimits

0x4c32,	// (0x00004c32) list_ai_message_pane

0x1642,	// (0x00001642) scroll_pane_cp10

0x4b7e,	// (0x00004b7e) list_ai_message_pane_g1

0x4b86,	// (0x00004b86) list_ai_message_pane_g2

0x0001,

0xaa72,	// (0x0000aa72) list_ai_message_pane_g

0x4b8e,	// (0x00004b8e) list_ai_message_pane_t1_ParamLimits

0x4b8e,	// (0x00004b8e) list_ai_message_pane_t1

0x4ba3,	// (0x00004ba3) list_ai_message_pane_t2_ParamLimits

0x4ba3,	// (0x00004ba3) list_ai_message_pane_t2

0x4bb8,	// (0x00004bb8) list_ai_message_pane_t3_ParamLimits

0x4bb8,	// (0x00004bb8) list_ai_message_pane_t3

0x4bcd,	// (0x00004bcd) list_ai_message_pane_t4_ParamLimits

0x4bcd,	// (0x00004bcd) list_ai_message_pane_t4

0x0003,

0xaa77,	// (0x0000aa77) list_ai_message_pane_t_ParamLimits

0xaa77,	// (0x0000aa77) list_ai_message_pane_t

0xcdcc,	// (0x0000cdcc) cell_ai_soft_ind_pane_ParamLimits

0xcdcc,	// (0x0000cdcc) cell_ai_soft_ind_pane

0x267e,	// (0x0000267e) cell_ai_soft_ind_pane_g1_ParamLimits

0x267e,	// (0x0000267e) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x268b,	// (0x0000268b) text_secondary_cp56_ParamLimits

0x268b,	// (0x0000268b) text_secondary_cp56

0x4b3d,	// (0x00004b3d) example_general_pane_ParamLimits

0x4b3d,	// (0x00004b3d) example_general_pane

0x4b49,	// (0x00004b49) example_parent_pane_g1_ParamLimits

0x4b49,	// (0x00004b49) example_parent_pane_g1

0x4b55,	// (0x00004b55) example_parent_pane_t1_ParamLimits

0x4b55,	// (0x00004b55) example_parent_pane_t1

0xc2c0,	// (0x0000c2c0) popup_preview_text_window_ParamLimits

0xc2c0,	// (0x0000c2c0) popup_preview_text_window

0x24a4,	// (0x000024a4) list_single_pane_cp2_g4

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane_ParamLimits

0x08b5,	// (0x000008b5) bg_popup_preview_window_pane

0x4874,	// (0x00004874) popup_preview_text_window_t1_ParamLimits

0x4874,	// (0x00004874) popup_preview_text_window_t1

0x4892,	// (0x00004892) popup_preview_text_window_t2_ParamLimits

0x4892,	// (0x00004892) popup_preview_text_window_t2

0x48db,	// (0x000048db) popup_preview_text_window_t3_ParamLimits

0x48db,	// (0x000048db) popup_preview_text_window_t3

0x4920,	// (0x00004920) popup_preview_text_window_t4_ParamLimits

0x4920,	// (0x00004920) popup_preview_text_window_t4

0x0004,

0xaa46,	// (0x0000aa46) popup_preview_text_window_t_ParamLimits

0xaa46,	// (0x0000aa46) popup_preview_text_window_t

0x499e,	// (0x0000499e) scroll_pane_cp11

0x3621,	// (0x00003621) bg_popup_preview_window_pane_g1

0x4834,	// (0x00004834) bg_popup_preview_window_pane_g2

0x483c,	// (0x0000483c) bg_popup_preview_window_pane_g3

0x4844,	// (0x00004844) bg_popup_preview_window_pane_g4

0x484c,	// (0x0000484c) bg_popup_preview_window_pane_g5

0x4854,	// (0x00004854) bg_popup_preview_window_pane_g6

0x485c,	// (0x0000485c) bg_popup_preview_window_pane_g7

0x4864,	// (0x00004864) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc23c,	// (0x0000c23c) popup_midp_note_alarm_window_ParamLimits

0xc23c,	// (0x0000c23c) popup_midp_note_alarm_window

0x131f,	// (0x0000131f) data_form_pane_ParamLimits

0xb8e8,	// (0x0000b8e8) form_field_data_pane_g1

0xb8f2,	// (0x0000b8f2) form_field_data_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_ParamLimits

0x135d,	// (0x0000135d) data_form_wide_pane_ParamLimits

0x1369,	// (0x00001369) form_field_data_wide_pane_g1

0x1395,	// (0x00001395) form_field_data_wide_pane_t1_ParamLimits

0x0b54,	// (0x00000b54) input_focus_pane_cp6_ParamLimits

0xba54,	// (0x0000ba54) input_popup_find_pane_g1_ParamLimits

0xba54,	// (0x0000ba54) input_popup_find_pane_g1

0x1971,	// (0x00001971) aid_navi_side_left_pane

0x1986,	// (0x00001986) aid_navi_side_right_pane

0x40e9,	// (0x000040e9) bg_popup_window_pane_cp30_ParamLimits

0x40e9,	// (0x000040e9) bg_popup_window_pane_cp30

0x4163,	// (0x00004163) popup_midp_note_alarm_window_g1_ParamLimits

0x4163,	// (0x00004163) popup_midp_note_alarm_window_g1

0x4193,	// (0x00004193) popup_midp_note_alarm_window_t1_ParamLimits

0x4193,	// (0x00004193) popup_midp_note_alarm_window_t1

0x4234,	// (0x00004234) popup_midp_note_alarm_window_t2_ParamLimits

0x4234,	// (0x00004234) popup_midp_note_alarm_window_t2

0x42e2,	// (0x000042e2) popup_midp_note_alarm_window_t3_ParamLimits

0x42e2,	// (0x000042e2) popup_midp_note_alarm_window_t3

0x430a,	// (0x0000430a) popup_midp_note_alarm_window_t4_ParamLimits

0x430a,	// (0x0000430a) popup_midp_note_alarm_window_t4

0x432a,	// (0x0000432a) popup_midp_note_alarm_window_t5_ParamLimits

0x432a,	// (0x0000432a) popup_midp_note_alarm_window_t5

0x000a,

0xa9e3,	// (0x0000a9e3) popup_midp_note_alarm_window_t_ParamLimits

0xa9e3,	// (0x0000a9e3) popup_midp_note_alarm_window_t

0x43d6,	// (0x000043d6) wait_bar_pane_cp1_ParamLimits

0x43d6,	// (0x000043d6) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3dc7,	// (0x00003dc7) wait_border_pane_g1_copy1

0x13af,	// (0x000013af) form_field_popup_pane_g1

0xb90c,	// (0x0000b90c) form_field_popup_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_ParamLimits

0x13d1,	// (0x000013d1) list_form_pane_ParamLimits

0x13dd,	// (0x000013dd) form_field_popup_wide_pane_g1

0x13e5,	// (0x000013e5) form_field_popup_wide_pane_t1_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_ParamLimits

0x13fa,	// (0x000013fa) list_form_wide_pane_ParamLimits

0x51f6,	// (0x000051f6) aid_size_cell_graphic_pane

0xb98b,	// (0x0000b98b) data_form_pane_t1_ParamLimits

0xcf82,	// (0x0000cf82) data_form_wide_pane_t1_ParamLimits

0xc675,	// (0x0000c675) bg_status_flat_pane

0xb20d,	// (0x0000b20d) title_pane_t1_ParamLimits

0x04b1,	// (0x000004b1) title_pane_t2_ParamLimits

0x04d7,	// (0x000004d7) title_pane_t3_ParamLimits

0xec0c,	// (0x0000ec0c) title_pane_t_ParamLimits

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

0x3fee,	// (0x00003fee) bg_status_flat_pane_g1

0x3ff6,	// (0x00003ff6) bg_status_flat_pane_g2

0x3ffe,	// (0x00003ffe) bg_status_flat_pane_g3

0x4006,	// (0x00004006) bg_status_flat_pane_g4

0x400e,	// (0x0000400e) bg_status_flat_pane_g5

0x4016,	// (0x00004016) bg_status_flat_pane_g6

0x401e,	// (0x0000401e) bg_status_flat_pane_g7

0xb2a1,	// (0x0000b2a1) tabs_3_active_pane_t1_ParamLimits

0xb2a1,	// (0x0000b2a1) tabs_3_passive_pane_t1_ParamLimits

0xb2bb,	// (0x0000b2bb) tabs_4_active_pane_t1_ParamLimits

0xb2bb,	// (0x0000b2bb) tabs_4_1_passive_pane_t1_ParamLimits

0xba6a,	// (0x0000ba6a) tabs_2_active_pane_t1_ParamLimits

0xba6a,	// (0x0000ba6a) tabs_2_passive_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp4_ParamLimits

0xba7c,	// (0x0000ba7c) tabs_2_long_active_pane_t1_ParamLimits

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp4_ParamLimits

0x36de,	// (0x000036de) list_single_midp_graphic_pane_t1_ParamLimits

0x04e9,	// (0x000004e9) bg_active_tab_pane_cp5_ParamLimits

0xba8f,	// (0x0000ba8f) tabs_3_long_active_pane_t1_ParamLimits

0x2af7,	// (0x00002af7) bg_passive_tab_pane_cp5_ParamLimits

0x36de,	// (0x000036de) list_single_midp_graphic_pane_t1

0xc675,	// (0x0000c675) bg_status_flat_pane_ParamLimits

0x3220,	// (0x00003220) indicator_pane_cp2_ParamLimits

0x3220,	// (0x00003220) indicator_pane_cp2

0xc7ec,	// (0x0000c7ec) navi_pane_srt_ParamLimits

0xc7ec,	// (0x0000c7ec) navi_pane_srt

0x3368,	// (0x00003368) popup_clock_digital_analogue_window_cp1

0x066d,	// (0x0000066d) indicator_pane_t1

0x2575,	// (0x00002575) copy_highlight_pane

0x2575,	// (0x00002575) cursor_graphics_pane

0x2575,	// (0x00002575) graphic_within_text_pane

0x2575,	// (0x00002575) link_highlight_pane

0x4961,	// (0x00004961) popup_preview_text_window_t5_ParamLimits

0x4961,	// (0x00004961) popup_preview_text_window_t5

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

0x408c,	// (0x0000408c) graphic_text_primary_pane

0x4095,	// (0x00004095) graphic_text_primary_small_pane

0x26b6,	// (0x000026b6) graphic_text_secondary_pane

0x26a5,	// (0x000026a5) graphic_text_title_pane

0xbd6d,	// (0x0000bd6d) cursor_primary_pane_g1

0x407e,	// (0x0000407e) cursor_text_primary_t1

0xcb12,	// (0x0000cb12) cursor_primary_small_pane_g1

0x4070,	// (0x00004070) cursor_text_primary_small_t1

0xcb08,	// (0x0000cb08) cursor_primary_small_pane_g1_copy1

0x4058,	// (0x00004058) cursor_text_primary_small_t1_copy1

0x4036,	// (0x00004036) cursor_text_title_t1

0xcafe,	// (0x0000cafe) cursor_title_pane_g1

0xbd6d,	// (0x0000bd6d) cursor_digital_pane_g1

0x26d8,	// (0x000026d8) cursor_text_digital_t1

0x3fd7,	// (0x00003fd7) link_highlight_primary_pane_g1

0x3fdf,	// (0x00003fdf) link_highlight_primary_pane_t1

0x26e6,	// (0x000026e6) link_highlight_primary_small_pane_g1

0x26ee,	// (0x000026ee) link_highlight_primary_small_pane_t1

0x26e6,	// (0x000026e6) link_highlight_secondary_pane_g1

0x26fd,	// (0x000026fd) link_highlight_secondary_pane_t1

0x3f4b,	// (0x00003f4b) link_highlight_title_pane_g1

0x3f53,	// (0x00003f53) link_highlight_title_pane_t1

0x3f34,	// (0x00003f34) link_highlight_digital_pane_g1

0x3f3c,	// (0x00003f3c) link_highlight_digital_pane_t1

0x3e0c,	// (0x00003e0c) copy_highlight_primary_pane_g1

0x3e14,	// (0x00003e14) copy_highlight_primary_pane_t1

0x3de6,	// (0x00003de6) copy_highlight_primary_small_pane_g1

0x3dfd,	// (0x00003dfd) copy_highlight_primary_small_pane_t1

0x270c,	// (0x0000270c) copy_highlight_secondary_pane_g1

0x2714,	// (0x00002714) copy_highlight_secondary_pane_t1

0x3de6,	// (0x00003de6) copy_highlight_title_pane_g1

0x3dee,	// (0x00003dee) copy_highlight_title_pane_t1

0x3e0c,	// (0x00003e0c) copy_highlight_digital_pane_g1

0x547c,	// (0x0000547c) copy_highlight_digital_pane_t1

0x53d0,	// (0x000053d0) graphic_text_primary_pane_g1

0x5460,	// (0x00005460) graphic_text_primary_pane_t1

0x546e,	// (0x0000546e) graphic_text_primary_pane_t2

0x0001,

0xab12,	// (0x0000ab12) graphic_text_primary_pane_t

0x543c,	// (0x0000543c) graphic_text_primary_small_pane_g1

0x5444,	// (0x00005444) graphic_text_primary_small_pane_t1

0x5452,	// (0x00005452) graphic_text_primary_small_pane_t2

0x0001,

0xab0d,	// (0x0000ab0d) graphic_text_primary_small_pane_t

0x5418,	// (0x00005418) graphic_text_secondary_pane_g1

0x5420,	// (0x00005420) graphic_text_secondary_pane_t1

0x542e,	// (0x0000542e) graphic_text_secondary_pane_t2

0x0001,

0xab08,	// (0x0000ab08) graphic_text_secondary_pane_t

0x53f4,	// (0x000053f4) graphic_text_title_pane_g1

0x53fc,	// (0x000053fc) graphic_text_title_pane_t1

0x540a,	// (0x0000540a) graphic_text_title_pane_t2

0x0001,

0xab03,	// (0x0000ab03) graphic_text_title_pane_t

0x53d0,	// (0x000053d0) graphic_text_digital_pane_g1

0x53d8,	// (0x000053d8) graphic_text_digital_pane_t1

0x53e6,	// (0x000053e6) graphic_text_digital_pane_t2

0x0001,

0xaafe,	// (0x0000aafe) graphic_text_digital_pane_t

0x04e9,	// (0x000004e9) navi_icon_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x04e9,	// (0x000004e9) navi_text_pane_srt_ParamLimits

0x04e9,	// (0x000004e9) navi_text_pane_srt

0x539b,	// (0x0000539b) navi_navi_icon_text_pane_srt

0x53a3,	// (0x000053a3) navi_navi_pane_srt_g1_ParamLimits

0x53a3,	// (0x000053a3) navi_navi_pane_srt_g1

0x53b5,	// (0x000053b5) navi_navi_pane_srt_g2_ParamLimits

0x53b5,	// (0x000053b5) navi_navi_pane_srt_g2

0x0001,

0xaaf9,	// (0x0000aaf9) navi_navi_pane_srt_g_ParamLimits

0xaaf9,	// (0x0000aaf9) navi_navi_pane_srt_g

0x53c7,	// (0x000053c7) navi_navi_tabs_pane_srt

0x539b,	// (0x0000539b) navi_navi_text_pane_srt

0x539b,	// (0x0000539b) navi_navi_volume_pane_srt

0x538c,	// (0x0000538c) navi_navi_text_pane_srt_t1

0x5367,	// (0x00005367) navi_navi_volume_pane_srt_g1

0x536f,	// (0x0000536f) volume_small_pane_srt_ParamLimits

0x536f,	// (0x0000536f) volume_small_pane_srt

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

0xa8af,	// (0x0000a8af) volume_small_pane_srt_g_ParamLimits

0xa8af,	// (0x0000a8af) volume_small_pane_srt_g

0x095e,	// (0x0000095e) query_popup_data_pane_cp2

0x5355,	// (0x00005355) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5355,	// (0x00005355) navi_navi_icon_text_pane_srt_t1

0x408c,	// (0x0000408c) navi_tabs_2_long_pane_srt

0x408c,	// (0x0000408c) navi_tabs_2_pane_srt

0x408c,	// (0x0000408c) navi_tabs_3_long_pane_srt

0x408c,	// (0x0000408c) navi_tabs_3_pane_srt

0x408c,	// (0x0000408c) navi_tabs_4_pane_srt

0x532d,	// (0x0000532d) tabs_2_active_pane_srt_ParamLimits

0x532d,	// (0x0000532d) tabs_2_active_pane_srt

0x533d,	// (0x0000533d) tabs_2_passive_pane_srt_ParamLimits

0x533d,	// (0x0000533d) tabs_2_passive_pane_srt

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp1_srt

0x5301,	// (0x00005301) bg_passive_tab_pane_g1_cp1_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp1_srt

0x530a,	// (0x0000530a) bg_passive_tab_pane_g3_cp1_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp1_srt

0x5313,	// (0x00005313) tabs_2_active_pane_srt_g1

0xd0ba,	// (0x0000d0ba) tabs_2_active_pane_srt_t1_ParamLimits

0xd0ba,	// (0x0000d0ba) tabs_2_active_pane_srt_t1

0x5301,	// (0x00005301) bg_active_tab_pane_g1_cp1_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp1_srt

0x530a,	// (0x0000530a) bg_active_tab_pane_g3_cp1_srt

0x52ce,	// (0x000052ce) tabs_3_active_pane_srt_ParamLimits

0x52ce,	// (0x000052ce) tabs_3_active_pane_srt

0x52df,	// (0x000052df) tabs_3_passive_pane_cp_srt_ParamLimits

0x52df,	// (0x000052df) tabs_3_passive_pane_cp_srt

0x52f0,	// (0x000052f0) tabs_3_passive_pane_srt_ParamLimits

0x52f0,	// (0x000052f0) tabs_3_passive_pane_srt

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x37b1,	// (0x000037b1) bg_passive_tab_pane_cp2_srt

0x27cc,	// (0x000027cc) bg_passive_tab_pane_g1_cp2_srt

0x207c,	// (0x0000207c) bg_passive_tab_pane_g2_cp2_srt

0x27d5,	// (0x000027d5) bg_passive_tab_pane_g3_cp2_srt

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt_ParamLimits

0x080b,	// (0x0000080b) bg_active_tab_pane_cp2_srt

0x52b4,	// (0x000052b4) tabs_3_active_pane_srt_g1

0xd0a4,	// (0x0000d0a4) tabs_3_active_pane_srt_t1_ParamLimits

0xd0a4,	// (0x0000d0a4) tabs_3_active_pane_srt_t1

0x27cc,	// (0x000027cc) bg_active_tab_pane_g1_cp2_srt

0x207c,	// (0x0000207c) bg_active_tab_pane_g2_cp2_srt

0x27d5,	// (0x000027d5) bg_active_tab_pane_g3_cp2_srt

0x526c,	// (0x0000526c) tabs_4_active_pane_srt_ParamLimits

0x526c,	// (0x0000526c) tabs_4_active_pane_srt

0x527e,	// (0x0000527e) tabs_4_passive_pane_cp2_srt_ParamLimits

0x527e,	// (0x0000527e) tabs_4_passive_pane_cp2_srt

0x2a7d,	// (0x00002a7d) aid_size_cell_toolbar

0x4e0c,	// (0x00004e0c) main_idle_act_pane_ParamLimits

0x2c96,	// (0x00002c96) popup_large_graphic_colour_window_ParamLimits

0xc540,	// (0x0000c540) popup_toolbar_window_ParamLimits

0xc540,	// (0x0000c540) popup_toolbar_window

0x500e,	// (0x0000500e) list_single_graphic_2heading_pane_ParamLimits

0x500e,	// (0x0000500e) list_single_graphic_2heading_pane

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane

0x1a0f,	// (0x00001a0f) aid_size_cell_apps_grid_prt_pane

0x2af7,	// (0x00002af7) bg_wml_button_pane_cp1_ParamLimits

0x2af7,	// (0x00002af7) bg_wml_button_pane_cp1

0xca92,	// (0x0000ca92) form_midp_field_text_pane_t1_ParamLimits

0x37b1,	// (0x000037b1) input_focus_pane_cp050_ParamLimits

0x3aad,	// (0x00003aad) list_midp_form_text_pane_ParamLimits

0x3a4b,	// (0x00003a4b) input_focus_pane_cp051_ParamLimits

0x3a5f,	// (0x00003a5f) list_midp_choice_pane_ParamLimits

0xca27,	// (0x0000ca27) list_single_2graphic_pane_cp3_ParamLimits

0xca27,	// (0x0000ca27) list_single_2graphic_pane_cp3

0xca3d,	// (0x0000ca3d) list_single_midp_graphic_pane_ParamLimits

0xca3d,	// (0x0000ca3d) list_single_midp_graphic_pane

0x34c5,	// (0x000034c5) list_single_graphic_2heading_pane_g1_ParamLimits

0x34c5,	// (0x000034c5) list_single_graphic_2heading_pane_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_2heading_pane_g4

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_2heading_pane_g5

0x0002,

0xa902,	// (0x0000a902) list_single_graphic_2heading_pane_g_ParamLimits

0xa902,	// (0x0000a902) list_single_graphic_2heading_pane_g

0x34d1,	// (0x000034d1) list_single_graphic_2heading_pane_t1_ParamLimits

0x34d1,	// (0x000034d1) list_single_graphic_2heading_pane_t1

0x34e5,	// (0x000034e5) list_single_graphic_2heading_pane_t2_ParamLimits

0x34e5,	// (0x000034e5) list_single_graphic_2heading_pane_t2

0x3501,	// (0x00003501) list_single_graphic_2heading_pane_t3_ParamLimits

0x3501,	// (0x00003501) list_single_graphic_2heading_pane_t3

0x0002,

0xa909,	// (0x0000a909) list_single_graphic_2heading_pane_t_ParamLimits

0xa909,	// (0x0000a909) list_single_graphic_2heading_pane_t

0x3519,	// (0x00003519) bg_popup_sub_pane_cp2

0x3543,	// (0x00003543) grid_toobar_pane

0x357f,	// (0x0000357f) cell_toolbar_pane_ParamLimits

0x357f,	// (0x0000357f) cell_toolbar_pane

0x35c5,	// (0x000035c5) cell_toolbar_pane_g1_ParamLimits

0x35c5,	// (0x000035c5) cell_toolbar_pane_g1

0x35d9,	// (0x000035d9) cell_toolbar_pane_g2_ParamLimits

0x35d9,	// (0x000035d9) cell_toolbar_pane_g2

0x0001,

0xa910,	// (0x0000a910) cell_toolbar_pane_g_ParamLimits

0xa910,	// (0x0000a910) cell_toolbar_pane_g

0x35fb,	// (0x000035fb) grid_highlight_pane_cp2_ParamLimits

0x35fb,	// (0x000035fb) grid_highlight_pane_cp2

0x3615,	// (0x00003615) toolbar_button_pane

0x3621,	// (0x00003621) toolbar_button_pane_g1

0x3629,	// (0x00003629) toolbar_button_pane_g2

0x3631,	// (0x00003631) toolbar_button_pane_g3

0x3639,	// (0x00003639) toolbar_button_pane_g4

0x3641,	// (0x00003641) toolbar_button_pane_g5

0x3649,	// (0x00003649) toolbar_button_pane_g6

0x3651,	// (0x00003651) toolbar_button_pane_g7

0x3659,	// (0x00003659) toolbar_button_pane_g8

0x3661,	// (0x00003661) toolbar_button_pane_g9

0x0009,

0xa915,	// (0x0000a915) toolbar_button_pane_g

0x3671,	// (0x00003671) list_single_2graphic_pane_g1_cp3_ParamLimits

0x3671,	// (0x00003671) list_single_2graphic_pane_g1_cp3

0xc989,	// (0x0000c989) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc989,	// (0x0000c989) list_single_2graphic_pane_g2_cp3

0x23a1,	// (0x000023a1) list_single_2graphic_pane_g3_cp3

0x368e,	// (0x0000368e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x368e,	// (0x0000368e) list_single_2graphic_pane_g4_cp3

0x369a,	// (0x0000369a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x369a,	// (0x0000369a) list_single_2graphic_pane_t1_cp3

0x2395,	// (0x00002395) list_single_midp_graphic_pane_g2_ParamLimits

0x2395,	// (0x00002395) list_single_midp_graphic_pane_g2

0x2a85,	// (0x00002a85) aid_zoom_text_primary

0x2a8d,	// (0x00002a8d) aid_zoom_text_secondary

0x2889,	// (0x00002889) status_small_pane_g7_ParamLimits

0x2889,	// (0x00002889) status_small_pane_g7

0x28ac,	// (0x000028ac) status_small_pane_t1_ParamLimits

0xb1e9,	// (0x0000b1e9) title_pane_g2

0x0003,

0xec03,	// (0x0000ec03) title_pane_g

0xb474,	// (0x0000b474) aid_size_cell_colour_1_pane_ParamLimits

0xb474,	// (0x0000b474) aid_size_cell_colour_1_pane

0xb488,	// (0x0000b488) aid_size_cell_colour_2_pane_ParamLimits

0xb488,	// (0x0000b488) aid_size_cell_colour_2_pane

0xb49c,	// (0x0000b49c) aid_size_cell_colour_3_pane_ParamLimits

0xb49c,	// (0x0000b49c) aid_size_cell_colour_3_pane

0xb4b0,	// (0x0000b4b0) aid_size_cell_colour_4_pane_ParamLimits

0xb4b0,	// (0x0000b4b0) aid_size_cell_colour_4_pane

0x1878,	// (0x00001878) title_pane_stacon_g1_ParamLimits

0x1878,	// (0x00001878) title_pane_stacon_g1

0x3e6b,	// (0x00003e6b) popup_note_wait_window_g3_ParamLimits

0x3e6b,	// (0x00003e6b) popup_note_wait_window_g3

0x3ee1,	// (0x00003ee1) popup_note_wait_window_t5_ParamLimits

0x3ee1,	// (0x00003ee1) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xbf68,	// (0x0000bf68) popup_feb_china_hwr_fs_window_ParamLimits

0xbf68,	// (0x0000bf68) popup_feb_china_hwr_fs_window

0xc99a,	// (0x0000c99a) aid_size_cell_hwr_fs_ParamLimits

0xc99a,	// (0x0000c99a) aid_size_cell_hwr_fs

0x37b1,	// (0x000037b1) bg_popup_sub_pane_cp3_ParamLimits

0x37b1,	// (0x000037b1) bg_popup_sub_pane_cp3

0xc9af,	// (0x0000c9af) grid_hwr_fs_pane_ParamLimits

0xc9af,	// (0x0000c9af) grid_hwr_fs_pane

0x37d5,	// (0x000037d5) linegrid_hwr_fs_pane_ParamLimits

0x37d5,	// (0x000037d5) linegrid_hwr_fs_pane

0xc9c7,	// (0x0000c9c7) cell_hwr_fs_pane_ParamLimits

0xc9c7,	// (0x0000c9c7) cell_hwr_fs_pane

0x3807,	// (0x00003807) linegrid_hwr_fs_pane_g1_ParamLimits

0x3807,	// (0x00003807) linegrid_hwr_fs_pane_g1

0xc9ed,	// (0x0000c9ed) linegrid_hwr_fs_pane_g2_ParamLimits

0xc9ed,	// (0x0000c9ed) linegrid_hwr_fs_pane_g2

0x3825,	// (0x00003825) linegrid_hwr_fs_pane_g3_ParamLimits

0x3825,	// (0x00003825) linegrid_hwr_fs_pane_g3

0x3831,	// (0x00003831) linegrid_hwr_fs_pane_g4_ParamLimits

0x3831,	// (0x00003831) linegrid_hwr_fs_pane_g4

0x384b,	// (0x0000384b) linegrid_hwr_fs_pane_g5_ParamLimits

0x384b,	// (0x0000384b) linegrid_hwr_fs_pane_g5

0x0004,

0xed1e,	// (0x0000ed1e) linegrid_hwr_fs_pane_g_ParamLimits

0xed1e,	// (0x0000ed1e) linegrid_hwr_fs_pane_g

0x3861,	// (0x00003861) cell_hwr_fs_pane_g1_ParamLimits

0x3861,	// (0x00003861) cell_hwr_fs_pane_g1

0x33fe,	// (0x000033fe) cell_hwr_fs_pane_g2_ParamLimits

0x33fe,	// (0x000033fe) cell_hwr_fs_pane_g2

0xc9ff,	// (0x0000c9ff) cell_hwr_fs_pane_g3_ParamLimits

0xc9ff,	// (0x0000c9ff) cell_hwr_fs_pane_g3

0xca0c,	// (0x0000ca0c) cell_hwr_fs_pane_g4_ParamLimits

0xca0c,	// (0x0000ca0c) cell_hwr_fs_pane_g4

0x0003,

0xed29,	// (0x0000ed29) cell_hwr_fs_pane_g_ParamLimits

0xed29,	// (0x0000ed29) cell_hwr_fs_pane_g

0xca19,	// (0x0000ca19) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1629,	// (0x00001629) aid_inside_area_popup_secondary

0xcc6e,	// (0x0000cc6e) aid_inside_area_window_primary_ParamLimits

0xcc6e,	// (0x0000cc6e) aid_inside_area_window_primary

0x548b,	// (0x0000548b) ai2_news_ticker_pane

0x5493,	// (0x00005493) aid_size_cell_ai1_link_ParamLimits

0x5493,	// (0x00005493) aid_size_cell_ai1_link

0x54ad,	// (0x000054ad) popup_ai2_data_window_ParamLimits

0x54ad,	// (0x000054ad) popup_ai2_data_window

0x54c1,	// (0x000054c1) popup_ai2_link_window_ParamLimits

0x54c1,	// (0x000054c1) popup_ai2_link_window

0x37b1,	// (0x000037b1) bg_popup_sub_pane_cp4_ParamLimits

0x37b1,	// (0x000037b1) bg_popup_sub_pane_cp4

0x54d5,	// (0x000054d5) grid_ai2_link_pane_ParamLimits

0x54d5,	// (0x000054d5) grid_ai2_link_pane

0x54ec,	// (0x000054ec) popup_ai2_link_window_g1_ParamLimits

0x54ec,	// (0x000054ec) popup_ai2_link_window_g1

0x54f8,	// (0x000054f8) popup_ai2_link_window_g2_ParamLimits

0x54f8,	// (0x000054f8) popup_ai2_link_window_g2

0x0001,

0xab17,	// (0x0000ab17) popup_ai2_link_window_g_ParamLimits

0xab17,	// (0x0000ab17) popup_ai2_link_window_g

0x5507,	// (0x00005507) ai2_mp_button_pane

0x550f,	// (0x0000550f) ai2_mp_volume_pane

0x3a4b,	// (0x00003a4b) bg_popup_sub_pane_cp5_ParamLimits

0x3a4b,	// (0x00003a4b) bg_popup_sub_pane_cp5

0x5517,	// (0x00005517) heading_ai2_gene_pane_ParamLimits

0x5517,	// (0x00005517) heading_ai2_gene_pane

0x5523,	// (0x00005523) list_ai2_gene_pane_ParamLimits

0x5523,	// (0x00005523) list_ai2_gene_pane

0x556b,	// (0x0000556b) cell_ai2_link_pane_ParamLimits

0x556b,	// (0x0000556b) cell_ai2_link_pane

0x5581,	// (0x00005581) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x5652,	// (0x00005652) ai2_mp_volume_pane_g1

0x565a,	// (0x0000565a) ai2_mp_volume_pane_g2

0x55c7,	// (0x000055c7) list_ai2_gene_pane_t1

0x5662,	// (0x00005662) ai2_mp_volume_pane_g3

0x0002,

0xab30,	// (0x0000ab30) ai2_mp_volume_pane_g

0x566a,	// (0x0000566a) volume_small_pane_cp3

0x5673,	// (0x00005673) aid_size_cell_ai2_button

0x567b,	// (0x0000567b) grid_ai2_button_pane

0x5684,	// (0x00005684) cell_ai2_button_pane_ParamLimits

0x5684,	// (0x00005684) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x5612,	// (0x00005612) ai2_gene_pane_t1_ParamLimits

0x5612,	// (0x00005612) ai2_gene_pane_t1

0xbede,	// (0x0000bede) aid_height_parent_landscape

0xce30,	// (0x0000ce30) aid_height_set_list

0x4e0c,	// (0x00004e0c) aid_size_parent

0x51f6,	// (0x000051f6) aid_size_cell_graphic_pane_ParamLimits

0x5533,	// (0x00005533) popup_ai2_data_window_g1_ParamLimits

0x5533,	// (0x00005533) popup_ai2_data_window_g1

0x553f,	// (0x0000553f) ai2_news_ticker_pane_g1

0x5547,	// (0x00005547) ai2_news_ticker_pane_g2

0x0001,

0xab1c,	// (0x0000ab1c) ai2_news_ticker_pane_g

0x554f,	// (0x0000554f) ai2_news_ticker_pane_t1

0x555d,	// (0x0000555d) ai2_news_ticker_pane_t2

0x0001,

0xab21,	// (0x0000ab21) ai2_news_ticker_pane_t

0x558a,	// (0x0000558a) heading_ai2_gene_pane_g1

0x5592,	// (0x00005592) heading_ai2_gene_pane_t1_ParamLimits

0x5592,	// (0x00005592) heading_ai2_gene_pane_t1

0x55a7,	// (0x000055a7) list_highlight_pane_cp6

0x55af,	// (0x000055af) ai2_gene_pane_ParamLimits

0x55af,	// (0x000055af) ai2_gene_pane

0x55d5,	// (0x000055d5) list_ai2_gene_pane_t2

0x0001,

0xab26,	// (0x0000ab26) list_ai2_gene_pane_t

0x55e3,	// (0x000055e3) list_highlight_pane_cp8_ParamLimits

0x55e3,	// (0x000055e3) list_highlight_pane_cp8

0x55f4,	// (0x000055f4) ai2_gene_pane_g1_ParamLimits

0x55f4,	// (0x000055f4) ai2_gene_pane_g1

0x5606,	// (0x00005606) ai2_gene_pane_g2_ParamLimits

0x5606,	// (0x00005606) ai2_gene_pane_g2

0x0001,

0xab2b,	// (0x0000ab2b) ai2_gene_pane_g_ParamLimits

0xab2b,	// (0x0000ab2b) ai2_gene_pane_g

0x0d79,	// (0x00000d79) scroll_pane_cp12

0xbe9b,	// (0x0000be9b) control_pane_t3_ParamLimits

0xbe9b,	// (0x0000be9b) control_pane_t3

0x289d,	// (0x0000289d) status_small_pane_g8_ParamLimits

0x289d,	// (0x0000289d) status_small_pane_g8

0xbffb,	// (0x0000bffb) popup_find_window_ParamLimits

0xc276,	// (0x0000c276) popup_note_image_window_ParamLimits

0x34c5,	// (0x000034c5) list_double2_graphic_pane_vc_g1_ParamLimits

0x34c5,	// (0x000034c5) list_double2_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_graphic_pane_vc_g3

0x0002,

0xa902,	// (0x0000a902) list_double2_graphic_pane_vc_g_ParamLimits

0xa902,	// (0x0000a902) list_double2_graphic_pane_vc_g

0x35af,	// (0x000035af) list_double2_graphic_pane_vc_t1_ParamLimits

0x35af,	// (0x000035af) list_double2_graphic_pane_vc_t1

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_heading_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_heading_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_heading_pane_vc_g

0x36b4,	// (0x000036b4) list_single_heading_pane_vc_t1_ParamLimits

0x36b4,	// (0x000036b4) list_single_heading_pane_vc_t1

0x36ca,	// (0x000036ca) list_single_heading_pane_vc_t2_ParamLimits

0x36ca,	// (0x000036ca) list_single_heading_pane_vc_t2

0x0001,

0xa92f,	// (0x0000a92f) list_single_heading_pane_vc_t_ParamLimits

0xa92f,	// (0x0000a92f) list_single_heading_pane_vc_t

0x36f4,	// (0x000036f4) list_setting_number_pane_vc_g1_ParamLimits

0x36f4,	// (0x000036f4) list_setting_number_pane_vc_g1

0x3700,	// (0x00003700) list_setting_number_pane_vc_g2_ParamLimits

0x3700,	// (0x00003700) list_setting_number_pane_vc_g2

0x0001,

0xa934,	// (0x0000a934) list_setting_number_pane_vc_g_ParamLimits

0xa934,	// (0x0000a934) list_setting_number_pane_vc_g

0x370c,	// (0x0000370c) list_setting_number_pane_vc_t1_ParamLimits

0x370c,	// (0x0000370c) list_setting_number_pane_vc_t1

0x3720,	// (0x00003720) list_setting_number_pane_vc_t2_ParamLimits

0x3720,	// (0x00003720) list_setting_number_pane_vc_t2

0x373c,	// (0x0000373c) list_setting_number_pane_vc_t3_ParamLimits

0x373c,	// (0x0000373c) list_setting_number_pane_vc_t3

0x0002,

0xa939,	// (0x0000a939) list_setting_number_pane_vc_t_ParamLimits

0xa939,	// (0x0000a939) list_setting_number_pane_vc_t

0x3764,	// (0x00003764) set_value_pane_vc_ParamLimits

0x3764,	// (0x00003764) set_value_pane_vc

0x500e,	// (0x0000500e) list_double2_graphic_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double2_graphic_pane_vc

0x500e,	// (0x0000500e) list_double2_large_graphic_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double2_large_graphic_pane_vc

0x500e,	// (0x0000500e) list_double2_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double2_pane_vc

0x500e,	// (0x0000500e) list_double_graphic_heading_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_graphic_heading_pane_vc

0x500e,	// (0x0000500e) list_double_graphic_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_graphic_pane_vc

0x500e,	// (0x0000500e) list_double_heading_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_heading_pane_vc

0x500e,	// (0x0000500e) list_double_large_graphic_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_large_graphic_pane_vc

0x500e,	// (0x0000500e) list_double_number_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_number_pane_vc

0x500e,	// (0x0000500e) list_double_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_pane_vc

0x500e,	// (0x0000500e) list_double_time_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_double_time_pane_vc

0x500e,	// (0x0000500e) list_setting_number_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_setting_number_pane_vc

0x500e,	// (0x0000500e) list_setting_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_setting_pane_vc

0x500e,	// (0x0000500e) list_single_graphic_heading_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_single_graphic_heading_pane_vc

0x500e,	// (0x0000500e) list_single_heading_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_single_heading_pane_vc

0x500e,	// (0x0000500e) list_single_number_heading_pane_vc_ParamLimits

0x500e,	// (0x0000500e) list_single_number_heading_pane_vc

0x34c5,	// (0x000034c5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x34c5,	// (0x000034c5) list_double_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_graphic_heading_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_graphic_heading_pane_vc_g3

0x0002,

0xa902,	// (0x0000a902) list_double_graphic_heading_pane_vc_g_ParamLimits

0xa902,	// (0x0000a902) list_double_graphic_heading_pane_vc_g

0x56b8,	// (0x000056b8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x56b8,	// (0x000056b8) list_double_graphic_heading_pane_vc_t1

0x36b4,	// (0x000036b4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36b4,	// (0x000036b4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xab37,	// (0x0000ab37) list_double_graphic_heading_pane_vc_t_ParamLimits

0xab37,	// (0x0000ab37) list_double_graphic_heading_pane_vc_t

0x36f4,	// (0x000036f4) list_setting_pane_vc_g1_ParamLimits

0x36f4,	// (0x000036f4) list_setting_pane_vc_g1

0x3700,	// (0x00003700) list_setting_pane_vc_g2_ParamLimits

0x3700,	// (0x00003700) list_setting_pane_vc_g2

0x0001,

0xa934,	// (0x0000a934) list_setting_pane_vc_g_ParamLimits

0xa934,	// (0x0000a934) list_setting_pane_vc_g

0x5901,	// (0x00005901) list_setting_pane_vc_t1_ParamLimits

0x5901,	// (0x00005901) list_setting_pane_vc_t1

0x5915,	// (0x00005915) list_setting_pane_vc_t2_ParamLimits

0x5915,	// (0x00005915) list_setting_pane_vc_t2

0x0001,

0xab7a,	// (0x0000ab7a) list_setting_pane_vc_t_ParamLimits

0xab7a,	// (0x0000ab7a) list_setting_pane_vc_t

0x3764,	// (0x00003764) set_value_pane_cp_vc_ParamLimits

0x3764,	// (0x00003764) set_value_pane_cp_vc

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_number_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_single_number_heading_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_single_number_heading_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_single_number_heading_pane_vc_g

0x36b4,	// (0x000036b4) list_single_number_heading_pane_vc_t1_ParamLimits

0x36b4,	// (0x000036b4) list_single_number_heading_pane_vc_t1

0x5937,	// (0x00005937) list_single_number_heading_pane_vc_t2_ParamLimits

0x5937,	// (0x00005937) list_single_number_heading_pane_vc_t2

0x594b,	// (0x0000594b) list_single_number_heading_pane_vc_t3_ParamLimits

0x594b,	// (0x0000594b) list_single_number_heading_pane_vc_t3

0x0002,

0xab7f,	// (0x0000ab7f) list_single_number_heading_pane_vc_t_ParamLimits

0xab7f,	// (0x0000ab7f) list_single_number_heading_pane_vc_t

0x34c5,	// (0x000034c5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x34c5,	// (0x000034c5) list_single_graphic_heading_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0e4b,	// (0x00000e4b) list_single_graphic_heading_pane_vc_g4

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0e57,	// (0x00000e57) list_single_graphic_heading_pane_vc_g5

0x0002,

0xa902,	// (0x0000a902) list_single_graphic_heading_pane_vc_g_ParamLimits

0xa902,	// (0x0000a902) list_single_graphic_heading_pane_vc_g

0x36b4,	// (0x000036b4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x36b4,	// (0x000036b4) list_single_graphic_heading_pane_vc_t1

0x595d,	// (0x0000595d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x595d,	// (0x0000595d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xab86,	// (0x0000ab86) list_single_graphic_heading_pane_vc_t_ParamLimits

0xab86,	// (0x0000ab86) list_single_graphic_heading_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_pane_vc_g1

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double2_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_double2_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_double2_pane_vc_g

0x5971,	// (0x00005971) list_double2_pane_vc_t1_ParamLimits

0x5971,	// (0x00005971) list_double2_pane_vc_t1

0x5987,	// (0x00005987) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5987,	// (0x00005987) list_double2_large_graphic_pane_vc_g1

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0e4b,	// (0x00000e4b) list_double2_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double2_large_graphic_pane_vc_g3

0x0002,

0xab8b,	// (0x0000ab8b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xab8b,	// (0x0000ab8b) list_double2_large_graphic_pane_vc_g

0x5993,	// (0x00005993) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5993,	// (0x00005993) list_double2_large_graphic_pane_vc_t1

0x59a9,	// (0x000059a9) list_double_time_pane_vc_g1_ParamLimits

0x59a9,	// (0x000059a9) list_double_time_pane_vc_g1

0x59b5,	// (0x000059b5) list_double_time_pane_vc_g2_ParamLimits

0x59b5,	// (0x000059b5) list_double_time_pane_vc_g2

0x0001,

0xab92,	// (0x0000ab92) list_double_time_pane_vc_g_ParamLimits

0xab92,	// (0x0000ab92) list_double_time_pane_vc_g

0x59c1,	// (0x000059c1) list_double_time_pane_vc_t1_ParamLimits

0x59c1,	// (0x000059c1) list_double_time_pane_vc_t1

0x59da,	// (0x000059da) list_double_time_pane_vc_t2_ParamLimits

0x59da,	// (0x000059da) list_double_time_pane_vc_t2

0x59fa,	// (0x000059fa) list_double_time_pane_vc_t3_ParamLimits

0x59fa,	// (0x000059fa) list_double_time_pane_vc_t3

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t4_ParamLimits

0x5a12,	// (0x00005a12) list_double_time_pane_vc_t4

0x0003,

0xab97,	// (0x0000ab97) list_double_time_pane_vc_t_ParamLimits

0xab97,	// (0x0000ab97) list_double_time_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_double_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_double_pane_vc_g

0x5a26,	// (0x00005a26) list_double_pane_vc_t1_ParamLimits

0x5a26,	// (0x00005a26) list_double_pane_vc_t1

0x5a38,	// (0x00005a38) list_double_pane_vc_t2_ParamLimits

0x5a38,	// (0x00005a38) list_double_pane_vc_t2

0x0001,

0xaba0,	// (0x0000aba0) list_double_pane_vc_t_ParamLimits

0xaba0,	// (0x0000aba0) list_double_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_number_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_number_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_double_number_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_double_number_pane_vc_g

0x5a50,	// (0x00005a50) list_double_number_pane_vc_t1_ParamLimits

0x5a50,	// (0x00005a50) list_double_number_pane_vc_t1

0x5a64,	// (0x00005a64) list_double_number_pane_vc_t2_ParamLimits

0x5a64,	// (0x00005a64) list_double_number_pane_vc_t2

0x5a38,	// (0x00005a38) list_double_number_pane_vc_t3_ParamLimits

0x5a38,	// (0x00005a38) list_double_number_pane_vc_t3

0x0002,

0xaba5,	// (0x0000aba5) list_double_number_pane_vc_t_ParamLimits

0xaba5,	// (0x0000aba5) list_double_number_pane_vc_t

0x5a76,	// (0x00005a76) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5a76,	// (0x00005a76) list_double_large_graphic_pane_vc_g1

0x5a82,	// (0x00005a82) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5a82,	// (0x00005a82) list_double_large_graphic_pane_vc_g2

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0e57,	// (0x00000e57) list_double_large_graphic_pane_vc_g3

0x5a91,	// (0x00005a91) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5a91,	// (0x00005a91) list_double_large_graphic_pane_vc_g4

0x0003,

0xabac,	// (0x0000abac) list_double_large_graphic_pane_vc_g_ParamLimits

0xabac,	// (0x0000abac) list_double_large_graphic_pane_vc_g

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5a9d,	// (0x00005a9d) list_double_large_graphic_pane_vc_t1

0x5aaf,	// (0x00005aaf) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5aaf,	// (0x00005aaf) list_double_large_graphic_pane_vc_t2

0x0001,

0xabb5,	// (0x0000abb5) list_double_large_graphic_pane_vc_t_ParamLimits

0xabb5,	// (0x0000abb5) list_double_large_graphic_pane_vc_t

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1_ParamLimits

0x0e4b,	// (0x00000e4b) list_double_heading_pane_vc_g1

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2_ParamLimits

0x0e57,	// (0x00000e57) list_double_heading_pane_vc_g2

0x0001,

0xa92a,	// (0x0000a92a) list_double_heading_pane_vc_g_ParamLimits

0xa92a,	// (0x0000a92a) list_double_heading_pane_vc_g

0x5ac8,	// (0x00005ac8) list_double_heading_pane_vc_t1_ParamLimits

0x5ac8,	// (0x00005ac8) list_double_heading_pane_vc_t1

0x36b4,	// (0x000036b4) list_double_heading_pane_vc_t2_ParamLimits

0x36b4,	// (0x000036b4) list_double_heading_pane_vc_t2

0x0001,

0xabba,	// (0x0000abba) list_double_heading_pane_vc_t_ParamLimits

0xabba,	// (0x0000abba) list_double_heading_pane_vc_t

0x34c5,	// (0x000034c5) list_double_graphic_pane_vc_g1_ParamLimits

0x34c5,	// (0x000034c5) list_double_graphic_pane_vc_g1

0x5adc,	// (0x00005adc) list_double_graphic_pane_vc_g2_ParamLimits

0x5adc,	// (0x00005adc) list_double_graphic_pane_vc_g2

0x5aeb,	// (0x00005aeb) list_double_graphic_pane_vc_g3_ParamLimits

0x5aeb,	// (0x00005aeb) list_double_graphic_pane_vc_g3

0x0002,

0xabbf,	// (0x0000abbf) list_double_graphic_pane_vc_g_ParamLimits

0xabbf,	// (0x0000abbf) list_double_graphic_pane_vc_g

0x5af7,	// (0x00005af7) list_double_graphic_pane_vc_t1_ParamLimits

0x5af7,	// (0x00005af7) list_double_graphic_pane_vc_t1

0x5a38,	// (0x00005a38) list_double_graphic_pane_vc_t2_ParamLimits

0x5a38,	// (0x00005a38) list_double_graphic_pane_vc_t2

0x0001,

0xabc6,	// (0x0000abc6) list_double_graphic_pane_vc_t_ParamLimits

0xabc6,	// (0x0000abc6) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb037,	// (0x0000b037) aid_size_cell_touch_ParamLimits

0xb037,	// (0x0000b037) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb182,	// (0x0000b182) touch_pane_ParamLimits

0xb182,	// (0x0000b182) touch_pane

0x1277,	// (0x00001277) button_value_adjust_pane_cp2

0x1277,	// (0x00001277) button_value_adjust_pane_cp4

0x1297,	// (0x00001297) form_field_data_pane_cp2

0xb8a9,	// (0x0000b8a9) form_field_data_wide_pane_cp2

0x1ade,	// (0x00001ade) bg_scroll_pane_ParamLimits

0x1afd,	// (0x00001afd) scroll_handle_pane_ParamLimits

0x1b11,	// (0x00001b11) scroll_sc2_down_pane_ParamLimits

0x1b11,	// (0x00001b11) scroll_sc2_down_pane

0x1b38,	// (0x00001b38) scroll_sc2_up_pane_ParamLimits

0x1b38,	// (0x00001b38) scroll_sc2_up_pane

0xd1f1,	// (0x0000d1f1) grid_wheel_folder_pane_g1_ParamLimits

0xd1f1,	// (0x0000d1f1) grid_wheel_folder_pane_g1

0x21c3,	// (0x000021c3) clock_nsta_pane_cp2_ParamLimits

0x21c3,	// (0x000021c3) clock_nsta_pane_cp2

0xbcaf,	// (0x0000bcaf) listscroll_midp_pane_ParamLimits

0xbcc0,	// (0x0000bcc0) midp_canvas_pane

0x2a6b,	// (0x00002a6b) nsta_clock_indic_pane

0x2ac9,	// (0x00002ac9) listscroll_form_pane_vc

0x2ae5,	// (0x00002ae5) listscroll_set_pane_vc_ParamLimits

0x2ae5,	// (0x00002ae5) listscroll_set_pane_vc

0xc69d,	// (0x0000c69d) clock_nsta_pane

0xc6c7,	// (0x0000c6c7) indicator_nsta_pane

0x3519,	// (0x00003519) bg_popup_sub_pane_cp2_ParamLimits

0x352d,	// (0x0000352d) find_pane_cp2_ParamLimits

0x352d,	// (0x0000352d) find_pane_cp2

0x3543,	// (0x00003543) grid_toobar_pane_ParamLimits

0x3770,	// (0x00003770) list_form_gen_pane_vc_ParamLimits

0x3770,	// (0x00003770) list_form_gen_pane_vc

0x3786,	// (0x00003786) scroll_pane_cp8_vc_ParamLimits

0x3786,	// (0x00003786) scroll_pane_cp8_vc

0x389f,	// (0x0000389f) data_form_wide_pane_vc_ParamLimits

0x389f,	// (0x0000389f) data_form_wide_pane_vc

0x38ab,	// (0x000038ab) form_field_data_wide_pane_vc_g1

0x38b3,	// (0x000038b3) form_field_data_wide_pane_vc_t1_ParamLimits

0x38b3,	// (0x000038b3) form_field_data_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp6_vc

0xcad2,	// (0x0000cad2) list_midp_pane_ParamLimits

0x5260,	// (0x00005260) scroll_pane_cp16_ParamLimits

0x5260,	// (0x00005260) scroll_pane_cp16

0x3c68,	// (0x00003c68) button_value_adjust_pane_ParamLimits

0x3c68,	// (0x00003c68) button_value_adjust_pane

0xce41,	// (0x0000ce41) button_value_adjust_pane_cp6_ParamLimits

0xce41,	// (0x0000ce41) button_value_adjust_pane_cp6

0xcf57,	// (0x0000cf57) settings_code_pane_cp_ParamLimits

0xcf57,	// (0x0000cf57) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xa859,	// (0x0000a859) cell_touch_pane_g

0xd0d0,	// (0x0000d0d0) cell_touch_pane_cp_ParamLimits

0xd0d0,	// (0x0000d0d0) cell_touch_pane_cp

0xd0ec,	// (0x0000d0ec) cell_touch_pane_ParamLimits

0xd0ec,	// (0x0000d0ec) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x56cc,	// (0x000056cc) list_set_graphic_pane_vc_g1_ParamLimits

0x56cc,	// (0x000056cc) list_set_graphic_pane_vc_g1

0x56d8,	// (0x000056d8) list_set_graphic_pane_vc_g2_ParamLimits

0x56d8,	// (0x000056d8) list_set_graphic_pane_vc_g2

0x0001,

0xab3c,	// (0x0000ab3c) list_set_graphic_pane_vc_g_ParamLimits

0xab3c,	// (0x0000ab3c) list_set_graphic_pane_vc_g

0x56e4,	// (0x000056e4) text_primary_small_cp13_vc_ParamLimits

0x56e4,	// (0x000056e4) text_primary_small_cp13_vc

0x56fc,	// (0x000056fc) list_set_graphic_pane_vc_ParamLimits

0x56fc,	// (0x000056fc) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x5710,	// (0x00005710) setting_code_pane_vc_t1

0x571e,	// (0x0000571e) set_text_pane_vc_t1_ParamLimits

0x571e,	// (0x0000571e) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x573d,	// (0x0000573d) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x5747,	// (0x00005747) setting_slider_graphic_pane_vc_g1

0x574f,	// (0x0000574f) setting_slider_graphic_pane_vc_t1

0x575d,	// (0x0000575d) setting_slider_graphic_pane_vc_t2

0x0001,

0xab41,	// (0x0000ab41) setting_slider_graphic_pane_vc_t

0x576b,	// (0x0000576b) slider_set_pane_cp_vc

0x5773,	// (0x00005773) slider_set_pane_vc_g1

0x577c,	// (0x0000577c) slider_set_pane_vc_g2

0x0006,

0xab46,	// (0x0000ab46) slider_set_pane_vc_g

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy1

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy1

0x57a8,	// (0x000057a8) set_opt_bg_pane_g3_copy1

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy1

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy1

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy1

0x57b0,	// (0x000057b0) set_opt_bg_pane_g7_copy1

0x57ba,	// (0x000057ba) set_opt_bg_pane_g8_copy1

0x57c2,	// (0x000057c2) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x57ca,	// (0x000057ca) setting_slider_pane_vc_t1

0x574f,	// (0x0000574f) setting_slider_pane_vc_t2

0x575d,	// (0x0000575d) setting_slider_pane_vc_t3

0x0002,

0xab55,	// (0x0000ab55) setting_slider_pane_vc_t

0x576b,	// (0x0000576b) slider_set_pane_vc

0x447b,	// (0x0000447b) volume_set_pane_vc_g1

0x57d9,	// (0x000057d9) volume_set_pane_vc_g2

0x57e2,	// (0x000057e2) volume_set_pane_vc_g3

0x57eb,	// (0x000057eb) volume_set_pane_vc_g4

0x57f4,	// (0x000057f4) volume_set_pane_vc_g5

0x57fd,	// (0x000057fd) volume_set_pane_vc_g6

0x5806,	// (0x00005806) volume_set_pane_vc_g7

0x580f,	// (0x0000580f) volume_set_pane_vc_g8

0x5818,	// (0x00005818) volume_set_pane_vc_g9

0x5821,	// (0x00005821) volume_set_pane_vc_g10

0x0009,

0xab5c,	// (0x0000ab5c) volume_set_pane_vc_g

0x582a,	// (0x0000582a) volume_set_pane_vc

0x5832,	// (0x00005832) button_value_adjust_pane_cp1_vc

0x583c,	// (0x0000583c) list_highlight_pane_cp2_vc

0x5845,	// (0x00005845) list_set_pane_vc_ParamLimits

0x5845,	// (0x00005845) list_set_pane_vc

0x5897,	// (0x00005897) main_pane_set_vc_t1_ParamLimits

0x5897,	// (0x00005897) main_pane_set_vc_t1

0x58ac,	// (0x000058ac) main_pane_set_vc_t2_ParamLimits

0x58ac,	// (0x000058ac) main_pane_set_vc_t2

0x58be,	// (0x000058be) main_pane_set_vc_t3_ParamLimits

0x58be,	// (0x000058be) main_pane_set_vc_t3

0x58d0,	// (0x000058d0) main_pane_set_vc_t4_ParamLimits

0x58d0,	// (0x000058d0) main_pane_set_vc_t4

0x0003,

0xab71,	// (0x0000ab71) main_pane_set_vc_t_ParamLimits

0xab71,	// (0x0000ab71) main_pane_set_vc_t

0x58e2,	// (0x000058e2) setting_code_pane_vc_ParamLimits

0x58e2,	// (0x000058e2) setting_code_pane_vc

0x58f1,	// (0x000058f1) setting_slider_graphic_pane_vc

0x58f1,	// (0x000058f1) setting_slider_pane_vc

0x58f1,	// (0x000058f1) setting_text_pane_vc

0x58f1,	// (0x000058f1) setting_volume_pane_vc

0x58f9,	// (0x000058f9) scroll_pane_cp121_vc

0x1265,	// (0x00001265) set_content_pane_vc

0x5b09,	// (0x00005b09) button_value_adjust_pane_g1

0x5b12,	// (0x00005b12) button_value_adjust_pane_g2

0x0001,

0xabcb,	// (0x0000abcb) button_value_adjust_pane_g

0x5b1b,	// (0x00005b1b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5b1b,	// (0x00005b1b) form_field_slider_wide_pane_vc_t1

0x5b2f,	// (0x00005b2f) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5b2f,	// (0x00005b2f) form_field_slider_wide_pane_vc_t2

0x0001,

0xabd0,	// (0x0000abd0) form_field_slider_wide_pane_vc_t_ParamLimits

0xabd0,	// (0x0000abd0) form_field_slider_wide_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp10_vc

0x5b41,	// (0x00005b41) slider_cont_pane_cp1_vc_ParamLimits

0x5b41,	// (0x00005b41) slider_cont_pane_cp1_vc

0x5773,	// (0x00005773) slider_form_pane_g1_cp2

0x577c,	// (0x0000577c) slider_form_pane_g2_cp2

0x5b5a,	// (0x00005b5a) form_field_slider_pane_vc_t3

0x5b68,	// (0x00005b68) form_field_slider_pane_vc_t4

0x5b76,	// (0x00005b76) slider_form_pane_vc_ParamLimits

0x5b76,	// (0x00005b76) slider_form_pane_vc

0x5b83,	// (0x00005b83) form_field_slider_pane_vc_t1_ParamLimits

0x5b83,	// (0x00005b83) form_field_slider_pane_vc_t1

0x5b2f,	// (0x00005b2f) form_field_slider_pane_vc_t2_ParamLimits

0x5b2f,	// (0x00005b2f) form_field_slider_pane_vc_t2

0x0001,

0xabe0,	// (0x0000abe0) form_field_slider_pane_vc_t_ParamLimits

0xabe0,	// (0x0000abe0) form_field_slider_pane_vc_t

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc_ParamLimits

0x080b,	// (0x0000080b) input_focus_pane_cp9_vc

0x5b9f,	// (0x00005b9f) slider_cont_pane_vc_ParamLimits

0x5b9f,	// (0x00005b9f) slider_cont_pane_vc

0x5bb1,	// (0x00005bb1) list_form_graphic_pane_cp_vc_ParamLimits

0x5bb1,	// (0x00005bb1) list_form_graphic_pane_cp_vc

0x38ab,	// (0x000038ab) form_field_popup_wide_pane_vc_g1

0x5bc6,	// (0x00005bc6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5bc6,	// (0x00005bc6) form_field_popup_wide_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp8_vc

0x5bdd,	// (0x00005bdd) list_form_wide_pane_vc_ParamLimits

0x5bdd,	// (0x00005bdd) list_form_wide_pane_vc

0x5be9,	// (0x00005be9) list_form_graphic_pane_vc_g1

0x5bf1,	// (0x00005bf1) list_form_graphic_pane_vc_t1_ParamLimits

0x5bf1,	// (0x00005bf1) list_form_graphic_pane_vc_t1

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc_ParamLimits

0x04e9,	// (0x000004e9) list_highlight_pane_cp5_vc

0x5c0d,	// (0x00005c0d) list_form_graphic_pane_vc_ParamLimits

0x5c0d,	// (0x00005c0d) list_form_graphic_pane_vc

0x38ab,	// (0x000038ab) form_field_popup_pane_vc_g1

0x5c23,	// (0x00005c23) form_field_popup_pane_vc_t1_ParamLimits

0x5c23,	// (0x00005c23) form_field_popup_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_cp7_vc

0x5c3a,	// (0x00005c3a) list_form_pane_vc_ParamLimits

0x5c3a,	// (0x00005c3a) list_form_pane_vc

0x5c46,	// (0x00005c46) data_form_pane_vc_t1_ParamLimits

0x5c46,	// (0x00005c46) data_form_pane_vc_t1

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

0xa7e2,	// (0x0000a7e2) input_focus_pane_vc_g

0x389f,	// (0x0000389f) data_form_pane_vc_ParamLimits

0x389f,	// (0x0000389f) data_form_pane_vc

0x38ab,	// (0x000038ab) form_field_data_pane_vc_g1

0x5c61,	// (0x00005c61) form_field_data_pane_vc_t1_ParamLimits

0x5c61,	// (0x00005c61) form_field_data_pane_vc_t1

0x134f,	// (0x0000134f) input_focus_pane_vc_ParamLimits

0x134f,	// (0x0000134f) input_focus_pane_vc

0x5c7b,	// (0x00005c7b) button_value_adjust_pane_cp3_vc

0x5c83,	// (0x00005c83) button_value_adjust_pane_cp5_vc

0x5c8b,	// (0x00005c8b) form_field_data_pane_vc_ParamLimits

0x5c8b,	// (0x00005c8b) form_field_data_pane_vc

0x5ca2,	// (0x00005ca2) form_field_data_pane_vc_cp2

0x5caa,	// (0x00005caa) form_field_data_wide_pane_vc_ParamLimits

0x5caa,	// (0x00005caa) form_field_data_wide_pane_vc

0x5cc0,	// (0x00005cc0) form_field_data_wide_pane_vc_cp2

0x5cc8,	// (0x00005cc8) form_field_popup_pane_vc_ParamLimits

0x5cc8,	// (0x00005cc8) form_field_popup_pane_vc

0x5cdf,	// (0x00005cdf) form_field_popup_wide_pane_vc_ParamLimits

0x5cdf,	// (0x00005cdf) form_field_popup_wide_pane_vc

0x5cf5,	// (0x00005cf5) form_field_slider_pane_vc_ParamLimits

0x5cf5,	// (0x00005cf5) form_field_slider_pane_vc

0x5d08,	// (0x00005d08) form_field_slider_wide_pane_vc_ParamLimits

0x5d08,	// (0x00005d08) form_field_slider_wide_pane_vc

0xd10a,	// (0x0000d10a) grid_touch_1_pane_ParamLimits

0xd10a,	// (0x0000d10a) grid_touch_1_pane

0xd11e,	// (0x0000d11e) grid_touch_2_pane_ParamLimits

0xd11e,	// (0x0000d11e) grid_touch_2_pane

0x5ddd,	// (0x00005ddd) touch_pane_g1_ParamLimits

0x5ddd,	// (0x00005ddd) touch_pane_g1

0x5d3f,	// (0x00005d3f) cell_app_pane_cp_wide_ParamLimits

0x5d3f,	// (0x00005d3f) cell_app_pane_cp_wide

0x5d50,	// (0x00005d50) grid_popup_fast_wide_pane_ParamLimits

0x5d50,	// (0x00005d50) grid_popup_fast_wide_pane

0x5d64,	// (0x00005d64) scroll_pane_cp19_ParamLimits

0x5d64,	// (0x00005d64) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x5d78,	// (0x00005d78) listscroll_popup_fast_wide_pane

0x1694,	// (0x00001694) grid_indicator_nsta_pane

0x5d80,	// (0x00005d80) clock_nsta_pane_g1

0x5d89,	// (0x00005d89) clock_nsta_pane_t1

0xd148,	// (0x0000d148) cell_indicator_nsta_pane_ParamLimits

0xd148,	// (0x0000d148) cell_indicator_nsta_pane

0x5ddd,	// (0x00005ddd) cell_indicator_nsta_pane_g1

0xd165,	// (0x0000d165) cell_indicator_nsta_pane_g2

0x0001,

0xeda4,	// (0x0000eda4) cell_indicator_nsta_pane_g

0x5e01,	// (0x00005e01) clock_nsta_pane_cp

0x5e09,	// (0x00005e09) indicator_nsta_pane_cp

0x5e11,	// (0x00005e11) nsta_clock_indic_pane_g1

0x0659,	// (0x00000659) grid_indicator_pane

0x1c2a,	// (0x00001c2a) scroll_pane_cp29

0x20f0,	// (0x000020f0) indicator_nsta_pane_cp2_ParamLimits

0x20f0,	// (0x000020f0) indicator_nsta_pane_cp2

0x04e9,	// (0x000004e9) main_apps_wheel_pane

0x3b03,	// (0x00003b03) form_midp_field_text_pane_ParamLimits

0x3c48,	// (0x00003c48) scroll_bar_cp050_ParamLimits

0x5e49,	// (0x00005e49) cell_indicator_pane_ParamLimits

0x5e49,	// (0x00005e49) cell_indicator_pane

0x5e66,	// (0x00005e66) cell_indicator_pane_g1

0xd17b,	// (0x0000d17b) grid_wheel_folder_pane_ParamLimits

0xd17b,	// (0x0000d17b) grid_wheel_folder_pane

0xd189,	// (0x0000d189) list_wheel_apps_pane_ParamLimits

0xd189,	// (0x0000d189) list_wheel_apps_pane

0xd197,	// (0x0000d197) main_apps_wheel_pane_g1_ParamLimits

0xd197,	// (0x0000d197) main_apps_wheel_pane_g1

0xd1a3,	// (0x0000d1a3) main_apps_wheel_pane_g2_ParamLimits

0xd1a3,	// (0x0000d1a3) main_apps_wheel_pane_g2

0x0001,

0xeda9,	// (0x0000eda9) main_apps_wheel_pane_g_ParamLimits

0xeda9,	// (0x0000eda9) main_apps_wheel_pane_g

0xd1b1,	// (0x0000d1b1) main_apps_wheel_pane_t1_ParamLimits

0xd1b1,	// (0x0000d1b1) main_apps_wheel_pane_t1

0xd1c5,	// (0x0000d1c5) list_wheel_apps_pane_g1

0xd1cd,	// (0x0000d1cd) list_wheel_apps_pane_g2

0xd1d5,	// (0x0000d1d5) list_wheel_apps_pane_g3

0xd1dd,	// (0x0000d1dd) list_wheel_apps_pane_g4

0xd1e7,	// (0x0000d1e7) list_wheel_apps_pane_g5

0x0004,

0xedae,	// (0x0000edae) list_wheel_apps_pane_g

0x23f3,	// (0x000023f3) navi_icon_text_pane

0xc598,	// (0x0000c598) aid_fill_nsta

0xd1fe,	// (0x0000d1fe) navi_icon_text_pane_g1

0xd20a,	// (0x0000d20a) navi_icon_text_pane_t1

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_ParamLimits

0x228f,	// (0x0000228f) list_set_graphic_pane_t1

0x4359,	// (0x00004359) popup_midp_note_alarm_window_t6_ParamLimits

0x4359,	// (0x00004359) popup_midp_note_alarm_window_t6

0x436b,	// (0x0000436b) popup_midp_note_alarm_window_t7_ParamLimits

0x436b,	// (0x0000436b) popup_midp_note_alarm_window_t7

0x437d,	// (0x0000437d) popup_midp_note_alarm_window_t8_ParamLimits

0x437d,	// (0x0000437d) popup_midp_note_alarm_window_t8

0x438f,	// (0x0000438f) popup_midp_note_alarm_window_t9_ParamLimits

0x438f,	// (0x0000438f) popup_midp_note_alarm_window_t9

0x43a1,	// (0x000043a1) popup_midp_note_alarm_window_t10_ParamLimits

0x43a1,	// (0x000043a1) popup_midp_note_alarm_window_t10

0x43b3,	// (0x000043b3) popup_midp_note_alarm_window_t11_ParamLimits

0x43b3,	// (0x000043b3) popup_midp_note_alarm_window_t11

0x43c5,	// (0x000043c5) scroll_pane_cp17_ParamLimits

0x43c5,	// (0x000043c5) scroll_pane_cp17

0x447b,	// (0x0000447b) volume_small_pane_cp_g1

0x5f4f,	// (0x00005f4f) volume_small_pane_cp_g2

0x5f58,	// (0x00005f58) volume_small_pane_cp_g3

0x5f61,	// (0x00005f61) volume_small_pane_cp_g4

0x5f6a,	// (0x00005f6a) volume_small_pane_cp_g5

0x5f73,	// (0x00005f73) volume_small_pane_cp_g6

0x5f7c,	// (0x00005f7c) volume_small_pane_cp_g7

0x5f85,	// (0x00005f85) volume_small_pane_cp_g8

0x5f8e,	// (0x00005f8e) volume_small_pane_cp_g9

0x5f97,	// (0x00005f97) volume_small_pane_cp_g10

0x2654,	// (0x00002654) midp_ticker_pane_g1_ParamLimits

0x2660,	// (0x00002660) midp_ticker_pane_g2_ParamLimits

0xa8aa,	// (0x0000a8aa) midp_ticker_pane_g_ParamLimits

0xbd5b,	// (0x0000bd5b) midp_ticker_pane_t1_ParamLimits

0xc5b8,	// (0x0000c5b8) aid_fill_nsta_2

0x3c34,	// (0x00003c34) list_form2_midp_pane

0x4fbe,	// (0x00004fbe) midp_editing_number_pane_ParamLimits

0x4fcd,	// (0x00004fcd) midp_ticker_pane_ParamLimits

0x5fa0,	// (0x00005fa0) form2_midp_field_pane

0x5fc4,	// (0x00005fc4) scroll_pane_cp51

0x5fe4,	// (0x00005fe4) form2_midp_button_pane_ParamLimits

0x5fe4,	// (0x00005fe4) form2_midp_button_pane

0x5ff6,	// (0x00005ff6) form2_midp_content_pane_ParamLimits

0x5ff6,	// (0x00005ff6) form2_midp_content_pane

0x6010,	// (0x00006010) form2_midp_field_choice_group_pane

0x6018,	// (0x00006018) form2_midp_field_pane_g1

0x6020,	// (0x00006020) form2_midp_field_pane_g2

0x6028,	// (0x00006028) form2_midp_field_pane_g3

0x6030,	// (0x00006030) form2_midp_field_pane_g4

0x0003,

0xac23,	// (0x0000ac23) form2_midp_field_pane_g

0x6038,	// (0x00006038) form2_midp_gauge_slider_pane

0x6040,	// (0x00006040) form2_midp_gauge_wait_pane

0x6048,	// (0x00006048) form2_midp_image_pane_ParamLimits

0x6048,	// (0x00006048) form2_midp_image_pane

0x6063,	// (0x00006063) form2_midp_label_pane_ParamLimits

0x6063,	// (0x00006063) form2_midp_label_pane

0xd238,	// (0x0000d238) form2_midp_label_pane_cp_ParamLimits

0xd238,	// (0x0000d238) form2_midp_label_pane_cp

0x609d,	// (0x0000609d) form2_midp_string_pane_ParamLimits

0x609d,	// (0x0000609d) form2_midp_string_pane

0x60af,	// (0x000060af) form2_midp_text_pane_ParamLimits

0x60af,	// (0x000060af) form2_midp_text_pane

0x60c8,	// (0x000060c8) form2_midp_time_pane

0x60d8,	// (0x000060d8) input_focus_pane_cp51_ParamLimits

0x60d8,	// (0x000060d8) input_focus_pane_cp51

0x60f0,	// (0x000060f0) form2_midp_label_pane_t1_ParamLimits

0x60f0,	// (0x000060f0) form2_midp_label_pane_t1

0x6130,	// (0x00006130) form2_mdip_text_pane_t1_ParamLimits

0x6130,	// (0x00006130) form2_mdip_text_pane_t1

0x614c,	// (0x0000614c) form2_midp_time_pane_t1

0x6167,	// (0x00006167) form2_midp_gauge_slider_pane_t1

0xd259,	// (0x0000d259) form2_midp_gauge_slider_pane_t2

0xd26b,	// (0x0000d26b) form2_midp_gauge_slider_pane_t3

0x0002,

0xedbe,	// (0x0000edbe) form2_midp_gauge_slider_pane_t

0x619d,	// (0x0000619d) form2_midp_slider_pane

0x61a9,	// (0x000061a9) form2_midp_gauge_wait_pane_t1

0x61b7,	// (0x000061b7) form2_midp_wait_pane_ParamLimits

0x61b7,	// (0x000061b7) form2_midp_wait_pane

0xd27d,	// (0x0000d27d) list_single_2graphic_pane_cp4_ParamLimits

0xd27d,	// (0x0000d27d) list_single_2graphic_pane_cp4

0xca3d,	// (0x0000ca3d) list_single_midp_graphic_pane_cp_ParamLimits

0xca3d,	// (0x0000ca3d) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x6211,	// (0x00006211) list_single_2graphic_pane_g1_cp4

0x558a,	// (0x0000558a) list_single_2graphic_pane_g2_cp4

0x6219,	// (0x00006219) list_single_2graphic_pane_t1_cp4

0x04e9,	// (0x000004e9) list_highlight_pane_cp21

0x6228,	// (0x00006228) list_single_midp_graphic_pane_g4_cp

0x6237,	// (0x00006237) list_single_midp_graphic_pane_t1_cp

0xd294,	// (0x0000d294) form2_mdip_string_pane_t1_ParamLimits

0xd294,	// (0x0000d294) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5_ParamLimits

0x1029,	// (0x00001029) list_double_large_graphic_pane_g5

0xbcaf,	// (0x0000bcaf) midp_form_pane_ParamLimits

0x04e9,	// (0x000004e9) main_apps_wheel_pane_ParamLimits

0xc2f4,	// (0x0000c2f4) popup_preview_window_ParamLimits

0xc2f4,	// (0x0000c2f4) popup_preview_window

0x304d,	// (0x0000304d) popup_touch_info_window_ParamLimits

0x304d,	// (0x0000304d) popup_touch_info_window

0x306b,	// (0x0000306b) popup_touch_menu_window_ParamLimits

0x306b,	// (0x0000306b) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x6386,	// (0x00006386) list_touch_menu_pane

0x638e,	// (0x0000638e) list_single_touch_menu_pane_ParamLimits

0x638e,	// (0x0000638e) list_single_touch_menu_pane

0x63a3,	// (0x000063a3) list_single_touch_menu_pane_t1

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7_ParamLimits

0x04e9,	// (0x000004e9) bg_popup_sub_pane_cp7

0x63b1,	// (0x000063b1) heading_sub_pane

0x63b9,	// (0x000063b9) list_touch_info_pane_ParamLimits

0x63b9,	// (0x000063b9) list_touch_info_pane

0x63c8,	// (0x000063c8) list_single_touch_info_pane_ParamLimits

0x63c8,	// (0x000063c8) list_single_touch_info_pane

0x63da,	// (0x000063da) list_single_touch_info_pane_t1

0x63e8,	// (0x000063e8) list_single_touch_info_pane_t2

0x0001,

0xac3a,	// (0x0000ac3a) list_single_touch_info_pane_t

0x2575,	// (0x00002575) bg_popup_heading_pane_cp

0x63f6,	// (0x000063f6) heading_sub_pane_t1

0x37b1,	// (0x000037b1) bg_popup_preview_window_pane_cp_ParamLimits

0x37b1,	// (0x000037b1) bg_popup_preview_window_pane_cp

0x63b1,	// (0x000063b1) heading_preview_pane

0x63b9,	// (0x000063b9) list_preview_pane_ParamLimits

0x63b9,	// (0x000063b9) list_preview_pane

0x6404,	// (0x00006404) popup_preview_window_g1

0x63c8,	// (0x000063c8) list_single_preview_pane_ParamLimits

0x63c8,	// (0x000063c8) list_single_preview_pane

0x640c,	// (0x0000640c) list_single_preview_pane_g1

0x6414,	// (0x00006414) list_single_preview_pane_t1

0x63da,	// (0x000063da) list_single_preview_pane_t2

0x0001,

0xac3f,	// (0x0000ac3f) list_single_preview_pane_t

0x6422,	// (0x00006422) bg_popup_heading_pane_cp2_ParamLimits

0x6422,	// (0x00006422) bg_popup_heading_pane_cp2

0x6438,	// (0x00006438) heading_preview_pane_g1

0x6440,	// (0x00006440) heading_preview_pane_t1_ParamLimits

0x6440,	// (0x00006440) heading_preview_pane_t1

0x067c,	// (0x0000067c) soft_indicator_pane_t1_ParamLimits

0x0d56,	// (0x00000d56) scroll_pane_ParamLimits

0x1b26,	// (0x00001b26) scroll_sc2_left_pane

0x1b2f,	// (0x00001b2f) scroll_sc2_right_pane

0x1b4e,	// (0x00001b4e) scroll_bg_pane_g1_ParamLimits

0x1b63,	// (0x00001b63) scroll_bg_pane_g2_ParamLimits

0x1b7b,	// (0x00001b7b) scroll_bg_pane_g3_ParamLimits

0xa839,	// (0x0000a839) scroll_bg_pane_g_ParamLimits

0x1b4e,	// (0x00001b4e) scroll_handle_pane_g1_ParamLimits

0x1b9d,	// (0x00001b9d) scroll_handle_pane_g2_ParamLimits

0x1b7b,	// (0x00001b7b) scroll_handle_pane_g3_ParamLimits

0xa840,	// (0x0000a840) scroll_handle_pane_g_ParamLimits

0x2b27,	// (0x00002b27) popup_choice_list_window_ParamLimits

0x2b27,	// (0x00002b27) popup_choice_list_window

0x3525,	// (0x00003525) choice_list_pane

0x35ed,	// (0x000035ed) cell_toolbar_pane_t1

0x3615,	// (0x00003615) toolbar_button_pane_ParamLimits

0x49f3,	// (0x000049f3) ai_gene_pane_1_t2_ParamLimits

0x49f3,	// (0x000049f3) ai_gene_pane_1_t2

0x0001,

0xaa56,	// (0x0000aa56) ai_gene_pane_1_t_ParamLimits

0xaa56,	// (0x0000aa56) ai_gene_pane_1_t

0x645d,	// (0x0000645d) scroll_sc2_left_pane_g1

0x645d,	// (0x0000645d) scroll_sc2_right_pane_g1

0x2af7,	// (0x00002af7) bg_popup_sub_pane_cp10

0x6467,	// (0x00006467) list_choice_list_pane

0x647e,	// (0x0000647e) list_single_choice_list_pane_ParamLimits

0x647e,	// (0x0000647e) list_single_choice_list_pane

0x6492,	// (0x00006492) list_single_choice_list_pane_g1

0x649a,	// (0x0000649a) list_single_choice_list_pane_t1_ParamLimits

0x649a,	// (0x0000649a) list_single_choice_list_pane_t1

0x64af,	// (0x000064af) choice_list_pane_g1

0x64b7,	// (0x000064b7) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x188c,	// (0x0000188c) title_pane_stacon_g2_ParamLimits

0x188c,	// (0x0000188c) title_pane_stacon_g2

0x0002,

0xa81f,	// (0x0000a81f) title_pane_stacon_g_ParamLimits

0xa81f,	// (0x0000a81f) title_pane_stacon_g

0x2575,	// (0x00002575) cursor_press_pane

0xbfb3,	// (0x0000bfb3) popup_fep_hwr_window_ParamLimits

0xbfb3,	// (0x0000bfb3) popup_fep_hwr_window

0x2c45,	// (0x00002c45) popup_fep_vkb_window_ParamLimits

0x2c45,	// (0x00002c45) popup_fep_vkb_window

0x64c5,	// (0x000064c5) cursor_press_pane_g1

0x0002,

0xedd2,	// (0x0000edd2) fep_vkb_side_pane_g_ParamLimits

0x6506,	// (0x00006506) fep_hwr_candidate_pane_ParamLimits

0x6506,	// (0x00006506) fep_hwr_candidate_pane

0x6530,	// (0x00006530) fep_hwr_side_pane_ParamLimits

0x6530,	// (0x00006530) fep_hwr_side_pane

0x6550,	// (0x00006550) fep_hwr_top_pane_ParamLimits

0x6550,	// (0x00006550) fep_hwr_top_pane

0x6568,	// (0x00006568) fep_hwr_write_pane_ParamLimits

0x6568,	// (0x00006568) fep_hwr_write_pane

0xedd2,	// (0x0000edd2) fep_vkb_side_pane_g

0x65a2,	// (0x000065a2) fep_hwr_top_pane_g1

0x65b4,	// (0x000065b4) fep_hwr_top_pane_g2

0x65c6,	// (0x000065c6) fep_hwr_top_pane_g3

0x0002,

0xac44,	// (0x0000ac44) fep_hwr_top_pane_g

0x65db,	// (0x000065db) fep_hwr_top_text_pane

0x1cf0,	// (0x00001cf0) fep_hwr_top_text_pane_g1

0x66b3,	// (0x000066b3) fep_hwr_top_text_pane_t1

0x6703,	// (0x00006703) fep_hwr_candidate_pane_g1

0x6983,	// (0x00006983) fep_vkb_keypad_pane_g3_ParamLimits

0x6983,	// (0x00006983) fep_vkb_keypad_pane_g3

0x69ab,	// (0x000069ab) fep_vkb_keypad_pane_g4_ParamLimits

0x69ab,	// (0x000069ab) fep_vkb_keypad_pane_g4

0x6a1a,	// (0x00006a1a) fep_vkb_bottom_pane_g2_ParamLimits

0x6a1a,	// (0x00006a1a) fep_vkb_bottom_pane_g2

0x0001,

0xac6f,	// (0x0000ac6f) fep_vkb_bottom_pane_g_ParamLimits

0xac6f,	// (0x0000ac6f) fep_vkb_bottom_pane_g

0x645d,	// (0x0000645d) cell_vkb_side_pane_g2

0x0001,

0xac79,	// (0x0000ac79) cell_vkb_side_pane_g

0x6aa5,	// (0x00006aa5) cell_vkb_side_pane_t1

0x6ab3,	// (0x00006ab3) cell_vkb_side_pane_t1_copy1

0x645d,	// (0x0000645d) bg_fep_vkb_candidate_pane_g2

0x6be5,	// (0x00006be5) cell_vkb_candidate_pane_ParamLimits

0x6737,	// (0x00006737) aid_size_cell_vkb_ParamLimits

0x6737,	// (0x00006737) aid_size_cell_vkb

0x6be5,	// (0x00006be5) cell_vkb_candidate_pane

0x6c1b,	// (0x00006c1b) bg_popup_fep_shadow_pane_g1

0x67c5,	// (0x000067c5) fep_vkb_bottom_pane_ParamLimits

0x67c5,	// (0x000067c5) fep_vkb_bottom_pane

0x6802,	// (0x00006802) fep_vkb_candidate_pane_ParamLimits

0x6802,	// (0x00006802) fep_vkb_candidate_pane

0x681e,	// (0x0000681e) fep_vkb_keypad_pane_ParamLimits

0x681e,	// (0x0000681e) fep_vkb_keypad_pane

0x6864,	// (0x00006864) fep_vkb_side_pane_ParamLimits

0x6864,	// (0x00006864) fep_vkb_side_pane

0x68a0,	// (0x000068a0) fep_vkb_top_pane_ParamLimits

0x68a0,	// (0x000068a0) fep_vkb_top_pane

0x68dc,	// (0x000068dc) fep_vkb_top_pane_g1_ParamLimits

0x68dc,	// (0x000068dc) fep_vkb_top_pane_g1

0x68eb,	// (0x000068eb) fep_vkb_top_pane_g2_ParamLimits

0x68eb,	// (0x000068eb) fep_vkb_top_pane_g2

0x68fa,	// (0x000068fa) fep_vkb_top_pane_g3_ParamLimits

0x68fa,	// (0x000068fa) fep_vkb_top_pane_g3

0x0003,

0xac5f,	// (0x0000ac5f) fep_vkb_top_pane_g_ParamLimits

0xac5f,	// (0x0000ac5f) fep_vkb_top_pane_g

0x6918,	// (0x00006918) fep_vkb_top_text_pane_ParamLimits

0x6918,	// (0x00006918) fep_vkb_top_text_pane

0xd379,	// (0x0000d379) fep_vkb_side_pane_g1_ParamLimits

0xd379,	// (0x0000d379) fep_vkb_side_pane_g1

0x6972,	// (0x00006972) grid_vkb_side_pane_ParamLimits

0x6972,	// (0x00006972) grid_vkb_side_pane

0x6c23,	// (0x00006c23) bg_popup_fep_shadow_pane_g2

0x6c2c,	// (0x00006c2c) bg_popup_fep_shadow_pane_g3

0x6c34,	// (0x00006c34) bg_popup_fep_shadow_pane_g4

0x6c3d,	// (0x00006c3d) bg_popup_fep_shadow_pane_g5

0x6c47,	// (0x00006c47) bg_popup_fep_shadow_pane_g6

0x6c4f,	// (0x00006c4f) bg_popup_fep_shadow_pane_g7

0x14ab,	// (0x000014ab) bg_popup_fep_shadow_pane_g8

0x69c9,	// (0x000069c9) grid_vkb_keypad_number_pane_ParamLimits

0x69c9,	// (0x000069c9) grid_vkb_keypad_number_pane

0x69d9,	// (0x000069d9) grid_vkb_keypad_pane_ParamLimits

0x69d9,	// (0x000069d9) grid_vkb_keypad_pane

0x69ff,	// (0x000069ff) fep_vkb_bottom_pane_g1_ParamLimits

0x69ff,	// (0x000069ff) fep_vkb_bottom_pane_g1

0x6a28,	// (0x00006a28) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6a28,	// (0x00006a28) grid_vkb_keypad_bottom_left_pane

0x6a3d,	// (0x00006a3d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6a3d,	// (0x00006a3d) grid_vkb_keypad_bottom_right_pane

0x6a52,	// (0x00006a52) fep_vkb_top_text_pane_g1

0xd3c0,	// (0x0000d3c0) fep_vkb_top_text_pane_t1

0xd3d2,	// (0x0000d3d2) cell_vkb_side_pane_ParamLimits

0xd3d2,	// (0x0000d3d2) cell_vkb_side_pane

0x645d,	// (0x0000645d) cell_vkb_side_pane_g1

0x6ac1,	// (0x00006ac1) cell_vkb_keypad_pane_ParamLimits

0x6ac1,	// (0x00006ac1) cell_vkb_keypad_pane

0x6b3c,	// (0x00006b3c) cell_vkb_keypad_pane_g1

0x0008,

0xac8c,	// (0x0000ac8c) bg_popup_fep_shadow_pane_g

0x645d,	// (0x0000645d) cell_hwr_side_pane_g1

0x645d,	// (0x0000645d) cell_hwr_side_pane_g2

0x6b46,	// (0x00006b46) cell_vkb_keypad_pane_t1

0xd3e8,	// (0x0000d3e8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd3e8,	// (0x0000d3e8) cell_vkb_keypad_bottom_left_pane

0xd3fd,	// (0x0000d3fd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd3fd,	// (0x0000d3fd) cell_vkb_keypad_bottom_right_pane

0x645d,	// (0x0000645d) cell_vkb_keypad_bottom_left_pane_g1

0x645d,	// (0x0000645d) cell_vkb_keypad_bottom_right_pane_g1

0x6baa,	// (0x00006baa) cell_vkb_keypad_number_pane_ParamLimits

0x6baa,	// (0x00006baa) cell_vkb_keypad_number_pane

0x6bc9,	// (0x00006bc9) cell_vkb_keypad_number_pane_g1

0x6bd3,	// (0x00006bd3) cell_vkb_keypad_number_pane_g2

0x6bdc,	// (0x00006bdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xac7e,	// (0x0000ac7e) cell_vkb_keypad_number_pane_g

0x6b46,	// (0x00006b46) cell_vkb_keypad_number_pane_t1

0x6c02,	// (0x00006c02) fep_vkb_candidate_pane_g1

0x0001,

0xac79,	// (0x0000ac79) cell_hwr_side_pane_g

0x6c61,	// (0x00006c61) cell_hwr_side_pane_t1

0x6c6f,	// (0x00006c6f) cell_hwr_side_pane_t1_copy1

0x690a,	// (0x0000690a) cell_hwr_candidate_pane_g1

0x6cbf,	// (0x00006cbf) cell_hwr_candidate_pane_t1

0x645d,	// (0x0000645d) cell_vkb_candidate_pane_g2

0x6d13,	// (0x00006d13) cell_vkb_candidate_pane_t1

0x64cd,	// (0x000064cd) bg_popup_fep_shadow_pane_ParamLimits

0x64cd,	// (0x000064cd) bg_popup_fep_shadow_pane

0x6582,	// (0x00006582) bg_fep_hwr_top_pane_g4

0x65f0,	// (0x000065f0) bg_hwr_side_pane_g1_ParamLimits

0x65f0,	// (0x000065f0) bg_hwr_side_pane_g1

0xd332,	// (0x0000d332) cell_hwr_side_pane_ParamLimits

0xd332,	// (0x0000d332) cell_hwr_side_pane

0x665e,	// (0x0000665e) fep_hwr_write_pane_g1_ParamLimits

0x665e,	// (0x0000665e) fep_hwr_write_pane_g1

0x666b,	// (0x0000666b) fep_hwr_write_pane_g2_ParamLimits

0x666b,	// (0x0000666b) fep_hwr_write_pane_g2

0x6678,	// (0x00006678) fep_hwr_write_pane_g3_ParamLimits

0x6678,	// (0x00006678) fep_hwr_write_pane_g3

0xd352,	// (0x0000d352) fep_hwr_write_pane_g4_ParamLimits

0xd352,	// (0x0000d352) fep_hwr_write_pane_g4

0x0005,

0xedc5,	// (0x0000edc5) fep_hwr_write_pane_g_ParamLimits

0xedc5,	// (0x0000edc5) fep_hwr_write_pane_g

0x6582,	// (0x00006582) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6582,	// (0x00006582) bg_fep_hwr_candidate_pane_g2

0x66c1,	// (0x000066c1) cell_hwr_candidate_pane_ParamLimits

0x66c1,	// (0x000066c1) cell_hwr_candidate_pane

0x6703,	// (0x00006703) fep_hwr_candidate_pane_g1_ParamLimits

0x6765,	// (0x00006765) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6765,	// (0x00006765) bg_popup_fep_shadow_pane_cp2

0x690a,	// (0x0000690a) fep_vkb_top_pane_g4_ParamLimits

0x690a,	// (0x0000690a) fep_vkb_top_pane_g4

0x6950,	// (0x00006950) fep_vkb_side_pane_g2_ParamLimits

0x6950,	// (0x00006950) fep_vkb_side_pane_g2

0xb7d7,	// (0x0000b7d7) list_setting_pane_t4_ParamLimits

0xb7d7,	// (0x0000b7d7) list_setting_pane_t4

0xb851,	// (0x0000b851) list_setting_number_pane_t5_ParamLimits

0xb851,	// (0x0000b851) list_setting_number_pane_t5

0xbb68,	// (0x0000bb68) list_double_heading_pane_cp2_ParamLimits

0xbb68,	// (0x0000bb68) list_double_heading_pane_cp2

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2_ParamLimits

0x1375,	// (0x00001375) list_double_heading_pane_g1_cp2

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2_ParamLimits

0x1381,	// (0x00001381) list_double_heading_pane_g2_cp2

0x6d21,	// (0x00006d21) list_double_heading_pane_t1_cp2_ParamLimits

0x6d21,	// (0x00006d21) list_double_heading_pane_t1_cp2

0x6d37,	// (0x00006d37) list_double_heading_pane_t2_cp2_ParamLimits

0x6d37,	// (0x00006d37) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0309,	// (0x00000309) popup_preview_fixed_window

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02

0x6d49,	// (0x00006d49) list_preview_fixed_pane

0x6d8f,	// (0x00006d8f) list_empty_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_empty_pane_fp

0x6d8f,	// (0x00006d8f) list_single_cale_day_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_cale_day_pane_fp

0x6d8f,	// (0x00006d8f) list_single_graphic_heading_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_graphic_heading_pane_fp

0x6d8f,	// (0x00006d8f) list_single_graphic_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_graphic_pane_fp

0x6d8f,	// (0x00006d8f) list_single_heading_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_heading_pane_fp

0x6d8f,	// (0x00006d8f) list_single_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_pane_fp

0x6da6,	// (0x00006da6) list_single_pane_fp_g1_ParamLimits

0x6da6,	// (0x00006da6) list_single_pane_fp_g1

0x1375,	// (0x00001375) list_single_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_pane_fp_g2

0x1381,	// (0x00001381) list_single_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_pane_fp_g3

0x6db2,	// (0x00006db2) list_single_pane_fp_g4_ParamLimits

0x6db2,	// (0x00006db2) list_single_pane_fp_g4

0x0003,

0xacad,	// (0x0000acad) list_single_pane_fp_g_ParamLimits

0xacad,	// (0x0000acad) list_single_pane_fp_g

0x6dbe,	// (0x00006dbe) list_single_pane_fp_t1_ParamLimits

0x6dbe,	// (0x00006dbe) list_single_pane_fp_t1

0x6dd5,	// (0x00006dd5) list_single_graphic_pane_fp_g1_ParamLimits

0x6dd5,	// (0x00006dd5) list_single_graphic_pane_fp_g1

0x6da6,	// (0x00006da6) list_single_graphic_pane_fp_g2_ParamLimits

0x6da6,	// (0x00006da6) list_single_graphic_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_pane_fp_g4

0x6db2,	// (0x00006db2) list_single_graphic_pane_fp_g5_ParamLimits

0x6db2,	// (0x00006db2) list_single_graphic_pane_fp_g5

0x0004,

0xacb6,	// (0x0000acb6) list_single_graphic_pane_fp_g_ParamLimits

0xacb6,	// (0x0000acb6) list_single_graphic_pane_fp_g

0x6de1,	// (0x00006de1) list_single_graphic_pane_fp_t1_ParamLimits

0x6de1,	// (0x00006de1) list_single_graphic_pane_fp_t1

0x6dd5,	// (0x00006dd5) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6dd5,	// (0x00006dd5) list_single_graphic_heading_pane_fp_g1

0x6da6,	// (0x00006da6) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6da6,	// (0x00006da6) list_single_graphic_heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_heading_pane_fp_g4

0x6db2,	// (0x00006db2) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6db2,	// (0x00006db2) list_single_graphic_heading_pane_fp_g5

0x0004,

0xacb6,	// (0x0000acb6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xacb6,	// (0x0000acb6) list_single_graphic_heading_pane_fp_g

0x6df7,	// (0x00006df7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6df7,	// (0x00006df7) list_single_graphic_heading_pane_fp_t1

0x6e0d,	// (0x00006e0d) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6e0d,	// (0x00006e0d) list_single_graphic_heading_pane_fp_t2

0x0001,

0xacc1,	// (0x0000acc1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xacc1,	// (0x0000acc1) list_single_graphic_heading_pane_fp_t

0x6e1f,	// (0x00006e1f) list_single_cale_day_pane_fp_g1_ParamLimits

0x6e1f,	// (0x00006e1f) list_single_cale_day_pane_fp_g1

0x6e57,	// (0x00006e57) list_single_cale_day_pane_fp_g2_ParamLimits

0x6e57,	// (0x00006e57) list_single_cale_day_pane_fp_g2

0x6e63,	// (0x00006e63) list_single_cale_day_pane_fp_g3_ParamLimits

0x6e63,	// (0x00006e63) list_single_cale_day_pane_fp_g3

0x6e8b,	// (0x00006e8b) list_single_cale_day_pane_fp_g4_ParamLimits

0x6e8b,	// (0x00006e8b) list_single_cale_day_pane_fp_g4

0x6eaf,	// (0x00006eaf) list_single_cale_day_pane_fp_g5_ParamLimits

0x6eaf,	// (0x00006eaf) list_single_cale_day_pane_fp_g5

0x0004,

0xacc6,	// (0x0000acc6) list_single_cale_day_pane_fp_g_ParamLimits

0xacc6,	// (0x0000acc6) list_single_cale_day_pane_fp_g

0x6ed3,	// (0x00006ed3) list_single_cale_day_pane_fp_t1_ParamLimits

0x6ed3,	// (0x00006ed3) list_single_cale_day_pane_fp_t1

0x6ef9,	// (0x00006ef9) list_single_cale_day_pane_fp_t2_ParamLimits

0x6ef9,	// (0x00006ef9) list_single_cale_day_pane_fp_t2

0x6f12,	// (0x00006f12) list_single_cale_day_pane_fp_t3_ParamLimits

0x6f12,	// (0x00006f12) list_single_cale_day_pane_fp_t3

0x0002,

0xacd1,	// (0x0000acd1) list_single_cale_day_pane_fp_t_ParamLimits

0xacd1,	// (0x0000acd1) list_single_cale_day_pane_fp_t

0x6da6,	// (0x00006da6) list_empty_pane_fp_g1_ParamLimits

0x6da6,	// (0x00006da6) list_empty_pane_fp_g1

0x6f2b,	// (0x00006f2b) list_empty_pane_fp_t1

0x6f39,	// (0x00006f39) list_empty_pane_fp_t2

0x0001,

0xacd8,	// (0x0000acd8) list_empty_pane_fp_t

0x6da6,	// (0x00006da6) list_single_heading_pane_fp_g1_ParamLimits

0x6da6,	// (0x00006da6) list_single_heading_pane_fp_g1

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2_ParamLimits

0x1375,	// (0x00001375) list_single_heading_pane_fp_g2

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3_ParamLimits

0x1381,	// (0x00001381) list_single_heading_pane_fp_g3

0x0002,

0xacdd,	// (0x0000acdd) list_single_heading_pane_fp_g_ParamLimits

0xacdd,	// (0x0000acdd) list_single_heading_pane_fp_g

0x6f47,	// (0x00006f47) list_single_heading_pane_fp_t1_ParamLimits

0x6f47,	// (0x00006f47) list_single_heading_pane_fp_t1

0x6f59,	// (0x00006f59) list_single_heading_pane_fp_t2_ParamLimits

0x6f59,	// (0x00006f59) list_single_heading_pane_fp_t2

0x0001,

0xace4,	// (0x0000ace4) list_single_heading_pane_fp_t_ParamLimits

0xace4,	// (0x0000ace4) list_single_heading_pane_fp_t

0x16d3,	// (0x000016d3) aid_size_cell_fast

0x0789,	// (0x00000789) soft_indicator_pane_cp1_t1

0x1710,	// (0x00001710) cell_app_pane_cp2_ParamLimits

0x1710,	// (0x00001710) cell_app_pane_cp2

0x64ef,	// (0x000064ef) fep_hwr_candidate_drop_down_list_pane

0x671d,	// (0x0000671d) fep_hwr_candidate_pane_g3_ParamLimits

0x671d,	// (0x0000671d) fep_hwr_candidate_pane_g3

0x672a,	// (0x0000672a) fep_hwr_candidate_pane_g4_ParamLimits

0x672a,	// (0x0000672a) fep_hwr_candidate_pane_g4

0x0002,

0xac58,	// (0x0000ac58) fep_hwr_candidate_pane_g_ParamLimits

0xac58,	// (0x0000ac58) fep_hwr_candidate_pane_g

0x67f1,	// (0x000067f1) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x67f1,	// (0x000067f1) fep_vkb_candidate_drop_down_list_pane

0x6c0a,	// (0x00006c0a) fep_vkb_candidate_pane_g3

0x6c12,	// (0x00006c12) fep_vkb_candidate_pane_g4

0x0002,

0xac85,	// (0x0000ac85) fep_vkb_candidate_pane_g

0x690a,	// (0x0000690a) cell_hwr_candidate_pane_g1_ParamLimits

0x6c7d,	// (0x00006c7d) cell_hwr_candidate_pane_g3_ParamLimits

0x6c7d,	// (0x00006c7d) cell_hwr_candidate_pane_g3

0x6c9e,	// (0x00006c9e) cell_hwr_candidate_pane_g4_ParamLimits

0x6c9e,	// (0x00006c9e) cell_hwr_candidate_pane_g4

0x0002,

0xac9f,	// (0x0000ac9f) cell_hwr_candidate_pane_g_ParamLimits

0xac9f,	// (0x0000ac9f) cell_hwr_candidate_pane_g

0x6cdd,	// (0x00006cdd) cell_vkb_candidate_pane_g3_ParamLimits

0x6cdd,	// (0x00006cdd) cell_vkb_candidate_pane_g3

0x6cf8,	// (0x00006cf8) cell_vkb_candidate_pane_g4_ParamLimits

0x6cf8,	// (0x00006cf8) cell_vkb_candidate_pane_g4

0x6f6f,	// (0x00006f6f) cell_app_pane_cp2_g1_ParamLimits

0x6f6f,	// (0x00006f6f) cell_app_pane_cp2_g1

0x6f8d,	// (0x00006f8d) cell_app_pane_cp2_g2_ParamLimits

0x6f8d,	// (0x00006f8d) cell_app_pane_cp2_g2

0x0001,

0xace9,	// (0x0000ace9) cell_app_pane_cp2_g_ParamLimits

0xace9,	// (0x0000ace9) cell_app_pane_cp2_g

0x6f99,	// (0x00006f99) cell_app_pane_cp2_t1_ParamLimits

0x6f99,	// (0x00006f99) cell_app_pane_cp2_t1

0x134f,	// (0x0000134f) grid_highlight_pane_cp1_ParamLimits

0x134f,	// (0x0000134f) grid_highlight_pane_cp1

0x6fab,	// (0x00006fab) cell_hwr_candidate_pane_cp1_ParamLimits

0x6fab,	// (0x00006fab) cell_hwr_candidate_pane_cp1

0x690a,	// (0x0000690a) fep_hwr_candidate_drop_down_list_pane_g1

0x6fca,	// (0x00006fca) fep_hwr_candidate_drop_down_list_pane_g2

0x6fd7,	// (0x00006fd7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xacee,	// (0x0000acee) fep_hwr_candidate_drop_down_list_pane_g

0x6fe4,	// (0x00006fe4) fep_hwr_candidate_drop_down_list_scroll_pane

0x6fed,	// (0x00006fed) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6fed,	// (0x00006fed) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ffa,	// (0x00006ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ffa,	// (0x00006ffa) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7007,	// (0x00007007) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7007,	// (0x00007007) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6cdd,	// (0x00006cdd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6cdd,	// (0x00006cdd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6cf8,	// (0x00006cf8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6cf8,	// (0x00006cf8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7014,	// (0x00007014) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7014,	// (0x00007014) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x702f,	// (0x0000702f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x702f,	// (0x0000702f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x704a,	// (0x0000704a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x704a,	// (0x0000704a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xacf5,	// (0x0000acf5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xacf5,	// (0x0000acf5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7065,	// (0x00007065) cell_vkb_candidate_pane_cp1_ParamLimits

0x7065,	// (0x00007065) cell_vkb_candidate_pane_cp1

0x690a,	// (0x0000690a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x690a,	// (0x0000690a) fep_vkb_candidate_drop_down_list_pane_g1

0x6fca,	// (0x00006fca) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6fca,	// (0x00006fca) fep_vkb_candidate_drop_down_list_pane_g2

0x6fd7,	// (0x00006fd7) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6fd7,	// (0x00006fd7) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xacee,	// (0x0000acee) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xacee,	// (0x0000acee) fep_vkb_candidate_drop_down_list_pane_g

0x7085,	// (0x00007085) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7085,	// (0x00007085) fep_vkb_candidate_drop_down_list_scroll_pane

0x7092,	// (0x00007092) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7092,	// (0x00007092) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x709f,	// (0x0000709f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x709f,	// (0x0000709f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x70ab,	// (0x000070ab) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x70ab,	// (0x000070ab) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6c7d,	// (0x00006c7d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6c7d,	// (0x00006c7d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6c9e,	// (0x00006c9e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6c9e,	// (0x00006c9e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x70b7,	// (0x000070b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x70b7,	// (0x000070b7) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x70d8,	// (0x000070d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x70d8,	// (0x000070d8) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x704a,	// (0x0000704a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x704a,	// (0x0000704a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xad06,	// (0x0000ad06) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xad06,	// (0x0000ad06) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb1d8,	// (0x0000b1d8) title_pane_g1_ParamLimits

0xb1e9,	// (0x0000b1e9) title_pane_g2_ParamLimits

0xec03,	// (0x0000ec03) title_pane_g_ParamLimits

0x1ce0,	// (0x00001ce0) aid_call2_pane

0x1ce8,	// (0x00001ce8) aid_call_pane

0x1cf0,	// (0x00001cf0) popup_clock_analogue_window_g1

0x1cf0,	// (0x00001cf0) popup_clock_analogue_window_g2

0x1cf8,	// (0x00001cf8) popup_clock_analogue_window_g3

0x1d01,	// (0x00001d01) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xa84e,	// (0x0000a84e) popup_clock_analogue_window_g

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

0xa859,	// (0x0000a859) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xa859,	// (0x0000a859) clock_digital_separator_pane_g

0xc598,	// (0x0000c598) aid_fill_nsta_ParamLimits

0xc6c7,	// (0x0000c6c7) indicator_nsta_pane_ParamLimits

0x3360,	// (0x00003360) popup_clock_analogue_window

0x3360,	// (0x00003360) popup_clock_digital_window

0x1694,	// (0x00001694) grid_indicator_nsta_pane_ParamLimits

0x5d97,	// (0x00005d97) clock_nsta_pane_t2

0x0001,

0xabe5,	// (0x0000abe5) clock_nsta_pane_t

0x1acb,	// (0x00001acb) aid_size_max_handle

0xbb5f,	// (0x0000bb5f) aid_size_min_handle

0x2575,	// (0x00002575) editor_scroll_pane

0x70f9,	// (0x000070f9) ex_editor_pane

0x1642,	// (0x00001642) scroll_pane_cp13

0x0d82,	// (0x00000d82) scroll_pane_cp14

0x1d39,	// (0x00001d39) scroll_pane_cp36

0xbb79,	// (0x0000bb79) list_single_graphic_hl_pane_cp2_ParamLimits

0xbb79,	// (0x0000bb79) list_single_graphic_hl_pane_cp2

0xcfe8,	// (0x0000cfe8) list_single_graphic_hl_pane_ParamLimits

0xcfe8,	// (0x0000cfe8) list_single_graphic_hl_pane

0x7101,	// (0x00007101) aid_size_min_hl_cp1

0x710a,	// (0x0000710a) list_highlight_pane_cp34_ParamLimits

0x710a,	// (0x0000710a) list_highlight_pane_cp34

0x711b,	// (0x0000711b) list_single_graphic_hl_pane_g1_ParamLimits

0x711b,	// (0x0000711b) list_single_graphic_hl_pane_g1

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g2

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3_ParamLimits

0x0d8a,	// (0x00000d8a) list_single_graphic_hl_pane_g3

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4_ParamLimits

0x0d96,	// (0x00000d96) list_single_graphic_hl_pane_g4

0xd418,	// (0x0000d418) list_single_graphic_hl_pane_g5_ParamLimits

0xd418,	// (0x0000d418) list_single_graphic_hl_pane_g5

0x0004,

0xedde,	// (0x0000edde) list_single_graphic_hl_pane_g_ParamLimits

0xedde,	// (0x0000edde) list_single_graphic_hl_pane_g

0xd42c,	// (0x0000d42c) list_single_graphic_hl_pane_t1_ParamLimits

0xd42c,	// (0x0000d42c) list_single_graphic_hl_pane_t1

0x7148,	// (0x00007148) aid_size_min_hl_cp2

0x7151,	// (0x00007151) list_highlight_pane_cp34_cp2_ParamLimits

0x7151,	// (0x00007151) list_highlight_pane_cp34_cp2

0x711b,	// (0x0000711b) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x711b,	// (0x0000711b) list_single_graphic_hl_pane_g1_cp2

0x715e,	// (0x0000715e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x715e,	// (0x0000715e) list_single_graphic_hl_pane_g2_cp2

0x716a,	// (0x0000716a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x716a,	// (0x0000716a) list_single_graphic_hl_pane_g3_cp2

0x24ac,	// (0x000024ac) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x24ac,	// (0x000024ac) list_single_graphic_hl_pane_g4_cp2

0x7134,	// (0x00007134) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7134,	// (0x00007134) list_single_graphic_hl_pane_g5_cp2

0xbda0,	// (0x0000bda0) control_pane_g4_ParamLimits

0xbda0,	// (0x0000bda0) control_pane_g4

0x2af7,	// (0x00002af7) bg_popup_sub_pane_cp10_ParamLimits

0x6467,	// (0x00006467) list_choice_list_pane_ParamLimits

0x6476,	// (0x00006476) scroll_pane_cp23

0x0819,	// (0x00000819) bg_popup_preview_window_pane_cp02_ParamLimits

0x6d49,	// (0x00006d49) list_preview_fixed_pane_ParamLimits

0x6d5f,	// (0x00006d5f) list_preview_fixed_pane_cp_ParamLimits

0x6d5f,	// (0x00006d5f) list_preview_fixed_pane_cp

0x6d6b,	// (0x00006d6b) popup_preview_fixed_window_g1_ParamLimits

0x6d6b,	// (0x00006d6b) popup_preview_fixed_window_g1

0x6d77,	// (0x00006d77) popup_preview_fixed_window_g2_ParamLimits

0x6d77,	// (0x00006d77) popup_preview_fixed_window_g2

0x0002,

0xaca6,	// (0x0000aca6) popup_preview_fixed_window_g_ParamLimits

0xaca6,	// (0x0000aca6) popup_preview_fixed_window_g

0x1971,	// (0x00001971) aid_navi_side_left_pane_ParamLimits

0x1986,	// (0x00001986) aid_navi_side_right_pane_ParamLimits

0x199e,	// (0x0000199e) navi_icon_pane_stacon_ParamLimits

0x19b2,	// (0x000019b2) navi_navi_pane_stacon_ParamLimits

0x199e,	// (0x0000199e) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x718e,	// (0x0000718e) listscroll_text_info_pane

0x7196,	// (0x00007196) list_text_info_pane_ParamLimits

0x7196,	// (0x00007196) list_text_info_pane

0x71a5,	// (0x000071a5) scroll_pane_cp24_ParamLimits

0x71a5,	// (0x000071a5) scroll_pane_cp24

0xd442,	// (0x0000d442) list_text_info_pane_t1_ParamLimits

0xd442,	// (0x0000d442) list_text_info_pane_t1

0xbf28,	// (0x0000bf28) popup_fast_swap2_window_ParamLimits

0xbf28,	// (0x0000bf28) popup_fast_swap2_window

0x71fc,	// (0x000071fc) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3c60,	// (0x00003c60) heading_pane_cp2

0x0a59,	// (0x00000a59) listscroll_fast2_pane

0x7206,	// (0x00007206) grid_fast2_pane

0x7210,	// (0x00007210) listscroll_fast2_pane_g1

0x7218,	// (0x00007218) listscroll_fast2_pane_g2

0x0001,

0xad22,	// (0x0000ad22) listscroll_fast2_pane_g

0x1642,	// (0x00001642) scroll_pane_cp26

0x7222,	// (0x00007222) cell_fast2_pane_ParamLimits

0x7222,	// (0x00007222) cell_fast2_pane

0x7237,	// (0x00007237) cell_fast2_pane_g1

0x7240,	// (0x00007240) cell_fast2_pane_g2

0x7249,	// (0x00007249) cell_fast2_pane_g3

0x0002,

0xad27,	// (0x0000ad27) cell_fast2_pane_g

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp9

0x0b54,	// (0x00000b54) main_eswt_pane_ParamLimits

0x0b54,	// (0x00000b54) main_eswt_pane

0x71ba,	// (0x000071ba) list_single_text_info_pane

0x7251,	// (0x00007251) eswt_ctrl_button_pane

0x7251,	// (0x00007251) eswt_ctrl_canvas_pane

0x7259,	// (0x00007259) eswt_ctrl_combo_pane

0x7251,	// (0x00007251) eswt_ctrl_default_pane

0x7251,	// (0x00007251) eswt_ctrl_label_pane

0x7261,	// (0x00007261) eswt_ctrl_wait_pane

0x7269,	// (0x00007269) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x7289,	// (0x00007289) popup_eswt_tasktip_window_ParamLimits

0x7289,	// (0x00007289) popup_eswt_tasktip_window

0x37b1,	// (0x000037b1) bg_popup_window_pane_cp18

0x729a,	// (0x0000729a) eswt_control_pane_g1_ParamLimits

0x729a,	// (0x0000729a) eswt_control_pane_g1

0x72a7,	// (0x000072a7) eswt_control_pane_g2_ParamLimits

0x72a7,	// (0x000072a7) eswt_control_pane_g2

0x72b4,	// (0x000072b4) eswt_control_pane_g3_ParamLimits

0x72b4,	// (0x000072b4) eswt_control_pane_g3

0x72c1,	// (0x000072c1) eswt_control_pane_g4_ParamLimits

0x72c1,	// (0x000072c1) eswt_control_pane_g4

0x0003,

0xad2e,	// (0x0000ad2e) eswt_control_pane_g_ParamLimits

0xad2e,	// (0x0000ad2e) eswt_control_pane_g

0x134f,	// (0x0000134f) bg_button_pane_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane

0x0b54,	// (0x00000b54) common_borders_pane_copy2_ParamLimits

0x0b54,	// (0x00000b54) common_borders_pane_copy2

0x72ce,	// (0x000072ce) control_button_pane_g1_ParamLimits

0x72ce,	// (0x000072ce) control_button_pane_g1

0x72da,	// (0x000072da) control_button_pane_g2_ParamLimits

0x72da,	// (0x000072da) control_button_pane_g2

0x72e6,	// (0x000072e6) control_button_pane_g3_ParamLimits

0x72e6,	// (0x000072e6) control_button_pane_g3

0x0002,

0xad37,	// (0x0000ad37) control_button_pane_g_ParamLimits

0xad37,	// (0x0000ad37) control_button_pane_g

0x72fa,	// (0x000072fa) control_button_pane_t1

0x7308,	// (0x00007308) control_button_pane_t2

0x0001,

0xad3e,	// (0x0000ad3e) control_button_pane_t

0x3621,	// (0x00003621) bg_button_pane_g1

0x3629,	// (0x00003629) bg_button_pane_g2

0x3631,	// (0x00003631) bg_button_pane_g3

0x3639,	// (0x00003639) bg_button_pane_g4

0x3641,	// (0x00003641) bg_button_pane_g5

0x3649,	// (0x00003649) bg_button_pane_g6

0x3651,	// (0x00003651) bg_button_pane_g7

0x3659,	// (0x00003659) bg_button_pane_g8

0x3661,	// (0x00003661) bg_button_pane_g9

0x0008,

0xa9aa,	// (0x0000a9aa) bg_button_pane_g

0x6422,	// (0x00006422) common_borders_pane_ParamLimits

0x6422,	// (0x00006422) common_borders_pane

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy1_ParamLimits

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy1

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy1_ParamLimits

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy1

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy1_ParamLimits

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy1

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy1_ParamLimits

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy1

0x645d,	// (0x0000645d) bg_eswt_ctrl_canvas_pane_g1

0x6422,	// (0x00006422) common_borders_pane_cp2_ParamLimits

0x6422,	// (0x00006422) common_borders_pane_cp2

0x6422,	// (0x00006422) common_borders_pane_cp3_ParamLimits

0x6422,	// (0x00006422) common_borders_pane_cp3

0x7316,	// (0x00007316) separator_horizontal_pane

0x731e,	// (0x0000731e) separator_vertical_pane

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy2_ParamLimits

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy2

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy2_ParamLimits

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy2

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy2_ParamLimits

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy2

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy2_ParamLimits

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x7327,	// (0x00007327) separator_horizontal_pane_g1

0x7330,	// (0x00007330) separator_horizontal_pane_g2

0x7339,	// (0x00007339) separator_horizontal_pane_g3

0x0002,

0xad43,	// (0x0000ad43) separator_horizontal_pane_g

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy3_ParamLimits

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy3

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy3_ParamLimits

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy3

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy3_ParamLimits

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy3

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy3_ParamLimits

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x7342,	// (0x00007342) separator_vertical_pane_g1

0x734b,	// (0x0000734b) separator_vertical_pane_g2

0x7354,	// (0x00007354) separator_vertical_pane_g3

0x0002,

0xad4a,	// (0x0000ad4a) separator_vertical_pane_g

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy4_ParamLimits

0x729a,	// (0x0000729a) eswt_control_pane_g1_copy4

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy4_ParamLimits

0x72a7,	// (0x000072a7) eswt_control_pane_g2_copy4

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy4_ParamLimits

0x72b4,	// (0x000072b4) eswt_control_pane_g3_copy4

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy4_ParamLimits

0x72c1,	// (0x000072c1) eswt_control_pane_g4_copy4

0xd460,	// (0x0000d460) eswt_ctrl_combo_button_pane

0xd468,	// (0x0000d468) eswt_ctrl_input_pane

0xd470,	// (0x0000d470) popup_choice_list_window_cp70

0xd478,	// (0x0000d478) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6422,	// (0x00006422) bg_button_pane_cp70_ParamLimits

0x6422,	// (0x00006422) bg_button_pane_cp70

0xd486,	// (0x0000d486) eswt_ctrl_combo_button_pane_g1

0x738b,	// (0x0000738b) wait_bar_pane_cp70

0x37b1,	// (0x000037b1) bg_popup_window_pane_cp70_ParamLimits

0x37b1,	// (0x000037b1) bg_popup_window_pane_cp70

0x7393,	// (0x00007393) popup_eswt_tasktip_window_t1

0x73a9,	// (0x000073a9) wait_bar_pane_cp71_ParamLimits

0x73a9,	// (0x000073a9) wait_bar_pane_cp71

0x73b5,	// (0x000073b5) grid_eswt_app_pane

0x1b2f,	// (0x00001b2f) scroll_pane_cp70

0xd48e,	// (0x0000d48e) cell_eswt_app_pane_ParamLimits

0xd48e,	// (0x0000d48e) cell_eswt_app_pane

0xd4b8,	// (0x0000d4b8) cell_eswt_app_pane_g1_ParamLimits

0xd4b8,	// (0x0000d4b8) cell_eswt_app_pane_g1

0xd4e7,	// (0x0000d4e7) cell_eswt_app_pane_g2_ParamLimits

0xd4e7,	// (0x0000d4e7) cell_eswt_app_pane_g2

0x0001,

0xede9,	// (0x0000ede9) cell_eswt_app_pane_g_ParamLimits

0xede9,	// (0x0000ede9) cell_eswt_app_pane_g

0xd510,	// (0x0000d510) cell_eswt_app_pane_t1_ParamLimits

0xd510,	// (0x0000d510) cell_eswt_app_pane_t1

0x747c,	// (0x0000747c) grid_highlight_pane_cp70_ParamLimits

0x747c,	// (0x0000747c) grid_highlight_pane_cp70

0x2448,	// (0x00002448) set_content_pane_g1

0x28c6,	// (0x000028c6) status_small_volume_pane

0x7488,	// (0x00007488) status_small_volume_pane_g1

0x7490,	// (0x00007490) volume_small2_pane

0x7499,	// (0x00007499) volume_small2_pane_g1

0x74a2,	// (0x000074a2) volume_small2_pane_g2

0x74ab,	// (0x000074ab) volume_small2_pane_g3

0x74b4,	// (0x000074b4) volume_small2_pane_g4

0x74bd,	// (0x000074bd) volume_small2_pane_g5

0x74c6,	// (0x000074c6) volume_small2_pane_g6

0x74cf,	// (0x000074cf) volume_small2_pane_g7

0x74d8,	// (0x000074d8) volume_small2_pane_g8

0x74e1,	// (0x000074e1) volume_small2_pane_g9

0x74ea,	// (0x000074ea) volume_small2_pane_g10

0x0009,

0xad56,	// (0x0000ad56) volume_small2_pane_g

0x6a52,	// (0x00006a52) fep_vkb_top_text_pane_g1_ParamLimits

0xd3c0,	// (0x0000d3c0) fep_vkb_top_text_pane_t1_ParamLimits

0x6d83,	// (0x00006d83) popup_preview_fixed_window_g3_ParamLimits

0x6d83,	// (0x00006d83) popup_preview_fixed_window_g3

0xc52b,	// (0x0000c52b) popup_toolbar_trans_pane

0xce30,	// (0x0000ce30) aid_height_set_list_ParamLimits

0x4e0c,	// (0x00004e0c) aid_size_parent_ParamLimits

0x2af7,	// (0x00002af7) list_highlight_pane_cp2_ParamLimits

0x2448,	// (0x00002448) set_content_pane_g1_ParamLimits

0xcffb,	// (0x0000cffb) list_single_image_pane_ParamLimits

0xcffb,	// (0x0000cffb) list_single_image_pane

0xd542,	// (0x0000d542) aid_size_cell_image_ParamLimits

0xd542,	// (0x0000d542) aid_size_cell_image

0xd54f,	// (0x0000d54f) grid_single_image_pane_ParamLimits

0xd54f,	// (0x0000d54f) grid_single_image_pane

0x1375,	// (0x00001375) list_single_image_pane_g1_ParamLimits

0x1375,	// (0x00001375) list_single_image_pane_g1

0x1381,	// (0x00001381) list_single_image_pane_g2_ParamLimits

0x1381,	// (0x00001381) list_single_image_pane_g2

0x0001,

0xad6b,	// (0x0000ad6b) list_single_image_pane_g_ParamLimits

0xad6b,	// (0x0000ad6b) list_single_image_pane_g

0x750c,	// (0x0000750c) list_single_image_pane_t1_ParamLimits

0x750c,	// (0x0000750c) list_single_image_pane_t1

0xd55b,	// (0x0000d55b) cell_image_list_pane_ParamLimits

0xd55b,	// (0x0000d55b) cell_image_list_pane

0xd56f,	// (0x0000d56f) cell_image_list_pane_g1

0xd578,	// (0x0000d578) cell_image_list_pane_g2

0x0001,

0xedee,	// (0x0000edee) cell_image_list_pane_g

0x7548,	// (0x00007548) aid_size_cell_tb_trans_pane

0x134f,	// (0x0000134f) bg_tb_trans_pane

0x755a,	// (0x0000755a) grid_tb_trans_pane

0x3621,	// (0x00003621) bg_tb_trans_pane_g1

0x3629,	// (0x00003629) bg_tb_trans_pane_g2

0x3631,	// (0x00003631) bg_tb_trans_pane_g3

0x3639,	// (0x00003639) bg_tb_trans_pane_g4

0x3641,	// (0x00003641) bg_tb_trans_pane_g5

0x3659,	// (0x00003659) bg_tb_trans_pane_g6

0x3661,	// (0x00003661) bg_tb_trans_pane_g7

0x3649,	// (0x00003649) bg_tb_trans_pane_g8

0x3651,	// (0x00003651) bg_tb_trans_pane_g9

0x0008,

0xad75,	// (0x0000ad75) bg_tb_trans_pane_g

0x756e,	// (0x0000756e) cell_toolbar_trans_pane_ParamLimits

0x756e,	// (0x0000756e) cell_toolbar_trans_pane

0x645d,	// (0x0000645d) cell_toolbar_trans_pane_g1

0xd21c,	// (0x0000d21c) list_form2_midp_pane_t1

0xd22a,	// (0x0000d22a) list_form2_midp_pane_t2

0x0001,

0xedb9,	// (0x0000edb9) list_form2_midp_pane_t

0x5fc4,	// (0x00005fc4) scroll_pane_cp51_ParamLimits

0x61c7,	// (0x000061c7) form2_midp_wait_pane_g1

0x61d0,	// (0x000061d0) form2_midp_wait_pane_g2

0x61d9,	// (0x000061d9) form2_midp_wait_pane_g3

0x0002,

0xac33,	// (0x0000ac33) form2_midp_wait_pane_g

0x04e9,	// (0x000004e9) list_highlight_pane_cp21_ParamLimits

0x6228,	// (0x00006228) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6237,	// (0x00006237) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x500e,	// (0x0000500e) list_single_2graphic_im_pane_ParamLimits

0x500e,	// (0x0000500e) list_single_2graphic_im_pane

0xd581,	// (0x0000d581) list_single_2graphic_im_pane_g1_ParamLimits

0xd581,	// (0x0000d581) list_single_2graphic_im_pane_g1

0xd592,	// (0x0000d592) list_single_2graphic_im_pane_g2_ParamLimits

0xd592,	// (0x0000d592) list_single_2graphic_im_pane_g2

0xd59e,	// (0x0000d59e) list_single_2graphic_im_pane_g3_ParamLimits

0xd59e,	// (0x0000d59e) list_single_2graphic_im_pane_g3

0x0003,

0xedf3,	// (0x0000edf3) list_single_2graphic_im_pane_g_ParamLimits

0xedf3,	// (0x0000edf3) list_single_2graphic_im_pane_g

0xd5b2,	// (0x0000d5b2) list_single_2graphic_im_pane_t1_ParamLimits

0xd5b2,	// (0x0000d5b2) list_single_2graphic_im_pane_t1

0x6d8f,	// (0x00006d8f) list_single_graphic_2heading_pane_fp_ParamLimits

0x6d8f,	// (0x00006d8f) list_single_graphic_2heading_pane_fp

0x6dd5,	// (0x00006dd5) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6dd5,	// (0x00006dd5) list_single_graphic_2heading_pane_fp_g1

0x6da6,	// (0x00006da6) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6da6,	// (0x00006da6) list_single_graphic_2heading_pane_fp_g2

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1375,	// (0x00001375) list_single_graphic_2heading_pane_fp_g3

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1381,	// (0x00001381) list_single_graphic_2heading_pane_fp_g4

0x6db2,	// (0x00006db2) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6db2,	// (0x00006db2) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xacb6,	// (0x0000acb6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xacb6,	// (0x0000acb6) list_single_graphic_2heading_pane_fp_g

0x7602,	// (0x00007602) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7602,	// (0x00007602) list_single_graphic_2heading_pane_fp_t1

0x6e0d,	// (0x00006e0d) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6e0d,	// (0x00006e0d) list_single_graphic_2heading_pane_fp_t2

0x7618,	// (0x00007618) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7618,	// (0x00007618) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xad91,	// (0x0000ad91) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xad91,	// (0x0000ad91) list_single_graphic_2heading_pane_fp_t

0x669b,	// (0x0000669b) fep_hwr_write_pane_g5_ParamLimits

0x669b,	// (0x0000669b) fep_hwr_write_pane_g5

0x66a7,	// (0x000066a7) fep_hwr_write_pane_g6_ParamLimits

0x66a7,	// (0x000066a7) fep_hwr_write_pane_g6

0x7269,	// (0x00007269) eswt_shell_pane_ParamLimits

0x37b1,	// (0x000037b1) bg_popup_window_pane_cp18_ParamLimits

0x4cba,	// (0x00004cba) heading_pane_cp70

0x7393,	// (0x00007393) popup_eswt_tasktip_window_t1_ParamLimits

0xc5ec,	// (0x0000c5ec) aid_touch_tab_arrow_left

0xc602,	// (0x0000c602) aid_touch_tab_arrow_right

0xb201,	// (0x0000b201) title_pane_g3_ParamLimits

0xb201,	// (0x0000b201) title_pane_g3

0x123c,	// (0x0000123c) set_value_pane_g1

0xc52b,	// (0x0000c52b) popup_toolbar_trans_pane_ParamLimits

0x7548,	// (0x00007548) aid_size_cell_tb_trans_pane_ParamLimits

0x134f,	// (0x0000134f) bg_tb_trans_pane_ParamLimits

0x755a,	// (0x0000755a) grid_tb_trans_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane_ParamLimits

0x0819,	// (0x00000819) cont_note_pane

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_text_pane

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane_ParamLimits

0x0b54,	// (0x00000b54) cont_snote2_single_graphic_pane

0x3e45,	// (0x00003e45) cont_note_wait_pane_ParamLimits

0x3e45,	// (0x00003e45) cont_note_wait_pane

0x3e45,	// (0x00003e45) cont_note_image_pane_ParamLimits

0x3e45,	// (0x00003e45) cont_note_image_pane

0x762e,	// (0x0000762e) popup_note2_window_g1_ParamLimits

0x762e,	// (0x0000762e) popup_note2_window_g1

0x765f,	// (0x0000765f) popup_note2_window_t1_ParamLimits

0x765f,	// (0x0000765f) popup_note2_window_t1

0x76a4,	// (0x000076a4) popup_note2_window_t2_ParamLimits

0x76a4,	// (0x000076a4) popup_note2_window_t2

0x76e9,	// (0x000076e9) popup_note2_window_t3_ParamLimits

0x76e9,	// (0x000076e9) popup_note2_window_t3

0x772e,	// (0x0000772e) popup_note2_window_t4_ParamLimits

0x772e,	// (0x0000772e) popup_note2_window_t4

0x0891,	// (0x00000891) popup_note2_window_t5_ParamLimits

0x0891,	// (0x00000891) popup_note2_window_t5

0x0004,

0xad9d,	// (0x0000ad9d) popup_note2_window_t_ParamLimits

0xad9d,	// (0x0000ad9d) popup_note2_window_t

0x775d,	// (0x0000775d) popup_note2_image_window_g1_ParamLimits

0x775d,	// (0x0000775d) popup_note2_image_window_g1

0x7769,	// (0x00007769) popup_note2_image_window_g2_ParamLimits

0x7769,	// (0x00007769) popup_note2_image_window_g2

0x0001,

0xada8,	// (0x0000ada8) popup_note2_image_window_g_ParamLimits

0xada8,	// (0x0000ada8) popup_note2_image_window_g

0x777b,	// (0x0000777b) popup_note2_image_window_t1_ParamLimits

0x777b,	// (0x0000777b) popup_note2_image_window_t1

0x7793,	// (0x00007793) popup_note2_image_window_t2_ParamLimits

0x7793,	// (0x00007793) popup_note2_image_window_t2

0x77ab,	// (0x000077ab) popup_note2_image_window_t3_ParamLimits

0x77ab,	// (0x000077ab) popup_note2_image_window_t3

0x0002,

0xadad,	// (0x0000adad) popup_note2_image_window_t_ParamLimits

0xadad,	// (0x0000adad) popup_note2_image_window_t

0x3e53,	// (0x00003e53) popup_note2_wait_window_g1_ParamLimits

0x3e53,	// (0x00003e53) popup_note2_wait_window_g1

0x3e5f,	// (0x00003e5f) popup_note2_wait_window_g2_ParamLimits

0x3e5f,	// (0x00003e5f) popup_note2_wait_window_g2

0x3e6b,	// (0x00003e6b) popup_note2_wait_window_g3_ParamLimits

0x3e6b,	// (0x00003e6b) popup_note2_wait_window_g3

0x0002,

0xa98c,	// (0x0000a98c) popup_note2_wait_window_g_ParamLimits

0xa98c,	// (0x0000a98c) popup_note2_wait_window_g

0x77c7,	// (0x000077c7) popup_note2_wait_window_t1_ParamLimits

0x77c7,	// (0x000077c7) popup_note2_wait_window_t1

0x77e5,	// (0x000077e5) popup_note2_wait_window_t2_ParamLimits

0x77e5,	// (0x000077e5) popup_note2_wait_window_t2

0x7803,	// (0x00007803) popup_note2_wait_window_t3_ParamLimits

0x7803,	// (0x00007803) popup_note2_wait_window_t3

0x7815,	// (0x00007815) popup_note2_wait_window_t4_ParamLimits

0x7815,	// (0x00007815) popup_note2_wait_window_t4

0x0003,

0xadb4,	// (0x0000adb4) popup_note2_wait_window_t_ParamLimits

0xadb4,	// (0x0000adb4) popup_note2_wait_window_t

0x7827,	// (0x00007827) wait_bar2_pane_ParamLimits

0x7827,	// (0x00007827) wait_bar2_pane

0x783f,	// (0x0000783f) popup_snote2_single_text_window_g1_ParamLimits

0x783f,	// (0x0000783f) popup_snote2_single_text_window_g1

0x7867,	// (0x00007867) popup_snote2_single_text_window_t1_ParamLimits

0x7867,	// (0x00007867) popup_snote2_single_text_window_t1

0x78b3,	// (0x000078b3) popup_snote2_single_text_window_t2_ParamLimits

0x78b3,	// (0x000078b3) popup_snote2_single_text_window_t2

0x78ff,	// (0x000078ff) popup_snote2_single_text_window_t3_ParamLimits

0x78ff,	// (0x000078ff) popup_snote2_single_text_window_t3

0x7940,	// (0x00007940) popup_snote2_single_text_window_t4_ParamLimits

0x7940,	// (0x00007940) popup_snote2_single_text_window_t4

0x7976,	// (0x00007976) popup_snote2_single_text_window_t5_ParamLimits

0x7976,	// (0x00007976) popup_snote2_single_text_window_t5

0x0004,

0xadbd,	// (0x0000adbd) popup_snote2_single_text_window_t_ParamLimits

0xadbd,	// (0x0000adbd) popup_snote2_single_text_window_t

0x79a1,	// (0x000079a1) popup_snote2_single_graphic_window_g1_ParamLimits

0x79a1,	// (0x000079a1) popup_snote2_single_graphic_window_g1

0x79c9,	// (0x000079c9) popup_snote2_single_graphic_window_g2_ParamLimits

0x79c9,	// (0x000079c9) popup_snote2_single_graphic_window_g2

0x0001,

0xadc8,	// (0x0000adc8) popup_snote2_single_graphic_window_g_ParamLimits

0xadc8,	// (0x0000adc8) popup_snote2_single_graphic_window_g

0x79f1,	// (0x000079f1) popup_snote2_single_graphic_window_t1_ParamLimits

0x79f1,	// (0x000079f1) popup_snote2_single_graphic_window_t1

0x7a3d,	// (0x00007a3d) popup_snote2_single_graphic_window_t2_ParamLimits

0x7a3d,	// (0x00007a3d) popup_snote2_single_graphic_window_t2

0x78ff,	// (0x000078ff) popup_snote2_single_graphic_window_t3_ParamLimits

0x78ff,	// (0x000078ff) popup_snote2_single_graphic_window_t3

0x7940,	// (0x00007940) popup_snote2_single_graphic_window_t4_ParamLimits

0x7940,	// (0x00007940) popup_snote2_single_graphic_window_t4

0x7976,	// (0x00007976) popup_snote2_single_graphic_window_t5_ParamLimits

0x7976,	// (0x00007976) popup_snote2_single_graphic_window_t5

0x0004,

0xadcd,	// (0x0000adcd) popup_snote2_single_graphic_window_t_ParamLimits

0xadcd,	// (0x0000adcd) popup_snote2_single_graphic_window_t

0x5e28,	// (0x00005e28) clock_nsta_pane_cp2_t1

0x5e28,	// (0x00005e28) clock_nsta_pane_cp2_t2

0x0001,

0xabf4,	// (0x0000abf4) clock_nsta_pane_cp2_t

0x1369,	// (0x00001369) form_field_data_wide_pane_g1_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2_ParamLimits

0x1375,	// (0x00001375) form_field_data_wide_pane_g2

0x1381,	// (0x00001381) form_field_data_wide_pane_g3_ParamLimits

0x1381,	// (0x00001381) form_field_data_wide_pane_g3

0x0002,

0xa7d1,	// (0x0000a7d1) form_field_data_wide_pane_g_ParamLimits

0xa7d1,	// (0x0000a7d1) form_field_data_wide_pane_g

0xd132,	// (0x0000d132) grid_touch_3_pane_ParamLimits

0xd132,	// (0x0000d132) grid_touch_3_pane

0xd5e3,	// (0x0000d5e3) cell_touch_3_pane_ParamLimits

0xd5e3,	// (0x0000d5e3) cell_touch_3_pane

0x645d,	// (0x0000645d) cell_touch_3_pane_g1

0x645d,	// (0x0000645d) cell_touch_3_pane_g2

0x0001,

0xac79,	// (0x0000ac79) cell_touch_3_pane_g

0x08c3,	// (0x000008c3) cont_query_data_pane

0x08cb,	// (0x000008cb) cont_query_data_pane_cp1

0x7ab8,	// (0x00007ab8) button_value_adjust_pane_cp7

0x7ac0,	// (0x00007ac0) query_popup_pane_cp3

0x1e2b,	// (0x00001e2b) bg_popup_sub_pane_cp22_ParamLimits

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2

0x1e5c,	// (0x00001e5c) popup_side_volume_key_window_g2

0x1e6b,	// (0x00001e6b) popup_side_volume_key_window_g3

0x0002,

0xa863,	// (0x0000a863) popup_side_volume_key_window_g

0x1e88,	// (0x00001e88) popup_side_volume_key_window_t2

0x0001,

0xa86a,	// (0x0000a86a) popup_side_volume_key_window_t

0x2312,	// (0x00002312) popup_side_volume_key_window_ParamLimits

0xb607,	// (0x0000b607) list_double_graphic_pane_g4_ParamLimits

0xb607,	// (0x0000b607) list_double_graphic_pane_g4

0xcfd4,	// (0x0000cfd4) list_single_2heading_msg_pane_ParamLimits

0xcfd4,	// (0x0000cfd4) list_single_2heading_msg_pane

0xd62c,	// (0x0000d62c) list_single_2heading_msg_pane_g1_ParamLimits

0xd62c,	// (0x0000d62c) list_single_2heading_msg_pane_g1

0xd638,	// (0x0000d638) list_single_2heading_msg_pane_g2_ParamLimits

0xd638,	// (0x0000d638) list_single_2heading_msg_pane_g2

0xd64b,	// (0x0000d64b) list_single_2heading_msg_pane_g3_ParamLimits

0xd64b,	// (0x0000d64b) list_single_2heading_msg_pane_g3

0xd657,	// (0x0000d657) list_single_2heading_msg_pane_g4_ParamLimits

0xd657,	// (0x0000d657) list_single_2heading_msg_pane_g4

0x0003,

0xedfc,	// (0x0000edfc) list_single_2heading_msg_pane_g_ParamLimits

0xedfc,	// (0x0000edfc) list_single_2heading_msg_pane_g

0xd66f,	// (0x0000d66f) list_single_2heading_msg_pane_t1_ParamLimits

0xd66f,	// (0x0000d66f) list_single_2heading_msg_pane_t1

0xd697,	// (0x0000d697) list_single_2heading_msg_pane_t2_ParamLimits

0xd697,	// (0x0000d697) list_single_2heading_msg_pane_t2

0xd702,	// (0x0000d702) list_single_2heading_msg_pane_t3_ParamLimits

0xd702,	// (0x0000d702) list_single_2heading_msg_pane_t3

0x7bb4,	// (0x00007bb4) list_single_2heading_msg_pane_t4_ParamLimits

0x7bb4,	// (0x00007bb4) list_single_2heading_msg_pane_t4

0x0003,

0xee05,	// (0x0000ee05) list_single_2heading_msg_pane_t_ParamLimits

0xee05,	// (0x0000ee05) list_single_2heading_msg_pane_t

0x043d,	// (0x0000043d) title_pane_g4_ParamLimits

0x043d,	// (0x0000043d) title_pane_g4

0x1899,	// (0x00001899) title_pane_stacon_g3_ParamLimits

0x1899,	// (0x00001899) title_pane_stacon_g3

0x75c5,	// (0x000075c5) list_single_2graphic_im_pane_g4_ParamLimits

0x75c5,	// (0x000075c5) list_single_2graphic_im_pane_g4

0x4a10,	// (0x00004a10) popup_side_volume_key_window_cp

0x549f,	// (0x0000549f) main_idle_act2_pane_t1

0x3669,	// (0x00003669) toolbar_button_pane_g10

0xb51e,	// (0x0000b51e) popup_toolbar_window_cp1

0x5e19,	// (0x00005e19) clock_nsta_pane_cp_t1

0x5e19,	// (0x00005e19) clock_nsta_pane_cp_t2

0x0001,

0xabef,	// (0x0000abef) clock_nsta_pane_cp_t

0x1e41,	// (0x00001e41) navi_navi_volume_pane_cp2_ParamLimits

0x1e50,	// (0x00001e50) popup_side_volume_key_window_g1_ParamLimits

0x1e5c,	// (0x00001e5c) popup_side_volume_key_window_g2_ParamLimits

0x1e6b,	// (0x00001e6b) popup_side_volume_key_window_g3_ParamLimits

0xa863,	// (0x0000a863) popup_side_volume_key_window_g_ParamLimits

0x64db,	// (0x000064db) fep_hwr_aid_pane

0x6582,	// (0x00006582) bg_fep_hwr_top_pane_g4_ParamLimits

0x65a2,	// (0x000065a2) fep_hwr_top_pane_g1_ParamLimits

0x65b4,	// (0x000065b4) fep_hwr_top_pane_g2_ParamLimits

0x65c6,	// (0x000065c6) fep_hwr_top_pane_g3_ParamLimits

0xac44,	// (0x0000ac44) fep_hwr_top_pane_g_ParamLimits

0x65db,	// (0x000065db) fep_hwr_top_text_pane_ParamLimits

0x47d1,	// (0x000047d1) aid_touch_tab_arrow_arrow_2

0x47da,	// (0x000047da) aid_touch_tab_arrow_left_2

0x64ef,	// (0x000064ef) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6526,	// (0x00006526) fep_hwr_prediction_pane

0x685a,	// (0x0000685a) fep_vkb_prediction_pane

0xd3a0,	// (0x0000d3a0) fep_vkb_side_pane_g3_ParamLimits

0xd3a0,	// (0x0000d3a0) fep_vkb_side_pane_g3

0x690a,	// (0x0000690a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6fca,	// (0x00006fca) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6fd7,	// (0x00006fd7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xacee,	// (0x0000acee) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7bd9,	// (0x00007bd9) fep_hwr_prediction_pane_g1

0x7be3,	// (0x00007be3) fep_hwr_prediction_pane_g2

0x7beb,	// (0x00007beb) fep_hwr_prediction_pane_g3

0x7bf3,	// (0x00007bf3) fep_hwr_prediction_pane_g4

0x0003,

0xadea,	// (0x0000adea) fep_hwr_prediction_pane_g

0x7bd9,	// (0x00007bd9) fep_vkb_prediction_pane_g1

0x7bfb,	// (0x00007bfb) fep_vkb_prediction_pane_g2

0x7c03,	// (0x00007c03) fep_vkb_prediction_pane_g3

0x7c0b,	// (0x00007c0b) fep_vkb_prediction_pane_g4

0x0003,

0xadf3,	// (0x0000adf3) fep_vkb_prediction_pane_g

0x4d7b,	// (0x00004d7b) slider_set_pane_g3

0x4d8f,	// (0x00004d8f) slider_set_pane_g4

0x4da7,	// (0x00004da7) slider_set_pane_g5

0x4d7b,	// (0x00004d7b) slider_set_pane_g6

0x4dbd,	// (0x00004dbd) slider_set_pane_g7

0x4f69,	// (0x00004f69) slider_form_pane_g3

0x4f72,	// (0x00004f72) slider_form_pane_g4

0x4f7a,	// (0x00004f7a) slider_form_pane_g5

0x4f69,	// (0x00004f69) slider_form_pane_g6

0xcf77,	// (0x0000cf77) slider_form_pane_g7

0x5784,	// (0x00005784) slider_set_pane_vc_g3

0x578d,	// (0x0000578d) slider_set_pane_vc_g4

0x5796,	// (0x00005796) slider_set_pane_vc_g5

0x5784,	// (0x00005784) slider_set_pane_vc_g6

0x579f,	// (0x0000579f) slider_set_pane_vc_g7

0x5784,	// (0x00005784) slider_form_pane_vc_g1

0x578d,	// (0x0000578d) slider_form_pane_vc_g2

0x5796,	// (0x00005796) slider_form_pane_vc_g3

0x5784,	// (0x00005784) slider_form_pane_vc_g4

0x5b51,	// (0x00005b51) slider_form_pane_vc_g5

0x0004,

0xabd5,	// (0x0000abd5) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7c13,	// (0x00007c13) ai3_links_pane

0xd770,	// (0x0000d770) popup_ai3_data_window_ParamLimits

0xd770,	// (0x0000d770) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xd788,	// (0x0000d788) cell_ai3_links_pane_ParamLimits

0xd788,	// (0x0000d788) cell_ai3_links_pane

0x7c4c,	// (0x00007c4c) bg_popup_sub_pane_cp11

0x7c59,	// (0x00007c59) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7c7e,	// (0x00007c7e) heading_ai3_data_pane

0x7c86,	// (0x00007c86) list_ai3_gene_pane

0x7c92,	// (0x00007c92) popup_ai3_data_window_g1

0x7c9a,	// (0x00007c9a) heading_ai3_data_pane_g1

0x7ca2,	// (0x00007ca2) heading_ai3_data_pane_t1

0x7cb0,	// (0x00007cb0) list_double_ai3_gene_pane_ParamLimits

0x7cb0,	// (0x00007cb0) list_double_ai3_gene_pane

0x7cbd,	// (0x00007cbd) list_single_ai3_gene_pane_ParamLimits

0x7cbd,	// (0x00007cbd) list_single_ai3_gene_pane

0x6422,	// (0x00006422) list_highlight_pane_cp7_ParamLimits

0x6422,	// (0x00006422) list_highlight_pane_cp7

0x7cca,	// (0x00007cca) list_single_a13_gene_pane_t1_ParamLimits

0x7cca,	// (0x00007cca) list_single_a13_gene_pane_t1

0x7ce1,	// (0x00007ce1) list_single_ai3_gene_pane_g1

0x7cea,	// (0x00007cea) list_single_ai3_gene_pane_g2

0x0001,

0xadfc,	// (0x0000adfc) list_single_ai3_gene_pane_g

0x7cf2,	// (0x00007cf2) list_double_ai3_gene_pane_g1_ParamLimits

0x7cf2,	// (0x00007cf2) list_double_ai3_gene_pane_g1

0x7cfe,	// (0x00007cfe) list_double_ai3_gene_pane_t1_ParamLimits

0x7cfe,	// (0x00007cfe) list_double_ai3_gene_pane_t1

0x7d1a,	// (0x00007d1a) list_double_ai3_gene_pane_t2_ParamLimits

0x7d1a,	// (0x00007d1a) list_double_ai3_gene_pane_t2

0x7d2f,	// (0x00007d2f) list_double_ai3_gene_pane_t3_ParamLimits

0x7d2f,	// (0x00007d2f) list_double_ai3_gene_pane_t3

0x0002,

0xae01,	// (0x0000ae01) list_double_ai3_gene_pane_t_ParamLimits

0xae01,	// (0x0000ae01) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7ad1,	// (0x00007ad1) aid_size_min_col_2

0xd616,	// (0x0000d616) aid_size_min_msg_ParamLimits

0xd616,	// (0x0000d616) aid_size_min_msg

0xd3b4,	// (0x0000d3b4) fep_vkb_top_text_pane_g2_ParamLimits

0xd3b4,	// (0x0000d3b4) fep_vkb_top_text_pane_g2

0x0001,

0xedd9,	// (0x0000edd9) fep_vkb_top_text_pane_g_ParamLimits

0xedd9,	// (0x0000edd9) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7d4c,	// (0x00007d4c) grid_hc_apps_pane_ParamLimits

0x7d4c,	// (0x00007d4c) grid_hc_apps_pane

0x7d5b,	// (0x00007d5b) list_hc_apps_pane

0x7d63,	// (0x00007d63) scroll_pane_cp37_ParamLimits

0x7d63,	// (0x00007d63) scroll_pane_cp37

0xd7a2,	// (0x0000d7a2) cell_hc_apps_pane_ParamLimits

0xd7a2,	// (0x0000d7a2) cell_hc_apps_pane

0xd862,	// (0x0000d862) cell_hc_apps_pane_g1_ParamLimits

0xd862,	// (0x0000d862) cell_hc_apps_pane_g1

0x7e50,	// (0x00007e50) cell_hc_apps_pane_g2_ParamLimits

0x7e50,	// (0x00007e50) cell_hc_apps_pane_g2

0x7e6c,	// (0x00007e6c) cell_hc_apps_pane_g3_ParamLimits

0x7e6c,	// (0x00007e6c) cell_hc_apps_pane_g3

0x0002,

0xee0e,	// (0x0000ee0e) cell_hc_apps_pane_g_ParamLimits

0xee0e,	// (0x0000ee0e) cell_hc_apps_pane_g

0xd88f,	// (0x0000d88f) cell_hc_apps_pane_t1_ParamLimits

0xd88f,	// (0x0000d88f) cell_hc_apps_pane_t1

0x0819,	// (0x00000819) grid_highlight_pane_cp10_ParamLimits

0x0819,	// (0x00000819) grid_highlight_pane_cp10

0xd8cd,	// (0x0000d8cd) list_single_hc_apps_pane_ParamLimits

0xd8cd,	// (0x0000d8cd) list_single_hc_apps_pane

0x7f41,	// (0x00007f41) list_single_hc_apps_pane_g1

0x7f5a,	// (0x00007f5a) list_single_hc_apps_pane_g2

0x0001,

0xae0f,	// (0x0000ae0f) list_single_hc_apps_pane_g

0x7f73,	// (0x00007f73) list_single_hc_apps_pane_g2_copy1

0x7f8f,	// (0x00007f8f) list_single_hc_apps_pane_t1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_ParamLimits

0x0533,	// (0x00000533) setting_slider_pane_t1_ParamLimits

0x054c,	// (0x0000054c) setting_slider_pane_t2_ParamLimits

0x0565,	// (0x00000565) setting_slider_pane_t3_ParamLimits

0xa6b9,	// (0x0000a6b9) setting_slider_pane_t_ParamLimits

0x057c,	// (0x0000057c) slider_set_pane_ParamLimits

0x2952,	// (0x00002952) control_pane_g5_ParamLimits

0x2952,	// (0x00002952) control_pane_g5

0x4d62,	// (0x00004d62) slider_set_pane_g1_ParamLimits

0x4d6f,	// (0x00004d6f) slider_set_pane_g2_ParamLimits

0x4d7b,	// (0x00004d7b) slider_set_pane_g3_ParamLimits

0x4d8f,	// (0x00004d8f) slider_set_pane_g4_ParamLimits

0x4da7,	// (0x00004da7) slider_set_pane_g5_ParamLimits

0x4d7b,	// (0x00004d7b) slider_set_pane_g6_ParamLimits

0x4dbd,	// (0x00004dbd) slider_set_pane_g7_ParamLimits

0xaaa8,	// (0x0000aaa8) slider_set_pane_g_ParamLimits

0x23f3,	// (0x000023f3) navi_icon_text_pane_ParamLimits

0xc5b8,	// (0x0000c5b8) aid_fill_nsta_2_ParamLimits

0xc5ec,	// (0x0000c5ec) aid_touch_tab_arrow_left_ParamLimits

0xc602,	// (0x0000c602) aid_touch_tab_arrow_right_ParamLimits

0xc69d,	// (0x0000c69d) clock_nsta_pane_ParamLimits

0xcd0d,	// (0x0000cd0d) navi_icon_pane_g1_ParamLimits

0xcd19,	// (0x0000cd19) navi_text_pane_t1_ParamLimits

0xd1fe,	// (0x0000d1fe) navi_icon_text_pane_g1_ParamLimits

0xd20a,	// (0x0000d20a) navi_icon_text_pane_t1_ParamLimits

0x7f41,	// (0x00007f41) list_single_hc_apps_pane_g1_ParamLimits

0x7f5a,	// (0x00007f5a) list_single_hc_apps_pane_g2_ParamLimits

0xae0f,	// (0x0000ae0f) list_single_hc_apps_pane_g_ParamLimits

0x7f73,	// (0x00007f73) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7f8f,	// (0x00007f8f) list_single_hc_apps_pane_t1_ParamLimits

0xb16d,	// (0x0000b16d) popup_toolbar2_fixed_window_ParamLimits

0xb16d,	// (0x0000b16d) popup_toolbar2_fixed_window

0xc521,	// (0x0000c521) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x7fbd,	// (0x00007fbd) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x7fbd,	// (0x00007fbd) grid_toolbar2_fixed_pane

0xd900,	// (0x0000d900) cell_toolbar2_fixed_pane_ParamLimits

0xd900,	// (0x0000d900) cell_toolbar2_fixed_pane

0xd91b,	// (0x0000d91b) cell_toolbar2_fixed_pane_g1

0x7fdf,	// (0x00007fdf) toolbar2_fixed_button_pane

0x3621,	// (0x00003621) toolbar2_fixed_button_pane_g1

0x3629,	// (0x00003629) toolbar2_fixed_button_pane_g2

0x3631,	// (0x00003631) toolbar2_fixed_button_pane_g3

0x3639,	// (0x00003639) toolbar2_fixed_button_pane_g4

0x3641,	// (0x00003641) toolbar2_fixed_button_pane_g5

0x3649,	// (0x00003649) toolbar2_fixed_button_pane_g6

0x3651,	// (0x00003651) toolbar2_fixed_button_pane_g7

0x3659,	// (0x00003659) toolbar2_fixed_button_pane_g8

0x3661,	// (0x00003661) toolbar2_fixed_button_pane_g9

0x0008,

0xa9aa,	// (0x0000a9aa) toolbar2_fixed_button_pane_g

0x7fe7,	// (0x00007fe7) cell_toolbar2_float_pane_ParamLimits

0x7fe7,	// (0x00007fe7) cell_toolbar2_float_pane

0x7ff8,	// (0x00007ff8) cell_toolbar2_float_pane_g1

0x7fdf,	// (0x00007fdf) toolbar2_fixed_button_pane_cp

0xd367,	// (0x0000d367) fep_vkb_accented_list_pane_ParamLimits

0xd367,	// (0x0000d367) fep_vkb_accented_list_pane

0x6c59,	// (0x00006c59) bg_popup_fep_shadow_pane_g9

0x2575,	// (0x00002575) bg_popup_fep_shadow_pane_cp3

0x1629,	// (0x00001629) list_accented_list_pane

0x8001,	// (0x00008001) list_single_accented_list_pane_ParamLimits

0x8001,	// (0x00008001) list_single_accented_list_pane

0x2575,	// (0x00002575) list_highlight_pane_cp10

0x8012,	// (0x00008012) list_single_accented_list_pane_t1

0xc44b,	// (0x0000c44b) popup_slider_window_ParamLimits

0xc44b,	// (0x0000c44b) popup_slider_window

0x7ac8,	// (0x00007ac8) aid_indentation_list_msg

0xda14,	// (0x0000da14) bg_popup_window_pane_cp19

0x8136,	// (0x00008136) popup_slider_window_g1

0x8152,	// (0x00008152) popup_slider_window_g2

0x816e,	// (0x0000816e) popup_slider_window_g3

0x0005,

0xee15,	// (0x0000ee15) popup_slider_window_g

0x81ca,	// (0x000081ca) popup_slider_window_t1

0x823e,	// (0x0000823e) small_volume_slider_vertical_pane

0x645d,	// (0x0000645d) small_volume_slider_vertical_pane_g1

0x645d,	// (0x0000645d) small_volume_slider_vertical_pane_g2

0x825a,	// (0x0000825a) small_volume_slider_vertical_pane_g3

0x0002,

0xae26,	// (0x0000ae26) small_volume_slider_vertical_pane_g

0xb0db,	// (0x0000b0db) area_side_right_pane_ParamLimits

0xb0db,	// (0x0000b0db) area_side_right_pane

0xdacc,	// (0x0000dacc) aid_size_side_button_ParamLimits

0xdacc,	// (0x0000dacc) aid_size_side_button

0xdae5,	// (0x0000dae5) grid_sctrl_middle_pane_ParamLimits

0xdae5,	// (0x0000dae5) grid_sctrl_middle_pane

0x8297,	// (0x00008297) sctrl_sk_bottom_pane

0x82a8,	// (0x000082a8) sctrl_sk_top_pane

0x82ba,	// (0x000082ba) aid_touch_sctrl_top

0x0819,	// (0x00000819) bg_sctrl_sk_pane_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane

0x82c7,	// (0x000082c7) sctrl_sk_top_pane_g1

0x82d4,	// (0x000082d4) sctrl_sk_top_pane_t1

0x82ba,	// (0x000082ba) aid_touch_sctrl_bottom

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp_ParamLimits

0x0819,	// (0x00000819) bg_sctrl_sk_pane_cp

0x82ef,	// (0x000082ef) sctrl_sk_bottom_pane_g1

0x82d4,	// (0x000082d4) sctrl_sk_bottom_pane_t1

0xdaff,	// (0x0000daff) cell_sctrl_middle_pane_ParamLimits

0xdaff,	// (0x0000daff) cell_sctrl_middle_pane

0xdb10,	// (0x0000db10) aid_touch_sctrl_middle_ParamLimits

0xdb10,	// (0x0000db10) aid_touch_sctrl_middle

0xdb1d,	// (0x0000db1d) bg_sctrl_middle_pane_ParamLimits

0xdb1d,	// (0x0000db1d) bg_sctrl_middle_pane

0x83b8,	// (0x000083b8) cell_sctrl_middle_pane_g1_ParamLimits

0x83b8,	// (0x000083b8) cell_sctrl_middle_pane_g1

0xdb2b,	// (0x0000db2b) cell_sctrl_middle_pane_g2_ParamLimits

0xdb2b,	// (0x0000db2b) cell_sctrl_middle_pane_g2

0x0001,

0xee22,	// (0x0000ee22) cell_sctrl_middle_pane_g_ParamLimits

0xee22,	// (0x0000ee22) cell_sctrl_middle_pane_g

0x3621,	// (0x00003621) bg_sctrl_middle_pane_g1

0x3629,	// (0x00003629) bg_sctrl_middle_pane_g2

0x3631,	// (0x00003631) bg_sctrl_middle_pane_g3

0x3639,	// (0x00003639) bg_sctrl_middle_pane_g4

0x3641,	// (0x00003641) bg_sctrl_middle_pane_g5

0x3649,	// (0x00003649) bg_sctrl_middle_pane_g6

0x3651,	// (0x00003651) bg_sctrl_middle_pane_g7

0x3659,	// (0x00003659) bg_sctrl_middle_pane_g8

0x0007,

0xae37,	// (0x0000ae37) bg_sctrl_middle_pane_g

0x3661,	// (0x00003661) bg_sctrl_middle_pane_g8_copy1

0x3621,	// (0x00003621) bg_sctrl_sk_pane_g1

0x3629,	// (0x00003629) bg_sctrl_sk_pane_g2

0x3631,	// (0x00003631) bg_sctrl_sk_pane_g3

0x0008,

0xa9aa,	// (0x0000a9aa) bg_sctrl_sk_pane_g

0x0d12,	// (0x00000d12) aid_size_touch_scroll_bar

0x3639,	// (0x00003639) bg_sctrl_sk_pane_g4

0x3641,	// (0x00003641) bg_sctrl_sk_pane_g5

0x3649,	// (0x00003649) bg_sctrl_sk_pane_g6

0x3651,	// (0x00003651) bg_sctrl_sk_pane_g7

0x3659,	// (0x00003659) bg_sctrl_sk_pane_g8

0x3661,	// (0x00003661) bg_sctrl_sk_pane_g9

0x2b9f,	// (0x00002b9f) popup_fep_china_hwr2_fs_candidate_window

0xbf85,	// (0x0000bf85) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf85,	// (0x0000bf85) popup_fep_china_hwr2_fs_control_window

0x690a,	// (0x0000690a) sctrl_sk_top_pane_g2

0x0001,

0xae2d,	// (0x0000ae2d) sctrl_sk_top_pane_g

0xdb37,	// (0x0000db37) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb37,	// (0x0000db37) aid_fep_china_hwr2_fs_cell

0xdb4b,	// (0x0000db4b) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb4b,	// (0x0000db4b) bg_popup_fep_shadow_pane_cp4

0xdb62,	// (0x0000db62) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb62,	// (0x0000db62) bg_popup_fep_shadow_pane_cp5

0xdb74,	// (0x0000db74) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb74,	// (0x0000db74) popup_fep_china_hwr2_fs_control_bar_grid

0xdb88,	// (0x0000db88) popup_fep_china_hwr2_fs_control_funtion_grid

0x838c,	// (0x0000838c) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x8396,	// (0x00008396) popup_fep_china_hwr2_fs_candidate_grid

0xdb90,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb90,	// (0x0000db90) cell_fep_china_hwr2_fs_funtion_grid

0x645d,	// (0x0000645d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x83b8,	// (0x000083b8) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x83b8,	// (0x000083b8) cell_fep_china_hwr2_fs_funtion_grid_g1

0x83c6,	// (0x000083c6) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x83c6,	// (0x000083c6) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xae48,	// (0x0000ae48) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xae48,	// (0x0000ae48) cell_fep_china_hwr2_fs_funtion_grid_g

0xdba8,	// (0x0000dba8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdba8,	// (0x0000dba8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdbbd,	// (0x0000dbbd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdbbd,	// (0x0000dbbd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xee27,	// (0x0000ee27) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xee27,	// (0x0000ee27) cell_fep_china_hwr2_fs_funtion_grid_t

0x840d,	// (0x0000840d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8415,	// (0x00008415) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x841d,	// (0x0000841d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xae52,	// (0x0000ae52) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8425,	// (0x00008425) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8425,	// (0x00008425) cell_fep_china_hwr2_fs_candidate_grid

0x843e,	// (0x0000843e) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8446,	// (0x00008446) popup_fep_china_hwr2_fs_candidate_grid_g21

0x645d,	// (0x0000645d) cell_fep_china_hwr2_fs_candidate_grid_g1

0x645d,	// (0x0000645d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xac79,	// (0x0000ac79) cell_fep_china_hwr2_fs_candidate_grid_g

0x844e,	// (0x0000844e) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3186,	// (0x00003186) clock_nsta_pane_cp_24_ParamLimits

0x3186,	// (0x00003186) clock_nsta_pane_cp_24

0x3204,	// (0x00003204) indicator_nsta_pane_cp_24_ParamLimits

0x3204,	// (0x00003204) indicator_nsta_pane_cp_24

0x4618,	// (0x00004618) heading_pane_g1

0x0001,

0xaa0f,	// (0x0000aa0f) heading_pane_g

0x522e,	// (0x0000522e) grid_sct_catagory_button_pane

0x5260,	// (0x00005260) scroll_pane_cp5_ParamLimits

0x5fd0,	// (0x00005fd0) button_value_adjust_pane_cp5_ParamLimits

0x5fd0,	// (0x00005fd0) button_value_adjust_pane_cp5

0x60c8,	// (0x000060c8) form2_midp_time_pane_ParamLimits

0x845c,	// (0x0000845c) cell_sct_catagory_button_pane_ParamLimits

0x845c,	// (0x0000845c) cell_sct_catagory_button_pane

0x6422,	// (0x00006422) bg_button_pane_cp01_ParamLimits

0x6422,	// (0x00006422) bg_button_pane_cp01

0x645d,	// (0x0000645d) cell_sct_catagory_button_pane_g1

0xc4c4,	// (0x0000c4c4) popup_tb_extension_window

0xdbd9,	// (0x0000dbd9) aid_size_cell_ext_ParamLimits

0xdbd9,	// (0x0000dbd9) aid_size_cell_ext

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1_ParamLimits

0x0b54,	// (0x00000b54) bg_tb_trans_pane_cp1

0xdbff,	// (0x0000dbff) grid_tb_ext_pane_ParamLimits

0xdbff,	// (0x0000dbff) grid_tb_ext_pane

0xdc3f,	// (0x0000dc3f) cell_tb_ext_pane_ParamLimits

0xdc3f,	// (0x0000dc3f) cell_tb_ext_pane

0xdc67,	// (0x0000dc67) cell_tb_ext_pane_g1_ParamLimits

0xdc67,	// (0x0000dc67) cell_tb_ext_pane_g1

0x84f4,	// (0x000084f4) cell_tb_ext_pane_t1

0x0819,	// (0x00000819) list_highlight_pane_cp11_ParamLimits

0x0819,	// (0x00000819) list_highlight_pane_cp11

0x0354,	// (0x00000354) popup_uni_indicator_window_ParamLimits

0x0354,	// (0x00000354) popup_uni_indicator_window

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14

0x850f,	// (0x0000850f) list_uniindi_pane

0x851b,	// (0x0000851b) uniindi_top_pane

0x0819,	// (0x00000819) bg_uniindi_top_pane

0x853a,	// (0x0000853a) uniindi_top_pane_g1

0x8550,	// (0x00008550) uniindi_top_pane_g2

0x0003,

0xae59,	// (0x0000ae59) uniindi_top_pane_g

0x857a,	// (0x0000857a) uniindi_top_pane_t1

0x85a4,	// (0x000085a4) list_single_uniindi_pane_ParamLimits

0x85a4,	// (0x000085a4) list_single_uniindi_pane

0x645d,	// (0x0000645d) bg_uniindi_top_pane_g1

0x85b6,	// (0x000085b6) list_single_uniindi_pane_g1

0x85c9,	// (0x000085c9) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x85ee,	// (0x000085ee) bg_sctrl_sk_pane_cp1

0x85f7,	// (0x000085f7) bg_sctrl_sk_pane_cp2

0x8600,	// (0x00008600) control_bg_pane_g1

0x8609,	// (0x00008609) control_bg_pane_g2

0x0001,

0xae62,	// (0x0000ae62) control_bg_pane_g

0x5ddd,	// (0x00005ddd) cell_indicator_nsta_pane_g1_ParamLimits

0xd165,	// (0x0000d165) cell_indicator_nsta_pane_g2_ParamLimits

0xeda4,	// (0x0000eda4) cell_indicator_nsta_pane_g_ParamLimits

0x614c,	// (0x0000614c) form2_midp_time_pane_t1_ParamLimits

0x64cd,	// (0x000064cd) main_idle_act4_pane_ParamLimits

0x64cd,	// (0x000064cd) main_idle_act4_pane

0xc4c4,	// (0x0000c4c4) popup_tb_extension_window_ParamLimits

0xdc26,	// (0x0000dc26) tb_ext_find_pane_ParamLimits

0xdc26,	// (0x0000dc26) tb_ext_find_pane

0x8612,	// (0x00008612) ai_gene_pane_1_cp1

0x26be,	// (0x000026be) ai_gene_pane_2_cp1

0x861a,	// (0x0000861a) list_single_idle_plugin_calendar_pane

0x8623,	// (0x00008623) list_single_idle_plugin_notification_pane

0x862c,	// (0x0000862c) list_single_idle_plugin_player_pane

0xdc84,	// (0x0000dc84) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc84,	// (0x0000dc84) list_single_idle_plugin_shortcut_pane

0xdcac,	// (0x0000dcac) main_idle_act4_pane_t1

0xdcc2,	// (0x0000dcc2) main_idle_act4_pane_t2

0x0001,

0xee2c,	// (0x0000ee2c) main_idle_act4_pane_t

0xdcda,	// (0x0000dcda) middle_sk_idle_act4_pane_ParamLimits

0xdcda,	// (0x0000dcda) middle_sk_idle_act4_pane

0xdcf6,	// (0x0000dcf6) popup_clock_digital_analogue_window_cp2

0xdd1d,	// (0x0000dd1d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd1d,	// (0x0000dd1d) shortcut_wheel_idle_act4_pane

0x645d,	// (0x0000645d) shortcut_wheel_idle_act4_pane_g1

0x645d,	// (0x0000645d) shortcut_wheel_idle_act4_pane_g2

0x645d,	// (0x0000645d) shortcut_wheel_idle_act4_pane_g3

0x645d,	// (0x0000645d) shortcut_wheel_idle_act4_pane_g4

0x645d,	// (0x0000645d) shortcut_wheel_idle_act4_pane_g5

0x86bf,	// (0x000086bf) shortcut_wheel_idle_act4_pane_g6

0x86c7,	// (0x000086c7) shortcut_wheel_idle_act4_pane_g7

0x86cf,	// (0x000086cf) shortcut_wheel_idle_act4_pane_g8

0x86d7,	// (0x000086d7) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xae6c,	// (0x0000ae6c) shortcut_wheel_idle_act4_pane_g

0x6582,	// (0x00006582) middle_sk_idle_act4_pane_g1_ParamLimits

0x6582,	// (0x00006582) middle_sk_idle_act4_pane_g1

0xdd9a,	// (0x0000dd9a) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd9a,	// (0x0000dd9a) middle_sk_idle_act4_pane_g2

0x0001,

0xee41,	// (0x0000ee41) middle_sk_idle_act4_pane_g_ParamLimits

0xee41,	// (0x0000ee41) middle_sk_idle_act4_pane_g

0xddb2,	// (0x0000ddb2) middle_sk_idle_act4_pane_t1_ParamLimits

0xddb2,	// (0x0000ddb2) middle_sk_idle_act4_pane_t1

0xdde1,	// (0x0000dde1) grid_ai_shortcut_pane_ParamLimits

0xdde1,	// (0x0000dde1) grid_ai_shortcut_pane

0xddfe,	// (0x0000ddfe) list_highlight_pane_cp16_ParamLimits

0xddfe,	// (0x0000ddfe) list_highlight_pane_cp16

0xde0b,	// (0x0000de0b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0b,	// (0x0000de0b) list_single_idle_plugin_shortcut_pane_g1

0xde17,	// (0x0000de17) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde17,	// (0x0000de17) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x0000de33) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x0000de33) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xee46,	// (0x0000ee46) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xee46,	// (0x0000ee46) list_single_idle_plugin_shortcut_pane_g

0xde48,	// (0x0000de48) cell_ai_shortcut_pane_ParamLimits

0xde48,	// (0x0000de48) cell_ai_shortcut_pane

0xde5e,	// (0x0000de5e) cell_ai_shortcut_pane_g1_ParamLimits

0xde5e,	// (0x0000de5e) cell_ai_shortcut_pane_g1

0x8612,	// (0x00008612) ai_gene_pane_1_cp2

0x8804,	// (0x00008804) ai_gene_pane_2_cp2

0x880c,	// (0x0000880c) list_highlight_pane_cp15

0x8815,	// (0x00008815) list_single_idle_plugin_calendar_pane_g1

0x880c,	// (0x0000880c) list_highlight_pane_cp17

0x881d,	// (0x0000881d) list_single_idle_plugin_calendar_pane_g1_copy1

0x8825,	// (0x00008825) list_single_idle_plugin_player_pane_g1

0x553f,	// (0x0000553f) list_single_idle_plugin_player_pane_g2

0x0001,

0xae9b,	// (0x0000ae9b) list_single_idle_plugin_player_pane_g

0x882d,	// (0x0000882d) list_single_idle_plugin_player_pane_t1

0x883b,	// (0x0000883b) list_single_idle_plugin_player_pane_t2

0x8849,	// (0x00008849) list_single_idle_plugin_player_pane_t3

0x8857,	// (0x00008857) list_single_idle_plugin_player_pane_t4

0x0003,

0xaea0,	// (0x0000aea0) list_single_idle_plugin_player_pane_t

0x8865,	// (0x00008865) wait_bar_pane_cp15

0x886d,	// (0x0000886d) grid_ai_notification_pane

0x553f,	// (0x0000553f) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x0000de80) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x0000de80) cell_ai_notification_pane

0x8883,	// (0x00008883) cell_ai_notification_pane_g1

0x888b,	// (0x0000888b) cell_ai_notification_pane_t1

0xde8d,	// (0x0000de8d) tb_ext_find_button_pane

0xde95,	// (0x0000de95) tb_ext_find_pane_g1

0xde9d,	// (0x0000de9d) tb_ext_find_pane_t1

0x1cf0,	// (0x00001cf0) tb_ext_find_button_pane_g1

0x88b7,	// (0x000088b7) tb_ext_find_button_pane_g2

0x0001,

0xaea9,	// (0x0000aea9) tb_ext_find_button_pane_g

0xdcac,	// (0x0000dcac) main_idle_act4_pane_t1_ParamLimits

0xdcc2,	// (0x0000dcc2) main_idle_act4_pane_t2_ParamLimits

0xee2c,	// (0x0000ee2c) main_idle_act4_pane_t_ParamLimits

0xdcf6,	// (0x0000dcf6) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd0d,	// (0x0000dd0d) sat_plugin_idle_act4_pane_ParamLimits

0xdd0d,	// (0x0000dd0d) sat_plugin_idle_act4_pane

0xdeab,	// (0x0000deab) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeab,	// (0x0000deab) sat_plugin_idle_act4_pane_t1

0xdec3,	// (0x0000dec3) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdec3,	// (0x0000dec3) sat_plugin_idle_act4_pane_t2

0xdedb,	// (0x0000dedb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdedb,	// (0x0000dedb) sat_plugin_idle_act4_pane_t3

0xdef3,	// (0x0000def3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdef3,	// (0x0000def3) sat_plugin_idle_act4_pane_t4

0x0003,

0xee4d,	// (0x0000ee4d) sat_plugin_idle_act4_pane_t_ParamLimits

0xee4d,	// (0x0000ee4d) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25_ParamLimits

0x0819,	// (0x00000819) bg_popup_sub_pane_cp25

0x890c,	// (0x0000890c) popup_battery_window_g1_ParamLimits

0x890c,	// (0x0000890c) popup_battery_window_g1

0x8918,	// (0x00008918) popup_battery_window_t1_ParamLimits

0x8918,	// (0x00008918) popup_battery_window_t1

0x892a,	// (0x0000892a) popup_battery_window_t2_ParamLimits

0x892a,	// (0x0000892a) popup_battery_window_t2

0x0001,

0xaeb7,	// (0x0000aeb7) popup_battery_window_t_ParamLimits

0xaeb7,	// (0x0000aeb7) popup_battery_window_t

0xbcc0,	// (0x0000bcc0) midp_canvas_pane_ParamLimits

0xbd1d,	// (0x0000bd1d) midp_keypad_pane_ParamLimits

0xbd1d,	// (0x0000bd1d) midp_keypad_pane

0x2af7,	// (0x00002af7) main_midp_pane_ParamLimits

0x5e37,	// (0x00005e37) signal_pane_g2_cp_ParamLimits

0xdf0b,	// (0x0000df0b) aid_size_cell_midp_keypad_ParamLimits

0xdf0b,	// (0x0000df0b) aid_size_cell_midp_keypad

0xdf29,	// (0x0000df29) midp_keyp_game_grid_pane_ParamLimits

0xdf29,	// (0x0000df29) midp_keyp_game_grid_pane

0xdf50,	// (0x0000df50) midp_keyp_rocker_pane_ParamLimits

0xdf50,	// (0x0000df50) midp_keyp_rocker_pane

0xdfa9,	// (0x0000dfa9) midp_keyp_sk_left_pane_ParamLimits

0xdfa9,	// (0x0000dfa9) midp_keyp_sk_left_pane

0xdffd,	// (0x0000dffd) midp_keyp_sk_right_pane_ParamLimits

0xdffd,	// (0x0000dffd) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe051,	// (0x0000e051) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe051,	// (0x0000e051) midp_keyp_sk_right_pane_g1

0x645d,	// (0x0000645d) midp_keyp_rocker_pane_g1

0xe05a,	// (0x0000e05a) keyp_game_cell_pane_ParamLimits

0xe05a,	// (0x0000e05a) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe07e,	// (0x0000e07e) keyp_game_cell_pane_g1

0xb11d,	// (0x0000b11d) popup_fep_vkb2_window_ParamLimits

0xb11d,	// (0x0000b11d) popup_fep_vkb2_window

0xe087,	// (0x0000e087) aid_size_cell_vkb2_ParamLimits

0xe087,	// (0x0000e087) aid_size_cell_vkb2

0xe0bd,	// (0x0000e0bd) popup_fep_vkb2_window_g1_ParamLimits

0xe0bd,	// (0x0000e0bd) popup_fep_vkb2_window_g1

0xe104,	// (0x0000e104) vkb2_area_bottom_pane_ParamLimits

0xe104,	// (0x0000e104) vkb2_area_bottom_pane

0xe158,	// (0x0000e158) vkb2_area_keypad_pane_ParamLimits

0xe158,	// (0x0000e158) vkb2_area_keypad_pane

0xe1a0,	// (0x0000e1a0) vkb2_area_top_pane_ParamLimits

0xe1a0,	// (0x0000e1a0) vkb2_area_top_pane

0xe226,	// (0x0000e226) vkb2_top_entry_pane_ParamLimits

0xe226,	// (0x0000e226) vkb2_top_entry_pane

0xe253,	// (0x0000e253) vkb2_top_grid_left_pane_ParamLimits

0xe253,	// (0x0000e253) vkb2_top_grid_left_pane

0xe273,	// (0x0000e273) vkb2_top_grid_right_pane_ParamLimits

0xe273,	// (0x0000e273) vkb2_top_grid_right_pane

0x8ca3,	// (0x00008ca3) vkb2_cell_keypad_pane_ParamLimits

0x8ca3,	// (0x00008ca3) vkb2_cell_keypad_pane

0xe2b9,	// (0x0000e2b9) vkb2_area_bottom_grid_pane_ParamLimits

0xe2b9,	// (0x0000e2b9) vkb2_area_bottom_grid_pane

0xe2e3,	// (0x0000e2e3) vkb2_area_bottom_pane_g1_ParamLimits

0xe2e3,	// (0x0000e2e3) vkb2_area_bottom_pane_g1

0xe309,	// (0x0000e309) vkb2_area_bottom_pane_g2_ParamLimits

0xe309,	// (0x0000e309) vkb2_area_bottom_pane_g2

0xe33a,	// (0x0000e33a) vkb2_area_bottom_pane_g3_ParamLimits

0xe33a,	// (0x0000e33a) vkb2_area_bottom_pane_g3

0x0002,

0xee56,	// (0x0000ee56) vkb2_area_bottom_pane_g_ParamLimits

0xee56,	// (0x0000ee56) vkb2_area_bottom_pane_g

0x8e4d,	// (0x00008e4d) vkb2_top_cell_left_pane_ParamLimits

0x8e4d,	// (0x00008e4d) vkb2_top_cell_left_pane

0xe3a4,	// (0x0000e3a4) vkb2_top_entry_pane_g1_ParamLimits

0xe3a4,	// (0x0000e3a4) vkb2_top_entry_pane_g1

0xe3b2,	// (0x0000e3b2) vkb2_top_entry_pane_t1_ParamLimits

0xe3b2,	// (0x0000e3b2) vkb2_top_entry_pane_t1

0x8eb5,	// (0x00008eb5) vkb2_top_entry_pane_t2_ParamLimits

0x8eb5,	// (0x00008eb5) vkb2_top_entry_pane_t2

0x8ee7,	// (0x00008ee7) vkb2_top_entry_pane_t3_ParamLimits

0x8ee7,	// (0x00008ee7) vkb2_top_entry_pane_t3

0x0002,

0xee5d,	// (0x0000ee5d) vkb2_top_entry_pane_t_ParamLimits

0xee5d,	// (0x0000ee5d) vkb2_top_entry_pane_t

0xe3eb,	// (0x0000e3eb) vkb2_top_grid_right_pane_g1_ParamLimits

0xe3eb,	// (0x0000e3eb) vkb2_top_grid_right_pane_g1

0x8f4e,	// (0x00008f4e) vkb2_top_grid_right_pane_g2_ParamLimits

0x8f4e,	// (0x00008f4e) vkb2_top_grid_right_pane_g2

0x8f66,	// (0x00008f66) vkb2_top_grid_right_pane_g3_ParamLimits

0x8f66,	// (0x00008f66) vkb2_top_grid_right_pane_g3

0xe401,	// (0x0000e401) vkb2_top_grid_right_pane_g4_ParamLimits

0xe401,	// (0x0000e401) vkb2_top_grid_right_pane_g4

0x0003,

0xee64,	// (0x0000ee64) vkb2_top_grid_right_pane_g_ParamLimits

0xee64,	// (0x0000ee64) vkb2_top_grid_right_pane_g

0x8f94,	// (0x00008f94) vkb2_top_cell_left_pane_g1

0x8fab,	// (0x00008fab) vkb2_cell_keypad_pane_g1_ParamLimits

0x8fab,	// (0x00008fab) vkb2_cell_keypad_pane_g1

0x8fb9,	// (0x00008fb9) vkb2_cell_keypad_pane_t1_ParamLimits

0x8fb9,	// (0x00008fb9) vkb2_cell_keypad_pane_t1

0x8fd0,	// (0x00008fd0) vkb2_cell_bottom_grid_pane_ParamLimits

0x8fd0,	// (0x00008fd0) vkb2_cell_bottom_grid_pane

0x9009,	// (0x00009009) vkb2_cell_bottom_grid_pane_g1

0xdd3e,	// (0x0000dd3e) aid_call2_pane_cp02

0xdd46,	// (0x0000dd46) aid_call_pane_cp02

0xdd4e,	// (0x0000dd4e) clock_digital_number_pane_cp10

0xdd56,	// (0x0000dd56) clock_digital_number_pane_cp11

0xdd5e,	// (0x0000dd5e) clock_digital_number_pane_cp12

0xdd66,	// (0x0000dd66) clock_digital_number_pane_cp13

0xdd6e,	// (0x0000dd6e) clock_digital_separator_pane_cp10

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g1

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g2

0xdd76,	// (0x0000dd76) popup_clock_digital_analogue_window_cp2_g3

0x1cf0,	// (0x00001cf0) popup_clock_digital_analogue_window_cp2_g4

0xdd76,	// (0x0000dd76) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xee31,	// (0x0000ee31) popup_clock_digital_analogue_window_cp2_g

0xdd7e,	// (0x0000dd7e) popup_clock_digital_analogue_window_cp2_t1

0xdd8c,	// (0x0000dd8c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xee3c,	// (0x0000ee3c) popup_clock_digital_analogue_window_cp2_t

0x645d,	// (0x0000645d) clock_digital_number_pane_cp10_g1

0x645d,	// (0x0000645d) clock_digital_number_pane_cp10_g2

0x0001,

0xac79,	// (0x0000ac79) clock_digital_number_pane_cp10_g

0x645d,	// (0x0000645d) clock_digital_separator_pane_cp10_g1

0x645d,	// (0x0000645d) clock_digital_separator_pane_cp10_g2

0x0001,

0xac79,	// (0x0000ac79) clock_digital_separator_pane_cp10_g

0x855c,	// (0x0000855c) uniindi_top_pane_g3

0x856d,	// (0x0000856d) uniindi_top_pane_g4

0x8d2e,	// (0x00008d2e) vkb2_row_keypad_pane_ParamLimits

0x8d2e,	// (0x00008d2e) vkb2_row_keypad_pane

0x9029,	// (0x00009029) vkb2_cell_t_keypad_pane_ParamLimits

0x9029,	// (0x00009029) vkb2_cell_t_keypad_pane

0x9039,	// (0x00009039) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x9039,	// (0x00009039) vkb2_cell_t_keypad_pane_cp08

0x904c,	// (0x0000904c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x904c,	// (0x0000904c) vkb2_cell_t_keypad_pane_cp09

0x9060,	// (0x00009060) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x9060,	// (0x00009060) vkb2_cell_t_keypad_pane_cp01

0x9071,	// (0x00009071) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x9071,	// (0x00009071) vkb2_cell_t_keypad_pane_cp02

0x9082,	// (0x00009082) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x9082,	// (0x00009082) vkb2_cell_t_keypad_pane_cp03

0x9093,	// (0x00009093) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x9093,	// (0x00009093) vkb2_cell_t_keypad_pane_cp04

0x90a4,	// (0x000090a4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x90a4,	// (0x000090a4) vkb2_cell_t_keypad_pane_cp05

0x90b5,	// (0x000090b5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x90b5,	// (0x000090b5) vkb2_cell_t_keypad_pane_cp06

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x90c6,	// (0x000090c6) vkb2_cell_t_keypad_pane_cp07

0x90d7,	// (0x000090d7) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x90d7,	// (0x000090d7) vkb2_cell_t_keypad_pane_cp10

0x690a,	// (0x0000690a) vkb2_cell_t_keypad_pane_g1

0x90ec,	// (0x000090ec) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xe417,	// (0x0000e417) aid_size_cell_graphic2_ParamLimits

0xe417,	// (0x0000e417) aid_size_cell_graphic2

0x3e45,	// (0x00003e45) bg_popup_window_pane_cp21_ParamLimits

0x3e45,	// (0x00003e45) bg_popup_window_pane_cp21

0xe449,	// (0x0000e449) graphic2_pages_pane_ParamLimits

0xe449,	// (0x0000e449) graphic2_pages_pane

0xe49f,	// (0x0000e49f) grid_graphic2_control_pane_ParamLimits

0xe49f,	// (0x0000e49f) grid_graphic2_control_pane

0xe4d3,	// (0x0000e4d3) grid_graphic2_pane_ParamLimits

0xe4d3,	// (0x0000e4d3) grid_graphic2_pane

0xe546,	// (0x0000e546) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7c86,	// (0x00007c86) list_ai3_gene_pane_ParamLimits

0xda14,	// (0x0000da14) bg_popup_window_pane_cp19_ParamLimits

0x80d8,	// (0x000080d8) bg_touch_area_indi_pane_ParamLimits

0x80d8,	// (0x000080d8) bg_touch_area_indi_pane

0x80ee,	// (0x000080ee) bg_touch_area_indi_pane_cp01_ParamLimits

0x80ee,	// (0x000080ee) bg_touch_area_indi_pane_cp01

0x8104,	// (0x00008104) bg_touch_area_indi_pane_cp02_ParamLimits

0x8104,	// (0x00008104) bg_touch_area_indi_pane_cp02

0x811c,	// (0x0000811c) bg_touch_area_indi_pane_cp03_ParamLimits

0x811c,	// (0x0000811c) bg_touch_area_indi_pane_cp03

0x8136,	// (0x00008136) popup_slider_window_g1_ParamLimits

0x8152,	// (0x00008152) popup_slider_window_g2_ParamLimits

0x816e,	// (0x0000816e) popup_slider_window_g3_ParamLimits

0xee15,	// (0x0000ee15) popup_slider_window_g_ParamLimits

0x81ca,	// (0x000081ca) popup_slider_window_t1_ParamLimits

0x823e,	// (0x0000823e) small_volume_slider_vertical_pane_ParamLimits

0xe546,	// (0x0000e546) cell_graphic2_pane_ParamLimits

0xe5a1,	// (0x0000e5a1) bg_button_pane_cp10_ParamLimits

0xe5a1,	// (0x0000e5a1) bg_button_pane_cp10

0xe5b4,	// (0x0000e5b4) bg_button_pane_cp11_ParamLimits

0xe5b4,	// (0x0000e5b4) bg_button_pane_cp11

0xe5c7,	// (0x0000e5c7) graphic2_pages_pane_g1_ParamLimits

0xe5c7,	// (0x0000e5c7) graphic2_pages_pane_g1

0xe5e2,	// (0x0000e5e2) graphic2_pages_pane_g2_ParamLimits

0xe5e2,	// (0x0000e5e2) graphic2_pages_pane_g2

0x0001,

0xee72,	// (0x0000ee72) graphic2_pages_pane_g_ParamLimits

0xee72,	// (0x0000ee72) graphic2_pages_pane_g

0xe5fa,	// (0x0000e5fa) graphic2_pages_pane_t1_ParamLimits

0xe5fa,	// (0x0000e5fa) graphic2_pages_pane_t1

0xe612,	// (0x0000e612) cell_graphic2_control_pane_ParamLimits

0xe612,	// (0x0000e612) cell_graphic2_control_pane

0xe62c,	// (0x0000e62c) cell_graphic2_pane_g1_ParamLimits

0xe62c,	// (0x0000e62c) cell_graphic2_pane_g1

0x671d,	// (0x0000671d) cell_graphic2_pane_g2_ParamLimits

0x671d,	// (0x0000671d) cell_graphic2_pane_g2

0xe639,	// (0x0000e639) cell_graphic2_pane_g3_ParamLimits

0xe639,	// (0x0000e639) cell_graphic2_pane_g3

0x672a,	// (0x0000672a) cell_graphic2_pane_g4_ParamLimits

0x672a,	// (0x0000672a) cell_graphic2_pane_g4

0xe646,	// (0x0000e646) cell_graphic2_pane_g5_ParamLimits

0xe646,	// (0x0000e646) cell_graphic2_pane_g5

0x0004,

0xee77,	// (0x0000ee77) cell_graphic2_pane_g_ParamLimits

0xee77,	// (0x0000ee77) cell_graphic2_pane_g

0xe666,	// (0x0000e666) cell_graphic2_pane_t1_ParamLimits

0xe666,	// (0x0000e666) cell_graphic2_pane_t1

0x460c,	// (0x0000460c) grid_highlight_pane_cp11_ParamLimits

0x460c,	// (0x0000460c) grid_highlight_pane_cp11

0x134f,	// (0x0000134f) bg_button_pane_cp05

0xe67d,	// (0x0000e67d) cell_graphic2_control_pane_g1

0x645d,	// (0x0000645d) bg_touch_area_indi_pane_g1

0x9348,	// (0x00009348) aid_cmod_rocker_key_size

0x9352,	// (0x00009352) aid_cmode_itu_key_size

0x935c,	// (0x0000935c) main_cmode_video_pane

0x9366,	// (0x00009366) main_comp_mode_itu_pane

0x9372,	// (0x00009372) main_comp_mode_rocker_pane

0x937e,	// (0x0000937e) cell_cmode_rocker_pane_ParamLimits

0x937e,	// (0x0000937e) cell_cmode_rocker_pane

0x9390,	// (0x00009390) cell_cmode_itu_pane_ParamLimits

0x9390,	// (0x00009390) cell_cmode_itu_pane

0x134f,	// (0x0000134f) bg_button_pane_cp06_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06

0x690a,	// (0x0000690a) cell_cmode_rocker_pane_g1_ParamLimits

0x690a,	// (0x0000690a) cell_cmode_rocker_pane_g1

0x83b8,	// (0x000083b8) cell_cmode_rocker_pane_g2_ParamLimits

0x83b8,	// (0x000083b8) cell_cmode_rocker_pane_g2

0x0001,

0xaee8,	// (0x0000aee8) cell_cmode_rocker_pane_g_ParamLimits

0xaee8,	// (0x0000aee8) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x93a5,	// (0x000093a5) cell_cmode_itu_pane_g1

0x93ae,	// (0x000093ae) cell_cmode_itu_pane_t1

0x93bc,	// (0x000093bc) cell_cmode_itu_pane_t2

0x0001,

0xaeed,	// (0x0000aeed) cell_cmode_itu_pane_t

0x85de,	// (0x000085de) aid_touch_ctrl_left

0x85e6,	// (0x000085e6) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xe68a,	// (0x0000e68a) aid_cmod_rocker_key_size_cp

0xe694,	// (0x0000e694) aid_cmode_itu_key_size_cp

0x93de,	// (0x000093de) compa_mode_pane_g1

0x93e6,	// (0x000093e6) compa_mode_pane_g2

0x93ee,	// (0x000093ee) compa_mode_pane_g3

0x0002,

0xaef2,	// (0x0000aef2) compa_mode_pane_g

0xe69e,	// (0x0000e69e) main_comp_mode_itu_pane_cp

0xe6a6,	// (0x0000e6a6) main_comp_mode_rocker_pane_cp

0xe6ae,	// (0x0000e6ae) cell_cmode_itu_pane_cp_ParamLimits

0xe6ae,	// (0x0000e6ae) cell_cmode_itu_pane_cp

0xe6c3,	// (0x0000e6c3) cell_cmode_rocker_pane_cp_ParamLimits

0xe6c3,	// (0x0000e6c3) cell_cmode_rocker_pane_cp

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp_ParamLimits

0x134f,	// (0x0000134f) bg_button_pane_cp06_cp

0x690a,	// (0x0000690a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x690a,	// (0x0000690a) cell_cmode_rocker_pane_g1_cp

0x645d,	// (0x0000645d) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xe6d5,	// (0x0000e6d5) cell_cmode_itu_pane_g1_cp

0xe6de,	// (0x0000e6de) cell_cmode_itu_pane_t1_cp

0xe6de,	// (0x0000e6de) cell_cmode_itu_pane_t2_cp

0xcf6d,	// (0x0000cf6d) settings_code_pane_cp2

0x04e9,	// (0x000004e9) bg_popup_window_pane_cp3_ParamLimits

0x09e7,	// (0x000009e7) heading_pane_cp3_ParamLimits

0x09f3,	// (0x000009f3) listscroll_popup_graphic_pane_ParamLimits

0x64db,	// (0x000064db) fep_hwr_aid_pane_ParamLimits

0x82ba,	// (0x000082ba) aid_touch_sctrl_top_ParamLimits

0x82c7,	// (0x000082c7) sctrl_sk_top_pane_g1_ParamLimits

0x690a,	// (0x0000690a) sctrl_sk_top_pane_g2_ParamLimits

0xae2d,	// (0x0000ae2d) sctrl_sk_top_pane_g_ParamLimits

0x82d4,	// (0x000082d4) sctrl_sk_top_pane_t1_ParamLimits

0x82ba,	// (0x000082ba) aid_touch_sctrl_bottom_ParamLimits

0x82d4,	// (0x000082d4) sctrl_sk_bottom_pane_t1_ParamLimits

0x8528,	// (0x00008528) aid_area_touch_clock

0xe1e8,	// (0x0000e1e8) aid_vkb2_area_top_pane_cell_ParamLimits

0xe1e8,	// (0x0000e1e8) aid_vkb2_area_top_pane_cell

0xe293,	// (0x0000e293) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe293,	// (0x0000e293) aid_vkb2_area_bottom_pane_cell

0x8e6d,	// (0x00008e6d) popup_char_count_window

0x9444,	// (0x00009444) popup_char_count_window_g1

0x944d,	// (0x0000944d) popup_char_count_window_g2

0x9456,	// (0x00009456) popup_char_count_window_g3

0x0002,

0xaef9,	// (0x0000aef9) popup_char_count_window_g

0x945f,	// (0x0000945f) popup_char_count_window_t1

0x8ad3,	// (0x00008ad3) popup_fep_char_preview_window_ParamLimits

0x8ad3,	// (0x00008ad3) popup_fep_char_preview_window

0xe208,	// (0x0000e208) vkb2_top_candi_pane_ParamLimits

0xe208,	// (0x0000e208) vkb2_top_candi_pane

0xe6ec,	// (0x0000e6ec) cell_vkb2_top_candi_pane_ParamLimits

0xe6ec,	// (0x0000e6ec) cell_vkb2_top_candi_pane

0x3e45,	// (0x00003e45) bg_popup_fep_char_preview_window_ParamLimits

0x3e45,	// (0x00003e45) bg_popup_fep_char_preview_window

0x94ba,	// (0x000094ba) popup_fep_char_preview_window_t1_ParamLimits

0x94ba,	// (0x000094ba) popup_fep_char_preview_window_t1

0x94f4,	// (0x000094f4) bg_popup_fep_char_preview_window_g1

0x94fc,	// (0x000094fc) bg_popup_fep_char_preview_window_g2

0x9504,	// (0x00009504) bg_popup_fep_char_preview_window_g3

0x950c,	// (0x0000950c) bg_popup_fep_char_preview_window_g4

0x9514,	// (0x00009514) bg_popup_fep_char_preview_window_g5

0x951c,	// (0x0000951c) bg_popup_fep_char_preview_window_g6

0x9524,	// (0x00009524) bg_popup_fep_char_preview_window_g7

0x952c,	// (0x0000952c) bg_popup_fep_char_preview_window_g8

0x9534,	// (0x00009534) bg_popup_fep_char_preview_window_g9

0x0008,

0xaf00,	// (0x0000af00) bg_popup_fep_char_preview_window_g

0x690a,	// (0x0000690a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x690a,	// (0x0000690a) cell_vkb2_top_candi_pane_g1

0x6c7d,	// (0x00006c7d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6c7d,	// (0x00006c7d) cell_vkb2_top_candi_pane_g2

0x6c9e,	// (0x00006c9e) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6c9e,	// (0x00006c9e) cell_vkb2_top_candi_pane_g3

0x953c,	// (0x0000953c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x953c,	// (0x0000953c) cell_vkb2_top_candi_pane_g4

0x955d,	// (0x0000955d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x955d,	// (0x0000955d) cell_vkb2_top_candi_pane_g5

0x83b8,	// (0x000083b8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x83b8,	// (0x000083b8) cell_vkb2_top_candi_pane_g6

0x0005,

0xaf13,	// (0x0000af13) cell_vkb2_top_candi_pane_g_ParamLimits

0xaf13,	// (0x0000af13) cell_vkb2_top_candi_pane_g

0x957e,	// (0x0000957e) cell_vkb2_top_candi_pane_t1

0x4d4e,	// (0x00004d4e) aid_size_touch_slider_mark_ParamLimits

0x4d4e,	// (0x00004d4e) aid_size_touch_slider_mark

0xe485,	// (0x0000e485) grid_graphic2_catg_pane_ParamLimits

0xe485,	// (0x0000e485) grid_graphic2_catg_pane

0xe519,	// (0x0000e519) popup_grid_graphic2_window_t1_ParamLimits

0xe519,	// (0x0000e519) popup_grid_graphic2_window_t1

0xe52f,	// (0x0000e52f) popup_grid_graphic2_window_t2_ParamLimits

0xe52f,	// (0x0000e52f) popup_grid_graphic2_window_t2

0x0001,

0xee6d,	// (0x0000ee6d) popup_grid_graphic2_window_t_ParamLimits

0xee6d,	// (0x0000ee6d) popup_grid_graphic2_window_t

0x134f,	// (0x0000134f) bg_button_pane_cp05_ParamLimits

0xe67d,	// (0x0000e67d) cell_graphic2_control_pane_g1_ParamLimits

0xe752,	// (0x0000e752) cell_graphic2_catg_pane_ParamLimits

0xe752,	// (0x0000e752) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xe764,	// (0x0000e764) cell_graphic2_catg_pane_g1

0x84f4,	// (0x000084f4) cell_tb_ext_pane_t1_ParamLimits

0x8f0b,	// (0x00008f0b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8f0b,	// (0x00008f0b) vkb2_top_cell_right_narrow_pane

0x8f23,	// (0x00008f23) vkb2_top_cell_right_wide_pane_ParamLimits

0x8f23,	// (0x00008f23) vkb2_top_cell_right_wide_pane

0x64cd,	// (0x000064cd) bg_vkb2_func_pane_ParamLimits

0x64cd,	// (0x000064cd) bg_vkb2_func_pane

0x8f94,	// (0x00008f94) vkb2_top_cell_left_pane_g1_ParamLimits

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp03

0x9009,	// (0x00009009) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3629,	// (0x00003629) bg_vkb2_func_pane_g1

0x3631,	// (0x00003631) bg_vkb2_func_pane_g2

0x3641,	// (0x00003641) bg_vkb2_func_pane_g3

0x3639,	// (0x00003639) bg_vkb2_func_pane_g4

0x3649,	// (0x00003649) bg_vkb2_func_pane_g5

0x3651,	// (0x00003651) bg_vkb2_func_pane_g6

0x3659,	// (0x00003659) bg_vkb2_func_pane_g7

0x3661,	// (0x00003661) bg_vkb2_func_pane_g8

0x3621,	// (0x00003621) bg_vkb2_func_pane_g9

0x0008,

0xaf20,	// (0x0000af20) bg_vkb2_func_pane_g

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp01

0x8f94,	// (0x00008f94) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8f94,	// (0x00008f94) vkb2_top_cell_right_wide_pane_g1

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64cd,	// (0x000064cd) bg_vkb2_fuc_pane_cp02

0x9009,	// (0x00009009) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9009,	// (0x00009009) vkb2_top_cell_right_narrow_pane_g1

0xd94e,	// (0x0000d94e) aid_touch_area_decrease_ParamLimits

0xd94e,	// (0x0000d94e) aid_touch_area_decrease

0xd988,	// (0x0000d988) aid_touch_area_increase_ParamLimits

0xd988,	// (0x0000d988) aid_touch_area_increase

0xd9b0,	// (0x0000d9b0) aid_touch_area_mute_ParamLimits

0xd9b0,	// (0x0000d9b0) aid_touch_area_mute

0xd9e0,	// (0x0000d9e0) aid_touch_area_slider_ParamLimits

0xd9e0,	// (0x0000d9e0) aid_touch_area_slider

0xda20,	// (0x0000da20) popup_slider_window_g4_ParamLimits

0xda20,	// (0x0000da20) popup_slider_window_g4

0xda48,	// (0x0000da48) popup_slider_window_g5_ParamLimits

0xda48,	// (0x0000da48) popup_slider_window_g5

0xda7c,	// (0x0000da7c) popup_slider_window_g6_ParamLimits

0xda7c,	// (0x0000da7c) popup_slider_window_g6

0x81f8,	// (0x000081f8) popup_slider_window_t2_ParamLimits

0x81f8,	// (0x000081f8) popup_slider_window_t2

0x0001,

0xae21,	// (0x0000ae21) popup_slider_window_t_ParamLimits

0xae21,	// (0x0000ae21) popup_slider_window_t

0xda98,	// (0x0000da98) slider_pane_ParamLimits

0xda98,	// (0x0000da98) slider_pane

0x95b8,	// (0x000095b8) slider_pane_g1_ParamLimits

0x95b8,	// (0x000095b8) slider_pane_g1

0x95cc,	// (0x000095cc) slider_pane_g2_ParamLimits

0x95cc,	// (0x000095cc) slider_pane_g2

0x95e2,	// (0x000095e2) slider_pane_g3_ParamLimits

0x95e2,	// (0x000095e2) slider_pane_g3

0x0003,

0xaf33,	// (0x0000af33) slider_pane_g_ParamLimits

0xaf33,	// (0x0000af33) slider_pane_g

0xc50c,	// (0x0000c50c) popup_tb_float_extension_window_ParamLimits

0xc50c,	// (0x0000c50c) popup_tb_float_extension_window

0x960e,	// (0x0000960e) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x961a,	// (0x0000961a) grid_tb_float_ext_pane

0x9624,	// (0x00009624) cell_tb_float_ext_pane_ParamLimits

0x9624,	// (0x00009624) cell_tb_float_ext_pane

0x963e,	// (0x0000963e) cell_tb_float_ext_pane_g1

0x9647,	// (0x00009647) grid_highlight_pane_cp12

0xd345,	// (0x0000d345) cell_last_hwr_side_pane_ParamLimits

0xd345,	// (0x0000d345) cell_last_hwr_side_pane

0x645d,	// (0x0000645d) cell_last_hwr_side_pane_g1

0x9650,	// (0x00009650) cell_last_hwr_side_pane_g2

0x0001,

0xaf3c,	// (0x0000af3c) cell_last_hwr_side_pane_g

0xe36f,	// (0x0000e36f) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe36f,	// (0x0000e36f) vkb2_area_bottom_space_btn_pane

0x690a,	// (0x0000690a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x90ec,	// (0x000090ec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x957e,	// (0x0000957e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9659,	// (0x00009659) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9659,	// (0x00009659) vkb2_area_bottom_space_btn_pane_g1

0x9693,	// (0x00009693) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x9693,	// (0x00009693) vkb2_area_bottom_space_btn_pane_g2

0x96c9,	// (0x000096c9) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x96c9,	// (0x000096c9) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xaf41,	// (0x0000af41) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xaf41,	// (0x0000af41) vkb2_area_bottom_space_btn_pane_g

0x6590,	// (0x00006590) cel_fep_hwr_func_pane_ParamLimits

0x6590,	// (0x00006590) cel_fep_hwr_func_pane

0xd31a,	// (0x0000d31a) cell_hwr_side_button_pane_ParamLimits

0xd31a,	// (0x0000d31a) cell_hwr_side_button_pane

0x8528,	// (0x00008528) aid_area_touch_clock_ParamLimits

0x0819,	// (0x00000819) bg_uniindi_top_pane_ParamLimits

0x853a,	// (0x0000853a) uniindi_top_pane_g1_ParamLimits

0x8550,	// (0x00008550) uniindi_top_pane_g2_ParamLimits

0x855c,	// (0x0000855c) uniindi_top_pane_g3_ParamLimits

0x856d,	// (0x0000856d) uniindi_top_pane_g4_ParamLimits

0xae59,	// (0x0000ae59) uniindi_top_pane_g_ParamLimits

0x857a,	// (0x0000857a) uniindi_top_pane_t1_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp01

0x9713,	// (0x00009713) cel_fep_hwr_func_pane_g1_ParamLimits

0x9713,	// (0x00009713) cel_fep_hwr_func_pane_g1

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02_ParamLimits

0x0819,	// (0x00000819) bg_vkb2_func_pane_cp02

0x9713,	// (0x00009713) cell_hwr_side_button_pane_g1_ParamLimits

0x9713,	// (0x00009713) cell_hwr_side_button_pane_g1

0x340a,	// (0x0000340a) status_pane_g4_ParamLimits

0x340a,	// (0x0000340a) status_pane_g4

0x3422,	// (0x00003422) status_pane_t1

0x615f,	// (0x0000615f) form2_midp_gauge_slider_cont_pane

0x6167,	// (0x00006167) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd259,	// (0x0000d259) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd26b,	// (0x0000d26b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xedbe,	// (0x0000edbe) form2_midp_gauge_slider_pane_t_ParamLimits

0x619d,	// (0x0000619d) form2_midp_slider_pane_ParamLimits

0x8a93,	// (0x00008a93) aid_size_cell_func_vkb2_ParamLimits

0x8a93,	// (0x00008a93) aid_size_cell_func_vkb2

0x95fa,	// (0x000095fa) slider_pane_g4_ParamLimits

0x95fa,	// (0x000095fa) slider_pane_g4

0xe76d,	// (0x0000e76d) form2_midp_gauge_slider_pane_t2_cp01

0xe77b,	// (0x0000e77b) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe77b,	// (0x0000e77b) form2_midp_gauge_slider_pane_t3_cp01

0x974c,	// (0x0000974c) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9780,	// (0x00009780) navi_smil_pane_g1

0x9788,	// (0x00009788) navi_smil_pane_t1

0x9755,	// (0x00009755) form2_midp_slider_pane_g1

0x975e,	// (0x0000975e) form2_midp_slider_pane_g2

0x9766,	// (0x00009766) form2_midp_slider_pane_g3

0x9755,	// (0x00009755) form2_midp_slider_pane_g4

0xe798,	// (0x0000e798) form2_midp_slider_pane_g5

0x0004,

0xee82,	// (0x0000ee82) form2_midp_slider_pane_g

0x9703,	// (0x00009703) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x9703,	// (0x00009703) vkb2_area_bottom_space_btn_pane_g4

0xc6e8,	// (0x0000c6e8) lc0_navi_pane_ParamLimits

0xc6e8,	// (0x0000c6e8) lc0_navi_pane

0xc752,	// (0x0000c752) lc0_stat_indi_pane_ParamLimits

0xc752,	// (0x0000c752) lc0_stat_indi_pane

0xc767,	// (0x0000c767) ls0_title_pane_ParamLimits

0xc767,	// (0x0000c767) ls0_title_pane

0x134f,	// (0x0000134f) bg_popup_sub_pane_cp14_ParamLimits

0x850f,	// (0x0000850f) list_uniindi_pane_ParamLimits

0x851b,	// (0x0000851b) uniindi_top_pane_ParamLimits

0x85b6,	// (0x000085b6) list_single_uniindi_pane_g1_ParamLimits

0x85c9,	// (0x000085c9) list_single_uniindi_pane_t1_ParamLimits

0xe7a1,	// (0x0000e7a1) lc0_stat_clock_pane_ParamLimits

0xe7a1,	// (0x0000e7a1) lc0_stat_clock_pane

0xe7ae,	// (0x0000e7ae) lc0_stat_indi_pane_g1_ParamLimits

0xe7ae,	// (0x0000e7ae) lc0_stat_indi_pane_g1

0xe7bb,	// (0x0000e7bb) lc0_stat_indi_pane_g2_ParamLimits

0xe7bb,	// (0x0000e7bb) lc0_stat_indi_pane_g2

0x0001,

0xee8d,	// (0x0000ee8d) lc0_stat_indi_pane_g_ParamLimits

0xee8d,	// (0x0000ee8d) lc0_stat_indi_pane_g

0xe7c8,	// (0x0000e7c8) lc0_uni_indicator_pane_ParamLimits

0xe7c8,	// (0x0000e7c8) lc0_uni_indicator_pane

0xe7d5,	// (0x0000e7d5) ls0_title_pane_g1_ParamLimits

0xe7d5,	// (0x0000e7d5) ls0_title_pane_g1

0xe7e9,	// (0x0000e7e9) ls0_title_pane_t1_ParamLimits

0xe7e9,	// (0x0000e7e9) ls0_title_pane_t1

0xe817,	// (0x0000e817) lc0_uni_indicator_pane_g1_ParamLimits

0xe817,	// (0x0000e817) lc0_uni_indicator_pane_g1

0x982a,	// (0x0000982a) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9838,	// (0x00009838) ai5_sk_pane_ParamLimits

0x9838,	// (0x00009838) ai5_sk_pane

0xe846,	// (0x0000e846) cell_ai5_widget_pane_ParamLimits

0xe846,	// (0x0000e846) cell_ai5_widget_pane

0x98d3,	// (0x000098d3) aid_size_cell_widget_grid

0x98e7,	// (0x000098e7) bg_ai5_widget_pane_ParamLimits

0x98e7,	// (0x000098e7) bg_ai5_widget_pane

0xe8cf,	// (0x0000e8cf) cell_ai5_widget_pane_g2

0xe8df,	// (0x0000e8df) cell_ai5_widget_pane_g3

0xe8f3,	// (0x0000e8f3) cell_ai5_widget_pane_g4

0xe8ff,	// (0x0000e8ff) cell_ai5_widget_pane_g5

0xe90b,	// (0x0000e90b) cell_ai5_widget_pane_g6

0xe917,	// (0x0000e917) cell_ai5_widget_pane_g7

0xe95f,	// (0x0000e95f) cell_ai5_widget_pane_t1_ParamLimits

0xe95f,	// (0x0000e95f) cell_ai5_widget_pane_t1

0xe97c,	// (0x0000e97c) cell_ai5_widget_pane_t2_ParamLimits

0xe97c,	// (0x0000e97c) cell_ai5_widget_pane_t2

0xe994,	// (0x0000e994) cell_ai5_widget_pane_t3_ParamLimits

0xe994,	// (0x0000e994) cell_ai5_widget_pane_t3

0xe9ac,	// (0x0000e9ac) cell_ai5_widget_pane_t4_ParamLimits

0xe9ac,	// (0x0000e9ac) cell_ai5_widget_pane_t4

0xe9c6,	// (0x0000e9c6) cell_ai5_widget_pane_t5_ParamLimits

0xe9c6,	// (0x0000e9c6) cell_ai5_widget_pane_t5

0x9a25,	// (0x00009a25) cell_ai5_widget_pane_t6_ParamLimits

0x9a25,	// (0x00009a25) cell_ai5_widget_pane_t6

0x9a37,	// (0x00009a37) cell_ai5_widget_pane_t7_ParamLimits

0x9a37,	// (0x00009a37) cell_ai5_widget_pane_t7

0xe9e5,	// (0x0000e9e5) cell_ai5_widget_pane_t8_ParamLimits

0xe9e5,	// (0x0000e9e5) cell_ai5_widget_pane_t8

0x0009,

0xeea7,	// (0x0000eea7) cell_ai5_widget_pane_t_ParamLimits

0xeea7,	// (0x0000eea7) cell_ai5_widget_pane_t

0xea2d,	// (0x0000ea2d) grid_ai5_widget_pane

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_ai5_widget_pane

0xea43,	// (0x0000ea43) ai5_sk_left_pane

0xea4d,	// (0x0000ea4d) ai5_sk_middle_pane

0xea57,	// (0x0000ea57) ai5_sk_right_pane

0x9acc,	// (0x00009acc) bg_ai5_widget_pane_g1_ParamLimits

0x9acc,	// (0x00009acc) bg_ai5_widget_pane_g1

0x9ad8,	// (0x00009ad8) bg_ai5_widget_pane_g2_ParamLimits

0x9ad8,	// (0x00009ad8) bg_ai5_widget_pane_g2

0x9ae4,	// (0x00009ae4) bg_ai5_widget_pane_g3_ParamLimits

0x9ae4,	// (0x00009ae4) bg_ai5_widget_pane_g3

0x9af0,	// (0x00009af0) bg_ai5_widget_pane_g4_ParamLimits

0x9af0,	// (0x00009af0) bg_ai5_widget_pane_g4

0x9afc,	// (0x00009afc) bg_ai5_widget_pane_g5_ParamLimits

0x9afc,	// (0x00009afc) bg_ai5_widget_pane_g5

0x9b08,	// (0x00009b08) bg_ai5_widget_pane_g6_ParamLimits

0x9b08,	// (0x00009b08) bg_ai5_widget_pane_g6

0x9b14,	// (0x00009b14) bg_ai5_widget_pane_g7_ParamLimits

0x9b14,	// (0x00009b14) bg_ai5_widget_pane_g7

0x9b20,	// (0x00009b20) bg_ai5_widget_pane_g8_ParamLimits

0x9b20,	// (0x00009b20) bg_ai5_widget_pane_g8

0x9b2c,	// (0x00009b2c) bg_ai5_widget_pane_g9_ParamLimits

0x9b2c,	// (0x00009b2c) bg_ai5_widget_pane_g9

0x0008,

0xaf84,	// (0x0000af84) bg_ai5_widget_pane_g_ParamLimits

0xaf84,	// (0x0000af84) bg_ai5_widget_pane_g

0x9b5f,	// (0x00009b5f) cell_shortcut_ai5_widget_pane_ParamLimits

0x9b5f,	// (0x00009b5f) cell_shortcut_ai5_widget_pane

0x0659,	// (0x00000659) bg_cell_shortcut_ai5_widget_pane

0x9b70,	// (0x00009b70) cell_grid_ai5_widget_pane_g1

0x9b79,	// (0x00009b79) highlight_cell_shortcut_ai5_widget_pane

0x3631,	// (0x00003631) ai5_sk_left_pane_g1

0x9b81,	// (0x00009b81) ai5_sk_left_pane_g2

0x9b89,	// (0x00009b89) ai5_sk_left_pane_g3

0x9b91,	// (0x00009b91) ai5_sk_left_pane_g4

0x0003,

0xaf97,	// (0x0000af97) ai5_sk_left_pane_g

0x9b99,	// (0x00009b99) ai5_sk_left_pane_t1

0x3629,	// (0x00003629) ai5_sk_right_pane_g1

0x9ba7,	// (0x00009ba7) ai5_sk_right_pane_g2

0x9baf,	// (0x00009baf) ai5_sk_right_pane_g3

0x9bb7,	// (0x00009bb7) ai5_sk_right_pane_g4

0x0003,

0xafa0,	// (0x0000afa0) ai5_sk_right_pane_g

0x9bbf,	// (0x00009bbf) ai5_sk_right_pane_t1

0x3629,	// (0x00003629) ai5_sk_middle_pane_g1

0x3631,	// (0x00003631) ai5_sk_middle_pane_g2

0x3649,	// (0x00003649) ai5_sk_middle_pane_g3

0x9baf,	// (0x00009baf) ai5_sk_middle_pane_g4

0x9b89,	// (0x00009b89) ai5_sk_middle_pane_g5

0x9bcd,	// (0x00009bcd) ai5_sk_middle_pane_g6

0xea61,	// (0x0000ea61) ai5_sk_middle_pane_g7

0x0006,

0xeebc,	// (0x0000eebc) ai5_sk_middle_pane_g

0xc5d4,	// (0x0000c5d4) aid_touch_area_size_lc0_ParamLimits

0xc5d4,	// (0x0000c5d4) aid_touch_area_size_lc0

0x6cbf,	// (0x00006cbf) cell_hwr_candidate_pane_t1_ParamLimits

0x30e8,	// (0x000030e8) aid_touch_navi_pane

0xc859,	// (0x0000c859) status_dt_navi_pane_ParamLimits

0xc859,	// (0x0000c859) status_dt_navi_pane

0xc871,	// (0x0000c871) status_dt_sta_pane_ParamLimits

0xc871,	// (0x0000c871) status_dt_sta_pane

0xea69,	// (0x0000ea69) dt_sta_controll_pane

0xea76,	// (0x0000ea76) dt_sta_indi_pane

0xea83,	// (0x0000ea83) dt_sta_title_pane

0x0819,	// (0x00000819) bg_dt_sta_indi_pane_ParamLimits

0x0819,	// (0x00000819) bg_dt_sta_indi_pane

0xea95,	// (0x0000ea95) dt_sta_battery_pane

0xea9d,	// (0x0000ea9d) dt_sta_indi_pane_g1

0x9c1f,	// (0x00009c1f) dt_sta_indi_pane_g2

0x9c28,	// (0x00009c28) dt_sta_indi_pane_g3

0x0002,

0xeecb,	// (0x0000eecb) dt_sta_indi_pane_g

0x9c31,	// (0x00009c31) dt_sta_signal_pane

0x134f,	// (0x0000134f) bg_dt_sta_title_pane_ParamLimits

0x134f,	// (0x0000134f) bg_dt_sta_title_pane

0x477d,	// (0x0000477d) dt_sta_title_pane_g1

0xeaa6,	// (0x0000eaa6) dt_sta_title_pane_t1_ParamLimits

0xeaa6,	// (0x0000eaa6) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xeabb,	// (0x0000eabb) dt_sta_controll_pane_g1

0x9c58,	// (0x00009c58) bg_dt_sta_title_pane_g1

0x9c61,	// (0x00009c61) bg_dt_sta_title_pane_g2

0x9c6a,	// (0x00009c6a) bg_dt_sta_title_pane_g3

0x0002,

0xafbf,	// (0x0000afbf) bg_dt_sta_title_pane_g

0x645d,	// (0x0000645d) bg_dt_sta_indi_pane_g1

0x9c73,	// (0x00009c73) dt_sta_signal_pane_g1

0x9c7b,	// (0x00009c7b) dt_sta_signal_pane_g2

0x0001,

0xafc6,	// (0x0000afc6) dt_sta_signal_pane_g

0x9c83,	// (0x00009c83) dt_sta_battery_pane_g1

0x9c8c,	// (0x00009c8c) dt_sta_battery_pane_t1

0x645d,	// (0x0000645d) bg_dt_sta_control_pane_g1

0x1eaa,	// (0x00001eaa) fep_china_uni_eep_pane

0x1eb2,	// (0x00001eb2) fep_china_uni_entry_pane_ParamLimits

0x1ec2,	// (0x00001ec2) popup_fep_china_uni_window_g1_ParamLimits

0x1ed2,	// (0x00001ed2) popup_fep_china_uni_window_g2_ParamLimits

0x1ed2,	// (0x00001ed2) popup_fep_china_uni_window_g2

0x0001,

0xa86f,	// (0x0000a86f) popup_fep_china_uni_window_g_ParamLimits

0xa86f,	// (0x0000a86f) popup_fep_china_uni_window_g

0x9c9b,	// (0x00009c9b) fep_china_uni_eep_pane_g1

0x9ca3,	// (0x00009ca3) fep_china_uni_eep_pane_t1

0x9777,	// (0x00009777) aid_touch_area_size_smil_player

0x3238,	// (0x00003238) lc0_clock_pane

0x3416,	// (0x00003416) status_pane_g5_ParamLimits

0x3416,	// (0x00003416) status_pane_g5

0xc0a0,	// (0x0000c0a0) popup_keymap_window

0x33d6,	// (0x000033d6) status_icon_pane

0xe8df,	// (0x0000e8df) cell_ai5_widget_pane_g3_ParamLimits

0xe8f3,	// (0x0000e8f3) cell_ai5_widget_pane_g4_ParamLimits

0xe8ff,	// (0x0000e8ff) cell_ai5_widget_pane_g5_ParamLimits

0xe923,	// (0x0000e923) cell_ai5_widget_pane_g8_ParamLimits

0xe923,	// (0x0000e923) cell_ai5_widget_pane_g8

0xe937,	// (0x0000e937) cell_ai5_widget_pane_g9_ParamLimits

0xe937,	// (0x0000e937) cell_ai5_widget_pane_g9

0xe94b,	// (0x0000e94b) cell_ai5_widget_pane_g10_ParamLimits

0xe94b,	// (0x0000e94b) cell_ai5_widget_pane_g10

0x9cb2,	// (0x00009cb2) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0x9cba,	// (0x00009cba) popup_keymap_window_t1

0xbdb8,	// (0x0000bdb8) control_pane_g6_ParamLimits

0xbdb8,	// (0x0000bdb8) control_pane_g6

0xbdc5,	// (0x0000bdc5) control_pane_g7_ParamLimits

0xbdc5,	// (0x0000bdc5) control_pane_g7

0xbdd2,	// (0x0000bdd2) control_pane_g8_ParamLimits

0xbdd2,	// (0x0000bdd2) control_pane_g8

0xea69,	// (0x0000ea69) dt_sta_controll_pane_ParamLimits

0xea76,	// (0x0000ea76) dt_sta_indi_pane_ParamLimits

0xea83,	// (0x0000ea83) dt_sta_title_pane_ParamLimits

0x0d1b,	// (0x00000d1b) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb163,	// (0x0000b163) popup_sk_window

0x3e45,	// (0x00003e45) bg_popup_sub_pane_cp28_ParamLimits

0x3e45,	// (0x00003e45) bg_popup_sub_pane_cp28

0x9cc8,	// (0x00009cc8) popup_discreet_window_g1_ParamLimits

0x9cc8,	// (0x00009cc8) popup_discreet_window_g1

0x9ce8,	// (0x00009ce8) popup_discreet_window_t1_ParamLimits

0x9ce8,	// (0x00009ce8) popup_discreet_window_t1

0x9d06,	// (0x00009d06) popup_discreet_window_t2_ParamLimits

0x9d06,	// (0x00009d06) popup_discreet_window_t2

0x0002,

0xafcb,	// (0x0000afcb) popup_discreet_window_t_ParamLimits

0xafcb,	// (0x0000afcb) popup_discreet_window_t

0x9d58,	// (0x00009d58) popup_sk_window_g1

0x9d62,	// (0x00009d62) popup_sk_window_g2

0x0001,

0xafd2,	// (0x0000afd2) popup_sk_window_g

0x9d6c,	// (0x00009d6c) popup_sk_window_t1

0x9d7a,	// (0x00009d7a) popup_sk_window_t1_copy1

0xe8cf,	// (0x0000e8cf) cell_ai5_widget_pane_g2_ParamLimits

0xe9f7,	// (0x0000e9f7) cell_ai5_widget_pane_t9_ParamLimits

0xe9f7,	// (0x0000e9f7) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xeac4,	// (0x0000eac4) aid_fshwr2_btn_pane

0xeacc,	// (0x0000eacc) aid_fshwr2_syb_pane

0xead4,	// (0x0000ead4) aid_fshwr2_txt_pane

0xeadc,	// (0x0000eadc) fshwr2_func_candi_pane

0xeae6,	// (0x0000eae6) fshwr2_hwr_syb_pane

0xeaf4,	// (0x0000eaf4) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xeafe,	// (0x0000eafe) fshwr2_icf_pane_t1_ParamLimits

0xeafe,	// (0x0000eafe) fshwr2_icf_pane_t1

0x645d,	// (0x0000645d) fshwr2_func_candi_pane_g1

0x9ded,	// (0x00009ded) fshwr2_func_candi_row_pane_ParamLimits

0x9ded,	// (0x00009ded) fshwr2_func_candi_row_pane

0xeb18,	// (0x0000eb18) cell_fshwr2_syb_pane_ParamLimits

0xeb18,	// (0x0000eb18) cell_fshwr2_syb_pane

0x690a,	// (0x0000690a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x690a,	// (0x0000690a) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0x9e1a,	// (0x00009e1a) fshwr2_func_candi_cell_pane_ParamLimits

0x9e1a,	// (0x00009e1a) fshwr2_func_candi_cell_pane

0x9e4b,	// (0x00009e4b) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e4b,	// (0x00009e4b) fshwr2_func_candi_cell_bg_pane

0x9e65,	// (0x00009e65) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9e65,	// (0x00009e65) fshwr2_func_candi_cell_pane_g1

0x9e85,	// (0x00009e85) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e85,	// (0x00009e85) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0x2575,	// (0x00002575) cell_fshwr2_syb_bg_pane

0xeb32,	// (0x0000eb32) cell_fshwr2_syb_bg_pane_g1

0x9ea0,	// (0x00009ea0) cell_fshwr2_syb_bg_pane_t1

0x134f,	// (0x0000134f) main_tmo_pane

0xcd8c,	// (0x0000cd8c) uni_indicator_pane_g1_ParamLimits

0xcda1,	// (0x0000cda1) uni_indicator_pane_g2_ParamLimits

0xcdb6,	// (0x0000cdb6) uni_indicator_pane_g3_ParamLimits

0x4b01,	// (0x00004b01) uni_indicator_pane_g4_ParamLimits

0x4b01,	// (0x00004b01) uni_indicator_pane_g4

0x4b15,	// (0x00004b15) uni_indicator_pane_g5_ParamLimits

0x4b15,	// (0x00004b15) uni_indicator_pane_g5

0x4b29,	// (0x00004b29) uni_indicator_pane_g6_ParamLimits

0x4b29,	// (0x00004b29) uni_indicator_pane_g6

0xed6a,	// (0x0000ed6a) uni_indicator_pane_g_ParamLimits

0xd930,	// (0x0000d930) popup_tmo_note_window_ParamLimits

0xd930,	// (0x0000d930) popup_tmo_note_window

0x0024,	// (0x00000024) fshwr2_bg_pane

0x9e76,	// (0x00009e76) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e76,	// (0x00009e76) fshwr2_func_candi_cell_pane_g2

0x0001,

0xafd7,	// (0x0000afd7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xafd7,	// (0x0000afd7) fshwr2_func_candi_cell_pane_g

0x645d,	// (0x0000645d) bg_popup_window_pane_cp01

0x9eaf,	// (0x00009eaf) bg_popup_window_pane_g1_cp01

0x9eb8,	// (0x00009eb8) bg_popup_window_pane_cp22_ParamLimits

0x9eb8,	// (0x00009eb8) bg_popup_window_pane_cp22

0x9ec6,	// (0x00009ec6) listscroll_tmo_link_pane_ParamLimits

0x9ec6,	// (0x00009ec6) listscroll_tmo_link_pane

0x9f06,	// (0x00009f06) popup_tmo_note_window_g1_ParamLimits

0x9f06,	// (0x00009f06) popup_tmo_note_window_g1

0x9f13,	// (0x00009f13) tmo_note_info_pane_ParamLimits

0x9f13,	// (0x00009f13) tmo_note_info_pane

0xeb3a,	// (0x0000eb3a) list_tmo_note_info_pane_g1_ParamLimits

0xeb3a,	// (0x0000eb3a) list_tmo_note_info_pane_g1

0x9f44,	// (0x00009f44) list_tmo_note_info_pane_g2_ParamLimits

0x9f44,	// (0x00009f44) list_tmo_note_info_pane_g2

0x0001,

0xeed2,	// (0x0000eed2) list_tmo_note_info_pane_g_ParamLimits

0xeed2,	// (0x0000eed2) list_tmo_note_info_pane_g

0x9f60,	// (0x00009f60) list_tmo_note_info_text_pane_ParamLimits

0x9f60,	// (0x00009f60) list_tmo_note_info_text_pane

0x9fe5,	// (0x00009fe5) list_tmo_link_pane

0x9ff2,	// (0x00009ff2) scroll_pane_cp20

0x9fff,	// (0x00009fff) list_single_tmo_link_pane_ParamLimits

0x9fff,	// (0x00009fff) list_single_tmo_link_pane

0xa00f,	// (0x0000a00f) list_single_tmo_link_pane_t1

0xa01d,	// (0x0000a01d) list_tmo_note_info_text_pane_t1_ParamLimits

0xa01d,	// (0x0000a01d) list_tmo_note_info_text_pane_t1

0xba0b,	// (0x0000ba0b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xba0b,	// (0x0000ba0b) aid_size_touch_scroll_bar_cp01

0xb926,	// (0x0000b926) aid_size_touch_slider_marker

0xb153,	// (0x0000b153) popup_settings_window_ParamLimits

0xb153,	// (0x0000b153) popup_settings_window

0x2b1f,	// (0x00002b1f) popup_candi_list_indi_window

0x30e8,	// (0x000030e8) aid_touch_navi_pane_ParamLimits

0x828e,	// (0x0000828e) rs_clock_indi_pane

0x8297,	// (0x00008297) sctrl_sk_bottom_pane_ParamLimits

0x82a8,	// (0x000082a8) sctrl_sk_top_pane_ParamLimits

0x8aed,	// (0x00008aed) popup_fep_tooltip_window

0x98d3,	// (0x000098d3) aid_size_cell_widget_grid_ParamLimits

0xe8c3,	// (0x0000e8c3) cell_ai5_widget_pane_g1_ParamLimits

0xe8c3,	// (0x0000e8c3) cell_ai5_widget_pane_g1

0xe90b,	// (0x0000e90b) cell_ai5_widget_pane_g6_ParamLimits

0xe917,	// (0x0000e917) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xee92,	// (0x0000ee92) cell_ai5_widget_pane_g_ParamLimits

0xee92,	// (0x0000ee92) cell_ai5_widget_pane_g

0xea1b,	// (0x0000ea1b) cell_ai5_widget_pane_t10_ParamLimits

0xea1b,	// (0x0000ea1b) cell_ai5_widget_pane_t10

0xea2d,	// (0x0000ea2d) grid_ai5_widget_pane_ParamLimits

0x9b38,	// (0x00009b38) cell_contacts_ai5_widget_pane_ParamLimits

0x9b38,	// (0x00009b38) cell_contacts_ai5_widget_pane

0x9d1b,	// (0x00009d1b) popup_discreet_window_t3_ParamLimits

0x9d1b,	// (0x00009d1b) popup_discreet_window_t3

0x9dc2,	// (0x00009dc2) popup_fshwr2_char_preview_window_ParamLimits

0x9dc2,	// (0x00009dc2) popup_fshwr2_char_preview_window

0xeb51,	// (0x0000eb51) tmo_note_info_pane_t1

0xeb66,	// (0x0000eb66) tmo_note_info_pane_t2

0xeb7f,	// (0x0000eb7f) tmo_note_info_pane_t3

0x9fc1,	// (0x00009fc1) tmo_note_info_pane_t4

0x9fd3,	// (0x00009fd3) tmo_note_info_pane_t5

0x0004,

0xeed7,	// (0x0000eed7) tmo_note_info_pane_t

0x9fe5,	// (0x00009fe5) list_tmo_link_pane_ParamLimits

0x9ff2,	// (0x00009ff2) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa036,	// (0x0000a036) popup_fshwr2_char_preview_window_t1

0xa044,	// (0x0000a044) popup_candi_list_indi_window_g1

0xa04d,	// (0x0000a04d) bg_cell_contacts_ai5_widget_pane

0xa059,	// (0x0000a059) cell_contacts_ai5_widget_pane_g1

0xa06d,	// (0x0000a06d) cell_contacts_ai5_widget_pane_g2

0xa07c,	// (0x0000a07c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xafec,	// (0x0000afec) cell_contacts_ai5_widget_pane_g

0xa08f,	// (0x0000a08f) cell_contacts_ai5_widget_pane_t1

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa109,	// (0x0000a109) settings_container_pane

0x2575,	// (0x00002575) listscroll_set_pane_copy1

0x58f9,	// (0x000058f9) scroll_pane_cp121_copy1

0xa115,	// (0x0000a115) set_content_pane_copy1

0xa11d,	// (0x0000a11d) aid_height_set_list_copy1_ParamLimits

0xa11d,	// (0x0000a11d) aid_height_set_list_copy1

0x4e0c,	// (0x00004e0c) aid_size_parent_copy1_ParamLimits

0x4e0c,	// (0x00004e0c) aid_size_parent_copy1

0xa129,	// (0x0000a129) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa129,	// (0x0000a129) button_value_adjust_pane_cp6_copy1

0x2af7,	// (0x00002af7) list_highlight_pane_cp2_copy1_ParamLimits

0x2af7,	// (0x00002af7) list_highlight_pane_cp2_copy1

0xa13d,	// (0x0000a13d) list_set_pane_copy1_ParamLimits

0xa13d,	// (0x0000a13d) list_set_pane_copy1

0xa0a4,	// (0x0000a0a4) main_pane_set_t1_copy1_ParamLimits

0xa0a4,	// (0x0000a0a4) main_pane_set_t1_copy1

0xa0de,	// (0x0000a0de) main_pane_set_t2_copy1_ParamLimits

0xa0de,	// (0x0000a0de) main_pane_set_t2_copy1

0xa1ea,	// (0x0000a1ea) main_pane_set_t3_copy1

0xa1f8,	// (0x0000a1f8) main_pane_set_t4_copy1

0xa0fd,	// (0x0000a0fd) set_content_pane_g1_copy1_ParamLimits

0xa0fd,	// (0x0000a0fd) set_content_pane_g1_copy1

0xa206,	// (0x0000a206) setting_code_pane_copy1

0xa210,	// (0x0000a210) setting_slider_graphic_pane_copy1

0xa210,	// (0x0000a210) setting_slider_pane_copy1

0xa21a,	// (0x0000a21a) setting_text_pane_copy1

0xa224,	// (0x0000a224) setting_volume_pane_copy1

0xa22d,	// (0x0000a22d) settings_code_pane_cp2_copy1

0xa235,	// (0x0000a235) settings_code_pane_cp_copy1_ParamLimits

0xa235,	// (0x0000a235) settings_code_pane_cp_copy1

0xa249,	// (0x0000a249) volume_set_pane_copy1

0xa251,	// (0x0000a251) volume_set_pane_g10_copy1

0xa259,	// (0x0000a259) volume_set_pane_g1_copy1

0xa261,	// (0x0000a261) volume_set_pane_g2_copy1

0xa269,	// (0x0000a269) volume_set_pane_g3_copy1

0xa271,	// (0x0000a271) volume_set_pane_g4_copy1

0xa279,	// (0x0000a279) volume_set_pane_g5_copy1

0xa281,	// (0x0000a281) volume_set_pane_g6_copy1

0xa289,	// (0x0000a289) volume_set_pane_g7_copy1

0xa291,	// (0x0000a291) volume_set_pane_g8_copy1

0xa299,	// (0x0000a299) volume_set_pane_g9_copy1

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1_ParamLimits

0x04e9,	// (0x000004e9) bg_set_opt_pane_cp_copy1

0xa2a1,	// (0x0000a2a1) setting_slider_pane_t1_copy1_ParamLimits

0xa2a1,	// (0x0000a2a1) setting_slider_pane_t1_copy1

0xa2bf,	// (0x0000a2bf) setting_slider_pane_t2_copy1_ParamLimits

0xa2bf,	// (0x0000a2bf) setting_slider_pane_t2_copy1

0xa2d9,	// (0x0000a2d9) setting_slider_pane_t3_copy1_ParamLimits

0xa2d9,	// (0x0000a2d9) setting_slider_pane_t3_copy1

0xa2f1,	// (0x0000a2f1) slider_set_pane_copy1_ParamLimits

0xa2f1,	// (0x0000a2f1) slider_set_pane_copy1

0x148b,	// (0x0000148b) set_opt_bg_pane_g1_copy2

0x1493,	// (0x00001493) set_opt_bg_pane_g2_copy2

0xa307,	// (0x0000a307) set_opt_bg_pane_g3_copy2

0x14a3,	// (0x000014a3) set_opt_bg_pane_g4_copy2

0x14ab,	// (0x000014ab) set_opt_bg_pane_g5_copy2

0x14b3,	// (0x000014b3) set_opt_bg_pane_g6_copy2

0xa311,	// (0x0000a311) set_opt_bg_pane_g7_copy2

0xa319,	// (0x0000a319) set_opt_bg_pane_g8_copy2

0xa323,	// (0x0000a323) set_opt_bg_pane_g9_copy2

0xa32d,	// (0x0000a32d) aid_size_touch_slider_mark_copy1_ParamLimits

0xa32d,	// (0x0000a32d) aid_size_touch_slider_mark_copy1

0xa341,	// (0x0000a341) slider_set_pane_g1_copy1

0xa34a,	// (0x0000a34a) slider_set_pane_g2_copy1

0x4d7b,	// (0x00004d7b) slider_set_pane_g3_copy1_ParamLimits

0x4d7b,	// (0x00004d7b) slider_set_pane_g3_copy1

0x4d8f,	// (0x00004d8f) slider_set_pane_g4_copy1_ParamLimits

0x4d8f,	// (0x00004d8f) slider_set_pane_g4_copy1

0x4da7,	// (0x00004da7) slider_set_pane_g5_copy1_ParamLimits

0x4da7,	// (0x00004da7) slider_set_pane_g5_copy1

0x4d7b,	// (0x00004d7b) slider_set_pane_g6_copy1_ParamLimits

0x4d7b,	// (0x00004d7b) slider_set_pane_g6_copy1

0xa352,	// (0x0000a352) slider_set_pane_g7_copy1_ParamLimits

0xa352,	// (0x0000a352) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa368,	// (0x0000a368) setting_slider_graphic_pane_g1_copy1

0xa371,	// (0x0000a371) setting_slider_graphic_pane_t1_copy1

0xa381,	// (0x0000a381) setting_slider_graphic_pane_t2_copy1

0xa391,	// (0x0000a391) slider_set_pane_cp_copy1

0xa3a1,	// (0x0000a3a1) input_focus_pane_cp1_copy1

0xa3aa,	// (0x0000a3aa) list_set_text_pane_copy1

0xa3b2,	// (0x0000a3b2) setting_text_pane_g1_copy1

0xa3bb,	// (0x0000a3bb) set_text_pane_t1_copy1

0xa3a1,	// (0x0000a3a1) input_focus_pane_cp2_copy1

0xa3b2,	// (0x0000a3b2) setting_code_pane_g1_copy1

0xa3d8,	// (0x0000a3d8) setting_code_pane_t1_copy1

0xa3e6,	// (0x0000a3e6) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2277,	// (0x00002277) list_set_graphic_pane_g1_copy1_ParamLimits

0x2277,	// (0x00002277) list_set_graphic_pane_g1_copy1

0xa3fa,	// (0x0000a3fa) list_set_graphic_pane_g2_copy1

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_copy1_ParamLimits

0x228f,	// (0x0000228f) list_set_graphic_pane_t1_copy1

0x645d,	// (0x0000645d) rs_clock_indi_pane_g1

0xa402,	// (0x0000a402) rs_clock_indi_pane_t1

0xa410,	// (0x0000a410) rs_indi_pane

0xa418,	// (0x0000a418) rs_indi_pane_g1

0xa421,	// (0x0000a421) rs_indi_pane_g2

0xa42a,	// (0x0000a42a) rs_indi_pane_g3

0x0002,

0xaff3,	// (0x0000aff3) rs_indi_pane_g

0x2575,	// (0x00002575) bg_popup_preview_window_pane_cp03

0xa433,	// (0x0000a433) popup_fep_tooltip_window_t1

0x7652,	// (0x00007652) popup_note2_window_g2_ParamLimits

0x7652,	// (0x00007652) popup_note2_window_g2

0x0001,

0xad98,	// (0x0000ad98) popup_note2_window_g_ParamLimits

0xad98,	// (0x0000ad98) popup_note2_window_g

0x7c4c,	// (0x00007c4c) bg_popup_sub_pane_cp11_ParamLimits

0x7c59,	// (0x00007c59) cell_ai3_links_pane_g1_ParamLimits

0x7c70,	// (0x00007c70) cell_ai3_links_pane_t1

0xa3bb,	// (0x0000a3bb) set_text_pane_t1_copy1_ParamLimits

0x2484,	// (0x00002484) cell_graphic_popup_pane_cp2_ParamLimits

0x2484,	// (0x00002484) cell_graphic_popup_pane_cp2

0xa441,	// (0x0000a441) cell_graphic_popup_pane_g1_cp2

0x0b2e,	// (0x00000b2e) cell_graphic_popup_pane_g2_cp2

0xa449,	// (0x0000a449) cell_graphic_popup_pane_g3_cp2

0xa451,	// (0x0000a451) cell_graphic_popup_pane_t2_cp2

0x0b3f,	// (0x00000b3f) grid_highlight_pane_cp3_cp2

0x19fd,	// (0x000019fd) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x134f,	// (0x0000134f) main_tmo_pane_ParamLimits

0xd924,	// (0x0000d924) popup_tmo_big_image_note_window

0xe8b3,	// (0x0000e8b3) cell_ai5_widget_list_pane

0xe8bb,	// (0x0000e8bb) cell_ai5_widget_lrg_icon_pane

0xeb51,	// (0x0000eb51) tmo_note_info_pane_t1_ParamLimits

0xeb66,	// (0x0000eb66) tmo_note_info_pane_t2_ParamLimits

0xeb7f,	// (0x0000eb7f) tmo_note_info_pane_t3_ParamLimits

0x9fc1,	// (0x00009fc1) tmo_note_info_pane_t4_ParamLimits

0x9fd3,	// (0x00009fd3) tmo_note_info_pane_t5_ParamLimits

0xeed7,	// (0x0000eed7) tmo_note_info_pane_t_ParamLimits

0xa109,	// (0x0000a109) settings_container_pane_ParamLimits

0xa399,	// (0x0000a399) indicator_popup_pane_cp5

0xa399,	// (0x0000a399) indicator_popup_pane_cp6

0xa3e6,	// (0x0000a3e6) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa45f,	// (0x0000a45f) popup_tmo_big_image_note_window_g1

0xa46a,	// (0x0000a46a) popup_tmo_big_image_note_window_t1

0xa47a,	// (0x0000a47a) popup_tmo_big_image_note_window_t2

0xa48a,	// (0x0000a48a) popup_tmo_big_image_note_window_t3

0x0002,

0xaffa,	// (0x0000affa) popup_tmo_big_image_note_window_t

0xeb94,	// (0x0000eb94) cell_ai5_widget_lrg_icon_pane_g1

0xeb9c,	// (0x0000eb9c) cell_ai5_widget_lrg_icon_pane_t1

0xebaa,	// (0x0000ebaa) cell_ai5_widget_list_row_pane_ParamLimits

0xebaa,	// (0x0000ebaa) cell_ai5_widget_list_row_pane

0xebc3,	// (0x0000ebc3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xebc3,	// (0x0000ebc3) cell_ai5_widget_list_row_pane_g1

0xebd0,	// (0x0000ebd0) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xebd0,	// (0x0000ebd0) cell_ai5_widget_list_row_pane_t1

0xebe8,	// (0x0000ebe8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebe8,	// (0x0000ebe8) cell_ai5_widget_list_row_pane_t2

0x0001,

0xeee2,	// (0x0000eee2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xeee2,	// (0x0000eee2) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa500,	// (0x0000a500) popup_fep_char_pre_window

0xa508,	// (0x0000a508) popup_fep_ituss_window

0xa513,	// (0x0000a513) popup_fep_vkbss_window

0xa51c,	// (0x0000a51c) grid_vkbss_keypad_pane_ParamLimits

0xa51c,	// (0x0000a51c) grid_vkbss_keypad_pane

0xa52c,	// (0x0000a52c) ituss_keypad_pane

0xa534,	// (0x0000a534) aid_vkbss_key_offset_ParamLimits

0xa534,	// (0x0000a534) aid_vkbss_key_offset

0xa543,	// (0x0000a543) cell_vkbss_key_pane_ParamLimits

0xa543,	// (0x0000a543) cell_vkbss_key_pane

0xa559,	// (0x0000a559) bg_cell_vkbss_key_g1_ParamLimits

0xa559,	// (0x0000a559) bg_cell_vkbss_key_g1

0xa565,	// (0x0000a565) cell_vkbss_key_3p_pane_ParamLimits

0xa565,	// (0x0000a565) cell_vkbss_key_3p_pane

0xa57f,	// (0x0000a57f) cell_vkbss_key_g1_ParamLimits

0xa57f,	// (0x0000a57f) cell_vkbss_key_g1

0xa599,	// (0x0000a599) cell_vkbss_key_t1_ParamLimits

0xa599,	// (0x0000a599) cell_vkbss_key_t1

0xa5c4,	// (0x0000a5c4) cell_ituss_key_pane_ParamLimits

0xa5c4,	// (0x0000a5c4) cell_ituss_key_pane

0xa5d3,	// (0x0000a5d3) bg_cell_ituss_key_g1_ParamLimits

0xa5d3,	// (0x0000a5d3) bg_cell_ituss_key_g1

0xa5df,	// (0x0000a5df) cell_ituss_key_pane_g1_ParamLimits

0xa5df,	// (0x0000a5df) cell_ituss_key_pane_g1

0xa5eb,	// (0x0000a5eb) cell_ituss_key_pane_g2_ParamLimits

0xa5eb,	// (0x0000a5eb) cell_ituss_key_pane_g2

0x0001,

0xb006,	// (0x0000b006) cell_ituss_key_pane_g_ParamLimits

0xb006,	// (0x0000b006) cell_ituss_key_pane_g

0xa5fe,	// (0x0000a5fe) cell_ituss_key_t1_ParamLimits

0xa5fe,	// (0x0000a5fe) cell_ituss_key_t1

0xa61c,	// (0x0000a61c) cell_ituss_key_t2_ParamLimits

0xa61c,	// (0x0000a61c) cell_ituss_key_t2

0xa63b,	// (0x0000a63b) cell_ituss_key_t3_ParamLimits

0xa63b,	// (0x0000a63b) cell_ituss_key_t3

0xa65a,	// (0x0000a65a) cell_ituss_key_t4_ParamLimits

0xa65a,	// (0x0000a65a) cell_ituss_key_t4

0x0003,

0xb00b,	// (0x0000b00b) cell_ituss_key_t_ParamLimits

0xb00b,	// (0x0000b00b) cell_ituss_key_t

0xa679,	// (0x0000a679) cell_vkbss_key_3p_pane_g1

0xa681,	// (0x0000a681) cell_vkbss_key_3p_pane_g2

0xa689,	// (0x0000a689) cell_vkbss_key_3p_pane_g3

0x0002,

0xb014,	// (0x0000b014) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xa691,	// (0x0000a691) popup_fep_char_pre_window_t1

0xe8a9,	// (0x0000e8a9) main_ai5_sk_pane

0xa04d,	// (0x0000a04d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa059,	// (0x0000a059) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa06d,	// (0x0000a06d) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa07c,	// (0x0000a07c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xafec,	// (0x0000afec) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa08f,	// (0x0000a08f) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x134f,	// (0x0000134f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebfa,	// (0x0000ebfa) main_ai5_sk_pane_g1
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
