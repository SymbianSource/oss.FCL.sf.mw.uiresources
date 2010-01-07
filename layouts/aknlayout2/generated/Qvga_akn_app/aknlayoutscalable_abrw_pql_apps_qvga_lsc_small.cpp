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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004f354 };

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
0x339c,	// (0x000526f0) Screen

0x33a6,	// (0x000526fa) application_window

0x33d5,	// (0x00052729) area_bottom_pane_ParamLimits

0x33d5,	// (0x00052729) area_bottom_pane

0x3408,	// (0x0005275c) area_top_pane_ParamLimits

0x3408,	// (0x0005275c) area_top_pane

0x0f08,	// (0x0005025c) call_video_uplink_pane_ParamLimits

0x0f08,	// (0x0005025c) call_video_uplink_pane

0x3479,	// (0x000527cd) main_pane_ParamLimits

0x3479,	// (0x000527cd) main_pane

0xc407,	// (0x0005b75b) context_pane

0x603c,	// (0x00055390) navi_pane

0x6065,	// (0x000553b9) popup_cale_events_window_ParamLimits

0x6065,	// (0x000553b9) popup_cale_events_window

0xc41a,	// (0x0005b76e) popup_mup_playback_window

0x607d,	// (0x000553d1) signal_pane

0x165f,	// (0x000509b3) main_browser_pane

0xaf3d,	// (0x0005a291) main_burst_pane

0x2045,	// (0x00051399) main_calc_pane

0xaf3d,	// (0x0005a291) main_cale_day_pane

0x1787,	// (0x00050adb) main_cale_month_pane

0xaf3d,	// (0x0005a291) main_cale_week_pane

0xaf3d,	// (0x0005a291) main_call_pane

0x1335,	// (0x00050689) main_call_poc_pane

0xaf3d,	// (0x0005a291) main_camera_pane

0xaf3d,	// (0x0005a291) main_chi_dic_pane

0x1fc2,	// (0x00051316) main_clock_pane

0x1335,	// (0x00050689) main_fmradio_pane

0xaf3d,	// (0x0005a291) main_graph_messa_pane

0x1335,	// (0x00050689) main_help_pane

0x165f,	// (0x000509b3) main_im_pane

0x1590,	// (0x000508e4) main_image_pane_ParamLimits

0x1590,	// (0x000508e4) main_image_pane

0x1335,	// (0x00050689) main_location2_pane

0xaf3d,	// (0x0005a291) main_location_pane

0x1335,	// (0x00050689) main_messa_pane

0x1335,	// (0x00050689) main_mp2_pane

0xaf3d,	// (0x0005a291) main_mp_pane

0x1335,	// (0x00050689) main_msg_pane

0x1335,	// (0x00050689) main_mup_eq_pane

0x1335,	// (0x00050689) main_mup_pane

0xaf3d,	// (0x0005a291) main_notes_pane

0x1335,	// (0x00050689) main_pec_pane

0x1335,	// (0x00050689) main_phob_pane

0x1335,	// (0x00050689) main_pinb_pane

0x1335,	// (0x00050689) main_postcard_pane

0x1335,	// (0x00050689) main_qdial_pane

0xaf3d,	// (0x0005a291) main_skin_pane

0x1335,	// (0x00050689) main_smil2_pane

0xaf3d,	// (0x0005a291) main_smil_pane

0xaf3d,	// (0x0005a291) main_video_pane

0xaf3d,	// (0x0005a291) main_video_tele_pane

0x1590,	// (0x000508e4) main_viewer_pane_ParamLimits

0x1590,	// (0x000508e4) main_viewer_pane

0xaf3d,	// (0x0005a291) main_vorec_pane

0x5e1c,	// (0x00055170) popup_blid_sat_info_window_ParamLimits

0x5e1c,	// (0x00055170) popup_blid_sat_info_window

0x5e72,	// (0x000551c6) popup_dyc_status_message_window_ParamLimits

0x5e72,	// (0x000551c6) popup_dyc_status_message_window

0x5e88,	// (0x000551dc) popup_grid_large_graphic_window_ParamLimits

0x5e88,	// (0x000551dc) popup_grid_large_graphic_window

0x5f1e,	// (0x00055272) popup_loc_request_window_ParamLimits

0x5f1e,	// (0x00055272) popup_loc_request_window

0x6016,	// (0x0005536a) popup_wml_address_window_ParamLimits

0x6016,	// (0x0005536a) popup_wml_address_window

0x5c72,	// (0x00054fc6) call_muted_g1

0x5997,	// (0x00054ceb) popup_call_audio_conf_window_ParamLimits

0x5997,	// (0x00054ceb) popup_call_audio_conf_window

0x5c82,	// (0x00054fd6) popup_call_audio_first_window_ParamLimits

0x5c82,	// (0x00054fd6) popup_call_audio_first_window

0x5ce0,	// (0x00055034) popup_call_audio_in_window_ParamLimits

0x5ce0,	// (0x00055034) popup_call_audio_in_window

0x5d0c,	// (0x00055060) popup_call_audio_out_window_ParamLimits

0x5d0c,	// (0x00055060) popup_call_audio_out_window

0x5d3a,	// (0x0005508e) popup_call_audio_second_window_ParamLimits

0x5d3a,	// (0x0005508e) popup_call_audio_second_window

0x5d80,	// (0x000550d4) popup_call_audio_wait_window_ParamLimits

0x5d80,	// (0x000550d4) popup_call_audio_wait_window

0x5db3,	// (0x00055107) popup_number_entry_window_ParamLimits

0x5db3,	// (0x00055107) popup_number_entry_window

0x0f24,	// (0x00050278) bg_popup_call_pane_cp05_ParamLimits

0x0f24,	// (0x00050278) bg_popup_call_pane_cp05

0x0f44,	// (0x00050298) popup_number_entry_window_t1

0x0f57,	// (0x000502ab) popup_number_entry_window_t2

0x0f69,	// (0x000502bd) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0005e44f) popup_number_entry_window_t

0x0f7b,	// (0x000502cf) text_title_cp2

0x0f8e,	// (0x000502e2) bg_popup_call_pane_cp_ParamLimits

0x0f8e,	// (0x000502e2) bg_popup_call_pane_cp

0x0f9c,	// (0x000502f0) call_thumbnail_pane

0x0fa4,	// (0x000502f8) popup_call_audio_in_window_g1_ParamLimits

0x0fa4,	// (0x000502f8) popup_call_audio_in_window_g1

0x0fb0,	// (0x00050304) popup_call_audio_in_window_g2_ParamLimits

0x0fb0,	// (0x00050304) popup_call_audio_in_window_g2

0x0fbc,	// (0x00050310) popup_call_audio_in_window_g3_ParamLimits

0x0fbc,	// (0x00050310) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0005e458) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0005e458) popup_call_audio_in_window_g

0x0fc8,	// (0x0005031c) popup_call_audio_in_window_t1_ParamLimits

0x0fc8,	// (0x0005031c) popup_call_audio_in_window_t1

0x0fe3,	// (0x00050337) popup_call_audio_in_window_t2_ParamLimits

0x0fe3,	// (0x00050337) popup_call_audio_in_window_t2

0x0ffe,	// (0x00050352) popup_call_audio_in_window_t3_ParamLimits

0x0ffe,	// (0x00050352) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0005e45f) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0005e45f) popup_call_audio_in_window_t

0x0f8e,	// (0x000502e2) bg_popup_call_pane_cp01_ParamLimits

0x0f8e,	// (0x000502e2) bg_popup_call_pane_cp01

0x0f9c,	// (0x000502f0) call_thumbnail_pane_cp02

0x1011,	// (0x00050365) call_type_pane_cp022

0x1019,	// (0x0005036d) popup_call_audio_out_window_g1_ParamLimits

0x1019,	// (0x0005036d) popup_call_audio_out_window_g1

0x102b,	// (0x0005037f) popup_call_audio_out_window_g2_ParamLimits

0x102b,	// (0x0005037f) popup_call_audio_out_window_g2

0x1037,	// (0x0005038b) popup_call_audio_out_window_g3_ParamLimits

0x1037,	// (0x0005038b) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0005e466) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0005e466) popup_call_audio_out_window_g

0x1049,	// (0x0005039d) popup_call_audio_out_window_t1_ParamLimits

0x1049,	// (0x0005039d) popup_call_audio_out_window_t1

0x1061,	// (0x000503b5) popup_call_audio_out_window_t2_ParamLimits

0x1061,	// (0x000503b5) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0005e46d) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0005e46d) popup_call_audio_out_window_t

0x1076,	// (0x000503ca) bg_popup_call_pane_ParamLimits

0x1076,	// (0x000503ca) bg_popup_call_pane

0x360b,	// (0x0005295f) call_thumbnail_pane_cp_ParamLimits

0x360b,	// (0x0005295f) call_thumbnail_pane_cp

0x10fa,	// (0x0005044e) call_type_pane_cp01_ParamLimits

0x10fa,	// (0x0005044e) call_type_pane_cp01

0x113e,	// (0x00050492) popup_call_audio_first_window_g1_ParamLimits

0x113e,	// (0x00050492) popup_call_audio_first_window_g1

0x118a,	// (0x000504de) popup_call_audio_first_window_g2_ParamLimits

0x118a,	// (0x000504de) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0005e472) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0005e472) popup_call_audio_first_window_g

0x11ce,	// (0x00050522) popup_call_audio_first_window_t1_ParamLimits

0x11ce,	// (0x00050522) popup_call_audio_first_window_t1

0x127a,	// (0x000505ce) popup_call_audio_first_window_t4_ParamLimits

0x127a,	// (0x000505ce) popup_call_audio_first_window_t4

0x1306,	// (0x0005065a) popup_call_audio_first_window_t5_ParamLimits

0x1306,	// (0x0005065a) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0005e477) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0005e477) popup_call_audio_first_window_t

0x1335,	// (0x00050689) bg_popup_call_pane_cp02

0x133f,	// (0x00050693) call_type_pane_cp023

0x1347,	// (0x0005069b) popup_call_audio_wait_window_g1

0x134f,	// (0x000506a3) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0005e47e) popup_call_audio_wait_window_g

0x1357,	// (0x000506ab) popup_call_audio_wait_window_t3

0x1365,	// (0x000506b9) bg_popup_call_pane_cp03_ParamLimits

0x1365,	// (0x000506b9) bg_popup_call_pane_cp03

0x13c5,	// (0x00050719) call_thumbnail_pane_cp011_ParamLimits

0x13c5,	// (0x00050719) call_thumbnail_pane_cp011

0x13d1,	// (0x00050725) call_type_pane_cp034_ParamLimits

0x13d1,	// (0x00050725) call_type_pane_cp034

0x140d,	// (0x00050761) popup_call_audio_second_window_g1_ParamLimits

0x140d,	// (0x00050761) popup_call_audio_second_window_g1

0x1449,	// (0x0005079d) popup_call_audio_second_window_g2_ParamLimits

0x1449,	// (0x0005079d) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0005e483) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0005e483) popup_call_audio_second_window_g

0x1485,	// (0x000507d9) popup_call_audio_second_window_t1_ParamLimits

0x1485,	// (0x000507d9) popup_call_audio_second_window_t1

0x1506,	// (0x0005085a) popup_call_audio_second_window_t2_ParamLimits

0x1506,	// (0x0005085a) popup_call_audio_second_window_t2

0x153c,	// (0x00050890) popup_call_audio_second_window_t3_ParamLimits

0x153c,	// (0x00050890) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0005e488) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0005e488) popup_call_audio_second_window_t

0x1335,	// (0x00050689) bg_popup_call_pane_cp04

0x1572,	// (0x000508c6) list_conf_pane

0x157a,	// (0x000508ce) popup_call_audio_conf_window_t1

0x1588,	// (0x000508dc) call_thumbnail_pane_g1

0x1590,	// (0x000508e4) bg_pinb_pane_ParamLimits

0x1590,	// (0x000508e4) bg_pinb_pane

0x159e,	// (0x000508f2) find_pinb_pane

0x15a7,	// (0x000508fb) listscroll_pinb_pane_ParamLimits

0x15a7,	// (0x000508fb) listscroll_pinb_pane

0x15b6,	// (0x0005090a) pinb_bg_pane_g1

0x362f,	// (0x00052983) pinb_bg_pane_g2

0x3639,	// (0x0005298d) pinb_bg_pane_g3

0x3643,	// (0x00052997) pinb_bg_pane_g4

0x364d,	// (0x000529a1) pinb_bg_pane_g5

0x3657,	// (0x000529ab) pinb_bg_pane_g6

0x3660,	// (0x000529b4) pinb_bg_pane_g7

0x3669,	// (0x000529bd) pinb_bg_pane_g8

0x3674,	// (0x000529c8) pinb_bg_pane_g9

0x367e,	// (0x000529d2) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0005e48f) pinb_bg_pane_g

0x3699,	// (0x000529ed) grid_pinb_pane

0x36a2,	// (0x000529f6) list_pinb_pane

0x36ab,	// (0x000529ff) scroll_pane_cp01_ParamLimits

0x36ab,	// (0x000529ff) scroll_pane_cp01

0x15c0,	// (0x00050914) find_pinb_pane_g1_ParamLimits

0x15c0,	// (0x00050914) find_pinb_pane_g1

0x15d8,	// (0x0005092c) find_pinb_pane_t1

0x15ea,	// (0x0005093e) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0005e4a9) find_pinb_pane_t

0x15ff,	// (0x00050953) input_focus_pane_cp01_ParamLimits

0x15ff,	// (0x00050953) input_focus_pane_cp01

0x36bd,	// (0x00052a11) cell_pinb_pane_ParamLimits

0x36bd,	// (0x00052a11) cell_pinb_pane

0x36d8,	// (0x00052a2c) cell_pinb_pane_g1_ParamLimits

0x36d8,	// (0x00052a2c) cell_pinb_pane_g1

0x36e8,	// (0x00052a3c) cell_pinb_pane_g2_ParamLimits

0x36e8,	// (0x00052a3c) cell_pinb_pane_g2

0x160b,	// (0x0005095f) cell_pinb_pane_g3_ParamLimits

0x160b,	// (0x0005095f) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0005e4ae) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0005e4ae) cell_pinb_pane_g

0x1335,	// (0x00050689) grid_highlight_pane_cp01

0x36f4,	// (0x00052a48) list_pinb_item_pane_ParamLimits

0x36f4,	// (0x00052a48) list_pinb_item_pane

0x1335,	// (0x00050689) list_highlight_pane_cp02

0x3706,	// (0x00052a5a) list_pinb_item_pane_g1_ParamLimits

0x3706,	// (0x00052a5a) list_pinb_item_pane_g1

0x3713,	// (0x00052a67) list_pinb_item_pane_g2_ParamLimits

0x3713,	// (0x00052a67) list_pinb_item_pane_g2

0x371f,	// (0x00052a73) list_pinb_item_pane_g3_ParamLimits

0x371f,	// (0x00052a73) list_pinb_item_pane_g3

0x3730,	// (0x00052a84) list_pinb_item_pane_g4_ParamLimits

0x3730,	// (0x00052a84) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0005e4b5) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0005e4b5) list_pinb_item_pane_g

0x373c,	// (0x00052a90) list_pinb_item_pane_t1_ParamLimits

0x373c,	// (0x00052a90) list_pinb_item_pane_t1

0x3771,	// (0x00052ac5) calc_display_pane

0x378d,	// (0x00052ae1) calc_paper_pane

0x37ae,	// (0x00052b02) grid_calc_pane

0x1335,	// (0x00050689) bg_list_pane_cp01

0x37ca,	// (0x00052b1e) clock_g1

0x37d2,	// (0x00052b26) clock_g2

0x0001,

0xf16a,	// (0x0005e4be) clock_g

0x37da,	// (0x00052b2e) clock_t1_ParamLimits

0x37da,	// (0x00052b2e) clock_t1

0x37ef,	// (0x00052b43) clock_t2_ParamLimits

0x37ef,	// (0x00052b43) clock_t2

0x3801,	// (0x00052b55) clock_t3_ParamLimits

0x3801,	// (0x00052b55) clock_t3

0x3813,	// (0x00052b67) clock_t4_ParamLimits

0x3813,	// (0x00052b67) clock_t4

0x3825,	// (0x00052b79) clock_t5_ParamLimits

0x3825,	// (0x00052b79) clock_t5

0x383a,	// (0x00052b8e) clock_t6_ParamLimits

0x383a,	// (0x00052b8e) clock_t6

0x384c,	// (0x00052ba0) clock_t7_ParamLimits

0x384c,	// (0x00052ba0) clock_t7

0x385e,	// (0x00052bb2) clock_t8_ParamLimits

0x385e,	// (0x00052bb2) clock_t8

0x3870,	// (0x00052bc4) clock_t9_ParamLimits

0x3870,	// (0x00052bc4) clock_t9

0x0008,

0xf16f,	// (0x0005e4c3) clock_t_ParamLimits

0xf16f,	// (0x0005e4c3) clock_t

0x1617,	// (0x0005096b) popup_clock_analogue_window_cp02

0x1617,	// (0x0005096b) popup_clock_digital_window_cp01

0x161f,	// (0x00050973) listscroll_help_pane

0x1335,	// (0x00050689) phob_pre_status_pane

0x1629,	// (0x0005097d) grid_qdial_pane

0x1335,	// (0x00050689) listscroll_mce_pane

0x1633,	// (0x00050987) bg_notes_pane

0x163d,	// (0x00050991) list_notes_pane

0x3882,	// (0x00052bd6) scroll_pane_cp06

0x1647,	// (0x0005099b) bg_calc_paper_pane

0xaa9a,	// (0x00059dee) list_calc_pane

0x165f,	// (0x000509b3) bg_calc_display_pane

0xaab4,	// (0x00059e08) calc_display_pane_t1

0xaac9,	// (0x00059e1d) calc_display_pane_t2

0xaade,	// (0x00059e32) calc_display_pane_t3

0x0002,

0xf182,	// (0x0005e4d6) calc_display_pane_t

0x388d,	// (0x00052be1) cell_calc_pane_ParamLimits

0x388d,	// (0x00052be1) cell_calc_pane

0x166b,	// (0x000509bf) bg_calc_paper_pane_g1

0x1677,	// (0x000509cb) bg_calc_paper_pane_g2

0x1683,	// (0x000509d7) bg_calc_paper_pane_g3

0x168f,	// (0x000509e3) bg_calc_paper_pane_g4

0x169b,	// (0x000509ef) bg_calc_paper_pane_g5

0x38c0,	// (0x00052c14) bg_calc_paper_pane_g6

0x38cf,	// (0x00052c23) bg_calc_paper_pane_g7

0x38de,	// (0x00052c32) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0005e4dd) bg_calc_paper_pane_g

0x38ed,	// (0x00052c41) calc_bg_paper_pane_g9

0x38fc,	// (0x00052c50) list_calc_item_pane_ParamLimits

0x38fc,	// (0x00052c50) list_calc_item_pane

0x16a7,	// (0x000509fb) list_calc_item_pane_g1

0xaaf0,	// (0x00059e44) list_calc_item_pane_t1_ParamLimits

0xaaf0,	// (0x00059e44) list_calc_item_pane_t1

0x3910,	// (0x00052c64) list_calc_item_pane_t2_ParamLimits

0x3910,	// (0x00052c64) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0005e4ee) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0005e4ee) list_calc_item_pane_t

0x16b4,	// (0x00050a08) cell_calc_pane_g1

0x16be,	// (0x00050a12) grid_highlight_pane_cp02

0x16e0,	// (0x00050a34) bg_calc_display_pane_g1

0xab02,	// (0x00059e56) bg_calc_display_pane_g2

0x16e9,	// (0x00050a3d) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0005e4f8) bg_calc_display_pane_g

0x393e,	// (0x00052c92) cell_qdial_pane_ParamLimits

0x393e,	// (0x00052c92) cell_qdial_pane

0x3950,	// (0x00052ca4) cell_qdial_pane_g1_ParamLimits

0x3950,	// (0x00052ca4) cell_qdial_pane_g1

0x3966,	// (0x00052cba) cell_qdial_pane_g2_ParamLimits

0x3966,	// (0x00052cba) cell_qdial_pane_g2

0x16f2,	// (0x00050a46) cell_qdial_pane_g3_ParamLimits

0x16f2,	// (0x00050a46) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0005e4ff) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0005e4ff) cell_qdial_pane_g

0x398d,	// (0x00052ce1) cell_qdial_pane_t1_ParamLimits

0x398d,	// (0x00052ce1) cell_qdial_pane_t1

0x39a5,	// (0x00052cf9) cell_qdial_pane_t2_ParamLimits

0x39a5,	// (0x00052cf9) cell_qdial_pane_t2

0x39b8,	// (0x00052d0c) cell_qdial_pane_t3_ParamLimits

0x39b8,	// (0x00052d0c) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0005e508) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0005e508) cell_qdial_pane_t

0x1335,	// (0x00050689) grid_highlight_pane_cp04

0x16fe,	// (0x00050a52) thumbnail_qdial_pane_ParamLimits

0x16fe,	// (0x00050a52) thumbnail_qdial_pane

0x175a,	// (0x00050aae) list_help_pane

0x1764,	// (0x00050ab8) scroll_pane_cp02

0x39cb,	// (0x00052d1f) help_list_pane_t1_ParamLimits

0x39cb,	// (0x00052d1f) help_list_pane_t1

0xab0c,	// (0x00059e60) bg_notes_pane_g2

0xab14,	// (0x00059e68) bg_notes_pane_g3

0xab1c,	// (0x00059e70) notes_bg_pane_g1

0xab24,	// (0x00059e78) notes_bg_pane_g4

0xab2c,	// (0x00059e80) notes_bg_pane_g5

0xab34,	// (0x00059e88) notes_bg_pane_g6

0xab3c,	// (0x00059e90) notes_bg_pane_g7

0xab44,	// (0x00059e98) notes_bg_pane_g8

0xab4c,	// (0x00059ea0) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0005e526) notes_bg_pane_g

0x205f,	// (0x000513b3) list_notes_text_pane_ParamLimits

0x205f,	// (0x000513b3) list_notes_text_pane

0x176d,	// (0x00050ac1) list_notes_text_pane_g1

0x39e7,	// (0x00052d3b) list_notes_text_pane_t1

0x1787,	// (0x00050adb) listscroll_cale_week_pane

0x3a10,	// (0x00052d64) bg_cale_heading_pane

0x1796,	// (0x00050aea) bg_cale_pane_cp01

0x3a24,	// (0x00052d78) cale_week_corner_pane

0x3a3a,	// (0x00052d8e) cale_week_day_heading_pane

0x3a4e,	// (0x00052da2) cale_week_scroll_pane_g1

0x3a5f,	// (0x00052db3) cale_week_scroll_pane_g2

0x3a70,	// (0x00052dc4) cale_week_scroll_pane_g3

0x3a81,	// (0x00052dd5) cale_week_scroll_pane_g4

0x3a92,	// (0x00052de6) cale_week_scroll_pane_g5

0x3aa3,	// (0x00052df7) cale_week_scroll_pane_g6

0x3ab4,	// (0x00052e08) cale_week_scroll_pane_g7

0x3ac5,	// (0x00052e19) cale_week_scroll_pane_g8

0x3ad8,	// (0x00052e2c) cale_week_scroll_pane_g9

0x3ae9,	// (0x00052e3d) cale_week_scroll_pane_g10

0x3afa,	// (0x00052e4e) cale_week_scroll_pane_g11

0x3b0b,	// (0x00052e5f) cale_week_scroll_pane_g12

0x3b1c,	// (0x00052e70) cale_week_scroll_pane_g13

0x3b2d,	// (0x00052e81) cale_week_scroll_pane_g14

0x3b3e,	// (0x00052e92) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0005e535) cale_week_scroll_pane_g

0x3b4f,	// (0x00052ea3) cale_week_time_pane

0x3b62,	// (0x00052eb6) grid_cale_week_pane

0x3b75,	// (0x00052ec9) scroll_pane_cp08

0x3b8f,	// (0x00052ee3) cell_cale_week_pane_ParamLimits

0x3b8f,	// (0x00052ee3) cell_cale_week_pane

0x3bcb,	// (0x00052f1f) cale_week_day_heading_pane_t1

0x3bf5,	// (0x00052f49) cale_week_day_heading_pane_t2

0x3c1f,	// (0x00052f73) cale_week_day_heading_pane_t3

0x3c49,	// (0x00052f9d) cale_week_day_heading_pane_t4

0x3c73,	// (0x00052fc7) cale_week_day_heading_pane_t5

0x3c9d,	// (0x00052ff1) cale_week_day_heading_pane_t6

0x3cc7,	// (0x0005301b) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0005e554) cale_week_day_heading_pane_t

0x17c1,	// (0x00050b15) bg_cale_side_pane

0x3cf1,	// (0x00053045) cale_week_time_pane_t1

0x3d1d,	// (0x00053071) cale_week_time_pane_t2

0x3d49,	// (0x0005309d) cale_week_time_pane_t3

0x3d75,	// (0x000530c9) cale_week_time_pane_t4

0x3da1,	// (0x000530f5) cale_week_time_pane_t5

0x3dcd,	// (0x00053121) cale_week_time_pane_t6

0x3df9,	// (0x0005314d) cale_week_time_pane_t7

0x3e25,	// (0x00053179) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0005e563) cale_week_time_pane_t

0x3e51,	// (0x000531a5) cell_cale_week_pane_g2

0x3e6a,	// (0x000531be) cell_cale_week_pane_g3_ParamLimits

0x3e6a,	// (0x000531be) cell_cale_week_pane_g3

0x17cf,	// (0x00050b23) grid_highlight_pane_cp07

0x17d7,	// (0x00050b2b) listscroll_gms_pane

0x17e1,	// (0x00050b35) grid_gms_pane

0x17ea,	// (0x00050b3e) listscroll_gms_pane_g1

0x17f2,	// (0x00050b46) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0005e574) listscroll_gms_pane_g

0x3e82,	// (0x000531d6) scroll_pane_cp010

0x3e8d,	// (0x000531e1) cell_gms_pane_ParamLimits

0x3e8d,	// (0x000531e1) cell_gms_pane

0x3e9d,	// (0x000531f1) cell_gms_pane_g1

0x17fa,	// (0x00050b4e) cell_gms_pane_g2

0x176d,	// (0x00050ac1) cell_gms_pane_g3

0x1802,	// (0x00050b56) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0005e579) cell_gms_pane_g

0x180b,	// (0x00050b5f) grid_highlight_pane_cp09

0x5c20,	// (0x00054f74) phob_pre_status_pane_g1

0x5c28,	// (0x00054f7c) phob_pre_status_pane_g2

0x5c30,	// (0x00054f84) phob_pre_status_pane_g3

0x5c38,	// (0x00054f8c) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x0005e97b) phob_pre_status_pane_g

0x5c48,	// (0x00054f9c) phob_pre_status_pane_t1

0x5c56,	// (0x00054faa) phob_pre_status_pane_t2

0x5c64,	// (0x00054fb8) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x0005e986) phob_pre_status_pane_t

0x1335,	// (0x00050689) bg_list_pane_cp05

0x3ead,	// (0x00053201) grid_vorec_pane

0xab54,	// (0x00059ea8) vorec_t1

0xab62,	// (0x00059eb6) vorec_t2

0xab70,	// (0x00059ec4) vorec_t3

0xab7e,	// (0x00059ed2) vorec_t4

0xab8c,	// (0x00059ee0) vorec_t5

0xab9a,	// (0x00059eee) vorec_t6

0x0006,

0xf22e,	// (0x0005e582) vorec_t

0xabb6,	// (0x00059f0a) wait_bar_pane_cp01

0x3eb5,	// (0x00053209) cell_vorec_pane_ParamLimits

0x3eb5,	// (0x00053209) cell_vorec_pane

0x1813,	// (0x00050b67) cell_vorec_pane_g1

0x1335,	// (0x00050689) grid_highlight_pane_cp05

0x3eda,	// (0x0005322e) cams_zoom_pane

0x3ee9,	// (0x0005323d) image_vga_pane

0x3f01,	// (0x00053255) main_camera_pane_g1

0x3f11,	// (0x00053265) main_camera_pane_g2

0x3f21,	// (0x00053275) main_camera_pane_g3

0x3f31,	// (0x00053285) main_camera_pane_g4

0x3f41,	// (0x00053295) main_camera_pane_g5

0x3f51,	// (0x000532a5) main_camera_pane_g6

0x3f61,	// (0x000532b5) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0005e591) main_camera_pane_g

0x3f71,	// (0x000532c5) main_camera_pane_t1

0x3f87,	// (0x000532db) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0005e5a2) main_camera_pane_t

0x3fb9,	// (0x0005330d) cams_zoom_pane_cp_ParamLimits

0x3fb9,	// (0x0005330d) cams_zoom_pane_cp

0x3fe1,	// (0x00053335) image_cif_pane_ParamLimits

0x3fe1,	// (0x00053335) image_cif_pane

0x4012,	// (0x00053366) image_subqcif_pane

0x401a,	// (0x0005336e) main_video_pane_g1_ParamLimits

0x401a,	// (0x0005336e) main_video_pane_g1

0x403e,	// (0x00053392) main_video_pane_g2_ParamLimits

0x403e,	// (0x00053392) main_video_pane_g2

0x4072,	// (0x000533c6) main_video_pane_g3_ParamLimits

0x4072,	// (0x000533c6) main_video_pane_g3

0x40a0,	// (0x000533f4) main_video_pane_g4_ParamLimits

0x40a0,	// (0x000533f4) main_video_pane_g4

0x40ce,	// (0x00053422) main_video_pane_g5_ParamLimits

0x40ce,	// (0x00053422) main_video_pane_g5

0x1829,	// (0x00050b7d) main_video_pane_g6_ParamLimits

0x1829,	// (0x00050b7d) main_video_pane_g6

0x0006,

0xf253,	// (0x0005e5a7) main_video_pane_g_ParamLimits

0xf253,	// (0x0005e5a7) main_video_pane_g

0x40f5,	// (0x00053449) main_video_pane_t1_ParamLimits

0x40f5,	// (0x00053449) main_video_pane_t1

0x1843,	// (0x00050b97) cams_zoom_pane_g1

0x184c,	// (0x00050ba0) cams_zoom_pane_g2

0x1855,	// (0x00050ba9) cams_zoom_pane_g3

0x185e,	// (0x00050bb2) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0005e5b6) cams_zoom_pane_g

0x4152,	// (0x000534a6) grid_cams_pane

0x4167,	// (0x000534bb) linegrid_cams_pane

0x4178,	// (0x000534cc) cell_cams_pane_ParamLimits

0x4178,	// (0x000534cc) cell_cams_pane

0x1867,	// (0x00050bbb) cams_burst_image_pane

0x186f,	// (0x00050bc3) cell_cams_pane_g1

0x1335,	// (0x00050689) grid_highlight_pane_cp03

0x16b4,	// (0x00050a08) mp_bg_pane_g1

0x1335,	// (0x00050689) bg_list_pane_cp03

0xc2e3,	// (0x0005b637) bg_mp_pane

0xc2eb,	// (0x0005b63f) grid_mp_pane

0xc2f3,	// (0x0005b647) media_player_g1

0xc2fb,	// (0x0005b64f) media_player_t1

0xc309,	// (0x0005b65d) media_player_t2

0xc317,	// (0x0005b66b) media_player_t3

0xc325,	// (0x0005b679) media_player_t4

0xc333,	// (0x0005b687) media_player_t5

0xc341,	// (0x0005b695) media_player_t6

0xc34f,	// (0x0005b6a3) media_player_t7

0x0006,

0xf611,	// (0x0005e965) media_player_t

0xc35d,	// (0x0005b6b1) wait_bar_pane_cp02

0xf5f6,	// (0x0005e94a) main_usb_pane_t

0x5c17,	// (0x00054f6b) cell_mp_pane

0x16b4,	// (0x00050a08) cell_mp_pane_g1

0x1335,	// (0x00050689) grid_highlight_pane_cp06

0x1877,	// (0x00050bcb) grid_skin_colour_pane

0x187f,	// (0x00050bd3) list_highlight_pane_cp03

0x41e6,	// (0x0005353a) skin_g1

0x1887,	// (0x00050bdb) skin_t1

0x1896,	// (0x00050bea) skin_t2

0x0001,

0xf297,	// (0x0005e5eb) skin_t

0x41ee,	// (0x00053542) cell_skin_colour_pane_ParamLimits

0x41ee,	// (0x00053542) cell_skin_colour_pane

0x18a4,	// (0x00050bf8) cell_skin_colour_pane_g1

0x4240,	// (0x00053594) call_video_g1_ParamLimits

0x4240,	// (0x00053594) call_video_g1

0x4256,	// (0x000535aa) call_video_g2_ParamLimits

0x4256,	// (0x000535aa) call_video_g2

0x0001,

0xf29c,	// (0x0005e5f0) call_video_g_ParamLimits

0xf29c,	// (0x0005e5f0) call_video_g

0x428c,	// (0x000535e0) call_video_uplink_pane_cp1_ParamLimits

0x428c,	// (0x000535e0) call_video_uplink_pane_cp1

0x18be,	// (0x00050c12) call_video_uplink_pane_cp2

0x42f3,	// (0x00053647) video_down_crop_pane_ParamLimits

0x42f3,	// (0x00053647) video_down_crop_pane

0x439b,	// (0x000536ef) video_down_pane_ParamLimits

0x439b,	// (0x000536ef) video_down_pane

0x18c6,	// (0x00050c1a) video_down_subqcif_pane_ParamLimits

0x18c6,	// (0x00050c1a) video_down_subqcif_pane

0x18de,	// (0x00050c32) video_down_subqcif_pane_cp_ParamLimits

0x18de,	// (0x00050c32) video_down_subqcif_pane_cp

0x1902,	// (0x00050c56) im_reading_pane_ParamLimits

0x1902,	// (0x00050c56) im_reading_pane

0x442b,	// (0x0005377f) im_writing_pane_ParamLimits

0x442b,	// (0x0005377f) im_writing_pane

0x4441,	// (0x00053795) im_reading_pane_t1

0x191c,	// (0x00050c70) list_im_pane

0x192d,	// (0x00050c81) scroll_pane_cp07

0x4477,	// (0x000537cb) im_writing_pane_t1_ParamLimits

0x4477,	// (0x000537cb) im_writing_pane_t1

0x1946,	// (0x00050c9a) im_writing_pane_t2_ParamLimits

0x1946,	// (0x00050c9a) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0005e5fa) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0005e5fa) im_writing_pane_t

0x1335,	// (0x00050689) input_focus_pane_cp04

0x1335,	// (0x00050689) input_focus_pane_cp05

0x448c,	// (0x000537e0) list_im_single_pane_ParamLimits

0x448c,	// (0x000537e0) list_im_single_pane

0x1963,	// (0x00050cb7) list_single_im_pane_t1

0x5bdd,	// (0x00054f31) blid_accuracy_pane

0x5be5,	// (0x00054f39) blid_compass_pane

0x5bed,	// (0x00054f41) main_location_t1

0x5bfb,	// (0x00054f4f) main_location_t2

0x5c09,	// (0x00054f5d) main_location_t3

0x0002,

0xf620,	// (0x0005e974) main_location_t

0x1335,	// (0x00050689) aid_levels_location

0x16b4,	// (0x00050a08) blid_accuracy_pane_g1

0x16b4,	// (0x00050a08) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0005e65c) blid_accuracy_pane_g

0x199d,	// (0x00050cf1) wml_content_pane

0x19db,	// (0x00050d2f) wml_button_pane_ParamLimits

0x19db,	// (0x00050d2f) wml_button_pane

0x44a2,	// (0x000537f6) wml_list_single_large_pane_ParamLimits

0x44a2,	// (0x000537f6) wml_list_single_large_pane

0x44b6,	// (0x0005380a) wml_list_single_medium_pane_ParamLimits

0x44b6,	// (0x0005380a) wml_list_single_medium_pane

0x44cb,	// (0x0005381f) wml_list_single_small_pane_ParamLimits

0x44cb,	// (0x0005381f) wml_list_single_small_pane

0x19ef,	// (0x00050d43) wml_selection_box_pane_ParamLimits

0x19ef,	// (0x00050d43) wml_selection_box_pane

0x1a02,	// (0x00050d56) wml_list_single_pane_t1

0x1a11,	// (0x00050d65) wml_list_single_medium_pane_t1

0x1a20,	// (0x00050d74) wml_list_single_large_pane_t1

0x1a2f,	// (0x00050d83) input_focus_pane_cp02_ParamLimits

0x1a2f,	// (0x00050d83) input_focus_pane_cp02

0x1a42,	// (0x00050d96) wml_selection_box_pane_g1

0x1a4b,	// (0x00050d9f) wml_selection_box_pane_t1_ParamLimits

0x1a4b,	// (0x00050d9f) wml_selection_box_pane_t1

0x1590,	// (0x000508e4) bg_wml_button_pane_ParamLimits

0x1590,	// (0x000508e4) bg_wml_button_pane

0x1a63,	// (0x00050db7) wml_button_pane_g1

0x1a6b,	// (0x00050dbf) wml_button_pane_t1

0x1a63,	// (0x00050db7) wml_button_bg_pane_g1

0x1a7b,	// (0x00050dcf) wml_button_bg_pane_g2

0x1a83,	// (0x00050dd7) wml_button_bg_pane_g3

0x1a8b,	// (0x00050ddf) wml_button_bg_pane_g4

0x1a93,	// (0x00050de7) wml_button_bg_pane_g5

0x1a9b,	// (0x00050def) wml_button_bg_pane_g6

0x1aa3,	// (0x00050df7) wml_button_bg_pane_g7

0x1aab,	// (0x00050dff) wml_button_bg_pane_g8

0x1ab3,	// (0x00050e07) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0005e5ff) wml_button_bg_pane_g

0x44e2,	// (0x00053836) bg_list_pane_cp02

0x1abb,	// (0x00050e0f) mce_header_pane_ParamLimits

0x1abb,	// (0x00050e0f) mce_header_pane

0x1acf,	// (0x00050e23) mce_icon_pane

0x1acf,	// (0x00050e23) mce_image_pane

0x1ad8,	// (0x00050e2c) mce_text_pane_ParamLimits

0x1ad8,	// (0x00050e2c) mce_text_pane

0x44eb,	// (0x0005383f) scroll_pane_cp03

0x44eb,	// (0x0005383f) scroll_pane_cp04

0x1aec,	// (0x00050e40) scroll_pane_cp05_ParamLimits

0x1aec,	// (0x00050e40) scroll_pane_cp05

0x44f5,	// (0x00053849) mce_header_field_pane_ParamLimits

0x44f5,	// (0x00053849) mce_header_field_pane

0x450c,	// (0x00053860) mce_header_field_pane_2_ParamLimits

0x450c,	// (0x00053860) mce_header_field_pane_2

0x4522,	// (0x00053876) mce_header_field_pane_3

0x452a,	// (0x0005387e) list_single_mce_message_pane_ParamLimits

0x452a,	// (0x0005387e) list_single_mce_message_pane

0x453f,	// (0x00053893) list_single_mce_smart_pane_ParamLimits

0x453f,	// (0x00053893) list_single_mce_smart_pane

0x1af8,	// (0x00050e4c) input_focus_pane_cp03

0x1b01,	// (0x00050e55) list_header_data_pane

0x455f,	// (0x000538b3) mce_header_field_pane_t1

0x456d,	// (0x000538c1) list_single_mce_header_pane_ParamLimits

0x456d,	// (0x000538c1) list_single_mce_header_pane

0x1b09,	// (0x00050e5d) list_single_mce_header_pane_t1

0x1b18,	// (0x00050e6c) list_single_mce_message_pane_g1

0x1b21,	// (0x00050e75) list_single_mce_message_pane_t1

0x459f,	// (0x000538f3) bg_cale_heading_pane_cp01_ParamLimits

0x459f,	// (0x000538f3) bg_cale_heading_pane_cp01

0x1b30,	// (0x00050e84) bg_cale_pane_cp02_ParamLimits

0x1b30,	// (0x00050e84) bg_cale_pane_cp02

0x45c2,	// (0x00053916) cale_month_corner_pane

0x45d8,	// (0x0005392c) cale_month_day_heading_pane_ParamLimits

0x45d8,	// (0x0005392c) cale_month_day_heading_pane

0x460b,	// (0x0005395f) cale_month_pane_g1_ParamLimits

0x460b,	// (0x0005395f) cale_month_pane_g1

0x4627,	// (0x0005397b) cale_month_pane_g2_ParamLimits

0x4627,	// (0x0005397b) cale_month_pane_g2

0x4642,	// (0x00053996) cale_month_pane_g3_ParamLimits

0x4642,	// (0x00053996) cale_month_pane_g3

0x466e,	// (0x000539c2) cale_month_pane_g4_ParamLimits

0x466e,	// (0x000539c2) cale_month_pane_g4

0x469a,	// (0x000539ee) cale_month_pane_g5_ParamLimits

0x469a,	// (0x000539ee) cale_month_pane_g5

0x46c6,	// (0x00053a1a) cale_month_pane_g6_ParamLimits

0x46c6,	// (0x00053a1a) cale_month_pane_g6

0x46f2,	// (0x00053a46) cale_month_pane_g7_ParamLimits

0x46f2,	// (0x00053a46) cale_month_pane_g7

0x471e,	// (0x00053a72) cale_month_pane_g8_ParamLimits

0x471e,	// (0x00053a72) cale_month_pane_g8

0x475a,	// (0x00053aae) cale_month_pane_g9_ParamLimits

0x475a,	// (0x00053aae) cale_month_pane_g9

0x4794,	// (0x00053ae8) cale_month_pane_g10_ParamLimits

0x4794,	// (0x00053ae8) cale_month_pane_g10

0x47ce,	// (0x00053b22) cale_month_pane_g11_ParamLimits

0x47ce,	// (0x00053b22) cale_month_pane_g11

0x4808,	// (0x00053b5c) cale_month_pane_g12_ParamLimits

0x4808,	// (0x00053b5c) cale_month_pane_g12

0x4842,	// (0x00053b96) cale_month_pane_g13_ParamLimits

0x4842,	// (0x00053b96) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0005e612) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0005e612) cale_month_pane_g

0x487c,	// (0x00053bd0) cale_month_week_pane

0x488f,	// (0x00053be3) grid_cale_month_pane_ParamLimits

0x488f,	// (0x00053be3) grid_cale_month_pane

0x48bd,	// (0x00053c11) cale_month_day_heading_pane_t1

0x491b,	// (0x00053c6f) cale_month_day_heading_pane_t2

0x4980,	// (0x00053cd4) cale_month_day_heading_pane_t3

0x49e5,	// (0x00053d39) cale_month_day_heading_pane_t4

0x4a4a,	// (0x00053d9e) cale_month_day_heading_pane_t5

0x4aaf,	// (0x00053e03) cale_month_day_heading_pane_t6

0x4b14,	// (0x00053e68) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0005e62d) cale_month_day_heading_pane_t

0x17c1,	// (0x00050b15) bg_cale_side_pane_cp01

0x4b81,	// (0x00053ed5) cale_month_week_pane_t1

0x4b98,	// (0x00053eec) cale_month_week_pane_t2

0x4baf,	// (0x00053f03) cale_month_week_pane_t3

0x4bc6,	// (0x00053f1a) cale_month_week_pane_t4

0x4bdd,	// (0x00053f31) cale_month_week_pane_t5

0x4bf4,	// (0x00053f48) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0005e63c) cale_month_week_pane_t

0x4c0b,	// (0x00053f5f) cell_cale_month_pane_ParamLimits

0x4c0b,	// (0x00053f5f) cell_cale_month_pane

0xac88,	// (0x00059fdc) cell_cale_month_pane_g1

0x4cb9,	// (0x0005400d) cell_cale_month_pane_t1_ParamLimits

0x4cb9,	// (0x0005400d) cell_cale_month_pane_t1

0x17cf,	// (0x00050b23) grid_highlight_pane_cp08

0x16b4,	// (0x00050a08) main_smil_g1

0x4cd5,	// (0x00054029) smil_status_pane

0x1b65,	// (0x00050eb9) smil_text_pane

0xc1c3,	// (0x0005b517) bg_popup_call3_rect_pane_g8

0xc1cb,	// (0x0005b51f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0005e8f5) bg_popup_call3_rect_pane_g

0xc481,	// (0x0005b7d5) smil_status_volume_pane_g1

0x1b6f,	// (0x00050ec3) smil_status_pane_t1

0xec1d,	// (0x0005df71) volume_smil_pane

0x1b86,	// (0x00050eda) list_smil_text_pane

0x4ce6,	// (0x0005403a) scroll_pane_cp011

0x4cf1,	// (0x00054045) smil_text_list_pane_t1_ParamLimits

0x4cf1,	// (0x00054045) smil_text_list_pane_t1

0xac94,	// (0x00059fe8) aid_volume_smil_ParamLimits

0xac94,	// (0x00059fe8) aid_volume_smil

0x16b4,	// (0x00050a08) smil_volume_pane_g1

0x16b4,	// (0x00050a08) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0005e65c) smil_volume_pane_g

0x165f,	// (0x000509b3) listscroll_cale_day_pane

0x1b90,	// (0x00050ee4) bg_cale_pane

0x1ba8,	// (0x00050efc) list_cale_pane

0x1bb9,	// (0x00050f0d) scroll_pane_cp09

0x1bca,	// (0x00050f1e) cale_bg_pane_g1

0x1bd2,	// (0x00050f26) cale_bg_pane_g2

0x1bda,	// (0x00050f2e) cale_bg_pane_g3

0x1be2,	// (0x00050f36) cale_bg_pane_g4

0x1bea,	// (0x00050f3e) cale_bg_pane_g5

0x1bf2,	// (0x00050f46) cale_bg_pane_g6

0x1bfa,	// (0x00050f4e) cale_bg_pane_g7

0x1c02,	// (0x00050f56) cale_bg_pane_g8

0x1c0a,	// (0x00050f5e) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0005e661) cale_bg_pane_g

0x4d2f,	// (0x00054083) list_cale_time_pane_ParamLimits

0x4d2f,	// (0x00054083) list_cale_time_pane

0x1c12,	// (0x00050f66) list_cale_time_pane_g1_ParamLimits

0x1c12,	// (0x00050f66) list_cale_time_pane_g1

0x1c1e,	// (0x00050f72) list_cale_time_pane_g2_ParamLimits

0x1c1e,	// (0x00050f72) list_cale_time_pane_g2

0x4d44,	// (0x00054098) list_cale_time_pane_g3_ParamLimits

0x4d44,	// (0x00054098) list_cale_time_pane_g3

0x4d52,	// (0x000540a6) list_cale_time_pane_g4_ParamLimits

0x4d52,	// (0x000540a6) list_cale_time_pane_g4

0x4d60,	// (0x000540b4) list_cale_time_pane_g5_ParamLimits

0x4d60,	// (0x000540b4) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0005e674) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0005e674) list_cale_time_pane_g

0x1c38,	// (0x00050f8c) list_cale_time_pane_t1_ParamLimits

0x1c38,	// (0x00050f8c) list_cale_time_pane_t1

0x1c60,	// (0x00050fb4) list_cale_time_pane_t2_ParamLimits

0x1c60,	// (0x00050fb4) list_cale_time_pane_t2

0x5064,	// (0x000543b8) aid_blid_cardinal_pane

0x50a2,	// (0x000543f6) compass_pane_t4

0x1c88,	// (0x00050fdc) list_cale_time_pane_t4_ParamLimits

0x1c88,	// (0x00050fdc) list_cale_time_pane_t4

0x50b0,	// (0x00054404) compass_pane_t5

0x50be,	// (0x00054412) compass_pane_t6

0x50cc,	// (0x00054420) compass_pane_t7

0xae40,	// (0x0005a194) navi_pane_cc_t1

0xaff6,	// (0x0005a34a) aid_phob_thumbnail_center_pane

0x568f,	// (0x000549e3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0005e681) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0005e681) list_cale_time_pane_t

0x0f8e,	// (0x000502e2) bg_popup_window_pane_cp02_ParamLimits

0x0f8e,	// (0x000502e2) bg_popup_window_pane_cp02

0x1cb0,	// (0x00051004) heading_pane_cp01_ParamLimits

0x1cb0,	// (0x00051004) heading_pane_cp01

0x1cbc,	// (0x00051010) loc_req_pane_ParamLimits

0x1cbc,	// (0x00051010) loc_req_pane

0x1ccc,	// (0x00051020) loc_type_pane_ParamLimits

0x1ccc,	// (0x00051020) loc_type_pane

0x1cde,	// (0x00051032) loc_type_pane_t1_ParamLimits

0x1cde,	// (0x00051032) loc_type_pane_t1

0x1cf0,	// (0x00051044) loc_type_pane_t2_ParamLimits

0x1cf0,	// (0x00051044) loc_type_pane_t2

0x1d02,	// (0x00051056) loc_type_pane_t3_ParamLimits

0x1d02,	// (0x00051056) loc_type_pane_t3

0x0002,

0xf334,	// (0x0005e688) loc_type_pane_t_ParamLimits

0xf334,	// (0x0005e688) loc_type_pane_t

0x1d14,	// (0x00051068) list_loc_req_pane

0x1d1e,	// (0x00051072) scroll_pane_cp012

0x4d6c,	// (0x000540c0) list_single_loc_request_popup_menu_pane_ParamLimits

0x4d6c,	// (0x000540c0) list_single_loc_request_popup_menu_pane

0x1d27,	// (0x0005107b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1d27,	// (0x0005107b) list_single_loc_request_popup_menu_pane_g1

0x1d33,	// (0x00051087) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1d33,	// (0x00051087) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0005e68f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0005e68f) list_single_loc_request_popup_menu_pane_g

0x1d3f,	// (0x00051093) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1d3f,	// (0x00051093) list_single_loc_request_popup_menu_pane_t1

0x1590,	// (0x000508e4) bg_popup_window_pane_cp03_ParamLimits

0x1590,	// (0x000508e4) bg_popup_window_pane_cp03

0x2053,	// (0x000513a7) heading_loc_req_pane_ParamLimits

0x2053,	// (0x000513a7) heading_loc_req_pane

0x4d79,	// (0x000540cd) popup_dyc_status_message_window_g1_ParamLimits

0x4d79,	// (0x000540cd) popup_dyc_status_message_window_g1

0x4d8d,	// (0x000540e1) popup_dyc_status_message_window_t1_ParamLimits

0x4d8d,	// (0x000540e1) popup_dyc_status_message_window_t1

0x4da2,	// (0x000540f6) popup_dyc_status_message_window_t2_ParamLimits

0x4da2,	// (0x000540f6) popup_dyc_status_message_window_t2

0x4db7,	// (0x0005410b) popup_dyc_status_message_window_t3_ParamLimits

0x4db7,	// (0x0005410b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0005e694) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0005e694) popup_dyc_status_message_window_t

0x1335,	// (0x00050689) bg_heading_pane_cp01

0x1d55,	// (0x000510a9) heading_loc_req_pane_g1

0x1d5d,	// (0x000510b1) heading_loc_req_pane_g2

0x1d65,	// (0x000510b9) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0005e69b) heading_loc_req_pane_g

0x1d6d,	// (0x000510c1) heading_loc_req_pane_t1

0x1d7c,	// (0x000510d0) bg_popup_sub_pane_cp01_ParamLimits

0x1d7c,	// (0x000510d0) bg_popup_sub_pane_cp01

0x1d8a,	// (0x000510de) popup_cale_events_window_g1_ParamLimits

0x1d8a,	// (0x000510de) popup_cale_events_window_g1

0x1daa,	// (0x000510fe) popup_cale_events_window_g2_ParamLimits

0x1daa,	// (0x000510fe) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0005e6cf) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0005e6cf) popup_cale_events_window_g

0x1dca,	// (0x0005111e) popup_cale_events_window_t1_ParamLimits

0x1dca,	// (0x0005111e) popup_cale_events_window_t1

0x1ddc,	// (0x00051130) popup_cale_events_window_t2_ParamLimits

0x1ddc,	// (0x00051130) popup_cale_events_window_t2

0x1e1a,	// (0x0005116e) popup_cale_events_window_t3_ParamLimits

0x1e1a,	// (0x0005116e) popup_cale_events_window_t3

0x1e54,	// (0x000511a8) popup_cale_events_window_t4_ParamLimits

0x1e54,	// (0x000511a8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0005e6d4) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0005e6d4) popup_cale_events_window_t

0x4e47,	// (0x0005419b) call_type_pane

0x4e57,	// (0x000541ab) popup_call_status_window_g1

0x4e6b,	// (0x000541bf) popup_call_status_window_g2

0x4e7f,	// (0x000541d3) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0005e6dd) popup_call_status_window_g

0x1e8a,	// (0x000511de) call_type_pane_g1

0x1e93,	// (0x000511e7) call_type_pane_g2

0x0001,

0xf390,	// (0x0005e6e4) call_type_pane_g

0x1335,	// (0x00050689) bg_popup_sub_pane_cp02

0x1e9c,	// (0x000511f0) listscroll_popup_wml_pane

0x1ea4,	// (0x000511f8) list_wml_pane

0x1eae,	// (0x00051202) scroll_pane_cp013

0x4e8f,	// (0x000541e3) list_single_graphic_popup_wml_pane_ParamLimits

0x4e8f,	// (0x000541e3) list_single_graphic_popup_wml_pane

0x16b4,	// (0x00050a08) list_single_graphic_popup_wml_pane_g1

0x1eb7,	// (0x0005120b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0005e6e9) list_single_graphic_popup_wml_pane_g

0x1ebf,	// (0x00051213) list_single_graphic_popup_wml_pane_t1

0x1ed5,	// (0x00051229) aid_call_pane

0x1588,	// (0x000508dc) popup_clock_analogue_window_g1

0x1588,	// (0x000508dc) popup_clock_analogue_window_g2

0xad50,	// (0x0005a0a4) popup_clock_analogue_window_g3

0xad50,	// (0x0005a0a4) popup_clock_analogue_window_g4

0x16b4,	// (0x00050a08) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0005e6ee) popup_clock_analogue_window_g

0xad58,	// (0x0005a0ac) popup_clock_analogue_window_t1

0xad66,	// (0x0005a0ba) clock_digital_number_pane_ParamLimits

0xad66,	// (0x0005a0ba) clock_digital_number_pane

0xad72,	// (0x0005a0c6) clock_digital_number_pane_cp02_ParamLimits

0xad72,	// (0x0005a0c6) clock_digital_number_pane_cp02

0xad7e,	// (0x0005a0d2) clock_digital_number_pane_cp03_ParamLimits

0xad7e,	// (0x0005a0d2) clock_digital_number_pane_cp03

0xad8a,	// (0x0005a0de) clock_digital_number_pane_cp04_ParamLimits

0xad8a,	// (0x0005a0de) clock_digital_number_pane_cp04

0xad96,	// (0x0005a0ea) clock_digital_separator_pane_ParamLimits

0xad96,	// (0x0005a0ea) clock_digital_separator_pane

0xada2,	// (0x0005a0f6) popup_clock_digital_window_t1

0x16b4,	// (0x00050a08) clock_digital_number_pane_g1

0x16b4,	// (0x00050a08) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0005e65c) clock_digital_number_pane_g

0x16b4,	// (0x00050a08) clock_digital_separator_pane_g1

0x16b4,	// (0x00050a08) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0005e65c) clock_digital_separator_pane_g

0x1335,	// (0x00050689) bg_popup_window_pane_cp04

0x1edd,	// (0x00051231) heading_pane_cp03

0x1ee5,	// (0x00051239) listscroll_popup_gms_pane

0x1eed,	// (0x00051241) grid_large_graphic_popup_pane

0x1ef7,	// (0x0005124b) listscroll_popup_gms_pane_g1

0x1eff,	// (0x00051253) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0005e6f9) listscroll_popup_gms_pane_g

0x19d3,	// (0x00050d27) scroll_pane_cp014

0x4ea2,	// (0x000541f6) cell_large_graphic_popup_pane_ParamLimits

0x4ea2,	// (0x000541f6) cell_large_graphic_popup_pane

0x4eb8,	// (0x0005420c) cell_large_graphic_popup_pane_g1_ParamLimits

0x4eb8,	// (0x0005420c) cell_large_graphic_popup_pane_g1

0x1f07,	// (0x0005125b) cell_large_graphic_popup_pane_g2_ParamLimits

0x1f07,	// (0x0005125b) cell_large_graphic_popup_pane_g2

0x1f13,	// (0x00051267) cell_large_graphic_popup_pane_g3_ParamLimits

0x1f13,	// (0x00051267) cell_large_graphic_popup_pane_g3

0x1f20,	// (0x00051274) cell_large_graphic_popup_pane_g4_ParamLimits

0x1f20,	// (0x00051274) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0005e6fe) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0005e6fe) cell_large_graphic_popup_pane_g

0x1f30,	// (0x00051284) grid_highlight_pane_cp010

0x16b4,	// (0x00050a08) bg_popup_call_pane_g1

0x1f3a,	// (0x0005128e) list_single_graphic_popup_conf_pane_ParamLimits

0x1f3a,	// (0x0005128e) list_single_graphic_popup_conf_pane

0x1f4d,	// (0x000512a1) list_highlight_pane_cp01

0x1f56,	// (0x000512aa) list_single_graphic_popup_conf_pane_g1

0x1f5e,	// (0x000512b2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0005e707) list_single_graphic_popup_conf_pane_g

0x1f66,	// (0x000512ba) list_single_graphic_popup_conf_pane_t1

0x1f74,	// (0x000512c8) linegrid_cams_pane_g1

0x4ec4,	// (0x00054218) linegrid_cams_pane_g2

0x176d,	// (0x00050ac1) linegrid_cams_pane_g3

0x1f7d,	// (0x000512d1) linegrid_cams_pane_g4

0x4ecd,	// (0x00054221) linegrid_cams_pane_g5

0x4ed6,	// (0x0005422a) linegrid_cams_pane_g6

0x1802,	// (0x00050b56) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0005e70c) linegrid_cams_pane_g

0x1f86,	// (0x000512da) popup_clock_analogue_window

0x1f86,	// (0x000512da) popup_clock_digital_window

0x1335,	// (0x00050689) popup_phob_thumbnail_window

0x16b4,	// (0x00050a08) call_video_uplink_pane_g1

0x1f8f,	// (0x000512e3) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0005e71b) call_video_uplink_pane_g

0x17cf,	// (0x00050b23) video_uplink_pane

0x1f97,	// (0x000512eb) mce_image_pane_g1

0x4edf,	// (0x00054233) mce_image_pane_g2

0x4ee7,	// (0x0005423b) mce_image_pane_g3

0x4eef,	// (0x00054243) mce_image_pane_g4

0x4ef7,	// (0x0005424b) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0005e720) mce_image_pane_g

0x1fa1,	// (0x000512f5) control_top_pane_stacon_cp01_ParamLimits

0x1fa1,	// (0x000512f5) control_top_pane_stacon_cp01

0x1fb1,	// (0x00051305) uni_indicator_pane_stacon_cp01_ParamLimits

0x1fb1,	// (0x00051305) uni_indicator_pane_stacon_cp01

0x1fc2,	// (0x00051316) bg_popup_sub_pane_cp03

0x1fcc,	// (0x00051320) chi_dic_find_pane

0x4eff,	// (0x00054253) listscroll_chi_dic_pane

0x1fd4,	// (0x00051328) main_pane_chidic_g1

0x1fdc,	// (0x00051330) chi_dic_find_pane_t1

0x1fea,	// (0x0005133e) find_chidic_pane

0x1ff3,	// (0x00051347) chi_dic_list_pane_ParamLimits

0x1ff3,	// (0x00051347) chi_dic_list_pane

0x2004,	// (0x00051358) scroll_pane_cp020

0x200c,	// (0x00051360) find_chidic_pane_t1

0x1335,	// (0x00050689) input_focus_pane_cp06

0x4f13,	// (0x00054267) list_chi_dic_pane_ParamLimits

0x4f13,	// (0x00054267) list_chi_dic_pane

0x4f25,	// (0x00054279) list_chi_dic_pane_t1_ParamLimits

0x4f25,	// (0x00054279) list_chi_dic_pane_t1

0x1335,	// (0x00050689) list_highlight_pane_cp020

0x201b,	// (0x0005136f) bg_cale_heading_pane_g1

0x4f38,	// (0x0005428c) bg_cale_heading_pane_g2

0x4f40,	// (0x00054294) bg_cale_heading_pane_g3

0x4f48,	// (0x0005429c) bg_cale_heading_pane_g4

0x4f52,	// (0x000542a6) bg_cale_heading_pane_g5

0x4f5c,	// (0x000542b0) bg_cale_heading_pane_g6

0x4f64,	// (0x000542b8) bg_cale_heading_pane_g7

0x4f6c,	// (0x000542c0) bg_cale_heading_pane_g8

0x4f76,	// (0x000542ca) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0005e72b) bg_cale_heading_pane_g

0x201b,	// (0x0005136f) bg_cale_side_pane_g1

0x4f80,	// (0x000542d4) bg_cale_side_pane_g2

0x4f88,	// (0x000542dc) bg_cale_side_pane_g3

0x4f90,	// (0x000542e4) bg_cale_side_pane_g4

0x4f98,	// (0x000542ec) bg_cale_side_pane_g5

0x4fa0,	// (0x000542f4) bg_cale_side_pane_g6

0x4fa8,	// (0x000542fc) bg_cale_side_pane_g7

0x4fb0,	// (0x00054304) bg_cale_side_pane_g8

0x4fb8,	// (0x0005430c) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0005e73e) bg_cale_side_pane_g

0x4fc0,	// (0x00054314) popup_call_status_window_ParamLimits

0x4fc0,	// (0x00054314) popup_call_status_window

0x2023,	// (0x00051377) stacon_top_pane

0x202b,	// (0x0005137f) status_pane_ParamLimits

0x202b,	// (0x0005137f) status_pane

0xadbf,	// (0x0005a113) status_small_pane

0xadc7,	// (0x0005a11b) control_pane

0x1335,	// (0x00050689) stacon_bottom_pane

0xadcf,	// (0x0005a123) list_single_mce_smart_pane_t1_ParamLimits

0xadcf,	// (0x0005a123) list_single_mce_smart_pane_t1

0xade2,	// (0x0005a136) list_single_mce_smart_pane_t2_ParamLimits

0xade2,	// (0x0005a136) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0005e751) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0005e751) list_single_mce_smart_pane_t

0x5007,	// (0x0005435b) compass_pane

0x5010,	// (0x00054364) main_location2_pane_t1

0x5026,	// (0x0005437a) main_location2_pane_t2

0x503c,	// (0x00054390) main_location2_pane_t3

0x0003,

0xf402,	// (0x0005e756) main_location2_pane_t

0xae0a,	// (0x0005a15e) compass_pane_g1_ParamLimits

0xae0a,	// (0x0005a15e) compass_pane_g1

0x5084,	// (0x000543d8) compass_pane_t1

0x5093,	// (0x000543e7) compass_pane_t2

0x0005,

0xf40b,	// (0x0005e75f) compass_pane_t

0x50da,	// (0x0005442e) text_secondary_cp61

0xae37,	// (0x0005a18b) navi_pane_cams_g5

0xae78,	// (0x0005a1cc) navi_pane_im_t1

0xae86,	// (0x0005a1da) navi_pane_mp_g1_ParamLimits

0xae86,	// (0x0005a1da) navi_pane_mp_g1

0xae9a,	// (0x0005a1ee) navi_pane_mp_g2_ParamLimits

0xae9a,	// (0x0005a1ee) navi_pane_mp_g2

0xaea6,	// (0x0005a1fa) navi_pane_mp_g3_ParamLimits

0xaea6,	// (0x0005a1fa) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0005e773) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0005e773) navi_pane_mp_g

0xaeb2,	// (0x0005a206) navi_pane_mp_t1

0xaec0,	// (0x0005a214) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0005e77a) navi_pane_mp_t

0xaf2d,	// (0x0005a281) navi_pane_vt_g1

0xaeb2,	// (0x0005a206) navi_pane_vt_t1

0xaf35,	// (0x0005a289) navi_slider_pane

0xaf3d,	// (0x0005a291) zooming_pane

0xaf45,	// (0x0005a299) navi_slider_pane_g1

0xaf4e,	// (0x0005a2a2) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0005e781) navi_slider_pane_g

0xaf7b,	// (0x0005a2cf) aid_levels_zoom

0xaf83,	// (0x0005a2d7) zooming_pane_g1

0xaf8b,	// (0x0005a2df) zooming_pane_g2

0xaf8b,	// (0x0005a2df) zooming_pane_g3

0x0002,

0xf43c,	// (0x0005e790) zooming_pane_g

0xaf93,	// (0x0005a2e7) level_10_zoom

0xaf9c,	// (0x0005a2f0) level_11_zoom

0xafa5,	// (0x0005a2f9) level_1_zoom

0xafae,	// (0x0005a302) level_2_zoom

0xafb7,	// (0x0005a30b) level_3_zoom

0xafc0,	// (0x0005a314) level_4_zoom

0xafc9,	// (0x0005a31d) level_5_zoom

0xafd2,	// (0x0005a326) level_6_zoom

0xafdb,	// (0x0005a32f) level_7_zoom

0xafe4,	// (0x0005a338) level_8_zoom

0xafed,	// (0x0005a341) level_9_zoom

0xaffe,	// (0x0005a352) popup_phob_thumbnail_window_g1

0xb006,	// (0x0005a35a) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0005e797) popup_phob_thumbnail_window_g

0xc365,	// (0x0005b6b9) level_1_location

0xc36d,	// (0x0005b6c1) level_2_location

0xc375,	// (0x0005b6c9) level_3_location

0xc37d,	// (0x0005b6d1) level_4_location

0xaf3d,	// (0x0005a291) level_5_location

0x5165,	// (0x000544b9) mce_icon_pane_g1

0x516d,	// (0x000544c1) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0005e79c) mce_icon_pane_g

0x5175,	// (0x000544c9) main_mup_pane_g1_ParamLimits

0x5175,	// (0x000544c9) main_mup_pane_g1

0x518b,	// (0x000544df) main_mup_pane_g2_ParamLimits

0x518b,	// (0x000544df) main_mup_pane_g2

0x51a3,	// (0x000544f7) main_mup_pane_g3_ParamLimits

0x51a3,	// (0x000544f7) main_mup_pane_g3

0x51bb,	// (0x0005450f) main_mup_pane_g4_ParamLimits

0x51bb,	// (0x0005450f) main_mup_pane_g4

0x51d3,	// (0x00054527) main_mup_pane_g5_ParamLimits

0x51d3,	// (0x00054527) main_mup_pane_g5

0x51ed,	// (0x00054541) main_mup_pane_g6_ParamLimits

0x51ed,	// (0x00054541) main_mup_pane_g6

0x5205,	// (0x00054559) main_mup_pane_g7_ParamLimits

0x5205,	// (0x00054559) main_mup_pane_g7

0x521d,	// (0x00054571) main_mup_pane_g8_ParamLimits

0x521d,	// (0x00054571) main_mup_pane_g8

0x5235,	// (0x00054589) main_mup_pane_g9_ParamLimits

0x5235,	// (0x00054589) main_mup_pane_g9

0x5249,	// (0x0005459d) main_mup_pane_g10_ParamLimits

0x5249,	// (0x0005459d) main_mup_pane_g10

0x525d,	// (0x000545b1) main_mup_pane_g11_ParamLimits

0x525d,	// (0x000545b1) main_mup_pane_g11

0x526f,	// (0x000545c3) main_mup_pane_g12_ParamLimits

0x526f,	// (0x000545c3) main_mup_pane_g12

0x5283,	// (0x000545d7) main_mup_pane_g13_ParamLimits

0x5283,	// (0x000545d7) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0005e7a1) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0005e7a1) main_mup_pane_g

0x5295,	// (0x000545e9) main_mup_pane_t1_ParamLimits

0x5295,	// (0x000545e9) main_mup_pane_t1

0x52af,	// (0x00054603) main_mup_pane_t2_ParamLimits

0x52af,	// (0x00054603) main_mup_pane_t2

0x52c7,	// (0x0005461b) main_mup_pane_t3_ParamLimits

0x52c7,	// (0x0005461b) main_mup_pane_t3

0x52df,	// (0x00054633) main_mup_pane_t4_ParamLimits

0x52df,	// (0x00054633) main_mup_pane_t4

0x52fd,	// (0x00054651) main_mup_pane_t5_ParamLimits

0x52fd,	// (0x00054651) main_mup_pane_t5

0x5312,	// (0x00054666) main_mup_pane_t6_ParamLimits

0x5312,	// (0x00054666) main_mup_pane_t6

0x0005,

0xf468,	// (0x0005e7bc) main_mup_pane_t_ParamLimits

0xf468,	// (0x0005e7bc) main_mup_pane_t

0x5324,	// (0x00054678) mup_progress_pane_ParamLimits

0x5324,	// (0x00054678) mup_progress_pane

0x5330,	// (0x00054684) mup_visualizer_pane_ParamLimits

0x5330,	// (0x00054684) mup_visualizer_pane

0x5358,	// (0x000546ac) mup_volume_pane_ParamLimits

0x5358,	// (0x000546ac) mup_volume_pane

0xb00e,	// (0x0005a362) mup_visualizer_pane_g1_ParamLimits

0xb00e,	// (0x0005a362) mup_visualizer_pane_g1

0xb00e,	// (0x0005a362) mup_visualizer_pane_g2_ParamLimits

0xb00e,	// (0x0005a362) mup_visualizer_pane_g2

0xae0a,	// (0x0005a15e) mup_visualizer_pane_g3_ParamLimits

0xae0a,	// (0x0005a15e) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0005e7c9) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0005e7c9) mup_visualizer_pane_g

0x16b4,	// (0x00050a08) mup_volume_pane_g1

0xb024,	// (0x0005a378) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0005e7d0) mup_volume_pane_g

0x16b4,	// (0x00050a08) mup_progress_pane_g1

0xb02d,	// (0x0005a381) mup_progress_pane_g2

0xb036,	// (0x0005a38a) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0005e7d5) mup_progress_pane_g

0x1335,	// (0x00050689) bg_popup_window_pane_cp05

0xb03f,	// (0x0005a393) heading_pane_cp02_ParamLimits

0xb03f,	// (0x0005a393) heading_pane_cp02

0xb059,	// (0x0005a3ad) list_popup_blid_pane

0xb061,	// (0x0005a3b5) list_blid_sat_info_pane_ParamLimits

0xb061,	// (0x0005a3b5) list_blid_sat_info_pane

0xb074,	// (0x0005a3c8) list_blid_sat_info_pane_g1

0xb07c,	// (0x0005a3d0) list_blid_sat_info_pane_t1

0x5448,	// (0x0005479c) mup_equalizer_pane_ParamLimits

0x5448,	// (0x0005479c) mup_equalizer_pane

0x5461,	// (0x000547b5) mup_equalizer_pane_cp1_ParamLimits

0x5461,	// (0x000547b5) mup_equalizer_pane_cp1

0x547a,	// (0x000547ce) mup_equalizer_pane_cp2_ParamLimits

0x547a,	// (0x000547ce) mup_equalizer_pane_cp2

0x5493,	// (0x000547e7) mup_equalizer_pane_cp3_ParamLimits

0x5493,	// (0x000547e7) mup_equalizer_pane_cp3

0x54ac,	// (0x00054800) mup_equalizer_pane_cp4_ParamLimits

0x54ac,	// (0x00054800) mup_equalizer_pane_cp4

0x54c5,	// (0x00054819) mup_equalizer_pane_cp5

0x54d7,	// (0x0005482b) mup_equalizer_pane_cp6

0x54e9,	// (0x0005483d) mup_equalizer_pane_cp7

0xc243,	// (0x0005b597) bg_popup_call_poc_act_pane_g9

0xc24b,	// (0x0005b59f) bg_popup_call_poc_act_pane_g10

0xc253,	// (0x0005b5a7) bg_popup_call_poc_act_pane_g11

0x000a,

0x1590,	// (0x000508e4) mup_scale_pane

0x16b4,	// (0x00050a08) mup_scale_pane_g1

0xb08a,	// (0x0005a3de) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0005e7f1) mup_scale_pane_g

0xb0ae,	// (0x0005a402) msg_data_pane

0xb0b6,	// (0x0005a40a) scroll_pane_cp017

0x550f,	// (0x00054863) bg_list_pane_cp04_ParamLimits

0x550f,	// (0x00054863) bg_list_pane_cp04

0xb0be,	// (0x0005a412) msg_data_pane_g1

0x4edf,	// (0x00054233) msg_data_pane_g2

0x4ee7,	// (0x0005423b) msg_data_pane_g3

0x552f,	// (0x00054883) msg_data_pane_g4

0x4ef7,	// (0x0005424b) msg_data_pane_g5

0x5165,	// (0x000544b9) msg_data_pane_g6

0x5537,	// (0x0005488b) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0005e800) msg_data_pane_g

0x553f,	// (0x00054893) msg_text_pane_ParamLimits

0x553f,	// (0x00054893) msg_text_pane

0x5564,	// (0x000548b8) qrid_highlight_pane_cp011_ParamLimits

0x5564,	// (0x000548b8) qrid_highlight_pane_cp011

0x1335,	// (0x00050689) msg_body_pane

0x1335,	// (0x00050689) msg_header_pane

0xb0cf,	// (0x0005a423) input_focus_pane_cp07

0x5586,	// (0x000548da) msg_header_pane_t1_ParamLimits

0x5586,	// (0x000548da) msg_header_pane_t1

0xb0e4,	// (0x0005a438) msg_header_pane_t2_ParamLimits

0xb0e4,	// (0x0005a438) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0005e814) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0005e814) msg_header_pane_t

0xb0f6,	// (0x0005a44a) msg_body_pane_g1

0x5598,	// (0x000548ec) msg_body_pane_t1_ParamLimits

0x5598,	// (0x000548ec) msg_body_pane_t1

0xb0fe,	// (0x0005a452) msg_body_pane_t2_ParamLimits

0xb0fe,	// (0x0005a452) msg_body_pane_t2

0xb110,	// (0x0005a464) msg_body_pane_t3_ParamLimits

0xb110,	// (0x0005a464) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0005e819) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0005e819) msg_body_pane_t

0x55f9,	// (0x0005494d) main_viewer_pane_g1_ParamLimits

0x55f9,	// (0x0005494d) main_viewer_pane_g1

0x5605,	// (0x00054959) main_viewer_pane_g2_ParamLimits

0x5605,	// (0x00054959) main_viewer_pane_g2

0x5611,	// (0x00054965) main_viewer_pane_g3_ParamLimits

0x5611,	// (0x00054965) main_viewer_pane_g3

0x5620,	// (0x00054974) main_viewer_pane_g4_ParamLimits

0x5620,	// (0x00054974) main_viewer_pane_g4

0xebe6,	// (0x0005df3a) main_viewer_pane_g5_ParamLimits

0xebe6,	// (0x0005df3a) main_viewer_pane_g5

0xebe6,	// (0x0005df3a) main_viewer_pane_g7_ParamLimits

0xebe6,	// (0x0005df3a) main_viewer_pane_g7

0xebf8,	// (0x0005df4c) main_viewer_pane_g8_ParamLimits

0xebf8,	// (0x0005df4c) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0005e829) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0005e829) main_viewer_pane_g

0xb122,	// (0x0005a476) viewer_content_pane_ParamLimits

0xb122,	// (0x0005a476) viewer_content_pane

0x5654,	// (0x000549a8) main_postcard_pane_g1_ParamLimits

0x5654,	// (0x000549a8) main_postcard_pane_g1

0x5668,	// (0x000549bc) main_postcard_pane_g2_ParamLimits

0x5668,	// (0x000549bc) main_postcard_pane_g2

0x567c,	// (0x000549d0) main_postcard_pane_g3_ParamLimits

0x567c,	// (0x000549d0) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0005e83a) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0005e83a) main_postcard_pane_g

0x568f,	// (0x000549e3) main_postcard_pane_g4

0xc494,	// (0x0005b7e8) smil_status_volume_pane_g2

0x56ca,	// (0x00054a1e) postcard_pane_ParamLimits

0x56ca,	// (0x00054a1e) postcard_pane

0xb130,	// (0x0005a484) postcard_pane_g1_ParamLimits

0xb130,	// (0x0005a484) postcard_pane_g1

0x570a,	// (0x00054a5e) postcard_pane_g2_ParamLimits

0x570a,	// (0x00054a5e) postcard_pane_g2

0x5716,	// (0x00054a6a) postcard_pane_g3_ParamLimits

0x5716,	// (0x00054a6a) postcard_pane_g3

0xb13e,	// (0x0005a492) postcard_pane_g4_ParamLimits

0xb13e,	// (0x0005a492) postcard_pane_g4

0x5722,	// (0x00054a76) postcard_pane_g5_ParamLimits

0x5722,	// (0x00054a76) postcard_pane_g5

0x5737,	// (0x00054a8b) postcard_pane_g6_ParamLimits

0x5737,	// (0x00054a8b) postcard_pane_g6

0xb130,	// (0x0005a484) postcard_pane_g7_ParamLimits

0xb130,	// (0x0005a484) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0005e847) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0005e847) postcard_pane_g

0x574b,	// (0x00054a9f) main_mp2_pane_g1_ParamLimits

0x574b,	// (0x00054a9f) main_mp2_pane_g1

0x5757,	// (0x00054aab) main_mp2_pane_g2_ParamLimits

0x5757,	// (0x00054aab) main_mp2_pane_g2

0x5763,	// (0x00054ab7) main_mp2_pane_g3_ParamLimits

0x5763,	// (0x00054ab7) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0005e856) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0005e856) main_mp2_pane_g

0x576f,	// (0x00054ac3) main_mp2_pane_t1_ParamLimits

0x576f,	// (0x00054ac3) main_mp2_pane_t1

0x5784,	// (0x00054ad8) main_mp2_pane_t2_ParamLimits

0x5784,	// (0x00054ad8) main_mp2_pane_t2

0x5796,	// (0x00054aea) main_mp2_pane_t3_ParamLimits

0x5796,	// (0x00054aea) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0005e85d) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0005e85d) main_mp2_pane_t

0xb14c,	// (0x0005a4a0) pec_content_pane_ParamLimits

0xb14c,	// (0x0005a4a0) pec_content_pane

0x19d3,	// (0x00050d27) scroll_pane_cp015

0xb15e,	// (0x0005a4b2) pec_attribute_pane_ParamLimits

0xb15e,	// (0x0005a4b2) pec_attribute_pane

0x57a8,	// (0x00054afc) pec_content_pane_g1_ParamLimits

0x57a8,	// (0x00054afc) pec_content_pane_g1

0xb16e,	// (0x0005a4c2) pec_content_pane_t1_ParamLimits

0xb16e,	// (0x0005a4c2) pec_content_pane_t1

0xb180,	// (0x0005a4d4) pec_content_pane_t2_ParamLimits

0xb180,	// (0x0005a4d4) pec_content_pane_t2

0x0001,

0xf510,	// (0x0005e864) pec_content_pane_t_ParamLimits

0xf510,	// (0x0005e864) pec_content_pane_t

0x57b4,	// (0x00054b08) list_single_graphic_pane_cp01_ParamLimits

0x57b4,	// (0x00054b08) list_single_graphic_pane_cp01

0x1590,	// (0x000508e4) bg_popup_sub_pane_cp04

0xb192,	// (0x0005a4e6) popup_mup_playback_window_g1

0xb19e,	// (0x0005a4f2) popup_mup_playback_window_t1

0xb1b3,	// (0x0005a507) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0005e869) popup_mup_playback_window_t

0xb1ea,	// (0x0005a53e) main_image_pane_g1_ParamLimits

0xb1ea,	// (0x0005a53e) main_image_pane_g1

0xb22d,	// (0x0005a581) scroll_pane_cp018_ParamLimits

0xb22d,	// (0x0005a581) scroll_pane_cp018

0xb245,	// (0x0005a599) scroll_pane_cp016_ParamLimits

0xb245,	// (0x0005a599) scroll_pane_cp016

0x587f,	// (0x00054bd3) smil2_image_pane_ParamLimits

0x587f,	// (0x00054bd3) smil2_image_pane

0x58a7,	// (0x00054bfb) smil2_root_pane_ParamLimits

0x58a7,	// (0x00054bfb) smil2_root_pane

0x58df,	// (0x00054c33) smil2_text_pane_ParamLimits

0x58df,	// (0x00054c33) smil2_text_pane

0x1335,	// (0x00050689) bg_list_pane_cp06

0xb281,	// (0x0005a5d5) grid_radio_pane

0x1335,	// (0x00050689) bg_popup_window_pane_cp06

0xb289,	// (0x0005a5dd) main_fmradio_pane_t1

0x1edd,	// (0x00051231) heading_pane_cp04

0xb297,	// (0x0005a5eb) main_fmradio_pane_t2

0xc29b,	// (0x0005b5ef) popup_cale_lunar_info_window_g1

0xb2a5,	// (0x0005a5f9) main_fmradio_pane_t3

0xc2a3,	// (0x0005b5f7) popup_cale_lunar_info_window_g2

0xb2b3,	// (0x0005a607) main_fmradio_pane_t4

0x0001,

0xb2c1,	// (0x0005a615) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0005e957) popup_cale_lunar_info_window_g

0xf52a,	// (0x0005e87e) main_fmradio_pane_t

0xb2cf,	// (0x0005a623) wait_bar_pane_cp03

0xb2d7,	// (0x0005a62b) cell_fmradio_pane_ParamLimits

0xb2d7,	// (0x0005a62b) cell_fmradio_pane

0xb130,	// (0x0005a484) cell_fmradio_pane_g1_ParamLimits

0xb130,	// (0x0005a484) cell_fmradio_pane_g1

0x1335,	// (0x00050689) grid_highlight_pane_cp011

0xb2ea,	// (0x0005a63e) poc_content_pane_ParamLimits

0xb2ea,	// (0x0005a63e) poc_content_pane

0xb2fd,	// (0x0005a651) scroll_pane_cp019

0x594b,	// (0x00054c9f) popup_call_poc_act_window_ParamLimits

0x594b,	// (0x00054c9f) popup_call_poc_act_window

0x596b,	// (0x00054cbf) popup_call_poc_inact_window_ParamLimits

0x596b,	// (0x00054cbf) popup_call_poc_inact_window

0xf5c7,	// (0x0005e91b) bg_popup_call_poc_act_pane_g

0xc25b,	// (0x0005b5af) bg_popup_call_poc_inact_pane_g1

0xc263,	// (0x0005b5b7) bg_popup_call_poc_inact_pane_g2

0xb305,	// (0x0005a659) popup_call_poc_act_window_g2

0xc26b,	// (0x0005b5bf) bg_popup_call_poc_inact_pane_g3

0xc1eb,	// (0x0005b53f) bg_popup_call_poc_inact_pane_g4

0xc273,	// (0x0005b5c7) bg_popup_call_poc_inact_pane_g5

0xb30d,	// (0x0005a661) popup_call_poc_act_window_t1_ParamLimits

0xb30d,	// (0x0005a661) popup_call_poc_act_window_t1

0xb335,	// (0x0005a689) popup_call_poc_act_window_t2_ParamLimits

0xb335,	// (0x0005a689) popup_call_poc_act_window_t2

0xb35d,	// (0x0005a6b1) popup_call_poc_act_window_t3_ParamLimits

0xb35d,	// (0x0005a6b1) popup_call_poc_act_window_t3

0xb385,	// (0x0005a6d9) popup_call_poc_act_window_t4_ParamLimits

0xb385,	// (0x0005a6d9) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0005e889) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0005e889) popup_call_poc_act_window_t

0xc27b,	// (0x0005b5cf) bg_popup_call_poc_inact_pane_g6

0xc283,	// (0x0005b5d7) bg_popup_call_poc_inact_pane_g7

0xc28b,	// (0x0005b5df) bg_popup_call_poc_inact_pane_g8

0xb397,	// (0x0005a6eb) popup_call_poc_inact_window_g2

0xc293,	// (0x0005b5e7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x0005e932) bg_popup_call_poc_inact_pane_g

0xb39f,	// (0x0005a6f3) popup_call_poc_inact_window_t1_ParamLimits

0xb39f,	// (0x0005a6f3) popup_call_poc_inact_window_t1

0xb3b4,	// (0x0005a708) popup_call_poc_inact_window_t2_ParamLimits

0xb3b4,	// (0x0005a708) popup_call_poc_inact_window_t2

0xb3c9,	// (0x0005a71d) popup_call_poc_inact_window_t3_ParamLimits

0xb3c9,	// (0x0005a71d) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0005e892) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0005e892) popup_call_poc_inact_window_t

0xc407,	// (0x0005b75b) context_pane_ParamLimits

0x607d,	// (0x000553d1) signal_pane_ParamLimits

0xaf3d,	// (0x0005a291) main_call2_pane

0xc3f5,	// (0x0005b749) popup_phob_thumbnail2_window_ParamLimits

0xc3f5,	// (0x0005b749) popup_phob_thumbnail2_window

0xebce,	// (0x0005df22) aid_hotspot_pointer_arrow_pane

0xebd6,	// (0x0005df2a) aid_hotspot_pointer_hand_pane

0x5c40,	// (0x00054f94) phob_pre_status_pane_g5

0x3eda,	// (0x0005322e) cams_zoom_pane_ParamLimits

0x3ee9,	// (0x0005323d) image_vga_pane_ParamLimits

0x3f01,	// (0x00053255) main_camera_pane_g1_ParamLimits

0x3f11,	// (0x00053265) main_camera_pane_g2_ParamLimits

0x3f21,	// (0x00053275) main_camera_pane_g3_ParamLimits

0x3f31,	// (0x00053285) main_camera_pane_g4_ParamLimits

0x3f41,	// (0x00053295) main_camera_pane_g5_ParamLimits

0x3f51,	// (0x000532a5) main_camera_pane_g6_ParamLimits

0x3f61,	// (0x000532b5) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0005e591) main_camera_pane_g_ParamLimits

0x3f71,	// (0x000532c5) main_camera_pane_t1_ParamLimits

0x3f87,	// (0x000532db) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0005e5a2) main_camera_pane_t_ParamLimits

0x1590,	// (0x000508e4) bg_popup_preview_window_pane_cp01_ParamLimits

0x1590,	// (0x000508e4) bg_popup_preview_window_pane_cp01

0xb3de,	// (0x0005a732) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3de,	// (0x0005a732) popup_phob_thumbnail2_window_g1

0x1335,	// (0x00050689) call2_cli_visual_pane

0x5997,	// (0x00054ceb) popup_call2_audio_conf_window_ParamLimits

0x5997,	// (0x00054ceb) popup_call2_audio_conf_window

0x59b5,	// (0x00054d09) popup_call2_audio_first_window_ParamLimits

0x59b5,	// (0x00054d09) popup_call2_audio_first_window

0x5a2b,	// (0x00054d7f) popup_call2_audio_in_window_ParamLimits

0x5a2b,	// (0x00054d7f) popup_call2_audio_in_window

0x5a5f,	// (0x00054db3) popup_call2_audio_out_window_ParamLimits

0x5a5f,	// (0x00054db3) popup_call2_audio_out_window

0x5ab1,	// (0x00054e05) popup_call2_audio_second_window_ParamLimits

0x5ab1,	// (0x00054e05) popup_call2_audio_second_window

0x5b03,	// (0x00054e57) popup_call2_audio_wait_window_ParamLimits

0x5b03,	// (0x00054e57) popup_call2_audio_wait_window

0x1335,	// (0x00050689) bg_popup_call2_act_pane_cp03

0x1572,	// (0x000508c6) list_conf_pane_cp

0xb3ea,	// (0x0005a73e) popup_call2_audio_conf_window_t1

0x1f3a,	// (0x0005128e) list_single_graphic_popup_conf2_pane_ParamLimits

0x1f3a,	// (0x0005128e) list_single_graphic_popup_conf2_pane

0x1f4d,	// (0x000512a1) list_highlight_pane_cp04

0xb3f8,	// (0x0005a74c) list_single_graphic_popup_conf2_pane_g1

0x1f5e,	// (0x000512b2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0005e899) list_single_graphic_popup_conf2_pane_g

0xb400,	// (0x0005a754) list_single_graphic_popup_conf2_pane_t1

0xb40e,	// (0x0005a762) bg_popup_call2_act_pane_cp01_ParamLimits

0xb40e,	// (0x0005a762) bg_popup_call2_act_pane_cp01

0xb498,	// (0x0005a7ec) call_type_pane_cp05_ParamLimits

0xb498,	// (0x0005a7ec) call_type_pane_cp05

0xb4ec,	// (0x0005a840) popup_call2_audio_second_window_g1_ParamLimits

0xb4ec,	// (0x0005a840) popup_call2_audio_second_window_g1

0xb540,	// (0x0005a894) popup_call2_audio_second_window_g2_ParamLimits

0xb540,	// (0x0005a894) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0005e89e) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0005e89e) popup_call2_audio_second_window_g

0xb5a5,	// (0x0005a8f9) popup_call2_audio_second_window_t1_ParamLimits

0xb5a5,	// (0x0005a8f9) popup_call2_audio_second_window_t1

0xb660,	// (0x0005a9b4) popup_call2_audio_second_window_t2_ParamLimits

0xb660,	// (0x0005a9b4) popup_call2_audio_second_window_t2

0xb6b3,	// (0x0005aa07) popup_call2_audio_second_window_t3_ParamLimits

0xb6b3,	// (0x0005aa07) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0005e8a5) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0005e8a5) popup_call2_audio_second_window_t

0x1335,	// (0x00050689) bg_popup_call2_in_pane_cp02

0x133f,	// (0x00050693) call_type_pane_cp04

0x1347,	// (0x0005069b) popup_call2_audio_wait_window_g1

0x134f,	// (0x000506a3) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0005e47e) popup_call2_audio_wait_window_g

0x1357,	// (0x000506ab) popup_call2_audio_wait_window_t3

0xb7a6,	// (0x0005aafa) bg_popup_call2_act_pane_ParamLimits

0xb7a6,	// (0x0005aafa) bg_popup_call2_act_pane

0xb866,	// (0x0005abba) call_type_pane_cp03_ParamLimits

0xb866,	// (0x0005abba) call_type_pane_cp03

0xb8ca,	// (0x0005ac1e) popup_call2_audio_first_window_g1_ParamLimits

0xb8ca,	// (0x0005ac1e) popup_call2_audio_first_window_g1

0xb93a,	// (0x0005ac8e) popup_call2_audio_first_window_g2_ParamLimits

0xb93a,	// (0x0005ac8e) popup_call2_audio_first_window_g2

0xb00e,	// (0x0005a362) popup_call2_audio_first_window_g3_ParamLimits

0xb00e,	// (0x0005a362) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0005e8ae) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0005e8ae) popup_call2_audio_first_window_g

0xba18,	// (0x0005ad6c) popup_call2_audio_first_window_t1_ParamLimits

0xba18,	// (0x0005ad6c) popup_call2_audio_first_window_t1

0xbb1b,	// (0x0005ae6f) popup_call2_audio_first_window_t4_ParamLimits

0xbb1b,	// (0x0005ae6f) popup_call2_audio_first_window_t4

0xbbfe,	// (0x0005af52) popup_call2_audio_first_window_t5_ParamLimits

0xbbfe,	// (0x0005af52) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0005e8b9) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0005e8b9) popup_call2_audio_first_window_t

0x1588,	// (0x000508dc) bg_popup_call2_act_pane_g1

0xc2ab,	// (0x0005b5ff) popup_cale_lunar_info_window_t1

0xc2b9,	// (0x0005b60d) popup_cale_lunar_info_window_t2

0xc2c7,	// (0x0005b61b) popup_cale_lunar_info_window_t3

0x1335,	// (0x00050689) bg_popup_call2_bubble_pane

0xbcff,	// (0x0005b053) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcff,	// (0x0005b053) bg_popup_call2_in_pane_cp01

0x1011,	// (0x00050365) call_type_pane_cp02

0xbd47,	// (0x0005b09b) popup_call2_audio_out_window_g1_ParamLimits

0xbd47,	// (0x0005b09b) popup_call2_audio_out_window_g1

0xbd73,	// (0x0005b0c7) popup_call2_audio_out_window_g2_ParamLimits

0xbd73,	// (0x0005b0c7) popup_call2_audio_out_window_g2

0xbd9b,	// (0x0005b0ef) popup_call2_audio_out_window_g3_ParamLimits

0xbd9b,	// (0x0005b0ef) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0005e8c2) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0005e8c2) popup_call2_audio_out_window_g

0xbdd6,	// (0x0005b12a) popup_call2_audio_out_window_t1_ParamLimits

0xbdd6,	// (0x0005b12a) popup_call2_audio_out_window_t1

0xbe35,	// (0x0005b189) popup_call2_audio_out_window_t2_ParamLimits

0xbe35,	// (0x0005b189) popup_call2_audio_out_window_t2

0xbe89,	// (0x0005b1dd) popup_call2_audio_out_window_t3_ParamLimits

0xbe89,	// (0x0005b1dd) popup_call2_audio_out_window_t3

0xbe9f,	// (0x0005b1f3) popup_call2_audio_out_window_t4_ParamLimits

0xbe9f,	// (0x0005b1f3) popup_call2_audio_out_window_t4

0xbeb5,	// (0x0005b209) popup_call2_audio_out_window_t5_ParamLimits

0xbeb5,	// (0x0005b209) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0005e8cb) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0005e8cb) popup_call2_audio_out_window_t

0xbf19,	// (0x0005b26d) bg_popup_call2_in_pane_ParamLimits

0xbf19,	// (0x0005b26d) bg_popup_call2_in_pane

0xbf75,	// (0x0005b2c9) popup_call2_audio_in_window_g1_ParamLimits

0xbf75,	// (0x0005b2c9) popup_call2_audio_in_window_g1

0xbfad,	// (0x0005b301) popup_call2_audio_in_window_g2_ParamLimits

0xbfad,	// (0x0005b301) popup_call2_audio_in_window_g2

0xbfe5,	// (0x0005b339) popup_call2_audio_in_window_g3_ParamLimits

0xbfe5,	// (0x0005b339) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0005e8d8) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0005e8d8) popup_call2_audio_in_window_g

0xc03d,	// (0x0005b391) popup_call2_audio_in_window_t1_ParamLimits

0xc03d,	// (0x0005b391) popup_call2_audio_in_window_t1

0xc0bd,	// (0x0005b411) popup_call2_audio_in_window_t2_ParamLimits

0xc0bd,	// (0x0005b411) popup_call2_audio_in_window_t2

0xc13d,	// (0x0005b491) popup_call2_audio_in_window_t3_ParamLimits

0xc13d,	// (0x0005b491) popup_call2_audio_in_window_t3

0xc157,	// (0x0005b4ab) popup_call2_audio_in_window_t4_ParamLimits

0xc157,	// (0x0005b4ab) popup_call2_audio_in_window_t4

0xc169,	// (0x0005b4bd) popup_call2_audio_in_window_t5_ParamLimits

0xc169,	// (0x0005b4bd) popup_call2_audio_in_window_t5

0xc17e,	// (0x0005b4d2) popup_call2_audio_in_window_t6_ParamLimits

0xc17e,	// (0x0005b4d2) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0005e8e1) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0005e8e1) popup_call2_audio_in_window_t

0x1588,	// (0x000508dc) bg_popup_call2_in_pane_g1

0xc2d5,	// (0x0005b629) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x0005e95c) popup_cale_lunar_info_window_t

0x1590,	// (0x000508e4) bg_popup_call2_rect_pane_ParamLimits

0x1590,	// (0x000508e4) bg_popup_call2_rect_pane

0x1335,	// (0x00050689) call2_cli_visual_graphic_pane

0x1335,	// (0x00050689) call2_cli_visual_text_pane

0xec10,	// (0x0005df64) smil_status_volume_pane_g3

0x0002,

0x16b4,	// (0x00050a08) call2_cli_visual_graphic_pane_g1

0x16b4,	// (0x00050a08) call2_cli_visual_graphic_pane_g2

0x16b4,	// (0x00050a08) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0005e8ee) call2_cli_visual_graphic_pane_g

0xc193,	// (0x0005b4e7) bg_popup_call2_rect_pane_g1

0x1752,	// (0x00050aa6) bg_popup_call2_rect_pane_g2

0xc19b,	// (0x0005b4ef) bg_popup_call2_rect_pane_g3

0xc1a3,	// (0x0005b4f7) bg_popup_call2_rect_pane_g4

0xc1ab,	// (0x0005b4ff) bg_popup_call2_rect_pane_g5

0xc1b3,	// (0x0005b507) bg_popup_call2_rect_pane_g6

0xc1bb,	// (0x0005b50f) bg_popup_call2_rect_pane_g7

0xc1c3,	// (0x0005b517) bg_popup_call2_rect_pane_g8

0xc1cb,	// (0x0005b51f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0005e8f5) bg_popup_call2_rect_pane_g

0xc1d3,	// (0x0005b527) bg_popup_call2_bubble_pane_g1

0xc1db,	// (0x0005b52f) bg_popup_call2_bubble_pane_g2

0xc1e3,	// (0x0005b537) bg_popup_call2_bubble_pane_g3

0xc1eb,	// (0x0005b53f) bg_popup_call2_bubble_pane_g4

0xc1f3,	// (0x0005b547) bg_popup_call2_bubble_pane_g5

0xc1fb,	// (0x0005b54f) bg_popup_call2_bubble_pane_g6

0xc203,	// (0x0005b557) bg_popup_call2_bubble_pane_g7

0xc20b,	// (0x0005b55f) bg_popup_call2_bubble_pane_g8

0xc213,	// (0x0005b567) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0005e908) bg_popup_call2_bubble_pane_g

0x39fd,	// (0x00052d51) aid_cale_week_size_cell_pane

0x3f9d,	// (0x000532f1) aid_cams_cif_uncrop_pane_ParamLimits

0x3f9d,	// (0x000532f1) aid_cams_cif_uncrop_pane

0x413e,	// (0x00053492) aid_cams_size_cell_ParamLimits

0x413e,	// (0x00053492) aid_cams_size_cell

0x4152,	// (0x000534a6) grid_cams_pane_ParamLimits

0x4167,	// (0x000534bb) linegrid_cams_pane_ParamLimits

0x4268,	// (0x000535bc) call_video_pane_t1

0x427a,	// (0x000535ce) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0005e5f5) call_video_pane_t

0x4581,	// (0x000538d5) aid_cale_month_size_cell_pane_ParamLimits

0x4581,	// (0x000538d5) aid_cale_month_size_cell_pane

0xf651,	// (0x0005e9a5) smil_status_volume_pane_g

0xec1d,	// (0x0005df71) volume_smil_pane_ParamLimits

0x0eeb,	// (0x0005023f) aid_popup2_width_pane

0x3977,	// (0x00052ccb) cell_qdial_pane_g4_ParamLimits

0x3977,	// (0x00052ccb) cell_qdial_pane_g4

0x5064,	// (0x000543b8) aid_blid_cardinal_pane_ParamLimits

0x5070,	// (0x000543c4) aid_blid_destination_pane_ParamLimits

0x5070,	// (0x000543c4) aid_blid_destination_pane

0x1590,	// (0x000508e4) bg_popup_call_poc_act_pane_ParamLimits

0x1590,	// (0x000508e4) bg_popup_call_poc_act_pane

0x1590,	// (0x000508e4) bg_popup_call_poc_inact_pane_ParamLimits

0x1590,	// (0x000508e4) bg_popup_call_poc_inact_pane

0xc21b,	// (0x0005b56f) bg_popup_call_poc_act_pane_g1

0xc223,	// (0x0005b577) bg_popup_call_poc_act_pane_g2

0xc22b,	// (0x0005b57f) bg_popup_call_poc_act_pane_g3

0xc1eb,	// (0x0005b53f) bg_popup_call_poc_act_pane_g4

0xc1f3,	// (0x0005b547) bg_popup_call_poc_act_pane_g5

0xc233,	// (0x0005b587) bg_popup_call_poc_act_pane_g6

0xc203,	// (0x0005b557) bg_popup_call_poc_act_pane_g7

0xc23b,	// (0x0005b58f) bg_popup_call_poc_act_pane_g8

0x1335,	// (0x00050689) main_usb_pane

0xc3d4,	// (0x0005b728) popup_cale_lunar_info_window

0x4441,	// (0x00053795) im_reading_pane_t1_ParamLimits

0x191c,	// (0x00050c70) list_im_pane_ParamLimits

0x192d,	// (0x00050c81) scroll_pane_cp07_ParamLimits

0x1335,	// (0x00050689) grid_highlight_pane_cp012

0x1590,	// (0x000508e4) mup_scale_pane_ParamLimits

0xb130,	// (0x0005a484) main_usb_pane_g1_ParamLimits

0xb130,	// (0x0005a484) main_usb_pane_g1

0x5b5d,	// (0x00054eb1) main_usb_pane_g2_ParamLimits

0x5b5d,	// (0x00054eb1) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0005e945) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0005e945) main_usb_pane_g

0x5b71,	// (0x00054ec5) main_usb_pane_t1_ParamLimits

0x5b71,	// (0x00054ec5) main_usb_pane_t1

0x5b83,	// (0x00054ed7) main_usb_pane_t2_ParamLimits

0x5b83,	// (0x00054ed7) main_usb_pane_t2

0x5b95,	// (0x00054ee9) main_usb_pane_t3_ParamLimits

0x5b95,	// (0x00054ee9) main_usb_pane_t3

0x5ba7,	// (0x00054efb) main_usb_pane_t4_ParamLimits

0x5ba7,	// (0x00054efb) main_usb_pane_t4

0x5bb9,	// (0x00054f0d) main_usb_pane_t5_ParamLimits

0x5bb9,	// (0x00054f0d) main_usb_pane_t5

0x5bcb,	// (0x00054f1f) main_usb_pane_t6_ParamLimits

0x5bcb,	// (0x00054f1f) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0005e94a) main_usb_pane_t_ParamLimits

0xae01,	// (0x0005a155) aid_text_placing

0x5010,	// (0x00054364) main_location2_pane_t1_ParamLimits

0x5026,	// (0x0005437a) main_location2_pane_t2_ParamLimits

0x503c,	// (0x00054390) main_location2_pane_t3_ParamLimits

0x5052,	// (0x000543a6) main_location2_pane_t4_ParamLimits

0x5052,	// (0x000543a6) main_location2_pane_t4

0xf402,	// (0x0005e756) main_location2_pane_t_ParamLimits

0x15cc,	// (0x00050920) find_pinb_pane_g2_ParamLimits

0x15cc,	// (0x00050920) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0005e4a4) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0005e4a4) find_pinb_pane_g

0x15d8,	// (0x0005092c) find_pinb_pane_t1_ParamLimits

0x15ea,	// (0x0005093e) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0005e4a9) find_pinb_pane_t_ParamLimits

0x1335,	// (0x00050689) main_call3_pane

0x48bd,	// (0x00053c11) cale_month_day_heading_pane_t1_ParamLimits

0x491b,	// (0x00053c6f) cale_month_day_heading_pane_t2_ParamLimits

0x4980,	// (0x00053cd4) cale_month_day_heading_pane_t3_ParamLimits

0x49e5,	// (0x00053d39) cale_month_day_heading_pane_t4_ParamLimits

0x4a4a,	// (0x00053d9e) cale_month_day_heading_pane_t5_ParamLimits

0x4aaf,	// (0x00053e03) cale_month_day_heading_pane_t6_ParamLimits

0x4b14,	// (0x00053e68) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0005e62d) cale_month_day_heading_pane_t_ParamLimits

0x1b7d,	// (0x00050ed1) smil_status_volume_pane

0x56e6,	// (0x00054a3a) postcard_address_pane_ParamLimits

0x56e6,	// (0x00054a3a) postcard_address_pane

0x56f8,	// (0x00054a4c) postcard_message_pane_ParamLimits

0x56f8,	// (0x00054a4c) postcard_message_pane

0x5b3b,	// (0x00054e8f) call2_cli_visual_pane_t1_ParamLimits

0x5b3b,	// (0x00054e8f) call2_cli_visual_pane_t1

0x6299,	// (0x000555ed) postcard_message_pane_t1_ParamLimits

0x6299,	// (0x000555ed) postcard_message_pane_t1

0x6282,	// (0x000555d6) postcard_address_pane_t1_ParamLimits

0x6282,	// (0x000555d6) postcard_address_pane_t1

0x6270,	// (0x000555c4) popup_call3_audio_in_window_ParamLimits

0x6270,	// (0x000555c4) popup_call3_audio_in_window

0x60ff,	// (0x00055453) bg_popup_call3_in_pane_ParamLimits

0x60ff,	// (0x00055453) bg_popup_call3_in_pane

0x6171,	// (0x000554c5) popup_call3_audio_in_window_g1_ParamLimits

0x6171,	// (0x000554c5) popup_call3_audio_in_window_g1

0x6191,	// (0x000554e5) popup_call3_audio_in_window_g2_ParamLimits

0x6191,	// (0x000554e5) popup_call3_audio_in_window_g2

0x61b1,	// (0x00055505) popup_call3_audio_in_window_g3_ParamLimits

0x61b1,	// (0x00055505) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x0005e9ac) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x0005e9ac) popup_call3_audio_in_window_g

0x61e2,	// (0x00055536) popup_call3_audio_in_window_t1_ParamLimits

0x61e2,	// (0x00055536) popup_call3_audio_in_window_t1

0x6220,	// (0x00055574) popup_call3_audio_in_window_t2_ParamLimits

0x6220,	// (0x00055574) popup_call3_audio_in_window_t2

0x625e,	// (0x000555b2) popup_call3_audio_in_window_t3_ParamLimits

0x625e,	// (0x000555b2) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0005e9b5) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0005e9b5) popup_call3_audio_in_window_t

0xaf3d,	// (0x0005a291) bg_popup_call3_rect_pane

0xc193,	// (0x0005b4e7) bg_popup_call3_rect_pane_g1

0x1752,	// (0x00050aa6) bg_popup_call3_rect_pane_g2

0xc19b,	// (0x0005b4ef) bg_popup_call3_rect_pane_g3

0xc1a3,	// (0x0005b4f7) bg_popup_call3_rect_pane_g4

0xc1ab,	// (0x0005b4ff) bg_popup_call3_rect_pane_g5

0xc1b3,	// (0x0005b507) bg_popup_call3_rect_pane_g6

0xc1bb,	// (0x0005b50f) bg_popup_call3_rect_pane_g7

0x536e,	// (0x000546c2) mup_visualizer_osc_pane

0xb01c,	// (0x0005a370) mup_visualizer_spec_pane

0x612f,	// (0x00055483) call3_video_qcif_pane_ParamLimits

0x612f,	// (0x00055483) call3_video_qcif_pane

0x6140,	// (0x00055494) call3_video_qcif_uncrop_pane_ParamLimits

0x6140,	// (0x00055494) call3_video_qcif_uncrop_pane

0x614c,	// (0x000554a0) call3_video_subqcif_pane_ParamLimits

0x614c,	// (0x000554a0) call3_video_subqcif_pane

0x6160,	// (0x000554b4) call3_video_subqcif_uncrop_pane_ParamLimits

0x6160,	// (0x000554b4) call3_video_subqcif_uncrop_pane

0x61d1,	// (0x00055525) popup_call3_audio_in_window_g4_ParamLimits

0x61d1,	// (0x00055525) popup_call3_audio_in_window_g4

0x60ee,	// (0x00055442) mup_spec_half_pane

0x60f7,	// (0x0005544b) mup_spec_half_pane_cp

0xc467,	// (0x0005b7bb) mup_osc_middle_pane

0xc470,	// (0x0005b7c4) mup_visualizer_osc_pane_g1

0x60cf,	// (0x00055423) mup_spec_bar_pane_ParamLimits

0x60cf,	// (0x00055423) mup_spec_bar_pane

0xc454,	// (0x0005b7a8) mup_spec_bar_pane_g1

0xc45e,	// (0x0005b7b2) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0005e9a0) mup_spec_bar_pane_g

0x39fd,	// (0x00052d51) aid_cale_week_size_cell_pane_ParamLimits

0x3a10,	// (0x00052d64) bg_cale_heading_pane_ParamLimits

0x1796,	// (0x00050aea) bg_cale_pane_cp01_ParamLimits

0x3a24,	// (0x00052d78) cale_week_corner_pane_ParamLimits

0x3a3a,	// (0x00052d8e) cale_week_day_heading_pane_ParamLimits

0x3a4e,	// (0x00052da2) cale_week_scroll_pane_g1_ParamLimits

0x3a5f,	// (0x00052db3) cale_week_scroll_pane_g2_ParamLimits

0x3a70,	// (0x00052dc4) cale_week_scroll_pane_g3_ParamLimits

0x3a81,	// (0x00052dd5) cale_week_scroll_pane_g4_ParamLimits

0x3a92,	// (0x00052de6) cale_week_scroll_pane_g5_ParamLimits

0x3aa3,	// (0x00052df7) cale_week_scroll_pane_g6_ParamLimits

0x3ab4,	// (0x00052e08) cale_week_scroll_pane_g7_ParamLimits

0x3ac5,	// (0x00052e19) cale_week_scroll_pane_g8_ParamLimits

0x3ad8,	// (0x00052e2c) cale_week_scroll_pane_g9_ParamLimits

0x3ae9,	// (0x00052e3d) cale_week_scroll_pane_g10_ParamLimits

0x3afa,	// (0x00052e4e) cale_week_scroll_pane_g11_ParamLimits

0x3b0b,	// (0x00052e5f) cale_week_scroll_pane_g12_ParamLimits

0x3b1c,	// (0x00052e70) cale_week_scroll_pane_g13_ParamLimits

0x3b2d,	// (0x00052e81) cale_week_scroll_pane_g14_ParamLimits

0x3b3e,	// (0x00052e92) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0005e535) cale_week_scroll_pane_g_ParamLimits

0x3b4f,	// (0x00052ea3) cale_week_time_pane_ParamLimits

0x3b62,	// (0x00052eb6) grid_cale_week_pane_ParamLimits

0x17af,	// (0x00050b03) listscroll_cale_week_pane_t1

0x3b75,	// (0x00052ec9) scroll_pane_cp08_ParamLimits

0x45c2,	// (0x00053916) cale_month_corner_pane_ParamLimits

0x1b53,	// (0x00050ea7) cale_month_pane_t1

0x487c,	// (0x00053bd0) cale_month_week_pane_ParamLimits

0x4e57,	// (0x000541ab) popup_call_status_window_g1_ParamLimits

0x4e6b,	// (0x000541bf) popup_call_status_window_g2_ParamLimits

0x4e7f,	// (0x000541d3) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0005e6dd) popup_call_status_window_g_ParamLimits

0x1ecd,	// (0x00051221) aid_call2_pane

0x557a,	// (0x000548ce) msg_header_pane_g1

0x56e6,	// (0x00054a3a) postcard_address2_pane_ParamLimits

0x56e6,	// (0x00054a3a) postcard_address2_pane

0x56f8,	// (0x00054a4c) postcard_message2_pane_ParamLimits

0x56f8,	// (0x00054a4c) postcard_message2_pane

0x608b,	// (0x000553df) message2_row_pane_ParamLimits

0x608b,	// (0x000553df) message2_row_pane

0x60a5,	// (0x000553f9) address2_row_pane_ParamLimits

0x60a5,	// (0x000553f9) address2_row_pane

0xc422,	// (0x0005b776) postcard_message2_row_pane_g1

0xc42a,	// (0x0005b77e) postcard_message2_row_pane_t1

0xc422,	// (0x0005b776) address2_row_pane_g1

0xc42a,	// (0x0005b77e) address2_row_pane_t1

0x3ea5,	// (0x000531f9) aid_size_cell_vorec

0x1335,	// (0x00050689) main_rss_pane

0x60b8,	// (0x0005540c) rss_list_single_pane_ParamLimits

0x60b8,	// (0x0005540c) rss_list_single_pane

0xc438,	// (0x0005b78c) rss_list_single_pane_t1

0xc446,	// (0x0005b79a) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x0005e99b) rss_list_single_pane_t

0x1335,	// (0x00050689) main_camera2_pane

0x1335,	// (0x00050689) main_video2_pane

0x62f2,	// (0x00055646) cams_zoom_pane_cp2_ParamLimits

0x62f2,	// (0x00055646) cams_zoom_pane_cp2

0x6309,	// (0x0005565d) image2_vga_pane_ParamLimits

0x6309,	// (0x0005565d) image2_vga_pane

0x633f,	// (0x00055693) main_camera2_pane_g1_ParamLimits

0x633f,	// (0x00055693) main_camera2_pane_g1

0x635f,	// (0x000556b3) main_camera2_pane_g2_ParamLimits

0x635f,	// (0x000556b3) main_camera2_pane_g2

0x6376,	// (0x000556ca) main_camera2_pane_g3_ParamLimits

0x6376,	// (0x000556ca) main_camera2_pane_g3

0x638d,	// (0x000556e1) main_camera2_pane_g4_ParamLimits

0x638d,	// (0x000556e1) main_camera2_pane_g4

0x63a4,	// (0x000556f8) main_camera2_pane_g5_ParamLimits

0x63a4,	// (0x000556f8) main_camera2_pane_g5

0x63bb,	// (0x0005570f) main_camera2_pane_g6_ParamLimits

0x63bb,	// (0x0005570f) main_camera2_pane_g6

0x63d2,	// (0x00055726) main_camera2_pane_g7_ParamLimits

0x63d2,	// (0x00055726) main_camera2_pane_g7

0x63e9,	// (0x0005573d) main_camera2_pane_g8_ParamLimits

0x63e9,	// (0x0005573d) main_camera2_pane_g8

0x0008,

0xf668,	// (0x0005e9bc) main_camera2_pane_g_ParamLimits

0xf668,	// (0x0005e9bc) main_camera2_pane_g

0x6417,	// (0x0005576b) main_camera2_pane_t1_ParamLimits

0x6417,	// (0x0005576b) main_camera2_pane_t1

0x6446,	// (0x0005579a) main_camera2_pane_t2_ParamLimits

0x6446,	// (0x0005579a) main_camera2_pane_t2

0x6463,	// (0x000557b7) main_camera2_pane_t3_ParamLimits

0x6463,	// (0x000557b7) main_camera2_pane_t3

0x64af,	// (0x00055803) main_camera2_pane_t4_ParamLimits

0x64af,	// (0x00055803) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x0005e9cf) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x0005e9cf) main_camera2_pane_t

0x6524,	// (0x00055878) cams_zoom_pane_cp4_ParamLimits

0x6524,	// (0x00055878) cams_zoom_pane_cp4

0x653a,	// (0x0005588e) image2_cif_pane_ParamLimits

0x653a,	// (0x0005588e) image2_cif_pane

0x655d,	// (0x000558b1) image2_subqcif_pane_ParamLimits

0x655d,	// (0x000558b1) image2_subqcif_pane

0x6573,	// (0x000558c7) main_video2_pane_g1_ParamLimits

0x6573,	// (0x000558c7) main_video2_pane_g1

0x658d,	// (0x000558e1) main_video2_pane_g2_ParamLimits

0x658d,	// (0x000558e1) main_video2_pane_g2

0x65a3,	// (0x000558f7) main_video2_pane_g3_ParamLimits

0x65a3,	// (0x000558f7) main_video2_pane_g3

0x65b9,	// (0x0005590d) main_video2_pane_g4_ParamLimits

0x65b9,	// (0x0005590d) main_video2_pane_g4

0x65cf,	// (0x00055923) main_video2_pane_g5_ParamLimits

0x65cf,	// (0x00055923) main_video2_pane_g5

0x65e5,	// (0x00055939) main_video2_pane_g6_ParamLimits

0x65e5,	// (0x00055939) main_video2_pane_g6

0x0005,

0xf68a,	// (0x0005e9de) main_video2_pane_g_ParamLimits

0xf68a,	// (0x0005e9de) main_video2_pane_g

0x65ff,	// (0x00055953) main_video2_pane_t1_ParamLimits

0x65ff,	// (0x00055953) main_video2_pane_t1

0x6623,	// (0x00055977) main_video2_pane_t2_ParamLimits

0x6623,	// (0x00055977) main_video2_pane_t2

0x666d,	// (0x000559c1) main_video2_pane_t3_ParamLimits

0x666d,	// (0x000559c1) main_video2_pane_t3

0x0002,

0xf697,	// (0x0005e9eb) main_video2_pane_t_ParamLimits

0xf697,	// (0x0005e9eb) main_video2_pane_t

0x5c7a,	// (0x00054fce) call_muted_g2

0x0001,

0xf639,	// (0x0005e98d) call_muted_g

0x1335,	// (0x00050689) main_mup2_pane

0x66af,	// (0x00055a03) main_mup2_pane_g1_ParamLimits

0x66af,	// (0x00055a03) main_mup2_pane_g1

0x66bb,	// (0x00055a0f) main_mup2_pane_g2_ParamLimits

0x66bb,	// (0x00055a0f) main_mup2_pane_g2

0xec86,	// (0x0005dfda) main_mup_pane_g13_cp1

0xec8e,	// (0x0005dfe2) mup_volume_pane_cp1

0x66d7,	// (0x00055a2b) main_mup2_pane_g4_ParamLimits

0x66d7,	// (0x00055a2b) main_mup2_pane_g4

0x66e7,	// (0x00055a3b) main_mup2_pane_g5_ParamLimits

0x66e7,	// (0x00055a3b) main_mup2_pane_g5

0x66f7,	// (0x00055a4b) main_mup2_pane_g6_ParamLimits

0x66f7,	// (0x00055a4b) main_mup2_pane_g6

0x6707,	// (0x00055a5b) main_mup2_pane_g7_ParamLimits

0x6707,	// (0x00055a5b) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x0005e9f2) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x0005e9f2) main_mup2_pane_g

0x671f,	// (0x00055a73) main_mup2_pane_t1_ParamLimits

0x671f,	// (0x00055a73) main_mup2_pane_t1

0x6735,	// (0x00055a89) main_mup2_pane_t2_ParamLimits

0x6735,	// (0x00055a89) main_mup2_pane_t2

0x674b,	// (0x00055a9f) main_mup2_pane_t3_ParamLimits

0x674b,	// (0x00055a9f) main_mup2_pane_t3

0x6761,	// (0x00055ab5) main_mup2_pane_t4_ParamLimits

0x6761,	// (0x00055ab5) main_mup2_pane_t4

0x6779,	// (0x00055acd) main_mup2_pane_t5_ParamLimits

0x6779,	// (0x00055acd) main_mup2_pane_t5

0x6791,	// (0x00055ae5) main_mup2_pane_t6_ParamLimits

0x6791,	// (0x00055ae5) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x0005ea01) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x0005ea01) main_mup2_pane_t

0x67c1,	// (0x00055b15) mup2_visualizer_pane_ParamLimits

0x67c1,	// (0x00055b15) mup2_visualizer_pane

0x67ec,	// (0x00055b40) mup_progress_pane_cp_ParamLimits

0x67ec,	// (0x00055b40) mup_progress_pane_cp

0xec71,	// (0x0005dfc5) mup_volume_pane_cp_ParamLimits

0xec71,	// (0x0005dfc5) mup_volume_pane_cp

0x6800,	// (0x00055b54) mup2_visualizer_pane_g1_ParamLimits

0x6800,	// (0x00055b54) mup2_visualizer_pane_g1

0xc4a7,	// (0x0005b7fb) mup2_visualizer_pane_g2_ParamLimits

0xc4a7,	// (0x0005b7fb) mup2_visualizer_pane_g2

0x6815,	// (0x00055b69) mup2_visualizer_pane_g3_ParamLimits

0x6815,	// (0x00055b69) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x0005ea0e) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x0005ea0e) mup2_visualizer_pane_g

0xb279,	// (0x0005a5cd) aid_size_cell_fmradio

0x5dd6,	// (0x0005512a) aid_height_parent_landcape

0x19ba,	// (0x00050d0e) wml_content_pane_cp

0x19c2,	// (0x00050d16) wml_tabs_pane

0x19cb,	// (0x00050d1f) popup_wml_miniature_window

0x19d3,	// (0x00050d27) scroll_pane_cp021

0x19e7,	// (0x00050d3b) wml_content_pane_comp8

0x1335,	// (0x00050689) bg_popup_sub_pane_cp05

0xc4c5,	// (0x0005b819) popup_wml_miniature_window_g1

0xc4cd,	// (0x0005b821) wml_miniature_view_pane

0x6821,	// (0x00055b75) aid_size_wml_view

0x6829,	// (0x00055b7d) wml_miniature_view_pane_g1

0x6832,	// (0x00055b86) wml_miniature_view_pane_g2

0x683b,	// (0x00055b8f) wml_miniature_view_pane_g3

0x6843,	// (0x00055b97) wml_miniature_view_pane_g4

0x684b,	// (0x00055b9f) wml_miniature_view_pane_g5

0x6853,	// (0x00055ba7) wml_miniature_view_pane_g6

0x685b,	// (0x00055baf) wml_miniature_view_pane_g7

0x6863,	// (0x00055bb7) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0005ea15) wml_miniature_view_pane_g

0xc4d5,	// (0x0005b829) background_graphic_ParamLimits

0xc4d5,	// (0x0005b829) background_graphic

0xc4e1,	// (0x0005b835) wml_tabs_2_pane

0xc4ea,	// (0x0005b83e) wml_tabs_3_pane_ParamLimits

0xc4ea,	// (0x0005b83e) wml_tabs_3_pane

0xc4fc,	// (0x0005b850) wml_tabs_4_pane_ParamLimits

0xc4fc,	// (0x0005b850) wml_tabs_4_pane

0xc512,	// (0x0005b866) wml_tabs_5_pane_ParamLimits

0xc512,	// (0x0005b866) wml_tabs_5_pane

0xc52c,	// (0x0005b880) wml_tabs_pane_g2_ParamLimits

0xc52c,	// (0x0005b880) wml_tabs_pane_g2

0xc540,	// (0x0005b894) wml_tabs_pane_g3_ParamLimits

0xc540,	// (0x0005b894) wml_tabs_pane_g3

0x686b,	// (0x00055bbf) wml_tabs_2_active_pane_ParamLimits

0x686b,	// (0x00055bbf) wml_tabs_2_active_pane

0x687b,	// (0x00055bcf) wml_tabs_2_passive_pane_ParamLimits

0x687b,	// (0x00055bcf) wml_tabs_2_passive_pane

0x688b,	// (0x00055bdf) wml_tabs_3_active_pane_cp_ParamLimits

0x688b,	// (0x00055bdf) wml_tabs_3_active_pane_cp

0x689c,	// (0x00055bf0) wml_tabs_3_passive_pane_ParamLimits

0x689c,	// (0x00055bf0) wml_tabs_3_passive_pane

0x68ad,	// (0x00055c01) wml_tabs_3_passive_pane_cp_ParamLimits

0x68ad,	// (0x00055c01) wml_tabs_3_passive_pane_cp

0x68be,	// (0x00055c12) tabs_4_active_pane

0x68c6,	// (0x00055c1a) tabs_4_passive_pane

0x68ce,	// (0x00055c22) tabs_4_passive_pane_cp

0x68d6,	// (0x00055c2a) tabs_4_passive_pane_cp2

0x5b55,	// (0x00054ea9) aid_height_text

0x5344,	// (0x00054698) mup_volume_cont_pane_ParamLimits

0x5344,	// (0x00054698) mup_volume_cont_pane

0x3687,	// (0x000529db) aid_size_cell_pinb

0x3691,	// (0x000529e5) aid_size_list_pinb

0x67d8,	// (0x00055b2c) mup2_volume_cont_pane_ParamLimits

0x67d8,	// (0x00055b2c) mup2_volume_cont_pane

0xec5d,	// (0x0005dfb1) mup2_volume_cont_pane_g1_ParamLimits

0xec5d,	// (0x0005dfb1) mup2_volume_cont_pane_g1

0x33b0,	// (0x00052704) aid_size_cell_touch_ParamLimits

0x33b0,	// (0x00052704) aid_size_cell_touch

0x358f,	// (0x000528e3) touch_pane_ParamLimits

0x358f,	// (0x000528e3) touch_pane

0x0ed9,	// (0x0005022d) main_rss2_pane

0xc55d,	// (0x0005b8b1) listscroll_rss2_pane

0xc566,	// (0x0005b8ba) rss2_navigation_pane

0xc56e,	// (0x0005b8c2) list_rss2_pane

0x2004,	// (0x00051358) scroll_pane_cp22

0xc576,	// (0x0005b8ca) rss2_navigation_pane_g1

0xc57f,	// (0x0005b8d3) rss2_navigation_pane_g2

0xc587,	// (0x0005b8db) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0005ea26) rss2_navigation_pane_g

0xc58f,	// (0x0005b8e3) rss2_navigation_pane_t1

0x68de,	// (0x00055c32) rss2_list_single_pane_ParamLimits

0x68de,	// (0x00055c32) rss2_list_single_pane

0xc59d,	// (0x0005b8f1) rss2_list_single_pane_t2

0xc5ab,	// (0x0005b8ff) rss2_list_single_pane_t3_ParamLimits

0xc5ab,	// (0x0005b8ff) rss2_list_single_pane_t3

0xc5c8,	// (0x0005b91c) rss2_list_single_pane_t4

0x4cde,	// (0x00054032) smil_status_pane_g1

0x2045,	// (0x00051399) main_image2_pane_ParamLimits

0x2045,	// (0x00051399) main_image2_pane

0x6400,	// (0x00055754) main_camera2_pane_g9_ParamLimits

0x6400,	// (0x00055754) main_camera2_pane_g9

0x64f2,	// (0x00055846) main_camera2_pane_t5_ParamLimits

0x64f2,	// (0x00055846) main_camera2_pane_t5

0xec32,	// (0x0005df86) main_camera2_pane_t6_ParamLimits

0xec32,	// (0x0005df86) main_camera2_pane_t6

0x68f2,	// (0x00055c46) main_image2_pane_g1_ParamLimits

0x68f2,	// (0x00055c46) main_image2_pane_g1

0x590d,	// (0x00054c61) smil2_video_pane_ParamLimits

0x590d,	// (0x00054c61) smil2_video_pane

0xaa80,	// (0x00059dd4) aid_zoom_text_primary_cp

0x0f1c,	// (0x00050270) popup_preview_fixed_window

0x1914,	// (0x00050c68) im_reading_pane_g1

0x62e6,	// (0x0005563a) cams2_bc_adjust_pane_cp_ParamLimits

0x62e6,	// (0x0005563a) cams2_bc_adjust_pane_cp

0x6518,	// (0x0005586c) cams2_bc_adjust_pane_ParamLimits

0x6518,	// (0x0005586c) cams2_bc_adjust_pane

0xc5d6,	// (0x0005b92a) cams2_bc_adjust_pane_g1

0xec96,	// (0x0005dfea) cams2_slider_pane

0xec9f,	// (0x0005dff3) cams2_slider_pane_g1

0xeca8,	// (0x0005dffc) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x0005ea2d) cams2_slider_pane_g

0x3771,	// (0x00052ac5) calc_display_pane_ParamLimits

0x378d,	// (0x00052ae1) calc_paper_pane_ParamLimits

0x37ae,	// (0x00052b02) grid_calc_pane_ParamLimits

0xada2,	// (0x0005a0f6) popup_clock_digital_window_t1_ParamLimits

0xb216,	// (0x0005a56a) main_image_pane_t1

0x3753,	// (0x00052aa7) aid_size_cell_calc_ParamLimits

0x3753,	// (0x00052aa7) aid_size_cell_calc

0x5e06,	// (0x0005515a) popup_blid_sat_info2_window_ParamLimits

0x5e06,	// (0x0005515a) popup_blid_sat_info2_window

0xc5e6,	// (0x0005b93a) aid_size_cell_blid

0xc5ee,	// (0x0005b942) bg_popup_window_pane_cp07

0xc611,	// (0x0005b965) grid_popup_blid_pane

0xc619,	// (0x0005b96d) heading_pane_cp05_ParamLimits

0xc619,	// (0x0005b96d) heading_pane_cp05

0xc6e1,	// (0x0005ba35) cell_popup_blid_pane_ParamLimits

0xc6e1,	// (0x0005ba35) cell_popup_blid_pane

0xc701,	// (0x0005ba55) cell_popup_blid_pane_g1

0xc709,	// (0x0005ba5d) cell_popup_blid_pane_t1

0x67ab,	// (0x00055aff) mup2_indicator_pane_ParamLimits

0x67ab,	// (0x00055aff) mup2_indicator_pane

0xaf3d,	// (0x0005a291) mup2_visualizer_osc_pane

0xc4b3,	// (0x0005b807) mup2_visualizer_spec_pane_ParamLimits

0xc4b3,	// (0x0005b807) mup2_visualizer_spec_pane

0x6906,	// (0x00055c5a) mup2_spec_half_pane

0x690f,	// (0x00055c63) mup2_spec_half_pane_cp

0x6917,	// (0x00055c6b) mup2_spec_bar_pane_ParamLimits

0x6917,	// (0x00055c6b) mup2_spec_bar_pane

0xc454,	// (0x0005b7a8) mup2_spec_bar_pane_g1

0xc45e,	// (0x0005b7b2) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0005e9a0) mup2_spec_bar_pane_g

0x6936,	// (0x00055c8a) mup2_osc_middle_pane

0xc470,	// (0x0005b7c4) mup2_visualizer_osc_pane_g1

0x0f44,	// (0x00050298) popup_number_entry_window_t1_ParamLimits

0x0f57,	// (0x000502ab) popup_number_entry_window_t2_ParamLimits

0x0f69,	// (0x000502bd) popup_number_entry_window_t3_ParamLimits

0x35d7,	// (0x0005292b) popup_number_entry_window_t5_ParamLimits

0x35d7,	// (0x0005292b) popup_number_entry_window_t5

0xf0fb,	// (0x0005e44f) popup_number_entry_window_t_ParamLimits

0x0f7b,	// (0x000502cf) text_title_cp2_ParamLimits

0xebde,	// (0x0005df32) aid_hotspot_pointer_text2_pane

0xec04,	// (0x0005df58) main_viewer_pane_g9_ParamLimits

0xec04,	// (0x0005df58) main_viewer_pane_g9

0x1b53,	// (0x00050ea7) cale_month_pane_t1_ParamLimits

0x1b90,	// (0x00050ee4) bg_cale_pane_ParamLimits

0x1ba8,	// (0x00050efc) list_cale_pane_ParamLimits

0x17af,	// (0x00050b03) listscroll_cale_day_pane_t1

0x1bb9,	// (0x00050f0d) scroll_pane_cp09_ParamLimits

0x5376,	// (0x000546ca) main_mup_eq_pane_t1_ParamLimits

0x5376,	// (0x000546ca) main_mup_eq_pane_t1

0x538e,	// (0x000546e2) main_mup_eq_pane_t2_ParamLimits

0x538e,	// (0x000546e2) main_mup_eq_pane_t2

0x53a4,	// (0x000546f8) main_mup_eq_pane_t3_ParamLimits

0x53a4,	// (0x000546f8) main_mup_eq_pane_t3

0x53ba,	// (0x0005470e) main_mup_eq_pane_t4_ParamLimits

0x53ba,	// (0x0005470e) main_mup_eq_pane_t4

0x53d0,	// (0x00054724) main_mup_eq_pane_t5_ParamLimits

0x53d0,	// (0x00054724) main_mup_eq_pane_t5

0x53e6,	// (0x0005473a) main_mup_eq_pane_t6_ParamLimits

0x53e6,	// (0x0005473a) main_mup_eq_pane_t6

0x53f8,	// (0x0005474c) main_mup_eq_pane_t7_ParamLimits

0x53f8,	// (0x0005474c) main_mup_eq_pane_t7

0x540a,	// (0x0005475e) main_mup_eq_pane_t8_ParamLimits

0x540a,	// (0x0005475e) main_mup_eq_pane_t8

0x541c,	// (0x00054770) main_mup_eq_pane_t9_ParamLimits

0x541c,	// (0x00054770) main_mup_eq_pane_t9

0x5432,	// (0x00054786) main_mup_eq_pane_t10_ParamLimits

0x5432,	// (0x00054786) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0005e7dc) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0005e7dc) main_mup_eq_pane_t

0x54c5,	// (0x00054819) mup_equalizer_pane_cp5_ParamLimits

0x54d7,	// (0x0005482b) mup_equalizer_pane_cp6_ParamLimits

0x54e9,	// (0x0005483d) mup_equalizer_pane_cp7_ParamLimits

0x0ed9,	// (0x0005022d) main_gallery_pane

0xc479,	// (0x0005b7cd) smil2_volume_pane

0xc481,	// (0x0005b7d5) smil_status_volume_pane_g1_ParamLimits

0xc494,	// (0x0005b7e8) smil_status_volume_pane_g2_ParamLimits

0xec10,	// (0x0005df64) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0005e9a5) smil_status_volume_pane_g_ParamLimits

0xc5ee,	// (0x0005b942) bg_popup_window_pane_cp07_ParamLimits

0xc5fc,	// (0x0005b950) blid_firmament_pane

0x693f,	// (0x00055c93) aid_size_cell_gallery_ParamLimits

0x693f,	// (0x00055c93) aid_size_cell_gallery

0x6955,	// (0x00055ca9) grid_gallery_pane_ParamLimits

0x6955,	// (0x00055ca9) grid_gallery_pane

0x6969,	// (0x00055cbd) cell_gallery_pane_ParamLimits

0x6969,	// (0x00055cbd) cell_gallery_pane

0xc717,	// (0x0005ba6b) bg_cell_gallery_focus_pane_ParamLimits

0xc717,	// (0x0005ba6b) bg_cell_gallery_focus_pane

0xc729,	// (0x0005ba7d) cell_gallery_pane_g1_ParamLimits

0xc729,	// (0x0005ba7d) cell_gallery_pane_g1

0x69b0,	// (0x00055d04) cell_gallery_pane_g2_ParamLimits

0x69b0,	// (0x00055d04) cell_gallery_pane_g2

0x69bd,	// (0x00055d11) cell_gallery_pane_g3_ParamLimits

0x69bd,	// (0x00055d11) cell_gallery_pane_g3

0xc735,	// (0x0005ba89) cell_gallery_pane_g4_ParamLimits

0xc735,	// (0x0005ba89) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x0005ea53) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x0005ea53) cell_gallery_pane_g

0xc741,	// (0x0005ba95) bg_cell_gallery_focus_pane_g1

0xc749,	// (0x0005ba9d) bg_cell_gallery_focus_pane_g2

0xc751,	// (0x0005baa5) bg_cell_gallery_focus_pane_g3

0xc759,	// (0x0005baad) bg_cell_gallery_focus_pane_g4

0xc761,	// (0x0005bab5) bg_cell_gallery_focus_pane_g5

0xc769,	// (0x0005babd) bg_cell_gallery_focus_pane_g6

0xc771,	// (0x0005bac5) bg_cell_gallery_focus_pane_g7

0xc779,	// (0x0005bacd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x0005ea5c) bg_cell_gallery_focus_pane_g

0xc781,	// (0x0005bad5) aid_firma_cardinal

0xc795,	// (0x0005bae9) blid_firmament_pane_t1

0xc7ac,	// (0x0005bb00) blid_firmament_pane_t2

0xc7c3,	// (0x0005bb17) blid_firmament_pane_t3

0xc7da,	// (0x0005bb2e) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x0005ea6d) blid_firmament_pane_t

0xc7f1,	// (0x0005bb45) blid_sat_info_pane

0xc801,	// (0x0005bb55) blid_sat_info_pane_g1

0xc801,	// (0x0005bb55) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0005ea76) blid_sat_info_pane_g

0xc80b,	// (0x0005bb5f) blid_sat_info_pane_t1

0xc819,	// (0x0005bb6d) smil2_volume_content_pane

0xc822,	// (0x0005bb76) smil2_volume_pane_g1

0xc82a,	// (0x0005bb7e) smil2_volume_content_pane_g1

0xc833,	// (0x0005bb87) smil2_volume_content_pane_g2

0xc83c,	// (0x0005bb90) smil2_volume_content_pane_g3

0xc845,	// (0x0005bb99) smil2_volume_content_pane_g4

0xc84e,	// (0x0005bba2) smil2_volume_content_pane_g5

0xc857,	// (0x0005bbab) smil2_volume_content_pane_g6

0xc860,	// (0x0005bbb4) smil2_volume_content_pane_g7

0xc869,	// (0x0005bbbd) smil2_volume_content_pane_g8

0xc872,	// (0x0005bbc6) smil2_volume_content_pane_g9

0xc87b,	// (0x0005bbcf) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x0005ea7b) smil2_volume_content_pane_g

0x3bcb,	// (0x00052f1f) cale_week_day_heading_pane_t1_ParamLimits

0x3bf5,	// (0x00052f49) cale_week_day_heading_pane_t2_ParamLimits

0x3c1f,	// (0x00052f73) cale_week_day_heading_pane_t3_ParamLimits

0x3c49,	// (0x00052f9d) cale_week_day_heading_pane_t4_ParamLimits

0x3c73,	// (0x00052fc7) cale_week_day_heading_pane_t5_ParamLimits

0x3c9d,	// (0x00052ff1) cale_week_day_heading_pane_t6_ParamLimits

0x3cc7,	// (0x0005301b) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0005e554) cale_week_day_heading_pane_t_ParamLimits

0x17c1,	// (0x00050b15) bg_cale_side_pane_ParamLimits

0x3cf1,	// (0x00053045) cale_week_time_pane_t1_ParamLimits

0x3d1d,	// (0x00053071) cale_week_time_pane_t2_ParamLimits

0x3d49,	// (0x0005309d) cale_week_time_pane_t3_ParamLimits

0x3d75,	// (0x000530c9) cale_week_time_pane_t4_ParamLimits

0x3da1,	// (0x000530f5) cale_week_time_pane_t5_ParamLimits

0x3dcd,	// (0x00053121) cale_week_time_pane_t6_ParamLimits

0x3df9,	// (0x0005314d) cale_week_time_pane_t7_ParamLimits

0x3e25,	// (0x00053179) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0005e563) cale_week_time_pane_t_ParamLimits

0x3e51,	// (0x000531a5) cell_cale_week_pane_g2_ParamLimits

0x17c1,	// (0x00050b15) bg_cale_side_pane_cp01_ParamLimits

0x4b81,	// (0x00053ed5) cale_month_week_pane_t1_ParamLimits

0x4b98,	// (0x00053eec) cale_month_week_pane_t2_ParamLimits

0x4baf,	// (0x00053f03) cale_month_week_pane_t3_ParamLimits

0x4bc6,	// (0x00053f1a) cale_month_week_pane_t4_ParamLimits

0x4bdd,	// (0x00053f31) cale_month_week_pane_t5_ParamLimits

0x4bf4,	// (0x00053f48) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0005e63c) cale_month_week_pane_t_ParamLimits

0xac88,	// (0x00059fdc) cell_cale_month_pane_g1_ParamLimits

0x0ed9,	// (0x0005022d) main_cale_event_viewer_pane

0x0ed9,	// (0x0005022d) listscroll_cale_event_viewer_pane

0xc884,	// (0x0005bbd8) list_cale_ev_pane

0xc88c,	// (0x0005bbe0) scroll_pane_cp023

0x69ca,	// (0x00055d1e) field_cale_ev_pane_ParamLimits

0x69ca,	// (0x00055d1e) field_cale_ev_pane

0xc898,	// (0x0005bbec) field_cale_ev_content_pane_ParamLimits

0xc898,	// (0x0005bbec) field_cale_ev_content_pane

0xc8a4,	// (0x0005bbf8) field_cale_ev_pane_g1_ParamLimits

0xc8a4,	// (0x0005bbf8) field_cale_ev_pane_g1

0xc8b0,	// (0x0005bc04) field_cale_ev_pane_g2_ParamLimits

0xc8b0,	// (0x0005bc04) field_cale_ev_pane_g2

0xc8c8,	// (0x0005bc1c) field_cale_ev_pane_g3_ParamLimits

0xc8c8,	// (0x0005bc1c) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x0005ea90) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x0005ea90) field_cale_ev_pane_g

0xc8e0,	// (0x0005bc34) field_cale_ev_pane_t1_ParamLimits

0xc8e0,	// (0x0005bc34) field_cale_ev_pane_t1

0x69e4,	// (0x00055d38) field_cale_ev_content_pane_t1_ParamLimits

0x69e4,	// (0x00055d38) field_cale_ev_content_pane_t1

0xb0c6,	// (0x0005a41a) bg_button_pane_cp01

0x1787,	// (0x00050adb) listscroll_cale_week_pane_ParamLimits

0x39f5,	// (0x00052d49) popup_toolbar_window_cp01

0x17af,	// (0x00050b03) listscroll_cale_week_pane_t1_ParamLimits

0x165f,	// (0x000509b3) listscroll_cale_day_pane_ParamLimits

0x39f5,	// (0x00052d49) popup_toolbar_window_cp02

0x17af,	// (0x00050b03) listscroll_cale_day_pane_t1_ParamLimits

0x1787,	// (0x00050adb) main_cale_month_pane_ParamLimits

0x6002,	// (0x00055356) popup_toolbar_window_cp03_ParamLimits

0x6002,	// (0x00055356) popup_toolbar_window_cp03

0x57e7,	// (0x00054b3b) main_image_pane_g2_ParamLimits

0x57e7,	// (0x00054b3b) main_image_pane_g2

0x57f8,	// (0x00054b4c) main_image_pane_g3_ParamLimits

0x57f8,	// (0x00054b4c) main_image_pane_g3

0x0002,

0xf51a,	// (0x0005e86e) main_image_pane_g_ParamLimits

0xf51a,	// (0x0005e86e) main_image_pane_g

0xb216,	// (0x0005a56a) main_image_pane_t1_ParamLimits

0x5809,	// (0x00054b5d) main_image_pane_t2_ParamLimits

0x5809,	// (0x00054b5d) main_image_pane_t2

0x581b,	// (0x00054b6f) main_image_pane_t3_ParamLimits

0x581b,	// (0x00054b6f) main_image_pane_t3

0x5843,	// (0x00054b97) main_image_pane_t4_ParamLimits

0x5843,	// (0x00054b97) main_image_pane_t4

0x0003,

0xf521,	// (0x0005e875) main_image_pane_t_ParamLimits

0xf521,	// (0x0005e875) main_image_pane_t

0x5863,	// (0x00054bb7) popup_image_details_window_cp01

0x586b,	// (0x00054bbf) popup_toobar_trans_pane_cp01_ParamLimits

0x586b,	// (0x00054bbf) popup_toobar_trans_pane_cp01

0x5ecf,	// (0x00055223) popup_image_details_window_ParamLimits

0x5ecf,	// (0x00055223) popup_image_details_window

0xc3dc,	// (0x0005b730) popup_image_focus_window

0x62b4,	// (0x00055608) camera2_autofocus_pane_ParamLimits

0x62b4,	// (0x00055608) camera2_autofocus_pane

0x0ed9,	// (0x0005022d) bg_popup_sub_pane_cp06

0xc8f7,	// (0x0005bc4b) popup_image_focus_window_g1

0xc8ff,	// (0x0005bc53) popup_image_focus_window_g2

0xc907,	// (0x0005bc5b) popup_image_focus_window_g3

0xc90f,	// (0x0005bc63) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0005ea97) popup_image_focus_window_g

0xc917,	// (0x0005bc6b) popup_image_focus_window_t1

0xc925,	// (0x0005bc79) popup_image_focus_window_t2

0xc934,	// (0x0005bc88) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x0005eaa0) popup_image_focus_window_t

0xc942,	// (0x0005bc96) camera2_autofocus_pane_g1

0x2045,	// (0x00051399) bg_tb_trans_pane_cp01

0xc950,	// (0x0005bca4) popup_image_details_window_g1

0xc963,	// (0x0005bcb7) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x0005eab2) popup_image_details_window_g

0xc98c,	// (0x0005bce0) popup_image_details_window_t1

0xc99e,	// (0x0005bcf2) popup_image_details_window_t2

0xc9b7,	// (0x0005bd0b) popup_image_details_window_t3

0xc9cb,	// (0x0005bd1f) popup_image_details_window_t4

0xc9e6,	// (0x0005bd3a) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0005eab9) popup_image_details_window_t

0x1647,	// (0x0005099b) bg_calc_paper_pane_ParamLimits

0xaa90,	// (0x00059de4) grid_highlight_pane_cp013

0xaa9a,	// (0x00059dee) list_calc_pane_ParamLimits

0xaaac,	// (0x00059e00) scroll_pane_cp024

0x165f,	// (0x000509b3) bg_calc_display_pane_ParamLimits

0xaab4,	// (0x00059e08) calc_display_pane_t1_ParamLimits

0xaac9,	// (0x00059e1d) calc_display_pane_t2_ParamLimits

0xaade,	// (0x00059e32) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0005e4d6) calc_display_pane_t_ParamLimits

0x3926,	// (0x00052c7a) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0005e4f3) cell_calc_pane_g

0x392f,	// (0x00052c83) cell_calc_pane_t1

0x16be,	// (0x00050a12) grid_highlight_pane_cp02_ParamLimits

0x16d4,	// (0x00050a28) toolbar_button_pane_cp01_ParamLimits

0x16d4,	// (0x00050a28) toolbar_button_pane_cp01

0xb25b,	// (0x0005a5af) temp_image_control_pane_ParamLimits

0xb25b,	// (0x0005a5af) temp_image_control_pane

0x2045,	// (0x00051399) main_mp3_pane

0xca00,	// (0x0005bd54) temp_image_control_pane_g1_ParamLimits

0xca00,	// (0x0005bd54) temp_image_control_pane_g1

0xca0e,	// (0x0005bd62) temp_image_control_pane_g2_ParamLimits

0xca0e,	// (0x0005bd62) temp_image_control_pane_g2

0xca20,	// (0x0005bd74) temp_image_control_pane_g3_ParamLimits

0xca20,	// (0x0005bd74) temp_image_control_pane_g3

0x6a31,	// (0x00055d85) temp_image_control_pane_g4_ParamLimits

0x6a31,	// (0x00055d85) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x0005eac4) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x0005eac4) temp_image_control_pane_g

0xca00,	// (0x0005bd54) main_mp3_pane_g1

0x6a42,	// (0x00055d96) main_mp3_pane_g2

0x0007,

0xf779,	// (0x0005eacd) main_mp3_pane_g

0xca63,	// (0x0005bdb7) main_mp3_pane_t1

0x181d,	// (0x00050b71) main_camera_pane_g8_ParamLimits

0x181d,	// (0x00050b71) main_camera_pane_g8

0x40e6,	// (0x0005343a) main_video_pane_g7_ParamLimits

0x40e6,	// (0x0005343a) main_video_pane_g7

0xec4b,	// (0x0005df9f) main_camera2_pane_t7_ParamLimits

0xec4b,	// (0x0005df9f) main_camera2_pane_t7

0x197a,	// (0x00050cce) scroll_pane_cp025_ParamLimits

0x197a,	// (0x00050cce) scroll_pane_cp025

0x198e,	// (0x00050ce2) scroll_pane_cp026_ParamLimits

0x198e,	// (0x00050ce2) scroll_pane_cp026

0x199d,	// (0x00050cf1) wml_content_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_touch_calib_pane

0x6af8,	// (0x00055e4c) main_touch_calib_pane_g1

0x6b04,	// (0x00055e58) main_touch_calib_pane_g2

0x6b10,	// (0x00055e64) main_touch_calib_pane_g3

0x6b1c,	// (0x00055e70) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x0005eaeb) main_touch_calib_pane_g

0x6b28,	// (0x00055e7c) main_touch_calib_pane_t1

0x6b40,	// (0x00055e94) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x0005eaf4) main_touch_calib_pane_t

0xae2f,	// (0x0005a183) mup_progress_pane_cp02

0xae4e,	// (0x0005a1a2) navi_pane_g1

0xaece,	// (0x0005a222) navi_pane_mp_t3

0x2045,	// (0x00051399) main_mp3_pane_ParamLimits

0x603c,	// (0x00055390) navi_pane_ParamLimits

0xca00,	// (0x0005bd54) main_mp3_pane_g1_ParamLimits

0x6a42,	// (0x00055d96) main_mp3_pane_g2_ParamLimits

0x6a4e,	// (0x00055da2) main_mp3_pane_g3_ParamLimits

0x6a4e,	// (0x00055da2) main_mp3_pane_g3

0x6a5a,	// (0x00055dae) main_mp3_pane_g4_ParamLimits

0x6a5a,	// (0x00055dae) main_mp3_pane_g4

0xca30,	// (0x0005bd84) main_mp3_pane_g5_ParamLimits

0xca30,	// (0x0005bd84) main_mp3_pane_g5

0xca3e,	// (0x0005bd92) main_mp3_pane_g6_ParamLimits

0xca3e,	// (0x0005bd92) main_mp3_pane_g6

0xca4b,	// (0x0005bd9f) main_mp3_pane_g7_ParamLimits

0xca4b,	// (0x0005bd9f) main_mp3_pane_g7

0xca57,	// (0x0005bdab) main_mp3_pane_g8_ParamLimits

0xca57,	// (0x0005bdab) main_mp3_pane_g8

0xf779,	// (0x0005eacd) main_mp3_pane_g_ParamLimits

0x6a66,	// (0x00055dba) main_mp3_pane_t2

0x6a74,	// (0x00055dc8) main_mp3_pane_t3

0xca71,	// (0x0005bdc5) main_mp3_pane_t4

0xca7f,	// (0x0005bdd3) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x0005eade) main_mp3_pane_t

0xca8d,	// (0x0005bde1) mup_progress_pane_cp01

0xaa80,	// (0x00059dd4) aid_zoom_text_secondary2

0xc884,	// (0x0005bbd8) list_cale_ev2_pane

0xc88c,	// (0x0005bbe0) scroll_pane_cp023_ParamLimits

0x6b8e,	// (0x00055ee2) field_cale_ev2_pane_ParamLimits

0x6b8e,	// (0x00055ee2) field_cale_ev2_pane

0xca95,	// (0x0005bde9) field_cale_ev2_pane_g1_ParamLimits

0xca95,	// (0x0005bde9) field_cale_ev2_pane_g1

0xcaa1,	// (0x0005bdf5) field_cale_ev2_pane_g2_ParamLimits

0xcaa1,	// (0x0005bdf5) field_cale_ev2_pane_g2

0xcab9,	// (0x0005be0d) field_cale_ev2_pane_g3_ParamLimits

0xcab9,	// (0x0005be0d) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x0005eaff) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x0005eaff) field_cale_ev2_pane_g

0xcadd,	// (0x0005be31) field_cale_ev2_pane_t1_ParamLimits

0xcadd,	// (0x0005be31) field_cale_ev2_pane_t1

0xcaf4,	// (0x0005be48) field_cale_ev2_pane_t2_ParamLimits

0xcaf4,	// (0x0005be48) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0005eb08) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0005eb08) field_cale_ev2_pane_t

0x56a2,	// (0x000549f6) main_postcard_pane_g5_ParamLimits

0x56a2,	// (0x000549f6) main_postcard_pane_g5

0x56b6,	// (0x00054a0a) main_postcard_pane_g6_ParamLimits

0x56b6,	// (0x00054a0a) main_postcard_pane_g6

0x3ec8,	// (0x0005321c) camera2_autofocus_pane_cp_ParamLimits

0x3ec8,	// (0x0005321c) camera2_autofocus_pane_cp

0x2045,	// (0x00051399) main_mup3_pane

0x6bc6,	// (0x00055f1a) main_mup3_pane_g1_ParamLimits

0x6bc6,	// (0x00055f1a) main_mup3_pane_g1

0x6be8,	// (0x00055f3c) main_mup3_pane_g2_ParamLimits

0x6be8,	// (0x00055f3c) main_mup3_pane_g2

0x6c50,	// (0x00055fa4) main_mup3_pane_g3_ParamLimits

0x6c50,	// (0x00055fa4) main_mup3_pane_g3

0x6c8e,	// (0x00055fe2) main_mup3_pane_g4_ParamLimits

0x6c8e,	// (0x00055fe2) main_mup3_pane_g4

0x6ccc,	// (0x00056020) main_mup3_pane_g5_ParamLimits

0x6ccc,	// (0x00056020) main_mup3_pane_g5

0x6d0a,	// (0x0005605e) main_mup3_pane_g6_ParamLimits

0x6d0a,	// (0x0005605e) main_mup3_pane_g6

0xcb09,	// (0x0005be5d) main_mup3_pane_g7_ParamLimits

0xcb09,	// (0x0005be5d) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0005eb18) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0005eb18) main_mup3_pane_g

0x6d80,	// (0x000560d4) main_mup3_pane_t1_ParamLimits

0x6d80,	// (0x000560d4) main_mup3_pane_t1

0x6de8,	// (0x0005613c) main_mup3_pane_t2_ParamLimits

0x6de8,	// (0x0005613c) main_mup3_pane_t2

0x6eb0,	// (0x00056204) main_mup3_pane_t4_ParamLimits

0x6eb0,	// (0x00056204) main_mup3_pane_t4

0x6efe,	// (0x00056252) main_mup3_pane_t5_ParamLimits

0x6efe,	// (0x00056252) main_mup3_pane_t5

0x6fac,	// (0x00056300) main_mup3_pane_t6_ParamLimits

0x6fac,	// (0x00056300) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0005eb29) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0005eb29) main_mup3_pane_t

0x7060,	// (0x000563b4) mup3_progress_pane_ParamLimits

0x7060,	// (0x000563b4) mup3_progress_pane

0x70bc,	// (0x00056410) popup_mup3_control_window_ParamLimits

0x70bc,	// (0x00056410) popup_mup3_control_window

0xcb17,	// (0x0005be6b) popup_mup3_text_window

0x70ea,	// (0x0005643e) mup3_progress_pane_t1

0x7100,	// (0x00056454) mup3_progress_pane_t2

0xcb1f,	// (0x0005be73) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0005eb36) mup3_progress_pane_t

0xcb36,	// (0x0005be8a) mup_progress_pane_cp03

0x0ed9,	// (0x0005022d) bg_tb_trans_pane_cp04

0x7116,	// (0x0005646a) mup3_volume_pane

0x711e,	// (0x00056472) popup_mup3_control_window_g1

0x7127,	// (0x0005647b) mup3_volume_pane_g1

0x7130,	// (0x00056484) mup3_volume_pane_g2

0x7139,	// (0x0005648d) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x0005eb3d) mup3_volume_pane_g

0x0ed9,	// (0x0005022d) bg_tb_trans_pane_cp03

0xcb46,	// (0x0005be9a) popup_mup3_text_window_g1

0xcb4e,	// (0x0005bea2) popup_mup3_text_window_t1

0x16a7,	// (0x000509fb) list_calc_item_pane_g1_ParamLimits

0xc554,	// (0x0005b8a8) mup_volume_pane_cp_g1

0x6b58,	// (0x00055eac) main_touch_calib_pane_t3

0x6b6a,	// (0x00055ebe) main_touch_calib_pane_t4

0x6b7c,	// (0x00055ed0) main_touch_calib_pane_t5

0x0ee3,	// (0x00050237) aid_cell_size_toolbar2

0x0eeb,	// (0x0005023f) aid_popup3_width_pane

0xaa78,	// (0x00059dcc) aid_zoom_text_msg_primary

0xaba8,	// (0x00059efc) vorec_t7

0x166b,	// (0x000509bf) bg_calc_paper_pane_g1_ParamLimits

0x1677,	// (0x000509cb) bg_calc_paper_pane_g2_ParamLimits

0x1683,	// (0x000509d7) bg_calc_paper_pane_g3_ParamLimits

0x168f,	// (0x000509e3) bg_calc_paper_pane_g4_ParamLimits

0x169b,	// (0x000509ef) bg_calc_paper_pane_g5_ParamLimits

0x38c0,	// (0x00052c14) bg_calc_paper_pane_g6_ParamLimits

0x38cf,	// (0x00052c23) bg_calc_paper_pane_g7_ParamLimits

0x38de,	// (0x00052c32) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0005e4dd) bg_calc_paper_pane_g_ParamLimits

0x38ed,	// (0x00052c41) calc_bg_paper_pane_g9_ParamLimits

0x3ffc,	// (0x00053350) image_qvga_pane_ParamLimits

0x3ffc,	// (0x00053350) image_qvga_pane

0x1590,	// (0x000508e4) bg_popup_sub_pane_cp04_ParamLimits

0xb192,	// (0x0005a4e6) popup_mup_playback_window_g1_ParamLimits

0xb19e,	// (0x0005a4f2) popup_mup_playback_window_t1_ParamLimits

0xb1b3,	// (0x0005a507) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0005e869) popup_mup_playback_window_t_ParamLimits

0x66cb,	// (0x00055a1f) main_mup2_pane_g3_ParamLimits

0x66cb,	// (0x00055a1f) main_mup2_pane_g3

0x42c3,	// (0x00053617) popup_toolbar_window_cp04

0xb594,	// (0x0005a8e8) popup_call2_audio_second_window_g3_ParamLimits

0xb594,	// (0x0005a8e8) popup_call2_audio_second_window_g3

0xb99e,	// (0x0005acf2) popup_call2_audio_first_window_g4_ParamLimits

0xb99e,	// (0x0005acf2) popup_call2_audio_first_window_g4

0xc01d,	// (0x0005b371) popup_call2_audio_in_window_g4_ParamLimits

0xc01d,	// (0x0005b371) popup_call2_audio_in_window_g4

0x57c9,	// (0x00054b1d) aid_area_sk_bg_cut_ParamLimits

0x57c9,	// (0x00054b1d) aid_area_sk_bg_cut

0xb1c8,	// (0x0005a51c) aid_area_sk_bg_cut_2_ParamLimits

0xb1c8,	// (0x0005a51c) aid_area_sk_bg_cut_2

0x69a0,	// (0x00055cf4) aid_placing_details_win

0x69a8,	// (0x00055cfc) aid_placing_details_win_2

0xc942,	// (0x0005bc96) camera2_autofocus_pane_g1_ParamLimits

0x3536,	// (0x0005288a) popup_fixed_preview_cale_window_ParamLimits

0x3536,	// (0x0005288a) popup_fixed_preview_cale_window

0xaf57,	// (0x0005a2ab) navi_slider_pane_g3

0xaf60,	// (0x0005a2b4) navi_slider_pane_g4

0xaf69,	// (0x0005a2bd) navi_slider_pane_g5

0xaf57,	// (0x0005a2ab) navi_slider_pane_g6

0xaf72,	// (0x0005a2c6) navi_slider_pane_g7

0xb093,	// (0x0005a3e7) mup_scale_pane_g3

0xb09c,	// (0x0005a3f0) mup_scale_pane_g4

0xb0a5,	// (0x0005a3f9) mup_scale_pane_g5

0x54fd,	// (0x00054851) mup_scale_pane_g6

0x5506,	// (0x0005485a) mup_scale_pane_g7

0xaf57,	// (0x0005a2ab) cams2_slider_pane_g3

0xc5de,	// (0x0005b932) cams2_slider_pane_g4

0xecb1,	// (0x0005e005) cams2_slider_pane_g5

0xaf57,	// (0x0005a2ab) cams2_slider_pane_g6

0xecb9,	// (0x0005e00d) cams2_slider_pane_g7

0xc801,	// (0x0005bb55) camera2_autofocus_pane_cp_g1

0xcb5c,	// (0x0005beb0) bg_popup_preview_window_pane_cp02_ParamLimits

0xcb5c,	// (0x0005beb0) bg_popup_preview_window_pane_cp02

0x7142,	// (0x00056496) list_fp_cale_pane_ParamLimits

0x7142,	// (0x00056496) list_fp_cale_pane

0xcb68,	// (0x0005bebc) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb68,	// (0x0005bebc) popup_fixed_preview_cale_window_t1

0x714e,	// (0x000564a2) popup_fixed_preview_cale_window_t2_ParamLimits

0x714e,	// (0x000564a2) popup_fixed_preview_cale_window_t2

0x7163,	// (0x000564b7) popup_fixed_preview_cale_window_t3_ParamLimits

0x7163,	// (0x000564b7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x0005eb44) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x0005eb44) popup_fixed_preview_cale_window_t

0x7178,	// (0x000564cc) list_single_fp_cale_pane_ParamLimits

0x7178,	// (0x000564cc) list_single_fp_cale_pane

0x718c,	// (0x000564e0) list_single_fp_cale_pane_g1_ParamLimits

0x718c,	// (0x000564e0) list_single_fp_cale_pane_g1

0xcb86,	// (0x0005beda) list_single_fp_cale_pane_g2_ParamLimits

0xcb86,	// (0x0005beda) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x0005eb4b) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x0005eb4b) list_single_fp_cale_pane_g

0x7198,	// (0x000564ec) list_single_fp_cale_pane_t1_ParamLimits

0x7198,	// (0x000564ec) list_single_fp_cale_pane_t1

0x71aa,	// (0x000564fe) list_single_fp_cale_pane_t2_ParamLimits

0x71aa,	// (0x000564fe) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x0005eb52) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x0005eb52) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0ed9,	// (0x0005022d) main_dialer_pane

0x71dd,	// (0x00056531) aid_cell_size_keypad

0x71e7,	// (0x0005653b) dialer_ne_pane

0x71ef,	// (0x00056543) grid_dialer_command_1_pane

0x71f7,	// (0x0005654b) grid_dialer_command_2_pane

0x71ff,	// (0x00056553) grid_dialer_keypad_pane

0x720f,	// (0x00056563) bg_popup_call_pane_cp06_ParamLimits

0x720f,	// (0x00056563) bg_popup_call_pane_cp06

0x721b,	// (0x0005656f) dialer_ne_clear_pane_ParamLimits

0x721b,	// (0x0005656f) dialer_ne_clear_pane

0xcb9f,	// (0x0005bef3) dialer_ne_pane_g1

0xcba7,	// (0x0005befb) dialer_ne_pane_t1_ParamLimits

0xcba7,	// (0x0005befb) dialer_ne_pane_t1

0x7227,	// (0x0005657b) dialer_ne_pane_t2_ParamLimits

0x7227,	// (0x0005657b) dialer_ne_pane_t2

0x7251,	// (0x000565a5) dialer_ne_pane_t3_ParamLimits

0x7251,	// (0x000565a5) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0005eb57) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0005eb57) dialer_ne_pane_t

0x7281,	// (0x000565d5) dialer_ne_pane_t3_copy1_ParamLimits

0x7281,	// (0x000565d5) dialer_ne_pane_t3_copy1

0x72b0,	// (0x00056604) cell_dialer_keypad_pane_ParamLimits

0x72b0,	// (0x00056604) cell_dialer_keypad_pane

0x72c5,	// (0x00056619) cell_dialer_command_1_pane_ParamLimits

0x72c5,	// (0x00056619) cell_dialer_command_1_pane

0x72db,	// (0x0005662f) cell_dialer_command_2_pane_ParamLimits

0x72db,	// (0x0005662f) cell_dialer_command_2_pane

0xcbb9,	// (0x0005bf0d) bg_button_pane_cp02_ParamLimits

0xcbb9,	// (0x0005bf0d) bg_button_pane_cp02

0x72ea,	// (0x0005663e) cell_dialer_keypad_pane_g1_ParamLimits

0x72ea,	// (0x0005663e) cell_dialer_keypad_pane_g1

0xcbb9,	// (0x0005bf0d) bg_button_pane_cp03_ParamLimits

0xcbb9,	// (0x0005bf0d) bg_button_pane_cp03

0x72ff,	// (0x00056653) cell_dialer_command_1_pane_g1_ParamLimits

0x72ff,	// (0x00056653) cell_dialer_command_1_pane_g1

0xcbc5,	// (0x0005bf19) bg_button_pane_cp04

0x7313,	// (0x00056667) cell_dialer_command_2_pane_g1

0xaf3d,	// (0x0005a291) bg_button_pane_cp06

0xcbcd,	// (0x0005bf21) dialer_ne_clear_pane_g1

0xae5a,	// (0x0005a1ae) navi_pane_g2

0x5102,	// (0x00054456) navi_pane_g3

0x0002,

0xf418,	// (0x0005e76c) navi_pane_g

0xaedc,	// (0x0005a230) navi_pane_mv_g2

0xaf04,	// (0x0005a258) navi_pane_mv_g5

0x5127,	// (0x0005447b) navi_pane_mv_t1

0x165f,	// (0x000509b3) main_clock2_pane

0x7347,	// (0x0005669b) main_clock2_list_pane_ParamLimits

0x7347,	// (0x0005669b) main_clock2_list_pane

0x7379,	// (0x000566cd) main_clock2_pane_t1_ParamLimits

0x7379,	// (0x000566cd) main_clock2_pane_t1

0x73b0,	// (0x00056704) main_clock2_pane_t2_ParamLimits

0x73b0,	// (0x00056704) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x0005eb5e) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x0005eb5e) main_clock2_pane_t

0x7432,	// (0x00056786) popup_clock_analogue_window_cp03_ParamLimits

0x7432,	// (0x00056786) popup_clock_analogue_window_cp03

0x7455,	// (0x000567a9) popup_clock_digital_window_cp02_ParamLimits

0x7455,	// (0x000567a9) popup_clock_digital_window_cp02

0x74c6,	// (0x0005681a) main_clock2_list_single_pane_ParamLimits

0x74c6,	// (0x0005681a) main_clock2_list_single_pane

0xaf3d,	// (0x0005a291) list_highlight_pane_cp05

0xcbd5,	// (0x0005bf29) main_clock2_list_single_pane_t1

0x42c3,	// (0x00053617) popup_toolbar_window_cp04_ParamLimits

0x6a01,	// (0x00055d55) camera2_autofocus_pane_g2_ParamLimits

0x6a01,	// (0x00055d55) camera2_autofocus_pane_g2

0x6a0d,	// (0x00055d61) camera2_autofocus_pane_g3_ParamLimits

0x6a0d,	// (0x00055d61) camera2_autofocus_pane_g3

0x6a19,	// (0x00055d6d) camera2_autofocus_pane_g4_ParamLimits

0x6a19,	// (0x00055d6d) camera2_autofocus_pane_g4

0x6a25,	// (0x00055d79) camera2_autofocus_pane_g5_ParamLimits

0x6a25,	// (0x00055d79) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0005eaa7) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0005eaa7) camera2_autofocus_pane_g

0x6ba6,	// (0x00055efa) camera2_autofocus_pane_cp_g2

0x6bae,	// (0x00055f02) camera2_autofocus_pane_cp_g3

0x6bb6,	// (0x00055f0a) camera2_autofocus_pane_cp_g4

0x6bbe,	// (0x00055f12) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x0005eb0d) camera2_autofocus_pane_cp_g

0x7207,	// (0x0005655b) popup_dialer_spcha_window

0x0ed9,	// (0x0005022d) bg_popup_sub_pane_cp07

0xcbe3,	// (0x0005bf37) list_spcha_pane

0xcbeb,	// (0x0005bf3f) list_single_spcha_pane_ParamLimits

0xcbeb,	// (0x0005bf3f) list_single_spcha_pane

0x0ed9,	// (0x0005022d) list_highlight_pane_cp06

0xcbfc,	// (0x0005bf50) list_single_spcha_pane_t1

0xbdc7,	// (0x0005b11b) popup_call2_audio_out_window_g4_ParamLimits

0xbdc7,	// (0x0005b11b) popup_call2_audio_out_window_g4

0x0ed9,	// (0x0005022d) main_imed2_pane

0xc3e4,	// (0x0005b738) popup_imed_adjust2_window

0x5ee5,	// (0x00055239) popup_imed_trans_window_ParamLimits

0x5ee5,	// (0x00055239) popup_imed_trans_window

0xc645,	// (0x0005b999) popup_blid_sat_info2_window_t1

0xc653,	// (0x0005b9a7) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x0005ea3c) popup_blid_sat_info2_window_t

0x7570,	// (0x000568c4) aid_size_cell_colour_35

0x7590,	// (0x000568e4) aid_size_cell_colour_112

0x75b0,	// (0x00056904) aid_size_cell_effect

0xc3be,	// (0x0005b712) bg_tb_trans_pane_cp02

0x1cb0,	// (0x00051004) heading_imed_pane

0x75d0,	// (0x00056924) listscroll_imed_pane

0xcc0a,	// (0x0005bf5e) heading_imed_pane_g1

0xcc12,	// (0x0005bf66) heading_imed_pane_t1

0xcc20,	// (0x0005bf74) grid_imed_colour_35_pane_ParamLimits

0xcc20,	// (0x0005bf74) grid_imed_colour_35_pane

0x75dc,	// (0x00056930) grid_imed_effect_pane

0xcc33,	// (0x0005bf87) list_imed_aspect_pane

0x75ef,	// (0x00056943) scroll_pane_cp027_ParamLimits

0x75ef,	// (0x00056943) scroll_pane_cp027

0x75fb,	// (0x0005694f) cell_imed_effect_pane_ParamLimits

0x75fb,	// (0x0005694f) cell_imed_effect_pane

0xcc3b,	// (0x0005bf8f) cell_imed_colour_pane_ParamLimits

0xcc3b,	// (0x0005bf8f) cell_imed_colour_pane

0xcc75,	// (0x0005bfc9) cell_imed_colour_pane_g1_ParamLimits

0xcc75,	// (0x0005bfc9) cell_imed_colour_pane_g1

0xcc86,	// (0x0005bfda) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc86,	// (0x0005bfda) hgihlgiht_grid_pane_cp016

0x7620,	// (0x00056974) cell_imed_effect_pane_g1

0x7628,	// (0x0005697c) grid_highlight_pane_cp017

0xcc97,	// (0x0005bfeb) list_imed_single_pane_ParamLimits

0xcc97,	// (0x0005bfeb) list_imed_single_pane

0x0ed9,	// (0x0005022d) list_highlight_pane_cp07

0xccaa,	// (0x0005bffe) list_imed_aspect_pane_comp1_t1

0xc3be,	// (0x0005b712) bg_tb_trans_pane_cp05

0xccca,	// (0x0005c01e) popup_imed_adjust2_window_g1

0xccf1,	// (0x0005c045) popup_imed_adjust2_window_t1

0xcd09,	// (0x0005c05d) slider_imed_adjust_pane

0xcd1d,	// (0x0005c071) slider_imed_adjust_pane_g1

0xcd2d,	// (0x0005c081) slider_imed_adjust_pane_g2

0xcd3d,	// (0x0005c091) slider_imed_adjust_pane_g3

0xcd4e,	// (0x0005c0a2) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x0005eb7b) slider_imed_adjust_pane_g

0x7631,	// (0x00056985) aid_size_cell_clipart2

0x763d,	// (0x00056991) grid_imed_clipart_pane

0xcd5f,	// (0x0005c0b3) scroll_pane_cp031

0x7647,	// (0x0005699b) cell_imed_clipart_pane_ParamLimits

0x7647,	// (0x0005699b) cell_imed_clipart_pane

0x765f,	// (0x000569b3) cell_imed_clipart_pane_g1

0x0ed9,	// (0x0005022d) grid_highlight_pane_cp014

0x735a,	// (0x000566ae) main_clock2_pane_g1_ParamLimits

0x735a,	// (0x000566ae) main_clock2_pane_g1

0x7471,	// (0x000567c5) aid_call2_pane_cp10

0x7483,	// (0x000567d7) aid_call_pane_cp10

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g1

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g2

0x7495,	// (0x000567e9) popup_clock_analogue_window_cp10_g3

0x7495,	// (0x000567e9) popup_clock_analogue_window_cp10_g4

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0005eb69) popup_clock_analogue_window_cp10_g

0x74a7,	// (0x000567fb) popup_clock_analogue_window_cp10_t1

0x74d8,	// (0x0005682c) clock_digital_number_pane_cp10_ParamLimits

0x74d8,	// (0x0005682c) clock_digital_number_pane_cp10

0x74f0,	// (0x00056844) clock_digital_number_pane_cp11_ParamLimits

0x74f0,	// (0x00056844) clock_digital_number_pane_cp11

0x7508,	// (0x0005685c) clock_digital_number_pane_cp12_ParamLimits

0x7508,	// (0x0005685c) clock_digital_number_pane_cp12

0x7520,	// (0x00056874) clock_digital_number_pane_cp13_ParamLimits

0x7520,	// (0x00056874) clock_digital_number_pane_cp13

0x7538,	// (0x0005688c) clock_digital_separator_pane_cp10_ParamLimits

0x7538,	// (0x0005688c) clock_digital_separator_pane_cp10

0x7550,	// (0x000568a4) popup_clock_digital_window_cp02_t1_ParamLimits

0x7550,	// (0x000568a4) popup_clock_digital_window_cp02_t1

0x1588,	// (0x000508dc) clock_digital_number_pane_cp10_g1

0x1588,	// (0x000508dc) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x0005eb84) clock_digital_number_pane_cp10_g

0x1588,	// (0x000508dc) clock_digital_separator_pane_cp10_g1

0x1588,	// (0x000508dc) clock_digital_separator_pane_g2_cp10

0xaf0d,	// (0x0005a261) navi_pane_vded_g4

0xaf16,	// (0x0005a26a) navi_pane_vded_g5

0xaf1f,	// (0x0005a273) navi_pane_vded_t1

0x0ed9,	// (0x0005022d) main_vded_pane

0x7668,	// (0x000569bc) main_vded_pane_g1

0x7672,	// (0x000569c6) main_vded_pane_g2

0x767a,	// (0x000569ce) main_vded_pane_g3

0x0002,

0xf835,	// (0x0005eb89) main_vded_pane_g

0x7682,	// (0x000569d6) main_vded_pane_t1

0x7690,	// (0x000569e4) main_vded_pane_t2

0x0001,

0xf83c,	// (0x0005eb90) main_vded_pane_t

0x769e,	// (0x000569f2) vded_slider_pane

0x76a6,	// (0x000569fa) vded_video_pane

0xcd67,	// (0x0005c0bb) vded_video_pane_g1

0x76ae,	// (0x00056a02) vded_video_pane_g2

0xc801,	// (0x0005bb55) vded_video_pane_g3

0x0002,

0xf841,	// (0x0005eb95) vded_video_pane_g

0xcd71,	// (0x0005c0c5) vded_slider_pane_g1

0xc554,	// (0x0005b8a8) vded_slider_pane_g2

0xcd7a,	// (0x0005c0ce) vded_slider_pane_g3

0xcd83,	// (0x0005c0d7) vded_slider_pane_g4

0xcd8c,	// (0x0005c0e0) vded_slider_pane_g5

0x0004,

0xf848,	// (0x0005eb9c) vded_slider_pane_g

0x70a6,	// (0x000563fa) mup3_rocker_pane_ParamLimits

0x70a6,	// (0x000563fa) mup3_rocker_pane

0x76b7,	// (0x00056a0b) mup3_control_keys_pane_g1

0x76bf,	// (0x00056a13) mup3_control_keys_pane_g2

0x76c7,	// (0x00056a1b) mup3_control_keys_pane_g3

0x76cf,	// (0x00056a23) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0005eba7) mup3_control_keys_pane_g

0x3569,	// (0x000528bd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3569,	// (0x000528bd) popup_toolbar2_fixed_window_cp01

0x70d4,	// (0x00056428) popup_toolbar2_fixed_window_cp02_ParamLimits

0x70d4,	// (0x00056428) popup_toolbar2_fixed_window_cp02

0xb706,	// (0x0005aa5a) popup_call2_audio_second_window_t4_ParamLimits

0xb706,	// (0x0005aa5a) popup_call2_audio_second_window_t4

0xbc34,	// (0x0005af88) popup_call2_audio_first_window_t6_ParamLimits

0xbc34,	// (0x0005af88) popup_call2_audio_first_window_t6

0xbeca,	// (0x0005b21e) popup_call2_audio_out_window_t6_ParamLimits

0xbeca,	// (0x0005b21e) popup_call2_audio_out_window_t6

0x0ed9,	// (0x0005022d) main_vitu_pane

0x76df,	// (0x00056a33) aid_size_cell_itu_ParamLimits

0x76df,	// (0x00056a33) aid_size_cell_itu

0x2045,	// (0x00051399) bg_popup_window_pane_cp08_ParamLimits

0x2045,	// (0x00051399) bg_popup_window_pane_cp08

0x76f5,	// (0x00056a49) field_vitu_entry_pane_ParamLimits

0x76f5,	// (0x00056a49) field_vitu_entry_pane

0x7708,	// (0x00056a5c) grid_vitu_function_pane_ParamLimits

0x7708,	// (0x00056a5c) grid_vitu_function_pane

0x771d,	// (0x00056a71) grid_vitu_itu_pane_ParamLimits

0x771d,	// (0x00056a71) grid_vitu_itu_pane

0x7733,	// (0x00056a87) cell_vitu_itu_pane_ParamLimits

0x7733,	// (0x00056a87) cell_vitu_itu_pane

0x7755,	// (0x00056aa9) cell_vitu_function_pane_ParamLimits

0x7755,	// (0x00056aa9) cell_vitu_function_pane

0x2045,	// (0x00051399) bg_popup_sub_pane_cp08_ParamLimits

0x2045,	// (0x00051399) bg_popup_sub_pane_cp08

0x776e,	// (0x00056ac2) field_vitu_entry_pane_t1_ParamLimits

0x776e,	// (0x00056ac2) field_vitu_entry_pane_t1

0xcdad,	// (0x0005c101) field_vitu_entry_pane_t2_ParamLimits

0xcdad,	// (0x0005c101) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0005ebb5) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0005ebb5) field_vitu_entry_pane_t

0xcdca,	// (0x0005c11e) bg_button_pane_cp05_ParamLimits

0xcdca,	// (0x0005c11e) bg_button_pane_cp05

0x778a,	// (0x00056ade) cell_vitu_itu_pane_g1

0x77a2,	// (0x00056af6) cell_vitu_itu_pane_t1_ParamLimits

0x77a2,	// (0x00056af6) cell_vitu_itu_pane_t1

0x77b4,	// (0x00056b08) cell_vitu_itu_pane_t2_ParamLimits

0x77b4,	// (0x00056b08) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0005ebba) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0005ebba) cell_vitu_itu_pane_t

0xcdd8,	// (0x0005c12c) bg_button_pane_cp07

0x77e9,	// (0x00056b3d) cell_vitu_function_pane_g1

0xaa88,	// (0x00059ddc) main_calc_pane_g1

0x33cd,	// (0x00052721) aid_visual_content_pane

0x0ed9,	// (0x0005022d) main_vradio_pane

0x77f2,	// (0x00056b46) main_vradio_pane_g1_ParamLimits

0x77f2,	// (0x00056b46) main_vradio_pane_g1

0xcde2,	// (0x0005c136) main_vradio_pane_g2_ParamLimits

0xcde2,	// (0x0005c136) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x0005ebc1) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x0005ebc1) main_vradio_pane_g

0x7808,	// (0x00056b5c) main_vradio_pane_t1_ParamLimits

0x7808,	// (0x00056b5c) main_vradio_pane_t1

0x781d,	// (0x00056b71) main_vradio_pane_t2_ParamLimits

0x781d,	// (0x00056b71) main_vradio_pane_t2

0xcdef,	// (0x0005c143) main_vradio_pane_t3_ParamLimits

0xcdef,	// (0x0005c143) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0005ebc6) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0005ebc6) main_vradio_pane_t

0x7832,	// (0x00056b86) vradio_rocker_control_pane_ParamLimits

0x7832,	// (0x00056b86) vradio_rocker_control_pane

0x7844,	// (0x00056b98) vradio_station_info_pane_ParamLimits

0x7844,	// (0x00056b98) vradio_station_info_pane

0xce01,	// (0x0005c155) vradio_frequency_info_pane_ParamLimits

0xce01,	// (0x0005c155) vradio_frequency_info_pane

0xc801,	// (0x0005bb55) vradio_station_info_pane_g1

0xce10,	// (0x0005c164) vradio_station_info_pane_t1_ParamLimits

0xce10,	// (0x0005c164) vradio_station_info_pane_t1

0xce32,	// (0x0005c186) vradio_station_info_pane_t2_ParamLimits

0xce32,	// (0x0005c186) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x0005ebcd) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x0005ebcd) vradio_station_info_pane_t

0xce44,	// (0x0005c198) vradio_tuning_pane

0xce4c,	// (0x0005c1a0) vradio_rocker_control_pane_g1

0xce54,	// (0x0005c1a8) vradio_rocker_control_pane_g2

0xce5c,	// (0x0005c1b0) vradio_rocker_control_pane_g3

0xce64,	// (0x0005c1b8) vradio_rocker_control_pane_g4

0xce6c,	// (0x0005c1c0) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x0005ebd2) vradio_rocker_control_pane_g

0x7854,	// (0x00056ba8) vradio_frequency_info_pane_g1

0xce74,	// (0x0005c1c8) vradio_frequency_info_pane_t1_ParamLimits

0xce74,	// (0x0005c1c8) vradio_frequency_info_pane_t1

0x785e,	// (0x00056bb2) vradio_tuning_pane_g1

0x7867,	// (0x00056bbb) vradio_tuning_pane_t1

0x0efb,	// (0x0005024f) area_side_right_pane_ParamLimits

0x0efb,	// (0x0005024f) area_side_right_pane

0xc385,	// (0x0005b6d9) status_small_pane_g1

0xc38d,	// (0x0005b6e1) status_small_pane_g2

0xc396,	// (0x0005b6ea) status_small_pane_g3

0xc39f,	// (0x0005b6f3) status_small_pane_g4

0x0003,

0xf63e,	// (0x0005e992) status_small_pane_g

0xc3a8,	// (0x0005b6fc) status_small_pane_t1

0x0ed9,	// (0x0005022d) main_video3_pane

0xce88,	// (0x0005c1dc) cams_zoom_vslider_pane

0xce90,	// (0x0005c1e4) image3_wide_pane_ParamLimits

0xce90,	// (0x0005c1e4) image3_wide_pane

0xceaa,	// (0x0005c1fe) image3_wide_small_pane

0xceb4,	// (0x0005c208) main_video3_pane_g1_ParamLimits

0xceb4,	// (0x0005c208) main_video3_pane_g1

0xced0,	// (0x0005c224) main_video3_pane_g2_ParamLimits

0xced0,	// (0x0005c224) main_video3_pane_g2

0x0001,

0xf889,	// (0x0005ebdd) main_video3_pane_g_ParamLimits

0xf889,	// (0x0005ebdd) main_video3_pane_g

0xceec,	// (0x0005c240) main_video3_pane_t1_ParamLimits

0xceec,	// (0x0005c240) main_video3_pane_t1

0xcf17,	// (0x0005c26b) main_video3_pane_t2_ParamLimits

0xcf17,	// (0x0005c26b) main_video3_pane_t2

0xcf42,	// (0x0005c296) main_video3_pane_t3_ParamLimits

0xcf42,	// (0x0005c296) main_video3_pane_t3

0x0002,

0xf88e,	// (0x0005ebe2) main_video3_pane_t_ParamLimits

0xf88e,	// (0x0005ebe2) main_video3_pane_t

0xcf6d,	// (0x0005c2c1) cams_zoom_vslider_pane_g1

0xcf76,	// (0x0005c2ca) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0005ebe9) cams_zoom_vslider_pane_g

0xcf7e,	// (0x0005c2d2) small_slider_vertical_pane

0xc801,	// (0x0005bb55) small_slider_vertical_pane_g1

0xc801,	// (0x0005bb55) small_slider_vertical_pane_g2

0xcf86,	// (0x0005c2da) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x0005ebee) small_slider_vertical_pane_g

0x0ed9,	// (0x0005022d) main_hwr_training_pane

0xcf8f,	// (0x0005c2e3) hwr_training_instruct_pane_ParamLimits

0xcf8f,	// (0x0005c2e3) hwr_training_instruct_pane

0x7876,	// (0x00056bca) hwr_training_navi_pane_ParamLimits

0x7876,	// (0x00056bca) hwr_training_navi_pane

0x788d,	// (0x00056be1) hwr_training_write_pane_ParamLimits

0x788d,	// (0x00056be1) hwr_training_write_pane

0x0ed9,	// (0x0005022d) bg_frame_shadow_pane

0xcfbe,	// (0x0005c312) hwr_training_write_pane_g1

0xcfc6,	// (0x0005c31a) hwr_training_write_pane_g2

0xcfce,	// (0x0005c322) hwr_training_write_pane_g3

0xcfd6,	// (0x0005c32a) hwr_training_write_pane_g4

0xcfde,	// (0x0005c332) hwr_training_write_pane_g5

0xcfe6,	// (0x0005c33a) hwr_training_write_pane_g6

0xcfee,	// (0x0005c342) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0005ebf5) hwr_training_write_pane_g

0xecc2,	// (0x0005e016) hwr_training_navi_pane_g1_ParamLimits

0xecc2,	// (0x0005e016) hwr_training_navi_pane_g1

0xecd4,	// (0x0005e028) hwr_training_navi_pane_g2_ParamLimits

0xecd4,	// (0x0005e028) hwr_training_navi_pane_g2

0xece6,	// (0x0005e03a) hwr_training_navi_pane_g3_ParamLimits

0xece6,	// (0x0005e03a) hwr_training_navi_pane_g3

0xecf6,	// (0x0005e04a) hwr_training_navi_pane_g4_ParamLimits

0xecf6,	// (0x0005e04a) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x0005ec04) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x0005ec04) hwr_training_navi_pane_g

0xed03,	// (0x0005e057) hwr_training_navi_pane_t1

0x78cd,	// (0x00056c21) list_single_hwr_training_instruct_pane_ParamLimits

0x78cd,	// (0x00056c21) list_single_hwr_training_instruct_pane

0xcff6,	// (0x0005c34a) list_single_hwr_training_instruct_pane_t1

0xc741,	// (0x0005ba95) bg_frame_shadow_pane_g1

0xd005,	// (0x0005c359) bg_frame_shadow_pane_g2

0xd00d,	// (0x0005c361) bg_frame_shadow_pane_g3

0xd015,	// (0x0005c369) bg_frame_shadow_pane_g4

0xd01d,	// (0x0005c371) bg_frame_shadow_pane_g5

0xd025,	// (0x0005c379) bg_frame_shadow_pane_g6

0xd02d,	// (0x0005c381) bg_frame_shadow_pane_g7

0x172a,	// (0x00050a7e) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x0005ec0f) bg_frame_shadow_pane_g

0x0ed9,	// (0x0005022d) main_video_tele_dialer_pane

0x78e5,	// (0x00056c39) aid_size_cell_video_keypad_ParamLimits

0x78e5,	// (0x00056c39) aid_size_cell_video_keypad

0x78ff,	// (0x00056c53) grid_video_dialer_keypad_pane_ParamLimits

0x78ff,	// (0x00056c53) grid_video_dialer_keypad_pane

0x7941,	// (0x00056c95) video_down_pane_cp_ParamLimits

0x7941,	// (0x00056c95) video_down_pane_cp

0x7971,	// (0x00056cc5) cell_video_dialer_keypad_pane_ParamLimits

0x7971,	// (0x00056cc5) cell_video_dialer_keypad_pane

0xd035,	// (0x0005c389) bg_button_pane_cp08_ParamLimits

0xd035,	// (0x0005c389) bg_button_pane_cp08

0x7993,	// (0x00056ce7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7993,	// (0x00056ce7) cell_video_dialer_keypad_pane_g1

0x7090,	// (0x000563e4) mup3_rocker2_pane_ParamLimits

0x7090,	// (0x000563e4) mup3_rocker2_pane

0xc801,	// (0x0005bb55) mup3_rocker2_pane_g1

0x5dde,	// (0x00055132) main_dialer2_pane

0x0ed9,	// (0x0005022d) main_mp4_pane

0xed19,	// (0x0005e06d) main_mp4_pane_g1_ParamLimits

0xed19,	// (0x0005e06d) main_mp4_pane_g1

0xed19,	// (0x0005e06d) main_mp4_pane_g2_ParamLimits

0xed19,	// (0x0005e06d) main_mp4_pane_g2

0x79ce,	// (0x00056d22) main_mp4_pane_g3_ParamLimits

0x79ce,	// (0x00056d22) main_mp4_pane_g3

0xed27,	// (0x0005e07b) main_mp4_pane_g4_ParamLimits

0xed27,	// (0x0005e07b) main_mp4_pane_g4

0xed55,	// (0x0005e0a9) main_mp4_pane_g5_ParamLimits

0xed55,	// (0x0005e0a9) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x0005ec2f) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x0005ec2f) main_mp4_pane_g

0xedb1,	// (0x0005e105) main_mp4_pane_t1_ParamLimits

0xedb1,	// (0x0005e105) main_mp4_pane_t1

0xee09,	// (0x0005e15d) main_mp4_pane_t2_ParamLimits

0xee09,	// (0x0005e15d) main_mp4_pane_t2

0xd041,	// (0x0005c395) main_mp4_pane_t3_ParamLimits

0xd041,	// (0x0005c395) main_mp4_pane_t3

0xee5b,	// (0x0005e1af) main_mp4_pane_t4_ParamLimits

0xee5b,	// (0x0005e1af) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x0005ec3c) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x0005ec3c) main_mp4_pane_t

0xee9b,	// (0x0005e1ef) mp4_progress_pane_ParamLimits

0xee9b,	// (0x0005e1ef) mp4_progress_pane

0xeedf,	// (0x0005e233) mp4_rocker_pane_ParamLimits

0xeedf,	// (0x0005e233) mp4_rocker_pane

0xd06f,	// (0x0005c3c3) mp4_progress_pane_t1

0xd086,	// (0x0005c3da) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x0005ec45) mp4_progress_pane_t

0xd09d,	// (0x0005c3f1) mup_progress_pane_cp04

0xd0a9,	// (0x0005c3fd) mp4_rocker_pane_g1

0x79fe,	// (0x00056d52) aid_cell_size_keypad2_ParamLimits

0x79fe,	// (0x00056d52) aid_cell_size_keypad2

0x7a18,	// (0x00056d6c) dialer2_ne_pane_ParamLimits

0x7a18,	// (0x00056d6c) dialer2_ne_pane

0x7a2d,	// (0x00056d81) grid_dialer2_keypad_pane_ParamLimits

0x7a2d,	// (0x00056d81) grid_dialer2_keypad_pane

0xc5ee,	// (0x0005b942) bg_popup_call_pane_cp07_ParamLimits

0xc5ee,	// (0x0005b942) bg_popup_call_pane_cp07

0x7a43,	// (0x00056d97) dialer2_ne_pane_t1_ParamLimits

0x7a43,	// (0x00056d97) dialer2_ne_pane_t1

0x7a80,	// (0x00056dd4) cell_dialer2_keypad_pane_ParamLimits

0x7a80,	// (0x00056dd4) cell_dialer2_keypad_pane

0xd0c5,	// (0x0005c419) bg_button_pane_pane_cp04_ParamLimits

0xd0c5,	// (0x0005c419) bg_button_pane_pane_cp04

0x7aa2,	// (0x00056df6) cell_dialer2_keypad_pane_g1_ParamLimits

0x7aa2,	// (0x00056df6) cell_dialer2_keypad_pane_g1

0x4208,	// (0x0005355c) aid_placing_vt_set_content_ParamLimits

0x4208,	// (0x0005355c) aid_placing_vt_set_content

0x4226,	// (0x0005357a) aid_placing_vt_set_title_ParamLimits

0x4226,	// (0x0005357a) aid_placing_vt_set_title

0x0ed9,	// (0x0005022d) main_image3_pane

0x7b31,	// (0x00056e85) area_side_right_pane_cp01_ParamLimits

0x7b31,	// (0x00056e85) area_side_right_pane_cp01

0xed19,	// (0x0005e06d) main_image3_pane_g1_ParamLimits

0xed19,	// (0x0005e06d) main_image3_pane_g1

0x7b48,	// (0x00056e9c) main_image3_pane_g2_ParamLimits

0x7b48,	// (0x00056e9c) main_image3_pane_g2

0x7b6e,	// (0x00056ec2) main_image3_pane_g3_ParamLimits

0x7b6e,	// (0x00056ec2) main_image3_pane_g3

0x7b94,	// (0x00056ee8) main_image3_pane_g4_ParamLimits

0x7b94,	// (0x00056ee8) main_image3_pane_g4

0x0003,

0xf900,	// (0x0005ec54) main_image3_pane_g_ParamLimits

0xf900,	// (0x0005ec54) main_image3_pane_g

0x7bba,	// (0x00056f0e) main_image3_pane_t1_ParamLimits

0x7bba,	// (0x00056f0e) main_image3_pane_t1

0x7c12,	// (0x00056f66) main_image3_pane_t2_ParamLimits

0x7c12,	// (0x00056f66) main_image3_pane_t2

0x7c64,	// (0x00056fb8) main_image3_pane_t3_ParamLimits

0x7c64,	// (0x00056fb8) main_image3_pane_t3

0x0003,

0xf909,	// (0x0005ec5d) main_image3_pane_t_ParamLimits

0xf909,	// (0x0005ec5d) main_image3_pane_t

0x2045,	// (0x00051399) grid_sctrl_middle_pane_cp01_ParamLimits

0x2045,	// (0x00051399) grid_sctrl_middle_pane_cp01

0x7ce4,	// (0x00057038) cell_sctrl_middle_pane_cp01_ParamLimits

0x7ce4,	// (0x00057038) cell_sctrl_middle_pane_cp01

0x7d01,	// (0x00057055) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7d01,	// (0x00057055) cell_sctrl_middle_pane_cp01_g1

0x0ed9,	// (0x0005022d) main_call4_pane

0x7d17,	// (0x0005706b) aid_size_button_call4_ParamLimits

0x7d17,	// (0x0005706b) aid_size_button_call4

0x7d44,	// (0x00057098) call4_windows_pane_ParamLimits

0x7d44,	// (0x00057098) call4_windows_pane

0x7d5a,	// (0x000570ae) grid_call4_button_pane_ParamLimits

0x7d5a,	// (0x000570ae) grid_call4_button_pane

0xd0e9,	// (0x0005c43d) call4_windows_conf_pane

0x7d79,	// (0x000570cd) popup_call4_audio_first_window_ParamLimits

0x7d79,	// (0x000570cd) popup_call4_audio_first_window

0x7d99,	// (0x000570ed) popup_call4_audio_second_window_ParamLimits

0x7d99,	// (0x000570ed) popup_call4_audio_second_window

0xd11c,	// (0x0005c470) popup_call4_audio_wait_window_ParamLimits

0xd11c,	// (0x0005c470) popup_call4_audio_wait_window

0x7dab,	// (0x000570ff) cell_call4_button_pane_ParamLimits

0x7dab,	// (0x000570ff) cell_call4_button_pane

0x7dd0,	// (0x00057124) bg_button_pane_cp09_ParamLimits

0x7dd0,	// (0x00057124) bg_button_pane_cp09

0x7ddc,	// (0x00057130) cell_call4_button_pane_g1_ParamLimits

0x7ddc,	// (0x00057130) cell_call4_button_pane_g1

0x7e02,	// (0x00057156) cell_call4_button_pane_t1_ParamLimits

0x7e02,	// (0x00057156) cell_call4_button_pane_t1

0xd162,	// (0x0005c4b6) popup_call4_audio_conf_window_ParamLimits

0xd162,	// (0x0005c4b6) popup_call4_audio_conf_window

0x70ea,	// (0x0005643e) mup3_progress_pane_t1_ParamLimits

0x7100,	// (0x00056454) mup3_progress_pane_t2_ParamLimits

0xcb1f,	// (0x0005be73) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0005eb36) mup3_progress_pane_t_ParamLimits

0xcb36,	// (0x0005be8a) mup_progress_pane_cp03_ParamLimits

0x76d7,	// (0x00056a2b) mup3_control_keys_pane_g4_copy1

0xeec9,	// (0x0005e21d) mp4_rocker2_pane_ParamLimits

0xeec9,	// (0x0005e21d) mp4_rocker2_pane

0xd176,	// (0x0005c4ca) mp4_rocker2_pane_g1

0xd17e,	// (0x0005c4d2) mp4_rocker2_pane_g2

0xef2f,	// (0x0005e283) mp4_rocker2_pane_g3

0xef37,	// (0x0005e28b) mp4_rocker2_pane_g4

0xef3f,	// (0x0005e293) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x0005ec66) mp4_rocker2_pane_g

0x0ed9,	// (0x0005022d) main_camera4_pane

0x0ed9,	// (0x0005022d) main_video4_pane

0x7913,	// (0x00056c67) main_video_tele_dialer_pane_t1_ParamLimits

0x7913,	// (0x00056c67) main_video_tele_dialer_pane_t1

0x792a,	// (0x00056c7e) main_video_tele_dialer_pane_t2_ParamLimits

0x792a,	// (0x00056c7e) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x0005ec20) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x0005ec20) main_video_tele_dialer_pane_t

0x7e40,	// (0x00057194) cam4_autofocus_pane_ParamLimits

0x7e40,	// (0x00057194) cam4_autofocus_pane

0x7e54,	// (0x000571a8) cam4_image_uncrop_pane_ParamLimits

0x7e54,	// (0x000571a8) cam4_image_uncrop_pane

0x7e6b,	// (0x000571bf) cam4_indicators_pane_ParamLimits

0x7e6b,	// (0x000571bf) cam4_indicators_pane

0x7e8f,	// (0x000571e3) main_camera4_pane_g1_ParamLimits

0x7e8f,	// (0x000571e3) main_camera4_pane_g1

0x7e9b,	// (0x000571ef) main_camera4_pane_g2_ParamLimits

0x7e9b,	// (0x000571ef) main_camera4_pane_g2

0x7e9b,	// (0x000571ef) main_camera4_pane_g3_ParamLimits

0x7e9b,	// (0x000571ef) main_camera4_pane_g3

0x7ea7,	// (0x000571fb) main_camera4_pane_g4_ParamLimits

0x7ea7,	// (0x000571fb) main_camera4_pane_g4

0x7eb3,	// (0x00057207) main_camera4_pane_g5_ParamLimits

0x7eb3,	// (0x00057207) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x0005ec71) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x0005ec71) main_camera4_pane_g

0x7ed0,	// (0x00057224) main_camera4_pane_t1_ParamLimits

0x7ed0,	// (0x00057224) main_camera4_pane_t1

0xef57,	// (0x0005e2ab) bg_tb_trans_pane_cp06

0xef6d,	// (0x0005e2c1) cam4_indicators_pane_g1

0xef7d,	// (0x0005e2d1) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x0005ec8c) cam4_indicators_pane_g

0xef9d,	// (0x0005e2f1) cam4_indicators_pane_t1

0x7f37,	// (0x0005728b) main_video4_pane_g1_ParamLimits

0x7f37,	// (0x0005728b) main_video4_pane_g1

0x7f49,	// (0x0005729d) main_video4_pane_g2_ParamLimits

0x7f49,	// (0x0005729d) main_video4_pane_g2

0x7f49,	// (0x0005729d) main_video4_pane_g3_ParamLimits

0x7f49,	// (0x0005729d) main_video4_pane_g3

0x7f58,	// (0x000572ac) main_video4_pane_g4_ParamLimits

0x7f58,	// (0x000572ac) main_video4_pane_g4

0x0004,

0xf93f,	// (0x0005ec93) main_video4_pane_g_ParamLimits

0xf93f,	// (0x0005ec93) main_video4_pane_g

0x7f76,	// (0x000572ca) vid4_indicators_pane_ParamLimits

0x7f76,	// (0x000572ca) vid4_indicators_pane

0x7f9e,	// (0x000572f2) video4_image_uncrop_cif_pane_ParamLimits

0x7f9e,	// (0x000572f2) video4_image_uncrop_cif_pane

0x7fb6,	// (0x0005730a) video4_image_uncrop_nhd_pane_ParamLimits

0x7fb6,	// (0x0005730a) video4_image_uncrop_nhd_pane

0x7fca,	// (0x0005731e) video4_image_uncrop_vga_pane_ParamLimits

0x7fca,	// (0x0005731e) video4_image_uncrop_vga_pane

0xefbf,	// (0x0005e313) bg_tb_trans_pane_cp07

0x7fe2,	// (0x00057336) vid4_indicators_pane_g1

0x7fef,	// (0x00057343) vid4_indicators_pane_g2

0x7ffc,	// (0x00057350) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x0005ec9e) vid4_indicators_pane_g

0x8021,	// (0x00057375) vid4_indicators_pane_t1

0x8033,	// (0x00057387) cam4_autofocus_pane_g1

0x803b,	// (0x0005738f) cam4_autofocus_pane_g2

0x8043,	// (0x00057397) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0005eca9) cam4_autofocus_pane_g

0x804b,	// (0x0005739f) cam4_autofocus_pane_g3_copy1

0x7955,	// (0x00056ca9) video_down_pane_cp_t1

0x7963,	// (0x00056cb7) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0005ec25) video_down_pane_cp_t

0x2045,	// (0x00051399) popup_vitu2_window_ParamLimits

0x2045,	// (0x00051399) popup_vitu2_window

0x8053,	// (0x000573a7) aid_size_cell2_itu2_ParamLimits

0x8053,	// (0x000573a7) aid_size_cell2_itu2

0x8079,	// (0x000573cd) aid_size_cell_itu2_ParamLimits

0x8079,	// (0x000573cd) aid_size_cell_itu2

0x80cb,	// (0x0005741f) bg_popup_window_pane_cp09_ParamLimits

0x80cb,	// (0x0005741f) bg_popup_window_pane_cp09

0x80d9,	// (0x0005742d) field_vitu2_entry_pane_ParamLimits

0x80d9,	// (0x0005742d) field_vitu2_entry_pane

0x80f3,	// (0x00057447) grid_vitu2_function_pane_ParamLimits

0x80f3,	// (0x00057447) grid_vitu2_function_pane

0x812e,	// (0x00057482) grid_vitu2_itu_pane_ParamLimits

0x812e,	// (0x00057482) grid_vitu2_itu_pane

0x8193,	// (0x000574e7) cell_vitu2_itu_pane_ParamLimits

0x8193,	// (0x000574e7) cell_vitu2_itu_pane

0x81b5,	// (0x00057509) cell_vitu2_function_pane_ParamLimits

0x81b5,	// (0x00057509) cell_vitu2_function_pane

0xd186,	// (0x0005c4da) bg_popup_call_pane_cp08_ParamLimits

0xd186,	// (0x0005c4da) bg_popup_call_pane_cp08

0xd19f,	// (0x0005c4f3) field_vitu2_entry_pane_g1

0xd1ab,	// (0x0005c4ff) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x0005ecb0) field_vitu2_entry_pane_g

0xd1c5,	// (0x0005c519) field_vitu2_entry_pane_t1_ParamLimits

0xd1c5,	// (0x0005c519) field_vitu2_entry_pane_t1

0xd1e1,	// (0x0005c535) field_vitu2_entry_pane_t2_ParamLimits

0xd1e1,	// (0x0005c535) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0005ecb7) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0005ecb7) field_vitu2_entry_pane_t

0x81f4,	// (0x00057548) bg_button_pane_cp010_ParamLimits

0x81f4,	// (0x00057548) bg_button_pane_cp010

0x8202,	// (0x00057556) cell_vitu2_itu_pane_g1

0x8220,	// (0x00057574) cell_vitu2_itu_pane_t1_ParamLimits

0x8220,	// (0x00057574) cell_vitu2_itu_pane_t1

0x32c0,	// (0x00052614) cell_vitu2_itu_pane_t2_ParamLimits

0x32c0,	// (0x00052614) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x0005ecc1) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x0005ecc1) cell_vitu2_itu_pane_t

0xefcd,	// (0x0005e321) bg_button_pane_cp011

0x8286,	// (0x000575da) cell_vitu2_function_pane_g1

0x0ed9,	// (0x0005022d) main_myfav_hc_pane

0x7cb0,	// (0x00057004) popup_image3_note_pane_ParamLimits

0x7cb0,	// (0x00057004) popup_image3_note_pane

0x7cca,	// (0x0005701e) popup_image3_tool_bar_pane_ParamLimits

0x7cca,	// (0x0005701e) popup_image3_tool_bar_pane

0x3344,	// (0x00052698) cell_vitu2_itu_pane_t3_ParamLimits

0x3344,	// (0x00052698) cell_vitu2_itu_pane_t3

0x0ed9,	// (0x0005022d) bg_popup_trans_pane

0xd206,	// (0x0005c55a) grid_image3_tool_bar_pane

0xd210,	// (0x0005c564) bg_popup_trans_pane_g1

0x1a83,	// (0x00050dd7) bg_popup_trans_pane_g2

0xd218,	// (0x0005c56c) bg_popup_trans_pane_g3

0xd220,	// (0x0005c574) bg_popup_trans_pane_g4

0xd228,	// (0x0005c57c) bg_popup_trans_pane_g5

0xd230,	// (0x0005c584) bg_popup_trans_pane_g6

0xd238,	// (0x0005c58c) bg_popup_trans_pane_g7

0xd240,	// (0x0005c594) bg_popup_trans_pane_g8

0x1a63,	// (0x00050db7) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0005ecc8) bg_popup_trans_pane_g

0x205f,	// (0x000513b3) cell_image3_tool_bar_pane_ParamLimits

0x205f,	// (0x000513b3) cell_image3_tool_bar_pane

0xc801,	// (0x0005bb55) cell_image3_tool_bar_pane_g1

0x0ed9,	// (0x0005022d) bg_popup_trans_pane_cp1

0xd248,	// (0x0005c59c) popup_image3_note_pane_t1

0xd256,	// (0x0005c5aa) popup_image3_note_pane_t2

0xd264,	// (0x0005c5b8) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x0005ecdb) popup_image3_note_pane_t

0xd272,	// (0x0005c5c6) popup_image3_note_pane_t3_copy1

0x829a,	// (0x000575ee) bg_myfav_hc_instruction_pane_ParamLimits

0x829a,	// (0x000575ee) bg_myfav_hc_instruction_pane

0x82ac,	// (0x00057600) cell_myfav_contact_pane_ParamLimits

0x82ac,	// (0x00057600) cell_myfav_contact_pane

0x82c6,	// (0x0005761a) cell_myfav_contact_pane_cp1_ParamLimits

0x82c6,	// (0x0005761a) cell_myfav_contact_pane_cp1

0x82dc,	// (0x00057630) cell_myfav_contact_pane_cp2_ParamLimits

0x82dc,	// (0x00057630) cell_myfav_contact_pane_cp2

0x82f2,	// (0x00057646) cell_myfav_contact_pane_cp3_ParamLimits

0x82f2,	// (0x00057646) cell_myfav_contact_pane_cp3

0x8307,	// (0x0005765b) cell_myfav_contact_pane_cp4_ParamLimits

0x8307,	// (0x0005765b) cell_myfav_contact_pane_cp4

0x831b,	// (0x0005766f) cell_myfav_contact_pane_cp5_ParamLimits

0x831b,	// (0x0005766f) cell_myfav_contact_pane_cp5

0x832f,	// (0x00057683) cell_myfav_contact_pane_cp6_ParamLimits

0x832f,	// (0x00057683) cell_myfav_contact_pane_cp6

0x8343,	// (0x00057697) cell_myfav_contact_pane_cp7_ParamLimits

0x8343,	// (0x00057697) cell_myfav_contact_pane_cp7

0xd280,	// (0x0005c5d4) listscroll_gen_pane_cp05

0x835b,	// (0x000576af) main_myfav_hc_pane_g1_ParamLimits

0x835b,	// (0x000576af) main_myfav_hc_pane_g1

0x8371,	// (0x000576c5) main_myfav_hc_pane_g2_ParamLimits

0x8371,	// (0x000576c5) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x0005ece2) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x0005ece2) main_myfav_hc_pane_g

0x839b,	// (0x000576ef) main_myfav_hc_pane_t1_ParamLimits

0x839b,	// (0x000576ef) main_myfav_hc_pane_t1

0xd289,	// (0x0005c5dd) main_myfav_hc_pane_t2_ParamLimits

0xd289,	// (0x0005c5dd) main_myfav_hc_pane_t2

0xd29b,	// (0x0005c5ef) main_myfav_hc_pane_t3_ParamLimits

0xd29b,	// (0x0005c5ef) main_myfav_hc_pane_t3

0x83b0,	// (0x00057704) main_myfav_hc_pane_t4_ParamLimits

0x83b0,	// (0x00057704) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0005ece9) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0005ece9) main_myfav_hc_pane_t

0xc801,	// (0x0005bb55) bg_myfav_hc_instruction_pane_g1

0xd2ad,	// (0x0005c601) cell_myfav_contact_pane_g1_ParamLimits

0xd2ad,	// (0x0005c601) cell_myfav_contact_pane_g1

0xd2ad,	// (0x0005c601) cell_myfav_contact_pane_g2_ParamLimits

0xd2ad,	// (0x0005c601) cell_myfav_contact_pane_g2

0xd2b9,	// (0x0005c60d) cell_myfav_contact_pane_g3_ParamLimits

0xd2b9,	// (0x0005c60d) cell_myfav_contact_pane_g3

0xcb09,	// (0x0005be5d) cell_myfav_contact_pane_g4_ParamLimits

0xcb09,	// (0x0005be5d) cell_myfav_contact_pane_g4

0xd2c6,	// (0x0005c61a) cell_myfav_contact_pane_g5_ParamLimits

0xd2c6,	// (0x0005c61a) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0005ecf4) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0005ecf4) cell_myfav_contact_pane_g

0x8387,	// (0x000576db) main_myfav_hc_pane_g3_ParamLimits

0x8387,	// (0x000576db) main_myfav_hc_pane_g3

0x34ef,	// (0x00052843) popup_adpt_find_window

0x83d4,	// (0x00057728) afind_page_pane_ParamLimits

0x83d4,	// (0x00057728) afind_page_pane

0x83e9,	// (0x0005773d) aid_size_cell_afind_ParamLimits

0x83e9,	// (0x0005773d) aid_size_cell_afind

0x8407,	// (0x0005775b) bg_popup_sub_pane_cp09_ParamLimits

0x8407,	// (0x0005775b) bg_popup_sub_pane_cp09

0x8414,	// (0x00057768) find_pane_cp01_ParamLimits

0x8414,	// (0x00057768) find_pane_cp01

0xd2d2,	// (0x0005c626) grid_afind_control_pane_ParamLimits

0xd2d2,	// (0x0005c626) grid_afind_control_pane

0x8421,	// (0x00057775) grid_afind_pane_ParamLimits

0x8421,	// (0x00057775) grid_afind_pane

0x843f,	// (0x00057793) cell_afind_pane_ParamLimits

0x843f,	// (0x00057793) cell_afind_pane

0xc801,	// (0x0005bb55) afind_page_pane_g1

0x848c,	// (0x000577e0) afind_page_pane_g2

0x8495,	// (0x000577e9) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x0005ecff) afind_page_pane_g

0x849e,	// (0x000577f2) afind_page_pane_t1

0xd2e6,	// (0x0005c63a) cell_afind_grid_control_pane_ParamLimits

0xd2e6,	// (0x0005c63a) cell_afind_grid_control_pane

0xd0c5,	// (0x0005c419) bg_button_pane_cp69_ParamLimits

0xd0c5,	// (0x0005c419) bg_button_pane_cp69

0x84be,	// (0x00057812) cell_afind_pane_g1_ParamLimits

0x84be,	// (0x00057812) cell_afind_pane_g1

0x84cb,	// (0x0005781f) cell_afind_pane_t1_ParamLimits

0x84cb,	// (0x0005781f) cell_afind_pane_t1

0x1867,	// (0x00050bbb) bg_button_pane_cp72

0xd2f5,	// (0x0005c649) cell_afind_grid_control_pane_g1

0x5980,	// (0x00054cd4) aid_image_placing_area_ParamLimits

0x5980,	// (0x00054cd4) aid_image_placing_area

0xcd95,	// (0x0005c0e9) field_vitu_entry_pane_g1_ParamLimits

0xcd95,	// (0x0005c0e9) field_vitu_entry_pane_g1

0xcda1,	// (0x0005c0f5) field_vitu_entry_pane_g2_ParamLimits

0xcda1,	// (0x0005c0f5) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x0005ebb0) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x0005ebb0) field_vitu_entry_pane_g

0x778a,	// (0x00056ade) cell_vitu_itu_pane_g1_ParamLimits

0x77cc,	// (0x00056b20) cell_vitu_itu_pane_t3_ParamLimits

0x77cc,	// (0x00056b20) cell_vitu_itu_pane_t3

0xd06f,	// (0x0005c3c3) mp4_progress_pane_t1_ParamLimits

0xd086,	// (0x0005c3da) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x0005ec45) mp4_progress_pane_t_ParamLimits

0xd09d,	// (0x0005c3f1) mup_progress_pane_cp04_ParamLimits

0x83c2,	// (0x00057716) main_myfav_hc_pane_t5_ParamLimits

0x83c2,	// (0x00057716) main_myfav_hc_pane_t5

0x0ef3,	// (0x00050247) aid_zoom_text_primary

0x34ef,	// (0x00052843) popup_adpt_find_window_ParamLimits

0x2045,	// (0x00051399) main_cam_set_pane

0x7e7d,	// (0x000571d1) cam4_zoom_pane_ParamLimits

0x7e7d,	// (0x000571d1) cam4_zoom_pane

0x84dd,	// (0x00057831) main_cam_set_pane_g1_ParamLimits

0x84dd,	// (0x00057831) main_cam_set_pane_g1

0x84eb,	// (0x0005783f) main_cam_set_pane_g2_ParamLimits

0x84eb,	// (0x0005783f) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0005ed06) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0005ed06) main_cam_set_pane_g

0x850a,	// (0x0005785e) main_cam_set_pane_t1_ParamLimits

0x850a,	// (0x0005785e) main_cam_set_pane_t1

0x851c,	// (0x00057870) main_cset_listscroll_pane_ParamLimits

0x851c,	// (0x00057870) main_cset_listscroll_pane

0x853a,	// (0x0005788e) main_cset_slider_pane_ParamLimits

0x853a,	// (0x0005788e) main_cset_slider_pane

0xd306,	// (0x0005c65a) main_cset_list_pane_ParamLimits

0xd306,	// (0x0005c65a) main_cset_list_pane

0xd316,	// (0x0005c66a) scroll_pane_cp028

0x855e,	// (0x000578b2) aid_area_touch_slider

0x857a,	// (0x000578ce) cset_slider_pane

0x85a4,	// (0x000578f8) main_cset_slider_pane_g1

0x85b9,	// (0x0005790d) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x0005ed0b) main_cset_slider_pane_g

0xd34f,	// (0x0005c6a3) main_cset_slider_pane_t1

0x8675,	// (0x000579c9) main_cset_slider_pane_t2

0x868f,	// (0x000579e3) main_cset_slider_pane_t3

0x86a9,	// (0x000579fd) main_cset_slider_pane_t4

0x86c3,	// (0x00057a17) main_cset_slider_pane_t5

0x86dd,	// (0x00057a31) main_cset_slider_pane_t6

0x86f2,	// (0x00057a46) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x0005ed30) main_cset_slider_pane_t

0x87f6,	// (0x00057b4a) cset_list_set_pane_ParamLimits

0x87f6,	// (0x00057b4a) cset_list_set_pane

0x8807,	// (0x00057b5b) aid_position_infowindow_above

0x880f,	// (0x00057b63) aid_position_infowindow_below

0xd3ef,	// (0x0005c743) cset_list_set_pane_g1_ParamLimits

0xd3ef,	// (0x0005c743) cset_list_set_pane_g1

0x8817,	// (0x00057b6b) cset_list_set_pane_g3_ParamLimits

0x8817,	// (0x00057b6b) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x0005ed4f) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x0005ed4f) cset_list_set_pane_g

0xd3fb,	// (0x0005c74f) cset_list_set_pane_t1_ParamLimits

0xd3fb,	// (0x0005c74f) cset_list_set_pane_t1

0x2045,	// (0x00051399) list_highlight_pane_cp021_ParamLimits

0x2045,	// (0x00051399) list_highlight_pane_cp021

0xb093,	// (0x0005a3e7) cset_slider_pane_g1

0xb0a5,	// (0x0005a3f9) cset_slider_pane_g2

0xb09c,	// (0x0005a3f0) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x0005ed54) cset_slider_pane_g

0xefdb,	// (0x0005e32f) aid_area_touch_cam4_zoom

0xefe3,	// (0x0005e337) cam4_zoom_cont_pane

0xefeb,	// (0x0005e33f) cam4_zoom_pane_g1

0xeff3,	// (0x0005e347) cam4_zoom_pane_g2

0x8826,	// (0x00057b7a) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x0005ed5b) cam4_zoom_pane_g

0xeffb,	// (0x0005e34f) cam4_zoom_cont_pane_g1

0xf004,	// (0x0005e358) cam4_zoom_cont_pane_g2

0xf00d,	// (0x0005e361) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x0005ed62) cam4_zoom_cont_pane_g

0x7d35,	// (0x00057089) call4_image_pane_ParamLimits

0x7d35,	// (0x00057089) call4_image_pane

0xd0e9,	// (0x0005c43d) call4_windows_conf_pane_ParamLimits

0xd0fc,	// (0x0005c450) popup_call4_audio_in_window_ParamLimits

0xd0fc,	// (0x0005c450) popup_call4_audio_in_window

0x0ed9,	// (0x0005022d) bg_popup_call2_act_pane_cp02

0xd15a,	// (0x0005c4ae) call4_list_conf_pane

0xc801,	// (0x0005bb55) call4_image_pane_g1

0xc801,	// (0x0005bb55) call4_image_pane_g2

0x0001,

0xf722,	// (0x0005ea76) call4_image_pane_g

0xd410,	// (0x0005c764) list_single_graphic_popup_conf4_pane_ParamLimits

0xd410,	// (0x0005c764) list_single_graphic_popup_conf4_pane

0x0ed9,	// (0x0005022d) list_highlight_pane_cp022

0xd423,	// (0x0005c777) list_single_graphic_popup_conf4_pane_g1

0x1f5e,	// (0x000512b2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0005ed69) list_single_graphic_popup_conf4_pane_g

0xd42b,	// (0x0005c77f) list_single_graphic_popup_conf4_pane_t1

0x42dd,	// (0x00053631) popup_vtel_slider_window_ParamLimits

0x42dd,	// (0x00053631) popup_vtel_slider_window

0xd0b3,	// (0x0005c407) dialer2_ne_pane_t2_ParamLimits

0xd0b3,	// (0x0005c407) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0005ec4a) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0005ec4a) dialer2_ne_pane_t

0xc5ee,	// (0x0005b942) bg_popup_sub_pane_cp010_ParamLimits

0xc5ee,	// (0x0005b942) bg_popup_sub_pane_cp010

0x882e,	// (0x00057b82) popup_vtel_slider_window_g1_ParamLimits

0x882e,	// (0x00057b82) popup_vtel_slider_window_g1

0x8841,	// (0x00057b95) popup_vtel_slider_window_g2_ParamLimits

0x8841,	// (0x00057b95) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x0005ed6e) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x0005ed6e) popup_vtel_slider_window_g

0x8895,	// (0x00057be9) vtel_slider_pane_ParamLimits

0x8895,	// (0x00057be9) vtel_slider_pane

0x88b7,	// (0x00057c0b) vtel_slider_pane_g1_ParamLimits

0x88b7,	// (0x00057c0b) vtel_slider_pane_g1

0x88cb,	// (0x00057c1f) vtel_slider_pane_g2_ParamLimits

0x88cb,	// (0x00057c1f) vtel_slider_pane_g2

0x88e3,	// (0x00057c37) vtel_slider_pane_g3_ParamLimits

0x88e3,	// (0x00057c37) vtel_slider_pane_g3

0x88b7,	// (0x00057c0b) vtel_slider_pane_g4_ParamLimits

0x88b7,	// (0x00057c0b) vtel_slider_pane_g4

0x88f9,	// (0x00057c4d) vtel_slider_pane_g5_ParamLimits

0x88f9,	// (0x00057c4d) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0005ed77) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0005ed77) vtel_slider_pane_g

0x0ed9,	// (0x0005022d) main_gallery2_pane

0x80a5,	// (0x000573f9) aid_size_row_itut2_dropdow_list_ParamLimits

0x80a5,	// (0x000573f9) aid_size_row_itut2_dropdow_list

0x810f,	// (0x00057463) grid_vitu2_function_top_pane_ParamLimits

0x810f,	// (0x00057463) grid_vitu2_function_top_pane

0x8152,	// (0x000574a6) popup_vitu2_dropdown_list_window_ParamLimits

0x8152,	// (0x000574a6) popup_vitu2_dropdown_list_window

0x8171,	// (0x000574c5) popup_vitu2_match_list_window

0x890f,	// (0x00057c63) cell_vitu2_function_top_pane_ParamLimits

0x890f,	// (0x00057c63) cell_vitu2_function_top_pane

0x892f,	// (0x00057c83) cell_vitu2_function_top_pane_cp01_ParamLimits

0x892f,	// (0x00057c83) cell_vitu2_function_top_pane_cp01

0x894f,	// (0x00057ca3) cell_vitu2_function_top_wide_pane_ParamLimits

0x894f,	// (0x00057ca3) cell_vitu2_function_top_wide_pane

0xefcd,	// (0x0005e321) bg_button_pane_cp012

0x896d,	// (0x00057cc1) cell_vitu2_function_top_pane_g1

0xf016,	// (0x0005e36a) bg_button_pane_cp013_ParamLimits

0xf016,	// (0x0005e36a) bg_button_pane_cp013

0x8981,	// (0x00057cd5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8981,	// (0x00057cd5) cell_vitu2_function_top_wide_pane_g1

0xefcd,	// (0x0005e321) bg_popup_sub_pane_cp20

0x8999,	// (0x00057ced) list_vitu2_match_list_pane

0xd210,	// (0x0005c564) bg_popup_sub_pane_cp20_g1

0xd218,	// (0x0005c56c) bg_popup_sub_pane_cp20_g2

0x1a83,	// (0x00050dd7) bg_popup_sub_pane_cp20_g3

0xd220,	// (0x0005c574) bg_popup_sub_pane_cp20_g4

0x1a63,	// (0x00050db7) bg_popup_sub_pane_cp20_g5

0xd447,	// (0x0005c79b) bg_popup_sub_pane_cp20_g6

0xd230,	// (0x0005c584) bg_popup_sub_pane_cp20_g7

0xd238,	// (0x0005c58c) bg_popup_sub_pane_cp20_g8

0xd240,	// (0x0005c594) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x0005ed82) bg_popup_sub_pane_cp20_g

0xf032,	// (0x0005e386) list_vitu2_match_list_item_pane_ParamLimits

0xf032,	// (0x0005e386) list_vitu2_match_list_item_pane

0xf044,	// (0x0005e398) list_vitu2_match_list_item_pane_t1

0xaa90,	// (0x00059de4) bg_popup_sub_pane_cp21

0xf052,	// (0x0005e3a6) grid_vitu2_dropdown_list_pane

0x89e3,	// (0x00057d37) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x89e3,	// (0x00057d37) cell_vitu2_dropdown_list_char_pane

0x8a04,	// (0x00057d58) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a04,	// (0x00057d58) cell_vitu2_dropdown_list_ctrl_pane

0xd44f,	// (0x0005c7a3) cell_vitu2_dropdown_list_char_pane_g1

0xd458,	// (0x0005c7ac) cell_vitu2_dropdown_list_char_pane_g2

0xd461,	// (0x0005c7b5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x0005ed9f) cell_vitu2_dropdown_list_char_pane_g

0x8a30,	// (0x00057d84) cell_vitu2_dropdown_list_char_pane_t1

0x8a3e,	// (0x00057d92) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a3e,	// (0x00057d92) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a4b,	// (0x00057d9f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a4b,	// (0x00057d9f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a58,	// (0x00057dac) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a58,	// (0x00057dac) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8a65,	// (0x00057db9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8a65,	// (0x00057db9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef57,	// (0x0005e2ab) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef57,	// (0x0005e2ab) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0005eda6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0005eda6) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a81,	// (0x00057dd5) aid_size_cell_gallery2_ParamLimits

0x8a81,	// (0x00057dd5) aid_size_cell_gallery2

0x8a97,	// (0x00057deb) grid_gallery2_pane_ParamLimits

0x8a97,	// (0x00057deb) grid_gallery2_pane

0x8aa9,	// (0x00057dfd) scroll_pane_cp029_ParamLimits

0x8aa9,	// (0x00057dfd) scroll_pane_cp029

0x8ab5,	// (0x00057e09) cell_gallery2_pane_ParamLimits

0x8ab5,	// (0x00057e09) cell_gallery2_pane

0xd46a,	// (0x0005c7be) cell_gallery2_pane_g2

0x8ae7,	// (0x00057e3b) cell_gallery2_pane_g3

0xd474,	// (0x0005c7c8) cell_gallery2_pane_g4

0xd47c,	// (0x0005c7d0) cell_gallery2_pane_g5

0xaf3d,	// (0x0005a291) grid_highlight_pane_cp10

0x8171,	// (0x000574c5) popup_vitu2_match_list_window_ParamLimits

0x8182,	// (0x000574d6) popup_vitu2_query_window_ParamLimits

0x8182,	// (0x000574d6) popup_vitu2_query_window

0xaa90,	// (0x00059de4) bg_vitu2_candi_button_pane

0xd44f,	// (0x0005c7a3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd458,	// (0x0005c7ac) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd461,	// (0x0005c7b5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8aef,	// (0x00057e43) bg_button_pane_cp015

0x8af7,	// (0x00057e4b) bg_button_pane_cp016

0x8b00,	// (0x00057e54) bg_button_pane_cp017

0x2045,	// (0x00051399) bg_popup_sub_pane_cp22

0xd484,	// (0x0005c7d8) popup_vitu2_query_window_g1

0x8b26,	// (0x00057e7a) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x0005edb1) popup_vitu2_query_window_g

0x8b32,	// (0x00057e86) popup_vitu2_query_window_t1_ParamLimits

0x8b32,	// (0x00057e86) popup_vitu2_query_window_t1

0x8b5a,	// (0x00057eae) popup_vitu2_query_window_t2_ParamLimits

0x8b5a,	// (0x00057eae) popup_vitu2_query_window_t2

0x8b6c,	// (0x00057ec0) popup_vitu2_query_window_t3_ParamLimits

0x8b6c,	// (0x00057ec0) popup_vitu2_query_window_t3

0x8b94,	// (0x00057ee8) popup_vitu2_query_window_t4_ParamLimits

0x8b94,	// (0x00057ee8) popup_vitu2_query_window_t4

0x8ba6,	// (0x00057efa) popup_vitu2_query_window_t5_ParamLimits

0x8ba6,	// (0x00057efa) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0005edb6) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0005edb6) popup_vitu2_query_window_t

0xd2fe,	// (0x0005c652) main_cset_text_pane

0x855e,	// (0x000578b2) aid_area_touch_slider_ParamLimits

0x857a,	// (0x000578ce) cset_slider_pane_ParamLimits

0x85a4,	// (0x000578f8) main_cset_slider_pane_g1_ParamLimits

0x85b9,	// (0x0005790d) main_cset_slider_pane_g2_ParamLimits

0xd31f,	// (0x0005c673) main_cset_slider_pane_g3_ParamLimits

0xd31f,	// (0x0005c673) main_cset_slider_pane_g3

0x85ce,	// (0x00057922) main_cset_slider_pane_g4_ParamLimits

0x85ce,	// (0x00057922) main_cset_slider_pane_g4

0x85dd,	// (0x00057931) main_cset_slider_pane_g5_ParamLimits

0x85dd,	// (0x00057931) main_cset_slider_pane_g5

0x85e9,	// (0x0005793d) main_cset_slider_pane_g6_ParamLimits

0x85e9,	// (0x0005793d) main_cset_slider_pane_g6

0xf9b7,	// (0x0005ed0b) main_cset_slider_pane_g_ParamLimits

0xd34f,	// (0x0005c6a3) main_cset_slider_pane_t1_ParamLimits

0x8675,	// (0x000579c9) main_cset_slider_pane_t2_ParamLimits

0x868f,	// (0x000579e3) main_cset_slider_pane_t3_ParamLimits

0x86a9,	// (0x000579fd) main_cset_slider_pane_t4_ParamLimits

0x86c3,	// (0x00057a17) main_cset_slider_pane_t5_ParamLimits

0x86dd,	// (0x00057a31) main_cset_slider_pane_t6_ParamLimits

0x86f2,	// (0x00057a46) main_cset_slider_pane_t7_ParamLimits

0x871c,	// (0x00057a70) main_cset_slider_pane_t8_ParamLimits

0x871c,	// (0x00057a70) main_cset_slider_pane_t8

0x8744,	// (0x00057a98) main_cset_slider_pane_t9_ParamLimits

0x8744,	// (0x00057a98) main_cset_slider_pane_t9

0x876c,	// (0x00057ac0) main_cset_slider_pane_t10_ParamLimits

0x876c,	// (0x00057ac0) main_cset_slider_pane_t10

0x8794,	// (0x00057ae8) main_cset_slider_pane_t11_ParamLimits

0x8794,	// (0x00057ae8) main_cset_slider_pane_t11

0x87bc,	// (0x00057b10) main_cset_slider_pane_t12_ParamLimits

0x87bc,	// (0x00057b10) main_cset_slider_pane_t12

0x87d9,	// (0x00057b2d) main_cset_slider_pane_t13_ParamLimits

0x87d9,	// (0x00057b2d) main_cset_slider_pane_t13

0xf9dc,	// (0x0005ed30) main_cset_slider_pane_t_ParamLimits

0x0ed9,	// (0x0005022d) bg_popup_sub_pane_cp011

0xd490,	// (0x0005c7e4) main_cset_text_pane_g1

0xd498,	// (0x0005c7ec) main_cset_text_pane_t1

0xd4a6,	// (0x0005c7fa) main_cset_text_pane_t2

0xd4b4,	// (0x0005c808) main_cset_text_pane_t3

0xd4c2,	// (0x0005c816) main_cset_text_pane_t4

0xd4d0,	// (0x0005c824) main_cset_text_pane_t5

0xd4de,	// (0x0005c832) main_cset_text_pane_t6

0xd4ec,	// (0x0005c840) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0005edc1) main_cset_text_pane_t

0x0ed9,	// (0x0005022d) main_cam4_burst_pane

0x0ed9,	// (0x0005022d) main_cam5_pane

0x84ac,	// (0x00057800) bg_button_pane_cp019

0x84b5,	// (0x00057809) bg_button_pane_cp020

0xd32b,	// (0x0005c67f) main_cset_slider_pane_g7_ParamLimits

0xd32b,	// (0x0005c67f) main_cset_slider_pane_g7

0xd337,	// (0x0005c68b) main_cset_slider_pane_g8_ParamLimits

0xd337,	// (0x0005c68b) main_cset_slider_pane_g8

0x85fd,	// (0x00057951) main_cset_slider_pane_g9_ParamLimits

0x85fd,	// (0x00057951) main_cset_slider_pane_g9

0x8609,	// (0x0005795d) main_cset_slider_pane_g10_ParamLimits

0x8609,	// (0x0005795d) main_cset_slider_pane_g10

0x8615,	// (0x00057969) main_cset_slider_pane_g11_ParamLimits

0x8615,	// (0x00057969) main_cset_slider_pane_g11

0x8621,	// (0x00057975) main_cset_slider_pane_g12_ParamLimits

0x8621,	// (0x00057975) main_cset_slider_pane_g12

0x862d,	// (0x00057981) main_cset_slider_pane_g13_ParamLimits

0x862d,	// (0x00057981) main_cset_slider_pane_g13

0x8639,	// (0x0005798d) main_cset_slider_pane_g14_ParamLimits

0x8639,	// (0x0005798d) main_cset_slider_pane_g14

0x8645,	// (0x00057999) main_cset_slider_pane_g15_ParamLimits

0x8645,	// (0x00057999) main_cset_slider_pane_g15

0xd37d,	// (0x0005c6d1) main_cset_slider_pane_t14_ParamLimits

0xd37d,	// (0x0005c6d1) main_cset_slider_pane_t14

0xd3b6,	// (0x0005c70a) main_cset_slider_pane_t15_ParamLimits

0xd3b6,	// (0x0005c70a) main_cset_slider_pane_t15

0x8bb8,	// (0x00057f0c) aid_cam4_burst_size_cell_ParamLimits

0x8bb8,	// (0x00057f0c) aid_cam4_burst_size_cell

0x8bd8,	// (0x00057f2c) grid_cam4_burst_pane_ParamLimits

0x8bd8,	// (0x00057f2c) grid_cam4_burst_pane

0x8bfe,	// (0x00057f52) linegrid_cam4_burst_pane_ParamLimits

0x8bfe,	// (0x00057f52) linegrid_cam4_burst_pane

0x8c20,	// (0x00057f74) scroll_pane_cp30_ParamLimits

0x8c20,	// (0x00057f74) scroll_pane_cp30

0x8c2c,	// (0x00057f80) cell_cam4_burst_pane_ParamLimits

0x8c2c,	// (0x00057f80) cell_cam4_burst_pane

0xd4fa,	// (0x0005c84e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4fa,	// (0x0005c84e) linegrid_cam4_burst_pane_g1

0x8c73,	// (0x00057fc7) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c73,	// (0x00057fc7) linegrid_cam4_burst_pane_g2

0xd507,	// (0x0005c85b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd507,	// (0x0005c85b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x0005edd0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x0005edd0) linegrid_cam4_burst_pane_g

0x8c84,	// (0x00057fd8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c84,	// (0x00057fd8) linegrid_cam4_burst_pane_g3_copy1

0xd514,	// (0x0005c868) linegrid_cam4_burst_pane_g4_ParamLimits

0xd514,	// (0x0005c868) linegrid_cam4_burst_pane_g4

0x8c9e,	// (0x00057ff2) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c9e,	// (0x00057ff2) linegrid_cam4_burst_pane_g5

0x8caf,	// (0x00058003) linegrid_cam4_burst_pane_g6_ParamLimits

0x8caf,	// (0x00058003) linegrid_cam4_burst_pane_g6

0xd521,	// (0x0005c875) linegrid_cam4_burst_pane_g7_ParamLimits

0xd521,	// (0x0005c875) linegrid_cam4_burst_pane_g7

0x8cc0,	// (0x00058014) cell_cam4_burst_pane_g1

0xd53a,	// (0x0005c88e) main_cam5_pane_t1_ParamLimits

0xd53a,	// (0x0005c88e) main_cam5_pane_t1

0xd54c,	// (0x0005c8a0) main_cam5_pane_t2_ParamLimits

0xd54c,	// (0x0005c8a0) main_cam5_pane_t2

0xd55e,	// (0x0005c8b2) main_cam5_pane_t3_ParamLimits

0xd55e,	// (0x0005c8b2) main_cam5_pane_t3

0xd570,	// (0x0005c8c4) main_cam5_pane_t4_ParamLimits

0xd570,	// (0x0005c8c4) main_cam5_pane_t4

0xd586,	// (0x0005c8da) main_cam5_pane_t5_ParamLimits

0xd586,	// (0x0005c8da) main_cam5_pane_t5

0xd598,	// (0x0005c8ec) main_cam5_pane_t6_ParamLimits

0xd598,	// (0x0005c8ec) main_cam5_pane_t6

0xd5aa,	// (0x0005c8fe) main_cam5_pane_t7_ParamLimits

0xd5aa,	// (0x0005c8fe) main_cam5_pane_t7

0xd5bc,	// (0x0005c910) main_cam5_pane_t8_ParamLimits

0xd5bc,	// (0x0005c910) main_cam5_pane_t8

0xd5d8,	// (0x0005c92c) main_cam5_pane_t9_ParamLimits

0xd5d8,	// (0x0005c92c) main_cam5_pane_t9

0xd5ea,	// (0x0005c93e) main_cam5_pane_t10_ParamLimits

0xd5ea,	// (0x0005c93e) main_cam5_pane_t10

0xd5fc,	// (0x0005c950) main_cam5_pane_t11_ParamLimits

0xd5fc,	// (0x0005c950) main_cam5_pane_t11

0xd60e,	// (0x0005c962) main_cam5_pane_t12_ParamLimits

0xd60e,	// (0x0005c962) main_cam5_pane_t12

0xd623,	// (0x0005c977) main_cam5_pane_t13_ParamLimits

0xd623,	// (0x0005c977) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x0005eddc) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x0005eddc) main_cam5_pane_t

0x354d,	// (0x000528a1) popup_scut_keymap_window_ParamLimits

0x354d,	// (0x000528a1) popup_scut_keymap_window

0x8cd5,	// (0x00058029) aid_size_cell_brow_shortcut

0xaf3d,	// (0x0005a291) bg_popup_window_pane_cp010

0x8ce1,	// (0x00058035) grid_scut_pane

0x8ceb,	// (0x0005803f) cell_scut_pane_ParamLimits

0x8ceb,	// (0x0005803f) cell_scut_pane

0x8d00,	// (0x00058054) cell_scut_pane_g1

0xd640,	// (0x0005c994) cell_scut_pane_t1

0xd64f,	// (0x0005c9a3) cell_scut_pane_t2

0x8d09,	// (0x0005805d) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0005edf7) cell_scut_pane_t

0x6d19,	// (0x0005606d) main_mup3_pane_g8_ParamLimits

0x6d19,	// (0x0005606d) main_mup3_pane_g8

0x80b9,	// (0x0005740d) area_vitu2_query_pane_ParamLimits

0x80b9,	// (0x0005740d) area_vitu2_query_pane

0x8b09,	// (0x00057e5d) input_focus_pane_cp08

0xd65e,	// (0x0005c9b2) area_vitu2_query_pane_g1

0x8d17,	// (0x0005806b) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x0005edfe) area_vitu2_query_pane_g

0x8d26,	// (0x0005807a) area_vitu2_query_pane_t1_ParamLimits

0x8d26,	// (0x0005807a) area_vitu2_query_pane_t1

0x8d38,	// (0x0005808c) area_vitu2_query_pane_t2_ParamLimits

0x8d38,	// (0x0005808c) area_vitu2_query_pane_t2

0x8d4a,	// (0x0005809e) area_vitu2_query_pane_t3_ParamLimits

0x8d4a,	// (0x0005809e) area_vitu2_query_pane_t3

0xd66a,	// (0x0005c9be) area_vitu2_query_pane_t4_ParamLimits

0xd66a,	// (0x0005c9be) area_vitu2_query_pane_t4

0xd692,	// (0x0005c9e6) area_vitu2_query_pane_t5_ParamLimits

0xd692,	// (0x0005c9e6) area_vitu2_query_pane_t5

0xd6ba,	// (0x0005ca0e) area_vitu2_query_pane_t6_ParamLimits

0xd6ba,	// (0x0005ca0e) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0005ee03) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0005ee03) area_vitu2_query_pane_t

0x8d72,	// (0x000580c6) bg_button_pane_cp018

0x8d7f,	// (0x000580d3) bg_button_pane_cp021

0x8d8b,	// (0x000580df) bg_button_pane_cp022

0x8d9a,	// (0x000580ee) input_focus_pane_cp09

0x50e9,	// (0x0005443d) aid_size_touch_mv_arrow_left

0xae16,	// (0x0005a16a) aid_size_touch_mv_arrow_right

0x865d,	// (0x000579b1) main_cset_slider_pane_g16_ParamLimits

0x865d,	// (0x000579b1) main_cset_slider_pane_g16

0x8669,	// (0x000579bd) main_cset_slider_pane_g17_ParamLimits

0x8669,	// (0x000579bd) main_cset_slider_pane_g17

0x8cc0,	// (0x00058014) cell_cam4_burst_pane_g1_ParamLimits

0x0ed9,	// (0x0005022d) compa_mode_pane

0x8851,	// (0x00057ba5) popup_vtel_slider_window_g3_ParamLimits

0x8851,	// (0x00057ba5) popup_vtel_slider_window_g3

0x8868,	// (0x00057bbc) popup_vtel_slider_window_g4_ParamLimits

0x8868,	// (0x00057bbc) popup_vtel_slider_window_g4

0x887f,	// (0x00057bd3) popup_vtel_slider_window_t1_ParamLimits

0x887f,	// (0x00057bd3) popup_vtel_slider_window_t1

0x0ed9,	// (0x0005022d) main_cl_pane

0xc3e4,	// (0x0005b738) popup_imed_adjust2_window_ParamLimits

0xc3be,	// (0x0005b712) bg_tb_trans_pane_cp05_ParamLimits

0xccca,	// (0x0005c01e) popup_imed_adjust2_window_g1_ParamLimits

0xccd9,	// (0x0005c02d) popup_imed_adjust2_window_g2_ParamLimits

0xccd9,	// (0x0005c02d) popup_imed_adjust2_window_g2

0xcce5,	// (0x0005c039) popup_imed_adjust2_window_g3_ParamLimits

0xcce5,	// (0x0005c039) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x0005eb74) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x0005eb74) popup_imed_adjust2_window_g

0xccf1,	// (0x0005c045) popup_imed_adjust2_window_t1_ParamLimits

0xcd09,	// (0x0005c05d) slider_imed_adjust_pane_ParamLimits

0xcd1d,	// (0x0005c071) slider_imed_adjust_pane_g1_ParamLimits

0xcd2d,	// (0x0005c081) slider_imed_adjust_pane_g2_ParamLimits

0xcd3d,	// (0x0005c091) slider_imed_adjust_pane_g3_ParamLimits

0xcd4e,	// (0x0005c0a2) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x0005eb7b) slider_imed_adjust_pane_g_ParamLimits

0x7e2c,	// (0x00057180) aid_touch_area_cam4_ParamLimits

0x7e2c,	// (0x00057180) aid_touch_area_cam4

0xef47,	// (0x0005e29b) battery_pane_cp01

0x7ec4,	// (0x00057218) main_camera4_pane_g6_ParamLimits

0x7ec4,	// (0x00057218) main_camera4_pane_g6

0x7ee5,	// (0x00057239) main_camera4_pane_t2_ParamLimits

0x7ee5,	// (0x00057239) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x0005ec7e) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x0005ec7e) main_camera4_pane_t

0x7f25,	// (0x00057279) aid_touch_area_vid4_ParamLimits

0x7f25,	// (0x00057279) aid_touch_area_vid4

0x7f67,	// (0x000572bb) main_video4_pane_g5_ParamLimits

0x7f67,	// (0x000572bb) main_video4_pane_g5

0x7f88,	// (0x000572dc) vid4_progress_pane_ParamLimits

0x7f88,	// (0x000572dc) vid4_progress_pane

0xd343,	// (0x0005c697) main_cset_slider_pane_g18_ParamLimits

0xd343,	// (0x0005c697) main_cset_slider_pane_g18

0xd52e,	// (0x0005c882) cell_cam4_burst_pane_g2_ParamLimits

0xd52e,	// (0x0005c882) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x0005edd7) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x0005edd7) cell_cam4_burst_pane_g

0x165f,	// (0x000509b3) bg_cl_pane_ParamLimits

0x165f,	// (0x000509b3) bg_cl_pane

0x8da9,	// (0x000580fd) cl_header_pane_ParamLimits

0x8da9,	// (0x000580fd) cl_header_pane

0x8dbd,	// (0x00058111) cl_listscroll_pane_ParamLimits

0x8dbd,	// (0x00058111) cl_listscroll_pane

0xd706,	// (0x0005ca5a) bg_cl_pane_g1

0xd70e,	// (0x0005ca62) bg_cl_pane_g2

0xd716,	// (0x0005ca6a) bg_cl_pane_g3

0xd71e,	// (0x0005ca72) bg_cl_pane_g4

0xd726,	// (0x0005ca7a) bg_cl_pane_g5

0xd72e,	// (0x0005ca82) bg_cl_pane_g6

0xd736,	// (0x0005ca8a) bg_cl_pane_g7

0xd73e,	// (0x0005ca92) bg_cl_pane_g8

0xd746,	// (0x0005ca9a) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0005ee12) bg_cl_pane_g

0x8dcd,	// (0x00058121) aid_height_cl_leading_ParamLimits

0x8dcd,	// (0x00058121) aid_height_cl_leading

0x8dd9,	// (0x0005812d) aid_height_cl_text_ParamLimits

0x8dd9,	// (0x0005812d) aid_height_cl_text

0x2045,	// (0x00051399) bg_cl_header_pane_ParamLimits

0x2045,	// (0x00051399) bg_cl_header_pane

0x8df8,	// (0x0005814c) cl_header_pane_g1_ParamLimits

0x8df8,	// (0x0005814c) cl_header_pane_g1

0x8e0e,	// (0x00058162) cl_header_pane_t1_ParamLimits

0x8e0e,	// (0x00058162) cl_header_pane_t1

0xd74e,	// (0x0005caa2) cl_list_pane

0xd757,	// (0x0005caab) hc_scroll_pane_cp01

0x1a63,	// (0x00050db7) bg_cl_header_pane_g1

0xd210,	// (0x0005c564) bg_cl_header_pane_g2

0x1a83,	// (0x00050dd7) bg_cl_header_pane_g3

0xd220,	// (0x0005c574) bg_cl_header_pane_g4

0xd218,	// (0x0005c56c) bg_cl_header_pane_g5

0xd447,	// (0x0005c79b) bg_cl_header_pane_g6

0xd238,	// (0x0005c58c) bg_cl_header_pane_g7

0xd240,	// (0x0005c594) bg_cl_header_pane_g8

0xd230,	// (0x0005c584) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0005ee25) bg_cl_header_pane_g

0x8e27,	// (0x0005817b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e27,	// (0x0005817b) hc_cl_list_double_graphic_heading_pane

0x8e37,	// (0x0005818b) hc_cl_list_single_graphic_pane_ParamLimits

0x8e37,	// (0x0005818b) hc_cl_list_single_graphic_pane

0x8e4a,	// (0x0005819e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e4a,	// (0x0005819e) hc_cl_list_single_graphic_pane_g1

0x8e56,	// (0x000581aa) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e56,	// (0x000581aa) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0005ee38) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0005ee38) hc_cl_list_single_graphic_pane_g

0x8e6a,	// (0x000581be) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e6a,	// (0x000581be) hc_cl_list_single_graphic_pane_t1

0x8e4a,	// (0x0005819e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e4a,	// (0x0005819e) hc_cl_list_double_graphic_heading_pane_g1

0x8e7f,	// (0x000581d3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e7f,	// (0x000581d3) hc_cl_list_double_graphic_heading_pane_g2

0x8e93,	// (0x000581e7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e93,	// (0x000581e7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x0005ee3d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x0005ee3d) hc_cl_list_double_graphic_heading_pane_g

0x8ea7,	// (0x000581fb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ea7,	// (0x000581fb) hc_cl_list_double_graphic_heading_pane_t1

0x8ebc,	// (0x00058210) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ebc,	// (0x00058210) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x0005ee44) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x0005ee44) hc_cl_list_double_graphic_heading_pane_t

0xf05a,	// (0x0005e3ae) vid4_progress_pane_g1

0xf069,	// (0x0005e3bd) vid4_progress_pane_g2

0xf078,	// (0x0005e3cc) vid4_progress_pane_g3

0xf087,	// (0x0005e3db) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0005ee49) vid4_progress_pane_g

0xf09f,	// (0x0005e3f3) vid4_progress_pane_t1

0xf0b5,	// (0x0005e409) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x0005ee54) vid4_progress_pane_t

0xf0df,	// (0x0005e433) wait_bar_pane_cp07

0xc5fc,	// (0x0005b950) blid_firmament_pane_ParamLimits

0xc63d,	// (0x0005b991) popup_blid_sat_info2_window_g1

0xc661,	// (0x0005b9b5) popup_blid_sat_info2_window_t3

0xc66f,	// (0x0005b9c3) popup_blid_sat_info2_window_t4

0xc67d,	// (0x0005b9d1) popup_blid_sat_info2_window_t5

0xc68b,	// (0x0005b9df) popup_blid_sat_info2_window_t6

0xc69b,	// (0x0005b9ef) popup_blid_sat_info2_window_t7

0xc6a9,	// (0x0005b9fd) popup_blid_sat_info2_window_t8

0xc6b7,	// (0x0005ba0b) popup_blid_sat_info2_window_t9

0xc6c5,	// (0x0005ba19) popup_blid_sat_info2_window_t10

0xc781,	// (0x0005bad5) aid_firma_cardinal_ParamLimits

0xc795,	// (0x0005bae9) blid_firmament_pane_t1_ParamLimits

0xc7ac,	// (0x0005bb00) blid_firmament_pane_t2_ParamLimits

0xc7c3,	// (0x0005bb17) blid_firmament_pane_t3_ParamLimits

0xc7da,	// (0x0005bb2e) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x0005ea6d) blid_firmament_pane_t_ParamLimits

0xc7f1,	// (0x0005bb45) blid_sat_info_pane_ParamLimits

0x2045,	// (0x00051399) main_cam_set_pane_ParamLimits

0x7570,	// (0x000568c4) aid_size_cell_colour_35_ParamLimits

0x7590,	// (0x000568e4) aid_size_cell_colour_112_ParamLimits

0x75b0,	// (0x00056904) aid_size_cell_effect_ParamLimits

0xc3be,	// (0x0005b712) bg_tb_trans_pane_cp02_ParamLimits

0x1cb0,	// (0x00051004) heading_imed_pane_ParamLimits

0x75d0,	// (0x00056924) listscroll_imed_pane_ParamLimits

0xb9b0,	// (0x0005ad04) popup_call2_audio_first_window_g5_ParamLimits

0xb9b0,	// (0x0005ad04) popup_call2_audio_first_window_g5

0x7aed,	// (0x00056e41) aid_size_touch_image3_arrow_left_ParamLimits

0x7aed,	// (0x00056e41) aid_size_touch_image3_arrow_left

0x7b0d,	// (0x00056e61) aid_size_touch_image3_arrow_right_ParamLimits

0x7b0d,	// (0x00056e61) aid_size_touch_image3_arrow_right

0xf0ca,	// (0x0005e41e) vid4_progress_pane_t3

0x78a4,	// (0x00056bf8) main_hwr_training_symbol_option_pane_ParamLimits

0x78a4,	// (0x00056bf8) main_hwr_training_symbol_option_pane

0xcfa9,	// (0x0005c2fd) popup_hwr_training_preview_window_ParamLimits

0xcfa9,	// (0x0005c2fd) popup_hwr_training_preview_window

0x78c0,	// (0x00056c14) hwr_training_navi_pane_g5_ParamLimits

0x78c0,	// (0x00056c14) hwr_training_navi_pane_g5

0xd1fe,	// (0x0005c552) popup_char_count_window

0xefcd,	// (0x0005e321) bg_popup_sub_pane_cp20_ParamLimits

0x8999,	// (0x00057ced) list_vitu2_match_list_pane_ParamLimits

0x89a8,	// (0x00057cfc) vitu2_page_scroll_pane_ParamLimits

0x89a8,	// (0x00057cfc) vitu2_page_scroll_pane

0xd7ba,	// (0x0005cb0e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7ba,	// (0x0005cb0e) list_single_hwr_training_symbol_option_pane

0xd7cd,	// (0x0005cb21) list_single_hwr_training_symbol_option_pane_g1

0xd7d5,	// (0x0005cb29) list_single_hwr_training_symbol_option_pane_t1

0xd7e3,	// (0x0005cb37) bg_button_pane_cp023

0xd7ec,	// (0x0005cb40) bg_button_pane_cp024

0x8ed1,	// (0x00058225) vitu2_page_scroll_pane_g1

0x8ed9,	// (0x0005822d) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x0005ee5b) vitu2_page_scroll_pane_g

0x8ee1,	// (0x00058235) vitu2_page_scroll_pane_t1

0xc554,	// (0x0005b8a8) popup_char_count_window_g1

0xd81f,	// (0x0005cb73) popup_char_count_window_g2

0xd828,	// (0x0005cb7c) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x0005ee60) popup_char_count_window_g

0xd831,	// (0x0005cb85) popup_char_count_window_t1

0x0ed9,	// (0x0005022d) main_vded2_pane

0xccb8,	// (0x0005c00c) aid_size_cell_imed_line

0xccc2,	// (0x0005c016) grid_imed_line_width_pane

0x8009,	// (0x0005735d) vid4_indicators_pane_g4

0xd83f,	// (0x0005cb93) cell_imed_line_width_pane_ParamLimits

0xd83f,	// (0x0005cb93) cell_imed_line_width_pane

0xd851,	// (0x0005cba5) cell_imed_line_width_pane_g1

0xc5d6,	// (0x0005b92a) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0005ee67) cell_imed_line_width_pane_g

0x8ef0,	// (0x00058244) main_vded2_pane_g1_ParamLimits

0x8ef0,	// (0x00058244) main_vded2_pane_g1

0x8f06,	// (0x0005825a) main_vded2_pane_g2_ParamLimits

0x8f06,	// (0x0005825a) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x0005ee6c) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x0005ee6c) main_vded2_pane_g

0x8f16,	// (0x0005826a) vded2_slider_pane_ParamLimits

0x8f16,	// (0x0005826a) vded2_slider_pane

0x8f29,	// (0x0005827d) aid_size_touch_vded2_end

0x8f31,	// (0x00058285) aid_size_touch_vded2_playhead

0x8f39,	// (0x0005828d) aid_size_touch_vded2_start

0x8f41,	// (0x00058295) vded2_slider_bg_pane

0x8f4a,	// (0x0005829e) vded2_slider_pane_g1

0x8f53,	// (0x000582a7) vded2_slider_pane_g2

0x8f5b,	// (0x000582af) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x0005ee71) vded2_slider_pane_g

0x8f64,	// (0x000582b8) vded2_slider_bg_pane_g1

0x8f6d,	// (0x000582c1) vded2_slider_bg_pane_g2

0x8f76,	// (0x000582ca) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0005ee78) vded2_slider_bg_pane_g

0x562f,	// (0x00054983) aid_postcard_touch_down_pane_ParamLimits

0x562f,	// (0x00054983) aid_postcard_touch_down_pane

0x5641,	// (0x00054995) aid_postcard_touch_up_pane_ParamLimits

0x5641,	// (0x00054995) aid_postcard_touch_up_pane

0x0ed9,	// (0x0005022d) main_blid2_pane

0xc3cc,	// (0x0005b720) popup_blid2_search_window

0x0ed9,	// (0x0005022d) blid2_gps_pane

0x0ed9,	// (0x0005022d) blid2_navig_pane

0x0ed9,	// (0x0005022d) blid2_search_pane

0x0ed9,	// (0x0005022d) blid2_tripm_pane

0x8f7f,	// (0x000582d3) blid2_search_pane_g1_ParamLimits

0x8f7f,	// (0x000582d3) blid2_search_pane_g1

0x8f93,	// (0x000582e7) blid2_search_pane_t1_ParamLimits

0x8f93,	// (0x000582e7) blid2_search_pane_t1

0x8fa5,	// (0x000582f9) aid_size_cell_blid2_gps_ParamLimits

0x8fa5,	// (0x000582f9) aid_size_cell_blid2_gps

0x8fbd,	// (0x00058311) blid2_gps_pane_g1_ParamLimits

0x8fbd,	// (0x00058311) blid2_gps_pane_g1

0x8fd1,	// (0x00058325) grid_blid2_satellite_pane_ParamLimits

0x8fd1,	// (0x00058325) grid_blid2_satellite_pane

0x8fe5,	// (0x00058339) blid2_navig_pane_g1_ParamLimits

0x8fe5,	// (0x00058339) blid2_navig_pane_g1

0x8ff1,	// (0x00058345) blid2_navig_pane_t1_ParamLimits

0x8ff1,	// (0x00058345) blid2_navig_pane_t1

0x900a,	// (0x0005835e) blid2_navig_pane_t2_ParamLimits

0x900a,	// (0x0005835e) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x0005ee7f) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x0005ee7f) blid2_navig_pane_t

0x9023,	// (0x00058377) blid2_navig_ring_pane_ParamLimits

0x9023,	// (0x00058377) blid2_navig_ring_pane

0x9038,	// (0x0005838c) blid2_speed_pane_ParamLimits

0x9038,	// (0x0005838c) blid2_speed_pane

0x9044,	// (0x00058398) blid2_tripm_pane_g1_ParamLimits

0x9044,	// (0x00058398) blid2_tripm_pane_g1

0x9059,	// (0x000583ad) blid2_tripm_pane_g2_ParamLimits

0x9059,	// (0x000583ad) blid2_tripm_pane_g2

0x906d,	// (0x000583c1) blid2_tripm_pane_g3_ParamLimits

0x906d,	// (0x000583c1) blid2_tripm_pane_g3

0x9081,	// (0x000583d5) blid2_tripm_pane_g4_ParamLimits

0x9081,	// (0x000583d5) blid2_tripm_pane_g4

0x9095,	// (0x000583e9) blid2_tripm_pane_g5_ParamLimits

0x9095,	// (0x000583e9) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x0005ee84) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x0005ee84) blid2_tripm_pane_g

0x90b7,	// (0x0005840b) blid2_tripm_pane_t1_ParamLimits

0x90b7,	// (0x0005840b) blid2_tripm_pane_t1

0x90ce,	// (0x00058422) blid2_tripm_pane_t2_ParamLimits

0x90ce,	// (0x00058422) blid2_tripm_pane_t2

0x90e5,	// (0x00058439) blid2_tripm_pane_t3_ParamLimits

0x90e5,	// (0x00058439) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x0005ee91) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x0005ee91) blid2_tripm_pane_t

0x9128,	// (0x0005847c) cell_blid2_satellite_pane_ParamLimits

0x9128,	// (0x0005847c) cell_blid2_satellite_pane

0x9140,	// (0x00058494) cell_blid2_satellite_pane_g1

0xd85a,	// (0x0005cbae) cell_blid2_satellite_pane_t1

0xc801,	// (0x0005bb55) blid2_speed_pane_g1

0xd868,	// (0x0005cbbc) blid2_speed_pane_t1

0xd876,	// (0x0005cbca) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x0005ee9a) blid2_speed_pane_t

0xc801,	// (0x0005bb55) blid2_navig_ring_pane_g1

0x9149,	// (0x0005849d) blid2_navig_ring_pane_g2

0x9151,	// (0x000584a5) blid2_navig_ring_pane_g3

0x9159,	// (0x000584ad) blid2_navig_ring_pane_g4

0x9161,	// (0x000584b5) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x0005ee9f) blid2_navig_ring_pane_g

0x0ed9,	// (0x0005022d) bg_popup_window_pane_cp011

0xd884,	// (0x0005cbd8) popup_blid2_search_window_g1

0xd88c,	// (0x0005cbe0) popup_blid2_search_window_t1

0xd89a,	// (0x0005cbee) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0005eeaa) popup_blid2_search_window_t

0x1972,	// (0x00050cc6) main_browser_pane_g1

0x165f,	// (0x000509b3) main_browser_pane_ParamLimits

0xefcd,	// (0x0005e321) bg_button_pane_cp011_ParamLimits

0x8286,	// (0x000575da) cell_vitu2_function_pane_g1_ParamLimits

0x2045,	// (0x00051399) bg_popup_sub_pane_cp22_ParamLimits

0x8b09,	// (0x00057e5d) input_focus_pane_cp08_ParamLimits

0x8b16,	// (0x00057e6a) popup_vitu2_query_button_pane_ParamLimits

0x8b16,	// (0x00057e6a) popup_vitu2_query_button_pane

0x8aef,	// (0x00057e43) popup_vitu2_query_input_button_pane

0xd484,	// (0x0005c7d8) popup_vitu2_query_window_g1_ParamLimits

0x8b26,	// (0x00057e7a) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x0005edb1) popup_vitu2_query_window_g_ParamLimits

0x0ed9,	// (0x0005022d) bg_button_pane_cp026

0x9169,	// (0x000584bd) popup_vitu2_query_input_button_pane_g1

0x0ed9,	// (0x0005022d) bg_button_pane_cp025

0xd8a8,	// (0x0005cbfc) popup_vitu2_query_button_pane_t1

0x6a82,	// (0x00055dd6) main_mp3_pane_t6

0x6a90,	// (0x00055de4) popup_slider_window_cp01

0xef65,	// (0x0005e2b9) cam4_battery_pane

0xef65,	// (0x0005e2b9) cam4_battery_pane_cp02

0xef65,	// (0x0005e2b9) cam4_battery_pane_cp01

0xef65,	// (0x0005e2b9) cam4_battery_pane_cp03

0xd0a9,	// (0x0005c3fd) cam4_battery_pane_g1

0xc801,	// (0x0005bb55) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x0005eeaf) cam4_battery_pane_g

0xc6d3,	// (0x0005ba27) popup_blid_sat_info2_window_t11

0x50e9,	// (0x0005443d) aid_size_touch_mv_arrow_left_ParamLimits

0xae16,	// (0x0005a16a) aid_size_touch_mv_arrow_right_ParamLimits

0xae4e,	// (0x0005a1a2) navi_pane_g1_ParamLimits

0xae5a,	// (0x0005a1ae) navi_pane_g2_ParamLimits

0x5102,	// (0x00054456) navi_pane_g3_ParamLimits

0xf418,	// (0x0005e76c) navi_pane_g_ParamLimits

0x5127,	// (0x0005447b) navi_pane_mv_t1_ParamLimits

0x75dc,	// (0x00056930) grid_imed_effect_pane_ParamLimits

0x18ac,	// (0x00050c00) aid_placing_vt_slider_lsc

0x18b4,	// (0x00050c08) aid_placing_vt_slider_prt

0x2045,	// (0x00051399) bg_tb_trans_pane_cp01_ParamLimits

0xc950,	// (0x0005bca4) popup_image_details_window_g1_ParamLimits

0xc963,	// (0x0005bcb7) popup_image_details_window_g2_ParamLimits

0xc978,	// (0x0005bccc) popup_image_details_window_g3_ParamLimits

0xc978,	// (0x0005bccc) popup_image_details_window_g3

0xf75e,	// (0x0005eab2) popup_image_details_window_g_ParamLimits

0xc98c,	// (0x0005bce0) popup_image_details_window_t1_ParamLimits

0xc99e,	// (0x0005bcf2) popup_image_details_window_t2_ParamLimits

0xc9b7,	// (0x0005bd0b) popup_image_details_window_t3_ParamLimits

0xc9cb,	// (0x0005bd1f) popup_image_details_window_t4_ParamLimits

0xc9e6,	// (0x0005bd3a) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0005eab9) popup_image_details_window_t_ParamLimits

0x8de5,	// (0x00058139) cl_header_name_pane_ParamLimits

0x8de5,	// (0x00058139) cl_header_name_pane

0x9171,	// (0x000584c5) cl_header_name_pane_t1_ParamLimits

0x9171,	// (0x000584c5) cl_header_name_pane_t1

0x9192,	// (0x000584e6) cl_header_name_pane_t2_ParamLimits

0x9192,	// (0x000584e6) cl_header_name_pane_t2

0x91d4,	// (0x00058528) cl_header_name_pane_t3_ParamLimits

0x91d4,	// (0x00058528) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x0005eeb4) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x0005eeb4) cl_header_name_pane_t

0xaedc,	// (0x0005a230) navi_pane_mv_g2_ParamLimits

0xd19f,	// (0x0005c4f3) field_vitu2_entry_pane_g1_ParamLimits

0xd1ab,	// (0x0005c4ff) field_vitu2_entry_pane_g2_ParamLimits

0xd1b7,	// (0x0005c50b) field_vitu2_entry_pane_g3_ParamLimits

0xd1b7,	// (0x0005c50b) field_vitu2_entry_pane_g3

0xf95c,	// (0x0005ecb0) field_vitu2_entry_pane_g_ParamLimits

0x8202,	// (0x00057556) cell_vitu2_itu_pane_g1_ParamLimits

0x8212,	// (0x00057566) cell_vitu2_itu_pane_g2_ParamLimits

0x8212,	// (0x00057566) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x0005ecbc) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x0005ecbc) cell_vitu2_itu_pane_g

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp05_ParamLimits

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp05

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp03

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp04

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp10_ParamLimits

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp10

0x8d8b,	// (0x000580df) bg_vkb2_func_pane_cp08

0x8d72,	// (0x000580c6) bg_vkb2_func_pane_cp06

0x8d7f,	// (0x000580d3) bg_vkb2_func_pane_cp07

0xd7f5,	// (0x0005cb49) bg_vkb2_func_pane_cp11_ParamLimits

0xd7f5,	// (0x0005cb49) bg_vkb2_func_pane_cp11

0xd80a,	// (0x0005cb5e) bg_vkb2_func_pane_cp12_ParamLimits

0xd80a,	// (0x0005cb5e) bg_vkb2_func_pane_cp12

0x0ed9,	// (0x0005022d) bg_vkb2_func_pane_cp09

0xd210,	// (0x0005c564) bg_vkb2_func_pane_g1

0x1a83,	// (0x00050dd7) bg_vkb2_func_pane_g2

0xd218,	// (0x0005c56c) bg_vkb2_func_pane_g3

0xd220,	// (0x0005c574) bg_vkb2_func_pane_g4

0xd447,	// (0x0005c79b) bg_vkb2_func_pane_g5

0xd238,	// (0x0005c58c) bg_vkb2_func_pane_g6

0xd240,	// (0x0005c594) bg_vkb2_func_pane_g7

0xd230,	// (0x0005c584) bg_vkb2_func_pane_g8

0x1a63,	// (0x00050db7) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x0005eebb) bg_vkb2_func_pane_g

0x90a7,	// (0x000583fb) blid2_tripm_pane_g6_ParamLimits

0x90a7,	// (0x000583fb) blid2_tripm_pane_g6

0xd067,	// (0x0005c3bb) mp4_progress_pane_g1

0x9116,	// (0x0005846a) blid2_tripm_values_pane_ParamLimits

0x9116,	// (0x0005846a) blid2_tripm_values_pane

0x9205,	// (0x00058559) blid2_tripm_values_pane_t1

0x9213,	// (0x00058567) blid2_tripm_values_pane_t2

0x9221,	// (0x00058575) blid2_tripm_values_pane_t3

0x922f,	// (0x00058583) blid2_tripm_values_pane_t4

0x923d,	// (0x00058591) blid2_tripm_values_pane_t5

0x924b,	// (0x0005859f) blid2_tripm_values_pane_t6

0x9259,	// (0x000585ad) blid2_tripm_values_pane_t7

0x9267,	// (0x000585bb) blid2_tripm_values_pane_t8

0x9275,	// (0x000585c9) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x0005eece) blid2_tripm_values_pane_t

0x4268,	// (0x000535bc) call_video_pane_t1_ParamLimits

0x427a,	// (0x000535ce) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0005e5f5) call_video_pane_t_ParamLimits

0x557a,	// (0x000548ce) msg_header_pane_g1_ParamLimits

0xb0d8,	// (0x0005a42c) msg_header_pane_g2_ParamLimits

0xb0d8,	// (0x0005a42c) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0005e80f) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0005e80f) msg_header_pane_g

0x165f,	// (0x000509b3) main_clock2_pane_ParamLimits

0x731b,	// (0x0005666f) grid_clock2_toolbar_pane_ParamLimits

0x731b,	// (0x0005666f) grid_clock2_toolbar_pane

0x731b,	// (0x0005666f) listscroll_clock2_pane_ParamLimits

0x731b,	// (0x0005666f) listscroll_clock2_pane

0x73ea,	// (0x0005673e) main_clock2_pane_t3_ParamLimits

0x73ea,	// (0x0005673e) main_clock2_pane_t3

0x7403,	// (0x00056757) main_clock2_pane_t4_ParamLimits

0x7403,	// (0x00056757) main_clock2_pane_t4

0xd8b6,	// (0x0005cc0a) cell_clock2_toolbar_pane

0xd8be,	// (0x0005cc12) cell_clock2_toolbar_pane_cp01

0xd8be,	// (0x0005cc12) cell_clock2_toolbar_pane_cp02

0xd8c6,	// (0x0005cc1a) cell_clock2_toolbar_pane_cp03

0xd8ce,	// (0x0005cc22) list_clock2_pane

0x2004,	// (0x00051358) scroll_pane_cp10

0xd8d6,	// (0x0005cc2a) list_single_clock2_pane_ParamLimits

0xd8d6,	// (0x0005cc2a) list_single_clock2_pane

0xaf3d,	// (0x0005a291) list_highlight_pane_cp08

0xd8e3,	// (0x0005cc37) list_single_clock2_pane_t1

0xd8f1,	// (0x0005cc45) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0005eee1) list_single_clock2_pane_t

0x0ed9,	// (0x0005022d) bg_button_pane_cp10

0xd8ff,	// (0x0005cc53) cell_clock2_toolbar_pane_g1

0x55c3,	// (0x00054917) aid_main_viewer_pane_g1_ParamLimits

0x55c3,	// (0x00054917) aid_main_viewer_pane_g1

0x55cf,	// (0x00054923) aid_main_viewer_pane_g2_ParamLimits

0x55cf,	// (0x00054923) aid_main_viewer_pane_g2

0x55db,	// (0x0005492f) aid_main_viewer_pane_g3_ParamLimits

0x55db,	// (0x0005492f) aid_main_viewer_pane_g3

0x55ea,	// (0x0005493e) aid_main_viewer_pane_g4_ParamLimits

0x55ea,	// (0x0005493e) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0005e820) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0005e820) aid_main_viewer_pane_g

0x2045,	// (0x00051399) main_calc_pane_ParamLimits

0x5dde,	// (0x00055132) main_dialer2_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_cam6_pane

0x0ed9,	// (0x0005022d) main_vid6_pane

0x7327,	// (0x0005667b) listscroll_gen_pane_cp06_ParamLimits

0x7327,	// (0x0005667b) listscroll_gen_pane_cp06

0x741c,	// (0x00056770) main_clock2_pane_t5_ParamLimits

0x741c,	// (0x00056770) main_clock2_pane_t5

0x7471,	// (0x000567c5) aid_call2_pane_cp10_ParamLimits

0x7483,	// (0x000567d7) aid_call_pane_cp10_ParamLimits

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7495,	// (0x000567e9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7495,	// (0x000567e9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae0a,	// (0x0005a15e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0005eb69) popup_clock_analogue_window_cp10_g_ParamLimits

0x74a7,	// (0x000567fb) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd0d1,	// (0x0005c425) cell_dialer2_keypad_pane_g2_ParamLimits

0xd0d1,	// (0x0005c425) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x0005ec4f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x0005ec4f) cell_dialer2_keypad_pane_g

0x7ab6,	// (0x00056e0a) cell_dialer2_keypad_pane_t1

0x8550,	// (0x000578a4) main_cset_text2_pane_ParamLimits

0x8550,	// (0x000578a4) main_cset_text2_pane

0xd65e,	// (0x0005c9b2) area_vitu2_query_pane_g1_ParamLimits

0x8d17,	// (0x0005806b) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x0005edfe) area_vitu2_query_pane_g_ParamLimits

0xd6e2,	// (0x0005ca36) area_vitu2_query_pane_t7_ParamLimits

0xd6e2,	// (0x0005ca36) area_vitu2_query_pane_t7

0x8d72,	// (0x000580c6) bg_button_pane_cp018_ParamLimits

0x8d7f,	// (0x000580d3) bg_button_pane_cp021_ParamLimits

0x8d8b,	// (0x000580df) bg_button_pane_cp022_ParamLimits

0x8d8b,	// (0x000580df) bg_vkb2_func_pane_cp08_ParamLimits

0x8d72,	// (0x000580c6) bg_vkb2_func_pane_cp06_ParamLimits

0x8d7f,	// (0x000580d3) bg_vkb2_func_pane_cp07_ParamLimits

0x8d9a,	// (0x000580ee) input_focus_pane_cp09_ParamLimits

0xf0ef,	// (0x0005e443) cam6_autofocus_pane_ParamLimits

0xf0ef,	// (0x0005e443) cam6_autofocus_pane

0x9283,	// (0x000585d7) cam6_image_uncrop_pane_ParamLimits

0x9283,	// (0x000585d7) cam6_image_uncrop_pane

0x9290,	// (0x000585e4) cam6_indi_pane_ParamLimits

0x9290,	// (0x000585e4) cam6_indi_pane

0x92a6,	// (0x000585fa) cam6_mode_pane_ParamLimits

0x92a6,	// (0x000585fa) cam6_mode_pane

0x92b8,	// (0x0005860c) cam6_timer_pane_ParamLimits

0x92b8,	// (0x0005860c) cam6_timer_pane

0x92c4,	// (0x00058618) cam6_zoom_pane_ParamLimits

0x92c4,	// (0x00058618) cam6_zoom_pane

0x92d0,	// (0x00058624) cam6_mode_pane_g1_ParamLimits

0x92d0,	// (0x00058624) cam6_mode_pane_g1

0x92e0,	// (0x00058634) cam6_mode_pane_g2_ParamLimits

0x92e0,	// (0x00058634) cam6_mode_pane_g2

0x92f0,	// (0x00058644) cam6_mode_pane_g3_ParamLimits

0x92f0,	// (0x00058644) cam6_mode_pane_g3

0x9300,	// (0x00058654) cam6_mode_pane_g4_ParamLimits

0x9300,	// (0x00058654) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0005eee6) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0005eee6) cam6_mode_pane_g

0xd907,	// (0x0005cc5b) bg_tb_trans_pane_cp08_ParamLimits

0xd907,	// (0x0005cc5b) bg_tb_trans_pane_cp08

0xd915,	// (0x0005cc69) cam6_battery_pane_ParamLimits

0xd915,	// (0x0005cc69) cam6_battery_pane

0xd92b,	// (0x0005cc7f) cam6_indi_pane_g1_ParamLimits

0xd92b,	// (0x0005cc7f) cam6_indi_pane_g1

0xd93d,	// (0x0005cc91) cam6_indi_pane_g2_ParamLimits

0xd93d,	// (0x0005cc91) cam6_indi_pane_g2

0xd94f,	// (0x0005cca3) cam6_indi_pane_g3_ParamLimits

0xd94f,	// (0x0005cca3) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x0005eeef) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x0005eeef) cam6_indi_pane_g

0xd961,	// (0x0005ccb5) cam6_indi_pane_t1_ParamLimits

0xd961,	// (0x0005ccb5) cam6_indi_pane_t1

0x803b,	// (0x0005738f) cam6_autofocus_pane_g1

0x8033,	// (0x00057387) cam6_autofocus_pane_g2

0x804b,	// (0x0005739f) cam6_autofocus_pane_g3

0x8043,	// (0x00057397) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0005eef6) cam6_autofocus_pane_g

0xd987,	// (0x0005ccdb) cam6_timer_pane_g1

0xd98f,	// (0x0005cce3) cam6_timer_pane_t1

0xd99d,	// (0x0005ccf1) cam6_zoom_cont_pane

0xd9a5,	// (0x0005ccf9) cam6_zoom_pane_g1

0xd9ad,	// (0x0005cd01) cam6_zoom_pane_g2

0x9310,	// (0x00058664) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x0005eeff) cam6_zoom_pane_g

0xc801,	// (0x0005bb55) cam6_battery_pane_g1

0xc801,	// (0x0005bb55) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0005ea76) cam6_battery_pane_g

0xd9b5,	// (0x0005cd09) cam6_zoom_cont_pane_g1

0xd9be,	// (0x0005cd12) cam6_zoom_cont_pane_g2

0xd9c7,	// (0x0005cd1b) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0005ef06) cam6_zoom_cont_pane_g

0x932d,	// (0x00058681) cam6_mode_pane_cp_ParamLimits

0x932d,	// (0x00058681) cam6_mode_pane_cp

0x933f,	// (0x00058693) cam6_zoom_pane_cp_ParamLimits

0x933f,	// (0x00058693) cam6_zoom_pane_cp

0x934b,	// (0x0005869f) vid6_image_uncrop_cif_pane_ParamLimits

0x934b,	// (0x0005869f) vid6_image_uncrop_cif_pane

0x9359,	// (0x000586ad) vid6_image_uncrop_nhd_pane_ParamLimits

0x9359,	// (0x000586ad) vid6_image_uncrop_nhd_pane

0x9366,	// (0x000586ba) vid6_image_uncrop_vga_pane_ParamLimits

0x9366,	// (0x000586ba) vid6_image_uncrop_vga_pane

0x9373,	// (0x000586c7) vid6_image_uncrop_wvga_pane_ParamLimits

0x9373,	// (0x000586c7) vid6_image_uncrop_wvga_pane

0x9380,	// (0x000586d4) vid6_indi_pane_ParamLimits

0x9380,	// (0x000586d4) vid6_indi_pane

0xd907,	// (0x0005cc5b) bg_tb_trans_pane_cp09_ParamLimits

0xd907,	// (0x0005cc5b) bg_tb_trans_pane_cp09

0xd9db,	// (0x0005cd2f) cam6_battery_pane_cp_ParamLimits

0xd9db,	// (0x0005cd2f) cam6_battery_pane_cp

0xd9e7,	// (0x0005cd3b) vid6_indi_pane_g1_ParamLimits

0xd9e7,	// (0x0005cd3b) vid6_indi_pane_g1

0xd9f9,	// (0x0005cd4d) vid6_indi_pane_g2_ParamLimits

0xd9f9,	// (0x0005cd4d) vid6_indi_pane_g2

0xda0b,	// (0x0005cd5f) vid6_indi_pane_g3_ParamLimits

0xda0b,	// (0x0005cd5f) vid6_indi_pane_g3

0xda20,	// (0x0005cd74) vid6_indi_pane_g4_ParamLimits

0xda20,	// (0x0005cd74) vid6_indi_pane_g4

0xda35,	// (0x0005cd89) vid6_indi_pane_g5_ParamLimits

0xda35,	// (0x0005cd89) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x0005ef0d) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x0005ef0d) vid6_indi_pane_g

0xda4f,	// (0x0005cda3) vid6_indi_pane_t1_ParamLimits

0xda4f,	// (0x0005cda3) vid6_indi_pane_t1

0xda65,	// (0x0005cdb9) vid6_indi_pane_t2_ParamLimits

0xda65,	// (0x0005cdb9) vid6_indi_pane_t2

0xda8d,	// (0x0005cde1) vid6_indi_pane_t3_ParamLimits

0xda8d,	// (0x0005cde1) vid6_indi_pane_t3

0xdab5,	// (0x0005ce09) vid6_indi_pane_t4_ParamLimits

0xdab5,	// (0x0005ce09) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0005ef18) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0005ef18) vid6_indi_pane_t

0xdad9,	// (0x0005ce2d) wait_bar_pane_cp08

0x9397,	// (0x000586eb) main_cset_text2_pane_t1_ParamLimits

0x9397,	// (0x000586eb) main_cset_text2_pane_t1

0x9318,	// (0x0005866c) listscroll_gen_pane_cp06_t1_ParamLimits

0x9318,	// (0x0005866c) listscroll_gen_pane_cp06_t1

0x0ed9,	// (0x0005022d) main_cam6_set_pane

0xef57,	// (0x0005e2ab) bg_tb_trans_pane_cp06_ParamLimits

0xef6d,	// (0x0005e2c1) cam4_indicators_pane_g1_ParamLimits

0xef7d,	// (0x0005e2d1) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x0005ec8c) cam4_indicators_pane_g_ParamLimits

0xef9d,	// (0x0005e2f1) cam4_indicators_pane_t1_ParamLimits

0xefbf,	// (0x0005e313) bg_tb_trans_pane_cp07_ParamLimits

0x7fe2,	// (0x00057336) vid4_indicators_pane_g1_ParamLimits

0x7fef,	// (0x00057343) vid4_indicators_pane_g2_ParamLimits

0x7ffc,	// (0x00057350) vid4_indicators_pane_g3_ParamLimits

0x8009,	// (0x0005735d) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x0005ec9e) vid4_indicators_pane_g_ParamLimits

0x8021,	// (0x00057375) vid4_indicators_pane_t1_ParamLimits

0xf05a,	// (0x0005e3ae) vid4_progress_pane_g1_ParamLimits

0xf069,	// (0x0005e3bd) vid4_progress_pane_g2_ParamLimits

0xf078,	// (0x0005e3cc) vid4_progress_pane_g3_ParamLimits

0xf087,	// (0x0005e3db) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0005ee49) vid4_progress_pane_g_ParamLimits

0xf09f,	// (0x0005e3f3) vid4_progress_pane_t1_ParamLimits

0xf0b5,	// (0x0005e409) vid4_progress_pane_t2_ParamLimits

0xf0ca,	// (0x0005e41e) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x0005ee54) vid4_progress_pane_t_ParamLimits

0xf0df,	// (0x0005e433) wait_bar_pane_cp07_ParamLimits

0x93b1,	// (0x00058705) main_cam6_set_pane_g2_ParamLimits

0x93b1,	// (0x00058705) main_cam6_set_pane_g2

0x93d3,	// (0x00058727) main_cset6_listscroll_pane_ParamLimits

0x93d3,	// (0x00058727) main_cset6_listscroll_pane

0x93ed,	// (0x00058741) main_cset6_slider_pane_ParamLimits

0x93ed,	// (0x00058741) main_cset6_slider_pane

0x9403,	// (0x00058757) main_cset6_text2_pane_ParamLimits

0x9403,	// (0x00058757) main_cset6_text2_pane

0xdae9,	// (0x0005ce3d) main_cset6_text_pane

0xd306,	// (0x0005c65a) main_cset_list_pane_copy1_ParamLimits

0xd306,	// (0x0005c65a) main_cset_list_pane_copy1

0xd316,	// (0x0005c66a) scroll_pane_cp028_copy1

0x9411,	// (0x00058765) cset_list_set_pane_copy1

0x9423,	// (0x00058777) aid_position_infowindow_above_copy1

0x942b,	// (0x0005877f) aid_position_infowindow_below_copy1

0x9433,	// (0x00058787) cset_list_set_pane_g1_copy1

0x8817,	// (0x00057b6b) cset_list_set_pane_g3_copy1_ParamLimits

0x8817,	// (0x00057b6b) cset_list_set_pane_g3_copy1

0x943b,	// (0x0005878f) cset_list_set_pane_t1_copy1_ParamLimits

0x943b,	// (0x0005878f) cset_list_set_pane_t1_copy1

0x2045,	// (0x00051399) list_highlight_pane_cp021_copy1_ParamLimits

0x2045,	// (0x00051399) list_highlight_pane_cp021_copy1

0xdaf1,	// (0x0005ce45) cset6_slider_pane_ParamLimits

0xdaf1,	// (0x0005ce45) cset6_slider_pane

0xdb1d,	// (0x0005ce71) main_cset6_slider_pane_g1_ParamLimits

0xdb1d,	// (0x0005ce71) main_cset6_slider_pane_g1

0x9450,	// (0x000587a4) main_cset6_slider_pane_g2_ParamLimits

0x9450,	// (0x000587a4) main_cset6_slider_pane_g2

0xd32b,	// (0x0005c67f) main_cset6_slider_pane_g3_ParamLimits

0xd32b,	// (0x0005c67f) main_cset6_slider_pane_g3

0x8615,	// (0x00057969) main_cset6_slider_pane_g4_ParamLimits

0x8615,	// (0x00057969) main_cset6_slider_pane_g4

0x865d,	// (0x000579b1) main_cset6_slider_pane_g5_ParamLimits

0x865d,	// (0x000579b1) main_cset6_slider_pane_g5

0xd32b,	// (0x0005c67f) main_cset6_slider_pane_g7_ParamLimits

0xd32b,	// (0x0005c67f) main_cset6_slider_pane_g7

0xd337,	// (0x0005c68b) main_cset6_slider_pane_g8_ParamLimits

0xd337,	// (0x0005c68b) main_cset6_slider_pane_g8

0x85fd,	// (0x00057951) main_cset6_slider_pane_g9_ParamLimits

0x85fd,	// (0x00057951) main_cset6_slider_pane_g9

0x8609,	// (0x0005795d) main_cset6_slider_pane_g10_ParamLimits

0x8609,	// (0x0005795d) main_cset6_slider_pane_g10

0x8615,	// (0x00057969) main_cset6_slider_pane_g11_ParamLimits

0x8615,	// (0x00057969) main_cset6_slider_pane_g11

0x8621,	// (0x00057975) main_cset6_slider_pane_g12_ParamLimits

0x8621,	// (0x00057975) main_cset6_slider_pane_g12

0x862d,	// (0x00057981) main_cset6_slider_pane_g13_ParamLimits

0x862d,	// (0x00057981) main_cset6_slider_pane_g13

0x8639,	// (0x0005798d) main_cset6_slider_pane_g14_ParamLimits

0x8639,	// (0x0005798d) main_cset6_slider_pane_g14

0x9478,	// (0x000587cc) main_cset6_slider_pane_g15_ParamLimits

0x9478,	// (0x000587cc) main_cset6_slider_pane_g15

0x865d,	// (0x000579b1) main_cset6_slider_pane_g16_ParamLimits

0x865d,	// (0x000579b1) main_cset6_slider_pane_g16

0x8669,	// (0x000579bd) main_cset6_slider_pane_g17_ParamLimits

0x8669,	// (0x000579bd) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0005ef21) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0005ef21) main_cset6_slider_pane_g

0xdb45,	// (0x0005ce99) main_cset6_slider_pane_t1_ParamLimits

0xdb45,	// (0x0005ce99) main_cset6_slider_pane_t1

0xdb86,	// (0x0005ceda) main_cset6_slider_pane_t2_ParamLimits

0xdb86,	// (0x0005ceda) main_cset6_slider_pane_t2

0xdbb1,	// (0x0005cf05) main_cset6_slider_pane_t3_ParamLimits

0xdbb1,	// (0x0005cf05) main_cset6_slider_pane_t3

0x9490,	// (0x000587e4) main_cset6_slider_pane_t4_ParamLimits

0x9490,	// (0x000587e4) main_cset6_slider_pane_t4

0x94bb,	// (0x0005880f) main_cset6_slider_pane_t5_ParamLimits

0x94bb,	// (0x0005880f) main_cset6_slider_pane_t5

0xdbdc,	// (0x0005cf30) main_cset6_slider_pane_t7_ParamLimits

0xdbdc,	// (0x0005cf30) main_cset6_slider_pane_t7

0x94e6,	// (0x0005883a) main_cset6_slider_pane_t8_ParamLimits

0x94e6,	// (0x0005883a) main_cset6_slider_pane_t8

0x950a,	// (0x0005885e) main_cset6_slider_pane_t9_ParamLimits

0x950a,	// (0x0005885e) main_cset6_slider_pane_t9

0x952e,	// (0x00058882) main_cset6_slider_pane_t10_ParamLimits

0x952e,	// (0x00058882) main_cset6_slider_pane_t10

0x9552,	// (0x000588a6) main_cset6_slider_pane_t11_ParamLimits

0x9552,	// (0x000588a6) main_cset6_slider_pane_t11

0xdc12,	// (0x0005cf66) main_cset6_slider_pane_t14_ParamLimits

0xdc12,	// (0x0005cf66) main_cset6_slider_pane_t14

0xdc4b,	// (0x0005cf9f) main_cset6_slider_pane_t15_ParamLimits

0xdc4b,	// (0x0005cf9f) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x0005ef46) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x0005ef46) main_cset6_slider_pane_t

0xdc84,	// (0x0005cfd8) cset_slider_pane_g1_copy1

0xdc8d,	// (0x0005cfe1) cset_slider_pane_g2_copy1

0xdc96,	// (0x0005cfea) cset_slider_pane_g3_copy1

0x0ed9,	// (0x0005022d) bg_popup_sub_pane_cp011_copy1

0xd490,	// (0x0005c7e4) main_cset_text_pane_g1_copy1

0xd498,	// (0x0005c7ec) main_cset_text_pane_t1_copy1

0xd4a6,	// (0x0005c7fa) main_cset_text_pane_t2_copy1

0xd4b4,	// (0x0005c808) main_cset_text_pane_t3_copy1

0xd4c2,	// (0x0005c816) main_cset_text_pane_t4_copy1

0xd4d0,	// (0x0005c824) main_cset_text_pane_t5_copy1

0xd4de,	// (0x0005c832) main_cset_text_pane_t6_copy1

0xd4ec,	// (0x0005c840) main_cset_text_pane_t7_copy1

0x9576,	// (0x000588ca) main_cset_text2_pane_t1_copy1

0x0ed9,	// (0x0005022d) main_ncimui_pane

0x5fec,	// (0x00055340) popup_query_ncimui_window_ParamLimits

0x5fec,	// (0x00055340) popup_query_ncimui_window

0xcad1,	// (0x0005be25) field_cale_ev2_pane_g4_ParamLimits

0xcad1,	// (0x0005be25) field_cale_ev2_pane_g4

0x79a8,	// (0x00056cfc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x79a8,	// (0x00056cfc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0005ec2a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0005ec2a) cell_video_dialer_keypad_pane_g

0x79c0,	// (0x00056d14) cell_video_dialer_keypad_pane_t1

0x0ed9,	// (0x0005022d) bg_popup_window_pane_cp012

0x1edd,	// (0x00051231) heading_pane_cp06

0xdd88,	// (0x0005d0dc) ncim_query_content_pane

0x0ed9,	// (0x0005022d) bg_popup_heading_pane_cp01

0xdd90,	// (0x0005d0e4) ncim_heading_pane_t1

0xdd9e,	// (0x0005d0f2) ncim_indicator_popup_pane

0xddb0,	// (0x0005d104) ncim_query_button_pane

0xddc4,	// (0x0005d118) ncim_query_content_pane_t1

0xddd6,	// (0x0005d12a) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x0005ef85) ncim_query_content_pane_t

0xde10,	// (0x0005d164) ncim_query_list_pane

0xde22,	// (0x0005d176) ncim_query_popup_pane

0xdd9e,	// (0x0005d0f2) ncim_indicator_popup_pane_ParamLimits

0x9656,	// (0x000589aa) ncim_query_content_pane_g1_ParamLimits

0x9656,	// (0x000589aa) ncim_query_content_pane_g1

0xddc4,	// (0x0005d118) ncim_query_content_pane_t1_ParamLimits

0xddd6,	// (0x0005d12a) ncim_query_content_pane_t2_ParamLimits

0x9662,	// (0x000589b6) ncim_query_content_pane_t3_ParamLimits

0x9662,	// (0x000589b6) ncim_query_content_pane_t3

0x968a,	// (0x000589de) ncim_query_content_pane_t4_ParamLimits

0x968a,	// (0x000589de) ncim_query_content_pane_t4

0x96b2,	// (0x00058a06) ncim_query_content_pane_t5_ParamLimits

0x96b2,	// (0x00058a06) ncim_query_content_pane_t5

0xdde8,	// (0x0005d13c) ncim_query_content_pane_t6_ParamLimits

0xdde8,	// (0x0005d13c) ncim_query_content_pane_t6

0xfc31,	// (0x0005ef85) ncim_query_content_pane_t_ParamLimits

0xde10,	// (0x0005d164) ncim_query_list_pane_ParamLimits

0xde22,	// (0x0005d176) ncim_query_popup_pane_ParamLimits

0xde36,	// (0x0005d18a) wait_bar_pane_cp04

0x0ed9,	// (0x0005022d) input_focus_pane_cp011

0xde3e,	// (0x0005d192) ncim_query_popup_pane_t1

0xde4c,	// (0x0005d1a0) ncim_list_query_list_pane_ParamLimits

0xde4c,	// (0x0005d1a0) ncim_list_query_list_pane

0x0ed9,	// (0x0005022d) bg_button_pane_cp027

0xde5f,	// (0x0005d1b3) ncim_query_button_pane_g1

0x0ed9,	// (0x0005022d) list_highlight_pane_cp012

0xde69,	// (0x0005d1bd) ncim_list_query_list_pane_g1

0xde71,	// (0x0005d1c5) ncim_list_query_list_pane_t1

0xef8d,	// (0x0005e2e1) cam4_indicators_pane_g3_ParamLimits

0xef8d,	// (0x0005e2e1) cam4_indicators_pane_g3

0x8015,	// (0x00057369) vid4_indicators_pane_g5_ParamLimits

0x8015,	// (0x00057369) vid4_indicators_pane_g5

0xf093,	// (0x0005e3e7) vid4_progress_pane_g5_ParamLimits

0xf093,	// (0x0005e3e7) vid4_progress_pane_g5

0x95a0,	// (0x000588f4) main_ncimui_pane_g1

0x95e6,	// (0x0005893a) ncimui_group_query_pane_ParamLimits

0x95e6,	// (0x0005893a) ncimui_group_query_pane

0x961a,	// (0x0005896e) ncimui_list_pane_ParamLimits

0x961a,	// (0x0005896e) ncimui_list_pane

0x9632,	// (0x00058986) ncimui_text_pane_ParamLimits

0x9632,	// (0x00058986) ncimui_text_pane

0x96da,	// (0x00058a2e) ncimui_text_pane_t1_ParamLimits

0x96da,	// (0x00058a2e) ncimui_text_pane_t1

0xde88,	// (0x0005d1dc) ncimui_list_single_graphic_pane_ParamLimits

0xde88,	// (0x0005d1dc) ncimui_list_single_graphic_pane

0x9700,	// (0x00058a54) ncimui_query_pane_ParamLimits

0x9700,	// (0x00058a54) ncimui_query_pane

0x0ed9,	// (0x0005022d) list_highlight_pane_cp013

0xde95,	// (0x0005d1e9) ncim_list_query_list_pane_t1_copy1

0xdea3,	// (0x0005d1f7) ncim_list_single_graphic_pane_g1

0xdeab,	// (0x0005d1ff) ncim_query_button_pane_cp01

0xdeb3,	// (0x0005d207) ncim_query_entry_pane_ParamLimits

0xdeb3,	// (0x0005d207) ncim_query_entry_pane

0xdec3,	// (0x0005d217) ncimui_query_pane_g1

0xdecb,	// (0x0005d21f) ncimui_query_pane_t1_ParamLimits

0xdecb,	// (0x0005d21f) ncimui_query_pane_t1

0x0ed9,	// (0x0005022d) input_focus_pane_cp012

0xde3e,	// (0x0005d192) ncim_query_entry_pane_t1

0x165f,	// (0x000509b3) main_im_pane_ParamLimits

0x2045,	// (0x00051399) main_mobtv_pane_ParamLimits

0x2045,	// (0x00051399) main_mobtv_pane

0x85fd,	// (0x00057951) main_cset6_slider_pane_g18_ParamLimits

0x85fd,	// (0x00057951) main_cset6_slider_pane_g18

0x862d,	// (0x00057981) main_cset6_slider_pane_g19_ParamLimits

0x862d,	// (0x00057981) main_cset6_slider_pane_g19

0xdee1,	// (0x0005d235) bg_main_mobtv_pane_ParamLimits

0xdee1,	// (0x0005d235) bg_main_mobtv_pane

0x9710,	// (0x00058a64) main_mobtv_info_pane

0x9719,	// (0x00058a6d) main_mobtv_loading_pane_ParamLimits

0x9719,	// (0x00058a6d) main_mobtv_loading_pane

0xdeef,	// (0x0005d243) main_mobtv_pg_channel_list_pane

0xdef9,	// (0x0005d24d) main_mobtv_pg_hdr_pane

0x9726,	// (0x00058a7a) main_mobtv_programe_curr_pane_ParamLimits

0x9726,	// (0x00058a7a) main_mobtv_programe_curr_pane

0x9733,	// (0x00058a87) main_mobtv_programe_next_pane_ParamLimits

0x9733,	// (0x00058a87) main_mobtv_programe_next_pane

0xdf02,	// (0x0005d256) popup_mobtv_noti_window

0xc801,	// (0x0005bb55) main_tv_pg_hdr_pane_g1

0xdf0a,	// (0x0005d25e) main_tv_pg_hdr_pane_g2

0xdf12,	// (0x0005d266) main_tv_pg_hdr_pane_g3

0xdf1a,	// (0x0005d26e) main_tv_pg_hdr_pane_g4

0xdf22,	// (0x0005d276) main_tv_pg_hdr_pane_g5

0xdf2a,	// (0x0005d27e) main_tv_pg_hdr_pane_g6

0xdf32,	// (0x0005d286) main_tv_pg_hdr_pane_g7

0xdf3a,	// (0x0005d28e) main_tv_pg_hdr_pane_g8

0xdf42,	// (0x0005d296) main_tv_pg_hdr_pane_g9

0xdf4a,	// (0x0005d29e) main_tv_pg_hdr_pane_g10

0xdf54,	// (0x0005d2a8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x0005ef92) main_tv_pg_hdr_pane_g

0xdf5e,	// (0x0005d2b2) main_tv_pg_hdr_pane_t1

0xdf6c,	// (0x0005d2c0) main_tv_pg_hdr_pane_t2

0xdf7a,	// (0x0005d2ce) main_tv_pg_hdr_pane_t3

0xdf88,	// (0x0005d2dc) main_tv_pg_hdr_pane_t4

0xdf96,	// (0x0005d2ea) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0005efa9) main_tv_pg_hdr_pane_t

0xdfa4,	// (0x0005d2f8) single_mobtv_pg_channel_pane_ParamLimits

0xdfa4,	// (0x0005d2f8) single_mobtv_pg_channel_pane

0xdfb6,	// (0x0005d30a) single_mobtv_pg_channel_table_pane

0xdfbf,	// (0x0005d313) single_mobtv_pg_channel_thumb_pane

0xdfc8,	// (0x0005d31c) single_tv_pg_channel_pane_g1

0xdfd1,	// (0x0005d325) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x0005efb4) single_tv_pg_channel_pane_g

0xca30,	// (0x0005bd84) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca30,	// (0x0005bd84) bg_single_mobtv_pg_channel_thumb_pane

0xdfda,	// (0x0005d32e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfda,	// (0x0005d32e) single_mobtv_pg_channel_thumb_pane_g1

0xdfe8,	// (0x0005d33c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfe8,	// (0x0005d33c) single_mobtv_pg_channel_thumb_pane_g2

0xdff4,	// (0x0005d348) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdff4,	// (0x0005d348) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0005efb9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0005efb9) single_mobtv_pg_channel_thumb_pane_g

0xe000,	// (0x0005d354) single_mobtv_pg_channel_thumb_pane_t1

0xe00e,	// (0x0005d362) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x0005efc0) single_mobtv_pg_channel_thumb_pane_t

0xc801,	// (0x0005bb55) bg_single_mobtv_pg_channel_table_pane_g1

0xc801,	// (0x0005bb55) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0005ea76) bg_single_mobtv_pg_channel_table_pane_g

0xe01c,	// (0x0005d370) single_mobtv_pg_channel_table_pane_t1

0xe02a,	// (0x0005d37e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0005efc5) single_mobtv_pg_channel_table_pane_t

0x9748,	// (0x00058a9c) main_mobtv_info_pane_g1_ParamLimits

0x9748,	// (0x00058a9c) main_mobtv_info_pane_g1

0x9764,	// (0x00058ab8) main_mobtv_info_pane_t1_ParamLimits

0x9764,	// (0x00058ab8) main_mobtv_info_pane_t1

0x97ca,	// (0x00058b1e) main_mobtv_info_pane_t2_ParamLimits

0x97ca,	// (0x00058b1e) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x0005efcf) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x0005efcf) main_mobtv_info_pane_t

0x984d,	// (0x00058ba1) wait_bar_pane_cp05

0x985d,	// (0x00058bb1) main_mobtv_loading_pane_g1_ParamLimits

0x985d,	// (0x00058bb1) main_mobtv_loading_pane_g1

0x986e,	// (0x00058bc2) main_mobtv_loading_pane_g2_ParamLimits

0x986e,	// (0x00058bc2) main_mobtv_loading_pane_g2

0x987a,	// (0x00058bce) main_mobtv_loading_pane_g3_ParamLimits

0x987a,	// (0x00058bce) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0005efd6) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0005efd6) main_mobtv_loading_pane_g

0xe038,	// (0x0005d38c) main_mobtv_loading_pane_t1_ParamLimits

0xe038,	// (0x0005d38c) main_mobtv_loading_pane_t1

0xe050,	// (0x0005d3a4) main_mobtv_loading_pane_t2_ParamLimits

0xe050,	// (0x0005d3a4) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x0005efdd) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x0005efdd) main_mobtv_loading_pane_t

0x988b,	// (0x00058bdf) wait_bar_pane_cp06_ParamLimits

0x988b,	// (0x00058bdf) wait_bar_pane_cp06

0xe074,	// (0x0005d3c8) main_mobtv_programe_curr_pane_t1

0xe082,	// (0x0005d3d6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0005efe2) main_mobtv_programe_curr_pane_t

0xe090,	// (0x0005d3e4) main_mobtv_programe_next_pane_t1

0xe09e,	// (0x0005d3f2) main_mobtv_programe_next_pane_t2

0xe0ac,	// (0x0005d400) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0005efe7) main_mobtv_programe_next_pane_t

0x0ed9,	// (0x0005022d) bg_popup_mobtv_noti_window_pane

0xe0ba,	// (0x0005d40e) popup_mobtv_noti_window_g1

0xe0c2,	// (0x0005d416) popup_mobtv_noti_window_t1

0xe0d0,	// (0x0005d424) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x0005efee) popup_mobtv_noti_window_t

0xc801,	// (0x0005bb55) bg_popup_mobtv_noti_window_pane_g1

0x0ed9,	// (0x0005022d) sc_clock_pane

0x0ed9,	// (0x0005022d) main_fs_bigclock_pane

0x9100,	// (0x00058454) blid2_tripm_pane_t4_ParamLimits

0x9100,	// (0x00058454) blid2_tripm_pane_t4

0x989a,	// (0x00058bee) sc_clock_pane_g1_ParamLimits

0x989a,	// (0x00058bee) sc_clock_pane_g1

0x98ac,	// (0x00058c00) sc_clock_pane_t1_ParamLimits

0x98ac,	// (0x00058c00) sc_clock_pane_t1

0x98ce,	// (0x00058c22) sc_clock_pane_t2_ParamLimits

0x98ce,	// (0x00058c22) sc_clock_pane_t2

0x98e4,	// (0x00058c38) sc_clock_pane_t3_ParamLimits

0x98e4,	// (0x00058c38) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0005eff3) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0005eff3) sc_clock_pane_t

0xa51e,	// (0x00059872) main_fs_bigclock_indicator_pane_ParamLimits

0xa51e,	// (0x00059872) main_fs_bigclock_indicator_pane

0xca00,	// (0x0005bd54) main_fs_bigclock_pane_g1_ParamLimits

0xca00,	// (0x0005bd54) main_fs_bigclock_pane_g1

0xa52a,	// (0x0005987e) main_fs_bigclock_pane_t1_ParamLimits

0xa52a,	// (0x0005987e) main_fs_bigclock_pane_t1

0xa53c,	// (0x00059890) main_fs_bigclock_pane_t2_ParamLimits

0xa53c,	// (0x00059890) main_fs_bigclock_pane_t2

0xa54e,	// (0x000598a2) main_fs_bigclock_pane_t3_ParamLimits

0xa54e,	// (0x000598a2) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x0005f1ed) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x0005f1ed) main_fs_bigclock_pane_t

0x07d8,	// (0x0004fb2c) main_fs_bigclock_indicator_pane_g1

0xddb8,	// (0x0005d10c) ncim_query_content_pane_g2_ParamLimits

0xddb8,	// (0x0005d10c) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x0005ef80) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x0005ef80) ncim_query_content_pane_g

0x98f9,	// (0x00058c4d) sc_clock_pane_t4_ParamLimits

0x98f9,	// (0x00058c4d) sc_clock_pane_t4

0x2045,	// (0x00051399) main_radioblah_pane

0xd128,	// (0x0005c47c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd128,	// (0x0005c47c) cell_call4_button_pane_t1_copy1

0x95a8,	// (0x000588fc) main_ncimui_pane_t1_ParamLimits

0x95a8,	// (0x000588fc) main_ncimui_pane_t1

0x95ba,	// (0x0005890e) main_ncimui_pane_t2_ParamLimits

0x95ba,	// (0x0005890e) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0005ef79) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0005ef79) main_ncimui_pane_t

0xe1fa,	// (0x0005d54e) main_radioblah_anim_pane_ParamLimits

0xe1fa,	// (0x0005d54e) main_radioblah_anim_pane

0xe20b,	// (0x0005d55f) main_radioblah_info_pane_ParamLimits

0xe20b,	// (0x0005d55f) main_radioblah_info_pane

0xe21f,	// (0x0005d573) main_radioblah_pane_t1_ParamLimits

0xe21f,	// (0x0005d573) main_radioblah_pane_t1

0xe23b,	// (0x0005d58f) main_radioblah_pane_t2_ParamLimits

0xe23b,	// (0x0005d58f) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0005f014) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0005f014) main_radioblah_pane_t

0x9990,	// (0x00058ce4) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9990,	// (0x00058ce4) main_radioblah_rocker_ctrl_pane

0xe283,	// (0x0005d5d7) main_radioblah_info_pane_t1_ParamLimits

0xe283,	// (0x0005d5d7) main_radioblah_info_pane_t1

0x99e4,	// (0x00058d38) main_radioblah_info_pane_t2_ParamLimits

0x99e4,	// (0x00058d38) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x0005f01d) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x0005f01d) main_radioblah_info_pane_t

0xc801,	// (0x0005bb55) main_radioblah_rocker_ctrl_pane_g1

0x9a92,	// (0x00058de6) main_radioblah_rocker_ctrl_pane_g2

0x9a9a,	// (0x00058dee) main_radioblah_rocker_ctrl_pane_g3

0x9aa2,	// (0x00058df6) main_radioblah_rocker_ctrl_pane_g4

0x9aaa,	// (0x00058dfe) main_radioblah_rocker_ctrl_pane_g5

0x9ab2,	// (0x00058e06) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0005f026) main_radioblah_rocker_ctrl_pane_g

0x9576,	// (0x000588ca) main_cset_text2_pane_t1_copy1_ParamLimits

0xef4f,	// (0x0005e2a3) cam4_image_uncrop_qvga_pane

0xefb7,	// (0x0005e30b) vid4_image_uncrop_qcif_pane

0xf0ef,	// (0x0005e443) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ef,	// (0x0005e443) cam6_image_uncrop_qvga_pane

0xd9cf,	// (0x0005cd23) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9cf,	// (0x0005cd23) vid6_image_uncrop_qcif_pane

0x0ed9,	// (0x0005022d) bg_popup_preview_window_pane_cp03

0xdd6a,	// (0x0005d0be) list_cset_text2_pane

0xdd72,	// (0x0005d0c6) main_cset6_text2_pane_g1

0xdd7a,	// (0x0005d0ce) main_cset6_text2_pane_t1

0x9aba,	// (0x00058e0e) list_cset_text2_pane_t1_ParamLimits

0x9aba,	// (0x00058e0e) list_cset_text2_pane_t1

0x2045,	// (0x00051399) main_radioblah_pane_ParamLimits

0x983b,	// (0x00058b8f) main_mobtv_info_pane_t3_ParamLimits

0x983b,	// (0x00058b8f) main_mobtv_info_pane_t3

0x997e,	// (0x00058cd2) main_radioblah_pane_g1

0x99b8,	// (0x00058d0c) main_radioblah_info_pane_g1

0x9a37,	// (0x00058d8b) main_radioblah_info_pane_t3_ParamLimits

0x9a37,	// (0x00058d8b) main_radioblah_info_pane_t3

0x4c9b,	// (0x00053fef) highlight_cell_cale_month_pane_ParamLimits

0x4c9b,	// (0x00053fef) highlight_cell_cale_month_pane

0x0ed9,	// (0x0005022d) main_phob_fisheye_pane

0xcb7a,	// (0x0005bece) scroll_pane_cp0031_ParamLimits

0xcb7a,	// (0x0005bece) scroll_pane_cp0031

0xdad9,	// (0x0005ce2d) wait_bar_pane_cp08_ParamLimits

0x9411,	// (0x00058765) cset_list_set_pane_copy1_ParamLimits

0xe2bd,	// (0x0005d611) highlight_cell_cale_month_pane_g1

0x9ad3,	// (0x00058e27) highlight_cell_cale_month_pane_t1

0xe2c5,	// (0x0005d619) list_gen_pane_cp01

0xd316,	// (0x0005c66a) scroll_pane_01

0x2073,	// (0x000513c7) list_single_double_fisheye_pane

0xe2ce,	// (0x0005d622) list_double_fisheye_pane_g1_ParamLimits

0xe2ce,	// (0x0005d622) list_double_fisheye_pane_g1

0xe2da,	// (0x0005d62e) list_double_fisheye_pane_g2_ParamLimits

0xe2da,	// (0x0005d62e) list_double_fisheye_pane_g2

0x207c,	// (0x000513d0) list_double_fisheye_pane_g3_ParamLimits

0x207c,	// (0x000513d0) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0005f033) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0005f033) list_double_fisheye_pane_g

0xe30b,	// (0x0005d65f) list_double_fisheye_pane_t1_ParamLimits

0xe30b,	// (0x0005d65f) list_double_fisheye_pane_t1

0xe326,	// (0x0005d67a) list_double_fisheye_pane_t2_ParamLimits

0xe326,	// (0x0005d67a) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x0005f03e) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x0005f03e) list_double_fisheye_pane_t

0x0ed9,	// (0x0005022d) main_call5_pane

0x9922,	// (0x00058c76) sc_swipe_pane_ParamLimits

0x9922,	// (0x00058c76) sc_swipe_pane

0x9af2,	// (0x00058e46) call5_image_pane_ParamLimits

0x9af2,	// (0x00058e46) call5_image_pane

0x9b07,	// (0x00058e5b) call5_swipe_1_pane_ParamLimits

0x9b07,	// (0x00058e5b) call5_swipe_1_pane

0x9b18,	// (0x00058e6c) call5_swipe_2_pane_ParamLimits

0x9b18,	// (0x00058e6c) call5_swipe_2_pane

0x9b3d,	// (0x00058e91) popup_call5_audio_first_window_ParamLimits

0x9b3d,	// (0x00058e91) popup_call5_audio_first_window

0xca30,	// (0x0005bd84) call5_swipe_1_pane_g1_ParamLimits

0xca30,	// (0x0005bd84) call5_swipe_1_pane_g1

0xe348,	// (0x0005d69c) call5_swipe_1_pane_g2_ParamLimits

0xe348,	// (0x0005d69c) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x0005f043) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x0005f043) call5_swipe_1_pane_g

0xe354,	// (0x0005d6a8) call5_swipe_1_pane_t1_ParamLimits

0xe354,	// (0x0005d6a8) call5_swipe_1_pane_t1

0xca30,	// (0x0005bd84) call5_swipe_2_pane_g1_ParamLimits

0xca30,	// (0x0005bd84) call5_swipe_2_pane_g1

0xe369,	// (0x0005d6bd) call5_swipe_2_pane_g2_ParamLimits

0xe369,	// (0x0005d6bd) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0005f048) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0005f048) call5_swipe_2_pane_g

0xe375,	// (0x0005d6c9) call5_swipe_2_pane_t1_ParamLimits

0xe375,	// (0x0005d6c9) call5_swipe_2_pane_t1

0xe38a,	// (0x0005d6de) sc_swipe_pane_g1_ParamLimits

0xe38a,	// (0x0005d6de) sc_swipe_pane_g1

0xe397,	// (0x0005d6eb) sc_swipe_pane_g2_ParamLimits

0xe397,	// (0x0005d6eb) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x0005f04d) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x0005f04d) sc_swipe_pane_g

0xe3a3,	// (0x0005d6f7) sc_swipe_pane_t1_ParamLimits

0xe3a3,	// (0x0005d6f7) sc_swipe_pane_t1

0x0ed9,	// (0x0005022d) main_cmail_launcher_pane

0x9b4c,	// (0x00058ea0) aid_size_cell_cmail_l_ParamLimits

0x9b4c,	// (0x00058ea0) aid_size_cell_cmail_l

0x9b65,	// (0x00058eb9) grid_cmail_l_pane_ParamLimits

0x9b65,	// (0x00058eb9) grid_cmail_l_pane

0x9b7a,	// (0x00058ece) cell_cmail_l_pane_ParamLimits

0x9b7a,	// (0x00058ece) cell_cmail_l_pane

0x9b9c,	// (0x00058ef0) cell_cmail_l_pane_g1_ParamLimits

0x9b9c,	// (0x00058ef0) cell_cmail_l_pane_g1

0x9bac,	// (0x00058f00) cell_cmail_l_pane_t1_ParamLimits

0x9bac,	// (0x00058f00) cell_cmail_l_pane_t1

0xe3b8,	// (0x0005d70c) cell_cmail_l_pane_t2_ParamLimits

0xe3b8,	// (0x0005d70c) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x0005f052) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x0005f052) cell_cmail_l_pane_t

0x2045,	// (0x00051399) grid_highlight_pane_cp018_ParamLimits

0x2045,	// (0x00051399) grid_highlight_pane_cp018

0x345d,	// (0x000527b1) main2_pane_ParamLimits

0x345d,	// (0x000527b1) main2_pane

0x170a,	// (0x00050a5e) popup_sp_fs_action_menu_bg_pane_g1

0x1712,	// (0x00050a66) popup_sp_fs_action_menu_bg_pane_g2

0x171a,	// (0x00050a6e) popup_sp_fs_action_menu_bg_pane_g3

0x1722,	// (0x00050a76) popup_sp_fs_action_menu_bg_pane_g4

0x172a,	// (0x00050a7e) popup_sp_fs_action_menu_bg_pane_g5

0x1732,	// (0x00050a86) popup_sp_fs_action_menu_bg_pane_g6

0x173a,	// (0x00050a8e) popup_sp_fs_action_menu_bg_pane_g7

0x1742,	// (0x00050a96) popup_sp_fs_action_menu_bg_pane_g8

0x174a,	// (0x00050a9e) popup_sp_fs_action_menu_bg_pane_g9

0x1752,	// (0x00050aa6) popup_sp_fs_action_menu_bg_pane_g10

0x1752,	// (0x00050aa6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0005e50f) popup_sp_fs_action_menu_bg_pane_g

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g3_g1

0xabca,	// (0x00059f1e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_t3_g3_g2

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0005e5bf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0005e5bf) list_medium_line_x2_t3_g3_g

0xabe2,	// (0x00059f36) list_medium_line_x2_t3_g3_t1_ParamLimits

0xabe2,	// (0x00059f36) list_medium_line_x2_t3_g3_t1

0x4196,	// (0x000534ea) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4196,	// (0x000534ea) list_medium_line_x2_t3_g3_t2

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0005e5c6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0005e5c6) list_medium_line_x2_t3_g3_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g2_g1

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0005e5cd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0005e5cd) list_medium_line_x2_t3_g2_g

0xac0c,	// (0x00059f60) list_medium_line_x2_t3_g2_t1_ParamLimits

0xac0c,	// (0x00059f60) list_medium_line_x2_t3_g2_t1

0xac22,	// (0x00059f76) list_medium_line_x2_t3_g2_t2_ParamLimits

0xac22,	// (0x00059f76) list_medium_line_x2_t3_g2_t2

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0005e5d2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0005e5d2) list_medium_line_x2_t3_g2_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t4_g4_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t4_g4_g1

0xac34,	// (0x00059f88) list_medium_line_x2_t4_g4_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_x2_t4_g4_g2

0xabca,	// (0x00059f1e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_t4_g4_g3

0xac40,	// (0x00059f94) list_medium_line_x2_t4_g4_g4_ParamLimits

0xac40,	// (0x00059f94) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0005e5d9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0005e5d9) list_medium_line_x2_t4_g4_g

0x41a8,	// (0x000534fc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x41a8,	// (0x000534fc) list_medium_line_x2_t4_g4_t1

0x41bf,	// (0x00053513) list_medium_line_x2_t4_g4_t2_ParamLimits

0x41bf,	// (0x00053513) list_medium_line_x2_t4_g4_t2

0x41d4,	// (0x00053528) list_medium_line_x2_t4_g4_t3_ParamLimits

0x41d4,	// (0x00053528) list_medium_line_x2_t4_g4_t3

0xac4c,	// (0x00059fa0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac4c,	// (0x00059fa0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0005e5e2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0005e5e2) list_medium_line_x2_t4_g4_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g4_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g4_g1

0xac34,	// (0x00059f88) list_medium_line_x2_t2_g4_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_x2_t2_g4_g2

0xabca,	// (0x00059f1e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_t2_g4_g3

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0005e649) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0005e649) list_medium_line_x2_t2_g4_g

0xac5e,	// (0x00059fb2) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac5e,	// (0x00059fb2) list_medium_line_x2_t2_g4_t1

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0005e652) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0005e652) list_medium_line_x2_t2_g4_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g3_g1

0xabca,	// (0x00059f1e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_t2_g3_g2

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0005e5bf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0005e5bf) list_medium_line_x2_t2_g3_g

0xac73,	// (0x00059fc7) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac73,	// (0x00059fc7) list_medium_line_x2_t2_g3_t1

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0005e657) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0005e657) list_medium_line_x2_t2_g3_t

0x4dd3,	// (0x00054127) main_sp_fs_list_pane_ParamLimits

0x4dd3,	// (0x00054127) main_sp_fs_list_pane

0x4de0,	// (0x00054134) sp_fs_scroll_pane_ParamLimits

0x4de0,	// (0x00054134) sp_fs_scroll_pane

0x4ded,	// (0x00054141) list_medium_line_x2_t3_t1

0x4dfd,	// (0x00054151) list_medium_line_x2_t3_t2

0xacb6,	// (0x0005a00a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0005e6a2) list_medium_line_x2_t3_t

0x4e0b,	// (0x0005415f) list_medium_line_x3_t4_t1

0x4e1b,	// (0x0005416f) list_medium_line_x3_t4_t2

0xacc4,	// (0x0005a018) list_medium_line_x3_t4_t3

0xacd2,	// (0x0005a026) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0005e6a9) list_medium_line_x3_t4_t

0x4e29,	// (0x0005417d) list_medium_line_x4_t5_t1

0x4e39,	// (0x0005418d) list_medium_line_x4_t5_t2

0xacc4,	// (0x0005a018) list_medium_line_x4_t5_t3

0xace0,	// (0x0005a034) list_medium_line_x4_t5_t4

0xacd2,	// (0x0005a026) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0005e6b2) list_medium_line_x4_t5_t

0xabbe,	// (0x00059f12) list_medium_line_t4_g4_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t4_g4_g1

0xac40,	// (0x00059f94) list_medium_line_t4_g4_g2_ParamLimits

0xac40,	// (0x00059f94) list_medium_line_t4_g4_g2

0xacee,	// (0x0005a042) list_medium_line_t4_g4_g3_ParamLimits

0xacee,	// (0x0005a042) list_medium_line_t4_g4_g3

0xabd6,	// (0x00059f2a) list_medium_line_t4_g4_g4_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0005e6bd) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0005e6bd) list_medium_line_t4_g4_g

0xacfa,	// (0x0005a04e) list_medium_line_t4_g4_t1_ParamLimits

0xacfa,	// (0x0005a04e) list_medium_line_t4_g4_t1

0xad0f,	// (0x0005a063) list_medium_line_t4_g4_t2_ParamLimits

0xad0f,	// (0x0005a063) list_medium_line_t4_g4_t2

0xad25,	// (0x0005a079) list_medium_line_t4_g4_t3_ParamLimits

0xad25,	// (0x0005a079) list_medium_line_t4_g4_t3

0xad3b,	// (0x0005a08f) list_medium_line_t4_g4_t4_ParamLimits

0xad3b,	// (0x0005a08f) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0005e6c6) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0005e6c6) list_medium_line_t4_g4_t

0x4f08,	// (0x0005425c) chi_dic_find_pane_g1

0x5df2,	// (0x00055146) main_tport_pane

0xd439,	// (0x0005c78d) list_medium_line_plain_t1

0xabbe,	// (0x00059f12) list_medium_line_t2_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t2_g2_g1

0xabca,	// (0x00059f1e) list_medium_line_t2_g2_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x0005ed95) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x0005ed95) list_medium_line_t2_g2_g

0x89b7,	// (0x00057d0b) list_medium_line_t2_g2_t1_ParamLimits

0x89b7,	// (0x00057d0b) list_medium_line_t2_g2_t1

0x89ce,	// (0x00057d22) list_medium_line_t2_g2_t2_ParamLimits

0x89ce,	// (0x00057d22) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x0005ed9a) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x0005ed9a) list_medium_line_t2_g2_t

0xd760,	// (0x0005cab4) aid_sp_fs_list_icon_a_sm

0xd768,	// (0x0005cabc) aid_sp_fs_list_icon_d

0xd770,	// (0x0005cac4) aid_sp_fs_text_primary

0xd779,	// (0x0005cacd) aid_sp_fs_text_secondary

0xd782,	// (0x0005cad6) list_medium_line

0xd782,	// (0x0005cad6) list_medium_line_g2

0xd782,	// (0x0005cad6) list_medium_line_g3

0xd782,	// (0x0005cad6) list_medium_line_plain

0xd782,	// (0x0005cad6) list_medium_line_plain_t2

0xd782,	// (0x0005cad6) list_medium_line_plain_t3

0xd782,	// (0x0005cad6) list_medium_line_right_icon

0xd782,	// (0x0005cad6) list_medium_line_right_iconx2

0xd782,	// (0x0005cad6) list_medium_line_t2

0xd782,	// (0x0005cad6) list_medium_line_t2_g2

0xd782,	// (0x0005cad6) list_medium_line_t2_g3

0xd782,	// (0x0005cad6) list_medium_line_t2_right_icon

0xd782,	// (0x0005cad6) list_medium_line_t2_right_iconx2

0xd782,	// (0x0005cad6) list_medium_line_t3

0xd782,	// (0x0005cad6) list_medium_line_t3_g2

0xd782,	// (0x0005cad6) list_medium_line_t3_g3

0xd782,	// (0x0005cad6) list_medium_line_t3_right_iconx2

0xd78b,	// (0x0005cadf) list_medium_line_t4_g4

0xd794,	// (0x0005cae8) list_medium_line_x2

0xd794,	// (0x0005cae8) list_medium_line_x2_t2_g2

0xd794,	// (0x0005cae8) list_medium_line_x2_t2_g3

0xd794,	// (0x0005cae8) list_medium_line_x2_t2_g4

0xd794,	// (0x0005cae8) list_medium_line_x2_t3

0xd794,	// (0x0005cae8) list_medium_line_x2_t3_g2

0xd794,	// (0x0005cae8) list_medium_line_x2_t3_g3

0xd794,	// (0x0005cae8) list_medium_line_x2_t3_g4

0xd794,	// (0x0005cae8) list_medium_line_x2_t4_g2

0xd794,	// (0x0005cae8) list_medium_line_x2_t4_g4

0xd79d,	// (0x0005caf1) list_medium_line_x3

0xd79d,	// (0x0005caf1) list_medium_line_x3_t4

0xd79d,	// (0x0005caf1) list_medium_line_x3_t4_g4

0xd78b,	// (0x0005cadf) list_medium_line_x4_t4

0xd78b,	// (0x0005cadf) list_medium_line_x4_t4_g7

0xd78b,	// (0x0005cadf) list_medium_line_x4_t5

0xd7a6,	// (0x0005cafa) list_single_fs_dyc_pane_ParamLimits

0xd7a6,	// (0x0005cafa) list_single_fs_dyc_pane

0xabbe,	// (0x00059f12) list_medium_line_x4_t4_g7_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x4_t4_g7_g1

0xdc9f,	// (0x0005cff3) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc9f,	// (0x0005cff3) list_medium_line_x4_t4_g7_g2

0xdcab,	// (0x0005cfff) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdcab,	// (0x0005cfff) list_medium_line_x4_t4_g7_g3

0xdcba,	// (0x0005d00e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdcba,	// (0x0005d00e) list_medium_line_x4_t4_g7_g4

0xdcc6,	// (0x0005d01a) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdcc6,	// (0x0005d01a) list_medium_line_x4_t4_g7_g5

0xdcd5,	// (0x0005d029) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdcd5,	// (0x0005d029) list_medium_line_x4_t4_g7_g6

0xdce4,	// (0x0005d038) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdce4,	// (0x0005d038) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x0005ef5f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x0005ef5f) list_medium_line_x4_t4_g7_g

0xdcf0,	// (0x0005d044) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdcf0,	// (0x0005d044) list_medium_line_x4_t4_g7_t1

0xdd05,	// (0x0005d059) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdd05,	// (0x0005d059) list_medium_line_x4_t4_g7_t2

0xdd1a,	// (0x0005d06e) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd1a,	// (0x0005d06e) list_medium_line_x4_t4_g7_t3

0xdd2f,	// (0x0005d083) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd2f,	// (0x0005d083) list_medium_line_x4_t4_g7_t4

0xdd41,	// (0x0005d095) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd41,	// (0x0005d095) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x0005ef6e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x0005ef6e) list_medium_line_x4_t4_g7_t

0xdd53,	// (0x0005d0a7) list_single_dyc_row_pane_ParamLimits

0xdd53,	// (0x0005d0a7) list_single_dyc_row_pane

0x9ae1,	// (0x00058e35) call5_gesture_pane_ParamLimits

0x9ae1,	// (0x00058e35) call5_gesture_pane

0x9b29,	// (0x00058e7d) call5_windows_pane_ParamLimits

0x9b29,	// (0x00058e7d) call5_windows_pane

0x9bc2,	// (0x00058f16) call5_swipe_1_pane_cp_ParamLimits

0x9bc2,	// (0x00058f16) call5_swipe_1_pane_cp

0x9bce,	// (0x00058f22) call5_swipe_2_pane_cp_ParamLimits

0x9bce,	// (0x00058f22) call5_swipe_2_pane_cp

0xaf3d,	// (0x0005a291) call5_image_pane_cp

0x9bda,	// (0x00058f2e) popup_call5_audio_first_window_cp_ParamLimits

0x9bda,	// (0x00058f2e) popup_call5_audio_first_window_cp

0xe38a,	// (0x0005d6de) call5_swipe_1_pane_g1_cp_ParamLimits

0xe38a,	// (0x0005d6de) call5_swipe_1_pane_g1_cp

0xe3ca,	// (0x0005d71e) call5_swipe_1_pane_g2_cp

0xe3a3,	// (0x0005d6f7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3a3,	// (0x0005d6f7) call5_swipe_1_pane_t1_cp

0xe38a,	// (0x0005d6de) call5_swipe_2_pane_g1_cp_ParamLimits

0xe38a,	// (0x0005d6de) call5_swipe_2_pane_g1_cp

0xe3d2,	// (0x0005d726) call5_swipe_2_pane_g2_cp

0xe3da,	// (0x0005d72e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3da,	// (0x0005d72e) call5_swipe_2_pane_t1_cp

0x2045,	// (0x00051399) main_sp_fs_email_pane

0xe3ef,	// (0x0005d743) main_sp_fs_listscroll_pane_te

0x9be6,	// (0x00058f3a) popup_sp_fs_action_menu_pane_ParamLimits

0x9be6,	// (0x00058f3a) popup_sp_fs_action_menu_pane

0xc801,	// (0x0005bb55) bg_sp_fs_ctrlbar_pane_g1

0xe3f8,	// (0x0005d74c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe401,	// (0x0005d755) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe40a,	// (0x0005d75e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc801,	// (0x0005bb55) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0005f057) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ee,	// (0x0005b942) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ee,	// (0x0005b942) bg_sp_fs_ctrlbar_ddmenu_pane

0xe413,	// (0x0005d767) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe413,	// (0x0005d767) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2088,	// (0x000513dc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2088,	// (0x000513dc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x0005f060) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x0005f060) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe41f,	// (0x0005d773) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe41f,	// (0x0005d773) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe439,	// (0x0005d78d) list_medium_line_t2_right_icon_g1

0xe441,	// (0x0005d795) list_medium_line_t2_right_icon_t1

0x9c16,	// (0x00058f6a) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x0005f065) list_medium_line_t2_right_icon_t

0xc3be,	// (0x0005b712) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3be,	// (0x0005b712) bg_sp_fs_ctrlbar_pane

0x9c6d,	// (0x00058fc1) main_sp_fs_ctrlbar_button_pane_cp01

0x9c75,	// (0x00058fc9) main_sp_fs_ctrlbar_ddmenu_pane

0xe489,	// (0x0005d7dd) main_sp_fs_ctrlbar_pane_g1

0xe495,	// (0x0005d7e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0005f06a) main_sp_fs_ctrlbar_pane_g

0xe4a1,	// (0x0005d7f5) main_sp_fs_ctrlbar_pane_t1

0x9c7f,	// (0x00058fd3) main_sp_fs_ctrlbar_pane

0x9ca0,	// (0x00058ff4) main_sp_fs_listscroll_pane_te_cp01

0x9cc0,	// (0x00059014) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9cc0,	// (0x00059014) popup_sp_fs_action_menu_pane_cp01

0x2045,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2045,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp01

0x9cdf,	// (0x00059033) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9cdf,	// (0x00059033) sp_fs_action_menu_list_gene_pane_g1

0xe4b6,	// (0x0005d80a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4b6,	// (0x0005d80a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x0005f06f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x0005f06f) sp_fs_action_menu_list_gene_pane_g

0xe4c3,	// (0x0005d817) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4c3,	// (0x0005d817) sp_fs_action_menu_list_gene_pane_t1

0x9cee,	// (0x00059042) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9cee,	// (0x00059042) sp_fs_action_menu_list_gene_pane

0xe4db,	// (0x0005d82f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4db,	// (0x0005d82f) popup_sp_fs_action_menu_bg_pane

0x9d0b,	// (0x0005905f) sp_fs_action_menu_list_pane_ParamLimits

0x9d0b,	// (0x0005905f) sp_fs_action_menu_list_pane

0xe4e9,	// (0x0005d83d) sp_fs_scroll_pane_cp01_ParamLimits

0xe4e9,	// (0x0005d83d) sp_fs_scroll_pane_cp01

0x9d27,	// (0x0005907b) list_medium_line_plain_t2_t1

0x9d37,	// (0x0005908b) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x0005f074) list_medium_line_plain_t2_t

0x9d45,	// (0x00059099) list_medium_line_plain_t3_t1

0x9d55,	// (0x000590a9) list_medium_line_plain_t3_t2

0x9d63,	// (0x000590b7) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0005f079) list_medium_line_plain_t3_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t2_g2_g1

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0005e5cd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0005e5cd) list_medium_line_x2_t2_g2_g

0xacfa,	// (0x0005a04e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xacfa,	// (0x0005a04e) list_medium_line_x2_t2_g2_t1

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x0005f080) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x0005f080) list_medium_line_x2_t2_g2_t

0xabbe,	// (0x00059f12) list_medium_line_x2_t4_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t4_g2_g1

0xe50f,	// (0x0005d863) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe50f,	// (0x0005d863) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x0005f085) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x0005f085) list_medium_line_x2_t4_g2_g

0x9d71,	// (0x000590c5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d71,	// (0x000590c5) list_medium_line_x2_t4_g2_t1

0x9d8b,	// (0x000590df) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d8b,	// (0x000590df) list_medium_line_x2_t4_g2_t2

0x9da0,	// (0x000590f4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9da0,	// (0x000590f4) list_medium_line_x2_t4_g2_t3

0xabf7,	// (0x00059f4b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x0005f08a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x0005f08a) list_medium_line_x2_t4_g2_t

0xe520,	// (0x0005d874) list_medium_line_t3_right_iconx2_g1

0xe439,	// (0x0005d78d) list_medium_line_t3_right_iconx2_g2

0x9db5,	// (0x00059109) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x0005f093) list_medium_line_t3_right_iconx2_g

0x9dbd,	// (0x00059111) list_medium_line_t3_right_iconx2_t1

0x9dcd,	// (0x00059121) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x0005f09a) list_medium_line_t3_right_iconx2_t

0xabbe,	// (0x00059f12) list_medium_line_x3_t4_g4_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x3_t4_g4_g1

0xabca,	// (0x00059f1e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x3_t4_g4_g2

0xac40,	// (0x00059f94) list_medium_line_x3_t4_g4_g3_ParamLimits

0xac40,	// (0x00059f94) list_medium_line_x3_t4_g4_g3

0xe528,	// (0x0005d87c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe528,	// (0x0005d87c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x0005f09f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x0005f09f) list_medium_line_x3_t4_g4_g

0x89b7,	// (0x00057d0b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89b7,	// (0x00057d0b) list_medium_line_x3_t4_g4_t1

0x89ce,	// (0x00057d22) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89ce,	// (0x00057d22) list_medium_line_x3_t4_g4_t2

0xe534,	// (0x0005d888) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe534,	// (0x0005d888) list_medium_line_x3_t4_g4_t3

0xe549,	// (0x0005d89d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe549,	// (0x0005d89d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x0005f0a8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x0005f0a8) list_medium_line_x3_t4_g4_t

0x9ddb,	// (0x0005912f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9ddb,	// (0x0005912f) list_single_dyc_row_text_pane_t1

0x9e12,	// (0x00059166) list_single_dyc_row_text_pane_t2_ParamLimits

0x9e12,	// (0x00059166) list_single_dyc_row_text_pane_t2

0xe566,	// (0x0005d8ba) list_single_dyc_row_text_pane_t3_ParamLimits

0xe566,	// (0x0005d8ba) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x0005f0b1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x0005f0b1) list_single_dyc_row_text_pane_t

0xe578,	// (0x0005d8cc) list_single_dyc_row_pane_g1_ParamLimits

0xe578,	// (0x0005d8cc) list_single_dyc_row_pane_g1

0xe584,	// (0x0005d8d8) list_single_dyc_row_pane_g2_ParamLimits

0xe584,	// (0x0005d8d8) list_single_dyc_row_pane_g2

0xe590,	// (0x0005d8e4) list_single_dyc_row_pane_g3_ParamLimits

0xe590,	// (0x0005d8e4) list_single_dyc_row_pane_g3

0xe59c,	// (0x0005d8f0) list_single_dyc_row_pane_g4_ParamLimits

0xe59c,	// (0x0005d8f0) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x0005f0b8) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x0005f0b8) list_single_dyc_row_pane_g

0xe5a8,	// (0x0005d8fc) list_single_dyc_row_text_pane_ParamLimits

0xe5a8,	// (0x0005d8fc) list_single_dyc_row_text_pane

0x0ed9,	// (0x0005022d) bg_sp_fs_scroll_pane

0xe5c7,	// (0x0005d91b) thumb_sp_fs_scroll_pane

0xabbe,	// (0x00059f12) list_medium_line_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_g1

0xacfa,	// (0x0005a04e) list_medium_line_t1_ParamLimits

0xacfa,	// (0x0005a04e) list_medium_line_t1

0xabbe,	// (0x00059f12) list_medium_line_x2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_g1

0xabca,	// (0x00059f1e) list_medium_line_x2_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0005ed95) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0005ed95) list_medium_line_x2_g

0xe5d0,	// (0x0005d924) list_medium_line_x2_t1_ParamLimits

0xe5d0,	// (0x0005d924) list_medium_line_x2_t1

0xabbe,	// (0x00059f12) list_medium_line_x3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x3_g1

0xabca,	// (0x00059f1e) list_medium_line_x3_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0005ed95) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0005ed95) list_medium_line_x3_g

0xe5d0,	// (0x0005d924) list_medium_line_x3_t1_ParamLimits

0xe5d0,	// (0x0005d924) list_medium_line_x3_t1

0xe5e6,	// (0x0005d93a) thumb_sp_fs_scroll_pane_g1

0xe5ef,	// (0x0005d943) thumb_sp_fs_scroll_pane_g2

0xe5f8,	// (0x0005d94c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0005f0c1) thumb_sp_fs_scroll_pane_g

0xe5e6,	// (0x0005d93a) bg_sp_fs_scroll_pane_g1

0xe5ef,	// (0x0005d943) bg_sp_fs_scroll_pane_g2

0xe5f8,	// (0x0005d94c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0005f0c1) bg_sp_fs_scroll_pane_g

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g4_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_x2_t3_g4_g1

0xac34,	// (0x00059f88) list_medium_line_x2_t3_g4_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_x2_t3_g4_g2

0xabca,	// (0x00059f1e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_x2_t3_g4_g3

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xabd6,	// (0x00059f2a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0005e649) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0005e649) list_medium_line_x2_t3_g4_g

0x9e6c,	// (0x000591c0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9e6c,	// (0x000591c0) list_medium_line_x2_t3_g4_t1

0x9e82,	// (0x000591d6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9e82,	// (0x000591d6) list_medium_line_x2_t3_g4_t2

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xabf7,	// (0x00059f4b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x0005f0c8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x0005f0c8) list_medium_line_x2_t3_g4_t

0xabbe,	// (0x00059f12) list_medium_line_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_g2_g1

0xabca,	// (0x00059f1e) list_medium_line_g2_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x0005ed95) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x0005ed95) list_medium_line_g2_g

0xac73,	// (0x00059fc7) list_medium_line_g2_t1_ParamLimits

0xac73,	// (0x00059fc7) list_medium_line_g2_t1

0xabbe,	// (0x00059f12) list_medium_line_t3_g2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t3_g2_g1

0xabca,	// (0x00059f1e) list_medium_line_t3_g2_g2_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x0005ed95) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x0005ed95) list_medium_line_t3_g2_g

0x9e9b,	// (0x000591ef) list_medium_line_t3_g2_t1_ParamLimits

0x9e9b,	// (0x000591ef) list_medium_line_t3_g2_t1

0x9eb2,	// (0x00059206) list_medium_line_t3_g2_t2_ParamLimits

0x9eb2,	// (0x00059206) list_medium_line_t3_g2_t2

0x9ec7,	// (0x0005921b) list_medium_line_t3_g2_t3_ParamLimits

0x9ec7,	// (0x0005921b) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x0005f0cf) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x0005f0cf) list_medium_line_t3_g2_t

0xe439,	// (0x0005d78d) list_medium_line_right_icon_g1

0xe601,	// (0x0005d955) list_medium_line_right_icon_t1

0xabbe,	// (0x00059f12) list_medium_line_t2_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t2_g1

0x9edc,	// (0x00059230) list_medium_line_t2_t1_ParamLimits

0x9edc,	// (0x00059230) list_medium_line_t2_t1

0x9ef3,	// (0x00059247) list_medium_line_t2_t2_ParamLimits

0x9ef3,	// (0x00059247) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x0005f0d6) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x0005f0d6) list_medium_line_t2_t

0xabbe,	// (0x00059f12) list_medium_line_t3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t3_g1

0x9d71,	// (0x000590c5) list_medium_line_t3_t1_ParamLimits

0x9d71,	// (0x000590c5) list_medium_line_t3_t1

0x9d8b,	// (0x000590df) list_medium_line_t3_t2_ParamLimits

0x9d8b,	// (0x000590df) list_medium_line_t3_t2

0x9da0,	// (0x000590f4) list_medium_line_t3_t3_ParamLimits

0x9da0,	// (0x000590f4) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x0005f0db) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x0005f0db) list_medium_line_t3_t

0xabbe,	// (0x00059f12) list_medium_line_g3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_g3_g1

0xac34,	// (0x00059f88) list_medium_line_g3_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_g3_g2

0xabca,	// (0x00059f1e) list_medium_line_g3_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x0005f0e2) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x0005f0e2) list_medium_line_g3_g

0xac5e,	// (0x00059fb2) list_medium_line_g3_t1_ParamLimits

0xac5e,	// (0x00059fb2) list_medium_line_g3_t1

0xabbe,	// (0x00059f12) list_medium_line_t2_g3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t2_g3_g1

0xac34,	// (0x00059f88) list_medium_line_t2_g3_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_t2_g3_g2

0xabca,	// (0x00059f1e) list_medium_line_t2_g3_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x0005f0e2) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x0005f0e2) list_medium_line_t2_g3_g

0x9f05,	// (0x00059259) list_medium_line_t2_g3_t1_ParamLimits

0x9f05,	// (0x00059259) list_medium_line_t2_g3_t1

0x9f1f,	// (0x00059273) list_medium_line_t2_g3_t2_ParamLimits

0x9f1f,	// (0x00059273) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x0005f0e9) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x0005f0e9) list_medium_line_t2_g3_t

0xabbe,	// (0x00059f12) list_medium_line_t3_g3_g1_ParamLimits

0xabbe,	// (0x00059f12) list_medium_line_t3_g3_g1

0xac34,	// (0x00059f88) list_medium_line_t3_g3_g2_ParamLimits

0xac34,	// (0x00059f88) list_medium_line_t3_g3_g2

0xabca,	// (0x00059f1e) list_medium_line_t3_g3_g3_ParamLimits

0xabca,	// (0x00059f1e) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x0005f0e2) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x0005f0e2) list_medium_line_t3_g3_g

0x9f34,	// (0x00059288) list_medium_line_t3_g3_t1_ParamLimits

0x9f34,	// (0x00059288) list_medium_line_t3_g3_t1

0x9f48,	// (0x0005929c) list_medium_line_t3_g3_t2_ParamLimits

0x9f48,	// (0x0005929c) list_medium_line_t3_g3_t2

0x9f5a,	// (0x000592ae) list_medium_line_t3_g3_t3_ParamLimits

0x9f5a,	// (0x000592ae) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x0005f0ee) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x0005f0ee) list_medium_line_t3_g3_t

0xe520,	// (0x0005d874) list_medium_line_right_iconx2_g1

0xe439,	// (0x0005d78d) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x0005f0f5) list_medium_line_right_iconx2_g

0xe60f,	// (0x0005d963) list_medium_line_right_iconx2_t1

0xe520,	// (0x0005d874) list_medium_line_t2_right_iconx2_g1

0xe439,	// (0x0005d78d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x0005f0f5) list_medium_line_t2_right_iconx2_g

0x9f6c,	// (0x000592c0) list_medium_line_t2_right_iconx2_t1

0x9f7c,	// (0x000592d0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x0005f0fa) list_medium_line_t2_right_iconx2_t

0xd439,	// (0x0005c78d) list_medium_line_x4_t4_t1

0x9f8a,	// (0x000592de) list_medium_line_x4_t4_t2

0x9f9a,	// (0x000592ee) list_medium_line_x4_t4_t3

0x9faa,	// (0x000592fe) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x0005f0ff) list_medium_line_x4_t4_t

0x9ff5,	// (0x00059349) tport_appsw_pane_ParamLimits

0x9ff5,	// (0x00059349) tport_appsw_pane

0xa006,	// (0x0005935a) tport_contact_pane_ParamLimits

0xa006,	// (0x0005935a) tport_contact_pane

0xa01b,	// (0x0005936f) tport_listscroll_pane_ParamLimits

0xa01b,	// (0x0005936f) tport_listscroll_pane

0xa034,	// (0x00059388) cell_tport_appsw_pane_ParamLimits

0xa034,	// (0x00059388) cell_tport_appsw_pane

0xd1b7,	// (0x0005c50b) tport_appsw_pane_g1_ParamLimits

0xd1b7,	// (0x0005c50b) tport_appsw_pane_g1

0xe61d,	// (0x0005d971) tport_contact_pane_g1

0xe626,	// (0x0005d97a) tport_contact_pane_t1

0xe634,	// (0x0005d988) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x0005f108) tport_contact_pane_t

0xe642,	// (0x0005d996) list_tport_pane

0x1764,	// (0x00050ab8) scroll_pane_cp_030

0xe653,	// (0x0005d9a7) cell_tport_appsw_pane_g1

0xe663,	// (0x0005d9b7) cell_tport_appsw_pane_t1

0x0ed9,	// (0x0005022d) grid_highlight_pane_cp019

0xa06a,	// (0x000593be) list_tport_double_graphic_pane_ParamLimits

0xa06a,	// (0x000593be) list_tport_double_graphic_pane

0x2045,	// (0x00051399) list_highlight_pane_cp023_ParamLimits

0x2045,	// (0x00051399) list_highlight_pane_cp023

0xa077,	// (0x000593cb) list_tport_double_graphic_pane_g1_ParamLimits

0xa077,	// (0x000593cb) list_tport_double_graphic_pane_g1

0xa084,	// (0x000593d8) list_tport_double_graphic_pane_t1_ParamLimits

0xa084,	// (0x000593d8) list_tport_double_graphic_pane_t1

0xa099,	// (0x000593ed) list_tport_double_graphic_pane_t2_ParamLimits

0xa099,	// (0x000593ed) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0005f114) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0005f114) list_tport_double_graphic_pane_t

0x0ed9,	// (0x0005022d) main_cale_note_pane

0x81da,	// (0x0005752e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x81da,	// (0x0005752e) cell_vitu2_function_top_wide_pane_cp01

0x984d,	// (0x00058ba1) wait_bar_pane_cp05_ParamLimits

0x0ed9,	// (0x0005022d) listscroll_cmail_pane

0xe671,	// (0x0005d9c5) list_cmail_pane

0xa0ab,	// (0x000593ff) list_cmail_body_pane

0xa0ab,	// (0x000593ff) list_single_cmail_header_caption_pane

0xa0c1,	// (0x00059415) list_single_cmail_header_detail_pane_ParamLimits

0xa0c1,	// (0x00059415) list_single_cmail_header_detail_pane

0xe68d,	// (0x0005d9e1) list_single_cmail_header_caption_pane_t1

0xa0e9,	// (0x0005943d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa0e9,	// (0x0005943d) list_single_cmail_header_detail_pane_g1

0xabca,	// (0x00059f1e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xabca,	// (0x00059f1e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x0005f119) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x0005f119) list_single_cmail_header_detail_pane_g

0xe6b0,	// (0x0005da04) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6b0,	// (0x0005da04) list_single_cmail_header_detail_pane_t1

0xe6d8,	// (0x0005da2c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6d8,	// (0x0005da2c) list_single_cmail_header_editor_pane_bg

0xe6ea,	// (0x0005da3e) list_cmail_body_pane_g1

0xe6f3,	// (0x0005da47) list_cmail_body_pane_t1

0xd210,	// (0x0005c564) list_single_cmail_header_editor_pane_bg_g1

0x1a83,	// (0x00050dd7) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd220,	// (0x0005c574) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd218,	// (0x0005c56c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd447,	// (0x0005c79b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd240,	// (0x0005c594) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd230,	// (0x0005c584) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd238,	// (0x0005c58c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1a63,	// (0x00050db7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa123,	// (0x00059477) calenote_gesture_pane_ParamLimits

0xa123,	// (0x00059477) calenote_gesture_pane

0xa13f,	// (0x00059493) calenote_window_pane_ParamLimits

0xa13f,	// (0x00059493) calenote_window_pane

0x0040,	// (0x0004f394) popup_note_window_cp01

0xa15b,	// (0x000594af) calenote_swipe_1_pane_ParamLimits

0xa15b,	// (0x000594af) calenote_swipe_1_pane

0x9bce,	// (0x00058f22) calenote_swipe_2_pane_ParamLimits

0x9bce,	// (0x00058f22) calenote_swipe_2_pane

0xe38a,	// (0x0005d6de) calenote_swipe_1_pane_g1_ParamLimits

0xe38a,	// (0x0005d6de) calenote_swipe_1_pane_g1

0xe397,	// (0x0005d6eb) calenote_swipe_1_pane_g2_ParamLimits

0xe397,	// (0x0005d6eb) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x0005f04d) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x0005f04d) calenote_swipe_1_pane_g

0x0065,	// (0x0004f3b9) calenote_swipe_1_pane_t1_ParamLimits

0x0065,	// (0x0004f3b9) calenote_swipe_1_pane_t1

0xe38a,	// (0x0005d6de) calenote_swipe_2_pane_g1_ParamLimits

0xe38a,	// (0x0005d6de) calenote_swipe_2_pane_g1

0x0084,	// (0x0004f3d8) calenote_swipe_2_pane_g2_ParamLimits

0x0084,	// (0x0004f3d8) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0005f125) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0005f125) calenote_swipe_2_pane_g

0x0090,	// (0x0004f3e4) calenote_swipe_2_pane_t1_ParamLimits

0x0090,	// (0x0004f3e4) calenote_swipe_2_pane_t1

0x0ed9,	// (0x0005022d) main_mup_navstr_pane

0x6fbe,	// (0x00056312) main_mup3_pane_t7_ParamLimits

0x6fbe,	// (0x00056312) main_mup3_pane_t7

0xed83,	// (0x0005e0d7) main_mp4_pane_g6_ParamLimits

0xed83,	// (0x0005e0d7) main_mp4_pane_g6

0xef1d,	// (0x0005e271) main_image3_pane_t4_ParamLimits

0xef1d,	// (0x0005e271) main_image3_pane_t4

0xa170,	// (0x000594c4) popup_navstr_preview_pane_ParamLimits

0xa170,	// (0x000594c4) popup_navstr_preview_pane

0xa180,	// (0x000594d4) scroll_navstr_pane_ParamLimits

0xa180,	// (0x000594d4) scroll_navstr_pane

0x0ed9,	// (0x0005022d) bg_popup_preview_window_pane_cp04

0x00cf,	// (0x0004f423) popup_navstr_preview_pane_t1

0xa194,	// (0x000594e8) scroll_navstr_pane_g1_ParamLimits

0xa194,	// (0x000594e8) scroll_navstr_pane_g1

0xa1a8,	// (0x000594fc) scroll_navstr_pane_t1_ParamLimits

0xa1a8,	// (0x000594fc) scroll_navstr_pane_t1

0x005c,	// (0x0004f3b0) bg_button_pane_cp014

0x005c,	// (0x0004f3b0) bg_button_pane_cp030

0xe2ee,	// (0x0005d642) list_double_fisheye_pane_g4_ParamLimits

0xe2ee,	// (0x0005d642) list_double_fisheye_pane_g4

0xe2fa,	// (0x0005d64e) list_double_fisheye_pane_g5_ParamLimits

0xe2fa,	// (0x0005d64e) list_double_fisheye_pane_g5

0xe681,	// (0x0005d9d5) sp_fs_scroll_pane_cp03

0xe489,	// (0x0005d7dd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe495,	// (0x0005d7e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0005f06a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4a1,	// (0x0005d7f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe679,	// (0x0005d9cd) sp_fs_scroll_pane_cp02

0x1776,	// (0x00050aca) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1776,	// (0x00050aca) popup_sp_fs_calendar_preview_list_single_pane

0x0ed9,	// (0x0005022d) main_cam6_pano_pane

0x2045,	// (0x00051399) main_mup3_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_phacti_pane

0x9740,	// (0x00058a94) bg_button_pane_cp11

0x9758,	// (0x00058aac) main_mobtv_info_pane_g2_ParamLimits

0x9758,	// (0x00058aac) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x0005efca) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x0005efca) main_mobtv_info_pane_g

0x990b,	// (0x00058c5f) sc_clock_pane_t5_ParamLimits

0x990b,	// (0x00058c5f) sc_clock_pane_t5

0x997e,	// (0x00058cd2) main_radioblah_pane_g1_ParamLimits

0xe253,	// (0x0005d5a7) main_radioblah_pane_t3_ParamLimits

0xe253,	// (0x0005d5a7) main_radioblah_pane_t3

0xe26b,	// (0x0005d5bf) main_radioblah_pane_t4_ParamLimits

0xe26b,	// (0x0005d5bf) main_radioblah_pane_t4

0x99a6,	// (0x00058cfa) main_radioblah_text_pane_ParamLimits

0x99a6,	// (0x00058cfa) main_radioblah_text_pane

0x99b8,	// (0x00058d0c) main_radioblah_info_pane_g1_ParamLimits

0x9a4b,	// (0x00058d9f) main_radioblah_info_pane_t4_ParamLimits

0x9a4b,	// (0x00058d9f) main_radioblah_info_pane_t4

0x2045,	// (0x00051399) main_sp_fs_calendar_pane

0xa1be,	// (0x00059512) main_phacti_pane_g1

0xa1c6,	// (0x0005951a) phacti_note_pane_ParamLimits

0xa1c6,	// (0x0005951a) phacti_note_pane

0x0121,	// (0x0004f475) phacti_term_pane_ParamLimits

0x0121,	// (0x0004f475) phacti_term_pane

0x0136,	// (0x0004f48a) phacti_note_pane_t1_ParamLimits

0x0136,	// (0x0004f48a) phacti_note_pane_t1

0xe701,	// (0x0005da55) phacti_term_pane_g1

0xe709,	// (0x0005da5d) phacti_term_pane_t1_ParamLimits

0xe709,	// (0x0005da5d) phacti_term_pane_t1

0x014d,	// (0x0004f4a1) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0155,	// (0x0004f4a9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x0005f12f) popup_sp_fs_calendar_preview_list_single_pane_g

0x015d,	// (0x0004f4b1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x015d,	// (0x0004f4b1) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0173,	// (0x0004f4c7) aid_popup_sp_fs_bg_corner_pane

0xc801,	// (0x0005bb55) popup_sp_fs_calendar_preview_bg_pane_g1

0x0ed9,	// (0x0005022d) popup_sp_fs_calendar_preview_bg_pane

0x017b,	// (0x0004f4cf) popup_sp_fs_calendar_preview_list_pane

0x2045,	// (0x00051399) bg_main_sp_fs_cale_pane_ParamLimits

0x2045,	// (0x00051399) bg_main_sp_fs_cale_pane

0xe733,	// (0x0005da87) listscroll_cale_mrui_pane_ParamLimits

0xe733,	// (0x0005da87) listscroll_cale_mrui_pane

0xe747,	// (0x0005da9b) listscroll_sp_fs_schedule_track_pane

0xe750,	// (0x0005daa4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe750,	// (0x0005daa4) main_sp_fs_ctrlbar_pane_cp01

0x01aa,	// (0x0004f4fe) main_sp_fs_ribbon_pane

0xe761,	// (0x0005dab5) popup_sp_fs_cale_preview_window

0xa215,	// (0x00059569) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa215,	// (0x00059569) list_single_sp_fs_schedule_track_pane

0x2045,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2045,	// (0x00051399) bg_sp_fs_highlight_list_pane_cp03

0xa228,	// (0x0005957c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa228,	// (0x0005957c) list_single_sp_fs_schedule_track_pane_g1

0xa234,	// (0x00059588) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa234,	// (0x00059588) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0005f134) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0005f134) list_single_sp_fs_schedule_track_pane_g

0xa240,	// (0x00059594) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa240,	// (0x00059594) list_single_sp_fs_schedule_track_pane_t1

0xa25a,	// (0x000595ae) sp_fs_schedule_track_pane_ParamLimits

0xa25a,	// (0x000595ae) sp_fs_schedule_track_pane

0x0207,	// (0x0004f55b) sp_fs_schedule_track_pane_g1

0x020f,	// (0x0004f563) sp_fs_schedule_track_pane_g2

0x0217,	// (0x0004f56b) sp_fs_schedule_track_pane_g3

0x021f,	// (0x0004f573) sp_fs_schedule_track_pane_g4

0x0227,	// (0x0004f57b) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x0005f139) sp_fs_schedule_track_pane_g

0xd210,	// (0x0005c564) bg_sp_fs_schedule_viewer_highlight_g1

0x1a83,	// (0x00050dd7) bg_sp_fs_schedule_viewer_highlight_g2

0xd218,	// (0x0005c56c) bg_sp_fs_schedule_viewer_highlight_g3

0xd220,	// (0x0005c574) bg_sp_fs_schedule_viewer_highlight_g4

0xd447,	// (0x0005c79b) bg_sp_fs_schedule_viewer_highlight_g5

0xd230,	// (0x0005c584) bg_sp_fs_schedule_viewer_highlight_g6

0xd238,	// (0x0005c58c) bg_sp_fs_schedule_viewer_highlight_g7

0xd240,	// (0x0005c594) bg_sp_fs_schedule_viewer_highlight_g8

0x1a63,	// (0x00050db7) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x0005f144) bg_sp_fs_schedule_viewer_highlight_g

0x0ed9,	// (0x0005022d) bg_main_sp_fs_ribbon_pane

0xa26b,	// (0x000595bf) main_sp_fs_ribbon_pane_g1

0x022f,	// (0x0004f583) main_sp_fs_ribbon_pane_t1

0xa274,	// (0x000595c8) main_sp_fs_ribbon_pane_t2

0x024d,	// (0x0004f5a1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x0005f157) main_sp_fs_ribbon_pane_t

0x025c,	// (0x0004f5b0) main_sp_fs_ribbon_scheduler_pane

0x0264,	// (0x0004f5b8) bg_main_sp_fs_ribbon_pane_g1

0x026d,	// (0x0004f5c1) bg_main_sp_fs_ribbon_pane_g2

0x0276,	// (0x0004f5ca) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x0005f15e) bg_main_sp_fs_ribbon_pane_g

0x027e,	// (0x0004f5d2) main_sp_fs_ribbon_scheduler_pane_g1

0x0287,	// (0x0004f5db) main_sp_fs_ribbon_scheduler_pane_g2

0x0290,	// (0x0004f5e4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x0005f165) main_sp_fs_ribbon_scheduler_pane_g

0xe2c5,	// (0x0005d619) list_cale_mrui_pane

0x0299,	// (0x0004f5ed) sp_fs_scroll_pane_cp07_ParamLimits

0x0299,	// (0x0004f5ed) sp_fs_scroll_pane_cp07

0xa283,	// (0x000595d7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa283,	// (0x000595d7) bg_sp_fs_schedule_viewer_highlight

0x02bb,	// (0x0004f60f) list_single_sp_fs_schedule_track_pane_cp01

0x02c3,	// (0x0004f617) list_sp_fs_schedule_track_pane

0x02cb,	// (0x0004f61f) sp_fs_scroll_pane_cp06_ParamLimits

0x02cb,	// (0x0004f61f) sp_fs_scroll_pane_cp06

0xc801,	// (0x0005bb55) bgmain_sp_fs_calendar_pane_g1

0xa293,	// (0x000595e7) list_single_cale_mrui_pane_ParamLimits

0xa293,	// (0x000595e7) list_single_cale_mrui_pane

0xe770,	// (0x0005dac4) list_single_cale_mrui_row_pane_ParamLimits

0xe770,	// (0x0005dac4) list_single_cale_mrui_row_pane

0xe77d,	// (0x0005dad1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe77d,	// (0x0005dad1) list_single_cale_mrui_row_pane_g1

0xe7b5,	// (0x0005db09) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe7b5,	// (0x0005db09) list_single_cale_mrui_row_pane_t1

0xa2b7,	// (0x0005960b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa2b7,	// (0x0005960b) list_single_cale_mrui_row_pane_t2

0xe7c7,	// (0x0005db1b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe7c7,	// (0x0005db1b) list_single_cale_mrui_row_pane_t3

0xe7f6,	// (0x0005db4a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe7f6,	// (0x0005db4a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x0005f171) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x0005f171) list_single_cale_mrui_row_pane_t

0xa31d,	// (0x00059671) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa31d,	// (0x00059671) list_single_cmail_header_editor_pane_bg_cp01

0xa341,	// (0x00059695) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa341,	// (0x00059695) list_single_cmail_header_editor_pane_bg_cp02

0xa35f,	// (0x000596b3) main_radioblah_text_pane_t1_ParamLimits

0xa35f,	// (0x000596b3) main_radioblah_text_pane_t1

0x03c4,	// (0x0004f718) cam6_indi_pane_cp01

0x03cc,	// (0x0004f720) cam6_mode_pane_cp01

0x03d4,	// (0x0004f728) cam6_pano_pane

0x03dd,	// (0x0004f731) cam6_zoom_pane_cp01

0x03e5,	// (0x0004f739) cam6_pano_image_pane

0x03ee,	// (0x0004f742) cam6_pano_pane_g1

0xdfd1,	// (0x0005d325) cam6_pano_pane_g2

0x03f7,	// (0x0004f74b) cam6_pano_pane_g3

0x0400,	// (0x0004f754) cam6_pano_pane_g4

0xcd67,	// (0x0005c0bb) cam6_pano_pane_g5

0x0409,	// (0x0004f75d) cam6_pano_pane_g6

0x0411,	// (0x0004f765) cam6_pano_pane_g7

0x0419,	// (0x0004f76d) cam6_pano_pane_g8

0x0422,	// (0x0004f776) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x0005f17a) cam6_pano_pane_g

0x0ed9,	// (0x0005022d) main_browser_tag_pane

0x00af,	// (0x0004f403) grid_navstr_albumart_pane

0x042b,	// (0x0004f77f) cell_navstr_albumart_pane_ParamLimits

0x042b,	// (0x0004f77f) cell_navstr_albumart_pane

0xb0be,	// (0x0005a412) cell_navstr_albumart_pane_g1

0xc19b,	// (0x0005b4ef) cell_navstr_albumart_pane_g2

0xc1ab,	// (0x0005b4ff) cell_navstr_albumart_pane_g3

0xc1a3,	// (0x0005b4f7) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x0005f18d) cell_navstr_albumart_pane_g

0xa378,	// (0x000596cc) bt_list_pane_ParamLimits

0xa378,	// (0x000596cc) bt_list_pane

0xa38b,	// (0x000596df) bt_list_pane_t1

0xa39a,	// (0x000596ee) bt_list_pane_t2

0x0001,

0xfe42,	// (0x0005f196) bt_list_pane_t

0x0ed9,	// (0x0005022d) main_cale_prevew_pane

0xa3a9,	// (0x000596fd) popup_cale_preview_window_ParamLimits

0xa3a9,	// (0x000596fd) popup_cale_preview_window

0x2045,	// (0x00051399) bg_popup_preview_window_pane_cp05_ParamLimits

0x2045,	// (0x00051399) bg_popup_preview_window_pane_cp05

0x048a,	// (0x0004f7de) list_cale_preview_pane_ParamLimits

0x048a,	// (0x0004f7de) list_cale_preview_pane

0xa3be,	// (0x00059712) list_double_cale_preview_pane_ParamLimits

0xa3be,	// (0x00059712) list_double_cale_preview_pane

0xa3cf,	// (0x00059723) list_single_cale_preview_pane_ParamLimits

0xa3cf,	// (0x00059723) list_single_cale_preview_pane

0x04d8,	// (0x0004f82c) list_single_cale_preview_pane_g1

0x04e0,	// (0x0004f834) list_single_cale_preview_pane_t1_ParamLimits

0x04e0,	// (0x0004f834) list_single_cale_preview_pane_t1

0xa3e3,	// (0x00059737) list_double_cale_preview_pane_g1

0xa3eb,	// (0x0005973f) list_double_cale_preview_pane_t1_ParamLimits

0xa3eb,	// (0x0005973f) list_double_cale_preview_pane_t1

0xa400,	// (0x00059754) list_double_cale_preview_pane_t2_ParamLimits

0xa400,	// (0x00059754) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x0005f19b) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x0005f19b) list_double_cale_preview_pane_t

0x0ed9,	// (0x0005022d) main_ezdial_pane

0x2045,	// (0x00051399) main_sp_fs_email_pane_ParamLimits

0x9c24,	// (0x00058f78) cmail_ddmenu_btn01_pane_ParamLimits

0x9c24,	// (0x00058f78) cmail_ddmenu_btn01_pane

0x9c37,	// (0x00058f8b) cmail_ddmenu_btn02_pane_ParamLimits

0x9c37,	// (0x00058f8b) cmail_ddmenu_btn02_pane

0x9c5a,	// (0x00058fae) cmail_ddmenu_btn03_pane_ParamLimits

0x9c5a,	// (0x00058fae) cmail_ddmenu_btn03_pane

0x9c7f,	// (0x00058fd3) main_sp_fs_ctrlbar_pane_ParamLimits

0x9ca0,	// (0x00058ff4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0ab,	// (0x000593ff) list_cmail_body_pane_ParamLimits

0xe69b,	// (0x0005d9ef) bg_button_pane_cp12

0xe6a3,	// (0x0005d9f7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6a3,	// (0x0005d9f7) list_single_cmail_header_detail_pane_g3

0xa0ff,	// (0x00059453) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa0ff,	// (0x00059453) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x0005f120) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x0005f120) list_single_cmail_header_detail_pane_t

0xe71e,	// (0x0005da72) phacti_term_pane_t2_ParamLimits

0xe71e,	// (0x0005da72) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x0005f12a) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x0005f12a) phacti_term_pane_t

0x050d,	// (0x0004f861) aid_size_list_single_double

0xa418,	// (0x0005976c) popup_ezdial_listscroll_window

0xa42e,	// (0x00059782) popup_number_entry_window_cp01

0xaf3d,	// (0x0005a291) bg_popup_call_pane_cp09

0x053e,	// (0x0004f892) ezdial_list_pane

0x0546,	// (0x0004f89a) scroll_pane_cp23

0xc3be,	// (0x0005b712) bg_button_pane_cp028_ParamLimits

0xc3be,	// (0x0005b712) bg_button_pane_cp028

0xa43a,	// (0x0005978e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa43a,	// (0x0005978e) cmail_ddmenu_btn01_pane_g1

0xa449,	// (0x0005979d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa449,	// (0x0005979d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x0005f1a0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x0005f1a0) cmail_ddmenu_btn01_pane_g

0x056c,	// (0x0004f8c0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x056c,	// (0x0004f8c0) cmail_ddmenu_btn01_pane_t1

0xc3be,	// (0x0005b712) bg_button_pane_cp029_ParamLimits

0xc3be,	// (0x0005b712) bg_button_pane_cp029

0xa459,	// (0x000597ad) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa459,	// (0x000597ad) cmail_ddmenu_btn02_pane_g1

0xa474,	// (0x000597c8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa474,	// (0x000597c8) cmail_ddmenu_btn02_pane_t1

0x2045,	// (0x00051399) bg_button_pane_cp031_ParamLimits

0x2045,	// (0x00051399) bg_button_pane_cp031

0xa459,	// (0x000597ad) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa459,	// (0x000597ad) cmail_ddmenu_btn03_pane_g1

0xa474,	// (0x000597c8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa474,	// (0x000597c8) cmail_ddmenu_btn03_pane_t1

0x7ab6,	// (0x00056e0a) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ad0,	// (0x00056e24) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ad0,	// (0x00056e24) cell_dialer2_keypad_pane_t1_copy1

0x95de,	// (0x00058932) ncimui_group_button_pane

0x2045,	// (0x00051399) main_sp_fs_calendar_pane_ParamLimits

0xa0ab,	// (0x000593ff) list_single_cmail_header_caption_pane_ParamLimits

0xd779,	// (0x0005cacd) aid_recal_txt_sm_pane

0x0ed9,	// (0x0005022d) mian_recal_day_pane

0xe761,	// (0x0005dab5) popup_sp_fs_cale_preview_window_ParamLimits

0x0ed9,	// (0x0005022d) list_recal_day_pane

0xe82e,	// (0x0005db82) list_single_recal_day_pane_ParamLimits

0xe82e,	// (0x0005db82) list_single_recal_day_pane

0x05c1,	// (0x0004f915) list_single_recal_day_pane_g1_ParamLimits

0x05c1,	// (0x0004f915) list_single_recal_day_pane_g1

0xe840,	// (0x0005db94) list_single_recal_day_pane_g2_ParamLimits

0xe840,	// (0x0005db94) list_single_recal_day_pane_g2

0xe84c,	// (0x0005dba0) list_single_recal_day_pane_g3_ParamLimits

0xe84c,	// (0x0005dba0) list_single_recal_day_pane_g3

0xa49b,	// (0x000597ef) list_single_recal_day_pane_g4_ParamLimits

0xa49b,	// (0x000597ef) list_single_recal_day_pane_g4

0xe858,	// (0x0005dbac) list_single_recal_day_pane_g5_ParamLimits

0xe858,	// (0x0005dbac) list_single_recal_day_pane_g5

0xe864,	// (0x0005dbb8) list_single_recal_day_pane_g6_ParamLimits

0xe864,	// (0x0005dbb8) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x0005f1af) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x0005f1af) list_single_recal_day_pane_g

0xe870,	// (0x0005dbc4) list_single_recal_day_pane_t1

0xe87e,	// (0x0005dbd2) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x0005f1bc) list_single_recal_day_pane_t

0xa4a9,	// (0x000597fd) ncimui_query_button_pane_ParamLimits

0xa4a9,	// (0x000597fd) ncimui_query_button_pane

0xa4b9,	// (0x0005980d) ncimui_query_button_pane_t1_ParamLimits

0xa4b9,	// (0x0005980d) ncimui_query_button_pane_t1

0x05fc,	// (0x0004f950) ncimui_query_button_pane_t2_ParamLimits

0x05fc,	// (0x0004f950) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x0005f1c1) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x0005f1c1) ncimui_query_button_pane_t

0xa4cc,	// (0x00059820) query_button_pane_ParamLimits

0xa4cc,	// (0x00059820) query_button_pane

0x0ed9,	// (0x0005022d) bg_button_pane_cp0028

0x061c,	// (0x0004f970) query_button_pane_t1

0x5df2,	// (0x00055146) main_tport_pane_ParamLimits

0x9fba,	// (0x0005930e) bg_popup_window_pane_cp01_ParamLimits

0x9fba,	// (0x0005930e) bg_popup_window_pane_cp01

0x9fd2,	// (0x00059326) heading_pane_cp08_ParamLimits

0x9fd2,	// (0x00059326) heading_pane_cp08

0x9fe4,	// (0x00059338) heading_pane_cp07_ParamLimits

0x9fe4,	// (0x00059338) heading_pane_cp07

0xe653,	// (0x0005d9a7) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x0005f10d) cell_tport_appsw_pane_g

0x5527,	// (0x0005487b) input_candi_list_open_g1

0x1c2b,	// (0x00050f7f) list_cale_time_pane_g6_ParamLimits

0x1c2b,	// (0x00050f7f) list_cale_time_pane_g6

0x6a98,	// (0x00055dec) aid_size_touch_calib_1_ParamLimits

0x6a98,	// (0x00055dec) aid_size_touch_calib_1

0x6aa4,	// (0x00055df8) aid_size_touch_calib_2_ParamLimits

0x6aa4,	// (0x00055df8) aid_size_touch_calib_2

0x6ab8,	// (0x00055e0c) aid_size_touch_calib_3_ParamLimits

0x6ab8,	// (0x00055e0c) aid_size_touch_calib_3

0x6ad0,	// (0x00055e24) aid_size_touch_calib_4_ParamLimits

0x6ad0,	// (0x00055e24) aid_size_touch_calib_4

0x6ae2,	// (0x00055e36) main_touch_calib_button_group_pane_ParamLimits

0x6ae2,	// (0x00055e36) main_touch_calib_button_group_pane

0x6af8,	// (0x00055e4c) main_touch_calib_pane_g1_ParamLimits

0x6b04,	// (0x00055e58) main_touch_calib_pane_g2_ParamLimits

0x6b10,	// (0x00055e64) main_touch_calib_pane_g3_ParamLimits

0x6b1c,	// (0x00055e70) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x0005eaeb) main_touch_calib_pane_g_ParamLimits

0x6b28,	// (0x00055e7c) main_touch_calib_pane_t1_ParamLimits

0x6b40,	// (0x00055e94) main_touch_calib_pane_t2_ParamLimits

0x6b58,	// (0x00055eac) main_touch_calib_pane_t3_ParamLimits

0x6b6a,	// (0x00055ebe) main_touch_calib_pane_t4_ParamLimits

0x6b7c,	// (0x00055ed0) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x0005eaf4) main_touch_calib_pane_t_ParamLimits

0xcb92,	// (0x0005bee6) list_single_fp_cale_pane_g3_ParamLimits

0xcb92,	// (0x0005bee6) list_single_fp_cale_pane_g3

0xefcd,	// (0x0005e321) bg_button_pane_cp012_ParamLimits

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp03_ParamLimits

0x896d,	// (0x00057cc1) cell_vitu2_function_top_pane_g1_ParamLimits

0xefcd,	// (0x0005e321) bg_vkb2_func_pane_cp04_ParamLimits

0x9594,	// (0x000588e8) main_ncimui_button_group_pane_ParamLimits

0x9594,	// (0x000588e8) main_ncimui_button_group_pane

0x95cc,	// (0x00058920) main_ncimui_pane_t3_ParamLimits

0x95cc,	// (0x00058920) main_ncimui_pane_t3

0x0104,	// (0x0004f458) phacti_button_group_pane

0x050d,	// (0x0004f861) aid_size_list_single_double_ParamLimits

0xa418,	// (0x0005976c) popup_ezdial_listscroll_window_ParamLimits

0xa42e,	// (0x00059782) popup_number_entry_window_cp01_ParamLimits

0xa4de,	// (0x00059832) phacti_button_pane_ParamLimits

0xa4de,	// (0x00059832) phacti_button_pane

0x0ed9,	// (0x0005022d) bg_button_pane_cp14

0x0639,	// (0x0004f98d) phacti_button_pane_t1

0xa4ed,	// (0x00059841) main_touch_calib_button_pane_ParamLimits

0xa4ed,	// (0x00059841) main_touch_calib_button_pane

0x165f,	// (0x000509b3) bg_button_pane_cp18_ParamLimits

0x165f,	// (0x000509b3) bg_button_pane_cp18

0x0657,	// (0x0004f9ab) main_touch_calib_button_pane_t1_ParamLimits

0x0657,	// (0x0004f9ab) main_touch_calib_button_pane_t1

0x066d,	// (0x0004f9c1) main_touch_calib_button_pane_t2_ParamLimits

0x066d,	// (0x0004f9c1) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x0005f1c6) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x0005f1c6) main_touch_calib_button_pane_t

0x0ed9,	// (0x0005022d) cell_ncimui_button_pane

0x0ed9,	// (0x0005022d) bg_button_pane_cp032

0x068b,	// (0x0004f9df) cell_ncimui_button_pane_t1

0xeefd,	// (0x0005e251) image3_infobar_pane_ParamLimits

0xeefd,	// (0x0005e251) image3_infobar_pane

0x9933,	// (0x00058c87) fs_bigclock_status_pane_ParamLimits

0x9933,	// (0x00058c87) fs_bigclock_status_pane

0x9940,	// (0x00058c94) main_fs_bigclock_clock_pane_ParamLimits

0x9940,	// (0x00058c94) main_fs_bigclock_clock_pane

0x994f,	// (0x00058ca3) main_fs_bigclock_indi_pane_ParamLimits

0x994f,	// (0x00058ca3) main_fs_bigclock_indi_pane

0x9963,	// (0x00058cb7) main_fs_bigclock_swipe_pane_ParamLimits

0x9963,	// (0x00058cb7) main_fs_bigclock_swipe_pane

0x0ed9,	// (0x0005022d) main_fs_clock_dumped_data

0xe0de,	// (0x0005d432) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0de,	// (0x0005d432) list_single_fs_bigclock_indicator_pane_g1

0xe0f8,	// (0x0005d44c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0f8,	// (0x0005d44c) list_single_fs_bigclock_indicator_pane_g2

0xe112,	// (0x0005d466) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe112,	// (0x0005d466) list_single_fs_bigclock_indicator_pane_g3

0xe12c,	// (0x0005d480) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe12c,	// (0x0005d480) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x0005effe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x0005effe) list_single_fs_bigclock_indicator_pane_g

0xe150,	// (0x0005d4a4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe150,	// (0x0005d4a4) list_single_fs_bigclock_indicator_pane_t1

0xe178,	// (0x0005d4cc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe178,	// (0x0005d4cc) list_single_fs_bigclock_indicator_pane_t2

0xe1a0,	// (0x0005d4f4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1a0,	// (0x0005d4f4) list_single_fs_bigclock_indicator_pane_t3

0xe1c8,	// (0x0005d51c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1c8,	// (0x0005d51c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0005f009) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0005f009) list_single_fs_bigclock_indicator_pane_t

0x0699,	// (0x0004f9ed) image3_infobar_fav_pane_ParamLimits

0x0699,	// (0x0004f9ed) image3_infobar_fav_pane

0x06a9,	// (0x0004f9fd) image3_infobar_loc_pane_ParamLimits

0x06a9,	// (0x0004f9fd) image3_infobar_loc_pane

0x06bd,	// (0x0004fa11) image3_infobar_time_pane_ParamLimits

0x06bd,	// (0x0004fa11) image3_infobar_time_pane

0xc801,	// (0x0005bb55) image3_infobar_time_pane_g1

0x06cd,	// (0x0004fa21) image3_infobar_time_pane_t1

0xc801,	// (0x0005bb55) image3_infobar_loc_pane_g1

0x06db,	// (0x0004fa2f) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x0005f1cb) image3_infobar_loc_pane_g

0x06e3,	// (0x0004fa37) image3_infobar_loc_pane_t1

0xc801,	// (0x0005bb55) image3_infobar_fav_pane_g1

0x06f1,	// (0x0004fa45) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x0005f1d0) image3_infobar_fav_pane_g

0x06f9,	// (0x0004fa4d) fs_bigclock_status_battery_pane

0x0702,	// (0x0004fa56) fs_bigclock_status_signal_pane

0x070b,	// (0x0004fa5f) fs_bigclock_status_title_pane

0x0714,	// (0x0004fa68) fs_bigclock_status_signal_pane_g1

0x071d,	// (0x0004fa71) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x0005f1d5) fs_bigclock_status_signal_pane_g

0x0725,	// (0x0004fa79) fs_bigclock_status_battery_pane_g1

0x072e,	// (0x0004fa82) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x0005f1da) fs_bigclock_status_battery_pane_g

0x0736,	// (0x0004fa8a) fs_bigclock_status_title_pane_t1

0xc801,	// (0x0005bb55) main_fs_bigclock_clock_pane_g1

0x0744,	// (0x0004fa98) main_fs_bigclock_clock_pane_g2

0x0744,	// (0x0004fa98) main_fs_bigclock_clock_pane_g3

0x0744,	// (0x0004fa98) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x0005f1df) main_fs_bigclock_clock_pane_g

0x074c,	// (0x0004faa0) main_fs_bigclock_clock_pane_t1

0x075a,	// (0x0004faae) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x0005f1e8) main_fs_bigclock_clock_pane_t

0x0769,	// (0x0004fabd) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0769,	// (0x0004fabd) list_single_fs_bigclock_indicator_pane

0xa500,	// (0x00059854) list_single_fs_bigclock_pane_ParamLimits

0xa500,	// (0x00059854) list_single_fs_bigclock_pane

0x07e1,	// (0x0004fb35) main_fs_bigclock_indicator_pane_t1

0x07f0,	// (0x0004fb44) list_single_fs_bigclock_pane_g1

0x07f8,	// (0x0004fb4c) list_single_fs_bigclock_pane_t1

0xc801,	// (0x0005bb55) main_fs_bigclock_swipe_pane_g1

0x0836,	// (0x0004fb8a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x0005f1f9) main_fs_bigclock_swipe_pane_g

0x083e,	// (0x0004fb92) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x083e,	// (0x0004fb92) main_fs_bigclock_swipe_pane_t1

0x4e47,	// (0x0005419b) call_type_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_btmg_pane

0xe7a9,	// (0x0005dafd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe7a9,	// (0x0005dafd) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x0005f16c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x0005f16c) list_single_cale_mrui_row_pane_g

0x05b1,	// (0x0004f905) list_recal_vselct_arw_lo_pane

0x05b9,	// (0x0004f90d) list_recal_vselct_arw_up_pane

0xe825,	// (0x0005db79) list_recal_vselct_pane

0x085b,	// (0x0004fbaf) btmg_button_pane

0xa560,	// (0x000598b4) main_btmg_pane_g1

0x0ed9,	// (0x0005022d) bg_button_pane_cp044

0x086b,	// (0x0004fbbf) btmg_button_pane_t1

0xc3b6,	// (0x0005b70a) aid_listscroll_gen

0x2045,	// (0x00051399) main_cntbar_detail_pane

0xe671,	// (0x0005d9c5) list_cmail_folder_pane

0xe681,	// (0x0005d9d5) sp_fs_scroll_pane_cp03_ParamLimits

0xa0ab,	// (0x000593ff) list_single_fs_dyc_pane_cp01_ParamLimits

0xa0ab,	// (0x000593ff) list_single_fs_dyc_pane_cp01

0x0879,	// (0x0004fbcd) aid_size_cmail_indent

0xd782,	// (0x0005cad6) list_single_dyc_row_pane_cp01

0xa590,	// (0x000598e4) cntbar_detail_list_pane_ParamLimits

0xa590,	// (0x000598e4) cntbar_detail_list_pane

0xa5d6,	// (0x0005992a) main_cntbar_detail_cont_pane_ParamLimits

0xa5d6,	// (0x0005992a) main_cntbar_detail_cont_pane

0xa5ea,	// (0x0005993e) scroll_pane_cp032_ParamLimits

0xa5ea,	// (0x0005993e) scroll_pane_cp032

0xa5f6,	// (0x0005994a) cntbar_detail_list_event_pane_ParamLimits

0xa5f6,	// (0x0005994a) cntbar_detail_list_event_pane

0xa5a0,	// (0x000598f4) cntbar_detail_list_shct_pane

0x08fa,	// (0x0004fc4e) aid_list_gen

0x1764,	// (0x00050ab8) aid_scroll

0xd757,	// (0x0005caab) aid_size_touch_scroll_bar

0xe88c,	// (0x0005dbe0) aid_list_double

0xa607,	// (0x0005995b) aid_list_single

0xe88c,	// (0x0005dbe0) aid_list_single_lg

0xe895,	// (0x0005dbe9) aid_list_z_g_a_sm

0xa610,	// (0x00059964) aid_list_z_g_d

0xa618,	// (0x0005996c) aid_txt_z_prm

0xe89d,	// (0x0005dbf1) aid_txt_z_prm_cp01

0xe8ab,	// (0x0005dbff) aid_txt_z_sec

0xa626,	// (0x0005997a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa626,	// (0x0005997a) main_cntbar_detail_cont_pane_g1

0xa63a,	// (0x0005998e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa63a,	// (0x0005998e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x0005f1fe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x0005f1fe) main_cntbar_detail_cont_pane_g

0x093b,	// (0x0004fc8f) main_cntbar_detail_cont_pane_t1

0x0949,	// (0x0004fc9d) main_cntbar_detail_cont_pane_t2

0x0957,	// (0x0004fcab) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x0005f203) main_cntbar_detail_cont_pane_t

0xa64a,	// (0x0005999e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa64a,	// (0x0005999e) cell_cntbar_detail_list_shct_pane

0x0977,	// (0x0004fccb) cntbar_detail_list_shct_pane_g1

0x0980,	// (0x0004fcd4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x0005f20a) cntbar_detail_list_shct_pane_g

0xa65c,	// (0x000599b0) cntbar_detail_list_event_pane_g1_ParamLimits

0xa65c,	// (0x000599b0) cntbar_detail_list_event_pane_g1

0xa668,	// (0x000599bc) cntbar_detail_list_event_pane_g2_ParamLimits

0xa668,	// (0x000599bc) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x0005f20f) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x0005f20f) cntbar_detail_list_event_pane_g

0xa6d4,	// (0x00059a28) cntbar_detail_list_event_pane_t1_ParamLimits

0xa6d4,	// (0x00059a28) cntbar_detail_list_event_pane_t1

0xa6e9,	// (0x00059a3d) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6e9,	// (0x00059a3d) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x0005f21c) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x0005f21c) cntbar_detail_list_event_pane_t

0xc801,	// (0x0005bb55) cell_cntbar_detail_list_shct_pane_g1

0xaefc,	// (0x0005a250) navi_pane_mv_g3

0x2045,	// (0x00051399) main_cntbar_detail_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_notif_wgt_pane

0xed11,	// (0x0005e065) aid_tch_main_mp4_pane_g4

0xeef5,	// (0x0005e249) popup_slider_window_cp02

0xe825,	// (0x0005db79) list_recal_day_event_pane

0xa568,	// (0x000598bc) cntbar_detail_btn_pane_ParamLimits

0xa568,	// (0x000598bc) cntbar_detail_btn_pane

0xa57b,	// (0x000598cf) cntbar_detail_btn_pane_cp01_ParamLimits

0xa57b,	// (0x000598cf) cntbar_detail_btn_pane_cp01

0xa5a0,	// (0x000598f4) cntbar_detail_list_shct_pane_ParamLimits

0xa5b0,	// (0x00059904) cntbar_detail_pane_g1_ParamLimits

0xa5b0,	// (0x00059904) cntbar_detail_pane_g1

0xa5c0,	// (0x00059914) cntbar_detail_pane_t1_ParamLimits

0xa5c0,	// (0x00059914) cntbar_detail_pane_t1

0xa674,	// (0x000599c8) cntbar_detail_list_event_pane_g3_ParamLimits

0xa674,	// (0x000599c8) cntbar_detail_list_event_pane_g3

0xa68c,	// (0x000599e0) cntbar_detail_list_event_pane_g4_ParamLimits

0xa68c,	// (0x000599e0) cntbar_detail_list_event_pane_g4

0xa6a4,	// (0x000599f8) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6a4,	// (0x000599f8) cntbar_detail_list_event_pane_g5

0xa6bc,	// (0x00059a10) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6bc,	// (0x00059a10) cntbar_detail_list_event_pane_g6

0xa6fe,	// (0x00059a52) cntbar_detail_list_event_pane_t3_ParamLimits

0xa6fe,	// (0x00059a52) cntbar_detail_list_event_pane_t3

0xa710,	// (0x00059a64) popup_notif_wgt_window_ParamLimits

0xa710,	// (0x00059a64) popup_notif_wgt_window

0xa725,	// (0x00059a79) popup_submenu_window_cp01_ParamLimits

0xa725,	// (0x00059a79) popup_submenu_window_cp01

0xaf3d,	// (0x0005a291) bg_popup_window_pane_cp10

0x0a57,	// (0x0004fdab) listscroll_notif_wgt_pane

0x0a5f,	// (0x0004fdb3) list_notif_wgt_window

0x0a68,	// (0x0004fdbc) scroll_pane_cp033

0x0a71,	// (0x0004fdc5) list_notif_wgt_row_pane_ParamLimits

0x0a71,	// (0x0004fdc5) list_notif_wgt_row_pane

0x0a83,	// (0x0004fdd7) aid_size_list_notif_wgt_del

0x0a8c,	// (0x0004fde0) list_notif_wgt_row_pane_g1

0x0a94,	// (0x0004fde8) list_notif_wgt_row_pane_g2

0x0a9c,	// (0x0004fdf0) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0005f223) list_notif_wgt_row_pane_g

0x0aa5,	// (0x0004fdf9) list_notif_wgt_row_pane_t1

0x0ab3,	// (0x0004fe07) list_notif_wgt_row_pane_t2

0x0ac1,	// (0x0004fe15) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x0005f22a) list_notif_wgt_row_pane_t

0xd461,	// (0x0005c7b5) list_recal_day_event_pane_g1

0x0acf,	// (0x0004fe23) list_recal_day_event_pane_t1

0x0ed9,	// (0x0005022d) bg_button_pane_cp045

0xa735,	// (0x00059a89) cntbar_detail_btn_pane_t1

0xc3be,	// (0x0005b712) main_callh_pane_ParamLimits

0xc3be,	// (0x0005b712) main_callh_pane

0x0ed9,	// (0x0005022d) main_coverflow0_pane

0x0ed9,	// (0x0005022d) main_wgtman_pane

0x996f,	// (0x00058cc3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x996f,	// (0x00058cc3) main_fs_bigclock_unlock_btn_pane

0xe64b,	// (0x0005d99f) bg_button_pane_cp16

0xe65b,	// (0x0005d9af) cell_tport_appsw_pane_g3

0xa743,	// (0x00059a97) cf0_flow_pane_ParamLimits

0xa743,	// (0x00059a97) cf0_flow_pane

0x0afb,	// (0x0004fe4f) listscroll_cf0_pane

0x0b04,	// (0x0004fe58) main_cf0_pane_g1

0xa758,	// (0x00059aac) main_cf0_pane_t1_ParamLimits

0xa758,	// (0x00059aac) main_cf0_pane_t1

0xa76e,	// (0x00059ac2) main_cf0_pane_t2_ParamLimits

0xa76e,	// (0x00059ac2) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x0005f231) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x0005f231) main_cf0_pane_t

0x0b32,	// (0x0004fe86) scroll_pane_cp11

0xa784,	// (0x00059ad8) cf0_flow_pane_g1

0xa78c,	// (0x00059ae0) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x0005f236) cf0_flow_pane_g

0xa794,	// (0x00059ae8) cf0_flow_pane_t1

0x0ed9,	// (0x0005022d) main_call6_pane

0x0ed9,	// (0x0005022d) main_calllock_pane

0xa7a2,	// (0x00059af6) call6_btn_grp_pane_ParamLimits

0xa7a2,	// (0x00059af6) call6_btn_grp_pane

0xa7b8,	// (0x00059b0c) call6_pane_g1_ParamLimits

0xa7b8,	// (0x00059b0c) call6_pane_g1

0xa7cb,	// (0x00059b1f) popup_call6_1st_window_ParamLimits

0xa7cb,	// (0x00059b1f) popup_call6_1st_window

0xa7da,	// (0x00059b2e) popup_call6_2nd_window_ParamLimits

0xa7da,	// (0x00059b2e) popup_call6_2nd_window

0xa7e9,	// (0x00059b3d) cell_call6_btn_pane_ParamLimits

0xa7e9,	// (0x00059b3d) cell_call6_btn_pane

0xaf3d,	// (0x0005a291) bg_popup_call2_in_pane_cp03

0x0b9a,	// (0x0004feee) popup_call6_1st_window_g1

0x0ba2,	// (0x0004fef6) popup_call6_1st_window_g2

0x0baa,	// (0x0004fefe) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x0005f23b) popup_call6_1st_window_g

0x0bb2,	// (0x0004ff06) popup_call6_1st_window_t1

0x0bc1,	// (0x0004ff15) popup_call6_1st_window_t2

0x0bcf,	// (0x0004ff23) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x0005f242) popup_call6_1st_window_t

0xaf3d,	// (0x0005a291) bg_popup_call2_in_pane_cp04

0x0b9a,	// (0x0004feee) popup_call6_2nd_window_g1

0x0ba2,	// (0x0004fef6) popup_call6_2nd_window_g2

0x0baa,	// (0x0004fefe) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x0005f23b) popup_call6_2nd_window_g

0x0bb2,	// (0x0004ff06) popup_call6_2nd_window_t1

0x0ed9,	// (0x0005022d) bg_button_pane_cp15

0x0bdd,	// (0x0004ff31) cell_call6_btn_pane_g1

0x0be6,	// (0x0004ff3a) cell_call6_btn_pane_t1

0xa7fd,	// (0x00059b51) listscroll_wgtman_pane_ParamLimits

0xa7fd,	// (0x00059b51) listscroll_wgtman_pane

0xa81c,	// (0x00059b70) wgtman_btn_pane_ParamLimits

0xa81c,	// (0x00059b70) wgtman_btn_pane

0x2004,	// (0x00051358) aid_scroll_copy1

0x0c42,	// (0x0004ff96) list_wgtman_pane

0xa85c,	// (0x00059bb0) wgtman_btn_pane_g1_ParamLimits

0xa85c,	// (0x00059bb0) wgtman_btn_pane_g1

0xa888,	// (0x00059bdc) wgtman_btn_pane_t1_ParamLimits

0xa888,	// (0x00059bdc) wgtman_btn_pane_t1

0x0cab,	// (0x0004ffff) wgtman_btn_pane_t2_ParamLimits

0x0cab,	// (0x0004ffff) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x0005f249) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x0005f249) wgtman_btn_pane_t

0xa8c5,	// (0x00059c19) listrow_wgtman_pane_ParamLimits

0xa8c5,	// (0x00059c19) listrow_wgtman_pane

0xa8d6,	// (0x00059c2a) listrow_wgtman_pane_g1

0xa8df,	// (0x00059c33) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x0005f24e) listrow_wgtman_pane_g

0xa8e7,	// (0x00059c3b) listrow_wgtman_pane_t1

0xa8f5,	// (0x00059c49) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x0005f253) listrow_wgtman_pane_t

0xa903,	// (0x00059c57) wait_bar_pane_cp09

0x0d08,	// (0x0005005c) main_calllock_btn_pane

0x0d10,	// (0x00050064) main_calllock_pane_g1

0x0ed9,	// (0x0005022d) bg_button_pane_cp17

0x0d19,	// (0x0005006d) main_calllock_btn_pane_g1

0x0d22,	// (0x00050076) main_calllock_btn_pane_t1

0x0ed9,	// (0x0005022d) main_dialer3_pane

0x0ed9,	// (0x0005022d) main_fmrd2_pane

0xc801,	// (0x0005bb55) main_fs_bigclock_unlock_btn_pane_g1

0x0d39,	// (0x0005008d) main_fs_bigclock_unlock_btn_pane_t1

0xa90b,	// (0x00059c5f) area_fmrd2_info_pane_ParamLimits

0xa90b,	// (0x00059c5f) area_fmrd2_info_pane

0xa91a,	// (0x00059c6e) area_fmrd2_visual_pane_ParamLimits

0xa91a,	// (0x00059c6e) area_fmrd2_visual_pane

0xa928,	// (0x00059c7c) fmrd2_indi_pane_ParamLimits

0xa928,	// (0x00059c7c) fmrd2_indi_pane

0xa935,	// (0x00059c89) area_fmrd2_visual_pane_g1

0xa93d,	// (0x00059c91) area_fmrd2_visual_pane_t1

0xa94b,	// (0x00059c9f) area_fmrd2_visual_pane_t2

0xa959,	// (0x00059cad) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x0005f25d) area_fmrd2_visual_pane_t

0xa967,	// (0x00059cbb) area_fmrd2_info_pane_g1

0xa96f,	// (0x00059cc3) area_fmrd2_info_pane_t1

0xa97d,	// (0x00059cd1) area_fmrd2_info_pane_t2

0xa98b,	// (0x00059cdf) area_fmrd2_info_pane_t3

0xa999,	// (0x00059ced) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x0005f264) area_fmrd2_info_pane_t

0xa9a7,	// (0x00059cfb) fmrd2_indi_pane_t1

0xa9b5,	// (0x00059d09) fmrd2_indi_pane_t2

0xe8b9,	// (0x0005dc0d) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x0005f26d) fmrd2_indi_pane_t

0xe13b,	// (0x0005d48f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe13b,	// (0x0005d48f) list_single_fs_bigclock_indicator_pane_g5

0xe1dd,	// (0x0005d531) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1dd,	// (0x0005d531) list_single_fs_bigclock_indicator_pane_t5

0xa1da,	// (0x0005952e) aid_cell_bcale_month_pane_ParamLimits

0xa1da,	// (0x0005952e) aid_cell_bcale_month_pane

0xa1ec,	// (0x00059540) bcale_month_pane_ParamLimits

0xa1ec,	// (0x00059540) bcale_month_pane

0xa1fe,	// (0x00059552) bcale_preview_pane_ParamLimits

0xa1fe,	// (0x00059552) bcale_preview_pane

0x07f8,	// (0x0004fb4c) list_single_fs_bigclock_pane_t1_ParamLimits

0x0812,	// (0x0004fb66) list_single_fs_bigclock_pane_t2_ParamLimits

0x0812,	// (0x0004fb66) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x0005f1f4) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x0005f1f4) list_single_fs_bigclock_pane_t

0x0d31,	// (0x00050085) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x0005f258) main_fs_bigclock_unlock_btn_pane_g

0xe8c7,	// (0x0005dc1b) aid_dia3_key_size_ParamLimits

0xe8c7,	// (0x0005dc1b) aid_dia3_key_size

0xe8d6,	// (0x0005dc2a) aid_dia3_listrow_size_ParamLimits

0xe8d6,	// (0x0005dc2a) aid_dia3_listrow_size

0xe8e9,	// (0x0005dc3d) dia3_keypad_fun_pane_ParamLimits

0xe8e9,	// (0x0005dc3d) dia3_keypad_fun_pane

0xe8fd,	// (0x0005dc51) dia3_keypad_num_pane_ParamLimits

0xe8fd,	// (0x0005dc51) dia3_keypad_num_pane

0xe90e,	// (0x0005dc62) dia3_listscroll_pane_ParamLimits

0xe90e,	// (0x0005dc62) dia3_listscroll_pane

0xe91f,	// (0x0005dc73) dia3_numentry_pane_ParamLimits

0xe91f,	// (0x0005dc73) dia3_numentry_pane

0x20d2,	// (0x00051426) dia3_list_pane

0x20db,	// (0x0005142f) scroll_pane_cp12

0x0ed9,	// (0x0005022d) bg_dia3_numentry_pane

0xe931,	// (0x0005dc85) dia3_numentry_pane_t1

0xe940,	// (0x0005dc94) cell_dia3_key_num_pane

0xe948,	// (0x0005dc9c) cell_dia3_key0_fun_pane_ParamLimits

0xe948,	// (0x0005dc9c) cell_dia3_key0_fun_pane

0xe95c,	// (0x0005dcb0) cell_dia3_key1_fun_pane_ParamLimits

0xe95c,	// (0x0005dcb0) cell_dia3_key1_fun_pane

0xe973,	// (0x0005dcc7) dia3_listrow_pane

0xde5f,	// (0x0005d1b3) bg_dia3_numentry_pane_g1

0x0ed9,	// (0x0005022d) bg_button_pane_cp21

0x2122,	// (0x00051476) cell_dia3_key_num_pane_t1

0x2130,	// (0x00051484) cell_dia3_key_num_pane_t2

0x213f,	// (0x00051493) cell_dia3_key_num_pane_t3

0x214e,	// (0x000514a2) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x0005f274) cell_dia3_key_num_pane_t

0x0ed9,	// (0x0005022d) bg_button_pane_cp19

0x215d,	// (0x000514b1) cell_dia3_key0_fun_pane_g1

0x0ed9,	// (0x0005022d) bg_button_pane_cp20

0xe985,	// (0x0005dcd9) cell_dia3_key1_fun_pane_g1

0xe98d,	// (0x0005dce1) area_left_week_number_pane

0xe996,	// (0x0005dcea) area_top_day_name_pane

0xe99f,	// (0x0005dcf3) frame_month_view_pane

0xe9a7,	// (0x0005dcfb) grid_month_view_pane

0xe9b1,	// (0x0005dd05) cell_top_day_name_pane_ParamLimits

0xe9b1,	// (0x0005dd05) cell_top_day_name_pane

0xe9c7,	// (0x0005dd1b) cell_area_left_week_number_pane_ParamLimits

0xe9c7,	// (0x0005dd1b) cell_area_left_week_number_pane

0xe9db,	// (0x0005dd2f) cell_month_view_pane_ParamLimits

0xe9db,	// (0x0005dd2f) cell_month_view_pane

0x21d6,	// (0x0005152a) frm_month_g1

0xe9f6,	// (0x0005dd4a) frm_month_g2

0xe9fe,	// (0x0005dd52) frm_month_g3

0xea06,	// (0x0005dd5a) frm_month_g4

0xea0e,	// (0x0005dd62) frm_month_g5

0xea16,	// (0x0005dd6a) frm_month_g6

0xea1e,	// (0x0005dd72) frm_month_g7

0x220f,	// (0x00051563) frm_month_g8

0xea26,	// (0x0005dd7a) frm_month_g9

0xea2f,	// (0x0005dd83) frm_month_g10

0xea38,	// (0x0005dd8c) frm_month_g11

0xea41,	// (0x0005dd95) frm_month_g12

0xea4a,	// (0x0005dd9e) frm_month_g13

0xea53,	// (0x0005dda7) frm_month_g14

0xea5c,	// (0x0005ddb0) frm_month_g15

0xea65,	// (0x0005ddb9) frm_month_g16

0x000f,

0xff29,	// (0x0005f27d) frm_month_g

0xea6e,	// (0x0005ddc2) cell_top_day_name_pane_t1

0xea7d,	// (0x0005ddd1) cell_area_left_week_number_pane_g1

0xea6e,	// (0x0005ddc2) cell_area_left_week_number_pane_t1

0xc801,	// (0x0005bb55) cell_month_view_pane_g1

0xea85,	// (0x0005ddd9) cell_month_view_pane_t1

0x0ed9,	// (0x0005022d) main_fps_pane

0xe451,	// (0x0005d7a5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe451,	// (0x0005d7a5) cmail_ddmenu_btn02_pane_cp1

0xe46d,	// (0x0005d7c1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe46d,	// (0x0005d7c1) cmail_ddmenu_btn02_pane_cp2

0xa468,	// (0x000597bc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa468,	// (0x000597bc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x0005f1a5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x0005f1a5) cmail_ddmenu_btn02_pane_g

0xa489,	// (0x000597dd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa489,	// (0x000597dd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x0005f1aa) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x0005f1aa) cmail_ddmenu_btn02_pane_t

0xea94,	// (0x0005dde8) fps_text_pane_ParamLimits

0xea94,	// (0x0005dde8) fps_text_pane

0xeaaa,	// (0x0005ddfe) main_fps_pane_g1_ParamLimits

0xeaaa,	// (0x0005ddfe) main_fps_pane_g1

0xeac0,	// (0x0005de14) wait_bar_pane_cp010_ParamLimits

0xeac0,	// (0x0005de14) wait_bar_pane_cp010

0xead1,	// (0x0005de25) fps_text_pane_t1_ParamLimits

0xead1,	// (0x0005de25) fps_text_pane_t1

0x7f01,	// (0x00057255) cam4_image_uncrop_pane_g1

0x7f0a,	// (0x0005725e) cam4_image_uncrop_pane_g2

0x7f13,	// (0x00057267) cam4_image_uncrop_pane_g3

0x7f1c,	// (0x00057270) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x0005ec83) cam4_image_uncrop_pane_g

0xe973,	// (0x0005dcc7) dia3_listrow_pane_ParamLimits

0x0ed9,	// (0x0005022d) main_phob2_pane

0xa045,	// (0x00059399) cell_tport_appsw_pane_cp02_ParamLimits

0xa045,	// (0x00059399) cell_tport_appsw_pane_cp02

0xa055,	// (0x000593a9) cell_tport_appsw_pane_cp03_ParamLimits

0xa055,	// (0x000593a9) cell_tport_appsw_pane_cp03

0x0ed9,	// (0x0005022d) phob2_contact_card_pane

0x0ed9,	// (0x0005022d) phob2_listscroll_pane

0x22bb,	// (0x0005160f) phob2_list_pane

0x22c3,	// (0x00051617) scroll_pane_cp034

0xeae9,	// (0x0005de3d) phob2_cc_data_pane_ParamLimits

0xeae9,	// (0x0005de3d) phob2_cc_data_pane

0xeb06,	// (0x0005de5a) phob2_cc_listscroll_pane_ParamLimits

0xeb06,	// (0x0005de5a) phob2_cc_listscroll_pane

0xeb22,	// (0x0005de76) list_double_large_graphic_phob2_pane_ParamLimits

0xeb22,	// (0x0005de76) list_double_large_graphic_phob2_pane

0xeb34,	// (0x0005de88) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeb34,	// (0x0005de88) list_double_large_graphic_phob2_pane_g1

0xa9c3,	// (0x00059d17) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa9c3,	// (0x00059d17) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x0005f29e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x0005f29e) list_double_large_graphic_phob2_pane_g

0xa9cf,	// (0x00059d23) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa9cf,	// (0x00059d23) list_double_large_graphic_phob2_pane_t1

0xa9e4,	// (0x00059d38) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa9e4,	// (0x00059d38) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x0005f2a3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x0005f2a3) list_double_large_graphic_phob2_pane_t

0x0ed9,	// (0x0005022d) list_highlight_pane_cp024

0x231b,	// (0x0005166f) phob2_cc_button_pane

0xeb41,	// (0x0005de95) phob2_cc_data_pane_g1_ParamLimits

0xeb41,	// (0x0005de95) phob2_cc_data_pane_g1

0xeb56,	// (0x0005deaa) phob2_cc_data_pane_g2_ParamLimits

0xeb56,	// (0x0005deaa) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x0005f2a8) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x0005f2a8) phob2_cc_data_pane_g

0xeb68,	// (0x0005debc) phob2_cc_data_pane_t1_ParamLimits

0xeb68,	// (0x0005debc) phob2_cc_data_pane_t1

0xeb80,	// (0x0005ded4) phob2_cc_data_pane_t2_ParamLimits

0xeb80,	// (0x0005ded4) phob2_cc_data_pane_t2

0xeb98,	// (0x0005deec) phob2_cc_data_pane_t3_ParamLimits

0xeb98,	// (0x0005deec) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x0005f2ad) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x0005f2ad) phob2_cc_data_pane_t

0x2371,	// (0x000516c5) phob2_cc_list_pane_ParamLimits

0x2371,	// (0x000516c5) phob2_cc_list_pane

0x237d,	// (0x000516d1) scroll_pane_cp035_ParamLimits

0x237d,	// (0x000516d1) scroll_pane_cp035

0x2045,	// (0x00051399) bg_button_pane_cp033

0x2389,	// (0x000516dd) phob2_cc_button_pane_g1

0x2395,	// (0x000516e9) phob2_cc_button_pane_t1

0x23aa,	// (0x000516fe) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x0005f2b4) phob2_cc_button_pane_t

0xebb0,	// (0x0005df04) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xebb0,	// (0x0005df04) list_double_large_graphic_phob2_cc_pane

0xebc2,	// (0x0005df16) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xebc2,	// (0x0005df16) list_double_large_graphic_phob2_cc_pane_g1

0xa9f6,	// (0x00059d4a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa9f6,	// (0x00059d4a) list_double_large_graphic_phob2_cc_pane_g2

0xaa02,	// (0x00059d56) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaa02,	// (0x00059d56) list_double_large_graphic_phob2_cc_pane_g3

0xaa0e,	// (0x00059d62) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaa0e,	// (0x00059d62) list_double_large_graphic_phob2_cc_pane_g4

0xaa1a,	// (0x00059d6e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaa1a,	// (0x00059d6e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x0005f2b9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x0005f2b9) list_double_large_graphic_phob2_cc_pane_g

0xaa26,	// (0x00059d7a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaa26,	// (0x00059d7a) list_double_large_graphic_phob2_cc_pane_t1

0xaa4f,	// (0x00059da3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaa4f,	// (0x00059da3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x0005f2c4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x0005f2c4) list_double_large_graphic_phob2_cc_pane_t

0x23e8,	// (0x0005173c) list_highlight_pane_cp025_ParamLimits

0x23e8,	// (0x0005173c) list_highlight_pane_cp025

0x2045,	// (0x00051399) bg_button_pane_cp033_ParamLimits

0x2389,	// (0x000516dd) phob2_cc_button_pane_g1_ParamLimits

0x2395,	// (0x000516e9) phob2_cc_button_pane_t1_ParamLimits

0x23aa,	// (0x000516fe) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x0005f2b4) phob2_cc_button_pane_t_ParamLimits

0x3587,	// (0x000528db) popup_wgtman_window

0xde7f,	// (0x0005d1d3) scroll_pane_cp038

0xa83e,	// (0x00059b92) wgtman_btn_pane_cp_01_ParamLimits

0xa83e,	// (0x00059b92) wgtman_btn_pane_cp_01

0x23f6,	// (0x0005174a) wgtman_content_pane

0x23ff,	// (0x00051753) wgtman_heading_pane

0x0ed9,	// (0x0005022d) bg_heading_pane_cp02

0x2408,	// (0x0005175c) wgtman_heading_pane_g1

0x2410,	// (0x00051764) wgtman_heading_pane_t1

0x241e,	// (0x00051772) scroll_pane_cp036

0x2426,	// (0x0005177a) wgtman_list_pane

0x242e,	// (0x00051782) wgtman_list_pane_t1_ParamLimits

0x242e,	// (0x00051782) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
