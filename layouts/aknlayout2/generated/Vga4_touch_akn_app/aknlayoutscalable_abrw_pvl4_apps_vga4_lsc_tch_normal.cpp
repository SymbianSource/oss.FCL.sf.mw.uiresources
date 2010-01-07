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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00025a5b };

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
0x1e74,	// (0x000278cf) Screen

0x1e80,	// (0x000278db) application_window

0x1eea,	// (0x00027945) area_bottom_pane_ParamLimits

0x1eea,	// (0x00027945) area_bottom_pane

0x1f48,	// (0x000279a3) area_top_pane_ParamLimits

0x1f48,	// (0x000279a3) area_top_pane

0x1fa5,	// (0x00027a00) call_video_uplink_pane_ParamLimits

0x1fa5,	// (0x00027a00) call_video_uplink_pane

0x1fd6,	// (0x00027a31) main_pane_ParamLimits

0x1fd6,	// (0x00027a31) main_pane

0xbd78,	// (0x000317d3) context_pane

0x690d,	// (0x0002c368) navi_pane

0x693d,	// (0x0002c398) popup_cale_events_window_ParamLimits

0x693d,	// (0x0002c398) popup_cale_events_window

0xbd8b,	// (0x000317e6) popup_mup_playback_window

0x6955,	// (0x0002c3b0) signal_pane

0x2b15,	// (0x00028570) main_browser_pane

0x503d,	// (0x0002aa98) main_burst_pane

0x660f,	// (0x0002c06a) main_calc_pane

0x503d,	// (0x0002aa98) main_cale_day_pane

0x2b15,	// (0x00028570) main_cale_month_pane

0x503d,	// (0x0002aa98) main_cale_week_pane

0x503d,	// (0x0002aa98) main_call_pane

0x25e4,	// (0x0002803f) main_call_poc_pane

0x503d,	// (0x0002aa98) main_camera_pane

0x503d,	// (0x0002aa98) main_chi_dic_pane

0x4b96,	// (0x0002a5f1) main_clock_pane

0x25e4,	// (0x0002803f) main_fmradio_pane

0x503d,	// (0x0002aa98) main_graph_messa_pane

0x25e4,	// (0x0002803f) main_help_pane

0x2b15,	// (0x00028570) main_im_pane

0x283f,	// (0x0002829a) main_image_pane_ParamLimits

0x283f,	// (0x0002829a) main_image_pane

0x25e4,	// (0x0002803f) main_location2_pane

0x503d,	// (0x0002aa98) main_location_pane

0x25e4,	// (0x0002803f) main_messa_pane

0x25e4,	// (0x0002803f) main_mp2_pane

0x503d,	// (0x0002aa98) main_mp_pane

0x25e4,	// (0x0002803f) main_msg_pane

0x25e4,	// (0x0002803f) main_mup_eq_pane

0x25e4,	// (0x0002803f) main_mup_pane

0x503d,	// (0x0002aa98) main_notes_pane

0x25e4,	// (0x0002803f) main_pec_pane

0x25e4,	// (0x0002803f) main_phob_pane

0x25e4,	// (0x0002803f) main_pinb_pane

0x25e4,	// (0x0002803f) main_postcard_pane

0x25e4,	// (0x0002803f) main_qdial_pane

0x503d,	// (0x0002aa98) main_skin_pane

0x25e4,	// (0x0002803f) main_smil2_pane

0x503d,	// (0x0002aa98) main_smil_pane

0x503d,	// (0x0002aa98) main_video_pane

0x503d,	// (0x0002aa98) main_video_tele_pane

0x283f,	// (0x0002829a) main_viewer_pane_ParamLimits

0x283f,	// (0x0002829a) main_viewer_pane

0x503d,	// (0x0002aa98) main_vorec_pane

0x6665,	// (0x0002c0c0) popup_blid_sat_info_window_ParamLimits

0x6665,	// (0x0002c0c0) popup_blid_sat_info_window

0x66c9,	// (0x0002c124) popup_dyc_status_message_window_ParamLimits

0x66c9,	// (0x0002c124) popup_dyc_status_message_window

0x66e3,	// (0x0002c13e) popup_grid_large_graphic_window_ParamLimits

0x66e3,	// (0x0002c13e) popup_grid_large_graphic_window

0x67a5,	// (0x0002c200) popup_loc_request_window_ParamLimits

0x67a5,	// (0x0002c200) popup_loc_request_window

0x68e1,	// (0x0002c33c) popup_wml_address_window_ParamLimits

0x68e1,	// (0x0002c33c) popup_wml_address_window

0x644d,	// (0x0002bea8) call_muted_g1

0x5e53,	// (0x0002b8ae) popup_call_audio_conf_window_ParamLimits

0x5e53,	// (0x0002b8ae) popup_call_audio_conf_window

0x645d,	// (0x0002beb8) popup_call_audio_first_window_ParamLimits

0x645d,	// (0x0002beb8) popup_call_audio_first_window

0x64d3,	// (0x0002bf2e) popup_call_audio_in_window_ParamLimits

0x64d3,	// (0x0002bf2e) popup_call_audio_in_window

0x650f,	// (0x0002bf6a) popup_call_audio_out_window_ParamLimits

0x650f,	// (0x0002bf6a) popup_call_audio_out_window

0x6549,	// (0x0002bfa4) popup_call_audio_second_window_ParamLimits

0x6549,	// (0x0002bfa4) popup_call_audio_second_window

0x659f,	// (0x0002bffa) popup_call_audio_wait_window_ParamLimits

0x659f,	// (0x0002bffa) popup_call_audio_wait_window

0x65d4,	// (0x0002c02f) popup_number_entry_window_ParamLimits

0x65d4,	// (0x0002c02f) popup_number_entry_window

0x2178,	// (0x00027bd3) bg_popup_call_pane_cp05_ParamLimits

0x2178,	// (0x00027bd3) bg_popup_call_pane_cp05

0x2198,	// (0x00027bf3) popup_number_entry_window_t1

0x21ab,	// (0x00027c06) popup_number_entry_window_t2

0x21bd,	// (0x00027c18) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00034b56) popup_number_entry_window_t

0x2204,	// (0x00027c5f) text_title_cp2

0x2217,	// (0x00027c72) bg_popup_call_pane_cp_ParamLimits

0x2217,	// (0x00027c72) bg_popup_call_pane_cp

0x2225,	// (0x00027c80) call_thumbnail_pane

0x222d,	// (0x00027c88) popup_call_audio_in_window_g1_ParamLimits

0x222d,	// (0x00027c88) popup_call_audio_in_window_g1

0x2239,	// (0x00027c94) popup_call_audio_in_window_g2_ParamLimits

0x2239,	// (0x00027c94) popup_call_audio_in_window_g2

0x2245,	// (0x00027ca0) popup_call_audio_in_window_g3_ParamLimits

0x2245,	// (0x00027ca0) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00034b5f) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00034b5f) popup_call_audio_in_window_g

0x2251,	// (0x00027cac) popup_call_audio_in_window_t1_ParamLimits

0x2251,	// (0x00027cac) popup_call_audio_in_window_t1

0x226d,	// (0x00027cc8) popup_call_audio_in_window_t2_ParamLimits

0x226d,	// (0x00027cc8) popup_call_audio_in_window_t2

0x2289,	// (0x00027ce4) popup_call_audio_in_window_t3_ParamLimits

0x2289,	// (0x00027ce4) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00034b66) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00034b66) popup_call_audio_in_window_t

0x2217,	// (0x00027c72) bg_popup_call_pane_cp01_ParamLimits

0x2217,	// (0x00027c72) bg_popup_call_pane_cp01

0x2225,	// (0x00027c80) call_thumbnail_pane_cp02

0x229c,	// (0x00027cf7) call_type_pane_cp022

0x22a4,	// (0x00027cff) popup_call_audio_out_window_g1_ParamLimits

0x22a4,	// (0x00027cff) popup_call_audio_out_window_g1

0x22b6,	// (0x00027d11) popup_call_audio_out_window_g2_ParamLimits

0x22b6,	// (0x00027d11) popup_call_audio_out_window_g2

0x22c2,	// (0x00027d1d) popup_call_audio_out_window_g3_ParamLimits

0x22c2,	// (0x00027d1d) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00034b6d) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00034b6d) popup_call_audio_out_window_g

0x22d4,	// (0x00027d2f) popup_call_audio_out_window_t1_ParamLimits

0x22d4,	// (0x00027d2f) popup_call_audio_out_window_t1

0x22ec,	// (0x00027d47) popup_call_audio_out_window_t2_ParamLimits

0x22ec,	// (0x00027d47) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00034b74) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00034b74) popup_call_audio_out_window_t

0x2301,	// (0x00027d5c) bg_popup_call_pane_ParamLimits

0x2301,	// (0x00027d5c) bg_popup_call_pane

0x2385,	// (0x00027de0) call_thumbnail_pane_cp_ParamLimits

0x2385,	// (0x00027de0) call_thumbnail_pane_cp

0x23a9,	// (0x00027e04) call_type_pane_cp01_ParamLimits

0x23a9,	// (0x00027e04) call_type_pane_cp01

0x23ed,	// (0x00027e48) popup_call_audio_first_window_g1_ParamLimits

0x23ed,	// (0x00027e48) popup_call_audio_first_window_g1

0x2439,	// (0x00027e94) popup_call_audio_first_window_g2_ParamLimits

0x2439,	// (0x00027e94) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00034b79) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00034b79) popup_call_audio_first_window_g

0x247d,	// (0x00027ed8) popup_call_audio_first_window_t1_ParamLimits

0x247d,	// (0x00027ed8) popup_call_audio_first_window_t1

0x2529,	// (0x00027f84) popup_call_audio_first_window_t4_ParamLimits

0x2529,	// (0x00027f84) popup_call_audio_first_window_t4

0x25b5,	// (0x00028010) popup_call_audio_first_window_t5_ParamLimits

0x25b5,	// (0x00028010) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00034b7e) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00034b7e) popup_call_audio_first_window_t

0x25e4,	// (0x0002803f) bg_popup_call_pane_cp02

0x25ee,	// (0x00028049) call_type_pane_cp023

0x25f6,	// (0x00028051) popup_call_audio_wait_window_g1

0x25fe,	// (0x00028059) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00034b85) popup_call_audio_wait_window_g

0x2606,	// (0x00028061) popup_call_audio_wait_window_t3

0x2614,	// (0x0002806f) bg_popup_call_pane_cp03_ParamLimits

0x2614,	// (0x0002806f) bg_popup_call_pane_cp03

0x2674,	// (0x000280cf) call_thumbnail_pane_cp011_ParamLimits

0x2674,	// (0x000280cf) call_thumbnail_pane_cp011

0x2680,	// (0x000280db) call_type_pane_cp034_ParamLimits

0x2680,	// (0x000280db) call_type_pane_cp034

0x26bc,	// (0x00028117) popup_call_audio_second_window_g1_ParamLimits

0x26bc,	// (0x00028117) popup_call_audio_second_window_g1

0x26f8,	// (0x00028153) popup_call_audio_second_window_g2_ParamLimits

0x26f8,	// (0x00028153) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00034b8a) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00034b8a) popup_call_audio_second_window_g

0x2734,	// (0x0002818f) popup_call_audio_second_window_t1_ParamLimits

0x2734,	// (0x0002818f) popup_call_audio_second_window_t1

0x27b5,	// (0x00028210) popup_call_audio_second_window_t2_ParamLimits

0x27b5,	// (0x00028210) popup_call_audio_second_window_t2

0x27eb,	// (0x00028246) popup_call_audio_second_window_t3_ParamLimits

0x27eb,	// (0x00028246) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00034b8f) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00034b8f) popup_call_audio_second_window_t

0x25e4,	// (0x0002803f) bg_popup_call_pane_cp04

0x2821,	// (0x0002827c) list_conf_pane

0x2829,	// (0x00028284) popup_call_audio_conf_window_t1

0x2837,	// (0x00028292) call_thumbnail_pane_g1

0x283f,	// (0x0002829a) bg_pinb_pane_ParamLimits

0x283f,	// (0x0002829a) bg_pinb_pane

0x284d,	// (0x000282a8) find_pinb_pane

0x2856,	// (0x000282b1) listscroll_pinb_pane_ParamLimits

0x2856,	// (0x000282b1) listscroll_pinb_pane

0x2865,	// (0x000282c0) pinb_bg_pane_g1

0x286f,	// (0x000282ca) pinb_bg_pane_g2

0x287b,	// (0x000282d6) pinb_bg_pane_g3

0x2887,	// (0x000282e2) pinb_bg_pane_g4

0x2893,	// (0x000282ee) pinb_bg_pane_g5

0x289f,	// (0x000282fa) pinb_bg_pane_g6

0x28aa,	// (0x00028305) pinb_bg_pane_g7

0x28b5,	// (0x00028310) pinb_bg_pane_g8

0x28c0,	// (0x0002831b) pinb_bg_pane_g9

0x28ca,	// (0x00028325) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00034b96) pinb_bg_pane_g

0x28e7,	// (0x00028342) grid_pinb_pane

0x28f2,	// (0x0002834d) list_pinb_pane

0x28fd,	// (0x00028358) scroll_pane_cp01_ParamLimits

0x28fd,	// (0x00028358) scroll_pane_cp01

0x290f,	// (0x0002836a) find_pinb_pane_g1_ParamLimits

0x290f,	// (0x0002836a) find_pinb_pane_g1

0x2927,	// (0x00028382) find_pinb_pane_t1

0x2939,	// (0x00028394) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00034bb0) find_pinb_pane_t

0x294e,	// (0x000283a9) input_focus_pane_cp01_ParamLimits

0x294e,	// (0x000283a9) input_focus_pane_cp01

0x295a,	// (0x000283b5) cell_pinb_pane_ParamLimits

0x295a,	// (0x000283b5) cell_pinb_pane

0x297c,	// (0x000283d7) cell_pinb_pane_g1_ParamLimits

0x297c,	// (0x000283d7) cell_pinb_pane_g1

0x2990,	// (0x000283eb) cell_pinb_pane_g2_ParamLimits

0x2990,	// (0x000283eb) cell_pinb_pane_g2

0x299c,	// (0x000283f7) cell_pinb_pane_g3_ParamLimits

0x299c,	// (0x000283f7) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00034bb5) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00034bb5) cell_pinb_pane_g

0x25e4,	// (0x0002803f) grid_highlight_pane_cp01

0x29a8,	// (0x00028403) list_pinb_item_pane_ParamLimits

0x29a8,	// (0x00028403) list_pinb_item_pane

0x25e4,	// (0x0002803f) list_highlight_pane_cp02

0x29bb,	// (0x00028416) list_pinb_item_pane_g1_ParamLimits

0x29bb,	// (0x00028416) list_pinb_item_pane_g1

0x29c8,	// (0x00028423) list_pinb_item_pane_g2_ParamLimits

0x29c8,	// (0x00028423) list_pinb_item_pane_g2

0x29d4,	// (0x0002842f) list_pinb_item_pane_g3_ParamLimits

0x29d4,	// (0x0002842f) list_pinb_item_pane_g3

0x29e5,	// (0x00028440) list_pinb_item_pane_g4_ParamLimits

0x29e5,	// (0x00028440) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00034bbc) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00034bbc) list_pinb_item_pane_g

0x29f1,	// (0x0002844c) list_pinb_item_pane_t1_ParamLimits

0x29f1,	// (0x0002844c) list_pinb_item_pane_t1

0x0cac,	// (0x00026707) calc_display_pane

0x0cd2,	// (0x0002672d) calc_paper_pane

0x0cf5,	// (0x00026750) grid_calc_pane

0x25e4,	// (0x0002803f) bg_list_pane_cp01

0x2a08,	// (0x00028463) clock_g1

0x2a10,	// (0x0002846b) clock_g2

0x0001,

0xf16a,	// (0x00034bc5) clock_g

0x2a18,	// (0x00028473) clock_t1_ParamLimits

0x2a18,	// (0x00028473) clock_t1

0x2a2d,	// (0x00028488) clock_t2_ParamLimits

0x2a2d,	// (0x00028488) clock_t2

0x2a3f,	// (0x0002849a) clock_t3_ParamLimits

0x2a3f,	// (0x0002849a) clock_t3

0x2a51,	// (0x000284ac) clock_t4_ParamLimits

0x2a51,	// (0x000284ac) clock_t4

0x2a63,	// (0x000284be) clock_t5_ParamLimits

0x2a63,	// (0x000284be) clock_t5

0x2a78,	// (0x000284d3) clock_t6_ParamLimits

0x2a78,	// (0x000284d3) clock_t6

0x2a8a,	// (0x000284e5) clock_t7_ParamLimits

0x2a8a,	// (0x000284e5) clock_t7

0x2a9c,	// (0x000284f7) clock_t8_ParamLimits

0x2a9c,	// (0x000284f7) clock_t8

0x2ab0,	// (0x0002850b) clock_t9_ParamLimits

0x2ab0,	// (0x0002850b) clock_t9

0x0008,

0xf16f,	// (0x00034bca) clock_t_ParamLimits

0xf16f,	// (0x00034bca) clock_t

0x2ac6,	// (0x00028521) popup_clock_analogue_window_cp02

0x2ac6,	// (0x00028521) popup_clock_digital_window_cp01

0x2ace,	// (0x00028529) listscroll_help_pane

0x25e4,	// (0x0002803f) phob_pre_status_pane

0x2ad8,	// (0x00028533) grid_qdial_pane

0x25e4,	// (0x0002803f) listscroll_mce_pane

0x2ae2,	// (0x0002853d) bg_notes_pane

0x2aec,	// (0x00028547) list_notes_pane

0x2af6,	// (0x00028551) scroll_pane_cp06

0x2b01,	// (0x0002855c) bg_calc_paper_pane

0xae1a,	// (0x00030875) list_calc_pane

0x2b15,	// (0x00028570) bg_calc_display_pane

0x0d23,	// (0x0002677e) calc_display_pane_t1

0x0d35,	// (0x00026790) calc_display_pane_t2

0xae34,	// (0x0003088f) calc_display_pane_t3

0x0002,

0xf182,	// (0x00034bdd) calc_display_pane_t

0x0d47,	// (0x000267a2) cell_calc_pane_ParamLimits

0x0d47,	// (0x000267a2) cell_calc_pane

0x2b21,	// (0x0002857c) bg_calc_paper_pane_g1

0x2b2d,	// (0x00028588) bg_calc_paper_pane_g2

0x2b39,	// (0x00028594) bg_calc_paper_pane_g3

0x2b45,	// (0x000285a0) bg_calc_paper_pane_g4

0x2b51,	// (0x000285ac) bg_calc_paper_pane_g5

0x2b5d,	// (0x000285b8) bg_calc_paper_pane_g6

0x2b70,	// (0x000285cb) bg_calc_paper_pane_g7

0x2b83,	// (0x000285de) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00034be4) bg_calc_paper_pane_g

0x2b94,	// (0x000285ef) calc_bg_paper_pane_g9

0x2ba5,	// (0x00028600) list_calc_item_pane_ParamLimits

0x2ba5,	// (0x00028600) list_calc_item_pane

0x2bb9,	// (0x00028614) list_calc_item_pane_g1

0xae46,	// (0x000308a1) list_calc_item_pane_t1_ParamLimits

0xae46,	// (0x000308a1) list_calc_item_pane_t1

0x0d82,	// (0x000267dd) list_calc_item_pane_t2_ParamLimits

0x0d82,	// (0x000267dd) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00034bf5) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00034bf5) list_calc_item_pane_t

0x2bc6,	// (0x00028621) cell_calc_pane_g1

0x2bd0,	// (0x0002862b) grid_highlight_pane_cp02

0x2bf2,	// (0x0002864d) bg_calc_display_pane_g1

0xae58,	// (0x000308b3) bg_calc_display_pane_g2

0x2bfb,	// (0x00028656) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00034bff) bg_calc_display_pane_g

0x0db4,	// (0x0002680f) cell_qdial_pane_ParamLimits

0x0db4,	// (0x0002680f) cell_qdial_pane

0x2c04,	// (0x0002865f) cell_qdial_pane_g1_ParamLimits

0x2c04,	// (0x0002865f) cell_qdial_pane_g1

0x2c1a,	// (0x00028675) cell_qdial_pane_g2_ParamLimits

0x2c1a,	// (0x00028675) cell_qdial_pane_g2

0x2c2b,	// (0x00028686) cell_qdial_pane_g3_ParamLimits

0x2c2b,	// (0x00028686) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00034c06) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00034c06) cell_qdial_pane_g

0x2c4c,	// (0x000286a7) cell_qdial_pane_t1_ParamLimits

0x2c4c,	// (0x000286a7) cell_qdial_pane_t1

0x2c64,	// (0x000286bf) cell_qdial_pane_t2_ParamLimits

0x2c64,	// (0x000286bf) cell_qdial_pane_t2

0x2c77,	// (0x000286d2) cell_qdial_pane_t3_ParamLimits

0x2c77,	// (0x000286d2) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00034c0f) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00034c0f) cell_qdial_pane_t

0x25e4,	// (0x0002803f) grid_highlight_pane_cp04

0x2c8a,	// (0x000286e5) thumbnail_qdial_pane_ParamLimits

0x2c8a,	// (0x000286e5) thumbnail_qdial_pane

0x2ce6,	// (0x00028741) list_help_pane

0x2cef,	// (0x0002874a) scroll_pane_cp02

0x2cf8,	// (0x00028753) help_list_pane_t1_ParamLimits

0x2cf8,	// (0x00028753) help_list_pane_t1

0xae62,	// (0x000308bd) bg_notes_pane_g2

0xae6a,	// (0x000308c5) bg_notes_pane_g3

0xae72,	// (0x000308cd) notes_bg_pane_g1

0xae7a,	// (0x000308d5) notes_bg_pane_g4

0xae82,	// (0x000308dd) notes_bg_pane_g5

0xae8a,	// (0x000308e5) notes_bg_pane_g6

0xae92,	// (0x000308ed) notes_bg_pane_g7

0xae9a,	// (0x000308f5) notes_bg_pane_g8

0xaea2,	// (0x000308fd) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00034c2d) notes_bg_pane_g

0x2d1c,	// (0x00028777) list_notes_text_pane_ParamLimits

0x2d1c,	// (0x00028777) list_notes_text_pane

0x2d33,	// (0x0002878e) list_notes_text_pane_g1

0x2d3c,	// (0x00028797) list_notes_text_pane_t1

0x2b15,	// (0x00028570) listscroll_cale_week_pane

0x2d78,	// (0x000287d3) bg_cale_heading_pane

0x2d94,	// (0x000287ef) bg_cale_pane_cp01

0x2dad,	// (0x00028808) cale_week_corner_pane

0x2dc3,	// (0x0002881e) cale_week_day_heading_pane

0x2ddf,	// (0x0002883a) cale_week_scroll_pane_g1

0x2df8,	// (0x00028853) cale_week_scroll_pane_g2

0x2e09,	// (0x00028864) cale_week_scroll_pane_g3

0x2e1a,	// (0x00028875) cale_week_scroll_pane_g4

0x2e2b,	// (0x00028886) cale_week_scroll_pane_g5

0x2e3c,	// (0x00028897) cale_week_scroll_pane_g6

0x2e4d,	// (0x000288a8) cale_week_scroll_pane_g7

0x2e5e,	// (0x000288b9) cale_week_scroll_pane_g8

0x2e6f,	// (0x000288ca) cale_week_scroll_pane_g9

0x2e80,	// (0x000288db) cale_week_scroll_pane_g10

0x2e91,	// (0x000288ec) cale_week_scroll_pane_g11

0x2ea2,	// (0x000288fd) cale_week_scroll_pane_g12

0x2eb3,	// (0x0002890e) cale_week_scroll_pane_g13

0x2ecc,	// (0x00028927) cale_week_scroll_pane_g14

0x2ee5,	// (0x00028940) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00034c3c) cale_week_scroll_pane_g

0x2efe,	// (0x00028959) cale_week_time_pane

0x2f0f,	// (0x0002896a) grid_cale_week_pane

0x2f3c,	// (0x00028997) scroll_pane_cp08

0x2f54,	// (0x000289af) cell_cale_week_pane_ParamLimits

0x2f54,	// (0x000289af) cell_cale_week_pane

0x2f9c,	// (0x000289f7) cale_week_day_heading_pane_t1

0x2fb0,	// (0x00028a0b) cale_week_day_heading_pane_t2

0x2fc4,	// (0x00028a1f) cale_week_day_heading_pane_t3

0x2fd8,	// (0x00028a33) cale_week_day_heading_pane_t4

0x2fec,	// (0x00028a47) cale_week_day_heading_pane_t5

0x3000,	// (0x00028a5b) cale_week_day_heading_pane_t6

0x3014,	// (0x00028a6f) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00034c5b) cale_week_day_heading_pane_t

0x3028,	// (0x00028a83) bg_cale_side_pane

0x0dca,	// (0x00026825) cale_week_time_pane_t1

0x0de2,	// (0x0002683d) cale_week_time_pane_t2

0x0dfa,	// (0x00026855) cale_week_time_pane_t3

0x0e12,	// (0x0002686d) cale_week_time_pane_t4

0x0e2a,	// (0x00026885) cale_week_time_pane_t5

0x0e42,	// (0x0002689d) cale_week_time_pane_t6

0x0e5a,	// (0x000268b5) cale_week_time_pane_t7

0x0e76,	// (0x000268d1) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00034c6a) cale_week_time_pane_t

0x3036,	// (0x00028a91) cell_cale_week_pane_g2

0x3047,	// (0x00028aa2) cell_cale_week_pane_g3_ParamLimits

0x3047,	// (0x00028aa2) cell_cale_week_pane_g3

0x305f,	// (0x00028aba) grid_highlight_pane_cp07

0x3067,	// (0x00028ac2) listscroll_gms_pane

0x3071,	// (0x00028acc) grid_gms_pane

0x307a,	// (0x00028ad5) listscroll_gms_pane_g1

0x3082,	// (0x00028add) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00034c7b) listscroll_gms_pane_g

0x308a,	// (0x00028ae5) scroll_pane_cp010

0x3095,	// (0x00028af0) cell_gms_pane_ParamLimits

0x3095,	// (0x00028af0) cell_gms_pane

0x30af,	// (0x00028b0a) cell_gms_pane_g1

0x30b7,	// (0x00028b12) cell_gms_pane_g2

0x30bf,	// (0x00028b1a) cell_gms_pane_g3

0x30c8,	// (0x00028b23) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00034c80) cell_gms_pane_g

0x30d1,	// (0x00028b2c) grid_highlight_pane_cp09

0x63f5,	// (0x0002be50) phob_pre_status_pane_g1

0x63fd,	// (0x0002be58) phob_pre_status_pane_g2

0x6405,	// (0x0002be60) phob_pre_status_pane_g3

0x640d,	// (0x0002be68) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0003506f) phob_pre_status_pane_g

0x641d,	// (0x0002be78) phob_pre_status_pane_t1

0x642d,	// (0x0002be88) phob_pre_status_pane_t2

0x643d,	// (0x0002be98) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0003507a) phob_pre_status_pane_t

0x25e4,	// (0x0002803f) bg_list_pane_cp05

0x0e9e,	// (0x000268f9) grid_vorec_pane

0xaeaa,	// (0x00030905) vorec_t1

0xaeb8,	// (0x00030913) vorec_t2

0xaec6,	// (0x00030921) vorec_t3

0xaed4,	// (0x0003092f) vorec_t4

0xaee2,	// (0x0003093d) vorec_t5

0xaef0,	// (0x0003094b) vorec_t6

0x0006,

0xf22e,	// (0x00034c89) vorec_t

0xaf0c,	// (0x00030967) wait_bar_pane_cp01

0x30d9,	// (0x00028b34) cell_vorec_pane_ParamLimits

0x30d9,	// (0x00028b34) cell_vorec_pane

0x30ee,	// (0x00028b49) cell_vorec_pane_g1

0x25e4,	// (0x0002803f) grid_highlight_pane_cp05

0x310e,	// (0x00028b69) cams_zoom_pane

0x311d,	// (0x00028b78) image_vga_pane

0x3137,	// (0x00028b92) main_camera_pane_g1

0x3149,	// (0x00028ba4) main_camera_pane_g2

0x3159,	// (0x00028bb4) main_camera_pane_g3

0x316d,	// (0x00028bc8) main_camera_pane_g4

0x3181,	// (0x00028bdc) main_camera_pane_g5

0x3195,	// (0x00028bf0) main_camera_pane_g6

0x31a9,	// (0x00028c04) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00034c98) main_camera_pane_g

0x31c9,	// (0x00028c24) main_camera_pane_t1

0x31df,	// (0x00028c3a) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00034ca9) main_camera_pane_t

0x321d,	// (0x00028c78) cams_zoom_pane_cp_ParamLimits

0x321d,	// (0x00028c78) cams_zoom_pane_cp

0x3245,	// (0x00028ca0) image_cif_pane_ParamLimits

0x3245,	// (0x00028ca0) image_cif_pane

0x3280,	// (0x00028cdb) image_subqcif_pane

0x328a,	// (0x00028ce5) main_video_pane_g1_ParamLimits

0x328a,	// (0x00028ce5) main_video_pane_g1

0x32ae,	// (0x00028d09) main_video_pane_g2_ParamLimits

0x32ae,	// (0x00028d09) main_video_pane_g2

0x32e4,	// (0x00028d3f) main_video_pane_g3_ParamLimits

0x32e4,	// (0x00028d3f) main_video_pane_g3

0x3312,	// (0x00028d6d) main_video_pane_g4_ParamLimits

0x3312,	// (0x00028d6d) main_video_pane_g4

0x3340,	// (0x00028d9b) main_video_pane_g5_ParamLimits

0x3340,	// (0x00028d9b) main_video_pane_g5

0x3358,	// (0x00028db3) main_video_pane_g6_ParamLimits

0x3358,	// (0x00028db3) main_video_pane_g6

0x0006,

0xf253,	// (0x00034cae) main_video_pane_g_ParamLimits

0xf253,	// (0x00034cae) main_video_pane_g

0x3383,	// (0x00028dde) main_video_pane_t1_ParamLimits

0x3383,	// (0x00028dde) main_video_pane_t1

0x33cc,	// (0x00028e27) cams_zoom_pane_g1

0x33d5,	// (0x00028e30) cams_zoom_pane_g2

0x33de,	// (0x00028e39) cams_zoom_pane_g3

0x33e7,	// (0x00028e42) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00034cbd) cams_zoom_pane_g

0x3404,	// (0x00028e5f) grid_cams_pane

0x341e,	// (0x00028e79) linegrid_cams_pane

0x3432,	// (0x00028e8d) cell_cams_pane_ParamLimits

0x3432,	// (0x00028e8d) cell_cams_pane

0x3454,	// (0x00028eaf) cams_burst_image_pane

0x345c,	// (0x00028eb7) cell_cams_pane_g1

0x25e4,	// (0x0002803f) grid_highlight_pane_cp03

0x2bc6,	// (0x00028621) mp_bg_pane_g1

0x25e4,	// (0x0002803f) bg_list_pane_cp03

0xbc4a,	// (0x000316a5) bg_mp_pane

0xbc52,	// (0x000316ad) grid_mp_pane

0xbc5a,	// (0x000316b5) media_player_g1

0xbc64,	// (0x000316bf) media_player_t1

0xbc72,	// (0x000316cd) media_player_t2

0xbc80,	// (0x000316db) media_player_t3

0xbc8e,	// (0x000316e9) media_player_t4

0xbc9c,	// (0x000316f7) media_player_t5

0xbcaa,	// (0x00031705) media_player_t6

0xbcb8,	// (0x00031713) media_player_t7

0x0006,

0xf5fe,	// (0x00035059) media_player_t

0xbcc6,	// (0x00031721) wait_bar_pane_cp02

0xf5e3,	// (0x0003503e) main_usb_pane_t

0x63ec,	// (0x0002be47) cell_mp_pane

0x2bc6,	// (0x00028621) cell_mp_pane_g1

0x25e4,	// (0x0002803f) grid_highlight_pane_cp06

0x3574,	// (0x00028fcf) grid_skin_colour_pane

0x357c,	// (0x00028fd7) list_highlight_pane_cp03

0x3584,	// (0x00028fdf) skin_g1

0x358e,	// (0x00028fe9) skin_t1

0x359d,	// (0x00028ff8) skin_t2

0x0001,

0xf297,	// (0x00034cf2) skin_t

0x35ab,	// (0x00029006) cell_skin_colour_pane_ParamLimits

0x35ab,	// (0x00029006) cell_skin_colour_pane

0x35cb,	// (0x00029026) cell_skin_colour_pane_g1

0x3621,	// (0x0002907c) call_video_g1_ParamLimits

0x3621,	// (0x0002907c) call_video_g1

0x363d,	// (0x00029098) call_video_g2_ParamLimits

0x363d,	// (0x00029098) call_video_g2

0x0001,

0xf29c,	// (0x00034cf7) call_video_g_ParamLimits

0xf29c,	// (0x00034cf7) call_video_g

0x3673,	// (0x000290ce) call_video_uplink_pane_cp1_ParamLimits

0x3673,	// (0x000290ce) call_video_uplink_pane_cp1

0x36b7,	// (0x00029112) call_video_uplink_pane_cp2

0x36fb,	// (0x00029156) video_down_crop_pane_ParamLimits

0x36fb,	// (0x00029156) video_down_crop_pane

0x37c1,	// (0x0002921c) video_down_pane_ParamLimits

0x37c1,	// (0x0002921c) video_down_pane

0x388d,	// (0x000292e8) video_down_subqcif_pane_ParamLimits

0x388d,	// (0x000292e8) video_down_subqcif_pane

0x38a7,	// (0x00029302) video_down_subqcif_pane_cp_ParamLimits

0x38a7,	// (0x00029302) video_down_subqcif_pane_cp

0x38cd,	// (0x00029328) im_reading_pane_ParamLimits

0x38cd,	// (0x00029328) im_reading_pane

0x38df,	// (0x0002933a) im_writing_pane_ParamLimits

0x38df,	// (0x0002933a) im_writing_pane

0x3905,	// (0x00029360) im_reading_pane_t1

0x3944,	// (0x0002939f) list_im_pane

0x3955,	// (0x000293b0) scroll_pane_cp07

0x396e,	// (0x000293c9) im_writing_pane_t1_ParamLimits

0x396e,	// (0x000293c9) im_writing_pane_t1

0x3983,	// (0x000293de) im_writing_pane_t2_ParamLimits

0x3983,	// (0x000293de) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00034d01) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00034d01) im_writing_pane_t

0x25e4,	// (0x0002803f) input_focus_pane_cp04

0x25e4,	// (0x0002803f) input_focus_pane_cp05

0x39a0,	// (0x000293fb) list_im_single_pane_ParamLimits

0x39a0,	// (0x000293fb) list_im_single_pane

0x39b9,	// (0x00029414) list_single_im_pane_t1

0x63ac,	// (0x0002be07) blid_accuracy_pane

0x63b4,	// (0x0002be0f) blid_compass_pane

0x63be,	// (0x0002be19) main_location_t1

0x63ce,	// (0x0002be29) main_location_t2

0x63de,	// (0x0002be39) main_location_t3

0x0002,

0xf60d,	// (0x00035068) main_location_t

0x25e4,	// (0x0002803f) aid_levels_location

0x2bc6,	// (0x00028621) blid_accuracy_pane_g1

0x2bc6,	// (0x00028621) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00034d63) blid_accuracy_pane_g

0x39f3,	// (0x0002944e) wml_content_pane

0x3a31,	// (0x0002948c) wml_button_pane_ParamLimits

0x3a31,	// (0x0002948c) wml_button_pane

0x3a45,	// (0x000294a0) wml_list_single_large_pane_ParamLimits

0x3a45,	// (0x000294a0) wml_list_single_large_pane

0x3a5e,	// (0x000294b9) wml_list_single_medium_pane_ParamLimits

0x3a5e,	// (0x000294b9) wml_list_single_medium_pane

0x3a78,	// (0x000294d3) wml_list_single_small_pane_ParamLimits

0x3a78,	// (0x000294d3) wml_list_single_small_pane

0x3a97,	// (0x000294f2) wml_selection_box_pane_ParamLimits

0x3a97,	// (0x000294f2) wml_selection_box_pane

0x3aaa,	// (0x00029505) wml_list_single_pane_t1

0x3ab9,	// (0x00029514) wml_list_single_medium_pane_t1

0x3ac8,	// (0x00029523) wml_list_single_large_pane_t1

0x3ad7,	// (0x00029532) input_focus_pane_cp02_ParamLimits

0x3ad7,	// (0x00029532) input_focus_pane_cp02

0x3aea,	// (0x00029545) wml_selection_box_pane_g1

0x3af3,	// (0x0002954e) wml_selection_box_pane_t1_ParamLimits

0x3af3,	// (0x0002954e) wml_selection_box_pane_t1

0x283f,	// (0x0002829a) bg_wml_button_pane_ParamLimits

0x283f,	// (0x0002829a) bg_wml_button_pane

0x3b0b,	// (0x00029566) wml_button_pane_g1

0x3b13,	// (0x0002956e) wml_button_pane_t1

0x3b0b,	// (0x00029566) wml_button_bg_pane_g1

0x3b23,	// (0x0002957e) wml_button_bg_pane_g2

0x3b2b,	// (0x00029586) wml_button_bg_pane_g3

0x3b33,	// (0x0002958e) wml_button_bg_pane_g4

0x3b3b,	// (0x00029596) wml_button_bg_pane_g5

0x3b43,	// (0x0002959e) wml_button_bg_pane_g6

0x3b4b,	// (0x000295a6) wml_button_bg_pane_g7

0x3b53,	// (0x000295ae) wml_button_bg_pane_g8

0x3b5b,	// (0x000295b6) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00034d06) wml_button_bg_pane_g

0x3b63,	// (0x000295be) bg_list_pane_cp02

0x3b6d,	// (0x000295c8) mce_header_pane_ParamLimits

0x3b6d,	// (0x000295c8) mce_header_pane

0x3b83,	// (0x000295de) mce_icon_pane

0x3b83,	// (0x000295de) mce_image_pane

0x3b8c,	// (0x000295e7) mce_text_pane_ParamLimits

0x3b8c,	// (0x000295e7) mce_text_pane

0x3b9f,	// (0x000295fa) scroll_pane_cp03

0x3a29,	// (0x00029484) scroll_pane_cp04

0x3ba9,	// (0x00029604) scroll_pane_cp05_ParamLimits

0x3ba9,	// (0x00029604) scroll_pane_cp05

0x3bb5,	// (0x00029610) mce_header_field_pane_ParamLimits

0x3bb5,	// (0x00029610) mce_header_field_pane

0x3bce,	// (0x00029629) mce_header_field_pane_2_ParamLimits

0x3bce,	// (0x00029629) mce_header_field_pane_2

0x3be4,	// (0x0002963f) mce_header_field_pane_3

0x3bec,	// (0x00029647) list_single_mce_message_pane_ParamLimits

0x3bec,	// (0x00029647) list_single_mce_message_pane

0x3c08,	// (0x00029663) list_single_mce_smart_pane_ParamLimits

0x3c08,	// (0x00029663) list_single_mce_smart_pane

0x3c2f,	// (0x0002968a) input_focus_pane_cp03

0x3c38,	// (0x00029693) list_header_data_pane

0x3c40,	// (0x0002969b) mce_header_field_pane_t1

0x3c50,	// (0x000296ab) list_single_mce_header_pane_ParamLimits

0x3c50,	// (0x000296ab) list_single_mce_header_pane

0x3c64,	// (0x000296bf) list_single_mce_header_pane_t1

0x3c73,	// (0x000296ce) list_single_mce_message_pane_g1

0x3c7b,	// (0x000296d6) list_single_mce_message_pane_t1

0x3ca7,	// (0x00029702) bg_cale_heading_pane_cp01_ParamLimits

0x3ca7,	// (0x00029702) bg_cale_heading_pane_cp01

0x3cda,	// (0x00029735) bg_cale_pane_cp02_ParamLimits

0x3cda,	// (0x00029735) bg_cale_pane_cp02

0x3cfd,	// (0x00029758) cale_month_corner_pane

0x3d13,	// (0x0002976e) cale_month_day_heading_pane_ParamLimits

0x3d13,	// (0x0002976e) cale_month_day_heading_pane

0x3d46,	// (0x000297a1) cale_month_pane_g1_ParamLimits

0x3d46,	// (0x000297a1) cale_month_pane_g1

0x3d72,	// (0x000297cd) cale_month_pane_g2_ParamLimits

0x3d72,	// (0x000297cd) cale_month_pane_g2

0x3d93,	// (0x000297ee) cale_month_pane_g3_ParamLimits

0x3d93,	// (0x000297ee) cale_month_pane_g3

0x3dcf,	// (0x0002982a) cale_month_pane_g4_ParamLimits

0x3dcf,	// (0x0002982a) cale_month_pane_g4

0x3e0b,	// (0x00029866) cale_month_pane_g5_ParamLimits

0x3e0b,	// (0x00029866) cale_month_pane_g5

0x3e47,	// (0x000298a2) cale_month_pane_g6_ParamLimits

0x3e47,	// (0x000298a2) cale_month_pane_g6

0x3e83,	// (0x000298de) cale_month_pane_g7_ParamLimits

0x3e83,	// (0x000298de) cale_month_pane_g7

0x3ebf,	// (0x0002991a) cale_month_pane_g8_ParamLimits

0x3ebf,	// (0x0002991a) cale_month_pane_g8

0x3efb,	// (0x00029956) cale_month_pane_g9_ParamLimits

0x3efb,	// (0x00029956) cale_month_pane_g9

0x3f31,	// (0x0002998c) cale_month_pane_g10_ParamLimits

0x3f31,	// (0x0002998c) cale_month_pane_g10

0x3f5b,	// (0x000299b6) cale_month_pane_g11_ParamLimits

0x3f5b,	// (0x000299b6) cale_month_pane_g11

0x3f85,	// (0x000299e0) cale_month_pane_g12_ParamLimits

0x3f85,	// (0x000299e0) cale_month_pane_g12

0x3fb3,	// (0x00029a0e) cale_month_pane_g13_ParamLimits

0x3fb3,	// (0x00029a0e) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00034d19) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00034d19) cale_month_pane_g

0x3ff3,	// (0x00029a4e) cale_month_week_pane

0x4004,	// (0x00029a5f) grid_cale_month_pane_ParamLimits

0x4004,	// (0x00029a5f) grid_cale_month_pane

0x4032,	// (0x00029a8d) cale_month_day_heading_pane_t1

0x4090,	// (0x00029aeb) cale_month_day_heading_pane_t2

0x40f5,	// (0x00029b50) cale_month_day_heading_pane_t3

0x415a,	// (0x00029bb5) cale_month_day_heading_pane_t4

0x41bf,	// (0x00029c1a) cale_month_day_heading_pane_t5

0x4224,	// (0x00029c7f) cale_month_day_heading_pane_t6

0x4289,	// (0x00029ce4) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00034d34) cale_month_day_heading_pane_t

0x3028,	// (0x00028a83) bg_cale_side_pane_cp01

0x42ee,	// (0x00029d49) cale_month_week_pane_t1

0x4305,	// (0x00029d60) cale_month_week_pane_t2

0x431c,	// (0x00029d77) cale_month_week_pane_t3

0x4333,	// (0x00029d8e) cale_month_week_pane_t4

0x434a,	// (0x00029da5) cale_month_week_pane_t5

0x4361,	// (0x00029dbc) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00034d43) cale_month_week_pane_t

0x4380,	// (0x00029ddb) cell_cale_month_pane_ParamLimits

0x4380,	// (0x00029ddb) cell_cale_month_pane

0xaf14,	// (0x0003096f) cell_cale_month_pane_g1

0x0ea8,	// (0x00026903) cell_cale_month_pane_t1_ParamLimits

0x0ea8,	// (0x00026903) cell_cale_month_pane_t1

0x305f,	// (0x00028aba) grid_highlight_pane_cp08

0x2bc6,	// (0x00028621) main_smil_g1

0x4458,	// (0x00029eb3) smil_status_pane

0x4463,	// (0x00029ebe) smil_text_pane

0xbb68,	// (0x000315c3) bg_popup_call3_rect_pane_g8

0xbb70,	// (0x000315cb) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00034ffc) bg_popup_call3_rect_pane_g

0xbe05,	// (0x00031860) smil_status_volume_pane_g1

0x4477,	// (0x00029ed2) smil_status_pane_t1

0xbe38,	// (0x00031893) volume_smil_pane

0x448e,	// (0x00029ee9) list_smil_text_pane

0x4498,	// (0x00029ef3) scroll_pane_cp011

0x44a3,	// (0x00029efe) smil_text_list_pane_t1_ParamLimits

0x44a3,	// (0x00029efe) smil_text_list_pane_t1

0xaf20,	// (0x0003097b) aid_volume_smil_ParamLimits

0xaf20,	// (0x0003097b) aid_volume_smil

0x2bc6,	// (0x00028621) smil_volume_pane_g1

0x2bc6,	// (0x00028621) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00034d63) smil_volume_pane_g

0x2b15,	// (0x00028570) listscroll_cale_day_pane

0x44f8,	// (0x00029f53) bg_cale_pane

0x4510,	// (0x00029f6b) list_cale_pane

0x4521,	// (0x00029f7c) scroll_pane_cp09

0x4532,	// (0x00029f8d) cale_bg_pane_g1

0x453a,	// (0x00029f95) cale_bg_pane_g2

0x4542,	// (0x00029f9d) cale_bg_pane_g3

0x454a,	// (0x00029fa5) cale_bg_pane_g4

0x4552,	// (0x00029fad) cale_bg_pane_g5

0x455a,	// (0x00029fb5) cale_bg_pane_g6

0x4562,	// (0x00029fbd) cale_bg_pane_g7

0x456a,	// (0x00029fc5) cale_bg_pane_g8

0x4572,	// (0x00029fcd) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00034d68) cale_bg_pane_g

0x457a,	// (0x00029fd5) list_cale_time_pane_ParamLimits

0x457a,	// (0x00029fd5) list_cale_time_pane

0x458f,	// (0x00029fea) list_cale_time_pane_g1_ParamLimits

0x458f,	// (0x00029fea) list_cale_time_pane_g1

0x459b,	// (0x00029ff6) list_cale_time_pane_g2_ParamLimits

0x459b,	// (0x00029ff6) list_cale_time_pane_g2

0x45a8,	// (0x0002a003) list_cale_time_pane_g3_ParamLimits

0x45a8,	// (0x0002a003) list_cale_time_pane_g3

0x45b6,	// (0x0002a011) list_cale_time_pane_g4_ParamLimits

0x45b6,	// (0x0002a011) list_cale_time_pane_g4

0x45c4,	// (0x0002a01f) list_cale_time_pane_g5_ParamLimits

0x45c4,	// (0x0002a01f) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00034d7b) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00034d7b) list_cale_time_pane_g

0x45df,	// (0x0002a03a) list_cale_time_pane_t1_ParamLimits

0x45df,	// (0x0002a03a) list_cale_time_pane_t1

0x4607,	// (0x0002a062) list_cale_time_pane_t2_ParamLimits

0x4607,	// (0x0002a062) list_cale_time_pane_t2

0x4dc9,	// (0x0002a824) aid_blid_cardinal_pane

0x4e17,	// (0x0002a872) compass_pane_t4

0x462f,	// (0x0002a08a) list_cale_time_pane_t4_ParamLimits

0x462f,	// (0x0002a08a) list_cale_time_pane_t4

0x4e25,	// (0x0002a880) compass_pane_t5

0x4e35,	// (0x0002a890) compass_pane_t6

0x4e43,	// (0x0002a89e) compass_pane_t7

0x4ec5,	// (0x0002a920) navi_pane_cc_t1

0x50e4,	// (0x0002ab3f) aid_phob_thumbnail_center_pane

0x5828,	// (0x0002b283) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00034d88) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00034d88) list_cale_time_pane_t

0x2217,	// (0x00027c72) bg_popup_window_pane_cp02_ParamLimits

0x2217,	// (0x00027c72) bg_popup_window_pane_cp02

0x4657,	// (0x0002a0b2) heading_pane_cp01_ParamLimits

0x4657,	// (0x0002a0b2) heading_pane_cp01

0x4663,	// (0x0002a0be) loc_req_pane_ParamLimits

0x4663,	// (0x0002a0be) loc_req_pane

0x4673,	// (0x0002a0ce) loc_type_pane_ParamLimits

0x4673,	// (0x0002a0ce) loc_type_pane

0x4685,	// (0x0002a0e0) loc_type_pane_t1_ParamLimits

0x4685,	// (0x0002a0e0) loc_type_pane_t1

0x4697,	// (0x0002a0f2) loc_type_pane_t2_ParamLimits

0x4697,	// (0x0002a0f2) loc_type_pane_t2

0x46a9,	// (0x0002a104) loc_type_pane_t3_ParamLimits

0x46a9,	// (0x0002a104) loc_type_pane_t3

0x0002,

0xf334,	// (0x00034d8f) loc_type_pane_t_ParamLimits

0xf334,	// (0x00034d8f) loc_type_pane_t

0x46bb,	// (0x0002a116) list_loc_req_pane

0x46c5,	// (0x0002a120) scroll_pane_cp012

0x46d0,	// (0x0002a12b) list_single_loc_request_popup_menu_pane_ParamLimits

0x46d0,	// (0x0002a12b) list_single_loc_request_popup_menu_pane

0x46dd,	// (0x0002a138) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x46dd,	// (0x0002a138) list_single_loc_request_popup_menu_pane_g1

0x46e9,	// (0x0002a144) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x46e9,	// (0x0002a144) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00034d96) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00034d96) list_single_loc_request_popup_menu_pane_g

0x46f5,	// (0x0002a150) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x46f5,	// (0x0002a150) list_single_loc_request_popup_menu_pane_t1

0x283f,	// (0x0002829a) bg_popup_window_pane_cp03_ParamLimits

0x283f,	// (0x0002829a) bg_popup_window_pane_cp03

0x470b,	// (0x0002a166) heading_loc_req_pane_ParamLimits

0x470b,	// (0x0002a166) heading_loc_req_pane

0x4717,	// (0x0002a172) popup_dyc_status_message_window_g1_ParamLimits

0x4717,	// (0x0002a172) popup_dyc_status_message_window_g1

0x472b,	// (0x0002a186) popup_dyc_status_message_window_t1_ParamLimits

0x472b,	// (0x0002a186) popup_dyc_status_message_window_t1

0x4740,	// (0x0002a19b) popup_dyc_status_message_window_t2_ParamLimits

0x4740,	// (0x0002a19b) popup_dyc_status_message_window_t2

0x4755,	// (0x0002a1b0) popup_dyc_status_message_window_t3_ParamLimits

0x4755,	// (0x0002a1b0) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00034d9b) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00034d9b) popup_dyc_status_message_window_t

0x25e4,	// (0x0002803f) bg_heading_pane_cp01

0x4771,	// (0x0002a1cc) heading_loc_req_pane_g1

0x4779,	// (0x0002a1d4) heading_loc_req_pane_g2

0x4781,	// (0x0002a1dc) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00034da2) heading_loc_req_pane_g

0x4789,	// (0x0002a1e4) heading_loc_req_pane_t1

0x4882,	// (0x0002a2dd) bg_popup_sub_pane_cp01_ParamLimits

0x4882,	// (0x0002a2dd) bg_popup_sub_pane_cp01

0x4890,	// (0x0002a2eb) popup_cale_events_window_g1_ParamLimits

0x4890,	// (0x0002a2eb) popup_cale_events_window_g1

0x48b0,	// (0x0002a30b) popup_cale_events_window_g2_ParamLimits

0x48b0,	// (0x0002a30b) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00034dd6) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00034dd6) popup_cale_events_window_g

0x48d0,	// (0x0002a32b) popup_cale_events_window_t1_ParamLimits

0x48d0,	// (0x0002a32b) popup_cale_events_window_t1

0x48e2,	// (0x0002a33d) popup_cale_events_window_t2_ParamLimits

0x48e2,	// (0x0002a33d) popup_cale_events_window_t2

0x4920,	// (0x0002a37b) popup_cale_events_window_t3_ParamLimits

0x4920,	// (0x0002a37b) popup_cale_events_window_t3

0x495a,	// (0x0002a3b5) popup_cale_events_window_t4_ParamLimits

0x495a,	// (0x0002a3b5) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00034ddb) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00034ddb) popup_cale_events_window_t

0x4990,	// (0x0002a3eb) call_type_pane

0x49a0,	// (0x0002a3fb) popup_call_status_window_g1

0x49b4,	// (0x0002a40f) popup_call_status_window_g2

0x49c8,	// (0x0002a423) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00034de4) popup_call_status_window_g

0x49d8,	// (0x0002a433) call_type_pane_g1

0x49e1,	// (0x0002a43c) call_type_pane_g2

0x0001,

0xf390,	// (0x00034deb) call_type_pane_g

0x25e4,	// (0x0002803f) bg_popup_sub_pane_cp02

0x49ea,	// (0x0002a445) listscroll_popup_wml_pane

0x49f2,	// (0x0002a44d) list_wml_pane

0x49fc,	// (0x0002a457) scroll_pane_cp013

0x4a07,	// (0x0002a462) list_single_graphic_popup_wml_pane_ParamLimits

0x4a07,	// (0x0002a462) list_single_graphic_popup_wml_pane

0x2bc6,	// (0x00028621) list_single_graphic_popup_wml_pane_g1

0x4a1b,	// (0x0002a476) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00034df0) list_single_graphic_popup_wml_pane_g

0x4a23,	// (0x0002a47e) list_single_graphic_popup_wml_pane_t1

0x4a39,	// (0x0002a494) aid_call_pane

0x2837,	// (0x00028292) popup_clock_analogue_window_g1

0x2837,	// (0x00028292) popup_clock_analogue_window_g2

0xaf42,	// (0x0003099d) popup_clock_analogue_window_g3

0xaf42,	// (0x0003099d) popup_clock_analogue_window_g4

0x2bc6,	// (0x00028621) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00034df5) popup_clock_analogue_window_g

0xaf4a,	// (0x000309a5) popup_clock_analogue_window_t1

0xaf58,	// (0x000309b3) clock_digital_number_pane_ParamLimits

0xaf58,	// (0x000309b3) clock_digital_number_pane

0xaf64,	// (0x000309bf) clock_digital_number_pane_cp02_ParamLimits

0xaf64,	// (0x000309bf) clock_digital_number_pane_cp02

0xaf70,	// (0x000309cb) clock_digital_number_pane_cp03_ParamLimits

0xaf70,	// (0x000309cb) clock_digital_number_pane_cp03

0xaf7c,	// (0x000309d7) clock_digital_number_pane_cp04_ParamLimits

0xaf7c,	// (0x000309d7) clock_digital_number_pane_cp04

0xaf88,	// (0x000309e3) clock_digital_separator_pane_ParamLimits

0xaf88,	// (0x000309e3) clock_digital_separator_pane

0xaf94,	// (0x000309ef) popup_clock_digital_window_t1

0x2bc6,	// (0x00028621) clock_digital_number_pane_g1

0x2bc6,	// (0x00028621) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00034d63) clock_digital_number_pane_g

0x2bc6,	// (0x00028621) clock_digital_separator_pane_g1

0x2bc6,	// (0x00028621) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00034d63) clock_digital_separator_pane_g

0x25e4,	// (0x0002803f) bg_popup_window_pane_cp04

0x4a41,	// (0x0002a49c) heading_pane_cp03

0x4a49,	// (0x0002a4a4) listscroll_popup_gms_pane

0x4a51,	// (0x0002a4ac) grid_large_graphic_popup_pane

0x4a5b,	// (0x0002a4b6) listscroll_popup_gms_pane_g1

0x4a63,	// (0x0002a4be) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00034e00) listscroll_popup_gms_pane_g

0x3a29,	// (0x00029484) scroll_pane_cp014

0x4a6b,	// (0x0002a4c6) cell_large_graphic_popup_pane_ParamLimits

0x4a6b,	// (0x0002a4c6) cell_large_graphic_popup_pane

0x4a83,	// (0x0002a4de) cell_large_graphic_popup_pane_g1_ParamLimits

0x4a83,	// (0x0002a4de) cell_large_graphic_popup_pane_g1

0x4a8f,	// (0x0002a4ea) cell_large_graphic_popup_pane_g2_ParamLimits

0x4a8f,	// (0x0002a4ea) cell_large_graphic_popup_pane_g2

0x4a9b,	// (0x0002a4f6) cell_large_graphic_popup_pane_g3_ParamLimits

0x4a9b,	// (0x0002a4f6) cell_large_graphic_popup_pane_g3

0x4aa8,	// (0x0002a503) cell_large_graphic_popup_pane_g4_ParamLimits

0x4aa8,	// (0x0002a503) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00034e05) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00034e05) cell_large_graphic_popup_pane_g

0x4ab8,	// (0x0002a513) grid_highlight_pane_cp010

0x2bc6,	// (0x00028621) bg_popup_call_pane_g1

0x4ac2,	// (0x0002a51d) list_single_graphic_popup_conf_pane_ParamLimits

0x4ac2,	// (0x0002a51d) list_single_graphic_popup_conf_pane

0x4ad4,	// (0x0002a52f) list_highlight_pane_cp01

0x4add,	// (0x0002a538) list_single_graphic_popup_conf_pane_g1

0x4ae5,	// (0x0002a540) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00034e0e) list_single_graphic_popup_conf_pane_g

0x4aed,	// (0x0002a548) list_single_graphic_popup_conf_pane_t1

0x4afb,	// (0x0002a556) linegrid_cams_pane_g1

0x4b04,	// (0x0002a55f) linegrid_cams_pane_g2

0x30bf,	// (0x00028b1a) linegrid_cams_pane_g3

0x4b0d,	// (0x0002a568) linegrid_cams_pane_g4

0x4b16,	// (0x0002a571) linegrid_cams_pane_g5

0x4b1f,	// (0x0002a57a) linegrid_cams_pane_g6

0x30c8,	// (0x00028b23) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00034e13) linegrid_cams_pane_g

0x4b2a,	// (0x0002a585) popup_clock_analogue_window

0x4b2a,	// (0x0002a585) popup_clock_digital_window

0x25e4,	// (0x0002803f) popup_phob_thumbnail_window

0x2bc6,	// (0x00028621) call_video_uplink_pane_g1

0x4b33,	// (0x0002a58e) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00034e22) call_video_uplink_pane_g

0x4b3b,	// (0x0002a596) video_uplink_pane

0x4b43,	// (0x0002a59e) mce_image_pane_g1

0x4b4d,	// (0x0002a5a8) mce_image_pane_g2

0x4b57,	// (0x0002a5b2) mce_image_pane_g3

0x4b61,	// (0x0002a5bc) mce_image_pane_g4

0x4b69,	// (0x0002a5c4) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00034e27) mce_image_pane_g

0x4b71,	// (0x0002a5cc) control_top_pane_stacon_cp01_ParamLimits

0x4b71,	// (0x0002a5cc) control_top_pane_stacon_cp01

0x4b85,	// (0x0002a5e0) uni_indicator_pane_stacon_cp01_ParamLimits

0x4b85,	// (0x0002a5e0) uni_indicator_pane_stacon_cp01

0x4b96,	// (0x0002a5f1) bg_popup_sub_pane_cp03

0x4ba0,	// (0x0002a5fb) chi_dic_find_pane

0x4ba8,	// (0x0002a603) listscroll_chi_dic_pane

0x4bb1,	// (0x0002a60c) main_pane_chidic_g1

0x4bc4,	// (0x0002a61f) chi_dic_find_pane_t1

0x4bd2,	// (0x0002a62d) find_chidic_pane

0x4bdb,	// (0x0002a636) chi_dic_list_pane_ParamLimits

0x4bdb,	// (0x0002a636) chi_dic_list_pane

0x4bec,	// (0x0002a647) scroll_pane_cp020

0x4bf4,	// (0x0002a64f) find_chidic_pane_t1

0x25e4,	// (0x0002803f) input_focus_pane_cp06

0x4c03,	// (0x0002a65e) list_chi_dic_pane_ParamLimits

0x4c03,	// (0x0002a65e) list_chi_dic_pane

0x4c15,	// (0x0002a670) list_chi_dic_pane_t1_ParamLimits

0x4c15,	// (0x0002a670) list_chi_dic_pane_t1

0x25e4,	// (0x0002803f) list_highlight_pane_cp020

0x4c28,	// (0x0002a683) bg_cale_heading_pane_g1

0x4c30,	// (0x0002a68b) bg_cale_heading_pane_g2

0x4c38,	// (0x0002a693) bg_cale_heading_pane_g3

0x4c40,	// (0x0002a69b) bg_cale_heading_pane_g4

0x4c48,	// (0x0002a6a3) bg_cale_heading_pane_g5

0x4c50,	// (0x0002a6ab) bg_cale_heading_pane_g6

0x4c58,	// (0x0002a6b3) bg_cale_heading_pane_g7

0x4c60,	// (0x0002a6bb) bg_cale_heading_pane_g8

0x4c68,	// (0x0002a6c3) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00034e32) bg_cale_heading_pane_g

0x4c28,	// (0x0002a683) bg_cale_side_pane_g1

0x4c70,	// (0x0002a6cb) bg_cale_side_pane_g2

0x4c7a,	// (0x0002a6d5) bg_cale_side_pane_g3

0x4c84,	// (0x0002a6df) bg_cale_side_pane_g4

0x4c8e,	// (0x0002a6e9) bg_cale_side_pane_g5

0x4c98,	// (0x0002a6f3) bg_cale_side_pane_g6

0x4ca2,	// (0x0002a6fd) bg_cale_side_pane_g7

0x4cac,	// (0x0002a707) bg_cale_side_pane_g8

0x4cb4,	// (0x0002a70f) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00034e45) bg_cale_side_pane_g

0x4cbc,	// (0x0002a717) popup_call_status_window_ParamLimits

0x4cbc,	// (0x0002a717) popup_call_status_window

0x4d09,	// (0x0002a764) stacon_top_pane

0x4d11,	// (0x0002a76c) status_pane_ParamLimits

0x4d11,	// (0x0002a76c) status_pane

0x4d26,	// (0x0002a781) status_small_pane

0x4d2e,	// (0x0002a789) control_pane

0x25e4,	// (0x0002803f) stacon_bottom_pane

0x4d36,	// (0x0002a791) list_single_mce_smart_pane_t1_ParamLimits

0x4d36,	// (0x0002a791) list_single_mce_smart_pane_t1

0x4d49,	// (0x0002a7a4) list_single_mce_smart_pane_t2_ParamLimits

0x4d49,	// (0x0002a7a4) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00034e58) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00034e58) list_single_mce_smart_pane_t

0x4d68,	// (0x0002a7c3) compass_pane

0x4d73,	// (0x0002a7ce) main_location2_pane_t1

0x4d89,	// (0x0002a7e4) main_location2_pane_t2

0x4d9f,	// (0x0002a7fa) main_location2_pane_t3

0x0003,

0xf402,	// (0x00034e5d) main_location2_pane_t

0x4ded,	// (0x0002a848) compass_pane_g1_ParamLimits

0x4ded,	// (0x0002a848) compass_pane_g1

0x4df9,	// (0x0002a854) compass_pane_t1

0x4e08,	// (0x0002a863) compass_pane_t2

0x0005,

0xf40b,	// (0x00034e66) compass_pane_t

0x4e53,	// (0x0002a8ae) text_secondary_cp61

0x4ebc,	// (0x0002a917) navi_pane_cams_g5

0x4f38,	// (0x0002a993) navi_pane_im_t1

0x4f46,	// (0x0002a9a1) navi_pane_mp_g1_ParamLimits

0x4f46,	// (0x0002a9a1) navi_pane_mp_g1

0x4f5a,	// (0x0002a9b5) navi_pane_mp_g2_ParamLimits

0x4f5a,	// (0x0002a9b5) navi_pane_mp_g2

0x4f66,	// (0x0002a9c1) navi_pane_mp_g3_ParamLimits

0x4f66,	// (0x0002a9c1) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00034e7a) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00034e7a) navi_pane_mp_g

0x4f72,	// (0x0002a9cd) navi_pane_mp_t1

0x4f80,	// (0x0002a9db) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00034e81) navi_pane_mp_t

0x502d,	// (0x0002aa88) navi_pane_vt_g1

0x4f72,	// (0x0002a9cd) navi_pane_vt_t1

0x5035,	// (0x0002aa90) navi_slider_pane

0x503d,	// (0x0002aa98) zooming_pane

0x5045,	// (0x0002aaa0) navi_slider_pane_g1

0xafb1,	// (0x00030a0c) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00034e88) navi_slider_pane_g

0x5069,	// (0x0002aac4) aid_levels_zoom

0x5071,	// (0x0002aacc) zooming_pane_g1

0x5079,	// (0x0002aad4) zooming_pane_g2

0x5079,	// (0x0002aad4) zooming_pane_g3

0x0002,

0xf43c,	// (0x00034e97) zooming_pane_g

0x5081,	// (0x0002aadc) level_10_zoom

0x508a,	// (0x0002aae5) level_11_zoom

0x5093,	// (0x0002aaee) level_1_zoom

0x509c,	// (0x0002aaf7) level_2_zoom

0x50a5,	// (0x0002ab00) level_3_zoom

0x50ae,	// (0x0002ab09) level_4_zoom

0x50b7,	// (0x0002ab12) level_5_zoom

0x50c0,	// (0x0002ab1b) level_6_zoom

0x50c9,	// (0x0002ab24) level_7_zoom

0x50d2,	// (0x0002ab2d) level_8_zoom

0x50db,	// (0x0002ab36) level_9_zoom

0x50ec,	// (0x0002ab47) popup_phob_thumbnail_window_g1

0x50f4,	// (0x0002ab4f) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00034e9e) popup_phob_thumbnail_window_g

0xbcce,	// (0x00031729) level_1_location

0xbcd6,	// (0x00031731) level_2_location

0xbcde,	// (0x00031739) level_3_location

0xbce6,	// (0x00031741) level_4_location

0x503d,	// (0x0002aa98) level_5_location

0x50fc,	// (0x0002ab57) mce_icon_pane_g1

0x5104,	// (0x0002ab5f) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00034ea3) mce_icon_pane_g

0x510c,	// (0x0002ab67) main_mup_pane_g1_ParamLimits

0x510c,	// (0x0002ab67) main_mup_pane_g1

0x5122,	// (0x0002ab7d) main_mup_pane_g2_ParamLimits

0x5122,	// (0x0002ab7d) main_mup_pane_g2

0x513a,	// (0x0002ab95) main_mup_pane_g3_ParamLimits

0x513a,	// (0x0002ab95) main_mup_pane_g3

0x5152,	// (0x0002abad) main_mup_pane_g4_ParamLimits

0x5152,	// (0x0002abad) main_mup_pane_g4

0x5164,	// (0x0002abbf) main_mup_pane_g5_ParamLimits

0x5164,	// (0x0002abbf) main_mup_pane_g5

0x5180,	// (0x0002abdb) main_mup_pane_g6_ParamLimits

0x5180,	// (0x0002abdb) main_mup_pane_g6

0x519a,	// (0x0002abf5) main_mup_pane_g7_ParamLimits

0x519a,	// (0x0002abf5) main_mup_pane_g7

0x51b8,	// (0x0002ac13) main_mup_pane_g8_ParamLimits

0x51b8,	// (0x0002ac13) main_mup_pane_g8

0x51d6,	// (0x0002ac31) main_mup_pane_g9_ParamLimits

0x51d6,	// (0x0002ac31) main_mup_pane_g9

0x51f2,	// (0x0002ac4d) main_mup_pane_g10_ParamLimits

0x51f2,	// (0x0002ac4d) main_mup_pane_g10

0x5210,	// (0x0002ac6b) main_mup_pane_g11_ParamLimits

0x5210,	// (0x0002ac6b) main_mup_pane_g11

0x522a,	// (0x0002ac85) main_mup_pane_g12_ParamLimits

0x522a,	// (0x0002ac85) main_mup_pane_g12

0x5240,	// (0x0002ac9b) main_mup_pane_g13_ParamLimits

0x5240,	// (0x0002ac9b) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00034ea8) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00034ea8) main_mup_pane_g

0x5254,	// (0x0002acaf) main_mup_pane_t1_ParamLimits

0x5254,	// (0x0002acaf) main_mup_pane_t1

0x5270,	// (0x0002accb) main_mup_pane_t2_ParamLimits

0x5270,	// (0x0002accb) main_mup_pane_t2

0x5288,	// (0x0002ace3) main_mup_pane_t3_ParamLimits

0x5288,	// (0x0002ace3) main_mup_pane_t3

0x52a0,	// (0x0002acfb) main_mup_pane_t4_ParamLimits

0x52a0,	// (0x0002acfb) main_mup_pane_t4

0x52be,	// (0x0002ad19) main_mup_pane_t5_ParamLimits

0x52be,	// (0x0002ad19) main_mup_pane_t5

0x52d3,	// (0x0002ad2e) main_mup_pane_t6_ParamLimits

0x52d3,	// (0x0002ad2e) main_mup_pane_t6

0x0005,

0xf468,	// (0x00034ec3) main_mup_pane_t_ParamLimits

0xf468,	// (0x00034ec3) main_mup_pane_t

0x52e5,	// (0x0002ad40) mup_progress_pane_ParamLimits

0x52e5,	// (0x0002ad40) mup_progress_pane

0x52f1,	// (0x0002ad4c) mup_visualizer_pane_ParamLimits

0x52f1,	// (0x0002ad4c) mup_visualizer_pane

0x5325,	// (0x0002ad80) mup_volume_pane_ParamLimits

0x5325,	// (0x0002ad80) mup_volume_pane

0x5343,	// (0x0002ad9e) mup_visualizer_pane_g1_ParamLimits

0x5343,	// (0x0002ad9e) mup_visualizer_pane_g1

0x5343,	// (0x0002ad9e) mup_visualizer_pane_g2_ParamLimits

0x5343,	// (0x0002ad9e) mup_visualizer_pane_g2

0x4ded,	// (0x0002a848) mup_visualizer_pane_g3_ParamLimits

0x4ded,	// (0x0002a848) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00034ed0) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00034ed0) mup_visualizer_pane_g

0x2bc6,	// (0x00028621) mup_volume_pane_g1

0x5359,	// (0x0002adb4) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00034ed7) mup_volume_pane_g

0x2bc6,	// (0x00028621) mup_progress_pane_g1

0x5362,	// (0x0002adbd) mup_progress_pane_g2

0x536b,	// (0x0002adc6) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00034edc) mup_progress_pane_g

0x25e4,	// (0x0002803f) bg_popup_window_pane_cp05

0x5374,	// (0x0002adcf) heading_pane_cp02_ParamLimits

0x5374,	// (0x0002adcf) heading_pane_cp02

0x5390,	// (0x0002adeb) list_popup_blid_pane

0x5398,	// (0x0002adf3) list_blid_sat_info_pane_ParamLimits

0x5398,	// (0x0002adf3) list_blid_sat_info_pane

0x53ab,	// (0x0002ae06) list_blid_sat_info_pane_g1

0x53b3,	// (0x0002ae0e) list_blid_sat_info_pane_t1

0x54cd,	// (0x0002af28) mup_equalizer_pane_ParamLimits

0x54cd,	// (0x0002af28) mup_equalizer_pane

0x54ee,	// (0x0002af49) mup_equalizer_pane_cp1_ParamLimits

0x54ee,	// (0x0002af49) mup_equalizer_pane_cp1

0x550f,	// (0x0002af6a) mup_equalizer_pane_cp2_ParamLimits

0x550f,	// (0x0002af6a) mup_equalizer_pane_cp2

0x5534,	// (0x0002af8f) mup_equalizer_pane_cp3_ParamLimits

0x5534,	// (0x0002af8f) mup_equalizer_pane_cp3

0x555d,	// (0x0002afb8) mup_equalizer_pane_cp4_ParamLimits

0x555d,	// (0x0002afb8) mup_equalizer_pane_cp4

0x5586,	// (0x0002afe1) mup_equalizer_pane_cp5

0x559e,	// (0x0002aff9) mup_equalizer_pane_cp6

0x55b6,	// (0x0002b011) mup_equalizer_pane_cp7

0xbbe8,	// (0x00031643) bg_popup_call_poc_act_pane_g9

0xbbf0,	// (0x0003164b) bg_popup_call_poc_act_pane_g10

0xbbf8,	// (0x00031653) bg_popup_call_poc_act_pane_g11

0x000a,

0x283f,	// (0x0002829a) mup_scale_pane

0x2bc6,	// (0x00028621) mup_scale_pane_g1

0x55ce,	// (0x0002b029) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00034ef8) mup_scale_pane_g

0x5604,	// (0x0002b05f) msg_data_pane

0x560c,	// (0x0002b067) scroll_pane_cp017

0x5614,	// (0x0002b06f) bg_list_pane_cp04_ParamLimits

0x5614,	// (0x0002b06f) bg_list_pane_cp04

0x563c,	// (0x0002b097) msg_data_pane_g1

0x5644,	// (0x0002b09f) msg_data_pane_g2

0x564e,	// (0x0002b0a9) msg_data_pane_g3

0x5658,	// (0x0002b0b3) msg_data_pane_g4

0x5660,	// (0x0002b0bb) msg_data_pane_g5

0x5668,	// (0x0002b0c3) msg_data_pane_g6

0x5670,	// (0x0002b0cb) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00034f07) msg_data_pane_g

0x5678,	// (0x0002b0d3) msg_text_pane_ParamLimits

0x5678,	// (0x0002b0d3) msg_text_pane

0x56a7,	// (0x0002b102) qrid_highlight_pane_cp011_ParamLimits

0x56a7,	// (0x0002b102) qrid_highlight_pane_cp011

0x25e4,	// (0x0002803f) msg_body_pane

0x25e4,	// (0x0002803f) msg_header_pane

0x56c6,	// (0x0002b121) input_focus_pane_cp07

0x56e9,	// (0x0002b144) msg_header_pane_t1_ParamLimits

0x56e9,	// (0x0002b144) msg_header_pane_t1

0x56fd,	// (0x0002b158) msg_header_pane_t2_ParamLimits

0x56fd,	// (0x0002b158) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00034f1b) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00034f1b) msg_header_pane_t

0x570f,	// (0x0002b16a) msg_body_pane_g1

0x5717,	// (0x0002b172) msg_body_pane_t1_ParamLimits

0x5717,	// (0x0002b172) msg_body_pane_t1

0x5748,	// (0x0002b1a3) msg_body_pane_t2_ParamLimits

0x5748,	// (0x0002b1a3) msg_body_pane_t2

0x575a,	// (0x0002b1b5) msg_body_pane_t3_ParamLimits

0x575a,	// (0x0002b1b5) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00034f20) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00034f20) msg_body_pane_t

0x0ee0,	// (0x0002693b) main_viewer_pane_g1_ParamLimits

0x0ee0,	// (0x0002693b) main_viewer_pane_g1

0x0eee,	// (0x00026949) main_viewer_pane_g2_ParamLimits

0x0eee,	// (0x00026949) main_viewer_pane_g2

0x578a,	// (0x0002b1e5) main_viewer_pane_g3_ParamLimits

0x578a,	// (0x0002b1e5) main_viewer_pane_g3

0x5799,	// (0x0002b1f4) main_viewer_pane_g4_ParamLimits

0x5799,	// (0x0002b1f4) main_viewer_pane_g4

0xafdb,	// (0x00030a36) main_viewer_pane_g5_ParamLimits

0xafdb,	// (0x00030a36) main_viewer_pane_g5

0xafdb,	// (0x00030a36) main_viewer_pane_g7_ParamLimits

0xafdb,	// (0x00030a36) main_viewer_pane_g7

0xafed,	// (0x00030a48) main_viewer_pane_g8_ParamLimits

0xafed,	// (0x00030a48) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00034f30) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00034f30) main_viewer_pane_g

0x57a8,	// (0x0002b203) viewer_content_pane_ParamLimits

0x57a8,	// (0x0002b203) viewer_content_pane

0x57e5,	// (0x0002b240) main_postcard_pane_g1_ParamLimits

0x57e5,	// (0x0002b240) main_postcard_pane_g1

0x57fb,	// (0x0002b256) main_postcard_pane_g2_ParamLimits

0x57fb,	// (0x0002b256) main_postcard_pane_g2

0x5811,	// (0x0002b26c) main_postcard_pane_g3_ParamLimits

0x5811,	// (0x0002b26c) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00034f41) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00034f41) main_postcard_pane_g

0x5828,	// (0x0002b283) main_postcard_pane_g4

0xbe18,	// (0x00031873) smil_status_volume_pane_g2

0x586b,	// (0x0002b2c6) postcard_pane_ParamLimits

0x586b,	// (0x0002b2c6) postcard_pane

0x58bb,	// (0x0002b316) postcard_pane_g1_ParamLimits

0x58bb,	// (0x0002b316) postcard_pane_g1

0x58c9,	// (0x0002b324) postcard_pane_g2_ParamLimits

0x58c9,	// (0x0002b324) postcard_pane_g2

0x58d5,	// (0x0002b330) postcard_pane_g3_ParamLimits

0x58d5,	// (0x0002b330) postcard_pane_g3

0x58e1,	// (0x0002b33c) postcard_pane_g4_ParamLimits

0x58e1,	// (0x0002b33c) postcard_pane_g4

0x58ef,	// (0x0002b34a) postcard_pane_g5_ParamLimits

0x58ef,	// (0x0002b34a) postcard_pane_g5

0x5901,	// (0x0002b35c) postcard_pane_g6_ParamLimits

0x5901,	// (0x0002b35c) postcard_pane_g6

0x58bb,	// (0x0002b316) postcard_pane_g7_ParamLimits

0x58bb,	// (0x0002b316) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00034f4e) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00034f4e) postcard_pane_g

0x5919,	// (0x0002b374) main_mp2_pane_g1_ParamLimits

0x5919,	// (0x0002b374) main_mp2_pane_g1

0x5927,	// (0x0002b382) main_mp2_pane_g2_ParamLimits

0x5927,	// (0x0002b382) main_mp2_pane_g2

0x5933,	// (0x0002b38e) main_mp2_pane_g3_ParamLimits

0x5933,	// (0x0002b38e) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00034f5d) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00034f5d) main_mp2_pane_g

0x593f,	// (0x0002b39a) main_mp2_pane_t1_ParamLimits

0x593f,	// (0x0002b39a) main_mp2_pane_t1

0x5956,	// (0x0002b3b1) main_mp2_pane_t2_ParamLimits

0x5956,	// (0x0002b3b1) main_mp2_pane_t2

0x596a,	// (0x0002b3c5) main_mp2_pane_t3_ParamLimits

0x596a,	// (0x0002b3c5) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00034f64) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00034f64) main_mp2_pane_t

0x597c,	// (0x0002b3d7) pec_content_pane_ParamLimits

0x597c,	// (0x0002b3d7) pec_content_pane

0x3a29,	// (0x00029484) scroll_pane_cp015

0x598e,	// (0x0002b3e9) pec_attribute_pane_ParamLimits

0x598e,	// (0x0002b3e9) pec_attribute_pane

0x599e,	// (0x0002b3f9) pec_content_pane_g1_ParamLimits

0x599e,	// (0x0002b3f9) pec_content_pane_g1

0x59aa,	// (0x0002b405) pec_content_pane_t1_ParamLimits

0x59aa,	// (0x0002b405) pec_content_pane_t1

0x59bc,	// (0x0002b417) pec_content_pane_t2_ParamLimits

0x59bc,	// (0x0002b417) pec_content_pane_t2

0x0001,

0xf510,	// (0x00034f6b) pec_content_pane_t_ParamLimits

0xf510,	// (0x00034f6b) pec_content_pane_t

0x59ce,	// (0x0002b429) list_single_graphic_pane_cp01_ParamLimits

0x59ce,	// (0x0002b429) list_single_graphic_pane_cp01

0x283f,	// (0x0002829a) bg_popup_sub_pane_cp04

0x59e8,	// (0x0002b443) popup_mup_playback_window_g1

0x59f4,	// (0x0002b44f) popup_mup_playback_window_t1

0x5a09,	// (0x0002b464) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00034f70) popup_mup_playback_window_t

0x5a5e,	// (0x0002b4b9) main_image_pane_g1_ParamLimits

0x5a5e,	// (0x0002b4b9) main_image_pane_g1

0x5b3b,	// (0x0002b596) scroll_pane_cp018_ParamLimits

0x5b3b,	// (0x0002b596) scroll_pane_cp018

0x5b53,	// (0x0002b5ae) scroll_pane_cp016_ParamLimits

0x5b53,	// (0x0002b5ae) scroll_pane_cp016

0x5b87,	// (0x0002b5e2) smil2_image_pane_ParamLimits

0x5b87,	// (0x0002b5e2) smil2_image_pane

0x5bbd,	// (0x0002b618) smil2_root_pane_ParamLimits

0x5bbd,	// (0x0002b618) smil2_root_pane

0x5bf5,	// (0x0002b650) smil2_text_pane_ParamLimits

0x5bf5,	// (0x0002b650) smil2_text_pane

0x25e4,	// (0x0002803f) bg_list_pane_cp06

0x5c8d,	// (0x0002b6e8) grid_radio_pane

0x25e4,	// (0x0002803f) bg_popup_window_pane_cp06

0x5c97,	// (0x0002b6f2) main_fmradio_pane_t1

0x4a41,	// (0x0002a49c) heading_pane_cp04

0x5ca5,	// (0x0002b700) main_fmradio_pane_t2

0xbc00,	// (0x0003165b) popup_cale_lunar_info_window_g1

0x5cb3,	// (0x0002b70e) main_fmradio_pane_t3

0xbc08,	// (0x00031663) popup_cale_lunar_info_window_g2

0x5cc3,	// (0x0002b71e) main_fmradio_pane_t4

0x0001,

0x5cd1,	// (0x0002b72c) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0003504b) popup_cale_lunar_info_window_g

0xf52a,	// (0x00034f85) main_fmradio_pane_t

0x5cdf,	// (0x0002b73a) wait_bar_pane_cp03

0x5ce7,	// (0x0002b742) cell_fmradio_pane_ParamLimits

0x5ce7,	// (0x0002b742) cell_fmradio_pane

0x58bb,	// (0x0002b316) cell_fmradio_pane_g1_ParamLimits

0x58bb,	// (0x0002b316) cell_fmradio_pane_g1

0x25e4,	// (0x0002803f) grid_highlight_pane_cp011

0x5cfc,	// (0x0002b757) poc_content_pane_ParamLimits

0x5cfc,	// (0x0002b757) poc_content_pane

0x5d0e,	// (0x0002b769) scroll_pane_cp019

0x5d16,	// (0x0002b771) popup_call_poc_act_window_ParamLimits

0x5d16,	// (0x0002b771) popup_call_poc_act_window

0x5d3a,	// (0x0002b795) popup_call_poc_inact_window_ParamLimits

0x5d3a,	// (0x0002b795) popup_call_poc_inact_window

0xf5c7,	// (0x00035022) bg_popup_call_poc_act_pane_g

0xbb78,	// (0x000315d3) bg_popup_call_poc_inact_pane_g1

0xbb80,	// (0x000315db) bg_popup_call_poc_inact_pane_g2

0x5d53,	// (0x0002b7ae) popup_call_poc_act_window_g2

0xbb88,	// (0x000315e3) bg_popup_call_poc_inact_pane_g3

0xbb90,	// (0x000315eb) bg_popup_call_poc_inact_pane_g4

0xbb98,	// (0x000315f3) bg_popup_call_poc_inact_pane_g5

0x5d5b,	// (0x0002b7b6) popup_call_poc_act_window_t1_ParamLimits

0x5d5b,	// (0x0002b7b6) popup_call_poc_act_window_t1

0x5d83,	// (0x0002b7de) popup_call_poc_act_window_t2_ParamLimits

0x5d83,	// (0x0002b7de) popup_call_poc_act_window_t2

0x5dab,	// (0x0002b806) popup_call_poc_act_window_t3_ParamLimits

0x5dab,	// (0x0002b806) popup_call_poc_act_window_t3

0x5dd3,	// (0x0002b82e) popup_call_poc_act_window_t4_ParamLimits

0x5dd3,	// (0x0002b82e) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00034f90) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00034f90) popup_call_poc_act_window_t

0xbba0,	// (0x000315fb) bg_popup_call_poc_inact_pane_g6

0xbba8,	// (0x00031603) bg_popup_call_poc_inact_pane_g7

0xbbb0,	// (0x0003160b) bg_popup_call_poc_inact_pane_g8

0x5de5,	// (0x0002b840) popup_call_poc_inact_window_g2

0xbbb8,	// (0x00031613) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0003500f) bg_popup_call_poc_inact_pane_g

0x5ded,	// (0x0002b848) popup_call_poc_inact_window_t1_ParamLimits

0x5ded,	// (0x0002b848) popup_call_poc_inact_window_t1

0x5e02,	// (0x0002b85d) popup_call_poc_inact_window_t2_ParamLimits

0x5e02,	// (0x0002b85d) popup_call_poc_inact_window_t2

0x5e17,	// (0x0002b872) popup_call_poc_inact_window_t3_ParamLimits

0x5e17,	// (0x0002b872) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00034f99) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00034f99) popup_call_poc_inact_window_t

0xbd78,	// (0x000317d3) context_pane_ParamLimits

0x6955,	// (0x0002c3b0) signal_pane_ParamLimits

0x503d,	// (0x0002aa98) main_call2_pane

0xbd66,	// (0x000317c1) popup_phob_thumbnail2_window_ParamLimits

0xbd66,	// (0x000317c1) popup_phob_thumbnail2_window

0xafc3,	// (0x00030a1e) aid_hotspot_pointer_arrow_pane

0xafcb,	// (0x00030a26) aid_hotspot_pointer_hand_pane

0x6415,	// (0x0002be70) phob_pre_status_pane_g5

0x310e,	// (0x00028b69) cams_zoom_pane_ParamLimits

0x311d,	// (0x00028b78) image_vga_pane_ParamLimits

0x3137,	// (0x00028b92) main_camera_pane_g1_ParamLimits

0x3149,	// (0x00028ba4) main_camera_pane_g2_ParamLimits

0x3159,	// (0x00028bb4) main_camera_pane_g3_ParamLimits

0x316d,	// (0x00028bc8) main_camera_pane_g4_ParamLimits

0x3181,	// (0x00028bdc) main_camera_pane_g5_ParamLimits

0x3195,	// (0x00028bf0) main_camera_pane_g6_ParamLimits

0x31a9,	// (0x00028c04) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00034c98) main_camera_pane_g_ParamLimits

0x31c9,	// (0x00028c24) main_camera_pane_t1_ParamLimits

0x31df,	// (0x00028c3a) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00034ca9) main_camera_pane_t_ParamLimits

0x283f,	// (0x0002829a) bg_popup_preview_window_pane_cp01_ParamLimits

0x283f,	// (0x0002829a) bg_popup_preview_window_pane_cp01

0x5e2c,	// (0x0002b887) popup_phob_thumbnail2_window_g1_ParamLimits

0x5e2c,	// (0x0002b887) popup_phob_thumbnail2_window_g1

0x25e4,	// (0x0002803f) call2_cli_visual_pane

0x5e53,	// (0x0002b8ae) popup_call2_audio_conf_window_ParamLimits

0x5e53,	// (0x0002b8ae) popup_call2_audio_conf_window

0x5e7b,	// (0x0002b8d6) popup_call2_audio_first_window_ParamLimits

0x5e7b,	// (0x0002b8d6) popup_call2_audio_first_window

0x5f11,	// (0x0002b96c) popup_call2_audio_in_window_ParamLimits

0x5f11,	// (0x0002b96c) popup_call2_audio_in_window

0x5f5d,	// (0x0002b9b8) popup_call2_audio_out_window_ParamLimits

0x5f5d,	// (0x0002b9b8) popup_call2_audio_out_window

0x5fcf,	// (0x0002ba2a) popup_call2_audio_second_window_ParamLimits

0x5fcf,	// (0x0002ba2a) popup_call2_audio_second_window

0x6035,	// (0x0002ba90) popup_call2_audio_wait_window_ParamLimits

0x6035,	// (0x0002ba90) popup_call2_audio_wait_window

0x25e4,	// (0x0002803f) bg_popup_call2_act_pane_cp03

0x2821,	// (0x0002827c) list_conf_pane_cp

0x606f,	// (0x0002baca) popup_call2_audio_conf_window_t1

0x607d,	// (0x0002bad8) list_single_graphic_popup_conf2_pane_ParamLimits

0x607d,	// (0x0002bad8) list_single_graphic_popup_conf2_pane

0x4ad4,	// (0x0002a52f) list_highlight_pane_cp04

0x6090,	// (0x0002baeb) list_single_graphic_popup_conf2_pane_g1

0x4ae5,	// (0x0002a540) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00034fa0) list_single_graphic_popup_conf2_pane_g

0x609a,	// (0x0002baf5) list_single_graphic_popup_conf2_pane_t1

0x60a8,	// (0x0002bb03) bg_popup_call2_act_pane_cp01_ParamLimits

0x60a8,	// (0x0002bb03) bg_popup_call2_act_pane_cp01

0x6132,	// (0x0002bb8d) call_type_pane_cp05_ParamLimits

0x6132,	// (0x0002bb8d) call_type_pane_cp05

0x6186,	// (0x0002bbe1) popup_call2_audio_second_window_g1_ParamLimits

0x6186,	// (0x0002bbe1) popup_call2_audio_second_window_g1

0x61da,	// (0x0002bc35) popup_call2_audio_second_window_g2_ParamLimits

0x61da,	// (0x0002bc35) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00034fa5) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00034fa5) popup_call2_audio_second_window_g

0x623f,	// (0x0002bc9a) popup_call2_audio_second_window_t1_ParamLimits

0x623f,	// (0x0002bc9a) popup_call2_audio_second_window_t1

0xb005,	// (0x00030a60) popup_call2_audio_second_window_t2_ParamLimits

0xb005,	// (0x00030a60) popup_call2_audio_second_window_t2

0xb058,	// (0x00030ab3) popup_call2_audio_second_window_t3_ParamLimits

0xb058,	// (0x00030ab3) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00034fac) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00034fac) popup_call2_audio_second_window_t

0x25e4,	// (0x0002803f) bg_popup_call2_in_pane_cp02

0x25ee,	// (0x00028049) call_type_pane_cp04

0x25f6,	// (0x00028051) popup_call2_audio_wait_window_g1

0x25fe,	// (0x00028059) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00034b85) popup_call2_audio_wait_window_g

0x2606,	// (0x00028061) popup_call2_audio_wait_window_t3

0xb14b,	// (0x00030ba6) bg_popup_call2_act_pane_ParamLimits

0xb14b,	// (0x00030ba6) bg_popup_call2_act_pane

0xb20b,	// (0x00030c66) call_type_pane_cp03_ParamLimits

0xb20b,	// (0x00030c66) call_type_pane_cp03

0xb26f,	// (0x00030cca) popup_call2_audio_first_window_g1_ParamLimits

0xb26f,	// (0x00030cca) popup_call2_audio_first_window_g1

0xb2df,	// (0x00030d3a) popup_call2_audio_first_window_g2_ParamLimits

0xb2df,	// (0x00030d3a) popup_call2_audio_first_window_g2

0x5343,	// (0x0002ad9e) popup_call2_audio_first_window_g3_ParamLimits

0x5343,	// (0x0002ad9e) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00034fb5) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00034fb5) popup_call2_audio_first_window_g

0xb3bd,	// (0x00030e18) popup_call2_audio_first_window_t1_ParamLimits

0xb3bd,	// (0x00030e18) popup_call2_audio_first_window_t1

0xb4c0,	// (0x00030f1b) popup_call2_audio_first_window_t4_ParamLimits

0xb4c0,	// (0x00030f1b) popup_call2_audio_first_window_t4

0xb5a3,	// (0x00030ffe) popup_call2_audio_first_window_t5_ParamLimits

0xb5a3,	// (0x00030ffe) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00034fc0) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00034fc0) popup_call2_audio_first_window_t

0x2837,	// (0x00028292) bg_popup_call2_act_pane_g1

0xbc12,	// (0x0003166d) popup_cale_lunar_info_window_t1

0xbc20,	// (0x0003167b) popup_cale_lunar_info_window_t2

0xbc2e,	// (0x00031689) popup_cale_lunar_info_window_t3

0x25e4,	// (0x0002803f) bg_popup_call2_bubble_pane

0xb6a4,	// (0x000310ff) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6a4,	// (0x000310ff) bg_popup_call2_in_pane_cp01

0x229c,	// (0x00027cf7) call_type_pane_cp02

0xb6ec,	// (0x00031147) popup_call2_audio_out_window_g1_ParamLimits

0xb6ec,	// (0x00031147) popup_call2_audio_out_window_g1

0xb718,	// (0x00031173) popup_call2_audio_out_window_g2_ParamLimits

0xb718,	// (0x00031173) popup_call2_audio_out_window_g2

0xb740,	// (0x0003119b) popup_call2_audio_out_window_g3_ParamLimits

0xb740,	// (0x0003119b) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00034fc9) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00034fc9) popup_call2_audio_out_window_g

0xb77b,	// (0x000311d6) popup_call2_audio_out_window_t1_ParamLimits

0xb77b,	// (0x000311d6) popup_call2_audio_out_window_t1

0xb7da,	// (0x00031235) popup_call2_audio_out_window_t2_ParamLimits

0xb7da,	// (0x00031235) popup_call2_audio_out_window_t2

0xb82e,	// (0x00031289) popup_call2_audio_out_window_t3_ParamLimits

0xb82e,	// (0x00031289) popup_call2_audio_out_window_t3

0xb844,	// (0x0003129f) popup_call2_audio_out_window_t4_ParamLimits

0xb844,	// (0x0003129f) popup_call2_audio_out_window_t4

0xb85a,	// (0x000312b5) popup_call2_audio_out_window_t5_ParamLimits

0xb85a,	// (0x000312b5) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00034fd2) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00034fd2) popup_call2_audio_out_window_t

0xb8be,	// (0x00031319) bg_popup_call2_in_pane_ParamLimits

0xb8be,	// (0x00031319) bg_popup_call2_in_pane

0xb91a,	// (0x00031375) popup_call2_audio_in_window_g1_ParamLimits

0xb91a,	// (0x00031375) popup_call2_audio_in_window_g1

0xb952,	// (0x000313ad) popup_call2_audio_in_window_g2_ParamLimits

0xb952,	// (0x000313ad) popup_call2_audio_in_window_g2

0xb98a,	// (0x000313e5) popup_call2_audio_in_window_g3_ParamLimits

0xb98a,	// (0x000313e5) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00034fdf) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00034fdf) popup_call2_audio_in_window_g

0xb9e2,	// (0x0003143d) popup_call2_audio_in_window_t1_ParamLimits

0xb9e2,	// (0x0003143d) popup_call2_audio_in_window_t1

0xba62,	// (0x000314bd) popup_call2_audio_in_window_t2_ParamLimits

0xba62,	// (0x000314bd) popup_call2_audio_in_window_t2

0xbae2,	// (0x0003153d) popup_call2_audio_in_window_t3_ParamLimits

0xbae2,	// (0x0003153d) popup_call2_audio_in_window_t3

0xbafc,	// (0x00031557) popup_call2_audio_in_window_t4_ParamLimits

0xbafc,	// (0x00031557) popup_call2_audio_in_window_t4

0xbb0e,	// (0x00031569) popup_call2_audio_in_window_t5_ParamLimits

0xbb0e,	// (0x00031569) popup_call2_audio_in_window_t5

0xbb23,	// (0x0003157e) popup_call2_audio_in_window_t6_ParamLimits

0xbb23,	// (0x0003157e) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00034fe8) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00034fe8) popup_call2_audio_in_window_t

0x2837,	// (0x00028292) bg_popup_call2_in_pane_g1

0xbc3c,	// (0x00031697) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00035050) popup_cale_lunar_info_window_t

0x283f,	// (0x0002829a) bg_popup_call2_rect_pane_ParamLimits

0x283f,	// (0x0002829a) bg_popup_call2_rect_pane

0x25e4,	// (0x0002803f) call2_cli_visual_graphic_pane

0x25e4,	// (0x0002803f) call2_cli_visual_text_pane

0xbe2b,	// (0x00031886) smil_status_volume_pane_g3

0x0002,

0x2bc6,	// (0x00028621) call2_cli_visual_graphic_pane_g1

0x2bc6,	// (0x00028621) call2_cli_visual_graphic_pane_g2

0x2bc6,	// (0x00028621) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00034ff5) call2_cli_visual_graphic_pane_g

0xbb38,	// (0x00031593) bg_popup_call2_rect_pane_g1

0x2cde,	// (0x00028739) bg_popup_call2_rect_pane_g2

0xbb40,	// (0x0003159b) bg_popup_call2_rect_pane_g3

0xbb48,	// (0x000315a3) bg_popup_call2_rect_pane_g4

0xbb50,	// (0x000315ab) bg_popup_call2_rect_pane_g5

0xbb58,	// (0x000315b3) bg_popup_call2_rect_pane_g6

0xbb60,	// (0x000315bb) bg_popup_call2_rect_pane_g7

0xbb68,	// (0x000315c3) bg_popup_call2_rect_pane_g8

0xbb70,	// (0x000315cb) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00034ffc) bg_popup_call2_rect_pane_g

0xbb78,	// (0x000315d3) bg_popup_call2_bubble_pane_g1

0xbb80,	// (0x000315db) bg_popup_call2_bubble_pane_g2

0xbb88,	// (0x000315e3) bg_popup_call2_bubble_pane_g3

0xbb90,	// (0x000315eb) bg_popup_call2_bubble_pane_g4

0xbb98,	// (0x000315f3) bg_popup_call2_bubble_pane_g5

0xbba0,	// (0x000315fb) bg_popup_call2_bubble_pane_g6

0xbba8,	// (0x00031603) bg_popup_call2_bubble_pane_g7

0xbbb0,	// (0x0003160b) bg_popup_call2_bubble_pane_g8

0xbbb8,	// (0x00031613) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003500f) bg_popup_call2_bubble_pane_g

0x2d65,	// (0x000287c0) aid_cale_week_size_cell_pane

0x31f9,	// (0x00028c54) aid_cams_cif_uncrop_pane_ParamLimits

0x31f9,	// (0x00028c54) aid_cams_cif_uncrop_pane

0x33f0,	// (0x00028e4b) aid_cams_size_cell_ParamLimits

0x33f0,	// (0x00028e4b) aid_cams_size_cell

0x3404,	// (0x00028e5f) grid_cams_pane_ParamLimits

0x341e,	// (0x00028e79) linegrid_cams_pane_ParamLimits

0x364f,	// (0x000290aa) call_video_pane_t1

0x3661,	// (0x000290bc) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00034cfc) call_video_pane_t

0x3c89,	// (0x000296e4) aid_cale_month_size_cell_pane_ParamLimits

0x3c89,	// (0x000296e4) aid_cale_month_size_cell_pane

0xf63e,	// (0x00035099) smil_status_volume_pane_g

0xbe38,	// (0x00031893) volume_smil_pane_ParamLimits

0x1e9e,	// (0x000278f9) aid_popup2_width_pane

0x2c37,	// (0x00028692) cell_qdial_pane_g4_ParamLimits

0x2c37,	// (0x00028692) cell_qdial_pane_g4

0x4dc9,	// (0x0002a824) aid_blid_cardinal_pane_ParamLimits

0x4dd9,	// (0x0002a834) aid_blid_destination_pane_ParamLimits

0x4dd9,	// (0x0002a834) aid_blid_destination_pane

0x283f,	// (0x0002829a) bg_popup_call_poc_act_pane_ParamLimits

0x283f,	// (0x0002829a) bg_popup_call_poc_act_pane

0x283f,	// (0x0002829a) bg_popup_call_poc_inact_pane_ParamLimits

0x283f,	// (0x0002829a) bg_popup_call_poc_inact_pane

0xbbc0,	// (0x0003161b) bg_popup_call_poc_act_pane_g1

0xbbc8,	// (0x00031623) bg_popup_call_poc_act_pane_g2

0xbbd0,	// (0x0003162b) bg_popup_call_poc_act_pane_g3

0xbb90,	// (0x000315eb) bg_popup_call_poc_act_pane_g4

0xbb98,	// (0x000315f3) bg_popup_call_poc_act_pane_g5

0xbbd8,	// (0x00031633) bg_popup_call_poc_act_pane_g6

0xbba8,	// (0x00031603) bg_popup_call_poc_act_pane_g7

0xbbe0,	// (0x0003163b) bg_popup_call_poc_act_pane_g8

0x25e4,	// (0x0002803f) main_usb_pane

0xbd3d,	// (0x00031798) popup_cale_lunar_info_window

0x3905,	// (0x00029360) im_reading_pane_t1_ParamLimits

0x3944,	// (0x0002939f) list_im_pane_ParamLimits

0x3955,	// (0x000293b0) scroll_pane_cp07_ParamLimits

0x25e4,	// (0x0002803f) grid_highlight_pane_cp012

0x283f,	// (0x0002829a) mup_scale_pane_ParamLimits

0x58bb,	// (0x0002b316) main_usb_pane_g1_ParamLimits

0x58bb,	// (0x0002b316) main_usb_pane_g1

0x6321,	// (0x0002bd7c) main_usb_pane_g2_ParamLimits

0x6321,	// (0x0002bd7c) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00035039) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00035039) main_usb_pane_g

0x6337,	// (0x0002bd92) main_usb_pane_t1_ParamLimits

0x6337,	// (0x0002bd92) main_usb_pane_t1

0x6349,	// (0x0002bda4) main_usb_pane_t2_ParamLimits

0x6349,	// (0x0002bda4) main_usb_pane_t2

0x635b,	// (0x0002bdb6) main_usb_pane_t3_ParamLimits

0x635b,	// (0x0002bdb6) main_usb_pane_t3

0x636d,	// (0x0002bdc8) main_usb_pane_t4_ParamLimits

0x636d,	// (0x0002bdc8) main_usb_pane_t4

0x6382,	// (0x0002bddd) main_usb_pane_t5_ParamLimits

0x6382,	// (0x0002bddd) main_usb_pane_t5

0x6397,	// (0x0002bdf2) main_usb_pane_t6_ParamLimits

0x6397,	// (0x0002bdf2) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0003503e) main_usb_pane_t_ParamLimits

0x4d68,	// (0x0002a7c3) aid_text_placing

0x4d73,	// (0x0002a7ce) main_location2_pane_t1_ParamLimits

0x4d89,	// (0x0002a7e4) main_location2_pane_t2_ParamLimits

0x4d9f,	// (0x0002a7fa) main_location2_pane_t3_ParamLimits

0x4db5,	// (0x0002a810) main_location2_pane_t4_ParamLimits

0x4db5,	// (0x0002a810) main_location2_pane_t4

0xf402,	// (0x00034e5d) main_location2_pane_t_ParamLimits

0x291b,	// (0x00028376) find_pinb_pane_g2_ParamLimits

0x291b,	// (0x00028376) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00034bab) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00034bab) find_pinb_pane_g

0x2927,	// (0x00028382) find_pinb_pane_t1_ParamLimits

0x2939,	// (0x00028394) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00034bb0) find_pinb_pane_t_ParamLimits

0x25e4,	// (0x0002803f) main_call3_pane

0x4032,	// (0x00029a8d) cale_month_day_heading_pane_t1_ParamLimits

0x4090,	// (0x00029aeb) cale_month_day_heading_pane_t2_ParamLimits

0x40f5,	// (0x00029b50) cale_month_day_heading_pane_t3_ParamLimits

0x415a,	// (0x00029bb5) cale_month_day_heading_pane_t4_ParamLimits

0x41bf,	// (0x00029c1a) cale_month_day_heading_pane_t5_ParamLimits

0x4224,	// (0x00029c7f) cale_month_day_heading_pane_t6_ParamLimits

0x4289,	// (0x00029ce4) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00034d34) cale_month_day_heading_pane_t_ParamLimits

0x4485,	// (0x00029ee0) smil_status_volume_pane

0x588f,	// (0x0002b2ea) postcard_address_pane_ParamLimits

0x588f,	// (0x0002b2ea) postcard_address_pane

0x58a5,	// (0x0002b300) postcard_message_pane_ParamLimits

0x58a5,	// (0x0002b300) postcard_message_pane

0x62fa,	// (0x0002bd55) call2_cli_visual_pane_t1_ParamLimits

0x62fa,	// (0x0002bd55) call2_cli_visual_pane_t1

0x6b66,	// (0x0002c5c1) postcard_message_pane_t1_ParamLimits

0x6b66,	// (0x0002c5c1) postcard_message_pane_t1

0xbe4d,	// (0x000318a8) postcard_address_pane_t1_ParamLimits

0xbe4d,	// (0x000318a8) postcard_address_pane_t1

0x6b52,	// (0x0002c5ad) popup_call3_audio_in_window_ParamLimits

0x6b52,	// (0x0002c5ad) popup_call3_audio_in_window

0x69d7,	// (0x0002c432) bg_popup_call3_in_pane_ParamLimits

0x69d7,	// (0x0002c432) bg_popup_call3_in_pane

0x6a53,	// (0x0002c4ae) popup_call3_audio_in_window_g1_ParamLimits

0x6a53,	// (0x0002c4ae) popup_call3_audio_in_window_g1

0x6a73,	// (0x0002c4ce) popup_call3_audio_in_window_g2_ParamLimits

0x6a73,	// (0x0002c4ce) popup_call3_audio_in_window_g2

0x6a93,	// (0x0002c4ee) popup_call3_audio_in_window_g3_ParamLimits

0x6a93,	// (0x0002c4ee) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x000350a0) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x000350a0) popup_call3_audio_in_window_g

0x6ac4,	// (0x0002c51f) popup_call3_audio_in_window_t1_ParamLimits

0x6ac4,	// (0x0002c51f) popup_call3_audio_in_window_t1

0x6b02,	// (0x0002c55d) popup_call3_audio_in_window_t2_ParamLimits

0x6b02,	// (0x0002c55d) popup_call3_audio_in_window_t2

0x6b40,	// (0x0002c59b) popup_call3_audio_in_window_t3_ParamLimits

0x6b40,	// (0x0002c59b) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x000350a9) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x000350a9) popup_call3_audio_in_window_t

0x503d,	// (0x0002aa98) bg_popup_call3_rect_pane

0xbb38,	// (0x00031593) bg_popup_call3_rect_pane_g1

0x2cde,	// (0x00028739) bg_popup_call3_rect_pane_g2

0xbb40,	// (0x0003159b) bg_popup_call3_rect_pane_g3

0xbb48,	// (0x000315a3) bg_popup_call3_rect_pane_g4

0xbb50,	// (0x000315ab) bg_popup_call3_rect_pane_g5

0xbb58,	// (0x000315b3) bg_popup_call3_rect_pane_g6

0xbb60,	// (0x000315bb) bg_popup_call3_rect_pane_g7

0x533b,	// (0x0002ad96) mup_visualizer_osc_pane

0x5351,	// (0x0002adac) mup_visualizer_spec_pane

0x6a07,	// (0x0002c462) call3_video_qcif_pane_ParamLimits

0x6a07,	// (0x0002c462) call3_video_qcif_pane

0x6a1a,	// (0x0002c475) call3_video_qcif_uncrop_pane_ParamLimits

0x6a1a,	// (0x0002c475) call3_video_qcif_uncrop_pane

0x6a2a,	// (0x0002c485) call3_video_subqcif_pane_ParamLimits

0x6a2a,	// (0x0002c485) call3_video_subqcif_pane

0x6a40,	// (0x0002c49b) call3_video_subqcif_uncrop_pane_ParamLimits

0x6a40,	// (0x0002c49b) call3_video_subqcif_uncrop_pane

0x6ab3,	// (0x0002c50e) popup_call3_audio_in_window_g4_ParamLimits

0x6ab3,	// (0x0002c50e) popup_call3_audio_in_window_g4

0x69c6,	// (0x0002c421) mup_spec_half_pane

0x69cf,	// (0x0002c42a) mup_spec_half_pane_cp

0xbdeb,	// (0x00031846) mup_osc_middle_pane

0xbdf4,	// (0x0003184f) mup_visualizer_osc_pane_g1

0x69a6,	// (0x0002c401) mup_spec_bar_pane_ParamLimits

0x69a6,	// (0x0002c401) mup_spec_bar_pane

0xbdd8,	// (0x00031833) mup_spec_bar_pane_g1

0xbde2,	// (0x0003183d) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00035094) mup_spec_bar_pane_g

0x2d65,	// (0x000287c0) aid_cale_week_size_cell_pane_ParamLimits

0x2d78,	// (0x000287d3) bg_cale_heading_pane_ParamLimits

0x2d94,	// (0x000287ef) bg_cale_pane_cp01_ParamLimits

0x2dad,	// (0x00028808) cale_week_corner_pane_ParamLimits

0x2dc3,	// (0x0002881e) cale_week_day_heading_pane_ParamLimits

0x2ddf,	// (0x0002883a) cale_week_scroll_pane_g1_ParamLimits

0x2df8,	// (0x00028853) cale_week_scroll_pane_g2_ParamLimits

0x2e09,	// (0x00028864) cale_week_scroll_pane_g3_ParamLimits

0x2e1a,	// (0x00028875) cale_week_scroll_pane_g4_ParamLimits

0x2e2b,	// (0x00028886) cale_week_scroll_pane_g5_ParamLimits

0x2e3c,	// (0x00028897) cale_week_scroll_pane_g6_ParamLimits

0x2e4d,	// (0x000288a8) cale_week_scroll_pane_g7_ParamLimits

0x2e5e,	// (0x000288b9) cale_week_scroll_pane_g8_ParamLimits

0x2e6f,	// (0x000288ca) cale_week_scroll_pane_g9_ParamLimits

0x2e80,	// (0x000288db) cale_week_scroll_pane_g10_ParamLimits

0x2e91,	// (0x000288ec) cale_week_scroll_pane_g11_ParamLimits

0x2ea2,	// (0x000288fd) cale_week_scroll_pane_g12_ParamLimits

0x2eb3,	// (0x0002890e) cale_week_scroll_pane_g13_ParamLimits

0x2ecc,	// (0x00028927) cale_week_scroll_pane_g14_ParamLimits

0x2ee5,	// (0x00028940) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00034c3c) cale_week_scroll_pane_g_ParamLimits

0x2efe,	// (0x00028959) cale_week_time_pane_ParamLimits

0x2f0f,	// (0x0002896a) grid_cale_week_pane_ParamLimits

0x2f2a,	// (0x00028985) listscroll_cale_week_pane_t1

0x2f3c,	// (0x00028997) scroll_pane_cp08_ParamLimits

0x3cfd,	// (0x00029758) cale_month_corner_pane_ParamLimits

0x3fe1,	// (0x00029a3c) cale_month_pane_t1

0x3ff3,	// (0x00029a4e) cale_month_week_pane_ParamLimits

0x49a0,	// (0x0002a3fb) popup_call_status_window_g1_ParamLimits

0x49b4,	// (0x0002a40f) popup_call_status_window_g2_ParamLimits

0x49c8,	// (0x0002a423) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00034de4) popup_call_status_window_g_ParamLimits

0x4a31,	// (0x0002a48c) aid_call2_pane

0x56cf,	// (0x0002b12a) msg_header_pane_g1

0x588f,	// (0x0002b2ea) postcard_address2_pane_ParamLimits

0x588f,	// (0x0002b2ea) postcard_address2_pane

0x58a5,	// (0x0002b300) postcard_message2_pane_ParamLimits

0x58a5,	// (0x0002b300) postcard_message2_pane

0x6963,	// (0x0002c3be) message2_row_pane_ParamLimits

0x6963,	// (0x0002c3be) message2_row_pane

0xbd93,	// (0x000317ee) address2_row_pane_ParamLimits

0xbd93,	// (0x000317ee) address2_row_pane

0xbda6,	// (0x00031801) postcard_message2_row_pane_g1

0xbdae,	// (0x00031809) postcard_message2_row_pane_t1

0xbda6,	// (0x00031801) address2_row_pane_g1

0xbdae,	// (0x00031809) address2_row_pane_t1

0x0e96,	// (0x000268f1) aid_size_cell_vorec

0x25e4,	// (0x0002803f) main_rss_pane

0x6986,	// (0x0002c3e1) rss_list_single_pane_ParamLimits

0x6986,	// (0x0002c3e1) rss_list_single_pane

0xbdbc,	// (0x00031817) rss_list_single_pane_t1

0xbdca,	// (0x00031825) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0003508f) rss_list_single_pane_t

0x25e4,	// (0x0002803f) main_camera2_pane

0x25e4,	// (0x0002803f) main_video2_pane

0x0f50,	// (0x000269ab) cams_zoom_pane_cp2_ParamLimits

0x0f50,	// (0x000269ab) cams_zoom_pane_cp2

0x0f67,	// (0x000269c2) image2_vga_pane_ParamLimits

0x0f67,	// (0x000269c2) image2_vga_pane

0x0faf,	// (0x00026a0a) main_camera2_pane_g1_ParamLimits

0x0faf,	// (0x00026a0a) main_camera2_pane_g1

0x0fcf,	// (0x00026a2a) main_camera2_pane_g2_ParamLimits

0x0fcf,	// (0x00026a2a) main_camera2_pane_g2

0x0fe6,	// (0x00026a41) main_camera2_pane_g3_ParamLimits

0x0fe6,	// (0x00026a41) main_camera2_pane_g3

0x0ffd,	// (0x00026a58) main_camera2_pane_g4_ParamLimits

0x0ffd,	// (0x00026a58) main_camera2_pane_g4

0x1014,	// (0x00026a6f) main_camera2_pane_g5_ParamLimits

0x1014,	// (0x00026a6f) main_camera2_pane_g5

0x102b,	// (0x00026a86) main_camera2_pane_g6_ParamLimits

0x102b,	// (0x00026a86) main_camera2_pane_g6

0x1042,	// (0x00026a9d) main_camera2_pane_g7_ParamLimits

0x1042,	// (0x00026a9d) main_camera2_pane_g7

0x1059,	// (0x00026ab4) main_camera2_pane_g8_ParamLimits

0x1059,	// (0x00026ab4) main_camera2_pane_g8

0x0008,

0xf655,	// (0x000350b0) main_camera2_pane_g_ParamLimits

0xf655,	// (0x000350b0) main_camera2_pane_g

0x1087,	// (0x00026ae2) main_camera2_pane_t1_ParamLimits

0x1087,	// (0x00026ae2) main_camera2_pane_t1

0x10bc,	// (0x00026b17) main_camera2_pane_t2_ParamLimits

0x10bc,	// (0x00026b17) main_camera2_pane_t2

0x10d9,	// (0x00026b34) main_camera2_pane_t3_ParamLimits

0x10d9,	// (0x00026b34) main_camera2_pane_t3

0x1137,	// (0x00026b92) main_camera2_pane_t4_ParamLimits

0x1137,	// (0x00026b92) main_camera2_pane_t4

0x0006,

0xf668,	// (0x000350c3) main_camera2_pane_t_ParamLimits

0xf668,	// (0x000350c3) main_camera2_pane_t

0x11c0,	// (0x00026c1b) cams_zoom_pane_cp4_ParamLimits

0x11c0,	// (0x00026c1b) cams_zoom_pane_cp4

0x11d6,	// (0x00026c31) image2_cif_pane_ParamLimits

0x11d6,	// (0x00026c31) image2_cif_pane

0x1201,	// (0x00026c5c) image2_subqcif_pane_ParamLimits

0x1201,	// (0x00026c5c) image2_subqcif_pane

0x121c,	// (0x00026c77) main_video2_pane_g1_ParamLimits

0x121c,	// (0x00026c77) main_video2_pane_g1

0x1236,	// (0x00026c91) main_video2_pane_g2_ParamLimits

0x1236,	// (0x00026c91) main_video2_pane_g2

0x124c,	// (0x00026ca7) main_video2_pane_g3_ParamLimits

0x124c,	// (0x00026ca7) main_video2_pane_g3

0x1262,	// (0x00026cbd) main_video2_pane_g4_ParamLimits

0x1262,	// (0x00026cbd) main_video2_pane_g4

0x1278,	// (0x00026cd3) main_video2_pane_g5_ParamLimits

0x1278,	// (0x00026cd3) main_video2_pane_g5

0x128e,	// (0x00026ce9) main_video2_pane_g6_ParamLimits

0x128e,	// (0x00026ce9) main_video2_pane_g6

0x0005,

0xf677,	// (0x000350d2) main_video2_pane_g_ParamLimits

0xf677,	// (0x000350d2) main_video2_pane_g

0x12a8,	// (0x00026d03) main_video2_pane_t1_ParamLimits

0x12a8,	// (0x00026d03) main_video2_pane_t1

0x12cc,	// (0x00026d27) main_video2_pane_t2_ParamLimits

0x12cc,	// (0x00026d27) main_video2_pane_t2

0x131c,	// (0x00026d77) main_video2_pane_t3_ParamLimits

0x131c,	// (0x00026d77) main_video2_pane_t3

0x0002,

0xf684,	// (0x000350df) main_video2_pane_t_ParamLimits

0xf684,	// (0x000350df) main_video2_pane_t

0x6455,	// (0x0002beb0) call_muted_g2

0x0001,

0xf626,	// (0x00035081) call_muted_g

0x25e4,	// (0x0002803f) main_mup2_pane

0x6b81,	// (0x0002c5dc) main_mup2_pane_g1_ParamLimits

0x6b81,	// (0x0002c5dc) main_mup2_pane_g1

0x6b8d,	// (0x0002c5e8) main_mup2_pane_g2_ParamLimits

0x6b8d,	// (0x0002c5e8) main_mup2_pane_g2

0xbf6e,	// (0x000319c9) main_mup_pane_g13_cp1

0xbf76,	// (0x000319d1) mup_volume_pane_cp1

0x6bab,	// (0x0002c606) main_mup2_pane_g4_ParamLimits

0x6bab,	// (0x0002c606) main_mup2_pane_g4

0x6bbd,	// (0x0002c618) main_mup2_pane_g5_ParamLimits

0x6bbd,	// (0x0002c618) main_mup2_pane_g5

0x6bcf,	// (0x0002c62a) main_mup2_pane_g6_ParamLimits

0x6bcf,	// (0x0002c62a) main_mup2_pane_g6

0x6be1,	// (0x0002c63c) main_mup2_pane_g7_ParamLimits

0x6be1,	// (0x0002c63c) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000350e6) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000350e6) main_mup2_pane_g

0x6bf9,	// (0x0002c654) main_mup2_pane_t1_ParamLimits

0x6bf9,	// (0x0002c654) main_mup2_pane_t1

0x6c0f,	// (0x0002c66a) main_mup2_pane_t2_ParamLimits

0x6c0f,	// (0x0002c66a) main_mup2_pane_t2

0x6c25,	// (0x0002c680) main_mup2_pane_t3_ParamLimits

0x6c25,	// (0x0002c680) main_mup2_pane_t3

0x6c3b,	// (0x0002c696) main_mup2_pane_t4_ParamLimits

0x6c3b,	// (0x0002c696) main_mup2_pane_t4

0x6c53,	// (0x0002c6ae) main_mup2_pane_t5_ParamLimits

0x6c53,	// (0x0002c6ae) main_mup2_pane_t5

0x6c6b,	// (0x0002c6c6) main_mup2_pane_t6_ParamLimits

0x6c6b,	// (0x0002c6c6) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000350f5) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000350f5) main_mup2_pane_t

0x6c9b,	// (0x0002c6f6) mup2_visualizer_pane_ParamLimits

0x6c9b,	// (0x0002c6f6) mup2_visualizer_pane

0x6cc9,	// (0x0002c724) mup_progress_pane_cp_ParamLimits

0x6cc9,	// (0x0002c724) mup_progress_pane_cp

0xbf50,	// (0x000319ab) mup_volume_pane_cp_ParamLimits

0xbf50,	// (0x000319ab) mup_volume_pane_cp

0x6cdf,	// (0x0002c73a) mup2_visualizer_pane_g1_ParamLimits

0x6cdf,	// (0x0002c73a) mup2_visualizer_pane_g1

0xbe8f,	// (0x000318ea) mup2_visualizer_pane_g2_ParamLimits

0xbe8f,	// (0x000318ea) mup2_visualizer_pane_g2

0x6cf4,	// (0x0002c74f) mup2_visualizer_pane_g3_ParamLimits

0x6cf4,	// (0x0002c74f) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00035102) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00035102) mup2_visualizer_pane_g

0x5c85,	// (0x0002b6e0) aid_size_cell_fmradio

0x6605,	// (0x0002c060) aid_height_parent_landcape

0x3a10,	// (0x0002946b) wml_content_pane_cp

0x3a18,	// (0x00029473) wml_tabs_pane

0x3a21,	// (0x0002947c) popup_wml_miniature_window

0x3a29,	// (0x00029484) scroll_pane_cp021

0x3a3d,	// (0x00029498) wml_content_pane_comp8

0x25e4,	// (0x0002803f) bg_popup_sub_pane_cp05

0xbead,	// (0x00031908) popup_wml_miniature_window_g1

0xbeb5,	// (0x00031910) wml_miniature_view_pane

0x6d00,	// (0x0002c75b) aid_size_wml_view

0x6d08,	// (0x0002c763) wml_miniature_view_pane_g1

0x6d11,	// (0x0002c76c) wml_miniature_view_pane_g2

0x6d1a,	// (0x0002c775) wml_miniature_view_pane_g3

0x6d22,	// (0x0002c77d) wml_miniature_view_pane_g4

0x6d2a,	// (0x0002c785) wml_miniature_view_pane_g5

0x6d32,	// (0x0002c78d) wml_miniature_view_pane_g6

0x6d3a,	// (0x0002c795) wml_miniature_view_pane_g7

0x6d42,	// (0x0002c79d) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00035109) wml_miniature_view_pane_g

0xbebd,	// (0x00031918) background_graphic_ParamLimits

0xbebd,	// (0x00031918) background_graphic

0xbec9,	// (0x00031924) wml_tabs_2_pane

0xbed2,	// (0x0003192d) wml_tabs_3_pane_ParamLimits

0xbed2,	// (0x0003192d) wml_tabs_3_pane

0xbee4,	// (0x0003193f) wml_tabs_4_pane_ParamLimits

0xbee4,	// (0x0003193f) wml_tabs_4_pane

0xbefa,	// (0x00031955) wml_tabs_5_pane_ParamLimits

0xbefa,	// (0x00031955) wml_tabs_5_pane

0xbf14,	// (0x0003196f) wml_tabs_pane_g2_ParamLimits

0xbf14,	// (0x0003196f) wml_tabs_pane_g2

0xbf28,	// (0x00031983) wml_tabs_pane_g3_ParamLimits

0xbf28,	// (0x00031983) wml_tabs_pane_g3

0x6d4a,	// (0x0002c7a5) wml_tabs_2_active_pane_ParamLimits

0x6d4a,	// (0x0002c7a5) wml_tabs_2_active_pane

0x6d5e,	// (0x0002c7b9) wml_tabs_2_passive_pane_ParamLimits

0x6d5e,	// (0x0002c7b9) wml_tabs_2_passive_pane

0x6d72,	// (0x0002c7cd) wml_tabs_3_active_pane_cp_ParamLimits

0x6d72,	// (0x0002c7cd) wml_tabs_3_active_pane_cp

0x6d87,	// (0x0002c7e2) wml_tabs_3_passive_pane_ParamLimits

0x6d87,	// (0x0002c7e2) wml_tabs_3_passive_pane

0x6d9a,	// (0x0002c7f5) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d9a,	// (0x0002c7f5) wml_tabs_3_passive_pane_cp

0x6db1,	// (0x0002c80c) tabs_4_active_pane

0x6db9,	// (0x0002c814) tabs_4_passive_pane

0x6dc3,	// (0x0002c81e) tabs_4_passive_pane_cp

0x6dcb,	// (0x0002c826) tabs_4_passive_pane_cp2

0x6319,	// (0x0002bd74) aid_height_text

0x530d,	// (0x0002ad68) mup_volume_cont_pane_ParamLimits

0x530d,	// (0x0002ad68) mup_volume_cont_pane

0x28d5,	// (0x00028330) aid_size_cell_pinb

0x28df,	// (0x0002833a) aid_size_list_pinb

0x6cb5,	// (0x0002c710) mup2_volume_cont_pane_ParamLimits

0x6cb5,	// (0x0002c710) mup2_volume_cont_pane

0xbf3c,	// (0x00031997) mup2_volume_cont_pane_g1_ParamLimits

0xbf3c,	// (0x00031997) mup2_volume_cont_pane_g1

0x1eaa,	// (0x00027905) aid_size_cell_touch_ParamLimits

0x1eaa,	// (0x00027905) aid_size_cell_touch

0x2126,	// (0x00027b81) touch_pane_ParamLimits

0x2126,	// (0x00027b81) touch_pane

0x1e8c,	// (0x000278e7) main_rss2_pane

0xbf7e,	// (0x000319d9) listscroll_rss2_pane

0xbf87,	// (0x000319e2) rss2_navigation_pane

0xbf8f,	// (0x000319ea) list_rss2_pane

0x4bec,	// (0x0002a647) scroll_pane_cp22

0xbf97,	// (0x000319f2) rss2_navigation_pane_g1

0xbfa0,	// (0x000319fb) rss2_navigation_pane_g2

0xbfa8,	// (0x00031a03) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0003511a) rss2_navigation_pane_g

0xbfb0,	// (0x00031a0b) rss2_navigation_pane_t1

0x6dd5,	// (0x0002c830) rss2_list_single_pane_ParamLimits

0x6dd5,	// (0x0002c830) rss2_list_single_pane

0xbfbe,	// (0x00031a19) rss2_list_single_pane_t2

0xbfcc,	// (0x00031a27) rss2_list_single_pane_t3_ParamLimits

0xbfcc,	// (0x00031a27) rss2_list_single_pane_t3

0xbfe9,	// (0x00031a44) rss2_list_single_pane_t4

0x446d,	// (0x00029ec8) smil_status_pane_g1

0x210c,	// (0x00027b67) main_image2_pane_ParamLimits

0x210c,	// (0x00027b67) main_image2_pane

0x1070,	// (0x00026acb) main_camera2_pane_g9_ParamLimits

0x1070,	// (0x00026acb) main_camera2_pane_g9

0x118c,	// (0x00026be7) main_camera2_pane_t5_ParamLimits

0x118c,	// (0x00026be7) main_camera2_pane_t5

0xbe64,	// (0x000318bf) main_camera2_pane_t6_ParamLimits

0xbe64,	// (0x000318bf) main_camera2_pane_t6

0x6def,	// (0x0002c84a) main_image2_pane_g1_ParamLimits

0x6def,	// (0x0002c84a) main_image2_pane_g1

0x5c2f,	// (0x0002b68a) smil2_video_pane_ParamLimits

0x5c2f,	// (0x0002b68a) smil2_video_pane

0x1eda,	// (0x00027935) aid_zoom_text_primary_cp

0x20c8,	// (0x00027b23) popup_preview_fixed_window

0x38fd,	// (0x00029358) im_reading_pane_g1

0x0f42,	// (0x0002699d) cams2_bc_adjust_pane_cp_ParamLimits

0x0f42,	// (0x0002699d) cams2_bc_adjust_pane_cp

0x11b2,	// (0x00026c0d) cams2_bc_adjust_pane_ParamLimits

0x11b2,	// (0x00026c0d) cams2_bc_adjust_pane

0xbff7,	// (0x00031a52) cams2_bc_adjust_pane_g1

0xbfff,	// (0x00031a5a) cams2_slider_pane

0xc008,	// (0x00031a63) cams2_slider_pane_g1

0xc011,	// (0x00031a6c) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00035121) cams2_slider_pane_g

0x0cac,	// (0x00026707) calc_display_pane_ParamLimits

0x0cd2,	// (0x0002672d) calc_paper_pane_ParamLimits

0x0cf5,	// (0x00026750) grid_calc_pane_ParamLimits

0xaf94,	// (0x000309ef) popup_clock_digital_window_t1_ParamLimits

0x5aac,	// (0x0002b507) main_image_pane_t1

0x0c8e,	// (0x000266e9) aid_size_cell_calc_ParamLimits

0x0c8e,	// (0x000266e9) aid_size_cell_calc

0x664b,	// (0x0002c0a6) popup_blid_sat_info2_window_ParamLimits

0x664b,	// (0x0002c0a6) popup_blid_sat_info2_window

0xc033,	// (0x00031a8e) aid_size_cell_blid

0xc03b,	// (0x00031a96) bg_popup_window_pane_cp07

0xc05e,	// (0x00031ab9) grid_popup_blid_pane

0xc068,	// (0x00031ac3) heading_pane_cp05_ParamLimits

0xc068,	// (0x00031ac3) heading_pane_cp05

0xc132,	// (0x00031b8d) cell_popup_blid_pane_ParamLimits

0xc132,	// (0x00031b8d) cell_popup_blid_pane

0xc15c,	// (0x00031bb7) cell_popup_blid_pane_g1

0xc164,	// (0x00031bbf) cell_popup_blid_pane_t1

0x6c85,	// (0x0002c6e0) mup2_indicator_pane_ParamLimits

0x6c85,	// (0x0002c6e0) mup2_indicator_pane

0x503d,	// (0x0002aa98) mup2_visualizer_osc_pane

0xbe9b,	// (0x000318f6) mup2_visualizer_spec_pane_ParamLimits

0xbe9b,	// (0x000318f6) mup2_visualizer_spec_pane

0x6e05,	// (0x0002c860) mup2_spec_half_pane

0x6e0e,	// (0x0002c869) mup2_spec_half_pane_cp

0x6e16,	// (0x0002c871) mup2_spec_bar_pane_ParamLimits

0x6e16,	// (0x0002c871) mup2_spec_bar_pane

0xbdd8,	// (0x00031833) mup2_spec_bar_pane_g1

0xbde2,	// (0x0003183d) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00035094) mup2_spec_bar_pane_g

0x6e36,	// (0x0002c891) mup2_osc_middle_pane

0xbdf4,	// (0x0003184f) mup2_visualizer_osc_pane_g1

0x2198,	// (0x00027bf3) popup_number_entry_window_t1_ParamLimits

0x21ab,	// (0x00027c06) popup_number_entry_window_t2_ParamLimits

0x21bd,	// (0x00027c18) popup_number_entry_window_t3_ParamLimits

0x21cf,	// (0x00027c2a) popup_number_entry_window_t5_ParamLimits

0x21cf,	// (0x00027c2a) popup_number_entry_window_t5

0xf0fb,	// (0x00034b56) popup_number_entry_window_t_ParamLimits

0x2204,	// (0x00027c5f) text_title_cp2_ParamLimits

0xafd3,	// (0x00030a2e) aid_hotspot_pointer_text2_pane

0xaff9,	// (0x00030a54) main_viewer_pane_g9_ParamLimits

0xaff9,	// (0x00030a54) main_viewer_pane_g9

0x3fe1,	// (0x00029a3c) cale_month_pane_t1_ParamLimits

0x44f8,	// (0x00029f53) bg_cale_pane_ParamLimits

0x4510,	// (0x00029f6b) list_cale_pane_ParamLimits

0x2f2a,	// (0x00028985) listscroll_cale_day_pane_t1

0x4521,	// (0x00029f7c) scroll_pane_cp09_ParamLimits

0x53c1,	// (0x0002ae1c) main_mup_eq_pane_t1_ParamLimits

0x53c1,	// (0x0002ae1c) main_mup_eq_pane_t1

0x53dd,	// (0x0002ae38) main_mup_eq_pane_t2_ParamLimits

0x53dd,	// (0x0002ae38) main_mup_eq_pane_t2

0x53f9,	// (0x0002ae54) main_mup_eq_pane_t3_ParamLimits

0x53f9,	// (0x0002ae54) main_mup_eq_pane_t3

0x5417,	// (0x0002ae72) main_mup_eq_pane_t4_ParamLimits

0x5417,	// (0x0002ae72) main_mup_eq_pane_t4

0x5435,	// (0x0002ae90) main_mup_eq_pane_t5_ParamLimits

0x5435,	// (0x0002ae90) main_mup_eq_pane_t5

0x5453,	// (0x0002aeae) main_mup_eq_pane_t6_ParamLimits

0x5453,	// (0x0002aeae) main_mup_eq_pane_t6

0x5469,	// (0x0002aec4) main_mup_eq_pane_t7_ParamLimits

0x5469,	// (0x0002aec4) main_mup_eq_pane_t7

0x547f,	// (0x0002aeda) main_mup_eq_pane_t8_ParamLimits

0x547f,	// (0x0002aeda) main_mup_eq_pane_t8

0x5495,	// (0x0002aef0) main_mup_eq_pane_t9_ParamLimits

0x5495,	// (0x0002aef0) main_mup_eq_pane_t9

0x54b1,	// (0x0002af0c) main_mup_eq_pane_t10_ParamLimits

0x54b1,	// (0x0002af0c) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00034ee3) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00034ee3) main_mup_eq_pane_t

0x5586,	// (0x0002afe1) mup_equalizer_pane_cp5_ParamLimits

0x559e,	// (0x0002aff9) mup_equalizer_pane_cp6_ParamLimits

0x55b6,	// (0x0002b011) mup_equalizer_pane_cp7_ParamLimits

0x1e8c,	// (0x000278e7) main_gallery_pane

0xbdfd,	// (0x00031858) smil2_volume_pane

0xbe05,	// (0x00031860) smil_status_volume_pane_g1_ParamLimits

0xbe18,	// (0x00031873) smil_status_volume_pane_g2_ParamLimits

0xbe2b,	// (0x00031886) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00035099) smil_status_volume_pane_g_ParamLimits

0xc03b,	// (0x00031a96) bg_popup_window_pane_cp07_ParamLimits

0xc049,	// (0x00031aa4) blid_firmament_pane

0x6e3f,	// (0x0002c89a) aid_size_cell_gallery_ParamLimits

0x6e3f,	// (0x0002c89a) aid_size_cell_gallery

0x6e55,	// (0x0002c8b0) grid_gallery_pane_ParamLimits

0x6e55,	// (0x0002c8b0) grid_gallery_pane

0x6e70,	// (0x0002c8cb) cell_gallery_pane_ParamLimits

0x6e70,	// (0x0002c8cb) cell_gallery_pane

0xc172,	// (0x00031bcd) bg_cell_gallery_focus_pane_ParamLimits

0xc172,	// (0x00031bcd) bg_cell_gallery_focus_pane

0xc184,	// (0x00031bdf) cell_gallery_pane_g1_ParamLimits

0xc184,	// (0x00031bdf) cell_gallery_pane_g1

0x6ec1,	// (0x0002c91c) cell_gallery_pane_g2_ParamLimits

0x6ec1,	// (0x0002c91c) cell_gallery_pane_g2

0x6ece,	// (0x0002c929) cell_gallery_pane_g3_ParamLimits

0x6ece,	// (0x0002c929) cell_gallery_pane_g3

0xc190,	// (0x00031beb) cell_gallery_pane_g4_ParamLimits

0xc190,	// (0x00031beb) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00035147) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00035147) cell_gallery_pane_g

0xc19c,	// (0x00031bf7) bg_cell_gallery_focus_pane_g1

0xc1a4,	// (0x00031bff) bg_cell_gallery_focus_pane_g2

0xc1ac,	// (0x00031c07) bg_cell_gallery_focus_pane_g3

0xc1b4,	// (0x00031c0f) bg_cell_gallery_focus_pane_g4

0xc1bc,	// (0x00031c17) bg_cell_gallery_focus_pane_g5

0xc1c4,	// (0x00031c1f) bg_cell_gallery_focus_pane_g6

0xc1cc,	// (0x00031c27) bg_cell_gallery_focus_pane_g7

0xc1d4,	// (0x00031c2f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00035150) bg_cell_gallery_focus_pane_g

0xc1dc,	// (0x00031c37) aid_firma_cardinal

0xc1f0,	// (0x00031c4b) blid_firmament_pane_t1

0xc207,	// (0x00031c62) blid_firmament_pane_t2

0xc21e,	// (0x00031c79) blid_firmament_pane_t3

0xc235,	// (0x00031c90) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00035161) blid_firmament_pane_t

0xc24c,	// (0x00031ca7) blid_sat_info_pane

0xc25c,	// (0x00031cb7) blid_sat_info_pane_g1

0xc25c,	// (0x00031cb7) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0003516a) blid_sat_info_pane_g

0xc266,	// (0x00031cc1) blid_sat_info_pane_t1

0xc274,	// (0x00031ccf) smil2_volume_content_pane

0xc27d,	// (0x00031cd8) smil2_volume_pane_g1

0xc285,	// (0x00031ce0) smil2_volume_content_pane_g1

0xc28e,	// (0x00031ce9) smil2_volume_content_pane_g2

0xc297,	// (0x00031cf2) smil2_volume_content_pane_g3

0xc2a0,	// (0x00031cfb) smil2_volume_content_pane_g4

0xc2a9,	// (0x00031d04) smil2_volume_content_pane_g5

0xc2b2,	// (0x00031d0d) smil2_volume_content_pane_g6

0xc2bb,	// (0x00031d16) smil2_volume_content_pane_g7

0xc2c4,	// (0x00031d1f) smil2_volume_content_pane_g8

0xc2cd,	// (0x00031d28) smil2_volume_content_pane_g9

0xc2d6,	// (0x00031d31) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0003516f) smil2_volume_content_pane_g

0x2f9c,	// (0x000289f7) cale_week_day_heading_pane_t1_ParamLimits

0x2fb0,	// (0x00028a0b) cale_week_day_heading_pane_t2_ParamLimits

0x2fc4,	// (0x00028a1f) cale_week_day_heading_pane_t3_ParamLimits

0x2fd8,	// (0x00028a33) cale_week_day_heading_pane_t4_ParamLimits

0x2fec,	// (0x00028a47) cale_week_day_heading_pane_t5_ParamLimits

0x3000,	// (0x00028a5b) cale_week_day_heading_pane_t6_ParamLimits

0x3014,	// (0x00028a6f) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00034c5b) cale_week_day_heading_pane_t_ParamLimits

0x3028,	// (0x00028a83) bg_cale_side_pane_ParamLimits

0x0dca,	// (0x00026825) cale_week_time_pane_t1_ParamLimits

0x0de2,	// (0x0002683d) cale_week_time_pane_t2_ParamLimits

0x0dfa,	// (0x00026855) cale_week_time_pane_t3_ParamLimits

0x0e12,	// (0x0002686d) cale_week_time_pane_t4_ParamLimits

0x0e2a,	// (0x00026885) cale_week_time_pane_t5_ParamLimits

0x0e42,	// (0x0002689d) cale_week_time_pane_t6_ParamLimits

0x0e5a,	// (0x000268b5) cale_week_time_pane_t7_ParamLimits

0x0e76,	// (0x000268d1) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00034c6a) cale_week_time_pane_t_ParamLimits

0x3036,	// (0x00028a91) cell_cale_week_pane_g2_ParamLimits

0x3028,	// (0x00028a83) bg_cale_side_pane_cp01_ParamLimits

0x42ee,	// (0x00029d49) cale_month_week_pane_t1_ParamLimits

0x4305,	// (0x00029d60) cale_month_week_pane_t2_ParamLimits

0x431c,	// (0x00029d77) cale_month_week_pane_t3_ParamLimits

0x4333,	// (0x00029d8e) cale_month_week_pane_t4_ParamLimits

0x434a,	// (0x00029da5) cale_month_week_pane_t5_ParamLimits

0x4361,	// (0x00029dbc) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00034d43) cale_month_week_pane_t_ParamLimits

0xaf14,	// (0x0003096f) cell_cale_month_pane_g1_ParamLimits

0x1e8c,	// (0x000278e7) main_cale_event_viewer_pane

0x1e8c,	// (0x000278e7) listscroll_cale_event_viewer_pane

0xc2df,	// (0x00031d3a) list_cale_ev_pane

0xc2e7,	// (0x00031d42) scroll_pane_cp023

0x6edb,	// (0x0002c936) field_cale_ev_pane_ParamLimits

0x6edb,	// (0x0002c936) field_cale_ev_pane

0xc2f3,	// (0x00031d4e) field_cale_ev_content_pane_ParamLimits

0xc2f3,	// (0x00031d4e) field_cale_ev_content_pane

0xc2ff,	// (0x00031d5a) field_cale_ev_pane_g1_ParamLimits

0xc2ff,	// (0x00031d5a) field_cale_ev_pane_g1

0xc30b,	// (0x00031d66) field_cale_ev_pane_g2_ParamLimits

0xc30b,	// (0x00031d66) field_cale_ev_pane_g2

0xc323,	// (0x00031d7e) field_cale_ev_pane_g3_ParamLimits

0xc323,	// (0x00031d7e) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00035184) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00035184) field_cale_ev_pane_g

0xc33b,	// (0x00031d96) field_cale_ev_pane_t1_ParamLimits

0xc33b,	// (0x00031d96) field_cale_ev_pane_t1

0x6eff,	// (0x0002c95a) field_cale_ev_content_pane_t1_ParamLimits

0x6eff,	// (0x0002c95a) field_cale_ev_content_pane_t1

0x56bd,	// (0x0002b118) bg_button_pane_cp01

0x2b15,	// (0x00028570) listscroll_cale_week_pane_ParamLimits

0x2d5b,	// (0x000287b6) popup_toolbar_window_cp01

0x2f2a,	// (0x00028985) listscroll_cale_week_pane_t1_ParamLimits

0x2b15,	// (0x00028570) listscroll_cale_day_pane_ParamLimits

0x44ee,	// (0x00029f49) popup_toolbar_window_cp02

0x2f2a,	// (0x00028985) listscroll_cale_day_pane_t1_ParamLimits

0x2b15,	// (0x00028570) main_cale_month_pane_ParamLimits

0x68cb,	// (0x0002c326) popup_toolbar_window_cp03_ParamLimits

0x68cb,	// (0x0002c326) popup_toolbar_window_cp03

0x5a8a,	// (0x0002b4e5) main_image_pane_g2_ParamLimits

0x5a8a,	// (0x0002b4e5) main_image_pane_g2

0x5a9b,	// (0x0002b4f6) main_image_pane_g3_ParamLimits

0x5a9b,	// (0x0002b4f6) main_image_pane_g3

0x0002,

0xf51a,	// (0x00034f75) main_image_pane_g_ParamLimits

0xf51a,	// (0x00034f75) main_image_pane_g

0x5aac,	// (0x0002b507) main_image_pane_t1_ParamLimits

0x5ac3,	// (0x0002b51e) main_image_pane_t2_ParamLimits

0x5ac3,	// (0x0002b51e) main_image_pane_t2

0x5ad5,	// (0x0002b530) main_image_pane_t3_ParamLimits

0x5ad5,	// (0x0002b530) main_image_pane_t3

0x5afd,	// (0x0002b558) main_image_pane_t4_ParamLimits

0x5afd,	// (0x0002b558) main_image_pane_t4

0x0003,

0xf521,	// (0x00034f7c) main_image_pane_t_ParamLimits

0xf521,	// (0x00034f7c) main_image_pane_t

0x5b1d,	// (0x0002b578) popup_image_details_window_cp01

0x5b27,	// (0x0002b582) popup_toobar_trans_pane_cp01_ParamLimits

0x5b27,	// (0x0002b582) popup_toobar_trans_pane_cp01

0x673e,	// (0x0002c199) popup_image_details_window_ParamLimits

0x673e,	// (0x0002c199) popup_image_details_window

0xbd49,	// (0x000317a4) popup_image_focus_window

0x0efc,	// (0x00026957) camera2_autofocus_pane_ParamLimits

0x0efc,	// (0x00026957) camera2_autofocus_pane

0x1e8c,	// (0x000278e7) bg_popup_sub_pane_cp06

0xc352,	// (0x00031dad) popup_image_focus_window_g1

0xc35a,	// (0x00031db5) popup_image_focus_window_g2

0xc362,	// (0x00031dbd) popup_image_focus_window_g3

0xc36a,	// (0x00031dc5) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0003518b) popup_image_focus_window_g

0xc372,	// (0x00031dcd) popup_image_focus_window_t1

0xc380,	// (0x00031ddb) popup_image_focus_window_t2

0xc390,	// (0x00031deb) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00035194) popup_image_focus_window_t

0xc39e,	// (0x00031df9) camera2_autofocus_pane_g1

0x210c,	// (0x00027b67) bg_tb_trans_pane_cp01

0xc3ac,	// (0x00031e07) popup_image_details_window_g1

0xc3bf,	// (0x00031e1a) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x000351a6) popup_image_details_window_g

0xc3e8,	// (0x00031e43) popup_image_details_window_t1

0xc3fa,	// (0x00031e55) popup_image_details_window_t2

0xc413,	// (0x00031e6e) popup_image_details_window_t3

0xc427,	// (0x00031e82) popup_image_details_window_t4

0xc442,	// (0x00031e9d) popup_image_details_window_t5

0x0004,

0xf752,	// (0x000351ad) popup_image_details_window_t

0x2b01,	// (0x0002855c) bg_calc_paper_pane_ParamLimits

0xae10,	// (0x0003086b) grid_highlight_pane_cp013

0xae1a,	// (0x00030875) list_calc_pane_ParamLimits

0xae2c,	// (0x00030887) scroll_pane_cp024

0x2b15,	// (0x00028570) bg_calc_display_pane_ParamLimits

0x0d23,	// (0x0002677e) calc_display_pane_t1_ParamLimits

0x0d35,	// (0x00026790) calc_display_pane_t2_ParamLimits

0xae34,	// (0x0003088f) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00034bdd) calc_display_pane_t_ParamLimits

0x0d9c,	// (0x000267f7) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00034bfa) cell_calc_pane_g

0x0da5,	// (0x00026800) cell_calc_pane_t1

0x2bd0,	// (0x0002862b) grid_highlight_pane_cp02_ParamLimits

0x2be6,	// (0x00028641) toolbar_button_pane_cp01_ParamLimits

0x2be6,	// (0x00028641) toolbar_button_pane_cp01

0x5b69,	// (0x0002b5c4) temp_image_control_pane_ParamLimits

0x5b69,	// (0x0002b5c4) temp_image_control_pane

0x210c,	// (0x00027b67) main_mp3_pane

0xc45c,	// (0x00031eb7) temp_image_control_pane_g1_ParamLimits

0xc45c,	// (0x00031eb7) temp_image_control_pane_g1

0xc46a,	// (0x00031ec5) temp_image_control_pane_g2_ParamLimits

0xc46a,	// (0x00031ec5) temp_image_control_pane_g2

0xc47c,	// (0x00031ed7) temp_image_control_pane_g3_ParamLimits

0xc47c,	// (0x00031ed7) temp_image_control_pane_g3

0x6f50,	// (0x0002c9ab) temp_image_control_pane_g4_ParamLimits

0x6f50,	// (0x0002c9ab) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000351b8) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000351b8) temp_image_control_pane_g

0xc45c,	// (0x00031eb7) main_mp3_pane_g1

0x6f63,	// (0x0002c9be) main_mp3_pane_g2

0x0007,

0xf766,	// (0x000351c1) main_mp3_pane_g

0xc4bf,	// (0x00031f1a) main_mp3_pane_t1

0x31bd,	// (0x00028c18) main_camera_pane_g8_ParamLimits

0x31bd,	// (0x00028c18) main_camera_pane_g8

0x3372,	// (0x00028dcd) main_video_pane_g7_ParamLimits

0x3372,	// (0x00028dcd) main_video_pane_g7

0xbe7d,	// (0x000318d8) main_camera2_pane_t7_ParamLimits

0xbe7d,	// (0x000318d8) main_camera2_pane_t7

0x39d0,	// (0x0002942b) scroll_pane_cp025_ParamLimits

0x39d0,	// (0x0002942b) scroll_pane_cp025

0x39e4,	// (0x0002943f) scroll_pane_cp026_ParamLimits

0x39e4,	// (0x0002943f) scroll_pane_cp026

0x39f3,	// (0x0002944e) wml_content_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_touch_calib_pane

0x702a,	// (0x0002ca85) main_touch_calib_pane_g1

0x7036,	// (0x0002ca91) main_touch_calib_pane_g2

0x7042,	// (0x0002ca9d) main_touch_calib_pane_g3

0x704e,	// (0x0002caa9) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000351df) main_touch_calib_pane_g

0x705a,	// (0x0002cab5) main_touch_calib_pane_t1

0x7074,	// (0x0002cacf) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000351e8) main_touch_calib_pane_t

0x4eb4,	// (0x0002a90f) mup_progress_pane_cp02

0x4ed3,	// (0x0002a92e) navi_pane_g1

0x4f8e,	// (0x0002a9e9) navi_pane_mp_t3

0x210c,	// (0x00027b67) main_mp3_pane_ParamLimits

0x690d,	// (0x0002c368) navi_pane_ParamLimits

0xc45c,	// (0x00031eb7) main_mp3_pane_g1_ParamLimits

0x6f63,	// (0x0002c9be) main_mp3_pane_g2_ParamLimits

0x6f6f,	// (0x0002c9ca) main_mp3_pane_g3_ParamLimits

0x6f6f,	// (0x0002c9ca) main_mp3_pane_g3

0x6f7d,	// (0x0002c9d8) main_mp3_pane_g4_ParamLimits

0x6f7d,	// (0x0002c9d8) main_mp3_pane_g4

0xc48c,	// (0x00031ee7) main_mp3_pane_g5_ParamLimits

0xc48c,	// (0x00031ee7) main_mp3_pane_g5

0xc49a,	// (0x00031ef5) main_mp3_pane_g6_ParamLimits

0xc49a,	// (0x00031ef5) main_mp3_pane_g6

0xc4a7,	// (0x00031f02) main_mp3_pane_g7_ParamLimits

0xc4a7,	// (0x00031f02) main_mp3_pane_g7

0xc4b3,	// (0x00031f0e) main_mp3_pane_g8_ParamLimits

0xc4b3,	// (0x00031f0e) main_mp3_pane_g8

0xf766,	// (0x000351c1) main_mp3_pane_g_ParamLimits

0x6f89,	// (0x0002c9e4) main_mp3_pane_t2

0x6f97,	// (0x0002c9f2) main_mp3_pane_t3

0xc4cd,	// (0x00031f28) main_mp3_pane_t4

0xc4db,	// (0x00031f36) main_mp3_pane_t5

0x0005,

0xf777,	// (0x000351d2) main_mp3_pane_t

0xc4e9,	// (0x00031f44) mup_progress_pane_cp01

0x1eda,	// (0x00027935) aid_zoom_text_secondary2

0xc2df,	// (0x00031d3a) list_cale_ev2_pane

0xc2e7,	// (0x00031d42) scroll_pane_cp023_ParamLimits

0x70cc,	// (0x0002cb27) field_cale_ev2_pane_ParamLimits

0x70cc,	// (0x0002cb27) field_cale_ev2_pane

0xc4f1,	// (0x00031f4c) field_cale_ev2_pane_g1_ParamLimits

0xc4f1,	// (0x00031f4c) field_cale_ev2_pane_g1

0xc4fd,	// (0x00031f58) field_cale_ev2_pane_g2_ParamLimits

0xc4fd,	// (0x00031f58) field_cale_ev2_pane_g2

0xc515,	// (0x00031f70) field_cale_ev2_pane_g3_ParamLimits

0xc515,	// (0x00031f70) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000351f3) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000351f3) field_cale_ev2_pane_g

0xc539,	// (0x00031f94) field_cale_ev2_pane_t1_ParamLimits

0xc539,	// (0x00031f94) field_cale_ev2_pane_t1

0xc550,	// (0x00031fab) field_cale_ev2_pane_t2_ParamLimits

0xc550,	// (0x00031fab) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000351fc) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000351fc) field_cale_ev2_pane_t

0x583f,	// (0x0002b29a) main_postcard_pane_g5_ParamLimits

0x583f,	// (0x0002b29a) main_postcard_pane_g5

0x5855,	// (0x0002b2b0) main_postcard_pane_g6_ParamLimits

0x5855,	// (0x0002b2b0) main_postcard_pane_g6

0x30f8,	// (0x00028b53) camera2_autofocus_pane_cp_ParamLimits

0x30f8,	// (0x00028b53) camera2_autofocus_pane_cp

0x210c,	// (0x00027b67) main_mup3_pane

0x7110,	// (0x0002cb6b) main_mup3_pane_g1_ParamLimits

0x7110,	// (0x0002cb6b) main_mup3_pane_g1

0x7132,	// (0x0002cb8d) main_mup3_pane_g2_ParamLimits

0x7132,	// (0x0002cb8d) main_mup3_pane_g2

0x71b5,	// (0x0002cc10) main_mup3_pane_g3_ParamLimits

0x71b5,	// (0x0002cc10) main_mup3_pane_g3

0x71f9,	// (0x0002cc54) main_mup3_pane_g4_ParamLimits

0x71f9,	// (0x0002cc54) main_mup3_pane_g4

0x723d,	// (0x0002cc98) main_mup3_pane_g5_ParamLimits

0x723d,	// (0x0002cc98) main_mup3_pane_g5

0x7281,	// (0x0002ccdc) main_mup3_pane_g6_ParamLimits

0x7281,	// (0x0002ccdc) main_mup3_pane_g6

0xc565,	// (0x00031fc0) main_mup3_pane_g7_ParamLimits

0xc565,	// (0x00031fc0) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0003520c) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0003520c) main_mup3_pane_g

0x72fd,	// (0x0002cd58) main_mup3_pane_t1_ParamLimits

0x72fd,	// (0x0002cd58) main_mup3_pane_t1

0x7377,	// (0x0002cdd2) main_mup3_pane_t2_ParamLimits

0x7377,	// (0x0002cdd2) main_mup3_pane_t2

0x7451,	// (0x0002ceac) main_mup3_pane_t4_ParamLimits

0x7451,	// (0x0002ceac) main_mup3_pane_t4

0x74af,	// (0x0002cf0a) main_mup3_pane_t5_ParamLimits

0x74af,	// (0x0002cf0a) main_mup3_pane_t5

0x7567,	// (0x0002cfc2) main_mup3_pane_t6_ParamLimits

0x7567,	// (0x0002cfc2) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0003521d) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0003521d) main_mup3_pane_t

0x761d,	// (0x0002d078) mup3_progress_pane_ParamLimits

0x761d,	// (0x0002d078) mup3_progress_pane

0x76a1,	// (0x0002d0fc) popup_mup3_control_window_ParamLimits

0x76a1,	// (0x0002d0fc) popup_mup3_control_window

0xc573,	// (0x00031fce) popup_mup3_text_window

0x76d7,	// (0x0002d132) mup3_progress_pane_t1

0x76ee,	// (0x0002d149) mup3_progress_pane_t2

0xc57b,	// (0x00031fd6) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0003522a) mup3_progress_pane_t

0xc592,	// (0x00031fed) mup_progress_pane_cp03

0x1e8c,	// (0x000278e7) bg_tb_trans_pane_cp04

0x7705,	// (0x0002d160) mup3_volume_pane

0x770d,	// (0x0002d168) popup_mup3_control_window_g1

0x7716,	// (0x0002d171) mup3_volume_pane_g1

0x771f,	// (0x0002d17a) mup3_volume_pane_g2

0x7728,	// (0x0002d183) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00035231) mup3_volume_pane_g

0x1e8c,	// (0x000278e7) bg_tb_trans_pane_cp03

0xc5a2,	// (0x00031ffd) popup_mup3_text_window_g1

0xc5aa,	// (0x00032005) popup_mup3_text_window_t1

0x2bb9,	// (0x00028614) list_calc_item_pane_g1_ParamLimits

0xbf65,	// (0x000319c0) mup_volume_pane_cp_g1

0x708e,	// (0x0002cae9) main_touch_calib_pane_t3

0x70a2,	// (0x0002cafd) main_touch_calib_pane_t4

0x70b6,	// (0x0002cb11) main_touch_calib_pane_t5

0x1e96,	// (0x000278f1) aid_cell_size_toolbar2

0x1e9e,	// (0x000278f9) aid_popup3_width_pane

0x1eda,	// (0x00027935) aid_zoom_text_msg_primary

0xaefe,	// (0x00030959) vorec_t7

0x2b21,	// (0x0002857c) bg_calc_paper_pane_g1_ParamLimits

0x2b2d,	// (0x00028588) bg_calc_paper_pane_g2_ParamLimits

0x2b39,	// (0x00028594) bg_calc_paper_pane_g3_ParamLimits

0x2b45,	// (0x000285a0) bg_calc_paper_pane_g4_ParamLimits

0x2b51,	// (0x000285ac) bg_calc_paper_pane_g5_ParamLimits

0x2b5d,	// (0x000285b8) bg_calc_paper_pane_g6_ParamLimits

0x2b70,	// (0x000285cb) bg_calc_paper_pane_g7_ParamLimits

0x2b83,	// (0x000285de) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00034be4) bg_calc_paper_pane_g_ParamLimits

0x2b94,	// (0x000285ef) calc_bg_paper_pane_g9_ParamLimits

0x3266,	// (0x00028cc1) image_qvga_pane_ParamLimits

0x3266,	// (0x00028cc1) image_qvga_pane

0x283f,	// (0x0002829a) bg_popup_sub_pane_cp04_ParamLimits

0x59e8,	// (0x0002b443) popup_mup_playback_window_g1_ParamLimits

0x59f4,	// (0x0002b44f) popup_mup_playback_window_t1_ParamLimits

0x5a09,	// (0x0002b464) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00034f70) popup_mup_playback_window_t_ParamLimits

0x6b9d,	// (0x0002c5f8) main_mup2_pane_g3_ParamLimits

0x6b9d,	// (0x0002c5f8) main_mup2_pane_g3

0x36bf,	// (0x0002911a) popup_toolbar_window_cp04

0x622e,	// (0x0002bc89) popup_call2_audio_second_window_g3_ParamLimits

0x622e,	// (0x0002bc89) popup_call2_audio_second_window_g3

0xb343,	// (0x00030d9e) popup_call2_audio_first_window_g4_ParamLimits

0xb343,	// (0x00030d9e) popup_call2_audio_first_window_g4

0xb9c2,	// (0x0003141d) popup_call2_audio_in_window_g4_ParamLimits

0xb9c2,	// (0x0003141d) popup_call2_audio_in_window_g4

0x5a1e,	// (0x0002b479) aid_area_sk_bg_cut_ParamLimits

0x5a1e,	// (0x0002b479) aid_area_sk_bg_cut

0x5a3c,	// (0x0002b497) aid_area_sk_bg_cut_2_ParamLimits

0x5a3c,	// (0x0002b497) aid_area_sk_bg_cut_2

0x6eb1,	// (0x0002c90c) aid_placing_details_win

0x6eb9,	// (0x0002c914) aid_placing_details_win_2

0xc39e,	// (0x00031df9) camera2_autofocus_pane_g1_ParamLimits

0x20ad,	// (0x00027b08) popup_fixed_preview_cale_window_ParamLimits

0x20ad,	// (0x00027b08) popup_fixed_preview_cale_window

0x504e,	// (0x0002aaa9) navi_slider_pane_g3

0x5057,	// (0x0002aab2) navi_slider_pane_g4

0x5060,	// (0x0002aabb) navi_slider_pane_g5

0x504e,	// (0x0002aaa9) navi_slider_pane_g6

0xafba,	// (0x00030a15) navi_slider_pane_g7

0x55d7,	// (0x0002b032) mup_scale_pane_g3

0x55e0,	// (0x0002b03b) mup_scale_pane_g4

0x55e9,	// (0x0002b044) mup_scale_pane_g5

0x55f2,	// (0x0002b04d) mup_scale_pane_g6

0x55fb,	// (0x0002b056) mup_scale_pane_g7

0x504e,	// (0x0002aaa9) cams2_slider_pane_g3

0xc01a,	// (0x00031a75) cams2_slider_pane_g4

0xc022,	// (0x00031a7d) cams2_slider_pane_g5

0x504e,	// (0x0002aaa9) cams2_slider_pane_g6

0xc02a,	// (0x00031a85) cams2_slider_pane_g7

0xc25c,	// (0x00031cb7) camera2_autofocus_pane_cp_g1

0xc5b8,	// (0x00032013) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5b8,	// (0x00032013) bg_popup_preview_window_pane_cp02

0xc5c4,	// (0x0003201f) list_fp_cale_pane_ParamLimits

0xc5c4,	// (0x0003201f) list_fp_cale_pane

0xc5d0,	// (0x0003202b) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5d0,	// (0x0003202b) popup_fixed_preview_cale_window_t1

0x7731,	// (0x0002d18c) popup_fixed_preview_cale_window_t2_ParamLimits

0x7731,	// (0x0002d18c) popup_fixed_preview_cale_window_t2

0x7746,	// (0x0002d1a1) popup_fixed_preview_cale_window_t3_ParamLimits

0x7746,	// (0x0002d1a1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00035238) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00035238) popup_fixed_preview_cale_window_t

0x775d,	// (0x0002d1b8) list_single_fp_cale_pane_ParamLimits

0x775d,	// (0x0002d1b8) list_single_fp_cale_pane

0xc5ee,	// (0x00032049) list_single_fp_cale_pane_g1_ParamLimits

0xc5ee,	// (0x00032049) list_single_fp_cale_pane_g1

0xc5fa,	// (0x00032055) list_single_fp_cale_pane_g2_ParamLimits

0xc5fa,	// (0x00032055) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0003523f) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0003523f) list_single_fp_cale_pane_g

0xc613,	// (0x0003206e) list_single_fp_cale_pane_t1_ParamLimits

0xc613,	// (0x0003206e) list_single_fp_cale_pane_t1

0xc625,	// (0x00032080) list_single_fp_cale_pane_t2_ParamLimits

0xc625,	// (0x00032080) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00035246) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00035246) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1e8c,	// (0x000278e7) main_dialer_pane

0x7775,	// (0x0002d1d0) aid_cell_size_keypad

0x777f,	// (0x0002d1da) dialer_ne_pane

0x7789,	// (0x0002d1e4) grid_dialer_command_1_pane

0x7791,	// (0x0002d1ec) grid_dialer_command_2_pane

0x7799,	// (0x0002d1f4) grid_dialer_keypad_pane

0x77ad,	// (0x0002d208) bg_popup_call_pane_cp06_ParamLimits

0x77ad,	// (0x0002d208) bg_popup_call_pane_cp06

0x77b9,	// (0x0002d214) dialer_ne_clear_pane_ParamLimits

0x77b9,	// (0x0002d214) dialer_ne_clear_pane

0xc658,	// (0x000320b3) dialer_ne_pane_g1

0xc660,	// (0x000320bb) dialer_ne_pane_t1_ParamLimits

0xc660,	// (0x000320bb) dialer_ne_pane_t1

0x77c5,	// (0x0002d220) dialer_ne_pane_t2_ParamLimits

0x77c5,	// (0x0002d220) dialer_ne_pane_t2

0x77ef,	// (0x0002d24a) dialer_ne_pane_t3_ParamLimits

0x77ef,	// (0x0002d24a) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0003524b) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0003524b) dialer_ne_pane_t

0x781f,	// (0x0002d27a) dialer_ne_pane_t3_copy1_ParamLimits

0x781f,	// (0x0002d27a) dialer_ne_pane_t3_copy1

0x784e,	// (0x0002d2a9) cell_dialer_keypad_pane_ParamLimits

0x784e,	// (0x0002d2a9) cell_dialer_keypad_pane

0x7865,	// (0x0002d2c0) cell_dialer_command_1_pane_ParamLimits

0x7865,	// (0x0002d2c0) cell_dialer_command_1_pane

0x787b,	// (0x0002d2d6) cell_dialer_command_2_pane_ParamLimits

0x787b,	// (0x0002d2d6) cell_dialer_command_2_pane

0xc672,	// (0x000320cd) bg_button_pane_cp02_ParamLimits

0xc672,	// (0x000320cd) bg_button_pane_cp02

0x788a,	// (0x0002d2e5) cell_dialer_keypad_pane_g1_ParamLimits

0x788a,	// (0x0002d2e5) cell_dialer_keypad_pane_g1

0xc672,	// (0x000320cd) bg_button_pane_cp03_ParamLimits

0xc672,	// (0x000320cd) bg_button_pane_cp03

0x789f,	// (0x0002d2fa) cell_dialer_command_1_pane_g1_ParamLimits

0x789f,	// (0x0002d2fa) cell_dialer_command_1_pane_g1

0xc67e,	// (0x000320d9) bg_button_pane_cp04

0x78b3,	// (0x0002d30e) cell_dialer_command_2_pane_g1

0x503d,	// (0x0002aa98) bg_button_pane_cp06

0xc686,	// (0x000320e1) dialer_ne_clear_pane_g1

0x4edf,	// (0x0002a93a) navi_pane_g2

0x4f0d,	// (0x0002a968) navi_pane_g3

0x0002,

0xf418,	// (0x00034e73) navi_pane_g

0x4f9c,	// (0x0002a9f7) navi_pane_mv_g2

0x4fc3,	// (0x0002aa1e) navi_pane_mv_g5

0x4fcb,	// (0x0002aa26) navi_pane_mv_t1

0x2b15,	// (0x00028570) main_clock2_pane

0x78eb,	// (0x0002d346) main_clock2_list_pane_ParamLimits

0x78eb,	// (0x0002d346) main_clock2_list_pane

0x7923,	// (0x0002d37e) main_clock2_pane_t1_ParamLimits

0x7923,	// (0x0002d37e) main_clock2_pane_t1

0x795f,	// (0x0002d3ba) main_clock2_pane_t2_ParamLimits

0x795f,	// (0x0002d3ba) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00035252) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00035252) main_clock2_pane_t

0x79eb,	// (0x0002d446) popup_clock_analogue_window_cp03_ParamLimits

0x79eb,	// (0x0002d446) popup_clock_analogue_window_cp03

0x7a12,	// (0x0002d46d) popup_clock_digital_window_cp02_ParamLimits

0x7a12,	// (0x0002d46d) popup_clock_digital_window_cp02

0x7a8b,	// (0x0002d4e6) main_clock2_list_single_pane_ParamLimits

0x7a8b,	// (0x0002d4e6) main_clock2_list_single_pane

0x503d,	// (0x0002aa98) list_highlight_pane_cp05

0xc68e,	// (0x000320e9) main_clock2_list_single_pane_t1

0x36bf,	// (0x0002911a) popup_toolbar_window_cp04_ParamLimits

0x6f20,	// (0x0002c97b) camera2_autofocus_pane_g2_ParamLimits

0x6f20,	// (0x0002c97b) camera2_autofocus_pane_g2

0x6f2c,	// (0x0002c987) camera2_autofocus_pane_g3_ParamLimits

0x6f2c,	// (0x0002c987) camera2_autofocus_pane_g3

0x6f38,	// (0x0002c993) camera2_autofocus_pane_g4_ParamLimits

0x6f38,	// (0x0002c993) camera2_autofocus_pane_g4

0x6f44,	// (0x0002c99f) camera2_autofocus_pane_g5_ParamLimits

0x6f44,	// (0x0002c99f) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0003519b) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0003519b) camera2_autofocus_pane_g

0x70f0,	// (0x0002cb4b) camera2_autofocus_pane_cp_g2

0x70f8,	// (0x0002cb53) camera2_autofocus_pane_cp_g3

0x7100,	// (0x0002cb5b) camera2_autofocus_pane_cp_g4

0x7108,	// (0x0002cb63) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00035201) camera2_autofocus_pane_cp_g

0x77a5,	// (0x0002d200) popup_dialer_spcha_window

0x1e8c,	// (0x000278e7) bg_popup_sub_pane_cp07

0xc69c,	// (0x000320f7) list_spcha_pane

0xc6a4,	// (0x000320ff) list_single_spcha_pane_ParamLimits

0xc6a4,	// (0x000320ff) list_single_spcha_pane

0x1e8c,	// (0x000278e7) list_highlight_pane_cp06

0xc6b5,	// (0x00032110) list_single_spcha_pane_t1

0xb76c,	// (0x000311c7) popup_call2_audio_out_window_g4_ParamLimits

0xb76c,	// (0x000311c7) popup_call2_audio_out_window_g4

0x1e8c,	// (0x000278e7) main_imed2_pane

0xbd53,	// (0x000317ae) popup_imed_adjust2_window

0x6756,	// (0x0002c1b1) popup_imed_trans_window_ParamLimits

0x6756,	// (0x0002c1b1) popup_imed_trans_window

0xc094,	// (0x00031aef) popup_blid_sat_info2_window_t1

0xc0a2,	// (0x00031afd) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00035130) popup_blid_sat_info2_window_t

0x7abf,	// (0x0002d51a) aid_size_cell_colour_35

0x7adf,	// (0x0002d53a) aid_size_cell_colour_112

0x7aff,	// (0x0002d55a) aid_size_cell_effect

0xbd27,	// (0x00031782) bg_tb_trans_pane_cp02

0x4657,	// (0x0002a0b2) heading_imed_pane

0x7b1f,	// (0x0002d57a) listscroll_imed_pane

0xc6c3,	// (0x0003211e) heading_imed_pane_g1

0xc6cb,	// (0x00032126) heading_imed_pane_t1

0xc6d9,	// (0x00032134) grid_imed_colour_35_pane_ParamLimits

0xc6d9,	// (0x00032134) grid_imed_colour_35_pane

0x7b2b,	// (0x0002d586) grid_imed_effect_pane

0xc6f5,	// (0x00032150) list_imed_aspect_pane

0x7b42,	// (0x0002d59d) scroll_pane_cp027_ParamLimits

0x7b42,	// (0x0002d59d) scroll_pane_cp027

0x7b53,	// (0x0002d5ae) cell_imed_effect_pane_ParamLimits

0x7b53,	// (0x0002d5ae) cell_imed_effect_pane

0xc6fd,	// (0x00032158) cell_imed_colour_pane_ParamLimits

0xc6fd,	// (0x00032158) cell_imed_colour_pane

0xc747,	// (0x000321a2) cell_imed_colour_pane_g1_ParamLimits

0xc747,	// (0x000321a2) cell_imed_colour_pane_g1

0xc758,	// (0x000321b3) hgihlgiht_grid_pane_cp016_ParamLimits

0xc758,	// (0x000321b3) hgihlgiht_grid_pane_cp016

0x7b78,	// (0x0002d5d3) cell_imed_effect_pane_g1

0x7b80,	// (0x0002d5db) grid_highlight_pane_cp017

0xc769,	// (0x000321c4) list_imed_single_pane_ParamLimits

0xc769,	// (0x000321c4) list_imed_single_pane

0x1e8c,	// (0x000278e7) list_highlight_pane_cp07

0xc77d,	// (0x000321d8) list_imed_aspect_pane_comp1_t1

0xbd27,	// (0x00031782) bg_tb_trans_pane_cp05

0xc79f,	// (0x000321fa) popup_imed_adjust2_window_g1

0xc7c6,	// (0x00032221) popup_imed_adjust2_window_t1

0xc7de,	// (0x00032239) slider_imed_adjust_pane

0xc7f2,	// (0x0003224d) slider_imed_adjust_pane_g1

0xc802,	// (0x0003225d) slider_imed_adjust_pane_g2

0xc812,	// (0x0003226d) slider_imed_adjust_pane_g3

0xc823,	// (0x0003227e) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0003526f) slider_imed_adjust_pane_g

0x7b89,	// (0x0002d5e4) aid_size_cell_clipart2

0x7b95,	// (0x0002d5f0) grid_imed_clipart_pane

0xc834,	// (0x0003228f) scroll_pane_cp031

0x7b9f,	// (0x0002d5fa) cell_imed_clipart_pane_ParamLimits

0x7b9f,	// (0x0002d5fa) cell_imed_clipart_pane

0x7bbc,	// (0x0002d617) cell_imed_clipart_pane_g1

0x1e8c,	// (0x000278e7) grid_highlight_pane_cp014

0x7900,	// (0x0002d35b) main_clock2_pane_g1_ParamLimits

0x7900,	// (0x0002d35b) main_clock2_pane_g1

0x7a32,	// (0x0002d48d) aid_call2_pane_cp10

0x7a44,	// (0x0002d49f) aid_call_pane_cp10

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g1

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g2

0x7a56,	// (0x0002d4b1) popup_clock_analogue_window_cp10_g3

0x7a56,	// (0x0002d4b1) popup_clock_analogue_window_cp10_g4

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0003525d) popup_clock_analogue_window_cp10_g

0x7a6c,	// (0x0002d4c7) popup_clock_analogue_window_cp10_t1

0x1364,	// (0x00026dbf) clock_digital_number_pane_cp10_ParamLimits

0x1364,	// (0x00026dbf) clock_digital_number_pane_cp10

0x137e,	// (0x00026dd9) clock_digital_number_pane_cp11_ParamLimits

0x137e,	// (0x00026dd9) clock_digital_number_pane_cp11

0x1398,	// (0x00026df3) clock_digital_number_pane_cp12_ParamLimits

0x1398,	// (0x00026df3) clock_digital_number_pane_cp12

0x13b2,	// (0x00026e0d) clock_digital_number_pane_cp13_ParamLimits

0x13b2,	// (0x00026e0d) clock_digital_number_pane_cp13

0x13cc,	// (0x00026e27) clock_digital_separator_pane_cp10_ParamLimits

0x13cc,	// (0x00026e27) clock_digital_separator_pane_cp10

0x7a9d,	// (0x0002d4f8) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a9d,	// (0x0002d4f8) popup_clock_digital_window_cp02_t1

0x2837,	// (0x00028292) clock_digital_number_pane_cp10_g1

0x2837,	// (0x00028292) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00035278) clock_digital_number_pane_cp10_g

0x2837,	// (0x00028292) clock_digital_separator_pane_cp10_g1

0x2837,	// (0x00028292) clock_digital_separator_pane_g2_cp10

0x500d,	// (0x0002aa68) navi_pane_vded_g4

0x5016,	// (0x0002aa71) navi_pane_vded_g5

0x501f,	// (0x0002aa7a) navi_pane_vded_t1

0x1e8c,	// (0x000278e7) main_vded_pane

0x7bc5,	// (0x0002d620) main_vded_pane_g1

0x7bd1,	// (0x0002d62c) main_vded_pane_g2

0x7bdd,	// (0x0002d638) main_vded_pane_g3

0x0002,

0xf822,	// (0x0003527d) main_vded_pane_g

0x7be9,	// (0x0002d644) main_vded_pane_t1

0x7bf7,	// (0x0002d652) main_vded_pane_t2

0x0001,

0xf829,	// (0x00035284) main_vded_pane_t

0x7c05,	// (0x0002d660) vded_slider_pane

0x7c0f,	// (0x0002d66a) vded_video_pane

0xc83c,	// (0x00032297) vded_video_pane_g1

0x7c1b,	// (0x0002d676) vded_video_pane_g2

0xc25c,	// (0x00031cb7) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00035289) vded_video_pane_g

0xc846,	// (0x000322a1) vded_slider_pane_g1

0xbf65,	// (0x000319c0) vded_slider_pane_g2

0xc84f,	// (0x000322aa) vded_slider_pane_g3

0xc858,	// (0x000322b3) vded_slider_pane_g4

0xc861,	// (0x000322bc) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00035290) vded_slider_pane_g

0x768b,	// (0x0002d0e6) mup3_rocker_pane_ParamLimits

0x768b,	// (0x0002d0e6) mup3_rocker_pane

0x7c24,	// (0x0002d67f) mup3_control_keys_pane_g1

0x7c2c,	// (0x0002d687) mup3_control_keys_pane_g2

0x7c34,	// (0x0002d68f) mup3_control_keys_pane_g3

0x7c3c,	// (0x0002d697) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0003529b) mup3_control_keys_pane_g

0x20ee,	// (0x00027b49) popup_toolbar2_fixed_window_cp01_ParamLimits

0x20ee,	// (0x00027b49) popup_toolbar2_fixed_window_cp01

0x76c1,	// (0x0002d11c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76c1,	// (0x0002d11c) popup_toolbar2_fixed_window_cp02

0xb0ab,	// (0x00030b06) popup_call2_audio_second_window_t4_ParamLimits

0xb0ab,	// (0x00030b06) popup_call2_audio_second_window_t4

0xb5d9,	// (0x00031034) popup_call2_audio_first_window_t6_ParamLimits

0xb5d9,	// (0x00031034) popup_call2_audio_first_window_t6

0xb86f,	// (0x000312ca) popup_call2_audio_out_window_t6_ParamLimits

0xb86f,	// (0x000312ca) popup_call2_audio_out_window_t6

0x1e8c,	// (0x000278e7) main_vitu_pane

0x7c4c,	// (0x0002d6a7) aid_size_cell_itu_ParamLimits

0x7c4c,	// (0x0002d6a7) aid_size_cell_itu

0x210c,	// (0x00027b67) bg_popup_window_pane_cp08_ParamLimits

0x210c,	// (0x00027b67) bg_popup_window_pane_cp08

0x7c62,	// (0x0002d6bd) field_vitu_entry_pane_ParamLimits

0x7c62,	// (0x0002d6bd) field_vitu_entry_pane

0x7c79,	// (0x0002d6d4) grid_vitu_function_pane_ParamLimits

0x7c79,	// (0x0002d6d4) grid_vitu_function_pane

0x7c94,	// (0x0002d6ef) grid_vitu_itu_pane_ParamLimits

0x7c94,	// (0x0002d6ef) grid_vitu_itu_pane

0x7cb2,	// (0x0002d70d) cell_vitu_itu_pane_ParamLimits

0x7cb2,	// (0x0002d70d) cell_vitu_itu_pane

0x7cd8,	// (0x0002d733) cell_vitu_function_pane_ParamLimits

0x7cd8,	// (0x0002d733) cell_vitu_function_pane

0x210c,	// (0x00027b67) bg_popup_sub_pane_cp08_ParamLimits

0x210c,	// (0x00027b67) bg_popup_sub_pane_cp08

0x7cf3,	// (0x0002d74e) field_vitu_entry_pane_t1_ParamLimits

0x7cf3,	// (0x0002d74e) field_vitu_entry_pane_t1

0xc882,	// (0x000322dd) field_vitu_entry_pane_t2_ParamLimits

0xc882,	// (0x000322dd) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x000352a9) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x000352a9) field_vitu_entry_pane_t

0xc89f,	// (0x000322fa) bg_button_pane_cp05_ParamLimits

0xc89f,	// (0x000322fa) bg_button_pane_cp05

0x7d13,	// (0x0002d76e) cell_vitu_itu_pane_g1

0x7d2b,	// (0x0002d786) cell_vitu_itu_pane_t1_ParamLimits

0x7d2b,	// (0x0002d786) cell_vitu_itu_pane_t1

0x7d3d,	// (0x0002d798) cell_vitu_itu_pane_t2_ParamLimits

0x7d3d,	// (0x0002d798) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x000352ae) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x000352ae) cell_vitu_itu_pane_t

0xc8ad,	// (0x00032308) bg_button_pane_cp07

0x7d72,	// (0x0002d7cd) cell_vitu_function_pane_g1

0xae08,	// (0x00030863) main_calc_pane_g1

0x1ece,	// (0x00027929) aid_visual_content_pane

0x1e8c,	// (0x000278e7) main_vradio_pane

0x7d7b,	// (0x0002d7d6) main_vradio_pane_g1_ParamLimits

0x7d7b,	// (0x0002d7d6) main_vradio_pane_g1

0xc8b7,	// (0x00032312) main_vradio_pane_g2_ParamLimits

0xc8b7,	// (0x00032312) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x000352b5) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x000352b5) main_vradio_pane_g

0x7d92,	// (0x0002d7ed) main_vradio_pane_t1_ParamLimits

0x7d92,	// (0x0002d7ed) main_vradio_pane_t1

0x7da7,	// (0x0002d802) main_vradio_pane_t2_ParamLimits

0x7da7,	// (0x0002d802) main_vradio_pane_t2

0xc8c4,	// (0x0003231f) main_vradio_pane_t3_ParamLimits

0xc8c4,	// (0x0003231f) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x000352ba) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x000352ba) main_vradio_pane_t

0x7dbc,	// (0x0002d817) vradio_rocker_control_pane_ParamLimits

0x7dbc,	// (0x0002d817) vradio_rocker_control_pane

0x7dce,	// (0x0002d829) vradio_station_info_pane_ParamLimits

0x7dce,	// (0x0002d829) vradio_station_info_pane

0xc8d8,	// (0x00032333) vradio_frequency_info_pane_ParamLimits

0xc8d8,	// (0x00032333) vradio_frequency_info_pane

0xc25c,	// (0x00031cb7) vradio_station_info_pane_g1

0xc8e7,	// (0x00032342) vradio_station_info_pane_t1_ParamLimits

0xc8e7,	// (0x00032342) vradio_station_info_pane_t1

0xc909,	// (0x00032364) vradio_station_info_pane_t2_ParamLimits

0xc909,	// (0x00032364) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x000352c1) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x000352c1) vradio_station_info_pane_t

0xc91b,	// (0x00032376) vradio_tuning_pane

0xc923,	// (0x0003237e) vradio_rocker_control_pane_g1

0xc92b,	// (0x00032386) vradio_rocker_control_pane_g2

0xc933,	// (0x0003238e) vradio_rocker_control_pane_g3

0xc93b,	// (0x00032396) vradio_rocker_control_pane_g4

0xc943,	// (0x0003239e) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x000352c6) vradio_rocker_control_pane_g

0x7dde,	// (0x0002d839) vradio_frequency_info_pane_g1

0xc94b,	// (0x000323a6) vradio_frequency_info_pane_t1_ParamLimits

0xc94b,	// (0x000323a6) vradio_frequency_info_pane_t1

0x7de8,	// (0x0002d843) vradio_tuning_pane_g1

0x7df3,	// (0x0002d84e) vradio_tuning_pane_t1

0x1f23,	// (0x0002797e) area_side_right_pane_ParamLimits

0x1f23,	// (0x0002797e) area_side_right_pane

0xbcee,	// (0x00031749) status_small_pane_g1

0xbcf6,	// (0x00031751) status_small_pane_g2

0xbcff,	// (0x0003175a) status_small_pane_g3

0xbd08,	// (0x00031763) status_small_pane_g4

0x0003,

0xf62b,	// (0x00035086) status_small_pane_g

0xbd11,	// (0x0003176c) status_small_pane_t1

0x1e8c,	// (0x000278e7) main_video3_pane

0xc95f,	// (0x000323ba) cams_zoom_vslider_pane

0xc967,	// (0x000323c2) image3_wide_pane_ParamLimits

0xc967,	// (0x000323c2) image3_wide_pane

0xc981,	// (0x000323dc) image3_wide_small_pane

0xc98d,	// (0x000323e8) main_video3_pane_g1_ParamLimits

0xc98d,	// (0x000323e8) main_video3_pane_g1

0xc9a9,	// (0x00032404) main_video3_pane_g2_ParamLimits

0xc9a9,	// (0x00032404) main_video3_pane_g2

0x0001,

0xf876,	// (0x000352d1) main_video3_pane_g_ParamLimits

0xf876,	// (0x000352d1) main_video3_pane_g

0xc9c5,	// (0x00032420) main_video3_pane_t1_ParamLimits

0xc9c5,	// (0x00032420) main_video3_pane_t1

0xc9f0,	// (0x0003244b) main_video3_pane_t2_ParamLimits

0xc9f0,	// (0x0003244b) main_video3_pane_t2

0xca1d,	// (0x00032478) main_video3_pane_t3_ParamLimits

0xca1d,	// (0x00032478) main_video3_pane_t3

0x0002,

0xf87b,	// (0x000352d6) main_video3_pane_t_ParamLimits

0xf87b,	// (0x000352d6) main_video3_pane_t

0xca4a,	// (0x000324a5) cams_zoom_vslider_pane_g1

0xca53,	// (0x000324ae) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x000352dd) cams_zoom_vslider_pane_g

0xca5b,	// (0x000324b6) small_slider_vertical_pane

0xc25c,	// (0x00031cb7) small_slider_vertical_pane_g1

0xc25c,	// (0x00031cb7) small_slider_vertical_pane_g2

0xca63,	// (0x000324be) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x000352e2) small_slider_vertical_pane_g

0x1e8c,	// (0x000278e7) main_hwr_training_pane

0xca6c,	// (0x000324c7) hwr_training_instruct_pane_ParamLimits

0xca6c,	// (0x000324c7) hwr_training_instruct_pane

0x7e02,	// (0x0002d85d) hwr_training_navi_pane_ParamLimits

0x7e02,	// (0x0002d85d) hwr_training_navi_pane

0x7e21,	// (0x0002d87c) hwr_training_write_pane_ParamLimits

0x7e21,	// (0x0002d87c) hwr_training_write_pane

0x1e8c,	// (0x000278e7) bg_frame_shadow_pane

0xcaa3,	// (0x000324fe) hwr_training_write_pane_g1

0xcaab,	// (0x00032506) hwr_training_write_pane_g2

0xcab3,	// (0x0003250e) hwr_training_write_pane_g3

0xcabb,	// (0x00032516) hwr_training_write_pane_g4

0xcac3,	// (0x0003251e) hwr_training_write_pane_g5

0xcacb,	// (0x00032526) hwr_training_write_pane_g6

0xcad3,	// (0x0003252e) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x000352e9) hwr_training_write_pane_g

0xcadb,	// (0x00032536) hwr_training_navi_pane_g1_ParamLimits

0xcadb,	// (0x00032536) hwr_training_navi_pane_g1

0xcaed,	// (0x00032548) hwr_training_navi_pane_g2_ParamLimits

0xcaed,	// (0x00032548) hwr_training_navi_pane_g2

0xcaff,	// (0x0003255a) hwr_training_navi_pane_g3_ParamLimits

0xcaff,	// (0x0003255a) hwr_training_navi_pane_g3

0xcb0f,	// (0x0003256a) hwr_training_navi_pane_g4_ParamLimits

0xcb0f,	// (0x0003256a) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000352f8) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000352f8) hwr_training_navi_pane_g

0xcb1c,	// (0x00032577) hwr_training_navi_pane_t1

0x7e5c,	// (0x0002d8b7) list_single_hwr_training_instruct_pane_ParamLimits

0x7e5c,	// (0x0002d8b7) list_single_hwr_training_instruct_pane

0xcb2a,	// (0x00032585) list_single_hwr_training_instruct_pane_t1

0xc19c,	// (0x00031bf7) bg_frame_shadow_pane_g1

0xcb39,	// (0x00032594) bg_frame_shadow_pane_g2

0xcb41,	// (0x0003259c) bg_frame_shadow_pane_g3

0xcb49,	// (0x000325a4) bg_frame_shadow_pane_g4

0xcb51,	// (0x000325ac) bg_frame_shadow_pane_g5

0xcb59,	// (0x000325b4) bg_frame_shadow_pane_g6

0xcb61,	// (0x000325bc) bg_frame_shadow_pane_g7

0x2cb6,	// (0x00028711) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00035303) bg_frame_shadow_pane_g

0x1e8c,	// (0x000278e7) main_video_tele_dialer_pane

0x13f3,	// (0x00026e4e) aid_size_cell_video_keypad_ParamLimits

0x13f3,	// (0x00026e4e) aid_size_cell_video_keypad

0x140d,	// (0x00026e68) grid_video_dialer_keypad_pane_ParamLimits

0x140d,	// (0x00026e68) grid_video_dialer_keypad_pane

0x145b,	// (0x00026eb6) video_down_pane_cp_ParamLimits

0x145b,	// (0x00026eb6) video_down_pane_cp

0x1473,	// (0x00026ece) cell_video_dialer_keypad_pane_ParamLimits

0x1473,	// (0x00026ece) cell_video_dialer_keypad_pane

0xcb69,	// (0x000325c4) bg_button_pane_cp08_ParamLimits

0xcb69,	// (0x000325c4) bg_button_pane_cp08

0x7e94,	// (0x0002d8ef) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e94,	// (0x0002d8ef) cell_video_dialer_keypad_pane_g1

0x7675,	// (0x0002d0d0) mup3_rocker2_pane_ParamLimits

0x7675,	// (0x0002d0d0) mup3_rocker2_pane

0xc25c,	// (0x00031cb7) mup3_rocker2_pane_g1

0x6623,	// (0x0002c07e) main_dialer2_pane

0x1e8c,	// (0x000278e7) main_mp4_pane

0xcb7d,	// (0x000325d8) main_mp4_pane_g1_ParamLimits

0xcb7d,	// (0x000325d8) main_mp4_pane_g1

0xcb7d,	// (0x000325d8) main_mp4_pane_g2_ParamLimits

0xcb7d,	// (0x000325d8) main_mp4_pane_g2

0x1499,	// (0x00026ef4) main_mp4_pane_g3_ParamLimits

0x1499,	// (0x00026ef4) main_mp4_pane_g3

0xcb8b,	// (0x000325e6) main_mp4_pane_g4_ParamLimits

0xcb8b,	// (0x000325e6) main_mp4_pane_g4

0xcba5,	// (0x00032600) main_mp4_pane_g5_ParamLimits

0xcba5,	// (0x00032600) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00035323) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00035323) main_mp4_pane_g

0xcbd9,	// (0x00032634) main_mp4_pane_t1_ParamLimits

0xcbd9,	// (0x00032634) main_mp4_pane_t1

0xcc35,	// (0x00032690) main_mp4_pane_t2_ParamLimits

0xcc35,	// (0x00032690) main_mp4_pane_t2

0xcc87,	// (0x000326e2) main_mp4_pane_t3_ParamLimits

0xcc87,	// (0x000326e2) main_mp4_pane_t3

0xcca7,	// (0x00032702) main_mp4_pane_t4_ParamLimits

0xcca7,	// (0x00032702) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00035330) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00035330) main_mp4_pane_t

0xcce7,	// (0x00032742) mp4_progress_pane_ParamLimits

0xcce7,	// (0x00032742) mp4_progress_pane

0xcd31,	// (0x0003278c) mp4_rocker_pane_ParamLimits

0xcd31,	// (0x0003278c) mp4_rocker_pane

0xcd5b,	// (0x000327b6) mp4_progress_pane_t1

0xcd74,	// (0x000327cf) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00035339) mp4_progress_pane_t

0xcd8d,	// (0x000327e8) mup_progress_pane_cp04

0xcd99,	// (0x000327f4) mp4_rocker_pane_g1

0x14e3,	// (0x00026f3e) aid_cell_size_keypad2_ParamLimits

0x14e3,	// (0x00026f3e) aid_cell_size_keypad2

0x14f9,	// (0x00026f54) dialer2_ne_pane_ParamLimits

0x14f9,	// (0x00026f54) dialer2_ne_pane

0x1511,	// (0x00026f6c) grid_dialer2_keypad_pane_ParamLimits

0x1511,	// (0x00026f6c) grid_dialer2_keypad_pane

0xc03b,	// (0x00031a96) bg_popup_call_pane_cp07_ParamLimits

0xc03b,	// (0x00031a96) bg_popup_call_pane_cp07

0x7ecf,	// (0x0002d92a) dialer2_ne_pane_t1_ParamLimits

0x7ecf,	// (0x0002d92a) dialer2_ne_pane_t1

0x152d,	// (0x00026f88) cell_dialer2_keypad_pane_ParamLimits

0x152d,	// (0x00026f88) cell_dialer2_keypad_pane

0xcdb5,	// (0x00032810) bg_button_pane_pane_cp04_ParamLimits

0xcdb5,	// (0x00032810) bg_button_pane_pane_cp04

0x7f0f,	// (0x0002d96a) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f0f,	// (0x0002d96a) cell_dialer2_keypad_pane_g1

0x35d3,	// (0x0002902e) aid_placing_vt_set_content_ParamLimits

0x35d3,	// (0x0002902e) aid_placing_vt_set_content

0x35f3,	// (0x0002904e) aid_placing_vt_set_title_ParamLimits

0x35f3,	// (0x0002904e) aid_placing_vt_set_title

0x1e8c,	// (0x000278e7) main_image3_pane

0x15b1,	// (0x0002700c) area_side_right_pane_cp01_ParamLimits

0x15b1,	// (0x0002700c) area_side_right_pane_cp01

0xcb7d,	// (0x000325d8) main_image3_pane_g1_ParamLimits

0xcb7d,	// (0x000325d8) main_image3_pane_g1

0x15ca,	// (0x00027025) main_image3_pane_g2_ParamLimits

0x15ca,	// (0x00027025) main_image3_pane_g2

0x15f2,	// (0x0002704d) main_image3_pane_g3_ParamLimits

0x15f2,	// (0x0002704d) main_image3_pane_g3

0x161c,	// (0x00027077) main_image3_pane_g4_ParamLimits

0x161c,	// (0x00027077) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00035348) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00035348) main_image3_pane_g

0x1646,	// (0x000270a1) main_image3_pane_t1_ParamLimits

0x1646,	// (0x000270a1) main_image3_pane_t1

0x169e,	// (0x000270f9) main_image3_pane_t2_ParamLimits

0x169e,	// (0x000270f9) main_image3_pane_t2

0x16f0,	// (0x0002714b) main_image3_pane_t3_ParamLimits

0x16f0,	// (0x0002714b) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00035351) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00035351) main_image3_pane_t

0x210c,	// (0x00027b67) grid_sctrl_middle_pane_cp01_ParamLimits

0x210c,	// (0x00027b67) grid_sctrl_middle_pane_cp01

0x7f77,	// (0x0002d9d2) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f77,	// (0x0002d9d2) cell_sctrl_middle_pane_cp01

0x7f94,	// (0x0002d9ef) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f94,	// (0x0002d9ef) cell_sctrl_middle_pane_cp01_g1

0x1e8c,	// (0x000278e7) main_call4_pane

0x7fa9,	// (0x0002da04) aid_size_button_call4_ParamLimits

0x7fa9,	// (0x0002da04) aid_size_button_call4

0x7fdc,	// (0x0002da37) call4_windows_pane_ParamLimits

0x7fdc,	// (0x0002da37) call4_windows_pane

0x7ffe,	// (0x0002da59) grid_call4_button_pane_ParamLimits

0x7ffe,	// (0x0002da59) grid_call4_button_pane

0xcdf5,	// (0x00032850) call4_windows_conf_pane

0xce10,	// (0x0003286b) popup_call4_audio_first_window_ParamLimits

0xce10,	// (0x0003286b) popup_call4_audio_first_window

0xce5e,	// (0x000328b9) popup_call4_audio_second_window_ParamLimits

0xce5e,	// (0x000328b9) popup_call4_audio_second_window

0xce74,	// (0x000328cf) popup_call4_audio_wait_window_ParamLimits

0xce74,	// (0x000328cf) popup_call4_audio_wait_window

0x8029,	// (0x0002da84) cell_call4_button_pane_ParamLimits

0x8029,	// (0x0002da84) cell_call4_button_pane

0x8050,	// (0x0002daab) bg_button_pane_cp09_ParamLimits

0x8050,	// (0x0002daab) bg_button_pane_cp09

0x805c,	// (0x0002dab7) cell_call4_button_pane_g1_ParamLimits

0x805c,	// (0x0002dab7) cell_call4_button_pane_g1

0x8082,	// (0x0002dadd) cell_call4_button_pane_t1_ParamLimits

0x8082,	// (0x0002dadd) cell_call4_button_pane_t1

0xcebc,	// (0x00032917) popup_call4_audio_conf_window_ParamLimits

0xcebc,	// (0x00032917) popup_call4_audio_conf_window

0x76d7,	// (0x0002d132) mup3_progress_pane_t1_ParamLimits

0x76ee,	// (0x0002d149) mup3_progress_pane_t2_ParamLimits

0xc57b,	// (0x00031fd6) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0003522a) mup3_progress_pane_t_ParamLimits

0xc592,	// (0x00031fed) mup_progress_pane_cp03_ParamLimits

0x7c44,	// (0x0002d69f) mup3_control_keys_pane_g4_copy1

0xcd15,	// (0x00032770) mp4_rocker2_pane_ParamLimits

0xcd15,	// (0x00032770) mp4_rocker2_pane

0xced6,	// (0x00032931) mp4_rocker2_pane_g1

0xcede,	// (0x00032939) mp4_rocker2_pane_g2

0xcee6,	// (0x00032941) mp4_rocker2_pane_g3

0xceee,	// (0x00032949) mp4_rocker2_pane_g4

0xcef6,	// (0x00032951) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0003535a) mp4_rocker2_pane_g

0x1e8c,	// (0x000278e7) main_camera4_pane

0x1e8c,	// (0x000278e7) main_video4_pane

0x1429,	// (0x00026e84) main_video_tele_dialer_pane_t1_ParamLimits

0x1429,	// (0x00026e84) main_video_tele_dialer_pane_t1

0x1442,	// (0x00026e9d) main_video_tele_dialer_pane_t2_ParamLimits

0x1442,	// (0x00026e9d) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00035314) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00035314) main_video_tele_dialer_pane_t

0x1790,	// (0x000271eb) cam4_autofocus_pane_ParamLimits

0x1790,	// (0x000271eb) cam4_autofocus_pane

0x17a6,	// (0x00027201) cam4_image_uncrop_pane_ParamLimits

0x17a6,	// (0x00027201) cam4_image_uncrop_pane

0x17bf,	// (0x0002721a) cam4_indicators_pane_ParamLimits

0x17bf,	// (0x0002721a) cam4_indicators_pane

0x17ee,	// (0x00027249) main_camera4_pane_g1_ParamLimits

0x17ee,	// (0x00027249) main_camera4_pane_g1

0x17fa,	// (0x00027255) main_camera4_pane_g2_ParamLimits

0x17fa,	// (0x00027255) main_camera4_pane_g2

0x17fa,	// (0x00027255) main_camera4_pane_g3_ParamLimits

0x17fa,	// (0x00027255) main_camera4_pane_g3

0x1806,	// (0x00027261) main_camera4_pane_g4_ParamLimits

0x1806,	// (0x00027261) main_camera4_pane_g4

0x1812,	// (0x0002726d) main_camera4_pane_g5_ParamLimits

0x1812,	// (0x0002726d) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00035365) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00035365) main_camera4_pane_g

0x182f,	// (0x0002728a) main_camera4_pane_t1_ParamLimits

0x182f,	// (0x0002728a) main_camera4_pane_t1

0xcf10,	// (0x0003296b) bg_tb_trans_pane_cp06

0xcf26,	// (0x00032981) cam4_indicators_pane_g1

0xcf33,	// (0x0003298e) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00035380) cam4_indicators_pane_g

0xcf53,	// (0x000329ae) cam4_indicators_pane_t1

0x187f,	// (0x000272da) main_video4_pane_g1_ParamLimits

0x187f,	// (0x000272da) main_video4_pane_g1

0x1891,	// (0x000272ec) main_video4_pane_g2_ParamLimits

0x1891,	// (0x000272ec) main_video4_pane_g2

0x18a5,	// (0x00027300) main_video4_pane_g3_ParamLimits

0x18a5,	// (0x00027300) main_video4_pane_g3

0x18b5,	// (0x00027310) main_video4_pane_g4_ParamLimits

0x18b5,	// (0x00027310) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00035387) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00035387) main_video4_pane_g

0x18d5,	// (0x00027330) vid4_indicators_pane_ParamLimits

0x18d5,	// (0x00027330) vid4_indicators_pane

0x1905,	// (0x00027360) video4_image_uncrop_cif_pane_ParamLimits

0x1905,	// (0x00027360) video4_image_uncrop_cif_pane

0x191f,	// (0x0002737a) video4_image_uncrop_nhd_pane_ParamLimits

0x191f,	// (0x0002737a) video4_image_uncrop_nhd_pane

0x17a6,	// (0x00027201) video4_image_uncrop_vga_pane_ParamLimits

0x17a6,	// (0x00027201) video4_image_uncrop_vga_pane

0xcf77,	// (0x000329d2) bg_tb_trans_pane_cp07

0x1935,	// (0x00027390) vid4_indicators_pane_g1

0x1942,	// (0x0002739d) vid4_indicators_pane_g2

0x194f,	// (0x000273aa) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00035392) vid4_indicators_pane_g

0x1974,	// (0x000273cf) vid4_indicators_pane_t1

0x80d0,	// (0x0002db2b) cam4_autofocus_pane_g1

0x80d8,	// (0x0002db33) cam4_autofocus_pane_g2

0x80e0,	// (0x0002db3b) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0003539d) cam4_autofocus_pane_g

0x80e8,	// (0x0002db43) cam4_autofocus_pane_g3_copy1

0x7e78,	// (0x0002d8d3) video_down_pane_cp_t1

0x7e86,	// (0x0002d8e1) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00035319) video_down_pane_cp_t

0x210c,	// (0x00027b67) popup_vitu2_window_ParamLimits

0x210c,	// (0x00027b67) popup_vitu2_window

0x1986,	// (0x000273e1) aid_size_cell2_itu2_ParamLimits

0x1986,	// (0x000273e1) aid_size_cell2_itu2

0x19ac,	// (0x00027407) aid_size_cell_itu2_ParamLimits

0x19ac,	// (0x00027407) aid_size_cell_itu2

0x1a0a,	// (0x00027465) bg_popup_window_pane_cp09_ParamLimits

0x1a0a,	// (0x00027465) bg_popup_window_pane_cp09

0x1a18,	// (0x00027473) field_vitu2_entry_pane_ParamLimits

0x1a18,	// (0x00027473) field_vitu2_entry_pane

0x1a40,	// (0x0002749b) grid_vitu2_function_pane_ParamLimits

0x1a40,	// (0x0002749b) grid_vitu2_function_pane

0x1a91,	// (0x000274ec) grid_vitu2_itu_pane_ParamLimits

0x1a91,	// (0x000274ec) grid_vitu2_itu_pane

0x1b1c,	// (0x00027577) cell_vitu2_itu_pane_ParamLimits

0x1b1c,	// (0x00027577) cell_vitu2_itu_pane

0x1b42,	// (0x0002759d) cell_vitu2_function_pane_ParamLimits

0x1b42,	// (0x0002759d) cell_vitu2_function_pane

0xcf8f,	// (0x000329ea) bg_popup_call_pane_cp08_ParamLimits

0xcf8f,	// (0x000329ea) bg_popup_call_pane_cp08

0xcfa8,	// (0x00032a03) field_vitu2_entry_pane_g1

0xcfb4,	// (0x00032a0f) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x000353a4) field_vitu2_entry_pane_g

0x80f0,	// (0x0002db4b) field_vitu2_entry_pane_t1_ParamLimits

0x80f0,	// (0x0002db4b) field_vitu2_entry_pane_t1

0xcfce,	// (0x00032a29) field_vitu2_entry_pane_t2_ParamLimits

0xcfce,	// (0x00032a29) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x000353ab) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x000353ab) field_vitu2_entry_pane_t

0x1b86,	// (0x000275e1) bg_button_pane_cp010_ParamLimits

0x1b86,	// (0x000275e1) bg_button_pane_cp010

0x1b94,	// (0x000275ef) cell_vitu2_itu_pane_g1

0x1bb2,	// (0x0002760d) cell_vitu2_itu_pane_t1_ParamLimits

0x1bb2,	// (0x0002760d) cell_vitu2_itu_pane_t1

0x1c18,	// (0x00027673) cell_vitu2_itu_pane_t2_ParamLimits

0x1c18,	// (0x00027673) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x000353b5) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x000353b5) cell_vitu2_itu_pane_t

0xcff3,	// (0x00032a4e) bg_button_pane_cp011

0x1cf4,	// (0x0002774f) cell_vitu2_function_pane_g1

0x1e8c,	// (0x000278e7) main_myfav_hc_pane

0x1740,	// (0x0002719b) popup_image3_note_pane_ParamLimits

0x1740,	// (0x0002719b) popup_image3_note_pane

0x175c,	// (0x000271b7) popup_image3_tool_bar_pane_ParamLimits

0x175c,	// (0x000271b7) popup_image3_tool_bar_pane

0x1c9c,	// (0x000276f7) cell_vitu2_itu_pane_t3_ParamLimits

0x1c9c,	// (0x000276f7) cell_vitu2_itu_pane_t3

0x1e8c,	// (0x000278e7) bg_popup_trans_pane

0xd001,	// (0x00032a5c) grid_image3_tool_bar_pane

0xd00b,	// (0x00032a66) bg_popup_trans_pane_g1

0x3b2b,	// (0x00029586) bg_popup_trans_pane_g2

0xd013,	// (0x00032a6e) bg_popup_trans_pane_g3

0xd01b,	// (0x00032a76) bg_popup_trans_pane_g4

0xd023,	// (0x00032a7e) bg_popup_trans_pane_g5

0xd02b,	// (0x00032a86) bg_popup_trans_pane_g6

0xd033,	// (0x00032a8e) bg_popup_trans_pane_g7

0xd03b,	// (0x00032a96) bg_popup_trans_pane_g8

0x3b0b,	// (0x00029566) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x000353bc) bg_popup_trans_pane_g

0xd043,	// (0x00032a9e) cell_image3_tool_bar_pane_ParamLimits

0xd043,	// (0x00032a9e) cell_image3_tool_bar_pane

0xc25c,	// (0x00031cb7) cell_image3_tool_bar_pane_g1

0x1e8c,	// (0x000278e7) bg_popup_trans_pane_cp1

0xd059,	// (0x00032ab4) popup_image3_note_pane_t1

0xd067,	// (0x00032ac2) popup_image3_note_pane_t2

0xd075,	// (0x00032ad0) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x000353cf) popup_image3_note_pane_t

0xd085,	// (0x00032ae0) popup_image3_note_pane_t3_copy1

0x810d,	// (0x0002db68) bg_myfav_hc_instruction_pane_ParamLimits

0x810d,	// (0x0002db68) bg_myfav_hc_instruction_pane

0x8125,	// (0x0002db80) cell_myfav_contact_pane_ParamLimits

0x8125,	// (0x0002db80) cell_myfav_contact_pane

0x8141,	// (0x0002db9c) cell_myfav_contact_pane_cp1_ParamLimits

0x8141,	// (0x0002db9c) cell_myfav_contact_pane_cp1

0x8159,	// (0x0002dbb4) cell_myfav_contact_pane_cp2_ParamLimits

0x8159,	// (0x0002dbb4) cell_myfav_contact_pane_cp2

0x8171,	// (0x0002dbcc) cell_myfav_contact_pane_cp3_ParamLimits

0x8171,	// (0x0002dbcc) cell_myfav_contact_pane_cp3

0x8188,	// (0x0002dbe3) cell_myfav_contact_pane_cp4_ParamLimits

0x8188,	// (0x0002dbe3) cell_myfav_contact_pane_cp4

0x81a0,	// (0x0002dbfb) cell_myfav_contact_pane_cp5_ParamLimits

0x81a0,	// (0x0002dbfb) cell_myfav_contact_pane_cp5

0x81b4,	// (0x0002dc0f) cell_myfav_contact_pane_cp6_ParamLimits

0x81b4,	// (0x0002dc0f) cell_myfav_contact_pane_cp6

0x81ca,	// (0x0002dc25) cell_myfav_contact_pane_cp7_ParamLimits

0x81ca,	// (0x0002dc25) cell_myfav_contact_pane_cp7

0xd093,	// (0x00032aee) listscroll_gen_pane_cp05

0x81e2,	// (0x0002dc3d) main_myfav_hc_pane_g1_ParamLimits

0x81e2,	// (0x0002dc3d) main_myfav_hc_pane_g1

0x81fc,	// (0x0002dc57) main_myfav_hc_pane_g2_ParamLimits

0x81fc,	// (0x0002dc57) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x000353d6) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x000353d6) main_myfav_hc_pane_g

0x8230,	// (0x0002dc8b) main_myfav_hc_pane_t1_ParamLimits

0x8230,	// (0x0002dc8b) main_myfav_hc_pane_t1

0xd09c,	// (0x00032af7) main_myfav_hc_pane_t2_ParamLimits

0xd09c,	// (0x00032af7) main_myfav_hc_pane_t2

0xd0ae,	// (0x00032b09) main_myfav_hc_pane_t3_ParamLimits

0xd0ae,	// (0x00032b09) main_myfav_hc_pane_t3

0x8247,	// (0x0002dca2) main_myfav_hc_pane_t4_ParamLimits

0x8247,	// (0x0002dca2) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x000353dd) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x000353dd) main_myfav_hc_pane_t

0xc25c,	// (0x00031cb7) bg_myfav_hc_instruction_pane_g1

0xd0c0,	// (0x00032b1b) cell_myfav_contact_pane_g1_ParamLimits

0xd0c0,	// (0x00032b1b) cell_myfav_contact_pane_g1

0xd0c0,	// (0x00032b1b) cell_myfav_contact_pane_g2_ParamLimits

0xd0c0,	// (0x00032b1b) cell_myfav_contact_pane_g2

0xd0cc,	// (0x00032b27) cell_myfav_contact_pane_g3_ParamLimits

0xd0cc,	// (0x00032b27) cell_myfav_contact_pane_g3

0xc565,	// (0x00031fc0) cell_myfav_contact_pane_g4_ParamLimits

0xc565,	// (0x00031fc0) cell_myfav_contact_pane_g4

0xd0d9,	// (0x00032b34) cell_myfav_contact_pane_g5_ParamLimits

0xd0d9,	// (0x00032b34) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x000353e8) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x000353e8) cell_myfav_contact_pane_g

0x8216,	// (0x0002dc71) main_myfav_hc_pane_g3_ParamLimits

0x8216,	// (0x0002dc71) main_myfav_hc_pane_g3

0x2044,	// (0x00027a9f) popup_adpt_find_window

0x8271,	// (0x0002dccc) afind_page_pane_ParamLimits

0x8271,	// (0x0002dccc) afind_page_pane

0x8286,	// (0x0002dce1) aid_size_cell_afind_ParamLimits

0x8286,	// (0x0002dce1) aid_size_cell_afind

0x82a4,	// (0x0002dcff) bg_popup_sub_pane_cp09_ParamLimits

0x82a4,	// (0x0002dcff) bg_popup_sub_pane_cp09

0x82b1,	// (0x0002dd0c) find_pane_cp01_ParamLimits

0x82b1,	// (0x0002dd0c) find_pane_cp01

0xd0e5,	// (0x00032b40) grid_afind_control_pane_ParamLimits

0xd0e5,	// (0x00032b40) grid_afind_control_pane

0x82be,	// (0x0002dd19) grid_afind_pane_ParamLimits

0x82be,	// (0x0002dd19) grid_afind_pane

0x82e0,	// (0x0002dd3b) cell_afind_pane_ParamLimits

0x82e0,	// (0x0002dd3b) cell_afind_pane

0xc25c,	// (0x00031cb7) afind_page_pane_g1

0x8347,	// (0x0002dda2) afind_page_pane_g2

0x8350,	// (0x0002ddab) afind_page_pane_g3

0x0002,

0xf998,	// (0x000353f3) afind_page_pane_g

0x8359,	// (0x0002ddb4) afind_page_pane_t1

0xd0f9,	// (0x00032b54) cell_afind_grid_control_pane_ParamLimits

0xd0f9,	// (0x00032b54) cell_afind_grid_control_pane

0xcdb5,	// (0x00032810) bg_button_pane_cp69_ParamLimits

0xcdb5,	// (0x00032810) bg_button_pane_cp69

0x8379,	// (0x0002ddd4) cell_afind_pane_g1_ParamLimits

0x8379,	// (0x0002ddd4) cell_afind_pane_g1

0x8386,	// (0x0002dde1) cell_afind_pane_t1_ParamLimits

0x8386,	// (0x0002dde1) cell_afind_pane_t1

0x3454,	// (0x00028eaf) bg_button_pane_cp72

0xd108,	// (0x00032b63) cell_afind_grid_control_pane_g1

0x5e38,	// (0x0002b893) aid_image_placing_area_ParamLimits

0x5e38,	// (0x0002b893) aid_image_placing_area

0xc86a,	// (0x000322c5) field_vitu_entry_pane_g1_ParamLimits

0xc86a,	// (0x000322c5) field_vitu_entry_pane_g1

0xc876,	// (0x000322d1) field_vitu_entry_pane_g2_ParamLimits

0xc876,	// (0x000322d1) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x000352a4) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x000352a4) field_vitu_entry_pane_g

0x7d13,	// (0x0002d76e) cell_vitu_itu_pane_g1_ParamLimits

0x7d55,	// (0x0002d7b0) cell_vitu_itu_pane_t3_ParamLimits

0x7d55,	// (0x0002d7b0) cell_vitu_itu_pane_t3

0xcd5b,	// (0x000327b6) mp4_progress_pane_t1_ParamLimits

0xcd74,	// (0x000327cf) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00035339) mp4_progress_pane_t_ParamLimits

0xcd8d,	// (0x000327e8) mup_progress_pane_cp04_ParamLimits

0x825b,	// (0x0002dcb6) main_myfav_hc_pane_t5_ParamLimits

0x825b,	// (0x0002dcb6) main_myfav_hc_pane_t5

0x1ee2,	// (0x0002793d) aid_zoom_text_primary

0x2044,	// (0x00027a9f) popup_adpt_find_window_ParamLimits

0x210c,	// (0x00027b67) main_cam_set_pane

0x17d8,	// (0x00027233) cam4_zoom_pane_ParamLimits

0x17d8,	// (0x00027233) cam4_zoom_pane

0x8398,	// (0x0002ddf3) main_cam_set_pane_g1_ParamLimits

0x8398,	// (0x0002ddf3) main_cam_set_pane_g1

0x83a6,	// (0x0002de01) main_cam_set_pane_g2_ParamLimits

0x83a6,	// (0x0002de01) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000353fa) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000353fa) main_cam_set_pane_g

0x83c9,	// (0x0002de24) main_cam_set_pane_t1_ParamLimits

0x83c9,	// (0x0002de24) main_cam_set_pane_t1

0x83e4,	// (0x0002de3f) main_cset_listscroll_pane_ParamLimits

0x83e4,	// (0x0002de3f) main_cset_listscroll_pane

0x8408,	// (0x0002de63) main_cset_slider_pane_ParamLimits

0x8408,	// (0x0002de63) main_cset_slider_pane

0xd119,	// (0x00032b74) main_cset_list_pane_ParamLimits

0xd119,	// (0x00032b74) main_cset_list_pane

0xd129,	// (0x00032b84) scroll_pane_cp028

0x8432,	// (0x0002de8d) aid_area_touch_slider

0x844e,	// (0x0002dea9) cset_slider_pane

0x8478,	// (0x0002ded3) main_cset_slider_pane_g1

0x848d,	// (0x0002dee8) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000353ff) main_cset_slider_pane_g

0xd162,	// (0x00032bbd) main_cset_slider_pane_t1

0x854f,	// (0x0002dfaa) main_cset_slider_pane_t2

0x8569,	// (0x0002dfc4) main_cset_slider_pane_t3

0x8583,	// (0x0002dfde) main_cset_slider_pane_t4

0x859d,	// (0x0002dff8) main_cset_slider_pane_t5

0x85bb,	// (0x0002e016) main_cset_slider_pane_t6

0x85d2,	// (0x0002e02d) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00035424) main_cset_slider_pane_t

0x86de,	// (0x0002e139) cset_list_set_pane_ParamLimits

0x86de,	// (0x0002e139) cset_list_set_pane

0x86f2,	// (0x0002e14d) aid_position_infowindow_above

0x86fa,	// (0x0002e155) aid_position_infowindow_below

0xd202,	// (0x00032c5d) cset_list_set_pane_g1_ParamLimits

0xd202,	// (0x00032c5d) cset_list_set_pane_g1

0x8702,	// (0x0002e15d) cset_list_set_pane_g3_ParamLimits

0x8702,	// (0x0002e15d) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00035443) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00035443) cset_list_set_pane_g

0x8711,	// (0x0002e16c) cset_list_set_pane_t1_ParamLimits

0x8711,	// (0x0002e16c) cset_list_set_pane_t1

0x210c,	// (0x00027b67) list_highlight_pane_cp021_ParamLimits

0x210c,	// (0x00027b67) list_highlight_pane_cp021

0x55d7,	// (0x0002b032) cset_slider_pane_g1

0x55e9,	// (0x0002b044) cset_slider_pane_g2

0x55e0,	// (0x0002b03b) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00035448) cset_slider_pane_g

0xd20e,	// (0x00032c69) aid_area_touch_cam4_zoom

0xd216,	// (0x00032c71) cam4_zoom_cont_pane

0xd21e,	// (0x00032c79) cam4_zoom_pane_g1

0xd226,	// (0x00032c81) cam4_zoom_pane_g2

0x1d08,	// (0x00027763) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0003544f) cam4_zoom_pane_g

0xd22e,	// (0x00032c89) cam4_zoom_cont_pane_g1

0xd237,	// (0x00032c92) cam4_zoom_cont_pane_g2

0xd240,	// (0x00032c9b) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00035456) cam4_zoom_cont_pane_g

0x7fc7,	// (0x0002da22) call4_image_pane_ParamLimits

0x7fc7,	// (0x0002da22) call4_image_pane

0xcdf5,	// (0x00032850) call4_windows_conf_pane_ParamLimits

0xce3c,	// (0x00032897) popup_call4_audio_in_window_ParamLimits

0xce3c,	// (0x00032897) popup_call4_audio_in_window

0x1e8c,	// (0x000278e7) bg_popup_call2_act_pane_cp02

0xceb4,	// (0x0003290f) call4_list_conf_pane

0xc25c,	// (0x00031cb7) call4_image_pane_g1

0xc25c,	// (0x00031cb7) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0003516a) call4_image_pane_g

0xd249,	// (0x00032ca4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd249,	// (0x00032ca4) list_single_graphic_popup_conf4_pane

0x1e8c,	// (0x000278e7) list_highlight_pane_cp022

0xd25e,	// (0x00032cb9) list_single_graphic_popup_conf4_pane_g1

0x4ae5,	// (0x0002a540) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0003545d) list_single_graphic_popup_conf4_pane_g

0xd266,	// (0x00032cc1) list_single_graphic_popup_conf4_pane_t1

0x36e1,	// (0x0002913c) popup_vtel_slider_window_ParamLimits

0x36e1,	// (0x0002913c) popup_vtel_slider_window

0xcda3,	// (0x000327fe) dialer2_ne_pane_t2_ParamLimits

0xcda3,	// (0x000327fe) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0003533e) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0003533e) dialer2_ne_pane_t

0xc03b,	// (0x00031a96) bg_popup_sub_pane_cp010_ParamLimits

0xc03b,	// (0x00031a96) bg_popup_sub_pane_cp010

0x8726,	// (0x0002e181) popup_vtel_slider_window_g1_ParamLimits

0x8726,	// (0x0002e181) popup_vtel_slider_window_g1

0x8739,	// (0x0002e194) popup_vtel_slider_window_g2_ParamLimits

0x8739,	// (0x0002e194) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00035462) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00035462) popup_vtel_slider_window_g

0x878f,	// (0x0002e1ea) vtel_slider_pane_ParamLimits

0x878f,	// (0x0002e1ea) vtel_slider_pane

0x87b1,	// (0x0002e20c) vtel_slider_pane_g1_ParamLimits

0x87b1,	// (0x0002e20c) vtel_slider_pane_g1

0x87c5,	// (0x0002e220) vtel_slider_pane_g2_ParamLimits

0x87c5,	// (0x0002e220) vtel_slider_pane_g2

0x87dd,	// (0x0002e238) vtel_slider_pane_g3_ParamLimits

0x87dd,	// (0x0002e238) vtel_slider_pane_g3

0x87b1,	// (0x0002e20c) vtel_slider_pane_g4_ParamLimits

0x87b1,	// (0x0002e20c) vtel_slider_pane_g4

0x87f3,	// (0x0002e24e) vtel_slider_pane_g5_ParamLimits

0x87f3,	// (0x0002e24e) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0003546b) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0003546b) vtel_slider_pane_g

0x1e8c,	// (0x000278e7) main_gallery2_pane

0x19d8,	// (0x00027433) aid_size_row_itut2_dropdow_list_ParamLimits

0x19d8,	// (0x00027433) aid_size_row_itut2_dropdow_list

0x1a68,	// (0x000274c3) grid_vitu2_function_top_pane_ParamLimits

0x1a68,	// (0x000274c3) grid_vitu2_function_top_pane

0x1ac7,	// (0x00027522) popup_vitu2_dropdown_list_window_ParamLimits

0x1ac7,	// (0x00027522) popup_vitu2_dropdown_list_window

0x1af0,	// (0x0002754b) popup_vitu2_match_list_window

0x1d10,	// (0x0002776b) cell_vitu2_function_top_pane_ParamLimits

0x1d10,	// (0x0002776b) cell_vitu2_function_top_pane

0x1d30,	// (0x0002778b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1d30,	// (0x0002778b) cell_vitu2_function_top_pane_cp01

0x1d4e,	// (0x000277a9) cell_vitu2_function_top_wide_pane_ParamLimits

0x1d4e,	// (0x000277a9) cell_vitu2_function_top_wide_pane

0xcff3,	// (0x00032a4e) bg_button_pane_cp012

0x1d6c,	// (0x000277c7) cell_vitu2_function_top_pane_g1

0xd282,	// (0x00032cdd) bg_button_pane_cp013_ParamLimits

0xd282,	// (0x00032cdd) bg_button_pane_cp013

0x8809,	// (0x0002e264) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8809,	// (0x0002e264) cell_vitu2_function_top_wide_pane_g1

0xcff3,	// (0x00032a4e) bg_popup_sub_pane_cp20

0x1d80,	// (0x000277db) list_vitu2_match_list_pane

0xd00b,	// (0x00032a66) bg_popup_sub_pane_cp20_g1

0xd013,	// (0x00032a6e) bg_popup_sub_pane_cp20_g2

0x3b2b,	// (0x00029586) bg_popup_sub_pane_cp20_g3

0xd01b,	// (0x00032a76) bg_popup_sub_pane_cp20_g4

0x3b0b,	// (0x00029566) bg_popup_sub_pane_cp20_g5

0xd29e,	// (0x00032cf9) bg_popup_sub_pane_cp20_g6

0xd02b,	// (0x00032a86) bg_popup_sub_pane_cp20_g7

0xd033,	// (0x00032a8e) bg_popup_sub_pane_cp20_g8

0xd03b,	// (0x00032a96) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00035476) bg_popup_sub_pane_cp20_g

0xd2a6,	// (0x00032d01) list_vitu2_match_list_item_pane_ParamLimits

0xd2a6,	// (0x00032d01) list_vitu2_match_list_item_pane

0xd2b8,	// (0x00032d13) list_vitu2_match_list_item_pane_t1

0xae10,	// (0x0003086b) bg_popup_sub_pane_cp21

0xd2de,	// (0x00032d39) grid_vitu2_dropdown_list_pane

0x1d9e,	// (0x000277f9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1d9e,	// (0x000277f9) cell_vitu2_dropdown_list_char_pane

0x1dc1,	// (0x0002781c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1dc1,	// (0x0002781c) cell_vitu2_dropdown_list_ctrl_pane

0xd2e6,	// (0x00032d41) cell_vitu2_dropdown_list_char_pane_g1

0xd2ef,	// (0x00032d4a) cell_vitu2_dropdown_list_char_pane_g2

0xd2f8,	// (0x00032d53) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00035493) cell_vitu2_dropdown_list_char_pane_g

0x1def,	// (0x0002784a) cell_vitu2_dropdown_list_char_pane_t1

0x884d,	// (0x0002e2a8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x884d,	// (0x0002e2a8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x885d,	// (0x0002e2b8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x885d,	// (0x0002e2b8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x886e,	// (0x0002e2c9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x886e,	// (0x0002e2c9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1dfd,	// (0x00027858) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1dfd,	// (0x00027858) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf10,	// (0x0003296b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf10,	// (0x0003296b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0003549a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0003549a) cell_vitu2_dropdown_list_ctrl_pane_g

0x887e,	// (0x0002e2d9) aid_size_cell_gallery2_ParamLimits

0x887e,	// (0x0002e2d9) aid_size_cell_gallery2

0x8894,	// (0x0002e2ef) grid_gallery2_pane_ParamLimits

0x8894,	// (0x0002e2ef) grid_gallery2_pane

0x88a8,	// (0x0002e303) scroll_pane_cp029_ParamLimits

0x88a8,	// (0x0002e303) scroll_pane_cp029

0x88b4,	// (0x0002e30f) cell_gallery2_pane_ParamLimits

0x88b4,	// (0x0002e30f) cell_gallery2_pane

0xd301,	// (0x00032d5c) cell_gallery2_pane_g2

0x88ee,	// (0x0002e349) cell_gallery2_pane_g3

0xd30b,	// (0x00032d66) cell_gallery2_pane_g4

0xd313,	// (0x00032d6e) cell_gallery2_pane_g5

0x503d,	// (0x0002aa98) grid_highlight_pane_cp10

0x1af0,	// (0x0002754b) popup_vitu2_match_list_window_ParamLimits

0x1b07,	// (0x00027562) popup_vitu2_query_window_ParamLimits

0x1b07,	// (0x00027562) popup_vitu2_query_window

0xae10,	// (0x0003086b) bg_vitu2_candi_button_pane

0xd2e6,	// (0x00032d41) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2ef,	// (0x00032d4a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2f8,	// (0x00032d53) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x88f6,	// (0x0002e351) bg_button_pane_cp015

0x8900,	// (0x0002e35b) bg_button_pane_cp016

0x890a,	// (0x0002e365) bg_button_pane_cp017

0x210c,	// (0x00027b67) bg_popup_sub_pane_cp22

0xd31b,	// (0x00032d76) popup_vitu2_query_window_g1

0x8932,	// (0x0002e38d) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x000354a5) popup_vitu2_query_window_g

0x8940,	// (0x0002e39b) popup_vitu2_query_window_t1_ParamLimits

0x8940,	// (0x0002e39b) popup_vitu2_query_window_t1

0x8968,	// (0x0002e3c3) popup_vitu2_query_window_t2_ParamLimits

0x8968,	// (0x0002e3c3) popup_vitu2_query_window_t2

0x897a,	// (0x0002e3d5) popup_vitu2_query_window_t3_ParamLimits

0x897a,	// (0x0002e3d5) popup_vitu2_query_window_t3

0x89a2,	// (0x0002e3fd) popup_vitu2_query_window_t4_ParamLimits

0x89a2,	// (0x0002e3fd) popup_vitu2_query_window_t4

0x89b6,	// (0x0002e411) popup_vitu2_query_window_t5_ParamLimits

0x89b6,	// (0x0002e411) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x000354aa) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x000354aa) popup_vitu2_query_window_t

0xd111,	// (0x00032b6c) main_cset_text_pane

0x8432,	// (0x0002de8d) aid_area_touch_slider_ParamLimits

0x844e,	// (0x0002dea9) cset_slider_pane_ParamLimits

0x8478,	// (0x0002ded3) main_cset_slider_pane_g1_ParamLimits

0x848d,	// (0x0002dee8) main_cset_slider_pane_g2_ParamLimits

0xd132,	// (0x00032b8d) main_cset_slider_pane_g3_ParamLimits

0xd132,	// (0x00032b8d) main_cset_slider_pane_g3

0x84a2,	// (0x0002defd) main_cset_slider_pane_g4_ParamLimits

0x84a2,	// (0x0002defd) main_cset_slider_pane_g4

0x84b1,	// (0x0002df0c) main_cset_slider_pane_g5_ParamLimits

0x84b1,	// (0x0002df0c) main_cset_slider_pane_g5

0x84bf,	// (0x0002df1a) main_cset_slider_pane_g6_ParamLimits

0x84bf,	// (0x0002df1a) main_cset_slider_pane_g6

0xf9a4,	// (0x000353ff) main_cset_slider_pane_g_ParamLimits

0xd162,	// (0x00032bbd) main_cset_slider_pane_t1_ParamLimits

0x854f,	// (0x0002dfaa) main_cset_slider_pane_t2_ParamLimits

0x8569,	// (0x0002dfc4) main_cset_slider_pane_t3_ParamLimits

0x8583,	// (0x0002dfde) main_cset_slider_pane_t4_ParamLimits

0x859d,	// (0x0002dff8) main_cset_slider_pane_t5_ParamLimits

0x85bb,	// (0x0002e016) main_cset_slider_pane_t6_ParamLimits

0x85d2,	// (0x0002e02d) main_cset_slider_pane_t7_ParamLimits

0x8600,	// (0x0002e05b) main_cset_slider_pane_t8_ParamLimits

0x8600,	// (0x0002e05b) main_cset_slider_pane_t8

0x8628,	// (0x0002e083) main_cset_slider_pane_t9_ParamLimits

0x8628,	// (0x0002e083) main_cset_slider_pane_t9

0x8650,	// (0x0002e0ab) main_cset_slider_pane_t10_ParamLimits

0x8650,	// (0x0002e0ab) main_cset_slider_pane_t10

0x8678,	// (0x0002e0d3) main_cset_slider_pane_t11_ParamLimits

0x8678,	// (0x0002e0d3) main_cset_slider_pane_t11

0x86a2,	// (0x0002e0fd) main_cset_slider_pane_t12_ParamLimits

0x86a2,	// (0x0002e0fd) main_cset_slider_pane_t12

0x86bf,	// (0x0002e11a) main_cset_slider_pane_t13_ParamLimits

0x86bf,	// (0x0002e11a) main_cset_slider_pane_t13

0xf9c9,	// (0x00035424) main_cset_slider_pane_t_ParamLimits

0x1e8c,	// (0x000278e7) bg_popup_sub_pane_cp011

0xd327,	// (0x00032d82) main_cset_text_pane_g1

0xd32f,	// (0x00032d8a) main_cset_text_pane_t1

0xd33d,	// (0x00032d98) main_cset_text_pane_t2

0xd34b,	// (0x00032da6) main_cset_text_pane_t3

0xd359,	// (0x00032db4) main_cset_text_pane_t4

0xd367,	// (0x00032dc2) main_cset_text_pane_t5

0xd375,	// (0x00032dd0) main_cset_text_pane_t6

0xd383,	// (0x00032dde) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x000354b5) main_cset_text_pane_t

0x1e8c,	// (0x000278e7) main_cam4_burst_pane

0x1e8c,	// (0x000278e7) main_cam5_pane

0x8367,	// (0x0002ddc2) bg_button_pane_cp019

0x8370,	// (0x0002ddcb) bg_button_pane_cp020

0xd13e,	// (0x00032b99) main_cset_slider_pane_g7_ParamLimits

0xd13e,	// (0x00032b99) main_cset_slider_pane_g7

0xd14a,	// (0x00032ba5) main_cset_slider_pane_g8_ParamLimits

0xd14a,	// (0x00032ba5) main_cset_slider_pane_g8

0x84d3,	// (0x0002df2e) main_cset_slider_pane_g9_ParamLimits

0x84d3,	// (0x0002df2e) main_cset_slider_pane_g9

0x84df,	// (0x0002df3a) main_cset_slider_pane_g10_ParamLimits

0x84df,	// (0x0002df3a) main_cset_slider_pane_g10

0x84eb,	// (0x0002df46) main_cset_slider_pane_g11_ParamLimits

0x84eb,	// (0x0002df46) main_cset_slider_pane_g11

0x84f7,	// (0x0002df52) main_cset_slider_pane_g12_ParamLimits

0x84f7,	// (0x0002df52) main_cset_slider_pane_g12

0x8503,	// (0x0002df5e) main_cset_slider_pane_g13_ParamLimits

0x8503,	// (0x0002df5e) main_cset_slider_pane_g13

0x850f,	// (0x0002df6a) main_cset_slider_pane_g14_ParamLimits

0x850f,	// (0x0002df6a) main_cset_slider_pane_g14

0x851b,	// (0x0002df76) main_cset_slider_pane_g15_ParamLimits

0x851b,	// (0x0002df76) main_cset_slider_pane_g15

0xd190,	// (0x00032beb) main_cset_slider_pane_t14_ParamLimits

0xd190,	// (0x00032beb) main_cset_slider_pane_t14

0xd1c9,	// (0x00032c24) main_cset_slider_pane_t15_ParamLimits

0xd1c9,	// (0x00032c24) main_cset_slider_pane_t15

0x89ca,	// (0x0002e425) aid_cam4_burst_size_cell_ParamLimits

0x89ca,	// (0x0002e425) aid_cam4_burst_size_cell

0x89ea,	// (0x0002e445) grid_cam4_burst_pane_ParamLimits

0x89ea,	// (0x0002e445) grid_cam4_burst_pane

0x8a24,	// (0x0002e47f) linegrid_cam4_burst_pane_ParamLimits

0x8a24,	// (0x0002e47f) linegrid_cam4_burst_pane

0xd391,	// (0x00032dec) scroll_pane_cp30_ParamLimits

0xd391,	// (0x00032dec) scroll_pane_cp30

0x8a48,	// (0x0002e4a3) cell_cam4_burst_pane_ParamLimits

0x8a48,	// (0x0002e4a3) cell_cam4_burst_pane

0xd39d,	// (0x00032df8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd39d,	// (0x00032df8) linegrid_cam4_burst_pane_g1

0x8a9d,	// (0x0002e4f8) linegrid_cam4_burst_pane_g2_ParamLimits

0x8a9d,	// (0x0002e4f8) linegrid_cam4_burst_pane_g2

0xd3aa,	// (0x00032e05) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3aa,	// (0x00032e05) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x000354c4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x000354c4) linegrid_cam4_burst_pane_g

0x8aae,	// (0x0002e509) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8aae,	// (0x0002e509) linegrid_cam4_burst_pane_g3_copy1

0xd3b7,	// (0x00032e12) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3b7,	// (0x00032e12) linegrid_cam4_burst_pane_g4

0x8acc,	// (0x0002e527) linegrid_cam4_burst_pane_g5_ParamLimits

0x8acc,	// (0x0002e527) linegrid_cam4_burst_pane_g5

0x8add,	// (0x0002e538) linegrid_cam4_burst_pane_g6_ParamLimits

0x8add,	// (0x0002e538) linegrid_cam4_burst_pane_g6

0xd3c4,	// (0x00032e1f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3c4,	// (0x00032e1f) linegrid_cam4_burst_pane_g7

0x8af4,	// (0x0002e54f) cell_cam4_burst_pane_g1

0xd3dd,	// (0x00032e38) main_cam5_pane_t1_ParamLimits

0xd3dd,	// (0x00032e38) main_cam5_pane_t1

0xd3ef,	// (0x00032e4a) main_cam5_pane_t2_ParamLimits

0xd3ef,	// (0x00032e4a) main_cam5_pane_t2

0xd401,	// (0x00032e5c) main_cam5_pane_t3_ParamLimits

0xd401,	// (0x00032e5c) main_cam5_pane_t3

0xd413,	// (0x00032e6e) main_cam5_pane_t4_ParamLimits

0xd413,	// (0x00032e6e) main_cam5_pane_t4

0xd42b,	// (0x00032e86) main_cam5_pane_t5_ParamLimits

0xd42b,	// (0x00032e86) main_cam5_pane_t5

0xd43f,	// (0x00032e9a) main_cam5_pane_t6_ParamLimits

0xd43f,	// (0x00032e9a) main_cam5_pane_t6

0xd453,	// (0x00032eae) main_cam5_pane_t7_ParamLimits

0xd453,	// (0x00032eae) main_cam5_pane_t7

0xd465,	// (0x00032ec0) main_cam5_pane_t8_ParamLimits

0xd465,	// (0x00032ec0) main_cam5_pane_t8

0xd483,	// (0x00032ede) main_cam5_pane_t9_ParamLimits

0xd483,	// (0x00032ede) main_cam5_pane_t9

0xd495,	// (0x00032ef0) main_cam5_pane_t10_ParamLimits

0xd495,	// (0x00032ef0) main_cam5_pane_t10

0xd4a7,	// (0x00032f02) main_cam5_pane_t11_ParamLimits

0xd4a7,	// (0x00032f02) main_cam5_pane_t11

0xd4bb,	// (0x00032f16) main_cam5_pane_t12_ParamLimits

0xd4bb,	// (0x00032f16) main_cam5_pane_t12

0xd4d2,	// (0x00032f2d) main_cam5_pane_t13_ParamLimits

0xd4d2,	// (0x00032f2d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x000354d0) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x000354d0) main_cam5_pane_t

0x20d2,	// (0x00027b2d) popup_scut_keymap_window_ParamLimits

0x20d2,	// (0x00027b2d) popup_scut_keymap_window

0x8b07,	// (0x0002e562) aid_size_cell_brow_shortcut

0x503d,	// (0x0002aa98) bg_popup_window_pane_cp010

0x8b13,	// (0x0002e56e) grid_scut_pane

0x8b1f,	// (0x0002e57a) cell_scut_pane_ParamLimits

0x8b1f,	// (0x0002e57a) cell_scut_pane

0x8b38,	// (0x0002e593) cell_scut_pane_g1

0xd4f5,	// (0x00032f50) cell_scut_pane_t1

0xd504,	// (0x00032f5f) cell_scut_pane_t2

0x8b41,	// (0x0002e59c) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x000354eb) cell_scut_pane_t

0x7294,	// (0x0002ccef) main_mup3_pane_g8_ParamLimits

0x7294,	// (0x0002ccef) main_mup3_pane_g8

0x19f2,	// (0x0002744d) area_vitu2_query_pane_ParamLimits

0x19f2,	// (0x0002744d) area_vitu2_query_pane

0x8914,	// (0x0002e36f) input_focus_pane_cp08

0xd513,	// (0x00032f6e) area_vitu2_query_pane_g1

0x8b4f,	// (0x0002e5aa) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000354f2) area_vitu2_query_pane_g

0x8b60,	// (0x0002e5bb) area_vitu2_query_pane_t1_ParamLimits

0x8b60,	// (0x0002e5bb) area_vitu2_query_pane_t1

0x8b74,	// (0x0002e5cf) area_vitu2_query_pane_t2_ParamLimits

0x8b74,	// (0x0002e5cf) area_vitu2_query_pane_t2

0x8b88,	// (0x0002e5e3) area_vitu2_query_pane_t3_ParamLimits

0x8b88,	// (0x0002e5e3) area_vitu2_query_pane_t3

0xd51f,	// (0x00032f7a) area_vitu2_query_pane_t4_ParamLimits

0xd51f,	// (0x00032f7a) area_vitu2_query_pane_t4

0xd547,	// (0x00032fa2) area_vitu2_query_pane_t5_ParamLimits

0xd547,	// (0x00032fa2) area_vitu2_query_pane_t5

0xd56f,	// (0x00032fca) area_vitu2_query_pane_t6_ParamLimits

0xd56f,	// (0x00032fca) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000354f7) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000354f7) area_vitu2_query_pane_t

0x8bb0,	// (0x0002e60b) bg_button_pane_cp018

0x8bbe,	// (0x0002e619) bg_button_pane_cp021

0x8bca,	// (0x0002e625) bg_button_pane_cp022

0x8bdb,	// (0x0002e636) input_focus_pane_cp09

0x4e62,	// (0x0002a8bd) aid_size_touch_mv_arrow_left

0x4e8b,	// (0x0002a8e6) aid_size_touch_mv_arrow_right

0x8533,	// (0x0002df8e) main_cset_slider_pane_g16_ParamLimits

0x8533,	// (0x0002df8e) main_cset_slider_pane_g16

0x8541,	// (0x0002df9c) main_cset_slider_pane_g17_ParamLimits

0x8541,	// (0x0002df9c) main_cset_slider_pane_g17

0x8af4,	// (0x0002e54f) cell_cam4_burst_pane_g1_ParamLimits

0x1e8c,	// (0x000278e7) compa_mode_pane

0x8749,	// (0x0002e1a4) popup_vtel_slider_window_g3_ParamLimits

0x8749,	// (0x0002e1a4) popup_vtel_slider_window_g3

0x8760,	// (0x0002e1bb) popup_vtel_slider_window_g4_ParamLimits

0x8760,	// (0x0002e1bb) popup_vtel_slider_window_g4

0x8777,	// (0x0002e1d2) popup_vtel_slider_window_t1_ParamLimits

0x8777,	// (0x0002e1d2) popup_vtel_slider_window_t1

0x1e8c,	// (0x000278e7) main_cl_pane

0xbd53,	// (0x000317ae) popup_imed_adjust2_window_ParamLimits

0xbd27,	// (0x00031782) bg_tb_trans_pane_cp05_ParamLimits

0xc79f,	// (0x000321fa) popup_imed_adjust2_window_g1_ParamLimits

0xc7ae,	// (0x00032209) popup_imed_adjust2_window_g2_ParamLimits

0xc7ae,	// (0x00032209) popup_imed_adjust2_window_g2

0xc7ba,	// (0x00032215) popup_imed_adjust2_window_g3_ParamLimits

0xc7ba,	// (0x00032215) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00035268) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00035268) popup_imed_adjust2_window_g

0xc7c6,	// (0x00032221) popup_imed_adjust2_window_t1_ParamLimits

0xc7de,	// (0x00032239) slider_imed_adjust_pane_ParamLimits

0xc7f2,	// (0x0003224d) slider_imed_adjust_pane_g1_ParamLimits

0xc802,	// (0x0003225d) slider_imed_adjust_pane_g2_ParamLimits

0xc812,	// (0x0003226d) slider_imed_adjust_pane_g3_ParamLimits

0xc823,	// (0x0003227e) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0003526f) slider_imed_adjust_pane_g_ParamLimits

0x1778,	// (0x000271d3) aid_touch_area_cam4_ParamLimits

0x1778,	// (0x000271d3) aid_touch_area_cam4

0xcefe,	// (0x00032959) battery_pane_cp01

0x1823,	// (0x0002727e) main_camera4_pane_g6_ParamLimits

0x1823,	// (0x0002727e) main_camera4_pane_g6

0x1846,	// (0x000272a1) main_camera4_pane_t2_ParamLimits

0x1846,	// (0x000272a1) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00035372) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00035372) main_camera4_pane_t

0x1867,	// (0x000272c2) aid_touch_area_vid4_ParamLimits

0x1867,	// (0x000272c2) aid_touch_area_vid4

0x18c5,	// (0x00027320) main_video4_pane_g5_ParamLimits

0x18c5,	// (0x00027320) main_video4_pane_g5

0x18ec,	// (0x00027347) vid4_progress_pane_ParamLimits

0x18ec,	// (0x00027347) vid4_progress_pane

0xd156,	// (0x00032bb1) main_cset_slider_pane_g18_ParamLimits

0xd156,	// (0x00032bb1) main_cset_slider_pane_g18

0xd3d1,	// (0x00032e2c) cell_cam4_burst_pane_g2_ParamLimits

0xd3d1,	// (0x00032e2c) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x000354cb) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x000354cb) cell_cam4_burst_pane_g

0x2b15,	// (0x00028570) bg_cl_pane_ParamLimits

0x2b15,	// (0x00028570) bg_cl_pane

0x8bec,	// (0x0002e647) cl_header_pane_ParamLimits

0x8bec,	// (0x0002e647) cl_header_pane

0x8c00,	// (0x0002e65b) cl_listscroll_pane_ParamLimits

0x8c00,	// (0x0002e65b) cl_listscroll_pane

0xd5bb,	// (0x00033016) bg_cl_pane_g1

0xd5c3,	// (0x0003301e) bg_cl_pane_g2

0xd5cb,	// (0x00033026) bg_cl_pane_g3

0xd5d3,	// (0x0003302e) bg_cl_pane_g4

0xd5db,	// (0x00033036) bg_cl_pane_g5

0xd5e3,	// (0x0003303e) bg_cl_pane_g6

0xd5eb,	// (0x00033046) bg_cl_pane_g7

0xd5f3,	// (0x0003304e) bg_cl_pane_g8

0xd5fb,	// (0x00033056) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00035506) bg_cl_pane_g

0x8c10,	// (0x0002e66b) aid_height_cl_leading_ParamLimits

0x8c10,	// (0x0002e66b) aid_height_cl_leading

0x8c1c,	// (0x0002e677) aid_height_cl_text_ParamLimits

0x8c1c,	// (0x0002e677) aid_height_cl_text

0x210c,	// (0x00027b67) bg_cl_header_pane_ParamLimits

0x210c,	// (0x00027b67) bg_cl_header_pane

0x8c3b,	// (0x0002e696) cl_header_pane_g1_ParamLimits

0x8c3b,	// (0x0002e696) cl_header_pane_g1

0x8c51,	// (0x0002e6ac) cl_header_pane_t1_ParamLimits

0x8c51,	// (0x0002e6ac) cl_header_pane_t1

0xd603,	// (0x0003305e) cl_list_pane

0xd129,	// (0x00032b84) hc_scroll_pane_cp01

0x3b0b,	// (0x00029566) bg_cl_header_pane_g1

0xd00b,	// (0x00032a66) bg_cl_header_pane_g2

0x3b2b,	// (0x00029586) bg_cl_header_pane_g3

0xd01b,	// (0x00032a76) bg_cl_header_pane_g4

0xd013,	// (0x00032a6e) bg_cl_header_pane_g5

0xd29e,	// (0x00032cf9) bg_cl_header_pane_g6

0xd033,	// (0x00032a8e) bg_cl_header_pane_g7

0xd03b,	// (0x00032a96) bg_cl_header_pane_g8

0xd02b,	// (0x00032a86) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00035519) bg_cl_header_pane_g

0x8c6a,	// (0x0002e6c5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c6a,	// (0x0002e6c5) hc_cl_list_double_graphic_heading_pane

0x8c7d,	// (0x0002e6d8) hc_cl_list_single_graphic_pane_ParamLimits

0x8c7d,	// (0x0002e6d8) hc_cl_list_single_graphic_pane

0x8c95,	// (0x0002e6f0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c95,	// (0x0002e6f0) hc_cl_list_single_graphic_pane_g1

0x8ca1,	// (0x0002e6fc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8ca1,	// (0x0002e6fc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0003552c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0003552c) hc_cl_list_single_graphic_pane_g

0x8cb5,	// (0x0002e710) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8cb5,	// (0x0002e710) hc_cl_list_single_graphic_pane_t1

0x8c95,	// (0x0002e6f0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c95,	// (0x0002e6f0) hc_cl_list_double_graphic_heading_pane_g1

0x8cca,	// (0x0002e725) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8cca,	// (0x0002e725) hc_cl_list_double_graphic_heading_pane_g2

0x8cde,	// (0x0002e739) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cde,	// (0x0002e739) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00035531) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00035531) hc_cl_list_double_graphic_heading_pane_g

0x8cf2,	// (0x0002e74d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8cf2,	// (0x0002e74d) hc_cl_list_double_graphic_heading_pane_t1

0x8d07,	// (0x0002e762) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d07,	// (0x0002e762) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00035538) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00035538) hc_cl_list_double_graphic_heading_pane_t

0xd614,	// (0x0003306f) vid4_progress_pane_g1

0xd620,	// (0x0003307b) vid4_progress_pane_g2

0xd62c,	// (0x00033087) vid4_progress_pane_g3

0xd63b,	// (0x00033096) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0003553d) vid4_progress_pane_g

0xd659,	// (0x000330b4) vid4_progress_pane_t1

0xd66f,	// (0x000330ca) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00035548) vid4_progress_pane_t

0xd69a,	// (0x000330f5) wait_bar_pane_cp07

0xc049,	// (0x00031aa4) blid_firmament_pane_ParamLimits

0xc08c,	// (0x00031ae7) popup_blid_sat_info2_window_g1

0xc0b0,	// (0x00031b0b) popup_blid_sat_info2_window_t3

0xc0be,	// (0x00031b19) popup_blid_sat_info2_window_t4

0xc0cc,	// (0x00031b27) popup_blid_sat_info2_window_t5

0xc0da,	// (0x00031b35) popup_blid_sat_info2_window_t6

0xc0ea,	// (0x00031b45) popup_blid_sat_info2_window_t7

0xc0f8,	// (0x00031b53) popup_blid_sat_info2_window_t8

0xc106,	// (0x00031b61) popup_blid_sat_info2_window_t9

0xc114,	// (0x00031b6f) popup_blid_sat_info2_window_t10

0xc1dc,	// (0x00031c37) aid_firma_cardinal_ParamLimits

0xc1f0,	// (0x00031c4b) blid_firmament_pane_t1_ParamLimits

0xc207,	// (0x00031c62) blid_firmament_pane_t2_ParamLimits

0xc21e,	// (0x00031c79) blid_firmament_pane_t3_ParamLimits

0xc235,	// (0x00031c90) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00035161) blid_firmament_pane_t_ParamLimits

0xc24c,	// (0x00031ca7) blid_sat_info_pane_ParamLimits

0x210c,	// (0x00027b67) main_cam_set_pane_ParamLimits

0x7abf,	// (0x0002d51a) aid_size_cell_colour_35_ParamLimits

0x7adf,	// (0x0002d53a) aid_size_cell_colour_112_ParamLimits

0x7aff,	// (0x0002d55a) aid_size_cell_effect_ParamLimits

0xbd27,	// (0x00031782) bg_tb_trans_pane_cp02_ParamLimits

0x4657,	// (0x0002a0b2) heading_imed_pane_ParamLimits

0x7b1f,	// (0x0002d57a) listscroll_imed_pane_ParamLimits

0xb355,	// (0x00030db0) popup_call2_audio_first_window_g5_ParamLimits

0xb355,	// (0x00030db0) popup_call2_audio_first_window_g5

0x1553,	// (0x00026fae) aid_size_touch_image3_arrow_left_ParamLimits

0x1553,	// (0x00026fae) aid_size_touch_image3_arrow_left

0x157f,	// (0x00026fda) aid_size_touch_image3_arrow_right_ParamLimits

0x157f,	// (0x00026fda) aid_size_touch_image3_arrow_right

0xd685,	// (0x000330e0) vid4_progress_pane_t3

0x7e3c,	// (0x0002d897) main_hwr_training_symbol_option_pane_ParamLimits

0x7e3c,	// (0x0002d897) main_hwr_training_symbol_option_pane

0xca8e,	// (0x000324e9) popup_hwr_training_preview_window_ParamLimits

0xca8e,	// (0x000324e9) popup_hwr_training_preview_window

0x13e6,	// (0x00026e41) hwr_training_navi_pane_g5_ParamLimits

0x13e6,	// (0x00026e41) hwr_training_navi_pane_g5

0xcfeb,	// (0x00032a46) popup_char_count_window

0xcff3,	// (0x00032a4e) bg_popup_sub_pane_cp20_ParamLimits

0x1d80,	// (0x000277db) list_vitu2_match_list_pane_ParamLimits

0x1d8f,	// (0x000277ea) vitu2_page_scroll_pane_ParamLimits

0x1d8f,	// (0x000277ea) vitu2_page_scroll_pane

0xd706,	// (0x00033161) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd706,	// (0x00033161) list_single_hwr_training_symbol_option_pane

0xd719,	// (0x00033174) list_single_hwr_training_symbol_option_pane_g1

0xd721,	// (0x0003317c) list_single_hwr_training_symbol_option_pane_t1

0xd72f,	// (0x0003318a) bg_button_pane_cp023

0xd738,	// (0x00033193) bg_button_pane_cp024

0x8d1c,	// (0x0002e777) vitu2_page_scroll_pane_g1

0x8d24,	// (0x0002e77f) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0003554f) vitu2_page_scroll_pane_g

0x8d2e,	// (0x0002e789) vitu2_page_scroll_pane_t1

0xbf65,	// (0x000319c0) popup_char_count_window_g1

0xd76b,	// (0x000331c6) popup_char_count_window_g2

0xd774,	// (0x000331cf) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00035554) popup_char_count_window_g

0xd77d,	// (0x000331d8) popup_char_count_window_t1

0x1e8c,	// (0x000278e7) main_vded2_pane

0xc78b,	// (0x000321e6) aid_size_cell_imed_line

0xc795,	// (0x000321f0) grid_imed_line_width_pane

0x195c,	// (0x000273b7) vid4_indicators_pane_g4

0xd78b,	// (0x000331e6) cell_imed_line_width_pane_ParamLimits

0xd78b,	// (0x000331e6) cell_imed_line_width_pane

0xd7a1,	// (0x000331fc) cell_imed_line_width_pane_g1

0xbff7,	// (0x00031a52) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0003555b) cell_imed_line_width_pane_g

0x8d3d,	// (0x0002e798) main_vded2_pane_g1_ParamLimits

0x8d3d,	// (0x0002e798) main_vded2_pane_g1

0x8d58,	// (0x0002e7b3) main_vded2_pane_g2_ParamLimits

0x8d58,	// (0x0002e7b3) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00035560) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00035560) main_vded2_pane_g

0x8d6a,	// (0x0002e7c5) vded2_slider_pane_ParamLimits

0x8d6a,	// (0x0002e7c5) vded2_slider_pane

0x8d7a,	// (0x0002e7d5) aid_size_touch_vded2_end

0x8d84,	// (0x0002e7df) aid_size_touch_vded2_playhead

0xd7aa,	// (0x00033205) aid_size_touch_vded2_start

0xd7b2,	// (0x0003320d) vded2_slider_bg_pane

0xd7bb,	// (0x00033216) vded2_slider_pane_g1

0xd7c4,	// (0x0003321f) vded2_slider_pane_g2

0x8d8e,	// (0x0002e7e9) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00035565) vded2_slider_pane_g

0xd7cc,	// (0x00033227) vded2_slider_bg_pane_g1

0xd7d5,	// (0x00033230) vded2_slider_bg_pane_g2

0xd7de,	// (0x00033239) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0003556c) vded2_slider_bg_pane_g

0x57b6,	// (0x0002b211) aid_postcard_touch_down_pane_ParamLimits

0x57b6,	// (0x0002b211) aid_postcard_touch_down_pane

0x57ce,	// (0x0002b229) aid_postcard_touch_up_pane_ParamLimits

0x57ce,	// (0x0002b229) aid_postcard_touch_up_pane

0x1e8c,	// (0x000278e7) main_blid2_pane

0xbd35,	// (0x00031790) popup_blid2_search_window

0x1e8c,	// (0x000278e7) blid2_gps_pane

0x1e8c,	// (0x000278e7) blid2_navig_pane

0x1e8c,	// (0x000278e7) blid2_search_pane

0x1e8c,	// (0x000278e7) blid2_tripm_pane

0x8d99,	// (0x0002e7f4) blid2_search_pane_g1_ParamLimits

0x8d99,	// (0x0002e7f4) blid2_search_pane_g1

0x8db1,	// (0x0002e80c) blid2_search_pane_t1_ParamLimits

0x8db1,	// (0x0002e80c) blid2_search_pane_t1

0x8dc3,	// (0x0002e81e) aid_size_cell_blid2_gps_ParamLimits

0x8dc3,	// (0x0002e81e) aid_size_cell_blid2_gps

0x8ddb,	// (0x0002e836) blid2_gps_pane_g1_ParamLimits

0x8ddb,	// (0x0002e836) blid2_gps_pane_g1

0x8def,	// (0x0002e84a) grid_blid2_satellite_pane_ParamLimits

0x8def,	// (0x0002e84a) grid_blid2_satellite_pane

0x8e07,	// (0x0002e862) blid2_navig_pane_g1_ParamLimits

0x8e07,	// (0x0002e862) blid2_navig_pane_g1

0x8e13,	// (0x0002e86e) blid2_navig_pane_t1_ParamLimits

0x8e13,	// (0x0002e86e) blid2_navig_pane_t1

0x8e2e,	// (0x0002e889) blid2_navig_pane_t2_ParamLimits

0x8e2e,	// (0x0002e889) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00035573) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00035573) blid2_navig_pane_t

0x8e49,	// (0x0002e8a4) blid2_navig_ring_pane_ParamLimits

0x8e49,	// (0x0002e8a4) blid2_navig_ring_pane

0x8e64,	// (0x0002e8bf) blid2_speed_pane_ParamLimits

0x8e64,	// (0x0002e8bf) blid2_speed_pane

0x8e70,	// (0x0002e8cb) blid2_tripm_pane_g1_ParamLimits

0x8e70,	// (0x0002e8cb) blid2_tripm_pane_g1

0x8e8b,	// (0x0002e8e6) blid2_tripm_pane_g2_ParamLimits

0x8e8b,	// (0x0002e8e6) blid2_tripm_pane_g2

0x8e9f,	// (0x0002e8fa) blid2_tripm_pane_g3_ParamLimits

0x8e9f,	// (0x0002e8fa) blid2_tripm_pane_g3

0x8eb3,	// (0x0002e90e) blid2_tripm_pane_g4_ParamLimits

0x8eb3,	// (0x0002e90e) blid2_tripm_pane_g4

0x8ec7,	// (0x0002e922) blid2_tripm_pane_g5_ParamLimits

0x8ec7,	// (0x0002e922) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00035578) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00035578) blid2_tripm_pane_g

0x8eed,	// (0x0002e948) blid2_tripm_pane_t1_ParamLimits

0x8eed,	// (0x0002e948) blid2_tripm_pane_t1

0x8f08,	// (0x0002e963) blid2_tripm_pane_t2_ParamLimits

0x8f08,	// (0x0002e963) blid2_tripm_pane_t2

0x8f21,	// (0x0002e97c) blid2_tripm_pane_t3_ParamLimits

0x8f21,	// (0x0002e97c) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00035585) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00035585) blid2_tripm_pane_t

0x8f68,	// (0x0002e9c3) cell_blid2_satellite_pane_ParamLimits

0x8f68,	// (0x0002e9c3) cell_blid2_satellite_pane

0x8f84,	// (0x0002e9df) cell_blid2_satellite_pane_g1

0xd7e7,	// (0x00033242) cell_blid2_satellite_pane_t1

0xc25c,	// (0x00031cb7) blid2_speed_pane_g1

0xd7f5,	// (0x00033250) blid2_speed_pane_t1

0xd803,	// (0x0003325e) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0003558e) blid2_speed_pane_t

0xc25c,	// (0x00031cb7) blid2_navig_ring_pane_g1

0x8f8d,	// (0x0002e9e8) blid2_navig_ring_pane_g2

0x8f95,	// (0x0002e9f0) blid2_navig_ring_pane_g3

0x8f9d,	// (0x0002e9f8) blid2_navig_ring_pane_g4

0x8fa5,	// (0x0002ea00) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00035593) blid2_navig_ring_pane_g

0x1e8c,	// (0x000278e7) bg_popup_window_pane_cp011

0xd811,	// (0x0003326c) popup_blid2_search_window_g1

0xd819,	// (0x00033274) popup_blid2_search_window_t1

0xd827,	// (0x00033282) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0003559e) popup_blid2_search_window_t

0x39c8,	// (0x00029423) main_browser_pane_g1

0x2b15,	// (0x00028570) main_browser_pane_ParamLimits

0xcff3,	// (0x00032a4e) bg_button_pane_cp011_ParamLimits

0x1cf4,	// (0x0002774f) cell_vitu2_function_pane_g1_ParamLimits

0x210c,	// (0x00027b67) bg_popup_sub_pane_cp22_ParamLimits

0x8914,	// (0x0002e36f) input_focus_pane_cp08_ParamLimits

0x8921,	// (0x0002e37c) popup_vitu2_query_button_pane_ParamLimits

0x8921,	// (0x0002e37c) popup_vitu2_query_button_pane

0x88f6,	// (0x0002e351) popup_vitu2_query_input_button_pane

0xd31b,	// (0x00032d76) popup_vitu2_query_window_g1_ParamLimits

0x8932,	// (0x0002e38d) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x000354a5) popup_vitu2_query_window_g_ParamLimits

0x1e8c,	// (0x000278e7) bg_button_pane_cp026

0x8fad,	// (0x0002ea08) popup_vitu2_query_input_button_pane_g1

0x1e8c,	// (0x000278e7) bg_button_pane_cp025

0xd835,	// (0x00033290) popup_vitu2_query_button_pane_t1

0x6fa5,	// (0x0002ca00) main_mp3_pane_t6

0x6fb3,	// (0x0002ca0e) popup_slider_window_cp01

0xcf1e,	// (0x00032979) cam4_battery_pane

0xcf85,	// (0x000329e0) cam4_battery_pane_cp02

0x1e19,	// (0x00027874) cam4_battery_pane_cp01

0xd60c,	// (0x00033067) cam4_battery_pane_cp03

0xcd99,	// (0x000327f4) cam4_battery_pane_g1

0xc25c,	// (0x00031cb7) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x000355a3) cam4_battery_pane_g

0xc122,	// (0x00031b7d) popup_blid_sat_info2_window_t11

0x4e62,	// (0x0002a8bd) aid_size_touch_mv_arrow_left_ParamLimits

0x4e8b,	// (0x0002a8e6) aid_size_touch_mv_arrow_right_ParamLimits

0x4ed3,	// (0x0002a92e) navi_pane_g1_ParamLimits

0x4edf,	// (0x0002a93a) navi_pane_g2_ParamLimits

0x4f0d,	// (0x0002a968) navi_pane_g3_ParamLimits

0xf418,	// (0x00034e73) navi_pane_g_ParamLimits

0x4fcb,	// (0x0002aa26) navi_pane_mv_t1_ParamLimits

0x7b2b,	// (0x0002d586) grid_imed_effect_pane_ParamLimits

0x360f,	// (0x0002906a) aid_placing_vt_slider_lsc

0x3617,	// (0x00029072) aid_placing_vt_slider_prt

0x210c,	// (0x00027b67) bg_tb_trans_pane_cp01_ParamLimits

0xc3ac,	// (0x00031e07) popup_image_details_window_g1_ParamLimits

0xc3bf,	// (0x00031e1a) popup_image_details_window_g2_ParamLimits

0xc3d4,	// (0x00031e2f) popup_image_details_window_g3_ParamLimits

0xc3d4,	// (0x00031e2f) popup_image_details_window_g3

0xf74b,	// (0x000351a6) popup_image_details_window_g_ParamLimits

0xc3e8,	// (0x00031e43) popup_image_details_window_t1_ParamLimits

0xc3fa,	// (0x00031e55) popup_image_details_window_t2_ParamLimits

0xc413,	// (0x00031e6e) popup_image_details_window_t3_ParamLimits

0xc427,	// (0x00031e82) popup_image_details_window_t4_ParamLimits

0xc442,	// (0x00031e9d) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x000351ad) popup_image_details_window_t_ParamLimits

0x8c28,	// (0x0002e683) cl_header_name_pane_ParamLimits

0x8c28,	// (0x0002e683) cl_header_name_pane

0x8fb5,	// (0x0002ea10) cl_header_name_pane_t1_ParamLimits

0x8fb5,	// (0x0002ea10) cl_header_name_pane_t1

0x8fd6,	// (0x0002ea31) cl_header_name_pane_t2_ParamLimits

0x8fd6,	// (0x0002ea31) cl_header_name_pane_t2

0x9018,	// (0x0002ea73) cl_header_name_pane_t3_ParamLimits

0x9018,	// (0x0002ea73) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x000355a8) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x000355a8) cl_header_name_pane_t

0x4f9c,	// (0x0002a9f7) navi_pane_mv_g2_ParamLimits

0xcfa8,	// (0x00032a03) field_vitu2_entry_pane_g1_ParamLimits

0xcfb4,	// (0x00032a0f) field_vitu2_entry_pane_g2_ParamLimits

0xcfc0,	// (0x00032a1b) field_vitu2_entry_pane_g3_ParamLimits

0xcfc0,	// (0x00032a1b) field_vitu2_entry_pane_g3

0xf949,	// (0x000353a4) field_vitu2_entry_pane_g_ParamLimits

0x1b94,	// (0x000275ef) cell_vitu2_itu_pane_g1_ParamLimits

0x1ba4,	// (0x000275ff) cell_vitu2_itu_pane_g2_ParamLimits

0x1ba4,	// (0x000275ff) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x000353b0) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x000353b0) cell_vitu2_itu_pane_g

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp05_ParamLimits

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp05

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp03

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp04

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp10_ParamLimits

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp10

0x8bca,	// (0x0002e625) bg_vkb2_func_pane_cp08

0x8bb0,	// (0x0002e60b) bg_vkb2_func_pane_cp06

0x8bbe,	// (0x0002e619) bg_vkb2_func_pane_cp07

0xd741,	// (0x0003319c) bg_vkb2_func_pane_cp11_ParamLimits

0xd741,	// (0x0003319c) bg_vkb2_func_pane_cp11

0xd756,	// (0x000331b1) bg_vkb2_func_pane_cp12_ParamLimits

0xd756,	// (0x000331b1) bg_vkb2_func_pane_cp12

0x1e8c,	// (0x000278e7) bg_vkb2_func_pane_cp09

0xd00b,	// (0x00032a66) bg_vkb2_func_pane_g1

0x3b2b,	// (0x00029586) bg_vkb2_func_pane_g2

0xd013,	// (0x00032a6e) bg_vkb2_func_pane_g3

0xd01b,	// (0x00032a76) bg_vkb2_func_pane_g4

0xd29e,	// (0x00032cf9) bg_vkb2_func_pane_g5

0xd033,	// (0x00032a8e) bg_vkb2_func_pane_g6

0xd03b,	// (0x00032a96) bg_vkb2_func_pane_g7

0xd02b,	// (0x00032a86) bg_vkb2_func_pane_g8

0x3b0b,	// (0x00029566) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x000355af) bg_vkb2_func_pane_g

0x8edb,	// (0x0002e936) blid2_tripm_pane_g6_ParamLimits

0x8edb,	// (0x0002e936) blid2_tripm_pane_g6

0xcd53,	// (0x000327ae) mp4_progress_pane_g1

0x8f54,	// (0x0002e9af) blid2_tripm_values_pane_ParamLimits

0x8f54,	// (0x0002e9af) blid2_tripm_values_pane

0x9049,	// (0x0002eaa4) blid2_tripm_values_pane_t1

0x9057,	// (0x0002eab2) blid2_tripm_values_pane_t2

0x9065,	// (0x0002eac0) blid2_tripm_values_pane_t3

0x9073,	// (0x0002eace) blid2_tripm_values_pane_t4

0x9081,	// (0x0002eadc) blid2_tripm_values_pane_t5

0x908f,	// (0x0002eaea) blid2_tripm_values_pane_t6

0x909d,	// (0x0002eaf8) blid2_tripm_values_pane_t7

0x90ab,	// (0x0002eb06) blid2_tripm_values_pane_t8

0x90b9,	// (0x0002eb14) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x000355c2) blid2_tripm_values_pane_t

0x364f,	// (0x000290aa) call_video_pane_t1_ParamLimits

0x3661,	// (0x000290bc) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00034cfc) call_video_pane_t_ParamLimits

0x56cf,	// (0x0002b12a) msg_header_pane_g1_ParamLimits

0x56dd,	// (0x0002b138) msg_header_pane_g2_ParamLimits

0x56dd,	// (0x0002b138) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00034f16) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00034f16) msg_header_pane_g

0x2b15,	// (0x00028570) main_clock2_pane_ParamLimits

0x78bb,	// (0x0002d316) grid_clock2_toolbar_pane_ParamLimits

0x78bb,	// (0x0002d316) grid_clock2_toolbar_pane

0x78bb,	// (0x0002d316) listscroll_clock2_pane_ParamLimits

0x78bb,	// (0x0002d316) listscroll_clock2_pane

0x799f,	// (0x0002d3fa) main_clock2_pane_t3_ParamLimits

0x799f,	// (0x0002d3fa) main_clock2_pane_t3

0x79ba,	// (0x0002d415) main_clock2_pane_t4_ParamLimits

0x79ba,	// (0x0002d415) main_clock2_pane_t4

0xd843,	// (0x0003329e) cell_clock2_toolbar_pane

0xd84b,	// (0x000332a6) cell_clock2_toolbar_pane_cp01

0xd84b,	// (0x000332a6) cell_clock2_toolbar_pane_cp02

0xd853,	// (0x000332ae) cell_clock2_toolbar_pane_cp03

0xd85b,	// (0x000332b6) list_clock2_pane

0x4bec,	// (0x0002a647) scroll_pane_cp10

0xd863,	// (0x000332be) list_single_clock2_pane_ParamLimits

0xd863,	// (0x000332be) list_single_clock2_pane

0x503d,	// (0x0002aa98) list_highlight_pane_cp08

0xd870,	// (0x000332cb) list_single_clock2_pane_t1

0xd87e,	// (0x000332d9) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x000355d5) list_single_clock2_pane_t

0x1e8c,	// (0x000278e7) bg_button_pane_cp10

0xd88c,	// (0x000332e7) cell_clock2_toolbar_pane_g1

0x0ec4,	// (0x0002691f) aid_main_viewer_pane_g1_ParamLimits

0x0ec4,	// (0x0002691f) aid_main_viewer_pane_g1

0x0ed2,	// (0x0002692d) aid_main_viewer_pane_g2_ParamLimits

0x0ed2,	// (0x0002692d) aid_main_viewer_pane_g2

0x576c,	// (0x0002b1c7) aid_main_viewer_pane_g3_ParamLimits

0x576c,	// (0x0002b1c7) aid_main_viewer_pane_g3

0x577b,	// (0x0002b1d6) aid_main_viewer_pane_g4_ParamLimits

0x577b,	// (0x0002b1d6) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00034f27) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00034f27) aid_main_viewer_pane_g

0x660f,	// (0x0002c06a) main_calc_pane_ParamLimits

0x6623,	// (0x0002c07e) main_dialer2_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_cam6_pane

0x1e8c,	// (0x000278e7) main_vid6_pane

0x78c7,	// (0x0002d322) listscroll_gen_pane_cp06_ParamLimits

0x78c7,	// (0x0002d322) listscroll_gen_pane_cp06

0x79d5,	// (0x0002d430) main_clock2_pane_t5_ParamLimits

0x79d5,	// (0x0002d430) main_clock2_pane_t5

0x7a32,	// (0x0002d48d) aid_call2_pane_cp10_ParamLimits

0x7a44,	// (0x0002d49f) aid_call_pane_cp10_ParamLimits

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a56,	// (0x0002d4b1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a56,	// (0x0002d4b1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4ded,	// (0x0002a848) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0003525d) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a6c,	// (0x0002d4c7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f24,	// (0x0002d97f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f24,	// (0x0002d97f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00035343) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00035343) cell_dialer2_keypad_pane_g

0x7f40,	// (0x0002d99b) cell_dialer2_keypad_pane_t1

0x8424,	// (0x0002de7f) main_cset_text2_pane_ParamLimits

0x8424,	// (0x0002de7f) main_cset_text2_pane

0xd513,	// (0x00032f6e) area_vitu2_query_pane_g1_ParamLimits

0x8b4f,	// (0x0002e5aa) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000354f2) area_vitu2_query_pane_g_ParamLimits

0xd597,	// (0x00032ff2) area_vitu2_query_pane_t7_ParamLimits

0xd597,	// (0x00032ff2) area_vitu2_query_pane_t7

0x8bb0,	// (0x0002e60b) bg_button_pane_cp018_ParamLimits

0x8bbe,	// (0x0002e619) bg_button_pane_cp021_ParamLimits

0x8bca,	// (0x0002e625) bg_button_pane_cp022_ParamLimits

0x8bca,	// (0x0002e625) bg_vkb2_func_pane_cp08_ParamLimits

0x8bb0,	// (0x0002e60b) bg_vkb2_func_pane_cp06_ParamLimits

0x8bbe,	// (0x0002e619) bg_vkb2_func_pane_cp07_ParamLimits

0x8bdb,	// (0x0002e636) input_focus_pane_cp09_ParamLimits

0xd894,	// (0x000332ef) cam6_autofocus_pane_ParamLimits

0xd894,	// (0x000332ef) cam6_autofocus_pane

0x1e23,	// (0x0002787e) cam6_image_uncrop_pane_ParamLimits

0x1e23,	// (0x0002787e) cam6_image_uncrop_pane

0x1e32,	// (0x0002788d) cam6_indi_pane_ParamLimits

0x1e32,	// (0x0002788d) cam6_indi_pane

0x1e48,	// (0x000278a3) cam6_mode_pane_ParamLimits

0x1e48,	// (0x000278a3) cam6_mode_pane

0x1e5a,	// (0x000278b5) cam6_timer_pane_ParamLimits

0x1e5a,	// (0x000278b5) cam6_timer_pane

0x1e66,	// (0x000278c1) cam6_zoom_pane_ParamLimits

0x1e66,	// (0x000278c1) cam6_zoom_pane

0x90c7,	// (0x0002eb22) cam6_mode_pane_g1_ParamLimits

0x90c7,	// (0x0002eb22) cam6_mode_pane_g1

0x90d7,	// (0x0002eb32) cam6_mode_pane_g2_ParamLimits

0x90d7,	// (0x0002eb32) cam6_mode_pane_g2

0x90e7,	// (0x0002eb42) cam6_mode_pane_g3_ParamLimits

0x90e7,	// (0x0002eb42) cam6_mode_pane_g3

0x90f7,	// (0x0002eb52) cam6_mode_pane_g4_ParamLimits

0x90f7,	// (0x0002eb52) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x000355da) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x000355da) cam6_mode_pane_g

0xd8a2,	// (0x000332fd) bg_tb_trans_pane_cp08_ParamLimits

0xd8a2,	// (0x000332fd) bg_tb_trans_pane_cp08

0xd8b0,	// (0x0003330b) cam6_battery_pane_ParamLimits

0xd8b0,	// (0x0003330b) cam6_battery_pane

0xd8c6,	// (0x00033321) cam6_indi_pane_g1_ParamLimits

0xd8c6,	// (0x00033321) cam6_indi_pane_g1

0xd8d8,	// (0x00033333) cam6_indi_pane_g2_ParamLimits

0xd8d8,	// (0x00033333) cam6_indi_pane_g2

0xd8ea,	// (0x00033345) cam6_indi_pane_g3_ParamLimits

0xd8ea,	// (0x00033345) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x000355e3) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x000355e3) cam6_indi_pane_g

0xd8fc,	// (0x00033357) cam6_indi_pane_t1_ParamLimits

0xd8fc,	// (0x00033357) cam6_indi_pane_t1

0x80d8,	// (0x0002db33) cam6_autofocus_pane_g1

0x80d0,	// (0x0002db2b) cam6_autofocus_pane_g2

0x80e8,	// (0x0002db43) cam6_autofocus_pane_g3

0x80e0,	// (0x0002db3b) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x000355ea) cam6_autofocus_pane_g

0xd922,	// (0x0003337d) cam6_timer_pane_g1

0xd92a,	// (0x00033385) cam6_timer_pane_t1

0xd938,	// (0x00033393) cam6_zoom_cont_pane

0xd940,	// (0x0003339b) cam6_zoom_pane_g1

0xd948,	// (0x000333a3) cam6_zoom_pane_g2

0x9107,	// (0x0002eb62) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x000355f3) cam6_zoom_pane_g

0xc25c,	// (0x00031cb7) cam6_battery_pane_g1

0xc25c,	// (0x00031cb7) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0003516a) cam6_battery_pane_g

0xd950,	// (0x000333ab) cam6_zoom_cont_pane_g1

0xd959,	// (0x000333b4) cam6_zoom_cont_pane_g2

0xd962,	// (0x000333bd) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x000355fa) cam6_zoom_cont_pane_g

0x9124,	// (0x0002eb7f) cam6_mode_pane_cp_ParamLimits

0x9124,	// (0x0002eb7f) cam6_mode_pane_cp

0x9136,	// (0x0002eb91) cam6_zoom_pane_cp_ParamLimits

0x9136,	// (0x0002eb91) cam6_zoom_pane_cp

0x9144,	// (0x0002eb9f) vid6_image_uncrop_cif_pane_ParamLimits

0x9144,	// (0x0002eb9f) vid6_image_uncrop_cif_pane

0x9154,	// (0x0002ebaf) vid6_image_uncrop_nhd_pane_ParamLimits

0x9154,	// (0x0002ebaf) vid6_image_uncrop_nhd_pane

0x9163,	// (0x0002ebbe) vid6_image_uncrop_vga_pane_ParamLimits

0x9163,	// (0x0002ebbe) vid6_image_uncrop_vga_pane

0x9172,	// (0x0002ebcd) vid6_image_uncrop_wvga_pane_ParamLimits

0x9172,	// (0x0002ebcd) vid6_image_uncrop_wvga_pane

0x9181,	// (0x0002ebdc) vid6_indi_pane_ParamLimits

0x9181,	// (0x0002ebdc) vid6_indi_pane

0xd8a2,	// (0x000332fd) bg_tb_trans_pane_cp09_ParamLimits

0xd8a2,	// (0x000332fd) bg_tb_trans_pane_cp09

0xd97a,	// (0x000333d5) cam6_battery_pane_cp_ParamLimits

0xd97a,	// (0x000333d5) cam6_battery_pane_cp

0xd986,	// (0x000333e1) vid6_indi_pane_g1_ParamLimits

0xd986,	// (0x000333e1) vid6_indi_pane_g1

0xd998,	// (0x000333f3) vid6_indi_pane_g2_ParamLimits

0xd998,	// (0x000333f3) vid6_indi_pane_g2

0xd9aa,	// (0x00033405) vid6_indi_pane_g3_ParamLimits

0xd9aa,	// (0x00033405) vid6_indi_pane_g3

0xd9c1,	// (0x0003341c) vid6_indi_pane_g4_ParamLimits

0xd9c1,	// (0x0003341c) vid6_indi_pane_g4

0xd9d8,	// (0x00033433) vid6_indi_pane_g5_ParamLimits

0xd9d8,	// (0x00033433) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00035601) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00035601) vid6_indi_pane_g

0xd9f2,	// (0x0003344d) vid6_indi_pane_t1_ParamLimits

0xd9f2,	// (0x0003344d) vid6_indi_pane_t1

0xda08,	// (0x00033463) vid6_indi_pane_t2_ParamLimits

0xda08,	// (0x00033463) vid6_indi_pane_t2

0xda30,	// (0x0003348b) vid6_indi_pane_t3_ParamLimits

0xda30,	// (0x0003348b) vid6_indi_pane_t3

0xda58,	// (0x000334b3) vid6_indi_pane_t4_ParamLimits

0xda58,	// (0x000334b3) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0003560c) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0003560c) vid6_indi_pane_t

0xda7c,	// (0x000334d7) wait_bar_pane_cp08

0x9199,	// (0x0002ebf4) main_cset_text2_pane_t1_ParamLimits

0x9199,	// (0x0002ebf4) main_cset_text2_pane_t1

0x910f,	// (0x0002eb6a) listscroll_gen_pane_cp06_t1_ParamLimits

0x910f,	// (0x0002eb6a) listscroll_gen_pane_cp06_t1

0x1e8c,	// (0x000278e7) main_cam6_set_pane

0xcf10,	// (0x0003296b) bg_tb_trans_pane_cp06_ParamLimits

0xcf26,	// (0x00032981) cam4_indicators_pane_g1_ParamLimits

0xcf33,	// (0x0003298e) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00035380) cam4_indicators_pane_g_ParamLimits

0xcf53,	// (0x000329ae) cam4_indicators_pane_t1_ParamLimits

0xcf77,	// (0x000329d2) bg_tb_trans_pane_cp07_ParamLimits

0x1935,	// (0x00027390) vid4_indicators_pane_g1_ParamLimits

0x1942,	// (0x0002739d) vid4_indicators_pane_g2_ParamLimits

0x194f,	// (0x000273aa) vid4_indicators_pane_g3_ParamLimits

0x195c,	// (0x000273b7) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00035392) vid4_indicators_pane_g_ParamLimits

0x1974,	// (0x000273cf) vid4_indicators_pane_t1_ParamLimits

0xd614,	// (0x0003306f) vid4_progress_pane_g1_ParamLimits

0xd620,	// (0x0003307b) vid4_progress_pane_g2_ParamLimits

0xd62c,	// (0x00033087) vid4_progress_pane_g3_ParamLimits

0xd63b,	// (0x00033096) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0003553d) vid4_progress_pane_g_ParamLimits

0xd659,	// (0x000330b4) vid4_progress_pane_t1_ParamLimits

0xd66f,	// (0x000330ca) vid4_progress_pane_t2_ParamLimits

0xd685,	// (0x000330e0) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00035548) vid4_progress_pane_t_ParamLimits

0xd69a,	// (0x000330f5) wait_bar_pane_cp07_ParamLimits

0x91ba,	// (0x0002ec15) main_cam6_set_pane_g2_ParamLimits

0x91ba,	// (0x0002ec15) main_cam6_set_pane_g2

0x91e0,	// (0x0002ec3b) main_cset6_listscroll_pane_ParamLimits

0x91e0,	// (0x0002ec3b) main_cset6_listscroll_pane

0x91fe,	// (0x0002ec59) main_cset6_slider_pane_ParamLimits

0x91fe,	// (0x0002ec59) main_cset6_slider_pane

0x9214,	// (0x0002ec6f) main_cset6_text2_pane_ParamLimits

0x9214,	// (0x0002ec6f) main_cset6_text2_pane

0xda8b,	// (0x000334e6) main_cset6_text_pane

0xda93,	// (0x000334ee) main_cset_list_pane_copy1_ParamLimits

0xda93,	// (0x000334ee) main_cset_list_pane_copy1

0xdaa3,	// (0x000334fe) scroll_pane_cp028_copy1

0x9222,	// (0x0002ec7d) cset_list_set_pane_copy1

0x9236,	// (0x0002ec91) aid_position_infowindow_above_copy1

0x923e,	// (0x0002ec99) aid_position_infowindow_below_copy1

0x9246,	// (0x0002eca1) cset_list_set_pane_g1_copy1

0xdaac,	// (0x00033507) cset_list_set_pane_g3_copy1_ParamLimits

0xdaac,	// (0x00033507) cset_list_set_pane_g3_copy1

0xdabb,	// (0x00033516) cset_list_set_pane_t1_copy1_ParamLimits

0xdabb,	// (0x00033516) cset_list_set_pane_t1_copy1

0x210c,	// (0x00027b67) list_highlight_pane_cp021_copy1_ParamLimits

0x210c,	// (0x00027b67) list_highlight_pane_cp021_copy1

0xdad0,	// (0x0003352b) cset6_slider_pane_ParamLimits

0xdad0,	// (0x0003352b) cset6_slider_pane

0xdafc,	// (0x00033557) main_cset6_slider_pane_g1_ParamLimits

0xdafc,	// (0x00033557) main_cset6_slider_pane_g1

0x924e,	// (0x0002eca9) main_cset6_slider_pane_g2_ParamLimits

0x924e,	// (0x0002eca9) main_cset6_slider_pane_g2

0xdb24,	// (0x0003357f) main_cset6_slider_pane_g3_ParamLimits

0xdb24,	// (0x0003357f) main_cset6_slider_pane_g3

0x9276,	// (0x0002ecd1) main_cset6_slider_pane_g4_ParamLimits

0x9276,	// (0x0002ecd1) main_cset6_slider_pane_g4

0x9282,	// (0x0002ecdd) main_cset6_slider_pane_g5_ParamLimits

0x9282,	// (0x0002ecdd) main_cset6_slider_pane_g5

0xd13e,	// (0x00032b99) main_cset6_slider_pane_g7_ParamLimits

0xd13e,	// (0x00032b99) main_cset6_slider_pane_g7

0xd14a,	// (0x00032ba5) main_cset6_slider_pane_g8_ParamLimits

0xd14a,	// (0x00032ba5) main_cset6_slider_pane_g8

0x84d3,	// (0x0002df2e) main_cset6_slider_pane_g9_ParamLimits

0x84d3,	// (0x0002df2e) main_cset6_slider_pane_g9

0x84df,	// (0x0002df3a) main_cset6_slider_pane_g10_ParamLimits

0x84df,	// (0x0002df3a) main_cset6_slider_pane_g10

0x84eb,	// (0x0002df46) main_cset6_slider_pane_g11_ParamLimits

0x84eb,	// (0x0002df46) main_cset6_slider_pane_g11

0x84f7,	// (0x0002df52) main_cset6_slider_pane_g12_ParamLimits

0x84f7,	// (0x0002df52) main_cset6_slider_pane_g12

0x8503,	// (0x0002df5e) main_cset6_slider_pane_g13_ParamLimits

0x8503,	// (0x0002df5e) main_cset6_slider_pane_g13

0x850f,	// (0x0002df6a) main_cset6_slider_pane_g14_ParamLimits

0x850f,	// (0x0002df6a) main_cset6_slider_pane_g14

0x9290,	// (0x0002eceb) main_cset6_slider_pane_g15_ParamLimits

0x9290,	// (0x0002eceb) main_cset6_slider_pane_g15

0x8533,	// (0x0002df8e) main_cset6_slider_pane_g16_ParamLimits

0x8533,	// (0x0002df8e) main_cset6_slider_pane_g16

0x8541,	// (0x0002df9c) main_cset6_slider_pane_g17_ParamLimits

0x8541,	// (0x0002df9c) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00035615) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00035615) main_cset6_slider_pane_g

0xdb30,	// (0x0003358b) main_cset6_slider_pane_t1_ParamLimits

0xdb30,	// (0x0003358b) main_cset6_slider_pane_t1

0x92c0,	// (0x0002ed1b) main_cset6_slider_pane_t2_ParamLimits

0x92c0,	// (0x0002ed1b) main_cset6_slider_pane_t2

0x92eb,	// (0x0002ed46) main_cset6_slider_pane_t3_ParamLimits

0x92eb,	// (0x0002ed46) main_cset6_slider_pane_t3

0x9316,	// (0x0002ed71) main_cset6_slider_pane_t4_ParamLimits

0x9316,	// (0x0002ed71) main_cset6_slider_pane_t4

0x9343,	// (0x0002ed9e) main_cset6_slider_pane_t5_ParamLimits

0x9343,	// (0x0002ed9e) main_cset6_slider_pane_t5

0xdb71,	// (0x000335cc) main_cset6_slider_pane_t7_ParamLimits

0xdb71,	// (0x000335cc) main_cset6_slider_pane_t7

0x9370,	// (0x0002edcb) main_cset6_slider_pane_t8_ParamLimits

0x9370,	// (0x0002edcb) main_cset6_slider_pane_t8

0x9394,	// (0x0002edef) main_cset6_slider_pane_t9_ParamLimits

0x9394,	// (0x0002edef) main_cset6_slider_pane_t9

0x93b8,	// (0x0002ee13) main_cset6_slider_pane_t10_ParamLimits

0x93b8,	// (0x0002ee13) main_cset6_slider_pane_t10

0x93dc,	// (0x0002ee37) main_cset6_slider_pane_t11_ParamLimits

0x93dc,	// (0x0002ee37) main_cset6_slider_pane_t11

0xdba7,	// (0x00033602) main_cset6_slider_pane_t14_ParamLimits

0xdba7,	// (0x00033602) main_cset6_slider_pane_t14

0xdbe0,	// (0x0003363b) main_cset6_slider_pane_t15_ParamLimits

0xdbe0,	// (0x0003363b) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0003563a) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0003563a) main_cset6_slider_pane_t

0xdc19,	// (0x00033674) cset_slider_pane_g1_copy1

0xdc22,	// (0x0003367d) cset_slider_pane_g2_copy1

0xdc2b,	// (0x00033686) cset_slider_pane_g3_copy1

0x1e8c,	// (0x000278e7) bg_popup_sub_pane_cp011_copy1

0xd327,	// (0x00032d82) main_cset_text_pane_g1_copy1

0xd32f,	// (0x00032d8a) main_cset_text_pane_t1_copy1

0xd33d,	// (0x00032d98) main_cset_text_pane_t2_copy1

0xd34b,	// (0x00032da6) main_cset_text_pane_t3_copy1

0xd359,	// (0x00032db4) main_cset_text_pane_t4_copy1

0xd367,	// (0x00032dc2) main_cset_text_pane_t5_copy1

0xd375,	// (0x00032dd0) main_cset_text_pane_t6_copy1

0xd383,	// (0x00032dde) main_cset_text_pane_t7_copy1

0x9199,	// (0x0002ebf4) main_cset_text2_pane_t1_copy1

0x1e8c,	// (0x000278e7) main_ncimui_pane

0x68b1,	// (0x0002c30c) popup_query_ncimui_window_ParamLimits

0x68b1,	// (0x0002c30c) popup_query_ncimui_window

0xc52d,	// (0x00031f88) field_cale_ev2_pane_g4_ParamLimits

0xc52d,	// (0x00031f88) field_cale_ev2_pane_g4

0x7ea9,	// (0x0002d904) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ea9,	// (0x0002d904) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0003531e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0003531e) cell_video_dialer_keypad_pane_g

0x7ec1,	// (0x0002d91c) cell_video_dialer_keypad_pane_t1

0x1e8c,	// (0x000278e7) bg_popup_window_pane_cp012

0x4a41,	// (0x0002a49c) heading_pane_cp06

0xdd23,	// (0x0003377e) ncim_query_content_pane

0x1e8c,	// (0x000278e7) bg_popup_heading_pane_cp01

0xdd2b,	// (0x00033786) ncim_heading_pane_t1

0xdd39,	// (0x00033794) ncim_indicator_popup_pane

0xdd4b,	// (0x000337a6) ncim_query_button_pane

0xdd61,	// (0x000337bc) ncim_query_content_pane_t1

0xdd73,	// (0x000337ce) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00035679) ncim_query_content_pane_t

0xddad,	// (0x00033808) ncim_query_list_pane

0xddbf,	// (0x0003381a) ncim_query_popup_pane

0xdd39,	// (0x00033794) ncim_indicator_popup_pane_ParamLimits

0x94c8,	// (0x0002ef23) ncim_query_content_pane_g1_ParamLimits

0x94c8,	// (0x0002ef23) ncim_query_content_pane_g1

0xdd61,	// (0x000337bc) ncim_query_content_pane_t1_ParamLimits

0xdd73,	// (0x000337ce) ncim_query_content_pane_t2_ParamLimits

0x94d4,	// (0x0002ef2f) ncim_query_content_pane_t3_ParamLimits

0x94d4,	// (0x0002ef2f) ncim_query_content_pane_t3

0x94fc,	// (0x0002ef57) ncim_query_content_pane_t4_ParamLimits

0x94fc,	// (0x0002ef57) ncim_query_content_pane_t4

0x9524,	// (0x0002ef7f) ncim_query_content_pane_t5_ParamLimits

0x9524,	// (0x0002ef7f) ncim_query_content_pane_t5

0xdd85,	// (0x000337e0) ncim_query_content_pane_t6_ParamLimits

0xdd85,	// (0x000337e0) ncim_query_content_pane_t6

0xfc1e,	// (0x00035679) ncim_query_content_pane_t_ParamLimits

0xddad,	// (0x00033808) ncim_query_list_pane_ParamLimits

0xddbf,	// (0x0003381a) ncim_query_popup_pane_ParamLimits

0xddd3,	// (0x0003382e) wait_bar_pane_cp04

0x1e8c,	// (0x000278e7) input_focus_pane_cp011

0xdddb,	// (0x00033836) ncim_query_popup_pane_t1

0xdde9,	// (0x00033844) ncim_list_query_list_pane_ParamLimits

0xdde9,	// (0x00033844) ncim_list_query_list_pane

0x1e8c,	// (0x000278e7) bg_button_pane_cp027

0xddfc,	// (0x00033857) ncim_query_button_pane_g1

0x1e8c,	// (0x000278e7) list_highlight_pane_cp012

0xde06,	// (0x00033861) ncim_list_query_list_pane_g1

0xde0e,	// (0x00033869) ncim_list_query_list_pane_t1

0xcf43,	// (0x0003299e) cam4_indicators_pane_g3_ParamLimits

0xcf43,	// (0x0003299e) cam4_indicators_pane_g3

0x1968,	// (0x000273c3) vid4_indicators_pane_g5_ParamLimits

0x1968,	// (0x000273c3) vid4_indicators_pane_g5

0xd64a,	// (0x000330a5) vid4_progress_pane_g5_ParamLimits

0xd64a,	// (0x000330a5) vid4_progress_pane_g5

0x9410,	// (0x0002ee6b) main_ncimui_pane_g1

0x9456,	// (0x0002eeb1) ncimui_group_query_pane_ParamLimits

0x9456,	// (0x0002eeb1) ncimui_group_query_pane

0x948a,	// (0x0002eee5) ncimui_list_pane_ParamLimits

0x948a,	// (0x0002eee5) ncimui_list_pane

0x94a4,	// (0x0002eeff) ncimui_text_pane_ParamLimits

0x94a4,	// (0x0002eeff) ncimui_text_pane

0x954c,	// (0x0002efa7) ncimui_text_pane_t1_ParamLimits

0x954c,	// (0x0002efa7) ncimui_text_pane_t1

0xde1c,	// (0x00033877) ncimui_list_single_graphic_pane_ParamLimits

0xde1c,	// (0x00033877) ncimui_list_single_graphic_pane

0x9572,	// (0x0002efcd) ncimui_query_pane_ParamLimits

0x9572,	// (0x0002efcd) ncimui_query_pane

0x1e8c,	// (0x000278e7) list_highlight_pane_cp013

0xde2c,	// (0x00033887) ncim_list_query_list_pane_t1_copy1

0xde06,	// (0x00033861) ncim_list_single_graphic_pane_g1

0xde3a,	// (0x00033895) ncim_query_button_pane_cp01

0xde42,	// (0x0003389d) ncim_query_entry_pane_ParamLimits

0xde42,	// (0x0003389d) ncim_query_entry_pane

0xde52,	// (0x000338ad) ncimui_query_pane_g1

0xde5a,	// (0x000338b5) ncimui_query_pane_t1_ParamLimits

0xde5a,	// (0x000338b5) ncimui_query_pane_t1

0x1e8c,	// (0x000278e7) input_focus_pane_cp012

0xdddb,	// (0x00033836) ncim_query_entry_pane_t1

0x2b15,	// (0x00028570) main_im_pane_ParamLimits

0x210c,	// (0x00027b67) main_mobtv_pane_ParamLimits

0x210c,	// (0x00027b67) main_mobtv_pane

0x92a8,	// (0x0002ed03) main_cset6_slider_pane_g18_ParamLimits

0x92a8,	// (0x0002ed03) main_cset6_slider_pane_g18

0x92b4,	// (0x0002ed0f) main_cset6_slider_pane_g19_ParamLimits

0x92b4,	// (0x0002ed0f) main_cset6_slider_pane_g19

0xde70,	// (0x000338cb) bg_main_mobtv_pane_ParamLimits

0xde70,	// (0x000338cb) bg_main_mobtv_pane

0x9582,	// (0x0002efdd) main_mobtv_info_pane

0x958d,	// (0x0002efe8) main_mobtv_loading_pane_ParamLimits

0x958d,	// (0x0002efe8) main_mobtv_loading_pane

0xde7e,	// (0x000338d9) main_mobtv_pg_channel_list_pane

0xde88,	// (0x000338e3) main_mobtv_pg_hdr_pane

0x959a,	// (0x0002eff5) main_mobtv_programe_curr_pane_ParamLimits

0x959a,	// (0x0002eff5) main_mobtv_programe_curr_pane

0x95a7,	// (0x0002f002) main_mobtv_programe_next_pane_ParamLimits

0x95a7,	// (0x0002f002) main_mobtv_programe_next_pane

0xde91,	// (0x000338ec) popup_mobtv_noti_window

0xc25c,	// (0x00031cb7) main_tv_pg_hdr_pane_g1

0xde9b,	// (0x000338f6) main_tv_pg_hdr_pane_g2

0xdea3,	// (0x000338fe) main_tv_pg_hdr_pane_g3

0xdeab,	// (0x00033906) main_tv_pg_hdr_pane_g4

0xdeb3,	// (0x0003390e) main_tv_pg_hdr_pane_g5

0xdebd,	// (0x00033918) main_tv_pg_hdr_pane_g6

0xdec7,	// (0x00033922) main_tv_pg_hdr_pane_g7

0xded1,	// (0x0003392c) main_tv_pg_hdr_pane_g8

0xdedb,	// (0x00033936) main_tv_pg_hdr_pane_g9

0xdee5,	// (0x00033940) main_tv_pg_hdr_pane_g10

0xdeef,	// (0x0003394a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00035686) main_tv_pg_hdr_pane_g

0xdef9,	// (0x00033954) main_tv_pg_hdr_pane_t1

0xdf07,	// (0x00033962) main_tv_pg_hdr_pane_t2

0xdf15,	// (0x00033970) main_tv_pg_hdr_pane_t3

0xdf25,	// (0x00033980) main_tv_pg_hdr_pane_t4

0xdf35,	// (0x00033990) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0003569d) main_tv_pg_hdr_pane_t

0xdf45,	// (0x000339a0) single_mobtv_pg_channel_pane_ParamLimits

0xdf45,	// (0x000339a0) single_mobtv_pg_channel_pane

0xdf57,	// (0x000339b2) single_mobtv_pg_channel_table_pane

0xdf60,	// (0x000339bb) single_mobtv_pg_channel_thumb_pane

0xdf69,	// (0x000339c4) single_tv_pg_channel_pane_g1

0xdf72,	// (0x000339cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x000356a8) single_tv_pg_channel_pane_g

0xc48c,	// (0x00031ee7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc48c,	// (0x00031ee7) bg_single_mobtv_pg_channel_thumb_pane

0xdf7b,	// (0x000339d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf7b,	// (0x000339d6) single_mobtv_pg_channel_thumb_pane_g1

0xdf89,	// (0x000339e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf89,	// (0x000339e4) single_mobtv_pg_channel_thumb_pane_g2

0xdf95,	// (0x000339f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf95,	// (0x000339f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x000356ad) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x000356ad) single_mobtv_pg_channel_thumb_pane_g

0xdfa1,	// (0x000339fc) single_mobtv_pg_channel_thumb_pane_t1

0xdfaf,	// (0x00033a0a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x000356b4) single_mobtv_pg_channel_thumb_pane_t

0xc25c,	// (0x00031cb7) bg_single_mobtv_pg_channel_table_pane_g1

0xc25c,	// (0x00031cb7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0003516a) bg_single_mobtv_pg_channel_table_pane_g

0xdfbd,	// (0x00033a18) single_mobtv_pg_channel_table_pane_t1

0xdfcb,	// (0x00033a26) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x000356b9) single_mobtv_pg_channel_table_pane_t

0x95bc,	// (0x0002f017) main_mobtv_info_pane_g1_ParamLimits

0x95bc,	// (0x0002f017) main_mobtv_info_pane_g1

0x95da,	// (0x0002f035) main_mobtv_info_pane_t1_ParamLimits

0x95da,	// (0x0002f035) main_mobtv_info_pane_t1

0x9652,	// (0x0002f0ad) main_mobtv_info_pane_t2_ParamLimits

0x9652,	// (0x0002f0ad) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x000356c3) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x000356c3) main_mobtv_info_pane_t

0x96e3,	// (0x0002f13e) wait_bar_pane_cp05

0x96f5,	// (0x0002f150) main_mobtv_loading_pane_g1_ParamLimits

0x96f5,	// (0x0002f150) main_mobtv_loading_pane_g1

0x9706,	// (0x0002f161) main_mobtv_loading_pane_g2_ParamLimits

0x9706,	// (0x0002f161) main_mobtv_loading_pane_g2

0x9712,	// (0x0002f16d) main_mobtv_loading_pane_g3_ParamLimits

0x9712,	// (0x0002f16d) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x000356ca) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x000356ca) main_mobtv_loading_pane_g

0xdfd9,	// (0x00033a34) main_mobtv_loading_pane_t1_ParamLimits

0xdfd9,	// (0x00033a34) main_mobtv_loading_pane_t1

0xdff1,	// (0x00033a4c) main_mobtv_loading_pane_t2_ParamLimits

0xdff1,	// (0x00033a4c) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x000356d1) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x000356d1) main_mobtv_loading_pane_t

0x9725,	// (0x0002f180) wait_bar_pane_cp06_ParamLimits

0x9725,	// (0x0002f180) wait_bar_pane_cp06

0xe015,	// (0x00033a70) main_mobtv_programe_curr_pane_t1

0xe023,	// (0x00033a7e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x000356d6) main_mobtv_programe_curr_pane_t

0xe031,	// (0x00033a8c) main_mobtv_programe_next_pane_t1

0xe03f,	// (0x00033a9a) main_mobtv_programe_next_pane_t2

0xe04d,	// (0x00033aa8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x000356db) main_mobtv_programe_next_pane_t

0x1e8c,	// (0x000278e7) bg_popup_mobtv_noti_window_pane

0xe05b,	// (0x00033ab6) popup_mobtv_noti_window_g1

0xe063,	// (0x00033abe) popup_mobtv_noti_window_t1

0xe071,	// (0x00033acc) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x000356e2) popup_mobtv_noti_window_t

0xc25c,	// (0x00031cb7) bg_popup_mobtv_noti_window_pane_g1

0x1e8c,	// (0x000278e7) sc_clock_pane

0x1e8c,	// (0x000278e7) main_fs_bigclock_pane

0x8f3e,	// (0x0002e999) blid2_tripm_pane_t4_ParamLimits

0x8f3e,	// (0x0002e999) blid2_tripm_pane_t4

0x9734,	// (0x0002f18f) sc_clock_pane_g1_ParamLimits

0x9734,	// (0x0002f18f) sc_clock_pane_g1

0x9746,	// (0x0002f1a1) sc_clock_pane_t1_ParamLimits

0x9746,	// (0x0002f1a1) sc_clock_pane_t1

0x976a,	// (0x0002f1c5) sc_clock_pane_t2_ParamLimits

0x976a,	// (0x0002f1c5) sc_clock_pane_t2

0x9782,	// (0x0002f1dd) sc_clock_pane_t3_ParamLimits

0x9782,	// (0x0002f1dd) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x000356e7) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x000356e7) sc_clock_pane_t

0xa53a,	// (0x0002ff95) main_fs_bigclock_indicator_pane_ParamLimits

0xa53a,	// (0x0002ff95) main_fs_bigclock_indicator_pane

0xc45c,	// (0x00031eb7) main_fs_bigclock_pane_g1_ParamLimits

0xc45c,	// (0x00031eb7) main_fs_bigclock_pane_g1

0xa546,	// (0x0002ffa1) main_fs_bigclock_pane_t1_ParamLimits

0xa546,	// (0x0002ffa1) main_fs_bigclock_pane_t1

0xa558,	// (0x0002ffb3) main_fs_bigclock_pane_t2_ParamLimits

0xa558,	// (0x0002ffb3) main_fs_bigclock_pane_t2

0xa56c,	// (0x0002ffc7) main_fs_bigclock_pane_t3_ParamLimits

0xa56c,	// (0x0002ffc7) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000358e1) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000358e1) main_fs_bigclock_pane_t

0xece9,	// (0x00034744) main_fs_bigclock_indicator_pane_g1

0xdd53,	// (0x000337ae) ncim_query_content_pane_g2_ParamLimits

0xdd53,	// (0x000337ae) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00035674) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00035674) ncim_query_content_pane_g

0x9797,	// (0x0002f1f2) sc_clock_pane_t4_ParamLimits

0x9797,	// (0x0002f1f2) sc_clock_pane_t4

0x210c,	// (0x00027b67) main_radioblah_pane

0xce82,	// (0x000328dd) cell_call4_button_pane_t1_copy1_ParamLimits

0xce82,	// (0x000328dd) cell_call4_button_pane_t1_copy1

0x9418,	// (0x0002ee73) main_ncimui_pane_t1_ParamLimits

0x9418,	// (0x0002ee73) main_ncimui_pane_t1

0x942a,	// (0x0002ee85) main_ncimui_pane_t2_ParamLimits

0x942a,	// (0x0002ee85) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0003566d) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0003566d) main_ncimui_pane_t

0xe1a9,	// (0x00033c04) main_radioblah_anim_pane_ParamLimits

0xe1a9,	// (0x00033c04) main_radioblah_anim_pane

0xe1ba,	// (0x00033c15) main_radioblah_info_pane_ParamLimits

0xe1ba,	// (0x00033c15) main_radioblah_info_pane

0xe1ce,	// (0x00033c29) main_radioblah_pane_t1_ParamLimits

0xe1ce,	// (0x00033c29) main_radioblah_pane_t1

0xe1ea,	// (0x00033c45) main_radioblah_pane_t2_ParamLimits

0xe1ea,	// (0x00033c45) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00035708) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00035708) main_radioblah_pane_t

0x9845,	// (0x0002f2a0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9845,	// (0x0002f2a0) main_radioblah_rocker_ctrl_pane

0xe232,	// (0x00033c8d) main_radioblah_info_pane_t1_ParamLimits

0xe232,	// (0x00033c8d) main_radioblah_info_pane_t1

0x989d,	// (0x0002f2f8) main_radioblah_info_pane_t2_ParamLimits

0x989d,	// (0x0002f2f8) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00035711) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00035711) main_radioblah_info_pane_t

0xc25c,	// (0x00031cb7) main_radioblah_rocker_ctrl_pane_g1

0x994d,	// (0x0002f3a8) main_radioblah_rocker_ctrl_pane_g2

0x9955,	// (0x0002f3b0) main_radioblah_rocker_ctrl_pane_g3

0x995d,	// (0x0002f3b8) main_radioblah_rocker_ctrl_pane_g4

0x9965,	// (0x0002f3c0) main_radioblah_rocker_ctrl_pane_g5

0x996d,	// (0x0002f3c8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0003571a) main_radioblah_rocker_ctrl_pane_g

0x9199,	// (0x0002ebf4) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf06,	// (0x00032961) cam4_image_uncrop_qvga_pane

0xcf6d,	// (0x000329c8) vid4_image_uncrop_qcif_pane

0xd894,	// (0x000332ef) cam6_image_uncrop_qvga_pane_ParamLimits

0xd894,	// (0x000332ef) cam6_image_uncrop_qvga_pane

0xd96a,	// (0x000333c5) vid6_image_uncrop_qcif_pane_ParamLimits

0xd96a,	// (0x000333c5) vid6_image_uncrop_qcif_pane

0x1e8c,	// (0x000278e7) bg_popup_preview_window_pane_cp03

0xdd05,	// (0x00033760) list_cset_text2_pane

0xdd0d,	// (0x00033768) main_cset6_text2_pane_g1

0xdd15,	// (0x00033770) main_cset6_text2_pane_t1

0xe26c,	// (0x00033cc7) list_cset_text2_pane_t1_ParamLimits

0xe26c,	// (0x00033cc7) list_cset_text2_pane_t1

0x210c,	// (0x00027b67) main_radioblah_pane_ParamLimits

0x96cf,	// (0x0002f12a) main_mobtv_info_pane_t3_ParamLimits

0x96cf,	// (0x0002f12a) main_mobtv_info_pane_t3

0x9833,	// (0x0002f28e) main_radioblah_pane_g1

0x986d,	// (0x0002f2c8) main_radioblah_info_pane_g1

0x98f2,	// (0x0002f34d) main_radioblah_info_pane_t3_ParamLimits

0x98f2,	// (0x0002f34d) main_radioblah_info_pane_t3

0x4410,	// (0x00029e6b) highlight_cell_cale_month_pane_ParamLimits

0x4410,	// (0x00029e6b) highlight_cell_cale_month_pane

0x1e8c,	// (0x000278e7) main_phob_fisheye_pane

0xc5e2,	// (0x0003203d) scroll_pane_cp0031_ParamLimits

0xc5e2,	// (0x0003203d) scroll_pane_cp0031

0xda7c,	// (0x000334d7) wait_bar_pane_cp08_ParamLimits

0x9222,	// (0x0002ec7d) cset_list_set_pane_copy1_ParamLimits

0xe286,	// (0x00033ce1) highlight_cell_cale_month_pane_g1

0x9975,	// (0x0002f3d0) highlight_cell_cale_month_pane_t1

0xd603,	// (0x0003305e) list_gen_pane_cp01

0xd129,	// (0x00032b84) scroll_pane_01

0x9983,	// (0x0002f3de) list_single_double_fisheye_pane

0xe28e,	// (0x00033ce9) list_double_fisheye_pane_g1_ParamLimits

0xe28e,	// (0x00033ce9) list_double_fisheye_pane_g1

0xe29a,	// (0x00033cf5) list_double_fisheye_pane_g2_ParamLimits

0xe29a,	// (0x00033cf5) list_double_fisheye_pane_g2

0x998c,	// (0x0002f3e7) list_double_fisheye_pane_g3_ParamLimits

0x998c,	// (0x0002f3e7) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00035727) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00035727) list_double_fisheye_pane_g

0x9998,	// (0x0002f3f3) list_double_fisheye_pane_t1_ParamLimits

0x9998,	// (0x0002f3f3) list_double_fisheye_pane_t1

0x99b3,	// (0x0002f40e) list_double_fisheye_pane_t2_ParamLimits

0x99b3,	// (0x0002f40e) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00035732) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00035732) list_double_fisheye_pane_t

0x1e8c,	// (0x000278e7) main_call5_pane

0x97c2,	// (0x0002f21d) sc_swipe_pane_ParamLimits

0x97c2,	// (0x0002f21d) sc_swipe_pane

0x99e8,	// (0x0002f443) call5_image_pane_ParamLimits

0x99e8,	// (0x0002f443) call5_image_pane

0x9a05,	// (0x0002f460) call5_swipe_1_pane_ParamLimits

0x9a05,	// (0x0002f460) call5_swipe_1_pane

0x9a18,	// (0x0002f473) call5_swipe_2_pane_ParamLimits

0x9a18,	// (0x0002f473) call5_swipe_2_pane

0x9a45,	// (0x0002f4a0) popup_call5_audio_first_window_ParamLimits

0x9a45,	// (0x0002f4a0) popup_call5_audio_first_window

0xc48c,	// (0x00031ee7) call5_swipe_1_pane_g1_ParamLimits

0xc48c,	// (0x00031ee7) call5_swipe_1_pane_g1

0xe2cb,	// (0x00033d26) call5_swipe_1_pane_g2_ParamLimits

0xe2cb,	// (0x00033d26) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00035737) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00035737) call5_swipe_1_pane_g

0xe2d7,	// (0x00033d32) call5_swipe_1_pane_t1_ParamLimits

0xe2d7,	// (0x00033d32) call5_swipe_1_pane_t1

0xc48c,	// (0x00031ee7) call5_swipe_2_pane_g1_ParamLimits

0xc48c,	// (0x00031ee7) call5_swipe_2_pane_g1

0xe2ec,	// (0x00033d47) call5_swipe_2_pane_g2_ParamLimits

0xe2ec,	// (0x00033d47) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0003573c) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0003573c) call5_swipe_2_pane_g

0xe2f8,	// (0x00033d53) call5_swipe_2_pane_t1_ParamLimits

0xe2f8,	// (0x00033d53) call5_swipe_2_pane_t1

0xe30d,	// (0x00033d68) sc_swipe_pane_g1_ParamLimits

0xe30d,	// (0x00033d68) sc_swipe_pane_g1

0xe31a,	// (0x00033d75) sc_swipe_pane_g2_ParamLimits

0xe31a,	// (0x00033d75) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00035741) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00035741) sc_swipe_pane_g

0xe326,	// (0x00033d81) sc_swipe_pane_t1_ParamLimits

0xe326,	// (0x00033d81) sc_swipe_pane_t1

0x1e8c,	// (0x000278e7) main_cmail_launcher_pane

0x9a5a,	// (0x0002f4b5) aid_size_cell_cmail_l_ParamLimits

0x9a5a,	// (0x0002f4b5) aid_size_cell_cmail_l

0x9a74,	// (0x0002f4cf) grid_cmail_l_pane_ParamLimits

0x9a74,	// (0x0002f4cf) grid_cmail_l_pane

0x9a90,	// (0x0002f4eb) cell_cmail_l_pane_ParamLimits

0x9a90,	// (0x0002f4eb) cell_cmail_l_pane

0x9ab8,	// (0x0002f513) cell_cmail_l_pane_g1_ParamLimits

0x9ab8,	// (0x0002f513) cell_cmail_l_pane_g1

0x9ac4,	// (0x0002f51f) cell_cmail_l_pane_t1_ParamLimits

0x9ac4,	// (0x0002f51f) cell_cmail_l_pane_t1

0xe33b,	// (0x00033d96) cell_cmail_l_pane_t2_ParamLimits

0xe33b,	// (0x00033d96) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00035746) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00035746) cell_cmail_l_pane_t

0x210c,	// (0x00027b67) grid_highlight_pane_cp018_ParamLimits

0x210c,	// (0x00027b67) grid_highlight_pane_cp018

0x1fb9,	// (0x00027a14) main2_pane_ParamLimits

0x1fb9,	// (0x00027a14) main2_pane

0x2c96,	// (0x000286f1) popup_sp_fs_action_menu_bg_pane_g1

0x2c9e,	// (0x000286f9) popup_sp_fs_action_menu_bg_pane_g2

0x2ca6,	// (0x00028701) popup_sp_fs_action_menu_bg_pane_g3

0x2cae,	// (0x00028709) popup_sp_fs_action_menu_bg_pane_g4

0x2cb6,	// (0x00028711) popup_sp_fs_action_menu_bg_pane_g5

0x2cbe,	// (0x00028719) popup_sp_fs_action_menu_bg_pane_g6

0x2cc6,	// (0x00028721) popup_sp_fs_action_menu_bg_pane_g7

0x2cce,	// (0x00028729) popup_sp_fs_action_menu_bg_pane_g8

0x2cd6,	// (0x00028731) popup_sp_fs_action_menu_bg_pane_g9

0x2cde,	// (0x00028739) popup_sp_fs_action_menu_bg_pane_g10

0x2cde,	// (0x00028739) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00034c16) popup_sp_fs_action_menu_bg_pane_g

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g3_g1

0x3470,	// (0x00028ecb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_t3_g3_g2

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00034cc6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00034cc6) list_medium_line_x2_t3_g3_g

0x3488,	// (0x00028ee3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3488,	// (0x00028ee3) list_medium_line_x2_t3_g3_t1

0x349d,	// (0x00028ef8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x349d,	// (0x00028ef8) list_medium_line_x2_t3_g3_t2

0x34b1,	// (0x00028f0c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00034ccd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00034ccd) list_medium_line_x2_t3_g3_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g2_g1

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00034cd4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00034cd4) list_medium_line_x2_t3_g2_g

0x34c6,	// (0x00028f21) list_medium_line_x2_t3_g2_t1_ParamLimits

0x34c6,	// (0x00028f21) list_medium_line_x2_t3_g2_t1

0x34dc,	// (0x00028f37) list_medium_line_x2_t3_g2_t2_ParamLimits

0x34dc,	// (0x00028f37) list_medium_line_x2_t3_g2_t2

0x34ee,	// (0x00028f49) list_medium_line_x2_t3_g2_t3_ParamLimits

0x34ee,	// (0x00028f49) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00034cd9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00034cd9) list_medium_line_x2_t3_g2_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t4_g4_g1

0x350c,	// (0x00028f67) list_medium_line_x2_t4_g4_g2_ParamLimits

0x350c,	// (0x00028f67) list_medium_line_x2_t4_g4_g2

0x3470,	// (0x00028ecb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_t4_g4_g3

0x3518,	// (0x00028f73) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3518,	// (0x00028f73) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00034ce0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00034ce0) list_medium_line_x2_t4_g4_g

0x3524,	// (0x00028f7f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3524,	// (0x00028f7f) list_medium_line_x2_t4_g4_t1

0x353b,	// (0x00028f96) list_medium_line_x2_t4_g4_t2_ParamLimits

0x353b,	// (0x00028f96) list_medium_line_x2_t4_g4_t2

0x3550,	// (0x00028fab) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3550,	// (0x00028fab) list_medium_line_x2_t4_g4_t3

0x3562,	// (0x00028fbd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3562,	// (0x00028fbd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00034ce9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00034ce9) list_medium_line_x2_t4_g4_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g4_g1

0x350c,	// (0x00028f67) list_medium_line_x2_t2_g4_g2_ParamLimits

0x350c,	// (0x00028f67) list_medium_line_x2_t2_g4_g2

0x3470,	// (0x00028ecb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_t2_g4_g3

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00034d50) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00034d50) list_medium_line_x2_t2_g4_g

0x442e,	// (0x00029e89) list_medium_line_x2_t2_g4_t1_ParamLimits

0x442e,	// (0x00029e89) list_medium_line_x2_t2_g4_t1

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00034d59) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00034d59) list_medium_line_x2_t2_g4_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g3_g1

0x3470,	// (0x00028ecb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_t2_g3_g2

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00034cc6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00034cc6) list_medium_line_x2_t2_g3_g

0x4443,	// (0x00029e9e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4443,	// (0x00029e9e) list_medium_line_x2_t2_g3_t1

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00034d5e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00034d5e) list_medium_line_x2_t2_g3_t

0x4799,	// (0x0002a1f4) main_sp_fs_list_pane_ParamLimits

0x4799,	// (0x0002a1f4) main_sp_fs_list_pane

0x47a5,	// (0x0002a200) sp_fs_scroll_pane_ParamLimits

0x47a5,	// (0x0002a200) sp_fs_scroll_pane

0x47b1,	// (0x0002a20c) list_medium_line_x2_t3_t1

0x47c1,	// (0x0002a21c) list_medium_line_x2_t3_t2

0x47cf,	// (0x0002a22a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00034da9) list_medium_line_x2_t3_t

0x47dd,	// (0x0002a238) list_medium_line_x3_t4_t1

0x47ed,	// (0x0002a248) list_medium_line_x3_t4_t2

0x47fb,	// (0x0002a256) list_medium_line_x3_t4_t3

0x47cf,	// (0x0002a22a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00034db0) list_medium_line_x3_t4_t

0x4809,	// (0x0002a264) list_medium_line_x4_t5_t1

0x4819,	// (0x0002a274) list_medium_line_x4_t5_t2

0x47fb,	// (0x0002a256) list_medium_line_x4_t5_t3

0x4827,	// (0x0002a282) list_medium_line_x4_t5_t4

0x47cf,	// (0x0002a22a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00034db9) list_medium_line_x4_t5_t

0x3464,	// (0x00028ebf) list_medium_line_t4_g4_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_t4_g4_g1

0x3518,	// (0x00028f73) list_medium_line_t4_g4_g2_ParamLimits

0x3518,	// (0x00028f73) list_medium_line_t4_g4_g2

0x4835,	// (0x0002a290) list_medium_line_t4_g4_g3_ParamLimits

0x4835,	// (0x0002a290) list_medium_line_t4_g4_g3

0x347c,	// (0x00028ed7) list_medium_line_t4_g4_g4_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00034dc4) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00034dc4) list_medium_line_t4_g4_g

0x4841,	// (0x0002a29c) list_medium_line_t4_g4_t1_ParamLimits

0x4841,	// (0x0002a29c) list_medium_line_t4_g4_t1

0x4856,	// (0x0002a2b1) list_medium_line_t4_g4_t2_ParamLimits

0x4856,	// (0x0002a2b1) list_medium_line_t4_g4_t2

0x486c,	// (0x0002a2c7) list_medium_line_t4_g4_t3_ParamLimits

0x486c,	// (0x0002a2c7) list_medium_line_t4_g4_t3

0x34b1,	// (0x00028f0c) list_medium_line_t4_g4_t4_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00034dcd) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00034dcd) list_medium_line_t4_g4_t

0x4bb9,	// (0x0002a614) chi_dic_find_pane_g1

0x6637,	// (0x0002c092) main_tport_pane

0xd274,	// (0x00032ccf) list_medium_line_plain_t1

0xd2c6,	// (0x00032d21) list_medium_line_t2_g2_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t2_g2_g1

0xd2d2,	// (0x00032d2d) list_medium_line_t2_g2_g2_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00035489) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00035489) list_medium_line_t2_g2_g

0x8821,	// (0x0002e27c) list_medium_line_t2_g2_t1_ParamLimits

0x8821,	// (0x0002e27c) list_medium_line_t2_g2_t1

0x8838,	// (0x0002e293) list_medium_line_t2_g2_t2_ParamLimits

0x8838,	// (0x0002e293) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0003548e) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0003548e) list_medium_line_t2_g2_t

0xd6ac,	// (0x00033107) aid_sp_fs_list_icon_a_sm

0xd6b4,	// (0x0003310f) aid_sp_fs_list_icon_d

0xd6bc,	// (0x00033117) aid_sp_fs_text_primary

0xd6c5,	// (0x00033120) aid_sp_fs_text_secondary

0xd6ce,	// (0x00033129) list_medium_line

0xd6ce,	// (0x00033129) list_medium_line_g2

0xd6ce,	// (0x00033129) list_medium_line_g3

0xd6ce,	// (0x00033129) list_medium_line_plain

0xd6ce,	// (0x00033129) list_medium_line_plain_t2

0xd6ce,	// (0x00033129) list_medium_line_plain_t3

0xd6ce,	// (0x00033129) list_medium_line_right_icon

0xd6ce,	// (0x00033129) list_medium_line_right_iconx2

0xd6ce,	// (0x00033129) list_medium_line_t2

0xd6ce,	// (0x00033129) list_medium_line_t2_g2

0xd6ce,	// (0x00033129) list_medium_line_t2_g3

0xd6ce,	// (0x00033129) list_medium_line_t2_right_icon

0xd6ce,	// (0x00033129) list_medium_line_t2_right_iconx2

0xd6ce,	// (0x00033129) list_medium_line_t3

0xd6ce,	// (0x00033129) list_medium_line_t3_g2

0xd6ce,	// (0x00033129) list_medium_line_t3_g3

0xd6ce,	// (0x00033129) list_medium_line_t3_right_iconx2

0xd6d7,	// (0x00033132) list_medium_line_t4_g4

0xd6e0,	// (0x0003313b) list_medium_line_x2

0xd6e0,	// (0x0003313b) list_medium_line_x2_t2_g2

0xd6e0,	// (0x0003313b) list_medium_line_x2_t2_g3

0xd6e0,	// (0x0003313b) list_medium_line_x2_t2_g4

0xd6e0,	// (0x0003313b) list_medium_line_x2_t3

0xd6e0,	// (0x0003313b) list_medium_line_x2_t3_g2

0xd6e0,	// (0x0003313b) list_medium_line_x2_t3_g3

0xd6e0,	// (0x0003313b) list_medium_line_x2_t3_g4

0xd6e0,	// (0x0003313b) list_medium_line_x2_t4_g2

0xd6e0,	// (0x0003313b) list_medium_line_x2_t4_g4

0xd6e9,	// (0x00033144) list_medium_line_x3

0xd6e9,	// (0x00033144) list_medium_line_x3_t4

0xd6e9,	// (0x00033144) list_medium_line_x3_t4_g4

0xd6d7,	// (0x00033132) list_medium_line_x4_t4

0xd6d7,	// (0x00033132) list_medium_line_x4_t4_g7

0xd6d7,	// (0x00033132) list_medium_line_x4_t5

0xd6f2,	// (0x0003314d) list_single_fs_dyc_pane_ParamLimits

0xd6f2,	// (0x0003314d) list_single_fs_dyc_pane

0x3464,	// (0x00028ebf) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x4_t4_g7_g1

0xdc34,	// (0x0003368f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc34,	// (0x0003368f) list_medium_line_x4_t4_g7_g2

0xdc40,	// (0x0003369b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc40,	// (0x0003369b) list_medium_line_x4_t4_g7_g3

0xdc4f,	// (0x000336aa) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc4f,	// (0x000336aa) list_medium_line_x4_t4_g7_g4

0xdc5b,	// (0x000336b6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc5b,	// (0x000336b6) list_medium_line_x4_t4_g7_g5

0xdc6a,	// (0x000336c5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc6a,	// (0x000336c5) list_medium_line_x4_t4_g7_g6

0xdc79,	// (0x000336d4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc79,	// (0x000336d4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00035653) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00035653) list_medium_line_x4_t4_g7_g

0xdc85,	// (0x000336e0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc85,	// (0x000336e0) list_medium_line_x4_t4_g7_t1

0xdc9a,	// (0x000336f5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc9a,	// (0x000336f5) list_medium_line_x4_t4_g7_t2

0xdcaf,	// (0x0003370a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdcaf,	// (0x0003370a) list_medium_line_x4_t4_g7_t3

0xdcc4,	// (0x0003371f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdcc4,	// (0x0003371f) list_medium_line_x4_t4_g7_t4

0xdcd6,	// (0x00033731) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdcd6,	// (0x00033731) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00035662) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00035662) list_medium_line_x4_t4_g7_t

0xdce8,	// (0x00033743) list_single_dyc_row_pane_ParamLimits

0xdce8,	// (0x00033743) list_single_dyc_row_pane

0x99d5,	// (0x0002f430) call5_gesture_pane_ParamLimits

0x99d5,	// (0x0002f430) call5_gesture_pane

0x9a2b,	// (0x0002f486) call5_windows_pane_ParamLimits

0x9a2b,	// (0x0002f486) call5_windows_pane

0x9ada,	// (0x0002f535) call5_swipe_1_pane_cp_ParamLimits

0x9ada,	// (0x0002f535) call5_swipe_1_pane_cp

0x9ae6,	// (0x0002f541) call5_swipe_2_pane_cp_ParamLimits

0x9ae6,	// (0x0002f541) call5_swipe_2_pane_cp

0x503d,	// (0x0002aa98) call5_image_pane_cp

0x9af2,	// (0x0002f54d) popup_call5_audio_first_window_cp_ParamLimits

0x9af2,	// (0x0002f54d) popup_call5_audio_first_window_cp

0xe30d,	// (0x00033d68) call5_swipe_1_pane_g1_cp_ParamLimits

0xe30d,	// (0x00033d68) call5_swipe_1_pane_g1_cp

0xe34d,	// (0x00033da8) call5_swipe_1_pane_g2_cp

0xe326,	// (0x00033d81) call5_swipe_1_pane_t1_cp_ParamLimits

0xe326,	// (0x00033d81) call5_swipe_1_pane_t1_cp

0xe30d,	// (0x00033d68) call5_swipe_2_pane_g1_cp_ParamLimits

0xe30d,	// (0x00033d68) call5_swipe_2_pane_g1_cp

0xe355,	// (0x00033db0) call5_swipe_2_pane_g2_cp

0xe35d,	// (0x00033db8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe35d,	// (0x00033db8) call5_swipe_2_pane_t1_cp

0x210c,	// (0x00027b67) main_sp_fs_email_pane

0xe372,	// (0x00033dcd) main_sp_fs_listscroll_pane_te

0xe37b,	// (0x00033dd6) popup_sp_fs_action_menu_pane_ParamLimits

0xe37b,	// (0x00033dd6) popup_sp_fs_action_menu_pane

0xc25c,	// (0x00031cb7) bg_sp_fs_ctrlbar_pane_g1

0xe3c1,	// (0x00033e1c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ca,	// (0x00033e25) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3d3,	// (0x00033e2e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc25c,	// (0x00031cb7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0003574b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc03b,	// (0x00031a96) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc03b,	// (0x00031a96) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3dc,	// (0x00033e37) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3dc,	// (0x00033e37) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3e8,	// (0x00033e43) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3e8,	// (0x00033e43) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00035754) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00035754) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3f4,	// (0x00033e4f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3f4,	// (0x00033e4f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe40e,	// (0x00033e69) list_medium_line_t2_right_icon_g1

0x9b00,	// (0x0002f55b) list_medium_line_t2_right_icon_t1

0x9b10,	// (0x0002f56b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00035759) list_medium_line_t2_right_icon_t

0xbd27,	// (0x00031782) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd27,	// (0x00031782) bg_sp_fs_ctrlbar_pane

0x9b66,	// (0x0002f5c1) main_sp_fs_ctrlbar_button_pane_cp01

0x9b6e,	// (0x0002f5c9) main_sp_fs_ctrlbar_ddmenu_pane

0xe450,	// (0x00033eab) main_sp_fs_ctrlbar_pane_g1

0xe45c,	// (0x00033eb7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0003575e) main_sp_fs_ctrlbar_pane_g

0xe468,	// (0x00033ec3) main_sp_fs_ctrlbar_pane_t1

0x9b78,	// (0x0002f5d3) main_sp_fs_ctrlbar_pane

0x9b9c,	// (0x0002f5f7) main_sp_fs_listscroll_pane_te_cp01

0x9bbc,	// (0x0002f617) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9bbc,	// (0x0002f617) popup_sp_fs_action_menu_pane_cp01

0x210c,	// (0x00027b67) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x210c,	// (0x00027b67) bg_sp_fs_highlight_list_pane_cp01

0xe47d,	// (0x00033ed8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe47d,	// (0x00033ed8) sp_fs_action_menu_list_gene_pane_g1

0xe48c,	// (0x00033ee7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe48c,	// (0x00033ee7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00035763) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00035763) sp_fs_action_menu_list_gene_pane_g

0xe499,	// (0x00033ef4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe499,	// (0x00033ef4) sp_fs_action_menu_list_gene_pane_t1

0xe4b1,	// (0x00033f0c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b1,	// (0x00033f0c) sp_fs_action_menu_list_gene_pane

0xe4d4,	// (0x00033f2f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d4,	// (0x00033f2f) popup_sp_fs_action_menu_bg_pane

0xe4e2,	// (0x00033f3d) sp_fs_action_menu_list_pane_ParamLimits

0xe4e2,	// (0x00033f3d) sp_fs_action_menu_list_pane

0xe506,	// (0x00033f61) sp_fs_scroll_pane_cp01_ParamLimits

0xe506,	// (0x00033f61) sp_fs_scroll_pane_cp01

0x9bd8,	// (0x0002f633) list_medium_line_plain_t2_t1

0x9be8,	// (0x0002f643) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00035768) list_medium_line_plain_t2_t

0x9bf6,	// (0x0002f651) list_medium_line_plain_t3_t1

0x9c06,	// (0x0002f661) list_medium_line_plain_t3_t2

0x9c14,	// (0x0002f66f) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0003576d) list_medium_line_plain_t3_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t2_g2_g1

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00034cd4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00034cd4) list_medium_line_x2_t2_g2_g

0x4841,	// (0x0002a29c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4841,	// (0x0002a29c) list_medium_line_x2_t2_g2_t1

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00035774) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00035774) list_medium_line_x2_t2_g2_t

0x3464,	// (0x00028ebf) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t4_g2_g1

0x347c,	// (0x00028ed7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x00034cd4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x00034cd4) list_medium_line_x2_t4_g2_g

0x9c22,	// (0x0002f67d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c22,	// (0x0002f67d) list_medium_line_x2_t4_g2_t1

0x9c3c,	// (0x0002f697) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9c3c,	// (0x0002f697) list_medium_line_x2_t4_g2_t2

0x9c52,	// (0x0002f6ad) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c52,	// (0x0002f6ad) list_medium_line_x2_t4_g2_t3

0x34b1,	// (0x00028f0c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x00035779) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x00035779) list_medium_line_x2_t4_g2_t

0xe52c,	// (0x00033f87) list_medium_line_t3_right_iconx2_g1

0xe40e,	// (0x00033e69) list_medium_line_t3_right_iconx2_g2

0x9c67,	// (0x0002f6c2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x00035782) list_medium_line_t3_right_iconx2_g

0x9c71,	// (0x0002f6cc) list_medium_line_t3_right_iconx2_t1

0x9c81,	// (0x0002f6dc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x00035789) list_medium_line_t3_right_iconx2_t

0x3464,	// (0x00028ebf) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x3_t4_g4_g1

0x3470,	// (0x00028ecb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x3_t4_g4_g2

0x3518,	// (0x00028f73) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3518,	// (0x00028f73) list_medium_line_x3_t4_g4_g3

0xe534,	// (0x00033f8f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe534,	// (0x00033f8f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x0003578e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x0003578e) list_medium_line_x3_t4_g4_g

0x9c8f,	// (0x0002f6ea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9c8f,	// (0x0002f6ea) list_medium_line_x3_t4_g4_t1

0x9ca6,	// (0x0002f701) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9ca6,	// (0x0002f701) list_medium_line_x3_t4_g4_t2

0xe540,	// (0x00033f9b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe540,	// (0x00033f9b) list_medium_line_x3_t4_g4_t3

0xe555,	// (0x00033fb0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe555,	// (0x00033fb0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x00035797) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x00035797) list_medium_line_x3_t4_g4_t

0x9cbb,	// (0x0002f716) list_single_dyc_row_text_pane_t1_ParamLimits

0x9cbb,	// (0x0002f716) list_single_dyc_row_text_pane_t1

0x9d00,	// (0x0002f75b) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d00,	// (0x0002f75b) list_single_dyc_row_text_pane_t2

0xe572,	// (0x00033fcd) list_single_dyc_row_text_pane_t3_ParamLimits

0xe572,	// (0x00033fcd) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x000357a0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x000357a0) list_single_dyc_row_text_pane_t

0xe584,	// (0x00033fdf) list_single_dyc_row_pane_g1_ParamLimits

0xe584,	// (0x00033fdf) list_single_dyc_row_pane_g1

0xe590,	// (0x00033feb) list_single_dyc_row_pane_g2_ParamLimits

0xe590,	// (0x00033feb) list_single_dyc_row_pane_g2

0xe59c,	// (0x00033ff7) list_single_dyc_row_pane_g3_ParamLimits

0xe59c,	// (0x00033ff7) list_single_dyc_row_pane_g3

0xe5a8,	// (0x00034003) list_single_dyc_row_pane_g4_ParamLimits

0xe5a8,	// (0x00034003) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000357a7) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000357a7) list_single_dyc_row_pane_g

0xe5b4,	// (0x0003400f) list_single_dyc_row_text_pane_ParamLimits

0xe5b4,	// (0x0003400f) list_single_dyc_row_text_pane

0x1e8c,	// (0x000278e7) bg_sp_fs_scroll_pane

0xe5d3,	// (0x0003402e) thumb_sp_fs_scroll_pane

0xd2c6,	// (0x00032d21) list_medium_line_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_g1

0xe5dc,	// (0x00034037) list_medium_line_t1_ParamLimits

0xe5dc,	// (0x00034037) list_medium_line_t1

0x3464,	// (0x00028ebf) list_medium_line_x2_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_g1

0x3470,	// (0x00028ecb) list_medium_line_x2_g2_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000357b0) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000357b0) list_medium_line_x2_g

0xe5f1,	// (0x0003404c) list_medium_line_x2_t1_ParamLimits

0xe5f1,	// (0x0003404c) list_medium_line_x2_t1

0x3464,	// (0x00028ebf) list_medium_line_x3_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x3_g1

0x3470,	// (0x00028ecb) list_medium_line_x3_g2_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000357b0) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000357b0) list_medium_line_x3_g

0xe5f1,	// (0x0003404c) list_medium_line_x3_t1_ParamLimits

0xe5f1,	// (0x0003404c) list_medium_line_x3_t1

0xe607,	// (0x00034062) thumb_sp_fs_scroll_pane_g1

0xe610,	// (0x0003406b) thumb_sp_fs_scroll_pane_g2

0xe619,	// (0x00034074) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000357b5) thumb_sp_fs_scroll_pane_g

0xe607,	// (0x00034062) bg_sp_fs_scroll_pane_g1

0xe610,	// (0x0003406b) bg_sp_fs_scroll_pane_g2

0xe619,	// (0x00034074) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000357b5) bg_sp_fs_scroll_pane_g

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3464,	// (0x00028ebf) list_medium_line_x2_t3_g4_g1

0x350c,	// (0x00028f67) list_medium_line_x2_t3_g4_g2_ParamLimits

0x350c,	// (0x00028f67) list_medium_line_x2_t3_g4_g2

0x3470,	// (0x00028ecb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3470,	// (0x00028ecb) list_medium_line_x2_t3_g4_g3

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x347c,	// (0x00028ed7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00034d50) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00034d50) list_medium_line_x2_t3_g4_g

0x9d5a,	// (0x0002f7b5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d5a,	// (0x0002f7b5) list_medium_line_x2_t3_g4_t1

0x9d70,	// (0x0002f7cb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d70,	// (0x0002f7cb) list_medium_line_x2_t3_g4_t2

0x34b1,	// (0x00028f0c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x34b1,	// (0x00028f0c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000357bc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000357bc) list_medium_line_x2_t3_g4_t

0xd2c6,	// (0x00032d21) list_medium_line_g2_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_g2_g1

0xd2d2,	// (0x00032d2d) list_medium_line_g2_g2_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00035489) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00035489) list_medium_line_g2_g

0xe622,	// (0x0003407d) list_medium_line_g2_t1_ParamLimits

0xe622,	// (0x0003407d) list_medium_line_g2_t1

0xd2c6,	// (0x00032d21) list_medium_line_t3_g2_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t3_g2_g1

0xd2d2,	// (0x00032d2d) list_medium_line_t3_g2_g2_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00035489) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00035489) list_medium_line_t3_g2_g

0x9d89,	// (0x0002f7e4) list_medium_line_t3_g2_t1_ParamLimits

0x9d89,	// (0x0002f7e4) list_medium_line_t3_g2_t1

0x9da3,	// (0x0002f7fe) list_medium_line_t3_g2_t2_ParamLimits

0x9da3,	// (0x0002f7fe) list_medium_line_t3_g2_t2

0x9db9,	// (0x0002f814) list_medium_line_t3_g2_t3_ParamLimits

0x9db9,	// (0x0002f814) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000357c3) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000357c3) list_medium_line_t3_g2_t

0xe40e,	// (0x00033e69) list_medium_line_right_icon_g1

0xe637,	// (0x00034092) list_medium_line_right_icon_t1

0xd2c6,	// (0x00032d21) list_medium_line_t2_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t2_g1

0x9dd0,	// (0x0002f82b) list_medium_line_t2_t1_ParamLimits

0x9dd0,	// (0x0002f82b) list_medium_line_t2_t1

0x9dea,	// (0x0002f845) list_medium_line_t2_t2_ParamLimits

0x9dea,	// (0x0002f845) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000357ca) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000357ca) list_medium_line_t2_t

0xd2c6,	// (0x00032d21) list_medium_line_t3_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t3_g1

0x9dff,	// (0x0002f85a) list_medium_line_t3_t1_ParamLimits

0x9dff,	// (0x0002f85a) list_medium_line_t3_t1

0x9e19,	// (0x0002f874) list_medium_line_t3_t2_ParamLimits

0x9e19,	// (0x0002f874) list_medium_line_t3_t2

0x9e2f,	// (0x0002f88a) list_medium_line_t3_t3_ParamLimits

0x9e2f,	// (0x0002f88a) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000357cf) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000357cf) list_medium_line_t3_t

0xd2c6,	// (0x00032d21) list_medium_line_g3_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_g3_g1

0xe645,	// (0x000340a0) list_medium_line_g3_g2_ParamLimits

0xe645,	// (0x000340a0) list_medium_line_g3_g2

0xd2d2,	// (0x00032d2d) list_medium_line_g3_g3_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000357d6) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000357d6) list_medium_line_g3_g

0xe651,	// (0x000340ac) list_medium_line_g3_t1_ParamLimits

0xe651,	// (0x000340ac) list_medium_line_g3_t1

0xd2c6,	// (0x00032d21) list_medium_line_t2_g3_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t2_g3_g1

0xe645,	// (0x000340a0) list_medium_line_t2_g3_g2_ParamLimits

0xe645,	// (0x000340a0) list_medium_line_t2_g3_g2

0xd2d2,	// (0x00032d2d) list_medium_line_t2_g3_g3_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000357d6) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000357d6) list_medium_line_t2_g3_g

0x9e44,	// (0x0002f89f) list_medium_line_t2_g3_t1_ParamLimits

0x9e44,	// (0x0002f89f) list_medium_line_t2_g3_t1

0x9e5b,	// (0x0002f8b6) list_medium_line_t2_g3_t2_ParamLimits

0x9e5b,	// (0x0002f8b6) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000357dd) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000357dd) list_medium_line_t2_g3_t

0xd2c6,	// (0x00032d21) list_medium_line_t3_g3_g1_ParamLimits

0xd2c6,	// (0x00032d21) list_medium_line_t3_g3_g1

0xe645,	// (0x000340a0) list_medium_line_t3_g3_g2_ParamLimits

0xe645,	// (0x000340a0) list_medium_line_t3_g3_g2

0xd2d2,	// (0x00032d2d) list_medium_line_t3_g3_g3_ParamLimits

0xd2d2,	// (0x00032d2d) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000357d6) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000357d6) list_medium_line_t3_g3_g

0x9e70,	// (0x0002f8cb) list_medium_line_t3_g3_t1_ParamLimits

0x9e70,	// (0x0002f8cb) list_medium_line_t3_g3_t1

0x9e89,	// (0x0002f8e4) list_medium_line_t3_g3_t2_ParamLimits

0x9e89,	// (0x0002f8e4) list_medium_line_t3_g3_t2

0x9e9f,	// (0x0002f8fa) list_medium_line_t3_g3_t3_ParamLimits

0x9e9f,	// (0x0002f8fa) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000357e2) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000357e2) list_medium_line_t3_g3_t

0xe52c,	// (0x00033f87) list_medium_line_right_iconx2_g1

0xe40e,	// (0x00033e69) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000357e9) list_medium_line_right_iconx2_g

0xe666,	// (0x000340c1) list_medium_line_right_iconx2_t1

0xe52c,	// (0x00033f87) list_medium_line_t2_right_iconx2_g1

0xe40e,	// (0x00033e69) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000357e9) list_medium_line_t2_right_iconx2_g

0x9eb9,	// (0x0002f914) list_medium_line_t2_right_iconx2_t1

0x9ec9,	// (0x0002f924) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000357ee) list_medium_line_t2_right_iconx2_t

0xe674,	// (0x000340cf) list_medium_line_x4_t4_t1

0x9ed7,	// (0x0002f932) list_medium_line_x4_t4_t2

0x9ee7,	// (0x0002f942) list_medium_line_x4_t4_t3

0x9ef7,	// (0x0002f952) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000357f3) list_medium_line_x4_t4_t

0x9f41,	// (0x0002f99c) tport_appsw_pane_ParamLimits

0x9f41,	// (0x0002f99c) tport_appsw_pane

0x9f54,	// (0x0002f9af) tport_contact_pane_ParamLimits

0x9f54,	// (0x0002f9af) tport_contact_pane

0x9f67,	// (0x0002f9c2) tport_listscroll_pane_ParamLimits

0x9f67,	// (0x0002f9c2) tport_listscroll_pane

0x9f7d,	// (0x0002f9d8) cell_tport_appsw_pane_ParamLimits

0x9f7d,	// (0x0002f9d8) cell_tport_appsw_pane

0xcfc0,	// (0x00032a1b) tport_appsw_pane_g1_ParamLimits

0xcfc0,	// (0x00032a1b) tport_appsw_pane_g1

0xe682,	// (0x000340dd) tport_contact_pane_g1

0xe68b,	// (0x000340e6) tport_contact_pane_t1

0xe699,	// (0x000340f4) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x000357fc) tport_contact_pane_t

0xe6a7,	// (0x00034102) list_tport_pane

0xe6b0,	// (0x0003410b) scroll_pane_cp_030

0x9fc3,	// (0x0002fa1e) cell_tport_appsw_pane_g1

0xe6c9,	// (0x00034124) cell_tport_appsw_pane_t1

0x1e8c,	// (0x000278e7) grid_highlight_pane_cp019

0x9fd3,	// (0x0002fa2e) list_tport_double_graphic_pane_ParamLimits

0x9fd3,	// (0x0002fa2e) list_tport_double_graphic_pane

0x210c,	// (0x00027b67) list_highlight_pane_cp023_ParamLimits

0x210c,	// (0x00027b67) list_highlight_pane_cp023

0x9fe3,	// (0x0002fa3e) list_tport_double_graphic_pane_g1_ParamLimits

0x9fe3,	// (0x0002fa3e) list_tport_double_graphic_pane_g1

0x9ff0,	// (0x0002fa4b) list_tport_double_graphic_pane_t1_ParamLimits

0x9ff0,	// (0x0002fa4b) list_tport_double_graphic_pane_t1

0xa005,	// (0x0002fa60) list_tport_double_graphic_pane_t2_ParamLimits

0xa005,	// (0x0002fa60) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00035808) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00035808) list_tport_double_graphic_pane_t

0x1e8c,	// (0x000278e7) main_cale_note_pane

0x1b6b,	// (0x000275c6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1b6b,	// (0x000275c6) cell_vitu2_function_top_wide_pane_cp01

0x96e3,	// (0x0002f13e) wait_bar_pane_cp05_ParamLimits

0x1e8c,	// (0x000278e7) listscroll_cmail_pane

0xe6df,	// (0x0003413a) list_cmail_pane

0xa021,	// (0x0002fa7c) list_cmail_body_pane

0xa039,	// (0x0002fa94) list_single_cmail_header_caption_pane

0xa059,	// (0x0002fab4) list_single_cmail_header_detail_pane_ParamLimits

0xa059,	// (0x0002fab4) list_single_cmail_header_detail_pane

0xa08b,	// (0x0002fae6) list_single_cmail_header_caption_pane_t1

0xa09b,	// (0x0002faf6) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa09b,	// (0x0002faf6) list_single_cmail_header_detail_pane_g1

0xe6ff,	// (0x0003415a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6ff,	// (0x0003415a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0003580d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0003580d) list_single_cmail_header_detail_pane_g

0xe718,	// (0x00034173) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe718,	// (0x00034173) list_single_cmail_header_detail_pane_t1

0xe756,	// (0x000341b1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe756,	// (0x000341b1) list_single_cmail_header_editor_pane_bg

0xdf72,	// (0x000339cd) list_cmail_body_pane_g1

0xe768,	// (0x000341c3) list_cmail_body_pane_t1

0xd00b,	// (0x00032a66) list_single_cmail_header_editor_pane_bg_g1

0x3b2b,	// (0x00029586) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd01b,	// (0x00032a76) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd013,	// (0x00032a6e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd29e,	// (0x00032cf9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd03b,	// (0x00032a96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd02b,	// (0x00032a86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd033,	// (0x00032a8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3b0b,	// (0x00029566) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa0d9,	// (0x0002fb34) calenote_gesture_pane_ParamLimits

0xa0d9,	// (0x0002fb34) calenote_gesture_pane

0xa0f9,	// (0x0002fb54) calenote_window_pane_ParamLimits

0xa0f9,	// (0x0002fb54) calenote_window_pane

0xe776,	// (0x000341d1) popup_note_window_cp01

0xa115,	// (0x0002fb70) calenote_swipe_1_pane_ParamLimits

0xa115,	// (0x0002fb70) calenote_swipe_1_pane

0x9ae6,	// (0x0002f541) calenote_swipe_2_pane_ParamLimits

0x9ae6,	// (0x0002f541) calenote_swipe_2_pane

0xe30d,	// (0x00033d68) calenote_swipe_1_pane_g1_ParamLimits

0xe30d,	// (0x00033d68) calenote_swipe_1_pane_g1

0xe31a,	// (0x00033d75) calenote_swipe_1_pane_g2_ParamLimits

0xe31a,	// (0x00033d75) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00035741) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00035741) calenote_swipe_1_pane_g

0xe788,	// (0x000341e3) calenote_swipe_1_pane_t1_ParamLimits

0xe788,	// (0x000341e3) calenote_swipe_1_pane_t1

0xe30d,	// (0x00033d68) calenote_swipe_2_pane_g1_ParamLimits

0xe30d,	// (0x00033d68) calenote_swipe_2_pane_g1

0xe7a7,	// (0x00034202) calenote_swipe_2_pane_g2_ParamLimits

0xe7a7,	// (0x00034202) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00035819) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00035819) calenote_swipe_2_pane_g

0xe7b3,	// (0x0003420e) calenote_swipe_2_pane_t1_ParamLimits

0xe7b3,	// (0x0003420e) calenote_swipe_2_pane_t1

0x1e8c,	// (0x000278e7) main_mup_navstr_pane

0x7579,	// (0x0002cfd4) main_mup3_pane_t7_ParamLimits

0x7579,	// (0x0002cfd4) main_mup3_pane_t7

0xcbbf,	// (0x0003261a) main_mp4_pane_g6_ParamLimits

0xcbbf,	// (0x0003261a) main_mp4_pane_g6

0xcde3,	// (0x0003283e) main_image3_pane_t4_ParamLimits

0xcde3,	// (0x0003283e) main_image3_pane_t4

0xa12a,	// (0x0002fb85) popup_navstr_preview_pane_ParamLimits

0xa12a,	// (0x0002fb85) popup_navstr_preview_pane

0xa13a,	// (0x0002fb95) scroll_navstr_pane_ParamLimits

0xa13a,	// (0x0002fb95) scroll_navstr_pane

0x1e8c,	// (0x000278e7) bg_popup_preview_window_pane_cp04

0xe7da,	// (0x00034235) popup_navstr_preview_pane_t1

0xa14e,	// (0x0002fba9) scroll_navstr_pane_g1_ParamLimits

0xa14e,	// (0x0002fba9) scroll_navstr_pane_g1

0xa162,	// (0x0002fbbd) scroll_navstr_pane_t1_ParamLimits

0xa162,	// (0x0002fbbd) scroll_navstr_pane_t1

0xe77f,	// (0x000341da) bg_button_pane_cp014

0xe77f,	// (0x000341da) bg_button_pane_cp030

0xe2ae,	// (0x00033d09) list_double_fisheye_pane_g4_ParamLimits

0xe2ae,	// (0x00033d09) list_double_fisheye_pane_g4

0xe2ba,	// (0x00033d15) list_double_fisheye_pane_g5_ParamLimits

0xe2ba,	// (0x00033d15) list_double_fisheye_pane_g5

0xe6e7,	// (0x00034142) sp_fs_scroll_pane_cp03

0xe450,	// (0x00033eab) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe45c,	// (0x00033eb7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0003575e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe468,	// (0x00033ec3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa017,	// (0x0002fa72) sp_fs_scroll_pane_cp02

0x2d4a,	// (0x000287a5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2d4a,	// (0x000287a5) popup_sp_fs_calendar_preview_list_single_pane

0x1e8c,	// (0x000278e7) main_cam6_pano_pane

0x210c,	// (0x00027b67) main_mup3_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_phacti_pane

0x95b4,	// (0x0002f00f) bg_button_pane_cp11

0x95ce,	// (0x0002f029) main_mobtv_info_pane_g2_ParamLimits

0x95ce,	// (0x0002f029) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x000356be) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x000356be) main_mobtv_info_pane_g

0x97a9,	// (0x0002f204) sc_clock_pane_t5_ParamLimits

0x97a9,	// (0x0002f204) sc_clock_pane_t5

0x9833,	// (0x0002f28e) main_radioblah_pane_g1_ParamLimits

0xe202,	// (0x00033c5d) main_radioblah_pane_t3_ParamLimits

0xe202,	// (0x00033c5d) main_radioblah_pane_t3

0xe21a,	// (0x00033c75) main_radioblah_pane_t4_ParamLimits

0xe21a,	// (0x00033c75) main_radioblah_pane_t4

0x985b,	// (0x0002f2b6) main_radioblah_text_pane_ParamLimits

0x985b,	// (0x0002f2b6) main_radioblah_text_pane

0x986d,	// (0x0002f2c8) main_radioblah_info_pane_g1_ParamLimits

0x9906,	// (0x0002f361) main_radioblah_info_pane_t4_ParamLimits

0x9906,	// (0x0002f361) main_radioblah_info_pane_t4

0x210c,	// (0x00027b67) main_sp_fs_calendar_pane

0xa179,	// (0x0002fbd4) main_phacti_pane_g1

0xa181,	// (0x0002fbdc) phacti_note_pane_ParamLimits

0xa181,	// (0x0002fbdc) phacti_note_pane

0xe7f1,	// (0x0003424c) phacti_term_pane_ParamLimits

0xe7f1,	// (0x0003424c) phacti_term_pane

0xe806,	// (0x00034261) phacti_note_pane_t1_ParamLimits

0xe806,	// (0x00034261) phacti_note_pane_t1

0xe81d,	// (0x00034278) phacti_term_pane_g1

0xe825,	// (0x00034280) phacti_term_pane_t1_ParamLimits

0xe825,	// (0x00034280) phacti_term_pane_t1

0xe84f,	// (0x000342aa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe857,	// (0x000342b2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00035823) popup_sp_fs_calendar_preview_list_single_pane_g

0xe85f,	// (0x000342ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe85f,	// (0x000342ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe875,	// (0x000342d0) aid_popup_sp_fs_bg_corner_pane

0xc25c,	// (0x00031cb7) popup_sp_fs_calendar_preview_bg_pane_g1

0x1e8c,	// (0x000278e7) popup_sp_fs_calendar_preview_bg_pane

0xe87d,	// (0x000342d8) popup_sp_fs_calendar_preview_list_pane

0x210c,	// (0x00027b67) bg_main_sp_fs_cale_pane_ParamLimits

0x210c,	// (0x00027b67) bg_main_sp_fs_cale_pane

0xe88e,	// (0x000342e9) listscroll_cale_mrui_pane_ParamLimits

0xe88e,	// (0x000342e9) listscroll_cale_mrui_pane

0xe8a2,	// (0x000342fd) listscroll_sp_fs_schedule_track_pane

0xe8ab,	// (0x00034306) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8ab,	// (0x00034306) main_sp_fs_ctrlbar_pane_cp01

0xe8bc,	// (0x00034317) main_sp_fs_ribbon_pane

0xe8c4,	// (0x0003431f) popup_sp_fs_cale_preview_window

0xa1d8,	// (0x0002fc33) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa1d8,	// (0x0002fc33) list_single_sp_fs_schedule_track_pane

0x210c,	// (0x00027b67) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x210c,	// (0x00027b67) bg_sp_fs_highlight_list_pane_cp03

0xa1ec,	// (0x0002fc47) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1ec,	// (0x0002fc47) list_single_sp_fs_schedule_track_pane_g1

0xa1f8,	// (0x0002fc53) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1f8,	// (0x0002fc53) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00035828) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00035828) list_single_sp_fs_schedule_track_pane_g

0xa204,	// (0x0002fc5f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa204,	// (0x0002fc5f) list_single_sp_fs_schedule_track_pane_t1

0xa226,	// (0x0002fc81) sp_fs_schedule_track_pane_ParamLimits

0xa226,	// (0x0002fc81) sp_fs_schedule_track_pane

0xe8d6,	// (0x00034331) sp_fs_schedule_track_pane_g1

0xe8de,	// (0x00034339) sp_fs_schedule_track_pane_g2

0xe8e6,	// (0x00034341) sp_fs_schedule_track_pane_g3

0xe8ee,	// (0x00034349) sp_fs_schedule_track_pane_g4

0xe8f6,	// (0x00034351) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0003582d) sp_fs_schedule_track_pane_g

0xd00b,	// (0x00032a66) bg_sp_fs_schedule_viewer_highlight_g1

0x3b2b,	// (0x00029586) bg_sp_fs_schedule_viewer_highlight_g2

0xd013,	// (0x00032a6e) bg_sp_fs_schedule_viewer_highlight_g3

0xd01b,	// (0x00032a76) bg_sp_fs_schedule_viewer_highlight_g4

0xd29e,	// (0x00032cf9) bg_sp_fs_schedule_viewer_highlight_g5

0xd02b,	// (0x00032a86) bg_sp_fs_schedule_viewer_highlight_g6

0xd033,	// (0x00032a8e) bg_sp_fs_schedule_viewer_highlight_g7

0xd03b,	// (0x00032a96) bg_sp_fs_schedule_viewer_highlight_g8

0x3b0b,	// (0x00029566) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00035838) bg_sp_fs_schedule_viewer_highlight_g

0x1e8c,	// (0x000278e7) bg_main_sp_fs_ribbon_pane

0xa23b,	// (0x0002fc96) main_sp_fs_ribbon_pane_g1

0xe8fe,	// (0x00034359) main_sp_fs_ribbon_pane_t1

0xa244,	// (0x0002fc9f) main_sp_fs_ribbon_pane_t2

0xe90d,	// (0x00034368) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0003584b) main_sp_fs_ribbon_pane_t

0xe91c,	// (0x00034377) main_sp_fs_ribbon_scheduler_pane

0xe924,	// (0x0003437f) bg_main_sp_fs_ribbon_pane_g1

0xe92d,	// (0x00034388) bg_main_sp_fs_ribbon_pane_g2

0xe936,	// (0x00034391) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00035852) bg_main_sp_fs_ribbon_pane_g

0xe93e,	// (0x00034399) main_sp_fs_ribbon_scheduler_pane_g1

0xe947,	// (0x000343a2) main_sp_fs_ribbon_scheduler_pane_g2

0xe950,	// (0x000343ab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00035859) main_sp_fs_ribbon_scheduler_pane_g

0xe959,	// (0x000343b4) list_cale_mrui_pane

0xa253,	// (0x0002fcae) sp_fs_scroll_pane_cp07_ParamLimits

0xa253,	// (0x0002fcae) sp_fs_scroll_pane_cp07

0xa269,	// (0x0002fcc4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa269,	// (0x0002fcc4) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x000343bd) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x000343c5) list_sp_fs_schedule_track_pane

0xe972,	// (0x000343cd) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x000343cd) sp_fs_scroll_pane_cp06

0xc25c,	// (0x00031cb7) bgmain_sp_fs_calendar_pane_g1

0xa27b,	// (0x0002fcd6) list_single_cale_mrui_pane_ParamLimits

0xa27b,	// (0x0002fcd6) list_single_cale_mrui_pane

0xe984,	// (0x000343df) list_single_cale_mrui_row_pane_ParamLimits

0xe984,	// (0x000343df) list_single_cale_mrui_row_pane

0xe991,	// (0x000343ec) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe991,	// (0x000343ec) list_single_cale_mrui_row_pane_g1

0xe9c9,	// (0x00034424) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9c9,	// (0x00034424) list_single_cale_mrui_row_pane_t1

0xa2a2,	// (0x0002fcfd) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa2a2,	// (0x0002fcfd) list_single_cale_mrui_row_pane_t2

0xe9db,	// (0x00034436) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9db,	// (0x00034436) list_single_cale_mrui_row_pane_t3

0xea0a,	// (0x00034465) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea0a,	// (0x00034465) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x00035865) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x00035865) list_single_cale_mrui_row_pane_t

0xa308,	// (0x0002fd63) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa308,	// (0x0002fd63) list_single_cmail_header_editor_pane_bg_cp01

0xa32c,	// (0x0002fd87) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa32c,	// (0x0002fd87) list_single_cmail_header_editor_pane_bg_cp02

0xa348,	// (0x0002fda3) main_radioblah_text_pane_t1_ParamLimits

0xa348,	// (0x0002fda3) main_radioblah_text_pane_t1

0xea39,	// (0x00034494) cam6_indi_pane_cp01

0xea41,	// (0x0003449c) cam6_mode_pane_cp01

0xea49,	// (0x000344a4) cam6_pano_pane

0xea52,	// (0x000344ad) cam6_zoom_pane_cp01

0xea5c,	// (0x000344b7) cam6_pano_image_pane

0xea65,	// (0x000344c0) cam6_pano_pane_g1

0xdf72,	// (0x000339cd) cam6_pano_pane_g2

0xea6e,	// (0x000344c9) cam6_pano_pane_g3

0xea77,	// (0x000344d2) cam6_pano_pane_g4

0xc83c,	// (0x00032297) cam6_pano_pane_g5

0xea80,	// (0x000344db) cam6_pano_pane_g6

0xea88,	// (0x000344e3) cam6_pano_pane_g7

0xea90,	// (0x000344eb) cam6_pano_pane_g8

0xea99,	// (0x000344f4) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x0003586e) cam6_pano_pane_g

0x1e8c,	// (0x000278e7) main_browser_tag_pane

0xe7d2,	// (0x0003422d) grid_navstr_albumart_pane

0xeaa4,	// (0x000344ff) cell_navstr_albumart_pane_ParamLimits

0xeaa4,	// (0x000344ff) cell_navstr_albumart_pane

0xeac0,	// (0x0003451b) cell_navstr_albumart_pane_g1

0xbb40,	// (0x0003159b) cell_navstr_albumart_pane_g2

0xbb50,	// (0x000315ab) cell_navstr_albumart_pane_g3

0xbb48,	// (0x000315a3) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x00035881) cell_navstr_albumart_pane_g

0xa363,	// (0x0002fdbe) bt_list_pane_ParamLimits

0xa363,	// (0x0002fdbe) bt_list_pane

0xa379,	// (0x0002fdd4) bt_list_pane_t1

0xa388,	// (0x0002fde3) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x0003588a) bt_list_pane_t

0x1e8c,	// (0x000278e7) main_cale_prevew_pane

0xa397,	// (0x0002fdf2) popup_cale_preview_window_ParamLimits

0xa397,	// (0x0002fdf2) popup_cale_preview_window

0x210c,	// (0x00027b67) bg_popup_preview_window_pane_cp05_ParamLimits

0x210c,	// (0x00027b67) bg_popup_preview_window_pane_cp05

0xeac8,	// (0x00034523) list_cale_preview_pane_ParamLimits

0xeac8,	// (0x00034523) list_cale_preview_pane

0xa3b2,	// (0x0002fe0d) list_double_cale_preview_pane_ParamLimits

0xa3b2,	// (0x0002fe0d) list_double_cale_preview_pane

0xa3c6,	// (0x0002fe21) list_single_cale_preview_pane_ParamLimits

0xa3c6,	// (0x0002fe21) list_single_cale_preview_pane

0xa3de,	// (0x0002fe39) list_single_cale_preview_pane_g1

0xa3e6,	// (0x0002fe41) list_single_cale_preview_pane_t1_ParamLimits

0xa3e6,	// (0x0002fe41) list_single_cale_preview_pane_t1

0xa3fb,	// (0x0002fe56) list_double_cale_preview_pane_g1

0xa403,	// (0x0002fe5e) list_double_cale_preview_pane_t1_ParamLimits

0xa403,	// (0x0002fe5e) list_double_cale_preview_pane_t1

0xa418,	// (0x0002fe73) list_double_cale_preview_pane_t2_ParamLimits

0xa418,	// (0x0002fe73) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x0003588f) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x0003588f) list_double_cale_preview_pane_t

0x1e8c,	// (0x000278e7) main_ezdial_pane

0x210c,	// (0x00027b67) main_sp_fs_email_pane_ParamLimits

0x9b1e,	// (0x0002f579) cmail_ddmenu_btn01_pane_ParamLimits

0x9b1e,	// (0x0002f579) cmail_ddmenu_btn01_pane

0x9b31,	// (0x0002f58c) cmail_ddmenu_btn02_pane_ParamLimits

0x9b31,	// (0x0002f58c) cmail_ddmenu_btn02_pane

0x9b54,	// (0x0002f5af) cmail_ddmenu_btn03_pane_ParamLimits

0x9b54,	// (0x0002f5af) cmail_ddmenu_btn03_pane

0x9b78,	// (0x0002f5d3) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b9c,	// (0x0002f5f7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa021,	// (0x0002fa7c) list_cmail_body_pane_ParamLimits

0xe6f6,	// (0x00034151) bg_button_pane_cp12

0xe70b,	// (0x00034166) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe70b,	// (0x00034166) list_single_cmail_header_detail_pane_g3

0xa0b3,	// (0x0002fb0e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa0b3,	// (0x0002fb0e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00035814) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00035814) list_single_cmail_header_detail_pane_t

0xe83a,	// (0x00034295) phacti_term_pane_t2_ParamLimits

0xe83a,	// (0x00034295) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0003581e) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0003581e) phacti_term_pane_t

0xead4,	// (0x0003452f) aid_size_list_single_double

0xa430,	// (0x0002fe8b) popup_ezdial_listscroll_window

0xa44c,	// (0x0002fea7) popup_number_entry_window_cp01

0x503d,	// (0x0002aa98) bg_popup_call_pane_cp09

0xeae0,	// (0x0003453b) ezdial_list_pane

0xeae8,	// (0x00034543) scroll_pane_cp23

0xbd27,	// (0x00031782) bg_button_pane_cp028_ParamLimits

0xbd27,	// (0x00031782) bg_button_pane_cp028

0xa45a,	// (0x0002feb5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa45a,	// (0x0002feb5) cmail_ddmenu_btn01_pane_g1

0xa466,	// (0x0002fec1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa466,	// (0x0002fec1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x00035894) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x00035894) cmail_ddmenu_btn01_pane_g

0xeaf0,	// (0x0003454b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf0,	// (0x0003454b) cmail_ddmenu_btn01_pane_t1

0xbd27,	// (0x00031782) bg_button_pane_cp029_ParamLimits

0xbd27,	// (0x00031782) bg_button_pane_cp029

0xa472,	// (0x0002fecd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa472,	// (0x0002fecd) cmail_ddmenu_btn02_pane_g1

0xa48a,	// (0x0002fee5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa48a,	// (0x0002fee5) cmail_ddmenu_btn02_pane_t1

0x210c,	// (0x00027b67) bg_button_pane_cp031_ParamLimits

0x210c,	// (0x00027b67) bg_button_pane_cp031

0xa472,	// (0x0002fecd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa472,	// (0x0002fecd) cmail_ddmenu_btn03_pane_g1

0xa48a,	// (0x0002fee5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa48a,	// (0x0002fee5) cmail_ddmenu_btn03_pane_t1

0x7f40,	// (0x0002d99b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f5a,	// (0x0002d9b5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f5a,	// (0x0002d9b5) cell_dialer2_keypad_pane_t1_copy1

0x944e,	// (0x0002eea9) ncimui_group_button_pane

0x210c,	// (0x00027b67) main_sp_fs_calendar_pane_ParamLimits

0xa039,	// (0x0002fa94) list_single_cmail_header_caption_pane_ParamLimits

0xe885,	// (0x000342e0) aid_recal_txt_sm_pane

0x1e8c,	// (0x000278e7) mian_recal_day_pane

0xe8c4,	// (0x0003431f) popup_sp_fs_cale_preview_window_ParamLimits

0x1e8c,	// (0x000278e7) list_recal_day_pane

0xeb27,	// (0x00034582) list_single_recal_day_pane_ParamLimits

0xeb27,	// (0x00034582) list_single_recal_day_pane

0xeb39,	// (0x00034594) list_single_recal_day_pane_g1_ParamLimits

0xeb39,	// (0x00034594) list_single_recal_day_pane_g1

0xeb45,	// (0x000345a0) list_single_recal_day_pane_g2_ParamLimits

0xeb45,	// (0x000345a0) list_single_recal_day_pane_g2

0xeb51,	// (0x000345ac) list_single_recal_day_pane_g3_ParamLimits

0xeb51,	// (0x000345ac) list_single_recal_day_pane_g3

0xa4ae,	// (0x0002ff09) list_single_recal_day_pane_g4_ParamLimits

0xa4ae,	// (0x0002ff09) list_single_recal_day_pane_g4

0xeb5d,	// (0x000345b8) list_single_recal_day_pane_g5_ParamLimits

0xeb5d,	// (0x000345b8) list_single_recal_day_pane_g5

0xeb69,	// (0x000345c4) list_single_recal_day_pane_g6_ParamLimits

0xeb69,	// (0x000345c4) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x000358a3) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x000358a3) list_single_recal_day_pane_g

0xeb75,	// (0x000345d0) list_single_recal_day_pane_t1

0xeb83,	// (0x000345de) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x000358b0) list_single_recal_day_pane_t

0xa4bc,	// (0x0002ff17) ncimui_query_button_pane_ParamLimits

0xa4bc,	// (0x0002ff17) ncimui_query_button_pane

0xa4cc,	// (0x0002ff27) ncimui_query_button_pane_t1_ParamLimits

0xa4cc,	// (0x0002ff27) ncimui_query_button_pane_t1

0xeb91,	// (0x000345ec) ncimui_query_button_pane_t2_ParamLimits

0xeb91,	// (0x000345ec) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x000358b5) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x000358b5) ncimui_query_button_pane_t

0xa4df,	// (0x0002ff3a) query_button_pane_ParamLimits

0xa4df,	// (0x0002ff3a) query_button_pane

0x1e8c,	// (0x000278e7) bg_button_pane_cp0028

0xeba4,	// (0x000345ff) query_button_pane_t1

0x6637,	// (0x0002c092) main_tport_pane_ParamLimits

0x9f07,	// (0x0002f962) bg_popup_window_pane_cp01_ParamLimits

0x9f07,	// (0x0002f962) bg_popup_window_pane_cp01

0x9f1d,	// (0x0002f978) heading_pane_cp08_ParamLimits

0x9f1d,	// (0x0002f978) heading_pane_cp08

0x9f2e,	// (0x0002f989) heading_pane_cp07_ParamLimits

0x9f2e,	// (0x0002f989) heading_pane_cp07

0xe6c1,	// (0x0003411c) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00035801) cell_tport_appsw_pane_g

0x5634,	// (0x0002b08f) input_candi_list_open_g1

0x45d2,	// (0x0002a02d) list_cale_time_pane_g6_ParamLimits

0x45d2,	// (0x0002a02d) list_cale_time_pane_g6

0x6fbd,	// (0x0002ca18) aid_size_touch_calib_1_ParamLimits

0x6fbd,	// (0x0002ca18) aid_size_touch_calib_1

0x6fc9,	// (0x0002ca24) aid_size_touch_calib_2_ParamLimits

0x6fc9,	// (0x0002ca24) aid_size_touch_calib_2

0x6fdf,	// (0x0002ca3a) aid_size_touch_calib_3_ParamLimits

0x6fdf,	// (0x0002ca3a) aid_size_touch_calib_3

0x6ffd,	// (0x0002ca58) aid_size_touch_calib_4_ParamLimits

0x6ffd,	// (0x0002ca58) aid_size_touch_calib_4

0x7013,	// (0x0002ca6e) main_touch_calib_button_group_pane_ParamLimits

0x7013,	// (0x0002ca6e) main_touch_calib_button_group_pane

0x702a,	// (0x0002ca85) main_touch_calib_pane_g1_ParamLimits

0x7036,	// (0x0002ca91) main_touch_calib_pane_g2_ParamLimits

0x7042,	// (0x0002ca9d) main_touch_calib_pane_g3_ParamLimits

0x704e,	// (0x0002caa9) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000351df) main_touch_calib_pane_g_ParamLimits

0x705a,	// (0x0002cab5) main_touch_calib_pane_t1_ParamLimits

0x7074,	// (0x0002cacf) main_touch_calib_pane_t2_ParamLimits

0x708e,	// (0x0002cae9) main_touch_calib_pane_t3_ParamLimits

0x70a2,	// (0x0002cafd) main_touch_calib_pane_t4_ParamLimits

0x70b6,	// (0x0002cb11) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000351e8) main_touch_calib_pane_t_ParamLimits

0xc606,	// (0x00032061) list_single_fp_cale_pane_g3_ParamLimits

0xc606,	// (0x00032061) list_single_fp_cale_pane_g3

0xcff3,	// (0x00032a4e) bg_button_pane_cp012_ParamLimits

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp03_ParamLimits

0x1d6c,	// (0x000277c7) cell_vitu2_function_top_pane_g1_ParamLimits

0xcff3,	// (0x00032a4e) bg_vkb2_func_pane_cp04_ParamLimits

0x9402,	// (0x0002ee5d) main_ncimui_button_group_pane_ParamLimits

0x9402,	// (0x0002ee5d) main_ncimui_button_group_pane

0x943c,	// (0x0002ee97) main_ncimui_pane_t3_ParamLimits

0x943c,	// (0x0002ee97) main_ncimui_pane_t3

0xe7e8,	// (0x00034243) phacti_button_group_pane

0xead4,	// (0x0003452f) aid_size_list_single_double_ParamLimits

0xa430,	// (0x0002fe8b) popup_ezdial_listscroll_window_ParamLimits

0xa44c,	// (0x0002fea7) popup_number_entry_window_cp01_ParamLimits

0xa4f2,	// (0x0002ff4d) phacti_button_pane_ParamLimits

0xa4f2,	// (0x0002ff4d) phacti_button_pane

0x1e8c,	// (0x000278e7) bg_button_pane_cp14

0xebb2,	// (0x0003460d) phacti_button_pane_t1

0xa503,	// (0x0002ff5e) main_touch_calib_button_pane_ParamLimits

0xa503,	// (0x0002ff5e) main_touch_calib_button_pane

0x2b15,	// (0x00028570) bg_button_pane_cp18_ParamLimits

0x2b15,	// (0x00028570) bg_button_pane_cp18

0xebc0,	// (0x0003461b) main_touch_calib_button_pane_t1_ParamLimits

0xebc0,	// (0x0003461b) main_touch_calib_button_pane_t1

0xebd6,	// (0x00034631) main_touch_calib_button_pane_t2_ParamLimits

0xebd6,	// (0x00034631) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x000358ba) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x000358ba) main_touch_calib_button_pane_t

0x1e8c,	// (0x000278e7) cell_ncimui_button_pane

0x1e8c,	// (0x000278e7) bg_button_pane_cp032

0xebf4,	// (0x0003464f) cell_ncimui_button_pane_t1

0xcdc1,	// (0x0003281c) image3_infobar_pane_ParamLimits

0xcdc1,	// (0x0003281c) image3_infobar_pane

0x97d5,	// (0x0002f230) fs_bigclock_status_pane_ParamLimits

0x97d5,	// (0x0002f230) fs_bigclock_status_pane

0x97e2,	// (0x0002f23d) main_fs_bigclock_clock_pane_ParamLimits

0x97e2,	// (0x0002f23d) main_fs_bigclock_clock_pane

0x97f5,	// (0x0002f250) main_fs_bigclock_indi_pane_ParamLimits

0x97f5,	// (0x0002f250) main_fs_bigclock_indi_pane

0x9810,	// (0x0002f26b) main_fs_bigclock_swipe_pane_ParamLimits

0x9810,	// (0x0002f26b) main_fs_bigclock_swipe_pane

0x1e8c,	// (0x000278e7) main_fs_clock_dumped_data

0xe07f,	// (0x00033ada) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe07f,	// (0x00033ada) list_single_fs_bigclock_indicator_pane_g1

0xe09f,	// (0x00033afa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe09f,	// (0x00033afa) list_single_fs_bigclock_indicator_pane_g2

0xe0b9,	// (0x00033b14) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0b9,	// (0x00033b14) list_single_fs_bigclock_indicator_pane_g3

0xe0d5,	// (0x00033b30) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0d5,	// (0x00033b30) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x000356f2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x000356f2) list_single_fs_bigclock_indicator_pane_g

0xe0fb,	// (0x00033b56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0fb,	// (0x00033b56) list_single_fs_bigclock_indicator_pane_t1

0xe123,	// (0x00033b7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe123,	// (0x00033b7e) list_single_fs_bigclock_indicator_pane_t2

0xe14b,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe14b,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_t3

0xe175,	// (0x00033bd0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe175,	// (0x00033bd0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x000356fd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x000356fd) list_single_fs_bigclock_indicator_pane_t

0xec02,	// (0x0003465d) image3_infobar_fav_pane_ParamLimits

0xec02,	// (0x0003465d) image3_infobar_fav_pane

0xec12,	// (0x0003466d) image3_infobar_loc_pane_ParamLimits

0xec12,	// (0x0003466d) image3_infobar_loc_pane

0xec28,	// (0x00034683) image3_infobar_time_pane_ParamLimits

0xec28,	// (0x00034683) image3_infobar_time_pane

0xc25c,	// (0x00031cb7) image3_infobar_time_pane_g1

0xec38,	// (0x00034693) image3_infobar_time_pane_t1

0xc25c,	// (0x00031cb7) image3_infobar_loc_pane_g1

0xec46,	// (0x000346a1) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000358bf) image3_infobar_loc_pane_g

0xec4e,	// (0x000346a9) image3_infobar_loc_pane_t1

0xc25c,	// (0x00031cb7) image3_infobar_fav_pane_g1

0xec5c,	// (0x000346b7) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000358c4) image3_infobar_fav_pane_g

0xec64,	// (0x000346bf) fs_bigclock_status_battery_pane

0xec6d,	// (0x000346c8) fs_bigclock_status_signal_pane

0xec76,	// (0x000346d1) fs_bigclock_status_title_pane

0xec7f,	// (0x000346da) fs_bigclock_status_signal_pane_g1

0xec88,	// (0x000346e3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000358c9) fs_bigclock_status_signal_pane_g

0xec90,	// (0x000346eb) fs_bigclock_status_battery_pane_g1

0xec99,	// (0x000346f4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000358ce) fs_bigclock_status_battery_pane_g

0xeca1,	// (0x000346fc) fs_bigclock_status_title_pane_t1

0xc25c,	// (0x00031cb7) main_fs_bigclock_clock_pane_g1

0xecaf,	// (0x0003470a) main_fs_bigclock_clock_pane_g2

0xecaf,	// (0x0003470a) main_fs_bigclock_clock_pane_g3

0xecaf,	// (0x0003470a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000358d3) main_fs_bigclock_clock_pane_g

0xecbb,	// (0x00034716) main_fs_bigclock_clock_pane_t1

0xecc9,	// (0x00034724) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000358dc) main_fs_bigclock_clock_pane_t

0xecd8,	// (0x00034733) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecd8,	// (0x00034733) list_single_fs_bigclock_indicator_pane

0xa518,	// (0x0002ff73) list_single_fs_bigclock_pane_ParamLimits

0xa518,	// (0x0002ff73) list_single_fs_bigclock_pane

0xecf2,	// (0x0003474d) main_fs_bigclock_indicator_pane_t1

0xed01,	// (0x0003475c) list_single_fs_bigclock_pane_g1

0xed09,	// (0x00034764) list_single_fs_bigclock_pane_t1

0xc25c,	// (0x00031cb7) main_fs_bigclock_swipe_pane_g1

0xed47,	// (0x000347a2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000358ed) main_fs_bigclock_swipe_pane_g

0xed4f,	// (0x000347aa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed4f,	// (0x000347aa) main_fs_bigclock_swipe_pane_t1

0x4990,	// (0x0002a3eb) call_type_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_btmg_pane

0xe9bd,	// (0x00034418) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9bd,	// (0x00034418) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x00035860) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00035860) list_single_cale_mrui_row_pane_g

0xeb0e,	// (0x00034569) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x00034571) list_recal_vselct_arw_up_pane

0xeb1e,	// (0x00034579) list_recal_vselct_pane

0xed6c,	// (0x000347c7) btmg_button_pane

0xa57e,	// (0x0002ffd9) main_btmg_pane_g1

0x1e8c,	// (0x000278e7) bg_button_pane_cp044

0xed76,	// (0x000347d1) btmg_button_pane_t1

0xbd1f,	// (0x0003177a) aid_listscroll_gen

0x210c,	// (0x00027b67) main_cntbar_detail_pane

0xe6d7,	// (0x00034132) list_cmail_folder_pane

0xe6e7,	// (0x00034142) sp_fs_scroll_pane_cp03_ParamLimits

0xa588,	// (0x0002ffe3) list_single_fs_dyc_pane_cp01_ParamLimits

0xa588,	// (0x0002ffe3) list_single_fs_dyc_pane_cp01

0xed84,	// (0x000347df) aid_size_cmail_indent

0xed8d,	// (0x000347e8) list_single_dyc_row_pane_cp01

0xa5d8,	// (0x00030033) cntbar_detail_list_pane_ParamLimits

0xa5d8,	// (0x00030033) cntbar_detail_list_pane

0xa62a,	// (0x00030085) main_cntbar_detail_cont_pane_ParamLimits

0xa62a,	// (0x00030085) main_cntbar_detail_cont_pane

0x47a5,	// (0x0002a200) scroll_pane_cp032_ParamLimits

0x47a5,	// (0x0002a200) scroll_pane_cp032

0xa63e,	// (0x00030099) cntbar_detail_list_event_pane_ParamLimits

0xa63e,	// (0x00030099) cntbar_detail_list_event_pane

0xa5ea,	// (0x00030045) cntbar_detail_list_shct_pane

0x3b83,	// (0x000295de) aid_list_gen

0xed96,	// (0x000347f1) aid_scroll

0xed9f,	// (0x000347fa) aid_size_touch_scroll_bar

0xeda8,	// (0x00034803) aid_list_double

0xedb1,	// (0x0003480c) aid_list_single

0xa64e,	// (0x000300a9) aid_list_single_lg

0xedba,	// (0x00034815) aid_list_z_g_a_sm

0xedc2,	// (0x0003481d) aid_list_z_g_d

0xedca,	// (0x00034825) aid_txt_z_prm

0xedd8,	// (0x00034833) aid_txt_z_prm_cp01

0xede6,	// (0x00034841) aid_txt_z_sec

0xa657,	// (0x000300b2) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa657,	// (0x000300b2) main_cntbar_detail_cont_pane_g1

0xa66b,	// (0x000300c6) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa66b,	// (0x000300c6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000358f2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000358f2) main_cntbar_detail_cont_pane_g

0xedf4,	// (0x0003484f) main_cntbar_detail_cont_pane_t1

0xee02,	// (0x0003485d) main_cntbar_detail_cont_pane_t2

0xee10,	// (0x0003486b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x000358f7) main_cntbar_detail_cont_pane_t

0xa67b,	// (0x000300d6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa67b,	// (0x000300d6) cell_cntbar_detail_list_shct_pane

0xee1e,	// (0x00034879) cntbar_detail_list_shct_pane_g1

0xee27,	// (0x00034882) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x000358fe) cntbar_detail_list_shct_pane_g

0xa68d,	// (0x000300e8) cntbar_detail_list_event_pane_g1_ParamLimits

0xa68d,	// (0x000300e8) cntbar_detail_list_event_pane_g1

0xa699,	// (0x000300f4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa699,	// (0x000300f4) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00035903) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00035903) cntbar_detail_list_event_pane_g

0xa707,	// (0x00030162) cntbar_detail_list_event_pane_t1_ParamLimits

0xa707,	// (0x00030162) cntbar_detail_list_event_pane_t1

0xa71c,	// (0x00030177) cntbar_detail_list_event_pane_t2_ParamLimits

0xa71c,	// (0x00030177) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00035910) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00035910) cntbar_detail_list_event_pane_t

0xc25c,	// (0x00031cb7) cell_cntbar_detail_list_shct_pane_g1

0x4fbb,	// (0x0002aa16) navi_pane_mv_g3

0x210c,	// (0x00027b67) main_cntbar_detail_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_notif_wgt_pane

0xcb75,	// (0x000325d0) aid_tch_main_mp4_pane_g4

0xcd49,	// (0x000327a4) popup_slider_window_cp02

0xeb05,	// (0x00034560) list_recal_day_event_pane

0xa5a8,	// (0x00030003) cntbar_detail_btn_pane_ParamLimits

0xa5a8,	// (0x00030003) cntbar_detail_btn_pane

0xa5c0,	// (0x0003001b) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5c0,	// (0x0003001b) cntbar_detail_btn_pane_cp01

0xa5ea,	// (0x00030045) cntbar_detail_list_shct_pane_ParamLimits

0xa5fa,	// (0x00030055) cntbar_detail_pane_g1_ParamLimits

0xa5fa,	// (0x00030055) cntbar_detail_pane_g1

0xa60e,	// (0x00030069) cntbar_detail_pane_t1_ParamLimits

0xa60e,	// (0x00030069) cntbar_detail_pane_t1

0xa6a5,	// (0x00030100) cntbar_detail_list_event_pane_g3_ParamLimits

0xa6a5,	// (0x00030100) cntbar_detail_list_event_pane_g3

0xa6bd,	// (0x00030118) cntbar_detail_list_event_pane_g4_ParamLimits

0xa6bd,	// (0x00030118) cntbar_detail_list_event_pane_g4

0xa6d5,	// (0x00030130) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6d5,	// (0x00030130) cntbar_detail_list_event_pane_g5

0xa6ed,	// (0x00030148) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6ed,	// (0x00030148) cntbar_detail_list_event_pane_g6

0xa731,	// (0x0003018c) cntbar_detail_list_event_pane_t3_ParamLimits

0xa731,	// (0x0003018c) cntbar_detail_list_event_pane_t3

0xa743,	// (0x0003019e) popup_notif_wgt_window_ParamLimits

0xa743,	// (0x0003019e) popup_notif_wgt_window

0xa75c,	// (0x000301b7) popup_submenu_window_cp01_ParamLimits

0xa75c,	// (0x000301b7) popup_submenu_window_cp01

0x503d,	// (0x0002aa98) bg_popup_window_pane_cp10

0xee30,	// (0x0003488b) listscroll_notif_wgt_pane

0xee3a,	// (0x00034895) list_notif_wgt_window

0xee43,	// (0x0003489e) scroll_pane_cp033

0xee4c,	// (0x000348a7) list_notif_wgt_row_pane_ParamLimits

0xee4c,	// (0x000348a7) list_notif_wgt_row_pane

0xee60,	// (0x000348bb) aid_size_list_notif_wgt_del

0xee69,	// (0x000348c4) list_notif_wgt_row_pane_g1

0xee71,	// (0x000348cc) list_notif_wgt_row_pane_g2

0xee79,	// (0x000348d4) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00035917) list_notif_wgt_row_pane_g

0xee82,	// (0x000348dd) list_notif_wgt_row_pane_t1

0xee90,	// (0x000348eb) list_notif_wgt_row_pane_t2

0xee9e,	// (0x000348f9) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0003591e) list_notif_wgt_row_pane_t

0xd2f8,	// (0x00032d53) list_recal_day_event_pane_g1

0xeeac,	// (0x00034907) list_recal_day_event_pane_t1

0x1e8c,	// (0x000278e7) bg_button_pane_cp045

0xeebb,	// (0x00034916) cntbar_detail_btn_pane_t1

0xbd27,	// (0x00031782) main_callh_pane_ParamLimits

0xbd27,	// (0x00031782) main_callh_pane

0x1e8c,	// (0x000278e7) main_coverflow0_pane

0x1e8c,	// (0x000278e7) main_wgtman_pane

0x981e,	// (0x0002f279) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x981e,	// (0x0002f279) main_fs_bigclock_unlock_btn_pane

0xe6b9,	// (0x00034114) bg_button_pane_cp16

0x9fcb,	// (0x0002fa26) cell_tport_appsw_pane_g3

0xa76e,	// (0x000301c9) cf0_flow_pane_ParamLimits

0xa76e,	// (0x000301c9) cf0_flow_pane

0xeec9,	// (0x00034924) listscroll_cf0_pane

0xeed2,	// (0x0003492d) main_cf0_pane_g1

0xa783,	// (0x000301de) main_cf0_pane_t1_ParamLimits

0xa783,	// (0x000301de) main_cf0_pane_t1

0xa79b,	// (0x000301f6) main_cf0_pane_t2_ParamLimits

0xa79b,	// (0x000301f6) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x00035925) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x00035925) main_cf0_pane_t

0xeedc,	// (0x00034937) scroll_pane_cp11

0xa7b3,	// (0x0003020e) cf0_flow_pane_g1

0xa7bf,	// (0x0003021a) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0003592a) cf0_flow_pane_g

0xa7cb,	// (0x00030226) cf0_flow_pane_t1

0x1e8c,	// (0x000278e7) main_call6_pane

0x1e8c,	// (0x000278e7) main_calllock_pane

0xa7dd,	// (0x00030238) call6_btn_grp_pane_ParamLimits

0xa7dd,	// (0x00030238) call6_btn_grp_pane

0xa7f9,	// (0x00030254) call6_pane_g1_ParamLimits

0xa7f9,	// (0x00030254) call6_pane_g1

0xa80f,	// (0x0003026a) popup_call6_1st_window_ParamLimits

0xa80f,	// (0x0003026a) popup_call6_1st_window

0xa820,	// (0x0003027b) popup_call6_2nd_window_ParamLimits

0xa820,	// (0x0003027b) popup_call6_2nd_window

0xa831,	// (0x0003028c) cell_call6_btn_pane_ParamLimits

0xa831,	// (0x0003028c) cell_call6_btn_pane

0x503d,	// (0x0002aa98) bg_popup_call2_in_pane_cp03

0xeee7,	// (0x00034942) popup_call6_1st_window_g1

0xeeef,	// (0x0003494a) popup_call6_1st_window_g2

0xeef7,	// (0x00034952) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0003592f) popup_call6_1st_window_g

0xeeff,	// (0x0003495a) popup_call6_1st_window_t1

0xef0e,	// (0x00034969) popup_call6_1st_window_t2

0xef1e,	// (0x00034979) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x00035936) popup_call6_1st_window_t

0x503d,	// (0x0002aa98) bg_popup_call2_in_pane_cp04

0xeee7,	// (0x00034942) popup_call6_2nd_window_g1

0xeeef,	// (0x0003494a) popup_call6_2nd_window_g2

0xeef7,	// (0x00034952) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0003592f) popup_call6_2nd_window_g

0xeeff,	// (0x0003495a) popup_call6_2nd_window_t1

0x1e8c,	// (0x000278e7) bg_button_pane_cp15

0xef2e,	// (0x00034989) cell_call6_btn_pane_g1

0xef37,	// (0x00034992) cell_call6_btn_pane_t1

0xa845,	// (0x000302a0) listscroll_wgtman_pane_ParamLimits

0xa845,	// (0x000302a0) listscroll_wgtman_pane

0xa868,	// (0x000302c3) wgtman_btn_pane_ParamLimits

0xa868,	// (0x000302c3) wgtman_btn_pane

0x4bec,	// (0x0002a647) aid_scroll_copy1

0xef46,	// (0x000349a1) list_wgtman_pane

0xa8ab,	// (0x00030306) wgtman_btn_pane_g1_ParamLimits

0xa8ab,	// (0x00030306) wgtman_btn_pane_g1

0xa8d7,	// (0x00030332) wgtman_btn_pane_t1_ParamLimits

0xa8d7,	// (0x00030332) wgtman_btn_pane_t1

0xef50,	// (0x000349ab) wgtman_btn_pane_t2_ParamLimits

0xef50,	// (0x000349ab) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0003593d) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0003593d) wgtman_btn_pane_t

0xef67,	// (0x000349c2) listrow_wgtman_pane_ParamLimits

0xef67,	// (0x000349c2) listrow_wgtman_pane

0xef7b,	// (0x000349d6) listrow_wgtman_pane_g1

0xa914,	// (0x0003036f) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x00035942) listrow_wgtman_pane_g

0xef84,	// (0x000349df) listrow_wgtman_pane_t1

0xef92,	// (0x000349ed) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x00035947) listrow_wgtman_pane_t

0xefa0,	// (0x000349fb) wait_bar_pane_cp09

0xefa8,	// (0x00034a03) main_calllock_btn_pane

0xefb2,	// (0x00034a0d) main_calllock_pane_g1

0x1e8c,	// (0x000278e7) bg_button_pane_cp17

0xefbe,	// (0x00034a19) main_calllock_btn_pane_g1

0xefc7,	// (0x00034a22) main_calllock_btn_pane_t1

0x1e8c,	// (0x000278e7) main_dialer3_pane

0x1e8c,	// (0x000278e7) main_fmrd2_pane

0xc25c,	// (0x00031cb7) main_fs_bigclock_unlock_btn_pane_g1

0xefde,	// (0x00034a39) main_fs_bigclock_unlock_btn_pane_t1

0xa91e,	// (0x00030379) area_fmrd2_info_pane_ParamLimits

0xa91e,	// (0x00030379) area_fmrd2_info_pane

0xa931,	// (0x0003038c) area_fmrd2_visual_pane_ParamLimits

0xa931,	// (0x0003038c) area_fmrd2_visual_pane

0xa93f,	// (0x0003039a) fmrd2_indi_pane_ParamLimits

0xa93f,	// (0x0003039a) fmrd2_indi_pane

0xa94c,	// (0x000303a7) area_fmrd2_visual_pane_g1

0xa954,	// (0x000303af) area_fmrd2_visual_pane_t1

0xa964,	// (0x000303bf) area_fmrd2_visual_pane_t2

0xa974,	// (0x000303cf) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x00035951) area_fmrd2_visual_pane_t

0xa984,	// (0x000303df) area_fmrd2_info_pane_g1

0xa98c,	// (0x000303e7) area_fmrd2_info_pane_t1

0xa99c,	// (0x000303f7) area_fmrd2_info_pane_t2

0xa9ac,	// (0x00030407) area_fmrd2_info_pane_t3

0xa9bc,	// (0x00030417) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x00035958) area_fmrd2_info_pane_t

0xa9cc,	// (0x00030427) fmrd2_indi_pane_t1

0xa9dc,	// (0x00030437) fmrd2_indi_pane_t2

0xa9ec,	// (0x00030447) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00035961) fmrd2_indi_pane_t

0xe0e4,	// (0x00033b3f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0e4,	// (0x00033b3f) list_single_fs_bigclock_indicator_pane_g5

0xe18a,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe18a,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t5

0xa195,	// (0x0002fbf0) aid_cell_bcale_month_pane_ParamLimits

0xa195,	// (0x0002fbf0) aid_cell_bcale_month_pane

0xa1a7,	// (0x0002fc02) bcale_month_pane_ParamLimits

0xa1a7,	// (0x0002fc02) bcale_month_pane

0xa1bf,	// (0x0002fc1a) bcale_preview_pane_ParamLimits

0xa1bf,	// (0x0002fc1a) bcale_preview_pane

0xed09,	// (0x00034764) list_single_fs_bigclock_pane_t1_ParamLimits

0xed23,	// (0x0003477e) list_single_fs_bigclock_pane_t2_ParamLimits

0xed23,	// (0x0003477e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000358e8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000358e8) list_single_fs_bigclock_pane_t

0xefd6,	// (0x00034a31) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0003594c) main_fs_bigclock_unlock_btn_pane_g

0xa9fc,	// (0x00030457) aid_dia3_key_size_ParamLimits

0xa9fc,	// (0x00030457) aid_dia3_key_size

0xaa0b,	// (0x00030466) aid_dia3_listrow_size_ParamLimits

0xaa0b,	// (0x00030466) aid_dia3_listrow_size

0xaa19,	// (0x00030474) dia3_keypad_fun_pane_ParamLimits

0xaa19,	// (0x00030474) dia3_keypad_fun_pane

0xaa35,	// (0x00030490) dia3_keypad_num_pane_ParamLimits

0xaa35,	// (0x00030490) dia3_keypad_num_pane

0xaa4e,	// (0x000304a9) dia3_listscroll_pane_ParamLimits

0xaa4e,	// (0x000304a9) dia3_listscroll_pane

0xaa63,	// (0x000304be) dia3_numentry_pane_ParamLimits

0xaa63,	// (0x000304be) dia3_numentry_pane

0xefec,	// (0x00034a47) dia3_list_pane

0xeff7,	// (0x00034a52) scroll_pane_cp12

0x1e8c,	// (0x000278e7) bg_dia3_numentry_pane

0xf002,	// (0x00034a5d) dia3_numentry_pane_t1

0xaa76,	// (0x000304d1) cell_dia3_key_num_pane

0xaa7e,	// (0x000304d9) cell_dia3_key0_fun_pane_ParamLimits

0xaa7e,	// (0x000304d9) cell_dia3_key0_fun_pane

0xaa92,	// (0x000304ed) cell_dia3_key1_fun_pane_ParamLimits

0xaa92,	// (0x000304ed) cell_dia3_key1_fun_pane

0xaaaa,	// (0x00030505) dia3_listrow_pane

0xddfc,	// (0x00033857) bg_dia3_numentry_pane_g1

0x1e8c,	// (0x000278e7) bg_button_pane_cp21

0xf011,	// (0x00034a6c) cell_dia3_key_num_pane_t1

0xf01f,	// (0x00034a7a) cell_dia3_key_num_pane_t2

0xf02e,	// (0x00034a89) cell_dia3_key_num_pane_t3

0xf03d,	// (0x00034a98) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00035968) cell_dia3_key_num_pane_t

0x1e8c,	// (0x000278e7) bg_button_pane_cp19

0xaabc,	// (0x00030517) cell_dia3_key0_fun_pane_g1

0x1e8c,	// (0x000278e7) bg_button_pane_cp20

0xaac4,	// (0x0003051f) cell_dia3_key1_fun_pane_g1

0xaacc,	// (0x00030527) area_left_week_number_pane

0xaad5,	// (0x00030530) area_top_day_name_pane

0xaade,	// (0x00030539) frame_month_view_pane

0xaaea,	// (0x00030545) grid_month_view_pane

0xaaf4,	// (0x0003054f) cell_top_day_name_pane_ParamLimits

0xaaf4,	// (0x0003054f) cell_top_day_name_pane

0xab10,	// (0x0003056b) cell_area_left_week_number_pane_ParamLimits

0xab10,	// (0x0003056b) cell_area_left_week_number_pane

0xab26,	// (0x00030581) cell_month_view_pane_ParamLimits

0xab26,	// (0x00030581) cell_month_view_pane

0xf04c,	// (0x00034aa7) frm_month_g1

0xab47,	// (0x000305a2) frm_month_g2

0xab51,	// (0x000305ac) frm_month_g3

0xab5b,	// (0x000305b6) frm_month_g4

0xab65,	// (0x000305c0) frm_month_g5

0xab6f,	// (0x000305ca) frm_month_g6

0xab7b,	// (0x000305d6) frm_month_g7

0xf055,	// (0x00034ab0) frm_month_g8

0xab87,	// (0x000305e2) frm_month_g9

0xab90,	// (0x000305eb) frm_month_g10

0xab99,	// (0x000305f4) frm_month_g11

0xaba2,	// (0x000305fd) frm_month_g12

0xabab,	// (0x00030606) frm_month_g13

0xabb4,	// (0x0003060f) frm_month_g14

0xabbf,	// (0x0003061a) frm_month_g15

0xabca,	// (0x00030625) frm_month_g16

0x000f,

0xff16,	// (0x00035971) frm_month_g

0xabd5,	// (0x00030630) cell_top_day_name_pane_t1

0xabe4,	// (0x0003063f) cell_area_left_week_number_pane_g1

0xabd5,	// (0x00030630) cell_area_left_week_number_pane_t1

0xc25c,	// (0x00031cb7) cell_month_view_pane_g1

0xabec,	// (0x00030647) cell_month_view_pane_t1

0x1e8c,	// (0x000278e7) main_fps_pane

0xe416,	// (0x00033e71) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe416,	// (0x00033e71) cmail_ddmenu_btn02_pane_cp1

0xe432,	// (0x00033e8d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe432,	// (0x00033e8d) cmail_ddmenu_btn02_pane_cp2

0xa47e,	// (0x0002fed9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa47e,	// (0x0002fed9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x00035899) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x00035899) cmail_ddmenu_btn02_pane_g

0xa49c,	// (0x0002fef7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa49c,	// (0x0002fef7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x0003589e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x0003589e) cmail_ddmenu_btn02_pane_t

0xabfb,	// (0x00030656) fps_text_pane_ParamLimits

0xabfb,	// (0x00030656) fps_text_pane

0xac12,	// (0x0003066d) main_fps_pane_g1_ParamLimits

0xac12,	// (0x0003066d) main_fps_pane_g1

0xac2a,	// (0x00030685) wait_bar_pane_cp010_ParamLimits

0xac2a,	// (0x00030685) wait_bar_pane_cp010

0xac3d,	// (0x00030698) fps_text_pane_t1_ParamLimits

0xac3d,	// (0x00030698) fps_text_pane_t1

0x80a8,	// (0x0002db03) cam4_image_uncrop_pane_g1

0x80b1,	// (0x0002db0c) cam4_image_uncrop_pane_g2

0x80bc,	// (0x0002db17) cam4_image_uncrop_pane_g3

0x80c5,	// (0x0002db20) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00035377) cam4_image_uncrop_pane_g

0xaaaa,	// (0x00030505) dia3_listrow_pane_ParamLimits

0x1e8c,	// (0x000278e7) main_phob2_pane

0x9f92,	// (0x0002f9ed) cell_tport_appsw_pane_cp02_ParamLimits

0x9f92,	// (0x0002f9ed) cell_tport_appsw_pane_cp02

0x9fa6,	// (0x0002fa01) cell_tport_appsw_pane_cp03_ParamLimits

0x9fa6,	// (0x0002fa01) cell_tport_appsw_pane_cp03

0x1e8c,	// (0x000278e7) phob2_contact_card_pane

0x1e8c,	// (0x000278e7) phob2_listscroll_pane

0xf05e,	// (0x00034ab9) phob2_list_pane

0xf066,	// (0x00034ac1) scroll_pane_cp034

0xac55,	// (0x000306b0) phob2_cc_data_pane_ParamLimits

0xac55,	// (0x000306b0) phob2_cc_data_pane

0xac76,	// (0x000306d1) phob2_cc_listscroll_pane_ParamLimits

0xac76,	// (0x000306d1) phob2_cc_listscroll_pane

0xac98,	// (0x000306f3) list_double_large_graphic_phob2_pane_ParamLimits

0xac98,	// (0x000306f3) list_double_large_graphic_phob2_pane

0xacad,	// (0x00030708) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xacad,	// (0x00030708) list_double_large_graphic_phob2_pane_g1

0xacba,	// (0x00030715) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xacba,	// (0x00030715) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00035992) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00035992) list_double_large_graphic_phob2_pane_g

0xacc6,	// (0x00030721) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xacc6,	// (0x00030721) list_double_large_graphic_phob2_pane_t1

0xacdb,	// (0x00030736) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xacdb,	// (0x00030736) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00035997) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00035997) list_double_large_graphic_phob2_pane_t

0x1e8c,	// (0x000278e7) list_highlight_pane_cp024

0xf06e,	// (0x00034ac9) phob2_cc_button_pane

0xaced,	// (0x00030748) phob2_cc_data_pane_g1_ParamLimits

0xaced,	// (0x00030748) phob2_cc_data_pane_g1

0xad03,	// (0x0003075e) phob2_cc_data_pane_g2_ParamLimits

0xad03,	// (0x0003075e) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0003599c) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0003599c) phob2_cc_data_pane_g

0xad17,	// (0x00030772) phob2_cc_data_pane_t1_ParamLimits

0xad17,	// (0x00030772) phob2_cc_data_pane_t1

0xad31,	// (0x0003078c) phob2_cc_data_pane_t2_ParamLimits

0xad31,	// (0x0003078c) phob2_cc_data_pane_t2

0xad4b,	// (0x000307a6) phob2_cc_data_pane_t3_ParamLimits

0xad4b,	// (0x000307a6) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x000359a1) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x000359a1) phob2_cc_data_pane_t

0xf076,	// (0x00034ad1) phob2_cc_list_pane_ParamLimits

0xf076,	// (0x00034ad1) phob2_cc_list_pane

0xd391,	// (0x00032dec) scroll_pane_cp035_ParamLimits

0xd391,	// (0x00032dec) scroll_pane_cp035

0x210c,	// (0x00027b67) bg_button_pane_cp033

0xf082,	// (0x00034add) phob2_cc_button_pane_g1

0xf08e,	// (0x00034ae9) phob2_cc_button_pane_t1

0xf0a3,	// (0x00034afe) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x000359a8) phob2_cc_button_pane_t

0xad65,	// (0x000307c0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad65,	// (0x000307c0) list_double_large_graphic_phob2_cc_pane

0xad7a,	// (0x000307d5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad7a,	// (0x000307d5) list_double_large_graphic_phob2_cc_pane_g1

0xad86,	// (0x000307e1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad86,	// (0x000307e1) list_double_large_graphic_phob2_cc_pane_g2

0xad92,	// (0x000307ed) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xad92,	// (0x000307ed) list_double_large_graphic_phob2_cc_pane_g3

0xad9e,	// (0x000307f9) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xad9e,	// (0x000307f9) list_double_large_graphic_phob2_cc_pane_g4

0xadaa,	// (0x00030805) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xadaa,	// (0x00030805) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x000359ad) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x000359ad) list_double_large_graphic_phob2_cc_pane_g

0xadb6,	// (0x00030811) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xadb6,	// (0x00030811) list_double_large_graphic_phob2_cc_pane_t1

0xaddf,	// (0x0003083a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaddf,	// (0x0003083a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x000359b8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x000359b8) list_double_large_graphic_phob2_cc_pane_t

0xf0b5,	// (0x00034b10) list_highlight_pane_cp025_ParamLimits

0xf0b5,	// (0x00034b10) list_highlight_pane_cp025

0x210c,	// (0x00027b67) bg_button_pane_cp033_ParamLimits

0xf082,	// (0x00034add) phob2_cc_button_pane_g1_ParamLimits

0xf08e,	// (0x00034ae9) phob2_cc_button_pane_t1_ParamLimits

0xf0a3,	// (0x00034afe) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x000359a8) phob2_cc_button_pane_t_ParamLimits

0x211a,	// (0x00027b75) popup_wgtman_window

0xd129,	// (0x00032b84) scroll_pane_cp038

0xa88d,	// (0x000302e8) wgtman_btn_pane_cp_01_ParamLimits

0xa88d,	// (0x000302e8) wgtman_btn_pane_cp_01

0xf0c3,	// (0x00034b1e) wgtman_content_pane

0xf0cc,	// (0x00034b27) wgtman_heading_pane

0x1e8c,	// (0x000278e7) bg_heading_pane_cp02

0xf0d5,	// (0x00034b30) wgtman_heading_pane_g1

0xf0dd,	// (0x00034b38) wgtman_heading_pane_t1

0xf0eb,	// (0x00034b46) scroll_pane_cp036

0xf0f3,	// (0x00034b4e) wgtman_list_pane

0xe26c,	// (0x00033cc7) wgtman_list_pane_t1_ParamLimits

0xe26c,	// (0x00033cc7) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
