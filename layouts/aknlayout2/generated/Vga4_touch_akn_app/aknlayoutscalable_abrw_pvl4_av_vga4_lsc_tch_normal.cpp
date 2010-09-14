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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001349b };

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
0xa7a6,	// (0x0001dc41) Screen

0xa7b2,	// (0x0001dc4d) application_window_ParamLimits

0xa7b2,	// (0x0001dc4d) application_window

0xc72c,	// (0x0001fbc7) screen_g1

0x94af,	// (0x0001c94a) area_bottom_pane_ParamLimits

0x94af,	// (0x0001c94a) area_bottom_pane

0xde24,	// (0x000212bf) area_top_pane_ParamLimits

0xde24,	// (0x000212bf) area_top_pane

0xdec2,	// (0x0002135d) main_pane_ParamLimits

0xdec2,	// (0x0002135d) main_pane

0xc736,	// (0x0001fbd1) misc_graphics

0xb648,	// (0x0001eae3) battery_pane_ParamLimits

0xb648,	// (0x0001eae3) battery_pane

0x2f9e,	// (0x00016439) bg_status_flat_pane_g8

0x2fa6,	// (0x00016441) bg_status_flat_pane_g9

0x2285,	// (0x00015720) context_pane_ParamLimits

0x2285,	// (0x00015720) context_pane

0xb7bf,	// (0x0001ec5a) navi_pane_ParamLimits

0xb7bf,	// (0x0001ec5a) navi_pane

0xb849,	// (0x0001ece4) signal_pane_ParamLimits

0xb849,	// (0x0001ece4) signal_pane

0x0008,

0xf84a,	// (0x00022ce5) bg_status_flat_pane_g

0xb8d9,	// (0x0001ed74) status_pane_g1_ParamLimits

0xb8d9,	// (0x0001ed74) status_pane_g1

0xb8ef,	// (0x0001ed8a) status_pane_g2_ParamLimits

0xb8ef,	// (0x0001ed8a) status_pane_g2

0x24be,	// (0x00015959) status_pane_g3_ParamLimits

0x24be,	// (0x00015959) status_pane_g3

0x0004,

0xf776,	// (0x00022c11) status_pane_g_ParamLimits

0xf776,	// (0x00022c11) status_pane_g

0xb8fb,	// (0x0001ed96) title_pane_ParamLimits

0xb8fb,	// (0x0001ed96) title_pane

0xb962,	// (0x0001edfd) uni_indicator_pane_ParamLimits

0xb962,	// (0x0001edfd) uni_indicator_pane

0x20df,	// (0x0001557a) bg_list_pane_ParamLimits

0x20df,	// (0x0001557a) bg_list_pane

0xb5b9,	// (0x0001ea54) find_pane

0x27a3,	// (0x00015c3e) listscroll_app_pane_ParamLimits

0x27a3,	// (0x00015c3e) listscroll_app_pane

0x2113,	// (0x000155ae) listscroll_form_pane

0x9821,	// (0x0001ccbc) listscroll_gen_pane_ParamLimits

0x9821,	// (0x0001ccbc) listscroll_gen_pane

0xeb08,	// (0x00021fa3) listscroll_set_pane

0x3b63,	// (0x00016ffe) main_idle_act_pane

0x1dd8,	// (0x00015273) main_idle_trad_pane

0x1dd8,	// (0x00015273) main_list_empty_pane

0x2107,	// (0x000155a2) main_midp_pane

0x212d,	// (0x000155c8) main_pane_g1_ParamLimits

0x212d,	// (0x000155c8) main_pane_g1

0x9835,	// (0x0001ccd0) popup_ai_message_window_ParamLimits

0x9835,	// (0x0001ccd0) popup_ai_message_window

0x98d5,	// (0x0001cd70) popup_fep_china_uni_window_ParamLimits

0x98d5,	// (0x0001cd70) popup_fep_china_uni_window

0xeb4a,	// (0x00021fe5) popup_fep_japan_candidate_window_ParamLimits

0xeb4a,	// (0x00021fe5) popup_fep_japan_candidate_window

0xeb74,	// (0x0002200f) popup_fep_japan_predictive_window_ParamLimits

0xeb74,	// (0x0002200f) popup_fep_japan_predictive_window

0x9935,	// (0x0001cdd0) popup_find_window

0x9952,	// (0x0001cded) popup_grid_graphic_window_ParamLimits

0x9952,	// (0x0001cded) popup_grid_graphic_window

0xebaa,	// (0x00022045) popup_large_graphic_colour_window

0x99fc,	// (0x0001ce97) popup_menu_window_ParamLimits

0x99fc,	// (0x0001ce97) popup_menu_window

0x9bec,	// (0x0001d087) popup_note_image_window

0x9bac,	// (0x0001d047) popup_note_wait_window_ParamLimits

0x9bac,	// (0x0001d047) popup_note_wait_window

0x9c04,	// (0x0001d09f) popup_note_window_ParamLimits

0x9c04,	// (0x0001d09f) popup_note_window

0x9cb2,	// (0x0001d14d) popup_query_code_window_ParamLimits

0x9cb2,	// (0x0001d14d) popup_query_code_window

0xebd0,	// (0x0002206b) popup_query_data_code_window_ParamLimits

0xebd0,	// (0x0002206b) popup_query_data_code_window

0x9cf2,	// (0x0001d18d) popup_query_data_window_ParamLimits

0x9cf2,	// (0x0001d18d) popup_query_data_window

0x9d86,	// (0x0001d221) popup_query_sat_info_window_ParamLimits

0x9d86,	// (0x0001d221) popup_query_sat_info_window

0x9e2f,	// (0x0001d2ca) popup_snote_single_graphic_window_ParamLimits

0x9e2f,	// (0x0001d2ca) popup_snote_single_graphic_window

0x9e2f,	// (0x0001d2ca) popup_snote_single_text_window_ParamLimits

0x9e2f,	// (0x0001d2ca) popup_snote_single_text_window

0xebf3,	// (0x0002208e) popup_sub_window_general

0xec49,	// (0x000220e4) popup_window_general_ParamLimits

0xec49,	// (0x000220e4) popup_window_general

0x2143,	// (0x000155de) power_save_pane

0x96a4,	// (0x0001cb3f) control_pane_g1_ParamLimits

0x96a4,	// (0x0001cb3f) control_pane_g1

0x96cd,	// (0x0001cb68) control_pane_g2_ParamLimits

0x96cd,	// (0x0001cb68) control_pane_g2

0x20a2,	// (0x0001553d) control_pane_g3_ParamLimits

0x20a2,	// (0x0001553d) control_pane_g3

0x0007,

0xf75e,	// (0x00022bf9) control_pane_g_ParamLimits

0xf75e,	// (0x00022bf9) control_pane_g

0x970c,	// (0x0001cba7) control_pane_t1_ParamLimits

0x970c,	// (0x0001cba7) control_pane_t1

0x9774,	// (0x0001cc0f) control_pane_t2_ParamLimits

0x9774,	// (0x0001cc0f) control_pane_t2

0x0002,

0xf76f,	// (0x00022c0a) control_pane_t_ParamLimits

0xf76f,	// (0x00022c0a) control_pane_t

0xb4eb,	// (0x0001e986) navi_navi_volume_pane_cp1

0xb4f3,	// (0x0001e98e) status_small_icon_pane

0x1fd7,	// (0x00015472) status_small_pane_g1_ParamLimits

0x1fd7,	// (0x00015472) status_small_pane_g1

0xb4fb,	// (0x0001e996) status_small_pane_g2_ParamLimits

0xb4fb,	// (0x0001e996) status_small_pane_g2

0xb507,	// (0x0001e9a2) status_small_pane_g3_ParamLimits

0xb507,	// (0x0001e9a2) status_small_pane_g3

0xb513,	// (0x0001e9ae) status_small_pane_g4_ParamLimits

0xb513,	// (0x0001e9ae) status_small_pane_g4

0xb51f,	// (0x0001e9ba) status_small_pane_g5_ParamLimits

0xb51f,	// (0x0001e9ba) status_small_pane_g5

0xb52d,	// (0x0001e9c8) status_small_pane_g6_ParamLimits

0xb52d,	// (0x0001e9c8) status_small_pane_g6

0x0007,

0xf74d,	// (0x00022be8) status_small_pane_g_ParamLimits

0xf74d,	// (0x00022be8) status_small_pane_g

0xb55c,	// (0x0001e9f7) status_small_pane_t1

0xb57e,	// (0x0001ea19) status_small_wait_pane_ParamLimits

0xb57e,	// (0x0001ea19) status_small_wait_pane

0xb2cc,	// (0x0001e767) aid_levels_signal_ParamLimits

0xb2cc,	// (0x0001e767) aid_levels_signal

0xb2e4,	// (0x0001e77f) signal_pane_g1_ParamLimits

0xb2e4,	// (0x0001e77f) signal_pane_g1

0xb2ff,	// (0x0001e79a) signal_pane_g2_ParamLimits

0xb2ff,	// (0x0001e79a) signal_pane_g2

0x0003,

0xf6de,	// (0x00022b79) signal_pane_g_ParamLimits

0xf6de,	// (0x00022b79) signal_pane_g

0x1803,	// (0x00014c9e) context_pane_g1

0xa7c2,	// (0x0001dc5d) title_pane_g1

0xa805,	// (0x0001dca0) title_pane_t1

0xc74c,	// (0x0001fbe7) title_pane_t2

0xc772,	// (0x0001fc0d) title_pane_t3

0x0002,

0xf532,	// (0x000229cd) title_pane_t

0xb98a,	// (0x0001ee25) aid_levels_battery_ParamLimits

0xb98a,	// (0x0001ee25) aid_levels_battery

0xb9a6,	// (0x0001ee41) battery_pane_g1_ParamLimits

0xb9a6,	// (0x0001ee41) battery_pane_g1

0xb9c3,	// (0x0001ee5e) battery_pane_g2_ParamLimits

0xb9c3,	// (0x0001ee5e) battery_pane_g2

0x0001,

0xf781,	// (0x00022c1c) battery_pane_g_ParamLimits

0xf781,	// (0x00022c1c) battery_pane_g

0xbbe1,	// (0x0001f07c) uni_indicator_pane_g1

0xbbf7,	// (0x0001f092) uni_indicator_pane_g2

0xbc0d,	// (0x0001f0a8) uni_indicator_pane_g3

0x0005,

0xf8f2,	// (0x00022d8d) uni_indicator_pane_g

0x1c3b,	// (0x000150d6) navi_icon_pane_ParamLimits

0x1c3b,	// (0x000150d6) navi_icon_pane

0x1b77,	// (0x00015012) navi_midp_pane

0x1c57,	// (0x000150f2) navi_navi_pane

0x1c61,	// (0x000150fc) navi_text_pane_ParamLimits

0x1c61,	// (0x000150fc) navi_text_pane

0xc72c,	// (0x0001fbc7) status_small_wait_pane_g1

0xe081,	// (0x0002151c) status_small_wait_pane_g2

0x0001,

0xf8ed,	// (0x00022d88) status_small_wait_pane_g

0xbb80,	// (0x0001f01b) navi_navi_icon_text_pane

0xbb88,	// (0x0001f023) navi_navi_pane_g1_ParamLimits

0xbb88,	// (0x0001f023) navi_navi_pane_g1

0xbb9a,	// (0x0001f035) navi_navi_pane_g2_ParamLimits

0xbb9a,	// (0x0001f035) navi_navi_pane_g2

0x0001,

0xf8bb,	// (0x00022d56) navi_navi_pane_g_ParamLimits

0xf8bb,	// (0x00022d56) navi_navi_pane_g

0x3627,	// (0x00016ac2) navi_navi_tabs_pane

0xbbac,	// (0x0001f047) navi_navi_text_pane

0xbb80,	// (0x0001f01b) navi_navi_volume_pane

0xbb6e,	// (0x0001f009) navi_text_pane_t1

0xbb62,	// (0x0001effd) navi_icon_pane_g1

0x351e,	// (0x000169b9) navi_navi_text_pane_t1

0xa120,	// (0x0001d5bb) navi_navi_volume_pane_g1

0xa128,	// (0x0001d5c3) volume_small_pane

0xbabe,	// (0x0001ef59) navi_navi_icon_text_pane_g1

0xbac6,	// (0x0001ef61) navi_navi_icon_text_pane_t1

0x1c57,	// (0x000150f2) navi_tabs_2_long_pane

0x1c57,	// (0x000150f2) navi_tabs_2_pane

0x1c57,	// (0x000150f2) navi_tabs_3_long_pane

0x1c57,	// (0x000150f2) navi_tabs_3_pane

0x1c57,	// (0x000150f2) navi_tabs_4_pane

0xa100,	// (0x0001d59b) tabs_2_active_pane_ParamLimits

0xa100,	// (0x0001d59b) tabs_2_active_pane

0xa110,	// (0x0001d5ab) tabs_2_passive_pane_ParamLimits

0xa110,	// (0x0001d5ab) tabs_2_passive_pane

0xa0ce,	// (0x0001d569) tabs_3_active_pane_ParamLimits

0xa0ce,	// (0x0001d569) tabs_3_active_pane

0xa0de,	// (0x0001d579) tabs_3_passive_pane_ParamLimits

0xa0de,	// (0x0001d579) tabs_3_passive_pane

0xa0ef,	// (0x0001d58a) tabs_3_passive_pane_cp_ParamLimits

0xa0ef,	// (0x0001d58a) tabs_3_passive_pane_cp

0xa08a,	// (0x0001d525) tabs_4_active_pane_ParamLimits

0xa08a,	// (0x0001d525) tabs_4_active_pane

0xa09b,	// (0x0001d536) tabs_4_passive_pane_ParamLimits

0xa09b,	// (0x0001d536) tabs_4_passive_pane

0xa0ac,	// (0x0001d547) tabs_4_passive_pane_cp_ParamLimits

0xa0ac,	// (0x0001d547) tabs_4_passive_pane_cp

0xa0bd,	// (0x0001d558) tabs_4_passive_pane_cp2_ParamLimits

0xa0bd,	// (0x0001d558) tabs_4_passive_pane_cp2

0xa066,	// (0x0001d501) tabs_2_long_active_pane_ParamLimits

0xa066,	// (0x0001d501) tabs_2_long_active_pane

0xa078,	// (0x0001d513) tabs_2_long_passive_pane_ParamLimits

0xa078,	// (0x0001d513) tabs_2_long_passive_pane

0xa01b,	// (0x0001d4b6) tabs_3_long_active_pane_ParamLimits

0xa01b,	// (0x0001d4b6) tabs_3_long_active_pane

0xa034,	// (0x0001d4cf) tabs_3_long_passive_pane_ParamLimits

0xa034,	// (0x0001d4cf) tabs_3_long_passive_pane

0xa04d,	// (0x0001d4e8) tabs_3_long_passive_pane_cp_ParamLimits

0xa04d,	// (0x0001d4e8) tabs_3_long_passive_pane_cp

0xedb5,	// (0x00022250) volume_small_pane_g1

0x9fca,	// (0x0001d465) volume_small_pane_g2

0x9fd3,	// (0x0001d46e) volume_small_pane_g3

0x9fdc,	// (0x0001d477) volume_small_pane_g4

0x9fe5,	// (0x0001d480) volume_small_pane_g5

0x9fee,	// (0x0001d489) volume_small_pane_g6

0x9ff7,	// (0x0001d492) volume_small_pane_g7

0xa000,	// (0x0001d49b) volume_small_pane_g8

0xa009,	// (0x0001d4a4) volume_small_pane_g9

0xa012,	// (0x0001d4ad) volume_small_pane_g10

0x0009,

0xf887,	// (0x00022d22) volume_small_pane_g

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp2_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp2

0xa891,	// (0x0001dd2c) tabs_3_active_pane_g1

0xa899,	// (0x0001dd34) tabs_3_active_pane_t1

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp2_ParamLimits

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp2

0xa891,	// (0x0001dd2c) tabs_3_passive_pane_g1

0xa899,	// (0x0001dd34) tabs_3_passive_pane_t1

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp3_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp3

0xa8ab,	// (0x0001dd46) tabs_4_active_pane_g1

0xa8b3,	// (0x0001dd4e) tabs_4_active_pane_t1

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp3_ParamLimits

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp3

0xa8ab,	// (0x0001dd46) tabs_4_1_passive_pane_g1

0xa8b3,	// (0x0001dd4e) tabs_4_1_passive_pane_t1

0x2107,	// (0x000155a2) list_highlight_pane_cp2

0xbca0,	// (0x0001f13b) list_set_pane_ParamLimits

0xbca0,	// (0x0001f13b) list_set_pane

0xbd62,	// (0x0001f1fd) main_pane_set_t1_ParamLimits

0xbd62,	// (0x0001f1fd) main_pane_set_t1

0xbd82,	// (0x0001f21d) main_pane_set_t2_ParamLimits

0xbd82,	// (0x0001f21d) main_pane_set_t2

0xbd96,	// (0x0001f231) main_pane_set_t3_ParamLimits

0xbd96,	// (0x0001f231) main_pane_set_t3

0xbdaa,	// (0x0001f245) main_pane_set_t4_ParamLimits

0xbdaa,	// (0x0001f245) main_pane_set_t4

0x0003,

0xf957,	// (0x00022df2) main_pane_set_t_ParamLimits

0xf957,	// (0x00022df2) main_pane_set_t

0xbdbe,	// (0x0001f259) setting_code_pane

0x3cb1,	// (0x0001714c) setting_slider_graphic_pane

0x3cb1,	// (0x0001714c) setting_slider_pane

0x3cb1,	// (0x0001714c) setting_text_pane

0x3cb1,	// (0x0001714c) setting_volume_pane

0xdfd1,	// (0x0002146c) volume_set_pane

0xc792,	// (0x0001fc2d) bg_set_opt_pane_cp

0xdfdb,	// (0x00021476) setting_slider_pane_t1

0xdff4,	// (0x0002148f) setting_slider_pane_t2

0xe00e,	// (0x000214a9) setting_slider_pane_t3

0x0002,

0xf539,	// (0x000229d4) setting_slider_pane_t

0xe026,	// (0x000214c1) slider_set_pane

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp2

0xc7a0,	// (0x0001fc3b) setting_slider_graphic_pane_g1

0xe03c,	// (0x000214d7) setting_slider_graphic_pane_t1

0xe04c,	// (0x000214e7) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x000229db) setting_slider_graphic_pane_t

0xe05c,	// (0x000214f7) slider_set_pane_cp

0xc736,	// (0x0001fbd1) input_focus_pane_cp1

0x3b4a,	// (0x00016fe5) list_set_text_pane

0xc72c,	// (0x0001fbc7) setting_text_pane_g1

0xc736,	// (0x0001fbd1) input_focus_pane_cp2

0xc72c,	// (0x0001fbc7) setting_code_pane_g1

0xc7a9,	// (0x0001fc44) setting_code_pane_t1

0xc7b7,	// (0x0001fc52) set_text_pane_t1_ParamLimits

0xc7b7,	// (0x0001fc52) set_text_pane_t1

0xe504,	// (0x0002199f) set_opt_bg_pane_g1

0xe50c,	// (0x000219a7) set_opt_bg_pane_g2

0x3b22,	// (0x00016fbd) set_opt_bg_pane_g3

0xe51c,	// (0x000219b7) set_opt_bg_pane_g4

0xe524,	// (0x000219bf) set_opt_bg_pane_g5

0xe52c,	// (0x000219c7) set_opt_bg_pane_g6

0x3b2c,	// (0x00016fc7) set_opt_bg_pane_g7

0x3b36,	// (0x00016fd1) set_opt_bg_pane_g8

0x3b40,	// (0x00016fdb) set_opt_bg_pane_g9

0x0008,

0xf944,	// (0x00022ddf) set_opt_bg_pane_g

0x3b15,	// (0x00016fb0) slider_set_pane_g1

0xee36,	// (0x000222d1) slider_set_pane_g2

0x0006,

0xf935,	// (0x00022dd0) slider_set_pane_g

0xedbe,	// (0x00022259) volume_set_pane_g1

0xedc8,	// (0x00022263) volume_set_pane_g2

0xedd2,	// (0x0002226d) volume_set_pane_g3

0xeddc,	// (0x00022277) volume_set_pane_g4

0xede6,	// (0x00022281) volume_set_pane_g5

0xedf0,	// (0x0002228b) volume_set_pane_g6

0xedfa,	// (0x00022295) volume_set_pane_g7

0xee04,	// (0x0002229f) volume_set_pane_g8

0xee0e,	// (0x000222a9) volume_set_pane_g9

0xee18,	// (0x000222b3) volume_set_pane_g10

0x0009,

0xf90d,	// (0x00022da8) volume_set_pane_g

0xa8c5,	// (0x0001dd60) indicator_pane_ParamLimits

0xa8c5,	// (0x0001dd60) indicator_pane

0xa8f1,	// (0x0001dd8c) main_idle_pane_g2_ParamLimits

0xa8f1,	// (0x0001dd8c) main_idle_pane_g2

0xa929,	// (0x0001ddc4) main_pane_idle_g1_ParamLimits

0xa929,	// (0x0001ddc4) main_pane_idle_g1

0xc7d1,	// (0x0001fc6c) popup_clock_digital_analogue_window_ParamLimits

0xc7d1,	// (0x0001fc6c) popup_clock_digital_analogue_window

0xa953,	// (0x0001ddee) soft_indicator_pane_ParamLimits

0xa953,	// (0x0001ddee) soft_indicator_pane

0xa96f,	// (0x0001de0a) wallpaper_pane_ParamLimits

0xa96f,	// (0x0001de0a) wallpaper_pane

0xc72c,	// (0x0001fbc7) wallpaper_pane_g1

0xa981,	// (0x0001de1c) indicator_pane_g1_ParamLimits

0xa981,	// (0x0001de1c) indicator_pane_g1

0x401b,	// (0x000174b6) navi_navi_icon_text_pane_srt_g1

0xc7ff,	// (0x0001fc9a) soft_indicator_pane_t1

0xc819,	// (0x0001fcb4) aid_ps_area_pane

0xa99a,	// (0x0001de35) aid_ps_clock_pane

0xc82a,	// (0x0001fcc5) aid_ps_indicator_pane

0xc836,	// (0x0001fcd1) indicator_ps_pane_ParamLimits

0xc836,	// (0x0001fcd1) indicator_ps_pane

0xc845,	// (0x0001fce0) power_save_pane_g1_ParamLimits

0xc845,	// (0x0001fce0) power_save_pane_g1

0xc851,	// (0x0001fcec) power_save_pane_g2_ParamLimits

0xc851,	// (0x0001fcec) power_save_pane_g2

0xde04,	// (0x0002129f) aid_navinavi_width_pane

0xc819,	// (0x0001fcb4) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x000229e0) power_save_pane_g_ParamLimits

0xf545,	// (0x000229e0) power_save_pane_g

0xc85f,	// (0x0001fcfa) power_save_pane_t1_ParamLimits

0xc85f,	// (0x0001fcfa) power_save_pane_t1

0xa99a,	// (0x0001de35) aid_ps_clock_pane_ParamLimits

0xc82a,	// (0x0001fcc5) aid_ps_indicator_pane_ParamLimits

0xc871,	// (0x0001fd0c) power_save_pane_t4_ParamLimits

0xc871,	// (0x0001fd0c) power_save_pane_t4

0x0001,

0xf54a,	// (0x000229e5) power_save_pane_t_ParamLimits

0xf54a,	// (0x000229e5) power_save_pane_t

0xc89b,	// (0x0001fd36) power_save_t3_ParamLimits

0xc89b,	// (0x0001fd36) power_save_t3

0xc886,	// (0x0001fd21) power_save_t2_ParamLimits

0xc886,	// (0x0001fd21) power_save_t2

0xc8b0,	// (0x0001fd4b) indicator_ps_pane_g1

0xa9a8,	// (0x0001de43) ai_gene_pane_ParamLimits

0xa9a8,	// (0x0001de43) ai_gene_pane

0xa9bf,	// (0x0001de5a) ai_links_pane_ParamLimits

0xa9bf,	// (0x0001de5a) ai_links_pane

0xa9d7,	// (0x0001de72) indicator_pane_cp1_ParamLimits

0xa9d7,	// (0x0001de72) indicator_pane_cp1

0xa9e6,	// (0x0001de81) main_pane_idle_g1_cp_ParamLimits

0xa9e6,	// (0x0001de81) main_pane_idle_g1_cp

0xc8b9,	// (0x0001fd54) popup_ai_links_title_window

0xa9fe,	// (0x0001de99) soft_indicator_pane_cp1_ParamLimits

0xa9fe,	// (0x0001de99) soft_indicator_pane_cp1

0x38d6,	// (0x00016d71) ai_links_pane_g1

0x38df,	// (0x00016d7a) grid_ai_links_pane

0xbbd8,	// (0x0001f073) ai_gene_pane_1

0x38c4,	// (0x00016d5f) ai_gene_pane_2

0x38cd,	// (0x00016d68) list_highlight_pane_cp4

0xbbb4,	// (0x0001f04f) cell_ai_link_pane_ParamLimits

0xbbb4,	// (0x0001f04f) cell_ai_link_pane

0x3893,	// (0x00016d2e) cell_ai_link_pane_g1

0xe081,	// (0x0002151c) cell_ai_link_pane_g2

0x0001,

0xf8e8,	// (0x00022d83) cell_ai_link_pane_g

0xc736,	// (0x0001fbd1) grid_highlight_cp2

0xc736,	// (0x0001fbd1) bg_popup_sub_pane_cp1

0xc8d0,	// (0x0001fd6b) popup_ai_links_title_window_t1

0x37df,	// (0x00016c7a) ai_gene_pane_1_g1_ParamLimits

0x37df,	// (0x00016c7a) ai_gene_pane_1_g1

0x37eb,	// (0x00016c86) ai_gene_pane_1_g2_ParamLimits

0x37eb,	// (0x00016c86) ai_gene_pane_1_g2

0x0001,

0xf8de,	// (0x00022d79) ai_gene_pane_1_g_ParamLimits

0xf8de,	// (0x00022d79) ai_gene_pane_1_g

0x37f8,	// (0x00016c93) ai_gene_pane_1_t1_ParamLimits

0x37f8,	// (0x00016c93) ai_gene_pane_1_t1

0x382c,	// (0x00016cc7) grid_ai_soft_ind_pane

0x37ca,	// (0x00016c65) ai_gene_pane_2_t1_ParamLimits

0x37ca,	// (0x00016c65) ai_gene_pane_2_t1

0xaa12,	// (0x0001dead) main_pane_empty_t1_ParamLimits

0xaa12,	// (0x0001dead) main_pane_empty_t1

0xaa2a,	// (0x0001dec5) main_pane_empty_t2_ParamLimits

0xaa2a,	// (0x0001dec5) main_pane_empty_t2

0xaa3f,	// (0x0001deda) main_pane_empty_t3_ParamLimits

0xaa3f,	// (0x0001deda) main_pane_empty_t3

0xaa51,	// (0x0001deec) main_pane_empty_t4_ParamLimits

0xaa51,	// (0x0001deec) main_pane_empty_t4

0xaa63,	// (0x0001defe) main_pane_empty_t5_ParamLimits

0xaa63,	// (0x0001defe) main_pane_empty_t5

0x0004,

0xf54f,	// (0x000229ea) main_pane_empty_t_ParamLimits

0xf54f,	// (0x000229ea) main_pane_empty_t

0xe5c2,	// (0x00021a5d) bg_popup_window_pane_ParamLimits

0xe5c2,	// (0x00021a5d) bg_popup_window_pane

0x352c,	// (0x000169c7) find_popup_pane_cp2_ParamLimits

0x352c,	// (0x000169c7) find_popup_pane_cp2

0x3538,	// (0x000169d3) heading_pane_ParamLimits

0x3538,	// (0x000169d3) heading_pane

0xc736,	// (0x0001fbd1) bg_popup_sub_pane

0xbae3,	// (0x0001ef7e) bg_popup_window_pane_g1_ParamLimits

0xbae3,	// (0x0001ef7e) bg_popup_window_pane_g1

0xbaf2,	// (0x0001ef8d) bg_popup_window_pane_g2_ParamLimits

0xbaf2,	// (0x0001ef8d) bg_popup_window_pane_g2

0xbafe,	// (0x0001ef99) bg_popup_window_pane_g3_ParamLimits

0xbafe,	// (0x0001ef99) bg_popup_window_pane_g3

0xbb0a,	// (0x0001efa5) bg_popup_window_pane_g4_ParamLimits

0xbb0a,	// (0x0001efa5) bg_popup_window_pane_g4

0xbb19,	// (0x0001efb4) bg_popup_window_pane_g5_ParamLimits

0xbb19,	// (0x0001efb4) bg_popup_window_pane_g5

0xbb29,	// (0x0001efc4) bg_popup_window_pane_g6_ParamLimits

0xbb29,	// (0x0001efc4) bg_popup_window_pane_g6

0xbb35,	// (0x0001efd0) bg_popup_window_pane_g7_ParamLimits

0xbb35,	// (0x0001efd0) bg_popup_window_pane_g7

0xbb44,	// (0x0001efdf) bg_popup_window_pane_g8_ParamLimits

0xbb44,	// (0x0001efdf) bg_popup_window_pane_g8

0xbb53,	// (0x0001efee) bg_popup_window_pane_g9_ParamLimits

0xbb53,	// (0x0001efee) bg_popup_window_pane_g9

0x3512,	// (0x000169ad) bg_popup_window_pane_g10_ParamLimits

0x3512,	// (0x000169ad) bg_popup_window_pane_g10

0x0009,

0xf8a6,	// (0x00022d41) bg_popup_window_pane_g_ParamLimits

0xf8a6,	// (0x00022d41) bg_popup_window_pane_g

0x343b,	// (0x000168d6) bg_popup_heading_pane_ParamLimits

0x343b,	// (0x000168d6) bg_popup_heading_pane

0xeebe,	// (0x00022359) tabs_4_passive_pane_cp_srt_ParamLimits

0xeebe,	// (0x00022359) tabs_4_passive_pane_cp_srt

0xeed0,	// (0x0002236b) tabs_4_passive_pane_srt_ParamLimits

0x344f,	// (0x000168ea) heading_pane_g2

0xeed0,	// (0x0002236b) tabs_4_passive_pane_srt

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp3_srt_ParamLimits

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp3_srt

0x3457,	// (0x000168f2) heading_pane_t1_ParamLimits

0x3457,	// (0x000168f2) heading_pane_t1

0x346e,	// (0x00016909) heading_pane_t2_ParamLimits

0x346e,	// (0x00016909) heading_pane_t2

0x0001,

0xf8a1,	// (0x00022d3c) heading_pane_t_ParamLimits

0xf8a1,	// (0x00022d3c) heading_pane_t

0x2f66,	// (0x00016401) bg_popup_heading_pane_g1

0x3015,	// (0x000164b0) bg_popup_heading_pane_g2

0x301f,	// (0x000164ba) bg_popup_heading_pane_g3

0x3029,	// (0x000164c4) bg_popup_heading_pane_g4

0x3033,	// (0x000164ce) bg_popup_heading_pane_g5

0x303d,	// (0x000164d8) bg_popup_heading_pane_g6

0x3045,	// (0x000164e0) bg_popup_heading_pane_g7

0x304d,	// (0x000164e8) bg_popup_heading_pane_g8

0x3057,	// (0x000164f2) bg_popup_heading_pane_g9

0x0008,

0xf85d,	// (0x00022cf8) bg_popup_heading_pane_g

0x267f,	// (0x00015b1a) bg_popup_sub_pane_g1

0x268f,	// (0x00015b2a) bg_popup_sub_pane_g2

0x2687,	// (0x00015b22) bg_popup_sub_pane_g3

0x269f,	// (0x00015b3a) bg_popup_sub_pane_g4

0x2697,	// (0x00015b32) bg_popup_sub_pane_g5

0x26a7,	// (0x00015b42) bg_popup_sub_pane_g6

0x26af,	// (0x00015b4a) bg_popup_sub_pane_g7

0x26bf,	// (0x00015b5a) bg_popup_sub_pane_g8

0x26b7,	// (0x00015b52) bg_popup_sub_pane_g9

0x0008,

0xf837,	// (0x00022cd2) bg_popup_sub_pane_g

0xc784,	// (0x0001fc1f) bg_popup_window_pane_cp5_ParamLimits

0xc784,	// (0x0001fc1f) bg_popup_window_pane_cp5

0xc8ed,	// (0x0001fd88) popup_note_window_g1_ParamLimits

0xc8ed,	// (0x0001fd88) popup_note_window_g1

0xc8f9,	// (0x0001fd94) popup_note_window_t1_ParamLimits

0xc8f9,	// (0x0001fd94) popup_note_window_t1

0xc90f,	// (0x0001fdaa) popup_note_window_t2_ParamLimits

0xc90f,	// (0x0001fdaa) popup_note_window_t2

0xc925,	// (0x0001fdc0) popup_note_window_t3_ParamLimits

0xc925,	// (0x0001fdc0) popup_note_window_t3

0xc93b,	// (0x0001fdd6) popup_note_window_t4_ParamLimits

0xc93b,	// (0x0001fdd6) popup_note_window_t4

0xc963,	// (0x0001fdfe) popup_note_window_t5_ParamLimits

0xc963,	// (0x0001fdfe) popup_note_window_t5

0x0004,

0xf55a,	// (0x000229f5) popup_note_window_t_ParamLimits

0xf55a,	// (0x000229f5) popup_note_window_t

0xc9ad,	// (0x0001fe48) bg_popup_window_pane_cp6_ParamLimits

0xc9ad,	// (0x0001fe48) bg_popup_window_pane_cp6

0x2ee2,	// (0x0001637d) popup_note_image_window_g1_ParamLimits

0x2ee2,	// (0x0001637d) popup_note_image_window_g1

0x2eee,	// (0x00016389) popup_note_image_window_g2_ParamLimits

0x2eee,	// (0x00016389) popup_note_image_window_g2

0x0001,

0xf82b,	// (0x00022cc6) popup_note_image_window_g_ParamLimits

0xf82b,	// (0x00022cc6) popup_note_image_window_g

0x2f07,	// (0x000163a2) popup_note_image_window_t1_ParamLimits

0x2f07,	// (0x000163a2) popup_note_image_window_t1

0x2f20,	// (0x000163bb) popup_note_image_window_t2_ParamLimits

0x2f20,	// (0x000163bb) popup_note_image_window_t2

0x2f39,	// (0x000163d4) popup_note_image_window_t3_ParamLimits

0x2f39,	// (0x000163d4) popup_note_image_window_t3

0x0002,

0xf830,	// (0x00022ccb) popup_note_image_window_t_ParamLimits

0xf830,	// (0x00022ccb) popup_note_image_window_t

0x2da2,	// (0x0001623d) bg_popup_window_pane_cp7_ParamLimits

0x2da2,	// (0x0001623d) bg_popup_window_pane_cp7

0x2dd2,	// (0x0001626d) popup_note_wait_window_g1_ParamLimits

0x2dd2,	// (0x0001626d) popup_note_wait_window_g1

0x2dde,	// (0x00016279) popup_note_wait_window_g2_ParamLimits

0x2dde,	// (0x00016279) popup_note_wait_window_g2

0x0002,

0xf819,	// (0x00022cb4) popup_note_wait_window_g_ParamLimits

0xf819,	// (0x00022cb4) popup_note_wait_window_g

0x2df6,	// (0x00016291) popup_note_wait_window_t1_ParamLimits

0x2df6,	// (0x00016291) popup_note_wait_window_t1

0x2e1d,	// (0x000162b8) popup_note_wait_window_t2_ParamLimits

0x2e1d,	// (0x000162b8) popup_note_wait_window_t2

0x2e3b,	// (0x000162d6) popup_note_wait_window_t3_ParamLimits

0x2e3b,	// (0x000162d6) popup_note_wait_window_t3

0x2e4e,	// (0x000162e9) popup_note_wait_window_t4_ParamLimits

0x2e4e,	// (0x000162e9) popup_note_wait_window_t4

0x0004,

0xf820,	// (0x00022cbb) popup_note_wait_window_t_ParamLimits

0xf820,	// (0x00022cbb) popup_note_wait_window_t

0x2e73,	// (0x0001630e) wait_bar_pane_ParamLimits

0x2e73,	// (0x0001630e) wait_bar_pane

0xc736,	// (0x0001fbd1) wait_anim_pane

0xc736,	// (0x0001fbd1) wait_border_pane

0xc72c,	// (0x0001fbc7) wait_anim_pane_g1

0xc72c,	// (0x0001fbc7) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00022b74) wait_anim_pane_g

0x2d46,	// (0x000161e1) wait_border_pane_g1

0x2d51,	// (0x000161ec) wait_border_pane_g2

0x2d5a,	// (0x000161f5) wait_border_pane_g3

0x0002,

0xf812,	// (0x00022cad) wait_border_pane_g

0x2bb0,	// (0x0001604b) bg_popup_window_pane_cp16_ParamLimits

0x2bb0,	// (0x0001604b) bg_popup_window_pane_cp16

0x2cb0,	// (0x0001614b) indicator_popup_pane_cp4_ParamLimits

0x2cb0,	// (0x0001614b) indicator_popup_pane_cp4

0x2cc4,	// (0x0001615f) popup_query_data_window_t1_ParamLimits

0x2cc4,	// (0x0001615f) popup_query_data_window_t1

0x2cd6,	// (0x00016171) popup_query_data_window_t2_ParamLimits

0x2cd6,	// (0x00016171) popup_query_data_window_t2

0x2cef,	// (0x0001618a) popup_query_data_window_t3_ParamLimits

0x2cef,	// (0x0001618a) popup_query_data_window_t3

0x0002,

0xf80b,	// (0x00022ca6) popup_query_data_window_t_ParamLimits

0xf80b,	// (0x00022ca6) popup_query_data_window_t

0x2d09,	// (0x000161a4) query_popup_data_pane_ParamLimits

0x2d09,	// (0x000161a4) query_popup_data_pane

0x2d1d,	// (0x000161b8) query_popup_data_pane_cp1_ParamLimits

0x2d1d,	// (0x000161b8) query_popup_data_pane_cp1

0x2bb0,	// (0x0001604b) bg_popup_window_pane_cp10_ParamLimits

0x2bb0,	// (0x0001604b) bg_popup_window_pane_cp10

0x2be2,	// (0x0001607d) indicator_popup_pane_ParamLimits

0x2be2,	// (0x0001607d) indicator_popup_pane

0x2c04,	// (0x0001609f) popup_query_code_window_t1_ParamLimits

0x2c04,	// (0x0001609f) popup_query_code_window_t1

0x2c1e,	// (0x000160b9) popup_query_code_window_t2_ParamLimits

0x2c1e,	// (0x000160b9) popup_query_code_window_t2

0x2c67,	// (0x00016102) popup_query_code_window_t3_ParamLimits

0x2c67,	// (0x00016102) popup_query_code_window_t3

0x0002,

0xf804,	// (0x00022c9f) popup_query_code_window_t_ParamLimits

0xf804,	// (0x00022c9f) popup_query_code_window_t

0x2c96,	// (0x00016131) query_popup_pane_ParamLimits

0x2c96,	// (0x00016131) query_popup_pane

0xc9ad,	// (0x0001fe48) bg_popup_window_pane_cp15_ParamLimits

0xc9ad,	// (0x0001fe48) bg_popup_window_pane_cp15

0xc9cd,	// (0x0001fe68) indicator_popup_pane_cp1_ParamLimits

0xc9cd,	// (0x0001fe68) indicator_popup_pane_cp1

0xc9e0,	// (0x0001fe7b) indicator_popup_pane_cp2_ParamLimits

0xc9e0,	// (0x0001fe7b) indicator_popup_pane_cp2

0xc9fb,	// (0x0001fe96) popup_query_data_code_window_g1_ParamLimits

0xc9fb,	// (0x0001fe96) popup_query_data_code_window_g1

0xca0e,	// (0x0001fea9) popup_query_data_code_window_t1_ParamLimits

0xca0e,	// (0x0001fea9) popup_query_data_code_window_t1

0xca20,	// (0x0001febb) popup_query_data_code_window_t2_ParamLimits

0xca20,	// (0x0001febb) popup_query_data_code_window_t2

0xca32,	// (0x0001fecd) popup_query_data_code_window_t3_ParamLimits

0xca32,	// (0x0001fecd) popup_query_data_code_window_t3

0xca48,	// (0x0001fee3) popup_query_data_code_window_t4_ParamLimits

0xca48,	// (0x0001fee3) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00022a00) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00022a00) popup_query_data_code_window_t

0xed12,	// (0x000221ad) list_single_midp_graphic_pane_g3

0xca62,	// (0x0001fefd) query_popup_data_pane_cp2_ParamLimits

0xca75,	// (0x0001ff10) query_popup_pane_cp2_ParamLimits

0xca75,	// (0x0001ff10) query_popup_pane_cp2

0xc736,	// (0x0001fbd1) bg_popup_window_pane_cp11

0x2b94,	// (0x0001602f) heading_pane_cp5

0x2b9c,	// (0x00016037) listscroll_popup_info_pane

0xc736,	// (0x0001fbd1) input_focus_pane_cp3

0xe064,	// (0x000214ff) query_popup_pane_t1

0xe072,	// (0x0002150d) list_popup_info_pane_ParamLimits

0xe072,	// (0x0002150d) list_popup_info_pane

0xe081,	// (0x0002151c) listscroll_popup_info_pane_g1

0xe089,	// (0x00021524) scroll_pane_cp7

0xe093,	// (0x0002152e) popup_info_list_pane_t1_ParamLimits

0xe093,	// (0x0002152e) popup_info_list_pane_t1

0xe0ad,	// (0x00021548) popup_info_list_pane_t2_ParamLimits

0xe0ad,	// (0x00021548) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00022a09) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00022a09) popup_info_list_pane_t

0xc736,	// (0x0001fbd1) bg_popup_window_pane_cp12

0x4035,	// (0x000174d0) find_popup_pane

0xc792,	// (0x0001fc2d) bg_popup_window_pane_cp3

0xe0c7,	// (0x00021562) heading_pane_cp3

0xe0d6,	// (0x00021571) listscroll_popup_graphic_pane

0xc736,	// (0x0001fbd1) bg_popup_window_pane_cp4

0xaac5,	// (0x0001df60) heading_pane_cp4

0xe0e6,	// (0x00021581) listscroll_popup_colour_pane

0xaacf,	// (0x0001df6a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaacf,	// (0x0001df6a) cell_large_graphic_colour_none_popup_pane

0xaae3,	// (0x0001df7e) grid_large_graphic_colour_popup_pane_ParamLimits

0xaae3,	// (0x0001df7e) grid_large_graphic_colour_popup_pane

0xab07,	// (0x0001dfa2) listscroll_popup_colour_pane_g1_ParamLimits

0xab07,	// (0x0001dfa2) listscroll_popup_colour_pane_g1

0xab1e,	// (0x0001dfb9) listscroll_popup_colour_pane_g2_ParamLimits

0xab1e,	// (0x0001dfb9) listscroll_popup_colour_pane_g2

0xab35,	// (0x0001dfd0) listscroll_popup_colour_pane_g3_ParamLimits

0xab35,	// (0x0001dfd0) listscroll_popup_colour_pane_g3

0xab45,	// (0x0001dfe0) listscroll_popup_colour_pane_g4_ParamLimits

0xab45,	// (0x0001dfe0) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00022a0e) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00022a0e) listscroll_popup_colour_pane_g

0xe0ee,	// (0x00021589) scroll_pane_cp6_ParamLimits

0xe0ee,	// (0x00021589) scroll_pane_cp6

0xab55,	// (0x0001dff0) cell_large_graphic_colour_popup_pane_ParamLimits

0xab55,	// (0x0001dff0) cell_large_graphic_colour_popup_pane

0xe100,	// (0x0002159b) cell_large_graphic_colour_none_popup_pane_t1

0xc736,	// (0x0001fbd1) grid_highlight_pane_cp5

0xe10f,	// (0x000215aa) cell_large_graphic_colour_popup_pane_g1

0xe117,	// (0x000215b2) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00022a17) cell_large_graphic_colour_popup_pane_g

0xe11f,	// (0x000215ba) cell_large_graphic_colour_popup_pane_g2_copy1

0xe128,	// (0x000215c3) grid_highlight_pane_cp4

0xe130,	// (0x000215cb) bg_popup_window_pane_cp8_ParamLimits

0xe130,	// (0x000215cb) bg_popup_window_pane_cp8

0xe14b,	// (0x000215e6) popup_snote_single_text_window_g1_ParamLimits

0xe14b,	// (0x000215e6) popup_snote_single_text_window_g1

0xe15d,	// (0x000215f8) popup_snote_single_text_window_t1_ParamLimits

0xe15d,	// (0x000215f8) popup_snote_single_text_window_t1

0xe170,	// (0x0002160b) popup_snote_single_text_window_t2_ParamLimits

0xe170,	// (0x0002160b) popup_snote_single_text_window_t2

0xe183,	// (0x0002161e) popup_snote_single_text_window_t3_ParamLimits

0xe183,	// (0x0002161e) popup_snote_single_text_window_t3

0xe1bc,	// (0x00021657) popup_snote_single_text_window_t4_ParamLimits

0xe1bc,	// (0x00021657) popup_snote_single_text_window_t4

0xe1f0,	// (0x0002168b) popup_snote_single_text_window_t5_ParamLimits

0xe1f0,	// (0x0002168b) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00022a1c) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00022a1c) popup_snote_single_text_window_t

0xe21f,	// (0x000216ba) bg_popup_window_pane_cp9_ParamLimits

0xe21f,	// (0x000216ba) bg_popup_window_pane_cp9

0xe14b,	// (0x000215e6) popup_snote_single_graphic_window_g1_ParamLimits

0xe14b,	// (0x000215e6) popup_snote_single_graphic_window_g1

0xe22d,	// (0x000216c8) popup_snote_single_graphic_window_g2_ParamLimits

0xe22d,	// (0x000216c8) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00022a27) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00022a27) popup_snote_single_graphic_window_g

0xe239,	// (0x000216d4) popup_snote_single_graphic_window_t1_ParamLimits

0xe239,	// (0x000216d4) popup_snote_single_graphic_window_t1

0xe24c,	// (0x000216e7) popup_snote_single_graphic_window_t2_ParamLimits

0xe24c,	// (0x000216e7) popup_snote_single_graphic_window_t2

0xe25f,	// (0x000216fa) popup_snote_single_graphic_window_t3_ParamLimits

0xe25f,	// (0x000216fa) popup_snote_single_graphic_window_t3

0xe298,	// (0x00021733) popup_snote_single_graphic_window_t4_ParamLimits

0xe298,	// (0x00021733) popup_snote_single_graphic_window_t4

0xe2cc,	// (0x00021767) popup_snote_single_graphic_window_t5_ParamLimits

0xe2cc,	// (0x00021767) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00022a2c) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00022a2c) popup_snote_single_graphic_window_t

0x3f73,	// (0x0001740e) grid_graphic_popup_pane_ParamLimits

0x3f73,	// (0x0001740e) grid_graphic_popup_pane

0x3fa1,	// (0x0001743c) listscroll_popup_graphic_pane_g1_ParamLimits

0x3fa1,	// (0x0001743c) listscroll_popup_graphic_pane_g1

0xbf2a,	// (0x0001f3c5) listscroll_popup_graphic_pane_g2_ParamLimits

0xbf2a,	// (0x0001f3c5) listscroll_popup_graphic_pane_g2

0x0001,

0xf981,	// (0x00022e1c) listscroll_popup_graphic_pane_g_ParamLimits

0xf981,	// (0x00022e1c) listscroll_popup_graphic_pane_g

0x3fc9,	// (0x00017464) scroll_pane_cp5

0xbee2,	// (0x0001f37d) cell_graphic_popup_pane_ParamLimits

0xbee2,	// (0x0001f37d) cell_graphic_popup_pane

0x3eec,	// (0x00017387) cell_graphic_popup_pane_g1

0x3ef4,	// (0x0001738f) cell_graphic_popup_pane_g2

0xe11f,	// (0x000215ba) cell_graphic_popup_pane_g3

0x0002,

0xf97a,	// (0x00022e15) cell_graphic_popup_pane_g

0x3efd,	// (0x00017398) cell_graphic_popup_pane_t2

0xe128,	// (0x000215c3) grid_highlight_pane_cp3

0xe30d,	// (0x000217a8) list_gen_pane_ParamLimits

0xe30d,	// (0x000217a8) list_gen_pane

0xe335,	// (0x000217d0) scroll_pane

0xbe99,	// (0x0001f334) bg_list_pane_g1_ParamLimits

0xbe99,	// (0x0001f334) bg_list_pane_g1

0x3e61,	// (0x000172fc) bg_list_pane_g2_ParamLimits

0x3e61,	// (0x000172fc) bg_list_pane_g2

0x3e76,	// (0x00017311) bg_list_pane_g3_ParamLimits

0x3e76,	// (0x00017311) bg_list_pane_g3

0x3e8a,	// (0x00017325) bg_list_pane_g4_ParamLimits

0x3e8a,	// (0x00017325) bg_list_pane_g4

0xbeb6,	// (0x0001f351) bg_list_pane_g5_ParamLimits

0xbeb6,	// (0x0001f351) bg_list_pane_g5

0x0004,

0xf96f,	// (0x00022e0a) bg_list_pane_g_ParamLimits

0xf96f,	// (0x00022e0a) bg_list_pane_g

0xbe18,	// (0x0001f2b3) list_double2_graphic_large_graphic_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double2_graphic_large_graphic_pane

0xbe18,	// (0x0001f2b3) list_double2_graphic_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double2_graphic_pane

0xbe18,	// (0x0001f2b3) list_double2_large_graphic_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double2_large_graphic_pane

0xbe18,	// (0x0001f2b3) list_double2_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double2_pane

0xbe18,	// (0x0001f2b3) list_double_graphic_heading_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_graphic_heading_pane

0xbe18,	// (0x0001f2b3) list_double_graphic_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_graphic_pane

0xbe18,	// (0x0001f2b3) list_double_heading_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_heading_pane

0xbe18,	// (0x0001f2b3) list_double_large_graphic_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_large_graphic_pane

0xbe18,	// (0x0001f2b3) list_double_number_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_number_pane

0xbe18,	// (0x0001f2b3) list_double_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_pane

0xbe18,	// (0x0001f2b3) list_double_time_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_double_time_pane

0xbe18,	// (0x0001f2b3) list_setting_number_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_setting_number_pane

0xbe18,	// (0x0001f2b3) list_setting_pane_ParamLimits

0xbe18,	// (0x0001f2b3) list_setting_pane

0xbe2c,	// (0x0001f2c7) list_single_2graphic_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_2graphic_pane

0xbe2c,	// (0x0001f2c7) list_single_graphic_heading_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_graphic_heading_pane

0xbe2c,	// (0x0001f2c7) list_single_graphic_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_graphic_pane

0xbe2c,	// (0x0001f2c7) list_single_heading_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_heading_pane

0xbe84,	// (0x0001f31f) list_single_large_graphic_pane_ParamLimits

0xbe84,	// (0x0001f31f) list_single_large_graphic_pane

0xbe2c,	// (0x0001f2c7) list_single_number_heading_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_number_heading_pane

0xbe2c,	// (0x0001f2c7) list_single_number_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_number_pane

0xbe2c,	// (0x0001f2c7) list_single_pane_ParamLimits

0xbe2c,	// (0x0001f2c7) list_single_pane

0xc736,	// (0x0001fbd1) list_highlight_pane_cp1

0x25f5,	// (0x00015a90) list_single_pane_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_pane_g1

0x2601,	// (0x00015a9c) list_single_pane_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_pane_g

0x465e,	// (0x00017af9) list_single_pane_t1_ParamLimits

0x465e,	// (0x00017af9) list_single_pane_t1

0x25f5,	// (0x00015a90) list_single_number_pane_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_number_pane_g1

0x2601,	// (0x00015a9c) list_single_number_pane_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_number_pane_g

0x260d,	// (0x00015aa8) list_single_number_pane_t1_ParamLimits

0x260d,	// (0x00015aa8) list_single_number_pane_t1

0x476f,	// (0x00017c0a) list_single_number_pane_t2_ParamLimits

0x476f,	// (0x00017c0a) list_single_number_pane_t2

0x0001,

0xf930,	// (0x00022dcb) list_single_number_pane_t_ParamLimits

0xf930,	// (0x00022dcb) list_single_number_pane_t

0x5be4,	// (0x0001907f) list_single_graphic_pane_g1_ParamLimits

0x5be4,	// (0x0001907f) list_single_graphic_pane_g1

0x25f5,	// (0x00015a90) list_single_graphic_pane_g2_ParamLimits

0x25f5,	// (0x00015a90) list_single_graphic_pane_g2

0x2601,	// (0x00015a9c) list_single_graphic_pane_g3_ParamLimits

0x2601,	// (0x00015a9c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00022a37) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00022a37) list_single_graphic_pane_g

0xab80,	// (0x0001e01b) list_single_graphic_pane_t1_ParamLimits

0xab80,	// (0x0001e01b) list_single_graphic_pane_t1

0x25f5,	// (0x00015a90) list_single_heading_pane_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_heading_pane_g1

0x2601,	// (0x00015a9c) list_single_heading_pane_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_heading_pane_g

0xab96,	// (0x0001e031) list_single_heading_pane_t1_ParamLimits

0xab96,	// (0x0001e031) list_single_heading_pane_t1

0xabac,	// (0x0001e047) list_single_heading_pane_t2_ParamLimits

0xabac,	// (0x0001e047) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00022a43) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00022a43) list_single_heading_pane_t

0x25f5,	// (0x00015a90) list_single_number_heading_pane_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_number_heading_pane_g1

0x2601,	// (0x00015a9c) list_single_number_heading_pane_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_number_heading_pane_g

0xab96,	// (0x0001e031) list_single_number_heading_pane_t1_ParamLimits

0xab96,	// (0x0001e031) list_single_number_heading_pane_t1

0x4628,	// (0x00017ac3) list_single_number_heading_pane_t2_ParamLimits

0x4628,	// (0x00017ac3) list_single_number_heading_pane_t2

0x463a,	// (0x00017ad5) list_single_number_heading_pane_t3_ParamLimits

0x463a,	// (0x00017ad5) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00022a48) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00022a48) list_single_number_heading_pane_t

0x25e9,	// (0x00015a84) list_single_graphic_heading_pane_g1_ParamLimits

0x25e9,	// (0x00015a84) list_single_graphic_heading_pane_g1

0xabbe,	// (0x0001e059) list_single_graphic_heading_pane_g4_ParamLimits

0xabbe,	// (0x0001e059) list_single_graphic_heading_pane_g4

0x2601,	// (0x00015a9c) list_single_graphic_heading_pane_g5_ParamLimits

0x2601,	// (0x00015a9c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00022a4f) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00022a4f) list_single_graphic_heading_pane_g

0xab96,	// (0x0001e031) list_single_graphic_heading_pane_t1_ParamLimits

0xab96,	// (0x0001e031) list_single_graphic_heading_pane_t1

0xabcf,	// (0x0001e06a) list_single_graphic_heading_pane_t2_ParamLimits

0xabcf,	// (0x0001e06a) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00022a56) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00022a56) list_single_graphic_heading_pane_t

0x4674,	// (0x00017b0f) list_single_large_graphic_pane_g1_ParamLimits

0x4674,	// (0x00017b0f) list_single_large_graphic_pane_g1

0x4680,	// (0x00017b1b) list_single_large_graphic_pane_g2_ParamLimits

0x4680,	// (0x00017b1b) list_single_large_graphic_pane_g2

0x468c,	// (0x00017b27) list_single_large_graphic_pane_g3_ParamLimits

0x468c,	// (0x00017b27) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00022a5b) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00022a5b) list_single_large_graphic_pane_g

0x2d51,	// (0x000161ec) wait_border_pane_g2_copy1

0xabe1,	// (0x0001e07c) list_single_large_graphic_pane_g4_cp2

0x4698,	// (0x00017b33) list_single_large_graphic_pane_t1_ParamLimits

0x4698,	// (0x00017b33) list_single_large_graphic_pane_t1

0xabe9,	// (0x0001e084) list_double_pane_g1_ParamLimits

0xabe9,	// (0x0001e084) list_double_pane_g1

0xabf5,	// (0x0001e090) list_double_pane_g2_ParamLimits

0xabf5,	// (0x0001e090) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00022a62) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00022a62) list_double_pane_g

0xac01,	// (0x0001e09c) list_double_pane_t1_ParamLimits

0xac01,	// (0x0001e09c) list_double_pane_t1

0xac17,	// (0x0001e0b2) list_double_pane_t2_ParamLimits

0xac17,	// (0x0001e0b2) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00022a67) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00022a67) list_double_pane_t

0xac29,	// (0x0001e0c4) list_double2_pane_g1_ParamLimits

0xac29,	// (0x0001e0c4) list_double2_pane_g1

0xac3a,	// (0x0001e0d5) list_double2_pane_g2_ParamLimits

0xac3a,	// (0x0001e0d5) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00022a6c) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00022a6c) list_double2_pane_g

0xac46,	// (0x0001e0e1) list_double2_pane_t1_ParamLimits

0xac46,	// (0x0001e0e1) list_double2_pane_t1

0xac5c,	// (0x0001e0f7) list_double2_pane_t2_ParamLimits

0xac5c,	// (0x0001e0f7) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00022a71) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00022a71) list_double2_pane_t

0xabe9,	// (0x0001e084) list_double_number_pane_g1_ParamLimits

0xabe9,	// (0x0001e084) list_double_number_pane_g1

0xabf5,	// (0x0001e090) list_double_number_pane_g2_ParamLimits

0xabf5,	// (0x0001e090) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00022a62) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00022a62) list_double_number_pane_g

0xac6e,	// (0x0001e109) list_double_number_pane_t1_ParamLimits

0xac6e,	// (0x0001e109) list_double_number_pane_t1

0xac80,	// (0x0001e11b) list_double_number_pane_t2_ParamLimits

0xac80,	// (0x0001e11b) list_double_number_pane_t2

0xac96,	// (0x0001e131) list_double_number_pane_t3_ParamLimits

0xac96,	// (0x0001e131) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00022a76) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00022a76) list_double_number_pane_t

0xaca8,	// (0x0001e143) list_double_graphic_pane_g1_ParamLimits

0xaca8,	// (0x0001e143) list_double_graphic_pane_g1

0xacb4,	// (0x0001e14f) list_double_graphic_pane_g2_ParamLimits

0xacb4,	// (0x0001e14f) list_double_graphic_pane_g2

0xacc3,	// (0x0001e15e) list_double_graphic_pane_g3_ParamLimits

0xacc3,	// (0x0001e15e) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00022a7d) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00022a7d) list_double_graphic_pane_g

0xacdb,	// (0x0001e176) list_double_graphic_pane_t1_ParamLimits

0xacdb,	// (0x0001e176) list_double_graphic_pane_t1

0xacf1,	// (0x0001e18c) list_double_graphic_pane_t2_ParamLimits

0xacf1,	// (0x0001e18c) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00022a86) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00022a86) list_double_graphic_pane_t

0xad03,	// (0x0001e19e) list_double2_graphic_pane_g1_ParamLimits

0xad03,	// (0x0001e19e) list_double2_graphic_pane_g1

0xad0f,	// (0x0001e1aa) list_double2_graphic_pane_g2_ParamLimits

0xad0f,	// (0x0001e1aa) list_double2_graphic_pane_g2

0xac3a,	// (0x0001e0d5) list_double2_graphic_pane_g3_ParamLimits

0xac3a,	// (0x0001e0d5) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00022a8b) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00022a8b) list_double2_graphic_pane_g

0xad1b,	// (0x0001e1b6) list_double2_graphic_pane_t1_ParamLimits

0xad1b,	// (0x0001e1b6) list_double2_graphic_pane_t1

0xad31,	// (0x0001e1cc) list_double2_graphic_pane_t2_ParamLimits

0xad31,	// (0x0001e1cc) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00022a92) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00022a92) list_double2_graphic_pane_t

0xad43,	// (0x0001e1de) list_double_large_graphic_pane_g1_ParamLimits

0xad43,	// (0x0001e1de) list_double_large_graphic_pane_g1

0xad62,	// (0x0001e1fd) list_double_large_graphic_pane_g2_ParamLimits

0xad62,	// (0x0001e1fd) list_double_large_graphic_pane_g2

0xabf5,	// (0x0001e090) list_double_large_graphic_pane_g3_ParamLimits

0xabf5,	// (0x0001e090) list_double_large_graphic_pane_g3

0xad73,	// (0x0001e20e) list_double_large_graphic_pane_g4_ParamLimits

0xad73,	// (0x0001e20e) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00022a97) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00022a97) list_double_large_graphic_pane_g

0xad86,	// (0x0001e221) list_double_large_graphic_pane_t1_ParamLimits

0xad86,	// (0x0001e221) list_double_large_graphic_pane_t1

0xad9f,	// (0x0001e23a) list_double_large_graphic_pane_t2_ParamLimits

0xad9f,	// (0x0001e23a) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00022aa2) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00022aa2) list_double_large_graphic_pane_t

0xadb1,	// (0x0001e24c) list_double2_large_graphic_pane_g1_ParamLimits

0xadb1,	// (0x0001e24c) list_double2_large_graphic_pane_g1

0xac29,	// (0x0001e0c4) list_double2_large_graphic_pane_g2_ParamLimits

0xac29,	// (0x0001e0c4) list_double2_large_graphic_pane_g2

0xac3a,	// (0x0001e0d5) list_double2_large_graphic_pane_g3_ParamLimits

0xac3a,	// (0x0001e0d5) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00022aa7) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00022aa7) list_double2_large_graphic_pane_g

0xadbd,	// (0x0001e258) list_double2_large_graphic_pane_t1_ParamLimits

0xadbd,	// (0x0001e258) list_double2_large_graphic_pane_t1

0xadd3,	// (0x0001e26e) list_double2_large_graphic_pane_t2_ParamLimits

0xadd3,	// (0x0001e26e) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00022aae) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00022aae) list_double2_large_graphic_pane_t

0xade5,	// (0x0001e280) list_double_heading_pane_g1_ParamLimits

0xade5,	// (0x0001e280) list_double_heading_pane_g1

0xe37e,	// (0x00021819) list_double_heading_pane_g2_ParamLimits

0xe37e,	// (0x00021819) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00022ab3) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00022ab3) list_double_heading_pane_g

0xadf6,	// (0x0001e291) list_double_heading_pane_t1_ParamLimits

0xadf6,	// (0x0001e291) list_double_heading_pane_t1

0xae0c,	// (0x0001e2a7) list_double_heading_pane_t2_ParamLimits

0xae0c,	// (0x0001e2a7) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00022ab8) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00022ab8) list_double_heading_pane_t

0xad03,	// (0x0001e19e) list_double_graphic_heading_pane_g1_ParamLimits

0xad03,	// (0x0001e19e) list_double_graphic_heading_pane_g1

0xade5,	// (0x0001e280) list_double_graphic_heading_pane_g2_ParamLimits

0xade5,	// (0x0001e280) list_double_graphic_heading_pane_g2

0xe37e,	// (0x00021819) list_double_graphic_heading_pane_g3_ParamLimits

0xe37e,	// (0x00021819) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00022abd) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00022abd) list_double_graphic_heading_pane_g

0xae1e,	// (0x0001e2b9) list_double_graphic_heading_pane_t1_ParamLimits

0xae1e,	// (0x0001e2b9) list_double_graphic_heading_pane_t1

0xae34,	// (0x0001e2cf) list_double_graphic_heading_pane_t2_ParamLimits

0xae34,	// (0x0001e2cf) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00022ac4) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00022ac4) list_double_graphic_heading_pane_t

0xad62,	// (0x0001e1fd) list_double_time_pane_g1_ParamLimits

0xad62,	// (0x0001e1fd) list_double_time_pane_g1

0xabf5,	// (0x0001e090) list_double_time_pane_g2_ParamLimits

0xabf5,	// (0x0001e090) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00022ac9) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00022ac9) list_double_time_pane_g

0xae46,	// (0x0001e2e1) list_double_time_pane_t1_ParamLimits

0xae46,	// (0x0001e2e1) list_double_time_pane_t1

0xae5c,	// (0x0001e2f7) list_double_time_pane_t2_ParamLimits

0xae5c,	// (0x0001e2f7) list_double_time_pane_t2

0xae6e,	// (0x0001e309) list_double_time_pane_t3_ParamLimits

0xae6e,	// (0x0001e309) list_double_time_pane_t3

0xae80,	// (0x0001e31b) list_double_time_pane_t4_ParamLimits

0xae80,	// (0x0001e31b) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00022ace) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00022ace) list_double_time_pane_t

0xad0f,	// (0x0001e1aa) list_setting_pane_g1_ParamLimits

0xad0f,	// (0x0001e1aa) list_setting_pane_g1

0xac3a,	// (0x0001e0d5) list_setting_pane_g2_ParamLimits

0xac3a,	// (0x0001e0d5) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00022ad7) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00022ad7) list_setting_pane_g

0xae92,	// (0x0001e32d) list_setting_pane_t1_ParamLimits

0xae92,	// (0x0001e32d) list_setting_pane_t1

0xaea9,	// (0x0001e344) list_setting_pane_t2_ParamLimits

0xaea9,	// (0x0001e344) list_setting_pane_t2

0x0002,

0xf641,	// (0x00022adc) list_setting_pane_t_ParamLimits

0xf641,	// (0x00022adc) list_setting_pane_t

0xaee8,	// (0x0001e383) set_value_pane_cp_ParamLimits

0xaee8,	// (0x0001e383) set_value_pane_cp

0xad0f,	// (0x0001e1aa) list_setting_number_pane_g1_ParamLimits

0xad0f,	// (0x0001e1aa) list_setting_number_pane_g1

0xac3a,	// (0x0001e0d5) list_setting_number_pane_g2_ParamLimits

0xac3a,	// (0x0001e0d5) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00022ad7) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00022ad7) list_setting_number_pane_g

0xaef6,	// (0x0001e391) list_setting_number_pane_t1_ParamLimits

0xaef6,	// (0x0001e391) list_setting_number_pane_t1

0xaf0a,	// (0x0001e3a5) list_setting_number_pane_t2_ParamLimits

0xaf0a,	// (0x0001e3a5) list_setting_number_pane_t2

0xaf21,	// (0x0001e3bc) list_setting_number_pane_t3_ParamLimits

0xaf21,	// (0x0001e3bc) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00022ae3) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00022ae3) list_setting_number_pane_t

0xaee8,	// (0x0001e383) set_value_pane_ParamLimits

0xaee8,	// (0x0001e383) set_value_pane

0xe38a,	// (0x00021825) bg_set_opt_pane_ParamLimits

0xe38a,	// (0x00021825) bg_set_opt_pane

0xe3ab,	// (0x00021846) set_value_pane_t1

0xe3b9,	// (0x00021854) slider_set_pane_cp3

0xe3c2,	// (0x0002185d) volume_small_pane_cp

0xe3cb,	// (0x00021866) list_form_gen_pane

0xe3d4,	// (0x0002186f) scroll_pane_cp8

0xaf64,	// (0x0001e3ff) form_field_data_pane_ParamLimits

0xaf64,	// (0x0001e3ff) form_field_data_pane

0xaf7f,	// (0x0001e41a) form_field_data_wide_pane_ParamLimits

0xaf7f,	// (0x0001e41a) form_field_data_wide_pane

0xe3f5,	// (0x00021890) form_field_popup_pane_ParamLimits

0xe3f5,	// (0x00021890) form_field_popup_pane

0xafa3,	// (0x0001e43e) form_field_popup_wide_pane_ParamLimits

0xafa3,	// (0x0001e43e) form_field_popup_wide_pane

0xe417,	// (0x000218b2) form_field_slider_pane_ParamLimits

0xe417,	// (0x000218b2) form_field_slider_pane

0xe42a,	// (0x000218c5) form_field_slider_wide_pane_ParamLimits

0xe42a,	// (0x000218c5) form_field_slider_wide_pane

0xe43d,	// (0x000218d8) data_form_pane

0xafce,	// (0x0001e469) form_field_data_pane_t1

0xe449,	// (0x000218e4) input_focus_pane

0xe457,	// (0x000218f2) data_form_wide_pane

0xe48f,	// (0x0002192a) form_field_data_wide_pane_t1

0xe13d,	// (0x000215d8) input_focus_pane_cp6

0xafe8,	// (0x0001e483) form_field_popup_pane_t1

0xe449,	// (0x000218e4) input_focus_pane_cp7

0xe4ae,	// (0x00021949) list_form_pane

0xe4c2,	// (0x0002195d) form_field_popup_wide_pane_t1

0xe449,	// (0x000218e4) input_focus_pane_cp8

0xe4d4,	// (0x0002196f) list_form_wide_pane

0xb00a,	// (0x0001e4a5) form_field_slider_pane_t1_ParamLimits

0xb00a,	// (0x0001e4a5) form_field_slider_pane_t1

0xb022,	// (0x0001e4bd) form_field_slider_pane_t2_ParamLimits

0xb022,	// (0x0001e4bd) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00022af3) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00022af3) form_field_slider_pane_t

0xc784,	// (0x0001fc1f) input_focus_pane_cp9_ParamLimits

0xc784,	// (0x0001fc1f) input_focus_pane_cp9

0xb037,	// (0x0001e4d2) slider_cont_pane_ParamLimits

0xb037,	// (0x0001e4d2) slider_cont_pane

0xe4e0,	// (0x0002197b) form_field_slider_wide_pane_t1_ParamLimits

0xe4e0,	// (0x0002197b) form_field_slider_wide_pane_t1

0xe4f2,	// (0x0002198d) form_field_slider_wide_pane_t2_ParamLimits

0xe4f2,	// (0x0002198d) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00022af8) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00022af8) form_field_slider_wide_pane_t

0xc784,	// (0x0001fc1f) input_focus_pane_cp10_ParamLimits

0xc784,	// (0x0001fc1f) input_focus_pane_cp10

0xb04b,	// (0x0001e4e6) slider_cont_pane_cp1_ParamLimits

0xb04b,	// (0x0001e4e6) slider_cont_pane_cp1

0xb05f,	// (0x0001e4fa) slider_form_pane_cp

0xe504,	// (0x0002199f) input_focus_pane_g1

0xe50c,	// (0x000219a7) input_focus_pane_g2

0xe514,	// (0x000219af) input_focus_pane_g3

0xe51c,	// (0x000219b7) input_focus_pane_g4

0xe524,	// (0x000219bf) input_focus_pane_g5

0xe52c,	// (0x000219c7) input_focus_pane_g6

0xe534,	// (0x000219cf) input_focus_pane_g7

0xe53c,	// (0x000219d7) input_focus_pane_g8

0xe544,	// (0x000219df) input_focus_pane_g9

0xc72c,	// (0x0001fbc7) input_focus_pane_g10

0x0009,

0xf662,	// (0x00022afd) input_focus_pane_g

0x2d5a,	// (0x000161f5) wait_border_pane_g3_copy1

0xb067,	// (0x0001e502) data_form_pane_t1

0xc72c,	// (0x0001fbc7) wait_anim_pane_g1_copy1

0xbded,	// (0x0001f288) data_form_wide_pane_t1

0xe54c,	// (0x000219e7) list_form_graphic_pane_cp_ParamLimits

0xe54c,	// (0x000219e7) list_form_graphic_pane_cp

0x3cd9,	// (0x00017174) slider_form_pane_g1

0x3ce2,	// (0x0001717d) slider_form_pane_g2

0x0006,

0xf960,	// (0x00022dfb) slider_form_pane_g

0xe54c,	// (0x000219e7) list_form_graphic_pane_ParamLimits

0xe54c,	// (0x000219e7) list_form_graphic_pane

0xe55e,	// (0x000219f9) list_form_graphic_pane_g1

0xe566,	// (0x00021a01) list_form_graphic_pane_t1_ParamLimits

0xe566,	// (0x00021a01) list_form_graphic_pane_t1

0xc792,	// (0x0001fc2d) list_highlight_pane_cp5_ParamLimits

0xc792,	// (0x0001fc2d) list_highlight_pane_cp5

0xb083,	// (0x0001e51e) find_pane_g1

0xe57b,	// (0x00021a16) input_find_pane

0xb08c,	// (0x0001e527) input_find_pane_g1_ParamLimits

0xb08c,	// (0x0001e527) input_find_pane_g1

0xb098,	// (0x0001e533) input_find_pane_t1_ParamLimits

0xb098,	// (0x0001e533) input_find_pane_t1

0xb0ad,	// (0x0001e548) input_find_pane_t2_ParamLimits

0xb0ad,	// (0x0001e548) input_find_pane_t2

0x0001,

0xf677,	// (0x00022b12) input_find_pane_t_ParamLimits

0xf677,	// (0x00022b12) input_find_pane_t

0xe584,	// (0x00021a1f) input_focus_pane_cp5_ParamLimits

0xe584,	// (0x00021a1f) input_focus_pane_cp5

0xe597,	// (0x00021a32) bg_popup_window_pane_cp2_ParamLimits

0xe597,	// (0x00021a32) bg_popup_window_pane_cp2

0xe5a4,	// (0x00021a3f) listscroll_menu_pane_ParamLimits

0xe5a4,	// (0x00021a3f) listscroll_menu_pane

0xb0ce,	// (0x0001e569) popup_submenu_window_ParamLimits

0xb0ce,	// (0x0001e569) popup_submenu_window

0xe5b0,	// (0x00021a4b) find_popup_pane_g1

0xe5b8,	// (0x00021a53) input_popup_find_pane_cp

0xe5c2,	// (0x00021a5d) input_focus_pane_cp4_ParamLimits

0xe5c2,	// (0x00021a5d) input_focus_pane_cp4

0xe5d0,	// (0x00021a6b) input_popup_find_pane_t1_ParamLimits

0xe5d0,	// (0x00021a6b) input_popup_find_pane_t1

0xc736,	// (0x0001fbd1) bg_popup_sub_pane_cp

0xe5fe,	// (0x00021a99) listscroll_popup_sub_pane

0xe606,	// (0x00021aa1) list_submenu_pane_ParamLimits

0xe606,	// (0x00021aa1) list_submenu_pane

0xe617,	// (0x00021ab2) scroll_pane_cp4

0xe61f,	// (0x00021aba) list_single_popup_submenu_pane_ParamLimits

0xe61f,	// (0x00021aba) list_single_popup_submenu_pane

0xe634,	// (0x00021acf) list_single_popup_submenu_pane_g1

0xe63c,	// (0x00021ad7) list_single_popup_submenu_pane_t1_ParamLimits

0xe63c,	// (0x00021ad7) list_single_popup_submenu_pane_t1

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp1_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp1

0xb10c,	// (0x0001e5a7) tabs_2_active_pane_g1

0xb114,	// (0x0001e5af) tabs_2_active_pane_t1

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp1_ParamLimits

0xc784,	// (0x0001fc1f) bg_passive_tab_pane_cp1

0xb10c,	// (0x0001e5a7) tabs_2_passive_pane_g1

0xb114,	// (0x0001e5af) tabs_2_passive_pane_t1

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp4

0xb126,	// (0x0001e5c1) tabs_2_long_active_pane_t1

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp4

0xed1a,	// (0x000221b5) list_single_midp_graphic_pane_g4_ParamLimits

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp5

0xb139,	// (0x0001e5d4) tabs_3_long_active_pane_t1

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp5

0xed1a,	// (0x000221b5) list_single_midp_graphic_pane_g4

0xc792,	// (0x0001fc2d) bg_popup_window_pane_cp13_ParamLimits

0xc792,	// (0x0001fc2d) bg_popup_window_pane_cp13

0x12b4,	// (0x0001474f) listscroll_popup_fast_pane_ParamLimits

0x12b4,	// (0x0001474f) listscroll_popup_fast_pane

0x12c3,	// (0x0001475e) grid_popup_fast_pane_ParamLimits

0x12c3,	// (0x0001475e) grid_popup_fast_pane

0x12d5,	// (0x00014770) scroll_pane_cp9_ParamLimits

0x12d5,	// (0x00014770) scroll_pane_cp9

0x5c5e,	// (0x000190f9) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5c5e,	// (0x000190f9) list_single_graphic_hl_pane_t1_cp2

0x12f9,	// (0x00014794) input_focus_pane_cp20_ParamLimits

0x12f9,	// (0x00014794) input_focus_pane_cp20

0x1307,	// (0x000147a2) query_popup_data_pane_t1_ParamLimits

0x1307,	// (0x000147a2) query_popup_data_pane_t1

0x131a,	// (0x000147b5) query_popup_data_pane_t2_ParamLimits

0x131a,	// (0x000147b5) query_popup_data_pane_t2

0x1360,	// (0x000147fb) query_popup_data_pane_t3_ParamLimits

0x1360,	// (0x000147fb) query_popup_data_pane_t3

0x13a1,	// (0x0001483c) query_popup_data_pane_t4_ParamLimits

0x13a1,	// (0x0001483c) query_popup_data_pane_t4

0x13dd,	// (0x00014878) query_popup_data_pane_t5_ParamLimits

0x13dd,	// (0x00014878) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00022b17) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00022b17) query_popup_data_pane_t

0xe504,	// (0x0002199f) bg_set_opt_pane_g1

0xe50c,	// (0x000219a7) bg_set_opt_pane_g2

0xe514,	// (0x000219af) bg_set_opt_pane_g3

0xe51c,	// (0x000219b7) bg_set_opt_pane_g4

0xe524,	// (0x000219bf) bg_set_opt_pane_g5

0xe52c,	// (0x000219c7) bg_set_opt_pane_g6

0xe534,	// (0x000219cf) bg_set_opt_pane_g7

0xe53c,	// (0x000219d7) bg_set_opt_pane_g8

0xe544,	// (0x000219df) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00022b22) bg_set_opt_pane_g

0xe8f7,	// (0x00021d92) control_top_pane_stacon_ParamLimits

0xe8f7,	// (0x00021d92) control_top_pane_stacon

0xe94a,	// (0x00021de5) signal_pane_stacon_ParamLimits

0xe94a,	// (0x00021de5) signal_pane_stacon

0x1a56,	// (0x00014ef1) stacon_top_pane_g1_ParamLimits

0x1a56,	// (0x00014ef1) stacon_top_pane_g1

0xe96f,	// (0x00021e0a) title_pane_stacon_ParamLimits

0xe96f,	// (0x00021e0a) title_pane_stacon

0xe999,	// (0x00021e34) uni_indicator_pane_stacon_ParamLimits

0xe999,	// (0x00021e34) uni_indicator_pane_stacon

0xe9ae,	// (0x00021e49) battery_pane_stacon_ParamLimits

0xe9ae,	// (0x00021e49) battery_pane_stacon

0xe9f2,	// (0x00021e8d) control_bottom_pane_stacon_ParamLimits

0xe9f2,	// (0x00021e8d) control_bottom_pane_stacon

0xea15,	// (0x00021eb0) navi_pane_stacon_ParamLimits

0xea15,	// (0x00021eb0) navi_pane_stacon

0x1a78,	// (0x00014f13) stacon_bottom_pane_g1_ParamLimits

0x1a78,	// (0x00014f13) stacon_bottom_pane_g1

0xe651,	// (0x00021aec) aid_levels_signal_lsc_ParamLimits

0xe651,	// (0x00021aec) aid_levels_signal_lsc

0xe668,	// (0x00021b03) signal_pane_stacon_g1_ParamLimits

0xe668,	// (0x00021b03) signal_pane_stacon_g1

0xe67c,	// (0x00021b17) signal_pane_stacon_g2_ParamLimits

0xe67c,	// (0x00021b17) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00022b35) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00022b35) signal_pane_stacon_g

0xe6b1,	// (0x00021b4c) title_pane_stacon_t1_ParamLimits

0xe6b1,	// (0x00021b4c) title_pane_stacon_t1

0x1421,	// (0x000148bc) uni_indicator_pane_stacon_g1

0x142b,	// (0x000148c6) uni_indicator_pane_stacon_g2

0x1435,	// (0x000148d0) uni_indicator_pane_stacon_g3

0x143f,	// (0x000148da) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00022b41) uni_indicator_pane_stacon_g

0xe6d6,	// (0x00021b71) control_top_pane_stacon_g1

0xe6de,	// (0x00021b79) control_top_pane_stacon_t1_ParamLimits

0xe6de,	// (0x00021b79) control_top_pane_stacon_t1

0xe715,	// (0x00021bb0) aid_levels_battery_lsc_ParamLimits

0xe715,	// (0x00021bb0) aid_levels_battery_lsc

0xe72d,	// (0x00021bc8) battery_pane_stacon_g1_ParamLimits

0xe72d,	// (0x00021bc8) battery_pane_stacon_g1

0xe740,	// (0x00021bdb) battery_pane_stacon_g2_ParamLimits

0xe740,	// (0x00021bdb) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00022b4a) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00022b4a) battery_pane_stacon_g

0xe77e,	// (0x00021c19) navi_icon_pane_stacon

0xe792,	// (0x00021c2d) navi_navi_pane_stacon

0xe77e,	// (0x00021c19) navi_text_pane_stacon

0xe6d6,	// (0x00021b71) control_bottom_pane_stacon_g1

0xe7a8,	// (0x00021c43) control_bottom_pane_stacon_t1_ParamLimits

0xe7a8,	// (0x00021c43) control_bottom_pane_stacon_t1

0xb14b,	// (0x0001e5e6) grid_app_pane_ParamLimits

0xb14b,	// (0x0001e5e6) grid_app_pane

0xb183,	// (0x0001e61e) scroll_pane_cp15_ParamLimits

0xb183,	// (0x0001e61e) scroll_pane_cp15

0xb198,	// (0x0001e633) cell_app_pane_ParamLimits

0xb198,	// (0x0001e633) cell_app_pane

0xb1e5,	// (0x0001e680) cell_app_pane_g1_ParamLimits

0xb1e5,	// (0x0001e680) cell_app_pane_g1

0x14e8,	// (0x00014983) cell_app_pane_g2_ParamLimits

0x14e8,	// (0x00014983) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00022b4f) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00022b4f) cell_app_pane_g

0xb209,	// (0x0001e6a4) cell_app_pane_t1_ParamLimits

0xb209,	// (0x0001e6a4) cell_app_pane_t1

0x150b,	// (0x000149a6) grid_highlight_pane_ParamLimits

0x150b,	// (0x000149a6) grid_highlight_pane

0xe504,	// (0x0002199f) cell_highlight_pane_g1

0xe50c,	// (0x000219a7) cell_highlight_pane_g2

0xe514,	// (0x000219af) cell_highlight_pane_g3

0xe51c,	// (0x000219b7) cell_highlight_pane_g4

0xe524,	// (0x000219bf) cell_highlight_pane_g5

0xe52c,	// (0x000219c7) cell_highlight_pane_g6

0xe534,	// (0x000219cf) cell_highlight_pane_g7

0xe53c,	// (0x000219d7) cell_highlight_pane_g8

0xe544,	// (0x000219df) cell_highlight_pane_g9

0xc72c,	// (0x0001fbc7) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00022afd) cell_highlight_pane_g

0x151c,	// (0x000149b7) bg_scroll_pane

0xe7e9,	// (0x00021c84) scroll_handle_pane

0x1563,	// (0x000149fe) scroll_bg_pane_g1

0x1578,	// (0x00014a13) scroll_bg_pane_g2

0x1590,	// (0x00014a2b) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00022b54) scroll_bg_pane_g

0x15a5,	// (0x00014a40) scroll_handle_focus_pane_ParamLimits

0x15a5,	// (0x00014a40) scroll_handle_focus_pane

0x1563,	// (0x000149fe) scroll_handle_pane_g1

0x15b2,	// (0x00014a4d) scroll_handle_pane_g2

0x1590,	// (0x00014a2b) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00022b5b) scroll_handle_pane_g

0xe5c2,	// (0x00021a5d) bg_popup_sub_pane_cp21_ParamLimits

0xe5c2,	// (0x00021a5d) bg_popup_sub_pane_cp21

0x15c6,	// (0x00014a61) popup_fep_japan_predictive_window_t1_ParamLimits

0x15c6,	// (0x00014a61) popup_fep_japan_predictive_window_t1

0x15dd,	// (0x00014a78) popup_fep_japan_predictive_window_t2_ParamLimits

0x15dd,	// (0x00014a78) popup_fep_japan_predictive_window_t2

0x1610,	// (0x00014aab) popup_fep_japan_predictive_window_t3_ParamLimits

0x1610,	// (0x00014aab) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00022b62) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00022b62) popup_fep_japan_predictive_window_t

0xc736,	// (0x0001fbd1) bg_popup_sub_pane_cp23

0x1647,	// (0x00014ae2) listscroll_japin_cand_pane

0x164f,	// (0x00014aea) popup_fep_japan_candidate_window_t1

0x165d,	// (0x00014af8) candidate_pane_ParamLimits

0x165d,	// (0x00014af8) candidate_pane

0x166f,	// (0x00014b0a) scroll_pane_cp30

0x1679,	// (0x00014b14) list_single_popup_jap_candidate_pane_ParamLimits

0x1679,	// (0x00014b14) list_single_popup_jap_candidate_pane

0xc736,	// (0x0001fbd1) list_highlight_pane_cp30

0x168d,	// (0x00014b28) list_single_popup_jap_candidate_pane_t1

0xb220,	// (0x0001e6bb) level_1_signal

0xb232,	// (0x0001e6cd) level_2_signal

0xb245,	// (0x0001e6e0) level_3_signal

0xb258,	// (0x0001e6f3) level_4_signal

0xb26b,	// (0x0001e706) level_5_signal

0xb27e,	// (0x0001e719) level_6_signal

0xb291,	// (0x0001e72c) level_7_signal

0xb220,	// (0x0001e6bb) level_1_battery

0xb232,	// (0x0001e6cd) level_2_battery

0xb245,	// (0x0001e6e0) level_3_battery

0xb258,	// (0x0001e6f3) level_4_battery

0xb26b,	// (0x0001e706) level_5_battery

0xb27e,	// (0x0001e719) level_6_battery

0xb291,	// (0x0001e72c) level_7_battery

0x170f,	// (0x00014baa) list_menu_pane_ParamLimits

0x170f,	// (0x00014baa) list_menu_pane

0x1725,	// (0x00014bc0) scroll_pane_cp25_ParamLimits

0x1725,	// (0x00014bc0) scroll_pane_cp25

0x173e,	// (0x00014bd9) list_double2_graphic_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double2_graphic_pane_cp2

0x173e,	// (0x00014bd9) list_double2_large_graphic_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double2_large_graphic_pane_cp2

0x173e,	// (0x00014bd9) list_double2_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double2_pane_cp2

0x173e,	// (0x00014bd9) list_double_graphic_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double_graphic_pane_cp2

0x173e,	// (0x00014bd9) list_double_large_graphic_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double_large_graphic_pane_cp2

0x173e,	// (0x00014bd9) list_double_number_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double_number_pane_cp2

0x173e,	// (0x00014bd9) list_double_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_2graphic_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_2graphic_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_graphic_heading_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_graphic_heading_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_graphic_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_graphic_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_heading_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_heading_pane_cp2

0x1781,	// (0x00014c1c) list_single_large_graphic_pane_cp2_ParamLimits

0x1781,	// (0x00014c1c) list_single_large_graphic_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_number_heading_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_number_heading_pane_cp2

0xb2a4,	// (0x0001e73f) list_single_number_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_number_pane_cp2

0xb2b8,	// (0x0001e753) list_single_pane_cp2_ParamLimits

0xb2b8,	// (0x0001e753) list_single_pane_cp2

0x180c,	// (0x00014ca7) bg_popup_sub_pane_cp22

0xe89b,	// (0x00021d36) popup_side_volume_key_window_g1

0xe8d1,	// (0x00021d6c) popup_side_volume_key_window_t1

0xe8ef,	// (0x00021d8a) volume_small_pane_cp1

0xc784,	// (0x0001fc1f) bg_popup_sub_pane_cp24_ParamLimits

0xc784,	// (0x0001fc1f) bg_popup_sub_pane_cp24

0x1822,	// (0x00014cbd) fep_china_uni_candidate_pane_ParamLimits

0x1822,	// (0x00014cbd) fep_china_uni_candidate_pane

0x1836,	// (0x00014cd1) fep_china_uni_entry_pane

0x1846,	// (0x00014ce1) popup_fep_china_uni_window_g1

0x1862,	// (0x00014cfd) fep_china_uni_entry_pane_g1

0x186c,	// (0x00014d07) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00022b93) fep_china_uni_entry_pane_g

0x1876,	// (0x00014d11) fep_entry_item_pane

0x1880,	// (0x00014d1b) fep_candidate_item_pane

0x1888,	// (0x00014d23) fep_china_uni_candidate_pane_g1

0x1892,	// (0x00014d2d) fep_china_uni_candidate_pane_g2

0x189a,	// (0x00014d35) fep_china_uni_candidate_pane_g3

0x18a2,	// (0x00014d3d) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00022b98) fep_china_uni_candidate_pane_g

0xc72c,	// (0x0001fbc7) fep_entry_item_pane_g1

0x18ac,	// (0x00014d47) fep_entry_item_pane_t1_ParamLimits

0x18ac,	// (0x00014d47) fep_entry_item_pane_t1

0x18c2,	// (0x00014d5d) fep_candidate_item_pane_t1_ParamLimits

0x18c2,	// (0x00014d5d) fep_candidate_item_pane_t1

0x18d7,	// (0x00014d72) fep_candidate_item_pane_t2_ParamLimits

0x18d7,	// (0x00014d72) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00022ba1) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00022ba1) fep_candidate_item_pane_t

0xc792,	// (0x0001fc2d) list_highlight_pane_cp31_ParamLimits

0xc792,	// (0x0001fc2d) list_highlight_pane_cp31

0x18e9,	// (0x00014d84) level_1_signal_lsc

0x18f2,	// (0x00014d8d) level_2_signal_lsc

0x18fb,	// (0x00014d96) level_3_signal_lsc

0x1904,	// (0x00014d9f) level_4_signal_lsc

0x190d,	// (0x00014da8) level_5_signal_lsc

0x1916,	// (0x00014db1) level_6_signal_lsc

0x191f,	// (0x00014dba) level_7_signal_lsc

0x191f,	// (0x00014dba) level_1_battery_lsc

0x1928,	// (0x00014dc3) level_2_battery_lsc

0x1931,	// (0x00014dcc) level_3_battery_lsc

0x193a,	// (0x00014dd5) level_4_battery_lsc

0x1943,	// (0x00014dde) level_5_battery_lsc

0x194c,	// (0x00014de7) level_6_battery_lsc

0x18e9,	// (0x00014d84) level_7_battery_lsc

0x1955,	// (0x00014df0) scroll_handle_focus_pane_g1

0x195e,	// (0x00014df9) scroll_handle_focus_pane_g2

0x1967,	// (0x00014e02) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00022ba6) scroll_handle_focus_pane_g

0xb347,	// (0x0001e7e2) list_single_2graphic_pane_g1_ParamLimits

0xb347,	// (0x0001e7e2) list_single_2graphic_pane_g1

0xabbe,	// (0x0001e059) list_single_2graphic_pane_g2_ParamLimits

0xabbe,	// (0x0001e059) list_single_2graphic_pane_g2

0x2601,	// (0x00015a9c) list_single_2graphic_pane_g3_ParamLimits

0x2601,	// (0x00015a9c) list_single_2graphic_pane_g3

0xb353,	// (0x0001e7ee) list_single_2graphic_pane_g4_ParamLimits

0xb353,	// (0x0001e7ee) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00022bad) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00022bad) list_single_2graphic_pane_g

0xb364,	// (0x0001e7ff) list_single_2graphic_pane_t1_ParamLimits

0xb364,	// (0x0001e7ff) list_single_2graphic_pane_t1

0xb392,	// (0x0001e82d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb392,	// (0x0001e82d) list_double2_graphic_large_graphic_pane_g1

0xac29,	// (0x0001e0c4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xac29,	// (0x0001e0c4) list_double2_graphic_large_graphic_pane_g2

0xac3a,	// (0x0001e0d5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xac3a,	// (0x0001e0d5) list_double2_graphic_large_graphic_pane_g3

0xb3a4,	// (0x0001e83f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb3a4,	// (0x0001e83f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00022bb6) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00022bb6) list_double2_graphic_large_graphic_pane_g

0xb3b0,	// (0x0001e84b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb3b0,	// (0x0001e84b) list_double2_graphic_large_graphic_pane_t1

0xb3c6,	// (0x0001e861) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb3c6,	// (0x0001e861) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00022bbf) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00022bbf) list_double2_graphic_large_graphic_pane_t

0x1b3b,	// (0x00014fd6) popup_fast_swap_window_ParamLimits

0x1b3b,	// (0x00014fd6) popup_fast_swap_window

0x1b59,	// (0x00014ff4) popup_side_volume_key_window

0x1b77,	// (0x00015012) stacon_top_pane

0x1b81,	// (0x0001501c) status_pane_ParamLimits

0x1b81,	// (0x0001501c) status_pane

0xb420,	// (0x0001e8bb) status_small_pane

0xc736,	// (0x0001fbd1) control_pane

0xc736,	// (0x0001fbd1) stacon_bottom_pane

0xe3d4,	// (0x0002186f) scroll_pane_cp121

0xe3cb,	// (0x00021866) set_content_pane

0xb3d8,	// (0x0001e873) bg_active_tab_pane_g1_cp1

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp1

0xb3e1,	// (0x0001e87c) bg_active_tab_pane_g3_cp1

0xb3d8,	// (0x0001e873) bg_passive_tab_pane_g1_cp1

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp1

0xb3e1,	// (0x0001e87c) bg_passive_tab_pane_g3_cp1

0xb3ea,	// (0x0001e885) bg_active_tab_pane_g1_cp2

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp2

0xb3f3,	// (0x0001e88e) bg_active_tab_pane_g3_cp2

0xb3ea,	// (0x0001e885) bg_passive_tab_pane_g1_cp2

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp2

0xb3f3,	// (0x0001e88e) bg_passive_tab_pane_g3_cp2

0xb3fc,	// (0x0001e897) bg_active_tab_pane_g1_cp3

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp3

0xb405,	// (0x0001e8a0) bg_active_tab_pane_g3_cp3

0xb3fc,	// (0x0001e897) bg_passive_tab_pane_g1_cp3

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp3

0xb405,	// (0x0001e8a0) bg_passive_tab_pane_g3_cp3

0xb40e,	// (0x0001e8a9) bg_active_tab_pane_g1_cp4

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp4

0xb417,	// (0x0001e8b2) bg_active_tab_pane_g3_cp4

0xb40e,	// (0x0001e8a9) bg_passive_tab_pane_g1_cp4

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp4

0xb417,	// (0x0001e8b2) bg_passive_tab_pane_g3_cp4

0x1a94,	// (0x00014f2f) bg_active_tab_pane_g1_cp5

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp5

0x1a9d,	// (0x00014f38) bg_active_tab_pane_g3_cp5

0x1a94,	// (0x00014f2f) bg_passive_tab_pane_g1_cp5

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp5

0x1a9d,	// (0x00014f38) bg_passive_tab_pane_g3_cp5

0x43d7,	// (0x00017872) list_set_graphic_pane_ParamLimits

0x43d7,	// (0x00017872) list_set_graphic_pane

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp4

0x1abc,	// (0x00014f57) list_set_graphic_pane_g1_ParamLimits

0x1abc,	// (0x00014f57) list_set_graphic_pane_g1

0x1ac8,	// (0x00014f63) list_set_graphic_pane_g2_ParamLimits

0x1ac8,	// (0x00014f63) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00022bc4) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00022bc4) list_set_graphic_pane_g

0x0009,

0xfab3,	// (0x00022f4e) volume_small_pane_cp_g

0x1aec,	// (0x00014f87) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1aec,	// (0x00014f87) list_double2_large_graphic_pane_g1_cp2

0x1afa,	// (0x00014f95) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1afa,	// (0x00014f95) list_double2_large_graphic_pane_g2_cp2

0x1b0b,	// (0x00014fa6) list_double2_large_graphic_pane_g3_cp2

0x1b13,	// (0x00014fae) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1b13,	// (0x00014fae) list_double2_large_graphic_pane_t1_cp2

0x1b29,	// (0x00014fc4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1b29,	// (0x00014fc4) list_double2_large_graphic_pane_t2_cp2

0x383e,	// (0x00016cd9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x383e,	// (0x00016cd9) list_double_large_graphic_pane_g1_cp2

0x3851,	// (0x00016cec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3851,	// (0x00016cec) list_double_large_graphic_pane_g2_cp2

0x1caa,	// (0x00015145) list_double_large_graphic_pane_g3_cp2

0x3862,	// (0x00016cfd) list_double_large_graphic_pane_g4_cp

0x386a,	// (0x00016d05) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x386a,	// (0x00016d05) list_double_large_graphic_pane_t1_cp2

0x3881,	// (0x00016d1c) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3881,	// (0x00016d1c) list_double_large_graphic_pane_t2_cp2

0x1b9a,	// (0x00015035) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1b9a,	// (0x00015035) list_double2_graphic_pane_g1_cp2

0x1ba8,	// (0x00015043) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1ba8,	// (0x00015043) list_double2_graphic_pane_g2_cp2

0x1bb9,	// (0x00015054) list_double2_graphic_pane_g3_cp2

0x1bc3,	// (0x0001505e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1bc3,	// (0x0001505e) list_double2_graphic_pane_t1_cp2

0x1bd9,	// (0x00015074) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1bd9,	// (0x00015074) list_double2_graphic_pane_t2_cp2

0x1beb,	// (0x00015086) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1beb,	// (0x00015086) list_single_number_heading_pane_g1_cp2

0x1bf7,	// (0x00015092) list_single_number_heading_pane_g2_cp2

0x1bff,	// (0x0001509a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1bff,	// (0x0001509a) list_single_number_heading_pane_t1_cp2

0x1c15,	// (0x000150b0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1c15,	// (0x000150b0) list_single_number_heading_pane_t2_cp2

0x1c29,	// (0x000150c4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1c29,	// (0x000150c4) list_single_number_heading_pane_t3_cp2

0x1beb,	// (0x00015086) list_single_heading_pane_g1_cp2_ParamLimits

0x1beb,	// (0x00015086) list_single_heading_pane_g1_cp2

0x1bf7,	// (0x00015092) list_single_heading_pane_g2_cp2

0x1bff,	// (0x0001509a) list_single_heading_pane_t1_cp2_ParamLimits

0x1bff,	// (0x0001509a) list_single_heading_pane_t1_cp2

0x3638,	// (0x00016ad3) list_single_heading_pane_t2_cp2_ParamLimits

0x3638,	// (0x00016ad3) list_single_heading_pane_t2_cp2

0x3580,	// (0x00016a1b) list_double_graphic_pane_g1_cp2_ParamLimits

0x3580,	// (0x00016a1b) list_double_graphic_pane_g1_cp2

0x358c,	// (0x00016a27) list_double_graphic_pane_g2_cp2_ParamLimits

0x358c,	// (0x00016a27) list_double_graphic_pane_g2_cp2

0x359b,	// (0x00016a36) list_double_graphic_pane_g3_cp2

0x35a3,	// (0x00016a3e) list_double_graphic_pane_t1_cp2_ParamLimits

0x35a3,	// (0x00016a3e) list_double_graphic_pane_t1_cp2

0x35b9,	// (0x00016a54) list_double_graphic_pane_t2_cp2_ParamLimits

0x35b9,	// (0x00016a54) list_double_graphic_pane_t2_cp2

0x1c9e,	// (0x00015139) list_double_number_pane_g1_cp2_ParamLimits

0x1c9e,	// (0x00015139) list_double_number_pane_g1_cp2

0x1caa,	// (0x00015145) list_double_number_pane_g2_cp2

0x3544,	// (0x000169df) list_double_number_pane_t1_cp2_ParamLimits

0x3544,	// (0x000169df) list_double_number_pane_t1_cp2

0x3558,	// (0x000169f3) list_double_number_pane_t2_cp2_ParamLimits

0x3558,	// (0x000169f3) list_double_number_pane_t2_cp2

0x356e,	// (0x00016a09) list_double_number_pane_t3_cp2_ParamLimits

0x356e,	// (0x00016a09) list_double_number_pane_t3_cp2

0x342d,	// (0x000168c8) list_single_graphic_pane_g1_cp2_ParamLimits

0x342d,	// (0x000168c8) list_single_graphic_pane_g1_cp2

0x1d0f,	// (0x000151aa) list_single_graphic_pane_g2_cp2_ParamLimits

0x1d0f,	// (0x000151aa) list_single_graphic_pane_g2_cp2

0x1d1b,	// (0x000151b6) list_single_graphic_pane_g3_cp2

0x3403,	// (0x0001689e) list_single_graphic_pane_t1_cp2_ParamLimits

0x3403,	// (0x0001689e) list_single_graphic_pane_t1_cp2

0x1d0f,	// (0x000151aa) list_single_number_pane_g1_cp2_ParamLimits

0x1d0f,	// (0x000151aa) list_single_number_pane_g1_cp2

0x1d1b,	// (0x000151b6) list_single_number_pane_g2_cp2

0x3403,	// (0x0001689e) list_single_number_pane_t1_cp2_ParamLimits

0x3403,	// (0x0001689e) list_single_number_pane_t1_cp2

0x3419,	// (0x000168b4) list_single_number_pane_t2_cp2_ParamLimits

0x3419,	// (0x000168b4) list_single_number_pane_t2_cp2

0x1afa,	// (0x00014f95) list_double2_pane_g1_cp2_ParamLimits

0x1afa,	// (0x00014f95) list_double2_pane_g1_cp2

0x1b0b,	// (0x00014fa6) list_double2_pane_g2_cp2

0x1c76,	// (0x00015111) list_double2_pane_t1_cp2_ParamLimits

0x1c76,	// (0x00015111) list_double2_pane_t1_cp2

0x1c8c,	// (0x00015127) list_double2_pane_t2_cp2_ParamLimits

0x1c8c,	// (0x00015127) list_double2_pane_t2_cp2

0x1c9e,	// (0x00015139) list_double_pane_g1_cp2_ParamLimits

0x1c9e,	// (0x00015139) list_double_pane_g1_cp2

0x1caa,	// (0x00015145) list_double_pane_g2_cp2

0x1cb2,	// (0x0001514d) list_double_pane_t1_cp2_ParamLimits

0x1cb2,	// (0x0001514d) list_double_pane_t1_cp2

0x1cc8,	// (0x00015163) list_double_pane_t2_cp2_ParamLimits

0x1cc8,	// (0x00015163) list_double_pane_t2_cp2

0x1cff,	// (0x0001519a) list_single_pane_cp2_g3

0x1d0f,	// (0x000151aa) list_single_pane_g1_cp2_ParamLimits

0x1d0f,	// (0x000151aa) list_single_pane_g1_cp2

0x1d1b,	// (0x000151b6) list_single_pane_g2_cp2

0x1d23,	// (0x000151be) list_single_pane_t1_cp2_ParamLimits

0x1d23,	// (0x000151be) list_single_pane_t1_cp2

0x1d3b,	// (0x000151d6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1d3b,	// (0x000151d6) list_single_large_graphic_pane_g1_cp2

0x1d49,	// (0x000151e4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1d49,	// (0x000151e4) list_single_large_graphic_pane_g2_cp2

0x1d55,	// (0x000151f0) list_single_large_graphic_pane_g3_cp2

0x1d5d,	// (0x000151f8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1d5d,	// (0x000151f8) list_single_large_graphic_pane_g4_cp1

0x1d77,	// (0x00015212) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1d77,	// (0x00015212) list_single_large_graphic_pane_t1_cp2

0x33cd,	// (0x00016868) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x33cd,	// (0x00016868) list_single_graphic_heading_pane_g1_cp2

0x339a,	// (0x00016835) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x339a,	// (0x00016835) list_single_graphic_heading_pane_g4_cp2

0x1d1b,	// (0x000151b6) list_single_graphic_heading_pane_g5_cp2

0x33d9,	// (0x00016874) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x33d9,	// (0x00016874) list_single_graphic_heading_pane_t1_cp2

0x33ef,	// (0x0001688a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x33ef,	// (0x0001688a) list_single_graphic_heading_pane_t2_cp2

0x338e,	// (0x00016829) list_single_2graphic_pane_g1_cp2_ParamLimits

0x338e,	// (0x00016829) list_single_2graphic_pane_g1_cp2

0x339a,	// (0x00016835) list_single_2graphic_pane_g2_cp2_ParamLimits

0x339a,	// (0x00016835) list_single_2graphic_pane_g2_cp2

0x1d1b,	// (0x000151b6) list_single_2graphic_pane_g3_cp2

0x33ab,	// (0x00016846) list_single_2graphic_pane_g4_cp2_ParamLimits

0x33ab,	// (0x00016846) list_single_2graphic_pane_g4_cp2

0x33b7,	// (0x00016852) list_single_2graphic_pane_t1_cp2_ParamLimits

0x33b7,	// (0x00016852) list_single_2graphic_pane_t1_cp2

0xc72c,	// (0x0001fbc7) list_highlight_pane_g10_cp1

0x2f66,	// (0x00016401) list_highlight_pane_g1_cp1

0x2f6e,	// (0x00016409) list_highlight_pane_g2_cp1

0x2f76,	// (0x00016411) list_highlight_pane_g3_cp1

0x2f7e,	// (0x00016419) list_highlight_pane_g4_cp1

0x2f86,	// (0x00016421) list_highlight_pane_g5_cp1

0x2f8e,	// (0x00016429) list_highlight_pane_g6_cp1

0x2f96,	// (0x00016431) list_highlight_pane_g7_cp1

0x2f9e,	// (0x00016439) list_highlight_pane_g8_cp1

0x2fa6,	// (0x00016441) list_highlight_pane_g9_cp1

0xba84,	// (0x0001ef1f) form_field_slider_pane_t3

0xba92,	// (0x0001ef2d) form_field_slider_pane_t4

0x2ea2,	// (0x0001633d) slider_form_pane_ParamLimits

0x2ea2,	// (0x0001633d) slider_form_pane

0xc736,	// (0x0001fbd1) control_abbreviations

0xc736,	// (0x0001fbd1) control_conventions

0xc736,	// (0x0001fbd1) control_definitions

0xc736,	// (0x0001fbd1) format_table_attribute

0x368e,	// (0x00016b29) bg_popup_preview_window_pane_g9

0xc736,	// (0x0001fbd1) format_table_data2

0xc736,	// (0x0001fbd1) format_table_data3

0xc736,	// (0x0001fbd1) format_table_data_example

0x0008,

0xc736,	// (0x0001fbd1) intro_purpose

0xf8c0,	// (0x00022d5b) bg_popup_preview_window_pane_g

0xc736,	// (0x0001fbd1) texts_category

0xc736,	// (0x0001fbd1) texts_graphics

0x1d8d,	// (0x00015228) text_digital

0x1d9c,	// (0x00015237) text_primary

0x1dab,	// (0x00015246) text_primary_small

0x1dba,	// (0x00015255) text_secondary

0x1dc9,	// (0x00015264) text_title

0x3ec0,	// (0x0001735b) bg_passive_tab_pane_g1_cp3_srt

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp3_srt

0x3ec9,	// (0x00017364) bg_passive_tab_pane_g3_cp3_srt

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp3_srt_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp3_srt

0x3ed2,	// (0x0001736d) tabs_4_active_pane_srt_g1

0xbecc,	// (0x0001f367) tabs_4_active_pane_srt_t1_ParamLimits

0xbecc,	// (0x0001f367) tabs_4_active_pane_srt_t1

0x3ec0,	// (0x0001735b) bg_active_tab_pane_g1_cp3_copy1

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp3_copy1

0x3ec9,	// (0x00017364) bg_active_tab_pane_g3_cp3_copy1

0xc792,	// (0x0001fc2d) tabs_2_long_active_pane_srt_ParamLimits

0xc792,	// (0x0001fc2d) tabs_2_long_active_pane_srt

0xc792,	// (0x0001fc2d) tabs_2_long_passive_pane_srt_ParamLimits

0xc792,	// (0x0001fc2d) tabs_2_long_passive_pane_srt

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp4_srt

0x3af0,	// (0x00016f8b) bg_passive_tab_pane_g1_cp4_srt

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp4_srt

0x3af9,	// (0x00016f94) bg_passive_tab_pane_g3_cp4_srt

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp4_srt_ParamLimits

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp4_srt

0xbc64,	// (0x0001f0ff) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbc64,	// (0x0001f0ff) tabs_2_long_active_pane_srt_t1

0x3af0,	// (0x00016f8b) bg_active_tab_pane_g1_cp4_srt

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp4_srt

0x3af9,	// (0x00016f94) bg_active_tab_pane_g3_cp4_srt

0xc784,	// (0x0001fc1f) tabs_3_long_active_pane_srt_ParamLimits

0xc784,	// (0x0001fc1f) tabs_3_long_active_pane_srt

0xc784,	// (0x0001fc1f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc784,	// (0x0001fc1f) tabs_3_long_passive_pane_cp_srt

0xc784,	// (0x0001fc1f) tabs_3_long_passive_pane_srt_ParamLimits

0xc784,	// (0x0001fc1f) tabs_3_long_passive_pane_srt

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp5_srt

0x1a94,	// (0x00014f2f) bg_passive_tab_pane_g1_cp5_srt

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp5_srt

0x1a9d,	// (0x00014f38) bg_passive_tab_pane_g3_cp5_srt

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp5_srt_ParamLimits

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp5_srt

0xbc4e,	// (0x0001f0e9) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbc4e,	// (0x0001f0e9) tabs_3_long_active_pane_srt_t1

0x1a94,	// (0x00014f2f) bg_active_tab_pane_g1_cp5_srt

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp5_srt

0x1a9d,	// (0x00014f38) bg_active_tab_pane_g3_cp5_srt

0x3ad0,	// (0x00016f6b) navi_text_pane_srt_t1

0x3ac8,	// (0x00016f63) navi_icon_pane_srt_g1

0x1fa1,	// (0x0001543c) midp_editing_number_pane_srt

0x1dd8,	// (0x00015273) midp_ticker_pane_srt

0x1fa9,	// (0x00015444) midp_ticker_pane_srt_g1

0x1fb1,	// (0x0001544c) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00022be3) midp_ticker_pane_srt_g

0x1fb9,	// (0x00015454) midp_ticker_pane_srt_t1

0x3ab9,	// (0x00016f54) midp_editing_number_pane_t1_copy1

0xb42b,	// (0x0001e8c6) listscroll_midp_pane

0xb42b,	// (0x0001e8c6) midp_form_pane

0x1e4f,	// (0x000152ea) midp_info_popup_window_ParamLimits

0x1e4f,	// (0x000152ea) midp_info_popup_window

0xe5c2,	// (0x00021a5d) bg_popup_sub_pane_cp50_ParamLimits

0xe5c2,	// (0x00021a5d) bg_popup_sub_pane_cp50

0x2b88,	// (0x00016023) listscroll_midp_info_pane_ParamLimits

0x2b88,	// (0x00016023) listscroll_midp_info_pane

0x2b68,	// (0x00016003) listscroll_form_midp_pane_ParamLimits

0x2b68,	// (0x00016003) listscroll_form_midp_pane

0x2b74,	// (0x0001600f) scroll_bar_cp050

0x2b68,	// (0x00016003) list_midp_pane

0x4c97,	// (0x00018132) signal_pane_g2_cp

0x2a82,	// (0x00015f1d) listscroll_midp_info_pane_t1_ParamLimits

0x2a82,	// (0x00015f1d) listscroll_midp_info_pane_t1

0x2a9a,	// (0x00015f35) listscroll_midp_info_pane_t2_ParamLimits

0x2a9a,	// (0x00015f35) listscroll_midp_info_pane_t2

0x2ad8,	// (0x00015f73) listscroll_midp_info_pane_t3_ParamLimits

0x2ad8,	// (0x00015f73) listscroll_midp_info_pane_t3

0x2b12,	// (0x00015fad) listscroll_midp_info_pane_t4_ParamLimits

0x2b12,	// (0x00015fad) listscroll_midp_info_pane_t4

0x0003,

0xf7fb,	// (0x00022c96) listscroll_midp_info_pane_t_ParamLimits

0xf7fb,	// (0x00022c96) listscroll_midp_info_pane_t

0xe617,	// (0x00021ab2) scroll_pane_cp21

0x2a1c,	// (0x00015eb7) form_midp_field_choice_group_pane

0x2a25,	// (0x00015ec0) form_midp_field_text_pane

0x2a68,	// (0x00015f03) form_midp_field_time_pane

0x2a70,	// (0x00015f0b) form_midp_gauge_slider_pane

0x2a79,	// (0x00015f14) form_midp_gauge_wait_pane

0xc736,	// (0x0001fbd1) form_midp_image_pane

0xba67,	// (0x0001ef02) list_single_midp_pane_ParamLimits

0xba67,	// (0x0001ef02) list_single_midp_pane

0xba3f,	// (0x0001eeda) form_midp_field_text_pane_t1

0x27a3,	// (0x00015c3e) input_focus_pane_cp050

0x29eb,	// (0x00015e86) list_midp_form_text_pane

0x298f,	// (0x00015e2a) form_midp_field_choice_group_pane_t1

0x299d,	// (0x00015e38) input_focus_pane_cp051

0x29b1,	// (0x00015e4c) list_midp_choice_pane

0xc736,	// (0x0001fbd1) status_idle_pane

0x2973,	// (0x00015e0e) form_midp_field_time_pane_t1

0xc72c,	// (0x0001fbc7) wait_anim_pane_g2_copy1

0x2981,	// (0x00015e1c) form_midp_field_time_pane_t2

0x0001,

0x1eff,	// (0x0001539a) aid_navinavi_width_2_pane

0xf7f6,	// (0x00022c91) form_midp_field_time_pane_t

0xc736,	// (0x0001fbd1) input_focus_pane_cp052

0xc736,	// (0x0001fbd1) bg_input_focus_pane_cp040

0x2933,	// (0x00015dce) form_midp_gauge_slider_pane_t1

0x2941,	// (0x00015ddc) form_midp_gauge_slider_pane_t2

0xba23,	// (0x0001eebe) form_midp_gauge_slider_pane_t3

0xba31,	// (0x0001eecc) form_midp_gauge_slider_pane_t4

0x0003,

0xf7ed,	// (0x00022c88) form_midp_gauge_slider_pane_t

0x296b,	// (0x00015e06) form_midp_slider_pane

0xc792,	// (0x0001fc2d) bg_input_focus_pane_cp041_ParamLimits

0xc792,	// (0x0001fc2d) bg_input_focus_pane_cp041

0x2900,	// (0x00015d9b) form_midp_gauge_wait_pane_t1_ParamLimits

0x2900,	// (0x00015d9b) form_midp_gauge_wait_pane_t1

0x2912,	// (0x00015dad) form_midp_gauge_wait_pane_t2_ParamLimits

0x2912,	// (0x00015dad) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e8,	// (0x00022c83) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e8,	// (0x00022c83) form_midp_gauge_wait_pane_t

0x2924,	// (0x00015dbf) form_midp_wait_pane_ParamLimits

0x2924,	// (0x00015dbf) form_midp_wait_pane

0x28c8,	// (0x00015d63) form_midp_image_pane_g1

0x28d1,	// (0x00015d6c) form_midp_image_pane_t1

0x28e0,	// (0x00015d7b) form_midp_image_pane_t2

0x28ef,	// (0x00015d8a) form_midp_image_pane_t3

0x0002,

0xf7e1,	// (0x00022c7c) form_midp_image_pane_t

0x28b0,	// (0x00015d4b) list_single_midp_pane_g1

0x28b9,	// (0x00015d54) list_single_midp_pane_t1

0xba0c,	// (0x0001eea7) list_midp_form_item_pane_ParamLimits

0xba0c,	// (0x0001eea7) list_midp_form_item_pane

0x1ea7,	// (0x00015342) list_midp_form_item_pane_t1

0x1eb6,	// (0x00015351) midp_ticker_pane_g1

0x1ec2,	// (0x0001535d) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00022bc9) midp_ticker_pane_g

0xb4cf,	// (0x0001e96a) midp_ticker_pane_t1

0xbe09,	// (0x0001f2a4) midp_editing_number_pane_t1

0x3d39,	// (0x000171d4) midp_editing_number_pane

0x3d48,	// (0x000171e3) midp_ticker_pane

0x3a81,	// (0x00016f1c) ai_message_heading_pane

0xc736,	// (0x0001fbd1) bg_popup_window_pane_cp14

0x3a89,	// (0x00016f24) listscroll_ai_message_pane

0x3a07,	// (0x00016ea2) ai_message_heading_pane_g1_ParamLimits

0x3a07,	// (0x00016ea2) ai_message_heading_pane_g1

0x3a13,	// (0x00016eae) ai_message_heading_pane_g2_ParamLimits

0x3a13,	// (0x00016eae) ai_message_heading_pane_g2

0x3a21,	// (0x00016ebc) ai_message_heading_pane_g3_ParamLimits

0x3a21,	// (0x00016ebc) ai_message_heading_pane_g3

0x3a2d,	// (0x00016ec8) ai_message_heading_pane_g4_ParamLimits

0x3a2d,	// (0x00016ec8) ai_message_heading_pane_g4

0x0003,

0xf922,	// (0x00022dbd) ai_message_heading_pane_g_ParamLimits

0xf922,	// (0x00022dbd) ai_message_heading_pane_g

0x3a39,	// (0x00016ed4) ai_message_heading_pane_t1_ParamLimits

0x3a39,	// (0x00016ed4) ai_message_heading_pane_t1

0x3a53,	// (0x00016eee) ai_message_heading_pane_t2_ParamLimits

0x3a53,	// (0x00016eee) ai_message_heading_pane_t2

0x0001,

0xf92b,	// (0x00022dc6) ai_message_heading_pane_t_ParamLimits

0xf92b,	// (0x00022dc6) ai_message_heading_pane_t

0x3a67,	// (0x00016f02) bg_popup_heading_pane_cp1_ParamLimits

0x3a67,	// (0x00016f02) bg_popup_heading_pane_cp1

0x39f5,	// (0x00016e90) list_ai_message_pane_ParamLimits

0x39f5,	// (0x00016e90) list_ai_message_pane

0xe617,	// (0x00021ab2) scroll_pane_cp10

0x3991,	// (0x00016e2c) list_ai_message_pane_g1

0x3999,	// (0x00016e34) list_ai_message_pane_g2

0x0001,

0xf8ff,	// (0x00022d9a) list_ai_message_pane_g

0x39a1,	// (0x00016e3c) list_ai_message_pane_t1_ParamLimits

0x39a1,	// (0x00016e3c) list_ai_message_pane_t1

0x39b6,	// (0x00016e51) list_ai_message_pane_t2_ParamLimits

0x39b6,	// (0x00016e51) list_ai_message_pane_t2

0x39cb,	// (0x00016e66) list_ai_message_pane_t3_ParamLimits

0x39cb,	// (0x00016e66) list_ai_message_pane_t3

0x39e0,	// (0x00016e7b) list_ai_message_pane_t4_ParamLimits

0x39e0,	// (0x00016e7b) list_ai_message_pane_t4

0x0003,

0xf904,	// (0x00022d9f) list_ai_message_pane_t_ParamLimits

0xf904,	// (0x00022d9f) list_ai_message_pane_t

0xbc34,	// (0x0001f0cf) cell_ai_soft_ind_pane_ParamLimits

0xbc34,	// (0x0001f0cf) cell_ai_soft_ind_pane

0x1ee0,	// (0x0001537b) cell_ai_soft_ind_pane_g1_ParamLimits

0x1ee0,	// (0x0001537b) cell_ai_soft_ind_pane_g1

0xc736,	// (0x0001fbd1) grid_highlight_cp1

0x1eed,	// (0x00015388) text_secondary_cp56_ParamLimits

0x1eed,	// (0x00015388) text_secondary_cp56

0x394f,	// (0x00016dea) example_general_pane_ParamLimits

0x394f,	// (0x00016dea) example_general_pane

0x395b,	// (0x00016df6) example_parent_pane_g1_ParamLimits

0x395b,	// (0x00016df6) example_parent_pane_g1

0x3967,	// (0x00016e02) example_parent_pane_t1_ParamLimits

0x3967,	// (0x00016e02) example_parent_pane_t1

0x9c3c,	// (0x0001d0d7) popup_preview_text_window_ParamLimits

0x9c3c,	// (0x0001d0d7) popup_preview_text_window

0x1d07,	// (0x000151a2) list_single_pane_cp2_g4

0xc9ad,	// (0x0001fe48) bg_popup_preview_window_pane_ParamLimits

0xc9ad,	// (0x0001fe48) bg_popup_preview_window_pane

0x3698,	// (0x00016b33) popup_preview_text_window_t1_ParamLimits

0x3698,	// (0x00016b33) popup_preview_text_window_t1

0x36b6,	// (0x00016b51) popup_preview_text_window_t2_ParamLimits

0x36b6,	// (0x00016b51) popup_preview_text_window_t2

0x36ff,	// (0x00016b9a) popup_preview_text_window_t3_ParamLimits

0x36ff,	// (0x00016b9a) popup_preview_text_window_t3

0x3744,	// (0x00016bdf) popup_preview_text_window_t4_ParamLimits

0x3744,	// (0x00016bdf) popup_preview_text_window_t4

0x0004,

0xf8d3,	// (0x00022d6e) popup_preview_text_window_t_ParamLimits

0xf8d3,	// (0x00022d6e) popup_preview_text_window_t

0x37c2,	// (0x00016c5d) scroll_pane_cp11

0x267f,	// (0x00015b1a) bg_popup_preview_window_pane_g1

0x364c,	// (0x00016ae7) bg_popup_preview_window_pane_g2

0x3656,	// (0x00016af1) bg_popup_preview_window_pane_g3

0x3660,	// (0x00016afb) bg_popup_preview_window_pane_g4

0x366a,	// (0x00016b05) bg_popup_preview_window_pane_g5

0x3674,	// (0x00016b0f) bg_popup_preview_window_pane_g6

0x367c,	// (0x00016b17) bg_popup_preview_window_pane_g7

0x3684,	// (0x00016b1f) bg_popup_preview_window_pane_g8

0xde10,	// (0x000212ab) aid_popup_width_pane

0x9bac,	// (0x0001d047) popup_midp_note_alarm_window_ParamLimits

0x9bac,	// (0x0001d047) popup_midp_note_alarm_window

0xe43d,	// (0x000218d8) data_form_pane_ParamLimits

0xafc4,	// (0x0001e45f) form_field_data_pane_g1

0xafce,	// (0x0001e469) form_field_data_pane_t1_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_ParamLimits

0xe457,	// (0x000218f2) data_form_wide_pane_ParamLimits

0xe463,	// (0x000218fe) form_field_data_wide_pane_g1

0xe48f,	// (0x0002192a) form_field_data_wide_pane_t1_ParamLimits

0xe13d,	// (0x000215d8) input_focus_pane_cp6_ParamLimits

0xb0fe,	// (0x0001e599) input_popup_find_pane_g1_ParamLimits

0xb0fe,	// (0x0001e599) input_popup_find_pane_g1

0xe751,	// (0x00021bec) aid_navi_side_left_pane

0xe766,	// (0x00021c01) aid_navi_side_right_pane

0x3061,	// (0x000164fc) bg_popup_window_pane_cp30_ParamLimits

0x3061,	// (0x000164fc) bg_popup_window_pane_cp30

0x30db,	// (0x00016576) popup_midp_note_alarm_window_g1_ParamLimits

0x30db,	// (0x00016576) popup_midp_note_alarm_window_g1

0x310b,	// (0x000165a6) popup_midp_note_alarm_window_t1_ParamLimits

0x310b,	// (0x000165a6) popup_midp_note_alarm_window_t1

0x31ac,	// (0x00016647) popup_midp_note_alarm_window_t2_ParamLimits

0x31ac,	// (0x00016647) popup_midp_note_alarm_window_t2

0x325a,	// (0x000166f5) popup_midp_note_alarm_window_t3_ParamLimits

0x325a,	// (0x000166f5) popup_midp_note_alarm_window_t3

0x328c,	// (0x00016727) popup_midp_note_alarm_window_t4_ParamLimits

0x328c,	// (0x00016727) popup_midp_note_alarm_window_t4

0x32b2,	// (0x0001674d) popup_midp_note_alarm_window_t5_ParamLimits

0x32b2,	// (0x0001674d) popup_midp_note_alarm_window_t5

0x000a,

0xf870,	// (0x00022d0b) popup_midp_note_alarm_window_t_ParamLimits

0xf870,	// (0x00022d0b) popup_midp_note_alarm_window_t

0x335e,	// (0x000167f9) wait_bar_pane_cp1_ParamLimits

0x335e,	// (0x000167f9) wait_bar_pane_cp1

0xc736,	// (0x0001fbd1) wait_anim_pane_copy1

0xc736,	// (0x0001fbd1) wait_border_pane_copy1

0x2d46,	// (0x000161e1) wait_border_pane_g1_copy1

0xe4a6,	// (0x00021941) form_field_popup_pane_g1

0xafe8,	// (0x0001e483) form_field_popup_pane_t1_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_cp7_ParamLimits

0xe4ae,	// (0x00021949) list_form_pane_ParamLimits

0xe4ba,	// (0x00021955) form_field_popup_wide_pane_g1

0xe4c2,	// (0x0002195d) form_field_popup_wide_pane_t1_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_cp8_ParamLimits

0xe4d4,	// (0x0002196f) list_form_wide_pane_ParamLimits

0x3f5b,	// (0x000173f6) aid_size_cell_graphic_pane

0xb067,	// (0x0001e502) data_form_pane_t1_ParamLimits

0xbded,	// (0x0001f288) data_form_wide_pane_t1_ParamLimits

0xb6a7,	// (0x0001eb42) bg_status_flat_pane

0xa805,	// (0x0001dca0) title_pane_t1_ParamLimits

0xc74c,	// (0x0001fbe7) title_pane_t2_ParamLimits

0xc772,	// (0x0001fc0d) title_pane_t3_ParamLimits

0xf532,	// (0x000229cd) title_pane_t_ParamLimits

0xb220,	// (0x0001e6bb) level_1_signal_ParamLimits

0xb232,	// (0x0001e6cd) level_2_signal_ParamLimits

0xb245,	// (0x0001e6e0) level_3_signal_ParamLimits

0xb258,	// (0x0001e6f3) level_4_signal_ParamLimits

0xb26b,	// (0x0001e706) level_5_signal_ParamLimits

0xb27e,	// (0x0001e719) level_6_signal_ParamLimits

0xb291,	// (0x0001e72c) level_7_signal_ParamLimits

0xb220,	// (0x0001e6bb) level_1_battery_ParamLimits

0xb232,	// (0x0001e6cd) level_2_battery_ParamLimits

0xb245,	// (0x0001e6e0) level_3_battery_ParamLimits

0xb258,	// (0x0001e6f3) level_4_battery_ParamLimits

0xb26b,	// (0x0001e706) level_5_battery_ParamLimits

0xb27e,	// (0x0001e719) level_6_battery_ParamLimits

0xb291,	// (0x0001e72c) level_7_battery_ParamLimits

0x2f66,	// (0x00016401) bg_status_flat_pane_g1

0x2f6e,	// (0x00016409) bg_status_flat_pane_g2

0x2f76,	// (0x00016411) bg_status_flat_pane_g3

0x2f7e,	// (0x00016419) bg_status_flat_pane_g4

0x2f86,	// (0x00016421) bg_status_flat_pane_g5

0x2f8e,	// (0x00016429) bg_status_flat_pane_g6

0x2f96,	// (0x00016431) bg_status_flat_pane_g7

0xa899,	// (0x0001dd34) tabs_3_active_pane_t1_ParamLimits

0xa899,	// (0x0001dd34) tabs_3_passive_pane_t1_ParamLimits

0xa8b3,	// (0x0001dd4e) tabs_4_active_pane_t1_ParamLimits

0xa8b3,	// (0x0001dd4e) tabs_4_1_passive_pane_t1_ParamLimits

0xb114,	// (0x0001e5af) tabs_2_active_pane_t1_ParamLimits

0xb114,	// (0x0001e5af) tabs_2_passive_pane_t1_ParamLimits

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp4_ParamLimits

0xb126,	// (0x0001e5c1) tabs_2_long_active_pane_t1_ParamLimits

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp4_ParamLimits

0xed5b,	// (0x000221f6) list_single_midp_graphic_pane_t1_ParamLimits

0xc792,	// (0x0001fc2d) bg_active_tab_pane_cp5_ParamLimits

0xb139,	// (0x0001e5d4) tabs_3_long_active_pane_t1_ParamLimits

0x2107,	// (0x000155a2) bg_passive_tab_pane_cp5_ParamLimits

0xed5b,	// (0x000221f6) list_single_midp_graphic_pane_t1

0xb6a7,	// (0x0001eb42) bg_status_flat_pane_ParamLimits

0x22c9,	// (0x00015764) indicator_pane_cp2_ParamLimits

0x22c9,	// (0x00015764) indicator_pane_cp2

0xb83d,	// (0x0001ecd8) navi_pane_srt_ParamLimits

0xb83d,	// (0x0001ecd8) navi_pane_srt

0x2430,	// (0x000158cb) popup_clock_digital_analogue_window_cp1

0xc7f0,	// (0x0001fc8b) indicator_pane_t1

0x1dd8,	// (0x00015273) copy_highlight_pane

0x1dd8,	// (0x00015273) cursor_graphics_pane

0x1dd8,	// (0x00015273) graphic_within_text_pane

0x1dd8,	// (0x00015273) link_highlight_pane

0x3785,	// (0x00016c20) popup_preview_text_window_t5_ParamLimits

0x3785,	// (0x00016c20) popup_preview_text_window_t5

0x1f09,	// (0x000153a4) cursor_digital_pane

0x1f09,	// (0x000153a4) cursor_primary_pane

0x1f1a,	// (0x000153b5) cursor_primary_small_pane

0x1f22,	// (0x000153bd) cursor_secondary_pane

0x1f2a,	// (0x000153c5) cursor_title_pane

0x1f09,	// (0x000153a4) link_highlight_digital_pane

0x1f11,	// (0x000153ac) link_highlight_primary_pane

0x1f1a,	// (0x000153b5) link_highlight_primary_small_pane

0x1f22,	// (0x000153bd) link_highlight_secondary_pane

0x1f2a,	// (0x000153c5) link_highlight_title_pane

0x1f09,	// (0x000153a4) copy_highlight_digital_pane

0x1f09,	// (0x000153a4) copy_highlight_primary_pane

0x1f1a,	// (0x000153b5) copy_highlight_primary_small_pane

0x1f22,	// (0x000153bd) copy_highlight_secondary_pane

0x1f2a,	// (0x000153c5) copy_highlight_title_pane

0x1f22,	// (0x000153bd) graphic_text_digital_pane

0x3004,	// (0x0001649f) graphic_text_primary_pane

0x300d,	// (0x000164a8) graphic_text_primary_small_pane

0x1f1a,	// (0x000153b5) graphic_text_secondary_pane

0x1f09,	// (0x000153a4) graphic_text_title_pane

0xb4e1,	// (0x0001e97c) cursor_primary_pane_g1

0x2ff6,	// (0x00016491) cursor_text_primary_t1

0xbab4,	// (0x0001ef4f) cursor_primary_small_pane_g1

0x2fe8,	// (0x00016483) cursor_text_primary_small_t1

0xbaaa,	// (0x0001ef45) cursor_primary_small_pane_g1_copy1

0x2fd0,	// (0x0001646b) cursor_text_primary_small_t1_copy1

0x2fae,	// (0x00016449) cursor_text_title_t1

0xbaa0,	// (0x0001ef3b) cursor_title_pane_g1

0xb4e1,	// (0x0001e97c) cursor_digital_pane_g1

0x1f3c,	// (0x000153d7) cursor_text_digital_t1

0x1f4a,	// (0x000153e5) link_highlight_primary_pane_g1

0x2f57,	// (0x000163f2) link_highlight_primary_pane_t1

0x1f4a,	// (0x000153e5) link_highlight_primary_small_pane_g1

0x1f52,	// (0x000153ed) link_highlight_primary_small_pane_t1

0x1f61,	// (0x000153fc) link_highlight_secondary_pane_g1

0x1f69,	// (0x00015404) link_highlight_secondary_pane_t1

0x2ecb,	// (0x00016366) link_highlight_title_pane_g1

0x2ed3,	// (0x0001636e) link_highlight_title_pane_t1

0x2eb4,	// (0x0001634f) link_highlight_digital_pane_g1

0x2ebc,	// (0x00016357) link_highlight_digital_pane_t1

0x2d7c,	// (0x00016217) copy_highlight_primary_pane_g1

0x2d93,	// (0x0001622e) copy_highlight_primary_pane_t1

0x2d7c,	// (0x00016217) copy_highlight_primary_small_pane_g1

0x2d84,	// (0x0001621f) copy_highlight_primary_small_pane_t1

0x1f78,	// (0x00015413) copy_highlight_secondary_pane_g1

0x1f80,	// (0x0001541b) copy_highlight_secondary_pane_t1

0x2d65,	// (0x00016200) copy_highlight_title_pane_g1

0x2d6d,	// (0x00016208) copy_highlight_title_pane_t1

0x2d7c,	// (0x00016217) copy_highlight_digital_pane_g1

0x412d,	// (0x000175c8) copy_highlight_digital_pane_t1

0x4081,	// (0x0001751c) graphic_text_primary_pane_g1

0x4111,	// (0x000175ac) graphic_text_primary_pane_t1

0x411f,	// (0x000175ba) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x00022e3a) graphic_text_primary_pane_t

0x40ed,	// (0x00017588) graphic_text_primary_small_pane_g1

0x40f5,	// (0x00017590) graphic_text_primary_small_pane_t1

0x4103,	// (0x0001759e) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x00022e35) graphic_text_primary_small_pane_t

0x40c9,	// (0x00017564) graphic_text_secondary_pane_g1

0x40d1,	// (0x0001756c) graphic_text_secondary_pane_t1

0x40df,	// (0x0001757a) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x00022e30) graphic_text_secondary_pane_t

0x40a5,	// (0x00017540) graphic_text_title_pane_g1

0x40ad,	// (0x00017548) graphic_text_title_pane_t1

0x40bb,	// (0x00017556) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x00022e2b) graphic_text_title_pane_t

0x4081,	// (0x0001751c) graphic_text_digital_pane_g1

0x4089,	// (0x00017524) graphic_text_digital_pane_t1

0x4097,	// (0x00017532) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x00022e26) graphic_text_digital_pane_t

0xc792,	// (0x0001fc2d) navi_icon_pane_srt_ParamLimits

0xc792,	// (0x0001fc2d) navi_icon_pane_srt

0xc736,	// (0x0001fbd1) navi_midp_pane_srt

0xc736,	// (0x0001fbd1) navi_navi_pane_srt

0xc792,	// (0x0001fc2d) navi_text_pane_srt_ParamLimits

0xc792,	// (0x0001fc2d) navi_text_pane_srt

0x404c,	// (0x000174e7) navi_navi_icon_text_pane_srt

0x4054,	// (0x000174ef) navi_navi_pane_srt_g1_ParamLimits

0x4054,	// (0x000174ef) navi_navi_pane_srt_g1

0x4066,	// (0x00017501) navi_navi_pane_srt_g2_ParamLimits

0x4066,	// (0x00017501) navi_navi_pane_srt_g2

0x0001,

0xf986,	// (0x00022e21) navi_navi_pane_srt_g_ParamLimits

0xf986,	// (0x00022e21) navi_navi_pane_srt_g

0x4078,	// (0x00017513) navi_navi_tabs_pane_srt

0x404c,	// (0x000174e7) navi_navi_text_pane_srt

0x404c,	// (0x000174e7) navi_navi_volume_pane_srt

0x403d,	// (0x000174d8) navi_navi_text_pane_srt_t1

0xef35,	// (0x000223d0) navi_navi_volume_pane_srt_g1

0xef3d,	// (0x000223d8) volume_small_pane_srt_ParamLimits

0xef3d,	// (0x000223d8) volume_small_pane_srt

0xea38,	// (0x00021ed3) volume_small_pane_srt_g1_ParamLimits

0xea38,	// (0x00021ed3) volume_small_pane_srt_g1

0xea48,	// (0x00021ee3) volume_small_pane_srt_g2_ParamLimits

0xea48,	// (0x00021ee3) volume_small_pane_srt_g2

0xea59,	// (0x00021ef4) volume_small_pane_srt_g3_ParamLimits

0xea59,	// (0x00021ef4) volume_small_pane_srt_g3

0xea6a,	// (0x00021f05) volume_small_pane_srt_g4_ParamLimits

0xea6a,	// (0x00021f05) volume_small_pane_srt_g4

0xea7b,	// (0x00021f16) volume_small_pane_srt_g5_ParamLimits

0xea7b,	// (0x00021f16) volume_small_pane_srt_g5

0xea8c,	// (0x00021f27) volume_small_pane_srt_g6_ParamLimits

0xea8c,	// (0x00021f27) volume_small_pane_srt_g6

0xea9d,	// (0x00021f38) volume_small_pane_srt_g7_ParamLimits

0xea9d,	// (0x00021f38) volume_small_pane_srt_g7

0xeaae,	// (0x00021f49) volume_small_pane_srt_g8_ParamLimits

0xeaae,	// (0x00021f49) volume_small_pane_srt_g8

0xeabf,	// (0x00021f5a) volume_small_pane_srt_g9_ParamLimits

0xeabf,	// (0x00021f5a) volume_small_pane_srt_g9

0xead0,	// (0x00021f6b) volume_small_pane_srt_g10_ParamLimits

0xead0,	// (0x00021f6b) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00022bce) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00022bce) volume_small_pane_srt_g

0xca62,	// (0x0001fefd) query_popup_data_pane_cp2

0x4023,	// (0x000174be) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4023,	// (0x000174be) navi_navi_icon_text_pane_srt_t1

0x3004,	// (0x0001649f) navi_tabs_2_long_pane_srt

0x3004,	// (0x0001649f) navi_tabs_2_pane_srt

0x3004,	// (0x0001649f) navi_tabs_3_long_pane_srt

0x3004,	// (0x0001649f) navi_tabs_3_pane_srt

0x3004,	// (0x0001649f) navi_tabs_4_pane_srt

0xef15,	// (0x000223b0) tabs_2_active_pane_srt_ParamLimits

0xef15,	// (0x000223b0) tabs_2_active_pane_srt

0xef25,	// (0x000223c0) tabs_2_passive_pane_srt_ParamLimits

0xef25,	// (0x000223c0) tabs_2_passive_pane_srt

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp1_srt_ParamLimits

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp1_srt

0x3fef,	// (0x0001748a) bg_passive_tab_pane_g1_cp1_srt

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp1_srt

0x3ff8,	// (0x00017493) bg_passive_tab_pane_g3_cp1_srt

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp1_srt_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp1_srt

0x4001,	// (0x0001749c) tabs_2_active_pane_srt_g1

0xbf54,	// (0x0001f3ef) tabs_2_active_pane_srt_t1_ParamLimits

0xbf54,	// (0x0001f3ef) tabs_2_active_pane_srt_t1

0x3fef,	// (0x0001748a) bg_active_tab_pane_g1_cp1_srt

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp1_srt

0x3ff8,	// (0x00017493) bg_active_tab_pane_g3_cp1_srt

0xeee2,	// (0x0002237d) tabs_3_active_pane_srt_ParamLimits

0xeee2,	// (0x0002237d) tabs_3_active_pane_srt

0xeef3,	// (0x0002238e) tabs_3_passive_pane_cp_srt_ParamLimits

0xeef3,	// (0x0002238e) tabs_3_passive_pane_cp_srt

0xef04,	// (0x0002239f) tabs_3_passive_pane_srt_ParamLimits

0xef04,	// (0x0002239f) tabs_3_passive_pane_srt

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp2_srt_ParamLimits

0x27a3,	// (0x00015c3e) bg_passive_tab_pane_cp2_srt

0x1f8f,	// (0x0001542a) bg_passive_tab_pane_g1_cp2_srt

0x1a0a,	// (0x00014ea5) bg_passive_tab_pane_g2_cp2_srt

0x1f98,	// (0x00015433) bg_passive_tab_pane_g3_cp2_srt

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp2_srt_ParamLimits

0xc784,	// (0x0001fc1f) bg_active_tab_pane_cp2_srt

0x3fd5,	// (0x00017470) tabs_3_active_pane_srt_g1

0xbf3e,	// (0x0001f3d9) tabs_3_active_pane_srt_t1_ParamLimits

0xbf3e,	// (0x0001f3d9) tabs_3_active_pane_srt_t1

0x1f8f,	// (0x0001542a) bg_active_tab_pane_g1_cp2_srt

0x1a0a,	// (0x00014ea5) bg_active_tab_pane_g2_cp2_srt

0x1f98,	// (0x00015433) bg_active_tab_pane_g3_cp2_srt

0xee9a,	// (0x00022335) tabs_4_active_pane_srt_ParamLimits

0xee9a,	// (0x00022335) tabs_4_active_pane_srt

0xeeac,	// (0x00022347) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeeac,	// (0x00022347) tabs_4_passive_pane_cp2_srt

0xeaf0,	// (0x00021f8b) aid_size_cell_toolbar

0x3b63,	// (0x00016ffe) main_idle_act_pane_ParamLimits

0xebaa,	// (0x00022045) popup_large_graphic_colour_window_ParamLimits

0x9f00,	// (0x0001d39b) popup_toolbar_window_ParamLimits

0x9f00,	// (0x0001d39b) popup_toolbar_window

0x3d81,	// (0x0001721c) list_single_graphic_2heading_pane_ParamLimits

0x3d81,	// (0x0001721c) list_single_graphic_2heading_pane

0x1449,	// (0x000148e4) aid_size_cell_apps_grid_lsc_pane

0x145b,	// (0x000148f6) aid_size_cell_apps_grid_prt_pane

0x2107,	// (0x000155a2) bg_wml_button_pane_cp1_ParamLimits

0x2107,	// (0x000155a2) bg_wml_button_pane_cp1

0xba3f,	// (0x0001eeda) form_midp_field_text_pane_t1_ParamLimits

0x27a3,	// (0x00015c3e) input_focus_pane_cp050_ParamLimits

0x29eb,	// (0x00015e86) list_midp_form_text_pane_ParamLimits

0x299d,	// (0x00015e38) input_focus_pane_cp051_ParamLimits

0x29b1,	// (0x00015e4c) list_midp_choice_pane_ParamLimits

0x285c,	// (0x00015cf7) list_single_2graphic_pane_cp3_ParamLimits

0x285c,	// (0x00015cf7) list_single_2graphic_pane_cp3

0x2872,	// (0x00015d0d) list_single_midp_graphic_pane_ParamLimits

0x2872,	// (0x00015d0d) list_single_midp_graphic_pane

0xec62,	// (0x000220fd) list_single_graphic_2heading_pane_g1_ParamLimits

0xec62,	// (0x000220fd) list_single_graphic_2heading_pane_g1

0xec6e,	// (0x00022109) list_single_graphic_2heading_pane_g4_ParamLimits

0xec6e,	// (0x00022109) list_single_graphic_2heading_pane_g4

0xec7a,	// (0x00022115) list_single_graphic_2heading_pane_g5_ParamLimits

0xec7a,	// (0x00022115) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00022c21) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00022c21) list_single_graphic_2heading_pane_g

0xec86,	// (0x00022121) list_single_graphic_2heading_pane_t1_ParamLimits

0xec86,	// (0x00022121) list_single_graphic_2heading_pane_t1

0xec9a,	// (0x00022135) list_single_graphic_2heading_pane_t2_ParamLimits

0xec9a,	// (0x00022135) list_single_graphic_2heading_pane_t2

0xecb6,	// (0x00022151) list_single_graphic_2heading_pane_t3_ParamLimits

0xecb6,	// (0x00022151) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00022c28) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00022c28) list_single_graphic_2heading_pane_t

0x2583,	// (0x00015a1e) bg_popup_sub_pane_cp2

0x25ad,	// (0x00015a48) grid_toobar_pane

0xecce,	// (0x00022169) cell_toolbar_pane_ParamLimits

0xecce,	// (0x00022169) cell_toolbar_pane

0x2623,	// (0x00015abe) cell_toolbar_pane_g1_ParamLimits

0x2623,	// (0x00015abe) cell_toolbar_pane_g1

0x2637,	// (0x00015ad2) cell_toolbar_pane_g2_ParamLimits

0x2637,	// (0x00015ad2) cell_toolbar_pane_g2

0x0001,

0xf79b,	// (0x00022c36) cell_toolbar_pane_g_ParamLimits

0xf79b,	// (0x00022c36) cell_toolbar_pane_g

0x2659,	// (0x00015af4) grid_highlight_pane_cp2_ParamLimits

0x2659,	// (0x00015af4) grid_highlight_pane_cp2

0x2673,	// (0x00015b0e) toolbar_button_pane

0x267f,	// (0x00015b1a) toolbar_button_pane_g1

0x2687,	// (0x00015b22) toolbar_button_pane_g2

0x268f,	// (0x00015b2a) toolbar_button_pane_g3

0x2697,	// (0x00015b32) toolbar_button_pane_g4

0x269f,	// (0x00015b3a) toolbar_button_pane_g5

0x26a7,	// (0x00015b42) toolbar_button_pane_g6

0x26af,	// (0x00015b4a) toolbar_button_pane_g7

0x26b7,	// (0x00015b52) toolbar_button_pane_g8

0x26bf,	// (0x00015b5a) toolbar_button_pane_g9

0x0009,

0xf7a0,	// (0x00022c3b) toolbar_button_pane_g

0xed06,	// (0x000221a1) list_single_2graphic_pane_g1_cp3_ParamLimits

0xed06,	// (0x000221a1) list_single_2graphic_pane_g1_cp3

0x9f58,	// (0x0001d3f3) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9f58,	// (0x0001d3f3) list_single_2graphic_pane_g2_cp3

0xed12,	// (0x000221ad) list_single_2graphic_pane_g3_cp3

0xed1a,	// (0x000221b5) list_single_2graphic_pane_g4_cp3_ParamLimits

0xed1a,	// (0x000221b5) list_single_2graphic_pane_g4_cp3

0xed34,	// (0x000221cf) list_single_2graphic_pane_t1_cp3_ParamLimits

0xed34,	// (0x000221cf) list_single_2graphic_pane_t1_cp3

0xed4f,	// (0x000221ea) list_single_midp_graphic_pane_g2_ParamLimits

0xed4f,	// (0x000221ea) list_single_midp_graphic_pane_g2

0xeaf8,	// (0x00021f93) aid_zoom_text_primary

0xeb00,	// (0x00021f9b) aid_zoom_text_secondary

0xb539,	// (0x0001e9d4) status_small_pane_g7_ParamLimits

0xb539,	// (0x0001e9d4) status_small_pane_g7

0xb55c,	// (0x0001e9f7) status_small_pane_t1_ParamLimits

0xa7d5,	// (0x0001dc70) title_pane_g2

0x0003,

0xf529,	// (0x000229c4) title_pane_g

0xaa75,	// (0x0001df10) aid_size_cell_colour_1_pane_ParamLimits

0xaa75,	// (0x0001df10) aid_size_cell_colour_1_pane

0xaa89,	// (0x0001df24) aid_size_cell_colour_2_pane_ParamLimits

0xaa89,	// (0x0001df24) aid_size_cell_colour_2_pane

0xaa9d,	// (0x0001df38) aid_size_cell_colour_3_pane_ParamLimits

0xaa9d,	// (0x0001df38) aid_size_cell_colour_3_pane

0xaab1,	// (0x0001df4c) aid_size_cell_colour_4_pane_ParamLimits

0xaab1,	// (0x0001df4c) aid_size_cell_colour_4_pane

0xe68d,	// (0x00021b28) title_pane_stacon_g1_ParamLimits

0xe68d,	// (0x00021b28) title_pane_stacon_g1

0x2dea,	// (0x00016285) popup_note_wait_window_g3_ParamLimits

0x2dea,	// (0x00016285) popup_note_wait_window_g3

0x2e61,	// (0x000162fc) popup_note_wait_window_t5_ParamLimits

0x2e61,	// (0x000162fc) popup_note_wait_window_t5

0xc736,	// (0x0001fbd1) main_feb_china_hwr_fs_writing_pane

0x9893,	// (0x0001cd2e) popup_feb_china_hwr_fs_window_ParamLimits

0x9893,	// (0x0001cd2e) popup_feb_china_hwr_fs_window

0x9f69,	// (0x0001d404) aid_size_cell_hwr_fs_ParamLimits

0x9f69,	// (0x0001d404) aid_size_cell_hwr_fs

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp3_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp3

0x9f7e,	// (0x0001d419) grid_hwr_fs_pane_ParamLimits

0x9f7e,	// (0x0001d419) grid_hwr_fs_pane

0xed71,	// (0x0002220c) linegrid_hwr_fs_pane_ParamLimits

0xed71,	// (0x0002220c) linegrid_hwr_fs_pane

0x9f96,	// (0x0001d431) cell_hwr_fs_pane_ParamLimits

0x9f96,	// (0x0001d431) cell_hwr_fs_pane

0x27af,	// (0x00015c4a) linegrid_hwr_fs_pane_g1_ParamLimits

0x27af,	// (0x00015c4a) linegrid_hwr_fs_pane_g1

0xb9e0,	// (0x0001ee7b) linegrid_hwr_fs_pane_g2_ParamLimits

0xb9e0,	// (0x0001ee7b) linegrid_hwr_fs_pane_g2

0x27cd,	// (0x00015c68) linegrid_hwr_fs_pane_g3_ParamLimits

0x27cd,	// (0x00015c68) linegrid_hwr_fs_pane_g3

0xed81,	// (0x0002221c) linegrid_hwr_fs_pane_g4_ParamLimits

0xed81,	// (0x0002221c) linegrid_hwr_fs_pane_g4

0xed9f,	// (0x0002223a) linegrid_hwr_fs_pane_g5_ParamLimits

0xed9f,	// (0x0002223a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c6,	// (0x00022c61) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c6,	// (0x00022c61) linegrid_hwr_fs_pane_g

0x27d9,	// (0x00015c74) cell_hwr_fs_pane_g1_ParamLimits

0x27d9,	// (0x00015c74) cell_hwr_fs_pane_g1

0x24be,	// (0x00015959) cell_hwr_fs_pane_g2_ParamLimits

0x24be,	// (0x00015959) cell_hwr_fs_pane_g2

0xb9f2,	// (0x0001ee8d) cell_hwr_fs_pane_g3_ParamLimits

0xb9f2,	// (0x0001ee8d) cell_hwr_fs_pane_g3

0xb9ff,	// (0x0001ee9a) cell_hwr_fs_pane_g4_ParamLimits

0xb9ff,	// (0x0001ee9a) cell_hwr_fs_pane_g4

0x0003,

0xf7d1,	// (0x00022c6c) cell_hwr_fs_pane_g_ParamLimits

0xf7d1,	// (0x00022c6c) cell_hwr_fs_pane_g

0x9fbc,	// (0x0001d457) cell_hwr_fs_pane_t1

0xc736,	// (0x0001fbd1) grid_highlight_pane_cp6

0xc736,	// (0x0001fbd1) main_idle_act2_pane

0xe5fe,	// (0x00021a99) aid_inside_area_popup_secondary

0xbad4,	// (0x0001ef6f) aid_inside_area_window_primary_ParamLimits

0xbad4,	// (0x0001ef6f) aid_inside_area_window_primary

0x413c,	// (0x000175d7) ai2_news_ticker_pane

0x4144,	// (0x000175df) aid_size_cell_ai1_link_ParamLimits

0x4144,	// (0x000175df) aid_size_cell_ai1_link

0x415e,	// (0x000175f9) popup_ai2_data_window_ParamLimits

0x415e,	// (0x000175f9) popup_ai2_data_window

0x417c,	// (0x00017617) popup_ai2_link_window_ParamLimits

0x417c,	// (0x00017617) popup_ai2_link_window

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp4_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp4

0x4192,	// (0x0001762d) grid_ai2_link_pane_ParamLimits

0x4192,	// (0x0001762d) grid_ai2_link_pane

0x41a9,	// (0x00017644) popup_ai2_link_window_g1_ParamLimits

0x41a9,	// (0x00017644) popup_ai2_link_window_g1

0x41b5,	// (0x00017650) popup_ai2_link_window_g2_ParamLimits

0x41b5,	// (0x00017650) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x00022e3f) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x00022e3f) popup_ai2_link_window_g

0x41c6,	// (0x00017661) ai2_mp_button_pane

0x41ce,	// (0x00017669) ai2_mp_volume_pane

0x299d,	// (0x00015e38) bg_popup_sub_pane_cp5_ParamLimits

0x299d,	// (0x00015e38) bg_popup_sub_pane_cp5

0x41d6,	// (0x00017671) heading_ai2_gene_pane_ParamLimits

0x41d6,	// (0x00017671) heading_ai2_gene_pane

0x41e2,	// (0x0001767d) list_ai2_gene_pane_ParamLimits

0x41e2,	// (0x0001767d) list_ai2_gene_pane

0x422a,	// (0x000176c5) cell_ai2_link_pane_ParamLimits

0x422a,	// (0x000176c5) cell_ai2_link_pane

0x4240,	// (0x000176db) cell_ai2_link_pane_g1

0xc736,	// (0x0001fbd1) grid_highlight_pane_cp7

0xef52,	// (0x000223ed) ai2_mp_volume_pane_g1

0x4313,	// (0x000177ae) ai2_mp_volume_pane_g2

0x4288,	// (0x00017723) list_ai2_gene_pane_t1

0x431b,	// (0x000177b6) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x00022e58) ai2_mp_volume_pane_g

0xef5a,	// (0x000223f5) volume_small_pane_cp3

0x4323,	// (0x000177be) aid_size_cell_ai2_button

0x432b,	// (0x000177c6) grid_ai2_button_pane

0x4334,	// (0x000177cf) cell_ai2_button_pane_ParamLimits

0x4334,	// (0x000177cf) cell_ai2_button_pane

0xc72c,	// (0x0001fbc7) cell_ai2_button_pane_g1

0xc736,	// (0x0001fbd1) grid_highlight_pane_cp8

0x42d3,	// (0x0001776e) ai2_gene_pane_t1_ParamLimits

0x42d3,	// (0x0001776e) ai2_gene_pane_t1

0x9817,	// (0x0001ccb2) aid_height_parent_landscape

0xbc7b,	// (0x0001f116) aid_height_set_list

0x3b63,	// (0x00016ffe) aid_size_parent

0x3f5b,	// (0x000173f6) aid_size_cell_graphic_pane_ParamLimits

0x41f2,	// (0x0001768d) popup_ai2_data_window_g1_ParamLimits

0x41f2,	// (0x0001768d) popup_ai2_data_window_g1

0x41fe,	// (0x00017699) ai2_news_ticker_pane_g1

0x4206,	// (0x000176a1) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x00022e44) ai2_news_ticker_pane_g

0x420e,	// (0x000176a9) ai2_news_ticker_pane_t1

0x421c,	// (0x000176b7) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x00022e49) ai2_news_ticker_pane_t

0x4249,	// (0x000176e4) heading_ai2_gene_pane_g1

0x4251,	// (0x000176ec) heading_ai2_gene_pane_t1_ParamLimits

0x4251,	// (0x000176ec) heading_ai2_gene_pane_t1

0x4266,	// (0x00017701) list_highlight_pane_cp6

0x426e,	// (0x00017709) ai2_gene_pane_ParamLimits

0x426e,	// (0x00017709) ai2_gene_pane

0x4296,	// (0x00017731) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x00022e4e) list_ai2_gene_pane_t

0x42a4,	// (0x0001773f) list_highlight_pane_cp8_ParamLimits

0x42a4,	// (0x0001773f) list_highlight_pane_cp8

0x42b5,	// (0x00017750) ai2_gene_pane_g1_ParamLimits

0x42b5,	// (0x00017750) ai2_gene_pane_g1

0x42c7,	// (0x00017762) ai2_gene_pane_g2_ParamLimits

0x42c7,	// (0x00017762) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x00022e53) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x00022e53) ai2_gene_pane_g

0xe358,	// (0x000217f3) scroll_pane_cp12

0x97d4,	// (0x0001cc6f) control_pane_t3_ParamLimits

0x97d4,	// (0x0001cc6f) control_pane_t3

0xb54d,	// (0x0001e9e8) status_small_pane_g8_ParamLimits

0xb54d,	// (0x0001e9e8) status_small_pane_g8

0x9935,	// (0x0001cdd0) popup_find_window_ParamLimits

0x9bec,	// (0x0001d087) popup_note_image_window_ParamLimits

0x25e9,	// (0x00015a84) list_double2_graphic_pane_vc_g1_ParamLimits

0x25e9,	// (0x00015a84) list_double2_graphic_pane_vc_g1

0x25f5,	// (0x00015a90) list_double2_graphic_pane_vc_g2_ParamLimits

0x25f5,	// (0x00015a90) list_double2_graphic_pane_vc_g2

0x2601,	// (0x00015a9c) list_double2_graphic_pane_vc_g3_ParamLimits

0x2601,	// (0x00015a9c) list_double2_graphic_pane_vc_g3

0x0002,

0xf794,	// (0x00022c2f) list_double2_graphic_pane_vc_g_ParamLimits

0xf794,	// (0x00022c2f) list_double2_graphic_pane_vc_g

0x260d,	// (0x00015aa8) list_double2_graphic_pane_vc_t1_ParamLimits

0x260d,	// (0x00015aa8) list_double2_graphic_pane_vc_t1

0x25f5,	// (0x00015a90) list_single_heading_pane_vc_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_heading_pane_vc_g1

0x2601,	// (0x00015a9c) list_single_heading_pane_vc_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_heading_pane_vc_g

0x26c7,	// (0x00015b62) list_single_heading_pane_vc_t1_ParamLimits

0x26c7,	// (0x00015b62) list_single_heading_pane_vc_t1

0x26dd,	// (0x00015b78) list_single_heading_pane_vc_t2_ParamLimits

0x26dd,	// (0x00015b78) list_single_heading_pane_vc_t2

0x0001,

0xf7b5,	// (0x00022c50) list_single_heading_pane_vc_t_ParamLimits

0xf7b5,	// (0x00022c50) list_single_heading_pane_vc_t

0x26ef,	// (0x00015b8a) list_setting_number_pane_vc_g1_ParamLimits

0x26ef,	// (0x00015b8a) list_setting_number_pane_vc_g1

0x26fb,	// (0x00015b96) list_setting_number_pane_vc_g2_ParamLimits

0x26fb,	// (0x00015b96) list_setting_number_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022c55) list_setting_number_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022c55) list_setting_number_pane_vc_g

0x2707,	// (0x00015ba2) list_setting_number_pane_vc_t1_ParamLimits

0x2707,	// (0x00015ba2) list_setting_number_pane_vc_t1

0x271b,	// (0x00015bb6) list_setting_number_pane_vc_t2_ParamLimits

0x271b,	// (0x00015bb6) list_setting_number_pane_vc_t2

0x2737,	// (0x00015bd2) list_setting_number_pane_vc_t3_ParamLimits

0x2737,	// (0x00015bd2) list_setting_number_pane_vc_t3

0x0002,

0xf7bf,	// (0x00022c5a) list_setting_number_pane_vc_t_ParamLimits

0xf7bf,	// (0x00022c5a) list_setting_number_pane_vc_t

0x2765,	// (0x00015c00) set_value_pane_vc_ParamLimits

0x2765,	// (0x00015c00) set_value_pane_vc

0x3d81,	// (0x0001721c) list_double2_graphic_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double2_graphic_pane_vc

0x3d98,	// (0x00017233) list_double2_large_graphic_pane_vc_ParamLimits

0x3d98,	// (0x00017233) list_double2_large_graphic_pane_vc

0x3d81,	// (0x0001721c) list_double2_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double2_pane_vc

0x3d81,	// (0x0001721c) list_double_graphic_heading_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_graphic_heading_pane_vc

0x3d81,	// (0x0001721c) list_double_graphic_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_graphic_pane_vc

0x3d81,	// (0x0001721c) list_double_heading_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_heading_pane_vc

0x3dac,	// (0x00017247) list_double_large_graphic_pane_vc_ParamLimits

0x3dac,	// (0x00017247) list_double_large_graphic_pane_vc

0x3d81,	// (0x0001721c) list_double_number_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_number_pane_vc

0x3d81,	// (0x0001721c) list_double_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_pane_vc

0x3d81,	// (0x0001721c) list_double_time_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_double_time_pane_vc

0x3d81,	// (0x0001721c) list_setting_number_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_setting_number_pane_vc

0x3d81,	// (0x0001721c) list_setting_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_setting_pane_vc

0x3d81,	// (0x0001721c) list_single_graphic_heading_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_single_graphic_heading_pane_vc

0x3d81,	// (0x0001721c) list_single_heading_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_single_heading_pane_vc

0x3d81,	// (0x0001721c) list_single_number_heading_pane_vc_ParamLimits

0x3d81,	// (0x0001721c) list_single_number_heading_pane_vc

0x25e9,	// (0x00015a84) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x25e9,	// (0x00015a84) list_double_graphic_heading_pane_vc_g1

0x1c9e,	// (0x00015139) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1c9e,	// (0x00015139) list_double_graphic_heading_pane_vc_g2

0x4367,	// (0x00017802) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4367,	// (0x00017802) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c4,	// (0x00022e5f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c4,	// (0x00022e5f) list_double_graphic_heading_pane_vc_g

0x4373,	// (0x0001780e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4373,	// (0x0001780e) list_double_graphic_heading_pane_vc_t1

0x4389,	// (0x00017824) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4389,	// (0x00017824) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9cb,	// (0x00022e66) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9cb,	// (0x00022e66) list_double_graphic_heading_pane_vc_t

0x26ef,	// (0x00015b8a) list_setting_pane_vc_g1_ParamLimits

0x26ef,	// (0x00015b8a) list_setting_pane_vc_g1

0x26fb,	// (0x00015b96) list_setting_pane_vc_g2_ParamLimits

0x26fb,	// (0x00015b96) list_setting_pane_vc_g2

0x0001,

0xf7ba,	// (0x00022c55) list_setting_pane_vc_g_ParamLimits

0xf7ba,	// (0x00022c55) list_setting_pane_vc_g

0x45da,	// (0x00017a75) list_setting_pane_vc_t1_ParamLimits

0x45da,	// (0x00017a75) list_setting_pane_vc_t1

0x45f6,	// (0x00017a91) list_setting_pane_vc_t2_ParamLimits

0x45f6,	// (0x00017a91) list_setting_pane_vc_t2

0x0001,

0xfa0e,	// (0x00022ea9) list_setting_pane_vc_t_ParamLimits

0xfa0e,	// (0x00022ea9) list_setting_pane_vc_t

0x2765,	// (0x00015c00) set_value_pane_cp_vc_ParamLimits

0x2765,	// (0x00015c00) set_value_pane_cp_vc

0x25f5,	// (0x00015a90) list_single_number_heading_pane_vc_g1_ParamLimits

0x25f5,	// (0x00015a90) list_single_number_heading_pane_vc_g1

0x2601,	// (0x00015a9c) list_single_number_heading_pane_vc_g2_ParamLimits

0x2601,	// (0x00015a9c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_single_number_heading_pane_vc_g

0x4612,	// (0x00017aad) list_single_number_heading_pane_vc_t1_ParamLimits

0x4612,	// (0x00017aad) list_single_number_heading_pane_vc_t1

0x4628,	// (0x00017ac3) list_single_number_heading_pane_vc_t2_ParamLimits

0x4628,	// (0x00017ac3) list_single_number_heading_pane_vc_t2

0x463a,	// (0x00017ad5) list_single_number_heading_pane_vc_t3_ParamLimits

0x463a,	// (0x00017ad5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa13,	// (0x00022eae) list_single_number_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x00022eae) list_single_number_heading_pane_vc_t

0x25e9,	// (0x00015a84) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x25e9,	// (0x00015a84) list_single_graphic_heading_pane_vc_g1

0x25f5,	// (0x00015a90) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x25f5,	// (0x00015a90) list_single_graphic_heading_pane_vc_g4

0x2601,	// (0x00015a9c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2601,	// (0x00015a9c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf794,	// (0x00022c2f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf794,	// (0x00022c2f) list_single_graphic_heading_pane_vc_g

0x4612,	// (0x00017aad) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4612,	// (0x00017aad) list_single_graphic_heading_pane_vc_t1

0x464c,	// (0x00017ae7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x464c,	// (0x00017ae7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa1a,	// (0x00022eb5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x00022eb5) list_single_graphic_heading_pane_vc_t

0x25f5,	// (0x00015a90) list_double2_pane_vc_g1_ParamLimits

0x25f5,	// (0x00015a90) list_double2_pane_vc_g1

0x2601,	// (0x00015a9c) list_double2_pane_vc_g2_ParamLimits

0x2601,	// (0x00015a9c) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_double2_pane_vc_g

0x465e,	// (0x00017af9) list_double2_pane_vc_t1_ParamLimits

0x465e,	// (0x00017af9) list_double2_pane_vc_t1

0x4674,	// (0x00017b0f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4674,	// (0x00017b0f) list_double2_large_graphic_pane_vc_g1

0x4680,	// (0x00017b1b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4680,	// (0x00017b1b) list_double2_large_graphic_pane_vc_g2

0x468c,	// (0x00017b27) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x468c,	// (0x00017b27) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00022a5b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00022a5b) list_double2_large_graphic_pane_vc_g

0x4698,	// (0x00017b33) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4698,	// (0x00017b33) list_double2_large_graphic_pane_vc_t1

0x46ae,	// (0x00017b49) list_double_time_pane_vc_g1_ParamLimits

0x46ae,	// (0x00017b49) list_double_time_pane_vc_g1

0x46ba,	// (0x00017b55) list_double_time_pane_vc_g2_ParamLimits

0x46ba,	// (0x00017b55) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x00022eba) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x00022eba) list_double_time_pane_vc_g

0x46c6,	// (0x00017b61) list_double_time_pane_vc_t1_ParamLimits

0x46c6,	// (0x00017b61) list_double_time_pane_vc_t1

0x46f6,	// (0x00017b91) list_double_time_pane_vc_t2_ParamLimits

0x46f6,	// (0x00017b91) list_double_time_pane_vc_t2

0x471f,	// (0x00017bba) list_double_time_pane_vc_t3_ParamLimits

0x471f,	// (0x00017bba) list_double_time_pane_vc_t3

0x4731,	// (0x00017bcc) list_double_time_pane_vc_t4_ParamLimits

0x4731,	// (0x00017bcc) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x00022ebf) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x00022ebf) list_double_time_pane_vc_t

0x25f5,	// (0x00015a90) list_double_pane_vc_g1_ParamLimits

0x25f5,	// (0x00015a90) list_double_pane_vc_g1

0x2601,	// (0x00015a9c) list_double_pane_vc_g2_ParamLimits

0x2601,	// (0x00015a9c) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_double_pane_vc_g

0x4745,	// (0x00017be0) list_double_pane_vc_t1_ParamLimits

0x4745,	// (0x00017be0) list_double_pane_vc_t1

0x4759,	// (0x00017bf4) list_double_pane_vc_t2_ParamLimits

0x4759,	// (0x00017bf4) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x00022ec8) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x00022ec8) list_double_pane_vc_t

0x25f5,	// (0x00015a90) list_double_number_pane_vc_g1_ParamLimits

0x25f5,	// (0x00015a90) list_double_number_pane_vc_g1

0x2601,	// (0x00015a9c) list_double_number_pane_vc_g2_ParamLimits

0x2601,	// (0x00015a9c) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00022a3e) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00022a3e) list_double_number_pane_vc_g

0x476f,	// (0x00017c0a) list_double_number_pane_vc_t1_ParamLimits

0x476f,	// (0x00017c0a) list_double_number_pane_vc_t1

0x4781,	// (0x00017c1c) list_double_number_pane_vc_t2_ParamLimits

0x4781,	// (0x00017c1c) list_double_number_pane_vc_t2

0x4759,	// (0x00017bf4) list_double_number_pane_vc_t3_ParamLimits

0x4759,	// (0x00017bf4) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x00022ecd) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x00022ecd) list_double_number_pane_vc_t

0x4795,	// (0x00017c30) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4795,	// (0x00017c30) list_double_large_graphic_pane_vc_g1

0x47b7,	// (0x00017c52) list_double_large_graphic_pane_vc_g2_ParamLimits

0x47b7,	// (0x00017c52) list_double_large_graphic_pane_vc_g2

0x47cb,	// (0x00017c66) list_double_large_graphic_pane_vc_g3_ParamLimits

0x47cb,	// (0x00017c66) list_double_large_graphic_pane_vc_g3

0x47da,	// (0x00017c75) list_double_large_graphic_pane_vc_g4_ParamLimits

0x47da,	// (0x00017c75) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x00022ed4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x00022ed4) list_double_large_graphic_pane_vc_g

0x47e6,	// (0x00017c81) list_double_large_graphic_pane_vc_t1_ParamLimits

0x47e6,	// (0x00017c81) list_double_large_graphic_pane_vc_t1

0x4802,	// (0x00017c9d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4802,	// (0x00017c9d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x00022edd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x00022edd) list_double_large_graphic_pane_vc_t

0x1c9e,	// (0x00015139) list_double_heading_pane_vc_g1_ParamLimits

0x1c9e,	// (0x00015139) list_double_heading_pane_vc_g1

0x4367,	// (0x00017802) list_double_heading_pane_vc_g2_ParamLimits

0x4367,	// (0x00017802) list_double_heading_pane_vc_g2

0x0001,

0xfa47,	// (0x00022ee2) list_double_heading_pane_vc_g_ParamLimits

0xfa47,	// (0x00022ee2) list_double_heading_pane_vc_g

0x4822,	// (0x00017cbd) list_double_heading_pane_vc_t1_ParamLimits

0x4822,	// (0x00017cbd) list_double_heading_pane_vc_t1

0x4834,	// (0x00017ccf) list_double_heading_pane_vc_t2_ParamLimits

0x4834,	// (0x00017ccf) list_double_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00022ee7) list_double_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00022ee7) list_double_heading_pane_vc_t

0x484c,	// (0x00017ce7) list_double_graphic_pane_vc_g1_ParamLimits

0x484c,	// (0x00017ce7) list_double_graphic_pane_vc_g1

0x4858,	// (0x00017cf3) list_double_graphic_pane_vc_g2_ParamLimits

0x4858,	// (0x00017cf3) list_double_graphic_pane_vc_g2

0x25f5,	// (0x00015a90) list_double_graphic_pane_vc_g3_ParamLimits

0x25f5,	// (0x00015a90) list_double_graphic_pane_vc_g3

0x0003,

0xfa51,	// (0x00022eec) list_double_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00022eec) list_double_graphic_pane_vc_g

0x4875,	// (0x00017d10) list_double_graphic_pane_vc_t1_ParamLimits

0x4875,	// (0x00017d10) list_double_graphic_pane_vc_t1

0x489f,	// (0x00017d3a) list_double_graphic_pane_vc_t2_ParamLimits

0x489f,	// (0x00017d3a) list_double_graphic_pane_vc_t2

0x0001,

0xfa5a,	// (0x00022ef5) list_double_graphic_pane_vc_t_ParamLimits

0xfa5a,	// (0x00022ef5) list_double_graphic_pane_vc_t

0xde1c,	// (0x000212b7) aid_size_cell_fastswap

0x9487,	// (0x0001c922) aid_size_cell_touch_ParamLimits

0x9487,	// (0x0001c922) aid_size_cell_touch

0xdfa3,	// (0x0002143e) popup_fast_swap_wide_window_ParamLimits

0xdfa3,	// (0x0002143e) popup_fast_swap_wide_window

0x9645,	// (0x0001cae0) touch_pane_ParamLimits

0x9645,	// (0x0001cae0) touch_pane

0xe3dd,	// (0x00021878) button_value_adjust_pane_cp2

0xe3e5,	// (0x00021880) button_value_adjust_pane_cp4

0xe3ed,	// (0x00021888) form_field_data_pane_cp2

0xaf99,	// (0x0001e434) form_field_data_wide_pane_cp2

0x151c,	// (0x000149b7) bg_scroll_pane_ParamLimits

0xe7e9,	// (0x00021c84) scroll_handle_pane_ParamLimits

0xe7fd,	// (0x00021c98) scroll_sc2_down_pane_ParamLimits

0xe7fd,	// (0x00021c98) scroll_sc2_down_pane

0x154d,	// (0x000149e8) scroll_sc2_up_pane_ParamLimits

0x154d,	// (0x000149e8) scroll_sc2_up_pane

0xc096,	// (0x0001f531) grid_wheel_folder_pane_g1_ParamLimits

0xc096,	// (0x0001f531) grid_wheel_folder_pane_g1

0xe9d0,	// (0x00021e6b) clock_nsta_pane_cp2_ParamLimits

0xe9d0,	// (0x00021e6b) clock_nsta_pane_cp2

0xb42b,	// (0x0001e8c6) listscroll_midp_pane_ParamLimits

0xb437,	// (0x0001e8d2) midp_canvas_pane

0x20d7,	// (0x00015572) nsta_clock_indic_pane

0x2113,	// (0x000155ae) listscroll_form_pane_vc

0x211b,	// (0x000155b6) listscroll_set_pane_vc_ParamLimits

0x211b,	// (0x000155b6) listscroll_set_pane_vc

0xb6cf,	// (0x0001eb6a) clock_nsta_pane

0xb6f9,	// (0x0001eb94) indicator_nsta_pane

0x2583,	// (0x00015a1e) bg_popup_sub_pane_cp2_ParamLimits

0x2597,	// (0x00015a32) find_pane_cp2_ParamLimits

0x2597,	// (0x00015a32) find_pane_cp2

0x25ad,	// (0x00015a48) grid_toobar_pane_ParamLimits

0x2777,	// (0x00015c12) list_form_gen_pane_vc_ParamLimits

0x2777,	// (0x00015c12) list_form_gen_pane_vc

0x278d,	// (0x00015c28) scroll_pane_cp8_vc_ParamLimits

0x278d,	// (0x00015c28) scroll_pane_cp8_vc

0x2809,	// (0x00015ca4) data_form_wide_pane_vc_ParamLimits

0x2809,	// (0x00015ca4) data_form_wide_pane_vc

0x2815,	// (0x00015cb0) form_field_data_wide_pane_vc_g1

0x281d,	// (0x00015cb8) form_field_data_wide_pane_vc_t1_ParamLimits

0x281d,	// (0x00015cb8) form_field_data_wide_pane_vc_t1

0xe449,	// (0x000218e4) input_focus_pane_cp6_vc_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_cp6_vc

0x2b68,	// (0x00016003) list_midp_pane_ParamLimits

0x3fc9,	// (0x00017464) scroll_pane_cp16_ParamLimits

0x3fc9,	// (0x00017464) scroll_pane_cp16

0x2bbe,	// (0x00016059) button_value_adjust_pane_ParamLimits

0x2bbe,	// (0x00016059) button_value_adjust_pane

0xbc8c,	// (0x0001f127) button_value_adjust_pane_cp6_ParamLimits

0xbc8c,	// (0x0001f127) button_value_adjust_pane_cp6

0xbdc8,	// (0x0001f263) settings_code_pane_cp_ParamLimits

0xbdc8,	// (0x0001f263) settings_code_pane_cp

0xc72c,	// (0x0001fbc7) cell_touch_pane_g1

0xc72c,	// (0x0001fbc7) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00022b74) cell_touch_pane_g

0xbf6a,	// (0x0001f405) cell_touch_pane_cp_ParamLimits

0xbf6a,	// (0x0001f405) cell_touch_pane_cp

0xbf86,	// (0x0001f421) cell_touch_pane_ParamLimits

0xbf86,	// (0x0001f421) cell_touch_pane

0xc72c,	// (0x0001fbc7) scroll_sc2_down_pane_g1

0xc72c,	// (0x0001fbc7) scroll_sc2_up_pane_g1

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp4_vc

0x43a7,	// (0x00017842) list_set_graphic_pane_vc_g1_ParamLimits

0x43a7,	// (0x00017842) list_set_graphic_pane_vc_g1

0x43b3,	// (0x0001784e) list_set_graphic_pane_vc_g2_ParamLimits

0x43b3,	// (0x0001784e) list_set_graphic_pane_vc_g2

0x0001,

0xf9d0,	// (0x00022e6b) list_set_graphic_pane_vc_g_ParamLimits

0xf9d0,	// (0x00022e6b) list_set_graphic_pane_vc_g

0x43bf,	// (0x0001785a) text_primary_small_cp13_vc_ParamLimits

0x43bf,	// (0x0001785a) text_primary_small_cp13_vc

0x43d7,	// (0x00017872) list_set_graphic_pane_vc_ParamLimits

0x43d7,	// (0x00017872) list_set_graphic_pane_vc

0xc736,	// (0x0001fbd1) input_focus_pane_cp2_vc

0xc72c,	// (0x0001fbc7) setting_code_pane_vc_g1

0xc7a9,	// (0x0001fc44) setting_code_pane_vc_t1

0x43ea,	// (0x00017885) set_text_pane_vc_t1_ParamLimits

0x43ea,	// (0x00017885) set_text_pane_vc_t1

0xc736,	// (0x0001fbd1) input_focus_pane_cp1_vc

0x440b,	// (0x000178a6) list_set_text_pane_vc

0xc72c,	// (0x0001fbc7) setting_text_pane_vc_g1

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp2_vc

0xc7a0,	// (0x0001fc3b) setting_slider_graphic_pane_vc_g1

0x4415,	// (0x000178b0) setting_slider_graphic_pane_vc_t1

0x4427,	// (0x000178c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d5,	// (0x00022e70) setting_slider_graphic_pane_vc_t

0x4439,	// (0x000178d4) slider_set_pane_cp_vc

0x4443,	// (0x000178de) slider_set_pane_vc_g1

0x444c,	// (0x000178e7) slider_set_pane_vc_g2

0x0006,

0xf9da,	// (0x00022e75) slider_set_pane_vc_g

0xe504,	// (0x0002199f) set_opt_bg_pane_g1_copy1

0xe50c,	// (0x000219a7) set_opt_bg_pane_g2_copy1

0x4478,	// (0x00017913) set_opt_bg_pane_g3_copy1

0xe51c,	// (0x000219b7) set_opt_bg_pane_g4_copy1

0xe524,	// (0x000219bf) set_opt_bg_pane_g5_copy1

0xe52c,	// (0x000219c7) set_opt_bg_pane_g6_copy1

0x4482,	// (0x0001791d) set_opt_bg_pane_g7_copy1

0x448c,	// (0x00017927) set_opt_bg_pane_g8_copy1

0x4496,	// (0x00017931) set_opt_bg_pane_g9_copy1

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp_vc

0x44a0,	// (0x0001793b) setting_slider_pane_vc_t1

0x44af,	// (0x0001794a) setting_slider_pane_vc_t2

0x44c1,	// (0x0001795c) setting_slider_pane_vc_t3

0x0002,

0xf9e9,	// (0x00022e84) setting_slider_pane_vc_t

0x44d3,	// (0x0001796e) slider_set_pane_vc

0xedb5,	// (0x00022250) volume_set_pane_vc_g1

0xef63,	// (0x000223fe) volume_set_pane_vc_g2

0xef6c,	// (0x00022407) volume_set_pane_vc_g3

0xef75,	// (0x00022410) volume_set_pane_vc_g4

0xef7e,	// (0x00022419) volume_set_pane_vc_g5

0xef87,	// (0x00022422) volume_set_pane_vc_g6

0xef90,	// (0x0002242b) volume_set_pane_vc_g7

0xef99,	// (0x00022434) volume_set_pane_vc_g8

0xefa2,	// (0x0002243d) volume_set_pane_vc_g9

0xefab,	// (0x00022446) volume_set_pane_vc_g10

0x0009,

0xf9f0,	// (0x00022e8b) volume_set_pane_vc_g

0x44dd,	// (0x00017978) volume_set_pane_vc

0x44e7,	// (0x00017982) button_value_adjust_pane_cp1_vc

0x44f1,	// (0x0001798c) list_highlight_pane_cp2_vc

0x44fa,	// (0x00017995) list_set_pane_vc_ParamLimits

0x44fa,	// (0x00017995) list_set_pane_vc

0x4568,	// (0x00017a03) main_pane_set_vc_t1_ParamLimits

0x4568,	// (0x00017a03) main_pane_set_vc_t1

0x457d,	// (0x00017a18) main_pane_set_vc_t2_ParamLimits

0x457d,	// (0x00017a18) main_pane_set_vc_t2

0x458f,	// (0x00017a2a) main_pane_set_vc_t3_ParamLimits

0x458f,	// (0x00017a2a) main_pane_set_vc_t3

0x45a3,	// (0x00017a3e) main_pane_set_vc_t4_ParamLimits

0x45a3,	// (0x00017a3e) main_pane_set_vc_t4

0x0003,

0xfa05,	// (0x00022ea0) main_pane_set_vc_t_ParamLimits

0xfa05,	// (0x00022ea0) main_pane_set_vc_t

0x45b7,	// (0x00017a52) setting_code_pane_vc_ParamLimits

0x45b7,	// (0x00017a52) setting_code_pane_vc

0x45c8,	// (0x00017a63) setting_slider_graphic_pane_vc

0x45c8,	// (0x00017a63) setting_slider_pane_vc

0x45c8,	// (0x00017a63) setting_text_pane_vc

0x45c8,	// (0x00017a63) setting_volume_pane_vc

0x45d2,	// (0x00017a6d) scroll_pane_cp121_vc

0xe3cb,	// (0x00021866) set_content_pane_vc

0x48bd,	// (0x00017d58) button_value_adjust_pane_g1

0x48c6,	// (0x00017d61) button_value_adjust_pane_g2

0x0001,

0xfa5f,	// (0x00022efa) button_value_adjust_pane_g

0x48cf,	// (0x00017d6a) form_field_slider_wide_pane_vc_t1_ParamLimits

0x48cf,	// (0x00017d6a) form_field_slider_wide_pane_vc_t1

0x48e1,	// (0x00017d7c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x48e1,	// (0x00017d7c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa64,	// (0x00022eff) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa64,	// (0x00022eff) form_field_slider_wide_pane_vc_t

0xc784,	// (0x0001fc1f) input_focus_pane_cp10_vc_ParamLimits

0xc784,	// (0x0001fc1f) input_focus_pane_cp10_vc

0x490d,	// (0x00017da8) slider_cont_pane_cp1_vc_ParamLimits

0x490d,	// (0x00017da8) slider_cont_pane_cp1_vc

0x491f,	// (0x00017dba) slider_form_pane_g1_cp2

0x444c,	// (0x000178e7) slider_form_pane_g2_cp2

0x494c,	// (0x00017de7) form_field_slider_pane_vc_t3

0x495a,	// (0x00017df5) form_field_slider_pane_vc_t4

0x4968,	// (0x00017e03) slider_form_pane_vc_ParamLimits

0x4968,	// (0x00017e03) slider_form_pane_vc

0x4975,	// (0x00017e10) form_field_slider_pane_vc_t1_ParamLimits

0x4975,	// (0x00017e10) form_field_slider_pane_vc_t1

0x48e1,	// (0x00017d7c) form_field_slider_pane_vc_t2_ParamLimits

0x48e1,	// (0x00017d7c) form_field_slider_pane_vc_t2

0x0001,

0xfa76,	// (0x00022f11) form_field_slider_pane_vc_t_ParamLimits

0xfa76,	// (0x00022f11) form_field_slider_pane_vc_t

0xc784,	// (0x0001fc1f) input_focus_pane_cp9_vc_ParamLimits

0xc784,	// (0x0001fc1f) input_focus_pane_cp9_vc

0x498b,	// (0x00017e26) slider_cont_pane_vc_ParamLimits

0x498b,	// (0x00017e26) slider_cont_pane_vc

0x499f,	// (0x00017e3a) list_form_graphic_pane_cp_vc_ParamLimits

0x499f,	// (0x00017e3a) list_form_graphic_pane_cp_vc

0x2815,	// (0x00015cb0) form_field_popup_wide_pane_vc_g1

0x49b4,	// (0x00017e4f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x49b4,	// (0x00017e4f) form_field_popup_wide_pane_vc_t1

0xe449,	// (0x000218e4) input_focus_pane_cp8_vc_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_cp8_vc

0x49f9,	// (0x00017e94) list_form_wide_pane_vc_ParamLimits

0x49f9,	// (0x00017e94) list_form_wide_pane_vc

0x4a05,	// (0x00017ea0) list_form_graphic_pane_vc_g1

0x4a0d,	// (0x00017ea8) list_form_graphic_pane_vc_t1_ParamLimits

0x4a0d,	// (0x00017ea8) list_form_graphic_pane_vc_t1

0xc792,	// (0x0001fc2d) list_highlight_pane_cp5_vc_ParamLimits

0xc792,	// (0x0001fc2d) list_highlight_pane_cp5_vc

0x4a29,	// (0x00017ec4) list_form_graphic_pane_vc_ParamLimits

0x4a29,	// (0x00017ec4) list_form_graphic_pane_vc

0x2815,	// (0x00015cb0) form_field_popup_pane_vc_g1

0x4a3f,	// (0x00017eda) form_field_popup_pane_vc_t1_ParamLimits

0x4a3f,	// (0x00017eda) form_field_popup_pane_vc_t1

0xe449,	// (0x000218e4) input_focus_pane_cp7_vc_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_cp7_vc

0x4a56,	// (0x00017ef1) list_form_pane_vc_ParamLimits

0x4a56,	// (0x00017ef1) list_form_pane_vc

0x4a62,	// (0x00017efd) data_form_pane_vc_t1_ParamLimits

0x4a62,	// (0x00017efd) data_form_pane_vc_t1

0xe504,	// (0x0002199f) input_focus_pane_vc_g1

0xe50c,	// (0x000219a7) input_focus_pane_vc_g2

0xe514,	// (0x000219af) input_focus_pane_vc_g3

0xe51c,	// (0x000219b7) input_focus_pane_vc_g4

0xe524,	// (0x000219bf) input_focus_pane_vc_g5

0xe52c,	// (0x000219c7) input_focus_pane_vc_g6

0xe534,	// (0x000219cf) input_focus_pane_vc_g7

0xe53c,	// (0x000219d7) input_focus_pane_vc_g8

0xe544,	// (0x000219df) input_focus_pane_vc_g9

0xc72c,	// (0x0001fbc7) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00022afd) input_focus_pane_vc_g

0x2809,	// (0x00015ca4) data_form_pane_vc_ParamLimits

0x2809,	// (0x00015ca4) data_form_pane_vc

0x2815,	// (0x00015cb0) form_field_data_pane_vc_g1

0x4a7f,	// (0x00017f1a) form_field_data_pane_vc_t1_ParamLimits

0x4a7f,	// (0x00017f1a) form_field_data_pane_vc_t1

0xe449,	// (0x000218e4) input_focus_pane_vc_ParamLimits

0xe449,	// (0x000218e4) input_focus_pane_vc

0x4a99,	// (0x00017f34) button_value_adjust_pane_cp3_vc

0x4aa1,	// (0x00017f3c) button_value_adjust_pane_cp5_vc

0x4aa9,	// (0x00017f44) form_field_data_pane_vc_ParamLimits

0x4aa9,	// (0x00017f44) form_field_data_pane_vc

0x4ac4,	// (0x00017f5f) form_field_data_pane_vc_cp2

0x4acc,	// (0x00017f67) form_field_data_wide_pane_vc_ParamLimits

0x4acc,	// (0x00017f67) form_field_data_wide_pane_vc

0x4ae6,	// (0x00017f81) form_field_data_wide_pane_vc_cp2

0x4aee,	// (0x00017f89) form_field_popup_pane_vc_ParamLimits

0x4aee,	// (0x00017f89) form_field_popup_pane_vc

0x4b09,	// (0x00017fa4) form_field_popup_wide_pane_vc_ParamLimits

0x4b09,	// (0x00017fa4) form_field_popup_wide_pane_vc

0x4b23,	// (0x00017fbe) form_field_slider_pane_vc_ParamLimits

0x4b23,	// (0x00017fbe) form_field_slider_pane_vc

0x4b36,	// (0x00017fd1) form_field_slider_wide_pane_vc_ParamLimits

0x4b36,	// (0x00017fd1) form_field_slider_wide_pane_vc

0xbfa4,	// (0x0001f43f) grid_touch_1_pane_ParamLimits

0xbfa4,	// (0x0001f43f) grid_touch_1_pane

0xbfb8,	// (0x0001f453) grid_touch_2_pane_ParamLimits

0xbfb8,	// (0x0001f453) grid_touch_2_pane

0x4c1c,	// (0x000180b7) touch_pane_g1_ParamLimits

0x4c1c,	// (0x000180b7) touch_pane_g1

0x4b6f,	// (0x0001800a) cell_app_pane_cp_wide_ParamLimits

0x4b6f,	// (0x0001800a) cell_app_pane_cp_wide

0x4b80,	// (0x0001801b) grid_popup_fast_wide_pane_ParamLimits

0x4b80,	// (0x0001801b) grid_popup_fast_wide_pane

0x4b94,	// (0x0001802f) scroll_pane_cp19_ParamLimits

0x4b94,	// (0x0001802f) scroll_pane_cp19

0xc736,	// (0x0001fbd1) bg_popup_window_pane_cp20

0x4ba8,	// (0x00018043) listscroll_popup_fast_wide_pane

0xbfe4,	// (0x0001f47f) grid_indicator_nsta_pane

0x4bc2,	// (0x0001805d) clock_nsta_pane_g1

0x4bcb,	// (0x00018066) clock_nsta_pane_t1

0xbff0,	// (0x0001f48b) cell_indicator_nsta_pane_ParamLimits

0xbff0,	// (0x0001f48b) cell_indicator_nsta_pane

0x4c1c,	// (0x000180b7) cell_indicator_nsta_pane_g1

0xc00b,	// (0x0001f4a6) cell_indicator_nsta_pane_g2

0x0001,

0xfa87,	// (0x00022f22) cell_indicator_nsta_pane_g

0x4c3d,	// (0x000180d8) clock_nsta_pane_cp

0x4c46,	// (0x000180e1) indicator_nsta_pane_cp

0x4c50,	// (0x000180eb) nsta_clock_indic_pane_g1

0xc7e8,	// (0x0001fc83) grid_indicator_pane

0x163f,	// (0x00014ada) scroll_pane_cp29

0xe91f,	// (0x00021dba) indicator_nsta_pane_cp2_ParamLimits

0xe91f,	// (0x00021dba) indicator_nsta_pane_cp2

0xc792,	// (0x0001fc2d) main_apps_wheel_pane

0x2a25,	// (0x00015ec0) form_midp_field_text_pane_ParamLimits

0x2b74,	// (0x0001600f) scroll_bar_cp050_ParamLimits

0x4ca9,	// (0x00018144) cell_indicator_pane_ParamLimits

0x4ca9,	// (0x00018144) cell_indicator_pane

0x4cc1,	// (0x0001815c) cell_indicator_pane_g1

0xc018,	// (0x0001f4b3) grid_wheel_folder_pane_ParamLimits

0xc018,	// (0x0001f4b3) grid_wheel_folder_pane

0xc026,	// (0x0001f4c1) list_wheel_apps_pane_ParamLimits

0xc026,	// (0x0001f4c1) list_wheel_apps_pane

0xc034,	// (0x0001f4cf) main_apps_wheel_pane_g1_ParamLimits

0xc034,	// (0x0001f4cf) main_apps_wheel_pane_g1

0xc044,	// (0x0001f4df) main_apps_wheel_pane_g2_ParamLimits

0xc044,	// (0x0001f4df) main_apps_wheel_pane_g2

0x0001,

0xfaa3,	// (0x00022f3e) main_apps_wheel_pane_g_ParamLimits

0xfaa3,	// (0x00022f3e) main_apps_wheel_pane_g

0xc054,	// (0x0001f4ef) main_apps_wheel_pane_t1_ParamLimits

0xc054,	// (0x0001f4ef) main_apps_wheel_pane_t1

0xc06c,	// (0x0001f507) list_wheel_apps_pane_g1

0xc074,	// (0x0001f50f) list_wheel_apps_pane_g2

0xc07c,	// (0x0001f517) list_wheel_apps_pane_g3

0xc084,	// (0x0001f51f) list_wheel_apps_pane_g4

0xc08c,	// (0x0001f527) list_wheel_apps_pane_g5

0x0004,

0xfaa8,	// (0x00022f43) list_wheel_apps_pane_g

0x1c49,	// (0x000150e4) navi_icon_text_pane

0xb5c1,	// (0x0001ea5c) aid_fill_nsta

0xc0a9,	// (0x0001f544) navi_icon_text_pane_g1

0xc0b5,	// (0x0001f550) navi_icon_text_pane_t1

0x1ad4,	// (0x00014f6f) list_set_graphic_pane_t1_ParamLimits

0x1ad4,	// (0x00014f6f) list_set_graphic_pane_t1

0x32e1,	// (0x0001677c) popup_midp_note_alarm_window_t6_ParamLimits

0x32e1,	// (0x0001677c) popup_midp_note_alarm_window_t6

0x32f3,	// (0x0001678e) popup_midp_note_alarm_window_t7_ParamLimits

0x32f3,	// (0x0001678e) popup_midp_note_alarm_window_t7

0x3305,	// (0x000167a0) popup_midp_note_alarm_window_t8_ParamLimits

0x3305,	// (0x000167a0) popup_midp_note_alarm_window_t8

0x3317,	// (0x000167b2) popup_midp_note_alarm_window_t9_ParamLimits

0x3317,	// (0x000167b2) popup_midp_note_alarm_window_t9

0x3329,	// (0x000167c4) popup_midp_note_alarm_window_t10_ParamLimits

0x3329,	// (0x000167c4) popup_midp_note_alarm_window_t10

0x333b,	// (0x000167d6) popup_midp_note_alarm_window_t11_ParamLimits

0x333b,	// (0x000167d6) popup_midp_note_alarm_window_t11

0x334d,	// (0x000167e8) scroll_pane_cp17_ParamLimits

0x334d,	// (0x000167e8) scroll_pane_cp17

0xedb5,	// (0x00022250) volume_small_pane_cp_g1

0xefb4,	// (0x0002244f) volume_small_pane_cp_g2

0xefbd,	// (0x00022458) volume_small_pane_cp_g3

0xefc6,	// (0x00022461) volume_small_pane_cp_g4

0xefcf,	// (0x0002246a) volume_small_pane_cp_g5

0xefd8,	// (0x00022473) volume_small_pane_cp_g6

0xefe1,	// (0x0002247c) volume_small_pane_cp_g7

0xefea,	// (0x00022485) volume_small_pane_cp_g8

0xeff3,	// (0x0002248e) volume_small_pane_cp_g9

0xeffc,	// (0x00022497) volume_small_pane_cp_g10

0x1eb6,	// (0x00015351) midp_ticker_pane_g1_ParamLimits

0x1ec2,	// (0x0001535d) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00022bc9) midp_ticker_pane_g_ParamLimits

0xb4cf,	// (0x0001e96a) midp_ticker_pane_t1_ParamLimits

0xb5e5,	// (0x0001ea80) aid_fill_nsta_2

0x2b60,	// (0x00015ffb) list_form2_midp_pane

0x3d39,	// (0x000171d4) midp_editing_number_pane_ParamLimits

0x3d48,	// (0x000171e3) midp_ticker_pane_ParamLimits

0x4db4,	// (0x0001824f) form2_midp_field_pane

0x4dd8,	// (0x00018273) scroll_pane_cp51

0x4df8,	// (0x00018293) form2_midp_button_pane_ParamLimits

0x4df8,	// (0x00018293) form2_midp_button_pane

0x4e0a,	// (0x000182a5) form2_midp_content_pane_ParamLimits

0x4e0a,	// (0x000182a5) form2_midp_content_pane

0x4e24,	// (0x000182bf) form2_midp_field_choice_group_pane

0x4e2c,	// (0x000182c7) form2_midp_field_pane_g1

0x4e34,	// (0x000182cf) form2_midp_field_pane_g2

0x4e3c,	// (0x000182d7) form2_midp_field_pane_g3

0x4e44,	// (0x000182df) form2_midp_field_pane_g4

0x0003,

0xfacd,	// (0x00022f68) form2_midp_field_pane_g

0x4e4c,	// (0x000182e7) form2_midp_gauge_slider_pane

0x4e54,	// (0x000182ef) form2_midp_gauge_wait_pane

0x4e5c,	// (0x000182f7) form2_midp_image_pane_ParamLimits

0x4e5c,	// (0x000182f7) form2_midp_image_pane

0x4e77,	// (0x00018312) form2_midp_label_pane_ParamLimits

0x4e77,	// (0x00018312) form2_midp_label_pane

0xc0e3,	// (0x0001f57e) form2_midp_label_pane_cp_ParamLimits

0xc0e3,	// (0x0001f57e) form2_midp_label_pane_cp

0x4eb7,	// (0x00018352) form2_midp_string_pane_ParamLimits

0x4eb7,	// (0x00018352) form2_midp_string_pane

0x4ec9,	// (0x00018364) form2_midp_text_pane_ParamLimits

0x4ec9,	// (0x00018364) form2_midp_text_pane

0x4eea,	// (0x00018385) form2_midp_time_pane

0x4efa,	// (0x00018395) input_focus_pane_cp51_ParamLimits

0x4efa,	// (0x00018395) input_focus_pane_cp51

0x4f12,	// (0x000183ad) form2_midp_label_pane_t1_ParamLimits

0x4f12,	// (0x000183ad) form2_midp_label_pane_t1

0x4f58,	// (0x000183f3) form2_mdip_text_pane_t1_ParamLimits

0x4f58,	// (0x000183f3) form2_mdip_text_pane_t1

0x4f77,	// (0x00018412) form2_midp_time_pane_t1

0x4f92,	// (0x0001842d) form2_midp_gauge_slider_pane_t1

0xc104,	// (0x0001f59f) form2_midp_gauge_slider_pane_t2

0xc116,	// (0x0001f5b1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad6,	// (0x00022f71) form2_midp_gauge_slider_pane_t

0x4fc8,	// (0x00018463) form2_midp_slider_pane

0x4fd4,	// (0x0001846f) form2_midp_gauge_wait_pane_t1

0x4fe2,	// (0x0001847d) form2_midp_wait_pane_ParamLimits

0x4fe2,	// (0x0001847d) form2_midp_wait_pane

0x285c,	// (0x00015cf7) list_single_2graphic_pane_cp4_ParamLimits

0x285c,	// (0x00015cf7) list_single_2graphic_pane_cp4

0xc128,	// (0x0001f5c3) list_single_midp_graphic_pane_cp_ParamLimits

0xc128,	// (0x0001f5c3) list_single_midp_graphic_pane_cp

0xc736,	// (0x0001fbd1) list_highlight_pane_cp20

0x5026,	// (0x000184c1) list_single_2graphic_pane_g1_cp4

0x4249,	// (0x000176e4) list_single_2graphic_pane_g2_cp4

0x502e,	// (0x000184c9) list_single_2graphic_pane_t1_cp4

0xc792,	// (0x0001fc2d) list_highlight_pane_cp21

0x503d,	// (0x000184d8) list_single_midp_graphic_pane_g4_cp

0x504c,	// (0x000184e7) list_single_midp_graphic_pane_t1_cp

0xc149,	// (0x0001f5e4) form2_mdip_string_pane_t1_ParamLimits

0xc149,	// (0x0001f5e4) form2_mdip_string_pane_t1

0xc736,	// (0x0001fbd1) bg_wml_button_pane_cp2

0xc72c,	// (0x0001fbc7) form2_midp_image_pane_g1

0xe369,	// (0x00021804) list_double_large_graphic_pane_g5_ParamLimits

0xe369,	// (0x00021804) list_double_large_graphic_pane_g5

0xb42b,	// (0x0001e8c6) midp_form_pane_ParamLimits

0xc792,	// (0x0001fc2d) main_apps_wheel_pane_ParamLimits

0x9c72,	// (0x0001d10d) popup_preview_window_ParamLimits

0x9c72,	// (0x0001d10d) popup_preview_window

0xebfb,	// (0x00022096) popup_touch_info_window_ParamLimits

0xebfb,	// (0x00022096) popup_touch_info_window

0xec1d,	// (0x000220b8) popup_touch_menu_window_ParamLimits

0xec1d,	// (0x000220b8) popup_touch_menu_window

0xc722,	// (0x0001fbbd) bg_popup_sub_pane_cp6

0x50fd,	// (0x00018598) list_touch_menu_pane

0x5105,	// (0x000185a0) list_single_touch_menu_pane_ParamLimits

0x5105,	// (0x000185a0) list_single_touch_menu_pane

0x511d,	// (0x000185b8) list_single_touch_menu_pane_t1

0xc792,	// (0x0001fc2d) bg_popup_sub_pane_cp7_ParamLimits

0xc792,	// (0x0001fc2d) bg_popup_sub_pane_cp7

0x512b,	// (0x000185c6) heading_sub_pane

0x5133,	// (0x000185ce) list_touch_info_pane_ParamLimits

0x5133,	// (0x000185ce) list_touch_info_pane

0x5142,	// (0x000185dd) list_single_touch_info_pane_ParamLimits

0x5142,	// (0x000185dd) list_single_touch_info_pane

0x5154,	// (0x000185ef) list_single_touch_info_pane_t1

0x5162,	// (0x000185fd) list_single_touch_info_pane_t2

0x0001,

0xfae4,	// (0x00022f7f) list_single_touch_info_pane_t

0x1dd8,	// (0x00015273) bg_popup_heading_pane_cp

0x5170,	// (0x0001860b) heading_sub_pane_t1

0x27a3,	// (0x00015c3e) bg_popup_preview_window_pane_cp_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_preview_window_pane_cp

0x512b,	// (0x000185c6) heading_preview_pane

0x5133,	// (0x000185ce) list_preview_pane_ParamLimits

0x5133,	// (0x000185ce) list_preview_pane

0x517e,	// (0x00018619) popup_preview_window_g1

0x5142,	// (0x000185dd) list_single_preview_pane_ParamLimits

0x5142,	// (0x000185dd) list_single_preview_pane

0x5186,	// (0x00018621) list_single_preview_pane_g1

0x518e,	// (0x00018629) list_single_preview_pane_t1

0x5154,	// (0x000185ef) list_single_preview_pane_t2

0x0001,

0xfae9,	// (0x00022f84) list_single_preview_pane_t

0x519c,	// (0x00018637) bg_popup_heading_pane_cp2_ParamLimits

0x519c,	// (0x00018637) bg_popup_heading_pane_cp2

0x51b2,	// (0x0001864d) heading_preview_pane_g1

0x51ba,	// (0x00018655) heading_preview_pane_t1_ParamLimits

0x51ba,	// (0x00018655) heading_preview_pane_t1

0xc7ff,	// (0x0001fc9a) soft_indicator_pane_t1_ParamLimits

0xe335,	// (0x000217d0) scroll_pane_ParamLimits

0x153b,	// (0x000149d6) scroll_sc2_left_pane

0x1544,	// (0x000149df) scroll_sc2_right_pane

0x1563,	// (0x000149fe) scroll_bg_pane_g1_ParamLimits

0x1578,	// (0x00014a13) scroll_bg_pane_g2_ParamLimits

0x1590,	// (0x00014a2b) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00022b54) scroll_bg_pane_g_ParamLimits

0x1563,	// (0x000149fe) scroll_handle_pane_g1_ParamLimits

0x15b2,	// (0x00014a4d) scroll_handle_pane_g2_ParamLimits

0x1590,	// (0x00014a2b) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00022b5b) scroll_handle_pane_g_ParamLimits

0xeb1e,	// (0x00021fb9) popup_choice_list_window_ParamLimits

0xeb1e,	// (0x00021fb9) popup_choice_list_window

0x258f,	// (0x00015a2a) choice_list_pane

0x264b,	// (0x00015ae6) cell_toolbar_pane_t1

0x2673,	// (0x00015b0e) toolbar_button_pane_ParamLimits

0x3817,	// (0x00016cb2) ai_gene_pane_1_t2_ParamLimits

0x3817,	// (0x00016cb2) ai_gene_pane_1_t2

0x0001,

0xf8e3,	// (0x00022d7e) ai_gene_pane_1_t_ParamLimits

0xf8e3,	// (0x00022d7e) ai_gene_pane_1_t

0x51d7,	// (0x00018672) scroll_sc2_left_pane_g1

0x51d7,	// (0x00018672) scroll_sc2_right_pane_g1

0x2107,	// (0x000155a2) bg_popup_sub_pane_cp10

0x51e1,	// (0x0001867c) list_choice_list_pane

0x51fa,	// (0x00018695) list_single_choice_list_pane_ParamLimits

0x51fa,	// (0x00018695) list_single_choice_list_pane

0x5212,	// (0x000186ad) list_single_choice_list_pane_g1

0xe63c,	// (0x00021ad7) list_single_choice_list_pane_t1_ParamLimits

0xe63c,	// (0x00021ad7) list_single_choice_list_pane_t1

0x521a,	// (0x000186b5) choice_list_pane_g1

0x5222,	// (0x000186bd) choice_list_pane_t1

0xc722,	// (0x0001fbbd) input_focus_pane_cp11

0x1414,	// (0x000148af) title_pane_stacon_g2_ParamLimits

0x1414,	// (0x000148af) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00022b3a) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00022b3a) title_pane_stacon_g

0x1dd8,	// (0x00015273) cursor_press_pane

0x98e9,	// (0x0001cd84) popup_fep_hwr_window_ParamLimits

0x98e9,	// (0x0001cd84) popup_fep_hwr_window

0xeb88,	// (0x00022023) popup_fep_vkb_window_ParamLimits

0xeb88,	// (0x00022023) popup_fep_vkb_window

0x5230,	// (0x000186cb) cursor_press_pane_g1

0x0002,

0xfb12,	// (0x00022fad) fep_vkb_side_pane_g_ParamLimits

0xf030,	// (0x000224cb) fep_hwr_candidate_pane_ParamLimits

0xf030,	// (0x000224cb) fep_hwr_candidate_pane

0xf05a,	// (0x000224f5) fep_hwr_side_pane_ParamLimits

0xf05a,	// (0x000224f5) fep_hwr_side_pane

0xf07c,	// (0x00022517) fep_hwr_top_pane_ParamLimits

0xf07c,	// (0x00022517) fep_hwr_top_pane

0xf094,	// (0x0002252f) fep_hwr_write_pane_ParamLimits

0xf094,	// (0x0002252f) fep_hwr_write_pane

0xfb12,	// (0x00022fad) fep_vkb_side_pane_g

0x5238,	// (0x000186d3) fep_hwr_top_pane_g1

0x524a,	// (0x000186e5) fep_hwr_top_pane_g2

0xf0ce,	// (0x00022569) fep_hwr_top_pane_g3

0x0002,

0xfaee,	// (0x00022f89) fep_hwr_top_pane_g

0xf0e3,	// (0x0002257e) fep_hwr_top_text_pane

0x1707,	// (0x00014ba2) fep_hwr_top_text_pane_g1

0x5280,	// (0x0001871b) fep_hwr_top_text_pane_t1

0xf172,	// (0x0002260d) fep_hwr_candidate_pane_g1

0x54cb,	// (0x00018966) fep_vkb_keypad_pane_g3_ParamLimits

0x54cb,	// (0x00018966) fep_vkb_keypad_pane_g3

0x54f7,	// (0x00018992) fep_vkb_keypad_pane_g4_ParamLimits

0x54f7,	// (0x00018992) fep_vkb_keypad_pane_g4

0x556e,	// (0x00018a09) fep_vkb_bottom_pane_g2_ParamLimits

0x556e,	// (0x00018a09) fep_vkb_bottom_pane_g2

0x0001,

0xfb19,	// (0x00022fb4) fep_vkb_bottom_pane_g_ParamLimits

0xfb19,	// (0x00022fb4) fep_vkb_bottom_pane_g

0x51d7,	// (0x00018672) cell_vkb_side_pane_g2

0x0001,

0xfb23,	// (0x00022fbe) cell_vkb_side_pane_g

0x55f9,	// (0x00018a94) cell_vkb_side_pane_t1

0x5607,	// (0x00018aa2) cell_vkb_side_pane_t1_copy1

0x51d7,	// (0x00018672) bg_fep_vkb_candidate_pane_g2

0x574b,	// (0x00018be6) cell_vkb_candidate_pane_ParamLimits

0x528e,	// (0x00018729) aid_size_cell_vkb_ParamLimits

0x528e,	// (0x00018729) aid_size_cell_vkb

0x574b,	// (0x00018be6) cell_vkb_candidate_pane

0xf199,	// (0x00022634) bg_popup_fep_shadow_pane_g1

0xc1e5,	// (0x0001f680) fep_vkb_bottom_pane_ParamLimits

0xc1e5,	// (0x0001f680) fep_vkb_bottom_pane

0x535d,	// (0x000187f8) fep_vkb_candidate_pane_ParamLimits

0x535d,	// (0x000187f8) fep_vkb_candidate_pane

0xc211,	// (0x0001f6ac) fep_vkb_keypad_pane_ParamLimits

0xc211,	// (0x0001f6ac) fep_vkb_keypad_pane

0xc238,	// (0x0001f6d3) fep_vkb_side_pane_ParamLimits

0xc238,	// (0x0001f6d3) fep_vkb_side_pane

0xc274,	// (0x0001f70f) fep_vkb_top_pane_ParamLimits

0xc274,	// (0x0001f70f) fep_vkb_top_pane

0x5424,	// (0x000188bf) fep_vkb_top_pane_g1_ParamLimits

0x5424,	// (0x000188bf) fep_vkb_top_pane_g1

0x5433,	// (0x000188ce) fep_vkb_top_pane_g2_ParamLimits

0x5433,	// (0x000188ce) fep_vkb_top_pane_g2

0x5442,	// (0x000188dd) fep_vkb_top_pane_g3_ParamLimits

0x5442,	// (0x000188dd) fep_vkb_top_pane_g3

0x0003,

0xfb09,	// (0x00022fa4) fep_vkb_top_pane_g_ParamLimits

0xfb09,	// (0x00022fa4) fep_vkb_top_pane_g

0x5460,	// (0x000188fb) fep_vkb_top_text_pane_ParamLimits

0x5460,	// (0x000188fb) fep_vkb_top_text_pane

0xc2b0,	// (0x0001f74b) fep_vkb_side_pane_g1_ParamLimits

0xc2b0,	// (0x0001f74b) fep_vkb_side_pane_g1

0x54ba,	// (0x00018955) grid_vkb_side_pane_ParamLimits

0x54ba,	// (0x00018955) grid_vkb_side_pane

0xf1a1,	// (0x0002263c) bg_popup_fep_shadow_pane_g2

0xf1aa,	// (0x00022645) bg_popup_fep_shadow_pane_g3

0xf1b2,	// (0x0002264d) bg_popup_fep_shadow_pane_g4

0xf1bb,	// (0x00022656) bg_popup_fep_shadow_pane_g5

0xf1c5,	// (0x00022660) bg_popup_fep_shadow_pane_g6

0xf1cd,	// (0x00022668) bg_popup_fep_shadow_pane_g7

0xe51c,	// (0x000219b7) bg_popup_fep_shadow_pane_g8

0x5519,	// (0x000189b4) grid_vkb_keypad_number_pane_ParamLimits

0x5519,	// (0x000189b4) grid_vkb_keypad_number_pane

0x552d,	// (0x000189c8) grid_vkb_keypad_pane_ParamLimits

0x552d,	// (0x000189c8) grid_vkb_keypad_pane

0x5553,	// (0x000189ee) fep_vkb_bottom_pane_g1_ParamLimits

0x5553,	// (0x000189ee) fep_vkb_bottom_pane_g1

0x557c,	// (0x00018a17) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x557c,	// (0x00018a17) grid_vkb_keypad_bottom_left_pane

0x5591,	// (0x00018a2c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5591,	// (0x00018a2c) grid_vkb_keypad_bottom_right_pane

0x55a6,	// (0x00018a41) fep_vkb_top_text_pane_g1

0xc2f7,	// (0x0001f792) fep_vkb_top_text_pane_t1

0xc309,	// (0x0001f7a4) cell_vkb_side_pane_ParamLimits

0xc309,	// (0x0001f7a4) cell_vkb_side_pane

0x51d7,	// (0x00018672) cell_vkb_side_pane_g1

0x5615,	// (0x00018ab0) cell_vkb_keypad_pane_ParamLimits

0x5615,	// (0x00018ab0) cell_vkb_keypad_pane

0x56a2,	// (0x00018b3d) cell_vkb_keypad_pane_g1

0x0008,

0xfb36,	// (0x00022fd1) bg_popup_fep_shadow_pane_g

0xf1df,	// (0x0002267a) cell_hwr_side_pane_g1

0xf1df,	// (0x0002267a) cell_hwr_side_pane_g2

0x56ac,	// (0x00018b47) cell_vkb_keypad_pane_t1

0xc31f,	// (0x0001f7ba) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc31f,	// (0x0001f7ba) cell_vkb_keypad_bottom_left_pane

0xc334,	// (0x0001f7cf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc334,	// (0x0001f7cf) cell_vkb_keypad_bottom_right_pane

0x51d7,	// (0x00018672) cell_vkb_keypad_bottom_left_pane_g1

0x51d7,	// (0x00018672) cell_vkb_keypad_bottom_right_pane_g1

0x5710,	// (0x00018bab) cell_vkb_keypad_number_pane_ParamLimits

0x5710,	// (0x00018bab) cell_vkb_keypad_number_pane

0x572f,	// (0x00018bca) cell_vkb_keypad_number_pane_g1

0x5739,	// (0x00018bd4) cell_vkb_keypad_number_pane_g2

0x5742,	// (0x00018bdd) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb28,	// (0x00022fc3) cell_vkb_keypad_number_pane_g

0x56ac,	// (0x00018b47) cell_vkb_keypad_number_pane_t1

0x576c,	// (0x00018c07) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00022fe4) cell_hwr_side_pane_g

0x5785,	// (0x00018c20) cell_hwr_side_pane_t1

0xf1e9,	// (0x00022684) cell_hwr_side_pane_t1_copy1

0xf1f7,	// (0x00022692) cell_hwr_candidate_pane_g1

0xf226,	// (0x000226c1) cell_hwr_candidate_pane_t1

0x51d7,	// (0x00018672) cell_vkb_candidate_pane_g2

0x57c9,	// (0x00018c64) cell_vkb_candidate_pane_t1

0xed26,	// (0x000221c1) bg_popup_fep_shadow_pane_ParamLimits

0xed26,	// (0x000221c1) bg_popup_fep_shadow_pane

0xf0ae,	// (0x00022549) bg_fep_hwr_top_pane_g4

0x525c,	// (0x000186f7) bg_hwr_side_pane_g1_ParamLimits

0x525c,	// (0x000186f7) bg_hwr_side_pane_g1

0xa149,	// (0x0001d5e4) cell_hwr_side_pane_ParamLimits

0xa149,	// (0x0001d5e4) cell_hwr_side_pane

0xf0f8,	// (0x00022593) fep_hwr_write_pane_g1_ParamLimits

0xf0f8,	// (0x00022593) fep_hwr_write_pane_g1

0xf105,	// (0x000225a0) fep_hwr_write_pane_g2_ParamLimits

0xf105,	// (0x000225a0) fep_hwr_write_pane_g2

0xf112,	// (0x000225ad) fep_hwr_write_pane_g3_ParamLimits

0xf112,	// (0x000225ad) fep_hwr_write_pane_g3

0xa169,	// (0x0001d604) fep_hwr_write_pane_g4_ParamLimits

0xa169,	// (0x0001d604) fep_hwr_write_pane_g4

0x0005,

0xfaf5,	// (0x00022f90) fep_hwr_write_pane_g_ParamLimits

0xfaf5,	// (0x00022f90) fep_hwr_write_pane_g

0xf0ae,	// (0x00022549) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xf0ae,	// (0x00022549) bg_fep_hwr_candidate_pane_g2

0xf120,	// (0x000225bb) cell_hwr_candidate_pane_ParamLimits

0xf120,	// (0x000225bb) cell_hwr_candidate_pane

0xf172,	// (0x0002260d) fep_hwr_candidate_pane_g1_ParamLimits

0x52bc,	// (0x00018757) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x52bc,	// (0x00018757) bg_popup_fep_shadow_pane_cp2

0x5452,	// (0x000188ed) fep_vkb_top_pane_g4_ParamLimits

0x5452,	// (0x000188ed) fep_vkb_top_pane_g4

0x5498,	// (0x00018933) fep_vkb_side_pane_g2_ParamLimits

0x5498,	// (0x00018933) fep_vkb_side_pane_g2

0xaebd,	// (0x0001e358) list_setting_pane_t4_ParamLimits

0xaebd,	// (0x0001e358) list_setting_pane_t4

0xaf39,	// (0x0001e3d4) list_setting_number_pane_t5_ParamLimits

0xaf39,	// (0x0001e3d4) list_setting_number_pane_t5

0x173e,	// (0x00014bd9) list_double_heading_pane_cp2_ParamLimits

0x173e,	// (0x00014bd9) list_double_heading_pane_cp2

0x57d7,	// (0x00018c72) list_double_heading_pane_g1_cp2_ParamLimits

0x57d7,	// (0x00018c72) list_double_heading_pane_g1_cp2

0x57e3,	// (0x00018c7e) list_double_heading_pane_g2_cp2_ParamLimits

0x57e3,	// (0x00018c7e) list_double_heading_pane_g2_cp2

0x57f7,	// (0x00018c92) list_double_heading_pane_t1_cp2_ParamLimits

0x57f7,	// (0x00018c92) list_double_heading_pane_t1_cp2

0x580d,	// (0x00018ca8) list_double_heading_pane_t2_cp2_ParamLimits

0x580d,	// (0x00018ca8) list_double_heading_pane_t2_cp2

0xc71a,	// (0x0001fbb5) aid_value_unit2

0xdfc7,	// (0x00021462) popup_preview_fixed_window

0xc8df,	// (0x0001fd7a) bg_popup_preview_window_pane_cp02

0x581f,	// (0x00018cba) list_preview_fixed_pane

0x5865,	// (0x00018d00) list_empty_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_empty_pane_fp

0x5865,	// (0x00018d00) list_single_cale_day_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_cale_day_pane_fp

0x5865,	// (0x00018d00) list_single_graphic_heading_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_graphic_heading_pane_fp

0x5865,	// (0x00018d00) list_single_graphic_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_graphic_pane_fp

0x5865,	// (0x00018d00) list_single_heading_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_heading_pane_fp

0x5865,	// (0x00018d00) list_single_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_pane_fp

0x587e,	// (0x00018d19) list_single_pane_fp_g1_ParamLimits

0x587e,	// (0x00018d19) list_single_pane_fp_g1

0x57d7,	// (0x00018c72) list_single_pane_fp_g2_ParamLimits

0x57d7,	// (0x00018c72) list_single_pane_fp_g2

0x57e3,	// (0x00018c7e) list_single_pane_fp_g3_ParamLimits

0x57e3,	// (0x00018c7e) list_single_pane_fp_g3

0x588a,	// (0x00018d25) list_single_pane_fp_g4_ParamLimits

0x588a,	// (0x00018d25) list_single_pane_fp_g4

0x0003,

0xfb5c,	// (0x00022ff7) list_single_pane_fp_g_ParamLimits

0xfb5c,	// (0x00022ff7) list_single_pane_fp_g

0x5896,	// (0x00018d31) list_single_pane_fp_t1_ParamLimits

0x5896,	// (0x00018d31) list_single_pane_fp_t1

0x58ad,	// (0x00018d48) list_single_graphic_pane_fp_g1_ParamLimits

0x58ad,	// (0x00018d48) list_single_graphic_pane_fp_g1

0x587e,	// (0x00018d19) list_single_graphic_pane_fp_g2_ParamLimits

0x587e,	// (0x00018d19) list_single_graphic_pane_fp_g2

0x57d7,	// (0x00018c72) list_single_graphic_pane_fp_g3_ParamLimits

0x57d7,	// (0x00018c72) list_single_graphic_pane_fp_g3

0x57e3,	// (0x00018c7e) list_single_graphic_pane_fp_g4_ParamLimits

0x57e3,	// (0x00018c7e) list_single_graphic_pane_fp_g4

0x588a,	// (0x00018d25) list_single_graphic_pane_fp_g5_ParamLimits

0x588a,	// (0x00018d25) list_single_graphic_pane_fp_g5

0x0004,

0xfb65,	// (0x00023000) list_single_graphic_pane_fp_g_ParamLimits

0xfb65,	// (0x00023000) list_single_graphic_pane_fp_g

0x58b9,	// (0x00018d54) list_single_graphic_pane_fp_t1_ParamLimits

0x58b9,	// (0x00018d54) list_single_graphic_pane_fp_t1

0x58ad,	// (0x00018d48) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x58ad,	// (0x00018d48) list_single_graphic_heading_pane_fp_g1

0x587e,	// (0x00018d19) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x587e,	// (0x00018d19) list_single_graphic_heading_pane_fp_g2

0x57d7,	// (0x00018c72) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x57d7,	// (0x00018c72) list_single_graphic_heading_pane_fp_g3

0x57e3,	// (0x00018c7e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x57e3,	// (0x00018c7e) list_single_graphic_heading_pane_fp_g4

0x588a,	// (0x00018d25) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x588a,	// (0x00018d25) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00023000) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00023000) list_single_graphic_heading_pane_fp_g

0x58cf,	// (0x00018d6a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x58cf,	// (0x00018d6a) list_single_graphic_heading_pane_fp_t1

0x58e5,	// (0x00018d80) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x58e5,	// (0x00018d80) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb70,	// (0x0002300b) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb70,	// (0x0002300b) list_single_graphic_heading_pane_fp_t

0x58f7,	// (0x00018d92) list_single_cale_day_pane_fp_g1_ParamLimits

0x58f7,	// (0x00018d92) list_single_cale_day_pane_fp_g1

0x592f,	// (0x00018dca) list_single_cale_day_pane_fp_g2_ParamLimits

0x592f,	// (0x00018dca) list_single_cale_day_pane_fp_g2

0x593b,	// (0x00018dd6) list_single_cale_day_pane_fp_g3_ParamLimits

0x593b,	// (0x00018dd6) list_single_cale_day_pane_fp_g3

0x5963,	// (0x00018dfe) list_single_cale_day_pane_fp_g4_ParamLimits

0x5963,	// (0x00018dfe) list_single_cale_day_pane_fp_g4

0x5987,	// (0x00018e22) list_single_cale_day_pane_fp_g5_ParamLimits

0x5987,	// (0x00018e22) list_single_cale_day_pane_fp_g5

0x0004,

0xfb75,	// (0x00023010) list_single_cale_day_pane_fp_g_ParamLimits

0xfb75,	// (0x00023010) list_single_cale_day_pane_fp_g

0x59ab,	// (0x00018e46) list_single_cale_day_pane_fp_t1_ParamLimits

0x59ab,	// (0x00018e46) list_single_cale_day_pane_fp_t1

0x59d1,	// (0x00018e6c) list_single_cale_day_pane_fp_t2_ParamLimits

0x59d1,	// (0x00018e6c) list_single_cale_day_pane_fp_t2

0x59ea,	// (0x00018e85) list_single_cale_day_pane_fp_t3_ParamLimits

0x59ea,	// (0x00018e85) list_single_cale_day_pane_fp_t3

0x0002,

0xfb80,	// (0x0002301b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb80,	// (0x0002301b) list_single_cale_day_pane_fp_t

0x587e,	// (0x00018d19) list_empty_pane_fp_g1_ParamLimits

0x587e,	// (0x00018d19) list_empty_pane_fp_g1

0x5a03,	// (0x00018e9e) list_empty_pane_fp_t1

0x5a11,	// (0x00018eac) list_empty_pane_fp_t2

0x0001,

0xfb87,	// (0x00023022) list_empty_pane_fp_t

0x587e,	// (0x00018d19) list_single_heading_pane_fp_g1_ParamLimits

0x587e,	// (0x00018d19) list_single_heading_pane_fp_g1

0x57d7,	// (0x00018c72) list_single_heading_pane_fp_g2_ParamLimits

0x57d7,	// (0x00018c72) list_single_heading_pane_fp_g2

0x57e3,	// (0x00018c7e) list_single_heading_pane_fp_g3_ParamLimits

0x57e3,	// (0x00018c7e) list_single_heading_pane_fp_g3

0x0002,

0xfb8c,	// (0x00023027) list_single_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x00023027) list_single_heading_pane_fp_g

0x5a1f,	// (0x00018eba) list_single_heading_pane_fp_t1_ParamLimits

0x5a1f,	// (0x00018eba) list_single_heading_pane_fp_t1

0x5a31,	// (0x00018ecc) list_single_heading_pane_fp_t2_ParamLimits

0x5a31,	// (0x00018ecc) list_single_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x0002302e) list_single_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x0002302e) list_single_heading_pane_fp_t

0x12ab,	// (0x00014746) aid_size_cell_fast

0xc8c2,	// (0x0001fd5d) soft_indicator_pane_cp1_t1

0x12e8,	// (0x00014783) cell_app_pane_cp2_ParamLimits

0x12e8,	// (0x00014783) cell_app_pane_cp2

0xf019,	// (0x000224b4) fep_hwr_candidate_drop_down_list_pane

0xf18c,	// (0x00022627) fep_hwr_candidate_pane_g3_ParamLimits

0xf18c,	// (0x00022627) fep_hwr_candidate_pane_g3

0xca90,	// (0x0001ff2b) fep_hwr_candidate_pane_g4_ParamLimits

0xca90,	// (0x0001ff2b) fep_hwr_candidate_pane_g4

0x0002,

0xfb02,	// (0x00022f9d) fep_hwr_candidate_pane_g_ParamLimits

0xfb02,	// (0x00022f9d) fep_hwr_candidate_pane_g

0x534c,	// (0x000187e7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x534c,	// (0x000187e7) fep_vkb_candidate_drop_down_list_pane

0x5774,	// (0x00018c0f) fep_vkb_candidate_pane_g3

0x577c,	// (0x00018c17) fep_vkb_candidate_pane_g4

0x0002,

0xfb2f,	// (0x00022fca) fep_vkb_candidate_pane_g

0xf1f7,	// (0x00022692) cell_hwr_candidate_pane_g1_ParamLimits

0xf205,	// (0x000226a0) cell_hwr_candidate_pane_g3_ParamLimits

0xf205,	// (0x000226a0) cell_hwr_candidate_pane_g3

0x5adf,	// (0x00018f7a) cell_hwr_candidate_pane_g4_ParamLimits

0x5adf,	// (0x00018f7a) cell_hwr_candidate_pane_g4

0x0002,

0xfb4e,	// (0x00022fe9) cell_hwr_candidate_pane_g_ParamLimits

0xfb4e,	// (0x00022fe9) cell_hwr_candidate_pane_g

0x5793,	// (0x00018c2e) cell_vkb_candidate_pane_g3_ParamLimits

0x5793,	// (0x00018c2e) cell_vkb_candidate_pane_g3

0x57ae,	// (0x00018c49) cell_vkb_candidate_pane_g4_ParamLimits

0x57ae,	// (0x00018c49) cell_vkb_candidate_pane_g4

0x5a47,	// (0x00018ee2) cell_app_pane_cp2_g1_ParamLimits

0x5a47,	// (0x00018ee2) cell_app_pane_cp2_g1

0x5a65,	// (0x00018f00) cell_app_pane_cp2_g2_ParamLimits

0x5a65,	// (0x00018f00) cell_app_pane_cp2_g2

0x0001,

0xfb98,	// (0x00023033) cell_app_pane_cp2_g_ParamLimits

0xfb98,	// (0x00023033) cell_app_pane_cp2_g

0x5a71,	// (0x00018f0c) cell_app_pane_cp2_t1_ParamLimits

0x5a71,	// (0x00018f0c) cell_app_pane_cp2_t1

0xe449,	// (0x000218e4) grid_highlight_pane_cp1_ParamLimits

0xe449,	// (0x000218e4) grid_highlight_pane_cp1

0xf244,	// (0x000226df) cell_hwr_candidate_pane_cp1_ParamLimits

0xf244,	// (0x000226df) cell_hwr_candidate_pane_cp1

0xf1f7,	// (0x00022692) fep_hwr_candidate_drop_down_list_pane_g1

0xf268,	// (0x00022703) fep_hwr_candidate_drop_down_list_pane_g2

0xf275,	// (0x00022710) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9d,	// (0x00023038) fep_hwr_candidate_drop_down_list_pane_g

0xf282,	// (0x0002271d) fep_hwr_candidate_drop_down_list_scroll_pane

0xf28b,	// (0x00022726) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf28b,	// (0x00022726) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xf298,	// (0x00022733) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf298,	// (0x00022733) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xf2a5,	// (0x00022740) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf2a5,	// (0x00022740) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xf2b2,	// (0x0002274d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf2b2,	// (0x0002274d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xf2cd,	// (0x00022768) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf2cd,	// (0x00022768) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xf2e8,	// (0x00022783) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf2e8,	// (0x00022783) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xf303,	// (0x0002279e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf303,	// (0x0002279e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xf31e,	// (0x000227b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf31e,	// (0x000227b9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba4,	// (0x0002303f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba4,	// (0x0002303f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5b00,	// (0x00018f9b) cell_vkb_candidate_pane_cp1_ParamLimits

0x5b00,	// (0x00018f9b) cell_vkb_candidate_pane_cp1

0x5452,	// (0x000188ed) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5452,	// (0x000188ed) fep_vkb_candidate_drop_down_list_pane_g1

0x5a83,	// (0x00018f1e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5a83,	// (0x00018f1e) fep_vkb_candidate_drop_down_list_pane_g2

0x5a90,	// (0x00018f2b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5a90,	// (0x00018f2b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb5,	// (0x00023050) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb5,	// (0x00023050) fep_vkb_candidate_drop_down_list_pane_g

0x5b26,	// (0x00018fc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5b26,	// (0x00018fc1) fep_vkb_candidate_drop_down_list_scroll_pane

0x5b33,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5b33,	// (0x00018fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5b40,	// (0x00018fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5b40,	// (0x00018fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5b4c,	// (0x00018fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5b4c,	// (0x00018fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5a9d,	// (0x00018f38) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a9d,	// (0x00018f38) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5abe,	// (0x00018f59) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5abe,	// (0x00018f59) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5b58,	// (0x00018ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b58,	// (0x00018ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5b79,	// (0x00019014) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5b79,	// (0x00019014) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5b9a,	// (0x00019035) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5b9a,	// (0x00019035) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbc,	// (0x00023057) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbc,	// (0x00023057) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa7c2,	// (0x0001dc5d) title_pane_g1_ParamLimits

0xa7d5,	// (0x0001dc70) title_pane_g2_ParamLimits

0xf529,	// (0x000229c4) title_pane_g_ParamLimits

0x16f7,	// (0x00014b92) aid_call2_pane

0x16ff,	// (0x00014b9a) aid_call_pane

0x1707,	// (0x00014ba2) popup_clock_analogue_window_g1

0x1707,	// (0x00014ba2) popup_clock_analogue_window_g2

0xe812,	// (0x00021cad) popup_clock_analogue_window_g3

0xe81b,	// (0x00021cb6) popup_clock_analogue_window_g4

0xc72c,	// (0x0001fbc7) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00022b69) popup_clock_analogue_window_g

0xe823,	// (0x00021cbe) popup_clock_analogue_window_t1

0xe831,	// (0x00021ccc) clock_digital_number_pane_ParamLimits

0xe831,	// (0x00021ccc) clock_digital_number_pane

0xe83d,	// (0x00021cd8) clock_digital_number_pane_cp02_ParamLimits

0xe83d,	// (0x00021cd8) clock_digital_number_pane_cp02

0xe849,	// (0x00021ce4) clock_digital_number_pane_cp03_ParamLimits

0xe849,	// (0x00021ce4) clock_digital_number_pane_cp03

0xe855,	// (0x00021cf0) clock_digital_number_pane_cp04_ParamLimits

0xe855,	// (0x00021cf0) clock_digital_number_pane_cp04

0xe861,	// (0x00021cfc) clock_digital_separator_pane_ParamLimits

0xe861,	// (0x00021cfc) clock_digital_separator_pane

0xe86d,	// (0x00021d08) popup_clock_digital_window_t1_ParamLimits

0xe86d,	// (0x00021d08) popup_clock_digital_window_t1

0xc72c,	// (0x0001fbc7) clock_digital_number_pane_g1

0xc72c,	// (0x0001fbc7) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00022b74) clock_digital_number_pane_g

0xc72c,	// (0x0001fbc7) clock_digital_separator_pane_g1

0xc72c,	// (0x0001fbc7) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00022b74) clock_digital_separator_pane_g

0xb5c1,	// (0x0001ea5c) aid_fill_nsta_ParamLimits

0xb6f9,	// (0x0001eb94) indicator_nsta_pane_ParamLimits

0x2428,	// (0x000158c3) popup_clock_analogue_window

0x2428,	// (0x000158c3) popup_clock_digital_window

0xbfe4,	// (0x0001f47f) grid_indicator_nsta_pane_ParamLimits

0x4bd9,	// (0x00018074) clock_nsta_pane_t2

0x0001,

0xfa82,	// (0x00022f1d) clock_nsta_pane_t

0xe7df,	// (0x00021c7a) aid_size_max_handle

0x969b,	// (0x0001cb36) aid_size_min_handle

0x1dd8,	// (0x00015273) editor_scroll_pane

0x5bb5,	// (0x00019050) ex_editor_pane

0xe617,	// (0x00021ab2) scroll_pane_cp13

0xe361,	// (0x000217fc) scroll_pane_cp14

0x1736,	// (0x00014bd1) scroll_pane_cp36

0xb2a4,	// (0x0001e73f) list_single_graphic_hl_pane_cp2_ParamLimits

0xb2a4,	// (0x0001e73f) list_single_graphic_hl_pane_cp2

0xbe5c,	// (0x0001f2f7) list_single_graphic_hl_pane_ParamLimits

0xbe5c,	// (0x0001f2f7) list_single_graphic_hl_pane

0x5bbd,	// (0x00019058) aid_size_min_hl_cp1

0x5bc6,	// (0x00019061) list_highlight_pane_cp34_ParamLimits

0x5bc6,	// (0x00019061) list_highlight_pane_cp34

0x5bd7,	// (0x00019072) list_single_graphic_hl_pane_g1_ParamLimits

0x5bd7,	// (0x00019072) list_single_graphic_hl_pane_g1

0xe8b6,	// (0x00021d51) list_single_graphic_hl_pane_g2_ParamLimits

0xe8b6,	// (0x00021d51) list_single_graphic_hl_pane_g2

0xe8b6,	// (0x00021d51) list_single_graphic_hl_pane_g3_ParamLimits

0xe8b6,	// (0x00021d51) list_single_graphic_hl_pane_g3

0x657c,	// (0x00019a17) list_single_graphic_hl_pane_g4_ParamLimits

0x657c,	// (0x00019a17) list_single_graphic_hl_pane_g4

0xc34f,	// (0x0001f7ea) list_single_graphic_hl_pane_g5_ParamLimits

0xc34f,	// (0x0001f7ea) list_single_graphic_hl_pane_g5

0x0004,

0xfbcd,	// (0x00023068) list_single_graphic_hl_pane_g_ParamLimits

0xfbcd,	// (0x00023068) list_single_graphic_hl_pane_g

0xc363,	// (0x0001f7fe) list_single_graphic_hl_pane_t1_ParamLimits

0xc363,	// (0x0001f7fe) list_single_graphic_hl_pane_t1

0x5c1a,	// (0x000190b5) aid_size_min_hl_cp2

0x5c23,	// (0x000190be) list_highlight_pane_cp34_cp2_ParamLimits

0x5c23,	// (0x000190be) list_highlight_pane_cp34_cp2

0x5bd7,	// (0x00019072) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5bd7,	// (0x00019072) list_single_graphic_hl_pane_g1_cp2

0x5c30,	// (0x000190cb) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5c30,	// (0x000190cb) list_single_graphic_hl_pane_g2_cp2

0x5c3c,	// (0x000190d7) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5c3c,	// (0x000190d7) list_single_graphic_hl_pane_g3_cp2

0x25f5,	// (0x00015a90) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x25f5,	// (0x00015a90) list_single_graphic_hl_pane_g4_cp2

0x5c4a,	// (0x000190e5) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5c4a,	// (0x000190e5) list_single_graphic_hl_pane_g5_cp2

0x96f6,	// (0x0001cb91) control_pane_g4_ParamLimits

0x96f6,	// (0x0001cb91) control_pane_g4

0x2107,	// (0x000155a2) bg_popup_sub_pane_cp10_ParamLimits

0x51e1,	// (0x0001867c) list_choice_list_pane_ParamLimits

0x51f0,	// (0x0001868b) scroll_pane_cp23

0xc8df,	// (0x0001fd7a) bg_popup_preview_window_pane_cp02_ParamLimits

0x581f,	// (0x00018cba) list_preview_fixed_pane_ParamLimits

0x5835,	// (0x00018cd0) list_preview_fixed_pane_cp_ParamLimits

0x5835,	// (0x00018cd0) list_preview_fixed_pane_cp

0x5841,	// (0x00018cdc) popup_preview_fixed_window_g1_ParamLimits

0x5841,	// (0x00018cdc) popup_preview_fixed_window_g1

0x584d,	// (0x00018ce8) popup_preview_fixed_window_g2_ParamLimits

0x584d,	// (0x00018ce8) popup_preview_fixed_window_g2

0x0002,

0xfb55,	// (0x00022ff0) popup_preview_fixed_window_g_ParamLimits

0xfb55,	// (0x00022ff0) popup_preview_fixed_window_g

0xe751,	// (0x00021bec) aid_navi_side_left_pane_ParamLimits

0xe766,	// (0x00021c01) aid_navi_side_right_pane_ParamLimits

0xe77e,	// (0x00021c19) navi_icon_pane_stacon_ParamLimits

0xe792,	// (0x00021c2d) navi_navi_pane_stacon_ParamLimits

0xe77e,	// (0x00021c19) navi_text_pane_stacon_ParamLimits

0xdeb8,	// (0x00021353) main_text_info_pane

0x5c74,	// (0x0001910f) listscroll_text_info_pane

0x5c7c,	// (0x00019117) list_text_info_pane_ParamLimits

0x5c7c,	// (0x00019117) list_text_info_pane

0x5c8b,	// (0x00019126) scroll_pane_cp24_ParamLimits

0x5c8b,	// (0x00019126) scroll_pane_cp24

0xc379,	// (0x0001f814) list_text_info_pane_t1_ParamLimits

0xc379,	// (0x0001f814) list_text_info_pane_t1

0x984d,	// (0x0001cce8) popup_fast_swap2_window_ParamLimits

0x984d,	// (0x0001cce8) popup_fast_swap2_window

0x5cce,	// (0x00019169) aid_size_cell_fast2

0xc722,	// (0x0001fbbd) bg_popup_window_pane_cp17

0x2b94,	// (0x0001602f) heading_pane_cp2

0x2b9c,	// (0x00016037) listscroll_fast2_pane

0x5cd8,	// (0x00019173) grid_fast2_pane

0x5ce2,	// (0x0001917d) listscroll_fast2_pane_g1

0x5cec,	// (0x00019187) listscroll_fast2_pane_g2

0x0001,

0xfbd8,	// (0x00023073) listscroll_fast2_pane_g

0xe617,	// (0x00021ab2) scroll_pane_cp26

0x5cf6,	// (0x00019191) cell_fast2_pane_ParamLimits

0x5cf6,	// (0x00019191) cell_fast2_pane

0x5d0d,	// (0x000191a8) cell_fast2_pane_g1

0x5d16,	// (0x000191b1) cell_fast2_pane_g2

0x5d1f,	// (0x000191ba) cell_fast2_pane_g3

0x0002,

0xfbdd,	// (0x00023078) cell_fast2_pane_g

0xe128,	// (0x000215c3) grid_highlight_pane_cp9

0xeb10,	// (0x00021fab) main_eswt_pane_ParamLimits

0xeb10,	// (0x00021fab) main_eswt_pane

0x5ca0,	// (0x0001913b) list_single_text_info_pane

0x5d27,	// (0x000191c2) eswt_ctrl_button_pane

0x5d27,	// (0x000191c2) eswt_ctrl_canvas_pane

0x5d2f,	// (0x000191ca) eswt_ctrl_combo_pane

0x5d27,	// (0x000191c2) eswt_ctrl_default_pane

0x5d27,	// (0x000191c2) eswt_ctrl_label_pane

0x5d37,	// (0x000191d2) eswt_ctrl_wait_pane

0x5d3f,	// (0x000191da) eswt_shell_pane

0xc722,	// (0x0001fbbd) listscroll_eswt_app_pane

0x5d5f,	// (0x000191fa) popup_eswt_tasktip_window_ParamLimits

0x5d5f,	// (0x000191fa) popup_eswt_tasktip_window

0x27a3,	// (0x00015c3e) bg_popup_window_pane_cp18

0x5d70,	// (0x0001920b) eswt_control_pane_g1_ParamLimits

0x5d70,	// (0x0001920b) eswt_control_pane_g1

0x5d7d,	// (0x00019218) eswt_control_pane_g2_ParamLimits

0x5d7d,	// (0x00019218) eswt_control_pane_g2

0x5d8a,	// (0x00019225) eswt_control_pane_g3_ParamLimits

0x5d8a,	// (0x00019225) eswt_control_pane_g3

0x5d97,	// (0x00019232) eswt_control_pane_g4_ParamLimits

0x5d97,	// (0x00019232) eswt_control_pane_g4

0x0003,

0xfbe4,	// (0x0002307f) eswt_control_pane_g_ParamLimits

0xfbe4,	// (0x0002307f) eswt_control_pane_g

0xe449,	// (0x000218e4) bg_button_pane_ParamLimits

0xe449,	// (0x000218e4) bg_button_pane

0xe13d,	// (0x000215d8) common_borders_pane_copy2_ParamLimits

0xe13d,	// (0x000215d8) common_borders_pane_copy2

0x5da4,	// (0x0001923f) control_button_pane_g1_ParamLimits

0x5da4,	// (0x0001923f) control_button_pane_g1

0x5db0,	// (0x0001924b) control_button_pane_g2_ParamLimits

0x5db0,	// (0x0001924b) control_button_pane_g2

0x5dbc,	// (0x00019257) control_button_pane_g3_ParamLimits

0x5dbc,	// (0x00019257) control_button_pane_g3

0x0002,

0xfbed,	// (0x00023088) control_button_pane_g_ParamLimits

0xfbed,	// (0x00023088) control_button_pane_g

0x5dd0,	// (0x0001926b) control_button_pane_t1

0x5dde,	// (0x00019279) control_button_pane_t2

0x0001,

0xfbf4,	// (0x0002308f) control_button_pane_t

0x267f,	// (0x00015b1a) bg_button_pane_g1

0x268f,	// (0x00015b2a) bg_button_pane_g2

0x2687,	// (0x00015b22) bg_button_pane_g3

0x269f,	// (0x00015b3a) bg_button_pane_g4

0x2697,	// (0x00015b32) bg_button_pane_g5

0x26a7,	// (0x00015b42) bg_button_pane_g6

0x26af,	// (0x00015b4a) bg_button_pane_g7

0x26bf,	// (0x00015b5a) bg_button_pane_g8

0x26b7,	// (0x00015b52) bg_button_pane_g9

0x0008,

0xf837,	// (0x00022cd2) bg_button_pane_g

0x519c,	// (0x00018637) common_borders_pane_ParamLimits

0x519c,	// (0x00018637) common_borders_pane

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy1_ParamLimits

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy1

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy1_ParamLimits

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy1

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy1_ParamLimits

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy1

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy1_ParamLimits

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy1

0x51d7,	// (0x00018672) bg_eswt_ctrl_canvas_pane_g1

0x519c,	// (0x00018637) common_borders_pane_cp2_ParamLimits

0x519c,	// (0x00018637) common_borders_pane_cp2

0x519c,	// (0x00018637) common_borders_pane_cp3_ParamLimits

0x519c,	// (0x00018637) common_borders_pane_cp3

0x5dec,	// (0x00019287) separator_horizontal_pane

0x5df4,	// (0x0001928f) separator_vertical_pane

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy2_ParamLimits

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy2

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy2_ParamLimits

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy2

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy2_ParamLimits

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy2

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy2_ParamLimits

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy2

0xc722,	// (0x0001fbbd) common_borders_pane_cp4

0x5dfd,	// (0x00019298) separator_horizontal_pane_g1

0x5e06,	// (0x000192a1) separator_horizontal_pane_g2

0x5e0f,	// (0x000192aa) separator_horizontal_pane_g3

0x0002,

0xfbf9,	// (0x00023094) separator_horizontal_pane_g

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy3_ParamLimits

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy3

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy3_ParamLimits

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy3

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy3_ParamLimits

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy3

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy3_ParamLimits

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy3

0xc722,	// (0x0001fbbd) common_borders_pane_cp5

0x5e18,	// (0x000192b3) separator_vertical_pane_g1

0x5e21,	// (0x000192bc) separator_vertical_pane_g2

0x5e2a,	// (0x000192c5) separator_vertical_pane_g3

0x0002,

0xfc00,	// (0x0002309b) separator_vertical_pane_g

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy4_ParamLimits

0x5d70,	// (0x0001920b) eswt_control_pane_g1_copy4

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy4_ParamLimits

0x5d7d,	// (0x00019218) eswt_control_pane_g2_copy4

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy4_ParamLimits

0x5d8a,	// (0x00019225) eswt_control_pane_g3_copy4

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy4_ParamLimits

0x5d97,	// (0x00019232) eswt_control_pane_g4_copy4

0xc39b,	// (0x0001f836) eswt_ctrl_combo_button_pane

0xc3a3,	// (0x0001f83e) eswt_ctrl_input_pane

0xc3ab,	// (0x0001f846) popup_choice_list_window_cp70

0xc3b3,	// (0x0001f84e) eswt_ctrl_input_pane_t1

0xc722,	// (0x0001fbbd) input_focus_pane_cp70

0x519c,	// (0x00018637) bg_button_pane_cp70_ParamLimits

0x519c,	// (0x00018637) bg_button_pane_cp70

0xc3c1,	// (0x0001f85c) eswt_ctrl_combo_button_pane_g1

0x5e61,	// (0x000192fc) wait_bar_pane_cp70

0x27a3,	// (0x00015c3e) bg_popup_window_pane_cp70_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_window_pane_cp70

0x5e69,	// (0x00019304) popup_eswt_tasktip_window_t1

0x5e7f,	// (0x0001931a) wait_bar_pane_cp71_ParamLimits

0x5e7f,	// (0x0001931a) wait_bar_pane_cp71

0x5e8b,	// (0x00019326) grid_eswt_app_pane

0x153b,	// (0x000149d6) scroll_pane_cp70

0xc3c9,	// (0x0001f864) cell_eswt_app_pane_ParamLimits

0xc3c9,	// (0x0001f864) cell_eswt_app_pane

0xc3fb,	// (0x0001f896) cell_eswt_app_pane_g1_ParamLimits

0xc3fb,	// (0x0001f896) cell_eswt_app_pane_g1

0xc42a,	// (0x0001f8c5) cell_eswt_app_pane_g2_ParamLimits

0xc42a,	// (0x0001f8c5) cell_eswt_app_pane_g2

0x0001,

0xfc07,	// (0x000230a2) cell_eswt_app_pane_g_ParamLimits

0xfc07,	// (0x000230a2) cell_eswt_app_pane_g

0xc453,	// (0x0001f8ee) cell_eswt_app_pane_t1_ParamLimits

0xc453,	// (0x0001f8ee) cell_eswt_app_pane_t1

0x5f50,	// (0x000193eb) grid_highlight_pane_cp70_ParamLimits

0x5f50,	// (0x000193eb) grid_highlight_pane_cp70

0x1c9e,	// (0x00015139) set_content_pane_g1

0xb576,	// (0x0001ea11) status_small_volume_pane

0xf339,	// (0x000227d4) status_small_volume_pane_g1

0xf341,	// (0x000227dc) volume_small2_pane

0xf34a,	// (0x000227e5) volume_small2_pane_g1

0xf353,	// (0x000227ee) volume_small2_pane_g2

0xf35c,	// (0x000227f7) volume_small2_pane_g3

0xf365,	// (0x00022800) volume_small2_pane_g4

0xf36e,	// (0x00022809) volume_small2_pane_g5

0xf377,	// (0x00022812) volume_small2_pane_g6

0xf380,	// (0x0002281b) volume_small2_pane_g7

0xf389,	// (0x00022824) volume_small2_pane_g8

0xf392,	// (0x0002282d) volume_small2_pane_g9

0xf39b,	// (0x00022836) volume_small2_pane_g10

0x0009,

0xfc0c,	// (0x000230a7) volume_small2_pane_g

0x55a6,	// (0x00018a41) fep_vkb_top_text_pane_g1_ParamLimits

0xc2f7,	// (0x0001f792) fep_vkb_top_text_pane_t1_ParamLimits

0x5859,	// (0x00018cf4) popup_preview_fixed_window_g3_ParamLimits

0x5859,	// (0x00018cf4) popup_preview_fixed_window_g3

0x9eeb,	// (0x0001d386) popup_toolbar_trans_pane

0xbc7b,	// (0x0001f116) aid_height_set_list_ParamLimits

0x3b63,	// (0x00016ffe) aid_size_parent_ParamLimits

0x2107,	// (0x000155a2) list_highlight_pane_cp2_ParamLimits

0x1c9e,	// (0x00015139) set_content_pane_g1_ParamLimits

0xbe70,	// (0x0001f30b) list_single_image_pane_ParamLimits

0xbe70,	// (0x0001f30b) list_single_image_pane

0xc485,	// (0x0001f920) aid_size_cell_image_ParamLimits

0xc485,	// (0x0001f920) aid_size_cell_image

0xc492,	// (0x0001f92d) grid_single_image_pane_ParamLimits

0xc492,	// (0x0001f92d) grid_single_image_pane

0xe46f,	// (0x0002190a) list_single_image_pane_g1_ParamLimits

0xe46f,	// (0x0002190a) list_single_image_pane_g1

0xe47b,	// (0x00021916) list_single_image_pane_g2_ParamLimits

0xe47b,	// (0x00021916) list_single_image_pane_g2

0x0001,

0xfc21,	// (0x000230bc) list_single_image_pane_g_ParamLimits

0xfc21,	// (0x000230bc) list_single_image_pane_g

0x5f77,	// (0x00019412) list_single_image_pane_t1_ParamLimits

0x5f77,	// (0x00019412) list_single_image_pane_t1

0xc4a0,	// (0x0001f93b) cell_image_list_pane_ParamLimits

0xc4a0,	// (0x0001f93b) cell_image_list_pane

0xc4b6,	// (0x0001f951) cell_image_list_pane_g1

0xc4bf,	// (0x0001f95a) cell_image_list_pane_g2

0x0001,

0xfc26,	// (0x000230c1) cell_image_list_pane_g

0x5fb7,	// (0x00019452) aid_size_cell_tb_trans_pane

0xe449,	// (0x000218e4) bg_tb_trans_pane

0x5fc9,	// (0x00019464) grid_tb_trans_pane

0x267f,	// (0x00015b1a) bg_tb_trans_pane_g1

0x268f,	// (0x00015b2a) bg_tb_trans_pane_g2

0x2687,	// (0x00015b22) bg_tb_trans_pane_g3

0x269f,	// (0x00015b3a) bg_tb_trans_pane_g4

0x2697,	// (0x00015b32) bg_tb_trans_pane_g5

0x26bf,	// (0x00015b5a) bg_tb_trans_pane_g6

0x26b7,	// (0x00015b52) bg_tb_trans_pane_g7

0x26a7,	// (0x00015b42) bg_tb_trans_pane_g8

0x26af,	// (0x00015b4a) bg_tb_trans_pane_g9

0x0008,

0xfc2b,	// (0x000230c6) bg_tb_trans_pane_g

0x5fdd,	// (0x00019478) cell_toolbar_trans_pane_ParamLimits

0x5fdd,	// (0x00019478) cell_toolbar_trans_pane

0x51d7,	// (0x00018672) cell_toolbar_trans_pane_g1

0xc0c7,	// (0x0001f562) list_form2_midp_pane_t1

0xc0d5,	// (0x0001f570) list_form2_midp_pane_t2

0x0001,

0xfac8,	// (0x00022f63) list_form2_midp_pane_t

0x4dd8,	// (0x00018273) scroll_pane_cp51_ParamLimits

0x4ff2,	// (0x0001848d) form2_midp_wait_pane_g1

0x4ffb,	// (0x00018496) form2_midp_wait_pane_g2

0x5004,	// (0x0001849f) form2_midp_wait_pane_g3

0x0002,

0xfadd,	// (0x00022f78) form2_midp_wait_pane_g

0xc792,	// (0x0001fc2d) list_highlight_pane_cp21_ParamLimits

0x503d,	// (0x000184d8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x504c,	// (0x000184e7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3d81,	// (0x0001721c) list_single_2graphic_im_pane_ParamLimits

0x3d81,	// (0x0001721c) list_single_2graphic_im_pane

0xc4c8,	// (0x0001f963) list_single_2graphic_im_pane_g1_ParamLimits

0xc4c8,	// (0x0001f963) list_single_2graphic_im_pane_g1

0xc4d9,	// (0x0001f974) list_single_2graphic_im_pane_g2_ParamLimits

0xc4d9,	// (0x0001f974) list_single_2graphic_im_pane_g2

0xc4e5,	// (0x0001f980) list_single_2graphic_im_pane_g3_ParamLimits

0xc4e5,	// (0x0001f980) list_single_2graphic_im_pane_g3

0x0003,

0xfc3e,	// (0x000230d9) list_single_2graphic_im_pane_g_ParamLimits

0xfc3e,	// (0x000230d9) list_single_2graphic_im_pane_g

0xc4f9,	// (0x0001f994) list_single_2graphic_im_pane_t1_ParamLimits

0xc4f9,	// (0x0001f994) list_single_2graphic_im_pane_t1

0x5865,	// (0x00018d00) list_single_graphic_2heading_pane_fp_ParamLimits

0x5865,	// (0x00018d00) list_single_graphic_2heading_pane_fp

0x58ad,	// (0x00018d48) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x58ad,	// (0x00018d48) list_single_graphic_2heading_pane_fp_g1

0x587e,	// (0x00018d19) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x587e,	// (0x00018d19) list_single_graphic_2heading_pane_fp_g2

0x57d7,	// (0x00018c72) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x57d7,	// (0x00018c72) list_single_graphic_2heading_pane_fp_g3

0x57e3,	// (0x00018c7e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x57e3,	// (0x00018c7e) list_single_graphic_2heading_pane_fp_g4

0x588a,	// (0x00018d25) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x588a,	// (0x00018d25) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb65,	// (0x00023000) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb65,	// (0x00023000) list_single_graphic_2heading_pane_fp_g

0x6071,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6071,	// (0x0001950c) list_single_graphic_2heading_pane_fp_t1

0x58e5,	// (0x00018d80) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x58e5,	// (0x00018d80) list_single_graphic_2heading_pane_fp_t2

0x6087,	// (0x00019522) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6087,	// (0x00019522) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc47,	// (0x000230e2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc47,	// (0x000230e2) list_single_graphic_2heading_pane_fp_t

0x5268,	// (0x00018703) fep_hwr_write_pane_g5_ParamLimits

0x5268,	// (0x00018703) fep_hwr_write_pane_g5

0x5274,	// (0x0001870f) fep_hwr_write_pane_g6_ParamLimits

0x5274,	// (0x0001870f) fep_hwr_write_pane_g6

0x5d3f,	// (0x000191da) eswt_shell_pane_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_window_pane_cp18_ParamLimits

0x3a81,	// (0x00016f1c) heading_pane_cp70

0x5e69,	// (0x00019304) popup_eswt_tasktip_window_t1_ParamLimits

0xb61e,	// (0x0001eab9) aid_touch_tab_arrow_left

0xb634,	// (0x0001eacf) aid_touch_tab_arrow_right

0xa7f9,	// (0x0001dc94) title_pane_g3_ParamLimits

0xa7f9,	// (0x0001dc94) title_pane_g3

0xe3a2,	// (0x0002183d) set_value_pane_g1

0x9eeb,	// (0x0001d386) popup_toolbar_trans_pane_ParamLimits

0x5fb7,	// (0x00019452) aid_size_cell_tb_trans_pane_ParamLimits

0xe449,	// (0x000218e4) bg_tb_trans_pane_ParamLimits

0x5fc9,	// (0x00019464) grid_tb_trans_pane_ParamLimits

0xc8df,	// (0x0001fd7a) cont_note_pane_ParamLimits

0xc8df,	// (0x0001fd7a) cont_note_pane

0xe13d,	// (0x000215d8) cont_snote2_single_text_pane_ParamLimits

0xe13d,	// (0x000215d8) cont_snote2_single_text_pane

0xe13d,	// (0x000215d8) cont_snote2_single_graphic_pane_ParamLimits

0xe13d,	// (0x000215d8) cont_snote2_single_graphic_pane

0x2dc4,	// (0x0001625f) cont_note_wait_pane_ParamLimits

0x2dc4,	// (0x0001625f) cont_note_wait_pane

0x2dc4,	// (0x0001625f) cont_note_image_pane_ParamLimits

0x2dc4,	// (0x0001625f) cont_note_image_pane

0x609d,	// (0x00019538) popup_note2_window_g1_ParamLimits

0x609d,	// (0x00019538) popup_note2_window_g1

0x60ce,	// (0x00019569) popup_note2_window_t1_ParamLimits

0x60ce,	// (0x00019569) popup_note2_window_t1

0x6113,	// (0x000195ae) popup_note2_window_t2_ParamLimits

0x6113,	// (0x000195ae) popup_note2_window_t2

0x6158,	// (0x000195f3) popup_note2_window_t3_ParamLimits

0x6158,	// (0x000195f3) popup_note2_window_t3

0x619d,	// (0x00019638) popup_note2_window_t4_ParamLimits

0x619d,	// (0x00019638) popup_note2_window_t4

0xc963,	// (0x0001fdfe) popup_note2_window_t5_ParamLimits

0xc963,	// (0x0001fdfe) popup_note2_window_t5

0x0004,

0xfc53,	// (0x000230ee) popup_note2_window_t_ParamLimits

0xfc53,	// (0x000230ee) popup_note2_window_t

0x61cc,	// (0x00019667) popup_note2_image_window_g1_ParamLimits

0x61cc,	// (0x00019667) popup_note2_image_window_g1

0x61d8,	// (0x00019673) popup_note2_image_window_g2_ParamLimits

0x61d8,	// (0x00019673) popup_note2_image_window_g2

0x0001,

0xfc5e,	// (0x000230f9) popup_note2_image_window_g_ParamLimits

0xfc5e,	// (0x000230f9) popup_note2_image_window_g

0x61ea,	// (0x00019685) popup_note2_image_window_t1_ParamLimits

0x61ea,	// (0x00019685) popup_note2_image_window_t1

0x6202,	// (0x0001969d) popup_note2_image_window_t2_ParamLimits

0x6202,	// (0x0001969d) popup_note2_image_window_t2

0x621a,	// (0x000196b5) popup_note2_image_window_t3_ParamLimits

0x621a,	// (0x000196b5) popup_note2_image_window_t3

0x0002,

0xfc63,	// (0x000230fe) popup_note2_image_window_t_ParamLimits

0xfc63,	// (0x000230fe) popup_note2_image_window_t

0x2dd2,	// (0x0001626d) popup_note2_wait_window_g1_ParamLimits

0x2dd2,	// (0x0001626d) popup_note2_wait_window_g1

0x6236,	// (0x000196d1) popup_note2_wait_window_g2_ParamLimits

0x6236,	// (0x000196d1) popup_note2_wait_window_g2

0x2dea,	// (0x00016285) popup_note2_wait_window_g3_ParamLimits

0x2dea,	// (0x00016285) popup_note2_wait_window_g3

0x0002,

0xfc6a,	// (0x00023105) popup_note2_wait_window_g_ParamLimits

0xfc6a,	// (0x00023105) popup_note2_wait_window_g

0x6242,	// (0x000196dd) popup_note2_wait_window_t1_ParamLimits

0x6242,	// (0x000196dd) popup_note2_wait_window_t1

0x6260,	// (0x000196fb) popup_note2_wait_window_t2_ParamLimits

0x6260,	// (0x000196fb) popup_note2_wait_window_t2

0x627e,	// (0x00019719) popup_note2_wait_window_t3_ParamLimits

0x627e,	// (0x00019719) popup_note2_wait_window_t3

0x6290,	// (0x0001972b) popup_note2_wait_window_t4_ParamLimits

0x6290,	// (0x0001972b) popup_note2_wait_window_t4

0x0003,

0xfc71,	// (0x0002310c) popup_note2_wait_window_t_ParamLimits

0xfc71,	// (0x0002310c) popup_note2_wait_window_t

0x62a2,	// (0x0001973d) wait_bar2_pane_ParamLimits

0x62a2,	// (0x0001973d) wait_bar2_pane

0x62ba,	// (0x00019755) popup_snote2_single_text_window_g1_ParamLimits

0x62ba,	// (0x00019755) popup_snote2_single_text_window_g1

0x62e2,	// (0x0001977d) popup_snote2_single_text_window_t1_ParamLimits

0x62e2,	// (0x0001977d) popup_snote2_single_text_window_t1

0x632e,	// (0x000197c9) popup_snote2_single_text_window_t2_ParamLimits

0x632e,	// (0x000197c9) popup_snote2_single_text_window_t2

0x637a,	// (0x00019815) popup_snote2_single_text_window_t3_ParamLimits

0x637a,	// (0x00019815) popup_snote2_single_text_window_t3

0x63bb,	// (0x00019856) popup_snote2_single_text_window_t4_ParamLimits

0x63bb,	// (0x00019856) popup_snote2_single_text_window_t4

0x63f1,	// (0x0001988c) popup_snote2_single_text_window_t5_ParamLimits

0x63f1,	// (0x0001988c) popup_snote2_single_text_window_t5

0x0004,

0xfc7a,	// (0x00023115) popup_snote2_single_text_window_t_ParamLimits

0xfc7a,	// (0x00023115) popup_snote2_single_text_window_t

0x641c,	// (0x000198b7) popup_snote2_single_graphic_window_g1_ParamLimits

0x641c,	// (0x000198b7) popup_snote2_single_graphic_window_g1

0x6444,	// (0x000198df) popup_snote2_single_graphic_window_g2_ParamLimits

0x6444,	// (0x000198df) popup_snote2_single_graphic_window_g2

0x0001,

0xfc85,	// (0x00023120) popup_snote2_single_graphic_window_g_ParamLimits

0xfc85,	// (0x00023120) popup_snote2_single_graphic_window_g

0x646c,	// (0x00019907) popup_snote2_single_graphic_window_t1_ParamLimits

0x646c,	// (0x00019907) popup_snote2_single_graphic_window_t1

0x64b8,	// (0x00019953) popup_snote2_single_graphic_window_t2_ParamLimits

0x64b8,	// (0x00019953) popup_snote2_single_graphic_window_t2

0x637a,	// (0x00019815) popup_snote2_single_graphic_window_t3_ParamLimits

0x637a,	// (0x00019815) popup_snote2_single_graphic_window_t3

0x63bb,	// (0x00019856) popup_snote2_single_graphic_window_t4_ParamLimits

0x63bb,	// (0x00019856) popup_snote2_single_graphic_window_t4

0x63f1,	// (0x0001988c) popup_snote2_single_graphic_window_t5_ParamLimits

0x63f1,	// (0x0001988c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8a,	// (0x00023125) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8a,	// (0x00023125) popup_snote2_single_graphic_window_t

0x4c88,	// (0x00018123) clock_nsta_pane_cp2_t1

0x4c88,	// (0x00018123) clock_nsta_pane_cp2_t2

0x0001,

0xfa9e,	// (0x00022f39) clock_nsta_pane_cp2_t

0xe463,	// (0x000218fe) form_field_data_wide_pane_g1_ParamLimits

0xe46f,	// (0x0002190a) form_field_data_wide_pane_g2_ParamLimits

0xe46f,	// (0x0002190a) form_field_data_wide_pane_g2

0xe47b,	// (0x00021916) form_field_data_wide_pane_g3_ParamLimits

0xe47b,	// (0x00021916) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00022aec) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00022aec) form_field_data_wide_pane_g

0xbfce,	// (0x0001f469) grid_touch_3_pane_ParamLimits

0xbfce,	// (0x0001f469) grid_touch_3_pane

0xc52a,	// (0x0001f9c5) cell_touch_3_pane_ParamLimits

0xc52a,	// (0x0001f9c5) cell_touch_3_pane

0x51d7,	// (0x00018672) cell_touch_3_pane_g1

0x51d7,	// (0x00018672) cell_touch_3_pane_g2

0x0001,

0xfb23,	// (0x00022fbe) cell_touch_3_pane_g

0xc9bb,	// (0x0001fe56) cont_query_data_pane

0xc9c3,	// (0x0001fe5e) cont_query_data_pane_cp1

0x6537,	// (0x000199d2) button_value_adjust_pane_cp7

0x653f,	// (0x000199da) query_popup_pane_cp3

0x180c,	// (0x00014ca7) bg_popup_sub_pane_cp22_ParamLimits

0xe88c,	// (0x00021d27) navi_navi_volume_pane_cp2

0xe8a7,	// (0x00021d42) popup_side_volume_key_window_g2

0xe8c2,	// (0x00021d5d) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00022b82) popup_side_volume_key_window_g

0xe8df,	// (0x00021d7a) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00022b89) popup_side_volume_key_window_t

0x1b59,	// (0x00014ff4) popup_side_volume_key_window_ParamLimits

0xaccf,	// (0x0001e16a) list_double_graphic_pane_g4_ParamLimits

0xaccf,	// (0x0001e16a) list_double_graphic_pane_g4

0xbe44,	// (0x0001f2df) list_single_2heading_msg_pane_ParamLimits

0xbe44,	// (0x0001f2df) list_single_2heading_msg_pane

0xc576,	// (0x0001fa11) list_single_2heading_msg_pane_g1_ParamLimits

0xc576,	// (0x0001fa11) list_single_2heading_msg_pane_g1

0xc582,	// (0x0001fa1d) list_single_2heading_msg_pane_g2_ParamLimits

0xc582,	// (0x0001fa1d) list_single_2heading_msg_pane_g2

0xc595,	// (0x0001fa30) list_single_2heading_msg_pane_g3_ParamLimits

0xc595,	// (0x0001fa30) list_single_2heading_msg_pane_g3

0xc5a1,	// (0x0001fa3c) list_single_2heading_msg_pane_g4_ParamLimits

0xc5a1,	// (0x0001fa3c) list_single_2heading_msg_pane_g4

0x0003,

0xfc95,	// (0x00023130) list_single_2heading_msg_pane_g_ParamLimits

0xfc95,	// (0x00023130) list_single_2heading_msg_pane_g

0xc5b9,	// (0x0001fa54) list_single_2heading_msg_pane_t1_ParamLimits

0xc5b9,	// (0x0001fa54) list_single_2heading_msg_pane_t1

0xc5e1,	// (0x0001fa7c) list_single_2heading_msg_pane_t2_ParamLimits

0xc5e1,	// (0x0001fa7c) list_single_2heading_msg_pane_t2

0xc64c,	// (0x0001fae7) list_single_2heading_msg_pane_t3_ParamLimits

0xc64c,	// (0x0001fae7) list_single_2heading_msg_pane_t3

0x663c,	// (0x00019ad7) list_single_2heading_msg_pane_t4_ParamLimits

0x663c,	// (0x00019ad7) list_single_2heading_msg_pane_t4

0x0003,

0xfc9e,	// (0x00023139) list_single_2heading_msg_pane_t_ParamLimits

0xfc9e,	// (0x00023139) list_single_2heading_msg_pane_t

0xc740,	// (0x0001fbdb) title_pane_g4_ParamLimits

0xc740,	// (0x0001fbdb) title_pane_g4

0xe6a1,	// (0x00021b3c) title_pane_stacon_g3_ParamLimits

0xe6a1,	// (0x00021b3c) title_pane_stacon_g3

0x6034,	// (0x000194cf) list_single_2graphic_im_pane_g4_ParamLimits

0x6034,	// (0x000194cf) list_single_2graphic_im_pane_g4

0x3834,	// (0x00016ccf) popup_side_volume_key_window_cp

0x4150,	// (0x000175eb) main_idle_act2_pane_t1

0xecfe,	// (0x00022199) toolbar_button_pane_g10

0xab76,	// (0x0001e011) popup_toolbar_window_cp1

0x4c79,	// (0x00018114) clock_nsta_pane_cp_t1

0x4c79,	// (0x00018114) clock_nsta_pane_cp_t2

0x0001,

0xfa99,	// (0x00022f34) clock_nsta_pane_cp_t

0xe88c,	// (0x00021d27) navi_navi_volume_pane_cp2_ParamLimits

0xe89b,	// (0x00021d36) popup_side_volume_key_window_g1_ParamLimits

0xe8a7,	// (0x00021d42) popup_side_volume_key_window_g2_ParamLimits

0xe8c2,	// (0x00021d5d) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00022b82) popup_side_volume_key_window_g_ParamLimits

0xf005,	// (0x000224a0) fep_hwr_aid_pane

0xf0ae,	// (0x00022549) bg_fep_hwr_top_pane_g4_ParamLimits

0x5238,	// (0x000186d3) fep_hwr_top_pane_g1_ParamLimits

0x524a,	// (0x000186e5) fep_hwr_top_pane_g2_ParamLimits

0xf0ce,	// (0x00022569) fep_hwr_top_pane_g3_ParamLimits

0xfaee,	// (0x00022f89) fep_hwr_top_pane_g_ParamLimits

0xf0e3,	// (0x0002257e) fep_hwr_top_text_pane_ParamLimits

0x35e9,	// (0x00016a84) aid_touch_tab_arrow_arrow_2

0x35f2,	// (0x00016a8d) aid_touch_tab_arrow_left_2

0xf019,	// (0x000224b4) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xf050,	// (0x000224eb) fep_hwr_prediction_pane

0x53a0,	// (0x0001883b) fep_vkb_prediction_pane

0xc2d7,	// (0x0001f772) fep_vkb_side_pane_g3_ParamLimits

0xc2d7,	// (0x0001f772) fep_vkb_side_pane_g3

0xf1f7,	// (0x00022692) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xf268,	// (0x00022703) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xf275,	// (0x00022710) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9d,	// (0x00023038) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xf3a4,	// (0x0002283f) fep_hwr_prediction_pane_g1

0xf3ae,	// (0x00022849) fep_hwr_prediction_pane_g2

0xf3b6,	// (0x00022851) fep_hwr_prediction_pane_g3

0xf3be,	// (0x00022859) fep_hwr_prediction_pane_g4

0x0003,

0xfca7,	// (0x00023142) fep_hwr_prediction_pane_g

0x6661,	// (0x00019afc) fep_vkb_prediction_pane_g1

0x666b,	// (0x00019b06) fep_vkb_prediction_pane_g2

0x6673,	// (0x00019b0e) fep_vkb_prediction_pane_g3

0x667b,	// (0x00019b16) fep_vkb_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0002314b) fep_vkb_prediction_pane_g

0xee42,	// (0x000222dd) slider_set_pane_g3

0xee56,	// (0x000222f1) slider_set_pane_g4

0xee6e,	// (0x00022309) slider_set_pane_g5

0xee42,	// (0x000222dd) slider_set_pane_g6

0xee84,	// (0x0002231f) slider_set_pane_g7

0x3ce2,	// (0x0001717d) slider_form_pane_g3

0x3ceb,	// (0x00017186) slider_form_pane_g4

0x3cf3,	// (0x0001718e) slider_form_pane_g5

0x3ce2,	// (0x0001717d) slider_form_pane_g6

0xbde4,	// (0x0001f27f) slider_form_pane_g7

0x4454,	// (0x000178ef) slider_set_pane_vc_g3

0x445d,	// (0x000178f8) slider_set_pane_vc_g4

0x4466,	// (0x00017901) slider_set_pane_vc_g5

0x4454,	// (0x000178ef) slider_set_pane_vc_g6

0x446f,	// (0x0001790a) slider_set_pane_vc_g7

0x4928,	// (0x00017dc3) slider_form_pane_vc_g1

0x4931,	// (0x00017dcc) slider_form_pane_vc_g2

0x493a,	// (0x00017dd5) slider_form_pane_vc_g3

0x4928,	// (0x00017dc3) slider_form_pane_vc_g4

0x4943,	// (0x00017dde) slider_form_pane_vc_g5

0x0004,

0xfa6b,	// (0x00022f06) slider_form_pane_vc_g

0xdeb8,	// (0x00021353) main_idle_act3_pane

0x6683,	// (0x00019b1e) ai3_links_pane

0xc6ba,	// (0x0001fb55) popup_ai3_data_window_ParamLimits

0xc6ba,	// (0x0001fb55) popup_ai3_data_window

0xc722,	// (0x0001fbbd) grid_ai3_links_pane

0xc6d8,	// (0x0001fb73) cell_ai3_links_pane_ParamLimits

0xc6d8,	// (0x0001fb73) cell_ai3_links_pane

0x66c4,	// (0x00019b5f) bg_popup_sub_pane_cp11

0x66d1,	// (0x00019b6c) cell_ai3_links_pane_g1

0xc722,	// (0x0001fbbd) bg_popup_sub_pane_cp12

0x66f6,	// (0x00019b91) heading_ai3_data_pane

0x66fe,	// (0x00019b99) list_ai3_gene_pane

0x670a,	// (0x00019ba5) popup_ai3_data_window_g1

0x6712,	// (0x00019bad) heading_ai3_data_pane_g1

0x671a,	// (0x00019bb5) heading_ai3_data_pane_t1

0x6728,	// (0x00019bc3) list_double_ai3_gene_pane_ParamLimits

0x6728,	// (0x00019bc3) list_double_ai3_gene_pane

0x6735,	// (0x00019bd0) list_single_ai3_gene_pane_ParamLimits

0x6735,	// (0x00019bd0) list_single_ai3_gene_pane

0x519c,	// (0x00018637) list_highlight_pane_cp7_ParamLimits

0x519c,	// (0x00018637) list_highlight_pane_cp7

0x6742,	// (0x00019bdd) list_single_a13_gene_pane_t1_ParamLimits

0x6742,	// (0x00019bdd) list_single_a13_gene_pane_t1

0x6759,	// (0x00019bf4) list_single_ai3_gene_pane_g1

0x6762,	// (0x00019bfd) list_single_ai3_gene_pane_g2

0x0001,

0xfcb9,	// (0x00023154) list_single_ai3_gene_pane_g

0x676a,	// (0x00019c05) list_double_ai3_gene_pane_g1_ParamLimits

0x676a,	// (0x00019c05) list_double_ai3_gene_pane_g1

0x6776,	// (0x00019c11) list_double_ai3_gene_pane_t1_ParamLimits

0x6776,	// (0x00019c11) list_double_ai3_gene_pane_t1

0x6792,	// (0x00019c2d) list_double_ai3_gene_pane_t2_ParamLimits

0x6792,	// (0x00019c2d) list_double_ai3_gene_pane_t2

0x67a7,	// (0x00019c42) list_double_ai3_gene_pane_t3_ParamLimits

0x67a7,	// (0x00019c42) list_double_ai3_gene_pane_t3

0x0002,

0xfcbe,	// (0x00023159) list_double_ai3_gene_pane_t_ParamLimits

0xfcbe,	// (0x00023159) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6550,	// (0x000199eb) aid_size_min_col_2

0xc560,	// (0x0001f9fb) aid_size_min_msg_ParamLimits

0xc560,	// (0x0001f9fb) aid_size_min_msg

0xc2eb,	// (0x0001f786) fep_vkb_top_text_pane_g2_ParamLimits

0xc2eb,	// (0x0001f786) fep_vkb_top_text_pane_g2

0x0001,

0xfb1e,	// (0x00022fb9) fep_vkb_top_text_pane_g_ParamLimits

0xfb1e,	// (0x00022fb9) fep_vkb_top_text_pane_g

0xdeb8,	// (0x00021353) main_hc_apps_shell_pane

0x67c4,	// (0x00019c5f) grid_hc_apps_pane_ParamLimits

0x67c4,	// (0x00019c5f) grid_hc_apps_pane

0x67d6,	// (0x00019c71) list_hc_apps_pane

0x67de,	// (0x00019c79) scroll_pane_cp37_ParamLimits

0x67de,	// (0x00019c79) scroll_pane_cp37

0xca9d,	// (0x0001ff38) cell_hc_apps_pane_ParamLimits

0xca9d,	// (0x0001ff38) cell_hc_apps_pane

0xcb65,	// (0x00020000) cell_hc_apps_pane_g1_ParamLimits

0xcb65,	// (0x00020000) cell_hc_apps_pane_g1

0x68cc,	// (0x00019d67) cell_hc_apps_pane_g2_ParamLimits

0x68cc,	// (0x00019d67) cell_hc_apps_pane_g2

0x68e8,	// (0x00019d83) cell_hc_apps_pane_g3_ParamLimits

0x68e8,	// (0x00019d83) cell_hc_apps_pane_g3

0x0002,

0xfcc5,	// (0x00023160) cell_hc_apps_pane_g_ParamLimits

0xfcc5,	// (0x00023160) cell_hc_apps_pane_g

0xcb91,	// (0x0002002c) cell_hc_apps_pane_t1_ParamLimits

0xcb91,	// (0x0002002c) cell_hc_apps_pane_t1

0xc8df,	// (0x0001fd7a) grid_highlight_pane_cp10_ParamLimits

0xc8df,	// (0x0001fd7a) grid_highlight_pane_cp10

0xcbd1,	// (0x0002006c) list_single_hc_apps_pane_ParamLimits

0xcbd1,	// (0x0002006c) list_single_hc_apps_pane

0xcc0b,	// (0x000200a6) list_single_hc_apps_pane_g1

0xcc24,	// (0x000200bf) list_single_hc_apps_pane_g2

0x0001,

0xfccc,	// (0x00023167) list_single_hc_apps_pane_g

0xcc3d,	// (0x000200d8) list_single_hc_apps_pane_g2_copy1

0xcc59,	// (0x000200f4) list_single_hc_apps_pane_t1

0xc792,	// (0x0001fc2d) bg_set_opt_pane_cp_ParamLimits

0xdfdb,	// (0x00021476) setting_slider_pane_t1_ParamLimits

0xdff4,	// (0x0002148f) setting_slider_pane_t2_ParamLimits

0xe00e,	// (0x000214a9) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x000229d4) setting_slider_pane_t_ParamLimits

0xe026,	// (0x000214c1) slider_set_pane_ParamLimits

0xeae1,	// (0x00021f7c) control_pane_g5_ParamLimits

0xeae1,	// (0x00021f7c) control_pane_g5

0x3b15,	// (0x00016fb0) slider_set_pane_g1_ParamLimits

0xee36,	// (0x000222d1) slider_set_pane_g2_ParamLimits

0xee42,	// (0x000222dd) slider_set_pane_g3_ParamLimits

0xee56,	// (0x000222f1) slider_set_pane_g4_ParamLimits

0xee6e,	// (0x00022309) slider_set_pane_g5_ParamLimits

0xee42,	// (0x000222dd) slider_set_pane_g6_ParamLimits

0xee84,	// (0x0002231f) slider_set_pane_g7_ParamLimits

0xf935,	// (0x00022dd0) slider_set_pane_g_ParamLimits

0x1c49,	// (0x000150e4) navi_icon_text_pane_ParamLimits

0xb5e5,	// (0x0001ea80) aid_fill_nsta_2_ParamLimits

0xb61e,	// (0x0001eab9) aid_touch_tab_arrow_left_ParamLimits

0xb634,	// (0x0001eacf) aid_touch_tab_arrow_right_ParamLimits

0xb6cf,	// (0x0001eb6a) clock_nsta_pane_ParamLimits

0xbb62,	// (0x0001effd) navi_icon_pane_g1_ParamLimits

0xbb6e,	// (0x0001f009) navi_text_pane_t1_ParamLimits

0xc0a9,	// (0x0001f544) navi_icon_text_pane_g1_ParamLimits

0xc0b5,	// (0x0001f550) navi_icon_text_pane_t1_ParamLimits

0xcc0b,	// (0x000200a6) list_single_hc_apps_pane_g1_ParamLimits

0xcc24,	// (0x000200bf) list_single_hc_apps_pane_g2_ParamLimits

0xfccc,	// (0x00023167) list_single_hc_apps_pane_g_ParamLimits

0xcc3d,	// (0x000200d8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcc59,	// (0x000200f4) list_single_hc_apps_pane_t1_ParamLimits

0x95c1,	// (0x0001ca5c) popup_toolbar2_fixed_window_ParamLimits

0x95c1,	// (0x0001ca5c) popup_toolbar2_fixed_window

0x9ee1,	// (0x0001d37c) popup_toolbar2_float_window

0xc722,	// (0x0001fbbd) bg_popup_sub_pane_cp27

0x6a05,	// (0x00019ea0) grid_toolbar2_float_pane

0xc722,	// (0x0001fbbd) bg_popup_sub_pane_cp26

0x6a05,	// (0x00019ea0) grid_toolbar2_fixed_pane

0xcc87,	// (0x00020122) cell_toolbar2_fixed_pane_ParamLimits

0xcc87,	// (0x00020122) cell_toolbar2_fixed_pane

0xcca1,	// (0x0002013c) cell_toolbar2_fixed_pane_g1

0x6a26,	// (0x00019ec1) toolbar2_fixed_button_pane

0x267f,	// (0x00015b1a) toolbar2_fixed_button_pane_g1

0x268f,	// (0x00015b2a) toolbar2_fixed_button_pane_g2

0x2687,	// (0x00015b22) toolbar2_fixed_button_pane_g3

0x269f,	// (0x00015b3a) toolbar2_fixed_button_pane_g4

0x2697,	// (0x00015b32) toolbar2_fixed_button_pane_g5

0x26a7,	// (0x00015b42) toolbar2_fixed_button_pane_g6

0x26af,	// (0x00015b4a) toolbar2_fixed_button_pane_g7

0x26bf,	// (0x00015b5a) toolbar2_fixed_button_pane_g8

0x26b7,	// (0x00015b52) toolbar2_fixed_button_pane_g9

0x0008,

0xf837,	// (0x00022cd2) toolbar2_fixed_button_pane_g

0x6a2e,	// (0x00019ec9) cell_toolbar2_float_pane_ParamLimits

0x6a2e,	// (0x00019ec9) cell_toolbar2_float_pane

0x6a3f,	// (0x00019eda) cell_toolbar2_float_pane_g1

0x6a26,	// (0x00019ec1) toolbar2_fixed_button_pane_cp

0xc1d3,	// (0x0001f66e) fep_vkb_accented_list_pane_ParamLimits

0xc1d3,	// (0x0001f66e) fep_vkb_accented_list_pane

0xf1d7,	// (0x00022672) bg_popup_fep_shadow_pane_g9

0x1dd8,	// (0x00015273) bg_popup_fep_shadow_pane_cp3

0xe5fe,	// (0x00021a99) list_accented_list_pane

0x6a48,	// (0x00019ee3) list_single_accented_list_pane_ParamLimits

0x6a48,	// (0x00019ee3) list_single_accented_list_pane

0x1dd8,	// (0x00015273) list_highlight_pane_cp10

0x6a59,	// (0x00019ef4) list_single_accented_list_pane_t1

0x9dff,	// (0x0001d29a) popup_slider_window_ParamLimits

0x9dff,	// (0x0001d29a) popup_slider_window

0x6547,	// (0x000199e2) aid_indentation_list_msg

0xcda4,	// (0x0002023f) bg_popup_window_pane_cp19

0x6b95,	// (0x0001a030) popup_slider_window_g1

0x6bb1,	// (0x0001a04c) popup_slider_window_g2

0x6bcd,	// (0x0001a068) popup_slider_window_g3

0x0005,

0xfcd1,	// (0x0002316c) popup_slider_window_g

0x6c33,	// (0x0001a0ce) popup_slider_window_t1

0x6ca7,	// (0x0001a142) small_volume_slider_vertical_pane

0x51d7,	// (0x00018672) small_volume_slider_vertical_pane_g1

0x51d7,	// (0x00018672) small_volume_slider_vertical_pane_g2

0x6cc3,	// (0x0001a15e) small_volume_slider_vertical_pane_g3

0x0002,

0xfce3,	// (0x0002317e) small_volume_slider_vertical_pane_g

0x952b,	// (0x0001c9c6) area_side_right_pane_ParamLimits

0x952b,	// (0x0001c9c6) area_side_right_pane

0xa17e,	// (0x0001d619) aid_size_side_button_ParamLimits

0xa17e,	// (0x0001d619) aid_size_side_button

0xa197,	// (0x0001d632) grid_sctrl_middle_pane_ParamLimits

0xa197,	// (0x0001d632) grid_sctrl_middle_pane

0xf3cf,	// (0x0002286a) sctrl_sk_bottom_pane

0xf3e0,	// (0x0002287b) sctrl_sk_top_pane

0xf3f2,	// (0x0002288d) aid_touch_sctrl_top

0xf3ff,	// (0x0002289a) bg_sctrl_sk_pane_ParamLimits

0xf3ff,	// (0x0002289a) bg_sctrl_sk_pane

0xf40d,	// (0x000228a8) sctrl_sk_top_pane_g1

0xf41a,	// (0x000228b5) sctrl_sk_top_pane_t1

0xf3f2,	// (0x0002288d) aid_touch_sctrl_bottom

0xf3ff,	// (0x0002289a) bg_sctrl_sk_pane_cp_ParamLimits

0xf3ff,	// (0x0002289a) bg_sctrl_sk_pane_cp

0xf435,	// (0x000228d0) sctrl_sk_bottom_pane_g1

0xf41a,	// (0x000228b5) sctrl_sk_bottom_pane_t1

0xa1b1,	// (0x0001d64c) cell_sctrl_middle_pane_ParamLimits

0xa1b1,	// (0x0001d64c) cell_sctrl_middle_pane

0xa1c4,	// (0x0001d65f) aid_touch_sctrl_middle_ParamLimits

0xa1c4,	// (0x0001d65f) aid_touch_sctrl_middle

0xa1d1,	// (0x0001d66c) bg_sctrl_middle_pane_ParamLimits

0xa1d1,	// (0x0001d66c) bg_sctrl_middle_pane

0x034a,	// (0x000137e5) cell_sctrl_middle_pane_g1_ParamLimits

0x034a,	// (0x000137e5) cell_sctrl_middle_pane_g1

0xa1df,	// (0x0001d67a) cell_sctrl_middle_pane_g2_ParamLimits

0xa1df,	// (0x0001d67a) cell_sctrl_middle_pane_g2

0x0001,

0xfcef,	// (0x0002318a) cell_sctrl_middle_pane_g_ParamLimits

0xfcef,	// (0x0002318a) cell_sctrl_middle_pane_g

0x267f,	// (0x00015b1a) bg_sctrl_middle_pane_g1

0x2687,	// (0x00015b22) bg_sctrl_middle_pane_g2

0x268f,	// (0x00015b2a) bg_sctrl_middle_pane_g3

0x2697,	// (0x00015b32) bg_sctrl_middle_pane_g4

0x269f,	// (0x00015b3a) bg_sctrl_middle_pane_g5

0x26a7,	// (0x00015b42) bg_sctrl_middle_pane_g6

0x26af,	// (0x00015b4a) bg_sctrl_middle_pane_g7

0x26b7,	// (0x00015b52) bg_sctrl_middle_pane_g8

0x0007,

0xfcf4,	// (0x0002318f) bg_sctrl_middle_pane_g

0x26bf,	// (0x00015b5a) bg_sctrl_middle_pane_g8_copy1

0x267f,	// (0x00015b1a) bg_sctrl_sk_pane_g1

0x268f,	// (0x00015b2a) bg_sctrl_sk_pane_g2

0x2687,	// (0x00015b22) bg_sctrl_sk_pane_g3

0x0008,

0xf837,	// (0x00022cd2) bg_sctrl_sk_pane_g

0xe2fb,	// (0x00021796) aid_size_touch_scroll_bar

0x269f,	// (0x00015b3a) bg_sctrl_sk_pane_g4

0x2697,	// (0x00015b32) bg_sctrl_sk_pane_g5

0x26a7,	// (0x00015b42) bg_sctrl_sk_pane_g6

0x26af,	// (0x00015b4a) bg_sctrl_sk_pane_g7

0x26bf,	// (0x00015b5a) bg_sctrl_sk_pane_g8

0x26b7,	// (0x00015b52) bg_sctrl_sk_pane_g9

0xeb40,	// (0x00021fdb) popup_fep_china_hwr2_fs_candidate_window

0x98b1,	// (0x0001cd4c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x98b1,	// (0x0001cd4c) popup_fep_china_hwr2_fs_control_window

0xf1f7,	// (0x00022692) sctrl_sk_top_pane_g2

0x0001,

0xfcea,	// (0x00023185) sctrl_sk_top_pane_g

0xce5c,	// (0x000202f7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xce5c,	// (0x000202f7) aid_fep_china_hwr2_fs_cell

0xce72,	// (0x0002030d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xce72,	// (0x0002030d) bg_popup_fep_shadow_pane_cp4

0xce89,	// (0x00020324) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xce89,	// (0x00020324) bg_popup_fep_shadow_pane_cp5

0xce9b,	// (0x00020336) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xce9b,	// (0x00020336) popup_fep_china_hwr2_fs_control_bar_grid

0xceaf,	// (0x0002034a) popup_fep_china_hwr2_fs_control_funtion_grid

0x6d22,	// (0x0001a1bd) aid_fep_china_hwr2_fs_candi_cell

0xc722,	// (0x0001fbbd) bg_popup_fep_shadow_pane_cp6

0x6d2c,	// (0x0001a1c7) popup_fep_china_hwr2_fs_candidate_grid

0xceb7,	// (0x00020352) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xceb7,	// (0x00020352) cell_fep_china_hwr2_fs_funtion_grid

0x51d7,	// (0x00018672) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6d4e,	// (0x0001a1e9) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6d4e,	// (0x0001a1e9) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6d5c,	// (0x0001a1f7) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6d5c,	// (0x0001a1f7) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd05,	// (0x000231a0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd05,	// (0x000231a0) cell_fep_china_hwr2_fs_funtion_grid_g

0xcecf,	// (0x0002036a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xcecf,	// (0x0002036a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xcee4,	// (0x0002037f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xcee4,	// (0x0002037f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0a,	// (0x000231a5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0a,	// (0x000231a5) cell_fep_china_hwr2_fs_funtion_grid_t

0x6da3,	// (0x0001a23e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6dab,	// (0x0001a246) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6db3,	// (0x0001a24e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0f,	// (0x000231aa) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6dbb,	// (0x0001a256) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6dbb,	// (0x0001a256) cell_fep_china_hwr2_fs_candidate_grid

0x6dda,	// (0x0001a275) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6de2,	// (0x0001a27d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x51d7,	// (0x00018672) cell_fep_china_hwr2_fs_candidate_grid_g1

0x51d7,	// (0x00018672) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb23,	// (0x00022fbe) cell_fep_china_hwr2_fs_candidate_grid_g

0x6dea,	// (0x0001a285) cell_fep_china_hwr2_fs_candidate_grid_t1

0x222d,	// (0x000156c8) clock_nsta_pane_cp_24_ParamLimits

0x222d,	// (0x000156c8) clock_nsta_pane_cp_24

0x22ad,	// (0x00015748) indicator_nsta_pane_cp_24_ParamLimits

0x22ad,	// (0x00015748) indicator_nsta_pane_cp_24

0x3447,	// (0x000168e2) heading_pane_g1

0x0001,

0xf89c,	// (0x00022d37) heading_pane_g

0x3f97,	// (0x00017432) grid_sct_catagory_button_pane

0x3fc9,	// (0x00017464) scroll_pane_cp5_ParamLimits

0x4de4,	// (0x0001827f) button_value_adjust_pane_cp5_ParamLimits

0x4de4,	// (0x0001827f) button_value_adjust_pane_cp5

0x4eea,	// (0x00018385) form2_midp_time_pane_ParamLimits

0x6df8,	// (0x0001a293) cell_sct_catagory_button_pane_ParamLimits

0x6df8,	// (0x0001a293) cell_sct_catagory_button_pane

0x519c,	// (0x00018637) bg_button_pane_cp01_ParamLimits

0x519c,	// (0x00018637) bg_button_pane_cp01

0x51d7,	// (0x00018672) cell_sct_catagory_button_pane_g1

0x9e7e,	// (0x0001d319) popup_tb_extension_window

0xcf00,	// (0x0002039b) aid_size_cell_ext_ParamLimits

0xcf00,	// (0x0002039b) aid_size_cell_ext

0xe13d,	// (0x000215d8) bg_tb_trans_pane_cp1_ParamLimits

0xe13d,	// (0x000215d8) bg_tb_trans_pane_cp1

0xcf26,	// (0x000203c1) grid_tb_ext_pane_ParamLimits

0xcf26,	// (0x000203c1) grid_tb_ext_pane

0xcf63,	// (0x000203fe) cell_tb_ext_pane_ParamLimits

0xcf63,	// (0x000203fe) cell_tb_ext_pane

0xcf8b,	// (0x00020426) cell_tb_ext_pane_g1_ParamLimits

0xcf8b,	// (0x00020426) cell_tb_ext_pane_g1

0x6e8c,	// (0x0001a327) cell_tb_ext_pane_t1

0xc8df,	// (0x0001fd7a) list_highlight_pane_cp11_ParamLimits

0xc8df,	// (0x0001fd7a) list_highlight_pane_cp11

0x95d6,	// (0x0001ca71) popup_uni_indicator_window_ParamLimits

0x95d6,	// (0x0001ca71) popup_uni_indicator_window

0xe449,	// (0x000218e4) bg_popup_sub_pane_cp14

0x6ea7,	// (0x0001a342) list_uniindi_pane

0x6eb3,	// (0x0001a34e) uniindi_top_pane

0xc8df,	// (0x0001fd7a) bg_uniindi_top_pane

0x6ed4,	// (0x0001a36f) uniindi_top_pane_g1

0x6eea,	// (0x0001a385) uniindi_top_pane_g2

0x0003,

0xfd16,	// (0x000231b1) uniindi_top_pane_g

0x6f14,	// (0x0001a3af) uniindi_top_pane_t1

0x6f40,	// (0x0001a3db) list_single_uniindi_pane_ParamLimits

0x6f40,	// (0x0001a3db) list_single_uniindi_pane

0x51d7,	// (0x00018672) bg_uniindi_top_pane_g1

0x6f53,	// (0x0001a3ee) list_single_uniindi_pane_g1

0x6f66,	// (0x0001a401) list_single_uniindi_pane_t1

0xdeb8,	// (0x00021353) control_bg_pane

0x6f8b,	// (0x0001a426) bg_sctrl_sk_pane_cp1

0x6f94,	// (0x0001a42f) bg_sctrl_sk_pane_cp2

0x6f9d,	// (0x0001a438) control_bg_pane_g1

0x6fa6,	// (0x0001a441) control_bg_pane_g2

0x0001,

0xfd1f,	// (0x000231ba) control_bg_pane_g

0x4c1c,	// (0x000180b7) cell_indicator_nsta_pane_g1_ParamLimits

0xc00b,	// (0x0001f4a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa87,	// (0x00022f22) cell_indicator_nsta_pane_g_ParamLimits

0x4f77,	// (0x00018412) form2_midp_time_pane_t1_ParamLimits

0xed26,	// (0x000221c1) main_idle_act4_pane_ParamLimits

0xed26,	// (0x000221c1) main_idle_act4_pane

0x9e7e,	// (0x0001d319) popup_tb_extension_window_ParamLimits

0xcf4b,	// (0x000203e6) tb_ext_find_pane_ParamLimits

0xcf4b,	// (0x000203e6) tb_ext_find_pane

0x6faf,	// (0x0001a44a) ai_gene_pane_1_cp1

0x1f22,	// (0x000153bd) ai_gene_pane_2_cp1

0x6fb7,	// (0x0001a452) list_single_idle_plugin_calendar_pane

0x6fc0,	// (0x0001a45b) list_single_idle_plugin_notification_pane

0x6fc9,	// (0x0001a464) list_single_idle_plugin_player_pane

0xcfa8,	// (0x00020443) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcfa8,	// (0x00020443) list_single_idle_plugin_shortcut_pane

0xcfd0,	// (0x0002046b) main_idle_act4_pane_t1

0xcfe8,	// (0x00020483) main_idle_act4_pane_t2

0x0001,

0xfd24,	// (0x000231bf) main_idle_act4_pane_t

0xd000,	// (0x0002049b) middle_sk_idle_act4_pane_ParamLimits

0xd000,	// (0x0002049b) middle_sk_idle_act4_pane

0xd01c,	// (0x000204b7) popup_clock_digital_analogue_window_cp2

0xd043,	// (0x000204de) shortcut_wheel_idle_act4_pane_ParamLimits

0xd043,	// (0x000204de) shortcut_wheel_idle_act4_pane

0x51d7,	// (0x00018672) shortcut_wheel_idle_act4_pane_g1

0x51d7,	// (0x00018672) shortcut_wheel_idle_act4_pane_g2

0x51d7,	// (0x00018672) shortcut_wheel_idle_act4_pane_g3

0x51d7,	// (0x00018672) shortcut_wheel_idle_act4_pane_g4

0x51d7,	// (0x00018672) shortcut_wheel_idle_act4_pane_g5

0x705c,	// (0x0001a4f7) shortcut_wheel_idle_act4_pane_g6

0x7064,	// (0x0001a4ff) shortcut_wheel_idle_act4_pane_g7

0x706c,	// (0x0001a507) shortcut_wheel_idle_act4_pane_g8

0x7074,	// (0x0001a50f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd29,	// (0x000231c4) shortcut_wheel_idle_act4_pane_g

0xc6f2,	// (0x0001fb8d) middle_sk_idle_act4_pane_g1_ParamLimits

0xc6f2,	// (0x0001fb8d) middle_sk_idle_act4_pane_g1

0xd0c0,	// (0x0002055b) middle_sk_idle_act4_pane_g2_ParamLimits

0xd0c0,	// (0x0002055b) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4c,	// (0x000231e7) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4c,	// (0x000231e7) middle_sk_idle_act4_pane_g

0xd0d8,	// (0x00020573) middle_sk_idle_act4_pane_t1_ParamLimits

0xd0d8,	// (0x00020573) middle_sk_idle_act4_pane_t1

0xd107,	// (0x000205a2) grid_ai_shortcut_pane_ParamLimits

0xd107,	// (0x000205a2) grid_ai_shortcut_pane

0xd124,	// (0x000205bf) list_highlight_pane_cp16_ParamLimits

0xd124,	// (0x000205bf) list_highlight_pane_cp16

0xd131,	// (0x000205cc) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd131,	// (0x000205cc) list_single_idle_plugin_shortcut_pane_g1

0xd13d,	// (0x000205d8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd13d,	// (0x000205d8) list_single_idle_plugin_shortcut_pane_g2

0xd15b,	// (0x000205f6) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd15b,	// (0x000205f6) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd51,	// (0x000231ec) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd51,	// (0x000231ec) list_single_idle_plugin_shortcut_pane_g

0xd170,	// (0x0002060b) cell_ai_shortcut_pane_ParamLimits

0xd170,	// (0x0002060b) cell_ai_shortcut_pane

0xd186,	// (0x00020621) cell_ai_shortcut_pane_g1_ParamLimits

0xd186,	// (0x00020621) cell_ai_shortcut_pane_g1

0x6faf,	// (0x0001a44a) ai_gene_pane_1_cp2

0x71a5,	// (0x0001a640) ai_gene_pane_2_cp2

0x71ad,	// (0x0001a648) list_highlight_pane_cp15

0x71b6,	// (0x0001a651) list_single_idle_plugin_calendar_pane_g1

0x71ad,	// (0x0001a648) list_highlight_pane_cp17

0x71be,	// (0x0001a659) list_single_idle_plugin_calendar_pane_g1_copy1

0x71c6,	// (0x0001a661) list_single_idle_plugin_player_pane_g1

0x41fe,	// (0x00017699) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd58,	// (0x000231f3) list_single_idle_plugin_player_pane_g

0x71ce,	// (0x0001a669) list_single_idle_plugin_player_pane_t1

0x71dc,	// (0x0001a677) list_single_idle_plugin_player_pane_t2

0x71ea,	// (0x0001a685) list_single_idle_plugin_player_pane_t3

0x71f8,	// (0x0001a693) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5d,	// (0x000231f8) list_single_idle_plugin_player_pane_t

0x7206,	// (0x0001a6a1) wait_bar_pane_cp15

0x720e,	// (0x0001a6a9) grid_ai_notification_pane

0x41fe,	// (0x00017699) list_single_idle_plugin_notification_pane_g1

0xd1a8,	// (0x00020643) cell_ai_notification_pane_ParamLimits

0xd1a8,	// (0x00020643) cell_ai_notification_pane

0x7224,	// (0x0001a6bf) cell_ai_notification_pane_g1

0x722c,	// (0x0001a6c7) cell_ai_notification_pane_t1

0xd1b5,	// (0x00020650) tb_ext_find_button_pane

0xd1bd,	// (0x00020658) tb_ext_find_pane_g1

0xd1c5,	// (0x00020660) tb_ext_find_pane_t1

0x1707,	// (0x00014ba2) tb_ext_find_button_pane_g1

0x7258,	// (0x0001a6f3) tb_ext_find_button_pane_g2

0x0001,

0xfd66,	// (0x00023201) tb_ext_find_button_pane_g

0xcfd0,	// (0x0002046b) main_idle_act4_pane_t1_ParamLimits

0xcfe8,	// (0x00020483) main_idle_act4_pane_t2_ParamLimits

0xfd24,	// (0x000231bf) main_idle_act4_pane_t_ParamLimits

0xd01c,	// (0x000204b7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd033,	// (0x000204ce) sat_plugin_idle_act4_pane_ParamLimits

0xd033,	// (0x000204ce) sat_plugin_idle_act4_pane

0xd1d3,	// (0x0002066e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd1d3,	// (0x0002066e) sat_plugin_idle_act4_pane_t1

0xd1eb,	// (0x00020686) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd1eb,	// (0x00020686) sat_plugin_idle_act4_pane_t2

0xd203,	// (0x0002069e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd203,	// (0x0002069e) sat_plugin_idle_act4_pane_t3

0xd21b,	// (0x000206b6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd21b,	// (0x000206b6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6b,	// (0x00023206) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6b,	// (0x00023206) sat_plugin_idle_act4_pane_t

0xdf7d,	// (0x00021418) popup_battery_window_ParamLimits

0xdf7d,	// (0x00021418) popup_battery_window

0xc8df,	// (0x0001fd7a) bg_popup_sub_pane_cp25_ParamLimits

0xc8df,	// (0x0001fd7a) bg_popup_sub_pane_cp25

0x72ad,	// (0x0001a748) popup_battery_window_g1_ParamLimits

0x72ad,	// (0x0001a748) popup_battery_window_g1

0x72b9,	// (0x0001a754) popup_battery_window_t1_ParamLimits

0x72b9,	// (0x0001a754) popup_battery_window_t1

0x72cb,	// (0x0001a766) popup_battery_window_t2_ParamLimits

0x72cb,	// (0x0001a766) popup_battery_window_t2

0x0001,

0xfd74,	// (0x0002320f) popup_battery_window_t_ParamLimits

0xfd74,	// (0x0002320f) popup_battery_window_t

0xb437,	// (0x0001e8d2) midp_canvas_pane_ParamLimits

0xb493,	// (0x0001e92e) midp_keypad_pane_ParamLimits

0xb493,	// (0x0001e92e) midp_keypad_pane

0x2107,	// (0x000155a2) main_midp_pane_ParamLimits

0x4c97,	// (0x00018132) signal_pane_g2_cp_ParamLimits

0xd233,	// (0x000206ce) aid_size_cell_midp_keypad_ParamLimits

0xd233,	// (0x000206ce) aid_size_cell_midp_keypad

0xd251,	// (0x000206ec) midp_keyp_game_grid_pane_ParamLimits

0xd251,	// (0x000206ec) midp_keyp_game_grid_pane

0xd278,	// (0x00020713) midp_keyp_rocker_pane_ParamLimits

0xd278,	// (0x00020713) midp_keyp_rocker_pane

0xd2c7,	// (0x00020762) midp_keyp_sk_left_pane_ParamLimits

0xd2c7,	// (0x00020762) midp_keyp_sk_left_pane

0xd31d,	// (0x000207b8) midp_keyp_sk_right_pane_ParamLimits

0xd31d,	// (0x000207b8) midp_keyp_sk_right_pane

0xc722,	// (0x0001fbbd) bg_button_pane_cp03

0xd373,	// (0x0002080e) midp_keyp_sk_left_pane_g1

0xc722,	// (0x0001fbbd) bg_button_pane_cp04

0xd373,	// (0x0002080e) midp_keyp_sk_right_pane_g1

0x51d7,	// (0x00018672) midp_keyp_rocker_pane_g1

0xd37b,	// (0x00020816) keyp_game_cell_pane_ParamLimits

0xd37b,	// (0x00020816) keyp_game_cell_pane

0xc722,	// (0x0001fbbd) bg_button_pane_cp02

0xd3a1,	// (0x0002083c) keyp_game_cell_pane_g1

0x956d,	// (0x0001ca08) popup_fep_vkb2_window_ParamLimits

0x956d,	// (0x0001ca08) popup_fep_vkb2_window

0xa1eb,	// (0x0001d686) aid_size_cell_vkb2_ParamLimits

0xa1eb,	// (0x0001d686) aid_size_cell_vkb2

0xa217,	// (0x0001d6b2) popup_fep_vkb2_window_g1_ParamLimits

0xa217,	// (0x0001d6b2) popup_fep_vkb2_window_g1

0xa267,	// (0x0001d702) vkb2_area_bottom_pane_ParamLimits

0xa267,	// (0x0001d702) vkb2_area_bottom_pane

0xa2c3,	// (0x0001d75e) vkb2_area_keypad_pane_ParamLimits

0xa2c3,	// (0x0001d75e) vkb2_area_keypad_pane

0xa311,	// (0x0001d7ac) vkb2_area_top_pane_ParamLimits

0xa311,	// (0x0001d7ac) vkb2_area_top_pane

0xa39e,	// (0x0001d839) vkb2_top_entry_pane_ParamLimits

0xa39e,	// (0x0001d839) vkb2_top_entry_pane

0xa3cb,	// (0x0001d866) vkb2_top_grid_left_pane_ParamLimits

0xa3cb,	// (0x0001d866) vkb2_top_grid_left_pane

0xa3ec,	// (0x0001d887) vkb2_top_grid_right_pane_ParamLimits

0xa3ec,	// (0x0001d887) vkb2_top_grid_right_pane

0xf47c,	// (0x00022917) vkb2_cell_keypad_pane_ParamLimits

0xf47c,	// (0x00022917) vkb2_cell_keypad_pane

0xa434,	// (0x0001d8cf) vkb2_area_bottom_grid_pane_ParamLimits

0xa434,	// (0x0001d8cf) vkb2_area_bottom_grid_pane

0xa45e,	// (0x0001d8f9) vkb2_area_bottom_pane_g1_ParamLimits

0xa45e,	// (0x0001d8f9) vkb2_area_bottom_pane_g1

0xa484,	// (0x0001d91f) vkb2_area_bottom_pane_g2_ParamLimits

0xa484,	// (0x0001d91f) vkb2_area_bottom_pane_g2

0xa4b5,	// (0x0001d950) vkb2_area_bottom_pane_g3_ParamLimits

0xa4b5,	// (0x0001d950) vkb2_area_bottom_pane_g3

0x0002,

0xfd79,	// (0x00023214) vkb2_area_bottom_pane_g_ParamLimits

0xfd79,	// (0x00023214) vkb2_area_bottom_pane_g

0x00eb,	// (0x00013586) vkb2_top_cell_left_pane_ParamLimits

0x00eb,	// (0x00013586) vkb2_top_cell_left_pane

0xd3aa,	// (0x00020845) vkb2_top_entry_pane_g1_ParamLimits

0xd3aa,	// (0x00020845) vkb2_top_entry_pane_g1

0xd3b8,	// (0x00020853) vkb2_top_entry_pane_t1_ParamLimits

0xd3b8,	// (0x00020853) vkb2_top_entry_pane_t1

0x7475,	// (0x0001a910) vkb2_top_entry_pane_t2_ParamLimits

0x7475,	// (0x0001a910) vkb2_top_entry_pane_t2

0x74a7,	// (0x0001a942) vkb2_top_entry_pane_t3_ParamLimits

0x74a7,	// (0x0001a942) vkb2_top_entry_pane_t3

0x0002,

0xfd80,	// (0x0002321b) vkb2_top_entry_pane_t_ParamLimits

0xfd80,	// (0x0002321b) vkb2_top_entry_pane_t

0xa51f,	// (0x0001d9ba) vkb2_top_grid_right_pane_g1_ParamLimits

0xa51f,	// (0x0001d9ba) vkb2_top_grid_right_pane_g1

0x014e,	// (0x000135e9) vkb2_top_grid_right_pane_g2_ParamLimits

0x014e,	// (0x000135e9) vkb2_top_grid_right_pane_g2

0x0166,	// (0x00013601) vkb2_top_grid_right_pane_g3_ParamLimits

0x0166,	// (0x00013601) vkb2_top_grid_right_pane_g3

0xa535,	// (0x0001d9d0) vkb2_top_grid_right_pane_g4_ParamLimits

0xa535,	// (0x0001d9d0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd87,	// (0x00023222) vkb2_top_grid_right_pane_g_ParamLimits

0xfd87,	// (0x00023222) vkb2_top_grid_right_pane_g

0x0194,	// (0x0001362f) vkb2_top_cell_left_pane_g1

0x01ab,	// (0x00013646) vkb2_cell_keypad_pane_g1_ParamLimits

0x01ab,	// (0x00013646) vkb2_cell_keypad_pane_g1

0x74cb,	// (0x0001a966) vkb2_cell_keypad_pane_t1_ParamLimits

0x74cb,	// (0x0001a966) vkb2_cell_keypad_pane_t1

0x01b9,	// (0x00013654) vkb2_cell_bottom_grid_pane_ParamLimits

0x01b9,	// (0x00013654) vkb2_cell_bottom_grid_pane

0x01f2,	// (0x0001368d) vkb2_cell_bottom_grid_pane_g1

0xd064,	// (0x000204ff) aid_call2_pane_cp02

0xd06c,	// (0x00020507) aid_call_pane_cp02

0xd074,	// (0x0002050f) clock_digital_number_pane_cp10

0xd07c,	// (0x00020517) clock_digital_number_pane_cp11

0xd084,	// (0x0002051f) clock_digital_number_pane_cp12

0xd08c,	// (0x00020527) clock_digital_number_pane_cp13

0xd094,	// (0x0002052f) clock_digital_separator_pane_cp10

0x1707,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g1

0x1707,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g2

0xd09c,	// (0x00020537) popup_clock_digital_analogue_window_cp2_g3

0x1707,	// (0x00014ba2) popup_clock_digital_analogue_window_cp2_g4

0xd09c,	// (0x00020537) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3c,	// (0x000231d7) popup_clock_digital_analogue_window_cp2_g

0xd0a4,	// (0x0002053f) popup_clock_digital_analogue_window_cp2_t1

0xd0b2,	// (0x0002054d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd47,	// (0x000231e2) popup_clock_digital_analogue_window_cp2_t

0x51d7,	// (0x00018672) clock_digital_number_pane_cp10_g1

0x51d7,	// (0x00018672) clock_digital_number_pane_cp10_g2

0x0001,

0xfb23,	// (0x00022fbe) clock_digital_number_pane_cp10_g

0x51d7,	// (0x00018672) clock_digital_separator_pane_cp10_g1

0x51d7,	// (0x00018672) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb23,	// (0x00022fbe) clock_digital_separator_pane_cp10_g

0x6ef6,	// (0x0001a391) uniindi_top_pane_g3

0x6f07,	// (0x0001a3a2) uniindi_top_pane_g4

0xf507,	// (0x000229a2) vkb2_row_keypad_pane_ParamLimits

0xf507,	// (0x000229a2) vkb2_row_keypad_pane

0x020e,	// (0x000136a9) vkb2_cell_t_keypad_pane_ParamLimits

0x020e,	// (0x000136a9) vkb2_cell_t_keypad_pane

0x021e,	// (0x000136b9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x021e,	// (0x000136b9) vkb2_cell_t_keypad_pane_cp08

0x0233,	// (0x000136ce) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0233,	// (0x000136ce) vkb2_cell_t_keypad_pane_cp09

0x0247,	// (0x000136e2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0247,	// (0x000136e2) vkb2_cell_t_keypad_pane_cp01

0x0258,	// (0x000136f3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0258,	// (0x000136f3) vkb2_cell_t_keypad_pane_cp02

0x0269,	// (0x00013704) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0269,	// (0x00013704) vkb2_cell_t_keypad_pane_cp03

0x027a,	// (0x00013715) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x027a,	// (0x00013715) vkb2_cell_t_keypad_pane_cp04

0x028b,	// (0x00013726) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x028b,	// (0x00013726) vkb2_cell_t_keypad_pane_cp05

0x029c,	// (0x00013737) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x029c,	// (0x00013737) vkb2_cell_t_keypad_pane_cp06

0x02af,	// (0x0001374a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x02af,	// (0x0001374a) vkb2_cell_t_keypad_pane_cp07

0x02c4,	// (0x0001375f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x02c4,	// (0x0001375f) vkb2_cell_t_keypad_pane_cp10

0xf1f7,	// (0x00022692) vkb2_cell_t_keypad_pane_g1

0x74e2,	// (0x0001a97d) vkb2_cell_t_keypad_pane_t1

0xdeb8,	// (0x00021353) popup_grid_graphic2_window

0xd3f1,	// (0x0002088c) aid_size_cell_graphic2_ParamLimits

0xd3f1,	// (0x0002088c) aid_size_cell_graphic2

0xd42f,	// (0x000208ca) bg_popup_window_pane_cp21_ParamLimits

0xd42f,	// (0x000208ca) bg_popup_window_pane_cp21

0xd43d,	// (0x000208d8) graphic2_pages_pane_ParamLimits

0xd43d,	// (0x000208d8) graphic2_pages_pane

0xd495,	// (0x00020930) grid_graphic2_control_pane_ParamLimits

0xd495,	// (0x00020930) grid_graphic2_control_pane

0xd4dd,	// (0x00020978) grid_graphic2_pane_ParamLimits

0xd4dd,	// (0x00020978) grid_graphic2_pane

0xd568,	// (0x00020a03) cell_graphic2_pane

0xdeb8,	// (0x00021353) main_comp_mode_pane

0x66fe,	// (0x00019b99) list_ai3_gene_pane_ParamLimits

0xcda4,	// (0x0002023f) bg_popup_window_pane_cp19_ParamLimits

0x6b35,	// (0x00019fd0) bg_touch_area_indi_pane_ParamLimits

0x6b35,	// (0x00019fd0) bg_touch_area_indi_pane

0x6b4b,	// (0x00019fe6) bg_touch_area_indi_pane_cp01_ParamLimits

0x6b4b,	// (0x00019fe6) bg_touch_area_indi_pane_cp01

0x6b61,	// (0x00019ffc) bg_touch_area_indi_pane_cp02_ParamLimits

0x6b61,	// (0x00019ffc) bg_touch_area_indi_pane_cp02

0x6b7b,	// (0x0001a016) bg_touch_area_indi_pane_cp03_ParamLimits

0x6b7b,	// (0x0001a016) bg_touch_area_indi_pane_cp03

0x6b95,	// (0x0001a030) popup_slider_window_g1_ParamLimits

0x6bb1,	// (0x0001a04c) popup_slider_window_g2_ParamLimits

0x6bcd,	// (0x0001a068) popup_slider_window_g3_ParamLimits

0xfcd1,	// (0x0002316c) popup_slider_window_g_ParamLimits

0x6c33,	// (0x0001a0ce) popup_slider_window_t1_ParamLimits

0x6ca7,	// (0x0001a142) small_volume_slider_vertical_pane_ParamLimits

0xd568,	// (0x00020a03) cell_graphic2_pane_ParamLimits

0xd5ca,	// (0x00020a65) bg_button_pane_cp10_ParamLimits

0xd5ca,	// (0x00020a65) bg_button_pane_cp10

0xd5dd,	// (0x00020a78) bg_button_pane_cp11_ParamLimits

0xd5dd,	// (0x00020a78) bg_button_pane_cp11

0xd5f0,	// (0x00020a8b) graphic2_pages_pane_g1_ParamLimits

0xd5f0,	// (0x00020a8b) graphic2_pages_pane_g1

0xd60b,	// (0x00020aa6) graphic2_pages_pane_g2_ParamLimits

0xd60b,	// (0x00020aa6) graphic2_pages_pane_g2

0x0001,

0xfd95,	// (0x00023230) graphic2_pages_pane_g_ParamLimits

0xfd95,	// (0x00023230) graphic2_pages_pane_g

0xd623,	// (0x00020abe) graphic2_pages_pane_t1_ParamLimits

0xd623,	// (0x00020abe) graphic2_pages_pane_t1

0xd63b,	// (0x00020ad6) cell_graphic2_control_pane_ParamLimits

0xd63b,	// (0x00020ad6) cell_graphic2_control_pane

0xd669,	// (0x00020b04) cell_graphic2_pane_g1_ParamLimits

0xd669,	// (0x00020b04) cell_graphic2_pane_g1

0xc700,	// (0x0001fb9b) cell_graphic2_pane_g2_ParamLimits

0xc700,	// (0x0001fb9b) cell_graphic2_pane_g2

0xca90,	// (0x0001ff2b) cell_graphic2_pane_g3_ParamLimits

0xca90,	// (0x0001ff2b) cell_graphic2_pane_g3

0xc70d,	// (0x0001fba8) cell_graphic2_pane_g4_ParamLimits

0xc70d,	// (0x0001fba8) cell_graphic2_pane_g4

0xd676,	// (0x00020b11) cell_graphic2_pane_g5_ParamLimits

0xd676,	// (0x00020b11) cell_graphic2_pane_g5

0x0004,

0xfd9a,	// (0x00023235) cell_graphic2_pane_g_ParamLimits

0xfd9a,	// (0x00023235) cell_graphic2_pane_g

0xd692,	// (0x00020b2d) cell_graphic2_pane_t1_ParamLimits

0xd692,	// (0x00020b2d) cell_graphic2_pane_t1

0x343b,	// (0x000168d6) grid_highlight_pane_cp11_ParamLimits

0x343b,	// (0x000168d6) grid_highlight_pane_cp11

0xc8df,	// (0x0001fd7a) bg_button_pane_cp05

0xd6db,	// (0x00020b76) cell_graphic2_control_pane_g1

0x51d7,	// (0x00018672) bg_touch_area_indi_pane_g1

0x77c5,	// (0x0001ac60) aid_cmod_rocker_key_size

0x77cf,	// (0x0001ac6a) aid_cmode_itu_key_size

0x77d9,	// (0x0001ac74) main_cmode_video_pane

0x77e3,	// (0x0001ac7e) main_comp_mode_itu_pane

0x77ef,	// (0x0001ac8a) main_comp_mode_rocker_pane

0x77fb,	// (0x0001ac96) cell_cmode_rocker_pane_ParamLimits

0x77fb,	// (0x0001ac96) cell_cmode_rocker_pane

0x780f,	// (0x0001acaa) cell_cmode_itu_pane_ParamLimits

0x780f,	// (0x0001acaa) cell_cmode_itu_pane

0xe449,	// (0x000218e4) bg_button_pane_cp06_ParamLimits

0xe449,	// (0x000218e4) bg_button_pane_cp06

0x5452,	// (0x000188ed) cell_cmode_rocker_pane_g1_ParamLimits

0x5452,	// (0x000188ed) cell_cmode_rocker_pane_g1

0x6d4e,	// (0x0001a1e9) cell_cmode_rocker_pane_g2_ParamLimits

0x6d4e,	// (0x0001a1e9) cell_cmode_rocker_pane_g2

0x0001,

0xfdaa,	// (0x00023245) cell_cmode_rocker_pane_g_ParamLimits

0xfdaa,	// (0x00023245) cell_cmode_rocker_pane_g

0xc722,	// (0x0001fbbd) bg_button_pane_cp07

0x7826,	// (0x0001acc1) cell_cmode_itu_pane_g1

0x782f,	// (0x0001acca) cell_cmode_itu_pane_t1

0x783d,	// (0x0001acd8) cell_cmode_itu_pane_t2

0x0001,

0xfdaf,	// (0x0002324a) cell_cmode_itu_pane_t

0x6f7b,	// (0x0001a416) aid_touch_ctrl_left

0x6f83,	// (0x0001a41e) aid_touch_ctrl_right

0xc722,	// (0x0001fbbd) compa_mode_pane

0xd703,	// (0x00020b9e) aid_cmod_rocker_key_size_cp

0xd70d,	// (0x00020ba8) aid_cmode_itu_key_size_cp

0x785f,	// (0x0001acfa) compa_mode_pane_g1

0x7867,	// (0x0001ad02) compa_mode_pane_g2

0x786f,	// (0x0001ad0a) compa_mode_pane_g3

0x0002,

0xfdb4,	// (0x0002324f) compa_mode_pane_g

0xd717,	// (0x00020bb2) main_comp_mode_itu_pane_cp

0xd71f,	// (0x00020bba) main_comp_mode_rocker_pane_cp

0xd727,	// (0x00020bc2) cell_cmode_itu_pane_cp_ParamLimits

0xd727,	// (0x00020bc2) cell_cmode_itu_pane_cp

0xd73c,	// (0x00020bd7) cell_cmode_rocker_pane_cp_ParamLimits

0xd73c,	// (0x00020bd7) cell_cmode_rocker_pane_cp

0xe449,	// (0x000218e4) bg_button_pane_cp06_cp_ParamLimits

0xe449,	// (0x000218e4) bg_button_pane_cp06_cp

0x5452,	// (0x000188ed) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5452,	// (0x000188ed) cell_cmode_rocker_pane_g1_cp

0x51d7,	// (0x00018672) cell_cmode_rocker_pane_g2_cp

0xc722,	// (0x0001fbbd) bg_button_pane_cp07_cp

0xd74e,	// (0x00020be9) cell_cmode_itu_pane_g1_cp

0xd757,	// (0x00020bf2) cell_cmode_itu_pane_t1_cp

0xd757,	// (0x00020bf2) cell_cmode_itu_pane_t2_cp

0xbddc,	// (0x0001f277) settings_code_pane_cp2

0xc792,	// (0x0001fc2d) bg_popup_window_pane_cp3_ParamLimits

0xe0c7,	// (0x00021562) heading_pane_cp3_ParamLimits

0xe0d6,	// (0x00021571) listscroll_popup_graphic_pane_ParamLimits

0xf005,	// (0x000224a0) fep_hwr_aid_pane_ParamLimits

0xf3f2,	// (0x0002288d) aid_touch_sctrl_top_ParamLimits

0xf40d,	// (0x000228a8) sctrl_sk_top_pane_g1_ParamLimits

0xf1f7,	// (0x00022692) sctrl_sk_top_pane_g2_ParamLimits

0xfcea,	// (0x00023185) sctrl_sk_top_pane_g_ParamLimits

0xf41a,	// (0x000228b5) sctrl_sk_top_pane_t1_ParamLimits

0xf3f2,	// (0x0002288d) aid_touch_sctrl_bottom_ParamLimits

0xf41a,	// (0x000228b5) sctrl_sk_bottom_pane_t1_ParamLimits

0x6ec0,	// (0x0001a35b) aid_area_touch_clock

0xa35d,	// (0x0001d7f8) aid_vkb2_area_top_pane_cell_ParamLimits

0xa35d,	// (0x0001d7f8) aid_vkb2_area_top_pane_cell

0xa40d,	// (0x0001d8a8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa40d,	// (0x0001d8a8) aid_vkb2_area_bottom_pane_cell

0x742d,	// (0x0001a8c8) popup_char_count_window

0x78c5,	// (0x0001ad60) popup_char_count_window_g1

0x78ce,	// (0x0001ad69) popup_char_count_window_g2

0x78d7,	// (0x0001ad72) popup_char_count_window_g3

0x0002,

0xfdbb,	// (0x00023256) popup_char_count_window_g

0x78e0,	// (0x0001ad7b) popup_char_count_window_t1

0xf44c,	// (0x000228e7) popup_fep_char_preview_window_ParamLimits

0xf44c,	// (0x000228e7) popup_fep_char_preview_window

0xa37d,	// (0x0001d818) vkb2_top_candi_pane_ParamLimits

0xa37d,	// (0x0001d818) vkb2_top_candi_pane

0xd765,	// (0x00020c00) cell_vkb2_top_candi_pane_ParamLimits

0xd765,	// (0x00020c00) cell_vkb2_top_candi_pane

0x02d9,	// (0x00013774) bg_popup_fep_char_preview_window_ParamLimits

0x02d9,	// (0x00013774) bg_popup_fep_char_preview_window

0x02e7,	// (0x00013782) popup_fep_char_preview_window_t1_ParamLimits

0x02e7,	// (0x00013782) popup_fep_char_preview_window_t1

0x793c,	// (0x0001add7) bg_popup_fep_char_preview_window_g1

0x7944,	// (0x0001addf) bg_popup_fep_char_preview_window_g2

0x794c,	// (0x0001ade7) bg_popup_fep_char_preview_window_g3

0x7954,	// (0x0001adef) bg_popup_fep_char_preview_window_g4

0x795c,	// (0x0001adf7) bg_popup_fep_char_preview_window_g5

0x7964,	// (0x0001adff) bg_popup_fep_char_preview_window_g6

0x796c,	// (0x0001ae07) bg_popup_fep_char_preview_window_g7

0x7974,	// (0x0001ae0f) bg_popup_fep_char_preview_window_g8

0x797c,	// (0x0001ae17) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc2,	// (0x0002325d) bg_popup_fep_char_preview_window_g

0xf1f7,	// (0x00022692) cell_vkb2_top_candi_pane_g1_ParamLimits

0xf1f7,	// (0x00022692) cell_vkb2_top_candi_pane_g1

0xf205,	// (0x000226a0) cell_vkb2_top_candi_pane_g2_ParamLimits

0xf205,	// (0x000226a0) cell_vkb2_top_candi_pane_g2

0x5adf,	// (0x00018f7a) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5adf,	// (0x00018f7a) cell_vkb2_top_candi_pane_g3

0x0329,	// (0x000137c4) cell_vkb2_top_candi_pane_g4_ParamLimits

0x0329,	// (0x000137c4) cell_vkb2_top_candi_pane_g4

0x5abe,	// (0x00018f59) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5abe,	// (0x00018f59) cell_vkb2_top_candi_pane_g5

0x034a,	// (0x000137e5) cell_vkb2_top_candi_pane_g6_ParamLimits

0x034a,	// (0x000137e5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x00023272) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x00023272) cell_vkb2_top_candi_pane_g

0x0358,	// (0x000137f3) cell_vkb2_top_candi_pane_t1

0xee22,	// (0x000222bd) aid_size_touch_slider_mark_ParamLimits

0xee22,	// (0x000222bd) aid_size_touch_slider_mark

0xd479,	// (0x00020914) grid_graphic2_catg_pane_ParamLimits

0xd479,	// (0x00020914) grid_graphic2_catg_pane

0xd537,	// (0x000209d2) popup_grid_graphic2_window_t1_ParamLimits

0xd537,	// (0x000209d2) popup_grid_graphic2_window_t1

0xd54d,	// (0x000209e8) popup_grid_graphic2_window_t2_ParamLimits

0xd54d,	// (0x000209e8) popup_grid_graphic2_window_t2

0x0001,

0xfd90,	// (0x0002322b) popup_grid_graphic2_window_t_ParamLimits

0xfd90,	// (0x0002322b) popup_grid_graphic2_window_t

0xc8df,	// (0x0001fd7a) bg_button_pane_cp05_ParamLimits

0xd6db,	// (0x00020b76) cell_graphic2_control_pane_g1_ParamLimits

0xd7c9,	// (0x00020c64) cell_graphic2_catg_pane_ParamLimits

0xd7c9,	// (0x00020c64) cell_graphic2_catg_pane

0xc722,	// (0x0001fbbd) bg_button_pane_cp12

0xd7db,	// (0x00020c76) cell_graphic2_catg_pane_g1

0x6e8c,	// (0x0001a327) cell_tb_ext_pane_t1_ParamLimits

0x010b,	// (0x000135a6) vkb2_top_cell_right_narrow_pane_ParamLimits

0x010b,	// (0x000135a6) vkb2_top_cell_right_narrow_pane

0x0123,	// (0x000135be) vkb2_top_cell_right_wide_pane_ParamLimits

0x0123,	// (0x000135be) vkb2_top_cell_right_wide_pane

0xed26,	// (0x000221c1) bg_vkb2_func_pane_ParamLimits

0xed26,	// (0x000221c1) bg_vkb2_func_pane

0x0194,	// (0x0001362f) vkb2_top_cell_left_pane_g1_ParamLimits

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp03_ParamLimits

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp03

0x01f2,	// (0x0001368d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2687,	// (0x00015b22) bg_vkb2_func_pane_g1

0x268f,	// (0x00015b2a) bg_vkb2_func_pane_g2

0x269f,	// (0x00015b3a) bg_vkb2_func_pane_g3

0x2697,	// (0x00015b32) bg_vkb2_func_pane_g4

0x26a7,	// (0x00015b42) bg_vkb2_func_pane_g5

0x26af,	// (0x00015b4a) bg_vkb2_func_pane_g6

0x26b7,	// (0x00015b52) bg_vkb2_func_pane_g7

0x26bf,	// (0x00015b5a) bg_vkb2_func_pane_g8

0x267f,	// (0x00015b1a) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0002327f) bg_vkb2_func_pane_g

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp01_ParamLimits

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp01

0x0194,	// (0x0001362f) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x0194,	// (0x0001362f) vkb2_top_cell_right_wide_pane_g1

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp02_ParamLimits

0xed26,	// (0x000221c1) bg_vkb2_fuc_pane_cp02

0x0376,	// (0x00013811) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0376,	// (0x00013811) vkb2_top_cell_right_narrow_pane_g1

0xcce6,	// (0x00020181) aid_touch_area_decrease_ParamLimits

0xcce6,	// (0x00020181) aid_touch_area_decrease

0xcd20,	// (0x000201bb) aid_touch_area_increase_ParamLimits

0xcd20,	// (0x000201bb) aid_touch_area_increase

0xcd48,	// (0x000201e3) aid_touch_area_mute_ParamLimits

0xcd48,	// (0x000201e3) aid_touch_area_mute

0xcd70,	// (0x0002020b) aid_touch_area_slider_ParamLimits

0xcd70,	// (0x0002020b) aid_touch_area_slider

0xcdb0,	// (0x0002024b) popup_slider_window_g4_ParamLimits

0xcdb0,	// (0x0002024b) popup_slider_window_g4

0xcdd8,	// (0x00020273) popup_slider_window_g5_ParamLimits

0xcdd8,	// (0x00020273) popup_slider_window_g5

0xce0c,	// (0x000202a7) popup_slider_window_g6_ParamLimits

0xce0c,	// (0x000202a7) popup_slider_window_g6

0x6c61,	// (0x0001a0fc) popup_slider_window_t2_ParamLimits

0x6c61,	// (0x0001a0fc) popup_slider_window_t2

0x0001,

0xfcde,	// (0x00023179) popup_slider_window_t_ParamLimits

0xfcde,	// (0x00023179) popup_slider_window_t

0xce28,	// (0x000202c3) slider_pane_ParamLimits

0xce28,	// (0x000202c3) slider_pane

0x799f,	// (0x0001ae3a) slider_pane_g1_ParamLimits

0x799f,	// (0x0001ae3a) slider_pane_g1

0x79b3,	// (0x0001ae4e) slider_pane_g2_ParamLimits

0x79b3,	// (0x0001ae4e) slider_pane_g2

0x79c9,	// (0x0001ae64) slider_pane_g3_ParamLimits

0x79c9,	// (0x0001ae64) slider_pane_g3

0x0003,

0xfdf7,	// (0x00023292) slider_pane_g_ParamLimits

0xfdf7,	// (0x00023292) slider_pane_g

0x9eca,	// (0x0001d365) popup_tb_float_extension_window_ParamLimits

0x9eca,	// (0x0001d365) popup_tb_float_extension_window

0x79f5,	// (0x0001ae90) aid_size_cell_tb_float_ext

0xc722,	// (0x0001fbbd) bg_popup_sub_window_cp28

0x7a01,	// (0x0001ae9c) grid_tb_float_ext_pane

0x7a0d,	// (0x0001aea8) cell_tb_float_ext_pane_ParamLimits

0x7a0d,	// (0x0001aea8) cell_tb_float_ext_pane

0x7a29,	// (0x0001aec4) cell_tb_float_ext_pane_g1

0x7a32,	// (0x0001aecd) grid_highlight_pane_cp12

0xa15c,	// (0x0001d5f7) cell_last_hwr_side_pane_ParamLimits

0xa15c,	// (0x0001d5f7) cell_last_hwr_side_pane

0x51d7,	// (0x00018672) cell_last_hwr_side_pane_g1

0x7a3b,	// (0x0001aed6) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0002329b) cell_last_hwr_side_pane_g

0xa4ea,	// (0x0001d985) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa4ea,	// (0x0001d985) vkb2_area_bottom_space_btn_pane

0xf1f7,	// (0x00022692) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x74e2,	// (0x0001a97d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0358,	// (0x000137f3) cell_vkb2_top_candi_pane_t1_ParamLimits

0x0392,	// (0x0001382d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x0392,	// (0x0001382d) vkb2_area_bottom_space_btn_pane_g1

0x03cc,	// (0x00013867) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x03cc,	// (0x00013867) vkb2_area_bottom_space_btn_pane_g2

0x0402,	// (0x0001389d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x0402,	// (0x0001389d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x000232a0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x000232a0) vkb2_area_bottom_space_btn_pane_g

0xf0bc,	// (0x00022557) cel_fep_hwr_func_pane_ParamLimits

0xf0bc,	// (0x00022557) cel_fep_hwr_func_pane

0xa131,	// (0x0001d5cc) cell_hwr_side_button_pane_ParamLimits

0xa131,	// (0x0001d5cc) cell_hwr_side_button_pane

0x6ec0,	// (0x0001a35b) aid_area_touch_clock_ParamLimits

0xc8df,	// (0x0001fd7a) bg_uniindi_top_pane_ParamLimits

0x6ed4,	// (0x0001a36f) uniindi_top_pane_g1_ParamLimits

0x6eea,	// (0x0001a385) uniindi_top_pane_g2_ParamLimits

0x6ef6,	// (0x0001a391) uniindi_top_pane_g3_ParamLimits

0x6f07,	// (0x0001a3a2) uniindi_top_pane_g4_ParamLimits

0xfd16,	// (0x000231b1) uniindi_top_pane_g_ParamLimits

0x6f14,	// (0x0001a3af) uniindi_top_pane_t1_ParamLimits

0xc8df,	// (0x0001fd7a) bg_vkb2_func_pane_cp01_ParamLimits

0xc8df,	// (0x0001fd7a) bg_vkb2_func_pane_cp01

0x7a44,	// (0x0001aedf) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a44,	// (0x0001aedf) cel_fep_hwr_func_pane_g1

0xc8df,	// (0x0001fd7a) bg_vkb2_func_pane_cp02_ParamLimits

0xc8df,	// (0x0001fd7a) bg_vkb2_func_pane_cp02

0x7a44,	// (0x0001aedf) cell_hwr_side_button_pane_g1_ParamLimits

0x7a44,	// (0x0001aedf) cell_hwr_side_button_pane_g1

0x24ca,	// (0x00015965) status_pane_g4_ParamLimits

0x24ca,	// (0x00015965) status_pane_g4

0x24e4,	// (0x0001597f) status_pane_t1

0x4f8a,	// (0x00018425) form2_midp_gauge_slider_cont_pane

0x4f92,	// (0x0001842d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc104,	// (0x0001f59f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc116,	// (0x0001f5b1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad6,	// (0x00022f71) form2_midp_gauge_slider_pane_t_ParamLimits

0x4fc8,	// (0x00018463) form2_midp_slider_pane_ParamLimits

0xf43e,	// (0x000228d9) aid_size_cell_func_vkb2_ParamLimits

0xf43e,	// (0x000228d9) aid_size_cell_func_vkb2

0x79e1,	// (0x0001ae7c) slider_pane_g4_ParamLimits

0x79e1,	// (0x0001ae7c) slider_pane_g4

0xa553,	// (0x0001d9ee) form2_midp_gauge_slider_pane_t2_cp01

0xa561,	// (0x0001d9fc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa561,	// (0x0001d9fc) form2_midp_gauge_slider_pane_t3_cp01

0x0477,	// (0x00013912) form2_midp_slider_pane_cp01

0xc722,	// (0x0001fbbd) navi_smil_pane

0x7a7d,	// (0x0001af18) navi_smil_pane_g1

0x7a85,	// (0x0001af20) navi_smil_pane_t1

0x7a52,	// (0x0001aeed) form2_midp_slider_pane_g1

0x7a5b,	// (0x0001aef6) form2_midp_slider_pane_g2

0x7a63,	// (0x0001aefe) form2_midp_slider_pane_g3

0x7a52,	// (0x0001aeed) form2_midp_slider_pane_g4

0xd7e4,	// (0x00020c7f) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x000232a9) form2_midp_slider_pane_g

0x043c,	// (0x000138d7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x043c,	// (0x000138d7) vkb2_area_bottom_space_btn_pane_g4

0xb71a,	// (0x0001ebb5) lc0_navi_pane_ParamLimits

0xb71a,	// (0x0001ebb5) lc0_navi_pane

0xb78a,	// (0x0001ec25) lc0_stat_indi_pane_ParamLimits

0xb78a,	// (0x0001ec25) lc0_stat_indi_pane

0xb79f,	// (0x0001ec3a) ls0_title_pane_ParamLimits

0xb79f,	// (0x0001ec3a) ls0_title_pane

0xe449,	// (0x000218e4) bg_popup_sub_pane_cp14_ParamLimits

0x6ea7,	// (0x0001a342) list_uniindi_pane_ParamLimits

0x6eb3,	// (0x0001a34e) uniindi_top_pane_ParamLimits

0x6f53,	// (0x0001a3ee) list_single_uniindi_pane_g1_ParamLimits

0x6f66,	// (0x0001a401) list_single_uniindi_pane_t1_ParamLimits

0xa57e,	// (0x0001da19) lc0_stat_clock_pane_ParamLimits

0xa57e,	// (0x0001da19) lc0_stat_clock_pane

0xd7ed,	// (0x00020c88) lc0_stat_indi_pane_g1_ParamLimits

0xd7ed,	// (0x00020c88) lc0_stat_indi_pane_g1

0xd7fa,	// (0x00020c95) lc0_stat_indi_pane_g2_ParamLimits

0xd7fa,	// (0x00020c95) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x000232b4) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x000232b4) lc0_stat_indi_pane_g

0xa58b,	// (0x0001da26) lc0_uni_indicator_pane_ParamLimits

0xa58b,	// (0x0001da26) lc0_uni_indicator_pane

0xd807,	// (0x00020ca2) ls0_title_pane_g1_ParamLimits

0xd807,	// (0x00020ca2) ls0_title_pane_g1

0xd81b,	// (0x00020cb6) ls0_title_pane_t1_ParamLimits

0xd81b,	// (0x00020cb6) ls0_title_pane_t1

0xa598,	// (0x0001da33) lc0_uni_indicator_pane_g1_ParamLimits

0xa598,	// (0x0001da33) lc0_uni_indicator_pane_g1

0x7af7,	// (0x0001af92) lc0_stat_clock_pane_t1

0xdeb8,	// (0x00021353) main_ai5_pane

0x7b05,	// (0x0001afa0) ai5_sk_pane_ParamLimits

0x7b05,	// (0x0001afa0) ai5_sk_pane

0xd849,	// (0x00020ce4) cell_ai5_widget_pane_ParamLimits

0xd849,	// (0x00020ce4) cell_ai5_widget_pane

0xd8b8,	// (0x00020d53) aid_size_cell_widget_grid

0x7bc3,	// (0x0001b05e) bg_ai5_widget_pane_ParamLimits

0x7bc3,	// (0x0001b05e) bg_ai5_widget_pane

0xd8ec,	// (0x00020d87) cell_ai5_widget_pane_g2

0xd900,	// (0x00020d9b) cell_ai5_widget_pane_g3

0xd91a,	// (0x00020db5) cell_ai5_widget_pane_g4

0xd92a,	// (0x00020dc5) cell_ai5_widget_pane_g5

0xd93a,	// (0x00020dd5) cell_ai5_widget_pane_g6

0xd946,	// (0x00020de1) cell_ai5_widget_pane_g7

0xd96a,	// (0x00020e05) cell_ai5_widget_pane_t1_ParamLimits

0xd96a,	// (0x00020e05) cell_ai5_widget_pane_t1

0x7d22,	// (0x0001b1bd) cell_ai5_widget_pane_t2_ParamLimits

0x7d22,	// (0x0001b1bd) cell_ai5_widget_pane_t2

0x7d3a,	// (0x0001b1d5) cell_ai5_widget_pane_t3_ParamLimits

0x7d3a,	// (0x0001b1d5) cell_ai5_widget_pane_t3

0xd987,	// (0x00020e22) cell_ai5_widget_pane_t4_ParamLimits

0xd987,	// (0x00020e22) cell_ai5_widget_pane_t4

0xd9ad,	// (0x00020e48) cell_ai5_widget_pane_t5_ParamLimits

0xd9ad,	// (0x00020e48) cell_ai5_widget_pane_t5

0x7d98,	// (0x0001b233) cell_ai5_widget_pane_t6_ParamLimits

0x7d98,	// (0x0001b233) cell_ai5_widget_pane_t6

0x7daa,	// (0x0001b245) cell_ai5_widget_pane_t7_ParamLimits

0x7daa,	// (0x0001b245) cell_ai5_widget_pane_t7

0x7dc9,	// (0x0001b264) cell_ai5_widget_pane_t8_ParamLimits

0x7dc9,	// (0x0001b264) cell_ai5_widget_pane_t8

0x000b,

0xfe39,	// (0x000232d4) cell_ai5_widget_pane_t_ParamLimits

0xfe39,	// (0x000232d4) cell_ai5_widget_pane_t

0xda3f,	// (0x00020eda) grid_ai5_widget_pane

0xe449,	// (0x000218e4) highlight_cell_ai5_widget_pane_ParamLimits

0xe449,	// (0x000218e4) highlight_cell_ai5_widget_pane

0xda4d,	// (0x00020ee8) ai5_sk_left_pane

0xda57,	// (0x00020ef2) ai5_sk_middle_pane

0xda61,	// (0x00020efc) ai5_sk_right_pane

0x7e79,	// (0x0001b314) bg_ai5_widget_pane_g1_ParamLimits

0x7e79,	// (0x0001b314) bg_ai5_widget_pane_g1

0x7e85,	// (0x0001b320) bg_ai5_widget_pane_g2_ParamLimits

0x7e85,	// (0x0001b320) bg_ai5_widget_pane_g2

0x7e91,	// (0x0001b32c) bg_ai5_widget_pane_g3_ParamLimits

0x7e91,	// (0x0001b32c) bg_ai5_widget_pane_g3

0x7e9d,	// (0x0001b338) bg_ai5_widget_pane_g4_ParamLimits

0x7e9d,	// (0x0001b338) bg_ai5_widget_pane_g4

0x7ea9,	// (0x0001b344) bg_ai5_widget_pane_g5_ParamLimits

0x7ea9,	// (0x0001b344) bg_ai5_widget_pane_g5

0x7eb5,	// (0x0001b350) bg_ai5_widget_pane_g6_ParamLimits

0x7eb5,	// (0x0001b350) bg_ai5_widget_pane_g6

0x7ec1,	// (0x0001b35c) bg_ai5_widget_pane_g7_ParamLimits

0x7ec1,	// (0x0001b35c) bg_ai5_widget_pane_g7

0x7ecd,	// (0x0001b368) bg_ai5_widget_pane_g8_ParamLimits

0x7ecd,	// (0x0001b368) bg_ai5_widget_pane_g8

0x7ed9,	// (0x0001b374) bg_ai5_widget_pane_g9_ParamLimits

0x7ed9,	// (0x0001b374) bg_ai5_widget_pane_g9

0x0008,

0xfe52,	// (0x000232ed) bg_ai5_widget_pane_g_ParamLimits

0xfe52,	// (0x000232ed) bg_ai5_widget_pane_g

0xda97,	// (0x00020f32) cell_shortcut_ai5_widget_pane_ParamLimits

0xda97,	// (0x00020f32) cell_shortcut_ai5_widget_pane

0x1dd8,	// (0x00015273) bg_cell_shortcut_ai5_widget_pane

0x7f24,	// (0x0001b3bf) cell_grid_ai5_widget_pane_g1

0x1dd8,	// (0x00015273) highlight_cell_shortcut_ai5_widget_pane

0x2687,	// (0x00015b22) ai5_sk_left_pane_g1

0x7f2d,	// (0x0001b3c8) ai5_sk_left_pane_g2

0x7f35,	// (0x0001b3d0) ai5_sk_left_pane_g3

0x7f3d,	// (0x0001b3d8) ai5_sk_left_pane_g4

0x0003,

0xfe65,	// (0x00023300) ai5_sk_left_pane_g

0x7f45,	// (0x0001b3e0) ai5_sk_left_pane_t1

0x268f,	// (0x00015b2a) ai5_sk_right_pane_g1

0x7f53,	// (0x0001b3ee) ai5_sk_right_pane_g2

0x7f5b,	// (0x0001b3f6) ai5_sk_right_pane_g3

0x7f63,	// (0x0001b3fe) ai5_sk_right_pane_g4

0x0003,

0xfe6e,	// (0x00023309) ai5_sk_right_pane_g

0x7f6b,	// (0x0001b406) ai5_sk_right_pane_t1

0x268f,	// (0x00015b2a) ai5_sk_middle_pane_g1

0x2687,	// (0x00015b22) ai5_sk_middle_pane_g2

0x26a7,	// (0x00015b42) ai5_sk_middle_pane_g3

0x7f5b,	// (0x0001b3f6) ai5_sk_middle_pane_g4

0x7f35,	// (0x0001b3d0) ai5_sk_middle_pane_g5

0x7f79,	// (0x0001b414) ai5_sk_middle_pane_g6

0xdaaa,	// (0x00020f45) ai5_sk_middle_pane_g7

0x0006,

0xfe77,	// (0x00023312) ai5_sk_middle_pane_g

0xb604,	// (0x0001ea9f) aid_touch_area_size_lc0_ParamLimits

0xb604,	// (0x0001ea9f) aid_touch_area_size_lc0

0xf226,	// (0x000226c1) cell_hwr_candidate_pane_t1_ParamLimits

0x218d,	// (0x00015628) aid_touch_navi_pane

0xb8aa,	// (0x0001ed45) status_dt_navi_pane_ParamLimits

0xb8aa,	// (0x0001ed45) status_dt_navi_pane

0xb8c2,	// (0x0001ed5d) status_dt_sta_pane_ParamLimits

0xb8c2,	// (0x0001ed5d) status_dt_sta_pane

0xdab2,	// (0x00020f4d) dt_sta_controll_pane

0xdabf,	// (0x00020f5a) dt_sta_indi_pane

0xdacc,	// (0x00020f67) dt_sta_title_pane

0xc8df,	// (0x0001fd7a) bg_dt_sta_indi_pane_ParamLimits

0xc8df,	// (0x0001fd7a) bg_dt_sta_indi_pane

0xdade,	// (0x00020f79) dt_sta_battery_pane

0xdae6,	// (0x00020f81) dt_sta_indi_pane_g1

0xdaef,	// (0x00020f8a) dt_sta_indi_pane_g2

0xdaf8,	// (0x00020f93) dt_sta_indi_pane_g3

0x0002,

0xfe86,	// (0x00023321) dt_sta_indi_pane_g

0xdb01,	// (0x00020f9c) dt_sta_signal_pane

0xe449,	// (0x000218e4) bg_dt_sta_title_pane_ParamLimits

0xe449,	// (0x000218e4) bg_dt_sta_title_pane

0xdb0a,	// (0x00020fa5) dt_sta_title_pane_g1

0xdb12,	// (0x00020fad) dt_sta_title_pane_t1_ParamLimits

0xdb12,	// (0x00020fad) dt_sta_title_pane_t1

0xc722,	// (0x0001fbbd) bg_dt_sta_control_pane

0xdb27,	// (0x00020fc2) dt_sta_controll_pane_g1

0xdb30,	// (0x00020fcb) bg_dt_sta_title_pane_g1

0xdb39,	// (0x00020fd4) bg_dt_sta_title_pane_g2

0xdb42,	// (0x00020fdd) bg_dt_sta_title_pane_g3

0x0002,

0xfe8d,	// (0x00023328) bg_dt_sta_title_pane_g

0x51d7,	// (0x00018672) bg_dt_sta_indi_pane_g1

0x8027,	// (0x0001b4c2) dt_sta_signal_pane_g1

0x802f,	// (0x0001b4ca) dt_sta_signal_pane_g2

0x0001,

0xfe94,	// (0x0002332f) dt_sta_signal_pane_g

0x8037,	// (0x0001b4d2) dt_sta_battery_pane_g1

0x8040,	// (0x0001b4db) dt_sta_battery_pane_t1

0x51d7,	// (0x00018672) bg_dt_sta_control_pane_g1

0x182e,	// (0x00014cc9) fep_china_uni_eep_pane

0x1836,	// (0x00014cd1) fep_china_uni_entry_pane_ParamLimits

0x1846,	// (0x00014ce1) popup_fep_china_uni_window_g1_ParamLimits

0x1856,	// (0x00014cf1) popup_fep_china_uni_window_g2_ParamLimits

0x1856,	// (0x00014cf1) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00022b8e) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00022b8e) popup_fep_china_uni_window_g

0x804f,	// (0x0001b4ea) fep_china_uni_eep_pane_g1

0x8057,	// (0x0001b4f2) fep_china_uni_eep_pane_t1

0x7a74,	// (0x0001af0f) aid_touch_area_size_smil_player

0x22e1,	// (0x0001577c) lc0_clock_pane

0x24d8,	// (0x00015973) status_pane_g5_ParamLimits

0x24d8,	// (0x00015973) status_pane_g5

0x99f2,	// (0x0001ce8d) popup_keymap_window

0x249e,	// (0x00015939) status_icon_pane

0xd900,	// (0x00020d9b) cell_ai5_widget_pane_g3_ParamLimits

0xd91a,	// (0x00020db5) cell_ai5_widget_pane_g4_ParamLimits

0xd92a,	// (0x00020dc5) cell_ai5_widget_pane_g5_ParamLimits

0x7ca5,	// (0x0001b140) cell_ai5_widget_pane_g8_ParamLimits

0x7ca5,	// (0x0001b140) cell_ai5_widget_pane_g8

0x7cb9,	// (0x0001b154) cell_ai5_widget_pane_g9_ParamLimits

0x7cb9,	// (0x0001b154) cell_ai5_widget_pane_g9

0x7ccd,	// (0x0001b168) cell_ai5_widget_pane_g10_ParamLimits

0x7ccd,	// (0x0001b168) cell_ai5_widget_pane_g10

0x8066,	// (0x0001b501) status_icon_pane_g1

0xc722,	// (0x0001fbbd) bg_popup_sub_pane_cp13

0x806e,	// (0x0001b509) popup_keymap_window_t1

0xb592,	// (0x0001ea2d) control_pane_g6_ParamLimits

0xb592,	// (0x0001ea2d) control_pane_g6

0xb59f,	// (0x0001ea3a) control_pane_g7_ParamLimits

0xb59f,	// (0x0001ea3a) control_pane_g7

0xb5ac,	// (0x0001ea47) control_pane_g8_ParamLimits

0xb5ac,	// (0x0001ea47) control_pane_g8

0xdab2,	// (0x00020f4d) dt_sta_controll_pane_ParamLimits

0xdabf,	// (0x00020f5a) dt_sta_indi_pane_ParamLimits

0xdacc,	// (0x00020f67) dt_sta_title_pane_ParamLimits

0xe304,	// (0x0002179f) aid_size_touch_scroll_bar_cale

0xdf95,	// (0x00021430) popup_discreet_window_ParamLimits

0xdf95,	// (0x00021430) popup_discreet_window

0x95b7,	// (0x0001ca52) popup_sk_window

0x2dc4,	// (0x0001625f) bg_popup_sub_pane_cp28_ParamLimits

0x2dc4,	// (0x0001625f) bg_popup_sub_pane_cp28

0x807c,	// (0x0001b517) popup_discreet_window_g1_ParamLimits

0x807c,	// (0x0001b517) popup_discreet_window_g1

0x809c,	// (0x0001b537) popup_discreet_window_t1_ParamLimits

0x809c,	// (0x0001b537) popup_discreet_window_t1

0x80ba,	// (0x0001b555) popup_discreet_window_t2_ParamLimits

0x80ba,	// (0x0001b555) popup_discreet_window_t2

0x0002,

0xfe99,	// (0x00023334) popup_discreet_window_t_ParamLimits

0xfe99,	// (0x00023334) popup_discreet_window_t

0x04ad,	// (0x00013948) popup_sk_window_g1

0x04b7,	// (0x00013952) popup_sk_window_g2

0x0001,

0xfea0,	// (0x0002333b) popup_sk_window_g

0x04bf,	// (0x0001395a) popup_sk_window_t1

0x04cd,	// (0x00013968) popup_sk_window_t1_copy1

0xd8ec,	// (0x00020d87) cell_ai5_widget_pane_g2_ParamLimits

0xd9cd,	// (0x00020e68) cell_ai5_widget_pane_t9_ParamLimits

0xd9cd,	// (0x00020e68) cell_ai5_widget_pane_t9

0xc722,	// (0x0001fbbd) main_fep_fshwr2_pane

0xa5b7,	// (0x0001da52) aid_fshwr2_btn_pane

0xa5cb,	// (0x0001da66) aid_fshwr2_syb_pane

0xa5df,	// (0x0001da7a) aid_fshwr2_txt_pane

0xa5ef,	// (0x0001da8a) fshwr2_func_candi_pane

0xa611,	// (0x0001daac) fshwr2_hwr_syb_pane

0xa635,	// (0x0001dad0) fshwr2_icf_pane

0xdeb8,	// (0x00021353) fshwr2_icf_bg_pane

0x0579,	// (0x00013a14) fshwr2_icf_pane_t1_ParamLimits

0x0579,	// (0x00013a14) fshwr2_icf_pane_t1

0x1707,	// (0x00014ba2) fshwr2_func_candi_pane_g1

0xdb4b,	// (0x00020fe6) fshwr2_func_candi_row_pane_ParamLimits

0xdb4b,	// (0x00020fe6) fshwr2_func_candi_row_pane

0xa665,	// (0x0001db00) cell_fshwr2_syb_pane_ParamLimits

0xa665,	// (0x0001db00) cell_fshwr2_syb_pane

0x05b2,	// (0x00013a4d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x05b2,	// (0x00013a4d) fshwr2_hwr_syb_pane_g1

0xdeb8,	// (0x00021353) bg_popup_call_pane_cp01

0xa68d,	// (0x0001db28) fshwr2_func_candi_cell_pane_ParamLimits

0xa68d,	// (0x0001db28) fshwr2_func_candi_cell_pane

0x2ba4,	// (0x0001603f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2ba4,	// (0x0001603f) fshwr2_func_candi_cell_bg_pane

0xa6d8,	// (0x0001db73) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa6d8,	// (0x0001db73) fshwr2_func_candi_cell_pane_g1

0xa70f,	// (0x0001dbaa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa70f,	// (0x0001dbaa) fshwr2_func_candi_cell_pane_t1

0xdeb8,	// (0x00021353) bg_button_pane_cp08

0x2107,	// (0x000155a2) cell_fshwr2_syb_bg_pane

0xa72a,	// (0x0001dbc5) cell_fshwr2_syb_bg_pane_g1

0xa73e,	// (0x0001dbd9) cell_fshwr2_syb_bg_pane_t1

0xe449,	// (0x000218e4) main_tmo_pane

0xbbe1,	// (0x0001f07c) uni_indicator_pane_g1_ParamLimits

0xbbf7,	// (0x0001f092) uni_indicator_pane_g2_ParamLimits

0xbc0d,	// (0x0001f0a8) uni_indicator_pane_g3_ParamLimits

0xbc20,	// (0x0001f0bb) uni_indicator_pane_g4_ParamLimits

0xbc20,	// (0x0001f0bb) uni_indicator_pane_g4

0x393b,	// (0x00016dd6) uni_indicator_pane_g5_ParamLimits

0x393b,	// (0x00016dd6) uni_indicator_pane_g5

0x393b,	// (0x00016dd6) uni_indicator_pane_g6_ParamLimits

0x393b,	// (0x00016dd6) uni_indicator_pane_g6

0xf8f2,	// (0x00022d8d) uni_indicator_pane_g_ParamLimits

0xccb6,	// (0x00020151) popup_tmo_note_window_ParamLimits

0xccb6,	// (0x00020151) popup_tmo_note_window

0xf466,	// (0x00022901) fshwr2_bg_pane

0xa700,	// (0x0001db9b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa700,	// (0x0001db9b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea5,	// (0x00023340) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea5,	// (0x00023340) fshwr2_func_candi_cell_pane_g

0xf1df,	// (0x0002267a) bg_popup_window_pane_cp01

0x0679,	// (0x00013b14) bg_popup_window_pane_g1_cp01

0x812f,	// (0x0001b5ca) bg_popup_window_pane_cp22_ParamLimits

0x812f,	// (0x0001b5ca) bg_popup_window_pane_cp22

0x813d,	// (0x0001b5d8) listscroll_tmo_link_pane_ParamLimits

0x813d,	// (0x0001b5d8) listscroll_tmo_link_pane

0x817d,	// (0x0001b618) popup_tmo_note_window_g1_ParamLimits

0x817d,	// (0x0001b618) popup_tmo_note_window_g1

0x818a,	// (0x0001b625) tmo_note_info_pane_ParamLimits

0x818a,	// (0x0001b625) tmo_note_info_pane

0xdb72,	// (0x0002100d) list_tmo_note_info_pane_g1_ParamLimits

0xdb72,	// (0x0002100d) list_tmo_note_info_pane_g1

0x81bb,	// (0x0001b656) list_tmo_note_info_pane_g2_ParamLimits

0x81bb,	// (0x0001b656) list_tmo_note_info_pane_g2

0x0001,

0xfeaa,	// (0x00023345) list_tmo_note_info_pane_g_ParamLimits

0xfeaa,	// (0x00023345) list_tmo_note_info_pane_g

0x81d7,	// (0x0001b672) list_tmo_note_info_text_pane_ParamLimits

0x81d7,	// (0x0001b672) list_tmo_note_info_text_pane

0x825c,	// (0x0001b6f7) list_tmo_link_pane

0x8269,	// (0x0001b704) scroll_pane_cp20

0x8276,	// (0x0001b711) list_single_tmo_link_pane_ParamLimits

0x8276,	// (0x0001b711) list_single_tmo_link_pane

0x8286,	// (0x0001b721) list_single_tmo_link_pane_t1

0x8294,	// (0x0001b72f) list_tmo_note_info_text_pane_t1_ParamLimits

0x8294,	// (0x0001b72f) list_tmo_note_info_text_pane_t1

0xb0c2,	// (0x0001e55d) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb0c2,	// (0x0001e55d) aid_size_touch_scroll_bar_cp01

0xb002,	// (0x0001e49d) aid_size_touch_slider_marker

0x95a7,	// (0x0001ca42) popup_settings_window_ParamLimits

0x95a7,	// (0x0001ca42) popup_settings_window

0x213b,	// (0x000155d6) popup_candi_list_indi_window

0x218d,	// (0x00015628) aid_touch_navi_pane_ParamLimits

0xf3c6,	// (0x00022861) rs_clock_indi_pane

0xf3cf,	// (0x0002286a) sctrl_sk_bottom_pane_ParamLimits

0xf3e0,	// (0x0002287b) sctrl_sk_top_pane_ParamLimits

0xf474,	// (0x0002290f) popup_fep_tooltip_window

0xd8b8,	// (0x00020d53) aid_size_cell_widget_grid_ParamLimits

0xd8d7,	// (0x00020d72) cell_ai5_widget_pane_g1_ParamLimits

0xd8d7,	// (0x00020d72) cell_ai5_widget_pane_g1

0xd93a,	// (0x00020dd5) cell_ai5_widget_pane_g6_ParamLimits

0xd946,	// (0x00020de1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1e,	// (0x000232b9) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x000232b9) cell_ai5_widget_pane_g

0xd9fc,	// (0x00020e97) cell_ai5_widget_pane_t10_ParamLimits

0xd9fc,	// (0x00020e97) cell_ai5_widget_pane_t10

0xda3f,	// (0x00020eda) grid_ai5_widget_pane_ParamLimits

0xda6b,	// (0x00020f06) cell_contacts_ai5_widget_pane_ParamLimits

0xda6b,	// (0x00020f06) cell_contacts_ai5_widget_pane

0x80cf,	// (0x0001b56a) popup_discreet_window_t3_ParamLimits

0x80cf,	// (0x0001b56a) popup_discreet_window_t3

0xa651,	// (0x0001daec) popup_fshwr2_char_preview_window_ParamLimits

0xa651,	// (0x0001daec) popup_fshwr2_char_preview_window

0xdb89,	// (0x00021024) tmo_note_info_pane_t1

0xdb9e,	// (0x00021039) tmo_note_info_pane_t2

0xdbb7,	// (0x00021052) tmo_note_info_pane_t3

0x8238,	// (0x0001b6d3) tmo_note_info_pane_t4

0x824a,	// (0x0001b6e5) tmo_note_info_pane_t5

0x0004,

0xfeaf,	// (0x0002334a) tmo_note_info_pane_t

0x825c,	// (0x0001b6f7) list_tmo_link_pane_ParamLimits

0x8269,	// (0x0001b704) scroll_pane_cp20_ParamLimits

0xdeb8,	// (0x00021353) bg_popup_fep_char_preview_window_cp01

0x82ad,	// (0x0001b748) popup_fshwr2_char_preview_window_t1

0x82bb,	// (0x0001b756) popup_candi_list_indi_window_g1

0x82c4,	// (0x0001b75f) bg_cell_contacts_ai5_widget_pane

0x82d0,	// (0x0001b76b) cell_contacts_ai5_widget_pane_g1

0x82e5,	// (0x0001b780) cell_contacts_ai5_widget_pane_g2

0x82f1,	// (0x0001b78c) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeba,	// (0x00023355) cell_contacts_ai5_widget_pane_g

0x82fd,	// (0x0001b798) cell_contacts_ai5_widget_pane_t1

0xe449,	// (0x000218e4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8374,	// (0x0001b80f) settings_container_pane

0x1dd8,	// (0x00015273) listscroll_set_pane_copy1

0x45d2,	// (0x00017a6d) scroll_pane_cp121_copy1

0x8380,	// (0x0001b81b) set_content_pane_copy1

0x8388,	// (0x0001b823) aid_height_set_list_copy1_ParamLimits

0x8388,	// (0x0001b823) aid_height_set_list_copy1

0x3b63,	// (0x00016ffe) aid_size_parent_copy1_ParamLimits

0x3b63,	// (0x00016ffe) aid_size_parent_copy1

0x8394,	// (0x0001b82f) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8394,	// (0x0001b82f) button_value_adjust_pane_cp6_copy1

0x2107,	// (0x000155a2) list_highlight_pane_cp2_copy1_ParamLimits

0x2107,	// (0x000155a2) list_highlight_pane_cp2_copy1

0x83a8,	// (0x0001b843) list_set_pane_copy1_ParamLimits

0x83a8,	// (0x0001b843) list_set_pane_copy1

0x830f,	// (0x0001b7aa) main_pane_set_t1_copy1_ParamLimits

0x830f,	// (0x0001b7aa) main_pane_set_t1_copy1

0x8349,	// (0x0001b7e4) main_pane_set_t2_copy1_ParamLimits

0x8349,	// (0x0001b7e4) main_pane_set_t2_copy1

0x8469,	// (0x0001b904) main_pane_set_t3_copy1

0x8477,	// (0x0001b912) main_pane_set_t4_copy1

0x8368,	// (0x0001b803) set_content_pane_g1_copy1_ParamLimits

0x8368,	// (0x0001b803) set_content_pane_g1_copy1

0x8485,	// (0x0001b920) setting_code_pane_copy1

0x848d,	// (0x0001b928) setting_slider_graphic_pane_copy1

0x848d,	// (0x0001b928) setting_slider_pane_copy1

0x8495,	// (0x0001b930) setting_text_pane_copy1

0x8495,	// (0x0001b930) setting_volume_pane_copy1

0x8485,	// (0x0001b920) settings_code_pane_cp2_copy1

0x849d,	// (0x0001b938) settings_code_pane_cp_copy1_ParamLimits

0x849d,	// (0x0001b938) settings_code_pane_cp_copy1

0x0682,	// (0x00013b1d) volume_set_pane_copy1

0x84b1,	// (0x0001b94c) volume_set_pane_g10_copy1

0x84bd,	// (0x0001b958) volume_set_pane_g1_copy1

0x84c7,	// (0x0001b962) volume_set_pane_g2_copy1

0x84d1,	// (0x0001b96c) volume_set_pane_g3_copy1

0x84db,	// (0x0001b976) volume_set_pane_g4_copy1

0x84e5,	// (0x0001b980) volume_set_pane_g5_copy1

0x84ef,	// (0x0001b98a) volume_set_pane_g6_copy1

0x84f9,	// (0x0001b994) volume_set_pane_g7_copy1

0x8503,	// (0x0001b99e) volume_set_pane_g8_copy1

0x850d,	// (0x0001b9a8) volume_set_pane_g9_copy1

0xc792,	// (0x0001fc2d) bg_set_opt_pane_cp_copy1_ParamLimits

0xc792,	// (0x0001fc2d) bg_set_opt_pane_cp_copy1

0x068e,	// (0x00013b29) setting_slider_pane_t1_copy1_ParamLimits

0x068e,	// (0x00013b29) setting_slider_pane_t1_copy1

0x06ad,	// (0x00013b48) setting_slider_pane_t2_copy1_ParamLimits

0x06ad,	// (0x00013b48) setting_slider_pane_t2_copy1

0x06c7,	// (0x00013b62) setting_slider_pane_t3_copy1_ParamLimits

0x06c7,	// (0x00013b62) setting_slider_pane_t3_copy1

0x06df,	// (0x00013b7a) slider_set_pane_copy1_ParamLimits

0x06df,	// (0x00013b7a) slider_set_pane_copy1

0xe504,	// (0x0002199f) set_opt_bg_pane_g1_copy2

0xe50c,	// (0x000219a7) set_opt_bg_pane_g2_copy2

0x8519,	// (0x0001b9b4) set_opt_bg_pane_g3_copy2

0xe51c,	// (0x000219b7) set_opt_bg_pane_g4_copy2

0xe524,	// (0x000219bf) set_opt_bg_pane_g5_copy2

0xe52c,	// (0x000219c7) set_opt_bg_pane_g6_copy2

0x8523,	// (0x0001b9be) set_opt_bg_pane_g7_copy2

0x852d,	// (0x0001b9c8) set_opt_bg_pane_g8_copy2

0x8537,	// (0x0001b9d2) set_opt_bg_pane_g9_copy2

0x06f5,	// (0x00013b90) aid_size_touch_slider_mark_copy1_ParamLimits

0x06f5,	// (0x00013b90) aid_size_touch_slider_mark_copy1

0x8541,	// (0x0001b9dc) slider_set_pane_g1_copy1

0x0709,	// (0x00013ba4) slider_set_pane_g2_copy1

0xee42,	// (0x000222dd) slider_set_pane_g3_copy1_ParamLimits

0xee42,	// (0x000222dd) slider_set_pane_g3_copy1

0xee56,	// (0x000222f1) slider_set_pane_g4_copy1_ParamLimits

0xee56,	// (0x000222f1) slider_set_pane_g4_copy1

0xee6e,	// (0x00022309) slider_set_pane_g5_copy1_ParamLimits

0xee6e,	// (0x00022309) slider_set_pane_g5_copy1

0xee42,	// (0x000222dd) slider_set_pane_g6_copy1_ParamLimits

0xee42,	// (0x000222dd) slider_set_pane_g6_copy1

0x0711,	// (0x00013bac) slider_set_pane_g7_copy1_ParamLimits

0x0711,	// (0x00013bac) slider_set_pane_g7_copy1

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp2_copy1

0x854a,	// (0x0001b9e5) setting_slider_graphic_pane_g1_copy1

0x8553,	// (0x0001b9ee) setting_slider_graphic_pane_t1_copy1

0x8563,	// (0x0001b9fe) setting_slider_graphic_pane_t2_copy1

0x8573,	// (0x0001ba0e) slider_set_pane_cp_copy1

0x8583,	// (0x0001ba1e) input_focus_pane_cp1_copy1

0x858c,	// (0x0001ba27) list_set_text_pane_copy1

0x8594,	// (0x0001ba2f) setting_text_pane_g1_copy1

0xc7b7,	// (0x0001fc52) set_text_pane_t1_copy1

0x8583,	// (0x0001ba1e) input_focus_pane_cp2_copy1

0x8594,	// (0x0001ba2f) setting_code_pane_g1_copy1

0x859d,	// (0x0001ba38) setting_code_pane_t1_copy1

0x43d7,	// (0x00017872) list_set_graphic_pane_copy1

0xc736,	// (0x0001fbd1) bg_set_opt_pane_cp4_copy1

0x1abc,	// (0x00014f57) list_set_graphic_pane_g1_copy1_ParamLimits

0x1abc,	// (0x00014f57) list_set_graphic_pane_g1_copy1

0x85ab,	// (0x0001ba46) list_set_graphic_pane_g2_copy1

0x1ad4,	// (0x00014f6f) list_set_graphic_pane_t1_copy1_ParamLimits

0x1ad4,	// (0x00014f6f) list_set_graphic_pane_t1_copy1

0x51d7,	// (0x00018672) rs_clock_indi_pane_g1

0x85b3,	// (0x0001ba4e) rs_clock_indi_pane_t1

0x85c1,	// (0x0001ba5c) rs_indi_pane

0x85c9,	// (0x0001ba64) rs_indi_pane_g1

0x85d2,	// (0x0001ba6d) rs_indi_pane_g2

0x85db,	// (0x0001ba76) rs_indi_pane_g3

0x0002,

0xfec1,	// (0x0002335c) rs_indi_pane_g

0x1dd8,	// (0x00015273) bg_popup_preview_window_pane_cp03

0x85e4,	// (0x0001ba7f) popup_fep_tooltip_window_t1

0x60c1,	// (0x0001955c) popup_note2_window_g2_ParamLimits

0x60c1,	// (0x0001955c) popup_note2_window_g2

0x0001,

0xfc4e,	// (0x000230e9) popup_note2_window_g_ParamLimits

0xfc4e,	// (0x000230e9) popup_note2_window_g

0x66c4,	// (0x00019b5f) bg_popup_sub_pane_cp11_ParamLimits

0x66d1,	// (0x00019b6c) cell_ai3_links_pane_g1_ParamLimits

0x66e8,	// (0x00019b83) cell_ai3_links_pane_t1

0xc7b7,	// (0x0001fc52) set_text_pane_t1_copy1_ParamLimits

0x1cda,	// (0x00015175) cell_graphic_popup_pane_cp2_ParamLimits

0x1cda,	// (0x00015175) cell_graphic_popup_pane_cp2

0x85f2,	// (0x0001ba8d) cell_graphic_popup_pane_g1_cp2

0xe117,	// (0x000215b2) cell_graphic_popup_pane_g2_cp2

0x85fa,	// (0x0001ba95) cell_graphic_popup_pane_g3_cp2

0x8602,	// (0x0001ba9d) cell_graphic_popup_pane_t2_cp2

0xe128,	// (0x000215c3) grid_highlight_pane_cp3_cp2

0x1449,	// (0x000148e4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe449,	// (0x000218e4) main_tmo_pane_ParamLimits

0xccaa,	// (0x00020145) popup_tmo_big_image_note_window

0xd8c6,	// (0x00020d61) cell_ai5_widget_list_pane

0xd8ce,	// (0x00020d69) cell_ai5_widget_lrg_icon_pane

0xdb89,	// (0x00021024) tmo_note_info_pane_t1_ParamLimits

0xdb9e,	// (0x00021039) tmo_note_info_pane_t2_ParamLimits

0xdbb7,	// (0x00021052) tmo_note_info_pane_t3_ParamLimits

0x8238,	// (0x0001b6d3) tmo_note_info_pane_t4_ParamLimits

0x824a,	// (0x0001b6e5) tmo_note_info_pane_t5_ParamLimits

0xfeaf,	// (0x0002334a) tmo_note_info_pane_t_ParamLimits

0x8374,	// (0x0001b80f) settings_container_pane_ParamLimits

0x857b,	// (0x0001ba16) indicator_popup_pane_cp5

0x857b,	// (0x0001ba16) indicator_popup_pane_cp6

0x43d7,	// (0x00017872) list_set_graphic_pane_copy1_ParamLimits

0xc722,	// (0x0001fbbd) bg_popup_window_pane_cp23

0x8610,	// (0x0001baab) popup_tmo_big_image_note_window_g1

0x861c,	// (0x0001bab7) popup_tmo_big_image_note_window_t1

0x862c,	// (0x0001bac7) popup_tmo_big_image_note_window_t2

0x863c,	// (0x0001bad7) popup_tmo_big_image_note_window_t3

0x0002,

0xfec8,	// (0x00023363) popup_tmo_big_image_note_window_t

0x51d7,	// (0x00018672) cell_ai5_widget_lrg_icon_pane_g1

0xdbcc,	// (0x00021067) cell_ai5_widget_lrg_icon_pane_t1

0xdbda,	// (0x00021075) cell_ai5_widget_list_row_pane_ParamLimits

0xdbda,	// (0x00021075) cell_ai5_widget_list_row_pane

0xdbf2,	// (0x0002108d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xdbf2,	// (0x0002108d) cell_ai5_widget_list_row_pane_g1

0xdbff,	// (0x0002109a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdbff,	// (0x0002109a) cell_ai5_widget_list_row_pane_t1

0xdc2a,	// (0x000210c5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xdc2a,	// (0x000210c5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecf,	// (0x0002336a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecf,	// (0x0002336a) cell_ai5_widget_list_row_pane_t

0xdeb8,	// (0x00021353) main_fep_vtchi_ss_pane

0x86fa,	// (0x0001bb95) popup_fep_char_pre_window

0x8702,	// (0x0001bb9d) popup_fep_ituss_window

0xdc7c,	// (0x00021117) popup_fep_vkbss_window

0x2107,	// (0x000155a2) grid_vkbss_keypad_pane_ParamLimits

0x2107,	// (0x000155a2) grid_vkbss_keypad_pane

0x8770,	// (0x0001bc0b) ituss_keypad_pane

0x0731,	// (0x00013bcc) aid_vkbss_key_offset_ParamLimits

0x0731,	// (0x00013bcc) aid_vkbss_key_offset

0xa754,	// (0x0001dbef) cell_vkbss_key_pane_ParamLimits

0xa754,	// (0x0001dbef) cell_vkbss_key_pane

0x877c,	// (0x0001bc17) bg_cell_vkbss_key_g1_ParamLimits

0x877c,	// (0x0001bc17) bg_cell_vkbss_key_g1

0xdc8b,	// (0x00021126) cell_vkbss_key_3p_pane_ParamLimits

0xdc8b,	// (0x00021126) cell_vkbss_key_3p_pane

0xdcc1,	// (0x0002115c) cell_vkbss_key_g1_ParamLimits

0xdcc1,	// (0x0002115c) cell_vkbss_key_g1

0xdcf7,	// (0x00021192) cell_vkbss_key_t1_ParamLimits

0xdcf7,	// (0x00021192) cell_vkbss_key_t1

0x079b,	// (0x00013c36) cell_ituss_key_pane_ParamLimits

0x079b,	// (0x00013c36) cell_ituss_key_pane

0x8850,	// (0x0001bceb) bg_cell_ituss_key_g1_ParamLimits

0x8850,	// (0x0001bceb) bg_cell_ituss_key_g1

0x885c,	// (0x0001bcf7) cell_ituss_key_pane_g1_ParamLimits

0x885c,	// (0x0001bcf7) cell_ituss_key_pane_g1

0x07ac,	// (0x00013c47) cell_ituss_key_pane_g2_ParamLimits

0x07ac,	// (0x00013c47) cell_ituss_key_pane_g2

0x0005,

0xfed6,	// (0x00023371) cell_ituss_key_pane_g_ParamLimits

0xfed6,	// (0x00023371) cell_ituss_key_pane_g

0x0830,	// (0x00013ccb) cell_ituss_key_t1_ParamLimits

0x0830,	// (0x00013ccb) cell_ituss_key_t1

0x086a,	// (0x00013d05) cell_ituss_key_t2_ParamLimits

0x086a,	// (0x00013d05) cell_ituss_key_t2

0x089c,	// (0x00013d37) cell_ituss_key_t3_ParamLimits

0x089c,	// (0x00013d37) cell_ituss_key_t3

0x08cd,	// (0x00013d68) cell_ituss_key_t4_ParamLimits

0x08cd,	// (0x00013d68) cell_ituss_key_t4

0x0004,

0xfee3,	// (0x0002337e) cell_ituss_key_t_ParamLimits

0xfee3,	// (0x0002337e) cell_ituss_key_t

0xdd53,	// (0x000211ee) cell_vkbss_key_3p_pane_g1

0xdd5b,	// (0x000211f6) cell_vkbss_key_3p_pane_g2

0xdd63,	// (0x000211fe) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00023389) cell_vkbss_key_3p_pane_g

0x1dd8,	// (0x00015273) bg_popup_fep_char_preview_window_cp02

0x889a,	// (0x0001bd35) popup_fep_char_pre_window_t1

0xd8a5,	// (0x00020d40) main_ai5_sk_pane

0x82c4,	// (0x0001b75f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x82d0,	// (0x0001b76b) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x82e5,	// (0x0001b780) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x82f1,	// (0x0001b78c) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeba,	// (0x00023355) cell_contacts_ai5_widget_pane_g_ParamLimits

0x82fd,	// (0x0001b798) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe449,	// (0x000218e4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdd6b,	// (0x00021206) main_ai5_sk_pane_g1

0x2bfc,	// (0x00016097) popup_query_code_window_g1

0xdc6d,	// (0x00021108) popup_fep_vkb_icf_pane

0x8747,	// (0x0001bbe2) popup_fep_vtchi_icf_pane

0x88b1,	// (0x0001bd4c) bg_icf_pane

0x88b1,	// (0x0001bd4c) list_vkb_icf_pane

0x88bd,	// (0x0001bd58) bg_icf_pane_cp01

0x88d0,	// (0x0001bd6b) vtchi_icf_list_pane

0xddc0,	// (0x0002125b) list_vkb_icf_pane_t1_ParamLimits

0xddc0,	// (0x0002125b) list_vkb_icf_pane_t1

0x894c,	// (0x0001bde7) vtchi_icf_list_pane_t1_ParamLimits

0x894c,	// (0x0001bde7) vtchi_icf_list_pane_t1

0x8702,	// (0x0001bb9d) popup_fep_ituss_window_ParamLimits

0x8747,	// (0x0001bbe2) popup_fep_vtchi_icf_pane_ParamLimits

0x8770,	// (0x0001bc0b) ituss_keypad_pane_ParamLimits

0x0727,	// (0x00013bc2) ituss_sks_pane

0x88b1,	// (0x0001bd4c) bg_icf_pane_ParamLimits

0xdc52,	// (0x000210ed) icf_edit_indi_pane_ParamLimits

0xdc52,	// (0x000210ed) icf_edit_indi_pane

0x88b1,	// (0x0001bd4c) list_vkb_icf_pane_ParamLimits

0x88bd,	// (0x0001bd58) bg_icf_pane_cp01_ParamLimits

0x86ed,	// (0x0001bb88) icf_edit_indi_pane_cp01_ParamLimits

0x86ed,	// (0x0001bb88) icf_edit_indi_pane_cp01

0x88d0,	// (0x0001bd6b) vtchi_query_pane

0x7a44,	// (0x0001aedf) icf_edit_indi_pane_g1_ParamLimits

0x7a44,	// (0x0001aedf) icf_edit_indi_pane_g1

0xddd7,	// (0x00021272) icf_edit_indi_pane_g2_ParamLimits

0xddd7,	// (0x00021272) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x000233b4) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x000233b4) icf_edit_indi_pane_g

0xddeb,	// (0x00021286) icf_edit_indi_pane_t1

0x8965,	// (0x0001be00) bg_input_focus_pane_cp042

0xe2fb,	// (0x00021796) vtchi_button_pane

0x896e,	// (0x0001be09) vtchi_query_pane_t1

0x897c,	// (0x0001be17) vtchi_query_pane_t2

0x898a,	// (0x0001be25) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000233a3) vtchi_query_pane_t

0xdeb8,	// (0x00021353) bg_button_pane_cp13

0x8998,	// (0x0001be33) vtchi_button_pane_g1

0x0910,	// (0x00013dab) ituss_sks_pane_g1

0x091b,	// (0x00013db6) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000233aa) ituss_sks_pane_g

0x89a0,	// (0x0001be3b) ituss_sks_pane_t1

0x89ae,	// (0x0001be49) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000233af) ituss_sks_pane_t

0x4c58,	// (0x000180f3) indicator_nsta_pane_cp_g1

0x4c61,	// (0x000180fc) indicator_nsta_pane_cp_g2

0x4c69,	// (0x00018104) indicator_nsta_pane_cp_g3

0x4c71,	// (0x0001810c) indicator_nsta_pane_cp_g4

0x4c61,	// (0x000180fc) indicator_nsta_pane_cp_g5

0x4c69,	// (0x00018104) indicator_nsta_pane_cp_g6

0x0005,

0xfa8c,	// (0x00022f27) indicator_nsta_pane_cp_g

0xd6bd,	// (0x00020b58) cell_graphic2_pane_t2_ParamLimits

0xd6bd,	// (0x00020b58) cell_graphic2_pane_t2

0x0001,

0xfda5,	// (0x00023240) cell_graphic2_pane_t_ParamLimits

0xfda5,	// (0x00023240) cell_graphic2_pane_t

0xd6f5,	// (0x00020b90) cell_graphic2_control_pane_t1

0xb31b,	// (0x0001e7b6) signal_pane_g3_ParamLimits

0xb31b,	// (0x0001e7b6) signal_pane_g3

0xb32f,	// (0x0001e7ca) signal_pane_g4_ParamLimits

0xb32f,	// (0x0001e7ca) signal_pane_g4

0xdc3c,	// (0x000210d7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xdc3c,	// (0x000210d7) cell_ai5_widget_list_row_pane_t3

0x8870,	// (0x0001bd0b) cell_ituss_key_pane_t1_ParamLimits

0x8870,	// (0x0001bd0b) cell_ituss_key_pane_t1

0x2834,	// (0x00015ccf) form_field_data_wide_pane_vc_t2_ParamLimits

0x2834,	// (0x00015ccf) form_field_data_wide_pane_vc_t2

0x2848,	// (0x00015ce3) form_field_data_wide_pane_vc_t3_ParamLimits

0x2848,	// (0x00015ce3) form_field_data_wide_pane_vc_t3

0x0002,

0xf7da,	// (0x00022c75) form_field_data_wide_pane_vc_t_ParamLimits

0xf7da,	// (0x00022c75) form_field_data_wide_pane_vc_t

0x48f5,	// (0x00017d90) form_field_slider_wide_pane_vc_t3_ParamLimits

0x48f5,	// (0x00017d90) form_field_slider_wide_pane_vc_t3

0x49cb,	// (0x00017e66) form_field_popup_wide_pane_vc_t2_ParamLimits

0x49cb,	// (0x00017e66) form_field_popup_wide_pane_vc_t2

0x49e2,	// (0x00017e7d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x49e2,	// (0x00017e7d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7b,	// (0x00022f16) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7b,	// (0x00022f16) form_field_popup_wide_pane_vc_t

0xa5b7,	// (0x0001da52) aid_fshwr2_btn_pane_ParamLimits

0xa5cb,	// (0x0001da66) aid_fshwr2_syb_pane_ParamLimits

0xa5df,	// (0x0001da7a) aid_fshwr2_txt_pane_ParamLimits

0xf466,	// (0x00022901) fshwr2_bg_pane_ParamLimits

0xa5ef,	// (0x0001da8a) fshwr2_func_candi_pane_ParamLimits

0xa611,	// (0x0001daac) fshwr2_hwr_syb_pane_ParamLimits

0xa635,	// (0x0001dad0) fshwr2_icf_pane_ParamLimits

0x4869,	// (0x00017d04) list_double_graphic_pane_vc_g4_ParamLimits

0x4869,	// (0x00017d04) list_double_graphic_pane_vc_g4

0x07cc,	// (0x00013c67) cell_ituss_key_pane_g3_ParamLimits

0x07cc,	// (0x00013c67) cell_ituss_key_pane_g3

0x08fe,	// (0x00013d99) cell_ituss_key_t5_ParamLimits

0x08fe,	// (0x00013d99) cell_ituss_key_t5

0xdc7c,	// (0x00021117) popup_fep_vkbss_window_ParamLimits

0xd8af,	// (0x00020d4a) aid_cell_ai5_quarter

0xddeb,	// (0x00021286) icf_edit_indi_pane_t1_ParamLimits

0xc987,	// (0x0001fe22) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xc987,	// (0x0001fe22) aid_tch_indicator_popup_pane_cp2

0xc99a,	// (0x0001fe35) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xc99a,	// (0x0001fe35) aid_tch_query_popup_data_pane_cp2

0x2ba4,	// (0x0001603f) aid_tch_query_popup_pane_ParamLimits

0x2ba4,	// (0x0001603f) aid_tch_query_popup_pane

0x2ba4,	// (0x0001603f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2ba4,	// (0x0001603f) aid_tch_query_popup_data_pane_cp1

0x2107,	// (0x000155a2) cell_fshwr2_syb_bg_pane_ParamLimits

0xa72a,	// (0x0001dbc5) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xa73e,	// (0x0001dbd9) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xdc6d,	// (0x00021108) popup_fep_vkb_icf_pane_ParamLimits

0xa54b,	// (0x0001d9e6) bg_popup_fep_char_preview_window_g10

0xd952,	// (0x00020ded) cell_ai5_widget_pane_g11_ParamLimits

0xd952,	// (0x00020ded) cell_ai5_widget_pane_g11

0x7ced,	// (0x0001b188) cell_ai5_widget_pane_g12_ParamLimits

0x7ced,	// (0x0001b188) cell_ai5_widget_pane_g12

0xd95e,	// (0x00020df9) cell_ai5_widget_pane_g13_ParamLimits

0xd95e,	// (0x00020df9) cell_ai5_widget_pane_g13

0xda1b,	// (0x00020eb6) cell_ai5_widget_pane_t11_ParamLimits

0xda1b,	// (0x00020eb6) cell_ai5_widget_pane_t11

0xda2d,	// (0x00020ec8) cell_ai5_widget_pane_t12_ParamLimits

0xda2d,	// (0x00020ec8) cell_ai5_widget_pane_t12

0x07d8,	// (0x00013c73) cell_ituss_key_pane_g4_ParamLimits

0x07d8,	// (0x00013c73) cell_ituss_key_pane_g4

0x07f4,	// (0x00013c8f) cell_ituss_key_pane_g5_ParamLimits

0x07f4,	// (0x00013c8f) cell_ituss_key_pane_g5

0x0810,	// (0x00013cab) cell_ituss_key_pane_g6_ParamLimits

0x0810,	// (0x00013cab) cell_ituss_key_pane_g6

0x267f,	// (0x00015b1a) bg_icf_pane_g1

0xdd74,	// (0x0002120f) bg_icf_pane_g2

0xdd7e,	// (0x00021219) bg_icf_pane_g3

0xdd86,	// (0x00021221) bg_icf_pane_g4

0xdd90,	// (0x0002122b) bg_icf_pane_g5

0xdd9a,	// (0x00021235) bg_icf_pane_g6

0xdda4,	// (0x0002123f) bg_icf_pane_g7

0xddac,	// (0x00021247) bg_icf_pane_g8

0xddb6,	// (0x00021251) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00023390) bg_icf_pane_g

0x875d,	// (0x0001bbf8) popup_hyb_candi_window_ParamLimits

0x875d,	// (0x0001bbf8) popup_hyb_candi_window

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp01_ParamLimits

0x27a3,	// (0x00015c3e) bg_popup_sub_pane_cp01

0x89e9,	// (0x0001be84) entry_hyb_candi_pane_ParamLimits

0x89e9,	// (0x0001be84) entry_hyb_candi_pane

0x89f8,	// (0x0001be93) grid_hyb_candi_pane_ParamLimits

0x89f8,	// (0x0001be93) grid_hyb_candi_pane

0x8a0d,	// (0x0001bea8) grid_hyb_phrase_pane_ParamLimits

0x8a0d,	// (0x0001bea8) grid_hyb_phrase_pane

0x8a1c,	// (0x0001beb7) cell_hyb_candi_pane_ParamLimits

0x8a1c,	// (0x0001beb7) cell_hyb_candi_pane

0xe304,	// (0x0002179f) cell_hyb_candi_scroll_pane

0x1707,	// (0x00014ba2) cell_hyb_candi_pane_g1

0x8a38,	// (0x0001bed3) cell_hyb_candi_pane_t1

0x8a46,	// (0x0001bee1) cell_hyb_phrase_pane

0x1707,	// (0x00014ba2) cell_hyb_phrase_pane_g1

0x8a4f,	// (0x0001beea) cell_hyb_phrase_pane_t1

0x8a5d,	// (0x0001bef8) entry_hyb_candi_pane_t1

0x1dd8,	// (0x00015273) input_focus_pane_cp06

0x8a6b,	// (0x0001bf06) cell_hyb_candi_scroll_pane_g1

0x8a73,	// (0x0001bf0e) cell_hyb_candi_scroll_pane_g1_aid

0x8a7b,	// (0x0001bf16) cell_hyb_candi_scroll_pane_g2

0x8a83,	// (0x0001bf1e) cell_hyb_candi_scroll_pane_g2_aid

0x8a8b,	// (0x0001bf26) cell_hyb_candi_scroll_pane_g3

0x8a93,	// (0x0001bf2e) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
