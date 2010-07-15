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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000262da };

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
0x2121,	// (0x000283fb) Screen

0x212b,	// (0x00028405) application_window

0x213f,	// (0x00028419) area_bottom_pane_ParamLimits

0x213f,	// (0x00028419) area_bottom_pane

0x0afa,	// (0x00026dd4) area_top_pane_ParamLimits

0x0afa,	// (0x00026dd4) area_top_pane

0xb661,	// (0x0003193b) call_video_uplink_pane_ParamLimits

0xb661,	// (0x0003193b) call_video_uplink_pane

0x0b7a,	// (0x00026e54) main_pane_ParamLimits

0x0b7a,	// (0x00026e54) main_pane

0xbf85,	// (0x0003225f) context_pane

0x6d44,	// (0x0002d01e) navi_pane

0x6d6d,	// (0x0002d047) popup_cale_events_window_ParamLimits

0x6d6d,	// (0x0002d047) popup_cale_events_window

0xbf98,	// (0x00032272) popup_mup_playback_window

0x6d85,	// (0x0002d05f) signal_pane

0x2af5,	// (0x00028dcf) main_browser_pane

0x322e,	// (0x00029508) main_burst_pane

0xb67d,	// (0x00031957) main_calc_pane

0xbf11,	// (0x000321eb) main_cale_day_pane

0x0fd9,	// (0x000272b3) main_cale_month_pane

0xbf11,	// (0x000321eb) main_cale_week_pane

0x322e,	// (0x00029508) main_call_pane

0x25e3,	// (0x000288bd) main_call_poc_pane

0x322e,	// (0x00029508) main_camera_pane

0x322e,	// (0x00029508) main_chi_dic_pane

0x4eb7,	// (0x0002b191) main_clock_pane

0x25e3,	// (0x000288bd) main_fmradio_pane

0x322e,	// (0x00029508) main_graph_messa_pane

0x25e3,	// (0x000288bd) main_help_pane

0x2af5,	// (0x00028dcf) main_im_pane

0x283e,	// (0x00028b18) main_image_pane_ParamLimits

0x283e,	// (0x00028b18) main_image_pane

0x25e3,	// (0x000288bd) main_location2_pane

0x322e,	// (0x00029508) main_location_pane

0x283e,	// (0x00028b18) main_messa_pane

0x25e3,	// (0x000288bd) main_mp2_pane

0x322e,	// (0x00029508) main_mp_pane

0x25e3,	// (0x000288bd) main_msg_pane

0x25e3,	// (0x000288bd) main_mup_eq_pane

0x25e3,	// (0x000288bd) main_mup_pane

0x2af5,	// (0x00028dcf) main_notes_pane

0x25e3,	// (0x000288bd) main_pec_pane

0x25e3,	// (0x000288bd) main_phob_pane

0x25e3,	// (0x000288bd) main_pinb_pane

0x25e3,	// (0x000288bd) main_postcard_pane

0x25e3,	// (0x000288bd) main_qdial_pane

0x322e,	// (0x00029508) main_skin_pane

0x25e3,	// (0x000288bd) main_smil2_pane

0x322e,	// (0x00029508) main_smil_pane

0x322e,	// (0x00029508) main_video_pane

0x322e,	// (0x00029508) main_video_tele_pane

0x283e,	// (0x00028b18) main_viewer_pane_ParamLimits

0x283e,	// (0x00028b18) main_viewer_pane

0x322e,	// (0x00029508) main_vorec_pane

0x1027,	// (0x00027301) popup_blid_sat_info_window_ParamLimits

0x1027,	// (0x00027301) popup_blid_sat_info_window

0x107d,	// (0x00027357) popup_dyc_status_message_window_ParamLimits

0x107d,	// (0x00027357) popup_dyc_status_message_window

0x1093,	// (0x0002736d) popup_grid_large_graphic_window_ParamLimits

0x1093,	// (0x0002736d) popup_grid_large_graphic_window

0x1129,	// (0x00027403) popup_loc_request_window_ParamLimits

0x1129,	// (0x00027403) popup_loc_request_window

0x120d,	// (0x000274e7) popup_wml_address_window_ParamLimits

0x120d,	// (0x000274e7) popup_wml_address_window

0x6bd2,	// (0x0002ceac) call_muted_g1

0x5fe2,	// (0x0002c2bc) popup_call_audio_conf_window_ParamLimits

0x5fe2,	// (0x0002c2bc) popup_call_audio_conf_window

0x6be2,	// (0x0002cebc) popup_call_audio_first_window_ParamLimits

0x6be2,	// (0x0002cebc) popup_call_audio_first_window

0x6c40,	// (0x0002cf1a) popup_call_audio_in_window_ParamLimits

0x6c40,	// (0x0002cf1a) popup_call_audio_in_window

0x6c6c,	// (0x0002cf46) popup_call_audio_out_window_ParamLimits

0x6c6c,	// (0x0002cf46) popup_call_audio_out_window

0x6c9a,	// (0x0002cf74) popup_call_audio_second_window_ParamLimits

0x6c9a,	// (0x0002cf74) popup_call_audio_second_window

0x6ce0,	// (0x0002cfba) popup_call_audio_wait_window_ParamLimits

0x6ce0,	// (0x0002cfba) popup_call_audio_wait_window

0x6d13,	// (0x0002cfed) popup_number_entry_window_ParamLimits

0x6d13,	// (0x0002cfed) popup_number_entry_window

0x217a,	// (0x00028454) bg_popup_call_pane_cp05_ParamLimits

0x217a,	// (0x00028454) bg_popup_call_pane_cp05

0x219a,	// (0x00028474) popup_number_entry_window_t1

0x21ad,	// (0x00028487) popup_number_entry_window_t2

0x21bf,	// (0x00028499) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x00035389) popup_number_entry_window_t

0x2205,	// (0x000284df) text_title_cp2

0x2218,	// (0x000284f2) bg_popup_call_pane_cp_ParamLimits

0x2218,	// (0x000284f2) bg_popup_call_pane_cp

0x2226,	// (0x00028500) call_thumbnail_pane

0x222e,	// (0x00028508) popup_call_audio_in_window_g1_ParamLimits

0x222e,	// (0x00028508) popup_call_audio_in_window_g1

0x223a,	// (0x00028514) popup_call_audio_in_window_g2_ParamLimits

0x223a,	// (0x00028514) popup_call_audio_in_window_g2

0x2246,	// (0x00028520) popup_call_audio_in_window_g3_ParamLimits

0x2246,	// (0x00028520) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x00035392) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x00035392) popup_call_audio_in_window_g

0x2252,	// (0x0002852c) popup_call_audio_in_window_t1_ParamLimits

0x2252,	// (0x0002852c) popup_call_audio_in_window_t1

0x226d,	// (0x00028547) popup_call_audio_in_window_t2_ParamLimits

0x226d,	// (0x00028547) popup_call_audio_in_window_t2

0x2288,	// (0x00028562) popup_call_audio_in_window_t3_ParamLimits

0x2288,	// (0x00028562) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x00035399) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x00035399) popup_call_audio_in_window_t

0x2218,	// (0x000284f2) bg_popup_call_pane_cp01_ParamLimits

0x2218,	// (0x000284f2) bg_popup_call_pane_cp01

0x2226,	// (0x00028500) call_thumbnail_pane_cp02

0x229b,	// (0x00028575) call_type_pane_cp022

0x22a3,	// (0x0002857d) popup_call_audio_out_window_g1_ParamLimits

0x22a3,	// (0x0002857d) popup_call_audio_out_window_g1

0x22b5,	// (0x0002858f) popup_call_audio_out_window_g2_ParamLimits

0x22b5,	// (0x0002858f) popup_call_audio_out_window_g2

0x22c1,	// (0x0002859b) popup_call_audio_out_window_g3_ParamLimits

0x22c1,	// (0x0002859b) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000353a0) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000353a0) popup_call_audio_out_window_g

0x22d3,	// (0x000285ad) popup_call_audio_out_window_t1_ParamLimits

0x22d3,	// (0x000285ad) popup_call_audio_out_window_t1

0x22eb,	// (0x000285c5) popup_call_audio_out_window_t2_ParamLimits

0x22eb,	// (0x000285c5) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000353a7) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000353a7) popup_call_audio_out_window_t

0x2300,	// (0x000285da) bg_popup_call_pane_ParamLimits

0x2300,	// (0x000285da) bg_popup_call_pane

0x2384,	// (0x0002865e) call_thumbnail_pane_cp_ParamLimits

0x2384,	// (0x0002865e) call_thumbnail_pane_cp

0x23a8,	// (0x00028682) call_type_pane_cp01_ParamLimits

0x23a8,	// (0x00028682) call_type_pane_cp01

0x23ec,	// (0x000286c6) popup_call_audio_first_window_g1_ParamLimits

0x23ec,	// (0x000286c6) popup_call_audio_first_window_g1

0x2438,	// (0x00028712) popup_call_audio_first_window_g2_ParamLimits

0x2438,	// (0x00028712) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000353ac) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000353ac) popup_call_audio_first_window_g

0x247c,	// (0x00028756) popup_call_audio_first_window_t1_ParamLimits

0x247c,	// (0x00028756) popup_call_audio_first_window_t1

0x2528,	// (0x00028802) popup_call_audio_first_window_t4_ParamLimits

0x2528,	// (0x00028802) popup_call_audio_first_window_t4

0x25b4,	// (0x0002888e) popup_call_audio_first_window_t5_ParamLimits

0x25b4,	// (0x0002888e) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000353b1) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000353b1) popup_call_audio_first_window_t

0x25e3,	// (0x000288bd) bg_popup_call_pane_cp02

0x25ed,	// (0x000288c7) call_type_pane_cp023

0x25f5,	// (0x000288cf) popup_call_audio_wait_window_g1

0x25fd,	// (0x000288d7) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000353b8) popup_call_audio_wait_window_g

0x2605,	// (0x000288df) popup_call_audio_wait_window_t3

0x2613,	// (0x000288ed) bg_popup_call_pane_cp03_ParamLimits

0x2613,	// (0x000288ed) bg_popup_call_pane_cp03

0x2673,	// (0x0002894d) call_thumbnail_pane_cp011_ParamLimits

0x2673,	// (0x0002894d) call_thumbnail_pane_cp011

0x267f,	// (0x00028959) call_type_pane_cp034_ParamLimits

0x267f,	// (0x00028959) call_type_pane_cp034

0x26bb,	// (0x00028995) popup_call_audio_second_window_g1_ParamLimits

0x26bb,	// (0x00028995) popup_call_audio_second_window_g1

0x26f7,	// (0x000289d1) popup_call_audio_second_window_g2_ParamLimits

0x26f7,	// (0x000289d1) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000353bd) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000353bd) popup_call_audio_second_window_g

0x2733,	// (0x00028a0d) popup_call_audio_second_window_t1_ParamLimits

0x2733,	// (0x00028a0d) popup_call_audio_second_window_t1

0x27b4,	// (0x00028a8e) popup_call_audio_second_window_t2_ParamLimits

0x27b4,	// (0x00028a8e) popup_call_audio_second_window_t2

0x27ea,	// (0x00028ac4) popup_call_audio_second_window_t3_ParamLimits

0x27ea,	// (0x00028ac4) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000353c2) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000353c2) popup_call_audio_second_window_t

0x25e3,	// (0x000288bd) bg_popup_call_pane_cp04

0x2820,	// (0x00028afa) list_conf_pane

0x2828,	// (0x00028b02) popup_call_audio_conf_window_t1

0x2836,	// (0x00028b10) call_thumbnail_pane_g1

0x283e,	// (0x00028b18) bg_pinb_pane_ParamLimits

0x283e,	// (0x00028b18) bg_pinb_pane

0x284c,	// (0x00028b26) find_pinb_pane

0x2855,	// (0x00028b2f) listscroll_pinb_pane_ParamLimits

0x2855,	// (0x00028b2f) listscroll_pinb_pane

0x2864,	// (0x00028b3e) pinb_bg_pane_g1

0x286e,	// (0x00028b48) pinb_bg_pane_g2

0x2878,	// (0x00028b52) pinb_bg_pane_g3

0x2882,	// (0x00028b5c) pinb_bg_pane_g4

0x288c,	// (0x00028b66) pinb_bg_pane_g5

0x2896,	// (0x00028b70) pinb_bg_pane_g6

0x289f,	// (0x00028b79) pinb_bg_pane_g7

0x28a8,	// (0x00028b82) pinb_bg_pane_g8

0x28b3,	// (0x00028b8d) pinb_bg_pane_g9

0x28bd,	// (0x00028b97) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000353c9) pinb_bg_pane_g

0x28d8,	// (0x00028bb2) grid_pinb_pane

0x28e1,	// (0x00028bbb) list_pinb_pane

0x28ea,	// (0x00028bc4) scroll_pane_cp01_ParamLimits

0x28ea,	// (0x00028bc4) scroll_pane_cp01

0x28fc,	// (0x00028bd6) find_pinb_pane_g1_ParamLimits

0x28fc,	// (0x00028bd6) find_pinb_pane_g1

0x2914,	// (0x00028bee) find_pinb_pane_t1

0x2926,	// (0x00028c00) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000353e3) find_pinb_pane_t

0x293b,	// (0x00028c15) input_focus_pane_cp01_ParamLimits

0x293b,	// (0x00028c15) input_focus_pane_cp01

0x2947,	// (0x00028c21) cell_pinb_pane_ParamLimits

0x2947,	// (0x00028c21) cell_pinb_pane

0x2962,	// (0x00028c3c) cell_pinb_pane_g1_ParamLimits

0x2962,	// (0x00028c3c) cell_pinb_pane_g1

0x2972,	// (0x00028c4c) cell_pinb_pane_g2_ParamLimits

0x2972,	// (0x00028c4c) cell_pinb_pane_g2

0x297e,	// (0x00028c58) cell_pinb_pane_g3_ParamLimits

0x297e,	// (0x00028c58) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000353e8) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000353e8) cell_pinb_pane_g

0x25e3,	// (0x000288bd) grid_highlight_pane_cp01

0x298a,	// (0x00028c64) list_pinb_item_pane_ParamLimits

0x298a,	// (0x00028c64) list_pinb_item_pane

0x25e3,	// (0x000288bd) list_highlight_pane_cp02

0x299c,	// (0x00028c76) list_pinb_item_pane_g1_ParamLimits

0x299c,	// (0x00028c76) list_pinb_item_pane_g1

0x29a9,	// (0x00028c83) list_pinb_item_pane_g2_ParamLimits

0x29a9,	// (0x00028c83) list_pinb_item_pane_g2

0x29b5,	// (0x00028c8f) list_pinb_item_pane_g3_ParamLimits

0x29b5,	// (0x00028c8f) list_pinb_item_pane_g3

0x29c6,	// (0x00028ca0) list_pinb_item_pane_g4_ParamLimits

0x29c6,	// (0x00028ca0) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000353ef) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000353ef) list_pinb_item_pane_g

0x29d2,	// (0x00028cac) list_pinb_item_pane_t1_ParamLimits

0x29d2,	// (0x00028cac) list_pinb_item_pane_t1

0x0ce5,	// (0x00026fbf) calc_display_pane

0x0d01,	// (0x00026fdb) calc_paper_pane

0x0d22,	// (0x00026ffc) grid_calc_pane

0x25e3,	// (0x000288bd) bg_list_pane_cp01

0x29e9,	// (0x00028cc3) clock_g1

0x29f1,	// (0x00028ccb) clock_g2

0x0001,

0xf11e,	// (0x000353f8) clock_g

0x29f9,	// (0x00028cd3) clock_t1_ParamLimits

0x29f9,	// (0x00028cd3) clock_t1

0x2a0e,	// (0x00028ce8) clock_t2_ParamLimits

0x2a0e,	// (0x00028ce8) clock_t2

0x2a20,	// (0x00028cfa) clock_t3_ParamLimits

0x2a20,	// (0x00028cfa) clock_t3

0x2a32,	// (0x00028d0c) clock_t4_ParamLimits

0x2a32,	// (0x00028d0c) clock_t4

0x2a44,	// (0x00028d1e) clock_t5_ParamLimits

0x2a44,	// (0x00028d1e) clock_t5

0x2a59,	// (0x00028d33) clock_t6_ParamLimits

0x2a59,	// (0x00028d33) clock_t6

0x2a6b,	// (0x00028d45) clock_t7_ParamLimits

0x2a6b,	// (0x00028d45) clock_t7

0x2a7d,	// (0x00028d57) clock_t8_ParamLimits

0x2a7d,	// (0x00028d57) clock_t8

0x2a8f,	// (0x00028d69) clock_t9_ParamLimits

0x2a8f,	// (0x00028d69) clock_t9

0x0008,

0xf123,	// (0x000353fd) clock_t_ParamLimits

0xf123,	// (0x000353fd) clock_t

0x2aa1,	// (0x00028d7b) popup_clock_analogue_window_cp02

0x2aa1,	// (0x00028d7b) popup_clock_digital_window_cp01

0x2aa9,	// (0x00028d83) listscroll_help_pane

0x25e3,	// (0x000288bd) phob_pre_status_pane

0x2ab3,	// (0x00028d8d) grid_qdial_pane

0x283e,	// (0x00028b18) listscroll_mce_pane

0x283e,	// (0x00028b18) bg_notes_pane

0x2abd,	// (0x00028d97) list_notes_pane

0x2acb,	// (0x00028da5) scroll_pane_cp06

0x2add,	// (0x00028db7) bg_calc_paper_pane

0xb69d,	// (0x00031977) list_calc_pane

0x2af5,	// (0x00028dcf) bg_calc_display_pane

0xb6b7,	// (0x00031991) calc_display_pane_t1

0xb6cc,	// (0x000319a6) calc_display_pane_t2

0xb6e1,	// (0x000319bb) calc_display_pane_t3

0x0002,

0xf136,	// (0x00035410) calc_display_pane_t

0x0d3e,	// (0x00027018) cell_calc_pane_ParamLimits

0x0d3e,	// (0x00027018) cell_calc_pane

0x2b01,	// (0x00028ddb) bg_calc_paper_pane_g1

0x2b0d,	// (0x00028de7) bg_calc_paper_pane_g2

0x2b19,	// (0x00028df3) bg_calc_paper_pane_g3

0x2b25,	// (0x00028dff) bg_calc_paper_pane_g4

0x2b31,	// (0x00028e0b) bg_calc_paper_pane_g5

0x2b3d,	// (0x00028e17) bg_calc_paper_pane_g6

0x2b4c,	// (0x00028e26) bg_calc_paper_pane_g7

0x2b5b,	// (0x00028e35) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x00035417) bg_calc_paper_pane_g

0x2b6a,	// (0x00028e44) calc_bg_paper_pane_g9

0x2b79,	// (0x00028e53) list_calc_item_pane_ParamLimits

0x2b79,	// (0x00028e53) list_calc_item_pane

0x2b8d,	// (0x00028e67) list_calc_item_pane_g1

0xb6f3,	// (0x000319cd) list_calc_item_pane_t1_ParamLimits

0xb6f3,	// (0x000319cd) list_calc_item_pane_t1

0x0d71,	// (0x0002704b) list_calc_item_pane_t2_ParamLimits

0x0d71,	// (0x0002704b) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x00035428) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x00035428) list_calc_item_pane_t

0x2b9a,	// (0x00028e74) cell_calc_pane_g1

0x2ba4,	// (0x00028e7e) grid_highlight_pane_cp02

0x2bc6,	// (0x00028ea0) bg_calc_display_pane_g1

0xb705,	// (0x000319df) bg_calc_display_pane_g2

0x2bcf,	// (0x00028ea9) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x00035432) bg_calc_display_pane_g

0x0d9f,	// (0x00027079) cell_qdial_pane_ParamLimits

0x0d9f,	// (0x00027079) cell_qdial_pane

0x2bd8,	// (0x00028eb2) cell_qdial_pane_g1_ParamLimits

0x2bd8,	// (0x00028eb2) cell_qdial_pane_g1

0x2bee,	// (0x00028ec8) cell_qdial_pane_g2_ParamLimits

0x2bee,	// (0x00028ec8) cell_qdial_pane_g2

0x2bff,	// (0x00028ed9) cell_qdial_pane_g3_ParamLimits

0x2bff,	// (0x00028ed9) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x00035439) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x00035439) cell_qdial_pane_g

0x2c21,	// (0x00028efb) cell_qdial_pane_t1_ParamLimits

0x2c21,	// (0x00028efb) cell_qdial_pane_t1

0x2c39,	// (0x00028f13) cell_qdial_pane_t2_ParamLimits

0x2c39,	// (0x00028f13) cell_qdial_pane_t2

0x2c4c,	// (0x00028f26) cell_qdial_pane_t3_ParamLimits

0x2c4c,	// (0x00028f26) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x00035442) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x00035442) cell_qdial_pane_t

0x25e3,	// (0x000288bd) grid_highlight_pane_cp04

0x2c5f,	// (0x00028f39) thumbnail_qdial_pane_ParamLimits

0x2c5f,	// (0x00028f39) thumbnail_qdial_pane

0x2cbb,	// (0x00028f95) list_help_pane

0x2cc5,	// (0x00028f9f) scroll_pane_cp02

0x2cce,	// (0x00028fa8) help_list_pane_t1_ParamLimits

0x2cce,	// (0x00028fa8) help_list_pane_t1

0xb70f,	// (0x000319e9) bg_notes_pane_g2

0xb717,	// (0x000319f1) bg_notes_pane_g3

0xb71f,	// (0x000319f9) notes_bg_pane_g1

0xb727,	// (0x00031a01) notes_bg_pane_g4

0xb72f,	// (0x00031a09) notes_bg_pane_g5

0xb737,	// (0x00031a11) notes_bg_pane_g6

0xb73f,	// (0x00031a19) notes_bg_pane_g7

0xb747,	// (0x00031a21) notes_bg_pane_g8

0xb74f,	// (0x00031a29) notes_bg_pane_g9

0x0006,

0xf186,	// (0x00035460) notes_bg_pane_g

0x2cea,	// (0x00028fc4) list_notes_text_pane_ParamLimits

0x2cea,	// (0x00028fc4) list_notes_text_pane

0x2d0d,	// (0x00028fe7) list_notes_text_pane_g1

0x2d16,	// (0x00028ff0) list_notes_text_pane_t1

0x2d35,	// (0x0002900f) listscroll_cale_week_pane

0x2d68,	// (0x00029042) bg_cale_heading_pane

0x2d80,	// (0x0002905a) bg_cale_pane_cp01

0x2d9d,	// (0x00029077) cale_week_corner_pane

0x2dbc,	// (0x00029096) cale_week_day_heading_pane

0x2dd9,	// (0x000290b3) cale_week_scroll_pane_g1

0x2dec,	// (0x000290c6) cale_week_scroll_pane_g2

0x2e04,	// (0x000290de) cale_week_scroll_pane_g3

0x2e1c,	// (0x000290f6) cale_week_scroll_pane_g4

0x2e34,	// (0x0002910e) cale_week_scroll_pane_g5

0x2e4c,	// (0x00029126) cale_week_scroll_pane_g6

0x2e64,	// (0x0002913e) cale_week_scroll_pane_g7

0x2e7c,	// (0x00029156) cale_week_scroll_pane_g8

0x2e98,	// (0x00029172) cale_week_scroll_pane_g9

0x2eb0,	// (0x0002918a) cale_week_scroll_pane_g10

0x2ec8,	// (0x000291a2) cale_week_scroll_pane_g11

0x2ee0,	// (0x000291ba) cale_week_scroll_pane_g12

0x2ef8,	// (0x000291d2) cale_week_scroll_pane_g13

0x2f10,	// (0x000291ea) cale_week_scroll_pane_g14

0x2f28,	// (0x00029202) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0003546f) cale_week_scroll_pane_g

0x2f5c,	// (0x00029236) cale_week_time_pane

0x2f78,	// (0x00029252) grid_cale_week_pane

0x2fa8,	// (0x00029282) scroll_pane_cp08

0x2fc5,	// (0x0002929f) cell_cale_week_pane_ParamLimits

0x2fc5,	// (0x0002929f) cell_cale_week_pane

0x303b,	// (0x00029315) cale_week_day_heading_pane_t1

0x3065,	// (0x0002933f) cale_week_day_heading_pane_t2

0x3094,	// (0x0002936e) cale_week_day_heading_pane_t3

0x30c3,	// (0x0002939d) cale_week_day_heading_pane_t4

0x30f2,	// (0x000293cc) cale_week_day_heading_pane_t5

0x3121,	// (0x000293fb) cale_week_day_heading_pane_t6

0x3150,	// (0x0002942a) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x00035490) cale_week_day_heading_pane_t

0x317a,	// (0x00029454) bg_cale_side_pane

0x0db1,	// (0x0002708b) cale_week_time_pane_t1

0x0deb,	// (0x000270c5) cale_week_time_pane_t2

0x0e25,	// (0x000270ff) cale_week_time_pane_t3

0x0e5f,	// (0x00027139) cale_week_time_pane_t4

0x0e99,	// (0x00027173) cale_week_time_pane_t5

0x0ed3,	// (0x000271ad) cale_week_time_pane_t6

0x0f0d,	// (0x000271e7) cale_week_time_pane_t7

0x0f47,	// (0x00027221) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0003549f) cale_week_time_pane_t

0x3188,	// (0x00029462) cell_cale_week_pane_g2

0x31a7,	// (0x00029481) cell_cale_week_pane_g3_ParamLimits

0x31a7,	// (0x00029481) cell_cale_week_pane_g3

0x31bf,	// (0x00029499) grid_highlight_pane_cp07

0x31c7,	// (0x000294a1) listscroll_gms_pane

0x31d1,	// (0x000294ab) grid_gms_pane

0x31da,	// (0x000294b4) listscroll_gms_pane_g1

0x31e2,	// (0x000294bc) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000354b0) listscroll_gms_pane_g

0x31ea,	// (0x000294c4) scroll_pane_cp010

0x31f5,	// (0x000294cf) cell_gms_pane_ParamLimits

0x31f5,	// (0x000294cf) cell_gms_pane

0x3205,	// (0x000294df) cell_gms_pane_g1

0x320d,	// (0x000294e7) cell_gms_pane_g2

0x2d0d,	// (0x00028fe7) cell_gms_pane_g3

0x3215,	// (0x000294ef) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000354b5) cell_gms_pane_g

0x321e,	// (0x000294f8) grid_highlight_pane_cp09

0x6b80,	// (0x0002ce5a) phob_pre_status_pane_g1

0x6b88,	// (0x0002ce62) phob_pre_status_pane_g2

0x6b90,	// (0x0002ce6a) phob_pre_status_pane_g3

0x6b98,	// (0x0002ce72) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x000358b3) phob_pre_status_pane_g

0x6ba8,	// (0x0002ce82) phob_pre_status_pane_t1

0x6bb6,	// (0x0002ce90) phob_pre_status_pane_t2

0x6bc4,	// (0x0002ce9e) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x000358be) phob_pre_status_pane_t

0x322e,	// (0x00029508) bg_list_pane_cp05

0x3236,	// (0x00029510) grid_vorec_pane

0x323e,	// (0x00029518) vorec_t1

0x324c,	// (0x00029526) vorec_t2

0x325a,	// (0x00029534) vorec_t3

0x3268,	// (0x00029542) vorec_t4

0x20fd,	// (0x000283d7) vorec_t5

0x210b,	// (0x000283e5) vorec_t6

0x0004,

0xf1e4,	// (0x000354be) vorec_t

0x2119,	// (0x000283f3) wait_bar_pane_cp01

0x3284,	// (0x0002955e) cell_vorec_pane_ParamLimits

0x3284,	// (0x0002955e) cell_vorec_pane

0xb757,	// (0x00031a31) cell_vorec_pane_g1

0x25e3,	// (0x000288bd) grid_highlight_pane_cp05

0x32a9,	// (0x00029583) cams_zoom_pane

0x32b8,	// (0x00029592) image_vga_pane

0x32d0,	// (0x000295aa) main_camera_pane_g1

0x32e0,	// (0x000295ba) main_camera_pane_g2

0x32f0,	// (0x000295ca) main_camera_pane_g3

0x3300,	// (0x000295da) main_camera_pane_g4

0x3310,	// (0x000295ea) main_camera_pane_g5

0x3320,	// (0x000295fa) main_camera_pane_g6

0x3330,	// (0x0002960a) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000354c9) main_camera_pane_g

0x334c,	// (0x00029626) main_camera_pane_t1

0x3362,	// (0x0002963c) main_camera_pane_t2

0x0001,

0xf200,	// (0x000354da) main_camera_pane_t

0x3394,	// (0x0002966e) cams_zoom_pane_cp_ParamLimits

0x3394,	// (0x0002966e) cams_zoom_pane_cp

0x33bc,	// (0x00029696) image_cif_pane_ParamLimits

0x33bc,	// (0x00029696) image_cif_pane

0x33ed,	// (0x000296c7) image_subqcif_pane

0x33f5,	// (0x000296cf) main_video_pane_g1_ParamLimits

0x33f5,	// (0x000296cf) main_video_pane_g1

0x3419,	// (0x000296f3) main_video_pane_g2_ParamLimits

0x3419,	// (0x000296f3) main_video_pane_g2

0x344d,	// (0x00029727) main_video_pane_g3_ParamLimits

0x344d,	// (0x00029727) main_video_pane_g3

0x347b,	// (0x00029755) main_video_pane_g4_ParamLimits

0x347b,	// (0x00029755) main_video_pane_g4

0x34a9,	// (0x00029783) main_video_pane_g5_ParamLimits

0x34a9,	// (0x00029783) main_video_pane_g5

0x34c1,	// (0x0002979b) main_video_pane_g6_ParamLimits

0x34c1,	// (0x0002979b) main_video_pane_g6

0x0006,

0xf205,	// (0x000354df) main_video_pane_g_ParamLimits

0xf205,	// (0x000354df) main_video_pane_g

0x34ea,	// (0x000297c4) main_video_pane_t1_ParamLimits

0x34ea,	// (0x000297c4) main_video_pane_t1

0x3533,	// (0x0002980d) cams_zoom_pane_g1

0x353c,	// (0x00029816) cams_zoom_pane_g2

0x3545,	// (0x0002981f) cams_zoom_pane_g3

0x354e,	// (0x00029828) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000354ee) cams_zoom_pane_g

0x356b,	// (0x00029845) grid_cams_pane

0x3580,	// (0x0002985a) linegrid_cams_pane

0x3591,	// (0x0002986b) cell_cams_pane_ParamLimits

0x3591,	// (0x0002986b) cell_cams_pane

0x35af,	// (0x00029889) cams_burst_image_pane

0x35b7,	// (0x00029891) cell_cams_pane_g1

0x25e3,	// (0x000288bd) grid_highlight_pane_cp03

0x2b9a,	// (0x00028e74) mp_bg_pane_g1

0x25e3,	// (0x000288bd) bg_list_pane_cp03

0xbe36,	// (0x00032110) bg_mp_pane

0xbe3e,	// (0x00032118) grid_mp_pane

0xbe46,	// (0x00032120) media_player_g1

0xbe4e,	// (0x00032128) media_player_t1

0xbe5c,	// (0x00032136) media_player_t2

0xbe6a,	// (0x00032144) media_player_t3

0xbe78,	// (0x00032152) media_player_t4

0xbe86,	// (0x00032160) media_player_t5

0xbe94,	// (0x0003216e) media_player_t6

0xbea2,	// (0x0003217c) media_player_t7

0x0006,

0xf5c3,	// (0x0003589d) media_player_t

0xbeb0,	// (0x0003218a) wait_bar_pane_cp02

0xf5a8,	// (0x00035882) main_usb_pane_t

0x6b77,	// (0x0002ce51) cell_mp_pane

0x2b9a,	// (0x00028e74) cell_mp_pane_g1

0x25e3,	// (0x000288bd) grid_highlight_pane_cp06

0x36af,	// (0x00029989) grid_skin_colour_pane

0x36b7,	// (0x00029991) list_highlight_pane_cp03

0x36bf,	// (0x00029999) skin_g1

0x36c7,	// (0x000299a1) skin_t1

0x36d6,	// (0x000299b0) skin_t2

0x0001,

0xf249,	// (0x00035523) skin_t

0x36e4,	// (0x000299be) cell_skin_colour_pane_ParamLimits

0x36e4,	// (0x000299be) cell_skin_colour_pane

0x36fe,	// (0x000299d8) cell_skin_colour_pane_g1

0x375f,	// (0x00029a39) call_video_g1_ParamLimits

0x375f,	// (0x00029a39) call_video_g1

0x3775,	// (0x00029a4f) call_video_g2_ParamLimits

0x3775,	// (0x00029a4f) call_video_g2

0x0001,

0xf24e,	// (0x00035528) call_video_g_ParamLimits

0xf24e,	// (0x00035528) call_video_g

0x37bd,	// (0x00029a97) call_video_uplink_pane_cp1_ParamLimits

0x37bd,	// (0x00029a97) call_video_uplink_pane_cp1

0x3822,	// (0x00029afc) call_video_uplink_pane_cp2

0x385a,	// (0x00029b34) video_down_crop_pane_ParamLimits

0x385a,	// (0x00029b34) video_down_crop_pane

0x391d,	// (0x00029bf7) video_down_pane_ParamLimits

0x391d,	// (0x00029bf7) video_down_pane

0x39c7,	// (0x00029ca1) video_down_subqcif_pane_ParamLimits

0x39c7,	// (0x00029ca1) video_down_subqcif_pane

0x39df,	// (0x00029cb9) video_down_subqcif_pane_cp_ParamLimits

0x39df,	// (0x00029cb9) video_down_subqcif_pane_cp

0x3a16,	// (0x00029cf0) im_reading_pane_ParamLimits

0x3a16,	// (0x00029cf0) im_reading_pane

0x3a28,	// (0x00029d02) im_writing_pane_ParamLimits

0x3a28,	// (0x00029d02) im_writing_pane

0x3a46,	// (0x00029d20) im_reading_pane_t1

0x3a7c,	// (0x00029d56) list_im_pane

0x3a8d,	// (0x00029d67) scroll_pane_cp07

0x3aa6,	// (0x00029d80) im_writing_pane_t1_ParamLimits

0x3aa6,	// (0x00029d80) im_writing_pane_t1

0x3abb,	// (0x00029d95) im_writing_pane_t2_ParamLimits

0x3abb,	// (0x00029d95) im_writing_pane_t2

0x0001,

0xf258,	// (0x00035532) im_writing_pane_t_ParamLimits

0xf258,	// (0x00035532) im_writing_pane_t

0x25e3,	// (0x000288bd) input_focus_pane_cp04

0x25e3,	// (0x000288bd) input_focus_pane_cp05

0x3ad8,	// (0x00029db2) list_im_single_pane_ParamLimits

0x3ad8,	// (0x00029db2) list_im_single_pane

0x3aee,	// (0x00029dc8) list_single_im_pane_t1

0x6b3d,	// (0x0002ce17) blid_accuracy_pane

0x6b45,	// (0x0002ce1f) blid_compass_pane

0x6b4d,	// (0x0002ce27) main_location_t1

0x6b5b,	// (0x0002ce35) main_location_t2

0x6b69,	// (0x0002ce43) main_location_t3

0x0002,

0xf5d2,	// (0x000358ac) main_location_t

0x25e3,	// (0x000288bd) aid_levels_location

0x2b9a,	// (0x00028e74) blid_accuracy_pane_g1

0x2b9a,	// (0x00028e74) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x00035594) blid_accuracy_pane_g

0x3b28,	// (0x00029e02) wml_content_pane

0x3b66,	// (0x00029e40) wml_button_pane_ParamLimits

0x3b66,	// (0x00029e40) wml_button_pane

0x3b7a,	// (0x00029e54) wml_list_single_large_pane_ParamLimits

0x3b7a,	// (0x00029e54) wml_list_single_large_pane

0x3b8e,	// (0x00029e68) wml_list_single_medium_pane_ParamLimits

0x3b8e,	// (0x00029e68) wml_list_single_medium_pane

0x3ba3,	// (0x00029e7d) wml_list_single_small_pane_ParamLimits

0x3ba3,	// (0x00029e7d) wml_list_single_small_pane

0x3bba,	// (0x00029e94) wml_selection_box_pane_ParamLimits

0x3bba,	// (0x00029e94) wml_selection_box_pane

0x3bcd,	// (0x00029ea7) wml_list_single_pane_t1

0x3bdc,	// (0x00029eb6) wml_list_single_medium_pane_t1

0x3beb,	// (0x00029ec5) wml_list_single_large_pane_t1

0x3bfa,	// (0x00029ed4) input_focus_pane_cp02_ParamLimits

0x3bfa,	// (0x00029ed4) input_focus_pane_cp02

0x3c0d,	// (0x00029ee7) wml_selection_box_pane_g1

0x3c16,	// (0x00029ef0) wml_selection_box_pane_t1_ParamLimits

0x3c16,	// (0x00029ef0) wml_selection_box_pane_t1

0x283e,	// (0x00028b18) bg_wml_button_pane_ParamLimits

0x283e,	// (0x00028b18) bg_wml_button_pane

0x3c2e,	// (0x00029f08) wml_button_pane_g1

0x3c36,	// (0x00029f10) wml_button_pane_t1

0x3c2e,	// (0x00029f08) wml_button_bg_pane_g1

0x3c46,	// (0x00029f20) wml_button_bg_pane_g2

0x3c4e,	// (0x00029f28) wml_button_bg_pane_g3

0x3c56,	// (0x00029f30) wml_button_bg_pane_g4

0x3c5e,	// (0x00029f38) wml_button_bg_pane_g5

0x3c66,	// (0x00029f40) wml_button_bg_pane_g6

0x3c6e,	// (0x00029f48) wml_button_bg_pane_g7

0x3c76,	// (0x00029f50) wml_button_bg_pane_g8

0x3c7e,	// (0x00029f58) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x00035537) wml_button_bg_pane_g

0x3c86,	// (0x00029f60) bg_list_pane_cp02

0x3c8f,	// (0x00029f69) mce_header_pane_ParamLimits

0x3c8f,	// (0x00029f69) mce_header_pane

0x3ca3,	// (0x00029f7d) mce_icon_pane

0x3ca3,	// (0x00029f7d) mce_image_pane

0x3cac,	// (0x00029f86) mce_text_pane_ParamLimits

0x3cac,	// (0x00029f86) mce_text_pane

0x3cc0,	// (0x00029f9a) scroll_pane_cp03

0x3cc0,	// (0x00029f9a) scroll_pane_cp04

0x3cca,	// (0x00029fa4) scroll_pane_cp05_ParamLimits

0x3cca,	// (0x00029fa4) scroll_pane_cp05

0x3cd6,	// (0x00029fb0) mce_header_field_pane_ParamLimits

0x3cd6,	// (0x00029fb0) mce_header_field_pane

0x3ced,	// (0x00029fc7) mce_header_field_pane_2_ParamLimits

0x3ced,	// (0x00029fc7) mce_header_field_pane_2

0x3d03,	// (0x00029fdd) mce_header_field_pane_3

0x3d0b,	// (0x00029fe5) list_single_mce_message_pane_ParamLimits

0x3d0b,	// (0x00029fe5) list_single_mce_message_pane

0x3d20,	// (0x00029ffa) list_single_mce_smart_pane_ParamLimits

0x3d20,	// (0x00029ffa) list_single_mce_smart_pane

0x3d40,	// (0x0002a01a) input_focus_pane_cp03

0x3d49,	// (0x0002a023) list_header_data_pane

0x3d51,	// (0x0002a02b) mce_header_field_pane_t1

0x3d5f,	// (0x0002a039) list_single_mce_header_pane_ParamLimits

0x3d5f,	// (0x0002a039) list_single_mce_header_pane

0x3d73,	// (0x0002a04d) list_single_mce_header_pane_t1

0x3d82,	// (0x0002a05c) list_single_mce_message_pane_g1

0x3d8b,	// (0x0002a065) list_single_mce_message_pane_t1

0x3dc0,	// (0x0002a09a) bg_cale_heading_pane_cp01_ParamLimits

0x3dc0,	// (0x0002a09a) bg_cale_heading_pane_cp01

0x3def,	// (0x0002a0c9) bg_cale_pane_cp02_ParamLimits

0x3def,	// (0x0002a0c9) bg_cale_pane_cp02

0x3e1c,	// (0x0002a0f6) cale_month_corner_pane

0x3e3b,	// (0x0002a115) cale_month_day_heading_pane_ParamLimits

0x3e3b,	// (0x0002a115) cale_month_day_heading_pane

0x3e72,	// (0x0002a14c) cale_month_pane_g1_ParamLimits

0x3e72,	// (0x0002a14c) cale_month_pane_g1

0x3e96,	// (0x0002a170) cale_month_pane_g2_ParamLimits

0x3e96,	// (0x0002a170) cale_month_pane_g2

0x3ebe,	// (0x0002a198) cale_month_pane_g3_ParamLimits

0x3ebe,	// (0x0002a198) cale_month_pane_g3

0x3efa,	// (0x0002a1d4) cale_month_pane_g4_ParamLimits

0x3efa,	// (0x0002a1d4) cale_month_pane_g4

0x3f36,	// (0x0002a210) cale_month_pane_g5_ParamLimits

0x3f36,	// (0x0002a210) cale_month_pane_g5

0x3f72,	// (0x0002a24c) cale_month_pane_g6_ParamLimits

0x3f72,	// (0x0002a24c) cale_month_pane_g6

0x3fae,	// (0x0002a288) cale_month_pane_g7_ParamLimits

0x3fae,	// (0x0002a288) cale_month_pane_g7

0x3fea,	// (0x0002a2c4) cale_month_pane_g8_ParamLimits

0x3fea,	// (0x0002a2c4) cale_month_pane_g8

0x402e,	// (0x0002a308) cale_month_pane_g9_ParamLimits

0x402e,	// (0x0002a308) cale_month_pane_g9

0x4070,	// (0x0002a34a) cale_month_pane_g10_ParamLimits

0x4070,	// (0x0002a34a) cale_month_pane_g10

0x40b2,	// (0x0002a38c) cale_month_pane_g11_ParamLimits

0x40b2,	// (0x0002a38c) cale_month_pane_g11

0x40f4,	// (0x0002a3ce) cale_month_pane_g12_ParamLimits

0x40f4,	// (0x0002a3ce) cale_month_pane_g12

0x4136,	// (0x0002a410) cale_month_pane_g13_ParamLimits

0x4136,	// (0x0002a410) cale_month_pane_g13

0x000c,

0xf270,	// (0x0003554a) cale_month_pane_g_ParamLimits

0xf270,	// (0x0003554a) cale_month_pane_g

0x418a,	// (0x0002a464) cale_month_week_pane

0x41a6,	// (0x0002a480) grid_cale_month_pane_ParamLimits

0x41a6,	// (0x0002a480) grid_cale_month_pane

0x41d4,	// (0x0002a4ae) cale_month_day_heading_pane_t1

0x425a,	// (0x0002a534) cale_month_day_heading_pane_t2

0x42eb,	// (0x0002a5c5) cale_month_day_heading_pane_t3

0x437c,	// (0x0002a656) cale_month_day_heading_pane_t4

0x440d,	// (0x0002a6e7) cale_month_day_heading_pane_t5

0x449e,	// (0x0002a778) cale_month_day_heading_pane_t6

0x452f,	// (0x0002a809) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x00035565) cale_month_day_heading_pane_t

0x317a,	// (0x00029454) bg_cale_side_pane_cp01

0x45c4,	// (0x0002a89e) cale_month_week_pane_t1

0x45dd,	// (0x0002a8b7) cale_month_week_pane_t2

0x45f6,	// (0x0002a8d0) cale_month_week_pane_t3

0x460f,	// (0x0002a8e9) cale_month_week_pane_t4

0x4628,	// (0x0002a902) cale_month_week_pane_t5

0x4641,	// (0x0002a91b) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x00035574) cale_month_week_pane_t

0x465a,	// (0x0002a934) cell_cale_month_pane_ParamLimits

0x465a,	// (0x0002a934) cell_cale_month_pane

0xb761,	// (0x00031a3b) cell_cale_month_pane_g1

0x0f81,	// (0x0002725b) cell_cale_month_pane_t1_ParamLimits

0x0f81,	// (0x0002725b) cell_cale_month_pane_t1

0x31bf,	// (0x00029499) grid_highlight_pane_cp08

0x2b9a,	// (0x00028e74) main_smil_g1

0x4776,	// (0x0002aa50) smil_status_pane

0x477f,	// (0x0002aa59) smil_text_pane

0xbd16,	// (0x00031ff0) bg_popup_call3_rect_pane_g8

0xbd1e,	// (0x00031ff8) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0003582d) bg_popup_call3_rect_pane_g

0xbfff,	// (0x000322d9) smil_status_volume_pane_g1

0x4791,	// (0x0002aa6b) smil_status_pane_t1

0xc032,	// (0x0003230c) volume_smil_pane

0x47a8,	// (0x0002aa82) list_smil_text_pane

0x47b2,	// (0x0002aa8c) scroll_pane_cp011

0x47bd,	// (0x0002aa97) smil_text_list_pane_t1_ParamLimits

0x47bd,	// (0x0002aa97) smil_text_list_pane_t1

0xb76d,	// (0x00031a47) aid_volume_smil_ParamLimits

0xb76d,	// (0x00031a47) aid_volume_smil

0x2b9a,	// (0x00028e74) smil_volume_pane_g1

0x2b9a,	// (0x00028e74) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x00035594) smil_volume_pane_g

0x2d35,	// (0x0002900f) listscroll_cale_day_pane

0x47f9,	// (0x0002aad3) bg_cale_pane

0x4811,	// (0x0002aaeb) list_cale_pane

0x4834,	// (0x0002ab0e) scroll_pane_cp09

0x4845,	// (0x0002ab1f) cale_bg_pane_g1

0x484d,	// (0x0002ab27) cale_bg_pane_g2

0x4855,	// (0x0002ab2f) cale_bg_pane_g3

0x485d,	// (0x0002ab37) cale_bg_pane_g4

0x4865,	// (0x0002ab3f) cale_bg_pane_g5

0x486d,	// (0x0002ab47) cale_bg_pane_g6

0x4875,	// (0x0002ab4f) cale_bg_pane_g7

0x487d,	// (0x0002ab57) cale_bg_pane_g8

0x4885,	// (0x0002ab5f) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x00035599) cale_bg_pane_g

0x4895,	// (0x0002ab6f) list_cale_time_pane_ParamLimits

0x4895,	// (0x0002ab6f) list_cale_time_pane

0x48aa,	// (0x0002ab84) list_cale_time_pane_g1_ParamLimits

0x48aa,	// (0x0002ab84) list_cale_time_pane_g1

0x48b6,	// (0x0002ab90) list_cale_time_pane_g2_ParamLimits

0x48b6,	// (0x0002ab90) list_cale_time_pane_g2

0x48c3,	// (0x0002ab9d) list_cale_time_pane_g3_ParamLimits

0x48c3,	// (0x0002ab9d) list_cale_time_pane_g3

0x48cf,	// (0x0002aba9) list_cale_time_pane_g4_ParamLimits

0x48cf,	// (0x0002aba9) list_cale_time_pane_g4

0x48db,	// (0x0002abb5) list_cale_time_pane_g5_ParamLimits

0x48db,	// (0x0002abb5) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000355ac) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000355ac) list_cale_time_pane_g

0x48f4,	// (0x0002abce) list_cale_time_pane_t1_ParamLimits

0x48f4,	// (0x0002abce) list_cale_time_pane_t1

0x491c,	// (0x0002abf6) list_cale_time_pane_t2_ParamLimits

0x491c,	// (0x0002abf6) list_cale_time_pane_t2

0x50e2,	// (0x0002b3bc) aid_blid_cardinal_pane

0x512c,	// (0x0002b406) compass_pane_t4

0x4944,	// (0x0002ac1e) list_cale_time_pane_t4_ParamLimits

0x4944,	// (0x0002ac1e) list_cale_time_pane_t4

0x513a,	// (0x0002b414) compass_pane_t5

0x5148,	// (0x0002b422) compass_pane_t6

0x5156,	// (0x0002b430) compass_pane_t7

0x51e2,	// (0x0002b4bc) navi_pane_cc_t1

0x53ea,	// (0x0002b6c4) aid_phob_thumbnail_center_pane

0x5a20,	// (0x0002bcfa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000355b9) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000355b9) list_cale_time_pane_t

0x2218,	// (0x000284f2) bg_popup_window_pane_cp02_ParamLimits

0x2218,	// (0x000284f2) bg_popup_window_pane_cp02

0x496c,	// (0x0002ac46) heading_pane_cp01_ParamLimits

0x496c,	// (0x0002ac46) heading_pane_cp01

0x4978,	// (0x0002ac52) loc_req_pane_ParamLimits

0x4978,	// (0x0002ac52) loc_req_pane

0x4988,	// (0x0002ac62) loc_type_pane_ParamLimits

0x4988,	// (0x0002ac62) loc_type_pane

0x499a,	// (0x0002ac74) loc_type_pane_t1_ParamLimits

0x499a,	// (0x0002ac74) loc_type_pane_t1

0x49ac,	// (0x0002ac86) loc_type_pane_t2_ParamLimits

0x49ac,	// (0x0002ac86) loc_type_pane_t2

0x49be,	// (0x0002ac98) loc_type_pane_t3_ParamLimits

0x49be,	// (0x0002ac98) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000355c0) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000355c0) loc_type_pane_t

0x49d0,	// (0x0002acaa) list_loc_req_pane

0x49da,	// (0x0002acb4) scroll_pane_cp012

0x49e3,	// (0x0002acbd) list_single_loc_request_popup_menu_pane_ParamLimits

0x49e3,	// (0x0002acbd) list_single_loc_request_popup_menu_pane

0x49f0,	// (0x0002acca) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x49f0,	// (0x0002acca) list_single_loc_request_popup_menu_pane_g1

0x49fc,	// (0x0002acd6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x49fc,	// (0x0002acd6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000355c7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000355c7) list_single_loc_request_popup_menu_pane_g

0x4a08,	// (0x0002ace2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4a08,	// (0x0002ace2) list_single_loc_request_popup_menu_pane_t1

0x283e,	// (0x00028b18) bg_popup_window_pane_cp03_ParamLimits

0x283e,	// (0x00028b18) bg_popup_window_pane_cp03

0x4a1e,	// (0x0002acf8) heading_loc_req_pane_ParamLimits

0x4a1e,	// (0x0002acf8) heading_loc_req_pane

0x4a2a,	// (0x0002ad04) popup_dyc_status_message_window_g1_ParamLimits

0x4a2a,	// (0x0002ad04) popup_dyc_status_message_window_g1

0x4a3e,	// (0x0002ad18) popup_dyc_status_message_window_t1_ParamLimits

0x4a3e,	// (0x0002ad18) popup_dyc_status_message_window_t1

0x4a53,	// (0x0002ad2d) popup_dyc_status_message_window_t2_ParamLimits

0x4a53,	// (0x0002ad2d) popup_dyc_status_message_window_t2

0x4a68,	// (0x0002ad42) popup_dyc_status_message_window_t3_ParamLimits

0x4a68,	// (0x0002ad42) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000355cc) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000355cc) popup_dyc_status_message_window_t

0x25e3,	// (0x000288bd) bg_heading_pane_cp01

0x4a84,	// (0x0002ad5e) heading_loc_req_pane_g1

0x4a8c,	// (0x0002ad66) heading_loc_req_pane_g2

0x4a94,	// (0x0002ad6e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000355d3) heading_loc_req_pane_g

0x4a9c,	// (0x0002ad76) heading_loc_req_pane_t1

0x4bb9,	// (0x0002ae93) bg_popup_sub_pane_cp01_ParamLimits

0x4bb9,	// (0x0002ae93) bg_popup_sub_pane_cp01

0x4bc7,	// (0x0002aea1) popup_cale_events_window_g1_ParamLimits

0x4bc7,	// (0x0002aea1) popup_cale_events_window_g1

0x4be7,	// (0x0002aec1) popup_cale_events_window_g2_ParamLimits

0x4be7,	// (0x0002aec1) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x00035607) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x00035607) popup_cale_events_window_g

0x4c07,	// (0x0002aee1) popup_cale_events_window_t1_ParamLimits

0x4c07,	// (0x0002aee1) popup_cale_events_window_t1

0x4c19,	// (0x0002aef3) popup_cale_events_window_t2_ParamLimits

0x4c19,	// (0x0002aef3) popup_cale_events_window_t2

0x4c57,	// (0x0002af31) popup_cale_events_window_t3_ParamLimits

0x4c57,	// (0x0002af31) popup_cale_events_window_t3

0x4c91,	// (0x0002af6b) popup_cale_events_window_t4_ParamLimits

0x4c91,	// (0x0002af6b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0003560c) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0003560c) popup_cale_events_window_t

0x4cc7,	// (0x0002afa1) call_type_pane

0x4cd7,	// (0x0002afb1) popup_call_status_window_g1

0x4ceb,	// (0x0002afc5) popup_call_status_window_g2

0x4cff,	// (0x0002afd9) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x00035615) popup_call_status_window_g

0x4d0f,	// (0x0002afe9) call_type_pane_g1

0x4d18,	// (0x0002aff2) call_type_pane_g2

0x0001,

0xf342,	// (0x0003561c) call_type_pane_g

0x25e3,	// (0x000288bd) bg_popup_sub_pane_cp02

0x4d21,	// (0x0002affb) listscroll_popup_wml_pane

0x4d29,	// (0x0002b003) list_wml_pane

0x4d33,	// (0x0002b00d) scroll_pane_cp013

0x4d3c,	// (0x0002b016) list_single_graphic_popup_wml_pane_ParamLimits

0x4d3c,	// (0x0002b016) list_single_graphic_popup_wml_pane

0x2b9a,	// (0x00028e74) list_single_graphic_popup_wml_pane_g1

0x4d4f,	// (0x0002b029) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x00035621) list_single_graphic_popup_wml_pane_g

0x4d57,	// (0x0002b031) list_single_graphic_popup_wml_pane_t1

0x4d6d,	// (0x0002b047) aid_call_pane

0x2836,	// (0x00028b10) popup_clock_analogue_window_g1

0x2836,	// (0x00028b10) popup_clock_analogue_window_g2

0xb78f,	// (0x00031a69) popup_clock_analogue_window_g3

0xb78f,	// (0x00031a69) popup_clock_analogue_window_g4

0x2b9a,	// (0x00028e74) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x00035626) popup_clock_analogue_window_g

0xb797,	// (0x00031a71) popup_clock_analogue_window_t1

0xb7a5,	// (0x00031a7f) clock_digital_number_pane_ParamLimits

0xb7a5,	// (0x00031a7f) clock_digital_number_pane

0xb7b1,	// (0x00031a8b) clock_digital_number_pane_cp02_ParamLimits

0xb7b1,	// (0x00031a8b) clock_digital_number_pane_cp02

0xb7bd,	// (0x00031a97) clock_digital_number_pane_cp03_ParamLimits

0xb7bd,	// (0x00031a97) clock_digital_number_pane_cp03

0xb7c9,	// (0x00031aa3) clock_digital_number_pane_cp04_ParamLimits

0xb7c9,	// (0x00031aa3) clock_digital_number_pane_cp04

0xb7d5,	// (0x00031aaf) clock_digital_separator_pane_ParamLimits

0xb7d5,	// (0x00031aaf) clock_digital_separator_pane

0xb7e1,	// (0x00031abb) popup_clock_digital_window_t1

0x2b9a,	// (0x00028e74) clock_digital_number_pane_g1

0x2b9a,	// (0x00028e74) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x00035594) clock_digital_number_pane_g

0x2b9a,	// (0x00028e74) clock_digital_separator_pane_g1

0x2b9a,	// (0x00028e74) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x00035594) clock_digital_separator_pane_g

0x25e3,	// (0x000288bd) bg_popup_window_pane_cp04

0x4d75,	// (0x0002b04f) heading_pane_cp03

0x4d7d,	// (0x0002b057) listscroll_popup_gms_pane

0x4d85,	// (0x0002b05f) grid_large_graphic_popup_pane

0x4d8f,	// (0x0002b069) listscroll_popup_gms_pane_g1

0x4d97,	// (0x0002b071) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x00035631) listscroll_popup_gms_pane_g

0x3b5e,	// (0x00029e38) scroll_pane_cp014

0x4d9f,	// (0x0002b079) cell_large_graphic_popup_pane_ParamLimits

0x4d9f,	// (0x0002b079) cell_large_graphic_popup_pane

0x4db5,	// (0x0002b08f) cell_large_graphic_popup_pane_g1_ParamLimits

0x4db5,	// (0x0002b08f) cell_large_graphic_popup_pane_g1

0x4dc1,	// (0x0002b09b) cell_large_graphic_popup_pane_g2_ParamLimits

0x4dc1,	// (0x0002b09b) cell_large_graphic_popup_pane_g2

0x4dcd,	// (0x0002b0a7) cell_large_graphic_popup_pane_g3_ParamLimits

0x4dcd,	// (0x0002b0a7) cell_large_graphic_popup_pane_g3

0x4dda,	// (0x0002b0b4) cell_large_graphic_popup_pane_g4_ParamLimits

0x4dda,	// (0x0002b0b4) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x00035636) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x00035636) cell_large_graphic_popup_pane_g

0x4dea,	// (0x0002b0c4) grid_highlight_pane_cp010

0x2b9a,	// (0x00028e74) bg_popup_call_pane_g1

0x4df4,	// (0x0002b0ce) list_single_graphic_popup_conf_pane_ParamLimits

0x4df4,	// (0x0002b0ce) list_single_graphic_popup_conf_pane

0x4e07,	// (0x0002b0e1) list_highlight_pane_cp01

0x4e10,	// (0x0002b0ea) list_single_graphic_popup_conf_pane_g1

0x4e18,	// (0x0002b0f2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0003563f) list_single_graphic_popup_conf_pane_g

0x4e20,	// (0x0002b0fa) list_single_graphic_popup_conf_pane_t1

0x4e2e,	// (0x0002b108) linegrid_cams_pane_g1

0x4e37,	// (0x0002b111) linegrid_cams_pane_g2

0x2d0d,	// (0x00028fe7) linegrid_cams_pane_g3

0x4e40,	// (0x0002b11a) linegrid_cams_pane_g4

0x4e49,	// (0x0002b123) linegrid_cams_pane_g5

0x4e52,	// (0x0002b12c) linegrid_cams_pane_g6

0x3215,	// (0x000294ef) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00035644) linegrid_cams_pane_g

0x4e5b,	// (0x0002b135) popup_clock_analogue_window

0x4e5b,	// (0x0002b135) popup_clock_digital_window

0x25e3,	// (0x000288bd) popup_phob_thumbnail_window

0x2b9a,	// (0x00028e74) call_video_uplink_pane_g1

0x4e64,	// (0x0002b13e) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x00035653) call_video_uplink_pane_g

0x31bf,	// (0x00029499) video_uplink_pane

0x4e6c,	// (0x0002b146) mce_image_pane_g1

0x4e76,	// (0x0002b150) mce_image_pane_g2

0x4e7e,	// (0x0002b158) mce_image_pane_g3

0x4e86,	// (0x0002b160) mce_image_pane_g4

0x4e8e,	// (0x0002b168) mce_image_pane_g5

0x0004,

0xf37e,	// (0x00035658) mce_image_pane_g

0x4e96,	// (0x0002b170) control_top_pane_stacon_cp01_ParamLimits

0x4e96,	// (0x0002b170) control_top_pane_stacon_cp01

0x4ea6,	// (0x0002b180) uni_indicator_pane_stacon_cp01_ParamLimits

0x4ea6,	// (0x0002b180) uni_indicator_pane_stacon_cp01

0x4eb7,	// (0x0002b191) bg_popup_sub_pane_cp03

0x4ec1,	// (0x0002b19b) chi_dic_find_pane

0x4ec9,	// (0x0002b1a3) listscroll_chi_dic_pane

0x4ed2,	// (0x0002b1ac) main_pane_chidic_g1

0x4ee5,	// (0x0002b1bf) chi_dic_find_pane_t1

0x4ef3,	// (0x0002b1cd) find_chidic_pane

0x4efc,	// (0x0002b1d6) chi_dic_list_pane_ParamLimits

0x4efc,	// (0x0002b1d6) chi_dic_list_pane

0x4f0d,	// (0x0002b1e7) scroll_pane_cp020

0x4f15,	// (0x0002b1ef) find_chidic_pane_t1

0x25e3,	// (0x000288bd) input_focus_pane_cp06

0x4f24,	// (0x0002b1fe) list_chi_dic_pane_ParamLimits

0x4f24,	// (0x0002b1fe) list_chi_dic_pane

0x4f36,	// (0x0002b210) list_chi_dic_pane_t1_ParamLimits

0x4f36,	// (0x0002b210) list_chi_dic_pane_t1

0x25e3,	// (0x000288bd) list_highlight_pane_cp020

0x4f49,	// (0x0002b223) bg_cale_heading_pane_g1

0x4f51,	// (0x0002b22b) bg_cale_heading_pane_g2

0x4f59,	// (0x0002b233) bg_cale_heading_pane_g3

0x4f61,	// (0x0002b23b) bg_cale_heading_pane_g4

0x4f69,	// (0x0002b243) bg_cale_heading_pane_g5

0x4f71,	// (0x0002b24b) bg_cale_heading_pane_g6

0x4f79,	// (0x0002b253) bg_cale_heading_pane_g7

0x4f81,	// (0x0002b25b) bg_cale_heading_pane_g8

0x4f89,	// (0x0002b263) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x00035663) bg_cale_heading_pane_g

0x4f49,	// (0x0002b223) bg_cale_side_pane_g1

0x4f91,	// (0x0002b26b) bg_cale_side_pane_g2

0x4f99,	// (0x0002b273) bg_cale_side_pane_g3

0x4fa1,	// (0x0002b27b) bg_cale_side_pane_g4

0x4fa9,	// (0x0002b283) bg_cale_side_pane_g5

0x4fb1,	// (0x0002b28b) bg_cale_side_pane_g6

0x4fb9,	// (0x0002b293) bg_cale_side_pane_g7

0x4fc1,	// (0x0002b29b) bg_cale_side_pane_g8

0x4fc9,	// (0x0002b2a3) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x00035676) bg_cale_side_pane_g

0x4fd1,	// (0x0002b2ab) popup_call_status_window_ParamLimits

0x4fd1,	// (0x0002b2ab) popup_call_status_window

0x5018,	// (0x0002b2f2) stacon_top_pane

0x5020,	// (0x0002b2fa) status_pane_ParamLimits

0x5020,	// (0x0002b2fa) status_pane

0x503a,	// (0x0002b314) status_small_pane

0x5042,	// (0x0002b31c) control_pane

0x25e3,	// (0x000288bd) stacon_bottom_pane

0x504a,	// (0x0002b324) list_single_mce_smart_pane_t1_ParamLimits

0x504a,	// (0x0002b324) list_single_mce_smart_pane_t1

0x505d,	// (0x0002b337) list_single_mce_smart_pane_t2_ParamLimits

0x505d,	// (0x0002b337) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x00035689) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x00035689) list_single_mce_smart_pane_t

0x5085,	// (0x0002b35f) compass_pane

0x508e,	// (0x0002b368) main_location2_pane_t1

0x50a4,	// (0x0002b37e) main_location2_pane_t2

0x50ba,	// (0x0002b394) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0003568e) main_location2_pane_t

0x5102,	// (0x0002b3dc) compass_pane_g1_ParamLimits

0x5102,	// (0x0002b3dc) compass_pane_g1

0x510e,	// (0x0002b3e8) compass_pane_t1

0x511d,	// (0x0002b3f7) compass_pane_t2

0x0005,

0xf3bd,	// (0x00035697) compass_pane_t

0x5164,	// (0x0002b43e) text_secondary_cp61

0x51d9,	// (0x0002b4b3) navi_pane_cams_g5

0x5242,	// (0x0002b51c) navi_pane_im_t1

0x5250,	// (0x0002b52a) navi_pane_mp_g1_ParamLimits

0x5250,	// (0x0002b52a) navi_pane_mp_g1

0x5264,	// (0x0002b53e) navi_pane_mp_g2_ParamLimits

0x5264,	// (0x0002b53e) navi_pane_mp_g2

0x5270,	// (0x0002b54a) navi_pane_mp_g3_ParamLimits

0x5270,	// (0x0002b54a) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000356ab) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000356ab) navi_pane_mp_g

0x527c,	// (0x0002b556) navi_pane_mp_t1

0x528a,	// (0x0002b564) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000356b2) navi_pane_mp_t

0x5333,	// (0x0002b60d) navi_pane_vt_g1

0x527c,	// (0x0002b556) navi_pane_vt_t1

0x533b,	// (0x0002b615) navi_slider_pane

0x322e,	// (0x00029508) zooming_pane

0x534b,	// (0x0002b625) navi_slider_pane_g1

0xb7fe,	// (0x00031ad8) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000356b9) navi_slider_pane_g

0x536f,	// (0x0002b649) aid_levels_zoom

0x5377,	// (0x0002b651) zooming_pane_g1

0x537f,	// (0x0002b659) zooming_pane_g2

0x537f,	// (0x0002b659) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000356c8) zooming_pane_g

0x5387,	// (0x0002b661) level_10_zoom

0x5390,	// (0x0002b66a) level_11_zoom

0x5399,	// (0x0002b673) level_1_zoom

0x53a2,	// (0x0002b67c) level_2_zoom

0x53ab,	// (0x0002b685) level_3_zoom

0x53b4,	// (0x0002b68e) level_4_zoom

0x53bd,	// (0x0002b697) level_5_zoom

0x53c6,	// (0x0002b6a0) level_6_zoom

0x53cf,	// (0x0002b6a9) level_7_zoom

0x53d8,	// (0x0002b6b2) level_8_zoom

0x53e1,	// (0x0002b6bb) level_9_zoom

0x53f2,	// (0x0002b6cc) popup_phob_thumbnail_window_g1

0x53fa,	// (0x0002b6d4) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000356cf) popup_phob_thumbnail_window_g

0xbeb8,	// (0x00032192) level_1_location

0xbec0,	// (0x0003219a) level_2_location

0xbec8,	// (0x000321a2) level_3_location

0xbed0,	// (0x000321aa) level_4_location

0x322e,	// (0x00029508) level_5_location

0x5402,	// (0x0002b6dc) mce_icon_pane_g1

0x540a,	// (0x0002b6e4) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000356d4) mce_icon_pane_g

0x5412,	// (0x0002b6ec) main_mup_pane_g1_ParamLimits

0x5412,	// (0x0002b6ec) main_mup_pane_g1

0x5428,	// (0x0002b702) main_mup_pane_g2_ParamLimits

0x5428,	// (0x0002b702) main_mup_pane_g2

0x5440,	// (0x0002b71a) main_mup_pane_g3_ParamLimits

0x5440,	// (0x0002b71a) main_mup_pane_g3

0x5458,	// (0x0002b732) main_mup_pane_g4_ParamLimits

0x5458,	// (0x0002b732) main_mup_pane_g4

0x5470,	// (0x0002b74a) main_mup_pane_g5_ParamLimits

0x5470,	// (0x0002b74a) main_mup_pane_g5

0x548a,	// (0x0002b764) main_mup_pane_g6_ParamLimits

0x548a,	// (0x0002b764) main_mup_pane_g6

0x54a2,	// (0x0002b77c) main_mup_pane_g7_ParamLimits

0x54a2,	// (0x0002b77c) main_mup_pane_g7

0x54ba,	// (0x0002b794) main_mup_pane_g8_ParamLimits

0x54ba,	// (0x0002b794) main_mup_pane_g8

0x54d2,	// (0x0002b7ac) main_mup_pane_g9_ParamLimits

0x54d2,	// (0x0002b7ac) main_mup_pane_g9

0x54e6,	// (0x0002b7c0) main_mup_pane_g10_ParamLimits

0x54e6,	// (0x0002b7c0) main_mup_pane_g10

0x54fa,	// (0x0002b7d4) main_mup_pane_g11_ParamLimits

0x54fa,	// (0x0002b7d4) main_mup_pane_g11

0x550c,	// (0x0002b7e6) main_mup_pane_g12_ParamLimits

0x550c,	// (0x0002b7e6) main_mup_pane_g12

0x5520,	// (0x0002b7fa) main_mup_pane_g13_ParamLimits

0x5520,	// (0x0002b7fa) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000356d9) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000356d9) main_mup_pane_g

0x5532,	// (0x0002b80c) main_mup_pane_t1_ParamLimits

0x5532,	// (0x0002b80c) main_mup_pane_t1

0x554c,	// (0x0002b826) main_mup_pane_t2_ParamLimits

0x554c,	// (0x0002b826) main_mup_pane_t2

0x5564,	// (0x0002b83e) main_mup_pane_t3_ParamLimits

0x5564,	// (0x0002b83e) main_mup_pane_t3

0x557c,	// (0x0002b856) main_mup_pane_t4_ParamLimits

0x557c,	// (0x0002b856) main_mup_pane_t4

0x559a,	// (0x0002b874) main_mup_pane_t5_ParamLimits

0x559a,	// (0x0002b874) main_mup_pane_t5

0x55af,	// (0x0002b889) main_mup_pane_t6_ParamLimits

0x55af,	// (0x0002b889) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000356f4) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000356f4) main_mup_pane_t

0x55c1,	// (0x0002b89b) mup_progress_pane_ParamLimits

0x55c1,	// (0x0002b89b) mup_progress_pane

0x55cd,	// (0x0002b8a7) mup_visualizer_pane_ParamLimits

0x55cd,	// (0x0002b8a7) mup_visualizer_pane

0x55f5,	// (0x0002b8cf) mup_volume_pane_ParamLimits

0x55f5,	// (0x0002b8cf) mup_volume_pane

0x5613,	// (0x0002b8ed) mup_visualizer_pane_g1_ParamLimits

0x5613,	// (0x0002b8ed) mup_visualizer_pane_g1

0x5613,	// (0x0002b8ed) mup_visualizer_pane_g2_ParamLimits

0x5613,	// (0x0002b8ed) mup_visualizer_pane_g2

0x5102,	// (0x0002b3dc) mup_visualizer_pane_g3_ParamLimits

0x5102,	// (0x0002b3dc) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x00035701) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x00035701) mup_visualizer_pane_g

0x2b9a,	// (0x00028e74) mup_volume_pane_g1

0x5629,	// (0x0002b903) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x00035708) mup_volume_pane_g

0x2b9a,	// (0x00028e74) mup_progress_pane_g1

0x5632,	// (0x0002b90c) mup_progress_pane_g2

0x563b,	// (0x0002b915) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0003570d) mup_progress_pane_g

0x25e3,	// (0x000288bd) bg_popup_window_pane_cp05

0x5644,	// (0x0002b91e) heading_pane_cp02_ParamLimits

0x5644,	// (0x0002b91e) heading_pane_cp02

0x565e,	// (0x0002b938) list_popup_blid_pane

0x5666,	// (0x0002b940) list_blid_sat_info_pane_ParamLimits

0x5666,	// (0x0002b940) list_blid_sat_info_pane

0x5679,	// (0x0002b953) list_blid_sat_info_pane_g1

0x5681,	// (0x0002b95b) list_blid_sat_info_pane_t1

0x5761,	// (0x0002ba3b) mup_equalizer_pane_ParamLimits

0x5761,	// (0x0002ba3b) mup_equalizer_pane

0x577a,	// (0x0002ba54) mup_equalizer_pane_cp1_ParamLimits

0x577a,	// (0x0002ba54) mup_equalizer_pane_cp1

0x5793,	// (0x0002ba6d) mup_equalizer_pane_cp2_ParamLimits

0x5793,	// (0x0002ba6d) mup_equalizer_pane_cp2

0x57ac,	// (0x0002ba86) mup_equalizer_pane_cp3_ParamLimits

0x57ac,	// (0x0002ba86) mup_equalizer_pane_cp3

0x57c5,	// (0x0002ba9f) mup_equalizer_pane_cp4_ParamLimits

0x57c5,	// (0x0002ba9f) mup_equalizer_pane_cp4

0x57de,	// (0x0002bab8) mup_equalizer_pane_cp5

0x57f0,	// (0x0002baca) mup_equalizer_pane_cp6

0x5802,	// (0x0002badc) mup_equalizer_pane_cp7

0xbd96,	// (0x00032070) bg_popup_call_poc_act_pane_g9

0xbd9e,	// (0x00032078) bg_popup_call_poc_act_pane_g10

0xbda6,	// (0x00032080) bg_popup_call_poc_act_pane_g11

0x000a,

0x283e,	// (0x00028b18) mup_scale_pane

0x2b9a,	// (0x00028e74) mup_scale_pane_g1

0x5816,	// (0x0002baf0) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x00035729) mup_scale_pane_g

0x584c,	// (0x0002bb26) msg_data_pane

0x5854,	// (0x0002bb2e) scroll_pane_cp017

0x585c,	// (0x0002bb36) bg_list_pane_cp04_ParamLimits

0x585c,	// (0x0002bb36) bg_list_pane_cp04

0x587c,	// (0x0002bb56) msg_data_pane_g1

0x4e76,	// (0x0002b150) msg_data_pane_g2

0x4e7e,	// (0x0002b158) msg_data_pane_g3

0x5884,	// (0x0002bb5e) msg_data_pane_g4

0x4e8e,	// (0x0002b168) msg_data_pane_g5

0x5402,	// (0x0002b6dc) msg_data_pane_g6

0x588c,	// (0x0002bb66) msg_data_pane_g7

0x0006,

0xf45e,	// (0x00035738) msg_data_pane_g

0x5894,	// (0x0002bb6e) msg_text_pane_ParamLimits

0x5894,	// (0x0002bb6e) msg_text_pane

0x58bb,	// (0x0002bb95) qrid_highlight_pane_cp011_ParamLimits

0x58bb,	// (0x0002bb95) qrid_highlight_pane_cp011

0x25e3,	// (0x000288bd) msg_body_pane

0x25e3,	// (0x000288bd) msg_header_pane

0x58da,	// (0x0002bbb4) input_focus_pane_cp07

0x58fb,	// (0x0002bbd5) msg_header_pane_t1_ParamLimits

0x58fb,	// (0x0002bbd5) msg_header_pane_t1

0x590d,	// (0x0002bbe7) msg_header_pane_t2_ParamLimits

0x590d,	// (0x0002bbe7) msg_header_pane_t2

0x0001,

0xf472,	// (0x0003574c) msg_header_pane_t_ParamLimits

0xf472,	// (0x0003574c) msg_header_pane_t

0x591f,	// (0x0002bbf9) msg_body_pane_g1

0x5927,	// (0x0002bc01) msg_body_pane_t1_ParamLimits

0x5927,	// (0x0002bc01) msg_body_pane_t1

0x5952,	// (0x0002bc2c) msg_body_pane_t2_ParamLimits

0x5952,	// (0x0002bc2c) msg_body_pane_t2

0x5964,	// (0x0002bc3e) msg_body_pane_t3_ParamLimits

0x5964,	// (0x0002bc3e) msg_body_pane_t3

0x0002,

0xf477,	// (0x00035751) msg_body_pane_t_ParamLimits

0xf477,	// (0x00035751) msg_body_pane_t

0x0fb9,	// (0x00027293) main_viewer_pane_g1_ParamLimits

0x0fb9,	// (0x00027293) main_viewer_pane_g1

0x0fc5,	// (0x0002729f) main_viewer_pane_g2_ParamLimits

0x0fc5,	// (0x0002729f) main_viewer_pane_g2

0x5994,	// (0x0002bc6e) main_viewer_pane_g3_ParamLimits

0x5994,	// (0x0002bc6e) main_viewer_pane_g3

0x59a3,	// (0x0002bc7d) main_viewer_pane_g4_ParamLimits

0x59a3,	// (0x0002bc7d) main_viewer_pane_g4

0xb828,	// (0x00031b02) main_viewer_pane_g5_ParamLimits

0xb828,	// (0x00031b02) main_viewer_pane_g5

0xb828,	// (0x00031b02) main_viewer_pane_g7_ParamLimits

0xb828,	// (0x00031b02) main_viewer_pane_g7

0xb83a,	// (0x00031b14) main_viewer_pane_g8_ParamLimits

0xb83a,	// (0x00031b14) main_viewer_pane_g8

0x0007,

0xf487,	// (0x00035761) main_viewer_pane_g_ParamLimits

0xf487,	// (0x00035761) main_viewer_pane_g

0x59b2,	// (0x0002bc8c) viewer_content_pane_ParamLimits

0x59b2,	// (0x0002bc8c) viewer_content_pane

0x59e5,	// (0x0002bcbf) main_postcard_pane_g1_ParamLimits

0x59e5,	// (0x0002bcbf) main_postcard_pane_g1

0x59f9,	// (0x0002bcd3) main_postcard_pane_g2_ParamLimits

0x59f9,	// (0x0002bcd3) main_postcard_pane_g2

0x5a0d,	// (0x0002bce7) main_postcard_pane_g3_ParamLimits

0x5a0d,	// (0x0002bce7) main_postcard_pane_g3

0x0005,

0xf498,	// (0x00035772) main_postcard_pane_g_ParamLimits

0xf498,	// (0x00035772) main_postcard_pane_g

0x5a20,	// (0x0002bcfa) main_postcard_pane_g4

0xc012,	// (0x000322ec) smil_status_volume_pane_g2

0x5a5b,	// (0x0002bd35) postcard_pane_ParamLimits

0x5a5b,	// (0x0002bd35) postcard_pane

0x5a9b,	// (0x0002bd75) postcard_pane_g1_ParamLimits

0x5a9b,	// (0x0002bd75) postcard_pane_g1

0x5aa9,	// (0x0002bd83) postcard_pane_g2_ParamLimits

0x5aa9,	// (0x0002bd83) postcard_pane_g2

0x5ab5,	// (0x0002bd8f) postcard_pane_g3_ParamLimits

0x5ab5,	// (0x0002bd8f) postcard_pane_g3

0x5ac1,	// (0x0002bd9b) postcard_pane_g4_ParamLimits

0x5ac1,	// (0x0002bd9b) postcard_pane_g4

0x5acf,	// (0x0002bda9) postcard_pane_g5_ParamLimits

0x5acf,	// (0x0002bda9) postcard_pane_g5

0x5ae4,	// (0x0002bdbe) postcard_pane_g6_ParamLimits

0x5ae4,	// (0x0002bdbe) postcard_pane_g6

0x5a9b,	// (0x0002bd75) postcard_pane_g7_ParamLimits

0x5a9b,	// (0x0002bd75) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0003577f) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0003577f) postcard_pane_g

0x5af8,	// (0x0002bdd2) main_mp2_pane_g1_ParamLimits

0x5af8,	// (0x0002bdd2) main_mp2_pane_g1

0x5b04,	// (0x0002bdde) main_mp2_pane_g2_ParamLimits

0x5b04,	// (0x0002bdde) main_mp2_pane_g2

0x5b10,	// (0x0002bdea) main_mp2_pane_g3_ParamLimits

0x5b10,	// (0x0002bdea) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0003578e) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0003578e) main_mp2_pane_g

0x5b1c,	// (0x0002bdf6) main_mp2_pane_t1_ParamLimits

0x5b1c,	// (0x0002bdf6) main_mp2_pane_t1

0x5b31,	// (0x0002be0b) main_mp2_pane_t2_ParamLimits

0x5b31,	// (0x0002be0b) main_mp2_pane_t2

0x5b43,	// (0x0002be1d) main_mp2_pane_t3_ParamLimits

0x5b43,	// (0x0002be1d) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x00035795) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x00035795) main_mp2_pane_t

0x5b55,	// (0x0002be2f) pec_content_pane_ParamLimits

0x5b55,	// (0x0002be2f) pec_content_pane

0x3b5e,	// (0x00029e38) scroll_pane_cp015

0x5b67,	// (0x0002be41) pec_attribute_pane_ParamLimits

0x5b67,	// (0x0002be41) pec_attribute_pane

0x5b77,	// (0x0002be51) pec_content_pane_g1_ParamLimits

0x5b77,	// (0x0002be51) pec_content_pane_g1

0x5b83,	// (0x0002be5d) pec_content_pane_t1_ParamLimits

0x5b83,	// (0x0002be5d) pec_content_pane_t1

0x5b95,	// (0x0002be6f) pec_content_pane_t2_ParamLimits

0x5b95,	// (0x0002be6f) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0003579c) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0003579c) pec_content_pane_t

0x5ba7,	// (0x0002be81) list_single_graphic_pane_cp01_ParamLimits

0x5ba7,	// (0x0002be81) list_single_graphic_pane_cp01

0x283e,	// (0x00028b18) bg_popup_sub_pane_cp04

0x5bbc,	// (0x0002be96) popup_mup_playback_window_g1

0x5bc8,	// (0x0002bea2) popup_mup_playback_window_t1

0x5bdd,	// (0x0002beb7) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000357a1) popup_mup_playback_window_t

0x5c32,	// (0x0002bf0c) main_image_pane_g1_ParamLimits

0x5c32,	// (0x0002bf0c) main_image_pane_g1

0x5d0d,	// (0x0002bfe7) scroll_pane_cp018_ParamLimits

0x5d0d,	// (0x0002bfe7) scroll_pane_cp018

0x5d25,	// (0x0002bfff) scroll_pane_cp016_ParamLimits

0x5d25,	// (0x0002bfff) scroll_pane_cp016

0x5d59,	// (0x0002c033) smil2_image_pane_ParamLimits

0x5d59,	// (0x0002c033) smil2_image_pane

0x5d81,	// (0x0002c05b) smil2_root_pane_ParamLimits

0x5d81,	// (0x0002c05b) smil2_root_pane

0x5db9,	// (0x0002c093) smil2_text_pane_ParamLimits

0x5db9,	// (0x0002c093) smil2_text_pane

0x25e3,	// (0x000288bd) bg_list_pane_cp06

0x5e2d,	// (0x0002c107) grid_radio_pane

0x25e3,	// (0x000288bd) bg_popup_window_pane_cp06

0x5e35,	// (0x0002c10f) main_fmradio_pane_t1

0x4d75,	// (0x0002b04f) heading_pane_cp04

0x5e43,	// (0x0002c11d) main_fmradio_pane_t2

0xbdee,	// (0x000320c8) popup_cale_lunar_info_window_g1

0x5e51,	// (0x0002c12b) main_fmradio_pane_t3

0xbdf6,	// (0x000320d0) popup_cale_lunar_info_window_g2

0x5e5f,	// (0x0002c139) main_fmradio_pane_t4

0x0001,

0x5e6d,	// (0x0002c147) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0003588f) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000357b6) main_fmradio_pane_t

0x5e7b,	// (0x0002c155) wait_bar_pane_cp03

0x5e83,	// (0x0002c15d) cell_fmradio_pane_ParamLimits

0x5e83,	// (0x0002c15d) cell_fmradio_pane

0x5a9b,	// (0x0002bd75) cell_fmradio_pane_g1_ParamLimits

0x5a9b,	// (0x0002bd75) cell_fmradio_pane_g1

0x25e3,	// (0x000288bd) grid_highlight_pane_cp011

0x5e96,	// (0x0002c170) poc_content_pane_ParamLimits

0x5e96,	// (0x0002c170) poc_content_pane

0x5ea9,	// (0x0002c183) scroll_pane_cp019

0x5eb1,	// (0x0002c18b) popup_call_poc_act_window_ParamLimits

0x5eb1,	// (0x0002c18b) popup_call_poc_act_window

0x5ed1,	// (0x0002c1ab) popup_call_poc_inact_window_ParamLimits

0x5ed1,	// (0x0002c1ab) popup_call_poc_inact_window

0xf579,	// (0x00035853) bg_popup_call_poc_act_pane_g

0xbdae,	// (0x00032088) bg_popup_call_poc_inact_pane_g1

0xbdb6,	// (0x00032090) bg_popup_call_poc_inact_pane_g2

0x5ee6,	// (0x0002c1c0) popup_call_poc_act_window_g2

0xbdbe,	// (0x00032098) bg_popup_call_poc_inact_pane_g3

0xbd3e,	// (0x00032018) bg_popup_call_poc_inact_pane_g4

0xbdc6,	// (0x000320a0) bg_popup_call_poc_inact_pane_g5

0x5eee,	// (0x0002c1c8) popup_call_poc_act_window_t1_ParamLimits

0x5eee,	// (0x0002c1c8) popup_call_poc_act_window_t1

0x5f16,	// (0x0002c1f0) popup_call_poc_act_window_t2_ParamLimits

0x5f16,	// (0x0002c1f0) popup_call_poc_act_window_t2

0x5f3e,	// (0x0002c218) popup_call_poc_act_window_t3_ParamLimits

0x5f3e,	// (0x0002c218) popup_call_poc_act_window_t3

0x5f66,	// (0x0002c240) popup_call_poc_act_window_t4_ParamLimits

0x5f66,	// (0x0002c240) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000357c1) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000357c1) popup_call_poc_act_window_t

0xbdce,	// (0x000320a8) bg_popup_call_poc_inact_pane_g6

0xbdd6,	// (0x000320b0) bg_popup_call_poc_inact_pane_g7

0xbdde,	// (0x000320b8) bg_popup_call_poc_inact_pane_g8

0x5f78,	// (0x0002c252) popup_call_poc_inact_window_g2

0xbde6,	// (0x000320c0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0003586a) bg_popup_call_poc_inact_pane_g

0x5f80,	// (0x0002c25a) popup_call_poc_inact_window_t1_ParamLimits

0x5f80,	// (0x0002c25a) popup_call_poc_inact_window_t1

0x5f95,	// (0x0002c26f) popup_call_poc_inact_window_t2_ParamLimits

0x5f95,	// (0x0002c26f) popup_call_poc_inact_window_t2

0x5faa,	// (0x0002c284) popup_call_poc_inact_window_t3_ParamLimits

0x5faa,	// (0x0002c284) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000357ca) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000357ca) popup_call_poc_inact_window_t

0xbf85,	// (0x0003225f) context_pane_ParamLimits

0x6d85,	// (0x0002d05f) signal_pane_ParamLimits

0x322e,	// (0x00029508) main_call2_pane

0xbf5e,	// (0x00032238) popup_phob_thumbnail2_window_ParamLimits

0xbf5e,	// (0x00032238) popup_phob_thumbnail2_window

0xb810,	// (0x00031aea) aid_hotspot_pointer_arrow_pane

0xb818,	// (0x00031af2) aid_hotspot_pointer_hand_pane

0x6ba0,	// (0x0002ce7a) phob_pre_status_pane_g5

0x32a9,	// (0x00029583) cams_zoom_pane_ParamLimits

0x32b8,	// (0x00029592) image_vga_pane_ParamLimits

0x32d0,	// (0x000295aa) main_camera_pane_g1_ParamLimits

0x32e0,	// (0x000295ba) main_camera_pane_g2_ParamLimits

0x32f0,	// (0x000295ca) main_camera_pane_g3_ParamLimits

0x3300,	// (0x000295da) main_camera_pane_g4_ParamLimits

0x3310,	// (0x000295ea) main_camera_pane_g5_ParamLimits

0x3320,	// (0x000295fa) main_camera_pane_g6_ParamLimits

0x3330,	// (0x0002960a) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000354c9) main_camera_pane_g_ParamLimits

0x334c,	// (0x00029626) main_camera_pane_t1_ParamLimits

0x3362,	// (0x0002963c) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000354da) main_camera_pane_t_ParamLimits

0x283e,	// (0x00028b18) bg_popup_preview_window_pane_cp01_ParamLimits

0x283e,	// (0x00028b18) bg_popup_preview_window_pane_cp01

0x5fbf,	// (0x0002c299) popup_phob_thumbnail2_window_g1_ParamLimits

0x5fbf,	// (0x0002c299) popup_phob_thumbnail2_window_g1

0x25e3,	// (0x000288bd) call2_cli_visual_pane

0x5fe2,	// (0x0002c2bc) popup_call2_audio_conf_window_ParamLimits

0x5fe2,	// (0x0002c2bc) popup_call2_audio_conf_window

0x6000,	// (0x0002c2da) popup_call2_audio_first_window_ParamLimits

0x6000,	// (0x0002c2da) popup_call2_audio_first_window

0x6076,	// (0x0002c350) popup_call2_audio_in_window_ParamLimits

0x6076,	// (0x0002c350) popup_call2_audio_in_window

0x60aa,	// (0x0002c384) popup_call2_audio_out_window_ParamLimits

0x60aa,	// (0x0002c384) popup_call2_audio_out_window

0x60fc,	// (0x0002c3d6) popup_call2_audio_second_window_ParamLimits

0x60fc,	// (0x0002c3d6) popup_call2_audio_second_window

0x614e,	// (0x0002c428) popup_call2_audio_wait_window_ParamLimits

0x614e,	// (0x0002c428) popup_call2_audio_wait_window

0x25e3,	// (0x000288bd) bg_popup_call2_act_pane_cp03

0x2820,	// (0x00028afa) list_conf_pane_cp

0x6186,	// (0x0002c460) popup_call2_audio_conf_window_t1

0x4df4,	// (0x0002b0ce) list_single_graphic_popup_conf2_pane_ParamLimits

0x4df4,	// (0x0002b0ce) list_single_graphic_popup_conf2_pane

0x4e07,	// (0x0002b0e1) list_highlight_pane_cp04

0x6194,	// (0x0002c46e) list_single_graphic_popup_conf2_pane_g1

0x4e18,	// (0x0002b0f2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000357d1) list_single_graphic_popup_conf2_pane_g

0x619c,	// (0x0002c476) list_single_graphic_popup_conf2_pane_t1

0x61aa,	// (0x0002c484) bg_popup_call2_act_pane_cp01_ParamLimits

0x61aa,	// (0x0002c484) bg_popup_call2_act_pane_cp01

0x6234,	// (0x0002c50e) call_type_pane_cp05_ParamLimits

0x6234,	// (0x0002c50e) call_type_pane_cp05

0x6288,	// (0x0002c562) popup_call2_audio_second_window_g1_ParamLimits

0x6288,	// (0x0002c562) popup_call2_audio_second_window_g1

0x62dc,	// (0x0002c5b6) popup_call2_audio_second_window_g2_ParamLimits

0x62dc,	// (0x0002c5b6) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000357d6) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000357d6) popup_call2_audio_second_window_g

0x6341,	// (0x0002c61b) popup_call2_audio_second_window_t1_ParamLimits

0x6341,	// (0x0002c61b) popup_call2_audio_second_window_t1

0x63fc,	// (0x0002c6d6) popup_call2_audio_second_window_t2_ParamLimits

0x63fc,	// (0x0002c6d6) popup_call2_audio_second_window_t2

0x644f,	// (0x0002c729) popup_call2_audio_second_window_t3_ParamLimits

0x644f,	// (0x0002c729) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x000357dd) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x000357dd) popup_call2_audio_second_window_t

0x25e3,	// (0x000288bd) bg_popup_call2_in_pane_cp02

0x25ed,	// (0x000288c7) call_type_pane_cp04

0x25f5,	// (0x000288cf) popup_call2_audio_wait_window_g1

0x25fd,	// (0x000288d7) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000353b8) popup_call2_audio_wait_window_g

0x2605,	// (0x000288df) popup_call2_audio_wait_window_t3

0x6542,	// (0x0002c81c) bg_popup_call2_act_pane_ParamLimits

0x6542,	// (0x0002c81c) bg_popup_call2_act_pane

0x6602,	// (0x0002c8dc) call_type_pane_cp03_ParamLimits

0x6602,	// (0x0002c8dc) call_type_pane_cp03

0x6666,	// (0x0002c940) popup_call2_audio_first_window_g1_ParamLimits

0x6666,	// (0x0002c940) popup_call2_audio_first_window_g1

0x66d6,	// (0x0002c9b0) popup_call2_audio_first_window_g2_ParamLimits

0x66d6,	// (0x0002c9b0) popup_call2_audio_first_window_g2

0x5613,	// (0x0002b8ed) popup_call2_audio_first_window_g3_ParamLimits

0x5613,	// (0x0002b8ed) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x000357e6) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x000357e6) popup_call2_audio_first_window_g

0x67b4,	// (0x0002ca8e) popup_call2_audio_first_window_t1_ParamLimits

0x67b4,	// (0x0002ca8e) popup_call2_audio_first_window_t1

0x68b7,	// (0x0002cb91) popup_call2_audio_first_window_t4_ParamLimits

0x68b7,	// (0x0002cb91) popup_call2_audio_first_window_t4

0x699a,	// (0x0002cc74) popup_call2_audio_first_window_t5_ParamLimits

0x699a,	// (0x0002cc74) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x000357f1) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x000357f1) popup_call2_audio_first_window_t

0x2836,	// (0x00028b10) bg_popup_call2_act_pane_g1

0xbdfe,	// (0x000320d8) popup_cale_lunar_info_window_t1

0xbe0c,	// (0x000320e6) popup_cale_lunar_info_window_t2

0xbe1a,	// (0x000320f4) popup_cale_lunar_info_window_t3

0x25e3,	// (0x000288bd) bg_popup_call2_bubble_pane

0xb852,	// (0x00031b2c) bg_popup_call2_in_pane_cp01_ParamLimits

0xb852,	// (0x00031b2c) bg_popup_call2_in_pane_cp01

0x229b,	// (0x00028575) call_type_pane_cp02

0xb89a,	// (0x00031b74) popup_call2_audio_out_window_g1_ParamLimits

0xb89a,	// (0x00031b74) popup_call2_audio_out_window_g1

0xb8c6,	// (0x00031ba0) popup_call2_audio_out_window_g2_ParamLimits

0xb8c6,	// (0x00031ba0) popup_call2_audio_out_window_g2

0xb8ee,	// (0x00031bc8) popup_call2_audio_out_window_g3_ParamLimits

0xb8ee,	// (0x00031bc8) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x000357fa) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x000357fa) popup_call2_audio_out_window_g

0xb929,	// (0x00031c03) popup_call2_audio_out_window_t1_ParamLimits

0xb929,	// (0x00031c03) popup_call2_audio_out_window_t1

0xb988,	// (0x00031c62) popup_call2_audio_out_window_t2_ParamLimits

0xb988,	// (0x00031c62) popup_call2_audio_out_window_t2

0xb9dc,	// (0x00031cb6) popup_call2_audio_out_window_t3_ParamLimits

0xb9dc,	// (0x00031cb6) popup_call2_audio_out_window_t3

0xb9f2,	// (0x00031ccc) popup_call2_audio_out_window_t4_ParamLimits

0xb9f2,	// (0x00031ccc) popup_call2_audio_out_window_t4

0xba08,	// (0x00031ce2) popup_call2_audio_out_window_t5_ParamLimits

0xba08,	// (0x00031ce2) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x00035803) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x00035803) popup_call2_audio_out_window_t

0xba6c,	// (0x00031d46) bg_popup_call2_in_pane_ParamLimits

0xba6c,	// (0x00031d46) bg_popup_call2_in_pane

0xbac8,	// (0x00031da2) popup_call2_audio_in_window_g1_ParamLimits

0xbac8,	// (0x00031da2) popup_call2_audio_in_window_g1

0xbb00,	// (0x00031dda) popup_call2_audio_in_window_g2_ParamLimits

0xbb00,	// (0x00031dda) popup_call2_audio_in_window_g2

0xbb38,	// (0x00031e12) popup_call2_audio_in_window_g3_ParamLimits

0xbb38,	// (0x00031e12) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x00035810) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x00035810) popup_call2_audio_in_window_g

0xbb90,	// (0x00031e6a) popup_call2_audio_in_window_t1_ParamLimits

0xbb90,	// (0x00031e6a) popup_call2_audio_in_window_t1

0xbc10,	// (0x00031eea) popup_call2_audio_in_window_t2_ParamLimits

0xbc10,	// (0x00031eea) popup_call2_audio_in_window_t2

0xbc90,	// (0x00031f6a) popup_call2_audio_in_window_t3_ParamLimits

0xbc90,	// (0x00031f6a) popup_call2_audio_in_window_t3

0xbcaa,	// (0x00031f84) popup_call2_audio_in_window_t4_ParamLimits

0xbcaa,	// (0x00031f84) popup_call2_audio_in_window_t4

0xbcbc,	// (0x00031f96) popup_call2_audio_in_window_t5_ParamLimits

0xbcbc,	// (0x00031f96) popup_call2_audio_in_window_t5

0xbcd1,	// (0x00031fab) popup_call2_audio_in_window_t6_ParamLimits

0xbcd1,	// (0x00031fab) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x00035819) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x00035819) popup_call2_audio_in_window_t

0x2836,	// (0x00028b10) bg_popup_call2_in_pane_g1

0xbe28,	// (0x00032102) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x00035894) popup_cale_lunar_info_window_t

0x283e,	// (0x00028b18) bg_popup_call2_rect_pane_ParamLimits

0x283e,	// (0x00028b18) bg_popup_call2_rect_pane

0x25e3,	// (0x000288bd) call2_cli_visual_graphic_pane

0x25e3,	// (0x000288bd) call2_cli_visual_text_pane

0xc025,	// (0x000322ff) smil_status_volume_pane_g3

0x0002,

0x2b9a,	// (0x00028e74) call2_cli_visual_graphic_pane_g1

0x2b9a,	// (0x00028e74) call2_cli_visual_graphic_pane_g2

0x2b9a,	// (0x00028e74) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x00035826) call2_cli_visual_graphic_pane_g

0xbce6,	// (0x00031fc0) bg_popup_call2_rect_pane_g1

0x2cb3,	// (0x00028f8d) bg_popup_call2_rect_pane_g2

0xbcee,	// (0x00031fc8) bg_popup_call2_rect_pane_g3

0xbcf6,	// (0x00031fd0) bg_popup_call2_rect_pane_g4

0xbcfe,	// (0x00031fd8) bg_popup_call2_rect_pane_g5

0xbd06,	// (0x00031fe0) bg_popup_call2_rect_pane_g6

0xbd0e,	// (0x00031fe8) bg_popup_call2_rect_pane_g7

0xbd16,	// (0x00031ff0) bg_popup_call2_rect_pane_g8

0xbd1e,	// (0x00031ff8) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0003582d) bg_popup_call2_rect_pane_g

0xbd26,	// (0x00032000) bg_popup_call2_bubble_pane_g1

0xbd2e,	// (0x00032008) bg_popup_call2_bubble_pane_g2

0xbd36,	// (0x00032010) bg_popup_call2_bubble_pane_g3

0xbd3e,	// (0x00032018) bg_popup_call2_bubble_pane_g4

0xbd46,	// (0x00032020) bg_popup_call2_bubble_pane_g5

0xbd4e,	// (0x00032028) bg_popup_call2_bubble_pane_g6

0xbd56,	// (0x00032030) bg_popup_call2_bubble_pane_g7

0xbd5e,	// (0x00032038) bg_popup_call2_bubble_pane_g8

0xbd66,	// (0x00032040) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x00035840) bg_popup_call2_bubble_pane_g

0x2d4e,	// (0x00029028) aid_cale_week_size_cell_pane

0x3378,	// (0x00029652) aid_cams_cif_uncrop_pane_ParamLimits

0x3378,	// (0x00029652) aid_cams_cif_uncrop_pane

0x3557,	// (0x00029831) aid_cams_size_cell_ParamLimits

0x3557,	// (0x00029831) aid_cams_size_cell

0x356b,	// (0x00029845) grid_cams_pane_ParamLimits

0x3580,	// (0x0002985a) linegrid_cams_pane_ParamLimits

0x3789,	// (0x00029a63) call_video_pane_t1

0x37a3,	// (0x00029a7d) call_video_pane_t2

0x0001,

0xf253,	// (0x0003552d) call_video_pane_t

0x3d9a,	// (0x0002a074) aid_cale_month_size_cell_pane_ParamLimits

0x3d9a,	// (0x0002a074) aid_cale_month_size_cell_pane

0xf603,	// (0x000358dd) smil_status_volume_pane_g

0xc032,	// (0x0003230c) volume_smil_pane_ParamLimits

0xb63c,	// (0x00031916) aid_popup2_width_pane

0x2c0b,	// (0x00028ee5) cell_qdial_pane_g4_ParamLimits

0x2c0b,	// (0x00028ee5) cell_qdial_pane_g4

0x50e2,	// (0x0002b3bc) aid_blid_cardinal_pane_ParamLimits

0x50ee,	// (0x0002b3c8) aid_blid_destination_pane_ParamLimits

0x50ee,	// (0x0002b3c8) aid_blid_destination_pane

0x283e,	// (0x00028b18) bg_popup_call_poc_act_pane_ParamLimits

0x283e,	// (0x00028b18) bg_popup_call_poc_act_pane

0x283e,	// (0x00028b18) bg_popup_call_poc_inact_pane_ParamLimits

0x283e,	// (0x00028b18) bg_popup_call_poc_inact_pane

0xbd6e,	// (0x00032048) bg_popup_call_poc_act_pane_g1

0xbd76,	// (0x00032050) bg_popup_call_poc_act_pane_g2

0xbd7e,	// (0x00032058) bg_popup_call_poc_act_pane_g3

0xbd3e,	// (0x00032018) bg_popup_call_poc_act_pane_g4

0xbd46,	// (0x00032020) bg_popup_call_poc_act_pane_g5

0xbd86,	// (0x00032060) bg_popup_call_poc_act_pane_g6

0xbd56,	// (0x00032030) bg_popup_call_poc_act_pane_g7

0xbd8e,	// (0x00032068) bg_popup_call_poc_act_pane_g8

0x25e3,	// (0x000288bd) main_usb_pane

0xbf3d,	// (0x00032217) popup_cale_lunar_info_window

0x3a46,	// (0x00029d20) im_reading_pane_t1_ParamLimits

0x3a7c,	// (0x00029d56) list_im_pane_ParamLimits

0x3a8d,	// (0x00029d67) scroll_pane_cp07_ParamLimits

0x25e3,	// (0x000288bd) grid_highlight_pane_cp012

0x283e,	// (0x00028b18) mup_scale_pane_ParamLimits

0x5a9b,	// (0x0002bd75) main_usb_pane_g1_ParamLimits

0x5a9b,	// (0x0002bd75) main_usb_pane_g1

0x6abd,	// (0x0002cd97) main_usb_pane_g2_ParamLimits

0x6abd,	// (0x0002cd97) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0003587d) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0003587d) main_usb_pane_g

0x6ad1,	// (0x0002cdab) main_usb_pane_t1_ParamLimits

0x6ad1,	// (0x0002cdab) main_usb_pane_t1

0x6ae3,	// (0x0002cdbd) main_usb_pane_t2_ParamLimits

0x6ae3,	// (0x0002cdbd) main_usb_pane_t2

0x6af5,	// (0x0002cdcf) main_usb_pane_t3_ParamLimits

0x6af5,	// (0x0002cdcf) main_usb_pane_t3

0x6b07,	// (0x0002cde1) main_usb_pane_t4_ParamLimits

0x6b07,	// (0x0002cde1) main_usb_pane_t4

0x6b19,	// (0x0002cdf3) main_usb_pane_t5_ParamLimits

0x6b19,	// (0x0002cdf3) main_usb_pane_t5

0x6b2b,	// (0x0002ce05) main_usb_pane_t6_ParamLimits

0x6b2b,	// (0x0002ce05) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x00035882) main_usb_pane_t_ParamLimits

0x507c,	// (0x0002b356) aid_text_placing

0x508e,	// (0x0002b368) main_location2_pane_t1_ParamLimits

0x50a4,	// (0x0002b37e) main_location2_pane_t2_ParamLimits

0x50ba,	// (0x0002b394) main_location2_pane_t3_ParamLimits

0x50d0,	// (0x0002b3aa) main_location2_pane_t4_ParamLimits

0x50d0,	// (0x0002b3aa) main_location2_pane_t4

0xf3b4,	// (0x0003568e) main_location2_pane_t_ParamLimits

0x2908,	// (0x00028be2) find_pinb_pane_g2_ParamLimits

0x2908,	// (0x00028be2) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000353de) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000353de) find_pinb_pane_g

0x2914,	// (0x00028bee) find_pinb_pane_t1_ParamLimits

0x2926,	// (0x00028c00) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000353e3) find_pinb_pane_t_ParamLimits

0x25e3,	// (0x000288bd) main_call3_pane

0x41d4,	// (0x0002a4ae) cale_month_day_heading_pane_t1_ParamLimits

0x425a,	// (0x0002a534) cale_month_day_heading_pane_t2_ParamLimits

0x42eb,	// (0x0002a5c5) cale_month_day_heading_pane_t3_ParamLimits

0x437c,	// (0x0002a656) cale_month_day_heading_pane_t4_ParamLimits

0x440d,	// (0x0002a6e7) cale_month_day_heading_pane_t5_ParamLimits

0x449e,	// (0x0002a778) cale_month_day_heading_pane_t6_ParamLimits

0x452f,	// (0x0002a809) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x00035565) cale_month_day_heading_pane_t_ParamLimits

0x479f,	// (0x0002aa79) smil_status_volume_pane

0x5a77,	// (0x0002bd51) postcard_address_pane_ParamLimits

0x5a77,	// (0x0002bd51) postcard_address_pane

0x5a89,	// (0x0002bd63) postcard_message_pane_ParamLimits

0x5a89,	// (0x0002bd63) postcard_message_pane

0x6a9b,	// (0x0002cd75) call2_cli_visual_pane_t1_ParamLimits

0x6a9b,	// (0x0002cd75) call2_cli_visual_pane_t1

0x6fa1,	// (0x0002d27b) postcard_message_pane_t1_ParamLimits

0x6fa1,	// (0x0002d27b) postcard_message_pane_t1

0x6f8a,	// (0x0002d264) postcard_address_pane_t1_ParamLimits

0x6f8a,	// (0x0002d264) postcard_address_pane_t1

0x6f78,	// (0x0002d252) popup_call3_audio_in_window_ParamLimits

0x6f78,	// (0x0002d252) popup_call3_audio_in_window

0x6e07,	// (0x0002d0e1) bg_popup_call3_in_pane_ParamLimits

0x6e07,	// (0x0002d0e1) bg_popup_call3_in_pane

0x6e79,	// (0x0002d153) popup_call3_audio_in_window_g1_ParamLimits

0x6e79,	// (0x0002d153) popup_call3_audio_in_window_g1

0x6e99,	// (0x0002d173) popup_call3_audio_in_window_g2_ParamLimits

0x6e99,	// (0x0002d173) popup_call3_audio_in_window_g2

0x6eb9,	// (0x0002d193) popup_call3_audio_in_window_g3_ParamLimits

0x6eb9,	// (0x0002d193) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x000358e4) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x000358e4) popup_call3_audio_in_window_g

0x6eea,	// (0x0002d1c4) popup_call3_audio_in_window_t1_ParamLimits

0x6eea,	// (0x0002d1c4) popup_call3_audio_in_window_t1

0x6f28,	// (0x0002d202) popup_call3_audio_in_window_t2_ParamLimits

0x6f28,	// (0x0002d202) popup_call3_audio_in_window_t2

0x6f66,	// (0x0002d240) popup_call3_audio_in_window_t3_ParamLimits

0x6f66,	// (0x0002d240) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x000358ed) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x000358ed) popup_call3_audio_in_window_t

0x322e,	// (0x00029508) bg_popup_call3_rect_pane

0xbce6,	// (0x00031fc0) bg_popup_call3_rect_pane_g1

0x2cb3,	// (0x00028f8d) bg_popup_call3_rect_pane_g2

0xbcee,	// (0x00031fc8) bg_popup_call3_rect_pane_g3

0xbcf6,	// (0x00031fd0) bg_popup_call3_rect_pane_g4

0xbcfe,	// (0x00031fd8) bg_popup_call3_rect_pane_g5

0xbd06,	// (0x00031fe0) bg_popup_call3_rect_pane_g6

0xbd0e,	// (0x00031fe8) bg_popup_call3_rect_pane_g7

0x560b,	// (0x0002b8e5) mup_visualizer_osc_pane

0x5621,	// (0x0002b8fb) mup_visualizer_spec_pane

0x6e37,	// (0x0002d111) call3_video_qcif_pane_ParamLimits

0x6e37,	// (0x0002d111) call3_video_qcif_pane

0x6e48,	// (0x0002d122) call3_video_qcif_uncrop_pane_ParamLimits

0x6e48,	// (0x0002d122) call3_video_qcif_uncrop_pane

0x6e54,	// (0x0002d12e) call3_video_subqcif_pane_ParamLimits

0x6e54,	// (0x0002d12e) call3_video_subqcif_pane

0x6e68,	// (0x0002d142) call3_video_subqcif_uncrop_pane_ParamLimits

0x6e68,	// (0x0002d142) call3_video_subqcif_uncrop_pane

0x6ed9,	// (0x0002d1b3) popup_call3_audio_in_window_g4_ParamLimits

0x6ed9,	// (0x0002d1b3) popup_call3_audio_in_window_g4

0x6df6,	// (0x0002d0d0) mup_spec_half_pane

0x6dff,	// (0x0002d0d9) mup_spec_half_pane_cp

0xbfe5,	// (0x000322bf) mup_osc_middle_pane

0xbfee,	// (0x000322c8) mup_visualizer_osc_pane_g1

0x6dd7,	// (0x0002d0b1) mup_spec_bar_pane_ParamLimits

0x6dd7,	// (0x0002d0b1) mup_spec_bar_pane

0xbfd2,	// (0x000322ac) mup_spec_bar_pane_g1

0xbfdc,	// (0x000322b6) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000358d8) mup_spec_bar_pane_g

0x2d4e,	// (0x00029028) aid_cale_week_size_cell_pane_ParamLimits

0x2d68,	// (0x00029042) bg_cale_heading_pane_ParamLimits

0x2d80,	// (0x0002905a) bg_cale_pane_cp01_ParamLimits

0x2d9d,	// (0x00029077) cale_week_corner_pane_ParamLimits

0x2dbc,	// (0x00029096) cale_week_day_heading_pane_ParamLimits

0x2dd9,	// (0x000290b3) cale_week_scroll_pane_g1_ParamLimits

0x2dec,	// (0x000290c6) cale_week_scroll_pane_g2_ParamLimits

0x2e04,	// (0x000290de) cale_week_scroll_pane_g3_ParamLimits

0x2e1c,	// (0x000290f6) cale_week_scroll_pane_g4_ParamLimits

0x2e34,	// (0x0002910e) cale_week_scroll_pane_g5_ParamLimits

0x2e4c,	// (0x00029126) cale_week_scroll_pane_g6_ParamLimits

0x2e64,	// (0x0002913e) cale_week_scroll_pane_g7_ParamLimits

0x2e7c,	// (0x00029156) cale_week_scroll_pane_g8_ParamLimits

0x2e98,	// (0x00029172) cale_week_scroll_pane_g9_ParamLimits

0x2eb0,	// (0x0002918a) cale_week_scroll_pane_g10_ParamLimits

0x2ec8,	// (0x000291a2) cale_week_scroll_pane_g11_ParamLimits

0x2ee0,	// (0x000291ba) cale_week_scroll_pane_g12_ParamLimits

0x2ef8,	// (0x000291d2) cale_week_scroll_pane_g13_ParamLimits

0x2f10,	// (0x000291ea) cale_week_scroll_pane_g14_ParamLimits

0x2f28,	// (0x00029202) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0003546f) cale_week_scroll_pane_g_ParamLimits

0x2f5c,	// (0x00029236) cale_week_time_pane_ParamLimits

0x2f78,	// (0x00029252) grid_cale_week_pane_ParamLimits

0x2f96,	// (0x00029270) listscroll_cale_week_pane_t1

0x2fa8,	// (0x00029282) scroll_pane_cp08_ParamLimits

0x3e1c,	// (0x0002a0f6) cale_month_corner_pane_ParamLimits

0x4178,	// (0x0002a452) cale_month_pane_t1

0x418a,	// (0x0002a464) cale_month_week_pane_ParamLimits

0x4cd7,	// (0x0002afb1) popup_call_status_window_g1_ParamLimits

0x4ceb,	// (0x0002afc5) popup_call_status_window_g2_ParamLimits

0x4cff,	// (0x0002afd9) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x00035615) popup_call_status_window_g_ParamLimits

0x4d65,	// (0x0002b03f) aid_call2_pane

0x58e3,	// (0x0002bbbd) msg_header_pane_g1

0x5a77,	// (0x0002bd51) postcard_address2_pane_ParamLimits

0x5a77,	// (0x0002bd51) postcard_address2_pane

0x5a89,	// (0x0002bd63) postcard_message2_pane_ParamLimits

0x5a89,	// (0x0002bd63) postcard_message2_pane

0x6d93,	// (0x0002d06d) message2_row_pane_ParamLimits

0x6d93,	// (0x0002d06d) message2_row_pane

0x6dad,	// (0x0002d087) address2_row_pane_ParamLimits

0x6dad,	// (0x0002d087) address2_row_pane

0xbfa0,	// (0x0003227a) postcard_message2_row_pane_g1

0xbfa8,	// (0x00032282) postcard_message2_row_pane_t1

0xbfa0,	// (0x0003227a) address2_row_pane_g1

0xbfa8,	// (0x00032282) address2_row_pane_t1

0x3226,	// (0x00029500) aid_size_cell_vorec

0x25e3,	// (0x000288bd) main_rss_pane

0x6dc0,	// (0x0002d09a) rss_list_single_pane_ParamLimits

0x6dc0,	// (0x0002d09a) rss_list_single_pane

0xbfb6,	// (0x00032290) rss_list_single_pane_t1

0xbfc4,	// (0x0003229e) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x000358d3) rss_list_single_pane_t

0x25e3,	// (0x000288bd) main_camera2_pane

0x25e3,	// (0x000288bd) main_video2_pane

0x1271,	// (0x0002754b) cams_zoom_pane_cp2_ParamLimits

0x1271,	// (0x0002754b) cams_zoom_pane_cp2

0x1288,	// (0x00027562) image2_vga_pane_ParamLimits

0x1288,	// (0x00027562) image2_vga_pane

0x12be,	// (0x00027598) main_camera2_pane_g1_ParamLimits

0x12be,	// (0x00027598) main_camera2_pane_g1

0x12de,	// (0x000275b8) main_camera2_pane_g2_ParamLimits

0x12de,	// (0x000275b8) main_camera2_pane_g2

0x12f5,	// (0x000275cf) main_camera2_pane_g3_ParamLimits

0x12f5,	// (0x000275cf) main_camera2_pane_g3

0x130c,	// (0x000275e6) main_camera2_pane_g4_ParamLimits

0x130c,	// (0x000275e6) main_camera2_pane_g4

0x1323,	// (0x000275fd) main_camera2_pane_g5_ParamLimits

0x1323,	// (0x000275fd) main_camera2_pane_g5

0x133a,	// (0x00027614) main_camera2_pane_g6_ParamLimits

0x133a,	// (0x00027614) main_camera2_pane_g6

0x1351,	// (0x0002762b) main_camera2_pane_g7_ParamLimits

0x1351,	// (0x0002762b) main_camera2_pane_g7

0x1368,	// (0x00027642) main_camera2_pane_g8_ParamLimits

0x1368,	// (0x00027642) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x000358f4) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x000358f4) main_camera2_pane_g

0x1396,	// (0x00027670) main_camera2_pane_t1_ParamLimits

0x1396,	// (0x00027670) main_camera2_pane_t1

0x13c5,	// (0x0002769f) main_camera2_pane_t2_ParamLimits

0x13c5,	// (0x0002769f) main_camera2_pane_t2

0x13e2,	// (0x000276bc) main_camera2_pane_t3_ParamLimits

0x13e2,	// (0x000276bc) main_camera2_pane_t3

0x142e,	// (0x00027708) main_camera2_pane_t4_ParamLimits

0x142e,	// (0x00027708) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x00035907) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x00035907) main_camera2_pane_t

0x14a3,	// (0x0002777d) cams_zoom_pane_cp4_ParamLimits

0x14a3,	// (0x0002777d) cams_zoom_pane_cp4

0x14b9,	// (0x00027793) image2_cif_pane_ParamLimits

0x14b9,	// (0x00027793) image2_cif_pane

0x14dc,	// (0x000277b6) image2_subqcif_pane_ParamLimits

0x14dc,	// (0x000277b6) image2_subqcif_pane

0x14f2,	// (0x000277cc) main_video2_pane_g1_ParamLimits

0x14f2,	// (0x000277cc) main_video2_pane_g1

0x150c,	// (0x000277e6) main_video2_pane_g2_ParamLimits

0x150c,	// (0x000277e6) main_video2_pane_g2

0x1522,	// (0x000277fc) main_video2_pane_g3_ParamLimits

0x1522,	// (0x000277fc) main_video2_pane_g3

0x1538,	// (0x00027812) main_video2_pane_g4_ParamLimits

0x1538,	// (0x00027812) main_video2_pane_g4

0x154e,	// (0x00027828) main_video2_pane_g5_ParamLimits

0x154e,	// (0x00027828) main_video2_pane_g5

0x1564,	// (0x0002783e) main_video2_pane_g6_ParamLimits

0x1564,	// (0x0002783e) main_video2_pane_g6

0x0005,

0xf63c,	// (0x00035916) main_video2_pane_g_ParamLimits

0xf63c,	// (0x00035916) main_video2_pane_g

0x157e,	// (0x00027858) main_video2_pane_t1_ParamLimits

0x157e,	// (0x00027858) main_video2_pane_t1

0x15a2,	// (0x0002787c) main_video2_pane_t2_ParamLimits

0x15a2,	// (0x0002787c) main_video2_pane_t2

0x15ec,	// (0x000278c6) main_video2_pane_t3_ParamLimits

0x15ec,	// (0x000278c6) main_video2_pane_t3

0x0002,

0xf649,	// (0x00035923) main_video2_pane_t_ParamLimits

0xf649,	// (0x00035923) main_video2_pane_t

0x6bda,	// (0x0002ceb4) call_muted_g2

0x0001,

0xf5eb,	// (0x000358c5) call_muted_g

0x25e3,	// (0x000288bd) main_mup2_pane

0x6fbc,	// (0x0002d296) main_mup2_pane_g1_ParamLimits

0x6fbc,	// (0x0002d296) main_mup2_pane_g1

0x6fc8,	// (0x0002d2a2) main_mup2_pane_g2_ParamLimits

0x6fc8,	// (0x0002d2a2) main_mup2_pane_g2

0xc151,	// (0x0003242b) main_mup_pane_g13_cp1

0xc159,	// (0x00032433) mup_volume_pane_cp1

0x6fe4,	// (0x0002d2be) main_mup2_pane_g4_ParamLimits

0x6fe4,	// (0x0002d2be) main_mup2_pane_g4

0x6ff4,	// (0x0002d2ce) main_mup2_pane_g5_ParamLimits

0x6ff4,	// (0x0002d2ce) main_mup2_pane_g5

0x7004,	// (0x0002d2de) main_mup2_pane_g6_ParamLimits

0x7004,	// (0x0002d2de) main_mup2_pane_g6

0x7014,	// (0x0002d2ee) main_mup2_pane_g7_ParamLimits

0x7014,	// (0x0002d2ee) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0003592a) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0003592a) main_mup2_pane_g

0x702c,	// (0x0002d306) main_mup2_pane_t1_ParamLimits

0x702c,	// (0x0002d306) main_mup2_pane_t1

0x7042,	// (0x0002d31c) main_mup2_pane_t2_ParamLimits

0x7042,	// (0x0002d31c) main_mup2_pane_t2

0x7058,	// (0x0002d332) main_mup2_pane_t3_ParamLimits

0x7058,	// (0x0002d332) main_mup2_pane_t3

0x706e,	// (0x0002d348) main_mup2_pane_t4_ParamLimits

0x706e,	// (0x0002d348) main_mup2_pane_t4

0x7086,	// (0x0002d360) main_mup2_pane_t5_ParamLimits

0x7086,	// (0x0002d360) main_mup2_pane_t5

0x709e,	// (0x0002d378) main_mup2_pane_t6_ParamLimits

0x709e,	// (0x0002d378) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x00035939) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x00035939) main_mup2_pane_t

0x70ce,	// (0x0002d3a8) mup2_visualizer_pane_ParamLimits

0x70ce,	// (0x0002d3a8) mup2_visualizer_pane

0x70f9,	// (0x0002d3d3) mup_progress_pane_cp_ParamLimits

0x70f9,	// (0x0002d3d3) mup_progress_pane_cp

0xc133,	// (0x0003240d) mup_volume_pane_cp_ParamLimits

0xc133,	// (0x0003240d) mup_volume_pane_cp

0x710d,	// (0x0002d3e7) mup2_visualizer_pane_g1_ParamLimits

0x710d,	// (0x0002d3e7) mup2_visualizer_pane_g1

0xc072,	// (0x0003234c) mup2_visualizer_pane_g2_ParamLimits

0xc072,	// (0x0003234c) mup2_visualizer_pane_g2

0x7122,	// (0x0002d3fc) mup2_visualizer_pane_g3_ParamLimits

0x7122,	// (0x0002d3fc) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x00035946) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x00035946) mup2_visualizer_pane_g

0x5e25,	// (0x0002c0ff) aid_size_cell_fmradio

0x0fd1,	// (0x000272ab) aid_height_parent_landcape

0x3b45,	// (0x00029e1f) wml_content_pane_cp

0x3b4d,	// (0x00029e27) wml_tabs_pane

0x3b56,	// (0x00029e30) popup_wml_miniature_window

0x3b5e,	// (0x00029e38) scroll_pane_cp021

0x3b72,	// (0x00029e4c) wml_content_pane_comp8

0x25e3,	// (0x000288bd) bg_popup_sub_pane_cp05

0xc090,	// (0x0003236a) popup_wml_miniature_window_g1

0xc098,	// (0x00032372) wml_miniature_view_pane

0x712e,	// (0x0002d408) aid_size_wml_view

0x7136,	// (0x0002d410) wml_miniature_view_pane_g1

0x713f,	// (0x0002d419) wml_miniature_view_pane_g2

0x7148,	// (0x0002d422) wml_miniature_view_pane_g3

0x7150,	// (0x0002d42a) wml_miniature_view_pane_g4

0x7158,	// (0x0002d432) wml_miniature_view_pane_g5

0x7160,	// (0x0002d43a) wml_miniature_view_pane_g6

0x7168,	// (0x0002d442) wml_miniature_view_pane_g7

0x7170,	// (0x0002d44a) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0003594d) wml_miniature_view_pane_g

0xc0a0,	// (0x0003237a) background_graphic_ParamLimits

0xc0a0,	// (0x0003237a) background_graphic

0xc0ac,	// (0x00032386) wml_tabs_2_pane

0xc0b5,	// (0x0003238f) wml_tabs_3_pane_ParamLimits

0xc0b5,	// (0x0003238f) wml_tabs_3_pane

0xc0c7,	// (0x000323a1) wml_tabs_4_pane_ParamLimits

0xc0c7,	// (0x000323a1) wml_tabs_4_pane

0xc0dd,	// (0x000323b7) wml_tabs_5_pane_ParamLimits

0xc0dd,	// (0x000323b7) wml_tabs_5_pane

0xc0f7,	// (0x000323d1) wml_tabs_pane_g2_ParamLimits

0xc0f7,	// (0x000323d1) wml_tabs_pane_g2

0xc10b,	// (0x000323e5) wml_tabs_pane_g3_ParamLimits

0xc10b,	// (0x000323e5) wml_tabs_pane_g3

0x7178,	// (0x0002d452) wml_tabs_2_active_pane_ParamLimits

0x7178,	// (0x0002d452) wml_tabs_2_active_pane

0x7188,	// (0x0002d462) wml_tabs_2_passive_pane_ParamLimits

0x7188,	// (0x0002d462) wml_tabs_2_passive_pane

0x7198,	// (0x0002d472) wml_tabs_3_active_pane_cp_ParamLimits

0x7198,	// (0x0002d472) wml_tabs_3_active_pane_cp

0x71a9,	// (0x0002d483) wml_tabs_3_passive_pane_ParamLimits

0x71a9,	// (0x0002d483) wml_tabs_3_passive_pane

0x71ba,	// (0x0002d494) wml_tabs_3_passive_pane_cp_ParamLimits

0x71ba,	// (0x0002d494) wml_tabs_3_passive_pane_cp

0x71cb,	// (0x0002d4a5) tabs_4_active_pane

0x71d3,	// (0x0002d4ad) tabs_4_passive_pane

0x71db,	// (0x0002d4b5) tabs_4_passive_pane_cp

0x71e3,	// (0x0002d4bd) tabs_4_passive_pane_cp2

0x6ab5,	// (0x0002cd8f) aid_height_text

0x55e1,	// (0x0002b8bb) mup_volume_cont_pane_ParamLimits

0x55e1,	// (0x0002b8bb) mup_volume_cont_pane

0x28c6,	// (0x00028ba0) aid_size_cell_pinb

0x28d0,	// (0x00028baa) aid_size_list_pinb

0x70e5,	// (0x0002d3bf) mup2_volume_cont_pane_ParamLimits

0x70e5,	// (0x0002d3bf) mup2_volume_cont_pane

0xc11f,	// (0x000323f9) mup2_volume_cont_pane_g1_ParamLimits

0xc11f,	// (0x000323f9) mup2_volume_cont_pane_g1

0x0ace,	// (0x00026da8) aid_size_cell_touch_ParamLimits

0x0ace,	// (0x00026da8) aid_size_cell_touch

0x0c7f,	// (0x00026f59) touch_pane_ParamLimits

0x0c7f,	// (0x00026f59) touch_pane

0xb68b,	// (0x00031965) main_rss2_pane

0xc161,	// (0x0003243b) listscroll_rss2_pane

0xc16a,	// (0x00032444) rss2_navigation_pane

0xc172,	// (0x0003244c) list_rss2_pane

0x4f0d,	// (0x0002b1e7) scroll_pane_cp22

0xc17a,	// (0x00032454) rss2_navigation_pane_g1

0xc183,	// (0x0003245d) rss2_navigation_pane_g2

0xc18b,	// (0x00032465) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0003595e) rss2_navigation_pane_g

0xc193,	// (0x0003246d) rss2_navigation_pane_t1

0x71eb,	// (0x0002d4c5) rss2_list_single_pane_ParamLimits

0x71eb,	// (0x0002d4c5) rss2_list_single_pane

0xc1a1,	// (0x0003247b) rss2_list_single_pane_t2

0xc1af,	// (0x00032489) rss2_list_single_pane_t3_ParamLimits

0xc1af,	// (0x00032489) rss2_list_single_pane_t3

0xc1cc,	// (0x000324a6) rss2_list_single_pane_t4

0x4789,	// (0x0002aa63) smil_status_pane_g1

0xb67d,	// (0x00031957) main_image2_pane_ParamLimits

0xb67d,	// (0x00031957) main_image2_pane

0x137f,	// (0x00027659) main_camera2_pane_g9_ParamLimits

0x137f,	// (0x00027659) main_camera2_pane_g9

0x1471,	// (0x0002774b) main_camera2_pane_t5_ParamLimits

0x1471,	// (0x0002774b) main_camera2_pane_t5

0xc047,	// (0x00032321) main_camera2_pane_t6_ParamLimits

0xc047,	// (0x00032321) main_camera2_pane_t6

0x71ff,	// (0x0002d4d9) main_image2_pane_g1_ParamLimits

0x71ff,	// (0x0002d4d9) main_image2_pane_g1

0x5de7,	// (0x0002c0c1) smil2_video_pane_ParamLimits

0x5de7,	// (0x0002c0c1) smil2_video_pane

0xb644,	// (0x0003191e) aid_zoom_text_primary_cp

0xb675,	// (0x0003194f) popup_preview_fixed_window

0x3a3e,	// (0x00029d18) im_reading_pane_g1

0x1265,	// (0x0002753f) cams2_bc_adjust_pane_cp_ParamLimits

0x1265,	// (0x0002753f) cams2_bc_adjust_pane_cp

0x1497,	// (0x00027771) cams2_bc_adjust_pane_ParamLimits

0x1497,	// (0x00027771) cams2_bc_adjust_pane

0xc1da,	// (0x000324b4) cams2_bc_adjust_pane_g1

0xc1e2,	// (0x000324bc) cams2_slider_pane

0xc1eb,	// (0x000324c5) cams2_slider_pane_g1

0xc1f4,	// (0x000324ce) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x00035965) cams2_slider_pane_g

0x0ce5,	// (0x00026fbf) calc_display_pane_ParamLimits

0x0d01,	// (0x00026fdb) calc_paper_pane_ParamLimits

0x0d22,	// (0x00026ffc) grid_calc_pane_ParamLimits

0xb7e1,	// (0x00031abb) popup_clock_digital_window_t1_ParamLimits

0x5c80,	// (0x0002bf5a) main_image_pane_t1

0x0cc7,	// (0x00026fa1) aid_size_cell_calc_ParamLimits

0x0cc7,	// (0x00026fa1) aid_size_cell_calc

0x1011,	// (0x000272eb) popup_blid_sat_info2_window_ParamLimits

0x1011,	// (0x000272eb) popup_blid_sat_info2_window

0xc216,	// (0x000324f0) aid_size_cell_blid

0xc21e,	// (0x000324f8) bg_popup_window_pane_cp07

0xc241,	// (0x0003251b) grid_popup_blid_pane

0xc249,	// (0x00032523) heading_pane_cp05_ParamLimits

0xc249,	// (0x00032523) heading_pane_cp05

0xc311,	// (0x000325eb) cell_popup_blid_pane_ParamLimits

0xc311,	// (0x000325eb) cell_popup_blid_pane

0xc331,	// (0x0003260b) cell_popup_blid_pane_g1

0xc339,	// (0x00032613) cell_popup_blid_pane_t1

0x70b8,	// (0x0002d392) mup2_indicator_pane_ParamLimits

0x70b8,	// (0x0002d392) mup2_indicator_pane

0x322e,	// (0x00029508) mup2_visualizer_osc_pane

0xc07e,	// (0x00032358) mup2_visualizer_spec_pane_ParamLimits

0xc07e,	// (0x00032358) mup2_visualizer_spec_pane

0x7213,	// (0x0002d4ed) mup2_spec_half_pane

0x721c,	// (0x0002d4f6) mup2_spec_half_pane_cp

0x7224,	// (0x0002d4fe) mup2_spec_bar_pane_ParamLimits

0x7224,	// (0x0002d4fe) mup2_spec_bar_pane

0xbfd2,	// (0x000322ac) mup2_spec_bar_pane_g1

0xbfdc,	// (0x000322b6) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x000358d8) mup2_spec_bar_pane_g

0x7243,	// (0x0002d51d) mup2_osc_middle_pane

0xbfee,	// (0x000322c8) mup2_visualizer_osc_pane_g1

0x219a,	// (0x00028474) popup_number_entry_window_t1_ParamLimits

0x21ad,	// (0x00028487) popup_number_entry_window_t2_ParamLimits

0x21bf,	// (0x00028499) popup_number_entry_window_t3_ParamLimits

0x21d1,	// (0x000284ab) popup_number_entry_window_t5_ParamLimits

0x21d1,	// (0x000284ab) popup_number_entry_window_t5

0xf0af,	// (0x00035389) popup_number_entry_window_t_ParamLimits

0x2205,	// (0x000284df) text_title_cp2_ParamLimits

0xb820,	// (0x00031afa) aid_hotspot_pointer_text2_pane

0xb846,	// (0x00031b20) main_viewer_pane_g9_ParamLimits

0xb846,	// (0x00031b20) main_viewer_pane_g9

0x4178,	// (0x0002a452) cale_month_pane_t1_ParamLimits

0x47f9,	// (0x0002aad3) bg_cale_pane_ParamLimits

0x4811,	// (0x0002aaeb) list_cale_pane_ParamLimits

0x4822,	// (0x0002aafc) listscroll_cale_day_pane_t1

0x4834,	// (0x0002ab0e) scroll_pane_cp09_ParamLimits

0x568f,	// (0x0002b969) main_mup_eq_pane_t1_ParamLimits

0x568f,	// (0x0002b969) main_mup_eq_pane_t1

0x56a7,	// (0x0002b981) main_mup_eq_pane_t2_ParamLimits

0x56a7,	// (0x0002b981) main_mup_eq_pane_t2

0x56bd,	// (0x0002b997) main_mup_eq_pane_t3_ParamLimits

0x56bd,	// (0x0002b997) main_mup_eq_pane_t3

0x56d3,	// (0x0002b9ad) main_mup_eq_pane_t4_ParamLimits

0x56d3,	// (0x0002b9ad) main_mup_eq_pane_t4

0x56e9,	// (0x0002b9c3) main_mup_eq_pane_t5_ParamLimits

0x56e9,	// (0x0002b9c3) main_mup_eq_pane_t5

0x56ff,	// (0x0002b9d9) main_mup_eq_pane_t6_ParamLimits

0x56ff,	// (0x0002b9d9) main_mup_eq_pane_t6

0x5711,	// (0x0002b9eb) main_mup_eq_pane_t7_ParamLimits

0x5711,	// (0x0002b9eb) main_mup_eq_pane_t7

0x5723,	// (0x0002b9fd) main_mup_eq_pane_t8_ParamLimits

0x5723,	// (0x0002b9fd) main_mup_eq_pane_t8

0x5735,	// (0x0002ba0f) main_mup_eq_pane_t9_ParamLimits

0x5735,	// (0x0002ba0f) main_mup_eq_pane_t9

0x574b,	// (0x0002ba25) main_mup_eq_pane_t10_ParamLimits

0x574b,	// (0x0002ba25) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x00035714) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x00035714) main_mup_eq_pane_t

0x57de,	// (0x0002bab8) mup_equalizer_pane_cp5_ParamLimits

0x57f0,	// (0x0002baca) mup_equalizer_pane_cp6_ParamLimits

0x5802,	// (0x0002badc) mup_equalizer_pane_cp7_ParamLimits

0xb68b,	// (0x00031965) main_gallery_pane

0xbff7,	// (0x000322d1) smil2_volume_pane

0xbfff,	// (0x000322d9) smil_status_volume_pane_g1_ParamLimits

0xc012,	// (0x000322ec) smil_status_volume_pane_g2_ParamLimits

0xc025,	// (0x000322ff) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x000358dd) smil_status_volume_pane_g_ParamLimits

0xc21e,	// (0x000324f8) bg_popup_window_pane_cp07_ParamLimits

0xc22c,	// (0x00032506) blid_firmament_pane

0x724c,	// (0x0002d526) aid_size_cell_gallery_ParamLimits

0x724c,	// (0x0002d526) aid_size_cell_gallery

0x7262,	// (0x0002d53c) grid_gallery_pane_ParamLimits

0x7262,	// (0x0002d53c) grid_gallery_pane

0x7276,	// (0x0002d550) cell_gallery_pane_ParamLimits

0x7276,	// (0x0002d550) cell_gallery_pane

0xc347,	// (0x00032621) bg_cell_gallery_focus_pane_ParamLimits

0xc347,	// (0x00032621) bg_cell_gallery_focus_pane

0xc359,	// (0x00032633) cell_gallery_pane_g1_ParamLimits

0xc359,	// (0x00032633) cell_gallery_pane_g1

0x72bd,	// (0x0002d597) cell_gallery_pane_g2_ParamLimits

0x72bd,	// (0x0002d597) cell_gallery_pane_g2

0x72ca,	// (0x0002d5a4) cell_gallery_pane_g3_ParamLimits

0x72ca,	// (0x0002d5a4) cell_gallery_pane_g3

0xc365,	// (0x0003263f) cell_gallery_pane_g4_ParamLimits

0xc365,	// (0x0003263f) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0003598b) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0003598b) cell_gallery_pane_g

0xc371,	// (0x0003264b) bg_cell_gallery_focus_pane_g1

0xc379,	// (0x00032653) bg_cell_gallery_focus_pane_g2

0xc381,	// (0x0003265b) bg_cell_gallery_focus_pane_g3

0xc389,	// (0x00032663) bg_cell_gallery_focus_pane_g4

0xc391,	// (0x0003266b) bg_cell_gallery_focus_pane_g5

0xc399,	// (0x00032673) bg_cell_gallery_focus_pane_g6

0xc3a1,	// (0x0003267b) bg_cell_gallery_focus_pane_g7

0xc3a9,	// (0x00032683) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x00035994) bg_cell_gallery_focus_pane_g

0xc3b1,	// (0x0003268b) aid_firma_cardinal

0xc3c5,	// (0x0003269f) blid_firmament_pane_t1

0xc3dc,	// (0x000326b6) blid_firmament_pane_t2

0xc3f3,	// (0x000326cd) blid_firmament_pane_t3

0xc40a,	// (0x000326e4) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x000359a5) blid_firmament_pane_t

0xc421,	// (0x000326fb) blid_sat_info_pane

0xc431,	// (0x0003270b) blid_sat_info_pane_g1

0xc431,	// (0x0003270b) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x000359ae) blid_sat_info_pane_g

0xc43b,	// (0x00032715) blid_sat_info_pane_t1

0xc449,	// (0x00032723) smil2_volume_content_pane

0xc452,	// (0x0003272c) smil2_volume_pane_g1

0xc45a,	// (0x00032734) smil2_volume_content_pane_g1

0xc463,	// (0x0003273d) smil2_volume_content_pane_g2

0xc46c,	// (0x00032746) smil2_volume_content_pane_g3

0xc475,	// (0x0003274f) smil2_volume_content_pane_g4

0xc47e,	// (0x00032758) smil2_volume_content_pane_g5

0xc487,	// (0x00032761) smil2_volume_content_pane_g6

0xc490,	// (0x0003276a) smil2_volume_content_pane_g7

0xc499,	// (0x00032773) smil2_volume_content_pane_g8

0xc4a2,	// (0x0003277c) smil2_volume_content_pane_g9

0xc4ab,	// (0x00032785) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x000359b3) smil2_volume_content_pane_g

0x303b,	// (0x00029315) cale_week_day_heading_pane_t1_ParamLimits

0x3065,	// (0x0002933f) cale_week_day_heading_pane_t2_ParamLimits

0x3094,	// (0x0002936e) cale_week_day_heading_pane_t3_ParamLimits

0x30c3,	// (0x0002939d) cale_week_day_heading_pane_t4_ParamLimits

0x30f2,	// (0x000293cc) cale_week_day_heading_pane_t5_ParamLimits

0x3121,	// (0x000293fb) cale_week_day_heading_pane_t6_ParamLimits

0x3150,	// (0x0002942a) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x00035490) cale_week_day_heading_pane_t_ParamLimits

0x317a,	// (0x00029454) bg_cale_side_pane_ParamLimits

0x0db1,	// (0x0002708b) cale_week_time_pane_t1_ParamLimits

0x0deb,	// (0x000270c5) cale_week_time_pane_t2_ParamLimits

0x0e25,	// (0x000270ff) cale_week_time_pane_t3_ParamLimits

0x0e5f,	// (0x00027139) cale_week_time_pane_t4_ParamLimits

0x0e99,	// (0x00027173) cale_week_time_pane_t5_ParamLimits

0x0ed3,	// (0x000271ad) cale_week_time_pane_t6_ParamLimits

0x0f0d,	// (0x000271e7) cale_week_time_pane_t7_ParamLimits

0x0f47,	// (0x00027221) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0003549f) cale_week_time_pane_t_ParamLimits

0x3188,	// (0x00029462) cell_cale_week_pane_g2_ParamLimits

0x317a,	// (0x00029454) bg_cale_side_pane_cp01_ParamLimits

0x45c4,	// (0x0002a89e) cale_month_week_pane_t1_ParamLimits

0x45dd,	// (0x0002a8b7) cale_month_week_pane_t2_ParamLimits

0x45f6,	// (0x0002a8d0) cale_month_week_pane_t3_ParamLimits

0x460f,	// (0x0002a8e9) cale_month_week_pane_t4_ParamLimits

0x4628,	// (0x0002a902) cale_month_week_pane_t5_ParamLimits

0x4641,	// (0x0002a91b) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x00035574) cale_month_week_pane_t_ParamLimits

0xb761,	// (0x00031a3b) cell_cale_month_pane_g1_ParamLimits

0xb68b,	// (0x00031965) main_cale_event_viewer_pane

0x2135,	// (0x0002840f) listscroll_cale_event_viewer_pane

0xc4b4,	// (0x0003278e) list_cale_ev_pane

0xc4bc,	// (0x00032796) scroll_pane_cp023

0x72d7,	// (0x0002d5b1) field_cale_ev_pane_ParamLimits

0x72d7,	// (0x0002d5b1) field_cale_ev_pane

0xc4c8,	// (0x000327a2) field_cale_ev_content_pane_ParamLimits

0xc4c8,	// (0x000327a2) field_cale_ev_content_pane

0xc4d4,	// (0x000327ae) field_cale_ev_pane_g1_ParamLimits

0xc4d4,	// (0x000327ae) field_cale_ev_pane_g1

0xc4e0,	// (0x000327ba) field_cale_ev_pane_g2_ParamLimits

0xc4e0,	// (0x000327ba) field_cale_ev_pane_g2

0xc4f8,	// (0x000327d2) field_cale_ev_pane_g3_ParamLimits

0xc4f8,	// (0x000327d2) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x000359c8) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x000359c8) field_cale_ev_pane_g

0xc510,	// (0x000327ea) field_cale_ev_pane_t1_ParamLimits

0xc510,	// (0x000327ea) field_cale_ev_pane_t1

0x72f1,	// (0x0002d5cb) field_cale_ev_content_pane_t1_ParamLimits

0x72f1,	// (0x0002d5cb) field_cale_ev_content_pane_t1

0x58d1,	// (0x0002bbab) bg_button_pane_cp01

0x2d35,	// (0x0002900f) listscroll_cale_week_pane_ParamLimits

0x2d45,	// (0x0002901f) popup_toolbar_window_cp01

0x2f96,	// (0x00029270) listscroll_cale_week_pane_t1_ParamLimits

0x2d35,	// (0x0002900f) listscroll_cale_day_pane_ParamLimits

0x2d45,	// (0x0002901f) popup_toolbar_window_cp02

0x4822,	// (0x0002aafc) listscroll_cale_day_pane_t1_ParamLimits

0x0fd9,	// (0x000272b3) main_cale_month_pane_ParamLimits

0xbf70,	// (0x0003224a) popup_toolbar_window_cp03_ParamLimits

0xbf70,	// (0x0003224a) popup_toolbar_window_cp03

0x5c5e,	// (0x0002bf38) main_image_pane_g2_ParamLimits

0x5c5e,	// (0x0002bf38) main_image_pane_g2

0x5c6f,	// (0x0002bf49) main_image_pane_g3_ParamLimits

0x5c6f,	// (0x0002bf49) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000357a6) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000357a6) main_image_pane_g

0x5c80,	// (0x0002bf5a) main_image_pane_t1_ParamLimits

0x5c97,	// (0x0002bf71) main_image_pane_t2_ParamLimits

0x5c97,	// (0x0002bf71) main_image_pane_t2

0x5ca9,	// (0x0002bf83) main_image_pane_t3_ParamLimits

0x5ca9,	// (0x0002bf83) main_image_pane_t3

0x5cd1,	// (0x0002bfab) main_image_pane_t4_ParamLimits

0x5cd1,	// (0x0002bfab) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000357ad) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000357ad) main_image_pane_t

0x5cf1,	// (0x0002bfcb) popup_image_details_window_cp01

0x5cf9,	// (0x0002bfd3) popup_toobar_trans_pane_cp01_ParamLimits

0x5cf9,	// (0x0002bfd3) popup_toobar_trans_pane_cp01

0x10da,	// (0x000273b4) popup_image_details_window_ParamLimits

0x10da,	// (0x000273b4) popup_image_details_window

0xbf45,	// (0x0003221f) popup_image_focus_window

0x1233,	// (0x0002750d) camera2_autofocus_pane_ParamLimits

0x1233,	// (0x0002750d) camera2_autofocus_pane

0x2135,	// (0x0002840f) bg_popup_sub_pane_cp06

0xc527,	// (0x00032801) popup_image_focus_window_g1

0xc52f,	// (0x00032809) popup_image_focus_window_g2

0xc537,	// (0x00032811) popup_image_focus_window_g3

0xc53f,	// (0x00032819) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x000359cf) popup_image_focus_window_g

0xc547,	// (0x00032821) popup_image_focus_window_t1

0xc555,	// (0x0003282f) popup_image_focus_window_t2

0xc564,	// (0x0003283e) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x000359d8) popup_image_focus_window_t

0xc572,	// (0x0003284c) camera2_autofocus_pane_g1

0x6d36,	// (0x0002d010) bg_tb_trans_pane_cp01

0xc580,	// (0x0003285a) popup_image_details_window_g1

0xc593,	// (0x0003286d) popup_image_details_window_g2

0x0002,

0xf710,	// (0x000359ea) popup_image_details_window_g

0xc5bc,	// (0x00032896) popup_image_details_window_t1

0xc5ce,	// (0x000328a8) popup_image_details_window_t2

0xc5e7,	// (0x000328c1) popup_image_details_window_t3

0xc5fb,	// (0x000328d5) popup_image_details_window_t4

0xc616,	// (0x000328f0) popup_image_details_window_t5

0x0004,

0xf717,	// (0x000359f1) popup_image_details_window_t

0x2add,	// (0x00028db7) bg_calc_paper_pane_ParamLimits

0xb68b,	// (0x00031965) grid_highlight_pane_cp013

0xb69d,	// (0x00031977) list_calc_pane_ParamLimits

0xb6af,	// (0x00031989) scroll_pane_cp024

0x2af5,	// (0x00028dcf) bg_calc_display_pane_ParamLimits

0xb6b7,	// (0x00031991) calc_display_pane_t1_ParamLimits

0xb6cc,	// (0x000319a6) calc_display_pane_t2_ParamLimits

0xb6e1,	// (0x000319bb) calc_display_pane_t3_ParamLimits

0xf136,	// (0x00035410) calc_display_pane_t_ParamLimits

0x0d87,	// (0x00027061) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0003542d) cell_calc_pane_g

0x0d90,	// (0x0002706a) cell_calc_pane_t1

0x2ba4,	// (0x00028e7e) grid_highlight_pane_cp02_ParamLimits

0x2bba,	// (0x00028e94) toolbar_button_pane_cp01_ParamLimits

0x2bba,	// (0x00028e94) toolbar_button_pane_cp01

0x5d3b,	// (0x0002c015) temp_image_control_pane_ParamLimits

0x5d3b,	// (0x0002c015) temp_image_control_pane

0xb67d,	// (0x00031957) main_mp3_pane

0xc630,	// (0x0003290a) temp_image_control_pane_g1_ParamLimits

0xc630,	// (0x0003290a) temp_image_control_pane_g1

0xc63e,	// (0x00032918) temp_image_control_pane_g2_ParamLimits

0xc63e,	// (0x00032918) temp_image_control_pane_g2

0xc650,	// (0x0003292a) temp_image_control_pane_g3_ParamLimits

0xc650,	// (0x0003292a) temp_image_control_pane_g3

0x733e,	// (0x0002d618) temp_image_control_pane_g4_ParamLimits

0x733e,	// (0x0002d618) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x000359fc) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x000359fc) temp_image_control_pane_g

0xc630,	// (0x0003290a) main_mp3_pane_g1

0x734f,	// (0x0002d629) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x00035a05) main_mp3_pane_g

0xc693,	// (0x0003296d) main_mp3_pane_t1

0x3340,	// (0x0002961a) main_camera_pane_g8_ParamLimits

0x3340,	// (0x0002961a) main_camera_pane_g8

0x34db,	// (0x000297b5) main_video_pane_g7_ParamLimits

0x34db,	// (0x000297b5) main_video_pane_g7

0xc060,	// (0x0003233a) main_camera2_pane_t7_ParamLimits

0xc060,	// (0x0003233a) main_camera2_pane_t7

0x3b05,	// (0x00029ddf) scroll_pane_cp025_ParamLimits

0x3b05,	// (0x00029ddf) scroll_pane_cp025

0x3b19,	// (0x00029df3) scroll_pane_cp026_ParamLimits

0x3b19,	// (0x00029df3) scroll_pane_cp026

0x3b28,	// (0x00029e02) wml_content_pane_ParamLimits

0xb68b,	// (0x00031965) main_touch_calib_pane

0x7411,	// (0x0002d6eb) main_touch_calib_pane_g1

0x7423,	// (0x0002d6fd) main_touch_calib_pane_g2

0x7435,	// (0x0002d70f) main_touch_calib_pane_g3

0x7447,	// (0x0002d721) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x00035a23) main_touch_calib_pane_g

0x7459,	// (0x0002d733) main_touch_calib_pane_t1

0x7471,	// (0x0002d74b) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x00035a2c) main_touch_calib_pane_t

0x51bb,	// (0x0002b495) mup_progress_pane_cp02

0x51f0,	// (0x0002b4ca) navi_pane_g1

0x5298,	// (0x0002b572) navi_pane_mp_t3

0xb67d,	// (0x00031957) main_mp3_pane_ParamLimits

0x6d44,	// (0x0002d01e) navi_pane_ParamLimits

0xc630,	// (0x0003290a) main_mp3_pane_g1_ParamLimits

0x734f,	// (0x0002d629) main_mp3_pane_g2_ParamLimits

0x735b,	// (0x0002d635) main_mp3_pane_g3_ParamLimits

0x735b,	// (0x0002d635) main_mp3_pane_g3

0x7367,	// (0x0002d641) main_mp3_pane_g4_ParamLimits

0x7367,	// (0x0002d641) main_mp3_pane_g4

0xc660,	// (0x0003293a) main_mp3_pane_g5_ParamLimits

0xc660,	// (0x0003293a) main_mp3_pane_g5

0xc66e,	// (0x00032948) main_mp3_pane_g6_ParamLimits

0xc66e,	// (0x00032948) main_mp3_pane_g6

0xc67b,	// (0x00032955) main_mp3_pane_g7_ParamLimits

0xc67b,	// (0x00032955) main_mp3_pane_g7

0xc687,	// (0x00032961) main_mp3_pane_g8_ParamLimits

0xc687,	// (0x00032961) main_mp3_pane_g8

0xf72b,	// (0x00035a05) main_mp3_pane_g_ParamLimits

0x7373,	// (0x0002d64d) main_mp3_pane_t2

0x7381,	// (0x0002d65b) main_mp3_pane_t3

0xc6a1,	// (0x0003297b) main_mp3_pane_t4

0xc6af,	// (0x00032989) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x00035a16) main_mp3_pane_t

0xc6bd,	// (0x00032997) mup_progress_pane_cp01

0xb644,	// (0x0003191e) aid_zoom_text_secondary2

0xc4b4,	// (0x0003278e) list_cale_ev2_pane

0xc4bc,	// (0x00032796) scroll_pane_cp023_ParamLimits

0x74bf,	// (0x0002d799) field_cale_ev2_pane_ParamLimits

0x74bf,	// (0x0002d799) field_cale_ev2_pane

0xc6c5,	// (0x0003299f) field_cale_ev2_pane_g1_ParamLimits

0xc6c5,	// (0x0003299f) field_cale_ev2_pane_g1

0xc6d1,	// (0x000329ab) field_cale_ev2_pane_g2_ParamLimits

0xc6d1,	// (0x000329ab) field_cale_ev2_pane_g2

0xc6e9,	// (0x000329c3) field_cale_ev2_pane_g3_ParamLimits

0xc6e9,	// (0x000329c3) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x00035a37) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x00035a37) field_cale_ev2_pane_g

0xc70d,	// (0x000329e7) field_cale_ev2_pane_t1_ParamLimits

0xc70d,	// (0x000329e7) field_cale_ev2_pane_t1

0xc724,	// (0x000329fe) field_cale_ev2_pane_t2_ParamLimits

0xc724,	// (0x000329fe) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x00035a40) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x00035a40) field_cale_ev2_pane_t

0x5a33,	// (0x0002bd0d) main_postcard_pane_g5_ParamLimits

0x5a33,	// (0x0002bd0d) main_postcard_pane_g5

0x5a47,	// (0x0002bd21) main_postcard_pane_g6_ParamLimits

0x5a47,	// (0x0002bd21) main_postcard_pane_g6

0x3297,	// (0x00029571) camera2_autofocus_pane_cp_ParamLimits

0x3297,	// (0x00029571) camera2_autofocus_pane_cp

0xb67d,	// (0x00031957) main_mup3_pane

0x7515,	// (0x0002d7ef) main_mup3_pane_g1_ParamLimits

0x7515,	// (0x0002d7ef) main_mup3_pane_g1

0x7537,	// (0x0002d811) main_mup3_pane_g2_ParamLimits

0x7537,	// (0x0002d811) main_mup3_pane_g2

0x75aa,	// (0x0002d884) main_mup3_pane_g3_ParamLimits

0x75aa,	// (0x0002d884) main_mup3_pane_g3

0x75e8,	// (0x0002d8c2) main_mup3_pane_g4_ParamLimits

0x75e8,	// (0x0002d8c2) main_mup3_pane_g4

0x7626,	// (0x0002d900) main_mup3_pane_g5_ParamLimits

0x7626,	// (0x0002d900) main_mup3_pane_g5

0x7664,	// (0x0002d93e) main_mup3_pane_g6_ParamLimits

0x7664,	// (0x0002d93e) main_mup3_pane_g6

0xc739,	// (0x00032a13) main_mup3_pane_g7_ParamLimits

0xc739,	// (0x00032a13) main_mup3_pane_g7

0x0007,

0xf776,	// (0x00035a50) main_mup3_pane_g_ParamLimits

0xf776,	// (0x00035a50) main_mup3_pane_g

0x76da,	// (0x0002d9b4) main_mup3_pane_t1_ParamLimits

0x76da,	// (0x0002d9b4) main_mup3_pane_t1

0x7740,	// (0x0002da1a) main_mup3_pane_t2_ParamLimits

0x7740,	// (0x0002da1a) main_mup3_pane_t2

0x7806,	// (0x0002dae0) main_mup3_pane_t4_ParamLimits

0x7806,	// (0x0002dae0) main_mup3_pane_t4

0x7854,	// (0x0002db2e) main_mup3_pane_t5_ParamLimits

0x7854,	// (0x0002db2e) main_mup3_pane_t5

0x7902,	// (0x0002dbdc) main_mup3_pane_t6_ParamLimits

0x7902,	// (0x0002dbdc) main_mup3_pane_t6

0x0005,

0xf787,	// (0x00035a61) main_mup3_pane_t_ParamLimits

0xf787,	// (0x00035a61) main_mup3_pane_t

0x79b6,	// (0x0002dc90) mup3_progress_pane_ParamLimits

0x79b6,	// (0x0002dc90) mup3_progress_pane

0x7a32,	// (0x0002dd0c) popup_mup3_control_window_ParamLimits

0x7a32,	// (0x0002dd0c) popup_mup3_control_window

0xc747,	// (0x00032a21) popup_mup3_text_window

0x7a60,	// (0x0002dd3a) mup3_progress_pane_t1

0x7a7e,	// (0x0002dd58) mup3_progress_pane_t2

0xc74f,	// (0x00032a29) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x00035a6e) mup3_progress_pane_t

0xc76c,	// (0x00032a46) mup_progress_pane_cp03

0x2135,	// (0x0002840f) bg_tb_trans_pane_cp04

0x7a9c,	// (0x0002dd76) mup3_volume_pane

0x7aa4,	// (0x0002dd7e) popup_mup3_control_window_g1

0x7aad,	// (0x0002dd87) mup3_volume_pane_g1

0x7ab6,	// (0x0002dd90) mup3_volume_pane_g2

0x7abf,	// (0x0002dd99) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x00035a75) mup3_volume_pane_g

0x2135,	// (0x0002840f) bg_tb_trans_pane_cp03

0xc77c,	// (0x00032a56) popup_mup3_text_window_g1

0xc784,	// (0x00032a5e) popup_mup3_text_window_t1

0x2b8d,	// (0x00028e67) list_calc_item_pane_g1_ParamLimits

0xc148,	// (0x00032422) mup_volume_pane_cp_g1

0x7489,	// (0x0002d763) main_touch_calib_pane_t3

0x749b,	// (0x0002d775) main_touch_calib_pane_t4

0x74ad,	// (0x0002d787) main_touch_calib_pane_t5

0xb634,	// (0x0003190e) aid_cell_size_toolbar2

0xb63c,	// (0x00031916) aid_popup3_width_pane

0xb644,	// (0x0003191e) aid_zoom_text_msg_primary

0x3276,	// (0x00029550) vorec_t7

0x2b01,	// (0x00028ddb) bg_calc_paper_pane_g1_ParamLimits

0x2b0d,	// (0x00028de7) bg_calc_paper_pane_g2_ParamLimits

0x2b19,	// (0x00028df3) bg_calc_paper_pane_g3_ParamLimits

0x2b25,	// (0x00028dff) bg_calc_paper_pane_g4_ParamLimits

0x2b31,	// (0x00028e0b) bg_calc_paper_pane_g5_ParamLimits

0x2b3d,	// (0x00028e17) bg_calc_paper_pane_g6_ParamLimits

0x2b4c,	// (0x00028e26) bg_calc_paper_pane_g7_ParamLimits

0x2b5b,	// (0x00028e35) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x00035417) bg_calc_paper_pane_g_ParamLimits

0x2b6a,	// (0x00028e44) calc_bg_paper_pane_g9_ParamLimits

0x33d7,	// (0x000296b1) image_qvga_pane_ParamLimits

0x33d7,	// (0x000296b1) image_qvga_pane

0x283e,	// (0x00028b18) bg_popup_sub_pane_cp04_ParamLimits

0x5bbc,	// (0x0002be96) popup_mup_playback_window_g1_ParamLimits

0x5bc8,	// (0x0002bea2) popup_mup_playback_window_t1_ParamLimits

0x5bdd,	// (0x0002beb7) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000357a1) popup_mup_playback_window_t_ParamLimits

0x6fd8,	// (0x0002d2b2) main_mup2_pane_g3_ParamLimits

0x6fd8,	// (0x0002d2b2) main_mup2_pane_g3

0x382a,	// (0x00029b04) popup_toolbar_window_cp04

0x6330,	// (0x0002c60a) popup_call2_audio_second_window_g3_ParamLimits

0x6330,	// (0x0002c60a) popup_call2_audio_second_window_g3

0x673a,	// (0x0002ca14) popup_call2_audio_first_window_g4_ParamLimits

0x673a,	// (0x0002ca14) popup_call2_audio_first_window_g4

0xbb70,	// (0x00031e4a) popup_call2_audio_in_window_g4_ParamLimits

0xbb70,	// (0x00031e4a) popup_call2_audio_in_window_g4

0x5bf2,	// (0x0002becc) aid_area_sk_bg_cut_ParamLimits

0x5bf2,	// (0x0002becc) aid_area_sk_bg_cut

0x5c10,	// (0x0002beea) aid_area_sk_bg_cut_2_ParamLimits

0x5c10,	// (0x0002beea) aid_area_sk_bg_cut_2

0x72ad,	// (0x0002d587) aid_placing_details_win

0x72b5,	// (0x0002d58f) aid_placing_details_win_2

0xc572,	// (0x0003284c) camera2_autofocus_pane_g1_ParamLimits

0x0c28,	// (0x00026f02) popup_fixed_preview_cale_window_ParamLimits

0x0c28,	// (0x00026f02) popup_fixed_preview_cale_window

0x5354,	// (0x0002b62e) navi_slider_pane_g3

0x535d,	// (0x0002b637) navi_slider_pane_g4

0x5366,	// (0x0002b640) navi_slider_pane_g5

0x5354,	// (0x0002b62e) navi_slider_pane_g6

0xb807,	// (0x00031ae1) navi_slider_pane_g7

0x581f,	// (0x0002baf9) mup_scale_pane_g3

0x5828,	// (0x0002bb02) mup_scale_pane_g4

0x5831,	// (0x0002bb0b) mup_scale_pane_g5

0x583a,	// (0x0002bb14) mup_scale_pane_g6

0x5843,	// (0x0002bb1d) mup_scale_pane_g7

0x5354,	// (0x0002b62e) cams2_slider_pane_g3

0xc1fd,	// (0x000324d7) cams2_slider_pane_g4

0xc205,	// (0x000324df) cams2_slider_pane_g5

0x5354,	// (0x0002b62e) cams2_slider_pane_g6

0xc20d,	// (0x000324e7) cams2_slider_pane_g7

0xc431,	// (0x0003270b) camera2_autofocus_pane_cp_g1

0xbf11,	// (0x000321eb) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf11,	// (0x000321eb) bg_popup_preview_window_pane_cp02

0xc792,	// (0x00032a6c) list_fp_cale_pane_ParamLimits

0xc792,	// (0x00032a6c) list_fp_cale_pane

0xc79e,	// (0x00032a78) popup_fixed_preview_cale_window_t1_ParamLimits

0xc79e,	// (0x00032a78) popup_fixed_preview_cale_window_t1

0x7ac8,	// (0x0002dda2) popup_fixed_preview_cale_window_t2_ParamLimits

0x7ac8,	// (0x0002dda2) popup_fixed_preview_cale_window_t2

0x7add,	// (0x0002ddb7) popup_fixed_preview_cale_window_t3_ParamLimits

0x7add,	// (0x0002ddb7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x00035a7c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x00035a7c) popup_fixed_preview_cale_window_t

0x7af2,	// (0x0002ddcc) list_single_fp_cale_pane_ParamLimits

0x7af2,	// (0x0002ddcc) list_single_fp_cale_pane

0xc7bc,	// (0x00032a96) list_single_fp_cale_pane_g1_ParamLimits

0xc7bc,	// (0x00032a96) list_single_fp_cale_pane_g1

0xc7c8,	// (0x00032aa2) list_single_fp_cale_pane_g2_ParamLimits

0xc7c8,	// (0x00032aa2) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x00035a83) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x00035a83) list_single_fp_cale_pane_g

0xc7e1,	// (0x00032abb) list_single_fp_cale_pane_t1_ParamLimits

0xc7e1,	// (0x00032abb) list_single_fp_cale_pane_t1

0xc7f3,	// (0x00032acd) list_single_fp_cale_pane_t2_ParamLimits

0xc7f3,	// (0x00032acd) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x00035a8a) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x00035a8a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb68b,	// (0x00031965) main_dialer_pane

0x7b06,	// (0x0002dde0) aid_cell_size_keypad

0x7b10,	// (0x0002ddea) dialer_ne_pane

0x7b18,	// (0x0002ddf2) grid_dialer_command_1_pane

0x7b20,	// (0x0002ddfa) grid_dialer_command_2_pane

0x7b28,	// (0x0002de02) grid_dialer_keypad_pane

0x7b38,	// (0x0002de12) bg_popup_call_pane_cp06_ParamLimits

0x7b38,	// (0x0002de12) bg_popup_call_pane_cp06

0x7b44,	// (0x0002de1e) dialer_ne_clear_pane_ParamLimits

0x7b44,	// (0x0002de1e) dialer_ne_clear_pane

0xc826,	// (0x00032b00) dialer_ne_pane_g1

0xc82e,	// (0x00032b08) dialer_ne_pane_t1_ParamLimits

0xc82e,	// (0x00032b08) dialer_ne_pane_t1

0x7b50,	// (0x0002de2a) dialer_ne_pane_t2_ParamLimits

0x7b50,	// (0x0002de2a) dialer_ne_pane_t2

0x7b7a,	// (0x0002de54) dialer_ne_pane_t3_ParamLimits

0x7b7a,	// (0x0002de54) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x00035a8f) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x00035a8f) dialer_ne_pane_t

0x7baa,	// (0x0002de84) dialer_ne_pane_t3_copy1_ParamLimits

0x7baa,	// (0x0002de84) dialer_ne_pane_t3_copy1

0x7bd9,	// (0x0002deb3) cell_dialer_keypad_pane_ParamLimits

0x7bd9,	// (0x0002deb3) cell_dialer_keypad_pane

0x7bee,	// (0x0002dec8) cell_dialer_command_1_pane_ParamLimits

0x7bee,	// (0x0002dec8) cell_dialer_command_1_pane

0x7c04,	// (0x0002dede) cell_dialer_command_2_pane_ParamLimits

0x7c04,	// (0x0002dede) cell_dialer_command_2_pane

0xc840,	// (0x00032b1a) bg_button_pane_cp02_ParamLimits

0xc840,	// (0x00032b1a) bg_button_pane_cp02

0x7c13,	// (0x0002deed) cell_dialer_keypad_pane_g1_ParamLimits

0x7c13,	// (0x0002deed) cell_dialer_keypad_pane_g1

0xc840,	// (0x00032b1a) bg_button_pane_cp03_ParamLimits

0xc840,	// (0x00032b1a) bg_button_pane_cp03

0x7c28,	// (0x0002df02) cell_dialer_command_1_pane_g1_ParamLimits

0x7c28,	// (0x0002df02) cell_dialer_command_1_pane_g1

0xc84c,	// (0x00032b26) bg_button_pane_cp04

0x7c3c,	// (0x0002df16) cell_dialer_command_2_pane_g1

0x322e,	// (0x00029508) bg_button_pane_cp06

0xc854,	// (0x00032b2e) dialer_ne_clear_pane_g1

0x51fc,	// (0x0002b4d6) navi_pane_g2

0x5225,	// (0x0002b4ff) navi_pane_g3

0x0002,

0xf3ca,	// (0x000356a4) navi_pane_g

0x52a6,	// (0x0002b580) navi_pane_mv_g2

0x52cd,	// (0x0002b5a7) navi_pane_mv_g5

0x52d5,	// (0x0002b5af) navi_pane_mv_t1

0x2af5,	// (0x00028dcf) main_clock2_pane

0x7c81,	// (0x0002df5b) main_clock2_list_pane_ParamLimits

0x7c81,	// (0x0002df5b) main_clock2_list_pane

0x7cb3,	// (0x0002df8d) main_clock2_pane_t1_ParamLimits

0x7cb3,	// (0x0002df8d) main_clock2_pane_t1

0x7ced,	// (0x0002dfc7) main_clock2_pane_t2_ParamLimits

0x7ced,	// (0x0002dfc7) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x00035a9b) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x00035a9b) main_clock2_pane_t

0x7d81,	// (0x0002e05b) popup_clock_analogue_window_cp03_ParamLimits

0x7d81,	// (0x0002e05b) popup_clock_analogue_window_cp03

0x7da6,	// (0x0002e080) popup_clock_digital_window_cp02_ParamLimits

0x7da6,	// (0x0002e080) popup_clock_digital_window_cp02

0x7e17,	// (0x0002e0f1) main_clock2_list_single_pane_ParamLimits

0x7e17,	// (0x0002e0f1) main_clock2_list_single_pane

0x322e,	// (0x00029508) list_highlight_pane_cp05

0xc88c,	// (0x00032b66) main_clock2_list_single_pane_t1

0x382a,	// (0x00029b04) popup_toolbar_window_cp04_ParamLimits

0x730e,	// (0x0002d5e8) camera2_autofocus_pane_g2_ParamLimits

0x730e,	// (0x0002d5e8) camera2_autofocus_pane_g2

0x731a,	// (0x0002d5f4) camera2_autofocus_pane_g3_ParamLimits

0x731a,	// (0x0002d5f4) camera2_autofocus_pane_g3

0x7326,	// (0x0002d600) camera2_autofocus_pane_g4_ParamLimits

0x7326,	// (0x0002d600) camera2_autofocus_pane_g4

0x7332,	// (0x0002d60c) camera2_autofocus_pane_g5_ParamLimits

0x7332,	// (0x0002d60c) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x000359df) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x000359df) camera2_autofocus_pane_g

0x74d7,	// (0x0002d7b1) camera2_autofocus_pane_cp_g2

0x74df,	// (0x0002d7b9) camera2_autofocus_pane_cp_g3

0x74e7,	// (0x0002d7c1) camera2_autofocus_pane_cp_g4

0x74ef,	// (0x0002d7c9) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x00035a45) camera2_autofocus_pane_cp_g

0x7b30,	// (0x0002de0a) popup_dialer_spcha_window

0x2135,	// (0x0002840f) bg_popup_sub_pane_cp07

0xc89a,	// (0x00032b74) list_spcha_pane

0xc8a2,	// (0x00032b7c) list_single_spcha_pane_ParamLimits

0xc8a2,	// (0x00032b7c) list_single_spcha_pane

0x2135,	// (0x0002840f) list_highlight_pane_cp06

0xc8b3,	// (0x00032b8d) list_single_spcha_pane_t1

0xb91a,	// (0x00031bf4) popup_call2_audio_out_window_g4_ParamLimits

0xb91a,	// (0x00031bf4) popup_call2_audio_out_window_g4

0xb68b,	// (0x00031965) main_imed2_pane

0xbf4d,	// (0x00032227) popup_imed_adjust2_window

0x10f0,	// (0x000273ca) popup_imed_trans_window_ParamLimits

0x10f0,	// (0x000273ca) popup_imed_trans_window

0xc275,	// (0x0003254f) popup_blid_sat_info2_window_t1

0xc283,	// (0x0003255d) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x00035974) popup_blid_sat_info2_window_t

0x7e49,	// (0x0002e123) aid_size_cell_colour_35

0x7e69,	// (0x0002e143) aid_size_cell_colour_112

0x7e89,	// (0x0002e163) aid_size_cell_effect

0xbf1d,	// (0x000321f7) bg_tb_trans_pane_cp02

0x496c,	// (0x0002ac46) heading_imed_pane

0x7ea9,	// (0x0002e183) listscroll_imed_pane

0xc8c1,	// (0x00032b9b) heading_imed_pane_g1

0xc8c9,	// (0x00032ba3) heading_imed_pane_t1

0xc8d7,	// (0x00032bb1) grid_imed_colour_35_pane_ParamLimits

0xc8d7,	// (0x00032bb1) grid_imed_colour_35_pane

0x7eb5,	// (0x0002e18f) grid_imed_effect_pane

0xc8ea,	// (0x00032bc4) list_imed_aspect_pane

0x7ec8,	// (0x0002e1a2) scroll_pane_cp027_ParamLimits

0x7ec8,	// (0x0002e1a2) scroll_pane_cp027

0x7ed4,	// (0x0002e1ae) cell_imed_effect_pane_ParamLimits

0x7ed4,	// (0x0002e1ae) cell_imed_effect_pane

0xc8f2,	// (0x00032bcc) cell_imed_colour_pane_ParamLimits

0xc8f2,	// (0x00032bcc) cell_imed_colour_pane

0xc92c,	// (0x00032c06) cell_imed_colour_pane_g1_ParamLimits

0xc92c,	// (0x00032c06) cell_imed_colour_pane_g1

0xc93d,	// (0x00032c17) hgihlgiht_grid_pane_cp016_ParamLimits

0xc93d,	// (0x00032c17) hgihlgiht_grid_pane_cp016

0x7ef9,	// (0x0002e1d3) cell_imed_effect_pane_g1

0x7f01,	// (0x0002e1db) grid_highlight_pane_cp017

0xc94e,	// (0x00032c28) list_imed_single_pane_ParamLimits

0xc94e,	// (0x00032c28) list_imed_single_pane

0x2135,	// (0x0002840f) list_highlight_pane_cp07

0xc961,	// (0x00032c3b) list_imed_aspect_pane_comp1_t1

0xbf1d,	// (0x000321f7) bg_tb_trans_pane_cp05

0xc981,	// (0x00032c5b) popup_imed_adjust2_window_g1

0xc9a8,	// (0x00032c82) popup_imed_adjust2_window_t1

0xc9c0,	// (0x00032c9a) slider_imed_adjust_pane

0xc9d4,	// (0x00032cae) slider_imed_adjust_pane_g1

0xc9e4,	// (0x00032cbe) slider_imed_adjust_pane_g2

0xc9f4,	// (0x00032cce) slider_imed_adjust_pane_g3

0xca05,	// (0x00032cdf) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x00035ab8) slider_imed_adjust_pane_g

0x7f0a,	// (0x0002e1e4) aid_size_cell_clipart2

0x7f16,	// (0x0002e1f0) grid_imed_clipart_pane

0xca16,	// (0x00032cf0) scroll_pane_cp031

0x7f20,	// (0x0002e1fa) cell_imed_clipart_pane_ParamLimits

0x7f20,	// (0x0002e1fa) cell_imed_clipart_pane

0x7f38,	// (0x0002e212) cell_imed_clipart_pane_g1

0x2135,	// (0x0002840f) grid_highlight_pane_cp014

0x7c94,	// (0x0002df6e) main_clock2_pane_g1_ParamLimits

0x7c94,	// (0x0002df6e) main_clock2_pane_g1

0x7dc2,	// (0x0002e09c) aid_call2_pane_cp10

0x7dd4,	// (0x0002e0ae) aid_call_pane_cp10

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g1

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g2

0x7de6,	// (0x0002e0c0) popup_clock_analogue_window_cp10_g3

0x7de6,	// (0x0002e0c0) popup_clock_analogue_window_cp10_g4

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x00035aa6) popup_clock_analogue_window_cp10_g

0x7df8,	// (0x0002e0d2) popup_clock_analogue_window_cp10_t1

0x162e,	// (0x00027908) clock_digital_number_pane_cp10_ParamLimits

0x162e,	// (0x00027908) clock_digital_number_pane_cp10

0x1646,	// (0x00027920) clock_digital_number_pane_cp11_ParamLimits

0x1646,	// (0x00027920) clock_digital_number_pane_cp11

0x165e,	// (0x00027938) clock_digital_number_pane_cp12_ParamLimits

0x165e,	// (0x00027938) clock_digital_number_pane_cp12

0x1676,	// (0x00027950) clock_digital_number_pane_cp13_ParamLimits

0x1676,	// (0x00027950) clock_digital_number_pane_cp13

0x168e,	// (0x00027968) clock_digital_separator_pane_cp10_ParamLimits

0x168e,	// (0x00027968) clock_digital_separator_pane_cp10

0x7e29,	// (0x0002e103) popup_clock_digital_window_cp02_t1_ParamLimits

0x7e29,	// (0x0002e103) popup_clock_digital_window_cp02_t1

0x2836,	// (0x00028b10) clock_digital_number_pane_cp10_g1

0x2836,	// (0x00028b10) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x00035ac1) clock_digital_number_pane_cp10_g

0x2836,	// (0x00028b10) clock_digital_separator_pane_cp10_g1

0x2836,	// (0x00028b10) clock_digital_separator_pane_g2_cp10

0x5313,	// (0x0002b5ed) navi_pane_vded_g4

0x531c,	// (0x0002b5f6) navi_pane_vded_g5

0x5325,	// (0x0002b5ff) navi_pane_vded_t1

0xb68b,	// (0x00031965) main_vded_pane

0x7f41,	// (0x0002e21b) main_vded_pane_g1

0x7f4b,	// (0x0002e225) main_vded_pane_g2

0x7f53,	// (0x0002e22d) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x00035ac6) main_vded_pane_g

0x7f5b,	// (0x0002e235) main_vded_pane_t1

0x7f69,	// (0x0002e243) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x00035acd) main_vded_pane_t

0x7f77,	// (0x0002e251) vded_slider_pane

0x7f7f,	// (0x0002e259) vded_video_pane

0xca1e,	// (0x00032cf8) vded_video_pane_g1

0x7f87,	// (0x0002e261) vded_video_pane_g2

0xc431,	// (0x0003270b) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x00035ad2) vded_video_pane_g

0xca28,	// (0x00032d02) vded_slider_pane_g1

0xc148,	// (0x00032422) vded_slider_pane_g2

0xca31,	// (0x00032d0b) vded_slider_pane_g3

0xca3a,	// (0x00032d14) vded_slider_pane_g4

0xca43,	// (0x00032d1d) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x00035ad9) vded_slider_pane_g

0x7a1c,	// (0x0002dcf6) mup3_rocker_pane_ParamLimits

0x7a1c,	// (0x0002dcf6) mup3_rocker_pane

0x7f90,	// (0x0002e26a) mup3_control_keys_pane_g1

0x7f98,	// (0x0002e272) mup3_control_keys_pane_g2

0x7fa0,	// (0x0002e27a) mup3_control_keys_pane_g3

0x7fa8,	// (0x0002e282) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x00035ae4) mup3_control_keys_pane_g

0x0c5b,	// (0x00026f35) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c5b,	// (0x00026f35) popup_toolbar2_fixed_window_cp01

0x7a4a,	// (0x0002dd24) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7a4a,	// (0x0002dd24) popup_toolbar2_fixed_window_cp02

0x64a2,	// (0x0002c77c) popup_call2_audio_second_window_t4_ParamLimits

0x64a2,	// (0x0002c77c) popup_call2_audio_second_window_t4

0x69d0,	// (0x0002ccaa) popup_call2_audio_first_window_t6_ParamLimits

0x69d0,	// (0x0002ccaa) popup_call2_audio_first_window_t6

0xba1d,	// (0x00031cf7) popup_call2_audio_out_window_t6_ParamLimits

0xba1d,	// (0x00031cf7) popup_call2_audio_out_window_t6

0xb68b,	// (0x00031965) main_vitu_pane

0x7fb8,	// (0x0002e292) aid_size_cell_itu_ParamLimits

0x7fb8,	// (0x0002e292) aid_size_cell_itu

0x6d36,	// (0x0002d010) bg_popup_window_pane_cp08_ParamLimits

0x6d36,	// (0x0002d010) bg_popup_window_pane_cp08

0x7fce,	// (0x0002e2a8) field_vitu_entry_pane_ParamLimits

0x7fce,	// (0x0002e2a8) field_vitu_entry_pane

0x7fe1,	// (0x0002e2bb) grid_vitu_function_pane_ParamLimits

0x7fe1,	// (0x0002e2bb) grid_vitu_function_pane

0x7ff6,	// (0x0002e2d0) grid_vitu_itu_pane_ParamLimits

0x7ff6,	// (0x0002e2d0) grid_vitu_itu_pane

0x800c,	// (0x0002e2e6) cell_vitu_itu_pane_ParamLimits

0x800c,	// (0x0002e2e6) cell_vitu_itu_pane

0x802e,	// (0x0002e308) cell_vitu_function_pane_ParamLimits

0x802e,	// (0x0002e308) cell_vitu_function_pane

0x6d36,	// (0x0002d010) bg_popup_sub_pane_cp08_ParamLimits

0x6d36,	// (0x0002d010) bg_popup_sub_pane_cp08

0x8047,	// (0x0002e321) field_vitu_entry_pane_t1_ParamLimits

0x8047,	// (0x0002e321) field_vitu_entry_pane_t1

0xca64,	// (0x00032d3e) field_vitu_entry_pane_t2_ParamLimits

0xca64,	// (0x00032d3e) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x00035af2) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x00035af2) field_vitu_entry_pane_t

0xca81,	// (0x00032d5b) bg_button_pane_cp05_ParamLimits

0xca81,	// (0x00032d5b) bg_button_pane_cp05

0x8063,	// (0x0002e33d) cell_vitu_itu_pane_g1

0x807b,	// (0x0002e355) cell_vitu_itu_pane_t1_ParamLimits

0x807b,	// (0x0002e355) cell_vitu_itu_pane_t1

0x808d,	// (0x0002e367) cell_vitu_itu_pane_t2_ParamLimits

0x808d,	// (0x0002e367) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x00035af7) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x00035af7) cell_vitu_itu_pane_t

0xca8f,	// (0x00032d69) bg_button_pane_cp07

0x80c2,	// (0x0002e39c) cell_vitu_function_pane_g1

0xb695,	// (0x0003196f) main_calc_pane_g1

0x0af2,	// (0x00026dcc) aid_visual_content_pane

0xb68b,	// (0x00031965) main_vradio_pane

0x80cb,	// (0x0002e3a5) main_vradio_pane_g1_ParamLimits

0x80cb,	// (0x0002e3a5) main_vradio_pane_g1

0xca99,	// (0x00032d73) main_vradio_pane_g2_ParamLimits

0xca99,	// (0x00032d73) main_vradio_pane_g2

0x0001,

0xf824,	// (0x00035afe) main_vradio_pane_g_ParamLimits

0xf824,	// (0x00035afe) main_vradio_pane_g

0x80e1,	// (0x0002e3bb) main_vradio_pane_t1_ParamLimits

0x80e1,	// (0x0002e3bb) main_vradio_pane_t1

0x80f6,	// (0x0002e3d0) main_vradio_pane_t2_ParamLimits

0x80f6,	// (0x0002e3d0) main_vradio_pane_t2

0xcaa6,	// (0x00032d80) main_vradio_pane_t3_ParamLimits

0xcaa6,	// (0x00032d80) main_vradio_pane_t3

0x0002,

0xf829,	// (0x00035b03) main_vradio_pane_t_ParamLimits

0xf829,	// (0x00035b03) main_vradio_pane_t

0x810b,	// (0x0002e3e5) vradio_rocker_control_pane_ParamLimits

0x810b,	// (0x0002e3e5) vradio_rocker_control_pane

0x811d,	// (0x0002e3f7) vradio_station_info_pane_ParamLimits

0x811d,	// (0x0002e3f7) vradio_station_info_pane

0xcab8,	// (0x00032d92) vradio_frequency_info_pane_ParamLimits

0xcab8,	// (0x00032d92) vradio_frequency_info_pane

0xc431,	// (0x0003270b) vradio_station_info_pane_g1

0xcac7,	// (0x00032da1) vradio_station_info_pane_t1_ParamLimits

0xcac7,	// (0x00032da1) vradio_station_info_pane_t1

0xcae9,	// (0x00032dc3) vradio_station_info_pane_t2_ParamLimits

0xcae9,	// (0x00032dc3) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x00035b0a) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x00035b0a) vradio_station_info_pane_t

0xcafb,	// (0x00032dd5) vradio_tuning_pane

0xcb03,	// (0x00032ddd) vradio_rocker_control_pane_g1

0xcb0b,	// (0x00032de5) vradio_rocker_control_pane_g2

0xcb13,	// (0x00032ded) vradio_rocker_control_pane_g3

0xcb1b,	// (0x00032df5) vradio_rocker_control_pane_g4

0xcb23,	// (0x00032dfd) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x00035b0f) vradio_rocker_control_pane_g

0x812d,	// (0x0002e407) vradio_frequency_info_pane_g1

0xcb2b,	// (0x00032e05) vradio_frequency_info_pane_t1_ParamLimits

0xcb2b,	// (0x00032e05) vradio_frequency_info_pane_t1

0x8137,	// (0x0002e411) vradio_tuning_pane_g1

0x8140,	// (0x0002e41a) vradio_tuning_pane_t1

0xb654,	// (0x0003192e) area_side_right_pane_ParamLimits

0xb654,	// (0x0003192e) area_side_right_pane

0xbed8,	// (0x000321b2) status_small_pane_g1

0xbee0,	// (0x000321ba) status_small_pane_g2

0xbee9,	// (0x000321c3) status_small_pane_g3

0xbef2,	// (0x000321cc) status_small_pane_g4

0x0003,

0xf5f0,	// (0x000358ca) status_small_pane_g

0xbefb,	// (0x000321d5) status_small_pane_t1

0xb68b,	// (0x00031965) main_video3_pane

0xcb3f,	// (0x00032e19) cams_zoom_vslider_pane

0xcb47,	// (0x00032e21) image3_wide_pane_ParamLimits

0xcb47,	// (0x00032e21) image3_wide_pane

0xcb61,	// (0x00032e3b) image3_wide_small_pane

0xcb6b,	// (0x00032e45) main_video3_pane_g1_ParamLimits

0xcb6b,	// (0x00032e45) main_video3_pane_g1

0xcb87,	// (0x00032e61) main_video3_pane_g2_ParamLimits

0xcb87,	// (0x00032e61) main_video3_pane_g2

0x0001,

0xf840,	// (0x00035b1a) main_video3_pane_g_ParamLimits

0xf840,	// (0x00035b1a) main_video3_pane_g

0xcba3,	// (0x00032e7d) main_video3_pane_t1_ParamLimits

0xcba3,	// (0x00032e7d) main_video3_pane_t1

0xcbce,	// (0x00032ea8) main_video3_pane_t2_ParamLimits

0xcbce,	// (0x00032ea8) main_video3_pane_t2

0xcbf9,	// (0x00032ed3) main_video3_pane_t3_ParamLimits

0xcbf9,	// (0x00032ed3) main_video3_pane_t3

0x0002,

0xf845,	// (0x00035b1f) main_video3_pane_t_ParamLimits

0xf845,	// (0x00035b1f) main_video3_pane_t

0xcc24,	// (0x00032efe) cams_zoom_vslider_pane_g1

0xcc2d,	// (0x00032f07) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x00035b26) cams_zoom_vslider_pane_g

0xcc35,	// (0x00032f0f) small_slider_vertical_pane

0xc431,	// (0x0003270b) small_slider_vertical_pane_g1

0xc431,	// (0x0003270b) small_slider_vertical_pane_g2

0xcc3d,	// (0x00032f17) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x00035b2b) small_slider_vertical_pane_g

0xb68b,	// (0x00031965) main_hwr_training_pane

0xcc46,	// (0x00032f20) hwr_training_instruct_pane_ParamLimits

0xcc46,	// (0x00032f20) hwr_training_instruct_pane

0x814f,	// (0x0002e429) hwr_training_navi_pane_ParamLimits

0x814f,	// (0x0002e429) hwr_training_navi_pane

0x8166,	// (0x0002e440) hwr_training_write_pane_ParamLimits

0x8166,	// (0x0002e440) hwr_training_write_pane

0x2135,	// (0x0002840f) bg_frame_shadow_pane

0xcc75,	// (0x00032f4f) hwr_training_write_pane_g1

0xcc7d,	// (0x00032f57) hwr_training_write_pane_g2

0xcc85,	// (0x00032f5f) hwr_training_write_pane_g3

0xcc8d,	// (0x00032f67) hwr_training_write_pane_g4

0xcc95,	// (0x00032f6f) hwr_training_write_pane_g5

0xcc9d,	// (0x00032f77) hwr_training_write_pane_g6

0xcca5,	// (0x00032f7f) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x00035b32) hwr_training_write_pane_g

0xccad,	// (0x00032f87) hwr_training_navi_pane_g1_ParamLimits

0xccad,	// (0x00032f87) hwr_training_navi_pane_g1

0xccbf,	// (0x00032f99) hwr_training_navi_pane_g2_ParamLimits

0xccbf,	// (0x00032f99) hwr_training_navi_pane_g2

0xccd1,	// (0x00032fab) hwr_training_navi_pane_g3_ParamLimits

0xccd1,	// (0x00032fab) hwr_training_navi_pane_g3

0xcce1,	// (0x00032fbb) hwr_training_navi_pane_g4_ParamLimits

0xcce1,	// (0x00032fbb) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x00035b41) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x00035b41) hwr_training_navi_pane_g

0xccee,	// (0x00032fc8) hwr_training_navi_pane_t1

0x8199,	// (0x0002e473) list_single_hwr_training_instruct_pane_ParamLimits

0x8199,	// (0x0002e473) list_single_hwr_training_instruct_pane

0xccfc,	// (0x00032fd6) list_single_hwr_training_instruct_pane_t1

0xc371,	// (0x0003264b) bg_frame_shadow_pane_g1

0xcd0b,	// (0x00032fe5) bg_frame_shadow_pane_g2

0xcd13,	// (0x00032fed) bg_frame_shadow_pane_g3

0xcd1b,	// (0x00032ff5) bg_frame_shadow_pane_g4

0xcd23,	// (0x00032ffd) bg_frame_shadow_pane_g5

0xcd2b,	// (0x00033005) bg_frame_shadow_pane_g6

0xcd33,	// (0x0003300d) bg_frame_shadow_pane_g7

0x2c8b,	// (0x00028f65) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x00035b4c) bg_frame_shadow_pane_g

0xb68b,	// (0x00031965) main_video_tele_dialer_pane

0x16b3,	// (0x0002798d) aid_size_cell_video_keypad_ParamLimits

0x16b3,	// (0x0002798d) aid_size_cell_video_keypad

0x16cd,	// (0x000279a7) grid_video_dialer_keypad_pane_ParamLimits

0x16cd,	// (0x000279a7) grid_video_dialer_keypad_pane

0x170f,	// (0x000279e9) video_down_pane_cp_ParamLimits

0x170f,	// (0x000279e9) video_down_pane_cp

0x1723,	// (0x000279fd) cell_video_dialer_keypad_pane_ParamLimits

0x1723,	// (0x000279fd) cell_video_dialer_keypad_pane

0xcd3b,	// (0x00033015) bg_button_pane_cp08_ParamLimits

0xcd3b,	// (0x00033015) bg_button_pane_cp08

0x81cd,	// (0x0002e4a7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x81cd,	// (0x0002e4a7) cell_video_dialer_keypad_pane_g1

0x7a06,	// (0x0002dce0) mup3_rocker2_pane_ParamLimits

0x7a06,	// (0x0002dce0) mup3_rocker2_pane

0xc431,	// (0x0003270b) mup3_rocker2_pane_g1

0x0fe9,	// (0x000272c3) main_dialer2_pane

0xb68b,	// (0x00031965) main_mp4_pane

0xcd57,	// (0x00033031) main_mp4_pane_g1_ParamLimits

0xcd57,	// (0x00033031) main_mp4_pane_g1

0xcd57,	// (0x00033031) main_mp4_pane_g2_ParamLimits

0xcd57,	// (0x00033031) main_mp4_pane_g2

0x1745,	// (0x00027a1f) main_mp4_pane_g3_ParamLimits

0x1745,	// (0x00027a1f) main_mp4_pane_g3

0xcd65,	// (0x0003303f) main_mp4_pane_g4_ParamLimits

0xcd65,	// (0x0003303f) main_mp4_pane_g4

0xcd93,	// (0x0003306d) main_mp4_pane_g5_ParamLimits

0xcd93,	// (0x0003306d) main_mp4_pane_g5

0x0007,

0xf892,	// (0x00035b6c) main_mp4_pane_g_ParamLimits

0xf892,	// (0x00035b6c) main_mp4_pane_g

0xce07,	// (0x000330e1) main_mp4_pane_t1_ParamLimits

0xce07,	// (0x000330e1) main_mp4_pane_t1

0xce5f,	// (0x00033139) main_mp4_pane_t2_ParamLimits

0xce5f,	// (0x00033139) main_mp4_pane_t2

0xceb1,	// (0x0003318b) main_mp4_pane_t3_ParamLimits

0xceb1,	// (0x0003318b) main_mp4_pane_t3

0xced7,	// (0x000331b1) main_mp4_pane_t4_ParamLimits

0xced7,	// (0x000331b1) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x00035b7d) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x00035b7d) main_mp4_pane_t

0xcf17,	// (0x000331f1) mp4_progress_pane_ParamLimits

0xcf17,	// (0x000331f1) mp4_progress_pane

0xcf5b,	// (0x00033235) mp4_rocker_pane_ParamLimits

0xcf5b,	// (0x00033235) mp4_rocker_pane

0xcf81,	// (0x0003325b) mp4_progress_pane_t1

0xcf98,	// (0x00033272) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x00035b86) mp4_progress_pane_t

0xcfaf,	// (0x00033289) mup_progress_pane_cp04

0xcfbb,	// (0x00033295) mp4_rocker_pane_g1

0x1775,	// (0x00027a4f) aid_cell_size_keypad2_ParamLimits

0x1775,	// (0x00027a4f) aid_cell_size_keypad2

0x178f,	// (0x00027a69) dialer2_ne_pane_ParamLimits

0x178f,	// (0x00027a69) dialer2_ne_pane

0x17a4,	// (0x00027a7e) grid_dialer2_keypad_pane_ParamLimits

0x17a4,	// (0x00027a7e) grid_dialer2_keypad_pane

0xc21e,	// (0x000324f8) bg_popup_call_pane_cp07_ParamLimits

0xc21e,	// (0x000324f8) bg_popup_call_pane_cp07

0x8208,	// (0x0002e4e2) dialer2_ne_pane_t1_ParamLimits

0x8208,	// (0x0002e4e2) dialer2_ne_pane_t1

0x17ba,	// (0x00027a94) cell_dialer2_keypad_pane_ParamLimits

0x17ba,	// (0x00027a94) cell_dialer2_keypad_pane

0xcfd7,	// (0x000332b1) bg_button_pane_pane_cp04_ParamLimits

0xcfd7,	// (0x000332b1) bg_button_pane_pane_cp04

0x8245,	// (0x0002e51f) cell_dialer2_keypad_pane_g1_ParamLimits

0x8245,	// (0x0002e51f) cell_dialer2_keypad_pane_g1

0x3706,	// (0x000299e0) aid_placing_vt_set_content_ParamLimits

0x3706,	// (0x000299e0) aid_placing_vt_set_content

0x3728,	// (0x00029a02) aid_placing_vt_set_title_ParamLimits

0x3728,	// (0x00029a02) aid_placing_vt_set_title

0xb68b,	// (0x00031965) main_image3_pane

0x1820,	// (0x00027afa) area_side_right_pane_cp01_ParamLimits

0x1820,	// (0x00027afa) area_side_right_pane_cp01

0xcd57,	// (0x00033031) main_image3_pane_g1_ParamLimits

0xcd57,	// (0x00033031) main_image3_pane_g1

0x1837,	// (0x00027b11) main_image3_pane_g2_ParamLimits

0x1837,	// (0x00027b11) main_image3_pane_g2

0x185d,	// (0x00027b37) main_image3_pane_g3_ParamLimits

0x185d,	// (0x00027b37) main_image3_pane_g3

0x1883,	// (0x00027b5d) main_image3_pane_g4_ParamLimits

0x1883,	// (0x00027b5d) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x00035b95) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x00035b95) main_image3_pane_g

0x18a9,	// (0x00027b83) main_image3_pane_t1_ParamLimits

0x18a9,	// (0x00027b83) main_image3_pane_t1

0x1901,	// (0x00027bdb) main_image3_pane_t2_ParamLimits

0x1901,	// (0x00027bdb) main_image3_pane_t2

0x1953,	// (0x00027c2d) main_image3_pane_t3_ParamLimits

0x1953,	// (0x00027c2d) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x00035b9e) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x00035b9e) main_image3_pane_t

0x6d36,	// (0x0002d010) grid_sctrl_middle_pane_cp01_ParamLimits

0x6d36,	// (0x0002d010) grid_sctrl_middle_pane_cp01

0x8290,	// (0x0002e56a) cell_sctrl_middle_pane_cp01_ParamLimits

0x8290,	// (0x0002e56a) cell_sctrl_middle_pane_cp01

0x82ad,	// (0x0002e587) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x82ad,	// (0x0002e587) cell_sctrl_middle_pane_cp01_g1

0xb68b,	// (0x00031965) main_call4_pane

0x19d3,	// (0x00027cad) aid_size_button_call4_ParamLimits

0x19d3,	// (0x00027cad) aid_size_button_call4

0x1a00,	// (0x00027cda) call4_windows_pane_ParamLimits

0x1a00,	// (0x00027cda) call4_windows_pane

0x1a16,	// (0x00027cf0) grid_call4_button_pane_ParamLimits

0x1a16,	// (0x00027cf0) grid_call4_button_pane

0xd02d,	// (0x00033307) call4_windows_conf_pane

0x82cb,	// (0x0002e5a5) popup_call4_audio_first_window_ParamLimits

0x82cb,	// (0x0002e5a5) popup_call4_audio_first_window

0x82eb,	// (0x0002e5c5) popup_call4_audio_second_window_ParamLimits

0x82eb,	// (0x0002e5c5) popup_call4_audio_second_window

0xd060,	// (0x0003333a) popup_call4_audio_wait_window_ParamLimits

0xd060,	// (0x0003333a) popup_call4_audio_wait_window

0x1a35,	// (0x00027d0f) cell_call4_button_pane_ParamLimits

0x1a35,	// (0x00027d0f) cell_call4_button_pane

0x82fd,	// (0x0002e5d7) bg_button_pane_cp09_ParamLimits

0x82fd,	// (0x0002e5d7) bg_button_pane_cp09

0x1a5a,	// (0x00027d34) cell_call4_button_pane_g1_ParamLimits

0x1a5a,	// (0x00027d34) cell_call4_button_pane_g1

0x1a80,	// (0x00027d5a) cell_call4_button_pane_t1_ParamLimits

0x1a80,	// (0x00027d5a) cell_call4_button_pane_t1

0xd0a6,	// (0x00033380) popup_call4_audio_conf_window_ParamLimits

0xd0a6,	// (0x00033380) popup_call4_audio_conf_window

0x7a60,	// (0x0002dd3a) mup3_progress_pane_t1_ParamLimits

0x7a7e,	// (0x0002dd58) mup3_progress_pane_t2_ParamLimits

0xc74f,	// (0x00032a29) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x00035a6e) mup3_progress_pane_t_ParamLimits

0xc76c,	// (0x00032a46) mup_progress_pane_cp03_ParamLimits

0x7fb0,	// (0x0002e28a) mup3_control_keys_pane_g4_copy1

0xcf45,	// (0x0003321f) mp4_rocker2_pane_ParamLimits

0xcf45,	// (0x0003321f) mp4_rocker2_pane

0xd0ba,	// (0x00033394) mp4_rocker2_pane_g1

0xd0c2,	// (0x0003339c) mp4_rocker2_pane_g2

0xd0ca,	// (0x000333a4) mp4_rocker2_pane_g3

0xd0d2,	// (0x000333ac) mp4_rocker2_pane_g4

0xd0da,	// (0x000333b4) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x00035ba7) mp4_rocker2_pane_g

0xb68b,	// (0x00031965) main_camera4_pane

0xb68b,	// (0x00031965) main_video4_pane

0x16e1,	// (0x000279bb) main_video_tele_dialer_pane_t1_ParamLimits

0x16e1,	// (0x000279bb) main_video_tele_dialer_pane_t1

0x16f8,	// (0x000279d2) main_video_tele_dialer_pane_t2_ParamLimits

0x16f8,	// (0x000279d2) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x00035b5d) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x00035b5d) main_video_tele_dialer_pane_t

0x1abe,	// (0x00027d98) cam4_autofocus_pane_ParamLimits

0x1abe,	// (0x00027d98) cam4_autofocus_pane

0x1ad2,	// (0x00027dac) cam4_image_uncrop_pane_ParamLimits

0x1ad2,	// (0x00027dac) cam4_image_uncrop_pane

0x1ae9,	// (0x00027dc3) cam4_indicators_pane_ParamLimits

0x1ae9,	// (0x00027dc3) cam4_indicators_pane

0x1b0d,	// (0x00027de7) main_camera4_pane_g1_ParamLimits

0x1b0d,	// (0x00027de7) main_camera4_pane_g1

0x1b19,	// (0x00027df3) main_camera4_pane_g2_ParamLimits

0x1b19,	// (0x00027df3) main_camera4_pane_g2

0x1b19,	// (0x00027df3) main_camera4_pane_g3_ParamLimits

0x1b19,	// (0x00027df3) main_camera4_pane_g3

0x1b25,	// (0x00027dff) main_camera4_pane_g4_ParamLimits

0x1b25,	// (0x00027dff) main_camera4_pane_g4

0x1b31,	// (0x00027e0b) main_camera4_pane_g5_ParamLimits

0x1b31,	// (0x00027e0b) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x00035bb2) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x00035bb2) main_camera4_pane_g

0x1b4e,	// (0x00027e28) main_camera4_pane_t1_ParamLimits

0x1b4e,	// (0x00027e28) main_camera4_pane_t1

0xd10e,	// (0x000333e8) bg_tb_trans_pane_cp06

0xd124,	// (0x000333fe) cam4_indicators_pane_g1

0xd134,	// (0x0003340e) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x00035bcd) cam4_indicators_pane_g

0xd154,	// (0x0003342e) cam4_indicators_pane_t1

0x1b91,	// (0x00027e6b) main_video4_pane_g1_ParamLimits

0x1b91,	// (0x00027e6b) main_video4_pane_g1

0x1ba3,	// (0x00027e7d) main_video4_pane_g2_ParamLimits

0x1ba3,	// (0x00027e7d) main_video4_pane_g2

0x1ba3,	// (0x00027e7d) main_video4_pane_g3_ParamLimits

0x1ba3,	// (0x00027e7d) main_video4_pane_g3

0x1bb2,	// (0x00027e8c) main_video4_pane_g4_ParamLimits

0x1bb2,	// (0x00027e8c) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x00035bd4) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x00035bd4) main_video4_pane_g

0x1bd0,	// (0x00027eaa) vid4_indicators_pane_ParamLimits

0x1bd0,	// (0x00027eaa) vid4_indicators_pane

0x1bf8,	// (0x00027ed2) video4_image_uncrop_cif_pane_ParamLimits

0x1bf8,	// (0x00027ed2) video4_image_uncrop_cif_pane

0x1c10,	// (0x00027eea) video4_image_uncrop_nhd_pane_ParamLimits

0x1c10,	// (0x00027eea) video4_image_uncrop_nhd_pane

0x1c24,	// (0x00027efe) video4_image_uncrop_vga_pane_ParamLimits

0x1c24,	// (0x00027efe) video4_image_uncrop_vga_pane

0xb67d,	// (0x00031957) bg_tb_trans_pane_cp07

0xd124,	// (0x000333fe) vid4_indicators_pane_g1

0xd176,	// (0x00033450) vid4_indicators_pane_g2

0xd186,	// (0x00033460) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x00035bdf) vid4_indicators_pane_g

0xd1b3,	// (0x0003348d) vid4_indicators_pane_t1

0x831b,	// (0x0002e5f5) cam4_autofocus_pane_g1

0x8323,	// (0x0002e5fd) cam4_autofocus_pane_g2

0x832b,	// (0x0002e605) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x00035bea) cam4_autofocus_pane_g

0x8333,	// (0x0002e60d) cam4_autofocus_pane_g3_copy1

0x81b1,	// (0x0002e48b) video_down_pane_cp_t1

0x81bf,	// (0x0002e499) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x00035b62) video_down_pane_cp_t

0xb67d,	// (0x00031957) popup_vitu2_window_ParamLimits

0xb67d,	// (0x00031957) popup_vitu2_window

0x1c3c,	// (0x00027f16) aid_size_cell2_itu2_ParamLimits

0x1c3c,	// (0x00027f16) aid_size_cell2_itu2

0x1c62,	// (0x00027f3c) aid_size_cell_itu2_ParamLimits

0x1c62,	// (0x00027f3c) aid_size_cell_itu2

0x1cb3,	// (0x00027f8d) bg_popup_window_pane_cp09_ParamLimits

0x1cb3,	// (0x00027f8d) bg_popup_window_pane_cp09

0x1cc1,	// (0x00027f9b) field_vitu2_entry_pane_ParamLimits

0x1cc1,	// (0x00027f9b) field_vitu2_entry_pane

0x1cd8,	// (0x00027fb2) grid_vitu2_function_pane_ParamLimits

0x1cd8,	// (0x00027fb2) grid_vitu2_function_pane

0x1d0d,	// (0x00027fe7) grid_vitu2_itu_pane_ParamLimits

0x1d0d,	// (0x00027fe7) grid_vitu2_itu_pane

0x1d74,	// (0x0002804e) cell_vitu2_itu_pane_ParamLimits

0x1d74,	// (0x0002804e) cell_vitu2_itu_pane

0x1d9c,	// (0x00028076) cell_vitu2_function_pane_ParamLimits

0x1d9c,	// (0x00028076) cell_vitu2_function_pane

0xd1cd,	// (0x000334a7) bg_popup_call_pane_cp08_ParamLimits

0xd1cd,	// (0x000334a7) bg_popup_call_pane_cp08

0xd1e4,	// (0x000334be) field_vitu2_entry_pane_g1

0xd1f0,	// (0x000334ca) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x00035bf1) field_vitu2_entry_pane_g

0x833b,	// (0x0002e615) field_vitu2_entry_pane_t1_ParamLimits

0x833b,	// (0x0002e615) field_vitu2_entry_pane_t1

0xd20a,	// (0x000334e4) field_vitu2_entry_pane_t2_ParamLimits

0xd20a,	// (0x000334e4) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x00035bf8) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x00035bf8) field_vitu2_entry_pane_t

0x1ddb,	// (0x000280b5) bg_button_pane_cp010_ParamLimits

0x1ddb,	// (0x000280b5) bg_button_pane_cp010

0xd22f,	// (0x00033509) cell_vitu2_itu_pane_g1

0x1df7,	// (0x000280d1) cell_vitu2_itu_pane_t1_ParamLimits

0x1df7,	// (0x000280d1) cell_vitu2_itu_pane_t1

0x1e55,	// (0x0002812f) cell_vitu2_itu_pane_t2_ParamLimits

0x1e55,	// (0x0002812f) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x00035c02) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x00035c02) cell_vitu2_itu_pane_t

0xb67d,	// (0x00031957) bg_button_pane_cp011

0x1f41,	// (0x0002821b) cell_vitu2_function_pane_g1

0xb68b,	// (0x00031965) main_myfav_hc_pane

0x199f,	// (0x00027c79) popup_image3_note_pane_ParamLimits

0x199f,	// (0x00027c79) popup_image3_note_pane

0x19b9,	// (0x00027c93) popup_image3_tool_bar_pane_ParamLimits

0x19b9,	// (0x00027c93) popup_image3_tool_bar_pane

0x1ee3,	// (0x000281bd) cell_vitu2_itu_pane_t3_ParamLimits

0x1ee3,	// (0x000281bd) cell_vitu2_itu_pane_t3

0x2135,	// (0x0002840f) bg_popup_trans_pane

0xd241,	// (0x0003351b) grid_image3_tool_bar_pane

0xd24b,	// (0x00033525) bg_popup_trans_pane_g1

0x3c4e,	// (0x00029f28) bg_popup_trans_pane_g2

0xd253,	// (0x0003352d) bg_popup_trans_pane_g3

0xd25b,	// (0x00033535) bg_popup_trans_pane_g4

0xd263,	// (0x0003353d) bg_popup_trans_pane_g5

0xd26b,	// (0x00033545) bg_popup_trans_pane_g6

0xd273,	// (0x0003354d) bg_popup_trans_pane_g7

0xd27b,	// (0x00033555) bg_popup_trans_pane_g8

0x3c2e,	// (0x00029f08) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x00035c09) bg_popup_trans_pane_g

0xd283,	// (0x0003355d) cell_image3_tool_bar_pane_ParamLimits

0xd283,	// (0x0003355d) cell_image3_tool_bar_pane

0xc431,	// (0x0003270b) cell_image3_tool_bar_pane_g1

0x2135,	// (0x0002840f) bg_popup_trans_pane_cp1

0xd297,	// (0x00033571) popup_image3_note_pane_t1

0xd2a5,	// (0x0003357f) popup_image3_note_pane_t2

0xd2b3,	// (0x0003358d) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x00035c1c) popup_image3_note_pane_t

0xd2c1,	// (0x0003359b) popup_image3_note_pane_t3_copy1

0x8368,	// (0x0002e642) bg_myfav_hc_instruction_pane_ParamLimits

0x8368,	// (0x0002e642) bg_myfav_hc_instruction_pane

0x837a,	// (0x0002e654) cell_myfav_contact_pane_ParamLimits

0x837a,	// (0x0002e654) cell_myfav_contact_pane

0x8394,	// (0x0002e66e) cell_myfav_contact_pane_cp1_ParamLimits

0x8394,	// (0x0002e66e) cell_myfav_contact_pane_cp1

0x83aa,	// (0x0002e684) cell_myfav_contact_pane_cp2_ParamLimits

0x83aa,	// (0x0002e684) cell_myfav_contact_pane_cp2

0x83c0,	// (0x0002e69a) cell_myfav_contact_pane_cp3_ParamLimits

0x83c0,	// (0x0002e69a) cell_myfav_contact_pane_cp3

0x83d5,	// (0x0002e6af) cell_myfav_contact_pane_cp4_ParamLimits

0x83d5,	// (0x0002e6af) cell_myfav_contact_pane_cp4

0x83e9,	// (0x0002e6c3) cell_myfav_contact_pane_cp5_ParamLimits

0x83e9,	// (0x0002e6c3) cell_myfav_contact_pane_cp5

0x83fd,	// (0x0002e6d7) cell_myfav_contact_pane_cp6_ParamLimits

0x83fd,	// (0x0002e6d7) cell_myfav_contact_pane_cp6

0x8411,	// (0x0002e6eb) cell_myfav_contact_pane_cp7_ParamLimits

0x8411,	// (0x0002e6eb) cell_myfav_contact_pane_cp7

0xd2cf,	// (0x000335a9) listscroll_gen_pane_cp05

0x8429,	// (0x0002e703) main_myfav_hc_pane_g1_ParamLimits

0x8429,	// (0x0002e703) main_myfav_hc_pane_g1

0x843f,	// (0x0002e719) main_myfav_hc_pane_g2_ParamLimits

0x843f,	// (0x0002e719) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x00035c23) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x00035c23) main_myfav_hc_pane_g

0x8469,	// (0x0002e743) main_myfav_hc_pane_t1_ParamLimits

0x8469,	// (0x0002e743) main_myfav_hc_pane_t1

0xd2d8,	// (0x000335b2) main_myfav_hc_pane_t2_ParamLimits

0xd2d8,	// (0x000335b2) main_myfav_hc_pane_t2

0xd2ea,	// (0x000335c4) main_myfav_hc_pane_t3_ParamLimits

0xd2ea,	// (0x000335c4) main_myfav_hc_pane_t3

0x847e,	// (0x0002e758) main_myfav_hc_pane_t4_ParamLimits

0x847e,	// (0x0002e758) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x00035c2a) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x00035c2a) main_myfav_hc_pane_t

0xc431,	// (0x0003270b) bg_myfav_hc_instruction_pane_g1

0xd2fc,	// (0x000335d6) cell_myfav_contact_pane_g1_ParamLimits

0xd2fc,	// (0x000335d6) cell_myfav_contact_pane_g1

0xd2fc,	// (0x000335d6) cell_myfav_contact_pane_g2_ParamLimits

0xd2fc,	// (0x000335d6) cell_myfav_contact_pane_g2

0xd308,	// (0x000335e2) cell_myfav_contact_pane_g3_ParamLimits

0xd308,	// (0x000335e2) cell_myfav_contact_pane_g3

0xc739,	// (0x00032a13) cell_myfav_contact_pane_g4_ParamLimits

0xc739,	// (0x00032a13) cell_myfav_contact_pane_g4

0xd315,	// (0x000335ef) cell_myfav_contact_pane_g5_ParamLimits

0xd315,	// (0x000335ef) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x00035c35) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x00035c35) cell_myfav_contact_pane_g

0x8455,	// (0x0002e72f) main_myfav_hc_pane_g3_ParamLimits

0x8455,	// (0x0002e72f) main_myfav_hc_pane_g3

0x0be1,	// (0x00026ebb) popup_adpt_find_window

0x84a2,	// (0x0002e77c) afind_page_pane_ParamLimits

0x84a2,	// (0x0002e77c) afind_page_pane

0x84b7,	// (0x0002e791) aid_size_cell_afind_ParamLimits

0x84b7,	// (0x0002e791) aid_size_cell_afind

0x84d5,	// (0x0002e7af) bg_popup_sub_pane_cp09_ParamLimits

0x84d5,	// (0x0002e7af) bg_popup_sub_pane_cp09

0x84e2,	// (0x0002e7bc) find_pane_cp01_ParamLimits

0x84e2,	// (0x0002e7bc) find_pane_cp01

0xd321,	// (0x000335fb) grid_afind_control_pane_ParamLimits

0xd321,	// (0x000335fb) grid_afind_control_pane

0x84ef,	// (0x0002e7c9) grid_afind_pane_ParamLimits

0x84ef,	// (0x0002e7c9) grid_afind_pane

0x850d,	// (0x0002e7e7) cell_afind_pane_ParamLimits

0x850d,	// (0x0002e7e7) cell_afind_pane

0xc431,	// (0x0003270b) afind_page_pane_g1

0x855c,	// (0x0002e836) afind_page_pane_g2

0x8565,	// (0x0002e83f) afind_page_pane_g3

0x0002,

0xf966,	// (0x00035c40) afind_page_pane_g

0x856e,	// (0x0002e848) afind_page_pane_t1

0xd335,	// (0x0003360f) cell_afind_grid_control_pane_ParamLimits

0xd335,	// (0x0003360f) cell_afind_grid_control_pane

0xcfd7,	// (0x000332b1) bg_button_pane_cp69_ParamLimits

0xcfd7,	// (0x000332b1) bg_button_pane_cp69

0x858e,	// (0x0002e868) cell_afind_pane_g1_ParamLimits

0x858e,	// (0x0002e868) cell_afind_pane_g1

0x859b,	// (0x0002e875) cell_afind_pane_t1_ParamLimits

0x859b,	// (0x0002e875) cell_afind_pane_t1

0x35af,	// (0x00029889) bg_button_pane_cp72

0xd344,	// (0x0003361e) cell_afind_grid_control_pane_g1

0x5fcb,	// (0x0002c2a5) aid_image_placing_area_ParamLimits

0x5fcb,	// (0x0002c2a5) aid_image_placing_area

0xca4c,	// (0x00032d26) field_vitu_entry_pane_g1_ParamLimits

0xca4c,	// (0x00032d26) field_vitu_entry_pane_g1

0xca58,	// (0x00032d32) field_vitu_entry_pane_g2_ParamLimits

0xca58,	// (0x00032d32) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x00035aed) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x00035aed) field_vitu_entry_pane_g

0x8063,	// (0x0002e33d) cell_vitu_itu_pane_g1_ParamLimits

0x80a5,	// (0x0002e37f) cell_vitu_itu_pane_t3_ParamLimits

0x80a5,	// (0x0002e37f) cell_vitu_itu_pane_t3

0xcf81,	// (0x0003325b) mp4_progress_pane_t1_ParamLimits

0xcf98,	// (0x00033272) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x00035b86) mp4_progress_pane_t_ParamLimits

0xcfaf,	// (0x00033289) mup_progress_pane_cp04_ParamLimits

0x8490,	// (0x0002e76a) main_myfav_hc_pane_t5_ParamLimits

0x8490,	// (0x0002e76a) main_myfav_hc_pane_t5

0xb64c,	// (0x00031926) aid_zoom_text_primary

0x0be1,	// (0x00026ebb) popup_adpt_find_window_ParamLimits

0xb67d,	// (0x00031957) main_cam_set_pane

0x1afb,	// (0x00027dd5) cam4_zoom_pane_ParamLimits

0x1afb,	// (0x00027dd5) cam4_zoom_pane

0x85ad,	// (0x0002e887) main_cam_set_pane_g1_ParamLimits

0x85ad,	// (0x0002e887) main_cam_set_pane_g1

0x85bb,	// (0x0002e895) main_cam_set_pane_g2_ParamLimits

0x85bb,	// (0x0002e895) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x00035c47) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x00035c47) main_cam_set_pane_g

0x85da,	// (0x0002e8b4) main_cam_set_pane_t1_ParamLimits

0x85da,	// (0x0002e8b4) main_cam_set_pane_t1

0x85ec,	// (0x0002e8c6) main_cset_listscroll_pane_ParamLimits

0x85ec,	// (0x0002e8c6) main_cset_listscroll_pane

0x860a,	// (0x0002e8e4) main_cset_slider_pane_ParamLimits

0x860a,	// (0x0002e8e4) main_cset_slider_pane

0xd355,	// (0x0003362f) main_cset_list_pane_ParamLimits

0xd355,	// (0x0003362f) main_cset_list_pane

0xd365,	// (0x0003363f) scroll_pane_cp028

0x862e,	// (0x0002e908) aid_area_touch_slider

0x864a,	// (0x0002e924) cset_slider_pane

0x8674,	// (0x0002e94e) main_cset_slider_pane_g1

0x8689,	// (0x0002e963) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x00035c4c) main_cset_slider_pane_g

0xd39e,	// (0x00033678) main_cset_slider_pane_t1

0x8745,	// (0x0002ea1f) main_cset_slider_pane_t2

0x875f,	// (0x0002ea39) main_cset_slider_pane_t3

0x8779,	// (0x0002ea53) main_cset_slider_pane_t4

0x8793,	// (0x0002ea6d) main_cset_slider_pane_t5

0x87ad,	// (0x0002ea87) main_cset_slider_pane_t6

0x87c2,	// (0x0002ea9c) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x00035c71) main_cset_slider_pane_t

0x88c6,	// (0x0002eba0) cset_list_set_pane_ParamLimits

0x88c6,	// (0x0002eba0) cset_list_set_pane

0x88d7,	// (0x0002ebb1) aid_position_infowindow_above

0x88df,	// (0x0002ebb9) aid_position_infowindow_below

0x88e7,	// (0x0002ebc1) cset_list_set_pane_g1_ParamLimits

0x88e7,	// (0x0002ebc1) cset_list_set_pane_g1

0x88f3,	// (0x0002ebcd) cset_list_set_pane_g3_ParamLimits

0x88f3,	// (0x0002ebcd) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x00035c90) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x00035c90) cset_list_set_pane_g

0x8902,	// (0x0002ebdc) cset_list_set_pane_t1_ParamLimits

0x8902,	// (0x0002ebdc) cset_list_set_pane_t1

0x6d36,	// (0x0002d010) list_highlight_pane_cp021_ParamLimits

0x6d36,	// (0x0002d010) list_highlight_pane_cp021

0x581f,	// (0x0002baf9) cset_slider_pane_g1

0x5831,	// (0x0002bb0b) cset_slider_pane_g2

0x5828,	// (0x0002bb02) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x00035c95) cset_slider_pane_g

0xd43e,	// (0x00033718) aid_area_touch_cam4_zoom

0xd446,	// (0x00033720) cam4_zoom_cont_pane

0xd44e,	// (0x00033728) cam4_zoom_pane_g1

0xd456,	// (0x00033730) cam4_zoom_pane_g2

0x1f54,	// (0x0002822e) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x00035c9c) cam4_zoom_pane_g

0xd45e,	// (0x00033738) cam4_zoom_cont_pane_g1

0xd467,	// (0x00033741) cam4_zoom_cont_pane_g2

0xd470,	// (0x0003374a) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x00035ca3) cam4_zoom_cont_pane_g

0x19f1,	// (0x00027ccb) call4_image_pane_ParamLimits

0x19f1,	// (0x00027ccb) call4_image_pane

0xd02d,	// (0x00033307) call4_windows_conf_pane_ParamLimits

0xd040,	// (0x0003331a) popup_call4_audio_in_window_ParamLimits

0xd040,	// (0x0003331a) popup_call4_audio_in_window

0x2135,	// (0x0002840f) bg_popup_call2_act_pane_cp02

0xd09e,	// (0x00033378) call4_list_conf_pane

0xc431,	// (0x0003270b) call4_image_pane_g1

0xc431,	// (0x0003270b) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x000359ae) call4_image_pane_g

0xd479,	// (0x00033753) list_single_graphic_popup_conf4_pane_ParamLimits

0xd479,	// (0x00033753) list_single_graphic_popup_conf4_pane

0x2135,	// (0x0002840f) list_highlight_pane_cp022

0xd48c,	// (0x00033766) list_single_graphic_popup_conf4_pane_g1

0x4e18,	// (0x0002b0f2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x00035caa) list_single_graphic_popup_conf4_pane_g

0xd494,	// (0x0003376e) list_single_graphic_popup_conf4_pane_t1

0x3844,	// (0x00029b1e) popup_vtel_slider_window_ParamLimits

0x3844,	// (0x00029b1e) popup_vtel_slider_window

0xcfc5,	// (0x0003329f) dialer2_ne_pane_t2_ParamLimits

0xcfc5,	// (0x0003329f) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x00035b8b) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x00035b8b) dialer2_ne_pane_t

0xc21e,	// (0x000324f8) bg_popup_sub_pane_cp010_ParamLimits

0xc21e,	// (0x000324f8) bg_popup_sub_pane_cp010

0x8917,	// (0x0002ebf1) popup_vtel_slider_window_g1_ParamLimits

0x8917,	// (0x0002ebf1) popup_vtel_slider_window_g1

0x892a,	// (0x0002ec04) popup_vtel_slider_window_g2_ParamLimits

0x892a,	// (0x0002ec04) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x00035caf) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x00035caf) popup_vtel_slider_window_g

0x897e,	// (0x0002ec58) vtel_slider_pane_ParamLimits

0x897e,	// (0x0002ec58) vtel_slider_pane

0x89a0,	// (0x0002ec7a) vtel_slider_pane_g1_ParamLimits

0x89a0,	// (0x0002ec7a) vtel_slider_pane_g1

0x89b4,	// (0x0002ec8e) vtel_slider_pane_g2_ParamLimits

0x89b4,	// (0x0002ec8e) vtel_slider_pane_g2

0x89cc,	// (0x0002eca6) vtel_slider_pane_g3_ParamLimits

0x89cc,	// (0x0002eca6) vtel_slider_pane_g3

0x89a0,	// (0x0002ec7a) vtel_slider_pane_g4_ParamLimits

0x89a0,	// (0x0002ec7a) vtel_slider_pane_g4

0x89e2,	// (0x0002ecbc) vtel_slider_pane_g5_ParamLimits

0x89e2,	// (0x0002ecbc) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x00035cb8) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x00035cb8) vtel_slider_pane_g

0xb67d,	// (0x00031957) main_gallery2_pane

0x1c8e,	// (0x00027f68) aid_size_row_itut2_dropdow_list_ParamLimits

0x1c8e,	// (0x00027f68) aid_size_row_itut2_dropdow_list

0x1cf1,	// (0x00027fcb) grid_vitu2_function_top_pane_ParamLimits

0x1cf1,	// (0x00027fcb) grid_vitu2_function_top_pane

0x1d36,	// (0x00028010) popup_vitu2_dropdown_list_window_ParamLimits

0x1d36,	// (0x00028010) popup_vitu2_dropdown_list_window

0x1d52,	// (0x0002802c) popup_vitu2_match_list_window

0x1f5c,	// (0x00028236) cell_vitu2_function_top_pane_ParamLimits

0x1f5c,	// (0x00028236) cell_vitu2_function_top_pane

0x1f74,	// (0x0002824e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1f74,	// (0x0002824e) cell_vitu2_function_top_pane_cp01

0x1f90,	// (0x0002826a) cell_vitu2_function_top_wide_pane_ParamLimits

0x1f90,	// (0x0002826a) cell_vitu2_function_top_wide_pane

0xb67d,	// (0x00031957) bg_button_pane_cp012

0x1fac,	// (0x00028286) cell_vitu2_function_top_pane_g1

0xd4b8,	// (0x00033792) bg_button_pane_cp013_ParamLimits

0xd4b8,	// (0x00033792) bg_button_pane_cp013

0x89f8,	// (0x0002ecd2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x89f8,	// (0x0002ecd2) cell_vitu2_function_top_wide_pane_g1

0xb67d,	// (0x00031957) bg_popup_sub_pane_cp20

0x1fc0,	// (0x0002829a) list_vitu2_match_list_pane

0xd24b,	// (0x00033525) bg_popup_sub_pane_cp20_g1

0xd253,	// (0x0003352d) bg_popup_sub_pane_cp20_g2

0x3c4e,	// (0x00029f28) bg_popup_sub_pane_cp20_g3

0xd25b,	// (0x00033535) bg_popup_sub_pane_cp20_g4

0x3c2e,	// (0x00029f08) bg_popup_sub_pane_cp20_g5

0xd4d4,	// (0x000337ae) bg_popup_sub_pane_cp20_g6

0xd26b,	// (0x00033545) bg_popup_sub_pane_cp20_g7

0xd273,	// (0x0003354d) bg_popup_sub_pane_cp20_g8

0xd27b,	// (0x00033555) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x00035cc3) bg_popup_sub_pane_cp20_g

0xd4dc,	// (0x000337b6) list_vitu2_match_list_item_pane_ParamLimits

0xd4dc,	// (0x000337b6) list_vitu2_match_list_item_pane

0xd4ee,	// (0x000337c8) list_vitu2_match_list_item_pane_t1

0xb68b,	// (0x00031965) bg_popup_sub_pane_cp21

0xd514,	// (0x000337ee) grid_vitu2_dropdown_list_pane

0x1fde,	// (0x000282b8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1fde,	// (0x000282b8) cell_vitu2_dropdown_list_char_pane

0x1fff,	// (0x000282d9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1fff,	// (0x000282d9) cell_vitu2_dropdown_list_ctrl_pane

0xd51c,	// (0x000337f6) cell_vitu2_dropdown_list_char_pane_g1

0xd525,	// (0x000337ff) cell_vitu2_dropdown_list_char_pane_g2

0xd52e,	// (0x00033808) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x00035ce0) cell_vitu2_dropdown_list_char_pane_g

0x202b,	// (0x00028305) cell_vitu2_dropdown_list_char_pane_t1

0x8a3c,	// (0x0002ed16) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a3c,	// (0x0002ed16) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a49,	// (0x0002ed23) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a49,	// (0x0002ed23) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a56,	// (0x0002ed30) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a56,	// (0x0002ed30) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2039,	// (0x00028313) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2039,	// (0x00028313) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd10e,	// (0x000333e8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd10e,	// (0x000333e8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x00035ce7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x00035ce7) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a63,	// (0x0002ed3d) aid_size_cell_gallery2_ParamLimits

0x8a63,	// (0x0002ed3d) aid_size_cell_gallery2

0x8a81,	// (0x0002ed5b) grid_gallery2_pane_ParamLimits

0x8a81,	// (0x0002ed5b) grid_gallery2_pane

0x7ec8,	// (0x0002e1a2) scroll_pane_cp029_ParamLimits

0x7ec8,	// (0x0002e1a2) scroll_pane_cp029

0x8a95,	// (0x0002ed6f) cell_gallery2_pane_ParamLimits

0x8a95,	// (0x0002ed6f) cell_gallery2_pane

0xd537,	// (0x00033811) cell_gallery2_pane_g2

0x8aee,	// (0x0002edc8) cell_gallery2_pane_g3

0xd53f,	// (0x00033819) cell_gallery2_pane_g4

0xd547,	// (0x00033821) cell_gallery2_pane_g5

0x322e,	// (0x00029508) grid_highlight_pane_cp10

0x1d52,	// (0x0002802c) popup_vitu2_match_list_window_ParamLimits

0x1d63,	// (0x0002803d) popup_vitu2_query_window_ParamLimits

0x1d63,	// (0x0002803d) popup_vitu2_query_window

0xb68b,	// (0x00031965) bg_vitu2_candi_button_pane

0xd51c,	// (0x000337f6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd525,	// (0x000337ff) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd52e,	// (0x00033808) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8af6,	// (0x0002edd0) bg_button_pane_cp015

0x8b06,	// (0x0002ede0) bg_button_pane_cp016

0x8b18,	// (0x0002edf2) bg_button_pane_cp017

0xbf1d,	// (0x000321f7) bg_popup_sub_pane_cp22

0xd54f,	// (0x00033829) popup_vitu2_query_window_g1

0x8b59,	// (0x0002ee33) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x00035cf2) popup_vitu2_query_window_g

0x8b74,	// (0x0002ee4e) popup_vitu2_query_window_t1_ParamLimits

0x8b74,	// (0x0002ee4e) popup_vitu2_query_window_t1

0x8ba7,	// (0x0002ee81) popup_vitu2_query_window_t2_ParamLimits

0x8ba7,	// (0x0002ee81) popup_vitu2_query_window_t2

0x8bb9,	// (0x0002ee93) popup_vitu2_query_window_t3_ParamLimits

0x8bb9,	// (0x0002ee93) popup_vitu2_query_window_t3

0x8be1,	// (0x0002eebb) popup_vitu2_query_window_t4_ParamLimits

0x8be1,	// (0x0002eebb) popup_vitu2_query_window_t4

0x8bfe,	// (0x0002eed8) popup_vitu2_query_window_t5_ParamLimits

0x8bfe,	// (0x0002eed8) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x00035cf9) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x00035cf9) popup_vitu2_query_window_t

0xd34d,	// (0x00033627) main_cset_text_pane

0x862e,	// (0x0002e908) aid_area_touch_slider_ParamLimits

0x864a,	// (0x0002e924) cset_slider_pane_ParamLimits

0x8674,	// (0x0002e94e) main_cset_slider_pane_g1_ParamLimits

0x8689,	// (0x0002e963) main_cset_slider_pane_g2_ParamLimits

0xd36e,	// (0x00033648) main_cset_slider_pane_g3_ParamLimits

0xd36e,	// (0x00033648) main_cset_slider_pane_g3

0x869e,	// (0x0002e978) main_cset_slider_pane_g4_ParamLimits

0x869e,	// (0x0002e978) main_cset_slider_pane_g4

0x86ad,	// (0x0002e987) main_cset_slider_pane_g5_ParamLimits

0x86ad,	// (0x0002e987) main_cset_slider_pane_g5

0x86b9,	// (0x0002e993) main_cset_slider_pane_g6_ParamLimits

0x86b9,	// (0x0002e993) main_cset_slider_pane_g6

0xf972,	// (0x00035c4c) main_cset_slider_pane_g_ParamLimits

0xd39e,	// (0x00033678) main_cset_slider_pane_t1_ParamLimits

0x8745,	// (0x0002ea1f) main_cset_slider_pane_t2_ParamLimits

0x875f,	// (0x0002ea39) main_cset_slider_pane_t3_ParamLimits

0x8779,	// (0x0002ea53) main_cset_slider_pane_t4_ParamLimits

0x8793,	// (0x0002ea6d) main_cset_slider_pane_t5_ParamLimits

0x87ad,	// (0x0002ea87) main_cset_slider_pane_t6_ParamLimits

0x87c2,	// (0x0002ea9c) main_cset_slider_pane_t7_ParamLimits

0x87ec,	// (0x0002eac6) main_cset_slider_pane_t8_ParamLimits

0x87ec,	// (0x0002eac6) main_cset_slider_pane_t8

0x8814,	// (0x0002eaee) main_cset_slider_pane_t9_ParamLimits

0x8814,	// (0x0002eaee) main_cset_slider_pane_t9

0x883c,	// (0x0002eb16) main_cset_slider_pane_t10_ParamLimits

0x883c,	// (0x0002eb16) main_cset_slider_pane_t10

0x8864,	// (0x0002eb3e) main_cset_slider_pane_t11_ParamLimits

0x8864,	// (0x0002eb3e) main_cset_slider_pane_t11

0x888c,	// (0x0002eb66) main_cset_slider_pane_t12_ParamLimits

0x888c,	// (0x0002eb66) main_cset_slider_pane_t12

0x88a9,	// (0x0002eb83) main_cset_slider_pane_t13_ParamLimits

0x88a9,	// (0x0002eb83) main_cset_slider_pane_t13

0xf997,	// (0x00035c71) main_cset_slider_pane_t_ParamLimits

0x2135,	// (0x0002840f) bg_popup_sub_pane_cp011

0xd55b,	// (0x00033835) main_cset_text_pane_g1

0xd563,	// (0x0003383d) main_cset_text_pane_t1

0xd571,	// (0x0003384b) main_cset_text_pane_t2

0xd57f,	// (0x00033859) main_cset_text_pane_t3

0xd58d,	// (0x00033867) main_cset_text_pane_t4

0xd59b,	// (0x00033875) main_cset_text_pane_t5

0xd5a9,	// (0x00033883) main_cset_text_pane_t6

0xd5b7,	// (0x00033891) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x00035d08) main_cset_text_pane_t

0xb68b,	// (0x00031965) main_cam4_burst_pane

0xb68b,	// (0x00031965) main_cam5_pane

0x857c,	// (0x0002e856) bg_button_pane_cp019

0x8585,	// (0x0002e85f) bg_button_pane_cp020

0xd37a,	// (0x00033654) main_cset_slider_pane_g7_ParamLimits

0xd37a,	// (0x00033654) main_cset_slider_pane_g7

0xd386,	// (0x00033660) main_cset_slider_pane_g8_ParamLimits

0xd386,	// (0x00033660) main_cset_slider_pane_g8

0x86cd,	// (0x0002e9a7) main_cset_slider_pane_g9_ParamLimits

0x86cd,	// (0x0002e9a7) main_cset_slider_pane_g9

0x86d9,	// (0x0002e9b3) main_cset_slider_pane_g10_ParamLimits

0x86d9,	// (0x0002e9b3) main_cset_slider_pane_g10

0x86e5,	// (0x0002e9bf) main_cset_slider_pane_g11_ParamLimits

0x86e5,	// (0x0002e9bf) main_cset_slider_pane_g11

0x86f1,	// (0x0002e9cb) main_cset_slider_pane_g12_ParamLimits

0x86f1,	// (0x0002e9cb) main_cset_slider_pane_g12

0x86fd,	// (0x0002e9d7) main_cset_slider_pane_g13_ParamLimits

0x86fd,	// (0x0002e9d7) main_cset_slider_pane_g13

0x8709,	// (0x0002e9e3) main_cset_slider_pane_g14_ParamLimits

0x8709,	// (0x0002e9e3) main_cset_slider_pane_g14

0x8715,	// (0x0002e9ef) main_cset_slider_pane_g15_ParamLimits

0x8715,	// (0x0002e9ef) main_cset_slider_pane_g15

0xd3cc,	// (0x000336a6) main_cset_slider_pane_t14_ParamLimits

0xd3cc,	// (0x000336a6) main_cset_slider_pane_t14

0xd405,	// (0x000336df) main_cset_slider_pane_t15_ParamLimits

0xd405,	// (0x000336df) main_cset_slider_pane_t15

0x8c71,	// (0x0002ef4b) aid_cam4_burst_size_cell_ParamLimits

0x8c71,	// (0x0002ef4b) aid_cam4_burst_size_cell

0x8c91,	// (0x0002ef6b) grid_cam4_burst_pane_ParamLimits

0x8c91,	// (0x0002ef6b) grid_cam4_burst_pane

0x8cb7,	// (0x0002ef91) linegrid_cam4_burst_pane_ParamLimits

0x8cb7,	// (0x0002ef91) linegrid_cam4_burst_pane

0x8cd9,	// (0x0002efb3) scroll_pane_cp30_ParamLimits

0x8cd9,	// (0x0002efb3) scroll_pane_cp30

0x8ce5,	// (0x0002efbf) cell_cam4_burst_pane_ParamLimits

0x8ce5,	// (0x0002efbf) cell_cam4_burst_pane

0xd5c5,	// (0x0003389f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5c5,	// (0x0003389f) linegrid_cam4_burst_pane_g1

0x8d2c,	// (0x0002f006) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d2c,	// (0x0002f006) linegrid_cam4_burst_pane_g2

0xd5d2,	// (0x000338ac) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5d2,	// (0x000338ac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x00035d17) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x00035d17) linegrid_cam4_burst_pane_g

0x8d3d,	// (0x0002f017) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8d3d,	// (0x0002f017) linegrid_cam4_burst_pane_g3_copy1

0xd5df,	// (0x000338b9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5df,	// (0x000338b9) linegrid_cam4_burst_pane_g4

0x8d57,	// (0x0002f031) linegrid_cam4_burst_pane_g5_ParamLimits

0x8d57,	// (0x0002f031) linegrid_cam4_burst_pane_g5

0x8d68,	// (0x0002f042) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d68,	// (0x0002f042) linegrid_cam4_burst_pane_g6

0xd5ec,	// (0x000338c6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5ec,	// (0x000338c6) linegrid_cam4_burst_pane_g7

0x8d79,	// (0x0002f053) cell_cam4_burst_pane_g1

0xd605,	// (0x000338df) main_cam5_pane_t1_ParamLimits

0xd605,	// (0x000338df) main_cam5_pane_t1

0xd617,	// (0x000338f1) main_cam5_pane_t2_ParamLimits

0xd617,	// (0x000338f1) main_cam5_pane_t2

0xd629,	// (0x00033903) main_cam5_pane_t3_ParamLimits

0xd629,	// (0x00033903) main_cam5_pane_t3

0xd63b,	// (0x00033915) main_cam5_pane_t4_ParamLimits

0xd63b,	// (0x00033915) main_cam5_pane_t4

0xd651,	// (0x0003392b) main_cam5_pane_t5_ParamLimits

0xd651,	// (0x0003392b) main_cam5_pane_t5

0xd663,	// (0x0003393d) main_cam5_pane_t6_ParamLimits

0xd663,	// (0x0003393d) main_cam5_pane_t6

0xd675,	// (0x0003394f) main_cam5_pane_t7_ParamLimits

0xd675,	// (0x0003394f) main_cam5_pane_t7

0xd687,	// (0x00033961) main_cam5_pane_t8_ParamLimits

0xd687,	// (0x00033961) main_cam5_pane_t8

0xd6a3,	// (0x0003397d) main_cam5_pane_t9_ParamLimits

0xd6a3,	// (0x0003397d) main_cam5_pane_t9

0xd6b5,	// (0x0003398f) main_cam5_pane_t10_ParamLimits

0xd6b5,	// (0x0003398f) main_cam5_pane_t10

0xd6c7,	// (0x000339a1) main_cam5_pane_t11_ParamLimits

0xd6c7,	// (0x000339a1) main_cam5_pane_t11

0xd6d9,	// (0x000339b3) main_cam5_pane_t12_ParamLimits

0xd6d9,	// (0x000339b3) main_cam5_pane_t12

0xd6ee,	// (0x000339c8) main_cam5_pane_t13_ParamLimits

0xd6ee,	// (0x000339c8) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x00035d23) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x00035d23) main_cam5_pane_t

0x0c3f,	// (0x00026f19) popup_scut_keymap_window_ParamLimits

0x0c3f,	// (0x00026f19) popup_scut_keymap_window

0x8d8e,	// (0x0002f068) aid_size_cell_brow_shortcut

0x322e,	// (0x00029508) bg_popup_window_pane_cp010

0x8d9a,	// (0x0002f074) grid_scut_pane

0x8da4,	// (0x0002f07e) cell_scut_pane_ParamLimits

0x8da4,	// (0x0002f07e) cell_scut_pane

0x8db9,	// (0x0002f093) cell_scut_pane_g1

0xd70b,	// (0x000339e5) cell_scut_pane_t1

0xd71a,	// (0x000339f4) cell_scut_pane_t2

0x8dc2,	// (0x0002f09c) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x00035d3e) cell_scut_pane_t

0x7673,	// (0x0002d94d) main_mup3_pane_g8_ParamLimits

0x7673,	// (0x0002d94d) main_mup3_pane_g8

0x1ca1,	// (0x00027f7b) area_vitu2_query_pane_ParamLimits

0x1ca1,	// (0x00027f7b) area_vitu2_query_pane

0x8b2a,	// (0x0002ee04) input_focus_pane_cp08

0xd729,	// (0x00033a03) area_vitu2_query_pane_g1

0x8dd0,	// (0x0002f0aa) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x00035d45) area_vitu2_query_pane_g

0x8ddf,	// (0x0002f0b9) area_vitu2_query_pane_t1_ParamLimits

0x8ddf,	// (0x0002f0b9) area_vitu2_query_pane_t1

0x8df1,	// (0x0002f0cb) area_vitu2_query_pane_t2_ParamLimits

0x8df1,	// (0x0002f0cb) area_vitu2_query_pane_t2

0x8e03,	// (0x0002f0dd) area_vitu2_query_pane_t3_ParamLimits

0x8e03,	// (0x0002f0dd) area_vitu2_query_pane_t3

0xd735,	// (0x00033a0f) area_vitu2_query_pane_t4_ParamLimits

0xd735,	// (0x00033a0f) area_vitu2_query_pane_t4

0xd75d,	// (0x00033a37) area_vitu2_query_pane_t5_ParamLimits

0xd75d,	// (0x00033a37) area_vitu2_query_pane_t5

0xd785,	// (0x00033a5f) area_vitu2_query_pane_t6_ParamLimits

0xd785,	// (0x00033a5f) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x00035d4a) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x00035d4a) area_vitu2_query_pane_t

0x8e2b,	// (0x0002f105) bg_button_pane_cp018

0x8e38,	// (0x0002f112) bg_button_pane_cp021

0x8e44,	// (0x0002f11e) bg_button_pane_cp022

0x8e53,	// (0x0002f12d) input_focus_pane_cp09

0x5173,	// (0x0002b44d) aid_size_touch_mv_arrow_left

0x5197,	// (0x0002b471) aid_size_touch_mv_arrow_right

0x872d,	// (0x0002ea07) main_cset_slider_pane_g16_ParamLimits

0x872d,	// (0x0002ea07) main_cset_slider_pane_g16

0x8739,	// (0x0002ea13) main_cset_slider_pane_g17_ParamLimits

0x8739,	// (0x0002ea13) main_cset_slider_pane_g17

0x8d79,	// (0x0002f053) cell_cam4_burst_pane_g1_ParamLimits

0x2135,	// (0x0002840f) compa_mode_pane

0x893a,	// (0x0002ec14) popup_vtel_slider_window_g3_ParamLimits

0x893a,	// (0x0002ec14) popup_vtel_slider_window_g3

0x8951,	// (0x0002ec2b) popup_vtel_slider_window_g4_ParamLimits

0x8951,	// (0x0002ec2b) popup_vtel_slider_window_g4

0x8968,	// (0x0002ec42) popup_vtel_slider_window_t1_ParamLimits

0x8968,	// (0x0002ec42) popup_vtel_slider_window_t1

0xb68b,	// (0x00031965) main_cl_pane

0xbf4d,	// (0x00032227) popup_imed_adjust2_window_ParamLimits

0xbf1d,	// (0x000321f7) bg_tb_trans_pane_cp05_ParamLimits

0xc981,	// (0x00032c5b) popup_imed_adjust2_window_g1_ParamLimits

0xc990,	// (0x00032c6a) popup_imed_adjust2_window_g2_ParamLimits

0xc990,	// (0x00032c6a) popup_imed_adjust2_window_g2

0xc99c,	// (0x00032c76) popup_imed_adjust2_window_g3_ParamLimits

0xc99c,	// (0x00032c76) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x00035ab1) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x00035ab1) popup_imed_adjust2_window_g

0xc9a8,	// (0x00032c82) popup_imed_adjust2_window_t1_ParamLimits

0xc9c0,	// (0x00032c9a) slider_imed_adjust_pane_ParamLimits

0xc9d4,	// (0x00032cae) slider_imed_adjust_pane_g1_ParamLimits

0xc9e4,	// (0x00032cbe) slider_imed_adjust_pane_g2_ParamLimits

0xc9f4,	// (0x00032cce) slider_imed_adjust_pane_g3_ParamLimits

0xca05,	// (0x00032cdf) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x00035ab8) slider_imed_adjust_pane_g_ParamLimits

0x1aaa,	// (0x00027d84) aid_touch_area_cam4_ParamLimits

0x1aaa,	// (0x00027d84) aid_touch_area_cam4

0xd0e2,	// (0x000333bc) battery_pane_cp01

0x1b42,	// (0x00027e1c) main_camera4_pane_g6_ParamLimits

0x1b42,	// (0x00027e1c) main_camera4_pane_g6

0x1b63,	// (0x00027e3d) main_camera4_pane_t2_ParamLimits

0x1b63,	// (0x00027e3d) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x00035bbf) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x00035bbf) main_camera4_pane_t

0x1b7f,	// (0x00027e59) aid_touch_area_vid4_ParamLimits

0x1b7f,	// (0x00027e59) aid_touch_area_vid4

0x1bc1,	// (0x00027e9b) main_video4_pane_g5_ParamLimits

0x1bc1,	// (0x00027e9b) main_video4_pane_g5

0x1be2,	// (0x00027ebc) vid4_progress_pane_ParamLimits

0x1be2,	// (0x00027ebc) vid4_progress_pane

0xd392,	// (0x0003366c) main_cset_slider_pane_g18_ParamLimits

0xd392,	// (0x0003366c) main_cset_slider_pane_g18

0xd5f9,	// (0x000338d3) cell_cam4_burst_pane_g2_ParamLimits

0xd5f9,	// (0x000338d3) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x00035d1e) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x00035d1e) cell_cam4_burst_pane_g

0x2af5,	// (0x00028dcf) bg_cl_pane_ParamLimits

0x2af5,	// (0x00028dcf) bg_cl_pane

0x8e62,	// (0x0002f13c) cl_header_pane_ParamLimits

0x8e62,	// (0x0002f13c) cl_header_pane

0x8e76,	// (0x0002f150) cl_listscroll_pane_ParamLimits

0x8e76,	// (0x0002f150) cl_listscroll_pane

0xd7d1,	// (0x00033aab) bg_cl_pane_g1

0xd7d9,	// (0x00033ab3) bg_cl_pane_g2

0xd7e1,	// (0x00033abb) bg_cl_pane_g3

0xd7e9,	// (0x00033ac3) bg_cl_pane_g4

0xd7f1,	// (0x00033acb) bg_cl_pane_g5

0xd7f9,	// (0x00033ad3) bg_cl_pane_g6

0xd801,	// (0x00033adb) bg_cl_pane_g7

0xd809,	// (0x00033ae3) bg_cl_pane_g8

0xd811,	// (0x00033aeb) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x00035d59) bg_cl_pane_g

0x8e86,	// (0x0002f160) aid_height_cl_leading_ParamLimits

0x8e86,	// (0x0002f160) aid_height_cl_leading

0x8e92,	// (0x0002f16c) aid_height_cl_text_ParamLimits

0x8e92,	// (0x0002f16c) aid_height_cl_text

0x6d36,	// (0x0002d010) bg_cl_header_pane_ParamLimits

0x6d36,	// (0x0002d010) bg_cl_header_pane

0x8eb1,	// (0x0002f18b) cl_header_pane_g1_ParamLimits

0x8eb1,	// (0x0002f18b) cl_header_pane_g1

0x8ec7,	// (0x0002f1a1) cl_header_pane_t1_ParamLimits

0x8ec7,	// (0x0002f1a1) cl_header_pane_t1

0xd819,	// (0x00033af3) cl_list_pane

0xd822,	// (0x00033afc) hc_scroll_pane_cp01

0x3c2e,	// (0x00029f08) bg_cl_header_pane_g1

0xd24b,	// (0x00033525) bg_cl_header_pane_g2

0x3c4e,	// (0x00029f28) bg_cl_header_pane_g3

0xd25b,	// (0x00033535) bg_cl_header_pane_g4

0xd253,	// (0x0003352d) bg_cl_header_pane_g5

0xd4d4,	// (0x000337ae) bg_cl_header_pane_g6

0xd273,	// (0x0003354d) bg_cl_header_pane_g7

0xd27b,	// (0x00033555) bg_cl_header_pane_g8

0xd26b,	// (0x00033545) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x00035d6c) bg_cl_header_pane_g

0x8ee0,	// (0x0002f1ba) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ee0,	// (0x0002f1ba) hc_cl_list_double_graphic_heading_pane

0x8ef0,	// (0x0002f1ca) hc_cl_list_single_graphic_pane_ParamLimits

0x8ef0,	// (0x0002f1ca) hc_cl_list_single_graphic_pane

0x8f03,	// (0x0002f1dd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f03,	// (0x0002f1dd) hc_cl_list_single_graphic_pane_g1

0x8f0f,	// (0x0002f1e9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f0f,	// (0x0002f1e9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x00035d7f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x00035d7f) hc_cl_list_single_graphic_pane_g

0x8f23,	// (0x0002f1fd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8f23,	// (0x0002f1fd) hc_cl_list_single_graphic_pane_t1

0x8f03,	// (0x0002f1dd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f03,	// (0x0002f1dd) hc_cl_list_double_graphic_heading_pane_g1

0x8f38,	// (0x0002f212) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8f38,	// (0x0002f212) hc_cl_list_double_graphic_heading_pane_g2

0x8f4c,	// (0x0002f226) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8f4c,	// (0x0002f226) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x00035d84) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x00035d84) hc_cl_list_double_graphic_heading_pane_g

0x8f60,	// (0x0002f23a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8f60,	// (0x0002f23a) hc_cl_list_double_graphic_heading_pane_t1

0x8f75,	// (0x0002f24f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8f75,	// (0x0002f24f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x00035d8b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x00035d8b) hc_cl_list_double_graphic_heading_pane_t

0xd82b,	// (0x00033b05) vid4_progress_pane_g1

0xd83a,	// (0x00033b14) vid4_progress_pane_g2

0xd849,	// (0x00033b23) vid4_progress_pane_g3

0xd858,	// (0x00033b32) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x00035d90) vid4_progress_pane_g

0xd870,	// (0x00033b4a) vid4_progress_pane_t1

0xd886,	// (0x00033b60) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x00035d9b) vid4_progress_pane_t

0xd8b0,	// (0x00033b8a) wait_bar_pane_cp07

0xc22c,	// (0x00032506) blid_firmament_pane_ParamLimits

0xc26d,	// (0x00032547) popup_blid_sat_info2_window_g1

0xc291,	// (0x0003256b) popup_blid_sat_info2_window_t3

0xc29f,	// (0x00032579) popup_blid_sat_info2_window_t4

0xc2ad,	// (0x00032587) popup_blid_sat_info2_window_t5

0xc2bb,	// (0x00032595) popup_blid_sat_info2_window_t6

0xc2cb,	// (0x000325a5) popup_blid_sat_info2_window_t7

0xc2d9,	// (0x000325b3) popup_blid_sat_info2_window_t8

0xc2e7,	// (0x000325c1) popup_blid_sat_info2_window_t9

0xc2f5,	// (0x000325cf) popup_blid_sat_info2_window_t10

0xc3b1,	// (0x0003268b) aid_firma_cardinal_ParamLimits

0xc3c5,	// (0x0003269f) blid_firmament_pane_t1_ParamLimits

0xc3dc,	// (0x000326b6) blid_firmament_pane_t2_ParamLimits

0xc3f3,	// (0x000326cd) blid_firmament_pane_t3_ParamLimits

0xc40a,	// (0x000326e4) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x000359a5) blid_firmament_pane_t_ParamLimits

0xc421,	// (0x000326fb) blid_sat_info_pane_ParamLimits

0xb67d,	// (0x00031957) main_cam_set_pane_ParamLimits

0x7e49,	// (0x0002e123) aid_size_cell_colour_35_ParamLimits

0x7e69,	// (0x0002e143) aid_size_cell_colour_112_ParamLimits

0x7e89,	// (0x0002e163) aid_size_cell_effect_ParamLimits

0xbf1d,	// (0x000321f7) bg_tb_trans_pane_cp02_ParamLimits

0x496c,	// (0x0002ac46) heading_imed_pane_ParamLimits

0x7ea9,	// (0x0002e183) listscroll_imed_pane_ParamLimits

0x674c,	// (0x0002ca26) popup_call2_audio_first_window_g5_ParamLimits

0x674c,	// (0x0002ca26) popup_call2_audio_first_window_g5

0x17dc,	// (0x00027ab6) aid_size_touch_image3_arrow_left_ParamLimits

0x17dc,	// (0x00027ab6) aid_size_touch_image3_arrow_left

0x17fc,	// (0x00027ad6) aid_size_touch_image3_arrow_right_ParamLimits

0x17fc,	// (0x00027ad6) aid_size_touch_image3_arrow_right

0xd89b,	// (0x00033b75) vid4_progress_pane_t3

0x817d,	// (0x0002e457) main_hwr_training_symbol_option_pane_ParamLimits

0x817d,	// (0x0002e457) main_hwr_training_symbol_option_pane

0xcc60,	// (0x00032f3a) popup_hwr_training_preview_window_ParamLimits

0xcc60,	// (0x00032f3a) popup_hwr_training_preview_window

0x16a6,	// (0x00027980) hwr_training_navi_pane_g5_ParamLimits

0x16a6,	// (0x00027980) hwr_training_navi_pane_g5

0xd227,	// (0x00033501) popup_char_count_window

0xb67d,	// (0x00031957) bg_popup_sub_pane_cp20_ParamLimits

0x1fc0,	// (0x0002829a) list_vitu2_match_list_pane_ParamLimits

0x1fcf,	// (0x000282a9) vitu2_page_scroll_pane_ParamLimits

0x1fcf,	// (0x000282a9) vitu2_page_scroll_pane

0xd8f4,	// (0x00033bce) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8f4,	// (0x00033bce) list_single_hwr_training_symbol_option_pane

0xd907,	// (0x00033be1) list_single_hwr_training_symbol_option_pane_g1

0xd90f,	// (0x00033be9) list_single_hwr_training_symbol_option_pane_t1

0xd91d,	// (0x00033bf7) bg_button_pane_cp023

0xd926,	// (0x00033c00) bg_button_pane_cp024

0x8fb0,	// (0x0002f28a) vitu2_page_scroll_pane_g1

0x8fb8,	// (0x0002f292) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x00035da2) vitu2_page_scroll_pane_g

0x8fc0,	// (0x0002f29a) vitu2_page_scroll_pane_t1

0xc45a,	// (0x00032734) popup_char_count_window_g1

0xd959,	// (0x00033c33) popup_char_count_window_g2

0xd962,	// (0x00033c3c) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x00035da7) popup_char_count_window_g

0xd96b,	// (0x00033c45) popup_char_count_window_t1

0xb68b,	// (0x00031965) main_vded2_pane

0xc96f,	// (0x00032c49) aid_size_cell_imed_line

0xc979,	// (0x00032c53) grid_imed_line_width_pane

0xd197,	// (0x00033471) vid4_indicators_pane_g4

0xd979,	// (0x00033c53) cell_imed_line_width_pane_ParamLimits

0xd979,	// (0x00033c53) cell_imed_line_width_pane

0xd98b,	// (0x00033c65) cell_imed_line_width_pane_g1

0xc1da,	// (0x000324b4) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x00035dae) cell_imed_line_width_pane_g

0x8fcf,	// (0x0002f2a9) main_vded2_pane_g1_ParamLimits

0x8fcf,	// (0x0002f2a9) main_vded2_pane_g1

0x8fe5,	// (0x0002f2bf) main_vded2_pane_g2_ParamLimits

0x8fe5,	// (0x0002f2bf) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x00035db3) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x00035db3) main_vded2_pane_g

0x8ff5,	// (0x0002f2cf) vded2_slider_pane_ParamLimits

0x8ff5,	// (0x0002f2cf) vded2_slider_pane

0x9008,	// (0x0002f2e2) aid_size_touch_vded2_end

0x9010,	// (0x0002f2ea) aid_size_touch_vded2_playhead

0x9018,	// (0x0002f2f2) aid_size_touch_vded2_start

0x9020,	// (0x0002f2fa) vded2_slider_bg_pane

0x9029,	// (0x0002f303) vded2_slider_pane_g1

0x9032,	// (0x0002f30c) vded2_slider_pane_g2

0x903a,	// (0x0002f314) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x00035db8) vded2_slider_pane_g

0x9043,	// (0x0002f31d) vded2_slider_bg_pane_g1

0x904c,	// (0x0002f326) vded2_slider_bg_pane_g2

0x9055,	// (0x0002f32f) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x00035dbf) vded2_slider_bg_pane_g

0x59c0,	// (0x0002bc9a) aid_postcard_touch_down_pane_ParamLimits

0x59c0,	// (0x0002bc9a) aid_postcard_touch_down_pane

0x59d2,	// (0x0002bcac) aid_postcard_touch_up_pane_ParamLimits

0x59d2,	// (0x0002bcac) aid_postcard_touch_up_pane

0xb68b,	// (0x00031965) main_blid2_pane

0xbf35,	// (0x0003220f) popup_blid2_search_window

0x2135,	// (0x0002840f) blid2_gps_pane

0x2135,	// (0x0002840f) blid2_navig_pane

0x2135,	// (0x0002840f) blid2_search_pane

0x2135,	// (0x0002840f) blid2_tripm_pane

0x905e,	// (0x0002f338) blid2_search_pane_g1_ParamLimits

0x905e,	// (0x0002f338) blid2_search_pane_g1

0x9072,	// (0x0002f34c) blid2_search_pane_t1_ParamLimits

0x9072,	// (0x0002f34c) blid2_search_pane_t1

0x9084,	// (0x0002f35e) aid_size_cell_blid2_gps_ParamLimits

0x9084,	// (0x0002f35e) aid_size_cell_blid2_gps

0x909c,	// (0x0002f376) blid2_gps_pane_g1_ParamLimits

0x909c,	// (0x0002f376) blid2_gps_pane_g1

0x90b0,	// (0x0002f38a) grid_blid2_satellite_pane_ParamLimits

0x90b0,	// (0x0002f38a) grid_blid2_satellite_pane

0x90c4,	// (0x0002f39e) blid2_navig_pane_g1_ParamLimits

0x90c4,	// (0x0002f39e) blid2_navig_pane_g1

0x90d0,	// (0x0002f3aa) blid2_navig_pane_t1_ParamLimits

0x90d0,	// (0x0002f3aa) blid2_navig_pane_t1

0x90e9,	// (0x0002f3c3) blid2_navig_pane_t2_ParamLimits

0x90e9,	// (0x0002f3c3) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x00035dc6) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x00035dc6) blid2_navig_pane_t

0x9102,	// (0x0002f3dc) blid2_navig_ring_pane_ParamLimits

0x9102,	// (0x0002f3dc) blid2_navig_ring_pane

0x9117,	// (0x0002f3f1) blid2_speed_pane_ParamLimits

0x9117,	// (0x0002f3f1) blid2_speed_pane

0x9123,	// (0x0002f3fd) blid2_tripm_pane_g1_ParamLimits

0x9123,	// (0x0002f3fd) blid2_tripm_pane_g1

0x9138,	// (0x0002f412) blid2_tripm_pane_g2_ParamLimits

0x9138,	// (0x0002f412) blid2_tripm_pane_g2

0x914c,	// (0x0002f426) blid2_tripm_pane_g3_ParamLimits

0x914c,	// (0x0002f426) blid2_tripm_pane_g3

0x9160,	// (0x0002f43a) blid2_tripm_pane_g4_ParamLimits

0x9160,	// (0x0002f43a) blid2_tripm_pane_g4

0x9174,	// (0x0002f44e) blid2_tripm_pane_g5_ParamLimits

0x9174,	// (0x0002f44e) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x00035dcb) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x00035dcb) blid2_tripm_pane_g

0x9196,	// (0x0002f470) blid2_tripm_pane_t1_ParamLimits

0x9196,	// (0x0002f470) blid2_tripm_pane_t1

0x91ad,	// (0x0002f487) blid2_tripm_pane_t2_ParamLimits

0x91ad,	// (0x0002f487) blid2_tripm_pane_t2

0x91c4,	// (0x0002f49e) blid2_tripm_pane_t3_ParamLimits

0x91c4,	// (0x0002f49e) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x00035dd8) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x00035dd8) blid2_tripm_pane_t

0x9207,	// (0x0002f4e1) cell_blid2_satellite_pane_ParamLimits

0x9207,	// (0x0002f4e1) cell_blid2_satellite_pane

0x921f,	// (0x0002f4f9) cell_blid2_satellite_pane_g1

0xd994,	// (0x00033c6e) cell_blid2_satellite_pane_t1

0xc431,	// (0x0003270b) blid2_speed_pane_g1

0xd9a2,	// (0x00033c7c) blid2_speed_pane_t1

0xd9b0,	// (0x00033c8a) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x00035de1) blid2_speed_pane_t

0xc431,	// (0x0003270b) blid2_navig_ring_pane_g1

0x9228,	// (0x0002f502) blid2_navig_ring_pane_g2

0x9230,	// (0x0002f50a) blid2_navig_ring_pane_g3

0x9238,	// (0x0002f512) blid2_navig_ring_pane_g4

0x9240,	// (0x0002f51a) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x00035de6) blid2_navig_ring_pane_g

0x2135,	// (0x0002840f) bg_popup_window_pane_cp011

0xd9be,	// (0x00033c98) popup_blid2_search_window_g1

0xd9c6,	// (0x00033ca0) popup_blid2_search_window_t1

0xd9d4,	// (0x00033cae) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x00035df1) popup_blid2_search_window_t

0x3afd,	// (0x00029dd7) main_browser_pane_g1

0x2af5,	// (0x00028dcf) main_browser_pane_ParamLimits

0xb67d,	// (0x00031957) bg_button_pane_cp011_ParamLimits

0x1f41,	// (0x0002821b) cell_vitu2_function_pane_g1_ParamLimits

0xbf1d,	// (0x000321f7) bg_popup_sub_pane_cp22_ParamLimits

0x8b2a,	// (0x0002ee04) input_focus_pane_cp08_ParamLimits

0x8b41,	// (0x0002ee1b) popup_vitu2_query_button_pane_ParamLimits

0x8b41,	// (0x0002ee1b) popup_vitu2_query_button_pane

0x8b51,	// (0x0002ee2b) popup_vitu2_query_input_button_pane

0xd54f,	// (0x00033829) popup_vitu2_query_window_g1_ParamLimits

0x8b59,	// (0x0002ee33) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x00035cf2) popup_vitu2_query_window_g_ParamLimits

0x2135,	// (0x0002840f) bg_button_pane_cp026

0x9248,	// (0x0002f522) popup_vitu2_query_input_button_pane_g1

0x2135,	// (0x0002840f) bg_button_pane_cp025

0xd9e2,	// (0x00033cbc) popup_vitu2_query_button_pane_t1

0x738f,	// (0x0002d669) main_mp3_pane_t6

0x739d,	// (0x0002d677) popup_slider_window_cp01

0xd11c,	// (0x000333f6) cam4_battery_pane

0xd11c,	// (0x000333f6) cam4_battery_pane_cp02

0xd11c,	// (0x000333f6) cam4_battery_pane_cp01

0xd11c,	// (0x000333f6) cam4_battery_pane_cp03

0xcfbb,	// (0x00033295) cam4_battery_pane_g1

0xc431,	// (0x0003270b) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x00035df6) cam4_battery_pane_g

0xc303,	// (0x000325dd) popup_blid_sat_info2_window_t11

0x5173,	// (0x0002b44d) aid_size_touch_mv_arrow_left_ParamLimits

0x5197,	// (0x0002b471) aid_size_touch_mv_arrow_right_ParamLimits

0x51f0,	// (0x0002b4ca) navi_pane_g1_ParamLimits

0x51fc,	// (0x0002b4d6) navi_pane_g2_ParamLimits

0x5225,	// (0x0002b4ff) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000356a4) navi_pane_g_ParamLimits

0x52d5,	// (0x0002b5af) navi_pane_mv_t1_ParamLimits

0x7eb5,	// (0x0002e18f) grid_imed_effect_pane_ParamLimits

0x3745,	// (0x00029a1f) aid_placing_vt_slider_lsc

0x3755,	// (0x00029a2f) aid_placing_vt_slider_prt

0x6d36,	// (0x0002d010) bg_tb_trans_pane_cp01_ParamLimits

0xc580,	// (0x0003285a) popup_image_details_window_g1_ParamLimits

0xc593,	// (0x0003286d) popup_image_details_window_g2_ParamLimits

0xc5a8,	// (0x00032882) popup_image_details_window_g3_ParamLimits

0xc5a8,	// (0x00032882) popup_image_details_window_g3

0xf710,	// (0x000359ea) popup_image_details_window_g_ParamLimits

0xc5bc,	// (0x00032896) popup_image_details_window_t1_ParamLimits

0xc5ce,	// (0x000328a8) popup_image_details_window_t2_ParamLimits

0xc5e7,	// (0x000328c1) popup_image_details_window_t3_ParamLimits

0xc5fb,	// (0x000328d5) popup_image_details_window_t4_ParamLimits

0xc616,	// (0x000328f0) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x000359f1) popup_image_details_window_t_ParamLimits

0x8e9e,	// (0x0002f178) cl_header_name_pane_ParamLimits

0x8e9e,	// (0x0002f178) cl_header_name_pane

0x9250,	// (0x0002f52a) cl_header_name_pane_t1_ParamLimits

0x9250,	// (0x0002f52a) cl_header_name_pane_t1

0x9271,	// (0x0002f54b) cl_header_name_pane_t2_ParamLimits

0x9271,	// (0x0002f54b) cl_header_name_pane_t2

0x92b3,	// (0x0002f58d) cl_header_name_pane_t3_ParamLimits

0x92b3,	// (0x0002f58d) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x00035dfb) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x00035dfb) cl_header_name_pane_t

0x52a6,	// (0x0002b580) navi_pane_mv_g2_ParamLimits

0xd1e4,	// (0x000334be) field_vitu2_entry_pane_g1_ParamLimits

0xd1f0,	// (0x000334ca) field_vitu2_entry_pane_g2_ParamLimits

0xd1fc,	// (0x000334d6) field_vitu2_entry_pane_g3_ParamLimits

0xd1fc,	// (0x000334d6) field_vitu2_entry_pane_g3

0xf917,	// (0x00035bf1) field_vitu2_entry_pane_g_ParamLimits

0xd22f,	// (0x00033509) cell_vitu2_itu_pane_g1_ParamLimits

0x1de9,	// (0x000280c3) cell_vitu2_itu_pane_g2_ParamLimits

0x1de9,	// (0x000280c3) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x00035bfd) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x00035bfd) cell_vitu2_itu_pane_g

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp05_ParamLimits

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp05

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp03

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp04

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp10_ParamLimits

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp10

0x8e44,	// (0x0002f11e) bg_vkb2_func_pane_cp08

0x8e2b,	// (0x0002f105) bg_vkb2_func_pane_cp06

0x8e38,	// (0x0002f112) bg_vkb2_func_pane_cp07

0xd92f,	// (0x00033c09) bg_vkb2_func_pane_cp11_ParamLimits

0xd92f,	// (0x00033c09) bg_vkb2_func_pane_cp11

0xd944,	// (0x00033c1e) bg_vkb2_func_pane_cp12_ParamLimits

0xd944,	// (0x00033c1e) bg_vkb2_func_pane_cp12

0x2135,	// (0x0002840f) bg_vkb2_func_pane_cp09

0xd24b,	// (0x00033525) bg_vkb2_func_pane_g1

0x3c4e,	// (0x00029f28) bg_vkb2_func_pane_g2

0xd253,	// (0x0003352d) bg_vkb2_func_pane_g3

0xd25b,	// (0x00033535) bg_vkb2_func_pane_g4

0xd4d4,	// (0x000337ae) bg_vkb2_func_pane_g5

0xd273,	// (0x0003354d) bg_vkb2_func_pane_g6

0xd27b,	// (0x00033555) bg_vkb2_func_pane_g7

0xd26b,	// (0x00033545) bg_vkb2_func_pane_g8

0x3c2e,	// (0x00029f08) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x00035e02) bg_vkb2_func_pane_g

0x9186,	// (0x0002f460) blid2_tripm_pane_g6_ParamLimits

0x9186,	// (0x0002f460) blid2_tripm_pane_g6

0xcf79,	// (0x00033253) mp4_progress_pane_g1

0x91f5,	// (0x0002f4cf) blid2_tripm_values_pane_ParamLimits

0x91f5,	// (0x0002f4cf) blid2_tripm_values_pane

0x92e4,	// (0x0002f5be) blid2_tripm_values_pane_t1

0x92f2,	// (0x0002f5cc) blid2_tripm_values_pane_t2

0x9300,	// (0x0002f5da) blid2_tripm_values_pane_t3

0x930e,	// (0x0002f5e8) blid2_tripm_values_pane_t4

0x931c,	// (0x0002f5f6) blid2_tripm_values_pane_t5

0x932a,	// (0x0002f604) blid2_tripm_values_pane_t6

0x9338,	// (0x0002f612) blid2_tripm_values_pane_t7

0x9346,	// (0x0002f620) blid2_tripm_values_pane_t8

0x9354,	// (0x0002f62e) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x00035e15) blid2_tripm_values_pane_t

0x3789,	// (0x00029a63) call_video_pane_t1_ParamLimits

0x37a3,	// (0x00029a7d) call_video_pane_t2_ParamLimits

0xf253,	// (0x0003552d) call_video_pane_t_ParamLimits

0x58e3,	// (0x0002bbbd) msg_header_pane_g1_ParamLimits

0x58ef,	// (0x0002bbc9) msg_header_pane_g2_ParamLimits

0x58ef,	// (0x0002bbc9) msg_header_pane_g2

0x0001,

0xf46d,	// (0x00035747) msg_header_pane_g_ParamLimits

0xf46d,	// (0x00035747) msg_header_pane_g

0x2af5,	// (0x00028dcf) main_clock2_pane_ParamLimits

0x7c44,	// (0x0002df1e) grid_clock2_toolbar_pane_ParamLimits

0x7c44,	// (0x0002df1e) grid_clock2_toolbar_pane

0x7c44,	// (0x0002df1e) listscroll_clock2_pane_ParamLimits

0x7c44,	// (0x0002df1e) listscroll_clock2_pane

0x7d27,	// (0x0002e001) main_clock2_pane_t3_ParamLimits

0x7d27,	// (0x0002e001) main_clock2_pane_t3

0x7d49,	// (0x0002e023) main_clock2_pane_t4_ParamLimits

0x7d49,	// (0x0002e023) main_clock2_pane_t4

0xd9f0,	// (0x00033cca) cell_clock2_toolbar_pane

0xd9f8,	// (0x00033cd2) cell_clock2_toolbar_pane_cp01

0xd9f8,	// (0x00033cd2) cell_clock2_toolbar_pane_cp02

0xda00,	// (0x00033cda) cell_clock2_toolbar_pane_cp03

0xda08,	// (0x00033ce2) list_clock2_pane

0xda10,	// (0x00033cea) scroll_pane_cp10

0xda18,	// (0x00033cf2) list_single_clock2_pane_ParamLimits

0xda18,	// (0x00033cf2) list_single_clock2_pane

0x322e,	// (0x00029508) list_highlight_pane_cp08

0xda25,	// (0x00033cff) list_single_clock2_pane_t1

0xda33,	// (0x00033d0d) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x00035e28) list_single_clock2_pane_t

0x2135,	// (0x0002840f) bg_button_pane_cp10

0xda41,	// (0x00033d1b) cell_clock2_toolbar_pane_g1

0x0fa1,	// (0x0002727b) aid_main_viewer_pane_g1_ParamLimits

0x0fa1,	// (0x0002727b) aid_main_viewer_pane_g1

0x0fad,	// (0x00027287) aid_main_viewer_pane_g2_ParamLimits

0x0fad,	// (0x00027287) aid_main_viewer_pane_g2

0x5976,	// (0x0002bc50) aid_main_viewer_pane_g3_ParamLimits

0x5976,	// (0x0002bc50) aid_main_viewer_pane_g3

0x5985,	// (0x0002bc5f) aid_main_viewer_pane_g4_ParamLimits

0x5985,	// (0x0002bc5f) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x00035758) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x00035758) aid_main_viewer_pane_g

0xb67d,	// (0x00031957) main_calc_pane_ParamLimits

0x0fe9,	// (0x000272c3) main_dialer2_pane_ParamLimits

0xb68b,	// (0x00031965) main_cam6_pane

0xb68b,	// (0x00031965) main_vid6_pane

0x7c50,	// (0x0002df2a) listscroll_gen_pane_cp06_ParamLimits

0x7c50,	// (0x0002df2a) listscroll_gen_pane_cp06

0x7d6a,	// (0x0002e044) main_clock2_pane_t5_ParamLimits

0x7d6a,	// (0x0002e044) main_clock2_pane_t5

0x7dc2,	// (0x0002e09c) aid_call2_pane_cp10_ParamLimits

0x7dd4,	// (0x0002e0ae) aid_call_pane_cp10_ParamLimits

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7de6,	// (0x0002e0c0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7de6,	// (0x0002e0c0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5102,	// (0x0002b3dc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x00035aa6) popup_clock_analogue_window_cp10_g_ParamLimits

0x7df8,	// (0x0002e0d2) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcfe3,	// (0x000332bd) cell_dialer2_keypad_pane_g2_ParamLimits

0xcfe3,	// (0x000332bd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x00035b90) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x00035b90) cell_dialer2_keypad_pane_g

0x8259,	// (0x0002e533) cell_dialer2_keypad_pane_t1

0x8620,	// (0x0002e8fa) main_cset_text2_pane_ParamLimits

0x8620,	// (0x0002e8fa) main_cset_text2_pane

0xd729,	// (0x00033a03) area_vitu2_query_pane_g1_ParamLimits

0x8dd0,	// (0x0002f0aa) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x00035d45) area_vitu2_query_pane_g_ParamLimits

0xd7ad,	// (0x00033a87) area_vitu2_query_pane_t7_ParamLimits

0xd7ad,	// (0x00033a87) area_vitu2_query_pane_t7

0x8e2b,	// (0x0002f105) bg_button_pane_cp018_ParamLimits

0x8e38,	// (0x0002f112) bg_button_pane_cp021_ParamLimits

0x8e44,	// (0x0002f11e) bg_button_pane_cp022_ParamLimits

0x8e44,	// (0x0002f11e) bg_vkb2_func_pane_cp08_ParamLimits

0x8e2b,	// (0x0002f105) bg_vkb2_func_pane_cp06_ParamLimits

0x8e38,	// (0x0002f112) bg_vkb2_func_pane_cp07_ParamLimits

0x8e53,	// (0x0002f12d) input_focus_pane_cp09_ParamLimits

0xda49,	// (0x00033d23) cam6_autofocus_pane_ParamLimits

0xda49,	// (0x00033d23) cam6_autofocus_pane

0x2055,	// (0x0002832f) cam6_image_uncrop_pane_ParamLimits

0x2055,	// (0x0002832f) cam6_image_uncrop_pane

0x2062,	// (0x0002833c) cam6_indi_pane_ParamLimits

0x2062,	// (0x0002833c) cam6_indi_pane

0x2078,	// (0x00028352) cam6_mode_pane_ParamLimits

0x2078,	// (0x00028352) cam6_mode_pane

0x208a,	// (0x00028364) cam6_timer_pane_ParamLimits

0x208a,	// (0x00028364) cam6_timer_pane

0x2096,	// (0x00028370) cam6_zoom_pane_ParamLimits

0x2096,	// (0x00028370) cam6_zoom_pane

0x9362,	// (0x0002f63c) cam6_mode_pane_g1_ParamLimits

0x9362,	// (0x0002f63c) cam6_mode_pane_g1

0x9372,	// (0x0002f64c) cam6_mode_pane_g2_ParamLimits

0x9372,	// (0x0002f64c) cam6_mode_pane_g2

0x9382,	// (0x0002f65c) cam6_mode_pane_g3_ParamLimits

0x9382,	// (0x0002f65c) cam6_mode_pane_g3

0x9392,	// (0x0002f66c) cam6_mode_pane_g4_ParamLimits

0x9392,	// (0x0002f66c) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x00035e2d) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x00035e2d) cam6_mode_pane_g

0xda55,	// (0x00033d2f) bg_tb_trans_pane_cp08_ParamLimits

0xda55,	// (0x00033d2f) bg_tb_trans_pane_cp08

0xda63,	// (0x00033d3d) cam6_battery_pane_ParamLimits

0xda63,	// (0x00033d3d) cam6_battery_pane

0xda79,	// (0x00033d53) cam6_indi_pane_g1_ParamLimits

0xda79,	// (0x00033d53) cam6_indi_pane_g1

0xda8b,	// (0x00033d65) cam6_indi_pane_g2_ParamLimits

0xda8b,	// (0x00033d65) cam6_indi_pane_g2

0xda9d,	// (0x00033d77) cam6_indi_pane_g3_ParamLimits

0xda9d,	// (0x00033d77) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x00035e36) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x00035e36) cam6_indi_pane_g

0xdaaf,	// (0x00033d89) cam6_indi_pane_t1_ParamLimits

0xdaaf,	// (0x00033d89) cam6_indi_pane_t1

0x8323,	// (0x0002e5fd) cam6_autofocus_pane_g1

0x831b,	// (0x0002e5f5) cam6_autofocus_pane_g2

0x8333,	// (0x0002e60d) cam6_autofocus_pane_g3

0x832b,	// (0x0002e605) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x00035e3d) cam6_autofocus_pane_g

0xdad5,	// (0x00033daf) cam6_timer_pane_g1

0xdadd,	// (0x00033db7) cam6_timer_pane_t1

0xdaeb,	// (0x00033dc5) cam6_zoom_cont_pane

0xdaf3,	// (0x00033dcd) cam6_zoom_pane_g1

0xdafb,	// (0x00033dd5) cam6_zoom_pane_g2

0x93a2,	// (0x0002f67c) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x00035e46) cam6_zoom_pane_g

0xc431,	// (0x0003270b) cam6_battery_pane_g1

0xc431,	// (0x0003270b) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x000359ae) cam6_battery_pane_g

0xdb03,	// (0x00033ddd) cam6_zoom_cont_pane_g1

0xdb0c,	// (0x00033de6) cam6_zoom_cont_pane_g2

0xdb15,	// (0x00033def) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x00035e4d) cam6_zoom_cont_pane_g

0x93bf,	// (0x0002f699) cam6_mode_pane_cp_ParamLimits

0x93bf,	// (0x0002f699) cam6_mode_pane_cp

0x93d1,	// (0x0002f6ab) cam6_zoom_pane_cp_ParamLimits

0x93d1,	// (0x0002f6ab) cam6_zoom_pane_cp

0x93dd,	// (0x0002f6b7) vid6_image_uncrop_cif_pane_ParamLimits

0x93dd,	// (0x0002f6b7) vid6_image_uncrop_cif_pane

0x93eb,	// (0x0002f6c5) vid6_image_uncrop_nhd_pane_ParamLimits

0x93eb,	// (0x0002f6c5) vid6_image_uncrop_nhd_pane

0x93f8,	// (0x0002f6d2) vid6_image_uncrop_vga_pane_ParamLimits

0x93f8,	// (0x0002f6d2) vid6_image_uncrop_vga_pane

0x9405,	// (0x0002f6df) vid6_image_uncrop_wvga_pane_ParamLimits

0x9405,	// (0x0002f6df) vid6_image_uncrop_wvga_pane

0x9412,	// (0x0002f6ec) vid6_indi_pane_ParamLimits

0x9412,	// (0x0002f6ec) vid6_indi_pane

0xda55,	// (0x00033d2f) bg_tb_trans_pane_cp09_ParamLimits

0xda55,	// (0x00033d2f) bg_tb_trans_pane_cp09

0xdb29,	// (0x00033e03) cam6_battery_pane_cp_ParamLimits

0xdb29,	// (0x00033e03) cam6_battery_pane_cp

0xdb35,	// (0x00033e0f) vid6_indi_pane_g1_ParamLimits

0xdb35,	// (0x00033e0f) vid6_indi_pane_g1

0xdb47,	// (0x00033e21) vid6_indi_pane_g2_ParamLimits

0xdb47,	// (0x00033e21) vid6_indi_pane_g2

0xdb59,	// (0x00033e33) vid6_indi_pane_g3_ParamLimits

0xdb59,	// (0x00033e33) vid6_indi_pane_g3

0xdb6e,	// (0x00033e48) vid6_indi_pane_g4_ParamLimits

0xdb6e,	// (0x00033e48) vid6_indi_pane_g4

0xdb83,	// (0x00033e5d) vid6_indi_pane_g5_ParamLimits

0xdb83,	// (0x00033e5d) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x00035e54) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00035e54) vid6_indi_pane_g

0xdb9d,	// (0x00033e77) vid6_indi_pane_t1_ParamLimits

0xdb9d,	// (0x00033e77) vid6_indi_pane_t1

0xdbb3,	// (0x00033e8d) vid6_indi_pane_t2_ParamLimits

0xdbb3,	// (0x00033e8d) vid6_indi_pane_t2

0xdbdb,	// (0x00033eb5) vid6_indi_pane_t3_ParamLimits

0xdbdb,	// (0x00033eb5) vid6_indi_pane_t3

0xdc03,	// (0x00033edd) vid6_indi_pane_t4_ParamLimits

0xdc03,	// (0x00033edd) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x00035e5f) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x00035e5f) vid6_indi_pane_t

0xdc27,	// (0x00033f01) wait_bar_pane_cp08

0x9429,	// (0x0002f703) main_cset_text2_pane_t1_ParamLimits

0x9429,	// (0x0002f703) main_cset_text2_pane_t1

0x93aa,	// (0x0002f684) listscroll_gen_pane_cp06_t1_ParamLimits

0x93aa,	// (0x0002f684) listscroll_gen_pane_cp06_t1

0xb68b,	// (0x00031965) main_cam6_set_pane

0xd10e,	// (0x000333e8) bg_tb_trans_pane_cp06_ParamLimits

0xd124,	// (0x000333fe) cam4_indicators_pane_g1_ParamLimits

0xd134,	// (0x0003340e) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x00035bcd) cam4_indicators_pane_g_ParamLimits

0xd154,	// (0x0003342e) cam4_indicators_pane_t1_ParamLimits

0xb67d,	// (0x00031957) bg_tb_trans_pane_cp07_ParamLimits

0xd124,	// (0x000333fe) vid4_indicators_pane_g1_ParamLimits

0xd176,	// (0x00033450) vid4_indicators_pane_g2_ParamLimits

0xd186,	// (0x00033460) vid4_indicators_pane_g3_ParamLimits

0xd197,	// (0x00033471) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x00035bdf) vid4_indicators_pane_g_ParamLimits

0xd1b3,	// (0x0003348d) vid4_indicators_pane_t1_ParamLimits

0xd82b,	// (0x00033b05) vid4_progress_pane_g1_ParamLimits

0xd83a,	// (0x00033b14) vid4_progress_pane_g2_ParamLimits

0xd849,	// (0x00033b23) vid4_progress_pane_g3_ParamLimits

0xd858,	// (0x00033b32) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x00035d90) vid4_progress_pane_g_ParamLimits

0xd870,	// (0x00033b4a) vid4_progress_pane_t1_ParamLimits

0xd886,	// (0x00033b60) vid4_progress_pane_t2_ParamLimits

0xd89b,	// (0x00033b75) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x00035d9b) vid4_progress_pane_t_ParamLimits

0xd8b0,	// (0x00033b8a) wait_bar_pane_cp07_ParamLimits

0x9444,	// (0x0002f71e) main_cam6_set_pane_g2_ParamLimits

0x9444,	// (0x0002f71e) main_cam6_set_pane_g2

0x9466,	// (0x0002f740) main_cset6_listscroll_pane_ParamLimits

0x9466,	// (0x0002f740) main_cset6_listscroll_pane

0x9480,	// (0x0002f75a) main_cset6_slider_pane_ParamLimits

0x9480,	// (0x0002f75a) main_cset6_slider_pane

0x9496,	// (0x0002f770) main_cset6_text2_pane_ParamLimits

0x9496,	// (0x0002f770) main_cset6_text2_pane

0xdc37,	// (0x00033f11) main_cset6_text_pane

0xd355,	// (0x0003362f) main_cset_list_pane_copy1_ParamLimits

0xd355,	// (0x0003362f) main_cset_list_pane_copy1

0xd365,	// (0x0003363f) scroll_pane_cp028_copy1

0x94a4,	// (0x0002f77e) cset_list_set_pane_copy1

0x94b6,	// (0x0002f790) aid_position_infowindow_above_copy1

0x94be,	// (0x0002f798) aid_position_infowindow_below_copy1

0x94c6,	// (0x0002f7a0) cset_list_set_pane_g1_copy1

0x94ce,	// (0x0002f7a8) cset_list_set_pane_g3_copy1_ParamLimits

0x94ce,	// (0x0002f7a8) cset_list_set_pane_g3_copy1

0x94dd,	// (0x0002f7b7) cset_list_set_pane_t1_copy1_ParamLimits

0x94dd,	// (0x0002f7b7) cset_list_set_pane_t1_copy1

0x6d36,	// (0x0002d010) list_highlight_pane_cp021_copy1_ParamLimits

0x6d36,	// (0x0002d010) list_highlight_pane_cp021_copy1

0xdc3f,	// (0x00033f19) cset6_slider_pane_ParamLimits

0xdc3f,	// (0x00033f19) cset6_slider_pane

0xdc6b,	// (0x00033f45) main_cset6_slider_pane_g1_ParamLimits

0xdc6b,	// (0x00033f45) main_cset6_slider_pane_g1

0x94f2,	// (0x0002f7cc) main_cset6_slider_pane_g2_ParamLimits

0x94f2,	// (0x0002f7cc) main_cset6_slider_pane_g2

0xd37a,	// (0x00033654) main_cset6_slider_pane_g3_ParamLimits

0xd37a,	// (0x00033654) main_cset6_slider_pane_g3

0x86e5,	// (0x0002e9bf) main_cset6_slider_pane_g4_ParamLimits

0x86e5,	// (0x0002e9bf) main_cset6_slider_pane_g4

0x872d,	// (0x0002ea07) main_cset6_slider_pane_g5_ParamLimits

0x872d,	// (0x0002ea07) main_cset6_slider_pane_g5

0xd37a,	// (0x00033654) main_cset6_slider_pane_g7_ParamLimits

0xd37a,	// (0x00033654) main_cset6_slider_pane_g7

0xd386,	// (0x00033660) main_cset6_slider_pane_g8_ParamLimits

0xd386,	// (0x00033660) main_cset6_slider_pane_g8

0x86cd,	// (0x0002e9a7) main_cset6_slider_pane_g9_ParamLimits

0x86cd,	// (0x0002e9a7) main_cset6_slider_pane_g9

0x86d9,	// (0x0002e9b3) main_cset6_slider_pane_g10_ParamLimits

0x86d9,	// (0x0002e9b3) main_cset6_slider_pane_g10

0x86e5,	// (0x0002e9bf) main_cset6_slider_pane_g11_ParamLimits

0x86e5,	// (0x0002e9bf) main_cset6_slider_pane_g11

0x86f1,	// (0x0002e9cb) main_cset6_slider_pane_g12_ParamLimits

0x86f1,	// (0x0002e9cb) main_cset6_slider_pane_g12

0x86fd,	// (0x0002e9d7) main_cset6_slider_pane_g13_ParamLimits

0x86fd,	// (0x0002e9d7) main_cset6_slider_pane_g13

0x8709,	// (0x0002e9e3) main_cset6_slider_pane_g14_ParamLimits

0x8709,	// (0x0002e9e3) main_cset6_slider_pane_g14

0x951a,	// (0x0002f7f4) main_cset6_slider_pane_g15_ParamLimits

0x951a,	// (0x0002f7f4) main_cset6_slider_pane_g15

0x872d,	// (0x0002ea07) main_cset6_slider_pane_g16_ParamLimits

0x872d,	// (0x0002ea07) main_cset6_slider_pane_g16

0x8739,	// (0x0002ea13) main_cset6_slider_pane_g17_ParamLimits

0x8739,	// (0x0002ea13) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x00035e68) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x00035e68) main_cset6_slider_pane_g

0xdc93,	// (0x00033f6d) main_cset6_slider_pane_t1_ParamLimits

0xdc93,	// (0x00033f6d) main_cset6_slider_pane_t1

0xdcd4,	// (0x00033fae) main_cset6_slider_pane_t2_ParamLimits

0xdcd4,	// (0x00033fae) main_cset6_slider_pane_t2

0xdcff,	// (0x00033fd9) main_cset6_slider_pane_t3_ParamLimits

0xdcff,	// (0x00033fd9) main_cset6_slider_pane_t3

0x9532,	// (0x0002f80c) main_cset6_slider_pane_t4_ParamLimits

0x9532,	// (0x0002f80c) main_cset6_slider_pane_t4

0x955d,	// (0x0002f837) main_cset6_slider_pane_t5_ParamLimits

0x955d,	// (0x0002f837) main_cset6_slider_pane_t5

0xdd2a,	// (0x00034004) main_cset6_slider_pane_t7_ParamLimits

0xdd2a,	// (0x00034004) main_cset6_slider_pane_t7

0x9588,	// (0x0002f862) main_cset6_slider_pane_t8_ParamLimits

0x9588,	// (0x0002f862) main_cset6_slider_pane_t8

0x95ac,	// (0x0002f886) main_cset6_slider_pane_t9_ParamLimits

0x95ac,	// (0x0002f886) main_cset6_slider_pane_t9

0x95d0,	// (0x0002f8aa) main_cset6_slider_pane_t10_ParamLimits

0x95d0,	// (0x0002f8aa) main_cset6_slider_pane_t10

0x95f4,	// (0x0002f8ce) main_cset6_slider_pane_t11_ParamLimits

0x95f4,	// (0x0002f8ce) main_cset6_slider_pane_t11

0xdd60,	// (0x0003403a) main_cset6_slider_pane_t14_ParamLimits

0xdd60,	// (0x0003403a) main_cset6_slider_pane_t14

0xdd99,	// (0x00034073) main_cset6_slider_pane_t15_ParamLimits

0xdd99,	// (0x00034073) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x00035e8d) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x00035e8d) main_cset6_slider_pane_t

0xddd2,	// (0x000340ac) cset_slider_pane_g1_copy1

0xdddb,	// (0x000340b5) cset_slider_pane_g2_copy1

0xdde4,	// (0x000340be) cset_slider_pane_g3_copy1

0x2135,	// (0x0002840f) bg_popup_sub_pane_cp011_copy1

0xd55b,	// (0x00033835) main_cset_text_pane_g1_copy1

0xd563,	// (0x0003383d) main_cset_text_pane_t1_copy1

0xd571,	// (0x0003384b) main_cset_text_pane_t2_copy1

0xd57f,	// (0x00033859) main_cset_text_pane_t3_copy1

0xd58d,	// (0x00033867) main_cset_text_pane_t4_copy1

0xd59b,	// (0x00033875) main_cset_text_pane_t5_copy1

0xd5a9,	// (0x00033883) main_cset_text_pane_t6_copy1

0xd5b7,	// (0x00033891) main_cset_text_pane_t7_copy1

0x96e9,	// (0x0002f9c3) main_cset_text2_pane_t1_copy1

0xb67d,	// (0x00031957) main_ncimui_pane

0x11f7,	// (0x000274d1) popup_query_ncimui_window_ParamLimits

0x11f7,	// (0x000274d1) popup_query_ncimui_window

0xc701,	// (0x000329db) field_cale_ev2_pane_g4_ParamLimits

0xc701,	// (0x000329db) field_cale_ev2_pane_g4

0x81e2,	// (0x0002e4bc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x81e2,	// (0x0002e4bc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x00035b67) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x00035b67) cell_video_dialer_keypad_pane_g

0x81fa,	// (0x0002e4d4) cell_video_dialer_keypad_pane_t1

0x2135,	// (0x0002840f) bg_popup_window_pane_cp012

0x4d75,	// (0x0002b04f) heading_pane_cp06

0xde17,	// (0x000340f1) ncim_query_content_pane

0x2135,	// (0x0002840f) bg_popup_heading_pane_cp01

0xde1f,	// (0x000340f9) ncim_heading_pane_t1

0xde2d,	// (0x00034107) ncim_indicator_popup_pane

0xde3f,	// (0x00034119) ncim_query_button_pane

0xde53,	// (0x0003412d) ncim_query_content_pane_t1

0xde65,	// (0x0003413f) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x00035ed1) ncim_query_content_pane_t

0xde9f,	// (0x00034179) ncim_query_list_pane

0xdeb1,	// (0x0003418b) ncim_query_popup_pane

0xde2d,	// (0x00034107) ncim_indicator_popup_pane_ParamLimits

0x9828,	// (0x0002fb02) ncim_query_content_pane_g1_ParamLimits

0x9828,	// (0x0002fb02) ncim_query_content_pane_g1

0xde53,	// (0x0003412d) ncim_query_content_pane_t1_ParamLimits

0xde65,	// (0x0003413f) ncim_query_content_pane_t2_ParamLimits

0x9834,	// (0x0002fb0e) ncim_query_content_pane_t3_ParamLimits

0x9834,	// (0x0002fb0e) ncim_query_content_pane_t3

0x985c,	// (0x0002fb36) ncim_query_content_pane_t4_ParamLimits

0x985c,	// (0x0002fb36) ncim_query_content_pane_t4

0x9884,	// (0x0002fb5e) ncim_query_content_pane_t5_ParamLimits

0x9884,	// (0x0002fb5e) ncim_query_content_pane_t5

0xde77,	// (0x00034151) ncim_query_content_pane_t6_ParamLimits

0xde77,	// (0x00034151) ncim_query_content_pane_t6

0xfbf7,	// (0x00035ed1) ncim_query_content_pane_t_ParamLimits

0xde9f,	// (0x00034179) ncim_query_list_pane_ParamLimits

0xdeb1,	// (0x0003418b) ncim_query_popup_pane_ParamLimits

0xdec5,	// (0x0003419f) wait_bar_pane_cp04

0x2135,	// (0x0002840f) input_focus_pane_cp011

0xdecd,	// (0x000341a7) ncim_query_popup_pane_t1

0xdedb,	// (0x000341b5) ncim_list_query_list_pane_ParamLimits

0xdedb,	// (0x000341b5) ncim_list_query_list_pane

0x2135,	// (0x0002840f) bg_button_pane_cp027

0xdeee,	// (0x000341c8) ncim_query_button_pane_g1

0x2135,	// (0x0002840f) list_highlight_pane_cp012

0xdef8,	// (0x000341d2) ncim_list_query_list_pane_g1

0xdf00,	// (0x000341da) ncim_list_query_list_pane_t1

0xd144,	// (0x0003341e) cam4_indicators_pane_g3_ParamLimits

0xd144,	// (0x0003341e) cam4_indicators_pane_g3

0xd1a3,	// (0x0003347d) vid4_indicators_pane_g5_ParamLimits

0xd1a3,	// (0x0003347d) vid4_indicators_pane_g5

0xd864,	// (0x00033b3e) vid4_progress_pane_g5_ParamLimits

0xd864,	// (0x00033b3e) vid4_progress_pane_g5

0x9718,	// (0x0002f9f2) main_ncimui_pane_g1

0x977e,	// (0x0002fa58) ncimui_group_query_pane_ParamLimits

0x977e,	// (0x0002fa58) ncimui_group_query_pane

0x97c6,	// (0x0002faa0) ncimui_list_pane_ParamLimits

0x97c6,	// (0x0002faa0) ncimui_list_pane

0x97eb,	// (0x0002fac5) ncimui_text_pane_ParamLimits

0x97eb,	// (0x0002fac5) ncimui_text_pane

0x98ac,	// (0x0002fb86) ncimui_text_pane_t1_ParamLimits

0x98ac,	// (0x0002fb86) ncimui_text_pane_t1

0xdf17,	// (0x000341f1) ncimui_list_single_graphic_pane_ParamLimits

0xdf17,	// (0x000341f1) ncimui_list_single_graphic_pane

0x98ca,	// (0x0002fba4) ncimui_query_pane_ParamLimits

0x98ca,	// (0x0002fba4) ncimui_query_pane

0x2135,	// (0x0002840f) list_highlight_pane_cp013

0xdf27,	// (0x00034201) ncim_list_query_list_pane_t1_copy1

0xdf35,	// (0x0003420f) ncim_list_single_graphic_pane_g1

0xdf3d,	// (0x00034217) ncim_query_button_pane_cp01

0xdf49,	// (0x00034223) ncim_query_entry_pane_ParamLimits

0xdf49,	// (0x00034223) ncim_query_entry_pane

0xdf5c,	// (0x00034236) ncimui_query_pane_g1

0xdf68,	// (0x00034242) ncimui_query_pane_t1_ParamLimits

0xdf68,	// (0x00034242) ncimui_query_pane_t1

0x6d36,	// (0x0002d010) input_focus_pane_cp012

0xdf81,	// (0x0003425b) ncim_query_entry_pane_t1

0x2af5,	// (0x00028dcf) main_im_pane_ParamLimits

0xb67d,	// (0x00031957) main_mobtv_pane_ParamLimits

0xb67d,	// (0x00031957) main_mobtv_pane

0x86cd,	// (0x0002e9a7) main_cset6_slider_pane_g18_ParamLimits

0x86cd,	// (0x0002e9a7) main_cset6_slider_pane_g18

0x86fd,	// (0x0002e9d7) main_cset6_slider_pane_g19_ParamLimits

0x86fd,	// (0x0002e9d7) main_cset6_slider_pane_g19

0xdf93,	// (0x0003426d) bg_main_mobtv_pane_ParamLimits

0xdf93,	// (0x0003426d) bg_main_mobtv_pane

0x98da,	// (0x0002fbb4) main_mobtv_info_pane

0x98e3,	// (0x0002fbbd) main_mobtv_loading_pane_ParamLimits

0x98e3,	// (0x0002fbbd) main_mobtv_loading_pane

0xdfa1,	// (0x0003427b) main_mobtv_pg_channel_list_pane

0xdfab,	// (0x00034285) main_mobtv_pg_hdr_pane

0x98f0,	// (0x0002fbca) main_mobtv_programe_curr_pane_ParamLimits

0x98f0,	// (0x0002fbca) main_mobtv_programe_curr_pane

0x98fd,	// (0x0002fbd7) main_mobtv_programe_next_pane_ParamLimits

0x98fd,	// (0x0002fbd7) main_mobtv_programe_next_pane

0xdfb4,	// (0x0003428e) popup_mobtv_noti_window

0xc431,	// (0x0003270b) main_tv_pg_hdr_pane_g1

0xdfbc,	// (0x00034296) main_tv_pg_hdr_pane_g2

0xdfc4,	// (0x0003429e) main_tv_pg_hdr_pane_g3

0xdfcc,	// (0x000342a6) main_tv_pg_hdr_pane_g4

0xdfd4,	// (0x000342ae) main_tv_pg_hdr_pane_g5

0xdfdc,	// (0x000342b6) main_tv_pg_hdr_pane_g6

0xdfe4,	// (0x000342be) main_tv_pg_hdr_pane_g7

0xdfec,	// (0x000342c6) main_tv_pg_hdr_pane_g8

0xdff4,	// (0x000342ce) main_tv_pg_hdr_pane_g9

0xdffc,	// (0x000342d6) main_tv_pg_hdr_pane_g10

0xe006,	// (0x000342e0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x00035ede) main_tv_pg_hdr_pane_g

0xe010,	// (0x000342ea) main_tv_pg_hdr_pane_t1

0xe01e,	// (0x000342f8) main_tv_pg_hdr_pane_t2

0xe02c,	// (0x00034306) main_tv_pg_hdr_pane_t3

0xe03a,	// (0x00034314) main_tv_pg_hdr_pane_t4

0xe048,	// (0x00034322) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x00035ef5) main_tv_pg_hdr_pane_t

0xe056,	// (0x00034330) single_mobtv_pg_channel_pane_ParamLimits

0xe056,	// (0x00034330) single_mobtv_pg_channel_pane

0xe068,	// (0x00034342) single_mobtv_pg_channel_table_pane

0xe071,	// (0x0003434b) single_mobtv_pg_channel_thumb_pane

0xe07a,	// (0x00034354) single_tv_pg_channel_pane_g1

0xe083,	// (0x0003435d) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x00035f00) single_tv_pg_channel_pane_g

0xc660,	// (0x0003293a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc660,	// (0x0003293a) bg_single_mobtv_pg_channel_thumb_pane

0xe08c,	// (0x00034366) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe08c,	// (0x00034366) single_mobtv_pg_channel_thumb_pane_g1

0xe09a,	// (0x00034374) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe09a,	// (0x00034374) single_mobtv_pg_channel_thumb_pane_g2

0xe0a6,	// (0x00034380) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe0a6,	// (0x00034380) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x00035f05) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x00035f05) single_mobtv_pg_channel_thumb_pane_g

0xe0b2,	// (0x0003438c) single_mobtv_pg_channel_thumb_pane_t1

0xe0c0,	// (0x0003439a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x00035f0c) single_mobtv_pg_channel_thumb_pane_t

0xc431,	// (0x0003270b) bg_single_mobtv_pg_channel_table_pane_g1

0xc431,	// (0x0003270b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x000359ae) bg_single_mobtv_pg_channel_table_pane_g

0xe0ce,	// (0x000343a8) single_mobtv_pg_channel_table_pane_t1

0xe0dc,	// (0x000343b6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x00035f11) single_mobtv_pg_channel_table_pane_t

0x9912,	// (0x0002fbec) main_mobtv_info_pane_g1_ParamLimits

0x9912,	// (0x0002fbec) main_mobtv_info_pane_g1

0x992e,	// (0x0002fc08) main_mobtv_info_pane_t1_ParamLimits

0x992e,	// (0x0002fc08) main_mobtv_info_pane_t1

0x9994,	// (0x0002fc6e) main_mobtv_info_pane_t2_ParamLimits

0x9994,	// (0x0002fc6e) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x00035f1b) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x00035f1b) main_mobtv_info_pane_t

0x9a17,	// (0x0002fcf1) wait_bar_pane_cp05

0x9a27,	// (0x0002fd01) main_mobtv_loading_pane_g1_ParamLimits

0x9a27,	// (0x0002fd01) main_mobtv_loading_pane_g1

0x9a38,	// (0x0002fd12) main_mobtv_loading_pane_g2_ParamLimits

0x9a38,	// (0x0002fd12) main_mobtv_loading_pane_g2

0x9a44,	// (0x0002fd1e) main_mobtv_loading_pane_g3_ParamLimits

0x9a44,	// (0x0002fd1e) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x00035f22) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x00035f22) main_mobtv_loading_pane_g

0xe0ea,	// (0x000343c4) main_mobtv_loading_pane_t1_ParamLimits

0xe0ea,	// (0x000343c4) main_mobtv_loading_pane_t1

0xe102,	// (0x000343dc) main_mobtv_loading_pane_t2_ParamLimits

0xe102,	// (0x000343dc) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x00035f29) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x00035f29) main_mobtv_loading_pane_t

0x9a55,	// (0x0002fd2f) wait_bar_pane_cp06_ParamLimits

0x9a55,	// (0x0002fd2f) wait_bar_pane_cp06

0xe126,	// (0x00034400) main_mobtv_programe_curr_pane_t1

0xe134,	// (0x0003440e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x00035f2e) main_mobtv_programe_curr_pane_t

0xe142,	// (0x0003441c) main_mobtv_programe_next_pane_t1

0xe150,	// (0x0003442a) main_mobtv_programe_next_pane_t2

0xe15e,	// (0x00034438) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x00035f33) main_mobtv_programe_next_pane_t

0x2135,	// (0x0002840f) bg_popup_mobtv_noti_window_pane

0xe16c,	// (0x00034446) popup_mobtv_noti_window_g1

0xe174,	// (0x0003444e) popup_mobtv_noti_window_t1

0xe182,	// (0x0003445c) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x00035f3a) popup_mobtv_noti_window_t

0xc431,	// (0x0003270b) bg_popup_mobtv_noti_window_pane_g1

0xb68b,	// (0x00031965) sc_clock_pane

0xb68b,	// (0x00031965) main_fs_bigclock_pane

0x91df,	// (0x0002f4b9) blid2_tripm_pane_t4_ParamLimits

0x91df,	// (0x0002f4b9) blid2_tripm_pane_t4

0x9a64,	// (0x0002fd3e) sc_clock_pane_g1_ParamLimits

0x9a64,	// (0x0002fd3e) sc_clock_pane_g1

0x9a76,	// (0x0002fd50) sc_clock_pane_t1_ParamLimits

0x9a76,	// (0x0002fd50) sc_clock_pane_t1

0x9a98,	// (0x0002fd72) sc_clock_pane_t2_ParamLimits

0x9a98,	// (0x0002fd72) sc_clock_pane_t2

0x9aae,	// (0x0002fd88) sc_clock_pane_t3_ParamLimits

0x9aae,	// (0x0002fd88) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x00035f3f) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x00035f3f) sc_clock_pane_t

0xab71,	// (0x00030e4b) main_fs_bigclock_indicator_pane_ParamLimits

0xab71,	// (0x00030e4b) main_fs_bigclock_indicator_pane

0x9b4a,	// (0x0002fe24) main_fs_bigclock_pane_g1_ParamLimits

0x9b4a,	// (0x0002fe24) main_fs_bigclock_pane_g1

0xab7d,	// (0x00030e57) main_fs_bigclock_pane_t1_ParamLimits

0xab7d,	// (0x00030e57) main_fs_bigclock_pane_t1

0xab8f,	// (0x00030e69) main_fs_bigclock_pane_t2_ParamLimits

0xab8f,	// (0x00030e69) main_fs_bigclock_pane_t2

0xaba1,	// (0x00030e7b) main_fs_bigclock_pane_t3_ParamLimits

0xaba1,	// (0x00030e7b) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x00036148) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x00036148) main_fs_bigclock_pane_t

0xec05,	// (0x00034edf) main_fs_bigclock_indicator_pane_g1

0xde47,	// (0x00034121) ncim_query_content_pane_g2_ParamLimits

0xde47,	// (0x00034121) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x00035ecc) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x00035ecc) ncim_query_content_pane_g

0x9ac5,	// (0x0002fd9f) sc_clock_pane_t4_ParamLimits

0x9ac5,	// (0x0002fd9f) sc_clock_pane_t4

0xb67d,	// (0x00031957) main_radioblah_pane

0xd06c,	// (0x00033346) cell_call4_button_pane_t1_copy1_ParamLimits

0xd06c,	// (0x00033346) cell_call4_button_pane_t1_copy1

0x9730,	// (0x0002fa0a) main_ncimui_pane_t1_ParamLimits

0x9730,	// (0x0002fa0a) main_ncimui_pane_t1

0x974a,	// (0x0002fa24) main_ncimui_pane_t2_ParamLimits

0x974a,	// (0x0002fa24) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x00035ec5) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x00035ec5) main_ncimui_pane_t

0xe2c3,	// (0x0003459d) main_radioblah_anim_pane_ParamLimits

0xe2c3,	// (0x0003459d) main_radioblah_anim_pane

0xe2d4,	// (0x000345ae) main_radioblah_info_pane_ParamLimits

0xe2d4,	// (0x000345ae) main_radioblah_info_pane

0xe2e8,	// (0x000345c2) main_radioblah_pane_t1_ParamLimits

0xe2e8,	// (0x000345c2) main_radioblah_pane_t1

0xe304,	// (0x000345de) main_radioblah_pane_t2_ParamLimits

0xe304,	// (0x000345de) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x00035f60) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x00035f60) main_radioblah_pane_t

0x9b94,	// (0x0002fe6e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9b94,	// (0x0002fe6e) main_radioblah_rocker_ctrl_pane

0xe34c,	// (0x00034626) main_radioblah_info_pane_t1_ParamLimits

0xe34c,	// (0x00034626) main_radioblah_info_pane_t1

0x9be8,	// (0x0002fec2) main_radioblah_info_pane_t2_ParamLimits

0x9be8,	// (0x0002fec2) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x00035f69) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x00035f69) main_radioblah_info_pane_t

0xc431,	// (0x0003270b) main_radioblah_rocker_ctrl_pane_g1

0x9c96,	// (0x0002ff70) main_radioblah_rocker_ctrl_pane_g2

0x9c9e,	// (0x0002ff78) main_radioblah_rocker_ctrl_pane_g3

0x9ca6,	// (0x0002ff80) main_radioblah_rocker_ctrl_pane_g4

0x9cae,	// (0x0002ff88) main_radioblah_rocker_ctrl_pane_g5

0x9cb6,	// (0x0002ff90) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x00035f72) main_radioblah_rocker_ctrl_pane_g

0x96e9,	// (0x0002f9c3) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0f4,	// (0x000333ce) cam4_image_uncrop_qvga_pane

0xd16e,	// (0x00033448) vid4_image_uncrop_qcif_pane

0xda49,	// (0x00033d23) cam6_image_uncrop_qvga_pane_ParamLimits

0xda49,	// (0x00033d23) cam6_image_uncrop_qvga_pane

0xdb1d,	// (0x00033df7) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb1d,	// (0x00033df7) vid6_image_uncrop_qcif_pane

0x2135,	// (0x0002840f) bg_popup_preview_window_pane_cp03

0xdded,	// (0x000340c7) list_cset_text2_pane

0xddf5,	// (0x000340cf) main_cset6_text2_pane_g1

0xddfd,	// (0x000340d7) main_cset6_text2_pane_t1

0x9cbe,	// (0x0002ff98) list_cset_text2_pane_t1_ParamLimits

0x9cbe,	// (0x0002ff98) list_cset_text2_pane_t1

0xb67d,	// (0x00031957) main_radioblah_pane_ParamLimits

0x9a05,	// (0x0002fcdf) main_mobtv_info_pane_t3_ParamLimits

0x9a05,	// (0x0002fcdf) main_mobtv_info_pane_t3

0x9b82,	// (0x0002fe5c) main_radioblah_pane_g1

0x9bbc,	// (0x0002fe96) main_radioblah_info_pane_g1

0x9c3b,	// (0x0002ff15) main_radioblah_info_pane_t3_ParamLimits

0x9c3b,	// (0x0002ff15) main_radioblah_info_pane_t3

0x4726,	// (0x0002aa00) highlight_cell_cale_month_pane_ParamLimits

0x4726,	// (0x0002aa00) highlight_cell_cale_month_pane

0xb68b,	// (0x00031965) main_phob_fisheye_pane

0xc7b0,	// (0x00032a8a) scroll_pane_cp0031_ParamLimits

0xc7b0,	// (0x00032a8a) scroll_pane_cp0031

0xdc27,	// (0x00033f01) wait_bar_pane_cp08_ParamLimits

0x94a4,	// (0x0002f77e) cset_list_set_pane_copy1_ParamLimits

0xe386,	// (0x00034660) highlight_cell_cale_month_pane_g1

0x9cd7,	// (0x0002ffb1) highlight_cell_cale_month_pane_t1

0xe38e,	// (0x00034668) list_gen_pane_cp01

0xd365,	// (0x0003363f) scroll_pane_01

0x9ce5,	// (0x0002ffbf) list_single_double_fisheye_pane

0x9cee,	// (0x0002ffc8) list_double_fisheye_pane_g1_ParamLimits

0x9cee,	// (0x0002ffc8) list_double_fisheye_pane_g1

0x9cfa,	// (0x0002ffd4) list_double_fisheye_pane_g2_ParamLimits

0x9cfa,	// (0x0002ffd4) list_double_fisheye_pane_g2

0x9d06,	// (0x0002ffe0) list_double_fisheye_pane_g3_ParamLimits

0x9d06,	// (0x0002ffe0) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x00035f7f) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x00035f7f) list_double_fisheye_pane_g

0x9d2a,	// (0x00030004) list_double_fisheye_pane_t1_ParamLimits

0x9d2a,	// (0x00030004) list_double_fisheye_pane_t1

0x9d45,	// (0x0003001f) list_double_fisheye_pane_t2_ParamLimits

0x9d45,	// (0x0003001f) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x00035f8a) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x00035f8a) list_double_fisheye_pane_t

0xb68b,	// (0x00031965) main_call5_pane

0x9aee,	// (0x0002fdc8) sc_swipe_pane_ParamLimits

0x9aee,	// (0x0002fdc8) sc_swipe_pane

0x9d78,	// (0x00030052) call5_image_pane_ParamLimits

0x9d78,	// (0x00030052) call5_image_pane

0x9d8d,	// (0x00030067) call5_swipe_1_pane_ParamLimits

0x9d8d,	// (0x00030067) call5_swipe_1_pane

0x9d9e,	// (0x00030078) call5_swipe_2_pane_ParamLimits

0x9d9e,	// (0x00030078) call5_swipe_2_pane

0x9dc3,	// (0x0003009d) popup_call5_audio_first_window_ParamLimits

0x9dc3,	// (0x0003009d) popup_call5_audio_first_window

0xc660,	// (0x0003293a) call5_swipe_1_pane_g1_ParamLimits

0xc660,	// (0x0003293a) call5_swipe_1_pane_g1

0xe397,	// (0x00034671) call5_swipe_1_pane_g2_ParamLimits

0xe397,	// (0x00034671) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x00035f8f) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x00035f8f) call5_swipe_1_pane_g

0xe3a3,	// (0x0003467d) call5_swipe_1_pane_t1_ParamLimits

0xe3a3,	// (0x0003467d) call5_swipe_1_pane_t1

0xc660,	// (0x0003293a) call5_swipe_2_pane_g1_ParamLimits

0xc660,	// (0x0003293a) call5_swipe_2_pane_g1

0xe3b8,	// (0x00034692) call5_swipe_2_pane_g2_ParamLimits

0xe3b8,	// (0x00034692) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x00035f94) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x00035f94) call5_swipe_2_pane_g

0xe3c4,	// (0x0003469e) call5_swipe_2_pane_t1_ParamLimits

0xe3c4,	// (0x0003469e) call5_swipe_2_pane_t1

0xe3d9,	// (0x000346b3) sc_swipe_pane_g1_ParamLimits

0xe3d9,	// (0x000346b3) sc_swipe_pane_g1

0xe3e6,	// (0x000346c0) sc_swipe_pane_g2_ParamLimits

0xe3e6,	// (0x000346c0) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x00035f99) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x00035f99) sc_swipe_pane_g

0xe3f2,	// (0x000346cc) sc_swipe_pane_t1_ParamLimits

0xe3f2,	// (0x000346cc) sc_swipe_pane_t1

0xb68b,	// (0x00031965) main_cmail_launcher_pane

0x9dd2,	// (0x000300ac) aid_size_cell_cmail_l_ParamLimits

0x9dd2,	// (0x000300ac) aid_size_cell_cmail_l

0x9deb,	// (0x000300c5) grid_cmail_l_pane_ParamLimits

0x9deb,	// (0x000300c5) grid_cmail_l_pane

0x9e00,	// (0x000300da) cell_cmail_l_pane_ParamLimits

0x9e00,	// (0x000300da) cell_cmail_l_pane

0x9e22,	// (0x000300fc) cell_cmail_l_pane_g1_ParamLimits

0x9e22,	// (0x000300fc) cell_cmail_l_pane_g1

0x9e32,	// (0x0003010c) cell_cmail_l_pane_t1_ParamLimits

0x9e32,	// (0x0003010c) cell_cmail_l_pane_t1

0x9e48,	// (0x00030122) cell_cmail_l_pane_t2_ParamLimits

0x9e48,	// (0x00030122) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x00035f9e) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x00035f9e) cell_cmail_l_pane_t

0x6d36,	// (0x0002d010) grid_highlight_pane_cp018_ParamLimits

0x6d36,	// (0x0002d010) grid_highlight_pane_cp018

0x0b4f,	// (0x00026e29) main2_pane_ParamLimits

0x0b4f,	// (0x00026e29) main2_pane

0x2c6b,	// (0x00028f45) popup_sp_fs_action_menu_bg_pane_g1

0x2c73,	// (0x00028f4d) popup_sp_fs_action_menu_bg_pane_g2

0x2c7b,	// (0x00028f55) popup_sp_fs_action_menu_bg_pane_g3

0x2c83,	// (0x00028f5d) popup_sp_fs_action_menu_bg_pane_g4

0x2c8b,	// (0x00028f65) popup_sp_fs_action_menu_bg_pane_g5

0x2c93,	// (0x00028f6d) popup_sp_fs_action_menu_bg_pane_g6

0x2c9b,	// (0x00028f75) popup_sp_fs_action_menu_bg_pane_g7

0x2ca3,	// (0x00028f7d) popup_sp_fs_action_menu_bg_pane_g8

0x2cab,	// (0x00028f85) popup_sp_fs_action_menu_bg_pane_g9

0x2cb3,	// (0x00028f8d) popup_sp_fs_action_menu_bg_pane_g10

0x2cb3,	// (0x00028f8d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x00035449) popup_sp_fs_action_menu_bg_pane_g

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g3_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g3_g1

0x35cb,	// (0x000298a5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_t3_g3_g2

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000354f7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000354f7) list_medium_line_x2_t3_g3_g

0x35e3,	// (0x000298bd) list_medium_line_x2_t3_g3_t1_ParamLimits

0x35e3,	// (0x000298bd) list_medium_line_x2_t3_g3_t1

0x35f8,	// (0x000298d2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x35f8,	// (0x000298d2) list_medium_line_x2_t3_g3_t2

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000354fe) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000354fe) list_medium_line_x2_t3_g3_t

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g2_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g2_g1

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x00035505) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x00035505) list_medium_line_x2_t3_g2_g

0x361f,	// (0x000298f9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x361f,	// (0x000298f9) list_medium_line_x2_t3_g2_t1

0x3635,	// (0x0002990f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3635,	// (0x0002990f) list_medium_line_x2_t3_g2_t2

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0003550a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0003550a) list_medium_line_x2_t3_g2_t

0x35bf,	// (0x00029899) list_medium_line_x2_t4_g4_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t4_g4_g1

0x3647,	// (0x00029921) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3647,	// (0x00029921) list_medium_line_x2_t4_g4_g2

0x35cb,	// (0x000298a5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_t4_g4_g3

0x3653,	// (0x0002992d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3653,	// (0x0002992d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x00035511) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x00035511) list_medium_line_x2_t4_g4_g

0x365f,	// (0x00029939) list_medium_line_x2_t4_g4_t1_ParamLimits

0x365f,	// (0x00029939) list_medium_line_x2_t4_g4_t1

0x3676,	// (0x00029950) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3676,	// (0x00029950) list_medium_line_x2_t4_g4_t2

0x368b,	// (0x00029965) list_medium_line_x2_t4_g4_t3_ParamLimits

0x368b,	// (0x00029965) list_medium_line_x2_t4_g4_t3

0x369d,	// (0x00029977) list_medium_line_x2_t4_g4_t4_ParamLimits

0x369d,	// (0x00029977) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0003551a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0003551a) list_medium_line_x2_t4_g4_t

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g4_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g4_g1

0x3647,	// (0x00029921) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3647,	// (0x00029921) list_medium_line_x2_t2_g4_g2

0x35cb,	// (0x000298a5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_t2_g4_g3

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x00035581) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x00035581) list_medium_line_x2_t2_g4_g

0x474c,	// (0x0002aa26) list_medium_line_x2_t2_g4_t1_ParamLimits

0x474c,	// (0x0002aa26) list_medium_line_x2_t2_g4_t1

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0003558a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0003558a) list_medium_line_x2_t2_g4_t

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g3_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g3_g1

0x35cb,	// (0x000298a5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_t2_g3_g2

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000354f7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000354f7) list_medium_line_x2_t2_g3_g

0x4761,	// (0x0002aa3b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4761,	// (0x0002aa3b) list_medium_line_x2_t2_g3_t1

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0003558f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0003558f) list_medium_line_x2_t2_g3_t

0x4aab,	// (0x0002ad85) main_sp_fs_list_pane_ParamLimits

0x4aab,	// (0x0002ad85) main_sp_fs_list_pane

0x4ab8,	// (0x0002ad92) sp_fs_scroll_pane_ParamLimits

0x4ab8,	// (0x0002ad92) sp_fs_scroll_pane

0x4ac5,	// (0x0002ad9f) list_medium_line_x2_t3_t1

0x4ad5,	// (0x0002adaf) list_medium_line_x2_t3_t2

0x4ae3,	// (0x0002adbd) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000355da) list_medium_line_x2_t3_t

0x4af1,	// (0x0002adcb) list_medium_line_x3_t4_t1

0x4b01,	// (0x0002addb) list_medium_line_x3_t4_t2

0x4b0f,	// (0x0002ade9) list_medium_line_x3_t4_t3

0x4b1d,	// (0x0002adf7) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000355e1) list_medium_line_x3_t4_t

0x4b2b,	// (0x0002ae05) list_medium_line_x4_t5_t1

0x4b3b,	// (0x0002ae15) list_medium_line_x4_t5_t2

0x4b0f,	// (0x0002ade9) list_medium_line_x4_t5_t3

0x4b49,	// (0x0002ae23) list_medium_line_x4_t5_t4

0x4b1d,	// (0x0002adf7) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000355ea) list_medium_line_x4_t5_t

0x35bf,	// (0x00029899) list_medium_line_t4_g4_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_t4_g4_g1

0x3653,	// (0x0002992d) list_medium_line_t4_g4_g2_ParamLimits

0x3653,	// (0x0002992d) list_medium_line_t4_g4_g2

0x4b57,	// (0x0002ae31) list_medium_line_t4_g4_g3_ParamLimits

0x4b57,	// (0x0002ae31) list_medium_line_t4_g4_g3

0x35d7,	// (0x000298b1) list_medium_line_t4_g4_g4_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000355f5) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000355f5) list_medium_line_t4_g4_g

0x4b63,	// (0x0002ae3d) list_medium_line_t4_g4_t1_ParamLimits

0x4b63,	// (0x0002ae3d) list_medium_line_t4_g4_t1

0x4b78,	// (0x0002ae52) list_medium_line_t4_g4_t2_ParamLimits

0x4b78,	// (0x0002ae52) list_medium_line_t4_g4_t2

0x4b8e,	// (0x0002ae68) list_medium_line_t4_g4_t3_ParamLimits

0x4b8e,	// (0x0002ae68) list_medium_line_t4_g4_t3

0x4ba4,	// (0x0002ae7e) list_medium_line_t4_g4_t4_ParamLimits

0x4ba4,	// (0x0002ae7e) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000355fe) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000355fe) list_medium_line_t4_g4_t

0x4eda,	// (0x0002b1b4) chi_dic_find_pane_g1

0x0ffd,	// (0x000272d7) main_tport_pane

0xd4aa,	// (0x00033784) list_medium_line_plain_t1

0xd4fc,	// (0x000337d6) list_medium_line_t2_g2_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t2_g2_g1

0xd508,	// (0x000337e2) list_medium_line_t2_g2_g2_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x00035cd6) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x00035cd6) list_medium_line_t2_g2_g

0x8a10,	// (0x0002ecea) list_medium_line_t2_g2_t1_ParamLimits

0x8a10,	// (0x0002ecea) list_medium_line_t2_g2_t1

0x8a27,	// (0x0002ed01) list_medium_line_t2_g2_t2_ParamLimits

0x8a27,	// (0x0002ed01) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x00035cdb) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x00035cdb) list_medium_line_t2_g2_t

0xd8c0,	// (0x00033b9a) aid_sp_fs_list_icon_a_sm

0xd8c8,	// (0x00033ba2) aid_sp_fs_list_icon_d

0xd8d0,	// (0x00033baa) aid_sp_fs_text_primary

0xd8d9,	// (0x00033bb3) aid_sp_fs_text_secondary

0xd8e2,	// (0x00033bbc) list_medium_line

0xd8e2,	// (0x00033bbc) list_medium_line_g2

0xd8e2,	// (0x00033bbc) list_medium_line_g3

0xd8e2,	// (0x00033bbc) list_medium_line_plain

0xd8e2,	// (0x00033bbc) list_medium_line_plain_t2

0xd8e2,	// (0x00033bbc) list_medium_line_plain_t3

0xd8e2,	// (0x00033bbc) list_medium_line_right_icon

0xd8e2,	// (0x00033bbc) list_medium_line_right_iconx2

0xd8e2,	// (0x00033bbc) list_medium_line_t2

0xd8e2,	// (0x00033bbc) list_medium_line_t2_g2

0xd8e2,	// (0x00033bbc) list_medium_line_t2_g3

0xd8e2,	// (0x00033bbc) list_medium_line_t2_right_icon

0xd8e2,	// (0x00033bbc) list_medium_line_t2_right_iconx2

0xd8e2,	// (0x00033bbc) list_medium_line_t3

0xd8e2,	// (0x00033bbc) list_medium_line_t3_g2

0xd8e2,	// (0x00033bbc) list_medium_line_t3_g3

0xd8e2,	// (0x00033bbc) list_medium_line_t3_right_iconx2

0x8f8a,	// (0x0002f264) list_medium_line_t4_g4

0xd8eb,	// (0x00033bc5) list_medium_line_x2

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t2_g2

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t2_g3

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t2_g4

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t3

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t3_g2

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t3_g3

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t3_g4

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t4_g2

0xd8eb,	// (0x00033bc5) list_medium_line_x2_t4_g4

0x8f93,	// (0x0002f26d) list_medium_line_x3

0x8f93,	// (0x0002f26d) list_medium_line_x3_t4

0x8f93,	// (0x0002f26d) list_medium_line_x3_t4_g4

0x8f8a,	// (0x0002f264) list_medium_line_x4_t4

0x8f8a,	// (0x0002f264) list_medium_line_x4_t4_g7

0x8f8a,	// (0x0002f264) list_medium_line_x4_t5

0x8f9c,	// (0x0002f276) list_single_fs_dyc_pane_ParamLimits

0x8f9c,	// (0x0002f276) list_single_fs_dyc_pane

0x35bf,	// (0x00029899) list_medium_line_x4_t4_g7_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x4_t4_g7_g1

0x9618,	// (0x0002f8f2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9618,	// (0x0002f8f2) list_medium_line_x4_t4_g7_g2

0x9624,	// (0x0002f8fe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9624,	// (0x0002f8fe) list_medium_line_x4_t4_g7_g3

0x9633,	// (0x0002f90d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9633,	// (0x0002f90d) list_medium_line_x4_t4_g7_g4

0x963f,	// (0x0002f919) list_medium_line_x4_t4_g7_g5_ParamLimits

0x963f,	// (0x0002f919) list_medium_line_x4_t4_g7_g5

0x964e,	// (0x0002f928) list_medium_line_x4_t4_g7_g6_ParamLimits

0x964e,	// (0x0002f928) list_medium_line_x4_t4_g7_g6

0x965d,	// (0x0002f937) list_medium_line_x4_t4_g7_g7_ParamLimits

0x965d,	// (0x0002f937) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x00035ea6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x00035ea6) list_medium_line_x4_t4_g7_g

0x9669,	// (0x0002f943) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9669,	// (0x0002f943) list_medium_line_x4_t4_g7_t1

0x967e,	// (0x0002f958) list_medium_line_x4_t4_g7_t2_ParamLimits

0x967e,	// (0x0002f958) list_medium_line_x4_t4_g7_t2

0x9693,	// (0x0002f96d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9693,	// (0x0002f96d) list_medium_line_x4_t4_g7_t3

0x96a8,	// (0x0002f982) list_medium_line_x4_t4_g7_t4_ParamLimits

0x96a8,	// (0x0002f982) list_medium_line_x4_t4_g7_t4

0x96ba,	// (0x0002f994) list_medium_line_x4_t4_g7_t5_ParamLimits

0x96ba,	// (0x0002f994) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x00035eb5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x00035eb5) list_medium_line_x4_t4_g7_t

0x96cc,	// (0x0002f9a6) list_single_dyc_row_pane_ParamLimits

0x96cc,	// (0x0002f9a6) list_single_dyc_row_pane

0x9d67,	// (0x00030041) call5_gesture_pane_ParamLimits

0x9d67,	// (0x00030041) call5_gesture_pane

0x9daf,	// (0x00030089) call5_windows_pane_ParamLimits

0x9daf,	// (0x00030089) call5_windows_pane

0x9e60,	// (0x0003013a) call5_swipe_1_pane_cp_ParamLimits

0x9e60,	// (0x0003013a) call5_swipe_1_pane_cp

0x9e6c,	// (0x00030146) call5_swipe_2_pane_cp_ParamLimits

0x9e6c,	// (0x00030146) call5_swipe_2_pane_cp

0x322e,	// (0x00029508) call5_image_pane_cp

0x9e78,	// (0x00030152) popup_call5_audio_first_window_cp_ParamLimits

0x9e78,	// (0x00030152) popup_call5_audio_first_window_cp

0xe3d9,	// (0x000346b3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3d9,	// (0x000346b3) call5_swipe_1_pane_g1_cp

0xe407,	// (0x000346e1) call5_swipe_1_pane_g2_cp

0xe3f2,	// (0x000346cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3f2,	// (0x000346cc) call5_swipe_1_pane_t1_cp

0xe3d9,	// (0x000346b3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3d9,	// (0x000346b3) call5_swipe_2_pane_g1_cp

0xe40f,	// (0x000346e9) call5_swipe_2_pane_g2_cp

0xe417,	// (0x000346f1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe417,	// (0x000346f1) call5_swipe_2_pane_t1_cp

0x6d36,	// (0x0002d010) main_sp_fs_email_pane

0xe42c,	// (0x00034706) main_sp_fs_listscroll_pane_te

0x9e84,	// (0x0003015e) popup_sp_fs_action_menu_pane_ParamLimits

0x9e84,	// (0x0003015e) popup_sp_fs_action_menu_pane

0xc431,	// (0x0003270b) bg_sp_fs_ctrlbar_pane_g1

0xca31,	// (0x00032d0b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca43,	// (0x00032d1d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xca3a,	// (0x00032d14) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc431,	// (0x0003270b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x00035fa3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc21e,	// (0x000324f8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc21e,	// (0x000324f8) bg_sp_fs_ctrlbar_ddmenu_pane

0xe435,	// (0x0003470f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe435,	// (0x0003470f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe441,	// (0x0003471b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe441,	// (0x0003471b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x00035fac) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x00035fac) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe44d,	// (0x00034727) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe44d,	// (0x00034727) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe467,	// (0x00034741) list_medium_line_t2_right_icon_g1

0xe46f,	// (0x00034749) list_medium_line_t2_right_icon_t1

0x9eb6,	// (0x00030190) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x00035fb1) list_medium_line_t2_right_icon_t

0xbf1d,	// (0x000321f7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf1d,	// (0x000321f7) bg_sp_fs_ctrlbar_pane

0x9f0a,	// (0x000301e4) main_sp_fs_ctrlbar_button_pane_cp01

0x9f12,	// (0x000301ec) main_sp_fs_ctrlbar_ddmenu_pane

0xe4b7,	// (0x00034791) main_sp_fs_ctrlbar_pane_g1

0xe4c3,	// (0x0003479d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x00035fb6) main_sp_fs_ctrlbar_pane_g

0x9f4e,	// (0x00030228) main_sp_fs_ctrlbar_pane_t1

0x9f97,	// (0x00030271) main_sp_fs_ctrlbar_pane

0x9fb8,	// (0x00030292) main_sp_fs_listscroll_pane_te_cp01

0x9fd8,	// (0x000302b2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9fd8,	// (0x000302b2) popup_sp_fs_action_menu_pane_cp01

0x6d36,	// (0x0002d010) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x6d36,	// (0x0002d010) bg_sp_fs_highlight_list_pane_cp01

0xa002,	// (0x000302dc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa002,	// (0x000302dc) sp_fs_action_menu_list_gene_pane_g1

0xe4ea,	// (0x000347c4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4ea,	// (0x000347c4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00035fc4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00035fc4) sp_fs_action_menu_list_gene_pane_g

0xa011,	// (0x000302eb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa011,	// (0x000302eb) sp_fs_action_menu_list_gene_pane_t1

0xa029,	// (0x00030303) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa029,	// (0x00030303) sp_fs_action_menu_list_gene_pane

0xe4f7,	// (0x000347d1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4f7,	// (0x000347d1) popup_sp_fs_action_menu_bg_pane

0xa046,	// (0x00030320) sp_fs_action_menu_list_pane_ParamLimits

0xa046,	// (0x00030320) sp_fs_action_menu_list_pane

0xe505,	// (0x000347df) sp_fs_scroll_pane_cp01_ParamLimits

0xe505,	// (0x000347df) sp_fs_scroll_pane_cp01

0xa064,	// (0x0003033e) list_medium_line_plain_t2_t1

0xa074,	// (0x0003034e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00035fc9) list_medium_line_plain_t2_t

0xa082,	// (0x0003035c) list_medium_line_plain_t3_t1

0xa092,	// (0x0003036c) list_medium_line_plain_t3_t2

0xa0a0,	// (0x0003037a) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00035fce) list_medium_line_plain_t3_t

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g2_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t2_g2_g1

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x00035505) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x00035505) list_medium_line_x2_t2_g2_g

0x4b63,	// (0x0002ae3d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4b63,	// (0x0002ae3d) list_medium_line_x2_t2_g2_t1

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00035fd5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00035fd5) list_medium_line_x2_t2_g2_t

0x35bf,	// (0x00029899) list_medium_line_x2_t4_g2_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t4_g2_g1

0x35d7,	// (0x000298b1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x00035505) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x00035505) list_medium_line_x2_t4_g2_g

0xa0ae,	// (0x00030388) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa0ae,	// (0x00030388) list_medium_line_x2_t4_g2_t1

0xa0c5,	// (0x0003039f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa0c5,	// (0x0003039f) list_medium_line_x2_t4_g2_t2

0xa0da,	// (0x000303b4) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa0da,	// (0x000303b4) list_medium_line_x2_t4_g2_t3

0x360a,	// (0x000298e4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x00035fda) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x00035fda) list_medium_line_x2_t4_g2_t

0xe52b,	// (0x00034805) list_medium_line_t3_right_iconx2_g1

0xe467,	// (0x00034741) list_medium_line_t3_right_iconx2_g2

0xa0ec,	// (0x000303c6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x00035fe3) list_medium_line_t3_right_iconx2_g

0xa0f4,	// (0x000303ce) list_medium_line_t3_right_iconx2_t1

0xa104,	// (0x000303de) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x00035fea) list_medium_line_t3_right_iconx2_t

0x35bf,	// (0x00029899) list_medium_line_x3_t4_g4_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x3_t4_g4_g1

0x35cb,	// (0x000298a5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x3_t4_g4_g2

0x3653,	// (0x0002992d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3653,	// (0x0002992d) list_medium_line_x3_t4_g4_g3

0xa112,	// (0x000303ec) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa112,	// (0x000303ec) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x00035fef) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x00035fef) list_medium_line_x3_t4_g4_g

0xa11e,	// (0x000303f8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa11e,	// (0x000303f8) list_medium_line_x3_t4_g4_t1

0xa135,	// (0x0003040f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa135,	// (0x0003040f) list_medium_line_x3_t4_g4_t2

0xa14a,	// (0x00030424) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa14a,	// (0x00030424) list_medium_line_x3_t4_g4_t3

0xa15f,	// (0x00030439) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa15f,	// (0x00030439) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x00035ff8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x00035ff8) list_medium_line_x3_t4_g4_t

0xa17c,	// (0x00030456) list_single_dyc_row_text_pane_t1_ParamLimits

0xa17c,	// (0x00030456) list_single_dyc_row_text_pane_t1

0xa1b3,	// (0x0003048d) list_single_dyc_row_text_pane_t2_ParamLimits

0xa1b3,	// (0x0003048d) list_single_dyc_row_text_pane_t2

0xe533,	// (0x0003480d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe533,	// (0x0003480d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x00036001) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x00036001) list_single_dyc_row_text_pane_t

0xe557,	// (0x00034831) list_single_dyc_row_pane_g1_ParamLimits

0xe557,	// (0x00034831) list_single_dyc_row_pane_g1

0xe563,	// (0x0003483d) list_single_dyc_row_pane_g2_ParamLimits

0xe563,	// (0x0003483d) list_single_dyc_row_pane_g2

0xe56f,	// (0x00034849) list_single_dyc_row_pane_g3_ParamLimits

0xe56f,	// (0x00034849) list_single_dyc_row_pane_g3

0xe57b,	// (0x00034855) list_single_dyc_row_pane_g4_ParamLimits

0xe57b,	// (0x00034855) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003600e) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003600e) list_single_dyc_row_pane_g

0xe587,	// (0x00034861) list_single_dyc_row_text_pane_ParamLimits

0xe587,	// (0x00034861) list_single_dyc_row_text_pane

0x2135,	// (0x0002840f) bg_sp_fs_scroll_pane

0xe5a6,	// (0x00034880) thumb_sp_fs_scroll_pane

0xd4fc,	// (0x000337d6) list_medium_line_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_g1

0xe5af,	// (0x00034889) list_medium_line_t1_ParamLimits

0xe5af,	// (0x00034889) list_medium_line_t1

0x35bf,	// (0x00029899) list_medium_line_x2_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_g1

0x35cb,	// (0x000298a5) list_medium_line_x2_g2_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x00036017) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x00036017) list_medium_line_x2_g

0xe5c4,	// (0x0003489e) list_medium_line_x2_t1_ParamLimits

0xe5c4,	// (0x0003489e) list_medium_line_x2_t1

0x35bf,	// (0x00029899) list_medium_line_x3_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x3_g1

0x35cb,	// (0x000298a5) list_medium_line_x3_g2_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x00036017) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x00036017) list_medium_line_x3_g

0xe5c4,	// (0x0003489e) list_medium_line_x3_t1_ParamLimits

0xe5c4,	// (0x0003489e) list_medium_line_x3_t1

0xe5da,	// (0x000348b4) thumb_sp_fs_scroll_pane_g1

0xe5e3,	// (0x000348bd) thumb_sp_fs_scroll_pane_g2

0xe5ec,	// (0x000348c6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003601c) thumb_sp_fs_scroll_pane_g

0xe5da,	// (0x000348b4) bg_sp_fs_scroll_pane_g1

0xe5e3,	// (0x000348bd) bg_sp_fs_scroll_pane_g2

0xe5ec,	// (0x000348c6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003601c) bg_sp_fs_scroll_pane_g

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g4_g1_ParamLimits

0x35bf,	// (0x00029899) list_medium_line_x2_t3_g4_g1

0x3647,	// (0x00029921) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3647,	// (0x00029921) list_medium_line_x2_t3_g4_g2

0x35cb,	// (0x000298a5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x35cb,	// (0x000298a5) list_medium_line_x2_t3_g4_g3

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x35d7,	// (0x000298b1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x00035581) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x00035581) list_medium_line_x2_t3_g4_g

0xa2d6,	// (0x000305b0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa2d6,	// (0x000305b0) list_medium_line_x2_t3_g4_t1

0xa2ec,	// (0x000305c6) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa2ec,	// (0x000305c6) list_medium_line_x2_t3_g4_t2

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x360a,	// (0x000298e4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x00036023) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x00036023) list_medium_line_x2_t3_g4_t

0xd4fc,	// (0x000337d6) list_medium_line_g2_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_g2_g1

0xd508,	// (0x000337e2) list_medium_line_g2_g2_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x00035cd6) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x00035cd6) list_medium_line_g2_g

0xe5f5,	// (0x000348cf) list_medium_line_g2_t1_ParamLimits

0xe5f5,	// (0x000348cf) list_medium_line_g2_t1

0xd4fc,	// (0x000337d6) list_medium_line_t3_g2_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t3_g2_g1

0xd508,	// (0x000337e2) list_medium_line_t3_g2_g2_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x00035cd6) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x00035cd6) list_medium_line_t3_g2_g

0xa305,	// (0x000305df) list_medium_line_t3_g2_t1_ParamLimits

0xa305,	// (0x000305df) list_medium_line_t3_g2_t1

0xa31c,	// (0x000305f6) list_medium_line_t3_g2_t2_ParamLimits

0xa31c,	// (0x000305f6) list_medium_line_t3_g2_t2

0xa331,	// (0x0003060b) list_medium_line_t3_g2_t3_ParamLimits

0xa331,	// (0x0003060b) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003602a) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003602a) list_medium_line_t3_g2_t

0xe467,	// (0x00034741) list_medium_line_right_icon_g1

0xe60a,	// (0x000348e4) list_medium_line_right_icon_t1

0xd4fc,	// (0x000337d6) list_medium_line_t2_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t2_g1

0xa346,	// (0x00030620) list_medium_line_t2_t1_ParamLimits

0xa346,	// (0x00030620) list_medium_line_t2_t1

0xa35d,	// (0x00030637) list_medium_line_t2_t2_ParamLimits

0xa35d,	// (0x00030637) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x00036031) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x00036031) list_medium_line_t2_t

0xd4fc,	// (0x000337d6) list_medium_line_t3_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t3_g1

0xa36f,	// (0x00030649) list_medium_line_t3_t1_ParamLimits

0xa36f,	// (0x00030649) list_medium_line_t3_t1

0xa386,	// (0x00030660) list_medium_line_t3_t2_ParamLimits

0xa386,	// (0x00030660) list_medium_line_t3_t2

0xa39b,	// (0x00030675) list_medium_line_t3_t3_ParamLimits

0xa39b,	// (0x00030675) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x00036036) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x00036036) list_medium_line_t3_t

0xd4fc,	// (0x000337d6) list_medium_line_g3_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_g3_g1

0xe618,	// (0x000348f2) list_medium_line_g3_g2_ParamLimits

0xe618,	// (0x000348f2) list_medium_line_g3_g2

0xd508,	// (0x000337e2) list_medium_line_g3_g3_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003603d) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003603d) list_medium_line_g3_g

0xe624,	// (0x000348fe) list_medium_line_g3_t1_ParamLimits

0xe624,	// (0x000348fe) list_medium_line_g3_t1

0xd4fc,	// (0x000337d6) list_medium_line_t2_g3_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t2_g3_g1

0xe618,	// (0x000348f2) list_medium_line_t2_g3_g2_ParamLimits

0xe618,	// (0x000348f2) list_medium_line_t2_g3_g2

0xd508,	// (0x000337e2) list_medium_line_t2_g3_g3_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003603d) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003603d) list_medium_line_t2_g3_g

0xa3ad,	// (0x00030687) list_medium_line_t2_g3_t1_ParamLimits

0xa3ad,	// (0x00030687) list_medium_line_t2_g3_t1

0xa3c7,	// (0x000306a1) list_medium_line_t2_g3_t2_ParamLimits

0xa3c7,	// (0x000306a1) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x00036044) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x00036044) list_medium_line_t2_g3_t

0xd4fc,	// (0x000337d6) list_medium_line_t3_g3_g1_ParamLimits

0xd4fc,	// (0x000337d6) list_medium_line_t3_g3_g1

0xe618,	// (0x000348f2) list_medium_line_t3_g3_g2_ParamLimits

0xe618,	// (0x000348f2) list_medium_line_t3_g3_g2

0xd508,	// (0x000337e2) list_medium_line_t3_g3_g3_ParamLimits

0xd508,	// (0x000337e2) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003603d) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003603d) list_medium_line_t3_g3_g

0xa3dc,	// (0x000306b6) list_medium_line_t3_g3_t1_ParamLimits

0xa3dc,	// (0x000306b6) list_medium_line_t3_g3_t1

0xa3f5,	// (0x000306cf) list_medium_line_t3_g3_t2_ParamLimits

0xa3f5,	// (0x000306cf) list_medium_line_t3_g3_t2

0xa40b,	// (0x000306e5) list_medium_line_t3_g3_t3_ParamLimits

0xa40b,	// (0x000306e5) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x00036049) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x00036049) list_medium_line_t3_g3_t

0xe52b,	// (0x00034805) list_medium_line_right_iconx2_g1

0xe467,	// (0x00034741) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x00036050) list_medium_line_right_iconx2_g

0xe639,	// (0x00034913) list_medium_line_right_iconx2_t1

0xe52b,	// (0x00034805) list_medium_line_t2_right_iconx2_g1

0xe467,	// (0x00034741) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x00036050) list_medium_line_t2_right_iconx2_g

0xa421,	// (0x000306fb) list_medium_line_t2_right_iconx2_t1

0xa431,	// (0x0003070b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x00036055) list_medium_line_t2_right_iconx2_t

0xa43f,	// (0x00030719) list_medium_line_x4_t4_t1

0xa44d,	// (0x00030727) list_medium_line_x4_t4_t2

0xa45d,	// (0x00030737) list_medium_line_x4_t4_t3

0xa46d,	// (0x00030747) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003605a) list_medium_line_x4_t4_t

0xa4b6,	// (0x00030790) tport_appsw_pane_ParamLimits

0xa4b6,	// (0x00030790) tport_appsw_pane

0xa4c7,	// (0x000307a1) tport_contact_pane_ParamLimits

0xa4c7,	// (0x000307a1) tport_contact_pane

0xa4db,	// (0x000307b5) tport_listscroll_pane_ParamLimits

0xa4db,	// (0x000307b5) tport_listscroll_pane

0xa4f3,	// (0x000307cd) cell_tport_appsw_pane_ParamLimits

0xa4f3,	// (0x000307cd) cell_tport_appsw_pane

0xd1fc,	// (0x000334d6) tport_appsw_pane_g1_ParamLimits

0xd1fc,	// (0x000334d6) tport_appsw_pane_g1

0xe647,	// (0x00034921) tport_contact_pane_g1

0xe650,	// (0x0003492a) tport_contact_pane_t1

0xe65e,	// (0x00034938) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x00036063) tport_contact_pane_t

0xe66c,	// (0x00034946) list_tport_pane

0x2cc5,	// (0x00028f9f) scroll_pane_cp_030

0xe67d,	// (0x00034957) cell_tport_appsw_pane_g1

0xe68d,	// (0x00034967) cell_tport_appsw_pane_t1

0xe69b,	// (0x00034975) grid_highlight_pane_cp019

0xa529,	// (0x00030803) list_tport_double_graphic_pane_ParamLimits

0xa529,	// (0x00030803) list_tport_double_graphic_pane

0x6d36,	// (0x0002d010) list_highlight_pane_cp023_ParamLimits

0x6d36,	// (0x0002d010) list_highlight_pane_cp023

0xa536,	// (0x00030810) list_tport_double_graphic_pane_g1_ParamLimits

0xa536,	// (0x00030810) list_tport_double_graphic_pane_g1

0xa543,	// (0x0003081d) list_tport_double_graphic_pane_t1_ParamLimits

0xa543,	// (0x0003081d) list_tport_double_graphic_pane_t1

0xa558,	// (0x00030832) list_tport_double_graphic_pane_t2_ParamLimits

0xa558,	// (0x00030832) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003606f) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003606f) list_tport_double_graphic_pane_t

0x2135,	// (0x0002840f) main_cale_note_pane

0x1dc1,	// (0x0002809b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1dc1,	// (0x0002809b) cell_vitu2_function_top_wide_pane_cp01

0x9a17,	// (0x0002fcf1) wait_bar_pane_cp05_ParamLimits

0x6d36,	// (0x0002d010) listscroll_cmail_pane

0xe6a3,	// (0x0003497d) list_cmail_pane

0xa56a,	// (0x00030844) list_cmail_body_pane

0xa56a,	// (0x00030844) list_single_cmail_header_caption_pane

0xa581,	// (0x0003085b) list_single_cmail_header_detail_pane_ParamLimits

0xa581,	// (0x0003085b) list_single_cmail_header_detail_pane

0xe6bf,	// (0x00034999) list_single_cmail_header_caption_pane_t1

0xa5aa,	// (0x00030884) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa5aa,	// (0x00030884) list_single_cmail_header_detail_pane_g1

0xe6d6,	// (0x000349b0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6d6,	// (0x000349b0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x00036074) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x00036074) list_single_cmail_header_detail_pane_g

0xa5c0,	// (0x0003089a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa5c0,	// (0x0003089a) list_single_cmail_header_detail_pane_t1

0xe713,	// (0x000349ed) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe713,	// (0x000349ed) list_single_cmail_header_editor_pane_bg

0xe72a,	// (0x00034a04) list_cmail_body_pane_g1

0xe733,	// (0x00034a0d) list_cmail_body_pane_t1

0xd24b,	// (0x00033525) list_single_cmail_header_editor_pane_bg_g1

0x3c4e,	// (0x00029f28) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd25b,	// (0x00033535) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd253,	// (0x0003352d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4d4,	// (0x000337ae) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd27b,	// (0x00033555) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd26b,	// (0x00033545) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd273,	// (0x0003354d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3c2e,	// (0x00029f08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa5fc,	// (0x000308d6) calenote_gesture_pane_ParamLimits

0xa5fc,	// (0x000308d6) calenote_gesture_pane

0xa618,	// (0x000308f2) calenote_window_pane_ParamLimits

0xa618,	// (0x000308f2) calenote_window_pane

0xe741,	// (0x00034a1b) popup_note_window_cp01

0xa634,	// (0x0003090e) calenote_swipe_1_pane_ParamLimits

0xa634,	// (0x0003090e) calenote_swipe_1_pane

0x9e6c,	// (0x00030146) calenote_swipe_2_pane_ParamLimits

0x9e6c,	// (0x00030146) calenote_swipe_2_pane

0xe3d9,	// (0x000346b3) calenote_swipe_1_pane_g1_ParamLimits

0xe3d9,	// (0x000346b3) calenote_swipe_1_pane_g1

0xe3e6,	// (0x000346c0) calenote_swipe_1_pane_g2_ParamLimits

0xe3e6,	// (0x000346c0) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00035f99) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00035f99) calenote_swipe_1_pane_g

0xe753,	// (0x00034a2d) calenote_swipe_1_pane_t1_ParamLimits

0xe753,	// (0x00034a2d) calenote_swipe_1_pane_t1

0xe3d9,	// (0x000346b3) calenote_swipe_2_pane_g1_ParamLimits

0xe3d9,	// (0x000346b3) calenote_swipe_2_pane_g1

0xe772,	// (0x00034a4c) calenote_swipe_2_pane_g2_ParamLimits

0xe772,	// (0x00034a4c) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x00036080) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x00036080) calenote_swipe_2_pane_g

0xe77e,	// (0x00034a58) calenote_swipe_2_pane_t1_ParamLimits

0xe77e,	// (0x00034a58) calenote_swipe_2_pane_t1

0x2135,	// (0x0002840f) main_mup_navstr_pane

0x7914,	// (0x0002dbee) main_mup3_pane_t7_ParamLimits

0x7914,	// (0x0002dbee) main_mup3_pane_t7

0xcdc1,	// (0x0003309b) main_mp4_pane_g6_ParamLimits

0xcdc1,	// (0x0003309b) main_mp4_pane_g6

0xd01b,	// (0x000332f5) main_image3_pane_t4_ParamLimits

0xd01b,	// (0x000332f5) main_image3_pane_t4

0xa649,	// (0x00030923) popup_navstr_preview_pane_ParamLimits

0xa649,	// (0x00030923) popup_navstr_preview_pane

0xa659,	// (0x00030933) scroll_navstr_pane_ParamLimits

0xa659,	// (0x00030933) scroll_navstr_pane

0x2135,	// (0x0002840f) bg_popup_preview_window_pane_cp04

0xe7a5,	// (0x00034a7f) popup_navstr_preview_pane_t1

0xa66d,	// (0x00030947) scroll_navstr_pane_g1_ParamLimits

0xa66d,	// (0x00030947) scroll_navstr_pane_g1

0xa681,	// (0x0003095b) scroll_navstr_pane_t1_ParamLimits

0xa681,	// (0x0003095b) scroll_navstr_pane_t1

0xe74a,	// (0x00034a24) bg_button_pane_cp014

0xe74a,	// (0x00034a24) bg_button_pane_cp030

0x9d12,	// (0x0002ffec) list_double_fisheye_pane_g4_ParamLimits

0x9d12,	// (0x0002ffec) list_double_fisheye_pane_g4

0x9d1e,	// (0x0002fff8) list_double_fisheye_pane_g5_ParamLimits

0x9d1e,	// (0x0002fff8) list_double_fisheye_pane_g5

0xe6b3,	// (0x0003498d) sp_fs_scroll_pane_cp03

0xe4b7,	// (0x00034791) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4c3,	// (0x0003479d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x00035fb6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9f4e,	// (0x00030228) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6ab,	// (0x00034985) sp_fs_scroll_pane_cp02

0x2d24,	// (0x00028ffe) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2d24,	// (0x00028ffe) popup_sp_fs_calendar_preview_list_single_pane

0x2135,	// (0x0002840f) main_cam6_pano_pane

0xb67d,	// (0x00031957) main_mup3_pane_ParamLimits

0x2135,	// (0x0002840f) main_phacti_pane

0x990a,	// (0x0002fbe4) bg_button_pane_cp11

0x9922,	// (0x0002fbfc) main_mobtv_info_pane_g2_ParamLimits

0x9922,	// (0x0002fbfc) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x00035f16) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x00035f16) main_mobtv_info_pane_g

0x9ad7,	// (0x0002fdb1) sc_clock_pane_t5_ParamLimits

0x9ad7,	// (0x0002fdb1) sc_clock_pane_t5

0x9b82,	// (0x0002fe5c) main_radioblah_pane_g1_ParamLimits

0xe31c,	// (0x000345f6) main_radioblah_pane_t3_ParamLimits

0xe31c,	// (0x000345f6) main_radioblah_pane_t3

0xe334,	// (0x0003460e) main_radioblah_pane_t4_ParamLimits

0xe334,	// (0x0003460e) main_radioblah_pane_t4

0x9baa,	// (0x0002fe84) main_radioblah_text_pane_ParamLimits

0x9baa,	// (0x0002fe84) main_radioblah_text_pane

0x9bbc,	// (0x0002fe96) main_radioblah_info_pane_g1_ParamLimits

0x9c4f,	// (0x0002ff29) main_radioblah_info_pane_t4_ParamLimits

0x9c4f,	// (0x0002ff29) main_radioblah_info_pane_t4

0x6d36,	// (0x0002d010) main_sp_fs_calendar_pane

0xa697,	// (0x00030971) main_phacti_pane_g1

0xa69f,	// (0x00030979) phacti_note_pane_ParamLimits

0xa69f,	// (0x00030979) phacti_note_pane

0xe7bc,	// (0x00034a96) phacti_term_pane_ParamLimits

0xe7bc,	// (0x00034a96) phacti_term_pane

0xe7d1,	// (0x00034aab) phacti_note_pane_t1_ParamLimits

0xe7d1,	// (0x00034aab) phacti_note_pane_t1

0xe7e8,	// (0x00034ac2) phacti_term_pane_g1

0xe7f0,	// (0x00034aca) phacti_term_pane_t1_ParamLimits

0xe7f0,	// (0x00034aca) phacti_term_pane_t1

0xe81a,	// (0x00034af4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe822,	// (0x00034afc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003608a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe82a,	// (0x00034b04) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe82a,	// (0x00034b04) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe840,	// (0x00034b1a) aid_popup_sp_fs_bg_corner_pane

0xc431,	// (0x0003270b) popup_sp_fs_calendar_preview_bg_pane_g1

0x2135,	// (0x0002840f) popup_sp_fs_calendar_preview_bg_pane

0xe848,	// (0x00034b22) popup_sp_fs_calendar_preview_list_pane

0xbf1d,	// (0x000321f7) bg_main_sp_fs_cale_pane_ParamLimits

0xbf1d,	// (0x000321f7) bg_main_sp_fs_cale_pane

0xe859,	// (0x00034b33) listscroll_cale_mrui_pane_ParamLimits

0xe859,	// (0x00034b33) listscroll_cale_mrui_pane

0xe86e,	// (0x00034b48) listscroll_sp_fs_schedule_track_pane

0xe877,	// (0x00034b51) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe877,	// (0x00034b51) main_sp_fs_ctrlbar_pane_cp01

0xe88a,	// (0x00034b64) main_sp_fs_ribbon_pane

0xe892,	// (0x00034b6c) popup_sp_fs_cale_preview_window

0xa702,	// (0x000309dc) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa702,	// (0x000309dc) list_single_sp_fs_schedule_track_pane

0x6d36,	// (0x0002d010) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6d36,	// (0x0002d010) bg_sp_fs_highlight_list_pane_cp03

0xa716,	// (0x000309f0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa716,	// (0x000309f0) list_single_sp_fs_schedule_track_pane_g1

0xa722,	// (0x000309fc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa722,	// (0x000309fc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003608f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003608f) list_single_sp_fs_schedule_track_pane_g

0xa72e,	// (0x00030a08) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa72e,	// (0x00030a08) list_single_sp_fs_schedule_track_pane_t1

0xa748,	// (0x00030a22) sp_fs_schedule_track_pane_ParamLimits

0xa748,	// (0x00030a22) sp_fs_schedule_track_pane

0xe8a4,	// (0x00034b7e) sp_fs_schedule_track_pane_g1

0xe8ac,	// (0x00034b86) sp_fs_schedule_track_pane_g2

0xe8b4,	// (0x00034b8e) sp_fs_schedule_track_pane_g3

0xe8bc,	// (0x00034b96) sp_fs_schedule_track_pane_g4

0xe8c4,	// (0x00034b9e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x00036094) sp_fs_schedule_track_pane_g

0xd24b,	// (0x00033525) bg_sp_fs_schedule_viewer_highlight_g1

0x3c4e,	// (0x00029f28) bg_sp_fs_schedule_viewer_highlight_g2

0xd253,	// (0x0003352d) bg_sp_fs_schedule_viewer_highlight_g3

0xd25b,	// (0x00033535) bg_sp_fs_schedule_viewer_highlight_g4

0xd4d4,	// (0x000337ae) bg_sp_fs_schedule_viewer_highlight_g5

0xd26b,	// (0x00033545) bg_sp_fs_schedule_viewer_highlight_g6

0xd273,	// (0x0003354d) bg_sp_fs_schedule_viewer_highlight_g7

0xd27b,	// (0x00033555) bg_sp_fs_schedule_viewer_highlight_g8

0x3c2e,	// (0x00029f08) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003609f) bg_sp_fs_schedule_viewer_highlight_g

0x2135,	// (0x0002840f) bg_main_sp_fs_ribbon_pane

0xa759,	// (0x00030a33) main_sp_fs_ribbon_pane_g1

0xe8cc,	// (0x00034ba6) main_sp_fs_ribbon_pane_t1

0xa762,	// (0x00030a3c) main_sp_fs_ribbon_pane_t2

0xe8db,	// (0x00034bb5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x000360b2) main_sp_fs_ribbon_pane_t

0xe8ea,	// (0x00034bc4) main_sp_fs_ribbon_scheduler_pane

0xe8f2,	// (0x00034bcc) bg_main_sp_fs_ribbon_pane_g1

0xe8fb,	// (0x00034bd5) bg_main_sp_fs_ribbon_pane_g2

0xe904,	// (0x00034bde) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x000360b9) bg_main_sp_fs_ribbon_pane_g

0xe90c,	// (0x00034be6) main_sp_fs_ribbon_scheduler_pane_g1

0xe915,	// (0x00034bef) main_sp_fs_ribbon_scheduler_pane_g2

0xe91e,	// (0x00034bf8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x000360c0) main_sp_fs_ribbon_scheduler_pane_g

0xe927,	// (0x00034c01) list_cale_mrui_pane

0xa771,	// (0x00030a4b) sp_fs_scroll_pane_cp07_ParamLimits

0xa771,	// (0x00030a4b) sp_fs_scroll_pane_cp07

0xa789,	// (0x00030a63) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa789,	// (0x00030a63) bg_sp_fs_schedule_viewer_highlight

0xe934,	// (0x00034c0e) list_single_sp_fs_schedule_track_pane_cp01

0xe93c,	// (0x00034c16) list_sp_fs_schedule_track_pane

0xe944,	// (0x00034c1e) sp_fs_scroll_pane_cp06_ParamLimits

0xe944,	// (0x00034c1e) sp_fs_scroll_pane_cp06

0xc431,	// (0x0003270b) bgmain_sp_fs_calendar_pane_g1

0xa799,	// (0x00030a73) list_single_cale_mrui_pane_ParamLimits

0xa799,	// (0x00030a73) list_single_cale_mrui_pane

0xe956,	// (0x00034c30) list_single_cale_mrui_row_pane_ParamLimits

0xe956,	// (0x00034c30) list_single_cale_mrui_row_pane

0xa7ba,	// (0x00030a94) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa7ba,	// (0x00030a94) list_single_cale_mrui_row_pane_g1

0xa7f2,	// (0x00030acc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa7f2,	// (0x00030acc) list_single_cale_mrui_row_pane_t1

0xa804,	// (0x00030ade) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa804,	// (0x00030ade) list_single_cale_mrui_row_pane_t2

0xa86a,	// (0x00030b44) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa86a,	// (0x00030b44) list_single_cale_mrui_row_pane_t3

0xa899,	// (0x00030b73) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa899,	// (0x00030b73) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x000360ce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x000360ce) list_single_cale_mrui_row_pane_t

0xa8c8,	// (0x00030ba2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa8c8,	// (0x00030ba2) list_single_cmail_header_editor_pane_bg_cp01

0xa8ec,	// (0x00030bc6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa8ec,	// (0x00030bc6) list_single_cmail_header_editor_pane_bg_cp02

0xa90a,	// (0x00030be4) main_radioblah_text_pane_t1_ParamLimits

0xa90a,	// (0x00030be4) main_radioblah_text_pane_t1

0xe979,	// (0x00034c53) cam6_indi_pane_cp01

0xe981,	// (0x00034c5b) cam6_mode_pane_cp01

0xe989,	// (0x00034c63) cam6_pano_pane

0xe992,	// (0x00034c6c) cam6_zoom_pane_cp01

0xe99a,	// (0x00034c74) cam6_pano_image_pane

0xe9a3,	// (0x00034c7d) cam6_pano_pane_g1

0xe083,	// (0x0003435d) cam6_pano_pane_g2

0xe9ac,	// (0x00034c86) cam6_pano_pane_g3

0xe9b5,	// (0x00034c8f) cam6_pano_pane_g4

0xca1e,	// (0x00032cf8) cam6_pano_pane_g5

0xe9be,	// (0x00034c98) cam6_pano_pane_g6

0xe9c6,	// (0x00034ca0) cam6_pano_pane_g7

0xe9ce,	// (0x00034ca8) cam6_pano_pane_g8

0xe9d7,	// (0x00034cb1) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x000360d7) cam6_pano_pane_g

0x2135,	// (0x0002840f) main_browser_tag_pane

0xe79d,	// (0x00034a77) grid_navstr_albumart_pane

0xe9e0,	// (0x00034cba) cell_navstr_albumart_pane_ParamLimits

0xe9e0,	// (0x00034cba) cell_navstr_albumart_pane

0x587c,	// (0x0002bb56) cell_navstr_albumart_pane_g1

0xbcee,	// (0x00031fc8) cell_navstr_albumart_pane_g2

0xbcfe,	// (0x00031fd8) cell_navstr_albumart_pane_g3

0xbcf6,	// (0x00031fd0) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x000360ea) cell_navstr_albumart_pane_g

0xa923,	// (0x00030bfd) bt_list_pane_ParamLimits

0xa923,	// (0x00030bfd) bt_list_pane

0xa936,	// (0x00030c10) bt_list_pane_t1

0xa945,	// (0x00030c1f) bt_list_pane_t2

0x0001,

0xfe19,	// (0x000360f3) bt_list_pane_t

0x2135,	// (0x0002840f) main_cale_prevew_pane

0xa954,	// (0x00030c2e) popup_cale_preview_window_ParamLimits

0xa954,	// (0x00030c2e) popup_cale_preview_window

0x6d36,	// (0x0002d010) bg_popup_preview_window_pane_cp05_ParamLimits

0x6d36,	// (0x0002d010) bg_popup_preview_window_pane_cp05

0xe9f7,	// (0x00034cd1) list_cale_preview_pane_ParamLimits

0xe9f7,	// (0x00034cd1) list_cale_preview_pane

0xa969,	// (0x00030c43) list_double_cale_preview_pane_ParamLimits

0xa969,	// (0x00030c43) list_double_cale_preview_pane

0xa97a,	// (0x00030c54) list_single_cale_preview_pane_ParamLimits

0xa97a,	// (0x00030c54) list_single_cale_preview_pane

0xea03,	// (0x00034cdd) list_single_cale_preview_pane_g1

0xea0b,	// (0x00034ce5) list_single_cale_preview_pane_t1_ParamLimits

0xea0b,	// (0x00034ce5) list_single_cale_preview_pane_t1

0xa98e,	// (0x00030c68) list_double_cale_preview_pane_g1

0xa996,	// (0x00030c70) list_double_cale_preview_pane_t1_ParamLimits

0xa996,	// (0x00030c70) list_double_cale_preview_pane_t1

0xa9ab,	// (0x00030c85) list_double_cale_preview_pane_t2_ParamLimits

0xa9ab,	// (0x00030c85) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x000360f8) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x000360f8) list_double_cale_preview_pane_t

0x2135,	// (0x0002840f) main_ezdial_pane

0x6d36,	// (0x0002d010) main_sp_fs_email_pane_ParamLimits

0x9ec4,	// (0x0003019e) cmail_ddmenu_btn01_pane_ParamLimits

0x9ec4,	// (0x0003019e) cmail_ddmenu_btn01_pane

0x9ed7,	// (0x000301b1) cmail_ddmenu_btn02_pane_ParamLimits

0x9ed7,	// (0x000301b1) cmail_ddmenu_btn02_pane

0x9efa,	// (0x000301d4) cmail_ddmenu_btn03_pane_ParamLimits

0x9efa,	// (0x000301d4) cmail_ddmenu_btn03_pane

0x9f97,	// (0x00030271) main_sp_fs_ctrlbar_pane_ParamLimits

0x9fb8,	// (0x00030292) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa56a,	// (0x00030844) list_cmail_body_pane_ParamLimits

0xe6cd,	// (0x000349a7) bg_button_pane_cp12

0xe6e2,	// (0x000349bc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6e2,	// (0x000349bc) list_single_cmail_header_detail_pane_g3

0xe6ef,	// (0x000349c9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6ef,	// (0x000349c9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003607b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003607b) list_single_cmail_header_detail_pane_t

0xe805,	// (0x00034adf) phacti_term_pane_t2_ParamLimits

0xe805,	// (0x00034adf) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x00036085) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x00036085) phacti_term_pane_t

0xea20,	// (0x00034cfa) aid_size_list_single_double

0xa9c3,	// (0x00030c9d) popup_ezdial_listscroll_window

0xa9d9,	// (0x00030cb3) popup_number_entry_window_cp01

0x322e,	// (0x00029508) bg_popup_call_pane_cp09

0xea2c,	// (0x00034d06) ezdial_list_pane

0xea34,	// (0x00034d0e) scroll_pane_cp23

0xbf1d,	// (0x000321f7) bg_button_pane_cp028_ParamLimits

0xbf1d,	// (0x000321f7) bg_button_pane_cp028

0xa9e5,	// (0x00030cbf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa9e5,	// (0x00030cbf) cmail_ddmenu_btn01_pane_g1

0xa9f1,	// (0x00030ccb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa9f1,	// (0x00030ccb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x000360fd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x000360fd) cmail_ddmenu_btn01_pane_g

0xea3c,	// (0x00034d16) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea3c,	// (0x00034d16) cmail_ddmenu_btn01_pane_t1

0xbf1d,	// (0x000321f7) bg_button_pane_cp029_ParamLimits

0xbf1d,	// (0x000321f7) bg_button_pane_cp029

0xa9fd,	// (0x00030cd7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa9fd,	// (0x00030cd7) cmail_ddmenu_btn02_pane_g1

0xaa15,	// (0x00030cef) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xaa15,	// (0x00030cef) cmail_ddmenu_btn02_pane_t1

0x6d36,	// (0x0002d010) bg_button_pane_cp031_ParamLimits

0x6d36,	// (0x0002d010) bg_button_pane_cp031

0xa9fd,	// (0x00030cd7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa9fd,	// (0x00030cd7) cmail_ddmenu_btn03_pane_g1

0xaa15,	// (0x00030cef) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xaa15,	// (0x00030cef) cmail_ddmenu_btn03_pane_t1

0x8259,	// (0x0002e533) cell_dialer2_keypad_pane_t1_ParamLimits

0x8273,	// (0x0002e54d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8273,	// (0x0002e54d) cell_dialer2_keypad_pane_t1_copy1

0x9776,	// (0x0002fa50) ncimui_group_button_pane

0x6d36,	// (0x0002d010) main_sp_fs_calendar_pane_ParamLimits

0xa56a,	// (0x00030844) list_single_cmail_header_caption_pane_ParamLimits

0xe850,	// (0x00034b2a) aid_recal_txt_sm_pane

0x2135,	// (0x0002840f) mian_recal_day_pane

0xe892,	// (0x00034b6c) popup_sp_fs_cale_preview_window_ParamLimits

0xea51,	// (0x00034d2b) list_recal_day_pane

0xea93,	// (0x00034d6d) list_single_recal_day_pane_ParamLimits

0xea93,	// (0x00034d6d) list_single_recal_day_pane

0xeaa5,	// (0x00034d7f) list_single_recal_day_pane_g1_ParamLimits

0xeaa5,	// (0x00034d7f) list_single_recal_day_pane_g1

0xeab1,	// (0x00034d8b) list_single_recal_day_pane_g2_ParamLimits

0xeab1,	// (0x00034d8b) list_single_recal_day_pane_g2

0xeabd,	// (0x00034d97) list_single_recal_day_pane_g3_ParamLimits

0xeabd,	// (0x00034d97) list_single_recal_day_pane_g3

0xaa39,	// (0x00030d13) list_single_recal_day_pane_g4_ParamLimits

0xaa39,	// (0x00030d13) list_single_recal_day_pane_g4

0xeac9,	// (0x00034da3) list_single_recal_day_pane_g5_ParamLimits

0xeac9,	// (0x00034da3) list_single_recal_day_pane_g5

0xaa51,	// (0x00030d2b) list_single_recal_day_pane_g6_ParamLimits

0xaa51,	// (0x00030d2b) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003610c) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003610c) list_single_recal_day_pane_g

0xeadd,	// (0x00034db7) list_single_recal_day_pane_t1

0xaa5d,	// (0x00030d37) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x00036117) list_single_recal_day_pane_t

0xaa6f,	// (0x00030d49) ncimui_query_button_pane_ParamLimits

0xaa6f,	// (0x00030d49) ncimui_query_button_pane

0xaa7f,	// (0x00030d59) ncimui_query_button_pane_t1_ParamLimits

0xaa7f,	// (0x00030d59) ncimui_query_button_pane_t1

0xeaef,	// (0x00034dc9) ncimui_query_button_pane_t2_ParamLimits

0xeaef,	// (0x00034dc9) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003611c) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003611c) ncimui_query_button_pane_t

0xaa92,	// (0x00030d6c) query_button_pane_ParamLimits

0xaa92,	// (0x00030d6c) query_button_pane

0x2135,	// (0x0002840f) bg_button_pane_cp0028

0xeb02,	// (0x00034ddc) query_button_pane_t1

0x0ffd,	// (0x000272d7) main_tport_pane_ParamLimits

0xa47d,	// (0x00030757) bg_popup_window_pane_cp01_ParamLimits

0xa47d,	// (0x00030757) bg_popup_window_pane_cp01

0xa494,	// (0x0003076e) heading_pane_cp08_ParamLimits

0xa494,	// (0x0003076e) heading_pane_cp08

0xa4a5,	// (0x0003077f) heading_pane_cp07_ParamLimits

0xa4a5,	// (0x0003077f) heading_pane_cp07

0xe67d,	// (0x00034957) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x00036068) cell_tport_appsw_pane_g

0x5874,	// (0x0002bb4e) input_candi_list_open_g1

0x48e7,	// (0x0002abc1) list_cale_time_pane_g6_ParamLimits

0x48e7,	// (0x0002abc1) list_cale_time_pane_g6

0x73a5,	// (0x0002d67f) aid_size_touch_calib_1_ParamLimits

0x73a5,	// (0x0002d67f) aid_size_touch_calib_1

0x73b7,	// (0x0002d691) aid_size_touch_calib_2_ParamLimits

0x73b7,	// (0x0002d691) aid_size_touch_calib_2

0x73cd,	// (0x0002d6a7) aid_size_touch_calib_3_ParamLimits

0x73cd,	// (0x0002d6a7) aid_size_touch_calib_3

0x73e5,	// (0x0002d6bf) aid_size_touch_calib_4_ParamLimits

0x73e5,	// (0x0002d6bf) aid_size_touch_calib_4

0x73f9,	// (0x0002d6d3) main_touch_calib_button_group_pane_ParamLimits

0x73f9,	// (0x0002d6d3) main_touch_calib_button_group_pane

0x7411,	// (0x0002d6eb) main_touch_calib_pane_g1_ParamLimits

0x7423,	// (0x0002d6fd) main_touch_calib_pane_g2_ParamLimits

0x7435,	// (0x0002d70f) main_touch_calib_pane_g3_ParamLimits

0x7447,	// (0x0002d721) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x00035a23) main_touch_calib_pane_g_ParamLimits

0x7459,	// (0x0002d733) main_touch_calib_pane_t1_ParamLimits

0x7471,	// (0x0002d74b) main_touch_calib_pane_t2_ParamLimits

0x7489,	// (0x0002d763) main_touch_calib_pane_t3_ParamLimits

0x749b,	// (0x0002d775) main_touch_calib_pane_t4_ParamLimits

0x74ad,	// (0x0002d787) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x00035a2c) main_touch_calib_pane_t_ParamLimits

0xc7d4,	// (0x00032aae) list_single_fp_cale_pane_g3_ParamLimits

0xc7d4,	// (0x00032aae) list_single_fp_cale_pane_g3

0xb67d,	// (0x00031957) bg_button_pane_cp012_ParamLimits

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp03_ParamLimits

0x1fac,	// (0x00028286) cell_vitu2_function_top_pane_g1_ParamLimits

0xb67d,	// (0x00031957) bg_vkb2_func_pane_cp04_ParamLimits

0x9706,	// (0x0002f9e0) main_ncimui_button_group_pane_ParamLimits

0x9706,	// (0x0002f9e0) main_ncimui_button_group_pane

0x9764,	// (0x0002fa3e) main_ncimui_pane_t3_ParamLimits

0x9764,	// (0x0002fa3e) main_ncimui_pane_t3

0xe7b3,	// (0x00034a8d) phacti_button_group_pane

0xea20,	// (0x00034cfa) aid_size_list_single_double_ParamLimits

0xa9c3,	// (0x00030c9d) popup_ezdial_listscroll_window_ParamLimits

0xa9d9,	// (0x00030cb3) popup_number_entry_window_cp01_ParamLimits

0xaaa4,	// (0x00030d7e) phacti_button_pane_ParamLimits

0xaaa4,	// (0x00030d7e) phacti_button_pane

0x2135,	// (0x0002840f) bg_button_pane_cp14

0xeb10,	// (0x00034dea) phacti_button_pane_t1

0xaab3,	// (0x00030d8d) main_touch_calib_button_pane_ParamLimits

0xaab3,	// (0x00030d8d) main_touch_calib_button_pane

0x2af5,	// (0x00028dcf) bg_button_pane_cp18_ParamLimits

0x2af5,	// (0x00028dcf) bg_button_pane_cp18

0xaace,	// (0x00030da8) main_touch_calib_button_pane_t1_ParamLimits

0xaace,	// (0x00030da8) main_touch_calib_button_pane_t1

0xaae4,	// (0x00030dbe) main_touch_calib_button_pane_t2_ParamLimits

0xaae4,	// (0x00030dbe) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x00036121) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x00036121) main_touch_calib_button_pane_t

0x2135,	// (0x0002840f) cell_ncimui_button_pane

0x2135,	// (0x0002840f) bg_button_pane_cp032

0xeb1e,	// (0x00034df8) cell_ncimui_button_pane_t1

0xcffb,	// (0x000332d5) image3_infobar_pane_ParamLimits

0xcffb,	// (0x000332d5) image3_infobar_pane

0x9aff,	// (0x0002fdd9) fs_bigclock_status_pane_ParamLimits

0x9aff,	// (0x0002fdd9) fs_bigclock_status_pane

0x9b0c,	// (0x0002fde6) main_fs_bigclock_clock_pane_ParamLimits

0x9b0c,	// (0x0002fde6) main_fs_bigclock_clock_pane

0x9b2e,	// (0x0002fe08) main_fs_bigclock_indi_pane_ParamLimits

0x9b2e,	// (0x0002fe08) main_fs_bigclock_indi_pane

0x9b58,	// (0x0002fe32) main_fs_bigclock_swipe_pane_ParamLimits

0x9b58,	// (0x0002fe32) main_fs_bigclock_swipe_pane

0x2135,	// (0x0002840f) main_fs_clock_dumped_data

0xe190,	// (0x0003446a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe190,	// (0x0003446a) list_single_fs_bigclock_indicator_pane_g1

0xe1aa,	// (0x00034484) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe1aa,	// (0x00034484) list_single_fs_bigclock_indicator_pane_g2

0xe1c4,	// (0x0003449e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1c4,	// (0x0003449e) list_single_fs_bigclock_indicator_pane_g3

0xe1de,	// (0x000344b8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1de,	// (0x000344b8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x00035f4a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x00035f4a) list_single_fs_bigclock_indicator_pane_g

0xe207,	// (0x000344e1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe207,	// (0x000344e1) list_single_fs_bigclock_indicator_pane_t1

0xe22f,	// (0x00034509) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe22f,	// (0x00034509) list_single_fs_bigclock_indicator_pane_t2

0xe257,	// (0x00034531) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe257,	// (0x00034531) list_single_fs_bigclock_indicator_pane_t3

0xe27f,	// (0x00034559) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe27f,	// (0x00034559) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x00035f55) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x00035f55) list_single_fs_bigclock_indicator_pane_t

0xeb2c,	// (0x00034e06) image3_infobar_fav_pane_ParamLimits

0xeb2c,	// (0x00034e06) image3_infobar_fav_pane

0xeb3c,	// (0x00034e16) image3_infobar_loc_pane_ParamLimits

0xeb3c,	// (0x00034e16) image3_infobar_loc_pane

0xeb50,	// (0x00034e2a) image3_infobar_time_pane_ParamLimits

0xeb50,	// (0x00034e2a) image3_infobar_time_pane

0xc431,	// (0x0003270b) image3_infobar_time_pane_g1

0xeb60,	// (0x00034e3a) image3_infobar_time_pane_t1

0xc431,	// (0x0003270b) image3_infobar_loc_pane_g1

0xeb6e,	// (0x00034e48) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x00036126) image3_infobar_loc_pane_g

0xeb76,	// (0x00034e50) image3_infobar_loc_pane_t1

0xc431,	// (0x0003270b) image3_infobar_fav_pane_g1

0xeb84,	// (0x00034e5e) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003612b) image3_infobar_fav_pane_g

0xeb8c,	// (0x00034e66) fs_bigclock_status_battery_pane

0xeb95,	// (0x00034e6f) fs_bigclock_status_signal_pane

0xeb9e,	// (0x00034e78) fs_bigclock_status_title_pane

0xeba7,	// (0x00034e81) fs_bigclock_status_signal_pane_g1

0xebb0,	// (0x00034e8a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x00036130) fs_bigclock_status_signal_pane_g

0xebb8,	// (0x00034e92) fs_bigclock_status_battery_pane_g1

0xebc1,	// (0x00034e9b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x00036135) fs_bigclock_status_battery_pane_g

0xebc9,	// (0x00034ea3) fs_bigclock_status_title_pane_t1

0xab02,	// (0x00030ddc) main_fs_bigclock_clock_pane_g1

0xab14,	// (0x00030dee) main_fs_bigclock_clock_pane_g2

0xab25,	// (0x00030dff) main_fs_bigclock_clock_pane_g3

0xab25,	// (0x00030dff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003613a) main_fs_bigclock_clock_pane_g

0xab38,	// (0x00030e12) main_fs_bigclock_clock_pane_t1

0xab53,	// (0x00030e2d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x00036143) main_fs_bigclock_clock_pane_t

0xebd7,	// (0x00034eb1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebd7,	// (0x00034eb1) list_single_fs_bigclock_indicator_pane

0xebe8,	// (0x00034ec2) list_single_fs_bigclock_pane_ParamLimits

0xebe8,	// (0x00034ec2) list_single_fs_bigclock_pane

0xec0e,	// (0x00034ee8) main_fs_bigclock_indicator_pane_t1

0xec1d,	// (0x00034ef7) list_single_fs_bigclock_pane_g1

0xec25,	// (0x00034eff) list_single_fs_bigclock_pane_t1

0xc431,	// (0x0003270b) main_fs_bigclock_swipe_pane_g1

0xec65,	// (0x00034f3f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x00036154) main_fs_bigclock_swipe_pane_g

0xec6d,	// (0x00034f47) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec6d,	// (0x00034f47) main_fs_bigclock_swipe_pane_t1

0x4cc7,	// (0x0002afa1) call_type_pane_ParamLimits

0x2135,	// (0x0002840f) main_btmg_pane

0xa7e6,	// (0x00030ac0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa7e6,	// (0x00030ac0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x000360c7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x000360c7) list_single_cale_mrui_row_pane_g

0xea7a,	// (0x00034d54) list_recal_vselct_arw_lo_pane

0xea82,	// (0x00034d5c) list_recal_vselct_arw_up_pane

0xea8a,	// (0x00034d64) list_recal_vselct_pane

0xec8a,	// (0x00034f64) btmg_button_pane

0xabb3,	// (0x00030e8d) main_btmg_pane_g1

0x2135,	// (0x0002840f) bg_button_pane_cp044

0xec92,	// (0x00034f6c) btmg_button_pane_t1

0xbf09,	// (0x000321e3) aid_listscroll_gen

0x6d36,	// (0x0002d010) main_cntbar_detail_pane

0xe6a3,	// (0x0003497d) list_cmail_folder_pane

0xe6b3,	// (0x0003498d) sp_fs_scroll_pane_cp03_ParamLimits

0xeca0,	// (0x00034f7a) list_single_fs_dyc_pane_cp01_ParamLimits

0xeca0,	// (0x00034f7a) list_single_fs_dyc_pane_cp01

0xecb6,	// (0x00034f90) aid_size_cmail_indent

0xecbf,	// (0x00034f99) list_single_dyc_row_pane_cp01

0xabe3,	// (0x00030ebd) cntbar_detail_list_pane_ParamLimits

0xabe3,	// (0x00030ebd) cntbar_detail_list_pane

0xac29,	// (0x00030f03) main_cntbar_detail_cont_pane_ParamLimits

0xac29,	// (0x00030f03) main_cntbar_detail_cont_pane

0xac3d,	// (0x00030f17) scroll_pane_cp032_ParamLimits

0xac3d,	// (0x00030f17) scroll_pane_cp032

0xac49,	// (0x00030f23) cntbar_detail_list_event_pane_ParamLimits

0xac49,	// (0x00030f23) cntbar_detail_list_event_pane

0xabf3,	// (0x00030ecd) cntbar_detail_list_shct_pane

0xecc8,	// (0x00034fa2) aid_list_gen

0x2cc5,	// (0x00028f9f) aid_scroll

0xd822,	// (0x00033afc) aid_size_touch_scroll_bar

0xd8eb,	// (0x00033bc5) aid_list_double

0xac5a,	// (0x00030f34) aid_list_single

0xd8e2,	// (0x00033bbc) aid_list_single_lg

0xac63,	// (0x00030f3d) aid_list_z_g_a_sm

0xac6b,	// (0x00030f45) aid_list_z_g_d

0xac73,	// (0x00030f4d) aid_txt_z_prm

0xac81,	// (0x00030f5b) aid_txt_z_prm_cp01

0xac8f,	// (0x00030f69) aid_txt_z_sec

0xac9d,	// (0x00030f77) main_cntbar_detail_cont_pane_g1_ParamLimits

0xac9d,	// (0x00030f77) main_cntbar_detail_cont_pane_g1

0xacb1,	// (0x00030f8b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xacb1,	// (0x00030f8b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x00036159) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x00036159) main_cntbar_detail_cont_pane_g

0xecd1,	// (0x00034fab) main_cntbar_detail_cont_pane_t1

0xecdf,	// (0x00034fb9) main_cntbar_detail_cont_pane_t2

0xeced,	// (0x00034fc7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003615e) main_cntbar_detail_cont_pane_t

0xacc1,	// (0x00030f9b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xacc1,	// (0x00030f9b) cell_cntbar_detail_list_shct_pane

0xecfb,	// (0x00034fd5) cntbar_detail_list_shct_pane_g1

0xed04,	// (0x00034fde) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x00036165) cntbar_detail_list_shct_pane_g

0xacd3,	// (0x00030fad) cntbar_detail_list_event_pane_g1_ParamLimits

0xacd3,	// (0x00030fad) cntbar_detail_list_event_pane_g1

0xacdf,	// (0x00030fb9) cntbar_detail_list_event_pane_g2_ParamLimits

0xacdf,	// (0x00030fb9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003616a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003616a) cntbar_detail_list_event_pane_g

0xad4b,	// (0x00031025) cntbar_detail_list_event_pane_t1_ParamLimits

0xad4b,	// (0x00031025) cntbar_detail_list_event_pane_t1

0xad60,	// (0x0003103a) cntbar_detail_list_event_pane_t2_ParamLimits

0xad60,	// (0x0003103a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x00036177) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x00036177) cntbar_detail_list_event_pane_t

0xc431,	// (0x0003270b) cell_cntbar_detail_list_shct_pane_g1

0x52c5,	// (0x0002b59f) navi_pane_mv_g3

0x6d36,	// (0x0002d010) main_cntbar_detail_pane_ParamLimits

0x2135,	// (0x0002840f) main_notif_wgt_pane

0xcd4f,	// (0x00033029) aid_tch_main_mp4_pane_g4

0xcf71,	// (0x0003324b) popup_slider_window_cp02

0xea70,	// (0x00034d4a) list_recal_day_event_pane

0xabbb,	// (0x00030e95) cntbar_detail_btn_pane_ParamLimits

0xabbb,	// (0x00030e95) cntbar_detail_btn_pane

0xabce,	// (0x00030ea8) cntbar_detail_btn_pane_cp01_ParamLimits

0xabce,	// (0x00030ea8) cntbar_detail_btn_pane_cp01

0xabf3,	// (0x00030ecd) cntbar_detail_list_shct_pane_ParamLimits

0xac03,	// (0x00030edd) cntbar_detail_pane_g1_ParamLimits

0xac03,	// (0x00030edd) cntbar_detail_pane_g1

0xac13,	// (0x00030eed) cntbar_detail_pane_t1_ParamLimits

0xac13,	// (0x00030eed) cntbar_detail_pane_t1

0xaceb,	// (0x00030fc5) cntbar_detail_list_event_pane_g3_ParamLimits

0xaceb,	// (0x00030fc5) cntbar_detail_list_event_pane_g3

0xad03,	// (0x00030fdd) cntbar_detail_list_event_pane_g4_ParamLimits

0xad03,	// (0x00030fdd) cntbar_detail_list_event_pane_g4

0xad1b,	// (0x00030ff5) cntbar_detail_list_event_pane_g5_ParamLimits

0xad1b,	// (0x00030ff5) cntbar_detail_list_event_pane_g5

0xad33,	// (0x0003100d) cntbar_detail_list_event_pane_g6_ParamLimits

0xad33,	// (0x0003100d) cntbar_detail_list_event_pane_g6

0xad75,	// (0x0003104f) cntbar_detail_list_event_pane_t3_ParamLimits

0xad75,	// (0x0003104f) cntbar_detail_list_event_pane_t3

0xad87,	// (0x00031061) popup_notif_wgt_window_ParamLimits

0xad87,	// (0x00031061) popup_notif_wgt_window

0xad9c,	// (0x00031076) popup_submenu_window_cp01_ParamLimits

0xad9c,	// (0x00031076) popup_submenu_window_cp01

0x322e,	// (0x00029508) bg_popup_window_pane_cp10

0xed0d,	// (0x00034fe7) listscroll_notif_wgt_pane

0xed1e,	// (0x00034ff8) list_notif_wgt_window

0xed27,	// (0x00035001) scroll_pane_cp033

0xadac,	// (0x00031086) list_notif_wgt_row_pane_ParamLimits

0xadac,	// (0x00031086) list_notif_wgt_row_pane

0xed30,	// (0x0003500a) aid_size_list_notif_wgt_del

0xed3d,	// (0x00035017) list_notif_wgt_row_pane_g1

0xed49,	// (0x00035023) list_notif_wgt_row_pane_g2

0xed5d,	// (0x00035037) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003617e) list_notif_wgt_row_pane_g

0xed6a,	// (0x00035044) list_notif_wgt_row_pane_t1

0xed80,	// (0x0003505a) list_notif_wgt_row_pane_t2

0xed92,	// (0x0003506c) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x00036185) list_notif_wgt_row_pane_t

0xd52e,	// (0x00033808) list_recal_day_event_pane_g1

0xeda4,	// (0x0003507e) list_recal_day_event_pane_t1

0x2135,	// (0x0002840f) bg_button_pane_cp045

0xadbc,	// (0x00031096) cntbar_detail_btn_pane_t1

0xbf1d,	// (0x000321f7) main_callh_pane_ParamLimits

0xbf1d,	// (0x000321f7) main_callh_pane

0x2135,	// (0x0002840f) main_coverflow0_pane

0x2135,	// (0x0002840f) main_wgtman_pane

0x9b6c,	// (0x0002fe46) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b6c,	// (0x0002fe46) main_fs_bigclock_unlock_btn_pane

0xe675,	// (0x0003494f) bg_button_pane_cp16

0xe685,	// (0x0003495f) cell_tport_appsw_pane_g3

0xadca,	// (0x000310a4) cf0_flow_pane_ParamLimits

0xadca,	// (0x000310a4) cf0_flow_pane

0xedb3,	// (0x0003508d) listscroll_cf0_pane

0xedbc,	// (0x00035096) main_cf0_pane_g1

0xaddf,	// (0x000310b9) main_cf0_pane_t1_ParamLimits

0xaddf,	// (0x000310b9) main_cf0_pane_t1

0xadf4,	// (0x000310ce) main_cf0_pane_t2_ParamLimits

0xadf4,	// (0x000310ce) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x00036191) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x00036191) main_cf0_pane_t

0xedce,	// (0x000350a8) scroll_pane_cp11

0xae09,	// (0x000310e3) cf0_flow_pane_g1

0xae11,	// (0x000310eb) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x00036196) cf0_flow_pane_g

0xae19,	// (0x000310f3) cf0_flow_pane_t1

0x2135,	// (0x0002840f) main_call6_pane

0x2135,	// (0x0002840f) main_calllock_pane

0x20a2,	// (0x0002837c) call6_btn_grp_pane_ParamLimits

0x20a2,	// (0x0002837c) call6_btn_grp_pane

0x20b8,	// (0x00028392) call6_pane_g1_ParamLimits

0x20b8,	// (0x00028392) call6_pane_g1

0x20cb,	// (0x000283a5) popup_call6_1st_window_ParamLimits

0x20cb,	// (0x000283a5) popup_call6_1st_window

0x20da,	// (0x000283b4) popup_call6_2nd_window_ParamLimits

0x20da,	// (0x000283b4) popup_call6_2nd_window

0x20e9,	// (0x000283c3) cell_call6_btn_pane_ParamLimits

0x20e9,	// (0x000283c3) cell_call6_btn_pane

0x322e,	// (0x00029508) bg_popup_call2_in_pane_cp03

0xedd7,	// (0x000350b1) popup_call6_1st_window_g1

0xeddf,	// (0x000350b9) popup_call6_1st_window_g2

0xede7,	// (0x000350c1) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003619b) popup_call6_1st_window_g

0xedef,	// (0x000350c9) popup_call6_1st_window_t1

0xedfe,	// (0x000350d8) popup_call6_1st_window_t2

0xee0c,	// (0x000350e6) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x000361a2) popup_call6_1st_window_t

0x322e,	// (0x00029508) bg_popup_call2_in_pane_cp04

0xedd7,	// (0x000350b1) popup_call6_2nd_window_g1

0xeddf,	// (0x000350b9) popup_call6_2nd_window_g2

0xede7,	// (0x000350c1) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003619b) popup_call6_2nd_window_g

0xedef,	// (0x000350c9) popup_call6_2nd_window_t1

0xb68b,	// (0x00031965) bg_button_pane_cp15

0xee1a,	// (0x000350f4) cell_call6_btn_pane_g1

0xee23,	// (0x000350fd) cell_call6_btn_pane_t1

0xae27,	// (0x00031101) listscroll_wgtman_pane_ParamLimits

0xae27,	// (0x00031101) listscroll_wgtman_pane

0xae48,	// (0x00031122) wgtman_btn_pane_ParamLimits

0xae48,	// (0x00031122) wgtman_btn_pane

0x4f0d,	// (0x0002b1e7) aid_scroll_copy1

0xee32,	// (0x0003510c) list_wgtman_pane

0xae88,	// (0x00031162) wgtman_btn_pane_g1_ParamLimits

0xae88,	// (0x00031162) wgtman_btn_pane_g1

0xaeb4,	// (0x0003118e) wgtman_btn_pane_t1_ParamLimits

0xaeb4,	// (0x0003118e) wgtman_btn_pane_t1

0xee3c,	// (0x00035116) wgtman_btn_pane_t2_ParamLimits

0xee3c,	// (0x00035116) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x000361a9) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x000361a9) wgtman_btn_pane_t

0xaef1,	// (0x000311cb) listrow_wgtman_pane_ParamLimits

0xaef1,	// (0x000311cb) listrow_wgtman_pane

0xaf02,	// (0x000311dc) listrow_wgtman_pane_g1

0xaf0f,	// (0x000311e9) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x000361ae) listrow_wgtman_pane_g

0xaf27,	// (0x00031201) listrow_wgtman_pane_t1

0xaf3f,	// (0x00031219) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x000361b3) listrow_wgtman_pane_t

0xaf65,	// (0x0003123f) wait_bar_pane_cp09

0xee53,	// (0x0003512d) main_calllock_btn_pane

0xee5b,	// (0x00035135) main_calllock_pane_g1

0x2135,	// (0x0002840f) bg_button_pane_cp17

0xee64,	// (0x0003513e) main_calllock_btn_pane_g1

0xee6d,	// (0x00035147) main_calllock_btn_pane_t1

0x2135,	// (0x0002840f) main_dialer3_pane

0x2135,	// (0x0002840f) main_fmrd2_pane

0xc431,	// (0x0003270b) main_fs_bigclock_unlock_btn_pane_g1

0xee84,	// (0x0003515e) main_fs_bigclock_unlock_btn_pane_t1

0xaf77,	// (0x00031251) area_fmrd2_info_pane_ParamLimits

0xaf77,	// (0x00031251) area_fmrd2_info_pane

0xaf86,	// (0x00031260) area_fmrd2_visual_pane_ParamLimits

0xaf86,	// (0x00031260) area_fmrd2_visual_pane

0xaf94,	// (0x0003126e) fmrd2_indi_pane_ParamLimits

0xaf94,	// (0x0003126e) fmrd2_indi_pane

0xafa1,	// (0x0003127b) area_fmrd2_visual_pane_g1

0xafa9,	// (0x00031283) area_fmrd2_visual_pane_t1

0xafb7,	// (0x00031291) area_fmrd2_visual_pane_t2

0xafc5,	// (0x0003129f) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x000361bd) area_fmrd2_visual_pane_t

0xafd3,	// (0x000312ad) area_fmrd2_info_pane_g1

0xafdb,	// (0x000312b5) area_fmrd2_info_pane_t1

0xafe9,	// (0x000312c3) area_fmrd2_info_pane_t2

0xaff7,	// (0x000312d1) area_fmrd2_info_pane_t3

0xb005,	// (0x000312df) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x000361c4) area_fmrd2_info_pane_t

0xb013,	// (0x000312ed) fmrd2_indi_pane_t1

0xb021,	// (0x000312fb) fmrd2_indi_pane_t2

0xb02f,	// (0x00031309) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x000361cd) fmrd2_indi_pane_t

0xe1ed,	// (0x000344c7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1ed,	// (0x000344c7) list_single_fs_bigclock_indicator_pane_g5

0xe29b,	// (0x00034575) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe29b,	// (0x00034575) list_single_fs_bigclock_indicator_pane_t5

0xa6b3,	// (0x0003098d) aid_cell_bcale_month_pane_ParamLimits

0xa6b3,	// (0x0003098d) aid_cell_bcale_month_pane

0xa6d1,	// (0x000309ab) bcale_month_pane_ParamLimits

0xa6d1,	// (0x000309ab) bcale_month_pane

0xa6e9,	// (0x000309c3) bcale_preview_pane_ParamLimits

0xa6e9,	// (0x000309c3) bcale_preview_pane

0xec25,	// (0x00034eff) list_single_fs_bigclock_pane_t1_ParamLimits

0xec41,	// (0x00034f1b) list_single_fs_bigclock_pane_t2_ParamLimits

0xec41,	// (0x00034f1b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003614f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003614f) list_single_fs_bigclock_pane_t

0xee7c,	// (0x00035156) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x000361b8) main_fs_bigclock_unlock_btn_pane_g

0xb03d,	// (0x00031317) aid_dia3_key_size_ParamLimits

0xb03d,	// (0x00031317) aid_dia3_key_size

0xb04c,	// (0x00031326) aid_dia3_listrow_size_ParamLimits

0xb04c,	// (0x00031326) aid_dia3_listrow_size

0xb05f,	// (0x00031339) dia3_keypad_fun_pane_ParamLimits

0xb05f,	// (0x00031339) dia3_keypad_fun_pane

0xb073,	// (0x0003134d) dia3_keypad_num_pane_ParamLimits

0xb073,	// (0x0003134d) dia3_keypad_num_pane

0xb084,	// (0x0003135e) dia3_listscroll_pane_ParamLimits

0xb084,	// (0x0003135e) dia3_listscroll_pane

0xb095,	// (0x0003136f) dia3_numentry_pane_ParamLimits

0xb095,	// (0x0003136f) dia3_numentry_pane

0xee92,	// (0x0003516c) dia3_list_pane

0xee9b,	// (0x00035175) scroll_pane_cp12

0x2135,	// (0x0002840f) bg_dia3_numentry_pane

0xb0a7,	// (0x00031381) dia3_numentry_pane_t1

0xb0b6,	// (0x00031390) cell_dia3_key_num_pane

0xb0be,	// (0x00031398) cell_dia3_key0_fun_pane_ParamLimits

0xb0be,	// (0x00031398) cell_dia3_key0_fun_pane

0xb0d2,	// (0x000313ac) cell_dia3_key1_fun_pane_ParamLimits

0xb0d2,	// (0x000313ac) cell_dia3_key1_fun_pane

0xb0e9,	// (0x000313c3) dia3_listrow_pane

0xdeee,	// (0x000341c8) bg_dia3_numentry_pane_g1

0x2135,	// (0x0002840f) bg_button_pane_cp21

0xeea4,	// (0x0003517e) cell_dia3_key_num_pane_t1

0xeeb2,	// (0x0003518c) cell_dia3_key_num_pane_t2

0xeec1,	// (0x0003519b) cell_dia3_key_num_pane_t3

0xeed0,	// (0x000351aa) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x000361d4) cell_dia3_key_num_pane_t

0x2135,	// (0x0002840f) bg_button_pane_cp19

0xeedf,	// (0x000351b9) cell_dia3_key0_fun_pane_g1

0x2135,	// (0x0002840f) bg_button_pane_cp20

0xb0fb,	// (0x000313d5) cell_dia3_key1_fun_pane_g1

0xb103,	// (0x000313dd) area_left_week_number_pane

0xb10f,	// (0x000313e9) area_top_day_name_pane

0xb120,	// (0x000313fa) frame_month_view_pane

0xeee7,	// (0x000351c1) grid_month_view_pane

0xb131,	// (0x0003140b) cell_top_day_name_pane_ParamLimits

0xb131,	// (0x0003140b) cell_top_day_name_pane

0xb154,	// (0x0003142e) cell_area_left_week_number_pane_ParamLimits

0xb154,	// (0x0003142e) cell_area_left_week_number_pane

0xb168,	// (0x00031442) cell_month_view_pane_ParamLimits

0xb168,	// (0x00031442) cell_month_view_pane

0xeef5,	// (0x000351cf) frm_month_g1

0xb18d,	// (0x00031467) frm_month_g2

0xb19e,	// (0x00031478) frm_month_g3

0xb1af,	// (0x00031489) frm_month_g4

0xb1c0,	// (0x0003149a) frm_month_g5

0xb1d1,	// (0x000314ab) frm_month_g6

0xb1e2,	// (0x000314bc) frm_month_g7

0xef02,	// (0x000351dc) frm_month_g8

0xb1f3,	// (0x000314cd) frm_month_g9

0xb203,	// (0x000314dd) frm_month_g10

0xb213,	// (0x000314ed) frm_month_g11

0xb223,	// (0x000314fd) frm_month_g12

0xb233,	// (0x0003150d) frm_month_g13

0xb243,	// (0x0003151d) frm_month_g14

0xb253,	// (0x0003152d) frm_month_g15

0xb265,	// (0x0003153f) frm_month_g16

0x000f,

0xff03,	// (0x000361dd) frm_month_g

0xef0f,	// (0x000351e9) cell_top_day_name_pane_t1

0xb277,	// (0x00031551) cell_area_left_week_number_pane_g1

0xb283,	// (0x0003155d) cell_area_left_week_number_pane_t1

0xc660,	// (0x0003293a) cell_month_view_pane_g1

0xb296,	// (0x00031570) cell_month_view_pane_t1

0x2135,	// (0x0002840f) main_fps_pane

0xe47f,	// (0x00034759) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe47f,	// (0x00034759) cmail_ddmenu_btn02_pane_cp1

0xe49b,	// (0x00034775) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe49b,	// (0x00034775) cmail_ddmenu_btn02_pane_cp2

0xaa09,	// (0x00030ce3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xaa09,	// (0x00030ce3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x00036102) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x00036102) cmail_ddmenu_btn02_pane_g

0xaa27,	// (0x00030d01) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xaa27,	// (0x00030d01) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x00036107) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x00036107) cmail_ddmenu_btn02_pane_t

0xb2a9,	// (0x00031583) fps_text_pane_ParamLimits

0xb2a9,	// (0x00031583) fps_text_pane

0xb2bf,	// (0x00031599) main_fps_pane_g1_ParamLimits

0xb2bf,	// (0x00031599) main_fps_pane_g1

0xb2d5,	// (0x000315af) wait_bar_pane_cp010_ParamLimits

0xb2d5,	// (0x000315af) wait_bar_pane_cp010

0xb2e6,	// (0x000315c0) fps_text_pane_t1_ParamLimits

0xb2e6,	// (0x000315c0) fps_text_pane_t1

0xd0fc,	// (0x000333d6) cam4_image_uncrop_pane_g1

0xd105,	// (0x000333df) cam4_image_uncrop_pane_g2

0x8309,	// (0x0002e5e3) cam4_image_uncrop_pane_g3

0x8312,	// (0x0002e5ec) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x00035bc4) cam4_image_uncrop_pane_g

0xb0e9,	// (0x000313c3) dia3_listrow_pane_ParamLimits

0x2135,	// (0x0002840f) main_phob2_pane

0xa504,	// (0x000307de) cell_tport_appsw_pane_cp02_ParamLimits

0xa504,	// (0x000307de) cell_tport_appsw_pane_cp02

0xa514,	// (0x000307ee) cell_tport_appsw_pane_cp03_ParamLimits

0xa514,	// (0x000307ee) cell_tport_appsw_pane_cp03

0x2135,	// (0x0002840f) phob2_contact_card_pane

0x2135,	// (0x0002840f) phob2_listscroll_pane

0xef22,	// (0x000351fc) phob2_list_pane

0xef2a,	// (0x00035204) scroll_pane_cp034

0xb2fe,	// (0x000315d8) phob2_cc_data_pane_ParamLimits

0xb2fe,	// (0x000315d8) phob2_cc_data_pane

0xb31b,	// (0x000315f5) phob2_cc_listscroll_pane_ParamLimits

0xb31b,	// (0x000315f5) phob2_cc_listscroll_pane

0xaef1,	// (0x000311cb) list_double_large_graphic_phob2_pane_ParamLimits

0xaef1,	// (0x000311cb) list_double_large_graphic_phob2_pane

0xb337,	// (0x00031611) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb337,	// (0x00031611) list_double_large_graphic_phob2_pane_g1

0xb34d,	// (0x00031627) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb34d,	// (0x00031627) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x000361fe) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x000361fe) list_double_large_graphic_phob2_pane_g

0xb359,	// (0x00031633) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb359,	// (0x00031633) list_double_large_graphic_phob2_pane_t1

0xb36f,	// (0x00031649) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb36f,	// (0x00031649) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x00036203) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x00036203) list_double_large_graphic_phob2_pane_t

0x2135,	// (0x0002840f) list_highlight_pane_cp024

0xb384,	// (0x0003165e) phob2_cc_button_pane

0xb38c,	// (0x00031666) phob2_cc_data_pane_g1_ParamLimits

0xb38c,	// (0x00031666) phob2_cc_data_pane_g1

0xb3a1,	// (0x0003167b) phob2_cc_data_pane_g2_ParamLimits

0xb3a1,	// (0x0003167b) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x00036208) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x00036208) phob2_cc_data_pane_g

0xb3b1,	// (0x0003168b) phob2_cc_data_pane_t1_ParamLimits

0xb3b1,	// (0x0003168b) phob2_cc_data_pane_t1

0xb3c9,	// (0x000316a3) phob2_cc_data_pane_t2_ParamLimits

0xb3c9,	// (0x000316a3) phob2_cc_data_pane_t2

0xb3e1,	// (0x000316bb) phob2_cc_data_pane_t3_ParamLimits

0xb3e1,	// (0x000316bb) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003620d) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003620d) phob2_cc_data_pane_t

0xef32,	// (0x0003520c) phob2_cc_list_pane_ParamLimits

0xef32,	// (0x0003520c) phob2_cc_list_pane

0xde0b,	// (0x000340e5) scroll_pane_cp035_ParamLimits

0xde0b,	// (0x000340e5) scroll_pane_cp035

0x6d36,	// (0x0002d010) bg_button_pane_cp033

0xef3e,	// (0x00035218) phob2_cc_button_pane_g1

0xef4a,	// (0x00035224) phob2_cc_button_pane_t1

0xef5f,	// (0x00035239) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x00036214) phob2_cc_button_pane_t

0xb3f9,	// (0x000316d3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb3f9,	// (0x000316d3) list_double_large_graphic_phob2_cc_pane

0xb427,	// (0x00031701) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb427,	// (0x00031701) list_double_large_graphic_phob2_cc_pane_g1

0xb433,	// (0x0003170d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb433,	// (0x0003170d) list_double_large_graphic_phob2_cc_pane_g2

0xb43f,	// (0x00031719) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb43f,	// (0x00031719) list_double_large_graphic_phob2_cc_pane_g3

0xb44b,	// (0x00031725) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb44b,	// (0x00031725) list_double_large_graphic_phob2_cc_pane_g4

0xb457,	// (0x00031731) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb457,	// (0x00031731) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x00036219) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x00036219) list_double_large_graphic_phob2_cc_pane_g

0xb463,	// (0x0003173d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb463,	// (0x0003173d) list_double_large_graphic_phob2_cc_pane_t1

0xb48c,	// (0x00031766) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb48c,	// (0x00031766) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x00036224) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x00036224) list_double_large_graphic_phob2_cc_pane_t

0xef71,	// (0x0003524b) list_highlight_pane_cp025_ParamLimits

0xef71,	// (0x0003524b) list_highlight_pane_cp025

0x6d36,	// (0x0002d010) bg_button_pane_cp033_ParamLimits

0xef3e,	// (0x00035218) phob2_cc_button_pane_g1_ParamLimits

0xef4a,	// (0x00035224) phob2_cc_button_pane_t1_ParamLimits

0xef5f,	// (0x00035239) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x00036214) phob2_cc_button_pane_t_ParamLimits

0x2172,	// (0x0002844c) popup_wgtman_window

0xdf0e,	// (0x000341e8) scroll_pane_cp038

0xae6a,	// (0x00031144) wgtman_btn_pane_cp_01_ParamLimits

0xae6a,	// (0x00031144) wgtman_btn_pane_cp_01

0xef7f,	// (0x00035259) wgtman_content_pane

0xef88,	// (0x00035262) wgtman_heading_pane

0x2135,	// (0x0002840f) bg_heading_pane_cp02

0xef91,	// (0x0003526b) wgtman_heading_pane_g1

0xef99,	// (0x00035273) wgtman_heading_pane_t1

0xefa7,	// (0x00035281) scroll_pane_cp036

0xefaf,	// (0x00035289) wgtman_list_pane

0xefb7,	// (0x00035291) wgtman_list_pane_t1_ParamLimits

0xefb7,	// (0x00035291) wgtman_list_pane_t1

0xd0ea,	// (0x000333c4) cam4_grid_pane

0x8af6,	// (0x0002edd0) bg_button_pane_cp015_ParamLimits

0x8b06,	// (0x0002ede0) bg_button_pane_cp016_ParamLimits

0x8b18,	// (0x0002edf2) bg_button_pane_cp017_ParamLimits

0x8b68,	// (0x0002ee42) popup_vitu2_query_window_g3_ParamLimits

0x8b68,	// (0x0002ee42) popup_vitu2_query_window_g3

0x8c1b,	// (0x0002eef5) popup_vitu2_query_window_t6_ParamLimits

0x8c1b,	// (0x0002eef5) popup_vitu2_query_window_t6

0x8c46,	// (0x0002ef20) popup_vitu2_query_window_t7_ParamLimits

0x8c46,	// (0x0002ef20) popup_vitu2_query_window_t7

0xd0fc,	// (0x000333d6) cam4_grid_pane_g1

0xd105,	// (0x000333df) cam4_grid_pane_g2

0xefce,	// (0x000352a8) cam4_grid_pane_g3

0xefd7,	// (0x000352b1) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x00036229) cam4_grid_pane_g

0x3745,	// (0x00029a1f) aid_placing_vt_slider_lsc_ParamLimits

0x3a03,	// (0x00029cdd) vidtel_button_pane_ParamLimits

0x3a03,	// (0x00029cdd) vidtel_button_pane

0x2135,	// (0x0002840f) bg_button_pane_cp034

0xb4b5,	// (0x0003178f) vidtel_button_pane_g1

0xb4bd,	// (0x00031797) vidtel_button_pane_t1

0xd4a2,	// (0x0003377c) aid_size_vtel_slider_touch

0xde0b,	// (0x000340e5) scroll_pane_cp039

0xdf3d,	// (0x00034217) ncim_query_button_pane_cp01_ParamLimits

0xdf5c,	// (0x00034236) ncimui_query_pane_g1_ParamLimits

0x6d36,	// (0x0002d010) input_focus_pane_cp012_ParamLimits

0xdf81,	// (0x0003425b) ncim_query_entry_pane_t1_ParamLimits

0xde0b,	// (0x000340e5) scroll_pane_cp039_ParamLimits

0x51c3,	// (0x0002b49d) navi_pane_bcale_mc_g1

0x51cb,	// (0x0002b4a5) navi_pane_bcale_mc_t1

0xe4cf,	// (0x000347a9) main_sp_fs_email_pane_g1

0xe4db,	// (0x000347b5) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00035fbf) main_sp_fs_email_pane_g

0xe96c,	// (0x00034c46) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe96c,	// (0x00034c46) list_single_cale_mrui_row_pane_g3

0xaa47,	// (0x00030d21) list_single_recal_day_pane_g5_event_pane

0xead5,	// (0x00034daf) list_single_recal_day_pane_g7

0xefe0,	// (0x000352ba) list_recal_day_event_pane_cp01

0xefe9,	// (0x000352c3) list_recal_vselct_arw_lo_pane_cp01

0xeff1,	// (0x000352cb) list_recal_vselct_arw_up_pane_cp01

0xeff9,	// (0x000352d3) list_recal_vselct_pane_cp01

0xd52e,	// (0x00033808) list_recal_day_event_pane_cp01_g1

0xf003,	// (0x000352dd) list_recal_day_event_pane_cp01_t1

0xeadd,	// (0x00034db7) list_single_recal_day_pane_t1_ParamLimits

0xaa5d,	// (0x00030d37) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x00036117) list_single_recal_day_pane_t_ParamLimits

0x283e,	// (0x00028b18) bg_notes_pane_ParamLimits

0x2abd,	// (0x00028d97) list_notes_pane_ParamLimits

0x2acb,	// (0x00028da5) scroll_pane_cp06_ParamLimits

0x2af5,	// (0x00028dcf) main_notes_pane_ParamLimits

0x6d36,	// (0x0002d010) main_welc_pane

0xb4e6,	// (0x000317c0) main_welc_body_pane_ParamLimits

0xb4e6,	// (0x000317c0) main_welc_body_pane

0xb502,	// (0x000317dc) main_welc_opti_pane_ParamLimits

0xb502,	// (0x000317dc) main_welc_opti_pane

0xb54e,	// (0x00031828) main_welc_pane_t1_ParamLimits

0xb54e,	// (0x00031828) main_welc_pane_t1

0xb5b4,	// (0x0003188e) main_welc_body_row_pane_ParamLimits

0xb5b4,	// (0x0003188e) main_welc_body_row_pane

0xf011,	// (0x000352eb) main_welc_opti_row_pane_ParamLimits

0xf011,	// (0x000352eb) main_welc_opti_row_pane

0xf01f,	// (0x000352f9) main_welc_opti_row_pane_g1

0xb5c7,	// (0x000318a1) main_welc_opti_row_pane_t1

0xf027,	// (0x00035301) main_welc_body_row_pane_t1

0xed16,	// (0x00034ff0) popup_notif_wgt_heading_pane

0xed30,	// (0x0003500a) aid_size_list_notif_wgt_del_ParamLimits

0xed3d,	// (0x00035017) list_notif_wgt_row_pane_g1_ParamLimits

0xed49,	// (0x00035023) list_notif_wgt_row_pane_g2_ParamLimits

0xed5d,	// (0x00035037) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003617e) list_notif_wgt_row_pane_g_ParamLimits

0xed6a,	// (0x00035044) list_notif_wgt_row_pane_t1_ParamLimits

0xed80,	// (0x0003505a) list_notif_wgt_row_pane_t2_ParamLimits

0xed92,	// (0x0003506c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x00036185) list_notif_wgt_row_pane_t_ParamLimits

0xaf02,	// (0x000311dc) listrow_wgtman_pane_g1_ParamLimits

0xaf0f,	// (0x000311e9) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x000361ae) listrow_wgtman_pane_g_ParamLimits

0xaf27,	// (0x00031201) listrow_wgtman_pane_t1_ParamLimits

0xaf3f,	// (0x00031219) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x000361b3) listrow_wgtman_pane_t_ParamLimits

0xaf65,	// (0x0003123f) wait_bar_pane_cp09_ParamLimits

0x2135,	// (0x0002840f) bg_popup_heading_pane_cp02

0xf036,	// (0x00035310) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x00035318) popup_notif_wgt_heading_pane_t1

0xbf2b,	// (0x00032205) main_vids_pane

0x2135,	// (0x0002840f) vids_listscroll_pane

0xb5d6,	// (0x000318b0) scroll_pane_cp040

0x2135,	// (0x0002840f) vids_list_pane

0xb5e1,	// (0x000318bb) vids_list_double_pane_ParamLimits

0xb5e1,	// (0x000318bb) vids_list_double_pane

0xb5ee,	// (0x000318c8) vids_list_double_pane_g1

0xb5f7,	// (0x000318d1) vids_list_double_pane_t1

0xb607,	// (0x000318e1) vids_list_double_pane_t2

0x0001,

0xff66,	// (0x00036240) vids_list_double_pane_t

0xb67d,	// (0x00031957) main_ncimui_pane_ParamLimits

0x9718,	// (0x0002f9f2) main_ncimui_pane_g1_ParamLimits

0x9724,	// (0x0002f9fe) main_ncimui_pane_g2_ParamLimits

0x9724,	// (0x0002f9fe) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x00035ec0) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x00035ec0) main_ncimui_pane_g

0xb519,	// (0x000317f3) main_welc_pane_g1_ParamLimits

0xb519,	// (0x000317f3) main_welc_pane_g1

0xb52c,	// (0x00031806) main_welc_pane_g2_ParamLimits

0xb52c,	// (0x00031806) main_welc_pane_g2

0x0002,

0xff58,	// (0x00036232) main_welc_pane_g_ParamLimits

0xff58,	// (0x00036232) main_welc_pane_g

0x283e,	// (0x00028b18) listscroll_mce_pane_ParamLimits

0x5343,	// (0x0002b61d) wait_bar_pane_cp10

0xbf11,	// (0x000321eb) main_cale_day_pane_ParamLimits

0xbf11,	// (0x000321eb) main_cale_week_pane_ParamLimits

0x283e,	// (0x00028b18) main_messa_pane_ParamLimits

0x7c71,	// (0x0002df4b) main_clock2_btn_pane_ParamLimits

0x7c71,	// (0x0002df4b) main_clock2_btn_pane

0xc85c,	// (0x00032b36) main_clock2_btn_pane_cp01_ParamLimits

0xc85c,	// (0x00032b36) main_clock2_btn_pane_cp01

0xe927,	// (0x00034c01) list_cale_mrui_pane_ParamLimits

0xedc6,	// (0x000350a0) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003618c) main_cf0_pane_g

0xb103,	// (0x000313dd) area_left_week_number_pane_ParamLimits

0xb10f,	// (0x000313e9) area_top_day_name_pane_ParamLimits

0xb120,	// (0x000313fa) frame_month_view_pane_ParamLimits

0xeee7,	// (0x000351c1) grid_month_view_pane_ParamLimits

0xeef5,	// (0x000351cf) frm_month_g1_ParamLimits

0xb18d,	// (0x00031467) frm_month_g2_ParamLimits

0xb19e,	// (0x00031478) frm_month_g3_ParamLimits

0xb1af,	// (0x00031489) frm_month_g4_ParamLimits

0xb1c0,	// (0x0003149a) frm_month_g5_ParamLimits

0xb1d1,	// (0x000314ab) frm_month_g6_ParamLimits

0xb1e2,	// (0x000314bc) frm_month_g7_ParamLimits

0xef02,	// (0x000351dc) frm_month_g8_ParamLimits

0xb1f3,	// (0x000314cd) frm_month_g9_ParamLimits

0xb203,	// (0x000314dd) frm_month_g10_ParamLimits

0xb213,	// (0x000314ed) frm_month_g11_ParamLimits

0xb223,	// (0x000314fd) frm_month_g12_ParamLimits

0xb233,	// (0x0003150d) frm_month_g13_ParamLimits

0xb243,	// (0x0003151d) frm_month_g14_ParamLimits

0xb253,	// (0x0003152d) frm_month_g15_ParamLimits

0xb265,	// (0x0003153f) frm_month_g16_ParamLimits

0xff03,	// (0x000361dd) frm_month_g_ParamLimits

0xef0f,	// (0x000351e9) cell_top_day_name_pane_t1_ParamLimits

0xb277,	// (0x00031551) cell_area_left_week_number_pane_g1_ParamLimits

0xb283,	// (0x0003155d) cell_area_left_week_number_pane_t1_ParamLimits

0xc660,	// (0x0003293a) cell_month_view_pane_g1_ParamLimits

0xb296,	// (0x00031570) cell_month_view_pane_t1_ParamLimits

0x2836,	// (0x00028b10) main_clock2_btn_pane_g1

0xf04c,	// (0x00035326) main_clock2_btn_pane_t1

0x6d36,	// (0x0002d010) listscroll_cmail_pane_ParamLimits

0xe4cf,	// (0x000347a9) main_sp_fs_email_pane_g1_ParamLimits

0xe4db,	// (0x000347b5) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00035fbf) main_sp_fs_email_pane_g_ParamLimits

0xea51,	// (0x00034d2b) list_recal_day_pane_ParamLimits

0xea62,	// (0x00034d3c) mian_recal_day_pane_t1

0xa229,	// (0x00030503) list_single_dyc_row_text_pane_t4_ParamLimits

0xa229,	// (0x00030503) list_single_dyc_row_text_pane_t4

0xa260,	// (0x0003053a) list_single_dyc_row_text_pane_t5_ParamLimits

0xa260,	// (0x0003053a) list_single_dyc_row_text_pane_t5

0xe545,	// (0x0003481f) list_single_dyc_row_text_pane_t6_ParamLimits

0xe545,	// (0x0003481f) list_single_dyc_row_text_pane_t6

0x488d,	// (0x0002ab67) aid_mgn_list_cale_time_pane

0xb67d,	// (0x00031957) main_gallery2_pane_ParamLimits

0xc870,	// (0x00032b4a) main_clock2_pane_cp01_t1

0xc87e,	// (0x00032b58) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x00035a96) main_clock2_pane_cp01_t

0x2f40,	// (0x0002921a) cale_week_scroll_pane_g16_ParamLimits

0x2f40,	// (0x0002921a) cale_week_scroll_pane_g16

0x322e,	// (0x00029508) vorec_slider_pane

0xb4bd,	// (0x00031797) vidtel_button_pane_t1_ParamLimits

0xab02,	// (0x00030ddc) main_fs_bigclock_clock_pane_g1_ParamLimits

0xab14,	// (0x00030dee) main_fs_bigclock_clock_pane_g2_ParamLimits

0xab25,	// (0x00030dff) main_fs_bigclock_clock_pane_g3_ParamLimits

0xab25,	// (0x00030dff) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0003613a) main_fs_bigclock_clock_pane_g_ParamLimits

0xab38,	// (0x00030e12) main_fs_bigclock_clock_pane_t1_ParamLimits

0xab53,	// (0x00030e2d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x00036143) main_fs_bigclock_clock_pane_t_ParamLimits

0x74f7,	// (0x0002d7d1) main_mup3_lyrics_pane_ParamLimits

0x74f7,	// (0x0002d7d1) main_mup3_lyrics_pane

0xb615,	// (0x000318ef) main_mup3_lyrics_pane_t1_ParamLimits

0xb615,	// (0x000318ef) main_mup3_lyrics_pane_t1

0xcd47,	// (0x00033021) aid_main_mp4_pane_t1_area

0xcd47,	// (0x00033021) aid_main_mp4_pane_t2_area

0xcdef,	// (0x000330c9) main_mp4_pane_g7_ParamLimits

0xcdef,	// (0x000330c9) main_mp4_pane_g7

0xcdfb,	// (0x000330d5) main_mp4_pane_g8_ParamLimits

0xcdfb,	// (0x000330d5) main_mp4_pane_g8

0x82c3,	// (0x0002e59d) aid_call6_pane_g1_size

0xb413,	// (0x000316ed) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb413,	// (0x000316ed) list_double_large_graphic_phob2_other_pane

0x4f49,	// (0x0002b223) list_double_large_graphic_phob2_other_pane_g1

0x2135,	// (0x0002840f) list_highlight_pane_cp026

0x6d36,	// (0x0002d010) main_welc_pane_ParamLimits

0x9f1c,	// (0x000301f6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9f1c,	// (0x000301f6) main_sp_fs_ctrlbar_pane_g3

0x9f34,	// (0x0003020e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9f34,	// (0x0003020e) main_sp_fs_ctrlbar_pane_g4

0x9f76,	// (0x00030250) toolbar2_fixed_button_pane_cp01

0x9f81,	// (0x0003025b) toolbar2_fixed_button_pane_cp02

0x9f8c,	// (0x00030266) toolbar2_fixed_button_pane_cp03

0xb4d3,	// (0x000317ad) list_welc_entry_pane_ParamLimits

0xb4d3,	// (0x000317ad) list_welc_entry_pane

0xb53f,	// (0x00031819) main_welc_pane_g3_ParamLimits

0xb53f,	// (0x00031819) main_welc_pane_g3

0xb568,	// (0x00031842) main_welc_pane_t2_ParamLimits

0xb568,	// (0x00031842) main_welc_pane_t2

0xb57e,	// (0x00031858) main_welc_pane_t3_ParamLimits

0xb57e,	// (0x00031858) main_welc_pane_t3

0x0002,

0xff5f,	// (0x00036239) main_welc_pane_t_ParamLimits

0xff5f,	// (0x00036239) main_welc_pane_t

0xb593,	// (0x0003186d) welc_button_pane_ParamLimits

0xb593,	// (0x0003186d) welc_button_pane

0xb5a4,	// (0x0003187e) welc_service_logo_pane_ParamLimits

0xb5a4,	// (0x0003187e) welc_service_logo_pane

0xf05a,	// (0x00035334) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x00035334) list_single_welc_entry_pane

0xf06b,	// (0x00035345) list_single_welc_entry_pane_g1

0xf073,	// (0x0003534d) list_single_welc_entry_pane_t1

0xf081,	// (0x0003535b) list_single_welc_entry_pane_t2

0x0001,

0xff6b,	// (0x00036245) list_single_welc_entry_pane_t

0x2135,	// (0x0002840f) bg_button_pane_cp035

0xf08f,	// (0x00035369) welc_button_pane_t1

0xf09d,	// (0x00035377) welc_service_logo_pane_g1

0xf0a6,	// (0x00035380) welc_service_logo_pane_g2

0x0001,

0xff70,	// (0x0003624a) welc_service_logo_pane_g
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
