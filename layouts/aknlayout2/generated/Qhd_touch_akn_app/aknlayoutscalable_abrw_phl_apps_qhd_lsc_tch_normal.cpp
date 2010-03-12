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

// This customisation implements the interface defined in AknLayoutScalable_Apps.cdl

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00026702 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineRCV(TInt aRow, TInt aCol, TInt aVariety) { return AknLayoutScalableDecode::WindowLineRCV(&KImplData, aRow, aCol, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLVRC(TInt aLineIndex, TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextTableLVRC(&KImplData, aLineIndex, aVariety, aRow, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize] =
	{
0x20ef,	// (0x000287f1) Screen

0x20fb,	// (0x000287fd) application_window

0x2107,	// (0x00028809) area_bottom_pane_ParamLimits

0x2107,	// (0x00028809) area_bottom_pane

0x09f5,	// (0x000270f7) area_top_pane_ParamLimits

0x09f5,	// (0x000270f7) area_top_pane

0xb635,	// (0x00031d37) call_video_uplink_pane_ParamLimits

0xb635,	// (0x00031d37) call_video_uplink_pane

0x0a6a,	// (0x0002716c) main_pane_ParamLimits

0x0a6a,	// (0x0002716c) main_pane

0xbc46,	// (0x00032348) context_pane

0x6ef5,	// (0x0002d5f7) navi_pane

0x6f1d,	// (0x0002d61f) popup_cale_events_window_ParamLimits

0x6f1d,	// (0x0002d61f) popup_cale_events_window

0xbc59,	// (0x0003235b) popup_mup_playback_window

0x6f35,	// (0x0002d637) signal_pane

0x2af5,	// (0x000291f7) main_browser_pane

0x50e8,	// (0x0002b7ea) main_burst_pane

0x0eac,	// (0x000275ae) main_calc_pane

0x50e8,	// (0x0002b7ea) main_cale_day_pane

0x2af5,	// (0x000291f7) main_cale_month_pane

0x50e8,	// (0x0002b7ea) main_cale_week_pane

0x50e8,	// (0x0002b7ea) main_call_pane

0x25b7,	// (0x00028cb9) main_call_poc_pane

0x50e8,	// (0x0002b7ea) main_camera_pane

0x50e8,	// (0x0002b7ea) main_chi_dic_pane

0x4c51,	// (0x0002b353) main_clock_pane

0x25b7,	// (0x00028cb9) main_fmradio_pane

0x50e8,	// (0x0002b7ea) main_graph_messa_pane

0x25b7,	// (0x00028cb9) main_help_pane

0x2af5,	// (0x000291f7) main_im_pane

0x2812,	// (0x00028f14) main_image_pane_ParamLimits

0x2812,	// (0x00028f14) main_image_pane

0x25b7,	// (0x00028cb9) main_location2_pane

0x50e8,	// (0x0002b7ea) main_location_pane

0x25b7,	// (0x00028cb9) main_messa_pane

0x25b7,	// (0x00028cb9) main_mp2_pane

0x50e8,	// (0x0002b7ea) main_mp_pane

0x25b7,	// (0x00028cb9) main_msg_pane

0x25b7,	// (0x00028cb9) main_mup_eq_pane

0x25b7,	// (0x00028cb9) main_mup_pane

0x2af5,	// (0x000291f7) main_notes_pane

0x25b7,	// (0x00028cb9) main_pec_pane

0x25b7,	// (0x00028cb9) main_phob_pane

0x25b7,	// (0x00028cb9) main_pinb_pane

0x25b7,	// (0x00028cb9) main_postcard_pane

0x25b7,	// (0x00028cb9) main_qdial_pane

0x50e8,	// (0x0002b7ea) main_skin_pane

0x25b7,	// (0x00028cb9) main_smil2_pane

0x50e8,	// (0x0002b7ea) main_smil_pane

0x50e8,	// (0x0002b7ea) main_video_pane

0x50e8,	// (0x0002b7ea) main_video_tele_pane

0x2812,	// (0x00028f14) main_viewer_pane_ParamLimits

0x2812,	// (0x00028f14) main_viewer_pane

0x50e8,	// (0x0002b7ea) main_vorec_pane

0x0f00,	// (0x00027602) popup_blid_sat_info_window_ParamLimits

0x0f00,	// (0x00027602) popup_blid_sat_info_window

0x0f58,	// (0x0002765a) popup_dyc_status_message_window_ParamLimits

0x0f58,	// (0x0002765a) popup_dyc_status_message_window

0x0f72,	// (0x00027674) popup_grid_large_graphic_window_ParamLimits

0x0f72,	// (0x00027674) popup_grid_large_graphic_window

0x102e,	// (0x00027730) popup_loc_request_window_ParamLimits

0x102e,	// (0x00027730) popup_loc_request_window

0x1132,	// (0x00027834) popup_wml_address_window_ParamLimits

0x1132,	// (0x00027834) popup_wml_address_window

0x6d2b,	// (0x0002d42d) call_muted_g1

0x5e53,	// (0x0002c555) popup_call_audio_conf_window_ParamLimits

0x5e53,	// (0x0002c555) popup_call_audio_conf_window

0x6d3f,	// (0x0002d441) popup_call_audio_first_window_ParamLimits

0x6d3f,	// (0x0002d441) popup_call_audio_first_window

0x6db5,	// (0x0002d4b7) popup_call_audio_in_window_ParamLimits

0x6db5,	// (0x0002d4b7) popup_call_audio_in_window

0x6df1,	// (0x0002d4f3) popup_call_audio_out_window_ParamLimits

0x6df1,	// (0x0002d4f3) popup_call_audio_out_window

0x6e2b,	// (0x0002d52d) popup_call_audio_second_window_ParamLimits

0x6e2b,	// (0x0002d52d) popup_call_audio_second_window

0x6e81,	// (0x0002d583) popup_call_audio_wait_window_ParamLimits

0x6e81,	// (0x0002d583) popup_call_audio_wait_window

0x6eb6,	// (0x0002d5b8) popup_number_entry_window_ParamLimits

0x6eb6,	// (0x0002d5b8) popup_number_entry_window

0x214c,	// (0x0002884e) bg_popup_call_pane_cp05_ParamLimits

0x214c,	// (0x0002884e) bg_popup_call_pane_cp05

0x216c,	// (0x0002886e) popup_number_entry_window_t1

0x217f,	// (0x00028881) popup_number_entry_window_t2

0x2191,	// (0x00028893) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000357da) popup_number_entry_window_t

0x21d7,	// (0x000288d9) text_title_cp2

0x21ea,	// (0x000288ec) bg_popup_call_pane_cp_ParamLimits

0x21ea,	// (0x000288ec) bg_popup_call_pane_cp

0x21f8,	// (0x000288fa) call_thumbnail_pane

0x2200,	// (0x00028902) popup_call_audio_in_window_g1_ParamLimits

0x2200,	// (0x00028902) popup_call_audio_in_window_g1

0x220c,	// (0x0002890e) popup_call_audio_in_window_g2_ParamLimits

0x220c,	// (0x0002890e) popup_call_audio_in_window_g2

0x2218,	// (0x0002891a) popup_call_audio_in_window_g3_ParamLimits

0x2218,	// (0x0002891a) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000357e3) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000357e3) popup_call_audio_in_window_g

0x2224,	// (0x00028926) popup_call_audio_in_window_t1_ParamLimits

0x2224,	// (0x00028926) popup_call_audio_in_window_t1

0x2240,	// (0x00028942) popup_call_audio_in_window_t2_ParamLimits

0x2240,	// (0x00028942) popup_call_audio_in_window_t2

0x225c,	// (0x0002895e) popup_call_audio_in_window_t3_ParamLimits

0x225c,	// (0x0002895e) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000357ea) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000357ea) popup_call_audio_in_window_t

0x21ea,	// (0x000288ec) bg_popup_call_pane_cp01_ParamLimits

0x21ea,	// (0x000288ec) bg_popup_call_pane_cp01

0x21f8,	// (0x000288fa) call_thumbnail_pane_cp02

0x226f,	// (0x00028971) call_type_pane_cp022

0x2277,	// (0x00028979) popup_call_audio_out_window_g1_ParamLimits

0x2277,	// (0x00028979) popup_call_audio_out_window_g1

0x2289,	// (0x0002898b) popup_call_audio_out_window_g2_ParamLimits

0x2289,	// (0x0002898b) popup_call_audio_out_window_g2

0x2295,	// (0x00028997) popup_call_audio_out_window_g3_ParamLimits

0x2295,	// (0x00028997) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000357f1) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000357f1) popup_call_audio_out_window_g

0x22a7,	// (0x000289a9) popup_call_audio_out_window_t1_ParamLimits

0x22a7,	// (0x000289a9) popup_call_audio_out_window_t1

0x22bf,	// (0x000289c1) popup_call_audio_out_window_t2_ParamLimits

0x22bf,	// (0x000289c1) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000357f8) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000357f8) popup_call_audio_out_window_t

0x22d4,	// (0x000289d6) bg_popup_call_pane_ParamLimits

0x22d4,	// (0x000289d6) bg_popup_call_pane

0x2358,	// (0x00028a5a) call_thumbnail_pane_cp_ParamLimits

0x2358,	// (0x00028a5a) call_thumbnail_pane_cp

0x237c,	// (0x00028a7e) call_type_pane_cp01_ParamLimits

0x237c,	// (0x00028a7e) call_type_pane_cp01

0x23c0,	// (0x00028ac2) popup_call_audio_first_window_g1_ParamLimits

0x23c0,	// (0x00028ac2) popup_call_audio_first_window_g1

0x240c,	// (0x00028b0e) popup_call_audio_first_window_g2_ParamLimits

0x240c,	// (0x00028b0e) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000357fd) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000357fd) popup_call_audio_first_window_g

0x2450,	// (0x00028b52) popup_call_audio_first_window_t1_ParamLimits

0x2450,	// (0x00028b52) popup_call_audio_first_window_t1

0x24fc,	// (0x00028bfe) popup_call_audio_first_window_t4_ParamLimits

0x24fc,	// (0x00028bfe) popup_call_audio_first_window_t4

0x2588,	// (0x00028c8a) popup_call_audio_first_window_t5_ParamLimits

0x2588,	// (0x00028c8a) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00035802) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00035802) popup_call_audio_first_window_t

0x25b7,	// (0x00028cb9) bg_popup_call_pane_cp02

0x25c1,	// (0x00028cc3) call_type_pane_cp023

0x25c9,	// (0x00028ccb) popup_call_audio_wait_window_g1

0x25d1,	// (0x00028cd3) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00035809) popup_call_audio_wait_window_g

0x25d9,	// (0x00028cdb) popup_call_audio_wait_window_t3

0x25e7,	// (0x00028ce9) bg_popup_call_pane_cp03_ParamLimits

0x25e7,	// (0x00028ce9) bg_popup_call_pane_cp03

0x2647,	// (0x00028d49) call_thumbnail_pane_cp011_ParamLimits

0x2647,	// (0x00028d49) call_thumbnail_pane_cp011

0x2653,	// (0x00028d55) call_type_pane_cp034_ParamLimits

0x2653,	// (0x00028d55) call_type_pane_cp034

0x268f,	// (0x00028d91) popup_call_audio_second_window_g1_ParamLimits

0x268f,	// (0x00028d91) popup_call_audio_second_window_g1

0x26cb,	// (0x00028dcd) popup_call_audio_second_window_g2_ParamLimits

0x26cb,	// (0x00028dcd) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0003580e) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0003580e) popup_call_audio_second_window_g

0x2707,	// (0x00028e09) popup_call_audio_second_window_t1_ParamLimits

0x2707,	// (0x00028e09) popup_call_audio_second_window_t1

0x2788,	// (0x00028e8a) popup_call_audio_second_window_t2_ParamLimits

0x2788,	// (0x00028e8a) popup_call_audio_second_window_t2

0x27be,	// (0x00028ec0) popup_call_audio_second_window_t3_ParamLimits

0x27be,	// (0x00028ec0) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00035813) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00035813) popup_call_audio_second_window_t

0x25b7,	// (0x00028cb9) bg_popup_call_pane_cp04

0x27f4,	// (0x00028ef6) list_conf_pane

0x27fc,	// (0x00028efe) popup_call_audio_conf_window_t1

0x280a,	// (0x00028f0c) call_thumbnail_pane_g1

0x2812,	// (0x00028f14) bg_pinb_pane_ParamLimits

0x2812,	// (0x00028f14) bg_pinb_pane

0x2820,	// (0x00028f22) find_pinb_pane

0x2829,	// (0x00028f2b) listscroll_pinb_pane_ParamLimits

0x2829,	// (0x00028f2b) listscroll_pinb_pane

0x2838,	// (0x00028f3a) pinb_bg_pane_g1

0x2842,	// (0x00028f44) pinb_bg_pane_g2

0x284e,	// (0x00028f50) pinb_bg_pane_g3

0x285a,	// (0x00028f5c) pinb_bg_pane_g4

0x2866,	// (0x00028f68) pinb_bg_pane_g5

0x2872,	// (0x00028f74) pinb_bg_pane_g6

0x287d,	// (0x00028f7f) pinb_bg_pane_g7

0x2888,	// (0x00028f8a) pinb_bg_pane_g8

0x2893,	// (0x00028f95) pinb_bg_pane_g9

0x289d,	// (0x00028f9f) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0003581a) pinb_bg_pane_g

0x28ba,	// (0x00028fbc) grid_pinb_pane

0x28c3,	// (0x00028fc5) list_pinb_pane

0x28cc,	// (0x00028fce) scroll_pane_cp01_ParamLimits

0x28cc,	// (0x00028fce) scroll_pane_cp01

0x28de,	// (0x00028fe0) find_pinb_pane_g1_ParamLimits

0x28de,	// (0x00028fe0) find_pinb_pane_g1

0x28f6,	// (0x00028ff8) find_pinb_pane_t1

0x2908,	// (0x0002900a) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00035834) find_pinb_pane_t

0x291d,	// (0x0002901f) input_focus_pane_cp01_ParamLimits

0x291d,	// (0x0002901f) input_focus_pane_cp01

0x2929,	// (0x0002902b) cell_pinb_pane_ParamLimits

0x2929,	// (0x0002902b) cell_pinb_pane

0x2952,	// (0x00029054) cell_pinb_pane_g1_ParamLimits

0x2952,	// (0x00029054) cell_pinb_pane_g1

0x2962,	// (0x00029064) cell_pinb_pane_g2_ParamLimits

0x2962,	// (0x00029064) cell_pinb_pane_g2

0x296e,	// (0x00029070) cell_pinb_pane_g3_ParamLimits

0x296e,	// (0x00029070) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00035839) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00035839) cell_pinb_pane_g

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp01

0x297a,	// (0x0002907c) list_pinb_item_pane_ParamLimits

0x297a,	// (0x0002907c) list_pinb_item_pane

0x25b7,	// (0x00028cb9) list_highlight_pane_cp02

0x298c,	// (0x0002908e) list_pinb_item_pane_g1_ParamLimits

0x298c,	// (0x0002908e) list_pinb_item_pane_g1

0x2999,	// (0x0002909b) list_pinb_item_pane_g2_ParamLimits

0x2999,	// (0x0002909b) list_pinb_item_pane_g2

0x29a5,	// (0x000290a7) list_pinb_item_pane_g3_ParamLimits

0x29a5,	// (0x000290a7) list_pinb_item_pane_g3

0x29b6,	// (0x000290b8) list_pinb_item_pane_g4_ParamLimits

0x29b6,	// (0x000290b8) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00035840) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00035840) list_pinb_item_pane_g

0x29c2,	// (0x000290c4) list_pinb_item_pane_t1_ParamLimits

0x29c2,	// (0x000290c4) list_pinb_item_pane_t1

0x0bfe,	// (0x00027300) calc_display_pane

0x0c26,	// (0x00027328) calc_paper_pane

0x0c49,	// (0x0002734b) grid_calc_pane

0x25b7,	// (0x00028cb9) bg_list_pane_cp01

0x29d9,	// (0x000290db) clock_g1

0x29e1,	// (0x000290e3) clock_g2

0x0001,

0xf147,	// (0x00035849) clock_g

0x29e9,	// (0x000290eb) clock_t1_ParamLimits

0x29e9,	// (0x000290eb) clock_t1

0x29fe,	// (0x00029100) clock_t2_ParamLimits

0x29fe,	// (0x00029100) clock_t2

0x2a10,	// (0x00029112) clock_t3_ParamLimits

0x2a10,	// (0x00029112) clock_t3

0x2a22,	// (0x00029124) clock_t4_ParamLimits

0x2a22,	// (0x00029124) clock_t4

0x2a34,	// (0x00029136) clock_t5_ParamLimits

0x2a34,	// (0x00029136) clock_t5

0x2a49,	// (0x0002914b) clock_t6_ParamLimits

0x2a49,	// (0x0002914b) clock_t6

0x2a5b,	// (0x0002915d) clock_t7_ParamLimits

0x2a5b,	// (0x0002915d) clock_t7

0x2a6d,	// (0x0002916f) clock_t8_ParamLimits

0x2a6d,	// (0x0002916f) clock_t8

0x2a81,	// (0x00029183) clock_t9_ParamLimits

0x2a81,	// (0x00029183) clock_t9

0x0008,

0xf14c,	// (0x0003584e) clock_t_ParamLimits

0xf14c,	// (0x0003584e) clock_t

0x2a95,	// (0x00029197) popup_clock_analogue_window_cp02

0x2a95,	// (0x00029197) popup_clock_digital_window_cp01

0x2a9d,	// (0x0002919f) listscroll_help_pane

0x25b7,	// (0x00028cb9) phob_pre_status_pane

0x2aa7,	// (0x000291a9) grid_qdial_pane

0x25b7,	// (0x00028cb9) listscroll_mce_pane

0x2ab1,	// (0x000291b3) bg_notes_pane

0x2abf,	// (0x000291c1) list_notes_pane

0x2acd,	// (0x000291cf) scroll_pane_cp06

0x2ae1,	// (0x000291e3) bg_calc_paper_pane

0xb673,	// (0x00031d75) list_calc_pane

0x2af5,	// (0x000291f7) bg_calc_display_pane

0x0c77,	// (0x00027379) calc_display_pane_t1

0x0c89,	// (0x0002738b) calc_display_pane_t2

0xb68d,	// (0x00031d8f) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00035861) calc_display_pane_t

0x0c9b,	// (0x0002739d) cell_calc_pane_ParamLimits

0x0c9b,	// (0x0002739d) cell_calc_pane

0x2b01,	// (0x00029203) bg_calc_paper_pane_g1

0x2b0d,	// (0x0002920f) bg_calc_paper_pane_g2

0x2b19,	// (0x0002921b) bg_calc_paper_pane_g3

0x2b25,	// (0x00029227) bg_calc_paper_pane_g4

0x2b31,	// (0x00029233) bg_calc_paper_pane_g5

0x2b3d,	// (0x0002923f) bg_calc_paper_pane_g6

0x2b4c,	// (0x0002924e) bg_calc_paper_pane_g7

0x2b5b,	// (0x0002925d) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00035868) bg_calc_paper_pane_g

0x2b6e,	// (0x00029270) calc_bg_paper_pane_g9

0x2b81,	// (0x00029283) list_calc_item_pane_ParamLimits

0x2b81,	// (0x00029283) list_calc_item_pane

0x2b99,	// (0x0002929b) list_calc_item_pane_g1

0xb69f,	// (0x00031da1) list_calc_item_pane_t1_ParamLimits

0xb69f,	// (0x00031da1) list_calc_item_pane_t1

0x0cd0,	// (0x000273d2) list_calc_item_pane_t2_ParamLimits

0x0cd0,	// (0x000273d2) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00035879) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00035879) list_calc_item_pane_t

0x2ba6,	// (0x000292a8) cell_calc_pane_g1

0x2bb0,	// (0x000292b2) grid_highlight_pane_cp02

0x2bd2,	// (0x000292d4) bg_calc_display_pane_g1

0x0d02,	// (0x00027404) bg_calc_display_pane_g2

0x2bdb,	// (0x000292dd) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00035883) bg_calc_display_pane_g

0x0d0c,	// (0x0002740e) cell_qdial_pane_ParamLimits

0x0d0c,	// (0x0002740e) cell_qdial_pane

0x2be4,	// (0x000292e6) cell_qdial_pane_g1_ParamLimits

0x2be4,	// (0x000292e6) cell_qdial_pane_g1

0x2bfa,	// (0x000292fc) cell_qdial_pane_g2_ParamLimits

0x2bfa,	// (0x000292fc) cell_qdial_pane_g2

0x2c0b,	// (0x0002930d) cell_qdial_pane_g3_ParamLimits

0x2c0b,	// (0x0002930d) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0003588a) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0003588a) cell_qdial_pane_g

0x2c2d,	// (0x0002932f) cell_qdial_pane_t1_ParamLimits

0x2c2d,	// (0x0002932f) cell_qdial_pane_t1

0x2c45,	// (0x00029347) cell_qdial_pane_t2_ParamLimits

0x2c45,	// (0x00029347) cell_qdial_pane_t2

0x2c58,	// (0x0002935a) cell_qdial_pane_t3_ParamLimits

0x2c58,	// (0x0002935a) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00035893) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00035893) cell_qdial_pane_t

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp04

0x2c6b,	// (0x0002936d) thumbnail_qdial_pane_ParamLimits

0x2c6b,	// (0x0002936d) thumbnail_qdial_pane

0x2cc7,	// (0x000293c9) list_help_pane

0x2cd0,	// (0x000293d2) scroll_pane_cp02

0x2cd9,	// (0x000293db) help_list_pane_t1_ParamLimits

0x2cd9,	// (0x000293db) help_list_pane_t1

0xb6b1,	// (0x00031db3) bg_notes_pane_g2

0xb6b9,	// (0x00031dbb) bg_notes_pane_g3

0xb6c1,	// (0x00031dc3) notes_bg_pane_g1

0xb6c9,	// (0x00031dcb) notes_bg_pane_g4

0xb6d1,	// (0x00031dd3) notes_bg_pane_g5

0xb6d9,	// (0x00031ddb) notes_bg_pane_g6

0xb6e1,	// (0x00031de3) notes_bg_pane_g7

0xb6e9,	// (0x00031deb) notes_bg_pane_g8

0xb6f1,	// (0x00031df3) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000358b1) notes_bg_pane_g

0x2cf6,	// (0x000293f8) list_notes_text_pane_ParamLimits

0x2cf6,	// (0x000293f8) list_notes_text_pane

0x2d0b,	// (0x0002940d) list_notes_text_pane_g1

0x2d14,	// (0x00029416) list_notes_text_pane_t1

0x2af5,	// (0x000291f7) listscroll_cale_week_pane

0x2d50,	// (0x00029452) bg_cale_heading_pane

0x2d64,	// (0x00029466) bg_cale_pane_cp01

0x2d7d,	// (0x0002947f) cale_week_corner_pane

0x2d93,	// (0x00029495) cale_week_day_heading_pane

0x2da7,	// (0x000294a9) cale_week_scroll_pane_g1

0x2db8,	// (0x000294ba) cale_week_scroll_pane_g2

0x2dc9,	// (0x000294cb) cale_week_scroll_pane_g3

0x2dda,	// (0x000294dc) cale_week_scroll_pane_g4

0x2deb,	// (0x000294ed) cale_week_scroll_pane_g5

0x2dfe,	// (0x00029500) cale_week_scroll_pane_g6

0x2e11,	// (0x00029513) cale_week_scroll_pane_g7

0x2e24,	// (0x00029526) cale_week_scroll_pane_g8

0x2e37,	// (0x00029539) cale_week_scroll_pane_g9

0x2e48,	// (0x0002954a) cale_week_scroll_pane_g10

0x2e59,	// (0x0002955b) cale_week_scroll_pane_g11

0x2e6a,	// (0x0002956c) cale_week_scroll_pane_g12

0x2e7b,	// (0x0002957d) cale_week_scroll_pane_g13

0x2e8c,	// (0x0002958e) cale_week_scroll_pane_g14

0x2e9d,	// (0x0002959f) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000358c0) cale_week_scroll_pane_g

0x2eae,	// (0x000295b0) cale_week_time_pane

0x2ec1,	// (0x000295c3) grid_cale_week_pane

0x2ee8,	// (0x000295ea) scroll_pane_cp08

0x2f02,	// (0x00029604) cell_cale_week_pane_ParamLimits

0x2f02,	// (0x00029604) cell_cale_week_pane

0x2f42,	// (0x00029644) cale_week_day_heading_pane_t1

0x2f6c,	// (0x0002966e) cale_week_day_heading_pane_t2

0x2f96,	// (0x00029698) cale_week_day_heading_pane_t3

0x2fc0,	// (0x000296c2) cale_week_day_heading_pane_t4

0x2fea,	// (0x000296ec) cale_week_day_heading_pane_t5

0x3014,	// (0x00029716) cale_week_day_heading_pane_t6

0x3040,	// (0x00029742) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000358df) cale_week_day_heading_pane_t

0x306a,	// (0x0002976c) bg_cale_side_pane

0x0d20,	// (0x00027422) cale_week_time_pane_t1

0x0d38,	// (0x0002743a) cale_week_time_pane_t2

0x0d50,	// (0x00027452) cale_week_time_pane_t3

0x0d68,	// (0x0002746a) cale_week_time_pane_t4

0x0d80,	// (0x00027482) cale_week_time_pane_t5

0x0d98,	// (0x0002749a) cale_week_time_pane_t6

0x0db0,	// (0x000274b2) cale_week_time_pane_t7

0x0dc8,	// (0x000274ca) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000358ee) cale_week_time_pane_t

0x3078,	// (0x0002977a) cell_cale_week_pane_g2

0x3091,	// (0x00029793) cell_cale_week_pane_g3_ParamLimits

0x3091,	// (0x00029793) cell_cale_week_pane_g3

0x30a9,	// (0x000297ab) grid_highlight_pane_cp07

0x30b1,	// (0x000297b3) listscroll_gms_pane

0x30bb,	// (0x000297bd) grid_gms_pane

0x30c4,	// (0x000297c6) listscroll_gms_pane_g1

0x30cc,	// (0x000297ce) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000358ff) listscroll_gms_pane_g

0x30d4,	// (0x000297d6) scroll_pane_cp010

0x30df,	// (0x000297e1) cell_gms_pane_ParamLimits

0x30df,	// (0x000297e1) cell_gms_pane

0x30f1,	// (0x000297f3) cell_gms_pane_g1

0x30f9,	// (0x000297fb) cell_gms_pane_g2

0x3101,	// (0x00029803) cell_gms_pane_g3

0x310a,	// (0x0002980c) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00035904) cell_gms_pane_g

0x3113,	// (0x00029815) grid_highlight_pane_cp09

0x6cd5,	// (0x0002d3d7) phob_pre_status_pane_g1

0x6cdd,	// (0x0002d3df) phob_pre_status_pane_g2

0x6ce5,	// (0x0002d3e7) phob_pre_status_pane_g3

0x6ced,	// (0x0002d3ef) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00035cf3) phob_pre_status_pane_g

0x6cfd,	// (0x0002d3ff) phob_pre_status_pane_t1

0x6d0b,	// (0x0002d40d) phob_pre_status_pane_t2

0x6d1b,	// (0x0002d41d) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00035cfe) phob_pre_status_pane_t

0x25b7,	// (0x00028cb9) bg_list_pane_cp05

0x0de8,	// (0x000274ea) grid_vorec_pane

0x0df2,	// (0x000274f4) vorec_t1

0x0e00,	// (0x00027502) vorec_t2

0x0e0e,	// (0x00027510) vorec_t3

0x0e1c,	// (0x0002751e) vorec_t4

0x0e2a,	// (0x0002752c) vorec_t5

0xb6f9,	// (0x00031dfb) vorec_t6

0x0006,

0xf20b,	// (0x0003590d) vorec_t

0x0e46,	// (0x00027548) wait_bar_pane_cp01

0x311b,	// (0x0002981d) cell_vorec_pane_ParamLimits

0x311b,	// (0x0002981d) cell_vorec_pane

0x312e,	// (0x00029830) cell_vorec_pane_g1

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp05

0x3150,	// (0x00029852) cams_zoom_pane

0x315f,	// (0x00029861) image_vga_pane

0x3179,	// (0x0002987b) main_camera_pane_g1

0x318b,	// (0x0002988d) main_camera_pane_g2

0x319b,	// (0x0002989d) main_camera_pane_g3

0x31ab,	// (0x000298ad) main_camera_pane_g4

0x31bb,	// (0x000298bd) main_camera_pane_g5

0x31cb,	// (0x000298cd) main_camera_pane_g6

0x31dd,	// (0x000298df) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0003591c) main_camera_pane_g

0x31f9,	// (0x000298fb) main_camera_pane_t1

0x320f,	// (0x00029911) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0003592d) main_camera_pane_t

0x3249,	// (0x0002994b) cams_zoom_pane_cp_ParamLimits

0x3249,	// (0x0002994b) cams_zoom_pane_cp

0x3271,	// (0x00029973) image_cif_pane_ParamLimits

0x3271,	// (0x00029973) image_cif_pane

0x32ac,	// (0x000299ae) image_subqcif_pane

0x32b4,	// (0x000299b6) main_video_pane_g1_ParamLimits

0x32b4,	// (0x000299b6) main_video_pane_g1

0x32d8,	// (0x000299da) main_video_pane_g2_ParamLimits

0x32d8,	// (0x000299da) main_video_pane_g2

0x330c,	// (0x00029a0e) main_video_pane_g3_ParamLimits

0x330c,	// (0x00029a0e) main_video_pane_g3

0x333a,	// (0x00029a3c) main_video_pane_g4_ParamLimits

0x333a,	// (0x00029a3c) main_video_pane_g4

0x3368,	// (0x00029a6a) main_video_pane_g5_ParamLimits

0x3368,	// (0x00029a6a) main_video_pane_g5

0x3380,	// (0x00029a82) main_video_pane_g6_ParamLimits

0x3380,	// (0x00029a82) main_video_pane_g6

0x0006,

0xf230,	// (0x00035932) main_video_pane_g_ParamLimits

0xf230,	// (0x00035932) main_video_pane_g

0x33ab,	// (0x00029aad) main_video_pane_t1_ParamLimits

0x33ab,	// (0x00029aad) main_video_pane_t1

0x33f4,	// (0x00029af6) cams_zoom_pane_g1

0x33fd,	// (0x00029aff) cams_zoom_pane_g2

0x3406,	// (0x00029b08) cams_zoom_pane_g3

0x340f,	// (0x00029b11) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00035941) cams_zoom_pane_g

0x342c,	// (0x00029b2e) grid_cams_pane

0x3446,	// (0x00029b48) linegrid_cams_pane

0x345a,	// (0x00029b5c) cell_cams_pane_ParamLimits

0x345a,	// (0x00029b5c) cell_cams_pane

0x347a,	// (0x00029b7c) cams_burst_image_pane

0x3482,	// (0x00029b84) cell_cams_pane_g1

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp03

0x2ba6,	// (0x000292a8) mp_bg_pane_g1

0x25b7,	// (0x00028cb9) bg_list_pane_cp03

0xbb1e,	// (0x00032220) bg_mp_pane

0xbb26,	// (0x00032228) grid_mp_pane

0xbb2e,	// (0x00032230) media_player_g1

0xbb36,	// (0x00032238) media_player_t1

0xbb44,	// (0x00032246) media_player_t2

0xbb52,	// (0x00032254) media_player_t3

0xbb60,	// (0x00032262) media_player_t4

0xbb6e,	// (0x00032270) media_player_t5

0xbb7c,	// (0x0003227e) media_player_t6

0xbb8a,	// (0x0003228c) media_player_t7

0x0006,

0xf5db,	// (0x00035cdd) media_player_t

0xbb98,	// (0x0003229a) wait_bar_pane_cp02

0xf5c0,	// (0x00035cc2) main_usb_pane_t

0x6ccc,	// (0x0002d3ce) cell_mp_pane

0x2ba6,	// (0x000292a8) cell_mp_pane_g1

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp06

0x357c,	// (0x00029c7e) grid_skin_colour_pane

0x3584,	// (0x00029c86) list_highlight_pane_cp03

0x358c,	// (0x00029c8e) skin_g1

0x3594,	// (0x00029c96) skin_t1

0x35a3,	// (0x00029ca5) skin_t2

0x0001,

0xf274,	// (0x00035976) skin_t

0x35b1,	// (0x00029cb3) cell_skin_colour_pane_ParamLimits

0x35b1,	// (0x00029cb3) cell_skin_colour_pane

0x35d1,	// (0x00029cd3) cell_skin_colour_pane_g1

0x363c,	// (0x00029d3e) call_video_g1_ParamLimits

0x363c,	// (0x00029d3e) call_video_g1

0x3658,	// (0x00029d5a) call_video_g2_ParamLimits

0x3658,	// (0x00029d5a) call_video_g2

0x0001,

0xf279,	// (0x0003597b) call_video_g_ParamLimits

0xf279,	// (0x0003597b) call_video_g

0x36aa,	// (0x00029dac) call_video_uplink_pane_cp1_ParamLimits

0x36aa,	// (0x00029dac) call_video_uplink_pane_cp1

0x370f,	// (0x00029e11) call_video_uplink_pane_cp2

0x3751,	// (0x00029e53) video_down_crop_pane_ParamLimits

0x3751,	// (0x00029e53) video_down_crop_pane

0x3848,	// (0x00029f4a) video_down_pane_ParamLimits

0x3848,	// (0x00029f4a) video_down_pane

0x393f,	// (0x0002a041) video_down_subqcif_pane_ParamLimits

0x393f,	// (0x0002a041) video_down_subqcif_pane

0x3957,	// (0x0002a059) video_down_subqcif_pane_cp_ParamLimits

0x3957,	// (0x0002a059) video_down_subqcif_pane_cp

0x3994,	// (0x0002a096) im_reading_pane_ParamLimits

0x3994,	// (0x0002a096) im_reading_pane

0x39a6,	// (0x0002a0a8) im_writing_pane_ParamLimits

0x39a6,	// (0x0002a0a8) im_writing_pane

0x39c4,	// (0x0002a0c6) im_reading_pane_t1

0x39fd,	// (0x0002a0ff) list_im_pane

0x3a0e,	// (0x0002a110) scroll_pane_cp07

0x3a27,	// (0x0002a129) im_writing_pane_t1_ParamLimits

0x3a27,	// (0x0002a129) im_writing_pane_t1

0x3a3c,	// (0x0002a13e) im_writing_pane_t2_ParamLimits

0x3a3c,	// (0x0002a13e) im_writing_pane_t2

0x0001,

0xf283,	// (0x00035985) im_writing_pane_t_ParamLimits

0xf283,	// (0x00035985) im_writing_pane_t

0x25b7,	// (0x00028cb9) input_focus_pane_cp04

0x25b7,	// (0x00028cb9) input_focus_pane_cp05

0x3a59,	// (0x0002a15b) list_im_single_pane_ParamLimits

0x3a59,	// (0x0002a15b) list_im_single_pane

0x3a6d,	// (0x0002a16f) list_single_im_pane_t1

0x6c8c,	// (0x0002d38e) blid_accuracy_pane

0x6c94,	// (0x0002d396) blid_compass_pane

0x6c9e,	// (0x0002d3a0) main_location_t1

0x6cae,	// (0x0002d3b0) main_location_t2

0x6cbe,	// (0x0002d3c0) main_location_t3

0x0002,

0xf5ea,	// (0x00035cec) main_location_t

0x25b7,	// (0x00028cb9) aid_levels_location

0x2ba6,	// (0x000292a8) blid_accuracy_pane_g1

0x2ba6,	// (0x000292a8) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000359e7) blid_accuracy_pane_g

0x3aa7,	// (0x0002a1a9) wml_content_pane

0x3ae5,	// (0x0002a1e7) wml_button_pane_ParamLimits

0x3ae5,	// (0x0002a1e7) wml_button_pane

0x3af9,	// (0x0002a1fb) wml_list_single_large_pane_ParamLimits

0x3af9,	// (0x0002a1fb) wml_list_single_large_pane

0x3b0e,	// (0x0002a210) wml_list_single_medium_pane_ParamLimits

0x3b0e,	// (0x0002a210) wml_list_single_medium_pane

0x3b24,	// (0x0002a226) wml_list_single_small_pane_ParamLimits

0x3b24,	// (0x0002a226) wml_list_single_small_pane

0x3b3c,	// (0x0002a23e) wml_selection_box_pane_ParamLimits

0x3b3c,	// (0x0002a23e) wml_selection_box_pane

0x3b4f,	// (0x0002a251) wml_list_single_pane_t1

0x3b5e,	// (0x0002a260) wml_list_single_medium_pane_t1

0x3b6d,	// (0x0002a26f) wml_list_single_large_pane_t1

0x3b7c,	// (0x0002a27e) input_focus_pane_cp02_ParamLimits

0x3b7c,	// (0x0002a27e) input_focus_pane_cp02

0x3b8f,	// (0x0002a291) wml_selection_box_pane_g1

0x3b98,	// (0x0002a29a) wml_selection_box_pane_t1_ParamLimits

0x3b98,	// (0x0002a29a) wml_selection_box_pane_t1

0x2812,	// (0x00028f14) bg_wml_button_pane_ParamLimits

0x2812,	// (0x00028f14) bg_wml_button_pane

0x3bb0,	// (0x0002a2b2) wml_button_pane_g1

0x3bb8,	// (0x0002a2ba) wml_button_pane_t1

0x3bb0,	// (0x0002a2b2) wml_button_bg_pane_g1

0x3bc8,	// (0x0002a2ca) wml_button_bg_pane_g2

0x3bd0,	// (0x0002a2d2) wml_button_bg_pane_g3

0x3bd8,	// (0x0002a2da) wml_button_bg_pane_g4

0x3be0,	// (0x0002a2e2) wml_button_bg_pane_g5

0x3be8,	// (0x0002a2ea) wml_button_bg_pane_g6

0x3bf0,	// (0x0002a2f2) wml_button_bg_pane_g7

0x3bf8,	// (0x0002a2fa) wml_button_bg_pane_g8

0x3c00,	// (0x0002a302) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0003598a) wml_button_bg_pane_g

0x3c08,	// (0x0002a30a) bg_list_pane_cp02

0x3c10,	// (0x0002a312) mce_header_pane_ParamLimits

0x3c10,	// (0x0002a312) mce_header_pane

0x3c26,	// (0x0002a328) mce_icon_pane

0x3c26,	// (0x0002a328) mce_image_pane

0x3c2f,	// (0x0002a331) mce_text_pane_ParamLimits

0x3c2f,	// (0x0002a331) mce_text_pane

0x3c42,	// (0x0002a344) scroll_pane_cp03

0x3add,	// (0x0002a1df) scroll_pane_cp04

0x3c4c,	// (0x0002a34e) scroll_pane_cp05_ParamLimits

0x3c4c,	// (0x0002a34e) scroll_pane_cp05

0x3c58,	// (0x0002a35a) mce_header_field_pane_ParamLimits

0x3c58,	// (0x0002a35a) mce_header_field_pane

0x3c6f,	// (0x0002a371) mce_header_field_pane_2_ParamLimits

0x3c6f,	// (0x0002a371) mce_header_field_pane_2

0x3c85,	// (0x0002a387) mce_header_field_pane_3

0x3c8d,	// (0x0002a38f) list_single_mce_message_pane_ParamLimits

0x3c8d,	// (0x0002a38f) list_single_mce_message_pane

0x3ca2,	// (0x0002a3a4) list_single_mce_smart_pane_ParamLimits

0x3ca2,	// (0x0002a3a4) list_single_mce_smart_pane

0x3cc2,	// (0x0002a3c4) input_focus_pane_cp03

0x3ccb,	// (0x0002a3cd) list_header_data_pane

0x3cd3,	// (0x0002a3d5) mce_header_field_pane_t1

0x3ce3,	// (0x0002a3e5) list_single_mce_header_pane_ParamLimits

0x3ce3,	// (0x0002a3e5) list_single_mce_header_pane

0x3cf7,	// (0x0002a3f9) list_single_mce_header_pane_t1

0x3d06,	// (0x0002a408) list_single_mce_message_pane_g1

0x3d0e,	// (0x0002a410) list_single_mce_message_pane_t1

0x3d3a,	// (0x0002a43c) bg_cale_heading_pane_cp01_ParamLimits

0x3d3a,	// (0x0002a43c) bg_cale_heading_pane_cp01

0x3d5d,	// (0x0002a45f) bg_cale_pane_cp02_ParamLimits

0x3d5d,	// (0x0002a45f) bg_cale_pane_cp02

0x3d80,	// (0x0002a482) cale_month_corner_pane

0x3d96,	// (0x0002a498) cale_month_day_heading_pane_ParamLimits

0x3d96,	// (0x0002a498) cale_month_day_heading_pane

0x3dc9,	// (0x0002a4cb) cale_month_pane_g1_ParamLimits

0x3dc9,	// (0x0002a4cb) cale_month_pane_g1

0x3de5,	// (0x0002a4e7) cale_month_pane_g2_ParamLimits

0x3de5,	// (0x0002a4e7) cale_month_pane_g2

0x3e00,	// (0x0002a502) cale_month_pane_g3_ParamLimits

0x3e00,	// (0x0002a502) cale_month_pane_g3

0x3e2c,	// (0x0002a52e) cale_month_pane_g4_ParamLimits

0x3e2c,	// (0x0002a52e) cale_month_pane_g4

0x3e58,	// (0x0002a55a) cale_month_pane_g5_ParamLimits

0x3e58,	// (0x0002a55a) cale_month_pane_g5

0x3e8c,	// (0x0002a58e) cale_month_pane_g6_ParamLimits

0x3e8c,	// (0x0002a58e) cale_month_pane_g6

0x3ec8,	// (0x0002a5ca) cale_month_pane_g7_ParamLimits

0x3ec8,	// (0x0002a5ca) cale_month_pane_g7

0x3f04,	// (0x0002a606) cale_month_pane_g8_ParamLimits

0x3f04,	// (0x0002a606) cale_month_pane_g8

0x3f40,	// (0x0002a642) cale_month_pane_g9_ParamLimits

0x3f40,	// (0x0002a642) cale_month_pane_g9

0x3f7a,	// (0x0002a67c) cale_month_pane_g10_ParamLimits

0x3f7a,	// (0x0002a67c) cale_month_pane_g10

0x3fb4,	// (0x0002a6b6) cale_month_pane_g11_ParamLimits

0x3fb4,	// (0x0002a6b6) cale_month_pane_g11

0x3fee,	// (0x0002a6f0) cale_month_pane_g12_ParamLimits

0x3fee,	// (0x0002a6f0) cale_month_pane_g12

0x4028,	// (0x0002a72a) cale_month_pane_g13_ParamLimits

0x4028,	// (0x0002a72a) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0003599d) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0003599d) cale_month_pane_g

0x4074,	// (0x0002a776) cale_month_week_pane

0x4087,	// (0x0002a789) grid_cale_month_pane_ParamLimits

0x4087,	// (0x0002a789) grid_cale_month_pane

0x40b5,	// (0x0002a7b7) cale_month_day_heading_pane_t1

0x4113,	// (0x0002a815) cale_month_day_heading_pane_t2

0x4178,	// (0x0002a87a) cale_month_day_heading_pane_t3

0x41dd,	// (0x0002a8df) cale_month_day_heading_pane_t4

0x4242,	// (0x0002a944) cale_month_day_heading_pane_t5

0x42b7,	// (0x0002a9b9) cale_month_day_heading_pane_t6

0x432c,	// (0x0002aa2e) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000359b8) cale_month_day_heading_pane_t

0x306a,	// (0x0002976c) bg_cale_side_pane_cp01

0x43a1,	// (0x0002aaa3) cale_month_week_pane_t1

0x43b8,	// (0x0002aaba) cale_month_week_pane_t2

0x43cf,	// (0x0002aad1) cale_month_week_pane_t3

0x43e6,	// (0x0002aae8) cale_month_week_pane_t4

0x43fd,	// (0x0002aaff) cale_month_week_pane_t5

0x4414,	// (0x0002ab16) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000359c7) cale_month_week_pane_t

0x442b,	// (0x0002ab2d) cell_cale_month_pane_ParamLimits

0x442b,	// (0x0002ab2d) cell_cale_month_pane

0xb707,	// (0x00031e09) cell_cale_month_pane_g1

0x0e4e,	// (0x00027550) cell_cale_month_pane_t1_ParamLimits

0x0e4e,	// (0x00027550) cell_cale_month_pane_t1

0x30a9,	// (0x000297ab) grid_highlight_pane_cp08

0x2ba6,	// (0x000292a8) main_smil_g1

0x452b,	// (0x0002ac2d) smil_status_pane

0x4534,	// (0x0002ac36) smil_text_pane

0xba3e,	// (0x00032140) bg_popup_call3_rect_pane_g8

0xba46,	// (0x00032148) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00035c80) bg_popup_call3_rect_pane_g

0xbcc0,	// (0x000323c2) smil_status_volume_pane_g1

0x4548,	// (0x0002ac4a) smil_status_pane_t1

0xbcf3,	// (0x000323f5) volume_smil_pane

0x455f,	// (0x0002ac61) list_smil_text_pane

0x4569,	// (0x0002ac6b) scroll_pane_cp011

0x4574,	// (0x0002ac76) smil_text_list_pane_t1_ParamLimits

0x4574,	// (0x0002ac76) smil_text_list_pane_t1

0xb713,	// (0x00031e15) aid_volume_smil_ParamLimits

0xb713,	// (0x00031e15) aid_volume_smil

0x2ba6,	// (0x000292a8) smil_volume_pane_g1

0x2ba6,	// (0x000292a8) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000359e7) smil_volume_pane_g

0x2af5,	// (0x000291f7) listscroll_cale_day_pane

0x45ba,	// (0x0002acbc) bg_cale_pane

0x45d2,	// (0x0002acd4) list_cale_pane

0x45e3,	// (0x0002ace5) scroll_pane_cp09

0x45f4,	// (0x0002acf6) cale_bg_pane_g1

0x45fc,	// (0x0002acfe) cale_bg_pane_g2

0x4604,	// (0x0002ad06) cale_bg_pane_g3

0x460c,	// (0x0002ad0e) cale_bg_pane_g4

0x4614,	// (0x0002ad16) cale_bg_pane_g5

0x461c,	// (0x0002ad1e) cale_bg_pane_g6

0x4624,	// (0x0002ad26) cale_bg_pane_g7

0x462c,	// (0x0002ad2e) cale_bg_pane_g8

0x4634,	// (0x0002ad36) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000359ec) cale_bg_pane_g

0x463c,	// (0x0002ad3e) list_cale_time_pane_ParamLimits

0x463c,	// (0x0002ad3e) list_cale_time_pane

0x464f,	// (0x0002ad51) list_cale_time_pane_g1_ParamLimits

0x464f,	// (0x0002ad51) list_cale_time_pane_g1

0x465b,	// (0x0002ad5d) list_cale_time_pane_g2_ParamLimits

0x465b,	// (0x0002ad5d) list_cale_time_pane_g2

0x4668,	// (0x0002ad6a) list_cale_time_pane_g3_ParamLimits

0x4668,	// (0x0002ad6a) list_cale_time_pane_g3

0x4676,	// (0x0002ad78) list_cale_time_pane_g4_ParamLimits

0x4676,	// (0x0002ad78) list_cale_time_pane_g4

0x4684,	// (0x0002ad86) list_cale_time_pane_g5_ParamLimits

0x4684,	// (0x0002ad86) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000359ff) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000359ff) list_cale_time_pane_g

0x469f,	// (0x0002ada1) list_cale_time_pane_t1_ParamLimits

0x469f,	// (0x0002ada1) list_cale_time_pane_t1

0x46c7,	// (0x0002adc9) list_cale_time_pane_t2_ParamLimits

0x46c7,	// (0x0002adc9) list_cale_time_pane_t2

0x4e6c,	// (0x0002b56e) aid_blid_cardinal_pane

0x4eb6,	// (0x0002b5b8) compass_pane_t4

0x46ef,	// (0x0002adf1) list_cale_time_pane_t4_ParamLimits

0x46ef,	// (0x0002adf1) list_cale_time_pane_t4

0x4ec4,	// (0x0002b5c6) compass_pane_t5

0x4ed2,	// (0x0002b5d4) compass_pane_t6

0x4ee0,	// (0x0002b5e2) compass_pane_t7

0x4f76,	// (0x0002b678) navi_pane_cc_t1

0x518f,	// (0x0002b891) aid_phob_thumbnail_center_pane

0x585e,	// (0x0002bf60) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00035a0c) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00035a0c) list_cale_time_pane_t

0x21ea,	// (0x000288ec) bg_popup_window_pane_cp02_ParamLimits

0x21ea,	// (0x000288ec) bg_popup_window_pane_cp02

0x4717,	// (0x0002ae19) heading_pane_cp01_ParamLimits

0x4717,	// (0x0002ae19) heading_pane_cp01

0x4723,	// (0x0002ae25) loc_req_pane_ParamLimits

0x4723,	// (0x0002ae25) loc_req_pane

0x4733,	// (0x0002ae35) loc_type_pane_ParamLimits

0x4733,	// (0x0002ae35) loc_type_pane

0x4745,	// (0x0002ae47) loc_type_pane_t1_ParamLimits

0x4745,	// (0x0002ae47) loc_type_pane_t1

0x4757,	// (0x0002ae59) loc_type_pane_t2_ParamLimits

0x4757,	// (0x0002ae59) loc_type_pane_t2

0x4769,	// (0x0002ae6b) loc_type_pane_t3_ParamLimits

0x4769,	// (0x0002ae6b) loc_type_pane_t3

0x0002,

0xf311,	// (0x00035a13) loc_type_pane_t_ParamLimits

0xf311,	// (0x00035a13) loc_type_pane_t

0x477b,	// (0x0002ae7d) list_loc_req_pane

0x4785,	// (0x0002ae87) scroll_pane_cp012

0x4790,	// (0x0002ae92) list_single_loc_request_popup_menu_pane_ParamLimits

0x4790,	// (0x0002ae92) list_single_loc_request_popup_menu_pane

0x479d,	// (0x0002ae9f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x479d,	// (0x0002ae9f) list_single_loc_request_popup_menu_pane_g1

0x47a9,	// (0x0002aeab) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x47a9,	// (0x0002aeab) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00035a1a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00035a1a) list_single_loc_request_popup_menu_pane_g

0x47b5,	// (0x0002aeb7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x47b5,	// (0x0002aeb7) list_single_loc_request_popup_menu_pane_t1

0x2812,	// (0x00028f14) bg_popup_window_pane_cp03_ParamLimits

0x2812,	// (0x00028f14) bg_popup_window_pane_cp03

0x47cb,	// (0x0002aecd) heading_loc_req_pane_ParamLimits

0x47cb,	// (0x0002aecd) heading_loc_req_pane

0x47d7,	// (0x0002aed9) popup_dyc_status_message_window_g1_ParamLimits

0x47d7,	// (0x0002aed9) popup_dyc_status_message_window_g1

0x47eb,	// (0x0002aeed) popup_dyc_status_message_window_t1_ParamLimits

0x47eb,	// (0x0002aeed) popup_dyc_status_message_window_t1

0x4800,	// (0x0002af02) popup_dyc_status_message_window_t2_ParamLimits

0x4800,	// (0x0002af02) popup_dyc_status_message_window_t2

0x4815,	// (0x0002af17) popup_dyc_status_message_window_t3_ParamLimits

0x4815,	// (0x0002af17) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00035a1f) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00035a1f) popup_dyc_status_message_window_t

0x25b7,	// (0x00028cb9) bg_heading_pane_cp01

0x4831,	// (0x0002af33) heading_loc_req_pane_g1

0x4839,	// (0x0002af3b) heading_loc_req_pane_g2

0x4841,	// (0x0002af43) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00035a26) heading_loc_req_pane_g

0x4849,	// (0x0002af4b) heading_loc_req_pane_t1

0x493f,	// (0x0002b041) bg_popup_sub_pane_cp01_ParamLimits

0x493f,	// (0x0002b041) bg_popup_sub_pane_cp01

0x494d,	// (0x0002b04f) popup_cale_events_window_g1_ParamLimits

0x494d,	// (0x0002b04f) popup_cale_events_window_g1

0x496d,	// (0x0002b06f) popup_cale_events_window_g2_ParamLimits

0x496d,	// (0x0002b06f) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00035a5a) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00035a5a) popup_cale_events_window_g

0x498d,	// (0x0002b08f) popup_cale_events_window_t1_ParamLimits

0x498d,	// (0x0002b08f) popup_cale_events_window_t1

0x499f,	// (0x0002b0a1) popup_cale_events_window_t2_ParamLimits

0x499f,	// (0x0002b0a1) popup_cale_events_window_t2

0x49dd,	// (0x0002b0df) popup_cale_events_window_t3_ParamLimits

0x49dd,	// (0x0002b0df) popup_cale_events_window_t3

0x4a17,	// (0x0002b119) popup_cale_events_window_t4_ParamLimits

0x4a17,	// (0x0002b119) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00035a5f) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00035a5f) popup_cale_events_window_t

0x4a4d,	// (0x0002b14f) call_type_pane

0x4a5d,	// (0x0002b15f) popup_call_status_window_g1

0x4a71,	// (0x0002b173) popup_call_status_window_g2

0x4a85,	// (0x0002b187) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00035a68) popup_call_status_window_g

0x4a94,	// (0x0002b196) call_type_pane_g1

0x4a9d,	// (0x0002b19f) call_type_pane_g2

0x0001,

0xf36d,	// (0x00035a6f) call_type_pane_g

0x25b7,	// (0x00028cb9) bg_popup_sub_pane_cp02

0x4aa6,	// (0x0002b1a8) listscroll_popup_wml_pane

0x4aae,	// (0x0002b1b0) list_wml_pane

0x4ab8,	// (0x0002b1ba) scroll_pane_cp013

0x4ac3,	// (0x0002b1c5) list_single_graphic_popup_wml_pane_ParamLimits

0x4ac3,	// (0x0002b1c5) list_single_graphic_popup_wml_pane

0x2ba6,	// (0x000292a8) list_single_graphic_popup_wml_pane_g1

0x4ad7,	// (0x0002b1d9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00035a74) list_single_graphic_popup_wml_pane_g

0x4adf,	// (0x0002b1e1) list_single_graphic_popup_wml_pane_t1

0x4af5,	// (0x0002b1f7) aid_call_pane

0x280a,	// (0x00028f0c) popup_clock_analogue_window_g1

0x280a,	// (0x00028f0c) popup_clock_analogue_window_g2

0xb735,	// (0x00031e37) popup_clock_analogue_window_g3

0xb735,	// (0x00031e37) popup_clock_analogue_window_g4

0x2ba6,	// (0x000292a8) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00035a79) popup_clock_analogue_window_g

0xb73d,	// (0x00031e3f) popup_clock_analogue_window_t1

0xb74b,	// (0x00031e4d) clock_digital_number_pane_ParamLimits

0xb74b,	// (0x00031e4d) clock_digital_number_pane

0xb757,	// (0x00031e59) clock_digital_number_pane_cp02_ParamLimits

0xb757,	// (0x00031e59) clock_digital_number_pane_cp02

0xb763,	// (0x00031e65) clock_digital_number_pane_cp03_ParamLimits

0xb763,	// (0x00031e65) clock_digital_number_pane_cp03

0xb76f,	// (0x00031e71) clock_digital_number_pane_cp04_ParamLimits

0xb76f,	// (0x00031e71) clock_digital_number_pane_cp04

0xb77f,	// (0x00031e81) clock_digital_separator_pane_ParamLimits

0xb77f,	// (0x00031e81) clock_digital_separator_pane

0xb78b,	// (0x00031e8d) popup_clock_digital_window_t1

0x2ba6,	// (0x000292a8) clock_digital_number_pane_g1

0x2ba6,	// (0x000292a8) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000359e7) clock_digital_number_pane_g

0x2ba6,	// (0x000292a8) clock_digital_separator_pane_g1

0x2ba6,	// (0x000292a8) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000359e7) clock_digital_separator_pane_g

0x25b7,	// (0x00028cb9) bg_popup_window_pane_cp04

0x4afd,	// (0x0002b1ff) heading_pane_cp03

0x4b05,	// (0x0002b207) listscroll_popup_gms_pane

0x4b0d,	// (0x0002b20f) grid_large_graphic_popup_pane

0x4b17,	// (0x0002b219) listscroll_popup_gms_pane_g1

0x4b1f,	// (0x0002b221) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00035a84) listscroll_popup_gms_pane_g

0x3add,	// (0x0002a1df) scroll_pane_cp014

0x4b27,	// (0x0002b229) cell_large_graphic_popup_pane_ParamLimits

0x4b27,	// (0x0002b229) cell_large_graphic_popup_pane

0x4b3f,	// (0x0002b241) cell_large_graphic_popup_pane_g1_ParamLimits

0x4b3f,	// (0x0002b241) cell_large_graphic_popup_pane_g1

0x4b4b,	// (0x0002b24d) cell_large_graphic_popup_pane_g2_ParamLimits

0x4b4b,	// (0x0002b24d) cell_large_graphic_popup_pane_g2

0x4b57,	// (0x0002b259) cell_large_graphic_popup_pane_g3_ParamLimits

0x4b57,	// (0x0002b259) cell_large_graphic_popup_pane_g3

0x4b64,	// (0x0002b266) cell_large_graphic_popup_pane_g4_ParamLimits

0x4b64,	// (0x0002b266) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00035a89) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00035a89) cell_large_graphic_popup_pane_g

0x4b74,	// (0x0002b276) grid_highlight_pane_cp010

0x2ba6,	// (0x000292a8) bg_popup_call_pane_g1

0x4b7e,	// (0x0002b280) list_single_graphic_popup_conf_pane_ParamLimits

0x4b7e,	// (0x0002b280) list_single_graphic_popup_conf_pane

0x4b91,	// (0x0002b293) list_highlight_pane_cp01

0x4b9a,	// (0x0002b29c) list_single_graphic_popup_conf_pane_g1

0x4ba2,	// (0x0002b2a4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00035a92) list_single_graphic_popup_conf_pane_g

0x4baa,	// (0x0002b2ac) list_single_graphic_popup_conf_pane_t1

0x4bb8,	// (0x0002b2ba) linegrid_cams_pane_g1

0x4bc1,	// (0x0002b2c3) linegrid_cams_pane_g2

0x3101,	// (0x00029803) linegrid_cams_pane_g3

0x4bca,	// (0x0002b2cc) linegrid_cams_pane_g4

0x4bd3,	// (0x0002b2d5) linegrid_cams_pane_g5

0x4bdc,	// (0x0002b2de) linegrid_cams_pane_g6

0x310a,	// (0x0002980c) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00035a97) linegrid_cams_pane_g

0x4be7,	// (0x0002b2e9) popup_clock_analogue_window

0x4be7,	// (0x0002b2e9) popup_clock_digital_window

0x25b7,	// (0x00028cb9) popup_phob_thumbnail_window

0x2ba6,	// (0x000292a8) call_video_uplink_pane_g1

0x4bf0,	// (0x0002b2f2) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00035aa6) call_video_uplink_pane_g

0x4bf8,	// (0x0002b2fa) video_uplink_pane

0x4c00,	// (0x0002b302) mce_image_pane_g1

0x4c0a,	// (0x0002b30c) mce_image_pane_g2

0x4c14,	// (0x0002b316) mce_image_pane_g3

0x4c1c,	// (0x0002b31e) mce_image_pane_g4

0x4c24,	// (0x0002b326) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00035aab) mce_image_pane_g

0x4c2c,	// (0x0002b32e) control_top_pane_stacon_cp01_ParamLimits

0x4c2c,	// (0x0002b32e) control_top_pane_stacon_cp01

0x4c40,	// (0x0002b342) uni_indicator_pane_stacon_cp01_ParamLimits

0x4c40,	// (0x0002b342) uni_indicator_pane_stacon_cp01

0x4c51,	// (0x0002b353) bg_popup_sub_pane_cp03

0x4c5b,	// (0x0002b35d) chi_dic_find_pane

0x4c63,	// (0x0002b365) listscroll_chi_dic_pane

0x4c6c,	// (0x0002b36e) main_pane_chidic_g1

0x4c7f,	// (0x0002b381) chi_dic_find_pane_t1

0x4c8d,	// (0x0002b38f) find_chidic_pane

0x4c96,	// (0x0002b398) chi_dic_list_pane_ParamLimits

0x4c96,	// (0x0002b398) chi_dic_list_pane

0x4ca7,	// (0x0002b3a9) scroll_pane_cp020

0x4caf,	// (0x0002b3b1) find_chidic_pane_t1

0x25b7,	// (0x00028cb9) input_focus_pane_cp06

0x4cbe,	// (0x0002b3c0) list_chi_dic_pane_ParamLimits

0x4cbe,	// (0x0002b3c0) list_chi_dic_pane

0x4cd0,	// (0x0002b3d2) list_chi_dic_pane_t1_ParamLimits

0x4cd0,	// (0x0002b3d2) list_chi_dic_pane_t1

0x25b7,	// (0x00028cb9) list_highlight_pane_cp020

0x4ce3,	// (0x0002b3e5) bg_cale_heading_pane_g1

0x4ceb,	// (0x0002b3ed) bg_cale_heading_pane_g2

0x4cf3,	// (0x0002b3f5) bg_cale_heading_pane_g3

0x4cfb,	// (0x0002b3fd) bg_cale_heading_pane_g4

0x4d05,	// (0x0002b407) bg_cale_heading_pane_g5

0x4d0f,	// (0x0002b411) bg_cale_heading_pane_g6

0x4d17,	// (0x0002b419) bg_cale_heading_pane_g7

0x4d1f,	// (0x0002b421) bg_cale_heading_pane_g8

0x4d29,	// (0x0002b42b) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00035ab6) bg_cale_heading_pane_g

0x4ce3,	// (0x0002b3e5) bg_cale_side_pane_g1

0x4d33,	// (0x0002b435) bg_cale_side_pane_g2

0x4d3b,	// (0x0002b43d) bg_cale_side_pane_g3

0x4d43,	// (0x0002b445) bg_cale_side_pane_g4

0x4d4b,	// (0x0002b44d) bg_cale_side_pane_g5

0x4d53,	// (0x0002b455) bg_cale_side_pane_g6

0x4d5b,	// (0x0002b45d) bg_cale_side_pane_g7

0x4d63,	// (0x0002b465) bg_cale_side_pane_g8

0x4d6b,	// (0x0002b46d) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00035ac9) bg_cale_side_pane_g

0x4d73,	// (0x0002b475) popup_call_status_window_ParamLimits

0x4d73,	// (0x0002b475) popup_call_status_window

0x4dbc,	// (0x0002b4be) stacon_top_pane

0x4dc4,	// (0x0002b4c6) status_pane_ParamLimits

0x4dc4,	// (0x0002b4c6) status_pane

0x4dd9,	// (0x0002b4db) status_small_pane

0x4de1,	// (0x0002b4e3) control_pane

0x25b7,	// (0x00028cb9) stacon_bottom_pane

0x4de9,	// (0x0002b4eb) list_single_mce_smart_pane_t1_ParamLimits

0x4de9,	// (0x0002b4eb) list_single_mce_smart_pane_t1

0x4dfc,	// (0x0002b4fe) list_single_mce_smart_pane_t2_ParamLimits

0x4dfc,	// (0x0002b4fe) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00035adc) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00035adc) list_single_mce_smart_pane_t

0x4e1b,	// (0x0002b51d) compass_pane

0x4e24,	// (0x0002b526) main_location2_pane_t1

0x4e36,	// (0x0002b538) main_location2_pane_t2

0x4e48,	// (0x0002b54a) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00035ae1) main_location2_pane_t

0x4e8c,	// (0x0002b58e) compass_pane_g1_ParamLimits

0x4e8c,	// (0x0002b58e) compass_pane_g1

0x4e98,	// (0x0002b59a) compass_pane_t1

0x4ea7,	// (0x0002b5a9) compass_pane_t2

0x0005,

0xf3e8,	// (0x00035aea) compass_pane_t

0x4eee,	// (0x0002b5f0) text_secondary_cp61

0x4f6d,	// (0x0002b66f) navi_pane_cams_g5

0x4fe7,	// (0x0002b6e9) navi_pane_im_t1

0x4ff5,	// (0x0002b6f7) navi_pane_mp_g1_ParamLimits

0x4ff5,	// (0x0002b6f7) navi_pane_mp_g1

0x5009,	// (0x0002b70b) navi_pane_mp_g2_ParamLimits

0x5009,	// (0x0002b70b) navi_pane_mp_g2

0x5015,	// (0x0002b717) navi_pane_mp_g3_ParamLimits

0x5015,	// (0x0002b717) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00035afe) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00035afe) navi_pane_mp_g

0x5021,	// (0x0002b723) navi_pane_mp_t1

0x502f,	// (0x0002b731) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00035b05) navi_pane_mp_t

0x50d8,	// (0x0002b7da) navi_pane_vt_g1

0x5021,	// (0x0002b723) navi_pane_vt_t1

0x50e0,	// (0x0002b7e2) navi_slider_pane

0x50e8,	// (0x0002b7ea) zooming_pane

0x50f0,	// (0x0002b7f2) navi_slider_pane_g1

0xb7a8,	// (0x00031eaa) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00035b0c) navi_slider_pane_g

0x5114,	// (0x0002b816) aid_levels_zoom

0x511c,	// (0x0002b81e) zooming_pane_g1

0x5124,	// (0x0002b826) zooming_pane_g2

0x5124,	// (0x0002b826) zooming_pane_g3

0x0002,

0xf419,	// (0x00035b1b) zooming_pane_g

0x512c,	// (0x0002b82e) level_10_zoom

0x5135,	// (0x0002b837) level_11_zoom

0x513e,	// (0x0002b840) level_1_zoom

0x5147,	// (0x0002b849) level_2_zoom

0x5150,	// (0x0002b852) level_3_zoom

0x5159,	// (0x0002b85b) level_4_zoom

0x5162,	// (0x0002b864) level_5_zoom

0x516b,	// (0x0002b86d) level_6_zoom

0x5174,	// (0x0002b876) level_7_zoom

0x517d,	// (0x0002b87f) level_8_zoom

0x5186,	// (0x0002b888) level_9_zoom

0x5197,	// (0x0002b899) popup_phob_thumbnail_window_g1

0x519f,	// (0x0002b8a1) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00035b22) popup_phob_thumbnail_window_g

0xbba0,	// (0x000322a2) level_1_location

0xbba8,	// (0x000322aa) level_2_location

0xbbb0,	// (0x000322b2) level_3_location

0xbbb8,	// (0x000322ba) level_4_location

0x50e8,	// (0x0002b7ea) level_5_location

0x51a7,	// (0x0002b8a9) mce_icon_pane_g1

0x51af,	// (0x0002b8b1) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00035b27) mce_icon_pane_g

0x51b7,	// (0x0002b8b9) main_mup_pane_g1_ParamLimits

0x51b7,	// (0x0002b8b9) main_mup_pane_g1

0x51cd,	// (0x0002b8cf) main_mup_pane_g2_ParamLimits

0x51cd,	// (0x0002b8cf) main_mup_pane_g2

0x51e5,	// (0x0002b8e7) main_mup_pane_g3_ParamLimits

0x51e5,	// (0x0002b8e7) main_mup_pane_g3

0x51fd,	// (0x0002b8ff) main_mup_pane_g4_ParamLimits

0x51fd,	// (0x0002b8ff) main_mup_pane_g4

0x5215,	// (0x0002b917) main_mup_pane_g5_ParamLimits

0x5215,	// (0x0002b917) main_mup_pane_g5

0x5231,	// (0x0002b933) main_mup_pane_g6_ParamLimits

0x5231,	// (0x0002b933) main_mup_pane_g6

0x5249,	// (0x0002b94b) main_mup_pane_g7_ParamLimits

0x5249,	// (0x0002b94b) main_mup_pane_g7

0x5261,	// (0x0002b963) main_mup_pane_g8_ParamLimits

0x5261,	// (0x0002b963) main_mup_pane_g8

0x527b,	// (0x0002b97d) main_mup_pane_g9_ParamLimits

0x527b,	// (0x0002b97d) main_mup_pane_g9

0x5295,	// (0x0002b997) main_mup_pane_g10_ParamLimits

0x5295,	// (0x0002b997) main_mup_pane_g10

0x52af,	// (0x0002b9b1) main_mup_pane_g11_ParamLimits

0x52af,	// (0x0002b9b1) main_mup_pane_g11

0x52c3,	// (0x0002b9c5) main_mup_pane_g12_ParamLimits

0x52c3,	// (0x0002b9c5) main_mup_pane_g12

0x52d9,	// (0x0002b9db) main_mup_pane_g13_ParamLimits

0x52d9,	// (0x0002b9db) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00035b2c) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00035b2c) main_mup_pane_g

0x52ed,	// (0x0002b9ef) main_mup_pane_t1_ParamLimits

0x52ed,	// (0x0002b9ef) main_mup_pane_t1

0x5307,	// (0x0002ba09) main_mup_pane_t2_ParamLimits

0x5307,	// (0x0002ba09) main_mup_pane_t2

0x531f,	// (0x0002ba21) main_mup_pane_t3_ParamLimits

0x531f,	// (0x0002ba21) main_mup_pane_t3

0x5337,	// (0x0002ba39) main_mup_pane_t4_ParamLimits

0x5337,	// (0x0002ba39) main_mup_pane_t4

0x5355,	// (0x0002ba57) main_mup_pane_t5_ParamLimits

0x5355,	// (0x0002ba57) main_mup_pane_t5

0x536a,	// (0x0002ba6c) main_mup_pane_t6_ParamLimits

0x536a,	// (0x0002ba6c) main_mup_pane_t6

0x0005,

0xf445,	// (0x00035b47) main_mup_pane_t_ParamLimits

0xf445,	// (0x00035b47) main_mup_pane_t

0x537c,	// (0x0002ba7e) mup_progress_pane_ParamLimits

0x537c,	// (0x0002ba7e) mup_progress_pane

0x5388,	// (0x0002ba8a) mup_visualizer_pane_ParamLimits

0x5388,	// (0x0002ba8a) mup_visualizer_pane

0x53b8,	// (0x0002baba) mup_volume_pane_ParamLimits

0x53b8,	// (0x0002baba) mup_volume_pane

0x53d6,	// (0x0002bad8) mup_visualizer_pane_g1_ParamLimits

0x53d6,	// (0x0002bad8) mup_visualizer_pane_g1

0x53d6,	// (0x0002bad8) mup_visualizer_pane_g2_ParamLimits

0x53d6,	// (0x0002bad8) mup_visualizer_pane_g2

0x4e8c,	// (0x0002b58e) mup_visualizer_pane_g3_ParamLimits

0x4e8c,	// (0x0002b58e) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00035b54) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00035b54) mup_visualizer_pane_g

0x2ba6,	// (0x000292a8) mup_volume_pane_g1

0x53ec,	// (0x0002baee) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00035b5b) mup_volume_pane_g

0x2ba6,	// (0x000292a8) mup_progress_pane_g1

0x53f5,	// (0x0002baf7) mup_progress_pane_g2

0x53fe,	// (0x0002bb00) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00035b60) mup_progress_pane_g

0x25b7,	// (0x00028cb9) bg_popup_window_pane_cp05

0x5407,	// (0x0002bb09) heading_pane_cp02_ParamLimits

0x5407,	// (0x0002bb09) heading_pane_cp02

0x5421,	// (0x0002bb23) list_popup_blid_pane

0x5429,	// (0x0002bb2b) list_blid_sat_info_pane_ParamLimits

0x5429,	// (0x0002bb2b) list_blid_sat_info_pane

0x543c,	// (0x0002bb3e) list_blid_sat_info_pane_g1

0x5444,	// (0x0002bb46) list_blid_sat_info_pane_t1

0x554a,	// (0x0002bc4c) mup_equalizer_pane_ParamLimits

0x554a,	// (0x0002bc4c) mup_equalizer_pane

0x5563,	// (0x0002bc65) mup_equalizer_pane_cp1_ParamLimits

0x5563,	// (0x0002bc65) mup_equalizer_pane_cp1

0x5580,	// (0x0002bc82) mup_equalizer_pane_cp2_ParamLimits

0x5580,	// (0x0002bc82) mup_equalizer_pane_cp2

0x559d,	// (0x0002bc9f) mup_equalizer_pane_cp3_ParamLimits

0x559d,	// (0x0002bc9f) mup_equalizer_pane_cp3

0x55be,	// (0x0002bcc0) mup_equalizer_pane_cp4_ParamLimits

0x55be,	// (0x0002bcc0) mup_equalizer_pane_cp4

0x55df,	// (0x0002bce1) mup_equalizer_pane_cp5

0x55f3,	// (0x0002bcf5) mup_equalizer_pane_cp6

0x5607,	// (0x0002bd09) mup_equalizer_pane_cp7

0xbabe,	// (0x000321c0) bg_popup_call_poc_act_pane_g9

0xbac6,	// (0x000321c8) bg_popup_call_poc_act_pane_g10

0xbace,	// (0x000321d0) bg_popup_call_poc_act_pane_g11

0x000a,

0x2812,	// (0x00028f14) mup_scale_pane

0x2ba6,	// (0x000292a8) mup_scale_pane_g1

0x561b,	// (0x0002bd1d) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00035b7c) mup_scale_pane_g

0x5651,	// (0x0002bd53) msg_data_pane

0x5659,	// (0x0002bd5b) scroll_pane_cp017

0x5661,	// (0x0002bd63) bg_list_pane_cp04_ParamLimits

0x5661,	// (0x0002bd63) bg_list_pane_cp04

0x5681,	// (0x0002bd83) msg_data_pane_g1

0x5689,	// (0x0002bd8b) msg_data_pane_g2

0x5693,	// (0x0002bd95) msg_data_pane_g3

0x569b,	// (0x0002bd9d) msg_data_pane_g4

0x56a3,	// (0x0002bda5) msg_data_pane_g5

0x56ab,	// (0x0002bdad) msg_data_pane_g6

0x56b3,	// (0x0002bdb5) msg_data_pane_g7

0x0006,

0xf489,	// (0x00035b8b) msg_data_pane_g

0x56bb,	// (0x0002bdbd) msg_text_pane_ParamLimits

0x56bb,	// (0x0002bdbd) msg_text_pane

0x56df,	// (0x0002bde1) qrid_highlight_pane_cp011_ParamLimits

0x56df,	// (0x0002bde1) qrid_highlight_pane_cp011

0x25b7,	// (0x00028cb9) msg_body_pane

0x25b7,	// (0x00028cb9) msg_header_pane

0x56fe,	// (0x0002be00) input_focus_pane_cp07

0x5721,	// (0x0002be23) msg_header_pane_t1_ParamLimits

0x5721,	// (0x0002be23) msg_header_pane_t1

0x5735,	// (0x0002be37) msg_header_pane_t2_ParamLimits

0x5735,	// (0x0002be37) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00035b9f) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00035b9f) msg_header_pane_t

0x5747,	// (0x0002be49) msg_body_pane_g1

0x574f,	// (0x0002be51) msg_body_pane_t1_ParamLimits

0x574f,	// (0x0002be51) msg_body_pane_t1

0x5780,	// (0x0002be82) msg_body_pane_t2_ParamLimits

0x5780,	// (0x0002be82) msg_body_pane_t2

0x5792,	// (0x0002be94) msg_body_pane_t3_ParamLimits

0x5792,	// (0x0002be94) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00035ba4) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00035ba4) msg_body_pane_t

0x0e86,	// (0x00027588) main_viewer_pane_g1_ParamLimits

0x0e86,	// (0x00027588) main_viewer_pane_g1

0x0e94,	// (0x00027596) main_viewer_pane_g2_ParamLimits

0x0e94,	// (0x00027596) main_viewer_pane_g2

0x57c2,	// (0x0002bec4) main_viewer_pane_g3_ParamLimits

0x57c2,	// (0x0002bec4) main_viewer_pane_g3

0x57d1,	// (0x0002bed3) main_viewer_pane_g4_ParamLimits

0x57d1,	// (0x0002bed3) main_viewer_pane_g4

0xb7d2,	// (0x00031ed4) main_viewer_pane_g5_ParamLimits

0xb7d2,	// (0x00031ed4) main_viewer_pane_g5

0xb7d2,	// (0x00031ed4) main_viewer_pane_g7_ParamLimits

0xb7d2,	// (0x00031ed4) main_viewer_pane_g7

0x479d,	// (0x0002ae9f) main_viewer_pane_g8_ParamLimits

0x479d,	// (0x0002ae9f) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00035bb4) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00035bb4) main_viewer_pane_g

0x57e0,	// (0x0002bee2) viewer_content_pane_ParamLimits

0x57e0,	// (0x0002bee2) viewer_content_pane

0x581b,	// (0x0002bf1d) main_postcard_pane_g1_ParamLimits

0x581b,	// (0x0002bf1d) main_postcard_pane_g1

0x5831,	// (0x0002bf33) main_postcard_pane_g2_ParamLimits

0x5831,	// (0x0002bf33) main_postcard_pane_g2

0x5847,	// (0x0002bf49) main_postcard_pane_g3_ParamLimits

0x5847,	// (0x0002bf49) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00035bc5) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00035bc5) main_postcard_pane_g

0x585e,	// (0x0002bf60) main_postcard_pane_g4

0xbcd3,	// (0x000323d5) smil_status_volume_pane_g2

0x58a1,	// (0x0002bfa3) postcard_pane_ParamLimits

0x58a1,	// (0x0002bfa3) postcard_pane

0x58e3,	// (0x0002bfe5) postcard_pane_g1_ParamLimits

0x58e3,	// (0x0002bfe5) postcard_pane_g1

0x58f1,	// (0x0002bff3) postcard_pane_g2_ParamLimits

0x58f1,	// (0x0002bff3) postcard_pane_g2

0x58fd,	// (0x0002bfff) postcard_pane_g3_ParamLimits

0x58fd,	// (0x0002bfff) postcard_pane_g3

0x5909,	// (0x0002c00b) postcard_pane_g4_ParamLimits

0x5909,	// (0x0002c00b) postcard_pane_g4

0x5917,	// (0x0002c019) postcard_pane_g5_ParamLimits

0x5917,	// (0x0002c019) postcard_pane_g5

0x592c,	// (0x0002c02e) postcard_pane_g6_ParamLimits

0x592c,	// (0x0002c02e) postcard_pane_g6

0x58e3,	// (0x0002bfe5) postcard_pane_g7_ParamLimits

0x58e3,	// (0x0002bfe5) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00035bd2) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00035bd2) postcard_pane_g

0x5940,	// (0x0002c042) main_mp2_pane_g1_ParamLimits

0x5940,	// (0x0002c042) main_mp2_pane_g1

0x594c,	// (0x0002c04e) main_mp2_pane_g2_ParamLimits

0x594c,	// (0x0002c04e) main_mp2_pane_g2

0x5958,	// (0x0002c05a) main_mp2_pane_g3_ParamLimits

0x5958,	// (0x0002c05a) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00035be1) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00035be1) main_mp2_pane_g

0x5964,	// (0x0002c066) main_mp2_pane_t1_ParamLimits

0x5964,	// (0x0002c066) main_mp2_pane_t1

0x5979,	// (0x0002c07b) main_mp2_pane_t2_ParamLimits

0x5979,	// (0x0002c07b) main_mp2_pane_t2

0x598b,	// (0x0002c08d) main_mp2_pane_t3_ParamLimits

0x598b,	// (0x0002c08d) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00035be8) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00035be8) main_mp2_pane_t

0x599d,	// (0x0002c09f) pec_content_pane_ParamLimits

0x599d,	// (0x0002c09f) pec_content_pane

0x3add,	// (0x0002a1df) scroll_pane_cp015

0x59af,	// (0x0002c0b1) pec_attribute_pane_ParamLimits

0x59af,	// (0x0002c0b1) pec_attribute_pane

0x59bf,	// (0x0002c0c1) pec_content_pane_g1_ParamLimits

0x59bf,	// (0x0002c0c1) pec_content_pane_g1

0x59cb,	// (0x0002c0cd) pec_content_pane_t1_ParamLimits

0x59cb,	// (0x0002c0cd) pec_content_pane_t1

0x59dd,	// (0x0002c0df) pec_content_pane_t2_ParamLimits

0x59dd,	// (0x0002c0df) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00035bef) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00035bef) pec_content_pane_t

0x59ef,	// (0x0002c0f1) list_single_graphic_pane_cp01_ParamLimits

0x59ef,	// (0x0002c0f1) list_single_graphic_pane_cp01

0x2812,	// (0x00028f14) bg_popup_sub_pane_cp04

0x5a04,	// (0x0002c106) popup_mup_playback_window_g1

0x5a10,	// (0x0002c112) popup_mup_playback_window_t1

0x5a25,	// (0x0002c127) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00035bf4) popup_mup_playback_window_t

0x5a7a,	// (0x0002c17c) main_image_pane_g1_ParamLimits

0x5a7a,	// (0x0002c17c) main_image_pane_g1

0x5b57,	// (0x0002c259) scroll_pane_cp018_ParamLimits

0x5b57,	// (0x0002c259) scroll_pane_cp018

0x5b6f,	// (0x0002c271) scroll_pane_cp016_ParamLimits

0x5b6f,	// (0x0002c271) scroll_pane_cp016

0x5ba3,	// (0x0002c2a5) smil2_image_pane_ParamLimits

0x5ba3,	// (0x0002c2a5) smil2_image_pane

0x5bd3,	// (0x0002c2d5) smil2_root_pane_ParamLimits

0x5bd3,	// (0x0002c2d5) smil2_root_pane

0x5c0b,	// (0x0002c30d) smil2_text_pane_ParamLimits

0x5c0b,	// (0x0002c30d) smil2_text_pane

0x25b7,	// (0x00028cb9) bg_list_pane_cp06

0x5c93,	// (0x0002c395) grid_radio_pane

0x25b7,	// (0x00028cb9) bg_popup_window_pane_cp06

0x5c9b,	// (0x0002c39d) main_fmradio_pane_t1

0x4afd,	// (0x0002b1ff) heading_pane_cp04

0x5ca9,	// (0x0002c3ab) main_fmradio_pane_t2

0xbad6,	// (0x000321d8) popup_cale_lunar_info_window_g1

0x5cb7,	// (0x0002c3b9) main_fmradio_pane_t3

0xbade,	// (0x000321e0) popup_cale_lunar_info_window_g2

0x5cc5,	// (0x0002c3c7) main_fmradio_pane_t4

0x0001,

0x5cd3,	// (0x0002c3d5) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00035ccf) popup_cale_lunar_info_window_g

0xf507,	// (0x00035c09) main_fmradio_pane_t

0x5ce1,	// (0x0002c3e3) wait_bar_pane_cp03

0x5ce9,	// (0x0002c3eb) cell_fmradio_pane_ParamLimits

0x5ce9,	// (0x0002c3eb) cell_fmradio_pane

0x58e3,	// (0x0002bfe5) cell_fmradio_pane_g1_ParamLimits

0x58e3,	// (0x0002bfe5) cell_fmradio_pane_g1

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp011

0x5cfc,	// (0x0002c3fe) poc_content_pane_ParamLimits

0x5cfc,	// (0x0002c3fe) poc_content_pane

0x5d0e,	// (0x0002c410) scroll_pane_cp019

0x5d16,	// (0x0002c418) popup_call_poc_act_window_ParamLimits

0x5d16,	// (0x0002c418) popup_call_poc_act_window

0x5d3a,	// (0x0002c43c) popup_call_poc_inact_window_ParamLimits

0x5d3a,	// (0x0002c43c) popup_call_poc_inact_window

0xf5a4,	// (0x00035ca6) bg_popup_call_poc_act_pane_g

0xba4e,	// (0x00032150) bg_popup_call_poc_inact_pane_g1

0xba56,	// (0x00032158) bg_popup_call_poc_inact_pane_g2

0x5d53,	// (0x0002c455) popup_call_poc_act_window_g2

0xba5e,	// (0x00032160) bg_popup_call_poc_inact_pane_g3

0xba66,	// (0x00032168) bg_popup_call_poc_inact_pane_g4

0xba6e,	// (0x00032170) bg_popup_call_poc_inact_pane_g5

0x5d5b,	// (0x0002c45d) popup_call_poc_act_window_t1_ParamLimits

0x5d5b,	// (0x0002c45d) popup_call_poc_act_window_t1

0x5d83,	// (0x0002c485) popup_call_poc_act_window_t2_ParamLimits

0x5d83,	// (0x0002c485) popup_call_poc_act_window_t2

0x5dab,	// (0x0002c4ad) popup_call_poc_act_window_t3_ParamLimits

0x5dab,	// (0x0002c4ad) popup_call_poc_act_window_t3

0x5dd3,	// (0x0002c4d5) popup_call_poc_act_window_t4_ParamLimits

0x5dd3,	// (0x0002c4d5) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00035c14) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00035c14) popup_call_poc_act_window_t

0xba76,	// (0x00032178) bg_popup_call_poc_inact_pane_g6

0xba7e,	// (0x00032180) bg_popup_call_poc_inact_pane_g7

0xba86,	// (0x00032188) bg_popup_call_poc_inact_pane_g8

0x5de5,	// (0x0002c4e7) popup_call_poc_inact_window_g2

0xba8e,	// (0x00032190) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00035c93) bg_popup_call_poc_inact_pane_g

0x5ded,	// (0x0002c4ef) popup_call_poc_inact_window_t1_ParamLimits

0x5ded,	// (0x0002c4ef) popup_call_poc_inact_window_t1

0x5e02,	// (0x0002c504) popup_call_poc_inact_window_t2_ParamLimits

0x5e02,	// (0x0002c504) popup_call_poc_inact_window_t2

0x5e17,	// (0x0002c519) popup_call_poc_inact_window_t3_ParamLimits

0x5e17,	// (0x0002c519) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00035c1d) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00035c1d) popup_call_poc_inact_window_t

0xbc46,	// (0x00032348) context_pane_ParamLimits

0x6f35,	// (0x0002d637) signal_pane_ParamLimits

0x50e8,	// (0x0002b7ea) main_call2_pane

0xbc34,	// (0x00032336) popup_phob_thumbnail2_window_ParamLimits

0xbc34,	// (0x00032336) popup_phob_thumbnail2_window

0xb7ba,	// (0x00031ebc) aid_hotspot_pointer_arrow_pane

0xb7c2,	// (0x00031ec4) aid_hotspot_pointer_hand_pane

0x6cf5,	// (0x0002d3f7) phob_pre_status_pane_g5

0x3150,	// (0x00029852) cams_zoom_pane_ParamLimits

0x315f,	// (0x00029861) image_vga_pane_ParamLimits

0x3179,	// (0x0002987b) main_camera_pane_g1_ParamLimits

0x318b,	// (0x0002988d) main_camera_pane_g2_ParamLimits

0x319b,	// (0x0002989d) main_camera_pane_g3_ParamLimits

0x31ab,	// (0x000298ad) main_camera_pane_g4_ParamLimits

0x31bb,	// (0x000298bd) main_camera_pane_g5_ParamLimits

0x31cb,	// (0x000298cd) main_camera_pane_g6_ParamLimits

0x31dd,	// (0x000298df) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0003591c) main_camera_pane_g_ParamLimits

0x31f9,	// (0x000298fb) main_camera_pane_t1_ParamLimits

0x320f,	// (0x00029911) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0003592d) main_camera_pane_t_ParamLimits

0x2812,	// (0x00028f14) bg_popup_preview_window_pane_cp01_ParamLimits

0x2812,	// (0x00028f14) bg_popup_preview_window_pane_cp01

0x5e2c,	// (0x0002c52e) popup_phob_thumbnail2_window_g1_ParamLimits

0x5e2c,	// (0x0002c52e) popup_phob_thumbnail2_window_g1

0x25b7,	// (0x00028cb9) call2_cli_visual_pane

0x5e53,	// (0x0002c555) popup_call2_audio_conf_window_ParamLimits

0x5e53,	// (0x0002c555) popup_call2_audio_conf_window

0x5e73,	// (0x0002c575) popup_call2_audio_first_window_ParamLimits

0x5e73,	// (0x0002c575) popup_call2_audio_first_window

0x5f09,	// (0x0002c60b) popup_call2_audio_in_window_ParamLimits

0x5f09,	// (0x0002c60b) popup_call2_audio_in_window

0x5f51,	// (0x0002c653) popup_call2_audio_out_window_ParamLimits

0x5f51,	// (0x0002c653) popup_call2_audio_out_window

0x5fbb,	// (0x0002c6bd) popup_call2_audio_second_window_ParamLimits

0x5fbb,	// (0x0002c6bd) popup_call2_audio_second_window

0x6021,	// (0x0002c723) popup_call2_audio_wait_window_ParamLimits

0x6021,	// (0x0002c723) popup_call2_audio_wait_window

0x25b7,	// (0x00028cb9) bg_popup_call2_act_pane_cp03

0x27f4,	// (0x00028ef6) list_conf_pane_cp

0x605b,	// (0x0002c75d) popup_call2_audio_conf_window_t1

0x4b7e,	// (0x0002b280) list_single_graphic_popup_conf2_pane_ParamLimits

0x4b7e,	// (0x0002b280) list_single_graphic_popup_conf2_pane

0x4b91,	// (0x0002b293) list_highlight_pane_cp04

0x6069,	// (0x0002c76b) list_single_graphic_popup_conf2_pane_g1

0x4ba2,	// (0x0002b2a4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00035c24) list_single_graphic_popup_conf2_pane_g

0x6073,	// (0x0002c775) list_single_graphic_popup_conf2_pane_t1

0x6081,	// (0x0002c783) bg_popup_call2_act_pane_cp01_ParamLimits

0x6081,	// (0x0002c783) bg_popup_call2_act_pane_cp01

0x610b,	// (0x0002c80d) call_type_pane_cp05_ParamLimits

0x610b,	// (0x0002c80d) call_type_pane_cp05

0x615f,	// (0x0002c861) popup_call2_audio_second_window_g1_ParamLimits

0x615f,	// (0x0002c861) popup_call2_audio_second_window_g1

0x61b3,	// (0x0002c8b5) popup_call2_audio_second_window_g2_ParamLimits

0x61b3,	// (0x0002c8b5) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00035c29) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00035c29) popup_call2_audio_second_window_g

0x6218,	// (0x0002c91a) popup_call2_audio_second_window_t1_ParamLimits

0x6218,	// (0x0002c91a) popup_call2_audio_second_window_t1

0x62d3,	// (0x0002c9d5) popup_call2_audio_second_window_t2_ParamLimits

0x62d3,	// (0x0002c9d5) popup_call2_audio_second_window_t2

0x6326,	// (0x0002ca28) popup_call2_audio_second_window_t3_ParamLimits

0x6326,	// (0x0002ca28) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00035c30) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00035c30) popup_call2_audio_second_window_t

0x25b7,	// (0x00028cb9) bg_popup_call2_in_pane_cp02

0x25c1,	// (0x00028cc3) call_type_pane_cp04

0x25c9,	// (0x00028ccb) popup_call2_audio_wait_window_g1

0x25d1,	// (0x00028cd3) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00035809) popup_call2_audio_wait_window_g

0x25d9,	// (0x00028cdb) popup_call2_audio_wait_window_t3

0x6419,	// (0x0002cb1b) bg_popup_call2_act_pane_ParamLimits

0x6419,	// (0x0002cb1b) bg_popup_call2_act_pane

0x64d9,	// (0x0002cbdb) call_type_pane_cp03_ParamLimits

0x64d9,	// (0x0002cbdb) call_type_pane_cp03

0x653d,	// (0x0002cc3f) popup_call2_audio_first_window_g1_ParamLimits

0x653d,	// (0x0002cc3f) popup_call2_audio_first_window_g1

0x65ad,	// (0x0002ccaf) popup_call2_audio_first_window_g2_ParamLimits

0x65ad,	// (0x0002ccaf) popup_call2_audio_first_window_g2

0x53d6,	// (0x0002bad8) popup_call2_audio_first_window_g3_ParamLimits

0x53d6,	// (0x0002bad8) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00035c39) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00035c39) popup_call2_audio_first_window_g

0x668b,	// (0x0002cd8d) popup_call2_audio_first_window_t1_ParamLimits

0x668b,	// (0x0002cd8d) popup_call2_audio_first_window_t1

0x678e,	// (0x0002ce90) popup_call2_audio_first_window_t4_ParamLimits

0x678e,	// (0x0002ce90) popup_call2_audio_first_window_t4

0x6871,	// (0x0002cf73) popup_call2_audio_first_window_t5_ParamLimits

0x6871,	// (0x0002cf73) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00035c44) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00035c44) popup_call2_audio_first_window_t

0x280a,	// (0x00028f0c) bg_popup_call2_act_pane_g1

0xbae6,	// (0x000321e8) popup_cale_lunar_info_window_t1

0xbaf4,	// (0x000321f6) popup_cale_lunar_info_window_t2

0xbb02,	// (0x00032204) popup_cale_lunar_info_window_t3

0x25b7,	// (0x00028cb9) bg_popup_call2_bubble_pane

0x6972,	// (0x0002d074) bg_popup_call2_in_pane_cp01_ParamLimits

0x6972,	// (0x0002d074) bg_popup_call2_in_pane_cp01

0x226f,	// (0x00028971) call_type_pane_cp02

0x69ba,	// (0x0002d0bc) popup_call2_audio_out_window_g1_ParamLimits

0x69ba,	// (0x0002d0bc) popup_call2_audio_out_window_g1

0x69e6,	// (0x0002d0e8) popup_call2_audio_out_window_g2_ParamLimits

0x69e6,	// (0x0002d0e8) popup_call2_audio_out_window_g2

0x6a0e,	// (0x0002d110) popup_call2_audio_out_window_g3_ParamLimits

0x6a0e,	// (0x0002d110) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00035c4d) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00035c4d) popup_call2_audio_out_window_g

0x6a49,	// (0x0002d14b) popup_call2_audio_out_window_t1_ParamLimits

0x6a49,	// (0x0002d14b) popup_call2_audio_out_window_t1

0x6aa8,	// (0x0002d1aa) popup_call2_audio_out_window_t2_ParamLimits

0x6aa8,	// (0x0002d1aa) popup_call2_audio_out_window_t2

0x6afc,	// (0x0002d1fe) popup_call2_audio_out_window_t3_ParamLimits

0x6afc,	// (0x0002d1fe) popup_call2_audio_out_window_t3

0x6b12,	// (0x0002d214) popup_call2_audio_out_window_t4_ParamLimits

0x6b12,	// (0x0002d214) popup_call2_audio_out_window_t4

0x6b28,	// (0x0002d22a) popup_call2_audio_out_window_t5_ParamLimits

0x6b28,	// (0x0002d22a) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00035c56) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00035c56) popup_call2_audio_out_window_t

0x6b8c,	// (0x0002d28e) bg_popup_call2_in_pane_ParamLimits

0x6b8c,	// (0x0002d28e) bg_popup_call2_in_pane

0xb7f0,	// (0x00031ef2) popup_call2_audio_in_window_g1_ParamLimits

0xb7f0,	// (0x00031ef2) popup_call2_audio_in_window_g1

0xb828,	// (0x00031f2a) popup_call2_audio_in_window_g2_ParamLimits

0xb828,	// (0x00031f2a) popup_call2_audio_in_window_g2

0xb860,	// (0x00031f62) popup_call2_audio_in_window_g3_ParamLimits

0xb860,	// (0x00031f62) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00035c63) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00035c63) popup_call2_audio_in_window_g

0xb8b8,	// (0x00031fba) popup_call2_audio_in_window_t1_ParamLimits

0xb8b8,	// (0x00031fba) popup_call2_audio_in_window_t1

0xb938,	// (0x0003203a) popup_call2_audio_in_window_t2_ParamLimits

0xb938,	// (0x0003203a) popup_call2_audio_in_window_t2

0xb9b8,	// (0x000320ba) popup_call2_audio_in_window_t3_ParamLimits

0xb9b8,	// (0x000320ba) popup_call2_audio_in_window_t3

0xb9d2,	// (0x000320d4) popup_call2_audio_in_window_t4_ParamLimits

0xb9d2,	// (0x000320d4) popup_call2_audio_in_window_t4

0xb9e4,	// (0x000320e6) popup_call2_audio_in_window_t5_ParamLimits

0xb9e4,	// (0x000320e6) popup_call2_audio_in_window_t5

0xb9f9,	// (0x000320fb) popup_call2_audio_in_window_t6_ParamLimits

0xb9f9,	// (0x000320fb) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00035c6c) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00035c6c) popup_call2_audio_in_window_t

0x280a,	// (0x00028f0c) bg_popup_call2_in_pane_g1

0xbb10,	// (0x00032212) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00035cd4) popup_cale_lunar_info_window_t

0x2812,	// (0x00028f14) bg_popup_call2_rect_pane_ParamLimits

0x2812,	// (0x00028f14) bg_popup_call2_rect_pane

0x25b7,	// (0x00028cb9) call2_cli_visual_graphic_pane

0x25b7,	// (0x00028cb9) call2_cli_visual_text_pane

0xbce6,	// (0x000323e8) smil_status_volume_pane_g3

0x0002,

0x2ba6,	// (0x000292a8) call2_cli_visual_graphic_pane_g1

0x2ba6,	// (0x000292a8) call2_cli_visual_graphic_pane_g2

0x2ba6,	// (0x000292a8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00035c79) call2_cli_visual_graphic_pane_g

0xba0e,	// (0x00032110) bg_popup_call2_rect_pane_g1

0x2cbf,	// (0x000293c1) bg_popup_call2_rect_pane_g2

0xba16,	// (0x00032118) bg_popup_call2_rect_pane_g3

0xba1e,	// (0x00032120) bg_popup_call2_rect_pane_g4

0xba26,	// (0x00032128) bg_popup_call2_rect_pane_g5

0xba2e,	// (0x00032130) bg_popup_call2_rect_pane_g6

0xba36,	// (0x00032138) bg_popup_call2_rect_pane_g7

0xba3e,	// (0x00032140) bg_popup_call2_rect_pane_g8

0xba46,	// (0x00032148) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00035c80) bg_popup_call2_rect_pane_g

0xba4e,	// (0x00032150) bg_popup_call2_bubble_pane_g1

0xba56,	// (0x00032158) bg_popup_call2_bubble_pane_g2

0xba5e,	// (0x00032160) bg_popup_call2_bubble_pane_g3

0xba66,	// (0x00032168) bg_popup_call2_bubble_pane_g4

0xba6e,	// (0x00032170) bg_popup_call2_bubble_pane_g5

0xba76,	// (0x00032178) bg_popup_call2_bubble_pane_g6

0xba7e,	// (0x00032180) bg_popup_call2_bubble_pane_g7

0xba86,	// (0x00032188) bg_popup_call2_bubble_pane_g8

0xba8e,	// (0x00032190) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00035c93) bg_popup_call2_bubble_pane_g

0x2d3d,	// (0x0002943f) aid_cale_week_size_cell_pane

0x3225,	// (0x00029927) aid_cams_cif_uncrop_pane_ParamLimits

0x3225,	// (0x00029927) aid_cams_cif_uncrop_pane

0x3418,	// (0x00029b1a) aid_cams_size_cell_ParamLimits

0x3418,	// (0x00029b1a) aid_cams_size_cell

0x342c,	// (0x00029b2e) grid_cams_pane_ParamLimits

0x3446,	// (0x00029b48) linegrid_cams_pane_ParamLimits

0x366e,	// (0x00029d70) call_video_pane_t1

0x368c,	// (0x00029d8e) call_video_pane_t2

0x0001,

0xf27e,	// (0x00035980) call_video_pane_t

0x3d1c,	// (0x0002a41e) aid_cale_month_size_cell_pane_ParamLimits

0x3d1c,	// (0x0002a41e) aid_cale_month_size_cell_pane

0xf61b,	// (0x00035d1d) smil_status_volume_pane_g

0xbcf3,	// (0x000323f5) volume_smil_pane_ParamLimits

0xb5f5,	// (0x00031cf7) aid_popup2_width_pane

0x2c17,	// (0x00029319) cell_qdial_pane_g4_ParamLimits

0x2c17,	// (0x00029319) cell_qdial_pane_g4

0x4e6c,	// (0x0002b56e) aid_blid_cardinal_pane_ParamLimits

0x4e78,	// (0x0002b57a) aid_blid_destination_pane_ParamLimits

0x4e78,	// (0x0002b57a) aid_blid_destination_pane

0x2812,	// (0x00028f14) bg_popup_call_poc_act_pane_ParamLimits

0x2812,	// (0x00028f14) bg_popup_call_poc_act_pane

0x2812,	// (0x00028f14) bg_popup_call_poc_inact_pane_ParamLimits

0x2812,	// (0x00028f14) bg_popup_call_poc_inact_pane

0xba96,	// (0x00032198) bg_popup_call_poc_act_pane_g1

0xba9e,	// (0x000321a0) bg_popup_call_poc_act_pane_g2

0xbaa6,	// (0x000321a8) bg_popup_call_poc_act_pane_g3

0xba66,	// (0x00032168) bg_popup_call_poc_act_pane_g4

0xba6e,	// (0x00032170) bg_popup_call_poc_act_pane_g5

0xbaae,	// (0x000321b0) bg_popup_call_poc_act_pane_g6

0xba7e,	// (0x00032180) bg_popup_call_poc_act_pane_g7

0xbab6,	// (0x000321b8) bg_popup_call_poc_act_pane_g8

0x25b7,	// (0x00028cb9) main_usb_pane

0xbc0f,	// (0x00032311) popup_cale_lunar_info_window

0x39c4,	// (0x0002a0c6) im_reading_pane_t1_ParamLimits

0x39fd,	// (0x0002a0ff) list_im_pane_ParamLimits

0x3a0e,	// (0x0002a110) scroll_pane_cp07_ParamLimits

0x25b7,	// (0x00028cb9) grid_highlight_pane_cp012

0x2812,	// (0x00028f14) mup_scale_pane_ParamLimits

0x58e3,	// (0x0002bfe5) main_usb_pane_g1_ParamLimits

0x58e3,	// (0x0002bfe5) main_usb_pane_g1

0x6c0a,	// (0x0002d30c) main_usb_pane_g2_ParamLimits

0x6c0a,	// (0x0002d30c) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00035cbd) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00035cbd) main_usb_pane_g

0x6c20,	// (0x0002d322) main_usb_pane_t1_ParamLimits

0x6c20,	// (0x0002d322) main_usb_pane_t1

0x6c32,	// (0x0002d334) main_usb_pane_t2_ParamLimits

0x6c32,	// (0x0002d334) main_usb_pane_t2

0x6c44,	// (0x0002d346) main_usb_pane_t3_ParamLimits

0x6c44,	// (0x0002d346) main_usb_pane_t3

0x6c56,	// (0x0002d358) main_usb_pane_t4_ParamLimits

0x6c56,	// (0x0002d358) main_usb_pane_t4

0x6c68,	// (0x0002d36a) main_usb_pane_t5_ParamLimits

0x6c68,	// (0x0002d36a) main_usb_pane_t5

0x6c7a,	// (0x0002d37c) main_usb_pane_t6_ParamLimits

0x6c7a,	// (0x0002d37c) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00035cc2) main_usb_pane_t_ParamLimits

0x4e1b,	// (0x0002b51d) aid_text_placing

0x4e24,	// (0x0002b526) main_location2_pane_t1_ParamLimits

0x4e36,	// (0x0002b538) main_location2_pane_t2_ParamLimits

0x4e48,	// (0x0002b54a) main_location2_pane_t3_ParamLimits

0x4e5a,	// (0x0002b55c) main_location2_pane_t4_ParamLimits

0x4e5a,	// (0x0002b55c) main_location2_pane_t4

0xf3df,	// (0x00035ae1) main_location2_pane_t_ParamLimits

0x28ea,	// (0x00028fec) find_pinb_pane_g2_ParamLimits

0x28ea,	// (0x00028fec) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0003582f) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0003582f) find_pinb_pane_g

0x28f6,	// (0x00028ff8) find_pinb_pane_t1_ParamLimits

0x2908,	// (0x0002900a) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00035834) find_pinb_pane_t_ParamLimits

0x25b7,	// (0x00028cb9) main_call3_pane

0x40b5,	// (0x0002a7b7) cale_month_day_heading_pane_t1_ParamLimits

0x4113,	// (0x0002a815) cale_month_day_heading_pane_t2_ParamLimits

0x4178,	// (0x0002a87a) cale_month_day_heading_pane_t3_ParamLimits

0x41dd,	// (0x0002a8df) cale_month_day_heading_pane_t4_ParamLimits

0x4242,	// (0x0002a944) cale_month_day_heading_pane_t5_ParamLimits

0x42b7,	// (0x0002a9b9) cale_month_day_heading_pane_t6_ParamLimits

0x432c,	// (0x0002aa2e) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000359b8) cale_month_day_heading_pane_t_ParamLimits

0x4556,	// (0x0002ac58) smil_status_volume_pane

0x58bf,	// (0x0002bfc1) postcard_address_pane_ParamLimits

0x58bf,	// (0x0002bfc1) postcard_address_pane

0x58d1,	// (0x0002bfd3) postcard_message_pane_ParamLimits

0x58d1,	// (0x0002bfd3) postcard_message_pane

0x6be8,	// (0x0002d2ea) call2_cli_visual_pane_t1_ParamLimits

0x6be8,	// (0x0002d2ea) call2_cli_visual_pane_t1

0x7162,	// (0x0002d864) postcard_message_pane_t1_ParamLimits

0x7162,	// (0x0002d864) postcard_message_pane_t1

0x714b,	// (0x0002d84d) postcard_address_pane_t1_ParamLimits

0x714b,	// (0x0002d84d) postcard_address_pane_t1

0x7137,	// (0x0002d839) popup_call3_audio_in_window_ParamLimits

0x7137,	// (0x0002d839) popup_call3_audio_in_window

0x6fc2,	// (0x0002d6c4) bg_popup_call3_in_pane_ParamLimits

0x6fc2,	// (0x0002d6c4) bg_popup_call3_in_pane

0x7038,	// (0x0002d73a) popup_call3_audio_in_window_g1_ParamLimits

0x7038,	// (0x0002d73a) popup_call3_audio_in_window_g1

0x7058,	// (0x0002d75a) popup_call3_audio_in_window_g2_ParamLimits

0x7058,	// (0x0002d75a) popup_call3_audio_in_window_g2

0x7078,	// (0x0002d77a) popup_call3_audio_in_window_g3_ParamLimits

0x7078,	// (0x0002d77a) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00035d24) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00035d24) popup_call3_audio_in_window_g

0x70a9,	// (0x0002d7ab) popup_call3_audio_in_window_t1_ParamLimits

0x70a9,	// (0x0002d7ab) popup_call3_audio_in_window_t1

0x70e7,	// (0x0002d7e9) popup_call3_audio_in_window_t2_ParamLimits

0x70e7,	// (0x0002d7e9) popup_call3_audio_in_window_t2

0x7125,	// (0x0002d827) popup_call3_audio_in_window_t3_ParamLimits

0x7125,	// (0x0002d827) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00035d2d) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00035d2d) popup_call3_audio_in_window_t

0x50e8,	// (0x0002b7ea) bg_popup_call3_rect_pane

0xba0e,	// (0x00032110) bg_popup_call3_rect_pane_g1

0x2cbf,	// (0x000293c1) bg_popup_call3_rect_pane_g2

0xba16,	// (0x00032118) bg_popup_call3_rect_pane_g3

0xba1e,	// (0x00032120) bg_popup_call3_rect_pane_g4

0xba26,	// (0x00032128) bg_popup_call3_rect_pane_g5

0xba2e,	// (0x00032130) bg_popup_call3_rect_pane_g6

0xba36,	// (0x00032138) bg_popup_call3_rect_pane_g7

0x53ce,	// (0x0002bad0) mup_visualizer_osc_pane

0x53e4,	// (0x0002bae6) mup_visualizer_spec_pane

0x6ff2,	// (0x0002d6f4) call3_video_qcif_pane_ParamLimits

0x6ff2,	// (0x0002d6f4) call3_video_qcif_pane

0x7005,	// (0x0002d707) call3_video_qcif_uncrop_pane_ParamLimits

0x7005,	// (0x0002d707) call3_video_qcif_uncrop_pane

0x7013,	// (0x0002d715) call3_video_subqcif_pane_ParamLimits

0x7013,	// (0x0002d715) call3_video_subqcif_pane

0x7027,	// (0x0002d729) call3_video_subqcif_uncrop_pane_ParamLimits

0x7027,	// (0x0002d729) call3_video_subqcif_uncrop_pane

0x7098,	// (0x0002d79a) popup_call3_audio_in_window_g4_ParamLimits

0x7098,	// (0x0002d79a) popup_call3_audio_in_window_g4

0x6fb1,	// (0x0002d6b3) mup_spec_half_pane

0x6fba,	// (0x0002d6bc) mup_spec_half_pane_cp

0xbca6,	// (0x000323a8) mup_osc_middle_pane

0xbcaf,	// (0x000323b1) mup_visualizer_osc_pane_g1

0x6f91,	// (0x0002d693) mup_spec_bar_pane_ParamLimits

0x6f91,	// (0x0002d693) mup_spec_bar_pane

0xbc93,	// (0x00032395) mup_spec_bar_pane_g1

0xbc9d,	// (0x0003239f) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00035d18) mup_spec_bar_pane_g

0x2d3d,	// (0x0002943f) aid_cale_week_size_cell_pane_ParamLimits

0x2d50,	// (0x00029452) bg_cale_heading_pane_ParamLimits

0x2d64,	// (0x00029466) bg_cale_pane_cp01_ParamLimits

0x2d7d,	// (0x0002947f) cale_week_corner_pane_ParamLimits

0x2d93,	// (0x00029495) cale_week_day_heading_pane_ParamLimits

0x2da7,	// (0x000294a9) cale_week_scroll_pane_g1_ParamLimits

0x2db8,	// (0x000294ba) cale_week_scroll_pane_g2_ParamLimits

0x2dc9,	// (0x000294cb) cale_week_scroll_pane_g3_ParamLimits

0x2dda,	// (0x000294dc) cale_week_scroll_pane_g4_ParamLimits

0x2deb,	// (0x000294ed) cale_week_scroll_pane_g5_ParamLimits

0x2dfe,	// (0x00029500) cale_week_scroll_pane_g6_ParamLimits

0x2e11,	// (0x00029513) cale_week_scroll_pane_g7_ParamLimits

0x2e24,	// (0x00029526) cale_week_scroll_pane_g8_ParamLimits

0x2e37,	// (0x00029539) cale_week_scroll_pane_g9_ParamLimits

0x2e48,	// (0x0002954a) cale_week_scroll_pane_g10_ParamLimits

0x2e59,	// (0x0002955b) cale_week_scroll_pane_g11_ParamLimits

0x2e6a,	// (0x0002956c) cale_week_scroll_pane_g12_ParamLimits

0x2e7b,	// (0x0002957d) cale_week_scroll_pane_g13_ParamLimits

0x2e8c,	// (0x0002958e) cale_week_scroll_pane_g14_ParamLimits

0x2e9d,	// (0x0002959f) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000358c0) cale_week_scroll_pane_g_ParamLimits

0x2eae,	// (0x000295b0) cale_week_time_pane_ParamLimits

0x2ec1,	// (0x000295c3) grid_cale_week_pane_ParamLimits

0x2ed6,	// (0x000295d8) listscroll_cale_week_pane_t1

0x2ee8,	// (0x000295ea) scroll_pane_cp08_ParamLimits

0x3d80,	// (0x0002a482) cale_month_corner_pane_ParamLimits

0x4062,	// (0x0002a764) cale_month_pane_t1

0x4074,	// (0x0002a776) cale_month_week_pane_ParamLimits

0x4a5d,	// (0x0002b15f) popup_call_status_window_g1_ParamLimits

0x4a71,	// (0x0002b173) popup_call_status_window_g2_ParamLimits

0x4a85,	// (0x0002b187) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00035a68) popup_call_status_window_g_ParamLimits

0x4aed,	// (0x0002b1ef) aid_call2_pane

0x5707,	// (0x0002be09) msg_header_pane_g1

0x58bf,	// (0x0002bfc1) postcard_address2_pane_ParamLimits

0x58bf,	// (0x0002bfc1) postcard_address2_pane

0x58d1,	// (0x0002bfd3) postcard_message2_pane_ParamLimits

0x58d1,	// (0x0002bfd3) postcard_message2_pane

0x6f43,	// (0x0002d645) message2_row_pane_ParamLimits

0x6f43,	// (0x0002d645) message2_row_pane

0x6f5f,	// (0x0002d661) address2_row_pane_ParamLimits

0x6f5f,	// (0x0002d661) address2_row_pane

0xbc61,	// (0x00032363) postcard_message2_row_pane_g1

0xbc69,	// (0x0003236b) postcard_message2_row_pane_t1

0xbc61,	// (0x00032363) address2_row_pane_g1

0xbc69,	// (0x0003236b) address2_row_pane_t1

0x0de0,	// (0x000274e2) aid_size_cell_vorec

0x25b7,	// (0x00028cb9) main_rss_pane

0x6f72,	// (0x0002d674) rss_list_single_pane_ParamLimits

0x6f72,	// (0x0002d674) rss_list_single_pane

0xbc77,	// (0x00032379) rss_list_single_pane_t1

0xbc85,	// (0x00032387) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00035d13) rss_list_single_pane_t

0x25b7,	// (0x00028cb9) main_camera2_pane

0x25b7,	// (0x00028cb9) main_video2_pane

0x11b8,	// (0x000278ba) cams_zoom_pane_cp2_ParamLimits

0x11b8,	// (0x000278ba) cams_zoom_pane_cp2

0x11d8,	// (0x000278da) image2_vga_pane_ParamLimits

0x11d8,	// (0x000278da) image2_vga_pane

0x1229,	// (0x0002792b) main_camera2_pane_g1_ParamLimits

0x1229,	// (0x0002792b) main_camera2_pane_g1

0x1249,	// (0x0002794b) main_camera2_pane_g2_ParamLimits

0x1249,	// (0x0002794b) main_camera2_pane_g2

0x1269,	// (0x0002796b) main_camera2_pane_g3_ParamLimits

0x1269,	// (0x0002796b) main_camera2_pane_g3

0x1289,	// (0x0002798b) main_camera2_pane_g4_ParamLimits

0x1289,	// (0x0002798b) main_camera2_pane_g4

0x12a9,	// (0x000279ab) main_camera2_pane_g5_ParamLimits

0x12a9,	// (0x000279ab) main_camera2_pane_g5

0x12c9,	// (0x000279cb) main_camera2_pane_g6_ParamLimits

0x12c9,	// (0x000279cb) main_camera2_pane_g6

0x12e9,	// (0x000279eb) main_camera2_pane_g7_ParamLimits

0x12e9,	// (0x000279eb) main_camera2_pane_g7

0x1309,	// (0x00027a0b) main_camera2_pane_g8_ParamLimits

0x1309,	// (0x00027a0b) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00035d34) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00035d34) main_camera2_pane_g

0x1349,	// (0x00027a4b) main_camera2_pane_t1_ParamLimits

0x1349,	// (0x00027a4b) main_camera2_pane_t1

0x137e,	// (0x00027a80) main_camera2_pane_t2_ParamLimits

0x137e,	// (0x00027a80) main_camera2_pane_t2

0x13a4,	// (0x00027aa6) main_camera2_pane_t3_ParamLimits

0x13a4,	// (0x00027aa6) main_camera2_pane_t3

0x1402,	// (0x00027b04) main_camera2_pane_t4_ParamLimits

0x1402,	// (0x00027b04) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00035d47) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00035d47) main_camera2_pane_t

0x1494,	// (0x00027b96) cams_zoom_pane_cp4_ParamLimits

0x1494,	// (0x00027b96) cams_zoom_pane_cp4

0x14aa,	// (0x00027bac) image2_cif_pane_ParamLimits

0x14aa,	// (0x00027bac) image2_cif_pane

0x14d5,	// (0x00027bd7) image2_subqcif_pane_ParamLimits

0x14d5,	// (0x00027bd7) image2_subqcif_pane

0x14ef,	// (0x00027bf1) main_video2_pane_g1_ParamLimits

0x14ef,	// (0x00027bf1) main_video2_pane_g1

0x1509,	// (0x00027c0b) main_video2_pane_g2_ParamLimits

0x1509,	// (0x00027c0b) main_video2_pane_g2

0x151f,	// (0x00027c21) main_video2_pane_g3_ParamLimits

0x151f,	// (0x00027c21) main_video2_pane_g3

0x1535,	// (0x00027c37) main_video2_pane_g4_ParamLimits

0x1535,	// (0x00027c37) main_video2_pane_g4

0x154b,	// (0x00027c4d) main_video2_pane_g5_ParamLimits

0x154b,	// (0x00027c4d) main_video2_pane_g5

0x1561,	// (0x00027c63) main_video2_pane_g6_ParamLimits

0x1561,	// (0x00027c63) main_video2_pane_g6

0x0005,

0xf654,	// (0x00035d56) main_video2_pane_g_ParamLimits

0xf654,	// (0x00035d56) main_video2_pane_g

0x157b,	// (0x00027c7d) main_video2_pane_t1_ParamLimits

0x157b,	// (0x00027c7d) main_video2_pane_t1

0x159f,	// (0x00027ca1) main_video2_pane_t2_ParamLimits

0x159f,	// (0x00027ca1) main_video2_pane_t2

0x15ed,	// (0x00027cef) main_video2_pane_t3_ParamLimits

0x15ed,	// (0x00027cef) main_video2_pane_t3

0x0002,

0xf661,	// (0x00035d63) main_video2_pane_t_ParamLimits

0xf661,	// (0x00035d63) main_video2_pane_t

0x6d35,	// (0x0002d437) call_muted_g2

0x0001,

0xf603,	// (0x00035d05) call_muted_g

0x25b7,	// (0x00028cb9) main_mup2_pane

0x717d,	// (0x0002d87f) main_mup2_pane_g1_ParamLimits

0x717d,	// (0x0002d87f) main_mup2_pane_g1

0x7189,	// (0x0002d88b) main_mup2_pane_g2_ParamLimits

0x7189,	// (0x0002d88b) main_mup2_pane_g2

0xbe17,	// (0x00032519) main_mup_pane_g13_cp1

0xbe1f,	// (0x00032521) mup_volume_pane_cp1

0x71a5,	// (0x0002d8a7) main_mup2_pane_g4_ParamLimits

0x71a5,	// (0x0002d8a7) main_mup2_pane_g4

0x71b7,	// (0x0002d8b9) main_mup2_pane_g5_ParamLimits

0x71b7,	// (0x0002d8b9) main_mup2_pane_g5

0x71c9,	// (0x0002d8cb) main_mup2_pane_g6_ParamLimits

0x71c9,	// (0x0002d8cb) main_mup2_pane_g6

0x71db,	// (0x0002d8dd) main_mup2_pane_g7_ParamLimits

0x71db,	// (0x0002d8dd) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00035d6a) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00035d6a) main_mup2_pane_g

0x71f3,	// (0x0002d8f5) main_mup2_pane_t1_ParamLimits

0x71f3,	// (0x0002d8f5) main_mup2_pane_t1

0x7209,	// (0x0002d90b) main_mup2_pane_t2_ParamLimits

0x7209,	// (0x0002d90b) main_mup2_pane_t2

0x721f,	// (0x0002d921) main_mup2_pane_t3_ParamLimits

0x721f,	// (0x0002d921) main_mup2_pane_t3

0x7235,	// (0x0002d937) main_mup2_pane_t4_ParamLimits

0x7235,	// (0x0002d937) main_mup2_pane_t4

0x724d,	// (0x0002d94f) main_mup2_pane_t5_ParamLimits

0x724d,	// (0x0002d94f) main_mup2_pane_t5

0x7265,	// (0x0002d967) main_mup2_pane_t6_ParamLimits

0x7265,	// (0x0002d967) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00035d79) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00035d79) main_mup2_pane_t

0x7295,	// (0x0002d997) mup2_visualizer_pane_ParamLimits

0x7295,	// (0x0002d997) mup2_visualizer_pane

0x72c3,	// (0x0002d9c5) mup_progress_pane_cp_ParamLimits

0x72c3,	// (0x0002d9c5) mup_progress_pane_cp

0xbdf9,	// (0x000324fb) mup_volume_pane_cp_ParamLimits

0xbdf9,	// (0x000324fb) mup_volume_pane_cp

0x72d7,	// (0x0002d9d9) mup2_visualizer_pane_g1_ParamLimits

0x72d7,	// (0x0002d9d9) mup2_visualizer_pane_g1

0xbd38,	// (0x0003243a) mup2_visualizer_pane_g2_ParamLimits

0xbd38,	// (0x0003243a) mup2_visualizer_pane_g2

0x72ee,	// (0x0002d9f0) mup2_visualizer_pane_g3_ParamLimits

0x72ee,	// (0x0002d9f0) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00035d86) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00035d86) mup2_visualizer_pane_g

0x5c8b,	// (0x0002c38d) aid_size_cell_fmradio

0x0ea2,	// (0x000275a4) aid_height_parent_landcape

0x3ac4,	// (0x0002a1c6) wml_content_pane_cp

0x3acc,	// (0x0002a1ce) wml_tabs_pane

0x3ad5,	// (0x0002a1d7) popup_wml_miniature_window

0x3add,	// (0x0002a1df) scroll_pane_cp021

0x3af1,	// (0x0002a1f3) wml_content_pane_comp8

0x25b7,	// (0x00028cb9) bg_popup_sub_pane_cp05

0xbd56,	// (0x00032458) popup_wml_miniature_window_g1

0xbd5e,	// (0x00032460) wml_miniature_view_pane

0x72fa,	// (0x0002d9fc) aid_size_wml_view

0x7302,	// (0x0002da04) wml_miniature_view_pane_g1

0x730b,	// (0x0002da0d) wml_miniature_view_pane_g2

0x7314,	// (0x0002da16) wml_miniature_view_pane_g3

0x731c,	// (0x0002da1e) wml_miniature_view_pane_g4

0x7324,	// (0x0002da26) wml_miniature_view_pane_g5

0x732c,	// (0x0002da2e) wml_miniature_view_pane_g6

0x7334,	// (0x0002da36) wml_miniature_view_pane_g7

0x733c,	// (0x0002da3e) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00035d8d) wml_miniature_view_pane_g

0xbd66,	// (0x00032468) background_graphic_ParamLimits

0xbd66,	// (0x00032468) background_graphic

0xbd72,	// (0x00032474) wml_tabs_2_pane

0xbd7b,	// (0x0003247d) wml_tabs_3_pane_ParamLimits

0xbd7b,	// (0x0003247d) wml_tabs_3_pane

0xbd8d,	// (0x0003248f) wml_tabs_4_pane_ParamLimits

0xbd8d,	// (0x0003248f) wml_tabs_4_pane

0xbda3,	// (0x000324a5) wml_tabs_5_pane_ParamLimits

0xbda3,	// (0x000324a5) wml_tabs_5_pane

0xbdbd,	// (0x000324bf) wml_tabs_pane_g2_ParamLimits

0xbdbd,	// (0x000324bf) wml_tabs_pane_g2

0xbdd1,	// (0x000324d3) wml_tabs_pane_g3_ParamLimits

0xbdd1,	// (0x000324d3) wml_tabs_pane_g3

0x7344,	// (0x0002da46) wml_tabs_2_active_pane_ParamLimits

0x7344,	// (0x0002da46) wml_tabs_2_active_pane

0x7358,	// (0x0002da5a) wml_tabs_2_passive_pane_ParamLimits

0x7358,	// (0x0002da5a) wml_tabs_2_passive_pane

0x736c,	// (0x0002da6e) wml_tabs_3_active_pane_cp_ParamLimits

0x736c,	// (0x0002da6e) wml_tabs_3_active_pane_cp

0x7381,	// (0x0002da83) wml_tabs_3_passive_pane_ParamLimits

0x7381,	// (0x0002da83) wml_tabs_3_passive_pane

0x7394,	// (0x0002da96) wml_tabs_3_passive_pane_cp_ParamLimits

0x7394,	// (0x0002da96) wml_tabs_3_passive_pane_cp

0x73ab,	// (0x0002daad) tabs_4_active_pane

0x73b3,	// (0x0002dab5) tabs_4_passive_pane

0x73bd,	// (0x0002dabf) tabs_4_passive_pane_cp

0x73c5,	// (0x0002dac7) tabs_4_passive_pane_cp2

0x6c02,	// (0x0002d304) aid_height_text

0x53a4,	// (0x0002baa6) mup_volume_cont_pane_ParamLimits

0x53a4,	// (0x0002baa6) mup_volume_cont_pane

0x28a8,	// (0x00028faa) aid_size_cell_pinb

0x28b2,	// (0x00028fb4) aid_size_list_pinb

0x72af,	// (0x0002d9b1) mup2_volume_cont_pane_ParamLimits

0x72af,	// (0x0002d9b1) mup2_volume_cont_pane

0xbde5,	// (0x000324e7) mup2_volume_cont_pane_g1_ParamLimits

0xbde5,	// (0x000324e7) mup2_volume_cont_pane_g1

0x09c5,	// (0x000270c7) aid_size_cell_touch_ParamLimits

0x09c5,	// (0x000270c7) aid_size_cell_touch

0x0b8e,	// (0x00027290) touch_pane_ParamLimits

0x0b8e,	// (0x00027290) touch_pane

0xb661,	// (0x00031d63) main_rss2_pane

0xbe27,	// (0x00032529) listscroll_rss2_pane

0xbe30,	// (0x00032532) rss2_navigation_pane

0xbe38,	// (0x0003253a) list_rss2_pane

0x4ca7,	// (0x0002b3a9) scroll_pane_cp22

0xbe40,	// (0x00032542) rss2_navigation_pane_g1

0xbe49,	// (0x0003254b) rss2_navigation_pane_g2

0xbe51,	// (0x00032553) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00035d9e) rss2_navigation_pane_g

0xbe59,	// (0x0003255b) rss2_navigation_pane_t1

0x73cf,	// (0x0002dad1) rss2_list_single_pane_ParamLimits

0x73cf,	// (0x0002dad1) rss2_list_single_pane

0xbe67,	// (0x00032569) rss2_list_single_pane_t2

0xbe75,	// (0x00032577) rss2_list_single_pane_t3_ParamLimits

0xbe75,	// (0x00032577) rss2_list_single_pane_t3

0xbe92,	// (0x00032594) rss2_list_single_pane_t4

0x453e,	// (0x0002ac40) smil_status_pane_g1

0xb653,	// (0x00031d55) main_image2_pane_ParamLimits

0xb653,	// (0x00031d55) main_image2_pane

0x1329,	// (0x00027a2b) main_camera2_pane_g9_ParamLimits

0x1329,	// (0x00027a2b) main_camera2_pane_g9

0x1457,	// (0x00027b59) main_camera2_pane_t5_ParamLimits

0x1457,	// (0x00027b59) main_camera2_pane_t5

0xbd08,	// (0x0003240a) main_camera2_pane_t6_ParamLimits

0xbd08,	// (0x0003240a) main_camera2_pane_t6

0x73e4,	// (0x0002dae6) main_image2_pane_g1_ParamLimits

0x73e4,	// (0x0002dae6) main_image2_pane_g1

0x5c41,	// (0x0002c343) smil2_video_pane_ParamLimits

0x5c41,	// (0x0002c343) smil2_video_pane

0xb601,	// (0x00031d03) aid_zoom_text_primary_cp

0xb649,	// (0x00031d4b) popup_preview_fixed_window

0x39bc,	// (0x0002a0be) im_reading_pane_g1

0x11a0,	// (0x000278a2) cams2_bc_adjust_pane_cp_ParamLimits

0x11a0,	// (0x000278a2) cams2_bc_adjust_pane_cp

0x1486,	// (0x00027b88) cams2_bc_adjust_pane_ParamLimits

0x1486,	// (0x00027b88) cams2_bc_adjust_pane

0xbea0,	// (0x000325a2) cams2_bc_adjust_pane_g1

0xbea8,	// (0x000325aa) cams2_slider_pane

0xbeb1,	// (0x000325b3) cams2_slider_pane_g1

0xbeba,	// (0x000325bc) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00035da5) cams2_slider_pane_g

0x0bfe,	// (0x00027300) calc_display_pane_ParamLimits

0x0c26,	// (0x00027328) calc_paper_pane_ParamLimits

0x0c49,	// (0x0002734b) grid_calc_pane_ParamLimits

0xb78b,	// (0x00031e8d) popup_clock_digital_window_t1_ParamLimits

0x5ac8,	// (0x0002c1ca) main_image_pane_t1

0x0be0,	// (0x000272e2) aid_size_cell_calc_ParamLimits

0x0be0,	// (0x000272e2) aid_size_cell_calc

0x0ee8,	// (0x000275ea) popup_blid_sat_info2_window_ParamLimits

0x0ee8,	// (0x000275ea) popup_blid_sat_info2_window

0xbedc,	// (0x000325de) aid_size_cell_blid

0xbee4,	// (0x000325e6) bg_popup_window_pane_cp07

0xbf07,	// (0x00032609) grid_popup_blid_pane

0xbf11,	// (0x00032613) heading_pane_cp05_ParamLimits

0xbf11,	// (0x00032613) heading_pane_cp05

0xbfdb,	// (0x000326dd) cell_popup_blid_pane_ParamLimits

0xbfdb,	// (0x000326dd) cell_popup_blid_pane

0xbfff,	// (0x00032701) cell_popup_blid_pane_g1

0xc007,	// (0x00032709) cell_popup_blid_pane_t1

0x727f,	// (0x0002d981) mup2_indicator_pane_ParamLimits

0x727f,	// (0x0002d981) mup2_indicator_pane

0x50e8,	// (0x0002b7ea) mup2_visualizer_osc_pane

0xbd44,	// (0x00032446) mup2_visualizer_spec_pane_ParamLimits

0xbd44,	// (0x00032446) mup2_visualizer_spec_pane

0x73fa,	// (0x0002dafc) mup2_spec_half_pane

0x7403,	// (0x0002db05) mup2_spec_half_pane_cp

0x740b,	// (0x0002db0d) mup2_spec_bar_pane_ParamLimits

0x740b,	// (0x0002db0d) mup2_spec_bar_pane

0xbc93,	// (0x00032395) mup2_spec_bar_pane_g1

0xbc9d,	// (0x0003239f) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00035d18) mup2_spec_bar_pane_g

0x742b,	// (0x0002db2d) mup2_osc_middle_pane

0xbcaf,	// (0x000323b1) mup2_visualizer_osc_pane_g1

0x216c,	// (0x0002886e) popup_number_entry_window_t1_ParamLimits

0x217f,	// (0x00028881) popup_number_entry_window_t2_ParamLimits

0x2191,	// (0x00028893) popup_number_entry_window_t3_ParamLimits

0x21a3,	// (0x000288a5) popup_number_entry_window_t5_ParamLimits

0x21a3,	// (0x000288a5) popup_number_entry_window_t5

0xf0d8,	// (0x000357da) popup_number_entry_window_t_ParamLimits

0x21d7,	// (0x000288d9) text_title_cp2_ParamLimits

0xb7ca,	// (0x00031ecc) aid_hotspot_pointer_text2_pane

0xb7e4,	// (0x00031ee6) main_viewer_pane_g9_ParamLimits

0xb7e4,	// (0x00031ee6) main_viewer_pane_g9

0x4062,	// (0x0002a764) cale_month_pane_t1_ParamLimits

0x45ba,	// (0x0002acbc) bg_cale_pane_ParamLimits

0x45d2,	// (0x0002acd4) list_cale_pane_ParamLimits

0x2ed6,	// (0x000295d8) listscroll_cale_day_pane_t1

0x45e3,	// (0x0002ace5) scroll_pane_cp09_ParamLimits

0x5452,	// (0x0002bb54) main_mup_eq_pane_t1_ParamLimits

0x5452,	// (0x0002bb54) main_mup_eq_pane_t1

0x546c,	// (0x0002bb6e) main_mup_eq_pane_t2_ParamLimits

0x546c,	// (0x0002bb6e) main_mup_eq_pane_t2

0x5486,	// (0x0002bb88) main_mup_eq_pane_t3_ParamLimits

0x5486,	// (0x0002bb88) main_mup_eq_pane_t3

0x54a2,	// (0x0002bba4) main_mup_eq_pane_t4_ParamLimits

0x54a2,	// (0x0002bba4) main_mup_eq_pane_t4

0x54be,	// (0x0002bbc0) main_mup_eq_pane_t5_ParamLimits

0x54be,	// (0x0002bbc0) main_mup_eq_pane_t5

0x54da,	// (0x0002bbdc) main_mup_eq_pane_t6_ParamLimits

0x54da,	// (0x0002bbdc) main_mup_eq_pane_t6

0x54ee,	// (0x0002bbf0) main_mup_eq_pane_t7_ParamLimits

0x54ee,	// (0x0002bbf0) main_mup_eq_pane_t7

0x5502,	// (0x0002bc04) main_mup_eq_pane_t8_ParamLimits

0x5502,	// (0x0002bc04) main_mup_eq_pane_t8

0x5516,	// (0x0002bc18) main_mup_eq_pane_t9_ParamLimits

0x5516,	// (0x0002bc18) main_mup_eq_pane_t9

0x5530,	// (0x0002bc32) main_mup_eq_pane_t10_ParamLimits

0x5530,	// (0x0002bc32) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00035b67) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00035b67) main_mup_eq_pane_t

0x55df,	// (0x0002bce1) mup_equalizer_pane_cp5_ParamLimits

0x55f3,	// (0x0002bcf5) mup_equalizer_pane_cp6_ParamLimits

0x5607,	// (0x0002bd09) mup_equalizer_pane_cp7_ParamLimits

0xb661,	// (0x00031d63) main_gallery_pane

0xbcb8,	// (0x000323ba) smil2_volume_pane

0xbcc0,	// (0x000323c2) smil_status_volume_pane_g1_ParamLimits

0xbcd3,	// (0x000323d5) smil_status_volume_pane_g2_ParamLimits

0xbce6,	// (0x000323e8) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00035d1d) smil_status_volume_pane_g_ParamLimits

0xbee4,	// (0x000325e6) bg_popup_window_pane_cp07_ParamLimits

0xbef2,	// (0x000325f4) blid_firmament_pane

0x7434,	// (0x0002db36) aid_size_cell_gallery_ParamLimits

0x7434,	// (0x0002db36) aid_size_cell_gallery

0x744a,	// (0x0002db4c) grid_gallery_pane_ParamLimits

0x744a,	// (0x0002db4c) grid_gallery_pane

0x7463,	// (0x0002db65) cell_gallery_pane_ParamLimits

0x7463,	// (0x0002db65) cell_gallery_pane

0xc015,	// (0x00032717) bg_cell_gallery_focus_pane_ParamLimits

0xc015,	// (0x00032717) bg_cell_gallery_focus_pane

0xc027,	// (0x00032729) cell_gallery_pane_g1_ParamLimits

0xc027,	// (0x00032729) cell_gallery_pane_g1

0x74ac,	// (0x0002dbae) cell_gallery_pane_g2_ParamLimits

0x74ac,	// (0x0002dbae) cell_gallery_pane_g2

0x74b9,	// (0x0002dbbb) cell_gallery_pane_g3_ParamLimits

0x74b9,	// (0x0002dbbb) cell_gallery_pane_g3

0xc033,	// (0x00032735) cell_gallery_pane_g4_ParamLimits

0xc033,	// (0x00032735) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00035dcb) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00035dcb) cell_gallery_pane_g

0xc03f,	// (0x00032741) bg_cell_gallery_focus_pane_g1

0xc047,	// (0x00032749) bg_cell_gallery_focus_pane_g2

0xc04f,	// (0x00032751) bg_cell_gallery_focus_pane_g3

0xc057,	// (0x00032759) bg_cell_gallery_focus_pane_g4

0xc05f,	// (0x00032761) bg_cell_gallery_focus_pane_g5

0xc067,	// (0x00032769) bg_cell_gallery_focus_pane_g6

0xc06f,	// (0x00032771) bg_cell_gallery_focus_pane_g7

0xc077,	// (0x00032779) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00035dd4) bg_cell_gallery_focus_pane_g

0xc07f,	// (0x00032781) aid_firma_cardinal

0xc093,	// (0x00032795) blid_firmament_pane_t1

0xc0aa,	// (0x000327ac) blid_firmament_pane_t2

0xc0c1,	// (0x000327c3) blid_firmament_pane_t3

0xc0d8,	// (0x000327da) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00035de5) blid_firmament_pane_t

0xc0ef,	// (0x000327f1) blid_sat_info_pane

0xc0ff,	// (0x00032801) blid_sat_info_pane_g1

0xc0ff,	// (0x00032801) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00035dee) blid_sat_info_pane_g

0xc109,	// (0x0003280b) blid_sat_info_pane_t1

0xc117,	// (0x00032819) smil2_volume_content_pane

0xc120,	// (0x00032822) smil2_volume_pane_g1

0xc128,	// (0x0003282a) smil2_volume_content_pane_g1

0xc131,	// (0x00032833) smil2_volume_content_pane_g2

0xc13a,	// (0x0003283c) smil2_volume_content_pane_g3

0xc143,	// (0x00032845) smil2_volume_content_pane_g4

0xc14c,	// (0x0003284e) smil2_volume_content_pane_g5

0xc155,	// (0x00032857) smil2_volume_content_pane_g6

0xc15e,	// (0x00032860) smil2_volume_content_pane_g7

0xc167,	// (0x00032869) smil2_volume_content_pane_g8

0xc170,	// (0x00032872) smil2_volume_content_pane_g9

0xc179,	// (0x0003287b) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00035df3) smil2_volume_content_pane_g

0x2f42,	// (0x00029644) cale_week_day_heading_pane_t1_ParamLimits

0x2f6c,	// (0x0002966e) cale_week_day_heading_pane_t2_ParamLimits

0x2f96,	// (0x00029698) cale_week_day_heading_pane_t3_ParamLimits

0x2fc0,	// (0x000296c2) cale_week_day_heading_pane_t4_ParamLimits

0x2fea,	// (0x000296ec) cale_week_day_heading_pane_t5_ParamLimits

0x3014,	// (0x00029716) cale_week_day_heading_pane_t6_ParamLimits

0x3040,	// (0x00029742) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000358df) cale_week_day_heading_pane_t_ParamLimits

0x306a,	// (0x0002976c) bg_cale_side_pane_ParamLimits

0x0d20,	// (0x00027422) cale_week_time_pane_t1_ParamLimits

0x0d38,	// (0x0002743a) cale_week_time_pane_t2_ParamLimits

0x0d50,	// (0x00027452) cale_week_time_pane_t3_ParamLimits

0x0d68,	// (0x0002746a) cale_week_time_pane_t4_ParamLimits

0x0d80,	// (0x00027482) cale_week_time_pane_t5_ParamLimits

0x0d98,	// (0x0002749a) cale_week_time_pane_t6_ParamLimits

0x0db0,	// (0x000274b2) cale_week_time_pane_t7_ParamLimits

0x0dc8,	// (0x000274ca) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000358ee) cale_week_time_pane_t_ParamLimits

0x3078,	// (0x0002977a) cell_cale_week_pane_g2_ParamLimits

0x306a,	// (0x0002976c) bg_cale_side_pane_cp01_ParamLimits

0x43a1,	// (0x0002aaa3) cale_month_week_pane_t1_ParamLimits

0x43b8,	// (0x0002aaba) cale_month_week_pane_t2_ParamLimits

0x43cf,	// (0x0002aad1) cale_month_week_pane_t3_ParamLimits

0x43e6,	// (0x0002aae8) cale_month_week_pane_t4_ParamLimits

0x43fd,	// (0x0002aaff) cale_month_week_pane_t5_ParamLimits

0x4414,	// (0x0002ab16) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000359c7) cale_month_week_pane_t_ParamLimits

0xb707,	// (0x00031e09) cell_cale_month_pane_g1_ParamLimits

0xb661,	// (0x00031d63) main_cale_event_viewer_pane

0xf0ce,	// (0x000357d0) listscroll_cale_event_viewer_pane

0xc182,	// (0x00032884) list_cale_ev_pane

0xc18a,	// (0x0003288c) scroll_pane_cp023

0xc196,	// (0x00032898) field_cale_ev_pane_ParamLimits

0xc196,	// (0x00032898) field_cale_ev_pane

0xc1b4,	// (0x000328b6) field_cale_ev_content_pane_ParamLimits

0xc1b4,	// (0x000328b6) field_cale_ev_content_pane

0xc1c0,	// (0x000328c2) field_cale_ev_pane_g1_ParamLimits

0xc1c0,	// (0x000328c2) field_cale_ev_pane_g1

0xc1cc,	// (0x000328ce) field_cale_ev_pane_g2_ParamLimits

0xc1cc,	// (0x000328ce) field_cale_ev_pane_g2

0xc1e4,	// (0x000328e6) field_cale_ev_pane_g3_ParamLimits

0xc1e4,	// (0x000328e6) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00035e08) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00035e08) field_cale_ev_pane_g

0xc1fc,	// (0x000328fe) field_cale_ev_pane_t1_ParamLimits

0xc1fc,	// (0x000328fe) field_cale_ev_pane_t1

0xc213,	// (0x00032915) field_cale_ev_content_pane_t1_ParamLimits

0xc213,	// (0x00032915) field_cale_ev_content_pane_t1

0x56f5,	// (0x0002bdf7) bg_button_pane_cp01

0x2af5,	// (0x000291f7) listscroll_cale_week_pane_ParamLimits

0x2d33,	// (0x00029435) popup_toolbar_window_cp01

0x2ed6,	// (0x000295d8) listscroll_cale_week_pane_t1_ParamLimits

0x2af5,	// (0x000291f7) listscroll_cale_day_pane_ParamLimits

0x45b0,	// (0x0002acb2) popup_toolbar_window_cp02

0x2ed6,	// (0x000295d8) listscroll_cale_day_pane_t1_ParamLimits

0x2af5,	// (0x000291f7) main_cale_month_pane_ParamLimits

0x111c,	// (0x0002781e) popup_toolbar_window_cp03_ParamLimits

0x111c,	// (0x0002781e) popup_toolbar_window_cp03

0x5aa6,	// (0x0002c1a8) main_image_pane_g2_ParamLimits

0x5aa6,	// (0x0002c1a8) main_image_pane_g2

0x5ab7,	// (0x0002c1b9) main_image_pane_g3_ParamLimits

0x5ab7,	// (0x0002c1b9) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00035bf9) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00035bf9) main_image_pane_g

0x5ac8,	// (0x0002c1ca) main_image_pane_t1_ParamLimits

0x5adf,	// (0x0002c1e1) main_image_pane_t2_ParamLimits

0x5adf,	// (0x0002c1e1) main_image_pane_t2

0x5af1,	// (0x0002c1f3) main_image_pane_t3_ParamLimits

0x5af1,	// (0x0002c1f3) main_image_pane_t3

0x5b19,	// (0x0002c21b) main_image_pane_t4_ParamLimits

0x5b19,	// (0x0002c21b) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00035c00) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00035c00) main_image_pane_t

0x5b39,	// (0x0002c23b) popup_image_details_window_cp01

0x5b43,	// (0x0002c245) popup_toobar_trans_pane_cp01_ParamLimits

0x5b43,	// (0x0002c245) popup_toobar_trans_pane_cp01

0x0fc7,	// (0x000276c9) popup_image_details_window_ParamLimits

0x0fc7,	// (0x000276c9) popup_image_details_window

0xbc19,	// (0x0003231b) popup_image_focus_window

0x115a,	// (0x0002785c) camera2_autofocus_pane_ParamLimits

0x115a,	// (0x0002785c) camera2_autofocus_pane

0xf0ce,	// (0x000357d0) bg_popup_sub_pane_cp06

0xc231,	// (0x00032933) popup_image_focus_window_g1

0xc239,	// (0x0003293b) popup_image_focus_window_g2

0xc241,	// (0x00032943) popup_image_focus_window_g3

0xc249,	// (0x0003294b) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00035e0f) popup_image_focus_window_g

0xc251,	// (0x00032953) popup_image_focus_window_t1

0xc25f,	// (0x00032961) popup_image_focus_window_t2

0xc26f,	// (0x00032971) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00035e18) popup_image_focus_window_t

0xc27d,	// (0x0003297f) camera2_autofocus_pane_g1

0x6ee7,	// (0x0002d5e9) bg_tb_trans_pane_cp01

0xc28b,	// (0x0003298d) popup_image_details_window_g1

0xc29e,	// (0x000329a0) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00035e2a) popup_image_details_window_g

0xc2c7,	// (0x000329c9) popup_image_details_window_t1

0xc2d9,	// (0x000329db) popup_image_details_window_t2

0xc2f2,	// (0x000329f4) popup_image_details_window_t3

0xc306,	// (0x00032a08) popup_image_details_window_t4

0xc321,	// (0x00032a23) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00035e31) popup_image_details_window_t

0x2ae1,	// (0x000291e3) bg_calc_paper_pane_ParamLimits

0xb661,	// (0x00031d63) grid_highlight_pane_cp013

0xb673,	// (0x00031d75) list_calc_pane_ParamLimits

0xb685,	// (0x00031d87) scroll_pane_cp024

0x2af5,	// (0x000291f7) bg_calc_display_pane_ParamLimits

0x0c77,	// (0x00027379) calc_display_pane_t1_ParamLimits

0x0c89,	// (0x0002738b) calc_display_pane_t2_ParamLimits

0xb68d,	// (0x00031d8f) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00035861) calc_display_pane_t_ParamLimits

0x0cea,	// (0x000273ec) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0003587e) cell_calc_pane_g

0x0cf3,	// (0x000273f5) cell_calc_pane_t1

0x2bb0,	// (0x000292b2) grid_highlight_pane_cp02_ParamLimits

0x2bc6,	// (0x000292c8) toolbar_button_pane_cp01_ParamLimits

0x2bc6,	// (0x000292c8) toolbar_button_pane_cp01

0x5b85,	// (0x0002c287) temp_image_control_pane_ParamLimits

0x5b85,	// (0x0002c287) temp_image_control_pane

0xb653,	// (0x00031d55) main_mp3_pane

0xc33b,	// (0x00032a3d) temp_image_control_pane_g1_ParamLimits

0xc33b,	// (0x00032a3d) temp_image_control_pane_g1

0xc349,	// (0x00032a4b) temp_image_control_pane_g2_ParamLimits

0xc349,	// (0x00032a4b) temp_image_control_pane_g2

0xc35b,	// (0x00032a5d) temp_image_control_pane_g3_ParamLimits

0xc35b,	// (0x00032a5d) temp_image_control_pane_g3

0x74f6,	// (0x0002dbf8) temp_image_control_pane_g4_ParamLimits

0x74f6,	// (0x0002dbf8) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00035e3c) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00035e3c) temp_image_control_pane_g

0xc33b,	// (0x00032a3d) main_mp3_pane_g1

0x7509,	// (0x0002dc0b) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00035e45) main_mp3_pane_g

0xc39e,	// (0x00032aa0) main_mp3_pane_t1

0x31ed,	// (0x000298ef) main_camera_pane_g8_ParamLimits

0x31ed,	// (0x000298ef) main_camera_pane_g8

0x339a,	// (0x00029a9c) main_video_pane_g7_ParamLimits

0x339a,	// (0x00029a9c) main_video_pane_g7

0xbd26,	// (0x00032428) main_camera2_pane_t7_ParamLimits

0xbd26,	// (0x00032428) main_camera2_pane_t7

0x3a84,	// (0x0002a186) scroll_pane_cp025_ParamLimits

0x3a84,	// (0x0002a186) scroll_pane_cp025

0x3a98,	// (0x0002a19a) scroll_pane_cp026_ParamLimits

0x3a98,	// (0x0002a19a) scroll_pane_cp026

0x3aa7,	// (0x0002a1a9) wml_content_pane_ParamLimits

0xb661,	// (0x00031d63) main_touch_calib_pane

0x75d3,	// (0x0002dcd5) main_touch_calib_pane_g1

0x75df,	// (0x0002dce1) main_touch_calib_pane_g2

0x75eb,	// (0x0002dced) main_touch_calib_pane_g3

0x75f7,	// (0x0002dcf9) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00035e63) main_touch_calib_pane_g

0x7603,	// (0x0002dd05) main_touch_calib_pane_t1

0x761d,	// (0x0002dd1f) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00035e6c) main_touch_calib_pane_t

0x4f4f,	// (0x0002b651) mup_progress_pane_cp02

0x4f84,	// (0x0002b686) navi_pane_g1

0x503d,	// (0x0002b73f) navi_pane_mp_t3

0xb653,	// (0x00031d55) main_mp3_pane_ParamLimits

0x6ef5,	// (0x0002d5f7) navi_pane_ParamLimits

0xc33b,	// (0x00032a3d) main_mp3_pane_g1_ParamLimits

0x7509,	// (0x0002dc0b) main_mp3_pane_g2_ParamLimits

0x7517,	// (0x0002dc19) main_mp3_pane_g3_ParamLimits

0x7517,	// (0x0002dc19) main_mp3_pane_g3

0x7525,	// (0x0002dc27) main_mp3_pane_g4_ParamLimits

0x7525,	// (0x0002dc27) main_mp3_pane_g4

0xc36b,	// (0x00032a6d) main_mp3_pane_g5_ParamLimits

0xc36b,	// (0x00032a6d) main_mp3_pane_g5

0xc379,	// (0x00032a7b) main_mp3_pane_g6_ParamLimits

0xc379,	// (0x00032a7b) main_mp3_pane_g6

0xc386,	// (0x00032a88) main_mp3_pane_g7_ParamLimits

0xc386,	// (0x00032a88) main_mp3_pane_g7

0xc392,	// (0x00032a94) main_mp3_pane_g8_ParamLimits

0xc392,	// (0x00032a94) main_mp3_pane_g8

0xf743,	// (0x00035e45) main_mp3_pane_g_ParamLimits

0x7531,	// (0x0002dc33) main_mp3_pane_t2

0x753f,	// (0x0002dc41) main_mp3_pane_t3

0xc3ac,	// (0x00032aae) main_mp3_pane_t4

0xc3ba,	// (0x00032abc) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00035e56) main_mp3_pane_t

0xc3c8,	// (0x00032aca) mup_progress_pane_cp01

0xb601,	// (0x00031d03) aid_zoom_text_secondary2

0xc182,	// (0x00032884) list_cale_ev2_pane

0xc18a,	// (0x0003288c) scroll_pane_cp023_ParamLimits

0x7673,	// (0x0002dd75) field_cale_ev2_pane_ParamLimits

0x7673,	// (0x0002dd75) field_cale_ev2_pane

0x7693,	// (0x0002dd95) field_cale_ev2_pane_g1_ParamLimits

0x7693,	// (0x0002dd95) field_cale_ev2_pane_g1

0x769f,	// (0x0002dda1) field_cale_ev2_pane_g2_ParamLimits

0x769f,	// (0x0002dda1) field_cale_ev2_pane_g2

0x76b7,	// (0x0002ddb9) field_cale_ev2_pane_g3_ParamLimits

0x76b7,	// (0x0002ddb9) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x00035e77) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x00035e77) field_cale_ev2_pane_g

0x76cf,	// (0x0002ddd1) field_cale_ev2_pane_t1_ParamLimits

0x76cf,	// (0x0002ddd1) field_cale_ev2_pane_t1

0x76e6,	// (0x0002dde8) field_cale_ev2_pane_t2_ParamLimits

0x76e6,	// (0x0002dde8) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00035e80) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00035e80) field_cale_ev2_pane_t

0x5875,	// (0x0002bf77) main_postcard_pane_g5_ParamLimits

0x5875,	// (0x0002bf77) main_postcard_pane_g5

0x588b,	// (0x0002bf8d) main_postcard_pane_g6_ParamLimits

0x588b,	// (0x0002bf8d) main_postcard_pane_g6

0x3138,	// (0x0002983a) camera2_autofocus_pane_cp_ParamLimits

0x3138,	// (0x0002983a) camera2_autofocus_pane_cp

0xb653,	// (0x00031d55) main_mup3_pane

0x771b,	// (0x0002de1d) main_mup3_pane_g1_ParamLimits

0x771b,	// (0x0002de1d) main_mup3_pane_g1

0x773d,	// (0x0002de3f) main_mup3_pane_g2_ParamLimits

0x773d,	// (0x0002de3f) main_mup3_pane_g2

0x77bb,	// (0x0002debd) main_mup3_pane_g3_ParamLimits

0x77bb,	// (0x0002debd) main_mup3_pane_g3

0x7801,	// (0x0002df03) main_mup3_pane_g4_ParamLimits

0x7801,	// (0x0002df03) main_mup3_pane_g4

0x7847,	// (0x0002df49) main_mup3_pane_g5_ParamLimits

0x7847,	// (0x0002df49) main_mup3_pane_g5

0x788d,	// (0x0002df8f) main_mup3_pane_g6_ParamLimits

0x788d,	// (0x0002df8f) main_mup3_pane_g6

0xc3dc,	// (0x00032ade) main_mup3_pane_g7_ParamLimits

0xc3dc,	// (0x00032ade) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00035e90) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00035e90) main_mup3_pane_g

0x790b,	// (0x0002e00d) main_mup3_pane_t1_ParamLimits

0x790b,	// (0x0002e00d) main_mup3_pane_t1

0x797f,	// (0x0002e081) main_mup3_pane_t2_ParamLimits

0x797f,	// (0x0002e081) main_mup3_pane_t2

0x7a53,	// (0x0002e155) main_mup3_pane_t4_ParamLimits

0x7a53,	// (0x0002e155) main_mup3_pane_t4

0x7aa9,	// (0x0002e1ab) main_mup3_pane_t5_ParamLimits

0x7aa9,	// (0x0002e1ab) main_mup3_pane_t5

0x7b65,	// (0x0002e267) main_mup3_pane_t6_ParamLimits

0x7b65,	// (0x0002e267) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00035ea1) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00035ea1) main_mup3_pane_t

0x7c1d,	// (0x0002e31f) mup3_progress_pane_ParamLimits

0x7c1d,	// (0x0002e31f) mup3_progress_pane

0x7cb3,	// (0x0002e3b5) popup_mup3_control_window_ParamLimits

0x7cb3,	// (0x0002e3b5) popup_mup3_control_window

0xc3ea,	// (0x00032aec) popup_mup3_text_window

0x7ce5,	// (0x0002e3e7) mup3_progress_pane_t1

0x7d04,	// (0x0002e406) mup3_progress_pane_t2

0xc3f2,	// (0x00032af4) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00035eae) mup3_progress_pane_t

0xc40f,	// (0x00032b11) mup_progress_pane_cp03

0xf0ce,	// (0x000357d0) bg_tb_trans_pane_cp04

0x7d23,	// (0x0002e425) mup3_volume_pane

0x7d2b,	// (0x0002e42d) popup_mup3_control_window_g1

0x7d34,	// (0x0002e436) mup3_volume_pane_g1

0x7d3d,	// (0x0002e43f) mup3_volume_pane_g2

0x7d46,	// (0x0002e448) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00035eb5) mup3_volume_pane_g

0xf0ce,	// (0x000357d0) bg_tb_trans_pane_cp03

0xc41f,	// (0x00032b21) popup_mup3_text_window_g1

0xc427,	// (0x00032b29) popup_mup3_text_window_t1

0x2b99,	// (0x0002929b) list_calc_item_pane_g1_ParamLimits

0xbe0e,	// (0x00032510) mup_volume_pane_cp_g1

0x7637,	// (0x0002dd39) main_touch_calib_pane_t3

0x764b,	// (0x0002dd4d) main_touch_calib_pane_t4

0x765f,	// (0x0002dd61) main_touch_calib_pane_t5

0xb5ed,	// (0x00031cef) aid_cell_size_toolbar2

0xb5f5,	// (0x00031cf7) aid_popup3_width_pane

0xb601,	// (0x00031d03) aid_zoom_text_msg_primary

0x0e38,	// (0x0002753a) vorec_t7

0x2b01,	// (0x00029203) bg_calc_paper_pane_g1_ParamLimits

0x2b0d,	// (0x0002920f) bg_calc_paper_pane_g2_ParamLimits

0x2b19,	// (0x0002921b) bg_calc_paper_pane_g3_ParamLimits

0x2b25,	// (0x00029227) bg_calc_paper_pane_g4_ParamLimits

0x2b31,	// (0x00029233) bg_calc_paper_pane_g5_ParamLimits

0x2b3d,	// (0x0002923f) bg_calc_paper_pane_g6_ParamLimits

0x2b4c,	// (0x0002924e) bg_calc_paper_pane_g7_ParamLimits

0x2b5b,	// (0x0002925d) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00035868) bg_calc_paper_pane_g_ParamLimits

0x2b6e,	// (0x00029270) calc_bg_paper_pane_g9_ParamLimits

0x3292,	// (0x00029994) image_qvga_pane_ParamLimits

0x3292,	// (0x00029994) image_qvga_pane

0x2812,	// (0x00028f14) bg_popup_sub_pane_cp04_ParamLimits

0x5a04,	// (0x0002c106) popup_mup_playback_window_g1_ParamLimits

0x5a10,	// (0x0002c112) popup_mup_playback_window_t1_ParamLimits

0x5a25,	// (0x0002c127) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00035bf4) popup_mup_playback_window_t_ParamLimits

0x7199,	// (0x0002d89b) main_mup2_pane_g3_ParamLimits

0x7199,	// (0x0002d89b) main_mup2_pane_g3

0x3717,	// (0x00029e19) popup_toolbar_window_cp04

0x6207,	// (0x0002c909) popup_call2_audio_second_window_g3_ParamLimits

0x6207,	// (0x0002c909) popup_call2_audio_second_window_g3

0x6611,	// (0x0002cd13) popup_call2_audio_first_window_g4_ParamLimits

0x6611,	// (0x0002cd13) popup_call2_audio_first_window_g4

0xb898,	// (0x00031f9a) popup_call2_audio_in_window_g4_ParamLimits

0xb898,	// (0x00031f9a) popup_call2_audio_in_window_g4

0x5a3a,	// (0x0002c13c) aid_area_sk_bg_cut_ParamLimits

0x5a3a,	// (0x0002c13c) aid_area_sk_bg_cut

0x5a58,	// (0x0002c15a) aid_area_sk_bg_cut_2_ParamLimits

0x5a58,	// (0x0002c15a) aid_area_sk_bg_cut_2

0x749c,	// (0x0002db9e) aid_placing_details_win

0x74a4,	// (0x0002dba6) aid_placing_details_win_2

0xc27d,	// (0x0003297f) camera2_autofocus_pane_g1_ParamLimits

0x0b39,	// (0x0002723b) popup_fixed_preview_cale_window_ParamLimits

0x0b39,	// (0x0002723b) popup_fixed_preview_cale_window

0x50f9,	// (0x0002b7fb) navi_slider_pane_g3

0x5102,	// (0x0002b804) navi_slider_pane_g4

0x510b,	// (0x0002b80d) navi_slider_pane_g5

0x50f9,	// (0x0002b7fb) navi_slider_pane_g6

0xb7b1,	// (0x00031eb3) navi_slider_pane_g7

0x5624,	// (0x0002bd26) mup_scale_pane_g3

0x562d,	// (0x0002bd2f) mup_scale_pane_g4

0x5636,	// (0x0002bd38) mup_scale_pane_g5

0x563f,	// (0x0002bd41) mup_scale_pane_g6

0x5648,	// (0x0002bd4a) mup_scale_pane_g7

0x50f9,	// (0x0002b7fb) cams2_slider_pane_g3

0xbec3,	// (0x000325c5) cams2_slider_pane_g4

0xbecb,	// (0x000325cd) cams2_slider_pane_g5

0x50f9,	// (0x0002b7fb) cams2_slider_pane_g6

0xbed3,	// (0x000325d5) cams2_slider_pane_g7

0xc0ff,	// (0x00032801) camera2_autofocus_pane_cp_g1

0xc435,	// (0x00032b37) bg_popup_preview_window_pane_cp02_ParamLimits

0xc435,	// (0x00032b37) bg_popup_preview_window_pane_cp02

0xc441,	// (0x00032b43) list_fp_cale_pane_ParamLimits

0xc441,	// (0x00032b43) list_fp_cale_pane

0xc44d,	// (0x00032b4f) popup_fixed_preview_cale_window_t1_ParamLimits

0xc44d,	// (0x00032b4f) popup_fixed_preview_cale_window_t1

0x7d4f,	// (0x0002e451) popup_fixed_preview_cale_window_t2_ParamLimits

0x7d4f,	// (0x0002e451) popup_fixed_preview_cale_window_t2

0x7d64,	// (0x0002e466) popup_fixed_preview_cale_window_t3_ParamLimits

0x7d64,	// (0x0002e466) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00035ebc) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00035ebc) popup_fixed_preview_cale_window_t

0x7d79,	// (0x0002e47b) list_single_fp_cale_pane_ParamLimits

0x7d79,	// (0x0002e47b) list_single_fp_cale_pane

0xc46b,	// (0x00032b6d) list_single_fp_cale_pane_g1_ParamLimits

0xc46b,	// (0x00032b6d) list_single_fp_cale_pane_g1

0xc477,	// (0x00032b79) list_single_fp_cale_pane_g2_ParamLimits

0xc477,	// (0x00032b79) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00035ec3) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00035ec3) list_single_fp_cale_pane_g

0xc490,	// (0x00032b92) list_single_fp_cale_pane_t1_ParamLimits

0xc490,	// (0x00032b92) list_single_fp_cale_pane_t1

0xc4a2,	// (0x00032ba4) list_single_fp_cale_pane_t2_ParamLimits

0xc4a2,	// (0x00032ba4) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00035eca) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00035eca) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb661,	// (0x00031d63) main_dialer_pane

0x7d8e,	// (0x0002e490) aid_cell_size_keypad

0x7d98,	// (0x0002e49a) dialer_ne_pane

0x7da0,	// (0x0002e4a2) grid_dialer_command_1_pane

0x7da8,	// (0x0002e4aa) grid_dialer_command_2_pane

0x7db0,	// (0x0002e4b2) grid_dialer_keypad_pane

0x7dc2,	// (0x0002e4c4) bg_popup_call_pane_cp06_ParamLimits

0x7dc2,	// (0x0002e4c4) bg_popup_call_pane_cp06

0x7dce,	// (0x0002e4d0) dialer_ne_clear_pane_ParamLimits

0x7dce,	// (0x0002e4d0) dialer_ne_clear_pane

0xc4d5,	// (0x00032bd7) dialer_ne_pane_g1

0xc4dd,	// (0x00032bdf) dialer_ne_pane_t1_ParamLimits

0xc4dd,	// (0x00032bdf) dialer_ne_pane_t1

0x7dda,	// (0x0002e4dc) dialer_ne_pane_t2_ParamLimits

0x7dda,	// (0x0002e4dc) dialer_ne_pane_t2

0x7e04,	// (0x0002e506) dialer_ne_pane_t3_ParamLimits

0x7e04,	// (0x0002e506) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00035ecf) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00035ecf) dialer_ne_pane_t

0x7e34,	// (0x0002e536) dialer_ne_pane_t3_copy1_ParamLimits

0x7e34,	// (0x0002e536) dialer_ne_pane_t3_copy1

0x7e63,	// (0x0002e565) cell_dialer_keypad_pane_ParamLimits

0x7e63,	// (0x0002e565) cell_dialer_keypad_pane

0x7e7a,	// (0x0002e57c) cell_dialer_command_1_pane_ParamLimits

0x7e7a,	// (0x0002e57c) cell_dialer_command_1_pane

0x7e90,	// (0x0002e592) cell_dialer_command_2_pane_ParamLimits

0x7e90,	// (0x0002e592) cell_dialer_command_2_pane

0xc4ef,	// (0x00032bf1) bg_button_pane_cp02_ParamLimits

0xc4ef,	// (0x00032bf1) bg_button_pane_cp02

0x7e9f,	// (0x0002e5a1) cell_dialer_keypad_pane_g1_ParamLimits

0x7e9f,	// (0x0002e5a1) cell_dialer_keypad_pane_g1

0xc4ef,	// (0x00032bf1) bg_button_pane_cp03_ParamLimits

0xc4ef,	// (0x00032bf1) bg_button_pane_cp03

0x7eb3,	// (0x0002e5b5) cell_dialer_command_1_pane_g1_ParamLimits

0x7eb3,	// (0x0002e5b5) cell_dialer_command_1_pane_g1

0xc4fb,	// (0x00032bfd) bg_button_pane_cp04

0x7ec7,	// (0x0002e5c9) cell_dialer_command_2_pane_g1

0x50e8,	// (0x0002b7ea) bg_button_pane_cp06

0xc503,	// (0x00032c05) dialer_ne_clear_pane_g1

0x4f90,	// (0x0002b692) navi_pane_g2

0x4fbe,	// (0x0002b6c0) navi_pane_g3

0x0002,

0xf3f5,	// (0x00035af7) navi_pane_g

0x504b,	// (0x0002b74d) navi_pane_mv_g2

0x5072,	// (0x0002b774) navi_pane_mv_g5

0x507a,	// (0x0002b77c) navi_pane_mv_t1

0x2af5,	// (0x000291f7) main_clock2_pane

0x7eff,	// (0x0002e601) main_clock2_list_pane_ParamLimits

0x7eff,	// (0x0002e601) main_clock2_list_pane

0x7f37,	// (0x0002e639) main_clock2_pane_t1_ParamLimits

0x7f37,	// (0x0002e639) main_clock2_pane_t1

0x7f73,	// (0x0002e675) main_clock2_pane_t2_ParamLimits

0x7f73,	// (0x0002e675) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00035ed6) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00035ed6) main_clock2_pane_t

0x8010,	// (0x0002e712) popup_clock_analogue_window_cp03_ParamLimits

0x8010,	// (0x0002e712) popup_clock_analogue_window_cp03

0x8035,	// (0x0002e737) popup_clock_digital_window_cp02_ParamLimits

0x8035,	// (0x0002e737) popup_clock_digital_window_cp02

0x80a6,	// (0x0002e7a8) main_clock2_list_single_pane_ParamLimits

0x80a6,	// (0x0002e7a8) main_clock2_list_single_pane

0x50e8,	// (0x0002b7ea) list_highlight_pane_cp05

0xc50b,	// (0x00032c0d) main_clock2_list_single_pane_t1

0x3717,	// (0x00029e19) popup_toolbar_window_cp04_ParamLimits

0x74c6,	// (0x0002dbc8) camera2_autofocus_pane_g2_ParamLimits

0x74c6,	// (0x0002dbc8) camera2_autofocus_pane_g2

0x74d2,	// (0x0002dbd4) camera2_autofocus_pane_g3_ParamLimits

0x74d2,	// (0x0002dbd4) camera2_autofocus_pane_g3

0x74de,	// (0x0002dbe0) camera2_autofocus_pane_g4_ParamLimits

0x74de,	// (0x0002dbe0) camera2_autofocus_pane_g4

0x74ea,	// (0x0002dbec) camera2_autofocus_pane_g5_ParamLimits

0x74ea,	// (0x0002dbec) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00035e1f) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00035e1f) camera2_autofocus_pane_g

0x76fb,	// (0x0002ddfd) camera2_autofocus_pane_cp_g2

0x7703,	// (0x0002de05) camera2_autofocus_pane_cp_g3

0x770b,	// (0x0002de0d) camera2_autofocus_pane_cp_g4

0x7713,	// (0x0002de15) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00035e85) camera2_autofocus_pane_cp_g

0x7dba,	// (0x0002e4bc) popup_dialer_spcha_window

0xf0ce,	// (0x000357d0) bg_popup_sub_pane_cp07

0xc519,	// (0x00032c1b) list_spcha_pane

0xc521,	// (0x00032c23) list_single_spcha_pane_ParamLimits

0xc521,	// (0x00032c23) list_single_spcha_pane

0xf0ce,	// (0x000357d0) list_highlight_pane_cp06

0xc532,	// (0x00032c34) list_single_spcha_pane_t1

0x6a3a,	// (0x0002d13c) popup_call2_audio_out_window_g4_ParamLimits

0x6a3a,	// (0x0002d13c) popup_call2_audio_out_window_g4

0xb661,	// (0x00031d63) main_imed2_pane

0xbc21,	// (0x00032323) popup_imed_adjust2_window

0x0fdf,	// (0x000276e1) popup_imed_trans_window_ParamLimits

0x0fdf,	// (0x000276e1) popup_imed_trans_window

0xbf3d,	// (0x0003263f) popup_blid_sat_info2_window_t1

0xbf4b,	// (0x0003264d) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00035db4) popup_blid_sat_info2_window_t

0x80d8,	// (0x0002e7da) aid_size_cell_colour_35

0x80f8,	// (0x0002e7fa) aid_size_cell_colour_112

0x8118,	// (0x0002e81a) aid_size_cell_effect

0xbbf9,	// (0x000322fb) bg_tb_trans_pane_cp02

0x4717,	// (0x0002ae19) heading_imed_pane

0x8138,	// (0x0002e83a) listscroll_imed_pane

0xc540,	// (0x00032c42) heading_imed_pane_g1

0xc548,	// (0x00032c4a) heading_imed_pane_t1

0xc556,	// (0x00032c58) grid_imed_colour_35_pane_ParamLimits

0xc556,	// (0x00032c58) grid_imed_colour_35_pane

0x8144,	// (0x0002e846) grid_imed_effect_pane

0xc56d,	// (0x00032c6f) list_imed_aspect_pane

0x815a,	// (0x0002e85c) scroll_pane_cp027_ParamLimits

0x815a,	// (0x0002e85c) scroll_pane_cp027

0x816b,	// (0x0002e86d) cell_imed_effect_pane_ParamLimits

0x816b,	// (0x0002e86d) cell_imed_effect_pane

0xc575,	// (0x00032c77) cell_imed_colour_pane_ParamLimits

0xc575,	// (0x00032c77) cell_imed_colour_pane

0xc5b7,	// (0x00032cb9) cell_imed_colour_pane_g1_ParamLimits

0xc5b7,	// (0x00032cb9) cell_imed_colour_pane_g1

0xc5c8,	// (0x00032cca) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5c8,	// (0x00032cca) hgihlgiht_grid_pane_cp016

0x8192,	// (0x0002e894) cell_imed_effect_pane_g1

0x819a,	// (0x0002e89c) grid_highlight_pane_cp017

0xc5d9,	// (0x00032cdb) list_imed_single_pane_ParamLimits

0xc5d9,	// (0x00032cdb) list_imed_single_pane

0xf0ce,	// (0x000357d0) list_highlight_pane_cp07

0xc5ee,	// (0x00032cf0) list_imed_aspect_pane_comp1_t1

0xbbf9,	// (0x000322fb) bg_tb_trans_pane_cp05

0xc610,	// (0x00032d12) popup_imed_adjust2_window_g1

0xc637,	// (0x00032d39) popup_imed_adjust2_window_t1

0xc64f,	// (0x00032d51) slider_imed_adjust_pane

0xc663,	// (0x00032d65) slider_imed_adjust_pane_g1

0xc673,	// (0x00032d75) slider_imed_adjust_pane_g2

0xc683,	// (0x00032d85) slider_imed_adjust_pane_g3

0xc694,	// (0x00032d96) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00035ef3) slider_imed_adjust_pane_g

0x81a3,	// (0x0002e8a5) aid_size_cell_clipart2

0x81af,	// (0x0002e8b1) grid_imed_clipart_pane

0xc6a5,	// (0x00032da7) scroll_pane_cp031

0x81b9,	// (0x0002e8bb) cell_imed_clipart_pane_ParamLimits

0x81b9,	// (0x0002e8bb) cell_imed_clipart_pane

0x81db,	// (0x0002e8dd) cell_imed_clipart_pane_g1

0xf0ce,	// (0x000357d0) grid_highlight_pane_cp014

0x7f14,	// (0x0002e616) main_clock2_pane_g1_ParamLimits

0x7f14,	// (0x0002e616) main_clock2_pane_g1

0x8051,	// (0x0002e753) aid_call2_pane_cp10

0x8063,	// (0x0002e765) aid_call_pane_cp10

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g1

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g2

0x8075,	// (0x0002e777) popup_clock_analogue_window_cp10_g3

0x8075,	// (0x0002e777) popup_clock_analogue_window_cp10_g4

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00035ee1) popup_clock_analogue_window_cp10_g

0x8087,	// (0x0002e789) popup_clock_analogue_window_cp10_t1

0x1631,	// (0x00027d33) clock_digital_number_pane_cp10_ParamLimits

0x1631,	// (0x00027d33) clock_digital_number_pane_cp10

0x1649,	// (0x00027d4b) clock_digital_number_pane_cp11_ParamLimits

0x1649,	// (0x00027d4b) clock_digital_number_pane_cp11

0x1661,	// (0x00027d63) clock_digital_number_pane_cp12_ParamLimits

0x1661,	// (0x00027d63) clock_digital_number_pane_cp12

0x1679,	// (0x00027d7b) clock_digital_number_pane_cp13_ParamLimits

0x1679,	// (0x00027d7b) clock_digital_number_pane_cp13

0x1691,	// (0x00027d93) clock_digital_separator_pane_cp10_ParamLimits

0x1691,	// (0x00027d93) clock_digital_separator_pane_cp10

0x80b8,	// (0x0002e7ba) popup_clock_digital_window_cp02_t1_ParamLimits

0x80b8,	// (0x0002e7ba) popup_clock_digital_window_cp02_t1

0x280a,	// (0x00028f0c) clock_digital_number_pane_cp10_g1

0x280a,	// (0x00028f0c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00035efc) clock_digital_number_pane_cp10_g

0x280a,	// (0x00028f0c) clock_digital_separator_pane_cp10_g1

0x280a,	// (0x00028f0c) clock_digital_separator_pane_g2_cp10

0x50b8,	// (0x0002b7ba) navi_pane_vded_g4

0x50c1,	// (0x0002b7c3) navi_pane_vded_g5

0x50ca,	// (0x0002b7cc) navi_pane_vded_t1

0xb661,	// (0x00031d63) main_vded_pane

0x81e4,	// (0x0002e8e6) main_vded_pane_g1

0x81ee,	// (0x0002e8f0) main_vded_pane_g2

0x81f8,	// (0x0002e8fa) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00035f01) main_vded_pane_g

0x8202,	// (0x0002e904) main_vded_pane_t1

0x8210,	// (0x0002e912) main_vded_pane_t2

0x0001,

0xf806,	// (0x00035f08) main_vded_pane_t

0x821e,	// (0x0002e920) vded_slider_pane

0x8226,	// (0x0002e928) vded_video_pane

0xc6ad,	// (0x00032daf) vded_video_pane_g1

0x822e,	// (0x0002e930) vded_video_pane_g2

0xc0ff,	// (0x00032801) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00035f0d) vded_video_pane_g

0xc6b7,	// (0x00032db9) vded_slider_pane_g1

0xbe0e,	// (0x00032510) vded_slider_pane_g2

0xc6c0,	// (0x00032dc2) vded_slider_pane_g3

0xc6c9,	// (0x00032dcb) vded_slider_pane_g4

0xc6d2,	// (0x00032dd4) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00035f14) vded_slider_pane_g

0x7c9b,	// (0x0002e39d) mup3_rocker_pane_ParamLimits

0x7c9b,	// (0x0002e39d) mup3_rocker_pane

0x8237,	// (0x0002e939) mup3_control_keys_pane_g1

0x823f,	// (0x0002e941) mup3_control_keys_pane_g2

0x8247,	// (0x0002e949) mup3_control_keys_pane_g3

0x824f,	// (0x0002e951) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00035f1f) mup3_control_keys_pane_g

0x0b70,	// (0x00027272) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0b70,	// (0x00027272) popup_toolbar2_fixed_window_cp01

0x7ccf,	// (0x0002e3d1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7ccf,	// (0x0002e3d1) popup_toolbar2_fixed_window_cp02

0x6379,	// (0x0002ca7b) popup_call2_audio_second_window_t4_ParamLimits

0x6379,	// (0x0002ca7b) popup_call2_audio_second_window_t4

0x68a7,	// (0x0002cfa9) popup_call2_audio_first_window_t6_ParamLimits

0x68a7,	// (0x0002cfa9) popup_call2_audio_first_window_t6

0x6b3d,	// (0x0002d23f) popup_call2_audio_out_window_t6_ParamLimits

0x6b3d,	// (0x0002d23f) popup_call2_audio_out_window_t6

0xb661,	// (0x00031d63) main_vitu_pane

0x825f,	// (0x0002e961) aid_size_cell_itu_ParamLimits

0x825f,	// (0x0002e961) aid_size_cell_itu

0x6ee7,	// (0x0002d5e9) bg_popup_window_pane_cp08_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_popup_window_pane_cp08

0x8275,	// (0x0002e977) field_vitu_entry_pane_ParamLimits

0x8275,	// (0x0002e977) field_vitu_entry_pane

0x828c,	// (0x0002e98e) grid_vitu_function_pane_ParamLimits

0x828c,	// (0x0002e98e) grid_vitu_function_pane

0x82a7,	// (0x0002e9a9) grid_vitu_itu_pane_ParamLimits

0x82a7,	// (0x0002e9a9) grid_vitu_itu_pane

0x82c5,	// (0x0002e9c7) cell_vitu_itu_pane_ParamLimits

0x82c5,	// (0x0002e9c7) cell_vitu_itu_pane

0x82e7,	// (0x0002e9e9) cell_vitu_function_pane_ParamLimits

0x82e7,	// (0x0002e9e9) cell_vitu_function_pane

0x6ee7,	// (0x0002d5e9) bg_popup_sub_pane_cp08_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_popup_sub_pane_cp08

0x8300,	// (0x0002ea02) field_vitu_entry_pane_t1_ParamLimits

0x8300,	// (0x0002ea02) field_vitu_entry_pane_t1

0xc6f3,	// (0x00032df5) field_vitu_entry_pane_t2_ParamLimits

0xc6f3,	// (0x00032df5) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00035f2d) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00035f2d) field_vitu_entry_pane_t

0xc710,	// (0x00032e12) bg_button_pane_cp05_ParamLimits

0xc710,	// (0x00032e12) bg_button_pane_cp05

0x831e,	// (0x0002ea20) cell_vitu_itu_pane_g1

0x8336,	// (0x0002ea38) cell_vitu_itu_pane_t1_ParamLimits

0x8336,	// (0x0002ea38) cell_vitu_itu_pane_t1

0x8348,	// (0x0002ea4a) cell_vitu_itu_pane_t2_ParamLimits

0x8348,	// (0x0002ea4a) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00035f32) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00035f32) cell_vitu_itu_pane_t

0xc71e,	// (0x00032e20) bg_button_pane_cp07

0x837d,	// (0x0002ea7f) cell_vitu_function_pane_g1

0xb66b,	// (0x00031d6d) main_calc_pane_g1

0x09e9,	// (0x000270eb) aid_visual_content_pane

0xb661,	// (0x00031d63) main_vradio_pane

0x8386,	// (0x0002ea88) main_vradio_pane_g1_ParamLimits

0x8386,	// (0x0002ea88) main_vradio_pane_g1

0xc728,	// (0x00032e2a) main_vradio_pane_g2_ParamLimits

0xc728,	// (0x00032e2a) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00035f39) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00035f39) main_vradio_pane_g

0x839f,	// (0x0002eaa1) main_vradio_pane_t1_ParamLimits

0x839f,	// (0x0002eaa1) main_vradio_pane_t1

0x83b4,	// (0x0002eab6) main_vradio_pane_t2_ParamLimits

0x83b4,	// (0x0002eab6) main_vradio_pane_t2

0xc735,	// (0x00032e37) main_vradio_pane_t3_ParamLimits

0xc735,	// (0x00032e37) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00035f3e) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00035f3e) main_vradio_pane_t

0x83c9,	// (0x0002eacb) vradio_rocker_control_pane_ParamLimits

0x83c9,	// (0x0002eacb) vradio_rocker_control_pane

0x83db,	// (0x0002eadd) vradio_station_info_pane_ParamLimits

0x83db,	// (0x0002eadd) vradio_station_info_pane

0xc749,	// (0x00032e4b) vradio_frequency_info_pane_ParamLimits

0xc749,	// (0x00032e4b) vradio_frequency_info_pane

0xc0ff,	// (0x00032801) vradio_station_info_pane_g1

0xc758,	// (0x00032e5a) vradio_station_info_pane_t1_ParamLimits

0xc758,	// (0x00032e5a) vradio_station_info_pane_t1

0xc77a,	// (0x00032e7c) vradio_station_info_pane_t2_ParamLimits

0xc77a,	// (0x00032e7c) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00035f45) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00035f45) vradio_station_info_pane_t

0xc78c,	// (0x00032e8e) vradio_tuning_pane

0xc794,	// (0x00032e96) vradio_rocker_control_pane_g1

0xc79c,	// (0x00032e9e) vradio_rocker_control_pane_g2

0xc7a4,	// (0x00032ea6) vradio_rocker_control_pane_g3

0xc7ac,	// (0x00032eae) vradio_rocker_control_pane_g4

0xc7b4,	// (0x00032eb6) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00035f4a) vradio_rocker_control_pane_g

0x83ed,	// (0x0002eaef) vradio_frequency_info_pane_g1

0xc7bc,	// (0x00032ebe) vradio_frequency_info_pane_t1_ParamLimits

0xc7bc,	// (0x00032ebe) vradio_frequency_info_pane_t1

0x83f7,	// (0x0002eaf9) vradio_tuning_pane_g1

0x8402,	// (0x0002eb04) vradio_tuning_pane_t1

0xb611,	// (0x00031d13) area_side_right_pane_ParamLimits

0xb611,	// (0x00031d13) area_side_right_pane

0xbbc0,	// (0x000322c2) status_small_pane_g1

0xbbc8,	// (0x000322ca) status_small_pane_g2

0xbbd1,	// (0x000322d3) status_small_pane_g3

0xbbda,	// (0x000322dc) status_small_pane_g4

0x0003,

0xf608,	// (0x00035d0a) status_small_pane_g

0xbbe3,	// (0x000322e5) status_small_pane_t1

0xb661,	// (0x00031d63) main_video3_pane

0xc7d0,	// (0x00032ed2) cams_zoom_vslider_pane

0xc7d8,	// (0x00032eda) image3_wide_pane_ParamLimits

0xc7d8,	// (0x00032eda) image3_wide_pane

0xc7f2,	// (0x00032ef4) image3_wide_small_pane

0xc7fe,	// (0x00032f00) main_video3_pane_g1_ParamLimits

0xc7fe,	// (0x00032f00) main_video3_pane_g1

0xc81a,	// (0x00032f1c) main_video3_pane_g2_ParamLimits

0xc81a,	// (0x00032f1c) main_video3_pane_g2

0x0001,

0xf853,	// (0x00035f55) main_video3_pane_g_ParamLimits

0xf853,	// (0x00035f55) main_video3_pane_g

0xc836,	// (0x00032f38) main_video3_pane_t1_ParamLimits

0xc836,	// (0x00032f38) main_video3_pane_t1

0xc861,	// (0x00032f63) main_video3_pane_t2_ParamLimits

0xc861,	// (0x00032f63) main_video3_pane_t2

0xc88c,	// (0x00032f8e) main_video3_pane_t3_ParamLimits

0xc88c,	// (0x00032f8e) main_video3_pane_t3

0x0002,

0xf858,	// (0x00035f5a) main_video3_pane_t_ParamLimits

0xf858,	// (0x00035f5a) main_video3_pane_t

0xc8b9,	// (0x00032fbb) cams_zoom_vslider_pane_g1

0xc8c2,	// (0x00032fc4) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00035f61) cams_zoom_vslider_pane_g

0xc8ca,	// (0x00032fcc) small_slider_vertical_pane

0xc0ff,	// (0x00032801) small_slider_vertical_pane_g1

0xc0ff,	// (0x00032801) small_slider_vertical_pane_g2

0xc8d2,	// (0x00032fd4) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00035f66) small_slider_vertical_pane_g

0xb661,	// (0x00031d63) main_hwr_training_pane

0xc8db,	// (0x00032fdd) hwr_training_instruct_pane_ParamLimits

0xc8db,	// (0x00032fdd) hwr_training_instruct_pane

0x8411,	// (0x0002eb13) hwr_training_navi_pane_ParamLimits

0x8411,	// (0x0002eb13) hwr_training_navi_pane

0x8430,	// (0x0002eb32) hwr_training_write_pane_ParamLimits

0x8430,	// (0x0002eb32) hwr_training_write_pane

0xf0ce,	// (0x000357d0) bg_frame_shadow_pane

0xc912,	// (0x00033014) hwr_training_write_pane_g1

0xc91a,	// (0x0003301c) hwr_training_write_pane_g2

0xc922,	// (0x00033024) hwr_training_write_pane_g3

0xc92a,	// (0x0003302c) hwr_training_write_pane_g4

0xc932,	// (0x00033034) hwr_training_write_pane_g5

0xc93a,	// (0x0003303c) hwr_training_write_pane_g6

0xc942,	// (0x00033044) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00035f6d) hwr_training_write_pane_g

0xc94a,	// (0x0003304c) hwr_training_navi_pane_g1_ParamLimits

0xc94a,	// (0x0003304c) hwr_training_navi_pane_g1

0xc95c,	// (0x0003305e) hwr_training_navi_pane_g2_ParamLimits

0xc95c,	// (0x0003305e) hwr_training_navi_pane_g2

0xc96e,	// (0x00033070) hwr_training_navi_pane_g3_ParamLimits

0xc96e,	// (0x00033070) hwr_training_navi_pane_g3

0xc97e,	// (0x00033080) hwr_training_navi_pane_g4_ParamLimits

0xc97e,	// (0x00033080) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00035f7c) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00035f7c) hwr_training_navi_pane_g

0xc98b,	// (0x0003308d) hwr_training_navi_pane_t1

0x846b,	// (0x0002eb6d) list_single_hwr_training_instruct_pane_ParamLimits

0x846b,	// (0x0002eb6d) list_single_hwr_training_instruct_pane

0xc999,	// (0x0003309b) list_single_hwr_training_instruct_pane_t1

0xc03f,	// (0x00032741) bg_frame_shadow_pane_g1

0xc9a8,	// (0x000330aa) bg_frame_shadow_pane_g2

0xc9b0,	// (0x000330b2) bg_frame_shadow_pane_g3

0xc9b8,	// (0x000330ba) bg_frame_shadow_pane_g4

0xc9c0,	// (0x000330c2) bg_frame_shadow_pane_g5

0xc9c8,	// (0x000330ca) bg_frame_shadow_pane_g6

0xc9d0,	// (0x000330d2) bg_frame_shadow_pane_g7

0x2c97,	// (0x00029399) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00035f87) bg_frame_shadow_pane_g

0xb661,	// (0x00031d63) main_video_tele_dialer_pane

0x16b6,	// (0x00027db8) aid_size_cell_video_keypad_ParamLimits

0x16b6,	// (0x00027db8) aid_size_cell_video_keypad

0x16d0,	// (0x00027dd2) grid_video_dialer_keypad_pane_ParamLimits

0x16d0,	// (0x00027dd2) grid_video_dialer_keypad_pane

0x171a,	// (0x00027e1c) video_down_pane_cp_ParamLimits

0x171a,	// (0x00027e1c) video_down_pane_cp

0x172a,	// (0x00027e2c) cell_video_dialer_keypad_pane_ParamLimits

0x172a,	// (0x00027e2c) cell_video_dialer_keypad_pane

0xc9f4,	// (0x000330f6) bg_button_pane_cp08_ParamLimits

0xc9f4,	// (0x000330f6) bg_button_pane_cp08

0x8480,	// (0x0002eb82) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8480,	// (0x0002eb82) cell_video_dialer_keypad_pane_g1

0x7c85,	// (0x0002e387) mup3_rocker2_pane_ParamLimits

0x7c85,	// (0x0002e387) mup3_rocker2_pane

0xc0ff,	// (0x00032801) mup3_rocker2_pane_g1

0x0ec0,	// (0x000275c2) main_dialer2_pane

0xb661,	// (0x00031d63) main_mp4_pane

0xca08,	// (0x0003310a) main_mp4_pane_g1_ParamLimits

0xca08,	// (0x0003310a) main_mp4_pane_g1

0xca08,	// (0x0003310a) main_mp4_pane_g2_ParamLimits

0xca08,	// (0x0003310a) main_mp4_pane_g2

0x174c,	// (0x00027e4e) main_mp4_pane_g3_ParamLimits

0x174c,	// (0x00027e4e) main_mp4_pane_g3

0xca16,	// (0x00033118) main_mp4_pane_g4_ParamLimits

0xca16,	// (0x00033118) main_mp4_pane_g4

0xca3e,	// (0x00033140) main_mp4_pane_g5_ParamLimits

0xca3e,	// (0x00033140) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00035fa7) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00035fa7) main_mp4_pane_g

0xca8e,	// (0x00033190) main_mp4_pane_t1_ParamLimits

0xca8e,	// (0x00033190) main_mp4_pane_t1

0xcaea,	// (0x000331ec) main_mp4_pane_t2_ParamLimits

0xcaea,	// (0x000331ec) main_mp4_pane_t2

0xcb3c,	// (0x0003323e) main_mp4_pane_t3_ParamLimits

0xcb3c,	// (0x0003323e) main_mp4_pane_t3

0xcb5c,	// (0x0003325e) main_mp4_pane_t4_ParamLimits

0xcb5c,	// (0x0003325e) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00035fb4) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00035fb4) main_mp4_pane_t

0xcba0,	// (0x000332a2) mp4_progress_pane_ParamLimits

0xcba0,	// (0x000332a2) mp4_progress_pane

0xcbea,	// (0x000332ec) mp4_rocker_pane_ParamLimits

0xcbea,	// (0x000332ec) mp4_rocker_pane

0xcc12,	// (0x00033314) mp4_progress_pane_t1

0xcc2b,	// (0x0003332d) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00035fbd) mp4_progress_pane_t

0xcc44,	// (0x00033346) mup_progress_pane_cp04

0xcc50,	// (0x00033352) mp4_rocker_pane_g1

0x1788,	// (0x00027e8a) aid_cell_size_keypad2_ParamLimits

0x1788,	// (0x00027e8a) aid_cell_size_keypad2

0x179e,	// (0x00027ea0) dialer2_ne_pane_ParamLimits

0x179e,	// (0x00027ea0) dialer2_ne_pane

0x17b8,	// (0x00027eba) grid_dialer2_keypad_pane_ParamLimits

0x17b8,	// (0x00027eba) grid_dialer2_keypad_pane

0xbee4,	// (0x000325e6) bg_popup_call_pane_cp07_ParamLimits

0xbee4,	// (0x000325e6) bg_popup_call_pane_cp07

0x84ba,	// (0x0002ebbc) dialer2_ne_pane_t1_ParamLimits

0x84ba,	// (0x0002ebbc) dialer2_ne_pane_t1

0x17d4,	// (0x00027ed6) cell_dialer2_keypad_pane_ParamLimits

0x17d4,	// (0x00027ed6) cell_dialer2_keypad_pane

0xcc6c,	// (0x0003336e) bg_button_pane_pane_cp04_ParamLimits

0xcc6c,	// (0x0003336e) bg_button_pane_pane_cp04

0x84f5,	// (0x0002ebf7) cell_dialer2_keypad_pane_g1_ParamLimits

0x84f5,	// (0x0002ebf7) cell_dialer2_keypad_pane_g1

0x35d9,	// (0x00029cdb) aid_placing_vt_set_content_ParamLimits

0x35d9,	// (0x00029cdb) aid_placing_vt_set_content

0x3601,	// (0x00029d03) aid_placing_vt_set_title_ParamLimits

0x3601,	// (0x00029d03) aid_placing_vt_set_title

0xb661,	// (0x00031d63) main_image3_pane

0x1854,	// (0x00027f56) area_side_right_pane_cp01_ParamLimits

0x1854,	// (0x00027f56) area_side_right_pane_cp01

0xca08,	// (0x0003310a) main_image3_pane_g1_ParamLimits

0xca08,	// (0x0003310a) main_image3_pane_g1

0x186b,	// (0x00027f6d) main_image3_pane_g2_ParamLimits

0x186b,	// (0x00027f6d) main_image3_pane_g2

0x1893,	// (0x00027f95) main_image3_pane_g3_ParamLimits

0x1893,	// (0x00027f95) main_image3_pane_g3

0x18bd,	// (0x00027fbf) main_image3_pane_g4_ParamLimits

0x18bd,	// (0x00027fbf) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00035fcc) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00035fcc) main_image3_pane_g

0x18e7,	// (0x00027fe9) main_image3_pane_t1_ParamLimits

0x18e7,	// (0x00027fe9) main_image3_pane_t1

0x193f,	// (0x00028041) main_image3_pane_t2_ParamLimits

0x193f,	// (0x00028041) main_image3_pane_t2

0x1991,	// (0x00028093) main_image3_pane_t3_ParamLimits

0x1991,	// (0x00028093) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00035fd5) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00035fd5) main_image3_pane_t

0x6ee7,	// (0x0002d5e9) grid_sctrl_middle_pane_cp01_ParamLimits

0x6ee7,	// (0x0002d5e9) grid_sctrl_middle_pane_cp01

0x855d,	// (0x0002ec5f) cell_sctrl_middle_pane_cp01_ParamLimits

0x855d,	// (0x0002ec5f) cell_sctrl_middle_pane_cp01

0x857a,	// (0x0002ec7c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x857a,	// (0x0002ec7c) cell_sctrl_middle_pane_cp01_g1

0xb661,	// (0x00031d63) main_call4_pane

0x8590,	// (0x0002ec92) aid_size_button_call4_ParamLimits

0x8590,	// (0x0002ec92) aid_size_button_call4

0x85c1,	// (0x0002ecc3) call4_windows_pane_ParamLimits

0x85c1,	// (0x0002ecc3) call4_windows_pane

0x85e1,	// (0x0002ece3) grid_call4_button_pane_ParamLimits

0x85e1,	// (0x0002ece3) grid_call4_button_pane

0xccaa,	// (0x000333ac) call4_windows_conf_pane

0xccc1,	// (0x000333c3) popup_call4_audio_first_window_ParamLimits

0xccc1,	// (0x000333c3) popup_call4_audio_first_window

0xcd0d,	// (0x0003340f) popup_call4_audio_second_window_ParamLimits

0xcd0d,	// (0x0003340f) popup_call4_audio_second_window

0xcd21,	// (0x00033423) popup_call4_audio_wait_window_ParamLimits

0xcd21,	// (0x00033423) popup_call4_audio_wait_window

0x860e,	// (0x0002ed10) cell_call4_button_pane_ParamLimits

0x860e,	// (0x0002ed10) cell_call4_button_pane

0x8637,	// (0x0002ed39) bg_button_pane_cp09_ParamLimits

0x8637,	// (0x0002ed39) bg_button_pane_cp09

0x8643,	// (0x0002ed45) cell_call4_button_pane_g1_ParamLimits

0x8643,	// (0x0002ed45) cell_call4_button_pane_g1

0x8669,	// (0x0002ed6b) cell_call4_button_pane_t1_ParamLimits

0x8669,	// (0x0002ed6b) cell_call4_button_pane_t1

0xcd69,	// (0x0003346b) popup_call4_audio_conf_window_ParamLimits

0xcd69,	// (0x0003346b) popup_call4_audio_conf_window

0x7ce5,	// (0x0002e3e7) mup3_progress_pane_t1_ParamLimits

0x7d04,	// (0x0002e406) mup3_progress_pane_t2_ParamLimits

0xc3f2,	// (0x00032af4) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00035eae) mup3_progress_pane_t_ParamLimits

0xc40f,	// (0x00032b11) mup_progress_pane_cp03_ParamLimits

0x8257,	// (0x0002e959) mup3_control_keys_pane_g4_copy1

0xcbce,	// (0x000332d0) mp4_rocker2_pane_ParamLimits

0xcbce,	// (0x000332d0) mp4_rocker2_pane

0xcd7d,	// (0x0003347f) mp4_rocker2_pane_g1

0xcd85,	// (0x00033487) mp4_rocker2_pane_g2

0xcd8d,	// (0x0003348f) mp4_rocker2_pane_g3

0xcd95,	// (0x00033497) mp4_rocker2_pane_g4

0xcd9d,	// (0x0003349f) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00035fde) mp4_rocker2_pane_g

0xb661,	// (0x00031d63) main_camera4_pane

0xb661,	// (0x00031d63) main_video4_pane

0x16e8,	// (0x00027dea) main_video_tele_dialer_pane_t1_ParamLimits

0x16e8,	// (0x00027dea) main_video_tele_dialer_pane_t1

0x1701,	// (0x00027e03) main_video_tele_dialer_pane_t2_ParamLimits

0x1701,	// (0x00027e03) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00035f98) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00035f98) main_video_tele_dialer_pane_t

0x1a31,	// (0x00028133) cam4_autofocus_pane_ParamLimits

0x1a31,	// (0x00028133) cam4_autofocus_pane

0x1a47,	// (0x00028149) cam4_image_uncrop_pane_ParamLimits

0x1a47,	// (0x00028149) cam4_image_uncrop_pane

0x1a61,	// (0x00028163) cam4_indicators_pane_ParamLimits

0x1a61,	// (0x00028163) cam4_indicators_pane

0x1a8c,	// (0x0002818e) main_camera4_pane_g1_ParamLimits

0x1a8c,	// (0x0002818e) main_camera4_pane_g1

0x1a9e,	// (0x000281a0) main_camera4_pane_g2_ParamLimits

0x1a9e,	// (0x000281a0) main_camera4_pane_g2

0x1ab1,	// (0x000281b3) main_camera4_pane_g3_ParamLimits

0x1ab1,	// (0x000281b3) main_camera4_pane_g3

0x1ac4,	// (0x000281c6) main_camera4_pane_g4_ParamLimits

0x1ac4,	// (0x000281c6) main_camera4_pane_g4

0x1ad7,	// (0x000281d9) main_camera4_pane_g5_ParamLimits

0x1ad7,	// (0x000281d9) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00035fe9) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00035fe9) main_camera4_pane_g

0x1afb,	// (0x000281fd) main_camera4_pane_t1_ParamLimits

0x1afb,	// (0x000281fd) main_camera4_pane_t1

0xcdd3,	// (0x000334d5) bg_tb_trans_pane_cp06

0xcde9,	// (0x000334eb) cam4_indicators_pane_g1

0xcdfa,	// (0x000334fc) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00036004) cam4_indicators_pane_g

0xce18,	// (0x0003351a) cam4_indicators_pane_t1

0x1b4b,	// (0x0002824d) main_video4_pane_g1_ParamLimits

0x1b4b,	// (0x0002824d) main_video4_pane_g1

0x1b5a,	// (0x0002825c) main_video4_pane_g2_ParamLimits

0x1b5a,	// (0x0002825c) main_video4_pane_g2

0x1b69,	// (0x0002826b) main_video4_pane_g3_ParamLimits

0x1b69,	// (0x0002826b) main_video4_pane_g3

0x1b78,	// (0x0002827a) main_video4_pane_g4_ParamLimits

0x1b78,	// (0x0002827a) main_video4_pane_g4

0x0004,

0xf909,	// (0x0003600b) main_video4_pane_g_ParamLimits

0xf909,	// (0x0003600b) main_video4_pane_g

0x1b96,	// (0x00028298) vid4_indicators_pane_ParamLimits

0x1b96,	// (0x00028298) vid4_indicators_pane

0x1bc4,	// (0x000282c6) video4_image_uncrop_cif_pane_ParamLimits

0x1bc4,	// (0x000282c6) video4_image_uncrop_cif_pane

0x1bde,	// (0x000282e0) video4_image_uncrop_nhd_pane_ParamLimits

0x1bde,	// (0x000282e0) video4_image_uncrop_nhd_pane

0x1a47,	// (0x00028149) video4_image_uncrop_vga_pane_ParamLimits

0x1a47,	// (0x00028149) video4_image_uncrop_vga_pane

0xb653,	// (0x00031d55) bg_tb_trans_pane_cp07

0xce44,	// (0x00033546) vid4_indicators_pane_g1

0xce58,	// (0x0003355a) vid4_indicators_pane_g2

0xce6c,	// (0x0003356e) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00036016) vid4_indicators_pane_g

0xce9b,	// (0x0003359d) vid4_indicators_pane_t1

0x86a3,	// (0x0002eda5) cam4_autofocus_pane_g1

0x86ab,	// (0x0002edad) cam4_autofocus_pane_g2

0x86b3,	// (0x0002edb5) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00036021) cam4_autofocus_pane_g

0x86bb,	// (0x0002edbd) cam4_autofocus_pane_g3_copy1

0xc9d8,	// (0x000330da) video_down_pane_cp_t1

0xc9e6,	// (0x000330e8) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00035f9d) video_down_pane_cp_t

0xb653,	// (0x00031d55) popup_vitu2_window_ParamLimits

0xb653,	// (0x00031d55) popup_vitu2_window

0x1bf2,	// (0x000282f4) aid_size_cell2_itu2_ParamLimits

0x1bf2,	// (0x000282f4) aid_size_cell2_itu2

0x1c18,	// (0x0002831a) aid_size_cell_itu2_ParamLimits

0x1c18,	// (0x0002831a) aid_size_cell_itu2

0x1c74,	// (0x00028376) bg_popup_window_pane_cp09_ParamLimits

0x1c74,	// (0x00028376) bg_popup_window_pane_cp09

0x1c82,	// (0x00028384) field_vitu2_entry_pane_ParamLimits

0x1c82,	// (0x00028384) field_vitu2_entry_pane

0x1ca8,	// (0x000283aa) grid_vitu2_function_pane_ParamLimits

0x1ca8,	// (0x000283aa) grid_vitu2_function_pane

0x1cf9,	// (0x000283fb) grid_vitu2_itu_pane_ParamLimits

0x1cf9,	// (0x000283fb) grid_vitu2_itu_pane

0x1d8c,	// (0x0002848e) cell_vitu2_itu_pane_ParamLimits

0x1d8c,	// (0x0002848e) cell_vitu2_itu_pane

0x1db0,	// (0x000284b2) cell_vitu2_function_pane_ParamLimits

0x1db0,	// (0x000284b2) cell_vitu2_function_pane

0xceb2,	// (0x000335b4) bg_popup_call_pane_cp08_ParamLimits

0xceb2,	// (0x000335b4) bg_popup_call_pane_cp08

0xcecb,	// (0x000335cd) field_vitu2_entry_pane_g1

0xced7,	// (0x000335d9) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00036028) field_vitu2_entry_pane_g

0xcef1,	// (0x000335f3) field_vitu2_entry_pane_t1_ParamLimits

0xcef1,	// (0x000335f3) field_vitu2_entry_pane_t1

0xcf20,	// (0x00033622) field_vitu2_entry_pane_t2_ParamLimits

0xcf20,	// (0x00033622) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0003602f) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0003602f) field_vitu2_entry_pane_t

0x1def,	// (0x000284f1) bg_button_pane_cp010_ParamLimits

0x1def,	// (0x000284f1) bg_button_pane_cp010

0x1dfd,	// (0x000284ff) cell_vitu2_itu_pane_g1

0x1e1b,	// (0x0002851d) cell_vitu2_itu_pane_t1_ParamLimits

0x1e1b,	// (0x0002851d) cell_vitu2_itu_pane_t1

0x1e81,	// (0x00028583) cell_vitu2_itu_pane_t2_ParamLimits

0x1e81,	// (0x00028583) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00036039) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00036039) cell_vitu2_itu_pane_t

0xb653,	// (0x00031d55) bg_button_pane_cp011

0x1f5d,	// (0x0002865f) cell_vitu2_function_pane_g1

0xb661,	// (0x00031d63) main_myfav_hc_pane

0x19e1,	// (0x000280e3) popup_image3_note_pane_ParamLimits

0x19e1,	// (0x000280e3) popup_image3_note_pane

0x19fd,	// (0x000280ff) popup_image3_tool_bar_pane_ParamLimits

0x19fd,	// (0x000280ff) popup_image3_tool_bar_pane

0x1f05,	// (0x00028607) cell_vitu2_itu_pane_t3_ParamLimits

0x1f05,	// (0x00028607) cell_vitu2_itu_pane_t3

0xf0ce,	// (0x000357d0) bg_popup_trans_pane

0xcf45,	// (0x00033647) grid_image3_tool_bar_pane

0xcf4f,	// (0x00033651) bg_popup_trans_pane_g1

0x3bd0,	// (0x0002a2d2) bg_popup_trans_pane_g2

0xcf57,	// (0x00033659) bg_popup_trans_pane_g3

0xcf5f,	// (0x00033661) bg_popup_trans_pane_g4

0xcf67,	// (0x00033669) bg_popup_trans_pane_g5

0xcf6f,	// (0x00033671) bg_popup_trans_pane_g6

0xcf77,	// (0x00033679) bg_popup_trans_pane_g7

0xcf7f,	// (0x00033681) bg_popup_trans_pane_g8

0x3bb0,	// (0x0002a2b2) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00036040) bg_popup_trans_pane_g

0xcf87,	// (0x00033689) cell_image3_tool_bar_pane_ParamLimits

0xcf87,	// (0x00033689) cell_image3_tool_bar_pane

0xc0ff,	// (0x00032801) cell_image3_tool_bar_pane_g1

0xf0ce,	// (0x000357d0) bg_popup_trans_pane_cp1

0xcf9b,	// (0x0003369d) popup_image3_note_pane_t1

0xcfa9,	// (0x000336ab) popup_image3_note_pane_t2

0xcfb7,	// (0x000336b9) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00036053) popup_image3_note_pane_t

0xcfc5,	// (0x000336c7) popup_image3_note_pane_t3_copy1

0x86c3,	// (0x0002edc5) bg_myfav_hc_instruction_pane_ParamLimits

0x86c3,	// (0x0002edc5) bg_myfav_hc_instruction_pane

0x86d7,	// (0x0002edd9) cell_myfav_contact_pane_ParamLimits

0x86d7,	// (0x0002edd9) cell_myfav_contact_pane

0x86f5,	// (0x0002edf7) cell_myfav_contact_pane_cp1_ParamLimits

0x86f5,	// (0x0002edf7) cell_myfav_contact_pane_cp1

0x870d,	// (0x0002ee0f) cell_myfav_contact_pane_cp2_ParamLimits

0x870d,	// (0x0002ee0f) cell_myfav_contact_pane_cp2

0x8725,	// (0x0002ee27) cell_myfav_contact_pane_cp3_ParamLimits

0x8725,	// (0x0002ee27) cell_myfav_contact_pane_cp3

0x873c,	// (0x0002ee3e) cell_myfav_contact_pane_cp4_ParamLimits

0x873c,	// (0x0002ee3e) cell_myfav_contact_pane_cp4

0x8754,	// (0x0002ee56) cell_myfav_contact_pane_cp5_ParamLimits

0x8754,	// (0x0002ee56) cell_myfav_contact_pane_cp5

0x8768,	// (0x0002ee6a) cell_myfav_contact_pane_cp6_ParamLimits

0x8768,	// (0x0002ee6a) cell_myfav_contact_pane_cp6

0x877e,	// (0x0002ee80) cell_myfav_contact_pane_cp7_ParamLimits

0x877e,	// (0x0002ee80) cell_myfav_contact_pane_cp7

0xcfd3,	// (0x000336d5) listscroll_gen_pane_cp05

0x8798,	// (0x0002ee9a) main_myfav_hc_pane_g1_ParamLimits

0x8798,	// (0x0002ee9a) main_myfav_hc_pane_g1

0x87b2,	// (0x0002eeb4) main_myfav_hc_pane_g2_ParamLimits

0x87b2,	// (0x0002eeb4) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0003605a) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0003605a) main_myfav_hc_pane_g

0x87e4,	// (0x0002eee6) main_myfav_hc_pane_t1_ParamLimits

0x87e4,	// (0x0002eee6) main_myfav_hc_pane_t1

0xcfdc,	// (0x000336de) main_myfav_hc_pane_t2_ParamLimits

0xcfdc,	// (0x000336de) main_myfav_hc_pane_t2

0xcfee,	// (0x000336f0) main_myfav_hc_pane_t3_ParamLimits

0xcfee,	// (0x000336f0) main_myfav_hc_pane_t3

0x87fb,	// (0x0002eefd) main_myfav_hc_pane_t4_ParamLimits

0x87fb,	// (0x0002eefd) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00036061) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00036061) main_myfav_hc_pane_t

0xc0ff,	// (0x00032801) bg_myfav_hc_instruction_pane_g1

0xd000,	// (0x00033702) cell_myfav_contact_pane_g1_ParamLimits

0xd000,	// (0x00033702) cell_myfav_contact_pane_g1

0xd000,	// (0x00033702) cell_myfav_contact_pane_g2_ParamLimits

0xd000,	// (0x00033702) cell_myfav_contact_pane_g2

0xd00c,	// (0x0003370e) cell_myfav_contact_pane_g3_ParamLimits

0xd00c,	// (0x0003370e) cell_myfav_contact_pane_g3

0xc3dc,	// (0x00032ade) cell_myfav_contact_pane_g4_ParamLimits

0xc3dc,	// (0x00032ade) cell_myfav_contact_pane_g4

0xd019,	// (0x0003371b) cell_myfav_contact_pane_g5_ParamLimits

0xd019,	// (0x0003371b) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0003606c) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0003606c) cell_myfav_contact_pane_g

0x87cc,	// (0x0002eece) main_myfav_hc_pane_g3_ParamLimits

0x87cc,	// (0x0002eece) main_myfav_hc_pane_g3

0x0ad2,	// (0x000271d4) popup_adpt_find_window

0x8823,	// (0x0002ef25) afind_page_pane_ParamLimits

0x8823,	// (0x0002ef25) afind_page_pane

0x8838,	// (0x0002ef3a) aid_size_cell_afind_ParamLimits

0x8838,	// (0x0002ef3a) aid_size_cell_afind

0x8856,	// (0x0002ef58) bg_popup_sub_pane_cp09_ParamLimits

0x8856,	// (0x0002ef58) bg_popup_sub_pane_cp09

0x8863,	// (0x0002ef65) find_pane_cp01_ParamLimits

0x8863,	// (0x0002ef65) find_pane_cp01

0xd025,	// (0x00033727) grid_afind_control_pane_ParamLimits

0xd025,	// (0x00033727) grid_afind_control_pane

0x8870,	// (0x0002ef72) grid_afind_pane_ParamLimits

0x8870,	// (0x0002ef72) grid_afind_pane

0x8892,	// (0x0002ef94) cell_afind_pane_ParamLimits

0x8892,	// (0x0002ef94) cell_afind_pane

0xc0ff,	// (0x00032801) afind_page_pane_g1

0x88f3,	// (0x0002eff5) afind_page_pane_g2

0x88fc,	// (0x0002effe) afind_page_pane_g3

0x0002,

0xf975,	// (0x00036077) afind_page_pane_g

0x8905,	// (0x0002f007) afind_page_pane_t1

0xd039,	// (0x0003373b) cell_afind_grid_control_pane_ParamLimits

0xd039,	// (0x0003373b) cell_afind_grid_control_pane

0xcc6c,	// (0x0003336e) bg_button_pane_cp69_ParamLimits

0xcc6c,	// (0x0003336e) bg_button_pane_cp69

0x8925,	// (0x0002f027) cell_afind_pane_g1_ParamLimits

0x8925,	// (0x0002f027) cell_afind_pane_g1

0x8932,	// (0x0002f034) cell_afind_pane_t1_ParamLimits

0x8932,	// (0x0002f034) cell_afind_pane_t1

0x347a,	// (0x00029b7c) bg_button_pane_cp72

0xd048,	// (0x0003374a) cell_afind_grid_control_pane_g1

0x5e38,	// (0x0002c53a) aid_image_placing_area_ParamLimits

0x5e38,	// (0x0002c53a) aid_image_placing_area

0xc6db,	// (0x00032ddd) field_vitu_entry_pane_g1_ParamLimits

0xc6db,	// (0x00032ddd) field_vitu_entry_pane_g1

0xc6e7,	// (0x00032de9) field_vitu_entry_pane_g2_ParamLimits

0xc6e7,	// (0x00032de9) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00035f28) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00035f28) field_vitu_entry_pane_g

0x831e,	// (0x0002ea20) cell_vitu_itu_pane_g1_ParamLimits

0x8360,	// (0x0002ea62) cell_vitu_itu_pane_t3_ParamLimits

0x8360,	// (0x0002ea62) cell_vitu_itu_pane_t3

0xcc12,	// (0x00033314) mp4_progress_pane_t1_ParamLimits

0xcc2b,	// (0x0003332d) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00035fbd) mp4_progress_pane_t_ParamLimits

0xcc44,	// (0x00033346) mup_progress_pane_cp04_ParamLimits

0x880f,	// (0x0002ef11) main_myfav_hc_pane_t5_ParamLimits

0x880f,	// (0x0002ef11) main_myfav_hc_pane_t5

0xb609,	// (0x00031d0b) aid_zoom_text_primary

0x0ad2,	// (0x000271d4) popup_adpt_find_window_ParamLimits

0xb653,	// (0x00031d55) main_cam_set_pane

0x1a78,	// (0x0002817a) cam4_zoom_pane_ParamLimits

0x1a78,	// (0x0002817a) cam4_zoom_pane

0x8944,	// (0x0002f046) main_cam_set_pane_g1_ParamLimits

0x8944,	// (0x0002f046) main_cam_set_pane_g1

0x8952,	// (0x0002f054) main_cam_set_pane_g2_ParamLimits

0x8952,	// (0x0002f054) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0003607e) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0003607e) main_cam_set_pane_g

0x8973,	// (0x0002f075) main_cam_set_pane_t1_ParamLimits

0x8973,	// (0x0002f075) main_cam_set_pane_t1

0x898e,	// (0x0002f090) main_cset_listscroll_pane_ParamLimits

0x898e,	// (0x0002f090) main_cset_listscroll_pane

0x89ae,	// (0x0002f0b0) main_cset_slider_pane_ParamLimits

0x89ae,	// (0x0002f0b0) main_cset_slider_pane

0xd059,	// (0x0003375b) main_cset_list_pane_ParamLimits

0xd059,	// (0x0003375b) main_cset_list_pane

0xd069,	// (0x0003376b) scroll_pane_cp028

0x89d4,	// (0x0002f0d6) aid_area_touch_slider

0x89f0,	// (0x0002f0f2) cset_slider_pane

0x8a1a,	// (0x0002f11c) main_cset_slider_pane_g1

0x8a2f,	// (0x0002f131) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00036083) main_cset_slider_pane_g

0xd0a2,	// (0x000337a4) main_cset_slider_pane_t1

0x8aeb,	// (0x0002f1ed) main_cset_slider_pane_t2

0x8b05,	// (0x0002f207) main_cset_slider_pane_t3

0x8b1f,	// (0x0002f221) main_cset_slider_pane_t4

0x8b39,	// (0x0002f23b) main_cset_slider_pane_t5

0x8b53,	// (0x0002f255) main_cset_slider_pane_t6

0x8b68,	// (0x0002f26a) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x000360a8) main_cset_slider_pane_t

0x8c6c,	// (0x0002f36e) cset_list_set_pane_ParamLimits

0x8c6c,	// (0x0002f36e) cset_list_set_pane

0x8c7e,	// (0x0002f380) aid_position_infowindow_above

0x8c86,	// (0x0002f388) aid_position_infowindow_below

0xd142,	// (0x00033844) cset_list_set_pane_g1_ParamLimits

0xd142,	// (0x00033844) cset_list_set_pane_g1

0xd14e,	// (0x00033850) cset_list_set_pane_g3_ParamLimits

0xd14e,	// (0x00033850) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x000360c7) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x000360c7) cset_list_set_pane_g

0xd15d,	// (0x0003385f) cset_list_set_pane_t1_ParamLimits

0xd15d,	// (0x0003385f) cset_list_set_pane_t1

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp021_ParamLimits

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp021

0x5624,	// (0x0002bd26) cset_slider_pane_g1

0x5636,	// (0x0002bd38) cset_slider_pane_g2

0x562d,	// (0x0002bd2f) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x000360cc) cset_slider_pane_g

0xd172,	// (0x00033874) aid_area_touch_cam4_zoom

0xd17a,	// (0x0003387c) cam4_zoom_cont_pane

0xd182,	// (0x00033884) cam4_zoom_pane_g1

0xd18a,	// (0x0003388c) cam4_zoom_pane_g2

0x1f71,	// (0x00028673) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x000360d3) cam4_zoom_pane_g

0xd192,	// (0x00033894) cam4_zoom_cont_pane_g1

0xd19b,	// (0x0003389d) cam4_zoom_cont_pane_g2

0xd1a4,	// (0x000338a6) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x000360da) cam4_zoom_cont_pane_g

0x85ae,	// (0x0002ecb0) call4_image_pane_ParamLimits

0x85ae,	// (0x0002ecb0) call4_image_pane

0xccaa,	// (0x000333ac) call4_windows_conf_pane_ParamLimits

0xcceb,	// (0x000333ed) popup_call4_audio_in_window_ParamLimits

0xcceb,	// (0x000333ed) popup_call4_audio_in_window

0xf0ce,	// (0x000357d0) bg_popup_call2_act_pane_cp02

0xcd61,	// (0x00033463) call4_list_conf_pane

0xc0ff,	// (0x00032801) call4_image_pane_g1

0xc0ff,	// (0x00032801) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00035dee) call4_image_pane_g

0xd1ad,	// (0x000338af) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1ad,	// (0x000338af) list_single_graphic_popup_conf4_pane

0xf0ce,	// (0x000357d0) list_highlight_pane_cp022

0xd1c0,	// (0x000338c2) list_single_graphic_popup_conf4_pane_g1

0x4ba2,	// (0x0002b2a4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x000360e1) list_single_graphic_popup_conf4_pane_g

0xd1c8,	// (0x000338ca) list_single_graphic_popup_conf4_pane_t1

0x3737,	// (0x00029e39) popup_vtel_slider_window_ParamLimits

0x3737,	// (0x00029e39) popup_vtel_slider_window

0xcc5a,	// (0x0003335c) dialer2_ne_pane_t2_ParamLimits

0xcc5a,	// (0x0003335c) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00035fc2) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00035fc2) dialer2_ne_pane_t

0xbee4,	// (0x000325e6) bg_popup_sub_pane_cp010_ParamLimits

0xbee4,	// (0x000325e6) bg_popup_sub_pane_cp010

0x8c8e,	// (0x0002f390) popup_vtel_slider_window_g1_ParamLimits

0x8c8e,	// (0x0002f390) popup_vtel_slider_window_g1

0x8ca1,	// (0x0002f3a3) popup_vtel_slider_window_g2_ParamLimits

0x8ca1,	// (0x0002f3a3) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x000360e6) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x000360e6) popup_vtel_slider_window_g

0x8cf7,	// (0x0002f3f9) vtel_slider_pane_ParamLimits

0x8cf7,	// (0x0002f3f9) vtel_slider_pane

0x8d19,	// (0x0002f41b) vtel_slider_pane_g1_ParamLimits

0x8d19,	// (0x0002f41b) vtel_slider_pane_g1

0x8d2d,	// (0x0002f42f) vtel_slider_pane_g2_ParamLimits

0x8d2d,	// (0x0002f42f) vtel_slider_pane_g2

0x8d45,	// (0x0002f447) vtel_slider_pane_g3_ParamLimits

0x8d45,	// (0x0002f447) vtel_slider_pane_g3

0x8d19,	// (0x0002f41b) vtel_slider_pane_g4_ParamLimits

0x8d19,	// (0x0002f41b) vtel_slider_pane_g4

0x8d5b,	// (0x0002f45d) vtel_slider_pane_g5_ParamLimits

0x8d5b,	// (0x0002f45d) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x000360ef) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x000360ef) vtel_slider_pane_g

0xb661,	// (0x00031d63) main_gallery2_pane

0x1c44,	// (0x00028346) aid_size_row_itut2_dropdow_list_ParamLimits

0x1c44,	// (0x00028346) aid_size_row_itut2_dropdow_list

0x1cd0,	// (0x000283d2) grid_vitu2_function_top_pane_ParamLimits

0x1cd0,	// (0x000283d2) grid_vitu2_function_top_pane

0x1d35,	// (0x00028437) popup_vitu2_dropdown_list_window_ParamLimits

0x1d35,	// (0x00028437) popup_vitu2_dropdown_list_window

0x1d5e,	// (0x00028460) popup_vitu2_match_list_window

0x1f79,	// (0x0002867b) cell_vitu2_function_top_pane_ParamLimits

0x1f79,	// (0x0002867b) cell_vitu2_function_top_pane

0x1f97,	// (0x00028699) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1f97,	// (0x00028699) cell_vitu2_function_top_pane_cp01

0x1fb5,	// (0x000286b7) cell_vitu2_function_top_wide_pane_ParamLimits

0x1fb5,	// (0x000286b7) cell_vitu2_function_top_wide_pane

0xb653,	// (0x00031d55) bg_button_pane_cp012

0x1fd3,	// (0x000286d5) cell_vitu2_function_top_pane_g1

0xd1ec,	// (0x000338ee) bg_button_pane_cp013_ParamLimits

0xd1ec,	// (0x000338ee) bg_button_pane_cp013

0x8d71,	// (0x0002f473) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8d71,	// (0x0002f473) cell_vitu2_function_top_wide_pane_g1

0xb653,	// (0x00031d55) bg_popup_sub_pane_cp20

0x1fe7,	// (0x000286e9) list_vitu2_match_list_pane

0xcf4f,	// (0x00033651) bg_popup_sub_pane_cp20_g1

0xcf57,	// (0x00033659) bg_popup_sub_pane_cp20_g2

0x3bd0,	// (0x0002a2d2) bg_popup_sub_pane_cp20_g3

0xcf5f,	// (0x00033661) bg_popup_sub_pane_cp20_g4

0x3bb0,	// (0x0002a2b2) bg_popup_sub_pane_cp20_g5

0xd208,	// (0x0003390a) bg_popup_sub_pane_cp20_g6

0xcf6f,	// (0x00033671) bg_popup_sub_pane_cp20_g7

0xcf77,	// (0x00033679) bg_popup_sub_pane_cp20_g8

0xcf7f,	// (0x00033681) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x000360fa) bg_popup_sub_pane_cp20_g

0xd210,	// (0x00033912) list_vitu2_match_list_item_pane_ParamLimits

0xd210,	// (0x00033912) list_vitu2_match_list_item_pane

0xd222,	// (0x00033924) list_vitu2_match_list_item_pane_t1

0xb661,	// (0x00031d63) bg_popup_sub_pane_cp21

0xd248,	// (0x0003394a) grid_vitu2_dropdown_list_pane

0x2005,	// (0x00028707) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2005,	// (0x00028707) cell_vitu2_dropdown_list_char_pane

0x2026,	// (0x00028728) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2026,	// (0x00028728) cell_vitu2_dropdown_list_ctrl_pane

0xd250,	// (0x00033952) cell_vitu2_dropdown_list_char_pane_g1

0xd259,	// (0x0003395b) cell_vitu2_dropdown_list_char_pane_g2

0xd262,	// (0x00033964) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00036117) cell_vitu2_dropdown_list_char_pane_g

0x2052,	// (0x00028754) cell_vitu2_dropdown_list_char_pane_t1

0x8dbe,	// (0x0002f4c0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8dbe,	// (0x0002f4c0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8dcb,	// (0x0002f4cd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8dcb,	// (0x0002f4cd) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8dd8,	// (0x0002f4da) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8dd8,	// (0x0002f4da) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2060,	// (0x00028762) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2060,	// (0x00028762) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcdd3,	// (0x000334d5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcdd3,	// (0x000334d5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0003611e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0003611e) cell_vitu2_dropdown_list_ctrl_pane_g

0x8de5,	// (0x0002f4e7) aid_size_cell_gallery2_ParamLimits

0x8de5,	// (0x0002f4e7) aid_size_cell_gallery2

0x8dfb,	// (0x0002f4fd) grid_gallery2_pane_ParamLimits

0x8dfb,	// (0x0002f4fd) grid_gallery2_pane

0x8e0f,	// (0x0002f511) scroll_pane_cp029_ParamLimits

0x8e0f,	// (0x0002f511) scroll_pane_cp029

0x8e1b,	// (0x0002f51d) cell_gallery2_pane_ParamLimits

0x8e1b,	// (0x0002f51d) cell_gallery2_pane

0xd26b,	// (0x0003396d) cell_gallery2_pane_g2

0x8e51,	// (0x0002f553) cell_gallery2_pane_g3

0xd275,	// (0x00033977) cell_gallery2_pane_g4

0xd27d,	// (0x0003397f) cell_gallery2_pane_g5

0x50e8,	// (0x0002b7ea) grid_highlight_pane_cp10

0x1d5e,	// (0x00028460) popup_vitu2_match_list_window_ParamLimits

0x1d75,	// (0x00028477) popup_vitu2_query_window_ParamLimits

0x1d75,	// (0x00028477) popup_vitu2_query_window

0xb661,	// (0x00031d63) bg_vitu2_candi_button_pane

0xd250,	// (0x00033952) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd259,	// (0x0003395b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd262,	// (0x00033964) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8e59,	// (0x0002f55b) bg_button_pane_cp015

0x8e6b,	// (0x0002f56d) bg_button_pane_cp016

0x8e7e,	// (0x0002f580) bg_button_pane_cp017

0xbbf9,	// (0x000322fb) bg_popup_sub_pane_cp22

0xd285,	// (0x00033987) popup_vitu2_query_window_g1

0x8ec3,	// (0x0002f5c5) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00036129) popup_vitu2_query_window_g

0x8ee2,	// (0x0002f5e4) popup_vitu2_query_window_t1_ParamLimits

0x8ee2,	// (0x0002f5e4) popup_vitu2_query_window_t1

0x8f17,	// (0x0002f619) popup_vitu2_query_window_t2_ParamLimits

0x8f17,	// (0x0002f619) popup_vitu2_query_window_t2

0x8f29,	// (0x0002f62b) popup_vitu2_query_window_t3_ParamLimits

0x8f29,	// (0x0002f62b) popup_vitu2_query_window_t3

0x8f51,	// (0x0002f653) popup_vitu2_query_window_t4_ParamLimits

0x8f51,	// (0x0002f653) popup_vitu2_query_window_t4

0x8f72,	// (0x0002f674) popup_vitu2_query_window_t5_ParamLimits

0x8f72,	// (0x0002f674) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00036130) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00036130) popup_vitu2_query_window_t

0xd051,	// (0x00033753) main_cset_text_pane

0x89d4,	// (0x0002f0d6) aid_area_touch_slider_ParamLimits

0x89f0,	// (0x0002f0f2) cset_slider_pane_ParamLimits

0x8a1a,	// (0x0002f11c) main_cset_slider_pane_g1_ParamLimits

0x8a2f,	// (0x0002f131) main_cset_slider_pane_g2_ParamLimits

0xd072,	// (0x00033774) main_cset_slider_pane_g3_ParamLimits

0xd072,	// (0x00033774) main_cset_slider_pane_g3

0x8a44,	// (0x0002f146) main_cset_slider_pane_g4_ParamLimits

0x8a44,	// (0x0002f146) main_cset_slider_pane_g4

0x8a53,	// (0x0002f155) main_cset_slider_pane_g5_ParamLimits

0x8a53,	// (0x0002f155) main_cset_slider_pane_g5

0x8a5f,	// (0x0002f161) main_cset_slider_pane_g6_ParamLimits

0x8a5f,	// (0x0002f161) main_cset_slider_pane_g6

0xf981,	// (0x00036083) main_cset_slider_pane_g_ParamLimits

0xd0a2,	// (0x000337a4) main_cset_slider_pane_t1_ParamLimits

0x8aeb,	// (0x0002f1ed) main_cset_slider_pane_t2_ParamLimits

0x8b05,	// (0x0002f207) main_cset_slider_pane_t3_ParamLimits

0x8b1f,	// (0x0002f221) main_cset_slider_pane_t4_ParamLimits

0x8b39,	// (0x0002f23b) main_cset_slider_pane_t5_ParamLimits

0x8b53,	// (0x0002f255) main_cset_slider_pane_t6_ParamLimits

0x8b68,	// (0x0002f26a) main_cset_slider_pane_t7_ParamLimits

0x8b92,	// (0x0002f294) main_cset_slider_pane_t8_ParamLimits

0x8b92,	// (0x0002f294) main_cset_slider_pane_t8

0x8bba,	// (0x0002f2bc) main_cset_slider_pane_t9_ParamLimits

0x8bba,	// (0x0002f2bc) main_cset_slider_pane_t9

0x8be2,	// (0x0002f2e4) main_cset_slider_pane_t10_ParamLimits

0x8be2,	// (0x0002f2e4) main_cset_slider_pane_t10

0x8c0a,	// (0x0002f30c) main_cset_slider_pane_t11_ParamLimits

0x8c0a,	// (0x0002f30c) main_cset_slider_pane_t11

0x8c32,	// (0x0002f334) main_cset_slider_pane_t12_ParamLimits

0x8c32,	// (0x0002f334) main_cset_slider_pane_t12

0x8c4f,	// (0x0002f351) main_cset_slider_pane_t13_ParamLimits

0x8c4f,	// (0x0002f351) main_cset_slider_pane_t13

0xf9a6,	// (0x000360a8) main_cset_slider_pane_t_ParamLimits

0xf0ce,	// (0x000357d0) bg_popup_sub_pane_cp011

0xd291,	// (0x00033993) main_cset_text_pane_g1

0xd299,	// (0x0003399b) main_cset_text_pane_t1

0xd2a7,	// (0x000339a9) main_cset_text_pane_t2

0xd2b5,	// (0x000339b7) main_cset_text_pane_t3

0xd2c3,	// (0x000339c5) main_cset_text_pane_t4

0xd2d1,	// (0x000339d3) main_cset_text_pane_t5

0xd2df,	// (0x000339e1) main_cset_text_pane_t6

0xd2ed,	// (0x000339ef) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0003613f) main_cset_text_pane_t

0xb661,	// (0x00031d63) main_cam4_burst_pane

0xb661,	// (0x00031d63) main_cam5_pane

0x8913,	// (0x0002f015) bg_button_pane_cp019

0x891c,	// (0x0002f01e) bg_button_pane_cp020

0xd07e,	// (0x00033780) main_cset_slider_pane_g7_ParamLimits

0xd07e,	// (0x00033780) main_cset_slider_pane_g7

0xd08a,	// (0x0003378c) main_cset_slider_pane_g8_ParamLimits

0xd08a,	// (0x0003378c) main_cset_slider_pane_g8

0x8a73,	// (0x0002f175) main_cset_slider_pane_g9_ParamLimits

0x8a73,	// (0x0002f175) main_cset_slider_pane_g9

0x8a7f,	// (0x0002f181) main_cset_slider_pane_g10_ParamLimits

0x8a7f,	// (0x0002f181) main_cset_slider_pane_g10

0x8a8b,	// (0x0002f18d) main_cset_slider_pane_g11_ParamLimits

0x8a8b,	// (0x0002f18d) main_cset_slider_pane_g11

0x8a97,	// (0x0002f199) main_cset_slider_pane_g12_ParamLimits

0x8a97,	// (0x0002f199) main_cset_slider_pane_g12

0x8aa3,	// (0x0002f1a5) main_cset_slider_pane_g13_ParamLimits

0x8aa3,	// (0x0002f1a5) main_cset_slider_pane_g13

0x8aaf,	// (0x0002f1b1) main_cset_slider_pane_g14_ParamLimits

0x8aaf,	// (0x0002f1b1) main_cset_slider_pane_g14

0x8abb,	// (0x0002f1bd) main_cset_slider_pane_g15_ParamLimits

0x8abb,	// (0x0002f1bd) main_cset_slider_pane_g15

0xd0d0,	// (0x000337d2) main_cset_slider_pane_t14_ParamLimits

0xd0d0,	// (0x000337d2) main_cset_slider_pane_t14

0xd109,	// (0x0003380b) main_cset_slider_pane_t15_ParamLimits

0xd109,	// (0x0003380b) main_cset_slider_pane_t15

0x8fe9,	// (0x0002f6eb) aid_cam4_burst_size_cell_ParamLimits

0x8fe9,	// (0x0002f6eb) aid_cam4_burst_size_cell

0x9009,	// (0x0002f70b) grid_cam4_burst_pane_ParamLimits

0x9009,	// (0x0002f70b) grid_cam4_burst_pane

0x9041,	// (0x0002f743) linegrid_cam4_burst_pane_ParamLimits

0x9041,	// (0x0002f743) linegrid_cam4_burst_pane

0xd2fb,	// (0x000339fd) scroll_pane_cp30_ParamLimits

0xd2fb,	// (0x000339fd) scroll_pane_cp30

0x9065,	// (0x0002f767) cell_cam4_burst_pane_ParamLimits

0x9065,	// (0x0002f767) cell_cam4_burst_pane

0xd307,	// (0x00033a09) linegrid_cam4_burst_pane_g1_ParamLimits

0xd307,	// (0x00033a09) linegrid_cam4_burst_pane_g1

0x90b2,	// (0x0002f7b4) linegrid_cam4_burst_pane_g2_ParamLimits

0x90b2,	// (0x0002f7b4) linegrid_cam4_burst_pane_g2

0xd314,	// (0x00033a16) linegrid_cam4_burst_pane_g3_ParamLimits

0xd314,	// (0x00033a16) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0003614e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0003614e) linegrid_cam4_burst_pane_g

0x90c3,	// (0x0002f7c5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90c3,	// (0x0002f7c5) linegrid_cam4_burst_pane_g3_copy1

0xd321,	// (0x00033a23) linegrid_cam4_burst_pane_g4_ParamLimits

0xd321,	// (0x00033a23) linegrid_cam4_burst_pane_g4

0x90dd,	// (0x0002f7df) linegrid_cam4_burst_pane_g5_ParamLimits

0x90dd,	// (0x0002f7df) linegrid_cam4_burst_pane_g5

0x90ee,	// (0x0002f7f0) linegrid_cam4_burst_pane_g6_ParamLimits

0x90ee,	// (0x0002f7f0) linegrid_cam4_burst_pane_g6

0xd32e,	// (0x00033a30) linegrid_cam4_burst_pane_g7_ParamLimits

0xd32e,	// (0x00033a30) linegrid_cam4_burst_pane_g7

0x9105,	// (0x0002f807) cell_cam4_burst_pane_g1

0xd347,	// (0x00033a49) main_cam5_pane_t1_ParamLimits

0xd347,	// (0x00033a49) main_cam5_pane_t1

0xd359,	// (0x00033a5b) main_cam5_pane_t2_ParamLimits

0xd359,	// (0x00033a5b) main_cam5_pane_t2

0xd36b,	// (0x00033a6d) main_cam5_pane_t3_ParamLimits

0xd36b,	// (0x00033a6d) main_cam5_pane_t3

0xd37d,	// (0x00033a7f) main_cam5_pane_t4_ParamLimits

0xd37d,	// (0x00033a7f) main_cam5_pane_t4

0xd395,	// (0x00033a97) main_cam5_pane_t5_ParamLimits

0xd395,	// (0x00033a97) main_cam5_pane_t5

0xd3a9,	// (0x00033aab) main_cam5_pane_t6_ParamLimits

0xd3a9,	// (0x00033aab) main_cam5_pane_t6

0xd3bd,	// (0x00033abf) main_cam5_pane_t7_ParamLimits

0xd3bd,	// (0x00033abf) main_cam5_pane_t7

0xd3cf,	// (0x00033ad1) main_cam5_pane_t8_ParamLimits

0xd3cf,	// (0x00033ad1) main_cam5_pane_t8

0xd3eb,	// (0x00033aed) main_cam5_pane_t9_ParamLimits

0xd3eb,	// (0x00033aed) main_cam5_pane_t9

0xd3fd,	// (0x00033aff) main_cam5_pane_t10_ParamLimits

0xd3fd,	// (0x00033aff) main_cam5_pane_t10

0xd40f,	// (0x00033b11) main_cam5_pane_t11_ParamLimits

0xd40f,	// (0x00033b11) main_cam5_pane_t11

0xd421,	// (0x00033b23) main_cam5_pane_t12_ParamLimits

0xd421,	// (0x00033b23) main_cam5_pane_t12

0xd436,	// (0x00033b38) main_cam5_pane_t13_ParamLimits

0xd436,	// (0x00033b38) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0003615a) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0003615a) main_cam5_pane_t

0x0b54,	// (0x00027256) popup_scut_keymap_window_ParamLimits

0x0b54,	// (0x00027256) popup_scut_keymap_window

0x9118,	// (0x0002f81a) aid_size_cell_brow_shortcut

0x50e8,	// (0x0002b7ea) bg_popup_window_pane_cp010

0x9124,	// (0x0002f826) grid_scut_pane

0x9130,	// (0x0002f832) cell_scut_pane_ParamLimits

0x9130,	// (0x0002f832) cell_scut_pane

0x9147,	// (0x0002f849) cell_scut_pane_g1

0xd453,	// (0x00033b55) cell_scut_pane_t1

0xd462,	// (0x00033b64) cell_scut_pane_t2

0x9150,	// (0x0002f852) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00036175) cell_scut_pane_t

0x789e,	// (0x0002dfa0) main_mup3_pane_g8_ParamLimits

0x789e,	// (0x0002dfa0) main_mup3_pane_g8

0x1c5c,	// (0x0002835e) area_vitu2_query_pane_ParamLimits

0x1c5c,	// (0x0002835e) area_vitu2_query_pane

0x8e91,	// (0x0002f593) input_focus_pane_cp08

0xd471,	// (0x00033b73) area_vitu2_query_pane_g1

0x915e,	// (0x0002f860) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0003617c) area_vitu2_query_pane_g

0x916f,	// (0x0002f871) area_vitu2_query_pane_t1_ParamLimits

0x916f,	// (0x0002f871) area_vitu2_query_pane_t1

0x9183,	// (0x0002f885) area_vitu2_query_pane_t2_ParamLimits

0x9183,	// (0x0002f885) area_vitu2_query_pane_t2

0x9197,	// (0x0002f899) area_vitu2_query_pane_t3_ParamLimits

0x9197,	// (0x0002f899) area_vitu2_query_pane_t3

0xd47d,	// (0x00033b7f) area_vitu2_query_pane_t4_ParamLimits

0xd47d,	// (0x00033b7f) area_vitu2_query_pane_t4

0xd4a5,	// (0x00033ba7) area_vitu2_query_pane_t5_ParamLimits

0xd4a5,	// (0x00033ba7) area_vitu2_query_pane_t5

0xd4cd,	// (0x00033bcf) area_vitu2_query_pane_t6_ParamLimits

0xd4cd,	// (0x00033bcf) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00036181) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00036181) area_vitu2_query_pane_t

0x91bf,	// (0x0002f8c1) bg_button_pane_cp018

0x91cd,	// (0x0002f8cf) bg_button_pane_cp021

0x91d9,	// (0x0002f8db) bg_button_pane_cp022

0x91e8,	// (0x0002f8ea) input_focus_pane_cp09

0x4efd,	// (0x0002b5ff) aid_size_touch_mv_arrow_left

0x4f26,	// (0x0002b628) aid_size_touch_mv_arrow_right

0x8ad3,	// (0x0002f1d5) main_cset_slider_pane_g16_ParamLimits

0x8ad3,	// (0x0002f1d5) main_cset_slider_pane_g16

0x8adf,	// (0x0002f1e1) main_cset_slider_pane_g17_ParamLimits

0x8adf,	// (0x0002f1e1) main_cset_slider_pane_g17

0x9105,	// (0x0002f807) cell_cam4_burst_pane_g1_ParamLimits

0xf0ce,	// (0x000357d0) compa_mode_pane

0x8cb1,	// (0x0002f3b3) popup_vtel_slider_window_g3_ParamLimits

0x8cb1,	// (0x0002f3b3) popup_vtel_slider_window_g3

0x8cc8,	// (0x0002f3ca) popup_vtel_slider_window_g4_ParamLimits

0x8cc8,	// (0x0002f3ca) popup_vtel_slider_window_g4

0x8cdf,	// (0x0002f3e1) popup_vtel_slider_window_t1_ParamLimits

0x8cdf,	// (0x0002f3e1) popup_vtel_slider_window_t1

0xb661,	// (0x00031d63) main_cl_pane

0xbc21,	// (0x00032323) popup_imed_adjust2_window_ParamLimits

0xbbf9,	// (0x000322fb) bg_tb_trans_pane_cp05_ParamLimits

0xc610,	// (0x00032d12) popup_imed_adjust2_window_g1_ParamLimits

0xc61f,	// (0x00032d21) popup_imed_adjust2_window_g2_ParamLimits

0xc61f,	// (0x00032d21) popup_imed_adjust2_window_g2

0xc62b,	// (0x00032d2d) popup_imed_adjust2_window_g3_ParamLimits

0xc62b,	// (0x00032d2d) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00035eec) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00035eec) popup_imed_adjust2_window_g

0xc637,	// (0x00032d39) popup_imed_adjust2_window_t1_ParamLimits

0xc64f,	// (0x00032d51) slider_imed_adjust_pane_ParamLimits

0xc663,	// (0x00032d65) slider_imed_adjust_pane_g1_ParamLimits

0xc673,	// (0x00032d75) slider_imed_adjust_pane_g2_ParamLimits

0xc683,	// (0x00032d85) slider_imed_adjust_pane_g3_ParamLimits

0xc694,	// (0x00032d96) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00035ef3) slider_imed_adjust_pane_g_ParamLimits

0x1a19,	// (0x0002811b) aid_touch_area_cam4_ParamLimits

0x1a19,	// (0x0002811b) aid_touch_area_cam4

0xcda5,	// (0x000334a7) battery_pane_cp01

0x1ae8,	// (0x000281ea) main_camera4_pane_g6_ParamLimits

0x1ae8,	// (0x000281ea) main_camera4_pane_g6

0x1b12,	// (0x00028214) main_camera4_pane_t2_ParamLimits

0x1b12,	// (0x00028214) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00035ff6) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00035ff6) main_camera4_pane_t

0x1b33,	// (0x00028235) aid_touch_area_vid4_ParamLimits

0x1b33,	// (0x00028235) aid_touch_area_vid4

0x1b87,	// (0x00028289) main_video4_pane_g5_ParamLimits

0x1b87,	// (0x00028289) main_video4_pane_g5

0x1bac,	// (0x000282ae) vid4_progress_pane_ParamLimits

0x1bac,	// (0x000282ae) vid4_progress_pane

0xd096,	// (0x00033798) main_cset_slider_pane_g18_ParamLimits

0xd096,	// (0x00033798) main_cset_slider_pane_g18

0xd33b,	// (0x00033a3d) cell_cam4_burst_pane_g2_ParamLimits

0xd33b,	// (0x00033a3d) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00036155) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00036155) cell_cam4_burst_pane_g

0x2af5,	// (0x000291f7) bg_cl_pane_ParamLimits

0x2af5,	// (0x000291f7) bg_cl_pane

0x91f7,	// (0x0002f8f9) cl_header_pane_ParamLimits

0x91f7,	// (0x0002f8f9) cl_header_pane

0x920b,	// (0x0002f90d) cl_listscroll_pane_ParamLimits

0x920b,	// (0x0002f90d) cl_listscroll_pane

0xd519,	// (0x00033c1b) bg_cl_pane_g1

0xd521,	// (0x00033c23) bg_cl_pane_g2

0xd529,	// (0x00033c2b) bg_cl_pane_g3

0xd531,	// (0x00033c33) bg_cl_pane_g4

0xd539,	// (0x00033c3b) bg_cl_pane_g5

0xd541,	// (0x00033c43) bg_cl_pane_g6

0xd549,	// (0x00033c4b) bg_cl_pane_g7

0xd551,	// (0x00033c53) bg_cl_pane_g8

0xd559,	// (0x00033c5b) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00036190) bg_cl_pane_g

0x921b,	// (0x0002f91d) aid_height_cl_leading_ParamLimits

0x921b,	// (0x0002f91d) aid_height_cl_leading

0x9227,	// (0x0002f929) aid_height_cl_text_ParamLimits

0x9227,	// (0x0002f929) aid_height_cl_text

0x6ee7,	// (0x0002d5e9) bg_cl_header_pane_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_cl_header_pane

0x9246,	// (0x0002f948) cl_header_pane_g1_ParamLimits

0x9246,	// (0x0002f948) cl_header_pane_g1

0x925c,	// (0x0002f95e) cl_header_pane_t1_ParamLimits

0x925c,	// (0x0002f95e) cl_header_pane_t1

0xd561,	// (0x00033c63) cl_list_pane

0xd069,	// (0x0003376b) hc_scroll_pane_cp01

0x3bb0,	// (0x0002a2b2) bg_cl_header_pane_g1

0xcf4f,	// (0x00033651) bg_cl_header_pane_g2

0x3bd0,	// (0x0002a2d2) bg_cl_header_pane_g3

0xcf5f,	// (0x00033661) bg_cl_header_pane_g4

0xcf57,	// (0x00033659) bg_cl_header_pane_g5

0xd208,	// (0x0003390a) bg_cl_header_pane_g6

0xcf77,	// (0x00033679) bg_cl_header_pane_g7

0xcf7f,	// (0x00033681) bg_cl_header_pane_g8

0xcf6f,	// (0x00033671) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x000361a3) bg_cl_header_pane_g

0x9275,	// (0x0002f977) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9275,	// (0x0002f977) hc_cl_list_double_graphic_heading_pane

0x9286,	// (0x0002f988) hc_cl_list_single_graphic_pane_ParamLimits

0x9286,	// (0x0002f988) hc_cl_list_single_graphic_pane

0x929c,	// (0x0002f99e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x929c,	// (0x0002f99e) hc_cl_list_single_graphic_pane_g1

0x92a8,	// (0x0002f9aa) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x92a8,	// (0x0002f9aa) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x000361b6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x000361b6) hc_cl_list_single_graphic_pane_g

0x92bc,	// (0x0002f9be) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x92bc,	// (0x0002f9be) hc_cl_list_single_graphic_pane_t1

0x929c,	// (0x0002f99e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x929c,	// (0x0002f99e) hc_cl_list_double_graphic_heading_pane_g1

0x92d1,	// (0x0002f9d3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x92d1,	// (0x0002f9d3) hc_cl_list_double_graphic_heading_pane_g2

0x92e5,	// (0x0002f9e7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x92e5,	// (0x0002f9e7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x000361bb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x000361bb) hc_cl_list_double_graphic_heading_pane_g

0x92f9,	// (0x0002f9fb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x92f9,	// (0x0002f9fb) hc_cl_list_double_graphic_heading_pane_t1

0x930e,	// (0x0002fa10) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x930e,	// (0x0002fa10) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x000361c2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x000361c2) hc_cl_list_double_graphic_heading_pane_t

0x207c,	// (0x0002877e) vid4_progress_pane_g1

0x208e,	// (0x00028790) vid4_progress_pane_g2

0x479d,	// (0x0002ae9f) vid4_progress_pane_g3

0xd572,	// (0x00033c74) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x000361c7) vid4_progress_pane_g

0xd590,	// (0x00033c92) vid4_progress_pane_t1

0xd5a5,	// (0x00033ca7) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x000361d2) vid4_progress_pane_t

0xd5d0,	// (0x00033cd2) wait_bar_pane_cp07

0xbef2,	// (0x000325f4) blid_firmament_pane_ParamLimits

0xbf35,	// (0x00032637) popup_blid_sat_info2_window_g1

0xbf59,	// (0x0003265b) popup_blid_sat_info2_window_t3

0xbf67,	// (0x00032669) popup_blid_sat_info2_window_t4

0xbf75,	// (0x00032677) popup_blid_sat_info2_window_t5

0xbf83,	// (0x00032685) popup_blid_sat_info2_window_t6

0xbf93,	// (0x00032695) popup_blid_sat_info2_window_t7

0xbfa1,	// (0x000326a3) popup_blid_sat_info2_window_t8

0xbfaf,	// (0x000326b1) popup_blid_sat_info2_window_t9

0xbfbd,	// (0x000326bf) popup_blid_sat_info2_window_t10

0xc07f,	// (0x00032781) aid_firma_cardinal_ParamLimits

0xc093,	// (0x00032795) blid_firmament_pane_t1_ParamLimits

0xc0aa,	// (0x000327ac) blid_firmament_pane_t2_ParamLimits

0xc0c1,	// (0x000327c3) blid_firmament_pane_t3_ParamLimits

0xc0d8,	// (0x000327da) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00035de5) blid_firmament_pane_t_ParamLimits

0xc0ef,	// (0x000327f1) blid_sat_info_pane_ParamLimits

0xb653,	// (0x00031d55) main_cam_set_pane_ParamLimits

0x80d8,	// (0x0002e7da) aid_size_cell_colour_35_ParamLimits

0x80f8,	// (0x0002e7fa) aid_size_cell_colour_112_ParamLimits

0x8118,	// (0x0002e81a) aid_size_cell_effect_ParamLimits

0xbbf9,	// (0x000322fb) bg_tb_trans_pane_cp02_ParamLimits

0x4717,	// (0x0002ae19) heading_imed_pane_ParamLimits

0x8138,	// (0x0002e83a) listscroll_imed_pane_ParamLimits

0x6623,	// (0x0002cd25) popup_call2_audio_first_window_g5_ParamLimits

0x6623,	// (0x0002cd25) popup_call2_audio_first_window_g5

0x17f6,	// (0x00027ef8) aid_size_touch_image3_arrow_left_ParamLimits

0x17f6,	// (0x00027ef8) aid_size_touch_image3_arrow_left

0x1822,	// (0x00027f24) aid_size_touch_image3_arrow_right_ParamLimits

0x1822,	// (0x00027f24) aid_size_touch_image3_arrow_right

0xd5bb,	// (0x00033cbd) vid4_progress_pane_t3

0x844b,	// (0x0002eb4d) main_hwr_training_symbol_option_pane_ParamLimits

0x844b,	// (0x0002eb4d) main_hwr_training_symbol_option_pane

0xc8fd,	// (0x00032fff) popup_hwr_training_preview_window_ParamLimits

0xc8fd,	// (0x00032fff) popup_hwr_training_preview_window

0x16a9,	// (0x00027dab) hwr_training_navi_pane_g5_ParamLimits

0x16a9,	// (0x00027dab) hwr_training_navi_pane_g5

0xcf3d,	// (0x0003363f) popup_char_count_window

0xb653,	// (0x00031d55) bg_popup_sub_pane_cp20_ParamLimits

0x1fe7,	// (0x000286e9) list_vitu2_match_list_pane_ParamLimits

0x1ff6,	// (0x000286f8) vitu2_page_scroll_pane_ParamLimits

0x1ff6,	// (0x000286f8) vitu2_page_scroll_pane

0xd63c,	// (0x00033d3e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd63c,	// (0x00033d3e) list_single_hwr_training_symbol_option_pane

0xd64f,	// (0x00033d51) list_single_hwr_training_symbol_option_pane_g1

0xd657,	// (0x00033d59) list_single_hwr_training_symbol_option_pane_t1

0xd665,	// (0x00033d67) bg_button_pane_cp023

0xd66e,	// (0x00033d70) bg_button_pane_cp024

0x9323,	// (0x0002fa25) vitu2_page_scroll_pane_g1

0x932b,	// (0x0002fa2d) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x000361d9) vitu2_page_scroll_pane_g

0x9333,	// (0x0002fa35) vitu2_page_scroll_pane_t1

0xd6a1,	// (0x00033da3) popup_char_count_window_g1

0xd6aa,	// (0x00033dac) popup_char_count_window_g2

0xd6b3,	// (0x00033db5) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x000361de) popup_char_count_window_g

0xd6bc,	// (0x00033dbe) popup_char_count_window_t1

0xb661,	// (0x00031d63) main_vded2_pane

0xc5fc,	// (0x00032cfe) aid_size_cell_imed_line

0xc606,	// (0x00032d08) grid_imed_line_width_pane

0xce7d,	// (0x0003357f) vid4_indicators_pane_g4

0xd6ca,	// (0x00033dcc) cell_imed_line_width_pane_ParamLimits

0xd6ca,	// (0x00033dcc) cell_imed_line_width_pane

0xd6de,	// (0x00033de0) cell_imed_line_width_pane_g1

0xbea0,	// (0x000325a2) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x000361e5) cell_imed_line_width_pane_g

0x9342,	// (0x0002fa44) main_vded2_pane_g1_ParamLimits

0x9342,	// (0x0002fa44) main_vded2_pane_g1

0x9358,	// (0x0002fa5a) main_vded2_pane_g2_ParamLimits

0x9358,	// (0x0002fa5a) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x000361ea) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x000361ea) main_vded2_pane_g

0x936a,	// (0x0002fa6c) vded2_slider_pane_ParamLimits

0x936a,	// (0x0002fa6c) vded2_slider_pane

0x937a,	// (0x0002fa7c) aid_size_touch_vded2_end

0x9384,	// (0x0002fa86) aid_size_touch_vded2_playhead

0xd6e7,	// (0x00033de9) aid_size_touch_vded2_start

0xd6ef,	// (0x00033df1) vded2_slider_bg_pane

0xd6f8,	// (0x00033dfa) vded2_slider_pane_g1

0xd701,	// (0x00033e03) vded2_slider_pane_g2

0x938e,	// (0x0002fa90) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x000361ef) vded2_slider_pane_g

0xd709,	// (0x00033e0b) vded2_slider_bg_pane_g1

0xd712,	// (0x00033e14) vded2_slider_bg_pane_g2

0xd71b,	// (0x00033e1d) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x000361f6) vded2_slider_bg_pane_g

0x57ee,	// (0x0002bef0) aid_postcard_touch_down_pane_ParamLimits

0x57ee,	// (0x0002bef0) aid_postcard_touch_down_pane

0x5804,	// (0x0002bf06) aid_postcard_touch_up_pane_ParamLimits

0x5804,	// (0x0002bf06) aid_postcard_touch_up_pane

0xb661,	// (0x00031d63) main_blid2_pane

0xbc07,	// (0x00032309) popup_blid2_search_window

0xf0ce,	// (0x000357d0) blid2_gps_pane

0xf0ce,	// (0x000357d0) blid2_navig_pane

0xf0ce,	// (0x000357d0) blid2_search_pane

0xf0ce,	// (0x000357d0) blid2_tripm_pane

0x9399,	// (0x0002fa9b) blid2_search_pane_g1_ParamLimits

0x9399,	// (0x0002fa9b) blid2_search_pane_g1

0x93b3,	// (0x0002fab5) blid2_search_pane_t1_ParamLimits

0x93b3,	// (0x0002fab5) blid2_search_pane_t1

0x93c5,	// (0x0002fac7) aid_size_cell_blid2_gps_ParamLimits

0x93c5,	// (0x0002fac7) aid_size_cell_blid2_gps

0x93dd,	// (0x0002fadf) blid2_gps_pane_g1_ParamLimits

0x93dd,	// (0x0002fadf) blid2_gps_pane_g1

0x93f1,	// (0x0002faf3) grid_blid2_satellite_pane_ParamLimits

0x93f1,	// (0x0002faf3) grid_blid2_satellite_pane

0x940b,	// (0x0002fb0d) blid2_navig_pane_g1_ParamLimits

0x940b,	// (0x0002fb0d) blid2_navig_pane_g1

0x9417,	// (0x0002fb19) blid2_navig_pane_t1_ParamLimits

0x9417,	// (0x0002fb19) blid2_navig_pane_t1

0x9432,	// (0x0002fb34) blid2_navig_pane_t2_ParamLimits

0x9432,	// (0x0002fb34) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x000361fd) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x000361fd) blid2_navig_pane_t

0x944d,	// (0x0002fb4f) blid2_navig_ring_pane_ParamLimits

0x944d,	// (0x0002fb4f) blid2_navig_ring_pane

0x9466,	// (0x0002fb68) blid2_speed_pane_ParamLimits

0x9466,	// (0x0002fb68) blid2_speed_pane

0x9472,	// (0x0002fb74) blid2_tripm_pane_g1_ParamLimits

0x9472,	// (0x0002fb74) blid2_tripm_pane_g1

0x948b,	// (0x0002fb8d) blid2_tripm_pane_g2_ParamLimits

0x948b,	// (0x0002fb8d) blid2_tripm_pane_g2

0x949f,	// (0x0002fba1) blid2_tripm_pane_g3_ParamLimits

0x949f,	// (0x0002fba1) blid2_tripm_pane_g3

0x94b3,	// (0x0002fbb5) blid2_tripm_pane_g4_ParamLimits

0x94b3,	// (0x0002fbb5) blid2_tripm_pane_g4

0x94c7,	// (0x0002fbc9) blid2_tripm_pane_g5_ParamLimits

0x94c7,	// (0x0002fbc9) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00036202) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00036202) blid2_tripm_pane_g

0x94ed,	// (0x0002fbef) blid2_tripm_pane_t1_ParamLimits

0x94ed,	// (0x0002fbef) blid2_tripm_pane_t1

0x9508,	// (0x0002fc0a) blid2_tripm_pane_t2_ParamLimits

0x9508,	// (0x0002fc0a) blid2_tripm_pane_t2

0x9521,	// (0x0002fc23) blid2_tripm_pane_t3_ParamLimits

0x9521,	// (0x0002fc23) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0003620f) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0003620f) blid2_tripm_pane_t

0x9568,	// (0x0002fc6a) cell_blid2_satellite_pane_ParamLimits

0x9568,	// (0x0002fc6a) cell_blid2_satellite_pane

0x9586,	// (0x0002fc88) cell_blid2_satellite_pane_g1

0xd724,	// (0x00033e26) cell_blid2_satellite_pane_t1

0xc0ff,	// (0x00032801) blid2_speed_pane_g1

0xd732,	// (0x00033e34) blid2_speed_pane_t1

0xd740,	// (0x00033e42) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00036218) blid2_speed_pane_t

0xc0ff,	// (0x00032801) blid2_navig_ring_pane_g1

0x958f,	// (0x0002fc91) blid2_navig_ring_pane_g2

0x9597,	// (0x0002fc99) blid2_navig_ring_pane_g3

0x959f,	// (0x0002fca1) blid2_navig_ring_pane_g4

0x95a7,	// (0x0002fca9) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0003621d) blid2_navig_ring_pane_g

0xf0ce,	// (0x000357d0) bg_popup_window_pane_cp011

0xd74e,	// (0x00033e50) popup_blid2_search_window_g1

0xd756,	// (0x00033e58) popup_blid2_search_window_t1

0xd764,	// (0x00033e66) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00036228) popup_blid2_search_window_t

0x3a7c,	// (0x0002a17e) main_browser_pane_g1

0x2af5,	// (0x000291f7) main_browser_pane_ParamLimits

0xb653,	// (0x00031d55) bg_button_pane_cp011_ParamLimits

0x1f5d,	// (0x0002865f) cell_vitu2_function_pane_g1_ParamLimits

0xbbf9,	// (0x000322fb) bg_popup_sub_pane_cp22_ParamLimits

0x8e91,	// (0x0002f593) input_focus_pane_cp08_ParamLimits

0x8ea8,	// (0x0002f5aa) popup_vitu2_query_button_pane_ParamLimits

0x8ea8,	// (0x0002f5aa) popup_vitu2_query_button_pane

0x8eb9,	// (0x0002f5bb) popup_vitu2_query_input_button_pane

0xd285,	// (0x00033987) popup_vitu2_query_window_g1_ParamLimits

0x8ec3,	// (0x0002f5c5) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00036129) popup_vitu2_query_window_g_ParamLimits

0xf0ce,	// (0x000357d0) bg_button_pane_cp026

0x95af,	// (0x0002fcb1) popup_vitu2_query_input_button_pane_g1

0xf0ce,	// (0x000357d0) bg_button_pane_cp025

0xd772,	// (0x00033e74) popup_vitu2_query_button_pane_t1

0x754d,	// (0x0002dc4f) main_mp3_pane_t6

0x755b,	// (0x0002dc5d) popup_slider_window_cp01

0xcde1,	// (0x000334e3) cam4_battery_pane

0xce3a,	// (0x0003353c) cam4_battery_pane_cp02

0xd56a,	// (0x00033c6c) cam4_battery_pane_cp01

0xd56a,	// (0x00033c6c) cam4_battery_pane_cp03

0xcc50,	// (0x00033352) cam4_battery_pane_g1

0xc0ff,	// (0x00032801) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0003622d) cam4_battery_pane_g

0xbfcb,	// (0x000326cd) popup_blid_sat_info2_window_t11

0x4efd,	// (0x0002b5ff) aid_size_touch_mv_arrow_left_ParamLimits

0x4f26,	// (0x0002b628) aid_size_touch_mv_arrow_right_ParamLimits

0x4f84,	// (0x0002b686) navi_pane_g1_ParamLimits

0x4f90,	// (0x0002b692) navi_pane_g2_ParamLimits

0x4fbe,	// (0x0002b6c0) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00035af7) navi_pane_g_ParamLimits

0x507a,	// (0x0002b77c) navi_pane_mv_t1_ParamLimits

0x8144,	// (0x0002e846) grid_imed_effect_pane_ParamLimits

0x3622,	// (0x00029d24) aid_placing_vt_slider_lsc

0x3632,	// (0x00029d34) aid_placing_vt_slider_prt

0x6ee7,	// (0x0002d5e9) bg_tb_trans_pane_cp01_ParamLimits

0xc28b,	// (0x0003298d) popup_image_details_window_g1_ParamLimits

0xc29e,	// (0x000329a0) popup_image_details_window_g2_ParamLimits

0xc2b3,	// (0x000329b5) popup_image_details_window_g3_ParamLimits

0xc2b3,	// (0x000329b5) popup_image_details_window_g3

0xf728,	// (0x00035e2a) popup_image_details_window_g_ParamLimits

0xc2c7,	// (0x000329c9) popup_image_details_window_t1_ParamLimits

0xc2d9,	// (0x000329db) popup_image_details_window_t2_ParamLimits

0xc2f2,	// (0x000329f4) popup_image_details_window_t3_ParamLimits

0xc306,	// (0x00032a08) popup_image_details_window_t4_ParamLimits

0xc321,	// (0x00032a23) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00035e31) popup_image_details_window_t_ParamLimits

0x9233,	// (0x0002f935) cl_header_name_pane_ParamLimits

0x9233,	// (0x0002f935) cl_header_name_pane

0x95b7,	// (0x0002fcb9) cl_header_name_pane_t1_ParamLimits

0x95b7,	// (0x0002fcb9) cl_header_name_pane_t1

0x95d8,	// (0x0002fcda) cl_header_name_pane_t2_ParamLimits

0x95d8,	// (0x0002fcda) cl_header_name_pane_t2

0x961a,	// (0x0002fd1c) cl_header_name_pane_t3_ParamLimits

0x961a,	// (0x0002fd1c) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00036232) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00036232) cl_header_name_pane_t

0x504b,	// (0x0002b74d) navi_pane_mv_g2_ParamLimits

0xcecb,	// (0x000335cd) field_vitu2_entry_pane_g1_ParamLimits

0xced7,	// (0x000335d9) field_vitu2_entry_pane_g2_ParamLimits

0xcee3,	// (0x000335e5) field_vitu2_entry_pane_g3_ParamLimits

0xcee3,	// (0x000335e5) field_vitu2_entry_pane_g3

0xf926,	// (0x00036028) field_vitu2_entry_pane_g_ParamLimits

0x1dfd,	// (0x000284ff) cell_vitu2_itu_pane_g1_ParamLimits

0x1e0d,	// (0x0002850f) cell_vitu2_itu_pane_g2_ParamLimits

0x1e0d,	// (0x0002850f) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00036034) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00036034) cell_vitu2_itu_pane_g

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp05_ParamLimits

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp05

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp03

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp04

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp10_ParamLimits

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp10

0x91d9,	// (0x0002f8db) bg_vkb2_func_pane_cp08

0x91bf,	// (0x0002f8c1) bg_vkb2_func_pane_cp06

0x91cd,	// (0x0002f8cf) bg_vkb2_func_pane_cp07

0xd677,	// (0x00033d79) bg_vkb2_func_pane_cp11_ParamLimits

0xd677,	// (0x00033d79) bg_vkb2_func_pane_cp11

0xd68c,	// (0x00033d8e) bg_vkb2_func_pane_cp12_ParamLimits

0xd68c,	// (0x00033d8e) bg_vkb2_func_pane_cp12

0xf0ce,	// (0x000357d0) bg_vkb2_func_pane_cp09

0xcf4f,	// (0x00033651) bg_vkb2_func_pane_g1

0x3bd0,	// (0x0002a2d2) bg_vkb2_func_pane_g2

0xcf57,	// (0x00033659) bg_vkb2_func_pane_g3

0xcf5f,	// (0x00033661) bg_vkb2_func_pane_g4

0xd208,	// (0x0003390a) bg_vkb2_func_pane_g5

0xcf77,	// (0x00033679) bg_vkb2_func_pane_g6

0xcf7f,	// (0x00033681) bg_vkb2_func_pane_g7

0xcf6f,	// (0x00033671) bg_vkb2_func_pane_g8

0x3bb0,	// (0x0002a2b2) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00036239) bg_vkb2_func_pane_g

0x94db,	// (0x0002fbdd) blid2_tripm_pane_g6_ParamLimits

0x94db,	// (0x0002fbdd) blid2_tripm_pane_g6

0xcc0a,	// (0x0003330c) mp4_progress_pane_g1

0x9554,	// (0x0002fc56) blid2_tripm_values_pane_ParamLimits

0x9554,	// (0x0002fc56) blid2_tripm_values_pane

0x964b,	// (0x0002fd4d) blid2_tripm_values_pane_t1

0x9659,	// (0x0002fd5b) blid2_tripm_values_pane_t2

0x9667,	// (0x0002fd69) blid2_tripm_values_pane_t3

0x9675,	// (0x0002fd77) blid2_tripm_values_pane_t4

0x9683,	// (0x0002fd85) blid2_tripm_values_pane_t5

0x9691,	// (0x0002fd93) blid2_tripm_values_pane_t6

0x969f,	// (0x0002fda1) blid2_tripm_values_pane_t7

0x96ad,	// (0x0002fdaf) blid2_tripm_values_pane_t8

0x96bb,	// (0x0002fdbd) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0003624c) blid2_tripm_values_pane_t

0x366e,	// (0x00029d70) call_video_pane_t1_ParamLimits

0x368c,	// (0x00029d8e) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00035980) call_video_pane_t_ParamLimits

0x5707,	// (0x0002be09) msg_header_pane_g1_ParamLimits

0x5715,	// (0x0002be17) msg_header_pane_g2_ParamLimits

0x5715,	// (0x0002be17) msg_header_pane_g2

0x0001,

0xf498,	// (0x00035b9a) msg_header_pane_g_ParamLimits

0xf498,	// (0x00035b9a) msg_header_pane_g

0x2af5,	// (0x000291f7) main_clock2_pane_ParamLimits

0x7ecf,	// (0x0002e5d1) grid_clock2_toolbar_pane_ParamLimits

0x7ecf,	// (0x0002e5d1) grid_clock2_toolbar_pane

0x7ecf,	// (0x0002e5d1) listscroll_clock2_pane_ParamLimits

0x7ecf,	// (0x0002e5d1) listscroll_clock2_pane

0x7fb1,	// (0x0002e6b3) main_clock2_pane_t3_ParamLimits

0x7fb1,	// (0x0002e6b3) main_clock2_pane_t3

0x7fd4,	// (0x0002e6d6) main_clock2_pane_t4_ParamLimits

0x7fd4,	// (0x0002e6d6) main_clock2_pane_t4

0xd780,	// (0x00033e82) cell_clock2_toolbar_pane

0xd788,	// (0x00033e8a) cell_clock2_toolbar_pane_cp01

0xd788,	// (0x00033e8a) cell_clock2_toolbar_pane_cp02

0xd790,	// (0x00033e92) cell_clock2_toolbar_pane_cp03

0xd798,	// (0x00033e9a) list_clock2_pane

0x4ca7,	// (0x0002b3a9) scroll_pane_cp10

0xd7a0,	// (0x00033ea2) list_single_clock2_pane_ParamLimits

0xd7a0,	// (0x00033ea2) list_single_clock2_pane

0x50e8,	// (0x0002b7ea) list_highlight_pane_cp08

0xd7ad,	// (0x00033eaf) list_single_clock2_pane_t1

0xd7bb,	// (0x00033ebd) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0003625f) list_single_clock2_pane_t

0xf0ce,	// (0x000357d0) bg_button_pane_cp10

0xd7c9,	// (0x00033ecb) cell_clock2_toolbar_pane_g1

0x0e6a,	// (0x0002756c) aid_main_viewer_pane_g1_ParamLimits

0x0e6a,	// (0x0002756c) aid_main_viewer_pane_g1

0x0e78,	// (0x0002757a) aid_main_viewer_pane_g2_ParamLimits

0x0e78,	// (0x0002757a) aid_main_viewer_pane_g2

0x57a4,	// (0x0002bea6) aid_main_viewer_pane_g3_ParamLimits

0x57a4,	// (0x0002bea6) aid_main_viewer_pane_g3

0x57b3,	// (0x0002beb5) aid_main_viewer_pane_g4_ParamLimits

0x57b3,	// (0x0002beb5) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00035bab) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00035bab) aid_main_viewer_pane_g

0x0eac,	// (0x000275ae) main_calc_pane_ParamLimits

0x0ec0,	// (0x000275c2) main_dialer2_pane_ParamLimits

0xb661,	// (0x00031d63) main_cam6_pane

0xb661,	// (0x00031d63) main_vid6_pane

0x7edb,	// (0x0002e5dd) listscroll_gen_pane_cp06_ParamLimits

0x7edb,	// (0x0002e5dd) listscroll_gen_pane_cp06

0x7ff7,	// (0x0002e6f9) main_clock2_pane_t5_ParamLimits

0x7ff7,	// (0x0002e6f9) main_clock2_pane_t5

0x8051,	// (0x0002e753) aid_call2_pane_cp10_ParamLimits

0x8063,	// (0x0002e765) aid_call_pane_cp10_ParamLimits

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8075,	// (0x0002e777) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8075,	// (0x0002e777) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4e8c,	// (0x0002b58e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00035ee1) popup_clock_analogue_window_cp10_g_ParamLimits

0x8087,	// (0x0002e789) popup_clock_analogue_window_cp10_t1_ParamLimits

0x850a,	// (0x0002ec0c) cell_dialer2_keypad_pane_g2_ParamLimits

0x850a,	// (0x0002ec0c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00035fc7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00035fc7) cell_dialer2_keypad_pane_g

0x8526,	// (0x0002ec28) cell_dialer2_keypad_pane_t1

0x89c6,	// (0x0002f0c8) main_cset_text2_pane_ParamLimits

0x89c6,	// (0x0002f0c8) main_cset_text2_pane

0xd471,	// (0x00033b73) area_vitu2_query_pane_g1_ParamLimits

0x915e,	// (0x0002f860) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0003617c) area_vitu2_query_pane_g_ParamLimits

0xd4f5,	// (0x00033bf7) area_vitu2_query_pane_t7_ParamLimits

0xd4f5,	// (0x00033bf7) area_vitu2_query_pane_t7

0x91bf,	// (0x0002f8c1) bg_button_pane_cp018_ParamLimits

0x91cd,	// (0x0002f8cf) bg_button_pane_cp021_ParamLimits

0x91d9,	// (0x0002f8db) bg_button_pane_cp022_ParamLimits

0x91d9,	// (0x0002f8db) bg_vkb2_func_pane_cp08_ParamLimits

0x91bf,	// (0x0002f8c1) bg_vkb2_func_pane_cp06_ParamLimits

0x91cd,	// (0x0002f8cf) bg_vkb2_func_pane_cp07_ParamLimits

0x91e8,	// (0x0002f8ea) input_focus_pane_cp09_ParamLimits

0xd7d1,	// (0x00033ed3) cam6_autofocus_pane_ParamLimits

0xd7d1,	// (0x00033ed3) cam6_autofocus_pane

0x20a0,	// (0x000287a2) cam6_image_uncrop_pane_ParamLimits

0x20a0,	// (0x000287a2) cam6_image_uncrop_pane

0x20af,	// (0x000287b1) cam6_indi_pane_ParamLimits

0x20af,	// (0x000287b1) cam6_indi_pane

0x20c5,	// (0x000287c7) cam6_mode_pane_ParamLimits

0x20c5,	// (0x000287c7) cam6_mode_pane

0x20d7,	// (0x000287d9) cam6_timer_pane_ParamLimits

0x20d7,	// (0x000287d9) cam6_timer_pane

0x20e3,	// (0x000287e5) cam6_zoom_pane_ParamLimits

0x20e3,	// (0x000287e5) cam6_zoom_pane

0x96c9,	// (0x0002fdcb) cam6_mode_pane_g1_ParamLimits

0x96c9,	// (0x0002fdcb) cam6_mode_pane_g1

0x96d9,	// (0x0002fddb) cam6_mode_pane_g2_ParamLimits

0x96d9,	// (0x0002fddb) cam6_mode_pane_g2

0x96e9,	// (0x0002fdeb) cam6_mode_pane_g3_ParamLimits

0x96e9,	// (0x0002fdeb) cam6_mode_pane_g3

0x96f9,	// (0x0002fdfb) cam6_mode_pane_g4_ParamLimits

0x96f9,	// (0x0002fdfb) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00036264) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00036264) cam6_mode_pane_g

0xd7df,	// (0x00033ee1) bg_tb_trans_pane_cp08_ParamLimits

0xd7df,	// (0x00033ee1) bg_tb_trans_pane_cp08

0xd7ed,	// (0x00033eef) cam6_battery_pane_ParamLimits

0xd7ed,	// (0x00033eef) cam6_battery_pane

0xd803,	// (0x00033f05) cam6_indi_pane_g1_ParamLimits

0xd803,	// (0x00033f05) cam6_indi_pane_g1

0xd815,	// (0x00033f17) cam6_indi_pane_g2_ParamLimits

0xd815,	// (0x00033f17) cam6_indi_pane_g2

0xd827,	// (0x00033f29) cam6_indi_pane_g3_ParamLimits

0xd827,	// (0x00033f29) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0003626d) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0003626d) cam6_indi_pane_g

0xd839,	// (0x00033f3b) cam6_indi_pane_t1_ParamLimits

0xd839,	// (0x00033f3b) cam6_indi_pane_t1

0x9709,	// (0x0002fe0b) cam6_autofocus_pane_g1

0x9711,	// (0x0002fe13) cam6_autofocus_pane_g2

0x9719,	// (0x0002fe1b) cam6_autofocus_pane_g3

0x9721,	// (0x0002fe23) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00036274) cam6_autofocus_pane_g

0xd85f,	// (0x00033f61) cam6_timer_pane_g1

0xd867,	// (0x00033f69) cam6_timer_pane_t1

0xd875,	// (0x00033f77) cam6_zoom_cont_pane

0xd87d,	// (0x00033f7f) cam6_zoom_pane_g1

0xd885,	// (0x00033f87) cam6_zoom_pane_g2

0x9729,	// (0x0002fe2b) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0003627d) cam6_zoom_pane_g

0xc0ff,	// (0x00032801) cam6_battery_pane_g1

0xc0ff,	// (0x00032801) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00035dee) cam6_battery_pane_g

0xd88d,	// (0x00033f8f) cam6_zoom_cont_pane_g1

0xd896,	// (0x00033f98) cam6_zoom_cont_pane_g2

0xd89f,	// (0x00033fa1) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00036284) cam6_zoom_cont_pane_g

0x9746,	// (0x0002fe48) cam6_mode_pane_cp_ParamLimits

0x9746,	// (0x0002fe48) cam6_mode_pane_cp

0x9758,	// (0x0002fe5a) cam6_zoom_pane_cp_ParamLimits

0x9758,	// (0x0002fe5a) cam6_zoom_pane_cp

0x9764,	// (0x0002fe66) vid6_image_uncrop_cif_pane_ParamLimits

0x9764,	// (0x0002fe66) vid6_image_uncrop_cif_pane

0x9774,	// (0x0002fe76) vid6_image_uncrop_nhd_pane_ParamLimits

0x9774,	// (0x0002fe76) vid6_image_uncrop_nhd_pane

0x9783,	// (0x0002fe85) vid6_image_uncrop_vga_pane_ParamLimits

0x9783,	// (0x0002fe85) vid6_image_uncrop_vga_pane

0x9792,	// (0x0002fe94) vid6_image_uncrop_wvga_pane_ParamLimits

0x9792,	// (0x0002fe94) vid6_image_uncrop_wvga_pane

0x97a1,	// (0x0002fea3) vid6_indi_pane_ParamLimits

0x97a1,	// (0x0002fea3) vid6_indi_pane

0xd7df,	// (0x00033ee1) bg_tb_trans_pane_cp09_ParamLimits

0xd7df,	// (0x00033ee1) bg_tb_trans_pane_cp09

0xd8b7,	// (0x00033fb9) cam6_battery_pane_cp_ParamLimits

0xd8b7,	// (0x00033fb9) cam6_battery_pane_cp

0xd8c3,	// (0x00033fc5) vid6_indi_pane_g1_ParamLimits

0xd8c3,	// (0x00033fc5) vid6_indi_pane_g1

0xd8d5,	// (0x00033fd7) vid6_indi_pane_g2_ParamLimits

0xd8d5,	// (0x00033fd7) vid6_indi_pane_g2

0xd8e7,	// (0x00033fe9) vid6_indi_pane_g3_ParamLimits

0xd8e7,	// (0x00033fe9) vid6_indi_pane_g3

0xd8fc,	// (0x00033ffe) vid6_indi_pane_g4_ParamLimits

0xd8fc,	// (0x00033ffe) vid6_indi_pane_g4

0xd911,	// (0x00034013) vid6_indi_pane_g5_ParamLimits

0xd911,	// (0x00034013) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0003628b) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0003628b) vid6_indi_pane_g

0xd92b,	// (0x0003402d) vid6_indi_pane_t1_ParamLimits

0xd92b,	// (0x0003402d) vid6_indi_pane_t1

0xd941,	// (0x00034043) vid6_indi_pane_t2_ParamLimits

0xd941,	// (0x00034043) vid6_indi_pane_t2

0xd969,	// (0x0003406b) vid6_indi_pane_t3_ParamLimits

0xd969,	// (0x0003406b) vid6_indi_pane_t3

0xd991,	// (0x00034093) vid6_indi_pane_t4_ParamLimits

0xd991,	// (0x00034093) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00036296) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00036296) vid6_indi_pane_t

0xd9b5,	// (0x000340b7) wait_bar_pane_cp08

0x97b9,	// (0x0002febb) main_cset_text2_pane_t1_ParamLimits

0x97b9,	// (0x0002febb) main_cset_text2_pane_t1

0x9731,	// (0x0002fe33) listscroll_gen_pane_cp06_t1_ParamLimits

0x9731,	// (0x0002fe33) listscroll_gen_pane_cp06_t1

0xb661,	// (0x00031d63) main_cam6_set_pane

0xcdd3,	// (0x000334d5) bg_tb_trans_pane_cp06_ParamLimits

0xcde9,	// (0x000334eb) cam4_indicators_pane_g1_ParamLimits

0xcdfa,	// (0x000334fc) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00036004) cam4_indicators_pane_g_ParamLimits

0xce18,	// (0x0003351a) cam4_indicators_pane_t1_ParamLimits

0xb653,	// (0x00031d55) bg_tb_trans_pane_cp07_ParamLimits

0xce44,	// (0x00033546) vid4_indicators_pane_g1_ParamLimits

0xce58,	// (0x0003355a) vid4_indicators_pane_g2_ParamLimits

0xce6c,	// (0x0003356e) vid4_indicators_pane_g3_ParamLimits

0xce7d,	// (0x0003357f) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00036016) vid4_indicators_pane_g_ParamLimits

0xce9b,	// (0x0003359d) vid4_indicators_pane_t1_ParamLimits

0x207c,	// (0x0002877e) vid4_progress_pane_g1_ParamLimits

0x208e,	// (0x00028790) vid4_progress_pane_g2_ParamLimits

0x479d,	// (0x0002ae9f) vid4_progress_pane_g3_ParamLimits

0xd572,	// (0x00033c74) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x000361c7) vid4_progress_pane_g_ParamLimits

0xd590,	// (0x00033c92) vid4_progress_pane_t1_ParamLimits

0xd5a5,	// (0x00033ca7) vid4_progress_pane_t2_ParamLimits

0xd5bb,	// (0x00033cbd) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x000361d2) vid4_progress_pane_t_ParamLimits

0xd5d0,	// (0x00033cd2) wait_bar_pane_cp07_ParamLimits

0x97d6,	// (0x0002fed8) main_cam6_set_pane_g2_ParamLimits

0x97d6,	// (0x0002fed8) main_cam6_set_pane_g2

0x97fa,	// (0x0002fefc) main_cset6_listscroll_pane_ParamLimits

0x97fa,	// (0x0002fefc) main_cset6_listscroll_pane

0x981a,	// (0x0002ff1c) main_cset6_slider_pane_ParamLimits

0x981a,	// (0x0002ff1c) main_cset6_slider_pane

0x9830,	// (0x0002ff32) main_cset6_text2_pane_ParamLimits

0x9830,	// (0x0002ff32) main_cset6_text2_pane

0xd9c4,	// (0x000340c6) main_cset6_text_pane

0xd9cc,	// (0x000340ce) main_cset_list_pane_copy1_ParamLimits

0xd9cc,	// (0x000340ce) main_cset_list_pane_copy1

0xd9dc,	// (0x000340de) scroll_pane_cp028_copy1

0x983e,	// (0x0002ff40) cset_list_set_pane_copy1

0x984f,	// (0x0002ff51) aid_position_infowindow_above_copy1

0x9857,	// (0x0002ff59) aid_position_infowindow_below_copy1

0x985f,	// (0x0002ff61) cset_list_set_pane_g1_copy1

0x9867,	// (0x0002ff69) cset_list_set_pane_g3_copy1_ParamLimits

0x9867,	// (0x0002ff69) cset_list_set_pane_g3_copy1

0x9876,	// (0x0002ff78) cset_list_set_pane_t1_copy1_ParamLimits

0x9876,	// (0x0002ff78) cset_list_set_pane_t1_copy1

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp021_copy1_ParamLimits

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp021_copy1

0xd9e5,	// (0x000340e7) cset6_slider_pane_ParamLimits

0xd9e5,	// (0x000340e7) cset6_slider_pane

0xda11,	// (0x00034113) main_cset6_slider_pane_g1_ParamLimits

0xda11,	// (0x00034113) main_cset6_slider_pane_g1

0x988b,	// (0x0002ff8d) main_cset6_slider_pane_g2_ParamLimits

0x988b,	// (0x0002ff8d) main_cset6_slider_pane_g2

0xda39,	// (0x0003413b) main_cset6_slider_pane_g3_ParamLimits

0xda39,	// (0x0003413b) main_cset6_slider_pane_g3

0x98b3,	// (0x0002ffb5) main_cset6_slider_pane_g4_ParamLimits

0x98b3,	// (0x0002ffb5) main_cset6_slider_pane_g4

0x98bf,	// (0x0002ffc1) main_cset6_slider_pane_g5_ParamLimits

0x98bf,	// (0x0002ffc1) main_cset6_slider_pane_g5

0xd07e,	// (0x00033780) main_cset6_slider_pane_g7_ParamLimits

0xd07e,	// (0x00033780) main_cset6_slider_pane_g7

0xd08a,	// (0x0003378c) main_cset6_slider_pane_g8_ParamLimits

0xd08a,	// (0x0003378c) main_cset6_slider_pane_g8

0x8a73,	// (0x0002f175) main_cset6_slider_pane_g9_ParamLimits

0x8a73,	// (0x0002f175) main_cset6_slider_pane_g9

0x8a7f,	// (0x0002f181) main_cset6_slider_pane_g10_ParamLimits

0x8a7f,	// (0x0002f181) main_cset6_slider_pane_g10

0x8a8b,	// (0x0002f18d) main_cset6_slider_pane_g11_ParamLimits

0x8a8b,	// (0x0002f18d) main_cset6_slider_pane_g11

0x8a97,	// (0x0002f199) main_cset6_slider_pane_g12_ParamLimits

0x8a97,	// (0x0002f199) main_cset6_slider_pane_g12

0x8aa3,	// (0x0002f1a5) main_cset6_slider_pane_g13_ParamLimits

0x8aa3,	// (0x0002f1a5) main_cset6_slider_pane_g13

0x8aaf,	// (0x0002f1b1) main_cset6_slider_pane_g14_ParamLimits

0x8aaf,	// (0x0002f1b1) main_cset6_slider_pane_g14

0x98cb,	// (0x0002ffcd) main_cset6_slider_pane_g15_ParamLimits

0x98cb,	// (0x0002ffcd) main_cset6_slider_pane_g15

0x8ad3,	// (0x0002f1d5) main_cset6_slider_pane_g16_ParamLimits

0x8ad3,	// (0x0002f1d5) main_cset6_slider_pane_g16

0x8adf,	// (0x0002f1e1) main_cset6_slider_pane_g17_ParamLimits

0x8adf,	// (0x0002f1e1) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0003629f) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0003629f) main_cset6_slider_pane_g

0xda45,	// (0x00034147) main_cset6_slider_pane_t1_ParamLimits

0xda45,	// (0x00034147) main_cset6_slider_pane_t1

0x98fb,	// (0x0002fffd) main_cset6_slider_pane_t2_ParamLimits

0x98fb,	// (0x0002fffd) main_cset6_slider_pane_t2

0x9926,	// (0x00030028) main_cset6_slider_pane_t3_ParamLimits

0x9926,	// (0x00030028) main_cset6_slider_pane_t3

0x9951,	// (0x00030053) main_cset6_slider_pane_t4_ParamLimits

0x9951,	// (0x00030053) main_cset6_slider_pane_t4

0x997c,	// (0x0003007e) main_cset6_slider_pane_t5_ParamLimits

0x997c,	// (0x0003007e) main_cset6_slider_pane_t5

0xda86,	// (0x00034188) main_cset6_slider_pane_t7_ParamLimits

0xda86,	// (0x00034188) main_cset6_slider_pane_t7

0x99a7,	// (0x000300a9) main_cset6_slider_pane_t8_ParamLimits

0x99a7,	// (0x000300a9) main_cset6_slider_pane_t8

0x99cb,	// (0x000300cd) main_cset6_slider_pane_t9_ParamLimits

0x99cb,	// (0x000300cd) main_cset6_slider_pane_t9

0x99ef,	// (0x000300f1) main_cset6_slider_pane_t10_ParamLimits

0x99ef,	// (0x000300f1) main_cset6_slider_pane_t10

0x9a13,	// (0x00030115) main_cset6_slider_pane_t11_ParamLimits

0x9a13,	// (0x00030115) main_cset6_slider_pane_t11

0xdabc,	// (0x000341be) main_cset6_slider_pane_t14_ParamLimits

0xdabc,	// (0x000341be) main_cset6_slider_pane_t14

0xdaf5,	// (0x000341f7) main_cset6_slider_pane_t15_ParamLimits

0xdaf5,	// (0x000341f7) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x000362c4) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x000362c4) main_cset6_slider_pane_t

0xdb2e,	// (0x00034230) cset_slider_pane_g1_copy1

0xdb37,	// (0x00034239) cset_slider_pane_g2_copy1

0xdb40,	// (0x00034242) cset_slider_pane_g3_copy1

0xf0ce,	// (0x000357d0) bg_popup_sub_pane_cp011_copy1

0xdc1a,	// (0x0003431c) main_cset_text_pane_g1_copy1

0xd299,	// (0x0003399b) main_cset_text_pane_t1_copy1

0xd2a7,	// (0x000339a9) main_cset_text_pane_t2_copy1

0xd2b5,	// (0x000339b7) main_cset_text_pane_t3_copy1

0xd2c3,	// (0x000339c5) main_cset_text_pane_t4_copy1

0xd2d1,	// (0x000339d3) main_cset_text_pane_t5_copy1

0xdc22,	// (0x00034324) main_cset_text_pane_t6_copy1

0xdc30,	// (0x00034332) main_cset_text_pane_t7_copy1

0x97b9,	// (0x0002febb) main_cset_text2_pane_t1_copy1

0xb653,	// (0x00031d55) main_ncimui_pane

0x1102,	// (0x00027804) popup_query_ncimui_window_ParamLimits

0x1102,	// (0x00027804) popup_query_ncimui_window

0xc3d0,	// (0x00032ad2) field_cale_ev2_pane_g4_ParamLimits

0xc3d0,	// (0x00032ad2) field_cale_ev2_pane_g4

0x8494,	// (0x0002eb96) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8494,	// (0x0002eb96) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00035fa2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00035fa2) cell_video_dialer_keypad_pane_g

0x84ac,	// (0x0002ebae) cell_video_dialer_keypad_pane_t1

0xf0ce,	// (0x000357d0) bg_popup_window_pane_cp012

0x4afd,	// (0x0002b1ff) heading_pane_cp06

0xdc5c,	// (0x0003435e) ncim_query_content_pane

0xf0ce,	// (0x000357d0) bg_popup_heading_pane_cp01

0xdc64,	// (0x00034366) ncim_heading_pane_t1

0xdc72,	// (0x00034374) ncim_indicator_popup_pane

0xdc84,	// (0x00034386) ncim_query_button_pane

0xdc98,	// (0x0003439a) ncim_query_content_pane_t1

0xdcaa,	// (0x000343ac) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00036308) ncim_query_content_pane_t

0xdce4,	// (0x000343e6) ncim_query_list_pane

0xdcf6,	// (0x000343f8) ncim_query_popup_pane

0xdc72,	// (0x00034374) ncim_indicator_popup_pane_ParamLimits

0x9b5d,	// (0x0003025f) ncim_query_content_pane_g1_ParamLimits

0x9b5d,	// (0x0003025f) ncim_query_content_pane_g1

0xdc98,	// (0x0003439a) ncim_query_content_pane_t1_ParamLimits

0xdcaa,	// (0x000343ac) ncim_query_content_pane_t2_ParamLimits

0x9b69,	// (0x0003026b) ncim_query_content_pane_t3_ParamLimits

0x9b69,	// (0x0003026b) ncim_query_content_pane_t3

0x9b91,	// (0x00030293) ncim_query_content_pane_t4_ParamLimits

0x9b91,	// (0x00030293) ncim_query_content_pane_t4

0x9bb9,	// (0x000302bb) ncim_query_content_pane_t5_ParamLimits

0x9bb9,	// (0x000302bb) ncim_query_content_pane_t5

0xdcbc,	// (0x000343be) ncim_query_content_pane_t6_ParamLimits

0xdcbc,	// (0x000343be) ncim_query_content_pane_t6

0xfc06,	// (0x00036308) ncim_query_content_pane_t_ParamLimits

0xdce4,	// (0x000343e6) ncim_query_list_pane_ParamLimits

0xdcf6,	// (0x000343f8) ncim_query_popup_pane_ParamLimits

0xdd0a,	// (0x0003440c) wait_bar_pane_cp04

0xf0ce,	// (0x000357d0) input_focus_pane_cp011

0xdd12,	// (0x00034414) ncim_query_popup_pane_t1

0xdd20,	// (0x00034422) ncim_list_query_list_pane_ParamLimits

0xdd20,	// (0x00034422) ncim_list_query_list_pane

0xf0ce,	// (0x000357d0) bg_button_pane_cp027

0xdd2d,	// (0x0003442f) ncim_query_button_pane_g1

0xf0ce,	// (0x000357d0) list_highlight_pane_cp012

0xdd37,	// (0x00034439) ncim_list_query_list_pane_g1

0xdd3f,	// (0x00034441) ncim_list_query_list_pane_t1

0xce09,	// (0x0003350b) cam4_indicators_pane_g3_ParamLimits

0xce09,	// (0x0003350b) cam4_indicators_pane_g3

0xce89,	// (0x0003358b) vid4_indicators_pane_g5_ParamLimits

0xce89,	// (0x0003358b) vid4_indicators_pane_g5

0xd581,	// (0x00033c83) vid4_progress_pane_g5_ParamLimits

0xd581,	// (0x00033c83) vid4_progress_pane_g5

0x9a4b,	// (0x0003014d) main_ncimui_pane_g1

0x9ab1,	// (0x000301b3) ncimui_group_query_pane_ParamLimits

0x9ab1,	// (0x000301b3) ncimui_group_query_pane

0x9af9,	// (0x000301fb) ncimui_list_pane_ParamLimits

0x9af9,	// (0x000301fb) ncimui_list_pane

0x9b20,	// (0x00030222) ncimui_text_pane_ParamLimits

0x9b20,	// (0x00030222) ncimui_text_pane

0x9be1,	// (0x000302e3) ncimui_text_pane_t1_ParamLimits

0x9be1,	// (0x000302e3) ncimui_text_pane_t1

0xdd4d,	// (0x0003444f) ncimui_list_single_graphic_pane_ParamLimits

0xdd4d,	// (0x0003444f) ncimui_list_single_graphic_pane

0x9bff,	// (0x00030301) ncimui_query_pane_ParamLimits

0x9bff,	// (0x00030301) ncimui_query_pane

0xf0ce,	// (0x000357d0) list_highlight_pane_cp013

0xdd5d,	// (0x0003445f) ncim_list_query_list_pane_t1_copy1

0xdd37,	// (0x00034439) ncim_list_single_graphic_pane_g1

0xdd6b,	// (0x0003446d) ncim_query_button_pane_cp01

0xdd77,	// (0x00034479) ncim_query_entry_pane_ParamLimits

0xdd77,	// (0x00034479) ncim_query_entry_pane

0xdd8a,	// (0x0003448c) ncimui_query_pane_g1

0xdd96,	// (0x00034498) ncimui_query_pane_t1_ParamLimits

0xdd96,	// (0x00034498) ncimui_query_pane_t1

0x6ee7,	// (0x0002d5e9) input_focus_pane_cp012

0xddaf,	// (0x000344b1) ncim_query_entry_pane_t1

0x2af5,	// (0x000291f7) main_im_pane_ParamLimits

0xb653,	// (0x00031d55) main_mobtv_pane_ParamLimits

0xb653,	// (0x00031d55) main_mobtv_pane

0x98e3,	// (0x0002ffe5) main_cset6_slider_pane_g18_ParamLimits

0x98e3,	// (0x0002ffe5) main_cset6_slider_pane_g18

0x98ef,	// (0x0002fff1) main_cset6_slider_pane_g19_ParamLimits

0x98ef,	// (0x0002fff1) main_cset6_slider_pane_g19

0xddc1,	// (0x000344c3) bg_main_mobtv_pane_ParamLimits

0xddc1,	// (0x000344c3) bg_main_mobtv_pane

0x9c12,	// (0x00030314) main_mobtv_info_pane

0x9c1b,	// (0x0003031d) main_mobtv_loading_pane_ParamLimits

0x9c1b,	// (0x0003031d) main_mobtv_loading_pane

0xddcf,	// (0x000344d1) main_mobtv_pg_channel_list_pane

0xddd9,	// (0x000344db) main_mobtv_pg_hdr_pane

0x9c28,	// (0x0003032a) main_mobtv_programe_curr_pane_ParamLimits

0x9c28,	// (0x0003032a) main_mobtv_programe_curr_pane

0x9c35,	// (0x00030337) main_mobtv_programe_next_pane_ParamLimits

0x9c35,	// (0x00030337) main_mobtv_programe_next_pane

0xdde2,	// (0x000344e4) popup_mobtv_noti_window

0xc0ff,	// (0x00032801) main_tv_pg_hdr_pane_g1

0xddea,	// (0x000344ec) main_tv_pg_hdr_pane_g2

0xddf2,	// (0x000344f4) main_tv_pg_hdr_pane_g3

0xddfa,	// (0x000344fc) main_tv_pg_hdr_pane_g4

0xde02,	// (0x00034504) main_tv_pg_hdr_pane_g5

0xde0c,	// (0x0003450e) main_tv_pg_hdr_pane_g6

0xde16,	// (0x00034518) main_tv_pg_hdr_pane_g7

0xde20,	// (0x00034522) main_tv_pg_hdr_pane_g8

0xde2a,	// (0x0003452c) main_tv_pg_hdr_pane_g9

0xde34,	// (0x00034536) main_tv_pg_hdr_pane_g10

0xde3e,	// (0x00034540) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00036315) main_tv_pg_hdr_pane_g

0xde48,	// (0x0003454a) main_tv_pg_hdr_pane_t1

0xde56,	// (0x00034558) main_tv_pg_hdr_pane_t2

0xde64,	// (0x00034566) main_tv_pg_hdr_pane_t3

0xde74,	// (0x00034576) main_tv_pg_hdr_pane_t4

0xde84,	// (0x00034586) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0003632c) main_tv_pg_hdr_pane_t

0xde94,	// (0x00034596) single_mobtv_pg_channel_pane_ParamLimits

0xde94,	// (0x00034596) single_mobtv_pg_channel_pane

0xdea6,	// (0x000345a8) single_mobtv_pg_channel_table_pane

0xdeaf,	// (0x000345b1) single_mobtv_pg_channel_thumb_pane

0xdeb8,	// (0x000345ba) single_tv_pg_channel_pane_g1

0xdec1,	// (0x000345c3) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00036337) single_tv_pg_channel_pane_g

0xc36b,	// (0x00032a6d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc36b,	// (0x00032a6d) bg_single_mobtv_pg_channel_thumb_pane

0xdeca,	// (0x000345cc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdeca,	// (0x000345cc) single_mobtv_pg_channel_thumb_pane_g1

0xded8,	// (0x000345da) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xded8,	// (0x000345da) single_mobtv_pg_channel_thumb_pane_g2

0xdee4,	// (0x000345e6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdee4,	// (0x000345e6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0003633c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0003633c) single_mobtv_pg_channel_thumb_pane_g

0xdef0,	// (0x000345f2) single_mobtv_pg_channel_thumb_pane_t1

0xdefe,	// (0x00034600) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00036343) single_mobtv_pg_channel_thumb_pane_t

0xc0ff,	// (0x00032801) bg_single_mobtv_pg_channel_table_pane_g1

0xc0ff,	// (0x00032801) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00035dee) bg_single_mobtv_pg_channel_table_pane_g

0xdf0c,	// (0x0003460e) single_mobtv_pg_channel_table_pane_t1

0xdf1a,	// (0x0003461c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00036348) single_mobtv_pg_channel_table_pane_t

0x9c4a,	// (0x0003034c) main_mobtv_info_pane_g1_ParamLimits

0x9c4a,	// (0x0003034c) main_mobtv_info_pane_g1

0x9c68,	// (0x0003036a) main_mobtv_info_pane_t1_ParamLimits

0x9c68,	// (0x0003036a) main_mobtv_info_pane_t1

0x9ce0,	// (0x000303e2) main_mobtv_info_pane_t2_ParamLimits

0x9ce0,	// (0x000303e2) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00036352) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00036352) main_mobtv_info_pane_t

0x9d6f,	// (0x00030471) wait_bar_pane_cp05

0x9d81,	// (0x00030483) main_mobtv_loading_pane_g1_ParamLimits

0x9d81,	// (0x00030483) main_mobtv_loading_pane_g1

0x9d94,	// (0x00030496) main_mobtv_loading_pane_g2_ParamLimits

0x9d94,	// (0x00030496) main_mobtv_loading_pane_g2

0x9da0,	// (0x000304a2) main_mobtv_loading_pane_g3_ParamLimits

0x9da0,	// (0x000304a2) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00036359) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00036359) main_mobtv_loading_pane_g

0xdf28,	// (0x0003462a) main_mobtv_loading_pane_t1_ParamLimits

0xdf28,	// (0x0003462a) main_mobtv_loading_pane_t1

0xdf40,	// (0x00034642) main_mobtv_loading_pane_t2_ParamLimits

0xdf40,	// (0x00034642) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00036360) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00036360) main_mobtv_loading_pane_t

0x9db3,	// (0x000304b5) wait_bar_pane_cp06_ParamLimits

0x9db3,	// (0x000304b5) wait_bar_pane_cp06

0xdf64,	// (0x00034666) main_mobtv_programe_curr_pane_t1

0xdf72,	// (0x00034674) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00036365) main_mobtv_programe_curr_pane_t

0xdf80,	// (0x00034682) main_mobtv_programe_next_pane_t1

0xdf8e,	// (0x00034690) main_mobtv_programe_next_pane_t2

0xdf9c,	// (0x0003469e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0003636a) main_mobtv_programe_next_pane_t

0xf0ce,	// (0x000357d0) bg_popup_mobtv_noti_window_pane

0xdfaa,	// (0x000346ac) popup_mobtv_noti_window_g1

0xdfb2,	// (0x000346b4) popup_mobtv_noti_window_t1

0xdfc0,	// (0x000346c2) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00036371) popup_mobtv_noti_window_t

0xc0ff,	// (0x00032801) bg_popup_mobtv_noti_window_pane_g1

0xb661,	// (0x00031d63) sc_clock_pane

0xb661,	// (0x00031d63) main_fs_bigclock_pane

0x953e,	// (0x0002fc40) blid2_tripm_pane_t4_ParamLimits

0x953e,	// (0x0002fc40) blid2_tripm_pane_t4

0x9dc2,	// (0x000304c4) sc_clock_pane_g1_ParamLimits

0x9dc2,	// (0x000304c4) sc_clock_pane_g1

0x9dd4,	// (0x000304d6) sc_clock_pane_t1_ParamLimits

0x9dd4,	// (0x000304d6) sc_clock_pane_t1

0x9df6,	// (0x000304f8) sc_clock_pane_t2_ParamLimits

0x9df6,	// (0x000304f8) sc_clock_pane_t2

0x9e0e,	// (0x00030510) sc_clock_pane_t3_ParamLimits

0x9e0e,	// (0x00030510) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00036376) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00036376) sc_clock_pane_t

0xac30,	// (0x00031332) main_fs_bigclock_indicator_pane_ParamLimits

0xac30,	// (0x00031332) main_fs_bigclock_indicator_pane

0xc33b,	// (0x00032a3d) main_fs_bigclock_pane_g1_ParamLimits

0xc33b,	// (0x00032a3d) main_fs_bigclock_pane_g1

0xac3c,	// (0x0003133e) main_fs_bigclock_pane_t1_ParamLimits

0xac3c,	// (0x0003133e) main_fs_bigclock_pane_t1

0xac4e,	// (0x00031350) main_fs_bigclock_pane_t2_ParamLimits

0xac4e,	// (0x00031350) main_fs_bigclock_pane_t2

0xac62,	// (0x00031364) main_fs_bigclock_pane_t3_ParamLimits

0xac62,	// (0x00031364) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00036575) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00036575) main_fs_bigclock_pane_t

0xebfb,	// (0x000352fd) main_fs_bigclock_indicator_pane_g1

0xdc8c,	// (0x0003438e) ncim_query_content_pane_g2_ParamLimits

0xdc8c,	// (0x0003438e) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00036303) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00036303) ncim_query_content_pane_g

0x9e27,	// (0x00030529) sc_clock_pane_t4_ParamLimits

0x9e27,	// (0x00030529) sc_clock_pane_t4

0xb653,	// (0x00031d55) main_radioblah_pane

0xcd2f,	// (0x00033431) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd2f,	// (0x00033431) cell_call4_button_pane_t1_copy1

0x9a63,	// (0x00030165) main_ncimui_pane_t1_ParamLimits

0x9a63,	// (0x00030165) main_ncimui_pane_t1

0x9a7d,	// (0x0003017f) main_ncimui_pane_t2_ParamLimits

0x9a7d,	// (0x0003017f) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x000362fc) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x000362fc) main_ncimui_pane_t

0xe106,	// (0x00034808) main_radioblah_anim_pane_ParamLimits

0xe106,	// (0x00034808) main_radioblah_anim_pane

0xe117,	// (0x00034819) main_radioblah_info_pane_ParamLimits

0xe117,	// (0x00034819) main_radioblah_info_pane

0xe12b,	// (0x0003482d) main_radioblah_pane_t1_ParamLimits

0xe12b,	// (0x0003482d) main_radioblah_pane_t1

0xe147,	// (0x00034849) main_radioblah_pane_t2_ParamLimits

0xe147,	// (0x00034849) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00036397) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00036397) main_radioblah_pane_t

0x9ed5,	// (0x000305d7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ed5,	// (0x000305d7) main_radioblah_rocker_ctrl_pane

0xe18f,	// (0x00034891) main_radioblah_info_pane_t1_ParamLimits

0xe18f,	// (0x00034891) main_radioblah_info_pane_t1

0x9f2d,	// (0x0003062f) main_radioblah_info_pane_t2_ParamLimits

0x9f2d,	// (0x0003062f) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x000363a0) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x000363a0) main_radioblah_info_pane_t

0xc0ff,	// (0x00032801) main_radioblah_rocker_ctrl_pane_g1

0x9fdd,	// (0x000306df) main_radioblah_rocker_ctrl_pane_g2

0x9fe5,	// (0x000306e7) main_radioblah_rocker_ctrl_pane_g3

0x9fed,	// (0x000306ef) main_radioblah_rocker_ctrl_pane_g4

0x9ff5,	// (0x000306f7) main_radioblah_rocker_ctrl_pane_g5

0x9ffd,	// (0x000306ff) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x000363a9) main_radioblah_rocker_ctrl_pane_g

0x97b9,	// (0x0002febb) main_cset_text2_pane_t1_copy1_ParamLimits

0xcdb9,	// (0x000334bb) cam4_image_uncrop_qvga_pane

0xce32,	// (0x00033534) vid4_image_uncrop_qcif_pane

0xd7d1,	// (0x00033ed3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7d1,	// (0x00033ed3) cam6_image_uncrop_qvga_pane

0xd8a7,	// (0x00033fa9) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8a7,	// (0x00033fa9) vid6_image_uncrop_qcif_pane

0xf0ce,	// (0x000357d0) bg_popup_preview_window_pane_cp03

0xdc3e,	// (0x00034340) list_cset_text2_pane

0xdc46,	// (0x00034348) main_cset6_text2_pane_g1

0xdc4e,	// (0x00034350) main_cset6_text2_pane_t1

0xa005,	// (0x00030707) list_cset_text2_pane_t1_ParamLimits

0xa005,	// (0x00030707) list_cset_text2_pane_t1

0xb653,	// (0x00031d55) main_radioblah_pane_ParamLimits

0x9d5b,	// (0x0003045d) main_mobtv_info_pane_t3_ParamLimits

0x9d5b,	// (0x0003045d) main_mobtv_info_pane_t3

0x9ec3,	// (0x000305c5) main_radioblah_pane_g1

0x9efd,	// (0x000305ff) main_radioblah_info_pane_g1

0x9f82,	// (0x00030684) main_radioblah_info_pane_t3_ParamLimits

0x9f82,	// (0x00030684) main_radioblah_info_pane_t3

0x44e3,	// (0x0002abe5) highlight_cell_cale_month_pane_ParamLimits

0x44e3,	// (0x0002abe5) highlight_cell_cale_month_pane

0xb661,	// (0x00031d63) main_phob_fisheye_pane

0xc45f,	// (0x00032b61) scroll_pane_cp0031_ParamLimits

0xc45f,	// (0x00032b61) scroll_pane_cp0031

0xd9b5,	// (0x000340b7) wait_bar_pane_cp08_ParamLimits

0x983e,	// (0x0002ff40) cset_list_set_pane_copy1_ParamLimits

0xe1c9,	// (0x000348cb) highlight_cell_cale_month_pane_g1

0xa01e,	// (0x00030720) highlight_cell_cale_month_pane_t1

0xd561,	// (0x00033c63) list_gen_pane_cp01

0xd069,	// (0x0003376b) scroll_pane_01

0xa02c,	// (0x0003072e) list_single_double_fisheye_pane

0xa035,	// (0x00030737) list_double_fisheye_pane_g1_ParamLimits

0xa035,	// (0x00030737) list_double_fisheye_pane_g1

0xa041,	// (0x00030743) list_double_fisheye_pane_g2_ParamLimits

0xa041,	// (0x00030743) list_double_fisheye_pane_g2

0xa055,	// (0x00030757) list_double_fisheye_pane_g3_ParamLimits

0xa055,	// (0x00030757) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x000363b6) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x000363b6) list_double_fisheye_pane_g

0xa07e,	// (0x00030780) list_double_fisheye_pane_t1_ParamLimits

0xa07e,	// (0x00030780) list_double_fisheye_pane_t1

0xa099,	// (0x0003079b) list_double_fisheye_pane_t2_ParamLimits

0xa099,	// (0x0003079b) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x000363c1) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x000363c1) list_double_fisheye_pane_t

0xb661,	// (0x00031d63) main_call5_pane

0x9e52,	// (0x00030554) sc_swipe_pane_ParamLimits

0x9e52,	// (0x00030554) sc_swipe_pane

0xa0ce,	// (0x000307d0) call5_image_pane_ParamLimits

0xa0ce,	// (0x000307d0) call5_image_pane

0xa0eb,	// (0x000307ed) call5_swipe_1_pane_ParamLimits

0xa0eb,	// (0x000307ed) call5_swipe_1_pane

0xa0fe,	// (0x00030800) call5_swipe_2_pane_ParamLimits

0xa0fe,	// (0x00030800) call5_swipe_2_pane

0xa129,	// (0x0003082b) popup_call5_audio_first_window_ParamLimits

0xa129,	// (0x0003082b) popup_call5_audio_first_window

0xc36b,	// (0x00032a6d) call5_swipe_1_pane_g1_ParamLimits

0xc36b,	// (0x00032a6d) call5_swipe_1_pane_g1

0xe1d1,	// (0x000348d3) call5_swipe_1_pane_g2_ParamLimits

0xe1d1,	// (0x000348d3) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x000363c6) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x000363c6) call5_swipe_1_pane_g

0xe1dd,	// (0x000348df) call5_swipe_1_pane_t1_ParamLimits

0xe1dd,	// (0x000348df) call5_swipe_1_pane_t1

0xc36b,	// (0x00032a6d) call5_swipe_2_pane_g1_ParamLimits

0xc36b,	// (0x00032a6d) call5_swipe_2_pane_g1

0xe1f2,	// (0x000348f4) call5_swipe_2_pane_g2_ParamLimits

0xe1f2,	// (0x000348f4) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x000363cb) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x000363cb) call5_swipe_2_pane_g

0xe1fe,	// (0x00034900) call5_swipe_2_pane_t1_ParamLimits

0xe1fe,	// (0x00034900) call5_swipe_2_pane_t1

0xe213,	// (0x00034915) sc_swipe_pane_g1_ParamLimits

0xe213,	// (0x00034915) sc_swipe_pane_g1

0xe220,	// (0x00034922) sc_swipe_pane_g2_ParamLimits

0xe220,	// (0x00034922) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x000363d0) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x000363d0) sc_swipe_pane_g

0xe22c,	// (0x0003492e) sc_swipe_pane_t1_ParamLimits

0xe22c,	// (0x0003492e) sc_swipe_pane_t1

0xb661,	// (0x00031d63) main_cmail_launcher_pane

0xa13a,	// (0x0003083c) aid_size_cell_cmail_l_ParamLimits

0xa13a,	// (0x0003083c) aid_size_cell_cmail_l

0xa154,	// (0x00030856) grid_cmail_l_pane_ParamLimits

0xa154,	// (0x00030856) grid_cmail_l_pane

0xa16f,	// (0x00030871) cell_cmail_l_pane_ParamLimits

0xa16f,	// (0x00030871) cell_cmail_l_pane

0xa195,	// (0x00030897) cell_cmail_l_pane_g1_ParamLimits

0xa195,	// (0x00030897) cell_cmail_l_pane_g1

0xa1a1,	// (0x000308a3) cell_cmail_l_pane_t1_ParamLimits

0xa1a1,	// (0x000308a3) cell_cmail_l_pane_t1

0xe241,	// (0x00034943) cell_cmail_l_pane_t2_ParamLimits

0xe241,	// (0x00034943) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x000363d5) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x000363d5) cell_cmail_l_pane_t

0x6ee7,	// (0x0002d5e9) grid_highlight_pane_cp018_ParamLimits

0x6ee7,	// (0x0002d5e9) grid_highlight_pane_cp018

0x0a52,	// (0x00027154) main2_pane_ParamLimits

0x0a52,	// (0x00027154) main2_pane

0x2c77,	// (0x00029379) popup_sp_fs_action_menu_bg_pane_g1

0x2c7f,	// (0x00029381) popup_sp_fs_action_menu_bg_pane_g2

0x2c87,	// (0x00029389) popup_sp_fs_action_menu_bg_pane_g3

0x2c8f,	// (0x00029391) popup_sp_fs_action_menu_bg_pane_g4

0x2c97,	// (0x00029399) popup_sp_fs_action_menu_bg_pane_g5

0x2c9f,	// (0x000293a1) popup_sp_fs_action_menu_bg_pane_g6

0x2ca7,	// (0x000293a9) popup_sp_fs_action_menu_bg_pane_g7

0x2caf,	// (0x000293b1) popup_sp_fs_action_menu_bg_pane_g8

0x2cb7,	// (0x000293b9) popup_sp_fs_action_menu_bg_pane_g9

0x2cbf,	// (0x000293c1) popup_sp_fs_action_menu_bg_pane_g10

0x2cbf,	// (0x000293c1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0003589a) popup_sp_fs_action_menu_bg_pane_g

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g3_g1

0x3496,	// (0x00029b98) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_t3_g3_g2

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0003594a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0003594a) list_medium_line_x2_t3_g3_g

0x34ae,	// (0x00029bb0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x34ae,	// (0x00029bb0) list_medium_line_x2_t3_g3_t1

0x34c3,	// (0x00029bc5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x34c3,	// (0x00029bc5) list_medium_line_x2_t3_g3_t2

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00035951) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00035951) list_medium_line_x2_t3_g3_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g2_g1

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00035958) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00035958) list_medium_line_x2_t3_g2_g

0x34ec,	// (0x00029bee) list_medium_line_x2_t3_g2_t1_ParamLimits

0x34ec,	// (0x00029bee) list_medium_line_x2_t3_g2_t1

0x3502,	// (0x00029c04) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3502,	// (0x00029c04) list_medium_line_x2_t3_g2_t2

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0003595d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0003595d) list_medium_line_x2_t3_g2_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t4_g4_g1

0x3514,	// (0x00029c16) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3514,	// (0x00029c16) list_medium_line_x2_t4_g4_g2

0x3496,	// (0x00029b98) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_t4_g4_g3

0x3520,	// (0x00029c22) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3520,	// (0x00029c22) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00035964) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00035964) list_medium_line_x2_t4_g4_g

0x352c,	// (0x00029c2e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x352c,	// (0x00029c2e) list_medium_line_x2_t4_g4_t1

0x3543,	// (0x00029c45) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3543,	// (0x00029c45) list_medium_line_x2_t4_g4_t2

0x3558,	// (0x00029c5a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3558,	// (0x00029c5a) list_medium_line_x2_t4_g4_t3

0x356a,	// (0x00029c6c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x356a,	// (0x00029c6c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0003596d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0003596d) list_medium_line_x2_t4_g4_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g4_g1

0x3514,	// (0x00029c16) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3514,	// (0x00029c16) list_medium_line_x2_t2_g4_g2

0x3496,	// (0x00029b98) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_t2_g4_g3

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000359d4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000359d4) list_medium_line_x2_t2_g4_g

0x4501,	// (0x0002ac03) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4501,	// (0x0002ac03) list_medium_line_x2_t2_g4_t1

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000359dd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000359dd) list_medium_line_x2_t2_g4_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g3_g1

0x3496,	// (0x00029b98) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_t2_g3_g2

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0003594a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0003594a) list_medium_line_x2_t2_g3_g

0x4516,	// (0x0002ac18) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4516,	// (0x0002ac18) list_medium_line_x2_t2_g3_t1

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000359e2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000359e2) list_medium_line_x2_t2_g3_t

0x4858,	// (0x0002af5a) main_sp_fs_list_pane_ParamLimits

0x4858,	// (0x0002af5a) main_sp_fs_list_pane

0x4864,	// (0x0002af66) sp_fs_scroll_pane_ParamLimits

0x4864,	// (0x0002af66) sp_fs_scroll_pane

0x4870,	// (0x0002af72) list_medium_line_x2_t3_t1

0x4880,	// (0x0002af82) list_medium_line_x2_t3_t2

0x488e,	// (0x0002af90) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00035a2d) list_medium_line_x2_t3_t

0x489c,	// (0x0002af9e) list_medium_line_x3_t4_t1

0x48ac,	// (0x0002afae) list_medium_line_x3_t4_t2

0x48ba,	// (0x0002afbc) list_medium_line_x3_t4_t3

0x488e,	// (0x0002af90) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00035a34) list_medium_line_x3_t4_t

0x48c8,	// (0x0002afca) list_medium_line_x4_t5_t1

0x48d8,	// (0x0002afda) list_medium_line_x4_t5_t2

0x48ba,	// (0x0002afbc) list_medium_line_x4_t5_t3

0x48e6,	// (0x0002afe8) list_medium_line_x4_t5_t4

0x488e,	// (0x0002af90) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00035a3d) list_medium_line_x4_t5_t

0x348a,	// (0x00029b8c) list_medium_line_t4_g4_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_t4_g4_g1

0x3520,	// (0x00029c22) list_medium_line_t4_g4_g2_ParamLimits

0x3520,	// (0x00029c22) list_medium_line_t4_g4_g2

0x48f4,	// (0x0002aff6) list_medium_line_t4_g4_g3_ParamLimits

0x48f4,	// (0x0002aff6) list_medium_line_t4_g4_g3

0x34a2,	// (0x00029ba4) list_medium_line_t4_g4_g4_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00035a48) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00035a48) list_medium_line_t4_g4_g

0x4900,	// (0x0002b002) list_medium_line_t4_g4_t1_ParamLimits

0x4900,	// (0x0002b002) list_medium_line_t4_g4_t1

0x4915,	// (0x0002b017) list_medium_line_t4_g4_t2_ParamLimits

0x4915,	// (0x0002b017) list_medium_line_t4_g4_t2

0x492a,	// (0x0002b02c) list_medium_line_t4_g4_t3_ParamLimits

0x492a,	// (0x0002b02c) list_medium_line_t4_g4_t3

0x34d7,	// (0x00029bd9) list_medium_line_t4_g4_t4_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00035a51) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00035a51) list_medium_line_t4_g4_t

0x4c74,	// (0x0002b376) chi_dic_find_pane_g1

0x0ed4,	// (0x000275d6) main_tport_pane

0xd1de,	// (0x000338e0) list_medium_line_plain_t1

0xd230,	// (0x00033932) list_medium_line_t2_g2_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t2_g2_g1

0xd23c,	// (0x0003393e) list_medium_line_t2_g2_g2_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0003610d) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0003610d) list_medium_line_t2_g2_g

0x8d89,	// (0x0002f48b) list_medium_line_t2_g2_t1_ParamLimits

0x8d89,	// (0x0002f48b) list_medium_line_t2_g2_t1

0x8da3,	// (0x0002f4a5) list_medium_line_t2_g2_t2_ParamLimits

0x8da3,	// (0x0002f4a5) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00036112) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00036112) list_medium_line_t2_g2_t

0xd5e2,	// (0x00033ce4) aid_sp_fs_list_icon_a_sm

0xd5ea,	// (0x00033cec) aid_sp_fs_list_icon_d

0xd5f2,	// (0x00033cf4) aid_sp_fs_text_primary

0xd5fb,	// (0x00033cfd) aid_sp_fs_text_secondary

0xd604,	// (0x00033d06) list_medium_line

0xd604,	// (0x00033d06) list_medium_line_g2

0xd604,	// (0x00033d06) list_medium_line_g3

0xd604,	// (0x00033d06) list_medium_line_plain

0xd604,	// (0x00033d06) list_medium_line_plain_t2

0xd604,	// (0x00033d06) list_medium_line_plain_t3

0xd604,	// (0x00033d06) list_medium_line_right_icon

0xd604,	// (0x00033d06) list_medium_line_right_iconx2

0xd604,	// (0x00033d06) list_medium_line_t2

0xd604,	// (0x00033d06) list_medium_line_t2_g2

0xd604,	// (0x00033d06) list_medium_line_t2_g3

0xd604,	// (0x00033d06) list_medium_line_t2_right_icon

0xd604,	// (0x00033d06) list_medium_line_t2_right_iconx2

0xd604,	// (0x00033d06) list_medium_line_t3

0xd604,	// (0x00033d06) list_medium_line_t3_g2

0xd604,	// (0x00033d06) list_medium_line_t3_g3

0xd604,	// (0x00033d06) list_medium_line_t3_right_iconx2

0xd60d,	// (0x00033d0f) list_medium_line_t4_g4

0xd616,	// (0x00033d18) list_medium_line_x2

0xd616,	// (0x00033d18) list_medium_line_x2_t2_g2

0xd616,	// (0x00033d18) list_medium_line_x2_t2_g3

0xd616,	// (0x00033d18) list_medium_line_x2_t2_g4

0xd616,	// (0x00033d18) list_medium_line_x2_t3

0xd616,	// (0x00033d18) list_medium_line_x2_t3_g2

0xd616,	// (0x00033d18) list_medium_line_x2_t3_g3

0xd616,	// (0x00033d18) list_medium_line_x2_t3_g4

0xd616,	// (0x00033d18) list_medium_line_x2_t4_g2

0xd616,	// (0x00033d18) list_medium_line_x2_t4_g4

0xd61f,	// (0x00033d21) list_medium_line_x3

0xd61f,	// (0x00033d21) list_medium_line_x3_t4

0xd61f,	// (0x00033d21) list_medium_line_x3_t4_g4

0xd60d,	// (0x00033d0f) list_medium_line_x4_t4

0xd60d,	// (0x00033d0f) list_medium_line_x4_t4_g7

0xd60d,	// (0x00033d0f) list_medium_line_x4_t5

0xd628,	// (0x00033d2a) list_single_fs_dyc_pane_ParamLimits

0xd628,	// (0x00033d2a) list_single_fs_dyc_pane

0x348a,	// (0x00029b8c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x4_t4_g7_g1

0xdb49,	// (0x0003424b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb49,	// (0x0003424b) list_medium_line_x4_t4_g7_g2

0xdb55,	// (0x00034257) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb55,	// (0x00034257) list_medium_line_x4_t4_g7_g3

0xdb64,	// (0x00034266) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb64,	// (0x00034266) list_medium_line_x4_t4_g7_g4

0xdb70,	// (0x00034272) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb70,	// (0x00034272) list_medium_line_x4_t4_g7_g5

0xdb7f,	// (0x00034281) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdb7f,	// (0x00034281) list_medium_line_x4_t4_g7_g6

0xdb8e,	// (0x00034290) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdb8e,	// (0x00034290) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x000362dd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x000362dd) list_medium_line_x4_t4_g7_g

0xdb9a,	// (0x0003429c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb9a,	// (0x0003429c) list_medium_line_x4_t4_g7_t1

0xdbaf,	// (0x000342b1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdbaf,	// (0x000342b1) list_medium_line_x4_t4_g7_t2

0xdbc4,	// (0x000342c6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdbc4,	// (0x000342c6) list_medium_line_x4_t4_g7_t3

0xdbd9,	// (0x000342db) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdbd9,	// (0x000342db) list_medium_line_x4_t4_g7_t4

0xdbeb,	// (0x000342ed) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdbeb,	// (0x000342ed) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x000362ec) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x000362ec) list_medium_line_x4_t4_g7_t

0xdbfd,	// (0x000342ff) list_single_dyc_row_pane_ParamLimits

0xdbfd,	// (0x000342ff) list_single_dyc_row_pane

0xa0bb,	// (0x000307bd) call5_gesture_pane_ParamLimits

0xa0bb,	// (0x000307bd) call5_gesture_pane

0xa111,	// (0x00030813) call5_windows_pane_ParamLimits

0xa111,	// (0x00030813) call5_windows_pane

0xa1b7,	// (0x000308b9) call5_swipe_1_pane_cp_ParamLimits

0xa1b7,	// (0x000308b9) call5_swipe_1_pane_cp

0xa1c3,	// (0x000308c5) call5_swipe_2_pane_cp_ParamLimits

0xa1c3,	// (0x000308c5) call5_swipe_2_pane_cp

0x50e8,	// (0x0002b7ea) call5_image_pane_cp

0xa1cf,	// (0x000308d1) popup_call5_audio_first_window_cp_ParamLimits

0xa1cf,	// (0x000308d1) popup_call5_audio_first_window_cp

0xe213,	// (0x00034915) call5_swipe_1_pane_g1_cp_ParamLimits

0xe213,	// (0x00034915) call5_swipe_1_pane_g1_cp

0xe253,	// (0x00034955) call5_swipe_1_pane_g2_cp

0xe22c,	// (0x0003492e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe22c,	// (0x0003492e) call5_swipe_1_pane_t1_cp

0xe213,	// (0x00034915) call5_swipe_2_pane_g1_cp_ParamLimits

0xe213,	// (0x00034915) call5_swipe_2_pane_g1_cp

0xe25b,	// (0x0003495d) call5_swipe_2_pane_g2_cp

0xe263,	// (0x00034965) call5_swipe_2_pane_t1_cp_ParamLimits

0xe263,	// (0x00034965) call5_swipe_2_pane_t1_cp

0x6ee7,	// (0x0002d5e9) main_sp_fs_email_pane

0xe278,	// (0x0003497a) main_sp_fs_listscroll_pane_te

0xe281,	// (0x00034983) popup_sp_fs_action_menu_pane_ParamLimits

0xe281,	// (0x00034983) popup_sp_fs_action_menu_pane

0xc0ff,	// (0x00032801) bg_sp_fs_ctrlbar_pane_g1

0xe2c5,	// (0x000349c7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2ce,	// (0x000349d0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2d7,	// (0x000349d9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc0ff,	// (0x00032801) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x000363da) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbee4,	// (0x000325e6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbee4,	// (0x000325e6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2e0,	// (0x000349e2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2e0,	// (0x000349e2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2ec,	// (0x000349ee) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2ec,	// (0x000349ee) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x000363e3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x000363e3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2f8,	// (0x000349fa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2f8,	// (0x000349fa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe312,	// (0x00034a14) list_medium_line_t2_right_icon_g1

0xa1dd,	// (0x000308df) list_medium_line_t2_right_icon_t1

0xa1ed,	// (0x000308ef) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x000363e8) list_medium_line_t2_right_icon_t

0xbbf9,	// (0x000322fb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbbf9,	// (0x000322fb) bg_sp_fs_ctrlbar_pane

0xa24a,	// (0x0003094c) main_sp_fs_ctrlbar_button_pane_cp01

0xa254,	// (0x00030956) main_sp_fs_ctrlbar_ddmenu_pane

0xe352,	// (0x00034a54) main_sp_fs_ctrlbar_pane_g1

0xe35e,	// (0x00034a60) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x000363ed) main_sp_fs_ctrlbar_pane_g

0xe36a,	// (0x00034a6c) main_sp_fs_ctrlbar_pane_t1

0xa25e,	// (0x00030960) main_sp_fs_ctrlbar_pane

0xa282,	// (0x00030984) main_sp_fs_listscroll_pane_te_cp01

0xa2a2,	// (0x000309a4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa2a2,	// (0x000309a4) popup_sp_fs_action_menu_pane_cp01

0x6ee7,	// (0x0002d5e9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_sp_fs_highlight_list_pane_cp01

0xe38f,	// (0x00034a91) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe38f,	// (0x00034a91) sp_fs_action_menu_list_gene_pane_g1

0xe39e,	// (0x00034aa0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe39e,	// (0x00034aa0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x000363f7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x000363f7) sp_fs_action_menu_list_gene_pane_g

0xe3ab,	// (0x00034aad) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ab,	// (0x00034aad) sp_fs_action_menu_list_gene_pane_t1

0xe3c3,	// (0x00034ac5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3c3,	// (0x00034ac5) sp_fs_action_menu_list_gene_pane

0xe3e4,	// (0x00034ae6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3e4,	// (0x00034ae6) popup_sp_fs_action_menu_bg_pane

0xe3f2,	// (0x00034af4) sp_fs_action_menu_list_pane_ParamLimits

0xe3f2,	// (0x00034af4) sp_fs_action_menu_list_pane

0xe414,	// (0x00034b16) sp_fs_scroll_pane_cp01_ParamLimits

0xe414,	// (0x00034b16) sp_fs_scroll_pane_cp01

0xa2d2,	// (0x000309d4) list_medium_line_plain_t2_t1

0xa2e2,	// (0x000309e4) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x000363fc) list_medium_line_plain_t2_t

0xa2f2,	// (0x000309f4) list_medium_line_plain_t3_t1

0xa302,	// (0x00030a04) list_medium_line_plain_t3_t2

0xa310,	// (0x00030a12) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00036401) list_medium_line_plain_t3_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t2_g2_g1

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00035958) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00035958) list_medium_line_x2_t2_g2_g

0x4900,	// (0x0002b002) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4900,	// (0x0002b002) list_medium_line_x2_t2_g2_t1

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00036408) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00036408) list_medium_line_x2_t2_g2_t

0x348a,	// (0x00029b8c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t4_g2_g1

0x34a2,	// (0x00029ba4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x00035958) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x00035958) list_medium_line_x2_t4_g2_g

0xa31e,	// (0x00030a20) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa31e,	// (0x00030a20) list_medium_line_x2_t4_g2_t1

0xa338,	// (0x00030a3a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa338,	// (0x00030a3a) list_medium_line_x2_t4_g2_t2

0xa34d,	// (0x00030a4f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa34d,	// (0x00030a4f) list_medium_line_x2_t4_g2_t3

0x34d7,	// (0x00029bd9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0003640d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0003640d) list_medium_line_x2_t4_g2_t

0xe43a,	// (0x00034b3c) list_medium_line_t3_right_iconx2_g1

0xe312,	// (0x00034a14) list_medium_line_t3_right_iconx2_g2

0xa362,	// (0x00030a64) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00036416) list_medium_line_t3_right_iconx2_g

0xa36c,	// (0x00030a6e) list_medium_line_t3_right_iconx2_t1

0xa37c,	// (0x00030a7e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0003641d) list_medium_line_t3_right_iconx2_t

0x348a,	// (0x00029b8c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x3_t4_g4_g1

0x3496,	// (0x00029b98) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x3_t4_g4_g2

0x3520,	// (0x00029c22) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3520,	// (0x00029c22) list_medium_line_x3_t4_g4_g3

0xe442,	// (0x00034b44) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe442,	// (0x00034b44) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00036422) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00036422) list_medium_line_x3_t4_g4_g

0xa38a,	// (0x00030a8c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa38a,	// (0x00030a8c) list_medium_line_x3_t4_g4_t1

0xa3a1,	// (0x00030aa3) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa3a1,	// (0x00030aa3) list_medium_line_x3_t4_g4_t2

0x4915,	// (0x0002b017) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4915,	// (0x0002b017) list_medium_line_x3_t4_g4_t3

0xe44e,	// (0x00034b50) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe44e,	// (0x00034b50) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0003642b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0003642b) list_medium_line_x3_t4_g4_t

0xa3bc,	// (0x00030abe) list_single_dyc_row_text_pane_t1_ParamLimits

0xa3bc,	// (0x00030abe) list_single_dyc_row_text_pane_t1

0xa405,	// (0x00030b07) list_single_dyc_row_text_pane_t2_ParamLimits

0xa405,	// (0x00030b07) list_single_dyc_row_text_pane_t2

0xe46b,	// (0x00034b6d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe46b,	// (0x00034b6d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00036434) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00036434) list_single_dyc_row_text_pane_t

0xe47d,	// (0x00034b7f) list_single_dyc_row_pane_g1_ParamLimits

0xe47d,	// (0x00034b7f) list_single_dyc_row_pane_g1

0xe489,	// (0x00034b8b) list_single_dyc_row_pane_g2_ParamLimits

0xe489,	// (0x00034b8b) list_single_dyc_row_pane_g2

0xe495,	// (0x00034b97) list_single_dyc_row_pane_g3_ParamLimits

0xe495,	// (0x00034b97) list_single_dyc_row_pane_g3

0xe4a1,	// (0x00034ba3) list_single_dyc_row_pane_g4_ParamLimits

0xe4a1,	// (0x00034ba3) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0003643b) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0003643b) list_single_dyc_row_pane_g

0xe4ad,	// (0x00034baf) list_single_dyc_row_text_pane_ParamLimits

0xe4ad,	// (0x00034baf) list_single_dyc_row_text_pane

0xf0ce,	// (0x000357d0) bg_sp_fs_scroll_pane

0xe4cc,	// (0x00034bce) thumb_sp_fs_scroll_pane

0xd230,	// (0x00033932) list_medium_line_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_g1

0xe4d5,	// (0x00034bd7) list_medium_line_t1_ParamLimits

0xe4d5,	// (0x00034bd7) list_medium_line_t1

0x348a,	// (0x00029b8c) list_medium_line_x2_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_g1

0x3496,	// (0x00029b98) list_medium_line_x2_g2_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00036444) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00036444) list_medium_line_x2_g

0xe4ea,	// (0x00034bec) list_medium_line_x2_t1_ParamLimits

0xe4ea,	// (0x00034bec) list_medium_line_x2_t1

0x348a,	// (0x00029b8c) list_medium_line_x3_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x3_g1

0x3496,	// (0x00029b98) list_medium_line_x3_g2_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00036444) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00036444) list_medium_line_x3_g

0xe4ea,	// (0x00034bec) list_medium_line_x3_t1_ParamLimits

0xe4ea,	// (0x00034bec) list_medium_line_x3_t1

0xe500,	// (0x00034c02) thumb_sp_fs_scroll_pane_g1

0xe509,	// (0x00034c0b) thumb_sp_fs_scroll_pane_g2

0xe512,	// (0x00034c14) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00036449) thumb_sp_fs_scroll_pane_g

0xe500,	// (0x00034c02) bg_sp_fs_scroll_pane_g1

0xe509,	// (0x00034c0b) bg_sp_fs_scroll_pane_g2

0xe512,	// (0x00034c14) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00036449) bg_sp_fs_scroll_pane_g

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x348a,	// (0x00029b8c) list_medium_line_x2_t3_g4_g1

0x3514,	// (0x00029c16) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3514,	// (0x00029c16) list_medium_line_x2_t3_g4_g2

0x3496,	// (0x00029b98) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3496,	// (0x00029b98) list_medium_line_x2_t3_g4_g3

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x34a2,	// (0x00029ba4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000359d4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000359d4) list_medium_line_x2_t3_g4_g

0xa45f,	// (0x00030b61) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa45f,	// (0x00030b61) list_medium_line_x2_t3_g4_t1

0xa479,	// (0x00030b7b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa479,	// (0x00030b7b) list_medium_line_x2_t3_g4_t2

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x34d7,	// (0x00029bd9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00036450) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00036450) list_medium_line_x2_t3_g4_t

0xd230,	// (0x00033932) list_medium_line_g2_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_g2_g1

0xd23c,	// (0x0003393e) list_medium_line_g2_g2_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0003610d) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0003610d) list_medium_line_g2_g

0xe51b,	// (0x00034c1d) list_medium_line_g2_t1_ParamLimits

0xe51b,	// (0x00034c1d) list_medium_line_g2_t1

0xd230,	// (0x00033932) list_medium_line_t3_g2_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t3_g2_g1

0xd23c,	// (0x0003393e) list_medium_line_t3_g2_g2_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0003610d) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0003610d) list_medium_line_t3_g2_g

0xa493,	// (0x00030b95) list_medium_line_t3_g2_t1_ParamLimits

0xa493,	// (0x00030b95) list_medium_line_t3_g2_t1

0xa4ad,	// (0x00030baf) list_medium_line_t3_g2_t2_ParamLimits

0xa4ad,	// (0x00030baf) list_medium_line_t3_g2_t2

0xa4c2,	// (0x00030bc4) list_medium_line_t3_g2_t3_ParamLimits

0xa4c2,	// (0x00030bc4) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00036457) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00036457) list_medium_line_t3_g2_t

0xe312,	// (0x00034a14) list_medium_line_right_icon_g1

0xe530,	// (0x00034c32) list_medium_line_right_icon_t1

0xd230,	// (0x00033932) list_medium_line_t2_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t2_g1

0xa4dc,	// (0x00030bde) list_medium_line_t2_t1_ParamLimits

0xa4dc,	// (0x00030bde) list_medium_line_t2_t1

0xa4f6,	// (0x00030bf8) list_medium_line_t2_t2_ParamLimits

0xa4f6,	// (0x00030bf8) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0003645e) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0003645e) list_medium_line_t2_t

0xd230,	// (0x00033932) list_medium_line_t3_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t3_g1

0xa50f,	// (0x00030c11) list_medium_line_t3_t1_ParamLimits

0xa50f,	// (0x00030c11) list_medium_line_t3_t1

0xa526,	// (0x00030c28) list_medium_line_t3_t2_ParamLimits

0xa526,	// (0x00030c28) list_medium_line_t3_t2

0xa53b,	// (0x00030c3d) list_medium_line_t3_t3_ParamLimits

0xa53b,	// (0x00030c3d) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00036463) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00036463) list_medium_line_t3_t

0xd230,	// (0x00033932) list_medium_line_g3_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_g3_g1

0xe53e,	// (0x00034c40) list_medium_line_g3_g2_ParamLimits

0xe53e,	// (0x00034c40) list_medium_line_g3_g2

0xd23c,	// (0x0003393e) list_medium_line_g3_g3_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0003646a) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0003646a) list_medium_line_g3_g

0xe54a,	// (0x00034c4c) list_medium_line_g3_t1_ParamLimits

0xe54a,	// (0x00034c4c) list_medium_line_g3_t1

0xd230,	// (0x00033932) list_medium_line_t2_g3_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t2_g3_g1

0xe53e,	// (0x00034c40) list_medium_line_t2_g3_g2_ParamLimits

0xe53e,	// (0x00034c40) list_medium_line_t2_g3_g2

0xd23c,	// (0x0003393e) list_medium_line_t2_g3_g3_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0003646a) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0003646a) list_medium_line_t2_g3_g

0xa54d,	// (0x00030c4f) list_medium_line_t2_g3_t1_ParamLimits

0xa54d,	// (0x00030c4f) list_medium_line_t2_g3_t1

0xa567,	// (0x00030c69) list_medium_line_t2_g3_t2_ParamLimits

0xa567,	// (0x00030c69) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00036471) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00036471) list_medium_line_t2_g3_t

0xd230,	// (0x00033932) list_medium_line_t3_g3_g1_ParamLimits

0xd230,	// (0x00033932) list_medium_line_t3_g3_g1

0xe53e,	// (0x00034c40) list_medium_line_t3_g3_g2_ParamLimits

0xe53e,	// (0x00034c40) list_medium_line_t3_g3_g2

0xd23c,	// (0x0003393e) list_medium_line_t3_g3_g3_ParamLimits

0xd23c,	// (0x0003393e) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0003646a) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0003646a) list_medium_line_t3_g3_g

0xa582,	// (0x00030c84) list_medium_line_t3_g3_t1_ParamLimits

0xa582,	// (0x00030c84) list_medium_line_t3_g3_t1

0xa59b,	// (0x00030c9d) list_medium_line_t3_g3_t2_ParamLimits

0xa59b,	// (0x00030c9d) list_medium_line_t3_g3_t2

0xa5b1,	// (0x00030cb3) list_medium_line_t3_g3_t3_ParamLimits

0xa5b1,	// (0x00030cb3) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00036476) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00036476) list_medium_line_t3_g3_t

0xe43a,	// (0x00034b3c) list_medium_line_right_iconx2_g1

0xe312,	// (0x00034a14) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0003647d) list_medium_line_right_iconx2_g

0xe55f,	// (0x00034c61) list_medium_line_right_iconx2_t1

0xe43a,	// (0x00034b3c) list_medium_line_t2_right_iconx2_g1

0xe312,	// (0x00034a14) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0003647d) list_medium_line_t2_right_iconx2_g

0xa5cb,	// (0x00030ccd) list_medium_line_t2_right_iconx2_t1

0xa5db,	// (0x00030cdd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00036482) list_medium_line_t2_right_iconx2_t

0xe56d,	// (0x00034c6f) list_medium_line_x4_t4_t1

0xa5ed,	// (0x00030cef) list_medium_line_x4_t4_t2

0xa5fd,	// (0x00030cff) list_medium_line_x4_t4_t3

0xa60d,	// (0x00030d0f) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00036487) list_medium_line_x4_t4_t

0xa660,	// (0x00030d62) tport_appsw_pane_ParamLimits

0xa660,	// (0x00030d62) tport_appsw_pane

0xa671,	// (0x00030d73) tport_contact_pane_ParamLimits

0xa671,	// (0x00030d73) tport_contact_pane

0xa68a,	// (0x00030d8c) tport_listscroll_pane_ParamLimits

0xa68a,	// (0x00030d8c) tport_listscroll_pane

0xa6a5,	// (0x00030da7) cell_tport_appsw_pane_ParamLimits

0xa6a5,	// (0x00030da7) cell_tport_appsw_pane

0xcee3,	// (0x000335e5) tport_appsw_pane_g1_ParamLimits

0xcee3,	// (0x000335e5) tport_appsw_pane_g1

0xe57b,	// (0x00034c7d) tport_contact_pane_g1

0xdd12,	// (0x00034414) tport_contact_pane_t1

0xe584,	// (0x00034c86) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00036490) tport_contact_pane_t

0xe592,	// (0x00034c94) list_tport_pane

0xe59b,	// (0x00034c9d) scroll_pane_cp_030

0xe5ac,	// (0x00034cae) cell_tport_appsw_pane_g1

0xe5bc,	// (0x00034cbe) cell_tport_appsw_pane_t1

0xf0ce,	// (0x000357d0) grid_highlight_pane_cp019

0xa6e5,	// (0x00030de7) list_tport_double_graphic_pane_ParamLimits

0xa6e5,	// (0x00030de7) list_tport_double_graphic_pane

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp023_ParamLimits

0x6ee7,	// (0x0002d5e9) list_highlight_pane_cp023

0xa6f2,	// (0x00030df4) list_tport_double_graphic_pane_g1_ParamLimits

0xa6f2,	// (0x00030df4) list_tport_double_graphic_pane_g1

0xa6ff,	// (0x00030e01) list_tport_double_graphic_pane_t1_ParamLimits

0xa6ff,	// (0x00030e01) list_tport_double_graphic_pane_t1

0xa714,	// (0x00030e16) list_tport_double_graphic_pane_t2_ParamLimits

0xa714,	// (0x00030e16) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0003649c) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0003649c) list_tport_double_graphic_pane_t

0xf0ce,	// (0x000357d0) main_cale_note_pane

0x1dd5,	// (0x000284d7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1dd5,	// (0x000284d7) cell_vitu2_function_top_wide_pane_cp01

0x9d6f,	// (0x00030471) wait_bar_pane_cp05_ParamLimits

0xf0ce,	// (0x000357d0) listscroll_cmail_pane

0xe5d2,	// (0x00034cd4) list_cmail_pane

0xd1ad,	// (0x000338af) list_cmail_body_pane

0xa730,	// (0x00030e32) list_single_cmail_header_caption_pane

0xa746,	// (0x00030e48) list_single_cmail_header_detail_pane_ParamLimits

0xa746,	// (0x00030e48) list_single_cmail_header_detail_pane

0xa76f,	// (0x00030e71) list_single_cmail_header_caption_pane_t1

0xa77f,	// (0x00030e81) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa77f,	// (0x00030e81) list_single_cmail_header_detail_pane_g1

0xe5f3,	// (0x00034cf5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5f3,	// (0x00034cf5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000364a1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000364a1) list_single_cmail_header_detail_pane_g

0xe60c,	// (0x00034d0e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe60c,	// (0x00034d0e) list_single_cmail_header_detail_pane_t1

0xe642,	// (0x00034d44) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe642,	// (0x00034d44) list_single_cmail_header_editor_pane_bg

0xdec1,	// (0x000345c3) list_cmail_body_pane_g1

0xe654,	// (0x00034d56) list_cmail_body_pane_t1

0xcf4f,	// (0x00033651) list_single_cmail_header_editor_pane_bg_g1

0x3bd0,	// (0x0002a2d2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf5f,	// (0x00033661) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf57,	// (0x00033659) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd208,	// (0x0003390a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf7f,	// (0x00033681) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf6f,	// (0x00033671) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf77,	// (0x00033679) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3bb0,	// (0x0002a2b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa7bd,	// (0x00030ebf) calenote_gesture_pane_ParamLimits

0xa7bd,	// (0x00030ebf) calenote_gesture_pane

0xa7dd,	// (0x00030edf) calenote_window_pane_ParamLimits

0xa7dd,	// (0x00030edf) calenote_window_pane

0xe662,	// (0x00034d64) popup_note_window_cp01

0xa7f9,	// (0x00030efb) calenote_swipe_1_pane_ParamLimits

0xa7f9,	// (0x00030efb) calenote_swipe_1_pane

0xa1c3,	// (0x000308c5) calenote_swipe_2_pane_ParamLimits

0xa1c3,	// (0x000308c5) calenote_swipe_2_pane

0xe213,	// (0x00034915) calenote_swipe_1_pane_g1_ParamLimits

0xe213,	// (0x00034915) calenote_swipe_1_pane_g1

0xe220,	// (0x00034922) calenote_swipe_1_pane_g2_ParamLimits

0xe220,	// (0x00034922) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000363d0) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000363d0) calenote_swipe_1_pane_g

0xe674,	// (0x00034d76) calenote_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x00034d76) calenote_swipe_1_pane_t1

0xe213,	// (0x00034915) calenote_swipe_2_pane_g1_ParamLimits

0xe213,	// (0x00034915) calenote_swipe_2_pane_g1

0xe693,	// (0x00034d95) calenote_swipe_2_pane_g2_ParamLimits

0xe693,	// (0x00034d95) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000364ad) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000364ad) calenote_swipe_2_pane_g

0xe69f,	// (0x00034da1) calenote_swipe_2_pane_t1_ParamLimits

0xe69f,	// (0x00034da1) calenote_swipe_2_pane_t1

0xf0ce,	// (0x000357d0) main_mup_navstr_pane

0x7b77,	// (0x0002e279) main_mup3_pane_t7_ParamLimits

0x7b77,	// (0x0002e279) main_mup3_pane_t7

0xca66,	// (0x00033168) main_mp4_pane_g6_ParamLimits

0xca66,	// (0x00033168) main_mp4_pane_g6

0xcc98,	// (0x0003339a) main_image3_pane_t4_ParamLimits

0xcc98,	// (0x0003339a) main_image3_pane_t4

0xa80e,	// (0x00030f10) popup_navstr_preview_pane_ParamLimits

0xa80e,	// (0x00030f10) popup_navstr_preview_pane

0xa822,	// (0x00030f24) scroll_navstr_pane_ParamLimits

0xa822,	// (0x00030f24) scroll_navstr_pane

0xf0ce,	// (0x000357d0) bg_popup_preview_window_pane_cp04

0xe6c6,	// (0x00034dc8) popup_navstr_preview_pane_t1

0xa836,	// (0x00030f38) scroll_navstr_pane_g1_ParamLimits

0xa836,	// (0x00030f38) scroll_navstr_pane_g1

0xa84a,	// (0x00030f4c) scroll_navstr_pane_t1_ParamLimits

0xa84a,	// (0x00030f4c) scroll_navstr_pane_t1

0xe66b,	// (0x00034d6d) bg_button_pane_cp014

0xe66b,	// (0x00034d6d) bg_button_pane_cp030

0xa061,	// (0x00030763) list_double_fisheye_pane_g4_ParamLimits

0xa061,	// (0x00030763) list_double_fisheye_pane_g4

0xa06d,	// (0x0003076f) list_double_fisheye_pane_g5_ParamLimits

0xa06d,	// (0x0003076f) list_double_fisheye_pane_g5

0xe5da,	// (0x00034cdc) sp_fs_scroll_pane_cp03

0xe352,	// (0x00034a54) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe35e,	// (0x00034a60) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x000363ed) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe36a,	// (0x00034a6c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa726,	// (0x00030e28) sp_fs_scroll_pane_cp02

0x2d22,	// (0x00029424) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2d22,	// (0x00029424) popup_sp_fs_calendar_preview_list_single_pane

0xf0ce,	// (0x000357d0) main_cam6_pano_pane

0xb653,	// (0x00031d55) main_mup3_pane_ParamLimits

0xf0ce,	// (0x000357d0) main_phacti_pane

0x9c42,	// (0x00030344) bg_button_pane_cp11

0x9c5c,	// (0x0003035e) main_mobtv_info_pane_g2_ParamLimits

0x9c5c,	// (0x0003035e) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0003634d) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0003634d) main_mobtv_info_pane_g

0x9e39,	// (0x0003053b) sc_clock_pane_t5_ParamLimits

0x9e39,	// (0x0003053b) sc_clock_pane_t5

0x9ec3,	// (0x000305c5) main_radioblah_pane_g1_ParamLimits

0xe15f,	// (0x00034861) main_radioblah_pane_t3_ParamLimits

0xe15f,	// (0x00034861) main_radioblah_pane_t3

0xe177,	// (0x00034879) main_radioblah_pane_t4_ParamLimits

0xe177,	// (0x00034879) main_radioblah_pane_t4

0x9eeb,	// (0x000305ed) main_radioblah_text_pane_ParamLimits

0x9eeb,	// (0x000305ed) main_radioblah_text_pane

0x9efd,	// (0x000305ff) main_radioblah_info_pane_g1_ParamLimits

0x9f96,	// (0x00030698) main_radioblah_info_pane_t4_ParamLimits

0x9f96,	// (0x00030698) main_radioblah_info_pane_t4

0x6ee7,	// (0x0002d5e9) main_sp_fs_calendar_pane

0xa861,	// (0x00030f63) main_phacti_pane_g1

0xa869,	// (0x00030f6b) phacti_note_pane_ParamLimits

0xa869,	// (0x00030f6b) phacti_note_pane

0xe6dd,	// (0x00034ddf) phacti_term_pane_ParamLimits

0xe6dd,	// (0x00034ddf) phacti_term_pane

0xe6f2,	// (0x00034df4) phacti_note_pane_t1_ParamLimits

0xe6f2,	// (0x00034df4) phacti_note_pane_t1

0xe709,	// (0x00034e0b) phacti_term_pane_g1

0xe711,	// (0x00034e13) phacti_term_pane_t1_ParamLimits

0xe711,	// (0x00034e13) phacti_term_pane_t1

0xe73b,	// (0x00034e3d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3482,	// (0x00029b84) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000364b7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe743,	// (0x00034e45) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe743,	// (0x00034e45) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe758,	// (0x00034e5a) aid_popup_sp_fs_bg_corner_pane

0xc0ff,	// (0x00032801) popup_sp_fs_calendar_preview_bg_pane_g1

0xf0ce,	// (0x000357d0) popup_sp_fs_calendar_preview_bg_pane

0xe760,	// (0x00034e62) popup_sp_fs_calendar_preview_list_pane

0x6ee7,	// (0x0002d5e9) bg_main_sp_fs_cale_pane_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_main_sp_fs_cale_pane

0xe771,	// (0x00034e73) listscroll_cale_mrui_pane_ParamLimits

0xe771,	// (0x00034e73) listscroll_cale_mrui_pane

0xe785,	// (0x00034e87) listscroll_sp_fs_schedule_track_pane

0xe78e,	// (0x00034e90) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe78e,	// (0x00034e90) main_sp_fs_ctrlbar_pane_cp01

0xe79f,	// (0x00034ea1) main_sp_fs_ribbon_pane

0xe7a7,	// (0x00034ea9) popup_sp_fs_cale_preview_window

0xa8ca,	// (0x00030fcc) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa8ca,	// (0x00030fcc) list_single_sp_fs_schedule_track_pane

0x6ee7,	// (0x0002d5e9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_sp_fs_highlight_list_pane_cp03

0xa8dc,	// (0x00030fde) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa8dc,	// (0x00030fde) list_single_sp_fs_schedule_track_pane_g1

0xa8e8,	// (0x00030fea) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa8e8,	// (0x00030fea) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000364bc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000364bc) list_single_sp_fs_schedule_track_pane_g

0xa8f4,	// (0x00030ff6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa8f4,	// (0x00030ff6) list_single_sp_fs_schedule_track_pane_t1

0xa90e,	// (0x00031010) sp_fs_schedule_track_pane_ParamLimits

0xa90e,	// (0x00031010) sp_fs_schedule_track_pane

0xe7b9,	// (0x00034ebb) sp_fs_schedule_track_pane_g1

0xe7c1,	// (0x00034ec3) sp_fs_schedule_track_pane_g2

0xe7c9,	// (0x00034ecb) sp_fs_schedule_track_pane_g3

0xe7d1,	// (0x00034ed3) sp_fs_schedule_track_pane_g4

0xe7d9,	// (0x00034edb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000364c1) sp_fs_schedule_track_pane_g

0xcf4f,	// (0x00033651) bg_sp_fs_schedule_viewer_highlight_g1

0x3bd0,	// (0x0002a2d2) bg_sp_fs_schedule_viewer_highlight_g2

0xcf57,	// (0x00033659) bg_sp_fs_schedule_viewer_highlight_g3

0xcf5f,	// (0x00033661) bg_sp_fs_schedule_viewer_highlight_g4

0xd208,	// (0x0003390a) bg_sp_fs_schedule_viewer_highlight_g5

0xcf6f,	// (0x00033671) bg_sp_fs_schedule_viewer_highlight_g6

0xcf77,	// (0x00033679) bg_sp_fs_schedule_viewer_highlight_g7

0xcf7f,	// (0x00033681) bg_sp_fs_schedule_viewer_highlight_g8

0x3bb0,	// (0x0002a2b2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000364cc) bg_sp_fs_schedule_viewer_highlight_g

0xf0ce,	// (0x000357d0) bg_main_sp_fs_ribbon_pane

0xa91f,	// (0x00031021) main_sp_fs_ribbon_pane_g1

0xe7e1,	// (0x00034ee3) main_sp_fs_ribbon_pane_t1

0xa928,	// (0x0003102a) main_sp_fs_ribbon_pane_t2

0xe7f0,	// (0x00034ef2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000364df) main_sp_fs_ribbon_pane_t

0xe7ff,	// (0x00034f01) main_sp_fs_ribbon_scheduler_pane

0xe807,	// (0x00034f09) bg_main_sp_fs_ribbon_pane_g1

0xe810,	// (0x00034f12) bg_main_sp_fs_ribbon_pane_g2

0xe819,	// (0x00034f1b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000364e6) bg_main_sp_fs_ribbon_pane_g

0xe821,	// (0x00034f23) main_sp_fs_ribbon_scheduler_pane_g1

0xe82a,	// (0x00034f2c) main_sp_fs_ribbon_scheduler_pane_g2

0xe833,	// (0x00034f35) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000364ed) main_sp_fs_ribbon_scheduler_pane_g

0xe83c,	// (0x00034f3e) list_cale_mrui_pane

0xa937,	// (0x00031039) sp_fs_scroll_pane_cp07_ParamLimits

0xa937,	// (0x00031039) sp_fs_scroll_pane_cp07

0xa94b,	// (0x0003104d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa94b,	// (0x0003104d) bg_sp_fs_schedule_viewer_highlight

0xe845,	// (0x00034f47) list_single_sp_fs_schedule_track_pane_cp01

0xe84d,	// (0x00034f4f) list_sp_fs_schedule_track_pane

0xe855,	// (0x00034f57) sp_fs_scroll_pane_cp06_ParamLimits

0xe855,	// (0x00034f57) sp_fs_scroll_pane_cp06

0xc0ff,	// (0x00032801) bgmain_sp_fs_calendar_pane_g1

0xa95b,	// (0x0003105d) list_single_cale_mrui_pane_ParamLimits

0xa95b,	// (0x0003105d) list_single_cale_mrui_pane

0xe867,	// (0x00034f69) list_single_cale_mrui_row_pane_ParamLimits

0xe867,	// (0x00034f69) list_single_cale_mrui_row_pane

0xe874,	// (0x00034f76) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe874,	// (0x00034f76) list_single_cale_mrui_row_pane_g1

0xe8b9,	// (0x00034fbb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8b9,	// (0x00034fbb) list_single_cale_mrui_row_pane_t1

0xa97b,	// (0x0003107d) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa97b,	// (0x0003107d) list_single_cale_mrui_row_pane_t2

0xe8cb,	// (0x00034fcd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8cb,	// (0x00034fcd) list_single_cale_mrui_row_pane_t3

0xe8fa,	// (0x00034ffc) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8fa,	// (0x00034ffc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000364fb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000364fb) list_single_cale_mrui_row_pane_t

0xa9e3,	// (0x000310e5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa9e3,	// (0x000310e5) list_single_cmail_header_editor_pane_bg_cp01

0xaa09,	// (0x0003110b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xaa09,	// (0x0003110b) list_single_cmail_header_editor_pane_bg_cp02

0xaa29,	// (0x0003112b) main_radioblah_text_pane_t1_ParamLimits

0xaa29,	// (0x0003112b) main_radioblah_text_pane_t1

0xe929,	// (0x0003502b) cam6_indi_pane_cp01

0xe931,	// (0x00035033) cam6_mode_pane_cp01

0xe939,	// (0x0003503b) cam6_pano_pane

0xe942,	// (0x00035044) cam6_zoom_pane_cp01

0xe94a,	// (0x0003504c) cam6_pano_image_pane

0xe955,	// (0x00035057) cam6_pano_pane_g1

0xdec1,	// (0x000345c3) cam6_pano_pane_g2

0xe95e,	// (0x00035060) cam6_pano_pane_g3

0xe967,	// (0x00035069) cam6_pano_pane_g4

0xc6ad,	// (0x00032daf) cam6_pano_pane_g5

0xe970,	// (0x00035072) cam6_pano_pane_g6

0xe97a,	// (0x0003507c) cam6_pano_pane_g7

0xe982,	// (0x00035084) cam6_pano_pane_g8

0xe98b,	// (0x0003508d) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00036504) cam6_pano_pane_g

0xf0ce,	// (0x000357d0) main_browser_tag_pane

0xe6be,	// (0x00034dc0) grid_navstr_albumart_pane

0xe996,	// (0x00035098) cell_navstr_albumart_pane_ParamLimits

0xe996,	// (0x00035098) cell_navstr_albumart_pane

0xe9b9,	// (0x000350bb) cell_navstr_albumart_pane_g1

0xba16,	// (0x00032118) cell_navstr_albumart_pane_g2

0xba26,	// (0x00032128) cell_navstr_albumart_pane_g3

0xba1e,	// (0x00032120) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00036517) cell_navstr_albumart_pane_g

0xaa43,	// (0x00031145) bt_list_pane_ParamLimits

0xaa43,	// (0x00031145) bt_list_pane

0xaa57,	// (0x00031159) bt_list_pane_t1

0xaa66,	// (0x00031168) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00036520) bt_list_pane_t

0xf0ce,	// (0x000357d0) main_cale_prevew_pane

0xaa75,	// (0x00031177) popup_cale_preview_window_ParamLimits

0xaa75,	// (0x00031177) popup_cale_preview_window

0x6ee7,	// (0x0002d5e9) bg_popup_preview_window_pane_cp05_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_popup_preview_window_pane_cp05

0xe9c1,	// (0x000350c3) list_cale_preview_pane_ParamLimits

0xe9c1,	// (0x000350c3) list_cale_preview_pane

0xaa90,	// (0x00031192) list_double_cale_preview_pane_ParamLimits

0xaa90,	// (0x00031192) list_double_cale_preview_pane

0xaaa2,	// (0x000311a4) list_single_cale_preview_pane_ParamLimits

0xaaa2,	// (0x000311a4) list_single_cale_preview_pane

0xaab8,	// (0x000311ba) list_single_cale_preview_pane_g1

0xaac0,	// (0x000311c2) list_single_cale_preview_pane_t1_ParamLimits

0xaac0,	// (0x000311c2) list_single_cale_preview_pane_t1

0xaad5,	// (0x000311d7) list_double_cale_preview_pane_g1

0xaadd,	// (0x000311df) list_double_cale_preview_pane_t1_ParamLimits

0xaadd,	// (0x000311df) list_double_cale_preview_pane_t1

0xaaf2,	// (0x000311f4) list_double_cale_preview_pane_t2_ParamLimits

0xaaf2,	// (0x000311f4) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00036525) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00036525) list_double_cale_preview_pane_t

0xf0ce,	// (0x000357d0) main_ezdial_pane

0x6ee7,	// (0x0002d5e9) main_sp_fs_email_pane_ParamLimits

0xa1ff,	// (0x00030901) cmail_ddmenu_btn01_pane_ParamLimits

0xa1ff,	// (0x00030901) cmail_ddmenu_btn01_pane

0xa212,	// (0x00030914) cmail_ddmenu_btn02_pane_ParamLimits

0xa212,	// (0x00030914) cmail_ddmenu_btn02_pane

0xa235,	// (0x00030937) cmail_ddmenu_btn03_pane_ParamLimits

0xa235,	// (0x00030937) cmail_ddmenu_btn03_pane

0xa25e,	// (0x00030960) main_sp_fs_ctrlbar_pane_ParamLimits

0xa282,	// (0x00030984) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd1ad,	// (0x000338af) list_cmail_body_pane_ParamLimits

0xe5ea,	// (0x00034cec) bg_button_pane_cp12

0xe5ff,	// (0x00034d01) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5ff,	// (0x00034d01) list_single_cmail_header_detail_pane_g3

0xa797,	// (0x00030e99) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa797,	// (0x00030e99) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000364a8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000364a8) list_single_cmail_header_detail_pane_t

0xe726,	// (0x00034e28) phacti_term_pane_t2_ParamLimits

0xe726,	// (0x00034e28) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000364b2) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000364b2) phacti_term_pane_t

0xe9cd,	// (0x000350cf) aid_size_list_single_double

0xab0a,	// (0x0003120c) popup_ezdial_listscroll_window

0xab26,	// (0x00031228) popup_number_entry_window_cp01

0x50e8,	// (0x0002b7ea) bg_popup_call_pane_cp09

0xe9d9,	// (0x000350db) ezdial_list_pane

0xe9e1,	// (0x000350e3) scroll_pane_cp23

0xbbf9,	// (0x000322fb) bg_button_pane_cp028_ParamLimits

0xbbf9,	// (0x000322fb) bg_button_pane_cp028

0xab34,	// (0x00031236) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xab34,	// (0x00031236) cmail_ddmenu_btn01_pane_g1

0xab43,	// (0x00031245) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xab43,	// (0x00031245) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0003652a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0003652a) cmail_ddmenu_btn01_pane_g

0xe9e9,	// (0x000350eb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e9,	// (0x000350eb) cmail_ddmenu_btn01_pane_t1

0xbbf9,	// (0x000322fb) bg_button_pane_cp029_ParamLimits

0xbbf9,	// (0x000322fb) bg_button_pane_cp029

0xab53,	// (0x00031255) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xab53,	// (0x00031255) cmail_ddmenu_btn02_pane_g1

0xab6e,	// (0x00031270) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xab6e,	// (0x00031270) cmail_ddmenu_btn02_pane_t1

0x6ee7,	// (0x0002d5e9) bg_button_pane_cp031_ParamLimits

0x6ee7,	// (0x0002d5e9) bg_button_pane_cp031

0xab53,	// (0x00031255) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xab53,	// (0x00031255) cmail_ddmenu_btn03_pane_g1

0xab6e,	// (0x00031270) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xab6e,	// (0x00031270) cmail_ddmenu_btn03_pane_t1

0x8526,	// (0x0002ec28) cell_dialer2_keypad_pane_t1_ParamLimits

0x8540,	// (0x0002ec42) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8540,	// (0x0002ec42) cell_dialer2_keypad_pane_t1_copy1

0x9aa9,	// (0x000301ab) ncimui_group_button_pane

0x6ee7,	// (0x0002d5e9) main_sp_fs_calendar_pane_ParamLimits

0xa730,	// (0x00030e32) list_single_cmail_header_caption_pane_ParamLimits

0xe768,	// (0x00034e6a) aid_recal_txt_sm_pane

0xf0ce,	// (0x000357d0) mian_recal_day_pane

0xe7a7,	// (0x00034ea9) popup_sp_fs_cale_preview_window_ParamLimits

0xf0ce,	// (0x000357d0) list_recal_day_pane

0xea21,	// (0x00035123) list_single_recal_day_pane_ParamLimits

0xea21,	// (0x00035123) list_single_recal_day_pane

0xea33,	// (0x00035135) list_single_recal_day_pane_g1_ParamLimits

0xea33,	// (0x00035135) list_single_recal_day_pane_g1

0xea3f,	// (0x00035141) list_single_recal_day_pane_g2_ParamLimits

0xea3f,	// (0x00035141) list_single_recal_day_pane_g2

0xea4f,	// (0x00035151) list_single_recal_day_pane_g3_ParamLimits

0xea4f,	// (0x00035151) list_single_recal_day_pane_g3

0xab95,	// (0x00031297) list_single_recal_day_pane_g4_ParamLimits

0xab95,	// (0x00031297) list_single_recal_day_pane_g4

0xea5b,	// (0x0003515d) list_single_recal_day_pane_g5_ParamLimits

0xea5b,	// (0x0003515d) list_single_recal_day_pane_g5

0xea6b,	// (0x0003516d) list_single_recal_day_pane_g6_ParamLimits

0xea6b,	// (0x0003516d) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00036539) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00036539) list_single_recal_day_pane_g

0xea82,	// (0x00035184) list_single_recal_day_pane_t1

0xea94,	// (0x00035196) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00036544) list_single_recal_day_pane_t

0xabb5,	// (0x000312b7) ncimui_query_button_pane_ParamLimits

0xabb5,	// (0x000312b7) ncimui_query_button_pane

0xabc5,	// (0x000312c7) ncimui_query_button_pane_t1_ParamLimits

0xabc5,	// (0x000312c7) ncimui_query_button_pane_t1

0xeaa9,	// (0x000351ab) ncimui_query_button_pane_t2_ParamLimits

0xeaa9,	// (0x000351ab) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00036549) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00036549) ncimui_query_button_pane_t

0xabd8,	// (0x000312da) query_button_pane_ParamLimits

0xabd8,	// (0x000312da) query_button_pane

0xf0ce,	// (0x000357d0) bg_button_pane_cp0028

0xeabc,	// (0x000351be) query_button_pane_t1

0x0ed4,	// (0x000275d6) main_tport_pane_ParamLimits

0xa61d,	// (0x00030d1f) bg_popup_window_pane_cp01_ParamLimits

0xa61d,	// (0x00030d1f) bg_popup_window_pane_cp01

0xa637,	// (0x00030d39) heading_pane_cp08_ParamLimits

0xa637,	// (0x00030d39) heading_pane_cp08

0xa64b,	// (0x00030d4d) heading_pane_cp07_ParamLimits

0xa64b,	// (0x00030d4d) heading_pane_cp07

0xe5ac,	// (0x00034cae) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00036495) cell_tport_appsw_pane_g

0x5679,	// (0x0002bd7b) input_candi_list_open_g1

0x4692,	// (0x0002ad94) list_cale_time_pane_g6_ParamLimits

0x4692,	// (0x0002ad94) list_cale_time_pane_g6

0x7565,	// (0x0002dc67) aid_size_touch_calib_1_ParamLimits

0x7565,	// (0x0002dc67) aid_size_touch_calib_1

0x7571,	// (0x0002dc73) aid_size_touch_calib_2_ParamLimits

0x7571,	// (0x0002dc73) aid_size_touch_calib_2

0x7587,	// (0x0002dc89) aid_size_touch_calib_3_ParamLimits

0x7587,	// (0x0002dc89) aid_size_touch_calib_3

0x75a5,	// (0x0002dca7) aid_size_touch_calib_4_ParamLimits

0x75a5,	// (0x0002dca7) aid_size_touch_calib_4

0x75bb,	// (0x0002dcbd) main_touch_calib_button_group_pane_ParamLimits

0x75bb,	// (0x0002dcbd) main_touch_calib_button_group_pane

0x75d3,	// (0x0002dcd5) main_touch_calib_pane_g1_ParamLimits

0x75df,	// (0x0002dce1) main_touch_calib_pane_g2_ParamLimits

0x75eb,	// (0x0002dced) main_touch_calib_pane_g3_ParamLimits

0x75f7,	// (0x0002dcf9) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00035e63) main_touch_calib_pane_g_ParamLimits

0x7603,	// (0x0002dd05) main_touch_calib_pane_t1_ParamLimits

0x761d,	// (0x0002dd1f) main_touch_calib_pane_t2_ParamLimits

0x7637,	// (0x0002dd39) main_touch_calib_pane_t3_ParamLimits

0x764b,	// (0x0002dd4d) main_touch_calib_pane_t4_ParamLimits

0x765f,	// (0x0002dd61) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00035e6c) main_touch_calib_pane_t_ParamLimits

0xc483,	// (0x00032b85) list_single_fp_cale_pane_g3_ParamLimits

0xc483,	// (0x00032b85) list_single_fp_cale_pane_g3

0xb653,	// (0x00031d55) bg_button_pane_cp012_ParamLimits

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp03_ParamLimits

0x1fd3,	// (0x000286d5) cell_vitu2_function_top_pane_g1_ParamLimits

0xb653,	// (0x00031d55) bg_vkb2_func_pane_cp04_ParamLimits

0x9a37,	// (0x00030139) main_ncimui_button_group_pane_ParamLimits

0x9a37,	// (0x00030139) main_ncimui_button_group_pane

0x9a97,	// (0x00030199) main_ncimui_pane_t3_ParamLimits

0x9a97,	// (0x00030199) main_ncimui_pane_t3

0xe6d4,	// (0x00034dd6) phacti_button_group_pane

0xe9cd,	// (0x000350cf) aid_size_list_single_double_ParamLimits

0xab0a,	// (0x0003120c) popup_ezdial_listscroll_window_ParamLimits

0xab26,	// (0x00031228) popup_number_entry_window_cp01_ParamLimits

0xabeb,	// (0x000312ed) phacti_button_pane_ParamLimits

0xabeb,	// (0x000312ed) phacti_button_pane

0xf0ce,	// (0x000357d0) bg_button_pane_cp14

0xeaca,	// (0x000351cc) phacti_button_pane_t1

0xabfc,	// (0x000312fe) main_touch_calib_button_pane_ParamLimits

0xabfc,	// (0x000312fe) main_touch_calib_button_pane

0x2af5,	// (0x000291f7) bg_button_pane_cp18_ParamLimits

0x2af5,	// (0x000291f7) bg_button_pane_cp18

0xead8,	// (0x000351da) main_touch_calib_button_pane_t1_ParamLimits

0xead8,	// (0x000351da) main_touch_calib_button_pane_t1

0xeaee,	// (0x000351f0) main_touch_calib_button_pane_t2_ParamLimits

0xeaee,	// (0x000351f0) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0003654e) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0003654e) main_touch_calib_button_pane_t

0xf0ce,	// (0x000357d0) cell_ncimui_button_pane

0xf0ce,	// (0x000357d0) bg_button_pane_cp032

0xeb0c,	// (0x0003520e) cell_ncimui_button_pane_t1

0xcc78,	// (0x0003337a) image3_infobar_pane_ParamLimits

0xcc78,	// (0x0003337a) image3_infobar_pane

0x9e65,	// (0x00030567) fs_bigclock_status_pane_ParamLimits

0x9e65,	// (0x00030567) fs_bigclock_status_pane

0x9e72,	// (0x00030574) main_fs_bigclock_clock_pane_ParamLimits

0x9e72,	// (0x00030574) main_fs_bigclock_clock_pane

0x9e86,	// (0x00030588) main_fs_bigclock_indi_pane_ParamLimits

0x9e86,	// (0x00030588) main_fs_bigclock_indi_pane

0x9e9f,	// (0x000305a1) main_fs_bigclock_swipe_pane_ParamLimits

0x9e9f,	// (0x000305a1) main_fs_bigclock_swipe_pane

0xf0ce,	// (0x000357d0) main_fs_clock_dumped_data

0xdfce,	// (0x000346d0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfce,	// (0x000346d0) list_single_fs_bigclock_indicator_pane_g1

0xdff4,	// (0x000346f6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdff4,	// (0x000346f6) list_single_fs_bigclock_indicator_pane_g2

0xe00e,	// (0x00034710) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe00e,	// (0x00034710) list_single_fs_bigclock_indicator_pane_g3

0xe028,	// (0x0003472a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe028,	// (0x0003472a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00036381) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00036381) list_single_fs_bigclock_indicator_pane_g

0xe051,	// (0x00034753) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe051,	// (0x00034753) list_single_fs_bigclock_indicator_pane_t1

0xe079,	// (0x0003477b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe079,	// (0x0003477b) list_single_fs_bigclock_indicator_pane_t2

0xe0a1,	// (0x000347a3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0a1,	// (0x000347a3) list_single_fs_bigclock_indicator_pane_t3

0xe0c9,	// (0x000347cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0c9,	// (0x000347cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0003638c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0003638c) list_single_fs_bigclock_indicator_pane_t

0xeb1a,	// (0x0003521c) image3_infobar_fav_pane_ParamLimits

0xeb1a,	// (0x0003521c) image3_infobar_fav_pane

0xeb2a,	// (0x0003522c) image3_infobar_loc_pane_ParamLimits

0xeb2a,	// (0x0003522c) image3_infobar_loc_pane

0xeb3e,	// (0x00035240) image3_infobar_time_pane_ParamLimits

0xeb3e,	// (0x00035240) image3_infobar_time_pane

0xc0ff,	// (0x00032801) image3_infobar_time_pane_g1

0xeb4e,	// (0x00035250) image3_infobar_time_pane_t1

0xc0ff,	// (0x00032801) image3_infobar_loc_pane_g1

0xeb5c,	// (0x0003525e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00036553) image3_infobar_loc_pane_g

0xeb64,	// (0x00035266) image3_infobar_loc_pane_t1

0xc0ff,	// (0x00032801) image3_infobar_fav_pane_g1

0xeb72,	// (0x00035274) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00036558) image3_infobar_fav_pane_g

0xeb7a,	// (0x0003527c) fs_bigclock_status_battery_pane

0xeb83,	// (0x00035285) fs_bigclock_status_signal_pane

0xeb8c,	// (0x0003528e) fs_bigclock_status_title_pane

0xeb95,	// (0x00035297) fs_bigclock_status_signal_pane_g1

0xeb9e,	// (0x000352a0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0003655d) fs_bigclock_status_signal_pane_g

0xeba6,	// (0x000352a8) fs_bigclock_status_battery_pane_g1

0xebaf,	// (0x000352b1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00036562) fs_bigclock_status_battery_pane_g

0xebb7,	// (0x000352b9) fs_bigclock_status_title_pane_t1

0xc0ff,	// (0x00032801) main_fs_bigclock_clock_pane_g1

0xebc5,	// (0x000352c7) main_fs_bigclock_clock_pane_g2

0xebc5,	// (0x000352c7) main_fs_bigclock_clock_pane_g3

0xebc5,	// (0x000352c7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00036567) main_fs_bigclock_clock_pane_g

0xebcd,	// (0x000352cf) main_fs_bigclock_clock_pane_t1

0xebdb,	// (0x000352dd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00036570) main_fs_bigclock_clock_pane_t

0xebea,	// (0x000352ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebea,	// (0x000352ec) list_single_fs_bigclock_indicator_pane

0xac11,	// (0x00031313) list_single_fs_bigclock_pane_ParamLimits

0xac11,	// (0x00031313) list_single_fs_bigclock_pane

0xec04,	// (0x00035306) main_fs_bigclock_indicator_pane_t1

0xec13,	// (0x00035315) list_single_fs_bigclock_pane_g1

0xec1b,	// (0x0003531d) list_single_fs_bigclock_pane_t1

0xc0ff,	// (0x00032801) main_fs_bigclock_swipe_pane_g1

0xec5e,	// (0x00035360) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00036581) main_fs_bigclock_swipe_pane_g

0xec66,	// (0x00035368) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec66,	// (0x00035368) main_fs_bigclock_swipe_pane_t1

0x4a4d,	// (0x0002b14f) call_type_pane_ParamLimits

0xf0ce,	// (0x000357d0) main_btmg_pane

0xe8a0,	// (0x00034fa2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a0,	// (0x00034fa2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000364f4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000364f4) list_single_cale_mrui_row_pane_g

0xea08,	// (0x0003510a) list_recal_vselct_arw_lo_pane

0xea10,	// (0x00035112) list_recal_vselct_arw_up_pane

0xea18,	// (0x0003511a) list_recal_vselct_pane

0xac74,	// (0x00031376) btmg_button_pane

0xac7e,	// (0x00031380) main_btmg_pane_g1

0xf0ce,	// (0x000357d0) bg_button_pane_cp044

0xec83,	// (0x00035385) btmg_button_pane_t1

0xbbf1,	// (0x000322f3) aid_listscroll_gen

0x6ee7,	// (0x0002d5e9) main_cntbar_detail_pane

0xe5ca,	// (0x00034ccc) list_cmail_folder_pane

0xe5da,	// (0x00034cdc) sp_fs_scroll_pane_cp03_ParamLimits

0xa730,	// (0x00030e32) list_single_fs_dyc_pane_cp01_ParamLimits

0xa730,	// (0x00030e32) list_single_fs_dyc_pane_cp01

0xec91,	// (0x00035393) aid_size_cmail_indent

0xec9a,	// (0x0003539c) list_single_dyc_row_pane_cp01

0xacb4,	// (0x000313b6) cntbar_detail_list_pane_ParamLimits

0xacb4,	// (0x000313b6) cntbar_detail_list_pane

0xad00,	// (0x00031402) main_cntbar_detail_cont_pane_ParamLimits

0xad00,	// (0x00031402) main_cntbar_detail_cont_pane

0x4864,	// (0x0002af66) scroll_pane_cp032_ParamLimits

0x4864,	// (0x0002af66) scroll_pane_cp032

0xad14,	// (0x00031416) cntbar_detail_list_event_pane_ParamLimits

0xad14,	// (0x00031416) cntbar_detail_list_event_pane

0xacc4,	// (0x000313c6) cntbar_detail_list_shct_pane

0x3c26,	// (0x0002a328) aid_list_gen

0xeca3,	// (0x000353a5) aid_scroll

0xecac,	// (0x000353ae) aid_size_touch_scroll_bar

0xad24,	// (0x00031426) aid_list_double

0xecb5,	// (0x000353b7) aid_list_single

0xad24,	// (0x00031426) aid_list_single_lg

0xecbe,	// (0x000353c0) aid_list_z_g_a_sm

0xecc6,	// (0x000353c8) aid_list_z_g_d

0xecce,	// (0x000353d0) aid_txt_z_prm

0xad2d,	// (0x0003142f) aid_txt_z_prm_cp01

0xad3b,	// (0x0003143d) aid_txt_z_sec

0xad49,	// (0x0003144b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xad49,	// (0x0003144b) main_cntbar_detail_cont_pane_g1

0xad5d,	// (0x0003145f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xad5d,	// (0x0003145f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00036586) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00036586) main_cntbar_detail_cont_pane_g

0xecdc,	// (0x000353de) main_cntbar_detail_cont_pane_t1

0xecea,	// (0x000353ec) main_cntbar_detail_cont_pane_t2

0xecf8,	// (0x000353fa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0003658b) main_cntbar_detail_cont_pane_t

0xad6d,	// (0x0003146f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xad6d,	// (0x0003146f) cell_cntbar_detail_list_shct_pane

0xed06,	// (0x00035408) cntbar_detail_list_shct_pane_g1

0xed0f,	// (0x00035411) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00036592) cntbar_detail_list_shct_pane_g

0xad81,	// (0x00031483) cntbar_detail_list_event_pane_g1_ParamLimits

0xad81,	// (0x00031483) cntbar_detail_list_event_pane_g1

0xad8d,	// (0x0003148f) cntbar_detail_list_event_pane_g2_ParamLimits

0xad8d,	// (0x0003148f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00036597) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00036597) cntbar_detail_list_event_pane_g

0xadf9,	// (0x000314fb) cntbar_detail_list_event_pane_t1_ParamLimits

0xadf9,	// (0x000314fb) cntbar_detail_list_event_pane_t1

0xae0e,	// (0x00031510) cntbar_detail_list_event_pane_t2_ParamLimits

0xae0e,	// (0x00031510) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000365a4) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000365a4) cntbar_detail_list_event_pane_t

0xc0ff,	// (0x00032801) cell_cntbar_detail_list_shct_pane_g1

0x506a,	// (0x0002b76c) navi_pane_mv_g3

0x6ee7,	// (0x0002d5e9) main_cntbar_detail_pane_ParamLimits

0xf0ce,	// (0x000357d0) main_notif_wgt_pane

0xca00,	// (0x00033102) aid_tch_main_mp4_pane_g4

0xcc02,	// (0x00033304) popup_slider_window_cp02

0xe9fe,	// (0x00035100) list_recal_day_event_pane

0xac88,	// (0x0003138a) cntbar_detail_btn_pane_ParamLimits

0xac88,	// (0x0003138a) cntbar_detail_btn_pane

0xac9e,	// (0x000313a0) cntbar_detail_btn_pane_cp01_ParamLimits

0xac9e,	// (0x000313a0) cntbar_detail_btn_pane_cp01

0xacc4,	// (0x000313c6) cntbar_detail_list_shct_pane_ParamLimits

0xacd4,	// (0x000313d6) cntbar_detail_pane_g1_ParamLimits

0xacd4,	// (0x000313d6) cntbar_detail_pane_g1

0xace4,	// (0x000313e6) cntbar_detail_pane_t1_ParamLimits

0xace4,	// (0x000313e6) cntbar_detail_pane_t1

0xad99,	// (0x0003149b) cntbar_detail_list_event_pane_g3_ParamLimits

0xad99,	// (0x0003149b) cntbar_detail_list_event_pane_g3

0xadb1,	// (0x000314b3) cntbar_detail_list_event_pane_g4_ParamLimits

0xadb1,	// (0x000314b3) cntbar_detail_list_event_pane_g4

0xadc9,	// (0x000314cb) cntbar_detail_list_event_pane_g5_ParamLimits

0xadc9,	// (0x000314cb) cntbar_detail_list_event_pane_g5

0xade1,	// (0x000314e3) cntbar_detail_list_event_pane_g6_ParamLimits

0xade1,	// (0x000314e3) cntbar_detail_list_event_pane_g6

0xae23,	// (0x00031525) cntbar_detail_list_event_pane_t3_ParamLimits

0xae23,	// (0x00031525) cntbar_detail_list_event_pane_t3

0xae35,	// (0x00031537) popup_notif_wgt_window_ParamLimits

0xae35,	// (0x00031537) popup_notif_wgt_window

0xae4e,	// (0x00031550) popup_submenu_window_cp01_ParamLimits

0xae4e,	// (0x00031550) popup_submenu_window_cp01

0x50e8,	// (0x0002b7ea) bg_popup_window_pane_cp10

0xed18,	// (0x0003541a) listscroll_notif_wgt_pane

0xed29,	// (0x0003542b) list_notif_wgt_window

0xed32,	// (0x00035434) scroll_pane_cp033

0xabb5,	// (0x000312b7) list_notif_wgt_row_pane_ParamLimits

0xabb5,	// (0x000312b7) list_notif_wgt_row_pane

0xed3b,	// (0x0003543d) aid_size_list_notif_wgt_del

0xed48,	// (0x0003544a) list_notif_wgt_row_pane_g1

0xed54,	// (0x00035456) list_notif_wgt_row_pane_g2

0xed60,	// (0x00035462) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000365ab) list_notif_wgt_row_pane_g

0xed6d,	// (0x0003546f) list_notif_wgt_row_pane_t1

0xed82,	// (0x00035484) list_notif_wgt_row_pane_t2

0xed94,	// (0x00035496) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000365b2) list_notif_wgt_row_pane_t

0xd262,	// (0x00033964) list_recal_day_event_pane_g1

0xeda6,	// (0x000354a8) list_recal_day_event_pane_t1

0xf0ce,	// (0x000357d0) bg_button_pane_cp045

0xedb5,	// (0x000354b7) cntbar_detail_btn_pane_t1

0xbbf9,	// (0x000322fb) main_callh_pane_ParamLimits

0xbbf9,	// (0x000322fb) main_callh_pane

0xf0ce,	// (0x000357d0) main_coverflow0_pane

0xf0ce,	// (0x000357d0) main_wgtman_pane

0x9ead,	// (0x000305af) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ead,	// (0x000305af) main_fs_bigclock_unlock_btn_pane

0xe5a4,	// (0x00034ca6) bg_button_pane_cp16

0xe5b4,	// (0x00034cb6) cell_tport_appsw_pane_g3

0xae60,	// (0x00031562) cf0_flow_pane_ParamLimits

0xae60,	// (0x00031562) cf0_flow_pane

0xedc3,	// (0x000354c5) listscroll_cf0_pane

0xedce,	// (0x000354d0) main_cf0_pane_g1

0xae75,	// (0x00031577) main_cf0_pane_t1_ParamLimits

0xae75,	// (0x00031577) main_cf0_pane_t1

0xae8c,	// (0x0003158e) main_cf0_pane_t2_ParamLimits

0xae8c,	// (0x0003158e) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x000365b9) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x000365b9) main_cf0_pane_t

0xedd8,	// (0x000354da) scroll_pane_cp11

0xaea3,	// (0x000315a5) cf0_flow_pane_g1

0xaeab,	// (0x000315ad) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x000365be) cf0_flow_pane_g

0xaeb3,	// (0x000315b5) cf0_flow_pane_t1

0xf0ce,	// (0x000357d0) main_call6_pane

0xf0ce,	// (0x000357d0) main_calllock_pane

0xaec1,	// (0x000315c3) call6_btn_grp_pane_ParamLimits

0xaec1,	// (0x000315c3) call6_btn_grp_pane

0xaedb,	// (0x000315dd) call6_pane_g1_ParamLimits

0xaedb,	// (0x000315dd) call6_pane_g1

0xaef0,	// (0x000315f2) popup_call6_1st_window_ParamLimits

0xaef0,	// (0x000315f2) popup_call6_1st_window

0xaf01,	// (0x00031603) popup_call6_2nd_window_ParamLimits

0xaf01,	// (0x00031603) popup_call6_2nd_window

0xaf12,	// (0x00031614) cell_call6_btn_pane_ParamLimits

0xaf12,	// (0x00031614) cell_call6_btn_pane

0x50e8,	// (0x0002b7ea) bg_popup_call2_in_pane_cp03

0xede3,	// (0x000354e5) popup_call6_1st_window_g1

0xedeb,	// (0x000354ed) popup_call6_1st_window_g2

0xedf3,	// (0x000354f5) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x000365c3) popup_call6_1st_window_g

0xedfb,	// (0x000354fd) popup_call6_1st_window_t1

0xee0a,	// (0x0003550c) popup_call6_1st_window_t2

0xee1a,	// (0x0003551c) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x000365ca) popup_call6_1st_window_t

0x50e8,	// (0x0002b7ea) bg_popup_call2_in_pane_cp04

0xede3,	// (0x000354e5) popup_call6_2nd_window_g1

0xedeb,	// (0x000354ed) popup_call6_2nd_window_g2

0xedf3,	// (0x000354f5) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x000365c3) popup_call6_2nd_window_g

0xedfb,	// (0x000354fd) popup_call6_2nd_window_t1

0xf0ce,	// (0x000357d0) bg_button_pane_cp15

0xee2a,	// (0x0003552c) cell_call6_btn_pane_g1

0xee33,	// (0x00035535) cell_call6_btn_pane_t1

0xaf26,	// (0x00031628) listscroll_wgtman_pane_ParamLimits

0xaf26,	// (0x00031628) listscroll_wgtman_pane

0xaf49,	// (0x0003164b) wgtman_btn_pane_ParamLimits

0xaf49,	// (0x0003164b) wgtman_btn_pane

0x4ca7,	// (0x0002b3a9) aid_scroll_copy1

0xee42,	// (0x00035544) list_wgtman_pane

0xaf8c,	// (0x0003168e) wgtman_btn_pane_g1_ParamLimits

0xaf8c,	// (0x0003168e) wgtman_btn_pane_g1

0xafb8,	// (0x000316ba) wgtman_btn_pane_t1_ParamLimits

0xafb8,	// (0x000316ba) wgtman_btn_pane_t1

0xee4c,	// (0x0003554e) wgtman_btn_pane_t2_ParamLimits

0xee4c,	// (0x0003554e) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x000365d1) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x000365d1) wgtman_btn_pane_t

0xaff5,	// (0x000316f7) listrow_wgtman_pane_ParamLimits

0xaff5,	// (0x000316f7) listrow_wgtman_pane

0xb007,	// (0x00031709) listrow_wgtman_pane_g1

0xb014,	// (0x00031716) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x000365d6) listrow_wgtman_pane_g

0xb032,	// (0x00031734) listrow_wgtman_pane_t1

0xb04a,	// (0x0003174c) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x000365db) listrow_wgtman_pane_t

0xb070,	// (0x00031772) wait_bar_pane_cp09

0xee63,	// (0x00035565) main_calllock_btn_pane

0xee6d,	// (0x0003556f) main_calllock_pane_g1

0xf0ce,	// (0x000357d0) bg_button_pane_cp17

0xee79,	// (0x0003557b) main_calllock_btn_pane_g1

0xee82,	// (0x00035584) main_calllock_btn_pane_t1

0xf0ce,	// (0x000357d0) main_dialer3_pane

0xf0ce,	// (0x000357d0) main_fmrd2_pane

0xc0ff,	// (0x00032801) main_fs_bigclock_unlock_btn_pane_g1

0xee99,	// (0x0003559b) main_fs_bigclock_unlock_btn_pane_t1

0xb082,	// (0x00031784) area_fmrd2_info_pane_ParamLimits

0xb082,	// (0x00031784) area_fmrd2_info_pane

0xb093,	// (0x00031795) area_fmrd2_visual_pane_ParamLimits

0xb093,	// (0x00031795) area_fmrd2_visual_pane

0xb0a1,	// (0x000317a3) fmrd2_indi_pane_ParamLimits

0xb0a1,	// (0x000317a3) fmrd2_indi_pane

0xb0ae,	// (0x000317b0) area_fmrd2_visual_pane_g1

0xb0b6,	// (0x000317b8) area_fmrd2_visual_pane_t1

0xb0c6,	// (0x000317c8) area_fmrd2_visual_pane_t2

0xb0d6,	// (0x000317d8) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x000365e5) area_fmrd2_visual_pane_t

0xb0e6,	// (0x000317e8) area_fmrd2_info_pane_g1

0xb0ee,	// (0x000317f0) area_fmrd2_info_pane_t1

0xb0fe,	// (0x00031800) area_fmrd2_info_pane_t2

0xb10e,	// (0x00031810) area_fmrd2_info_pane_t3

0xb11e,	// (0x00031820) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x000365ec) area_fmrd2_info_pane_t

0xb12c,	// (0x0003182e) fmrd2_indi_pane_t1

0xb13c,	// (0x0003183e) fmrd2_indi_pane_t2

0xb14c,	// (0x0003184e) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x000365f5) fmrd2_indi_pane_t

0xe037,	// (0x00034739) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe037,	// (0x00034739) list_single_fs_bigclock_indicator_pane_g5

0xe0de,	// (0x000347e0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0de,	// (0x000347e0) list_single_fs_bigclock_indicator_pane_t5

0xa87d,	// (0x00030f7f) aid_cell_bcale_month_pane_ParamLimits

0xa87d,	// (0x00030f7f) aid_cell_bcale_month_pane

0xa895,	// (0x00030f97) bcale_month_pane_ParamLimits

0xa895,	// (0x00030f97) bcale_month_pane

0xa8ac,	// (0x00030fae) bcale_preview_pane_ParamLimits

0xa8ac,	// (0x00030fae) bcale_preview_pane

0xec1b,	// (0x0003531d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec3a,	// (0x0003533c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec3a,	// (0x0003533c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0003657c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0003657c) list_single_fs_bigclock_pane_t

0xee91,	// (0x00035593) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x000365e0) main_fs_bigclock_unlock_btn_pane_g

0xb15c,	// (0x0003185e) aid_dia3_key_size_ParamLimits

0xb15c,	// (0x0003185e) aid_dia3_key_size

0xb16b,	// (0x0003186d) aid_dia3_listrow_size_ParamLimits

0xb16b,	// (0x0003186d) aid_dia3_listrow_size

0xb180,	// (0x00031882) dia3_keypad_fun_pane_ParamLimits

0xb180,	// (0x00031882) dia3_keypad_fun_pane

0xb19c,	// (0x0003189e) dia3_keypad_num_pane_ParamLimits

0xb19c,	// (0x0003189e) dia3_keypad_num_pane

0xb1b7,	// (0x000318b9) dia3_listscroll_pane_ParamLimits

0xb1b7,	// (0x000318b9) dia3_listscroll_pane

0xb1ca,	// (0x000318cc) dia3_numentry_pane_ParamLimits

0xb1ca,	// (0x000318cc) dia3_numentry_pane

0xeea7,	// (0x000355a9) dia3_list_pane

0xeeb2,	// (0x000355b4) scroll_pane_cp12

0xf0ce,	// (0x000357d0) bg_dia3_numentry_pane

0xb1de,	// (0x000318e0) dia3_numentry_pane_t1

0xb1ed,	// (0x000318ef) cell_dia3_key_num_pane

0xb1f5,	// (0x000318f7) cell_dia3_key0_fun_pane_ParamLimits

0xb1f5,	// (0x000318f7) cell_dia3_key0_fun_pane

0xb209,	// (0x0003190b) cell_dia3_key1_fun_pane_ParamLimits

0xb209,	// (0x0003190b) cell_dia3_key1_fun_pane

0xb221,	// (0x00031923) dia3_listrow_pane

0xdd2d,	// (0x0003442f) bg_dia3_numentry_pane_g1

0xf0ce,	// (0x000357d0) bg_button_pane_cp21

0xeebd,	// (0x000355bf) cell_dia3_key_num_pane_t1

0xeecb,	// (0x000355cd) cell_dia3_key_num_pane_t2

0xeeda,	// (0x000355dc) cell_dia3_key_num_pane_t3

0xeee9,	// (0x000355eb) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x000365fc) cell_dia3_key_num_pane_t

0xf0ce,	// (0x000357d0) bg_button_pane_cp19

0xb233,	// (0x00031935) cell_dia3_key0_fun_pane_g1

0xf0ce,	// (0x000357d0) bg_button_pane_cp20

0xb23b,	// (0x0003193d) cell_dia3_key1_fun_pane_g1

0xb243,	// (0x00031945) area_left_week_number_pane

0xb24d,	// (0x0003194f) area_top_day_name_pane

0xb259,	// (0x0003195b) frame_month_view_pane

0xb263,	// (0x00031965) grid_month_view_pane

0xeef8,	// (0x000355fa) cell_top_day_name_pane_ParamLimits

0xeef8,	// (0x000355fa) cell_top_day_name_pane

0xb26d,	// (0x0003196f) cell_area_left_week_number_pane_ParamLimits

0xb26d,	// (0x0003196f) cell_area_left_week_number_pane

0xb281,	// (0x00031983) cell_month_view_pane_ParamLimits

0xb281,	// (0x00031983) cell_month_view_pane

0xef12,	// (0x00035614) frm_month_g1

0xb29e,	// (0x000319a0) frm_month_g2

0xb2a8,	// (0x000319aa) frm_month_g3

0xb2b2,	// (0x000319b4) frm_month_g4

0xb2bc,	// (0x000319be) frm_month_g5

0xb2c6,	// (0x000319c8) frm_month_g6

0xb2d0,	// (0x000319d2) frm_month_g7

0xef1b,	// (0x0003561d) frm_month_g8

0xef24,	// (0x00035626) frm_month_g9

0xef2d,	// (0x0003562f) frm_month_g10

0xef36,	// (0x00035638) frm_month_g11

0xef3f,	// (0x00035641) frm_month_g12

0xef48,	// (0x0003564a) frm_month_g13

0xef51,	// (0x00035653) frm_month_g14

0xef5c,	// (0x0003565e) frm_month_g15

0xef67,	// (0x00035669) frm_month_g16

0x000f,

0xff03,	// (0x00036605) frm_month_g

0xb2da,	// (0x000319dc) cell_top_day_name_pane_t1

0xb2e9,	// (0x000319eb) cell_area_left_week_number_pane_g1

0xb2f1,	// (0x000319f3) cell_area_left_week_number_pane_t1

0xc0ff,	// (0x00032801) cell_month_view_pane_g1

0xb300,	// (0x00031a02) cell_month_view_pane_t1

0xf0ce,	// (0x000357d0) main_fps_pane

0xe31a,	// (0x00034a1c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe31a,	// (0x00034a1c) cmail_ddmenu_btn02_pane_cp1

0xe336,	// (0x00034a38) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe336,	// (0x00034a38) cmail_ddmenu_btn02_pane_cp2

0xab62,	// (0x00031264) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xab62,	// (0x00031264) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0003652f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0003652f) cmail_ddmenu_btn02_pane_g

0xab83,	// (0x00031285) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xab83,	// (0x00031285) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00036534) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00036534) cmail_ddmenu_btn02_pane_t

0xb30f,	// (0x00031a11) fps_text_pane_ParamLimits

0xb30f,	// (0x00031a11) fps_text_pane

0xb326,	// (0x00031a28) main_fps_pane_g1_ParamLimits

0xb326,	// (0x00031a28) main_fps_pane_g1

0xb340,	// (0x00031a42) wait_bar_pane_cp010_ParamLimits

0xb340,	// (0x00031a42) wait_bar_pane_cp010

0xb351,	// (0x00031a53) fps_text_pane_t1_ParamLimits

0xb351,	// (0x00031a53) fps_text_pane_t1

0xcdc1,	// (0x000334c3) cam4_image_uncrop_pane_g1

0xcdca,	// (0x000334cc) cam4_image_uncrop_pane_g2

0x868f,	// (0x0002ed91) cam4_image_uncrop_pane_g3

0x8698,	// (0x0002ed9a) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00035ffb) cam4_image_uncrop_pane_g

0xb221,	// (0x00031923) dia3_listrow_pane_ParamLimits

0xf0ce,	// (0x000357d0) main_phob2_pane

0xa6b6,	// (0x00030db8) cell_tport_appsw_pane_cp02_ParamLimits

0xa6b6,	// (0x00030db8) cell_tport_appsw_pane_cp02

0xa6ca,	// (0x00030dcc) cell_tport_appsw_pane_cp03_ParamLimits

0xa6ca,	// (0x00030dcc) cell_tport_appsw_pane_cp03

0xf0ce,	// (0x000357d0) phob2_contact_card_pane

0xf0ce,	// (0x000357d0) phob2_listscroll_pane

0xef72,	// (0x00035674) phob2_list_pane

0xef7a,	// (0x0003567c) scroll_pane_cp034

0xb369,	// (0x00031a6b) phob2_cc_data_pane_ParamLimits

0xb369,	// (0x00031a6b) phob2_cc_data_pane

0xb388,	// (0x00031a8a) phob2_cc_listscroll_pane_ParamLimits

0xb388,	// (0x00031a8a) phob2_cc_listscroll_pane

0xb3a6,	// (0x00031aa8) list_double_large_graphic_phob2_pane_ParamLimits

0xb3a6,	// (0x00031aa8) list_double_large_graphic_phob2_pane

0xb3b8,	// (0x00031aba) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb3b8,	// (0x00031aba) list_double_large_graphic_phob2_pane_g1

0xef82,	// (0x00035684) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef82,	// (0x00035684) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x00036626) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x00036626) list_double_large_graphic_phob2_pane_g

0xb3c5,	// (0x00031ac7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb3c5,	// (0x00031ac7) list_double_large_graphic_phob2_pane_t1

0xb3da,	// (0x00031adc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb3da,	// (0x00031adc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003662b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003662b) list_double_large_graphic_phob2_pane_t

0xf0ce,	// (0x000357d0) list_highlight_pane_cp024

0xef8e,	// (0x00035690) phob2_cc_button_pane

0xb3ec,	// (0x00031aee) phob2_cc_data_pane_g1_ParamLimits

0xb3ec,	// (0x00031aee) phob2_cc_data_pane_g1

0xb401,	// (0x00031b03) phob2_cc_data_pane_g2_ParamLimits

0xb401,	// (0x00031b03) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00036630) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00036630) phob2_cc_data_pane_g

0xb413,	// (0x00031b15) phob2_cc_data_pane_t1_ParamLimits

0xb413,	// (0x00031b15) phob2_cc_data_pane_t1

0xb42b,	// (0x00031b2d) phob2_cc_data_pane_t2_ParamLimits

0xb42b,	// (0x00031b2d) phob2_cc_data_pane_t2

0xb443,	// (0x00031b45) phob2_cc_data_pane_t3_ParamLimits

0xb443,	// (0x00031b45) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x00036635) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x00036635) phob2_cc_data_pane_t

0xef96,	// (0x00035698) phob2_cc_list_pane_ParamLimits

0xef96,	// (0x00035698) phob2_cc_list_pane

0xd2fb,	// (0x000339fd) scroll_pane_cp035_ParamLimits

0xd2fb,	// (0x000339fd) scroll_pane_cp035

0x6ee7,	// (0x0002d5e9) bg_button_pane_cp033

0xefa2,	// (0x000356a4) phob2_cc_button_pane_g1

0xefae,	// (0x000356b0) phob2_cc_button_pane_t1

0xefc3,	// (0x000356c5) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003663c) phob2_cc_button_pane_t

0xb45b,	// (0x00031b5d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb45b,	// (0x00031b5d) list_double_large_graphic_phob2_cc_pane

0xb46d,	// (0x00031b6f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb46d,	// (0x00031b6f) list_double_large_graphic_phob2_cc_pane_g1

0xb479,	// (0x00031b7b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb479,	// (0x00031b7b) list_double_large_graphic_phob2_cc_pane_g2

0xb485,	// (0x00031b87) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb485,	// (0x00031b87) list_double_large_graphic_phob2_cc_pane_g3

0xb491,	// (0x00031b93) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb491,	// (0x00031b93) list_double_large_graphic_phob2_cc_pane_g4

0xb49d,	// (0x00031b9f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb49d,	// (0x00031b9f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x00036641) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x00036641) list_double_large_graphic_phob2_cc_pane_g

0xb4a9,	// (0x00031bab) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb4a9,	// (0x00031bab) list_double_large_graphic_phob2_cc_pane_t1

0xb4d2,	// (0x00031bd4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb4d2,	// (0x00031bd4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003664c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003664c) list_double_large_graphic_phob2_cc_pane_t

0xefd5,	// (0x000356d7) list_highlight_pane_cp025_ParamLimits

0xefd5,	// (0x000356d7) list_highlight_pane_cp025

0x6ee7,	// (0x0002d5e9) bg_button_pane_cp033_ParamLimits

0xefa2,	// (0x000356a4) phob2_cc_button_pane_g1_ParamLimits

0xefae,	// (0x000356b0) phob2_cc_button_pane_t1_ParamLimits

0xefc3,	// (0x000356c5) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003663c) phob2_cc_button_pane_t_ParamLimits

0x2140,	// (0x00028842) popup_wgtman_window

0xd069,	// (0x0003376b) scroll_pane_cp038

0xaf6e,	// (0x00031670) wgtman_btn_pane_cp_01_ParamLimits

0xaf6e,	// (0x00031670) wgtman_btn_pane_cp_01

0xefe3,	// (0x000356e5) wgtman_content_pane

0xefec,	// (0x000356ee) wgtman_heading_pane

0xf0ce,	// (0x000357d0) bg_heading_pane_cp02

0xeff5,	// (0x000356f7) wgtman_heading_pane_g1

0xeffd,	// (0x000356ff) wgtman_heading_pane_t1

0xf00b,	// (0x0003570d) scroll_pane_cp036

0xf013,	// (0x00035715) wgtman_list_pane

0xf01b,	// (0x0003571d) wgtman_list_pane_t1_ParamLimits

0xf01b,	// (0x0003571d) wgtman_list_pane_t1

0xcdad,	// (0x000334af) cam4_grid_pane

0x8e59,	// (0x0002f55b) bg_button_pane_cp015_ParamLimits

0x8e6b,	// (0x0002f56d) bg_button_pane_cp016_ParamLimits

0x8e7e,	// (0x0002f580) bg_button_pane_cp017_ParamLimits

0x8ed6,	// (0x0002f5d8) popup_vitu2_query_window_g3_ParamLimits

0x8ed6,	// (0x0002f5d8) popup_vitu2_query_window_g3

0x8f93,	// (0x0002f695) popup_vitu2_query_window_t6_ParamLimits

0x8f93,	// (0x0002f695) popup_vitu2_query_window_t6

0x8fbe,	// (0x0002f6c0) popup_vitu2_query_window_t7_ParamLimits

0x8fbe,	// (0x0002f6c0) popup_vitu2_query_window_t7

0xcdc1,	// (0x000334c3) cam4_grid_pane_g1

0xcdca,	// (0x000334cc) cam4_grid_pane_g2

0xf035,	// (0x00035737) cam4_grid_pane_g3

0xf03e,	// (0x00035740) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x00036651) cam4_grid_pane_g

0x3622,	// (0x00029d24) aid_placing_vt_slider_lsc_ParamLimits

0x397d,	// (0x0002a07f) vidtel_button_pane_ParamLimits

0x397d,	// (0x0002a07f) vidtel_button_pane

0xf049,	// (0x0003574b) bg_button_pane_cp034

0xb4fb,	// (0x00031bfd) vidtel_button_pane_g1

0xf053,	// (0x00035755) vidtel_button_pane_t1

0xd1d6,	// (0x000338d8) aid_size_vtel_slider_touch

0xd2fb,	// (0x000339fd) scroll_pane_cp039

0xdd6b,	// (0x0003446d) ncim_query_button_pane_cp01_ParamLimits

0xdd8a,	// (0x0003448c) ncimui_query_pane_g1_ParamLimits

0x6ee7,	// (0x0002d5e9) input_focus_pane_cp012_ParamLimits

0xddaf,	// (0x000344b1) ncim_query_entry_pane_t1_ParamLimits

0xd2fb,	// (0x000339fd) scroll_pane_cp039_ParamLimits

0x4f57,	// (0x0002b659) navi_pane_bcale_mc_g1

0x4f5f,	// (0x0002b661) navi_pane_bcale_mc_t1

0xe37f,	// (0x00034a81) main_sp_fs_email_pane_g1

0xe387,	// (0x00034a89) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x000363f2) main_sp_fs_email_pane_g

0xe8ac,	// (0x00034fae) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ac,	// (0x00034fae) list_single_cale_mrui_row_pane_g3

0xabab,	// (0x000312ad) list_single_recal_day_pane_g5_event_pane

0xea7a,	// (0x0003517c) list_single_recal_day_pane_g7

0xf061,	// (0x00035763) list_recal_day_event_pane_cp01

0xf06a,	// (0x0003576c) list_recal_vselct_arw_lo_pane_cp01

0xf072,	// (0x00035774) list_recal_vselct_arw_up_pane_cp01

0xf07a,	// (0x0003577c) list_recal_vselct_pane_cp01

0xd262,	// (0x00033964) list_recal_day_event_pane_cp01_g1

0xf084,	// (0x00035786) list_recal_day_event_pane_cp01_t1

0xea82,	// (0x00035184) list_single_recal_day_pane_t1_ParamLimits

0xea94,	// (0x00035196) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00036544) list_single_recal_day_pane_t_ParamLimits

0x2ab1,	// (0x000291b3) bg_notes_pane_ParamLimits

0x2abf,	// (0x000291c1) list_notes_pane_ParamLimits

0x2acd,	// (0x000291cf) scroll_pane_cp06_ParamLimits

0x2af5,	// (0x000291f7) main_notes_pane_ParamLimits

0xf0ce,	// (0x000357d0) main_welc_pane

0xb503,	// (0x00031c05) main_welc_body_pane_ParamLimits

0xb503,	// (0x00031c05) main_welc_body_pane

0xb521,	// (0x00031c23) main_welc_opti_pane_ParamLimits

0xb521,	// (0x00031c23) main_welc_opti_pane

0xb566,	// (0x00031c68) main_welc_pane_t1_ParamLimits

0xb566,	// (0x00031c68) main_welc_pane_t1

0xb584,	// (0x00031c86) main_welc_body_row_pane_ParamLimits

0xb584,	// (0x00031c86) main_welc_body_row_pane

0xb598,	// (0x00031c9a) main_welc_opti_row_pane_ParamLimits

0xb598,	// (0x00031c9a) main_welc_opti_row_pane

0xf092,	// (0x00035794) main_welc_opti_row_pane_g1

0xf09a,	// (0x0003579c) main_welc_opti_row_pane_t1

0xf0a9,	// (0x000357ab) main_welc_body_row_pane_t1

0xed21,	// (0x00035423) popup_notif_wgt_heading_pane

0xed3b,	// (0x0003543d) aid_size_list_notif_wgt_del_ParamLimits

0xed48,	// (0x0003544a) list_notif_wgt_row_pane_g1_ParamLimits

0xed54,	// (0x00035456) list_notif_wgt_row_pane_g2_ParamLimits

0xed60,	// (0x00035462) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000365ab) list_notif_wgt_row_pane_g_ParamLimits

0xed6d,	// (0x0003546f) list_notif_wgt_row_pane_t1_ParamLimits

0xed82,	// (0x00035484) list_notif_wgt_row_pane_t2_ParamLimits

0xed94,	// (0x00035496) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000365b2) list_notif_wgt_row_pane_t_ParamLimits

0xb007,	// (0x00031709) listrow_wgtman_pane_g1_ParamLimits

0xb014,	// (0x00031716) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x000365d6) listrow_wgtman_pane_g_ParamLimits

0xb032,	// (0x00031734) listrow_wgtman_pane_t1_ParamLimits

0xb04a,	// (0x0003174c) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x000365db) listrow_wgtman_pane_t_ParamLimits

0xb070,	// (0x00031772) wait_bar_pane_cp09_ParamLimits

0xf0ce,	// (0x000357d0) bg_popup_heading_pane_cp02

0xf0b8,	// (0x000357ba) popup_notif_wgt_heading_pane_g1

0xf0c0,	// (0x000357c2) popup_notif_wgt_heading_pane_t1

0xf0ce,	// (0x000357d0) main_vids_pane

0xf0ce,	// (0x000357d0) vids_listscroll_pane

0xb5a8,	// (0x00031caa) scroll_pane_cp040

0xf0ce,	// (0x000357d0) vids_list_pane

0xb5b3,	// (0x00031cb5) vids_list_double_pane_ParamLimits

0xb5b3,	// (0x00031cb5) vids_list_double_pane

0xb5c4,	// (0x00031cc6) vids_list_double_pane_g1

0xb5cd,	// (0x00031ccf) vids_list_double_pane_t1

0xb5dd,	// (0x00031cdf) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003665f) vids_list_double_pane_t

0xb653,	// (0x00031d55) main_ncimui_pane_ParamLimits

0x9a4b,	// (0x0003014d) main_ncimui_pane_g1_ParamLimits

0x9a57,	// (0x00030159) main_ncimui_pane_g2_ParamLimits

0x9a57,	// (0x00030159) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x000362f7) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x000362f7) main_ncimui_pane_g

0xb53c,	// (0x00031c3e) main_welc_pane_g1_ParamLimits

0xb53c,	// (0x00031c3e) main_welc_pane_g1

0xb551,	// (0x00031c53) main_welc_pane_g2_ParamLimits

0xb551,	// (0x00031c53) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003665a) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003665a) main_welc_pane_g
};


const AknLayoutScalable_Apps::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineCRV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVRC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&TextLineVRC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&WindowLineRCV,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
