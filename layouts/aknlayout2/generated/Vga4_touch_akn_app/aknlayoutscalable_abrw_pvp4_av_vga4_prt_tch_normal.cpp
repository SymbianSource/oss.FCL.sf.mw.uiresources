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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000d21b };

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
0x7306,	// (0x00014521) Screen

0x7312,	// (0x0001452d) application_window_ParamLimits

0x7312,	// (0x0001452d) application_window

0x323b,	// (0x00010456) screen_g1

0x53c7,	// (0x000125e2) area_bottom_pane_ParamLimits

0x53c7,	// (0x000125e2) area_bottom_pane

0x5487,	// (0x000126a2) area_top_pane_ParamLimits

0x5487,	// (0x000126a2) area_top_pane

0x5525,	// (0x00012740) main_pane_ParamLimits

0x5525,	// (0x00012740) main_pane

0x33b4,	// (0x000105cf) misc_graphics

0x89ba,	// (0x00015bd5) battery_pane_ParamLimits

0x89ba,	// (0x00015bd5) battery_pane

0x9787,	// (0x000169a2) bg_status_flat_pane_g8

0x978f,	// (0x000169aa) bg_status_flat_pane_g9

0x8a82,	// (0x00015c9d) context_pane_ParamLimits

0x8a82,	// (0x00015c9d) context_pane

0x8ba6,	// (0x00015dc1) navi_pane_ParamLimits

0x8ba6,	// (0x00015dc1) navi_pane

0x8c36,	// (0x00015e51) signal_pane_ParamLimits

0x8c36,	// (0x00015e51) signal_pane

0x0008,

0xf874,	// (0x0001ca8f) bg_status_flat_pane_g

0x8ca3,	// (0x00015ebe) status_pane_g1_ParamLimits

0x8ca3,	// (0x00015ebe) status_pane_g1

0x8cb7,	// (0x00015ed2) status_pane_g2_ParamLimits

0x8cb7,	// (0x00015ed2) status_pane_g2

0x8cc3,	// (0x00015ede) status_pane_g3_ParamLimits

0x8cc3,	// (0x00015ede) status_pane_g3

0x0004,

0xf79b,	// (0x0001c9b6) status_pane_g_ParamLimits

0xf79b,	// (0x0001c9b6) status_pane_g

0x8cf7,	// (0x00015f12) title_pane_ParamLimits

0x8cf7,	// (0x00015f12) title_pane

0x8d34,	// (0x00015f4f) uni_indicator_pane_ParamLimits

0x8d34,	// (0x00015f4f) uni_indicator_pane

0x829b,	// (0x000154b6) bg_list_pane_ParamLimits

0x829b,	// (0x000154b6) bg_list_pane

0x82bb,	// (0x000154d6) find_pane

0x82c3,	// (0x000154de) listscroll_app_pane_ParamLimits

0x82c3,	// (0x000154de) listscroll_app_pane

0x82cf,	// (0x000154ea) listscroll_form_pane

0x82d7,	// (0x000154f2) listscroll_gen_pane_ParamLimits

0x82d7,	// (0x000154f2) listscroll_gen_pane

0x82eb,	// (0x00015506) listscroll_set_pane

0x7c4a,	// (0x00014e65) main_idle_act_pane

0x49b6,	// (0x00011bd1) main_idle_trad_pane

0x49b6,	// (0x00011bd1) main_list_empty_pane

0x8305,	// (0x00015520) main_midp_pane

0x8311,	// (0x0001552c) main_pane_g1_ParamLimits

0x8311,	// (0x0001552c) main_pane_g1

0x831f,	// (0x0001553a) popup_ai_message_window_ParamLimits

0x831f,	// (0x0001553a) popup_ai_message_window

0x83db,	// (0x000155f6) popup_fep_china_uni_window_ParamLimits

0x83db,	// (0x000155f6) popup_fep_china_uni_window

0x843b,	// (0x00015656) popup_fep_japan_candidate_window_ParamLimits

0x843b,	// (0x00015656) popup_fep_japan_candidate_window

0x8465,	// (0x00015680) popup_fep_japan_predictive_window_ParamLimits

0x8465,	// (0x00015680) popup_fep_japan_predictive_window

0x849b,	// (0x000156b6) popup_find_window

0x84a8,	// (0x000156c3) popup_grid_graphic_window_ParamLimits

0x84a8,	// (0x000156c3) popup_grid_graphic_window

0x84d6,	// (0x000156f1) popup_large_graphic_colour_window

0x84fc,	// (0x00015717) popup_menu_window_ParamLimits

0x84fc,	// (0x00015717) popup_menu_window

0x86c6,	// (0x000158e1) popup_note_image_window

0x86b0,	// (0x000158cb) popup_note_wait_window_ParamLimits

0x86b0,	// (0x000158cb) popup_note_wait_window

0x86b0,	// (0x000158cb) popup_note_window_ParamLimits

0x86b0,	// (0x000158cb) popup_note_window

0x872c,	// (0x00015947) popup_query_code_window_ParamLimits

0x872c,	// (0x00015947) popup_query_code_window

0x8742,	// (0x0001595d) popup_query_data_code_window_ParamLimits

0x8742,	// (0x0001595d) popup_query_data_code_window

0x8765,	// (0x00015980) popup_query_data_window_ParamLimits

0x8765,	// (0x00015980) popup_query_data_window

0x8787,	// (0x000159a2) popup_query_sat_info_window_ParamLimits

0x8787,	// (0x000159a2) popup_query_sat_info_window

0x87c6,	// (0x000159e1) popup_snote_single_graphic_window_ParamLimits

0x87c6,	// (0x000159e1) popup_snote_single_graphic_window

0x87c6,	// (0x000159e1) popup_snote_single_text_window_ParamLimits

0x87c6,	// (0x000159e1) popup_snote_single_text_window

0x87dd,	// (0x000159f8) popup_sub_window_general

0x8923,	// (0x00015b3e) popup_window_general_ParamLimits

0x8923,	// (0x00015b3e) popup_window_general

0x893c,	// (0x00015b57) power_save_pane

0x5ca7,	// (0x00012ec2) control_pane_g1_ParamLimits

0x5ca7,	// (0x00012ec2) control_pane_g1

0x5cd0,	// (0x00012eeb) control_pane_g2_ParamLimits

0x5cd0,	// (0x00012eeb) control_pane_g2

0x823c,	// (0x00015457) control_pane_g3_ParamLimits

0x823c,	// (0x00015457) control_pane_g3

0x0007,

0xf783,	// (0x0001c99e) control_pane_g_ParamLimits

0xf783,	// (0x0001c99e) control_pane_g

0x5d18,	// (0x00012f33) control_pane_t1_ParamLimits

0x5d18,	// (0x00012f33) control_pane_t1

0x5d64,	// (0x00012f7f) control_pane_t2_ParamLimits

0x5d64,	// (0x00012f7f) control_pane_t2

0x0002,

0xf794,	// (0x0001c9af) control_pane_t_ParamLimits

0xf794,	// (0x0001c9af) control_pane_t

0x8161,	// (0x0001537c) navi_navi_volume_pane_cp1

0x8169,	// (0x00015384) status_small_icon_pane

0x8171,	// (0x0001538c) status_small_pane_g1_ParamLimits

0x8171,	// (0x0001538c) status_small_pane_g1

0x81a5,	// (0x000153c0) status_small_pane_g2_ParamLimits

0x81a5,	// (0x000153c0) status_small_pane_g2

0x81b1,	// (0x000153cc) status_small_pane_g3_ParamLimits

0x81b1,	// (0x000153cc) status_small_pane_g3

0x81bd,	// (0x000153d8) status_small_pane_g4_ParamLimits

0x81bd,	// (0x000153d8) status_small_pane_g4

0x81c9,	// (0x000153e4) status_small_pane_g5_ParamLimits

0x81c9,	// (0x000153e4) status_small_pane_g5

0x81d7,	// (0x000153f2) status_small_pane_g6_ParamLimits

0x81d7,	// (0x000153f2) status_small_pane_g6

0x0007,

0xf772,	// (0x0001c98d) status_small_pane_g_ParamLimits

0xf772,	// (0x0001c98d) status_small_pane_g

0x8206,	// (0x00015421) status_small_pane_t1

0x8228,	// (0x00015443) status_small_wait_pane_ParamLimits

0x8228,	// (0x00015443) status_small_wait_pane

0x7d79,	// (0x00014f94) aid_levels_signal_ParamLimits

0x7d79,	// (0x00014f94) aid_levels_signal

0x7d8b,	// (0x00014fa6) signal_pane_g1_ParamLimits

0x7d8b,	// (0x00014fa6) signal_pane_g1

0x7da0,	// (0x00014fbb) signal_pane_g2_ParamLimits

0x7da0,	// (0x00014fbb) signal_pane_g2

0x0003,

0xf703,	// (0x0001c91e) signal_pane_g_ParamLimits

0xf703,	// (0x0001c91e) signal_pane_g

0x43fb,	// (0x00011616) context_pane_g1

0x7322,	// (0x0001453d) title_pane_g1

0x7340,	// (0x0001455b) title_pane_t1

0x342a,	// (0x00010645) title_pane_t2

0x3450,	// (0x0001066b) title_pane_t3

0x0002,

0xf557,	// (0x0001c772) title_pane_t

0x8d4c,	// (0x00015f67) aid_levels_battery_ParamLimits

0x8d4c,	// (0x00015f67) aid_levels_battery

0x8d60,	// (0x00015f7b) battery_pane_g1_ParamLimits

0x8d60,	// (0x00015f7b) battery_pane_g1

0x8d76,	// (0x00015f91) battery_pane_g2_ParamLimits

0x8d76,	// (0x00015f91) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001c9c1) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001c9c1) battery_pane_g

0xa0d1,	// (0x000172ec) uni_indicator_pane_g1

0xa0e7,	// (0x00017302) uni_indicator_pane_g2

0xa0fd,	// (0x00017318) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0001cb37) uni_indicator_pane_g

0x484c,	// (0x00011a67) navi_icon_pane_ParamLimits

0x484c,	// (0x00011a67) navi_icon_pane

0x47d0,	// (0x000119eb) navi_midp_pane

0x4868,	// (0x00011a83) navi_navi_pane

0x4872,	// (0x00011a8d) navi_text_pane_ParamLimits

0x4872,	// (0x00011a8d) navi_text_pane

0x323b,	// (0x00010456) status_small_wait_pane_g1

0x37f8,	// (0x00010a13) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0001cb32) status_small_wait_pane_g

0x9de4,	// (0x00016fff) navi_navi_icon_text_pane

0x9dec,	// (0x00017007) navi_navi_pane_g1_ParamLimits

0x9dec,	// (0x00017007) navi_navi_pane_g1

0x9dfe,	// (0x00017019) navi_navi_pane_g2_ParamLimits

0x9dfe,	// (0x00017019) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x0001cb00) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x0001cb00) navi_navi_pane_g

0x9e10,	// (0x0001702b) navi_navi_tabs_pane

0x9e19,	// (0x00017034) navi_navi_text_pane

0x9de4,	// (0x00016fff) navi_navi_volume_pane

0x9dc0,	// (0x00016fdb) navi_text_pane_t1

0x9db4,	// (0x00016fcf) navi_icon_pane_g1

0x9d07,	// (0x00016f22) navi_navi_text_pane_t1

0x6101,	// (0x0001331c) navi_navi_volume_pane_g1

0x6109,	// (0x00013324) volume_small_pane

0x9c6d,	// (0x00016e88) navi_navi_icon_text_pane_g1

0x9c75,	// (0x00016e90) navi_navi_icon_text_pane_t1

0x4868,	// (0x00011a83) navi_tabs_2_long_pane

0x4868,	// (0x00011a83) navi_tabs_2_pane

0x4868,	// (0x00011a83) navi_tabs_3_long_pane

0x4868,	// (0x00011a83) navi_tabs_3_pane

0x4868,	// (0x00011a83) navi_tabs_4_pane

0x60e1,	// (0x000132fc) tabs_2_active_pane_ParamLimits

0x60e1,	// (0x000132fc) tabs_2_active_pane

0x60f1,	// (0x0001330c) tabs_2_passive_pane_ParamLimits

0x60f1,	// (0x0001330c) tabs_2_passive_pane

0x60af,	// (0x000132ca) tabs_3_active_pane_ParamLimits

0x60af,	// (0x000132ca) tabs_3_active_pane

0x60bf,	// (0x000132da) tabs_3_passive_pane_ParamLimits

0x60bf,	// (0x000132da) tabs_3_passive_pane

0x60d0,	// (0x000132eb) tabs_3_passive_pane_cp_ParamLimits

0x60d0,	// (0x000132eb) tabs_3_passive_pane_cp

0x6063,	// (0x0001327e) tabs_4_active_pane_ParamLimits

0x6063,	// (0x0001327e) tabs_4_active_pane

0x6076,	// (0x00013291) tabs_4_passive_pane_ParamLimits

0x6076,	// (0x00013291) tabs_4_passive_pane

0x6087,	// (0x000132a2) tabs_4_passive_pane_cp_ParamLimits

0x6087,	// (0x000132a2) tabs_4_passive_pane_cp

0x6098,	// (0x000132b3) tabs_4_passive_pane_cp2_ParamLimits

0x6098,	// (0x000132b3) tabs_4_passive_pane_cp2

0x603f,	// (0x0001325a) tabs_2_long_active_pane_ParamLimits

0x603f,	// (0x0001325a) tabs_2_long_active_pane

0x6051,	// (0x0001326c) tabs_2_long_passive_pane_ParamLimits

0x6051,	// (0x0001326c) tabs_2_long_passive_pane

0x6000,	// (0x0001321b) tabs_3_long_active_pane_ParamLimits

0x6000,	// (0x0001321b) tabs_3_long_active_pane

0x6013,	// (0x0001322e) tabs_3_long_passive_pane_ParamLimits

0x6013,	// (0x0001322e) tabs_3_long_passive_pane

0x602c,	// (0x00013247) tabs_3_long_passive_pane_cp_ParamLimits

0x602c,	// (0x00013247) tabs_3_long_passive_pane_cp

0x5fa6,	// (0x000131c1) volume_small_pane_g1

0x5faf,	// (0x000131ca) volume_small_pane_g2

0x5fb8,	// (0x000131d3) volume_small_pane_g3

0x5fc1,	// (0x000131dc) volume_small_pane_g4

0x5fca,	// (0x000131e5) volume_small_pane_g5

0x5fd3,	// (0x000131ee) volume_small_pane_g6

0x5fdc,	// (0x000131f7) volume_small_pane_g7

0x5fe5,	// (0x00013200) volume_small_pane_g8

0x5fee,	// (0x00013209) volume_small_pane_g9

0x5ff7,	// (0x00013212) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x0001cacc) volume_small_pane_g

0x347a,	// (0x00010695) bg_active_tab_pane_cp2_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp2

0x73a8,	// (0x000145c3) tabs_3_active_pane_g1

0x73b0,	// (0x000145cb) tabs_3_active_pane_t1

0x347a,	// (0x00010695) bg_passive_tab_pane_cp2_ParamLimits

0x347a,	// (0x00010695) bg_passive_tab_pane_cp2

0x73a8,	// (0x000145c3) tabs_3_passive_pane_g1

0x73b0,	// (0x000145cb) tabs_3_passive_pane_t1

0x347a,	// (0x00010695) bg_active_tab_pane_cp3_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp3

0x73c2,	// (0x000145dd) tabs_4_active_pane_g1

0x73ca,	// (0x000145e5) tabs_4_active_pane_t1

0x347a,	// (0x00010695) bg_passive_tab_pane_cp3_ParamLimits

0x347a,	// (0x00010695) bg_passive_tab_pane_cp3

0x73c2,	// (0x000145dd) tabs_4_1_passive_pane_g1

0x73ca,	// (0x000145e5) tabs_4_1_passive_pane_t1

0x8305,	// (0x00015520) list_highlight_pane_cp2

0xa374,	// (0x0001758f) list_set_pane_ParamLimits

0xa374,	// (0x0001758f) list_set_pane

0xa43c,	// (0x00017657) main_pane_set_t1_ParamLimits

0xa43c,	// (0x00017657) main_pane_set_t1

0xa45c,	// (0x00017677) main_pane_set_t2_ParamLimits

0xa45c,	// (0x00017677) main_pane_set_t2

0xa470,	// (0x0001768b) main_pane_set_t3_ParamLimits

0xa470,	// (0x0001768b) main_pane_set_t3

0xa484,	// (0x0001769f) main_pane_set_t4_ParamLimits

0xa484,	// (0x0001769f) main_pane_set_t4

0x0003,

0xf981,	// (0x0001cb9c) main_pane_set_t_ParamLimits

0xf981,	// (0x0001cb9c) main_pane_set_t

0xa498,	// (0x000176b3) setting_code_pane

0xa4a2,	// (0x000176bd) setting_slider_graphic_pane

0xa4a2,	// (0x000176bd) setting_slider_pane

0xa4a2,	// (0x000176bd) setting_text_pane

0xa4a2,	// (0x000176bd) setting_volume_pane

0x5784,	// (0x0001299f) volume_set_pane

0x347a,	// (0x00010695) bg_set_opt_pane_cp

0x578e,	// (0x000129a9) setting_slider_pane_t1

0x57a7,	// (0x000129c2) setting_slider_pane_t2

0x57c1,	// (0x000129dc) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001c779) setting_slider_pane_t

0x57d9,	// (0x000129f4) slider_set_pane

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp2

0x34e9,	// (0x00010704) setting_slider_graphic_pane_g1

0x57ef,	// (0x00012a0a) setting_slider_graphic_pane_t1

0x57ff,	// (0x00012a1a) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001c780) setting_slider_graphic_pane_t

0x580f,	// (0x00012a2a) slider_set_pane_cp

0x33b4,	// (0x000105cf) input_focus_pane_cp1

0xa335,	// (0x00017550) list_set_text_pane

0x323b,	// (0x00010456) setting_text_pane_g1

0x33b4,	// (0x000105cf) input_focus_pane_cp2

0x323b,	// (0x00010456) setting_code_pane_g1

0x351a,	// (0x00010735) setting_code_pane_t1

0x3528,	// (0x00010743) set_text_pane_t1_ParamLimits

0x3528,	// (0x00010743) set_text_pane_t1

0x3c99,	// (0x00010eb4) set_opt_bg_pane_g1

0x3ca1,	// (0x00010ebc) set_opt_bg_pane_g2

0xa30d,	// (0x00017528) set_opt_bg_pane_g3

0x3cb1,	// (0x00010ecc) set_opt_bg_pane_g4

0x3cb9,	// (0x00010ed4) set_opt_bg_pane_g5

0x3cc1,	// (0x00010edc) set_opt_bg_pane_g6

0xa317,	// (0x00017532) set_opt_bg_pane_g7

0xa321,	// (0x0001753c) set_opt_bg_pane_g8

0xa32b,	// (0x00017546) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x0001cb89) set_opt_bg_pane_g

0xa300,	// (0x0001751b) slider_set_pane_g1

0x618a,	// (0x000133a5) slider_set_pane_g2

0x0006,

0xf95f,	// (0x0001cb7a) slider_set_pane_g

0x6112,	// (0x0001332d) volume_set_pane_g1

0x611c,	// (0x00013337) volume_set_pane_g2

0x6126,	// (0x00013341) volume_set_pane_g3

0x6130,	// (0x0001334b) volume_set_pane_g4

0x613a,	// (0x00013355) volume_set_pane_g5

0x6144,	// (0x0001335f) volume_set_pane_g6

0x614e,	// (0x00013369) volume_set_pane_g7

0x6158,	// (0x00013373) volume_set_pane_g8

0x6162,	// (0x0001337d) volume_set_pane_g9

0x616c,	// (0x00013387) volume_set_pane_g10

0x0009,

0xf937,	// (0x0001cb52) volume_set_pane_g

0x73dc,	// (0x000145f7) indicator_pane_ParamLimits

0x73dc,	// (0x000145f7) indicator_pane

0x73e8,	// (0x00014603) main_idle_pane_g2_ParamLimits

0x73e8,	// (0x00014603) main_idle_pane_g2

0x7410,	// (0x0001462b) main_pane_idle_g1_ParamLimits

0x7410,	// (0x0001462b) main_pane_idle_g1

0x3542,	// (0x0001075d) popup_clock_digital_analogue_window_ParamLimits

0x3542,	// (0x0001075d) popup_clock_digital_analogue_window

0x741e,	// (0x00014639) soft_indicator_pane_ParamLimits

0x741e,	// (0x00014639) soft_indicator_pane

0x742c,	// (0x00014647) wallpaper_pane_ParamLimits

0x742c,	// (0x00014647) wallpaper_pane

0x323b,	// (0x00010456) wallpaper_pane_g1

0x7438,	// (0x00014653) indicator_pane_g1_ParamLimits

0x7438,	// (0x00014653) indicator_pane_g1

0xa7f3,	// (0x00017a0e) navi_navi_icon_text_pane_srt_g1

0x3570,	// (0x0001078b) soft_indicator_pane_t1

0x358a,	// (0x000107a5) aid_ps_area_pane

0x7444,	// (0x0001465f) aid_ps_clock_pane

0x359b,	// (0x000107b6) aid_ps_indicator_pane

0x35a7,	// (0x000107c2) indicator_ps_pane_ParamLimits

0x35a7,	// (0x000107c2) indicator_ps_pane

0x35b6,	// (0x000107d1) power_save_pane_g1_ParamLimits

0x35b6,	// (0x000107d1) power_save_pane_g1

0x35c2,	// (0x000107dd) power_save_pane_g2_ParamLimits

0x35c2,	// (0x000107dd) power_save_pane_g2

0x537b,	// (0x00012596) aid_navinavi_width_pane

0x358a,	// (0x000107a5) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001c785) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001c785) power_save_pane_g

0x35d0,	// (0x000107eb) power_save_pane_t1_ParamLimits

0x35d0,	// (0x000107eb) power_save_pane_t1

0x7444,	// (0x0001465f) aid_ps_clock_pane_ParamLimits

0x359b,	// (0x000107b6) aid_ps_indicator_pane_ParamLimits

0x35e2,	// (0x000107fd) power_save_pane_t4_ParamLimits

0x35e2,	// (0x000107fd) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001c78a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001c78a) power_save_pane_t

0x360c,	// (0x00010827) power_save_t3_ParamLimits

0x360c,	// (0x00010827) power_save_t3

0x35f7,	// (0x00010812) power_save_t2_ParamLimits

0x35f7,	// (0x00010812) power_save_t2

0x3621,	// (0x0001083c) indicator_ps_pane_g1

0x7452,	// (0x0001466d) ai_gene_pane_ParamLimits

0x7452,	// (0x0001466d) ai_gene_pane

0x745e,	// (0x00014679) ai_links_pane_ParamLimits

0x745e,	// (0x00014679) ai_links_pane

0x746a,	// (0x00014685) indicator_pane_cp1_ParamLimits

0x746a,	// (0x00014685) indicator_pane_cp1

0x7476,	// (0x00014691) main_pane_idle_g1_cp_ParamLimits

0x7476,	// (0x00014691) main_pane_idle_g1_cp

0x362a,	// (0x00010845) popup_ai_links_title_window

0x7482,	// (0x0001469d) soft_indicator_pane_cp1_ParamLimits

0x7482,	// (0x0001469d) soft_indicator_pane_cp1

0xa0bf,	// (0x000172da) ai_links_pane_g1

0xa0c8,	// (0x000172e3) grid_ai_links_pane

0xa0a4,	// (0x000172bf) ai_gene_pane_1

0xa0ad,	// (0x000172c8) ai_gene_pane_2

0xa0b6,	// (0x000172d1) list_highlight_pane_cp4

0xa084,	// (0x0001729f) cell_ai_link_pane_ParamLimits

0xa084,	// (0x0001729f) cell_ai_link_pane

0xa07c,	// (0x00017297) cell_ai_link_pane_g1

0x37f8,	// (0x00010a13) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x0001cb2d) cell_ai_link_pane_g

0x33b4,	// (0x000105cf) grid_highlight_cp2

0x33b4,	// (0x000105cf) bg_popup_sub_pane_cp1

0x3641,	// (0x0001085c) popup_ai_links_title_window_t1

0x9fc8,	// (0x000171e3) ai_gene_pane_1_g1_ParamLimits

0x9fc8,	// (0x000171e3) ai_gene_pane_1_g1

0x9fd4,	// (0x000171ef) ai_gene_pane_1_g2_ParamLimits

0x9fd4,	// (0x000171ef) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0001cb23) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0001cb23) ai_gene_pane_1_g

0x9fe1,	// (0x000171fc) ai_gene_pane_1_t1_ParamLimits

0x9fe1,	// (0x000171fc) ai_gene_pane_1_t1

0xa015,	// (0x00017230) grid_ai_soft_ind_pane

0x9fb3,	// (0x000171ce) ai_gene_pane_2_t1_ParamLimits

0x9fb3,	// (0x000171ce) ai_gene_pane_2_t1

0x748e,	// (0x000146a9) main_pane_empty_t1_ParamLimits

0x748e,	// (0x000146a9) main_pane_empty_t1

0x74a6,	// (0x000146c1) main_pane_empty_t2_ParamLimits

0x74a6,	// (0x000146c1) main_pane_empty_t2

0x74bb,	// (0x000146d6) main_pane_empty_t3_ParamLimits

0x74bb,	// (0x000146d6) main_pane_empty_t3

0x74cd,	// (0x000146e8) main_pane_empty_t4_ParamLimits

0x74cd,	// (0x000146e8) main_pane_empty_t4

0x74df,	// (0x000146fa) main_pane_empty_t5_ParamLimits

0x74df,	// (0x000146fa) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001c78f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001c78f) main_pane_empty_t

0x3d19,	// (0x00010f34) bg_popup_window_pane_ParamLimits

0x3d19,	// (0x00010f34) bg_popup_window_pane

0x9d15,	// (0x00016f30) find_popup_pane_cp2_ParamLimits

0x9d15,	// (0x00016f30) find_popup_pane_cp2

0x9d21,	// (0x00016f3c) heading_pane_ParamLimits

0x9d21,	// (0x00016f3c) heading_pane

0x33b4,	// (0x000105cf) bg_popup_sub_pane

0x9c8f,	// (0x00016eaa) bg_popup_window_pane_g1_ParamLimits

0x9c8f,	// (0x00016eaa) bg_popup_window_pane_g1

0x9c9b,	// (0x00016eb6) bg_popup_window_pane_g2_ParamLimits

0x9c9b,	// (0x00016eb6) bg_popup_window_pane_g2

0x9ca7,	// (0x00016ec2) bg_popup_window_pane_g3_ParamLimits

0x9ca7,	// (0x00016ec2) bg_popup_window_pane_g3

0x9cb3,	// (0x00016ece) bg_popup_window_pane_g4_ParamLimits

0x9cb3,	// (0x00016ece) bg_popup_window_pane_g4

0x9cbf,	// (0x00016eda) bg_popup_window_pane_g5_ParamLimits

0x9cbf,	// (0x00016eda) bg_popup_window_pane_g5

0x9ccb,	// (0x00016ee6) bg_popup_window_pane_g6_ParamLimits

0x9ccb,	// (0x00016ee6) bg_popup_window_pane_g6

0x9cd7,	// (0x00016ef2) bg_popup_window_pane_g7_ParamLimits

0x9cd7,	// (0x00016ef2) bg_popup_window_pane_g7

0x9ce3,	// (0x00016efe) bg_popup_window_pane_g8_ParamLimits

0x9ce3,	// (0x00016efe) bg_popup_window_pane_g8

0x9cef,	// (0x00016f0a) bg_popup_window_pane_g9_ParamLimits

0x9cef,	// (0x00016f0a) bg_popup_window_pane_g9

0x9cfb,	// (0x00016f16) bg_popup_window_pane_g10_ParamLimits

0x9cfb,	// (0x00016f16) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x0001caeb) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x0001caeb) bg_popup_window_pane_g

0x9c24,	// (0x00016e3f) bg_popup_heading_pane_ParamLimits

0x9c24,	// (0x00016e3f) bg_popup_heading_pane

0x6212,	// (0x0001342d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6212,	// (0x0001342d) tabs_4_passive_pane_cp_srt

0x6224,	// (0x0001343f) tabs_4_passive_pane_srt_ParamLimits

0x9c38,	// (0x00016e53) heading_pane_g2

0x6224,	// (0x0001343f) tabs_4_passive_pane_srt

0x8305,	// (0x00015520) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8305,	// (0x00015520) bg_passive_tab_pane_cp3_srt

0x9c40,	// (0x00016e5b) heading_pane_t1_ParamLimits

0x9c40,	// (0x00016e5b) heading_pane_t1

0x9c57,	// (0x00016e72) heading_pane_t2_ParamLimits

0x9c57,	// (0x00016e72) heading_pane_t2

0x0001,

0xf8cb,	// (0x0001cae6) heading_pane_t_ParamLimits

0xf8cb,	// (0x0001cae6) heading_pane_t

0x974f,	// (0x0001696a) bg_popup_heading_pane_g1

0x97fe,	// (0x00016a19) bg_popup_heading_pane_g2

0x9808,	// (0x00016a23) bg_popup_heading_pane_g3

0x9812,	// (0x00016a2d) bg_popup_heading_pane_g4

0x981c,	// (0x00016a37) bg_popup_heading_pane_g5

0x9826,	// (0x00016a41) bg_popup_heading_pane_g6

0x982e,	// (0x00016a49) bg_popup_heading_pane_g7

0x9836,	// (0x00016a51) bg_popup_heading_pane_g8

0x9840,	// (0x00016a5b) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x0001caa2) bg_popup_heading_pane_g

0x8e7c,	// (0x00016097) bg_popup_sub_pane_g1

0x8e8c,	// (0x000160a7) bg_popup_sub_pane_g2

0x8e84,	// (0x0001609f) bg_popup_sub_pane_g3

0x8e9c,	// (0x000160b7) bg_popup_sub_pane_g4

0x8e94,	// (0x000160af) bg_popup_sub_pane_g5

0x8ea4,	// (0x000160bf) bg_popup_sub_pane_g6

0x8eac,	// (0x000160c7) bg_popup_sub_pane_g7

0x8ebc,	// (0x000160d7) bg_popup_sub_pane_g8

0x8eb4,	// (0x000160cf) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x0001ca7c) bg_popup_sub_pane_g

0x3462,	// (0x0001067d) bg_popup_window_pane_cp5_ParamLimits

0x3462,	// (0x0001067d) bg_popup_window_pane_cp5

0x365e,	// (0x00010879) popup_note_window_g1_ParamLimits

0x365e,	// (0x00010879) popup_note_window_g1

0x366a,	// (0x00010885) popup_note_window_t1_ParamLimits

0x366a,	// (0x00010885) popup_note_window_t1

0x3680,	// (0x0001089b) popup_note_window_t2_ParamLimits

0x3680,	// (0x0001089b) popup_note_window_t2

0x3696,	// (0x000108b1) popup_note_window_t3_ParamLimits

0x3696,	// (0x000108b1) popup_note_window_t3

0x36ac,	// (0x000108c7) popup_note_window_t4_ParamLimits

0x36ac,	// (0x000108c7) popup_note_window_t4

0x36d4,	// (0x000108ef) popup_note_window_t5_ParamLimits

0x36d4,	// (0x000108ef) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001c79a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001c79a) popup_note_window_t

0x36f8,	// (0x00010913) bg_popup_window_pane_cp6_ParamLimits

0x36f8,	// (0x00010913) bg_popup_window_pane_cp6

0x96cb,	// (0x000168e6) popup_note_image_window_g1_ParamLimits

0x96cb,	// (0x000168e6) popup_note_image_window_g1

0x96d7,	// (0x000168f2) popup_note_image_window_g2_ParamLimits

0x96d7,	// (0x000168f2) popup_note_image_window_g2

0x0001,

0xf855,	// (0x0001ca70) popup_note_image_window_g_ParamLimits

0xf855,	// (0x0001ca70) popup_note_image_window_g

0x96f0,	// (0x0001690b) popup_note_image_window_t1_ParamLimits

0x96f0,	// (0x0001690b) popup_note_image_window_t1

0x9709,	// (0x00016924) popup_note_image_window_t2_ParamLimits

0x9709,	// (0x00016924) popup_note_image_window_t2

0x9722,	// (0x0001693d) popup_note_image_window_t3_ParamLimits

0x9722,	// (0x0001693d) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0001ca75) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0001ca75) popup_note_image_window_t

0x958b,	// (0x000167a6) bg_popup_window_pane_cp7_ParamLimits

0x958b,	// (0x000167a6) bg_popup_window_pane_cp7

0x95bb,	// (0x000167d6) popup_note_wait_window_g1_ParamLimits

0x95bb,	// (0x000167d6) popup_note_wait_window_g1

0x95c7,	// (0x000167e2) popup_note_wait_window_g2_ParamLimits

0x95c7,	// (0x000167e2) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x0001ca5e) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x0001ca5e) popup_note_wait_window_g

0x95df,	// (0x000167fa) popup_note_wait_window_t1_ParamLimits

0x95df,	// (0x000167fa) popup_note_wait_window_t1

0x9606,	// (0x00016821) popup_note_wait_window_t2_ParamLimits

0x9606,	// (0x00016821) popup_note_wait_window_t2

0x9624,	// (0x0001683f) popup_note_wait_window_t3_ParamLimits

0x9624,	// (0x0001683f) popup_note_wait_window_t3

0x9637,	// (0x00016852) popup_note_wait_window_t4_ParamLimits

0x9637,	// (0x00016852) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0001ca65) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0001ca65) popup_note_wait_window_t

0x965c,	// (0x00016877) wait_bar_pane_ParamLimits

0x965c,	// (0x00016877) wait_bar_pane

0x33b4,	// (0x000105cf) wait_anim_pane

0x33b4,	// (0x000105cf) wait_border_pane

0x323b,	// (0x00010456) wait_anim_pane_g1

0x323b,	// (0x00010456) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001c919) wait_anim_pane_g

0x952f,	// (0x0001674a) wait_border_pane_g1

0x953a,	// (0x00016755) wait_border_pane_g2

0x9543,	// (0x0001675e) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0001ca57) wait_border_pane_g

0x9399,	// (0x000165b4) bg_popup_window_pane_cp16_ParamLimits

0x9399,	// (0x000165b4) bg_popup_window_pane_cp16

0x9499,	// (0x000166b4) indicator_popup_pane_cp4_ParamLimits

0x9499,	// (0x000166b4) indicator_popup_pane_cp4

0x94ad,	// (0x000166c8) popup_query_data_window_t1_ParamLimits

0x94ad,	// (0x000166c8) popup_query_data_window_t1

0x94bf,	// (0x000166da) popup_query_data_window_t2_ParamLimits

0x94bf,	// (0x000166da) popup_query_data_window_t2

0x94d8,	// (0x000166f3) popup_query_data_window_t3_ParamLimits

0x94d8,	// (0x000166f3) popup_query_data_window_t3

0x0002,

0xf835,	// (0x0001ca50) popup_query_data_window_t_ParamLimits

0xf835,	// (0x0001ca50) popup_query_data_window_t

0x94f2,	// (0x0001670d) query_popup_data_pane_ParamLimits

0x94f2,	// (0x0001670d) query_popup_data_pane

0x9506,	// (0x00016721) query_popup_data_pane_cp1_ParamLimits

0x9506,	// (0x00016721) query_popup_data_pane_cp1

0x9399,	// (0x000165b4) bg_popup_window_pane_cp10_ParamLimits

0x9399,	// (0x000165b4) bg_popup_window_pane_cp10

0x93cb,	// (0x000165e6) indicator_popup_pane_ParamLimits

0x93cb,	// (0x000165e6) indicator_popup_pane

0x93ed,	// (0x00016608) popup_query_code_window_t1_ParamLimits

0x93ed,	// (0x00016608) popup_query_code_window_t1

0x9407,	// (0x00016622) popup_query_code_window_t2_ParamLimits

0x9407,	// (0x00016622) popup_query_code_window_t2

0x9450,	// (0x0001666b) popup_query_code_window_t3_ParamLimits

0x9450,	// (0x0001666b) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x0001ca49) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x0001ca49) popup_query_code_window_t

0x947f,	// (0x0001669a) query_popup_pane_ParamLimits

0x947f,	// (0x0001669a) query_popup_pane

0x36f8,	// (0x00010913) bg_popup_window_pane_cp15_ParamLimits

0x36f8,	// (0x00010913) bg_popup_window_pane_cp15

0x3718,	// (0x00010933) indicator_popup_pane_cp1_ParamLimits

0x3718,	// (0x00010933) indicator_popup_pane_cp1

0x372b,	// (0x00010946) indicator_popup_pane_cp2_ParamLimits

0x372b,	// (0x00010946) indicator_popup_pane_cp2

0x3746,	// (0x00010961) popup_query_data_code_window_g1_ParamLimits

0x3746,	// (0x00010961) popup_query_data_code_window_g1

0x3759,	// (0x00010974) popup_query_data_code_window_t1_ParamLimits

0x3759,	// (0x00010974) popup_query_data_code_window_t1

0x376b,	// (0x00010986) popup_query_data_code_window_t2_ParamLimits

0x376b,	// (0x00010986) popup_query_data_code_window_t2

0x377d,	// (0x00010998) popup_query_data_code_window_t3_ParamLimits

0x377d,	// (0x00010998) popup_query_data_code_window_t3

0x3793,	// (0x000109ae) popup_query_data_code_window_t4_ParamLimits

0x3793,	// (0x000109ae) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001c7a5) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001c7a5) popup_query_data_code_window_t

0x5eb2,	// (0x000130cd) list_single_midp_graphic_pane_g3

0x37ad,	// (0x000109c8) query_popup_data_pane_cp2_ParamLimits

0x37c0,	// (0x000109db) query_popup_pane_cp2_ParamLimits

0x37c0,	// (0x000109db) query_popup_pane_cp2

0x33b4,	// (0x000105cf) bg_popup_window_pane_cp11

0x9391,	// (0x000165ac) heading_pane_cp5

0x3856,	// (0x00010a71) listscroll_popup_info_pane

0x33b4,	// (0x000105cf) input_focus_pane_cp3

0x37db,	// (0x000109f6) query_popup_pane_t1

0x37e9,	// (0x00010a04) list_popup_info_pane_ParamLimits

0x37e9,	// (0x00010a04) list_popup_info_pane

0x37f8,	// (0x00010a13) listscroll_popup_info_pane_g1

0x3800,	// (0x00010a1b) scroll_pane_cp7

0x380a,	// (0x00010a25) popup_info_list_pane_t1_ParamLimits

0x380a,	// (0x00010a25) popup_info_list_pane_t1

0x3824,	// (0x00010a3f) popup_info_list_pane_t2_ParamLimits

0x3824,	// (0x00010a3f) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001c7ae) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001c7ae) popup_info_list_pane_t

0x33b4,	// (0x000105cf) bg_popup_window_pane_cp12

0xa80d,	// (0x00017a28) find_popup_pane

0x347a,	// (0x00010695) bg_popup_window_pane_cp3

0x383e,	// (0x00010a59) heading_pane_cp3

0x384a,	// (0x00010a65) listscroll_popup_graphic_pane

0x33b4,	// (0x000105cf) bg_popup_window_pane_cp4

0x7541,	// (0x0001475c) heading_pane_cp4

0x3856,	// (0x00010a71) listscroll_popup_colour_pane

0x754b,	// (0x00014766) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x754b,	// (0x00014766) cell_large_graphic_colour_none_popup_pane

0x755f,	// (0x0001477a) grid_large_graphic_colour_popup_pane_ParamLimits

0x755f,	// (0x0001477a) grid_large_graphic_colour_popup_pane

0x758b,	// (0x000147a6) listscroll_popup_colour_pane_g1_ParamLimits

0x758b,	// (0x000147a6) listscroll_popup_colour_pane_g1

0x75a2,	// (0x000147bd) listscroll_popup_colour_pane_g2_ParamLimits

0x75a2,	// (0x000147bd) listscroll_popup_colour_pane_g2

0x75b9,	// (0x000147d4) listscroll_popup_colour_pane_g3_ParamLimits

0x75b9,	// (0x000147d4) listscroll_popup_colour_pane_g3

0x75c9,	// (0x000147e4) listscroll_popup_colour_pane_g4_ParamLimits

0x75c9,	// (0x000147e4) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001c7b3) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001c7b3) listscroll_popup_colour_pane_g

0x385e,	// (0x00010a79) scroll_pane_cp6_ParamLimits

0x385e,	// (0x00010a79) scroll_pane_cp6

0x75dd,	// (0x000147f8) cell_large_graphic_colour_popup_pane_ParamLimits

0x75dd,	// (0x000147f8) cell_large_graphic_colour_popup_pane

0x3870,	// (0x00010a8b) cell_large_graphic_colour_none_popup_pane_t1

0x33b4,	// (0x000105cf) grid_highlight_pane_cp5

0x387f,	// (0x00010a9a) cell_large_graphic_colour_popup_pane_g1

0x3887,	// (0x00010aa2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001c7bc) cell_large_graphic_colour_popup_pane_g

0x388f,	// (0x00010aaa) cell_large_graphic_colour_popup_pane_g2_copy1

0x3898,	// (0x00010ab3) grid_highlight_pane_cp4

0x38a0,	// (0x00010abb) bg_popup_window_pane_cp8_ParamLimits

0x38a0,	// (0x00010abb) bg_popup_window_pane_cp8

0x38bb,	// (0x00010ad6) popup_snote_single_text_window_g1_ParamLimits

0x38bb,	// (0x00010ad6) popup_snote_single_text_window_g1

0x38cd,	// (0x00010ae8) popup_snote_single_text_window_t1_ParamLimits

0x38cd,	// (0x00010ae8) popup_snote_single_text_window_t1

0x38e0,	// (0x00010afb) popup_snote_single_text_window_t2_ParamLimits

0x38e0,	// (0x00010afb) popup_snote_single_text_window_t2

0x38f3,	// (0x00010b0e) popup_snote_single_text_window_t3_ParamLimits

0x38f3,	// (0x00010b0e) popup_snote_single_text_window_t3

0x392c,	// (0x00010b47) popup_snote_single_text_window_t4_ParamLimits

0x392c,	// (0x00010b47) popup_snote_single_text_window_t4

0x3960,	// (0x00010b7b) popup_snote_single_text_window_t5_ParamLimits

0x3960,	// (0x00010b7b) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001c7c1) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001c7c1) popup_snote_single_text_window_t

0x398f,	// (0x00010baa) bg_popup_window_pane_cp9_ParamLimits

0x398f,	// (0x00010baa) bg_popup_window_pane_cp9

0x38bb,	// (0x00010ad6) popup_snote_single_graphic_window_g1_ParamLimits

0x38bb,	// (0x00010ad6) popup_snote_single_graphic_window_g1

0x399d,	// (0x00010bb8) popup_snote_single_graphic_window_g2_ParamLimits

0x399d,	// (0x00010bb8) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001c7cc) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001c7cc) popup_snote_single_graphic_window_g

0x39a9,	// (0x00010bc4) popup_snote_single_graphic_window_t1_ParamLimits

0x39a9,	// (0x00010bc4) popup_snote_single_graphic_window_t1

0x39bc,	// (0x00010bd7) popup_snote_single_graphic_window_t2_ParamLimits

0x39bc,	// (0x00010bd7) popup_snote_single_graphic_window_t2

0x39cf,	// (0x00010bea) popup_snote_single_graphic_window_t3_ParamLimits

0x39cf,	// (0x00010bea) popup_snote_single_graphic_window_t3

0x3a08,	// (0x00010c23) popup_snote_single_graphic_window_t4_ParamLimits

0x3a08,	// (0x00010c23) popup_snote_single_graphic_window_t4

0x3a3c,	// (0x00010c57) popup_snote_single_graphic_window_t5_ParamLimits

0x3a3c,	// (0x00010c57) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001c7d1) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001c7d1) popup_snote_single_graphic_window_t

0xa74b,	// (0x00017966) grid_graphic_popup_pane_ParamLimits

0xa74b,	// (0x00017966) grid_graphic_popup_pane

0xa779,	// (0x00017994) listscroll_popup_graphic_pane_g1_ParamLimits

0xa779,	// (0x00017994) listscroll_popup_graphic_pane_g1

0xa78d,	// (0x000179a8) listscroll_popup_graphic_pane_g2_ParamLimits

0xa78d,	// (0x000179a8) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x0001cbc6) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x0001cbc6) listscroll_popup_graphic_pane_g

0xa7a1,	// (0x000179bc) scroll_pane_cp5

0xa6f3,	// (0x0001790e) cell_graphic_popup_pane_ParamLimits

0xa6f3,	// (0x0001790e) cell_graphic_popup_pane

0xa6d4,	// (0x000178ef) cell_graphic_popup_pane_g1

0xa6dc,	// (0x000178f7) cell_graphic_popup_pane_g2

0x388f,	// (0x00010aaa) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x0001cbbf) cell_graphic_popup_pane_g

0xa6e5,	// (0x00017900) cell_graphic_popup_pane_t2

0x3898,	// (0x00010ab3) grid_highlight_pane_cp3

0x3a7d,	// (0x00010c98) list_gen_pane_ParamLimits

0x3a7d,	// (0x00010c98) list_gen_pane

0x3aa5,	// (0x00010cc0) scroll_pane

0xa62c,	// (0x00017847) bg_list_pane_g1_ParamLimits

0xa62c,	// (0x00017847) bg_list_pane_g1

0xa649,	// (0x00017864) bg_list_pane_g2_ParamLimits

0xa649,	// (0x00017864) bg_list_pane_g2

0xa65e,	// (0x00017879) bg_list_pane_g3_ParamLimits

0xa65e,	// (0x00017879) bg_list_pane_g3

0xa672,	// (0x0001788d) bg_list_pane_g4_ParamLimits

0xa672,	// (0x0001788d) bg_list_pane_g4

0xa686,	// (0x000178a1) bg_list_pane_g5_ParamLimits

0xa686,	// (0x000178a1) bg_list_pane_g5

0x0004,

0xf999,	// (0x0001cbb4) bg_list_pane_g_ParamLimits

0xf999,	// (0x0001cbb4) bg_list_pane_g

0xa55b,	// (0x00017776) list_double2_graphic_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017776) list_double2_graphic_large_graphic_pane

0xa55b,	// (0x00017776) list_double2_graphic_pane_ParamLimits

0xa55b,	// (0x00017776) list_double2_graphic_pane

0xa55b,	// (0x00017776) list_double2_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017776) list_double2_large_graphic_pane

0xa55b,	// (0x00017776) list_double2_pane_ParamLimits

0xa55b,	// (0x00017776) list_double2_pane

0xa55b,	// (0x00017776) list_double_graphic_heading_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_graphic_heading_pane

0xa55b,	// (0x00017776) list_double_graphic_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_graphic_pane

0xa55b,	// (0x00017776) list_double_heading_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_heading_pane

0xa55b,	// (0x00017776) list_double_large_graphic_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_large_graphic_pane

0xa55b,	// (0x00017776) list_double_number_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_number_pane

0xa55b,	// (0x00017776) list_double_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_pane

0xa55b,	// (0x00017776) list_double_time_pane_ParamLimits

0xa55b,	// (0x00017776) list_double_time_pane

0xa55b,	// (0x00017776) list_setting_number_pane_ParamLimits

0xa55b,	// (0x00017776) list_setting_number_pane

0xa55b,	// (0x00017776) list_setting_pane_ParamLimits

0xa55b,	// (0x00017776) list_setting_pane

0xa5bc,	// (0x000177d7) list_single_2graphic_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_2graphic_pane

0xa5bc,	// (0x000177d7) list_single_graphic_heading_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_graphic_heading_pane

0xa5bc,	// (0x000177d7) list_single_graphic_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_graphic_pane

0xa5bc,	// (0x000177d7) list_single_heading_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_heading_pane

0xa614,	// (0x0001782f) list_single_large_graphic_pane_ParamLimits

0xa614,	// (0x0001782f) list_single_large_graphic_pane

0xa5bc,	// (0x000177d7) list_single_number_heading_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_number_heading_pane

0xa5bc,	// (0x000177d7) list_single_number_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_number_pane

0xa5bc,	// (0x000177d7) list_single_pane_ParamLimits

0xa5bc,	// (0x000177d7) list_single_pane

0x33b4,	// (0x000105cf) list_highlight_pane_cp1

0x3ae5,	// (0x00010d00) list_single_pane_g1_ParamLimits

0x3ae5,	// (0x00010d00) list_single_pane_g1

0x760c,	// (0x00014827) list_single_pane_g2_ParamLimits

0x760c,	// (0x00014827) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001c7e3) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001c7e3) list_single_pane_g

0xa514,	// (0x0001772f) list_single_pane_t1_ParamLimits

0xa514,	// (0x0001772f) list_single_pane_t1

0x3ae5,	// (0x00010d00) list_single_number_pane_g1_ParamLimits

0x3ae5,	// (0x00010d00) list_single_number_pane_g1

0x760c,	// (0x00014827) list_single_number_pane_g2_ParamLimits

0x760c,	// (0x00014827) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001c7e3) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001c7e3) list_single_number_pane_g

0xa27c,	// (0x00017497) list_single_number_pane_t1_ParamLimits

0xa27c,	// (0x00017497) list_single_number_pane_t1

0xa292,	// (0x000174ad) list_single_number_pane_t2_ParamLimits

0xa292,	// (0x000174ad) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0001cb75) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0001cb75) list_single_number_pane_t

0x3ad9,	// (0x00010cf4) list_single_graphic_pane_g1_ParamLimits

0x3ad9,	// (0x00010cf4) list_single_graphic_pane_g1

0x3ae5,	// (0x00010d00) list_single_graphic_pane_g2_ParamLimits

0x3ae5,	// (0x00010d00) list_single_graphic_pane_g2

0x760c,	// (0x00014827) list_single_graphic_pane_g3_ParamLimits

0x760c,	// (0x00014827) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001c7dc) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001c7dc) list_single_graphic_pane_g

0x7618,	// (0x00014833) list_single_graphic_pane_t1_ParamLimits

0x7618,	// (0x00014833) list_single_graphic_pane_t1

0x3ae5,	// (0x00010d00) list_single_heading_pane_g1_ParamLimits

0x3ae5,	// (0x00010d00) list_single_heading_pane_g1

0x760c,	// (0x00014827) list_single_heading_pane_g2_ParamLimits

0x760c,	// (0x00014827) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c7e3) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c7e3) list_single_heading_pane_g

0x762e,	// (0x00014849) list_single_heading_pane_t1_ParamLimits

0x762e,	// (0x00014849) list_single_heading_pane_t1

0x7644,	// (0x0001485f) list_single_heading_pane_t2_ParamLimits

0x7644,	// (0x0001485f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001c7e8) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001c7e8) list_single_heading_pane_t

0x3ae5,	// (0x00010d00) list_single_number_heading_pane_g1_ParamLimits

0x3ae5,	// (0x00010d00) list_single_number_heading_pane_g1

0x760c,	// (0x00014827) list_single_number_heading_pane_g2_ParamLimits

0x760c,	// (0x00014827) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001c7e3) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001c7e3) list_single_number_heading_pane_g

0x762e,	// (0x00014849) list_single_number_heading_pane_t1_ParamLimits

0x762e,	// (0x00014849) list_single_number_heading_pane_t1

0x7656,	// (0x00014871) list_single_number_heading_pane_t2_ParamLimits

0x7656,	// (0x00014871) list_single_number_heading_pane_t2

0x7668,	// (0x00014883) list_single_number_heading_pane_t3_ParamLimits

0x7668,	// (0x00014883) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001c7ed) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001c7ed) list_single_number_heading_pane_t

0x767a,	// (0x00014895) list_single_graphic_heading_pane_g1_ParamLimits

0x767a,	// (0x00014895) list_single_graphic_heading_pane_g1

0x7686,	// (0x000148a1) list_single_graphic_heading_pane_g4_ParamLimits

0x7686,	// (0x000148a1) list_single_graphic_heading_pane_g4

0x760c,	// (0x00014827) list_single_graphic_heading_pane_g5_ParamLimits

0x760c,	// (0x00014827) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001c7f4) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001c7f4) list_single_graphic_heading_pane_g

0x762e,	// (0x00014849) list_single_graphic_heading_pane_t1_ParamLimits

0x762e,	// (0x00014849) list_single_graphic_heading_pane_t1

0x7697,	// (0x000148b2) list_single_graphic_heading_pane_t2_ParamLimits

0x7697,	// (0x000148b2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001c7fb) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001c7fb) list_single_graphic_heading_pane_t

0x76a9,	// (0x000148c4) list_single_large_graphic_pane_g1_ParamLimits

0x76a9,	// (0x000148c4) list_single_large_graphic_pane_g1

0x76b5,	// (0x000148d0) list_single_large_graphic_pane_g2_ParamLimits

0x76b5,	// (0x000148d0) list_single_large_graphic_pane_g2

0x76c1,	// (0x000148dc) list_single_large_graphic_pane_g3_ParamLimits

0x76c1,	// (0x000148dc) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001c800) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001c800) list_single_large_graphic_pane_g

0x953a,	// (0x00016755) wait_border_pane_g2_copy1

0x76cd,	// (0x000148e8) list_single_large_graphic_pane_g4_cp2

0x76d5,	// (0x000148f0) list_single_large_graphic_pane_t1_ParamLimits

0x76d5,	// (0x000148f0) list_single_large_graphic_pane_t1

0x76eb,	// (0x00014906) list_double_pane_g1_ParamLimits

0x76eb,	// (0x00014906) list_double_pane_g1

0x76f7,	// (0x00014912) list_double_pane_g2_ParamLimits

0x76f7,	// (0x00014912) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001c807) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001c807) list_double_pane_g

0x7703,	// (0x0001491e) list_double_pane_t1_ParamLimits

0x7703,	// (0x0001491e) list_double_pane_t1

0x7719,	// (0x00014934) list_double_pane_t2_ParamLimits

0x7719,	// (0x00014934) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001c80c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001c80c) list_double_pane_t

0x772b,	// (0x00014946) list_double2_pane_g1_ParamLimits

0x772b,	// (0x00014946) list_double2_pane_g1

0x773c,	// (0x00014957) list_double2_pane_g2_ParamLimits

0x773c,	// (0x00014957) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001c811) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001c811) list_double2_pane_g

0x7748,	// (0x00014963) list_double2_pane_t1_ParamLimits

0x7748,	// (0x00014963) list_double2_pane_t1

0x775e,	// (0x00014979) list_double2_pane_t2_ParamLimits

0x775e,	// (0x00014979) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001c816) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001c816) list_double2_pane_t

0x76eb,	// (0x00014906) list_double_number_pane_g1_ParamLimits

0x76eb,	// (0x00014906) list_double_number_pane_g1

0x76f7,	// (0x00014912) list_double_number_pane_g2_ParamLimits

0x76f7,	// (0x00014912) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001c807) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001c807) list_double_number_pane_g

0x7770,	// (0x0001498b) list_double_number_pane_t1_ParamLimits

0x7770,	// (0x0001498b) list_double_number_pane_t1

0x7782,	// (0x0001499d) list_double_number_pane_t2_ParamLimits

0x7782,	// (0x0001499d) list_double_number_pane_t2

0x7798,	// (0x000149b3) list_double_number_pane_t3_ParamLimits

0x7798,	// (0x000149b3) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001c81b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001c81b) list_double_number_pane_t

0x77aa,	// (0x000149c5) list_double_graphic_pane_g1_ParamLimits

0x77aa,	// (0x000149c5) list_double_graphic_pane_g1

0x77b6,	// (0x000149d1) list_double_graphic_pane_g2_ParamLimits

0x77b6,	// (0x000149d1) list_double_graphic_pane_g2

0x3e2f,	// (0x0001104a) list_double_graphic_pane_g3_ParamLimits

0x3e2f,	// (0x0001104a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001c822) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001c822) list_double_graphic_pane_g

0x77d1,	// (0x000149ec) list_double_graphic_pane_t1_ParamLimits

0x77d1,	// (0x000149ec) list_double_graphic_pane_t1

0x77e7,	// (0x00014a02) list_double_graphic_pane_t2_ParamLimits

0x77e7,	// (0x00014a02) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001c82b) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001c82b) list_double_graphic_pane_t

0x77f9,	// (0x00014a14) list_double2_graphic_pane_g1_ParamLimits

0x77f9,	// (0x00014a14) list_double2_graphic_pane_g1

0x7805,	// (0x00014a20) list_double2_graphic_pane_g2_ParamLimits

0x7805,	// (0x00014a20) list_double2_graphic_pane_g2

0x773c,	// (0x00014957) list_double2_graphic_pane_g3_ParamLimits

0x773c,	// (0x00014957) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001c830) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001c830) list_double2_graphic_pane_g

0x7811,	// (0x00014a2c) list_double2_graphic_pane_t1_ParamLimits

0x7811,	// (0x00014a2c) list_double2_graphic_pane_t1

0x7827,	// (0x00014a42) list_double2_graphic_pane_t2_ParamLimits

0x7827,	// (0x00014a42) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001c837) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001c837) list_double2_graphic_pane_t

0x7839,	// (0x00014a54) list_double_large_graphic_pane_g1_ParamLimits

0x7839,	// (0x00014a54) list_double_large_graphic_pane_g1

0x7864,	// (0x00014a7f) list_double_large_graphic_pane_g2_ParamLimits

0x7864,	// (0x00014a7f) list_double_large_graphic_pane_g2

0x76f7,	// (0x00014912) list_double_large_graphic_pane_g3_ParamLimits

0x76f7,	// (0x00014912) list_double_large_graphic_pane_g3

0x7875,	// (0x00014a90) list_double_large_graphic_pane_g4_ParamLimits

0x7875,	// (0x00014a90) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001c83c) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001c83c) list_double_large_graphic_pane_g

0x7888,	// (0x00014aa3) list_double_large_graphic_pane_t1_ParamLimits

0x7888,	// (0x00014aa3) list_double_large_graphic_pane_t1

0x78a1,	// (0x00014abc) list_double_large_graphic_pane_t2_ParamLimits

0x78a1,	// (0x00014abc) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001c847) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001c847) list_double_large_graphic_pane_t

0x78b3,	// (0x00014ace) list_double2_large_graphic_pane_g1_ParamLimits

0x78b3,	// (0x00014ace) list_double2_large_graphic_pane_g1

0x772b,	// (0x00014946) list_double2_large_graphic_pane_g2_ParamLimits

0x772b,	// (0x00014946) list_double2_large_graphic_pane_g2

0x773c,	// (0x00014957) list_double2_large_graphic_pane_g3_ParamLimits

0x773c,	// (0x00014957) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001c84c) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001c84c) list_double2_large_graphic_pane_g

0x78bf,	// (0x00014ada) list_double2_large_graphic_pane_t1_ParamLimits

0x78bf,	// (0x00014ada) list_double2_large_graphic_pane_t1

0x78d5,	// (0x00014af0) list_double2_large_graphic_pane_t2_ParamLimits

0x78d5,	// (0x00014af0) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001c853) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001c853) list_double2_large_graphic_pane_t

0x78e7,	// (0x00014b02) list_double_heading_pane_g1_ParamLimits

0x78e7,	// (0x00014b02) list_double_heading_pane_g1

0x78f8,	// (0x00014b13) list_double_heading_pane_g2_ParamLimits

0x78f8,	// (0x00014b13) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001c858) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001c858) list_double_heading_pane_g

0x7904,	// (0x00014b1f) list_double_heading_pane_t1_ParamLimits

0x7904,	// (0x00014b1f) list_double_heading_pane_t1

0x791a,	// (0x00014b35) list_double_heading_pane_t2_ParamLimits

0x791a,	// (0x00014b35) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001c85d) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001c85d) list_double_heading_pane_t

0x3af1,	// (0x00010d0c) list_double_graphic_heading_pane_g1_ParamLimits

0x3af1,	// (0x00010d0c) list_double_graphic_heading_pane_g1

0x78e7,	// (0x00014b02) list_double_graphic_heading_pane_g2_ParamLimits

0x78e7,	// (0x00014b02) list_double_graphic_heading_pane_g2

0x78f8,	// (0x00014b13) list_double_graphic_heading_pane_g3_ParamLimits

0x78f8,	// (0x00014b13) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001c862) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001c862) list_double_graphic_heading_pane_g

0x792c,	// (0x00014b47) list_double_graphic_heading_pane_t1_ParamLimits

0x792c,	// (0x00014b47) list_double_graphic_heading_pane_t1

0x7942,	// (0x00014b5d) list_double_graphic_heading_pane_t2_ParamLimits

0x7942,	// (0x00014b5d) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001c869) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001c869) list_double_graphic_heading_pane_t

0x7864,	// (0x00014a7f) list_double_time_pane_g1_ParamLimits

0x7864,	// (0x00014a7f) list_double_time_pane_g1

0x76f7,	// (0x00014912) list_double_time_pane_g2_ParamLimits

0x76f7,	// (0x00014912) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001c86e) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001c86e) list_double_time_pane_g

0x7954,	// (0x00014b6f) list_double_time_pane_t1_ParamLimits

0x7954,	// (0x00014b6f) list_double_time_pane_t1

0x796a,	// (0x00014b85) list_double_time_pane_t2_ParamLimits

0x796a,	// (0x00014b85) list_double_time_pane_t2

0x797c,	// (0x00014b97) list_double_time_pane_t3_ParamLimits

0x797c,	// (0x00014b97) list_double_time_pane_t3

0x798e,	// (0x00014ba9) list_double_time_pane_t4_ParamLimits

0x798e,	// (0x00014ba9) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001c873) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001c873) list_double_time_pane_t

0x7805,	// (0x00014a20) list_setting_pane_g1_ParamLimits

0x7805,	// (0x00014a20) list_setting_pane_g1

0x773c,	// (0x00014957) list_setting_pane_g2_ParamLimits

0x773c,	// (0x00014957) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001c87c) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001c87c) list_setting_pane_g

0x79a0,	// (0x00014bbb) list_setting_pane_t1_ParamLimits

0x79a0,	// (0x00014bbb) list_setting_pane_t1

0x79b7,	// (0x00014bd2) list_setting_pane_t2_ParamLimits

0x79b7,	// (0x00014bd2) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001c881) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001c881) list_setting_pane_t

0x79f6,	// (0x00014c11) set_value_pane_cp_ParamLimits

0x79f6,	// (0x00014c11) set_value_pane_cp

0x7805,	// (0x00014a20) list_setting_number_pane_g1_ParamLimits

0x7805,	// (0x00014a20) list_setting_number_pane_g1

0x773c,	// (0x00014957) list_setting_number_pane_g2_ParamLimits

0x773c,	// (0x00014957) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001c87c) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001c87c) list_setting_number_pane_g

0x7a04,	// (0x00014c1f) list_setting_number_pane_t1_ParamLimits

0x7a04,	// (0x00014c1f) list_setting_number_pane_t1

0x7a18,	// (0x00014c33) list_setting_number_pane_t2_ParamLimits

0x7a18,	// (0x00014c33) list_setting_number_pane_t2

0x7a2f,	// (0x00014c4a) list_setting_number_pane_t3_ParamLimits

0x7a2f,	// (0x00014c4a) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001c888) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001c888) list_setting_number_pane_t

0x79f6,	// (0x00014c11) set_value_pane_ParamLimits

0x79f6,	// (0x00014c11) set_value_pane

0x3b12,	// (0x00010d2d) bg_set_opt_pane_ParamLimits

0x3b12,	// (0x00010d2d) bg_set_opt_pane

0x3b33,	// (0x00010d4e) set_value_pane_t1

0x3b41,	// (0x00010d5c) slider_set_pane_cp3

0x3b4a,	// (0x00010d65) volume_small_pane_cp

0x3b53,	// (0x00010d6e) list_form_gen_pane

0x3b5c,	// (0x00010d77) scroll_pane_cp8

0x7a72,	// (0x00014c8d) form_field_data_pane_ParamLimits

0x7a72,	// (0x00014c8d) form_field_data_pane

0x7a90,	// (0x00014cab) form_field_data_wide_pane_ParamLimits

0x7a90,	// (0x00014cab) form_field_data_wide_pane

0x7ab7,	// (0x00014cd2) form_field_popup_pane_ParamLimits

0x7ab7,	// (0x00014cd2) form_field_popup_pane

0x3b7d,	// (0x00010d98) form_field_popup_wide_pane_ParamLimits

0x3b7d,	// (0x00010d98) form_field_popup_wide_pane

0x3b9e,	// (0x00010db9) form_field_slider_pane_ParamLimits

0x3b9e,	// (0x00010db9) form_field_slider_pane

0x3bb1,	// (0x00010dcc) form_field_slider_wide_pane_ParamLimits

0x3bb1,	// (0x00010dcc) form_field_slider_wide_pane

0x3bc4,	// (0x00010ddf) data_form_pane

0x7ae3,	// (0x00014cfe) form_field_data_pane_t1

0x3bd0,	// (0x00010deb) input_focus_pane

0x3bde,	// (0x00010df9) data_form_wide_pane

0x3c1b,	// (0x00010e36) form_field_data_wide_pane_t1

0x38ad,	// (0x00010ac8) input_focus_pane_cp6

0x7afd,	// (0x00014d18) form_field_popup_pane_t1

0x3bd0,	// (0x00010deb) input_focus_pane_cp7

0x3c3d,	// (0x00010e58) list_form_pane

0x3c51,	// (0x00010e6c) form_field_popup_wide_pane_t1

0x3bd0,	// (0x00010deb) input_focus_pane_cp8

0x3c66,	// (0x00010e81) list_form_wide_pane

0x7b1f,	// (0x00014d3a) form_field_slider_pane_t1_ParamLimits

0x7b1f,	// (0x00014d3a) form_field_slider_pane_t1

0x7b33,	// (0x00014d4e) form_field_slider_pane_t2_ParamLimits

0x7b33,	// (0x00014d4e) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001c898) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001c898) form_field_slider_pane_t

0x3462,	// (0x0001067d) input_focus_pane_cp9_ParamLimits

0x3462,	// (0x0001067d) input_focus_pane_cp9

0x7b45,	// (0x00014d60) slider_cont_pane_ParamLimits

0x7b45,	// (0x00014d60) slider_cont_pane

0x3c75,	// (0x00010e90) form_field_slider_wide_pane_t1_ParamLimits

0x3c75,	// (0x00010e90) form_field_slider_wide_pane_t1

0x3c87,	// (0x00010ea2) form_field_slider_wide_pane_t2_ParamLimits

0x3c87,	// (0x00010ea2) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001c89d) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001c89d) form_field_slider_wide_pane_t

0x3462,	// (0x0001067d) input_focus_pane_cp10_ParamLimits

0x3462,	// (0x0001067d) input_focus_pane_cp10

0x7b59,	// (0x00014d74) slider_cont_pane_cp1_ParamLimits

0x7b59,	// (0x00014d74) slider_cont_pane_cp1

0x7b6d,	// (0x00014d88) slider_form_pane_cp

0x3c99,	// (0x00010eb4) input_focus_pane_g1

0x3ca1,	// (0x00010ebc) input_focus_pane_g2

0x3ca9,	// (0x00010ec4) input_focus_pane_g3

0x3cb1,	// (0x00010ecc) input_focus_pane_g4

0x3cb9,	// (0x00010ed4) input_focus_pane_g5

0x3cc1,	// (0x00010edc) input_focus_pane_g6

0x3cc9,	// (0x00010ee4) input_focus_pane_g7

0x3cd1,	// (0x00010eec) input_focus_pane_g8

0x3cd9,	// (0x00010ef4) input_focus_pane_g9

0x323b,	// (0x00010456) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001c8a2) input_focus_pane_g

0x9543,	// (0x0001675e) wait_border_pane_g3_copy1

0x7b75,	// (0x00014d90) data_form_pane_t1

0x323b,	// (0x00010456) wait_anim_pane_g1_copy1

0xa4f5,	// (0x00017710) data_form_wide_pane_t1

0x3ce1,	// (0x00010efc) list_form_graphic_pane_cp_ParamLimits

0x3ce1,	// (0x00010efc) list_form_graphic_pane_cp

0xa4ca,	// (0x000176e5) slider_form_pane_g1

0xa4d3,	// (0x000176ee) slider_form_pane_g2

0x0006,

0xf98a,	// (0x0001cba5) slider_form_pane_g

0x3ce1,	// (0x00010efc) list_form_graphic_pane_ParamLimits

0x3ce1,	// (0x00010efc) list_form_graphic_pane

0x3cf3,	// (0x00010f0e) list_form_graphic_pane_g1

0x3cfb,	// (0x00010f16) list_form_graphic_pane_t1_ParamLimits

0x3cfb,	// (0x00010f16) list_form_graphic_pane_t1

0x347a,	// (0x00010695) list_highlight_pane_cp5_ParamLimits

0x347a,	// (0x00010695) list_highlight_pane_cp5

0x7b94,	// (0x00014daf) find_pane_g1

0x3d10,	// (0x00010f2b) input_find_pane

0x7b9d,	// (0x00014db8) input_find_pane_g1_ParamLimits

0x7b9d,	// (0x00014db8) input_find_pane_g1

0x7ba9,	// (0x00014dc4) input_find_pane_t1_ParamLimits

0x7ba9,	// (0x00014dc4) input_find_pane_t1

0x7bbe,	// (0x00014dd9) input_find_pane_t2_ParamLimits

0x7bbe,	// (0x00014dd9) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001c8b7) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001c8b7) input_find_pane_t

0x3d19,	// (0x00010f34) input_focus_pane_cp5_ParamLimits

0x3d19,	// (0x00010f34) input_focus_pane_cp5

0x3d27,	// (0x00010f42) bg_popup_window_pane_cp2_ParamLimits

0x3d27,	// (0x00010f42) bg_popup_window_pane_cp2

0x3d34,	// (0x00010f4f) listscroll_menu_pane_ParamLimits

0x3d34,	// (0x00010f4f) listscroll_menu_pane

0x7bdf,	// (0x00014dfa) popup_submenu_window_ParamLimits

0x7bdf,	// (0x00014dfa) popup_submenu_window

0x3d40,	// (0x00010f5b) find_popup_pane_g1

0x3d48,	// (0x00010f63) input_popup_find_pane_cp

0x3d19,	// (0x00010f34) input_focus_pane_cp4_ParamLimits

0x3d19,	// (0x00010f34) input_focus_pane_cp4

0x3d52,	// (0x00010f6d) input_popup_find_pane_t1_ParamLimits

0x3d52,	// (0x00010f6d) input_popup_find_pane_t1

0x33b4,	// (0x000105cf) bg_popup_sub_pane_cp

0x3d80,	// (0x00010f9b) listscroll_popup_sub_pane

0x3d88,	// (0x00010fa3) list_submenu_pane_ParamLimits

0x3d88,	// (0x00010fa3) list_submenu_pane

0x3d99,	// (0x00010fb4) scroll_pane_cp4

0x3da1,	// (0x00010fbc) list_single_popup_submenu_pane_ParamLimits

0x3da1,	// (0x00010fbc) list_single_popup_submenu_pane

0x3db6,	// (0x00010fd1) list_single_popup_submenu_pane_g1

0x3dbe,	// (0x00010fd9) list_single_popup_submenu_pane_t1_ParamLimits

0x3dbe,	// (0x00010fd9) list_single_popup_submenu_pane_t1

0x347a,	// (0x00010695) bg_active_tab_pane_cp1_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp1

0x7c1d,	// (0x00014e38) tabs_2_active_pane_g1

0x7c25,	// (0x00014e40) tabs_2_active_pane_t1

0x347a,	// (0x00010695) bg_passive_tab_pane_cp1_ParamLimits

0x347a,	// (0x00010695) bg_passive_tab_pane_cp1

0x7c1d,	// (0x00014e38) tabs_2_passive_pane_g1

0x7c25,	// (0x00014e40) tabs_2_passive_pane_t1

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp4

0x7c37,	// (0x00014e52) tabs_2_long_active_pane_t1

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp4

0x5eba,	// (0x000130d5) list_single_midp_graphic_pane_g4_ParamLimits

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp5

0x7c56,	// (0x00014e71) tabs_3_long_active_pane_t1

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp5

0x5eba,	// (0x000130d5) list_single_midp_graphic_pane_g4

0x347a,	// (0x00010695) bg_popup_window_pane_cp13_ParamLimits

0x347a,	// (0x00010695) bg_popup_window_pane_cp13

0x3ddc,	// (0x00010ff7) listscroll_popup_fast_pane_ParamLimits

0x3ddc,	// (0x00010ff7) listscroll_popup_fast_pane

0x3deb,	// (0x00011006) grid_popup_fast_pane_ParamLimits

0x3deb,	// (0x00011006) grid_popup_fast_pane

0x3dfd,	// (0x00011018) scroll_pane_cp9_ParamLimits

0x3dfd,	// (0x00011018) scroll_pane_cp9

0xc41c,	// (0x00019637) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc41c,	// (0x00019637) list_single_graphic_hl_pane_t1_cp2

0x3e21,	// (0x0001103c) input_focus_pane_cp20_ParamLimits

0x3e21,	// (0x0001103c) input_focus_pane_cp20

0x3e49,	// (0x00011064) query_popup_data_pane_t1_ParamLimits

0x3e49,	// (0x00011064) query_popup_data_pane_t1

0x3e5c,	// (0x00011077) query_popup_data_pane_t2_ParamLimits

0x3e5c,	// (0x00011077) query_popup_data_pane_t2

0x3ea2,	// (0x000110bd) query_popup_data_pane_t3_ParamLimits

0x3ea2,	// (0x000110bd) query_popup_data_pane_t3

0x3ee3,	// (0x000110fe) query_popup_data_pane_t4_ParamLimits

0x3ee3,	// (0x000110fe) query_popup_data_pane_t4

0x3f1f,	// (0x0001113a) query_popup_data_pane_t5_ParamLimits

0x3f1f,	// (0x0001113a) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001c8bc) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001c8bc) query_popup_data_pane_t

0x3c99,	// (0x00010eb4) bg_set_opt_pane_g1

0x3ca1,	// (0x00010ebc) bg_set_opt_pane_g2

0x3ca9,	// (0x00010ec4) bg_set_opt_pane_g3

0x3cb1,	// (0x00010ecc) bg_set_opt_pane_g4

0x3cb9,	// (0x00010ed4) bg_set_opt_pane_g5

0x3cc1,	// (0x00010edc) bg_set_opt_pane_g6

0x3cc9,	// (0x00010ee4) bg_set_opt_pane_g7

0x3cd1,	// (0x00010eec) bg_set_opt_pane_g8

0x3cd9,	// (0x00010ef4) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001c8c7) bg_set_opt_pane_g

0x5aba,	// (0x00012cd5) control_top_pane_stacon_ParamLimits

0x5aba,	// (0x00012cd5) control_top_pane_stacon

0x5b0d,	// (0x00012d28) signal_pane_stacon_ParamLimits

0x5b0d,	// (0x00012d28) signal_pane_stacon

0x4648,	// (0x00011863) stacon_top_pane_g1_ParamLimits

0x4648,	// (0x00011863) stacon_top_pane_g1

0x5b32,	// (0x00012d4d) title_pane_stacon_ParamLimits

0x5b32,	// (0x00012d4d) title_pane_stacon

0x5b5c,	// (0x00012d77) uni_indicator_pane_stacon_ParamLimits

0x5b5c,	// (0x00012d77) uni_indicator_pane_stacon

0x5b74,	// (0x00012d8f) battery_pane_stacon_ParamLimits

0x5b74,	// (0x00012d8f) battery_pane_stacon

0x5bb8,	// (0x00012dd3) control_bottom_pane_stacon_ParamLimits

0x5bb8,	// (0x00012dd3) control_bottom_pane_stacon

0x5bdb,	// (0x00012df6) navi_pane_stacon_ParamLimits

0x5bdb,	// (0x00012df6) navi_pane_stacon

0x4736,	// (0x00011951) stacon_bottom_pane_g1_ParamLimits

0x4736,	// (0x00011951) stacon_bottom_pane_g1

0x5817,	// (0x00012a32) aid_levels_signal_lsc_ParamLimits

0x5817,	// (0x00012a32) aid_levels_signal_lsc

0x582e,	// (0x00012a49) signal_pane_stacon_g1_ParamLimits

0x582e,	// (0x00012a49) signal_pane_stacon_g1

0x5842,	// (0x00012a5d) signal_pane_stacon_g2_ParamLimits

0x5842,	// (0x00012a5d) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001c8da) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001c8da) signal_pane_stacon_g

0x5877,	// (0x00012a92) title_pane_stacon_t1_ParamLimits

0x5877,	// (0x00012a92) title_pane_stacon_t1

0x3ffc,	// (0x00011217) uni_indicator_pane_stacon_g1

0x4006,	// (0x00011221) uni_indicator_pane_stacon_g2

0x3fe8,	// (0x00011203) uni_indicator_pane_stacon_g3

0x3ff2,	// (0x0001120d) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001c8e6) uni_indicator_pane_stacon_g

0x589c,	// (0x00012ab7) control_top_pane_stacon_g1

0x58a4,	// (0x00012abf) control_top_pane_stacon_t1_ParamLimits

0x58a4,	// (0x00012abf) control_top_pane_stacon_t1

0x58db,	// (0x00012af6) aid_levels_battery_lsc_ParamLimits

0x58db,	// (0x00012af6) aid_levels_battery_lsc

0x58f3,	// (0x00012b0e) battery_pane_stacon_g1_ParamLimits

0x58f3,	// (0x00012b0e) battery_pane_stacon_g1

0x5906,	// (0x00012b21) battery_pane_stacon_g2_ParamLimits

0x5906,	// (0x00012b21) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001c8ef) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001c8ef) battery_pane_stacon_g

0x5944,	// (0x00012b5f) navi_icon_pane_stacon

0x5958,	// (0x00012b73) navi_navi_pane_stacon

0x5944,	// (0x00012b5f) navi_text_pane_stacon

0x589c,	// (0x00012ab7) control_bottom_pane_stacon_g1

0x596e,	// (0x00012b89) control_bottom_pane_stacon_t1_ParamLimits

0x596e,	// (0x00012b89) control_bottom_pane_stacon_t1

0x7c68,	// (0x00014e83) grid_app_pane_ParamLimits

0x7c68,	// (0x00014e83) grid_app_pane

0x7c8c,	// (0x00014ea7) scroll_pane_cp15_ParamLimits

0x7c8c,	// (0x00014ea7) scroll_pane_cp15

0x7c9f,	// (0x00014eba) cell_app_pane_ParamLimits

0x7c9f,	// (0x00014eba) cell_app_pane

0x7ccb,	// (0x00014ee6) cell_app_pane_g1_ParamLimits

0x7ccb,	// (0x00014ee6) cell_app_pane_g1

0x4133,	// (0x0001134e) cell_app_pane_g2_ParamLimits

0x4133,	// (0x0001134e) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001c8f4) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001c8f4) cell_app_pane_g

0x413f,	// (0x0001135a) cell_app_pane_t1_ParamLimits

0x413f,	// (0x0001135a) cell_app_pane_t1

0x4156,	// (0x00011371) grid_highlight_pane_ParamLimits

0x4156,	// (0x00011371) grid_highlight_pane

0x3c99,	// (0x00010eb4) cell_highlight_pane_g1

0x3ca1,	// (0x00010ebc) cell_highlight_pane_g2

0x3ca9,	// (0x00010ec4) cell_highlight_pane_g3

0x3cb1,	// (0x00010ecc) cell_highlight_pane_g4

0x3cb9,	// (0x00010ed4) cell_highlight_pane_g5

0x3cc1,	// (0x00010edc) cell_highlight_pane_g6

0x3cc9,	// (0x00010ee4) cell_highlight_pane_g7

0x3cd1,	// (0x00010eec) cell_highlight_pane_g8

0x3cd9,	// (0x00010ef4) cell_highlight_pane_g9

0x323b,	// (0x00010456) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001c8a2) cell_highlight_pane_g

0x4171,	// (0x0001138c) bg_scroll_pane

0x59b8,	// (0x00012bd3) scroll_handle_pane

0x41e1,	// (0x000113fc) scroll_bg_pane_g1

0x41f6,	// (0x00011411) scroll_bg_pane_g2

0x420e,	// (0x00011429) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001c8f9) scroll_bg_pane_g

0x4223,	// (0x0001143e) scroll_handle_focus_pane_ParamLimits

0x4223,	// (0x0001143e) scroll_handle_focus_pane

0x41e1,	// (0x000113fc) scroll_handle_pane_g1

0x4230,	// (0x0001144b) scroll_handle_pane_g2

0x420e,	// (0x00011429) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001c900) scroll_handle_pane_g

0x3d19,	// (0x00010f34) bg_popup_sub_pane_cp21_ParamLimits

0x3d19,	// (0x00010f34) bg_popup_sub_pane_cp21

0x4244,	// (0x0001145f) popup_fep_japan_predictive_window_t1_ParamLimits

0x4244,	// (0x0001145f) popup_fep_japan_predictive_window_t1

0x425b,	// (0x00011476) popup_fep_japan_predictive_window_t2_ParamLimits

0x425b,	// (0x00011476) popup_fep_japan_predictive_window_t2

0x428e,	// (0x000114a9) popup_fep_japan_predictive_window_t3_ParamLimits

0x428e,	// (0x000114a9) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001c907) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001c907) popup_fep_japan_predictive_window_t

0x33b4,	// (0x000105cf) bg_popup_sub_pane_cp23

0x42c5,	// (0x000114e0) listscroll_japin_cand_pane

0x42cd,	// (0x000114e8) popup_fep_japan_candidate_window_t1

0x42db,	// (0x000114f6) candidate_pane_ParamLimits

0x42db,	// (0x000114f6) candidate_pane

0x42ed,	// (0x00011508) scroll_pane_cp30

0x42f7,	// (0x00011512) list_single_popup_jap_candidate_pane_ParamLimits

0x42f7,	// (0x00011512) list_single_popup_jap_candidate_pane

0x33b4,	// (0x000105cf) list_highlight_pane_cp30

0x430b,	// (0x00011526) list_single_popup_jap_candidate_pane_t1

0x7ceb,	// (0x00014f06) level_1_signal

0x7cf8,	// (0x00014f13) level_2_signal

0x7d05,	// (0x00014f20) level_3_signal

0x7d12,	// (0x00014f2d) level_4_signal

0x7d1f,	// (0x00014f3a) level_5_signal

0x7d2c,	// (0x00014f47) level_6_signal

0x7d39,	// (0x00014f54) level_7_signal

0x7ceb,	// (0x00014f06) level_1_battery

0x7cf8,	// (0x00014f13) level_2_battery

0x7d05,	// (0x00014f20) level_3_battery

0x7d12,	// (0x00014f2d) level_4_battery

0x7d1f,	// (0x00014f3a) level_5_battery

0x7d2c,	// (0x00014f47) level_6_battery

0x7d39,	// (0x00014f54) level_7_battery

0x4351,	// (0x0001156c) list_menu_pane_ParamLimits

0x4351,	// (0x0001156c) list_menu_pane

0x4367,	// (0x00011582) scroll_pane_cp25_ParamLimits

0x4367,	// (0x00011582) scroll_pane_cp25

0x4380,	// (0x0001159b) list_double2_graphic_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double2_graphic_pane_cp2

0x4380,	// (0x0001159b) list_double2_large_graphic_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double2_large_graphic_pane_cp2

0x4380,	// (0x0001159b) list_double2_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double2_pane_cp2

0x4380,	// (0x0001159b) list_double_graphic_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double_graphic_pane_cp2

0x4380,	// (0x0001159b) list_double_large_graphic_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double_large_graphic_pane_cp2

0x4380,	// (0x0001159b) list_double_number_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double_number_pane_cp2

0x4380,	// (0x0001159b) list_double_pane_cp2_ParamLimits

0x4380,	// (0x0001159b) list_double_pane_cp2

0x7d5c,	// (0x00014f77) list_single_2graphic_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_2graphic_pane_cp2

0x7d5c,	// (0x00014f77) list_single_graphic_heading_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_graphic_heading_pane_cp2

0x7d5c,	// (0x00014f77) list_single_graphic_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_graphic_pane_cp2

0x7d5c,	// (0x00014f77) list_single_heading_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_heading_pane_cp2

0x4390,	// (0x000115ab) list_single_large_graphic_pane_cp2_ParamLimits

0x4390,	// (0x000115ab) list_single_large_graphic_pane_cp2

0x7d5c,	// (0x00014f77) list_single_number_heading_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_number_heading_pane_cp2

0x7d5c,	// (0x00014f77) list_single_number_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_number_pane_cp2

0x7d5c,	// (0x00014f77) list_single_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_pane_cp2

0x4404,	// (0x0001161f) bg_popup_sub_pane_cp22

0x5a6a,	// (0x00012c85) popup_side_volume_key_window_g1

0x5a94,	// (0x00012caf) popup_side_volume_key_window_t1

0x5ab2,	// (0x00012ccd) volume_small_pane_cp1

0x3462,	// (0x0001067d) bg_popup_sub_pane_cp24_ParamLimits

0x3462,	// (0x0001067d) bg_popup_sub_pane_cp24

0x4479,	// (0x00011694) fep_china_uni_candidate_pane_ParamLimits

0x4479,	// (0x00011694) fep_china_uni_candidate_pane

0x448d,	// (0x000116a8) fep_china_uni_entry_pane

0x449d,	// (0x000116b8) popup_fep_china_uni_window_g1

0x44b9,	// (0x000116d4) fep_china_uni_entry_pane_g1

0x44c3,	// (0x000116de) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001c938) fep_china_uni_entry_pane_g

0x44cd,	// (0x000116e8) fep_entry_item_pane

0x44d7,	// (0x000116f2) fep_candidate_item_pane

0x44df,	// (0x000116fa) fep_china_uni_candidate_pane_g1

0x44e9,	// (0x00011704) fep_china_uni_candidate_pane_g2

0x44f1,	// (0x0001170c) fep_china_uni_candidate_pane_g3

0x44f9,	// (0x00011714) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001c93d) fep_china_uni_candidate_pane_g

0x323b,	// (0x00010456) fep_entry_item_pane_g1

0x4503,	// (0x0001171e) fep_entry_item_pane_t1_ParamLimits

0x4503,	// (0x0001171e) fep_entry_item_pane_t1

0x4519,	// (0x00011734) fep_candidate_item_pane_t1_ParamLimits

0x4519,	// (0x00011734) fep_candidate_item_pane_t1

0x452e,	// (0x00011749) fep_candidate_item_pane_t2_ParamLimits

0x452e,	// (0x00011749) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001c946) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001c946) fep_candidate_item_pane_t

0x347a,	// (0x00010695) list_highlight_pane_cp31_ParamLimits

0x347a,	// (0x00010695) list_highlight_pane_cp31

0x4540,	// (0x0001175b) level_1_signal_lsc

0x4549,	// (0x00011764) level_2_signal_lsc

0x4552,	// (0x0001176d) level_3_signal_lsc

0x455b,	// (0x00011776) level_4_signal_lsc

0x4564,	// (0x0001177f) level_5_signal_lsc

0x456d,	// (0x00011788) level_6_signal_lsc

0x4576,	// (0x00011791) level_7_signal_lsc

0x4576,	// (0x00011791) level_1_battery_lsc

0x457f,	// (0x0001179a) level_2_battery_lsc

0x4588,	// (0x000117a3) level_3_battery_lsc

0x4591,	// (0x000117ac) level_4_battery_lsc

0x459a,	// (0x000117b5) level_5_battery_lsc

0x45a3,	// (0x000117be) level_6_battery_lsc

0x4540,	// (0x0001175b) level_7_battery_lsc

0x45ac,	// (0x000117c7) scroll_handle_focus_pane_g1

0x45b5,	// (0x000117d0) scroll_handle_focus_pane_g2

0x45be,	// (0x000117d9) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001c94b) scroll_handle_focus_pane_g

0x7ddb,	// (0x00014ff6) list_single_2graphic_pane_g1_ParamLimits

0x7ddb,	// (0x00014ff6) list_single_2graphic_pane_g1

0x7686,	// (0x000148a1) list_single_2graphic_pane_g2_ParamLimits

0x7686,	// (0x000148a1) list_single_2graphic_pane_g2

0x760c,	// (0x00014827) list_single_2graphic_pane_g3_ParamLimits

0x760c,	// (0x00014827) list_single_2graphic_pane_g3

0x7de7,	// (0x00015002) list_single_2graphic_pane_g4_ParamLimits

0x7de7,	// (0x00015002) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001c952) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001c952) list_single_2graphic_pane_g

0x7df3,	// (0x0001500e) list_single_2graphic_pane_t1_ParamLimits

0x7df3,	// (0x0001500e) list_single_2graphic_pane_t1

0x7e21,	// (0x0001503c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7e21,	// (0x0001503c) list_double2_graphic_large_graphic_pane_g1

0x772b,	// (0x00014946) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x772b,	// (0x00014946) list_double2_graphic_large_graphic_pane_g2

0x773c,	// (0x00014957) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x773c,	// (0x00014957) list_double2_graphic_large_graphic_pane_g3

0x7e33,	// (0x0001504e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7e33,	// (0x0001504e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001c95b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001c95b) list_double2_graphic_large_graphic_pane_g

0x7e3f,	// (0x0001505a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x7e3f,	// (0x0001505a) list_double2_graphic_large_graphic_pane_t1

0x7e55,	// (0x00015070) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x7e55,	// (0x00015070) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001c964) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001c964) list_double2_graphic_large_graphic_pane_t

0x4794,	// (0x000119af) popup_fast_swap_window_ParamLimits

0x4794,	// (0x000119af) popup_fast_swap_window

0x47b2,	// (0x000119cd) popup_side_volume_key_window

0x47d0,	// (0x000119eb) stacon_top_pane

0x47da,	// (0x000119f5) status_pane_ParamLimits

0x47da,	// (0x000119f5) status_pane

0x7f17,	// (0x00015132) status_small_pane

0x33b4,	// (0x000105cf) control_pane

0x33b4,	// (0x000105cf) stacon_bottom_pane

0x3b5c,	// (0x00010d77) scroll_pane_cp121

0x3b53,	// (0x00010d6e) set_content_pane

0x7e67,	// (0x00015082) bg_active_tab_pane_g1_cp1

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp1

0x7e70,	// (0x0001508b) bg_active_tab_pane_g3_cp1

0x7e67,	// (0x00015082) bg_passive_tab_pane_g1_cp1

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp1

0x7e70,	// (0x0001508b) bg_passive_tab_pane_g3_cp1

0x7e79,	// (0x00015094) bg_active_tab_pane_g1_cp2

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp2

0x7e82,	// (0x0001509d) bg_active_tab_pane_g3_cp2

0x7e79,	// (0x00015094) bg_passive_tab_pane_g1_cp2

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp2

0x7e82,	// (0x0001509d) bg_passive_tab_pane_g3_cp2

0x7e8b,	// (0x000150a6) bg_active_tab_pane_g1_cp3

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp3

0x7e94,	// (0x000150af) bg_active_tab_pane_g3_cp3

0x7e8b,	// (0x000150a6) bg_passive_tab_pane_g1_cp3

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp3

0x7e94,	// (0x000150af) bg_passive_tab_pane_g3_cp3

0x7e9d,	// (0x000150b8) bg_active_tab_pane_g1_cp4

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp4

0x7ea8,	// (0x000150c3) bg_active_tab_pane_g3_cp4

0x7e9d,	// (0x000150b8) bg_passive_tab_pane_g1_cp4

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp4

0x7ea8,	// (0x000150c3) bg_passive_tab_pane_g3_cp4

0x475b,	// (0x00011976) bg_active_tab_pane_g1_cp5

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp5

0x4752,	// (0x0001196d) bg_active_tab_pane_g3_cp5

0x475b,	// (0x00011976) bg_passive_tab_pane_g1_cp5

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp5

0x4752,	// (0x0001196d) bg_passive_tab_pane_g3_cp5

0x7eb3,	// (0x000150ce) list_set_graphic_pane_ParamLimits

0x7eb3,	// (0x000150ce) list_set_graphic_pane

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp4

0x7ec8,	// (0x000150e3) list_set_graphic_pane_g1_ParamLimits

0x7ec8,	// (0x000150e3) list_set_graphic_pane_g1

0x7ed4,	// (0x000150ef) list_set_graphic_pane_g2_ParamLimits

0x7ed4,	// (0x000150ef) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001c969) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001c969) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0001ccea) volume_small_pane_cp_g

0x7ef8,	// (0x00015113) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7ef8,	// (0x00015113) list_double2_large_graphic_pane_g1_cp2

0x7f06,	// (0x00015121) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7f06,	// (0x00015121) list_double2_large_graphic_pane_g2_cp2

0x4764,	// (0x0001197f) list_double2_large_graphic_pane_g3_cp2

0x476c,	// (0x00011987) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x476c,	// (0x00011987) list_double2_large_graphic_pane_t1_cp2

0x4782,	// (0x0001199d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4782,	// (0x0001199d) list_double2_large_graphic_pane_t2_cp2

0xa027,	// (0x00017242) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa027,	// (0x00017242) list_double_large_graphic_pane_g1_cp2

0xa03a,	// (0x00017255) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa03a,	// (0x00017255) list_double_large_graphic_pane_g2_cp2

0x48bb,	// (0x00011ad6) list_double_large_graphic_pane_g3_cp2

0xa04b,	// (0x00017266) list_double_large_graphic_pane_g4_cp

0xa053,	// (0x0001726e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa053,	// (0x0001726e) list_double_large_graphic_pane_t1_cp2

0xa06a,	// (0x00017285) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa06a,	// (0x00017285) list_double_large_graphic_pane_t2_cp2

0x7f22,	// (0x0001513d) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7f22,	// (0x0001513d) list_double2_graphic_pane_g1_cp2

0x7f30,	// (0x0001514b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7f30,	// (0x0001514b) list_double2_graphic_pane_g2_cp2

0x7f41,	// (0x0001515c) list_double2_graphic_pane_g3_cp2

0x47e8,	// (0x00011a03) list_double2_graphic_pane_t1_cp2_ParamLimits

0x47e8,	// (0x00011a03) list_double2_graphic_pane_t1_cp2

0x47fe,	// (0x00011a19) list_double2_graphic_pane_t2_cp2_ParamLimits

0x47fe,	// (0x00011a19) list_double2_graphic_pane_t2_cp2

0x4810,	// (0x00011a2b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4810,	// (0x00011a2b) list_single_number_heading_pane_g1_cp2

0x481c,	// (0x00011a37) list_single_number_heading_pane_g2_cp2

0x4824,	// (0x00011a3f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4824,	// (0x00011a3f) list_single_number_heading_pane_t1_cp2

0x7f4b,	// (0x00015166) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7f4b,	// (0x00015166) list_single_number_heading_pane_t2_cp2

0x483a,	// (0x00011a55) list_single_number_heading_pane_t3_cp2_ParamLimits

0x483a,	// (0x00011a55) list_single_number_heading_pane_t3_cp2

0x4810,	// (0x00011a2b) list_single_heading_pane_g1_cp2_ParamLimits

0x4810,	// (0x00011a2b) list_single_heading_pane_g1_cp2

0x481c,	// (0x00011a37) list_single_heading_pane_g2_cp2

0x4824,	// (0x00011a3f) list_single_heading_pane_t1_cp2_ParamLimits

0x4824,	// (0x00011a3f) list_single_heading_pane_t1_cp2

0x9e21,	// (0x0001703c) list_single_heading_pane_t2_cp2_ParamLimits

0x9e21,	// (0x0001703c) list_single_heading_pane_t2_cp2

0x9d69,	// (0x00016f84) list_double_graphic_pane_g1_cp2_ParamLimits

0x9d69,	// (0x00016f84) list_double_graphic_pane_g1_cp2

0x9d75,	// (0x00016f90) list_double_graphic_pane_g2_cp2_ParamLimits

0x9d75,	// (0x00016f90) list_double_graphic_pane_g2_cp2

0x9d84,	// (0x00016f9f) list_double_graphic_pane_g3_cp2

0x9d8c,	// (0x00016fa7) list_double_graphic_pane_t1_cp2_ParamLimits

0x9d8c,	// (0x00016fa7) list_double_graphic_pane_t1_cp2

0x9da2,	// (0x00016fbd) list_double_graphic_pane_t2_cp2_ParamLimits

0x9da2,	// (0x00016fbd) list_double_graphic_pane_t2_cp2

0x48af,	// (0x00011aca) list_double_number_pane_g1_cp2_ParamLimits

0x48af,	// (0x00011aca) list_double_number_pane_g1_cp2

0x48bb,	// (0x00011ad6) list_double_number_pane_g2_cp2

0x9d2d,	// (0x00016f48) list_double_number_pane_t1_cp2_ParamLimits

0x9d2d,	// (0x00016f48) list_double_number_pane_t1_cp2

0x9d41,	// (0x00016f5c) list_double_number_pane_t2_cp2_ParamLimits

0x9d41,	// (0x00016f5c) list_double_number_pane_t2_cp2

0x9d57,	// (0x00016f72) list_double_number_pane_t3_cp2_ParamLimits

0x9d57,	// (0x00016f72) list_double_number_pane_t3_cp2

0x9c16,	// (0x00016e31) list_single_graphic_pane_g1_cp2_ParamLimits

0x9c16,	// (0x00016e31) list_single_graphic_pane_g1_cp2

0x48fb,	// (0x00011b16) list_single_graphic_pane_g2_cp2_ParamLimits

0x48fb,	// (0x00011b16) list_single_graphic_pane_g2_cp2

0x4907,	// (0x00011b22) list_single_graphic_pane_g3_cp2

0x9bec,	// (0x00016e07) list_single_graphic_pane_t1_cp2_ParamLimits

0x9bec,	// (0x00016e07) list_single_graphic_pane_t1_cp2

0x48fb,	// (0x00011b16) list_single_number_pane_g1_cp2_ParamLimits

0x48fb,	// (0x00011b16) list_single_number_pane_g1_cp2

0x4907,	// (0x00011b22) list_single_number_pane_g2_cp2

0x9bec,	// (0x00016e07) list_single_number_pane_t1_cp2_ParamLimits

0x9bec,	// (0x00016e07) list_single_number_pane_t1_cp2

0x9c02,	// (0x00016e1d) list_single_number_pane_t2_cp2_ParamLimits

0x9c02,	// (0x00016e1d) list_single_number_pane_t2_cp2

0x7f06,	// (0x00015121) list_double2_pane_g1_cp2_ParamLimits

0x7f06,	// (0x00015121) list_double2_pane_g1_cp2

0x4764,	// (0x0001197f) list_double2_pane_g2_cp2

0x4887,	// (0x00011aa2) list_double2_pane_t1_cp2_ParamLimits

0x4887,	// (0x00011aa2) list_double2_pane_t1_cp2

0x489d,	// (0x00011ab8) list_double2_pane_t2_cp2_ParamLimits

0x489d,	// (0x00011ab8) list_double2_pane_t2_cp2

0x48af,	// (0x00011aca) list_double_pane_g1_cp2_ParamLimits

0x48af,	// (0x00011aca) list_double_pane_g1_cp2

0x48bb,	// (0x00011ad6) list_double_pane_g2_cp2

0x48c3,	// (0x00011ade) list_double_pane_t1_cp2_ParamLimits

0x48c3,	// (0x00011ade) list_double_pane_t1_cp2

0x48d9,	// (0x00011af4) list_double_pane_t2_cp2_ParamLimits

0x48d9,	// (0x00011af4) list_double_pane_t2_cp2

0x48eb,	// (0x00011b06) list_single_pane_cp2_g3

0x48fb,	// (0x00011b16) list_single_pane_g1_cp2_ParamLimits

0x48fb,	// (0x00011b16) list_single_pane_g1_cp2

0x4907,	// (0x00011b22) list_single_pane_g2_cp2

0x490f,	// (0x00011b2a) list_single_pane_t1_cp2_ParamLimits

0x490f,	// (0x00011b2a) list_single_pane_t1_cp2

0x7f79,	// (0x00015194) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7f79,	// (0x00015194) list_single_large_graphic_pane_g1_cp2

0x4927,	// (0x00011b42) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4927,	// (0x00011b42) list_single_large_graphic_pane_g2_cp2

0x4933,	// (0x00011b4e) list_single_large_graphic_pane_g3_cp2

0x493b,	// (0x00011b56) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x493b,	// (0x00011b56) list_single_large_graphic_pane_g4_cp1

0x4955,	// (0x00011b70) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4955,	// (0x00011b70) list_single_large_graphic_pane_t1_cp2

0x9bb6,	// (0x00016dd1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9bb6,	// (0x00016dd1) list_single_graphic_heading_pane_g1_cp2

0x9b83,	// (0x00016d9e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9b83,	// (0x00016d9e) list_single_graphic_heading_pane_g4_cp2

0x4907,	// (0x00011b22) list_single_graphic_heading_pane_g5_cp2

0x9bc2,	// (0x00016ddd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9bc2,	// (0x00016ddd) list_single_graphic_heading_pane_t1_cp2

0x9bd8,	// (0x00016df3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9bd8,	// (0x00016df3) list_single_graphic_heading_pane_t2_cp2

0x9b77,	// (0x00016d92) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9b77,	// (0x00016d92) list_single_2graphic_pane_g1_cp2

0x9b83,	// (0x00016d9e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9b83,	// (0x00016d9e) list_single_2graphic_pane_g2_cp2

0x4907,	// (0x00011b22) list_single_2graphic_pane_g3_cp2

0x9b94,	// (0x00016daf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9b94,	// (0x00016daf) list_single_2graphic_pane_g4_cp2

0x9ba0,	// (0x00016dbb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9ba0,	// (0x00016dbb) list_single_2graphic_pane_t1_cp2

0x323b,	// (0x00010456) list_highlight_pane_g10_cp1

0x974f,	// (0x0001696a) list_highlight_pane_g1_cp1

0x9757,	// (0x00016972) list_highlight_pane_g2_cp1

0x975f,	// (0x0001697a) list_highlight_pane_g3_cp1

0x9767,	// (0x00016982) list_highlight_pane_g4_cp1

0x976f,	// (0x0001698a) list_highlight_pane_g5_cp1

0x9777,	// (0x00016992) list_highlight_pane_g6_cp1

0x977f,	// (0x0001699a) list_highlight_pane_g7_cp1

0x9787,	// (0x000169a2) list_highlight_pane_g8_cp1

0x978f,	// (0x000169aa) list_highlight_pane_g9_cp1

0x966f,	// (0x0001688a) form_field_slider_pane_t3

0x967d,	// (0x00016898) form_field_slider_pane_t4

0x968b,	// (0x000168a6) slider_form_pane_ParamLimits

0x968b,	// (0x000168a6) slider_form_pane

0x33b4,	// (0x000105cf) control_abbreviations

0x33b4,	// (0x000105cf) control_conventions

0x33b4,	// (0x000105cf) control_definitions

0x33b4,	// (0x000105cf) format_table_attribute

0x9e77,	// (0x00017092) bg_popup_preview_window_pane_g9

0x33b4,	// (0x000105cf) format_table_data2

0x33b4,	// (0x000105cf) format_table_data3

0x33b4,	// (0x000105cf) format_table_data_example

0x0008,

0x33b4,	// (0x000105cf) intro_purpose

0xf8ea,	// (0x0001cb05) bg_popup_preview_window_pane_g

0x33b4,	// (0x000105cf) texts_category

0x33b4,	// (0x000105cf) texts_graphics

0x496b,	// (0x00011b86) text_digital

0x497a,	// (0x00011b95) text_primary

0x4989,	// (0x00011ba4) text_primary_small

0x4998,	// (0x00011bb3) text_secondary

0x49a7,	// (0x00011bc2) text_title

0xa6a8,	// (0x000178c3) bg_passive_tab_pane_g1_cp3_srt

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp3_srt

0xa6b1,	// (0x000178cc) bg_passive_tab_pane_g3_cp3_srt

0x347a,	// (0x00010695) bg_active_tab_pane_cp3_srt_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp3_srt

0xa6ba,	// (0x000178d5) tabs_4_active_pane_srt_g1

0xa6c2,	// (0x000178dd) tabs_4_active_pane_srt_t1_ParamLimits

0xa6c2,	// (0x000178dd) tabs_4_active_pane_srt_t1

0xa6a8,	// (0x000178c3) bg_active_tab_pane_g1_cp3_copy1

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp3_copy1

0xa6b1,	// (0x000178cc) bg_active_tab_pane_g3_cp3_copy1

0x347a,	// (0x00010695) tabs_2_long_active_pane_srt_ParamLimits

0x347a,	// (0x00010695) tabs_2_long_active_pane_srt

0x347a,	// (0x00010695) tabs_2_long_passive_pane_srt_ParamLimits

0x347a,	// (0x00010695) tabs_2_long_passive_pane_srt

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp4_srt

0xa2db,	// (0x000174f6) bg_passive_tab_pane_g1_cp4_srt

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp4_srt

0xa2e4,	// (0x000174ff) bg_passive_tab_pane_g3_cp4_srt

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp4_srt_ParamLimits

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp4_srt

0xa2ed,	// (0x00017508) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa2ed,	// (0x00017508) tabs_2_long_active_pane_srt_t1

0xa2db,	// (0x000174f6) bg_active_tab_pane_g1_cp4_srt

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp4_srt

0xa2e4,	// (0x000174ff) bg_active_tab_pane_g3_cp4_srt

0x3462,	// (0x0001067d) tabs_3_long_active_pane_srt_ParamLimits

0x3462,	// (0x0001067d) tabs_3_long_active_pane_srt

0x3462,	// (0x0001067d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3462,	// (0x0001067d) tabs_3_long_passive_pane_cp_srt

0x3462,	// (0x0001067d) tabs_3_long_passive_pane_srt_ParamLimits

0x3462,	// (0x0001067d) tabs_3_long_passive_pane_srt

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp5_srt

0x475b,	// (0x00011976) bg_passive_tab_pane_g1_cp5_srt

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp5_srt

0x4752,	// (0x0001196d) bg_passive_tab_pane_g3_cp5_srt

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp5_srt_ParamLimits

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp5_srt

0xa2c9,	// (0x000174e4) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa2c9,	// (0x000174e4) tabs_3_long_active_pane_srt_t1

0x475b,	// (0x00011976) bg_active_tab_pane_g1_cp5_srt

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp5_srt

0x4752,	// (0x0001196d) bg_active_tab_pane_g3_cp5_srt

0xa2bb,	// (0x000174d6) navi_text_pane_srt_t1

0xa2b3,	// (0x000174ce) navi_icon_pane_srt_g1

0x813b,	// (0x00015356) midp_editing_number_pane_srt

0x49b6,	// (0x00011bd1) midp_ticker_pane_srt

0x8143,	// (0x0001535e) midp_ticker_pane_srt_g1

0x814b,	// (0x00015366) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001c988) midp_ticker_pane_srt_g

0x8153,	// (0x0001536e) midp_ticker_pane_srt_t1

0xa2a4,	// (0x000174bf) midp_editing_number_pane_t1_copy1

0x7c4a,	// (0x00014e65) listscroll_midp_pane

0x7c4a,	// (0x00014e65) midp_form_pane

0x7fe9,	// (0x00015204) midp_info_popup_window_ParamLimits

0x7fe9,	// (0x00015204) midp_info_popup_window

0x3d19,	// (0x00010f34) bg_popup_sub_pane_cp50_ParamLimits

0x3d19,	// (0x00010f34) bg_popup_sub_pane_cp50

0x9385,	// (0x000165a0) listscroll_midp_info_pane_ParamLimits

0x9385,	// (0x000165a0) listscroll_midp_info_pane

0x936d,	// (0x00016588) listscroll_form_midp_pane_ParamLimits

0x936d,	// (0x00016588) listscroll_form_midp_pane

0x9379,	// (0x00016594) scroll_bar_cp050

0x934d,	// (0x00016568) list_midp_pane

0xb45f,	// (0x0001867a) signal_pane_g2_cp

0x9287,	// (0x000164a2) listscroll_midp_info_pane_t1_ParamLimits

0x9287,	// (0x000164a2) listscroll_midp_info_pane_t1

0x929f,	// (0x000164ba) listscroll_midp_info_pane_t2_ParamLimits

0x929f,	// (0x000164ba) listscroll_midp_info_pane_t2

0x92dd,	// (0x000164f8) listscroll_midp_info_pane_t3_ParamLimits

0x92dd,	// (0x000164f8) listscroll_midp_info_pane_t3

0x9317,	// (0x00016532) listscroll_midp_info_pane_t4_ParamLimits

0x9317,	// (0x00016532) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x0001ca40) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x0001ca40) listscroll_midp_info_pane_t

0x3d99,	// (0x00010fb4) scroll_pane_cp21

0x9221,	// (0x0001643c) form_midp_field_choice_group_pane

0x922a,	// (0x00016445) form_midp_field_text_pane

0x926d,	// (0x00016488) form_midp_field_time_pane

0x9275,	// (0x00016490) form_midp_gauge_slider_pane

0x927e,	// (0x00016499) form_midp_gauge_wait_pane

0x33b4,	// (0x000105cf) form_midp_image_pane

0x9201,	// (0x0001641c) list_single_midp_pane_ParamLimits

0x9201,	// (0x0001641c) list_single_midp_pane

0x91c5,	// (0x000163e0) form_midp_field_text_pane_t1

0x8fa2,	// (0x000161bd) input_focus_pane_cp050

0x91f0,	// (0x0001640b) list_midp_form_text_pane

0x9194,	// (0x000163af) form_midp_field_choice_group_pane_t1

0x91a2,	// (0x000163bd) input_focus_pane_cp051

0x91b6,	// (0x000163d1) list_midp_choice_pane

0x33b4,	// (0x000105cf) status_idle_pane

0x9178,	// (0x00016393) form_midp_field_time_pane_t1

0x323b,	// (0x00010456) wait_anim_pane_g2_copy1

0x9186,	// (0x000163a1) form_midp_field_time_pane_t2

0x0001,

0x8099,	// (0x000152b4) aid_navinavi_width_2_pane

0xf820,	// (0x0001ca3b) form_midp_field_time_pane_t

0x33b4,	// (0x000105cf) input_focus_pane_cp052

0x33b4,	// (0x000105cf) bg_input_focus_pane_cp040

0x9138,	// (0x00016353) form_midp_gauge_slider_pane_t1

0x9146,	// (0x00016361) form_midp_gauge_slider_pane_t2

0x9154,	// (0x0001636f) form_midp_gauge_slider_pane_t3

0x9162,	// (0x0001637d) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0001ca32) form_midp_gauge_slider_pane_t

0x9170,	// (0x0001638b) form_midp_slider_pane

0x347a,	// (0x00010695) bg_input_focus_pane_cp041_ParamLimits

0x347a,	// (0x00010695) bg_input_focus_pane_cp041

0x9105,	// (0x00016320) form_midp_gauge_wait_pane_t1_ParamLimits

0x9105,	// (0x00016320) form_midp_gauge_wait_pane_t1

0x9117,	// (0x00016332) form_midp_gauge_wait_pane_t2_ParamLimits

0x9117,	// (0x00016332) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x0001ca2d) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x0001ca2d) form_midp_gauge_wait_pane_t

0x9129,	// (0x00016344) form_midp_wait_pane_ParamLimits

0x9129,	// (0x00016344) form_midp_wait_pane

0x90cd,	// (0x000162e8) form_midp_image_pane_g1

0x90d6,	// (0x000162f1) form_midp_image_pane_t1

0x90e5,	// (0x00016300) form_midp_image_pane_t2

0x90f4,	// (0x0001630f) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0001ca26) form_midp_image_pane_t

0x90b5,	// (0x000162d0) list_single_midp_pane_g1

0x90be,	// (0x000162d9) list_single_midp_pane_t1

0x909b,	// (0x000162b6) list_midp_form_item_pane_ParamLimits

0x909b,	// (0x000162b6) list_midp_form_item_pane

0x8041,	// (0x0001525c) list_midp_form_item_pane_t1

0x8050,	// (0x0001526b) midp_ticker_pane_g1

0x805c,	// (0x00015277) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001c96e) midp_ticker_pane_g

0x8068,	// (0x00015283) midp_ticker_pane_t1

0xa54c,	// (0x00017767) midp_editing_number_pane_t1

0xa52a,	// (0x00017745) midp_editing_number_pane

0xa539,	// (0x00017754) midp_ticker_pane

0xa26c,	// (0x00017487) ai_message_heading_pane

0x33b4,	// (0x000105cf) bg_popup_window_pane_cp14

0xa274,	// (0x0001748f) listscroll_ai_message_pane

0xa1f2,	// (0x0001740d) ai_message_heading_pane_g1_ParamLimits

0xa1f2,	// (0x0001740d) ai_message_heading_pane_g1

0xa1fe,	// (0x00017419) ai_message_heading_pane_g2_ParamLimits

0xa1fe,	// (0x00017419) ai_message_heading_pane_g2

0xa20c,	// (0x00017427) ai_message_heading_pane_g3_ParamLimits

0xa20c,	// (0x00017427) ai_message_heading_pane_g3

0xa218,	// (0x00017433) ai_message_heading_pane_g4_ParamLimits

0xa218,	// (0x00017433) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0001cb67) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0001cb67) ai_message_heading_pane_g

0xa224,	// (0x0001743f) ai_message_heading_pane_t1_ParamLimits

0xa224,	// (0x0001743f) ai_message_heading_pane_t1

0xa23e,	// (0x00017459) ai_message_heading_pane_t2_ParamLimits

0xa23e,	// (0x00017459) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x0001cb70) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x0001cb70) ai_message_heading_pane_t

0xa252,	// (0x0001746d) bg_popup_heading_pane_cp1_ParamLimits

0xa252,	// (0x0001746d) bg_popup_heading_pane_cp1

0xa1e0,	// (0x000173fb) list_ai_message_pane_ParamLimits

0xa1e0,	// (0x000173fb) list_ai_message_pane

0x3d99,	// (0x00010fb4) scroll_pane_cp10

0xa17c,	// (0x00017397) list_ai_message_pane_g1

0xa184,	// (0x0001739f) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0001cb44) list_ai_message_pane_g

0xa18c,	// (0x000173a7) list_ai_message_pane_t1_ParamLimits

0xa18c,	// (0x000173a7) list_ai_message_pane_t1

0xa1a1,	// (0x000173bc) list_ai_message_pane_t2_ParamLimits

0xa1a1,	// (0x000173bc) list_ai_message_pane_t2

0xa1b6,	// (0x000173d1) list_ai_message_pane_t3_ParamLimits

0xa1b6,	// (0x000173d1) list_ai_message_pane_t3

0xa1cb,	// (0x000173e6) list_ai_message_pane_t4_ParamLimits

0xa1cb,	// (0x000173e6) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x0001cb49) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x0001cb49) list_ai_message_pane_t

0xa165,	// (0x00017380) cell_ai_soft_ind_pane_ParamLimits

0xa165,	// (0x00017380) cell_ai_soft_ind_pane

0x807a,	// (0x00015295) cell_ai_soft_ind_pane_g1_ParamLimits

0x807a,	// (0x00015295) cell_ai_soft_ind_pane_g1

0x33b4,	// (0x000105cf) grid_highlight_cp1

0x8087,	// (0x000152a2) text_secondary_cp56_ParamLimits

0x8087,	// (0x000152a2) text_secondary_cp56

0xa13a,	// (0x00017355) example_general_pane_ParamLimits

0xa13a,	// (0x00017355) example_general_pane

0xa146,	// (0x00017361) example_parent_pane_g1_ParamLimits

0xa146,	// (0x00017361) example_parent_pane_g1

0xa152,	// (0x0001736d) example_parent_pane_t1_ParamLimits

0xa152,	// (0x0001736d) example_parent_pane_t1

0x86d4,	// (0x000158ef) popup_preview_text_window_ParamLimits

0x86d4,	// (0x000158ef) popup_preview_text_window

0x48f3,	// (0x00011b0e) list_single_pane_cp2_g4

0x36f8,	// (0x00010913) bg_popup_preview_window_pane_ParamLimits

0x36f8,	// (0x00010913) bg_popup_preview_window_pane

0x9e81,	// (0x0001709c) popup_preview_text_window_t1_ParamLimits

0x9e81,	// (0x0001709c) popup_preview_text_window_t1

0x9e9f,	// (0x000170ba) popup_preview_text_window_t2_ParamLimits

0x9e9f,	// (0x000170ba) popup_preview_text_window_t2

0x9ee8,	// (0x00017103) popup_preview_text_window_t3_ParamLimits

0x9ee8,	// (0x00017103) popup_preview_text_window_t3

0x9f2d,	// (0x00017148) popup_preview_text_window_t4_ParamLimits

0x9f2d,	// (0x00017148) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x0001cb18) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x0001cb18) popup_preview_text_window_t

0x9fab,	// (0x000171c6) scroll_pane_cp11

0x8e7c,	// (0x00016097) bg_popup_preview_window_pane_g1

0x9e35,	// (0x00017050) bg_popup_preview_window_pane_g2

0x9e3f,	// (0x0001705a) bg_popup_preview_window_pane_g3

0x9e49,	// (0x00017064) bg_popup_preview_window_pane_g4

0x9e53,	// (0x0001706e) bg_popup_preview_window_pane_g5

0x9e5d,	// (0x00017078) bg_popup_preview_window_pane_g6

0x9e65,	// (0x00017080) bg_popup_preview_window_pane_g7

0x9e6d,	// (0x00017088) bg_popup_preview_window_pane_g8

0x5387,	// (0x000125a2) aid_popup_width_pane

0x86b0,	// (0x000158cb) popup_midp_note_alarm_window_ParamLimits

0x86b0,	// (0x000158cb) popup_midp_note_alarm_window

0x3bc4,	// (0x00010ddf) data_form_pane_ParamLimits

0x7ad9,	// (0x00014cf4) form_field_data_pane_g1

0x7ae3,	// (0x00014cfe) form_field_data_pane_t1_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_ParamLimits

0x3bde,	// (0x00010df9) data_form_wide_pane_ParamLimits

0x3bef,	// (0x00010e0a) form_field_data_wide_pane_g1

0x3c1b,	// (0x00010e36) form_field_data_wide_pane_t1_ParamLimits

0x38ad,	// (0x00010ac8) input_focus_pane_cp6_ParamLimits

0x7c0f,	// (0x00014e2a) input_popup_find_pane_g1_ParamLimits

0x7c0f,	// (0x00014e2a) input_popup_find_pane_g1

0x5917,	// (0x00012b32) aid_navi_side_left_pane

0x592c,	// (0x00012b47) aid_navi_side_right_pane

0x984a,	// (0x00016a65) bg_popup_window_pane_cp30_ParamLimits

0x984a,	// (0x00016a65) bg_popup_window_pane_cp30

0x98c4,	// (0x00016adf) popup_midp_note_alarm_window_g1_ParamLimits

0x98c4,	// (0x00016adf) popup_midp_note_alarm_window_g1

0x98f4,	// (0x00016b0f) popup_midp_note_alarm_window_t1_ParamLimits

0x98f4,	// (0x00016b0f) popup_midp_note_alarm_window_t1

0x9995,	// (0x00016bb0) popup_midp_note_alarm_window_t2_ParamLimits

0x9995,	// (0x00016bb0) popup_midp_note_alarm_window_t2

0x9a43,	// (0x00016c5e) popup_midp_note_alarm_window_t3_ParamLimits

0x9a43,	// (0x00016c5e) popup_midp_note_alarm_window_t3

0x9a75,	// (0x00016c90) popup_midp_note_alarm_window_t4_ParamLimits

0x9a75,	// (0x00016c90) popup_midp_note_alarm_window_t4

0x9a9b,	// (0x00016cb6) popup_midp_note_alarm_window_t5_ParamLimits

0x9a9b,	// (0x00016cb6) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x0001cab5) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x0001cab5) popup_midp_note_alarm_window_t

0x9b47,	// (0x00016d62) wait_bar_pane_cp1_ParamLimits

0x9b47,	// (0x00016d62) wait_bar_pane_cp1

0x33b4,	// (0x000105cf) wait_anim_pane_copy1

0x33b4,	// (0x000105cf) wait_border_pane_copy1

0x952f,	// (0x0001674a) wait_border_pane_g1_copy1

0x3c35,	// (0x00010e50) form_field_popup_pane_g1

0x7afd,	// (0x00014d18) form_field_popup_pane_t1_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_cp7_ParamLimits

0x3c3d,	// (0x00010e58) list_form_pane_ParamLimits

0x3c49,	// (0x00010e64) form_field_popup_wide_pane_g1

0x3c51,	// (0x00010e6c) form_field_popup_wide_pane_t1_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_cp8_ParamLimits

0x3c66,	// (0x00010e81) list_form_wide_pane_ParamLimits

0xa735,	// (0x00017950) aid_size_cell_graphic_pane

0x7b75,	// (0x00014d90) data_form_pane_t1_ParamLimits

0xa4f5,	// (0x00017710) data_form_wide_pane_t1_ParamLimits

0x89fb,	// (0x00015c16) bg_status_flat_pane

0x7340,	// (0x0001455b) title_pane_t1_ParamLimits

0x342a,	// (0x00010645) title_pane_t2_ParamLimits

0x3450,	// (0x0001066b) title_pane_t3_ParamLimits

0xf557,	// (0x0001c772) title_pane_t_ParamLimits

0x7ceb,	// (0x00014f06) level_1_signal_ParamLimits

0x7cf8,	// (0x00014f13) level_2_signal_ParamLimits

0x7d05,	// (0x00014f20) level_3_signal_ParamLimits

0x7d12,	// (0x00014f2d) level_4_signal_ParamLimits

0x7d1f,	// (0x00014f3a) level_5_signal_ParamLimits

0x7d2c,	// (0x00014f47) level_6_signal_ParamLimits

0x7d39,	// (0x00014f54) level_7_signal_ParamLimits

0x7ceb,	// (0x00014f06) level_1_battery_ParamLimits

0x7cf8,	// (0x00014f13) level_2_battery_ParamLimits

0x7d05,	// (0x00014f20) level_3_battery_ParamLimits

0x7d12,	// (0x00014f2d) level_4_battery_ParamLimits

0x7d1f,	// (0x00014f3a) level_5_battery_ParamLimits

0x7d2c,	// (0x00014f47) level_6_battery_ParamLimits

0x7d39,	// (0x00014f54) level_7_battery_ParamLimits

0x974f,	// (0x0001696a) bg_status_flat_pane_g1

0x9757,	// (0x00016972) bg_status_flat_pane_g2

0x975f,	// (0x0001697a) bg_status_flat_pane_g3

0x9767,	// (0x00016982) bg_status_flat_pane_g4

0x976f,	// (0x0001698a) bg_status_flat_pane_g5

0x9777,	// (0x00016992) bg_status_flat_pane_g6

0x977f,	// (0x0001699a) bg_status_flat_pane_g7

0x73b0,	// (0x000145cb) tabs_3_active_pane_t1_ParamLimits

0x73b0,	// (0x000145cb) tabs_3_passive_pane_t1_ParamLimits

0x73ca,	// (0x000145e5) tabs_4_active_pane_t1_ParamLimits

0x73ca,	// (0x000145e5) tabs_4_1_passive_pane_t1_ParamLimits

0x7c25,	// (0x00014e40) tabs_2_active_pane_t1_ParamLimits

0x7c25,	// (0x00014e40) tabs_2_passive_pane_t1_ParamLimits

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp4_ParamLimits

0x7c37,	// (0x00014e52) tabs_2_long_active_pane_t1_ParamLimits

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp4_ParamLimits

0x5eed,	// (0x00013108) list_single_midp_graphic_pane_t1_ParamLimits

0x3e3b,	// (0x00011056) bg_active_tab_pane_cp5_ParamLimits

0x7c56,	// (0x00014e71) tabs_3_long_active_pane_t1_ParamLimits

0x7c4a,	// (0x00014e65) bg_passive_tab_pane_cp5_ParamLimits

0x5eed,	// (0x00013108) list_single_midp_graphic_pane_t1

0x89fb,	// (0x00015c16) bg_status_flat_pane_ParamLimits

0x8ac6,	// (0x00015ce1) indicator_pane_cp2_ParamLimits

0x8ac6,	// (0x00015ce1) indicator_pane_cp2

0x8c09,	// (0x00015e24) navi_pane_srt_ParamLimits

0x8c09,	// (0x00015e24) navi_pane_srt

0x8c2d,	// (0x00015e48) popup_clock_digital_analogue_window_cp1

0x3561,	// (0x0001077c) indicator_pane_t1

0x49b6,	// (0x00011bd1) copy_highlight_pane

0x49b6,	// (0x00011bd1) cursor_graphics_pane

0x49b6,	// (0x00011bd1) graphic_within_text_pane

0x49b6,	// (0x00011bd1) link_highlight_pane

0x9f6e,	// (0x00017189) popup_preview_text_window_t5_ParamLimits

0x9f6e,	// (0x00017189) popup_preview_text_window_t5

0x80a3,	// (0x000152be) cursor_digital_pane

0x80a3,	// (0x000152be) cursor_primary_pane

0x80b4,	// (0x000152cf) cursor_primary_small_pane

0x80bc,	// (0x000152d7) cursor_secondary_pane

0x80c4,	// (0x000152df) cursor_title_pane

0x80a3,	// (0x000152be) link_highlight_digital_pane

0x80ab,	// (0x000152c6) link_highlight_primary_pane

0x80b4,	// (0x000152cf) link_highlight_primary_small_pane

0x80bc,	// (0x000152d7) link_highlight_secondary_pane

0x80c4,	// (0x000152df) link_highlight_title_pane

0x80a3,	// (0x000152be) copy_highlight_digital_pane

0x80a3,	// (0x000152be) copy_highlight_primary_pane

0x80b4,	// (0x000152cf) copy_highlight_primary_small_pane

0x80bc,	// (0x000152d7) copy_highlight_secondary_pane

0x80c4,	// (0x000152df) copy_highlight_title_pane

0x80bc,	// (0x000152d7) graphic_text_digital_pane

0x97ed,	// (0x00016a08) graphic_text_primary_pane

0x97f6,	// (0x00016a11) graphic_text_primary_small_pane

0x80b4,	// (0x000152cf) graphic_text_secondary_pane

0x80a3,	// (0x000152be) graphic_text_title_pane

0x80cc,	// (0x000152e7) cursor_primary_pane_g1

0x97df,	// (0x000169fa) cursor_text_primary_t1

0x97c7,	// (0x000169e2) cursor_primary_small_pane_g1

0x97d1,	// (0x000169ec) cursor_text_primary_small_t1

0x97af,	// (0x000169ca) cursor_primary_small_pane_g1_copy1

0x97b9,	// (0x000169d4) cursor_text_primary_small_t1_copy1

0x9797,	// (0x000169b2) cursor_text_title_t1

0x97a5,	// (0x000169c0) cursor_title_pane_g1

0x80cc,	// (0x000152e7) cursor_digital_pane_g1

0x80d6,	// (0x000152f1) cursor_text_digital_t1

0x80e4,	// (0x000152ff) link_highlight_primary_pane_g1

0x9740,	// (0x0001695b) link_highlight_primary_pane_t1

0x80e4,	// (0x000152ff) link_highlight_primary_small_pane_g1

0x80ec,	// (0x00015307) link_highlight_primary_small_pane_t1

0x80fb,	// (0x00015316) link_highlight_secondary_pane_g1

0x8103,	// (0x0001531e) link_highlight_secondary_pane_t1

0x96b4,	// (0x000168cf) link_highlight_title_pane_g1

0x96bc,	// (0x000168d7) link_highlight_title_pane_t1

0x969d,	// (0x000168b8) link_highlight_digital_pane_g1

0x96a5,	// (0x000168c0) link_highlight_digital_pane_t1

0x9565,	// (0x00016780) copy_highlight_primary_pane_g1

0x957c,	// (0x00016797) copy_highlight_primary_pane_t1

0x9565,	// (0x00016780) copy_highlight_primary_small_pane_g1

0x956d,	// (0x00016788) copy_highlight_primary_small_pane_t1

0x8112,	// (0x0001532d) copy_highlight_secondary_pane_g1

0x811a,	// (0x00015335) copy_highlight_secondary_pane_t1

0x954e,	// (0x00016769) copy_highlight_title_pane_g1

0x9556,	// (0x00016771) copy_highlight_title_pane_t1

0x9565,	// (0x00016780) copy_highlight_digital_pane_g1

0xa905,	// (0x00017b20) copy_highlight_digital_pane_t1

0xa859,	// (0x00017a74) graphic_text_primary_pane_g1

0xa8e9,	// (0x00017b04) graphic_text_primary_pane_t1

0xa8f7,	// (0x00017b12) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x0001cbe4) graphic_text_primary_pane_t

0xa8c5,	// (0x00017ae0) graphic_text_primary_small_pane_g1

0xa8cd,	// (0x00017ae8) graphic_text_primary_small_pane_t1

0xa8db,	// (0x00017af6) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x0001cbdf) graphic_text_primary_small_pane_t

0xa8a1,	// (0x00017abc) graphic_text_secondary_pane_g1

0xa8a9,	// (0x00017ac4) graphic_text_secondary_pane_t1

0xa8b7,	// (0x00017ad2) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x0001cbda) graphic_text_secondary_pane_t

0xa87d,	// (0x00017a98) graphic_text_title_pane_g1

0xa885,	// (0x00017aa0) graphic_text_title_pane_t1

0xa893,	// (0x00017aae) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x0001cbd5) graphic_text_title_pane_t

0xa859,	// (0x00017a74) graphic_text_digital_pane_g1

0xa861,	// (0x00017a7c) graphic_text_digital_pane_t1

0xa86f,	// (0x00017a8a) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x0001cbd0) graphic_text_digital_pane_t

0x347a,	// (0x00010695) navi_icon_pane_srt_ParamLimits

0x347a,	// (0x00010695) navi_icon_pane_srt

0x33b4,	// (0x000105cf) navi_midp_pane_srt

0x33b4,	// (0x000105cf) navi_navi_pane_srt

0x347a,	// (0x00010695) navi_text_pane_srt_ParamLimits

0x347a,	// (0x00010695) navi_text_pane_srt

0xa824,	// (0x00017a3f) navi_navi_icon_text_pane_srt

0xa82c,	// (0x00017a47) navi_navi_pane_srt_g1_ParamLimits

0xa82c,	// (0x00017a47) navi_navi_pane_srt_g1

0xa83e,	// (0x00017a59) navi_navi_pane_srt_g2_ParamLimits

0xa83e,	// (0x00017a59) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x0001cbcb) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x0001cbcb) navi_navi_pane_srt_g

0xa850,	// (0x00017a6b) navi_navi_tabs_pane_srt

0xa824,	// (0x00017a3f) navi_navi_text_pane_srt

0xa824,	// (0x00017a3f) navi_navi_volume_pane_srt

0xa815,	// (0x00017a30) navi_navi_text_pane_srt_t1

0x6289,	// (0x000134a4) navi_navi_volume_pane_srt_g1

0x6291,	// (0x000134ac) volume_small_pane_srt_ParamLimits

0x6291,	// (0x000134ac) volume_small_pane_srt

0x5bfe,	// (0x00012e19) volume_small_pane_srt_g1_ParamLimits

0x5bfe,	// (0x00012e19) volume_small_pane_srt_g1

0x5c0e,	// (0x00012e29) volume_small_pane_srt_g2_ParamLimits

0x5c0e,	// (0x00012e29) volume_small_pane_srt_g2

0x5c1f,	// (0x00012e3a) volume_small_pane_srt_g3_ParamLimits

0x5c1f,	// (0x00012e3a) volume_small_pane_srt_g3

0x5c30,	// (0x00012e4b) volume_small_pane_srt_g4_ParamLimits

0x5c30,	// (0x00012e4b) volume_small_pane_srt_g4

0x5c41,	// (0x00012e5c) volume_small_pane_srt_g5_ParamLimits

0x5c41,	// (0x00012e5c) volume_small_pane_srt_g5

0x5c52,	// (0x00012e6d) volume_small_pane_srt_g6_ParamLimits

0x5c52,	// (0x00012e6d) volume_small_pane_srt_g6

0x5c63,	// (0x00012e7e) volume_small_pane_srt_g7_ParamLimits

0x5c63,	// (0x00012e7e) volume_small_pane_srt_g7

0x5c74,	// (0x00012e8f) volume_small_pane_srt_g8_ParamLimits

0x5c74,	// (0x00012e8f) volume_small_pane_srt_g8

0x5c85,	// (0x00012ea0) volume_small_pane_srt_g9_ParamLimits

0x5c85,	// (0x00012ea0) volume_small_pane_srt_g9

0x5c96,	// (0x00012eb1) volume_small_pane_srt_g10_ParamLimits

0x5c96,	// (0x00012eb1) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001c973) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001c973) volume_small_pane_srt_g

0x37ad,	// (0x000109c8) query_popup_data_pane_cp2

0xa7fb,	// (0x00017a16) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa7fb,	// (0x00017a16) navi_navi_icon_text_pane_srt_t1

0x97ed,	// (0x00016a08) navi_tabs_2_long_pane_srt

0x97ed,	// (0x00016a08) navi_tabs_2_pane_srt

0x97ed,	// (0x00016a08) navi_tabs_3_long_pane_srt

0x97ed,	// (0x00016a08) navi_tabs_3_pane_srt

0x97ed,	// (0x00016a08) navi_tabs_4_pane_srt

0x6269,	// (0x00013484) tabs_2_active_pane_srt_ParamLimits

0x6269,	// (0x00013484) tabs_2_active_pane_srt

0x6279,	// (0x00013494) tabs_2_passive_pane_srt_ParamLimits

0x6279,	// (0x00013494) tabs_2_passive_pane_srt

0x8305,	// (0x00015520) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8305,	// (0x00015520) bg_passive_tab_pane_cp1_srt

0xa7c7,	// (0x000179e2) bg_passive_tab_pane_g1_cp1_srt

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp1_srt

0xa7d0,	// (0x000179eb) bg_passive_tab_pane_g3_cp1_srt

0x347a,	// (0x00010695) bg_active_tab_pane_cp1_srt_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp1_srt

0xa7d9,	// (0x000179f4) tabs_2_active_pane_srt_g1

0xa7e1,	// (0x000179fc) tabs_2_active_pane_srt_t1_ParamLimits

0xa7e1,	// (0x000179fc) tabs_2_active_pane_srt_t1

0xa7c7,	// (0x000179e2) bg_active_tab_pane_g1_cp1_srt

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp1_srt

0xa7d0,	// (0x000179eb) bg_active_tab_pane_g3_cp1_srt

0x6236,	// (0x00013451) tabs_3_active_pane_srt_ParamLimits

0x6236,	// (0x00013451) tabs_3_active_pane_srt

0x6247,	// (0x00013462) tabs_3_passive_pane_cp_srt_ParamLimits

0x6247,	// (0x00013462) tabs_3_passive_pane_cp_srt

0x6258,	// (0x00013473) tabs_3_passive_pane_srt_ParamLimits

0x6258,	// (0x00013473) tabs_3_passive_pane_srt

0x8305,	// (0x00015520) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8305,	// (0x00015520) bg_passive_tab_pane_cp2_srt

0x8129,	// (0x00015344) bg_passive_tab_pane_g1_cp2_srt

0x45c7,	// (0x000117e2) bg_passive_tab_pane_g2_cp2_srt

0x8132,	// (0x0001534d) bg_passive_tab_pane_g3_cp2_srt

0x347a,	// (0x00010695) bg_active_tab_pane_cp2_srt_ParamLimits

0x347a,	// (0x00010695) bg_active_tab_pane_cp2_srt

0xa7ad,	// (0x000179c8) tabs_3_active_pane_srt_g1

0xa7b5,	// (0x000179d0) tabs_3_active_pane_srt_t1_ParamLimits

0xa7b5,	// (0x000179d0) tabs_3_active_pane_srt_t1

0x8129,	// (0x00015344) bg_active_tab_pane_g1_cp2_srt

0x45c7,	// (0x000117e2) bg_active_tab_pane_g2_cp2_srt

0x8132,	// (0x0001534d) bg_active_tab_pane_g3_cp2_srt

0x61ee,	// (0x00013409) tabs_4_active_pane_srt_ParamLimits

0x61ee,	// (0x00013409) tabs_4_active_pane_srt

0x6200,	// (0x0001341b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6200,	// (0x0001341b) tabs_4_passive_pane_cp2_srt

0x8283,	// (0x0001549e) aid_size_cell_toolbar

0x7c4a,	// (0x00014e65) main_idle_act_pane_ParamLimits

0x84d6,	// (0x000156f1) popup_large_graphic_colour_window_ParamLimits

0x887d,	// (0x00015a98) popup_toolbar_window_ParamLimits

0x887d,	// (0x00015a98) popup_toolbar_window

0xa56f,	// (0x0001778a) list_single_graphic_2heading_pane_ParamLimits

0xa56f,	// (0x0001778a) list_single_graphic_2heading_pane

0x4119,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane

0x412b,	// (0x00011346) aid_size_cell_apps_grid_prt_pane

0x8305,	// (0x00015520) bg_wml_button_pane_cp1_ParamLimits

0x8305,	// (0x00015520) bg_wml_button_pane_cp1

0x91c5,	// (0x000163e0) form_midp_field_text_pane_t1_ParamLimits

0x8fa2,	// (0x000161bd) input_focus_pane_cp050_ParamLimits

0x91f0,	// (0x0001640b) list_midp_form_text_pane_ParamLimits

0x91a2,	// (0x000163bd) input_focus_pane_cp051_ParamLimits

0x91b6,	// (0x000163d1) list_midp_choice_pane_ParamLimits

0x905b,	// (0x00016276) list_single_2graphic_pane_cp3_ParamLimits

0x905b,	// (0x00016276) list_single_2graphic_pane_cp3

0x9074,	// (0x0001628f) list_single_midp_graphic_pane_ParamLimits

0x9074,	// (0x0001628f) list_single_midp_graphic_pane

0x5df1,	// (0x0001300c) list_single_graphic_2heading_pane_g1_ParamLimits

0x5df1,	// (0x0001300c) list_single_graphic_2heading_pane_g1

0x5dfd,	// (0x00013018) list_single_graphic_2heading_pane_g4_ParamLimits

0x5dfd,	// (0x00013018) list_single_graphic_2heading_pane_g4

0x5e09,	// (0x00013024) list_single_graphic_2heading_pane_g5_ParamLimits

0x5e09,	// (0x00013024) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001c9c6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001c9c6) list_single_graphic_2heading_pane_g

0x5e15,	// (0x00013030) list_single_graphic_2heading_pane_t1_ParamLimits

0x5e15,	// (0x00013030) list_single_graphic_2heading_pane_t1

0x5e29,	// (0x00013044) list_single_graphic_2heading_pane_t2_ParamLimits

0x5e29,	// (0x00013044) list_single_graphic_2heading_pane_t2

0x5e45,	// (0x00013060) list_single_graphic_2heading_pane_t3_ParamLimits

0x5e45,	// (0x00013060) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001c9cd) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001c9cd) list_single_graphic_2heading_pane_t

0x8d8c,	// (0x00015fa7) bg_popup_sub_pane_cp2

0x8db6,	// (0x00015fd1) grid_toobar_pane

0x5e5d,	// (0x00013078) cell_toolbar_pane_ParamLimits

0x5e5d,	// (0x00013078) cell_toolbar_pane

0x8e20,	// (0x0001603b) cell_toolbar_pane_g1_ParamLimits

0x8e20,	// (0x0001603b) cell_toolbar_pane_g1

0x8e34,	// (0x0001604f) cell_toolbar_pane_g2_ParamLimits

0x8e34,	// (0x0001604f) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001c9db) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001c9db) cell_toolbar_pane_g

0x8e56,	// (0x00016071) grid_highlight_pane_cp2_ParamLimits

0x8e56,	// (0x00016071) grid_highlight_pane_cp2

0x8e70,	// (0x0001608b) toolbar_button_pane

0x8e7c,	// (0x00016097) toolbar_button_pane_g1

0x8e84,	// (0x0001609f) toolbar_button_pane_g2

0x8e8c,	// (0x000160a7) toolbar_button_pane_g3

0x8e94,	// (0x000160af) toolbar_button_pane_g4

0x8e9c,	// (0x000160b7) toolbar_button_pane_g5

0x8ea4,	// (0x000160bf) toolbar_button_pane_g6

0x8eac,	// (0x000160c7) toolbar_button_pane_g7

0x8eb4,	// (0x000160cf) toolbar_button_pane_g8

0x8ebc,	// (0x000160d7) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001c9e0) toolbar_button_pane_g

0x5e95,	// (0x000130b0) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5e95,	// (0x000130b0) list_single_2graphic_pane_g1_cp3

0x5ea1,	// (0x000130bc) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5ea1,	// (0x000130bc) list_single_2graphic_pane_g2_cp3

0x5eb2,	// (0x000130cd) list_single_2graphic_pane_g3_cp3

0x5eba,	// (0x000130d5) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5eba,	// (0x000130d5) list_single_2graphic_pane_g4_cp3

0x5ec6,	// (0x000130e1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5ec6,	// (0x000130e1) list_single_2graphic_pane_t1_cp3

0x5ee1,	// (0x000130fc) list_single_midp_graphic_pane_g2_ParamLimits

0x5ee1,	// (0x000130fc) list_single_midp_graphic_pane_g2

0x828b,	// (0x000154a6) aid_zoom_text_primary

0x8293,	// (0x000154ae) aid_zoom_text_secondary

0x81e3,	// (0x000153fe) status_small_pane_g7_ParamLimits

0x81e3,	// (0x000153fe) status_small_pane_g7

0x8206,	// (0x00015421) status_small_pane_t1_ParamLimits

0x732f,	// (0x0001454a) title_pane_g2

0x0003,

0xf54e,	// (0x0001c769) title_pane_g

0x74f1,	// (0x0001470c) aid_size_cell_colour_1_pane_ParamLimits

0x74f1,	// (0x0001470c) aid_size_cell_colour_1_pane

0x7505,	// (0x00014720) aid_size_cell_colour_2_pane_ParamLimits

0x7505,	// (0x00014720) aid_size_cell_colour_2_pane

0x7519,	// (0x00014734) aid_size_cell_colour_3_pane_ParamLimits

0x7519,	// (0x00014734) aid_size_cell_colour_3_pane

0x752d,	// (0x00014748) aid_size_cell_colour_4_pane_ParamLimits

0x752d,	// (0x00014748) aid_size_cell_colour_4_pane

0x5853,	// (0x00012a6e) title_pane_stacon_g1_ParamLimits

0x5853,	// (0x00012a6e) title_pane_stacon_g1

0x95d3,	// (0x000167ee) popup_note_wait_window_g3_ParamLimits

0x95d3,	// (0x000167ee) popup_note_wait_window_g3

0x964a,	// (0x00016865) popup_note_wait_window_t5_ParamLimits

0x964a,	// (0x00016865) popup_note_wait_window_t5

0x33b4,	// (0x000105cf) main_feb_china_hwr_fs_writing_pane

0x839d,	// (0x000155b8) popup_feb_china_hwr_fs_window_ParamLimits

0x839d,	// (0x000155b8) popup_feb_china_hwr_fs_window

0x5f03,	// (0x0001311e) aid_size_cell_hwr_fs_ParamLimits

0x5f03,	// (0x0001311e) aid_size_cell_hwr_fs

0x8fa2,	// (0x000161bd) bg_popup_sub_pane_cp3_ParamLimits

0x8fa2,	// (0x000161bd) bg_popup_sub_pane_cp3

0x5f18,	// (0x00013133) grid_hwr_fs_pane_ParamLimits

0x5f18,	// (0x00013133) grid_hwr_fs_pane

0x5f30,	// (0x0001314b) linegrid_hwr_fs_pane_ParamLimits

0x5f30,	// (0x0001314b) linegrid_hwr_fs_pane

0x5f40,	// (0x0001315b) cell_hwr_fs_pane_ParamLimits

0x5f40,	// (0x0001315b) cell_hwr_fs_pane

0x8fae,	// (0x000161c9) linegrid_hwr_fs_pane_g1_ParamLimits

0x8fae,	// (0x000161c9) linegrid_hwr_fs_pane_g1

0x8fba,	// (0x000161d5) linegrid_hwr_fs_pane_g2_ParamLimits

0x8fba,	// (0x000161d5) linegrid_hwr_fs_pane_g2

0x8fcc,	// (0x000161e7) linegrid_hwr_fs_pane_g3_ParamLimits

0x8fcc,	// (0x000161e7) linegrid_hwr_fs_pane_g3

0x5f64,	// (0x0001317f) linegrid_hwr_fs_pane_g4_ParamLimits

0x5f64,	// (0x0001317f) linegrid_hwr_fs_pane_g4

0x5f82,	// (0x0001319d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5f82,	// (0x0001319d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x0001ca0b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x0001ca0b) linegrid_hwr_fs_pane_g

0x8fd8,	// (0x000161f3) cell_hwr_fs_pane_g1_ParamLimits

0x8fd8,	// (0x000161f3) cell_hwr_fs_pane_g1

0x8cc3,	// (0x00015ede) cell_hwr_fs_pane_g2_ParamLimits

0x8cc3,	// (0x00015ede) cell_hwr_fs_pane_g2

0x8fee,	// (0x00016209) cell_hwr_fs_pane_g3_ParamLimits

0x8fee,	// (0x00016209) cell_hwr_fs_pane_g3

0x8ffb,	// (0x00016216) cell_hwr_fs_pane_g4_ParamLimits

0x8ffb,	// (0x00016216) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0001ca16) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0001ca16) cell_hwr_fs_pane_g

0x5f98,	// (0x000131b3) cell_hwr_fs_pane_t1

0x33b4,	// (0x000105cf) grid_highlight_pane_cp6

0x33b4,	// (0x000105cf) main_idle_act2_pane

0x3d80,	// (0x00010f9b) aid_inside_area_popup_secondary

0x9c83,	// (0x00016e9e) aid_inside_area_window_primary_ParamLimits

0x9c83,	// (0x00016e9e) aid_inside_area_window_primary

0xa914,	// (0x00017b2f) ai2_news_ticker_pane

0xa91c,	// (0x00017b37) aid_size_cell_ai1_link_ParamLimits

0xa91c,	// (0x00017b37) aid_size_cell_ai1_link

0xa936,	// (0x00017b51) popup_ai2_data_window_ParamLimits

0xa936,	// (0x00017b51) popup_ai2_data_window

0xa954,	// (0x00017b6f) popup_ai2_link_window_ParamLimits

0xa954,	// (0x00017b6f) popup_ai2_link_window

0x8fa2,	// (0x000161bd) bg_popup_sub_pane_cp4_ParamLimits

0x8fa2,	// (0x000161bd) bg_popup_sub_pane_cp4

0xa96a,	// (0x00017b85) grid_ai2_link_pane_ParamLimits

0xa96a,	// (0x00017b85) grid_ai2_link_pane

0xa981,	// (0x00017b9c) popup_ai2_link_window_g1_ParamLimits

0xa981,	// (0x00017b9c) popup_ai2_link_window_g1

0xa98d,	// (0x00017ba8) popup_ai2_link_window_g2_ParamLimits

0xa98d,	// (0x00017ba8) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x0001cbe9) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x0001cbe9) popup_ai2_link_window_g

0xa99e,	// (0x00017bb9) ai2_mp_button_pane

0xa9a6,	// (0x00017bc1) ai2_mp_volume_pane

0x91a2,	// (0x000163bd) bg_popup_sub_pane_cp5_ParamLimits

0x91a2,	// (0x000163bd) bg_popup_sub_pane_cp5

0xa9ae,	// (0x00017bc9) heading_ai2_gene_pane_ParamLimits

0xa9ae,	// (0x00017bc9) heading_ai2_gene_pane

0xa9ba,	// (0x00017bd5) list_ai2_gene_pane_ParamLimits

0xa9ba,	// (0x00017bd5) list_ai2_gene_pane

0xaa02,	// (0x00017c1d) cell_ai2_link_pane_ParamLimits

0xaa02,	// (0x00017c1d) cell_ai2_link_pane

0xaa18,	// (0x00017c33) cell_ai2_link_pane_g1

0x33b4,	// (0x000105cf) grid_highlight_pane_cp7

0x62a6,	// (0x000134c1) ai2_mp_volume_pane_g1

0xaaeb,	// (0x00017d06) ai2_mp_volume_pane_g2

0xaa60,	// (0x00017c7b) list_ai2_gene_pane_t1

0xaaf3,	// (0x00017d0e) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x0001cc02) ai2_mp_volume_pane_g

0x62ae,	// (0x000134c9) volume_small_pane_cp3

0xaafb,	// (0x00017d16) aid_size_cell_ai2_button

0xab03,	// (0x00017d1e) grid_ai2_button_pane

0xab0c,	// (0x00017d27) cell_ai2_button_pane_ParamLimits

0xab0c,	// (0x00017d27) cell_ai2_button_pane

0x323b,	// (0x00010456) cell_ai2_button_pane_g1

0x33b4,	// (0x000105cf) grid_highlight_pane_cp8

0xaaab,	// (0x00017cc6) ai2_gene_pane_t1_ParamLimits

0xaaab,	// (0x00017cc6) ai2_gene_pane_t1

0x8279,	// (0x00015494) aid_height_parent_landscape

0xa33d,	// (0x00017558) aid_height_set_list

0xa34e,	// (0x00017569) aid_size_parent

0xa735,	// (0x00017950) aid_size_cell_graphic_pane_ParamLimits

0xa9ca,	// (0x00017be5) popup_ai2_data_window_g1_ParamLimits

0xa9ca,	// (0x00017be5) popup_ai2_data_window_g1

0xa9d6,	// (0x00017bf1) ai2_news_ticker_pane_g1

0xa9de,	// (0x00017bf9) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x0001cbee) ai2_news_ticker_pane_g

0xa9e6,	// (0x00017c01) ai2_news_ticker_pane_t1

0xa9f4,	// (0x00017c0f) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x0001cbf3) ai2_news_ticker_pane_t

0xaa21,	// (0x00017c3c) heading_ai2_gene_pane_g1

0xaa29,	// (0x00017c44) heading_ai2_gene_pane_t1_ParamLimits

0xaa29,	// (0x00017c44) heading_ai2_gene_pane_t1

0xaa3e,	// (0x00017c59) list_highlight_pane_cp6

0xaa46,	// (0x00017c61) ai2_gene_pane_ParamLimits

0xaa46,	// (0x00017c61) ai2_gene_pane

0xaa6e,	// (0x00017c89) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x0001cbf8) list_ai2_gene_pane_t

0xaa7c,	// (0x00017c97) list_highlight_pane_cp8_ParamLimits

0xaa7c,	// (0x00017c97) list_highlight_pane_cp8

0xaa8d,	// (0x00017ca8) ai2_gene_pane_g1_ParamLimits

0xaa8d,	// (0x00017ca8) ai2_gene_pane_g1

0xaa9f,	// (0x00017cba) ai2_gene_pane_g2_ParamLimits

0xaa9f,	// (0x00017cba) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x0001cbfd) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x0001cbfd) ai2_gene_pane_g

0x3ac8,	// (0x00010ce3) scroll_pane_cp12

0x5db0,	// (0x00012fcb) control_pane_t3_ParamLimits

0x5db0,	// (0x00012fcb) control_pane_t3

0x81f7,	// (0x00015412) status_small_pane_g8_ParamLimits

0x81f7,	// (0x00015412) status_small_pane_g8

0x849b,	// (0x000156b6) popup_find_window_ParamLimits

0x86c6,	// (0x000158e1) popup_note_image_window_ParamLimits

0x8df2,	// (0x0001600d) list_double2_graphic_pane_vc_g1_ParamLimits

0x8df2,	// (0x0001600d) list_double2_graphic_pane_vc_g1

0x4927,	// (0x00011b42) list_double2_graphic_pane_vc_g2_ParamLimits

0x4927,	// (0x00011b42) list_double2_graphic_pane_vc_g2

0x8dfe,	// (0x00016019) list_double2_graphic_pane_vc_g3_ParamLimits

0x8dfe,	// (0x00016019) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001c9d4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c9d4) list_double2_graphic_pane_vc_g

0x8e0a,	// (0x00016025) list_double2_graphic_pane_vc_t1_ParamLimits

0x8e0a,	// (0x00016025) list_double2_graphic_pane_vc_t1

0x4927,	// (0x00011b42) list_single_heading_pane_vc_g1_ParamLimits

0x4927,	// (0x00011b42) list_single_heading_pane_vc_g1

0x8dfe,	// (0x00016019) list_single_heading_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00016019) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c9f5) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c9f5) list_single_heading_pane_vc_g

0x8ec4,	// (0x000160df) list_single_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x000160df) list_single_heading_pane_vc_t1

0x8edc,	// (0x000160f7) list_single_heading_pane_vc_t2_ParamLimits

0x8edc,	// (0x000160f7) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x0001c9fa) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x0001c9fa) list_single_heading_pane_vc_t

0x8eee,	// (0x00016109) list_setting_number_pane_vc_g1_ParamLimits

0x8eee,	// (0x00016109) list_setting_number_pane_vc_g1

0x8efa,	// (0x00016115) list_setting_number_pane_vc_g2_ParamLimits

0x8efa,	// (0x00016115) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c9ff) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c9ff) list_setting_number_pane_vc_g

0x8f06,	// (0x00016121) list_setting_number_pane_vc_t1_ParamLimits

0x8f06,	// (0x00016121) list_setting_number_pane_vc_t1

0x8f1a,	// (0x00016135) list_setting_number_pane_vc_t2_ParamLimits

0x8f1a,	// (0x00016135) list_setting_number_pane_vc_t2

0x8f36,	// (0x00016151) list_setting_number_pane_vc_t3_ParamLimits

0x8f36,	// (0x00016151) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0001ca04) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0001ca04) list_setting_number_pane_vc_t

0x8f64,	// (0x0001617f) set_value_pane_vc_ParamLimits

0x8f64,	// (0x0001617f) set_value_pane_vc

0xa56f,	// (0x0001778a) list_double2_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double2_graphic_pane_vc

0xa56f,	// (0x0001778a) list_double2_large_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double2_large_graphic_pane_vc

0xa56f,	// (0x0001778a) list_double2_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double2_pane_vc

0xa56f,	// (0x0001778a) list_double_graphic_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_graphic_heading_pane_vc

0xa56f,	// (0x0001778a) list_double_graphic_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_graphic_pane_vc

0xa56f,	// (0x0001778a) list_double_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_heading_pane_vc

0xa583,	// (0x0001779e) list_double_large_graphic_pane_vc_ParamLimits

0xa583,	// (0x0001779e) list_double_large_graphic_pane_vc

0xa56f,	// (0x0001778a) list_double_number_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_number_pane_vc

0xa56f,	// (0x0001778a) list_double_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_pane_vc

0xa56f,	// (0x0001778a) list_double_time_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_double_time_pane_vc

0xa56f,	// (0x0001778a) list_setting_number_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_setting_number_pane_vc

0xa56f,	// (0x0001778a) list_setting_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_setting_pane_vc

0xa56f,	// (0x0001778a) list_single_graphic_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_single_graphic_heading_pane_vc

0xa56f,	// (0x0001778a) list_single_heading_pane_vc_ParamLimits

0xa56f,	// (0x0001778a) list_single_heading_pane_vc

0xa5a5,	// (0x000177c0) list_single_number_heading_pane_vc_ParamLimits

0xa5a5,	// (0x000177c0) list_single_number_heading_pane_vc

0x8df2,	// (0x0001600d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8df2,	// (0x0001600d) list_double_graphic_heading_pane_vc_g1

0xab3f,	// (0x00017d5a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xab3f,	// (0x00017d5a) list_double_graphic_heading_pane_vc_g2

0xab4b,	// (0x00017d66) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xab4b,	// (0x00017d66) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x0001cc09) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x0001cc09) list_double_graphic_heading_pane_vc_g

0xab57,	// (0x00017d72) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xab57,	// (0x00017d72) list_double_graphic_heading_pane_vc_t1

0xab6d,	// (0x00017d88) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xab6d,	// (0x00017d88) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x0001cc10) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x0001cc10) list_double_graphic_heading_pane_vc_t

0x8eee,	// (0x00016109) list_setting_pane_vc_g1_ParamLimits

0x8eee,	// (0x00016109) list_setting_pane_vc_g1

0x8efa,	// (0x00016115) list_setting_pane_vc_g2_ParamLimits

0x8efa,	// (0x00016115) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x0001c9ff) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x0001c9ff) list_setting_pane_vc_g

0xadb3,	// (0x00017fce) list_setting_pane_vc_t1_ParamLimits

0xadb3,	// (0x00017fce) list_setting_pane_vc_t1

0xadcf,	// (0x00017fea) list_setting_pane_vc_t2_ParamLimits

0xadcf,	// (0x00017fea) list_setting_pane_vc_t2

0x0001,

0xfa23,	// (0x0001cc3e) list_setting_pane_vc_t_ParamLimits

0xfa23,	// (0x0001cc3e) list_setting_pane_vc_t

0x8f64,	// (0x0001617f) set_value_pane_cp_vc_ParamLimits

0x8f64,	// (0x0001617f) set_value_pane_cp_vc

0x4927,	// (0x00011b42) list_single_number_heading_pane_vc_g1_ParamLimits

0x4927,	// (0x00011b42) list_single_number_heading_pane_vc_g1

0x8dfe,	// (0x00016019) list_single_number_heading_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00016019) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c9f5) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c9f5) list_single_number_heading_pane_vc_g

0x8ec4,	// (0x000160df) list_single_number_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x000160df) list_single_number_heading_pane_vc_t1

0xadeb,	// (0x00018006) list_single_number_heading_pane_vc_t2_ParamLimits

0xadeb,	// (0x00018006) list_single_number_heading_pane_vc_t2

0xadfd,	// (0x00018018) list_single_number_heading_pane_vc_t3_ParamLimits

0xadfd,	// (0x00018018) list_single_number_heading_pane_vc_t3

0x0002,

0xfa28,	// (0x0001cc43) list_single_number_heading_pane_vc_t_ParamLimits

0xfa28,	// (0x0001cc43) list_single_number_heading_pane_vc_t

0x8df2,	// (0x0001600d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8df2,	// (0x0001600d) list_single_graphic_heading_pane_vc_g1

0x4927,	// (0x00011b42) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4927,	// (0x00011b42) list_single_graphic_heading_pane_vc_g4

0x8dfe,	// (0x00016019) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x8dfe,	// (0x00016019) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001c9d4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001c9d4) list_single_graphic_heading_pane_vc_g

0x8ec4,	// (0x000160df) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8ec4,	// (0x000160df) list_single_graphic_heading_pane_vc_t1

0xae0f,	// (0x0001802a) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xae0f,	// (0x0001802a) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2f,	// (0x0001cc4a) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2f,	// (0x0001cc4a) list_single_graphic_heading_pane_vc_t

0x4927,	// (0x00011b42) list_double2_pane_vc_g1_ParamLimits

0x4927,	// (0x00011b42) list_double2_pane_vc_g1

0x8dfe,	// (0x00016019) list_double2_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00016019) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c9f5) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c9f5) list_double2_pane_vc_g

0xae21,	// (0x0001803c) list_double2_pane_vc_t1_ParamLimits

0xae21,	// (0x0001803c) list_double2_pane_vc_t1

0xae37,	// (0x00018052) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xae37,	// (0x00018052) list_double2_large_graphic_pane_vc_g1

0x4927,	// (0x00011b42) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4927,	// (0x00011b42) list_double2_large_graphic_pane_vc_g2

0x8dfe,	// (0x00016019) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x8dfe,	// (0x00016019) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa34,	// (0x0001cc4f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa34,	// (0x0001cc4f) list_double2_large_graphic_pane_vc_g

0xae43,	// (0x0001805e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xae43,	// (0x0001805e) list_double2_large_graphic_pane_vc_t1

0xae59,	// (0x00018074) list_double_time_pane_vc_g1_ParamLimits

0xae59,	// (0x00018074) list_double_time_pane_vc_g1

0xae65,	// (0x00018080) list_double_time_pane_vc_g2_ParamLimits

0xae65,	// (0x00018080) list_double_time_pane_vc_g2

0x0001,

0xfa3b,	// (0x0001cc56) list_double_time_pane_vc_g_ParamLimits

0xfa3b,	// (0x0001cc56) list_double_time_pane_vc_g

0xae71,	// (0x0001808c) list_double_time_pane_vc_t1_ParamLimits

0xae71,	// (0x0001808c) list_double_time_pane_vc_t1

0xaea1,	// (0x000180bc) list_double_time_pane_vc_t2_ParamLimits

0xaea1,	// (0x000180bc) list_double_time_pane_vc_t2

0xaeca,	// (0x000180e5) list_double_time_pane_vc_t3_ParamLimits

0xaeca,	// (0x000180e5) list_double_time_pane_vc_t3

0xaedc,	// (0x000180f7) list_double_time_pane_vc_t4_ParamLimits

0xaedc,	// (0x000180f7) list_double_time_pane_vc_t4

0x0003,

0xfa40,	// (0x0001cc5b) list_double_time_pane_vc_t_ParamLimits

0xfa40,	// (0x0001cc5b) list_double_time_pane_vc_t

0x4927,	// (0x00011b42) list_double_pane_vc_g1_ParamLimits

0x4927,	// (0x00011b42) list_double_pane_vc_g1

0x8dfe,	// (0x00016019) list_double_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00016019) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c9f5) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c9f5) list_double_pane_vc_g

0xaf01,	// (0x0001811c) list_double_pane_vc_t1_ParamLimits

0xaf01,	// (0x0001811c) list_double_pane_vc_t1

0xaf15,	// (0x00018130) list_double_pane_vc_t2_ParamLimits

0xaf15,	// (0x00018130) list_double_pane_vc_t2

0x0001,

0xfa49,	// (0x0001cc64) list_double_pane_vc_t_ParamLimits

0xfa49,	// (0x0001cc64) list_double_pane_vc_t

0x4927,	// (0x00011b42) list_double_number_pane_vc_g1_ParamLimits

0x4927,	// (0x00011b42) list_double_number_pane_vc_g1

0x8dfe,	// (0x00016019) list_double_number_pane_vc_g2_ParamLimits

0x8dfe,	// (0x00016019) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x0001c9f5) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x0001c9f5) list_double_number_pane_vc_g

0xaf2b,	// (0x00018146) list_double_number_pane_vc_t1_ParamLimits

0xaf2b,	// (0x00018146) list_double_number_pane_vc_t1

0xaf3f,	// (0x0001815a) list_double_number_pane_vc_t2_ParamLimits

0xaf3f,	// (0x0001815a) list_double_number_pane_vc_t2

0xaf53,	// (0x0001816e) list_double_number_pane_vc_t3_ParamLimits

0xaf53,	// (0x0001816e) list_double_number_pane_vc_t3

0x0002,

0xfa4e,	// (0x0001cc69) list_double_number_pane_vc_t_ParamLimits

0xfa4e,	// (0x0001cc69) list_double_number_pane_vc_t

0xaf69,	// (0x00018184) list_double_large_graphic_pane_vc_g1_ParamLimits

0xaf69,	// (0x00018184) list_double_large_graphic_pane_vc_g1

0xaf91,	// (0x000181ac) list_double_large_graphic_pane_vc_g2_ParamLimits

0xaf91,	// (0x000181ac) list_double_large_graphic_pane_vc_g2

0xafa5,	// (0x000181c0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xafa5,	// (0x000181c0) list_double_large_graphic_pane_vc_g3

0xafb4,	// (0x000181cf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xafb4,	// (0x000181cf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa55,	// (0x0001cc70) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa55,	// (0x0001cc70) list_double_large_graphic_pane_vc_g

0xafc4,	// (0x000181df) list_double_large_graphic_pane_vc_t1_ParamLimits

0xafc4,	// (0x000181df) list_double_large_graphic_pane_vc_t1

0xafe6,	// (0x00018201) list_double_large_graphic_pane_vc_t2_ParamLimits

0xafe6,	// (0x00018201) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5e,	// (0x0001cc79) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001cc79) list_double_large_graphic_pane_vc_t

0xab3f,	// (0x00017d5a) list_double_heading_pane_vc_g1_ParamLimits

0xab3f,	// (0x00017d5a) list_double_heading_pane_vc_g1

0xab4b,	// (0x00017d66) list_double_heading_pane_vc_g2_ParamLimits

0xab4b,	// (0x00017d66) list_double_heading_pane_vc_g2

0x0001,

0xfa63,	// (0x0001cc7e) list_double_heading_pane_vc_g_ParamLimits

0xfa63,	// (0x0001cc7e) list_double_heading_pane_vc_g

0xb006,	// (0x00018221) list_double_heading_pane_vc_t1_ParamLimits

0xb006,	// (0x00018221) list_double_heading_pane_vc_t1

0x8ec4,	// (0x000160df) list_double_heading_pane_vc_t2_ParamLimits

0x8ec4,	// (0x000160df) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0001cc83) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0001cc83) list_double_heading_pane_vc_t

0xb018,	// (0x00018233) list_double_graphic_pane_vc_g1_ParamLimits

0xb018,	// (0x00018233) list_double_graphic_pane_vc_g1

0xb024,	// (0x0001823f) list_double_graphic_pane_vc_g2_ParamLimits

0xb024,	// (0x0001823f) list_double_graphic_pane_vc_g2

0x4927,	// (0x00011b42) list_double_graphic_pane_vc_g3_ParamLimits

0x4927,	// (0x00011b42) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0001cc88) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001cc88) list_double_graphic_pane_vc_g

0xb041,	// (0x0001825c) list_double_graphic_pane_vc_t1_ParamLimits

0xb041,	// (0x0001825c) list_double_graphic_pane_vc_t1

0xb06b,	// (0x00018286) list_double_graphic_pane_vc_t2_ParamLimits

0xb06b,	// (0x00018286) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0001cc91) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0001cc91) list_double_graphic_pane_vc_t

0x5393,	// (0x000125ae) aid_size_cell_fastswap

0x539b,	// (0x000125b6) aid_size_cell_touch_ParamLimits

0x539b,	// (0x000125b6) aid_size_cell_touch

0x5606,	// (0x00012821) popup_fast_swap_wide_window_ParamLimits

0x5606,	// (0x00012821) popup_fast_swap_wide_window

0x5724,	// (0x0001293f) touch_pane_ParamLimits

0x5724,	// (0x0001293f) touch_pane

0x3b65,	// (0x00010d80) button_value_adjust_pane_cp2

0x3b6d,	// (0x00010d88) button_value_adjust_pane_cp4

0x3b75,	// (0x00010d90) form_field_data_pane_cp2

0x7aad,	// (0x00014cc8) form_field_data_wide_pane_cp2

0x4171,	// (0x0001138c) bg_scroll_pane_ParamLimits

0x59b8,	// (0x00012bd3) scroll_handle_pane_ParamLimits

0x59cc,	// (0x00012be7) scroll_sc2_down_pane_ParamLimits

0x59cc,	// (0x00012be7) scroll_sc2_down_pane

0x41cb,	// (0x000113e6) scroll_sc2_up_pane_ParamLimits

0x41cb,	// (0x000113e6) scroll_sc2_up_pane

0xb547,	// (0x00018762) grid_wheel_folder_pane_g1_ParamLimits

0xb547,	// (0x00018762) grid_wheel_folder_pane_g1

0x5b96,	// (0x00012db1) clock_nsta_pane_cp2_ParamLimits

0x5b96,	// (0x00012db1) clock_nsta_pane_cp2

0x7c4a,	// (0x00014e65) listscroll_midp_pane_ParamLimits

0x7f87,	// (0x000151a2) midp_canvas_pane

0x8271,	// (0x0001548c) nsta_clock_indic_pane

0x82cf,	// (0x000154ea) listscroll_form_pane_vc

0x82f3,	// (0x0001550e) listscroll_set_pane_vc_ParamLimits

0x82f3,	// (0x0001550e) listscroll_set_pane_vc

0x8a17,	// (0x00015c32) clock_nsta_pane

0x8a94,	// (0x00015caf) indicator_nsta_pane

0x8d8c,	// (0x00015fa7) bg_popup_sub_pane_cp2_ParamLimits

0x8da0,	// (0x00015fbb) find_pane_cp2_ParamLimits

0x8da0,	// (0x00015fbb) find_pane_cp2

0x8db6,	// (0x00015fd1) grid_toobar_pane_ParamLimits

0x8f76,	// (0x00016191) list_form_gen_pane_vc_ParamLimits

0x8f76,	// (0x00016191) list_form_gen_pane_vc

0x8f8c,	// (0x000161a7) scroll_pane_cp8_vc_ParamLimits

0x8f8c,	// (0x000161a7) scroll_pane_cp8_vc

0x9008,	// (0x00016223) data_form_wide_pane_vc_ParamLimits

0x9008,	// (0x00016223) data_form_wide_pane_vc

0x9014,	// (0x0001622f) form_field_data_wide_pane_vc_g1

0x901c,	// (0x00016237) form_field_data_wide_pane_vc_t1_ParamLimits

0x901c,	// (0x00016237) form_field_data_wide_pane_vc_t1

0x3bd0,	// (0x00010deb) input_focus_pane_cp6_vc_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_cp6_vc

0x934d,	// (0x00016568) list_midp_pane_ParamLimits

0x9359,	// (0x00016574) scroll_pane_cp16_ParamLimits

0x9359,	// (0x00016574) scroll_pane_cp16

0x93a7,	// (0x000165c2) button_value_adjust_pane_ParamLimits

0x93a7,	// (0x000165c2) button_value_adjust_pane

0xa360,	// (0x0001757b) button_value_adjust_pane_cp6_ParamLimits

0xa360,	// (0x0001757b) button_value_adjust_pane_cp6

0xa4ae,	// (0x000176c9) settings_code_pane_cp_ParamLimits

0xa4ae,	// (0x000176c9) settings_code_pane_cp

0x323b,	// (0x00010456) cell_touch_pane_g1

0x323b,	// (0x00010456) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001c919) cell_touch_pane_g

0xab1e,	// (0x00017d39) cell_touch_pane_cp_ParamLimits

0xab1e,	// (0x00017d39) cell_touch_pane_cp

0xab2e,	// (0x00017d49) cell_touch_pane_ParamLimits

0xab2e,	// (0x00017d49) cell_touch_pane

0x323b,	// (0x00010456) scroll_sc2_down_pane_g1

0x323b,	// (0x00010456) scroll_sc2_up_pane_g1

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp4_vc

0xab8b,	// (0x00017da6) list_set_graphic_pane_vc_g1_ParamLimits

0xab8b,	// (0x00017da6) list_set_graphic_pane_vc_g1

0x3e2f,	// (0x0001104a) list_set_graphic_pane_vc_g2_ParamLimits

0x3e2f,	// (0x0001104a) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x0001cc15) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x0001cc15) list_set_graphic_pane_vc_g

0xab97,	// (0x00017db2) text_primary_small_cp13_vc_ParamLimits

0xab97,	// (0x00017db2) text_primary_small_cp13_vc

0xabaf,	// (0x00017dca) list_set_graphic_pane_vc_ParamLimits

0xabaf,	// (0x00017dca) list_set_graphic_pane_vc

0x33b4,	// (0x000105cf) input_focus_pane_cp2_vc

0x323b,	// (0x00010456) setting_code_pane_vc_g1

0x351a,	// (0x00010735) setting_code_pane_vc_t1

0xabc4,	// (0x00017ddf) set_text_pane_vc_t1_ParamLimits

0xabc4,	// (0x00017ddf) set_text_pane_vc_t1

0x33b4,	// (0x000105cf) input_focus_pane_cp1_vc

0xabe2,	// (0x00017dfd) list_set_text_pane_vc

0x323b,	// (0x00010456) setting_text_pane_vc_g1

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp2_vc

0x34e9,	// (0x00010704) setting_slider_graphic_pane_vc_g1

0xabec,	// (0x00017e07) setting_slider_graphic_pane_vc_t1

0xabfe,	// (0x00017e19) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x0001cc1a) setting_slider_graphic_pane_vc_t

0xac10,	// (0x00017e2b) slider_set_pane_cp_vc

0xac1a,	// (0x00017e35) slider_set_pane_vc_g1

0xac23,	// (0x00017e3e) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x0001cc1f) slider_set_pane_vc_g

0x3c99,	// (0x00010eb4) set_opt_bg_pane_g1_copy1

0x3ca1,	// (0x00010ebc) set_opt_bg_pane_g2_copy1

0xac4f,	// (0x00017e6a) set_opt_bg_pane_g3_copy1

0x3cb1,	// (0x00010ecc) set_opt_bg_pane_g4_copy1

0x3cb9,	// (0x00010ed4) set_opt_bg_pane_g5_copy1

0x3cc1,	// (0x00010edc) set_opt_bg_pane_g6_copy1

0xac59,	// (0x00017e74) set_opt_bg_pane_g7_copy1

0xac63,	// (0x00017e7e) set_opt_bg_pane_g8_copy1

0xac6d,	// (0x00017e88) set_opt_bg_pane_g9_copy1

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp_vc

0xac77,	// (0x00017e92) setting_slider_pane_vc_t1

0xac86,	// (0x00017ea1) setting_slider_pane_vc_t2

0xac98,	// (0x00017eb3) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x0001cc2e) setting_slider_pane_vc_t

0xacaa,	// (0x00017ec5) slider_set_pane_vc

0x5fa6,	// (0x000131c1) volume_set_pane_vc_g1

0x5faf,	// (0x000131ca) volume_set_pane_vc_g2

0x5fb8,	// (0x000131d3) volume_set_pane_vc_g3

0x5fc1,	// (0x000131dc) volume_set_pane_vc_g4

0x5fca,	// (0x000131e5) volume_set_pane_vc_g5

0x5fd3,	// (0x000131ee) volume_set_pane_vc_g6

0x5fdc,	// (0x000131f7) volume_set_pane_vc_g7

0x5fe5,	// (0x00013200) volume_set_pane_vc_g8

0x5fee,	// (0x00013209) volume_set_pane_vc_g9

0x5ff7,	// (0x00013212) volume_set_pane_vc_g10

0x0009,

0xf8b1,	// (0x0001cacc) volume_set_pane_vc_g

0xacb4,	// (0x00017ecf) volume_set_pane_vc

0xacbe,	// (0x00017ed9) button_value_adjust_pane_cp1_vc

0xacc8,	// (0x00017ee3) list_highlight_pane_cp2_vc

0xacd1,	// (0x00017eec) list_set_pane_vc_ParamLimits

0xacd1,	// (0x00017eec) list_set_pane_vc

0xad41,	// (0x00017f5c) main_pane_set_vc_t1_ParamLimits

0xad41,	// (0x00017f5c) main_pane_set_vc_t1

0xad56,	// (0x00017f71) main_pane_set_vc_t2_ParamLimits

0xad56,	// (0x00017f71) main_pane_set_vc_t2

0xad68,	// (0x00017f83) main_pane_set_vc_t3_ParamLimits

0xad68,	// (0x00017f83) main_pane_set_vc_t3

0xad7c,	// (0x00017f97) main_pane_set_vc_t4_ParamLimits

0xad7c,	// (0x00017f97) main_pane_set_vc_t4

0x0003,

0xfa1a,	// (0x0001cc35) main_pane_set_vc_t_ParamLimits

0xfa1a,	// (0x0001cc35) main_pane_set_vc_t

0xad90,	// (0x00017fab) setting_code_pane_vc_ParamLimits

0xad90,	// (0x00017fab) setting_code_pane_vc

0xada1,	// (0x00017fbc) setting_slider_graphic_pane_vc

0xada1,	// (0x00017fbc) setting_slider_pane_vc

0xada1,	// (0x00017fbc) setting_text_pane_vc

0xada1,	// (0x00017fbc) setting_volume_pane_vc

0xadab,	// (0x00017fc6) scroll_pane_cp121_vc

0x3b53,	// (0x00010d6e) set_content_pane_vc

0xb089,	// (0x000182a4) button_value_adjust_pane_g1

0xb092,	// (0x000182ad) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0001cc96) button_value_adjust_pane_g

0xb09b,	// (0x000182b6) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb09b,	// (0x000182b6) form_field_slider_wide_pane_vc_t1

0xb0ad,	// (0x000182c8) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb0ad,	// (0x000182c8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0001cc9b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0001cc9b) form_field_slider_wide_pane_vc_t

0x3462,	// (0x0001067d) input_focus_pane_cp10_vc_ParamLimits

0x3462,	// (0x0001067d) input_focus_pane_cp10_vc

0xb0d9,	// (0x000182f4) slider_cont_pane_cp1_vc_ParamLimits

0xb0d9,	// (0x000182f4) slider_cont_pane_cp1_vc

0xb0eb,	// (0x00018306) slider_form_pane_g1_cp2

0xac23,	// (0x00017e3e) slider_form_pane_g2_cp2

0xb118,	// (0x00018333) form_field_slider_pane_vc_t3

0xb126,	// (0x00018341) form_field_slider_pane_vc_t4

0xb134,	// (0x0001834f) slider_form_pane_vc_ParamLimits

0xb134,	// (0x0001834f) slider_form_pane_vc

0xb141,	// (0x0001835c) form_field_slider_pane_vc_t1_ParamLimits

0xb141,	// (0x0001835c) form_field_slider_pane_vc_t1

0xb0ad,	// (0x000182c8) form_field_slider_pane_vc_t2_ParamLimits

0xb0ad,	// (0x000182c8) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0001ccad) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0001ccad) form_field_slider_pane_vc_t

0x3462,	// (0x0001067d) input_focus_pane_cp9_vc_ParamLimits

0x3462,	// (0x0001067d) input_focus_pane_cp9_vc

0xb157,	// (0x00018372) slider_cont_pane_vc_ParamLimits

0xb157,	// (0x00018372) slider_cont_pane_vc

0xb16b,	// (0x00018386) list_form_graphic_pane_cp_vc_ParamLimits

0xb16b,	// (0x00018386) list_form_graphic_pane_cp_vc

0x9014,	// (0x0001622f) form_field_popup_wide_pane_vc_g1

0xb180,	// (0x0001839b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb180,	// (0x0001839b) form_field_popup_wide_pane_vc_t1

0x3bd0,	// (0x00010deb) input_focus_pane_cp8_vc_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_cp8_vc

0xb1c5,	// (0x000183e0) list_form_wide_pane_vc_ParamLimits

0xb1c5,	// (0x000183e0) list_form_wide_pane_vc

0xb1d1,	// (0x000183ec) list_form_graphic_pane_vc_g1

0xb1d9,	// (0x000183f4) list_form_graphic_pane_vc_t1_ParamLimits

0xb1d9,	// (0x000183f4) list_form_graphic_pane_vc_t1

0x347a,	// (0x00010695) list_highlight_pane_cp5_vc_ParamLimits

0x347a,	// (0x00010695) list_highlight_pane_cp5_vc

0xb1f5,	// (0x00018410) list_form_graphic_pane_vc_ParamLimits

0xb1f5,	// (0x00018410) list_form_graphic_pane_vc

0x9014,	// (0x0001622f) form_field_popup_pane_vc_g1

0xb20b,	// (0x00018426) form_field_popup_pane_vc_t1_ParamLimits

0xb20b,	// (0x00018426) form_field_popup_pane_vc_t1

0x3bd0,	// (0x00010deb) input_focus_pane_cp7_vc_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_cp7_vc

0xb222,	// (0x0001843d) list_form_pane_vc_ParamLimits

0xb222,	// (0x0001843d) list_form_pane_vc

0xb22e,	// (0x00018449) data_form_pane_vc_t1_ParamLimits

0xb22e,	// (0x00018449) data_form_pane_vc_t1

0x3c99,	// (0x00010eb4) input_focus_pane_vc_g1

0x3ca1,	// (0x00010ebc) input_focus_pane_vc_g2

0x3ca9,	// (0x00010ec4) input_focus_pane_vc_g3

0x3cb1,	// (0x00010ecc) input_focus_pane_vc_g4

0x3cb9,	// (0x00010ed4) input_focus_pane_vc_g5

0x3cc1,	// (0x00010edc) input_focus_pane_vc_g6

0x3cc9,	// (0x00010ee4) input_focus_pane_vc_g7

0x3cd1,	// (0x00010eec) input_focus_pane_vc_g8

0x3cd9,	// (0x00010ef4) input_focus_pane_vc_g9

0x323b,	// (0x00010456) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001c8a2) input_focus_pane_vc_g

0x9008,	// (0x00016223) data_form_pane_vc_ParamLimits

0x9008,	// (0x00016223) data_form_pane_vc

0x9014,	// (0x0001622f) form_field_data_pane_vc_g1

0xb24b,	// (0x00018466) form_field_data_pane_vc_t1_ParamLimits

0xb24b,	// (0x00018466) form_field_data_pane_vc_t1

0x3bd0,	// (0x00010deb) input_focus_pane_vc_ParamLimits

0x3bd0,	// (0x00010deb) input_focus_pane_vc

0xb265,	// (0x00018480) button_value_adjust_pane_cp3_vc

0xb26d,	// (0x00018488) button_value_adjust_pane_cp5_vc

0xb275,	// (0x00018490) form_field_data_pane_vc_ParamLimits

0xb275,	// (0x00018490) form_field_data_pane_vc

0xb290,	// (0x000184ab) form_field_data_pane_vc_cp2

0xb298,	// (0x000184b3) form_field_data_wide_pane_vc_ParamLimits

0xb298,	// (0x000184b3) form_field_data_wide_pane_vc

0xb2b2,	// (0x000184cd) form_field_data_wide_pane_vc_cp2

0xb2ba,	// (0x000184d5) form_field_popup_pane_vc_ParamLimits

0xb2ba,	// (0x000184d5) form_field_popup_pane_vc

0xb2d5,	// (0x000184f0) form_field_popup_wide_pane_vc_ParamLimits

0xb2d5,	// (0x000184f0) form_field_popup_wide_pane_vc

0xb2ef,	// (0x0001850a) form_field_slider_pane_vc_ParamLimits

0xb2ef,	// (0x0001850a) form_field_slider_pane_vc

0xb302,	// (0x0001851d) form_field_slider_wide_pane_vc_ParamLimits

0xb302,	// (0x0001851d) form_field_slider_wide_pane_vc

0xb315,	// (0x00018530) grid_touch_1_pane_ParamLimits

0xb315,	// (0x00018530) grid_touch_1_pane

0xb321,	// (0x0001853c) grid_touch_2_pane_ParamLimits

0xb321,	// (0x0001853c) grid_touch_2_pane

0x823c,	// (0x00015457) touch_pane_g1_ParamLimits

0x823c,	// (0x00015457) touch_pane_g1

0xb33b,	// (0x00018556) cell_app_pane_cp_wide_ParamLimits

0xb33b,	// (0x00018556) cell_app_pane_cp_wide

0xb34c,	// (0x00018567) grid_popup_fast_wide_pane_ParamLimits

0xb34c,	// (0x00018567) grid_popup_fast_wide_pane

0xb360,	// (0x0001857b) scroll_pane_cp19_ParamLimits

0xb360,	// (0x0001857b) scroll_pane_cp19

0x33b4,	// (0x000105cf) bg_popup_window_pane_cp20

0xb374,	// (0x0001858f) listscroll_popup_fast_wide_pane

0x347a,	// (0x00010695) grid_indicator_nsta_pane

0xb37c,	// (0x00018597) clock_nsta_pane_g1

0xb385,	// (0x000185a0) clock_nsta_pane_t1

0xb3a1,	// (0x000185bc) cell_indicator_nsta_pane_ParamLimits

0xb3a1,	// (0x000185bc) cell_indicator_nsta_pane

0xb3d3,	// (0x000185ee) cell_indicator_nsta_pane_g1

0xb3e1,	// (0x000185fc) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0001ccbe) cell_indicator_nsta_pane_g

0xb3f7,	// (0x00018612) clock_nsta_pane_cp

0xb3ff,	// (0x0001861a) indicator_nsta_pane_cp

0xb408,	// (0x00018623) nsta_clock_indic_pane_g1

0x3559,	// (0x00010774) grid_indicator_pane

0x42bd,	// (0x000114d8) scroll_pane_cp29

0x5ae2,	// (0x00012cfd) indicator_nsta_pane_cp2_ParamLimits

0x5ae2,	// (0x00012cfd) indicator_nsta_pane_cp2

0x347a,	// (0x00010695) main_apps_wheel_pane

0x922a,	// (0x00016445) form_midp_field_text_pane_ParamLimits

0x9379,	// (0x00016594) scroll_bar_cp050_ParamLimits

0xb471,	// (0x0001868c) cell_indicator_pane_ParamLimits

0xb471,	// (0x0001868c) cell_indicator_pane

0xb489,	// (0x000186a4) cell_indicator_pane_g1

0xb493,	// (0x000186ae) grid_wheel_folder_pane_ParamLimits

0xb493,	// (0x000186ae) grid_wheel_folder_pane

0xb4a7,	// (0x000186c2) list_wheel_apps_pane_ParamLimits

0xb4a7,	// (0x000186c2) list_wheel_apps_pane

0xb4ba,	// (0x000186d5) main_apps_wheel_pane_g1_ParamLimits

0xb4ba,	// (0x000186d5) main_apps_wheel_pane_g1

0xb4d6,	// (0x000186f1) main_apps_wheel_pane_g2_ParamLimits

0xb4d6,	// (0x000186f1) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0001ccda) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0001ccda) main_apps_wheel_pane_g

0xb4f2,	// (0x0001870d) main_apps_wheel_pane_t1_ParamLimits

0xb4f2,	// (0x0001870d) main_apps_wheel_pane_t1

0xb51b,	// (0x00018736) list_wheel_apps_pane_g1

0xb523,	// (0x0001873e) list_wheel_apps_pane_g2

0xb52b,	// (0x00018746) list_wheel_apps_pane_g3

0xb533,	// (0x0001874e) list_wheel_apps_pane_g4

0xb53d,	// (0x00018758) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0001ccdf) list_wheel_apps_pane_g

0x485a,	// (0x00011a75) navi_icon_text_pane

0x8944,	// (0x00015b5f) aid_fill_nsta

0xb55e,	// (0x00018779) navi_icon_text_pane_g1

0xb56a,	// (0x00018785) navi_icon_text_pane_t1

0x7ee0,	// (0x000150fb) list_set_graphic_pane_t1_ParamLimits

0x7ee0,	// (0x000150fb) list_set_graphic_pane_t1

0x9aca,	// (0x00016ce5) popup_midp_note_alarm_window_t6_ParamLimits

0x9aca,	// (0x00016ce5) popup_midp_note_alarm_window_t6

0x9adc,	// (0x00016cf7) popup_midp_note_alarm_window_t7_ParamLimits

0x9adc,	// (0x00016cf7) popup_midp_note_alarm_window_t7

0x9aee,	// (0x00016d09) popup_midp_note_alarm_window_t8_ParamLimits

0x9aee,	// (0x00016d09) popup_midp_note_alarm_window_t8

0x9b00,	// (0x00016d1b) popup_midp_note_alarm_window_t9_ParamLimits

0x9b00,	// (0x00016d1b) popup_midp_note_alarm_window_t9

0x9b12,	// (0x00016d2d) popup_midp_note_alarm_window_t10_ParamLimits

0x9b12,	// (0x00016d2d) popup_midp_note_alarm_window_t10

0x9b24,	// (0x00016d3f) popup_midp_note_alarm_window_t11_ParamLimits

0x9b24,	// (0x00016d3f) popup_midp_note_alarm_window_t11

0x9b36,	// (0x00016d51) scroll_pane_cp17_ParamLimits

0x9b36,	// (0x00016d51) scroll_pane_cp17

0x5fa6,	// (0x000131c1) volume_small_pane_cp_g1

0x62b7,	// (0x000134d2) volume_small_pane_cp_g2

0x62c0,	// (0x000134db) volume_small_pane_cp_g3

0x62c9,	// (0x000134e4) volume_small_pane_cp_g4

0x62d2,	// (0x000134ed) volume_small_pane_cp_g5

0x62db,	// (0x000134f6) volume_small_pane_cp_g6

0x62e4,	// (0x000134ff) volume_small_pane_cp_g7

0x62ed,	// (0x00013508) volume_small_pane_cp_g8

0x62f6,	// (0x00013511) volume_small_pane_cp_g9

0x62ff,	// (0x0001351a) volume_small_pane_cp_g10

0x8050,	// (0x0001526b) midp_ticker_pane_g1_ParamLimits

0x805c,	// (0x00015277) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001c96e) midp_ticker_pane_g_ParamLimits

0x8068,	// (0x00015283) midp_ticker_pane_t1_ParamLimits

0x895a,	// (0x00015b75) aid_fill_nsta_2

0x9365,	// (0x00016580) list_form2_midp_pane

0xa52a,	// (0x00017745) midp_editing_number_pane_ParamLimits

0xa539,	// (0x00017754) midp_ticker_pane_ParamLimits

0xb57c,	// (0x00018797) form2_midp_field_pane

0xb5a0,	// (0x000187bb) scroll_pane_cp51

0xb5c0,	// (0x000187db) form2_midp_button_pane_ParamLimits

0xb5c0,	// (0x000187db) form2_midp_button_pane

0xb5d2,	// (0x000187ed) form2_midp_content_pane_ParamLimits

0xb5d2,	// (0x000187ed) form2_midp_content_pane

0xb5ec,	// (0x00018807) form2_midp_field_choice_group_pane

0xb5f4,	// (0x0001880f) form2_midp_field_pane_g1

0xb5fc,	// (0x00018817) form2_midp_field_pane_g2

0xb604,	// (0x0001881f) form2_midp_field_pane_g3

0xb60c,	// (0x00018827) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0001cd04) form2_midp_field_pane_g

0xb614,	// (0x0001882f) form2_midp_gauge_slider_pane

0xb61c,	// (0x00018837) form2_midp_gauge_wait_pane

0xb624,	// (0x0001883f) form2_midp_image_pane_ParamLimits

0xb624,	// (0x0001883f) form2_midp_image_pane

0xb63f,	// (0x0001885a) form2_midp_label_pane_ParamLimits

0xb63f,	// (0x0001885a) form2_midp_label_pane

0xb65e,	// (0x00018879) form2_midp_label_pane_cp_ParamLimits

0xb65e,	// (0x00018879) form2_midp_label_pane_cp

0xb67f,	// (0x0001889a) form2_midp_string_pane_ParamLimits

0xb67f,	// (0x0001889a) form2_midp_string_pane

0xb691,	// (0x000188ac) form2_midp_text_pane_ParamLimits

0xb691,	// (0x000188ac) form2_midp_text_pane

0xb6b2,	// (0x000188cd) form2_midp_time_pane

0xb6c2,	// (0x000188dd) input_focus_pane_cp51_ParamLimits

0xb6c2,	// (0x000188dd) input_focus_pane_cp51

0xb6da,	// (0x000188f5) form2_midp_label_pane_t1_ParamLimits

0xb6da,	// (0x000188f5) form2_midp_label_pane_t1

0xb720,	// (0x0001893b) form2_mdip_text_pane_t1_ParamLimits

0xb720,	// (0x0001893b) form2_mdip_text_pane_t1

0xb742,	// (0x0001895d) form2_midp_time_pane_t1

0xb75d,	// (0x00018978) form2_midp_gauge_slider_pane_t1

0xb76f,	// (0x0001898a) form2_midp_gauge_slider_pane_t2

0xb781,	// (0x0001899c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0001cd0d) form2_midp_gauge_slider_pane_t

0xb793,	// (0x000189ae) form2_midp_slider_pane

0xb79f,	// (0x000189ba) form2_midp_gauge_wait_pane_t1

0xb7ad,	// (0x000189c8) form2_midp_wait_pane_ParamLimits

0xb7ad,	// (0x000189c8) form2_midp_wait_pane

0x905b,	// (0x00016276) list_single_2graphic_pane_cp4_ParamLimits

0x905b,	// (0x00016276) list_single_2graphic_pane_cp4

0xb7d8,	// (0x000189f3) list_single_midp_graphic_pane_cp_ParamLimits

0xb7d8,	// (0x000189f3) list_single_midp_graphic_pane_cp

0x33b4,	// (0x000105cf) list_highlight_pane_cp20

0xb7fc,	// (0x00018a17) list_single_2graphic_pane_g1_cp4

0xaa21,	// (0x00017c3c) list_single_2graphic_pane_g2_cp4

0xb804,	// (0x00018a1f) list_single_2graphic_pane_t1_cp4

0x347a,	// (0x00010695) list_highlight_pane_cp21

0xb813,	// (0x00018a2e) list_single_midp_graphic_pane_g4_cp

0xb822,	// (0x00018a3d) list_single_midp_graphic_pane_t1_cp

0xb837,	// (0x00018a52) form2_mdip_string_pane_t1_ParamLimits

0xb837,	// (0x00018a52) form2_mdip_string_pane_t1

0x33b4,	// (0x000105cf) bg_wml_button_pane_cp2

0x323b,	// (0x00010456) form2_midp_image_pane_g1

0x3afd,	// (0x00010d18) list_double_large_graphic_pane_g5_ParamLimits

0x3afd,	// (0x00010d18) list_double_large_graphic_pane_g5

0x7c4a,	// (0x00014e65) midp_form_pane_ParamLimits

0x347a,	// (0x00010695) main_apps_wheel_pane_ParamLimits

0x86ee,	// (0x00015909) popup_preview_window_ParamLimits

0x86ee,	// (0x00015909) popup_preview_window

0x88d5,	// (0x00015af0) popup_touch_info_window_ParamLimits

0x88d5,	// (0x00015af0) popup_touch_info_window

0x88f7,	// (0x00015b12) popup_touch_menu_window_ParamLimits

0x88f7,	// (0x00015b12) popup_touch_menu_window

0x3231,	// (0x0001044c) bg_popup_sub_pane_cp6

0xb8dc,	// (0x00018af7) list_touch_menu_pane

0xb8e4,	// (0x00018aff) list_single_touch_menu_pane_ParamLimits

0xb8e4,	// (0x00018aff) list_single_touch_menu_pane

0xb8fc,	// (0x00018b17) list_single_touch_menu_pane_t1

0x347a,	// (0x00010695) bg_popup_sub_pane_cp7_ParamLimits

0x347a,	// (0x00010695) bg_popup_sub_pane_cp7

0xb90a,	// (0x00018b25) heading_sub_pane

0xb912,	// (0x00018b2d) list_touch_info_pane_ParamLimits

0xb912,	// (0x00018b2d) list_touch_info_pane

0xb921,	// (0x00018b3c) list_single_touch_info_pane_ParamLimits

0xb921,	// (0x00018b3c) list_single_touch_info_pane

0xb933,	// (0x00018b4e) list_single_touch_info_pane_t1

0xb941,	// (0x00018b5c) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0001cd1b) list_single_touch_info_pane_t

0x49b6,	// (0x00011bd1) bg_popup_heading_pane_cp

0xb94f,	// (0x00018b6a) heading_sub_pane_t1

0x8fa2,	// (0x000161bd) bg_popup_preview_window_pane_cp_ParamLimits

0x8fa2,	// (0x000161bd) bg_popup_preview_window_pane_cp

0xb90a,	// (0x00018b25) heading_preview_pane

0xb912,	// (0x00018b2d) list_preview_pane_ParamLimits

0xb912,	// (0x00018b2d) list_preview_pane

0xb95d,	// (0x00018b78) popup_preview_window_g1

0xb921,	// (0x00018b3c) list_single_preview_pane_ParamLimits

0xb921,	// (0x00018b3c) list_single_preview_pane

0xb965,	// (0x00018b80) list_single_preview_pane_g1

0xb96d,	// (0x00018b88) list_single_preview_pane_t1

0xb933,	// (0x00018b4e) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0001cd20) list_single_preview_pane_t

0xb97b,	// (0x00018b96) bg_popup_heading_pane_cp2_ParamLimits

0xb97b,	// (0x00018b96) bg_popup_heading_pane_cp2

0xb991,	// (0x00018bac) heading_preview_pane_g1

0xb999,	// (0x00018bb4) heading_preview_pane_t1_ParamLimits

0xb999,	// (0x00018bb4) heading_preview_pane_t1

0x3570,	// (0x0001078b) soft_indicator_pane_t1_ParamLimits

0x3aa5,	// (0x00010cc0) scroll_pane_ParamLimits

0x41c2,	// (0x000113dd) scroll_sc2_left_pane

0x41b9,	// (0x000113d4) scroll_sc2_right_pane

0x41e1,	// (0x000113fc) scroll_bg_pane_g1_ParamLimits

0x41f6,	// (0x00011411) scroll_bg_pane_g2_ParamLimits

0x420e,	// (0x00011429) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001c8f9) scroll_bg_pane_g_ParamLimits

0x41e1,	// (0x000113fc) scroll_handle_pane_g1_ParamLimits

0x4230,	// (0x0001144b) scroll_handle_pane_g2_ParamLimits

0x420e,	// (0x00011429) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001c900) scroll_handle_pane_g_ParamLimits

0x8335,	// (0x00015550) popup_choice_list_window_ParamLimits

0x8335,	// (0x00015550) popup_choice_list_window

0x8d98,	// (0x00015fb3) choice_list_pane

0x8e48,	// (0x00016063) cell_toolbar_pane_t1

0x8e70,	// (0x0001608b) toolbar_button_pane_ParamLimits

0xa000,	// (0x0001721b) ai_gene_pane_1_t2_ParamLimits

0xa000,	// (0x0001721b) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x0001cb28) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x0001cb28) ai_gene_pane_1_t

0xb9b6,	// (0x00018bd1) scroll_sc2_left_pane_g1

0xb9b6,	// (0x00018bd1) scroll_sc2_right_pane_g1

0x8305,	// (0x00015520) bg_popup_sub_pane_cp10

0xb9c0,	// (0x00018bdb) list_choice_list_pane

0xb9d9,	// (0x00018bf4) list_single_choice_list_pane_ParamLimits

0xb9d9,	// (0x00018bf4) list_single_choice_list_pane

0xb9f1,	// (0x00018c0c) list_single_choice_list_pane_g1

0x3dbe,	// (0x00010fd9) list_single_choice_list_pane_t1_ParamLimits

0x3dbe,	// (0x00010fd9) list_single_choice_list_pane_t1

0xb9f9,	// (0x00018c14) choice_list_pane_g1

0xba01,	// (0x00018c1c) choice_list_pane_t1

0x3231,	// (0x0001044c) input_focus_pane_cp11

0x3fa6,	// (0x000111c1) title_pane_stacon_g2_ParamLimits

0x3fa6,	// (0x000111c1) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001c8df) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001c8df) title_pane_stacon_g

0x49b6,	// (0x00011bd1) cursor_press_pane

0x83ef,	// (0x0001560a) popup_fep_hwr_window_ParamLimits

0x83ef,	// (0x0001560a) popup_fep_hwr_window

0x8479,	// (0x00015694) popup_fep_vkb_window_ParamLimits

0x8479,	// (0x00015694) popup_fep_vkb_window

0xba0f,	// (0x00018c2a) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0001cd49) fep_vkb_side_pane_g_ParamLimits

0x6341,	// (0x0001355c) fep_hwr_candidate_pane_ParamLimits

0x6341,	// (0x0001355c) fep_hwr_candidate_pane

0x636b,	// (0x00013586) fep_hwr_side_pane_ParamLimits

0x636b,	// (0x00013586) fep_hwr_side_pane

0x638d,	// (0x000135a8) fep_hwr_top_pane_ParamLimits

0x638d,	// (0x000135a8) fep_hwr_top_pane

0x63a5,	// (0x000135c0) fep_hwr_write_pane_ParamLimits

0x63a5,	// (0x000135c0) fep_hwr_write_pane

0xfb2e,	// (0x0001cd49) fep_vkb_side_pane_g

0xba17,	// (0x00018c32) fep_hwr_top_pane_g1

0xba29,	// (0x00018c44) fep_hwr_top_pane_g2

0x63df,	// (0x000135fa) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0001cd25) fep_hwr_top_pane_g

0x63f4,	// (0x0001360f) fep_hwr_top_text_pane

0x432a,	// (0x00011545) fep_hwr_top_text_pane_g1

0xba5f,	// (0x00018c7a) fep_hwr_top_text_pane_t1

0x64fe,	// (0x00013719) fep_hwr_candidate_pane_g1

0xbcaa,	// (0x00018ec5) fep_vkb_keypad_pane_g3_ParamLimits

0xbcaa,	// (0x00018ec5) fep_vkb_keypad_pane_g3

0xbcd6,	// (0x00018ef1) fep_vkb_keypad_pane_g4_ParamLimits

0xbcd6,	// (0x00018ef1) fep_vkb_keypad_pane_g4

0xbd4d,	// (0x00018f68) fep_vkb_bottom_pane_g2_ParamLimits

0xbd4d,	// (0x00018f68) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0001cd50) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0001cd50) fep_vkb_bottom_pane_g

0xb9b6,	// (0x00018bd1) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0001cd5a) cell_vkb_side_pane_g

0xbdd8,	// (0x00018ff3) cell_vkb_side_pane_t1

0xbde6,	// (0x00019001) cell_vkb_side_pane_t1_copy1

0xb9b6,	// (0x00018bd1) bg_fep_vkb_candidate_pane_g2

0xbf2a,	// (0x00019145) cell_vkb_candidate_pane_ParamLimits

0xba6d,	// (0x00018c88) aid_size_cell_vkb_ParamLimits

0xba6d,	// (0x00018c88) aid_size_cell_vkb

0xbf2a,	// (0x00019145) cell_vkb_candidate_pane

0x6525,	// (0x00013740) bg_popup_fep_shadow_pane_g1

0xbaff,	// (0x00018d1a) fep_vkb_bottom_pane_ParamLimits

0xbaff,	// (0x00018d1a) fep_vkb_bottom_pane

0xbb3c,	// (0x00018d57) fep_vkb_candidate_pane_ParamLimits

0xbb3c,	// (0x00018d57) fep_vkb_candidate_pane

0xbb58,	// (0x00018d73) fep_vkb_keypad_pane_ParamLimits

0xbb58,	// (0x00018d73) fep_vkb_keypad_pane

0xbb8b,	// (0x00018da6) fep_vkb_side_pane_ParamLimits

0xbb8b,	// (0x00018da6) fep_vkb_side_pane

0xbbc7,	// (0x00018de2) fep_vkb_top_pane_ParamLimits

0xbbc7,	// (0x00018de2) fep_vkb_top_pane

0xbc03,	// (0x00018e1e) fep_vkb_top_pane_g1_ParamLimits

0xbc03,	// (0x00018e1e) fep_vkb_top_pane_g1

0xbc12,	// (0x00018e2d) fep_vkb_top_pane_g2_ParamLimits

0xbc12,	// (0x00018e2d) fep_vkb_top_pane_g2

0xbc21,	// (0x00018e3c) fep_vkb_top_pane_g3_ParamLimits

0xbc21,	// (0x00018e3c) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0001cd40) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0001cd40) fep_vkb_top_pane_g

0xbc3f,	// (0x00018e5a) fep_vkb_top_text_pane_ParamLimits

0xbc3f,	// (0x00018e5a) fep_vkb_top_text_pane

0xbc50,	// (0x00018e6b) fep_vkb_side_pane_g1_ParamLimits

0xbc50,	// (0x00018e6b) fep_vkb_side_pane_g1

0xbc99,	// (0x00018eb4) grid_vkb_side_pane_ParamLimits

0xbc99,	// (0x00018eb4) grid_vkb_side_pane

0x652d,	// (0x00013748) bg_popup_fep_shadow_pane_g2

0x6536,	// (0x00013751) bg_popup_fep_shadow_pane_g3

0x653e,	// (0x00013759) bg_popup_fep_shadow_pane_g4

0x6547,	// (0x00013762) bg_popup_fep_shadow_pane_g5

0x6551,	// (0x0001376c) bg_popup_fep_shadow_pane_g6

0x6559,	// (0x00013774) bg_popup_fep_shadow_pane_g7

0x3cb1,	// (0x00010ecc) bg_popup_fep_shadow_pane_g8

0xbcf8,	// (0x00018f13) grid_vkb_keypad_number_pane_ParamLimits

0xbcf8,	// (0x00018f13) grid_vkb_keypad_number_pane

0xbd0c,	// (0x00018f27) grid_vkb_keypad_pane_ParamLimits

0xbd0c,	// (0x00018f27) grid_vkb_keypad_pane

0xbd32,	// (0x00018f4d) fep_vkb_bottom_pane_g1_ParamLimits

0xbd32,	// (0x00018f4d) fep_vkb_bottom_pane_g1

0xbd5b,	// (0x00018f76) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbd5b,	// (0x00018f76) grid_vkb_keypad_bottom_left_pane

0xbd70,	// (0x00018f8b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbd70,	// (0x00018f8b) grid_vkb_keypad_bottom_right_pane

0xbd85,	// (0x00018fa0) fep_vkb_top_text_pane_g1

0xbda0,	// (0x00018fbb) fep_vkb_top_text_pane_t1

0xbdb5,	// (0x00018fd0) cell_vkb_side_pane_ParamLimits

0xbdb5,	// (0x00018fd0) cell_vkb_side_pane

0xb9b6,	// (0x00018bd1) cell_vkb_side_pane_g1

0xbdf4,	// (0x0001900f) cell_vkb_keypad_pane_ParamLimits

0xbdf4,	// (0x0001900f) cell_vkb_keypad_pane

0xbe81,	// (0x0001909c) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0001cd6d) bg_popup_fep_shadow_pane_g

0x656b,	// (0x00013786) cell_hwr_side_pane_g1

0x656b,	// (0x00013786) cell_hwr_side_pane_g2

0xbe8b,	// (0x000190a6) cell_vkb_keypad_pane_t1

0xbe99,	// (0x000190b4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbe99,	// (0x000190b4) cell_vkb_keypad_bottom_left_pane

0xbeb6,	// (0x000190d1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbeb6,	// (0x000190d1) cell_vkb_keypad_bottom_right_pane

0xb9b6,	// (0x00018bd1) cell_vkb_keypad_bottom_left_pane_g1

0xb9b6,	// (0x00018bd1) cell_vkb_keypad_bottom_right_pane_g1

0xbeef,	// (0x0001910a) cell_vkb_keypad_number_pane_ParamLimits

0xbeef,	// (0x0001910a) cell_vkb_keypad_number_pane

0xbf0e,	// (0x00019129) cell_vkb_keypad_number_pane_g1

0xbf18,	// (0x00019133) cell_vkb_keypad_number_pane_g2

0xbf21,	// (0x0001913c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0001cd5f) cell_vkb_keypad_number_pane_g

0xbe8b,	// (0x000190a6) cell_vkb_keypad_number_pane_t1

0xbf4b,	// (0x00019166) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x0001cd80) cell_hwr_side_pane_g

0xbf64,	// (0x0001917f) cell_hwr_side_pane_t1

0x6575,	// (0x00013790) cell_hwr_side_pane_t1_copy1

0x6583,	// (0x0001379e) cell_hwr_candidate_pane_g1

0x65b2,	// (0x000137cd) cell_hwr_candidate_pane_t1

0xb9b6,	// (0x00018bd1) cell_vkb_candidate_pane_g2

0xbfa8,	// (0x000191c3) cell_vkb_candidate_pane_t1

0x6308,	// (0x00013523) bg_popup_fep_shadow_pane_ParamLimits

0x6308,	// (0x00013523) bg_popup_fep_shadow_pane

0x63bf,	// (0x000135da) bg_fep_hwr_top_pane_g4

0xba3b,	// (0x00018c56) bg_hwr_side_pane_g1_ParamLimits

0xba3b,	// (0x00018c56) bg_hwr_side_pane_g1

0x6432,	// (0x0001364d) cell_hwr_side_pane_ParamLimits

0x6432,	// (0x0001364d) cell_hwr_side_pane

0x646f,	// (0x0001368a) fep_hwr_write_pane_g1_ParamLimits

0x646f,	// (0x0001368a) fep_hwr_write_pane_g1

0x647c,	// (0x00013697) fep_hwr_write_pane_g2_ParamLimits

0x647c,	// (0x00013697) fep_hwr_write_pane_g2

0x6489,	// (0x000136a4) fep_hwr_write_pane_g3_ParamLimits

0x6489,	// (0x000136a4) fep_hwr_write_pane_g3

0x6497,	// (0x000136b2) fep_hwr_write_pane_g4_ParamLimits

0x6497,	// (0x000136b2) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0001cd2c) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0001cd2c) fep_hwr_write_pane_g

0x63bf,	// (0x000135da) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x63bf,	// (0x000135da) bg_fep_hwr_candidate_pane_g2

0x64ac,	// (0x000136c7) cell_hwr_candidate_pane_ParamLimits

0x64ac,	// (0x000136c7) cell_hwr_candidate_pane

0x64fe,	// (0x00013719) fep_hwr_candidate_pane_g1_ParamLimits

0xba9b,	// (0x00018cb6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xba9b,	// (0x00018cb6) bg_popup_fep_shadow_pane_cp2

0xbc31,	// (0x00018e4c) fep_vkb_top_pane_g4_ParamLimits

0xbc31,	// (0x00018e4c) fep_vkb_top_pane_g4

0xbc77,	// (0x00018e92) fep_vkb_side_pane_g2_ParamLimits

0xbc77,	// (0x00018e92) fep_vkb_side_pane_g2

0x79cb,	// (0x00014be6) list_setting_pane_t4_ParamLimits

0x79cb,	// (0x00014be6) list_setting_pane_t4

0x7a47,	// (0x00014c62) list_setting_number_pane_t5_ParamLimits

0x7a47,	// (0x00014c62) list_setting_number_pane_t5

0x7d46,	// (0x00014f61) list_double_heading_pane_cp2_ParamLimits

0x7d46,	// (0x00014f61) list_double_heading_pane_cp2

0xbfb6,	// (0x000191d1) list_double_heading_pane_g1_cp2_ParamLimits

0xbfb6,	// (0x000191d1) list_double_heading_pane_g1_cp2

0xbfc2,	// (0x000191dd) list_double_heading_pane_g2_cp2_ParamLimits

0xbfc2,	// (0x000191dd) list_double_heading_pane_g2_cp2

0xbfd6,	// (0x000191f1) list_double_heading_pane_t1_cp2_ParamLimits

0xbfd6,	// (0x000191f1) list_double_heading_pane_t1_cp2

0xbfec,	// (0x00019207) list_double_heading_pane_t2_cp2_ParamLimits

0xbfec,	// (0x00019207) list_double_heading_pane_t2_cp2

0x3229,	// (0x00010444) aid_value_unit2

0x5664,	// (0x0001287f) popup_preview_fixed_window

0x3650,	// (0x0001086b) bg_popup_preview_window_pane_cp02

0xbffe,	// (0x00019219) list_preview_fixed_pane

0xc044,	// (0x0001925f) list_empty_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_empty_pane_fp

0xc044,	// (0x0001925f) list_single_cale_day_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_cale_day_pane_fp

0xc044,	// (0x0001925f) list_single_graphic_heading_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_graphic_heading_pane_fp

0xc044,	// (0x0001925f) list_single_graphic_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_graphic_pane_fp

0xc044,	// (0x0001925f) list_single_heading_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_heading_pane_fp

0xc044,	// (0x0001925f) list_single_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_pane_fp

0xc05d,	// (0x00019278) list_single_pane_fp_g1_ParamLimits

0xc05d,	// (0x00019278) list_single_pane_fp_g1

0xbfb6,	// (0x000191d1) list_single_pane_fp_g2_ParamLimits

0xbfb6,	// (0x000191d1) list_single_pane_fp_g2

0xbfc2,	// (0x000191dd) list_single_pane_fp_g3_ParamLimits

0xbfc2,	// (0x000191dd) list_single_pane_fp_g3

0xc069,	// (0x00019284) list_single_pane_fp_g4_ParamLimits

0xc069,	// (0x00019284) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x0001cd93) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x0001cd93) list_single_pane_fp_g

0xc075,	// (0x00019290) list_single_pane_fp_t1_ParamLimits

0xc075,	// (0x00019290) list_single_pane_fp_t1

0xc08c,	// (0x000192a7) list_single_graphic_pane_fp_g1_ParamLimits

0xc08c,	// (0x000192a7) list_single_graphic_pane_fp_g1

0xc05d,	// (0x00019278) list_single_graphic_pane_fp_g2_ParamLimits

0xc05d,	// (0x00019278) list_single_graphic_pane_fp_g2

0xbfb6,	// (0x000191d1) list_single_graphic_pane_fp_g3_ParamLimits

0xbfb6,	// (0x000191d1) list_single_graphic_pane_fp_g3

0xbfc2,	// (0x000191dd) list_single_graphic_pane_fp_g4_ParamLimits

0xbfc2,	// (0x000191dd) list_single_graphic_pane_fp_g4

0xc069,	// (0x00019284) list_single_graphic_pane_fp_g5_ParamLimits

0xc069,	// (0x00019284) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd9c) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd9c) list_single_graphic_pane_fp_g

0xc098,	// (0x000192b3) list_single_graphic_pane_fp_t1_ParamLimits

0xc098,	// (0x000192b3) list_single_graphic_pane_fp_t1

0xc08c,	// (0x000192a7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc08c,	// (0x000192a7) list_single_graphic_heading_pane_fp_g1

0xc05d,	// (0x00019278) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc05d,	// (0x00019278) list_single_graphic_heading_pane_fp_g2

0xbfb6,	// (0x000191d1) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xbfb6,	// (0x000191d1) list_single_graphic_heading_pane_fp_g3

0xbfc2,	// (0x000191dd) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbfc2,	// (0x000191dd) list_single_graphic_heading_pane_fp_g4

0xc069,	// (0x00019284) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc069,	// (0x00019284) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd9c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd9c) list_single_graphic_heading_pane_fp_g

0xc0ae,	// (0x000192c9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc0ae,	// (0x000192c9) list_single_graphic_heading_pane_fp_t1

0xc0c4,	// (0x000192df) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc0c4,	// (0x000192df) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x0001cda7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x0001cda7) list_single_graphic_heading_pane_fp_t

0xc0d6,	// (0x000192f1) list_single_cale_day_pane_fp_g1_ParamLimits

0xc0d6,	// (0x000192f1) list_single_cale_day_pane_fp_g1

0xc10e,	// (0x00019329) list_single_cale_day_pane_fp_g2_ParamLimits

0xc10e,	// (0x00019329) list_single_cale_day_pane_fp_g2

0xc11a,	// (0x00019335) list_single_cale_day_pane_fp_g3_ParamLimits

0xc11a,	// (0x00019335) list_single_cale_day_pane_fp_g3

0xc142,	// (0x0001935d) list_single_cale_day_pane_fp_g4_ParamLimits

0xc142,	// (0x0001935d) list_single_cale_day_pane_fp_g4

0xc166,	// (0x00019381) list_single_cale_day_pane_fp_g5_ParamLimits

0xc166,	// (0x00019381) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x0001cdac) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x0001cdac) list_single_cale_day_pane_fp_g

0xc18a,	// (0x000193a5) list_single_cale_day_pane_fp_t1_ParamLimits

0xc18a,	// (0x000193a5) list_single_cale_day_pane_fp_t1

0xc1b0,	// (0x000193cb) list_single_cale_day_pane_fp_t2_ParamLimits

0xc1b0,	// (0x000193cb) list_single_cale_day_pane_fp_t2

0xc1c9,	// (0x000193e4) list_single_cale_day_pane_fp_t3_ParamLimits

0xc1c9,	// (0x000193e4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x0001cdb7) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001cdb7) list_single_cale_day_pane_fp_t

0xc05d,	// (0x00019278) list_empty_pane_fp_g1_ParamLimits

0xc05d,	// (0x00019278) list_empty_pane_fp_g1

0xc1e2,	// (0x000193fd) list_empty_pane_fp_t1

0xc1f0,	// (0x0001940b) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x0001cdbe) list_empty_pane_fp_t

0xc05d,	// (0x00019278) list_single_heading_pane_fp_g1_ParamLimits

0xc05d,	// (0x00019278) list_single_heading_pane_fp_g1

0xbfb6,	// (0x000191d1) list_single_heading_pane_fp_g2_ParamLimits

0xbfb6,	// (0x000191d1) list_single_heading_pane_fp_g2

0xbfc2,	// (0x000191dd) list_single_heading_pane_fp_g3_ParamLimits

0xbfc2,	// (0x000191dd) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x0001cdc3) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x0001cdc3) list_single_heading_pane_fp_g

0xc1fe,	// (0x00019419) list_single_heading_pane_fp_t1_ParamLimits

0xc1fe,	// (0x00019419) list_single_heading_pane_fp_t1

0xc210,	// (0x0001942b) list_single_heading_pane_fp_t2_ParamLimits

0xc210,	// (0x0001942b) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x0001cdca) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x0001cdca) list_single_heading_pane_fp_t

0x3dd3,	// (0x00010fee) aid_size_cell_fast

0x3633,	// (0x0001084e) soft_indicator_pane_cp1_t1

0x3e10,	// (0x0001102b) cell_app_pane_cp2_ParamLimits

0x3e10,	// (0x0001102b) cell_app_pane_cp2

0x632a,	// (0x00013545) fep_hwr_candidate_drop_down_list_pane

0x6518,	// (0x00013733) fep_hwr_candidate_pane_g3_ParamLimits

0x6518,	// (0x00013733) fep_hwr_candidate_pane_g3

0x2719,	// (0x0000f934) fep_hwr_candidate_pane_g4_ParamLimits

0x2719,	// (0x0000f934) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0001cd39) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0001cd39) fep_hwr_candidate_pane_g

0xbb2b,	// (0x00018d46) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbb2b,	// (0x00018d46) fep_vkb_candidate_drop_down_list_pane

0xbf53,	// (0x0001916e) fep_vkb_candidate_pane_g3

0xbf5b,	// (0x00019176) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0001cd66) fep_vkb_candidate_pane_g

0x6583,	// (0x0001379e) cell_hwr_candidate_pane_g1_ParamLimits

0x6591,	// (0x000137ac) cell_hwr_candidate_pane_g3_ParamLimits

0x6591,	// (0x000137ac) cell_hwr_candidate_pane_g3

0xceba,	// (0x0001a0d5) cell_hwr_candidate_pane_g4_ParamLimits

0xceba,	// (0x0001a0d5) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x0001cd85) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x0001cd85) cell_hwr_candidate_pane_g

0xbf72,	// (0x0001918d) cell_vkb_candidate_pane_g3_ParamLimits

0xbf72,	// (0x0001918d) cell_vkb_candidate_pane_g3

0xbf8d,	// (0x000191a8) cell_vkb_candidate_pane_g4_ParamLimits

0xbf8d,	// (0x000191a8) cell_vkb_candidate_pane_g4

0xc226,	// (0x00019441) cell_app_pane_cp2_g1_ParamLimits

0xc226,	// (0x00019441) cell_app_pane_cp2_g1

0xc244,	// (0x0001945f) cell_app_pane_cp2_g2_ParamLimits

0xc244,	// (0x0001945f) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x0001cdcf) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x0001cdcf) cell_app_pane_cp2_g

0xc250,	// (0x0001946b) cell_app_pane_cp2_t1_ParamLimits

0xc250,	// (0x0001946b) cell_app_pane_cp2_t1

0x3bd0,	// (0x00010deb) grid_highlight_pane_cp1_ParamLimits

0x3bd0,	// (0x00010deb) grid_highlight_pane_cp1

0x65d0,	// (0x000137eb) cell_hwr_candidate_pane_cp1_ParamLimits

0x65d0,	// (0x000137eb) cell_hwr_candidate_pane_cp1

0x6583,	// (0x0001379e) fep_hwr_candidate_drop_down_list_pane_g1

0x65f4,	// (0x0001380f) fep_hwr_candidate_drop_down_list_pane_g2

0x6601,	// (0x0001381c) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x0001cdd4) fep_hwr_candidate_drop_down_list_pane_g

0x660e,	// (0x00013829) fep_hwr_candidate_drop_down_list_scroll_pane

0x6617,	// (0x00013832) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6617,	// (0x00013832) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6624,	// (0x0001383f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6624,	// (0x0001383f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6631,	// (0x0001384c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6631,	// (0x0001384c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x663e,	// (0x00013859) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x663e,	// (0x00013859) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6659,	// (0x00013874) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6659,	// (0x00013874) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6674,	// (0x0001388f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6674,	// (0x0001388f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x668f,	// (0x000138aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x668f,	// (0x000138aa) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x66aa,	// (0x000138c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x66aa,	// (0x000138c5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x0001cddb) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x0001cddb) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc262,	// (0x0001947d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc262,	// (0x0001947d) cell_vkb_candidate_pane_cp1

0xbc31,	// (0x00018e4c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbc31,	// (0x00018e4c) fep_vkb_candidate_drop_down_list_pane_g1

0xc288,	// (0x000194a3) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc288,	// (0x000194a3) fep_vkb_candidate_drop_down_list_pane_g2

0xc295,	// (0x000194b0) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc295,	// (0x000194b0) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x0001cdec) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x0001cdec) fep_vkb_candidate_drop_down_list_pane_g

0xc2a2,	// (0x000194bd) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc2a2,	// (0x000194bd) fep_vkb_candidate_drop_down_list_scroll_pane

0xc2af,	// (0x000194ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc2af,	// (0x000194ca) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc2bc,	// (0x000194d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc2bc,	// (0x000194d7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc2c8,	// (0x000194e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc2c8,	// (0x000194e3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc2d4,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc2d4,	// (0x000194ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc2f5,	// (0x00019510) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc2f5,	// (0x00019510) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc316,	// (0x00019531) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc316,	// (0x00019531) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc337,	// (0x00019552) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc337,	// (0x00019552) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc358,	// (0x00019573) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc358,	// (0x00019573) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x0001cdf3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x0001cdf3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7322,	// (0x0001453d) title_pane_g1_ParamLimits

0x732f,	// (0x0001454a) title_pane_g2_ParamLimits

0xf54e,	// (0x0001c769) title_pane_g_ParamLimits

0x4322,	// (0x0001153d) aid_call2_pane

0x431a,	// (0x00011535) aid_call_pane

0x432a,	// (0x00011545) popup_clock_analogue_window_g1

0x432a,	// (0x00011545) popup_clock_analogue_window_g2

0x59e1,	// (0x00012bfc) popup_clock_analogue_window_g3

0x59ea,	// (0x00012c05) popup_clock_analogue_window_g4

0x323b,	// (0x00010456) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001c90e) popup_clock_analogue_window_g

0x59f2,	// (0x00012c0d) popup_clock_analogue_window_t1

0x5a00,	// (0x00012c1b) clock_digital_number_pane_ParamLimits

0x5a00,	// (0x00012c1b) clock_digital_number_pane

0x5a0c,	// (0x00012c27) clock_digital_number_pane_cp02_ParamLimits

0x5a0c,	// (0x00012c27) clock_digital_number_pane_cp02

0x5a18,	// (0x00012c33) clock_digital_number_pane_cp03_ParamLimits

0x5a18,	// (0x00012c33) clock_digital_number_pane_cp03

0x5a24,	// (0x00012c3f) clock_digital_number_pane_cp04_ParamLimits

0x5a24,	// (0x00012c3f) clock_digital_number_pane_cp04

0x5a30,	// (0x00012c4b) clock_digital_separator_pane_ParamLimits

0x5a30,	// (0x00012c4b) clock_digital_separator_pane

0x5a3c,	// (0x00012c57) popup_clock_digital_window_t1_ParamLimits

0x5a3c,	// (0x00012c57) popup_clock_digital_window_t1

0x323b,	// (0x00010456) clock_digital_number_pane_g1

0x323b,	// (0x00010456) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001c919) clock_digital_number_pane_g

0x323b,	// (0x00010456) clock_digital_separator_pane_g1

0x323b,	// (0x00010456) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001c919) clock_digital_separator_pane_g

0x8944,	// (0x00015b5f) aid_fill_nsta_ParamLimits

0x8a94,	// (0x00015caf) indicator_nsta_pane_ParamLimits

0x8c25,	// (0x00015e40) popup_clock_analogue_window

0x8c25,	// (0x00015e40) popup_clock_digital_window

0x347a,	// (0x00010695) grid_indicator_nsta_pane_ParamLimits

0xb393,	// (0x000185ae) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0001ccb9) clock_nsta_pane_t

0x59a5,	// (0x00012bc0) aid_size_max_handle

0x59af,	// (0x00012bca) aid_size_min_handle

0x49b6,	// (0x00011bd1) editor_scroll_pane

0xc373,	// (0x0001958e) ex_editor_pane

0x3d99,	// (0x00010fb4) scroll_pane_cp13

0x3ad1,	// (0x00010cec) scroll_pane_cp14

0x4378,	// (0x00011593) scroll_pane_cp36

0x7d5c,	// (0x00014f77) list_single_graphic_hl_pane_cp2_ParamLimits

0x7d5c,	// (0x00014f77) list_single_graphic_hl_pane_cp2

0xa5ec,	// (0x00017807) list_single_graphic_hl_pane_ParamLimits

0xa5ec,	// (0x00017807) list_single_graphic_hl_pane

0xc37b,	// (0x00019596) aid_size_min_hl_cp1

0xc384,	// (0x0001959f) list_highlight_pane_cp34_ParamLimits

0xc384,	// (0x0001959f) list_highlight_pane_cp34

0xc395,	// (0x000195b0) list_single_graphic_hl_pane_g1_ParamLimits

0xc395,	// (0x000195b0) list_single_graphic_hl_pane_g1

0xc3a2,	// (0x000195bd) list_single_graphic_hl_pane_g2_ParamLimits

0xc3a2,	// (0x000195bd) list_single_graphic_hl_pane_g2

0xc3a2,	// (0x000195bd) list_single_graphic_hl_pane_g3_ParamLimits

0xc3a2,	// (0x000195bd) list_single_graphic_hl_pane_g3

0xab3f,	// (0x00017d5a) list_single_graphic_hl_pane_g4_ParamLimits

0xab3f,	// (0x00017d5a) list_single_graphic_hl_pane_g4

0xc3ae,	// (0x000195c9) list_single_graphic_hl_pane_g5_ParamLimits

0xc3ae,	// (0x000195c9) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x0001ce04) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x0001ce04) list_single_graphic_hl_pane_g

0xc3c2,	// (0x000195dd) list_single_graphic_hl_pane_t1_ParamLimits

0xc3c2,	// (0x000195dd) list_single_graphic_hl_pane_t1

0xc3d8,	// (0x000195f3) aid_size_min_hl_cp2

0xc3e1,	// (0x000195fc) list_highlight_pane_cp34_cp2_ParamLimits

0xc3e1,	// (0x000195fc) list_highlight_pane_cp34_cp2

0xc395,	// (0x000195b0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc395,	// (0x000195b0) list_single_graphic_hl_pane_g1_cp2

0xc3ee,	// (0x00019609) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc3ee,	// (0x00019609) list_single_graphic_hl_pane_g2_cp2

0xc3fa,	// (0x00019615) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc3fa,	// (0x00019615) list_single_graphic_hl_pane_g3_cp2

0x3ae5,	// (0x00010d00) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3ae5,	// (0x00010d00) list_single_graphic_hl_pane_g4_cp2

0xc408,	// (0x00019623) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc408,	// (0x00019623) list_single_graphic_hl_pane_g5_cp2

0x5cf5,	// (0x00012f10) control_pane_g4_ParamLimits

0x5cf5,	// (0x00012f10) control_pane_g4

0x8305,	// (0x00015520) bg_popup_sub_pane_cp10_ParamLimits

0xb9c0,	// (0x00018bdb) list_choice_list_pane_ParamLimits

0xb9cf,	// (0x00018bea) scroll_pane_cp23

0x3650,	// (0x0001086b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbffe,	// (0x00019219) list_preview_fixed_pane_ParamLimits

0xc014,	// (0x0001922f) list_preview_fixed_pane_cp_ParamLimits

0xc014,	// (0x0001922f) list_preview_fixed_pane_cp

0xc020,	// (0x0001923b) popup_preview_fixed_window_g1_ParamLimits

0xc020,	// (0x0001923b) popup_preview_fixed_window_g1

0xc02c,	// (0x00019247) popup_preview_fixed_window_g2_ParamLimits

0xc02c,	// (0x00019247) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x0001cd8c) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x0001cd8c) popup_preview_fixed_window_g

0x5917,	// (0x00012b32) aid_navi_side_left_pane_ParamLimits

0x592c,	// (0x00012b47) aid_navi_side_right_pane_ParamLimits

0x5944,	// (0x00012b5f) navi_icon_pane_stacon_ParamLimits

0x5958,	// (0x00012b73) navi_navi_pane_stacon_ParamLimits

0x5944,	// (0x00012b5f) navi_text_pane_stacon_ParamLimits

0x3231,	// (0x0001044c) main_text_info_pane

0xc432,	// (0x0001964d) listscroll_text_info_pane

0xc43a,	// (0x00019655) list_text_info_pane_ParamLimits

0xc43a,	// (0x00019655) list_text_info_pane

0xc449,	// (0x00019664) scroll_pane_cp24_ParamLimits

0xc449,	// (0x00019664) scroll_pane_cp24

0xc467,	// (0x00019682) list_text_info_pane_t1_ParamLimits

0xc467,	// (0x00019682) list_text_info_pane_t1

0x8357,	// (0x00015572) popup_fast_swap2_window_ParamLimits

0x8357,	// (0x00015572) popup_fast_swap2_window

0xc48c,	// (0x000196a7) aid_size_cell_fast2

0x3231,	// (0x0001044c) bg_popup_window_pane_cp17

0x9391,	// (0x000165ac) heading_pane_cp2

0x3856,	// (0x00010a71) listscroll_fast2_pane

0xc496,	// (0x000196b1) grid_fast2_pane

0xc4a0,	// (0x000196bb) listscroll_fast2_pane_g1

0xc4aa,	// (0x000196c5) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x0001ce0f) listscroll_fast2_pane_g

0x3d99,	// (0x00010fb4) scroll_pane_cp26

0xc4b4,	// (0x000196cf) cell_fast2_pane_ParamLimits

0xc4b4,	// (0x000196cf) cell_fast2_pane

0xc4cb,	// (0x000196e6) cell_fast2_pane_g1

0xc4d4,	// (0x000196ef) cell_fast2_pane_g2

0xc4dd,	// (0x000196f8) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x0001ce14) cell_fast2_pane_g

0x3898,	// (0x00010ab3) grid_highlight_pane_cp9

0x38ad,	// (0x00010ac8) main_eswt_pane_ParamLimits

0x38ad,	// (0x00010ac8) main_eswt_pane

0xc45e,	// (0x00019679) list_single_text_info_pane

0xc4e5,	// (0x00019700) eswt_ctrl_button_pane

0xc4e5,	// (0x00019700) eswt_ctrl_canvas_pane

0xc4ed,	// (0x00019708) eswt_ctrl_combo_pane

0xc4e5,	// (0x00019700) eswt_ctrl_default_pane

0xc4e5,	// (0x00019700) eswt_ctrl_label_pane

0xc4f5,	// (0x00019710) eswt_ctrl_wait_pane

0xc4fd,	// (0x00019718) eswt_shell_pane

0x3231,	// (0x0001044c) listscroll_eswt_app_pane

0xc51d,	// (0x00019738) popup_eswt_tasktip_window_ParamLimits

0xc51d,	// (0x00019738) popup_eswt_tasktip_window

0x8fa2,	// (0x000161bd) bg_popup_window_pane_cp18

0xc52e,	// (0x00019749) eswt_control_pane_g1_ParamLimits

0xc52e,	// (0x00019749) eswt_control_pane_g1

0xc53b,	// (0x00019756) eswt_control_pane_g2_ParamLimits

0xc53b,	// (0x00019756) eswt_control_pane_g2

0xc548,	// (0x00019763) eswt_control_pane_g3_ParamLimits

0xc548,	// (0x00019763) eswt_control_pane_g3

0xc555,	// (0x00019770) eswt_control_pane_g4_ParamLimits

0xc555,	// (0x00019770) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x0001ce1b) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x0001ce1b) eswt_control_pane_g

0x3bd0,	// (0x00010deb) bg_button_pane_ParamLimits

0x3bd0,	// (0x00010deb) bg_button_pane

0x38ad,	// (0x00010ac8) common_borders_pane_copy2_ParamLimits

0x38ad,	// (0x00010ac8) common_borders_pane_copy2

0xc562,	// (0x0001977d) control_button_pane_g1_ParamLimits

0xc562,	// (0x0001977d) control_button_pane_g1

0xc56e,	// (0x00019789) control_button_pane_g2_ParamLimits

0xc56e,	// (0x00019789) control_button_pane_g2

0xc57a,	// (0x00019795) control_button_pane_g3_ParamLimits

0xc57a,	// (0x00019795) control_button_pane_g3

0x0002,

0xfc09,	// (0x0001ce24) control_button_pane_g_ParamLimits

0xfc09,	// (0x0001ce24) control_button_pane_g

0xc58e,	// (0x000197a9) control_button_pane_t1

0xc59c,	// (0x000197b7) control_button_pane_t2

0x0001,

0xfc10,	// (0x0001ce2b) control_button_pane_t

0x8e7c,	// (0x00016097) bg_button_pane_g1

0x8e8c,	// (0x000160a7) bg_button_pane_g2

0x8e84,	// (0x0001609f) bg_button_pane_g3

0x8e9c,	// (0x000160b7) bg_button_pane_g4

0x8e94,	// (0x000160af) bg_button_pane_g5

0x8ea4,	// (0x000160bf) bg_button_pane_g6

0x8eac,	// (0x000160c7) bg_button_pane_g7

0x8ebc,	// (0x000160d7) bg_button_pane_g8

0x8eb4,	// (0x000160cf) bg_button_pane_g9

0x0008,

0xf861,	// (0x0001ca7c) bg_button_pane_g

0xb97b,	// (0x00018b96) common_borders_pane_ParamLimits

0xb97b,	// (0x00018b96) common_borders_pane

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy1_ParamLimits

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy1

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy1_ParamLimits

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy1

0xc548,	// (0x00019763) eswt_control_pane_g3_copy1_ParamLimits

0xc548,	// (0x00019763) eswt_control_pane_g3_copy1

0xc555,	// (0x00019770) eswt_control_pane_g4_copy1_ParamLimits

0xc555,	// (0x00019770) eswt_control_pane_g4_copy1

0xb9b6,	// (0x00018bd1) bg_eswt_ctrl_canvas_pane_g1

0xb97b,	// (0x00018b96) common_borders_pane_cp2_ParamLimits

0xb97b,	// (0x00018b96) common_borders_pane_cp2

0xb97b,	// (0x00018b96) common_borders_pane_cp3_ParamLimits

0xb97b,	// (0x00018b96) common_borders_pane_cp3

0xc5aa,	// (0x000197c5) separator_horizontal_pane

0xc5b2,	// (0x000197cd) separator_vertical_pane

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy2_ParamLimits

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy2

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy2_ParamLimits

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy2

0xc548,	// (0x00019763) eswt_control_pane_g3_copy2_ParamLimits

0xc548,	// (0x00019763) eswt_control_pane_g3_copy2

0xc555,	// (0x00019770) eswt_control_pane_g4_copy2_ParamLimits

0xc555,	// (0x00019770) eswt_control_pane_g4_copy2

0x3231,	// (0x0001044c) common_borders_pane_cp4

0xc5bb,	// (0x000197d6) separator_horizontal_pane_g1

0xc5c4,	// (0x000197df) separator_horizontal_pane_g2

0xc5cd,	// (0x000197e8) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x0001ce30) separator_horizontal_pane_g

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy3_ParamLimits

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy3

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy3_ParamLimits

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy3

0xc548,	// (0x00019763) eswt_control_pane_g3_copy3_ParamLimits

0xc548,	// (0x00019763) eswt_control_pane_g3_copy3

0xc555,	// (0x00019770) eswt_control_pane_g4_copy3_ParamLimits

0xc555,	// (0x00019770) eswt_control_pane_g4_copy3

0x3231,	// (0x0001044c) common_borders_pane_cp5

0xc5d6,	// (0x000197f1) separator_vertical_pane_g1

0xc5df,	// (0x000197fa) separator_vertical_pane_g2

0xc5e8,	// (0x00019803) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x0001ce37) separator_vertical_pane_g

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy4_ParamLimits

0xc52e,	// (0x00019749) eswt_control_pane_g1_copy4

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy4_ParamLimits

0xc53b,	// (0x00019756) eswt_control_pane_g2_copy4

0xc548,	// (0x00019763) eswt_control_pane_g3_copy4_ParamLimits

0xc548,	// (0x00019763) eswt_control_pane_g3_copy4

0xc555,	// (0x00019770) eswt_control_pane_g4_copy4_ParamLimits

0xc555,	// (0x00019770) eswt_control_pane_g4_copy4

0xc5f1,	// (0x0001980c) eswt_ctrl_combo_button_pane

0xc5f9,	// (0x00019814) eswt_ctrl_input_pane

0xc601,	// (0x0001981c) popup_choice_list_window_cp70

0xc609,	// (0x00019824) eswt_ctrl_input_pane_t1

0x3231,	// (0x0001044c) input_focus_pane_cp70

0xb97b,	// (0x00018b96) bg_button_pane_cp70_ParamLimits

0xb97b,	// (0x00018b96) bg_button_pane_cp70

0xc617,	// (0x00019832) eswt_ctrl_combo_button_pane_g1

0xc61f,	// (0x0001983a) wait_bar_pane_cp70

0x8fa2,	// (0x000161bd) bg_popup_window_pane_cp70_ParamLimits

0x8fa2,	// (0x000161bd) bg_popup_window_pane_cp70

0xc627,	// (0x00019842) popup_eswt_tasktip_window_t1

0xc63d,	// (0x00019858) wait_bar_pane_cp71_ParamLimits

0xc63d,	// (0x00019858) wait_bar_pane_cp71

0xc649,	// (0x00019864) grid_eswt_app_pane

0x41c2,	// (0x000113dd) scroll_pane_cp70

0xc652,	// (0x0001986d) cell_eswt_app_pane_ParamLimits

0xc652,	// (0x0001986d) cell_eswt_app_pane

0xc684,	// (0x0001989f) cell_eswt_app_pane_g1_ParamLimits

0xc684,	// (0x0001989f) cell_eswt_app_pane_g1

0xc6b3,	// (0x000198ce) cell_eswt_app_pane_g2_ParamLimits

0xc6b3,	// (0x000198ce) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x0001ce3e) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x0001ce3e) cell_eswt_app_pane_g

0xc6dc,	// (0x000198f7) cell_eswt_app_pane_t1_ParamLimits

0xc6dc,	// (0x000198f7) cell_eswt_app_pane_t1

0xc70e,	// (0x00019929) grid_highlight_pane_cp70_ParamLimits

0xc70e,	// (0x00019929) grid_highlight_pane_cp70

0x48af,	// (0x00011aca) set_content_pane_g1

0x8220,	// (0x0001543b) status_small_volume_pane

0x66c5,	// (0x000138e0) status_small_volume_pane_g1

0x66cd,	// (0x000138e8) volume_small2_pane

0x66d6,	// (0x000138f1) volume_small2_pane_g1

0x66df,	// (0x000138fa) volume_small2_pane_g2

0x66e8,	// (0x00013903) volume_small2_pane_g3

0x66f1,	// (0x0001390c) volume_small2_pane_g4

0x66fa,	// (0x00013915) volume_small2_pane_g5

0x6703,	// (0x0001391e) volume_small2_pane_g6

0x670c,	// (0x00013927) volume_small2_pane_g7

0x6715,	// (0x00013930) volume_small2_pane_g8

0x671e,	// (0x00013939) volume_small2_pane_g9

0x6727,	// (0x00013942) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x0001ce43) volume_small2_pane_g

0xbd85,	// (0x00018fa0) fep_vkb_top_text_pane_g1_ParamLimits

0xbda0,	// (0x00018fbb) fep_vkb_top_text_pane_t1_ParamLimits

0xc038,	// (0x00019253) popup_preview_fixed_window_g3_ParamLimits

0xc038,	// (0x00019253) popup_preview_fixed_window_g3

0x8868,	// (0x00015a83) popup_toolbar_trans_pane

0xa33d,	// (0x00017558) aid_height_set_list_ParamLimits

0xa34e,	// (0x00017569) aid_size_parent_ParamLimits

0x8305,	// (0x00015520) list_highlight_pane_cp2_ParamLimits

0x48af,	// (0x00011aca) set_content_pane_g1_ParamLimits

0xa600,	// (0x0001781b) list_single_image_pane_ParamLimits

0xa600,	// (0x0001781b) list_single_image_pane

0xc71a,	// (0x00019935) aid_size_cell_image_ParamLimits

0xc71a,	// (0x00019935) aid_size_cell_image

0xc727,	// (0x00019942) grid_single_image_pane_ParamLimits

0xc727,	// (0x00019942) grid_single_image_pane

0x3bfb,	// (0x00010e16) list_single_image_pane_g1_ParamLimits

0x3bfb,	// (0x00010e16) list_single_image_pane_g1

0x3c07,	// (0x00010e22) list_single_image_pane_g2_ParamLimits

0x3c07,	// (0x00010e22) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0001ce58) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0001ce58) list_single_image_pane_g

0xc735,	// (0x00019950) list_single_image_pane_t1_ParamLimits

0xc735,	// (0x00019950) list_single_image_pane_t1

0xc74b,	// (0x00019966) cell_image_list_pane_ParamLimits

0xc74b,	// (0x00019966) cell_image_list_pane

0xc761,	// (0x0001997c) cell_image_list_pane_g1

0xc76a,	// (0x00019985) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0001ce5d) cell_image_list_pane_g

0xc773,	// (0x0001998e) aid_size_cell_tb_trans_pane

0x3bd0,	// (0x00010deb) bg_tb_trans_pane

0xc785,	// (0x000199a0) grid_tb_trans_pane

0x8e7c,	// (0x00016097) bg_tb_trans_pane_g1

0x8e8c,	// (0x000160a7) bg_tb_trans_pane_g2

0x8e84,	// (0x0001609f) bg_tb_trans_pane_g3

0x8e9c,	// (0x000160b7) bg_tb_trans_pane_g4

0x8e94,	// (0x000160af) bg_tb_trans_pane_g5

0x8ebc,	// (0x000160d7) bg_tb_trans_pane_g6

0x8eb4,	// (0x000160cf) bg_tb_trans_pane_g7

0x8ea4,	// (0x000160bf) bg_tb_trans_pane_g8

0x8eac,	// (0x000160c7) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0001ce62) bg_tb_trans_pane_g

0xc799,	// (0x000199b4) cell_toolbar_trans_pane_ParamLimits

0xc799,	// (0x000199b4) cell_toolbar_trans_pane

0xb9b6,	// (0x00018bd1) cell_toolbar_trans_pane_g1

0xb584,	// (0x0001879f) list_form2_midp_pane_t1

0xb592,	// (0x000187ad) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0001ccff) list_form2_midp_pane_t

0xb5a0,	// (0x000187bb) scroll_pane_cp51_ParamLimits

0xb7bd,	// (0x000189d8) form2_midp_wait_pane_g1

0xb7c6,	// (0x000189e1) form2_midp_wait_pane_g2

0xb7cf,	// (0x000189ea) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0001cd14) form2_midp_wait_pane_g

0x347a,	// (0x00010695) list_highlight_pane_cp21_ParamLimits

0xb813,	// (0x00018a2e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb822,	// (0x00018a3d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa5a5,	// (0x000177c0) list_single_2graphic_im_pane_ParamLimits

0xa5a5,	// (0x000177c0) list_single_2graphic_im_pane

0xc7bf,	// (0x000199da) list_single_2graphic_im_pane_g1_ParamLimits

0xc7bf,	// (0x000199da) list_single_2graphic_im_pane_g1

0xc7d0,	// (0x000199eb) list_single_2graphic_im_pane_g2_ParamLimits

0xc7d0,	// (0x000199eb) list_single_2graphic_im_pane_g2

0xc7dc,	// (0x000199f7) list_single_2graphic_im_pane_g3_ParamLimits

0xc7dc,	// (0x000199f7) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0001ce75) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0001ce75) list_single_2graphic_im_pane_g

0xc7fc,	// (0x00019a17) list_single_2graphic_im_pane_t1_ParamLimits

0xc7fc,	// (0x00019a17) list_single_2graphic_im_pane_t1

0xc044,	// (0x0001925f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc044,	// (0x0001925f) list_single_graphic_2heading_pane_fp

0xc08c,	// (0x000192a7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc08c,	// (0x000192a7) list_single_graphic_2heading_pane_fp_g1

0xc05d,	// (0x00019278) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc05d,	// (0x00019278) list_single_graphic_2heading_pane_fp_g2

0xbfb6,	// (0x000191d1) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xbfb6,	// (0x000191d1) list_single_graphic_2heading_pane_fp_g3

0xbfc2,	// (0x000191dd) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbfc2,	// (0x000191dd) list_single_graphic_2heading_pane_fp_g4

0xc069,	// (0x00019284) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc069,	// (0x00019284) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x0001cd9c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001cd9c) list_single_graphic_2heading_pane_fp_g

0xc82d,	// (0x00019a48) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc82d,	// (0x00019a48) list_single_graphic_2heading_pane_fp_t1

0xc0c4,	// (0x000192df) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc0c4,	// (0x000192df) list_single_graphic_2heading_pane_fp_t2

0xc843,	// (0x00019a5e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc843,	// (0x00019a5e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0001ce7e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0001ce7e) list_single_graphic_2heading_pane_fp_t

0xba47,	// (0x00018c62) fep_hwr_write_pane_g5_ParamLimits

0xba47,	// (0x00018c62) fep_hwr_write_pane_g5

0xba53,	// (0x00018c6e) fep_hwr_write_pane_g6_ParamLimits

0xba53,	// (0x00018c6e) fep_hwr_write_pane_g6

0xc4fd,	// (0x00019718) eswt_shell_pane_ParamLimits

0x8fa2,	// (0x000161bd) bg_popup_window_pane_cp18_ParamLimits

0xa26c,	// (0x00017487) heading_pane_cp70

0xc627,	// (0x00019842) popup_eswt_tasktip_window_t1_ParamLimits

0x899b,	// (0x00015bb6) aid_touch_tab_arrow_left

0x89aa,	// (0x00015bc5) aid_touch_tab_arrow_right

0x3412,	// (0x0001062d) title_pane_g3_ParamLimits

0x3412,	// (0x0001062d) title_pane_g3

0x3b2a,	// (0x00010d45) set_value_pane_g1

0x8868,	// (0x00015a83) popup_toolbar_trans_pane_ParamLimits

0xc773,	// (0x0001998e) aid_size_cell_tb_trans_pane_ParamLimits

0x3bd0,	// (0x00010deb) bg_tb_trans_pane_ParamLimits

0xc785,	// (0x000199a0) grid_tb_trans_pane_ParamLimits

0x3650,	// (0x0001086b) cont_note_pane_ParamLimits

0x3650,	// (0x0001086b) cont_note_pane

0x38ad,	// (0x00010ac8) cont_snote2_single_text_pane_ParamLimits

0x38ad,	// (0x00010ac8) cont_snote2_single_text_pane

0x38ad,	// (0x00010ac8) cont_snote2_single_graphic_pane_ParamLimits

0x38ad,	// (0x00010ac8) cont_snote2_single_graphic_pane

0x95ad,	// (0x000167c8) cont_note_wait_pane_ParamLimits

0x95ad,	// (0x000167c8) cont_note_wait_pane

0x95ad,	// (0x000167c8) cont_note_image_pane_ParamLimits

0x95ad,	// (0x000167c8) cont_note_image_pane

0xc859,	// (0x00019a74) popup_note2_window_g1_ParamLimits

0xc859,	// (0x00019a74) popup_note2_window_g1

0xc88a,	// (0x00019aa5) popup_note2_window_t1_ParamLimits

0xc88a,	// (0x00019aa5) popup_note2_window_t1

0xc8cf,	// (0x00019aea) popup_note2_window_t2_ParamLimits

0xc8cf,	// (0x00019aea) popup_note2_window_t2

0xc914,	// (0x00019b2f) popup_note2_window_t3_ParamLimits

0xc914,	// (0x00019b2f) popup_note2_window_t3

0xc959,	// (0x00019b74) popup_note2_window_t4_ParamLimits

0xc959,	// (0x00019b74) popup_note2_window_t4

0x36d4,	// (0x000108ef) popup_note2_window_t5_ParamLimits

0x36d4,	// (0x000108ef) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0001ce8a) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0001ce8a) popup_note2_window_t

0xc988,	// (0x00019ba3) popup_note2_image_window_g1_ParamLimits

0xc988,	// (0x00019ba3) popup_note2_image_window_g1

0xc994,	// (0x00019baf) popup_note2_image_window_g2_ParamLimits

0xc994,	// (0x00019baf) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0001ce95) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0001ce95) popup_note2_image_window_g

0xc9a6,	// (0x00019bc1) popup_note2_image_window_t1_ParamLimits

0xc9a6,	// (0x00019bc1) popup_note2_image_window_t1

0xc9be,	// (0x00019bd9) popup_note2_image_window_t2_ParamLimits

0xc9be,	// (0x00019bd9) popup_note2_image_window_t2

0xc9d6,	// (0x00019bf1) popup_note2_image_window_t3_ParamLimits

0xc9d6,	// (0x00019bf1) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0001ce9a) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0001ce9a) popup_note2_image_window_t

0x95bb,	// (0x000167d6) popup_note2_wait_window_g1_ParamLimits

0x95bb,	// (0x000167d6) popup_note2_wait_window_g1

0xc9f2,	// (0x00019c0d) popup_note2_wait_window_g2_ParamLimits

0xc9f2,	// (0x00019c0d) popup_note2_wait_window_g2

0x95d3,	// (0x000167ee) popup_note2_wait_window_g3_ParamLimits

0x95d3,	// (0x000167ee) popup_note2_wait_window_g3

0x0002,

0xfc86,	// (0x0001cea1) popup_note2_wait_window_g_ParamLimits

0xfc86,	// (0x0001cea1) popup_note2_wait_window_g

0xc9fe,	// (0x00019c19) popup_note2_wait_window_t1_ParamLimits

0xc9fe,	// (0x00019c19) popup_note2_wait_window_t1

0xca1c,	// (0x00019c37) popup_note2_wait_window_t2_ParamLimits

0xca1c,	// (0x00019c37) popup_note2_wait_window_t2

0xca3a,	// (0x00019c55) popup_note2_wait_window_t3_ParamLimits

0xca3a,	// (0x00019c55) popup_note2_wait_window_t3

0xca4c,	// (0x00019c67) popup_note2_wait_window_t4_ParamLimits

0xca4c,	// (0x00019c67) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0001cea8) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0001cea8) popup_note2_wait_window_t

0xca5e,	// (0x00019c79) wait_bar2_pane_ParamLimits

0xca5e,	// (0x00019c79) wait_bar2_pane

0xca76,	// (0x00019c91) popup_snote2_single_text_window_g1_ParamLimits

0xca76,	// (0x00019c91) popup_snote2_single_text_window_g1

0xca9e,	// (0x00019cb9) popup_snote2_single_text_window_t1_ParamLimits

0xca9e,	// (0x00019cb9) popup_snote2_single_text_window_t1

0xcaea,	// (0x00019d05) popup_snote2_single_text_window_t2_ParamLimits

0xcaea,	// (0x00019d05) popup_snote2_single_text_window_t2

0xcb36,	// (0x00019d51) popup_snote2_single_text_window_t3_ParamLimits

0xcb36,	// (0x00019d51) popup_snote2_single_text_window_t3

0xcb77,	// (0x00019d92) popup_snote2_single_text_window_t4_ParamLimits

0xcb77,	// (0x00019d92) popup_snote2_single_text_window_t4

0xcbad,	// (0x00019dc8) popup_snote2_single_text_window_t5_ParamLimits

0xcbad,	// (0x00019dc8) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0001ceb1) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0001ceb1) popup_snote2_single_text_window_t

0xcbd8,	// (0x00019df3) popup_snote2_single_graphic_window_g1_ParamLimits

0xcbd8,	// (0x00019df3) popup_snote2_single_graphic_window_g1

0xcc00,	// (0x00019e1b) popup_snote2_single_graphic_window_g2_ParamLimits

0xcc00,	// (0x00019e1b) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0001cebc) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0001cebc) popup_snote2_single_graphic_window_g

0xcc28,	// (0x00019e43) popup_snote2_single_graphic_window_t1_ParamLimits

0xcc28,	// (0x00019e43) popup_snote2_single_graphic_window_t1

0xcc74,	// (0x00019e8f) popup_snote2_single_graphic_window_t2_ParamLimits

0xcc74,	// (0x00019e8f) popup_snote2_single_graphic_window_t2

0xcb36,	// (0x00019d51) popup_snote2_single_graphic_window_t3_ParamLimits

0xcb36,	// (0x00019d51) popup_snote2_single_graphic_window_t3

0xcb77,	// (0x00019d92) popup_snote2_single_graphic_window_t4_ParamLimits

0xcb77,	// (0x00019d92) popup_snote2_single_graphic_window_t4

0xcbad,	// (0x00019dc8) popup_snote2_single_graphic_window_t5_ParamLimits

0xcbad,	// (0x00019dc8) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0001cec1) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0001cec1) popup_snote2_single_graphic_window_t

0xb450,	// (0x0001866b) clock_nsta_pane_cp2_t1

0xb450,	// (0x0001866b) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0001ccd5) clock_nsta_pane_cp2_t

0x3bef,	// (0x00010e0a) form_field_data_wide_pane_g1_ParamLimits

0x3bfb,	// (0x00010e16) form_field_data_wide_pane_g2_ParamLimits

0x3bfb,	// (0x00010e16) form_field_data_wide_pane_g2

0x3c07,	// (0x00010e22) form_field_data_wide_pane_g3_ParamLimits

0x3c07,	// (0x00010e22) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001c891) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001c891) form_field_data_wide_pane_g

0xb32f,	// (0x0001854a) grid_touch_3_pane_ParamLimits

0xb32f,	// (0x0001854a) grid_touch_3_pane

0xccc0,	// (0x00019edb) cell_touch_3_pane_ParamLimits

0xccc0,	// (0x00019edb) cell_touch_3_pane

0xb9b6,	// (0x00018bd1) cell_touch_3_pane_g1

0xb9b6,	// (0x00018bd1) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0001cd5a) cell_touch_3_pane_g

0x3706,	// (0x00010921) cont_query_data_pane

0x370e,	// (0x00010929) cont_query_data_pane_cp1

0xccf3,	// (0x00019f0e) button_value_adjust_pane_cp7

0xccfb,	// (0x00019f16) query_popup_pane_cp3

0x4404,	// (0x0001161f) bg_popup_sub_pane_cp22_ParamLimits

0x5a5b,	// (0x00012c76) navi_navi_volume_pane_cp2

0x5a76,	// (0x00012c91) popup_side_volume_key_window_g2

0x5a85,	// (0x00012ca0) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001c927) popup_side_volume_key_window_g

0x5aa2,	// (0x00012cbd) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001c92e) popup_side_volume_key_window_t

0x47b2,	// (0x000119cd) popup_side_volume_key_window_ParamLimits

0x77c5,	// (0x000149e0) list_double_graphic_pane_g4_ParamLimits

0x77c5,	// (0x000149e0) list_double_graphic_pane_g4

0xa5d4,	// (0x000177ef) list_single_2heading_msg_pane_ParamLimits

0xa5d4,	// (0x000177ef) list_single_2heading_msg_pane

0xcd2c,	// (0x00019f47) list_single_2heading_msg_pane_g1_ParamLimits

0xcd2c,	// (0x00019f47) list_single_2heading_msg_pane_g1

0x3ae5,	// (0x00010d00) list_single_2heading_msg_pane_g2_ParamLimits

0x3ae5,	// (0x00010d00) list_single_2heading_msg_pane_g2

0xcd38,	// (0x00019f53) list_single_2heading_msg_pane_g3_ParamLimits

0xcd38,	// (0x00019f53) list_single_2heading_msg_pane_g3

0xcd44,	// (0x00019f5f) list_single_2heading_msg_pane_g4_ParamLimits

0xcd44,	// (0x00019f5f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0001cecc) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0001cecc) list_single_2heading_msg_pane_g

0xcd5c,	// (0x00019f77) list_single_2heading_msg_pane_t1_ParamLimits

0xcd5c,	// (0x00019f77) list_single_2heading_msg_pane_t1

0xcd84,	// (0x00019f9f) list_single_2heading_msg_pane_t2_ParamLimits

0xcd84,	// (0x00019f9f) list_single_2heading_msg_pane_t2

0xcdb3,	// (0x00019fce) list_single_2heading_msg_pane_t3_ParamLimits

0xcdb3,	// (0x00019fce) list_single_2heading_msg_pane_t3

0xcdec,	// (0x0001a007) list_single_2heading_msg_pane_t4_ParamLimits

0xcdec,	// (0x0001a007) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0001ced5) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0001ced5) list_single_2heading_msg_pane_t

0x341e,	// (0x00010639) title_pane_g4_ParamLimits

0x341e,	// (0x00010639) title_pane_g4

0x5867,	// (0x00012a82) title_pane_stacon_g3_ParamLimits

0x5867,	// (0x00012a82) title_pane_stacon_g3

0xc7f0,	// (0x00019a0b) list_single_2graphic_im_pane_g4_ParamLimits

0xc7f0,	// (0x00019a0b) list_single_2graphic_im_pane_g4

0xa01d,	// (0x00017238) popup_side_volume_key_window_cp

0xa928,	// (0x00017b43) main_idle_act2_pane_t1

0x5e8d,	// (0x000130a8) toolbar_button_pane_g10

0x7602,	// (0x0001481d) popup_toolbar_window_cp1

0xb441,	// (0x0001865c) clock_nsta_pane_cp_t1

0xb441,	// (0x0001865c) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0001ccd0) clock_nsta_pane_cp_t

0x5a5b,	// (0x00012c76) navi_navi_volume_pane_cp2_ParamLimits

0x5a6a,	// (0x00012c85) popup_side_volume_key_window_g1_ParamLimits

0x5a76,	// (0x00012c91) popup_side_volume_key_window_g2_ParamLimits

0x5a85,	// (0x00012ca0) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001c927) popup_side_volume_key_window_g_ParamLimits

0x6316,	// (0x00013531) fep_hwr_aid_pane

0x63bf,	// (0x000135da) bg_fep_hwr_top_pane_g4_ParamLimits

0xba17,	// (0x00018c32) fep_hwr_top_pane_g1_ParamLimits

0xba29,	// (0x00018c44) fep_hwr_top_pane_g2_ParamLimits

0x63df,	// (0x000135fa) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0001cd25) fep_hwr_top_pane_g_ParamLimits

0x63f4,	// (0x0001360f) fep_hwr_top_text_pane_ParamLimits

0x9dd2,	// (0x00016fed) aid_touch_tab_arrow_arrow_2

0x9ddb,	// (0x00016ff6) aid_touch_tab_arrow_left_2

0x632a,	// (0x00013545) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6361,	// (0x0001357c) fep_hwr_prediction_pane

0xbb7f,	// (0x00018d9a) fep_vkb_prediction_pane

0xbc85,	// (0x00018ea0) fep_vkb_side_pane_g3_ParamLimits

0xbc85,	// (0x00018ea0) fep_vkb_side_pane_g3

0x6583,	// (0x0001379e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x65f4,	// (0x0001380f) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6601,	// (0x0001381c) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x0001cdd4) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6730,	// (0x0001394b) fep_hwr_prediction_pane_g1

0x673a,	// (0x00013955) fep_hwr_prediction_pane_g2

0x6742,	// (0x0001395d) fep_hwr_prediction_pane_g3

0x674a,	// (0x00013965) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0001cede) fep_hwr_prediction_pane_g

0xce11,	// (0x0001a02c) fep_vkb_prediction_pane_g1

0xce1b,	// (0x0001a036) fep_vkb_prediction_pane_g2

0xce23,	// (0x0001a03e) fep_vkb_prediction_pane_g3

0xce2b,	// (0x0001a046) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001cee7) fep_vkb_prediction_pane_g

0x6196,	// (0x000133b1) slider_set_pane_g3

0x61aa,	// (0x000133c5) slider_set_pane_g4

0x61c2,	// (0x000133dd) slider_set_pane_g5

0x6196,	// (0x000133b1) slider_set_pane_g6

0x61d8,	// (0x000133f3) slider_set_pane_g7

0xa4d3,	// (0x000176ee) slider_form_pane_g3

0xa4dc,	// (0x000176f7) slider_form_pane_g4

0xa4e4,	// (0x000176ff) slider_form_pane_g5

0xa4d3,	// (0x000176ee) slider_form_pane_g6

0xa4ec,	// (0x00017707) slider_form_pane_g7

0xac2b,	// (0x00017e46) slider_set_pane_vc_g3

0xac34,	// (0x00017e4f) slider_set_pane_vc_g4

0xac3d,	// (0x00017e58) slider_set_pane_vc_g5

0xac2b,	// (0x00017e46) slider_set_pane_vc_g6

0xac46,	// (0x00017e61) slider_set_pane_vc_g7

0xb0f4,	// (0x0001830f) slider_form_pane_vc_g1

0xb0fd,	// (0x00018318) slider_form_pane_vc_g2

0xb106,	// (0x00018321) slider_form_pane_vc_g3

0xb0f4,	// (0x0001830f) slider_form_pane_vc_g4

0xb10f,	// (0x0001832a) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0001cca2) slider_form_pane_vc_g

0x3231,	// (0x0001044c) main_idle_act3_pane

0xce33,	// (0x0001a04e) ai3_links_pane

0xce3c,	// (0x0001a057) popup_ai3_data_window_ParamLimits

0xce3c,	// (0x0001a057) popup_ai3_data_window

0x3231,	// (0x0001044c) grid_ai3_links_pane

0xce5a,	// (0x0001a075) cell_ai3_links_pane_ParamLimits

0xce5a,	// (0x0001a075) cell_ai3_links_pane

0xce74,	// (0x0001a08f) bg_popup_sub_pane_cp11

0xce81,	// (0x0001a09c) cell_ai3_links_pane_g1

0x3231,	// (0x0001044c) bg_popup_sub_pane_cp12

0xcea6,	// (0x0001a0c1) heading_ai3_data_pane

0xceae,	// (0x0001a0c9) list_ai3_gene_pane

0xcedb,	// (0x0001a0f6) popup_ai3_data_window_g1

0xcee3,	// (0x0001a0fe) heading_ai3_data_pane_g1

0xceeb,	// (0x0001a106) heading_ai3_data_pane_t1

0xcef9,	// (0x0001a114) list_double_ai3_gene_pane_ParamLimits

0xcef9,	// (0x0001a114) list_double_ai3_gene_pane

0xcf06,	// (0x0001a121) list_single_ai3_gene_pane_ParamLimits

0xcf06,	// (0x0001a121) list_single_ai3_gene_pane

0xb97b,	// (0x00018b96) list_highlight_pane_cp7_ParamLimits

0xb97b,	// (0x00018b96) list_highlight_pane_cp7

0xcf13,	// (0x0001a12e) list_single_a13_gene_pane_t1_ParamLimits

0xcf13,	// (0x0001a12e) list_single_a13_gene_pane_t1

0xcf2a,	// (0x0001a145) list_single_ai3_gene_pane_g1

0xcf33,	// (0x0001a14e) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0001cef0) list_single_ai3_gene_pane_g

0xcf3b,	// (0x0001a156) list_double_ai3_gene_pane_g1_ParamLimits

0xcf3b,	// (0x0001a156) list_double_ai3_gene_pane_g1

0xcf47,	// (0x0001a162) list_double_ai3_gene_pane_t1_ParamLimits

0xcf47,	// (0x0001a162) list_double_ai3_gene_pane_t1

0xcf63,	// (0x0001a17e) list_double_ai3_gene_pane_t2_ParamLimits

0xcf63,	// (0x0001a17e) list_double_ai3_gene_pane_t2

0xcf78,	// (0x0001a193) list_double_ai3_gene_pane_t3_ParamLimits

0xcf78,	// (0x0001a193) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0001cef5) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0001cef5) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcd0c,	// (0x00019f27) aid_size_min_col_2

0xcd16,	// (0x00019f31) aid_size_min_msg_ParamLimits

0xcd16,	// (0x00019f31) aid_size_min_msg

0xbd91,	// (0x00018fac) fep_vkb_top_text_pane_g2_ParamLimits

0xbd91,	// (0x00018fac) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0001cd55) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0001cd55) fep_vkb_top_text_pane_g

0x3231,	// (0x0001044c) main_hc_apps_shell_pane

0xcf95,	// (0x0001a1b0) grid_hc_apps_pane_ParamLimits

0xcf95,	// (0x0001a1b0) grid_hc_apps_pane

0xcfa4,	// (0x0001a1bf) list_hc_apps_pane

0xcfac,	// (0x0001a1c7) scroll_pane_cp37_ParamLimits

0xcfac,	// (0x0001a1c7) scroll_pane_cp37

0xcfb8,	// (0x0001a1d3) cell_hc_apps_pane_ParamLimits

0xcfb8,	// (0x0001a1d3) cell_hc_apps_pane

0xd070,	// (0x0001a28b) cell_hc_apps_pane_g1_ParamLimits

0xd070,	// (0x0001a28b) cell_hc_apps_pane_g1

0xd0a1,	// (0x0001a2bc) cell_hc_apps_pane_g2_ParamLimits

0xd0a1,	// (0x0001a2bc) cell_hc_apps_pane_g2

0xd0bd,	// (0x0001a2d8) cell_hc_apps_pane_g3_ParamLimits

0xd0bd,	// (0x0001a2d8) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0001cefc) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0001cefc) cell_hc_apps_pane_g

0xd0df,	// (0x0001a2fa) cell_hc_apps_pane_t1_ParamLimits

0xd0df,	// (0x0001a2fa) cell_hc_apps_pane_t1

0x3650,	// (0x0001086b) grid_highlight_pane_cp10_ParamLimits

0x3650,	// (0x0001086b) grid_highlight_pane_cp10

0xd11f,	// (0x0001a33a) list_single_hc_apps_pane_ParamLimits

0xd11f,	// (0x0001a33a) list_single_hc_apps_pane

0xd15e,	// (0x0001a379) list_single_hc_apps_pane_g1

0xd177,	// (0x0001a392) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0001cf03) list_single_hc_apps_pane_g

0xd190,	// (0x0001a3ab) list_single_hc_apps_pane_g2_copy1

0xd1ac,	// (0x0001a3c7) list_single_hc_apps_pane_t1

0x347a,	// (0x00010695) bg_set_opt_pane_cp_ParamLimits

0x578e,	// (0x000129a9) setting_slider_pane_t1_ParamLimits

0x57a7,	// (0x000129c2) setting_slider_pane_t2_ParamLimits

0x57c1,	// (0x000129dc) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001c779) setting_slider_pane_t_ParamLimits

0x57d9,	// (0x000129f4) slider_set_pane_ParamLimits

0x5d09,	// (0x00012f24) control_pane_g5_ParamLimits

0x5d09,	// (0x00012f24) control_pane_g5

0xa300,	// (0x0001751b) slider_set_pane_g1_ParamLimits

0x618a,	// (0x000133a5) slider_set_pane_g2_ParamLimits

0x6196,	// (0x000133b1) slider_set_pane_g3_ParamLimits

0x61aa,	// (0x000133c5) slider_set_pane_g4_ParamLimits

0x61c2,	// (0x000133dd) slider_set_pane_g5_ParamLimits

0x6196,	// (0x000133b1) slider_set_pane_g6_ParamLimits

0x61d8,	// (0x000133f3) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x0001cb7a) slider_set_pane_g_ParamLimits

0x485a,	// (0x00011a75) navi_icon_text_pane_ParamLimits

0x895a,	// (0x00015b75) aid_fill_nsta_2_ParamLimits

0x899b,	// (0x00015bb6) aid_touch_tab_arrow_left_ParamLimits

0x89aa,	// (0x00015bc5) aid_touch_tab_arrow_right_ParamLimits

0x8a17,	// (0x00015c32) clock_nsta_pane_ParamLimits

0x9db4,	// (0x00016fcf) navi_icon_pane_g1_ParamLimits

0x9dc0,	// (0x00016fdb) navi_text_pane_t1_ParamLimits

0xb55e,	// (0x00018779) navi_icon_text_pane_g1_ParamLimits

0xb56a,	// (0x00018785) navi_icon_text_pane_t1_ParamLimits

0xd15e,	// (0x0001a379) list_single_hc_apps_pane_g1_ParamLimits

0xd177,	// (0x0001a392) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0001cf03) list_single_hc_apps_pane_g_ParamLimits

0xd190,	// (0x0001a3ab) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd1ac,	// (0x0001a3c7) list_single_hc_apps_pane_t1_ParamLimits

0x5690,	// (0x000128ab) popup_toolbar2_fixed_window_ParamLimits

0x5690,	// (0x000128ab) popup_toolbar2_fixed_window

0x885e,	// (0x00015a79) popup_toolbar2_float_window

0x3231,	// (0x0001044c) bg_popup_sub_pane_cp27

0xd1da,	// (0x0001a3f5) grid_toolbar2_float_pane

0x3231,	// (0x0001044c) bg_popup_sub_pane_cp26

0xd1da,	// (0x0001a3f5) grid_toolbar2_fixed_pane

0xd1e2,	// (0x0001a3fd) cell_toolbar2_fixed_pane_ParamLimits

0xd1e2,	// (0x0001a3fd) cell_toolbar2_fixed_pane

0xd1f2,	// (0x0001a40d) cell_toolbar2_fixed_pane_g1

0xd1fb,	// (0x0001a416) toolbar2_fixed_button_pane

0x8e7c,	// (0x00016097) toolbar2_fixed_button_pane_g1

0x8e8c,	// (0x000160a7) toolbar2_fixed_button_pane_g2

0x8e84,	// (0x0001609f) toolbar2_fixed_button_pane_g3

0x8e9c,	// (0x000160b7) toolbar2_fixed_button_pane_g4

0x8e94,	// (0x000160af) toolbar2_fixed_button_pane_g5

0x8ea4,	// (0x000160bf) toolbar2_fixed_button_pane_g6

0x8eac,	// (0x000160c7) toolbar2_fixed_button_pane_g7

0x8ebc,	// (0x000160d7) toolbar2_fixed_button_pane_g8

0x8eb4,	// (0x000160cf) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x0001ca7c) toolbar2_fixed_button_pane_g

0xd203,	// (0x0001a41e) cell_toolbar2_float_pane_ParamLimits

0xd203,	// (0x0001a41e) cell_toolbar2_float_pane

0xd214,	// (0x0001a42f) cell_toolbar2_float_pane_g1

0xd1fb,	// (0x0001a416) toolbar2_fixed_button_pane_cp

0xbaed,	// (0x00018d08) fep_vkb_accented_list_pane_ParamLimits

0xbaed,	// (0x00018d08) fep_vkb_accented_list_pane

0x6563,	// (0x0001377e) bg_popup_fep_shadow_pane_g9

0x49b6,	// (0x00011bd1) bg_popup_fep_shadow_pane_cp3

0x3d80,	// (0x00010f9b) list_accented_list_pane

0xd21d,	// (0x0001a438) list_single_accented_list_pane_ParamLimits

0xd21d,	// (0x0001a438) list_single_accented_list_pane

0x49b6,	// (0x00011bd1) list_highlight_pane_cp10

0xd22e,	// (0x0001a449) list_single_accented_list_pane_t1

0x87a4,	// (0x000159bf) popup_slider_window_ParamLimits

0x87a4,	// (0x000159bf) popup_slider_window

0xcd03,	// (0x00019f1e) aid_indentation_list_msg

0xd2fa,	// (0x0001a515) bg_popup_window_pane_cp19

0xd368,	// (0x0001a583) popup_slider_window_g1

0xd384,	// (0x0001a59f) popup_slider_window_g2

0xd3a0,	// (0x0001a5bb) popup_slider_window_g3

0x0005,

0xfced,	// (0x0001cf08) popup_slider_window_g

0xd3fc,	// (0x0001a617) popup_slider_window_t1

0xd470,	// (0x0001a68b) small_volume_slider_vertical_pane

0xb9b6,	// (0x00018bd1) small_volume_slider_vertical_pane_g1

0xb9b6,	// (0x00018bd1) small_volume_slider_vertical_pane_g2

0xd48c,	// (0x0001a6a7) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0001cf1a) small_volume_slider_vertical_pane_g

0x543e,	// (0x00012659) area_side_right_pane_ParamLimits

0x543e,	// (0x00012659) area_side_right_pane

0x6752,	// (0x0001396d) aid_size_side_button_ParamLimits

0x6752,	// (0x0001396d) aid_size_side_button

0x6766,	// (0x00013981) grid_sctrl_middle_pane_ParamLimits

0x6766,	// (0x00013981) grid_sctrl_middle_pane

0x6786,	// (0x000139a1) sctrl_sk_bottom_pane

0x6797,	// (0x000139b2) sctrl_sk_top_pane

0x67a9,	// (0x000139c4) aid_touch_sctrl_top

0x67b6,	// (0x000139d1) bg_sctrl_sk_pane_ParamLimits

0x67b6,	// (0x000139d1) bg_sctrl_sk_pane

0x67c4,	// (0x000139df) sctrl_sk_top_pane_g1

0x67d1,	// (0x000139ec) sctrl_sk_top_pane_t1

0x67a9,	// (0x000139c4) aid_touch_sctrl_bottom

0x67b6,	// (0x000139d1) bg_sctrl_sk_pane_cp_ParamLimits

0x67b6,	// (0x000139d1) bg_sctrl_sk_pane_cp

0x67ec,	// (0x00013a07) sctrl_sk_bottom_pane_g1

0x67d1,	// (0x000139ec) sctrl_sk_bottom_pane_t1

0x67f5,	// (0x00013a10) cell_sctrl_middle_pane_ParamLimits

0x67f5,	// (0x00013a10) cell_sctrl_middle_pane

0x6812,	// (0x00013a2d) aid_touch_sctrl_middle_ParamLimits

0x6812,	// (0x00013a2d) aid_touch_sctrl_middle

0x6824,	// (0x00013a3f) bg_sctrl_middle_pane_ParamLimits

0x6824,	// (0x00013a3f) bg_sctrl_middle_pane

0x6583,	// (0x0001379e) cell_sctrl_middle_pane_g1_ParamLimits

0x6583,	// (0x0001379e) cell_sctrl_middle_pane_g1

0x6832,	// (0x00013a4d) cell_sctrl_middle_pane_g2_ParamLimits

0x6832,	// (0x00013a4d) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0001cf26) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0001cf26) cell_sctrl_middle_pane_g

0x8e7c,	// (0x00016097) bg_sctrl_middle_pane_g1

0x8e84,	// (0x0001609f) bg_sctrl_middle_pane_g2

0x8e8c,	// (0x000160a7) bg_sctrl_middle_pane_g3

0x8e94,	// (0x000160af) bg_sctrl_middle_pane_g4

0x8e9c,	// (0x000160b7) bg_sctrl_middle_pane_g5

0x8ea4,	// (0x000160bf) bg_sctrl_middle_pane_g6

0x8eac,	// (0x000160c7) bg_sctrl_middle_pane_g7

0x8eb4,	// (0x000160cf) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0001cf2b) bg_sctrl_middle_pane_g

0x8ebc,	// (0x000160d7) bg_sctrl_middle_pane_g8_copy1

0x8e7c,	// (0x00016097) bg_sctrl_sk_pane_g1

0x8e8c,	// (0x000160a7) bg_sctrl_sk_pane_g2

0x8e84,	// (0x0001609f) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x0001ca7c) bg_sctrl_sk_pane_g

0x3a6b,	// (0x00010c86) aid_size_touch_scroll_bar

0x8e9c,	// (0x000160b7) bg_sctrl_sk_pane_g4

0x8e94,	// (0x000160af) bg_sctrl_sk_pane_g5

0x8ea4,	// (0x000160bf) bg_sctrl_sk_pane_g6

0x8eac,	// (0x000160c7) bg_sctrl_sk_pane_g7

0x8ebc,	// (0x000160d7) bg_sctrl_sk_pane_g8

0x8eb4,	// (0x000160cf) bg_sctrl_sk_pane_g9

0x83bb,	// (0x000155d6) popup_fep_china_hwr2_fs_candidate_window

0x83c5,	// (0x000155e0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x83c5,	// (0x000155e0) popup_fep_china_hwr2_fs_control_window

0x6583,	// (0x0001379e) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0001cf21) sctrl_sk_top_pane_g

0xd495,	// (0x0001a6b0) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd495,	// (0x0001a6b0) aid_fep_china_hwr2_fs_cell

0xd4a8,	// (0x0001a6c3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd4a8,	// (0x0001a6c3) bg_popup_fep_shadow_pane_cp4

0xd4c1,	// (0x0001a6dc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4c1,	// (0x0001a6dc) bg_popup_fep_shadow_pane_cp5

0xd4d3,	// (0x0001a6ee) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4d3,	// (0x0001a6ee) popup_fep_china_hwr2_fs_control_bar_grid

0xd4e3,	// (0x0001a6fe) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4eb,	// (0x0001a706) aid_fep_china_hwr2_fs_candi_cell

0x3231,	// (0x0001044c) bg_popup_fep_shadow_pane_cp6

0xd4f5,	// (0x0001a710) popup_fep_china_hwr2_fs_candidate_grid

0xd4ff,	// (0x0001a71a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4ff,	// (0x0001a71a) cell_fep_china_hwr2_fs_funtion_grid

0xb9b6,	// (0x00018bd1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd517,	// (0x0001a732) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd517,	// (0x0001a732) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd525,	// (0x0001a740) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd525,	// (0x0001a740) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0001cf3c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0001cf3c) cell_fep_china_hwr2_fs_funtion_grid_g

0xd53b,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd53b,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd550,	// (0x0001a76b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd550,	// (0x0001a76b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0001cf41) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0001cf41) cell_fep_china_hwr2_fs_funtion_grid_t

0xd56c,	// (0x0001a787) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd574,	// (0x0001a78f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd57c,	// (0x0001a797) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0001cf46) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd584,	// (0x0001a79f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd584,	// (0x0001a79f) cell_fep_china_hwr2_fs_candidate_grid

0xd5a3,	// (0x0001a7be) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd5ab,	// (0x0001a7c6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb9b6,	// (0x00018bd1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb9b6,	// (0x00018bd1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0001cd5a) cell_fep_china_hwr2_fs_candidate_grid_g

0xd5b3,	// (0x0001a7ce) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8a2a,	// (0x00015c45) clock_nsta_pane_cp_24_ParamLimits

0x8a2a,	// (0x00015c45) clock_nsta_pane_cp_24

0x8aaa,	// (0x00015cc5) indicator_nsta_pane_cp_24_ParamLimits

0x8aaa,	// (0x00015cc5) indicator_nsta_pane_cp_24

0x9c30,	// (0x00016e4b) heading_pane_g1

0x0001,

0xf8c6,	// (0x0001cae1) heading_pane_g

0xa76f,	// (0x0001798a) grid_sct_catagory_button_pane

0xa7a1,	// (0x000179bc) scroll_pane_cp5_ParamLimits

0xb5ac,	// (0x000187c7) button_value_adjust_pane_cp5_ParamLimits

0xb5ac,	// (0x000187c7) button_value_adjust_pane_cp5

0xb6b2,	// (0x000188cd) form2_midp_time_pane_ParamLimits

0xd5c1,	// (0x0001a7dc) cell_sct_catagory_button_pane_ParamLimits

0xd5c1,	// (0x0001a7dc) cell_sct_catagory_button_pane

0xb97b,	// (0x00018b96) bg_button_pane_cp01_ParamLimits

0xb97b,	// (0x00018b96) bg_button_pane_cp01

0xb9b6,	// (0x00018bd1) cell_sct_catagory_button_pane_g1

0x87e5,	// (0x00015a00) popup_tb_extension_window

0xd5d3,	// (0x0001a7ee) aid_size_cell_ext_ParamLimits

0xd5d3,	// (0x0001a7ee) aid_size_cell_ext

0x3650,	// (0x0001086b) bg_tb_trans_pane_cp1_ParamLimits

0x3650,	// (0x0001086b) bg_tb_trans_pane_cp1

0xd5f3,	// (0x0001a80e) grid_tb_ext_pane_ParamLimits

0xd5f3,	// (0x0001a80e) grid_tb_ext_pane

0xd623,	// (0x0001a83e) cell_tb_ext_pane_ParamLimits

0xd623,	// (0x0001a83e) cell_tb_ext_pane

0xd63a,	// (0x0001a855) cell_tb_ext_pane_g1_ParamLimits

0xd63a,	// (0x0001a855) cell_tb_ext_pane_g1

0xd657,	// (0x0001a872) cell_tb_ext_pane_t1

0x3650,	// (0x0001086b) list_highlight_pane_cp11_ParamLimits

0x3650,	// (0x0001086b) list_highlight_pane_cp11

0x56af,	// (0x000128ca) popup_uni_indicator_window_ParamLimits

0x56af,	// (0x000128ca) popup_uni_indicator_window

0x3bd0,	// (0x00010deb) bg_popup_sub_pane_cp14

0xd672,	// (0x0001a88d) list_uniindi_pane

0xd67e,	// (0x0001a899) uniindi_top_pane

0x3650,	// (0x0001086b) bg_uniindi_top_pane

0xd69f,	// (0x0001a8ba) uniindi_top_pane_g1

0xd6b5,	// (0x0001a8d0) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0001cf4d) uniindi_top_pane_g

0xd6df,	// (0x0001a8fa) uniindi_top_pane_t1

0xd70b,	// (0x0001a926) list_single_uniindi_pane_ParamLimits

0xd70b,	// (0x0001a926) list_single_uniindi_pane

0xb9b6,	// (0x00018bd1) bg_uniindi_top_pane_g1

0xd71d,	// (0x0001a938) list_single_uniindi_pane_g1

0xd730,	// (0x0001a94b) list_single_uniindi_pane_t1

0x551b,	// (0x00012736) control_bg_pane

0xd755,	// (0x0001a970) bg_sctrl_sk_pane_cp1

0xd75e,	// (0x0001a979) bg_sctrl_sk_pane_cp2

0xd767,	// (0x0001a982) control_bg_pane_g1

0xd770,	// (0x0001a98b) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0001cf56) control_bg_pane_g

0xb3d3,	// (0x000185ee) cell_indicator_nsta_pane_g1_ParamLimits

0xb3e1,	// (0x000185fc) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0001ccbe) cell_indicator_nsta_pane_g_ParamLimits

0xb742,	// (0x0001895d) form2_midp_time_pane_t1_ParamLimits

0x38ad,	// (0x00010ac8) main_idle_act4_pane_ParamLimits

0x38ad,	// (0x00010ac8) main_idle_act4_pane

0x87e5,	// (0x00015a00) popup_tb_extension_window_ParamLimits

0xd615,	// (0x0001a830) tb_ext_find_pane_ParamLimits

0xd615,	// (0x0001a830) tb_ext_find_pane

0xd779,	// (0x0001a994) ai_gene_pane_1_cp1

0x80bc,	// (0x000152d7) ai_gene_pane_2_cp1

0xd781,	// (0x0001a99c) list_single_idle_plugin_calendar_pane

0xd78a,	// (0x0001a9a5) list_single_idle_plugin_notification_pane

0xd793,	// (0x0001a9ae) list_single_idle_plugin_player_pane

0xd79c,	// (0x0001a9b7) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd79c,	// (0x0001a9b7) list_single_idle_plugin_shortcut_pane

0xd7be,	// (0x0001a9d9) main_idle_act4_pane_t1

0xd7d0,	// (0x0001a9eb) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0001cf5b) main_idle_act4_pane_t

0xd7e2,	// (0x0001a9fd) middle_sk_idle_act4_pane_ParamLimits

0xd7e2,	// (0x0001a9fd) middle_sk_idle_act4_pane

0xd7f8,	// (0x0001aa13) popup_clock_digital_analogue_window_cp2

0xd812,	// (0x0001aa2d) shortcut_wheel_idle_act4_pane_ParamLimits

0xd812,	// (0x0001aa2d) shortcut_wheel_idle_act4_pane

0xb9b6,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g1

0xb9b6,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g2

0xb9b6,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g3

0xb9b6,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g4

0xb9b6,	// (0x00018bd1) shortcut_wheel_idle_act4_pane_g5

0xd826,	// (0x0001aa41) shortcut_wheel_idle_act4_pane_g6

0xd82e,	// (0x0001aa49) shortcut_wheel_idle_act4_pane_g7

0xd836,	// (0x0001aa51) shortcut_wheel_idle_act4_pane_g8

0xd83e,	// (0x0001aa59) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0001cf60) shortcut_wheel_idle_act4_pane_g

0xbc31,	// (0x00018e4c) middle_sk_idle_act4_pane_g1_ParamLimits

0xbc31,	// (0x00018e4c) middle_sk_idle_act4_pane_g1

0xd8a2,	// (0x0001aabd) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8a2,	// (0x0001aabd) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0001cf83) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0001cf83) middle_sk_idle_act4_pane_g

0xd8ae,	// (0x0001aac9) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8ae,	// (0x0001aac9) middle_sk_idle_act4_pane_t1

0xd8cb,	// (0x0001aae6) grid_ai_shortcut_pane_ParamLimits

0xd8cb,	// (0x0001aae6) grid_ai_shortcut_pane

0xd8e4,	// (0x0001aaff) list_highlight_pane_cp16_ParamLimits

0xd8e4,	// (0x0001aaff) list_highlight_pane_cp16

0xd8f1,	// (0x0001ab0c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd8f1,	// (0x0001ab0c) list_single_idle_plugin_shortcut_pane_g1

0xd8fd,	// (0x0001ab18) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd8fd,	// (0x0001ab18) list_single_idle_plugin_shortcut_pane_g2

0xd917,	// (0x0001ab32) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd917,	// (0x0001ab32) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0001cf88) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0001cf88) list_single_idle_plugin_shortcut_pane_g

0xd92a,	// (0x0001ab45) cell_ai_shortcut_pane_ParamLimits

0xd92a,	// (0x0001ab45) cell_ai_shortcut_pane

0xd94d,	// (0x0001ab68) cell_ai_shortcut_pane_g1_ParamLimits

0xd94d,	// (0x0001ab68) cell_ai_shortcut_pane_g1

0xd779,	// (0x0001a994) ai_gene_pane_1_cp2

0xd96f,	// (0x0001ab8a) ai_gene_pane_2_cp2

0xd977,	// (0x0001ab92) list_highlight_pane_cp15

0xd980,	// (0x0001ab9b) list_single_idle_plugin_calendar_pane_g1

0xd977,	// (0x0001ab92) list_highlight_pane_cp17

0xd988,	// (0x0001aba3) list_single_idle_plugin_calendar_pane_g1_copy1

0xd990,	// (0x0001abab) list_single_idle_plugin_player_pane_g1

0xa9d6,	// (0x00017bf1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0001cf8f) list_single_idle_plugin_player_pane_g

0xd998,	// (0x0001abb3) list_single_idle_plugin_player_pane_t1

0xd9a6,	// (0x0001abc1) list_single_idle_plugin_player_pane_t2

0xd9b4,	// (0x0001abcf) list_single_idle_plugin_player_pane_t3

0xd9c2,	// (0x0001abdd) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0001cf94) list_single_idle_plugin_player_pane_t

0xd9d0,	// (0x0001abeb) wait_bar_pane_cp15

0xd9d8,	// (0x0001abf3) grid_ai_notification_pane

0xa9d6,	// (0x00017bf1) list_single_idle_plugin_notification_pane_g1

0xd9e1,	// (0x0001abfc) cell_ai_notification_pane_ParamLimits

0xd9e1,	// (0x0001abfc) cell_ai_notification_pane

0xd9ee,	// (0x0001ac09) cell_ai_notification_pane_g1

0xd9f6,	// (0x0001ac11) cell_ai_notification_pane_t1

0xda04,	// (0x0001ac1f) tb_ext_find_button_pane

0xda0c,	// (0x0001ac27) tb_ext_find_pane_g1

0xda14,	// (0x0001ac2f) tb_ext_find_pane_t1

0x432a,	// (0x00011545) tb_ext_find_button_pane_g1

0xda22,	// (0x0001ac3d) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0001cf9d) tb_ext_find_button_pane_g

0xd7be,	// (0x0001a9d9) main_idle_act4_pane_t1_ParamLimits

0xd7d0,	// (0x0001a9eb) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0001cf5b) main_idle_act4_pane_t_ParamLimits

0xd7f8,	// (0x0001aa13) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd806,	// (0x0001aa21) sat_plugin_idle_act4_pane_ParamLimits

0xd806,	// (0x0001aa21) sat_plugin_idle_act4_pane

0xda2b,	// (0x0001ac46) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda2b,	// (0x0001ac46) sat_plugin_idle_act4_pane_t1

0xda3e,	// (0x0001ac59) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda3e,	// (0x0001ac59) sat_plugin_idle_act4_pane_t2

0xda51,	// (0x0001ac6c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda51,	// (0x0001ac6c) sat_plugin_idle_act4_pane_t3

0xda64,	// (0x0001ac7f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda64,	// (0x0001ac7f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0001cfa2) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0001cfa2) sat_plugin_idle_act4_pane_t

0x55e0,	// (0x000127fb) popup_battery_window_ParamLimits

0x55e0,	// (0x000127fb) popup_battery_window

0x3650,	// (0x0001086b) bg_popup_sub_pane_cp25_ParamLimits

0x3650,	// (0x0001086b) bg_popup_sub_pane_cp25

0xda77,	// (0x0001ac92) popup_battery_window_g1_ParamLimits

0xda77,	// (0x0001ac92) popup_battery_window_g1

0xda83,	// (0x0001ac9e) popup_battery_window_t1_ParamLimits

0xda83,	// (0x0001ac9e) popup_battery_window_t1

0xda95,	// (0x0001acb0) popup_battery_window_t2_ParamLimits

0xda95,	// (0x0001acb0) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0001cfab) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0001cfab) popup_battery_window_t

0x7f87,	// (0x000151a2) midp_canvas_pane_ParamLimits

0x7ffe,	// (0x00015219) midp_keypad_pane_ParamLimits

0x7ffe,	// (0x00015219) midp_keypad_pane

0x8305,	// (0x00015520) main_midp_pane_ParamLimits

0xb45f,	// (0x0001867a) signal_pane_g2_cp_ParamLimits

0xdab2,	// (0x0001accd) aid_size_cell_midp_keypad_ParamLimits

0xdab2,	// (0x0001accd) aid_size_cell_midp_keypad

0xdacc,	// (0x0001ace7) midp_keyp_game_grid_pane_ParamLimits

0xdacc,	// (0x0001ace7) midp_keyp_game_grid_pane

0xdaec,	// (0x0001ad07) midp_keyp_rocker_pane_ParamLimits

0xdaec,	// (0x0001ad07) midp_keyp_rocker_pane

0xdb17,	// (0x0001ad32) midp_keyp_sk_left_pane_ParamLimits

0xdb17,	// (0x0001ad32) midp_keyp_sk_left_pane

0xdb71,	// (0x0001ad8c) midp_keyp_sk_right_pane_ParamLimits

0xdb71,	// (0x0001ad8c) midp_keyp_sk_right_pane

0x3231,	// (0x0001044c) bg_button_pane_cp03

0xdbcb,	// (0x0001ade6) midp_keyp_sk_left_pane_g1

0x3231,	// (0x0001044c) bg_button_pane_cp04

0xdbcb,	// (0x0001ade6) midp_keyp_sk_right_pane_g1

0xb9b6,	// (0x00018bd1) midp_keyp_rocker_pane_g1

0xdbd4,	// (0x0001adef) keyp_game_cell_pane_ParamLimits

0xdbd4,	// (0x0001adef) keyp_game_cell_pane

0x3231,	// (0x0001044c) bg_button_pane_cp02

0xdbe7,	// (0x0001ae02) keyp_game_cell_pane_g1

0x562a,	// (0x00012845) popup_fep_vkb2_window_ParamLimits

0x562a,	// (0x00012845) popup_fep_vkb2_window

0x6850,	// (0x00013a6b) aid_size_cell_vkb2_ParamLimits

0x6850,	// (0x00013a6b) aid_size_cell_vkb2

0x68a4,	// (0x00013abf) popup_fep_vkb2_window_g1_ParamLimits

0x68a4,	// (0x00013abf) popup_fep_vkb2_window_g1

0x68ec,	// (0x00013b07) vkb2_area_bottom_pane_ParamLimits

0x68ec,	// (0x00013b07) vkb2_area_bottom_pane

0x6940,	// (0x00013b5b) vkb2_area_keypad_pane_ParamLimits

0x6940,	// (0x00013b5b) vkb2_area_keypad_pane

0x6986,	// (0x00013ba1) vkb2_area_top_pane_ParamLimits

0x6986,	// (0x00013ba1) vkb2_area_top_pane

0x6a00,	// (0x00013c1b) vkb2_top_entry_pane_ParamLimits

0x6a00,	// (0x00013c1b) vkb2_top_entry_pane

0x6a2a,	// (0x00013c45) vkb2_top_grid_left_pane_ParamLimits

0x6a2a,	// (0x00013c45) vkb2_top_grid_left_pane

0x6a48,	// (0x00013c63) vkb2_top_grid_right_pane_ParamLimits

0x6a48,	// (0x00013c63) vkb2_top_grid_right_pane

0x6a66,	// (0x00013c81) vkb2_cell_keypad_pane_ParamLimits

0x6a66,	// (0x00013c81) vkb2_cell_keypad_pane

0x6b37,	// (0x00013d52) vkb2_area_bottom_grid_pane_ParamLimits

0x6b37,	// (0x00013d52) vkb2_area_bottom_grid_pane

0x6b5d,	// (0x00013d78) vkb2_area_bottom_pane_g1_ParamLimits

0x6b5d,	// (0x00013d78) vkb2_area_bottom_pane_g1

0x6b81,	// (0x00013d9c) vkb2_area_bottom_pane_g2_ParamLimits

0x6b81,	// (0x00013d9c) vkb2_area_bottom_pane_g2

0x6baf,	// (0x00013dca) vkb2_area_bottom_pane_g3_ParamLimits

0x6baf,	// (0x00013dca) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0001cfb0) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0001cfb0) vkb2_area_bottom_pane_g

0x6c10,	// (0x00013e2b) vkb2_top_cell_left_pane_ParamLimits

0x6c10,	// (0x00013e2b) vkb2_top_cell_left_pane

0xdbf8,	// (0x0001ae13) vkb2_top_entry_pane_g1_ParamLimits

0xdbf8,	// (0x0001ae13) vkb2_top_entry_pane_g1

0xdc06,	// (0x0001ae21) vkb2_top_entry_pane_t1_ParamLimits

0xdc06,	// (0x0001ae21) vkb2_top_entry_pane_t1

0xdc38,	// (0x0001ae53) vkb2_top_entry_pane_t2_ParamLimits

0xdc38,	// (0x0001ae53) vkb2_top_entry_pane_t2

0xdc6a,	// (0x0001ae85) vkb2_top_entry_pane_t3_ParamLimits

0xdc6a,	// (0x0001ae85) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0001cfb7) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0001cfb7) vkb2_top_entry_pane_t

0x6c5d,	// (0x00013e78) vkb2_top_grid_right_pane_g1_ParamLimits

0x6c5d,	// (0x00013e78) vkb2_top_grid_right_pane_g1

0x6c73,	// (0x00013e8e) vkb2_top_grid_right_pane_g2_ParamLimits

0x6c73,	// (0x00013e8e) vkb2_top_grid_right_pane_g2

0x6c8b,	// (0x00013ea6) vkb2_top_grid_right_pane_g3_ParamLimits

0x6c8b,	// (0x00013ea6) vkb2_top_grid_right_pane_g3

0x6ca3,	// (0x00013ebe) vkb2_top_grid_right_pane_g4_ParamLimits

0x6ca3,	// (0x00013ebe) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0001cfbe) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0001cfbe) vkb2_top_grid_right_pane_g

0x6cb9,	// (0x00013ed4) vkb2_top_cell_left_pane_g1

0x6cd0,	// (0x00013eeb) vkb2_cell_keypad_pane_g1_ParamLimits

0x6cd0,	// (0x00013eeb) vkb2_cell_keypad_pane_g1

0xdc8e,	// (0x0001aea9) vkb2_cell_keypad_pane_t1_ParamLimits

0xdc8e,	// (0x0001aea9) vkb2_cell_keypad_pane_t1

0x6cde,	// (0x00013ef9) vkb2_cell_bottom_grid_pane_ParamLimits

0x6cde,	// (0x00013ef9) vkb2_cell_bottom_grid_pane

0x6d17,	// (0x00013f32) vkb2_cell_bottom_grid_pane_g1

0xd846,	// (0x0001aa61) aid_call2_pane_cp02

0xd84e,	// (0x0001aa69) aid_call_pane_cp02

0xd856,	// (0x0001aa71) clock_digital_number_pane_cp10

0xd85e,	// (0x0001aa79) clock_digital_number_pane_cp11

0xd866,	// (0x0001aa81) clock_digital_number_pane_cp12

0xd86e,	// (0x0001aa89) clock_digital_number_pane_cp13

0xd876,	// (0x0001aa91) clock_digital_separator_pane_cp10

0x432a,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g1

0x432a,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g2

0xd87e,	// (0x0001aa99) popup_clock_digital_analogue_window_cp2_g3

0x432a,	// (0x00011545) popup_clock_digital_analogue_window_cp2_g4

0xd87e,	// (0x0001aa99) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0001cf73) popup_clock_digital_analogue_window_cp2_g

0xd886,	// (0x0001aaa1) popup_clock_digital_analogue_window_cp2_t1

0xd894,	// (0x0001aaaf) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0001cf7e) popup_clock_digital_analogue_window_cp2_t

0xb9b6,	// (0x00018bd1) clock_digital_number_pane_cp10_g1

0xb9b6,	// (0x00018bd1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001cd5a) clock_digital_number_pane_cp10_g

0xb9b6,	// (0x00018bd1) clock_digital_separator_pane_cp10_g1

0xb9b6,	// (0x00018bd1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0001cd5a) clock_digital_separator_pane_cp10_g

0xd6c1,	// (0x0001a8dc) uniindi_top_pane_g3

0xd6d2,	// (0x0001a8ed) uniindi_top_pane_g4

0x6af1,	// (0x00013d0c) vkb2_row_keypad_pane_ParamLimits

0x6af1,	// (0x00013d0c) vkb2_row_keypad_pane

0x6d33,	// (0x00013f4e) vkb2_cell_t_keypad_pane_ParamLimits

0x6d33,	// (0x00013f4e) vkb2_cell_t_keypad_pane

0x6d43,	// (0x00013f5e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6d43,	// (0x00013f5e) vkb2_cell_t_keypad_pane_cp08

0x6d58,	// (0x00013f73) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6d58,	// (0x00013f73) vkb2_cell_t_keypad_pane_cp09

0x6d6c,	// (0x00013f87) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6d6c,	// (0x00013f87) vkb2_cell_t_keypad_pane_cp01

0x6d7d,	// (0x00013f98) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6d7d,	// (0x00013f98) vkb2_cell_t_keypad_pane_cp02

0x6d8e,	// (0x00013fa9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6d8e,	// (0x00013fa9) vkb2_cell_t_keypad_pane_cp03

0x6d9f,	// (0x00013fba) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6d9f,	// (0x00013fba) vkb2_cell_t_keypad_pane_cp04

0x6db0,	// (0x00013fcb) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6db0,	// (0x00013fcb) vkb2_cell_t_keypad_pane_cp05

0x6dc1,	// (0x00013fdc) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6dc1,	// (0x00013fdc) vkb2_cell_t_keypad_pane_cp06

0x6dd4,	// (0x00013fef) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6dd4,	// (0x00013fef) vkb2_cell_t_keypad_pane_cp07

0x6de9,	// (0x00014004) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6de9,	// (0x00014004) vkb2_cell_t_keypad_pane_cp10

0x6583,	// (0x0001379e) vkb2_cell_t_keypad_pane_g1

0xdca5,	// (0x0001aec0) vkb2_cell_t_keypad_pane_t1

0x551b,	// (0x00012736) popup_grid_graphic2_window

0xdcb7,	// (0x0001aed2) aid_size_cell_graphic2_ParamLimits

0xdcb7,	// (0x0001aed2) aid_size_cell_graphic2

0xdcef,	// (0x0001af0a) bg_popup_window_pane_cp21_ParamLimits

0xdcef,	// (0x0001af0a) bg_popup_window_pane_cp21

0xdcfd,	// (0x0001af18) graphic2_pages_pane_ParamLimits

0xdcfd,	// (0x0001af18) graphic2_pages_pane

0xdd43,	// (0x0001af5e) grid_graphic2_control_pane_ParamLimits

0xdd43,	// (0x0001af5e) grid_graphic2_control_pane

0xdd81,	// (0x0001af9c) grid_graphic2_pane_ParamLimits

0xdd81,	// (0x0001af9c) grid_graphic2_pane

0xddf7,	// (0x0001b012) cell_graphic2_pane

0x3231,	// (0x0001044c) main_comp_mode_pane

0xceae,	// (0x0001a0c9) list_ai3_gene_pane_ParamLimits

0xd2fa,	// (0x0001a515) bg_popup_window_pane_cp19_ParamLimits

0xd306,	// (0x0001a521) bg_touch_area_indi_pane_ParamLimits

0xd306,	// (0x0001a521) bg_touch_area_indi_pane

0xd31c,	// (0x0001a537) bg_touch_area_indi_pane_cp01_ParamLimits

0xd31c,	// (0x0001a537) bg_touch_area_indi_pane_cp01

0xd334,	// (0x0001a54f) bg_touch_area_indi_pane_cp02_ParamLimits

0xd334,	// (0x0001a54f) bg_touch_area_indi_pane_cp02

0xd34e,	// (0x0001a569) bg_touch_area_indi_pane_cp03_ParamLimits

0xd34e,	// (0x0001a569) bg_touch_area_indi_pane_cp03

0xd368,	// (0x0001a583) popup_slider_window_g1_ParamLimits

0xd384,	// (0x0001a59f) popup_slider_window_g2_ParamLimits

0xd3a0,	// (0x0001a5bb) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0001cf08) popup_slider_window_g_ParamLimits

0xd3fc,	// (0x0001a617) popup_slider_window_t1_ParamLimits

0xd470,	// (0x0001a68b) small_volume_slider_vertical_pane_ParamLimits

0xddf7,	// (0x0001b012) cell_graphic2_pane_ParamLimits

0xde49,	// (0x0001b064) bg_button_pane_cp10_ParamLimits

0xde49,	// (0x0001b064) bg_button_pane_cp10

0xde5e,	// (0x0001b079) bg_button_pane_cp11_ParamLimits

0xde5e,	// (0x0001b079) bg_button_pane_cp11

0xde73,	// (0x0001b08e) graphic2_pages_pane_g1_ParamLimits

0xde73,	// (0x0001b08e) graphic2_pages_pane_g1

0xde8e,	// (0x0001b0a9) graphic2_pages_pane_g2_ParamLimits

0xde8e,	// (0x0001b0a9) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0001cfcc) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0001cfcc) graphic2_pages_pane_g

0xdea6,	// (0x0001b0c1) graphic2_pages_pane_t1_ParamLimits

0xdea6,	// (0x0001b0c1) graphic2_pages_pane_t1

0xdebc,	// (0x0001b0d7) cell_graphic2_control_pane_ParamLimits

0xdebc,	// (0x0001b0d7) cell_graphic2_control_pane

0xdedf,	// (0x0001b0fa) cell_graphic2_pane_g1_ParamLimits

0xdedf,	// (0x0001b0fa) cell_graphic2_pane_g1

0xdeec,	// (0x0001b107) cell_graphic2_pane_g2_ParamLimits

0xdeec,	// (0x0001b107) cell_graphic2_pane_g2

0xdef9,	// (0x0001b114) cell_graphic2_pane_g3_ParamLimits

0xdef9,	// (0x0001b114) cell_graphic2_pane_g3

0xdf06,	// (0x0001b121) cell_graphic2_pane_g4_ParamLimits

0xdf06,	// (0x0001b121) cell_graphic2_pane_g4

0xdf13,	// (0x0001b12e) cell_graphic2_pane_g5_ParamLimits

0xdf13,	// (0x0001b12e) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0001cfd1) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0001cfd1) cell_graphic2_pane_g

0xdf2e,	// (0x0001b149) cell_graphic2_pane_t1_ParamLimits

0xdf2e,	// (0x0001b149) cell_graphic2_pane_t1

0x8fa2,	// (0x000161bd) grid_highlight_pane_cp11_ParamLimits

0x8fa2,	// (0x000161bd) grid_highlight_pane_cp11

0x3650,	// (0x0001086b) bg_button_pane_cp05

0xdf57,	// (0x0001b172) cell_graphic2_control_pane_g1

0xb9b6,	// (0x00018bd1) bg_touch_area_indi_pane_g1

0xdf7f,	// (0x0001b19a) aid_cmod_rocker_key_size

0xdf89,	// (0x0001b1a4) aid_cmode_itu_key_size

0xdf93,	// (0x0001b1ae) main_cmode_video_pane

0xdf9d,	// (0x0001b1b8) main_comp_mode_itu_pane

0xdfa9,	// (0x0001b1c4) main_comp_mode_rocker_pane

0xdfb5,	// (0x0001b1d0) cell_cmode_rocker_pane_ParamLimits

0xdfb5,	// (0x0001b1d0) cell_cmode_rocker_pane

0xdfc9,	// (0x0001b1e4) cell_cmode_itu_pane_ParamLimits

0xdfc9,	// (0x0001b1e4) cell_cmode_itu_pane

0x3bd0,	// (0x00010deb) bg_button_pane_cp06_ParamLimits

0x3bd0,	// (0x00010deb) bg_button_pane_cp06

0xbc31,	// (0x00018e4c) cell_cmode_rocker_pane_g1_ParamLimits

0xbc31,	// (0x00018e4c) cell_cmode_rocker_pane_g1

0xd517,	// (0x0001a732) cell_cmode_rocker_pane_g2_ParamLimits

0xd517,	// (0x0001a732) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0001cfe1) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0001cfe1) cell_cmode_rocker_pane_g

0x3231,	// (0x0001044c) bg_button_pane_cp07

0xdfe0,	// (0x0001b1fb) cell_cmode_itu_pane_g1

0xdfe9,	// (0x0001b204) cell_cmode_itu_pane_t1

0xdff7,	// (0x0001b212) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0001cfe6) cell_cmode_itu_pane_t

0xd745,	// (0x0001a960) aid_touch_ctrl_left

0xd74d,	// (0x0001a968) aid_touch_ctrl_right

0x3231,	// (0x0001044c) compa_mode_pane

0xe005,	// (0x0001b220) aid_cmod_rocker_key_size_cp

0xe00f,	// (0x0001b22a) aid_cmode_itu_key_size_cp

0xe019,	// (0x0001b234) compa_mode_pane_g1

0xe021,	// (0x0001b23c) compa_mode_pane_g2

0xe029,	// (0x0001b244) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0001cfeb) compa_mode_pane_g

0xe031,	// (0x0001b24c) main_comp_mode_itu_pane_cp

0xe039,	// (0x0001b254) main_comp_mode_rocker_pane_cp

0xe041,	// (0x0001b25c) cell_cmode_itu_pane_cp_ParamLimits

0xe041,	// (0x0001b25c) cell_cmode_itu_pane_cp

0xe056,	// (0x0001b271) cell_cmode_rocker_pane_cp_ParamLimits

0xe056,	// (0x0001b271) cell_cmode_rocker_pane_cp

0x3bd0,	// (0x00010deb) bg_button_pane_cp06_cp_ParamLimits

0x3bd0,	// (0x00010deb) bg_button_pane_cp06_cp

0xbc31,	// (0x00018e4c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbc31,	// (0x00018e4c) cell_cmode_rocker_pane_g1_cp

0xb9b6,	// (0x00018bd1) cell_cmode_rocker_pane_g2_cp

0x3231,	// (0x0001044c) bg_button_pane_cp07_cp

0xe068,	// (0x0001b283) cell_cmode_itu_pane_g1_cp

0xe071,	// (0x0001b28c) cell_cmode_itu_pane_t1_cp

0xe071,	// (0x0001b28c) cell_cmode_itu_pane_t2_cp

0xa4c2,	// (0x000176dd) settings_code_pane_cp2

0x347a,	// (0x00010695) bg_popup_window_pane_cp3_ParamLimits

0x383e,	// (0x00010a59) heading_pane_cp3_ParamLimits

0x384a,	// (0x00010a65) listscroll_popup_graphic_pane_ParamLimits

0x6316,	// (0x00013531) fep_hwr_aid_pane_ParamLimits

0x67a9,	// (0x000139c4) aid_touch_sctrl_top_ParamLimits

0x67c4,	// (0x000139df) sctrl_sk_top_pane_g1_ParamLimits

0x6583,	// (0x0001379e) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0001cf21) sctrl_sk_top_pane_g_ParamLimits

0x67d1,	// (0x000139ec) sctrl_sk_top_pane_t1_ParamLimits

0x67a9,	// (0x000139c4) aid_touch_sctrl_bottom_ParamLimits

0x67d1,	// (0x000139ec) sctrl_sk_bottom_pane_t1_ParamLimits

0xd68b,	// (0x0001a8a6) aid_area_touch_clock

0x69c8,	// (0x00013be3) aid_vkb2_area_top_pane_cell_ParamLimits

0x69c8,	// (0x00013be3) aid_vkb2_area_top_pane_cell

0x6b13,	// (0x00013d2e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6b13,	// (0x00013d2e) aid_vkb2_area_bottom_pane_cell

0xdbf0,	// (0x0001ae0b) popup_char_count_window

0xe07f,	// (0x0001b29a) popup_char_count_window_g1

0xe088,	// (0x0001b2a3) popup_char_count_window_g2

0xe091,	// (0x0001b2ac) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0001cff2) popup_char_count_window_g

0xe09a,	// (0x0001b2b5) popup_char_count_window_t1

0x6882,	// (0x00013a9d) popup_fep_char_preview_window_ParamLimits

0x6882,	// (0x00013a9d) popup_fep_char_preview_window

0x69e6,	// (0x00013c01) vkb2_top_candi_pane_ParamLimits

0x69e6,	// (0x00013c01) vkb2_top_candi_pane

0xe0a8,	// (0x0001b2c3) cell_vkb2_top_candi_pane_ParamLimits

0xe0a8,	// (0x0001b2c3) cell_vkb2_top_candi_pane

0x6dfe,	// (0x00014019) bg_popup_fep_char_preview_window_ParamLimits

0x6dfe,	// (0x00014019) bg_popup_fep_char_preview_window

0x6e0c,	// (0x00014027) popup_fep_char_preview_window_t1_ParamLimits

0x6e0c,	// (0x00014027) popup_fep_char_preview_window_t1

0xe0f9,	// (0x0001b314) bg_popup_fep_char_preview_window_g1

0xe101,	// (0x0001b31c) bg_popup_fep_char_preview_window_g2

0xe109,	// (0x0001b324) bg_popup_fep_char_preview_window_g3

0xe111,	// (0x0001b32c) bg_popup_fep_char_preview_window_g4

0xe119,	// (0x0001b334) bg_popup_fep_char_preview_window_g5

0x6e46,	// (0x00014061) bg_popup_fep_char_preview_window_g6

0xe121,	// (0x0001b33c) bg_popup_fep_char_preview_window_g7

0xe129,	// (0x0001b344) bg_popup_fep_char_preview_window_g8

0xe131,	// (0x0001b34c) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0001cff9) bg_popup_fep_char_preview_window_g

0x6583,	// (0x0001379e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6583,	// (0x0001379e) cell_vkb2_top_candi_pane_g1

0x6591,	// (0x000137ac) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6591,	// (0x000137ac) cell_vkb2_top_candi_pane_g2

0xceba,	// (0x0001a0d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xceba,	// (0x0001a0d5) cell_vkb2_top_candi_pane_g3

0x6e4e,	// (0x00014069) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6e4e,	// (0x00014069) cell_vkb2_top_candi_pane_g4

0xc2f5,	// (0x00019510) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc2f5,	// (0x00019510) cell_vkb2_top_candi_pane_g5

0x6e6f,	// (0x0001408a) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6e6f,	// (0x0001408a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0001d00c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0001d00c) cell_vkb2_top_candi_pane_g

0x6e7d,	// (0x00014098) cell_vkb2_top_candi_pane_t1

0x6176,	// (0x00013391) aid_size_touch_slider_mark_ParamLimits

0x6176,	// (0x00013391) aid_size_touch_slider_mark

0xdd33,	// (0x0001af4e) grid_graphic2_catg_pane_ParamLimits

0xdd33,	// (0x0001af4e) grid_graphic2_catg_pane

0xddd1,	// (0x0001afec) popup_grid_graphic2_window_t1_ParamLimits

0xddd1,	// (0x0001afec) popup_grid_graphic2_window_t1

0xdde3,	// (0x0001affe) popup_grid_graphic2_window_t2_ParamLimits

0xdde3,	// (0x0001affe) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0001cfc7) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0001cfc7) popup_grid_graphic2_window_t

0x3650,	// (0x0001086b) bg_button_pane_cp05_ParamLimits

0xdf57,	// (0x0001b172) cell_graphic2_control_pane_g1_ParamLimits

0xe139,	// (0x0001b354) cell_graphic2_catg_pane_ParamLimits

0xe139,	// (0x0001b354) cell_graphic2_catg_pane

0x3231,	// (0x0001044c) bg_button_pane_cp12

0xe14b,	// (0x0001b366) cell_graphic2_catg_pane_g1

0xd657,	// (0x0001a872) cell_tb_ext_pane_t1_ParamLimits

0x6c30,	// (0x00013e4b) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6c30,	// (0x00013e4b) vkb2_top_cell_right_narrow_pane

0x6c48,	// (0x00013e63) vkb2_top_cell_right_wide_pane_ParamLimits

0x6c48,	// (0x00013e63) vkb2_top_cell_right_wide_pane

0x6308,	// (0x00013523) bg_vkb2_func_pane_ParamLimits

0x6308,	// (0x00013523) bg_vkb2_func_pane

0x6cb9,	// (0x00013ed4) vkb2_top_cell_left_pane_g1_ParamLimits

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp03

0x6d17,	// (0x00013f32) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x8e84,	// (0x0001609f) bg_vkb2_func_pane_g1

0x8e8c,	// (0x000160a7) bg_vkb2_func_pane_g2

0x8e9c,	// (0x000160b7) bg_vkb2_func_pane_g3

0x8e94,	// (0x000160af) bg_vkb2_func_pane_g4

0x8ea4,	// (0x000160bf) bg_vkb2_func_pane_g5

0x8eac,	// (0x000160c7) bg_vkb2_func_pane_g6

0x8eb4,	// (0x000160cf) bg_vkb2_func_pane_g7

0x8ebc,	// (0x000160d7) bg_vkb2_func_pane_g8

0x8e7c,	// (0x00016097) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0001d019) bg_vkb2_func_pane_g

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp01

0x6cb9,	// (0x00013ed4) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6cb9,	// (0x00013ed4) vkb2_top_cell_right_wide_pane_g1

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6308,	// (0x00013523) bg_vkb2_fuc_pane_cp02

0x6d17,	// (0x00013f32) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6d17,	// (0x00013f32) vkb2_top_cell_right_narrow_pane_g1

0xd278,	// (0x0001a493) aid_touch_area_decrease_ParamLimits

0xd278,	// (0x0001a493) aid_touch_area_decrease

0xd29c,	// (0x0001a4b7) aid_touch_area_increase_ParamLimits

0xd29c,	// (0x0001a4b7) aid_touch_area_increase

0xd2a8,	// (0x0001a4c3) aid_touch_area_mute_ParamLimits

0xd2a8,	// (0x0001a4c3) aid_touch_area_mute

0xd2cc,	// (0x0001a4e7) aid_touch_area_slider_ParamLimits

0xd2cc,	// (0x0001a4e7) aid_touch_area_slider

0xd3bc,	// (0x0001a5d7) popup_slider_window_g4_ParamLimits

0xd3bc,	// (0x0001a5d7) popup_slider_window_g4

0xd3c8,	// (0x0001a5e3) popup_slider_window_g5_ParamLimits

0xd3c8,	// (0x0001a5e3) popup_slider_window_g5

0xd3ea,	// (0x0001a605) popup_slider_window_g6_ParamLimits

0xd3ea,	// (0x0001a605) popup_slider_window_g6

0xd42a,	// (0x0001a645) popup_slider_window_t2_ParamLimits

0xd42a,	// (0x0001a645) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0001cf15) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0001cf15) popup_slider_window_t

0xd442,	// (0x0001a65d) slider_pane_ParamLimits

0xd442,	// (0x0001a65d) slider_pane

0xe154,	// (0x0001b36f) slider_pane_g1_ParamLimits

0xe154,	// (0x0001b36f) slider_pane_g1

0xe168,	// (0x0001b383) slider_pane_g2_ParamLimits

0xe168,	// (0x0001b383) slider_pane_g2

0xe17e,	// (0x0001b399) slider_pane_g3_ParamLimits

0xe17e,	// (0x0001b399) slider_pane_g3

0x0003,

0xfe11,	// (0x0001d02c) slider_pane_g_ParamLimits

0xfe11,	// (0x0001d02c) slider_pane_g

0x8847,	// (0x00015a62) popup_tb_float_extension_window_ParamLimits

0x8847,	// (0x00015a62) popup_tb_float_extension_window

0xe1aa,	// (0x0001b3c5) aid_size_cell_tb_float_ext

0x3231,	// (0x0001044c) bg_popup_sub_window_cp28

0xe1b6,	// (0x0001b3d1) grid_tb_float_ext_pane

0xe1c2,	// (0x0001b3dd) cell_tb_float_ext_pane_ParamLimits

0xe1c2,	// (0x0001b3dd) cell_tb_float_ext_pane

0xe1de,	// (0x0001b3f9) cell_tb_float_ext_pane_g1

0xe1e7,	// (0x0001b402) grid_highlight_pane_cp12

0x645d,	// (0x00013678) cell_last_hwr_side_pane_ParamLimits

0x645d,	// (0x00013678) cell_last_hwr_side_pane

0xb9b6,	// (0x00018bd1) cell_last_hwr_side_pane_g1

0xe1f0,	// (0x0001b40b) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0001d035) cell_last_hwr_side_pane_g

0x6bdf,	// (0x00013dfa) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6bdf,	// (0x00013dfa) vkb2_area_bottom_space_btn_pane

0x6583,	// (0x0001379e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdca5,	// (0x0001aec0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6e7d,	// (0x00014098) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6e9b,	// (0x000140b6) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6e9b,	// (0x000140b6) vkb2_area_bottom_space_btn_pane_g1

0x6ed5,	// (0x000140f0) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6ed5,	// (0x000140f0) vkb2_area_bottom_space_btn_pane_g2

0x6f0b,	// (0x00014126) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6f0b,	// (0x00014126) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0001d03a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0001d03a) vkb2_area_bottom_space_btn_pane_g

0x63cd,	// (0x000135e8) cel_fep_hwr_func_pane_ParamLimits

0x63cd,	// (0x000135e8) cel_fep_hwr_func_pane

0x6409,	// (0x00013624) cell_hwr_side_button_pane_ParamLimits

0x6409,	// (0x00013624) cell_hwr_side_button_pane

0xd68b,	// (0x0001a8a6) aid_area_touch_clock_ParamLimits

0x3650,	// (0x0001086b) bg_uniindi_top_pane_ParamLimits

0xd69f,	// (0x0001a8ba) uniindi_top_pane_g1_ParamLimits

0xd6b5,	// (0x0001a8d0) uniindi_top_pane_g2_ParamLimits

0xd6c1,	// (0x0001a8dc) uniindi_top_pane_g3_ParamLimits

0xd6d2,	// (0x0001a8ed) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0001cf4d) uniindi_top_pane_g_ParamLimits

0xd6df,	// (0x0001a8fa) uniindi_top_pane_t1_ParamLimits

0x3650,	// (0x0001086b) bg_vkb2_func_pane_cp01_ParamLimits

0x3650,	// (0x0001086b) bg_vkb2_func_pane_cp01

0xe1f9,	// (0x0001b414) cel_fep_hwr_func_pane_g1_ParamLimits

0xe1f9,	// (0x0001b414) cel_fep_hwr_func_pane_g1

0x3650,	// (0x0001086b) bg_vkb2_func_pane_cp02_ParamLimits

0x3650,	// (0x0001086b) bg_vkb2_func_pane_cp02

0xe1f9,	// (0x0001b414) cell_hwr_side_button_pane_g1_ParamLimits

0xe1f9,	// (0x0001b414) cell_hwr_side_button_pane_g1

0x8ccf,	// (0x00015eea) status_pane_g4_ParamLimits

0x8ccf,	// (0x00015eea) status_pane_g4

0x8ce9,	// (0x00015f04) status_pane_t1

0xb755,	// (0x00018970) form2_midp_gauge_slider_cont_pane

0xb75d,	// (0x00018978) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb76f,	// (0x0001898a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb781,	// (0x0001899c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0001cd0d) form2_midp_gauge_slider_pane_t_ParamLimits

0xb793,	// (0x000189ae) form2_midp_slider_pane_ParamLimits

0x6842,	// (0x00013a5d) aid_size_cell_func_vkb2_ParamLimits

0x6842,	// (0x00013a5d) aid_size_cell_func_vkb2

0xe196,	// (0x0001b3b1) slider_pane_g4_ParamLimits

0xe196,	// (0x0001b3b1) slider_pane_g4

0x6f55,	// (0x00014170) form2_midp_gauge_slider_pane_t2_cp01

0x6f63,	// (0x0001417e) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6f63,	// (0x0001417e) form2_midp_gauge_slider_pane_t3_cp01

0x6f80,	// (0x0001419b) form2_midp_slider_pane_cp01

0x3231,	// (0x0001044c) navi_smil_pane

0xe232,	// (0x0001b44d) navi_smil_pane_g1

0xe23a,	// (0x0001b455) navi_smil_pane_t1

0xe207,	// (0x0001b422) form2_midp_slider_pane_g1

0xe210,	// (0x0001b42b) form2_midp_slider_pane_g2

0xe218,	// (0x0001b433) form2_midp_slider_pane_g3

0xe207,	// (0x0001b422) form2_midp_slider_pane_g4

0xe220,	// (0x0001b43b) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0001d043) form2_midp_slider_pane_g

0x6f45,	// (0x00014160) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6f45,	// (0x00014160) vkb2_area_bottom_space_btn_pane_g4

0x8ae6,	// (0x00015d01) lc0_navi_pane_ParamLimits

0x8ae6,	// (0x00015d01) lc0_navi_pane

0x8b62,	// (0x00015d7d) lc0_stat_indi_pane_ParamLimits

0x8b62,	// (0x00015d7d) lc0_stat_indi_pane

0x8b79,	// (0x00015d94) ls0_title_pane_ParamLimits

0x8b79,	// (0x00015d94) ls0_title_pane

0x3bd0,	// (0x00010deb) bg_popup_sub_pane_cp14_ParamLimits

0xd672,	// (0x0001a88d) list_uniindi_pane_ParamLimits

0xd67e,	// (0x0001a899) uniindi_top_pane_ParamLimits

0xd71d,	// (0x0001a938) list_single_uniindi_pane_g1_ParamLimits

0xd730,	// (0x0001a94b) list_single_uniindi_pane_t1_ParamLimits

0x6f89,	// (0x000141a4) lc0_stat_clock_pane_ParamLimits

0x6f89,	// (0x000141a4) lc0_stat_clock_pane

0xe248,	// (0x0001b463) lc0_stat_indi_pane_g1_ParamLimits

0xe248,	// (0x0001b463) lc0_stat_indi_pane_g1

0xe255,	// (0x0001b470) lc0_stat_indi_pane_g2_ParamLimits

0xe255,	// (0x0001b470) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0001d04e) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0001d04e) lc0_stat_indi_pane_g

0x6f96,	// (0x000141b1) lc0_uni_indicator_pane_ParamLimits

0x6f96,	// (0x000141b1) lc0_uni_indicator_pane

0xe262,	// (0x0001b47d) ls0_title_pane_g1_ParamLimits

0xe262,	// (0x0001b47d) ls0_title_pane_g1

0xe276,	// (0x0001b491) ls0_title_pane_t1_ParamLimits

0xe276,	// (0x0001b491) ls0_title_pane_t1

0x6fa3,	// (0x000141be) lc0_uni_indicator_pane_g1_ParamLimits

0x6fa3,	// (0x000141be) lc0_uni_indicator_pane_g1

0xe2ac,	// (0x0001b4c7) lc0_stat_clock_pane_t1

0x3231,	// (0x0001044c) main_ai5_pane

0xe2ba,	// (0x0001b4d5) ai5_sk_pane_ParamLimits

0xe2ba,	// (0x0001b4d5) ai5_sk_pane

0xe2c7,	// (0x0001b4e2) cell_ai5_widget_pane_ParamLimits

0xe2c7,	// (0x0001b4e2) cell_ai5_widget_pane

0xe863,	// (0x0001ba7e) aid_size_cell_widget_grid

0xe871,	// (0x0001ba8c) bg_ai5_widget_pane_ParamLimits

0xe871,	// (0x0001ba8c) bg_ai5_widget_pane

0xe8e5,	// (0x0001bb00) cell_ai5_widget_pane_g2

0xe8f5,	// (0x0001bb10) cell_ai5_widget_pane_g3

0xe90c,	// (0x0001bb27) cell_ai5_widget_pane_g4

0xe918,	// (0x0001bb33) cell_ai5_widget_pane_g5

0xe924,	// (0x0001bb3f) cell_ai5_widget_pane_g6

0xe930,	// (0x0001bb4b) cell_ai5_widget_pane_g7

0xe978,	// (0x0001bb93) cell_ai5_widget_pane_t1_ParamLimits

0xe978,	// (0x0001bb93) cell_ai5_widget_pane_t1

0xe995,	// (0x0001bbb0) cell_ai5_widget_pane_t2_ParamLimits

0xe995,	// (0x0001bbb0) cell_ai5_widget_pane_t2

0xe9ad,	// (0x0001bbc8) cell_ai5_widget_pane_t3_ParamLimits

0xe9ad,	// (0x0001bbc8) cell_ai5_widget_pane_t3

0xe9c5,	// (0x0001bbe0) cell_ai5_widget_pane_t4_ParamLimits

0xe9c5,	// (0x0001bbe0) cell_ai5_widget_pane_t4

0xe9e2,	// (0x0001bbfd) cell_ai5_widget_pane_t5_ParamLimits

0xe9e2,	// (0x0001bbfd) cell_ai5_widget_pane_t5

0xea01,	// (0x0001bc1c) cell_ai5_widget_pane_t6_ParamLimits

0xea01,	// (0x0001bc1c) cell_ai5_widget_pane_t6

0xea13,	// (0x0001bc2e) cell_ai5_widget_pane_t7_ParamLimits

0xea13,	// (0x0001bc2e) cell_ai5_widget_pane_t7

0xea2c,	// (0x0001bc47) cell_ai5_widget_pane_t8_ParamLimits

0xea2c,	// (0x0001bc47) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0001d068) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0001d068) cell_ai5_widget_pane_t

0xea80,	// (0x0001bc9b) grid_ai5_widget_pane

0x3bd0,	// (0x00010deb) highlight_cell_ai5_widget_pane_ParamLimits

0x3bd0,	// (0x00010deb) highlight_cell_ai5_widget_pane

0xea8e,	// (0x0001bca9) ai5_sk_left_pane

0xea98,	// (0x0001bcb3) ai5_sk_middle_pane

0xeaa2,	// (0x0001bcbd) ai5_sk_right_pane

0xeaac,	// (0x0001bcc7) bg_ai5_widget_pane_g1_ParamLimits

0xeaac,	// (0x0001bcc7) bg_ai5_widget_pane_g1

0xeab8,	// (0x0001bcd3) bg_ai5_widget_pane_g2_ParamLimits

0xeab8,	// (0x0001bcd3) bg_ai5_widget_pane_g2

0xeac4,	// (0x0001bcdf) bg_ai5_widget_pane_g3_ParamLimits

0xeac4,	// (0x0001bcdf) bg_ai5_widget_pane_g3

0xead0,	// (0x0001bceb) bg_ai5_widget_pane_g4_ParamLimits

0xead0,	// (0x0001bceb) bg_ai5_widget_pane_g4

0xeadc,	// (0x0001bcf7) bg_ai5_widget_pane_g5_ParamLimits

0xeadc,	// (0x0001bcf7) bg_ai5_widget_pane_g5

0xeae8,	// (0x0001bd03) bg_ai5_widget_pane_g6_ParamLimits

0xeae8,	// (0x0001bd03) bg_ai5_widget_pane_g6

0xeaf4,	// (0x0001bd0f) bg_ai5_widget_pane_g7_ParamLimits

0xeaf4,	// (0x0001bd0f) bg_ai5_widget_pane_g7

0xeb00,	// (0x0001bd1b) bg_ai5_widget_pane_g8_ParamLimits

0xeb00,	// (0x0001bd1b) bg_ai5_widget_pane_g8

0xeb0c,	// (0x0001bd27) bg_ai5_widget_pane_g9_ParamLimits

0xeb0c,	// (0x0001bd27) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0001d07d) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0001d07d) bg_ai5_widget_pane_g

0xeb44,	// (0x0001bd5f) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb44,	// (0x0001bd5f) cell_shortcut_ai5_widget_pane

0x49b6,	// (0x00011bd1) bg_cell_shortcut_ai5_widget_pane

0xeb57,	// (0x0001bd72) cell_grid_ai5_widget_pane_g1

0x49b6,	// (0x00011bd1) highlight_cell_shortcut_ai5_widget_pane

0x8e84,	// (0x0001609f) ai5_sk_left_pane_g1

0xeb60,	// (0x0001bd7b) ai5_sk_left_pane_g2

0xeb68,	// (0x0001bd83) ai5_sk_left_pane_g3

0xeb70,	// (0x0001bd8b) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0001d090) ai5_sk_left_pane_g

0xeb78,	// (0x0001bd93) ai5_sk_left_pane_t1

0x8e8c,	// (0x000160a7) ai5_sk_right_pane_g1

0xeb86,	// (0x0001bda1) ai5_sk_right_pane_g2

0xeb8e,	// (0x0001bda9) ai5_sk_right_pane_g3

0xeb96,	// (0x0001bdb1) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0001d099) ai5_sk_right_pane_g

0xeb9e,	// (0x0001bdb9) ai5_sk_right_pane_t1

0x8e8c,	// (0x000160a7) ai5_sk_middle_pane_g1

0x8e84,	// (0x0001609f) ai5_sk_middle_pane_g2

0x8ea4,	// (0x000160bf) ai5_sk_middle_pane_g3

0xeb8e,	// (0x0001bda9) ai5_sk_middle_pane_g4

0xeb68,	// (0x0001bd83) ai5_sk_middle_pane_g5

0xebac,	// (0x0001bdc7) ai5_sk_middle_pane_g6

0xebb4,	// (0x0001bdcf) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0001d0a2) ai5_sk_middle_pane_g

0x8968,	// (0x00015b83) aid_touch_area_size_lc0_ParamLimits

0x8968,	// (0x00015b83) aid_touch_area_size_lc0

0x65b2,	// (0x000137cd) cell_hwr_candidate_pane_t1_ParamLimits

0x8986,	// (0x00015ba1) aid_touch_navi_pane

0x8c79,	// (0x00015e94) status_dt_navi_pane_ParamLimits

0x8c79,	// (0x00015e94) status_dt_navi_pane

0x8c86,	// (0x00015ea1) status_dt_sta_pane_ParamLimits

0x8c86,	// (0x00015ea1) status_dt_sta_pane

0xebbc,	// (0x0001bdd7) dt_sta_controll_pane

0xebc9,	// (0x0001bde4) dt_sta_indi_pane

0xebda,	// (0x0001bdf5) dt_sta_title_pane

0x3650,	// (0x0001086b) bg_dt_sta_indi_pane_ParamLimits

0x3650,	// (0x0001086b) bg_dt_sta_indi_pane

0xebed,	// (0x0001be08) dt_sta_battery_pane

0xebf5,	// (0x0001be10) dt_sta_indi_pane_g1

0xebfe,	// (0x0001be19) dt_sta_indi_pane_g2

0xec07,	// (0x0001be22) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0001d0b1) dt_sta_indi_pane_g

0xec10,	// (0x0001be2b) dt_sta_signal_pane

0x3bd0,	// (0x00010deb) bg_dt_sta_title_pane_ParamLimits

0x3bd0,	// (0x00010deb) bg_dt_sta_title_pane

0xec19,	// (0x0001be34) dt_sta_title_pane_g1

0xec21,	// (0x0001be3c) dt_sta_title_pane_t1_ParamLimits

0xec21,	// (0x0001be3c) dt_sta_title_pane_t1

0x3231,	// (0x0001044c) bg_dt_sta_control_pane

0xec36,	// (0x0001be51) dt_sta_controll_pane_g1

0xec3f,	// (0x0001be5a) bg_dt_sta_title_pane_g1

0xec48,	// (0x0001be63) bg_dt_sta_title_pane_g2

0xec51,	// (0x0001be6c) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0001d0b8) bg_dt_sta_title_pane_g

0xb9b6,	// (0x00018bd1) bg_dt_sta_indi_pane_g1

0xec5a,	// (0x0001be75) dt_sta_signal_pane_g1

0xec62,	// (0x0001be7d) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0001d0bf) dt_sta_signal_pane_g

0xec6a,	// (0x0001be85) dt_sta_battery_pane_g1

0xec73,	// (0x0001be8e) dt_sta_battery_pane_t1

0xb9b6,	// (0x00018bd1) bg_dt_sta_control_pane_g1

0x4485,	// (0x000116a0) fep_china_uni_eep_pane

0x448d,	// (0x000116a8) fep_china_uni_entry_pane_ParamLimits

0x449d,	// (0x000116b8) popup_fep_china_uni_window_g1_ParamLimits

0x44ad,	// (0x000116c8) popup_fep_china_uni_window_g2_ParamLimits

0x44ad,	// (0x000116c8) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001c933) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001c933) popup_fep_china_uni_window_g

0xec82,	// (0x0001be9d) fep_china_uni_eep_pane_g1

0xec8a,	// (0x0001bea5) fep_china_uni_eep_pane_t1

0xe229,	// (0x0001b444) aid_touch_area_size_smil_player

0x8ade,	// (0x00015cf9) lc0_clock_pane

0x8cdd,	// (0x00015ef8) status_pane_g5_ParamLimits

0x8cdd,	// (0x00015ef8) status_pane_g5

0x84cc,	// (0x000156e7) popup_keymap_window

0x8c9b,	// (0x00015eb6) status_icon_pane

0xe8f5,	// (0x0001bb10) cell_ai5_widget_pane_g3_ParamLimits

0xe90c,	// (0x0001bb27) cell_ai5_widget_pane_g4_ParamLimits

0xe918,	// (0x0001bb33) cell_ai5_widget_pane_g5_ParamLimits

0xe93c,	// (0x0001bb57) cell_ai5_widget_pane_g8_ParamLimits

0xe93c,	// (0x0001bb57) cell_ai5_widget_pane_g8

0xe950,	// (0x0001bb6b) cell_ai5_widget_pane_g9_ParamLimits

0xe950,	// (0x0001bb6b) cell_ai5_widget_pane_g9

0xe964,	// (0x0001bb7f) cell_ai5_widget_pane_g10_ParamLimits

0xe964,	// (0x0001bb7f) cell_ai5_widget_pane_g10

0xec99,	// (0x0001beb4) status_icon_pane_g1

0x3231,	// (0x0001044c) bg_popup_sub_pane_cp13

0xeca1,	// (0x0001bebc) popup_keymap_window_t1

0x824a,	// (0x00015465) control_pane_g6_ParamLimits

0x824a,	// (0x00015465) control_pane_g6

0x8257,	// (0x00015472) control_pane_g7_ParamLimits

0x8257,	// (0x00015472) control_pane_g7

0x8264,	// (0x0001547f) control_pane_g8_ParamLimits

0x8264,	// (0x0001547f) control_pane_g8

0xebbc,	// (0x0001bdd7) dt_sta_controll_pane_ParamLimits

0xebc9,	// (0x0001bde4) dt_sta_indi_pane_ParamLimits

0xebda,	// (0x0001bdf5) dt_sta_title_pane_ParamLimits

0x3a74,	// (0x00010c8f) aid_size_touch_scroll_bar_cale

0x55f8,	// (0x00012813) popup_discreet_window_ParamLimits

0x55f8,	// (0x00012813) popup_discreet_window

0x5686,	// (0x000128a1) popup_sk_window

0x95ad,	// (0x000167c8) bg_popup_sub_pane_cp28_ParamLimits

0x95ad,	// (0x000167c8) bg_popup_sub_pane_cp28

0xecaf,	// (0x0001beca) popup_discreet_window_g1_ParamLimits

0xecaf,	// (0x0001beca) popup_discreet_window_g1

0xeccf,	// (0x0001beea) popup_discreet_window_t1_ParamLimits

0xeccf,	// (0x0001beea) popup_discreet_window_t1

0xeced,	// (0x0001bf08) popup_discreet_window_t2_ParamLimits

0xeced,	// (0x0001bf08) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0001d0c4) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0001d0c4) popup_discreet_window_t

0x6fb6,	// (0x000141d1) popup_sk_window_g1

0x6fc0,	// (0x000141db) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0001d0cb) popup_sk_window_g

0x6fca,	// (0x000141e5) popup_sk_window_t1

0x6fda,	// (0x000141f5) popup_sk_window_t1_copy1

0xe8e5,	// (0x0001bb00) cell_ai5_widget_pane_g2_ParamLimits

0xea3e,	// (0x0001bc59) cell_ai5_widget_pane_t9_ParamLimits

0xea3e,	// (0x0001bc59) cell_ai5_widget_pane_t9

0x3231,	// (0x0001044c) main_fep_fshwr2_pane

0x6fe8,	// (0x00014203) aid_fshwr2_btn_pane

0x6ff4,	// (0x0001420f) aid_fshwr2_syb_pane

0x7000,	// (0x0001421b) aid_fshwr2_txt_pane

0x700c,	// (0x00014227) fshwr2_func_candi_pane

0x701f,	// (0x0001423a) fshwr2_hwr_syb_pane

0x702d,	// (0x00014248) fshwr2_icf_pane

0x551b,	// (0x00012736) fshwr2_icf_bg_pane

0x705c,	// (0x00014277) fshwr2_icf_pane_t1_ParamLimits

0x705c,	// (0x00014277) fshwr2_icf_pane_t1

0x432a,	// (0x00011545) fshwr2_func_candi_pane_g1

0xed3f,	// (0x0001bf5a) fshwr2_func_candi_row_pane_ParamLimits

0xed3f,	// (0x0001bf5a) fshwr2_func_candi_row_pane

0x7074,	// (0x0001428f) cell_fshwr2_syb_pane_ParamLimits

0x7074,	// (0x0001428f) cell_fshwr2_syb_pane

0x6583,	// (0x0001379e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6583,	// (0x0001379e) fshwr2_hwr_syb_pane_g1

0x551b,	// (0x00012736) bg_popup_call_pane_cp01

0x708a,	// (0x000142a5) fshwr2_func_candi_cell_pane_ParamLimits

0x708a,	// (0x000142a5) fshwr2_func_candi_cell_pane

0xed4f,	// (0x0001bf6a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed4f,	// (0x0001bf6a) fshwr2_func_candi_cell_bg_pane

0x70d4,	// (0x000142ef) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x70d4,	// (0x000142ef) fshwr2_func_candi_cell_pane_g1

0x70f4,	// (0x0001430f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x70f4,	// (0x0001430f) fshwr2_func_candi_cell_pane_t1

0x551b,	// (0x00012736) bg_button_pane_cp08

0xed5b,	// (0x0001bf76) cell_fshwr2_syb_bg_pane

0x7107,	// (0x00014322) cell_fshwr2_syb_bg_pane_g1

0x710f,	// (0x0001432a) cell_fshwr2_syb_bg_pane_t1

0x3bd0,	// (0x00010deb) main_tmo_pane

0xa0d1,	// (0x000172ec) uni_indicator_pane_g1_ParamLimits

0xa0e7,	// (0x00017302) uni_indicator_pane_g2_ParamLimits

0xa0fd,	// (0x00017318) uni_indicator_pane_g3_ParamLimits

0xa112,	// (0x0001732d) uni_indicator_pane_g4_ParamLimits

0xa112,	// (0x0001732d) uni_indicator_pane_g4

0xa126,	// (0x00017341) uni_indicator_pane_g5_ParamLimits

0xa126,	// (0x00017341) uni_indicator_pane_g5

0xa126,	// (0x00017341) uni_indicator_pane_g6_ParamLimits

0xa126,	// (0x00017341) uni_indicator_pane_g6

0xf91c,	// (0x0001cb37) uni_indicator_pane_g_ParamLimits

0xd248,	// (0x0001a463) popup_tmo_note_window_ParamLimits

0xd248,	// (0x0001a463) popup_tmo_note_window

0x6824,	// (0x00013a3f) fshwr2_bg_pane

0x70e5,	// (0x00014300) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x70e5,	// (0x00014300) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0001d0d0) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0001d0d0) fshwr2_func_candi_cell_pane_g

0x656b,	// (0x00013786) bg_popup_window_pane_cp01

0x711e,	// (0x00014339) bg_popup_window_pane_g1_cp01

0xed63,	// (0x0001bf7e) bg_popup_window_pane_cp22_ParamLimits

0xed63,	// (0x0001bf7e) bg_popup_window_pane_cp22

0xed71,	// (0x0001bf8c) listscroll_tmo_link_pane_ParamLimits

0xed71,	// (0x0001bf8c) listscroll_tmo_link_pane

0xedb1,	// (0x0001bfcc) popup_tmo_note_window_g1_ParamLimits

0xedb1,	// (0x0001bfcc) popup_tmo_note_window_g1

0xedbe,	// (0x0001bfd9) tmo_note_info_pane_ParamLimits

0xedbe,	// (0x0001bfd9) tmo_note_info_pane

0xedd8,	// (0x0001bff3) list_tmo_note_info_pane_g1_ParamLimits

0xedd8,	// (0x0001bff3) list_tmo_note_info_pane_g1

0xedef,	// (0x0001c00a) list_tmo_note_info_pane_g2_ParamLimits

0xedef,	// (0x0001c00a) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0001d0d5) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0001d0d5) list_tmo_note_info_pane_g

0xee0b,	// (0x0001c026) list_tmo_note_info_text_pane_ParamLimits

0xee0b,	// (0x0001c026) list_tmo_note_info_text_pane

0xee90,	// (0x0001c0ab) list_tmo_link_pane

0xee9d,	// (0x0001c0b8) scroll_pane_cp20

0xeeaa,	// (0x0001c0c5) list_single_tmo_link_pane_ParamLimits

0xeeaa,	// (0x0001c0c5) list_single_tmo_link_pane

0xeeba,	// (0x0001c0d5) list_single_tmo_link_pane_t1

0xeec8,	// (0x0001c0e3) list_tmo_note_info_text_pane_t1_ParamLimits

0xeec8,	// (0x0001c0e3) list_tmo_note_info_text_pane_t1

0x7bd3,	// (0x00014dee) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7bd3,	// (0x00014dee) aid_size_touch_scroll_bar_cp01

0x7b17,	// (0x00014d32) aid_size_touch_slider_marker

0x566e,	// (0x00012889) popup_settings_window_ParamLimits

0x566e,	// (0x00012889) popup_settings_window

0x832d,	// (0x00015548) popup_candi_list_indi_window

0x8986,	// (0x00015ba1) aid_touch_navi_pane_ParamLimits

0x677d,	// (0x00013998) rs_clock_indi_pane

0x6786,	// (0x000139a1) sctrl_sk_bottom_pane_ParamLimits

0x6797,	// (0x000139b2) sctrl_sk_top_pane_ParamLimits

0x689c,	// (0x00013ab7) popup_fep_tooltip_window

0xe863,	// (0x0001ba7e) aid_size_cell_widget_grid_ParamLimits

0xe8d0,	// (0x0001baeb) cell_ai5_widget_pane_g1_ParamLimits

0xe8d0,	// (0x0001baeb) cell_ai5_widget_pane_g1

0xe924,	// (0x0001bb3f) cell_ai5_widget_pane_g6_ParamLimits

0xe930,	// (0x0001bb4b) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0001d053) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0001d053) cell_ai5_widget_pane_g

0xea62,	// (0x0001bc7d) cell_ai5_widget_pane_t10_ParamLimits

0xea62,	// (0x0001bc7d) cell_ai5_widget_pane_t10

0xea80,	// (0x0001bc9b) grid_ai5_widget_pane_ParamLimits

0xeb18,	// (0x0001bd33) cell_contacts_ai5_widget_pane_ParamLimits

0xeb18,	// (0x0001bd33) cell_contacts_ai5_widget_pane

0xed02,	// (0x0001bf1d) popup_discreet_window_t3_ParamLimits

0xed02,	// (0x0001bf1d) popup_discreet_window_t3

0x7044,	// (0x0001425f) popup_fshwr2_char_preview_window_ParamLimits

0x7044,	// (0x0001425f) popup_fshwr2_char_preview_window

0xee29,	// (0x0001c044) tmo_note_info_pane_t1

0xee3e,	// (0x0001c059) tmo_note_info_pane_t2

0xee57,	// (0x0001c072) tmo_note_info_pane_t3

0xee6c,	// (0x0001c087) tmo_note_info_pane_t4

0xee7e,	// (0x0001c099) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0001d0da) tmo_note_info_pane_t

0xee90,	// (0x0001c0ab) list_tmo_link_pane_ParamLimits

0xee9d,	// (0x0001c0b8) scroll_pane_cp20_ParamLimits

0x551b,	// (0x00012736) bg_popup_fep_char_preview_window_cp01

0xeee1,	// (0x0001c0fc) popup_fshwr2_char_preview_window_t1

0xeeef,	// (0x0001c10a) popup_candi_list_indi_window_g1

0xeef8,	// (0x0001c113) bg_cell_contacts_ai5_widget_pane

0xef04,	// (0x0001c11f) cell_contacts_ai5_widget_pane_g1

0xef19,	// (0x0001c134) cell_contacts_ai5_widget_pane_g2

0xef25,	// (0x0001c140) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0001d0e5) cell_contacts_ai5_widget_pane_g

0xef31,	// (0x0001c14c) cell_contacts_ai5_widget_pane_t1

0x3bd0,	// (0x00010deb) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefa8,	// (0x0001c1c3) settings_container_pane

0x49b6,	// (0x00011bd1) listscroll_set_pane_copy1

0xadab,	// (0x00017fc6) scroll_pane_cp121_copy1

0xefb4,	// (0x0001c1cf) set_content_pane_copy1

0xefbc,	// (0x0001c1d7) aid_height_set_list_copy1_ParamLimits

0xefbc,	// (0x0001c1d7) aid_height_set_list_copy1

0xa34e,	// (0x00017569) aid_size_parent_copy1_ParamLimits

0xa34e,	// (0x00017569) aid_size_parent_copy1

0xefc8,	// (0x0001c1e3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefc8,	// (0x0001c1e3) button_value_adjust_pane_cp6_copy1

0x8305,	// (0x00015520) list_highlight_pane_cp2_copy1_ParamLimits

0x8305,	// (0x00015520) list_highlight_pane_cp2_copy1

0xefdc,	// (0x0001c1f7) list_set_pane_copy1_ParamLimits

0xefdc,	// (0x0001c1f7) list_set_pane_copy1

0xef43,	// (0x0001c15e) main_pane_set_t1_copy1_ParamLimits

0xef43,	// (0x0001c15e) main_pane_set_t1_copy1

0xef7d,	// (0x0001c198) main_pane_set_t2_copy1_ParamLimits

0xef7d,	// (0x0001c198) main_pane_set_t2_copy1

0xf0a3,	// (0x0001c2be) main_pane_set_t3_copy1

0xf0b1,	// (0x0001c2cc) main_pane_set_t4_copy1

0xef9c,	// (0x0001c1b7) set_content_pane_g1_copy1_ParamLimits

0xef9c,	// (0x0001c1b7) set_content_pane_g1_copy1

0xf0bf,	// (0x0001c2da) setting_code_pane_copy1

0xf0c7,	// (0x0001c2e2) setting_slider_graphic_pane_copy1

0xf0c7,	// (0x0001c2e2) setting_slider_pane_copy1

0xf0c7,	// (0x0001c2e2) setting_text_pane_copy1

0xf0c7,	// (0x0001c2e2) setting_volume_pane_copy1

0xf0bf,	// (0x0001c2da) settings_code_pane_cp2_copy1

0xf0cf,	// (0x0001c2ea) settings_code_pane_cp_copy1_ParamLimits

0xf0cf,	// (0x0001c2ea) settings_code_pane_cp_copy1

0x7127,	// (0x00014342) volume_set_pane_copy1

0xf0e3,	// (0x0001c2fe) volume_set_pane_g10_copy1

0xf0ef,	// (0x0001c30a) volume_set_pane_g1_copy1

0xf0f9,	// (0x0001c314) volume_set_pane_g2_copy1

0xf103,	// (0x0001c31e) volume_set_pane_g3_copy1

0xf10d,	// (0x0001c328) volume_set_pane_g4_copy1

0xf117,	// (0x0001c332) volume_set_pane_g5_copy1

0xf121,	// (0x0001c33c) volume_set_pane_g6_copy1

0xf12b,	// (0x0001c346) volume_set_pane_g7_copy1

0xf135,	// (0x0001c350) volume_set_pane_g8_copy1

0xf13f,	// (0x0001c35a) volume_set_pane_g9_copy1

0x347a,	// (0x00010695) bg_set_opt_pane_cp_copy1_ParamLimits

0x347a,	// (0x00010695) bg_set_opt_pane_cp_copy1

0x7133,	// (0x0001434e) setting_slider_pane_t1_copy1_ParamLimits

0x7133,	// (0x0001434e) setting_slider_pane_t1_copy1

0x7151,	// (0x0001436c) setting_slider_pane_t2_copy1_ParamLimits

0x7151,	// (0x0001436c) setting_slider_pane_t2_copy1

0x716b,	// (0x00014386) setting_slider_pane_t3_copy1_ParamLimits

0x716b,	// (0x00014386) setting_slider_pane_t3_copy1

0x7183,	// (0x0001439e) slider_set_pane_copy1_ParamLimits

0x7183,	// (0x0001439e) slider_set_pane_copy1

0x3c99,	// (0x00010eb4) set_opt_bg_pane_g1_copy2

0x3ca1,	// (0x00010ebc) set_opt_bg_pane_g2_copy2

0xf149,	// (0x0001c364) set_opt_bg_pane_g3_copy2

0x3cb1,	// (0x00010ecc) set_opt_bg_pane_g4_copy2

0x3cb9,	// (0x00010ed4) set_opt_bg_pane_g5_copy2

0x3cc1,	// (0x00010edc) set_opt_bg_pane_g6_copy2

0xf153,	// (0x0001c36e) set_opt_bg_pane_g7_copy2

0xf15d,	// (0x0001c378) set_opt_bg_pane_g8_copy2

0xf167,	// (0x0001c382) set_opt_bg_pane_g9_copy2

0x7199,	// (0x000143b4) aid_size_touch_slider_mark_copy1_ParamLimits

0x7199,	// (0x000143b4) aid_size_touch_slider_mark_copy1

0xf171,	// (0x0001c38c) slider_set_pane_g1_copy1

0x71ad,	// (0x000143c8) slider_set_pane_g2_copy1

0x6196,	// (0x000133b1) slider_set_pane_g3_copy1_ParamLimits

0x6196,	// (0x000133b1) slider_set_pane_g3_copy1

0x61aa,	// (0x000133c5) slider_set_pane_g4_copy1_ParamLimits

0x61aa,	// (0x000133c5) slider_set_pane_g4_copy1

0x61c2,	// (0x000133dd) slider_set_pane_g5_copy1_ParamLimits

0x61c2,	// (0x000133dd) slider_set_pane_g5_copy1

0x6196,	// (0x000133b1) slider_set_pane_g6_copy1_ParamLimits

0x6196,	// (0x000133b1) slider_set_pane_g6_copy1

0x71b5,	// (0x000143d0) slider_set_pane_g7_copy1_ParamLimits

0x71b5,	// (0x000143d0) slider_set_pane_g7_copy1

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp2_copy1

0xf17a,	// (0x0001c395) setting_slider_graphic_pane_g1_copy1

0xf183,	// (0x0001c39e) setting_slider_graphic_pane_t1_copy1

0xf193,	// (0x0001c3ae) setting_slider_graphic_pane_t2_copy1

0xf1a3,	// (0x0001c3be) slider_set_pane_cp_copy1

0xf1b3,	// (0x0001c3ce) input_focus_pane_cp1_copy1

0xf1bc,	// (0x0001c3d7) list_set_text_pane_copy1

0xf1c4,	// (0x0001c3df) setting_text_pane_g1_copy1

0xf1cd,	// (0x0001c3e8) set_text_pane_t1_copy1

0xf1b3,	// (0x0001c3ce) input_focus_pane_cp2_copy1

0xf1c4,	// (0x0001c3df) setting_code_pane_g1_copy1

0xf1e6,	// (0x0001c401) setting_code_pane_t1_copy1

0xf1f4,	// (0x0001c40f) list_set_graphic_pane_copy1

0x33b4,	// (0x000105cf) bg_set_opt_pane_cp4_copy1

0x7ec8,	// (0x000150e3) list_set_graphic_pane_g1_copy1_ParamLimits

0x7ec8,	// (0x000150e3) list_set_graphic_pane_g1_copy1

0xf206,	// (0x0001c421) list_set_graphic_pane_g2_copy1

0x7ee0,	// (0x000150fb) list_set_graphic_pane_t1_copy1_ParamLimits

0x7ee0,	// (0x000150fb) list_set_graphic_pane_t1_copy1

0xb9b6,	// (0x00018bd1) rs_clock_indi_pane_g1

0xf20e,	// (0x0001c429) rs_clock_indi_pane_t1

0xf21c,	// (0x0001c437) rs_indi_pane

0xf224,	// (0x0001c43f) rs_indi_pane_g1

0xf22d,	// (0x0001c448) rs_indi_pane_g2

0xf236,	// (0x0001c451) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0001d0ec) rs_indi_pane_g

0x49b6,	// (0x00011bd1) bg_popup_preview_window_pane_cp03

0xf23f,	// (0x0001c45a) popup_fep_tooltip_window_t1

0xc87d,	// (0x00019a98) popup_note2_window_g2_ParamLimits

0xc87d,	// (0x00019a98) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0001ce85) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0001ce85) popup_note2_window_g

0xce74,	// (0x0001a08f) bg_popup_sub_pane_cp11_ParamLimits

0xce81,	// (0x0001a09c) cell_ai3_links_pane_g1_ParamLimits

0xce98,	// (0x0001a0b3) cell_ai3_links_pane_t1

0xf1cd,	// (0x0001c3e8) set_text_pane_t1_copy1_ParamLimits

0x7f5f,	// (0x0001517a) cell_graphic_popup_pane_cp2_ParamLimits

0x7f5f,	// (0x0001517a) cell_graphic_popup_pane_cp2

0xf24d,	// (0x0001c468) cell_graphic_popup_pane_g1_cp2

0x3887,	// (0x00010aa2) cell_graphic_popup_pane_g2_cp2

0xf255,	// (0x0001c470) cell_graphic_popup_pane_g3_cp2

0xf25d,	// (0x0001c478) cell_graphic_popup_pane_t2_cp2

0x3898,	// (0x00010ab3) grid_highlight_pane_cp3_cp2

0x4119,	// (0x00011334) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3bd0,	// (0x00010deb) main_tmo_pane_ParamLimits

0xd23c,	// (0x0001a457) popup_tmo_big_image_note_window

0xe8bf,	// (0x0001bada) cell_ai5_widget_list_pane

0xe8c7,	// (0x0001bae2) cell_ai5_widget_lrg_icon_pane

0xee29,	// (0x0001c044) tmo_note_info_pane_t1_ParamLimits

0xee3e,	// (0x0001c059) tmo_note_info_pane_t2_ParamLimits

0xee57,	// (0x0001c072) tmo_note_info_pane_t3_ParamLimits

0xee6c,	// (0x0001c087) tmo_note_info_pane_t4_ParamLimits

0xee7e,	// (0x0001c099) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0001d0da) tmo_note_info_pane_t_ParamLimits

0xefa8,	// (0x0001c1c3) settings_container_pane_ParamLimits

0xf1ab,	// (0x0001c3c6) indicator_popup_pane_cp5

0xf1ab,	// (0x0001c3c6) indicator_popup_pane_cp6

0xf1f4,	// (0x0001c40f) list_set_graphic_pane_copy1_ParamLimits

0x3231,	// (0x0001044c) bg_popup_window_pane_cp23

0xf26b,	// (0x0001c486) popup_tmo_big_image_note_window_g1

0xf277,	// (0x0001c492) popup_tmo_big_image_note_window_t1

0xf287,	// (0x0001c4a2) popup_tmo_big_image_note_window_t2

0xf297,	// (0x0001c4b2) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0001d0f3) popup_tmo_big_image_note_window_t

0xb9b6,	// (0x00018bd1) cell_ai5_widget_lrg_icon_pane_g1

0xf2a7,	// (0x0001c4c2) cell_ai5_widget_lrg_icon_pane_t1

0xf2b5,	// (0x0001c4d0) cell_ai5_widget_list_row_pane_ParamLimits

0xf2b5,	// (0x0001c4d0) cell_ai5_widget_list_row_pane

0xf2cd,	// (0x0001c4e8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2cd,	// (0x0001c4e8) cell_ai5_widget_list_row_pane_g1

0xf2da,	// (0x0001c4f5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2da,	// (0x0001c4f5) cell_ai5_widget_list_row_pane_t1

0xf305,	// (0x0001c520) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf305,	// (0x0001c520) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0001d0fa) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0001d0fa) cell_ai5_widget_list_row_pane_t

0x551b,	// (0x00012736) main_fep_vtchi_ss_pane

0xf349,	// (0x0001c564) popup_fep_char_pre_window

0xf351,	// (0x0001c56c) popup_fep_ituss_window

0xf372,	// (0x0001c58d) popup_fep_vkbss_window

0xf393,	// (0x0001c5ae) grid_vkbss_keypad_pane_ParamLimits

0xf393,	// (0x0001c5ae) grid_vkbss_keypad_pane

0xf3a3,	// (0x0001c5be) ituss_keypad_pane

0x71d7,	// (0x000143f2) aid_vkbss_key_offset_ParamLimits

0x71d7,	// (0x000143f2) aid_vkbss_key_offset

0x71e3,	// (0x000143fe) cell_vkbss_key_pane_ParamLimits

0x71e3,	// (0x000143fe) cell_vkbss_key_pane

0xf3b2,	// (0x0001c5cd) bg_cell_vkbss_key_g1_ParamLimits

0xf3b2,	// (0x0001c5cd) bg_cell_vkbss_key_g1

0xf3be,	// (0x0001c5d9) cell_vkbss_key_3p_pane_ParamLimits

0xf3be,	// (0x0001c5d9) cell_vkbss_key_3p_pane

0xf3d8,	// (0x0001c5f3) cell_vkbss_key_g1_ParamLimits

0xf3d8,	// (0x0001c5f3) cell_vkbss_key_g1

0xf3f2,	// (0x0001c60d) cell_vkbss_key_t1_ParamLimits

0xf3f2,	// (0x0001c60d) cell_vkbss_key_t1

0x71f9,	// (0x00014414) cell_ituss_key_pane_ParamLimits

0x71f9,	// (0x00014414) cell_ituss_key_pane

0xf41d,	// (0x0001c638) bg_cell_ituss_key_g1_ParamLimits

0xf41d,	// (0x0001c638) bg_cell_ituss_key_g1

0xf429,	// (0x0001c644) cell_ituss_key_pane_g1_ParamLimits

0xf429,	// (0x0001c644) cell_ituss_key_pane_g1

0x720a,	// (0x00014425) cell_ituss_key_pane_g2_ParamLimits

0x720a,	// (0x00014425) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0001d101) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0001d101) cell_ituss_key_pane_g

0x7236,	// (0x00014451) cell_ituss_key_t1_ParamLimits

0x7236,	// (0x00014451) cell_ituss_key_t1

0x7270,	// (0x0001448b) cell_ituss_key_t2_ParamLimits

0x7270,	// (0x0001448b) cell_ituss_key_t2

0x72a1,	// (0x000144bc) cell_ituss_key_t3_ParamLimits

0x72a1,	// (0x000144bc) cell_ituss_key_t3

0x7270,	// (0x0001448b) cell_ituss_key_t4_ParamLimits

0x7270,	// (0x0001448b) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0001d108) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0001d108) cell_ituss_key_t

0xf44f,	// (0x0001c66a) cell_vkbss_key_3p_pane_g1

0xf457,	// (0x0001c672) cell_vkbss_key_3p_pane_g2

0xf45f,	// (0x0001c67a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001d113) cell_vkbss_key_3p_pane_g

0x551b,	// (0x00012736) bg_popup_fep_char_preview_window_cp02

0x72e4,	// (0x000144ff) popup_fep_char_pre_window_t1

0xe859,	// (0x0001ba74) main_ai5_sk_pane

0xeef8,	// (0x0001c113) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef04,	// (0x0001c11f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xef19,	// (0x0001c134) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef25,	// (0x0001c140) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0001d0e5) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef31,	// (0x0001c14c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3bd0,	// (0x00010deb) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf467,	// (0x0001c682) main_ai5_sk_pane_g1

0x93e5,	// (0x00016600) popup_query_code_window_g1

0xf367,	// (0x0001c582) popup_fep_vkb_icf_pane

0xf37d,	// (0x0001c598) popup_fep_vtchi_icf_pane

0xf470,	// (0x0001c68b) bg_icf_pane

0xf47c,	// (0x0001c697) list_vkb_icf_pane

0xf488,	// (0x0001c6a3) bg_icf_pane_cp01

0xf49b,	// (0x0001c6b6) vtchi_icf_list_pane

0xf4ac,	// (0x0001c6c7) list_vkb_icf_pane_t1_ParamLimits

0xf4ac,	// (0x0001c6c7) list_vkb_icf_pane_t1

0xf4c2,	// (0x0001c6dd) vtchi_icf_list_pane_t1_ParamLimits

0xf4c2,	// (0x0001c6dd) vtchi_icf_list_pane_t1

0xf351,	// (0x0001c56c) popup_fep_ituss_window_ParamLimits

0xf37d,	// (0x0001c598) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a3,	// (0x0001c5be) ituss_keypad_pane_ParamLimits

0x71cb,	// (0x000143e6) ituss_sks_pane

0xf470,	// (0x0001c68b) bg_icf_pane_ParamLimits

0xf32d,	// (0x0001c548) icf_edit_indi_pane_ParamLimits

0xf32d,	// (0x0001c548) icf_edit_indi_pane

0xf47c,	// (0x0001c697) list_vkb_icf_pane_ParamLimits

0xf488,	// (0x0001c6a3) bg_icf_pane_cp01_ParamLimits

0xf33c,	// (0x0001c557) icf_edit_indi_pane_cp01_ParamLimits

0xf33c,	// (0x0001c557) icf_edit_indi_pane_cp01

0xf4a3,	// (0x0001c6be) vtchi_query_pane

0xbc31,	// (0x00018e4c) icf_edit_indi_pane_g1_ParamLimits

0xbc31,	// (0x00018e4c) icf_edit_indi_pane_g1

0xf531,	// (0x0001c74c) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001c74c) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001d12b) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001d12b) icf_edit_indi_pane_g

0xf540,	// (0x0001c75b) icf_edit_indi_pane_t1

0xf4da,	// (0x0001c6f5) bg_input_focus_pane_cp042

0x3a6b,	// (0x00010c86) vtchi_button_pane

0xf4e3,	// (0x0001c6fe) vtchi_query_pane_t1

0xf4f1,	// (0x0001c70c) vtchi_query_pane_t2

0xf4ff,	// (0x0001c71a) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001d11a) vtchi_query_pane_t

0x551b,	// (0x00012736) bg_button_pane_cp13

0xf50d,	// (0x0001c728) vtchi_button_pane_g1

0x72f3,	// (0x0001450e) ituss_sks_pane_g1

0x72fe,	// (0x00014519) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001d121) ituss_sks_pane_g

0xf515,	// (0x0001c730) ituss_sks_pane_t1

0xf523,	// (0x0001c73e) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001d126) ituss_sks_pane_t

0xb410,	// (0x0001862b) indicator_nsta_pane_cp_g1

0xb419,	// (0x00018634) indicator_nsta_pane_cp_g2

0xb421,	// (0x0001863c) indicator_nsta_pane_cp_g3

0xb429,	// (0x00018644) indicator_nsta_pane_cp_g4

0xb431,	// (0x0001864c) indicator_nsta_pane_cp_g5

0xb439,	// (0x00018654) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0001ccc3) indicator_nsta_pane_cp_g

0xdf44,	// (0x0001b15f) cell_graphic2_pane_t2_ParamLimits

0xdf44,	// (0x0001b15f) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0001cfdc) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0001cfdc) cell_graphic2_pane_t

0xdf71,	// (0x0001b18c) cell_graphic2_control_pane_t1

0x7db5,	// (0x00014fd0) signal_pane_g3_ParamLimits

0x7db5,	// (0x00014fd0) signal_pane_g3

0x7dc7,	// (0x00014fe2) signal_pane_g4_ParamLimits

0x7dc7,	// (0x00014fe2) signal_pane_g4

0xf317,	// (0x0001c532) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf317,	// (0x0001c532) cell_ai5_widget_list_row_pane_t3

0xf43d,	// (0x0001c658) cell_ituss_key_pane_t1_ParamLimits

0xf43d,	// (0x0001c658) cell_ituss_key_pane_t1

0x9033,	// (0x0001624e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9033,	// (0x0001624e) form_field_data_wide_pane_vc_t2

0x9047,	// (0x00016262) form_field_data_wide_pane_vc_t3_ParamLimits

0x9047,	// (0x00016262) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x0001ca1f) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x0001ca1f) form_field_data_wide_pane_vc_t

0xb0c1,	// (0x000182dc) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb0c1,	// (0x000182dc) form_field_slider_wide_pane_vc_t3

0xb197,	// (0x000183b2) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb197,	// (0x000183b2) form_field_popup_wide_pane_vc_t2

0xb1ae,	// (0x000183c9) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb1ae,	// (0x000183c9) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0001ccb2) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0001ccb2) form_field_popup_wide_pane_vc_t

0x6fe8,	// (0x00014203) aid_fshwr2_btn_pane_ParamLimits

0x6ff4,	// (0x0001420f) aid_fshwr2_syb_pane_ParamLimits

0x7000,	// (0x0001421b) aid_fshwr2_txt_pane_ParamLimits

0x6824,	// (0x00013a3f) fshwr2_bg_pane_ParamLimits

0x700c,	// (0x00014227) fshwr2_func_candi_pane_ParamLimits

0x701f,	// (0x0001423a) fshwr2_hwr_syb_pane_ParamLimits

0x702d,	// (0x00014248) fshwr2_icf_pane_ParamLimits

0xb035,	// (0x00018250) list_double_graphic_pane_vc_g4_ParamLimits

0xb035,	// (0x00018250) list_double_graphic_pane_vc_g4

0x722a,	// (0x00014445) cell_ituss_key_pane_g3_ParamLimits

0x722a,	// (0x00014445) cell_ituss_key_pane_g3

0x72d2,	// (0x000144ed) cell_ituss_key_t5_ParamLimits

0x72d2,	// (0x000144ed) cell_ituss_key_t5

0xf372,	// (0x0001c58d) popup_fep_vkbss_window_ParamLimits
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
	0, // AknLayoutScalable_Avkon::Tpopup_fep_vkbss_window_ParamLimits_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
