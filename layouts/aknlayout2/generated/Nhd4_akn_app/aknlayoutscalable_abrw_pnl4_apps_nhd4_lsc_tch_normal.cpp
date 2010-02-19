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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00026425 };

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
0x1d8d,	// (0x000281b2) Screen

0x1d99,	// (0x000281be) application_window

0x1e03,	// (0x00028228) area_bottom_pane_ParamLimits

0x1e03,	// (0x00028228) area_bottom_pane

0x1e60,	// (0x00028285) area_top_pane_ParamLimits

0x1e60,	// (0x00028285) area_top_pane

0x1ebd,	// (0x000282e2) call_video_uplink_pane_ParamLimits

0x1ebd,	// (0x000282e2) call_video_uplink_pane

0x1ee9,	// (0x0002830e) main_pane_ParamLimits

0x1ee9,	// (0x0002830e) main_pane

0xbcd3,	// (0x000320f8) context_pane

0x6b68,	// (0x0002cf8d) navi_pane

0x6b90,	// (0x0002cfb5) popup_cale_events_window_ParamLimits

0x6b90,	// (0x0002cfb5) popup_cale_events_window

0xbce6,	// (0x0003210b) popup_mup_playback_window

0x6ba8,	// (0x0002cfcd) signal_pane

0x2a37,	// (0x00028e5c) main_browser_pane

0x4ff6,	// (0x0002b41b) main_burst_pane

0x68c8,	// (0x0002cced) main_calc_pane

0x4ff6,	// (0x0002b41b) main_cale_day_pane

0x2a37,	// (0x00028e5c) main_cale_month_pane

0x4ff6,	// (0x0002b41b) main_cale_week_pane

0x4ff6,	// (0x0002b41b) main_call_pane

0x24ee,	// (0x00028913) main_call_poc_pane

0x4ff6,	// (0x0002b41b) main_camera_pane

0x4ff6,	// (0x0002b41b) main_chi_dic_pane

0x4b51,	// (0x0002af76) main_clock_pane

0x24ee,	// (0x00028913) main_fmradio_pane

0x4ff6,	// (0x0002b41b) main_graph_messa_pane

0x24ee,	// (0x00028913) main_help_pane

0x2a37,	// (0x00028e5c) main_im_pane

0x2749,	// (0x00028b6e) main_image_pane_ParamLimits

0x2749,	// (0x00028b6e) main_image_pane

0x24ee,	// (0x00028913) main_location2_pane

0x4ff6,	// (0x0002b41b) main_location_pane

0x24ee,	// (0x00028913) main_messa_pane

0x24ee,	// (0x00028913) main_mp2_pane

0x4ff6,	// (0x0002b41b) main_mp_pane

0x24ee,	// (0x00028913) main_msg_pane

0x24ee,	// (0x00028913) main_mup_eq_pane

0x24ee,	// (0x00028913) main_mup_pane

0x2a37,	// (0x00028e5c) main_notes_pane

0x24ee,	// (0x00028913) main_pec_pane

0x24ee,	// (0x00028913) main_phob_pane

0x24ee,	// (0x00028913) main_pinb_pane

0x24ee,	// (0x00028913) main_postcard_pane

0x24ee,	// (0x00028913) main_qdial_pane

0x4ff6,	// (0x0002b41b) main_skin_pane

0x24ee,	// (0x00028913) main_smil2_pane

0x4ff6,	// (0x0002b41b) main_smil_pane

0x4ff6,	// (0x0002b41b) main_video_pane

0x4ff6,	// (0x0002b41b) main_video_tele_pane

0x2749,	// (0x00028b6e) main_viewer_pane_ParamLimits

0x2749,	// (0x00028b6e) main_viewer_pane

0x4ff6,	// (0x0002b41b) main_vorec_pane

0x691c,	// (0x0002cd41) popup_blid_sat_info_window_ParamLimits

0x691c,	// (0x0002cd41) popup_blid_sat_info_window

0x6974,	// (0x0002cd99) popup_dyc_status_message_window_ParamLimits

0x6974,	// (0x0002cd99) popup_dyc_status_message_window

0x698c,	// (0x0002cdb1) popup_grid_large_graphic_window_ParamLimits

0x698c,	// (0x0002cdb1) popup_grid_large_graphic_window

0x6a42,	// (0x0002ce67) popup_loc_request_window_ParamLimits

0x6a42,	// (0x0002ce67) popup_loc_request_window

0x6b40,	// (0x0002cf65) popup_wml_address_window_ParamLimits

0x6b40,	// (0x0002cf65) popup_wml_address_window

0x6702,	// (0x0002cb27) call_muted_g1

0x5d77,	// (0x0002c19c) popup_call_audio_conf_window_ParamLimits

0x5d77,	// (0x0002c19c) popup_call_audio_conf_window

0x6716,	// (0x0002cb3b) popup_call_audio_first_window_ParamLimits

0x6716,	// (0x0002cb3b) popup_call_audio_first_window

0x678c,	// (0x0002cbb1) popup_call_audio_in_window_ParamLimits

0x678c,	// (0x0002cbb1) popup_call_audio_in_window

0x67c8,	// (0x0002cbed) popup_call_audio_out_window_ParamLimits

0x67c8,	// (0x0002cbed) popup_call_audio_out_window

0x6802,	// (0x0002cc27) popup_call_audio_second_window_ParamLimits

0x6802,	// (0x0002cc27) popup_call_audio_second_window

0x6858,	// (0x0002cc7d) popup_call_audio_wait_window_ParamLimits

0x6858,	// (0x0002cc7d) popup_call_audio_wait_window

0x688d,	// (0x0002ccb2) popup_number_entry_window_ParamLimits

0x688d,	// (0x0002ccb2) popup_number_entry_window

0x2083,	// (0x000284a8) bg_popup_call_pane_cp05_ParamLimits

0x2083,	// (0x000284a8) bg_popup_call_pane_cp05

0x20a3,	// (0x000284c8) popup_number_entry_window_t1

0x20b6,	// (0x000284db) popup_number_entry_window_t2

0x20c8,	// (0x000284ed) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0003550c) popup_number_entry_window_t

0x2110,	// (0x00028535) text_title_cp2

0x2123,	// (0x00028548) bg_popup_call_pane_cp_ParamLimits

0x2123,	// (0x00028548) bg_popup_call_pane_cp

0x2131,	// (0x00028556) call_thumbnail_pane

0x2139,	// (0x0002855e) popup_call_audio_in_window_g1_ParamLimits

0x2139,	// (0x0002855e) popup_call_audio_in_window_g1

0x2145,	// (0x0002856a) popup_call_audio_in_window_g2_ParamLimits

0x2145,	// (0x0002856a) popup_call_audio_in_window_g2

0x2151,	// (0x00028576) popup_call_audio_in_window_g3_ParamLimits

0x2151,	// (0x00028576) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00035515) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00035515) popup_call_audio_in_window_g

0x215d,	// (0x00028582) popup_call_audio_in_window_t1_ParamLimits

0x215d,	// (0x00028582) popup_call_audio_in_window_t1

0x2178,	// (0x0002859d) popup_call_audio_in_window_t2_ParamLimits

0x2178,	// (0x0002859d) popup_call_audio_in_window_t2

0x2193,	// (0x000285b8) popup_call_audio_in_window_t3_ParamLimits

0x2193,	// (0x000285b8) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0003551c) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0003551c) popup_call_audio_in_window_t

0x2123,	// (0x00028548) bg_popup_call_pane_cp01_ParamLimits

0x2123,	// (0x00028548) bg_popup_call_pane_cp01

0x2131,	// (0x00028556) call_thumbnail_pane_cp02

0x21a6,	// (0x000285cb) call_type_pane_cp022

0x21ae,	// (0x000285d3) popup_call_audio_out_window_g1_ParamLimits

0x21ae,	// (0x000285d3) popup_call_audio_out_window_g1

0x21c0,	// (0x000285e5) popup_call_audio_out_window_g2_ParamLimits

0x21c0,	// (0x000285e5) popup_call_audio_out_window_g2

0x21cc,	// (0x000285f1) popup_call_audio_out_window_g3_ParamLimits

0x21cc,	// (0x000285f1) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00035523) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00035523) popup_call_audio_out_window_g

0x21de,	// (0x00028603) popup_call_audio_out_window_t1_ParamLimits

0x21de,	// (0x00028603) popup_call_audio_out_window_t1

0x21f6,	// (0x0002861b) popup_call_audio_out_window_t2_ParamLimits

0x21f6,	// (0x0002861b) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0003552a) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0003552a) popup_call_audio_out_window_t

0x220b,	// (0x00028630) bg_popup_call_pane_ParamLimits

0x220b,	// (0x00028630) bg_popup_call_pane

0x228f,	// (0x000286b4) call_thumbnail_pane_cp_ParamLimits

0x228f,	// (0x000286b4) call_thumbnail_pane_cp

0x22b3,	// (0x000286d8) call_type_pane_cp01_ParamLimits

0x22b3,	// (0x000286d8) call_type_pane_cp01

0x22f7,	// (0x0002871c) popup_call_audio_first_window_g1_ParamLimits

0x22f7,	// (0x0002871c) popup_call_audio_first_window_g1

0x2343,	// (0x00028768) popup_call_audio_first_window_g2_ParamLimits

0x2343,	// (0x00028768) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0003552f) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0003552f) popup_call_audio_first_window_g

0x2387,	// (0x000287ac) popup_call_audio_first_window_t1_ParamLimits

0x2387,	// (0x000287ac) popup_call_audio_first_window_t1

0x2433,	// (0x00028858) popup_call_audio_first_window_t4_ParamLimits

0x2433,	// (0x00028858) popup_call_audio_first_window_t4

0x24bf,	// (0x000288e4) popup_call_audio_first_window_t5_ParamLimits

0x24bf,	// (0x000288e4) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00035534) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00035534) popup_call_audio_first_window_t

0x24ee,	// (0x00028913) bg_popup_call_pane_cp02

0x24f8,	// (0x0002891d) call_type_pane_cp023

0x2500,	// (0x00028925) popup_call_audio_wait_window_g1

0x2508,	// (0x0002892d) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0003553b) popup_call_audio_wait_window_g

0x2510,	// (0x00028935) popup_call_audio_wait_window_t3

0x251e,	// (0x00028943) bg_popup_call_pane_cp03_ParamLimits

0x251e,	// (0x00028943) bg_popup_call_pane_cp03

0x257e,	// (0x000289a3) call_thumbnail_pane_cp011_ParamLimits

0x257e,	// (0x000289a3) call_thumbnail_pane_cp011

0x258a,	// (0x000289af) call_type_pane_cp034_ParamLimits

0x258a,	// (0x000289af) call_type_pane_cp034

0x25c6,	// (0x000289eb) popup_call_audio_second_window_g1_ParamLimits

0x25c6,	// (0x000289eb) popup_call_audio_second_window_g1

0x2602,	// (0x00028a27) popup_call_audio_second_window_g2_ParamLimits

0x2602,	// (0x00028a27) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00035540) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00035540) popup_call_audio_second_window_g

0x263e,	// (0x00028a63) popup_call_audio_second_window_t1_ParamLimits

0x263e,	// (0x00028a63) popup_call_audio_second_window_t1

0x26bf,	// (0x00028ae4) popup_call_audio_second_window_t2_ParamLimits

0x26bf,	// (0x00028ae4) popup_call_audio_second_window_t2

0x26f5,	// (0x00028b1a) popup_call_audio_second_window_t3_ParamLimits

0x26f5,	// (0x00028b1a) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00035545) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00035545) popup_call_audio_second_window_t

0x24ee,	// (0x00028913) bg_popup_call_pane_cp04

0x272b,	// (0x00028b50) list_conf_pane

0x2733,	// (0x00028b58) popup_call_audio_conf_window_t1

0x2741,	// (0x00028b66) call_thumbnail_pane_g1

0x2749,	// (0x00028b6e) bg_pinb_pane_ParamLimits

0x2749,	// (0x00028b6e) bg_pinb_pane

0x2757,	// (0x00028b7c) find_pinb_pane

0x2760,	// (0x00028b85) listscroll_pinb_pane_ParamLimits

0x2760,	// (0x00028b85) listscroll_pinb_pane

0x276f,	// (0x00028b94) pinb_bg_pane_g1

0x2779,	// (0x00028b9e) pinb_bg_pane_g2

0x2785,	// (0x00028baa) pinb_bg_pane_g3

0x2791,	// (0x00028bb6) pinb_bg_pane_g4

0x279d,	// (0x00028bc2) pinb_bg_pane_g5

0x27a9,	// (0x00028bce) pinb_bg_pane_g6

0x27b4,	// (0x00028bd9) pinb_bg_pane_g7

0x27bf,	// (0x00028be4) pinb_bg_pane_g8

0x27ca,	// (0x00028bef) pinb_bg_pane_g9

0x27d4,	// (0x00028bf9) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0003554c) pinb_bg_pane_g

0x27f1,	// (0x00028c16) grid_pinb_pane

0x27fa,	// (0x00028c1f) list_pinb_pane

0x2803,	// (0x00028c28) scroll_pane_cp01_ParamLimits

0x2803,	// (0x00028c28) scroll_pane_cp01

0x2815,	// (0x00028c3a) find_pinb_pane_g1_ParamLimits

0x2815,	// (0x00028c3a) find_pinb_pane_g1

0x282d,	// (0x00028c52) find_pinb_pane_t1

0x283f,	// (0x00028c64) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00035566) find_pinb_pane_t

0x2854,	// (0x00028c79) input_focus_pane_cp01_ParamLimits

0x2854,	// (0x00028c79) input_focus_pane_cp01

0x2860,	// (0x00028c85) cell_pinb_pane_ParamLimits

0x2860,	// (0x00028c85) cell_pinb_pane

0x2892,	// (0x00028cb7) cell_pinb_pane_g1_ParamLimits

0x2892,	// (0x00028cb7) cell_pinb_pane_g1

0x28a2,	// (0x00028cc7) cell_pinb_pane_g2_ParamLimits

0x28a2,	// (0x00028cc7) cell_pinb_pane_g2

0x28ae,	// (0x00028cd3) cell_pinb_pane_g3_ParamLimits

0x28ae,	// (0x00028cd3) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0003556b) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0003556b) cell_pinb_pane_g

0x24ee,	// (0x00028913) grid_highlight_pane_cp01

0x28ba,	// (0x00028cdf) list_pinb_item_pane_ParamLimits

0x28ba,	// (0x00028cdf) list_pinb_item_pane

0x24ee,	// (0x00028913) list_highlight_pane_cp02

0x28ce,	// (0x00028cf3) list_pinb_item_pane_g1_ParamLimits

0x28ce,	// (0x00028cf3) list_pinb_item_pane_g1

0x28db,	// (0x00028d00) list_pinb_item_pane_g2_ParamLimits

0x28db,	// (0x00028d00) list_pinb_item_pane_g2

0x28e7,	// (0x00028d0c) list_pinb_item_pane_g3_ParamLimits

0x28e7,	// (0x00028d0c) list_pinb_item_pane_g3

0x28f8,	// (0x00028d1d) list_pinb_item_pane_g4_ParamLimits

0x28f8,	// (0x00028d1d) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00035572) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00035572) list_pinb_item_pane_g

0x2904,	// (0x00028d29) list_pinb_item_pane_t1_ParamLimits

0x2904,	// (0x00028d29) list_pinb_item_pane_t1

0x0b72,	// (0x00026f97) calc_display_pane

0x0b9a,	// (0x00026fbf) calc_paper_pane

0x0bbd,	// (0x00026fe2) grid_calc_pane

0x24ee,	// (0x00028913) bg_list_pane_cp01

0x291b,	// (0x00028d40) clock_g1

0x2923,	// (0x00028d48) clock_g2

0x0001,

0xf156,	// (0x0003557b) clock_g

0x292b,	// (0x00028d50) clock_t1_ParamLimits

0x292b,	// (0x00028d50) clock_t1

0x2940,	// (0x00028d65) clock_t2_ParamLimits

0x2940,	// (0x00028d65) clock_t2

0x2952,	// (0x00028d77) clock_t3_ParamLimits

0x2952,	// (0x00028d77) clock_t3

0x2964,	// (0x00028d89) clock_t4_ParamLimits

0x2964,	// (0x00028d89) clock_t4

0x2976,	// (0x00028d9b) clock_t5_ParamLimits

0x2976,	// (0x00028d9b) clock_t5

0x298b,	// (0x00028db0) clock_t6_ParamLimits

0x298b,	// (0x00028db0) clock_t6

0x299d,	// (0x00028dc2) clock_t7_ParamLimits

0x299d,	// (0x00028dc2) clock_t7

0x29af,	// (0x00028dd4) clock_t8_ParamLimits

0x29af,	// (0x00028dd4) clock_t8

0x29c3,	// (0x00028de8) clock_t9_ParamLimits

0x29c3,	// (0x00028de8) clock_t9

0x0008,

0xf15b,	// (0x00035580) clock_t_ParamLimits

0xf15b,	// (0x00035580) clock_t

0x29d7,	// (0x00028dfc) popup_clock_analogue_window_cp02

0x29d7,	// (0x00028dfc) popup_clock_digital_window_cp01

0x29df,	// (0x00028e04) listscroll_help_pane

0x24ee,	// (0x00028913) phob_pre_status_pane

0x29e9,	// (0x00028e0e) grid_qdial_pane

0x24ee,	// (0x00028913) listscroll_mce_pane

0x29f3,	// (0x00028e18) bg_notes_pane

0x2a01,	// (0x00028e26) list_notes_pane

0x2a0f,	// (0x00028e34) scroll_pane_cp06

0x2a23,	// (0x00028e48) bg_calc_paper_pane

0xb11d,	// (0x00031542) list_calc_pane

0x2a37,	// (0x00028e5c) bg_calc_display_pane

0x0beb,	// (0x00027010) calc_display_pane_t1

0x0bfd,	// (0x00027022) calc_display_pane_t2

0xb137,	// (0x0003155c) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00035593) calc_display_pane_t

0x0c0f,	// (0x00027034) cell_calc_pane_ParamLimits

0x0c0f,	// (0x00027034) cell_calc_pane

0x2a43,	// (0x00028e68) bg_calc_paper_pane_g1

0x2a4f,	// (0x00028e74) bg_calc_paper_pane_g2

0x2a5b,	// (0x00028e80) bg_calc_paper_pane_g3

0x2a67,	// (0x00028e8c) bg_calc_paper_pane_g4

0x2a73,	// (0x00028e98) bg_calc_paper_pane_g5

0x2a7f,	// (0x00028ea4) bg_calc_paper_pane_g6

0x2a90,	// (0x00028eb5) bg_calc_paper_pane_g7

0x2aa1,	// (0x00028ec6) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0003559a) bg_calc_paper_pane_g

0x2ab4,	// (0x00028ed9) calc_bg_paper_pane_g9

0x2ac7,	// (0x00028eec) list_calc_item_pane_ParamLimits

0x2ac7,	// (0x00028eec) list_calc_item_pane

0x2adf,	// (0x00028f04) list_calc_item_pane_g1

0xb149,	// (0x0003156e) list_calc_item_pane_t1_ParamLimits

0xb149,	// (0x0003156e) list_calc_item_pane_t1

0x0c46,	// (0x0002706b) list_calc_item_pane_t2_ParamLimits

0x0c46,	// (0x0002706b) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000355ab) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000355ab) list_calc_item_pane_t

0x2aec,	// (0x00028f11) cell_calc_pane_g1

0x2af6,	// (0x00028f1b) grid_highlight_pane_cp02

0x2b18,	// (0x00028f3d) bg_calc_display_pane_g1

0xb15b,	// (0x00031580) bg_calc_display_pane_g2

0x2b21,	// (0x00028f46) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000355b5) bg_calc_display_pane_g

0x0c78,	// (0x0002709d) cell_qdial_pane_ParamLimits

0x0c78,	// (0x0002709d) cell_qdial_pane

0x2b2a,	// (0x00028f4f) cell_qdial_pane_g1_ParamLimits

0x2b2a,	// (0x00028f4f) cell_qdial_pane_g1

0x2b40,	// (0x00028f65) cell_qdial_pane_g2_ParamLimits

0x2b40,	// (0x00028f65) cell_qdial_pane_g2

0x2b51,	// (0x00028f76) cell_qdial_pane_g3_ParamLimits

0x2b51,	// (0x00028f76) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000355bc) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000355bc) cell_qdial_pane_g

0x2b73,	// (0x00028f98) cell_qdial_pane_t1_ParamLimits

0x2b73,	// (0x00028f98) cell_qdial_pane_t1

0x2b8b,	// (0x00028fb0) cell_qdial_pane_t2_ParamLimits

0x2b8b,	// (0x00028fb0) cell_qdial_pane_t2

0x2b9e,	// (0x00028fc3) cell_qdial_pane_t3_ParamLimits

0x2b9e,	// (0x00028fc3) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000355c5) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000355c5) cell_qdial_pane_t

0x24ee,	// (0x00028913) grid_highlight_pane_cp04

0x2bb1,	// (0x00028fd6) thumbnail_qdial_pane_ParamLimits

0x2bb1,	// (0x00028fd6) thumbnail_qdial_pane

0x2c0d,	// (0x00029032) list_help_pane

0x2c16,	// (0x0002903b) scroll_pane_cp02

0x2c1f,	// (0x00029044) help_list_pane_t1_ParamLimits

0x2c1f,	// (0x00029044) help_list_pane_t1

0xb165,	// (0x0003158a) bg_notes_pane_g2

0xb16d,	// (0x00031592) bg_notes_pane_g3

0xb175,	// (0x0003159a) notes_bg_pane_g1

0xb17d,	// (0x000315a2) notes_bg_pane_g4

0xb185,	// (0x000315aa) notes_bg_pane_g5

0xb18d,	// (0x000315b2) notes_bg_pane_g6

0xb195,	// (0x000315ba) notes_bg_pane_g7

0xb19d,	// (0x000315c2) notes_bg_pane_g8

0xb1a5,	// (0x000315ca) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x000355e3) notes_bg_pane_g

0x2c3f,	// (0x00029064) list_notes_text_pane_ParamLimits

0x2c3f,	// (0x00029064) list_notes_text_pane

0x2c56,	// (0x0002907b) list_notes_text_pane_g1

0x2c5f,	// (0x00029084) list_notes_text_pane_t1

0x2a37,	// (0x00028e5c) listscroll_cale_week_pane

0x2c9b,	// (0x000290c0) bg_cale_heading_pane

0x2cb3,	// (0x000290d8) bg_cale_pane_cp01

0x2ccc,	// (0x000290f1) cale_week_corner_pane

0x2cdd,	// (0x00029102) cale_week_day_heading_pane

0x2cf5,	// (0x0002911a) cale_week_scroll_pane_g1

0x2d0a,	// (0x0002912f) cale_week_scroll_pane_g2

0x2d1b,	// (0x00029140) cale_week_scroll_pane_g3

0x2d2c,	// (0x00029151) cale_week_scroll_pane_g4

0x2d3d,	// (0x00029162) cale_week_scroll_pane_g5

0x2d50,	// (0x00029175) cale_week_scroll_pane_g6

0x2d63,	// (0x00029188) cale_week_scroll_pane_g7

0x2d76,	// (0x0002919b) cale_week_scroll_pane_g8

0x2d89,	// (0x000291ae) cale_week_scroll_pane_g9

0x2d9a,	// (0x000291bf) cale_week_scroll_pane_g10

0x2dab,	// (0x000291d0) cale_week_scroll_pane_g11

0x2dbc,	// (0x000291e1) cale_week_scroll_pane_g12

0x2dcd,	// (0x000291f2) cale_week_scroll_pane_g13

0x2dde,	// (0x00029203) cale_week_scroll_pane_g14

0x2def,	// (0x00029214) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x000355f2) cale_week_scroll_pane_g

0x2e04,	// (0x00029229) cale_week_time_pane

0x2e17,	// (0x0002923c) grid_cale_week_pane

0x2e3e,	// (0x00029263) scroll_pane_cp08

0x2e58,	// (0x0002927d) cell_cale_week_pane_ParamLimits

0x2e58,	// (0x0002927d) cell_cale_week_pane

0x2e98,	// (0x000292bd) cale_week_day_heading_pane_t1

0x2eac,	// (0x000292d1) cale_week_day_heading_pane_t2

0x2ec0,	// (0x000292e5) cale_week_day_heading_pane_t3

0x2ed4,	// (0x000292f9) cale_week_day_heading_pane_t4

0x2ee8,	// (0x0002930d) cale_week_day_heading_pane_t5

0x2efc,	// (0x00029321) cale_week_day_heading_pane_t6

0x2f12,	// (0x00029337) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00035611) cale_week_day_heading_pane_t

0x2f26,	// (0x0002934b) bg_cale_side_pane

0x0c8c,	// (0x000270b1) cale_week_time_pane_t1

0x0ca4,	// (0x000270c9) cale_week_time_pane_t2

0x0cbc,	// (0x000270e1) cale_week_time_pane_t3

0x0cd4,	// (0x000270f9) cale_week_time_pane_t4

0x0cec,	// (0x00027111) cale_week_time_pane_t5

0x0d04,	// (0x00027129) cale_week_time_pane_t6

0x0d1c,	// (0x00027141) cale_week_time_pane_t7

0x0d34,	// (0x00027159) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00035620) cale_week_time_pane_t

0x2f34,	// (0x00029359) cell_cale_week_pane_g2

0x2f4d,	// (0x00029372) cell_cale_week_pane_g3_ParamLimits

0x2f4d,	// (0x00029372) cell_cale_week_pane_g3

0x2f65,	// (0x0002938a) grid_highlight_pane_cp07

0x2f6d,	// (0x00029392) listscroll_gms_pane

0x2f77,	// (0x0002939c) grid_gms_pane

0x2f80,	// (0x000293a5) listscroll_gms_pane_g1

0x2f88,	// (0x000293ad) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00035631) listscroll_gms_pane_g

0x2f90,	// (0x000293b5) scroll_pane_cp010

0x2f9b,	// (0x000293c0) cell_gms_pane_ParamLimits

0x2f9b,	// (0x000293c0) cell_gms_pane

0x2fad,	// (0x000293d2) cell_gms_pane_g1

0x2fb5,	// (0x000293da) cell_gms_pane_g2

0x2c56,	// (0x0002907b) cell_gms_pane_g3

0x2fbd,	// (0x000293e2) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00035636) cell_gms_pane_g

0x2fc6,	// (0x000293eb) grid_highlight_pane_cp09

0x66aa,	// (0x0002cacf) phob_pre_status_pane_g1

0x66b2,	// (0x0002cad7) phob_pre_status_pane_g2

0x66ba,	// (0x0002cadf) phob_pre_status_pane_g3

0x66c2,	// (0x0002cae7) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00035a25) phob_pre_status_pane_g

0x66d4,	// (0x0002caf9) phob_pre_status_pane_t1

0x66e2,	// (0x0002cb07) phob_pre_status_pane_t2

0x66f2,	// (0x0002cb17) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00035a30) phob_pre_status_pane_t

0x24ee,	// (0x00028913) bg_list_pane_cp05

0xb1b5,	// (0x000315da) grid_vorec_pane

0xb1bd,	// (0x000315e2) vorec_t1

0xb1cb,	// (0x000315f0) vorec_t2

0xb1d9,	// (0x000315fe) vorec_t3

0xb1e7,	// (0x0003160c) vorec_t4

0xb1f5,	// (0x0003161a) vorec_t5

0xb203,	// (0x00031628) vorec_t6

0x0006,

0xf21a,	// (0x0003563f) vorec_t

0xb21f,	// (0x00031644) wait_bar_pane_cp01

0x2fce,	// (0x000293f3) cell_vorec_pane_ParamLimits

0x2fce,	// (0x000293f3) cell_vorec_pane

0x2fe1,	// (0x00029406) cell_vorec_pane_g1

0x24ee,	// (0x00028913) grid_highlight_pane_cp05

0x3003,	// (0x00029428) cams_zoom_pane

0x3012,	// (0x00029437) image_vga_pane

0x302c,	// (0x00029451) main_camera_pane_g1

0x303e,	// (0x00029463) main_camera_pane_g2

0x3050,	// (0x00029475) main_camera_pane_g3

0x3062,	// (0x00029487) main_camera_pane_g4

0x3074,	// (0x00029499) main_camera_pane_g5

0x3086,	// (0x000294ab) main_camera_pane_g6

0x3098,	// (0x000294bd) main_camera_pane_g7

0x0007,

0xf229,	// (0x0003564e) main_camera_pane_g

0x30b6,	// (0x000294db) main_camera_pane_t1

0x30cc,	// (0x000294f1) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0003565f) main_camera_pane_t

0x3108,	// (0x0002952d) cams_zoom_pane_cp_ParamLimits

0x3108,	// (0x0002952d) cams_zoom_pane_cp

0x3130,	// (0x00029555) image_cif_pane_ParamLimits

0x3130,	// (0x00029555) image_cif_pane

0x316b,	// (0x00029590) image_subqcif_pane

0x3173,	// (0x00029598) main_video_pane_g1_ParamLimits

0x3173,	// (0x00029598) main_video_pane_g1

0x3197,	// (0x000295bc) main_video_pane_g2_ParamLimits

0x3197,	// (0x000295bc) main_video_pane_g2

0x31cd,	// (0x000295f2) main_video_pane_g3_ParamLimits

0x31cd,	// (0x000295f2) main_video_pane_g3

0x31fd,	// (0x00029622) main_video_pane_g4_ParamLimits

0x31fd,	// (0x00029622) main_video_pane_g4

0x322d,	// (0x00029652) main_video_pane_g5_ParamLimits

0x322d,	// (0x00029652) main_video_pane_g5

0x3247,	// (0x0002966c) main_video_pane_g6_ParamLimits

0x3247,	// (0x0002966c) main_video_pane_g6

0x0006,

0xf23f,	// (0x00035664) main_video_pane_g_ParamLimits

0xf23f,	// (0x00035664) main_video_pane_g

0x3272,	// (0x00029697) main_video_pane_t1_ParamLimits

0x3272,	// (0x00029697) main_video_pane_t1

0x32bb,	// (0x000296e0) cams_zoom_pane_g1

0x32c4,	// (0x000296e9) cams_zoom_pane_g2

0x32cd,	// (0x000296f2) cams_zoom_pane_g3

0x32d6,	// (0x000296fb) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00035673) cams_zoom_pane_g

0x32f3,	// (0x00029718) grid_cams_pane

0x330d,	// (0x00029732) linegrid_cams_pane

0x3320,	// (0x00029745) cell_cams_pane_ParamLimits

0x3320,	// (0x00029745) cell_cams_pane

0x3340,	// (0x00029765) cams_burst_image_pane

0x3348,	// (0x0002976d) cell_cams_pane_g1

0x24ee,	// (0x00028913) grid_highlight_pane_cp03

0x2aec,	// (0x00028f11) mp_bg_pane_g1

0x24ee,	// (0x00028913) bg_list_pane_cp03

0xbbab,	// (0x00031fd0) bg_mp_pane

0xbbb3,	// (0x00031fd8) grid_mp_pane

0xbbbb,	// (0x00031fe0) media_player_g1

0xbbc3,	// (0x00031fe8) media_player_t1

0xbbd1,	// (0x00031ff6) media_player_t2

0xbbdf,	// (0x00032004) media_player_t3

0xbbed,	// (0x00032012) media_player_t4

0xbbfb,	// (0x00032020) media_player_t5

0xbc09,	// (0x0003202e) media_player_t6

0xbc17,	// (0x0003203c) media_player_t7

0x0006,

0xf5ea,	// (0x00035a0f) media_player_t

0xbc25,	// (0x0003204a) wait_bar_pane_cp02

0xf5cf,	// (0x000359f4) main_usb_pane_t

0x66a1,	// (0x0002cac6) cell_mp_pane

0x2aec,	// (0x00028f11) cell_mp_pane_g1

0x24ee,	// (0x00028913) grid_highlight_pane_cp06

0x345f,	// (0x00029884) grid_skin_colour_pane

0x3467,	// (0x0002988c) list_highlight_pane_cp03

0x346f,	// (0x00029894) skin_g1

0x3477,	// (0x0002989c) skin_t1

0x3486,	// (0x000298ab) skin_t2

0x0001,

0xf283,	// (0x000356a8) skin_t

0x3494,	// (0x000298b9) cell_skin_colour_pane_ParamLimits

0x3494,	// (0x000298b9) cell_skin_colour_pane

0x34b4,	// (0x000298d9) cell_skin_colour_pane_g1

0x351f,	// (0x00029944) call_video_g1_ParamLimits

0x351f,	// (0x00029944) call_video_g1

0x353b,	// (0x00029960) call_video_g2_ParamLimits

0x353b,	// (0x00029960) call_video_g2

0x0001,

0xf288,	// (0x000356ad) call_video_g_ParamLimits

0xf288,	// (0x000356ad) call_video_g

0x358d,	// (0x000299b2) call_video_uplink_pane_cp1_ParamLimits

0x358d,	// (0x000299b2) call_video_uplink_pane_cp1

0x35f2,	// (0x00029a17) call_video_uplink_pane_cp2

0x3634,	// (0x00029a59) video_down_crop_pane_ParamLimits

0x3634,	// (0x00029a59) video_down_crop_pane

0x371d,	// (0x00029b42) video_down_pane_ParamLimits

0x371d,	// (0x00029b42) video_down_pane

0x3814,	// (0x00029c39) video_down_subqcif_pane_ParamLimits

0x3814,	// (0x00029c39) video_down_subqcif_pane

0x382c,	// (0x00029c51) video_down_subqcif_pane_cp_ParamLimits

0x382c,	// (0x00029c51) video_down_subqcif_pane_cp

0x3869,	// (0x00029c8e) im_reading_pane_ParamLimits

0x3869,	// (0x00029c8e) im_reading_pane

0x387b,	// (0x00029ca0) im_writing_pane_ParamLimits

0x387b,	// (0x00029ca0) im_writing_pane

0x3899,	// (0x00029cbe) im_reading_pane_t1

0x38d5,	// (0x00029cfa) list_im_pane

0x38e6,	// (0x00029d0b) scroll_pane_cp07

0x38ff,	// (0x00029d24) im_writing_pane_t1_ParamLimits

0x38ff,	// (0x00029d24) im_writing_pane_t1

0x3914,	// (0x00029d39) im_writing_pane_t2_ParamLimits

0x3914,	// (0x00029d39) im_writing_pane_t2

0x0001,

0xf292,	// (0x000356b7) im_writing_pane_t_ParamLimits

0xf292,	// (0x000356b7) im_writing_pane_t

0x24ee,	// (0x00028913) input_focus_pane_cp04

0x24ee,	// (0x00028913) input_focus_pane_cp05

0x3931,	// (0x00029d56) list_im_single_pane_ParamLimits

0x3931,	// (0x00029d56) list_im_single_pane

0x3947,	// (0x00029d6c) list_single_im_pane_t1

0x6661,	// (0x0002ca86) blid_accuracy_pane

0x6669,	// (0x0002ca8e) blid_compass_pane

0x6673,	// (0x0002ca98) main_location_t1

0x6683,	// (0x0002caa8) main_location_t2

0x6693,	// (0x0002cab8) main_location_t3

0x0002,

0xf5f9,	// (0x00035a1e) main_location_t

0x24ee,	// (0x00028913) aid_levels_location

0x2aec,	// (0x00028f11) blid_accuracy_pane_g1

0x2aec,	// (0x00028f11) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00035719) blid_accuracy_pane_g

0x3981,	// (0x00029da6) wml_content_pane

0x39bf,	// (0x00029de4) wml_button_pane_ParamLimits

0x39bf,	// (0x00029de4) wml_button_pane

0x39d3,	// (0x00029df8) wml_list_single_large_pane_ParamLimits

0x39d3,	// (0x00029df8) wml_list_single_large_pane

0x39ea,	// (0x00029e0f) wml_list_single_medium_pane_ParamLimits

0x39ea,	// (0x00029e0f) wml_list_single_medium_pane

0x3a02,	// (0x00029e27) wml_list_single_small_pane_ParamLimits

0x3a02,	// (0x00029e27) wml_list_single_small_pane

0x3a20,	// (0x00029e45) wml_selection_box_pane_ParamLimits

0x3a20,	// (0x00029e45) wml_selection_box_pane

0x3a33,	// (0x00029e58) wml_list_single_pane_t1

0x3a42,	// (0x00029e67) wml_list_single_medium_pane_t1

0x3a51,	// (0x00029e76) wml_list_single_large_pane_t1

0x3a60,	// (0x00029e85) input_focus_pane_cp02_ParamLimits

0x3a60,	// (0x00029e85) input_focus_pane_cp02

0x3a73,	// (0x00029e98) wml_selection_box_pane_g1

0x3a7c,	// (0x00029ea1) wml_selection_box_pane_t1_ParamLimits

0x3a7c,	// (0x00029ea1) wml_selection_box_pane_t1

0x2749,	// (0x00028b6e) bg_wml_button_pane_ParamLimits

0x2749,	// (0x00028b6e) bg_wml_button_pane

0x3a94,	// (0x00029eb9) wml_button_pane_g1

0x3a9c,	// (0x00029ec1) wml_button_pane_t1

0x3a94,	// (0x00029eb9) wml_button_bg_pane_g1

0x3aac,	// (0x00029ed1) wml_button_bg_pane_g2

0x3ab4,	// (0x00029ed9) wml_button_bg_pane_g3

0x3abc,	// (0x00029ee1) wml_button_bg_pane_g4

0x3ac4,	// (0x00029ee9) wml_button_bg_pane_g5

0x3acc,	// (0x00029ef1) wml_button_bg_pane_g6

0x3ad4,	// (0x00029ef9) wml_button_bg_pane_g7

0x3adc,	// (0x00029f01) wml_button_bg_pane_g8

0x3ae4,	// (0x00029f09) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000356bc) wml_button_bg_pane_g

0x3aec,	// (0x00029f11) bg_list_pane_cp02

0x3af4,	// (0x00029f19) mce_header_pane_ParamLimits

0x3af4,	// (0x00029f19) mce_header_pane

0x3b0a,	// (0x00029f2f) mce_icon_pane

0x3b0a,	// (0x00029f2f) mce_image_pane

0x3b13,	// (0x00029f38) mce_text_pane_ParamLimits

0x3b13,	// (0x00029f38) mce_text_pane

0x3b26,	// (0x00029f4b) scroll_pane_cp03

0x39b7,	// (0x00029ddc) scroll_pane_cp04

0x3b30,	// (0x00029f55) scroll_pane_cp05_ParamLimits

0x3b30,	// (0x00029f55) scroll_pane_cp05

0x3b3c,	// (0x00029f61) mce_header_field_pane_ParamLimits

0x3b3c,	// (0x00029f61) mce_header_field_pane

0x3b53,	// (0x00029f78) mce_header_field_pane_2_ParamLimits

0x3b53,	// (0x00029f78) mce_header_field_pane_2

0x3b69,	// (0x00029f8e) mce_header_field_pane_3

0x3b71,	// (0x00029f96) list_single_mce_message_pane_ParamLimits

0x3b71,	// (0x00029f96) list_single_mce_message_pane

0x3b89,	// (0x00029fae) list_single_mce_smart_pane_ParamLimits

0x3b89,	// (0x00029fae) list_single_mce_smart_pane

0x3bac,	// (0x00029fd1) input_focus_pane_cp03

0x3bb5,	// (0x00029fda) list_header_data_pane

0x3bbd,	// (0x00029fe2) mce_header_field_pane_t1

0x3bcd,	// (0x00029ff2) list_single_mce_header_pane_ParamLimits

0x3bcd,	// (0x00029ff2) list_single_mce_header_pane

0x3be1,	// (0x0002a006) list_single_mce_header_pane_t1

0x3bf0,	// (0x0002a015) list_single_mce_message_pane_g1

0x3bf8,	// (0x0002a01d) list_single_mce_message_pane_t1

0x3c24,	// (0x0002a049) bg_cale_heading_pane_cp01_ParamLimits

0x3c24,	// (0x0002a049) bg_cale_heading_pane_cp01

0x3c47,	// (0x0002a06c) bg_cale_pane_cp02_ParamLimits

0x3c47,	// (0x0002a06c) bg_cale_pane_cp02

0x3c6a,	// (0x0002a08f) cale_month_corner_pane

0x3c80,	// (0x0002a0a5) cale_month_day_heading_pane_ParamLimits

0x3c80,	// (0x0002a0a5) cale_month_day_heading_pane

0x3cb3,	// (0x0002a0d8) cale_month_pane_g1_ParamLimits

0x3cb3,	// (0x0002a0d8) cale_month_pane_g1

0x3ccf,	// (0x0002a0f4) cale_month_pane_g2_ParamLimits

0x3ccf,	// (0x0002a0f4) cale_month_pane_g2

0x3cea,	// (0x0002a10f) cale_month_pane_g3_ParamLimits

0x3cea,	// (0x0002a10f) cale_month_pane_g3

0x3d16,	// (0x0002a13b) cale_month_pane_g4_ParamLimits

0x3d16,	// (0x0002a13b) cale_month_pane_g4

0x3d42,	// (0x0002a167) cale_month_pane_g5_ParamLimits

0x3d42,	// (0x0002a167) cale_month_pane_g5

0x3d76,	// (0x0002a19b) cale_month_pane_g6_ParamLimits

0x3d76,	// (0x0002a19b) cale_month_pane_g6

0x3db2,	// (0x0002a1d7) cale_month_pane_g7_ParamLimits

0x3db2,	// (0x0002a1d7) cale_month_pane_g7

0x3dee,	// (0x0002a213) cale_month_pane_g8_ParamLimits

0x3dee,	// (0x0002a213) cale_month_pane_g8

0x3e2a,	// (0x0002a24f) cale_month_pane_g9_ParamLimits

0x3e2a,	// (0x0002a24f) cale_month_pane_g9

0x3e64,	// (0x0002a289) cale_month_pane_g10_ParamLimits

0x3e64,	// (0x0002a289) cale_month_pane_g10

0x3e9e,	// (0x0002a2c3) cale_month_pane_g11_ParamLimits

0x3e9e,	// (0x0002a2c3) cale_month_pane_g11

0x3ed8,	// (0x0002a2fd) cale_month_pane_g12_ParamLimits

0x3ed8,	// (0x0002a2fd) cale_month_pane_g12

0x3f12,	// (0x0002a337) cale_month_pane_g13_ParamLimits

0x3f12,	// (0x0002a337) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000356cf) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000356cf) cale_month_pane_g

0x3f5e,	// (0x0002a383) cale_month_week_pane

0x3f71,	// (0x0002a396) grid_cale_month_pane_ParamLimits

0x3f71,	// (0x0002a396) grid_cale_month_pane

0x3f9f,	// (0x0002a3c4) cale_month_day_heading_pane_t1

0x3ffd,	// (0x0002a422) cale_month_day_heading_pane_t2

0x4062,	// (0x0002a487) cale_month_day_heading_pane_t3

0x40c7,	// (0x0002a4ec) cale_month_day_heading_pane_t4

0x412c,	// (0x0002a551) cale_month_day_heading_pane_t5

0x41a1,	// (0x0002a5c6) cale_month_day_heading_pane_t6

0x4216,	// (0x0002a63b) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000356ea) cale_month_day_heading_pane_t

0x2f26,	// (0x0002934b) bg_cale_side_pane_cp01

0x428b,	// (0x0002a6b0) cale_month_week_pane_t1

0x42a2,	// (0x0002a6c7) cale_month_week_pane_t2

0x42b9,	// (0x0002a6de) cale_month_week_pane_t3

0x42d0,	// (0x0002a6f5) cale_month_week_pane_t4

0x42e7,	// (0x0002a70c) cale_month_week_pane_t5

0x42fe,	// (0x0002a723) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x000356f9) cale_month_week_pane_t

0x4315,	// (0x0002a73a) cell_cale_month_pane_ParamLimits

0x4315,	// (0x0002a73a) cell_cale_month_pane

0xb227,	// (0x0003164c) cell_cale_month_pane_g1

0x0d4c,	// (0x00027171) cell_cale_month_pane_t1_ParamLimits

0x0d4c,	// (0x00027171) cell_cale_month_pane_t1

0x2f65,	// (0x0002938a) grid_highlight_pane_cp08

0x2aec,	// (0x00028f11) main_smil_g1

0x4415,	// (0x0002a83a) smil_status_pane

0x4420,	// (0x0002a845) smil_text_pane

0xbac3,	// (0x00031ee8) bg_popup_call3_rect_pane_g8

0xbacb,	// (0x00031ef0) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000359b2) bg_popup_call3_rect_pane_g

0xbd4d,	// (0x00032172) smil_status_volume_pane_g1

0x4434,	// (0x0002a859) smil_status_pane_t1

0xbd80,	// (0x000321a5) volume_smil_pane

0x444b,	// (0x0002a870) list_smil_text_pane

0x4455,	// (0x0002a87a) scroll_pane_cp011

0x4460,	// (0x0002a885) smil_text_list_pane_t1_ParamLimits

0x4460,	// (0x0002a885) smil_text_list_pane_t1

0xb233,	// (0x00031658) aid_volume_smil_ParamLimits

0xb233,	// (0x00031658) aid_volume_smil

0x2aec,	// (0x00028f11) smil_volume_pane_g1

0x2aec,	// (0x00028f11) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00035719) smil_volume_pane_g

0x2a37,	// (0x00028e5c) listscroll_cale_day_pane

0x44b4,	// (0x0002a8d9) bg_cale_pane

0x44cc,	// (0x0002a8f1) list_cale_pane

0x44dd,	// (0x0002a902) scroll_pane_cp09

0x44ee,	// (0x0002a913) cale_bg_pane_g1

0x44f6,	// (0x0002a91b) cale_bg_pane_g2

0x44fe,	// (0x0002a923) cale_bg_pane_g3

0x4506,	// (0x0002a92b) cale_bg_pane_g4

0x450e,	// (0x0002a933) cale_bg_pane_g5

0x4516,	// (0x0002a93b) cale_bg_pane_g6

0x451e,	// (0x0002a943) cale_bg_pane_g7

0x4526,	// (0x0002a94b) cale_bg_pane_g8

0x452e,	// (0x0002a953) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0003571e) cale_bg_pane_g

0x4536,	// (0x0002a95b) list_cale_time_pane_ParamLimits

0x4536,	// (0x0002a95b) list_cale_time_pane

0x454b,	// (0x0002a970) list_cale_time_pane_g1_ParamLimits

0x454b,	// (0x0002a970) list_cale_time_pane_g1

0x4557,	// (0x0002a97c) list_cale_time_pane_g2_ParamLimits

0x4557,	// (0x0002a97c) list_cale_time_pane_g2

0x4564,	// (0x0002a989) list_cale_time_pane_g3_ParamLimits

0x4564,	// (0x0002a989) list_cale_time_pane_g3

0x4580,	// (0x0002a9a5) list_cale_time_pane_g4_ParamLimits

0x4580,	// (0x0002a9a5) list_cale_time_pane_g4

0x458e,	// (0x0002a9b3) list_cale_time_pane_g5_ParamLimits

0x458e,	// (0x0002a9b3) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00035731) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00035731) list_cale_time_pane_g

0x45a9,	// (0x0002a9ce) list_cale_time_pane_t1_ParamLimits

0x45a9,	// (0x0002a9ce) list_cale_time_pane_t1

0x45d1,	// (0x0002a9f6) list_cale_time_pane_t2_ParamLimits

0x45d1,	// (0x0002a9f6) list_cale_time_pane_t2

0x4d76,	// (0x0002b19b) aid_blid_cardinal_pane

0x4dc0,	// (0x0002b1e5) compass_pane_t4

0x45f9,	// (0x0002aa1e) list_cale_time_pane_t4_ParamLimits

0x45f9,	// (0x0002aa1e) list_cale_time_pane_t4

0x4dce,	// (0x0002b1f3) compass_pane_t5

0x4ddc,	// (0x0002b201) compass_pane_t6

0x4dea,	// (0x0002b20f) compass_pane_t7

0x4e80,	// (0x0002b2a5) navi_pane_cc_t1

0x509d,	// (0x0002b4c2) aid_phob_thumbnail_center_pane

0x5779,	// (0x0002bb9e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0003573e) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0003573e) list_cale_time_pane_t

0x2123,	// (0x00028548) bg_popup_window_pane_cp02_ParamLimits

0x2123,	// (0x00028548) bg_popup_window_pane_cp02

0x4621,	// (0x0002aa46) heading_pane_cp01_ParamLimits

0x4621,	// (0x0002aa46) heading_pane_cp01

0x462d,	// (0x0002aa52) loc_req_pane_ParamLimits

0x462d,	// (0x0002aa52) loc_req_pane

0x463d,	// (0x0002aa62) loc_type_pane_ParamLimits

0x463d,	// (0x0002aa62) loc_type_pane

0x464f,	// (0x0002aa74) loc_type_pane_t1_ParamLimits

0x464f,	// (0x0002aa74) loc_type_pane_t1

0x4661,	// (0x0002aa86) loc_type_pane_t2_ParamLimits

0x4661,	// (0x0002aa86) loc_type_pane_t2

0x4673,	// (0x0002aa98) loc_type_pane_t3_ParamLimits

0x4673,	// (0x0002aa98) loc_type_pane_t3

0x0002,

0xf320,	// (0x00035745) loc_type_pane_t_ParamLimits

0xf320,	// (0x00035745) loc_type_pane_t

0x4685,	// (0x0002aaaa) list_loc_req_pane

0x468f,	// (0x0002aab4) scroll_pane_cp012

0x469a,	// (0x0002aabf) list_single_loc_request_popup_menu_pane_ParamLimits

0x469a,	// (0x0002aabf) list_single_loc_request_popup_menu_pane

0x46a7,	// (0x0002aacc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x46a7,	// (0x0002aacc) list_single_loc_request_popup_menu_pane_g1

0x46b3,	// (0x0002aad8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x46b3,	// (0x0002aad8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0003574c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0003574c) list_single_loc_request_popup_menu_pane_g

0x46bf,	// (0x0002aae4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x46bf,	// (0x0002aae4) list_single_loc_request_popup_menu_pane_t1

0x2749,	// (0x00028b6e) bg_popup_window_pane_cp03_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_window_pane_cp03

0x46d5,	// (0x0002aafa) heading_loc_req_pane_ParamLimits

0x46d5,	// (0x0002aafa) heading_loc_req_pane

0x46e1,	// (0x0002ab06) popup_dyc_status_message_window_g1_ParamLimits

0x46e1,	// (0x0002ab06) popup_dyc_status_message_window_g1

0x46f5,	// (0x0002ab1a) popup_dyc_status_message_window_t1_ParamLimits

0x46f5,	// (0x0002ab1a) popup_dyc_status_message_window_t1

0x470a,	// (0x0002ab2f) popup_dyc_status_message_window_t2_ParamLimits

0x470a,	// (0x0002ab2f) popup_dyc_status_message_window_t2

0x471f,	// (0x0002ab44) popup_dyc_status_message_window_t3_ParamLimits

0x471f,	// (0x0002ab44) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00035751) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00035751) popup_dyc_status_message_window_t

0x24ee,	// (0x00028913) bg_heading_pane_cp01

0x473b,	// (0x0002ab60) heading_loc_req_pane_g1

0x4743,	// (0x0002ab68) heading_loc_req_pane_g2

0x474b,	// (0x0002ab70) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00035758) heading_loc_req_pane_g

0x4753,	// (0x0002ab78) heading_loc_req_pane_t1

0x4849,	// (0x0002ac6e) bg_popup_sub_pane_cp01_ParamLimits

0x4849,	// (0x0002ac6e) bg_popup_sub_pane_cp01

0x4857,	// (0x0002ac7c) popup_cale_events_window_g1_ParamLimits

0x4857,	// (0x0002ac7c) popup_cale_events_window_g1

0x4877,	// (0x0002ac9c) popup_cale_events_window_g2_ParamLimits

0x4877,	// (0x0002ac9c) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0003578c) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0003578c) popup_cale_events_window_g

0x4897,	// (0x0002acbc) popup_cale_events_window_t1_ParamLimits

0x4897,	// (0x0002acbc) popup_cale_events_window_t1

0x48a9,	// (0x0002acce) popup_cale_events_window_t2_ParamLimits

0x48a9,	// (0x0002acce) popup_cale_events_window_t2

0x48e7,	// (0x0002ad0c) popup_cale_events_window_t3_ParamLimits

0x48e7,	// (0x0002ad0c) popup_cale_events_window_t3

0x4921,	// (0x0002ad46) popup_cale_events_window_t4_ParamLimits

0x4921,	// (0x0002ad46) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00035791) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00035791) popup_cale_events_window_t

0x4957,	// (0x0002ad7c) call_type_pane

0x4967,	// (0x0002ad8c) popup_call_status_window_g1

0x497b,	// (0x0002ada0) popup_call_status_window_g2

0x498f,	// (0x0002adb4) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0003579a) popup_call_status_window_g

0x499f,	// (0x0002adc4) call_type_pane_g1

0x49a8,	// (0x0002adcd) call_type_pane_g2

0x0001,

0xf37c,	// (0x000357a1) call_type_pane_g

0x24ee,	// (0x00028913) bg_popup_sub_pane_cp02

0x49b1,	// (0x0002add6) listscroll_popup_wml_pane

0x49b9,	// (0x0002adde) list_wml_pane

0x49c3,	// (0x0002ade8) scroll_pane_cp013

0x49ce,	// (0x0002adf3) list_single_graphic_popup_wml_pane_ParamLimits

0x49ce,	// (0x0002adf3) list_single_graphic_popup_wml_pane

0x2aec,	// (0x00028f11) list_single_graphic_popup_wml_pane_g1

0x49e2,	// (0x0002ae07) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000357a6) list_single_graphic_popup_wml_pane_g

0x49ea,	// (0x0002ae0f) list_single_graphic_popup_wml_pane_t1

0x4a00,	// (0x0002ae25) aid_call_pane

0x2741,	// (0x00028b66) popup_clock_analogue_window_g1

0x2741,	// (0x00028b66) popup_clock_analogue_window_g2

0xb255,	// (0x0003167a) popup_clock_analogue_window_g3

0xb255,	// (0x0003167a) popup_clock_analogue_window_g4

0x2aec,	// (0x00028f11) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000357ab) popup_clock_analogue_window_g

0xb25d,	// (0x00031682) popup_clock_analogue_window_t1

0xb26b,	// (0x00031690) clock_digital_number_pane_ParamLimits

0xb26b,	// (0x00031690) clock_digital_number_pane

0xb277,	// (0x0003169c) clock_digital_number_pane_cp02_ParamLimits

0xb277,	// (0x0003169c) clock_digital_number_pane_cp02

0xb283,	// (0x000316a8) clock_digital_number_pane_cp03_ParamLimits

0xb283,	// (0x000316a8) clock_digital_number_pane_cp03

0xb28f,	// (0x000316b4) clock_digital_number_pane_cp04_ParamLimits

0xb28f,	// (0x000316b4) clock_digital_number_pane_cp04

0xb29b,	// (0x000316c0) clock_digital_separator_pane_ParamLimits

0xb29b,	// (0x000316c0) clock_digital_separator_pane

0xb2a7,	// (0x000316cc) popup_clock_digital_window_t1

0x2aec,	// (0x00028f11) clock_digital_number_pane_g1

0x2aec,	// (0x00028f11) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00035719) clock_digital_number_pane_g

0x2aec,	// (0x00028f11) clock_digital_separator_pane_g1

0x2aec,	// (0x00028f11) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00035719) clock_digital_separator_pane_g

0x24ee,	// (0x00028913) bg_popup_window_pane_cp04

0x4a08,	// (0x0002ae2d) heading_pane_cp03

0x4a10,	// (0x0002ae35) listscroll_popup_gms_pane

0x4a18,	// (0x0002ae3d) grid_large_graphic_popup_pane

0x4a22,	// (0x0002ae47) listscroll_popup_gms_pane_g1

0x4a2a,	// (0x0002ae4f) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000357b6) listscroll_popup_gms_pane_g

0x39b7,	// (0x00029ddc) scroll_pane_cp014

0x4a32,	// (0x0002ae57) cell_large_graphic_popup_pane_ParamLimits

0x4a32,	// (0x0002ae57) cell_large_graphic_popup_pane

0x4a4a,	// (0x0002ae6f) cell_large_graphic_popup_pane_g1_ParamLimits

0x4a4a,	// (0x0002ae6f) cell_large_graphic_popup_pane_g1

0x4a56,	// (0x0002ae7b) cell_large_graphic_popup_pane_g2_ParamLimits

0x4a56,	// (0x0002ae7b) cell_large_graphic_popup_pane_g2

0x4a62,	// (0x0002ae87) cell_large_graphic_popup_pane_g3_ParamLimits

0x4a62,	// (0x0002ae87) cell_large_graphic_popup_pane_g3

0x4a6f,	// (0x0002ae94) cell_large_graphic_popup_pane_g4_ParamLimits

0x4a6f,	// (0x0002ae94) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000357bb) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000357bb) cell_large_graphic_popup_pane_g

0x4a7f,	// (0x0002aea4) grid_highlight_pane_cp010

0x2aec,	// (0x00028f11) bg_popup_call_pane_g1

0x4a89,	// (0x0002aeae) list_single_graphic_popup_conf_pane_ParamLimits

0x4a89,	// (0x0002aeae) list_single_graphic_popup_conf_pane

0x4a9b,	// (0x0002aec0) list_highlight_pane_cp01

0x4aa4,	// (0x0002aec9) list_single_graphic_popup_conf_pane_g1

0x4aac,	// (0x0002aed1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000357c4) list_single_graphic_popup_conf_pane_g

0x4ab4,	// (0x0002aed9) list_single_graphic_popup_conf_pane_t1

0x4ac2,	// (0x0002aee7) linegrid_cams_pane_g1

0x4acb,	// (0x0002aef0) linegrid_cams_pane_g2

0x2c56,	// (0x0002907b) linegrid_cams_pane_g3

0x4ad4,	// (0x0002aef9) linegrid_cams_pane_g4

0x4add,	// (0x0002af02) linegrid_cams_pane_g5

0x4ae6,	// (0x0002af0b) linegrid_cams_pane_g6

0x2fbd,	// (0x000293e2) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000357c9) linegrid_cams_pane_g

0x4af1,	// (0x0002af16) popup_clock_analogue_window

0x4af1,	// (0x0002af16) popup_clock_digital_window

0x24ee,	// (0x00028913) popup_phob_thumbnail_window

0x2aec,	// (0x00028f11) call_video_uplink_pane_g1

0x4afa,	// (0x0002af1f) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000357d8) call_video_uplink_pane_g

0x2f65,	// (0x0002938a) video_uplink_pane

0x4b02,	// (0x0002af27) mce_image_pane_g1

0x4b0c,	// (0x0002af31) mce_image_pane_g2

0x4b14,	// (0x0002af39) mce_image_pane_g3

0x4b1c,	// (0x0002af41) mce_image_pane_g4

0x4b24,	// (0x0002af49) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000357dd) mce_image_pane_g

0x4b2c,	// (0x0002af51) control_top_pane_stacon_cp01_ParamLimits

0x4b2c,	// (0x0002af51) control_top_pane_stacon_cp01

0x4b40,	// (0x0002af65) uni_indicator_pane_stacon_cp01_ParamLimits

0x4b40,	// (0x0002af65) uni_indicator_pane_stacon_cp01

0x4b51,	// (0x0002af76) bg_popup_sub_pane_cp03

0x4b5b,	// (0x0002af80) chi_dic_find_pane

0x4b63,	// (0x0002af88) listscroll_chi_dic_pane

0x4b6c,	// (0x0002af91) main_pane_chidic_g1

0x4b7f,	// (0x0002afa4) chi_dic_find_pane_t1

0x4b8d,	// (0x0002afb2) find_chidic_pane

0x4b96,	// (0x0002afbb) chi_dic_list_pane_ParamLimits

0x4b96,	// (0x0002afbb) chi_dic_list_pane

0x4ba7,	// (0x0002afcc) scroll_pane_cp020

0x4baf,	// (0x0002afd4) find_chidic_pane_t1

0x24ee,	// (0x00028913) input_focus_pane_cp06

0x4bbe,	// (0x0002afe3) list_chi_dic_pane_ParamLimits

0x4bbe,	// (0x0002afe3) list_chi_dic_pane

0x4bd2,	// (0x0002aff7) list_chi_dic_pane_t1_ParamLimits

0x4bd2,	// (0x0002aff7) list_chi_dic_pane_t1

0x24ee,	// (0x00028913) list_highlight_pane_cp020

0x4be5,	// (0x0002b00a) bg_cale_heading_pane_g1

0x4bed,	// (0x0002b012) bg_cale_heading_pane_g2

0x4bf5,	// (0x0002b01a) bg_cale_heading_pane_g3

0x4bfd,	// (0x0002b022) bg_cale_heading_pane_g4

0x4c07,	// (0x0002b02c) bg_cale_heading_pane_g5

0x4c11,	// (0x0002b036) bg_cale_heading_pane_g6

0x4c19,	// (0x0002b03e) bg_cale_heading_pane_g7

0x4c21,	// (0x0002b046) bg_cale_heading_pane_g8

0x4c2b,	// (0x0002b050) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000357e8) bg_cale_heading_pane_g

0x4be5,	// (0x0002b00a) bg_cale_side_pane_g1

0x4c35,	// (0x0002b05a) bg_cale_side_pane_g2

0x4c3d,	// (0x0002b062) bg_cale_side_pane_g3

0x4c45,	// (0x0002b06a) bg_cale_side_pane_g4

0x4c4d,	// (0x0002b072) bg_cale_side_pane_g5

0x4c55,	// (0x0002b07a) bg_cale_side_pane_g6

0x4c5d,	// (0x0002b082) bg_cale_side_pane_g7

0x4c65,	// (0x0002b08a) bg_cale_side_pane_g8

0x4c6d,	// (0x0002b092) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x000357fb) bg_cale_side_pane_g

0x4c75,	// (0x0002b09a) popup_call_status_window_ParamLimits

0x4c75,	// (0x0002b09a) popup_call_status_window

0x4cbc,	// (0x0002b0e1) stacon_top_pane

0x4cc4,	// (0x0002b0e9) status_pane_ParamLimits

0x4cc4,	// (0x0002b0e9) status_pane

0x4cd9,	// (0x0002b0fe) status_small_pane

0x4ce1,	// (0x0002b106) control_pane

0x24ee,	// (0x00028913) stacon_bottom_pane

0x4ce9,	// (0x0002b10e) list_single_mce_smart_pane_t1_ParamLimits

0x4ce9,	// (0x0002b10e) list_single_mce_smart_pane_t1

0x4cfc,	// (0x0002b121) list_single_mce_smart_pane_t2_ParamLimits

0x4cfc,	// (0x0002b121) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0003580e) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0003580e) list_single_mce_smart_pane_t

0x4d1b,	// (0x0002b140) compass_pane

0x4d24,	// (0x0002b149) main_location2_pane_t1

0x4d38,	// (0x0002b15d) main_location2_pane_t2

0x4d4c,	// (0x0002b171) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00035813) main_location2_pane_t

0x4d96,	// (0x0002b1bb) compass_pane_g1_ParamLimits

0x4d96,	// (0x0002b1bb) compass_pane_g1

0x4da2,	// (0x0002b1c7) compass_pane_t1

0x4db1,	// (0x0002b1d6) compass_pane_t2

0x0005,

0xf3f7,	// (0x0003581c) compass_pane_t

0x4df8,	// (0x0002b21d) text_secondary_cp61

0x4e77,	// (0x0002b29c) navi_pane_cams_g5

0x4ef1,	// (0x0002b316) navi_pane_im_t1

0x4eff,	// (0x0002b324) navi_pane_mp_g1_ParamLimits

0x4eff,	// (0x0002b324) navi_pane_mp_g1

0x4f13,	// (0x0002b338) navi_pane_mp_g2_ParamLimits

0x4f13,	// (0x0002b338) navi_pane_mp_g2

0x4f1f,	// (0x0002b344) navi_pane_mp_g3_ParamLimits

0x4f1f,	// (0x0002b344) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00035830) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00035830) navi_pane_mp_g

0x4f2b,	// (0x0002b350) navi_pane_mp_t1

0x4f39,	// (0x0002b35e) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00035837) navi_pane_mp_t

0x4fe6,	// (0x0002b40b) navi_pane_vt_g1

0x4f2b,	// (0x0002b350) navi_pane_vt_t1

0x4fee,	// (0x0002b413) navi_slider_pane

0x4ff6,	// (0x0002b41b) zooming_pane

0x4ffe,	// (0x0002b423) navi_slider_pane_g1

0xb2c4,	// (0x000316e9) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0003583e) navi_slider_pane_g

0x5022,	// (0x0002b447) aid_levels_zoom

0x502a,	// (0x0002b44f) zooming_pane_g1

0x5032,	// (0x0002b457) zooming_pane_g2

0x5032,	// (0x0002b457) zooming_pane_g3

0x0002,

0xf428,	// (0x0003584d) zooming_pane_g

0x503a,	// (0x0002b45f) level_10_zoom

0x5043,	// (0x0002b468) level_11_zoom

0x504c,	// (0x0002b471) level_1_zoom

0x5055,	// (0x0002b47a) level_2_zoom

0x505e,	// (0x0002b483) level_3_zoom

0x5067,	// (0x0002b48c) level_4_zoom

0x5070,	// (0x0002b495) level_5_zoom

0x5079,	// (0x0002b49e) level_6_zoom

0x5082,	// (0x0002b4a7) level_7_zoom

0x508b,	// (0x0002b4b0) level_8_zoom

0x5094,	// (0x0002b4b9) level_9_zoom

0x50a5,	// (0x0002b4ca) popup_phob_thumbnail_window_g1

0x50ad,	// (0x0002b4d2) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00035854) popup_phob_thumbnail_window_g

0xbc2d,	// (0x00032052) level_1_location

0xbc35,	// (0x0003205a) level_2_location

0xbc3d,	// (0x00032062) level_3_location

0xbc45,	// (0x0003206a) level_4_location

0x4ff6,	// (0x0002b41b) level_5_location

0x50b5,	// (0x0002b4da) mce_icon_pane_g1

0x50bd,	// (0x0002b4e2) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00035859) mce_icon_pane_g

0x50c5,	// (0x0002b4ea) main_mup_pane_g1_ParamLimits

0x50c5,	// (0x0002b4ea) main_mup_pane_g1

0x50db,	// (0x0002b500) main_mup_pane_g2_ParamLimits

0x50db,	// (0x0002b500) main_mup_pane_g2

0x50f3,	// (0x0002b518) main_mup_pane_g3_ParamLimits

0x50f3,	// (0x0002b518) main_mup_pane_g3

0x510b,	// (0x0002b530) main_mup_pane_g4_ParamLimits

0x510b,	// (0x0002b530) main_mup_pane_g4

0x5123,	// (0x0002b548) main_mup_pane_g5_ParamLimits

0x5123,	// (0x0002b548) main_mup_pane_g5

0x513f,	// (0x0002b564) main_mup_pane_g6_ParamLimits

0x513f,	// (0x0002b564) main_mup_pane_g6

0x5157,	// (0x0002b57c) main_mup_pane_g7_ParamLimits

0x5157,	// (0x0002b57c) main_mup_pane_g7

0x516f,	// (0x0002b594) main_mup_pane_g8_ParamLimits

0x516f,	// (0x0002b594) main_mup_pane_g8

0x5187,	// (0x0002b5ac) main_mup_pane_g9_ParamLimits

0x5187,	// (0x0002b5ac) main_mup_pane_g9

0x51a1,	// (0x0002b5c6) main_mup_pane_g10_ParamLimits

0x51a1,	// (0x0002b5c6) main_mup_pane_g10

0x51bb,	// (0x0002b5e0) main_mup_pane_g11_ParamLimits

0x51bb,	// (0x0002b5e0) main_mup_pane_g11

0x51cf,	// (0x0002b5f4) main_mup_pane_g12_ParamLimits

0x51cf,	// (0x0002b5f4) main_mup_pane_g12

0x51e5,	// (0x0002b60a) main_mup_pane_g13_ParamLimits

0x51e5,	// (0x0002b60a) main_mup_pane_g13

0x000c,

0xf439,	// (0x0003585e) main_mup_pane_g_ParamLimits

0xf439,	// (0x0003585e) main_mup_pane_g

0x51f9,	// (0x0002b61e) main_mup_pane_t1_ParamLimits

0x51f9,	// (0x0002b61e) main_mup_pane_t1

0x5213,	// (0x0002b638) main_mup_pane_t2_ParamLimits

0x5213,	// (0x0002b638) main_mup_pane_t2

0x522b,	// (0x0002b650) main_mup_pane_t3_ParamLimits

0x522b,	// (0x0002b650) main_mup_pane_t3

0x5243,	// (0x0002b668) main_mup_pane_t4_ParamLimits

0x5243,	// (0x0002b668) main_mup_pane_t4

0x5261,	// (0x0002b686) main_mup_pane_t5_ParamLimits

0x5261,	// (0x0002b686) main_mup_pane_t5

0x5276,	// (0x0002b69b) main_mup_pane_t6_ParamLimits

0x5276,	// (0x0002b69b) main_mup_pane_t6

0x0005,

0xf454,	// (0x00035879) main_mup_pane_t_ParamLimits

0xf454,	// (0x00035879) main_mup_pane_t

0x5288,	// (0x0002b6ad) mup_progress_pane_ParamLimits

0x5288,	// (0x0002b6ad) mup_progress_pane

0x5294,	// (0x0002b6b9) mup_visualizer_pane_ParamLimits

0x5294,	// (0x0002b6b9) mup_visualizer_pane

0x52c8,	// (0x0002b6ed) mup_volume_pane_ParamLimits

0x52c8,	// (0x0002b6ed) mup_volume_pane

0x52e6,	// (0x0002b70b) mup_visualizer_pane_g1_ParamLimits

0x52e6,	// (0x0002b70b) mup_visualizer_pane_g1

0x52e6,	// (0x0002b70b) mup_visualizer_pane_g2_ParamLimits

0x52e6,	// (0x0002b70b) mup_visualizer_pane_g2

0x4d96,	// (0x0002b1bb) mup_visualizer_pane_g3_ParamLimits

0x4d96,	// (0x0002b1bb) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00035886) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00035886) mup_visualizer_pane_g

0x2aec,	// (0x00028f11) mup_volume_pane_g1

0x52fc,	// (0x0002b721) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0003588d) mup_volume_pane_g

0x2aec,	// (0x00028f11) mup_progress_pane_g1

0x5305,	// (0x0002b72a) mup_progress_pane_g2

0x530e,	// (0x0002b733) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x00035892) mup_progress_pane_g

0x24ee,	// (0x00028913) bg_popup_window_pane_cp05

0x5317,	// (0x0002b73c) heading_pane_cp02_ParamLimits

0x5317,	// (0x0002b73c) heading_pane_cp02

0x5331,	// (0x0002b756) list_popup_blid_pane

0x5339,	// (0x0002b75e) list_blid_sat_info_pane_ParamLimits

0x5339,	// (0x0002b75e) list_blid_sat_info_pane

0x534c,	// (0x0002b771) list_blid_sat_info_pane_g1

0x5354,	// (0x0002b779) list_blid_sat_info_pane_t1

0x546a,	// (0x0002b88f) mup_equalizer_pane_ParamLimits

0x546a,	// (0x0002b88f) mup_equalizer_pane

0x5483,	// (0x0002b8a8) mup_equalizer_pane_cp1_ParamLimits

0x5483,	// (0x0002b8a8) mup_equalizer_pane_cp1

0x54a0,	// (0x0002b8c5) mup_equalizer_pane_cp2_ParamLimits

0x54a0,	// (0x0002b8c5) mup_equalizer_pane_cp2

0x54bd,	// (0x0002b8e2) mup_equalizer_pane_cp3_ParamLimits

0x54bd,	// (0x0002b8e2) mup_equalizer_pane_cp3

0x54de,	// (0x0002b903) mup_equalizer_pane_cp4_ParamLimits

0x54de,	// (0x0002b903) mup_equalizer_pane_cp4

0x54ff,	// (0x0002b924) mup_equalizer_pane_cp5

0x5513,	// (0x0002b938) mup_equalizer_pane_cp6

0x5527,	// (0x0002b94c) mup_equalizer_pane_cp7

0xbb4b,	// (0x00031f70) bg_popup_call_poc_act_pane_g9

0xbb53,	// (0x00031f78) bg_popup_call_poc_act_pane_g10

0xbb5b,	// (0x00031f80) bg_popup_call_poc_act_pane_g11

0x000a,

0x2749,	// (0x00028b6e) mup_scale_pane

0x2aec,	// (0x00028f11) mup_scale_pane_g1

0x553b,	// (0x0002b960) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000358ae) mup_scale_pane_g

0x5571,	// (0x0002b996) msg_data_pane

0x5579,	// (0x0002b99e) scroll_pane_cp017

0x5581,	// (0x0002b9a6) bg_list_pane_cp04_ParamLimits

0x5581,	// (0x0002b9a6) bg_list_pane_cp04

0x55a1,	// (0x0002b9c6) msg_data_pane_g1

0x55a9,	// (0x0002b9ce) msg_data_pane_g2

0x4b14,	// (0x0002af39) msg_data_pane_g3

0x55b1,	// (0x0002b9d6) msg_data_pane_g4

0x55b9,	// (0x0002b9de) msg_data_pane_g5

0x55c1,	// (0x0002b9e6) msg_data_pane_g6

0x55c9,	// (0x0002b9ee) msg_data_pane_g7

0x0006,

0xf498,	// (0x000358bd) msg_data_pane_g

0x55d1,	// (0x0002b9f6) msg_text_pane_ParamLimits

0x55d1,	// (0x0002b9f6) msg_text_pane

0x55fa,	// (0x0002ba1f) qrid_highlight_pane_cp011_ParamLimits

0x55fa,	// (0x0002ba1f) qrid_highlight_pane_cp011

0x24ee,	// (0x00028913) msg_body_pane

0x24ee,	// (0x00028913) msg_header_pane

0x5619,	// (0x0002ba3e) input_focus_pane_cp07

0x563c,	// (0x0002ba61) msg_header_pane_t1_ParamLimits

0x563c,	// (0x0002ba61) msg_header_pane_t1

0x5650,	// (0x0002ba75) msg_header_pane_t2_ParamLimits

0x5650,	// (0x0002ba75) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000358d1) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000358d1) msg_header_pane_t

0x5662,	// (0x0002ba87) msg_body_pane_g1

0x566a,	// (0x0002ba8f) msg_body_pane_t1_ParamLimits

0x566a,	// (0x0002ba8f) msg_body_pane_t1

0x569b,	// (0x0002bac0) msg_body_pane_t2_ParamLimits

0x569b,	// (0x0002bac0) msg_body_pane_t2

0x56ad,	// (0x0002bad2) msg_body_pane_t3_ParamLimits

0x56ad,	// (0x0002bad2) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000358d6) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000358d6) msg_body_pane_t

0x0d84,	// (0x000271a9) main_viewer_pane_g1_ParamLimits

0x0d84,	// (0x000271a9) main_viewer_pane_g1

0x0d92,	// (0x000271b7) main_viewer_pane_g2_ParamLimits

0x0d92,	// (0x000271b7) main_viewer_pane_g2

0x56dd,	// (0x0002bb02) main_viewer_pane_g3_ParamLimits

0x56dd,	// (0x0002bb02) main_viewer_pane_g3

0x56ec,	// (0x0002bb11) main_viewer_pane_g4_ParamLimits

0x56ec,	// (0x0002bb11) main_viewer_pane_g4

0xb2ee,	// (0x00031713) main_viewer_pane_g5_ParamLimits

0xb2ee,	// (0x00031713) main_viewer_pane_g5

0xb2ee,	// (0x00031713) main_viewer_pane_g7_ParamLimits

0xb2ee,	// (0x00031713) main_viewer_pane_g7

0xb300,	// (0x00031725) main_viewer_pane_g8_ParamLimits

0xb300,	// (0x00031725) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000358e6) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000358e6) main_viewer_pane_g

0x56fb,	// (0x0002bb20) viewer_content_pane_ParamLimits

0x56fb,	// (0x0002bb20) viewer_content_pane

0x5736,	// (0x0002bb5b) main_postcard_pane_g1_ParamLimits

0x5736,	// (0x0002bb5b) main_postcard_pane_g1

0x574c,	// (0x0002bb71) main_postcard_pane_g2_ParamLimits

0x574c,	// (0x0002bb71) main_postcard_pane_g2

0x5762,	// (0x0002bb87) main_postcard_pane_g3_ParamLimits

0x5762,	// (0x0002bb87) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x000358f7) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x000358f7) main_postcard_pane_g

0x5779,	// (0x0002bb9e) main_postcard_pane_g4

0xbd60,	// (0x00032185) smil_status_volume_pane_g2

0x57bc,	// (0x0002bbe1) postcard_pane_ParamLimits

0x57bc,	// (0x0002bbe1) postcard_pane

0x57fe,	// (0x0002bc23) postcard_pane_g1_ParamLimits

0x57fe,	// (0x0002bc23) postcard_pane_g1

0x580c,	// (0x0002bc31) postcard_pane_g2_ParamLimits

0x580c,	// (0x0002bc31) postcard_pane_g2

0x5818,	// (0x0002bc3d) postcard_pane_g3_ParamLimits

0x5818,	// (0x0002bc3d) postcard_pane_g3

0x5824,	// (0x0002bc49) postcard_pane_g4_ParamLimits

0x5824,	// (0x0002bc49) postcard_pane_g4

0x5832,	// (0x0002bc57) postcard_pane_g5_ParamLimits

0x5832,	// (0x0002bc57) postcard_pane_g5

0x5847,	// (0x0002bc6c) postcard_pane_g6_ParamLimits

0x5847,	// (0x0002bc6c) postcard_pane_g6

0x57fe,	// (0x0002bc23) postcard_pane_g7_ParamLimits

0x57fe,	// (0x0002bc23) postcard_pane_g7

0x0006,

0xf4df,	// (0x00035904) postcard_pane_g_ParamLimits

0xf4df,	// (0x00035904) postcard_pane_g

0x585b,	// (0x0002bc80) main_mp2_pane_g1_ParamLimits

0x585b,	// (0x0002bc80) main_mp2_pane_g1

0x5867,	// (0x0002bc8c) main_mp2_pane_g2_ParamLimits

0x5867,	// (0x0002bc8c) main_mp2_pane_g2

0x5873,	// (0x0002bc98) main_mp2_pane_g3_ParamLimits

0x5873,	// (0x0002bc98) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00035913) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00035913) main_mp2_pane_g

0x587f,	// (0x0002bca4) main_mp2_pane_t1_ParamLimits

0x587f,	// (0x0002bca4) main_mp2_pane_t1

0x5894,	// (0x0002bcb9) main_mp2_pane_t2_ParamLimits

0x5894,	// (0x0002bcb9) main_mp2_pane_t2

0x58a6,	// (0x0002bccb) main_mp2_pane_t3_ParamLimits

0x58a6,	// (0x0002bccb) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0003591a) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0003591a) main_mp2_pane_t

0x58b8,	// (0x0002bcdd) pec_content_pane_ParamLimits

0x58b8,	// (0x0002bcdd) pec_content_pane

0x39b7,	// (0x00029ddc) scroll_pane_cp015

0x58ca,	// (0x0002bcef) pec_attribute_pane_ParamLimits

0x58ca,	// (0x0002bcef) pec_attribute_pane

0x58da,	// (0x0002bcff) pec_content_pane_g1_ParamLimits

0x58da,	// (0x0002bcff) pec_content_pane_g1

0x58e8,	// (0x0002bd0d) pec_content_pane_t1_ParamLimits

0x58e8,	// (0x0002bd0d) pec_content_pane_t1

0x58fa,	// (0x0002bd1f) pec_content_pane_t2_ParamLimits

0x58fa,	// (0x0002bd1f) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00035921) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00035921) pec_content_pane_t

0x590c,	// (0x0002bd31) list_single_graphic_pane_cp01_ParamLimits

0x590c,	// (0x0002bd31) list_single_graphic_pane_cp01

0x2749,	// (0x00028b6e) bg_popup_sub_pane_cp04

0x5924,	// (0x0002bd49) popup_mup_playback_window_g1

0x5930,	// (0x0002bd55) popup_mup_playback_window_t1

0x5945,	// (0x0002bd6a) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00035926) popup_mup_playback_window_t

0x599a,	// (0x0002bdbf) main_image_pane_g1_ParamLimits

0x599a,	// (0x0002bdbf) main_image_pane_g1

0x5a77,	// (0x0002be9c) scroll_pane_cp018_ParamLimits

0x5a77,	// (0x0002be9c) scroll_pane_cp018

0x5a8f,	// (0x0002beb4) scroll_pane_cp016_ParamLimits

0x5a8f,	// (0x0002beb4) scroll_pane_cp016

0x5ac3,	// (0x0002bee8) smil2_image_pane_ParamLimits

0x5ac3,	// (0x0002bee8) smil2_image_pane

0x5af7,	// (0x0002bf1c) smil2_root_pane_ParamLimits

0x5af7,	// (0x0002bf1c) smil2_root_pane

0x5b2f,	// (0x0002bf54) smil2_text_pane_ParamLimits

0x5b2f,	// (0x0002bf54) smil2_text_pane

0x24ee,	// (0x00028913) bg_list_pane_cp06

0x5bb7,	// (0x0002bfdc) grid_radio_pane

0x24ee,	// (0x00028913) bg_popup_window_pane_cp06

0x5bbf,	// (0x0002bfe4) main_fmradio_pane_t1

0x4a08,	// (0x0002ae2d) heading_pane_cp04

0x5bcd,	// (0x0002bff2) main_fmradio_pane_t2

0xbb63,	// (0x00031f88) popup_cale_lunar_info_window_g1

0x5bdb,	// (0x0002c000) main_fmradio_pane_t3

0xbb6b,	// (0x00031f90) popup_cale_lunar_info_window_g2

0x5be9,	// (0x0002c00e) main_fmradio_pane_t4

0x0001,

0x5bf7,	// (0x0002c01c) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00035a01) popup_cale_lunar_info_window_g

0xf516,	// (0x0003593b) main_fmradio_pane_t

0x5c05,	// (0x0002c02a) wait_bar_pane_cp03

0x5c0d,	// (0x0002c032) cell_fmradio_pane_ParamLimits

0x5c0d,	// (0x0002c032) cell_fmradio_pane

0x57fe,	// (0x0002bc23) cell_fmradio_pane_g1_ParamLimits

0x57fe,	// (0x0002bc23) cell_fmradio_pane_g1

0x24ee,	// (0x00028913) grid_highlight_pane_cp011

0x5c20,	// (0x0002c045) poc_content_pane_ParamLimits

0x5c20,	// (0x0002c045) poc_content_pane

0x5c32,	// (0x0002c057) scroll_pane_cp019

0x5c3a,	// (0x0002c05f) popup_call_poc_act_window_ParamLimits

0x5c3a,	// (0x0002c05f) popup_call_poc_act_window

0x5c5e,	// (0x0002c083) popup_call_poc_inact_window_ParamLimits

0x5c5e,	// (0x0002c083) popup_call_poc_inact_window

0xf5b3,	// (0x000359d8) bg_popup_call_poc_act_pane_g

0xbad3,	// (0x00031ef8) bg_popup_call_poc_inact_pane_g1

0xbadb,	// (0x00031f00) bg_popup_call_poc_inact_pane_g2

0x5c77,	// (0x0002c09c) popup_call_poc_act_window_g2

0xbae3,	// (0x00031f08) bg_popup_call_poc_inact_pane_g3

0xbaeb,	// (0x00031f10) bg_popup_call_poc_inact_pane_g4

0xbaf3,	// (0x00031f18) bg_popup_call_poc_inact_pane_g5

0x5c7f,	// (0x0002c0a4) popup_call_poc_act_window_t1_ParamLimits

0x5c7f,	// (0x0002c0a4) popup_call_poc_act_window_t1

0x5ca7,	// (0x0002c0cc) popup_call_poc_act_window_t2_ParamLimits

0x5ca7,	// (0x0002c0cc) popup_call_poc_act_window_t2

0x5ccf,	// (0x0002c0f4) popup_call_poc_act_window_t3_ParamLimits

0x5ccf,	// (0x0002c0f4) popup_call_poc_act_window_t3

0x5cf7,	// (0x0002c11c) popup_call_poc_act_window_t4_ParamLimits

0x5cf7,	// (0x0002c11c) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00035946) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00035946) popup_call_poc_act_window_t

0xbafb,	// (0x00031f20) bg_popup_call_poc_inact_pane_g6

0xbb03,	// (0x00031f28) bg_popup_call_poc_inact_pane_g7

0xbb0b,	// (0x00031f30) bg_popup_call_poc_inact_pane_g8

0x5d09,	// (0x0002c12e) popup_call_poc_inact_window_g2

0xbb13,	// (0x00031f38) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000359c5) bg_popup_call_poc_inact_pane_g

0x5d11,	// (0x0002c136) popup_call_poc_inact_window_t1_ParamLimits

0x5d11,	// (0x0002c136) popup_call_poc_inact_window_t1

0x5d26,	// (0x0002c14b) popup_call_poc_inact_window_t2_ParamLimits

0x5d26,	// (0x0002c14b) popup_call_poc_inact_window_t2

0x5d3b,	// (0x0002c160) popup_call_poc_inact_window_t3_ParamLimits

0x5d3b,	// (0x0002c160) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0003594f) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0003594f) popup_call_poc_inact_window_t

0xbcd3,	// (0x000320f8) context_pane_ParamLimits

0x6ba8,	// (0x0002cfcd) signal_pane_ParamLimits

0x4ff6,	// (0x0002b41b) main_call2_pane

0xbcc1,	// (0x000320e6) popup_phob_thumbnail2_window_ParamLimits

0xbcc1,	// (0x000320e6) popup_phob_thumbnail2_window

0xb2d6,	// (0x000316fb) aid_hotspot_pointer_arrow_pane

0xb2de,	// (0x00031703) aid_hotspot_pointer_hand_pane

0x66cc,	// (0x0002caf1) phob_pre_status_pane_g5

0x3003,	// (0x00029428) cams_zoom_pane_ParamLimits

0x3012,	// (0x00029437) image_vga_pane_ParamLimits

0x302c,	// (0x00029451) main_camera_pane_g1_ParamLimits

0x303e,	// (0x00029463) main_camera_pane_g2_ParamLimits

0x3050,	// (0x00029475) main_camera_pane_g3_ParamLimits

0x3062,	// (0x00029487) main_camera_pane_g4_ParamLimits

0x3074,	// (0x00029499) main_camera_pane_g5_ParamLimits

0x3086,	// (0x000294ab) main_camera_pane_g6_ParamLimits

0x3098,	// (0x000294bd) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0003564e) main_camera_pane_g_ParamLimits

0x30b6,	// (0x000294db) main_camera_pane_t1_ParamLimits

0x30cc,	// (0x000294f1) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0003565f) main_camera_pane_t_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_preview_window_pane_cp01_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_preview_window_pane_cp01

0x5d50,	// (0x0002c175) popup_phob_thumbnail2_window_g1_ParamLimits

0x5d50,	// (0x0002c175) popup_phob_thumbnail2_window_g1

0x24ee,	// (0x00028913) call2_cli_visual_pane

0x5d77,	// (0x0002c19c) popup_call2_audio_conf_window_ParamLimits

0x5d77,	// (0x0002c19c) popup_call2_audio_conf_window

0x5d97,	// (0x0002c1bc) popup_call2_audio_first_window_ParamLimits

0x5d97,	// (0x0002c1bc) popup_call2_audio_first_window

0x5e2d,	// (0x0002c252) popup_call2_audio_in_window_ParamLimits

0x5e2d,	// (0x0002c252) popup_call2_audio_in_window

0x5e75,	// (0x0002c29a) popup_call2_audio_out_window_ParamLimits

0x5e75,	// (0x0002c29a) popup_call2_audio_out_window

0x5edf,	// (0x0002c304) popup_call2_audio_second_window_ParamLimits

0x5edf,	// (0x0002c304) popup_call2_audio_second_window

0x5f45,	// (0x0002c36a) popup_call2_audio_wait_window_ParamLimits

0x5f45,	// (0x0002c36a) popup_call2_audio_wait_window

0x24ee,	// (0x00028913) bg_popup_call2_act_pane_cp03

0x272b,	// (0x00028b50) list_conf_pane_cp

0x5f7f,	// (0x0002c3a4) popup_call2_audio_conf_window_t1

0x5f8d,	// (0x0002c3b2) list_single_graphic_popup_conf2_pane_ParamLimits

0x5f8d,	// (0x0002c3b2) list_single_graphic_popup_conf2_pane

0x4a9b,	// (0x0002aec0) list_highlight_pane_cp04

0x5fa0,	// (0x0002c3c5) list_single_graphic_popup_conf2_pane_g1

0x4aac,	// (0x0002aed1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00035956) list_single_graphic_popup_conf2_pane_g

0x5faa,	// (0x0002c3cf) list_single_graphic_popup_conf2_pane_t1

0x5fb8,	// (0x0002c3dd) bg_popup_call2_act_pane_cp01_ParamLimits

0x5fb8,	// (0x0002c3dd) bg_popup_call2_act_pane_cp01

0x6042,	// (0x0002c467) call_type_pane_cp05_ParamLimits

0x6042,	// (0x0002c467) call_type_pane_cp05

0x6096,	// (0x0002c4bb) popup_call2_audio_second_window_g1_ParamLimits

0x6096,	// (0x0002c4bb) popup_call2_audio_second_window_g1

0x60ea,	// (0x0002c50f) popup_call2_audio_second_window_g2_ParamLimits

0x60ea,	// (0x0002c50f) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0003595b) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0003595b) popup_call2_audio_second_window_g

0x614f,	// (0x0002c574) popup_call2_audio_second_window_t1_ParamLimits

0x614f,	// (0x0002c574) popup_call2_audio_second_window_t1

0x620a,	// (0x0002c62f) popup_call2_audio_second_window_t2_ParamLimits

0x620a,	// (0x0002c62f) popup_call2_audio_second_window_t2

0x625d,	// (0x0002c682) popup_call2_audio_second_window_t3_ParamLimits

0x625d,	// (0x0002c682) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00035962) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00035962) popup_call2_audio_second_window_t

0x24ee,	// (0x00028913) bg_popup_call2_in_pane_cp02

0x24f8,	// (0x0002891d) call_type_pane_cp04

0x2500,	// (0x00028925) popup_call2_audio_wait_window_g1

0x2508,	// (0x0002892d) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0003553b) popup_call2_audio_wait_window_g

0x2510,	// (0x00028935) popup_call2_audio_wait_window_t3

0x6350,	// (0x0002c775) bg_popup_call2_act_pane_ParamLimits

0x6350,	// (0x0002c775) bg_popup_call2_act_pane

0x6410,	// (0x0002c835) call_type_pane_cp03_ParamLimits

0x6410,	// (0x0002c835) call_type_pane_cp03

0x6474,	// (0x0002c899) popup_call2_audio_first_window_g1_ParamLimits

0x6474,	// (0x0002c899) popup_call2_audio_first_window_g1

0x64e4,	// (0x0002c909) popup_call2_audio_first_window_g2_ParamLimits

0x64e4,	// (0x0002c909) popup_call2_audio_first_window_g2

0x52e6,	// (0x0002b70b) popup_call2_audio_first_window_g3_ParamLimits

0x52e6,	// (0x0002b70b) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0003596b) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0003596b) popup_call2_audio_first_window_g

0xb318,	// (0x0003173d) popup_call2_audio_first_window_t1_ParamLimits

0xb318,	// (0x0003173d) popup_call2_audio_first_window_t1

0xb41b,	// (0x00031840) popup_call2_audio_first_window_t4_ParamLimits

0xb41b,	// (0x00031840) popup_call2_audio_first_window_t4

0xb4fe,	// (0x00031923) popup_call2_audio_first_window_t5_ParamLimits

0xb4fe,	// (0x00031923) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00035976) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00035976) popup_call2_audio_first_window_t

0x2741,	// (0x00028b66) bg_popup_call2_act_pane_g1

0xbb73,	// (0x00031f98) popup_cale_lunar_info_window_t1

0xbb81,	// (0x00031fa6) popup_cale_lunar_info_window_t2

0xbb8f,	// (0x00031fb4) popup_cale_lunar_info_window_t3

0x24ee,	// (0x00028913) bg_popup_call2_bubble_pane

0xb5ff,	// (0x00031a24) bg_popup_call2_in_pane_cp01_ParamLimits

0xb5ff,	// (0x00031a24) bg_popup_call2_in_pane_cp01

0x21a6,	// (0x000285cb) call_type_pane_cp02

0xb647,	// (0x00031a6c) popup_call2_audio_out_window_g1_ParamLimits

0xb647,	// (0x00031a6c) popup_call2_audio_out_window_g1

0xb673,	// (0x00031a98) popup_call2_audio_out_window_g2_ParamLimits

0xb673,	// (0x00031a98) popup_call2_audio_out_window_g2

0xb69b,	// (0x00031ac0) popup_call2_audio_out_window_g3_ParamLimits

0xb69b,	// (0x00031ac0) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0003597f) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0003597f) popup_call2_audio_out_window_g

0xb6d6,	// (0x00031afb) popup_call2_audio_out_window_t1_ParamLimits

0xb6d6,	// (0x00031afb) popup_call2_audio_out_window_t1

0xb735,	// (0x00031b5a) popup_call2_audio_out_window_t2_ParamLimits

0xb735,	// (0x00031b5a) popup_call2_audio_out_window_t2

0xb789,	// (0x00031bae) popup_call2_audio_out_window_t3_ParamLimits

0xb789,	// (0x00031bae) popup_call2_audio_out_window_t3

0xb79f,	// (0x00031bc4) popup_call2_audio_out_window_t4_ParamLimits

0xb79f,	// (0x00031bc4) popup_call2_audio_out_window_t4

0xb7b5,	// (0x00031bda) popup_call2_audio_out_window_t5_ParamLimits

0xb7b5,	// (0x00031bda) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00035988) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00035988) popup_call2_audio_out_window_t

0xb819,	// (0x00031c3e) bg_popup_call2_in_pane_ParamLimits

0xb819,	// (0x00031c3e) bg_popup_call2_in_pane

0xb875,	// (0x00031c9a) popup_call2_audio_in_window_g1_ParamLimits

0xb875,	// (0x00031c9a) popup_call2_audio_in_window_g1

0xb8ad,	// (0x00031cd2) popup_call2_audio_in_window_g2_ParamLimits

0xb8ad,	// (0x00031cd2) popup_call2_audio_in_window_g2

0xb8e5,	// (0x00031d0a) popup_call2_audio_in_window_g3_ParamLimits

0xb8e5,	// (0x00031d0a) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x00035995) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x00035995) popup_call2_audio_in_window_g

0xb93d,	// (0x00031d62) popup_call2_audio_in_window_t1_ParamLimits

0xb93d,	// (0x00031d62) popup_call2_audio_in_window_t1

0xb9bd,	// (0x00031de2) popup_call2_audio_in_window_t2_ParamLimits

0xb9bd,	// (0x00031de2) popup_call2_audio_in_window_t2

0xba3d,	// (0x00031e62) popup_call2_audio_in_window_t3_ParamLimits

0xba3d,	// (0x00031e62) popup_call2_audio_in_window_t3

0xba57,	// (0x00031e7c) popup_call2_audio_in_window_t4_ParamLimits

0xba57,	// (0x00031e7c) popup_call2_audio_in_window_t4

0xba69,	// (0x00031e8e) popup_call2_audio_in_window_t5_ParamLimits

0xba69,	// (0x00031e8e) popup_call2_audio_in_window_t5

0xba7e,	// (0x00031ea3) popup_call2_audio_in_window_t6_ParamLimits

0xba7e,	// (0x00031ea3) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0003599e) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0003599e) popup_call2_audio_in_window_t

0x2741,	// (0x00028b66) bg_popup_call2_in_pane_g1

0xbb9d,	// (0x00031fc2) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00035a06) popup_cale_lunar_info_window_t

0x2749,	// (0x00028b6e) bg_popup_call2_rect_pane_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_call2_rect_pane

0x24ee,	// (0x00028913) call2_cli_visual_graphic_pane

0x24ee,	// (0x00028913) call2_cli_visual_text_pane

0xbd73,	// (0x00032198) smil_status_volume_pane_g3

0x0002,

0x2aec,	// (0x00028f11) call2_cli_visual_graphic_pane_g1

0x2aec,	// (0x00028f11) call2_cli_visual_graphic_pane_g2

0x2aec,	// (0x00028f11) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000359ab) call2_cli_visual_graphic_pane_g

0xba93,	// (0x00031eb8) bg_popup_call2_rect_pane_g1

0x2c05,	// (0x0002902a) bg_popup_call2_rect_pane_g2

0xba9b,	// (0x00031ec0) bg_popup_call2_rect_pane_g3

0xbaa3,	// (0x00031ec8) bg_popup_call2_rect_pane_g4

0xbaab,	// (0x00031ed0) bg_popup_call2_rect_pane_g5

0xbab3,	// (0x00031ed8) bg_popup_call2_rect_pane_g6

0xbabb,	// (0x00031ee0) bg_popup_call2_rect_pane_g7

0xbac3,	// (0x00031ee8) bg_popup_call2_rect_pane_g8

0xbacb,	// (0x00031ef0) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000359b2) bg_popup_call2_rect_pane_g

0xbad3,	// (0x00031ef8) bg_popup_call2_bubble_pane_g1

0xbadb,	// (0x00031f00) bg_popup_call2_bubble_pane_g2

0xbae3,	// (0x00031f08) bg_popup_call2_bubble_pane_g3

0xbaeb,	// (0x00031f10) bg_popup_call2_bubble_pane_g4

0xbaf3,	// (0x00031f18) bg_popup_call2_bubble_pane_g5

0xbafb,	// (0x00031f20) bg_popup_call2_bubble_pane_g6

0xbb03,	// (0x00031f28) bg_popup_call2_bubble_pane_g7

0xbb0b,	// (0x00031f30) bg_popup_call2_bubble_pane_g8

0xbb13,	// (0x00031f38) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000359c5) bg_popup_call2_bubble_pane_g

0x2c88,	// (0x000290ad) aid_cale_week_size_cell_pane

0x30e4,	// (0x00029509) aid_cams_cif_uncrop_pane_ParamLimits

0x30e4,	// (0x00029509) aid_cams_cif_uncrop_pane

0x32df,	// (0x00029704) aid_cams_size_cell_ParamLimits

0x32df,	// (0x00029704) aid_cams_size_cell

0x32f3,	// (0x00029718) grid_cams_pane_ParamLimits

0x330d,	// (0x00029732) linegrid_cams_pane_ParamLimits

0x3551,	// (0x00029976) call_video_pane_t1

0x356f,	// (0x00029994) call_video_pane_t2

0x0001,

0xf28d,	// (0x000356b2) call_video_pane_t

0x3c06,	// (0x0002a02b) aid_cale_month_size_cell_pane_ParamLimits

0x3c06,	// (0x0002a02b) aid_cale_month_size_cell_pane

0xf62a,	// (0x00035a4f) smil_status_volume_pane_g

0xbd80,	// (0x000321a5) volume_smil_pane_ParamLimits

0x1db7,	// (0x000281dc) aid_popup2_width_pane

0x2b5d,	// (0x00028f82) cell_qdial_pane_g4_ParamLimits

0x2b5d,	// (0x00028f82) cell_qdial_pane_g4

0x4d76,	// (0x0002b19b) aid_blid_cardinal_pane_ParamLimits

0x4d82,	// (0x0002b1a7) aid_blid_destination_pane_ParamLimits

0x4d82,	// (0x0002b1a7) aid_blid_destination_pane

0x2749,	// (0x00028b6e) bg_popup_call_poc_act_pane_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_call_poc_act_pane

0x2749,	// (0x00028b6e) bg_popup_call_poc_inact_pane_ParamLimits

0x2749,	// (0x00028b6e) bg_popup_call_poc_inact_pane

0xbb23,	// (0x00031f48) bg_popup_call_poc_act_pane_g1

0xbb2b,	// (0x00031f50) bg_popup_call_poc_act_pane_g2

0xbb33,	// (0x00031f58) bg_popup_call_poc_act_pane_g3

0xbaeb,	// (0x00031f10) bg_popup_call_poc_act_pane_g4

0xbaf3,	// (0x00031f18) bg_popup_call_poc_act_pane_g5

0xbb3b,	// (0x00031f60) bg_popup_call_poc_act_pane_g6

0xbb03,	// (0x00031f28) bg_popup_call_poc_act_pane_g7

0xbb43,	// (0x00031f68) bg_popup_call_poc_act_pane_g8

0x24ee,	// (0x00028913) main_usb_pane

0xbc9c,	// (0x000320c1) popup_cale_lunar_info_window

0x3899,	// (0x00029cbe) im_reading_pane_t1_ParamLimits

0x38d5,	// (0x00029cfa) list_im_pane_ParamLimits

0x38e6,	// (0x00029d0b) scroll_pane_cp07_ParamLimits

0x24ee,	// (0x00028913) grid_highlight_pane_cp012

0x2749,	// (0x00028b6e) mup_scale_pane_ParamLimits

0x57fe,	// (0x0002bc23) main_usb_pane_g1_ParamLimits

0x57fe,	// (0x0002bc23) main_usb_pane_g1

0x65df,	// (0x0002ca04) main_usb_pane_g2_ParamLimits

0x65df,	// (0x0002ca04) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x000359ef) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x000359ef) main_usb_pane_g

0x65f5,	// (0x0002ca1a) main_usb_pane_t1_ParamLimits

0x65f5,	// (0x0002ca1a) main_usb_pane_t1

0x6607,	// (0x0002ca2c) main_usb_pane_t2_ParamLimits

0x6607,	// (0x0002ca2c) main_usb_pane_t2

0x6619,	// (0x0002ca3e) main_usb_pane_t3_ParamLimits

0x6619,	// (0x0002ca3e) main_usb_pane_t3

0x662b,	// (0x0002ca50) main_usb_pane_t4_ParamLimits

0x662b,	// (0x0002ca50) main_usb_pane_t4

0x663d,	// (0x0002ca62) main_usb_pane_t5_ParamLimits

0x663d,	// (0x0002ca62) main_usb_pane_t5

0x664f,	// (0x0002ca74) main_usb_pane_t6_ParamLimits

0x664f,	// (0x0002ca74) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x000359f4) main_usb_pane_t_ParamLimits

0x4d1b,	// (0x0002b140) aid_text_placing

0x4d24,	// (0x0002b149) main_location2_pane_t1_ParamLimits

0x4d38,	// (0x0002b15d) main_location2_pane_t2_ParamLimits

0x4d4c,	// (0x0002b171) main_location2_pane_t3_ParamLimits

0x4d62,	// (0x0002b187) main_location2_pane_t4_ParamLimits

0x4d62,	// (0x0002b187) main_location2_pane_t4

0xf3ee,	// (0x00035813) main_location2_pane_t_ParamLimits

0x2821,	// (0x00028c46) find_pinb_pane_g2_ParamLimits

0x2821,	// (0x00028c46) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00035561) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00035561) find_pinb_pane_g

0x282d,	// (0x00028c52) find_pinb_pane_t1_ParamLimits

0x283f,	// (0x00028c64) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00035566) find_pinb_pane_t_ParamLimits

0x24ee,	// (0x00028913) main_call3_pane

0x3f9f,	// (0x0002a3c4) cale_month_day_heading_pane_t1_ParamLimits

0x3ffd,	// (0x0002a422) cale_month_day_heading_pane_t2_ParamLimits

0x4062,	// (0x0002a487) cale_month_day_heading_pane_t3_ParamLimits

0x40c7,	// (0x0002a4ec) cale_month_day_heading_pane_t4_ParamLimits

0x412c,	// (0x0002a551) cale_month_day_heading_pane_t5_ParamLimits

0x41a1,	// (0x0002a5c6) cale_month_day_heading_pane_t6_ParamLimits

0x4216,	// (0x0002a63b) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000356ea) cale_month_day_heading_pane_t_ParamLimits

0x4442,	// (0x0002a867) smil_status_volume_pane

0x57da,	// (0x0002bbff) postcard_address_pane_ParamLimits

0x57da,	// (0x0002bbff) postcard_address_pane

0x57ec,	// (0x0002bc11) postcard_message_pane_ParamLimits

0x57ec,	// (0x0002bc11) postcard_message_pane

0x65c2,	// (0x0002c9e7) call2_cli_visual_pane_t1_ParamLimits

0x65c2,	// (0x0002c9e7) call2_cli_visual_pane_t1

0x6dd6,	// (0x0002d1fb) postcard_message_pane_t1_ParamLimits

0x6dd6,	// (0x0002d1fb) postcard_message_pane_t1

0x6dbf,	// (0x0002d1e4) postcard_address_pane_t1_ParamLimits

0x6dbf,	// (0x0002d1e4) postcard_address_pane_t1

0x6dab,	// (0x0002d1d0) popup_call3_audio_in_window_ParamLimits

0x6dab,	// (0x0002d1d0) popup_call3_audio_in_window

0x6c3a,	// (0x0002d05f) bg_popup_call3_in_pane_ParamLimits

0x6c3a,	// (0x0002d05f) bg_popup_call3_in_pane

0x6cac,	// (0x0002d0d1) popup_call3_audio_in_window_g1_ParamLimits

0x6cac,	// (0x0002d0d1) popup_call3_audio_in_window_g1

0x6ccc,	// (0x0002d0f1) popup_call3_audio_in_window_g2_ParamLimits

0x6ccc,	// (0x0002d0f1) popup_call3_audio_in_window_g2

0x6cec,	// (0x0002d111) popup_call3_audio_in_window_g3_ParamLimits

0x6cec,	// (0x0002d111) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00035a56) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00035a56) popup_call3_audio_in_window_g

0x6d1d,	// (0x0002d142) popup_call3_audio_in_window_t1_ParamLimits

0x6d1d,	// (0x0002d142) popup_call3_audio_in_window_t1

0x6d5b,	// (0x0002d180) popup_call3_audio_in_window_t2_ParamLimits

0x6d5b,	// (0x0002d180) popup_call3_audio_in_window_t2

0x6d99,	// (0x0002d1be) popup_call3_audio_in_window_t3_ParamLimits

0x6d99,	// (0x0002d1be) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00035a5f) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00035a5f) popup_call3_audio_in_window_t

0x4ff6,	// (0x0002b41b) bg_popup_call3_rect_pane

0xba93,	// (0x00031eb8) bg_popup_call3_rect_pane_g1

0x2c05,	// (0x0002902a) bg_popup_call3_rect_pane_g2

0xba9b,	// (0x00031ec0) bg_popup_call3_rect_pane_g3

0xbaa3,	// (0x00031ec8) bg_popup_call3_rect_pane_g4

0xbaab,	// (0x00031ed0) bg_popup_call3_rect_pane_g5

0xbab3,	// (0x00031ed8) bg_popup_call3_rect_pane_g6

0xbabb,	// (0x00031ee0) bg_popup_call3_rect_pane_g7

0x52de,	// (0x0002b703) mup_visualizer_osc_pane

0x52f4,	// (0x0002b719) mup_visualizer_spec_pane

0x6c6a,	// (0x0002d08f) call3_video_qcif_pane_ParamLimits

0x6c6a,	// (0x0002d08f) call3_video_qcif_pane

0x6c7b,	// (0x0002d0a0) call3_video_qcif_uncrop_pane_ParamLimits

0x6c7b,	// (0x0002d0a0) call3_video_qcif_uncrop_pane

0x6c87,	// (0x0002d0ac) call3_video_subqcif_pane_ParamLimits

0x6c87,	// (0x0002d0ac) call3_video_subqcif_pane

0x6c9b,	// (0x0002d0c0) call3_video_subqcif_uncrop_pane_ParamLimits

0x6c9b,	// (0x0002d0c0) call3_video_subqcif_uncrop_pane

0x6d0c,	// (0x0002d131) popup_call3_audio_in_window_g4_ParamLimits

0x6d0c,	// (0x0002d131) popup_call3_audio_in_window_g4

0x6c29,	// (0x0002d04e) mup_spec_half_pane

0x6c32,	// (0x0002d057) mup_spec_half_pane_cp

0xbd33,	// (0x00032158) mup_osc_middle_pane

0xbd3c,	// (0x00032161) mup_visualizer_osc_pane_g1

0x6c09,	// (0x0002d02e) mup_spec_bar_pane_ParamLimits

0x6c09,	// (0x0002d02e) mup_spec_bar_pane

0xbd20,	// (0x00032145) mup_spec_bar_pane_g1

0xbd2a,	// (0x0003214f) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035a4a) mup_spec_bar_pane_g

0x2c88,	// (0x000290ad) aid_cale_week_size_cell_pane_ParamLimits

0x2c9b,	// (0x000290c0) bg_cale_heading_pane_ParamLimits

0x2cb3,	// (0x000290d8) bg_cale_pane_cp01_ParamLimits

0x2ccc,	// (0x000290f1) cale_week_corner_pane_ParamLimits

0x2cdd,	// (0x00029102) cale_week_day_heading_pane_ParamLimits

0x2cf5,	// (0x0002911a) cale_week_scroll_pane_g1_ParamLimits

0x2d0a,	// (0x0002912f) cale_week_scroll_pane_g2_ParamLimits

0x2d1b,	// (0x00029140) cale_week_scroll_pane_g3_ParamLimits

0x2d2c,	// (0x00029151) cale_week_scroll_pane_g4_ParamLimits

0x2d3d,	// (0x00029162) cale_week_scroll_pane_g5_ParamLimits

0x2d50,	// (0x00029175) cale_week_scroll_pane_g6_ParamLimits

0x2d63,	// (0x00029188) cale_week_scroll_pane_g7_ParamLimits

0x2d76,	// (0x0002919b) cale_week_scroll_pane_g8_ParamLimits

0x2d89,	// (0x000291ae) cale_week_scroll_pane_g9_ParamLimits

0x2d9a,	// (0x000291bf) cale_week_scroll_pane_g10_ParamLimits

0x2dab,	// (0x000291d0) cale_week_scroll_pane_g11_ParamLimits

0x2dbc,	// (0x000291e1) cale_week_scroll_pane_g12_ParamLimits

0x2dcd,	// (0x000291f2) cale_week_scroll_pane_g13_ParamLimits

0x2dde,	// (0x00029203) cale_week_scroll_pane_g14_ParamLimits

0x2def,	// (0x00029214) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x000355f2) cale_week_scroll_pane_g_ParamLimits

0x2e04,	// (0x00029229) cale_week_time_pane_ParamLimits

0x2e17,	// (0x0002923c) grid_cale_week_pane_ParamLimits

0x2e2c,	// (0x00029251) listscroll_cale_week_pane_t1

0x2e3e,	// (0x00029263) scroll_pane_cp08_ParamLimits

0x3c6a,	// (0x0002a08f) cale_month_corner_pane_ParamLimits

0x3f4c,	// (0x0002a371) cale_month_pane_t1

0x3f5e,	// (0x0002a383) cale_month_week_pane_ParamLimits

0x4967,	// (0x0002ad8c) popup_call_status_window_g1_ParamLimits

0x497b,	// (0x0002ada0) popup_call_status_window_g2_ParamLimits

0x498f,	// (0x0002adb4) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0003579a) popup_call_status_window_g_ParamLimits

0x49f8,	// (0x0002ae1d) aid_call2_pane

0x5622,	// (0x0002ba47) msg_header_pane_g1

0x57da,	// (0x0002bbff) postcard_address2_pane_ParamLimits

0x57da,	// (0x0002bbff) postcard_address2_pane

0x57ec,	// (0x0002bc11) postcard_message2_pane_ParamLimits

0x57ec,	// (0x0002bc11) postcard_message2_pane

0x6bb6,	// (0x0002cfdb) message2_row_pane_ParamLimits

0x6bb6,	// (0x0002cfdb) message2_row_pane

0x6bd5,	// (0x0002cffa) address2_row_pane_ParamLimits

0x6bd5,	// (0x0002cffa) address2_row_pane

0xbcee,	// (0x00032113) postcard_message2_row_pane_g1

0xbcf6,	// (0x0003211b) postcard_message2_row_pane_t1

0xbcee,	// (0x00032113) address2_row_pane_g1

0xbcf6,	// (0x0003211b) address2_row_pane_t1

0xb1ad,	// (0x000315d2) aid_size_cell_vorec

0x24ee,	// (0x00028913) main_rss_pane

0x6be8,	// (0x0002d00d) rss_list_single_pane_ParamLimits

0x6be8,	// (0x0002d00d) rss_list_single_pane

0xbd04,	// (0x00032129) rss_list_single_pane_t1

0xbd12,	// (0x00032137) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00035a45) rss_list_single_pane_t

0x24ee,	// (0x00028913) main_camera2_pane

0x24ee,	// (0x00028913) main_video2_pane

0x0dfe,	// (0x00027223) cams_zoom_pane_cp2_ParamLimits

0x0dfe,	// (0x00027223) cams_zoom_pane_cp2

0x0e1e,	// (0x00027243) image2_vga_pane_ParamLimits

0x0e1e,	// (0x00027243) image2_vga_pane

0x0e6f,	// (0x00027294) main_camera2_pane_g1_ParamLimits

0x0e6f,	// (0x00027294) main_camera2_pane_g1

0x0e8f,	// (0x000272b4) main_camera2_pane_g2_ParamLimits

0x0e8f,	// (0x000272b4) main_camera2_pane_g2

0x0eaf,	// (0x000272d4) main_camera2_pane_g3_ParamLimits

0x0eaf,	// (0x000272d4) main_camera2_pane_g3

0x0ecf,	// (0x000272f4) main_camera2_pane_g4_ParamLimits

0x0ecf,	// (0x000272f4) main_camera2_pane_g4

0x0eef,	// (0x00027314) main_camera2_pane_g5_ParamLimits

0x0eef,	// (0x00027314) main_camera2_pane_g5

0x0f0f,	// (0x00027334) main_camera2_pane_g6_ParamLimits

0x0f0f,	// (0x00027334) main_camera2_pane_g6

0x0f2f,	// (0x00027354) main_camera2_pane_g7_ParamLimits

0x0f2f,	// (0x00027354) main_camera2_pane_g7

0x0f4f,	// (0x00027374) main_camera2_pane_g8_ParamLimits

0x0f4f,	// (0x00027374) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00035a66) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00035a66) main_camera2_pane_g

0x0f8f,	// (0x000273b4) main_camera2_pane_t1_ParamLimits

0x0f8f,	// (0x000273b4) main_camera2_pane_t1

0x0fc4,	// (0x000273e9) main_camera2_pane_t2_ParamLimits

0x0fc4,	// (0x000273e9) main_camera2_pane_t2

0x0fea,	// (0x0002740f) main_camera2_pane_t3_ParamLimits

0x0fea,	// (0x0002740f) main_camera2_pane_t3

0x1048,	// (0x0002746d) main_camera2_pane_t4_ParamLimits

0x1048,	// (0x0002746d) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00035a79) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00035a79) main_camera2_pane_t

0x10da,	// (0x000274ff) cams_zoom_pane_cp4_ParamLimits

0x10da,	// (0x000274ff) cams_zoom_pane_cp4

0x10f0,	// (0x00027515) image2_cif_pane_ParamLimits

0x10f0,	// (0x00027515) image2_cif_pane

0x111b,	// (0x00027540) image2_subqcif_pane_ParamLimits

0x111b,	// (0x00027540) image2_subqcif_pane

0x1135,	// (0x0002755a) main_video2_pane_g1_ParamLimits

0x1135,	// (0x0002755a) main_video2_pane_g1

0x114f,	// (0x00027574) main_video2_pane_g2_ParamLimits

0x114f,	// (0x00027574) main_video2_pane_g2

0x1165,	// (0x0002758a) main_video2_pane_g3_ParamLimits

0x1165,	// (0x0002758a) main_video2_pane_g3

0x117b,	// (0x000275a0) main_video2_pane_g4_ParamLimits

0x117b,	// (0x000275a0) main_video2_pane_g4

0x1191,	// (0x000275b6) main_video2_pane_g5_ParamLimits

0x1191,	// (0x000275b6) main_video2_pane_g5

0x11a7,	// (0x000275cc) main_video2_pane_g6_ParamLimits

0x11a7,	// (0x000275cc) main_video2_pane_g6

0x0005,

0xf663,	// (0x00035a88) main_video2_pane_g_ParamLimits

0xf663,	// (0x00035a88) main_video2_pane_g

0x11c1,	// (0x000275e6) main_video2_pane_t1_ParamLimits

0x11c1,	// (0x000275e6) main_video2_pane_t1

0x11e5,	// (0x0002760a) main_video2_pane_t2_ParamLimits

0x11e5,	// (0x0002760a) main_video2_pane_t2

0x1233,	// (0x00027658) main_video2_pane_t3_ParamLimits

0x1233,	// (0x00027658) main_video2_pane_t3

0x0002,

0xf670,	// (0x00035a95) main_video2_pane_t_ParamLimits

0xf670,	// (0x00035a95) main_video2_pane_t

0x670c,	// (0x0002cb31) call_muted_g2

0x0001,

0xf612,	// (0x00035a37) call_muted_g

0x24ee,	// (0x00028913) main_mup2_pane

0x6df1,	// (0x0002d216) main_mup2_pane_g1_ParamLimits

0x6df1,	// (0x0002d216) main_mup2_pane_g1

0x6dfd,	// (0x0002d222) main_mup2_pane_g2_ParamLimits

0x6dfd,	// (0x0002d222) main_mup2_pane_g2

0xbea4,	// (0x000322c9) main_mup_pane_g13_cp1

0xbeac,	// (0x000322d1) mup_volume_pane_cp1

0x6e19,	// (0x0002d23e) main_mup2_pane_g4_ParamLimits

0x6e19,	// (0x0002d23e) main_mup2_pane_g4

0x6e2b,	// (0x0002d250) main_mup2_pane_g5_ParamLimits

0x6e2b,	// (0x0002d250) main_mup2_pane_g5

0x6e3d,	// (0x0002d262) main_mup2_pane_g6_ParamLimits

0x6e3d,	// (0x0002d262) main_mup2_pane_g6

0x6e4f,	// (0x0002d274) main_mup2_pane_g7_ParamLimits

0x6e4f,	// (0x0002d274) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00035a9c) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00035a9c) main_mup2_pane_g

0x6e67,	// (0x0002d28c) main_mup2_pane_t1_ParamLimits

0x6e67,	// (0x0002d28c) main_mup2_pane_t1

0x6e7d,	// (0x0002d2a2) main_mup2_pane_t2_ParamLimits

0x6e7d,	// (0x0002d2a2) main_mup2_pane_t2

0x6e93,	// (0x0002d2b8) main_mup2_pane_t3_ParamLimits

0x6e93,	// (0x0002d2b8) main_mup2_pane_t3

0x6ea9,	// (0x0002d2ce) main_mup2_pane_t4_ParamLimits

0x6ea9,	// (0x0002d2ce) main_mup2_pane_t4

0x6ec1,	// (0x0002d2e6) main_mup2_pane_t5_ParamLimits

0x6ec1,	// (0x0002d2e6) main_mup2_pane_t5

0x6ed9,	// (0x0002d2fe) main_mup2_pane_t6_ParamLimits

0x6ed9,	// (0x0002d2fe) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00035aab) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00035aab) main_mup2_pane_t

0x6f09,	// (0x0002d32e) mup2_visualizer_pane_ParamLimits

0x6f09,	// (0x0002d32e) mup2_visualizer_pane

0x6f37,	// (0x0002d35c) mup_progress_pane_cp_ParamLimits

0x6f37,	// (0x0002d35c) mup_progress_pane_cp

0xbe86,	// (0x000322ab) mup_volume_pane_cp_ParamLimits

0xbe86,	// (0x000322ab) mup_volume_pane_cp

0x6f4b,	// (0x0002d370) mup2_visualizer_pane_g1_ParamLimits

0x6f4b,	// (0x0002d370) mup2_visualizer_pane_g1

0xbdc5,	// (0x000321ea) mup2_visualizer_pane_g2_ParamLimits

0xbdc5,	// (0x000321ea) mup2_visualizer_pane_g2

0x6f62,	// (0x0002d387) mup2_visualizer_pane_g3_ParamLimits

0x6f62,	// (0x0002d387) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00035ab8) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00035ab8) mup2_visualizer_pane_g

0x5baf,	// (0x0002bfd4) aid_size_cell_fmradio

0x68be,	// (0x0002cce3) aid_height_parent_landcape

0x399e,	// (0x00029dc3) wml_content_pane_cp

0x39a6,	// (0x00029dcb) wml_tabs_pane

0x39af,	// (0x00029dd4) popup_wml_miniature_window

0x39b7,	// (0x00029ddc) scroll_pane_cp021

0x39cb,	// (0x00029df0) wml_content_pane_comp8

0x24ee,	// (0x00028913) bg_popup_sub_pane_cp05

0xbde3,	// (0x00032208) popup_wml_miniature_window_g1

0xbdeb,	// (0x00032210) wml_miniature_view_pane

0x6f6e,	// (0x0002d393) aid_size_wml_view

0x6f76,	// (0x0002d39b) wml_miniature_view_pane_g1

0x6f7f,	// (0x0002d3a4) wml_miniature_view_pane_g2

0x6f88,	// (0x0002d3ad) wml_miniature_view_pane_g3

0x6f90,	// (0x0002d3b5) wml_miniature_view_pane_g4

0x6f98,	// (0x0002d3bd) wml_miniature_view_pane_g5

0x6fa0,	// (0x0002d3c5) wml_miniature_view_pane_g6

0x6fa8,	// (0x0002d3cd) wml_miniature_view_pane_g7

0x6fb0,	// (0x0002d3d5) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00035abf) wml_miniature_view_pane_g

0xbdf3,	// (0x00032218) background_graphic_ParamLimits

0xbdf3,	// (0x00032218) background_graphic

0xbdff,	// (0x00032224) wml_tabs_2_pane

0xbe08,	// (0x0003222d) wml_tabs_3_pane_ParamLimits

0xbe08,	// (0x0003222d) wml_tabs_3_pane

0xbe1a,	// (0x0003223f) wml_tabs_4_pane_ParamLimits

0xbe1a,	// (0x0003223f) wml_tabs_4_pane

0xbe30,	// (0x00032255) wml_tabs_5_pane_ParamLimits

0xbe30,	// (0x00032255) wml_tabs_5_pane

0xbe4a,	// (0x0003226f) wml_tabs_pane_g2_ParamLimits

0xbe4a,	// (0x0003226f) wml_tabs_pane_g2

0xbe5e,	// (0x00032283) wml_tabs_pane_g3_ParamLimits

0xbe5e,	// (0x00032283) wml_tabs_pane_g3

0x6fb8,	// (0x0002d3dd) wml_tabs_2_active_pane_ParamLimits

0x6fb8,	// (0x0002d3dd) wml_tabs_2_active_pane

0x6fcc,	// (0x0002d3f1) wml_tabs_2_passive_pane_ParamLimits

0x6fcc,	// (0x0002d3f1) wml_tabs_2_passive_pane

0x6fe0,	// (0x0002d405) wml_tabs_3_active_pane_cp_ParamLimits

0x6fe0,	// (0x0002d405) wml_tabs_3_active_pane_cp

0x6ff5,	// (0x0002d41a) wml_tabs_3_passive_pane_ParamLimits

0x6ff5,	// (0x0002d41a) wml_tabs_3_passive_pane

0x7008,	// (0x0002d42d) wml_tabs_3_passive_pane_cp_ParamLimits

0x7008,	// (0x0002d42d) wml_tabs_3_passive_pane_cp

0x701f,	// (0x0002d444) tabs_4_active_pane

0x7027,	// (0x0002d44c) tabs_4_passive_pane

0x7031,	// (0x0002d456) tabs_4_passive_pane_cp

0x7039,	// (0x0002d45e) tabs_4_passive_pane_cp2

0xbb1b,	// (0x00031f40) aid_height_text

0x52b0,	// (0x0002b6d5) mup_volume_cont_pane_ParamLimits

0x52b0,	// (0x0002b6d5) mup_volume_cont_pane

0x27df,	// (0x00028c04) aid_size_cell_pinb

0x27e9,	// (0x00028c0e) aid_size_list_pinb

0x6f23,	// (0x0002d348) mup2_volume_cont_pane_ParamLimits

0x6f23,	// (0x0002d348) mup2_volume_cont_pane

0xbe72,	// (0x00032297) mup2_volume_cont_pane_g1_ParamLimits

0xbe72,	// (0x00032297) mup2_volume_cont_pane_g1

0x1dc3,	// (0x000281e8) aid_size_cell_touch_ParamLimits

0x1dc3,	// (0x000281e8) aid_size_cell_touch

0x2031,	// (0x00028456) touch_pane_ParamLimits

0x2031,	// (0x00028456) touch_pane

0x1da5,	// (0x000281ca) main_rss2_pane

0xbeb4,	// (0x000322d9) listscroll_rss2_pane

0xbebd,	// (0x000322e2) rss2_navigation_pane

0xbec5,	// (0x000322ea) list_rss2_pane

0x4ba7,	// (0x0002afcc) scroll_pane_cp22

0xbecd,	// (0x000322f2) rss2_navigation_pane_g1

0xbed6,	// (0x000322fb) rss2_navigation_pane_g2

0xbede,	// (0x00032303) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00035ad0) rss2_navigation_pane_g

0xbee6,	// (0x0003230b) rss2_navigation_pane_t1

0x7043,	// (0x0002d468) rss2_list_single_pane_ParamLimits

0x7043,	// (0x0002d468) rss2_list_single_pane

0xbef4,	// (0x00032319) rss2_list_single_pane_t2

0xbf02,	// (0x00032327) rss2_list_single_pane_t3_ParamLimits

0xbf02,	// (0x00032327) rss2_list_single_pane_t3

0xbf1f,	// (0x00032344) rss2_list_single_pane_t4

0x442a,	// (0x0002a84f) smil_status_pane_g1

0x2017,	// (0x0002843c) main_image2_pane_ParamLimits

0x2017,	// (0x0002843c) main_image2_pane

0x0f6f,	// (0x00027394) main_camera2_pane_g9_ParamLimits

0x0f6f,	// (0x00027394) main_camera2_pane_g9

0x109d,	// (0x000274c2) main_camera2_pane_t5_ParamLimits

0x109d,	// (0x000274c2) main_camera2_pane_t5

0xbd95,	// (0x000321ba) main_camera2_pane_t6_ParamLimits

0xbd95,	// (0x000321ba) main_camera2_pane_t6

0x705b,	// (0x0002d480) main_image2_pane_g1_ParamLimits

0x705b,	// (0x0002d480) main_image2_pane_g1

0x5b65,	// (0x0002bf8a) smil2_video_pane_ParamLimits

0x5b65,	// (0x0002bf8a) smil2_video_pane

0x1df3,	// (0x00028218) aid_zoom_text_primary_cp

0x1fd3,	// (0x000283f8) popup_preview_fixed_window

0x3891,	// (0x00029cb6) im_reading_pane_g1

0x0de6,	// (0x0002720b) cams2_bc_adjust_pane_cp_ParamLimits

0x0de6,	// (0x0002720b) cams2_bc_adjust_pane_cp

0x10cc,	// (0x000274f1) cams2_bc_adjust_pane_ParamLimits

0x10cc,	// (0x000274f1) cams2_bc_adjust_pane

0xbf2d,	// (0x00032352) cams2_bc_adjust_pane_g1

0xbf35,	// (0x0003235a) cams2_slider_pane

0xbf3e,	// (0x00032363) cams2_slider_pane_g1

0xbf47,	// (0x0003236c) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00035ad7) cams2_slider_pane_g

0x0b72,	// (0x00026f97) calc_display_pane_ParamLimits

0x0b9a,	// (0x00026fbf) calc_paper_pane_ParamLimits

0x0bbd,	// (0x00026fe2) grid_calc_pane_ParamLimits

0xb2a7,	// (0x000316cc) popup_clock_digital_window_t1_ParamLimits

0x59e8,	// (0x0002be0d) main_image_pane_t1

0x0b54,	// (0x00026f79) aid_size_cell_calc_ParamLimits

0x0b54,	// (0x00026f79) aid_size_cell_calc

0x6904,	// (0x0002cd29) popup_blid_sat_info2_window_ParamLimits

0x6904,	// (0x0002cd29) popup_blid_sat_info2_window

0xbf69,	// (0x0003238e) aid_size_cell_blid

0xbf71,	// (0x00032396) bg_popup_window_pane_cp07

0xbf94,	// (0x000323b9) grid_popup_blid_pane

0xbf9e,	// (0x000323c3) heading_pane_cp05_ParamLimits

0xbf9e,	// (0x000323c3) heading_pane_cp05

0xc068,	// (0x0003248d) cell_popup_blid_pane_ParamLimits

0xc068,	// (0x0003248d) cell_popup_blid_pane

0xc08e,	// (0x000324b3) cell_popup_blid_pane_g1

0xc096,	// (0x000324bb) cell_popup_blid_pane_t1

0x6ef3,	// (0x0002d318) mup2_indicator_pane_ParamLimits

0x6ef3,	// (0x0002d318) mup2_indicator_pane

0x4ff6,	// (0x0002b41b) mup2_visualizer_osc_pane

0xbdd1,	// (0x000321f6) mup2_visualizer_spec_pane_ParamLimits

0xbdd1,	// (0x000321f6) mup2_visualizer_spec_pane

0x7071,	// (0x0002d496) mup2_spec_half_pane

0x707a,	// (0x0002d49f) mup2_spec_half_pane_cp

0x7082,	// (0x0002d4a7) mup2_spec_bar_pane_ParamLimits

0x7082,	// (0x0002d4a7) mup2_spec_bar_pane

0xbd20,	// (0x00032145) mup2_spec_bar_pane_g1

0xbd2a,	// (0x0003214f) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00035a4a) mup2_spec_bar_pane_g

0x70a2,	// (0x0002d4c7) mup2_osc_middle_pane

0xbd3c,	// (0x00032161) mup2_visualizer_osc_pane_g1

0x20a3,	// (0x000284c8) popup_number_entry_window_t1_ParamLimits

0x20b6,	// (0x000284db) popup_number_entry_window_t2_ParamLimits

0x20c8,	// (0x000284ed) popup_number_entry_window_t3_ParamLimits

0x20da,	// (0x000284ff) popup_number_entry_window_t5_ParamLimits

0x20da,	// (0x000284ff) popup_number_entry_window_t5

0xf0e7,	// (0x0003550c) popup_number_entry_window_t_ParamLimits

0x2110,	// (0x00028535) text_title_cp2_ParamLimits

0xb2e6,	// (0x0003170b) aid_hotspot_pointer_text2_pane

0xb30c,	// (0x00031731) main_viewer_pane_g9_ParamLimits

0xb30c,	// (0x00031731) main_viewer_pane_g9

0x3f4c,	// (0x0002a371) cale_month_pane_t1_ParamLimits

0x44b4,	// (0x0002a8d9) bg_cale_pane_ParamLimits

0x44cc,	// (0x0002a8f1) list_cale_pane_ParamLimits

0x2e2c,	// (0x00029251) listscroll_cale_day_pane_t1

0x44dd,	// (0x0002a902) scroll_pane_cp09_ParamLimits

0x5362,	// (0x0002b787) main_mup_eq_pane_t1_ParamLimits

0x5362,	// (0x0002b787) main_mup_eq_pane_t1

0x537e,	// (0x0002b7a3) main_mup_eq_pane_t2_ParamLimits

0x537e,	// (0x0002b7a3) main_mup_eq_pane_t2

0x539a,	// (0x0002b7bf) main_mup_eq_pane_t3_ParamLimits

0x539a,	// (0x0002b7bf) main_mup_eq_pane_t3

0x53b8,	// (0x0002b7dd) main_mup_eq_pane_t4_ParamLimits

0x53b8,	// (0x0002b7dd) main_mup_eq_pane_t4

0x53d6,	// (0x0002b7fb) main_mup_eq_pane_t5_ParamLimits

0x53d6,	// (0x0002b7fb) main_mup_eq_pane_t5

0x53f4,	// (0x0002b819) main_mup_eq_pane_t6_ParamLimits

0x53f4,	// (0x0002b819) main_mup_eq_pane_t6

0x540a,	// (0x0002b82f) main_mup_eq_pane_t7_ParamLimits

0x540a,	// (0x0002b82f) main_mup_eq_pane_t7

0x5420,	// (0x0002b845) main_mup_eq_pane_t8_ParamLimits

0x5420,	// (0x0002b845) main_mup_eq_pane_t8

0x5436,	// (0x0002b85b) main_mup_eq_pane_t9_ParamLimits

0x5436,	// (0x0002b85b) main_mup_eq_pane_t9

0x5450,	// (0x0002b875) main_mup_eq_pane_t10_ParamLimits

0x5450,	// (0x0002b875) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00035899) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00035899) main_mup_eq_pane_t

0x54ff,	// (0x0002b924) mup_equalizer_pane_cp5_ParamLimits

0x5513,	// (0x0002b938) mup_equalizer_pane_cp6_ParamLimits

0x5527,	// (0x0002b94c) mup_equalizer_pane_cp7_ParamLimits

0x1da5,	// (0x000281ca) main_gallery_pane

0xbd45,	// (0x0003216a) smil2_volume_pane

0xbd4d,	// (0x00032172) smil_status_volume_pane_g1_ParamLimits

0xbd60,	// (0x00032185) smil_status_volume_pane_g2_ParamLimits

0xbd73,	// (0x00032198) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00035a4f) smil_status_volume_pane_g_ParamLimits

0xbf71,	// (0x00032396) bg_popup_window_pane_cp07_ParamLimits

0xbf7f,	// (0x000323a4) blid_firmament_pane

0x70ab,	// (0x0002d4d0) aid_size_cell_gallery_ParamLimits

0x70ab,	// (0x0002d4d0) aid_size_cell_gallery

0x70c1,	// (0x0002d4e6) grid_gallery_pane_ParamLimits

0x70c1,	// (0x0002d4e6) grid_gallery_pane

0x70da,	// (0x0002d4ff) cell_gallery_pane_ParamLimits

0x70da,	// (0x0002d4ff) cell_gallery_pane

0xc0a4,	// (0x000324c9) bg_cell_gallery_focus_pane_ParamLimits

0xc0a4,	// (0x000324c9) bg_cell_gallery_focus_pane

0xc0b6,	// (0x000324db) cell_gallery_pane_g1_ParamLimits

0xc0b6,	// (0x000324db) cell_gallery_pane_g1

0x7123,	// (0x0002d548) cell_gallery_pane_g2_ParamLimits

0x7123,	// (0x0002d548) cell_gallery_pane_g2

0x7130,	// (0x0002d555) cell_gallery_pane_g3_ParamLimits

0x7130,	// (0x0002d555) cell_gallery_pane_g3

0xc0c2,	// (0x000324e7) cell_gallery_pane_g4_ParamLimits

0xc0c2,	// (0x000324e7) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00035afd) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00035afd) cell_gallery_pane_g

0xc0ce,	// (0x000324f3) bg_cell_gallery_focus_pane_g1

0xc0d6,	// (0x000324fb) bg_cell_gallery_focus_pane_g2

0xc0de,	// (0x00032503) bg_cell_gallery_focus_pane_g3

0xc0e6,	// (0x0003250b) bg_cell_gallery_focus_pane_g4

0xc0ee,	// (0x00032513) bg_cell_gallery_focus_pane_g5

0xc0f6,	// (0x0003251b) bg_cell_gallery_focus_pane_g6

0xc0fe,	// (0x00032523) bg_cell_gallery_focus_pane_g7

0xc106,	// (0x0003252b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00035b06) bg_cell_gallery_focus_pane_g

0xc10e,	// (0x00032533) aid_firma_cardinal

0xc122,	// (0x00032547) blid_firmament_pane_t1

0xc139,	// (0x0003255e) blid_firmament_pane_t2

0xc150,	// (0x00032575) blid_firmament_pane_t3

0xc167,	// (0x0003258c) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00035b17) blid_firmament_pane_t

0xc17e,	// (0x000325a3) blid_sat_info_pane

0xc18e,	// (0x000325b3) blid_sat_info_pane_g1

0xc18e,	// (0x000325b3) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00035b20) blid_sat_info_pane_g

0xc198,	// (0x000325bd) blid_sat_info_pane_t1

0xc1a6,	// (0x000325cb) smil2_volume_content_pane

0xc1af,	// (0x000325d4) smil2_volume_pane_g1

0xc1b7,	// (0x000325dc) smil2_volume_content_pane_g1

0xc1c0,	// (0x000325e5) smil2_volume_content_pane_g2

0xc1c9,	// (0x000325ee) smil2_volume_content_pane_g3

0xc1d2,	// (0x000325f7) smil2_volume_content_pane_g4

0xc1db,	// (0x00032600) smil2_volume_content_pane_g5

0xc1e4,	// (0x00032609) smil2_volume_content_pane_g6

0xc1ed,	// (0x00032612) smil2_volume_content_pane_g7

0xc1f6,	// (0x0003261b) smil2_volume_content_pane_g8

0xc1ff,	// (0x00032624) smil2_volume_content_pane_g9

0xc208,	// (0x0003262d) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00035b25) smil2_volume_content_pane_g

0x2e98,	// (0x000292bd) cale_week_day_heading_pane_t1_ParamLimits

0x2eac,	// (0x000292d1) cale_week_day_heading_pane_t2_ParamLimits

0x2ec0,	// (0x000292e5) cale_week_day_heading_pane_t3_ParamLimits

0x2ed4,	// (0x000292f9) cale_week_day_heading_pane_t4_ParamLimits

0x2ee8,	// (0x0002930d) cale_week_day_heading_pane_t5_ParamLimits

0x2efc,	// (0x00029321) cale_week_day_heading_pane_t6_ParamLimits

0x2f12,	// (0x00029337) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00035611) cale_week_day_heading_pane_t_ParamLimits

0x2f26,	// (0x0002934b) bg_cale_side_pane_ParamLimits

0x0c8c,	// (0x000270b1) cale_week_time_pane_t1_ParamLimits

0x0ca4,	// (0x000270c9) cale_week_time_pane_t2_ParamLimits

0x0cbc,	// (0x000270e1) cale_week_time_pane_t3_ParamLimits

0x0cd4,	// (0x000270f9) cale_week_time_pane_t4_ParamLimits

0x0cec,	// (0x00027111) cale_week_time_pane_t5_ParamLimits

0x0d04,	// (0x00027129) cale_week_time_pane_t6_ParamLimits

0x0d1c,	// (0x00027141) cale_week_time_pane_t7_ParamLimits

0x0d34,	// (0x00027159) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00035620) cale_week_time_pane_t_ParamLimits

0x2f34,	// (0x00029359) cell_cale_week_pane_g2_ParamLimits

0x2f26,	// (0x0002934b) bg_cale_side_pane_cp01_ParamLimits

0x428b,	// (0x0002a6b0) cale_month_week_pane_t1_ParamLimits

0x42a2,	// (0x0002a6c7) cale_month_week_pane_t2_ParamLimits

0x42b9,	// (0x0002a6de) cale_month_week_pane_t3_ParamLimits

0x42d0,	// (0x0002a6f5) cale_month_week_pane_t4_ParamLimits

0x42e7,	// (0x0002a70c) cale_month_week_pane_t5_ParamLimits

0x42fe,	// (0x0002a723) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x000356f9) cale_month_week_pane_t_ParamLimits

0xb227,	// (0x0003164c) cell_cale_month_pane_g1_ParamLimits

0x1da5,	// (0x000281ca) main_cale_event_viewer_pane

0x1da5,	// (0x000281ca) listscroll_cale_event_viewer_pane

0xc211,	// (0x00032636) list_cale_ev_pane

0xc219,	// (0x0003263e) scroll_pane_cp023

0xc225,	// (0x0003264a) field_cale_ev_pane_ParamLimits

0xc225,	// (0x0003264a) field_cale_ev_pane

0xc23f,	// (0x00032664) field_cale_ev_content_pane_ParamLimits

0xc23f,	// (0x00032664) field_cale_ev_content_pane

0xc24b,	// (0x00032670) field_cale_ev_pane_g1_ParamLimits

0xc24b,	// (0x00032670) field_cale_ev_pane_g1

0xc257,	// (0x0003267c) field_cale_ev_pane_g2_ParamLimits

0xc257,	// (0x0003267c) field_cale_ev_pane_g2

0xc26f,	// (0x00032694) field_cale_ev_pane_g3_ParamLimits

0xc26f,	// (0x00032694) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00035b3a) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00035b3a) field_cale_ev_pane_g

0xc287,	// (0x000326ac) field_cale_ev_pane_t1_ParamLimits

0xc287,	// (0x000326ac) field_cale_ev_pane_t1

0xc29e,	// (0x000326c3) field_cale_ev_content_pane_t1_ParamLimits

0xc29e,	// (0x000326c3) field_cale_ev_content_pane_t1

0x5610,	// (0x0002ba35) bg_button_pane_cp01

0x2a37,	// (0x00028e5c) listscroll_cale_week_pane_ParamLimits

0x2c7e,	// (0x000290a3) popup_toolbar_window_cp01

0x2e2c,	// (0x00029251) listscroll_cale_week_pane_t1_ParamLimits

0x2a37,	// (0x00028e5c) listscroll_cale_day_pane_ParamLimits

0x44aa,	// (0x0002a8cf) popup_toolbar_window_cp02

0x2e2c,	// (0x00029251) listscroll_cale_day_pane_t1_ParamLimits

0x2a37,	// (0x00028e5c) main_cale_month_pane_ParamLimits

0x6b2a,	// (0x0002cf4f) popup_toolbar_window_cp03_ParamLimits

0x6b2a,	// (0x0002cf4f) popup_toolbar_window_cp03

0x59c6,	// (0x0002bdeb) main_image_pane_g2_ParamLimits

0x59c6,	// (0x0002bdeb) main_image_pane_g2

0x59d7,	// (0x0002bdfc) main_image_pane_g3_ParamLimits

0x59d7,	// (0x0002bdfc) main_image_pane_g3

0x0002,

0xf506,	// (0x0003592b) main_image_pane_g_ParamLimits

0xf506,	// (0x0003592b) main_image_pane_g

0x59e8,	// (0x0002be0d) main_image_pane_t1_ParamLimits

0x59ff,	// (0x0002be24) main_image_pane_t2_ParamLimits

0x59ff,	// (0x0002be24) main_image_pane_t2

0x5a11,	// (0x0002be36) main_image_pane_t3_ParamLimits

0x5a11,	// (0x0002be36) main_image_pane_t3

0x5a39,	// (0x0002be5e) main_image_pane_t4_ParamLimits

0x5a39,	// (0x0002be5e) main_image_pane_t4

0x0003,

0xf50d,	// (0x00035932) main_image_pane_t_ParamLimits

0xf50d,	// (0x00035932) main_image_pane_t

0x5a59,	// (0x0002be7e) popup_image_details_window_cp01

0x5a63,	// (0x0002be88) popup_toobar_trans_pane_cp01_ParamLimits

0x5a63,	// (0x0002be88) popup_toobar_trans_pane_cp01

0x69db,	// (0x0002ce00) popup_image_details_window_ParamLimits

0x69db,	// (0x0002ce00) popup_image_details_window

0xbca6,	// (0x000320cb) popup_image_focus_window

0x0da0,	// (0x000271c5) camera2_autofocus_pane_ParamLimits

0x0da0,	// (0x000271c5) camera2_autofocus_pane

0x1da5,	// (0x000281ca) bg_popup_sub_pane_cp06

0xc2bb,	// (0x000326e0) popup_image_focus_window_g1

0xc2c3,	// (0x000326e8) popup_image_focus_window_g2

0xc2cb,	// (0x000326f0) popup_image_focus_window_g3

0xc2d3,	// (0x000326f8) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00035b41) popup_image_focus_window_g

0xc2db,	// (0x00032700) popup_image_focus_window_t1

0xc2e9,	// (0x0003270e) popup_image_focus_window_t2

0xc2f9,	// (0x0003271e) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00035b4a) popup_image_focus_window_t

0xc307,	// (0x0003272c) camera2_autofocus_pane_g1

0x2017,	// (0x0002843c) bg_tb_trans_pane_cp01

0xc315,	// (0x0003273a) popup_image_details_window_g1

0xc328,	// (0x0003274d) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00035b5c) popup_image_details_window_g

0xc351,	// (0x00032776) popup_image_details_window_t1

0xc363,	// (0x00032788) popup_image_details_window_t2

0xc37c,	// (0x000327a1) popup_image_details_window_t3

0xc390,	// (0x000327b5) popup_image_details_window_t4

0xc3ab,	// (0x000327d0) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00035b63) popup_image_details_window_t

0x2a23,	// (0x00028e48) bg_calc_paper_pane_ParamLimits

0xb113,	// (0x00031538) grid_highlight_pane_cp013

0xb11d,	// (0x00031542) list_calc_pane_ParamLimits

0xb12f,	// (0x00031554) scroll_pane_cp024

0x2a37,	// (0x00028e5c) bg_calc_display_pane_ParamLimits

0x0beb,	// (0x00027010) calc_display_pane_t1_ParamLimits

0x0bfd,	// (0x00027022) calc_display_pane_t2_ParamLimits

0xb137,	// (0x0003155c) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00035593) calc_display_pane_t_ParamLimits

0x0c60,	// (0x00027085) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000355b0) cell_calc_pane_g

0x0c69,	// (0x0002708e) cell_calc_pane_t1

0x2af6,	// (0x00028f1b) grid_highlight_pane_cp02_ParamLimits

0x2b0c,	// (0x00028f31) toolbar_button_pane_cp01_ParamLimits

0x2b0c,	// (0x00028f31) toolbar_button_pane_cp01

0x5aa5,	// (0x0002beca) temp_image_control_pane_ParamLimits

0x5aa5,	// (0x0002beca) temp_image_control_pane

0x2017,	// (0x0002843c) main_mp3_pane

0xc3c5,	// (0x000327ea) temp_image_control_pane_g1_ParamLimits

0xc3c5,	// (0x000327ea) temp_image_control_pane_g1

0xc3d3,	// (0x000327f8) temp_image_control_pane_g2_ParamLimits

0xc3d3,	// (0x000327f8) temp_image_control_pane_g2

0xc3e5,	// (0x0003280a) temp_image_control_pane_g3_ParamLimits

0xc3e5,	// (0x0003280a) temp_image_control_pane_g3

0x716d,	// (0x0002d592) temp_image_control_pane_g4_ParamLimits

0x716d,	// (0x0002d592) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00035b6e) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00035b6e) temp_image_control_pane_g

0xc3c5,	// (0x000327ea) main_mp3_pane_g1

0x7180,	// (0x0002d5a5) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00035b77) main_mp3_pane_g

0xc428,	// (0x0003284d) main_mp3_pane_t1

0x30aa,	// (0x000294cf) main_camera_pane_g8_ParamLimits

0x30aa,	// (0x000294cf) main_camera_pane_g8

0x3261,	// (0x00029686) main_video_pane_g7_ParamLimits

0x3261,	// (0x00029686) main_video_pane_g7

0xbdb3,	// (0x000321d8) main_camera2_pane_t7_ParamLimits

0xbdb3,	// (0x000321d8) main_camera2_pane_t7

0x395e,	// (0x00029d83) scroll_pane_cp025_ParamLimits

0x395e,	// (0x00029d83) scroll_pane_cp025

0x3972,	// (0x00029d97) scroll_pane_cp026_ParamLimits

0x3972,	// (0x00029d97) scroll_pane_cp026

0x3981,	// (0x00029da6) wml_content_pane_ParamLimits

0x1da5,	// (0x000281ca) main_touch_calib_pane

0x724c,	// (0x0002d671) main_touch_calib_pane_g1

0x7258,	// (0x0002d67d) main_touch_calib_pane_g2

0x7264,	// (0x0002d689) main_touch_calib_pane_g3

0x7270,	// (0x0002d695) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00035b95) main_touch_calib_pane_g

0x727c,	// (0x0002d6a1) main_touch_calib_pane_t1

0x7296,	// (0x0002d6bb) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00035b9e) main_touch_calib_pane_t

0x4e59,	// (0x0002b27e) mup_progress_pane_cp02

0x4e8e,	// (0x0002b2b3) navi_pane_g1

0x4f47,	// (0x0002b36c) navi_pane_mp_t3

0x2017,	// (0x0002843c) main_mp3_pane_ParamLimits

0x6b68,	// (0x0002cf8d) navi_pane_ParamLimits

0xc3c5,	// (0x000327ea) main_mp3_pane_g1_ParamLimits

0x7180,	// (0x0002d5a5) main_mp3_pane_g2_ParamLimits

0x718e,	// (0x0002d5b3) main_mp3_pane_g3_ParamLimits

0x718e,	// (0x0002d5b3) main_mp3_pane_g3

0x719c,	// (0x0002d5c1) main_mp3_pane_g4_ParamLimits

0x719c,	// (0x0002d5c1) main_mp3_pane_g4

0xc3f5,	// (0x0003281a) main_mp3_pane_g5_ParamLimits

0xc3f5,	// (0x0003281a) main_mp3_pane_g5

0xc403,	// (0x00032828) main_mp3_pane_g6_ParamLimits

0xc403,	// (0x00032828) main_mp3_pane_g6

0xc410,	// (0x00032835) main_mp3_pane_g7_ParamLimits

0xc410,	// (0x00032835) main_mp3_pane_g7

0xc41c,	// (0x00032841) main_mp3_pane_g8_ParamLimits

0xc41c,	// (0x00032841) main_mp3_pane_g8

0xf752,	// (0x00035b77) main_mp3_pane_g_ParamLimits

0x71aa,	// (0x0002d5cf) main_mp3_pane_t2

0x71b8,	// (0x0002d5dd) main_mp3_pane_t3

0xc436,	// (0x0003285b) main_mp3_pane_t4

0xc444,	// (0x00032869) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00035b88) main_mp3_pane_t

0xc452,	// (0x00032877) mup_progress_pane_cp01

0x1df3,	// (0x00028218) aid_zoom_text_secondary2

0xc211,	// (0x00032636) list_cale_ev2_pane

0xc219,	// (0x0003263e) scroll_pane_cp023_ParamLimits

0x72ec,	// (0x0002d711) field_cale_ev2_pane_ParamLimits

0x72ec,	// (0x0002d711) field_cale_ev2_pane

0x7312,	// (0x0002d737) field_cale_ev2_pane_g1_ParamLimits

0x7312,	// (0x0002d737) field_cale_ev2_pane_g1

0x731e,	// (0x0002d743) field_cale_ev2_pane_g2_ParamLimits

0x731e,	// (0x0002d743) field_cale_ev2_pane_g2

0x7336,	// (0x0002d75b) field_cale_ev2_pane_g3_ParamLimits

0x7336,	// (0x0002d75b) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00035ba9) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00035ba9) field_cale_ev2_pane_g

0xc466,	// (0x0003288b) field_cale_ev2_pane_t1_ParamLimits

0xc466,	// (0x0003288b) field_cale_ev2_pane_t1

0xc47d,	// (0x000328a2) field_cale_ev2_pane_t2_ParamLimits

0xc47d,	// (0x000328a2) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00035bb2) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00035bb2) field_cale_ev2_pane_t

0x5790,	// (0x0002bbb5) main_postcard_pane_g5_ParamLimits

0x5790,	// (0x0002bbb5) main_postcard_pane_g5

0x57a6,	// (0x0002bbcb) main_postcard_pane_g6_ParamLimits

0x57a6,	// (0x0002bbcb) main_postcard_pane_g6

0x2feb,	// (0x00029410) camera2_autofocus_pane_cp_ParamLimits

0x2feb,	// (0x00029410) camera2_autofocus_pane_cp

0x2017,	// (0x0002843c) main_mup3_pane

0x736e,	// (0x0002d793) main_mup3_pane_g1_ParamLimits

0x736e,	// (0x0002d793) main_mup3_pane_g1

0x7390,	// (0x0002d7b5) main_mup3_pane_g2_ParamLimits

0x7390,	// (0x0002d7b5) main_mup3_pane_g2

0x7415,	// (0x0002d83a) main_mup3_pane_g3_ParamLimits

0x7415,	// (0x0002d83a) main_mup3_pane_g3

0x745b,	// (0x0002d880) main_mup3_pane_g4_ParamLimits

0x745b,	// (0x0002d880) main_mup3_pane_g4

0x74a1,	// (0x0002d8c6) main_mup3_pane_g5_ParamLimits

0x74a1,	// (0x0002d8c6) main_mup3_pane_g5

0x74e9,	// (0x0002d90e) main_mup3_pane_g6_ParamLimits

0x74e9,	// (0x0002d90e) main_mup3_pane_g6

0xc492,	// (0x000328b7) main_mup3_pane_g7_ParamLimits

0xc492,	// (0x000328b7) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00035bc2) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00035bc2) main_mup3_pane_g

0x7569,	// (0x0002d98e) main_mup3_pane_t1_ParamLimits

0x7569,	// (0x0002d98e) main_mup3_pane_t1

0x75dd,	// (0x0002da02) main_mup3_pane_t2_ParamLimits

0x75dd,	// (0x0002da02) main_mup3_pane_t2

0x76b1,	// (0x0002dad6) main_mup3_pane_t4_ParamLimits

0x76b1,	// (0x0002dad6) main_mup3_pane_t4

0x770f,	// (0x0002db34) main_mup3_pane_t5_ParamLimits

0x770f,	// (0x0002db34) main_mup3_pane_t5

0x77cb,	// (0x0002dbf0) main_mup3_pane_t6_ParamLimits

0x77cb,	// (0x0002dbf0) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00035bd3) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00035bd3) main_mup3_pane_t

0x7883,	// (0x0002dca8) mup3_progress_pane_ParamLimits

0x7883,	// (0x0002dca8) mup3_progress_pane

0x790f,	// (0x0002dd34) popup_mup3_control_window_ParamLimits

0x790f,	// (0x0002dd34) popup_mup3_control_window

0xc4a0,	// (0x000328c5) popup_mup3_text_window

0x7941,	// (0x0002dd66) mup3_progress_pane_t1

0x7960,	// (0x0002dd85) mup3_progress_pane_t2

0xc4a8,	// (0x000328cd) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00035be0) mup3_progress_pane_t

0xc4c5,	// (0x000328ea) mup_progress_pane_cp03

0x1da5,	// (0x000281ca) bg_tb_trans_pane_cp04

0x797f,	// (0x0002dda4) mup3_volume_pane

0x7987,	// (0x0002ddac) popup_mup3_control_window_g1

0x7990,	// (0x0002ddb5) mup3_volume_pane_g1

0x7999,	// (0x0002ddbe) mup3_volume_pane_g2

0x79a2,	// (0x0002ddc7) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00035be7) mup3_volume_pane_g

0x1da5,	// (0x000281ca) bg_tb_trans_pane_cp03

0xc4d5,	// (0x000328fa) popup_mup3_text_window_g1

0xc4dd,	// (0x00032902) popup_mup3_text_window_t1

0x2adf,	// (0x00028f04) list_calc_item_pane_g1_ParamLimits

0xbe9b,	// (0x000322c0) mup_volume_pane_cp_g1

0x72b0,	// (0x0002d6d5) main_touch_calib_pane_t3

0x72c4,	// (0x0002d6e9) main_touch_calib_pane_t4

0x72d8,	// (0x0002d6fd) main_touch_calib_pane_t5

0x1daf,	// (0x000281d4) aid_cell_size_toolbar2

0x1db7,	// (0x000281dc) aid_popup3_width_pane

0x1df3,	// (0x00028218) aid_zoom_text_msg_primary

0xb211,	// (0x00031636) vorec_t7

0x2a43,	// (0x00028e68) bg_calc_paper_pane_g1_ParamLimits

0x2a4f,	// (0x00028e74) bg_calc_paper_pane_g2_ParamLimits

0x2a5b,	// (0x00028e80) bg_calc_paper_pane_g3_ParamLimits

0x2a67,	// (0x00028e8c) bg_calc_paper_pane_g4_ParamLimits

0x2a73,	// (0x00028e98) bg_calc_paper_pane_g5_ParamLimits

0x2a7f,	// (0x00028ea4) bg_calc_paper_pane_g6_ParamLimits

0x2a90,	// (0x00028eb5) bg_calc_paper_pane_g7_ParamLimits

0x2aa1,	// (0x00028ec6) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0003559a) bg_calc_paper_pane_g_ParamLimits

0x2ab4,	// (0x00028ed9) calc_bg_paper_pane_g9_ParamLimits

0x3151,	// (0x00029576) image_qvga_pane_ParamLimits

0x3151,	// (0x00029576) image_qvga_pane

0x2749,	// (0x00028b6e) bg_popup_sub_pane_cp04_ParamLimits

0x5924,	// (0x0002bd49) popup_mup_playback_window_g1_ParamLimits

0x5930,	// (0x0002bd55) popup_mup_playback_window_t1_ParamLimits

0x5945,	// (0x0002bd6a) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00035926) popup_mup_playback_window_t_ParamLimits

0x6e0d,	// (0x0002d232) main_mup2_pane_g3_ParamLimits

0x6e0d,	// (0x0002d232) main_mup2_pane_g3

0x35fa,	// (0x00029a1f) popup_toolbar_window_cp04

0x613e,	// (0x0002c563) popup_call2_audio_second_window_g3_ParamLimits

0x613e,	// (0x0002c563) popup_call2_audio_second_window_g3

0x6548,	// (0x0002c96d) popup_call2_audio_first_window_g4_ParamLimits

0x6548,	// (0x0002c96d) popup_call2_audio_first_window_g4

0xb91d,	// (0x00031d42) popup_call2_audio_in_window_g4_ParamLimits

0xb91d,	// (0x00031d42) popup_call2_audio_in_window_g4

0x595a,	// (0x0002bd7f) aid_area_sk_bg_cut_ParamLimits

0x595a,	// (0x0002bd7f) aid_area_sk_bg_cut

0x5978,	// (0x0002bd9d) aid_area_sk_bg_cut_2_ParamLimits

0x5978,	// (0x0002bd9d) aid_area_sk_bg_cut_2

0x7113,	// (0x0002d538) aid_placing_details_win

0x711b,	// (0x0002d540) aid_placing_details_win_2

0xc307,	// (0x0003272c) camera2_autofocus_pane_g1_ParamLimits

0x1fb8,	// (0x000283dd) popup_fixed_preview_cale_window_ParamLimits

0x1fb8,	// (0x000283dd) popup_fixed_preview_cale_window

0x5007,	// (0x0002b42c) navi_slider_pane_g3

0x5010,	// (0x0002b435) navi_slider_pane_g4

0x5019,	// (0x0002b43e) navi_slider_pane_g5

0x5007,	// (0x0002b42c) navi_slider_pane_g6

0xb2cd,	// (0x000316f2) navi_slider_pane_g7

0x5544,	// (0x0002b969) mup_scale_pane_g3

0x554d,	// (0x0002b972) mup_scale_pane_g4

0x5556,	// (0x0002b97b) mup_scale_pane_g5

0x555f,	// (0x0002b984) mup_scale_pane_g6

0x5568,	// (0x0002b98d) mup_scale_pane_g7

0x5007,	// (0x0002b42c) cams2_slider_pane_g3

0xbf50,	// (0x00032375) cams2_slider_pane_g4

0xbf58,	// (0x0003237d) cams2_slider_pane_g5

0x5007,	// (0x0002b42c) cams2_slider_pane_g6

0xbf60,	// (0x00032385) cams2_slider_pane_g7

0xc18e,	// (0x000325b3) camera2_autofocus_pane_cp_g1

0xc4eb,	// (0x00032910) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4eb,	// (0x00032910) bg_popup_preview_window_pane_cp02

0xc4f7,	// (0x0003291c) list_fp_cale_pane_ParamLimits

0xc4f7,	// (0x0003291c) list_fp_cale_pane

0xc503,	// (0x00032928) popup_fixed_preview_cale_window_t1_ParamLimits

0xc503,	// (0x00032928) popup_fixed_preview_cale_window_t1

0x79ab,	// (0x0002ddd0) popup_fixed_preview_cale_window_t2_ParamLimits

0x79ab,	// (0x0002ddd0) popup_fixed_preview_cale_window_t2

0x79c0,	// (0x0002dde5) popup_fixed_preview_cale_window_t3_ParamLimits

0x79c0,	// (0x0002dde5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00035bee) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00035bee) popup_fixed_preview_cale_window_t

0x79d5,	// (0x0002ddfa) list_single_fp_cale_pane_ParamLimits

0x79d5,	// (0x0002ddfa) list_single_fp_cale_pane

0xc521,	// (0x00032946) list_single_fp_cale_pane_g1_ParamLimits

0xc521,	// (0x00032946) list_single_fp_cale_pane_g1

0xc52d,	// (0x00032952) list_single_fp_cale_pane_g2_ParamLimits

0xc52d,	// (0x00032952) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00035bf5) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00035bf5) list_single_fp_cale_pane_g

0xc546,	// (0x0003296b) list_single_fp_cale_pane_t1_ParamLimits

0xc546,	// (0x0003296b) list_single_fp_cale_pane_t1

0xc558,	// (0x0003297d) list_single_fp_cale_pane_t2_ParamLimits

0xc558,	// (0x0003297d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00035bfc) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00035bfc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1da5,	// (0x000281ca) main_dialer_pane

0x79ed,	// (0x0002de12) aid_cell_size_keypad

0x79f7,	// (0x0002de1c) dialer_ne_pane

0x79ff,	// (0x0002de24) grid_dialer_command_1_pane

0x7a07,	// (0x0002de2c) grid_dialer_command_2_pane

0x7a0f,	// (0x0002de34) grid_dialer_keypad_pane

0x7a21,	// (0x0002de46) bg_popup_call_pane_cp06_ParamLimits

0x7a21,	// (0x0002de46) bg_popup_call_pane_cp06

0x7a2d,	// (0x0002de52) dialer_ne_clear_pane_ParamLimits

0x7a2d,	// (0x0002de52) dialer_ne_clear_pane

0xc58b,	// (0x000329b0) dialer_ne_pane_g1

0xc593,	// (0x000329b8) dialer_ne_pane_t1_ParamLimits

0xc593,	// (0x000329b8) dialer_ne_pane_t1

0x7a39,	// (0x0002de5e) dialer_ne_pane_t2_ParamLimits

0x7a39,	// (0x0002de5e) dialer_ne_pane_t2

0x7a63,	// (0x0002de88) dialer_ne_pane_t3_ParamLimits

0x7a63,	// (0x0002de88) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00035c01) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00035c01) dialer_ne_pane_t

0x7a93,	// (0x0002deb8) dialer_ne_pane_t3_copy1_ParamLimits

0x7a93,	// (0x0002deb8) dialer_ne_pane_t3_copy1

0x7ac2,	// (0x0002dee7) cell_dialer_keypad_pane_ParamLimits

0x7ac2,	// (0x0002dee7) cell_dialer_keypad_pane

0x7ad9,	// (0x0002defe) cell_dialer_command_1_pane_ParamLimits

0x7ad9,	// (0x0002defe) cell_dialer_command_1_pane

0x7aef,	// (0x0002df14) cell_dialer_command_2_pane_ParamLimits

0x7aef,	// (0x0002df14) cell_dialer_command_2_pane

0xc5a5,	// (0x000329ca) bg_button_pane_cp02_ParamLimits

0xc5a5,	// (0x000329ca) bg_button_pane_cp02

0x7afe,	// (0x0002df23) cell_dialer_keypad_pane_g1_ParamLimits

0x7afe,	// (0x0002df23) cell_dialer_keypad_pane_g1

0xc5a5,	// (0x000329ca) bg_button_pane_cp03_ParamLimits

0xc5a5,	// (0x000329ca) bg_button_pane_cp03

0x7b13,	// (0x0002df38) cell_dialer_command_1_pane_g1_ParamLimits

0x7b13,	// (0x0002df38) cell_dialer_command_1_pane_g1

0xc5b1,	// (0x000329d6) bg_button_pane_cp04

0x7b27,	// (0x0002df4c) cell_dialer_command_2_pane_g1

0x4ff6,	// (0x0002b41b) bg_button_pane_cp06

0xc5b9,	// (0x000329de) dialer_ne_clear_pane_g1

0x4e9a,	// (0x0002b2bf) navi_pane_g2

0x4ec8,	// (0x0002b2ed) navi_pane_g3

0x0002,

0xf404,	// (0x00035829) navi_pane_g

0x4f55,	// (0x0002b37a) navi_pane_mv_g2

0x4f7c,	// (0x0002b3a1) navi_pane_mv_g5

0x4f84,	// (0x0002b3a9) navi_pane_mv_t1

0x2a37,	// (0x00028e5c) main_clock2_pane

0x7b61,	// (0x0002df86) main_clock2_list_pane_ParamLimits

0x7b61,	// (0x0002df86) main_clock2_list_pane

0x7b9b,	// (0x0002dfc0) main_clock2_pane_t1_ParamLimits

0x7b9b,	// (0x0002dfc0) main_clock2_pane_t1

0x7bd9,	// (0x0002dffe) main_clock2_pane_t2_ParamLimits

0x7bd9,	// (0x0002dffe) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00035c08) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00035c08) main_clock2_pane_t

0x7c76,	// (0x0002e09b) popup_clock_analogue_window_cp03_ParamLimits

0x7c76,	// (0x0002e09b) popup_clock_analogue_window_cp03

0x7c9d,	// (0x0002e0c2) popup_clock_digital_window_cp02_ParamLimits

0x7c9d,	// (0x0002e0c2) popup_clock_digital_window_cp02

0x7d12,	// (0x0002e137) main_clock2_list_single_pane_ParamLimits

0x7d12,	// (0x0002e137) main_clock2_list_single_pane

0x4ff6,	// (0x0002b41b) list_highlight_pane_cp05

0xc5c1,	// (0x000329e6) main_clock2_list_single_pane_t1

0x35fa,	// (0x00029a1f) popup_toolbar_window_cp04_ParamLimits

0x713d,	// (0x0002d562) camera2_autofocus_pane_g2_ParamLimits

0x713d,	// (0x0002d562) camera2_autofocus_pane_g2

0x7149,	// (0x0002d56e) camera2_autofocus_pane_g3_ParamLimits

0x7149,	// (0x0002d56e) camera2_autofocus_pane_g3

0x7155,	// (0x0002d57a) camera2_autofocus_pane_g4_ParamLimits

0x7155,	// (0x0002d57a) camera2_autofocus_pane_g4

0x7161,	// (0x0002d586) camera2_autofocus_pane_g5_ParamLimits

0x7161,	// (0x0002d586) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00035b51) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00035b51) camera2_autofocus_pane_g

0x734e,	// (0x0002d773) camera2_autofocus_pane_cp_g2

0x7356,	// (0x0002d77b) camera2_autofocus_pane_cp_g3

0x735e,	// (0x0002d783) camera2_autofocus_pane_cp_g4

0x7366,	// (0x0002d78b) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00035bb7) camera2_autofocus_pane_cp_g

0x7a19,	// (0x0002de3e) popup_dialer_spcha_window

0x1da5,	// (0x000281ca) bg_popup_sub_pane_cp07

0xc5cf,	// (0x000329f4) list_spcha_pane

0xc5d7,	// (0x000329fc) list_single_spcha_pane_ParamLimits

0xc5d7,	// (0x000329fc) list_single_spcha_pane

0x1da5,	// (0x000281ca) list_highlight_pane_cp06

0xc5e8,	// (0x00032a0d) list_single_spcha_pane_t1

0xb6c7,	// (0x00031aec) popup_call2_audio_out_window_g4_ParamLimits

0xb6c7,	// (0x00031aec) popup_call2_audio_out_window_g4

0x1da5,	// (0x000281ca) main_imed2_pane

0xbcae,	// (0x000320d3) popup_imed_adjust2_window

0x69f3,	// (0x0002ce18) popup_imed_trans_window_ParamLimits

0x69f3,	// (0x0002ce18) popup_imed_trans_window

0xbfca,	// (0x000323ef) popup_blid_sat_info2_window_t1

0xbfd8,	// (0x000323fd) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00035ae6) popup_blid_sat_info2_window_t

0x7d42,	// (0x0002e167) aid_size_cell_colour_35

0x7d62,	// (0x0002e187) aid_size_cell_colour_112

0x7d82,	// (0x0002e1a7) aid_size_cell_effect

0xbc86,	// (0x000320ab) bg_tb_trans_pane_cp02

0x4621,	// (0x0002aa46) heading_imed_pane

0x7da2,	// (0x0002e1c7) listscroll_imed_pane

0xc5f6,	// (0x00032a1b) heading_imed_pane_g1

0xc5fe,	// (0x00032a23) heading_imed_pane_t1

0xc60c,	// (0x00032a31) grid_imed_colour_35_pane_ParamLimits

0xc60c,	// (0x00032a31) grid_imed_colour_35_pane

0x7dae,	// (0x0002e1d3) grid_imed_effect_pane

0xc627,	// (0x00032a4c) list_imed_aspect_pane

0x7dc3,	// (0x0002e1e8) scroll_pane_cp027_ParamLimits

0x7dc3,	// (0x0002e1e8) scroll_pane_cp027

0x7dd4,	// (0x0002e1f9) cell_imed_effect_pane_ParamLimits

0x7dd4,	// (0x0002e1f9) cell_imed_effect_pane

0xc62f,	// (0x00032a54) cell_imed_colour_pane_ParamLimits

0xc62f,	// (0x00032a54) cell_imed_colour_pane

0xc671,	// (0x00032a96) cell_imed_colour_pane_g1_ParamLimits

0xc671,	// (0x00032a96) cell_imed_colour_pane_g1

0xc682,	// (0x00032aa7) hgihlgiht_grid_pane_cp016_ParamLimits

0xc682,	// (0x00032aa7) hgihlgiht_grid_pane_cp016

0x7dfb,	// (0x0002e220) cell_imed_effect_pane_g1

0x7e03,	// (0x0002e228) grid_highlight_pane_cp017

0xc693,	// (0x00032ab8) list_imed_single_pane_ParamLimits

0xc693,	// (0x00032ab8) list_imed_single_pane

0x1da5,	// (0x000281ca) list_highlight_pane_cp07

0xc6aa,	// (0x00032acf) list_imed_aspect_pane_comp1_t1

0xbc86,	// (0x000320ab) bg_tb_trans_pane_cp05

0xc6cc,	// (0x00032af1) popup_imed_adjust2_window_g1

0xc6f3,	// (0x00032b18) popup_imed_adjust2_window_t1

0xc70b,	// (0x00032b30) slider_imed_adjust_pane

0xc71f,	// (0x00032b44) slider_imed_adjust_pane_g1

0xc72f,	// (0x00032b54) slider_imed_adjust_pane_g2

0xc73f,	// (0x00032b64) slider_imed_adjust_pane_g3

0xc750,	// (0x00032b75) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00035c25) slider_imed_adjust_pane_g

0x7e0c,	// (0x0002e231) aid_size_cell_clipart2

0x7e18,	// (0x0002e23d) grid_imed_clipart_pane

0xc761,	// (0x00032b86) scroll_pane_cp031

0x7e22,	// (0x0002e247) cell_imed_clipart_pane_ParamLimits

0x7e22,	// (0x0002e247) cell_imed_clipart_pane

0x7e49,	// (0x0002e26e) cell_imed_clipart_pane_g1

0x1da5,	// (0x000281ca) grid_highlight_pane_cp014

0x7b76,	// (0x0002df9b) main_clock2_pane_g1_ParamLimits

0x7b76,	// (0x0002df9b) main_clock2_pane_g1

0x7cbd,	// (0x0002e0e2) aid_call2_pane_cp10

0x7ccf,	// (0x0002e0f4) aid_call_pane_cp10

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g1

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g2

0x7ce1,	// (0x0002e106) popup_clock_analogue_window_cp10_g3

0x7ce1,	// (0x0002e106) popup_clock_analogue_window_cp10_g4

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00035c13) popup_clock_analogue_window_cp10_g

0x7cf3,	// (0x0002e118) popup_clock_analogue_window_cp10_t1

0x127b,	// (0x000276a0) clock_digital_number_pane_cp10_ParamLimits

0x127b,	// (0x000276a0) clock_digital_number_pane_cp10

0x1293,	// (0x000276b8) clock_digital_number_pane_cp11_ParamLimits

0x1293,	// (0x000276b8) clock_digital_number_pane_cp11

0x12ab,	// (0x000276d0) clock_digital_number_pane_cp12_ParamLimits

0x12ab,	// (0x000276d0) clock_digital_number_pane_cp12

0x12c3,	// (0x000276e8) clock_digital_number_pane_cp13_ParamLimits

0x12c3,	// (0x000276e8) clock_digital_number_pane_cp13

0x12db,	// (0x00027700) clock_digital_separator_pane_cp10_ParamLimits

0x12db,	// (0x00027700) clock_digital_separator_pane_cp10

0x7d24,	// (0x0002e149) popup_clock_digital_window_cp02_t1_ParamLimits

0x7d24,	// (0x0002e149) popup_clock_digital_window_cp02_t1

0x2741,	// (0x00028b66) clock_digital_number_pane_cp10_g1

0x2741,	// (0x00028b66) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00035c2e) clock_digital_number_pane_cp10_g

0x2741,	// (0x00028b66) clock_digital_separator_pane_cp10_g1

0x2741,	// (0x00028b66) clock_digital_separator_pane_g2_cp10

0x4fc6,	// (0x0002b3eb) navi_pane_vded_g4

0x4fcf,	// (0x0002b3f4) navi_pane_vded_g5

0x4fd8,	// (0x0002b3fd) navi_pane_vded_t1

0x1da5,	// (0x000281ca) main_vded_pane

0x7e52,	// (0x0002e277) main_vded_pane_g1

0x7e5e,	// (0x0002e283) main_vded_pane_g2

0x7e68,	// (0x0002e28d) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00035c33) main_vded_pane_g

0x7e72,	// (0x0002e297) main_vded_pane_t1

0x7e80,	// (0x0002e2a5) main_vded_pane_t2

0x0001,

0xf815,	// (0x00035c3a) main_vded_pane_t

0x7e8e,	// (0x0002e2b3) vded_slider_pane

0x7e98,	// (0x0002e2bd) vded_video_pane

0xc769,	// (0x00032b8e) vded_video_pane_g1

0x7ea2,	// (0x0002e2c7) vded_video_pane_g2

0xc18e,	// (0x000325b3) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00035c3f) vded_video_pane_g

0xc773,	// (0x00032b98) vded_slider_pane_g1

0xbe9b,	// (0x000322c0) vded_slider_pane_g2

0xc77c,	// (0x00032ba1) vded_slider_pane_g3

0xc785,	// (0x00032baa) vded_slider_pane_g4

0xc78e,	// (0x00032bb3) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00035c46) vded_slider_pane_g

0x78f7,	// (0x0002dd1c) mup3_rocker_pane_ParamLimits

0x78f7,	// (0x0002dd1c) mup3_rocker_pane

0x7eab,	// (0x0002e2d0) mup3_control_keys_pane_g1

0x7eb3,	// (0x0002e2d8) mup3_control_keys_pane_g2

0x7ebb,	// (0x0002e2e0) mup3_control_keys_pane_g3

0x7ec3,	// (0x0002e2e8) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00035c51) mup3_control_keys_pane_g

0x1ff9,	// (0x0002841e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1ff9,	// (0x0002841e) popup_toolbar2_fixed_window_cp01

0x792b,	// (0x0002dd50) popup_toolbar2_fixed_window_cp02_ParamLimits

0x792b,	// (0x0002dd50) popup_toolbar2_fixed_window_cp02

0x62b0,	// (0x0002c6d5) popup_call2_audio_second_window_t4_ParamLimits

0x62b0,	// (0x0002c6d5) popup_call2_audio_second_window_t4

0xb534,	// (0x00031959) popup_call2_audio_first_window_t6_ParamLimits

0xb534,	// (0x00031959) popup_call2_audio_first_window_t6

0xb7ca,	// (0x00031bef) popup_call2_audio_out_window_t6_ParamLimits

0xb7ca,	// (0x00031bef) popup_call2_audio_out_window_t6

0x1da5,	// (0x000281ca) main_vitu_pane

0x7ed3,	// (0x0002e2f8) aid_size_cell_itu_ParamLimits

0x7ed3,	// (0x0002e2f8) aid_size_cell_itu

0x2017,	// (0x0002843c) bg_popup_window_pane_cp08_ParamLimits

0x2017,	// (0x0002843c) bg_popup_window_pane_cp08

0x7ee9,	// (0x0002e30e) field_vitu_entry_pane_ParamLimits

0x7ee9,	// (0x0002e30e) field_vitu_entry_pane

0x7f00,	// (0x0002e325) grid_vitu_function_pane_ParamLimits

0x7f00,	// (0x0002e325) grid_vitu_function_pane

0x7f1b,	// (0x0002e340) grid_vitu_itu_pane_ParamLimits

0x7f1b,	// (0x0002e340) grid_vitu_itu_pane

0x7f39,	// (0x0002e35e) cell_vitu_itu_pane_ParamLimits

0x7f39,	// (0x0002e35e) cell_vitu_itu_pane

0x7f5d,	// (0x0002e382) cell_vitu_function_pane_ParamLimits

0x7f5d,	// (0x0002e382) cell_vitu_function_pane

0x2017,	// (0x0002843c) bg_popup_sub_pane_cp08_ParamLimits

0x2017,	// (0x0002843c) bg_popup_sub_pane_cp08

0x7f78,	// (0x0002e39d) field_vitu_entry_pane_t1_ParamLimits

0x7f78,	// (0x0002e39d) field_vitu_entry_pane_t1

0xc7af,	// (0x00032bd4) field_vitu_entry_pane_t2_ParamLimits

0xc7af,	// (0x00032bd4) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00035c5f) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00035c5f) field_vitu_entry_pane_t

0xc7cc,	// (0x00032bf1) bg_button_pane_cp05_ParamLimits

0xc7cc,	// (0x00032bf1) bg_button_pane_cp05

0x7f98,	// (0x0002e3bd) cell_vitu_itu_pane_g1

0x7fb0,	// (0x0002e3d5) cell_vitu_itu_pane_t1_ParamLimits

0x7fb0,	// (0x0002e3d5) cell_vitu_itu_pane_t1

0x7fc2,	// (0x0002e3e7) cell_vitu_itu_pane_t2_ParamLimits

0x7fc2,	// (0x0002e3e7) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00035c64) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00035c64) cell_vitu_itu_pane_t

0xc7da,	// (0x00032bff) bg_button_pane_cp07

0x7ff7,	// (0x0002e41c) cell_vitu_function_pane_g1

0xb10b,	// (0x00031530) main_calc_pane_g1

0x1de7,	// (0x0002820c) aid_visual_content_pane

0x1da5,	// (0x000281ca) main_vradio_pane

0x8000,	// (0x0002e425) main_vradio_pane_g1_ParamLimits

0x8000,	// (0x0002e425) main_vradio_pane_g1

0xc7e4,	// (0x00032c09) main_vradio_pane_g2_ParamLimits

0xc7e4,	// (0x00032c09) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00035c6b) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00035c6b) main_vradio_pane_g

0x8019,	// (0x0002e43e) main_vradio_pane_t1_ParamLimits

0x8019,	// (0x0002e43e) main_vradio_pane_t1

0x802e,	// (0x0002e453) main_vradio_pane_t2_ParamLimits

0x802e,	// (0x0002e453) main_vradio_pane_t2

0xc7f1,	// (0x00032c16) main_vradio_pane_t3_ParamLimits

0xc7f1,	// (0x00032c16) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00035c70) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00035c70) main_vradio_pane_t

0x8043,	// (0x0002e468) vradio_rocker_control_pane_ParamLimits

0x8043,	// (0x0002e468) vradio_rocker_control_pane

0x8055,	// (0x0002e47a) vradio_station_info_pane_ParamLimits

0x8055,	// (0x0002e47a) vradio_station_info_pane

0xc805,	// (0x00032c2a) vradio_frequency_info_pane_ParamLimits

0xc805,	// (0x00032c2a) vradio_frequency_info_pane

0xc18e,	// (0x000325b3) vradio_station_info_pane_g1

0xc814,	// (0x00032c39) vradio_station_info_pane_t1_ParamLimits

0xc814,	// (0x00032c39) vradio_station_info_pane_t1

0xc836,	// (0x00032c5b) vradio_station_info_pane_t2_ParamLimits

0xc836,	// (0x00032c5b) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00035c77) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00035c77) vradio_station_info_pane_t

0xc848,	// (0x00032c6d) vradio_tuning_pane

0xc850,	// (0x00032c75) vradio_rocker_control_pane_g1

0xc858,	// (0x00032c7d) vradio_rocker_control_pane_g2

0xc860,	// (0x00032c85) vradio_rocker_control_pane_g3

0xc868,	// (0x00032c8d) vradio_rocker_control_pane_g4

0xc870,	// (0x00032c95) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00035c7c) vradio_rocker_control_pane_g

0x8067,	// (0x0002e48c) vradio_frequency_info_pane_g1

0xc878,	// (0x00032c9d) vradio_frequency_info_pane_t1_ParamLimits

0xc878,	// (0x00032c9d) vradio_frequency_info_pane_t1

0x8071,	// (0x0002e496) vradio_tuning_pane_g1

0x807c,	// (0x0002e4a1) vradio_tuning_pane_t1

0x1e3c,	// (0x00028261) area_side_right_pane_ParamLimits

0x1e3c,	// (0x00028261) area_side_right_pane

0xbc4d,	// (0x00032072) status_small_pane_g1

0xbc55,	// (0x0003207a) status_small_pane_g2

0xbc5e,	// (0x00032083) status_small_pane_g3

0xbc67,	// (0x0003208c) status_small_pane_g4

0x0003,

0xf617,	// (0x00035a3c) status_small_pane_g

0xbc70,	// (0x00032095) status_small_pane_t1

0x1da5,	// (0x000281ca) main_video3_pane

0xc88c,	// (0x00032cb1) cams_zoom_vslider_pane

0xc894,	// (0x00032cb9) image3_wide_pane_ParamLimits

0xc894,	// (0x00032cb9) image3_wide_pane

0xc8ae,	// (0x00032cd3) image3_wide_small_pane

0xc8ba,	// (0x00032cdf) main_video3_pane_g1_ParamLimits

0xc8ba,	// (0x00032cdf) main_video3_pane_g1

0xc8d6,	// (0x00032cfb) main_video3_pane_g2_ParamLimits

0xc8d6,	// (0x00032cfb) main_video3_pane_g2

0x0001,

0xf862,	// (0x00035c87) main_video3_pane_g_ParamLimits

0xf862,	// (0x00035c87) main_video3_pane_g

0xc8f2,	// (0x00032d17) main_video3_pane_t1_ParamLimits

0xc8f2,	// (0x00032d17) main_video3_pane_t1

0xc91d,	// (0x00032d42) main_video3_pane_t2_ParamLimits

0xc91d,	// (0x00032d42) main_video3_pane_t2

0xc948,	// (0x00032d6d) main_video3_pane_t3_ParamLimits

0xc948,	// (0x00032d6d) main_video3_pane_t3

0x0002,

0xf867,	// (0x00035c8c) main_video3_pane_t_ParamLimits

0xf867,	// (0x00035c8c) main_video3_pane_t

0xc975,	// (0x00032d9a) cams_zoom_vslider_pane_g1

0xc97e,	// (0x00032da3) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00035c93) cams_zoom_vslider_pane_g

0xc986,	// (0x00032dab) small_slider_vertical_pane

0xc18e,	// (0x000325b3) small_slider_vertical_pane_g1

0xc18e,	// (0x000325b3) small_slider_vertical_pane_g2

0xc98e,	// (0x00032db3) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00035c98) small_slider_vertical_pane_g

0x1da5,	// (0x000281ca) main_hwr_training_pane

0xc997,	// (0x00032dbc) hwr_training_instruct_pane_ParamLimits

0xc997,	// (0x00032dbc) hwr_training_instruct_pane

0x808b,	// (0x0002e4b0) hwr_training_navi_pane_ParamLimits

0x808b,	// (0x0002e4b0) hwr_training_navi_pane

0x80aa,	// (0x0002e4cf) hwr_training_write_pane_ParamLimits

0x80aa,	// (0x0002e4cf) hwr_training_write_pane

0x1da5,	// (0x000281ca) bg_frame_shadow_pane

0xc9ce,	// (0x00032df3) hwr_training_write_pane_g1

0xc9d6,	// (0x00032dfb) hwr_training_write_pane_g2

0xc9de,	// (0x00032e03) hwr_training_write_pane_g3

0xc9e6,	// (0x00032e0b) hwr_training_write_pane_g4

0xc9ee,	// (0x00032e13) hwr_training_write_pane_g5

0xc9f6,	// (0x00032e1b) hwr_training_write_pane_g6

0xc9fe,	// (0x00032e23) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00035c9f) hwr_training_write_pane_g

0xca06,	// (0x00032e2b) hwr_training_navi_pane_g1_ParamLimits

0xca06,	// (0x00032e2b) hwr_training_navi_pane_g1

0xca18,	// (0x00032e3d) hwr_training_navi_pane_g2_ParamLimits

0xca18,	// (0x00032e3d) hwr_training_navi_pane_g2

0xca2a,	// (0x00032e4f) hwr_training_navi_pane_g3_ParamLimits

0xca2a,	// (0x00032e4f) hwr_training_navi_pane_g3

0xca3a,	// (0x00032e5f) hwr_training_navi_pane_g4_ParamLimits

0xca3a,	// (0x00032e5f) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00035cae) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00035cae) hwr_training_navi_pane_g

0xca47,	// (0x00032e6c) hwr_training_navi_pane_t1

0x80e5,	// (0x0002e50a) list_single_hwr_training_instruct_pane_ParamLimits

0x80e5,	// (0x0002e50a) list_single_hwr_training_instruct_pane

0xca55,	// (0x00032e7a) list_single_hwr_training_instruct_pane_t1

0xc0ce,	// (0x000324f3) bg_frame_shadow_pane_g1

0xca64,	// (0x00032e89) bg_frame_shadow_pane_g2

0xca6c,	// (0x00032e91) bg_frame_shadow_pane_g3

0xca74,	// (0x00032e99) bg_frame_shadow_pane_g4

0xca7c,	// (0x00032ea1) bg_frame_shadow_pane_g5

0xca84,	// (0x00032ea9) bg_frame_shadow_pane_g6

0xca8c,	// (0x00032eb1) bg_frame_shadow_pane_g7

0x2bdd,	// (0x00029002) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00035cb9) bg_frame_shadow_pane_g

0x1da5,	// (0x000281ca) main_video_tele_dialer_pane

0x1302,	// (0x00027727) aid_size_cell_video_keypad_ParamLimits

0x1302,	// (0x00027727) aid_size_cell_video_keypad

0x131c,	// (0x00027741) grid_video_dialer_keypad_pane_ParamLimits

0x131c,	// (0x00027741) grid_video_dialer_keypad_pane

0x1368,	// (0x0002778d) video_down_pane_cp_ParamLimits

0x1368,	// (0x0002778d) video_down_pane_cp

0x137c,	// (0x000277a1) cell_video_dialer_keypad_pane_ParamLimits

0x137c,	// (0x000277a1) cell_video_dialer_keypad_pane

0xca94,	// (0x00032eb9) bg_button_pane_cp08_ParamLimits

0xca94,	// (0x00032eb9) bg_button_pane_cp08

0x811e,	// (0x0002e543) cell_video_dialer_keypad_pane_g1_ParamLimits

0x811e,	// (0x0002e543) cell_video_dialer_keypad_pane_g1

0x78e1,	// (0x0002dd06) mup3_rocker2_pane_ParamLimits

0x78e1,	// (0x0002dd06) mup3_rocker2_pane

0xc18e,	// (0x000325b3) mup3_rocker2_pane_g1

0x68dc,	// (0x0002cd01) main_dialer2_pane

0x1da5,	// (0x000281ca) main_mp4_pane

0xcaa8,	// (0x00032ecd) main_mp4_pane_g1_ParamLimits

0xcaa8,	// (0x00032ecd) main_mp4_pane_g1

0xcaa8,	// (0x00032ecd) main_mp4_pane_g2_ParamLimits

0xcaa8,	// (0x00032ecd) main_mp4_pane_g2

0x139e,	// (0x000277c3) main_mp4_pane_g3_ParamLimits

0x139e,	// (0x000277c3) main_mp4_pane_g3

0xcab6,	// (0x00032edb) main_mp4_pane_g4_ParamLimits

0xcab6,	// (0x00032edb) main_mp4_pane_g4

0xcade,	// (0x00032f03) main_mp4_pane_g5_ParamLimits

0xcade,	// (0x00032f03) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00035cd9) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00035cd9) main_mp4_pane_g

0xcb2e,	// (0x00032f53) main_mp4_pane_t1_ParamLimits

0xcb2e,	// (0x00032f53) main_mp4_pane_t1

0xcb8a,	// (0x00032faf) main_mp4_pane_t2_ParamLimits

0xcb8a,	// (0x00032faf) main_mp4_pane_t2

0xcbdc,	// (0x00033001) main_mp4_pane_t3_ParamLimits

0xcbdc,	// (0x00033001) main_mp4_pane_t3

0xcbfc,	// (0x00033021) main_mp4_pane_t4_ParamLimits

0xcbfc,	// (0x00033021) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00035ce6) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00035ce6) main_mp4_pane_t

0xcc40,	// (0x00033065) mp4_progress_pane_ParamLimits

0xcc40,	// (0x00033065) mp4_progress_pane

0xcc8a,	// (0x000330af) mp4_rocker_pane_ParamLimits

0xcc8a,	// (0x000330af) mp4_rocker_pane

0xccb2,	// (0x000330d7) mp4_progress_pane_t1

0xcccb,	// (0x000330f0) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00035cef) mp4_progress_pane_t

0xcce4,	// (0x00033109) mup_progress_pane_cp04

0xccf0,	// (0x00033115) mp4_rocker_pane_g1

0x13da,	// (0x000277ff) aid_cell_size_keypad2_ParamLimits

0x13da,	// (0x000277ff) aid_cell_size_keypad2

0x13f0,	// (0x00027815) dialer2_ne_pane_ParamLimits

0x13f0,	// (0x00027815) dialer2_ne_pane

0x140a,	// (0x0002782f) grid_dialer2_keypad_pane_ParamLimits

0x140a,	// (0x0002782f) grid_dialer2_keypad_pane

0xbf71,	// (0x00032396) bg_popup_call_pane_cp07_ParamLimits

0xbf71,	// (0x00032396) bg_popup_call_pane_cp07

0x8159,	// (0x0002e57e) dialer2_ne_pane_t1_ParamLimits

0x8159,	// (0x0002e57e) dialer2_ne_pane_t1

0x1428,	// (0x0002784d) cell_dialer2_keypad_pane_ParamLimits

0x1428,	// (0x0002784d) cell_dialer2_keypad_pane

0xcd0c,	// (0x00033131) bg_button_pane_pane_cp04_ParamLimits

0xcd0c,	// (0x00033131) bg_button_pane_pane_cp04

0x8198,	// (0x0002e5bd) cell_dialer2_keypad_pane_g1_ParamLimits

0x8198,	// (0x0002e5bd) cell_dialer2_keypad_pane_g1

0x34bc,	// (0x000298e1) aid_placing_vt_set_content_ParamLimits

0x34bc,	// (0x000298e1) aid_placing_vt_set_content

0x34e4,	// (0x00029909) aid_placing_vt_set_title_ParamLimits

0x34e4,	// (0x00029909) aid_placing_vt_set_title

0x1da5,	// (0x000281ca) main_image3_pane

0x14aa,	// (0x000278cf) area_side_right_pane_cp01_ParamLimits

0x14aa,	// (0x000278cf) area_side_right_pane_cp01

0xcaa8,	// (0x00032ecd) main_image3_pane_g1_ParamLimits

0xcaa8,	// (0x00032ecd) main_image3_pane_g1

0x14c1,	// (0x000278e6) main_image3_pane_g2_ParamLimits

0x14c1,	// (0x000278e6) main_image3_pane_g2

0x14e9,	// (0x0002790e) main_image3_pane_g3_ParamLimits

0x14e9,	// (0x0002790e) main_image3_pane_g3

0x1513,	// (0x00027938) main_image3_pane_g4_ParamLimits

0x1513,	// (0x00027938) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00035cfe) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00035cfe) main_image3_pane_g

0x153d,	// (0x00027962) main_image3_pane_t1_ParamLimits

0x153d,	// (0x00027962) main_image3_pane_t1

0x1595,	// (0x000279ba) main_image3_pane_t2_ParamLimits

0x1595,	// (0x000279ba) main_image3_pane_t2

0x15e7,	// (0x00027a0c) main_image3_pane_t3_ParamLimits

0x15e7,	// (0x00027a0c) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00035d07) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00035d07) main_image3_pane_t

0x2017,	// (0x0002843c) grid_sctrl_middle_pane_cp01_ParamLimits

0x2017,	// (0x0002843c) grid_sctrl_middle_pane_cp01

0x8200,	// (0x0002e625) cell_sctrl_middle_pane_cp01_ParamLimits

0x8200,	// (0x0002e625) cell_sctrl_middle_pane_cp01

0x821d,	// (0x0002e642) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x821d,	// (0x0002e642) cell_sctrl_middle_pane_cp01_g1

0x1da5,	// (0x000281ca) main_call4_pane

0x8233,	// (0x0002e658) aid_size_button_call4_ParamLimits

0x8233,	// (0x0002e658) aid_size_button_call4

0x8264,	// (0x0002e689) call4_windows_pane_ParamLimits

0x8264,	// (0x0002e689) call4_windows_pane

0x8284,	// (0x0002e6a9) grid_call4_button_pane_ParamLimits

0x8284,	// (0x0002e6a9) grid_call4_button_pane

0xcd4a,	// (0x0003316f) call4_windows_conf_pane

0xcd5f,	// (0x00033184) popup_call4_audio_first_window_ParamLimits

0xcd5f,	// (0x00033184) popup_call4_audio_first_window

0xcdab,	// (0x000331d0) popup_call4_audio_second_window_ParamLimits

0xcdab,	// (0x000331d0) popup_call4_audio_second_window

0xcdbf,	// (0x000331e4) popup_call4_audio_wait_window_ParamLimits

0xcdbf,	// (0x000331e4) popup_call4_audio_wait_window

0x82b1,	// (0x0002e6d6) cell_call4_button_pane_ParamLimits

0x82b1,	// (0x0002e6d6) cell_call4_button_pane

0x82da,	// (0x0002e6ff) bg_button_pane_cp09_ParamLimits

0x82da,	// (0x0002e6ff) bg_button_pane_cp09

0x82e6,	// (0x0002e70b) cell_call4_button_pane_g1_ParamLimits

0x82e6,	// (0x0002e70b) cell_call4_button_pane_g1

0x830c,	// (0x0002e731) cell_call4_button_pane_t1_ParamLimits

0x830c,	// (0x0002e731) cell_call4_button_pane_t1

0xce07,	// (0x0003322c) popup_call4_audio_conf_window_ParamLimits

0xce07,	// (0x0003322c) popup_call4_audio_conf_window

0x7941,	// (0x0002dd66) mup3_progress_pane_t1_ParamLimits

0x7960,	// (0x0002dd85) mup3_progress_pane_t2_ParamLimits

0xc4a8,	// (0x000328cd) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00035be0) mup3_progress_pane_t_ParamLimits

0xc4c5,	// (0x000328ea) mup_progress_pane_cp03_ParamLimits

0x7ecb,	// (0x0002e2f0) mup3_control_keys_pane_g4_copy1

0xcc6e,	// (0x00033093) mp4_rocker2_pane_ParamLimits

0xcc6e,	// (0x00033093) mp4_rocker2_pane

0xce1b,	// (0x00033240) mp4_rocker2_pane_g1

0xce23,	// (0x00033248) mp4_rocker2_pane_g2

0xce2b,	// (0x00033250) mp4_rocker2_pane_g3

0xce33,	// (0x00033258) mp4_rocker2_pane_g4

0xce3b,	// (0x00033260) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00035d10) mp4_rocker2_pane_g

0x1da5,	// (0x000281ca) main_camera4_pane

0x1da5,	// (0x000281ca) main_video4_pane

0x1336,	// (0x0002775b) main_video_tele_dialer_pane_t1_ParamLimits

0x1336,	// (0x0002775b) main_video_tele_dialer_pane_t1

0x134f,	// (0x00027774) main_video_tele_dialer_pane_t2_ParamLimits

0x134f,	// (0x00027774) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00035cca) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00035cca) main_video_tele_dialer_pane_t

0x1687,	// (0x00027aac) cam4_autofocus_pane_ParamLimits

0x1687,	// (0x00027aac) cam4_autofocus_pane

0x169d,	// (0x00027ac2) cam4_image_uncrop_pane_ParamLimits

0x169d,	// (0x00027ac2) cam4_image_uncrop_pane

0x16b7,	// (0x00027adc) cam4_indicators_pane_ParamLimits

0x16b7,	// (0x00027adc) cam4_indicators_pane

0x16e2,	// (0x00027b07) main_camera4_pane_g1_ParamLimits

0x16e2,	// (0x00027b07) main_camera4_pane_g1

0x16f5,	// (0x00027b1a) main_camera4_pane_g2_ParamLimits

0x16f5,	// (0x00027b1a) main_camera4_pane_g2

0x1708,	// (0x00027b2d) main_camera4_pane_g3_ParamLimits

0x1708,	// (0x00027b2d) main_camera4_pane_g3

0x171b,	// (0x00027b40) main_camera4_pane_g4_ParamLimits

0x171b,	// (0x00027b40) main_camera4_pane_g4

0x172e,	// (0x00027b53) main_camera4_pane_g5_ParamLimits

0x172e,	// (0x00027b53) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00035d1b) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00035d1b) main_camera4_pane_g

0x1752,	// (0x00027b77) main_camera4_pane_t1_ParamLimits

0x1752,	// (0x00027b77) main_camera4_pane_t1

0xce71,	// (0x00033296) bg_tb_trans_pane_cp06

0xce87,	// (0x000332ac) cam4_indicators_pane_g1

0xce98,	// (0x000332bd) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00035d36) cam4_indicators_pane_g

0xceb6,	// (0x000332db) cam4_indicators_pane_t1

0x17a2,	// (0x00027bc7) main_video4_pane_g1_ParamLimits

0x17a2,	// (0x00027bc7) main_video4_pane_g1

0x17b5,	// (0x00027bda) main_video4_pane_g2_ParamLimits

0x17b5,	// (0x00027bda) main_video4_pane_g2

0x17c9,	// (0x00027bee) main_video4_pane_g3_ParamLimits

0x17c9,	// (0x00027bee) main_video4_pane_g3

0x17dd,	// (0x00027c02) main_video4_pane_g4_ParamLimits

0x17dd,	// (0x00027c02) main_video4_pane_g4

0x0004,

0xf918,	// (0x00035d3d) main_video4_pane_g_ParamLimits

0xf918,	// (0x00035d3d) main_video4_pane_g

0x1805,	// (0x00027c2a) vid4_indicators_pane_ParamLimits

0x1805,	// (0x00027c2a) vid4_indicators_pane

0x1837,	// (0x00027c5c) video4_image_uncrop_cif_pane_ParamLimits

0x1837,	// (0x00027c5c) video4_image_uncrop_cif_pane

0x1851,	// (0x00027c76) video4_image_uncrop_nhd_pane_ParamLimits

0x1851,	// (0x00027c76) video4_image_uncrop_nhd_pane

0x169d,	// (0x00027ac2) video4_image_uncrop_vga_pane_ParamLimits

0x169d,	// (0x00027ac2) video4_image_uncrop_vga_pane

0xced8,	// (0x000332fd) bg_tb_trans_pane_cp07

0x1865,	// (0x00027c8a) vid4_indicators_pane_g1

0x1872,	// (0x00027c97) vid4_indicators_pane_g2

0x187f,	// (0x00027ca4) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00035d48) vid4_indicators_pane_g

0x18a4,	// (0x00027cc9) vid4_indicators_pane_t1

0x834a,	// (0x0002e76f) cam4_autofocus_pane_g1

0x8352,	// (0x0002e777) cam4_autofocus_pane_g2

0x835a,	// (0x0002e77f) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00035d53) cam4_autofocus_pane_g

0x8362,	// (0x0002e787) cam4_autofocus_pane_g3_copy1

0x8102,	// (0x0002e527) video_down_pane_cp_t1

0x8110,	// (0x0002e535) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00035ccf) video_down_pane_cp_t

0x2017,	// (0x0002843c) popup_vitu2_window_ParamLimits

0x2017,	// (0x0002843c) popup_vitu2_window

0x18b6,	// (0x00027cdb) aid_size_cell2_itu2_ParamLimits

0x18b6,	// (0x00027cdb) aid_size_cell2_itu2

0x18dc,	// (0x00027d01) aid_size_cell_itu2_ParamLimits

0x18dc,	// (0x00027d01) aid_size_cell_itu2

0x1938,	// (0x00027d5d) bg_popup_window_pane_cp09_ParamLimits

0x1938,	// (0x00027d5d) bg_popup_window_pane_cp09

0x1946,	// (0x00027d6b) field_vitu2_entry_pane_ParamLimits

0x1946,	// (0x00027d6b) field_vitu2_entry_pane

0x196c,	// (0x00027d91) grid_vitu2_function_pane_ParamLimits

0x196c,	// (0x00027d91) grid_vitu2_function_pane

0x19bd,	// (0x00027de2) grid_vitu2_itu_pane_ParamLimits

0x19bd,	// (0x00027de2) grid_vitu2_itu_pane

0x1a4e,	// (0x00027e73) cell_vitu2_itu_pane_ParamLimits

0x1a4e,	// (0x00027e73) cell_vitu2_itu_pane

0x1a72,	// (0x00027e97) cell_vitu2_function_pane_ParamLimits

0x1a72,	// (0x00027e97) cell_vitu2_function_pane

0xceee,	// (0x00033313) bg_popup_call_pane_cp08_ParamLimits

0xceee,	// (0x00033313) bg_popup_call_pane_cp08

0xcf07,	// (0x0003332c) field_vitu2_entry_pane_g1

0xcf13,	// (0x00033338) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00035d5a) field_vitu2_entry_pane_g

0xcf2d,	// (0x00033352) field_vitu2_entry_pane_t1_ParamLimits

0xcf2d,	// (0x00033352) field_vitu2_entry_pane_t1

0xcf5e,	// (0x00033383) field_vitu2_entry_pane_t2_ParamLimits

0xcf5e,	// (0x00033383) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00035d61) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00035d61) field_vitu2_entry_pane_t

0x1ab1,	// (0x00027ed6) bg_button_pane_cp010_ParamLimits

0x1ab1,	// (0x00027ed6) bg_button_pane_cp010

0x1abf,	// (0x00027ee4) cell_vitu2_itu_pane_g1

0x1add,	// (0x00027f02) cell_vitu2_itu_pane_t1_ParamLimits

0x1add,	// (0x00027f02) cell_vitu2_itu_pane_t1

0x1b43,	// (0x00027f68) cell_vitu2_itu_pane_t2_ParamLimits

0x1b43,	// (0x00027f68) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00035d6b) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00035d6b) cell_vitu2_itu_pane_t

0xcf83,	// (0x000333a8) bg_button_pane_cp011

0x1c1f,	// (0x00028044) cell_vitu2_function_pane_g1

0x1da5,	// (0x000281ca) main_myfav_hc_pane

0x1637,	// (0x00027a5c) popup_image3_note_pane_ParamLimits

0x1637,	// (0x00027a5c) popup_image3_note_pane

0x1653,	// (0x00027a78) popup_image3_tool_bar_pane_ParamLimits

0x1653,	// (0x00027a78) popup_image3_tool_bar_pane

0x1bc7,	// (0x00027fec) cell_vitu2_itu_pane_t3_ParamLimits

0x1bc7,	// (0x00027fec) cell_vitu2_itu_pane_t3

0x1da5,	// (0x000281ca) bg_popup_trans_pane

0xcf91,	// (0x000333b6) grid_image3_tool_bar_pane

0xcf9b,	// (0x000333c0) bg_popup_trans_pane_g1

0x3ab4,	// (0x00029ed9) bg_popup_trans_pane_g2

0xcfa3,	// (0x000333c8) bg_popup_trans_pane_g3

0xcfab,	// (0x000333d0) bg_popup_trans_pane_g4

0xcfb3,	// (0x000333d8) bg_popup_trans_pane_g5

0xcfbb,	// (0x000333e0) bg_popup_trans_pane_g6

0xcfc3,	// (0x000333e8) bg_popup_trans_pane_g7

0xcfcb,	// (0x000333f0) bg_popup_trans_pane_g8

0x3a94,	// (0x00029eb9) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00035d72) bg_popup_trans_pane_g

0xcfd3,	// (0x000333f8) cell_image3_tool_bar_pane_ParamLimits

0xcfd3,	// (0x000333f8) cell_image3_tool_bar_pane

0xc18e,	// (0x000325b3) cell_image3_tool_bar_pane_g1

0x1da5,	// (0x000281ca) bg_popup_trans_pane_cp1

0xcfe7,	// (0x0003340c) popup_image3_note_pane_t1

0xcff5,	// (0x0003341a) popup_image3_note_pane_t2

0xd003,	// (0x00033428) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00035d85) popup_image3_note_pane_t

0xd011,	// (0x00033436) popup_image3_note_pane_t3_copy1

0x836a,	// (0x0002e78f) bg_myfav_hc_instruction_pane_ParamLimits

0x836a,	// (0x0002e78f) bg_myfav_hc_instruction_pane

0x8380,	// (0x0002e7a5) cell_myfav_contact_pane_ParamLimits

0x8380,	// (0x0002e7a5) cell_myfav_contact_pane

0x839c,	// (0x0002e7c1) cell_myfav_contact_pane_cp1_ParamLimits

0x839c,	// (0x0002e7c1) cell_myfav_contact_pane_cp1

0x83b4,	// (0x0002e7d9) cell_myfav_contact_pane_cp2_ParamLimits

0x83b4,	// (0x0002e7d9) cell_myfav_contact_pane_cp2

0x83cc,	// (0x0002e7f1) cell_myfav_contact_pane_cp3_ParamLimits

0x83cc,	// (0x0002e7f1) cell_myfav_contact_pane_cp3

0x83e3,	// (0x0002e808) cell_myfav_contact_pane_cp4_ParamLimits

0x83e3,	// (0x0002e808) cell_myfav_contact_pane_cp4

0x83fb,	// (0x0002e820) cell_myfav_contact_pane_cp5_ParamLimits

0x83fb,	// (0x0002e820) cell_myfav_contact_pane_cp5

0x840f,	// (0x0002e834) cell_myfav_contact_pane_cp6_ParamLimits

0x840f,	// (0x0002e834) cell_myfav_contact_pane_cp6

0x8425,	// (0x0002e84a) cell_myfav_contact_pane_cp7_ParamLimits

0x8425,	// (0x0002e84a) cell_myfav_contact_pane_cp7

0xd01f,	// (0x00033444) listscroll_gen_pane_cp05

0x843f,	// (0x0002e864) main_myfav_hc_pane_g1_ParamLimits

0x843f,	// (0x0002e864) main_myfav_hc_pane_g1

0x8459,	// (0x0002e87e) main_myfav_hc_pane_g2_ParamLimits

0x8459,	// (0x0002e87e) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00035d8c) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00035d8c) main_myfav_hc_pane_g

0x848b,	// (0x0002e8b0) main_myfav_hc_pane_t1_ParamLimits

0x848b,	// (0x0002e8b0) main_myfav_hc_pane_t1

0xd028,	// (0x0003344d) main_myfav_hc_pane_t2_ParamLimits

0xd028,	// (0x0003344d) main_myfav_hc_pane_t2

0xd03a,	// (0x0003345f) main_myfav_hc_pane_t3_ParamLimits

0xd03a,	// (0x0003345f) main_myfav_hc_pane_t3

0x84a2,	// (0x0002e8c7) main_myfav_hc_pane_t4_ParamLimits

0x84a2,	// (0x0002e8c7) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00035d93) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00035d93) main_myfav_hc_pane_t

0xc18e,	// (0x000325b3) bg_myfav_hc_instruction_pane_g1

0xd04c,	// (0x00033471) cell_myfav_contact_pane_g1_ParamLimits

0xd04c,	// (0x00033471) cell_myfav_contact_pane_g1

0xd04c,	// (0x00033471) cell_myfav_contact_pane_g2_ParamLimits

0xd04c,	// (0x00033471) cell_myfav_contact_pane_g2

0xd058,	// (0x0003347d) cell_myfav_contact_pane_g3_ParamLimits

0xd058,	// (0x0003347d) cell_myfav_contact_pane_g3

0xc492,	// (0x000328b7) cell_myfav_contact_pane_g4_ParamLimits

0xc492,	// (0x000328b7) cell_myfav_contact_pane_g4

0xd065,	// (0x0003348a) cell_myfav_contact_pane_g5_ParamLimits

0xd065,	// (0x0003348a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00035d9e) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00035d9e) cell_myfav_contact_pane_g

0x8473,	// (0x0002e898) main_myfav_hc_pane_g3_ParamLimits

0x8473,	// (0x0002e898) main_myfav_hc_pane_g3

0x1f51,	// (0x00028376) popup_adpt_find_window

0x84ca,	// (0x0002e8ef) afind_page_pane_ParamLimits

0x84ca,	// (0x0002e8ef) afind_page_pane

0x84df,	// (0x0002e904) aid_size_cell_afind_ParamLimits

0x84df,	// (0x0002e904) aid_size_cell_afind

0x84fd,	// (0x0002e922) bg_popup_sub_pane_cp09_ParamLimits

0x84fd,	// (0x0002e922) bg_popup_sub_pane_cp09

0x850a,	// (0x0002e92f) find_pane_cp01_ParamLimits

0x850a,	// (0x0002e92f) find_pane_cp01

0xd071,	// (0x00033496) grid_afind_control_pane_ParamLimits

0xd071,	// (0x00033496) grid_afind_control_pane

0x8517,	// (0x0002e93c) grid_afind_pane_ParamLimits

0x8517,	// (0x0002e93c) grid_afind_pane

0x8539,	// (0x0002e95e) cell_afind_pane_ParamLimits

0x8539,	// (0x0002e95e) cell_afind_pane

0xc18e,	// (0x000325b3) afind_page_pane_g1

0x859a,	// (0x0002e9bf) afind_page_pane_g2

0x85a3,	// (0x0002e9c8) afind_page_pane_g3

0x0002,

0xf984,	// (0x00035da9) afind_page_pane_g

0x85ac,	// (0x0002e9d1) afind_page_pane_t1

0xd085,	// (0x000334aa) cell_afind_grid_control_pane_ParamLimits

0xd085,	// (0x000334aa) cell_afind_grid_control_pane

0xcd0c,	// (0x00033131) bg_button_pane_cp69_ParamLimits

0xcd0c,	// (0x00033131) bg_button_pane_cp69

0x85cc,	// (0x0002e9f1) cell_afind_pane_g1_ParamLimits

0x85cc,	// (0x0002e9f1) cell_afind_pane_g1

0x85d9,	// (0x0002e9fe) cell_afind_pane_t1_ParamLimits

0x85d9,	// (0x0002e9fe) cell_afind_pane_t1

0x3340,	// (0x00029765) bg_button_pane_cp72

0xd094,	// (0x000334b9) cell_afind_grid_control_pane_g1

0x5d5c,	// (0x0002c181) aid_image_placing_area_ParamLimits

0x5d5c,	// (0x0002c181) aid_image_placing_area

0xc797,	// (0x00032bbc) field_vitu_entry_pane_g1_ParamLimits

0xc797,	// (0x00032bbc) field_vitu_entry_pane_g1

0xc7a3,	// (0x00032bc8) field_vitu_entry_pane_g2_ParamLimits

0xc7a3,	// (0x00032bc8) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00035c5a) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00035c5a) field_vitu_entry_pane_g

0x7f98,	// (0x0002e3bd) cell_vitu_itu_pane_g1_ParamLimits

0x7fda,	// (0x0002e3ff) cell_vitu_itu_pane_t3_ParamLimits

0x7fda,	// (0x0002e3ff) cell_vitu_itu_pane_t3

0xccb2,	// (0x000330d7) mp4_progress_pane_t1_ParamLimits

0xcccb,	// (0x000330f0) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00035cef) mp4_progress_pane_t_ParamLimits

0xcce4,	// (0x00033109) mup_progress_pane_cp04_ParamLimits

0x84b6,	// (0x0002e8db) main_myfav_hc_pane_t5_ParamLimits

0x84b6,	// (0x0002e8db) main_myfav_hc_pane_t5

0x1dfb,	// (0x00028220) aid_zoom_text_primary

0x1f51,	// (0x00028376) popup_adpt_find_window_ParamLimits

0x2017,	// (0x0002843c) main_cam_set_pane

0x16ce,	// (0x00027af3) cam4_zoom_pane_ParamLimits

0x16ce,	// (0x00027af3) cam4_zoom_pane

0x85eb,	// (0x0002ea10) main_cam_set_pane_g1_ParamLimits

0x85eb,	// (0x0002ea10) main_cam_set_pane_g1

0x85f9,	// (0x0002ea1e) main_cam_set_pane_g2_ParamLimits

0x85f9,	// (0x0002ea1e) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00035db0) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00035db0) main_cam_set_pane_g

0x861a,	// (0x0002ea3f) main_cam_set_pane_t1_ParamLimits

0x861a,	// (0x0002ea3f) main_cam_set_pane_t1

0x8635,	// (0x0002ea5a) main_cset_listscroll_pane_ParamLimits

0x8635,	// (0x0002ea5a) main_cset_listscroll_pane

0x8655,	// (0x0002ea7a) main_cset_slider_pane_ParamLimits

0x8655,	// (0x0002ea7a) main_cset_slider_pane

0xd0a5,	// (0x000334ca) main_cset_list_pane_ParamLimits

0xd0a5,	// (0x000334ca) main_cset_list_pane

0xd0b5,	// (0x000334da) scroll_pane_cp028

0x867b,	// (0x0002eaa0) aid_area_touch_slider

0x8697,	// (0x0002eabc) cset_slider_pane

0x86c1,	// (0x0002eae6) main_cset_slider_pane_g1

0x86d6,	// (0x0002eafb) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00035db5) main_cset_slider_pane_g

0xd0ee,	// (0x00033513) main_cset_slider_pane_t1

0x8792,	// (0x0002ebb7) main_cset_slider_pane_t2

0x87ac,	// (0x0002ebd1) main_cset_slider_pane_t3

0x87c6,	// (0x0002ebeb) main_cset_slider_pane_t4

0x87e0,	// (0x0002ec05) main_cset_slider_pane_t5

0x87fc,	// (0x0002ec21) main_cset_slider_pane_t6

0x8811,	// (0x0002ec36) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00035dda) main_cset_slider_pane_t

0x8915,	// (0x0002ed3a) cset_list_set_pane_ParamLimits

0x8915,	// (0x0002ed3a) cset_list_set_pane

0x8929,	// (0x0002ed4e) aid_position_infowindow_above

0x8931,	// (0x0002ed56) aid_position_infowindow_below

0x8939,	// (0x0002ed5e) cset_list_set_pane_g1_ParamLimits

0x8939,	// (0x0002ed5e) cset_list_set_pane_g1

0x8945,	// (0x0002ed6a) cset_list_set_pane_g3_ParamLimits

0x8945,	// (0x0002ed6a) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00035df9) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00035df9) cset_list_set_pane_g

0x8954,	// (0x0002ed79) cset_list_set_pane_t1_ParamLimits

0x8954,	// (0x0002ed79) cset_list_set_pane_t1

0x2017,	// (0x0002843c) list_highlight_pane_cp021_ParamLimits

0x2017,	// (0x0002843c) list_highlight_pane_cp021

0x5544,	// (0x0002b969) cset_slider_pane_g1

0x5556,	// (0x0002b97b) cset_slider_pane_g2

0x554d,	// (0x0002b972) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00035dfe) cset_slider_pane_g

0xd18e,	// (0x000335b3) aid_area_touch_cam4_zoom

0xd196,	// (0x000335bb) cam4_zoom_cont_pane

0xd19e,	// (0x000335c3) cam4_zoom_pane_g1

0xd1a6,	// (0x000335cb) cam4_zoom_pane_g2

0x1c33,	// (0x00028058) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00035e05) cam4_zoom_pane_g

0xd1ae,	// (0x000335d3) cam4_zoom_cont_pane_g1

0xd1b7,	// (0x000335dc) cam4_zoom_cont_pane_g2

0xd1c0,	// (0x000335e5) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00035e0c) cam4_zoom_cont_pane_g

0x8251,	// (0x0002e676) call4_image_pane_ParamLimits

0x8251,	// (0x0002e676) call4_image_pane

0xcd4a,	// (0x0003316f) call4_windows_conf_pane_ParamLimits

0xcd89,	// (0x000331ae) popup_call4_audio_in_window_ParamLimits

0xcd89,	// (0x000331ae) popup_call4_audio_in_window

0x1da5,	// (0x000281ca) bg_popup_call2_act_pane_cp02

0xcdff,	// (0x00033224) call4_list_conf_pane

0xc18e,	// (0x000325b3) call4_image_pane_g1

0xc18e,	// (0x000325b3) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00035b20) call4_image_pane_g

0xd1c9,	// (0x000335ee) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1c9,	// (0x000335ee) list_single_graphic_popup_conf4_pane

0x1da5,	// (0x000281ca) list_highlight_pane_cp022

0xd1dc,	// (0x00033601) list_single_graphic_popup_conf4_pane_g1

0x4aac,	// (0x0002aed1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00035e13) list_single_graphic_popup_conf4_pane_g

0xd1e4,	// (0x00033609) list_single_graphic_popup_conf4_pane_t1

0x361a,	// (0x00029a3f) popup_vtel_slider_window_ParamLimits

0x361a,	// (0x00029a3f) popup_vtel_slider_window

0xccfa,	// (0x0003311f) dialer2_ne_pane_t2_ParamLimits

0xccfa,	// (0x0003311f) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00035cf4) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00035cf4) dialer2_ne_pane_t

0xbf71,	// (0x00032396) bg_popup_sub_pane_cp010_ParamLimits

0xbf71,	// (0x00032396) bg_popup_sub_pane_cp010

0x8969,	// (0x0002ed8e) popup_vtel_slider_window_g1_ParamLimits

0x8969,	// (0x0002ed8e) popup_vtel_slider_window_g1

0x897c,	// (0x0002eda1) popup_vtel_slider_window_g2_ParamLimits

0x897c,	// (0x0002eda1) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00035e18) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00035e18) popup_vtel_slider_window_g

0x89d2,	// (0x0002edf7) vtel_slider_pane_ParamLimits

0x89d2,	// (0x0002edf7) vtel_slider_pane

0x89f4,	// (0x0002ee19) vtel_slider_pane_g1_ParamLimits

0x89f4,	// (0x0002ee19) vtel_slider_pane_g1

0x8a08,	// (0x0002ee2d) vtel_slider_pane_g2_ParamLimits

0x8a08,	// (0x0002ee2d) vtel_slider_pane_g2

0x8a20,	// (0x0002ee45) vtel_slider_pane_g3_ParamLimits

0x8a20,	// (0x0002ee45) vtel_slider_pane_g3

0x89f4,	// (0x0002ee19) vtel_slider_pane_g4_ParamLimits

0x89f4,	// (0x0002ee19) vtel_slider_pane_g4

0x8a36,	// (0x0002ee5b) vtel_slider_pane_g5_ParamLimits

0x8a36,	// (0x0002ee5b) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00035e21) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00035e21) vtel_slider_pane_g

0x1da5,	// (0x000281ca) main_gallery2_pane

0x1908,	// (0x00027d2d) aid_size_row_itut2_dropdow_list_ParamLimits

0x1908,	// (0x00027d2d) aid_size_row_itut2_dropdow_list

0x1994,	// (0x00027db9) grid_vitu2_function_top_pane_ParamLimits

0x1994,	// (0x00027db9) grid_vitu2_function_top_pane

0x19f9,	// (0x00027e1e) popup_vitu2_dropdown_list_window_ParamLimits

0x19f9,	// (0x00027e1e) popup_vitu2_dropdown_list_window

0x1a22,	// (0x00027e47) popup_vitu2_match_list_window

0x1c3b,	// (0x00028060) cell_vitu2_function_top_pane_ParamLimits

0x1c3b,	// (0x00028060) cell_vitu2_function_top_pane

0x1c59,	// (0x0002807e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1c59,	// (0x0002807e) cell_vitu2_function_top_pane_cp01

0x1c77,	// (0x0002809c) cell_vitu2_function_top_wide_pane_ParamLimits

0x1c77,	// (0x0002809c) cell_vitu2_function_top_wide_pane

0xcf83,	// (0x000333a8) bg_button_pane_cp012

0x1c95,	// (0x000280ba) cell_vitu2_function_top_pane_g1

0xd208,	// (0x0003362d) bg_button_pane_cp013_ParamLimits

0xd208,	// (0x0003362d) bg_button_pane_cp013

0x8a4c,	// (0x0002ee71) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a4c,	// (0x0002ee71) cell_vitu2_function_top_wide_pane_g1

0xcf83,	// (0x000333a8) bg_popup_sub_pane_cp20

0x1ca9,	// (0x000280ce) list_vitu2_match_list_pane

0xcf9b,	// (0x000333c0) bg_popup_sub_pane_cp20_g1

0xcfa3,	// (0x000333c8) bg_popup_sub_pane_cp20_g2

0x3ab4,	// (0x00029ed9) bg_popup_sub_pane_cp20_g3

0xcfab,	// (0x000333d0) bg_popup_sub_pane_cp20_g4

0x3a94,	// (0x00029eb9) bg_popup_sub_pane_cp20_g5

0xd224,	// (0x00033649) bg_popup_sub_pane_cp20_g6

0xcfbb,	// (0x000333e0) bg_popup_sub_pane_cp20_g7

0xcfc3,	// (0x000333e8) bg_popup_sub_pane_cp20_g8

0xcfcb,	// (0x000333f0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00035e2c) bg_popup_sub_pane_cp20_g

0xd22c,	// (0x00033651) list_vitu2_match_list_item_pane_ParamLimits

0xd22c,	// (0x00033651) list_vitu2_match_list_item_pane

0xd23e,	// (0x00033663) list_vitu2_match_list_item_pane_t1

0xb113,	// (0x00031538) bg_popup_sub_pane_cp21

0xd264,	// (0x00033689) grid_vitu2_dropdown_list_pane

0x1cc7,	// (0x000280ec) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1cc7,	// (0x000280ec) cell_vitu2_dropdown_list_char_pane

0x1ce8,	// (0x0002810d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1ce8,	// (0x0002810d) cell_vitu2_dropdown_list_ctrl_pane

0xd26c,	// (0x00033691) cell_vitu2_dropdown_list_char_pane_g1

0xd275,	// (0x0003369a) cell_vitu2_dropdown_list_char_pane_g2

0xd27e,	// (0x000336a3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00035e49) cell_vitu2_dropdown_list_char_pane_g

0x1d14,	// (0x00028139) cell_vitu2_dropdown_list_char_pane_t1

0x8a99,	// (0x0002eebe) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a99,	// (0x0002eebe) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8aa9,	// (0x0002eece) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8aa9,	// (0x0002eece) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8aba,	// (0x0002eedf) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8aba,	// (0x0002eedf) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1d22,	// (0x00028147) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1d22,	// (0x00028147) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce71,	// (0x00033296) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce71,	// (0x00033296) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00035e50) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00035e50) cell_vitu2_dropdown_list_ctrl_pane_g

0x8aca,	// (0x0002eeef) aid_size_cell_gallery2_ParamLimits

0x8aca,	// (0x0002eeef) aid_size_cell_gallery2

0x8ae0,	// (0x0002ef05) grid_gallery2_pane_ParamLimits

0x8ae0,	// (0x0002ef05) grid_gallery2_pane

0x8af4,	// (0x0002ef19) scroll_pane_cp029_ParamLimits

0x8af4,	// (0x0002ef19) scroll_pane_cp029

0x8b00,	// (0x0002ef25) cell_gallery2_pane_ParamLimits

0x8b00,	// (0x0002ef25) cell_gallery2_pane

0xd287,	// (0x000336ac) cell_gallery2_pane_g2

0x8b36,	// (0x0002ef5b) cell_gallery2_pane_g3

0xd291,	// (0x000336b6) cell_gallery2_pane_g4

0xd299,	// (0x000336be) cell_gallery2_pane_g5

0x4ff6,	// (0x0002b41b) grid_highlight_pane_cp10

0x1a22,	// (0x00027e47) popup_vitu2_match_list_window_ParamLimits

0x1a37,	// (0x00027e5c) popup_vitu2_query_window_ParamLimits

0x1a37,	// (0x00027e5c) popup_vitu2_query_window

0xb113,	// (0x00031538) bg_vitu2_candi_button_pane

0xd26c,	// (0x00033691) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd275,	// (0x0003369a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd27e,	// (0x000336a3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8b3e,	// (0x0002ef63) bg_button_pane_cp015

0x8b52,	// (0x0002ef77) bg_button_pane_cp016

0x8b65,	// (0x0002ef8a) bg_button_pane_cp017

0xbc86,	// (0x000320ab) bg_popup_sub_pane_cp22

0xd2a1,	// (0x000336c6) popup_vitu2_query_window_g1

0x8baa,	// (0x0002efcf) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00035e5b) popup_vitu2_query_window_g

0x8bc9,	// (0x0002efee) popup_vitu2_query_window_t1_ParamLimits

0x8bc9,	// (0x0002efee) popup_vitu2_query_window_t1

0x8bfe,	// (0x0002f023) popup_vitu2_query_window_t2_ParamLimits

0x8bfe,	// (0x0002f023) popup_vitu2_query_window_t2

0x8c10,	// (0x0002f035) popup_vitu2_query_window_t3_ParamLimits

0x8c10,	// (0x0002f035) popup_vitu2_query_window_t3

0x8c38,	// (0x0002f05d) popup_vitu2_query_window_t4_ParamLimits

0x8c38,	// (0x0002f05d) popup_vitu2_query_window_t4

0x8c59,	// (0x0002f07e) popup_vitu2_query_window_t5_ParamLimits

0x8c59,	// (0x0002f07e) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00035e62) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00035e62) popup_vitu2_query_window_t

0xd09d,	// (0x000334c2) main_cset_text_pane

0x867b,	// (0x0002eaa0) aid_area_touch_slider_ParamLimits

0x8697,	// (0x0002eabc) cset_slider_pane_ParamLimits

0x86c1,	// (0x0002eae6) main_cset_slider_pane_g1_ParamLimits

0x86d6,	// (0x0002eafb) main_cset_slider_pane_g2_ParamLimits

0xd0be,	// (0x000334e3) main_cset_slider_pane_g3_ParamLimits

0xd0be,	// (0x000334e3) main_cset_slider_pane_g3

0x86eb,	// (0x0002eb10) main_cset_slider_pane_g4_ParamLimits

0x86eb,	// (0x0002eb10) main_cset_slider_pane_g4

0x86fa,	// (0x0002eb1f) main_cset_slider_pane_g5_ParamLimits

0x86fa,	// (0x0002eb1f) main_cset_slider_pane_g5

0x8706,	// (0x0002eb2b) main_cset_slider_pane_g6_ParamLimits

0x8706,	// (0x0002eb2b) main_cset_slider_pane_g6

0xf990,	// (0x00035db5) main_cset_slider_pane_g_ParamLimits

0xd0ee,	// (0x00033513) main_cset_slider_pane_t1_ParamLimits

0x8792,	// (0x0002ebb7) main_cset_slider_pane_t2_ParamLimits

0x87ac,	// (0x0002ebd1) main_cset_slider_pane_t3_ParamLimits

0x87c6,	// (0x0002ebeb) main_cset_slider_pane_t4_ParamLimits

0x87e0,	// (0x0002ec05) main_cset_slider_pane_t5_ParamLimits

0x87fc,	// (0x0002ec21) main_cset_slider_pane_t6_ParamLimits

0x8811,	// (0x0002ec36) main_cset_slider_pane_t7_ParamLimits

0x883b,	// (0x0002ec60) main_cset_slider_pane_t8_ParamLimits

0x883b,	// (0x0002ec60) main_cset_slider_pane_t8

0x8863,	// (0x0002ec88) main_cset_slider_pane_t9_ParamLimits

0x8863,	// (0x0002ec88) main_cset_slider_pane_t9

0x888b,	// (0x0002ecb0) main_cset_slider_pane_t10_ParamLimits

0x888b,	// (0x0002ecb0) main_cset_slider_pane_t10

0x88b3,	// (0x0002ecd8) main_cset_slider_pane_t11_ParamLimits

0x88b3,	// (0x0002ecd8) main_cset_slider_pane_t11

0x88db,	// (0x0002ed00) main_cset_slider_pane_t12_ParamLimits

0x88db,	// (0x0002ed00) main_cset_slider_pane_t12

0x88f8,	// (0x0002ed1d) main_cset_slider_pane_t13_ParamLimits

0x88f8,	// (0x0002ed1d) main_cset_slider_pane_t13

0xf9b5,	// (0x00035dda) main_cset_slider_pane_t_ParamLimits

0x1da5,	// (0x000281ca) bg_popup_sub_pane_cp011

0xd2ad,	// (0x000336d2) main_cset_text_pane_g1

0xd2b5,	// (0x000336da) main_cset_text_pane_t1

0xd2c3,	// (0x000336e8) main_cset_text_pane_t2

0xd2d1,	// (0x000336f6) main_cset_text_pane_t3

0xd2df,	// (0x00033704) main_cset_text_pane_t4

0xd2ed,	// (0x00033712) main_cset_text_pane_t5

0xd2fb,	// (0x00033720) main_cset_text_pane_t6

0xd309,	// (0x0003372e) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00035e71) main_cset_text_pane_t

0x1da5,	// (0x000281ca) main_cam4_burst_pane

0x1da5,	// (0x000281ca) main_cam5_pane

0x85ba,	// (0x0002e9df) bg_button_pane_cp019

0x85c3,	// (0x0002e9e8) bg_button_pane_cp020

0xd0ca,	// (0x000334ef) main_cset_slider_pane_g7_ParamLimits

0xd0ca,	// (0x000334ef) main_cset_slider_pane_g7

0xd0d6,	// (0x000334fb) main_cset_slider_pane_g8_ParamLimits

0xd0d6,	// (0x000334fb) main_cset_slider_pane_g8

0x871a,	// (0x0002eb3f) main_cset_slider_pane_g9_ParamLimits

0x871a,	// (0x0002eb3f) main_cset_slider_pane_g9

0x8726,	// (0x0002eb4b) main_cset_slider_pane_g10_ParamLimits

0x8726,	// (0x0002eb4b) main_cset_slider_pane_g10

0x8732,	// (0x0002eb57) main_cset_slider_pane_g11_ParamLimits

0x8732,	// (0x0002eb57) main_cset_slider_pane_g11

0x873e,	// (0x0002eb63) main_cset_slider_pane_g12_ParamLimits

0x873e,	// (0x0002eb63) main_cset_slider_pane_g12

0x874a,	// (0x0002eb6f) main_cset_slider_pane_g13_ParamLimits

0x874a,	// (0x0002eb6f) main_cset_slider_pane_g13

0x8756,	// (0x0002eb7b) main_cset_slider_pane_g14_ParamLimits

0x8756,	// (0x0002eb7b) main_cset_slider_pane_g14

0x8762,	// (0x0002eb87) main_cset_slider_pane_g15_ParamLimits

0x8762,	// (0x0002eb87) main_cset_slider_pane_g15

0xd11c,	// (0x00033541) main_cset_slider_pane_t14_ParamLimits

0xd11c,	// (0x00033541) main_cset_slider_pane_t14

0xd155,	// (0x0003357a) main_cset_slider_pane_t15_ParamLimits

0xd155,	// (0x0003357a) main_cset_slider_pane_t15

0x8cd0,	// (0x0002f0f5) aid_cam4_burst_size_cell_ParamLimits

0x8cd0,	// (0x0002f0f5) aid_cam4_burst_size_cell

0x8cf0,	// (0x0002f115) grid_cam4_burst_pane_ParamLimits

0x8cf0,	// (0x0002f115) grid_cam4_burst_pane

0x8d28,	// (0x0002f14d) linegrid_cam4_burst_pane_ParamLimits

0x8d28,	// (0x0002f14d) linegrid_cam4_burst_pane

0xd317,	// (0x0003373c) scroll_pane_cp30_ParamLimits

0xd317,	// (0x0003373c) scroll_pane_cp30

0x8d4e,	// (0x0002f173) cell_cam4_burst_pane_ParamLimits

0x8d4e,	// (0x0002f173) cell_cam4_burst_pane

0xd323,	// (0x00033748) linegrid_cam4_burst_pane_g1_ParamLimits

0xd323,	// (0x00033748) linegrid_cam4_burst_pane_g1

0x8d9b,	// (0x0002f1c0) linegrid_cam4_burst_pane_g2_ParamLimits

0x8d9b,	// (0x0002f1c0) linegrid_cam4_burst_pane_g2

0xd330,	// (0x00033755) linegrid_cam4_burst_pane_g3_ParamLimits

0xd330,	// (0x00033755) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00035e80) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00035e80) linegrid_cam4_burst_pane_g

0x8dac,	// (0x0002f1d1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8dac,	// (0x0002f1d1) linegrid_cam4_burst_pane_g3_copy1

0xd33d,	// (0x00033762) linegrid_cam4_burst_pane_g4_ParamLimits

0xd33d,	// (0x00033762) linegrid_cam4_burst_pane_g4

0x8dc6,	// (0x0002f1eb) linegrid_cam4_burst_pane_g5_ParamLimits

0x8dc6,	// (0x0002f1eb) linegrid_cam4_burst_pane_g5

0x8dd7,	// (0x0002f1fc) linegrid_cam4_burst_pane_g6_ParamLimits

0x8dd7,	// (0x0002f1fc) linegrid_cam4_burst_pane_g6

0xd34a,	// (0x0003376f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd34a,	// (0x0003376f) linegrid_cam4_burst_pane_g7

0x8dee,	// (0x0002f213) cell_cam4_burst_pane_g1

0xd363,	// (0x00033788) main_cam5_pane_t1_ParamLimits

0xd363,	// (0x00033788) main_cam5_pane_t1

0xd375,	// (0x0003379a) main_cam5_pane_t2_ParamLimits

0xd375,	// (0x0003379a) main_cam5_pane_t2

0xd387,	// (0x000337ac) main_cam5_pane_t3_ParamLimits

0xd387,	// (0x000337ac) main_cam5_pane_t3

0xd399,	// (0x000337be) main_cam5_pane_t4_ParamLimits

0xd399,	// (0x000337be) main_cam5_pane_t4

0xd3af,	// (0x000337d4) main_cam5_pane_t5_ParamLimits

0xd3af,	// (0x000337d4) main_cam5_pane_t5

0xd3c1,	// (0x000337e6) main_cam5_pane_t6_ParamLimits

0xd3c1,	// (0x000337e6) main_cam5_pane_t6

0xd3d5,	// (0x000337fa) main_cam5_pane_t7_ParamLimits

0xd3d5,	// (0x000337fa) main_cam5_pane_t7

0xd3e7,	// (0x0003380c) main_cam5_pane_t8_ParamLimits

0xd3e7,	// (0x0003380c) main_cam5_pane_t8

0xd403,	// (0x00033828) main_cam5_pane_t9_ParamLimits

0xd403,	// (0x00033828) main_cam5_pane_t9

0xd415,	// (0x0003383a) main_cam5_pane_t10_ParamLimits

0xd415,	// (0x0003383a) main_cam5_pane_t10

0xd427,	// (0x0003384c) main_cam5_pane_t11_ParamLimits

0xd427,	// (0x0003384c) main_cam5_pane_t11

0xd439,	// (0x0003385e) main_cam5_pane_t12_ParamLimits

0xd439,	// (0x0003385e) main_cam5_pane_t12

0xd44e,	// (0x00033873) main_cam5_pane_t13_ParamLimits

0xd44e,	// (0x00033873) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00035e8c) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00035e8c) main_cam5_pane_t

0x1fdd,	// (0x00028402) popup_scut_keymap_window_ParamLimits

0x1fdd,	// (0x00028402) popup_scut_keymap_window

0x8e03,	// (0x0002f228) aid_size_cell_brow_shortcut

0x4ff6,	// (0x0002b41b) bg_popup_window_pane_cp010

0x8e0f,	// (0x0002f234) grid_scut_pane

0x8e1b,	// (0x0002f240) cell_scut_pane_ParamLimits

0x8e1b,	// (0x0002f240) cell_scut_pane

0x8e32,	// (0x0002f257) cell_scut_pane_g1

0xd46b,	// (0x00033890) cell_scut_pane_t1

0xd47a,	// (0x0003389f) cell_scut_pane_t2

0x8e3b,	// (0x0002f260) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00035ea7) cell_scut_pane_t

0x74fc,	// (0x0002d921) main_mup3_pane_g8_ParamLimits

0x74fc,	// (0x0002d921) main_mup3_pane_g8

0x1920,	// (0x00027d45) area_vitu2_query_pane_ParamLimits

0x1920,	// (0x00027d45) area_vitu2_query_pane

0x8b78,	// (0x0002ef9d) input_focus_pane_cp08

0xd489,	// (0x000338ae) area_vitu2_query_pane_g1

0x8e49,	// (0x0002f26e) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00035eae) area_vitu2_query_pane_g

0x8e5a,	// (0x0002f27f) area_vitu2_query_pane_t1_ParamLimits

0x8e5a,	// (0x0002f27f) area_vitu2_query_pane_t1

0x8e6e,	// (0x0002f293) area_vitu2_query_pane_t2_ParamLimits

0x8e6e,	// (0x0002f293) area_vitu2_query_pane_t2

0x8e82,	// (0x0002f2a7) area_vitu2_query_pane_t3_ParamLimits

0x8e82,	// (0x0002f2a7) area_vitu2_query_pane_t3

0xd495,	// (0x000338ba) area_vitu2_query_pane_t4_ParamLimits

0xd495,	// (0x000338ba) area_vitu2_query_pane_t4

0xd4bd,	// (0x000338e2) area_vitu2_query_pane_t5_ParamLimits

0xd4bd,	// (0x000338e2) area_vitu2_query_pane_t5

0xd4e5,	// (0x0003390a) area_vitu2_query_pane_t6_ParamLimits

0xd4e5,	// (0x0003390a) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00035eb3) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00035eb3) area_vitu2_query_pane_t

0x8eaa,	// (0x0002f2cf) bg_button_pane_cp018

0x8eb8,	// (0x0002f2dd) bg_button_pane_cp021

0x8ec4,	// (0x0002f2e9) bg_button_pane_cp022

0x8ed5,	// (0x0002f2fa) input_focus_pane_cp09

0x4e07,	// (0x0002b22c) aid_size_touch_mv_arrow_left

0x4e30,	// (0x0002b255) aid_size_touch_mv_arrow_right

0x877a,	// (0x0002eb9f) main_cset_slider_pane_g16_ParamLimits

0x877a,	// (0x0002eb9f) main_cset_slider_pane_g16

0x8786,	// (0x0002ebab) main_cset_slider_pane_g17_ParamLimits

0x8786,	// (0x0002ebab) main_cset_slider_pane_g17

0x8dee,	// (0x0002f213) cell_cam4_burst_pane_g1_ParamLimits

0x1da5,	// (0x000281ca) compa_mode_pane

0x898c,	// (0x0002edb1) popup_vtel_slider_window_g3_ParamLimits

0x898c,	// (0x0002edb1) popup_vtel_slider_window_g3

0x89a3,	// (0x0002edc8) popup_vtel_slider_window_g4_ParamLimits

0x89a3,	// (0x0002edc8) popup_vtel_slider_window_g4

0x89ba,	// (0x0002eddf) popup_vtel_slider_window_t1_ParamLimits

0x89ba,	// (0x0002eddf) popup_vtel_slider_window_t1

0x1da5,	// (0x000281ca) main_cl_pane

0xbcae,	// (0x000320d3) popup_imed_adjust2_window_ParamLimits

0xbc86,	// (0x000320ab) bg_tb_trans_pane_cp05_ParamLimits

0xc6cc,	// (0x00032af1) popup_imed_adjust2_window_g1_ParamLimits

0xc6db,	// (0x00032b00) popup_imed_adjust2_window_g2_ParamLimits

0xc6db,	// (0x00032b00) popup_imed_adjust2_window_g2

0xc6e7,	// (0x00032b0c) popup_imed_adjust2_window_g3_ParamLimits

0xc6e7,	// (0x00032b0c) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00035c1e) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00035c1e) popup_imed_adjust2_window_g

0xc6f3,	// (0x00032b18) popup_imed_adjust2_window_t1_ParamLimits

0xc70b,	// (0x00032b30) slider_imed_adjust_pane_ParamLimits

0xc71f,	// (0x00032b44) slider_imed_adjust_pane_g1_ParamLimits

0xc72f,	// (0x00032b54) slider_imed_adjust_pane_g2_ParamLimits

0xc73f,	// (0x00032b64) slider_imed_adjust_pane_g3_ParamLimits

0xc750,	// (0x00032b75) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00035c25) slider_imed_adjust_pane_g_ParamLimits

0x166f,	// (0x00027a94) aid_touch_area_cam4_ParamLimits

0x166f,	// (0x00027a94) aid_touch_area_cam4

0xce43,	// (0x00033268) battery_pane_cp01

0x173f,	// (0x00027b64) main_camera4_pane_g6_ParamLimits

0x173f,	// (0x00027b64) main_camera4_pane_g6

0x1769,	// (0x00027b8e) main_camera4_pane_t2_ParamLimits

0x1769,	// (0x00027b8e) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00035d28) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00035d28) main_camera4_pane_t

0x178a,	// (0x00027baf) aid_touch_area_vid4_ParamLimits

0x178a,	// (0x00027baf) aid_touch_area_vid4

0x17f1,	// (0x00027c16) main_video4_pane_g5_ParamLimits

0x17f1,	// (0x00027c16) main_video4_pane_g5

0x181c,	// (0x00027c41) vid4_progress_pane_ParamLimits

0x181c,	// (0x00027c41) vid4_progress_pane

0xd0e2,	// (0x00033507) main_cset_slider_pane_g18_ParamLimits

0xd0e2,	// (0x00033507) main_cset_slider_pane_g18

0xd357,	// (0x0003377c) cell_cam4_burst_pane_g2_ParamLimits

0xd357,	// (0x0003377c) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00035e87) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00035e87) cell_cam4_burst_pane_g

0x2a37,	// (0x00028e5c) bg_cl_pane_ParamLimits

0x2a37,	// (0x00028e5c) bg_cl_pane

0x8ee6,	// (0x0002f30b) cl_header_pane_ParamLimits

0x8ee6,	// (0x0002f30b) cl_header_pane

0x8efa,	// (0x0002f31f) cl_listscroll_pane_ParamLimits

0x8efa,	// (0x0002f31f) cl_listscroll_pane

0xd531,	// (0x00033956) bg_cl_pane_g1

0xd539,	// (0x0003395e) bg_cl_pane_g2

0xd541,	// (0x00033966) bg_cl_pane_g3

0xd549,	// (0x0003396e) bg_cl_pane_g4

0xd551,	// (0x00033976) bg_cl_pane_g5

0xd559,	// (0x0003397e) bg_cl_pane_g6

0xd561,	// (0x00033986) bg_cl_pane_g7

0xd569,	// (0x0003398e) bg_cl_pane_g8

0xd571,	// (0x00033996) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00035ec2) bg_cl_pane_g

0x8f0a,	// (0x0002f32f) aid_height_cl_leading_ParamLimits

0x8f0a,	// (0x0002f32f) aid_height_cl_leading

0x8f16,	// (0x0002f33b) aid_height_cl_text_ParamLimits

0x8f16,	// (0x0002f33b) aid_height_cl_text

0x2017,	// (0x0002843c) bg_cl_header_pane_ParamLimits

0x2017,	// (0x0002843c) bg_cl_header_pane

0x8f35,	// (0x0002f35a) cl_header_pane_g1_ParamLimits

0x8f35,	// (0x0002f35a) cl_header_pane_g1

0x8f4b,	// (0x0002f370) cl_header_pane_t1_ParamLimits

0x8f4b,	// (0x0002f370) cl_header_pane_t1

0xd579,	// (0x0003399e) cl_list_pane

0xd0b5,	// (0x000334da) hc_scroll_pane_cp01

0x3a94,	// (0x00029eb9) bg_cl_header_pane_g1

0xcf9b,	// (0x000333c0) bg_cl_header_pane_g2

0x3ab4,	// (0x00029ed9) bg_cl_header_pane_g3

0xcfab,	// (0x000333d0) bg_cl_header_pane_g4

0xcfa3,	// (0x000333c8) bg_cl_header_pane_g5

0xd224,	// (0x00033649) bg_cl_header_pane_g6

0xcfc3,	// (0x000333e8) bg_cl_header_pane_g7

0xcfcb,	// (0x000333f0) bg_cl_header_pane_g8

0xcfbb,	// (0x000333e0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00035ed5) bg_cl_header_pane_g

0x8f64,	// (0x0002f389) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f64,	// (0x0002f389) hc_cl_list_double_graphic_heading_pane

0x8f78,	// (0x0002f39d) hc_cl_list_single_graphic_pane_ParamLimits

0x8f78,	// (0x0002f39d) hc_cl_list_single_graphic_pane

0x8f92,	// (0x0002f3b7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8f92,	// (0x0002f3b7) hc_cl_list_single_graphic_pane_g1

0x8f9e,	// (0x0002f3c3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8f9e,	// (0x0002f3c3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00035ee8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00035ee8) hc_cl_list_single_graphic_pane_g

0x8fb2,	// (0x0002f3d7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fb2,	// (0x0002f3d7) hc_cl_list_single_graphic_pane_t1

0x8f92,	// (0x0002f3b7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8f92,	// (0x0002f3b7) hc_cl_list_double_graphic_heading_pane_g1

0x8fc7,	// (0x0002f3ec) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8fc7,	// (0x0002f3ec) hc_cl_list_double_graphic_heading_pane_g2

0x8fdb,	// (0x0002f400) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8fdb,	// (0x0002f400) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00035eed) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00035eed) hc_cl_list_double_graphic_heading_pane_g

0x8fef,	// (0x0002f414) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8fef,	// (0x0002f414) hc_cl_list_double_graphic_heading_pane_t1

0x9004,	// (0x0002f429) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9004,	// (0x0002f429) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00035ef4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00035ef4) hc_cl_list_double_graphic_heading_pane_t

0xd58a,	// (0x000339af) vid4_progress_pane_g1

0xd59a,	// (0x000339bf) vid4_progress_pane_g2

0x46a7,	// (0x0002aacc) vid4_progress_pane_g3

0xce98,	// (0x000332bd) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00035ef9) vid4_progress_pane_g

0xd5aa,	// (0x000339cf) vid4_progress_pane_t1

0xd5bf,	// (0x000339e4) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00035f04) vid4_progress_pane_t

0xd5ea,	// (0x00033a0f) wait_bar_pane_cp07

0xbf7f,	// (0x000323a4) blid_firmament_pane_ParamLimits

0xbfc2,	// (0x000323e7) popup_blid_sat_info2_window_g1

0xbfe6,	// (0x0003240b) popup_blid_sat_info2_window_t3

0xbff4,	// (0x00032419) popup_blid_sat_info2_window_t4

0xc002,	// (0x00032427) popup_blid_sat_info2_window_t5

0xc010,	// (0x00032435) popup_blid_sat_info2_window_t6

0xc020,	// (0x00032445) popup_blid_sat_info2_window_t7

0xc02e,	// (0x00032453) popup_blid_sat_info2_window_t8

0xc03c,	// (0x00032461) popup_blid_sat_info2_window_t9

0xc04a,	// (0x0003246f) popup_blid_sat_info2_window_t10

0xc10e,	// (0x00032533) aid_firma_cardinal_ParamLimits

0xc122,	// (0x00032547) blid_firmament_pane_t1_ParamLimits

0xc139,	// (0x0003255e) blid_firmament_pane_t2_ParamLimits

0xc150,	// (0x00032575) blid_firmament_pane_t3_ParamLimits

0xc167,	// (0x0003258c) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00035b17) blid_firmament_pane_t_ParamLimits

0xc17e,	// (0x000325a3) blid_sat_info_pane_ParamLimits

0x2017,	// (0x0002843c) main_cam_set_pane_ParamLimits

0x7d42,	// (0x0002e167) aid_size_cell_colour_35_ParamLimits

0x7d62,	// (0x0002e187) aid_size_cell_colour_112_ParamLimits

0x7d82,	// (0x0002e1a7) aid_size_cell_effect_ParamLimits

0xbc86,	// (0x000320ab) bg_tb_trans_pane_cp02_ParamLimits

0x4621,	// (0x0002aa46) heading_imed_pane_ParamLimits

0x7da2,	// (0x0002e1c7) listscroll_imed_pane_ParamLimits

0x655a,	// (0x0002c97f) popup_call2_audio_first_window_g5_ParamLimits

0x655a,	// (0x0002c97f) popup_call2_audio_first_window_g5

0x144c,	// (0x00027871) aid_size_touch_image3_arrow_left_ParamLimits

0x144c,	// (0x00027871) aid_size_touch_image3_arrow_left

0x1478,	// (0x0002789d) aid_size_touch_image3_arrow_right_ParamLimits

0x1478,	// (0x0002789d) aid_size_touch_image3_arrow_right

0xd5d5,	// (0x000339fa) vid4_progress_pane_t3

0x80c5,	// (0x0002e4ea) main_hwr_training_symbol_option_pane_ParamLimits

0x80c5,	// (0x0002e4ea) main_hwr_training_symbol_option_pane

0xc9b9,	// (0x00032dde) popup_hwr_training_preview_window_ParamLimits

0xc9b9,	// (0x00032dde) popup_hwr_training_preview_window

0x12f3,	// (0x00027718) hwr_training_navi_pane_g5_ParamLimits

0x12f3,	// (0x00027718) hwr_training_navi_pane_g5

0xcf7b,	// (0x000333a0) popup_char_count_window

0xcf83,	// (0x000333a8) bg_popup_sub_pane_cp20_ParamLimits

0x1ca9,	// (0x000280ce) list_vitu2_match_list_pane_ParamLimits

0x1cb8,	// (0x000280dd) vitu2_page_scroll_pane_ParamLimits

0x1cb8,	// (0x000280dd) vitu2_page_scroll_pane

0xd654,	// (0x00033a79) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd654,	// (0x00033a79) list_single_hwr_training_symbol_option_pane

0xd667,	// (0x00033a8c) list_single_hwr_training_symbol_option_pane_g1

0xd66f,	// (0x00033a94) list_single_hwr_training_symbol_option_pane_t1

0xd67d,	// (0x00033aa2) bg_button_pane_cp023

0xd686,	// (0x00033aab) bg_button_pane_cp024

0x9019,	// (0x0002f43e) vitu2_page_scroll_pane_g1

0x9021,	// (0x0002f446) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00035f0b) vitu2_page_scroll_pane_g

0x9029,	// (0x0002f44e) vitu2_page_scroll_pane_t1

0xbe9b,	// (0x000322c0) popup_char_count_window_g1

0xd6b9,	// (0x00033ade) popup_char_count_window_g2

0xd6c2,	// (0x00033ae7) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00035f10) popup_char_count_window_g

0xd6cb,	// (0x00033af0) popup_char_count_window_t1

0x1da5,	// (0x000281ca) main_vded2_pane

0xc6b8,	// (0x00032add) aid_size_cell_imed_line

0xc6c2,	// (0x00032ae7) grid_imed_line_width_pane

0x188c,	// (0x00027cb1) vid4_indicators_pane_g4

0xd6d9,	// (0x00033afe) cell_imed_line_width_pane_ParamLimits

0xd6d9,	// (0x00033afe) cell_imed_line_width_pane

0xd6ed,	// (0x00033b12) cell_imed_line_width_pane_g1

0xbf2d,	// (0x00032352) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00035f17) cell_imed_line_width_pane_g

0x9038,	// (0x0002f45d) main_vded2_pane_g1_ParamLimits

0x9038,	// (0x0002f45d) main_vded2_pane_g1

0x9050,	// (0x0002f475) main_vded2_pane_g2_ParamLimits

0x9050,	// (0x0002f475) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00035f1c) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00035f1c) main_vded2_pane_g

0x9062,	// (0x0002f487) vded2_slider_pane_ParamLimits

0x9062,	// (0x0002f487) vded2_slider_pane

0x9072,	// (0x0002f497) aid_size_touch_vded2_end

0x907c,	// (0x0002f4a1) aid_size_touch_vded2_playhead

0xd6f6,	// (0x00033b1b) aid_size_touch_vded2_start

0xd6fe,	// (0x00033b23) vded2_slider_bg_pane

0xd707,	// (0x00033b2c) vded2_slider_pane_g1

0xd710,	// (0x00033b35) vded2_slider_pane_g2

0x9086,	// (0x0002f4ab) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00035f21) vded2_slider_pane_g

0xd718,	// (0x00033b3d) vded2_slider_bg_pane_g1

0xd721,	// (0x00033b46) vded2_slider_bg_pane_g2

0xd72a,	// (0x00033b4f) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x00035f28) vded2_slider_bg_pane_g

0x5709,	// (0x0002bb2e) aid_postcard_touch_down_pane_ParamLimits

0x5709,	// (0x0002bb2e) aid_postcard_touch_down_pane

0x571f,	// (0x0002bb44) aid_postcard_touch_up_pane_ParamLimits

0x571f,	// (0x0002bb44) aid_postcard_touch_up_pane

0x1da5,	// (0x000281ca) main_blid2_pane

0xbc94,	// (0x000320b9) popup_blid2_search_window

0x1da5,	// (0x000281ca) blid2_gps_pane

0x1da5,	// (0x000281ca) blid2_navig_pane

0x1da5,	// (0x000281ca) blid2_search_pane

0x1da5,	// (0x000281ca) blid2_tripm_pane

0x9091,	// (0x0002f4b6) blid2_search_pane_g1_ParamLimits

0x9091,	// (0x0002f4b6) blid2_search_pane_g1

0x90a9,	// (0x0002f4ce) blid2_search_pane_t1_ParamLimits

0x90a9,	// (0x0002f4ce) blid2_search_pane_t1

0x90bb,	// (0x0002f4e0) aid_size_cell_blid2_gps_ParamLimits

0x90bb,	// (0x0002f4e0) aid_size_cell_blid2_gps

0x90d3,	// (0x0002f4f8) blid2_gps_pane_g1_ParamLimits

0x90d3,	// (0x0002f4f8) blid2_gps_pane_g1

0x90e7,	// (0x0002f50c) grid_blid2_satellite_pane_ParamLimits

0x90e7,	// (0x0002f50c) grid_blid2_satellite_pane

0x9101,	// (0x0002f526) blid2_navig_pane_g1_ParamLimits

0x9101,	// (0x0002f526) blid2_navig_pane_g1

0x910d,	// (0x0002f532) blid2_navig_pane_t1_ParamLimits

0x910d,	// (0x0002f532) blid2_navig_pane_t1

0x9128,	// (0x0002f54d) blid2_navig_pane_t2_ParamLimits

0x9128,	// (0x0002f54d) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00035f2f) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00035f2f) blid2_navig_pane_t

0x9143,	// (0x0002f568) blid2_navig_ring_pane_ParamLimits

0x9143,	// (0x0002f568) blid2_navig_ring_pane

0x915c,	// (0x0002f581) blid2_speed_pane_ParamLimits

0x915c,	// (0x0002f581) blid2_speed_pane

0x9168,	// (0x0002f58d) blid2_tripm_pane_g1_ParamLimits

0x9168,	// (0x0002f58d) blid2_tripm_pane_g1

0x9183,	// (0x0002f5a8) blid2_tripm_pane_g2_ParamLimits

0x9183,	// (0x0002f5a8) blid2_tripm_pane_g2

0x9197,	// (0x0002f5bc) blid2_tripm_pane_g3_ParamLimits

0x9197,	// (0x0002f5bc) blid2_tripm_pane_g3

0x91ab,	// (0x0002f5d0) blid2_tripm_pane_g4_ParamLimits

0x91ab,	// (0x0002f5d0) blid2_tripm_pane_g4

0x91bf,	// (0x0002f5e4) blid2_tripm_pane_g5_ParamLimits

0x91bf,	// (0x0002f5e4) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00035f34) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00035f34) blid2_tripm_pane_g

0x91e5,	// (0x0002f60a) blid2_tripm_pane_t1_ParamLimits

0x91e5,	// (0x0002f60a) blid2_tripm_pane_t1

0x9200,	// (0x0002f625) blid2_tripm_pane_t2_ParamLimits

0x9200,	// (0x0002f625) blid2_tripm_pane_t2

0x921b,	// (0x0002f640) blid2_tripm_pane_t3_ParamLimits

0x921b,	// (0x0002f640) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00035f41) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00035f41) blid2_tripm_pane_t

0x9262,	// (0x0002f687) cell_blid2_satellite_pane_ParamLimits

0x9262,	// (0x0002f687) cell_blid2_satellite_pane

0x9280,	// (0x0002f6a5) cell_blid2_satellite_pane_g1

0xd733,	// (0x00033b58) cell_blid2_satellite_pane_t1

0xc18e,	// (0x000325b3) blid2_speed_pane_g1

0xd741,	// (0x00033b66) blid2_speed_pane_t1

0xd74f,	// (0x00033b74) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x00035f4a) blid2_speed_pane_t

0xc18e,	// (0x000325b3) blid2_navig_ring_pane_g1

0x9289,	// (0x0002f6ae) blid2_navig_ring_pane_g2

0x9291,	// (0x0002f6b6) blid2_navig_ring_pane_g3

0x9299,	// (0x0002f6be) blid2_navig_ring_pane_g4

0x92a1,	// (0x0002f6c6) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00035f4f) blid2_navig_ring_pane_g

0x1da5,	// (0x000281ca) bg_popup_window_pane_cp011

0xd75d,	// (0x00033b82) popup_blid2_search_window_g1

0xd765,	// (0x00033b8a) popup_blid2_search_window_t1

0xd773,	// (0x00033b98) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00035f5a) popup_blid2_search_window_t

0x3956,	// (0x00029d7b) main_browser_pane_g1

0x2a37,	// (0x00028e5c) main_browser_pane_ParamLimits

0xcf83,	// (0x000333a8) bg_button_pane_cp011_ParamLimits

0x1c1f,	// (0x00028044) cell_vitu2_function_pane_g1_ParamLimits

0xbc86,	// (0x000320ab) bg_popup_sub_pane_cp22_ParamLimits

0x8b78,	// (0x0002ef9d) input_focus_pane_cp08_ParamLimits

0x8b8f,	// (0x0002efb4) popup_vitu2_query_button_pane_ParamLimits

0x8b8f,	// (0x0002efb4) popup_vitu2_query_button_pane

0x8ba0,	// (0x0002efc5) popup_vitu2_query_input_button_pane

0xd2a1,	// (0x000336c6) popup_vitu2_query_window_g1_ParamLimits

0x8baa,	// (0x0002efcf) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00035e5b) popup_vitu2_query_window_g_ParamLimits

0x1da5,	// (0x000281ca) bg_button_pane_cp026

0x92a9,	// (0x0002f6ce) popup_vitu2_query_input_button_pane_g1

0x1da5,	// (0x000281ca) bg_button_pane_cp025

0xd781,	// (0x00033ba6) popup_vitu2_query_button_pane_t1

0x71c6,	// (0x0002d5eb) main_mp3_pane_t6

0x71d4,	// (0x0002d5f9) popup_slider_window_cp01

0xce7f,	// (0x000332a4) cam4_battery_pane

0xcee6,	// (0x0003330b) cam4_battery_pane_cp02

0xd582,	// (0x000339a7) cam4_battery_pane_cp01

0xd582,	// (0x000339a7) cam4_battery_pane_cp03

0xccf0,	// (0x00033115) cam4_battery_pane_g1

0xc18e,	// (0x000325b3) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00035f5f) cam4_battery_pane_g

0xc058,	// (0x0003247d) popup_blid_sat_info2_window_t11

0x4e07,	// (0x0002b22c) aid_size_touch_mv_arrow_left_ParamLimits

0x4e30,	// (0x0002b255) aid_size_touch_mv_arrow_right_ParamLimits

0x4e8e,	// (0x0002b2b3) navi_pane_g1_ParamLimits

0x4e9a,	// (0x0002b2bf) navi_pane_g2_ParamLimits

0x4ec8,	// (0x0002b2ed) navi_pane_g3_ParamLimits

0xf404,	// (0x00035829) navi_pane_g_ParamLimits

0x4f84,	// (0x0002b3a9) navi_pane_mv_t1_ParamLimits

0x7dae,	// (0x0002e1d3) grid_imed_effect_pane_ParamLimits

0x3505,	// (0x0002992a) aid_placing_vt_slider_lsc

0x3515,	// (0x0002993a) aid_placing_vt_slider_prt

0x2017,	// (0x0002843c) bg_tb_trans_pane_cp01_ParamLimits

0xc315,	// (0x0003273a) popup_image_details_window_g1_ParamLimits

0xc328,	// (0x0003274d) popup_image_details_window_g2_ParamLimits

0xc33d,	// (0x00032762) popup_image_details_window_g3_ParamLimits

0xc33d,	// (0x00032762) popup_image_details_window_g3

0xf737,	// (0x00035b5c) popup_image_details_window_g_ParamLimits

0xc351,	// (0x00032776) popup_image_details_window_t1_ParamLimits

0xc363,	// (0x00032788) popup_image_details_window_t2_ParamLimits

0xc37c,	// (0x000327a1) popup_image_details_window_t3_ParamLimits

0xc390,	// (0x000327b5) popup_image_details_window_t4_ParamLimits

0xc3ab,	// (0x000327d0) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00035b63) popup_image_details_window_t_ParamLimits

0x8f22,	// (0x0002f347) cl_header_name_pane_ParamLimits

0x8f22,	// (0x0002f347) cl_header_name_pane

0x92b1,	// (0x0002f6d6) cl_header_name_pane_t1_ParamLimits

0x92b1,	// (0x0002f6d6) cl_header_name_pane_t1

0x92d2,	// (0x0002f6f7) cl_header_name_pane_t2_ParamLimits

0x92d2,	// (0x0002f6f7) cl_header_name_pane_t2

0x9314,	// (0x0002f739) cl_header_name_pane_t3_ParamLimits

0x9314,	// (0x0002f739) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x00035f64) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x00035f64) cl_header_name_pane_t

0x4f55,	// (0x0002b37a) navi_pane_mv_g2_ParamLimits

0xcf07,	// (0x0003332c) field_vitu2_entry_pane_g1_ParamLimits

0xcf13,	// (0x00033338) field_vitu2_entry_pane_g2_ParamLimits

0xcf1f,	// (0x00033344) field_vitu2_entry_pane_g3_ParamLimits

0xcf1f,	// (0x00033344) field_vitu2_entry_pane_g3

0xf935,	// (0x00035d5a) field_vitu2_entry_pane_g_ParamLimits

0x1abf,	// (0x00027ee4) cell_vitu2_itu_pane_g1_ParamLimits

0x1acf,	// (0x00027ef4) cell_vitu2_itu_pane_g2_ParamLimits

0x1acf,	// (0x00027ef4) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00035d66) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00035d66) cell_vitu2_itu_pane_g

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp05_ParamLimits

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp05

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp03

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp04

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp10_ParamLimits

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp10

0x8ec4,	// (0x0002f2e9) bg_vkb2_func_pane_cp08

0x8eaa,	// (0x0002f2cf) bg_vkb2_func_pane_cp06

0x8eb8,	// (0x0002f2dd) bg_vkb2_func_pane_cp07

0xd68f,	// (0x00033ab4) bg_vkb2_func_pane_cp11_ParamLimits

0xd68f,	// (0x00033ab4) bg_vkb2_func_pane_cp11

0xd6a4,	// (0x00033ac9) bg_vkb2_func_pane_cp12_ParamLimits

0xd6a4,	// (0x00033ac9) bg_vkb2_func_pane_cp12

0x1da5,	// (0x000281ca) bg_vkb2_func_pane_cp09

0xcf9b,	// (0x000333c0) bg_vkb2_func_pane_g1

0x3ab4,	// (0x00029ed9) bg_vkb2_func_pane_g2

0xcfa3,	// (0x000333c8) bg_vkb2_func_pane_g3

0xcfab,	// (0x000333d0) bg_vkb2_func_pane_g4

0xd224,	// (0x00033649) bg_vkb2_func_pane_g5

0xcfc3,	// (0x000333e8) bg_vkb2_func_pane_g6

0xcfcb,	// (0x000333f0) bg_vkb2_func_pane_g7

0xcfbb,	// (0x000333e0) bg_vkb2_func_pane_g8

0x3a94,	// (0x00029eb9) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00035f6b) bg_vkb2_func_pane_g

0x91d3,	// (0x0002f5f8) blid2_tripm_pane_g6_ParamLimits

0x91d3,	// (0x0002f5f8) blid2_tripm_pane_g6

0xccaa,	// (0x000330cf) mp4_progress_pane_g1

0x924e,	// (0x0002f673) blid2_tripm_values_pane_ParamLimits

0x924e,	// (0x0002f673) blid2_tripm_values_pane

0x9345,	// (0x0002f76a) blid2_tripm_values_pane_t1

0x9353,	// (0x0002f778) blid2_tripm_values_pane_t2

0x9361,	// (0x0002f786) blid2_tripm_values_pane_t3

0x936f,	// (0x0002f794) blid2_tripm_values_pane_t4

0x937d,	// (0x0002f7a2) blid2_tripm_values_pane_t5

0x938b,	// (0x0002f7b0) blid2_tripm_values_pane_t6

0x9399,	// (0x0002f7be) blid2_tripm_values_pane_t7

0x93a7,	// (0x0002f7cc) blid2_tripm_values_pane_t8

0x93b5,	// (0x0002f7da) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00035f7e) blid2_tripm_values_pane_t

0x3551,	// (0x00029976) call_video_pane_t1_ParamLimits

0x356f,	// (0x00029994) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000356b2) call_video_pane_t_ParamLimits

0x5622,	// (0x0002ba47) msg_header_pane_g1_ParamLimits

0x5630,	// (0x0002ba55) msg_header_pane_g2_ParamLimits

0x5630,	// (0x0002ba55) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000358cc) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000358cc) msg_header_pane_g

0x2a37,	// (0x00028e5c) main_clock2_pane_ParamLimits

0x7b2f,	// (0x0002df54) grid_clock2_toolbar_pane_ParamLimits

0x7b2f,	// (0x0002df54) grid_clock2_toolbar_pane

0x7b2f,	// (0x0002df54) listscroll_clock2_pane_ParamLimits

0x7b2f,	// (0x0002df54) listscroll_clock2_pane

0x7c17,	// (0x0002e03c) main_clock2_pane_t3_ParamLimits

0x7c17,	// (0x0002e03c) main_clock2_pane_t3

0x7c3a,	// (0x0002e05f) main_clock2_pane_t4_ParamLimits

0x7c3a,	// (0x0002e05f) main_clock2_pane_t4

0xd78f,	// (0x00033bb4) cell_clock2_toolbar_pane

0xd797,	// (0x00033bbc) cell_clock2_toolbar_pane_cp01

0xd797,	// (0x00033bbc) cell_clock2_toolbar_pane_cp02

0xd79f,	// (0x00033bc4) cell_clock2_toolbar_pane_cp03

0xd7a7,	// (0x00033bcc) list_clock2_pane

0x4ba7,	// (0x0002afcc) scroll_pane_cp10

0xd7af,	// (0x00033bd4) list_single_clock2_pane_ParamLimits

0xd7af,	// (0x00033bd4) list_single_clock2_pane

0x4ff6,	// (0x0002b41b) list_highlight_pane_cp08

0xd7bc,	// (0x00033be1) list_single_clock2_pane_t1

0xd7ca,	// (0x00033bef) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x00035f91) list_single_clock2_pane_t

0x1da5,	// (0x000281ca) bg_button_pane_cp10

0xd7d8,	// (0x00033bfd) cell_clock2_toolbar_pane_g1

0x0d68,	// (0x0002718d) aid_main_viewer_pane_g1_ParamLimits

0x0d68,	// (0x0002718d) aid_main_viewer_pane_g1

0x0d76,	// (0x0002719b) aid_main_viewer_pane_g2_ParamLimits

0x0d76,	// (0x0002719b) aid_main_viewer_pane_g2

0x56bf,	// (0x0002bae4) aid_main_viewer_pane_g3_ParamLimits

0x56bf,	// (0x0002bae4) aid_main_viewer_pane_g3

0x56ce,	// (0x0002baf3) aid_main_viewer_pane_g4_ParamLimits

0x56ce,	// (0x0002baf3) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000358dd) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000358dd) aid_main_viewer_pane_g

0x68c8,	// (0x0002cced) main_calc_pane_ParamLimits

0x68dc,	// (0x0002cd01) main_dialer2_pane_ParamLimits

0x1da5,	// (0x000281ca) main_cam6_pane

0x1da5,	// (0x000281ca) main_vid6_pane

0x7b3b,	// (0x0002df60) listscroll_gen_pane_cp06_ParamLimits

0x7b3b,	// (0x0002df60) listscroll_gen_pane_cp06

0x7c5d,	// (0x0002e082) main_clock2_pane_t5_ParamLimits

0x7c5d,	// (0x0002e082) main_clock2_pane_t5

0x7cbd,	// (0x0002e0e2) aid_call2_pane_cp10_ParamLimits

0x7ccf,	// (0x0002e0f4) aid_call_pane_cp10_ParamLimits

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7ce1,	// (0x0002e106) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7ce1,	// (0x0002e106) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4d96,	// (0x0002b1bb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00035c13) popup_clock_analogue_window_cp10_g_ParamLimits

0x7cf3,	// (0x0002e118) popup_clock_analogue_window_cp10_t1_ParamLimits

0x81ad,	// (0x0002e5d2) cell_dialer2_keypad_pane_g2_ParamLimits

0x81ad,	// (0x0002e5d2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00035cf9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00035cf9) cell_dialer2_keypad_pane_g

0x81c9,	// (0x0002e5ee) cell_dialer2_keypad_pane_t1

0x866d,	// (0x0002ea92) main_cset_text2_pane_ParamLimits

0x866d,	// (0x0002ea92) main_cset_text2_pane

0xd489,	// (0x000338ae) area_vitu2_query_pane_g1_ParamLimits

0x8e49,	// (0x0002f26e) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00035eae) area_vitu2_query_pane_g_ParamLimits

0xd50d,	// (0x00033932) area_vitu2_query_pane_t7_ParamLimits

0xd50d,	// (0x00033932) area_vitu2_query_pane_t7

0x8eaa,	// (0x0002f2cf) bg_button_pane_cp018_ParamLimits

0x8eb8,	// (0x0002f2dd) bg_button_pane_cp021_ParamLimits

0x8ec4,	// (0x0002f2e9) bg_button_pane_cp022_ParamLimits

0x8ec4,	// (0x0002f2e9) bg_vkb2_func_pane_cp08_ParamLimits

0x8eaa,	// (0x0002f2cf) bg_vkb2_func_pane_cp06_ParamLimits

0x8eb8,	// (0x0002f2dd) bg_vkb2_func_pane_cp07_ParamLimits

0x8ed5,	// (0x0002f2fa) input_focus_pane_cp09_ParamLimits

0xd7e0,	// (0x00033c05) cam6_autofocus_pane_ParamLimits

0xd7e0,	// (0x00033c05) cam6_autofocus_pane

0x1d3e,	// (0x00028163) cam6_image_uncrop_pane_ParamLimits

0x1d3e,	// (0x00028163) cam6_image_uncrop_pane

0x1d4d,	// (0x00028172) cam6_indi_pane_ParamLimits

0x1d4d,	// (0x00028172) cam6_indi_pane

0x1d63,	// (0x00028188) cam6_mode_pane_ParamLimits

0x1d63,	// (0x00028188) cam6_mode_pane

0x1d75,	// (0x0002819a) cam6_timer_pane_ParamLimits

0x1d75,	// (0x0002819a) cam6_timer_pane

0x1d81,	// (0x000281a6) cam6_zoom_pane_ParamLimits

0x1d81,	// (0x000281a6) cam6_zoom_pane

0x93c3,	// (0x0002f7e8) cam6_mode_pane_g1_ParamLimits

0x93c3,	// (0x0002f7e8) cam6_mode_pane_g1

0x93d3,	// (0x0002f7f8) cam6_mode_pane_g2_ParamLimits

0x93d3,	// (0x0002f7f8) cam6_mode_pane_g2

0x93e3,	// (0x0002f808) cam6_mode_pane_g3_ParamLimits

0x93e3,	// (0x0002f808) cam6_mode_pane_g3

0x93f3,	// (0x0002f818) cam6_mode_pane_g4_ParamLimits

0x93f3,	// (0x0002f818) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00035f96) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00035f96) cam6_mode_pane_g

0xd7ee,	// (0x00033c13) bg_tb_trans_pane_cp08_ParamLimits

0xd7ee,	// (0x00033c13) bg_tb_trans_pane_cp08

0xd7fc,	// (0x00033c21) cam6_battery_pane_ParamLimits

0xd7fc,	// (0x00033c21) cam6_battery_pane

0xd812,	// (0x00033c37) cam6_indi_pane_g1_ParamLimits

0xd812,	// (0x00033c37) cam6_indi_pane_g1

0xd824,	// (0x00033c49) cam6_indi_pane_g2_ParamLimits

0xd824,	// (0x00033c49) cam6_indi_pane_g2

0xd836,	// (0x00033c5b) cam6_indi_pane_g3_ParamLimits

0xd836,	// (0x00033c5b) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00035f9f) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00035f9f) cam6_indi_pane_g

0xd848,	// (0x00033c6d) cam6_indi_pane_t1_ParamLimits

0xd848,	// (0x00033c6d) cam6_indi_pane_t1

0x9403,	// (0x0002f828) cam6_autofocus_pane_g1

0x940b,	// (0x0002f830) cam6_autofocus_pane_g2

0x9413,	// (0x0002f838) cam6_autofocus_pane_g3

0x941b,	// (0x0002f840) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00035fa6) cam6_autofocus_pane_g

0xd86e,	// (0x00033c93) cam6_timer_pane_g1

0xd876,	// (0x00033c9b) cam6_timer_pane_t1

0xd884,	// (0x00033ca9) cam6_zoom_cont_pane

0xd88c,	// (0x00033cb1) cam6_zoom_pane_g1

0xd894,	// (0x00033cb9) cam6_zoom_pane_g2

0x9423,	// (0x0002f848) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00035faf) cam6_zoom_pane_g

0xc18e,	// (0x000325b3) cam6_battery_pane_g1

0xc18e,	// (0x000325b3) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00035b20) cam6_battery_pane_g

0xd89c,	// (0x00033cc1) cam6_zoom_cont_pane_g1

0xd8a5,	// (0x00033cca) cam6_zoom_cont_pane_g2

0xd8ae,	// (0x00033cd3) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00035fb6) cam6_zoom_cont_pane_g

0x9440,	// (0x0002f865) cam6_mode_pane_cp_ParamLimits

0x9440,	// (0x0002f865) cam6_mode_pane_cp

0x9452,	// (0x0002f877) cam6_zoom_pane_cp_ParamLimits

0x9452,	// (0x0002f877) cam6_zoom_pane_cp

0x945e,	// (0x0002f883) vid6_image_uncrop_cif_pane_ParamLimits

0x945e,	// (0x0002f883) vid6_image_uncrop_cif_pane

0x946e,	// (0x0002f893) vid6_image_uncrop_nhd_pane_ParamLimits

0x946e,	// (0x0002f893) vid6_image_uncrop_nhd_pane

0x947d,	// (0x0002f8a2) vid6_image_uncrop_vga_pane_ParamLimits

0x947d,	// (0x0002f8a2) vid6_image_uncrop_vga_pane

0x948c,	// (0x0002f8b1) vid6_image_uncrop_wvga_pane_ParamLimits

0x948c,	// (0x0002f8b1) vid6_image_uncrop_wvga_pane

0x949b,	// (0x0002f8c0) vid6_indi_pane_ParamLimits

0x949b,	// (0x0002f8c0) vid6_indi_pane

0xd7ee,	// (0x00033c13) bg_tb_trans_pane_cp09_ParamLimits

0xd7ee,	// (0x00033c13) bg_tb_trans_pane_cp09

0xd8c6,	// (0x00033ceb) cam6_battery_pane_cp_ParamLimits

0xd8c6,	// (0x00033ceb) cam6_battery_pane_cp

0xd8d2,	// (0x00033cf7) vid6_indi_pane_g1_ParamLimits

0xd8d2,	// (0x00033cf7) vid6_indi_pane_g1

0xd8e4,	// (0x00033d09) vid6_indi_pane_g2_ParamLimits

0xd8e4,	// (0x00033d09) vid6_indi_pane_g2

0xd8f6,	// (0x00033d1b) vid6_indi_pane_g3_ParamLimits

0xd8f6,	// (0x00033d1b) vid6_indi_pane_g3

0xd90b,	// (0x00033d30) vid6_indi_pane_g4_ParamLimits

0xd90b,	// (0x00033d30) vid6_indi_pane_g4

0xd920,	// (0x00033d45) vid6_indi_pane_g5_ParamLimits

0xd920,	// (0x00033d45) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00035fbd) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00035fbd) vid6_indi_pane_g

0xd93a,	// (0x00033d5f) vid6_indi_pane_t1_ParamLimits

0xd93a,	// (0x00033d5f) vid6_indi_pane_t1

0xd950,	// (0x00033d75) vid6_indi_pane_t2_ParamLimits

0xd950,	// (0x00033d75) vid6_indi_pane_t2

0xd978,	// (0x00033d9d) vid6_indi_pane_t3_ParamLimits

0xd978,	// (0x00033d9d) vid6_indi_pane_t3

0xd9a0,	// (0x00033dc5) vid6_indi_pane_t4_ParamLimits

0xd9a0,	// (0x00033dc5) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00035fc8) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00035fc8) vid6_indi_pane_t

0xd9c4,	// (0x00033de9) wait_bar_pane_cp08

0x94b3,	// (0x0002f8d8) main_cset_text2_pane_t1_ParamLimits

0x94b3,	// (0x0002f8d8) main_cset_text2_pane_t1

0x942b,	// (0x0002f850) listscroll_gen_pane_cp06_t1_ParamLimits

0x942b,	// (0x0002f850) listscroll_gen_pane_cp06_t1

0x1da5,	// (0x000281ca) main_cam6_set_pane

0xce71,	// (0x00033296) bg_tb_trans_pane_cp06_ParamLimits

0xce87,	// (0x000332ac) cam4_indicators_pane_g1_ParamLimits

0xce98,	// (0x000332bd) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00035d36) cam4_indicators_pane_g_ParamLimits

0xceb6,	// (0x000332db) cam4_indicators_pane_t1_ParamLimits

0xced8,	// (0x000332fd) bg_tb_trans_pane_cp07_ParamLimits

0x1865,	// (0x00027c8a) vid4_indicators_pane_g1_ParamLimits

0x1872,	// (0x00027c97) vid4_indicators_pane_g2_ParamLimits

0x187f,	// (0x00027ca4) vid4_indicators_pane_g3_ParamLimits

0x188c,	// (0x00027cb1) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00035d48) vid4_indicators_pane_g_ParamLimits

0x18a4,	// (0x00027cc9) vid4_indicators_pane_t1_ParamLimits

0xd58a,	// (0x000339af) vid4_progress_pane_g1_ParamLimits

0xd59a,	// (0x000339bf) vid4_progress_pane_g2_ParamLimits

0x46a7,	// (0x0002aacc) vid4_progress_pane_g3_ParamLimits

0xce98,	// (0x000332bd) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00035ef9) vid4_progress_pane_g_ParamLimits

0xd5aa,	// (0x000339cf) vid4_progress_pane_t1_ParamLimits

0xd5bf,	// (0x000339e4) vid4_progress_pane_t2_ParamLimits

0xd5d5,	// (0x000339fa) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00035f04) vid4_progress_pane_t_ParamLimits

0xd5ea,	// (0x00033a0f) wait_bar_pane_cp07_ParamLimits

0x94d3,	// (0x0002f8f8) main_cam6_set_pane_g2_ParamLimits

0x94d3,	// (0x0002f8f8) main_cam6_set_pane_g2

0x94f7,	// (0x0002f91c) main_cset6_listscroll_pane_ParamLimits

0x94f7,	// (0x0002f91c) main_cset6_listscroll_pane

0x9513,	// (0x0002f938) main_cset6_slider_pane_ParamLimits

0x9513,	// (0x0002f938) main_cset6_slider_pane

0x9529,	// (0x0002f94e) main_cset6_text2_pane_ParamLimits

0x9529,	// (0x0002f94e) main_cset6_text2_pane

0xd9d3,	// (0x00033df8) main_cset6_text_pane

0xd9db,	// (0x00033e00) main_cset_list_pane_copy1_ParamLimits

0xd9db,	// (0x00033e00) main_cset_list_pane_copy1

0xd9eb,	// (0x00033e10) scroll_pane_cp028_copy1

0x9537,	// (0x0002f95c) cset_list_set_pane_copy1

0x954a,	// (0x0002f96f) aid_position_infowindow_above_copy1

0x9552,	// (0x0002f977) aid_position_infowindow_below_copy1

0xd9f4,	// (0x00033e19) cset_list_set_pane_g1_copy1

0xd9fc,	// (0x00033e21) cset_list_set_pane_g3_copy1_ParamLimits

0xd9fc,	// (0x00033e21) cset_list_set_pane_g3_copy1

0xda0b,	// (0x00033e30) cset_list_set_pane_t1_copy1_ParamLimits

0xda0b,	// (0x00033e30) cset_list_set_pane_t1_copy1

0x2017,	// (0x0002843c) list_highlight_pane_cp021_copy1_ParamLimits

0x2017,	// (0x0002843c) list_highlight_pane_cp021_copy1

0xda20,	// (0x00033e45) cset6_slider_pane_ParamLimits

0xda20,	// (0x00033e45) cset6_slider_pane

0xda4c,	// (0x00033e71) main_cset6_slider_pane_g1_ParamLimits

0xda4c,	// (0x00033e71) main_cset6_slider_pane_g1

0x955a,	// (0x0002f97f) main_cset6_slider_pane_g2_ParamLimits

0x955a,	// (0x0002f97f) main_cset6_slider_pane_g2

0xd0ca,	// (0x000334ef) main_cset6_slider_pane_g3_ParamLimits

0xd0ca,	// (0x000334ef) main_cset6_slider_pane_g3

0x8732,	// (0x0002eb57) main_cset6_slider_pane_g4_ParamLimits

0x8732,	// (0x0002eb57) main_cset6_slider_pane_g4

0x877a,	// (0x0002eb9f) main_cset6_slider_pane_g5_ParamLimits

0x877a,	// (0x0002eb9f) main_cset6_slider_pane_g5

0xd0ca,	// (0x000334ef) main_cset6_slider_pane_g7_ParamLimits

0xd0ca,	// (0x000334ef) main_cset6_slider_pane_g7

0xd0d6,	// (0x000334fb) main_cset6_slider_pane_g8_ParamLimits

0xd0d6,	// (0x000334fb) main_cset6_slider_pane_g8

0x871a,	// (0x0002eb3f) main_cset6_slider_pane_g9_ParamLimits

0x871a,	// (0x0002eb3f) main_cset6_slider_pane_g9

0x8726,	// (0x0002eb4b) main_cset6_slider_pane_g10_ParamLimits

0x8726,	// (0x0002eb4b) main_cset6_slider_pane_g10

0x8732,	// (0x0002eb57) main_cset6_slider_pane_g11_ParamLimits

0x8732,	// (0x0002eb57) main_cset6_slider_pane_g11

0x873e,	// (0x0002eb63) main_cset6_slider_pane_g12_ParamLimits

0x873e,	// (0x0002eb63) main_cset6_slider_pane_g12

0x874a,	// (0x0002eb6f) main_cset6_slider_pane_g13_ParamLimits

0x874a,	// (0x0002eb6f) main_cset6_slider_pane_g13

0x8756,	// (0x0002eb7b) main_cset6_slider_pane_g14_ParamLimits

0x8756,	// (0x0002eb7b) main_cset6_slider_pane_g14

0x9582,	// (0x0002f9a7) main_cset6_slider_pane_g15_ParamLimits

0x9582,	// (0x0002f9a7) main_cset6_slider_pane_g15

0x877a,	// (0x0002eb9f) main_cset6_slider_pane_g16_ParamLimits

0x877a,	// (0x0002eb9f) main_cset6_slider_pane_g16

0x8786,	// (0x0002ebab) main_cset6_slider_pane_g17_ParamLimits

0x8786,	// (0x0002ebab) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00035fd1) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00035fd1) main_cset6_slider_pane_g

0xda74,	// (0x00033e99) main_cset6_slider_pane_t1_ParamLimits

0xda74,	// (0x00033e99) main_cset6_slider_pane_t1

0x959a,	// (0x0002f9bf) main_cset6_slider_pane_t2_ParamLimits

0x959a,	// (0x0002f9bf) main_cset6_slider_pane_t2

0x95c5,	// (0x0002f9ea) main_cset6_slider_pane_t3_ParamLimits

0x95c5,	// (0x0002f9ea) main_cset6_slider_pane_t3

0x95f0,	// (0x0002fa15) main_cset6_slider_pane_t4_ParamLimits

0x95f0,	// (0x0002fa15) main_cset6_slider_pane_t4

0x961b,	// (0x0002fa40) main_cset6_slider_pane_t5_ParamLimits

0x961b,	// (0x0002fa40) main_cset6_slider_pane_t5

0xdab5,	// (0x00033eda) main_cset6_slider_pane_t7_ParamLimits

0xdab5,	// (0x00033eda) main_cset6_slider_pane_t7

0x9646,	// (0x0002fa6b) main_cset6_slider_pane_t8_ParamLimits

0x9646,	// (0x0002fa6b) main_cset6_slider_pane_t8

0x966a,	// (0x0002fa8f) main_cset6_slider_pane_t9_ParamLimits

0x966a,	// (0x0002fa8f) main_cset6_slider_pane_t9

0x968e,	// (0x0002fab3) main_cset6_slider_pane_t10_ParamLimits

0x968e,	// (0x0002fab3) main_cset6_slider_pane_t10

0x96b2,	// (0x0002fad7) main_cset6_slider_pane_t11_ParamLimits

0x96b2,	// (0x0002fad7) main_cset6_slider_pane_t11

0xdaeb,	// (0x00033f10) main_cset6_slider_pane_t14_ParamLimits

0xdaeb,	// (0x00033f10) main_cset6_slider_pane_t14

0xdb24,	// (0x00033f49) main_cset6_slider_pane_t15_ParamLimits

0xdb24,	// (0x00033f49) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00035ff6) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00035ff6) main_cset6_slider_pane_t

0xdb5d,	// (0x00033f82) cset_slider_pane_g1_copy1

0xdb66,	// (0x00033f8b) cset_slider_pane_g2_copy1

0xdb6f,	// (0x00033f94) cset_slider_pane_g3_copy1

0x1da5,	// (0x000281ca) bg_popup_sub_pane_cp011_copy1

0xd2ad,	// (0x000336d2) main_cset_text_pane_g1_copy1

0xd2b5,	// (0x000336da) main_cset_text_pane_t1_copy1

0xd2c3,	// (0x000336e8) main_cset_text_pane_t2_copy1

0xd2d1,	// (0x000336f6) main_cset_text_pane_t3_copy1

0xd2df,	// (0x00033704) main_cset_text_pane_t4_copy1

0xd2ed,	// (0x00033712) main_cset_text_pane_t5_copy1

0xd2fb,	// (0x00033720) main_cset_text_pane_t6_copy1

0xd309,	// (0x0003372e) main_cset_text_pane_t7_copy1

0x94b3,	// (0x0002f8d8) main_cset_text2_pane_t1_copy1

0x1da5,	// (0x000281ca) main_ncimui_pane

0x6b12,	// (0x0002cf37) popup_query_ncimui_window_ParamLimits

0x6b12,	// (0x0002cf37) popup_query_ncimui_window

0xc45a,	// (0x0003287f) field_cale_ev2_pane_g4_ParamLimits

0xc45a,	// (0x0003287f) field_cale_ev2_pane_g4

0x8133,	// (0x0002e558) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8133,	// (0x0002e558) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00035cd4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00035cd4) cell_video_dialer_keypad_pane_g

0x814b,	// (0x0002e570) cell_video_dialer_keypad_pane_t1

0x1da5,	// (0x000281ca) bg_popup_window_pane_cp012

0x4a08,	// (0x0002ae2d) heading_pane_cp06

0xdc67,	// (0x0003408c) ncim_query_content_pane

0x1da5,	// (0x000281ca) bg_popup_heading_pane_cp01

0xdc6f,	// (0x00034094) ncim_heading_pane_t1

0xdc7d,	// (0x000340a2) ncim_indicator_popup_pane

0xdc8f,	// (0x000340b4) ncim_query_button_pane

0xdca3,	// (0x000340c8) ncim_query_content_pane_t1

0xdcb5,	// (0x000340da) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00036035) ncim_query_content_pane_t

0xdcef,	// (0x00034114) ncim_query_list_pane

0xdd01,	// (0x00034126) ncim_query_popup_pane

0xdc7d,	// (0x000340a2) ncim_indicator_popup_pane_ParamLimits

0x97cf,	// (0x0002fbf4) ncim_query_content_pane_g1_ParamLimits

0x97cf,	// (0x0002fbf4) ncim_query_content_pane_g1

0xdca3,	// (0x000340c8) ncim_query_content_pane_t1_ParamLimits

0xdcb5,	// (0x000340da) ncim_query_content_pane_t2_ParamLimits

0x97db,	// (0x0002fc00) ncim_query_content_pane_t3_ParamLimits

0x97db,	// (0x0002fc00) ncim_query_content_pane_t3

0x9803,	// (0x0002fc28) ncim_query_content_pane_t4_ParamLimits

0x9803,	// (0x0002fc28) ncim_query_content_pane_t4

0x982b,	// (0x0002fc50) ncim_query_content_pane_t5_ParamLimits

0x982b,	// (0x0002fc50) ncim_query_content_pane_t5

0xdcc7,	// (0x000340ec) ncim_query_content_pane_t6_ParamLimits

0xdcc7,	// (0x000340ec) ncim_query_content_pane_t6

0xfc10,	// (0x00036035) ncim_query_content_pane_t_ParamLimits

0xdcef,	// (0x00034114) ncim_query_list_pane_ParamLimits

0xdd01,	// (0x00034126) ncim_query_popup_pane_ParamLimits

0xdd15,	// (0x0003413a) wait_bar_pane_cp04

0x1da5,	// (0x000281ca) input_focus_pane_cp011

0xdd1d,	// (0x00034142) ncim_query_popup_pane_t1

0xdd2b,	// (0x00034150) ncim_list_query_list_pane_ParamLimits

0xdd2b,	// (0x00034150) ncim_list_query_list_pane

0x1da5,	// (0x000281ca) bg_button_pane_cp027

0xdd3e,	// (0x00034163) ncim_query_button_pane_g1

0x1da5,	// (0x000281ca) list_highlight_pane_cp012

0xdd48,	// (0x0003416d) ncim_list_query_list_pane_g1

0xdd50,	// (0x00034175) ncim_list_query_list_pane_t1

0xcea7,	// (0x000332cc) cam4_indicators_pane_g3_ParamLimits

0xcea7,	// (0x000332cc) cam4_indicators_pane_g3

0x1898,	// (0x00027cbd) vid4_indicators_pane_g5_ParamLimits

0x1898,	// (0x00027cbd) vid4_indicators_pane_g5

0xcea7,	// (0x000332cc) vid4_progress_pane_g5_ParamLimits

0xcea7,	// (0x000332cc) vid4_progress_pane_g5

0x96e8,	// (0x0002fb0d) main_ncimui_pane_g1

0x973e,	// (0x0002fb63) ncimui_group_query_pane_ParamLimits

0x973e,	// (0x0002fb63) ncimui_group_query_pane

0x977a,	// (0x0002fb9f) ncimui_list_pane_ParamLimits

0x977a,	// (0x0002fb9f) ncimui_list_pane

0x979b,	// (0x0002fbc0) ncimui_text_pane_ParamLimits

0x979b,	// (0x0002fbc0) ncimui_text_pane

0x9853,	// (0x0002fc78) ncimui_text_pane_t1_ParamLimits

0x9853,	// (0x0002fc78) ncimui_text_pane_t1

0xdd5e,	// (0x00034183) ncimui_list_single_graphic_pane_ParamLimits

0xdd5e,	// (0x00034183) ncimui_list_single_graphic_pane

0x9871,	// (0x0002fc96) ncimui_query_pane_ParamLimits

0x9871,	// (0x0002fc96) ncimui_query_pane

0x1da5,	// (0x000281ca) list_highlight_pane_cp013

0xdd6e,	// (0x00034193) ncim_list_query_list_pane_t1_copy1

0xdd48,	// (0x0003416d) ncim_list_single_graphic_pane_g1

0xdd7c,	// (0x000341a1) ncim_query_button_pane_cp01

0xdd88,	// (0x000341ad) ncim_query_entry_pane_ParamLimits

0xdd88,	// (0x000341ad) ncim_query_entry_pane

0xdd9b,	// (0x000341c0) ncimui_query_pane_g1

0xdda7,	// (0x000341cc) ncimui_query_pane_t1_ParamLimits

0xdda7,	// (0x000341cc) ncimui_query_pane_t1

0x2017,	// (0x0002843c) input_focus_pane_cp012

0xddc0,	// (0x000341e5) ncim_query_entry_pane_t1

0x2a37,	// (0x00028e5c) main_im_pane_ParamLimits

0x2017,	// (0x0002843c) main_mobtv_pane_ParamLimits

0x2017,	// (0x0002843c) main_mobtv_pane

0x871a,	// (0x0002eb3f) main_cset6_slider_pane_g18_ParamLimits

0x871a,	// (0x0002eb3f) main_cset6_slider_pane_g18

0x874a,	// (0x0002eb6f) main_cset6_slider_pane_g19_ParamLimits

0x874a,	// (0x0002eb6f) main_cset6_slider_pane_g19

0xddd2,	// (0x000341f7) bg_main_mobtv_pane_ParamLimits

0xddd2,	// (0x000341f7) bg_main_mobtv_pane

0x9884,	// (0x0002fca9) main_mobtv_info_pane

0x988d,	// (0x0002fcb2) main_mobtv_loading_pane_ParamLimits

0x988d,	// (0x0002fcb2) main_mobtv_loading_pane

0xdde0,	// (0x00034205) main_mobtv_pg_channel_list_pane

0xddea,	// (0x0003420f) main_mobtv_pg_hdr_pane

0x989a,	// (0x0002fcbf) main_mobtv_programe_curr_pane_ParamLimits

0x989a,	// (0x0002fcbf) main_mobtv_programe_curr_pane

0x98a7,	// (0x0002fccc) main_mobtv_programe_next_pane_ParamLimits

0x98a7,	// (0x0002fccc) main_mobtv_programe_next_pane

0xddf3,	// (0x00034218) popup_mobtv_noti_window

0xc18e,	// (0x000325b3) main_tv_pg_hdr_pane_g1

0xddfb,	// (0x00034220) main_tv_pg_hdr_pane_g2

0xde03,	// (0x00034228) main_tv_pg_hdr_pane_g3

0xde0b,	// (0x00034230) main_tv_pg_hdr_pane_g4

0xde13,	// (0x00034238) main_tv_pg_hdr_pane_g5

0xde1d,	// (0x00034242) main_tv_pg_hdr_pane_g6

0xde27,	// (0x0003424c) main_tv_pg_hdr_pane_g7

0xde31,	// (0x00034256) main_tv_pg_hdr_pane_g8

0xde3b,	// (0x00034260) main_tv_pg_hdr_pane_g9

0xde45,	// (0x0003426a) main_tv_pg_hdr_pane_g10

0xde4f,	// (0x00034274) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00036042) main_tv_pg_hdr_pane_g

0xde59,	// (0x0003427e) main_tv_pg_hdr_pane_t1

0xde67,	// (0x0003428c) main_tv_pg_hdr_pane_t2

0xde75,	// (0x0003429a) main_tv_pg_hdr_pane_t3

0xde85,	// (0x000342aa) main_tv_pg_hdr_pane_t4

0xde95,	// (0x000342ba) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00036059) main_tv_pg_hdr_pane_t

0xdea5,	// (0x000342ca) single_mobtv_pg_channel_pane_ParamLimits

0xdea5,	// (0x000342ca) single_mobtv_pg_channel_pane

0xdeb7,	// (0x000342dc) single_mobtv_pg_channel_table_pane

0xdec0,	// (0x000342e5) single_mobtv_pg_channel_thumb_pane

0xdec9,	// (0x000342ee) single_tv_pg_channel_pane_g1

0xded2,	// (0x000342f7) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x00036064) single_tv_pg_channel_pane_g

0xc3f5,	// (0x0003281a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc3f5,	// (0x0003281a) bg_single_mobtv_pg_channel_thumb_pane

0xdedb,	// (0x00034300) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdedb,	// (0x00034300) single_mobtv_pg_channel_thumb_pane_g1

0xdee9,	// (0x0003430e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdee9,	// (0x0003430e) single_mobtv_pg_channel_thumb_pane_g2

0xdef5,	// (0x0003431a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdef5,	// (0x0003431a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00036069) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00036069) single_mobtv_pg_channel_thumb_pane_g

0xdf01,	// (0x00034326) single_mobtv_pg_channel_thumb_pane_t1

0xdf0f,	// (0x00034334) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x00036070) single_mobtv_pg_channel_thumb_pane_t

0xc18e,	// (0x000325b3) bg_single_mobtv_pg_channel_table_pane_g1

0xc18e,	// (0x000325b3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00035b20) bg_single_mobtv_pg_channel_table_pane_g

0xdf1d,	// (0x00034342) single_mobtv_pg_channel_table_pane_t1

0xdf2b,	// (0x00034350) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x00036075) single_mobtv_pg_channel_table_pane_t

0x98bc,	// (0x0002fce1) main_mobtv_info_pane_g1_ParamLimits

0x98bc,	// (0x0002fce1) main_mobtv_info_pane_g1

0x98da,	// (0x0002fcff) main_mobtv_info_pane_t1_ParamLimits

0x98da,	// (0x0002fcff) main_mobtv_info_pane_t1

0x9952,	// (0x0002fd77) main_mobtv_info_pane_t2_ParamLimits

0x9952,	// (0x0002fd77) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0003607f) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0003607f) main_mobtv_info_pane_t

0x99e1,	// (0x0002fe06) wait_bar_pane_cp05

0x99f3,	// (0x0002fe18) main_mobtv_loading_pane_g1_ParamLimits

0x99f3,	// (0x0002fe18) main_mobtv_loading_pane_g1

0x9a06,	// (0x0002fe2b) main_mobtv_loading_pane_g2_ParamLimits

0x9a06,	// (0x0002fe2b) main_mobtv_loading_pane_g2

0x9a12,	// (0x0002fe37) main_mobtv_loading_pane_g3_ParamLimits

0x9a12,	// (0x0002fe37) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00036086) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00036086) main_mobtv_loading_pane_g

0xdf39,	// (0x0003435e) main_mobtv_loading_pane_t1_ParamLimits

0xdf39,	// (0x0003435e) main_mobtv_loading_pane_t1

0xdf51,	// (0x00034376) main_mobtv_loading_pane_t2_ParamLimits

0xdf51,	// (0x00034376) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0003608d) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0003608d) main_mobtv_loading_pane_t

0x9a25,	// (0x0002fe4a) wait_bar_pane_cp06_ParamLimits

0x9a25,	// (0x0002fe4a) wait_bar_pane_cp06

0xdf75,	// (0x0003439a) main_mobtv_programe_curr_pane_t1

0xdf83,	// (0x000343a8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x00036092) main_mobtv_programe_curr_pane_t

0xdf91,	// (0x000343b6) main_mobtv_programe_next_pane_t1

0xdf9f,	// (0x000343c4) main_mobtv_programe_next_pane_t2

0xdfad,	// (0x000343d2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00036097) main_mobtv_programe_next_pane_t

0x1da5,	// (0x000281ca) bg_popup_mobtv_noti_window_pane

0xdfbb,	// (0x000343e0) popup_mobtv_noti_window_g1

0xdfc3,	// (0x000343e8) popup_mobtv_noti_window_t1

0xdfd1,	// (0x000343f6) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0003609e) popup_mobtv_noti_window_t

0xc18e,	// (0x000325b3) bg_popup_mobtv_noti_window_pane_g1

0x1da5,	// (0x000281ca) sc_clock_pane

0x1da5,	// (0x000281ca) main_fs_bigclock_pane

0x9238,	// (0x0002f65d) blid2_tripm_pane_t4_ParamLimits

0x9238,	// (0x0002f65d) blid2_tripm_pane_t4

0x9a34,	// (0x0002fe59) sc_clock_pane_g1_ParamLimits

0x9a34,	// (0x0002fe59) sc_clock_pane_g1

0x9a46,	// (0x0002fe6b) sc_clock_pane_t1_ParamLimits

0x9a46,	// (0x0002fe6b) sc_clock_pane_t1

0x9a68,	// (0x0002fe8d) sc_clock_pane_t2_ParamLimits

0x9a68,	// (0x0002fe8d) sc_clock_pane_t2

0x9a80,	// (0x0002fea5) sc_clock_pane_t3_ParamLimits

0x9a80,	// (0x0002fea5) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x000360a3) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x000360a3) sc_clock_pane_t

0xa800,	// (0x00030c25) main_fs_bigclock_indicator_pane_ParamLimits

0xa800,	// (0x00030c25) main_fs_bigclock_indicator_pane

0xc3c5,	// (0x000327ea) main_fs_bigclock_pane_g1_ParamLimits

0xc3c5,	// (0x000327ea) main_fs_bigclock_pane_g1

0xa80c,	// (0x00030c31) main_fs_bigclock_pane_t1_ParamLimits

0xa80c,	// (0x00030c31) main_fs_bigclock_pane_t1

0xa81e,	// (0x00030c43) main_fs_bigclock_pane_t2_ParamLimits

0xa81e,	// (0x00030c43) main_fs_bigclock_pane_t2

0xa830,	// (0x00030c55) main_fs_bigclock_pane_t3_ParamLimits

0xa830,	// (0x00030c55) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000362a2) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000362a2) main_fs_bigclock_pane_t

0xec98,	// (0x000350bd) main_fs_bigclock_indicator_pane_g1

0xdc97,	// (0x000340bc) ncim_query_content_pane_g2_ParamLimits

0xdc97,	// (0x000340bc) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00036030) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00036030) ncim_query_content_pane_g

0x9a99,	// (0x0002febe) sc_clock_pane_t4_ParamLimits

0x9a99,	// (0x0002febe) sc_clock_pane_t4

0x2017,	// (0x0002843c) main_radioblah_pane

0xcdcd,	// (0x000331f2) cell_call4_button_pane_t1_copy1_ParamLimits

0xcdcd,	// (0x000331f2) cell_call4_button_pane_t1_copy1

0x96f0,	// (0x0002fb15) main_ncimui_pane_t1_ParamLimits

0x96f0,	// (0x0002fb15) main_ncimui_pane_t1

0x970a,	// (0x0002fb2f) main_ncimui_pane_t2_ParamLimits

0x970a,	// (0x0002fb2f) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x00036029) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x00036029) main_ncimui_pane_t

0xe11a,	// (0x0003453f) main_radioblah_anim_pane_ParamLimits

0xe11a,	// (0x0003453f) main_radioblah_anim_pane

0xe12b,	// (0x00034550) main_radioblah_info_pane_ParamLimits

0xe12b,	// (0x00034550) main_radioblah_info_pane

0xe13f,	// (0x00034564) main_radioblah_pane_t1_ParamLimits

0xe13f,	// (0x00034564) main_radioblah_pane_t1

0xe15b,	// (0x00034580) main_radioblah_pane_t2_ParamLimits

0xe15b,	// (0x00034580) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x000360c4) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x000360c4) main_radioblah_pane_t

0x9b48,	// (0x0002ff6d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9b48,	// (0x0002ff6d) main_radioblah_rocker_ctrl_pane

0xe1a3,	// (0x000345c8) main_radioblah_info_pane_t1_ParamLimits

0xe1a3,	// (0x000345c8) main_radioblah_info_pane_t1

0x9ba0,	// (0x0002ffc5) main_radioblah_info_pane_t2_ParamLimits

0x9ba0,	// (0x0002ffc5) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x000360cd) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x000360cd) main_radioblah_info_pane_t

0xc18e,	// (0x000325b3) main_radioblah_rocker_ctrl_pane_g1

0x9c52,	// (0x00030077) main_radioblah_rocker_ctrl_pane_g2

0x9c5a,	// (0x0003007f) main_radioblah_rocker_ctrl_pane_g3

0x9c62,	// (0x00030087) main_radioblah_rocker_ctrl_pane_g4

0x9c6a,	// (0x0003008f) main_radioblah_rocker_ctrl_pane_g5

0x9c72,	// (0x00030097) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x000360d6) main_radioblah_rocker_ctrl_pane_g

0x94b3,	// (0x0002f8d8) main_cset_text2_pane_t1_copy1_ParamLimits

0xce57,	// (0x0003327c) cam4_image_uncrop_qvga_pane

0xced0,	// (0x000332f5) vid4_image_uncrop_qcif_pane

0xd7e0,	// (0x00033c05) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7e0,	// (0x00033c05) cam6_image_uncrop_qvga_pane

0xd8b6,	// (0x00033cdb) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8b6,	// (0x00033cdb) vid6_image_uncrop_qcif_pane

0x1da5,	// (0x000281ca) bg_popup_preview_window_pane_cp03

0xdc49,	// (0x0003406e) list_cset_text2_pane

0xdc51,	// (0x00034076) main_cset6_text2_pane_g1

0xdc59,	// (0x0003407e) main_cset6_text2_pane_t1

0x9c7a,	// (0x0003009f) list_cset_text2_pane_t1_ParamLimits

0x9c7a,	// (0x0003009f) list_cset_text2_pane_t1

0x2017,	// (0x0002843c) main_radioblah_pane_ParamLimits

0x99cd,	// (0x0002fdf2) main_mobtv_info_pane_t3_ParamLimits

0x99cd,	// (0x0002fdf2) main_mobtv_info_pane_t3

0x9b36,	// (0x0002ff5b) main_radioblah_pane_g1

0x9b70,	// (0x0002ff95) main_radioblah_info_pane_g1

0x9bf7,	// (0x0003001c) main_radioblah_info_pane_t3_ParamLimits

0x9bf7,	// (0x0003001c) main_radioblah_info_pane_t3

0x43cd,	// (0x0002a7f2) highlight_cell_cale_month_pane_ParamLimits

0x43cd,	// (0x0002a7f2) highlight_cell_cale_month_pane

0x1da5,	// (0x000281ca) main_phob_fisheye_pane

0xc515,	// (0x0003293a) scroll_pane_cp0031_ParamLimits

0xc515,	// (0x0003293a) scroll_pane_cp0031

0xd9c4,	// (0x00033de9) wait_bar_pane_cp08_ParamLimits

0x9537,	// (0x0002f95c) cset_list_set_pane_copy1_ParamLimits

0xe1dd,	// (0x00034602) highlight_cell_cale_month_pane_g1

0x9c97,	// (0x000300bc) highlight_cell_cale_month_pane_t1

0xd579,	// (0x0003399e) list_gen_pane_cp01

0xd0b5,	// (0x000334da) scroll_pane_01

0xe1e5,	// (0x0003460a) list_single_double_fisheye_pane

0xe1ee,	// (0x00034613) list_double_fisheye_pane_g1_ParamLimits

0xe1ee,	// (0x00034613) list_double_fisheye_pane_g1

0xe1fa,	// (0x0003461f) list_double_fisheye_pane_g2_ParamLimits

0xe1fa,	// (0x0003461f) list_double_fisheye_pane_g2

0xe20e,	// (0x00034633) list_double_fisheye_pane_g3_ParamLimits

0xe20e,	// (0x00034633) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x000360e3) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x000360e3) list_double_fisheye_pane_g

0xe237,	// (0x0003465c) list_double_fisheye_pane_t1_ParamLimits

0xe237,	// (0x0003465c) list_double_fisheye_pane_t1

0xe252,	// (0x00034677) list_double_fisheye_pane_t2_ParamLimits

0xe252,	// (0x00034677) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x000360ee) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x000360ee) list_double_fisheye_pane_t

0x1da5,	// (0x000281ca) main_call5_pane

0x9ac4,	// (0x0002fee9) sc_swipe_pane_ParamLimits

0x9ac4,	// (0x0002fee9) sc_swipe_pane

0x9cb8,	// (0x000300dd) call5_image_pane_ParamLimits

0x9cb8,	// (0x000300dd) call5_image_pane

0x9cd5,	// (0x000300fa) call5_swipe_1_pane_ParamLimits

0x9cd5,	// (0x000300fa) call5_swipe_1_pane

0x9ce8,	// (0x0003010d) call5_swipe_2_pane_ParamLimits

0x9ce8,	// (0x0003010d) call5_swipe_2_pane

0x9d13,	// (0x00030138) popup_call5_audio_first_window_ParamLimits

0x9d13,	// (0x00030138) popup_call5_audio_first_window

0xc3f5,	// (0x0003281a) call5_swipe_1_pane_g1_ParamLimits

0xc3f5,	// (0x0003281a) call5_swipe_1_pane_g1

0xe274,	// (0x00034699) call5_swipe_1_pane_g2_ParamLimits

0xe274,	// (0x00034699) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x000360f3) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x000360f3) call5_swipe_1_pane_g

0xe280,	// (0x000346a5) call5_swipe_1_pane_t1_ParamLimits

0xe280,	// (0x000346a5) call5_swipe_1_pane_t1

0xc3f5,	// (0x0003281a) call5_swipe_2_pane_g1_ParamLimits

0xc3f5,	// (0x0003281a) call5_swipe_2_pane_g1

0xe295,	// (0x000346ba) call5_swipe_2_pane_g2_ParamLimits

0xe295,	// (0x000346ba) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x000360f8) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x000360f8) call5_swipe_2_pane_g

0xe2a1,	// (0x000346c6) call5_swipe_2_pane_t1_ParamLimits

0xe2a1,	// (0x000346c6) call5_swipe_2_pane_t1

0xe2b6,	// (0x000346db) sc_swipe_pane_g1_ParamLimits

0xe2b6,	// (0x000346db) sc_swipe_pane_g1

0xe2c3,	// (0x000346e8) sc_swipe_pane_g2_ParamLimits

0xe2c3,	// (0x000346e8) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x000360fd) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x000360fd) sc_swipe_pane_g

0xe2cf,	// (0x000346f4) sc_swipe_pane_t1_ParamLimits

0xe2cf,	// (0x000346f4) sc_swipe_pane_t1

0x1da5,	// (0x000281ca) main_cmail_launcher_pane

0x9d24,	// (0x00030149) aid_size_cell_cmail_l_ParamLimits

0x9d24,	// (0x00030149) aid_size_cell_cmail_l

0x9d3e,	// (0x00030163) grid_cmail_l_pane_ParamLimits

0x9d3e,	// (0x00030163) grid_cmail_l_pane

0x9d59,	// (0x0003017e) cell_cmail_l_pane_ParamLimits

0x9d59,	// (0x0003017e) cell_cmail_l_pane

0x9d7f,	// (0x000301a4) cell_cmail_l_pane_g1_ParamLimits

0x9d7f,	// (0x000301a4) cell_cmail_l_pane_g1

0x9d8b,	// (0x000301b0) cell_cmail_l_pane_t1_ParamLimits

0x9d8b,	// (0x000301b0) cell_cmail_l_pane_t1

0xe2e4,	// (0x00034709) cell_cmail_l_pane_t2_ParamLimits

0xe2e4,	// (0x00034709) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00036102) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00036102) cell_cmail_l_pane_t

0x2017,	// (0x0002843c) grid_highlight_pane_cp018_ParamLimits

0x2017,	// (0x0002843c) grid_highlight_pane_cp018

0x1ed1,	// (0x000282f6) main2_pane_ParamLimits

0x1ed1,	// (0x000282f6) main2_pane

0x2bbd,	// (0x00028fe2) popup_sp_fs_action_menu_bg_pane_g1

0x2bc5,	// (0x00028fea) popup_sp_fs_action_menu_bg_pane_g2

0x2bcd,	// (0x00028ff2) popup_sp_fs_action_menu_bg_pane_g3

0x2bd5,	// (0x00028ffa) popup_sp_fs_action_menu_bg_pane_g4

0x2bdd,	// (0x00029002) popup_sp_fs_action_menu_bg_pane_g5

0x2be5,	// (0x0002900a) popup_sp_fs_action_menu_bg_pane_g6

0x2bed,	// (0x00029012) popup_sp_fs_action_menu_bg_pane_g7

0x2bf5,	// (0x0002901a) popup_sp_fs_action_menu_bg_pane_g8

0x2bfd,	// (0x00029022) popup_sp_fs_action_menu_bg_pane_g9

0x2c05,	// (0x0002902a) popup_sp_fs_action_menu_bg_pane_g10

0x2c05,	// (0x0002902a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000355cc) popup_sp_fs_action_menu_bg_pane_g

0x3350,	// (0x00029775) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t3_g3_g1

0x335c,	// (0x00029781) list_medium_line_x2_t3_g3_g2_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_t3_g3_g2

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0003567c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0003567c) list_medium_line_x2_t3_g3_g

0x3374,	// (0x00029799) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3374,	// (0x00029799) list_medium_line_x2_t3_g3_t1

0x3389,	// (0x000297ae) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3389,	// (0x000297ae) list_medium_line_x2_t3_g3_t2

0x339d,	// (0x000297c2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00035683) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00035683) list_medium_line_x2_t3_g3_t

0x3350,	// (0x00029775) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t3_g2_g1

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0003568a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0003568a) list_medium_line_x2_t3_g2_g

0x33b2,	// (0x000297d7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x33b2,	// (0x000297d7) list_medium_line_x2_t3_g2_t1

0x33c8,	// (0x000297ed) list_medium_line_x2_t3_g2_t2_ParamLimits

0x33c8,	// (0x000297ed) list_medium_line_x2_t3_g2_t2

0x33da,	// (0x000297ff) list_medium_line_x2_t3_g2_t3_ParamLimits

0x33da,	// (0x000297ff) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0003568f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0003568f) list_medium_line_x2_t3_g2_t

0x3350,	// (0x00029775) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t4_g4_g1

0x33f7,	// (0x0002981c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x33f7,	// (0x0002981c) list_medium_line_x2_t4_g4_g2

0x335c,	// (0x00029781) list_medium_line_x2_t4_g4_g3_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_t4_g4_g3

0x3403,	// (0x00029828) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3403,	// (0x00029828) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00035696) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00035696) list_medium_line_x2_t4_g4_g

0x340f,	// (0x00029834) list_medium_line_x2_t4_g4_t1_ParamLimits

0x340f,	// (0x00029834) list_medium_line_x2_t4_g4_t1

0x3426,	// (0x0002984b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3426,	// (0x0002984b) list_medium_line_x2_t4_g4_t2

0x343b,	// (0x00029860) list_medium_line_x2_t4_g4_t3_ParamLimits

0x343b,	// (0x00029860) list_medium_line_x2_t4_g4_t3

0x344d,	// (0x00029872) list_medium_line_x2_t4_g4_t4_ParamLimits

0x344d,	// (0x00029872) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0003569f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0003569f) list_medium_line_x2_t4_g4_t

0x3350,	// (0x00029775) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t2_g4_g1

0x33f7,	// (0x0002981c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x33f7,	// (0x0002981c) list_medium_line_x2_t2_g4_g2

0x335c,	// (0x00029781) list_medium_line_x2_t2_g4_g3_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_t2_g4_g3

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00035706) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00035706) list_medium_line_x2_t2_g4_g

0x43eb,	// (0x0002a810) list_medium_line_x2_t2_g4_t1_ParamLimits

0x43eb,	// (0x0002a810) list_medium_line_x2_t2_g4_t1

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0003570f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0003570f) list_medium_line_x2_t2_g4_t

0x3350,	// (0x00029775) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t2_g3_g1

0x335c,	// (0x00029781) list_medium_line_x2_t2_g3_g2_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_t2_g3_g2

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0003567c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0003567c) list_medium_line_x2_t2_g3_g

0x4400,	// (0x0002a825) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4400,	// (0x0002a825) list_medium_line_x2_t2_g3_t1

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00035714) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00035714) list_medium_line_x2_t2_g3_t

0x4762,	// (0x0002ab87) main_sp_fs_list_pane_ParamLimits

0x4762,	// (0x0002ab87) main_sp_fs_list_pane

0x476e,	// (0x0002ab93) sp_fs_scroll_pane_ParamLimits

0x476e,	// (0x0002ab93) sp_fs_scroll_pane

0x477a,	// (0x0002ab9f) list_medium_line_x2_t3_t1

0x478a,	// (0x0002abaf) list_medium_line_x2_t3_t2

0x4798,	// (0x0002abbd) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0003575f) list_medium_line_x2_t3_t

0x47a6,	// (0x0002abcb) list_medium_line_x3_t4_t1

0x47b6,	// (0x0002abdb) list_medium_line_x3_t4_t2

0x47c4,	// (0x0002abe9) list_medium_line_x3_t4_t3

0x4798,	// (0x0002abbd) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00035766) list_medium_line_x3_t4_t

0x47d2,	// (0x0002abf7) list_medium_line_x4_t5_t1

0x47e2,	// (0x0002ac07) list_medium_line_x4_t5_t2

0x47c4,	// (0x0002abe9) list_medium_line_x4_t5_t3

0x47f0,	// (0x0002ac15) list_medium_line_x4_t5_t4

0x4798,	// (0x0002abbd) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0003576f) list_medium_line_x4_t5_t

0x3350,	// (0x00029775) list_medium_line_t4_g4_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_t4_g4_g1

0x3403,	// (0x00029828) list_medium_line_t4_g4_g2_ParamLimits

0x3403,	// (0x00029828) list_medium_line_t4_g4_g2

0x47fe,	// (0x0002ac23) list_medium_line_t4_g4_g3_ParamLimits

0x47fe,	// (0x0002ac23) list_medium_line_t4_g4_g3

0x3368,	// (0x0002978d) list_medium_line_t4_g4_g4_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0003577a) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0003577a) list_medium_line_t4_g4_g

0x480a,	// (0x0002ac2f) list_medium_line_t4_g4_t1_ParamLimits

0x480a,	// (0x0002ac2f) list_medium_line_t4_g4_t1

0x481f,	// (0x0002ac44) list_medium_line_t4_g4_t2_ParamLimits

0x481f,	// (0x0002ac44) list_medium_line_t4_g4_t2

0x4834,	// (0x0002ac59) list_medium_line_t4_g4_t3_ParamLimits

0x4834,	// (0x0002ac59) list_medium_line_t4_g4_t3

0x339d,	// (0x000297c2) list_medium_line_t4_g4_t4_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00035783) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00035783) list_medium_line_t4_g4_t

0x4b74,	// (0x0002af99) chi_dic_find_pane_g1

0x68f0,	// (0x0002cd15) main_tport_pane

0xd1fa,	// (0x0003361f) list_medium_line_plain_t1

0xd24c,	// (0x00033671) list_medium_line_t2_g2_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t2_g2_g1

0xd258,	// (0x0003367d) list_medium_line_t2_g2_g2_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00035e3f) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00035e3f) list_medium_line_t2_g2_g

0x8a64,	// (0x0002ee89) list_medium_line_t2_g2_t1_ParamLimits

0x8a64,	// (0x0002ee89) list_medium_line_t2_g2_t1

0x8a7e,	// (0x0002eea3) list_medium_line_t2_g2_t2_ParamLimits

0x8a7e,	// (0x0002eea3) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00035e44) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00035e44) list_medium_line_t2_g2_t

0xd5fa,	// (0x00033a1f) aid_sp_fs_list_icon_a_sm

0xd602,	// (0x00033a27) aid_sp_fs_list_icon_d

0xd60a,	// (0x00033a2f) aid_sp_fs_text_primary

0xd613,	// (0x00033a38) aid_sp_fs_text_secondary

0xd61c,	// (0x00033a41) list_medium_line

0xd61c,	// (0x00033a41) list_medium_line_g2

0xd61c,	// (0x00033a41) list_medium_line_g3

0xd61c,	// (0x00033a41) list_medium_line_plain

0xd61c,	// (0x00033a41) list_medium_line_plain_t2

0xd61c,	// (0x00033a41) list_medium_line_plain_t3

0xd61c,	// (0x00033a41) list_medium_line_right_icon

0xd61c,	// (0x00033a41) list_medium_line_right_iconx2

0xd61c,	// (0x00033a41) list_medium_line_t2

0xd61c,	// (0x00033a41) list_medium_line_t2_g2

0xd61c,	// (0x00033a41) list_medium_line_t2_g3

0xd61c,	// (0x00033a41) list_medium_line_t2_right_icon

0xd61c,	// (0x00033a41) list_medium_line_t2_right_iconx2

0xd61c,	// (0x00033a41) list_medium_line_t3

0xd61c,	// (0x00033a41) list_medium_line_t3_g2

0xd61c,	// (0x00033a41) list_medium_line_t3_g3

0xd61c,	// (0x00033a41) list_medium_line_t3_right_iconx2

0xd625,	// (0x00033a4a) list_medium_line_t4_g4

0xd62e,	// (0x00033a53) list_medium_line_x2

0xd62e,	// (0x00033a53) list_medium_line_x2_t2_g2

0xd62e,	// (0x00033a53) list_medium_line_x2_t2_g3

0xd62e,	// (0x00033a53) list_medium_line_x2_t2_g4

0xd62e,	// (0x00033a53) list_medium_line_x2_t3

0xd62e,	// (0x00033a53) list_medium_line_x2_t3_g2

0xd62e,	// (0x00033a53) list_medium_line_x2_t3_g3

0xd62e,	// (0x00033a53) list_medium_line_x2_t3_g4

0xd62e,	// (0x00033a53) list_medium_line_x2_t4_g2

0xd62e,	// (0x00033a53) list_medium_line_x2_t4_g4

0xd637,	// (0x00033a5c) list_medium_line_x3

0xd637,	// (0x00033a5c) list_medium_line_x3_t4

0xd637,	// (0x00033a5c) list_medium_line_x3_t4_g4

0xd625,	// (0x00033a4a) list_medium_line_x4_t4

0xd625,	// (0x00033a4a) list_medium_line_x4_t4_g7

0xd625,	// (0x00033a4a) list_medium_line_x4_t5

0xd640,	// (0x00033a65) list_single_fs_dyc_pane_ParamLimits

0xd640,	// (0x00033a65) list_single_fs_dyc_pane

0x3350,	// (0x00029775) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x4_t4_g7_g1

0xdb78,	// (0x00033f9d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb78,	// (0x00033f9d) list_medium_line_x4_t4_g7_g2

0xdb84,	// (0x00033fa9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb84,	// (0x00033fa9) list_medium_line_x4_t4_g7_g3

0xdb93,	// (0x00033fb8) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdb93,	// (0x00033fb8) list_medium_line_x4_t4_g7_g4

0xdb9f,	// (0x00033fc4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdb9f,	// (0x00033fc4) list_medium_line_x4_t4_g7_g5

0xdbae,	// (0x00033fd3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdbae,	// (0x00033fd3) list_medium_line_x4_t4_g7_g6

0xdbbd,	// (0x00033fe2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbbd,	// (0x00033fe2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0003600f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0003600f) list_medium_line_x4_t4_g7_g

0xdbc9,	// (0x00033fee) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdbc9,	// (0x00033fee) list_medium_line_x4_t4_g7_t1

0xdbde,	// (0x00034003) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdbde,	// (0x00034003) list_medium_line_x4_t4_g7_t2

0xdbf3,	// (0x00034018) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdbf3,	// (0x00034018) list_medium_line_x4_t4_g7_t3

0xdc08,	// (0x0003402d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc08,	// (0x0003402d) list_medium_line_x4_t4_g7_t4

0xdc1a,	// (0x0003403f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc1a,	// (0x0003403f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0003601e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0003601e) list_medium_line_x4_t4_g7_t

0xdc2c,	// (0x00034051) list_single_dyc_row_pane_ParamLimits

0xdc2c,	// (0x00034051) list_single_dyc_row_pane

0x9ca5,	// (0x000300ca) call5_gesture_pane_ParamLimits

0x9ca5,	// (0x000300ca) call5_gesture_pane

0x9cfb,	// (0x00030120) call5_windows_pane_ParamLimits

0x9cfb,	// (0x00030120) call5_windows_pane

0x9da1,	// (0x000301c6) call5_swipe_1_pane_cp_ParamLimits

0x9da1,	// (0x000301c6) call5_swipe_1_pane_cp

0x9dad,	// (0x000301d2) call5_swipe_2_pane_cp_ParamLimits

0x9dad,	// (0x000301d2) call5_swipe_2_pane_cp

0x4ff6,	// (0x0002b41b) call5_image_pane_cp

0x9db9,	// (0x000301de) popup_call5_audio_first_window_cp_ParamLimits

0x9db9,	// (0x000301de) popup_call5_audio_first_window_cp

0xe2b6,	// (0x000346db) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2b6,	// (0x000346db) call5_swipe_1_pane_g1_cp

0xe2f6,	// (0x0003471b) call5_swipe_1_pane_g2_cp

0xe2cf,	// (0x000346f4) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2cf,	// (0x000346f4) call5_swipe_1_pane_t1_cp

0xe2b6,	// (0x000346db) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2b6,	// (0x000346db) call5_swipe_2_pane_g1_cp

0xe2fe,	// (0x00034723) call5_swipe_2_pane_g2_cp

0xe306,	// (0x0003472b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe306,	// (0x0003472b) call5_swipe_2_pane_t1_cp

0x2017,	// (0x0002843c) main_sp_fs_email_pane

0xe31b,	// (0x00034740) main_sp_fs_listscroll_pane_te

0xe324,	// (0x00034749) popup_sp_fs_action_menu_pane_ParamLimits

0xe324,	// (0x00034749) popup_sp_fs_action_menu_pane

0xc18e,	// (0x000325b3) bg_sp_fs_ctrlbar_pane_g1

0xe364,	// (0x00034789) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36d,	// (0x00034792) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe376,	// (0x0003479b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc18e,	// (0x000325b3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x00036107) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf71,	// (0x00032396) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf71,	// (0x00032396) bg_sp_fs_ctrlbar_ddmenu_pane

0xe37f,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe37f,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe38b,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe38b,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00036110) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00036110) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe397,	// (0x000347bc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe397,	// (0x000347bc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3b1,	// (0x000347d6) list_medium_line_t2_right_icon_g1

0x9dc5,	// (0x000301ea) list_medium_line_t2_right_icon_t1

0x9dd5,	// (0x000301fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00036115) list_medium_line_t2_right_icon_t

0xbc86,	// (0x000320ab) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc86,	// (0x000320ab) bg_sp_fs_ctrlbar_pane

0x9e32,	// (0x00030257) main_sp_fs_ctrlbar_button_pane_cp01

0x9e3c,	// (0x00030261) main_sp_fs_ctrlbar_ddmenu_pane

0x3350,	// (0x00029775) main_sp_fs_ctrlbar_pane_g1

0xe3f1,	// (0x00034816) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0003611a) main_sp_fs_ctrlbar_pane_g

0xe3fd,	// (0x00034822) main_sp_fs_ctrlbar_pane_t1

0x9e46,	// (0x0003026b) main_sp_fs_ctrlbar_pane

0x9e6a,	// (0x0003028f) main_sp_fs_listscroll_pane_te_cp01

0x9e8a,	// (0x000302af) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e8a,	// (0x000302af) popup_sp_fs_action_menu_pane_cp01

0x2017,	// (0x0002843c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2017,	// (0x0002843c) bg_sp_fs_highlight_list_pane_cp01

0xe422,	// (0x00034847) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe422,	// (0x00034847) sp_fs_action_menu_list_gene_pane_g1

0xe431,	// (0x00034856) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe431,	// (0x00034856) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00036124) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00036124) sp_fs_action_menu_list_gene_pane_g

0xe43e,	// (0x00034863) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe43e,	// (0x00034863) sp_fs_action_menu_list_gene_pane_t1

0xe456,	// (0x0003487b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe456,	// (0x0003487b) sp_fs_action_menu_list_gene_pane

0xe473,	// (0x00034898) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe473,	// (0x00034898) popup_sp_fs_action_menu_bg_pane

0xe481,	// (0x000348a6) sp_fs_action_menu_list_pane_ParamLimits

0xe481,	// (0x000348a6) sp_fs_action_menu_list_pane

0xe49f,	// (0x000348c4) sp_fs_scroll_pane_cp01_ParamLimits

0xe49f,	// (0x000348c4) sp_fs_scroll_pane_cp01

0x9ea4,	// (0x000302c9) list_medium_line_plain_t2_t1

0x9eb4,	// (0x000302d9) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00036129) list_medium_line_plain_t2_t

0x9ec4,	// (0x000302e9) list_medium_line_plain_t3_t1

0x9ed4,	// (0x000302f9) list_medium_line_plain_t3_t2

0x9ee2,	// (0x00030307) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0003612e) list_medium_line_plain_t3_t

0x3350,	// (0x00029775) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t2_g2_g1

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0003568a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0003568a) list_medium_line_x2_t2_g2_g

0x480a,	// (0x0002ac2f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x480a,	// (0x0002ac2f) list_medium_line_x2_t2_g2_t1

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00036135) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00036135) list_medium_line_x2_t2_g2_t

0x3350,	// (0x00029775) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t4_g2_g1

0x3368,	// (0x0002978d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x0003568a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x0003568a) list_medium_line_x2_t4_g2_g

0x9ef0,	// (0x00030315) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9ef0,	// (0x00030315) list_medium_line_x2_t4_g2_t1

0x9f07,	// (0x0003032c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9f07,	// (0x0003032c) list_medium_line_x2_t4_g2_t2

0x9f1c,	// (0x00030341) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9f1c,	// (0x00030341) list_medium_line_x2_t4_g2_t3

0x339d,	// (0x000297c2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0003613a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0003613a) list_medium_line_x2_t4_g2_t

0xe4c5,	// (0x000348ea) list_medium_line_t3_right_iconx2_g1

0xe3b1,	// (0x000347d6) list_medium_line_t3_right_iconx2_g2

0x9f2e,	// (0x00030353) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00036143) list_medium_line_t3_right_iconx2_g

0x9f38,	// (0x0003035d) list_medium_line_t3_right_iconx2_t1

0x9f48,	// (0x0003036d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0003614a) list_medium_line_t3_right_iconx2_t

0x3350,	// (0x00029775) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x3_t4_g4_g1

0x335c,	// (0x00029781) list_medium_line_x3_t4_g4_g2_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x3_t4_g4_g2

0x3403,	// (0x00029828) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3403,	// (0x00029828) list_medium_line_x3_t4_g4_g3

0xe4cd,	// (0x000348f2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4cd,	// (0x000348f2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0003614f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0003614f) list_medium_line_x3_t4_g4_g

0x9f56,	// (0x0003037b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f56,	// (0x0003037b) list_medium_line_x3_t4_g4_t1

0x9f6d,	// (0x00030392) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f6d,	// (0x00030392) list_medium_line_x3_t4_g4_t2

0x481f,	// (0x0002ac44) list_medium_line_x3_t4_g4_t3_ParamLimits

0x481f,	// (0x0002ac44) list_medium_line_x3_t4_g4_t3

0xe4d9,	// (0x000348fe) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4d9,	// (0x000348fe) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00036158) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00036158) list_medium_line_x3_t4_g4_t

0x9f88,	// (0x000303ad) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f88,	// (0x000303ad) list_single_dyc_row_text_pane_t1

0x9fd1,	// (0x000303f6) list_single_dyc_row_text_pane_t2_ParamLimits

0x9fd1,	// (0x000303f6) list_single_dyc_row_text_pane_t2

0xe4f6,	// (0x0003491b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4f6,	// (0x0003491b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00036161) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00036161) list_single_dyc_row_text_pane_t

0xe508,	// (0x0003492d) list_single_dyc_row_pane_g1_ParamLimits

0xe508,	// (0x0003492d) list_single_dyc_row_pane_g1

0xe514,	// (0x00034939) list_single_dyc_row_pane_g2_ParamLimits

0xe514,	// (0x00034939) list_single_dyc_row_pane_g2

0xe520,	// (0x00034945) list_single_dyc_row_pane_g3_ParamLimits

0xe520,	// (0x00034945) list_single_dyc_row_pane_g3

0xe52c,	// (0x00034951) list_single_dyc_row_pane_g4_ParamLimits

0xe52c,	// (0x00034951) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00036168) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00036168) list_single_dyc_row_pane_g

0xe538,	// (0x0003495d) list_single_dyc_row_text_pane_ParamLimits

0xe538,	// (0x0003495d) list_single_dyc_row_text_pane

0x1da5,	// (0x000281ca) bg_sp_fs_scroll_pane

0xe557,	// (0x0003497c) thumb_sp_fs_scroll_pane

0xd24c,	// (0x00033671) list_medium_line_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_g1

0xe560,	// (0x00034985) list_medium_line_t1_ParamLimits

0xe560,	// (0x00034985) list_medium_line_t1

0x3350,	// (0x00029775) list_medium_line_x2_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_g1

0x335c,	// (0x00029781) list_medium_line_x2_g2_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00036171) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00036171) list_medium_line_x2_g

0xe575,	// (0x0003499a) list_medium_line_x2_t1_ParamLimits

0xe575,	// (0x0003499a) list_medium_line_x2_t1

0x3350,	// (0x00029775) list_medium_line_x3_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x3_g1

0x335c,	// (0x00029781) list_medium_line_x3_g2_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00036171) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00036171) list_medium_line_x3_g

0xe575,	// (0x0003499a) list_medium_line_x3_t1_ParamLimits

0xe575,	// (0x0003499a) list_medium_line_x3_t1

0xe58b,	// (0x000349b0) thumb_sp_fs_scroll_pane_g1

0xe594,	// (0x000349b9) thumb_sp_fs_scroll_pane_g2

0xe59d,	// (0x000349c2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00036176) thumb_sp_fs_scroll_pane_g

0xe58b,	// (0x000349b0) bg_sp_fs_scroll_pane_g1

0xe594,	// (0x000349b9) bg_sp_fs_scroll_pane_g2

0xe59d,	// (0x000349c2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00036176) bg_sp_fs_scroll_pane_g

0x3350,	// (0x00029775) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3350,	// (0x00029775) list_medium_line_x2_t3_g4_g1

0x33f7,	// (0x0002981c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x33f7,	// (0x0002981c) list_medium_line_x2_t3_g4_g2

0x335c,	// (0x00029781) list_medium_line_x2_t3_g4_g3_ParamLimits

0x335c,	// (0x00029781) list_medium_line_x2_t3_g4_g3

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3368,	// (0x0002978d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00035706) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00035706) list_medium_line_x2_t3_g4_g

0xa02b,	// (0x00030450) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa02b,	// (0x00030450) list_medium_line_x2_t3_g4_t1

0xa045,	// (0x0003046a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa045,	// (0x0003046a) list_medium_line_x2_t3_g4_t2

0x339d,	// (0x000297c2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x339d,	// (0x000297c2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0003617d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0003617d) list_medium_line_x2_t3_g4_t

0xd24c,	// (0x00033671) list_medium_line_g2_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_g2_g1

0xd258,	// (0x0003367d) list_medium_line_g2_g2_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00035e3f) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00035e3f) list_medium_line_g2_g

0xe5a6,	// (0x000349cb) list_medium_line_g2_t1_ParamLimits

0xe5a6,	// (0x000349cb) list_medium_line_g2_t1

0xd24c,	// (0x00033671) list_medium_line_t3_g2_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t3_g2_g1

0xd258,	// (0x0003367d) list_medium_line_t3_g2_g2_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00035e3f) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00035e3f) list_medium_line_t3_g2_g

0xa05e,	// (0x00030483) list_medium_line_t3_g2_t1_ParamLimits

0xa05e,	// (0x00030483) list_medium_line_t3_g2_t1

0xa078,	// (0x0003049d) list_medium_line_t3_g2_t2_ParamLimits

0xa078,	// (0x0003049d) list_medium_line_t3_g2_t2

0xa08d,	// (0x000304b2) list_medium_line_t3_g2_t3_ParamLimits

0xa08d,	// (0x000304b2) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00036184) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00036184) list_medium_line_t3_g2_t

0xe3b1,	// (0x000347d6) list_medium_line_right_icon_g1

0xe5bb,	// (0x000349e0) list_medium_line_right_icon_t1

0xd24c,	// (0x00033671) list_medium_line_t2_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t2_g1

0xa0a7,	// (0x000304cc) list_medium_line_t2_t1_ParamLimits

0xa0a7,	// (0x000304cc) list_medium_line_t2_t1

0xa0c1,	// (0x000304e6) list_medium_line_t2_t2_ParamLimits

0xa0c1,	// (0x000304e6) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0003618b) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0003618b) list_medium_line_t2_t

0xd24c,	// (0x00033671) list_medium_line_t3_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t3_g1

0xa0da,	// (0x000304ff) list_medium_line_t3_t1_ParamLimits

0xa0da,	// (0x000304ff) list_medium_line_t3_t1

0xa0f1,	// (0x00030516) list_medium_line_t3_t2_ParamLimits

0xa0f1,	// (0x00030516) list_medium_line_t3_t2

0xa106,	// (0x0003052b) list_medium_line_t3_t3_ParamLimits

0xa106,	// (0x0003052b) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00036190) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00036190) list_medium_line_t3_t

0xd24c,	// (0x00033671) list_medium_line_g3_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_g3_g1

0xe5c9,	// (0x000349ee) list_medium_line_g3_g2_ParamLimits

0xe5c9,	// (0x000349ee) list_medium_line_g3_g2

0xd258,	// (0x0003367d) list_medium_line_g3_g3_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00036197) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00036197) list_medium_line_g3_g

0xe5d5,	// (0x000349fa) list_medium_line_g3_t1_ParamLimits

0xe5d5,	// (0x000349fa) list_medium_line_g3_t1

0xd24c,	// (0x00033671) list_medium_line_t2_g3_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t2_g3_g1

0xe5c9,	// (0x000349ee) list_medium_line_t2_g3_g2_ParamLimits

0xe5c9,	// (0x000349ee) list_medium_line_t2_g3_g2

0xd258,	// (0x0003367d) list_medium_line_t2_g3_g3_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00036197) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00036197) list_medium_line_t2_g3_g

0xa118,	// (0x0003053d) list_medium_line_t2_g3_t1_ParamLimits

0xa118,	// (0x0003053d) list_medium_line_t2_g3_t1

0xa12f,	// (0x00030554) list_medium_line_t2_g3_t2_ParamLimits

0xa12f,	// (0x00030554) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0003619e) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0003619e) list_medium_line_t2_g3_t

0xd24c,	// (0x00033671) list_medium_line_t3_g3_g1_ParamLimits

0xd24c,	// (0x00033671) list_medium_line_t3_g3_g1

0xe5c9,	// (0x000349ee) list_medium_line_t3_g3_g2_ParamLimits

0xe5c9,	// (0x000349ee) list_medium_line_t3_g3_g2

0xd258,	// (0x0003367d) list_medium_line_t3_g3_g3_ParamLimits

0xd258,	// (0x0003367d) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00036197) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00036197) list_medium_line_t3_g3_g

0xa14a,	// (0x0003056f) list_medium_line_t3_g3_t1_ParamLimits

0xa14a,	// (0x0003056f) list_medium_line_t3_g3_t1

0xa15e,	// (0x00030583) list_medium_line_t3_g3_t2_ParamLimits

0xa15e,	// (0x00030583) list_medium_line_t3_g3_t2

0xa170,	// (0x00030595) list_medium_line_t3_g3_t3_ParamLimits

0xa170,	// (0x00030595) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000361a3) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000361a3) list_medium_line_t3_g3_t

0xe4c5,	// (0x000348ea) list_medium_line_right_iconx2_g1

0xe3b1,	// (0x000347d6) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000361aa) list_medium_line_right_iconx2_g

0xe5ea,	// (0x00034a0f) list_medium_line_right_iconx2_t1

0xe4c5,	// (0x000348ea) list_medium_line_t2_right_iconx2_g1

0xe3b1,	// (0x000347d6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000361aa) list_medium_line_t2_right_iconx2_g

0xa184,	// (0x000305a9) list_medium_line_t2_right_iconx2_t1

0xa194,	// (0x000305b9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000361af) list_medium_line_t2_right_iconx2_t

0xe5f8,	// (0x00034a1d) list_medium_line_x4_t4_t1

0xa1a6,	// (0x000305cb) list_medium_line_x4_t4_t2

0xa1b6,	// (0x000305db) list_medium_line_x4_t4_t3

0xa1c6,	// (0x000305eb) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000361b4) list_medium_line_x4_t4_t

0xa219,	// (0x0003063e) tport_appsw_pane_ParamLimits

0xa219,	// (0x0003063e) tport_appsw_pane

0xa22a,	// (0x0003064f) tport_contact_pane_ParamLimits

0xa22a,	// (0x0003064f) tport_contact_pane

0xa243,	// (0x00030668) tport_listscroll_pane_ParamLimits

0xa243,	// (0x00030668) tport_listscroll_pane

0xa25e,	// (0x00030683) cell_tport_appsw_pane_ParamLimits

0xa25e,	// (0x00030683) cell_tport_appsw_pane

0xcf1f,	// (0x00033344) tport_appsw_pane_g1_ParamLimits

0xcf1f,	// (0x00033344) tport_appsw_pane_g1

0xe606,	// (0x00034a2b) tport_contact_pane_g1

0xe60f,	// (0x00034a34) tport_contact_pane_t1

0xe61d,	// (0x00034a42) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000361bd) tport_contact_pane_t

0xe62b,	// (0x00034a50) list_tport_pane

0xe634,	// (0x00034a59) scroll_pane_cp_030

0xe645,	// (0x00034a6a) cell_tport_appsw_pane_g1

0xe655,	// (0x00034a7a) cell_tport_appsw_pane_t1

0x1da5,	// (0x000281ca) grid_highlight_pane_cp019

0xa29e,	// (0x000306c3) list_tport_double_graphic_pane_ParamLimits

0xa29e,	// (0x000306c3) list_tport_double_graphic_pane

0x2017,	// (0x0002843c) list_highlight_pane_cp023_ParamLimits

0x2017,	// (0x0002843c) list_highlight_pane_cp023

0xa2ab,	// (0x000306d0) list_tport_double_graphic_pane_g1_ParamLimits

0xa2ab,	// (0x000306d0) list_tport_double_graphic_pane_g1

0xa2b8,	// (0x000306dd) list_tport_double_graphic_pane_t1_ParamLimits

0xa2b8,	// (0x000306dd) list_tport_double_graphic_pane_t1

0xa2cd,	// (0x000306f2) list_tport_double_graphic_pane_t2_ParamLimits

0xa2cd,	// (0x000306f2) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000361c9) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000361c9) list_tport_double_graphic_pane_t

0x1da5,	// (0x000281ca) main_cale_note_pane

0x1a97,	// (0x00027ebc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1a97,	// (0x00027ebc) cell_vitu2_function_top_wide_pane_cp01

0x99e1,	// (0x0002fe06) wait_bar_pane_cp05_ParamLimits

0x1da5,	// (0x000281ca) listscroll_cmail_pane

0xe66b,	// (0x00034a90) list_cmail_pane

0xa2e9,	// (0x0003070e) list_cmail_body_pane

0xa2fe,	// (0x00030723) list_single_cmail_header_caption_pane

0xa317,	// (0x0003073c) list_single_cmail_header_detail_pane_ParamLimits

0xa317,	// (0x0003073c) list_single_cmail_header_detail_pane

0xa340,	// (0x00030765) list_single_cmail_header_caption_pane_t1

0xa350,	// (0x00030775) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa350,	// (0x00030775) list_single_cmail_header_detail_pane_g1

0xe68b,	// (0x00034ab0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe68b,	// (0x00034ab0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000361ce) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000361ce) list_single_cmail_header_detail_pane_g

0xe6a4,	// (0x00034ac9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6a4,	// (0x00034ac9) list_single_cmail_header_detail_pane_t1

0xe6d6,	// (0x00034afb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6d6,	// (0x00034afb) list_single_cmail_header_editor_pane_bg

0xe6e8,	// (0x00034b0d) list_cmail_body_pane_g1

0xe6f1,	// (0x00034b16) list_cmail_body_pane_t1

0xcf9b,	// (0x000333c0) list_single_cmail_header_editor_pane_bg_g1

0x3ab4,	// (0x00029ed9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfab,	// (0x000333d0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfa3,	// (0x000333c8) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd224,	// (0x00033649) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfcb,	// (0x000333f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfbb,	// (0x000333e0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfc3,	// (0x000333e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3a94,	// (0x00029eb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa38e,	// (0x000307b3) calenote_gesture_pane_ParamLimits

0xa38e,	// (0x000307b3) calenote_gesture_pane

0xa3ae,	// (0x000307d3) calenote_window_pane_ParamLimits

0xa3ae,	// (0x000307d3) calenote_window_pane

0xe6ff,	// (0x00034b24) popup_note_window_cp01

0xa3ca,	// (0x000307ef) calenote_swipe_1_pane_ParamLimits

0xa3ca,	// (0x000307ef) calenote_swipe_1_pane

0x9dad,	// (0x000301d2) calenote_swipe_2_pane_ParamLimits

0x9dad,	// (0x000301d2) calenote_swipe_2_pane

0xe2b6,	// (0x000346db) calenote_swipe_1_pane_g1_ParamLimits

0xe2b6,	// (0x000346db) calenote_swipe_1_pane_g1

0xe2c3,	// (0x000346e8) calenote_swipe_1_pane_g2_ParamLimits

0xe2c3,	// (0x000346e8) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x000360fd) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x000360fd) calenote_swipe_1_pane_g

0xe711,	// (0x00034b36) calenote_swipe_1_pane_t1_ParamLimits

0xe711,	// (0x00034b36) calenote_swipe_1_pane_t1

0xe2b6,	// (0x000346db) calenote_swipe_2_pane_g1_ParamLimits

0xe2b6,	// (0x000346db) calenote_swipe_2_pane_g1

0xe730,	// (0x00034b55) calenote_swipe_2_pane_g2_ParamLimits

0xe730,	// (0x00034b55) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x000361da) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x000361da) calenote_swipe_2_pane_g

0xe73c,	// (0x00034b61) calenote_swipe_2_pane_t1_ParamLimits

0xe73c,	// (0x00034b61) calenote_swipe_2_pane_t1

0x1da5,	// (0x000281ca) main_mup_navstr_pane

0x77dd,	// (0x0002dc02) main_mup3_pane_t7_ParamLimits

0x77dd,	// (0x0002dc02) main_mup3_pane_t7

0xcb06,	// (0x00032f2b) main_mp4_pane_g6_ParamLimits

0xcb06,	// (0x00032f2b) main_mp4_pane_g6

0xcd38,	// (0x0003315d) main_image3_pane_t4_ParamLimits

0xcd38,	// (0x0003315d) main_image3_pane_t4

0xa3df,	// (0x00030804) popup_navstr_preview_pane_ParamLimits

0xa3df,	// (0x00030804) popup_navstr_preview_pane

0xa3f3,	// (0x00030818) scroll_navstr_pane_ParamLimits

0xa3f3,	// (0x00030818) scroll_navstr_pane

0x1da5,	// (0x000281ca) bg_popup_preview_window_pane_cp04

0xe763,	// (0x00034b88) popup_navstr_preview_pane_t1

0xa407,	// (0x0003082c) scroll_navstr_pane_g1_ParamLimits

0xa407,	// (0x0003082c) scroll_navstr_pane_g1

0xa41b,	// (0x00030840) scroll_navstr_pane_t1_ParamLimits

0xa41b,	// (0x00030840) scroll_navstr_pane_t1

0xe708,	// (0x00034b2d) bg_button_pane_cp014

0xe708,	// (0x00034b2d) bg_button_pane_cp030

0xe21a,	// (0x0003463f) list_double_fisheye_pane_g4_ParamLimits

0xe21a,	// (0x0003463f) list_double_fisheye_pane_g4

0xe226,	// (0x0003464b) list_double_fisheye_pane_g5_ParamLimits

0xe226,	// (0x0003464b) list_double_fisheye_pane_g5

0xe673,	// (0x00034a98) sp_fs_scroll_pane_cp03

0x3350,	// (0x00029775) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3f1,	// (0x00034816) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0003611a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3fd,	// (0x00034822) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa2df,	// (0x00030704) sp_fs_scroll_pane_cp02

0x2c6d,	// (0x00029092) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2c6d,	// (0x00029092) popup_sp_fs_calendar_preview_list_single_pane

0x1da5,	// (0x000281ca) main_cam6_pano_pane

0x2017,	// (0x0002843c) main_mup3_pane_ParamLimits

0x1da5,	// (0x000281ca) main_phacti_pane

0x98b4,	// (0x0002fcd9) bg_button_pane_cp11

0x98ce,	// (0x0002fcf3) main_mobtv_info_pane_g2_ParamLimits

0x98ce,	// (0x0002fcf3) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0003607a) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0003607a) main_mobtv_info_pane_g

0x9aab,	// (0x0002fed0) sc_clock_pane_t5_ParamLimits

0x9aab,	// (0x0002fed0) sc_clock_pane_t5

0x9b36,	// (0x0002ff5b) main_radioblah_pane_g1_ParamLimits

0xe173,	// (0x00034598) main_radioblah_pane_t3_ParamLimits

0xe173,	// (0x00034598) main_radioblah_pane_t3

0xe18b,	// (0x000345b0) main_radioblah_pane_t4_ParamLimits

0xe18b,	// (0x000345b0) main_radioblah_pane_t4

0x9b5e,	// (0x0002ff83) main_radioblah_text_pane_ParamLimits

0x9b5e,	// (0x0002ff83) main_radioblah_text_pane

0x9b70,	// (0x0002ff95) main_radioblah_info_pane_g1_ParamLimits

0x9c0b,	// (0x00030030) main_radioblah_info_pane_t4_ParamLimits

0x9c0b,	// (0x00030030) main_radioblah_info_pane_t4

0x2017,	// (0x0002843c) main_sp_fs_calendar_pane

0xa431,	// (0x00030856) main_phacti_pane_g1

0xa439,	// (0x0003085e) phacti_note_pane_ParamLimits

0xa439,	// (0x0003085e) phacti_note_pane

0xe77a,	// (0x00034b9f) phacti_term_pane_ParamLimits

0xe77a,	// (0x00034b9f) phacti_term_pane

0xe78f,	// (0x00034bb4) phacti_note_pane_t1_ParamLimits

0xe78f,	// (0x00034bb4) phacti_note_pane_t1

0xe7a6,	// (0x00034bcb) phacti_term_pane_g1

0xe7ae,	// (0x00034bd3) phacti_term_pane_t1_ParamLimits

0xe7ae,	// (0x00034bd3) phacti_term_pane_t1

0xe7d8,	// (0x00034bfd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7e0,	// (0x00034c05) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x000361e4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7e8,	// (0x00034c0d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7e8,	// (0x00034c0d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7fe,	// (0x00034c23) aid_popup_sp_fs_bg_corner_pane

0xc18e,	// (0x000325b3) popup_sp_fs_calendar_preview_bg_pane_g1

0x1da5,	// (0x000281ca) popup_sp_fs_calendar_preview_bg_pane

0xe806,	// (0x00034c2b) popup_sp_fs_calendar_preview_list_pane

0x2017,	// (0x0002843c) bg_main_sp_fs_cale_pane_ParamLimits

0x2017,	// (0x0002843c) bg_main_sp_fs_cale_pane

0xe817,	// (0x00034c3c) listscroll_cale_mrui_pane_ParamLimits

0xe817,	// (0x00034c3c) listscroll_cale_mrui_pane

0xe82b,	// (0x00034c50) listscroll_sp_fs_schedule_track_pane

0xe834,	// (0x00034c59) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe834,	// (0x00034c59) main_sp_fs_ctrlbar_pane_cp01

0xe845,	// (0x00034c6a) main_sp_fs_ribbon_pane

0xe84d,	// (0x00034c72) popup_sp_fs_cale_preview_window

0xa494,	// (0x000308b9) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa494,	// (0x000308b9) list_single_sp_fs_schedule_track_pane

0x2017,	// (0x0002843c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2017,	// (0x0002843c) bg_sp_fs_highlight_list_pane_cp03

0xa4a9,	// (0x000308ce) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa4a9,	// (0x000308ce) list_single_sp_fs_schedule_track_pane_g1

0xa4b5,	// (0x000308da) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa4b5,	// (0x000308da) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x000361e9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x000361e9) list_single_sp_fs_schedule_track_pane_g

0xa4c1,	// (0x000308e6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4c1,	// (0x000308e6) list_single_sp_fs_schedule_track_pane_t1

0xa4db,	// (0x00030900) sp_fs_schedule_track_pane_ParamLimits

0xa4db,	// (0x00030900) sp_fs_schedule_track_pane

0xe85f,	// (0x00034c84) sp_fs_schedule_track_pane_g1

0xe867,	// (0x00034c8c) sp_fs_schedule_track_pane_g2

0xe86f,	// (0x00034c94) sp_fs_schedule_track_pane_g3

0xe877,	// (0x00034c9c) sp_fs_schedule_track_pane_g4

0xe87f,	// (0x00034ca4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x000361ee) sp_fs_schedule_track_pane_g

0xcf9b,	// (0x000333c0) bg_sp_fs_schedule_viewer_highlight_g1

0x3ab4,	// (0x00029ed9) bg_sp_fs_schedule_viewer_highlight_g2

0xcfa3,	// (0x000333c8) bg_sp_fs_schedule_viewer_highlight_g3

0xcfab,	// (0x000333d0) bg_sp_fs_schedule_viewer_highlight_g4

0xd224,	// (0x00033649) bg_sp_fs_schedule_viewer_highlight_g5

0xcfbb,	// (0x000333e0) bg_sp_fs_schedule_viewer_highlight_g6

0xcfc3,	// (0x000333e8) bg_sp_fs_schedule_viewer_highlight_g7

0xcfcb,	// (0x000333f0) bg_sp_fs_schedule_viewer_highlight_g8

0x3a94,	// (0x00029eb9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x000361f9) bg_sp_fs_schedule_viewer_highlight_g

0x1da5,	// (0x000281ca) bg_main_sp_fs_ribbon_pane

0xa4ec,	// (0x00030911) main_sp_fs_ribbon_pane_g1

0xe887,	// (0x00034cac) main_sp_fs_ribbon_pane_t1

0xa4f5,	// (0x0003091a) main_sp_fs_ribbon_pane_t2

0xe896,	// (0x00034cbb) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0003620c) main_sp_fs_ribbon_pane_t

0xe8a5,	// (0x00034cca) main_sp_fs_ribbon_scheduler_pane

0xe8ad,	// (0x00034cd2) bg_main_sp_fs_ribbon_pane_g1

0xe8b6,	// (0x00034cdb) bg_main_sp_fs_ribbon_pane_g2

0xe8bf,	// (0x00034ce4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00036213) bg_main_sp_fs_ribbon_pane_g

0xe8c7,	// (0x00034cec) main_sp_fs_ribbon_scheduler_pane_g1

0xe8d0,	// (0x00034cf5) main_sp_fs_ribbon_scheduler_pane_g2

0xe8d9,	// (0x00034cfe) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0003621a) main_sp_fs_ribbon_scheduler_pane_g

0xe8e2,	// (0x00034d07) list_cale_mrui_pane

0xa504,	// (0x00030929) sp_fs_scroll_pane_cp07_ParamLimits

0xa504,	// (0x00030929) sp_fs_scroll_pane_cp07

0xa518,	// (0x0003093d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa518,	// (0x0003093d) bg_sp_fs_schedule_viewer_highlight

0xe8eb,	// (0x00034d10) list_single_sp_fs_schedule_track_pane_cp01

0xe8f3,	// (0x00034d18) list_sp_fs_schedule_track_pane

0xe8fb,	// (0x00034d20) sp_fs_scroll_pane_cp06_ParamLimits

0xe8fb,	// (0x00034d20) sp_fs_scroll_pane_cp06

0xc18e,	// (0x000325b3) bgmain_sp_fs_calendar_pane_g1

0xa528,	// (0x0003094d) list_single_cale_mrui_pane_ParamLimits

0xa528,	// (0x0003094d) list_single_cale_mrui_pane

0xe90d,	// (0x00034d32) list_single_cale_mrui_row_pane_ParamLimits

0xe90d,	// (0x00034d32) list_single_cale_mrui_row_pane

0xe91a,	// (0x00034d3f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe91a,	// (0x00034d3f) list_single_cale_mrui_row_pane_g1

0xe95f,	// (0x00034d84) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe95f,	// (0x00034d84) list_single_cale_mrui_row_pane_t1

0xa54a,	// (0x0003096f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa54a,	// (0x0003096f) list_single_cale_mrui_row_pane_t2

0xe971,	// (0x00034d96) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe971,	// (0x00034d96) list_single_cale_mrui_row_pane_t3

0xe9a0,	// (0x00034dc5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9a0,	// (0x00034dc5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00036228) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00036228) list_single_cale_mrui_row_pane_t

0xa5b2,	// (0x000309d7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa5b2,	// (0x000309d7) list_single_cmail_header_editor_pane_bg_cp01

0xa5d8,	// (0x000309fd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa5d8,	// (0x000309fd) list_single_cmail_header_editor_pane_bg_cp02

0xa5f8,	// (0x00030a1d) main_radioblah_text_pane_t1_ParamLimits

0xa5f8,	// (0x00030a1d) main_radioblah_text_pane_t1

0xe9cf,	// (0x00034df4) cam6_indi_pane_cp01

0xe9d7,	// (0x00034dfc) cam6_mode_pane_cp01

0xe9df,	// (0x00034e04) cam6_pano_pane

0xe9e8,	// (0x00034e0d) cam6_zoom_pane_cp01

0xe9f0,	// (0x00034e15) cam6_pano_image_pane

0xe9fb,	// (0x00034e20) cam6_pano_pane_g1

0xded2,	// (0x000342f7) cam6_pano_pane_g2

0xea04,	// (0x00034e29) cam6_pano_pane_g3

0xea0d,	// (0x00034e32) cam6_pano_pane_g4

0xc769,	// (0x00032b8e) cam6_pano_pane_g5

0xea16,	// (0x00034e3b) cam6_pano_pane_g6

0xea20,	// (0x00034e45) cam6_pano_pane_g7

0xea28,	// (0x00034e4d) cam6_pano_pane_g8

0xea31,	// (0x00034e56) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00036231) cam6_pano_pane_g

0x1da5,	// (0x000281ca) main_browser_tag_pane

0xe75b,	// (0x00034b80) grid_navstr_albumart_pane

0xea3c,	// (0x00034e61) cell_navstr_albumart_pane_ParamLimits

0xea3c,	// (0x00034e61) cell_navstr_albumart_pane

0x55a1,	// (0x0002b9c6) cell_navstr_albumart_pane_g1

0xba9b,	// (0x00031ec0) cell_navstr_albumart_pane_g2

0xbaab,	// (0x00031ed0) cell_navstr_albumart_pane_g3

0xbaa3,	// (0x00031ec8) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x00036244) cell_navstr_albumart_pane_g

0xa613,	// (0x00030a38) bt_list_pane_ParamLimits

0xa613,	// (0x00030a38) bt_list_pane

0xa628,	// (0x00030a4d) bt_list_pane_t1

0xa637,	// (0x00030a5c) bt_list_pane_t2

0x0001,

0xfe28,	// (0x0003624d) bt_list_pane_t

0x1da5,	// (0x000281ca) main_cale_prevew_pane

0xa646,	// (0x00030a6b) popup_cale_preview_window_ParamLimits

0xa646,	// (0x00030a6b) popup_cale_preview_window

0x2017,	// (0x0002843c) bg_popup_preview_window_pane_cp05_ParamLimits

0x2017,	// (0x0002843c) bg_popup_preview_window_pane_cp05

0xea5e,	// (0x00034e83) list_cale_preview_pane_ParamLimits

0xea5e,	// (0x00034e83) list_cale_preview_pane

0xa65d,	// (0x00030a82) list_double_cale_preview_pane_ParamLimits

0xa65d,	// (0x00030a82) list_double_cale_preview_pane

0xa66f,	// (0x00030a94) list_single_cale_preview_pane_ParamLimits

0xa66f,	// (0x00030a94) list_single_cale_preview_pane

0xa683,	// (0x00030aa8) list_single_cale_preview_pane_g1

0xa68b,	// (0x00030ab0) list_single_cale_preview_pane_t1_ParamLimits

0xa68b,	// (0x00030ab0) list_single_cale_preview_pane_t1

0xa6a0,	// (0x00030ac5) list_double_cale_preview_pane_g1

0xa6a8,	// (0x00030acd) list_double_cale_preview_pane_t1_ParamLimits

0xa6a8,	// (0x00030acd) list_double_cale_preview_pane_t1

0xa6bd,	// (0x00030ae2) list_double_cale_preview_pane_t2_ParamLimits

0xa6bd,	// (0x00030ae2) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00036252) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00036252) list_double_cale_preview_pane_t

0x1da5,	// (0x000281ca) main_ezdial_pane

0x2017,	// (0x0002843c) main_sp_fs_email_pane_ParamLimits

0x9de7,	// (0x0003020c) cmail_ddmenu_btn01_pane_ParamLimits

0x9de7,	// (0x0003020c) cmail_ddmenu_btn01_pane

0x9dfa,	// (0x0003021f) cmail_ddmenu_btn02_pane_ParamLimits

0x9dfa,	// (0x0003021f) cmail_ddmenu_btn02_pane

0x9e1d,	// (0x00030242) cmail_ddmenu_btn03_pane_ParamLimits

0x9e1d,	// (0x00030242) cmail_ddmenu_btn03_pane

0x9e46,	// (0x0003026b) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e6a,	// (0x0003028f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2e9,	// (0x0003070e) list_cmail_body_pane_ParamLimits

0xe682,	// (0x00034aa7) bg_button_pane_cp12

0xe697,	// (0x00034abc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe697,	// (0x00034abc) list_single_cmail_header_detail_pane_g3

0xa368,	// (0x0003078d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa368,	// (0x0003078d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x000361d5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x000361d5) list_single_cmail_header_detail_pane_t

0xe7c3,	// (0x00034be8) phacti_term_pane_t2_ParamLimits

0xe7c3,	// (0x00034be8) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x000361df) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x000361df) phacti_term_pane_t

0xea6a,	// (0x00034e8f) aid_size_list_single_double

0xa6d5,	// (0x00030afa) popup_ezdial_listscroll_window

0xa6f1,	// (0x00030b16) popup_number_entry_window_cp01

0x4ff6,	// (0x0002b41b) bg_popup_call_pane_cp09

0xea76,	// (0x00034e9b) ezdial_list_pane

0xea7e,	// (0x00034ea3) scroll_pane_cp23

0xbc86,	// (0x000320ab) bg_button_pane_cp028_ParamLimits

0xbc86,	// (0x000320ab) bg_button_pane_cp028

0xa6ff,	// (0x00030b24) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6ff,	// (0x00030b24) cmail_ddmenu_btn01_pane_g1

0xa70e,	// (0x00030b33) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa70e,	// (0x00030b33) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x00036257) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x00036257) cmail_ddmenu_btn01_pane_g

0xea86,	// (0x00034eab) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea86,	// (0x00034eab) cmail_ddmenu_btn01_pane_t1

0xbc86,	// (0x000320ab) bg_button_pane_cp029_ParamLimits

0xbc86,	// (0x000320ab) bg_button_pane_cp029

0xa71e,	// (0x00030b43) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa71e,	// (0x00030b43) cmail_ddmenu_btn02_pane_g1

0xa739,	// (0x00030b5e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa739,	// (0x00030b5e) cmail_ddmenu_btn02_pane_t1

0x2017,	// (0x0002843c) bg_button_pane_cp031_ParamLimits

0x2017,	// (0x0002843c) bg_button_pane_cp031

0xa71e,	// (0x00030b43) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa71e,	// (0x00030b43) cmail_ddmenu_btn03_pane_g1

0xa739,	// (0x00030b5e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa739,	// (0x00030b5e) cmail_ddmenu_btn03_pane_t1

0x81c9,	// (0x0002e5ee) cell_dialer2_keypad_pane_t1_ParamLimits

0x81e3,	// (0x0002e608) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x81e3,	// (0x0002e608) cell_dialer2_keypad_pane_t1_copy1

0x9736,	// (0x0002fb5b) ncimui_group_button_pane

0x2017,	// (0x0002843c) main_sp_fs_calendar_pane_ParamLimits

0xa2fe,	// (0x00030723) list_single_cmail_header_caption_pane_ParamLimits

0xe80e,	// (0x00034c33) aid_recal_txt_sm_pane

0x1da5,	// (0x000281ca) mian_recal_day_pane

0xe84d,	// (0x00034c72) popup_sp_fs_cale_preview_window_ParamLimits

0x1da5,	// (0x000281ca) list_recal_day_pane

0xeabe,	// (0x00034ee3) list_single_recal_day_pane_ParamLimits

0xeabe,	// (0x00034ee3) list_single_recal_day_pane

0xead0,	// (0x00034ef5) list_single_recal_day_pane_g1_ParamLimits

0xead0,	// (0x00034ef5) list_single_recal_day_pane_g1

0xeadc,	// (0x00034f01) list_single_recal_day_pane_g2_ParamLimits

0xeadc,	// (0x00034f01) list_single_recal_day_pane_g2

0xeaec,	// (0x00034f11) list_single_recal_day_pane_g3_ParamLimits

0xeaec,	// (0x00034f11) list_single_recal_day_pane_g3

0xa760,	// (0x00030b85) list_single_recal_day_pane_g4_ParamLimits

0xa760,	// (0x00030b85) list_single_recal_day_pane_g4

0xeaf8,	// (0x00034f1d) list_single_recal_day_pane_g5_ParamLimits

0xeaf8,	// (0x00034f1d) list_single_recal_day_pane_g5

0xeb08,	// (0x00034f2d) list_single_recal_day_pane_g6_ParamLimits

0xeb08,	// (0x00034f2d) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x00036266) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x00036266) list_single_recal_day_pane_g

0xeb1f,	// (0x00034f44) list_single_recal_day_pane_t1

0xeb31,	// (0x00034f56) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00036271) list_single_recal_day_pane_t

0xa780,	// (0x00030ba5) ncimui_query_button_pane_ParamLimits

0xa780,	// (0x00030ba5) ncimui_query_button_pane

0xa790,	// (0x00030bb5) ncimui_query_button_pane_t1_ParamLimits

0xa790,	// (0x00030bb5) ncimui_query_button_pane_t1

0xeb46,	// (0x00034f6b) ncimui_query_button_pane_t2_ParamLimits

0xeb46,	// (0x00034f6b) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00036276) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00036276) ncimui_query_button_pane_t

0xa7a3,	// (0x00030bc8) query_button_pane_ParamLimits

0xa7a3,	// (0x00030bc8) query_button_pane

0x1da5,	// (0x000281ca) bg_button_pane_cp0028

0xeb59,	// (0x00034f7e) query_button_pane_t1

0x68f0,	// (0x0002cd15) main_tport_pane_ParamLimits

0xa1d6,	// (0x000305fb) bg_popup_window_pane_cp01_ParamLimits

0xa1d6,	// (0x000305fb) bg_popup_window_pane_cp01

0xa1f0,	// (0x00030615) heading_pane_cp08_ParamLimits

0xa1f0,	// (0x00030615) heading_pane_cp08

0xa204,	// (0x00030629) heading_pane_cp07_ParamLimits

0xa204,	// (0x00030629) heading_pane_cp07

0xe645,	// (0x00034a6a) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000361c2) cell_tport_appsw_pane_g

0x5599,	// (0x0002b9be) input_candi_list_open_g1

0x459c,	// (0x0002a9c1) list_cale_time_pane_g6_ParamLimits

0x459c,	// (0x0002a9c1) list_cale_time_pane_g6

0x71de,	// (0x0002d603) aid_size_touch_calib_1_ParamLimits

0x71de,	// (0x0002d603) aid_size_touch_calib_1

0x71ea,	// (0x0002d60f) aid_size_touch_calib_2_ParamLimits

0x71ea,	// (0x0002d60f) aid_size_touch_calib_2

0x7200,	// (0x0002d625) aid_size_touch_calib_3_ParamLimits

0x7200,	// (0x0002d625) aid_size_touch_calib_3

0x721e,	// (0x0002d643) aid_size_touch_calib_4_ParamLimits

0x721e,	// (0x0002d643) aid_size_touch_calib_4

0x7234,	// (0x0002d659) main_touch_calib_button_group_pane_ParamLimits

0x7234,	// (0x0002d659) main_touch_calib_button_group_pane

0x724c,	// (0x0002d671) main_touch_calib_pane_g1_ParamLimits

0x7258,	// (0x0002d67d) main_touch_calib_pane_g2_ParamLimits

0x7264,	// (0x0002d689) main_touch_calib_pane_g3_ParamLimits

0x7270,	// (0x0002d695) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00035b95) main_touch_calib_pane_g_ParamLimits

0x727c,	// (0x0002d6a1) main_touch_calib_pane_t1_ParamLimits

0x7296,	// (0x0002d6bb) main_touch_calib_pane_t2_ParamLimits

0x72b0,	// (0x0002d6d5) main_touch_calib_pane_t3_ParamLimits

0x72c4,	// (0x0002d6e9) main_touch_calib_pane_t4_ParamLimits

0x72d8,	// (0x0002d6fd) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00035b9e) main_touch_calib_pane_t_ParamLimits

0xc539,	// (0x0003295e) list_single_fp_cale_pane_g3_ParamLimits

0xc539,	// (0x0003295e) list_single_fp_cale_pane_g3

0xcf83,	// (0x000333a8) bg_button_pane_cp012_ParamLimits

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp03_ParamLimits

0x1c95,	// (0x000280ba) cell_vitu2_function_top_pane_g1_ParamLimits

0xcf83,	// (0x000333a8) bg_vkb2_func_pane_cp04_ParamLimits

0x96d6,	// (0x0002fafb) main_ncimui_button_group_pane_ParamLimits

0x96d6,	// (0x0002fafb) main_ncimui_button_group_pane

0x9724,	// (0x0002fb49) main_ncimui_pane_t3_ParamLimits

0x9724,	// (0x0002fb49) main_ncimui_pane_t3

0xe771,	// (0x00034b96) phacti_button_group_pane

0xea6a,	// (0x00034e8f) aid_size_list_single_double_ParamLimits

0xa6d5,	// (0x00030afa) popup_ezdial_listscroll_window_ParamLimits

0xa6f1,	// (0x00030b16) popup_number_entry_window_cp01_ParamLimits

0xa7b6,	// (0x00030bdb) phacti_button_pane_ParamLimits

0xa7b6,	// (0x00030bdb) phacti_button_pane

0x1da5,	// (0x000281ca) bg_button_pane_cp14

0xeb67,	// (0x00034f8c) phacti_button_pane_t1

0xa7c7,	// (0x00030bec) main_touch_calib_button_pane_ParamLimits

0xa7c7,	// (0x00030bec) main_touch_calib_button_pane

0x2a37,	// (0x00028e5c) bg_button_pane_cp18_ParamLimits

0x2a37,	// (0x00028e5c) bg_button_pane_cp18

0xeb75,	// (0x00034f9a) main_touch_calib_button_pane_t1_ParamLimits

0xeb75,	// (0x00034f9a) main_touch_calib_button_pane_t1

0xeb8b,	// (0x00034fb0) main_touch_calib_button_pane_t2_ParamLimits

0xeb8b,	// (0x00034fb0) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0003627b) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0003627b) main_touch_calib_button_pane_t

0x1da5,	// (0x000281ca) cell_ncimui_button_pane

0x1da5,	// (0x000281ca) bg_button_pane_cp032

0xeba9,	// (0x00034fce) cell_ncimui_button_pane_t1

0xcd18,	// (0x0003313d) image3_infobar_pane_ParamLimits

0xcd18,	// (0x0003313d) image3_infobar_pane

0x9ad7,	// (0x0002fefc) fs_bigclock_status_pane_ParamLimits

0x9ad7,	// (0x0002fefc) fs_bigclock_status_pane

0x9ae4,	// (0x0002ff09) main_fs_bigclock_clock_pane_ParamLimits

0x9ae4,	// (0x0002ff09) main_fs_bigclock_clock_pane

0x9af8,	// (0x0002ff1d) main_fs_bigclock_indi_pane_ParamLimits

0x9af8,	// (0x0002ff1d) main_fs_bigclock_indi_pane

0x9b10,	// (0x0002ff35) main_fs_bigclock_swipe_pane_ParamLimits

0x9b10,	// (0x0002ff35) main_fs_bigclock_swipe_pane

0x1da5,	// (0x000281ca) main_fs_clock_dumped_data

0xdfdf,	// (0x00034404) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfdf,	// (0x00034404) list_single_fs_bigclock_indicator_pane_g1

0xe008,	// (0x0003442d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe008,	// (0x0003442d) list_single_fs_bigclock_indicator_pane_g2

0xe022,	// (0x00034447) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe022,	// (0x00034447) list_single_fs_bigclock_indicator_pane_g3

0xe03c,	// (0x00034461) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe03c,	// (0x00034461) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x000360ae) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x000360ae) list_single_fs_bigclock_indicator_pane_g

0xe065,	// (0x0003448a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe065,	// (0x0003448a) list_single_fs_bigclock_indicator_pane_t1

0xe08d,	// (0x000344b2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe08d,	// (0x000344b2) list_single_fs_bigclock_indicator_pane_t2

0xe0b5,	// (0x000344da) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0b5,	// (0x000344da) list_single_fs_bigclock_indicator_pane_t3

0xe0dd,	// (0x00034502) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0dd,	// (0x00034502) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x000360b9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x000360b9) list_single_fs_bigclock_indicator_pane_t

0xebb7,	// (0x00034fdc) image3_infobar_fav_pane_ParamLimits

0xebb7,	// (0x00034fdc) image3_infobar_fav_pane

0xebc7,	// (0x00034fec) image3_infobar_loc_pane_ParamLimits

0xebc7,	// (0x00034fec) image3_infobar_loc_pane

0xebdb,	// (0x00035000) image3_infobar_time_pane_ParamLimits

0xebdb,	// (0x00035000) image3_infobar_time_pane

0xc18e,	// (0x000325b3) image3_infobar_time_pane_g1

0xebeb,	// (0x00035010) image3_infobar_time_pane_t1

0xc18e,	// (0x000325b3) image3_infobar_loc_pane_g1

0xebf9,	// (0x0003501e) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00036280) image3_infobar_loc_pane_g

0xec01,	// (0x00035026) image3_infobar_loc_pane_t1

0xc18e,	// (0x000325b3) image3_infobar_fav_pane_g1

0xec0f,	// (0x00035034) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00036285) image3_infobar_fav_pane_g

0xec17,	// (0x0003503c) fs_bigclock_status_battery_pane

0xec20,	// (0x00035045) fs_bigclock_status_signal_pane

0xec29,	// (0x0003504e) fs_bigclock_status_title_pane

0xec32,	// (0x00035057) fs_bigclock_status_signal_pane_g1

0xec3b,	// (0x00035060) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0003628a) fs_bigclock_status_signal_pane_g

0xec43,	// (0x00035068) fs_bigclock_status_battery_pane_g1

0xec4c,	// (0x00035071) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0003628f) fs_bigclock_status_battery_pane_g

0xec54,	// (0x00035079) fs_bigclock_status_title_pane_t1

0xc18e,	// (0x000325b3) main_fs_bigclock_clock_pane_g1

0xec62,	// (0x00035087) main_fs_bigclock_clock_pane_g2

0xec62,	// (0x00035087) main_fs_bigclock_clock_pane_g3

0xec62,	// (0x00035087) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00036294) main_fs_bigclock_clock_pane_g

0xec6a,	// (0x0003508f) main_fs_bigclock_clock_pane_t1

0xec78,	// (0x0003509d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0003629d) main_fs_bigclock_clock_pane_t

0xec87,	// (0x000350ac) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec87,	// (0x000350ac) list_single_fs_bigclock_indicator_pane

0xa7dc,	// (0x00030c01) list_single_fs_bigclock_pane_ParamLimits

0xa7dc,	// (0x00030c01) list_single_fs_bigclock_pane

0xeca1,	// (0x000350c6) main_fs_bigclock_indicator_pane_t1

0xecb0,	// (0x000350d5) list_single_fs_bigclock_pane_g1

0xecb8,	// (0x000350dd) list_single_fs_bigclock_pane_t1

0xc18e,	// (0x000325b3) main_fs_bigclock_swipe_pane_g1

0xecfb,	// (0x00035120) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000362ae) main_fs_bigclock_swipe_pane_g

0xed03,	// (0x00035128) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed03,	// (0x00035128) main_fs_bigclock_swipe_pane_t1

0x4957,	// (0x0002ad7c) call_type_pane_ParamLimits

0x1da5,	// (0x000281ca) main_btmg_pane

0xe946,	// (0x00034d6b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe946,	// (0x00034d6b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00036221) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00036221) list_single_cale_mrui_row_pane_g

0xeaa5,	// (0x00034eca) list_recal_vselct_arw_lo_pane

0xeaad,	// (0x00034ed2) list_recal_vselct_arw_up_pane

0xeab5,	// (0x00034eda) list_recal_vselct_pane

0xed20,	// (0x00035145) btmg_button_pane

0xa842,	// (0x00030c67) main_btmg_pane_g1

0x1da5,	// (0x000281ca) bg_button_pane_cp044

0xed2a,	// (0x0003514f) btmg_button_pane_t1

0xbc7e,	// (0x000320a3) aid_listscroll_gen

0x2017,	// (0x0002843c) main_cntbar_detail_pane

0xe663,	// (0x00034a88) list_cmail_folder_pane

0xe673,	// (0x00034a98) sp_fs_scroll_pane_cp03_ParamLimits

0xa2fe,	// (0x00030723) list_single_fs_dyc_pane_cp01_ParamLimits

0xa2fe,	// (0x00030723) list_single_fs_dyc_pane_cp01

0xed38,	// (0x0003515d) aid_size_cmail_indent

0xed41,	// (0x00035166) list_single_dyc_row_pane_cp01

0xa878,	// (0x00030c9d) cntbar_detail_list_pane_ParamLimits

0xa878,	// (0x00030c9d) cntbar_detail_list_pane

0xa8c4,	// (0x00030ce9) main_cntbar_detail_cont_pane_ParamLimits

0xa8c4,	// (0x00030ce9) main_cntbar_detail_cont_pane

0x476e,	// (0x0002ab93) scroll_pane_cp032_ParamLimits

0x476e,	// (0x0002ab93) scroll_pane_cp032

0xa8d8,	// (0x00030cfd) cntbar_detail_list_event_pane_ParamLimits

0xa8d8,	// (0x00030cfd) cntbar_detail_list_event_pane

0xa888,	// (0x00030cad) cntbar_detail_list_shct_pane

0x3b0a,	// (0x00029f2f) aid_list_gen

0xed4a,	// (0x0003516f) aid_scroll

0xed53,	// (0x00035178) aid_size_touch_scroll_bar

0xed5c,	// (0x00035181) aid_list_double

0xed65,	// (0x0003518a) aid_list_single

0xed6e,	// (0x00035193) aid_list_single_lg

0xed77,	// (0x0003519c) aid_list_z_g_a_sm

0xed7f,	// (0x000351a4) aid_list_z_g_d

0xed87,	// (0x000351ac) aid_txt_z_prm

0xa8e8,	// (0x00030d0d) aid_txt_z_prm_cp01

0xa8f6,	// (0x00030d1b) aid_txt_z_sec

0xa904,	// (0x00030d29) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa904,	// (0x00030d29) main_cntbar_detail_cont_pane_g1

0xa918,	// (0x00030d3d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa918,	// (0x00030d3d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000362b3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000362b3) main_cntbar_detail_cont_pane_g

0xed95,	// (0x000351ba) main_cntbar_detail_cont_pane_t1

0xeda3,	// (0x000351c8) main_cntbar_detail_cont_pane_t2

0xedb1,	// (0x000351d6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000362b8) main_cntbar_detail_cont_pane_t

0xa928,	// (0x00030d4d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa928,	// (0x00030d4d) cell_cntbar_detail_list_shct_pane

0xedbf,	// (0x000351e4) cntbar_detail_list_shct_pane_g1

0xedc8,	// (0x000351ed) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000362bf) cntbar_detail_list_shct_pane_g

0xa93c,	// (0x00030d61) cntbar_detail_list_event_pane_g1_ParamLimits

0xa93c,	// (0x00030d61) cntbar_detail_list_event_pane_g1

0xa948,	// (0x00030d6d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa948,	// (0x00030d6d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000362c4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000362c4) cntbar_detail_list_event_pane_g

0xa9b4,	// (0x00030dd9) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9b4,	// (0x00030dd9) cntbar_detail_list_event_pane_t1

0xa9c9,	// (0x00030dee) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9c9,	// (0x00030dee) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x000362d1) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x000362d1) cntbar_detail_list_event_pane_t

0xc18e,	// (0x000325b3) cell_cntbar_detail_list_shct_pane_g1

0x4f74,	// (0x0002b399) navi_pane_mv_g3

0x2017,	// (0x0002843c) main_cntbar_detail_pane_ParamLimits

0x1da5,	// (0x000281ca) main_notif_wgt_pane

0xcaa0,	// (0x00032ec5) aid_tch_main_mp4_pane_g4

0xcca2,	// (0x000330c7) popup_slider_window_cp02

0xea9b,	// (0x00034ec0) list_recal_day_event_pane

0xa84c,	// (0x00030c71) cntbar_detail_btn_pane_ParamLimits

0xa84c,	// (0x00030c71) cntbar_detail_btn_pane

0xa862,	// (0x00030c87) cntbar_detail_btn_pane_cp01_ParamLimits

0xa862,	// (0x00030c87) cntbar_detail_btn_pane_cp01

0xa888,	// (0x00030cad) cntbar_detail_list_shct_pane_ParamLimits

0xa898,	// (0x00030cbd) cntbar_detail_pane_g1_ParamLimits

0xa898,	// (0x00030cbd) cntbar_detail_pane_g1

0xa8a8,	// (0x00030ccd) cntbar_detail_pane_t1_ParamLimits

0xa8a8,	// (0x00030ccd) cntbar_detail_pane_t1

0xa954,	// (0x00030d79) cntbar_detail_list_event_pane_g3_ParamLimits

0xa954,	// (0x00030d79) cntbar_detail_list_event_pane_g3

0xa96c,	// (0x00030d91) cntbar_detail_list_event_pane_g4_ParamLimits

0xa96c,	// (0x00030d91) cntbar_detail_list_event_pane_g4

0xa984,	// (0x00030da9) cntbar_detail_list_event_pane_g5_ParamLimits

0xa984,	// (0x00030da9) cntbar_detail_list_event_pane_g5

0xa99c,	// (0x00030dc1) cntbar_detail_list_event_pane_g6_ParamLimits

0xa99c,	// (0x00030dc1) cntbar_detail_list_event_pane_g6

0xa9de,	// (0x00030e03) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9de,	// (0x00030e03) cntbar_detail_list_event_pane_t3

0xa9f0,	// (0x00030e15) popup_notif_wgt_window_ParamLimits

0xa9f0,	// (0x00030e15) popup_notif_wgt_window

0xaa09,	// (0x00030e2e) popup_submenu_window_cp01_ParamLimits

0xaa09,	// (0x00030e2e) popup_submenu_window_cp01

0x4ff6,	// (0x0002b41b) bg_popup_window_pane_cp10

0xedd1,	// (0x000351f6) listscroll_notif_wgt_pane

0xeddb,	// (0x00035200) list_notif_wgt_window

0xede4,	// (0x00035209) scroll_pane_cp033

0xeded,	// (0x00035212) list_notif_wgt_row_pane_ParamLimits

0xeded,	// (0x00035212) list_notif_wgt_row_pane

0xee01,	// (0x00035226) aid_size_list_notif_wgt_del

0xee0a,	// (0x0003522f) list_notif_wgt_row_pane_g1

0xee12,	// (0x00035237) list_notif_wgt_row_pane_g2

0xee1a,	// (0x0003523f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x000362d8) list_notif_wgt_row_pane_g

0xee23,	// (0x00035248) list_notif_wgt_row_pane_t1

0xee31,	// (0x00035256) list_notif_wgt_row_pane_t2

0xee3f,	// (0x00035264) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x000362df) list_notif_wgt_row_pane_t

0xd27e,	// (0x000336a3) list_recal_day_event_pane_g1

0xee4d,	// (0x00035272) list_recal_day_event_pane_t1

0x1da5,	// (0x000281ca) bg_button_pane_cp045

0xee5c,	// (0x00035281) cntbar_detail_btn_pane_t1

0xbc86,	// (0x000320ab) main_callh_pane_ParamLimits

0xbc86,	// (0x000320ab) main_callh_pane

0x1da5,	// (0x000281ca) main_coverflow0_pane

0x1da5,	// (0x000281ca) main_wgtman_pane

0x9b1e,	// (0x0002ff43) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b1e,	// (0x0002ff43) main_fs_bigclock_unlock_btn_pane

0xe63d,	// (0x00034a62) bg_button_pane_cp16

0xe64d,	// (0x00034a72) cell_tport_appsw_pane_g3

0xaa1b,	// (0x00030e40) cf0_flow_pane_ParamLimits

0xaa1b,	// (0x00030e40) cf0_flow_pane

0xee6a,	// (0x0003528f) listscroll_cf0_pane

0xee73,	// (0x00035298) main_cf0_pane_g1

0xaa30,	// (0x00030e55) main_cf0_pane_t1_ParamLimits

0xaa30,	// (0x00030e55) main_cf0_pane_t1

0xaa47,	// (0x00030e6c) main_cf0_pane_t2_ParamLimits

0xaa47,	// (0x00030e6c) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x000362e6) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x000362e6) main_cf0_pane_t

0xee7d,	// (0x000352a2) scroll_pane_cp11

0xaa5e,	// (0x00030e83) cf0_flow_pane_g1

0xaa66,	// (0x00030e8b) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x000362eb) cf0_flow_pane_g

0xaa6e,	// (0x00030e93) cf0_flow_pane_t1

0x1da5,	// (0x000281ca) main_call6_pane

0x1da5,	// (0x000281ca) main_calllock_pane

0xaa7c,	// (0x00030ea1) call6_btn_grp_pane_ParamLimits

0xaa7c,	// (0x00030ea1) call6_btn_grp_pane

0xaa96,	// (0x00030ebb) call6_pane_g1_ParamLimits

0xaa96,	// (0x00030ebb) call6_pane_g1

0xaaab,	// (0x00030ed0) popup_call6_1st_window_ParamLimits

0xaaab,	// (0x00030ed0) popup_call6_1st_window

0xaabc,	// (0x00030ee1) popup_call6_2nd_window_ParamLimits

0xaabc,	// (0x00030ee1) popup_call6_2nd_window

0xaacd,	// (0x00030ef2) cell_call6_btn_pane_ParamLimits

0xaacd,	// (0x00030ef2) cell_call6_btn_pane

0x4ff6,	// (0x0002b41b) bg_popup_call2_in_pane_cp03

0xee88,	// (0x000352ad) popup_call6_1st_window_g1

0xee90,	// (0x000352b5) popup_call6_1st_window_g2

0xee98,	// (0x000352bd) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x000362f0) popup_call6_1st_window_g

0xeea0,	// (0x000352c5) popup_call6_1st_window_t1

0xeeaf,	// (0x000352d4) popup_call6_1st_window_t2

0xeebf,	// (0x000352e4) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x000362f7) popup_call6_1st_window_t

0x4ff6,	// (0x0002b41b) bg_popup_call2_in_pane_cp04

0xee88,	// (0x000352ad) popup_call6_2nd_window_g1

0xee90,	// (0x000352b5) popup_call6_2nd_window_g2

0xee98,	// (0x000352bd) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x000362f0) popup_call6_2nd_window_g

0xeea0,	// (0x000352c5) popup_call6_2nd_window_t1

0x1da5,	// (0x000281ca) bg_button_pane_cp15

0xeecf,	// (0x000352f4) cell_call6_btn_pane_g1

0xeed8,	// (0x000352fd) cell_call6_btn_pane_t1

0xaae1,	// (0x00030f06) listscroll_wgtman_pane_ParamLimits

0xaae1,	// (0x00030f06) listscroll_wgtman_pane

0xab04,	// (0x00030f29) wgtman_btn_pane_ParamLimits

0xab04,	// (0x00030f29) wgtman_btn_pane

0x4ba7,	// (0x0002afcc) aid_scroll_copy1

0xeee7,	// (0x0003530c) list_wgtman_pane

0xab47,	// (0x00030f6c) wgtman_btn_pane_g1_ParamLimits

0xab47,	// (0x00030f6c) wgtman_btn_pane_g1

0xab73,	// (0x00030f98) wgtman_btn_pane_t1_ParamLimits

0xab73,	// (0x00030f98) wgtman_btn_pane_t1

0xeef1,	// (0x00035316) wgtman_btn_pane_t2_ParamLimits

0xeef1,	// (0x00035316) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x000362fe) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x000362fe) wgtman_btn_pane_t

0xabb0,	// (0x00030fd5) listrow_wgtman_pane_ParamLimits

0xabb0,	// (0x00030fd5) listrow_wgtman_pane

0xabc3,	// (0x00030fe8) listrow_wgtman_pane_g1

0xabcc,	// (0x00030ff1) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00036303) listrow_wgtman_pane_g

0xabd6,	// (0x00030ffb) listrow_wgtman_pane_t1

0xabe4,	// (0x00031009) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00036308) listrow_wgtman_pane_t

0xabf2,	// (0x00031017) wait_bar_pane_cp09

0xef08,	// (0x0003532d) main_calllock_btn_pane

0xef12,	// (0x00035337) main_calllock_pane_g1

0x1da5,	// (0x000281ca) bg_button_pane_cp17

0xef1d,	// (0x00035342) main_calllock_btn_pane_g1

0xef26,	// (0x0003534b) main_calllock_btn_pane_t1

0x1da5,	// (0x000281ca) main_dialer3_pane

0x1da5,	// (0x000281ca) main_fmrd2_pane

0xc18e,	// (0x000325b3) main_fs_bigclock_unlock_btn_pane_g1

0xef3d,	// (0x00035362) main_fs_bigclock_unlock_btn_pane_t1

0xabfa,	// (0x0003101f) area_fmrd2_info_pane_ParamLimits

0xabfa,	// (0x0003101f) area_fmrd2_info_pane

0xac0b,	// (0x00031030) area_fmrd2_visual_pane_ParamLimits

0xac0b,	// (0x00031030) area_fmrd2_visual_pane

0xac19,	// (0x0003103e) fmrd2_indi_pane_ParamLimits

0xac19,	// (0x0003103e) fmrd2_indi_pane

0xac26,	// (0x0003104b) area_fmrd2_visual_pane_g1

0xac2e,	// (0x00031053) area_fmrd2_visual_pane_t1

0xac3e,	// (0x00031063) area_fmrd2_visual_pane_t2

0xac4e,	// (0x00031073) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00036312) area_fmrd2_visual_pane_t

0xac5e,	// (0x00031083) area_fmrd2_info_pane_g1

0xac66,	// (0x0003108b) area_fmrd2_info_pane_t1

0xac76,	// (0x0003109b) area_fmrd2_info_pane_t2

0xac86,	// (0x000310ab) area_fmrd2_info_pane_t3

0xac96,	// (0x000310bb) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00036319) area_fmrd2_info_pane_t

0xaca4,	// (0x000310c9) fmrd2_indi_pane_t1

0xacb4,	// (0x000310d9) fmrd2_indi_pane_t2

0xacc4,	// (0x000310e9) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00036322) fmrd2_indi_pane_t

0xe04b,	// (0x00034470) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe04b,	// (0x00034470) list_single_fs_bigclock_indicator_pane_g5

0xe0f2,	// (0x00034517) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0f2,	// (0x00034517) list_single_fs_bigclock_indicator_pane_t5

0xa44d,	// (0x00030872) aid_cell_bcale_month_pane_ParamLimits

0xa44d,	// (0x00030872) aid_cell_bcale_month_pane

0xa45f,	// (0x00030884) bcale_month_pane_ParamLimits

0xa45f,	// (0x00030884) bcale_month_pane

0xa479,	// (0x0003089e) bcale_preview_pane_ParamLimits

0xa479,	// (0x0003089e) bcale_preview_pane

0xecb8,	// (0x000350dd) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd7,	// (0x000350fc) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd7,	// (0x000350fc) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000362a9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000362a9) list_single_fs_bigclock_pane_t

0xef35,	// (0x0003535a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0003630d) main_fs_bigclock_unlock_btn_pane_g

0xacd4,	// (0x000310f9) aid_dia3_key_size_ParamLimits

0xacd4,	// (0x000310f9) aid_dia3_key_size

0xace3,	// (0x00031108) aid_dia3_listrow_size_ParamLimits

0xace3,	// (0x00031108) aid_dia3_listrow_size

0xacf8,	// (0x0003111d) dia3_keypad_fun_pane_ParamLimits

0xacf8,	// (0x0003111d) dia3_keypad_fun_pane

0xad14,	// (0x00031139) dia3_keypad_num_pane_ParamLimits

0xad14,	// (0x00031139) dia3_keypad_num_pane

0xad2f,	// (0x00031154) dia3_listscroll_pane_ParamLimits

0xad2f,	// (0x00031154) dia3_listscroll_pane

0xad42,	// (0x00031167) dia3_numentry_pane_ParamLimits

0xad42,	// (0x00031167) dia3_numentry_pane

0xef4b,	// (0x00035370) dia3_list_pane

0xef56,	// (0x0003537b) scroll_pane_cp12

0x1da5,	// (0x000281ca) bg_dia3_numentry_pane

0xad56,	// (0x0003117b) dia3_numentry_pane_t1

0xad65,	// (0x0003118a) cell_dia3_key_num_pane

0xad6d,	// (0x00031192) cell_dia3_key0_fun_pane_ParamLimits

0xad6d,	// (0x00031192) cell_dia3_key0_fun_pane

0xad81,	// (0x000311a6) cell_dia3_key1_fun_pane_ParamLimits

0xad81,	// (0x000311a6) cell_dia3_key1_fun_pane

0xad99,	// (0x000311be) dia3_listrow_pane

0xdd3e,	// (0x00034163) bg_dia3_numentry_pane_g1

0x1da5,	// (0x000281ca) bg_button_pane_cp21

0xef61,	// (0x00035386) cell_dia3_key_num_pane_t1

0xef6f,	// (0x00035394) cell_dia3_key_num_pane_t2

0xef7e,	// (0x000353a3) cell_dia3_key_num_pane_t3

0xef8d,	// (0x000353b2) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00036329) cell_dia3_key_num_pane_t

0x1da5,	// (0x000281ca) bg_button_pane_cp19

0xadab,	// (0x000311d0) cell_dia3_key0_fun_pane_g1

0x1da5,	// (0x000281ca) bg_button_pane_cp20

0xadb3,	// (0x000311d8) cell_dia3_key1_fun_pane_g1

0xadbb,	// (0x000311e0) area_left_week_number_pane

0xadc4,	// (0x000311e9) area_top_day_name_pane

0xadcd,	// (0x000311f2) frame_month_view_pane

0xadd5,	// (0x000311fa) grid_month_view_pane

0xaddf,	// (0x00031204) cell_top_day_name_pane_ParamLimits

0xaddf,	// (0x00031204) cell_top_day_name_pane

0xa66f,	// (0x00030a94) cell_area_left_week_number_pane_ParamLimits

0xa66f,	// (0x00030a94) cell_area_left_week_number_pane

0xadf5,	// (0x0003121a) cell_month_view_pane_ParamLimits

0xadf5,	// (0x0003121a) cell_month_view_pane

0xef9c,	// (0x000353c1) frm_month_g1

0xae10,	// (0x00031235) frm_month_g2

0xae18,	// (0x0003123d) frm_month_g3

0xae20,	// (0x00031245) frm_month_g4

0xae28,	// (0x0003124d) frm_month_g5

0xae30,	// (0x00031255) frm_month_g6

0xae38,	// (0x0003125d) frm_month_g7

0xefa5,	// (0x000353ca) frm_month_g8

0xae40,	// (0x00031265) frm_month_g9

0xae49,	// (0x0003126e) frm_month_g10

0xae52,	// (0x00031277) frm_month_g11

0xae5b,	// (0x00031280) frm_month_g12

0xae64,	// (0x00031289) frm_month_g13

0xae6d,	// (0x00031292) frm_month_g14

0xae76,	// (0x0003129b) frm_month_g15

0xae7f,	// (0x000312a4) frm_month_g16

0x000f,

0xff0d,	// (0x00036332) frm_month_g

0xae88,	// (0x000312ad) cell_top_day_name_pane_t1

0xae97,	// (0x000312bc) cell_area_left_week_number_pane_g1

0xae88,	// (0x000312ad) cell_area_left_week_number_pane_t1

0xc18e,	// (0x000325b3) cell_month_view_pane_g1

0xae9f,	// (0x000312c4) cell_month_view_pane_t1

0x1da5,	// (0x000281ca) main_fps_pane

0xe3b9,	// (0x000347de) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3b9,	// (0x000347de) cmail_ddmenu_btn02_pane_cp1

0xe3d5,	// (0x000347fa) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3d5,	// (0x000347fa) cmail_ddmenu_btn02_pane_cp2

0xa72d,	// (0x00030b52) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa72d,	// (0x00030b52) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x0003625c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x0003625c) cmail_ddmenu_btn02_pane_g

0xa74e,	// (0x00030b73) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa74e,	// (0x00030b73) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00036261) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00036261) cmail_ddmenu_btn02_pane_t

0xaeae,	// (0x000312d3) fps_text_pane_ParamLimits

0xaeae,	// (0x000312d3) fps_text_pane

0xaec5,	// (0x000312ea) main_fps_pane_g1_ParamLimits

0xaec5,	// (0x000312ea) main_fps_pane_g1

0xaedf,	// (0x00031304) wait_bar_pane_cp010_ParamLimits

0xaedf,	// (0x00031304) wait_bar_pane_cp010

0xaef0,	// (0x00031315) fps_text_pane_t1_ParamLimits

0xaef0,	// (0x00031315) fps_text_pane_t1

0xce5f,	// (0x00033284) cam4_image_uncrop_pane_g1

0xce68,	// (0x0003328d) cam4_image_uncrop_pane_g2

0x8336,	// (0x0002e75b) cam4_image_uncrop_pane_g3

0x833f,	// (0x0002e764) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00035d2d) cam4_image_uncrop_pane_g

0xad99,	// (0x000311be) dia3_listrow_pane_ParamLimits

0x1da5,	// (0x000281ca) main_phob2_pane

0xa26f,	// (0x00030694) cell_tport_appsw_pane_cp02_ParamLimits

0xa26f,	// (0x00030694) cell_tport_appsw_pane_cp02

0xa283,	// (0x000306a8) cell_tport_appsw_pane_cp03_ParamLimits

0xa283,	// (0x000306a8) cell_tport_appsw_pane_cp03

0x1da5,	// (0x000281ca) phob2_contact_card_pane

0x1da5,	// (0x000281ca) phob2_listscroll_pane

0xefae,	// (0x000353d3) phob2_list_pane

0xefb6,	// (0x000353db) scroll_pane_cp034

0xaf08,	// (0x0003132d) phob2_cc_data_pane_ParamLimits

0xaf08,	// (0x0003132d) phob2_cc_data_pane

0xaf27,	// (0x0003134c) phob2_cc_listscroll_pane_ParamLimits

0xaf27,	// (0x0003134c) phob2_cc_listscroll_pane

0xcfd3,	// (0x000333f8) list_double_large_graphic_phob2_pane_ParamLimits

0xcfd3,	// (0x000333f8) list_double_large_graphic_phob2_pane

0xaf45,	// (0x0003136a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf45,	// (0x0003136a) list_double_large_graphic_phob2_pane_g1

0xaf52,	// (0x00031377) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf52,	// (0x00031377) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00036353) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00036353) list_double_large_graphic_phob2_pane_g

0xaf5e,	// (0x00031383) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf5e,	// (0x00031383) list_double_large_graphic_phob2_pane_t1

0xaf73,	// (0x00031398) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf73,	// (0x00031398) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00036358) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00036358) list_double_large_graphic_phob2_pane_t

0x1da5,	// (0x000281ca) list_highlight_pane_cp024

0xefbe,	// (0x000353e3) phob2_cc_button_pane

0xaf85,	// (0x000313aa) phob2_cc_data_pane_g1_ParamLimits

0xaf85,	// (0x000313aa) phob2_cc_data_pane_g1

0xaf9a,	// (0x000313bf) phob2_cc_data_pane_g2_ParamLimits

0xaf9a,	// (0x000313bf) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0003635d) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0003635d) phob2_cc_data_pane_g

0xafac,	// (0x000313d1) phob2_cc_data_pane_t1_ParamLimits

0xafac,	// (0x000313d1) phob2_cc_data_pane_t1

0xafc4,	// (0x000313e9) phob2_cc_data_pane_t2_ParamLimits

0xafc4,	// (0x000313e9) phob2_cc_data_pane_t2

0xafdc,	// (0x00031401) phob2_cc_data_pane_t3_ParamLimits

0xafdc,	// (0x00031401) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00036362) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00036362) phob2_cc_data_pane_t

0xefc6,	// (0x000353eb) phob2_cc_list_pane_ParamLimits

0xefc6,	// (0x000353eb) phob2_cc_list_pane

0xd317,	// (0x0003373c) scroll_pane_cp035_ParamLimits

0xd317,	// (0x0003373c) scroll_pane_cp035

0x2017,	// (0x0002843c) bg_button_pane_cp033

0xefd2,	// (0x000353f7) phob2_cc_button_pane_g1

0xefde,	// (0x00035403) phob2_cc_button_pane_t1

0xeff3,	// (0x00035418) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00036369) phob2_cc_button_pane_t

0xaff6,	// (0x0003141b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaff6,	// (0x0003141b) list_double_large_graphic_phob2_cc_pane

0xb00a,	// (0x0003142f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb00a,	// (0x0003142f) list_double_large_graphic_phob2_cc_pane_g1

0xb016,	// (0x0003143b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb016,	// (0x0003143b) list_double_large_graphic_phob2_cc_pane_g2

0xb022,	// (0x00031447) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb022,	// (0x00031447) list_double_large_graphic_phob2_cc_pane_g3

0xb02e,	// (0x00031453) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb02e,	// (0x00031453) list_double_large_graphic_phob2_cc_pane_g4

0xb03a,	// (0x0003145f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb03a,	// (0x0003145f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0003636e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0003636e) list_double_large_graphic_phob2_cc_pane_g

0xb046,	// (0x0003146b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb046,	// (0x0003146b) list_double_large_graphic_phob2_cc_pane_t1

0xb06f,	// (0x00031494) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb06f,	// (0x00031494) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00036379) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00036379) list_double_large_graphic_phob2_cc_pane_t

0xf005,	// (0x0003542a) list_highlight_pane_cp025_ParamLimits

0xf005,	// (0x0003542a) list_highlight_pane_cp025

0x2017,	// (0x0002843c) bg_button_pane_cp033_ParamLimits

0xefd2,	// (0x000353f7) phob2_cc_button_pane_g1_ParamLimits

0xefde,	// (0x00035403) phob2_cc_button_pane_t1_ParamLimits

0xeff3,	// (0x00035418) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00036369) phob2_cc_button_pane_t_ParamLimits

0x2025,	// (0x0002844a) popup_wgtman_window

0xd0b5,	// (0x000334da) scroll_pane_cp038

0xab29,	// (0x00030f4e) wgtman_btn_pane_cp_01_ParamLimits

0xab29,	// (0x00030f4e) wgtman_btn_pane_cp_01

0xf013,	// (0x00035438) wgtman_content_pane

0xed5c,	// (0x00035181) wgtman_heading_pane

0x1da5,	// (0x000281ca) bg_heading_pane_cp02

0xf01c,	// (0x00035441) wgtman_heading_pane_g1

0xf024,	// (0x00035449) wgtman_heading_pane_t1

0xf032,	// (0x00035457) scroll_pane_cp036

0xf03a,	// (0x0003545f) wgtman_list_pane

0xf042,	// (0x00035467) wgtman_list_pane_t1_ParamLimits

0xf042,	// (0x00035467) wgtman_list_pane_t1

0xce4b,	// (0x00033270) cam4_grid_pane

0x8b3e,	// (0x0002ef63) bg_button_pane_cp015_ParamLimits

0x8b52,	// (0x0002ef77) bg_button_pane_cp016_ParamLimits

0x8b65,	// (0x0002ef8a) bg_button_pane_cp017_ParamLimits

0x8bbd,	// (0x0002efe2) popup_vitu2_query_window_g3_ParamLimits

0x8bbd,	// (0x0002efe2) popup_vitu2_query_window_g3

0x8c7a,	// (0x0002f09f) popup_vitu2_query_window_t6_ParamLimits

0x8c7a,	// (0x0002f09f) popup_vitu2_query_window_t6

0x8ca5,	// (0x0002f0ca) popup_vitu2_query_window_t7_ParamLimits

0x8ca5,	// (0x0002f0ca) popup_vitu2_query_window_t7

0xce5f,	// (0x00033284) cam4_grid_pane_g1

0xce68,	// (0x0003328d) cam4_grid_pane_g2

0xf064,	// (0x00035489) cam4_grid_pane_g3

0xf06d,	// (0x00035492) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0003637e) cam4_grid_pane_g

0x3505,	// (0x0002992a) aid_placing_vt_slider_lsc_ParamLimits

0x3852,	// (0x00029c77) vidtel_button_pane_ParamLimits

0x3852,	// (0x00029c77) vidtel_button_pane

0xf078,	// (0x0003549d) bg_button_pane_cp034

0xb098,	// (0x000314bd) vidtel_button_pane_g1

0xf082,	// (0x000354a7) vidtel_button_pane_t1

0xd1f2,	// (0x00033617) aid_size_vtel_slider_touch

0xd317,	// (0x0003373c) scroll_pane_cp039

0xdd7c,	// (0x000341a1) ncim_query_button_pane_cp01_ParamLimits

0xdd9b,	// (0x000341c0) ncimui_query_pane_g1_ParamLimits

0x2017,	// (0x0002843c) input_focus_pane_cp012_ParamLimits

0xddc0,	// (0x000341e5) ncim_query_entry_pane_t1_ParamLimits

0xd317,	// (0x0003373c) scroll_pane_cp039_ParamLimits

0x4e61,	// (0x0002b286) navi_pane_bcale_mc_g1

0x4e69,	// (0x0002b28e) navi_pane_bcale_mc_t1

0xe412,	// (0x00034837) main_sp_fs_email_pane_g1

0xe41a,	// (0x0003483f) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0003611f) main_sp_fs_email_pane_g

0xe952,	// (0x00034d77) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe952,	// (0x00034d77) list_single_cale_mrui_row_pane_g3

0xa776,	// (0x00030b9b) list_single_recal_day_pane_g5_event_pane

0xeb17,	// (0x00034f3c) list_single_recal_day_pane_g7

0xf090,	// (0x000354b5) list_recal_day_event_pane_cp01

0xf099,	// (0x000354be) list_recal_vselct_arw_lo_pane_cp01

0xf0a1,	// (0x000354c6) list_recal_vselct_arw_up_pane_cp01

0xf0a9,	// (0x000354ce) list_recal_vselct_pane_cp01

0xd27e,	// (0x000336a3) list_recal_day_event_pane_cp01_g1

0xf0b3,	// (0x000354d8) list_recal_day_event_pane_cp01_t1

0xeb1f,	// (0x00034f44) list_single_recal_day_pane_t1_ParamLimits

0xeb31,	// (0x00034f56) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00036271) list_single_recal_day_pane_t_ParamLimits

0x29f3,	// (0x00028e18) bg_notes_pane_ParamLimits

0x2a01,	// (0x00028e26) list_notes_pane_ParamLimits

0x2a0f,	// (0x00028e34) scroll_pane_cp06_ParamLimits

0x2a37,	// (0x00028e5c) main_notes_pane_ParamLimits

0x1da5,	// (0x000281ca) main_welc_pane

0xb0a0,	// (0x000314c5) main_welc_body_pane_ParamLimits

0xb0a0,	// (0x000314c5) main_welc_body_pane

0xb0b4,	// (0x000314d9) main_welc_opti_pane_ParamLimits

0xb0b4,	// (0x000314d9) main_welc_opti_pane

0xb0cb,	// (0x000314f0) main_welc_pane_t1_ParamLimits

0xb0cb,	// (0x000314f0) main_welc_pane_t1

0xb0e4,	// (0x00031509) main_welc_body_row_pane_ParamLimits

0xb0e4,	// (0x00031509) main_welc_body_row_pane

0xb0fb,	// (0x00031520) main_welc_opti_row_pane_ParamLimits

0xb0fb,	// (0x00031520) main_welc_opti_row_pane

0xf0c1,	// (0x000354e6) main_welc_opti_row_pane_g1

0xf0c9,	// (0x000354ee) main_welc_opti_row_pane_t1

0xf0d8,	// (0x000354fd) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
