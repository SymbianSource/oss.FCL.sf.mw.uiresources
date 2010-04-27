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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000d1bd };

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
0x7233,	// (0x000143f0) Screen

0x723f,	// (0x000143fc) application_window_ParamLimits

0x723f,	// (0x000143fc) application_window

0x3251,	// (0x0001040e) screen_g1

0x530a,	// (0x000124c7) area_bottom_pane_ParamLimits

0x530a,	// (0x000124c7) area_bottom_pane

0x53ca,	// (0x00012587) area_top_pane_ParamLimits

0x53ca,	// (0x00012587) area_top_pane

0x5468,	// (0x00012625) main_pane_ParamLimits

0x5468,	// (0x00012625) main_pane

0x33ca,	// (0x00010587) misc_graphics

0x89ba,	// (0x00015b77) battery_pane_ParamLimits

0x89ba,	// (0x00015b77) battery_pane

0x9787,	// (0x00016944) bg_status_flat_pane_g8

0x978f,	// (0x0001694c) bg_status_flat_pane_g9

0x8a82,	// (0x00015c3f) context_pane_ParamLimits

0x8a82,	// (0x00015c3f) context_pane

0x8ba6,	// (0x00015d63) navi_pane_ParamLimits

0x8ba6,	// (0x00015d63) navi_pane

0x8c36,	// (0x00015df3) signal_pane_ParamLimits

0x8c36,	// (0x00015df3) signal_pane

0x0008,

0xf874,	// (0x0001ca31) bg_status_flat_pane_g

0x8ca3,	// (0x00015e60) status_pane_g1_ParamLimits

0x8ca3,	// (0x00015e60) status_pane_g1

0x8cb7,	// (0x00015e74) status_pane_g2_ParamLimits

0x8cb7,	// (0x00015e74) status_pane_g2

0x8cc3,	// (0x00015e80) status_pane_g3_ParamLimits

0x8cc3,	// (0x00015e80) status_pane_g3

0x0004,

0xf79b,	// (0x0001c958) status_pane_g_ParamLimits

0xf79b,	// (0x0001c958) status_pane_g

0x8cf7,	// (0x00015eb4) title_pane_ParamLimits

0x8cf7,	// (0x00015eb4) title_pane

0x8d34,	// (0x00015ef1) uni_indicator_pane_ParamLimits

0x8d34,	// (0x00015ef1) uni_indicator_pane

0x829b,	// (0x00015458) bg_list_pane_ParamLimits

0x829b,	// (0x00015458) bg_list_pane

0x82bb,	// (0x00015478) find_pane

0x82c3,	// (0x00015480) listscroll_app_pane_ParamLimits

0x82c3,	// (0x00015480) listscroll_app_pane

0x82cf,	// (0x0001548c) listscroll_form_pane

0x82d7,	// (0x00015494) listscroll_gen_pane_ParamLimits

0x82d7,	// (0x00015494) listscroll_gen_pane

0x82eb,	// (0x000154a8) listscroll_set_pane

0x7b77,	// (0x00014d34) main_idle_act_pane

0x7f7f,	// (0x0001513c) main_idle_trad_pane

0x7f7f,	// (0x0001513c) main_list_empty_pane

0x8305,	// (0x000154c2) main_midp_pane

0x8311,	// (0x000154ce) main_pane_g1_ParamLimits

0x8311,	// (0x000154ce) main_pane_g1

0x831f,	// (0x000154dc) popup_ai_message_window_ParamLimits

0x831f,	// (0x000154dc) popup_ai_message_window

0x83db,	// (0x00015598) popup_fep_china_uni_window_ParamLimits

0x83db,	// (0x00015598) popup_fep_china_uni_window

0x843b,	// (0x000155f8) popup_fep_japan_candidate_window_ParamLimits

0x843b,	// (0x000155f8) popup_fep_japan_candidate_window

0x8465,	// (0x00015622) popup_fep_japan_predictive_window_ParamLimits

0x8465,	// (0x00015622) popup_fep_japan_predictive_window

0x849b,	// (0x00015658) popup_find_window

0x84a8,	// (0x00015665) popup_grid_graphic_window_ParamLimits

0x84a8,	// (0x00015665) popup_grid_graphic_window

0x84d6,	// (0x00015693) popup_large_graphic_colour_window

0x84fc,	// (0x000156b9) popup_menu_window_ParamLimits

0x84fc,	// (0x000156b9) popup_menu_window

0x86c6,	// (0x00015883) popup_note_image_window

0x86b0,	// (0x0001586d) popup_note_wait_window_ParamLimits

0x86b0,	// (0x0001586d) popup_note_wait_window

0x86b0,	// (0x0001586d) popup_note_window_ParamLimits

0x86b0,	// (0x0001586d) popup_note_window

0x872c,	// (0x000158e9) popup_query_code_window_ParamLimits

0x872c,	// (0x000158e9) popup_query_code_window

0x8742,	// (0x000158ff) popup_query_data_code_window_ParamLimits

0x8742,	// (0x000158ff) popup_query_data_code_window

0x8765,	// (0x00015922) popup_query_data_window_ParamLimits

0x8765,	// (0x00015922) popup_query_data_window

0x8787,	// (0x00015944) popup_query_sat_info_window_ParamLimits

0x8787,	// (0x00015944) popup_query_sat_info_window

0x87c6,	// (0x00015983) popup_snote_single_graphic_window_ParamLimits

0x87c6,	// (0x00015983) popup_snote_single_graphic_window

0x87c6,	// (0x00015983) popup_snote_single_text_window_ParamLimits

0x87c6,	// (0x00015983) popup_snote_single_text_window

0x87dd,	// (0x0001599a) popup_sub_window_general

0x8923,	// (0x00015ae0) popup_window_general_ParamLimits

0x8923,	// (0x00015ae0) popup_window_general

0x893c,	// (0x00015af9) power_save_pane

0x5bea,	// (0x00012da7) control_pane_g1_ParamLimits

0x5bea,	// (0x00012da7) control_pane_g1

0x5c13,	// (0x00012dd0) control_pane_g2_ParamLimits

0x5c13,	// (0x00012dd0) control_pane_g2

0x823c,	// (0x000153f9) control_pane_g3_ParamLimits

0x823c,	// (0x000153f9) control_pane_g3

0x0007,

0xf783,	// (0x0001c940) control_pane_g_ParamLimits

0xf783,	// (0x0001c940) control_pane_g

0x5c5b,	// (0x00012e18) control_pane_t1_ParamLimits

0x5c5b,	// (0x00012e18) control_pane_t1

0x5ca7,	// (0x00012e64) control_pane_t2_ParamLimits

0x5ca7,	// (0x00012e64) control_pane_t2

0x0002,

0xf794,	// (0x0001c951) control_pane_t_ParamLimits

0xf794,	// (0x0001c951) control_pane_t

0x8161,	// (0x0001531e) navi_navi_volume_pane_cp1

0x8169,	// (0x00015326) status_small_icon_pane

0x8171,	// (0x0001532e) status_small_pane_g1_ParamLimits

0x8171,	// (0x0001532e) status_small_pane_g1

0x81a5,	// (0x00015362) status_small_pane_g2_ParamLimits

0x81a5,	// (0x00015362) status_small_pane_g2

0x81b1,	// (0x0001536e) status_small_pane_g3_ParamLimits

0x81b1,	// (0x0001536e) status_small_pane_g3

0x81bd,	// (0x0001537a) status_small_pane_g4_ParamLimits

0x81bd,	// (0x0001537a) status_small_pane_g4

0x81c9,	// (0x00015386) status_small_pane_g5_ParamLimits

0x81c9,	// (0x00015386) status_small_pane_g5

0x81d7,	// (0x00015394) status_small_pane_g6_ParamLimits

0x81d7,	// (0x00015394) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c92f) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c92f) status_small_pane_g

0x8206,	// (0x000153c3) status_small_pane_t1

0x8228,	// (0x000153e5) status_small_wait_pane_ParamLimits

0x8228,	// (0x000153e5) status_small_wait_pane

0x7ca6,	// (0x00014e63) aid_levels_signal_ParamLimits

0x7ca6,	// (0x00014e63) aid_levels_signal

0x7cb8,	// (0x00014e75) signal_pane_g1_ParamLimits

0x7cb8,	// (0x00014e75) signal_pane_g1

0x7ccd,	// (0x00014e8a) signal_pane_g2_ParamLimits

0x7ccd,	// (0x00014e8a) signal_pane_g2

0x0003,

0xf703,	// (0x0001c8c0) signal_pane_g_ParamLimits

0xf703,	// (0x0001c8c0) signal_pane_g

0x4411,	// (0x000115ce) context_pane_g1

0x724f,	// (0x0001440c) title_pane_g1

0x726d,	// (0x0001442a) title_pane_t1

0x3440,	// (0x000105fd) title_pane_t2

0x3466,	// (0x00010623) title_pane_t3

0x0002,

0xf557,	// (0x0001c714) title_pane_t

0x8d4c,	// (0x00015f09) aid_levels_battery_ParamLimits

0x8d4c,	// (0x00015f09) aid_levels_battery

0x8d60,	// (0x00015f1d) battery_pane_g1_ParamLimits

0x8d60,	// (0x00015f1d) battery_pane_g1

0x8d76,	// (0x00015f33) battery_pane_g2_ParamLimits

0x8d76,	// (0x00015f33) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c963) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c963) battery_pane_g

0xa0d1,	// (0x0001728e) uni_indicator_pane_g1

0xa0e7,	// (0x000172a4) uni_indicator_pane_g2

0xa0fd,	// (0x000172ba) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001cad9) uni_indicator_pane_g

0x4862,	// (0x00011a1f) navi_icon_pane_ParamLimits

0x4862,	// (0x00011a1f) navi_icon_pane

0x47e6,	// (0x000119a3) navi_midp_pane

0x487e,	// (0x00011a3b) navi_navi_pane

0x4888,	// (0x00011a45) navi_text_pane_ParamLimits

0x4888,	// (0x00011a45) navi_text_pane

0x3251,	// (0x0001040e) status_small_wait_pane_g1

0x380e,	// (0x000109cb) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001cad4) status_small_wait_pane_g

0x9de4,	// (0x00016fa1) navi_navi_icon_text_pane

0x9dec,	// (0x00016fa9) navi_navi_pane_g1_ParamLimits

0x9dec,	// (0x00016fa9) navi_navi_pane_g1

0x9dfe,	// (0x00016fbb) navi_navi_pane_g2_ParamLimits

0x9dfe,	// (0x00016fbb) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001caa2) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001caa2) navi_navi_pane_g

0x9e10,	// (0x00016fcd) navi_navi_tabs_pane

0x9e19,	// (0x00016fd6) navi_navi_text_pane

0x9de4,	// (0x00016fa1) navi_navi_volume_pane

0x9dc0,	// (0x00016f7d) navi_text_pane_t1

0x9db4,	// (0x00016f71) navi_icon_pane_g1

0x9d07,	// (0x00016ec4) navi_navi_text_pane_t1

0x6044,	// (0x00013201) navi_navi_volume_pane_g1

0x604c,	// (0x00013209) volume_small_pane

0x9c6d,	// (0x00016e2a) navi_navi_icon_text_pane_g1

0x9c75,	// (0x00016e32) navi_navi_icon_text_pane_t1

0x487e,	// (0x00011a3b) navi_tabs_2_long_pane

0x487e,	// (0x00011a3b) navi_tabs_2_pane

0x487e,	// (0x00011a3b) navi_tabs_3_long_pane

0x487e,	// (0x00011a3b) navi_tabs_3_pane

0x487e,	// (0x00011a3b) navi_tabs_4_pane

0x6024,	// (0x000131e1) tabs_2_active_pane_ParamLimits

0x6024,	// (0x000131e1) tabs_2_active_pane

0x6034,	// (0x000131f1) tabs_2_passive_pane_ParamLimits

0x6034,	// (0x000131f1) tabs_2_passive_pane

0x5ff2,	// (0x000131af) tabs_3_active_pane_ParamLimits

0x5ff2,	// (0x000131af) tabs_3_active_pane

0x6002,	// (0x000131bf) tabs_3_passive_pane_ParamLimits

0x6002,	// (0x000131bf) tabs_3_passive_pane

0x6013,	// (0x000131d0) tabs_3_passive_pane_cp_ParamLimits

0x6013,	// (0x000131d0) tabs_3_passive_pane_cp

0x5fa6,	// (0x00013163) tabs_4_active_pane_ParamLimits

0x5fa6,	// (0x00013163) tabs_4_active_pane

0x5fb9,	// (0x00013176) tabs_4_passive_pane_ParamLimits

0x5fb9,	// (0x00013176) tabs_4_passive_pane

0x5fca,	// (0x00013187) tabs_4_passive_pane_cp_ParamLimits

0x5fca,	// (0x00013187) tabs_4_passive_pane_cp

0x5fdb,	// (0x00013198) tabs_4_passive_pane_cp2_ParamLimits

0x5fdb,	// (0x00013198) tabs_4_passive_pane_cp2

0x5f82,	// (0x0001313f) tabs_2_long_active_pane_ParamLimits

0x5f82,	// (0x0001313f) tabs_2_long_active_pane

0x5f94,	// (0x00013151) tabs_2_long_passive_pane_ParamLimits

0x5f94,	// (0x00013151) tabs_2_long_passive_pane

0x5f43,	// (0x00013100) tabs_3_long_active_pane_ParamLimits

0x5f43,	// (0x00013100) tabs_3_long_active_pane

0x5f56,	// (0x00013113) tabs_3_long_passive_pane_ParamLimits

0x5f56,	// (0x00013113) tabs_3_long_passive_pane

0x5f6f,	// (0x0001312c) tabs_3_long_passive_pane_cp_ParamLimits

0x5f6f,	// (0x0001312c) tabs_3_long_passive_pane_cp

0x5ee9,	// (0x000130a6) volume_small_pane_g1

0x5ef2,	// (0x000130af) volume_small_pane_g2

0x5efb,	// (0x000130b8) volume_small_pane_g3

0x5f04,	// (0x000130c1) volume_small_pane_g4

0x5f0d,	// (0x000130ca) volume_small_pane_g5

0x5f16,	// (0x000130d3) volume_small_pane_g6

0x5f1f,	// (0x000130dc) volume_small_pane_g7

0x5f28,	// (0x000130e5) volume_small_pane_g8

0x5f31,	// (0x000130ee) volume_small_pane_g9

0x5f3a,	// (0x000130f7) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001ca6e) volume_small_pane_g

0x3490,	// (0x0001064d) bg_active_tab_pane_cp2_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp2

0x72d5,	// (0x00014492) tabs_3_active_pane_g1

0x72dd,	// (0x0001449a) tabs_3_active_pane_t1

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp2_ParamLimits

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp2

0x72d5,	// (0x00014492) tabs_3_passive_pane_g1

0x72dd,	// (0x0001449a) tabs_3_passive_pane_t1

0x3490,	// (0x0001064d) bg_active_tab_pane_cp3_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp3

0x72ef,	// (0x000144ac) tabs_4_active_pane_g1

0x72f7,	// (0x000144b4) tabs_4_active_pane_t1

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp3_ParamLimits

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp3

0x72ef,	// (0x000144ac) tabs_4_1_passive_pane_g1

0x72f7,	// (0x000144b4) tabs_4_1_passive_pane_t1

0x8305,	// (0x000154c2) list_highlight_pane_cp2

0xa374,	// (0x00017531) list_set_pane_ParamLimits

0xa374,	// (0x00017531) list_set_pane

0xa43c,	// (0x000175f9) main_pane_set_t1_ParamLimits

0xa43c,	// (0x000175f9) main_pane_set_t1

0xa45c,	// (0x00017619) main_pane_set_t2_ParamLimits

0xa45c,	// (0x00017619) main_pane_set_t2

0xa470,	// (0x0001762d) main_pane_set_t3_ParamLimits

0xa470,	// (0x0001762d) main_pane_set_t3

0xa484,	// (0x00017641) main_pane_set_t4_ParamLimits

0xa484,	// (0x00017641) main_pane_set_t4

0x0003,

0xf981,	// (0x0001cb3e) main_pane_set_t_ParamLimits

0xf981,	// (0x0001cb3e) main_pane_set_t

0xa498,	// (0x00017655) setting_code_pane

0xa4a2,	// (0x0001765f) setting_slider_graphic_pane

0xa4a2,	// (0x0001765f) setting_slider_pane

0xa4a2,	// (0x0001765f) setting_text_pane

0xa4a2,	// (0x0001765f) setting_volume_pane

0x56c7,	// (0x00012884) volume_set_pane

0x3490,	// (0x0001064d) bg_set_opt_pane_cp

0x56d1,	// (0x0001288e) setting_slider_pane_t1

0x56ea,	// (0x000128a7) setting_slider_pane_t2

0x5704,	// (0x000128c1) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c71b) setting_slider_pane_t

0x571c,	// (0x000128d9) slider_set_pane

0x33ca,	// (0x00010587) bg_set_opt_pane_cp2

0x34ff,	// (0x000106bc) setting_slider_graphic_pane_g1

0x5732,	// (0x000128ef) setting_slider_graphic_pane_t1

0x5742,	// (0x000128ff) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c722) setting_slider_graphic_pane_t

0x5752,	// (0x0001290f) slider_set_pane_cp

0x33ca,	// (0x00010587) input_focus_pane_cp1

0xa335,	// (0x000174f2) list_set_text_pane

0x3251,	// (0x0001040e) setting_text_pane_g1

0x33ca,	// (0x00010587) input_focus_pane_cp2

0x3251,	// (0x0001040e) setting_code_pane_g1

0x3530,	// (0x000106ed) setting_code_pane_t1

0x353e,	// (0x000106fb) set_text_pane_t1_ParamLimits

0x353e,	// (0x000106fb) set_text_pane_t1

0x3caf,	// (0x00010e6c) set_opt_bg_pane_g1

0x3cb7,	// (0x00010e74) set_opt_bg_pane_g2

0xa30d,	// (0x000174ca) set_opt_bg_pane_g3

0x3cc7,	// (0x00010e84) set_opt_bg_pane_g4

0x3ccf,	// (0x00010e8c) set_opt_bg_pane_g5

0x3cd7,	// (0x00010e94) set_opt_bg_pane_g6

0xa317,	// (0x000174d4) set_opt_bg_pane_g7

0xa321,	// (0x000174de) set_opt_bg_pane_g8

0xa32b,	// (0x000174e8) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001cb2b) set_opt_bg_pane_g

0xa300,	// (0x000174bd) slider_set_pane_g1

0x60cd,	// (0x0001328a) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001cb1c) slider_set_pane_g

0x6055,	// (0x00013212) volume_set_pane_g1

0x605f,	// (0x0001321c) volume_set_pane_g2

0x6069,	// (0x00013226) volume_set_pane_g3

0x6073,	// (0x00013230) volume_set_pane_g4

0x607d,	// (0x0001323a) volume_set_pane_g5

0x6087,	// (0x00013244) volume_set_pane_g6

0x6091,	// (0x0001324e) volume_set_pane_g7

0x609b,	// (0x00013258) volume_set_pane_g8

0x60a5,	// (0x00013262) volume_set_pane_g9

0x60af,	// (0x0001326c) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001caf4) volume_set_pane_g

0x7309,	// (0x000144c6) indicator_pane_ParamLimits

0x7309,	// (0x000144c6) indicator_pane

0x7315,	// (0x000144d2) main_idle_pane_g2_ParamLimits

0x7315,	// (0x000144d2) main_idle_pane_g2

0x733d,	// (0x000144fa) main_pane_idle_g1_ParamLimits

0x733d,	// (0x000144fa) main_pane_idle_g1

0x3558,	// (0x00010715) popup_clock_digital_analogue_window_ParamLimits

0x3558,	// (0x00010715) popup_clock_digital_analogue_window

0x734b,	// (0x00014508) soft_indicator_pane_ParamLimits

0x734b,	// (0x00014508) soft_indicator_pane

0x7359,	// (0x00014516) wallpaper_pane_ParamLimits

0x7359,	// (0x00014516) wallpaper_pane

0x3251,	// (0x0001040e) wallpaper_pane_g1

0x7365,	// (0x00014522) indicator_pane_g1_ParamLimits

0x7365,	// (0x00014522) indicator_pane_g1

0xa7f3,	// (0x000179b0) navi_navi_icon_text_pane_srt_g1

0x3586,	// (0x00010743) soft_indicator_pane_t1

0x35a0,	// (0x0001075d) aid_ps_area_pane

0x7371,	// (0x0001452e) aid_ps_clock_pane

0x35b1,	// (0x0001076e) aid_ps_indicator_pane

0x35bd,	// (0x0001077a) indicator_ps_pane_ParamLimits

0x35bd,	// (0x0001077a) indicator_ps_pane

0x35cc,	// (0x00010789) power_save_pane_g1_ParamLimits

0x35cc,	// (0x00010789) power_save_pane_g1

0x35d8,	// (0x00010795) power_save_pane_g2_ParamLimits

0x35d8,	// (0x00010795) power_save_pane_g2

0x52be,	// (0x0001247b) aid_navinavi_width_pane

0x35a0,	// (0x0001075d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c727) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c727) power_save_pane_g

0x35e6,	// (0x000107a3) power_save_pane_t1_ParamLimits

0x35e6,	// (0x000107a3) power_save_pane_t1

0x7371,	// (0x0001452e) aid_ps_clock_pane_ParamLimits

0x35b1,	// (0x0001076e) aid_ps_indicator_pane_ParamLimits

0x35f8,	// (0x000107b5) power_save_pane_t4_ParamLimits

0x35f8,	// (0x000107b5) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c72c) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c72c) power_save_pane_t

0x3622,	// (0x000107df) power_save_t3_ParamLimits

0x3622,	// (0x000107df) power_save_t3

0x360d,	// (0x000107ca) power_save_t2_ParamLimits

0x360d,	// (0x000107ca) power_save_t2

0x3637,	// (0x000107f4) indicator_ps_pane_g1

0x737f,	// (0x0001453c) ai_gene_pane_ParamLimits

0x737f,	// (0x0001453c) ai_gene_pane

0x738b,	// (0x00014548) ai_links_pane_ParamLimits

0x738b,	// (0x00014548) ai_links_pane

0x7397,	// (0x00014554) indicator_pane_cp1_ParamLimits

0x7397,	// (0x00014554) indicator_pane_cp1

0x73a3,	// (0x00014560) main_pane_idle_g1_cp_ParamLimits

0x73a3,	// (0x00014560) main_pane_idle_g1_cp

0x3640,	// (0x000107fd) popup_ai_links_title_window

0x73af,	// (0x0001456c) soft_indicator_pane_cp1_ParamLimits

0x73af,	// (0x0001456c) soft_indicator_pane_cp1

0xa0bf,	// (0x0001727c) ai_links_pane_g1

0xa0c8,	// (0x00017285) grid_ai_links_pane

0xa0a4,	// (0x00017261) ai_gene_pane_1

0xa0ad,	// (0x0001726a) ai_gene_pane_2

0xa0b6,	// (0x00017273) list_highlight_pane_cp4

0xa084,	// (0x00017241) cell_ai_link_pane_ParamLimits

0xa084,	// (0x00017241) cell_ai_link_pane

0xa07c,	// (0x00017239) cell_ai_link_pane_g1

0x380e,	// (0x000109cb) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001cacf) cell_ai_link_pane_g

0x33ca,	// (0x00010587) grid_highlight_cp2

0x33ca,	// (0x00010587) bg_popup_sub_pane_cp1

0x3657,	// (0x00010814) popup_ai_links_title_window_t1

0x9fc8,	// (0x00017185) ai_gene_pane_1_g1_ParamLimits

0x9fc8,	// (0x00017185) ai_gene_pane_1_g1

0x9fd4,	// (0x00017191) ai_gene_pane_1_g2_ParamLimits

0x9fd4,	// (0x00017191) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001cac5) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001cac5) ai_gene_pane_1_g

0x9fe1,	// (0x0001719e) ai_gene_pane_1_t1_ParamLimits

0x9fe1,	// (0x0001719e) ai_gene_pane_1_t1

0xa015,	// (0x000171d2) grid_ai_soft_ind_pane

0x9fb3,	// (0x00017170) ai_gene_pane_2_t1_ParamLimits

0x9fb3,	// (0x00017170) ai_gene_pane_2_t1

0x73bb,	// (0x00014578) main_pane_empty_t1_ParamLimits

0x73bb,	// (0x00014578) main_pane_empty_t1

0x73d3,	// (0x00014590) main_pane_empty_t2_ParamLimits

0x73d3,	// (0x00014590) main_pane_empty_t2

0x73e8,	// (0x000145a5) main_pane_empty_t3_ParamLimits

0x73e8,	// (0x000145a5) main_pane_empty_t3

0x73fa,	// (0x000145b7) main_pane_empty_t4_ParamLimits

0x73fa,	// (0x000145b7) main_pane_empty_t4

0x740c,	// (0x000145c9) main_pane_empty_t5_ParamLimits

0x740c,	// (0x000145c9) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c731) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c731) main_pane_empty_t

0x3d2f,	// (0x00010eec) bg_popup_window_pane_ParamLimits

0x3d2f,	// (0x00010eec) bg_popup_window_pane

0x9d15,	// (0x00016ed2) find_popup_pane_cp2_ParamLimits

0x9d15,	// (0x00016ed2) find_popup_pane_cp2

0x9d21,	// (0x00016ede) heading_pane_ParamLimits

0x9d21,	// (0x00016ede) heading_pane

0x33ca,	// (0x00010587) bg_popup_sub_pane

0x9c8f,	// (0x00016e4c) bg_popup_window_pane_g1_ParamLimits

0x9c8f,	// (0x00016e4c) bg_popup_window_pane_g1

0x9c9b,	// (0x00016e58) bg_popup_window_pane_g2_ParamLimits

0x9c9b,	// (0x00016e58) bg_popup_window_pane_g2

0x9ca7,	// (0x00016e64) bg_popup_window_pane_g3_ParamLimits

0x9ca7,	// (0x00016e64) bg_popup_window_pane_g3

0x9cb3,	// (0x00016e70) bg_popup_window_pane_g4_ParamLimits

0x9cb3,	// (0x00016e70) bg_popup_window_pane_g4

0x9cbf,	// (0x00016e7c) bg_popup_window_pane_g5_ParamLimits

0x9cbf,	// (0x00016e7c) bg_popup_window_pane_g5

0x9ccb,	// (0x00016e88) bg_popup_window_pane_g6_ParamLimits

0x9ccb,	// (0x00016e88) bg_popup_window_pane_g6

0x9cd7,	// (0x00016e94) bg_popup_window_pane_g7_ParamLimits

0x9cd7,	// (0x00016e94) bg_popup_window_pane_g7

0x9ce3,	// (0x00016ea0) bg_popup_window_pane_g8_ParamLimits

0x9ce3,	// (0x00016ea0) bg_popup_window_pane_g8

0x9cef,	// (0x00016eac) bg_popup_window_pane_g9_ParamLimits

0x9cef,	// (0x00016eac) bg_popup_window_pane_g9

0x9cfb,	// (0x00016eb8) bg_popup_window_pane_g10_ParamLimits

0x9cfb,	// (0x00016eb8) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001ca8d) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001ca8d) bg_popup_window_pane_g

0x9c24,	// (0x00016de1) bg_popup_heading_pane_ParamLimits

0x9c24,	// (0x00016de1) bg_popup_heading_pane

0x6155,	// (0x00013312) tabs_4_passive_pane_cp_srt_ParamLimits

0x6155,	// (0x00013312) tabs_4_passive_pane_cp_srt

0x6167,	// (0x00013324) tabs_4_passive_pane_srt_ParamLimits

0x9c38,	// (0x00016df5) heading_pane_g2

0x6167,	// (0x00013324) tabs_4_passive_pane_srt

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp3_srt

0x9c40,	// (0x00016dfd) heading_pane_t1_ParamLimits

0x9c40,	// (0x00016dfd) heading_pane_t1

0x9c57,	// (0x00016e14) heading_pane_t2_ParamLimits

0x9c57,	// (0x00016e14) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001ca88) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001ca88) heading_pane_t

0x974f,	// (0x0001690c) bg_popup_heading_pane_g1

0x97fe,	// (0x000169bb) bg_popup_heading_pane_g2

0x9808,	// (0x000169c5) bg_popup_heading_pane_g3

0x9812,	// (0x000169cf) bg_popup_heading_pane_g4

0x981c,	// (0x000169d9) bg_popup_heading_pane_g5

0x9826,	// (0x000169e3) bg_popup_heading_pane_g6

0x982e,	// (0x000169eb) bg_popup_heading_pane_g7

0x9836,	// (0x000169f3) bg_popup_heading_pane_g8

0x9840,	// (0x000169fd) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001ca44) bg_popup_heading_pane_g

0x8e7c,	// (0x00016039) bg_popup_sub_pane_g1

0x8e8c,	// (0x00016049) bg_popup_sub_pane_g2

0x8e84,	// (0x00016041) bg_popup_sub_pane_g3

0x8e9c,	// (0x00016059) bg_popup_sub_pane_g4

0x8e94,	// (0x00016051) bg_popup_sub_pane_g5

0x8ea4,	// (0x00016061) bg_popup_sub_pane_g6

0x8eac,	// (0x00016069) bg_popup_sub_pane_g7

0x8ebc,	// (0x00016079) bg_popup_sub_pane_g8

0x8eb4,	// (0x00016071) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001ca1e) bg_popup_sub_pane_g

0x3478,	// (0x00010635) bg_popup_window_pane_cp5_ParamLimits

0x3478,	// (0x00010635) bg_popup_window_pane_cp5

0x3674,	// (0x00010831) popup_note_window_g1_ParamLimits

0x3674,	// (0x00010831) popup_note_window_g1

0x3680,	// (0x0001083d) popup_note_window_t1_ParamLimits

0x3680,	// (0x0001083d) popup_note_window_t1

0x3696,	// (0x00010853) popup_note_window_t2_ParamLimits

0x3696,	// (0x00010853) popup_note_window_t2

0x36ac,	// (0x00010869) popup_note_window_t3_ParamLimits

0x36ac,	// (0x00010869) popup_note_window_t3

0x36c2,	// (0x0001087f) popup_note_window_t4_ParamLimits

0x36c2,	// (0x0001087f) popup_note_window_t4

0x36ea,	// (0x000108a7) popup_note_window_t5_ParamLimits

0x36ea,	// (0x000108a7) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c73c) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c73c) popup_note_window_t

0x370e,	// (0x000108cb) bg_popup_window_pane_cp6_ParamLimits

0x370e,	// (0x000108cb) bg_popup_window_pane_cp6

0x96cb,	// (0x00016888) popup_note_image_window_g1_ParamLimits

0x96cb,	// (0x00016888) popup_note_image_window_g1

0x96d7,	// (0x00016894) popup_note_image_window_g2_ParamLimits

0x96d7,	// (0x00016894) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001ca12) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001ca12) popup_note_image_window_g

0x96f0,	// (0x000168ad) popup_note_image_window_t1_ParamLimits

0x96f0,	// (0x000168ad) popup_note_image_window_t1

0x9709,	// (0x000168c6) popup_note_image_window_t2_ParamLimits

0x9709,	// (0x000168c6) popup_note_image_window_t2

0x9722,	// (0x000168df) popup_note_image_window_t3_ParamLimits

0x9722,	// (0x000168df) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001ca17) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001ca17) popup_note_image_window_t

0x958b,	// (0x00016748) bg_popup_window_pane_cp7_ParamLimits

0x958b,	// (0x00016748) bg_popup_window_pane_cp7

0x95bb,	// (0x00016778) popup_note_wait_window_g1_ParamLimits

0x95bb,	// (0x00016778) popup_note_wait_window_g1

0x95c7,	// (0x00016784) popup_note_wait_window_g2_ParamLimits

0x95c7,	// (0x00016784) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001ca00) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001ca00) popup_note_wait_window_g

0x95df,	// (0x0001679c) popup_note_wait_window_t1_ParamLimits

0x95df,	// (0x0001679c) popup_note_wait_window_t1

0x9606,	// (0x000167c3) popup_note_wait_window_t2_ParamLimits

0x9606,	// (0x000167c3) popup_note_wait_window_t2

0x9624,	// (0x000167e1) popup_note_wait_window_t3_ParamLimits

0x9624,	// (0x000167e1) popup_note_wait_window_t3

0x9637,	// (0x000167f4) popup_note_wait_window_t4_ParamLimits

0x9637,	// (0x000167f4) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001ca07) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001ca07) popup_note_wait_window_t

0x965c,	// (0x00016819) wait_bar_pane_ParamLimits

0x965c,	// (0x00016819) wait_bar_pane

0x33ca,	// (0x00010587) wait_anim_pane

0x33ca,	// (0x00010587) wait_border_pane

0x3251,	// (0x0001040e) wait_anim_pane_g1

0x3251,	// (0x0001040e) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c8bb) wait_anim_pane_g

0x952f,	// (0x000166ec) wait_border_pane_g1

0x953a,	// (0x000166f7) wait_border_pane_g2

0x9543,	// (0x00016700) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001c9f9) wait_border_pane_g

0x9399,	// (0x00016556) bg_popup_window_pane_cp16_ParamLimits

0x9399,	// (0x00016556) bg_popup_window_pane_cp16

0x9499,	// (0x00016656) indicator_popup_pane_cp4_ParamLimits

0x9499,	// (0x00016656) indicator_popup_pane_cp4

0x94ad,	// (0x0001666a) popup_query_data_window_t1_ParamLimits

0x94ad,	// (0x0001666a) popup_query_data_window_t1

0x94bf,	// (0x0001667c) popup_query_data_window_t2_ParamLimits

0x94bf,	// (0x0001667c) popup_query_data_window_t2

0x94d8,	// (0x00016695) popup_query_data_window_t3_ParamLimits

0x94d8,	// (0x00016695) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001c9f2) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001c9f2) popup_query_data_window_t

0x94f2,	// (0x000166af) query_popup_data_pane_ParamLimits

0x94f2,	// (0x000166af) query_popup_data_pane

0x9506,	// (0x000166c3) query_popup_data_pane_cp1_ParamLimits

0x9506,	// (0x000166c3) query_popup_data_pane_cp1

0x9399,	// (0x00016556) bg_popup_window_pane_cp10_ParamLimits

0x9399,	// (0x00016556) bg_popup_window_pane_cp10

0x93cb,	// (0x00016588) indicator_popup_pane_ParamLimits

0x93cb,	// (0x00016588) indicator_popup_pane

0x93ed,	// (0x000165aa) popup_query_code_window_t1_ParamLimits

0x93ed,	// (0x000165aa) popup_query_code_window_t1

0x9407,	// (0x000165c4) popup_query_code_window_t2_ParamLimits

0x9407,	// (0x000165c4) popup_query_code_window_t2

0x9450,	// (0x0001660d) popup_query_code_window_t3_ParamLimits

0x9450,	// (0x0001660d) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001c9eb) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001c9eb) popup_query_code_window_t

0x947f,	// (0x0001663c) query_popup_pane_ParamLimits

0x947f,	// (0x0001663c) query_popup_pane

0x370e,	// (0x000108cb) bg_popup_window_pane_cp15_ParamLimits

0x370e,	// (0x000108cb) bg_popup_window_pane_cp15

0x372e,	// (0x000108eb) indicator_popup_pane_cp1_ParamLimits

0x372e,	// (0x000108eb) indicator_popup_pane_cp1

0x3741,	// (0x000108fe) indicator_popup_pane_cp2_ParamLimits

0x3741,	// (0x000108fe) indicator_popup_pane_cp2

0x375c,	// (0x00010919) popup_query_data_code_window_g1_ParamLimits

0x375c,	// (0x00010919) popup_query_data_code_window_g1

0x376f,	// (0x0001092c) popup_query_data_code_window_t1_ParamLimits

0x376f,	// (0x0001092c) popup_query_data_code_window_t1

0x3781,	// (0x0001093e) popup_query_data_code_window_t2_ParamLimits

0x3781,	// (0x0001093e) popup_query_data_code_window_t2

0x3793,	// (0x00010950) popup_query_data_code_window_t3_ParamLimits

0x3793,	// (0x00010950) popup_query_data_code_window_t3

0x37a9,	// (0x00010966) popup_query_data_code_window_t4_ParamLimits

0x37a9,	// (0x00010966) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c747) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c747) popup_query_data_code_window_t

0x5df5,	// (0x00012fb2) list_single_midp_graphic_pane_g3

0x37c3,	// (0x00010980) query_popup_data_pane_cp2_ParamLimits

0x37d6,	// (0x00010993) query_popup_pane_cp2_ParamLimits

0x37d6,	// (0x00010993) query_popup_pane_cp2

0x33ca,	// (0x00010587) bg_popup_window_pane_cp11

0x9391,	// (0x0001654e) heading_pane_cp5

0x386c,	// (0x00010a29) listscroll_popup_info_pane

0x33ca,	// (0x00010587) input_focus_pane_cp3

0x37f1,	// (0x000109ae) query_popup_pane_t1

0x37ff,	// (0x000109bc) list_popup_info_pane_ParamLimits

0x37ff,	// (0x000109bc) list_popup_info_pane

0x380e,	// (0x000109cb) listscroll_popup_info_pane_g1

0x3816,	// (0x000109d3) scroll_pane_cp7

0x3820,	// (0x000109dd) popup_info_list_pane_t1_ParamLimits

0x3820,	// (0x000109dd) popup_info_list_pane_t1

0x383a,	// (0x000109f7) popup_info_list_pane_t2_ParamLimits

0x383a,	// (0x000109f7) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c750) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c750) popup_info_list_pane_t

0x33ca,	// (0x00010587) bg_popup_window_pane_cp12

0xa80d,	// (0x000179ca) find_popup_pane

0x3490,	// (0x0001064d) bg_popup_window_pane_cp3

0x3854,	// (0x00010a11) heading_pane_cp3

0x3860,	// (0x00010a1d) listscroll_popup_graphic_pane

0x33ca,	// (0x00010587) bg_popup_window_pane_cp4

0x746e,	// (0x0001462b) heading_pane_cp4

0x386c,	// (0x00010a29) listscroll_popup_colour_pane

0x7478,	// (0x00014635) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7478,	// (0x00014635) cell_large_graphic_colour_none_popup_pane

0x748c,	// (0x00014649) grid_large_graphic_colour_popup_pane_ParamLimits

0x748c,	// (0x00014649) grid_large_graphic_colour_popup_pane

0x74b8,	// (0x00014675) listscroll_popup_colour_pane_g1_ParamLimits

0x74b8,	// (0x00014675) listscroll_popup_colour_pane_g1

0x74cf,	// (0x0001468c) listscroll_popup_colour_pane_g2_ParamLimits

0x74cf,	// (0x0001468c) listscroll_popup_colour_pane_g2

0x74e6,	// (0x000146a3) listscroll_popup_colour_pane_g3_ParamLimits

0x74e6,	// (0x000146a3) listscroll_popup_colour_pane_g3

0x74f6,	// (0x000146b3) listscroll_popup_colour_pane_g4_ParamLimits

0x74f6,	// (0x000146b3) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c755) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c755) listscroll_popup_colour_pane_g

0x3874,	// (0x00010a31) scroll_pane_cp6_ParamLimits

0x3874,	// (0x00010a31) scroll_pane_cp6

0x750a,	// (0x000146c7) cell_large_graphic_colour_popup_pane_ParamLimits

0x750a,	// (0x000146c7) cell_large_graphic_colour_popup_pane

0x3886,	// (0x00010a43) cell_large_graphic_colour_none_popup_pane_t1

0x33ca,	// (0x00010587) grid_highlight_pane_cp5

0x3895,	// (0x00010a52) cell_large_graphic_colour_popup_pane_g1

0x389d,	// (0x00010a5a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c75e) cell_large_graphic_colour_popup_pane_g

0x38a5,	// (0x00010a62) cell_large_graphic_colour_popup_pane_g2_copy1

0x38ae,	// (0x00010a6b) grid_highlight_pane_cp4

0x38b6,	// (0x00010a73) bg_popup_window_pane_cp8_ParamLimits

0x38b6,	// (0x00010a73) bg_popup_window_pane_cp8

0x38d1,	// (0x00010a8e) popup_snote_single_text_window_g1_ParamLimits

0x38d1,	// (0x00010a8e) popup_snote_single_text_window_g1

0x38e3,	// (0x00010aa0) popup_snote_single_text_window_t1_ParamLimits

0x38e3,	// (0x00010aa0) popup_snote_single_text_window_t1

0x38f6,	// (0x00010ab3) popup_snote_single_text_window_t2_ParamLimits

0x38f6,	// (0x00010ab3) popup_snote_single_text_window_t2

0x3909,	// (0x00010ac6) popup_snote_single_text_window_t3_ParamLimits

0x3909,	// (0x00010ac6) popup_snote_single_text_window_t3

0x3942,	// (0x00010aff) popup_snote_single_text_window_t4_ParamLimits

0x3942,	// (0x00010aff) popup_snote_single_text_window_t4

0x3976,	// (0x00010b33) popup_snote_single_text_window_t5_ParamLimits

0x3976,	// (0x00010b33) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c763) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c763) popup_snote_single_text_window_t

0x39a5,	// (0x00010b62) bg_popup_window_pane_cp9_ParamLimits

0x39a5,	// (0x00010b62) bg_popup_window_pane_cp9

0x38d1,	// (0x00010a8e) popup_snote_single_graphic_window_g1_ParamLimits

0x38d1,	// (0x00010a8e) popup_snote_single_graphic_window_g1

0x39b3,	// (0x00010b70) popup_snote_single_graphic_window_g2_ParamLimits

0x39b3,	// (0x00010b70) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c76e) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c76e) popup_snote_single_graphic_window_g

0x39bf,	// (0x00010b7c) popup_snote_single_graphic_window_t1_ParamLimits

0x39bf,	// (0x00010b7c) popup_snote_single_graphic_window_t1

0x39d2,	// (0x00010b8f) popup_snote_single_graphic_window_t2_ParamLimits

0x39d2,	// (0x00010b8f) popup_snote_single_graphic_window_t2

0x39e5,	// (0x00010ba2) popup_snote_single_graphic_window_t3_ParamLimits

0x39e5,	// (0x00010ba2) popup_snote_single_graphic_window_t3

0x3a1e,	// (0x00010bdb) popup_snote_single_graphic_window_t4_ParamLimits

0x3a1e,	// (0x00010bdb) popup_snote_single_graphic_window_t4

0x3a52,	// (0x00010c0f) popup_snote_single_graphic_window_t5_ParamLimits

0x3a52,	// (0x00010c0f) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c773) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c773) popup_snote_single_graphic_window_t

0xa74b,	// (0x00017908) grid_graphic_popup_pane_ParamLimits

0xa74b,	// (0x00017908) grid_graphic_popup_pane

0xa779,	// (0x00017936) listscroll_popup_graphic_pane_g1_ParamLimits

0xa779,	// (0x00017936) listscroll_popup_graphic_pane_g1

0xa78d,	// (0x0001794a) listscroll_popup_graphic_pane_g2_ParamLimits

0xa78d,	// (0x0001794a) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001cb68) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001cb68) listscroll_popup_graphic_pane_g

0xa7a1,	// (0x0001795e) scroll_pane_cp5

0xa6f3,	// (0x000178b0) cell_graphic_popup_pane_ParamLimits

0xa6f3,	// (0x000178b0) cell_graphic_popup_pane

0xa6d4,	// (0x00017891) cell_graphic_popup_pane_g1

0xa6dc,	// (0x00017899) cell_graphic_popup_pane_g2

0x38a5,	// (0x00010a62) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001cb61) cell_graphic_popup_pane_g

0xa6e5,	// (0x000178a2) cell_graphic_popup_pane_t2

0x38ae,	// (0x00010a6b) grid_highlight_pane_cp3

0x3a93,	// (0x00010c50) list_gen_pane_ParamLimits

0x3a93,	// (0x00010c50) list_gen_pane

0x3abb,	// (0x00010c78) scroll_pane

0xa62c,	// (0x000177e9) bg_list_pane_g1_ParamLimits

0xa62c,	// (0x000177e9) bg_list_pane_g1

0xa649,	// (0x00017806) bg_list_pane_g2_ParamLimits

0xa649,	// (0x00017806) bg_list_pane_g2

0xa65e,	// (0x0001781b) bg_list_pane_g3_ParamLimits

0xa65e,	// (0x0001781b) bg_list_pane_g3

0xa672,	// (0x0001782f) bg_list_pane_g4_ParamLimits

0xa672,	// (0x0001782f) bg_list_pane_g4

0xa686,	// (0x00017843) bg_list_pane_g5_ParamLimits

0xa686,	// (0x00017843) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001cb56) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001cb56) bg_list_pane_g

0xa55b,	// (0x00017718) list_double2_graphic_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017718) list_double2_graphic_large_graphic_pane

0xa55b,	// (0x00017718) list_double2_graphic_pane_ParamLimits

0xa55b,	// (0x00017718) list_double2_graphic_pane

0xa55b,	// (0x00017718) list_double2_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017718) list_double2_large_graphic_pane

0xa55b,	// (0x00017718) list_double2_pane_ParamLimits

0xa55b,	// (0x00017718) list_double2_pane

0xa55b,	// (0x00017718) list_double_graphic_heading_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_graphic_heading_pane

0xa55b,	// (0x00017718) list_double_graphic_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_graphic_pane

0xa55b,	// (0x00017718) list_double_heading_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_heading_pane

0xa55b,	// (0x00017718) list_double_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_large_graphic_pane

0xa55b,	// (0x00017718) list_double_number_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_number_pane

0xa55b,	// (0x00017718) list_double_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_pane

0xa55b,	// (0x00017718) list_double_time_pane_ParamLimits

0xa55b,	// (0x00017718) list_double_time_pane

0xa55b,	// (0x00017718) list_setting_number_pane_ParamLimits

0xa55b,	// (0x00017718) list_setting_number_pane

0xa55b,	// (0x00017718) list_setting_pane_ParamLimits

0xa55b,	// (0x00017718) list_setting_pane

0xa5bc,	// (0x00017779) list_single_2graphic_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_2graphic_pane

0xa5bc,	// (0x00017779) list_single_graphic_heading_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_graphic_heading_pane

0xa5bc,	// (0x00017779) list_single_graphic_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_graphic_pane

0xa5bc,	// (0x00017779) list_single_heading_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_heading_pane

0xa614,	// (0x000177d1) list_single_large_graphic_pane_ParamLimits

0xa614,	// (0x000177d1) list_single_large_graphic_pane

0xa5bc,	// (0x00017779) list_single_number_heading_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_number_heading_pane

0xa5bc,	// (0x00017779) list_single_number_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_number_pane

0xa5bc,	// (0x00017779) list_single_pane_ParamLimits

0xa5bc,	// (0x00017779) list_single_pane

0x33ca,	// (0x00010587) list_highlight_pane_cp1

0x3afb,	// (0x00010cb8) list_single_pane_g1_ParamLimits

0x3afb,	// (0x00010cb8) list_single_pane_g1

0x7539,	// (0x000146f6) list_single_pane_g2_ParamLimits

0x7539,	// (0x000146f6) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c785) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c785) list_single_pane_g

0xa514,	// (0x000176d1) list_single_pane_t1_ParamLimits

0xa514,	// (0x000176d1) list_single_pane_t1

0x3afb,	// (0x00010cb8) list_single_number_pane_g1_ParamLimits

0x3afb,	// (0x00010cb8) list_single_number_pane_g1

0x7539,	// (0x000146f6) list_single_number_pane_g2_ParamLimits

0x7539,	// (0x000146f6) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c785) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c785) list_single_number_pane_g

0xa27c,	// (0x00017439) list_single_number_pane_t1_ParamLimits

0xa27c,	// (0x00017439) list_single_number_pane_t1

0xa292,	// (0x0001744f) list_single_number_pane_t2_ParamLimits

0xa292,	// (0x0001744f) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001cb17) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001cb17) list_single_number_pane_t

0x3aef,	// (0x00010cac) list_single_graphic_pane_g1_ParamLimits

0x3aef,	// (0x00010cac) list_single_graphic_pane_g1

0x3afb,	// (0x00010cb8) list_single_graphic_pane_g2_ParamLimits

0x3afb,	// (0x00010cb8) list_single_graphic_pane_g2

0x7539,	// (0x000146f6) list_single_graphic_pane_g3_ParamLimits

0x7539,	// (0x000146f6) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c77e) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c77e) list_single_graphic_pane_g

0x7545,	// (0x00014702) list_single_graphic_pane_t1_ParamLimits

0x7545,	// (0x00014702) list_single_graphic_pane_t1

0x3afb,	// (0x00010cb8) list_single_heading_pane_g1_ParamLimits

0x3afb,	// (0x00010cb8) list_single_heading_pane_g1

0x7539,	// (0x000146f6) list_single_heading_pane_g2_ParamLimits

0x7539,	// (0x000146f6) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c785) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c785) list_single_heading_pane_g

0x755b,	// (0x00014718) list_single_heading_pane_t1_ParamLimits

0x755b,	// (0x00014718) list_single_heading_pane_t1

0x7571,	// (0x0001472e) list_single_heading_pane_t2_ParamLimits

0x7571,	// (0x0001472e) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c78a) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c78a) list_single_heading_pane_t

0x3afb,	// (0x00010cb8) list_single_number_heading_pane_g1_ParamLimits

0x3afb,	// (0x00010cb8) list_single_number_heading_pane_g1

0x7539,	// (0x000146f6) list_single_number_heading_pane_g2_ParamLimits

0x7539,	// (0x000146f6) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c785) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c785) list_single_number_heading_pane_g

0x755b,	// (0x00014718) list_single_number_heading_pane_t1_ParamLimits

0x755b,	// (0x00014718) list_single_number_heading_pane_t1

0x7583,	// (0x00014740) list_single_number_heading_pane_t2_ParamLimits

0x7583,	// (0x00014740) list_single_number_heading_pane_t2

0x7595,	// (0x00014752) list_single_number_heading_pane_t3_ParamLimits

0x7595,	// (0x00014752) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c78f) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c78f) list_single_number_heading_pane_t

0x75a7,	// (0x00014764) list_single_graphic_heading_pane_g1_ParamLimits

0x75a7,	// (0x00014764) list_single_graphic_heading_pane_g1

0x75b3,	// (0x00014770) list_single_graphic_heading_pane_g4_ParamLimits

0x75b3,	// (0x00014770) list_single_graphic_heading_pane_g4

0x7539,	// (0x000146f6) list_single_graphic_heading_pane_g5_ParamLimits

0x7539,	// (0x000146f6) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c796) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c796) list_single_graphic_heading_pane_g

0x755b,	// (0x00014718) list_single_graphic_heading_pane_t1_ParamLimits

0x755b,	// (0x00014718) list_single_graphic_heading_pane_t1

0x75c4,	// (0x00014781) list_single_graphic_heading_pane_t2_ParamLimits

0x75c4,	// (0x00014781) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c79d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c79d) list_single_graphic_heading_pane_t

0x75d6,	// (0x00014793) list_single_large_graphic_pane_g1_ParamLimits

0x75d6,	// (0x00014793) list_single_large_graphic_pane_g1

0x75e2,	// (0x0001479f) list_single_large_graphic_pane_g2_ParamLimits

0x75e2,	// (0x0001479f) list_single_large_graphic_pane_g2

0x75ee,	// (0x000147ab) list_single_large_graphic_pane_g3_ParamLimits

0x75ee,	// (0x000147ab) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c7a2) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c7a2) list_single_large_graphic_pane_g

0x953a,	// (0x000166f7) wait_border_pane_g2_copy1

0x75fa,	// (0x000147b7) list_single_large_graphic_pane_g4_cp2

0x7602,	// (0x000147bf) list_single_large_graphic_pane_t1_ParamLimits

0x7602,	// (0x000147bf) list_single_large_graphic_pane_t1

0x7618,	// (0x000147d5) list_double_pane_g1_ParamLimits

0x7618,	// (0x000147d5) list_double_pane_g1

0x7624,	// (0x000147e1) list_double_pane_g2_ParamLimits

0x7624,	// (0x000147e1) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c7a9) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c7a9) list_double_pane_g

0x7630,	// (0x000147ed) list_double_pane_t1_ParamLimits

0x7630,	// (0x000147ed) list_double_pane_t1

0x7646,	// (0x00014803) list_double_pane_t2_ParamLimits

0x7646,	// (0x00014803) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c7ae) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c7ae) list_double_pane_t

0x7658,	// (0x00014815) list_double2_pane_g1_ParamLimits

0x7658,	// (0x00014815) list_double2_pane_g1

0x7669,	// (0x00014826) list_double2_pane_g2_ParamLimits

0x7669,	// (0x00014826) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c7b3) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c7b3) list_double2_pane_g

0x7675,	// (0x00014832) list_double2_pane_t1_ParamLimits

0x7675,	// (0x00014832) list_double2_pane_t1

0x768b,	// (0x00014848) list_double2_pane_t2_ParamLimits

0x768b,	// (0x00014848) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c7b8) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c7b8) list_double2_pane_t

0x7618,	// (0x000147d5) list_double_number_pane_g1_ParamLimits

0x7618,	// (0x000147d5) list_double_number_pane_g1

0x7624,	// (0x000147e1) list_double_number_pane_g2_ParamLimits

0x7624,	// (0x000147e1) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c7a9) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c7a9) list_double_number_pane_g

0x769d,	// (0x0001485a) list_double_number_pane_t1_ParamLimits

0x769d,	// (0x0001485a) list_double_number_pane_t1

0x76af,	// (0x0001486c) list_double_number_pane_t2_ParamLimits

0x76af,	// (0x0001486c) list_double_number_pane_t2

0x76c5,	// (0x00014882) list_double_number_pane_t3_ParamLimits

0x76c5,	// (0x00014882) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c7bd) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c7bd) list_double_number_pane_t

0x76d7,	// (0x00014894) list_double_graphic_pane_g1_ParamLimits

0x76d7,	// (0x00014894) list_double_graphic_pane_g1

0x76e3,	// (0x000148a0) list_double_graphic_pane_g2_ParamLimits

0x76e3,	// (0x000148a0) list_double_graphic_pane_g2

0x3e01,	// (0x00010fbe) list_double_graphic_pane_g3_ParamLimits

0x3e01,	// (0x00010fbe) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c7c4) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c7c4) list_double_graphic_pane_g

0x76fe,	// (0x000148bb) list_double_graphic_pane_t1_ParamLimits

0x76fe,	// (0x000148bb) list_double_graphic_pane_t1

0x7714,	// (0x000148d1) list_double_graphic_pane_t2_ParamLimits

0x7714,	// (0x000148d1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c7cd) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c7cd) list_double_graphic_pane_t

0x7726,	// (0x000148e3) list_double2_graphic_pane_g1_ParamLimits

0x7726,	// (0x000148e3) list_double2_graphic_pane_g1

0x7732,	// (0x000148ef) list_double2_graphic_pane_g2_ParamLimits

0x7732,	// (0x000148ef) list_double2_graphic_pane_g2

0x7669,	// (0x00014826) list_double2_graphic_pane_g3_ParamLimits

0x7669,	// (0x00014826) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c7d2) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c7d2) list_double2_graphic_pane_g

0x773e,	// (0x000148fb) list_double2_graphic_pane_t1_ParamLimits

0x773e,	// (0x000148fb) list_double2_graphic_pane_t1

0x7754,	// (0x00014911) list_double2_graphic_pane_t2_ParamLimits

0x7754,	// (0x00014911) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c7d9) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c7d9) list_double2_graphic_pane_t

0x7766,	// (0x00014923) list_double_large_graphic_pane_g1_ParamLimits

0x7766,	// (0x00014923) list_double_large_graphic_pane_g1

0x7791,	// (0x0001494e) list_double_large_graphic_pane_g2_ParamLimits

0x7791,	// (0x0001494e) list_double_large_graphic_pane_g2

0x7624,	// (0x000147e1) list_double_large_graphic_pane_g3_ParamLimits

0x7624,	// (0x000147e1) list_double_large_graphic_pane_g3

0x77a2,	// (0x0001495f) list_double_large_graphic_pane_g4_ParamLimits

0x77a2,	// (0x0001495f) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c7de) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c7de) list_double_large_graphic_pane_g

0x77b5,	// (0x00014972) list_double_large_graphic_pane_t1_ParamLimits

0x77b5,	// (0x00014972) list_double_large_graphic_pane_t1

0x77ce,	// (0x0001498b) list_double_large_graphic_pane_t2_ParamLimits

0x77ce,	// (0x0001498b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c7e9) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c7e9) list_double_large_graphic_pane_t

0x77e0,	// (0x0001499d) list_double2_large_graphic_pane_g1_ParamLimits

0x77e0,	// (0x0001499d) list_double2_large_graphic_pane_g1

0x7658,	// (0x00014815) list_double2_large_graphic_pane_g2_ParamLimits

0x7658,	// (0x00014815) list_double2_large_graphic_pane_g2

0x7669,	// (0x00014826) list_double2_large_graphic_pane_g3_ParamLimits

0x7669,	// (0x00014826) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c7ee) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c7ee) list_double2_large_graphic_pane_g

0x77ec,	// (0x000149a9) list_double2_large_graphic_pane_t1_ParamLimits

0x77ec,	// (0x000149a9) list_double2_large_graphic_pane_t1

0x7802,	// (0x000149bf) list_double2_large_graphic_pane_t2_ParamLimits

0x7802,	// (0x000149bf) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c7f5) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c7f5) list_double2_large_graphic_pane_t

0x7814,	// (0x000149d1) list_double_heading_pane_g1_ParamLimits

0x7814,	// (0x000149d1) list_double_heading_pane_g1

0x7825,	// (0x000149e2) list_double_heading_pane_g2_ParamLimits

0x7825,	// (0x000149e2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c7fa) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c7fa) list_double_heading_pane_g

0x7831,	// (0x000149ee) list_double_heading_pane_t1_ParamLimits

0x7831,	// (0x000149ee) list_double_heading_pane_t1

0x7847,	// (0x00014a04) list_double_heading_pane_t2_ParamLimits

0x7847,	// (0x00014a04) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c7ff) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c7ff) list_double_heading_pane_t

0x3b07,	// (0x00010cc4) list_double_graphic_heading_pane_g1_ParamLimits

0x3b07,	// (0x00010cc4) list_double_graphic_heading_pane_g1

0x7814,	// (0x000149d1) list_double_graphic_heading_pane_g2_ParamLimits

0x7814,	// (0x000149d1) list_double_graphic_heading_pane_g2

0x7825,	// (0x000149e2) list_double_graphic_heading_pane_g3_ParamLimits

0x7825,	// (0x000149e2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c804) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c804) list_double_graphic_heading_pane_g

0x7859,	// (0x00014a16) list_double_graphic_heading_pane_t1_ParamLimits

0x7859,	// (0x00014a16) list_double_graphic_heading_pane_t1

0x786f,	// (0x00014a2c) list_double_graphic_heading_pane_t2_ParamLimits

0x786f,	// (0x00014a2c) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c80b) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c80b) list_double_graphic_heading_pane_t

0x7791,	// (0x0001494e) list_double_time_pane_g1_ParamLimits

0x7791,	// (0x0001494e) list_double_time_pane_g1

0x7624,	// (0x000147e1) list_double_time_pane_g2_ParamLimits

0x7624,	// (0x000147e1) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c810) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c810) list_double_time_pane_g

0x7881,	// (0x00014a3e) list_double_time_pane_t1_ParamLimits

0x7881,	// (0x00014a3e) list_double_time_pane_t1

0x7897,	// (0x00014a54) list_double_time_pane_t2_ParamLimits

0x7897,	// (0x00014a54) list_double_time_pane_t2

0x78a9,	// (0x00014a66) list_double_time_pane_t3_ParamLimits

0x78a9,	// (0x00014a66) list_double_time_pane_t3

0x78bb,	// (0x00014a78) list_double_time_pane_t4_ParamLimits

0x78bb,	// (0x00014a78) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c815) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c815) list_double_time_pane_t

0x7732,	// (0x000148ef) list_setting_pane_g1_ParamLimits

0x7732,	// (0x000148ef) list_setting_pane_g1

0x7669,	// (0x00014826) list_setting_pane_g2_ParamLimits

0x7669,	// (0x00014826) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c81e) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c81e) list_setting_pane_g

0x78cd,	// (0x00014a8a) list_setting_pane_t1_ParamLimits

0x78cd,	// (0x00014a8a) list_setting_pane_t1

0x78e4,	// (0x00014aa1) list_setting_pane_t2_ParamLimits

0x78e4,	// (0x00014aa1) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c823) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c823) list_setting_pane_t

0x7923,	// (0x00014ae0) set_value_pane_cp_ParamLimits

0x7923,	// (0x00014ae0) set_value_pane_cp

0x7732,	// (0x000148ef) list_setting_number_pane_g1_ParamLimits

0x7732,	// (0x000148ef) list_setting_number_pane_g1

0x7669,	// (0x00014826) list_setting_number_pane_g2_ParamLimits

0x7669,	// (0x00014826) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c81e) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c81e) list_setting_number_pane_g

0x7931,	// (0x00014aee) list_setting_number_pane_t1_ParamLimits

0x7931,	// (0x00014aee) list_setting_number_pane_t1

0x7945,	// (0x00014b02) list_setting_number_pane_t2_ParamLimits

0x7945,	// (0x00014b02) list_setting_number_pane_t2

0x795c,	// (0x00014b19) list_setting_number_pane_t3_ParamLimits

0x795c,	// (0x00014b19) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c82a) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c82a) list_setting_number_pane_t

0x7923,	// (0x00014ae0) set_value_pane_ParamLimits

0x7923,	// (0x00014ae0) set_value_pane

0x3b28,	// (0x00010ce5) bg_set_opt_pane_ParamLimits

0x3b28,	// (0x00010ce5) bg_set_opt_pane

0x3b49,	// (0x00010d06) set_value_pane_t1

0x3b57,	// (0x00010d14) slider_set_pane_cp3

0x3b60,	// (0x00010d1d) volume_small_pane_cp

0x3b69,	// (0x00010d26) list_form_gen_pane

0x3b72,	// (0x00010d2f) scroll_pane_cp8

0x799f,	// (0x00014b5c) form_field_data_pane_ParamLimits

0x799f,	// (0x00014b5c) form_field_data_pane

0x79bd,	// (0x00014b7a) form_field_data_wide_pane_ParamLimits

0x79bd,	// (0x00014b7a) form_field_data_wide_pane

0x79e4,	// (0x00014ba1) form_field_popup_pane_ParamLimits

0x79e4,	// (0x00014ba1) form_field_popup_pane

0x3b93,	// (0x00010d50) form_field_popup_wide_pane_ParamLimits

0x3b93,	// (0x00010d50) form_field_popup_wide_pane

0x3bb4,	// (0x00010d71) form_field_slider_pane_ParamLimits

0x3bb4,	// (0x00010d71) form_field_slider_pane

0x3bc7,	// (0x00010d84) form_field_slider_wide_pane_ParamLimits

0x3bc7,	// (0x00010d84) form_field_slider_wide_pane

0x3bda,	// (0x00010d97) data_form_pane

0x7a10,	// (0x00014bcd) form_field_data_pane_t1

0x3be6,	// (0x00010da3) input_focus_pane

0x3bf4,	// (0x00010db1) data_form_wide_pane

0x3c31,	// (0x00010dee) form_field_data_wide_pane_t1

0x38c3,	// (0x00010a80) input_focus_pane_cp6

0x7a2a,	// (0x00014be7) form_field_popup_pane_t1

0x3be6,	// (0x00010da3) input_focus_pane_cp7

0x3c53,	// (0x00010e10) list_form_pane

0x3c67,	// (0x00010e24) form_field_popup_wide_pane_t1

0x3be6,	// (0x00010da3) input_focus_pane_cp8

0x3c7c,	// (0x00010e39) list_form_wide_pane

0x7a4c,	// (0x00014c09) form_field_slider_pane_t1_ParamLimits

0x7a4c,	// (0x00014c09) form_field_slider_pane_t1

0x7a60,	// (0x00014c1d) form_field_slider_pane_t2_ParamLimits

0x7a60,	// (0x00014c1d) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c83a) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c83a) form_field_slider_pane_t

0x3478,	// (0x00010635) input_focus_pane_cp9_ParamLimits

0x3478,	// (0x00010635) input_focus_pane_cp9

0x7a72,	// (0x00014c2f) slider_cont_pane_ParamLimits

0x7a72,	// (0x00014c2f) slider_cont_pane

0x3c8b,	// (0x00010e48) form_field_slider_wide_pane_t1_ParamLimits

0x3c8b,	// (0x00010e48) form_field_slider_wide_pane_t1

0x3c9d,	// (0x00010e5a) form_field_slider_wide_pane_t2_ParamLimits

0x3c9d,	// (0x00010e5a) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c83f) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c83f) form_field_slider_wide_pane_t

0x3478,	// (0x00010635) input_focus_pane_cp10_ParamLimits

0x3478,	// (0x00010635) input_focus_pane_cp10

0x7a86,	// (0x00014c43) slider_cont_pane_cp1_ParamLimits

0x7a86,	// (0x00014c43) slider_cont_pane_cp1

0x7a9a,	// (0x00014c57) slider_form_pane_cp

0x3caf,	// (0x00010e6c) input_focus_pane_g1

0x3cb7,	// (0x00010e74) input_focus_pane_g2

0x3cbf,	// (0x00010e7c) input_focus_pane_g3

0x3cc7,	// (0x00010e84) input_focus_pane_g4

0x3ccf,	// (0x00010e8c) input_focus_pane_g5

0x3cd7,	// (0x00010e94) input_focus_pane_g6

0x3cdf,	// (0x00010e9c) input_focus_pane_g7

0x3ce7,	// (0x00010ea4) input_focus_pane_g8

0x3cef,	// (0x00010eac) input_focus_pane_g9

0x3251,	// (0x0001040e) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c844) input_focus_pane_g

0x9543,	// (0x00016700) wait_border_pane_g3_copy1

0x7aa2,	// (0x00014c5f) data_form_pane_t1

0x3251,	// (0x0001040e) wait_anim_pane_g1_copy1

0xa4f5,	// (0x000176b2) data_form_wide_pane_t1

0x3cf7,	// (0x00010eb4) list_form_graphic_pane_cp_ParamLimits

0x3cf7,	// (0x00010eb4) list_form_graphic_pane_cp

0xa4ca,	// (0x00017687) slider_form_pane_g1

0xa4d3,	// (0x00017690) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001cb47) slider_form_pane_g

0x3cf7,	// (0x00010eb4) list_form_graphic_pane_ParamLimits

0x3cf7,	// (0x00010eb4) list_form_graphic_pane

0x3d09,	// (0x00010ec6) list_form_graphic_pane_g1

0x3d11,	// (0x00010ece) list_form_graphic_pane_t1_ParamLimits

0x3d11,	// (0x00010ece) list_form_graphic_pane_t1

0x3490,	// (0x0001064d) list_highlight_pane_cp5_ParamLimits

0x3490,	// (0x0001064d) list_highlight_pane_cp5

0x7ac1,	// (0x00014c7e) find_pane_g1

0x3d26,	// (0x00010ee3) input_find_pane

0x7aca,	// (0x00014c87) input_find_pane_g1_ParamLimits

0x7aca,	// (0x00014c87) input_find_pane_g1

0x7ad6,	// (0x00014c93) input_find_pane_t1_ParamLimits

0x7ad6,	// (0x00014c93) input_find_pane_t1

0x7aeb,	// (0x00014ca8) input_find_pane_t2_ParamLimits

0x7aeb,	// (0x00014ca8) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c859) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c859) input_find_pane_t

0x3d2f,	// (0x00010eec) input_focus_pane_cp5_ParamLimits

0x3d2f,	// (0x00010eec) input_focus_pane_cp5

0x3d3d,	// (0x00010efa) bg_popup_window_pane_cp2_ParamLimits

0x3d3d,	// (0x00010efa) bg_popup_window_pane_cp2

0x3d4a,	// (0x00010f07) listscroll_menu_pane_ParamLimits

0x3d4a,	// (0x00010f07) listscroll_menu_pane

0x7b0c,	// (0x00014cc9) popup_submenu_window_ParamLimits

0x7b0c,	// (0x00014cc9) popup_submenu_window

0x3d56,	// (0x00010f13) find_popup_pane_g1

0x3d5e,	// (0x00010f1b) input_popup_find_pane_cp

0x3d2f,	// (0x00010eec) input_focus_pane_cp4_ParamLimits

0x3d2f,	// (0x00010eec) input_focus_pane_cp4

0x3d68,	// (0x00010f25) input_popup_find_pane_t1_ParamLimits

0x3d68,	// (0x00010f25) input_popup_find_pane_t1

0x33ca,	// (0x00010587) bg_popup_sub_pane_cp

0x3d96,	// (0x00010f53) listscroll_popup_sub_pane

0x3d9e,	// (0x00010f5b) list_submenu_pane_ParamLimits

0x3d9e,	// (0x00010f5b) list_submenu_pane

0x3daf,	// (0x00010f6c) scroll_pane_cp4

0x3db7,	// (0x00010f74) list_single_popup_submenu_pane_ParamLimits

0x3db7,	// (0x00010f74) list_single_popup_submenu_pane

0x3dcc,	// (0x00010f89) list_single_popup_submenu_pane_g1

0x3dd4,	// (0x00010f91) list_single_popup_submenu_pane_t1_ParamLimits

0x3dd4,	// (0x00010f91) list_single_popup_submenu_pane_t1

0x3490,	// (0x0001064d) bg_active_tab_pane_cp1_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp1

0x7b4a,	// (0x00014d07) tabs_2_active_pane_g1

0x7b52,	// (0x00014d0f) tabs_2_active_pane_t1

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp1_ParamLimits

0x3490,	// (0x0001064d) bg_passive_tab_pane_cp1

0x7b4a,	// (0x00014d07) tabs_2_passive_pane_g1

0x7b52,	// (0x00014d0f) tabs_2_passive_pane_t1

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp4

0x7b64,	// (0x00014d21) tabs_2_long_active_pane_t1

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp4

0x5dfd,	// (0x00012fba) list_single_midp_graphic_pane_g4_ParamLimits

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp5

0x7b83,	// (0x00014d40) tabs_3_long_active_pane_t1

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp5

0x5dfd,	// (0x00012fba) list_single_midp_graphic_pane_g4

0x3490,	// (0x0001064d) bg_popup_window_pane_cp13_ParamLimits

0x3490,	// (0x0001064d) bg_popup_window_pane_cp13

0x3df2,	// (0x00010faf) listscroll_popup_fast_pane_ParamLimits

0x3df2,	// (0x00010faf) listscroll_popup_fast_pane

0x3e1b,	// (0x00010fd8) grid_popup_fast_pane_ParamLimits

0x3e1b,	// (0x00010fd8) grid_popup_fast_pane

0x3e2d,	// (0x00010fea) scroll_pane_cp9_ParamLimits

0x3e2d,	// (0x00010fea) scroll_pane_cp9

0xc41c,	// (0x000195d9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc41c,	// (0x000195d9) list_single_graphic_hl_pane_t1_cp2

0x3e51,	// (0x0001100e) input_focus_pane_cp20_ParamLimits

0x3e51,	// (0x0001100e) input_focus_pane_cp20

0x3e5f,	// (0x0001101c) query_popup_data_pane_t1_ParamLimits

0x3e5f,	// (0x0001101c) query_popup_data_pane_t1

0x3e72,	// (0x0001102f) query_popup_data_pane_t2_ParamLimits

0x3e72,	// (0x0001102f) query_popup_data_pane_t2

0x3eb8,	// (0x00011075) query_popup_data_pane_t3_ParamLimits

0x3eb8,	// (0x00011075) query_popup_data_pane_t3

0x3ef9,	// (0x000110b6) query_popup_data_pane_t4_ParamLimits

0x3ef9,	// (0x000110b6) query_popup_data_pane_t4

0x3f35,	// (0x000110f2) query_popup_data_pane_t5_ParamLimits

0x3f35,	// (0x000110f2) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c85e) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c85e) query_popup_data_pane_t

0x3caf,	// (0x00010e6c) bg_set_opt_pane_g1

0x3cb7,	// (0x00010e74) bg_set_opt_pane_g2

0x3cbf,	// (0x00010e7c) bg_set_opt_pane_g3

0x3cc7,	// (0x00010e84) bg_set_opt_pane_g4

0x3ccf,	// (0x00010e8c) bg_set_opt_pane_g5

0x3cd7,	// (0x00010e94) bg_set_opt_pane_g6

0x3cdf,	// (0x00010e9c) bg_set_opt_pane_g7

0x3ce7,	// (0x00010ea4) bg_set_opt_pane_g8

0x3cef,	// (0x00010eac) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c869) bg_set_opt_pane_g

0x59fd,	// (0x00012bba) control_top_pane_stacon_ParamLimits

0x59fd,	// (0x00012bba) control_top_pane_stacon

0x5a50,	// (0x00012c0d) signal_pane_stacon_ParamLimits

0x5a50,	// (0x00012c0d) signal_pane_stacon

0x465e,	// (0x0001181b) stacon_top_pane_g1_ParamLimits

0x465e,	// (0x0001181b) stacon_top_pane_g1

0x5a75,	// (0x00012c32) title_pane_stacon_ParamLimits

0x5a75,	// (0x00012c32) title_pane_stacon

0x5a9f,	// (0x00012c5c) uni_indicator_pane_stacon_ParamLimits

0x5a9f,	// (0x00012c5c) uni_indicator_pane_stacon

0x5ab7,	// (0x00012c74) battery_pane_stacon_ParamLimits

0x5ab7,	// (0x00012c74) battery_pane_stacon

0x5afb,	// (0x00012cb8) control_bottom_pane_stacon_ParamLimits

0x5afb,	// (0x00012cb8) control_bottom_pane_stacon

0x5b1e,	// (0x00012cdb) navi_pane_stacon_ParamLimits

0x5b1e,	// (0x00012cdb) navi_pane_stacon

0x474c,	// (0x00011909) stacon_bottom_pane_g1_ParamLimits

0x474c,	// (0x00011909) stacon_bottom_pane_g1

0x575a,	// (0x00012917) aid_levels_signal_lsc_ParamLimits

0x575a,	// (0x00012917) aid_levels_signal_lsc

0x5771,	// (0x0001292e) signal_pane_stacon_g1_ParamLimits

0x5771,	// (0x0001292e) signal_pane_stacon_g1

0x5785,	// (0x00012942) signal_pane_stacon_g2_ParamLimits

0x5785,	// (0x00012942) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c87c) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c87c) signal_pane_stacon_g

0x57ba,	// (0x00012977) title_pane_stacon_t1_ParamLimits

0x57ba,	// (0x00012977) title_pane_stacon_t1

0x4012,	// (0x000111cf) uni_indicator_pane_stacon_g1

0x401c,	// (0x000111d9) uni_indicator_pane_stacon_g2

0x3ffe,	// (0x000111bb) uni_indicator_pane_stacon_g3

0x4008,	// (0x000111c5) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c888) uni_indicator_pane_stacon_g

0x57df,	// (0x0001299c) control_top_pane_stacon_g1

0x57e7,	// (0x000129a4) control_top_pane_stacon_t1_ParamLimits

0x57e7,	// (0x000129a4) control_top_pane_stacon_t1

0x581e,	// (0x000129db) aid_levels_battery_lsc_ParamLimits

0x581e,	// (0x000129db) aid_levels_battery_lsc

0x5836,	// (0x000129f3) battery_pane_stacon_g1_ParamLimits

0x5836,	// (0x000129f3) battery_pane_stacon_g1

0x5849,	// (0x00012a06) battery_pane_stacon_g2_ParamLimits

0x5849,	// (0x00012a06) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c891) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c891) battery_pane_stacon_g

0x5887,	// (0x00012a44) navi_icon_pane_stacon

0x589b,	// (0x00012a58) navi_navi_pane_stacon

0x5887,	// (0x00012a44) navi_text_pane_stacon

0x57df,	// (0x0001299c) control_bottom_pane_stacon_g1

0x58b1,	// (0x00012a6e) control_bottom_pane_stacon_t1_ParamLimits

0x58b1,	// (0x00012a6e) control_bottom_pane_stacon_t1

0x7b95,	// (0x00014d52) grid_app_pane_ParamLimits

0x7b95,	// (0x00014d52) grid_app_pane

0x7bb9,	// (0x00014d76) scroll_pane_cp15_ParamLimits

0x7bb9,	// (0x00014d76) scroll_pane_cp15

0x7bcc,	// (0x00014d89) cell_app_pane_ParamLimits

0x7bcc,	// (0x00014d89) cell_app_pane

0x7bf8,	// (0x00014db5) cell_app_pane_g1_ParamLimits

0x7bf8,	// (0x00014db5) cell_app_pane_g1

0x4149,	// (0x00011306) cell_app_pane_g2_ParamLimits

0x4149,	// (0x00011306) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c896) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c896) cell_app_pane_g

0x4155,	// (0x00011312) cell_app_pane_t1_ParamLimits

0x4155,	// (0x00011312) cell_app_pane_t1

0x416c,	// (0x00011329) grid_highlight_pane_ParamLimits

0x416c,	// (0x00011329) grid_highlight_pane

0x3caf,	// (0x00010e6c) cell_highlight_pane_g1

0x3cb7,	// (0x00010e74) cell_highlight_pane_g2

0x3cbf,	// (0x00010e7c) cell_highlight_pane_g3

0x3cc7,	// (0x00010e84) cell_highlight_pane_g4

0x3ccf,	// (0x00010e8c) cell_highlight_pane_g5

0x3cd7,	// (0x00010e94) cell_highlight_pane_g6

0x3cdf,	// (0x00010e9c) cell_highlight_pane_g7

0x3ce7,	// (0x00010ea4) cell_highlight_pane_g8

0x3cef,	// (0x00010eac) cell_highlight_pane_g9

0x3251,	// (0x0001040e) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c844) cell_highlight_pane_g

0x4187,	// (0x00011344) bg_scroll_pane

0x58fb,	// (0x00012ab8) scroll_handle_pane

0x41f7,	// (0x000113b4) scroll_bg_pane_g1

0x420c,	// (0x000113c9) scroll_bg_pane_g2

0x4224,	// (0x000113e1) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c89b) scroll_bg_pane_g

0x4239,	// (0x000113f6) scroll_handle_focus_pane_ParamLimits

0x4239,	// (0x000113f6) scroll_handle_focus_pane

0x41f7,	// (0x000113b4) scroll_handle_pane_g1

0x4246,	// (0x00011403) scroll_handle_pane_g2

0x4224,	// (0x000113e1) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c8a2) scroll_handle_pane_g

0x3d2f,	// (0x00010eec) bg_popup_sub_pane_cp21_ParamLimits

0x3d2f,	// (0x00010eec) bg_popup_sub_pane_cp21

0x425a,	// (0x00011417) popup_fep_japan_predictive_window_t1_ParamLimits

0x425a,	// (0x00011417) popup_fep_japan_predictive_window_t1

0x4271,	// (0x0001142e) popup_fep_japan_predictive_window_t2_ParamLimits

0x4271,	// (0x0001142e) popup_fep_japan_predictive_window_t2

0x42a4,	// (0x00011461) popup_fep_japan_predictive_window_t3_ParamLimits

0x42a4,	// (0x00011461) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c8a9) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c8a9) popup_fep_japan_predictive_window_t

0x33ca,	// (0x00010587) bg_popup_sub_pane_cp23

0x42db,	// (0x00011498) listscroll_japin_cand_pane

0x42e3,	// (0x000114a0) popup_fep_japan_candidate_window_t1

0x42f1,	// (0x000114ae) candidate_pane_ParamLimits

0x42f1,	// (0x000114ae) candidate_pane

0x4303,	// (0x000114c0) scroll_pane_cp30

0x430d,	// (0x000114ca) list_single_popup_jap_candidate_pane_ParamLimits

0x430d,	// (0x000114ca) list_single_popup_jap_candidate_pane

0x33ca,	// (0x00010587) list_highlight_pane_cp30

0x4321,	// (0x000114de) list_single_popup_jap_candidate_pane_t1

0x7c18,	// (0x00014dd5) level_1_signal

0x7c25,	// (0x00014de2) level_2_signal

0x7c32,	// (0x00014def) level_3_signal

0x7c3f,	// (0x00014dfc) level_4_signal

0x7c4c,	// (0x00014e09) level_5_signal

0x7c59,	// (0x00014e16) level_6_signal

0x7c66,	// (0x00014e23) level_7_signal

0x7c18,	// (0x00014dd5) level_1_battery

0x7c25,	// (0x00014de2) level_2_battery

0x7c32,	// (0x00014def) level_3_battery

0x7c3f,	// (0x00014dfc) level_4_battery

0x7c4c,	// (0x00014e09) level_5_battery

0x7c59,	// (0x00014e16) level_6_battery

0x7c66,	// (0x00014e23) level_7_battery

0x4367,	// (0x00011524) list_menu_pane_ParamLimits

0x4367,	// (0x00011524) list_menu_pane

0x437d,	// (0x0001153a) scroll_pane_cp25_ParamLimits

0x437d,	// (0x0001153a) scroll_pane_cp25

0x4396,	// (0x00011553) list_double2_graphic_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double2_graphic_pane_cp2

0x4396,	// (0x00011553) list_double2_large_graphic_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double2_large_graphic_pane_cp2

0x4396,	// (0x00011553) list_double2_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double2_pane_cp2

0x4396,	// (0x00011553) list_double_graphic_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double_graphic_pane_cp2

0x4396,	// (0x00011553) list_double_large_graphic_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double_large_graphic_pane_cp2

0x4396,	// (0x00011553) list_double_number_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double_number_pane_cp2

0x4396,	// (0x00011553) list_double_pane_cp2_ParamLimits

0x4396,	// (0x00011553) list_double_pane_cp2

0x7c89,	// (0x00014e46) list_single_2graphic_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_2graphic_pane_cp2

0x7c89,	// (0x00014e46) list_single_graphic_heading_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_graphic_heading_pane_cp2

0x7c89,	// (0x00014e46) list_single_graphic_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_graphic_pane_cp2

0x7c89,	// (0x00014e46) list_single_heading_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_heading_pane_cp2

0x43a6,	// (0x00011563) list_single_large_graphic_pane_cp2_ParamLimits

0x43a6,	// (0x00011563) list_single_large_graphic_pane_cp2

0x7c89,	// (0x00014e46) list_single_number_heading_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_number_heading_pane_cp2

0x7c89,	// (0x00014e46) list_single_number_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_number_pane_cp2

0x7c89,	// (0x00014e46) list_single_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_pane_cp2

0x441a,	// (0x000115d7) bg_popup_sub_pane_cp22

0x59ad,	// (0x00012b6a) popup_side_volume_key_window_g1

0x59d7,	// (0x00012b94) popup_side_volume_key_window_t1

0x59f5,	// (0x00012bb2) volume_small_pane_cp1

0x3478,	// (0x00010635) bg_popup_sub_pane_cp24_ParamLimits

0x3478,	// (0x00010635) bg_popup_sub_pane_cp24

0x448f,	// (0x0001164c) fep_china_uni_candidate_pane_ParamLimits

0x448f,	// (0x0001164c) fep_china_uni_candidate_pane

0x44a3,	// (0x00011660) fep_china_uni_entry_pane

0x44b3,	// (0x00011670) popup_fep_china_uni_window_g1

0x44cf,	// (0x0001168c) fep_china_uni_entry_pane_g1

0x44d9,	// (0x00011696) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c8da) fep_china_uni_entry_pane_g

0x44e3,	// (0x000116a0) fep_entry_item_pane

0x44ed,	// (0x000116aa) fep_candidate_item_pane

0x44f5,	// (0x000116b2) fep_china_uni_candidate_pane_g1

0x44ff,	// (0x000116bc) fep_china_uni_candidate_pane_g2

0x4507,	// (0x000116c4) fep_china_uni_candidate_pane_g3

0x450f,	// (0x000116cc) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c8df) fep_china_uni_candidate_pane_g

0x3251,	// (0x0001040e) fep_entry_item_pane_g1

0x4519,	// (0x000116d6) fep_entry_item_pane_t1_ParamLimits

0x4519,	// (0x000116d6) fep_entry_item_pane_t1

0x452f,	// (0x000116ec) fep_candidate_item_pane_t1_ParamLimits

0x452f,	// (0x000116ec) fep_candidate_item_pane_t1

0x4544,	// (0x00011701) fep_candidate_item_pane_t2_ParamLimits

0x4544,	// (0x00011701) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c8e8) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c8e8) fep_candidate_item_pane_t

0x3490,	// (0x0001064d) list_highlight_pane_cp31_ParamLimits

0x3490,	// (0x0001064d) list_highlight_pane_cp31

0x4556,	// (0x00011713) level_1_signal_lsc

0x455f,	// (0x0001171c) level_2_signal_lsc

0x4568,	// (0x00011725) level_3_signal_lsc

0x4571,	// (0x0001172e) level_4_signal_lsc

0x457a,	// (0x00011737) level_5_signal_lsc

0x4583,	// (0x00011740) level_6_signal_lsc

0x458c,	// (0x00011749) level_7_signal_lsc

0x458c,	// (0x00011749) level_1_battery_lsc

0x4595,	// (0x00011752) level_2_battery_lsc

0x459e,	// (0x0001175b) level_3_battery_lsc

0x45a7,	// (0x00011764) level_4_battery_lsc

0x45b0,	// (0x0001176d) level_5_battery_lsc

0x45b9,	// (0x00011776) level_6_battery_lsc

0x4556,	// (0x00011713) level_7_battery_lsc

0x45c2,	// (0x0001177f) scroll_handle_focus_pane_g1

0x45cb,	// (0x00011788) scroll_handle_focus_pane_g2

0x45d4,	// (0x00011791) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c8ed) scroll_handle_focus_pane_g

0x7d08,	// (0x00014ec5) list_single_2graphic_pane_g1_ParamLimits

0x7d08,	// (0x00014ec5) list_single_2graphic_pane_g1

0x75b3,	// (0x00014770) list_single_2graphic_pane_g2_ParamLimits

0x75b3,	// (0x00014770) list_single_2graphic_pane_g2

0x7539,	// (0x000146f6) list_single_2graphic_pane_g3_ParamLimits

0x7539,	// (0x000146f6) list_single_2graphic_pane_g3

0x7d14,	// (0x00014ed1) list_single_2graphic_pane_g4_ParamLimits

0x7d14,	// (0x00014ed1) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c8f4) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c8f4) list_single_2graphic_pane_g

0x7d20,	// (0x00014edd) list_single_2graphic_pane_t1_ParamLimits

0x7d20,	// (0x00014edd) list_single_2graphic_pane_t1

0x7d4e,	// (0x00014f0b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7d4e,	// (0x00014f0b) list_double2_graphic_large_graphic_pane_g1

0x7658,	// (0x00014815) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7658,	// (0x00014815) list_double2_graphic_large_graphic_pane_g2

0x7669,	// (0x00014826) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7669,	// (0x00014826) list_double2_graphic_large_graphic_pane_g3

0x7d60,	// (0x00014f1d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7d60,	// (0x00014f1d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c8fd) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c8fd) list_double2_graphic_large_graphic_pane_g

0x7d6c,	// (0x00014f29) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7d6c,	// (0x00014f29) list_double2_graphic_large_graphic_pane_t1

0x7d82,	// (0x00014f3f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7d82,	// (0x00014f3f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c906) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c906) list_double2_graphic_large_graphic_pane_t

0x47aa,	// (0x00011967) popup_fast_swap_window_ParamLimits

0x47aa,	// (0x00011967) popup_fast_swap_window

0x47c8,	// (0x00011985) popup_side_volume_key_window

0x47e6,	// (0x000119a3) stacon_top_pane

0x47f0,	// (0x000119ad) status_pane_ParamLimits

0x47f0,	// (0x000119ad) status_pane

0x7e44,	// (0x00015001) status_small_pane

0x33ca,	// (0x00010587) control_pane

0x33ca,	// (0x00010587) stacon_bottom_pane

0x3b72,	// (0x00010d2f) scroll_pane_cp121

0x3b69,	// (0x00010d26) set_content_pane

0x7d94,	// (0x00014f51) bg_active_tab_pane_g1_cp1

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp1

0x7d9d,	// (0x00014f5a) bg_active_tab_pane_g3_cp1

0x7d94,	// (0x00014f51) bg_passive_tab_pane_g1_cp1

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp1

0x7d9d,	// (0x00014f5a) bg_passive_tab_pane_g3_cp1

0x7da6,	// (0x00014f63) bg_active_tab_pane_g1_cp2

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp2

0x7daf,	// (0x00014f6c) bg_active_tab_pane_g3_cp2

0x7da6,	// (0x00014f63) bg_passive_tab_pane_g1_cp2

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp2

0x7daf,	// (0x00014f6c) bg_passive_tab_pane_g3_cp2

0x7db8,	// (0x00014f75) bg_active_tab_pane_g1_cp3

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp3

0x7dc1,	// (0x00014f7e) bg_active_tab_pane_g3_cp3

0x7db8,	// (0x00014f75) bg_passive_tab_pane_g1_cp3

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp3

0x7dc1,	// (0x00014f7e) bg_passive_tab_pane_g3_cp3

0x7dca,	// (0x00014f87) bg_active_tab_pane_g1_cp4

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp4

0x7dd5,	// (0x00014f92) bg_active_tab_pane_g3_cp4

0x7dca,	// (0x00014f87) bg_passive_tab_pane_g1_cp4

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp4

0x7dd5,	// (0x00014f92) bg_passive_tab_pane_g3_cp4

0x4771,	// (0x0001192e) bg_active_tab_pane_g1_cp5

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp5

0x4768,	// (0x00011925) bg_active_tab_pane_g3_cp5

0x4771,	// (0x0001192e) bg_passive_tab_pane_g1_cp5

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp5

0x4768,	// (0x00011925) bg_passive_tab_pane_g3_cp5

0x7de0,	// (0x00014f9d) list_set_graphic_pane_ParamLimits

0x7de0,	// (0x00014f9d) list_set_graphic_pane

0x33ca,	// (0x00010587) bg_set_opt_pane_cp4

0x7df5,	// (0x00014fb2) list_set_graphic_pane_g1_ParamLimits

0x7df5,	// (0x00014fb2) list_set_graphic_pane_g1

0x7e01,	// (0x00014fbe) list_set_graphic_pane_g2_ParamLimits

0x7e01,	// (0x00014fbe) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c90b) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c90b) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001cc8c) volume_small_pane_cp_g

0x7e25,	// (0x00014fe2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7e25,	// (0x00014fe2) list_double2_large_graphic_pane_g1_cp2

0x7e33,	// (0x00014ff0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7e33,	// (0x00014ff0) list_double2_large_graphic_pane_g2_cp2

0x477a,	// (0x00011937) list_double2_large_graphic_pane_g3_cp2

0x4782,	// (0x0001193f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4782,	// (0x0001193f) list_double2_large_graphic_pane_t1_cp2

0x4798,	// (0x00011955) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4798,	// (0x00011955) list_double2_large_graphic_pane_t2_cp2

0xa027,	// (0x000171e4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa027,	// (0x000171e4) list_double_large_graphic_pane_g1_cp2

0xa03a,	// (0x000171f7) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa03a,	// (0x000171f7) list_double_large_graphic_pane_g2_cp2

0x48d1,	// (0x00011a8e) list_double_large_graphic_pane_g3_cp2

0xa04b,	// (0x00017208) list_double_large_graphic_pane_g4_cp

0xa053,	// (0x00017210) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa053,	// (0x00017210) list_double_large_graphic_pane_t1_cp2

0xa06a,	// (0x00017227) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa06a,	// (0x00017227) list_double_large_graphic_pane_t2_cp2

0x7e4f,	// (0x0001500c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7e4f,	// (0x0001500c) list_double2_graphic_pane_g1_cp2

0x7e5d,	// (0x0001501a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7e5d,	// (0x0001501a) list_double2_graphic_pane_g2_cp2

0x7e6e,	// (0x0001502b) list_double2_graphic_pane_g3_cp2

0x47fe,	// (0x000119bb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x47fe,	// (0x000119bb) list_double2_graphic_pane_t1_cp2

0x4814,	// (0x000119d1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4814,	// (0x000119d1) list_double2_graphic_pane_t2_cp2

0x4826,	// (0x000119e3) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4826,	// (0x000119e3) list_single_number_heading_pane_g1_cp2

0x4832,	// (0x000119ef) list_single_number_heading_pane_g2_cp2

0x483a,	// (0x000119f7) list_single_number_heading_pane_t1_cp2_ParamLimits

0x483a,	// (0x000119f7) list_single_number_heading_pane_t1_cp2

0x7e78,	// (0x00015035) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7e78,	// (0x00015035) list_single_number_heading_pane_t2_cp2

0x4850,	// (0x00011a0d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4850,	// (0x00011a0d) list_single_number_heading_pane_t3_cp2

0x4826,	// (0x000119e3) list_single_heading_pane_g1_cp2_ParamLimits

0x4826,	// (0x000119e3) list_single_heading_pane_g1_cp2

0x4832,	// (0x000119ef) list_single_heading_pane_g2_cp2

0x483a,	// (0x000119f7) list_single_heading_pane_t1_cp2_ParamLimits

0x483a,	// (0x000119f7) list_single_heading_pane_t1_cp2

0x9e21,	// (0x00016fde) list_single_heading_pane_t2_cp2_ParamLimits

0x9e21,	// (0x00016fde) list_single_heading_pane_t2_cp2

0x9d69,	// (0x00016f26) list_double_graphic_pane_g1_cp2_ParamLimits

0x9d69,	// (0x00016f26) list_double_graphic_pane_g1_cp2

0x9d75,	// (0x00016f32) list_double_graphic_pane_g2_cp2_ParamLimits

0x9d75,	// (0x00016f32) list_double_graphic_pane_g2_cp2

0x9d84,	// (0x00016f41) list_double_graphic_pane_g3_cp2

0x9d8c,	// (0x00016f49) list_double_graphic_pane_t1_cp2_ParamLimits

0x9d8c,	// (0x00016f49) list_double_graphic_pane_t1_cp2

0x9da2,	// (0x00016f5f) list_double_graphic_pane_t2_cp2_ParamLimits

0x9da2,	// (0x00016f5f) list_double_graphic_pane_t2_cp2

0x48c5,	// (0x00011a82) list_double_number_pane_g1_cp2_ParamLimits

0x48c5,	// (0x00011a82) list_double_number_pane_g1_cp2

0x48d1,	// (0x00011a8e) list_double_number_pane_g2_cp2

0x9d2d,	// (0x00016eea) list_double_number_pane_t1_cp2_ParamLimits

0x9d2d,	// (0x00016eea) list_double_number_pane_t1_cp2

0x9d41,	// (0x00016efe) list_double_number_pane_t2_cp2_ParamLimits

0x9d41,	// (0x00016efe) list_double_number_pane_t2_cp2

0x9d57,	// (0x00016f14) list_double_number_pane_t3_cp2_ParamLimits

0x9d57,	// (0x00016f14) list_double_number_pane_t3_cp2

0x9c16,	// (0x00016dd3) list_single_graphic_pane_g1_cp2_ParamLimits

0x9c16,	// (0x00016dd3) list_single_graphic_pane_g1_cp2

0x7eb6,	// (0x00015073) list_single_graphic_pane_g2_cp2_ParamLimits

0x7eb6,	// (0x00015073) list_single_graphic_pane_g2_cp2

0x7ec2,	// (0x0001507f) list_single_graphic_pane_g3_cp2

0x9bec,	// (0x00016da9) list_single_graphic_pane_t1_cp2_ParamLimits

0x9bec,	// (0x00016da9) list_single_graphic_pane_t1_cp2

0x7eb6,	// (0x00015073) list_single_number_pane_g1_cp2_ParamLimits

0x7eb6,	// (0x00015073) list_single_number_pane_g1_cp2

0x7ec2,	// (0x0001507f) list_single_number_pane_g2_cp2

0x9bec,	// (0x00016da9) list_single_number_pane_t1_cp2_ParamLimits

0x9bec,	// (0x00016da9) list_single_number_pane_t1_cp2

0x9c02,	// (0x00016dbf) list_single_number_pane_t2_cp2_ParamLimits

0x9c02,	// (0x00016dbf) list_single_number_pane_t2_cp2

0x7e33,	// (0x00014ff0) list_double2_pane_g1_cp2_ParamLimits

0x7e33,	// (0x00014ff0) list_double2_pane_g1_cp2

0x477a,	// (0x00011937) list_double2_pane_g2_cp2

0x489d,	// (0x00011a5a) list_double2_pane_t1_cp2_ParamLimits

0x489d,	// (0x00011a5a) list_double2_pane_t1_cp2

0x48b3,	// (0x00011a70) list_double2_pane_t2_cp2_ParamLimits

0x48b3,	// (0x00011a70) list_double2_pane_t2_cp2

0x48c5,	// (0x00011a82) list_double_pane_g1_cp2_ParamLimits

0x48c5,	// (0x00011a82) list_double_pane_g1_cp2

0x48d1,	// (0x00011a8e) list_double_pane_g2_cp2

0x48d9,	// (0x00011a96) list_double_pane_t1_cp2_ParamLimits

0x48d9,	// (0x00011a96) list_double_pane_t1_cp2

0x48ef,	// (0x00011aac) list_double_pane_t2_cp2_ParamLimits

0x48ef,	// (0x00011aac) list_double_pane_t2_cp2

0x7ea6,	// (0x00015063) list_single_pane_cp2_g3

0x7eb6,	// (0x00015073) list_single_pane_g1_cp2_ParamLimits

0x7eb6,	// (0x00015073) list_single_pane_g1_cp2

0x7ec2,	// (0x0001507f) list_single_pane_g2_cp2

0x7eca,	// (0x00015087) list_single_pane_t1_cp2_ParamLimits

0x7eca,	// (0x00015087) list_single_pane_t1_cp2

0x7ee2,	// (0x0001509f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7ee2,	// (0x0001509f) list_single_large_graphic_pane_g1_cp2

0x7ef0,	// (0x000150ad) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x7ef0,	// (0x000150ad) list_single_large_graphic_pane_g2_cp2

0x7efc,	// (0x000150b9) list_single_large_graphic_pane_g3_cp2

0x7f04,	// (0x000150c1) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7f04,	// (0x000150c1) list_single_large_graphic_pane_g4_cp1

0x7f1e,	// (0x000150db) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7f1e,	// (0x000150db) list_single_large_graphic_pane_t1_cp2

0x9bb6,	// (0x00016d73) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9bb6,	// (0x00016d73) list_single_graphic_heading_pane_g1_cp2

0x9b83,	// (0x00016d40) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9b83,	// (0x00016d40) list_single_graphic_heading_pane_g4_cp2

0x7ec2,	// (0x0001507f) list_single_graphic_heading_pane_g5_cp2

0x9bc2,	// (0x00016d7f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9bc2,	// (0x00016d7f) list_single_graphic_heading_pane_t1_cp2

0x9bd8,	// (0x00016d95) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9bd8,	// (0x00016d95) list_single_graphic_heading_pane_t2_cp2

0x9b77,	// (0x00016d34) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9b77,	// (0x00016d34) list_single_2graphic_pane_g1_cp2

0x9b83,	// (0x00016d40) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9b83,	// (0x00016d40) list_single_2graphic_pane_g2_cp2

0x7ec2,	// (0x0001507f) list_single_2graphic_pane_g3_cp2

0x9b94,	// (0x00016d51) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9b94,	// (0x00016d51) list_single_2graphic_pane_g4_cp2

0x9ba0,	// (0x00016d5d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ba0,	// (0x00016d5d) list_single_2graphic_pane_t1_cp2

0x3251,	// (0x0001040e) list_highlight_pane_g10_cp1

0x974f,	// (0x0001690c) list_highlight_pane_g1_cp1

0x9757,	// (0x00016914) list_highlight_pane_g2_cp1

0x975f,	// (0x0001691c) list_highlight_pane_g3_cp1

0x9767,	// (0x00016924) list_highlight_pane_g4_cp1

0x976f,	// (0x0001692c) list_highlight_pane_g5_cp1

0x9777,	// (0x00016934) list_highlight_pane_g6_cp1

0x977f,	// (0x0001693c) list_highlight_pane_g7_cp1

0x9787,	// (0x00016944) list_highlight_pane_g8_cp1

0x978f,	// (0x0001694c) list_highlight_pane_g9_cp1

0x966f,	// (0x0001682c) form_field_slider_pane_t3

0x967d,	// (0x0001683a) form_field_slider_pane_t4

0x968b,	// (0x00016848) slider_form_pane_ParamLimits

0x968b,	// (0x00016848) slider_form_pane

0x33ca,	// (0x00010587) control_abbreviations

0x33ca,	// (0x00010587) control_conventions

0x33ca,	// (0x00010587) control_definitions

0x33ca,	// (0x00010587) format_table_attribute

0x9e77,	// (0x00017034) bg_popup_preview_window_pane_g9

0x33ca,	// (0x00010587) format_table_data2

0x33ca,	// (0x00010587) format_table_data3

0x33ca,	// (0x00010587) format_table_data_example

0x0008,

0x33ca,	// (0x00010587) intro_purpose

0xf8ea,	// (0x0001caa7) bg_popup_preview_window_pane_g

0x33ca,	// (0x00010587) texts_category

0x33ca,	// (0x00010587) texts_graphics

0x7f34,	// (0x000150f1) text_digital

0x7f43,	// (0x00015100) text_primary

0x7f52,	// (0x0001510f) text_primary_small

0x7f61,	// (0x0001511e) text_secondary

0x7f70,	// (0x0001512d) text_title

0xa6a8,	// (0x00017865) bg_passive_tab_pane_g1_cp3_srt

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp3_srt

0xa6b1,	// (0x0001786e) bg_passive_tab_pane_g3_cp3_srt

0x3490,	// (0x0001064d) bg_active_tab_pane_cp3_srt_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp3_srt

0xa6ba,	// (0x00017877) tabs_4_active_pane_srt_g1

0xa6c2,	// (0x0001787f) tabs_4_active_pane_srt_t1_ParamLimits

0xa6c2,	// (0x0001787f) tabs_4_active_pane_srt_t1

0xa6a8,	// (0x00017865) bg_active_tab_pane_g1_cp3_copy1

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp3_copy1

0xa6b1,	// (0x0001786e) bg_active_tab_pane_g3_cp3_copy1

0x3490,	// (0x0001064d) tabs_2_long_active_pane_srt_ParamLimits

0x3490,	// (0x0001064d) tabs_2_long_active_pane_srt

0x3490,	// (0x0001064d) tabs_2_long_passive_pane_srt_ParamLimits

0x3490,	// (0x0001064d) tabs_2_long_passive_pane_srt

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp4_srt

0xa2db,	// (0x00017498) bg_passive_tab_pane_g1_cp4_srt

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp4_srt

0xa2e4,	// (0x000174a1) bg_passive_tab_pane_g3_cp4_srt

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp4_srt_ParamLimits

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp4_srt

0xa2ed,	// (0x000174aa) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa2ed,	// (0x000174aa) tabs_2_long_active_pane_srt_t1

0xa2db,	// (0x00017498) bg_active_tab_pane_g1_cp4_srt

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp4_srt

0xa2e4,	// (0x000174a1) bg_active_tab_pane_g3_cp4_srt

0x3478,	// (0x00010635) tabs_3_long_active_pane_srt_ParamLimits

0x3478,	// (0x00010635) tabs_3_long_active_pane_srt

0x3478,	// (0x00010635) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3478,	// (0x00010635) tabs_3_long_passive_pane_cp_srt

0x3478,	// (0x00010635) tabs_3_long_passive_pane_srt_ParamLimits

0x3478,	// (0x00010635) tabs_3_long_passive_pane_srt

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp5_srt

0x4771,	// (0x0001192e) bg_passive_tab_pane_g1_cp5_srt

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp5_srt

0x4768,	// (0x00011925) bg_passive_tab_pane_g3_cp5_srt

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp5_srt_ParamLimits

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp5_srt

0xa2c9,	// (0x00017486) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa2c9,	// (0x00017486) tabs_3_long_active_pane_srt_t1

0x4771,	// (0x0001192e) bg_active_tab_pane_g1_cp5_srt

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp5_srt

0x4768,	// (0x00011925) bg_active_tab_pane_g3_cp5_srt

0xa2bb,	// (0x00017478) navi_text_pane_srt_t1

0xa2b3,	// (0x00017470) navi_icon_pane_srt_g1

0x813b,	// (0x000152f8) midp_editing_number_pane_srt

0x7f7f,	// (0x0001513c) midp_ticker_pane_srt

0x8143,	// (0x00015300) midp_ticker_pane_srt_g1

0x814b,	// (0x00015308) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c92a) midp_ticker_pane_srt_g

0x8153,	// (0x00015310) midp_ticker_pane_srt_t1

0xa2a4,	// (0x00017461) midp_editing_number_pane_t1_copy1

0x7b77,	// (0x00014d34) listscroll_midp_pane

0x7b77,	// (0x00014d34) midp_form_pane

0x7fe9,	// (0x000151a6) midp_info_popup_window_ParamLimits

0x7fe9,	// (0x000151a6) midp_info_popup_window

0x3d2f,	// (0x00010eec) bg_popup_sub_pane_cp50_ParamLimits

0x3d2f,	// (0x00010eec) bg_popup_sub_pane_cp50

0x9385,	// (0x00016542) listscroll_midp_info_pane_ParamLimits

0x9385,	// (0x00016542) listscroll_midp_info_pane

0x936d,	// (0x0001652a) listscroll_form_midp_pane_ParamLimits

0x936d,	// (0x0001652a) listscroll_form_midp_pane

0x9379,	// (0x00016536) scroll_bar_cp050

0x934d,	// (0x0001650a) list_midp_pane

0xb45f,	// (0x0001861c) signal_pane_g2_cp

0x9287,	// (0x00016444) listscroll_midp_info_pane_t1_ParamLimits

0x9287,	// (0x00016444) listscroll_midp_info_pane_t1

0x929f,	// (0x0001645c) listscroll_midp_info_pane_t2_ParamLimits

0x929f,	// (0x0001645c) listscroll_midp_info_pane_t2

0x92dd,	// (0x0001649a) listscroll_midp_info_pane_t3_ParamLimits

0x92dd,	// (0x0001649a) listscroll_midp_info_pane_t3

0x9317,	// (0x000164d4) listscroll_midp_info_pane_t4_ParamLimits

0x9317,	// (0x000164d4) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001c9e2) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001c9e2) listscroll_midp_info_pane_t

0x3daf,	// (0x00010f6c) scroll_pane_cp21

0x9221,	// (0x000163de) form_midp_field_choice_group_pane

0x922a,	// (0x000163e7) form_midp_field_text_pane

0x926d,	// (0x0001642a) form_midp_field_time_pane

0x9275,	// (0x00016432) form_midp_gauge_slider_pane

0x927e,	// (0x0001643b) form_midp_gauge_wait_pane

0x33ca,	// (0x00010587) form_midp_image_pane

0x9201,	// (0x000163be) list_single_midp_pane_ParamLimits

0x9201,	// (0x000163be) list_single_midp_pane

0x91c5,	// (0x00016382) form_midp_field_text_pane_t1

0x8fa2,	// (0x0001615f) input_focus_pane_cp050

0x91f0,	// (0x000163ad) list_midp_form_text_pane

0x9194,	// (0x00016351) form_midp_field_choice_group_pane_t1

0x91a2,	// (0x0001635f) input_focus_pane_cp051

0x91b6,	// (0x00016373) list_midp_choice_pane

0x33ca,	// (0x00010587) status_idle_pane

0x9178,	// (0x00016335) form_midp_field_time_pane_t1

0x3251,	// (0x0001040e) wait_anim_pane_g2_copy1

0x9186,	// (0x00016343) form_midp_field_time_pane_t2

0x0001,

0x8099,	// (0x00015256) aid_navinavi_width_2_pane

0xf820,	// (0x0001c9dd) form_midp_field_time_pane_t

0x33ca,	// (0x00010587) input_focus_pane_cp052

0x33ca,	// (0x00010587) bg_input_focus_pane_cp040

0x9138,	// (0x000162f5) form_midp_gauge_slider_pane_t1

0x9146,	// (0x00016303) form_midp_gauge_slider_pane_t2

0x9154,	// (0x00016311) form_midp_gauge_slider_pane_t3

0x9162,	// (0x0001631f) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001c9d4) form_midp_gauge_slider_pane_t

0x9170,	// (0x0001632d) form_midp_slider_pane

0x3490,	// (0x0001064d) bg_input_focus_pane_cp041_ParamLimits

0x3490,	// (0x0001064d) bg_input_focus_pane_cp041

0x9105,	// (0x000162c2) form_midp_gauge_wait_pane_t1_ParamLimits

0x9105,	// (0x000162c2) form_midp_gauge_wait_pane_t1

0x9117,	// (0x000162d4) form_midp_gauge_wait_pane_t2_ParamLimits

0x9117,	// (0x000162d4) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001c9cf) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001c9cf) form_midp_gauge_wait_pane_t

0x9129,	// (0x000162e6) form_midp_wait_pane_ParamLimits

0x9129,	// (0x000162e6) form_midp_wait_pane

0x90cd,	// (0x0001628a) form_midp_image_pane_g1

0x90d6,	// (0x00016293) form_midp_image_pane_t1

0x90e5,	// (0x000162a2) form_midp_image_pane_t2

0x90f4,	// (0x000162b1) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001c9c8) form_midp_image_pane_t

0x90b5,	// (0x00016272) list_single_midp_pane_g1

0x90be,	// (0x0001627b) list_single_midp_pane_t1

0x909b,	// (0x00016258) list_midp_form_item_pane_ParamLimits

0x909b,	// (0x00016258) list_midp_form_item_pane

0x8041,	// (0x000151fe) list_midp_form_item_pane_t1

0x8050,	// (0x0001520d) midp_ticker_pane_g1

0x805c,	// (0x00015219) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c910) midp_ticker_pane_g

0x8068,	// (0x00015225) midp_ticker_pane_t1

0xa54c,	// (0x00017709) midp_editing_number_pane_t1

0xa52a,	// (0x000176e7) midp_editing_number_pane

0xa539,	// (0x000176f6) midp_ticker_pane

0xa26c,	// (0x00017429) ai_message_heading_pane

0x33ca,	// (0x00010587) bg_popup_window_pane_cp14

0xa274,	// (0x00017431) listscroll_ai_message_pane

0xa1f2,	// (0x000173af) ai_message_heading_pane_g1_ParamLimits

0xa1f2,	// (0x000173af) ai_message_heading_pane_g1

0xa1fe,	// (0x000173bb) ai_message_heading_pane_g2_ParamLimits

0xa1fe,	// (0x000173bb) ai_message_heading_pane_g2

0xa20c,	// (0x000173c9) ai_message_heading_pane_g3_ParamLimits

0xa20c,	// (0x000173c9) ai_message_heading_pane_g3

0xa218,	// (0x000173d5) ai_message_heading_pane_g4_ParamLimits

0xa218,	// (0x000173d5) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001cb09) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001cb09) ai_message_heading_pane_g

0xa224,	// (0x000173e1) ai_message_heading_pane_t1_ParamLimits

0xa224,	// (0x000173e1) ai_message_heading_pane_t1

0xa23e,	// (0x000173fb) ai_message_heading_pane_t2_ParamLimits

0xa23e,	// (0x000173fb) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001cb12) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001cb12) ai_message_heading_pane_t

0xa252,	// (0x0001740f) bg_popup_heading_pane_cp1_ParamLimits

0xa252,	// (0x0001740f) bg_popup_heading_pane_cp1

0xa1e0,	// (0x0001739d) list_ai_message_pane_ParamLimits

0xa1e0,	// (0x0001739d) list_ai_message_pane

0x3daf,	// (0x00010f6c) scroll_pane_cp10

0xa17c,	// (0x00017339) list_ai_message_pane_g1

0xa184,	// (0x00017341) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001cae6) list_ai_message_pane_g

0xa18c,	// (0x00017349) list_ai_message_pane_t1_ParamLimits

0xa18c,	// (0x00017349) list_ai_message_pane_t1

0xa1a1,	// (0x0001735e) list_ai_message_pane_t2_ParamLimits

0xa1a1,	// (0x0001735e) list_ai_message_pane_t2

0xa1b6,	// (0x00017373) list_ai_message_pane_t3_ParamLimits

0xa1b6,	// (0x00017373) list_ai_message_pane_t3

0xa1cb,	// (0x00017388) list_ai_message_pane_t4_ParamLimits

0xa1cb,	// (0x00017388) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001caeb) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001caeb) list_ai_message_pane_t

0xa165,	// (0x00017322) cell_ai_soft_ind_pane_ParamLimits

0xa165,	// (0x00017322) cell_ai_soft_ind_pane

0x807a,	// (0x00015237) cell_ai_soft_ind_pane_g1_ParamLimits

0x807a,	// (0x00015237) cell_ai_soft_ind_pane_g1

0x33ca,	// (0x00010587) grid_highlight_cp1

0x8087,	// (0x00015244) text_secondary_cp56_ParamLimits

0x8087,	// (0x00015244) text_secondary_cp56

0xa13a,	// (0x000172f7) example_general_pane_ParamLimits

0xa13a,	// (0x000172f7) example_general_pane

0xa146,	// (0x00017303) example_parent_pane_g1_ParamLimits

0xa146,	// (0x00017303) example_parent_pane_g1

0xa152,	// (0x0001730f) example_parent_pane_t1_ParamLimits

0xa152,	// (0x0001730f) example_parent_pane_t1

0x86d4,	// (0x00015891) popup_preview_text_window_ParamLimits

0x86d4,	// (0x00015891) popup_preview_text_window

0x7eae,	// (0x0001506b) list_single_pane_cp2_g4

0x370e,	// (0x000108cb) bg_popup_preview_window_pane_ParamLimits

0x370e,	// (0x000108cb) bg_popup_preview_window_pane

0x9e81,	// (0x0001703e) popup_preview_text_window_t1_ParamLimits

0x9e81,	// (0x0001703e) popup_preview_text_window_t1

0x9e9f,	// (0x0001705c) popup_preview_text_window_t2_ParamLimits

0x9e9f,	// (0x0001705c) popup_preview_text_window_t2

0x9ee8,	// (0x000170a5) popup_preview_text_window_t3_ParamLimits

0x9ee8,	// (0x000170a5) popup_preview_text_window_t3

0x9f2d,	// (0x000170ea) popup_preview_text_window_t4_ParamLimits

0x9f2d,	// (0x000170ea) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001caba) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001caba) popup_preview_text_window_t

0x9fab,	// (0x00017168) scroll_pane_cp11

0x8e7c,	// (0x00016039) bg_popup_preview_window_pane_g1

0x9e35,	// (0x00016ff2) bg_popup_preview_window_pane_g2

0x9e3f,	// (0x00016ffc) bg_popup_preview_window_pane_g3

0x9e49,	// (0x00017006) bg_popup_preview_window_pane_g4

0x9e53,	// (0x00017010) bg_popup_preview_window_pane_g5

0x9e5d,	// (0x0001701a) bg_popup_preview_window_pane_g6

0x9e65,	// (0x00017022) bg_popup_preview_window_pane_g7

0x9e6d,	// (0x0001702a) bg_popup_preview_window_pane_g8

0x52ca,	// (0x00012487) aid_popup_width_pane

0x86b0,	// (0x0001586d) popup_midp_note_alarm_window_ParamLimits

0x86b0,	// (0x0001586d) popup_midp_note_alarm_window

0x3bda,	// (0x00010d97) data_form_pane_ParamLimits

0x7a06,	// (0x00014bc3) form_field_data_pane_g1

0x7a10,	// (0x00014bcd) form_field_data_pane_t1_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_ParamLimits

0x3bf4,	// (0x00010db1) data_form_wide_pane_ParamLimits

0x3c05,	// (0x00010dc2) form_field_data_wide_pane_g1

0x3c31,	// (0x00010dee) form_field_data_wide_pane_t1_ParamLimits

0x38c3,	// (0x00010a80) input_focus_pane_cp6_ParamLimits

0x7b3c,	// (0x00014cf9) input_popup_find_pane_g1_ParamLimits

0x7b3c,	// (0x00014cf9) input_popup_find_pane_g1

0x585a,	// (0x00012a17) aid_navi_side_left_pane

0x586f,	// (0x00012a2c) aid_navi_side_right_pane

0x984a,	// (0x00016a07) bg_popup_window_pane_cp30_ParamLimits

0x984a,	// (0x00016a07) bg_popup_window_pane_cp30

0x98c4,	// (0x00016a81) popup_midp_note_alarm_window_g1_ParamLimits

0x98c4,	// (0x00016a81) popup_midp_note_alarm_window_g1

0x98f4,	// (0x00016ab1) popup_midp_note_alarm_window_t1_ParamLimits

0x98f4,	// (0x00016ab1) popup_midp_note_alarm_window_t1

0x9995,	// (0x00016b52) popup_midp_note_alarm_window_t2_ParamLimits

0x9995,	// (0x00016b52) popup_midp_note_alarm_window_t2

0x9a43,	// (0x00016c00) popup_midp_note_alarm_window_t3_ParamLimits

0x9a43,	// (0x00016c00) popup_midp_note_alarm_window_t3

0x9a75,	// (0x00016c32) popup_midp_note_alarm_window_t4_ParamLimits

0x9a75,	// (0x00016c32) popup_midp_note_alarm_window_t4

0x9a9b,	// (0x00016c58) popup_midp_note_alarm_window_t5_ParamLimits

0x9a9b,	// (0x00016c58) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001ca57) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001ca57) popup_midp_note_alarm_window_t

0x9b47,	// (0x00016d04) wait_bar_pane_cp1_ParamLimits

0x9b47,	// (0x00016d04) wait_bar_pane_cp1

0x33ca,	// (0x00010587) wait_anim_pane_copy1

0x33ca,	// (0x00010587) wait_border_pane_copy1

0x952f,	// (0x000166ec) wait_border_pane_g1_copy1

0x3c4b,	// (0x00010e08) form_field_popup_pane_g1

0x7a2a,	// (0x00014be7) form_field_popup_pane_t1_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_cp7_ParamLimits

0x3c53,	// (0x00010e10) list_form_pane_ParamLimits

0x3c5f,	// (0x00010e1c) form_field_popup_wide_pane_g1

0x3c67,	// (0x00010e24) form_field_popup_wide_pane_t1_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_cp8_ParamLimits

0x3c7c,	// (0x00010e39) list_form_wide_pane_ParamLimits

0xa735,	// (0x000178f2) aid_size_cell_graphic_pane

0x7aa2,	// (0x00014c5f) data_form_pane_t1_ParamLimits

0xa4f5,	// (0x000176b2) data_form_wide_pane_t1_ParamLimits

0x89fb,	// (0x00015bb8) bg_status_flat_pane

0x726d,	// (0x0001442a) title_pane_t1_ParamLimits

0x3440,	// (0x000105fd) title_pane_t2_ParamLimits

0x3466,	// (0x00010623) title_pane_t3_ParamLimits

0xf557,	// (0x0001c714) title_pane_t_ParamLimits

0x7c18,	// (0x00014dd5) level_1_signal_ParamLimits

0x7c25,	// (0x00014de2) level_2_signal_ParamLimits

0x7c32,	// (0x00014def) level_3_signal_ParamLimits

0x7c3f,	// (0x00014dfc) level_4_signal_ParamLimits

0x7c4c,	// (0x00014e09) level_5_signal_ParamLimits

0x7c59,	// (0x00014e16) level_6_signal_ParamLimits

0x7c66,	// (0x00014e23) level_7_signal_ParamLimits

0x7c18,	// (0x00014dd5) level_1_battery_ParamLimits

0x7c25,	// (0x00014de2) level_2_battery_ParamLimits

0x7c32,	// (0x00014def) level_3_battery_ParamLimits

0x7c3f,	// (0x00014dfc) level_4_battery_ParamLimits

0x7c4c,	// (0x00014e09) level_5_battery_ParamLimits

0x7c59,	// (0x00014e16) level_6_battery_ParamLimits

0x7c66,	// (0x00014e23) level_7_battery_ParamLimits

0x974f,	// (0x0001690c) bg_status_flat_pane_g1

0x9757,	// (0x00016914) bg_status_flat_pane_g2

0x975f,	// (0x0001691c) bg_status_flat_pane_g3

0x9767,	// (0x00016924) bg_status_flat_pane_g4

0x976f,	// (0x0001692c) bg_status_flat_pane_g5

0x9777,	// (0x00016934) bg_status_flat_pane_g6

0x977f,	// (0x0001693c) bg_status_flat_pane_g7

0x72dd,	// (0x0001449a) tabs_3_active_pane_t1_ParamLimits

0x72dd,	// (0x0001449a) tabs_3_passive_pane_t1_ParamLimits

0x72f7,	// (0x000144b4) tabs_4_active_pane_t1_ParamLimits

0x72f7,	// (0x000144b4) tabs_4_1_passive_pane_t1_ParamLimits

0x7b52,	// (0x00014d0f) tabs_2_active_pane_t1_ParamLimits

0x7b52,	// (0x00014d0f) tabs_2_passive_pane_t1_ParamLimits

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp4_ParamLimits

0x7b64,	// (0x00014d21) tabs_2_long_active_pane_t1_ParamLimits

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp4_ParamLimits

0x5e30,	// (0x00012fed) list_single_midp_graphic_pane_t1_ParamLimits

0x3e0d,	// (0x00010fca) bg_active_tab_pane_cp5_ParamLimits

0x7b83,	// (0x00014d40) tabs_3_long_active_pane_t1_ParamLimits

0x7b77,	// (0x00014d34) bg_passive_tab_pane_cp5_ParamLimits

0x5e30,	// (0x00012fed) list_single_midp_graphic_pane_t1

0x89fb,	// (0x00015bb8) bg_status_flat_pane_ParamLimits

0x8ac6,	// (0x00015c83) indicator_pane_cp2_ParamLimits

0x8ac6,	// (0x00015c83) indicator_pane_cp2

0x8c09,	// (0x00015dc6) navi_pane_srt_ParamLimits

0x8c09,	// (0x00015dc6) navi_pane_srt

0x8c2d,	// (0x00015dea) popup_clock_digital_analogue_window_cp1

0x3577,	// (0x00010734) indicator_pane_t1

0x7f7f,	// (0x0001513c) copy_highlight_pane

0x7f7f,	// (0x0001513c) cursor_graphics_pane

0x7f7f,	// (0x0001513c) graphic_within_text_pane

0x7f7f,	// (0x0001513c) link_highlight_pane

0x9f6e,	// (0x0001712b) popup_preview_text_window_t5_ParamLimits

0x9f6e,	// (0x0001712b) popup_preview_text_window_t5

0x80a3,	// (0x00015260) cursor_digital_pane

0x80a3,	// (0x00015260) cursor_primary_pane

0x80b4,	// (0x00015271) cursor_primary_small_pane

0x80bc,	// (0x00015279) cursor_secondary_pane

0x80c4,	// (0x00015281) cursor_title_pane

0x80a3,	// (0x00015260) link_highlight_digital_pane

0x80ab,	// (0x00015268) link_highlight_primary_pane

0x80b4,	// (0x00015271) link_highlight_primary_small_pane

0x80bc,	// (0x00015279) link_highlight_secondary_pane

0x80c4,	// (0x00015281) link_highlight_title_pane

0x80a3,	// (0x00015260) copy_highlight_digital_pane

0x80a3,	// (0x00015260) copy_highlight_primary_pane

0x80b4,	// (0x00015271) copy_highlight_primary_small_pane

0x80bc,	// (0x00015279) copy_highlight_secondary_pane

0x80c4,	// (0x00015281) copy_highlight_title_pane

0x80bc,	// (0x00015279) graphic_text_digital_pane

0x97ed,	// (0x000169aa) graphic_text_primary_pane

0x97f6,	// (0x000169b3) graphic_text_primary_small_pane

0x80b4,	// (0x00015271) graphic_text_secondary_pane

0x80a3,	// (0x00015260) graphic_text_title_pane

0x80cc,	// (0x00015289) cursor_primary_pane_g1

0x97df,	// (0x0001699c) cursor_text_primary_t1

0x97c7,	// (0x00016984) cursor_primary_small_pane_g1

0x97d1,	// (0x0001698e) cursor_text_primary_small_t1

0x97af,	// (0x0001696c) cursor_primary_small_pane_g1_copy1

0x97b9,	// (0x00016976) cursor_text_primary_small_t1_copy1

0x9797,	// (0x00016954) cursor_text_title_t1

0x97a5,	// (0x00016962) cursor_title_pane_g1

0x80cc,	// (0x00015289) cursor_digital_pane_g1

0x80d6,	// (0x00015293) cursor_text_digital_t1

0x80e4,	// (0x000152a1) link_highlight_primary_pane_g1

0x9740,	// (0x000168fd) link_highlight_primary_pane_t1

0x80e4,	// (0x000152a1) link_highlight_primary_small_pane_g1

0x80ec,	// (0x000152a9) link_highlight_primary_small_pane_t1

0x80fb,	// (0x000152b8) link_highlight_secondary_pane_g1

0x8103,	// (0x000152c0) link_highlight_secondary_pane_t1

0x96b4,	// (0x00016871) link_highlight_title_pane_g1

0x96bc,	// (0x00016879) link_highlight_title_pane_t1

0x969d,	// (0x0001685a) link_highlight_digital_pane_g1

0x96a5,	// (0x00016862) link_highlight_digital_pane_t1

0x9565,	// (0x00016722) copy_highlight_primary_pane_g1

0x957c,	// (0x00016739) copy_highlight_primary_pane_t1

0x9565,	// (0x00016722) copy_highlight_primary_small_pane_g1

0x956d,	// (0x0001672a) copy_highlight_primary_small_pane_t1

0x8112,	// (0x000152cf) copy_highlight_secondary_pane_g1

0x811a,	// (0x000152d7) copy_highlight_secondary_pane_t1

0x954e,	// (0x0001670b) copy_highlight_title_pane_g1

0x9556,	// (0x00016713) copy_highlight_title_pane_t1

0x9565,	// (0x00016722) copy_highlight_digital_pane_g1

0xa905,	// (0x00017ac2) copy_highlight_digital_pane_t1

0xa859,	// (0x00017a16) graphic_text_primary_pane_g1

0xa8e9,	// (0x00017aa6) graphic_text_primary_pane_t1

0xa8f7,	// (0x00017ab4) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001cb86) graphic_text_primary_pane_t

0xa8c5,	// (0x00017a82) graphic_text_primary_small_pane_g1

0xa8cd,	// (0x00017a8a) graphic_text_primary_small_pane_t1

0xa8db,	// (0x00017a98) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001cb81) graphic_text_primary_small_pane_t

0xa8a1,	// (0x00017a5e) graphic_text_secondary_pane_g1

0xa8a9,	// (0x00017a66) graphic_text_secondary_pane_t1

0xa8b7,	// (0x00017a74) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001cb7c) graphic_text_secondary_pane_t

0xa87d,	// (0x00017a3a) graphic_text_title_pane_g1

0xa885,	// (0x00017a42) graphic_text_title_pane_t1

0xa893,	// (0x00017a50) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001cb77) graphic_text_title_pane_t

0xa859,	// (0x00017a16) graphic_text_digital_pane_g1

0xa861,	// (0x00017a1e) graphic_text_digital_pane_t1

0xa86f,	// (0x00017a2c) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001cb72) graphic_text_digital_pane_t

0x3490,	// (0x0001064d) navi_icon_pane_srt_ParamLimits

0x3490,	// (0x0001064d) navi_icon_pane_srt

0x33ca,	// (0x00010587) navi_midp_pane_srt

0x33ca,	// (0x00010587) navi_navi_pane_srt

0x3490,	// (0x0001064d) navi_text_pane_srt_ParamLimits

0x3490,	// (0x0001064d) navi_text_pane_srt

0xa824,	// (0x000179e1) navi_navi_icon_text_pane_srt

0xa82c,	// (0x000179e9) navi_navi_pane_srt_g1_ParamLimits

0xa82c,	// (0x000179e9) navi_navi_pane_srt_g1

0xa83e,	// (0x000179fb) navi_navi_pane_srt_g2_ParamLimits

0xa83e,	// (0x000179fb) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001cb6d) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001cb6d) navi_navi_pane_srt_g

0xa850,	// (0x00017a0d) navi_navi_tabs_pane_srt

0xa824,	// (0x000179e1) navi_navi_text_pane_srt

0xa824,	// (0x000179e1) navi_navi_volume_pane_srt

0xa815,	// (0x000179d2) navi_navi_text_pane_srt_t1

0x61cc,	// (0x00013389) navi_navi_volume_pane_srt_g1

0x61d4,	// (0x00013391) volume_small_pane_srt_ParamLimits

0x61d4,	// (0x00013391) volume_small_pane_srt

0x5b41,	// (0x00012cfe) volume_small_pane_srt_g1_ParamLimits

0x5b41,	// (0x00012cfe) volume_small_pane_srt_g1

0x5b51,	// (0x00012d0e) volume_small_pane_srt_g2_ParamLimits

0x5b51,	// (0x00012d0e) volume_small_pane_srt_g2

0x5b62,	// (0x00012d1f) volume_small_pane_srt_g3_ParamLimits

0x5b62,	// (0x00012d1f) volume_small_pane_srt_g3

0x5b73,	// (0x00012d30) volume_small_pane_srt_g4_ParamLimits

0x5b73,	// (0x00012d30) volume_small_pane_srt_g4

0x5b84,	// (0x00012d41) volume_small_pane_srt_g5_ParamLimits

0x5b84,	// (0x00012d41) volume_small_pane_srt_g5

0x5b95,	// (0x00012d52) volume_small_pane_srt_g6_ParamLimits

0x5b95,	// (0x00012d52) volume_small_pane_srt_g6

0x5ba6,	// (0x00012d63) volume_small_pane_srt_g7_ParamLimits

0x5ba6,	// (0x00012d63) volume_small_pane_srt_g7

0x5bb7,	// (0x00012d74) volume_small_pane_srt_g8_ParamLimits

0x5bb7,	// (0x00012d74) volume_small_pane_srt_g8

0x5bc8,	// (0x00012d85) volume_small_pane_srt_g9_ParamLimits

0x5bc8,	// (0x00012d85) volume_small_pane_srt_g9

0x5bd9,	// (0x00012d96) volume_small_pane_srt_g10_ParamLimits

0x5bd9,	// (0x00012d96) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c915) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c915) volume_small_pane_srt_g

0x37c3,	// (0x00010980) query_popup_data_pane_cp2

0xa7fb,	// (0x000179b8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa7fb,	// (0x000179b8) navi_navi_icon_text_pane_srt_t1

0x97ed,	// (0x000169aa) navi_tabs_2_long_pane_srt

0x97ed,	// (0x000169aa) navi_tabs_2_pane_srt

0x97ed,	// (0x000169aa) navi_tabs_3_long_pane_srt

0x97ed,	// (0x000169aa) navi_tabs_3_pane_srt

0x97ed,	// (0x000169aa) navi_tabs_4_pane_srt

0x61ac,	// (0x00013369) tabs_2_active_pane_srt_ParamLimits

0x61ac,	// (0x00013369) tabs_2_active_pane_srt

0x61bc,	// (0x00013379) tabs_2_passive_pane_srt_ParamLimits

0x61bc,	// (0x00013379) tabs_2_passive_pane_srt

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp1_srt

0xa7c7,	// (0x00017984) bg_passive_tab_pane_g1_cp1_srt

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp1_srt

0xa7d0,	// (0x0001798d) bg_passive_tab_pane_g3_cp1_srt

0x3490,	// (0x0001064d) bg_active_tab_pane_cp1_srt_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp1_srt

0xa7d9,	// (0x00017996) tabs_2_active_pane_srt_g1

0xa7e1,	// (0x0001799e) tabs_2_active_pane_srt_t1_ParamLimits

0xa7e1,	// (0x0001799e) tabs_2_active_pane_srt_t1

0xa7c7,	// (0x00017984) bg_active_tab_pane_g1_cp1_srt

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp1_srt

0xa7d0,	// (0x0001798d) bg_active_tab_pane_g3_cp1_srt

0x6179,	// (0x00013336) tabs_3_active_pane_srt_ParamLimits

0x6179,	// (0x00013336) tabs_3_active_pane_srt

0x618a,	// (0x00013347) tabs_3_passive_pane_cp_srt_ParamLimits

0x618a,	// (0x00013347) tabs_3_passive_pane_cp_srt

0x619b,	// (0x00013358) tabs_3_passive_pane_srt_ParamLimits

0x619b,	// (0x00013358) tabs_3_passive_pane_srt

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8305,	// (0x000154c2) bg_passive_tab_pane_cp2_srt

0x8129,	// (0x000152e6) bg_passive_tab_pane_g1_cp2_srt

0x45dd,	// (0x0001179a) bg_passive_tab_pane_g2_cp2_srt

0x8132,	// (0x000152ef) bg_passive_tab_pane_g3_cp2_srt

0x3490,	// (0x0001064d) bg_active_tab_pane_cp2_srt_ParamLimits

0x3490,	// (0x0001064d) bg_active_tab_pane_cp2_srt

0xa7ad,	// (0x0001796a) tabs_3_active_pane_srt_g1

0xa7b5,	// (0x00017972) tabs_3_active_pane_srt_t1_ParamLimits

0xa7b5,	// (0x00017972) tabs_3_active_pane_srt_t1

0x8129,	// (0x000152e6) bg_active_tab_pane_g1_cp2_srt

0x45dd,	// (0x0001179a) bg_active_tab_pane_g2_cp2_srt

0x8132,	// (0x000152ef) bg_active_tab_pane_g3_cp2_srt

0x6131,	// (0x000132ee) tabs_4_active_pane_srt_ParamLimits

0x6131,	// (0x000132ee) tabs_4_active_pane_srt

0x6143,	// (0x00013300) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6143,	// (0x00013300) tabs_4_passive_pane_cp2_srt

0x8283,	// (0x00015440) aid_size_cell_toolbar

0x7b77,	// (0x00014d34) main_idle_act_pane_ParamLimits

0x84d6,	// (0x00015693) popup_large_graphic_colour_window_ParamLimits

0x887d,	// (0x00015a3a) popup_toolbar_window_ParamLimits

0x887d,	// (0x00015a3a) popup_toolbar_window

0xa56f,	// (0x0001772c) list_single_graphic_2heading_pane_ParamLimits

0xa56f,	// (0x0001772c) list_single_graphic_2heading_pane

0x412f,	// (0x000112ec) aid_size_cell_apps_grid_lsc_pane

0x4141,	// (0x000112fe) aid_size_cell_apps_grid_prt_pane

0x8305,	// (0x000154c2) bg_wml_button_pane_cp1_ParamLimits

0x8305,	// (0x000154c2) bg_wml_button_pane_cp1

0x91c5,	// (0x00016382) form_midp_field_text_pane_t1_ParamLimits

0x8fa2,	// (0x0001615f) input_focus_pane_cp050_ParamLimits

0x91f0,	// (0x000163ad) list_midp_form_text_pane_ParamLimits

0x91a2,	// (0x0001635f) input_focus_pane_cp051_ParamLimits

0x91b6,	// (0x00016373) list_midp_choice_pane_ParamLimits

0x905b,	// (0x00016218) list_single_2graphic_pane_cp3_ParamLimits

0x905b,	// (0x00016218) list_single_2graphic_pane_cp3

0x9074,	// (0x00016231) list_single_midp_graphic_pane_ParamLimits

0x9074,	// (0x00016231) list_single_midp_graphic_pane

0x5d34,	// (0x00012ef1) list_single_graphic_2heading_pane_g1_ParamLimits

0x5d34,	// (0x00012ef1) list_single_graphic_2heading_pane_g1

0x5d40,	// (0x00012efd) list_single_graphic_2heading_pane_g4_ParamLimits

0x5d40,	// (0x00012efd) list_single_graphic_2heading_pane_g4

0x5d4c,	// (0x00012f09) list_single_graphic_2heading_pane_g5_ParamLimits

0x5d4c,	// (0x00012f09) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c968) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c968) list_single_graphic_2heading_pane_g

0x5d58,	// (0x00012f15) list_single_graphic_2heading_pane_t1_ParamLimits

0x5d58,	// (0x00012f15) list_single_graphic_2heading_pane_t1

0x5d6c,	// (0x00012f29) list_single_graphic_2heading_pane_t2_ParamLimits

0x5d6c,	// (0x00012f29) list_single_graphic_2heading_pane_t2

0x5d88,	// (0x00012f45) list_single_graphic_2heading_pane_t3_ParamLimits

0x5d88,	// (0x00012f45) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c96f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c96f) list_single_graphic_2heading_pane_t

0x8d8c,	// (0x00015f49) bg_popup_sub_pane_cp2

0x8db6,	// (0x00015f73) grid_toobar_pane

0x5da0,	// (0x00012f5d) cell_toolbar_pane_ParamLimits

0x5da0,	// (0x00012f5d) cell_toolbar_pane

0x8e20,	// (0x00015fdd) cell_toolbar_pane_g1_ParamLimits

0x8e20,	// (0x00015fdd) cell_toolbar_pane_g1

0x8e34,	// (0x00015ff1) cell_toolbar_pane_g2_ParamLimits

0x8e34,	// (0x00015ff1) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c97d) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c97d) cell_toolbar_pane_g

0x8e56,	// (0x00016013) grid_highlight_pane_cp2_ParamLimits

0x8e56,	// (0x00016013) grid_highlight_pane_cp2

0x8e70,	// (0x0001602d) toolbar_button_pane

0x8e7c,	// (0x00016039) toolbar_button_pane_g1

0x8e84,	// (0x00016041) toolbar_button_pane_g2

0x8e8c,	// (0x00016049) toolbar_button_pane_g3

0x8e94,	// (0x00016051) toolbar_button_pane_g4

0x8e9c,	// (0x00016059) toolbar_button_pane_g5

0x8ea4,	// (0x00016061) toolbar_button_pane_g6

0x8eac,	// (0x00016069) toolbar_button_pane_g7

0x8eb4,	// (0x00016071) toolbar_button_pane_g8

0x8ebc,	// (0x00016079) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c982) toolbar_button_pane_g

0x5dd8,	// (0x00012f95) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5dd8,	// (0x00012f95) list_single_2graphic_pane_g1_cp3

0x5de4,	// (0x00012fa1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5de4,	// (0x00012fa1) list_single_2graphic_pane_g2_cp3

0x5df5,	// (0x00012fb2) list_single_2graphic_pane_g3_cp3

0x5dfd,	// (0x00012fba) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5dfd,	// (0x00012fba) list_single_2graphic_pane_g4_cp3

0x5e09,	// (0x00012fc6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5e09,	// (0x00012fc6) list_single_2graphic_pane_t1_cp3

0x5e24,	// (0x00012fe1) list_single_midp_graphic_pane_g2_ParamLimits

0x5e24,	// (0x00012fe1) list_single_midp_graphic_pane_g2

0x828b,	// (0x00015448) aid_zoom_text_primary

0x8293,	// (0x00015450) aid_zoom_text_secondary

0x81e3,	// (0x000153a0) status_small_pane_g7_ParamLimits

0x81e3,	// (0x000153a0) status_small_pane_g7

0x8206,	// (0x000153c3) status_small_pane_t1_ParamLimits

0x725c,	// (0x00014419) title_pane_g2

0x0003,

0xf54e,	// (0x0001c70b) title_pane_g

0x741e,	// (0x000145db) aid_size_cell_colour_1_pane_ParamLimits

0x741e,	// (0x000145db) aid_size_cell_colour_1_pane

0x7432,	// (0x000145ef) aid_size_cell_colour_2_pane_ParamLimits

0x7432,	// (0x000145ef) aid_size_cell_colour_2_pane

0x7446,	// (0x00014603) aid_size_cell_colour_3_pane_ParamLimits

0x7446,	// (0x00014603) aid_size_cell_colour_3_pane

0x745a,	// (0x00014617) aid_size_cell_colour_4_pane_ParamLimits

0x745a,	// (0x00014617) aid_size_cell_colour_4_pane

0x5796,	// (0x00012953) title_pane_stacon_g1_ParamLimits

0x5796,	// (0x00012953) title_pane_stacon_g1

0x95d3,	// (0x00016790) popup_note_wait_window_g3_ParamLimits

0x95d3,	// (0x00016790) popup_note_wait_window_g3

0x964a,	// (0x00016807) popup_note_wait_window_t5_ParamLimits

0x964a,	// (0x00016807) popup_note_wait_window_t5

0x33ca,	// (0x00010587) main_feb_china_hwr_fs_writing_pane

0x839d,	// (0x0001555a) popup_feb_china_hwr_fs_window_ParamLimits

0x839d,	// (0x0001555a) popup_feb_china_hwr_fs_window

0x5e46,	// (0x00013003) aid_size_cell_hwr_fs_ParamLimits

0x5e46,	// (0x00013003) aid_size_cell_hwr_fs

0x8fa2,	// (0x0001615f) bg_popup_sub_pane_cp3_ParamLimits

0x8fa2,	// (0x0001615f) bg_popup_sub_pane_cp3

0x5e5b,	// (0x00013018) grid_hwr_fs_pane_ParamLimits

0x5e5b,	// (0x00013018) grid_hwr_fs_pane

0x5e73,	// (0x00013030) linegrid_hwr_fs_pane_ParamLimits

0x5e73,	// (0x00013030) linegrid_hwr_fs_pane

0x5e83,	// (0x00013040) cell_hwr_fs_pane_ParamLimits

0x5e83,	// (0x00013040) cell_hwr_fs_pane

0x8fae,	// (0x0001616b) linegrid_hwr_fs_pane_g1_ParamLimits

0x8fae,	// (0x0001616b) linegrid_hwr_fs_pane_g1

0x8fba,	// (0x00016177) linegrid_hwr_fs_pane_g2_ParamLimits

0x8fba,	// (0x00016177) linegrid_hwr_fs_pane_g2

0x8fcc,	// (0x00016189) linegrid_hwr_fs_pane_g3_ParamLimits

0x8fcc,	// (0x00016189) linegrid_hwr_fs_pane_g3

0x5ea7,	// (0x00013064) linegrid_hwr_fs_pane_g4_ParamLimits

0x5ea7,	// (0x00013064) linegrid_hwr_fs_pane_g4

0x5ec5,	// (0x00013082) linegrid_hwr_fs_pane_g5_ParamLimits

0x5ec5,	// (0x00013082) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001c9ad) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001c9ad) linegrid_hwr_fs_pane_g

0x8fd8,	// (0x00016195) cell_hwr_fs_pane_g1_ParamLimits

0x8fd8,	// (0x00016195) cell_hwr_fs_pane_g1

0x8cc3,	// (0x00015e80) cell_hwr_fs_pane_g2_ParamLimits

0x8cc3,	// (0x00015e80) cell_hwr_fs_pane_g2

0x8fee,	// (0x000161ab) cell_hwr_fs_pane_g3_ParamLimits

0x8fee,	// (0x000161ab) cell_hwr_fs_pane_g3

0x8ffb,	// (0x000161b8) cell_hwr_fs_pane_g4_ParamLimits

0x8ffb,	// (0x000161b8) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001c9b8) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001c9b8) cell_hwr_fs_pane_g

0x5edb,	// (0x00013098) cell_hwr_fs_pane_t1

0x33ca,	// (0x00010587) grid_highlight_pane_cp6

0x33ca,	// (0x00010587) main_idle_act2_pane

0x3d96,	// (0x00010f53) aid_inside_area_popup_secondary

0x9c83,	// (0x00016e40) aid_inside_area_window_primary_ParamLimits

0x9c83,	// (0x00016e40) aid_inside_area_window_primary

0xa914,	// (0x00017ad1) ai2_news_ticker_pane

0xa91c,	// (0x00017ad9) aid_size_cell_ai1_link_ParamLimits

0xa91c,	// (0x00017ad9) aid_size_cell_ai1_link

0xa936,	// (0x00017af3) popup_ai2_data_window_ParamLimits

0xa936,	// (0x00017af3) popup_ai2_data_window

0xa954,	// (0x00017b11) popup_ai2_link_window_ParamLimits

0xa954,	// (0x00017b11) popup_ai2_link_window

0x8fa2,	// (0x0001615f) bg_popup_sub_pane_cp4_ParamLimits

0x8fa2,	// (0x0001615f) bg_popup_sub_pane_cp4

0xa96a,	// (0x00017b27) grid_ai2_link_pane_ParamLimits

0xa96a,	// (0x00017b27) grid_ai2_link_pane

0xa981,	// (0x00017b3e) popup_ai2_link_window_g1_ParamLimits

0xa981,	// (0x00017b3e) popup_ai2_link_window_g1

0xa98d,	// (0x00017b4a) popup_ai2_link_window_g2_ParamLimits

0xa98d,	// (0x00017b4a) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001cb8b) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001cb8b) popup_ai2_link_window_g

0xa99e,	// (0x00017b5b) ai2_mp_button_pane

0xa9a6,	// (0x00017b63) ai2_mp_volume_pane

0x91a2,	// (0x0001635f) bg_popup_sub_pane_cp5_ParamLimits

0x91a2,	// (0x0001635f) bg_popup_sub_pane_cp5

0xa9ae,	// (0x00017b6b) heading_ai2_gene_pane_ParamLimits

0xa9ae,	// (0x00017b6b) heading_ai2_gene_pane

0xa9ba,	// (0x00017b77) list_ai2_gene_pane_ParamLimits

0xa9ba,	// (0x00017b77) list_ai2_gene_pane

0xaa02,	// (0x00017bbf) cell_ai2_link_pane_ParamLimits

0xaa02,	// (0x00017bbf) cell_ai2_link_pane

0xaa18,	// (0x00017bd5) cell_ai2_link_pane_g1

0x33ca,	// (0x00010587) grid_highlight_pane_cp7

0x61e9,	// (0x000133a6) ai2_mp_volume_pane_g1

0xaaeb,	// (0x00017ca8) ai2_mp_volume_pane_g2

0xaa60,	// (0x00017c1d) list_ai2_gene_pane_t1

0xaaf3,	// (0x00017cb0) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001cba4) ai2_mp_volume_pane_g

0x61f1,	// (0x000133ae) volume_small_pane_cp3

0xaafb,	// (0x00017cb8) aid_size_cell_ai2_button

0xab03,	// (0x00017cc0) grid_ai2_button_pane

0xab0c,	// (0x00017cc9) cell_ai2_button_pane_ParamLimits

0xab0c,	// (0x00017cc9) cell_ai2_button_pane

0x3251,	// (0x0001040e) cell_ai2_button_pane_g1

0x33ca,	// (0x00010587) grid_highlight_pane_cp8

0xaaab,	// (0x00017c68) ai2_gene_pane_t1_ParamLimits

0xaaab,	// (0x00017c68) ai2_gene_pane_t1

0x8279,	// (0x00015436) aid_height_parent_landscape

0xa33d,	// (0x000174fa) aid_height_set_list

0xa34e,	// (0x0001750b) aid_size_parent

0xa735,	// (0x000178f2) aid_size_cell_graphic_pane_ParamLimits

0xa9ca,	// (0x00017b87) popup_ai2_data_window_g1_ParamLimits

0xa9ca,	// (0x00017b87) popup_ai2_data_window_g1

0xa9d6,	// (0x00017b93) ai2_news_ticker_pane_g1

0xa9de,	// (0x00017b9b) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001cb90) ai2_news_ticker_pane_g

0xa9e6,	// (0x00017ba3) ai2_news_ticker_pane_t1

0xa9f4,	// (0x00017bb1) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001cb95) ai2_news_ticker_pane_t

0xaa21,	// (0x00017bde) heading_ai2_gene_pane_g1

0xaa29,	// (0x00017be6) heading_ai2_gene_pane_t1_ParamLimits

0xaa29,	// (0x00017be6) heading_ai2_gene_pane_t1

0xaa3e,	// (0x00017bfb) list_highlight_pane_cp6

0xaa46,	// (0x00017c03) ai2_gene_pane_ParamLimits

0xaa46,	// (0x00017c03) ai2_gene_pane

0xaa6e,	// (0x00017c2b) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001cb9a) list_ai2_gene_pane_t

0xaa7c,	// (0x00017c39) list_highlight_pane_cp8_ParamLimits

0xaa7c,	// (0x00017c39) list_highlight_pane_cp8

0xaa8d,	// (0x00017c4a) ai2_gene_pane_g1_ParamLimits

0xaa8d,	// (0x00017c4a) ai2_gene_pane_g1

0xaa9f,	// (0x00017c5c) ai2_gene_pane_g2_ParamLimits

0xaa9f,	// (0x00017c5c) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001cb9f) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001cb9f) ai2_gene_pane_g

0x3ade,	// (0x00010c9b) scroll_pane_cp12

0x5cf3,	// (0x00012eb0) control_pane_t3_ParamLimits

0x5cf3,	// (0x00012eb0) control_pane_t3

0x81f7,	// (0x000153b4) status_small_pane_g8_ParamLimits

0x81f7,	// (0x000153b4) status_small_pane_g8

0x849b,	// (0x00015658) popup_find_window_ParamLimits

0x86c6,	// (0x00015883) popup_note_image_window_ParamLimits

0x8df2,	// (0x00015faf) list_double2_graphic_pane_vc_g1_ParamLimits

0x8df2,	// (0x00015faf) list_double2_graphic_pane_vc_g1

0x7ef0,	// (0x000150ad) list_double2_graphic_pane_vc_g2_ParamLimits

0x7ef0,	// (0x000150ad) list_double2_graphic_pane_vc_g2

0x8dfe,	// (0x00015fbb) list_double2_graphic_pane_vc_g3_ParamLimits

0x8dfe,	// (0x00015fbb) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c976) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c976) list_double2_graphic_pane_vc_g

0x8e0a,	// (0x00015fc7) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e0a,	// (0x00015fc7) list_double2_graphic_pane_vc_t1

0x7ef0,	// (0x000150ad) list_single_heading_pane_vc_g1_ParamLimits

0x7ef0,	// (0x000150ad) list_single_heading_pane_vc_g1

0x8dfe,	// (0x00015fbb) list_single_heading_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00015fbb) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c997) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c997) list_single_heading_pane_vc_g

0x8ec4,	// (0x00016081) list_single_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x00016081) list_single_heading_pane_vc_t1

0x8edc,	// (0x00016099) list_single_heading_pane_vc_t2_ParamLimits

0x8edc,	// (0x00016099) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c99c) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c99c) list_single_heading_pane_vc_t

0x8eee,	// (0x000160ab) list_setting_number_pane_vc_g1_ParamLimits

0x8eee,	// (0x000160ab) list_setting_number_pane_vc_g1

0x8efa,	// (0x000160b7) list_setting_number_pane_vc_g2_ParamLimits

0x8efa,	// (0x000160b7) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c9a1) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c9a1) list_setting_number_pane_vc_g

0x8f06,	// (0x000160c3) list_setting_number_pane_vc_t1_ParamLimits

0x8f06,	// (0x000160c3) list_setting_number_pane_vc_t1

0x8f1a,	// (0x000160d7) list_setting_number_pane_vc_t2_ParamLimits

0x8f1a,	// (0x000160d7) list_setting_number_pane_vc_t2

0x8f36,	// (0x000160f3) list_setting_number_pane_vc_t3_ParamLimits

0x8f36,	// (0x000160f3) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001c9a6) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001c9a6) list_setting_number_pane_vc_t

0x8f64,	// (0x00016121) set_value_pane_vc_ParamLimits

0x8f64,	// (0x00016121) set_value_pane_vc

0xa56f,	// (0x0001772c) list_double2_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double2_graphic_pane_vc

0xa56f,	// (0x0001772c) list_double2_large_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double2_large_graphic_pane_vc

0xa56f,	// (0x0001772c) list_double2_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double2_pane_vc

0xa56f,	// (0x0001772c) list_double_graphic_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_graphic_heading_pane_vc

0xa56f,	// (0x0001772c) list_double_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_graphic_pane_vc

0xa56f,	// (0x0001772c) list_double_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_heading_pane_vc

0xa583,	// (0x00017740) list_double_large_graphic_pane_vc_ParamLimits

0xa583,	// (0x00017740) list_double_large_graphic_pane_vc

0xa56f,	// (0x0001772c) list_double_number_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_number_pane_vc

0xa56f,	// (0x0001772c) list_double_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_pane_vc

0xa56f,	// (0x0001772c) list_double_time_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_double_time_pane_vc

0xa56f,	// (0x0001772c) list_setting_number_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_setting_number_pane_vc

0xa56f,	// (0x0001772c) list_setting_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_setting_pane_vc

0xa56f,	// (0x0001772c) list_single_graphic_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_single_graphic_heading_pane_vc

0xa56f,	// (0x0001772c) list_single_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001772c) list_single_heading_pane_vc

0xa5a5,	// (0x00017762) list_single_number_heading_pane_vc_ParamLimits

0xa5a5,	// (0x00017762) list_single_number_heading_pane_vc

0x8df2,	// (0x00015faf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8df2,	// (0x00015faf) list_double_graphic_heading_pane_vc_g1

0xab3f,	// (0x00017cfc) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xab3f,	// (0x00017cfc) list_double_graphic_heading_pane_vc_g2

0xab4b,	// (0x00017d08) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xab4b,	// (0x00017d08) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001cbab) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001cbab) list_double_graphic_heading_pane_vc_g

0xab57,	// (0x00017d14) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xab57,	// (0x00017d14) list_double_graphic_heading_pane_vc_t1

0xab6d,	// (0x00017d2a) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xab6d,	// (0x00017d2a) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001cbb2) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001cbb2) list_double_graphic_heading_pane_vc_t

0x8eee,	// (0x000160ab) list_setting_pane_vc_g1_ParamLimits

0x8eee,	// (0x000160ab) list_setting_pane_vc_g1

0x8efa,	// (0x000160b7) list_setting_pane_vc_g2_ParamLimits

0x8efa,	// (0x000160b7) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c9a1) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c9a1) list_setting_pane_vc_g

0xadb3,	// (0x00017f70) list_setting_pane_vc_t1_ParamLimits

0xadb3,	// (0x00017f70) list_setting_pane_vc_t1

0xadcf,	// (0x00017f8c) list_setting_pane_vc_t2_ParamLimits

0xadcf,	// (0x00017f8c) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001cbe0) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001cbe0) list_setting_pane_vc_t

0x8f64,	// (0x00016121) set_value_pane_cp_vc_ParamLimits

0x8f64,	// (0x00016121) set_value_pane_cp_vc

0x7ef0,	// (0x000150ad) list_single_number_heading_pane_vc_g1_ParamLimits

0x7ef0,	// (0x000150ad) list_single_number_heading_pane_vc_g1

0x8dfe,	// (0x00015fbb) list_single_number_heading_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00015fbb) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c997) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c997) list_single_number_heading_pane_vc_g

0x8ec4,	// (0x00016081) list_single_number_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x00016081) list_single_number_heading_pane_vc_t1

0xadeb,	// (0x00017fa8) list_single_number_heading_pane_vc_t2_ParamLimits

0xadeb,	// (0x00017fa8) list_single_number_heading_pane_vc_t2

0xadfd,	// (0x00017fba) list_single_number_heading_pane_vc_t3_ParamLimits

0xadfd,	// (0x00017fba) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001cbe5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001cbe5) list_single_number_heading_pane_vc_t

0x8df2,	// (0x00015faf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8df2,	// (0x00015faf) list_single_graphic_heading_pane_vc_g1

0x7ef0,	// (0x000150ad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7ef0,	// (0x000150ad) list_single_graphic_heading_pane_vc_g4

0x8dfe,	// (0x00015fbb) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8dfe,	// (0x00015fbb) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c976) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c976) list_single_graphic_heading_pane_vc_g

0x8ec4,	// (0x00016081) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x00016081) list_single_graphic_heading_pane_vc_t1

0xae0f,	// (0x00017fcc) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xae0f,	// (0x00017fcc) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001cbec) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001cbec) list_single_graphic_heading_pane_vc_t

0x7ef0,	// (0x000150ad) list_double2_pane_vc_g1_ParamLimits

0x7ef0,	// (0x000150ad) list_double2_pane_vc_g1

0x8dfe,	// (0x00015fbb) list_double2_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00015fbb) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c997) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c997) list_double2_pane_vc_g

0xae21,	// (0x00017fde) list_double2_pane_vc_t1_ParamLimits

0xae21,	// (0x00017fde) list_double2_pane_vc_t1

0xae37,	// (0x00017ff4) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae37,	// (0x00017ff4) list_double2_large_graphic_pane_vc_g1

0x7ef0,	// (0x000150ad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x7ef0,	// (0x000150ad) list_double2_large_graphic_pane_vc_g2

0x8dfe,	// (0x00015fbb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8dfe,	// (0x00015fbb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001cbf1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001cbf1) list_double2_large_graphic_pane_vc_g

0xae43,	// (0x00018000) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xae43,	// (0x00018000) list_double2_large_graphic_pane_vc_t1

0xae59,	// (0x00018016) list_double_time_pane_vc_g1_ParamLimits

0xae59,	// (0x00018016) list_double_time_pane_vc_g1

0xae65,	// (0x00018022) list_double_time_pane_vc_g2_ParamLimits

0xae65,	// (0x00018022) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001cbf8) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001cbf8) list_double_time_pane_vc_g

0xae71,	// (0x0001802e) list_double_time_pane_vc_t1_ParamLimits

0xae71,	// (0x0001802e) list_double_time_pane_vc_t1

0xaea1,	// (0x0001805e) list_double_time_pane_vc_t2_ParamLimits

0xaea1,	// (0x0001805e) list_double_time_pane_vc_t2

0xaeca,	// (0x00018087) list_double_time_pane_vc_t3_ParamLimits

0xaeca,	// (0x00018087) list_double_time_pane_vc_t3

0xaedc,	// (0x00018099) list_double_time_pane_vc_t4_ParamLimits

0xaedc,	// (0x00018099) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001cbfd) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001cbfd) list_double_time_pane_vc_t

0x7ef0,	// (0x000150ad) list_double_pane_vc_g1_ParamLimits

0x7ef0,	// (0x000150ad) list_double_pane_vc_g1

0x8dfe,	// (0x00015fbb) list_double_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00015fbb) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c997) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c997) list_double_pane_vc_g

0xaf01,	// (0x000180be) list_double_pane_vc_t1_ParamLimits

0xaf01,	// (0x000180be) list_double_pane_vc_t1

0xaf15,	// (0x000180d2) list_double_pane_vc_t2_ParamLimits

0xaf15,	// (0x000180d2) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001cc06) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001cc06) list_double_pane_vc_t

0x7ef0,	// (0x000150ad) list_double_number_pane_vc_g1_ParamLimits

0x7ef0,	// (0x000150ad) list_double_number_pane_vc_g1

0x8dfe,	// (0x00015fbb) list_double_number_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00015fbb) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c997) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c997) list_double_number_pane_vc_g

0xaf2b,	// (0x000180e8) list_double_number_pane_vc_t1_ParamLimits

0xaf2b,	// (0x000180e8) list_double_number_pane_vc_t1

0xaf3f,	// (0x000180fc) list_double_number_pane_vc_t2_ParamLimits

0xaf3f,	// (0x000180fc) list_double_number_pane_vc_t2

0xaf53,	// (0x00018110) list_double_number_pane_vc_t3_ParamLimits

0xaf53,	// (0x00018110) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001cc0b) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001cc0b) list_double_number_pane_vc_t

0xaf69,	// (0x00018126) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaf69,	// (0x00018126) list_double_large_graphic_pane_vc_g1

0xaf91,	// (0x0001814e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaf91,	// (0x0001814e) list_double_large_graphic_pane_vc_g2

0xafa5,	// (0x00018162) list_double_large_graphic_pane_vc_g3_ParamLimits

0xafa5,	// (0x00018162) list_double_large_graphic_pane_vc_g3

0xafb4,	// (0x00018171) list_double_large_graphic_pane_vc_g4_ParamLimits

0xafb4,	// (0x00018171) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001cc12) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001cc12) list_double_large_graphic_pane_vc_g

0xafc4,	// (0x00018181) list_double_large_graphic_pane_vc_t1_ParamLimits

0xafc4,	// (0x00018181) list_double_large_graphic_pane_vc_t1

0xafe6,	// (0x000181a3) list_double_large_graphic_pane_vc_t2_ParamLimits

0xafe6,	// (0x000181a3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001cc1b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001cc1b) list_double_large_graphic_pane_vc_t

0xab3f,	// (0x00017cfc) list_double_heading_pane_vc_g1_ParamLimits

0xab3f,	// (0x00017cfc) list_double_heading_pane_vc_g1

0xab4b,	// (0x00017d08) list_double_heading_pane_vc_g2_ParamLimits

0xab4b,	// (0x00017d08) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001cc20) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001cc20) list_double_heading_pane_vc_g

0xb006,	// (0x000181c3) list_double_heading_pane_vc_t1_ParamLimits

0xb006,	// (0x000181c3) list_double_heading_pane_vc_t1

0x8ec4,	// (0x00016081) list_double_heading_pane_vc_t2_ParamLimits

0x8ec4,	// (0x00016081) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001cc25) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001cc25) list_double_heading_pane_vc_t

0xb018,	// (0x000181d5) list_double_graphic_pane_vc_g1_ParamLimits

0xb018,	// (0x000181d5) list_double_graphic_pane_vc_g1

0xb024,	// (0x000181e1) list_double_graphic_pane_vc_g2_ParamLimits

0xb024,	// (0x000181e1) list_double_graphic_pane_vc_g2

0x7ef0,	// (0x000150ad) list_double_graphic_pane_vc_g3_ParamLimits

0x7ef0,	// (0x000150ad) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001cc2a) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001cc2a) list_double_graphic_pane_vc_g

0xb041,	// (0x000181fe) list_double_graphic_pane_vc_t1_ParamLimits

0xb041,	// (0x000181fe) list_double_graphic_pane_vc_t1

0xb06b,	// (0x00018228) list_double_graphic_pane_vc_t2_ParamLimits

0xb06b,	// (0x00018228) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001cc33) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001cc33) list_double_graphic_pane_vc_t

0x52d6,	// (0x00012493) aid_size_cell_fastswap

0x52de,	// (0x0001249b) aid_size_cell_touch_ParamLimits

0x52de,	// (0x0001249b) aid_size_cell_touch

0x5549,	// (0x00012706) popup_fast_swap_wide_window_ParamLimits

0x5549,	// (0x00012706) popup_fast_swap_wide_window

0x5667,	// (0x00012824) touch_pane_ParamLimits

0x5667,	// (0x00012824) touch_pane

0x3b7b,	// (0x00010d38) button_value_adjust_pane_cp2

0x3b83,	// (0x00010d40) button_value_adjust_pane_cp4

0x3b8b,	// (0x00010d48) form_field_data_pane_cp2

0x79da,	// (0x00014b97) form_field_data_wide_pane_cp2

0x4187,	// (0x00011344) bg_scroll_pane_ParamLimits

0x58fb,	// (0x00012ab8) scroll_handle_pane_ParamLimits

0x590f,	// (0x00012acc) scroll_sc2_down_pane_ParamLimits

0x590f,	// (0x00012acc) scroll_sc2_down_pane

0x41e1,	// (0x0001139e) scroll_sc2_up_pane_ParamLimits

0x41e1,	// (0x0001139e) scroll_sc2_up_pane

0xb547,	// (0x00018704) grid_wheel_folder_pane_g1_ParamLimits

0xb547,	// (0x00018704) grid_wheel_folder_pane_g1

0x5ad9,	// (0x00012c96) clock_nsta_pane_cp2_ParamLimits

0x5ad9,	// (0x00012c96) clock_nsta_pane_cp2

0x7b77,	// (0x00014d34) listscroll_midp_pane_ParamLimits

0x7f87,	// (0x00015144) midp_canvas_pane

0x8271,	// (0x0001542e) nsta_clock_indic_pane

0x82cf,	// (0x0001548c) listscroll_form_pane_vc

0x82f3,	// (0x000154b0) listscroll_set_pane_vc_ParamLimits

0x82f3,	// (0x000154b0) listscroll_set_pane_vc

0x8a17,	// (0x00015bd4) clock_nsta_pane

0x8a94,	// (0x00015c51) indicator_nsta_pane

0x8d8c,	// (0x00015f49) bg_popup_sub_pane_cp2_ParamLimits

0x8da0,	// (0x00015f5d) find_pane_cp2_ParamLimits

0x8da0,	// (0x00015f5d) find_pane_cp2

0x8db6,	// (0x00015f73) grid_toobar_pane_ParamLimits

0x8f76,	// (0x00016133) list_form_gen_pane_vc_ParamLimits

0x8f76,	// (0x00016133) list_form_gen_pane_vc

0x8f8c,	// (0x00016149) scroll_pane_cp8_vc_ParamLimits

0x8f8c,	// (0x00016149) scroll_pane_cp8_vc

0x9008,	// (0x000161c5) data_form_wide_pane_vc_ParamLimits

0x9008,	// (0x000161c5) data_form_wide_pane_vc

0x9014,	// (0x000161d1) form_field_data_wide_pane_vc_g1

0x901c,	// (0x000161d9) form_field_data_wide_pane_vc_t1_ParamLimits

0x901c,	// (0x000161d9) form_field_data_wide_pane_vc_t1

0x3be6,	// (0x00010da3) input_focus_pane_cp6_vc_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_cp6_vc

0x934d,	// (0x0001650a) list_midp_pane_ParamLimits

0x9359,	// (0x00016516) scroll_pane_cp16_ParamLimits

0x9359,	// (0x00016516) scroll_pane_cp16

0x93a7,	// (0x00016564) button_value_adjust_pane_ParamLimits

0x93a7,	// (0x00016564) button_value_adjust_pane

0xa360,	// (0x0001751d) button_value_adjust_pane_cp6_ParamLimits

0xa360,	// (0x0001751d) button_value_adjust_pane_cp6

0xa4ae,	// (0x0001766b) settings_code_pane_cp_ParamLimits

0xa4ae,	// (0x0001766b) settings_code_pane_cp

0x3251,	// (0x0001040e) cell_touch_pane_g1

0x3251,	// (0x0001040e) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c8bb) cell_touch_pane_g

0xab1e,	// (0x00017cdb) cell_touch_pane_cp_ParamLimits

0xab1e,	// (0x00017cdb) cell_touch_pane_cp

0xab2e,	// (0x00017ceb) cell_touch_pane_ParamLimits

0xab2e,	// (0x00017ceb) cell_touch_pane

0x3251,	// (0x0001040e) scroll_sc2_down_pane_g1

0x3251,	// (0x0001040e) scroll_sc2_up_pane_g1

0x33ca,	// (0x00010587) bg_set_opt_pane_cp4_vc

0xab8b,	// (0x00017d48) list_set_graphic_pane_vc_g1_ParamLimits

0xab8b,	// (0x00017d48) list_set_graphic_pane_vc_g1

0x3e01,	// (0x00010fbe) list_set_graphic_pane_vc_g2_ParamLimits

0x3e01,	// (0x00010fbe) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001cbb7) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001cbb7) list_set_graphic_pane_vc_g

0xab97,	// (0x00017d54) text_primary_small_cp13_vc_ParamLimits

0xab97,	// (0x00017d54) text_primary_small_cp13_vc

0xabaf,	// (0x00017d6c) list_set_graphic_pane_vc_ParamLimits

0xabaf,	// (0x00017d6c) list_set_graphic_pane_vc

0x33ca,	// (0x00010587) input_focus_pane_cp2_vc

0x3251,	// (0x0001040e) setting_code_pane_vc_g1

0x3530,	// (0x000106ed) setting_code_pane_vc_t1

0xabc4,	// (0x00017d81) set_text_pane_vc_t1_ParamLimits

0xabc4,	// (0x00017d81) set_text_pane_vc_t1

0x33ca,	// (0x00010587) input_focus_pane_cp1_vc

0xabe2,	// (0x00017d9f) list_set_text_pane_vc

0x3251,	// (0x0001040e) setting_text_pane_vc_g1

0x33ca,	// (0x00010587) bg_set_opt_pane_cp2_vc

0x34ff,	// (0x000106bc) setting_slider_graphic_pane_vc_g1

0xabec,	// (0x00017da9) setting_slider_graphic_pane_vc_t1

0xabfe,	// (0x00017dbb) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001cbbc) setting_slider_graphic_pane_vc_t

0xac10,	// (0x00017dcd) slider_set_pane_cp_vc

0xac1a,	// (0x00017dd7) slider_set_pane_vc_g1

0xac23,	// (0x00017de0) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001cbc1) slider_set_pane_vc_g

0x3caf,	// (0x00010e6c) set_opt_bg_pane_g1_copy1

0x3cb7,	// (0x00010e74) set_opt_bg_pane_g2_copy1

0xac4f,	// (0x00017e0c) set_opt_bg_pane_g3_copy1

0x3cc7,	// (0x00010e84) set_opt_bg_pane_g4_copy1

0x3ccf,	// (0x00010e8c) set_opt_bg_pane_g5_copy1

0x3cd7,	// (0x00010e94) set_opt_bg_pane_g6_copy1

0xac59,	// (0x00017e16) set_opt_bg_pane_g7_copy1

0xac63,	// (0x00017e20) set_opt_bg_pane_g8_copy1

0xac6d,	// (0x00017e2a) set_opt_bg_pane_g9_copy1

0x33ca,	// (0x00010587) bg_set_opt_pane_cp_vc

0xac77,	// (0x00017e34) setting_slider_pane_vc_t1

0xac86,	// (0x00017e43) setting_slider_pane_vc_t2

0xac98,	// (0x00017e55) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001cbd0) setting_slider_pane_vc_t

0xacaa,	// (0x00017e67) slider_set_pane_vc

0x5ee9,	// (0x000130a6) volume_set_pane_vc_g1

0x5ef2,	// (0x000130af) volume_set_pane_vc_g2

0x5efb,	// (0x000130b8) volume_set_pane_vc_g3

0x5f04,	// (0x000130c1) volume_set_pane_vc_g4

0x5f0d,	// (0x000130ca) volume_set_pane_vc_g5

0x5f16,	// (0x000130d3) volume_set_pane_vc_g6

0x5f1f,	// (0x000130dc) volume_set_pane_vc_g7

0x5f28,	// (0x000130e5) volume_set_pane_vc_g8

0x5f31,	// (0x000130ee) volume_set_pane_vc_g9

0x5f3a,	// (0x000130f7) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001ca6e) volume_set_pane_vc_g

0xacb4,	// (0x00017e71) volume_set_pane_vc

0xacbe,	// (0x00017e7b) button_value_adjust_pane_cp1_vc

0xacc8,	// (0x00017e85) list_highlight_pane_cp2_vc

0xacd1,	// (0x00017e8e) list_set_pane_vc_ParamLimits

0xacd1,	// (0x00017e8e) list_set_pane_vc

0xad41,	// (0x00017efe) main_pane_set_vc_t1_ParamLimits

0xad41,	// (0x00017efe) main_pane_set_vc_t1

0xad56,	// (0x00017f13) main_pane_set_vc_t2_ParamLimits

0xad56,	// (0x00017f13) main_pane_set_vc_t2

0xad68,	// (0x00017f25) main_pane_set_vc_t3_ParamLimits

0xad68,	// (0x00017f25) main_pane_set_vc_t3

0xad7c,	// (0x00017f39) main_pane_set_vc_t4_ParamLimits

0xad7c,	// (0x00017f39) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001cbd7) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001cbd7) main_pane_set_vc_t

0xad90,	// (0x00017f4d) setting_code_pane_vc_ParamLimits

0xad90,	// (0x00017f4d) setting_code_pane_vc

0xada1,	// (0x00017f5e) setting_slider_graphic_pane_vc

0xada1,	// (0x00017f5e) setting_slider_pane_vc

0xada1,	// (0x00017f5e) setting_text_pane_vc

0xada1,	// (0x00017f5e) setting_volume_pane_vc

0xadab,	// (0x00017f68) scroll_pane_cp121_vc

0x3b69,	// (0x00010d26) set_content_pane_vc

0xb089,	// (0x00018246) button_value_adjust_pane_g1

0xb092,	// (0x0001824f) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001cc38) button_value_adjust_pane_g

0xb09b,	// (0x00018258) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb09b,	// (0x00018258) form_field_slider_wide_pane_vc_t1

0xb0ad,	// (0x0001826a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb0ad,	// (0x0001826a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001cc3d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001cc3d) form_field_slider_wide_pane_vc_t

0x3478,	// (0x00010635) input_focus_pane_cp10_vc_ParamLimits

0x3478,	// (0x00010635) input_focus_pane_cp10_vc

0xb0d9,	// (0x00018296) slider_cont_pane_cp1_vc_ParamLimits

0xb0d9,	// (0x00018296) slider_cont_pane_cp1_vc

0xb0eb,	// (0x000182a8) slider_form_pane_g1_cp2

0xac23,	// (0x00017de0) slider_form_pane_g2_cp2

0xb118,	// (0x000182d5) form_field_slider_pane_vc_t3

0xb126,	// (0x000182e3) form_field_slider_pane_vc_t4

0xb134,	// (0x000182f1) slider_form_pane_vc_ParamLimits

0xb134,	// (0x000182f1) slider_form_pane_vc

0xb141,	// (0x000182fe) form_field_slider_pane_vc_t1_ParamLimits

0xb141,	// (0x000182fe) form_field_slider_pane_vc_t1

0xb0ad,	// (0x0001826a) form_field_slider_pane_vc_t2_ParamLimits

0xb0ad,	// (0x0001826a) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001cc4f) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001cc4f) form_field_slider_pane_vc_t

0x3478,	// (0x00010635) input_focus_pane_cp9_vc_ParamLimits

0x3478,	// (0x00010635) input_focus_pane_cp9_vc

0xb157,	// (0x00018314) slider_cont_pane_vc_ParamLimits

0xb157,	// (0x00018314) slider_cont_pane_vc

0xb16b,	// (0x00018328) list_form_graphic_pane_cp_vc_ParamLimits

0xb16b,	// (0x00018328) list_form_graphic_pane_cp_vc

0x9014,	// (0x000161d1) form_field_popup_wide_pane_vc_g1

0xb180,	// (0x0001833d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb180,	// (0x0001833d) form_field_popup_wide_pane_vc_t1

0x3be6,	// (0x00010da3) input_focus_pane_cp8_vc_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_cp8_vc

0xb1c5,	// (0x00018382) list_form_wide_pane_vc_ParamLimits

0xb1c5,	// (0x00018382) list_form_wide_pane_vc

0xb1d1,	// (0x0001838e) list_form_graphic_pane_vc_g1

0xb1d9,	// (0x00018396) list_form_graphic_pane_vc_t1_ParamLimits

0xb1d9,	// (0x00018396) list_form_graphic_pane_vc_t1

0x3490,	// (0x0001064d) list_highlight_pane_cp5_vc_ParamLimits

0x3490,	// (0x0001064d) list_highlight_pane_cp5_vc

0xb1f5,	// (0x000183b2) list_form_graphic_pane_vc_ParamLimits

0xb1f5,	// (0x000183b2) list_form_graphic_pane_vc

0x9014,	// (0x000161d1) form_field_popup_pane_vc_g1

0xb20b,	// (0x000183c8) form_field_popup_pane_vc_t1_ParamLimits

0xb20b,	// (0x000183c8) form_field_popup_pane_vc_t1

0x3be6,	// (0x00010da3) input_focus_pane_cp7_vc_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_cp7_vc

0xb222,	// (0x000183df) list_form_pane_vc_ParamLimits

0xb222,	// (0x000183df) list_form_pane_vc

0xb22e,	// (0x000183eb) data_form_pane_vc_t1_ParamLimits

0xb22e,	// (0x000183eb) data_form_pane_vc_t1

0x3caf,	// (0x00010e6c) input_focus_pane_vc_g1

0x3cb7,	// (0x00010e74) input_focus_pane_vc_g2

0x3cbf,	// (0x00010e7c) input_focus_pane_vc_g3

0x3cc7,	// (0x00010e84) input_focus_pane_vc_g4

0x3ccf,	// (0x00010e8c) input_focus_pane_vc_g5

0x3cd7,	// (0x00010e94) input_focus_pane_vc_g6

0x3cdf,	// (0x00010e9c) input_focus_pane_vc_g7

0x3ce7,	// (0x00010ea4) input_focus_pane_vc_g8

0x3cef,	// (0x00010eac) input_focus_pane_vc_g9

0x3251,	// (0x0001040e) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c844) input_focus_pane_vc_g

0x9008,	// (0x000161c5) data_form_pane_vc_ParamLimits

0x9008,	// (0x000161c5) data_form_pane_vc

0x9014,	// (0x000161d1) form_field_data_pane_vc_g1

0xb24b,	// (0x00018408) form_field_data_pane_vc_t1_ParamLimits

0xb24b,	// (0x00018408) form_field_data_pane_vc_t1

0x3be6,	// (0x00010da3) input_focus_pane_vc_ParamLimits

0x3be6,	// (0x00010da3) input_focus_pane_vc

0xb265,	// (0x00018422) button_value_adjust_pane_cp3_vc

0xb26d,	// (0x0001842a) button_value_adjust_pane_cp5_vc

0xb275,	// (0x00018432) form_field_data_pane_vc_ParamLimits

0xb275,	// (0x00018432) form_field_data_pane_vc

0xb290,	// (0x0001844d) form_field_data_pane_vc_cp2

0xb298,	// (0x00018455) form_field_data_wide_pane_vc_ParamLimits

0xb298,	// (0x00018455) form_field_data_wide_pane_vc

0xb2b2,	// (0x0001846f) form_field_data_wide_pane_vc_cp2

0xb2ba,	// (0x00018477) form_field_popup_pane_vc_ParamLimits

0xb2ba,	// (0x00018477) form_field_popup_pane_vc

0xb2d5,	// (0x00018492) form_field_popup_wide_pane_vc_ParamLimits

0xb2d5,	// (0x00018492) form_field_popup_wide_pane_vc

0xb2ef,	// (0x000184ac) form_field_slider_pane_vc_ParamLimits

0xb2ef,	// (0x000184ac) form_field_slider_pane_vc

0xb302,	// (0x000184bf) form_field_slider_wide_pane_vc_ParamLimits

0xb302,	// (0x000184bf) form_field_slider_wide_pane_vc

0xb315,	// (0x000184d2) grid_touch_1_pane_ParamLimits

0xb315,	// (0x000184d2) grid_touch_1_pane

0xb321,	// (0x000184de) grid_touch_2_pane_ParamLimits

0xb321,	// (0x000184de) grid_touch_2_pane

0x823c,	// (0x000153f9) touch_pane_g1_ParamLimits

0x823c,	// (0x000153f9) touch_pane_g1

0xb33b,	// (0x000184f8) cell_app_pane_cp_wide_ParamLimits

0xb33b,	// (0x000184f8) cell_app_pane_cp_wide

0xb34c,	// (0x00018509) grid_popup_fast_wide_pane_ParamLimits

0xb34c,	// (0x00018509) grid_popup_fast_wide_pane

0xb360,	// (0x0001851d) scroll_pane_cp19_ParamLimits

0xb360,	// (0x0001851d) scroll_pane_cp19

0x33ca,	// (0x00010587) bg_popup_window_pane_cp20

0xb374,	// (0x00018531) listscroll_popup_fast_wide_pane

0x3490,	// (0x0001064d) grid_indicator_nsta_pane

0xb37c,	// (0x00018539) clock_nsta_pane_g1

0xb385,	// (0x00018542) clock_nsta_pane_t1

0xb3a1,	// (0x0001855e) cell_indicator_nsta_pane_ParamLimits

0xb3a1,	// (0x0001855e) cell_indicator_nsta_pane

0xb3d3,	// (0x00018590) cell_indicator_nsta_pane_g1

0xb3e1,	// (0x0001859e) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001cc60) cell_indicator_nsta_pane_g

0xb3f7,	// (0x000185b4) clock_nsta_pane_cp

0xb3ff,	// (0x000185bc) indicator_nsta_pane_cp

0xb408,	// (0x000185c5) nsta_clock_indic_pane_g1

0x356f,	// (0x0001072c) grid_indicator_pane

0x42d3,	// (0x00011490) scroll_pane_cp29

0x5a25,	// (0x00012be2) indicator_nsta_pane_cp2_ParamLimits

0x5a25,	// (0x00012be2) indicator_nsta_pane_cp2

0x3490,	// (0x0001064d) main_apps_wheel_pane

0x922a,	// (0x000163e7) form_midp_field_text_pane_ParamLimits

0x9379,	// (0x00016536) scroll_bar_cp050_ParamLimits

0xb471,	// (0x0001862e) cell_indicator_pane_ParamLimits

0xb471,	// (0x0001862e) cell_indicator_pane

0xb489,	// (0x00018646) cell_indicator_pane_g1

0xb493,	// (0x00018650) grid_wheel_folder_pane_ParamLimits

0xb493,	// (0x00018650) grid_wheel_folder_pane

0xb4a7,	// (0x00018664) list_wheel_apps_pane_ParamLimits

0xb4a7,	// (0x00018664) list_wheel_apps_pane

0xb4ba,	// (0x00018677) main_apps_wheel_pane_g1_ParamLimits

0xb4ba,	// (0x00018677) main_apps_wheel_pane_g1

0xb4d6,	// (0x00018693) main_apps_wheel_pane_g2_ParamLimits

0xb4d6,	// (0x00018693) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001cc7c) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001cc7c) main_apps_wheel_pane_g

0xb4f2,	// (0x000186af) main_apps_wheel_pane_t1_ParamLimits

0xb4f2,	// (0x000186af) main_apps_wheel_pane_t1

0xb51b,	// (0x000186d8) list_wheel_apps_pane_g1

0xb523,	// (0x000186e0) list_wheel_apps_pane_g2

0xb52b,	// (0x000186e8) list_wheel_apps_pane_g3

0xb533,	// (0x000186f0) list_wheel_apps_pane_g4

0xb53d,	// (0x000186fa) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001cc81) list_wheel_apps_pane_g

0x4870,	// (0x00011a2d) navi_icon_text_pane

0x8944,	// (0x00015b01) aid_fill_nsta

0xb55e,	// (0x0001871b) navi_icon_text_pane_g1

0xb56a,	// (0x00018727) navi_icon_text_pane_t1

0x7e0d,	// (0x00014fca) list_set_graphic_pane_t1_ParamLimits

0x7e0d,	// (0x00014fca) list_set_graphic_pane_t1

0x9aca,	// (0x00016c87) popup_midp_note_alarm_window_t6_ParamLimits

0x9aca,	// (0x00016c87) popup_midp_note_alarm_window_t6

0x9adc,	// (0x00016c99) popup_midp_note_alarm_window_t7_ParamLimits

0x9adc,	// (0x00016c99) popup_midp_note_alarm_window_t7

0x9aee,	// (0x00016cab) popup_midp_note_alarm_window_t8_ParamLimits

0x9aee,	// (0x00016cab) popup_midp_note_alarm_window_t8

0x9b00,	// (0x00016cbd) popup_midp_note_alarm_window_t9_ParamLimits

0x9b00,	// (0x00016cbd) popup_midp_note_alarm_window_t9

0x9b12,	// (0x00016ccf) popup_midp_note_alarm_window_t10_ParamLimits

0x9b12,	// (0x00016ccf) popup_midp_note_alarm_window_t10

0x9b24,	// (0x00016ce1) popup_midp_note_alarm_window_t11_ParamLimits

0x9b24,	// (0x00016ce1) popup_midp_note_alarm_window_t11

0x9b36,	// (0x00016cf3) scroll_pane_cp17_ParamLimits

0x9b36,	// (0x00016cf3) scroll_pane_cp17

0x5ee9,	// (0x000130a6) volume_small_pane_cp_g1

0x61fa,	// (0x000133b7) volume_small_pane_cp_g2

0x6203,	// (0x000133c0) volume_small_pane_cp_g3

0x620c,	// (0x000133c9) volume_small_pane_cp_g4

0x6215,	// (0x000133d2) volume_small_pane_cp_g5

0x621e,	// (0x000133db) volume_small_pane_cp_g6

0x6227,	// (0x000133e4) volume_small_pane_cp_g7

0x6230,	// (0x000133ed) volume_small_pane_cp_g8

0x6239,	// (0x000133f6) volume_small_pane_cp_g9

0x6242,	// (0x000133ff) volume_small_pane_cp_g10

0x8050,	// (0x0001520d) midp_ticker_pane_g1_ParamLimits

0x805c,	// (0x00015219) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c910) midp_ticker_pane_g_ParamLimits

0x8068,	// (0x00015225) midp_ticker_pane_t1_ParamLimits

0x895a,	// (0x00015b17) aid_fill_nsta_2

0x9365,	// (0x00016522) list_form2_midp_pane

0xa52a,	// (0x000176e7) midp_editing_number_pane_ParamLimits

0xa539,	// (0x000176f6) midp_ticker_pane_ParamLimits

0xb57c,	// (0x00018739) form2_midp_field_pane

0xb5a0,	// (0x0001875d) scroll_pane_cp51

0xb5c0,	// (0x0001877d) form2_midp_button_pane_ParamLimits

0xb5c0,	// (0x0001877d) form2_midp_button_pane

0xb5d2,	// (0x0001878f) form2_midp_content_pane_ParamLimits

0xb5d2,	// (0x0001878f) form2_midp_content_pane

0xb5ec,	// (0x000187a9) form2_midp_field_choice_group_pane

0xb5f4,	// (0x000187b1) form2_midp_field_pane_g1

0xb5fc,	// (0x000187b9) form2_midp_field_pane_g2

0xb604,	// (0x000187c1) form2_midp_field_pane_g3

0xb60c,	// (0x000187c9) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001cca6) form2_midp_field_pane_g

0xb614,	// (0x000187d1) form2_midp_gauge_slider_pane

0xb61c,	// (0x000187d9) form2_midp_gauge_wait_pane

0xb624,	// (0x000187e1) form2_midp_image_pane_ParamLimits

0xb624,	// (0x000187e1) form2_midp_image_pane

0xb63f,	// (0x000187fc) form2_midp_label_pane_ParamLimits

0xb63f,	// (0x000187fc) form2_midp_label_pane

0xb65e,	// (0x0001881b) form2_midp_label_pane_cp_ParamLimits

0xb65e,	// (0x0001881b) form2_midp_label_pane_cp

0xb67f,	// (0x0001883c) form2_midp_string_pane_ParamLimits

0xb67f,	// (0x0001883c) form2_midp_string_pane

0xb691,	// (0x0001884e) form2_midp_text_pane_ParamLimits

0xb691,	// (0x0001884e) form2_midp_text_pane

0xb6b2,	// (0x0001886f) form2_midp_time_pane

0xb6c2,	// (0x0001887f) input_focus_pane_cp51_ParamLimits

0xb6c2,	// (0x0001887f) input_focus_pane_cp51

0xb6da,	// (0x00018897) form2_midp_label_pane_t1_ParamLimits

0xb6da,	// (0x00018897) form2_midp_label_pane_t1

0xb720,	// (0x000188dd) form2_mdip_text_pane_t1_ParamLimits

0xb720,	// (0x000188dd) form2_mdip_text_pane_t1

0xb742,	// (0x000188ff) form2_midp_time_pane_t1

0xb75d,	// (0x0001891a) form2_midp_gauge_slider_pane_t1

0xb76f,	// (0x0001892c) form2_midp_gauge_slider_pane_t2

0xb781,	// (0x0001893e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001ccaf) form2_midp_gauge_slider_pane_t

0xb793,	// (0x00018950) form2_midp_slider_pane

0xb79f,	// (0x0001895c) form2_midp_gauge_wait_pane_t1

0xb7ad,	// (0x0001896a) form2_midp_wait_pane_ParamLimits

0xb7ad,	// (0x0001896a) form2_midp_wait_pane

0x905b,	// (0x00016218) list_single_2graphic_pane_cp4_ParamLimits

0x905b,	// (0x00016218) list_single_2graphic_pane_cp4

0xb7d8,	// (0x00018995) list_single_midp_graphic_pane_cp_ParamLimits

0xb7d8,	// (0x00018995) list_single_midp_graphic_pane_cp

0x33ca,	// (0x00010587) list_highlight_pane_cp20

0xb7fc,	// (0x000189b9) list_single_2graphic_pane_g1_cp4

0xaa21,	// (0x00017bde) list_single_2graphic_pane_g2_cp4

0xb804,	// (0x000189c1) list_single_2graphic_pane_t1_cp4

0x3490,	// (0x0001064d) list_highlight_pane_cp21

0xb813,	// (0x000189d0) list_single_midp_graphic_pane_g4_cp

0xb822,	// (0x000189df) list_single_midp_graphic_pane_t1_cp

0xb837,	// (0x000189f4) form2_mdip_string_pane_t1_ParamLimits

0xb837,	// (0x000189f4) form2_mdip_string_pane_t1

0x33ca,	// (0x00010587) bg_wml_button_pane_cp2

0x3251,	// (0x0001040e) form2_midp_image_pane_g1

0x3b13,	// (0x00010cd0) list_double_large_graphic_pane_g5_ParamLimits

0x3b13,	// (0x00010cd0) list_double_large_graphic_pane_g5

0x7b77,	// (0x00014d34) midp_form_pane_ParamLimits

0x3490,	// (0x0001064d) main_apps_wheel_pane_ParamLimits

0x86ee,	// (0x000158ab) popup_preview_window_ParamLimits

0x86ee,	// (0x000158ab) popup_preview_window

0x88d5,	// (0x00015a92) popup_touch_info_window_ParamLimits

0x88d5,	// (0x00015a92) popup_touch_info_window

0x88f7,	// (0x00015ab4) popup_touch_menu_window_ParamLimits

0x88f7,	// (0x00015ab4) popup_touch_menu_window

0x3247,	// (0x00010404) bg_popup_sub_pane_cp6

0xb8dc,	// (0x00018a99) list_touch_menu_pane

0xb8e4,	// (0x00018aa1) list_single_touch_menu_pane_ParamLimits

0xb8e4,	// (0x00018aa1) list_single_touch_menu_pane

0xb8fc,	// (0x00018ab9) list_single_touch_menu_pane_t1

0x3490,	// (0x0001064d) bg_popup_sub_pane_cp7_ParamLimits

0x3490,	// (0x0001064d) bg_popup_sub_pane_cp7

0xb90a,	// (0x00018ac7) heading_sub_pane

0xb912,	// (0x00018acf) list_touch_info_pane_ParamLimits

0xb912,	// (0x00018acf) list_touch_info_pane

0xb921,	// (0x00018ade) list_single_touch_info_pane_ParamLimits

0xb921,	// (0x00018ade) list_single_touch_info_pane

0xb933,	// (0x00018af0) list_single_touch_info_pane_t1

0xb941,	// (0x00018afe) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001ccbd) list_single_touch_info_pane_t

0x7f7f,	// (0x0001513c) bg_popup_heading_pane_cp

0xb94f,	// (0x00018b0c) heading_sub_pane_t1

0x8fa2,	// (0x0001615f) bg_popup_preview_window_pane_cp_ParamLimits

0x8fa2,	// (0x0001615f) bg_popup_preview_window_pane_cp

0xb90a,	// (0x00018ac7) heading_preview_pane

0xb912,	// (0x00018acf) list_preview_pane_ParamLimits

0xb912,	// (0x00018acf) list_preview_pane

0xb95d,	// (0x00018b1a) popup_preview_window_g1

0xb921,	// (0x00018ade) list_single_preview_pane_ParamLimits

0xb921,	// (0x00018ade) list_single_preview_pane

0xb965,	// (0x00018b22) list_single_preview_pane_g1

0xb96d,	// (0x00018b2a) list_single_preview_pane_t1

0xb933,	// (0x00018af0) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001ccc2) list_single_preview_pane_t

0xb97b,	// (0x00018b38) bg_popup_heading_pane_cp2_ParamLimits

0xb97b,	// (0x00018b38) bg_popup_heading_pane_cp2

0xb991,	// (0x00018b4e) heading_preview_pane_g1

0xb999,	// (0x00018b56) heading_preview_pane_t1_ParamLimits

0xb999,	// (0x00018b56) heading_preview_pane_t1

0x3586,	// (0x00010743) soft_indicator_pane_t1_ParamLimits

0x3abb,	// (0x00010c78) scroll_pane_ParamLimits

0x41d8,	// (0x00011395) scroll_sc2_left_pane

0x41cf,	// (0x0001138c) scroll_sc2_right_pane

0x41f7,	// (0x000113b4) scroll_bg_pane_g1_ParamLimits

0x420c,	// (0x000113c9) scroll_bg_pane_g2_ParamLimits

0x4224,	// (0x000113e1) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c89b) scroll_bg_pane_g_ParamLimits

0x41f7,	// (0x000113b4) scroll_handle_pane_g1_ParamLimits

0x4246,	// (0x00011403) scroll_handle_pane_g2_ParamLimits

0x4224,	// (0x000113e1) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c8a2) scroll_handle_pane_g_ParamLimits

0x8335,	// (0x000154f2) popup_choice_list_window_ParamLimits

0x8335,	// (0x000154f2) popup_choice_list_window

0x8d98,	// (0x00015f55) choice_list_pane

0x8e48,	// (0x00016005) cell_toolbar_pane_t1

0x8e70,	// (0x0001602d) toolbar_button_pane_ParamLimits

0xa000,	// (0x000171bd) ai_gene_pane_1_t2_ParamLimits

0xa000,	// (0x000171bd) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001caca) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001caca) ai_gene_pane_1_t

0xb9b6,	// (0x00018b73) scroll_sc2_left_pane_g1

0xb9b6,	// (0x00018b73) scroll_sc2_right_pane_g1

0x8305,	// (0x000154c2) bg_popup_sub_pane_cp10

0xb9c0,	// (0x00018b7d) list_choice_list_pane

0xb9d9,	// (0x00018b96) list_single_choice_list_pane_ParamLimits

0xb9d9,	// (0x00018b96) list_single_choice_list_pane

0xb9f1,	// (0x00018bae) list_single_choice_list_pane_g1

0x3dd4,	// (0x00010f91) list_single_choice_list_pane_t1_ParamLimits

0x3dd4,	// (0x00010f91) list_single_choice_list_pane_t1

0xb9f9,	// (0x00018bb6) choice_list_pane_g1

0xba01,	// (0x00018bbe) choice_list_pane_t1

0x3247,	// (0x00010404) input_focus_pane_cp11

0x3fbc,	// (0x00011179) title_pane_stacon_g2_ParamLimits

0x3fbc,	// (0x00011179) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c881) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c881) title_pane_stacon_g

0x7f7f,	// (0x0001513c) cursor_press_pane

0x83ef,	// (0x000155ac) popup_fep_hwr_window_ParamLimits

0x83ef,	// (0x000155ac) popup_fep_hwr_window

0x8479,	// (0x00015636) popup_fep_vkb_window_ParamLimits

0x8479,	// (0x00015636) popup_fep_vkb_window

0xba0f,	// (0x00018bcc) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001cceb) fep_vkb_side_pane_g_ParamLimits

0x6284,	// (0x00013441) fep_hwr_candidate_pane_ParamLimits

0x6284,	// (0x00013441) fep_hwr_candidate_pane

0x62ae,	// (0x0001346b) fep_hwr_side_pane_ParamLimits

0x62ae,	// (0x0001346b) fep_hwr_side_pane

0x62d0,	// (0x0001348d) fep_hwr_top_pane_ParamLimits

0x62d0,	// (0x0001348d) fep_hwr_top_pane

0x62e8,	// (0x000134a5) fep_hwr_write_pane_ParamLimits

0x62e8,	// (0x000134a5) fep_hwr_write_pane

0xfb2e,	// (0x0001cceb) fep_vkb_side_pane_g

0xba17,	// (0x00018bd4) fep_hwr_top_pane_g1

0xba29,	// (0x00018be6) fep_hwr_top_pane_g2

0x6322,	// (0x000134df) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001ccc7) fep_hwr_top_pane_g

0x6337,	// (0x000134f4) fep_hwr_top_text_pane

0x4340,	// (0x000114fd) fep_hwr_top_text_pane_g1

0xba5f,	// (0x00018c1c) fep_hwr_top_text_pane_t1

0x6441,	// (0x000135fe) fep_hwr_candidate_pane_g1

0xbcaa,	// (0x00018e67) fep_vkb_keypad_pane_g3_ParamLimits

0xbcaa,	// (0x00018e67) fep_vkb_keypad_pane_g3

0xbcd6,	// (0x00018e93) fep_vkb_keypad_pane_g4_ParamLimits

0xbcd6,	// (0x00018e93) fep_vkb_keypad_pane_g4

0xbd4d,	// (0x00018f0a) fep_vkb_bottom_pane_g2_ParamLimits

0xbd4d,	// (0x00018f0a) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001ccf2) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001ccf2) fep_vkb_bottom_pane_g

0xb9b6,	// (0x00018b73) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001ccfc) cell_vkb_side_pane_g

0xbdd8,	// (0x00018f95) cell_vkb_side_pane_t1

0xbde6,	// (0x00018fa3) cell_vkb_side_pane_t1_copy1

0xb9b6,	// (0x00018b73) bg_fep_vkb_candidate_pane_g2

0xbf2a,	// (0x000190e7) cell_vkb_candidate_pane_ParamLimits

0xba6d,	// (0x00018c2a) aid_size_cell_vkb_ParamLimits

0xba6d,	// (0x00018c2a) aid_size_cell_vkb

0xbf2a,	// (0x000190e7) cell_vkb_candidate_pane

0x6468,	// (0x00013625) bg_popup_fep_shadow_pane_g1

0xbaff,	// (0x00018cbc) fep_vkb_bottom_pane_ParamLimits

0xbaff,	// (0x00018cbc) fep_vkb_bottom_pane

0xbb3c,	// (0x00018cf9) fep_vkb_candidate_pane_ParamLimits

0xbb3c,	// (0x00018cf9) fep_vkb_candidate_pane

0xbb58,	// (0x00018d15) fep_vkb_keypad_pane_ParamLimits

0xbb58,	// (0x00018d15) fep_vkb_keypad_pane

0xbb8b,	// (0x00018d48) fep_vkb_side_pane_ParamLimits

0xbb8b,	// (0x00018d48) fep_vkb_side_pane

0xbbc7,	// (0x00018d84) fep_vkb_top_pane_ParamLimits

0xbbc7,	// (0x00018d84) fep_vkb_top_pane

0xbc03,	// (0x00018dc0) fep_vkb_top_pane_g1_ParamLimits

0xbc03,	// (0x00018dc0) fep_vkb_top_pane_g1

0xbc12,	// (0x00018dcf) fep_vkb_top_pane_g2_ParamLimits

0xbc12,	// (0x00018dcf) fep_vkb_top_pane_g2

0xbc21,	// (0x00018dde) fep_vkb_top_pane_g3_ParamLimits

0xbc21,	// (0x00018dde) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001cce2) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001cce2) fep_vkb_top_pane_g

0xbc3f,	// (0x00018dfc) fep_vkb_top_text_pane_ParamLimits

0xbc3f,	// (0x00018dfc) fep_vkb_top_text_pane

0xbc50,	// (0x00018e0d) fep_vkb_side_pane_g1_ParamLimits

0xbc50,	// (0x00018e0d) fep_vkb_side_pane_g1

0xbc99,	// (0x00018e56) grid_vkb_side_pane_ParamLimits

0xbc99,	// (0x00018e56) grid_vkb_side_pane

0x6470,	// (0x0001362d) bg_popup_fep_shadow_pane_g2

0x6479,	// (0x00013636) bg_popup_fep_shadow_pane_g3

0x6481,	// (0x0001363e) bg_popup_fep_shadow_pane_g4

0x648a,	// (0x00013647) bg_popup_fep_shadow_pane_g5

0x6494,	// (0x00013651) bg_popup_fep_shadow_pane_g6

0x649c,	// (0x00013659) bg_popup_fep_shadow_pane_g7

0x3cc7,	// (0x00010e84) bg_popup_fep_shadow_pane_g8

0xbcf8,	// (0x00018eb5) grid_vkb_keypad_number_pane_ParamLimits

0xbcf8,	// (0x00018eb5) grid_vkb_keypad_number_pane

0xbd0c,	// (0x00018ec9) grid_vkb_keypad_pane_ParamLimits

0xbd0c,	// (0x00018ec9) grid_vkb_keypad_pane

0xbd32,	// (0x00018eef) fep_vkb_bottom_pane_g1_ParamLimits

0xbd32,	// (0x00018eef) fep_vkb_bottom_pane_g1

0xbd5b,	// (0x00018f18) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbd5b,	// (0x00018f18) grid_vkb_keypad_bottom_left_pane

0xbd70,	// (0x00018f2d) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbd70,	// (0x00018f2d) grid_vkb_keypad_bottom_right_pane

0xbd85,	// (0x00018f42) fep_vkb_top_text_pane_g1

0xbda0,	// (0x00018f5d) fep_vkb_top_text_pane_t1

0xbdb5,	// (0x00018f72) cell_vkb_side_pane_ParamLimits

0xbdb5,	// (0x00018f72) cell_vkb_side_pane

0xb9b6,	// (0x00018b73) cell_vkb_side_pane_g1

0xbdf4,	// (0x00018fb1) cell_vkb_keypad_pane_ParamLimits

0xbdf4,	// (0x00018fb1) cell_vkb_keypad_pane

0xbe81,	// (0x0001903e) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001cd0f) bg_popup_fep_shadow_pane_g

0x64ae,	// (0x0001366b) cell_hwr_side_pane_g1

0x64ae,	// (0x0001366b) cell_hwr_side_pane_g2

0xbe8b,	// (0x00019048) cell_vkb_keypad_pane_t1

0xbe99,	// (0x00019056) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe99,	// (0x00019056) cell_vkb_keypad_bottom_left_pane

0xbeb6,	// (0x00019073) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbeb6,	// (0x00019073) cell_vkb_keypad_bottom_right_pane

0xb9b6,	// (0x00018b73) cell_vkb_keypad_bottom_left_pane_g1

0xb9b6,	// (0x00018b73) cell_vkb_keypad_bottom_right_pane_g1

0xbeef,	// (0x000190ac) cell_vkb_keypad_number_pane_ParamLimits

0xbeef,	// (0x000190ac) cell_vkb_keypad_number_pane

0xbf0e,	// (0x000190cb) cell_vkb_keypad_number_pane_g1

0xbf18,	// (0x000190d5) cell_vkb_keypad_number_pane_g2

0xbf21,	// (0x000190de) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001cd01) cell_vkb_keypad_number_pane_g

0xbe8b,	// (0x00019048) cell_vkb_keypad_number_pane_t1

0xbf4b,	// (0x00019108) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001cd22) cell_hwr_side_pane_g

0xbf64,	// (0x00019121) cell_hwr_side_pane_t1

0x64b8,	// (0x00013675) cell_hwr_side_pane_t1_copy1

0x64c6,	// (0x00013683) cell_hwr_candidate_pane_g1

0x64f5,	// (0x000136b2) cell_hwr_candidate_pane_t1

0xb9b6,	// (0x00018b73) cell_vkb_candidate_pane_g2

0xbfa8,	// (0x00019165) cell_vkb_candidate_pane_t1

0x624b,	// (0x00013408) bg_popup_fep_shadow_pane_ParamLimits

0x624b,	// (0x00013408) bg_popup_fep_shadow_pane

0x6302,	// (0x000134bf) bg_fep_hwr_top_pane_g4

0xba3b,	// (0x00018bf8) bg_hwr_side_pane_g1_ParamLimits

0xba3b,	// (0x00018bf8) bg_hwr_side_pane_g1

0x6375,	// (0x00013532) cell_hwr_side_pane_ParamLimits

0x6375,	// (0x00013532) cell_hwr_side_pane

0x63b2,	// (0x0001356f) fep_hwr_write_pane_g1_ParamLimits

0x63b2,	// (0x0001356f) fep_hwr_write_pane_g1

0x63bf,	// (0x0001357c) fep_hwr_write_pane_g2_ParamLimits

0x63bf,	// (0x0001357c) fep_hwr_write_pane_g2

0x63cc,	// (0x00013589) fep_hwr_write_pane_g3_ParamLimits

0x63cc,	// (0x00013589) fep_hwr_write_pane_g3

0x63da,	// (0x00013597) fep_hwr_write_pane_g4_ParamLimits

0x63da,	// (0x00013597) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001ccce) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001ccce) fep_hwr_write_pane_g

0x6302,	// (0x000134bf) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6302,	// (0x000134bf) bg_fep_hwr_candidate_pane_g2

0x63ef,	// (0x000135ac) cell_hwr_candidate_pane_ParamLimits

0x63ef,	// (0x000135ac) cell_hwr_candidate_pane

0x6441,	// (0x000135fe) fep_hwr_candidate_pane_g1_ParamLimits

0xba9b,	// (0x00018c58) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xba9b,	// (0x00018c58) bg_popup_fep_shadow_pane_cp2

0xbc31,	// (0x00018dee) fep_vkb_top_pane_g4_ParamLimits

0xbc31,	// (0x00018dee) fep_vkb_top_pane_g4

0xbc77,	// (0x00018e34) fep_vkb_side_pane_g2_ParamLimits

0xbc77,	// (0x00018e34) fep_vkb_side_pane_g2

0x78f8,	// (0x00014ab5) list_setting_pane_t4_ParamLimits

0x78f8,	// (0x00014ab5) list_setting_pane_t4

0x7974,	// (0x00014b31) list_setting_number_pane_t5_ParamLimits

0x7974,	// (0x00014b31) list_setting_number_pane_t5

0x7c73,	// (0x00014e30) list_double_heading_pane_cp2_ParamLimits

0x7c73,	// (0x00014e30) list_double_heading_pane_cp2

0xbfb6,	// (0x00019173) list_double_heading_pane_g1_cp2_ParamLimits

0xbfb6,	// (0x00019173) list_double_heading_pane_g1_cp2

0xbfc2,	// (0x0001917f) list_double_heading_pane_g2_cp2_ParamLimits

0xbfc2,	// (0x0001917f) list_double_heading_pane_g2_cp2

0xbfd6,	// (0x00019193) list_double_heading_pane_t1_cp2_ParamLimits

0xbfd6,	// (0x00019193) list_double_heading_pane_t1_cp2

0xbfec,	// (0x000191a9) list_double_heading_pane_t2_cp2_ParamLimits

0xbfec,	// (0x000191a9) list_double_heading_pane_t2_cp2

0x323f,	// (0x000103fc) aid_value_unit2

0x55a7,	// (0x00012764) popup_preview_fixed_window

0x3666,	// (0x00010823) bg_popup_preview_window_pane_cp02

0xbffe,	// (0x000191bb) list_preview_fixed_pane

0xc044,	// (0x00019201) list_empty_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_empty_pane_fp

0xc044,	// (0x00019201) list_single_cale_day_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_cale_day_pane_fp

0xc044,	// (0x00019201) list_single_graphic_heading_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_graphic_heading_pane_fp

0xc044,	// (0x00019201) list_single_graphic_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_graphic_pane_fp

0xc044,	// (0x00019201) list_single_heading_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_heading_pane_fp

0xc044,	// (0x00019201) list_single_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_pane_fp

0xc05d,	// (0x0001921a) list_single_pane_fp_g1_ParamLimits

0xc05d,	// (0x0001921a) list_single_pane_fp_g1

0xbfb6,	// (0x00019173) list_single_pane_fp_g2_ParamLimits

0xbfb6,	// (0x00019173) list_single_pane_fp_g2

0xbfc2,	// (0x0001917f) list_single_pane_fp_g3_ParamLimits

0xbfc2,	// (0x0001917f) list_single_pane_fp_g3

0xc069,	// (0x00019226) list_single_pane_fp_g4_ParamLimits

0xc069,	// (0x00019226) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001cd35) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001cd35) list_single_pane_fp_g

0xc075,	// (0x00019232) list_single_pane_fp_t1_ParamLimits

0xc075,	// (0x00019232) list_single_pane_fp_t1

0xc08c,	// (0x00019249) list_single_graphic_pane_fp_g1_ParamLimits

0xc08c,	// (0x00019249) list_single_graphic_pane_fp_g1

0xc05d,	// (0x0001921a) list_single_graphic_pane_fp_g2_ParamLimits

0xc05d,	// (0x0001921a) list_single_graphic_pane_fp_g2

0xbfb6,	// (0x00019173) list_single_graphic_pane_fp_g3_ParamLimits

0xbfb6,	// (0x00019173) list_single_graphic_pane_fp_g3

0xbfc2,	// (0x0001917f) list_single_graphic_pane_fp_g4_ParamLimits

0xbfc2,	// (0x0001917f) list_single_graphic_pane_fp_g4

0xc069,	// (0x00019226) list_single_graphic_pane_fp_g5_ParamLimits

0xc069,	// (0x00019226) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3e) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3e) list_single_graphic_pane_fp_g

0xc098,	// (0x00019255) list_single_graphic_pane_fp_t1_ParamLimits

0xc098,	// (0x00019255) list_single_graphic_pane_fp_t1

0xc08c,	// (0x00019249) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc08c,	// (0x00019249) list_single_graphic_heading_pane_fp_g1

0xc05d,	// (0x0001921a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc05d,	// (0x0001921a) list_single_graphic_heading_pane_fp_g2

0xbfb6,	// (0x00019173) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbfb6,	// (0x00019173) list_single_graphic_heading_pane_fp_g3

0xbfc2,	// (0x0001917f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbfc2,	// (0x0001917f) list_single_graphic_heading_pane_fp_g4

0xc069,	// (0x00019226) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc069,	// (0x00019226) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3e) list_single_graphic_heading_pane_fp_g

0xc0ae,	// (0x0001926b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc0ae,	// (0x0001926b) list_single_graphic_heading_pane_fp_t1

0xc0c4,	// (0x00019281) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc0c4,	// (0x00019281) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001cd49) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001cd49) list_single_graphic_heading_pane_fp_t

0xc0d6,	// (0x00019293) list_single_cale_day_pane_fp_g1_ParamLimits

0xc0d6,	// (0x00019293) list_single_cale_day_pane_fp_g1

0xc10e,	// (0x000192cb) list_single_cale_day_pane_fp_g2_ParamLimits

0xc10e,	// (0x000192cb) list_single_cale_day_pane_fp_g2

0xc11a,	// (0x000192d7) list_single_cale_day_pane_fp_g3_ParamLimits

0xc11a,	// (0x000192d7) list_single_cale_day_pane_fp_g3

0xc142,	// (0x000192ff) list_single_cale_day_pane_fp_g4_ParamLimits

0xc142,	// (0x000192ff) list_single_cale_day_pane_fp_g4

0xc166,	// (0x00019323) list_single_cale_day_pane_fp_g5_ParamLimits

0xc166,	// (0x00019323) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001cd4e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001cd4e) list_single_cale_day_pane_fp_g

0xc18a,	// (0x00019347) list_single_cale_day_pane_fp_t1_ParamLimits

0xc18a,	// (0x00019347) list_single_cale_day_pane_fp_t1

0xc1b0,	// (0x0001936d) list_single_cale_day_pane_fp_t2_ParamLimits

0xc1b0,	// (0x0001936d) list_single_cale_day_pane_fp_t2

0xc1c9,	// (0x00019386) list_single_cale_day_pane_fp_t3_ParamLimits

0xc1c9,	// (0x00019386) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001cd59) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001cd59) list_single_cale_day_pane_fp_t

0xc05d,	// (0x0001921a) list_empty_pane_fp_g1_ParamLimits

0xc05d,	// (0x0001921a) list_empty_pane_fp_g1

0xc1e2,	// (0x0001939f) list_empty_pane_fp_t1

0xc1f0,	// (0x000193ad) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001cd60) list_empty_pane_fp_t

0xc05d,	// (0x0001921a) list_single_heading_pane_fp_g1_ParamLimits

0xc05d,	// (0x0001921a) list_single_heading_pane_fp_g1

0xbfb6,	// (0x00019173) list_single_heading_pane_fp_g2_ParamLimits

0xbfb6,	// (0x00019173) list_single_heading_pane_fp_g2

0xbfc2,	// (0x0001917f) list_single_heading_pane_fp_g3_ParamLimits

0xbfc2,	// (0x0001917f) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001cd65) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001cd65) list_single_heading_pane_fp_g

0xc1fe,	// (0x000193bb) list_single_heading_pane_fp_t1_ParamLimits

0xc1fe,	// (0x000193bb) list_single_heading_pane_fp_t1

0xc210,	// (0x000193cd) list_single_heading_pane_fp_t2_ParamLimits

0xc210,	// (0x000193cd) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001cd6c) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001cd6c) list_single_heading_pane_fp_t

0x3de9,	// (0x00010fa6) aid_size_cell_fast

0x3649,	// (0x00010806) soft_indicator_pane_cp1_t1

0x3e40,	// (0x00010ffd) cell_app_pane_cp2_ParamLimits

0x3e40,	// (0x00010ffd) cell_app_pane_cp2

0x626d,	// (0x0001342a) fep_hwr_candidate_drop_down_list_pane

0x645b,	// (0x00013618) fep_hwr_candidate_pane_g3_ParamLimits

0x645b,	// (0x00013618) fep_hwr_candidate_pane_g3

0x2761,	// (0x0000f91e) fep_hwr_candidate_pane_g4_ParamLimits

0x2761,	// (0x0000f91e) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001ccdb) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001ccdb) fep_hwr_candidate_pane_g

0xbb2b,	// (0x00018ce8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbb2b,	// (0x00018ce8) fep_vkb_candidate_drop_down_list_pane

0xbf53,	// (0x00019110) fep_vkb_candidate_pane_g3

0xbf5b,	// (0x00019118) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001cd08) fep_vkb_candidate_pane_g

0x64c6,	// (0x00013683) cell_hwr_candidate_pane_g1_ParamLimits

0x64d4,	// (0x00013691) cell_hwr_candidate_pane_g3_ParamLimits

0x64d4,	// (0x00013691) cell_hwr_candidate_pane_g3

0xcdb3,	// (0x00019f70) cell_hwr_candidate_pane_g4_ParamLimits

0xcdb3,	// (0x00019f70) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001cd27) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001cd27) cell_hwr_candidate_pane_g

0xbf72,	// (0x0001912f) cell_vkb_candidate_pane_g3_ParamLimits

0xbf72,	// (0x0001912f) cell_vkb_candidate_pane_g3

0xbf8d,	// (0x0001914a) cell_vkb_candidate_pane_g4_ParamLimits

0xbf8d,	// (0x0001914a) cell_vkb_candidate_pane_g4

0xc226,	// (0x000193e3) cell_app_pane_cp2_g1_ParamLimits

0xc226,	// (0x000193e3) cell_app_pane_cp2_g1

0xc244,	// (0x00019401) cell_app_pane_cp2_g2_ParamLimits

0xc244,	// (0x00019401) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001cd71) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001cd71) cell_app_pane_cp2_g

0xc250,	// (0x0001940d) cell_app_pane_cp2_t1_ParamLimits

0xc250,	// (0x0001940d) cell_app_pane_cp2_t1

0x3be6,	// (0x00010da3) grid_highlight_pane_cp1_ParamLimits

0x3be6,	// (0x00010da3) grid_highlight_pane_cp1

0x6513,	// (0x000136d0) cell_hwr_candidate_pane_cp1_ParamLimits

0x6513,	// (0x000136d0) cell_hwr_candidate_pane_cp1

0x64c6,	// (0x00013683) fep_hwr_candidate_drop_down_list_pane_g1

0x6537,	// (0x000136f4) fep_hwr_candidate_drop_down_list_pane_g2

0x6544,	// (0x00013701) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001cd76) fep_hwr_candidate_drop_down_list_pane_g

0x6551,	// (0x0001370e) fep_hwr_candidate_drop_down_list_scroll_pane

0x655a,	// (0x00013717) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x655a,	// (0x00013717) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6567,	// (0x00013724) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6567,	// (0x00013724) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6574,	// (0x00013731) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6574,	// (0x00013731) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6581,	// (0x0001373e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6581,	// (0x0001373e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x659c,	// (0x00013759) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x659c,	// (0x00013759) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x65b7,	// (0x00013774) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x65b7,	// (0x00013774) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x65d2,	// (0x0001378f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x65d2,	// (0x0001378f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x65ed,	// (0x000137aa) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x65ed,	// (0x000137aa) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001cd7d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001cd7d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc262,	// (0x0001941f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc262,	// (0x0001941f) cell_vkb_candidate_pane_cp1

0xbc31,	// (0x00018dee) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbc31,	// (0x00018dee) fep_vkb_candidate_drop_down_list_pane_g1

0xc288,	// (0x00019445) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc288,	// (0x00019445) fep_vkb_candidate_drop_down_list_pane_g2

0xc295,	// (0x00019452) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc295,	// (0x00019452) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001cd8e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001cd8e) fep_vkb_candidate_drop_down_list_pane_g

0xc2a2,	// (0x0001945f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc2a2,	// (0x0001945f) fep_vkb_candidate_drop_down_list_scroll_pane

0xc2af,	// (0x0001946c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc2af,	// (0x0001946c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc2bc,	// (0x00019479) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc2bc,	// (0x00019479) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc2c8,	// (0x00019485) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc2c8,	// (0x00019485) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc2d4,	// (0x00019491) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2d4,	// (0x00019491) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc2f5,	// (0x000194b2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2f5,	// (0x000194b2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc316,	// (0x000194d3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc316,	// (0x000194d3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc337,	// (0x000194f4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc337,	// (0x000194f4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc358,	// (0x00019515) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc358,	// (0x00019515) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001cd95) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001cd95) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x724f,	// (0x0001440c) title_pane_g1_ParamLimits

0x725c,	// (0x00014419) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c70b) title_pane_g_ParamLimits

0x4338,	// (0x000114f5) aid_call2_pane

0x4330,	// (0x000114ed) aid_call_pane

0x4340,	// (0x000114fd) popup_clock_analogue_window_g1

0x4340,	// (0x000114fd) popup_clock_analogue_window_g2

0x5924,	// (0x00012ae1) popup_clock_analogue_window_g3

0x592d,	// (0x00012aea) popup_clock_analogue_window_g4

0x3251,	// (0x0001040e) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c8b0) popup_clock_analogue_window_g

0x5935,	// (0x00012af2) popup_clock_analogue_window_t1

0x5943,	// (0x00012b00) clock_digital_number_pane_ParamLimits

0x5943,	// (0x00012b00) clock_digital_number_pane

0x594f,	// (0x00012b0c) clock_digital_number_pane_cp02_ParamLimits

0x594f,	// (0x00012b0c) clock_digital_number_pane_cp02

0x595b,	// (0x00012b18) clock_digital_number_pane_cp03_ParamLimits

0x595b,	// (0x00012b18) clock_digital_number_pane_cp03

0x5967,	// (0x00012b24) clock_digital_number_pane_cp04_ParamLimits

0x5967,	// (0x00012b24) clock_digital_number_pane_cp04

0x5973,	// (0x00012b30) clock_digital_separator_pane_ParamLimits

0x5973,	// (0x00012b30) clock_digital_separator_pane

0x597f,	// (0x00012b3c) popup_clock_digital_window_t1_ParamLimits

0x597f,	// (0x00012b3c) popup_clock_digital_window_t1

0x3251,	// (0x0001040e) clock_digital_number_pane_g1

0x3251,	// (0x0001040e) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c8bb) clock_digital_number_pane_g

0x3251,	// (0x0001040e) clock_digital_separator_pane_g1

0x3251,	// (0x0001040e) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c8bb) clock_digital_separator_pane_g

0x8944,	// (0x00015b01) aid_fill_nsta_ParamLimits

0x8a94,	// (0x00015c51) indicator_nsta_pane_ParamLimits

0x8c25,	// (0x00015de2) popup_clock_analogue_window

0x8c25,	// (0x00015de2) popup_clock_digital_window

0x3490,	// (0x0001064d) grid_indicator_nsta_pane_ParamLimits

0xb393,	// (0x00018550) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001cc5b) clock_nsta_pane_t

0x58e8,	// (0x00012aa5) aid_size_max_handle

0x58f2,	// (0x00012aaf) aid_size_min_handle

0x7f7f,	// (0x0001513c) editor_scroll_pane

0xc373,	// (0x00019530) ex_editor_pane

0x3daf,	// (0x00010f6c) scroll_pane_cp13

0x3ae7,	// (0x00010ca4) scroll_pane_cp14

0x438e,	// (0x0001154b) scroll_pane_cp36

0x7c89,	// (0x00014e46) list_single_graphic_hl_pane_cp2_ParamLimits

0x7c89,	// (0x00014e46) list_single_graphic_hl_pane_cp2

0xa5ec,	// (0x000177a9) list_single_graphic_hl_pane_ParamLimits

0xa5ec,	// (0x000177a9) list_single_graphic_hl_pane

0xc37b,	// (0x00019538) aid_size_min_hl_cp1

0xc384,	// (0x00019541) list_highlight_pane_cp34_ParamLimits

0xc384,	// (0x00019541) list_highlight_pane_cp34

0xc395,	// (0x00019552) list_single_graphic_hl_pane_g1_ParamLimits

0xc395,	// (0x00019552) list_single_graphic_hl_pane_g1

0xc3a2,	// (0x0001955f) list_single_graphic_hl_pane_g2_ParamLimits

0xc3a2,	// (0x0001955f) list_single_graphic_hl_pane_g2

0xc3a2,	// (0x0001955f) list_single_graphic_hl_pane_g3_ParamLimits

0xc3a2,	// (0x0001955f) list_single_graphic_hl_pane_g3

0xab3f,	// (0x00017cfc) list_single_graphic_hl_pane_g4_ParamLimits

0xab3f,	// (0x00017cfc) list_single_graphic_hl_pane_g4

0xc3ae,	// (0x0001956b) list_single_graphic_hl_pane_g5_ParamLimits

0xc3ae,	// (0x0001956b) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001cda6) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001cda6) list_single_graphic_hl_pane_g

0xc3c2,	// (0x0001957f) list_single_graphic_hl_pane_t1_ParamLimits

0xc3c2,	// (0x0001957f) list_single_graphic_hl_pane_t1

0xc3d8,	// (0x00019595) aid_size_min_hl_cp2

0xc3e1,	// (0x0001959e) list_highlight_pane_cp34_cp2_ParamLimits

0xc3e1,	// (0x0001959e) list_highlight_pane_cp34_cp2

0xc395,	// (0x00019552) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc395,	// (0x00019552) list_single_graphic_hl_pane_g1_cp2

0xc3ee,	// (0x000195ab) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc3ee,	// (0x000195ab) list_single_graphic_hl_pane_g2_cp2

0xc3fa,	// (0x000195b7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc3fa,	// (0x000195b7) list_single_graphic_hl_pane_g3_cp2

0x3afb,	// (0x00010cb8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3afb,	// (0x00010cb8) list_single_graphic_hl_pane_g4_cp2

0xc408,	// (0x000195c5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc408,	// (0x000195c5) list_single_graphic_hl_pane_g5_cp2

0x5c38,	// (0x00012df5) control_pane_g4_ParamLimits

0x5c38,	// (0x00012df5) control_pane_g4

0x8305,	// (0x000154c2) bg_popup_sub_pane_cp10_ParamLimits

0xb9c0,	// (0x00018b7d) list_choice_list_pane_ParamLimits

0xb9cf,	// (0x00018b8c) scroll_pane_cp23

0x3666,	// (0x00010823) bg_popup_preview_window_pane_cp02_ParamLimits

0xbffe,	// (0x000191bb) list_preview_fixed_pane_ParamLimits

0xc014,	// (0x000191d1) list_preview_fixed_pane_cp_ParamLimits

0xc014,	// (0x000191d1) list_preview_fixed_pane_cp

0xc020,	// (0x000191dd) popup_preview_fixed_window_g1_ParamLimits

0xc020,	// (0x000191dd) popup_preview_fixed_window_g1

0xc02c,	// (0x000191e9) popup_preview_fixed_window_g2_ParamLimits

0xc02c,	// (0x000191e9) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001cd2e) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001cd2e) popup_preview_fixed_window_g

0x585a,	// (0x00012a17) aid_navi_side_left_pane_ParamLimits

0x586f,	// (0x00012a2c) aid_navi_side_right_pane_ParamLimits

0x5887,	// (0x00012a44) navi_icon_pane_stacon_ParamLimits

0x589b,	// (0x00012a58) navi_navi_pane_stacon_ParamLimits

0x5887,	// (0x00012a44) navi_text_pane_stacon_ParamLimits

0x3247,	// (0x00010404) main_text_info_pane

0xc432,	// (0x000195ef) listscroll_text_info_pane

0xc43a,	// (0x000195f7) list_text_info_pane_ParamLimits

0xc43a,	// (0x000195f7) list_text_info_pane

0xc449,	// (0x00019606) scroll_pane_cp24_ParamLimits

0xc449,	// (0x00019606) scroll_pane_cp24

0xc467,	// (0x00019624) list_text_info_pane_t1_ParamLimits

0xc467,	// (0x00019624) list_text_info_pane_t1

0x8357,	// (0x00015514) popup_fast_swap2_window_ParamLimits

0x8357,	// (0x00015514) popup_fast_swap2_window

0xc48c,	// (0x00019649) aid_size_cell_fast2

0x3247,	// (0x00010404) bg_popup_window_pane_cp17

0x9391,	// (0x0001654e) heading_pane_cp2

0x386c,	// (0x00010a29) listscroll_fast2_pane

0xc496,	// (0x00019653) grid_fast2_pane

0xc4a0,	// (0x0001965d) listscroll_fast2_pane_g1

0xc4aa,	// (0x00019667) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001cdb1) listscroll_fast2_pane_g

0x3daf,	// (0x00010f6c) scroll_pane_cp26

0xc4b4,	// (0x00019671) cell_fast2_pane_ParamLimits

0xc4b4,	// (0x00019671) cell_fast2_pane

0xc4cb,	// (0x00019688) cell_fast2_pane_g1

0xc4d4,	// (0x00019691) cell_fast2_pane_g2

0xc4dd,	// (0x0001969a) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001cdb6) cell_fast2_pane_g

0x38ae,	// (0x00010a6b) grid_highlight_pane_cp9

0x38c3,	// (0x00010a80) main_eswt_pane_ParamLimits

0x38c3,	// (0x00010a80) main_eswt_pane

0xc45e,	// (0x0001961b) list_single_text_info_pane

0xc4e5,	// (0x000196a2) eswt_ctrl_button_pane

0xc4e5,	// (0x000196a2) eswt_ctrl_canvas_pane

0xc4ed,	// (0x000196aa) eswt_ctrl_combo_pane

0xc4e5,	// (0x000196a2) eswt_ctrl_default_pane

0xc4e5,	// (0x000196a2) eswt_ctrl_label_pane

0xc4f5,	// (0x000196b2) eswt_ctrl_wait_pane

0xc4fd,	// (0x000196ba) eswt_shell_pane

0x3247,	// (0x00010404) listscroll_eswt_app_pane

0xc51d,	// (0x000196da) popup_eswt_tasktip_window_ParamLimits

0xc51d,	// (0x000196da) popup_eswt_tasktip_window

0x8fa2,	// (0x0001615f) bg_popup_window_pane_cp18

0xc52e,	// (0x000196eb) eswt_control_pane_g1_ParamLimits

0xc52e,	// (0x000196eb) eswt_control_pane_g1

0xc53b,	// (0x000196f8) eswt_control_pane_g2_ParamLimits

0xc53b,	// (0x000196f8) eswt_control_pane_g2

0xc548,	// (0x00019705) eswt_control_pane_g3_ParamLimits

0xc548,	// (0x00019705) eswt_control_pane_g3

0xc555,	// (0x00019712) eswt_control_pane_g4_ParamLimits

0xc555,	// (0x00019712) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001cdbd) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001cdbd) eswt_control_pane_g

0x3be6,	// (0x00010da3) bg_button_pane_ParamLimits

0x3be6,	// (0x00010da3) bg_button_pane

0x38c3,	// (0x00010a80) common_borders_pane_copy2_ParamLimits

0x38c3,	// (0x00010a80) common_borders_pane_copy2

0xc562,	// (0x0001971f) control_button_pane_g1_ParamLimits

0xc562,	// (0x0001971f) control_button_pane_g1

0xc56e,	// (0x0001972b) control_button_pane_g2_ParamLimits

0xc56e,	// (0x0001972b) control_button_pane_g2

0xc57a,	// (0x00019737) control_button_pane_g3_ParamLimits

0xc57a,	// (0x00019737) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001cdc6) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001cdc6) control_button_pane_g

0xc58e,	// (0x0001974b) control_button_pane_t1

0xc59c,	// (0x00019759) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001cdcd) control_button_pane_t

0x8e7c,	// (0x00016039) bg_button_pane_g1

0x8e8c,	// (0x00016049) bg_button_pane_g2

0x8e84,	// (0x00016041) bg_button_pane_g3

0x8e9c,	// (0x00016059) bg_button_pane_g4

0x8e94,	// (0x00016051) bg_button_pane_g5

0x8ea4,	// (0x00016061) bg_button_pane_g6

0x8eac,	// (0x00016069) bg_button_pane_g7

0x8ebc,	// (0x00016079) bg_button_pane_g8

0x8eb4,	// (0x00016071) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001ca1e) bg_button_pane_g

0xb97b,	// (0x00018b38) common_borders_pane_ParamLimits

0xb97b,	// (0x00018b38) common_borders_pane

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy1_ParamLimits

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy1

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy1_ParamLimits

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy1

0xc548,	// (0x00019705) eswt_control_pane_g3_copy1_ParamLimits

0xc548,	// (0x00019705) eswt_control_pane_g3_copy1

0xc555,	// (0x00019712) eswt_control_pane_g4_copy1_ParamLimits

0xc555,	// (0x00019712) eswt_control_pane_g4_copy1

0xb9b6,	// (0x00018b73) bg_eswt_ctrl_canvas_pane_g1

0xb97b,	// (0x00018b38) common_borders_pane_cp2_ParamLimits

0xb97b,	// (0x00018b38) common_borders_pane_cp2

0xb97b,	// (0x00018b38) common_borders_pane_cp3_ParamLimits

0xb97b,	// (0x00018b38) common_borders_pane_cp3

0xc5aa,	// (0x00019767) separator_horizontal_pane

0xc5b2,	// (0x0001976f) separator_vertical_pane

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy2_ParamLimits

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy2

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy2_ParamLimits

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy2

0xc548,	// (0x00019705) eswt_control_pane_g3_copy2_ParamLimits

0xc548,	// (0x00019705) eswt_control_pane_g3_copy2

0xc555,	// (0x00019712) eswt_control_pane_g4_copy2_ParamLimits

0xc555,	// (0x00019712) eswt_control_pane_g4_copy2

0x3247,	// (0x00010404) common_borders_pane_cp4

0xc5bb,	// (0x00019778) separator_horizontal_pane_g1

0xc5c4,	// (0x00019781) separator_horizontal_pane_g2

0xc5cd,	// (0x0001978a) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001cdd2) separator_horizontal_pane_g

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy3_ParamLimits

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy3

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy3_ParamLimits

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy3

0xc548,	// (0x00019705) eswt_control_pane_g3_copy3_ParamLimits

0xc548,	// (0x00019705) eswt_control_pane_g3_copy3

0xc555,	// (0x00019712) eswt_control_pane_g4_copy3_ParamLimits

0xc555,	// (0x00019712) eswt_control_pane_g4_copy3

0x3247,	// (0x00010404) common_borders_pane_cp5

0xc5d6,	// (0x00019793) separator_vertical_pane_g1

0xc5df,	// (0x0001979c) separator_vertical_pane_g2

0xc5e8,	// (0x000197a5) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001cdd9) separator_vertical_pane_g

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy4_ParamLimits

0xc52e,	// (0x000196eb) eswt_control_pane_g1_copy4

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy4_ParamLimits

0xc53b,	// (0x000196f8) eswt_control_pane_g2_copy4

0xc548,	// (0x00019705) eswt_control_pane_g3_copy4_ParamLimits

0xc548,	// (0x00019705) eswt_control_pane_g3_copy4

0xc555,	// (0x00019712) eswt_control_pane_g4_copy4_ParamLimits

0xc555,	// (0x00019712) eswt_control_pane_g4_copy4

0xc5f1,	// (0x000197ae) eswt_ctrl_combo_button_pane

0xc5f9,	// (0x000197b6) eswt_ctrl_input_pane

0xc601,	// (0x000197be) popup_choice_list_window_cp70

0xc609,	// (0x000197c6) eswt_ctrl_input_pane_t1

0x3247,	// (0x00010404) input_focus_pane_cp70

0xb97b,	// (0x00018b38) bg_button_pane_cp70_ParamLimits

0xb97b,	// (0x00018b38) bg_button_pane_cp70

0xc617,	// (0x000197d4) eswt_ctrl_combo_button_pane_g1

0xc61f,	// (0x000197dc) wait_bar_pane_cp70

0x8fa2,	// (0x0001615f) bg_popup_window_pane_cp70_ParamLimits

0x8fa2,	// (0x0001615f) bg_popup_window_pane_cp70

0xc627,	// (0x000197e4) popup_eswt_tasktip_window_t1

0xc63d,	// (0x000197fa) wait_bar_pane_cp71_ParamLimits

0xc63d,	// (0x000197fa) wait_bar_pane_cp71

0xc649,	// (0x00019806) grid_eswt_app_pane

0x41d8,	// (0x00011395) scroll_pane_cp70

0xc652,	// (0x0001980f) cell_eswt_app_pane_ParamLimits

0xc652,	// (0x0001980f) cell_eswt_app_pane

0xc684,	// (0x00019841) cell_eswt_app_pane_g1_ParamLimits

0xc684,	// (0x00019841) cell_eswt_app_pane_g1

0xc6b3,	// (0x00019870) cell_eswt_app_pane_g2_ParamLimits

0xc6b3,	// (0x00019870) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001cde0) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001cde0) cell_eswt_app_pane_g

0xc6dc,	// (0x00019899) cell_eswt_app_pane_t1_ParamLimits

0xc6dc,	// (0x00019899) cell_eswt_app_pane_t1

0xc70e,	// (0x000198cb) grid_highlight_pane_cp70_ParamLimits

0xc70e,	// (0x000198cb) grid_highlight_pane_cp70

0x48c5,	// (0x00011a82) set_content_pane_g1

0x8220,	// (0x000153dd) status_small_volume_pane

0x6608,	// (0x000137c5) status_small_volume_pane_g1

0x6610,	// (0x000137cd) volume_small2_pane

0x6619,	// (0x000137d6) volume_small2_pane_g1

0x6622,	// (0x000137df) volume_small2_pane_g2

0x662b,	// (0x000137e8) volume_small2_pane_g3

0x6634,	// (0x000137f1) volume_small2_pane_g4

0x663d,	// (0x000137fa) volume_small2_pane_g5

0x6646,	// (0x00013803) volume_small2_pane_g6

0x664f,	// (0x0001380c) volume_small2_pane_g7

0x6658,	// (0x00013815) volume_small2_pane_g8

0x6661,	// (0x0001381e) volume_small2_pane_g9

0x666a,	// (0x00013827) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001cde5) volume_small2_pane_g

0xbd85,	// (0x00018f42) fep_vkb_top_text_pane_g1_ParamLimits

0xbda0,	// (0x00018f5d) fep_vkb_top_text_pane_t1_ParamLimits

0xc038,	// (0x000191f5) popup_preview_fixed_window_g3_ParamLimits

0xc038,	// (0x000191f5) popup_preview_fixed_window_g3

0x8868,	// (0x00015a25) popup_toolbar_trans_pane

0xa33d,	// (0x000174fa) aid_height_set_list_ParamLimits

0xa34e,	// (0x0001750b) aid_size_parent_ParamLimits

0x8305,	// (0x000154c2) list_highlight_pane_cp2_ParamLimits

0x48c5,	// (0x00011a82) set_content_pane_g1_ParamLimits

0xa600,	// (0x000177bd) list_single_image_pane_ParamLimits

0xa600,	// (0x000177bd) list_single_image_pane

0xc71a,	// (0x000198d7) aid_size_cell_image_ParamLimits

0xc71a,	// (0x000198d7) aid_size_cell_image

0xc727,	// (0x000198e4) grid_single_image_pane_ParamLimits

0xc727,	// (0x000198e4) grid_single_image_pane

0x3c11,	// (0x00010dce) list_single_image_pane_g1_ParamLimits

0x3c11,	// (0x00010dce) list_single_image_pane_g1

0x3c1d,	// (0x00010dda) list_single_image_pane_g2_ParamLimits

0x3c1d,	// (0x00010dda) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001cdfa) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001cdfa) list_single_image_pane_g

0xc735,	// (0x000198f2) list_single_image_pane_t1_ParamLimits

0xc735,	// (0x000198f2) list_single_image_pane_t1

0xc74b,	// (0x00019908) cell_image_list_pane_ParamLimits

0xc74b,	// (0x00019908) cell_image_list_pane

0xc761,	// (0x0001991e) cell_image_list_pane_g1

0xc76a,	// (0x00019927) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001cdff) cell_image_list_pane_g

0xc773,	// (0x00019930) aid_size_cell_tb_trans_pane

0x3be6,	// (0x00010da3) bg_tb_trans_pane

0xc785,	// (0x00019942) grid_tb_trans_pane

0x8e7c,	// (0x00016039) bg_tb_trans_pane_g1

0x8e8c,	// (0x00016049) bg_tb_trans_pane_g2

0x8e84,	// (0x00016041) bg_tb_trans_pane_g3

0x8e9c,	// (0x00016059) bg_tb_trans_pane_g4

0x8e94,	// (0x00016051) bg_tb_trans_pane_g5

0x8ebc,	// (0x00016079) bg_tb_trans_pane_g6

0x8eb4,	// (0x00016071) bg_tb_trans_pane_g7

0x8ea4,	// (0x00016061) bg_tb_trans_pane_g8

0x8eac,	// (0x00016069) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001ce04) bg_tb_trans_pane_g

0xc799,	// (0x00019956) cell_toolbar_trans_pane_ParamLimits

0xc799,	// (0x00019956) cell_toolbar_trans_pane

0xb9b6,	// (0x00018b73) cell_toolbar_trans_pane_g1

0xb584,	// (0x00018741) list_form2_midp_pane_t1

0xb592,	// (0x0001874f) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001cca1) list_form2_midp_pane_t

0xb5a0,	// (0x0001875d) scroll_pane_cp51_ParamLimits

0xb7bd,	// (0x0001897a) form2_midp_wait_pane_g1

0xb7c6,	// (0x00018983) form2_midp_wait_pane_g2

0xb7cf,	// (0x0001898c) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001ccb6) form2_midp_wait_pane_g

0x3490,	// (0x0001064d) list_highlight_pane_cp21_ParamLimits

0xb813,	// (0x000189d0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb822,	// (0x000189df) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa5a5,	// (0x00017762) list_single_2graphic_im_pane_ParamLimits

0xa5a5,	// (0x00017762) list_single_2graphic_im_pane

0xc7bf,	// (0x0001997c) list_single_2graphic_im_pane_g1_ParamLimits

0xc7bf,	// (0x0001997c) list_single_2graphic_im_pane_g1

0xc7d0,	// (0x0001998d) list_single_2graphic_im_pane_g2_ParamLimits

0xc7d0,	// (0x0001998d) list_single_2graphic_im_pane_g2

0xc7dc,	// (0x00019999) list_single_2graphic_im_pane_g3_ParamLimits

0xc7dc,	// (0x00019999) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001ce17) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001ce17) list_single_2graphic_im_pane_g

0xc7fc,	// (0x000199b9) list_single_2graphic_im_pane_t1_ParamLimits

0xc7fc,	// (0x000199b9) list_single_2graphic_im_pane_t1

0xc044,	// (0x00019201) list_single_graphic_2heading_pane_fp_ParamLimits

0xc044,	// (0x00019201) list_single_graphic_2heading_pane_fp

0xc08c,	// (0x00019249) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc08c,	// (0x00019249) list_single_graphic_2heading_pane_fp_g1

0xc05d,	// (0x0001921a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc05d,	// (0x0001921a) list_single_graphic_2heading_pane_fp_g2

0xbfb6,	// (0x00019173) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbfb6,	// (0x00019173) list_single_graphic_2heading_pane_fp_g3

0xbfc2,	// (0x0001917f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbfc2,	// (0x0001917f) list_single_graphic_2heading_pane_fp_g4

0xc069,	// (0x00019226) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc069,	// (0x00019226) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd3e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd3e) list_single_graphic_2heading_pane_fp_g

0xc82d,	// (0x000199ea) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc82d,	// (0x000199ea) list_single_graphic_2heading_pane_fp_t1

0xc0c4,	// (0x00019281) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc0c4,	// (0x00019281) list_single_graphic_2heading_pane_fp_t2

0xc843,	// (0x00019a00) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc843,	// (0x00019a00) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001ce20) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001ce20) list_single_graphic_2heading_pane_fp_t

0xba47,	// (0x00018c04) fep_hwr_write_pane_g5_ParamLimits

0xba47,	// (0x00018c04) fep_hwr_write_pane_g5

0xba53,	// (0x00018c10) fep_hwr_write_pane_g6_ParamLimits

0xba53,	// (0x00018c10) fep_hwr_write_pane_g6

0xc4fd,	// (0x000196ba) eswt_shell_pane_ParamLimits

0x8fa2,	// (0x0001615f) bg_popup_window_pane_cp18_ParamLimits

0xa26c,	// (0x00017429) heading_pane_cp70

0xc627,	// (0x000197e4) popup_eswt_tasktip_window_t1_ParamLimits

0x899b,	// (0x00015b58) aid_touch_tab_arrow_left

0x89aa,	// (0x00015b67) aid_touch_tab_arrow_right

0x3428,	// (0x000105e5) title_pane_g3_ParamLimits

0x3428,	// (0x000105e5) title_pane_g3

0x3b40,	// (0x00010cfd) set_value_pane_g1

0x8868,	// (0x00015a25) popup_toolbar_trans_pane_ParamLimits

0xc773,	// (0x00019930) aid_size_cell_tb_trans_pane_ParamLimits

0x3be6,	// (0x00010da3) bg_tb_trans_pane_ParamLimits

0xc785,	// (0x00019942) grid_tb_trans_pane_ParamLimits

0x3666,	// (0x00010823) cont_note_pane_ParamLimits

0x3666,	// (0x00010823) cont_note_pane

0x38c3,	// (0x00010a80) cont_snote2_single_text_pane_ParamLimits

0x38c3,	// (0x00010a80) cont_snote2_single_text_pane

0x38c3,	// (0x00010a80) cont_snote2_single_graphic_pane_ParamLimits

0x38c3,	// (0x00010a80) cont_snote2_single_graphic_pane

0x95ad,	// (0x0001676a) cont_note_wait_pane_ParamLimits

0x95ad,	// (0x0001676a) cont_note_wait_pane

0x95ad,	// (0x0001676a) cont_note_image_pane_ParamLimits

0x95ad,	// (0x0001676a) cont_note_image_pane

0xc859,	// (0x00019a16) popup_note2_window_g1_ParamLimits

0xc859,	// (0x00019a16) popup_note2_window_g1

0xc88a,	// (0x00019a47) popup_note2_window_t1_ParamLimits

0xc88a,	// (0x00019a47) popup_note2_window_t1

0xc8cf,	// (0x00019a8c) popup_note2_window_t2_ParamLimits

0xc8cf,	// (0x00019a8c) popup_note2_window_t2

0xc914,	// (0x00019ad1) popup_note2_window_t3_ParamLimits

0xc914,	// (0x00019ad1) popup_note2_window_t3

0xc959,	// (0x00019b16) popup_note2_window_t4_ParamLimits

0xc959,	// (0x00019b16) popup_note2_window_t4

0x36ea,	// (0x000108a7) popup_note2_window_t5_ParamLimits

0x36ea,	// (0x000108a7) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001ce2c) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001ce2c) popup_note2_window_t

0xc988,	// (0x00019b45) popup_note2_image_window_g1_ParamLimits

0xc988,	// (0x00019b45) popup_note2_image_window_g1

0xc994,	// (0x00019b51) popup_note2_image_window_g2_ParamLimits

0xc994,	// (0x00019b51) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001ce37) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001ce37) popup_note2_image_window_g

0xc9a6,	// (0x00019b63) popup_note2_image_window_t1_ParamLimits

0xc9a6,	// (0x00019b63) popup_note2_image_window_t1

0xc9be,	// (0x00019b7b) popup_note2_image_window_t2_ParamLimits

0xc9be,	// (0x00019b7b) popup_note2_image_window_t2

0xc9d6,	// (0x00019b93) popup_note2_image_window_t3_ParamLimits

0xc9d6,	// (0x00019b93) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001ce3c) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001ce3c) popup_note2_image_window_t

0x95bb,	// (0x00016778) popup_note2_wait_window_g1_ParamLimits

0x95bb,	// (0x00016778) popup_note2_wait_window_g1

0xc9f2,	// (0x00019baf) popup_note2_wait_window_g2_ParamLimits

0xc9f2,	// (0x00019baf) popup_note2_wait_window_g2

0x95d3,	// (0x00016790) popup_note2_wait_window_g3_ParamLimits

0x95d3,	// (0x00016790) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001ce43) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001ce43) popup_note2_wait_window_g

0xc9fe,	// (0x00019bbb) popup_note2_wait_window_t1_ParamLimits

0xc9fe,	// (0x00019bbb) popup_note2_wait_window_t1

0xca1c,	// (0x00019bd9) popup_note2_wait_window_t2_ParamLimits

0xca1c,	// (0x00019bd9) popup_note2_wait_window_t2

0xca3a,	// (0x00019bf7) popup_note2_wait_window_t3_ParamLimits

0xca3a,	// (0x00019bf7) popup_note2_wait_window_t3

0xca4c,	// (0x00019c09) popup_note2_wait_window_t4_ParamLimits

0xca4c,	// (0x00019c09) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001ce4a) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001ce4a) popup_note2_wait_window_t

0xca5e,	// (0x00019c1b) wait_bar2_pane_ParamLimits

0xca5e,	// (0x00019c1b) wait_bar2_pane

0xca76,	// (0x00019c33) popup_snote2_single_text_window_g1_ParamLimits

0xca76,	// (0x00019c33) popup_snote2_single_text_window_g1

0xca9e,	// (0x00019c5b) popup_snote2_single_text_window_t1_ParamLimits

0xca9e,	// (0x00019c5b) popup_snote2_single_text_window_t1

0xcaea,	// (0x00019ca7) popup_snote2_single_text_window_t2_ParamLimits

0xcaea,	// (0x00019ca7) popup_snote2_single_text_window_t2

0xcb36,	// (0x00019cf3) popup_snote2_single_text_window_t3_ParamLimits

0xcb36,	// (0x00019cf3) popup_snote2_single_text_window_t3

0xcb77,	// (0x00019d34) popup_snote2_single_text_window_t4_ParamLimits

0xcb77,	// (0x00019d34) popup_snote2_single_text_window_t4

0xcbad,	// (0x00019d6a) popup_snote2_single_text_window_t5_ParamLimits

0xcbad,	// (0x00019d6a) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001ce53) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001ce53) popup_snote2_single_text_window_t

0xcbd8,	// (0x00019d95) popup_snote2_single_graphic_window_g1_ParamLimits

0xcbd8,	// (0x00019d95) popup_snote2_single_graphic_window_g1

0xcc00,	// (0x00019dbd) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc00,	// (0x00019dbd) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001ce5e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001ce5e) popup_snote2_single_graphic_window_g

0xcc28,	// (0x00019de5) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc28,	// (0x00019de5) popup_snote2_single_graphic_window_t1

0xcc74,	// (0x00019e31) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc74,	// (0x00019e31) popup_snote2_single_graphic_window_t2

0xcb36,	// (0x00019cf3) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb36,	// (0x00019cf3) popup_snote2_single_graphic_window_t3

0xcb77,	// (0x00019d34) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb77,	// (0x00019d34) popup_snote2_single_graphic_window_t4

0xcbad,	// (0x00019d6a) popup_snote2_single_graphic_window_t5_ParamLimits

0xcbad,	// (0x00019d6a) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001ce63) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001ce63) popup_snote2_single_graphic_window_t

0xb450,	// (0x0001860d) clock_nsta_pane_cp2_t1

0xb450,	// (0x0001860d) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001cc77) clock_nsta_pane_cp2_t

0x3c05,	// (0x00010dc2) form_field_data_wide_pane_g1_ParamLimits

0x3c11,	// (0x00010dce) form_field_data_wide_pane_g2_ParamLimits

0x3c11,	// (0x00010dce) form_field_data_wide_pane_g2

0x3c1d,	// (0x00010dda) form_field_data_wide_pane_g3_ParamLimits

0x3c1d,	// (0x00010dda) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c833) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c833) form_field_data_wide_pane_g

0xb32f,	// (0x000184ec) grid_touch_3_pane_ParamLimits

0xb32f,	// (0x000184ec) grid_touch_3_pane

0xccc0,	// (0x00019e7d) cell_touch_3_pane_ParamLimits

0xccc0,	// (0x00019e7d) cell_touch_3_pane

0xb9b6,	// (0x00018b73) cell_touch_3_pane_g1

0xb9b6,	// (0x00018b73) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001ccfc) cell_touch_3_pane_g

0x371c,	// (0x000108d9) cont_query_data_pane

0x3724,	// (0x000108e1) cont_query_data_pane_cp1

0xccf3,	// (0x00019eb0) button_value_adjust_pane_cp7

0xccfb,	// (0x00019eb8) query_popup_pane_cp3

0x441a,	// (0x000115d7) bg_popup_sub_pane_cp22_ParamLimits

0x599e,	// (0x00012b5b) navi_navi_volume_pane_cp2

0x59b9,	// (0x00012b76) popup_side_volume_key_window_g2

0x59c8,	// (0x00012b85) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c8c9) popup_side_volume_key_window_g

0x59e5,	// (0x00012ba2) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c8d0) popup_side_volume_key_window_t

0x47c8,	// (0x00011985) popup_side_volume_key_window_ParamLimits

0x76f2,	// (0x000148af) list_double_graphic_pane_g4_ParamLimits

0x76f2,	// (0x000148af) list_double_graphic_pane_g4

0xa5d4,	// (0x00017791) list_single_2heading_msg_pane_ParamLimits

0xa5d4,	// (0x00017791) list_single_2heading_msg_pane

0xcd2c,	// (0x00019ee9) list_single_2heading_msg_pane_g1_ParamLimits

0xcd2c,	// (0x00019ee9) list_single_2heading_msg_pane_g1

0x3afb,	// (0x00010cb8) list_single_2heading_msg_pane_g2_ParamLimits

0x3afb,	// (0x00010cb8) list_single_2heading_msg_pane_g2

0xcd38,	// (0x00019ef5) list_single_2heading_msg_pane_g3_ParamLimits

0xcd38,	// (0x00019ef5) list_single_2heading_msg_pane_g3

0xcd44,	// (0x00019f01) list_single_2heading_msg_pane_g4_ParamLimits

0xcd44,	// (0x00019f01) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001ce6e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001ce6e) list_single_2heading_msg_pane_g

0xcd5c,	// (0x00019f19) list_single_2heading_msg_pane_t1_ParamLimits

0xcd5c,	// (0x00019f19) list_single_2heading_msg_pane_t1

0xcd84,	// (0x00019f41) list_single_2heading_msg_pane_t2_ParamLimits

0xcd84,	// (0x00019f41) list_single_2heading_msg_pane_t2

0xcdd4,	// (0x00019f91) list_single_2heading_msg_pane_t3_ParamLimits

0xcdd4,	// (0x00019f91) list_single_2heading_msg_pane_t3

0xce0d,	// (0x00019fca) list_single_2heading_msg_pane_t4_ParamLimits

0xce0d,	// (0x00019fca) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001ce77) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001ce77) list_single_2heading_msg_pane_t

0x3434,	// (0x000105f1) title_pane_g4_ParamLimits

0x3434,	// (0x000105f1) title_pane_g4

0x57aa,	// (0x00012967) title_pane_stacon_g3_ParamLimits

0x57aa,	// (0x00012967) title_pane_stacon_g3

0xc7f0,	// (0x000199ad) list_single_2graphic_im_pane_g4_ParamLimits

0xc7f0,	// (0x000199ad) list_single_2graphic_im_pane_g4

0xa01d,	// (0x000171da) popup_side_volume_key_window_cp

0xa928,	// (0x00017ae5) main_idle_act2_pane_t1

0x5dd0,	// (0x00012f8d) toolbar_button_pane_g10

0x752f,	// (0x000146ec) popup_toolbar_window_cp1

0xb441,	// (0x000185fe) clock_nsta_pane_cp_t1

0xb441,	// (0x000185fe) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001cc72) clock_nsta_pane_cp_t

0x599e,	// (0x00012b5b) navi_navi_volume_pane_cp2_ParamLimits

0x59ad,	// (0x00012b6a) popup_side_volume_key_window_g1_ParamLimits

0x59b9,	// (0x00012b76) popup_side_volume_key_window_g2_ParamLimits

0x59c8,	// (0x00012b85) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c8c9) popup_side_volume_key_window_g_ParamLimits

0x6259,	// (0x00013416) fep_hwr_aid_pane

0x6302,	// (0x000134bf) bg_fep_hwr_top_pane_g4_ParamLimits

0xba17,	// (0x00018bd4) fep_hwr_top_pane_g1_ParamLimits

0xba29,	// (0x00018be6) fep_hwr_top_pane_g2_ParamLimits

0x6322,	// (0x000134df) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001ccc7) fep_hwr_top_pane_g_ParamLimits

0x6337,	// (0x000134f4) fep_hwr_top_text_pane_ParamLimits

0x9dd2,	// (0x00016f8f) aid_touch_tab_arrow_arrow_2

0x9ddb,	// (0x00016f98) aid_touch_tab_arrow_left_2

0x626d,	// (0x0001342a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x62a4,	// (0x00013461) fep_hwr_prediction_pane

0xbb7f,	// (0x00018d3c) fep_vkb_prediction_pane

0xbc85,	// (0x00018e42) fep_vkb_side_pane_g3_ParamLimits

0xbc85,	// (0x00018e42) fep_vkb_side_pane_g3

0x64c6,	// (0x00013683) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6537,	// (0x000136f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6544,	// (0x00013701) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001cd76) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6673,	// (0x00013830) fep_hwr_prediction_pane_g1

0x667d,	// (0x0001383a) fep_hwr_prediction_pane_g2

0x6685,	// (0x00013842) fep_hwr_prediction_pane_g3

0x668d,	// (0x0001384a) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001ce80) fep_hwr_prediction_pane_g

0xce32,	// (0x00019fef) fep_vkb_prediction_pane_g1

0xce3c,	// (0x00019ff9) fep_vkb_prediction_pane_g2

0xce44,	// (0x0001a001) fep_vkb_prediction_pane_g3

0xce4c,	// (0x0001a009) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001ce89) fep_vkb_prediction_pane_g

0x60d9,	// (0x00013296) slider_set_pane_g3

0x60ed,	// (0x000132aa) slider_set_pane_g4

0x6105,	// (0x000132c2) slider_set_pane_g5

0x60d9,	// (0x00013296) slider_set_pane_g6

0x611b,	// (0x000132d8) slider_set_pane_g7

0xa4d3,	// (0x00017690) slider_form_pane_g3

0xa4dc,	// (0x00017699) slider_form_pane_g4

0xa4e4,	// (0x000176a1) slider_form_pane_g5

0xa4d3,	// (0x00017690) slider_form_pane_g6

0xa4ec,	// (0x000176a9) slider_form_pane_g7

0xac2b,	// (0x00017de8) slider_set_pane_vc_g3

0xac34,	// (0x00017df1) slider_set_pane_vc_g4

0xac3d,	// (0x00017dfa) slider_set_pane_vc_g5

0xac2b,	// (0x00017de8) slider_set_pane_vc_g6

0xac46,	// (0x00017e03) slider_set_pane_vc_g7

0xb0f4,	// (0x000182b1) slider_form_pane_vc_g1

0xb0fd,	// (0x000182ba) slider_form_pane_vc_g2

0xb106,	// (0x000182c3) slider_form_pane_vc_g3

0xb0f4,	// (0x000182b1) slider_form_pane_vc_g4

0xb10f,	// (0x000182cc) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001cc44) slider_form_pane_vc_g

0x3247,	// (0x00010404) main_idle_act3_pane

0xce54,	// (0x0001a011) ai3_links_pane

0xce5d,	// (0x0001a01a) popup_ai3_data_window_ParamLimits

0xce5d,	// (0x0001a01a) popup_ai3_data_window

0x3247,	// (0x00010404) grid_ai3_links_pane

0xce7b,	// (0x0001a038) cell_ai3_links_pane_ParamLimits

0xce7b,	// (0x0001a038) cell_ai3_links_pane

0xce95,	// (0x0001a052) bg_popup_sub_pane_cp11

0xcea2,	// (0x0001a05f) cell_ai3_links_pane_g1

0x3247,	// (0x00010404) bg_popup_sub_pane_cp12

0xcec7,	// (0x0001a084) heading_ai3_data_pane

0xcecf,	// (0x0001a08c) list_ai3_gene_pane

0xcedb,	// (0x0001a098) popup_ai3_data_window_g1

0xcee3,	// (0x0001a0a0) heading_ai3_data_pane_g1

0xceeb,	// (0x0001a0a8) heading_ai3_data_pane_t1

0xcef9,	// (0x0001a0b6) list_double_ai3_gene_pane_ParamLimits

0xcef9,	// (0x0001a0b6) list_double_ai3_gene_pane

0xcf06,	// (0x0001a0c3) list_single_ai3_gene_pane_ParamLimits

0xcf06,	// (0x0001a0c3) list_single_ai3_gene_pane

0xb97b,	// (0x00018b38) list_highlight_pane_cp7_ParamLimits

0xb97b,	// (0x00018b38) list_highlight_pane_cp7

0xcf13,	// (0x0001a0d0) list_single_a13_gene_pane_t1_ParamLimits

0xcf13,	// (0x0001a0d0) list_single_a13_gene_pane_t1

0xcf2a,	// (0x0001a0e7) list_single_ai3_gene_pane_g1

0xcf33,	// (0x0001a0f0) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001ce92) list_single_ai3_gene_pane_g

0xcf3b,	// (0x0001a0f8) list_double_ai3_gene_pane_g1_ParamLimits

0xcf3b,	// (0x0001a0f8) list_double_ai3_gene_pane_g1

0xcf47,	// (0x0001a104) list_double_ai3_gene_pane_t1_ParamLimits

0xcf47,	// (0x0001a104) list_double_ai3_gene_pane_t1

0xcf63,	// (0x0001a120) list_double_ai3_gene_pane_t2_ParamLimits

0xcf63,	// (0x0001a120) list_double_ai3_gene_pane_t2

0xcf78,	// (0x0001a135) list_double_ai3_gene_pane_t3_ParamLimits

0xcf78,	// (0x0001a135) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001ce97) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001ce97) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcd0c,	// (0x00019ec9) aid_size_min_col_2

0xcd16,	// (0x00019ed3) aid_size_min_msg_ParamLimits

0xcd16,	// (0x00019ed3) aid_size_min_msg

0xbd91,	// (0x00018f4e) fep_vkb_top_text_pane_g2_ParamLimits

0xbd91,	// (0x00018f4e) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001ccf7) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001ccf7) fep_vkb_top_text_pane_g

0x3247,	// (0x00010404) main_hc_apps_shell_pane

0xcf95,	// (0x0001a152) grid_hc_apps_pane_ParamLimits

0xcf95,	// (0x0001a152) grid_hc_apps_pane

0xcfa4,	// (0x0001a161) list_hc_apps_pane

0xcfac,	// (0x0001a169) scroll_pane_cp37_ParamLimits

0xcfac,	// (0x0001a169) scroll_pane_cp37

0xcfb8,	// (0x0001a175) cell_hc_apps_pane_ParamLimits

0xcfb8,	// (0x0001a175) cell_hc_apps_pane

0xd070,	// (0x0001a22d) cell_hc_apps_pane_g1_ParamLimits

0xd070,	// (0x0001a22d) cell_hc_apps_pane_g1

0xd0a1,	// (0x0001a25e) cell_hc_apps_pane_g2_ParamLimits

0xd0a1,	// (0x0001a25e) cell_hc_apps_pane_g2

0xd0bd,	// (0x0001a27a) cell_hc_apps_pane_g3_ParamLimits

0xd0bd,	// (0x0001a27a) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001ce9e) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001ce9e) cell_hc_apps_pane_g

0xd0df,	// (0x0001a29c) cell_hc_apps_pane_t1_ParamLimits

0xd0df,	// (0x0001a29c) cell_hc_apps_pane_t1

0x3666,	// (0x00010823) grid_highlight_pane_cp10_ParamLimits

0x3666,	// (0x00010823) grid_highlight_pane_cp10

0xd11f,	// (0x0001a2dc) list_single_hc_apps_pane_ParamLimits

0xd11f,	// (0x0001a2dc) list_single_hc_apps_pane

0xd15e,	// (0x0001a31b) list_single_hc_apps_pane_g1

0xd177,	// (0x0001a334) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001cea5) list_single_hc_apps_pane_g

0xd190,	// (0x0001a34d) list_single_hc_apps_pane_g2_copy1

0xd1ac,	// (0x0001a369) list_single_hc_apps_pane_t1

0x3490,	// (0x0001064d) bg_set_opt_pane_cp_ParamLimits

0x56d1,	// (0x0001288e) setting_slider_pane_t1_ParamLimits

0x56ea,	// (0x000128a7) setting_slider_pane_t2_ParamLimits

0x5704,	// (0x000128c1) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c71b) setting_slider_pane_t_ParamLimits

0x571c,	// (0x000128d9) slider_set_pane_ParamLimits

0x5c4c,	// (0x00012e09) control_pane_g5_ParamLimits

0x5c4c,	// (0x00012e09) control_pane_g5

0xa300,	// (0x000174bd) slider_set_pane_g1_ParamLimits

0x60cd,	// (0x0001328a) slider_set_pane_g2_ParamLimits

0x60d9,	// (0x00013296) slider_set_pane_g3_ParamLimits

0x60ed,	// (0x000132aa) slider_set_pane_g4_ParamLimits

0x6105,	// (0x000132c2) slider_set_pane_g5_ParamLimits

0x60d9,	// (0x00013296) slider_set_pane_g6_ParamLimits

0x611b,	// (0x000132d8) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001cb1c) slider_set_pane_g_ParamLimits

0x4870,	// (0x00011a2d) navi_icon_text_pane_ParamLimits

0x895a,	// (0x00015b17) aid_fill_nsta_2_ParamLimits

0x899b,	// (0x00015b58) aid_touch_tab_arrow_left_ParamLimits

0x89aa,	// (0x00015b67) aid_touch_tab_arrow_right_ParamLimits

0x8a17,	// (0x00015bd4) clock_nsta_pane_ParamLimits

0x9db4,	// (0x00016f71) navi_icon_pane_g1_ParamLimits

0x9dc0,	// (0x00016f7d) navi_text_pane_t1_ParamLimits

0xb55e,	// (0x0001871b) navi_icon_text_pane_g1_ParamLimits

0xb56a,	// (0x00018727) navi_icon_text_pane_t1_ParamLimits

0xd15e,	// (0x0001a31b) list_single_hc_apps_pane_g1_ParamLimits

0xd177,	// (0x0001a334) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001cea5) list_single_hc_apps_pane_g_ParamLimits

0xd190,	// (0x0001a34d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd1ac,	// (0x0001a369) list_single_hc_apps_pane_t1_ParamLimits

0x55d3,	// (0x00012790) popup_toolbar2_fixed_window_ParamLimits

0x55d3,	// (0x00012790) popup_toolbar2_fixed_window

0x885e,	// (0x00015a1b) popup_toolbar2_float_window

0x3247,	// (0x00010404) bg_popup_sub_pane_cp27

0xd1da,	// (0x0001a397) grid_toolbar2_float_pane

0x3247,	// (0x00010404) bg_popup_sub_pane_cp26

0xd1da,	// (0x0001a397) grid_toolbar2_fixed_pane

0xd1e2,	// (0x0001a39f) cell_toolbar2_fixed_pane_ParamLimits

0xd1e2,	// (0x0001a39f) cell_toolbar2_fixed_pane

0xd1f2,	// (0x0001a3af) cell_toolbar2_fixed_pane_g1

0xd1fb,	// (0x0001a3b8) toolbar2_fixed_button_pane

0x8e7c,	// (0x00016039) toolbar2_fixed_button_pane_g1

0x8e8c,	// (0x00016049) toolbar2_fixed_button_pane_g2

0x8e84,	// (0x00016041) toolbar2_fixed_button_pane_g3

0x8e9c,	// (0x00016059) toolbar2_fixed_button_pane_g4

0x8e94,	// (0x00016051) toolbar2_fixed_button_pane_g5

0x8ea4,	// (0x00016061) toolbar2_fixed_button_pane_g6

0x8eac,	// (0x00016069) toolbar2_fixed_button_pane_g7

0x8ebc,	// (0x00016079) toolbar2_fixed_button_pane_g8

0x8eb4,	// (0x00016071) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001ca1e) toolbar2_fixed_button_pane_g

0xd203,	// (0x0001a3c0) cell_toolbar2_float_pane_ParamLimits

0xd203,	// (0x0001a3c0) cell_toolbar2_float_pane

0xd214,	// (0x0001a3d1) cell_toolbar2_float_pane_g1

0xd1fb,	// (0x0001a3b8) toolbar2_fixed_button_pane_cp

0xbaed,	// (0x00018caa) fep_vkb_accented_list_pane_ParamLimits

0xbaed,	// (0x00018caa) fep_vkb_accented_list_pane

0x64a6,	// (0x00013663) bg_popup_fep_shadow_pane_g9

0x7f7f,	// (0x0001513c) bg_popup_fep_shadow_pane_cp3

0x3d96,	// (0x00010f53) list_accented_list_pane

0xd21d,	// (0x0001a3da) list_single_accented_list_pane_ParamLimits

0xd21d,	// (0x0001a3da) list_single_accented_list_pane

0x7f7f,	// (0x0001513c) list_highlight_pane_cp10

0xd22e,	// (0x0001a3eb) list_single_accented_list_pane_t1

0x87a4,	// (0x00015961) popup_slider_window_ParamLimits

0x87a4,	// (0x00015961) popup_slider_window

0xcd03,	// (0x00019ec0) aid_indentation_list_msg

0xd2fa,	// (0x0001a4b7) bg_popup_window_pane_cp19

0xd368,	// (0x0001a525) popup_slider_window_g1

0xd384,	// (0x0001a541) popup_slider_window_g2

0xd3a0,	// (0x0001a55d) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001ceaa) popup_slider_window_g

0xd3fc,	// (0x0001a5b9) popup_slider_window_t1

0xd470,	// (0x0001a62d) small_volume_slider_vertical_pane

0xb9b6,	// (0x00018b73) small_volume_slider_vertical_pane_g1

0xb9b6,	// (0x00018b73) small_volume_slider_vertical_pane_g2

0xd48c,	// (0x0001a649) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001cebc) small_volume_slider_vertical_pane_g

0x5381,	// (0x0001253e) area_side_right_pane_ParamLimits

0x5381,	// (0x0001253e) area_side_right_pane

0x6695,	// (0x00013852) aid_size_side_button_ParamLimits

0x6695,	// (0x00013852) aid_size_side_button

0x66a9,	// (0x00013866) grid_sctrl_middle_pane_ParamLimits

0x66a9,	// (0x00013866) grid_sctrl_middle_pane

0x66c9,	// (0x00013886) sctrl_sk_bottom_pane

0x66da,	// (0x00013897) sctrl_sk_top_pane

0x66ec,	// (0x000138a9) aid_touch_sctrl_top

0x66f9,	// (0x000138b6) bg_sctrl_sk_pane_ParamLimits

0x66f9,	// (0x000138b6) bg_sctrl_sk_pane

0x6707,	// (0x000138c4) sctrl_sk_top_pane_g1

0x6714,	// (0x000138d1) sctrl_sk_top_pane_t1

0x66ec,	// (0x000138a9) aid_touch_sctrl_bottom

0x66f9,	// (0x000138b6) bg_sctrl_sk_pane_cp_ParamLimits

0x66f9,	// (0x000138b6) bg_sctrl_sk_pane_cp

0x672f,	// (0x000138ec) sctrl_sk_bottom_pane_g1

0x6714,	// (0x000138d1) sctrl_sk_bottom_pane_t1

0x6738,	// (0x000138f5) cell_sctrl_middle_pane_ParamLimits

0x6738,	// (0x000138f5) cell_sctrl_middle_pane

0x6755,	// (0x00013912) aid_touch_sctrl_middle_ParamLimits

0x6755,	// (0x00013912) aid_touch_sctrl_middle

0x6767,	// (0x00013924) bg_sctrl_middle_pane_ParamLimits

0x6767,	// (0x00013924) bg_sctrl_middle_pane

0x64c6,	// (0x00013683) cell_sctrl_middle_pane_g1_ParamLimits

0x64c6,	// (0x00013683) cell_sctrl_middle_pane_g1

0x6775,	// (0x00013932) cell_sctrl_middle_pane_g2_ParamLimits

0x6775,	// (0x00013932) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001cec8) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001cec8) cell_sctrl_middle_pane_g

0x8e7c,	// (0x00016039) bg_sctrl_middle_pane_g1

0x8e84,	// (0x00016041) bg_sctrl_middle_pane_g2

0x8e8c,	// (0x00016049) bg_sctrl_middle_pane_g3

0x8e94,	// (0x00016051) bg_sctrl_middle_pane_g4

0x8e9c,	// (0x00016059) bg_sctrl_middle_pane_g5

0x8ea4,	// (0x00016061) bg_sctrl_middle_pane_g6

0x8eac,	// (0x00016069) bg_sctrl_middle_pane_g7

0x8eb4,	// (0x00016071) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001cecd) bg_sctrl_middle_pane_g

0x8ebc,	// (0x00016079) bg_sctrl_middle_pane_g8_copy1

0x8e7c,	// (0x00016039) bg_sctrl_sk_pane_g1

0x8e8c,	// (0x00016049) bg_sctrl_sk_pane_g2

0x8e84,	// (0x00016041) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001ca1e) bg_sctrl_sk_pane_g

0x3a81,	// (0x00010c3e) aid_size_touch_scroll_bar

0x8e9c,	// (0x00016059) bg_sctrl_sk_pane_g4

0x8e94,	// (0x00016051) bg_sctrl_sk_pane_g5

0x8ea4,	// (0x00016061) bg_sctrl_sk_pane_g6

0x8eac,	// (0x00016069) bg_sctrl_sk_pane_g7

0x8ebc,	// (0x00016079) bg_sctrl_sk_pane_g8

0x8eb4,	// (0x00016071) bg_sctrl_sk_pane_g9

0x83bb,	// (0x00015578) popup_fep_china_hwr2_fs_candidate_window

0x83c5,	// (0x00015582) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x83c5,	// (0x00015582) popup_fep_china_hwr2_fs_control_window

0x64c6,	// (0x00013683) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001cec3) sctrl_sk_top_pane_g

0xd495,	// (0x0001a652) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd495,	// (0x0001a652) aid_fep_china_hwr2_fs_cell

0xd4a8,	// (0x0001a665) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd4a8,	// (0x0001a665) bg_popup_fep_shadow_pane_cp4

0xd4c1,	// (0x0001a67e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4c1,	// (0x0001a67e) bg_popup_fep_shadow_pane_cp5

0xd4d3,	// (0x0001a690) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4d3,	// (0x0001a690) popup_fep_china_hwr2_fs_control_bar_grid

0xd4e3,	// (0x0001a6a0) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4eb,	// (0x0001a6a8) aid_fep_china_hwr2_fs_candi_cell

0x3247,	// (0x00010404) bg_popup_fep_shadow_pane_cp6

0xd4f5,	// (0x0001a6b2) popup_fep_china_hwr2_fs_candidate_grid

0xd4ff,	// (0x0001a6bc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4ff,	// (0x0001a6bc) cell_fep_china_hwr2_fs_funtion_grid

0xb9b6,	// (0x00018b73) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd517,	// (0x0001a6d4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd517,	// (0x0001a6d4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd525,	// (0x0001a6e2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd525,	// (0x0001a6e2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001cede) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001cede) cell_fep_china_hwr2_fs_funtion_grid_g

0xd53b,	// (0x0001a6f8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd53b,	// (0x0001a6f8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd550,	// (0x0001a70d) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd550,	// (0x0001a70d) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001cee3) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001cee3) cell_fep_china_hwr2_fs_funtion_grid_t

0xd56c,	// (0x0001a729) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd574,	// (0x0001a731) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd57c,	// (0x0001a739) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001cee8) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd584,	// (0x0001a741) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd584,	// (0x0001a741) cell_fep_china_hwr2_fs_candidate_grid

0xd5a3,	// (0x0001a760) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd5ab,	// (0x0001a768) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb9b6,	// (0x00018b73) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb9b6,	// (0x00018b73) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001ccfc) cell_fep_china_hwr2_fs_candidate_grid_g

0xd5b3,	// (0x0001a770) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a2a,	// (0x00015be7) clock_nsta_pane_cp_24_ParamLimits

0x8a2a,	// (0x00015be7) clock_nsta_pane_cp_24

0x8aaa,	// (0x00015c67) indicator_nsta_pane_cp_24_ParamLimits

0x8aaa,	// (0x00015c67) indicator_nsta_pane_cp_24

0x9c30,	// (0x00016ded) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001ca83) heading_pane_g

0xa76f,	// (0x0001792c) grid_sct_catagory_button_pane

0xa7a1,	// (0x0001795e) scroll_pane_cp5_ParamLimits

0xb5ac,	// (0x00018769) button_value_adjust_pane_cp5_ParamLimits

0xb5ac,	// (0x00018769) button_value_adjust_pane_cp5

0xb6b2,	// (0x0001886f) form2_midp_time_pane_ParamLimits

0xd5c1,	// (0x0001a77e) cell_sct_catagory_button_pane_ParamLimits

0xd5c1,	// (0x0001a77e) cell_sct_catagory_button_pane

0xb97b,	// (0x00018b38) bg_button_pane_cp01_ParamLimits

0xb97b,	// (0x00018b38) bg_button_pane_cp01

0xb9b6,	// (0x00018b73) cell_sct_catagory_button_pane_g1

0x87e5,	// (0x000159a2) popup_tb_extension_window

0xd5d3,	// (0x0001a790) aid_size_cell_ext_ParamLimits

0xd5d3,	// (0x0001a790) aid_size_cell_ext

0x3666,	// (0x00010823) bg_tb_trans_pane_cp1_ParamLimits

0x3666,	// (0x00010823) bg_tb_trans_pane_cp1

0xd5f3,	// (0x0001a7b0) grid_tb_ext_pane_ParamLimits

0xd5f3,	// (0x0001a7b0) grid_tb_ext_pane

0xd623,	// (0x0001a7e0) cell_tb_ext_pane_ParamLimits

0xd623,	// (0x0001a7e0) cell_tb_ext_pane

0xd63a,	// (0x0001a7f7) cell_tb_ext_pane_g1_ParamLimits

0xd63a,	// (0x0001a7f7) cell_tb_ext_pane_g1

0xd657,	// (0x0001a814) cell_tb_ext_pane_t1

0x3666,	// (0x00010823) list_highlight_pane_cp11_ParamLimits

0x3666,	// (0x00010823) list_highlight_pane_cp11

0x55f2,	// (0x000127af) popup_uni_indicator_window_ParamLimits

0x55f2,	// (0x000127af) popup_uni_indicator_window

0x3be6,	// (0x00010da3) bg_popup_sub_pane_cp14

0xd672,	// (0x0001a82f) list_uniindi_pane

0xd67e,	// (0x0001a83b) uniindi_top_pane

0x3666,	// (0x00010823) bg_uniindi_top_pane

0xd69f,	// (0x0001a85c) uniindi_top_pane_g1

0xd6b5,	// (0x0001a872) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001ceef) uniindi_top_pane_g

0xd6df,	// (0x0001a89c) uniindi_top_pane_t1

0xd70b,	// (0x0001a8c8) list_single_uniindi_pane_ParamLimits

0xd70b,	// (0x0001a8c8) list_single_uniindi_pane

0xb9b6,	// (0x00018b73) bg_uniindi_top_pane_g1

0xd71d,	// (0x0001a8da) list_single_uniindi_pane_g1

0xd730,	// (0x0001a8ed) list_single_uniindi_pane_t1

0x545e,	// (0x0001261b) control_bg_pane

0xd755,	// (0x0001a912) bg_sctrl_sk_pane_cp1

0xd75e,	// (0x0001a91b) bg_sctrl_sk_pane_cp2

0xd767,	// (0x0001a924) control_bg_pane_g1

0xd770,	// (0x0001a92d) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001cef8) control_bg_pane_g

0xb3d3,	// (0x00018590) cell_indicator_nsta_pane_g1_ParamLimits

0xb3e1,	// (0x0001859e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001cc60) cell_indicator_nsta_pane_g_ParamLimits

0xb742,	// (0x000188ff) form2_midp_time_pane_t1_ParamLimits

0x38c3,	// (0x00010a80) main_idle_act4_pane_ParamLimits

0x38c3,	// (0x00010a80) main_idle_act4_pane

0x87e5,	// (0x000159a2) popup_tb_extension_window_ParamLimits

0xd615,	// (0x0001a7d2) tb_ext_find_pane_ParamLimits

0xd615,	// (0x0001a7d2) tb_ext_find_pane

0xd779,	// (0x0001a936) ai_gene_pane_1_cp1

0x80bc,	// (0x00015279) ai_gene_pane_2_cp1

0xd781,	// (0x0001a93e) list_single_idle_plugin_calendar_pane

0xd78a,	// (0x0001a947) list_single_idle_plugin_notification_pane

0xd793,	// (0x0001a950) list_single_idle_plugin_player_pane

0xd79c,	// (0x0001a959) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd79c,	// (0x0001a959) list_single_idle_plugin_shortcut_pane

0xd7be,	// (0x0001a97b) main_idle_act4_pane_t1

0xd7d0,	// (0x0001a98d) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001cefd) main_idle_act4_pane_t

0xd7e2,	// (0x0001a99f) middle_sk_idle_act4_pane_ParamLimits

0xd7e2,	// (0x0001a99f) middle_sk_idle_act4_pane

0xd7f8,	// (0x0001a9b5) popup_clock_digital_analogue_window_cp2

0xd812,	// (0x0001a9cf) shortcut_wheel_idle_act4_pane_ParamLimits

0xd812,	// (0x0001a9cf) shortcut_wheel_idle_act4_pane

0xb9b6,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g1

0xb9b6,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g2

0xb9b6,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g3

0xb9b6,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g4

0xb9b6,	// (0x00018b73) shortcut_wheel_idle_act4_pane_g5

0xd826,	// (0x0001a9e3) shortcut_wheel_idle_act4_pane_g6

0xd82e,	// (0x0001a9eb) shortcut_wheel_idle_act4_pane_g7

0xd836,	// (0x0001a9f3) shortcut_wheel_idle_act4_pane_g8

0xd83e,	// (0x0001a9fb) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001cf02) shortcut_wheel_idle_act4_pane_g

0xbc31,	// (0x00018dee) middle_sk_idle_act4_pane_g1_ParamLimits

0xbc31,	// (0x00018dee) middle_sk_idle_act4_pane_g1

0xd8a2,	// (0x0001aa5f) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8a2,	// (0x0001aa5f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001cf25) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001cf25) middle_sk_idle_act4_pane_g

0xd8ae,	// (0x0001aa6b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8ae,	// (0x0001aa6b) middle_sk_idle_act4_pane_t1

0xd8cb,	// (0x0001aa88) grid_ai_shortcut_pane_ParamLimits

0xd8cb,	// (0x0001aa88) grid_ai_shortcut_pane

0xd8e4,	// (0x0001aaa1) list_highlight_pane_cp16_ParamLimits

0xd8e4,	// (0x0001aaa1) list_highlight_pane_cp16

0xd8f1,	// (0x0001aaae) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8f1,	// (0x0001aaae) list_single_idle_plugin_shortcut_pane_g1

0xd8fd,	// (0x0001aaba) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8fd,	// (0x0001aaba) list_single_idle_plugin_shortcut_pane_g2

0xd917,	// (0x0001aad4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd917,	// (0x0001aad4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001cf2a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001cf2a) list_single_idle_plugin_shortcut_pane_g

0xd92a,	// (0x0001aae7) cell_ai_shortcut_pane_ParamLimits

0xd92a,	// (0x0001aae7) cell_ai_shortcut_pane

0xd94d,	// (0x0001ab0a) cell_ai_shortcut_pane_g1_ParamLimits

0xd94d,	// (0x0001ab0a) cell_ai_shortcut_pane_g1

0xd779,	// (0x0001a936) ai_gene_pane_1_cp2

0xd96f,	// (0x0001ab2c) ai_gene_pane_2_cp2

0xd977,	// (0x0001ab34) list_highlight_pane_cp15

0xd980,	// (0x0001ab3d) list_single_idle_plugin_calendar_pane_g1

0xd977,	// (0x0001ab34) list_highlight_pane_cp17

0xd988,	// (0x0001ab45) list_single_idle_plugin_calendar_pane_g1_copy1

0xd990,	// (0x0001ab4d) list_single_idle_plugin_player_pane_g1

0xa9d6,	// (0x00017b93) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001cf31) list_single_idle_plugin_player_pane_g

0xd998,	// (0x0001ab55) list_single_idle_plugin_player_pane_t1

0xd9a6,	// (0x0001ab63) list_single_idle_plugin_player_pane_t2

0xd9b4,	// (0x0001ab71) list_single_idle_plugin_player_pane_t3

0xd9c2,	// (0x0001ab7f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001cf36) list_single_idle_plugin_player_pane_t

0xd9d0,	// (0x0001ab8d) wait_bar_pane_cp15

0xd9d8,	// (0x0001ab95) grid_ai_notification_pane

0xa9d6,	// (0x00017b93) list_single_idle_plugin_notification_pane_g1

0xd9e1,	// (0x0001ab9e) cell_ai_notification_pane_ParamLimits

0xd9e1,	// (0x0001ab9e) cell_ai_notification_pane

0xd9ee,	// (0x0001abab) cell_ai_notification_pane_g1

0xd9f6,	// (0x0001abb3) cell_ai_notification_pane_t1

0xda04,	// (0x0001abc1) tb_ext_find_button_pane

0xda0c,	// (0x0001abc9) tb_ext_find_pane_g1

0xda14,	// (0x0001abd1) tb_ext_find_pane_t1

0x4340,	// (0x000114fd) tb_ext_find_button_pane_g1

0xda22,	// (0x0001abdf) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001cf3f) tb_ext_find_button_pane_g

0xd7be,	// (0x0001a97b) main_idle_act4_pane_t1_ParamLimits

0xd7d0,	// (0x0001a98d) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001cefd) main_idle_act4_pane_t_ParamLimits

0xd7f8,	// (0x0001a9b5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd806,	// (0x0001a9c3) sat_plugin_idle_act4_pane_ParamLimits

0xd806,	// (0x0001a9c3) sat_plugin_idle_act4_pane

0xda2b,	// (0x0001abe8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda2b,	// (0x0001abe8) sat_plugin_idle_act4_pane_t1

0xda3e,	// (0x0001abfb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda3e,	// (0x0001abfb) sat_plugin_idle_act4_pane_t2

0xda51,	// (0x0001ac0e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda51,	// (0x0001ac0e) sat_plugin_idle_act4_pane_t3

0xda64,	// (0x0001ac21) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda64,	// (0x0001ac21) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001cf44) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001cf44) sat_plugin_idle_act4_pane_t

0x5523,	// (0x000126e0) popup_battery_window_ParamLimits

0x5523,	// (0x000126e0) popup_battery_window

0x3666,	// (0x00010823) bg_popup_sub_pane_cp25_ParamLimits

0x3666,	// (0x00010823) bg_popup_sub_pane_cp25

0xda77,	// (0x0001ac34) popup_battery_window_g1_ParamLimits

0xda77,	// (0x0001ac34) popup_battery_window_g1

0xda83,	// (0x0001ac40) popup_battery_window_t1_ParamLimits

0xda83,	// (0x0001ac40) popup_battery_window_t1

0xda95,	// (0x0001ac52) popup_battery_window_t2_ParamLimits

0xda95,	// (0x0001ac52) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001cf4d) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001cf4d) popup_battery_window_t

0x7f87,	// (0x00015144) midp_canvas_pane_ParamLimits

0x7ffe,	// (0x000151bb) midp_keypad_pane_ParamLimits

0x7ffe,	// (0x000151bb) midp_keypad_pane

0x8305,	// (0x000154c2) main_midp_pane_ParamLimits

0xb45f,	// (0x0001861c) signal_pane_g2_cp_ParamLimits

0xdab2,	// (0x0001ac6f) aid_size_cell_midp_keypad_ParamLimits

0xdab2,	// (0x0001ac6f) aid_size_cell_midp_keypad

0xdacc,	// (0x0001ac89) midp_keyp_game_grid_pane_ParamLimits

0xdacc,	// (0x0001ac89) midp_keyp_game_grid_pane

0xdaec,	// (0x0001aca9) midp_keyp_rocker_pane_ParamLimits

0xdaec,	// (0x0001aca9) midp_keyp_rocker_pane

0xdb17,	// (0x0001acd4) midp_keyp_sk_left_pane_ParamLimits

0xdb17,	// (0x0001acd4) midp_keyp_sk_left_pane

0xdb71,	// (0x0001ad2e) midp_keyp_sk_right_pane_ParamLimits

0xdb71,	// (0x0001ad2e) midp_keyp_sk_right_pane

0x3247,	// (0x00010404) bg_button_pane_cp03

0xdbcb,	// (0x0001ad88) midp_keyp_sk_left_pane_g1

0x3247,	// (0x00010404) bg_button_pane_cp04

0xdbcb,	// (0x0001ad88) midp_keyp_sk_right_pane_g1

0xb9b6,	// (0x00018b73) midp_keyp_rocker_pane_g1

0xdbd4,	// (0x0001ad91) keyp_game_cell_pane_ParamLimits

0xdbd4,	// (0x0001ad91) keyp_game_cell_pane

0x3247,	// (0x00010404) bg_button_pane_cp02

0xdbe7,	// (0x0001ada4) keyp_game_cell_pane_g1

0x556d,	// (0x0001272a) popup_fep_vkb2_window_ParamLimits

0x556d,	// (0x0001272a) popup_fep_vkb2_window

0x6793,	// (0x00013950) aid_size_cell_vkb2_ParamLimits

0x6793,	// (0x00013950) aid_size_cell_vkb2

0x67e7,	// (0x000139a4) popup_fep_vkb2_window_g1_ParamLimits

0x67e7,	// (0x000139a4) popup_fep_vkb2_window_g1

0x682f,	// (0x000139ec) vkb2_area_bottom_pane_ParamLimits

0x682f,	// (0x000139ec) vkb2_area_bottom_pane

0x6883,	// (0x00013a40) vkb2_area_keypad_pane_ParamLimits

0x6883,	// (0x00013a40) vkb2_area_keypad_pane

0x68c9,	// (0x00013a86) vkb2_area_top_pane_ParamLimits

0x68c9,	// (0x00013a86) vkb2_area_top_pane

0x6943,	// (0x00013b00) vkb2_top_entry_pane_ParamLimits

0x6943,	// (0x00013b00) vkb2_top_entry_pane

0x696d,	// (0x00013b2a) vkb2_top_grid_left_pane_ParamLimits

0x696d,	// (0x00013b2a) vkb2_top_grid_left_pane

0x698b,	// (0x00013b48) vkb2_top_grid_right_pane_ParamLimits

0x698b,	// (0x00013b48) vkb2_top_grid_right_pane

0x69a9,	// (0x00013b66) vkb2_cell_keypad_pane_ParamLimits

0x69a9,	// (0x00013b66) vkb2_cell_keypad_pane

0x6a7a,	// (0x00013c37) vkb2_area_bottom_grid_pane_ParamLimits

0x6a7a,	// (0x00013c37) vkb2_area_bottom_grid_pane

0x6aa0,	// (0x00013c5d) vkb2_area_bottom_pane_g1_ParamLimits

0x6aa0,	// (0x00013c5d) vkb2_area_bottom_pane_g1

0x6ac4,	// (0x00013c81) vkb2_area_bottom_pane_g2_ParamLimits

0x6ac4,	// (0x00013c81) vkb2_area_bottom_pane_g2

0x6af2,	// (0x00013caf) vkb2_area_bottom_pane_g3_ParamLimits

0x6af2,	// (0x00013caf) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001cf52) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001cf52) vkb2_area_bottom_pane_g

0x6b53,	// (0x00013d10) vkb2_top_cell_left_pane_ParamLimits

0x6b53,	// (0x00013d10) vkb2_top_cell_left_pane

0xdbf8,	// (0x0001adb5) vkb2_top_entry_pane_g1_ParamLimits

0xdbf8,	// (0x0001adb5) vkb2_top_entry_pane_g1

0xdc06,	// (0x0001adc3) vkb2_top_entry_pane_t1_ParamLimits

0xdc06,	// (0x0001adc3) vkb2_top_entry_pane_t1

0xdc38,	// (0x0001adf5) vkb2_top_entry_pane_t2_ParamLimits

0xdc38,	// (0x0001adf5) vkb2_top_entry_pane_t2

0xdc6a,	// (0x0001ae27) vkb2_top_entry_pane_t3_ParamLimits

0xdc6a,	// (0x0001ae27) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001cf59) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001cf59) vkb2_top_entry_pane_t

0x6ba0,	// (0x00013d5d) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ba0,	// (0x00013d5d) vkb2_top_grid_right_pane_g1

0x6bb6,	// (0x00013d73) vkb2_top_grid_right_pane_g2_ParamLimits

0x6bb6,	// (0x00013d73) vkb2_top_grid_right_pane_g2

0x6bce,	// (0x00013d8b) vkb2_top_grid_right_pane_g3_ParamLimits

0x6bce,	// (0x00013d8b) vkb2_top_grid_right_pane_g3

0x6be6,	// (0x00013da3) vkb2_top_grid_right_pane_g4_ParamLimits

0x6be6,	// (0x00013da3) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001cf60) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001cf60) vkb2_top_grid_right_pane_g

0x6bfc,	// (0x00013db9) vkb2_top_cell_left_pane_g1

0x6c13,	// (0x00013dd0) vkb2_cell_keypad_pane_g1_ParamLimits

0x6c13,	// (0x00013dd0) vkb2_cell_keypad_pane_g1

0xdc8e,	// (0x0001ae4b) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc8e,	// (0x0001ae4b) vkb2_cell_keypad_pane_t1

0x6c21,	// (0x00013dde) vkb2_cell_bottom_grid_pane_ParamLimits

0x6c21,	// (0x00013dde) vkb2_cell_bottom_grid_pane

0x6c5a,	// (0x00013e17) vkb2_cell_bottom_grid_pane_g1

0xd846,	// (0x0001aa03) aid_call2_pane_cp02

0xd84e,	// (0x0001aa0b) aid_call_pane_cp02

0xd856,	// (0x0001aa13) clock_digital_number_pane_cp10

0xd85e,	// (0x0001aa1b) clock_digital_number_pane_cp11

0xd866,	// (0x0001aa23) clock_digital_number_pane_cp12

0xd86e,	// (0x0001aa2b) clock_digital_number_pane_cp13

0xd876,	// (0x0001aa33) clock_digital_separator_pane_cp10

0x4340,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g1

0x4340,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g2

0xd87e,	// (0x0001aa3b) popup_clock_digital_analogue_window_cp2_g3

0x4340,	// (0x000114fd) popup_clock_digital_analogue_window_cp2_g4

0xd87e,	// (0x0001aa3b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001cf15) popup_clock_digital_analogue_window_cp2_g

0xd886,	// (0x0001aa43) popup_clock_digital_analogue_window_cp2_t1

0xd894,	// (0x0001aa51) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001cf20) popup_clock_digital_analogue_window_cp2_t

0xb9b6,	// (0x00018b73) clock_digital_number_pane_cp10_g1

0xb9b6,	// (0x00018b73) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001ccfc) clock_digital_number_pane_cp10_g

0xb9b6,	// (0x00018b73) clock_digital_separator_pane_cp10_g1

0xb9b6,	// (0x00018b73) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001ccfc) clock_digital_separator_pane_cp10_g

0xd6c1,	// (0x0001a87e) uniindi_top_pane_g3

0xd6d2,	// (0x0001a88f) uniindi_top_pane_g4

0x6a34,	// (0x00013bf1) vkb2_row_keypad_pane_ParamLimits

0x6a34,	// (0x00013bf1) vkb2_row_keypad_pane

0x6c76,	// (0x00013e33) vkb2_cell_t_keypad_pane_ParamLimits

0x6c76,	// (0x00013e33) vkb2_cell_t_keypad_pane

0x6c86,	// (0x00013e43) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6c86,	// (0x00013e43) vkb2_cell_t_keypad_pane_cp08

0x6c9b,	// (0x00013e58) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6c9b,	// (0x00013e58) vkb2_cell_t_keypad_pane_cp09

0x6caf,	// (0x00013e6c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6caf,	// (0x00013e6c) vkb2_cell_t_keypad_pane_cp01

0x6cc0,	// (0x00013e7d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6cc0,	// (0x00013e7d) vkb2_cell_t_keypad_pane_cp02

0x6cd1,	// (0x00013e8e) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6cd1,	// (0x00013e8e) vkb2_cell_t_keypad_pane_cp03

0x6ce2,	// (0x00013e9f) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6ce2,	// (0x00013e9f) vkb2_cell_t_keypad_pane_cp04

0x6cf3,	// (0x00013eb0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6cf3,	// (0x00013eb0) vkb2_cell_t_keypad_pane_cp05

0x6d04,	// (0x00013ec1) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6d04,	// (0x00013ec1) vkb2_cell_t_keypad_pane_cp06

0x6d17,	// (0x00013ed4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6d17,	// (0x00013ed4) vkb2_cell_t_keypad_pane_cp07

0x6d2c,	// (0x00013ee9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6d2c,	// (0x00013ee9) vkb2_cell_t_keypad_pane_cp10

0x64c6,	// (0x00013683) vkb2_cell_t_keypad_pane_g1

0xdca5,	// (0x0001ae62) vkb2_cell_t_keypad_pane_t1

0x545e,	// (0x0001261b) popup_grid_graphic2_window

0xdcb7,	// (0x0001ae74) aid_size_cell_graphic2_ParamLimits

0xdcb7,	// (0x0001ae74) aid_size_cell_graphic2

0xdcef,	// (0x0001aeac) bg_popup_window_pane_cp21_ParamLimits

0xdcef,	// (0x0001aeac) bg_popup_window_pane_cp21

0xdcfd,	// (0x0001aeba) graphic2_pages_pane_ParamLimits

0xdcfd,	// (0x0001aeba) graphic2_pages_pane

0xdd43,	// (0x0001af00) grid_graphic2_control_pane_ParamLimits

0xdd43,	// (0x0001af00) grid_graphic2_control_pane

0xdd81,	// (0x0001af3e) grid_graphic2_pane_ParamLimits

0xdd81,	// (0x0001af3e) grid_graphic2_pane

0xddf7,	// (0x0001afb4) cell_graphic2_pane

0x3247,	// (0x00010404) main_comp_mode_pane

0xcecf,	// (0x0001a08c) list_ai3_gene_pane_ParamLimits

0xd2fa,	// (0x0001a4b7) bg_popup_window_pane_cp19_ParamLimits

0xd306,	// (0x0001a4c3) bg_touch_area_indi_pane_ParamLimits

0xd306,	// (0x0001a4c3) bg_touch_area_indi_pane

0xd31c,	// (0x0001a4d9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd31c,	// (0x0001a4d9) bg_touch_area_indi_pane_cp01

0xd334,	// (0x0001a4f1) bg_touch_area_indi_pane_cp02_ParamLimits

0xd334,	// (0x0001a4f1) bg_touch_area_indi_pane_cp02

0xd34e,	// (0x0001a50b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd34e,	// (0x0001a50b) bg_touch_area_indi_pane_cp03

0xd368,	// (0x0001a525) popup_slider_window_g1_ParamLimits

0xd384,	// (0x0001a541) popup_slider_window_g2_ParamLimits

0xd3a0,	// (0x0001a55d) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001ceaa) popup_slider_window_g_ParamLimits

0xd3fc,	// (0x0001a5b9) popup_slider_window_t1_ParamLimits

0xd470,	// (0x0001a62d) small_volume_slider_vertical_pane_ParamLimits

0xddf7,	// (0x0001afb4) cell_graphic2_pane_ParamLimits

0xde49,	// (0x0001b006) bg_button_pane_cp10_ParamLimits

0xde49,	// (0x0001b006) bg_button_pane_cp10

0xde5e,	// (0x0001b01b) bg_button_pane_cp11_ParamLimits

0xde5e,	// (0x0001b01b) bg_button_pane_cp11

0xde73,	// (0x0001b030) graphic2_pages_pane_g1_ParamLimits

0xde73,	// (0x0001b030) graphic2_pages_pane_g1

0xde8e,	// (0x0001b04b) graphic2_pages_pane_g2_ParamLimits

0xde8e,	// (0x0001b04b) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001cf6e) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001cf6e) graphic2_pages_pane_g

0xdea6,	// (0x0001b063) graphic2_pages_pane_t1_ParamLimits

0xdea6,	// (0x0001b063) graphic2_pages_pane_t1

0xdebc,	// (0x0001b079) cell_graphic2_control_pane_ParamLimits

0xdebc,	// (0x0001b079) cell_graphic2_control_pane

0xdedf,	// (0x0001b09c) cell_graphic2_pane_g1_ParamLimits

0xdedf,	// (0x0001b09c) cell_graphic2_pane_g1

0xdeec,	// (0x0001b0a9) cell_graphic2_pane_g2_ParamLimits

0xdeec,	// (0x0001b0a9) cell_graphic2_pane_g2

0xdef9,	// (0x0001b0b6) cell_graphic2_pane_g3_ParamLimits

0xdef9,	// (0x0001b0b6) cell_graphic2_pane_g3

0xdf06,	// (0x0001b0c3) cell_graphic2_pane_g4_ParamLimits

0xdf06,	// (0x0001b0c3) cell_graphic2_pane_g4

0xdf13,	// (0x0001b0d0) cell_graphic2_pane_g5_ParamLimits

0xdf13,	// (0x0001b0d0) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001cf73) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001cf73) cell_graphic2_pane_g

0xdf2e,	// (0x0001b0eb) cell_graphic2_pane_t1_ParamLimits

0xdf2e,	// (0x0001b0eb) cell_graphic2_pane_t1

0x8fa2,	// (0x0001615f) grid_highlight_pane_cp11_ParamLimits

0x8fa2,	// (0x0001615f) grid_highlight_pane_cp11

0x3666,	// (0x00010823) bg_button_pane_cp05

0xdf57,	// (0x0001b114) cell_graphic2_control_pane_g1

0xb9b6,	// (0x00018b73) bg_touch_area_indi_pane_g1

0xdf7f,	// (0x0001b13c) aid_cmod_rocker_key_size

0xdf89,	// (0x0001b146) aid_cmode_itu_key_size

0xdf93,	// (0x0001b150) main_cmode_video_pane

0xdf9d,	// (0x0001b15a) main_comp_mode_itu_pane

0xdfa9,	// (0x0001b166) main_comp_mode_rocker_pane

0xdfb5,	// (0x0001b172) cell_cmode_rocker_pane_ParamLimits

0xdfb5,	// (0x0001b172) cell_cmode_rocker_pane

0xdfc9,	// (0x0001b186) cell_cmode_itu_pane_ParamLimits

0xdfc9,	// (0x0001b186) cell_cmode_itu_pane

0x3be6,	// (0x00010da3) bg_button_pane_cp06_ParamLimits

0x3be6,	// (0x00010da3) bg_button_pane_cp06

0xbc31,	// (0x00018dee) cell_cmode_rocker_pane_g1_ParamLimits

0xbc31,	// (0x00018dee) cell_cmode_rocker_pane_g1

0xd517,	// (0x0001a6d4) cell_cmode_rocker_pane_g2_ParamLimits

0xd517,	// (0x0001a6d4) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001cf83) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001cf83) cell_cmode_rocker_pane_g

0x3247,	// (0x00010404) bg_button_pane_cp07

0xdfe0,	// (0x0001b19d) cell_cmode_itu_pane_g1

0xdfe9,	// (0x0001b1a6) cell_cmode_itu_pane_t1

0xdff7,	// (0x0001b1b4) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001cf88) cell_cmode_itu_pane_t

0xd745,	// (0x0001a902) aid_touch_ctrl_left

0xd74d,	// (0x0001a90a) aid_touch_ctrl_right

0x3247,	// (0x00010404) compa_mode_pane

0xe005,	// (0x0001b1c2) aid_cmod_rocker_key_size_cp

0xe00f,	// (0x0001b1cc) aid_cmode_itu_key_size_cp

0xe019,	// (0x0001b1d6) compa_mode_pane_g1

0xe021,	// (0x0001b1de) compa_mode_pane_g2

0xe029,	// (0x0001b1e6) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001cf8d) compa_mode_pane_g

0xe031,	// (0x0001b1ee) main_comp_mode_itu_pane_cp

0xe039,	// (0x0001b1f6) main_comp_mode_rocker_pane_cp

0xe041,	// (0x0001b1fe) cell_cmode_itu_pane_cp_ParamLimits

0xe041,	// (0x0001b1fe) cell_cmode_itu_pane_cp

0xe056,	// (0x0001b213) cell_cmode_rocker_pane_cp_ParamLimits

0xe056,	// (0x0001b213) cell_cmode_rocker_pane_cp

0x3be6,	// (0x00010da3) bg_button_pane_cp06_cp_ParamLimits

0x3be6,	// (0x00010da3) bg_button_pane_cp06_cp

0xbc31,	// (0x00018dee) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbc31,	// (0x00018dee) cell_cmode_rocker_pane_g1_cp

0xb9b6,	// (0x00018b73) cell_cmode_rocker_pane_g2_cp

0x3247,	// (0x00010404) bg_button_pane_cp07_cp

0xe068,	// (0x0001b225) cell_cmode_itu_pane_g1_cp

0xe071,	// (0x0001b22e) cell_cmode_itu_pane_t1_cp

0xe071,	// (0x0001b22e) cell_cmode_itu_pane_t2_cp

0xa4c2,	// (0x0001767f) settings_code_pane_cp2

0x3490,	// (0x0001064d) bg_popup_window_pane_cp3_ParamLimits

0x3854,	// (0x00010a11) heading_pane_cp3_ParamLimits

0x3860,	// (0x00010a1d) listscroll_popup_graphic_pane_ParamLimits

0x6259,	// (0x00013416) fep_hwr_aid_pane_ParamLimits

0x66ec,	// (0x000138a9) aid_touch_sctrl_top_ParamLimits

0x6707,	// (0x000138c4) sctrl_sk_top_pane_g1_ParamLimits

0x64c6,	// (0x00013683) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001cec3) sctrl_sk_top_pane_g_ParamLimits

0x6714,	// (0x000138d1) sctrl_sk_top_pane_t1_ParamLimits

0x66ec,	// (0x000138a9) aid_touch_sctrl_bottom_ParamLimits

0x6714,	// (0x000138d1) sctrl_sk_bottom_pane_t1_ParamLimits

0xd68b,	// (0x0001a848) aid_area_touch_clock

0x690b,	// (0x00013ac8) aid_vkb2_area_top_pane_cell_ParamLimits

0x690b,	// (0x00013ac8) aid_vkb2_area_top_pane_cell

0x6a56,	// (0x00013c13) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6a56,	// (0x00013c13) aid_vkb2_area_bottom_pane_cell

0xdbf0,	// (0x0001adad) popup_char_count_window

0xe07f,	// (0x0001b23c) popup_char_count_window_g1

0xe088,	// (0x0001b245) popup_char_count_window_g2

0xe091,	// (0x0001b24e) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001cf94) popup_char_count_window_g

0xe09a,	// (0x0001b257) popup_char_count_window_t1

0x67c5,	// (0x00013982) popup_fep_char_preview_window_ParamLimits

0x67c5,	// (0x00013982) popup_fep_char_preview_window

0x6929,	// (0x00013ae6) vkb2_top_candi_pane_ParamLimits

0x6929,	// (0x00013ae6) vkb2_top_candi_pane

0xe0a8,	// (0x0001b265) cell_vkb2_top_candi_pane_ParamLimits

0xe0a8,	// (0x0001b265) cell_vkb2_top_candi_pane

0x6d41,	// (0x00013efe) bg_popup_fep_char_preview_window_ParamLimits

0x6d41,	// (0x00013efe) bg_popup_fep_char_preview_window

0x6d4f,	// (0x00013f0c) popup_fep_char_preview_window_t1_ParamLimits

0x6d4f,	// (0x00013f0c) popup_fep_char_preview_window_t1

0xe0f9,	// (0x0001b2b6) bg_popup_fep_char_preview_window_g1

0xe101,	// (0x0001b2be) bg_popup_fep_char_preview_window_g2

0xe109,	// (0x0001b2c6) bg_popup_fep_char_preview_window_g3

0xe111,	// (0x0001b2ce) bg_popup_fep_char_preview_window_g4

0xe119,	// (0x0001b2d6) bg_popup_fep_char_preview_window_g5

0x6d89,	// (0x00013f46) bg_popup_fep_char_preview_window_g6

0xe121,	// (0x0001b2de) bg_popup_fep_char_preview_window_g7

0xe129,	// (0x0001b2e6) bg_popup_fep_char_preview_window_g8

0xe131,	// (0x0001b2ee) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001cf9b) bg_popup_fep_char_preview_window_g

0x64c6,	// (0x00013683) cell_vkb2_top_candi_pane_g1_ParamLimits

0x64c6,	// (0x00013683) cell_vkb2_top_candi_pane_g1

0x64d4,	// (0x00013691) cell_vkb2_top_candi_pane_g2_ParamLimits

0x64d4,	// (0x00013691) cell_vkb2_top_candi_pane_g2

0xcdb3,	// (0x00019f70) cell_vkb2_top_candi_pane_g3_ParamLimits

0xcdb3,	// (0x00019f70) cell_vkb2_top_candi_pane_g3

0x6d91,	// (0x00013f4e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6d91,	// (0x00013f4e) cell_vkb2_top_candi_pane_g4

0xc2f5,	// (0x000194b2) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc2f5,	// (0x000194b2) cell_vkb2_top_candi_pane_g5

0x6db2,	// (0x00013f6f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6db2,	// (0x00013f6f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001cfae) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001cfae) cell_vkb2_top_candi_pane_g

0x6dc0,	// (0x00013f7d) cell_vkb2_top_candi_pane_t1

0x60b9,	// (0x00013276) aid_size_touch_slider_mark_ParamLimits

0x60b9,	// (0x00013276) aid_size_touch_slider_mark

0xdd33,	// (0x0001aef0) grid_graphic2_catg_pane_ParamLimits

0xdd33,	// (0x0001aef0) grid_graphic2_catg_pane

0xddd1,	// (0x0001af8e) popup_grid_graphic2_window_t1_ParamLimits

0xddd1,	// (0x0001af8e) popup_grid_graphic2_window_t1

0xdde3,	// (0x0001afa0) popup_grid_graphic2_window_t2_ParamLimits

0xdde3,	// (0x0001afa0) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001cf69) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001cf69) popup_grid_graphic2_window_t

0x3666,	// (0x00010823) bg_button_pane_cp05_ParamLimits

0xdf57,	// (0x0001b114) cell_graphic2_control_pane_g1_ParamLimits

0xe139,	// (0x0001b2f6) cell_graphic2_catg_pane_ParamLimits

0xe139,	// (0x0001b2f6) cell_graphic2_catg_pane

0x3247,	// (0x00010404) bg_button_pane_cp12

0xe14b,	// (0x0001b308) cell_graphic2_catg_pane_g1

0xd657,	// (0x0001a814) cell_tb_ext_pane_t1_ParamLimits

0x6b73,	// (0x00013d30) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6b73,	// (0x00013d30) vkb2_top_cell_right_narrow_pane

0x6b8b,	// (0x00013d48) vkb2_top_cell_right_wide_pane_ParamLimits

0x6b8b,	// (0x00013d48) vkb2_top_cell_right_wide_pane

0x624b,	// (0x00013408) bg_vkb2_func_pane_ParamLimits

0x624b,	// (0x00013408) bg_vkb2_func_pane

0x6bfc,	// (0x00013db9) vkb2_top_cell_left_pane_g1_ParamLimits

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp03_ParamLimits

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp03

0x6c5a,	// (0x00013e17) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e84,	// (0x00016041) bg_vkb2_func_pane_g1

0x8e8c,	// (0x00016049) bg_vkb2_func_pane_g2

0x8e9c,	// (0x00016059) bg_vkb2_func_pane_g3

0x8e94,	// (0x00016051) bg_vkb2_func_pane_g4

0x8ea4,	// (0x00016061) bg_vkb2_func_pane_g5

0x8eac,	// (0x00016069) bg_vkb2_func_pane_g6

0x8eb4,	// (0x00016071) bg_vkb2_func_pane_g7

0x8ebc,	// (0x00016079) bg_vkb2_func_pane_g8

0x8e7c,	// (0x00016039) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001cfbb) bg_vkb2_func_pane_g

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp01_ParamLimits

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp01

0x6bfc,	// (0x00013db9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6bfc,	// (0x00013db9) vkb2_top_cell_right_wide_pane_g1

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp02_ParamLimits

0x624b,	// (0x00013408) bg_vkb2_fuc_pane_cp02

0x6c5a,	// (0x00013e17) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c5a,	// (0x00013e17) vkb2_top_cell_right_narrow_pane_g1

0xd278,	// (0x0001a435) aid_touch_area_decrease_ParamLimits

0xd278,	// (0x0001a435) aid_touch_area_decrease

0xd29c,	// (0x0001a459) aid_touch_area_increase_ParamLimits

0xd29c,	// (0x0001a459) aid_touch_area_increase

0xd2a8,	// (0x0001a465) aid_touch_area_mute_ParamLimits

0xd2a8,	// (0x0001a465) aid_touch_area_mute

0xd2cc,	// (0x0001a489) aid_touch_area_slider_ParamLimits

0xd2cc,	// (0x0001a489) aid_touch_area_slider

0xd3bc,	// (0x0001a579) popup_slider_window_g4_ParamLimits

0xd3bc,	// (0x0001a579) popup_slider_window_g4

0xd3c8,	// (0x0001a585) popup_slider_window_g5_ParamLimits

0xd3c8,	// (0x0001a585) popup_slider_window_g5

0xd3ea,	// (0x0001a5a7) popup_slider_window_g6_ParamLimits

0xd3ea,	// (0x0001a5a7) popup_slider_window_g6

0xd42a,	// (0x0001a5e7) popup_slider_window_t2_ParamLimits

0xd42a,	// (0x0001a5e7) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001ceb7) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001ceb7) popup_slider_window_t

0xd442,	// (0x0001a5ff) slider_pane_ParamLimits

0xd442,	// (0x0001a5ff) slider_pane

0xe154,	// (0x0001b311) slider_pane_g1_ParamLimits

0xe154,	// (0x0001b311) slider_pane_g1

0xe168,	// (0x0001b325) slider_pane_g2_ParamLimits

0xe168,	// (0x0001b325) slider_pane_g2

0xe17e,	// (0x0001b33b) slider_pane_g3_ParamLimits

0xe17e,	// (0x0001b33b) slider_pane_g3

0x0003,

0xfe11,	// (0x0001cfce) slider_pane_g_ParamLimits

0xfe11,	// (0x0001cfce) slider_pane_g

0x8847,	// (0x00015a04) popup_tb_float_extension_window_ParamLimits

0x8847,	// (0x00015a04) popup_tb_float_extension_window

0xe1aa,	// (0x0001b367) aid_size_cell_tb_float_ext

0x3247,	// (0x00010404) bg_popup_sub_window_cp28

0xe1b6,	// (0x0001b373) grid_tb_float_ext_pane

0xe1c2,	// (0x0001b37f) cell_tb_float_ext_pane_ParamLimits

0xe1c2,	// (0x0001b37f) cell_tb_float_ext_pane

0xe1de,	// (0x0001b39b) cell_tb_float_ext_pane_g1

0xe1e7,	// (0x0001b3a4) grid_highlight_pane_cp12

0x63a0,	// (0x0001355d) cell_last_hwr_side_pane_ParamLimits

0x63a0,	// (0x0001355d) cell_last_hwr_side_pane

0xb9b6,	// (0x00018b73) cell_last_hwr_side_pane_g1

0xe1f0,	// (0x0001b3ad) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001cfd7) cell_last_hwr_side_pane_g

0x6b22,	// (0x00013cdf) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6b22,	// (0x00013cdf) vkb2_area_bottom_space_btn_pane

0x64c6,	// (0x00013683) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdca5,	// (0x0001ae62) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6dc0,	// (0x00013f7d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6dde,	// (0x00013f9b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6dde,	// (0x00013f9b) vkb2_area_bottom_space_btn_pane_g1

0x6e18,	// (0x00013fd5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6e18,	// (0x00013fd5) vkb2_area_bottom_space_btn_pane_g2

0x6e4e,	// (0x0001400b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e4e,	// (0x0001400b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001cfdc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001cfdc) vkb2_area_bottom_space_btn_pane_g

0x6310,	// (0x000134cd) cel_fep_hwr_func_pane_ParamLimits

0x6310,	// (0x000134cd) cel_fep_hwr_func_pane

0x634c,	// (0x00013509) cell_hwr_side_button_pane_ParamLimits

0x634c,	// (0x00013509) cell_hwr_side_button_pane

0xd68b,	// (0x0001a848) aid_area_touch_clock_ParamLimits

0x3666,	// (0x00010823) bg_uniindi_top_pane_ParamLimits

0xd69f,	// (0x0001a85c) uniindi_top_pane_g1_ParamLimits

0xd6b5,	// (0x0001a872) uniindi_top_pane_g2_ParamLimits

0xd6c1,	// (0x0001a87e) uniindi_top_pane_g3_ParamLimits

0xd6d2,	// (0x0001a88f) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001ceef) uniindi_top_pane_g_ParamLimits

0xd6df,	// (0x0001a89c) uniindi_top_pane_t1_ParamLimits

0x3666,	// (0x00010823) bg_vkb2_func_pane_cp01_ParamLimits

0x3666,	// (0x00010823) bg_vkb2_func_pane_cp01

0xe1f9,	// (0x0001b3b6) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1f9,	// (0x0001b3b6) cel_fep_hwr_func_pane_g1

0x3666,	// (0x00010823) bg_vkb2_func_pane_cp02_ParamLimits

0x3666,	// (0x00010823) bg_vkb2_func_pane_cp02

0xe1f9,	// (0x0001b3b6) cell_hwr_side_button_pane_g1_ParamLimits

0xe1f9,	// (0x0001b3b6) cell_hwr_side_button_pane_g1

0x8ccf,	// (0x00015e8c) status_pane_g4_ParamLimits

0x8ccf,	// (0x00015e8c) status_pane_g4

0x8ce9,	// (0x00015ea6) status_pane_t1

0xb755,	// (0x00018912) form2_midp_gauge_slider_cont_pane

0xb75d,	// (0x0001891a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb76f,	// (0x0001892c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb781,	// (0x0001893e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001ccaf) form2_midp_gauge_slider_pane_t_ParamLimits

0xb793,	// (0x00018950) form2_midp_slider_pane_ParamLimits

0x6785,	// (0x00013942) aid_size_cell_func_vkb2_ParamLimits

0x6785,	// (0x00013942) aid_size_cell_func_vkb2

0xe196,	// (0x0001b353) slider_pane_g4_ParamLimits

0xe196,	// (0x0001b353) slider_pane_g4

0x6e98,	// (0x00014055) form2_midp_gauge_slider_pane_t2_cp01

0x6ea6,	// (0x00014063) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6ea6,	// (0x00014063) form2_midp_gauge_slider_pane_t3_cp01

0x6ec3,	// (0x00014080) form2_midp_slider_pane_cp01

0x3247,	// (0x00010404) navi_smil_pane

0xe232,	// (0x0001b3ef) navi_smil_pane_g1

0xe23a,	// (0x0001b3f7) navi_smil_pane_t1

0xe207,	// (0x0001b3c4) form2_midp_slider_pane_g1

0xe210,	// (0x0001b3cd) form2_midp_slider_pane_g2

0xe218,	// (0x0001b3d5) form2_midp_slider_pane_g3

0xe207,	// (0x0001b3c4) form2_midp_slider_pane_g4

0xe220,	// (0x0001b3dd) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001cfe5) form2_midp_slider_pane_g

0x6e88,	// (0x00014045) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e88,	// (0x00014045) vkb2_area_bottom_space_btn_pane_g4

0x8ae6,	// (0x00015ca3) lc0_navi_pane_ParamLimits

0x8ae6,	// (0x00015ca3) lc0_navi_pane

0x8b62,	// (0x00015d1f) lc0_stat_indi_pane_ParamLimits

0x8b62,	// (0x00015d1f) lc0_stat_indi_pane

0x8b79,	// (0x00015d36) ls0_title_pane_ParamLimits

0x8b79,	// (0x00015d36) ls0_title_pane

0x3be6,	// (0x00010da3) bg_popup_sub_pane_cp14_ParamLimits

0xd672,	// (0x0001a82f) list_uniindi_pane_ParamLimits

0xd67e,	// (0x0001a83b) uniindi_top_pane_ParamLimits

0xd71d,	// (0x0001a8da) list_single_uniindi_pane_g1_ParamLimits

0xd730,	// (0x0001a8ed) list_single_uniindi_pane_t1_ParamLimits

0x6ecc,	// (0x00014089) lc0_stat_clock_pane_ParamLimits

0x6ecc,	// (0x00014089) lc0_stat_clock_pane

0xe248,	// (0x0001b405) lc0_stat_indi_pane_g1_ParamLimits

0xe248,	// (0x0001b405) lc0_stat_indi_pane_g1

0xe255,	// (0x0001b412) lc0_stat_indi_pane_g2_ParamLimits

0xe255,	// (0x0001b412) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001cff0) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001cff0) lc0_stat_indi_pane_g

0x6ed9,	// (0x00014096) lc0_uni_indicator_pane_ParamLimits

0x6ed9,	// (0x00014096) lc0_uni_indicator_pane

0xe262,	// (0x0001b41f) ls0_title_pane_g1_ParamLimits

0xe262,	// (0x0001b41f) ls0_title_pane_g1

0xe276,	// (0x0001b433) ls0_title_pane_t1_ParamLimits

0xe276,	// (0x0001b433) ls0_title_pane_t1

0x6ee6,	// (0x000140a3) lc0_uni_indicator_pane_g1_ParamLimits

0x6ee6,	// (0x000140a3) lc0_uni_indicator_pane_g1

0xe2ac,	// (0x0001b469) lc0_stat_clock_pane_t1

0x3247,	// (0x00010404) main_ai5_pane

0xe2ba,	// (0x0001b477) ai5_sk_pane_ParamLimits

0xe2ba,	// (0x0001b477) ai5_sk_pane

0xe2c7,	// (0x0001b484) cell_ai5_widget_pane_ParamLimits

0xe2c7,	// (0x0001b484) cell_ai5_widget_pane

0xe863,	// (0x0001ba20) aid_size_cell_widget_grid

0xe871,	// (0x0001ba2e) bg_ai5_widget_pane_ParamLimits

0xe871,	// (0x0001ba2e) bg_ai5_widget_pane

0xe8e5,	// (0x0001baa2) cell_ai5_widget_pane_g2

0xe8f5,	// (0x0001bab2) cell_ai5_widget_pane_g3

0xe90c,	// (0x0001bac9) cell_ai5_widget_pane_g4

0xe918,	// (0x0001bad5) cell_ai5_widget_pane_g5

0xe924,	// (0x0001bae1) cell_ai5_widget_pane_g6

0xe930,	// (0x0001baed) cell_ai5_widget_pane_g7

0xe978,	// (0x0001bb35) cell_ai5_widget_pane_t1_ParamLimits

0xe978,	// (0x0001bb35) cell_ai5_widget_pane_t1

0xe995,	// (0x0001bb52) cell_ai5_widget_pane_t2_ParamLimits

0xe995,	// (0x0001bb52) cell_ai5_widget_pane_t2

0xe9ad,	// (0x0001bb6a) cell_ai5_widget_pane_t3_ParamLimits

0xe9ad,	// (0x0001bb6a) cell_ai5_widget_pane_t3

0xe9c5,	// (0x0001bb82) cell_ai5_widget_pane_t4_ParamLimits

0xe9c5,	// (0x0001bb82) cell_ai5_widget_pane_t4

0xe9e2,	// (0x0001bb9f) cell_ai5_widget_pane_t5_ParamLimits

0xe9e2,	// (0x0001bb9f) cell_ai5_widget_pane_t5

0xea01,	// (0x0001bbbe) cell_ai5_widget_pane_t6_ParamLimits

0xea01,	// (0x0001bbbe) cell_ai5_widget_pane_t6

0xea13,	// (0x0001bbd0) cell_ai5_widget_pane_t7_ParamLimits

0xea13,	// (0x0001bbd0) cell_ai5_widget_pane_t7

0xea2c,	// (0x0001bbe9) cell_ai5_widget_pane_t8_ParamLimits

0xea2c,	// (0x0001bbe9) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001d00a) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001d00a) cell_ai5_widget_pane_t

0xea80,	// (0x0001bc3d) grid_ai5_widget_pane

0x3be6,	// (0x00010da3) highlight_cell_ai5_widget_pane_ParamLimits

0x3be6,	// (0x00010da3) highlight_cell_ai5_widget_pane

0xea8e,	// (0x0001bc4b) ai5_sk_left_pane

0xea98,	// (0x0001bc55) ai5_sk_middle_pane

0xeaa2,	// (0x0001bc5f) ai5_sk_right_pane

0xeaac,	// (0x0001bc69) bg_ai5_widget_pane_g1_ParamLimits

0xeaac,	// (0x0001bc69) bg_ai5_widget_pane_g1

0xeab8,	// (0x0001bc75) bg_ai5_widget_pane_g2_ParamLimits

0xeab8,	// (0x0001bc75) bg_ai5_widget_pane_g2

0xeac4,	// (0x0001bc81) bg_ai5_widget_pane_g3_ParamLimits

0xeac4,	// (0x0001bc81) bg_ai5_widget_pane_g3

0xead0,	// (0x0001bc8d) bg_ai5_widget_pane_g4_ParamLimits

0xead0,	// (0x0001bc8d) bg_ai5_widget_pane_g4

0xeadc,	// (0x0001bc99) bg_ai5_widget_pane_g5_ParamLimits

0xeadc,	// (0x0001bc99) bg_ai5_widget_pane_g5

0xeae8,	// (0x0001bca5) bg_ai5_widget_pane_g6_ParamLimits

0xeae8,	// (0x0001bca5) bg_ai5_widget_pane_g6

0xeaf4,	// (0x0001bcb1) bg_ai5_widget_pane_g7_ParamLimits

0xeaf4,	// (0x0001bcb1) bg_ai5_widget_pane_g7

0xeb00,	// (0x0001bcbd) bg_ai5_widget_pane_g8_ParamLimits

0xeb00,	// (0x0001bcbd) bg_ai5_widget_pane_g8

0xeb0c,	// (0x0001bcc9) bg_ai5_widget_pane_g9_ParamLimits

0xeb0c,	// (0x0001bcc9) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001d01f) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001d01f) bg_ai5_widget_pane_g

0xeb44,	// (0x0001bd01) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb44,	// (0x0001bd01) cell_shortcut_ai5_widget_pane

0x7f7f,	// (0x0001513c) bg_cell_shortcut_ai5_widget_pane

0xeb57,	// (0x0001bd14) cell_grid_ai5_widget_pane_g1

0x7f7f,	// (0x0001513c) highlight_cell_shortcut_ai5_widget_pane

0x8e84,	// (0x00016041) ai5_sk_left_pane_g1

0xeb60,	// (0x0001bd1d) ai5_sk_left_pane_g2

0xeb68,	// (0x0001bd25) ai5_sk_left_pane_g3

0xeb70,	// (0x0001bd2d) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001d032) ai5_sk_left_pane_g

0xeb78,	// (0x0001bd35) ai5_sk_left_pane_t1

0x8e8c,	// (0x00016049) ai5_sk_right_pane_g1

0xeb86,	// (0x0001bd43) ai5_sk_right_pane_g2

0xeb8e,	// (0x0001bd4b) ai5_sk_right_pane_g3

0xeb96,	// (0x0001bd53) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001d03b) ai5_sk_right_pane_g

0xeb9e,	// (0x0001bd5b) ai5_sk_right_pane_t1

0x8e8c,	// (0x00016049) ai5_sk_middle_pane_g1

0x8e84,	// (0x00016041) ai5_sk_middle_pane_g2

0x8ea4,	// (0x00016061) ai5_sk_middle_pane_g3

0xeb8e,	// (0x0001bd4b) ai5_sk_middle_pane_g4

0xeb68,	// (0x0001bd25) ai5_sk_middle_pane_g5

0xebac,	// (0x0001bd69) ai5_sk_middle_pane_g6

0xebb4,	// (0x0001bd71) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001d044) ai5_sk_middle_pane_g

0x8968,	// (0x00015b25) aid_touch_area_size_lc0_ParamLimits

0x8968,	// (0x00015b25) aid_touch_area_size_lc0

0x64f5,	// (0x000136b2) cell_hwr_candidate_pane_t1_ParamLimits

0x8986,	// (0x00015b43) aid_touch_navi_pane

0x8c79,	// (0x00015e36) status_dt_navi_pane_ParamLimits

0x8c79,	// (0x00015e36) status_dt_navi_pane

0x8c86,	// (0x00015e43) status_dt_sta_pane_ParamLimits

0x8c86,	// (0x00015e43) status_dt_sta_pane

0xebbc,	// (0x0001bd79) dt_sta_controll_pane

0xebc9,	// (0x0001bd86) dt_sta_indi_pane

0xebda,	// (0x0001bd97) dt_sta_title_pane

0x3666,	// (0x00010823) bg_dt_sta_indi_pane_ParamLimits

0x3666,	// (0x00010823) bg_dt_sta_indi_pane

0xebed,	// (0x0001bdaa) dt_sta_battery_pane

0xebf5,	// (0x0001bdb2) dt_sta_indi_pane_g1

0xebfe,	// (0x0001bdbb) dt_sta_indi_pane_g2

0xec07,	// (0x0001bdc4) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001d053) dt_sta_indi_pane_g

0xec10,	// (0x0001bdcd) dt_sta_signal_pane

0x3be6,	// (0x00010da3) bg_dt_sta_title_pane_ParamLimits

0x3be6,	// (0x00010da3) bg_dt_sta_title_pane

0xec19,	// (0x0001bdd6) dt_sta_title_pane_g1

0xec21,	// (0x0001bdde) dt_sta_title_pane_t1_ParamLimits

0xec21,	// (0x0001bdde) dt_sta_title_pane_t1

0x3247,	// (0x00010404) bg_dt_sta_control_pane

0xec36,	// (0x0001bdf3) dt_sta_controll_pane_g1

0xec3f,	// (0x0001bdfc) bg_dt_sta_title_pane_g1

0xec48,	// (0x0001be05) bg_dt_sta_title_pane_g2

0xec51,	// (0x0001be0e) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001d05a) bg_dt_sta_title_pane_g

0xb9b6,	// (0x00018b73) bg_dt_sta_indi_pane_g1

0xec5a,	// (0x0001be17) dt_sta_signal_pane_g1

0xec62,	// (0x0001be1f) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001d061) dt_sta_signal_pane_g

0xec6a,	// (0x0001be27) dt_sta_battery_pane_g1

0xec73,	// (0x0001be30) dt_sta_battery_pane_t1

0xb9b6,	// (0x00018b73) bg_dt_sta_control_pane_g1

0x449b,	// (0x00011658) fep_china_uni_eep_pane

0x44a3,	// (0x00011660) fep_china_uni_entry_pane_ParamLimits

0x44b3,	// (0x00011670) popup_fep_china_uni_window_g1_ParamLimits

0x44c3,	// (0x00011680) popup_fep_china_uni_window_g2_ParamLimits

0x44c3,	// (0x00011680) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c8d5) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c8d5) popup_fep_china_uni_window_g

0xec82,	// (0x0001be3f) fep_china_uni_eep_pane_g1

0xec8a,	// (0x0001be47) fep_china_uni_eep_pane_t1

0xe229,	// (0x0001b3e6) aid_touch_area_size_smil_player

0x8ade,	// (0x00015c9b) lc0_clock_pane

0x8cdd,	// (0x00015e9a) status_pane_g5_ParamLimits

0x8cdd,	// (0x00015e9a) status_pane_g5

0x84cc,	// (0x00015689) popup_keymap_window

0x8c9b,	// (0x00015e58) status_icon_pane

0xe8f5,	// (0x0001bab2) cell_ai5_widget_pane_g3_ParamLimits

0xe90c,	// (0x0001bac9) cell_ai5_widget_pane_g4_ParamLimits

0xe918,	// (0x0001bad5) cell_ai5_widget_pane_g5_ParamLimits

0xe93c,	// (0x0001baf9) cell_ai5_widget_pane_g8_ParamLimits

0xe93c,	// (0x0001baf9) cell_ai5_widget_pane_g8

0xe950,	// (0x0001bb0d) cell_ai5_widget_pane_g9_ParamLimits

0xe950,	// (0x0001bb0d) cell_ai5_widget_pane_g9

0xe964,	// (0x0001bb21) cell_ai5_widget_pane_g10_ParamLimits

0xe964,	// (0x0001bb21) cell_ai5_widget_pane_g10

0xec99,	// (0x0001be56) status_icon_pane_g1

0x3247,	// (0x00010404) bg_popup_sub_pane_cp13

0xeca1,	// (0x0001be5e) popup_keymap_window_t1

0x824a,	// (0x00015407) control_pane_g6_ParamLimits

0x824a,	// (0x00015407) control_pane_g6

0x8257,	// (0x00015414) control_pane_g7_ParamLimits

0x8257,	// (0x00015414) control_pane_g7

0x8264,	// (0x00015421) control_pane_g8_ParamLimits

0x8264,	// (0x00015421) control_pane_g8

0xebbc,	// (0x0001bd79) dt_sta_controll_pane_ParamLimits

0xebc9,	// (0x0001bd86) dt_sta_indi_pane_ParamLimits

0xebda,	// (0x0001bd97) dt_sta_title_pane_ParamLimits

0x3a8a,	// (0x00010c47) aid_size_touch_scroll_bar_cale

0x553b,	// (0x000126f8) popup_discreet_window_ParamLimits

0x553b,	// (0x000126f8) popup_discreet_window

0x55c9,	// (0x00012786) popup_sk_window

0x95ad,	// (0x0001676a) bg_popup_sub_pane_cp28_ParamLimits

0x95ad,	// (0x0001676a) bg_popup_sub_pane_cp28

0xecaf,	// (0x0001be6c) popup_discreet_window_g1_ParamLimits

0xecaf,	// (0x0001be6c) popup_discreet_window_g1

0xeccf,	// (0x0001be8c) popup_discreet_window_t1_ParamLimits

0xeccf,	// (0x0001be8c) popup_discreet_window_t1

0xeced,	// (0x0001beaa) popup_discreet_window_t2_ParamLimits

0xeced,	// (0x0001beaa) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001d066) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001d066) popup_discreet_window_t

0x6ef9,	// (0x000140b6) popup_sk_window_g1

0x6f03,	// (0x000140c0) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001d06d) popup_sk_window_g

0x6f0d,	// (0x000140ca) popup_sk_window_t1

0x6f1d,	// (0x000140da) popup_sk_window_t1_copy1

0xe8e5,	// (0x0001baa2) cell_ai5_widget_pane_g2_ParamLimits

0xea3e,	// (0x0001bbfb) cell_ai5_widget_pane_t9_ParamLimits

0xea3e,	// (0x0001bbfb) cell_ai5_widget_pane_t9

0x3247,	// (0x00010404) main_fep_fshwr2_pane

0x6f2b,	// (0x000140e8) aid_fshwr2_btn_pane

0x6f37,	// (0x000140f4) aid_fshwr2_syb_pane

0x6f43,	// (0x00014100) aid_fshwr2_txt_pane

0x6f4f,	// (0x0001410c) fshwr2_func_candi_pane

0x6f62,	// (0x0001411f) fshwr2_hwr_syb_pane

0x6f70,	// (0x0001412d) fshwr2_icf_pane

0x545e,	// (0x0001261b) fshwr2_icf_bg_pane

0x6f9f,	// (0x0001415c) fshwr2_icf_pane_t1_ParamLimits

0x6f9f,	// (0x0001415c) fshwr2_icf_pane_t1

0x4340,	// (0x000114fd) fshwr2_func_candi_pane_g1

0xed3f,	// (0x0001befc) fshwr2_func_candi_row_pane_ParamLimits

0xed3f,	// (0x0001befc) fshwr2_func_candi_row_pane

0x6fb7,	// (0x00014174) cell_fshwr2_syb_pane_ParamLimits

0x6fb7,	// (0x00014174) cell_fshwr2_syb_pane

0x64c6,	// (0x00013683) fshwr2_hwr_syb_pane_g1_ParamLimits

0x64c6,	// (0x00013683) fshwr2_hwr_syb_pane_g1

0x545e,	// (0x0001261b) bg_popup_call_pane_cp01

0x6fcd,	// (0x0001418a) fshwr2_func_candi_cell_pane_ParamLimits

0x6fcd,	// (0x0001418a) fshwr2_func_candi_cell_pane

0xed4f,	// (0x0001bf0c) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed4f,	// (0x0001bf0c) fshwr2_func_candi_cell_bg_pane

0x7001,	// (0x000141be) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7001,	// (0x000141be) fshwr2_func_candi_cell_pane_g1

0x7021,	// (0x000141de) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7021,	// (0x000141de) fshwr2_func_candi_cell_pane_t1

0x545e,	// (0x0001261b) bg_button_pane_cp08

0xed5b,	// (0x0001bf18) cell_fshwr2_syb_bg_pane

0x7034,	// (0x000141f1) cell_fshwr2_syb_bg_pane_g1

0x703c,	// (0x000141f9) cell_fshwr2_syb_bg_pane_t1

0x3be6,	// (0x00010da3) main_tmo_pane

0xa0d1,	// (0x0001728e) uni_indicator_pane_g1_ParamLimits

0xa0e7,	// (0x000172a4) uni_indicator_pane_g2_ParamLimits

0xa0fd,	// (0x000172ba) uni_indicator_pane_g3_ParamLimits

0xa112,	// (0x000172cf) uni_indicator_pane_g4_ParamLimits

0xa112,	// (0x000172cf) uni_indicator_pane_g4

0xa126,	// (0x000172e3) uni_indicator_pane_g5_ParamLimits

0xa126,	// (0x000172e3) uni_indicator_pane_g5

0xa126,	// (0x000172e3) uni_indicator_pane_g6_ParamLimits

0xa126,	// (0x000172e3) uni_indicator_pane_g6

0xf91c,	// (0x0001cad9) uni_indicator_pane_g_ParamLimits

0xd248,	// (0x0001a405) popup_tmo_note_window_ParamLimits

0xd248,	// (0x0001a405) popup_tmo_note_window

0x6767,	// (0x00013924) fshwr2_bg_pane

0x7012,	// (0x000141cf) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7012,	// (0x000141cf) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001d072) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001d072) fshwr2_func_candi_cell_pane_g

0x64ae,	// (0x0001366b) bg_popup_window_pane_cp01

0x704b,	// (0x00014208) bg_popup_window_pane_g1_cp01

0xed63,	// (0x0001bf20) bg_popup_window_pane_cp22_ParamLimits

0xed63,	// (0x0001bf20) bg_popup_window_pane_cp22

0xed71,	// (0x0001bf2e) listscroll_tmo_link_pane_ParamLimits

0xed71,	// (0x0001bf2e) listscroll_tmo_link_pane

0xedb1,	// (0x0001bf6e) popup_tmo_note_window_g1_ParamLimits

0xedb1,	// (0x0001bf6e) popup_tmo_note_window_g1

0xedbe,	// (0x0001bf7b) tmo_note_info_pane_ParamLimits

0xedbe,	// (0x0001bf7b) tmo_note_info_pane

0xedd8,	// (0x0001bf95) list_tmo_note_info_pane_g1_ParamLimits

0xedd8,	// (0x0001bf95) list_tmo_note_info_pane_g1

0xedef,	// (0x0001bfac) list_tmo_note_info_pane_g2_ParamLimits

0xedef,	// (0x0001bfac) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001d077) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001d077) list_tmo_note_info_pane_g

0xee0b,	// (0x0001bfc8) list_tmo_note_info_text_pane_ParamLimits

0xee0b,	// (0x0001bfc8) list_tmo_note_info_text_pane

0xee90,	// (0x0001c04d) list_tmo_link_pane

0xee9d,	// (0x0001c05a) scroll_pane_cp20

0xeeaa,	// (0x0001c067) list_single_tmo_link_pane_ParamLimits

0xeeaa,	// (0x0001c067) list_single_tmo_link_pane

0xeeba,	// (0x0001c077) list_single_tmo_link_pane_t1

0xeec8,	// (0x0001c085) list_tmo_note_info_text_pane_t1_ParamLimits

0xeec8,	// (0x0001c085) list_tmo_note_info_text_pane_t1

0x7b00,	// (0x00014cbd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7b00,	// (0x00014cbd) aid_size_touch_scroll_bar_cp01

0x7a44,	// (0x00014c01) aid_size_touch_slider_marker

0x55b1,	// (0x0001276e) popup_settings_window_ParamLimits

0x55b1,	// (0x0001276e) popup_settings_window

0x832d,	// (0x000154ea) popup_candi_list_indi_window

0x8986,	// (0x00015b43) aid_touch_navi_pane_ParamLimits

0x66c0,	// (0x0001387d) rs_clock_indi_pane

0x66c9,	// (0x00013886) sctrl_sk_bottom_pane_ParamLimits

0x66da,	// (0x00013897) sctrl_sk_top_pane_ParamLimits

0x67df,	// (0x0001399c) popup_fep_tooltip_window

0xe863,	// (0x0001ba20) aid_size_cell_widget_grid_ParamLimits

0xe8d0,	// (0x0001ba8d) cell_ai5_widget_pane_g1_ParamLimits

0xe8d0,	// (0x0001ba8d) cell_ai5_widget_pane_g1

0xe924,	// (0x0001bae1) cell_ai5_widget_pane_g6_ParamLimits

0xe930,	// (0x0001baed) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001cff5) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001cff5) cell_ai5_widget_pane_g

0xea62,	// (0x0001bc1f) cell_ai5_widget_pane_t10_ParamLimits

0xea62,	// (0x0001bc1f) cell_ai5_widget_pane_t10

0xea80,	// (0x0001bc3d) grid_ai5_widget_pane_ParamLimits

0xeb18,	// (0x0001bcd5) cell_contacts_ai5_widget_pane_ParamLimits

0xeb18,	// (0x0001bcd5) cell_contacts_ai5_widget_pane

0xed02,	// (0x0001bebf) popup_discreet_window_t3_ParamLimits

0xed02,	// (0x0001bebf) popup_discreet_window_t3

0x6f87,	// (0x00014144) popup_fshwr2_char_preview_window_ParamLimits

0x6f87,	// (0x00014144) popup_fshwr2_char_preview_window

0xee29,	// (0x0001bfe6) tmo_note_info_pane_t1

0xee3e,	// (0x0001bffb) tmo_note_info_pane_t2

0xee57,	// (0x0001c014) tmo_note_info_pane_t3

0xee6c,	// (0x0001c029) tmo_note_info_pane_t4

0xee7e,	// (0x0001c03b) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001d07c) tmo_note_info_pane_t

0xee90,	// (0x0001c04d) list_tmo_link_pane_ParamLimits

0xee9d,	// (0x0001c05a) scroll_pane_cp20_ParamLimits

0x545e,	// (0x0001261b) bg_popup_fep_char_preview_window_cp01

0xeee1,	// (0x0001c09e) popup_fshwr2_char_preview_window_t1

0xeeef,	// (0x0001c0ac) popup_candi_list_indi_window_g1

0xeef8,	// (0x0001c0b5) bg_cell_contacts_ai5_widget_pane

0xef04,	// (0x0001c0c1) cell_contacts_ai5_widget_pane_g1

0xef19,	// (0x0001c0d6) cell_contacts_ai5_widget_pane_g2

0xef25,	// (0x0001c0e2) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001d087) cell_contacts_ai5_widget_pane_g

0xef31,	// (0x0001c0ee) cell_contacts_ai5_widget_pane_t1

0x3be6,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefa8,	// (0x0001c165) settings_container_pane

0x7f7f,	// (0x0001513c) listscroll_set_pane_copy1

0xadab,	// (0x00017f68) scroll_pane_cp121_copy1

0xefb4,	// (0x0001c171) set_content_pane_copy1

0xefbc,	// (0x0001c179) aid_height_set_list_copy1_ParamLimits

0xefbc,	// (0x0001c179) aid_height_set_list_copy1

0xa34e,	// (0x0001750b) aid_size_parent_copy1_ParamLimits

0xa34e,	// (0x0001750b) aid_size_parent_copy1

0xefc8,	// (0x0001c185) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefc8,	// (0x0001c185) button_value_adjust_pane_cp6_copy1

0x8305,	// (0x000154c2) list_highlight_pane_cp2_copy1_ParamLimits

0x8305,	// (0x000154c2) list_highlight_pane_cp2_copy1

0xefdc,	// (0x0001c199) list_set_pane_copy1_ParamLimits

0xefdc,	// (0x0001c199) list_set_pane_copy1

0xef43,	// (0x0001c100) main_pane_set_t1_copy1_ParamLimits

0xef43,	// (0x0001c100) main_pane_set_t1_copy1

0xef7d,	// (0x0001c13a) main_pane_set_t2_copy1_ParamLimits

0xef7d,	// (0x0001c13a) main_pane_set_t2_copy1

0xf0a3,	// (0x0001c260) main_pane_set_t3_copy1

0xf0b1,	// (0x0001c26e) main_pane_set_t4_copy1

0xef9c,	// (0x0001c159) set_content_pane_g1_copy1_ParamLimits

0xef9c,	// (0x0001c159) set_content_pane_g1_copy1

0xf0bf,	// (0x0001c27c) setting_code_pane_copy1

0xf0c7,	// (0x0001c284) setting_slider_graphic_pane_copy1

0xf0c7,	// (0x0001c284) setting_slider_pane_copy1

0xf0c7,	// (0x0001c284) setting_text_pane_copy1

0xf0c7,	// (0x0001c284) setting_volume_pane_copy1

0xf0bf,	// (0x0001c27c) settings_code_pane_cp2_copy1

0xf0cf,	// (0x0001c28c) settings_code_pane_cp_copy1_ParamLimits

0xf0cf,	// (0x0001c28c) settings_code_pane_cp_copy1

0x7054,	// (0x00014211) volume_set_pane_copy1

0xf0e3,	// (0x0001c2a0) volume_set_pane_g10_copy1

0xf0ef,	// (0x0001c2ac) volume_set_pane_g1_copy1

0xf0f9,	// (0x0001c2b6) volume_set_pane_g2_copy1

0xf103,	// (0x0001c2c0) volume_set_pane_g3_copy1

0xf10d,	// (0x0001c2ca) volume_set_pane_g4_copy1

0xf117,	// (0x0001c2d4) volume_set_pane_g5_copy1

0xf121,	// (0x0001c2de) volume_set_pane_g6_copy1

0xf12b,	// (0x0001c2e8) volume_set_pane_g7_copy1

0xf135,	// (0x0001c2f2) volume_set_pane_g8_copy1

0xf13f,	// (0x0001c2fc) volume_set_pane_g9_copy1

0x3490,	// (0x0001064d) bg_set_opt_pane_cp_copy1_ParamLimits

0x3490,	// (0x0001064d) bg_set_opt_pane_cp_copy1

0x7060,	// (0x0001421d) setting_slider_pane_t1_copy1_ParamLimits

0x7060,	// (0x0001421d) setting_slider_pane_t1_copy1

0x707e,	// (0x0001423b) setting_slider_pane_t2_copy1_ParamLimits

0x707e,	// (0x0001423b) setting_slider_pane_t2_copy1

0x7098,	// (0x00014255) setting_slider_pane_t3_copy1_ParamLimits

0x7098,	// (0x00014255) setting_slider_pane_t3_copy1

0x70b0,	// (0x0001426d) slider_set_pane_copy1_ParamLimits

0x70b0,	// (0x0001426d) slider_set_pane_copy1

0x3caf,	// (0x00010e6c) set_opt_bg_pane_g1_copy2

0x3cb7,	// (0x00010e74) set_opt_bg_pane_g2_copy2

0xf149,	// (0x0001c306) set_opt_bg_pane_g3_copy2

0x3cc7,	// (0x00010e84) set_opt_bg_pane_g4_copy2

0x3ccf,	// (0x00010e8c) set_opt_bg_pane_g5_copy2

0x3cd7,	// (0x00010e94) set_opt_bg_pane_g6_copy2

0xf153,	// (0x0001c310) set_opt_bg_pane_g7_copy2

0xf15d,	// (0x0001c31a) set_opt_bg_pane_g8_copy2

0xf167,	// (0x0001c324) set_opt_bg_pane_g9_copy2

0x70c6,	// (0x00014283) aid_size_touch_slider_mark_copy1_ParamLimits

0x70c6,	// (0x00014283) aid_size_touch_slider_mark_copy1

0xf171,	// (0x0001c32e) slider_set_pane_g1_copy1

0x70da,	// (0x00014297) slider_set_pane_g2_copy1

0x60d9,	// (0x00013296) slider_set_pane_g3_copy1_ParamLimits

0x60d9,	// (0x00013296) slider_set_pane_g3_copy1

0x60ed,	// (0x000132aa) slider_set_pane_g4_copy1_ParamLimits

0x60ed,	// (0x000132aa) slider_set_pane_g4_copy1

0x6105,	// (0x000132c2) slider_set_pane_g5_copy1_ParamLimits

0x6105,	// (0x000132c2) slider_set_pane_g5_copy1

0x60d9,	// (0x00013296) slider_set_pane_g6_copy1_ParamLimits

0x60d9,	// (0x00013296) slider_set_pane_g6_copy1

0x70e2,	// (0x0001429f) slider_set_pane_g7_copy1_ParamLimits

0x70e2,	// (0x0001429f) slider_set_pane_g7_copy1

0x33ca,	// (0x00010587) bg_set_opt_pane_cp2_copy1

0xf17a,	// (0x0001c337) setting_slider_graphic_pane_g1_copy1

0xf183,	// (0x0001c340) setting_slider_graphic_pane_t1_copy1

0xf193,	// (0x0001c350) setting_slider_graphic_pane_t2_copy1

0xf1a3,	// (0x0001c360) slider_set_pane_cp_copy1

0xf1b3,	// (0x0001c370) input_focus_pane_cp1_copy1

0xf1bc,	// (0x0001c379) list_set_text_pane_copy1

0xf1c4,	// (0x0001c381) setting_text_pane_g1_copy1

0xf1cd,	// (0x0001c38a) set_text_pane_t1_copy1

0xf1b3,	// (0x0001c370) input_focus_pane_cp2_copy1

0xf1c4,	// (0x0001c381) setting_code_pane_g1_copy1

0xf1e6,	// (0x0001c3a3) setting_code_pane_t1_copy1

0xf1f4,	// (0x0001c3b1) list_set_graphic_pane_copy1

0x33ca,	// (0x00010587) bg_set_opt_pane_cp4_copy1

0x7df5,	// (0x00014fb2) list_set_graphic_pane_g1_copy1_ParamLimits

0x7df5,	// (0x00014fb2) list_set_graphic_pane_g1_copy1

0xf206,	// (0x0001c3c3) list_set_graphic_pane_g2_copy1

0x7e0d,	// (0x00014fca) list_set_graphic_pane_t1_copy1_ParamLimits

0x7e0d,	// (0x00014fca) list_set_graphic_pane_t1_copy1

0xb9b6,	// (0x00018b73) rs_clock_indi_pane_g1

0xf20e,	// (0x0001c3cb) rs_clock_indi_pane_t1

0xf21c,	// (0x0001c3d9) rs_indi_pane

0xf224,	// (0x0001c3e1) rs_indi_pane_g1

0xf22d,	// (0x0001c3ea) rs_indi_pane_g2

0xf236,	// (0x0001c3f3) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001d08e) rs_indi_pane_g

0x7f7f,	// (0x0001513c) bg_popup_preview_window_pane_cp03

0xf23f,	// (0x0001c3fc) popup_fep_tooltip_window_t1

0xc87d,	// (0x00019a3a) popup_note2_window_g2_ParamLimits

0xc87d,	// (0x00019a3a) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001ce27) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001ce27) popup_note2_window_g

0xce95,	// (0x0001a052) bg_popup_sub_pane_cp11_ParamLimits

0xcea2,	// (0x0001a05f) cell_ai3_links_pane_g1_ParamLimits

0xceb9,	// (0x0001a076) cell_ai3_links_pane_t1

0xf1cd,	// (0x0001c38a) set_text_pane_t1_copy1_ParamLimits

0x7e8c,	// (0x00015049) cell_graphic_popup_pane_cp2_ParamLimits

0x7e8c,	// (0x00015049) cell_graphic_popup_pane_cp2

0xf24d,	// (0x0001c40a) cell_graphic_popup_pane_g1_cp2

0x389d,	// (0x00010a5a) cell_graphic_popup_pane_g2_cp2

0xf255,	// (0x0001c412) cell_graphic_popup_pane_g3_cp2

0xf25d,	// (0x0001c41a) cell_graphic_popup_pane_t2_cp2

0x38ae,	// (0x00010a6b) grid_highlight_pane_cp3_cp2

0x412f,	// (0x000112ec) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3be6,	// (0x00010da3) main_tmo_pane_ParamLimits

0xd23c,	// (0x0001a3f9) popup_tmo_big_image_note_window

0xe8bf,	// (0x0001ba7c) cell_ai5_widget_list_pane

0xe8c7,	// (0x0001ba84) cell_ai5_widget_lrg_icon_pane

0xee29,	// (0x0001bfe6) tmo_note_info_pane_t1_ParamLimits

0xee3e,	// (0x0001bffb) tmo_note_info_pane_t2_ParamLimits

0xee57,	// (0x0001c014) tmo_note_info_pane_t3_ParamLimits

0xee6c,	// (0x0001c029) tmo_note_info_pane_t4_ParamLimits

0xee7e,	// (0x0001c03b) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001d07c) tmo_note_info_pane_t_ParamLimits

0xefa8,	// (0x0001c165) settings_container_pane_ParamLimits

0xf1ab,	// (0x0001c368) indicator_popup_pane_cp5

0xf1ab,	// (0x0001c368) indicator_popup_pane_cp6

0xf1f4,	// (0x0001c3b1) list_set_graphic_pane_copy1_ParamLimits

0x3247,	// (0x00010404) bg_popup_window_pane_cp23

0xf26b,	// (0x0001c428) popup_tmo_big_image_note_window_g1

0xf277,	// (0x0001c434) popup_tmo_big_image_note_window_t1

0xf287,	// (0x0001c444) popup_tmo_big_image_note_window_t2

0xf297,	// (0x0001c454) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001d095) popup_tmo_big_image_note_window_t

0xb9b6,	// (0x00018b73) cell_ai5_widget_lrg_icon_pane_g1

0xf2a7,	// (0x0001c464) cell_ai5_widget_lrg_icon_pane_t1

0xf2b5,	// (0x0001c472) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b5,	// (0x0001c472) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x0001c48a) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x0001c48a) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x0001c497) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x0001c497) cell_ai5_widget_list_row_pane_t1

0xf305,	// (0x0001c4c2) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf305,	// (0x0001c4c2) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001d09c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001d09c) cell_ai5_widget_list_row_pane_t

0x545e,	// (0x0001261b) main_fep_vtchi_ss_pane

0xf349,	// (0x0001c506) popup_fep_char_pre_window

0xf351,	// (0x0001c50e) popup_fep_ituss_window

0xf372,	// (0x0001c52f) popup_fep_vkbss_window

0xf393,	// (0x0001c550) grid_vkbss_keypad_pane_ParamLimits

0xf393,	// (0x0001c550) grid_vkbss_keypad_pane

0xf3a3,	// (0x0001c560) ituss_keypad_pane

0x7104,	// (0x000142c1) aid_vkbss_key_offset_ParamLimits

0x7104,	// (0x000142c1) aid_vkbss_key_offset

0x7110,	// (0x000142cd) cell_vkbss_key_pane_ParamLimits

0x7110,	// (0x000142cd) cell_vkbss_key_pane

0xf3b2,	// (0x0001c56f) bg_cell_vkbss_key_g1_ParamLimits

0xf3b2,	// (0x0001c56f) bg_cell_vkbss_key_g1

0xf3be,	// (0x0001c57b) cell_vkbss_key_3p_pane_ParamLimits

0xf3be,	// (0x0001c57b) cell_vkbss_key_3p_pane

0xf3d8,	// (0x0001c595) cell_vkbss_key_g1_ParamLimits

0xf3d8,	// (0x0001c595) cell_vkbss_key_g1

0xf3f2,	// (0x0001c5af) cell_vkbss_key_t1_ParamLimits

0xf3f2,	// (0x0001c5af) cell_vkbss_key_t1

0x7126,	// (0x000142e3) cell_ituss_key_pane_ParamLimits

0x7126,	// (0x000142e3) cell_ituss_key_pane

0xf41d,	// (0x0001c5da) bg_cell_ituss_key_g1_ParamLimits

0xf41d,	// (0x0001c5da) bg_cell_ituss_key_g1

0xf429,	// (0x0001c5e6) cell_ituss_key_pane_g1_ParamLimits

0xf429,	// (0x0001c5e6) cell_ituss_key_pane_g1

0x7137,	// (0x000142f4) cell_ituss_key_pane_g2_ParamLimits

0x7137,	// (0x000142f4) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001d0a3) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001d0a3) cell_ituss_key_pane_g

0x7163,	// (0x00014320) cell_ituss_key_t1_ParamLimits

0x7163,	// (0x00014320) cell_ituss_key_t1

0x719d,	// (0x0001435a) cell_ituss_key_t2_ParamLimits

0x719d,	// (0x0001435a) cell_ituss_key_t2

0x71ce,	// (0x0001438b) cell_ituss_key_t3_ParamLimits

0x71ce,	// (0x0001438b) cell_ituss_key_t3

0x719d,	// (0x0001435a) cell_ituss_key_t4_ParamLimits

0x719d,	// (0x0001435a) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001d0aa) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001d0aa) cell_ituss_key_t

0xf44f,	// (0x0001c60c) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0001c614) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0001c61c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001d0b5) cell_vkbss_key_3p_pane_g

0x545e,	// (0x0001261b) bg_popup_fep_char_preview_window_cp02

0x7211,	// (0x000143ce) popup_fep_char_pre_window_t1

0xe859,	// (0x0001ba16) main_ai5_sk_pane

0xeef8,	// (0x0001c0b5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef04,	// (0x0001c0c1) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef19,	// (0x0001c0d6) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef25,	// (0x0001c0e2) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001d087) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef31,	// (0x0001c0ee) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3be6,	// (0x00010da3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf467,	// (0x0001c624) main_ai5_sk_pane_g1

0x93e5,	// (0x000165a2) popup_query_code_window_g1

0xf367,	// (0x0001c524) popup_fep_vkb_icf_pane

0xf37d,	// (0x0001c53a) popup_fep_vtchi_icf_pane

0xf470,	// (0x0001c62d) bg_icf_pane

0xf47c,	// (0x0001c639) list_vkb_icf_pane

0xf488,	// (0x0001c645) bg_icf_pane_cp01

0xf49b,	// (0x0001c658) vtchi_icf_list_pane

0xf4ac,	// (0x0001c669) list_vkb_icf_pane_t1_ParamLimits

0xf4ac,	// (0x0001c669) list_vkb_icf_pane_t1

0xf4c2,	// (0x0001c67f) vtchi_icf_list_pane_t1_ParamLimits

0xf4c2,	// (0x0001c67f) vtchi_icf_list_pane_t1

0xf351,	// (0x0001c50e) popup_fep_ituss_window_ParamLimits

0xf37d,	// (0x0001c53a) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a3,	// (0x0001c560) ituss_keypad_pane_ParamLimits

0x70f8,	// (0x000142b5) ituss_sks_pane

0xf470,	// (0x0001c62d) bg_icf_pane_ParamLimits

0xf32d,	// (0x0001c4ea) icf_edit_indi_pane_ParamLimits

0xf32d,	// (0x0001c4ea) icf_edit_indi_pane

0xf47c,	// (0x0001c639) list_vkb_icf_pane_ParamLimits

0xf488,	// (0x0001c645) bg_icf_pane_cp01_ParamLimits

0xf33c,	// (0x0001c4f9) icf_edit_indi_pane_cp01_ParamLimits

0xf33c,	// (0x0001c4f9) icf_edit_indi_pane_cp01

0xf4a3,	// (0x0001c660) vtchi_query_pane

0xbc31,	// (0x00018dee) icf_edit_indi_pane_g1_ParamLimits

0xbc31,	// (0x00018dee) icf_edit_indi_pane_g1

0xf531,	// (0x0001c6ee) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001c6ee) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001d0cd) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001d0cd) icf_edit_indi_pane_g

0xf540,	// (0x0001c6fd) icf_edit_indi_pane_t1

0xf4da,	// (0x0001c697) bg_input_focus_pane_cp042

0x3a81,	// (0x00010c3e) vtchi_button_pane

0xf4e3,	// (0x0001c6a0) vtchi_query_pane_t1

0xf4f1,	// (0x0001c6ae) vtchi_query_pane_t2

0xf4ff,	// (0x0001c6bc) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001d0bc) vtchi_query_pane_t

0x545e,	// (0x0001261b) bg_button_pane_cp13

0xf50d,	// (0x0001c6ca) vtchi_button_pane_g1

0x7220,	// (0x000143dd) ituss_sks_pane_g1

0x722b,	// (0x000143e8) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001d0c3) ituss_sks_pane_g

0xf515,	// (0x0001c6d2) ituss_sks_pane_t1

0xf523,	// (0x0001c6e0) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001d0c8) ituss_sks_pane_t

0xb410,	// (0x000185cd) indicator_nsta_pane_cp_g1

0xb419,	// (0x000185d6) indicator_nsta_pane_cp_g2

0xb421,	// (0x000185de) indicator_nsta_pane_cp_g3

0xb429,	// (0x000185e6) indicator_nsta_pane_cp_g4

0xb431,	// (0x000185ee) indicator_nsta_pane_cp_g5

0xb439,	// (0x000185f6) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001cc65) indicator_nsta_pane_cp_g

0xdf44,	// (0x0001b101) cell_graphic2_pane_t2_ParamLimits

0xdf44,	// (0x0001b101) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001cf7e) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001cf7e) cell_graphic2_pane_t

0xdf71,	// (0x0001b12e) cell_graphic2_control_pane_t1

0x7ce2,	// (0x00014e9f) signal_pane_g3_ParamLimits

0x7ce2,	// (0x00014e9f) signal_pane_g3

0x7cf4,	// (0x00014eb1) signal_pane_g4_ParamLimits

0x7cf4,	// (0x00014eb1) signal_pane_g4

0xf317,	// (0x0001c4d4) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf317,	// (0x0001c4d4) cell_ai5_widget_list_row_pane_t3

0xf43d,	// (0x0001c5fa) cell_ituss_key_pane_t1_ParamLimits

0xf43d,	// (0x0001c5fa) cell_ituss_key_pane_t1

0x9033,	// (0x000161f0) form_field_data_wide_pane_vc_t2_ParamLimits

0x9033,	// (0x000161f0) form_field_data_wide_pane_vc_t2

0x9047,	// (0x00016204) form_field_data_wide_pane_vc_t3_ParamLimits

0x9047,	// (0x00016204) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001c9c1) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001c9c1) form_field_data_wide_pane_vc_t

0xb0c1,	// (0x0001827e) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb0c1,	// (0x0001827e) form_field_slider_wide_pane_vc_t3

0xb197,	// (0x00018354) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb197,	// (0x00018354) form_field_popup_wide_pane_vc_t2

0xb1ae,	// (0x0001836b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb1ae,	// (0x0001836b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001cc54) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001cc54) form_field_popup_wide_pane_vc_t

0x6f2b,	// (0x000140e8) aid_fshwr2_btn_pane_ParamLimits

0x6f37,	// (0x000140f4) aid_fshwr2_syb_pane_ParamLimits

0x6f43,	// (0x00014100) aid_fshwr2_txt_pane_ParamLimits

0x6767,	// (0x00013924) fshwr2_bg_pane_ParamLimits

0x6f4f,	// (0x0001410c) fshwr2_func_candi_pane_ParamLimits

0x6f62,	// (0x0001411f) fshwr2_hwr_syb_pane_ParamLimits

0x6f70,	// (0x0001412d) fshwr2_icf_pane_ParamLimits

0xb035,	// (0x000181f2) list_double_graphic_pane_vc_g4_ParamLimits

0xb035,	// (0x000181f2) list_double_graphic_pane_vc_g4

0x7157,	// (0x00014314) cell_ituss_key_pane_g3_ParamLimits

0x7157,	// (0x00014314) cell_ituss_key_pane_g3

0x71ff,	// (0x000143bc) cell_ituss_key_t5_ParamLimits

0x71ff,	// (0x000143bc) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
