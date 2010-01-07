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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00038b37 };

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
0x3526,	// (0x0003c05d) Screen

0x3530,	// (0x0003c067) application_window

0x355f,	// (0x0003c096) area_bottom_pane_ParamLimits

0x355f,	// (0x0003c096) area_bottom_pane

0x3592,	// (0x0003c0c9) area_top_pane_ParamLimits

0x3592,	// (0x0003c0c9) area_top_pane

0x1320,	// (0x00039e57) call_video_uplink_pane_ParamLimits

0x1320,	// (0x00039e57) call_video_uplink_pane

0x3603,	// (0x0003c13a) main_pane_ParamLimits

0x3603,	// (0x0003c13a) main_pane

0xc74d,	// (0x00045284) context_pane

0x6757,	// (0x0003f28e) navi_pane

0x6780,	// (0x0003f2b7) popup_cale_events_window_ParamLimits

0x6780,	// (0x0003f2b7) popup_cale_events_window

0xc760,	// (0x00045297) popup_mup_playback_window

0x6798,	// (0x0003f2cf) signal_pane

0x1a77,	// (0x0003a5ae) main_browser_pane

0xb295,	// (0x00043dcc) main_burst_pane

0x1da6,	// (0x0003a8dd) main_calc_pane

0xb295,	// (0x00043dcc) main_cale_day_pane

0x1b9f,	// (0x0003a6d6) main_cale_month_pane

0xb295,	// (0x00043dcc) main_cale_week_pane

0xb295,	// (0x00043dcc) main_call_pane

0x174d,	// (0x0003a284) main_call_poc_pane

0xb295,	// (0x00043dcc) main_camera_pane

0xb295,	// (0x00043dcc) main_chi_dic_pane

0x5625,	// (0x0003e15c) main_clock_pane

0x174d,	// (0x0003a284) main_fmradio_pane

0xb295,	// (0x00043dcc) main_graph_messa_pane

0x174d,	// (0x0003a284) main_help_pane

0x1a77,	// (0x0003a5ae) main_im_pane

0x19a8,	// (0x0003a4df) main_image_pane_ParamLimits

0x19a8,	// (0x0003a4df) main_image_pane

0x174d,	// (0x0003a284) main_location2_pane

0xb295,	// (0x00043dcc) main_location_pane

0x174d,	// (0x0003a284) main_messa_pane

0x174d,	// (0x0003a284) main_mp2_pane

0xb295,	// (0x00043dcc) main_mp_pane

0x174d,	// (0x0003a284) main_msg_pane

0x174d,	// (0x0003a284) main_mup_eq_pane

0x174d,	// (0x0003a284) main_mup_pane

0xb295,	// (0x00043dcc) main_notes_pane

0x174d,	// (0x0003a284) main_pec_pane

0x174d,	// (0x0003a284) main_phob_pane

0x174d,	// (0x0003a284) main_pinb_pane

0x174d,	// (0x0003a284) main_postcard_pane

0x174d,	// (0x0003a284) main_qdial_pane

0xb295,	// (0x00043dcc) main_skin_pane

0x174d,	// (0x0003a284) main_smil2_pane

0xb295,	// (0x00043dcc) main_smil_pane

0xb295,	// (0x00043dcc) main_video_pane

0xb295,	// (0x00043dcc) main_video_tele_pane

0x19a8,	// (0x0003a4df) main_viewer_pane_ParamLimits

0x19a8,	// (0x0003a4df) main_viewer_pane

0xb295,	// (0x00043dcc) main_vorec_pane

0x6537,	// (0x0003f06e) popup_blid_sat_info_window_ParamLimits

0x6537,	// (0x0003f06e) popup_blid_sat_info_window

0x658d,	// (0x0003f0c4) popup_dyc_status_message_window_ParamLimits

0x658d,	// (0x0003f0c4) popup_dyc_status_message_window

0x65a3,	// (0x0003f0da) popup_grid_large_graphic_window_ParamLimits

0x65a3,	// (0x0003f0da) popup_grid_large_graphic_window

0x6639,	// (0x0003f170) popup_loc_request_window_ParamLimits

0x6639,	// (0x0003f170) popup_loc_request_window

0x6731,	// (0x0003f268) popup_wml_address_window_ParamLimits

0x6731,	// (0x0003f268) popup_wml_address_window

0x638d,	// (0x0003eec4) call_muted_g1

0x60b2,	// (0x0003ebe9) popup_call_audio_conf_window_ParamLimits

0x60b2,	// (0x0003ebe9) popup_call_audio_conf_window

0x639d,	// (0x0003eed4) popup_call_audio_first_window_ParamLimits

0x639d,	// (0x0003eed4) popup_call_audio_first_window

0x63fb,	// (0x0003ef32) popup_call_audio_in_window_ParamLimits

0x63fb,	// (0x0003ef32) popup_call_audio_in_window

0x6427,	// (0x0003ef5e) popup_call_audio_out_window_ParamLimits

0x6427,	// (0x0003ef5e) popup_call_audio_out_window

0x6455,	// (0x0003ef8c) popup_call_audio_second_window_ParamLimits

0x6455,	// (0x0003ef8c) popup_call_audio_second_window

0x649b,	// (0x0003efd2) popup_call_audio_wait_window_ParamLimits

0x649b,	// (0x0003efd2) popup_call_audio_wait_window

0x64ce,	// (0x0003f005) popup_number_entry_window_ParamLimits

0x64ce,	// (0x0003f005) popup_number_entry_window

0x133c,	// (0x00039e73) bg_popup_call_pane_cp05_ParamLimits

0x133c,	// (0x00039e73) bg_popup_call_pane_cp05

0x135c,	// (0x00039e93) popup_number_entry_window_t1

0x136f,	// (0x00039ea6) popup_number_entry_window_t2

0x1381,	// (0x00039eb8) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00047c32) popup_number_entry_window_t

0x1393,	// (0x00039eca) text_title_cp2

0x13a6,	// (0x00039edd) bg_popup_call_pane_cp_ParamLimits

0x13a6,	// (0x00039edd) bg_popup_call_pane_cp

0x13b4,	// (0x00039eeb) call_thumbnail_pane

0x13bc,	// (0x00039ef3) popup_call_audio_in_window_g1_ParamLimits

0x13bc,	// (0x00039ef3) popup_call_audio_in_window_g1

0x13c8,	// (0x00039eff) popup_call_audio_in_window_g2_ParamLimits

0x13c8,	// (0x00039eff) popup_call_audio_in_window_g2

0x13d4,	// (0x00039f0b) popup_call_audio_in_window_g3_ParamLimits

0x13d4,	// (0x00039f0b) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00047c3b) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00047c3b) popup_call_audio_in_window_g

0x13e0,	// (0x00039f17) popup_call_audio_in_window_t1_ParamLimits

0x13e0,	// (0x00039f17) popup_call_audio_in_window_t1

0x13fb,	// (0x00039f32) popup_call_audio_in_window_t2_ParamLimits

0x13fb,	// (0x00039f32) popup_call_audio_in_window_t2

0x1416,	// (0x00039f4d) popup_call_audio_in_window_t3_ParamLimits

0x1416,	// (0x00039f4d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00047c42) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00047c42) popup_call_audio_in_window_t

0x13a6,	// (0x00039edd) bg_popup_call_pane_cp01_ParamLimits

0x13a6,	// (0x00039edd) bg_popup_call_pane_cp01

0x13b4,	// (0x00039eeb) call_thumbnail_pane_cp02

0x1429,	// (0x00039f60) call_type_pane_cp022

0x1431,	// (0x00039f68) popup_call_audio_out_window_g1_ParamLimits

0x1431,	// (0x00039f68) popup_call_audio_out_window_g1

0x1443,	// (0x00039f7a) popup_call_audio_out_window_g2_ParamLimits

0x1443,	// (0x00039f7a) popup_call_audio_out_window_g2

0x144f,	// (0x00039f86) popup_call_audio_out_window_g3_ParamLimits

0x144f,	// (0x00039f86) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00047c49) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00047c49) popup_call_audio_out_window_g

0x1461,	// (0x00039f98) popup_call_audio_out_window_t1_ParamLimits

0x1461,	// (0x00039f98) popup_call_audio_out_window_t1

0x1479,	// (0x00039fb0) popup_call_audio_out_window_t2_ParamLimits

0x1479,	// (0x00039fb0) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00047c50) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00047c50) popup_call_audio_out_window_t

0x148e,	// (0x00039fc5) bg_popup_call_pane_ParamLimits

0x148e,	// (0x00039fc5) bg_popup_call_pane

0x3795,	// (0x0003c2cc) call_thumbnail_pane_cp_ParamLimits

0x3795,	// (0x0003c2cc) call_thumbnail_pane_cp

0x1512,	// (0x0003a049) call_type_pane_cp01_ParamLimits

0x1512,	// (0x0003a049) call_type_pane_cp01

0x1556,	// (0x0003a08d) popup_call_audio_first_window_g1_ParamLimits

0x1556,	// (0x0003a08d) popup_call_audio_first_window_g1

0x15a2,	// (0x0003a0d9) popup_call_audio_first_window_g2_ParamLimits

0x15a2,	// (0x0003a0d9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00047c55) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00047c55) popup_call_audio_first_window_g

0x15e6,	// (0x0003a11d) popup_call_audio_first_window_t1_ParamLimits

0x15e6,	// (0x0003a11d) popup_call_audio_first_window_t1

0x1692,	// (0x0003a1c9) popup_call_audio_first_window_t4_ParamLimits

0x1692,	// (0x0003a1c9) popup_call_audio_first_window_t4

0x171e,	// (0x0003a255) popup_call_audio_first_window_t5_ParamLimits

0x171e,	// (0x0003a255) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00047c5a) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00047c5a) popup_call_audio_first_window_t

0x174d,	// (0x0003a284) bg_popup_call_pane_cp02

0x1757,	// (0x0003a28e) call_type_pane_cp023

0x175f,	// (0x0003a296) popup_call_audio_wait_window_g1

0x1767,	// (0x0003a29e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00047c61) popup_call_audio_wait_window_g

0x176f,	// (0x0003a2a6) popup_call_audio_wait_window_t3

0x177d,	// (0x0003a2b4) bg_popup_call_pane_cp03_ParamLimits

0x177d,	// (0x0003a2b4) bg_popup_call_pane_cp03

0x17dd,	// (0x0003a314) call_thumbnail_pane_cp011_ParamLimits

0x17dd,	// (0x0003a314) call_thumbnail_pane_cp011

0x17e9,	// (0x0003a320) call_type_pane_cp034_ParamLimits

0x17e9,	// (0x0003a320) call_type_pane_cp034

0x1825,	// (0x0003a35c) popup_call_audio_second_window_g1_ParamLimits

0x1825,	// (0x0003a35c) popup_call_audio_second_window_g1

0x1861,	// (0x0003a398) popup_call_audio_second_window_g2_ParamLimits

0x1861,	// (0x0003a398) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00047c66) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00047c66) popup_call_audio_second_window_g

0x189d,	// (0x0003a3d4) popup_call_audio_second_window_t1_ParamLimits

0x189d,	// (0x0003a3d4) popup_call_audio_second_window_t1

0x191e,	// (0x0003a455) popup_call_audio_second_window_t2_ParamLimits

0x191e,	// (0x0003a455) popup_call_audio_second_window_t2

0x1954,	// (0x0003a48b) popup_call_audio_second_window_t3_ParamLimits

0x1954,	// (0x0003a48b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00047c6b) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00047c6b) popup_call_audio_second_window_t

0x174d,	// (0x0003a284) bg_popup_call_pane_cp04

0x198a,	// (0x0003a4c1) list_conf_pane

0x1992,	// (0x0003a4c9) popup_call_audio_conf_window_t1

0x19a0,	// (0x0003a4d7) call_thumbnail_pane_g1

0x19a8,	// (0x0003a4df) bg_pinb_pane_ParamLimits

0x19a8,	// (0x0003a4df) bg_pinb_pane

0x19b6,	// (0x0003a4ed) find_pinb_pane

0x19bf,	// (0x0003a4f6) listscroll_pinb_pane_ParamLimits

0x19bf,	// (0x0003a4f6) listscroll_pinb_pane

0x19ce,	// (0x0003a505) pinb_bg_pane_g1

0x37b9,	// (0x0003c2f0) pinb_bg_pane_g2

0x37c3,	// (0x0003c2fa) pinb_bg_pane_g3

0x37cd,	// (0x0003c304) pinb_bg_pane_g4

0x37d7,	// (0x0003c30e) pinb_bg_pane_g5

0x37e1,	// (0x0003c318) pinb_bg_pane_g6

0x37ea,	// (0x0003c321) pinb_bg_pane_g7

0x37f3,	// (0x0003c32a) pinb_bg_pane_g8

0x37fe,	// (0x0003c335) pinb_bg_pane_g9

0x3808,	// (0x0003c33f) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00047c72) pinb_bg_pane_g

0x3823,	// (0x0003c35a) grid_pinb_pane

0x382c,	// (0x0003c363) list_pinb_pane

0x3835,	// (0x0003c36c) scroll_pane_cp01_ParamLimits

0x3835,	// (0x0003c36c) scroll_pane_cp01

0x19d8,	// (0x0003a50f) find_pinb_pane_g1_ParamLimits

0x19d8,	// (0x0003a50f) find_pinb_pane_g1

0x19f0,	// (0x0003a527) find_pinb_pane_t1

0x1a02,	// (0x0003a539) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00047c8c) find_pinb_pane_t

0x1a17,	// (0x0003a54e) input_focus_pane_cp01_ParamLimits

0x1a17,	// (0x0003a54e) input_focus_pane_cp01

0x3847,	// (0x0003c37e) cell_pinb_pane_ParamLimits

0x3847,	// (0x0003c37e) cell_pinb_pane

0x3862,	// (0x0003c399) cell_pinb_pane_g1_ParamLimits

0x3862,	// (0x0003c399) cell_pinb_pane_g1

0x3872,	// (0x0003c3a9) cell_pinb_pane_g2_ParamLimits

0x3872,	// (0x0003c3a9) cell_pinb_pane_g2

0x1a23,	// (0x0003a55a) cell_pinb_pane_g3_ParamLimits

0x1a23,	// (0x0003a55a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00047c91) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00047c91) cell_pinb_pane_g

0x174d,	// (0x0003a284) grid_highlight_pane_cp01

0x387e,	// (0x0003c3b5) list_pinb_item_pane_ParamLimits

0x387e,	// (0x0003c3b5) list_pinb_item_pane

0x174d,	// (0x0003a284) list_highlight_pane_cp02

0x3890,	// (0x0003c3c7) list_pinb_item_pane_g1_ParamLimits

0x3890,	// (0x0003c3c7) list_pinb_item_pane_g1

0x389d,	// (0x0003c3d4) list_pinb_item_pane_g2_ParamLimits

0x389d,	// (0x0003c3d4) list_pinb_item_pane_g2

0x38a9,	// (0x0003c3e0) list_pinb_item_pane_g3_ParamLimits

0x38a9,	// (0x0003c3e0) list_pinb_item_pane_g3

0x38ba,	// (0x0003c3f1) list_pinb_item_pane_g4_ParamLimits

0x38ba,	// (0x0003c3f1) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00047c98) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00047c98) list_pinb_item_pane_g

0x38c6,	// (0x0003c3fd) list_pinb_item_pane_t1_ParamLimits

0x38c6,	// (0x0003c3fd) list_pinb_item_pane_t1

0x38fb,	// (0x0003c432) calc_display_pane

0x3917,	// (0x0003c44e) calc_paper_pane

0x3938,	// (0x0003c46f) grid_calc_pane

0x174d,	// (0x0003a284) bg_list_pane_cp01

0x3954,	// (0x0003c48b) clock_g1

0x395c,	// (0x0003c493) clock_g2

0x0001,

0xf16a,	// (0x00047ca1) clock_g

0x3964,	// (0x0003c49b) clock_t1_ParamLimits

0x3964,	// (0x0003c49b) clock_t1

0x3979,	// (0x0003c4b0) clock_t2_ParamLimits

0x3979,	// (0x0003c4b0) clock_t2

0x398b,	// (0x0003c4c2) clock_t3_ParamLimits

0x398b,	// (0x0003c4c2) clock_t3

0x399d,	// (0x0003c4d4) clock_t4_ParamLimits

0x399d,	// (0x0003c4d4) clock_t4

0x39af,	// (0x0003c4e6) clock_t5_ParamLimits

0x39af,	// (0x0003c4e6) clock_t5

0x39c4,	// (0x0003c4fb) clock_t6_ParamLimits

0x39c4,	// (0x0003c4fb) clock_t6

0x39d6,	// (0x0003c50d) clock_t7_ParamLimits

0x39d6,	// (0x0003c50d) clock_t7

0x39e8,	// (0x0003c51f) clock_t8_ParamLimits

0x39e8,	// (0x0003c51f) clock_t8

0x39fa,	// (0x0003c531) clock_t9_ParamLimits

0x39fa,	// (0x0003c531) clock_t9

0x0008,

0xf16f,	// (0x00047ca6) clock_t_ParamLimits

0xf16f,	// (0x00047ca6) clock_t

0x1a2f,	// (0x0003a566) popup_clock_analogue_window_cp02

0x1a2f,	// (0x0003a566) popup_clock_digital_window_cp01

0x1a37,	// (0x0003a56e) listscroll_help_pane

0x174d,	// (0x0003a284) phob_pre_status_pane

0x1a41,	// (0x0003a578) grid_qdial_pane

0x174d,	// (0x0003a284) listscroll_mce_pane

0x1a4b,	// (0x0003a582) bg_notes_pane

0x1a55,	// (0x0003a58c) list_notes_pane

0x3a0c,	// (0x0003c543) scroll_pane_cp06

0x1a5f,	// (0x0003a596) bg_calc_paper_pane

0xadf2,	// (0x00043929) list_calc_pane

0x1a77,	// (0x0003a5ae) bg_calc_display_pane

0xae0c,	// (0x00043943) calc_display_pane_t1

0xae21,	// (0x00043958) calc_display_pane_t2

0xae36,	// (0x0004396d) calc_display_pane_t3

0x0002,

0xf182,	// (0x00047cb9) calc_display_pane_t

0x3a17,	// (0x0003c54e) cell_calc_pane_ParamLimits

0x3a17,	// (0x0003c54e) cell_calc_pane

0x1a83,	// (0x0003a5ba) bg_calc_paper_pane_g1

0x1a8f,	// (0x0003a5c6) bg_calc_paper_pane_g2

0x1a9b,	// (0x0003a5d2) bg_calc_paper_pane_g3

0x1aa7,	// (0x0003a5de) bg_calc_paper_pane_g4

0x1ab3,	// (0x0003a5ea) bg_calc_paper_pane_g5

0x3a4a,	// (0x0003c581) bg_calc_paper_pane_g6

0x3a59,	// (0x0003c590) bg_calc_paper_pane_g7

0x3a68,	// (0x0003c59f) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00047cc0) bg_calc_paper_pane_g

0x3a77,	// (0x0003c5ae) calc_bg_paper_pane_g9

0x3a86,	// (0x0003c5bd) list_calc_item_pane_ParamLimits

0x3a86,	// (0x0003c5bd) list_calc_item_pane

0x1abf,	// (0x0003a5f6) list_calc_item_pane_g1

0xae48,	// (0x0004397f) list_calc_item_pane_t1_ParamLimits

0xae48,	// (0x0004397f) list_calc_item_pane_t1

0x3a9a,	// (0x0003c5d1) list_calc_item_pane_t2_ParamLimits

0x3a9a,	// (0x0003c5d1) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00047cd1) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00047cd1) list_calc_item_pane_t

0x1acc,	// (0x0003a603) cell_calc_pane_g1

0x1ad6,	// (0x0003a60d) grid_highlight_pane_cp02

0x1af8,	// (0x0003a62f) bg_calc_display_pane_g1

0xae5a,	// (0x00043991) bg_calc_display_pane_g2

0x1b01,	// (0x0003a638) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00047cdb) bg_calc_display_pane_g

0x3ac8,	// (0x0003c5ff) cell_qdial_pane_ParamLimits

0x3ac8,	// (0x0003c5ff) cell_qdial_pane

0x3ada,	// (0x0003c611) cell_qdial_pane_g1_ParamLimits

0x3ada,	// (0x0003c611) cell_qdial_pane_g1

0x3af0,	// (0x0003c627) cell_qdial_pane_g2_ParamLimits

0x3af0,	// (0x0003c627) cell_qdial_pane_g2

0x1b0a,	// (0x0003a641) cell_qdial_pane_g3_ParamLimits

0x1b0a,	// (0x0003a641) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00047ce2) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00047ce2) cell_qdial_pane_g

0x3b17,	// (0x0003c64e) cell_qdial_pane_t1_ParamLimits

0x3b17,	// (0x0003c64e) cell_qdial_pane_t1

0x3b2f,	// (0x0003c666) cell_qdial_pane_t2_ParamLimits

0x3b2f,	// (0x0003c666) cell_qdial_pane_t2

0x3b42,	// (0x0003c679) cell_qdial_pane_t3_ParamLimits

0x3b42,	// (0x0003c679) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00047ceb) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00047ceb) cell_qdial_pane_t

0x174d,	// (0x0003a284) grid_highlight_pane_cp04

0x1b16,	// (0x0003a64d) thumbnail_qdial_pane_ParamLimits

0x1b16,	// (0x0003a64d) thumbnail_qdial_pane

0x1b72,	// (0x0003a6a9) list_help_pane

0x1b7c,	// (0x0003a6b3) scroll_pane_cp02

0x3b55,	// (0x0003c68c) help_list_pane_t1_ParamLimits

0x3b55,	// (0x0003c68c) help_list_pane_t1

0xae64,	// (0x0004399b) bg_notes_pane_g2

0xae6c,	// (0x000439a3) bg_notes_pane_g3

0xae74,	// (0x000439ab) notes_bg_pane_g1

0xae7c,	// (0x000439b3) notes_bg_pane_g4

0xae84,	// (0x000439bb) notes_bg_pane_g5

0xae8c,	// (0x000439c3) notes_bg_pane_g6

0xae94,	// (0x000439cb) notes_bg_pane_g7

0xae9c,	// (0x000439d3) notes_bg_pane_g8

0xaea4,	// (0x000439db) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00047d09) notes_bg_pane_g

0x3b71,	// (0x0003c6a8) list_notes_text_pane_ParamLimits

0x3b71,	// (0x0003c6a8) list_notes_text_pane

0x1b85,	// (0x0003a6bc) list_notes_text_pane_g1

0x2c4f,	// (0x0003b786) list_notes_text_pane_t1

0x1b9f,	// (0x0003a6d6) listscroll_cale_week_pane

0x3ba0,	// (0x0003c6d7) bg_cale_heading_pane

0x1bae,	// (0x0003a6e5) bg_cale_pane_cp01

0x3bb4,	// (0x0003c6eb) cale_week_corner_pane

0x3bca,	// (0x0003c701) cale_week_day_heading_pane

0x3bde,	// (0x0003c715) cale_week_scroll_pane_g1

0x3bef,	// (0x0003c726) cale_week_scroll_pane_g2

0x3c00,	// (0x0003c737) cale_week_scroll_pane_g3

0x3c11,	// (0x0003c748) cale_week_scroll_pane_g4

0x3c22,	// (0x0003c759) cale_week_scroll_pane_g5

0x3c33,	// (0x0003c76a) cale_week_scroll_pane_g6

0x3c44,	// (0x0003c77b) cale_week_scroll_pane_g7

0x3c55,	// (0x0003c78c) cale_week_scroll_pane_g8

0x3c68,	// (0x0003c79f) cale_week_scroll_pane_g9

0x3c79,	// (0x0003c7b0) cale_week_scroll_pane_g10

0x3c8a,	// (0x0003c7c1) cale_week_scroll_pane_g11

0x3c9b,	// (0x0003c7d2) cale_week_scroll_pane_g12

0x3cac,	// (0x0003c7e3) cale_week_scroll_pane_g13

0x3cbd,	// (0x0003c7f4) cale_week_scroll_pane_g14

0x3cce,	// (0x0003c805) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00047d18) cale_week_scroll_pane_g

0x3cdf,	// (0x0003c816) cale_week_time_pane

0x3cf2,	// (0x0003c829) grid_cale_week_pane

0x3d05,	// (0x0003c83c) scroll_pane_cp08

0x3d1f,	// (0x0003c856) cell_cale_week_pane_ParamLimits

0x3d1f,	// (0x0003c856) cell_cale_week_pane

0x3d5b,	// (0x0003c892) cale_week_day_heading_pane_t1

0x3d85,	// (0x0003c8bc) cale_week_day_heading_pane_t2

0x3daf,	// (0x0003c8e6) cale_week_day_heading_pane_t3

0x3dd9,	// (0x0003c910) cale_week_day_heading_pane_t4

0x3e03,	// (0x0003c93a) cale_week_day_heading_pane_t5

0x3e2d,	// (0x0003c964) cale_week_day_heading_pane_t6

0x3e57,	// (0x0003c98e) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00047d37) cale_week_day_heading_pane_t

0x1bd9,	// (0x0003a710) bg_cale_side_pane

0x3e81,	// (0x0003c9b8) cale_week_time_pane_t1

0x3ead,	// (0x0003c9e4) cale_week_time_pane_t2

0x3ed9,	// (0x0003ca10) cale_week_time_pane_t3

0x3f05,	// (0x0003ca3c) cale_week_time_pane_t4

0x3f31,	// (0x0003ca68) cale_week_time_pane_t5

0x3f5d,	// (0x0003ca94) cale_week_time_pane_t6

0x3f89,	// (0x0003cac0) cale_week_time_pane_t7

0x3fb5,	// (0x0003caec) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00047d46) cale_week_time_pane_t

0x3fe1,	// (0x0003cb18) cell_cale_week_pane_g2

0x3ffa,	// (0x0003cb31) cell_cale_week_pane_g3_ParamLimits

0x3ffa,	// (0x0003cb31) cell_cale_week_pane_g3

0x1be7,	// (0x0003a71e) grid_highlight_pane_cp07

0x1bef,	// (0x0003a726) listscroll_gms_pane

0x1bf9,	// (0x0003a730) grid_gms_pane

0x1c02,	// (0x0003a739) listscroll_gms_pane_g1

0x1c0a,	// (0x0003a741) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00047d57) listscroll_gms_pane_g

0x4012,	// (0x0003cb49) scroll_pane_cp010

0x401d,	// (0x0003cb54) cell_gms_pane_ParamLimits

0x401d,	// (0x0003cb54) cell_gms_pane

0x402d,	// (0x0003cb64) cell_gms_pane_g1

0x1c12,	// (0x0003a749) cell_gms_pane_g2

0x1b85,	// (0x0003a6bc) cell_gms_pane_g3

0x1c1a,	// (0x0003a751) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00047d5c) cell_gms_pane_g

0x1c23,	// (0x0003a75a) grid_highlight_pane_cp09

0x633b,	// (0x0003ee72) phob_pre_status_pane_g1

0x6343,	// (0x0003ee7a) phob_pre_status_pane_g2

0x634b,	// (0x0003ee82) phob_pre_status_pane_g3

0x6353,	// (0x0003ee8a) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x0004815e) phob_pre_status_pane_g

0x6363,	// (0x0003ee9a) phob_pre_status_pane_t1

0x6371,	// (0x0003eea8) phob_pre_status_pane_t2

0x637f,	// (0x0003eeb6) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x00048169) phob_pre_status_pane_t

0x174d,	// (0x0003a284) bg_list_pane_cp05

0x403d,	// (0x0003cb74) grid_vorec_pane

0xaeac,	// (0x000439e3) vorec_t1

0xaeba,	// (0x000439f1) vorec_t2

0xaec8,	// (0x000439ff) vorec_t3

0xaed6,	// (0x00043a0d) vorec_t4

0xaee4,	// (0x00043a1b) vorec_t5

0xaef2,	// (0x00043a29) vorec_t6

0x0006,

0xf22e,	// (0x00047d65) vorec_t

0xaf0e,	// (0x00043a45) wait_bar_pane_cp01

0x4045,	// (0x0003cb7c) cell_vorec_pane_ParamLimits

0x4045,	// (0x0003cb7c) cell_vorec_pane

0x1c2b,	// (0x0003a762) cell_vorec_pane_g1

0x174d,	// (0x0003a284) grid_highlight_pane_cp05

0x406a,	// (0x0003cba1) cams_zoom_pane

0x4079,	// (0x0003cbb0) image_vga_pane

0x4091,	// (0x0003cbc8) main_camera_pane_g1

0x40a1,	// (0x0003cbd8) main_camera_pane_g2

0x40b1,	// (0x0003cbe8) main_camera_pane_g3

0x40c1,	// (0x0003cbf8) main_camera_pane_g4

0x40d1,	// (0x0003cc08) main_camera_pane_g5

0x40e1,	// (0x0003cc18) main_camera_pane_g6

0x40f1,	// (0x0003cc28) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00047d74) main_camera_pane_g

0x4101,	// (0x0003cc38) main_camera_pane_t1

0x4117,	// (0x0003cc4e) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00047d85) main_camera_pane_t

0x4149,	// (0x0003cc80) cams_zoom_pane_cp_ParamLimits

0x4149,	// (0x0003cc80) cams_zoom_pane_cp

0x4171,	// (0x0003cca8) image_cif_pane_ParamLimits

0x4171,	// (0x0003cca8) image_cif_pane

0x41a2,	// (0x0003ccd9) image_subqcif_pane

0x41aa,	// (0x0003cce1) main_video_pane_g1_ParamLimits

0x41aa,	// (0x0003cce1) main_video_pane_g1

0x41ce,	// (0x0003cd05) main_video_pane_g2_ParamLimits

0x41ce,	// (0x0003cd05) main_video_pane_g2

0x4202,	// (0x0003cd39) main_video_pane_g3_ParamLimits

0x4202,	// (0x0003cd39) main_video_pane_g3

0x4230,	// (0x0003cd67) main_video_pane_g4_ParamLimits

0x4230,	// (0x0003cd67) main_video_pane_g4

0x425e,	// (0x0003cd95) main_video_pane_g5_ParamLimits

0x425e,	// (0x0003cd95) main_video_pane_g5

0x1c41,	// (0x0003a778) main_video_pane_g6_ParamLimits

0x1c41,	// (0x0003a778) main_video_pane_g6

0x0006,

0xf253,	// (0x00047d8a) main_video_pane_g_ParamLimits

0xf253,	// (0x00047d8a) main_video_pane_g

0x4285,	// (0x0003cdbc) main_video_pane_t1_ParamLimits

0x4285,	// (0x0003cdbc) main_video_pane_t1

0x1c5b,	// (0x0003a792) cams_zoom_pane_g1

0x1c64,	// (0x0003a79b) cams_zoom_pane_g2

0x1c6d,	// (0x0003a7a4) cams_zoom_pane_g3

0x1c76,	// (0x0003a7ad) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00047d99) cams_zoom_pane_g

0x42e2,	// (0x0003ce19) grid_cams_pane

0x42f7,	// (0x0003ce2e) linegrid_cams_pane

0x4308,	// (0x0003ce3f) cell_cams_pane_ParamLimits

0x4308,	// (0x0003ce3f) cell_cams_pane

0x1c7f,	// (0x0003a7b6) cams_burst_image_pane

0x1c87,	// (0x0003a7be) cell_cams_pane_g1

0x174d,	// (0x0003a284) grid_highlight_pane_cp03

0x1acc,	// (0x0003a603) mp_bg_pane_g1

0x174d,	// (0x0003a284) bg_list_pane_cp03

0xc629,	// (0x00045160) bg_mp_pane

0xc631,	// (0x00045168) grid_mp_pane

0xc639,	// (0x00045170) media_player_g1

0xc641,	// (0x00045178) media_player_t1

0xc64f,	// (0x00045186) media_player_t2

0xc65d,	// (0x00045194) media_player_t3

0xc66b,	// (0x000451a2) media_player_t4

0xc679,	// (0x000451b0) media_player_t5

0xc687,	// (0x000451be) media_player_t6

0xc695,	// (0x000451cc) media_player_t7

0x0006,

0xf611,	// (0x00048148) media_player_t

0xc6a3,	// (0x000451da) wait_bar_pane_cp02

0xf5f6,	// (0x0004812d) main_usb_pane_t

0x6332,	// (0x0003ee69) cell_mp_pane

0x1acc,	// (0x0003a603) cell_mp_pane_g1

0x174d,	// (0x0003a284) grid_highlight_pane_cp06

0x1c8f,	// (0x0003a7c6) grid_skin_colour_pane

0x1c97,	// (0x0003a7ce) list_highlight_pane_cp03

0x4326,	// (0x0003ce5d) skin_g1

0x1c9f,	// (0x0003a7d6) skin_t1

0x1cae,	// (0x0003a7e5) skin_t2

0x0001,

0xf297,	// (0x00047dce) skin_t

0x432e,	// (0x0003ce65) cell_skin_colour_pane_ParamLimits

0x432e,	// (0x0003ce65) cell_skin_colour_pane

0x1cbc,	// (0x0003a7f3) cell_skin_colour_pane_g1

0x4380,	// (0x0003ceb7) call_video_g1_ParamLimits

0x4380,	// (0x0003ceb7) call_video_g1

0x4396,	// (0x0003cecd) call_video_g2_ParamLimits

0x4396,	// (0x0003cecd) call_video_g2

0x0001,

0xf29c,	// (0x00047dd3) call_video_g_ParamLimits

0xf29c,	// (0x00047dd3) call_video_g

0x43cc,	// (0x0003cf03) call_video_uplink_pane_cp1_ParamLimits

0x43cc,	// (0x0003cf03) call_video_uplink_pane_cp1

0x1cd6,	// (0x0003a80d) call_video_uplink_pane_cp2

0x4433,	// (0x0003cf6a) video_down_crop_pane_ParamLimits

0x4433,	// (0x0003cf6a) video_down_crop_pane

0x44db,	// (0x0003d012) video_down_pane_ParamLimits

0x44db,	// (0x0003d012) video_down_pane

0x1cde,	// (0x0003a815) video_down_subqcif_pane_ParamLimits

0x1cde,	// (0x0003a815) video_down_subqcif_pane

0x1cf6,	// (0x0003a82d) video_down_subqcif_pane_cp_ParamLimits

0x1cf6,	// (0x0003a82d) video_down_subqcif_pane_cp

0x1d1a,	// (0x0003a851) im_reading_pane_ParamLimits

0x1d1a,	// (0x0003a851) im_reading_pane

0x456b,	// (0x0003d0a2) im_writing_pane_ParamLimits

0x456b,	// (0x0003d0a2) im_writing_pane

0x4581,	// (0x0003d0b8) im_reading_pane_t1

0x1d34,	// (0x0003a86b) list_im_pane

0x1d45,	// (0x0003a87c) scroll_pane_cp07

0x45b7,	// (0x0003d0ee) im_writing_pane_t1_ParamLimits

0x45b7,	// (0x0003d0ee) im_writing_pane_t1

0x1d5e,	// (0x0003a895) im_writing_pane_t2_ParamLimits

0x1d5e,	// (0x0003a895) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00047ddd) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00047ddd) im_writing_pane_t

0x174d,	// (0x0003a284) input_focus_pane_cp04

0x174d,	// (0x0003a284) input_focus_pane_cp05

0x45cc,	// (0x0003d103) list_im_single_pane_ParamLimits

0x45cc,	// (0x0003d103) list_im_single_pane

0x1d7b,	// (0x0003a8b2) list_single_im_pane_t1

0x62f8,	// (0x0003ee2f) blid_accuracy_pane

0x6300,	// (0x0003ee37) blid_compass_pane

0x6308,	// (0x0003ee3f) main_location_t1

0x6316,	// (0x0003ee4d) main_location_t2

0x6324,	// (0x0003ee5b) main_location_t3

0x0002,

0xf620,	// (0x00048157) main_location_t

0x174d,	// (0x0003a284) aid_levels_location

0x1acc,	// (0x0003a603) blid_accuracy_pane_g1

0x1acc,	// (0x0003a603) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00047e3f) blid_accuracy_pane_g

0x45f1,	// (0x0003d128) wml_content_pane

0x462f,	// (0x0003d166) wml_button_pane_ParamLimits

0x462f,	// (0x0003d166) wml_button_pane

0x4643,	// (0x0003d17a) wml_list_single_large_pane_ParamLimits

0x4643,	// (0x0003d17a) wml_list_single_large_pane

0x4657,	// (0x0003d18e) wml_list_single_medium_pane_ParamLimits

0x4657,	// (0x0003d18e) wml_list_single_medium_pane

0x466c,	// (0x0003d1a3) wml_list_single_small_pane_ParamLimits

0x466c,	// (0x0003d1a3) wml_list_single_small_pane

0x4683,	// (0x0003d1ba) wml_selection_box_pane_ParamLimits

0x4683,	// (0x0003d1ba) wml_selection_box_pane

0x4696,	// (0x0003d1cd) wml_list_single_pane_t1

0x46a5,	// (0x0003d1dc) wml_list_single_medium_pane_t1

0x46b4,	// (0x0003d1eb) wml_list_single_large_pane_t1

0x46c3,	// (0x0003d1fa) input_focus_pane_cp02_ParamLimits

0x46c3,	// (0x0003d1fa) input_focus_pane_cp02

0x46d6,	// (0x0003d20d) wml_selection_box_pane_g1

0x46df,	// (0x0003d216) wml_selection_box_pane_t1_ParamLimits

0x46df,	// (0x0003d216) wml_selection_box_pane_t1

0x19a8,	// (0x0003a4df) bg_wml_button_pane_ParamLimits

0x19a8,	// (0x0003a4df) bg_wml_button_pane

0x46f7,	// (0x0003d22e) wml_button_pane_g1

0x46ff,	// (0x0003d236) wml_button_pane_t1

0x46f7,	// (0x0003d22e) wml_button_bg_pane_g1

0x470f,	// (0x0003d246) wml_button_bg_pane_g2

0x4717,	// (0x0003d24e) wml_button_bg_pane_g3

0x471f,	// (0x0003d256) wml_button_bg_pane_g4

0x4727,	// (0x0003d25e) wml_button_bg_pane_g5

0x472f,	// (0x0003d266) wml_button_bg_pane_g6

0x4737,	// (0x0003d26e) wml_button_bg_pane_g7

0x473f,	// (0x0003d276) wml_button_bg_pane_g8

0x4747,	// (0x0003d27e) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00047de2) wml_button_bg_pane_g

0x474f,	// (0x0003d286) bg_list_pane_cp02

0x4758,	// (0x0003d28f) mce_header_pane_ParamLimits

0x4758,	// (0x0003d28f) mce_header_pane

0x476c,	// (0x0003d2a3) mce_icon_pane

0x476c,	// (0x0003d2a3) mce_image_pane

0x4775,	// (0x0003d2ac) mce_text_pane_ParamLimits

0x4775,	// (0x0003d2ac) mce_text_pane

0x4789,	// (0x0003d2c0) scroll_pane_cp03

0x4789,	// (0x0003d2c0) scroll_pane_cp04

0x4793,	// (0x0003d2ca) scroll_pane_cp05_ParamLimits

0x4793,	// (0x0003d2ca) scroll_pane_cp05

0x479f,	// (0x0003d2d6) mce_header_field_pane_ParamLimits

0x479f,	// (0x0003d2d6) mce_header_field_pane

0x47b6,	// (0x0003d2ed) mce_header_field_pane_2_ParamLimits

0x47b6,	// (0x0003d2ed) mce_header_field_pane_2

0x47cc,	// (0x0003d303) mce_header_field_pane_3

0x47d4,	// (0x0003d30b) list_single_mce_message_pane_ParamLimits

0x47d4,	// (0x0003d30b) list_single_mce_message_pane

0x47e9,	// (0x0003d320) list_single_mce_smart_pane_ParamLimits

0x47e9,	// (0x0003d320) list_single_mce_smart_pane

0x4809,	// (0x0003d340) input_focus_pane_cp03

0x4812,	// (0x0003d349) list_header_data_pane

0x481a,	// (0x0003d351) mce_header_field_pane_t1

0x4828,	// (0x0003d35f) list_single_mce_header_pane_ParamLimits

0x4828,	// (0x0003d35f) list_single_mce_header_pane

0x483c,	// (0x0003d373) list_single_mce_header_pane_t1

0x484b,	// (0x0003d382) list_single_mce_message_pane_g1

0x4854,	// (0x0003d38b) list_single_mce_message_pane_t1

0x4881,	// (0x0003d3b8) bg_cale_heading_pane_cp01_ParamLimits

0x4881,	// (0x0003d3b8) bg_cale_heading_pane_cp01

0x48a4,	// (0x0003d3db) bg_cale_pane_cp02_ParamLimits

0x48a4,	// (0x0003d3db) bg_cale_pane_cp02

0x48c7,	// (0x0003d3fe) cale_month_corner_pane

0x48dd,	// (0x0003d414) cale_month_day_heading_pane_ParamLimits

0x48dd,	// (0x0003d414) cale_month_day_heading_pane

0x4910,	// (0x0003d447) cale_month_pane_g1_ParamLimits

0x4910,	// (0x0003d447) cale_month_pane_g1

0x492c,	// (0x0003d463) cale_month_pane_g2_ParamLimits

0x492c,	// (0x0003d463) cale_month_pane_g2

0x4947,	// (0x0003d47e) cale_month_pane_g3_ParamLimits

0x4947,	// (0x0003d47e) cale_month_pane_g3

0x4973,	// (0x0003d4aa) cale_month_pane_g4_ParamLimits

0x4973,	// (0x0003d4aa) cale_month_pane_g4

0x499f,	// (0x0003d4d6) cale_month_pane_g5_ParamLimits

0x499f,	// (0x0003d4d6) cale_month_pane_g5

0x49cb,	// (0x0003d502) cale_month_pane_g6_ParamLimits

0x49cb,	// (0x0003d502) cale_month_pane_g6

0x49f7,	// (0x0003d52e) cale_month_pane_g7_ParamLimits

0x49f7,	// (0x0003d52e) cale_month_pane_g7

0x4a23,	// (0x0003d55a) cale_month_pane_g8_ParamLimits

0x4a23,	// (0x0003d55a) cale_month_pane_g8

0x4a5f,	// (0x0003d596) cale_month_pane_g9_ParamLimits

0x4a5f,	// (0x0003d596) cale_month_pane_g9

0x4a99,	// (0x0003d5d0) cale_month_pane_g10_ParamLimits

0x4a99,	// (0x0003d5d0) cale_month_pane_g10

0x4ad3,	// (0x0003d60a) cale_month_pane_g11_ParamLimits

0x4ad3,	// (0x0003d60a) cale_month_pane_g11

0x4b0d,	// (0x0003d644) cale_month_pane_g12_ParamLimits

0x4b0d,	// (0x0003d644) cale_month_pane_g12

0x4b47,	// (0x0003d67e) cale_month_pane_g13_ParamLimits

0x4b47,	// (0x0003d67e) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00047df5) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00047df5) cale_month_pane_g

0x4b93,	// (0x0003d6ca) cale_month_week_pane

0x4ba6,	// (0x0003d6dd) grid_cale_month_pane_ParamLimits

0x4ba6,	// (0x0003d6dd) grid_cale_month_pane

0x4bd4,	// (0x0003d70b) cale_month_day_heading_pane_t1

0x4c32,	// (0x0003d769) cale_month_day_heading_pane_t2

0x4c97,	// (0x0003d7ce) cale_month_day_heading_pane_t3

0x4cfc,	// (0x0003d833) cale_month_day_heading_pane_t4

0x4d61,	// (0x0003d898) cale_month_day_heading_pane_t5

0x4dc6,	// (0x0003d8fd) cale_month_day_heading_pane_t6

0x4e2b,	// (0x0003d962) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00047e10) cale_month_day_heading_pane_t

0x1bd9,	// (0x0003a710) bg_cale_side_pane_cp01

0x4e98,	// (0x0003d9cf) cale_month_week_pane_t1

0x4eaf,	// (0x0003d9e6) cale_month_week_pane_t2

0x4ec6,	// (0x0003d9fd) cale_month_week_pane_t3

0x4edd,	// (0x0003da14) cale_month_week_pane_t4

0x4ef4,	// (0x0003da2b) cale_month_week_pane_t5

0x4f0b,	// (0x0003da42) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00047e1f) cale_month_week_pane_t

0x4f22,	// (0x0003da59) cell_cale_month_pane_ParamLimits

0x4f22,	// (0x0003da59) cell_cale_month_pane

0xafe0,	// (0x00043b17) cell_cale_month_pane_g1

0x4fd0,	// (0x0003db07) cell_cale_month_pane_t1_ParamLimits

0x4fd0,	// (0x0003db07) cell_cale_month_pane_t1

0x1be7,	// (0x0003a71e) grid_highlight_pane_cp08

0x1acc,	// (0x0003a603) main_smil_g1

0x4fec,	// (0x0003db23) smil_status_pane

0x4ff5,	// (0x0003db2c) smil_text_pane

0xc509,	// (0x00045040) bg_popup_call3_rect_pane_g8

0xc511,	// (0x00045048) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000480d8) bg_popup_call3_rect_pane_g

0xc7c7,	// (0x000452fe) smil_status_volume_pane_g1

0x5007,	// (0x0003db3e) smil_status_pane_t1

0xec6e,	// (0x000477a5) volume_smil_pane

0x501e,	// (0x0003db55) list_smil_text_pane

0x5028,	// (0x0003db5f) scroll_pane_cp011

0x5033,	// (0x0003db6a) smil_text_list_pane_t1_ParamLimits

0x5033,	// (0x0003db6a) smil_text_list_pane_t1

0xafec,	// (0x00043b23) aid_volume_smil_ParamLimits

0xafec,	// (0x00043b23) aid_volume_smil

0x1acc,	// (0x0003a603) smil_volume_pane_g1

0x1acc,	// (0x0003a603) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00047e3f) smil_volume_pane_g

0x1a77,	// (0x0003a5ae) listscroll_cale_day_pane

0x5071,	// (0x0003dba8) bg_cale_pane

0x5089,	// (0x0003dbc0) list_cale_pane

0x509a,	// (0x0003dbd1) scroll_pane_cp09

0x50ab,	// (0x0003dbe2) cale_bg_pane_g1

0x50b3,	// (0x0003dbea) cale_bg_pane_g2

0x50bb,	// (0x0003dbf2) cale_bg_pane_g3

0x50c3,	// (0x0003dbfa) cale_bg_pane_g4

0x50cb,	// (0x0003dc02) cale_bg_pane_g5

0x50d3,	// (0x0003dc0a) cale_bg_pane_g6

0x50db,	// (0x0003dc12) cale_bg_pane_g7

0x50e3,	// (0x0003dc1a) cale_bg_pane_g8

0x50eb,	// (0x0003dc22) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00047e44) cale_bg_pane_g

0x50f3,	// (0x0003dc2a) list_cale_time_pane_ParamLimits

0x50f3,	// (0x0003dc2a) list_cale_time_pane

0x5108,	// (0x0003dc3f) list_cale_time_pane_g1_ParamLimits

0x5108,	// (0x0003dc3f) list_cale_time_pane_g1

0x5114,	// (0x0003dc4b) list_cale_time_pane_g2_ParamLimits

0x5114,	// (0x0003dc4b) list_cale_time_pane_g2

0x5121,	// (0x0003dc58) list_cale_time_pane_g3_ParamLimits

0x5121,	// (0x0003dc58) list_cale_time_pane_g3

0x512f,	// (0x0003dc66) list_cale_time_pane_g4_ParamLimits

0x512f,	// (0x0003dc66) list_cale_time_pane_g4

0x513d,	// (0x0003dc74) list_cale_time_pane_g5_ParamLimits

0x513d,	// (0x0003dc74) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00047e57) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00047e57) list_cale_time_pane_g

0x5156,	// (0x0003dc8d) list_cale_time_pane_t1_ParamLimits

0x5156,	// (0x0003dc8d) list_cale_time_pane_t1

0x517e,	// (0x0003dcb5) list_cale_time_pane_t2_ParamLimits

0x517e,	// (0x0003dcb5) list_cale_time_pane_t2

0x580d,	// (0x0003e344) aid_blid_cardinal_pane

0x584b,	// (0x0003e382) compass_pane_t4

0x51a6,	// (0x0003dcdd) list_cale_time_pane_t4_ParamLimits

0x51a6,	// (0x0003dcdd) list_cale_time_pane_t4

0x5859,	// (0x0003e390) compass_pane_t5

0x5867,	// (0x0003e39e) compass_pane_t6

0x5875,	// (0x0003e3ac) compass_pane_t7

0xb198,	// (0x00043ccf) navi_pane_cc_t1

0xb33c,	// (0x00043e73) aid_phob_thumbnail_center_pane

0x5daa,	// (0x0003e8e1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00047e64) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00047e64) list_cale_time_pane_t

0x13a6,	// (0x00039edd) bg_popup_window_pane_cp02_ParamLimits

0x13a6,	// (0x00039edd) bg_popup_window_pane_cp02

0x51ce,	// (0x0003dd05) heading_pane_cp01_ParamLimits

0x51ce,	// (0x0003dd05) heading_pane_cp01

0x51da,	// (0x0003dd11) loc_req_pane_ParamLimits

0x51da,	// (0x0003dd11) loc_req_pane

0x51ea,	// (0x0003dd21) loc_type_pane_ParamLimits

0x51ea,	// (0x0003dd21) loc_type_pane

0x51fc,	// (0x0003dd33) loc_type_pane_t1_ParamLimits

0x51fc,	// (0x0003dd33) loc_type_pane_t1

0x520e,	// (0x0003dd45) loc_type_pane_t2_ParamLimits

0x520e,	// (0x0003dd45) loc_type_pane_t2

0x5220,	// (0x0003dd57) loc_type_pane_t3_ParamLimits

0x5220,	// (0x0003dd57) loc_type_pane_t3

0x0002,

0xf334,	// (0x00047e6b) loc_type_pane_t_ParamLimits

0xf334,	// (0x00047e6b) loc_type_pane_t

0x5232,	// (0x0003dd69) list_loc_req_pane

0x523c,	// (0x0003dd73) scroll_pane_cp012

0x5245,	// (0x0003dd7c) list_single_loc_request_popup_menu_pane_ParamLimits

0x5245,	// (0x0003dd7c) list_single_loc_request_popup_menu_pane

0x5252,	// (0x0003dd89) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5252,	// (0x0003dd89) list_single_loc_request_popup_menu_pane_g1

0x525e,	// (0x0003dd95) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x525e,	// (0x0003dd95) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00047e72) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00047e72) list_single_loc_request_popup_menu_pane_g

0x526a,	// (0x0003dda1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x526a,	// (0x0003dda1) list_single_loc_request_popup_menu_pane_t1

0x19a8,	// (0x0003a4df) bg_popup_window_pane_cp03_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_window_pane_cp03

0x5280,	// (0x0003ddb7) heading_loc_req_pane_ParamLimits

0x5280,	// (0x0003ddb7) heading_loc_req_pane

0x528c,	// (0x0003ddc3) popup_dyc_status_message_window_g1_ParamLimits

0x528c,	// (0x0003ddc3) popup_dyc_status_message_window_g1

0x52a0,	// (0x0003ddd7) popup_dyc_status_message_window_t1_ParamLimits

0x52a0,	// (0x0003ddd7) popup_dyc_status_message_window_t1

0x52b5,	// (0x0003ddec) popup_dyc_status_message_window_t2_ParamLimits

0x52b5,	// (0x0003ddec) popup_dyc_status_message_window_t2

0x52ca,	// (0x0003de01) popup_dyc_status_message_window_t3_ParamLimits

0x52ca,	// (0x0003de01) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00047e77) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00047e77) popup_dyc_status_message_window_t

0x174d,	// (0x0003a284) bg_heading_pane_cp01

0x52e6,	// (0x0003de1d) heading_loc_req_pane_g1

0x52ee,	// (0x0003de25) heading_loc_req_pane_g2

0x52f6,	// (0x0003de2d) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00047e7e) heading_loc_req_pane_g

0x52fe,	// (0x0003de35) heading_loc_req_pane_t1

0x5327,	// (0x0003de5e) bg_popup_sub_pane_cp01_ParamLimits

0x5327,	// (0x0003de5e) bg_popup_sub_pane_cp01

0x5335,	// (0x0003de6c) popup_cale_events_window_g1_ParamLimits

0x5335,	// (0x0003de6c) popup_cale_events_window_g1

0x5355,	// (0x0003de8c) popup_cale_events_window_g2_ParamLimits

0x5355,	// (0x0003de8c) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00047eb2) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00047eb2) popup_cale_events_window_g

0x5375,	// (0x0003deac) popup_cale_events_window_t1_ParamLimits

0x5375,	// (0x0003deac) popup_cale_events_window_t1

0x5387,	// (0x0003debe) popup_cale_events_window_t2_ParamLimits

0x5387,	// (0x0003debe) popup_cale_events_window_t2

0x53c5,	// (0x0003defc) popup_cale_events_window_t3_ParamLimits

0x53c5,	// (0x0003defc) popup_cale_events_window_t3

0x53ff,	// (0x0003df36) popup_cale_events_window_t4_ParamLimits

0x53ff,	// (0x0003df36) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00047eb7) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00047eb7) popup_cale_events_window_t

0x5435,	// (0x0003df6c) call_type_pane

0x5445,	// (0x0003df7c) popup_call_status_window_g1

0x5459,	// (0x0003df90) popup_call_status_window_g2

0x546d,	// (0x0003dfa4) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00047ec0) popup_call_status_window_g

0x547d,	// (0x0003dfb4) call_type_pane_g1

0x5486,	// (0x0003dfbd) call_type_pane_g2

0x0001,

0xf390,	// (0x00047ec7) call_type_pane_g

0x174d,	// (0x0003a284) bg_popup_sub_pane_cp02

0x548f,	// (0x0003dfc6) listscroll_popup_wml_pane

0x5497,	// (0x0003dfce) list_wml_pane

0x54a1,	// (0x0003dfd8) scroll_pane_cp013

0x54aa,	// (0x0003dfe1) list_single_graphic_popup_wml_pane_ParamLimits

0x54aa,	// (0x0003dfe1) list_single_graphic_popup_wml_pane

0x1acc,	// (0x0003a603) list_single_graphic_popup_wml_pane_g1

0x54bd,	// (0x0003dff4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00047ecc) list_single_graphic_popup_wml_pane_g

0x54c5,	// (0x0003dffc) list_single_graphic_popup_wml_pane_t1

0x54db,	// (0x0003e012) aid_call_pane

0x19a0,	// (0x0003a4d7) popup_clock_analogue_window_g1

0x19a0,	// (0x0003a4d7) popup_clock_analogue_window_g2

0xb0a8,	// (0x00043bdf) popup_clock_analogue_window_g3

0xb0a8,	// (0x00043bdf) popup_clock_analogue_window_g4

0x1acc,	// (0x0003a603) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00047ed1) popup_clock_analogue_window_g

0xb0b0,	// (0x00043be7) popup_clock_analogue_window_t1

0xb0be,	// (0x00043bf5) clock_digital_number_pane_ParamLimits

0xb0be,	// (0x00043bf5) clock_digital_number_pane

0xb0ca,	// (0x00043c01) clock_digital_number_pane_cp02_ParamLimits

0xb0ca,	// (0x00043c01) clock_digital_number_pane_cp02

0xb0d6,	// (0x00043c0d) clock_digital_number_pane_cp03_ParamLimits

0xb0d6,	// (0x00043c0d) clock_digital_number_pane_cp03

0xb0e2,	// (0x00043c19) clock_digital_number_pane_cp04_ParamLimits

0xb0e2,	// (0x00043c19) clock_digital_number_pane_cp04

0xb0ee,	// (0x00043c25) clock_digital_separator_pane_ParamLimits

0xb0ee,	// (0x00043c25) clock_digital_separator_pane

0xb0fa,	// (0x00043c31) popup_clock_digital_window_t1

0x1acc,	// (0x0003a603) clock_digital_number_pane_g1

0x1acc,	// (0x0003a603) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00047e3f) clock_digital_number_pane_g

0x1acc,	// (0x0003a603) clock_digital_separator_pane_g1

0x1acc,	// (0x0003a603) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00047e3f) clock_digital_separator_pane_g

0x174d,	// (0x0003a284) bg_popup_window_pane_cp04

0x54e3,	// (0x0003e01a) heading_pane_cp03

0x54eb,	// (0x0003e022) listscroll_popup_gms_pane

0x54f3,	// (0x0003e02a) grid_large_graphic_popup_pane

0x54fd,	// (0x0003e034) listscroll_popup_gms_pane_g1

0x5505,	// (0x0003e03c) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00047edc) listscroll_popup_gms_pane_g

0x4627,	// (0x0003d15e) scroll_pane_cp014

0x550d,	// (0x0003e044) cell_large_graphic_popup_pane_ParamLimits

0x550d,	// (0x0003e044) cell_large_graphic_popup_pane

0x5523,	// (0x0003e05a) cell_large_graphic_popup_pane_g1_ParamLimits

0x5523,	// (0x0003e05a) cell_large_graphic_popup_pane_g1

0x552f,	// (0x0003e066) cell_large_graphic_popup_pane_g2_ParamLimits

0x552f,	// (0x0003e066) cell_large_graphic_popup_pane_g2

0x553b,	// (0x0003e072) cell_large_graphic_popup_pane_g3_ParamLimits

0x553b,	// (0x0003e072) cell_large_graphic_popup_pane_g3

0x5548,	// (0x0003e07f) cell_large_graphic_popup_pane_g4_ParamLimits

0x5548,	// (0x0003e07f) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00047ee1) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00047ee1) cell_large_graphic_popup_pane_g

0x5558,	// (0x0003e08f) grid_highlight_pane_cp010

0x1acc,	// (0x0003a603) bg_popup_call_pane_g1

0x5562,	// (0x0003e099) list_single_graphic_popup_conf_pane_ParamLimits

0x5562,	// (0x0003e099) list_single_graphic_popup_conf_pane

0x5575,	// (0x0003e0ac) list_highlight_pane_cp01

0x557e,	// (0x0003e0b5) list_single_graphic_popup_conf_pane_g1

0x5586,	// (0x0003e0bd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00047eea) list_single_graphic_popup_conf_pane_g

0x558e,	// (0x0003e0c5) list_single_graphic_popup_conf_pane_t1

0x559c,	// (0x0003e0d3) linegrid_cams_pane_g1

0x55a5,	// (0x0003e0dc) linegrid_cams_pane_g2

0x1b85,	// (0x0003a6bc) linegrid_cams_pane_g3

0x55ae,	// (0x0003e0e5) linegrid_cams_pane_g4

0x55b7,	// (0x0003e0ee) linegrid_cams_pane_g5

0x55c0,	// (0x0003e0f7) linegrid_cams_pane_g6

0x1c1a,	// (0x0003a751) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00047eef) linegrid_cams_pane_g

0x55c9,	// (0x0003e100) popup_clock_analogue_window

0x55c9,	// (0x0003e100) popup_clock_digital_window

0x174d,	// (0x0003a284) popup_phob_thumbnail_window

0x1acc,	// (0x0003a603) call_video_uplink_pane_g1

0x55d2,	// (0x0003e109) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00047efe) call_video_uplink_pane_g

0x1be7,	// (0x0003a71e) video_uplink_pane

0x55da,	// (0x0003e111) mce_image_pane_g1

0x55e4,	// (0x0003e11b) mce_image_pane_g2

0x55ec,	// (0x0003e123) mce_image_pane_g3

0x55f4,	// (0x0003e12b) mce_image_pane_g4

0x55fc,	// (0x0003e133) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00047f03) mce_image_pane_g

0x5604,	// (0x0003e13b) control_top_pane_stacon_cp01_ParamLimits

0x5604,	// (0x0003e13b) control_top_pane_stacon_cp01

0x5614,	// (0x0003e14b) uni_indicator_pane_stacon_cp01_ParamLimits

0x5614,	// (0x0003e14b) uni_indicator_pane_stacon_cp01

0x5625,	// (0x0003e15c) bg_popup_sub_pane_cp03

0x562f,	// (0x0003e166) chi_dic_find_pane

0x5637,	// (0x0003e16e) listscroll_chi_dic_pane

0x5640,	// (0x0003e177) main_pane_chidic_g1

0x5653,	// (0x0003e18a) chi_dic_find_pane_t1

0x5661,	// (0x0003e198) find_chidic_pane

0x566a,	// (0x0003e1a1) chi_dic_list_pane_ParamLimits

0x566a,	// (0x0003e1a1) chi_dic_list_pane

0x567b,	// (0x0003e1b2) scroll_pane_cp020

0x5683,	// (0x0003e1ba) find_chidic_pane_t1

0x174d,	// (0x0003a284) input_focus_pane_cp06

0x5692,	// (0x0003e1c9) list_chi_dic_pane_ParamLimits

0x5692,	// (0x0003e1c9) list_chi_dic_pane

0x56a4,	// (0x0003e1db) list_chi_dic_pane_t1_ParamLimits

0x56a4,	// (0x0003e1db) list_chi_dic_pane_t1

0x174d,	// (0x0003a284) list_highlight_pane_cp020

0x56b7,	// (0x0003e1ee) bg_cale_heading_pane_g1

0x56bf,	// (0x0003e1f6) bg_cale_heading_pane_g2

0x56c7,	// (0x0003e1fe) bg_cale_heading_pane_g3

0x56cf,	// (0x0003e206) bg_cale_heading_pane_g4

0x56d9,	// (0x0003e210) bg_cale_heading_pane_g5

0x56e3,	// (0x0003e21a) bg_cale_heading_pane_g6

0x56eb,	// (0x0003e222) bg_cale_heading_pane_g7

0x56f3,	// (0x0003e22a) bg_cale_heading_pane_g8

0x56fd,	// (0x0003e234) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00047f0e) bg_cale_heading_pane_g

0x56b7,	// (0x0003e1ee) bg_cale_side_pane_g1

0x5707,	// (0x0003e23e) bg_cale_side_pane_g2

0x570f,	// (0x0003e246) bg_cale_side_pane_g3

0x5717,	// (0x0003e24e) bg_cale_side_pane_g4

0x571f,	// (0x0003e256) bg_cale_side_pane_g5

0x5727,	// (0x0003e25e) bg_cale_side_pane_g6

0x572f,	// (0x0003e266) bg_cale_side_pane_g7

0x5737,	// (0x0003e26e) bg_cale_side_pane_g8

0x573f,	// (0x0003e276) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00047f21) bg_cale_side_pane_g

0x5747,	// (0x0003e27e) popup_call_status_window_ParamLimits

0x5747,	// (0x0003e27e) popup_call_status_window

0x578e,	// (0x0003e2c5) stacon_top_pane

0x5796,	// (0x0003e2cd) status_pane_ParamLimits

0x5796,	// (0x0003e2cd) status_pane

0xb117,	// (0x00043c4e) status_small_pane

0xb11f,	// (0x00043c56) control_pane

0x174d,	// (0x0003a284) stacon_bottom_pane

0xb127,	// (0x00043c5e) list_single_mce_smart_pane_t1_ParamLimits

0xb127,	// (0x00043c5e) list_single_mce_smart_pane_t1

0xb13a,	// (0x00043c71) list_single_mce_smart_pane_t2_ParamLimits

0xb13a,	// (0x00043c71) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00047f34) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00047f34) list_single_mce_smart_pane_t

0x57b0,	// (0x0003e2e7) compass_pane

0x57b9,	// (0x0003e2f0) main_location2_pane_t1

0x57cf,	// (0x0003e306) main_location2_pane_t2

0x57e5,	// (0x0003e31c) main_location2_pane_t3

0x0003,

0xf402,	// (0x00047f39) main_location2_pane_t

0xb162,	// (0x00043c99) compass_pane_g1_ParamLimits

0xb162,	// (0x00043c99) compass_pane_g1

0x582d,	// (0x0003e364) compass_pane_t1

0x583c,	// (0x0003e373) compass_pane_t2

0x0005,

0xf40b,	// (0x00047f42) compass_pane_t

0x5883,	// (0x0003e3ba) text_secondary_cp61

0xb18f,	// (0x00043cc6) navi_pane_cams_g5

0xb1d0,	// (0x00043d07) navi_pane_im_t1

0xb1de,	// (0x00043d15) navi_pane_mp_g1_ParamLimits

0xb1de,	// (0x00043d15) navi_pane_mp_g1

0xb1f2,	// (0x00043d29) navi_pane_mp_g2_ParamLimits

0xb1f2,	// (0x00043d29) navi_pane_mp_g2

0xb1fe,	// (0x00043d35) navi_pane_mp_g3_ParamLimits

0xb1fe,	// (0x00043d35) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00047f56) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00047f56) navi_pane_mp_g

0xb20a,	// (0x00043d41) navi_pane_mp_t1

0xb218,	// (0x00043d4f) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00047f5d) navi_pane_mp_t

0xb285,	// (0x00043dbc) navi_pane_vt_g1

0xb20a,	// (0x00043d41) navi_pane_vt_t1

0xb28d,	// (0x00043dc4) navi_slider_pane

0xb295,	// (0x00043dcc) zooming_pane

0xb29d,	// (0x00043dd4) navi_slider_pane_g1

0xec0d,	// (0x00047744) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00047f64) navi_slider_pane_g

0xb2c1,	// (0x00043df8) aid_levels_zoom

0xb2c9,	// (0x00043e00) zooming_pane_g1

0xb2d1,	// (0x00043e08) zooming_pane_g2

0xb2d1,	// (0x00043e08) zooming_pane_g3

0x0002,

0xf43c,	// (0x00047f73) zooming_pane_g

0xb2d9,	// (0x00043e10) level_10_zoom

0xb2e2,	// (0x00043e19) level_11_zoom

0xb2eb,	// (0x00043e22) level_1_zoom

0xb2f4,	// (0x00043e2b) level_2_zoom

0xb2fd,	// (0x00043e34) level_3_zoom

0xb306,	// (0x00043e3d) level_4_zoom

0xb30f,	// (0x00043e46) level_5_zoom

0xb318,	// (0x00043e4f) level_6_zoom

0xb321,	// (0x00043e58) level_7_zoom

0xb32a,	// (0x00043e61) level_8_zoom

0xb333,	// (0x00043e6a) level_9_zoom

0xb344,	// (0x00043e7b) popup_phob_thumbnail_window_g1

0xb34c,	// (0x00043e83) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00047f7a) popup_phob_thumbnail_window_g

0xc6ab,	// (0x000451e2) level_1_location

0xc6b3,	// (0x000451ea) level_2_location

0xc6bb,	// (0x000451f2) level_3_location

0xc6c3,	// (0x000451fa) level_4_location

0xb295,	// (0x00043dcc) level_5_location

0x590e,	// (0x0003e445) mce_icon_pane_g1

0x5916,	// (0x0003e44d) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00047f7f) mce_icon_pane_g

0x591e,	// (0x0003e455) main_mup_pane_g1_ParamLimits

0x591e,	// (0x0003e455) main_mup_pane_g1

0x5934,	// (0x0003e46b) main_mup_pane_g2_ParamLimits

0x5934,	// (0x0003e46b) main_mup_pane_g2

0x594c,	// (0x0003e483) main_mup_pane_g3_ParamLimits

0x594c,	// (0x0003e483) main_mup_pane_g3

0x5964,	// (0x0003e49b) main_mup_pane_g4_ParamLimits

0x5964,	// (0x0003e49b) main_mup_pane_g4

0x597c,	// (0x0003e4b3) main_mup_pane_g5_ParamLimits

0x597c,	// (0x0003e4b3) main_mup_pane_g5

0x5996,	// (0x0003e4cd) main_mup_pane_g6_ParamLimits

0x5996,	// (0x0003e4cd) main_mup_pane_g6

0x59ae,	// (0x0003e4e5) main_mup_pane_g7_ParamLimits

0x59ae,	// (0x0003e4e5) main_mup_pane_g7

0x59c6,	// (0x0003e4fd) main_mup_pane_g8_ParamLimits

0x59c6,	// (0x0003e4fd) main_mup_pane_g8

0x59de,	// (0x0003e515) main_mup_pane_g9_ParamLimits

0x59de,	// (0x0003e515) main_mup_pane_g9

0x59f2,	// (0x0003e529) main_mup_pane_g10_ParamLimits

0x59f2,	// (0x0003e529) main_mup_pane_g10

0x5a06,	// (0x0003e53d) main_mup_pane_g11_ParamLimits

0x5a06,	// (0x0003e53d) main_mup_pane_g11

0x5a18,	// (0x0003e54f) main_mup_pane_g12_ParamLimits

0x5a18,	// (0x0003e54f) main_mup_pane_g12

0x5a2c,	// (0x0003e563) main_mup_pane_g13_ParamLimits

0x5a2c,	// (0x0003e563) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00047f84) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00047f84) main_mup_pane_g

0x5a3e,	// (0x0003e575) main_mup_pane_t1_ParamLimits

0x5a3e,	// (0x0003e575) main_mup_pane_t1

0x5a58,	// (0x0003e58f) main_mup_pane_t2_ParamLimits

0x5a58,	// (0x0003e58f) main_mup_pane_t2

0x5a70,	// (0x0003e5a7) main_mup_pane_t3_ParamLimits

0x5a70,	// (0x0003e5a7) main_mup_pane_t3

0x5a88,	// (0x0003e5bf) main_mup_pane_t4_ParamLimits

0x5a88,	// (0x0003e5bf) main_mup_pane_t4

0x5aa6,	// (0x0003e5dd) main_mup_pane_t5_ParamLimits

0x5aa6,	// (0x0003e5dd) main_mup_pane_t5

0x5abb,	// (0x0003e5f2) main_mup_pane_t6_ParamLimits

0x5abb,	// (0x0003e5f2) main_mup_pane_t6

0x0005,

0xf468,	// (0x00047f9f) main_mup_pane_t_ParamLimits

0xf468,	// (0x00047f9f) main_mup_pane_t

0x5acd,	// (0x0003e604) mup_progress_pane_ParamLimits

0x5acd,	// (0x0003e604) mup_progress_pane

0x5ad9,	// (0x0003e610) mup_visualizer_pane_ParamLimits

0x5ad9,	// (0x0003e610) mup_visualizer_pane

0x5b01,	// (0x0003e638) mup_volume_pane_ParamLimits

0x5b01,	// (0x0003e638) mup_volume_pane

0xb354,	// (0x00043e8b) mup_visualizer_pane_g1_ParamLimits

0xb354,	// (0x00043e8b) mup_visualizer_pane_g1

0xb354,	// (0x00043e8b) mup_visualizer_pane_g2_ParamLimits

0xb354,	// (0x00043e8b) mup_visualizer_pane_g2

0xb162,	// (0x00043c99) mup_visualizer_pane_g3_ParamLimits

0xb162,	// (0x00043c99) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00047fac) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00047fac) mup_visualizer_pane_g

0x1acc,	// (0x0003a603) mup_volume_pane_g1

0xb36a,	// (0x00043ea1) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00047fb3) mup_volume_pane_g

0x1acc,	// (0x0003a603) mup_progress_pane_g1

0xb373,	// (0x00043eaa) mup_progress_pane_g2

0xb37c,	// (0x00043eb3) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00047fb8) mup_progress_pane_g

0x174d,	// (0x0003a284) bg_popup_window_pane_cp05

0xb385,	// (0x00043ebc) heading_pane_cp02_ParamLimits

0xb385,	// (0x00043ebc) heading_pane_cp02

0xb39f,	// (0x00043ed6) list_popup_blid_pane

0xb3a7,	// (0x00043ede) list_blid_sat_info_pane_ParamLimits

0xb3a7,	// (0x00043ede) list_blid_sat_info_pane

0xb3ba,	// (0x00043ef1) list_blid_sat_info_pane_g1

0xb3c2,	// (0x00043ef9) list_blid_sat_info_pane_t1

0x5bf1,	// (0x0003e728) mup_equalizer_pane_ParamLimits

0x5bf1,	// (0x0003e728) mup_equalizer_pane

0x5c0a,	// (0x0003e741) mup_equalizer_pane_cp1_ParamLimits

0x5c0a,	// (0x0003e741) mup_equalizer_pane_cp1

0x5c23,	// (0x0003e75a) mup_equalizer_pane_cp2_ParamLimits

0x5c23,	// (0x0003e75a) mup_equalizer_pane_cp2

0x5c3c,	// (0x0003e773) mup_equalizer_pane_cp3_ParamLimits

0x5c3c,	// (0x0003e773) mup_equalizer_pane_cp3

0x5c55,	// (0x0003e78c) mup_equalizer_pane_cp4_ParamLimits

0x5c55,	// (0x0003e78c) mup_equalizer_pane_cp4

0x5c6e,	// (0x0003e7a5) mup_equalizer_pane_cp5

0x5c80,	// (0x0003e7b7) mup_equalizer_pane_cp6

0x5c92,	// (0x0003e7c9) mup_equalizer_pane_cp7

0xc589,	// (0x000450c0) bg_popup_call_poc_act_pane_g9

0xc591,	// (0x000450c8) bg_popup_call_poc_act_pane_g10

0xc599,	// (0x000450d0) bg_popup_call_poc_act_pane_g11

0x000a,

0x19a8,	// (0x0003a4df) mup_scale_pane

0x1acc,	// (0x0003a603) mup_scale_pane_g1

0xb3d0,	// (0x00043f07) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00047fd4) mup_scale_pane_g

0xb3f4,	// (0x00043f2b) msg_data_pane

0xb3fc,	// (0x00043f33) scroll_pane_cp017

0x2d07,	// (0x0003b83e) bg_list_pane_cp04_ParamLimits

0x2d07,	// (0x0003b83e) bg_list_pane_cp04

0xb404,	// (0x00043f3b) msg_data_pane_g1

0x55e4,	// (0x0003e11b) msg_data_pane_g2

0x55ec,	// (0x0003e123) msg_data_pane_g3

0x5cb8,	// (0x0003e7ef) msg_data_pane_g4

0x55fc,	// (0x0003e133) msg_data_pane_g5

0x590e,	// (0x0003e445) msg_data_pane_g6

0x5cc0,	// (0x0003e7f7) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00047fe3) msg_data_pane_g

0x2d27,	// (0x0003b85e) msg_text_pane_ParamLimits

0x2d27,	// (0x0003b85e) msg_text_pane

0x5cc8,	// (0x0003e7ff) qrid_highlight_pane_cp011_ParamLimits

0x5cc8,	// (0x0003e7ff) qrid_highlight_pane_cp011

0x174d,	// (0x0003a284) msg_body_pane

0x174d,	// (0x0003a284) msg_header_pane

0xb415,	// (0x00043f4c) input_focus_pane_cp07

0x2d58,	// (0x0003b88f) msg_header_pane_t1_ParamLimits

0x2d58,	// (0x0003b88f) msg_header_pane_t1

0xb42a,	// (0x00043f61) msg_header_pane_t2_ParamLimits

0xb42a,	// (0x00043f61) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00047ff7) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00047ff7) msg_header_pane_t

0xb43c,	// (0x00043f73) msg_body_pane_g1

0x2d6a,	// (0x0003b8a1) msg_body_pane_t1_ParamLimits

0x2d6a,	// (0x0003b8a1) msg_body_pane_t1

0xb444,	// (0x00043f7b) msg_body_pane_t2_ParamLimits

0xb444,	// (0x00043f7b) msg_body_pane_t2

0xb456,	// (0x00043f8d) msg_body_pane_t3_ParamLimits

0xb456,	// (0x00043f8d) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00047ffc) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00047ffc) msg_body_pane_t

0x5d14,	// (0x0003e84b) main_viewer_pane_g1_ParamLimits

0x5d14,	// (0x0003e84b) main_viewer_pane_g1

0x5d20,	// (0x0003e857) main_viewer_pane_g2_ParamLimits

0x5d20,	// (0x0003e857) main_viewer_pane_g2

0x5d2c,	// (0x0003e863) main_viewer_pane_g3_ParamLimits

0x5d2c,	// (0x0003e863) main_viewer_pane_g3

0x5d3b,	// (0x0003e872) main_viewer_pane_g4_ParamLimits

0x5d3b,	// (0x0003e872) main_viewer_pane_g4

0xec37,	// (0x0004776e) main_viewer_pane_g5_ParamLimits

0xec37,	// (0x0004776e) main_viewer_pane_g5

0xec37,	// (0x0004776e) main_viewer_pane_g7_ParamLimits

0xec37,	// (0x0004776e) main_viewer_pane_g7

0xec49,	// (0x00047780) main_viewer_pane_g8_ParamLimits

0xec49,	// (0x00047780) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0004800c) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0004800c) main_viewer_pane_g

0xb468,	// (0x00043f9f) viewer_content_pane_ParamLimits

0xb468,	// (0x00043f9f) viewer_content_pane

0x5d6f,	// (0x0003e8a6) main_postcard_pane_g1_ParamLimits

0x5d6f,	// (0x0003e8a6) main_postcard_pane_g1

0x5d83,	// (0x0003e8ba) main_postcard_pane_g2_ParamLimits

0x5d83,	// (0x0003e8ba) main_postcard_pane_g2

0x5d97,	// (0x0003e8ce) main_postcard_pane_g3_ParamLimits

0x5d97,	// (0x0003e8ce) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0004801d) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0004801d) main_postcard_pane_g

0x5daa,	// (0x0003e8e1) main_postcard_pane_g4

0xc7da,	// (0x00045311) smil_status_volume_pane_g2

0x5de5,	// (0x0003e91c) postcard_pane_ParamLimits

0x5de5,	// (0x0003e91c) postcard_pane

0xb476,	// (0x00043fad) postcard_pane_g1_ParamLimits

0xb476,	// (0x00043fad) postcard_pane_g1

0x5e25,	// (0x0003e95c) postcard_pane_g2_ParamLimits

0x5e25,	// (0x0003e95c) postcard_pane_g2

0x5e31,	// (0x0003e968) postcard_pane_g3_ParamLimits

0x5e31,	// (0x0003e968) postcard_pane_g3

0xb484,	// (0x00043fbb) postcard_pane_g4_ParamLimits

0xb484,	// (0x00043fbb) postcard_pane_g4

0x5e3d,	// (0x0003e974) postcard_pane_g5_ParamLimits

0x5e3d,	// (0x0003e974) postcard_pane_g5

0x5e52,	// (0x0003e989) postcard_pane_g6_ParamLimits

0x5e52,	// (0x0003e989) postcard_pane_g6

0xb476,	// (0x00043fad) postcard_pane_g7_ParamLimits

0xb476,	// (0x00043fad) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0004802a) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0004802a) postcard_pane_g

0x5e66,	// (0x0003e99d) main_mp2_pane_g1_ParamLimits

0x5e66,	// (0x0003e99d) main_mp2_pane_g1

0x5e72,	// (0x0003e9a9) main_mp2_pane_g2_ParamLimits

0x5e72,	// (0x0003e9a9) main_mp2_pane_g2

0x5e7e,	// (0x0003e9b5) main_mp2_pane_g3_ParamLimits

0x5e7e,	// (0x0003e9b5) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00048039) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00048039) main_mp2_pane_g

0x5e8a,	// (0x0003e9c1) main_mp2_pane_t1_ParamLimits

0x5e8a,	// (0x0003e9c1) main_mp2_pane_t1

0x5e9f,	// (0x0003e9d6) main_mp2_pane_t2_ParamLimits

0x5e9f,	// (0x0003e9d6) main_mp2_pane_t2

0x5eb1,	// (0x0003e9e8) main_mp2_pane_t3_ParamLimits

0x5eb1,	// (0x0003e9e8) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00048040) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00048040) main_mp2_pane_t

0xb492,	// (0x00043fc9) pec_content_pane_ParamLimits

0xb492,	// (0x00043fc9) pec_content_pane

0x4627,	// (0x0003d15e) scroll_pane_cp015

0xb4a4,	// (0x00043fdb) pec_attribute_pane_ParamLimits

0xb4a4,	// (0x00043fdb) pec_attribute_pane

0x5ec3,	// (0x0003e9fa) pec_content_pane_g1_ParamLimits

0x5ec3,	// (0x0003e9fa) pec_content_pane_g1

0xb4b4,	// (0x00043feb) pec_content_pane_t1_ParamLimits

0xb4b4,	// (0x00043feb) pec_content_pane_t1

0xb4c6,	// (0x00043ffd) pec_content_pane_t2_ParamLimits

0xb4c6,	// (0x00043ffd) pec_content_pane_t2

0x0001,

0xf510,	// (0x00048047) pec_content_pane_t_ParamLimits

0xf510,	// (0x00048047) pec_content_pane_t

0x5ecf,	// (0x0003ea06) list_single_graphic_pane_cp01_ParamLimits

0x5ecf,	// (0x0003ea06) list_single_graphic_pane_cp01

0x19a8,	// (0x0003a4df) bg_popup_sub_pane_cp04

0xb4d8,	// (0x0004400f) popup_mup_playback_window_g1

0xb4e4,	// (0x0004401b) popup_mup_playback_window_t1

0xb4f9,	// (0x00044030) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0004804c) popup_mup_playback_window_t

0xb530,	// (0x00044067) main_image_pane_g1_ParamLimits

0xb530,	// (0x00044067) main_image_pane_g1

0xb573,	// (0x000440aa) scroll_pane_cp018_ParamLimits

0xb573,	// (0x000440aa) scroll_pane_cp018

0xb58b,	// (0x000440c2) scroll_pane_cp016_ParamLimits

0xb58b,	// (0x000440c2) scroll_pane_cp016

0x5f9a,	// (0x0003ead1) smil2_image_pane_ParamLimits

0x5f9a,	// (0x0003ead1) smil2_image_pane

0x5fc2,	// (0x0003eaf9) smil2_root_pane_ParamLimits

0x5fc2,	// (0x0003eaf9) smil2_root_pane

0x5ffa,	// (0x0003eb31) smil2_text_pane_ParamLimits

0x5ffa,	// (0x0003eb31) smil2_text_pane

0x174d,	// (0x0003a284) bg_list_pane_cp06

0xb5c7,	// (0x000440fe) grid_radio_pane

0x174d,	// (0x0003a284) bg_popup_window_pane_cp06

0xb5cf,	// (0x00044106) main_fmradio_pane_t1

0x54e3,	// (0x0003e01a) heading_pane_cp04

0xb5dd,	// (0x00044114) main_fmradio_pane_t2

0xc5e1,	// (0x00045118) popup_cale_lunar_info_window_g1

0xb5eb,	// (0x00044122) main_fmradio_pane_t3

0xc5e9,	// (0x00045120) popup_cale_lunar_info_window_g2

0xb5f9,	// (0x00044130) main_fmradio_pane_t4

0x0001,

0xb607,	// (0x0004413e) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0004813a) popup_cale_lunar_info_window_g

0xf52a,	// (0x00048061) main_fmradio_pane_t

0xb615,	// (0x0004414c) wait_bar_pane_cp03

0xb61d,	// (0x00044154) cell_fmradio_pane_ParamLimits

0xb61d,	// (0x00044154) cell_fmradio_pane

0xb476,	// (0x00043fad) cell_fmradio_pane_g1_ParamLimits

0xb476,	// (0x00043fad) cell_fmradio_pane_g1

0x174d,	// (0x0003a284) grid_highlight_pane_cp011

0xb630,	// (0x00044167) poc_content_pane_ParamLimits

0xb630,	// (0x00044167) poc_content_pane

0xb643,	// (0x0004417a) scroll_pane_cp019

0x6066,	// (0x0003eb9d) popup_call_poc_act_window_ParamLimits

0x6066,	// (0x0003eb9d) popup_call_poc_act_window

0x6086,	// (0x0003ebbd) popup_call_poc_inact_window_ParamLimits

0x6086,	// (0x0003ebbd) popup_call_poc_inact_window

0xf5c7,	// (0x000480fe) bg_popup_call_poc_act_pane_g

0xc5a1,	// (0x000450d8) bg_popup_call_poc_inact_pane_g1

0xc5a9,	// (0x000450e0) bg_popup_call_poc_inact_pane_g2

0xb64b,	// (0x00044182) popup_call_poc_act_window_g2

0xc5b1,	// (0x000450e8) bg_popup_call_poc_inact_pane_g3

0xc531,	// (0x00045068) bg_popup_call_poc_inact_pane_g4

0xc5b9,	// (0x000450f0) bg_popup_call_poc_inact_pane_g5

0xb653,	// (0x0004418a) popup_call_poc_act_window_t1_ParamLimits

0xb653,	// (0x0004418a) popup_call_poc_act_window_t1

0xb67b,	// (0x000441b2) popup_call_poc_act_window_t2_ParamLimits

0xb67b,	// (0x000441b2) popup_call_poc_act_window_t2

0xb6a3,	// (0x000441da) popup_call_poc_act_window_t3_ParamLimits

0xb6a3,	// (0x000441da) popup_call_poc_act_window_t3

0xb6cb,	// (0x00044202) popup_call_poc_act_window_t4_ParamLimits

0xb6cb,	// (0x00044202) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0004806c) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0004806c) popup_call_poc_act_window_t

0xc5c1,	// (0x000450f8) bg_popup_call_poc_inact_pane_g6

0xc5c9,	// (0x00045100) bg_popup_call_poc_inact_pane_g7

0xc5d1,	// (0x00045108) bg_popup_call_poc_inact_pane_g8

0xb6dd,	// (0x00044214) popup_call_poc_inact_window_g2

0xc5d9,	// (0x00045110) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x00048115) bg_popup_call_poc_inact_pane_g

0xb6e5,	// (0x0004421c) popup_call_poc_inact_window_t1_ParamLimits

0xb6e5,	// (0x0004421c) popup_call_poc_inact_window_t1

0xb6fa,	// (0x00044231) popup_call_poc_inact_window_t2_ParamLimits

0xb6fa,	// (0x00044231) popup_call_poc_inact_window_t2

0xb70f,	// (0x00044246) popup_call_poc_inact_window_t3_ParamLimits

0xb70f,	// (0x00044246) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00048075) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00048075) popup_call_poc_inact_window_t

0xc74d,	// (0x00045284) context_pane_ParamLimits

0x6798,	// (0x0003f2cf) signal_pane_ParamLimits

0xb295,	// (0x00043dcc) main_call2_pane

0xc73b,	// (0x00045272) popup_phob_thumbnail2_window_ParamLimits

0xc73b,	// (0x00045272) popup_phob_thumbnail2_window

0xec1f,	// (0x00047756) aid_hotspot_pointer_arrow_pane

0xec27,	// (0x0004775e) aid_hotspot_pointer_hand_pane

0x635b,	// (0x0003ee92) phob_pre_status_pane_g5

0x406a,	// (0x0003cba1) cams_zoom_pane_ParamLimits

0x4079,	// (0x0003cbb0) image_vga_pane_ParamLimits

0x4091,	// (0x0003cbc8) main_camera_pane_g1_ParamLimits

0x40a1,	// (0x0003cbd8) main_camera_pane_g2_ParamLimits

0x40b1,	// (0x0003cbe8) main_camera_pane_g3_ParamLimits

0x40c1,	// (0x0003cbf8) main_camera_pane_g4_ParamLimits

0x40d1,	// (0x0003cc08) main_camera_pane_g5_ParamLimits

0x40e1,	// (0x0003cc18) main_camera_pane_g6_ParamLimits

0x40f1,	// (0x0003cc28) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00047d74) main_camera_pane_g_ParamLimits

0x4101,	// (0x0003cc38) main_camera_pane_t1_ParamLimits

0x4117,	// (0x0003cc4e) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00047d85) main_camera_pane_t_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_preview_window_pane_cp01_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_preview_window_pane_cp01

0xb724,	// (0x0004425b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb724,	// (0x0004425b) popup_phob_thumbnail2_window_g1

0x174d,	// (0x0003a284) call2_cli_visual_pane

0x60b2,	// (0x0003ebe9) popup_call2_audio_conf_window_ParamLimits

0x60b2,	// (0x0003ebe9) popup_call2_audio_conf_window

0x60d0,	// (0x0003ec07) popup_call2_audio_first_window_ParamLimits

0x60d0,	// (0x0003ec07) popup_call2_audio_first_window

0x6146,	// (0x0003ec7d) popup_call2_audio_in_window_ParamLimits

0x6146,	// (0x0003ec7d) popup_call2_audio_in_window

0x617a,	// (0x0003ecb1) popup_call2_audio_out_window_ParamLimits

0x617a,	// (0x0003ecb1) popup_call2_audio_out_window

0x61cc,	// (0x0003ed03) popup_call2_audio_second_window_ParamLimits

0x61cc,	// (0x0003ed03) popup_call2_audio_second_window

0x621e,	// (0x0003ed55) popup_call2_audio_wait_window_ParamLimits

0x621e,	// (0x0003ed55) popup_call2_audio_wait_window

0x174d,	// (0x0003a284) bg_popup_call2_act_pane_cp03

0x198a,	// (0x0003a4c1) list_conf_pane_cp

0xb730,	// (0x00044267) popup_call2_audio_conf_window_t1

0x5562,	// (0x0003e099) list_single_graphic_popup_conf2_pane_ParamLimits

0x5562,	// (0x0003e099) list_single_graphic_popup_conf2_pane

0x5575,	// (0x0003e0ac) list_highlight_pane_cp04

0xb73e,	// (0x00044275) list_single_graphic_popup_conf2_pane_g1

0x5586,	// (0x0003e0bd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0004807c) list_single_graphic_popup_conf2_pane_g

0xb746,	// (0x0004427d) list_single_graphic_popup_conf2_pane_t1

0xb754,	// (0x0004428b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb754,	// (0x0004428b) bg_popup_call2_act_pane_cp01

0xb7de,	// (0x00044315) call_type_pane_cp05_ParamLimits

0xb7de,	// (0x00044315) call_type_pane_cp05

0xb832,	// (0x00044369) popup_call2_audio_second_window_g1_ParamLimits

0xb832,	// (0x00044369) popup_call2_audio_second_window_g1

0xb886,	// (0x000443bd) popup_call2_audio_second_window_g2_ParamLimits

0xb886,	// (0x000443bd) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00048081) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00048081) popup_call2_audio_second_window_g

0xb8eb,	// (0x00044422) popup_call2_audio_second_window_t1_ParamLimits

0xb8eb,	// (0x00044422) popup_call2_audio_second_window_t1

0xb9a6,	// (0x000444dd) popup_call2_audio_second_window_t2_ParamLimits

0xb9a6,	// (0x000444dd) popup_call2_audio_second_window_t2

0xb9f9,	// (0x00044530) popup_call2_audio_second_window_t3_ParamLimits

0xb9f9,	// (0x00044530) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00048088) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00048088) popup_call2_audio_second_window_t

0x174d,	// (0x0003a284) bg_popup_call2_in_pane_cp02

0x1757,	// (0x0003a28e) call_type_pane_cp04

0x175f,	// (0x0003a296) popup_call2_audio_wait_window_g1

0x1767,	// (0x0003a29e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00047c61) popup_call2_audio_wait_window_g

0x176f,	// (0x0003a2a6) popup_call2_audio_wait_window_t3

0xbaec,	// (0x00044623) bg_popup_call2_act_pane_ParamLimits

0xbaec,	// (0x00044623) bg_popup_call2_act_pane

0xbbac,	// (0x000446e3) call_type_pane_cp03_ParamLimits

0xbbac,	// (0x000446e3) call_type_pane_cp03

0xbc10,	// (0x00044747) popup_call2_audio_first_window_g1_ParamLimits

0xbc10,	// (0x00044747) popup_call2_audio_first_window_g1

0xbc80,	// (0x000447b7) popup_call2_audio_first_window_g2_ParamLimits

0xbc80,	// (0x000447b7) popup_call2_audio_first_window_g2

0xb354,	// (0x00043e8b) popup_call2_audio_first_window_g3_ParamLimits

0xb354,	// (0x00043e8b) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00048091) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00048091) popup_call2_audio_first_window_g

0xbd5e,	// (0x00044895) popup_call2_audio_first_window_t1_ParamLimits

0xbd5e,	// (0x00044895) popup_call2_audio_first_window_t1

0xbe61,	// (0x00044998) popup_call2_audio_first_window_t4_ParamLimits

0xbe61,	// (0x00044998) popup_call2_audio_first_window_t4

0xbf44,	// (0x00044a7b) popup_call2_audio_first_window_t5_ParamLimits

0xbf44,	// (0x00044a7b) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0004809c) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0004809c) popup_call2_audio_first_window_t

0x19a0,	// (0x0003a4d7) bg_popup_call2_act_pane_g1

0xc5f1,	// (0x00045128) popup_cale_lunar_info_window_t1

0xc5ff,	// (0x00045136) popup_cale_lunar_info_window_t2

0xc60d,	// (0x00045144) popup_cale_lunar_info_window_t3

0x174d,	// (0x0003a284) bg_popup_call2_bubble_pane

0xc045,	// (0x00044b7c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc045,	// (0x00044b7c) bg_popup_call2_in_pane_cp01

0x1429,	// (0x00039f60) call_type_pane_cp02

0xc08d,	// (0x00044bc4) popup_call2_audio_out_window_g1_ParamLimits

0xc08d,	// (0x00044bc4) popup_call2_audio_out_window_g1

0xc0b9,	// (0x00044bf0) popup_call2_audio_out_window_g2_ParamLimits

0xc0b9,	// (0x00044bf0) popup_call2_audio_out_window_g2

0xc0e1,	// (0x00044c18) popup_call2_audio_out_window_g3_ParamLimits

0xc0e1,	// (0x00044c18) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000480a5) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000480a5) popup_call2_audio_out_window_g

0xc11c,	// (0x00044c53) popup_call2_audio_out_window_t1_ParamLimits

0xc11c,	// (0x00044c53) popup_call2_audio_out_window_t1

0xc17b,	// (0x00044cb2) popup_call2_audio_out_window_t2_ParamLimits

0xc17b,	// (0x00044cb2) popup_call2_audio_out_window_t2

0xc1cf,	// (0x00044d06) popup_call2_audio_out_window_t3_ParamLimits

0xc1cf,	// (0x00044d06) popup_call2_audio_out_window_t3

0xc1e5,	// (0x00044d1c) popup_call2_audio_out_window_t4_ParamLimits

0xc1e5,	// (0x00044d1c) popup_call2_audio_out_window_t4

0xc1fb,	// (0x00044d32) popup_call2_audio_out_window_t5_ParamLimits

0xc1fb,	// (0x00044d32) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000480ae) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000480ae) popup_call2_audio_out_window_t

0xc25f,	// (0x00044d96) bg_popup_call2_in_pane_ParamLimits

0xc25f,	// (0x00044d96) bg_popup_call2_in_pane

0xc2bb,	// (0x00044df2) popup_call2_audio_in_window_g1_ParamLimits

0xc2bb,	// (0x00044df2) popup_call2_audio_in_window_g1

0xc2f3,	// (0x00044e2a) popup_call2_audio_in_window_g2_ParamLimits

0xc2f3,	// (0x00044e2a) popup_call2_audio_in_window_g2

0xc32b,	// (0x00044e62) popup_call2_audio_in_window_g3_ParamLimits

0xc32b,	// (0x00044e62) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000480bb) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000480bb) popup_call2_audio_in_window_g

0xc383,	// (0x00044eba) popup_call2_audio_in_window_t1_ParamLimits

0xc383,	// (0x00044eba) popup_call2_audio_in_window_t1

0xc403,	// (0x00044f3a) popup_call2_audio_in_window_t2_ParamLimits

0xc403,	// (0x00044f3a) popup_call2_audio_in_window_t2

0xc483,	// (0x00044fba) popup_call2_audio_in_window_t3_ParamLimits

0xc483,	// (0x00044fba) popup_call2_audio_in_window_t3

0xc49d,	// (0x00044fd4) popup_call2_audio_in_window_t4_ParamLimits

0xc49d,	// (0x00044fd4) popup_call2_audio_in_window_t4

0xc4af,	// (0x00044fe6) popup_call2_audio_in_window_t5_ParamLimits

0xc4af,	// (0x00044fe6) popup_call2_audio_in_window_t5

0xc4c4,	// (0x00044ffb) popup_call2_audio_in_window_t6_ParamLimits

0xc4c4,	// (0x00044ffb) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000480c4) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000480c4) popup_call2_audio_in_window_t

0x19a0,	// (0x0003a4d7) bg_popup_call2_in_pane_g1

0xc61b,	// (0x00045152) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x0004813f) popup_cale_lunar_info_window_t

0x19a8,	// (0x0003a4df) bg_popup_call2_rect_pane_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_call2_rect_pane

0x174d,	// (0x0003a284) call2_cli_visual_graphic_pane

0x174d,	// (0x0003a284) call2_cli_visual_text_pane

0xec61,	// (0x00047798) smil_status_volume_pane_g3

0x0002,

0x1acc,	// (0x0003a603) call2_cli_visual_graphic_pane_g1

0x1acc,	// (0x0003a603) call2_cli_visual_graphic_pane_g2

0x1acc,	// (0x0003a603) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x000480d1) call2_cli_visual_graphic_pane_g

0xc4d9,	// (0x00045010) bg_popup_call2_rect_pane_g1

0x1b6a,	// (0x0003a6a1) bg_popup_call2_rect_pane_g2

0xc4e1,	// (0x00045018) bg_popup_call2_rect_pane_g3

0xc4e9,	// (0x00045020) bg_popup_call2_rect_pane_g4

0xc4f1,	// (0x00045028) bg_popup_call2_rect_pane_g5

0xc4f9,	// (0x00045030) bg_popup_call2_rect_pane_g6

0xc501,	// (0x00045038) bg_popup_call2_rect_pane_g7

0xc509,	// (0x00045040) bg_popup_call2_rect_pane_g8

0xc511,	// (0x00045048) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000480d8) bg_popup_call2_rect_pane_g

0xc519,	// (0x00045050) bg_popup_call2_bubble_pane_g1

0xc521,	// (0x00045058) bg_popup_call2_bubble_pane_g2

0xc529,	// (0x00045060) bg_popup_call2_bubble_pane_g3

0xc531,	// (0x00045068) bg_popup_call2_bubble_pane_g4

0xc539,	// (0x00045070) bg_popup_call2_bubble_pane_g5

0xc541,	// (0x00045078) bg_popup_call2_bubble_pane_g6

0xc549,	// (0x00045080) bg_popup_call2_bubble_pane_g7

0xc551,	// (0x00045088) bg_popup_call2_bubble_pane_g8

0xc559,	// (0x00045090) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000480eb) bg_popup_call2_bubble_pane_g

0x3b8d,	// (0x0003c6c4) aid_cale_week_size_cell_pane

0x412d,	// (0x0003cc64) aid_cams_cif_uncrop_pane_ParamLimits

0x412d,	// (0x0003cc64) aid_cams_cif_uncrop_pane

0x42ce,	// (0x0003ce05) aid_cams_size_cell_ParamLimits

0x42ce,	// (0x0003ce05) aid_cams_size_cell

0x42e2,	// (0x0003ce19) grid_cams_pane_ParamLimits

0x42f7,	// (0x0003ce2e) linegrid_cams_pane_ParamLimits

0x43a8,	// (0x0003cedf) call_video_pane_t1

0x43ba,	// (0x0003cef1) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00047dd8) call_video_pane_t

0x4863,	// (0x0003d39a) aid_cale_month_size_cell_pane_ParamLimits

0x4863,	// (0x0003d39a) aid_cale_month_size_cell_pane

0xf651,	// (0x00048188) smil_status_volume_pane_g

0xec6e,	// (0x000477a5) volume_smil_pane_ParamLimits

0x1303,	// (0x00039e3a) aid_popup2_width_pane

0x3b01,	// (0x0003c638) cell_qdial_pane_g4_ParamLimits

0x3b01,	// (0x0003c638) cell_qdial_pane_g4

0x580d,	// (0x0003e344) aid_blid_cardinal_pane_ParamLimits

0x5819,	// (0x0003e350) aid_blid_destination_pane_ParamLimits

0x5819,	// (0x0003e350) aid_blid_destination_pane

0x19a8,	// (0x0003a4df) bg_popup_call_poc_act_pane_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_call_poc_act_pane

0x19a8,	// (0x0003a4df) bg_popup_call_poc_inact_pane_ParamLimits

0x19a8,	// (0x0003a4df) bg_popup_call_poc_inact_pane

0xc561,	// (0x00045098) bg_popup_call_poc_act_pane_g1

0xc569,	// (0x000450a0) bg_popup_call_poc_act_pane_g2

0xc571,	// (0x000450a8) bg_popup_call_poc_act_pane_g3

0xc531,	// (0x00045068) bg_popup_call_poc_act_pane_g4

0xc539,	// (0x00045070) bg_popup_call_poc_act_pane_g5

0xc579,	// (0x000450b0) bg_popup_call_poc_act_pane_g6

0xc549,	// (0x00045080) bg_popup_call_poc_act_pane_g7

0xc581,	// (0x000450b8) bg_popup_call_poc_act_pane_g8

0x174d,	// (0x0003a284) main_usb_pane

0xc71a,	// (0x00045251) popup_cale_lunar_info_window

0x4581,	// (0x0003d0b8) im_reading_pane_t1_ParamLimits

0x1d34,	// (0x0003a86b) list_im_pane_ParamLimits

0x1d45,	// (0x0003a87c) scroll_pane_cp07_ParamLimits

0x174d,	// (0x0003a284) grid_highlight_pane_cp012

0x19a8,	// (0x0003a4df) mup_scale_pane_ParamLimits

0xb476,	// (0x00043fad) main_usb_pane_g1_ParamLimits

0xb476,	// (0x00043fad) main_usb_pane_g1

0x6278,	// (0x0003edaf) main_usb_pane_g2_ParamLimits

0x6278,	// (0x0003edaf) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x00048128) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x00048128) main_usb_pane_g

0x628c,	// (0x0003edc3) main_usb_pane_t1_ParamLimits

0x628c,	// (0x0003edc3) main_usb_pane_t1

0x629e,	// (0x0003edd5) main_usb_pane_t2_ParamLimits

0x629e,	// (0x0003edd5) main_usb_pane_t2

0x62b0,	// (0x0003ede7) main_usb_pane_t3_ParamLimits

0x62b0,	// (0x0003ede7) main_usb_pane_t3

0x62c2,	// (0x0003edf9) main_usb_pane_t4_ParamLimits

0x62c2,	// (0x0003edf9) main_usb_pane_t4

0x62d4,	// (0x0003ee0b) main_usb_pane_t5_ParamLimits

0x62d4,	// (0x0003ee0b) main_usb_pane_t5

0x62e6,	// (0x0003ee1d) main_usb_pane_t6_ParamLimits

0x62e6,	// (0x0003ee1d) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0004812d) main_usb_pane_t_ParamLimits

0xb159,	// (0x00043c90) aid_text_placing

0x57b9,	// (0x0003e2f0) main_location2_pane_t1_ParamLimits

0x57cf,	// (0x0003e306) main_location2_pane_t2_ParamLimits

0x57e5,	// (0x0003e31c) main_location2_pane_t3_ParamLimits

0x57fb,	// (0x0003e332) main_location2_pane_t4_ParamLimits

0x57fb,	// (0x0003e332) main_location2_pane_t4

0xf402,	// (0x00047f39) main_location2_pane_t_ParamLimits

0x19e4,	// (0x0003a51b) find_pinb_pane_g2_ParamLimits

0x19e4,	// (0x0003a51b) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00047c87) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00047c87) find_pinb_pane_g

0x19f0,	// (0x0003a527) find_pinb_pane_t1_ParamLimits

0x1a02,	// (0x0003a539) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00047c8c) find_pinb_pane_t_ParamLimits

0x174d,	// (0x0003a284) main_call3_pane

0x4bd4,	// (0x0003d70b) cale_month_day_heading_pane_t1_ParamLimits

0x4c32,	// (0x0003d769) cale_month_day_heading_pane_t2_ParamLimits

0x4c97,	// (0x0003d7ce) cale_month_day_heading_pane_t3_ParamLimits

0x4cfc,	// (0x0003d833) cale_month_day_heading_pane_t4_ParamLimits

0x4d61,	// (0x0003d898) cale_month_day_heading_pane_t5_ParamLimits

0x4dc6,	// (0x0003d8fd) cale_month_day_heading_pane_t6_ParamLimits

0x4e2b,	// (0x0003d962) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00047e10) cale_month_day_heading_pane_t_ParamLimits

0x5015,	// (0x0003db4c) smil_status_volume_pane

0x5e01,	// (0x0003e938) postcard_address_pane_ParamLimits

0x5e01,	// (0x0003e938) postcard_address_pane

0x5e13,	// (0x0003e94a) postcard_message_pane_ParamLimits

0x5e13,	// (0x0003e94a) postcard_message_pane

0x6256,	// (0x0003ed8d) call2_cli_visual_pane_t1_ParamLimits

0x6256,	// (0x0003ed8d) call2_cli_visual_pane_t1

0x69b4,	// (0x0003f4eb) postcard_message_pane_t1_ParamLimits

0x69b4,	// (0x0003f4eb) postcard_message_pane_t1

0x699d,	// (0x0003f4d4) postcard_address_pane_t1_ParamLimits

0x699d,	// (0x0003f4d4) postcard_address_pane_t1

0x698b,	// (0x0003f4c2) popup_call3_audio_in_window_ParamLimits

0x698b,	// (0x0003f4c2) popup_call3_audio_in_window

0x681a,	// (0x0003f351) bg_popup_call3_in_pane_ParamLimits

0x681a,	// (0x0003f351) bg_popup_call3_in_pane

0x688c,	// (0x0003f3c3) popup_call3_audio_in_window_g1_ParamLimits

0x688c,	// (0x0003f3c3) popup_call3_audio_in_window_g1

0x68ac,	// (0x0003f3e3) popup_call3_audio_in_window_g2_ParamLimits

0x68ac,	// (0x0003f3e3) popup_call3_audio_in_window_g2

0x68cc,	// (0x0003f403) popup_call3_audio_in_window_g3_ParamLimits

0x68cc,	// (0x0003f403) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x0004818f) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x0004818f) popup_call3_audio_in_window_g

0x68fd,	// (0x0003f434) popup_call3_audio_in_window_t1_ParamLimits

0x68fd,	// (0x0003f434) popup_call3_audio_in_window_t1

0x693b,	// (0x0003f472) popup_call3_audio_in_window_t2_ParamLimits

0x693b,	// (0x0003f472) popup_call3_audio_in_window_t2

0x6979,	// (0x0003f4b0) popup_call3_audio_in_window_t3_ParamLimits

0x6979,	// (0x0003f4b0) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x00048198) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x00048198) popup_call3_audio_in_window_t

0xb295,	// (0x00043dcc) bg_popup_call3_rect_pane

0xc4d9,	// (0x00045010) bg_popup_call3_rect_pane_g1

0x1b6a,	// (0x0003a6a1) bg_popup_call3_rect_pane_g2

0xc4e1,	// (0x00045018) bg_popup_call3_rect_pane_g3

0xc4e9,	// (0x00045020) bg_popup_call3_rect_pane_g4

0xc4f1,	// (0x00045028) bg_popup_call3_rect_pane_g5

0xc4f9,	// (0x00045030) bg_popup_call3_rect_pane_g6

0xc501,	// (0x00045038) bg_popup_call3_rect_pane_g7

0x5b17,	// (0x0003e64e) mup_visualizer_osc_pane

0xb362,	// (0x00043e99) mup_visualizer_spec_pane

0x684a,	// (0x0003f381) call3_video_qcif_pane_ParamLimits

0x684a,	// (0x0003f381) call3_video_qcif_pane

0x685b,	// (0x0003f392) call3_video_qcif_uncrop_pane_ParamLimits

0x685b,	// (0x0003f392) call3_video_qcif_uncrop_pane

0x6867,	// (0x0003f39e) call3_video_subqcif_pane_ParamLimits

0x6867,	// (0x0003f39e) call3_video_subqcif_pane

0x687b,	// (0x0003f3b2) call3_video_subqcif_uncrop_pane_ParamLimits

0x687b,	// (0x0003f3b2) call3_video_subqcif_uncrop_pane

0x68ec,	// (0x0003f423) popup_call3_audio_in_window_g4_ParamLimits

0x68ec,	// (0x0003f423) popup_call3_audio_in_window_g4

0x6809,	// (0x0003f340) mup_spec_half_pane

0x6812,	// (0x0003f349) mup_spec_half_pane_cp

0xc7ad,	// (0x000452e4) mup_osc_middle_pane

0xc7b6,	// (0x000452ed) mup_visualizer_osc_pane_g1

0x67ea,	// (0x0003f321) mup_spec_bar_pane_ParamLimits

0x67ea,	// (0x0003f321) mup_spec_bar_pane

0xc79a,	// (0x000452d1) mup_spec_bar_pane_g1

0xc7a4,	// (0x000452db) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00048183) mup_spec_bar_pane_g

0x3b8d,	// (0x0003c6c4) aid_cale_week_size_cell_pane_ParamLimits

0x3ba0,	// (0x0003c6d7) bg_cale_heading_pane_ParamLimits

0x1bae,	// (0x0003a6e5) bg_cale_pane_cp01_ParamLimits

0x3bb4,	// (0x0003c6eb) cale_week_corner_pane_ParamLimits

0x3bca,	// (0x0003c701) cale_week_day_heading_pane_ParamLimits

0x3bde,	// (0x0003c715) cale_week_scroll_pane_g1_ParamLimits

0x3bef,	// (0x0003c726) cale_week_scroll_pane_g2_ParamLimits

0x3c00,	// (0x0003c737) cale_week_scroll_pane_g3_ParamLimits

0x3c11,	// (0x0003c748) cale_week_scroll_pane_g4_ParamLimits

0x3c22,	// (0x0003c759) cale_week_scroll_pane_g5_ParamLimits

0x3c33,	// (0x0003c76a) cale_week_scroll_pane_g6_ParamLimits

0x3c44,	// (0x0003c77b) cale_week_scroll_pane_g7_ParamLimits

0x3c55,	// (0x0003c78c) cale_week_scroll_pane_g8_ParamLimits

0x3c68,	// (0x0003c79f) cale_week_scroll_pane_g9_ParamLimits

0x3c79,	// (0x0003c7b0) cale_week_scroll_pane_g10_ParamLimits

0x3c8a,	// (0x0003c7c1) cale_week_scroll_pane_g11_ParamLimits

0x3c9b,	// (0x0003c7d2) cale_week_scroll_pane_g12_ParamLimits

0x3cac,	// (0x0003c7e3) cale_week_scroll_pane_g13_ParamLimits

0x3cbd,	// (0x0003c7f4) cale_week_scroll_pane_g14_ParamLimits

0x3cce,	// (0x0003c805) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00047d18) cale_week_scroll_pane_g_ParamLimits

0x3cdf,	// (0x0003c816) cale_week_time_pane_ParamLimits

0x3cf2,	// (0x0003c829) grid_cale_week_pane_ParamLimits

0x1bc7,	// (0x0003a6fe) listscroll_cale_week_pane_t1

0x3d05,	// (0x0003c83c) scroll_pane_cp08_ParamLimits

0x48c7,	// (0x0003d3fe) cale_month_corner_pane_ParamLimits

0x4b81,	// (0x0003d6b8) cale_month_pane_t1

0x4b93,	// (0x0003d6ca) cale_month_week_pane_ParamLimits

0x5445,	// (0x0003df7c) popup_call_status_window_g1_ParamLimits

0x5459,	// (0x0003df90) popup_call_status_window_g2_ParamLimits

0x546d,	// (0x0003dfa4) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00047ec0) popup_call_status_window_g_ParamLimits

0x54d3,	// (0x0003e00a) aid_call2_pane

0x2d4c,	// (0x0003b883) msg_header_pane_g1

0x5e01,	// (0x0003e938) postcard_address2_pane_ParamLimits

0x5e01,	// (0x0003e938) postcard_address2_pane

0x5e13,	// (0x0003e94a) postcard_message2_pane_ParamLimits

0x5e13,	// (0x0003e94a) postcard_message2_pane

0x67a6,	// (0x0003f2dd) message2_row_pane_ParamLimits

0x67a6,	// (0x0003f2dd) message2_row_pane

0x67c0,	// (0x0003f2f7) address2_row_pane_ParamLimits

0x67c0,	// (0x0003f2f7) address2_row_pane

0xc768,	// (0x0004529f) postcard_message2_row_pane_g1

0xc770,	// (0x000452a7) postcard_message2_row_pane_t1

0xc768,	// (0x0004529f) address2_row_pane_g1

0xc770,	// (0x000452a7) address2_row_pane_t1

0x4035,	// (0x0003cb6c) aid_size_cell_vorec

0x174d,	// (0x0003a284) main_rss_pane

0x67d3,	// (0x0003f30a) rss_list_single_pane_ParamLimits

0x67d3,	// (0x0003f30a) rss_list_single_pane

0xc77e,	// (0x000452b5) rss_list_single_pane_t1

0xc78c,	// (0x000452c3) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x0004817e) rss_list_single_pane_t

0x174d,	// (0x0003a284) main_camera2_pane

0x174d,	// (0x0003a284) main_video2_pane

0x6a0d,	// (0x0003f544) cams_zoom_pane_cp2_ParamLimits

0x6a0d,	// (0x0003f544) cams_zoom_pane_cp2

0x6a24,	// (0x0003f55b) image2_vga_pane_ParamLimits

0x6a24,	// (0x0003f55b) image2_vga_pane

0x6a5a,	// (0x0003f591) main_camera2_pane_g1_ParamLimits

0x6a5a,	// (0x0003f591) main_camera2_pane_g1

0x6a7a,	// (0x0003f5b1) main_camera2_pane_g2_ParamLimits

0x6a7a,	// (0x0003f5b1) main_camera2_pane_g2

0x6a91,	// (0x0003f5c8) main_camera2_pane_g3_ParamLimits

0x6a91,	// (0x0003f5c8) main_camera2_pane_g3

0x6aa8,	// (0x0003f5df) main_camera2_pane_g4_ParamLimits

0x6aa8,	// (0x0003f5df) main_camera2_pane_g4

0x6abf,	// (0x0003f5f6) main_camera2_pane_g5_ParamLimits

0x6abf,	// (0x0003f5f6) main_camera2_pane_g5

0x6ad6,	// (0x0003f60d) main_camera2_pane_g6_ParamLimits

0x6ad6,	// (0x0003f60d) main_camera2_pane_g6

0x6aed,	// (0x0003f624) main_camera2_pane_g7_ParamLimits

0x6aed,	// (0x0003f624) main_camera2_pane_g7

0x6b04,	// (0x0003f63b) main_camera2_pane_g8_ParamLimits

0x6b04,	// (0x0003f63b) main_camera2_pane_g8

0x0008,

0xf668,	// (0x0004819f) main_camera2_pane_g_ParamLimits

0xf668,	// (0x0004819f) main_camera2_pane_g

0x6b32,	// (0x0003f669) main_camera2_pane_t1_ParamLimits

0x6b32,	// (0x0003f669) main_camera2_pane_t1

0x6b61,	// (0x0003f698) main_camera2_pane_t2_ParamLimits

0x6b61,	// (0x0003f698) main_camera2_pane_t2

0x6b7e,	// (0x0003f6b5) main_camera2_pane_t3_ParamLimits

0x6b7e,	// (0x0003f6b5) main_camera2_pane_t3

0x6bca,	// (0x0003f701) main_camera2_pane_t4_ParamLimits

0x6bca,	// (0x0003f701) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x000481b2) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x000481b2) main_camera2_pane_t

0x6c3f,	// (0x0003f776) cams_zoom_pane_cp4_ParamLimits

0x6c3f,	// (0x0003f776) cams_zoom_pane_cp4

0x6c55,	// (0x0003f78c) image2_cif_pane_ParamLimits

0x6c55,	// (0x0003f78c) image2_cif_pane

0x6c78,	// (0x0003f7af) image2_subqcif_pane_ParamLimits

0x6c78,	// (0x0003f7af) image2_subqcif_pane

0x6c8e,	// (0x0003f7c5) main_video2_pane_g1_ParamLimits

0x6c8e,	// (0x0003f7c5) main_video2_pane_g1

0x6ca8,	// (0x0003f7df) main_video2_pane_g2_ParamLimits

0x6ca8,	// (0x0003f7df) main_video2_pane_g2

0x6cbe,	// (0x0003f7f5) main_video2_pane_g3_ParamLimits

0x6cbe,	// (0x0003f7f5) main_video2_pane_g3

0x6cd4,	// (0x0003f80b) main_video2_pane_g4_ParamLimits

0x6cd4,	// (0x0003f80b) main_video2_pane_g4

0x6cea,	// (0x0003f821) main_video2_pane_g5_ParamLimits

0x6cea,	// (0x0003f821) main_video2_pane_g5

0x6d00,	// (0x0003f837) main_video2_pane_g6_ParamLimits

0x6d00,	// (0x0003f837) main_video2_pane_g6

0x0005,

0xf68a,	// (0x000481c1) main_video2_pane_g_ParamLimits

0xf68a,	// (0x000481c1) main_video2_pane_g

0x6d1a,	// (0x0003f851) main_video2_pane_t1_ParamLimits

0x6d1a,	// (0x0003f851) main_video2_pane_t1

0x6d3e,	// (0x0003f875) main_video2_pane_t2_ParamLimits

0x6d3e,	// (0x0003f875) main_video2_pane_t2

0x6d88,	// (0x0003f8bf) main_video2_pane_t3_ParamLimits

0x6d88,	// (0x0003f8bf) main_video2_pane_t3

0x0002,

0xf697,	// (0x000481ce) main_video2_pane_t_ParamLimits

0xf697,	// (0x000481ce) main_video2_pane_t

0x6395,	// (0x0003eecc) call_muted_g2

0x0001,

0xf639,	// (0x00048170) call_muted_g

0x174d,	// (0x0003a284) main_mup2_pane

0x6dca,	// (0x0003f901) main_mup2_pane_g1_ParamLimits

0x6dca,	// (0x0003f901) main_mup2_pane_g1

0x6dd6,	// (0x0003f90d) main_mup2_pane_g2_ParamLimits

0x6dd6,	// (0x0003f90d) main_mup2_pane_g2

0xecd7,	// (0x0004780e) main_mup_pane_g13_cp1

0xecdf,	// (0x00047816) mup_volume_pane_cp1

0x6df2,	// (0x0003f929) main_mup2_pane_g4_ParamLimits

0x6df2,	// (0x0003f929) main_mup2_pane_g4

0x6e02,	// (0x0003f939) main_mup2_pane_g5_ParamLimits

0x6e02,	// (0x0003f939) main_mup2_pane_g5

0x6e12,	// (0x0003f949) main_mup2_pane_g6_ParamLimits

0x6e12,	// (0x0003f949) main_mup2_pane_g6

0x6e22,	// (0x0003f959) main_mup2_pane_g7_ParamLimits

0x6e22,	// (0x0003f959) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x000481d5) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x000481d5) main_mup2_pane_g

0x6e3a,	// (0x0003f971) main_mup2_pane_t1_ParamLimits

0x6e3a,	// (0x0003f971) main_mup2_pane_t1

0x6e50,	// (0x0003f987) main_mup2_pane_t2_ParamLimits

0x6e50,	// (0x0003f987) main_mup2_pane_t2

0x6e66,	// (0x0003f99d) main_mup2_pane_t3_ParamLimits

0x6e66,	// (0x0003f99d) main_mup2_pane_t3

0x6e7c,	// (0x0003f9b3) main_mup2_pane_t4_ParamLimits

0x6e7c,	// (0x0003f9b3) main_mup2_pane_t4

0x6e94,	// (0x0003f9cb) main_mup2_pane_t5_ParamLimits

0x6e94,	// (0x0003f9cb) main_mup2_pane_t5

0x6eac,	// (0x0003f9e3) main_mup2_pane_t6_ParamLimits

0x6eac,	// (0x0003f9e3) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x000481e4) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x000481e4) main_mup2_pane_t

0x6edc,	// (0x0003fa13) mup2_visualizer_pane_ParamLimits

0x6edc,	// (0x0003fa13) mup2_visualizer_pane

0x6f07,	// (0x0003fa3e) mup_progress_pane_cp_ParamLimits

0x6f07,	// (0x0003fa3e) mup_progress_pane_cp

0xecc2,	// (0x000477f9) mup_volume_pane_cp_ParamLimits

0xecc2,	// (0x000477f9) mup_volume_pane_cp

0x6f1b,	// (0x0003fa52) mup2_visualizer_pane_g1_ParamLimits

0x6f1b,	// (0x0003fa52) mup2_visualizer_pane_g1

0xc7ed,	// (0x00045324) mup2_visualizer_pane_g2_ParamLimits

0xc7ed,	// (0x00045324) mup2_visualizer_pane_g2

0x6f30,	// (0x0003fa67) mup2_visualizer_pane_g3_ParamLimits

0x6f30,	// (0x0003fa67) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x000481f1) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x000481f1) mup2_visualizer_pane_g

0xb5bf,	// (0x000440f6) aid_size_cell_fmradio

0x64f1,	// (0x0003f028) aid_height_parent_landcape

0x460e,	// (0x0003d145) wml_content_pane_cp

0x4616,	// (0x0003d14d) wml_tabs_pane

0x461f,	// (0x0003d156) popup_wml_miniature_window

0x4627,	// (0x0003d15e) scroll_pane_cp021

0x463b,	// (0x0003d172) wml_content_pane_comp8

0x174d,	// (0x0003a284) bg_popup_sub_pane_cp05

0xc80b,	// (0x00045342) popup_wml_miniature_window_g1

0xc813,	// (0x0004534a) wml_miniature_view_pane

0x6f3c,	// (0x0003fa73) aid_size_wml_view

0x6f44,	// (0x0003fa7b) wml_miniature_view_pane_g1

0x6f4d,	// (0x0003fa84) wml_miniature_view_pane_g2

0x6f56,	// (0x0003fa8d) wml_miniature_view_pane_g3

0x6f5e,	// (0x0003fa95) wml_miniature_view_pane_g4

0x6f66,	// (0x0003fa9d) wml_miniature_view_pane_g5

0x6f6e,	// (0x0003faa5) wml_miniature_view_pane_g6

0x6f76,	// (0x0003faad) wml_miniature_view_pane_g7

0x6f7e,	// (0x0003fab5) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x000481f8) wml_miniature_view_pane_g

0xc81b,	// (0x00045352) background_graphic_ParamLimits

0xc81b,	// (0x00045352) background_graphic

0xc827,	// (0x0004535e) wml_tabs_2_pane

0xc830,	// (0x00045367) wml_tabs_3_pane_ParamLimits

0xc830,	// (0x00045367) wml_tabs_3_pane

0xc842,	// (0x00045379) wml_tabs_4_pane_ParamLimits

0xc842,	// (0x00045379) wml_tabs_4_pane

0xc858,	// (0x0004538f) wml_tabs_5_pane_ParamLimits

0xc858,	// (0x0004538f) wml_tabs_5_pane

0xc872,	// (0x000453a9) wml_tabs_pane_g2_ParamLimits

0xc872,	// (0x000453a9) wml_tabs_pane_g2

0xc886,	// (0x000453bd) wml_tabs_pane_g3_ParamLimits

0xc886,	// (0x000453bd) wml_tabs_pane_g3

0x6f86,	// (0x0003fabd) wml_tabs_2_active_pane_ParamLimits

0x6f86,	// (0x0003fabd) wml_tabs_2_active_pane

0x6f96,	// (0x0003facd) wml_tabs_2_passive_pane_ParamLimits

0x6f96,	// (0x0003facd) wml_tabs_2_passive_pane

0x6fa6,	// (0x0003fadd) wml_tabs_3_active_pane_cp_ParamLimits

0x6fa6,	// (0x0003fadd) wml_tabs_3_active_pane_cp

0x6fb7,	// (0x0003faee) wml_tabs_3_passive_pane_ParamLimits

0x6fb7,	// (0x0003faee) wml_tabs_3_passive_pane

0x6fc8,	// (0x0003faff) wml_tabs_3_passive_pane_cp_ParamLimits

0x6fc8,	// (0x0003faff) wml_tabs_3_passive_pane_cp

0x6fd9,	// (0x0003fb10) tabs_4_active_pane

0x6fe1,	// (0x0003fb18) tabs_4_passive_pane

0x6fe9,	// (0x0003fb20) tabs_4_passive_pane_cp

0x6ff1,	// (0x0003fb28) tabs_4_passive_pane_cp2

0x6270,	// (0x0003eda7) aid_height_text

0x5aed,	// (0x0003e624) mup_volume_cont_pane_ParamLimits

0x5aed,	// (0x0003e624) mup_volume_cont_pane

0x3811,	// (0x0003c348) aid_size_cell_pinb

0x381b,	// (0x0003c352) aid_size_list_pinb

0x6ef3,	// (0x0003fa2a) mup2_volume_cont_pane_ParamLimits

0x6ef3,	// (0x0003fa2a) mup2_volume_cont_pane

0xecae,	// (0x000477e5) mup2_volume_cont_pane_g1_ParamLimits

0xecae,	// (0x000477e5) mup2_volume_cont_pane_g1

0x353a,	// (0x0003c071) aid_size_cell_touch_ParamLimits

0x353a,	// (0x0003c071) aid_size_cell_touch

0x3719,	// (0x0003c250) touch_pane_ParamLimits

0x3719,	// (0x0003c250) touch_pane

0x12f1,	// (0x00039e28) main_rss2_pane

0xc8a3,	// (0x000453da) listscroll_rss2_pane

0xc8ac,	// (0x000453e3) rss2_navigation_pane

0xc8b4,	// (0x000453eb) list_rss2_pane

0x567b,	// (0x0003e1b2) scroll_pane_cp22

0xc8bc,	// (0x000453f3) rss2_navigation_pane_g1

0xc8c5,	// (0x000453fc) rss2_navigation_pane_g2

0xc8cd,	// (0x00045404) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x00048209) rss2_navigation_pane_g

0xc8d5,	// (0x0004540c) rss2_navigation_pane_t1

0x6ff9,	// (0x0003fb30) rss2_list_single_pane_ParamLimits

0x6ff9,	// (0x0003fb30) rss2_list_single_pane

0xc8e3,	// (0x0004541a) rss2_list_single_pane_t2

0xc8f1,	// (0x00045428) rss2_list_single_pane_t3_ParamLimits

0xc8f1,	// (0x00045428) rss2_list_single_pane_t3

0xc90e,	// (0x00045445) rss2_list_single_pane_t4

0x4fff,	// (0x0003db36) smil_status_pane_g1

0x1da6,	// (0x0003a8dd) main_image2_pane_ParamLimits

0x1da6,	// (0x0003a8dd) main_image2_pane

0x6b1b,	// (0x0003f652) main_camera2_pane_g9_ParamLimits

0x6b1b,	// (0x0003f652) main_camera2_pane_g9

0x6c0d,	// (0x0003f744) main_camera2_pane_t5_ParamLimits

0x6c0d,	// (0x0003f744) main_camera2_pane_t5

0xec83,	// (0x000477ba) main_camera2_pane_t6_ParamLimits

0xec83,	// (0x000477ba) main_camera2_pane_t6

0x700d,	// (0x0003fb44) main_image2_pane_g1_ParamLimits

0x700d,	// (0x0003fb44) main_image2_pane_g1

0x6028,	// (0x0003eb5f) smil2_video_pane_ParamLimits

0x6028,	// (0x0003eb5f) smil2_video_pane

0xade2,	// (0x00043919) aid_zoom_text_primary_cp

0x1334,	// (0x00039e6b) popup_preview_fixed_window

0x1d2c,	// (0x0003a863) im_reading_pane_g1

0x6a01,	// (0x0003f538) cams2_bc_adjust_pane_cp_ParamLimits

0x6a01,	// (0x0003f538) cams2_bc_adjust_pane_cp

0x6c33,	// (0x0003f76a) cams2_bc_adjust_pane_ParamLimits

0x6c33,	// (0x0003f76a) cams2_bc_adjust_pane

0xece7,	// (0x0004781e) cams2_bc_adjust_pane_g1

0xecef,	// (0x00047826) cams2_slider_pane

0xecf8,	// (0x0004782f) cams2_slider_pane_g1

0xed01,	// (0x00047838) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x00048210) cams2_slider_pane_g

0x38fb,	// (0x0003c432) calc_display_pane_ParamLimits

0x3917,	// (0x0003c44e) calc_paper_pane_ParamLimits

0x3938,	// (0x0003c46f) grid_calc_pane_ParamLimits

0xb0fa,	// (0x00043c31) popup_clock_digital_window_t1_ParamLimits

0xb55c,	// (0x00044093) main_image_pane_t1

0x38dd,	// (0x0003c414) aid_size_cell_calc_ParamLimits

0x38dd,	// (0x0003c414) aid_size_cell_calc

0x6521,	// (0x0003f058) popup_blid_sat_info2_window_ParamLimits

0x6521,	// (0x0003f058) popup_blid_sat_info2_window

0xc924,	// (0x0004545b) aid_size_cell_blid

0xc92c,	// (0x00045463) bg_popup_window_pane_cp07

0xc94f,	// (0x00045486) grid_popup_blid_pane

0xc957,	// (0x0004548e) heading_pane_cp05_ParamLimits

0xc957,	// (0x0004548e) heading_pane_cp05

0xca1f,	// (0x00045556) cell_popup_blid_pane_ParamLimits

0xca1f,	// (0x00045556) cell_popup_blid_pane

0xca3f,	// (0x00045576) cell_popup_blid_pane_g1

0xca47,	// (0x0004557e) cell_popup_blid_pane_t1

0x6ec6,	// (0x0003f9fd) mup2_indicator_pane_ParamLimits

0x6ec6,	// (0x0003f9fd) mup2_indicator_pane

0xb295,	// (0x00043dcc) mup2_visualizer_osc_pane

0xc7f9,	// (0x00045330) mup2_visualizer_spec_pane_ParamLimits

0xc7f9,	// (0x00045330) mup2_visualizer_spec_pane

0x7021,	// (0x0003fb58) mup2_spec_half_pane

0x702a,	// (0x0003fb61) mup2_spec_half_pane_cp

0x7032,	// (0x0003fb69) mup2_spec_bar_pane_ParamLimits

0x7032,	// (0x0003fb69) mup2_spec_bar_pane

0xc79a,	// (0x000452d1) mup2_spec_bar_pane_g1

0xc7a4,	// (0x000452db) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x00048183) mup2_spec_bar_pane_g

0x7051,	// (0x0003fb88) mup2_osc_middle_pane

0xc7b6,	// (0x000452ed) mup2_visualizer_osc_pane_g1

0x135c,	// (0x00039e93) popup_number_entry_window_t1_ParamLimits

0x136f,	// (0x00039ea6) popup_number_entry_window_t2_ParamLimits

0x1381,	// (0x00039eb8) popup_number_entry_window_t3_ParamLimits

0x3761,	// (0x0003c298) popup_number_entry_window_t5_ParamLimits

0x3761,	// (0x0003c298) popup_number_entry_window_t5

0xf0fb,	// (0x00047c32) popup_number_entry_window_t_ParamLimits

0x1393,	// (0x00039eca) text_title_cp2_ParamLimits

0xec2f,	// (0x00047766) aid_hotspot_pointer_text2_pane

0xec55,	// (0x0004778c) main_viewer_pane_g9_ParamLimits

0xec55,	// (0x0004778c) main_viewer_pane_g9

0x4b81,	// (0x0003d6b8) cale_month_pane_t1_ParamLimits

0x5071,	// (0x0003dba8) bg_cale_pane_ParamLimits

0x5089,	// (0x0003dbc0) list_cale_pane_ParamLimits

0x1bc7,	// (0x0003a6fe) listscroll_cale_day_pane_t1

0x509a,	// (0x0003dbd1) scroll_pane_cp09_ParamLimits

0x5b1f,	// (0x0003e656) main_mup_eq_pane_t1_ParamLimits

0x5b1f,	// (0x0003e656) main_mup_eq_pane_t1

0x5b37,	// (0x0003e66e) main_mup_eq_pane_t2_ParamLimits

0x5b37,	// (0x0003e66e) main_mup_eq_pane_t2

0x5b4d,	// (0x0003e684) main_mup_eq_pane_t3_ParamLimits

0x5b4d,	// (0x0003e684) main_mup_eq_pane_t3

0x5b63,	// (0x0003e69a) main_mup_eq_pane_t4_ParamLimits

0x5b63,	// (0x0003e69a) main_mup_eq_pane_t4

0x5b79,	// (0x0003e6b0) main_mup_eq_pane_t5_ParamLimits

0x5b79,	// (0x0003e6b0) main_mup_eq_pane_t5

0x5b8f,	// (0x0003e6c6) main_mup_eq_pane_t6_ParamLimits

0x5b8f,	// (0x0003e6c6) main_mup_eq_pane_t6

0x5ba1,	// (0x0003e6d8) main_mup_eq_pane_t7_ParamLimits

0x5ba1,	// (0x0003e6d8) main_mup_eq_pane_t7

0x5bb3,	// (0x0003e6ea) main_mup_eq_pane_t8_ParamLimits

0x5bb3,	// (0x0003e6ea) main_mup_eq_pane_t8

0x5bc5,	// (0x0003e6fc) main_mup_eq_pane_t9_ParamLimits

0x5bc5,	// (0x0003e6fc) main_mup_eq_pane_t9

0x5bdb,	// (0x0003e712) main_mup_eq_pane_t10_ParamLimits

0x5bdb,	// (0x0003e712) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00047fbf) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00047fbf) main_mup_eq_pane_t

0x5c6e,	// (0x0003e7a5) mup_equalizer_pane_cp5_ParamLimits

0x5c80,	// (0x0003e7b7) mup_equalizer_pane_cp6_ParamLimits

0x5c92,	// (0x0003e7c9) mup_equalizer_pane_cp7_ParamLimits

0x12f1,	// (0x00039e28) main_gallery_pane

0xc7bf,	// (0x000452f6) smil2_volume_pane

0xc7c7,	// (0x000452fe) smil_status_volume_pane_g1_ParamLimits

0xc7da,	// (0x00045311) smil_status_volume_pane_g2_ParamLimits

0xec61,	// (0x00047798) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x00048188) smil_status_volume_pane_g_ParamLimits

0xc92c,	// (0x00045463) bg_popup_window_pane_cp07_ParamLimits

0xc93a,	// (0x00045471) blid_firmament_pane

0x705a,	// (0x0003fb91) aid_size_cell_gallery_ParamLimits

0x705a,	// (0x0003fb91) aid_size_cell_gallery

0x7070,	// (0x0003fba7) grid_gallery_pane_ParamLimits

0x7070,	// (0x0003fba7) grid_gallery_pane

0x7084,	// (0x0003fbbb) cell_gallery_pane_ParamLimits

0x7084,	// (0x0003fbbb) cell_gallery_pane

0xca55,	// (0x0004558c) bg_cell_gallery_focus_pane_ParamLimits

0xca55,	// (0x0004558c) bg_cell_gallery_focus_pane

0xca67,	// (0x0004559e) cell_gallery_pane_g1_ParamLimits

0xca67,	// (0x0004559e) cell_gallery_pane_g1

0x70cb,	// (0x0003fc02) cell_gallery_pane_g2_ParamLimits

0x70cb,	// (0x0003fc02) cell_gallery_pane_g2

0x70d8,	// (0x0003fc0f) cell_gallery_pane_g3_ParamLimits

0x70d8,	// (0x0003fc0f) cell_gallery_pane_g3

0xca73,	// (0x000455aa) cell_gallery_pane_g4_ParamLimits

0xca73,	// (0x000455aa) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x00048236) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x00048236) cell_gallery_pane_g

0xca7f,	// (0x000455b6) bg_cell_gallery_focus_pane_g1

0xca87,	// (0x000455be) bg_cell_gallery_focus_pane_g2

0xca8f,	// (0x000455c6) bg_cell_gallery_focus_pane_g3

0xca97,	// (0x000455ce) bg_cell_gallery_focus_pane_g4

0xca9f,	// (0x000455d6) bg_cell_gallery_focus_pane_g5

0xcaa7,	// (0x000455de) bg_cell_gallery_focus_pane_g6

0xcaaf,	// (0x000455e6) bg_cell_gallery_focus_pane_g7

0xcab7,	// (0x000455ee) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x0004823f) bg_cell_gallery_focus_pane_g

0xcabf,	// (0x000455f6) aid_firma_cardinal

0xcad3,	// (0x0004560a) blid_firmament_pane_t1

0xcaea,	// (0x00045621) blid_firmament_pane_t2

0xcb01,	// (0x00045638) blid_firmament_pane_t3

0xcb18,	// (0x0004564f) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x00048250) blid_firmament_pane_t

0xcb2f,	// (0x00045666) blid_sat_info_pane

0xcb3f,	// (0x00045676) blid_sat_info_pane_g1

0xcb3f,	// (0x00045676) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x00048259) blid_sat_info_pane_g

0xcb49,	// (0x00045680) blid_sat_info_pane_t1

0xcb57,	// (0x0004568e) smil2_volume_content_pane

0xcb60,	// (0x00045697) smil2_volume_pane_g1

0xcb68,	// (0x0004569f) smil2_volume_content_pane_g1

0xcb71,	// (0x000456a8) smil2_volume_content_pane_g2

0xcb7a,	// (0x000456b1) smil2_volume_content_pane_g3

0xcb83,	// (0x000456ba) smil2_volume_content_pane_g4

0xcb8c,	// (0x000456c3) smil2_volume_content_pane_g5

0xcb95,	// (0x000456cc) smil2_volume_content_pane_g6

0xcb9e,	// (0x000456d5) smil2_volume_content_pane_g7

0xcba7,	// (0x000456de) smil2_volume_content_pane_g8

0xcbb0,	// (0x000456e7) smil2_volume_content_pane_g9

0xcbb9,	// (0x000456f0) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x0004825e) smil2_volume_content_pane_g

0x3d5b,	// (0x0003c892) cale_week_day_heading_pane_t1_ParamLimits

0x3d85,	// (0x0003c8bc) cale_week_day_heading_pane_t2_ParamLimits

0x3daf,	// (0x0003c8e6) cale_week_day_heading_pane_t3_ParamLimits

0x3dd9,	// (0x0003c910) cale_week_day_heading_pane_t4_ParamLimits

0x3e03,	// (0x0003c93a) cale_week_day_heading_pane_t5_ParamLimits

0x3e2d,	// (0x0003c964) cale_week_day_heading_pane_t6_ParamLimits

0x3e57,	// (0x0003c98e) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00047d37) cale_week_day_heading_pane_t_ParamLimits

0x1bd9,	// (0x0003a710) bg_cale_side_pane_ParamLimits

0x3e81,	// (0x0003c9b8) cale_week_time_pane_t1_ParamLimits

0x3ead,	// (0x0003c9e4) cale_week_time_pane_t2_ParamLimits

0x3ed9,	// (0x0003ca10) cale_week_time_pane_t3_ParamLimits

0x3f05,	// (0x0003ca3c) cale_week_time_pane_t4_ParamLimits

0x3f31,	// (0x0003ca68) cale_week_time_pane_t5_ParamLimits

0x3f5d,	// (0x0003ca94) cale_week_time_pane_t6_ParamLimits

0x3f89,	// (0x0003cac0) cale_week_time_pane_t7_ParamLimits

0x3fb5,	// (0x0003caec) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00047d46) cale_week_time_pane_t_ParamLimits

0x3fe1,	// (0x0003cb18) cell_cale_week_pane_g2_ParamLimits

0x1bd9,	// (0x0003a710) bg_cale_side_pane_cp01_ParamLimits

0x4e98,	// (0x0003d9cf) cale_month_week_pane_t1_ParamLimits

0x4eaf,	// (0x0003d9e6) cale_month_week_pane_t2_ParamLimits

0x4ec6,	// (0x0003d9fd) cale_month_week_pane_t3_ParamLimits

0x4edd,	// (0x0003da14) cale_month_week_pane_t4_ParamLimits

0x4ef4,	// (0x0003da2b) cale_month_week_pane_t5_ParamLimits

0x4f0b,	// (0x0003da42) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00047e1f) cale_month_week_pane_t_ParamLimits

0xafe0,	// (0x00043b17) cell_cale_month_pane_g1_ParamLimits

0x12f1,	// (0x00039e28) main_cale_event_viewer_pane

0x12f1,	// (0x00039e28) listscroll_cale_event_viewer_pane

0xcbc2,	// (0x000456f9) list_cale_ev_pane

0xcbca,	// (0x00045701) scroll_pane_cp023

0x70e5,	// (0x0003fc1c) field_cale_ev_pane_ParamLimits

0x70e5,	// (0x0003fc1c) field_cale_ev_pane

0xcbd6,	// (0x0004570d) field_cale_ev_content_pane_ParamLimits

0xcbd6,	// (0x0004570d) field_cale_ev_content_pane

0xcbe2,	// (0x00045719) field_cale_ev_pane_g1_ParamLimits

0xcbe2,	// (0x00045719) field_cale_ev_pane_g1

0xcbee,	// (0x00045725) field_cale_ev_pane_g2_ParamLimits

0xcbee,	// (0x00045725) field_cale_ev_pane_g2

0xcc06,	// (0x0004573d) field_cale_ev_pane_g3_ParamLimits

0xcc06,	// (0x0004573d) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x00048273) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x00048273) field_cale_ev_pane_g

0xcc1e,	// (0x00045755) field_cale_ev_pane_t1_ParamLimits

0xcc1e,	// (0x00045755) field_cale_ev_pane_t1

0x70ff,	// (0x0003fc36) field_cale_ev_content_pane_t1_ParamLimits

0x70ff,	// (0x0003fc36) field_cale_ev_content_pane_t1

0xb40c,	// (0x00043f43) bg_button_pane_cp01

0x1b9f,	// (0x0003a6d6) listscroll_cale_week_pane_ParamLimits

0x3b85,	// (0x0003c6bc) popup_toolbar_window_cp01

0x1bc7,	// (0x0003a6fe) listscroll_cale_week_pane_t1_ParamLimits

0x1a77,	// (0x0003a5ae) listscroll_cale_day_pane_ParamLimits

0x3b85,	// (0x0003c6bc) popup_toolbar_window_cp02

0x1bc7,	// (0x0003a6fe) listscroll_cale_day_pane_t1_ParamLimits

0x1b9f,	// (0x0003a6d6) main_cale_month_pane_ParamLimits

0x671d,	// (0x0003f254) popup_toolbar_window_cp03_ParamLimits

0x671d,	// (0x0003f254) popup_toolbar_window_cp03

0x5f02,	// (0x0003ea39) main_image_pane_g2_ParamLimits

0x5f02,	// (0x0003ea39) main_image_pane_g2

0x5f13,	// (0x0003ea4a) main_image_pane_g3_ParamLimits

0x5f13,	// (0x0003ea4a) main_image_pane_g3

0x0002,

0xf51a,	// (0x00048051) main_image_pane_g_ParamLimits

0xf51a,	// (0x00048051) main_image_pane_g

0xb55c,	// (0x00044093) main_image_pane_t1_ParamLimits

0x5f24,	// (0x0003ea5b) main_image_pane_t2_ParamLimits

0x5f24,	// (0x0003ea5b) main_image_pane_t2

0x5f36,	// (0x0003ea6d) main_image_pane_t3_ParamLimits

0x5f36,	// (0x0003ea6d) main_image_pane_t3

0x5f5e,	// (0x0003ea95) main_image_pane_t4_ParamLimits

0x5f5e,	// (0x0003ea95) main_image_pane_t4

0x0003,

0xf521,	// (0x00048058) main_image_pane_t_ParamLimits

0xf521,	// (0x00048058) main_image_pane_t

0x5f7e,	// (0x0003eab5) popup_image_details_window_cp01

0x5f86,	// (0x0003eabd) popup_toobar_trans_pane_cp01_ParamLimits

0x5f86,	// (0x0003eabd) popup_toobar_trans_pane_cp01

0x65ea,	// (0x0003f121) popup_image_details_window_ParamLimits

0x65ea,	// (0x0003f121) popup_image_details_window

0xc722,	// (0x00045259) popup_image_focus_window

0x69cf,	// (0x0003f506) camera2_autofocus_pane_ParamLimits

0x69cf,	// (0x0003f506) camera2_autofocus_pane

0x12f1,	// (0x00039e28) bg_popup_sub_pane_cp06

0xcc35,	// (0x0004576c) popup_image_focus_window_g1

0xcc3d,	// (0x00045774) popup_image_focus_window_g2

0xcc45,	// (0x0004577c) popup_image_focus_window_g3

0xcc4d,	// (0x00045784) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0004827a) popup_image_focus_window_g

0xcc55,	// (0x0004578c) popup_image_focus_window_t1

0xcc63,	// (0x0004579a) popup_image_focus_window_t2

0xcc72,	// (0x000457a9) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x00048283) popup_image_focus_window_t

0xcc80,	// (0x000457b7) camera2_autofocus_pane_g1

0x1da6,	// (0x0003a8dd) bg_tb_trans_pane_cp01

0xcc8e,	// (0x000457c5) popup_image_details_window_g1

0xcca1,	// (0x000457d8) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x00048295) popup_image_details_window_g

0xccca,	// (0x00045801) popup_image_details_window_t1

0xccdc,	// (0x00045813) popup_image_details_window_t2

0xccf5,	// (0x0004582c) popup_image_details_window_t3

0xcd09,	// (0x00045840) popup_image_details_window_t4

0xcd24,	// (0x0004585b) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0004829c) popup_image_details_window_t

0x1a5f,	// (0x0003a596) bg_calc_paper_pane_ParamLimits

0x12f1,	// (0x00039e28) grid_highlight_pane_cp013

0xadf2,	// (0x00043929) list_calc_pane_ParamLimits

0xae04,	// (0x0004393b) scroll_pane_cp024

0x1a77,	// (0x0003a5ae) bg_calc_display_pane_ParamLimits

0xae0c,	// (0x00043943) calc_display_pane_t1_ParamLimits

0xae21,	// (0x00043958) calc_display_pane_t2_ParamLimits

0xae36,	// (0x0004396d) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00047cb9) calc_display_pane_t_ParamLimits

0x3ab0,	// (0x0003c5e7) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00047cd6) cell_calc_pane_g

0x3ab9,	// (0x0003c5f0) cell_calc_pane_t1

0x1ad6,	// (0x0003a60d) grid_highlight_pane_cp02_ParamLimits

0x1aec,	// (0x0003a623) toolbar_button_pane_cp01_ParamLimits

0x1aec,	// (0x0003a623) toolbar_button_pane_cp01

0xb5a1,	// (0x000440d8) temp_image_control_pane_ParamLimits

0xb5a1,	// (0x000440d8) temp_image_control_pane

0x1da6,	// (0x0003a8dd) main_mp3_pane

0xcd3e,	// (0x00045875) temp_image_control_pane_g1_ParamLimits

0xcd3e,	// (0x00045875) temp_image_control_pane_g1

0xcd4c,	// (0x00045883) temp_image_control_pane_g2_ParamLimits

0xcd4c,	// (0x00045883) temp_image_control_pane_g2

0xcd5e,	// (0x00045895) temp_image_control_pane_g3_ParamLimits

0xcd5e,	// (0x00045895) temp_image_control_pane_g3

0x714c,	// (0x0003fc83) temp_image_control_pane_g4_ParamLimits

0x714c,	// (0x0003fc83) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x000482a7) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x000482a7) temp_image_control_pane_g

0xcd3e,	// (0x00045875) main_mp3_pane_g1

0x715d,	// (0x0003fc94) main_mp3_pane_g2

0x0007,

0xf779,	// (0x000482b0) main_mp3_pane_g

0xcda1,	// (0x000458d8) main_mp3_pane_t1

0x1c35,	// (0x0003a76c) main_camera_pane_g8_ParamLimits

0x1c35,	// (0x0003a76c) main_camera_pane_g8

0x4276,	// (0x0003cdad) main_video_pane_g7_ParamLimits

0x4276,	// (0x0003cdad) main_video_pane_g7

0xec9c,	// (0x000477d3) main_camera2_pane_t7_ParamLimits

0xec9c,	// (0x000477d3) main_camera2_pane_t7

0x1d92,	// (0x0003a8c9) scroll_pane_cp025_ParamLimits

0x1d92,	// (0x0003a8c9) scroll_pane_cp025

0x45e2,	// (0x0003d119) scroll_pane_cp026_ParamLimits

0x45e2,	// (0x0003d119) scroll_pane_cp026

0x45f1,	// (0x0003d128) wml_content_pane_ParamLimits

0x12f1,	// (0x00039e28) main_touch_calib_pane

0x7213,	// (0x0003fd4a) main_touch_calib_pane_g1

0x721f,	// (0x0003fd56) main_touch_calib_pane_g2

0x722b,	// (0x0003fd62) main_touch_calib_pane_g3

0x7237,	// (0x0003fd6e) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x000482ce) main_touch_calib_pane_g

0x7243,	// (0x0003fd7a) main_touch_calib_pane_t1

0x725b,	// (0x0003fd92) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x000482d7) main_touch_calib_pane_t

0xb187,	// (0x00043cbe) mup_progress_pane_cp02

0xb1a6,	// (0x00043cdd) navi_pane_g1

0xb226,	// (0x00043d5d) navi_pane_mp_t3

0x1da6,	// (0x0003a8dd) main_mp3_pane_ParamLimits

0x6757,	// (0x0003f28e) navi_pane_ParamLimits

0xcd3e,	// (0x00045875) main_mp3_pane_g1_ParamLimits

0x715d,	// (0x0003fc94) main_mp3_pane_g2_ParamLimits

0x7169,	// (0x0003fca0) main_mp3_pane_g3_ParamLimits

0x7169,	// (0x0003fca0) main_mp3_pane_g3

0x7175,	// (0x0003fcac) main_mp3_pane_g4_ParamLimits

0x7175,	// (0x0003fcac) main_mp3_pane_g4

0xcd6e,	// (0x000458a5) main_mp3_pane_g5_ParamLimits

0xcd6e,	// (0x000458a5) main_mp3_pane_g5

0xcd7c,	// (0x000458b3) main_mp3_pane_g6_ParamLimits

0xcd7c,	// (0x000458b3) main_mp3_pane_g6

0xcd89,	// (0x000458c0) main_mp3_pane_g7_ParamLimits

0xcd89,	// (0x000458c0) main_mp3_pane_g7

0xcd95,	// (0x000458cc) main_mp3_pane_g8_ParamLimits

0xcd95,	// (0x000458cc) main_mp3_pane_g8

0xf779,	// (0x000482b0) main_mp3_pane_g_ParamLimits

0x7181,	// (0x0003fcb8) main_mp3_pane_t2

0x718f,	// (0x0003fcc6) main_mp3_pane_t3

0xcdaf,	// (0x000458e6) main_mp3_pane_t4

0xcdbd,	// (0x000458f4) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x000482c1) main_mp3_pane_t

0xcdcb,	// (0x00045902) mup_progress_pane_cp01

0xade2,	// (0x00043919) aid_zoom_text_secondary2

0xcbc2,	// (0x000456f9) list_cale_ev2_pane

0xcbca,	// (0x00045701) scroll_pane_cp023_ParamLimits

0x72a9,	// (0x0003fde0) field_cale_ev2_pane_ParamLimits

0x72a9,	// (0x0003fde0) field_cale_ev2_pane

0xcdd3,	// (0x0004590a) field_cale_ev2_pane_g1_ParamLimits

0xcdd3,	// (0x0004590a) field_cale_ev2_pane_g1

0xcddf,	// (0x00045916) field_cale_ev2_pane_g2_ParamLimits

0xcddf,	// (0x00045916) field_cale_ev2_pane_g2

0xcdf7,	// (0x0004592e) field_cale_ev2_pane_g3_ParamLimits

0xcdf7,	// (0x0004592e) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x000482e2) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x000482e2) field_cale_ev2_pane_g

0xce1b,	// (0x00045952) field_cale_ev2_pane_t1_ParamLimits

0xce1b,	// (0x00045952) field_cale_ev2_pane_t1

0xce32,	// (0x00045969) field_cale_ev2_pane_t2_ParamLimits

0xce32,	// (0x00045969) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x000482eb) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x000482eb) field_cale_ev2_pane_t

0x5dbd,	// (0x0003e8f4) main_postcard_pane_g5_ParamLimits

0x5dbd,	// (0x0003e8f4) main_postcard_pane_g5

0x5dd1,	// (0x0003e908) main_postcard_pane_g6_ParamLimits

0x5dd1,	// (0x0003e908) main_postcard_pane_g6

0x4058,	// (0x0003cb8f) camera2_autofocus_pane_cp_ParamLimits

0x4058,	// (0x0003cb8f) camera2_autofocus_pane_cp

0x1da6,	// (0x0003a8dd) main_mup3_pane

0x72e1,	// (0x0003fe18) main_mup3_pane_g1_ParamLimits

0x72e1,	// (0x0003fe18) main_mup3_pane_g1

0x7303,	// (0x0003fe3a) main_mup3_pane_g2_ParamLimits

0x7303,	// (0x0003fe3a) main_mup3_pane_g2

0x736b,	// (0x0003fea2) main_mup3_pane_g3_ParamLimits

0x736b,	// (0x0003fea2) main_mup3_pane_g3

0x73a9,	// (0x0003fee0) main_mup3_pane_g4_ParamLimits

0x73a9,	// (0x0003fee0) main_mup3_pane_g4

0x73e7,	// (0x0003ff1e) main_mup3_pane_g5_ParamLimits

0x73e7,	// (0x0003ff1e) main_mup3_pane_g5

0x7425,	// (0x0003ff5c) main_mup3_pane_g6_ParamLimits

0x7425,	// (0x0003ff5c) main_mup3_pane_g6

0xce47,	// (0x0004597e) main_mup3_pane_g7_ParamLimits

0xce47,	// (0x0004597e) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x000482fb) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x000482fb) main_mup3_pane_g

0x749b,	// (0x0003ffd2) main_mup3_pane_t1_ParamLimits

0x749b,	// (0x0003ffd2) main_mup3_pane_t1

0x7503,	// (0x0004003a) main_mup3_pane_t2_ParamLimits

0x7503,	// (0x0004003a) main_mup3_pane_t2

0x75cb,	// (0x00040102) main_mup3_pane_t4_ParamLimits

0x75cb,	// (0x00040102) main_mup3_pane_t4

0x7619,	// (0x00040150) main_mup3_pane_t5_ParamLimits

0x7619,	// (0x00040150) main_mup3_pane_t5

0x76c7,	// (0x000401fe) main_mup3_pane_t6_ParamLimits

0x76c7,	// (0x000401fe) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0004830c) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0004830c) main_mup3_pane_t

0x777b,	// (0x000402b2) mup3_progress_pane_ParamLimits

0x777b,	// (0x000402b2) mup3_progress_pane

0x77d7,	// (0x0004030e) popup_mup3_control_window_ParamLimits

0x77d7,	// (0x0004030e) popup_mup3_control_window

0xce55,	// (0x0004598c) popup_mup3_text_window

0x7805,	// (0x0004033c) mup3_progress_pane_t1

0x781b,	// (0x00040352) mup3_progress_pane_t2

0xce5d,	// (0x00045994) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x00048319) mup3_progress_pane_t

0xce74,	// (0x000459ab) mup_progress_pane_cp03

0x12f1,	// (0x00039e28) bg_tb_trans_pane_cp04

0x7831,	// (0x00040368) mup3_volume_pane

0x7839,	// (0x00040370) popup_mup3_control_window_g1

0x7842,	// (0x00040379) mup3_volume_pane_g1

0x784b,	// (0x00040382) mup3_volume_pane_g2

0x7854,	// (0x0004038b) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x00048320) mup3_volume_pane_g

0x12f1,	// (0x00039e28) bg_tb_trans_pane_cp03

0xce84,	// (0x000459bb) popup_mup3_text_window_g1

0xce8c,	// (0x000459c3) popup_mup3_text_window_t1

0x1abf,	// (0x0003a5f6) list_calc_item_pane_g1_ParamLimits

0xc89a,	// (0x000453d1) mup_volume_pane_cp_g1

0x7273,	// (0x0003fdaa) main_touch_calib_pane_t3

0x7285,	// (0x0003fdbc) main_touch_calib_pane_t4

0x7297,	// (0x0003fdce) main_touch_calib_pane_t5

0x12fb,	// (0x00039e32) aid_cell_size_toolbar2

0x1303,	// (0x00039e3a) aid_popup3_width_pane

0xadda,	// (0x00043911) aid_zoom_text_msg_primary

0xaf00,	// (0x00043a37) vorec_t7

0x1a83,	// (0x0003a5ba) bg_calc_paper_pane_g1_ParamLimits

0x1a8f,	// (0x0003a5c6) bg_calc_paper_pane_g2_ParamLimits

0x1a9b,	// (0x0003a5d2) bg_calc_paper_pane_g3_ParamLimits

0x1aa7,	// (0x0003a5de) bg_calc_paper_pane_g4_ParamLimits

0x1ab3,	// (0x0003a5ea) bg_calc_paper_pane_g5_ParamLimits

0x3a4a,	// (0x0003c581) bg_calc_paper_pane_g6_ParamLimits

0x3a59,	// (0x0003c590) bg_calc_paper_pane_g7_ParamLimits

0x3a68,	// (0x0003c59f) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00047cc0) bg_calc_paper_pane_g_ParamLimits

0x3a77,	// (0x0003c5ae) calc_bg_paper_pane_g9_ParamLimits

0x418c,	// (0x0003ccc3) image_qvga_pane_ParamLimits

0x418c,	// (0x0003ccc3) image_qvga_pane

0x19a8,	// (0x0003a4df) bg_popup_sub_pane_cp04_ParamLimits

0xb4d8,	// (0x0004400f) popup_mup_playback_window_g1_ParamLimits

0xb4e4,	// (0x0004401b) popup_mup_playback_window_t1_ParamLimits

0xb4f9,	// (0x00044030) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0004804c) popup_mup_playback_window_t_ParamLimits

0x6de6,	// (0x0003f91d) main_mup2_pane_g3_ParamLimits

0x6de6,	// (0x0003f91d) main_mup2_pane_g3

0x4403,	// (0x0003cf3a) popup_toolbar_window_cp04

0xb8da,	// (0x00044411) popup_call2_audio_second_window_g3_ParamLimits

0xb8da,	// (0x00044411) popup_call2_audio_second_window_g3

0xbce4,	// (0x0004481b) popup_call2_audio_first_window_g4_ParamLimits

0xbce4,	// (0x0004481b) popup_call2_audio_first_window_g4

0xc363,	// (0x00044e9a) popup_call2_audio_in_window_g4_ParamLimits

0xc363,	// (0x00044e9a) popup_call2_audio_in_window_g4

0x5ee4,	// (0x0003ea1b) aid_area_sk_bg_cut_ParamLimits

0x5ee4,	// (0x0003ea1b) aid_area_sk_bg_cut

0xb50e,	// (0x00044045) aid_area_sk_bg_cut_2_ParamLimits

0xb50e,	// (0x00044045) aid_area_sk_bg_cut_2

0x70bb,	// (0x0003fbf2) aid_placing_details_win

0x70c3,	// (0x0003fbfa) aid_placing_details_win_2

0xcc80,	// (0x000457b7) camera2_autofocus_pane_g1_ParamLimits

0x36c0,	// (0x0003c1f7) popup_fixed_preview_cale_window_ParamLimits

0x36c0,	// (0x0003c1f7) popup_fixed_preview_cale_window

0xb2a6,	// (0x00043ddd) navi_slider_pane_g3

0xb2af,	// (0x00043de6) navi_slider_pane_g4

0xb2b8,	// (0x00043def) navi_slider_pane_g5

0xb2a6,	// (0x00043ddd) navi_slider_pane_g6

0xec16,	// (0x0004774d) navi_slider_pane_g7

0xb3d9,	// (0x00043f10) mup_scale_pane_g3

0xb3e2,	// (0x00043f19) mup_scale_pane_g4

0xb3eb,	// (0x00043f22) mup_scale_pane_g5

0x5ca6,	// (0x0003e7dd) mup_scale_pane_g6

0x5caf,	// (0x0003e7e6) mup_scale_pane_g7

0xb2a6,	// (0x00043ddd) cams2_slider_pane_g3

0xc91c,	// (0x00045453) cams2_slider_pane_g4

0xed0a,	// (0x00047841) cams2_slider_pane_g5

0xb2a6,	// (0x00043ddd) cams2_slider_pane_g6

0xed12,	// (0x00047849) cams2_slider_pane_g7

0xcb3f,	// (0x00045676) camera2_autofocus_pane_cp_g1

0xce9a,	// (0x000459d1) bg_popup_preview_window_pane_cp02_ParamLimits

0xce9a,	// (0x000459d1) bg_popup_preview_window_pane_cp02

0x785d,	// (0x00040394) list_fp_cale_pane_ParamLimits

0x785d,	// (0x00040394) list_fp_cale_pane

0xcea6,	// (0x000459dd) popup_fixed_preview_cale_window_t1_ParamLimits

0xcea6,	// (0x000459dd) popup_fixed_preview_cale_window_t1

0x7869,	// (0x000403a0) popup_fixed_preview_cale_window_t2_ParamLimits

0x7869,	// (0x000403a0) popup_fixed_preview_cale_window_t2

0x787e,	// (0x000403b5) popup_fixed_preview_cale_window_t3_ParamLimits

0x787e,	// (0x000403b5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x00048327) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x00048327) popup_fixed_preview_cale_window_t

0x7893,	// (0x000403ca) list_single_fp_cale_pane_ParamLimits

0x7893,	// (0x000403ca) list_single_fp_cale_pane

0x78a7,	// (0x000403de) list_single_fp_cale_pane_g1_ParamLimits

0x78a7,	// (0x000403de) list_single_fp_cale_pane_g1

0xcec4,	// (0x000459fb) list_single_fp_cale_pane_g2_ParamLimits

0xcec4,	// (0x000459fb) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x0004832e) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x0004832e) list_single_fp_cale_pane_g

0x78b3,	// (0x000403ea) list_single_fp_cale_pane_t1_ParamLimits

0x78b3,	// (0x000403ea) list_single_fp_cale_pane_t1

0x78c5,	// (0x000403fc) list_single_fp_cale_pane_t2_ParamLimits

0x78c5,	// (0x000403fc) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x00048335) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x00048335) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x12f1,	// (0x00039e28) main_dialer_pane

0x78f8,	// (0x0004042f) aid_cell_size_keypad

0x7902,	// (0x00040439) dialer_ne_pane

0x790a,	// (0x00040441) grid_dialer_command_1_pane

0x7912,	// (0x00040449) grid_dialer_command_2_pane

0x791a,	// (0x00040451) grid_dialer_keypad_pane

0x792a,	// (0x00040461) bg_popup_call_pane_cp06_ParamLimits

0x792a,	// (0x00040461) bg_popup_call_pane_cp06

0x7936,	// (0x0004046d) dialer_ne_clear_pane_ParamLimits

0x7936,	// (0x0004046d) dialer_ne_clear_pane

0xcedd,	// (0x00045a14) dialer_ne_pane_g1

0xcee5,	// (0x00045a1c) dialer_ne_pane_t1_ParamLimits

0xcee5,	// (0x00045a1c) dialer_ne_pane_t1

0x7942,	// (0x00040479) dialer_ne_pane_t2_ParamLimits

0x7942,	// (0x00040479) dialer_ne_pane_t2

0x796c,	// (0x000404a3) dialer_ne_pane_t3_ParamLimits

0x796c,	// (0x000404a3) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0004833a) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0004833a) dialer_ne_pane_t

0x799c,	// (0x000404d3) dialer_ne_pane_t3_copy1_ParamLimits

0x799c,	// (0x000404d3) dialer_ne_pane_t3_copy1

0x79cb,	// (0x00040502) cell_dialer_keypad_pane_ParamLimits

0x79cb,	// (0x00040502) cell_dialer_keypad_pane

0x79e0,	// (0x00040517) cell_dialer_command_1_pane_ParamLimits

0x79e0,	// (0x00040517) cell_dialer_command_1_pane

0x79f6,	// (0x0004052d) cell_dialer_command_2_pane_ParamLimits

0x79f6,	// (0x0004052d) cell_dialer_command_2_pane

0xcef7,	// (0x00045a2e) bg_button_pane_cp02_ParamLimits

0xcef7,	// (0x00045a2e) bg_button_pane_cp02

0x7a05,	// (0x0004053c) cell_dialer_keypad_pane_g1_ParamLimits

0x7a05,	// (0x0004053c) cell_dialer_keypad_pane_g1

0xcef7,	// (0x00045a2e) bg_button_pane_cp03_ParamLimits

0xcef7,	// (0x00045a2e) bg_button_pane_cp03

0x7a1a,	// (0x00040551) cell_dialer_command_1_pane_g1_ParamLimits

0x7a1a,	// (0x00040551) cell_dialer_command_1_pane_g1

0xcf03,	// (0x00045a3a) bg_button_pane_cp04

0x7a2e,	// (0x00040565) cell_dialer_command_2_pane_g1

0xb295,	// (0x00043dcc) bg_button_pane_cp06

0xcf0b,	// (0x00045a42) dialer_ne_clear_pane_g1

0xb1b2,	// (0x00043ce9) navi_pane_g2

0x58ab,	// (0x0003e3e2) navi_pane_g3

0x0002,

0xf418,	// (0x00047f4f) navi_pane_g

0xb234,	// (0x00043d6b) navi_pane_mv_g2

0xb25c,	// (0x00043d93) navi_pane_mv_g5

0x58d0,	// (0x0003e407) navi_pane_mv_t1

0x1a77,	// (0x0003a5ae) main_clock2_pane

0x7a62,	// (0x00040599) main_clock2_list_pane_ParamLimits

0x7a62,	// (0x00040599) main_clock2_list_pane

0x7a94,	// (0x000405cb) main_clock2_pane_t1_ParamLimits

0x7a94,	// (0x000405cb) main_clock2_pane_t1

0x7acb,	// (0x00040602) main_clock2_pane_t2_ParamLimits

0x7acb,	// (0x00040602) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x00048341) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x00048341) main_clock2_pane_t

0x7b4d,	// (0x00040684) popup_clock_analogue_window_cp03_ParamLimits

0x7b4d,	// (0x00040684) popup_clock_analogue_window_cp03

0x7b70,	// (0x000406a7) popup_clock_digital_window_cp02_ParamLimits

0x7b70,	// (0x000406a7) popup_clock_digital_window_cp02

0x7be1,	// (0x00040718) main_clock2_list_single_pane_ParamLimits

0x7be1,	// (0x00040718) main_clock2_list_single_pane

0xb295,	// (0x00043dcc) list_highlight_pane_cp05

0xcf13,	// (0x00045a4a) main_clock2_list_single_pane_t1

0x4403,	// (0x0003cf3a) popup_toolbar_window_cp04_ParamLimits

0x711c,	// (0x0003fc53) camera2_autofocus_pane_g2_ParamLimits

0x711c,	// (0x0003fc53) camera2_autofocus_pane_g2

0x7128,	// (0x0003fc5f) camera2_autofocus_pane_g3_ParamLimits

0x7128,	// (0x0003fc5f) camera2_autofocus_pane_g3

0x7134,	// (0x0003fc6b) camera2_autofocus_pane_g4_ParamLimits

0x7134,	// (0x0003fc6b) camera2_autofocus_pane_g4

0x7140,	// (0x0003fc77) camera2_autofocus_pane_g5_ParamLimits

0x7140,	// (0x0003fc77) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0004828a) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0004828a) camera2_autofocus_pane_g

0x72c1,	// (0x0003fdf8) camera2_autofocus_pane_cp_g2

0x72c9,	// (0x0003fe00) camera2_autofocus_pane_cp_g3

0x72d1,	// (0x0003fe08) camera2_autofocus_pane_cp_g4

0x72d9,	// (0x0003fe10) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x000482f0) camera2_autofocus_pane_cp_g

0x7922,	// (0x00040459) popup_dialer_spcha_window

0x12f1,	// (0x00039e28) bg_popup_sub_pane_cp07

0xcf21,	// (0x00045a58) list_spcha_pane

0xcf29,	// (0x00045a60) list_single_spcha_pane_ParamLimits

0xcf29,	// (0x00045a60) list_single_spcha_pane

0x12f1,	// (0x00039e28) list_highlight_pane_cp06

0xcf3a,	// (0x00045a71) list_single_spcha_pane_t1

0xc10d,	// (0x00044c44) popup_call2_audio_out_window_g4_ParamLimits

0xc10d,	// (0x00044c44) popup_call2_audio_out_window_g4

0x12f1,	// (0x00039e28) main_imed2_pane

0xc72a,	// (0x00045261) popup_imed_adjust2_window

0x6600,	// (0x0003f137) popup_imed_trans_window_ParamLimits

0x6600,	// (0x0003f137) popup_imed_trans_window

0xc983,	// (0x000454ba) popup_blid_sat_info2_window_t1

0xc991,	// (0x000454c8) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x0004821f) popup_blid_sat_info2_window_t

0x7c8b,	// (0x000407c2) aid_size_cell_colour_35

0x7cab,	// (0x000407e2) aid_size_cell_colour_112

0x7ccb,	// (0x00040802) aid_size_cell_effect

0xc704,	// (0x0004523b) bg_tb_trans_pane_cp02

0x51ce,	// (0x0003dd05) heading_imed_pane

0x7ceb,	// (0x00040822) listscroll_imed_pane

0xcf48,	// (0x00045a7f) heading_imed_pane_g1

0xcf50,	// (0x00045a87) heading_imed_pane_t1

0xcf5e,	// (0x00045a95) grid_imed_colour_35_pane_ParamLimits

0xcf5e,	// (0x00045a95) grid_imed_colour_35_pane

0x7cf7,	// (0x0004082e) grid_imed_effect_pane

0xcf71,	// (0x00045aa8) list_imed_aspect_pane

0x7d0a,	// (0x00040841) scroll_pane_cp027_ParamLimits

0x7d0a,	// (0x00040841) scroll_pane_cp027

0x7d16,	// (0x0004084d) cell_imed_effect_pane_ParamLimits

0x7d16,	// (0x0004084d) cell_imed_effect_pane

0xcf79,	// (0x00045ab0) cell_imed_colour_pane_ParamLimits

0xcf79,	// (0x00045ab0) cell_imed_colour_pane

0xcfb3,	// (0x00045aea) cell_imed_colour_pane_g1_ParamLimits

0xcfb3,	// (0x00045aea) cell_imed_colour_pane_g1

0xcfc4,	// (0x00045afb) hgihlgiht_grid_pane_cp016_ParamLimits

0xcfc4,	// (0x00045afb) hgihlgiht_grid_pane_cp016

0x7d3b,	// (0x00040872) cell_imed_effect_pane_g1

0x7d43,	// (0x0004087a) grid_highlight_pane_cp017

0xcfd5,	// (0x00045b0c) list_imed_single_pane_ParamLimits

0xcfd5,	// (0x00045b0c) list_imed_single_pane

0x12f1,	// (0x00039e28) list_highlight_pane_cp07

0xcfe8,	// (0x00045b1f) list_imed_aspect_pane_comp1_t1

0xc704,	// (0x0004523b) bg_tb_trans_pane_cp05

0xd008,	// (0x00045b3f) popup_imed_adjust2_window_g1

0xd02f,	// (0x00045b66) popup_imed_adjust2_window_t1

0xd047,	// (0x00045b7e) slider_imed_adjust_pane

0xd05b,	// (0x00045b92) slider_imed_adjust_pane_g1

0xd06b,	// (0x00045ba2) slider_imed_adjust_pane_g2

0xd07b,	// (0x00045bb2) slider_imed_adjust_pane_g3

0xd08c,	// (0x00045bc3) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x0004835e) slider_imed_adjust_pane_g

0x7d4c,	// (0x00040883) aid_size_cell_clipart2

0x7d58,	// (0x0004088f) grid_imed_clipart_pane

0xd09d,	// (0x00045bd4) scroll_pane_cp031

0x7d62,	// (0x00040899) cell_imed_clipart_pane_ParamLimits

0x7d62,	// (0x00040899) cell_imed_clipart_pane

0x7d7a,	// (0x000408b1) cell_imed_clipart_pane_g1

0x12f1,	// (0x00039e28) grid_highlight_pane_cp014

0x7a75,	// (0x000405ac) main_clock2_pane_g1_ParamLimits

0x7a75,	// (0x000405ac) main_clock2_pane_g1

0x7b8c,	// (0x000406c3) aid_call2_pane_cp10

0x7b9e,	// (0x000406d5) aid_call_pane_cp10

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g1

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g2

0x7bb0,	// (0x000406e7) popup_clock_analogue_window_cp10_g3

0x7bb0,	// (0x000406e7) popup_clock_analogue_window_cp10_g4

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0004834c) popup_clock_analogue_window_cp10_g

0x7bc2,	// (0x000406f9) popup_clock_analogue_window_cp10_t1

0x7bf3,	// (0x0004072a) clock_digital_number_pane_cp10_ParamLimits

0x7bf3,	// (0x0004072a) clock_digital_number_pane_cp10

0x7c0b,	// (0x00040742) clock_digital_number_pane_cp11_ParamLimits

0x7c0b,	// (0x00040742) clock_digital_number_pane_cp11

0x7c23,	// (0x0004075a) clock_digital_number_pane_cp12_ParamLimits

0x7c23,	// (0x0004075a) clock_digital_number_pane_cp12

0x7c3b,	// (0x00040772) clock_digital_number_pane_cp13_ParamLimits

0x7c3b,	// (0x00040772) clock_digital_number_pane_cp13

0x7c53,	// (0x0004078a) clock_digital_separator_pane_cp10_ParamLimits

0x7c53,	// (0x0004078a) clock_digital_separator_pane_cp10

0x7c6b,	// (0x000407a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c6b,	// (0x000407a2) popup_clock_digital_window_cp02_t1

0x19a0,	// (0x0003a4d7) clock_digital_number_pane_cp10_g1

0x19a0,	// (0x0003a4d7) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x00048367) clock_digital_number_pane_cp10_g

0x19a0,	// (0x0003a4d7) clock_digital_separator_pane_cp10_g1

0x19a0,	// (0x0003a4d7) clock_digital_separator_pane_g2_cp10

0xb265,	// (0x00043d9c) navi_pane_vded_g4

0xb26e,	// (0x00043da5) navi_pane_vded_g5

0xb277,	// (0x00043dae) navi_pane_vded_t1

0x12f1,	// (0x00039e28) main_vded_pane

0x7d83,	// (0x000408ba) main_vded_pane_g1

0x7d8d,	// (0x000408c4) main_vded_pane_g2

0x7d95,	// (0x000408cc) main_vded_pane_g3

0x0002,

0xf835,	// (0x0004836c) main_vded_pane_g

0x7d9d,	// (0x000408d4) main_vded_pane_t1

0x7dab,	// (0x000408e2) main_vded_pane_t2

0x0001,

0xf83c,	// (0x00048373) main_vded_pane_t

0x7db9,	// (0x000408f0) vded_slider_pane

0x7dc1,	// (0x000408f8) vded_video_pane

0xd0a5,	// (0x00045bdc) vded_video_pane_g1

0x7dc9,	// (0x00040900) vded_video_pane_g2

0xcb3f,	// (0x00045676) vded_video_pane_g3

0x0002,

0xf841,	// (0x00048378) vded_video_pane_g

0xd0af,	// (0x00045be6) vded_slider_pane_g1

0xc89a,	// (0x000453d1) vded_slider_pane_g2

0xd0b8,	// (0x00045bef) vded_slider_pane_g3

0xd0c1,	// (0x00045bf8) vded_slider_pane_g4

0xd0ca,	// (0x00045c01) vded_slider_pane_g5

0x0004,

0xf848,	// (0x0004837f) vded_slider_pane_g

0x77c1,	// (0x000402f8) mup3_rocker_pane_ParamLimits

0x77c1,	// (0x000402f8) mup3_rocker_pane

0x7dd2,	// (0x00040909) mup3_control_keys_pane_g1

0x7dda,	// (0x00040911) mup3_control_keys_pane_g2

0x7de2,	// (0x00040919) mup3_control_keys_pane_g3

0x7dea,	// (0x00040921) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0004838a) mup3_control_keys_pane_g

0x36f3,	// (0x0003c22a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x36f3,	// (0x0003c22a) popup_toolbar2_fixed_window_cp01

0x77ef,	// (0x00040326) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77ef,	// (0x00040326) popup_toolbar2_fixed_window_cp02

0xba4c,	// (0x00044583) popup_call2_audio_second_window_t4_ParamLimits

0xba4c,	// (0x00044583) popup_call2_audio_second_window_t4

0xbf7a,	// (0x00044ab1) popup_call2_audio_first_window_t6_ParamLimits

0xbf7a,	// (0x00044ab1) popup_call2_audio_first_window_t6

0xc210,	// (0x00044d47) popup_call2_audio_out_window_t6_ParamLimits

0xc210,	// (0x00044d47) popup_call2_audio_out_window_t6

0x12f1,	// (0x00039e28) main_vitu_pane

0x7dfa,	// (0x00040931) aid_size_cell_itu_ParamLimits

0x7dfa,	// (0x00040931) aid_size_cell_itu

0x1da6,	// (0x0003a8dd) bg_popup_window_pane_cp08_ParamLimits

0x1da6,	// (0x0003a8dd) bg_popup_window_pane_cp08

0x7e10,	// (0x00040947) field_vitu_entry_pane_ParamLimits

0x7e10,	// (0x00040947) field_vitu_entry_pane

0x7e23,	// (0x0004095a) grid_vitu_function_pane_ParamLimits

0x7e23,	// (0x0004095a) grid_vitu_function_pane

0x7e38,	// (0x0004096f) grid_vitu_itu_pane_ParamLimits

0x7e38,	// (0x0004096f) grid_vitu_itu_pane

0x7e4e,	// (0x00040985) cell_vitu_itu_pane_ParamLimits

0x7e4e,	// (0x00040985) cell_vitu_itu_pane

0x7e70,	// (0x000409a7) cell_vitu_function_pane_ParamLimits

0x7e70,	// (0x000409a7) cell_vitu_function_pane

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp08_ParamLimits

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp08

0x7e89,	// (0x000409c0) field_vitu_entry_pane_t1_ParamLimits

0x7e89,	// (0x000409c0) field_vitu_entry_pane_t1

0xd0eb,	// (0x00045c22) field_vitu_entry_pane_t2_ParamLimits

0xd0eb,	// (0x00045c22) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x00048398) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x00048398) field_vitu_entry_pane_t

0xd108,	// (0x00045c3f) bg_button_pane_cp05_ParamLimits

0xd108,	// (0x00045c3f) bg_button_pane_cp05

0x7ea5,	// (0x000409dc) cell_vitu_itu_pane_g1

0x7ebd,	// (0x000409f4) cell_vitu_itu_pane_t1_ParamLimits

0x7ebd,	// (0x000409f4) cell_vitu_itu_pane_t1

0x7ecf,	// (0x00040a06) cell_vitu_itu_pane_t2_ParamLimits

0x7ecf,	// (0x00040a06) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0004839d) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0004839d) cell_vitu_itu_pane_t

0xd116,	// (0x00045c4d) bg_button_pane_cp07

0x7f04,	// (0x00040a3b) cell_vitu_function_pane_g1

0xadea,	// (0x00043921) main_calc_pane_g1

0x3557,	// (0x0003c08e) aid_visual_content_pane

0x12f1,	// (0x00039e28) main_vradio_pane

0x7f0d,	// (0x00040a44) main_vradio_pane_g1_ParamLimits

0x7f0d,	// (0x00040a44) main_vradio_pane_g1

0xd120,	// (0x00045c57) main_vradio_pane_g2_ParamLimits

0xd120,	// (0x00045c57) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x000483a4) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x000483a4) main_vradio_pane_g

0x7f23,	// (0x00040a5a) main_vradio_pane_t1_ParamLimits

0x7f23,	// (0x00040a5a) main_vradio_pane_t1

0x7f38,	// (0x00040a6f) main_vradio_pane_t2_ParamLimits

0x7f38,	// (0x00040a6f) main_vradio_pane_t2

0xd12d,	// (0x00045c64) main_vradio_pane_t3_ParamLimits

0xd12d,	// (0x00045c64) main_vradio_pane_t3

0x0002,

0xf872,	// (0x000483a9) main_vradio_pane_t_ParamLimits

0xf872,	// (0x000483a9) main_vradio_pane_t

0x7f4d,	// (0x00040a84) vradio_rocker_control_pane_ParamLimits

0x7f4d,	// (0x00040a84) vradio_rocker_control_pane

0x7f5f,	// (0x00040a96) vradio_station_info_pane_ParamLimits

0x7f5f,	// (0x00040a96) vradio_station_info_pane

0xd13f,	// (0x00045c76) vradio_frequency_info_pane_ParamLimits

0xd13f,	// (0x00045c76) vradio_frequency_info_pane

0xcb3f,	// (0x00045676) vradio_station_info_pane_g1

0xd14e,	// (0x00045c85) vradio_station_info_pane_t1_ParamLimits

0xd14e,	// (0x00045c85) vradio_station_info_pane_t1

0xd170,	// (0x00045ca7) vradio_station_info_pane_t2_ParamLimits

0xd170,	// (0x00045ca7) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x000483b0) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x000483b0) vradio_station_info_pane_t

0xd182,	// (0x00045cb9) vradio_tuning_pane

0xd18a,	// (0x00045cc1) vradio_rocker_control_pane_g1

0xd192,	// (0x00045cc9) vradio_rocker_control_pane_g2

0xd19a,	// (0x00045cd1) vradio_rocker_control_pane_g3

0xd1a2,	// (0x00045cd9) vradio_rocker_control_pane_g4

0xd1aa,	// (0x00045ce1) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x000483b5) vradio_rocker_control_pane_g

0x7f6f,	// (0x00040aa6) vradio_frequency_info_pane_g1

0xd1b2,	// (0x00045ce9) vradio_frequency_info_pane_t1_ParamLimits

0xd1b2,	// (0x00045ce9) vradio_frequency_info_pane_t1

0x7f79,	// (0x00040ab0) vradio_tuning_pane_g1

0x7f82,	// (0x00040ab9) vradio_tuning_pane_t1

0x1313,	// (0x00039e4a) area_side_right_pane_ParamLimits

0x1313,	// (0x00039e4a) area_side_right_pane

0xc6cb,	// (0x00045202) status_small_pane_g1

0xc6d3,	// (0x0004520a) status_small_pane_g2

0xc6dc,	// (0x00045213) status_small_pane_g3

0xc6e5,	// (0x0004521c) status_small_pane_g4

0x0003,

0xf63e,	// (0x00048175) status_small_pane_g

0xc6ee,	// (0x00045225) status_small_pane_t1

0x12f1,	// (0x00039e28) main_video3_pane

0xd1c6,	// (0x00045cfd) cams_zoom_vslider_pane

0xd1ce,	// (0x00045d05) image3_wide_pane_ParamLimits

0xd1ce,	// (0x00045d05) image3_wide_pane

0xd1e8,	// (0x00045d1f) image3_wide_small_pane

0xd1f2,	// (0x00045d29) main_video3_pane_g1_ParamLimits

0xd1f2,	// (0x00045d29) main_video3_pane_g1

0xd20e,	// (0x00045d45) main_video3_pane_g2_ParamLimits

0xd20e,	// (0x00045d45) main_video3_pane_g2

0x0001,

0xf889,	// (0x000483c0) main_video3_pane_g_ParamLimits

0xf889,	// (0x000483c0) main_video3_pane_g

0xd22a,	// (0x00045d61) main_video3_pane_t1_ParamLimits

0xd22a,	// (0x00045d61) main_video3_pane_t1

0xd255,	// (0x00045d8c) main_video3_pane_t2_ParamLimits

0xd255,	// (0x00045d8c) main_video3_pane_t2

0xd280,	// (0x00045db7) main_video3_pane_t3_ParamLimits

0xd280,	// (0x00045db7) main_video3_pane_t3

0x0002,

0xf88e,	// (0x000483c5) main_video3_pane_t_ParamLimits

0xf88e,	// (0x000483c5) main_video3_pane_t

0xd2ab,	// (0x00045de2) cams_zoom_vslider_pane_g1

0xd2b4,	// (0x00045deb) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x000483cc) cams_zoom_vslider_pane_g

0xd2bc,	// (0x00045df3) small_slider_vertical_pane

0xcb3f,	// (0x00045676) small_slider_vertical_pane_g1

0xcb3f,	// (0x00045676) small_slider_vertical_pane_g2

0xd2c4,	// (0x00045dfb) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x000483d1) small_slider_vertical_pane_g

0x12f1,	// (0x00039e28) main_hwr_training_pane

0xd2cd,	// (0x00045e04) hwr_training_instruct_pane_ParamLimits

0xd2cd,	// (0x00045e04) hwr_training_instruct_pane

0x7f91,	// (0x00040ac8) hwr_training_navi_pane_ParamLimits

0x7f91,	// (0x00040ac8) hwr_training_navi_pane

0x7fa8,	// (0x00040adf) hwr_training_write_pane_ParamLimits

0x7fa8,	// (0x00040adf) hwr_training_write_pane

0x12f1,	// (0x00039e28) bg_frame_shadow_pane

0xd2fc,	// (0x00045e33) hwr_training_write_pane_g1

0xd304,	// (0x00045e3b) hwr_training_write_pane_g2

0xd30c,	// (0x00045e43) hwr_training_write_pane_g3

0xd314,	// (0x00045e4b) hwr_training_write_pane_g4

0xd31c,	// (0x00045e53) hwr_training_write_pane_g5

0xd324,	// (0x00045e5b) hwr_training_write_pane_g6

0xd32c,	// (0x00045e63) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x000483d8) hwr_training_write_pane_g

0xed1b,	// (0x00047852) hwr_training_navi_pane_g1_ParamLimits

0xed1b,	// (0x00047852) hwr_training_navi_pane_g1

0xed2d,	// (0x00047864) hwr_training_navi_pane_g2_ParamLimits

0xed2d,	// (0x00047864) hwr_training_navi_pane_g2

0xed3f,	// (0x00047876) hwr_training_navi_pane_g3_ParamLimits

0xed3f,	// (0x00047876) hwr_training_navi_pane_g3

0xed4f,	// (0x00047886) hwr_training_navi_pane_g4_ParamLimits

0xed4f,	// (0x00047886) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x000483e7) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x000483e7) hwr_training_navi_pane_g

0xed5c,	// (0x00047893) hwr_training_navi_pane_t1

0x7fe8,	// (0x00040b1f) list_single_hwr_training_instruct_pane_ParamLimits

0x7fe8,	// (0x00040b1f) list_single_hwr_training_instruct_pane

0xd334,	// (0x00045e6b) list_single_hwr_training_instruct_pane_t1

0xca7f,	// (0x000455b6) bg_frame_shadow_pane_g1

0xd343,	// (0x00045e7a) bg_frame_shadow_pane_g2

0xd34b,	// (0x00045e82) bg_frame_shadow_pane_g3

0xd353,	// (0x00045e8a) bg_frame_shadow_pane_g4

0xd35b,	// (0x00045e92) bg_frame_shadow_pane_g5

0xd363,	// (0x00045e9a) bg_frame_shadow_pane_g6

0xd36b,	// (0x00045ea2) bg_frame_shadow_pane_g7

0x1b42,	// (0x0003a679) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x000483f2) bg_frame_shadow_pane_g

0x12f1,	// (0x00039e28) main_video_tele_dialer_pane

0x8000,	// (0x00040b37) aid_size_cell_video_keypad_ParamLimits

0x8000,	// (0x00040b37) aid_size_cell_video_keypad

0x801a,	// (0x00040b51) grid_video_dialer_keypad_pane_ParamLimits

0x801a,	// (0x00040b51) grid_video_dialer_keypad_pane

0x805c,	// (0x00040b93) video_down_pane_cp_ParamLimits

0x805c,	// (0x00040b93) video_down_pane_cp

0x808c,	// (0x00040bc3) cell_video_dialer_keypad_pane_ParamLimits

0x808c,	// (0x00040bc3) cell_video_dialer_keypad_pane

0xd373,	// (0x00045eaa) bg_button_pane_cp08_ParamLimits

0xd373,	// (0x00045eaa) bg_button_pane_cp08

0x80ae,	// (0x00040be5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x80ae,	// (0x00040be5) cell_video_dialer_keypad_pane_g1

0x77ab,	// (0x000402e2) mup3_rocker2_pane_ParamLimits

0x77ab,	// (0x000402e2) mup3_rocker2_pane

0xcb3f,	// (0x00045676) mup3_rocker2_pane_g1

0x64f9,	// (0x0003f030) main_dialer2_pane

0x12f1,	// (0x00039e28) main_mp4_pane

0xed72,	// (0x000478a9) main_mp4_pane_g1_ParamLimits

0xed72,	// (0x000478a9) main_mp4_pane_g1

0xed72,	// (0x000478a9) main_mp4_pane_g2_ParamLimits

0xed72,	// (0x000478a9) main_mp4_pane_g2

0x80e9,	// (0x00040c20) main_mp4_pane_g3_ParamLimits

0x80e9,	// (0x00040c20) main_mp4_pane_g3

0xed80,	// (0x000478b7) main_mp4_pane_g4_ParamLimits

0xed80,	// (0x000478b7) main_mp4_pane_g4

0xedae,	// (0x000478e5) main_mp4_pane_g5_ParamLimits

0xedae,	// (0x000478e5) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x00048412) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x00048412) main_mp4_pane_g

0xee0a,	// (0x00047941) main_mp4_pane_t1_ParamLimits

0xee0a,	// (0x00047941) main_mp4_pane_t1

0xee62,	// (0x00047999) main_mp4_pane_t2_ParamLimits

0xee62,	// (0x00047999) main_mp4_pane_t2

0xd37f,	// (0x00045eb6) main_mp4_pane_t3_ParamLimits

0xd37f,	// (0x00045eb6) main_mp4_pane_t3

0xeeb4,	// (0x000479eb) main_mp4_pane_t4_ParamLimits

0xeeb4,	// (0x000479eb) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x0004841f) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x0004841f) main_mp4_pane_t

0xeef4,	// (0x00047a2b) mp4_progress_pane_ParamLimits

0xeef4,	// (0x00047a2b) mp4_progress_pane

0xef38,	// (0x00047a6f) mp4_rocker_pane_ParamLimits

0xef38,	// (0x00047a6f) mp4_rocker_pane

0xd3ad,	// (0x00045ee4) mp4_progress_pane_t1

0xd3c4,	// (0x00045efb) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x00048428) mp4_progress_pane_t

0xd3db,	// (0x00045f12) mup_progress_pane_cp04

0xcb3f,	// (0x00045676) mp4_rocker_pane_g1

0x8119,	// (0x00040c50) aid_cell_size_keypad2_ParamLimits

0x8119,	// (0x00040c50) aid_cell_size_keypad2

0x8133,	// (0x00040c6a) dialer2_ne_pane_ParamLimits

0x8133,	// (0x00040c6a) dialer2_ne_pane

0x8148,	// (0x00040c7f) grid_dialer2_keypad_pane_ParamLimits

0x8148,	// (0x00040c7f) grid_dialer2_keypad_pane

0xc92c,	// (0x00045463) bg_popup_call_pane_cp07_ParamLimits

0xc92c,	// (0x00045463) bg_popup_call_pane_cp07

0x815e,	// (0x00040c95) dialer2_ne_pane_t1_ParamLimits

0x815e,	// (0x00040c95) dialer2_ne_pane_t1

0x819b,	// (0x00040cd2) cell_dialer2_keypad_pane_ParamLimits

0x819b,	// (0x00040cd2) cell_dialer2_keypad_pane

0xd3f9,	// (0x00045f30) bg_button_pane_pane_cp04_ParamLimits

0xd3f9,	// (0x00045f30) bg_button_pane_pane_cp04

0x81bd,	// (0x00040cf4) cell_dialer2_keypad_pane_g1_ParamLimits

0x81bd,	// (0x00040cf4) cell_dialer2_keypad_pane_g1

0x4348,	// (0x0003ce7f) aid_placing_vt_set_content_ParamLimits

0x4348,	// (0x0003ce7f) aid_placing_vt_set_content

0x4366,	// (0x0003ce9d) aid_placing_vt_set_title_ParamLimits

0x4366,	// (0x0003ce9d) aid_placing_vt_set_title

0x12f1,	// (0x00039e28) main_image3_pane

0x824c,	// (0x00040d83) area_side_right_pane_cp01_ParamLimits

0x824c,	// (0x00040d83) area_side_right_pane_cp01

0xed72,	// (0x000478a9) main_image3_pane_g1_ParamLimits

0xed72,	// (0x000478a9) main_image3_pane_g1

0x8263,	// (0x00040d9a) main_image3_pane_g2_ParamLimits

0x8263,	// (0x00040d9a) main_image3_pane_g2

0x8289,	// (0x00040dc0) main_image3_pane_g3_ParamLimits

0x8289,	// (0x00040dc0) main_image3_pane_g3

0x82af,	// (0x00040de6) main_image3_pane_g4_ParamLimits

0x82af,	// (0x00040de6) main_image3_pane_g4

0x0003,

0xf900,	// (0x00048437) main_image3_pane_g_ParamLimits

0xf900,	// (0x00048437) main_image3_pane_g

0x82d5,	// (0x00040e0c) main_image3_pane_t1_ParamLimits

0x82d5,	// (0x00040e0c) main_image3_pane_t1

0x832d,	// (0x00040e64) main_image3_pane_t2_ParamLimits

0x832d,	// (0x00040e64) main_image3_pane_t2

0x837f,	// (0x00040eb6) main_image3_pane_t3_ParamLimits

0x837f,	// (0x00040eb6) main_image3_pane_t3

0x0003,

0xf909,	// (0x00048440) main_image3_pane_t_ParamLimits

0xf909,	// (0x00048440) main_image3_pane_t

0x1da6,	// (0x0003a8dd) grid_sctrl_middle_pane_cp01_ParamLimits

0x1da6,	// (0x0003a8dd) grid_sctrl_middle_pane_cp01

0x83ff,	// (0x00040f36) cell_sctrl_middle_pane_cp01_ParamLimits

0x83ff,	// (0x00040f36) cell_sctrl_middle_pane_cp01

0x841c,	// (0x00040f53) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x841c,	// (0x00040f53) cell_sctrl_middle_pane_cp01_g1

0x12f1,	// (0x00039e28) main_call4_pane

0x8432,	// (0x00040f69) aid_size_button_call4_ParamLimits

0x8432,	// (0x00040f69) aid_size_button_call4

0x845f,	// (0x00040f96) call4_windows_pane_ParamLimits

0x845f,	// (0x00040f96) call4_windows_pane

0x8475,	// (0x00040fac) grid_call4_button_pane_ParamLimits

0x8475,	// (0x00040fac) grid_call4_button_pane

0xd41d,	// (0x00045f54) call4_windows_conf_pane

0x8494,	// (0x00040fcb) popup_call4_audio_first_window_ParamLimits

0x8494,	// (0x00040fcb) popup_call4_audio_first_window

0x84b4,	// (0x00040feb) popup_call4_audio_second_window_ParamLimits

0x84b4,	// (0x00040feb) popup_call4_audio_second_window

0xd450,	// (0x00045f87) popup_call4_audio_wait_window_ParamLimits

0xd450,	// (0x00045f87) popup_call4_audio_wait_window

0x84c6,	// (0x00040ffd) cell_call4_button_pane_ParamLimits

0x84c6,	// (0x00040ffd) cell_call4_button_pane

0x84eb,	// (0x00041022) bg_button_pane_cp09_ParamLimits

0x84eb,	// (0x00041022) bg_button_pane_cp09

0x84f7,	// (0x0004102e) cell_call4_button_pane_g1_ParamLimits

0x84f7,	// (0x0004102e) cell_call4_button_pane_g1

0x851d,	// (0x00041054) cell_call4_button_pane_t1_ParamLimits

0x851d,	// (0x00041054) cell_call4_button_pane_t1

0xd496,	// (0x00045fcd) popup_call4_audio_conf_window_ParamLimits

0xd496,	// (0x00045fcd) popup_call4_audio_conf_window

0x7805,	// (0x0004033c) mup3_progress_pane_t1_ParamLimits

0x781b,	// (0x00040352) mup3_progress_pane_t2_ParamLimits

0xce5d,	// (0x00045994) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x00048319) mup3_progress_pane_t_ParamLimits

0xce74,	// (0x000459ab) mup_progress_pane_cp03_ParamLimits

0x7df2,	// (0x00040929) mup3_control_keys_pane_g4_copy1

0xef22,	// (0x00047a59) mp4_rocker2_pane_ParamLimits

0xef22,	// (0x00047a59) mp4_rocker2_pane

0xd4aa,	// (0x00045fe1) mp4_rocker2_pane_g1

0xd4b2,	// (0x00045fe9) mp4_rocker2_pane_g2

0xef88,	// (0x00047abf) mp4_rocker2_pane_g3

0xef90,	// (0x00047ac7) mp4_rocker2_pane_g4

0xef98,	// (0x00047acf) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x00048449) mp4_rocker2_pane_g

0x12f1,	// (0x00039e28) main_camera4_pane

0x12f1,	// (0x00039e28) main_video4_pane

0x802e,	// (0x00040b65) main_video_tele_dialer_pane_t1_ParamLimits

0x802e,	// (0x00040b65) main_video_tele_dialer_pane_t1

0x8045,	// (0x00040b7c) main_video_tele_dialer_pane_t2_ParamLimits

0x8045,	// (0x00040b7c) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x00048403) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x00048403) main_video_tele_dialer_pane_t

0x855b,	// (0x00041092) cam4_autofocus_pane_ParamLimits

0x855b,	// (0x00041092) cam4_autofocus_pane

0x856f,	// (0x000410a6) cam4_image_uncrop_pane_ParamLimits

0x856f,	// (0x000410a6) cam4_image_uncrop_pane

0x8586,	// (0x000410bd) cam4_indicators_pane_ParamLimits

0x8586,	// (0x000410bd) cam4_indicators_pane

0x85aa,	// (0x000410e1) main_camera4_pane_g1_ParamLimits

0x85aa,	// (0x000410e1) main_camera4_pane_g1

0x85b6,	// (0x000410ed) main_camera4_pane_g2_ParamLimits

0x85b6,	// (0x000410ed) main_camera4_pane_g2

0x85b6,	// (0x000410ed) main_camera4_pane_g3_ParamLimits

0x85b6,	// (0x000410ed) main_camera4_pane_g3

0x85c2,	// (0x000410f9) main_camera4_pane_g4_ParamLimits

0x85c2,	// (0x000410f9) main_camera4_pane_g4

0x85ce,	// (0x00041105) main_camera4_pane_g5_ParamLimits

0x85ce,	// (0x00041105) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x00048454) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x00048454) main_camera4_pane_g

0x85eb,	// (0x00041122) main_camera4_pane_t1_ParamLimits

0x85eb,	// (0x00041122) main_camera4_pane_t1

0xcd6e,	// (0x000458a5) bg_tb_trans_pane_cp06

0xefb8,	// (0x00047aef) cam4_indicators_pane_g1

0xefc8,	// (0x00047aff) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x0004846f) cam4_indicators_pane_g

0xefe8,	// (0x00047b1f) cam4_indicators_pane_t1

0x8652,	// (0x00041189) main_video4_pane_g1_ParamLimits

0x8652,	// (0x00041189) main_video4_pane_g1

0x8664,	// (0x0004119b) main_video4_pane_g2_ParamLimits

0x8664,	// (0x0004119b) main_video4_pane_g2

0x8664,	// (0x0004119b) main_video4_pane_g3_ParamLimits

0x8664,	// (0x0004119b) main_video4_pane_g3

0x8673,	// (0x000411aa) main_video4_pane_g4_ParamLimits

0x8673,	// (0x000411aa) main_video4_pane_g4

0x0004,

0xf93f,	// (0x00048476) main_video4_pane_g_ParamLimits

0xf93f,	// (0x00048476) main_video4_pane_g

0x8691,	// (0x000411c8) vid4_indicators_pane_ParamLimits

0x8691,	// (0x000411c8) vid4_indicators_pane

0x86b9,	// (0x000411f0) video4_image_uncrop_cif_pane_ParamLimits

0x86b9,	// (0x000411f0) video4_image_uncrop_cif_pane

0x86d1,	// (0x00041208) video4_image_uncrop_nhd_pane_ParamLimits

0x86d1,	// (0x00041208) video4_image_uncrop_nhd_pane

0x86e5,	// (0x0004121c) video4_image_uncrop_vga_pane_ParamLimits

0x86e5,	// (0x0004121c) video4_image_uncrop_vga_pane

0xd4ba,	// (0x00045ff1) bg_tb_trans_pane_cp07

0x86fd,	// (0x00041234) vid4_indicators_pane_g1

0x870a,	// (0x00041241) vid4_indicators_pane_g2

0x8717,	// (0x0004124e) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x00048481) vid4_indicators_pane_g

0x873c,	// (0x00041273) vid4_indicators_pane_t1

0x874e,	// (0x00041285) cam4_autofocus_pane_g1

0x8756,	// (0x0004128d) cam4_autofocus_pane_g2

0x875e,	// (0x00041295) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0004848c) cam4_autofocus_pane_g

0x8766,	// (0x0004129d) cam4_autofocus_pane_g3_copy1

0x8070,	// (0x00040ba7) video_down_pane_cp_t1

0x807e,	// (0x00040bb5) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x00048408) video_down_pane_cp_t

0x1da6,	// (0x0003a8dd) popup_vitu2_window_ParamLimits

0x1da6,	// (0x0003a8dd) popup_vitu2_window

0x876e,	// (0x000412a5) aid_size_cell2_itu2_ParamLimits

0x876e,	// (0x000412a5) aid_size_cell2_itu2

0x8794,	// (0x000412cb) aid_size_cell_itu2_ParamLimits

0x8794,	// (0x000412cb) aid_size_cell_itu2

0x87e6,	// (0x0004131d) bg_popup_window_pane_cp09_ParamLimits

0x87e6,	// (0x0004131d) bg_popup_window_pane_cp09

0x87f4,	// (0x0004132b) field_vitu2_entry_pane_ParamLimits

0x87f4,	// (0x0004132b) field_vitu2_entry_pane

0x880e,	// (0x00041345) grid_vitu2_function_pane_ParamLimits

0x880e,	// (0x00041345) grid_vitu2_function_pane

0x8849,	// (0x00041380) grid_vitu2_itu_pane_ParamLimits

0x8849,	// (0x00041380) grid_vitu2_itu_pane

0x88ae,	// (0x000413e5) cell_vitu2_itu_pane_ParamLimits

0x88ae,	// (0x000413e5) cell_vitu2_itu_pane

0x88d0,	// (0x00041407) cell_vitu2_function_pane_ParamLimits

0x88d0,	// (0x00041407) cell_vitu2_function_pane

0xd4c8,	// (0x00045fff) bg_popup_call_pane_cp08_ParamLimits

0xd4c8,	// (0x00045fff) bg_popup_call_pane_cp08

0xd4e1,	// (0x00046018) field_vitu2_entry_pane_g1

0xd4ed,	// (0x00046024) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x00048493) field_vitu2_entry_pane_g

0xd507,	// (0x0004603e) field_vitu2_entry_pane_t1_ParamLimits

0xd507,	// (0x0004603e) field_vitu2_entry_pane_t1

0xd523,	// (0x0004605a) field_vitu2_entry_pane_t2_ParamLimits

0xd523,	// (0x0004605a) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0004849a) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0004849a) field_vitu2_entry_pane_t

0x890f,	// (0x00041446) bg_button_pane_cp010_ParamLimits

0x890f,	// (0x00041446) bg_button_pane_cp010

0x891d,	// (0x00041454) cell_vitu2_itu_pane_g1

0x893b,	// (0x00041472) cell_vitu2_itu_pane_t1_ParamLimits

0x893b,	// (0x00041472) cell_vitu2_itu_pane_t1

0x2d95,	// (0x0003b8cc) cell_vitu2_itu_pane_t2_ParamLimits

0x2d95,	// (0x0003b8cc) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x000484a4) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x000484a4) cell_vitu2_itu_pane_t

0x1da6,	// (0x0003a8dd) bg_button_pane_cp011

0x89a1,	// (0x000414d8) cell_vitu2_function_pane_g1

0x12f1,	// (0x00039e28) main_myfav_hc_pane

0x83cb,	// (0x00040f02) popup_image3_note_pane_ParamLimits

0x83cb,	// (0x00040f02) popup_image3_note_pane

0x83e5,	// (0x00040f1c) popup_image3_tool_bar_pane_ParamLimits

0x83e5,	// (0x00040f1c) popup_image3_tool_bar_pane

0x2e19,	// (0x0003b950) cell_vitu2_itu_pane_t3_ParamLimits

0x2e19,	// (0x0003b950) cell_vitu2_itu_pane_t3

0x12f1,	// (0x00039e28) bg_popup_trans_pane

0xd548,	// (0x0004607f) grid_image3_tool_bar_pane

0xd552,	// (0x00046089) bg_popup_trans_pane_g1

0x4717,	// (0x0003d24e) bg_popup_trans_pane_g2

0xd55a,	// (0x00046091) bg_popup_trans_pane_g3

0xd562,	// (0x00046099) bg_popup_trans_pane_g4

0xd56a,	// (0x000460a1) bg_popup_trans_pane_g5

0xd572,	// (0x000460a9) bg_popup_trans_pane_g6

0xd57a,	// (0x000460b1) bg_popup_trans_pane_g7

0xd582,	// (0x000460b9) bg_popup_trans_pane_g8

0x46f7,	// (0x0003d22e) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x000484ab) bg_popup_trans_pane_g

0x3b71,	// (0x0003c6a8) cell_image3_tool_bar_pane_ParamLimits

0x3b71,	// (0x0003c6a8) cell_image3_tool_bar_pane

0xcb3f,	// (0x00045676) cell_image3_tool_bar_pane_g1

0x12f1,	// (0x00039e28) bg_popup_trans_pane_cp1

0xd58a,	// (0x000460c1) popup_image3_note_pane_t1

0xd598,	// (0x000460cf) popup_image3_note_pane_t2

0xd5a6,	// (0x000460dd) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x000484be) popup_image3_note_pane_t

0xd5b4,	// (0x000460eb) popup_image3_note_pane_t3_copy1

0x89b5,	// (0x000414ec) bg_myfav_hc_instruction_pane_ParamLimits

0x89b5,	// (0x000414ec) bg_myfav_hc_instruction_pane

0x89c7,	// (0x000414fe) cell_myfav_contact_pane_ParamLimits

0x89c7,	// (0x000414fe) cell_myfav_contact_pane

0x89e1,	// (0x00041518) cell_myfav_contact_pane_cp1_ParamLimits

0x89e1,	// (0x00041518) cell_myfav_contact_pane_cp1

0x89f7,	// (0x0004152e) cell_myfav_contact_pane_cp2_ParamLimits

0x89f7,	// (0x0004152e) cell_myfav_contact_pane_cp2

0x8a0d,	// (0x00041544) cell_myfav_contact_pane_cp3_ParamLimits

0x8a0d,	// (0x00041544) cell_myfav_contact_pane_cp3

0x8a22,	// (0x00041559) cell_myfav_contact_pane_cp4_ParamLimits

0x8a22,	// (0x00041559) cell_myfav_contact_pane_cp4

0x8a36,	// (0x0004156d) cell_myfav_contact_pane_cp5_ParamLimits

0x8a36,	// (0x0004156d) cell_myfav_contact_pane_cp5

0x8a4a,	// (0x00041581) cell_myfav_contact_pane_cp6_ParamLimits

0x8a4a,	// (0x00041581) cell_myfav_contact_pane_cp6

0x8a5e,	// (0x00041595) cell_myfav_contact_pane_cp7_ParamLimits

0x8a5e,	// (0x00041595) cell_myfav_contact_pane_cp7

0xd5c2,	// (0x000460f9) listscroll_gen_pane_cp05

0x8a76,	// (0x000415ad) main_myfav_hc_pane_g1_ParamLimits

0x8a76,	// (0x000415ad) main_myfav_hc_pane_g1

0x8a8c,	// (0x000415c3) main_myfav_hc_pane_g2_ParamLimits

0x8a8c,	// (0x000415c3) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x000484c5) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x000484c5) main_myfav_hc_pane_g

0x8ab6,	// (0x000415ed) main_myfav_hc_pane_t1_ParamLimits

0x8ab6,	// (0x000415ed) main_myfav_hc_pane_t1

0xd5cb,	// (0x00046102) main_myfav_hc_pane_t2_ParamLimits

0xd5cb,	// (0x00046102) main_myfav_hc_pane_t2

0xd5dd,	// (0x00046114) main_myfav_hc_pane_t3_ParamLimits

0xd5dd,	// (0x00046114) main_myfav_hc_pane_t3

0x8acb,	// (0x00041602) main_myfav_hc_pane_t4_ParamLimits

0x8acb,	// (0x00041602) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x000484cc) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x000484cc) main_myfav_hc_pane_t

0xcb3f,	// (0x00045676) bg_myfav_hc_instruction_pane_g1

0xd5ef,	// (0x00046126) cell_myfav_contact_pane_g1_ParamLimits

0xd5ef,	// (0x00046126) cell_myfav_contact_pane_g1

0xd5ef,	// (0x00046126) cell_myfav_contact_pane_g2_ParamLimits

0xd5ef,	// (0x00046126) cell_myfav_contact_pane_g2

0xd5fb,	// (0x00046132) cell_myfav_contact_pane_g3_ParamLimits

0xd5fb,	// (0x00046132) cell_myfav_contact_pane_g3

0xce47,	// (0x0004597e) cell_myfav_contact_pane_g4_ParamLimits

0xce47,	// (0x0004597e) cell_myfav_contact_pane_g4

0xd608,	// (0x0004613f) cell_myfav_contact_pane_g5_ParamLimits

0xd608,	// (0x0004613f) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x000484d7) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x000484d7) cell_myfav_contact_pane_g

0x8aa2,	// (0x000415d9) main_myfav_hc_pane_g3_ParamLimits

0x8aa2,	// (0x000415d9) main_myfav_hc_pane_g3

0x3679,	// (0x0003c1b0) popup_adpt_find_window

0x8aef,	// (0x00041626) afind_page_pane_ParamLimits

0x8aef,	// (0x00041626) afind_page_pane

0x8b04,	// (0x0004163b) aid_size_cell_afind_ParamLimits

0x8b04,	// (0x0004163b) aid_size_cell_afind

0x8b22,	// (0x00041659) bg_popup_sub_pane_cp09_ParamLimits

0x8b22,	// (0x00041659) bg_popup_sub_pane_cp09

0x8b2f,	// (0x00041666) find_pane_cp01_ParamLimits

0x8b2f,	// (0x00041666) find_pane_cp01

0xd614,	// (0x0004614b) grid_afind_control_pane_ParamLimits

0xd614,	// (0x0004614b) grid_afind_control_pane

0x8b3c,	// (0x00041673) grid_afind_pane_ParamLimits

0x8b3c,	// (0x00041673) grid_afind_pane

0x8b5a,	// (0x00041691) cell_afind_pane_ParamLimits

0x8b5a,	// (0x00041691) cell_afind_pane

0xcb3f,	// (0x00045676) afind_page_pane_g1

0x8ba7,	// (0x000416de) afind_page_pane_g2

0x8bb0,	// (0x000416e7) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x000484e2) afind_page_pane_g

0x8bb9,	// (0x000416f0) afind_page_pane_t1

0xd628,	// (0x0004615f) cell_afind_grid_control_pane_ParamLimits

0xd628,	// (0x0004615f) cell_afind_grid_control_pane

0xd3f9,	// (0x00045f30) bg_button_pane_cp69_ParamLimits

0xd3f9,	// (0x00045f30) bg_button_pane_cp69

0x8bd9,	// (0x00041710) cell_afind_pane_g1_ParamLimits

0x8bd9,	// (0x00041710) cell_afind_pane_g1

0x8be6,	// (0x0004171d) cell_afind_pane_t1_ParamLimits

0x8be6,	// (0x0004171d) cell_afind_pane_t1

0x1c7f,	// (0x0003a7b6) bg_button_pane_cp72

0xd637,	// (0x0004616e) cell_afind_grid_control_pane_g1

0x609b,	// (0x0003ebd2) aid_image_placing_area_ParamLimits

0x609b,	// (0x0003ebd2) aid_image_placing_area

0xd0d3,	// (0x00045c0a) field_vitu_entry_pane_g1_ParamLimits

0xd0d3,	// (0x00045c0a) field_vitu_entry_pane_g1

0xd0df,	// (0x00045c16) field_vitu_entry_pane_g2_ParamLimits

0xd0df,	// (0x00045c16) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x00048393) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x00048393) field_vitu_entry_pane_g

0x7ea5,	// (0x000409dc) cell_vitu_itu_pane_g1_ParamLimits

0x7ee7,	// (0x00040a1e) cell_vitu_itu_pane_t3_ParamLimits

0x7ee7,	// (0x00040a1e) cell_vitu_itu_pane_t3

0xd3ad,	// (0x00045ee4) mp4_progress_pane_t1_ParamLimits

0xd3c4,	// (0x00045efb) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x00048428) mp4_progress_pane_t_ParamLimits

0xd3db,	// (0x00045f12) mup_progress_pane_cp04_ParamLimits

0x8add,	// (0x00041614) main_myfav_hc_pane_t5_ParamLimits

0x8add,	// (0x00041614) main_myfav_hc_pane_t5

0x130b,	// (0x00039e42) aid_zoom_text_primary

0x3679,	// (0x0003c1b0) popup_adpt_find_window_ParamLimits

0x1da6,	// (0x0003a8dd) main_cam_set_pane

0x8598,	// (0x000410cf) cam4_zoom_pane_ParamLimits

0x8598,	// (0x000410cf) cam4_zoom_pane

0x8bf8,	// (0x0004172f) main_cam_set_pane_g1_ParamLimits

0x8bf8,	// (0x0004172f) main_cam_set_pane_g1

0x8c06,	// (0x0004173d) main_cam_set_pane_g2_ParamLimits

0x8c06,	// (0x0004173d) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x000484e9) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x000484e9) main_cam_set_pane_g

0x8c25,	// (0x0004175c) main_cam_set_pane_t1_ParamLimits

0x8c25,	// (0x0004175c) main_cam_set_pane_t1

0x8c37,	// (0x0004176e) main_cset_listscroll_pane_ParamLimits

0x8c37,	// (0x0004176e) main_cset_listscroll_pane

0x8c55,	// (0x0004178c) main_cset_slider_pane_ParamLimits

0x8c55,	// (0x0004178c) main_cset_slider_pane

0xd648,	// (0x0004617f) main_cset_list_pane_ParamLimits

0xd648,	// (0x0004617f) main_cset_list_pane

0xd658,	// (0x0004618f) scroll_pane_cp028

0x8c79,	// (0x000417b0) aid_area_touch_slider

0x8c95,	// (0x000417cc) cset_slider_pane

0x8cbf,	// (0x000417f6) main_cset_slider_pane_g1

0x8cd4,	// (0x0004180b) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x000484ee) main_cset_slider_pane_g

0xd691,	// (0x000461c8) main_cset_slider_pane_t1

0x8d90,	// (0x000418c7) main_cset_slider_pane_t2

0x8daa,	// (0x000418e1) main_cset_slider_pane_t3

0x8dc4,	// (0x000418fb) main_cset_slider_pane_t4

0x8dde,	// (0x00041915) main_cset_slider_pane_t5

0x8df8,	// (0x0004192f) main_cset_slider_pane_t6

0x8e0d,	// (0x00041944) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x00048513) main_cset_slider_pane_t

0x8f11,	// (0x00041a48) cset_list_set_pane_ParamLimits

0x8f11,	// (0x00041a48) cset_list_set_pane

0x8f22,	// (0x00041a59) aid_position_infowindow_above

0x8f2a,	// (0x00041a61) aid_position_infowindow_below

0xd731,	// (0x00046268) cset_list_set_pane_g1_ParamLimits

0xd731,	// (0x00046268) cset_list_set_pane_g1

0x2e71,	// (0x0003b9a8) cset_list_set_pane_g3_ParamLimits

0x2e71,	// (0x0003b9a8) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x00048532) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x00048532) cset_list_set_pane_g

0xd73d,	// (0x00046274) cset_list_set_pane_t1_ParamLimits

0xd73d,	// (0x00046274) cset_list_set_pane_t1

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp021_ParamLimits

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp021

0xb3d9,	// (0x00043f10) cset_slider_pane_g1

0xb3eb,	// (0x00043f22) cset_slider_pane_g2

0xb3e2,	// (0x00043f19) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x00048537) cset_slider_pane_g

0xf00a,	// (0x00047b41) aid_area_touch_cam4_zoom

0xf012,	// (0x00047b49) cam4_zoom_cont_pane

0xf01a,	// (0x00047b51) cam4_zoom_pane_g1

0xf022,	// (0x00047b59) cam4_zoom_pane_g2

0x8f32,	// (0x00041a69) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x0004853e) cam4_zoom_pane_g

0xd752,	// (0x00046289) cam4_zoom_cont_pane_g1

0xd75b,	// (0x00046292) cam4_zoom_cont_pane_g2

0xd764,	// (0x0004629b) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x00048545) cam4_zoom_cont_pane_g

0x8450,	// (0x00040f87) call4_image_pane_ParamLimits

0x8450,	// (0x00040f87) call4_image_pane

0xd41d,	// (0x00045f54) call4_windows_conf_pane_ParamLimits

0xd430,	// (0x00045f67) popup_call4_audio_in_window_ParamLimits

0xd430,	// (0x00045f67) popup_call4_audio_in_window

0x12f1,	// (0x00039e28) bg_popup_call2_act_pane_cp02

0xd48e,	// (0x00045fc5) call4_list_conf_pane

0xcb3f,	// (0x00045676) call4_image_pane_g1

0xcb3f,	// (0x00045676) call4_image_pane_g2

0x0001,

0xf722,	// (0x00048259) call4_image_pane_g

0xd76d,	// (0x000462a4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd76d,	// (0x000462a4) list_single_graphic_popup_conf4_pane

0x12f1,	// (0x00039e28) list_highlight_pane_cp022

0xd780,	// (0x000462b7) list_single_graphic_popup_conf4_pane_g1

0x5586,	// (0x0003e0bd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0004854c) list_single_graphic_popup_conf4_pane_g

0xd788,	// (0x000462bf) list_single_graphic_popup_conf4_pane_t1

0x441d,	// (0x0003cf54) popup_vtel_slider_window_ParamLimits

0x441d,	// (0x0003cf54) popup_vtel_slider_window

0xd3e7,	// (0x00045f1e) dialer2_ne_pane_t2_ParamLimits

0xd3e7,	// (0x00045f1e) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0004842d) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0004842d) dialer2_ne_pane_t

0xc92c,	// (0x00045463) bg_popup_sub_pane_cp010_ParamLimits

0xc92c,	// (0x00045463) bg_popup_sub_pane_cp010

0x8f3a,	// (0x00041a71) popup_vtel_slider_window_g1_ParamLimits

0x8f3a,	// (0x00041a71) popup_vtel_slider_window_g1

0x8f4d,	// (0x00041a84) popup_vtel_slider_window_g2_ParamLimits

0x8f4d,	// (0x00041a84) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x00048551) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x00048551) popup_vtel_slider_window_g

0x8fa1,	// (0x00041ad8) vtel_slider_pane_ParamLimits

0x8fa1,	// (0x00041ad8) vtel_slider_pane

0x8fc3,	// (0x00041afa) vtel_slider_pane_g1_ParamLimits

0x8fc3,	// (0x00041afa) vtel_slider_pane_g1

0x8fd7,	// (0x00041b0e) vtel_slider_pane_g2_ParamLimits

0x8fd7,	// (0x00041b0e) vtel_slider_pane_g2

0x8fef,	// (0x00041b26) vtel_slider_pane_g3_ParamLimits

0x8fef,	// (0x00041b26) vtel_slider_pane_g3

0x8fc3,	// (0x00041afa) vtel_slider_pane_g4_ParamLimits

0x8fc3,	// (0x00041afa) vtel_slider_pane_g4

0x9005,	// (0x00041b3c) vtel_slider_pane_g5_ParamLimits

0x9005,	// (0x00041b3c) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0004855a) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0004855a) vtel_slider_pane_g

0x12f1,	// (0x00039e28) main_gallery2_pane

0x87c0,	// (0x000412f7) aid_size_row_itut2_dropdow_list_ParamLimits

0x87c0,	// (0x000412f7) aid_size_row_itut2_dropdow_list

0x882a,	// (0x00041361) grid_vitu2_function_top_pane_ParamLimits

0x882a,	// (0x00041361) grid_vitu2_function_top_pane

0x886d,	// (0x000413a4) popup_vitu2_dropdown_list_window_ParamLimits

0x886d,	// (0x000413a4) popup_vitu2_dropdown_list_window

0x888c,	// (0x000413c3) popup_vitu2_match_list_window

0x901b,	// (0x00041b52) cell_vitu2_function_top_pane_ParamLimits

0x901b,	// (0x00041b52) cell_vitu2_function_top_pane

0x903b,	// (0x00041b72) cell_vitu2_function_top_pane_cp01_ParamLimits

0x903b,	// (0x00041b72) cell_vitu2_function_top_pane_cp01

0x905b,	// (0x00041b92) cell_vitu2_function_top_wide_pane_ParamLimits

0x905b,	// (0x00041b92) cell_vitu2_function_top_wide_pane

0x1da6,	// (0x0003a8dd) bg_button_pane_cp012

0x9079,	// (0x00041bb0) cell_vitu2_function_top_pane_g1

0xf02a,	// (0x00047b61) bg_button_pane_cp013_ParamLimits

0xf02a,	// (0x00047b61) bg_button_pane_cp013

0x908d,	// (0x00041bc4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x908d,	// (0x00041bc4) cell_vitu2_function_top_wide_pane_g1

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp20

0x90a5,	// (0x00041bdc) list_vitu2_match_list_pane

0xd552,	// (0x00046089) bg_popup_sub_pane_cp20_g1

0xd55a,	// (0x00046091) bg_popup_sub_pane_cp20_g2

0x4717,	// (0x0003d24e) bg_popup_sub_pane_cp20_g3

0xd562,	// (0x00046099) bg_popup_sub_pane_cp20_g4

0x46f7,	// (0x0003d22e) bg_popup_sub_pane_cp20_g5

0xd7a4,	// (0x000462db) bg_popup_sub_pane_cp20_g6

0xd572,	// (0x000460a9) bg_popup_sub_pane_cp20_g7

0xd57a,	// (0x000460b1) bg_popup_sub_pane_cp20_g8

0xd582,	// (0x000460b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x00048565) bg_popup_sub_pane_cp20_g

0xf046,	// (0x00047b7d) list_vitu2_match_list_item_pane_ParamLimits

0xf046,	// (0x00047b7d) list_vitu2_match_list_item_pane

0xf058,	// (0x00047b8f) list_vitu2_match_list_item_pane_t1

0x12f1,	// (0x00039e28) bg_popup_sub_pane_cp21

0x548f,	// (0x0003dfc6) grid_vitu2_dropdown_list_pane

0x90c3,	// (0x00041bfa) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x90c3,	// (0x00041bfa) cell_vitu2_dropdown_list_char_pane

0x90e4,	// (0x00041c1b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x90e4,	// (0x00041c1b) cell_vitu2_dropdown_list_ctrl_pane

0xd7ac,	// (0x000462e3) cell_vitu2_dropdown_list_char_pane_g1

0xd7b5,	// (0x000462ec) cell_vitu2_dropdown_list_char_pane_g2

0xd7be,	// (0x000462f5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x00048582) cell_vitu2_dropdown_list_char_pane_g

0x9110,	// (0x00041c47) cell_vitu2_dropdown_list_char_pane_t1

0x911e,	// (0x00041c55) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x911e,	// (0x00041c55) cell_vitu2_dropdown_list_ctrl_pane_g1

0x912b,	// (0x00041c62) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x912b,	// (0x00041c62) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9138,	// (0x00041c6f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9138,	// (0x00041c6f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9145,	// (0x00041c7c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9145,	// (0x00041c7c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcd6e,	// (0x000458a5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcd6e,	// (0x000458a5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x00048589) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x00048589) cell_vitu2_dropdown_list_ctrl_pane_g

0x9161,	// (0x00041c98) aid_size_cell_gallery2_ParamLimits

0x9161,	// (0x00041c98) aid_size_cell_gallery2

0x9177,	// (0x00041cae) grid_gallery2_pane_ParamLimits

0x9177,	// (0x00041cae) grid_gallery2_pane

0x9189,	// (0x00041cc0) scroll_pane_cp029_ParamLimits

0x9189,	// (0x00041cc0) scroll_pane_cp029

0x9195,	// (0x00041ccc) cell_gallery2_pane_ParamLimits

0x9195,	// (0x00041ccc) cell_gallery2_pane

0xd7c7,	// (0x000462fe) cell_gallery2_pane_g2

0x91c7,	// (0x00041cfe) cell_gallery2_pane_g3

0xd7d1,	// (0x00046308) cell_gallery2_pane_g4

0xd7d9,	// (0x00046310) cell_gallery2_pane_g5

0xb295,	// (0x00043dcc) grid_highlight_pane_cp10

0x888c,	// (0x000413c3) popup_vitu2_match_list_window_ParamLimits

0x889d,	// (0x000413d4) popup_vitu2_query_window_ParamLimits

0x889d,	// (0x000413d4) popup_vitu2_query_window

0x12f1,	// (0x00039e28) bg_vitu2_candi_button_pane

0xd7ac,	// (0x000462e3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd7b5,	// (0x000462ec) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd7be,	// (0x000462f5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2eac,	// (0x0003b9e3) bg_button_pane_cp015

0x91cf,	// (0x00041d06) bg_button_pane_cp016

0x91d8,	// (0x00041d0f) bg_button_pane_cp017

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp22

0xd7e1,	// (0x00046318) popup_vitu2_query_window_g1

0x2ec1,	// (0x0003b9f8) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x00048594) popup_vitu2_query_window_g

0x2ecd,	// (0x0003ba04) popup_vitu2_query_window_t1_ParamLimits

0x2ecd,	// (0x0003ba04) popup_vitu2_query_window_t1

0x2ef5,	// (0x0003ba2c) popup_vitu2_query_window_t2_ParamLimits

0x2ef5,	// (0x0003ba2c) popup_vitu2_query_window_t2

0x2f07,	// (0x0003ba3e) popup_vitu2_query_window_t3_ParamLimits

0x2f07,	// (0x0003ba3e) popup_vitu2_query_window_t3

0x91f1,	// (0x00041d28) popup_vitu2_query_window_t4_ParamLimits

0x91f1,	// (0x00041d28) popup_vitu2_query_window_t4

0x9203,	// (0x00041d3a) popup_vitu2_query_window_t5_ParamLimits

0x9203,	// (0x00041d3a) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x00048599) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x00048599) popup_vitu2_query_window_t

0xd640,	// (0x00046177) main_cset_text_pane

0x8c79,	// (0x000417b0) aid_area_touch_slider_ParamLimits

0x8c95,	// (0x000417cc) cset_slider_pane_ParamLimits

0x8cbf,	// (0x000417f6) main_cset_slider_pane_g1_ParamLimits

0x8cd4,	// (0x0004180b) main_cset_slider_pane_g2_ParamLimits

0xd661,	// (0x00046198) main_cset_slider_pane_g3_ParamLimits

0xd661,	// (0x00046198) main_cset_slider_pane_g3

0x8ce9,	// (0x00041820) main_cset_slider_pane_g4_ParamLimits

0x8ce9,	// (0x00041820) main_cset_slider_pane_g4

0x8cf8,	// (0x0004182f) main_cset_slider_pane_g5_ParamLimits

0x8cf8,	// (0x0004182f) main_cset_slider_pane_g5

0x8d04,	// (0x0004183b) main_cset_slider_pane_g6_ParamLimits

0x8d04,	// (0x0004183b) main_cset_slider_pane_g6

0xf9b7,	// (0x000484ee) main_cset_slider_pane_g_ParamLimits

0xd691,	// (0x000461c8) main_cset_slider_pane_t1_ParamLimits

0x8d90,	// (0x000418c7) main_cset_slider_pane_t2_ParamLimits

0x8daa,	// (0x000418e1) main_cset_slider_pane_t3_ParamLimits

0x8dc4,	// (0x000418fb) main_cset_slider_pane_t4_ParamLimits

0x8dde,	// (0x00041915) main_cset_slider_pane_t5_ParamLimits

0x8df8,	// (0x0004192f) main_cset_slider_pane_t6_ParamLimits

0x8e0d,	// (0x00041944) main_cset_slider_pane_t7_ParamLimits

0x8e37,	// (0x0004196e) main_cset_slider_pane_t8_ParamLimits

0x8e37,	// (0x0004196e) main_cset_slider_pane_t8

0x8e5f,	// (0x00041996) main_cset_slider_pane_t9_ParamLimits

0x8e5f,	// (0x00041996) main_cset_slider_pane_t9

0x8e87,	// (0x000419be) main_cset_slider_pane_t10_ParamLimits

0x8e87,	// (0x000419be) main_cset_slider_pane_t10

0x8eaf,	// (0x000419e6) main_cset_slider_pane_t11_ParamLimits

0x8eaf,	// (0x000419e6) main_cset_slider_pane_t11

0x8ed7,	// (0x00041a0e) main_cset_slider_pane_t12_ParamLimits

0x8ed7,	// (0x00041a0e) main_cset_slider_pane_t12

0x8ef4,	// (0x00041a2b) main_cset_slider_pane_t13_ParamLimits

0x8ef4,	// (0x00041a2b) main_cset_slider_pane_t13

0xf9dc,	// (0x00048513) main_cset_slider_pane_t_ParamLimits

0x12f1,	// (0x00039e28) bg_popup_sub_pane_cp011

0xd7ed,	// (0x00046324) main_cset_text_pane_g1

0xd7f5,	// (0x0004632c) main_cset_text_pane_t1

0xd803,	// (0x0004633a) main_cset_text_pane_t2

0xd811,	// (0x00046348) main_cset_text_pane_t3

0xd81f,	// (0x00046356) main_cset_text_pane_t4

0xd82d,	// (0x00046364) main_cset_text_pane_t5

0xd83b,	// (0x00046372) main_cset_text_pane_t6

0xd849,	// (0x00046380) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x000485a4) main_cset_text_pane_t

0x12f1,	// (0x00039e28) main_cam4_burst_pane

0x12f1,	// (0x00039e28) main_cam5_pane

0x8bc7,	// (0x000416fe) bg_button_pane_cp019

0x8bd0,	// (0x00041707) bg_button_pane_cp020

0xd66d,	// (0x000461a4) main_cset_slider_pane_g7_ParamLimits

0xd66d,	// (0x000461a4) main_cset_slider_pane_g7

0xd679,	// (0x000461b0) main_cset_slider_pane_g8_ParamLimits

0xd679,	// (0x000461b0) main_cset_slider_pane_g8

0x8d18,	// (0x0004184f) main_cset_slider_pane_g9_ParamLimits

0x8d18,	// (0x0004184f) main_cset_slider_pane_g9

0x8d24,	// (0x0004185b) main_cset_slider_pane_g10_ParamLimits

0x8d24,	// (0x0004185b) main_cset_slider_pane_g10

0x8d30,	// (0x00041867) main_cset_slider_pane_g11_ParamLimits

0x8d30,	// (0x00041867) main_cset_slider_pane_g11

0x8d3c,	// (0x00041873) main_cset_slider_pane_g12_ParamLimits

0x8d3c,	// (0x00041873) main_cset_slider_pane_g12

0x8d48,	// (0x0004187f) main_cset_slider_pane_g13_ParamLimits

0x8d48,	// (0x0004187f) main_cset_slider_pane_g13

0x8d54,	// (0x0004188b) main_cset_slider_pane_g14_ParamLimits

0x8d54,	// (0x0004188b) main_cset_slider_pane_g14

0x8d60,	// (0x00041897) main_cset_slider_pane_g15_ParamLimits

0x8d60,	// (0x00041897) main_cset_slider_pane_g15

0xd6bf,	// (0x000461f6) main_cset_slider_pane_t14_ParamLimits

0xd6bf,	// (0x000461f6) main_cset_slider_pane_t14

0xd6f8,	// (0x0004622f) main_cset_slider_pane_t15_ParamLimits

0xd6f8,	// (0x0004622f) main_cset_slider_pane_t15

0x9215,	// (0x00041d4c) aid_cam4_burst_size_cell_ParamLimits

0x9215,	// (0x00041d4c) aid_cam4_burst_size_cell

0x9235,	// (0x00041d6c) grid_cam4_burst_pane_ParamLimits

0x9235,	// (0x00041d6c) grid_cam4_burst_pane

0x925b,	// (0x00041d92) linegrid_cam4_burst_pane_ParamLimits

0x925b,	// (0x00041d92) linegrid_cam4_burst_pane

0x927d,	// (0x00041db4) scroll_pane_cp30_ParamLimits

0x927d,	// (0x00041db4) scroll_pane_cp30

0x9289,	// (0x00041dc0) cell_cam4_burst_pane_ParamLimits

0x9289,	// (0x00041dc0) cell_cam4_burst_pane

0xd857,	// (0x0004638e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd857,	// (0x0004638e) linegrid_cam4_burst_pane_g1

0x92d0,	// (0x00041e07) linegrid_cam4_burst_pane_g2_ParamLimits

0x92d0,	// (0x00041e07) linegrid_cam4_burst_pane_g2

0xd864,	// (0x0004639b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd864,	// (0x0004639b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x000485b3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x000485b3) linegrid_cam4_burst_pane_g

0x92e1,	// (0x00041e18) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x92e1,	// (0x00041e18) linegrid_cam4_burst_pane_g3_copy1

0xd871,	// (0x000463a8) linegrid_cam4_burst_pane_g4_ParamLimits

0xd871,	// (0x000463a8) linegrid_cam4_burst_pane_g4

0x92fb,	// (0x00041e32) linegrid_cam4_burst_pane_g5_ParamLimits

0x92fb,	// (0x00041e32) linegrid_cam4_burst_pane_g5

0x930c,	// (0x00041e43) linegrid_cam4_burst_pane_g6_ParamLimits

0x930c,	// (0x00041e43) linegrid_cam4_burst_pane_g6

0xd87e,	// (0x000463b5) linegrid_cam4_burst_pane_g7_ParamLimits

0xd87e,	// (0x000463b5) linegrid_cam4_burst_pane_g7

0x931d,	// (0x00041e54) cell_cam4_burst_pane_g1

0xd897,	// (0x000463ce) main_cam5_pane_t1_ParamLimits

0xd897,	// (0x000463ce) main_cam5_pane_t1

0xd8a9,	// (0x000463e0) main_cam5_pane_t2_ParamLimits

0xd8a9,	// (0x000463e0) main_cam5_pane_t2

0xd8bb,	// (0x000463f2) main_cam5_pane_t3_ParamLimits

0xd8bb,	// (0x000463f2) main_cam5_pane_t3

0xd8cd,	// (0x00046404) main_cam5_pane_t4_ParamLimits

0xd8cd,	// (0x00046404) main_cam5_pane_t4

0xd8e3,	// (0x0004641a) main_cam5_pane_t5_ParamLimits

0xd8e3,	// (0x0004641a) main_cam5_pane_t5

0xd8f5,	// (0x0004642c) main_cam5_pane_t6_ParamLimits

0xd8f5,	// (0x0004642c) main_cam5_pane_t6

0xd907,	// (0x0004643e) main_cam5_pane_t7_ParamLimits

0xd907,	// (0x0004643e) main_cam5_pane_t7

0xd919,	// (0x00046450) main_cam5_pane_t8_ParamLimits

0xd919,	// (0x00046450) main_cam5_pane_t8

0xd935,	// (0x0004646c) main_cam5_pane_t9_ParamLimits

0xd935,	// (0x0004646c) main_cam5_pane_t9

0xd947,	// (0x0004647e) main_cam5_pane_t10_ParamLimits

0xd947,	// (0x0004647e) main_cam5_pane_t10

0xd959,	// (0x00046490) main_cam5_pane_t11_ParamLimits

0xd959,	// (0x00046490) main_cam5_pane_t11

0xd96b,	// (0x000464a2) main_cam5_pane_t12_ParamLimits

0xd96b,	// (0x000464a2) main_cam5_pane_t12

0xd980,	// (0x000464b7) main_cam5_pane_t13_ParamLimits

0xd980,	// (0x000464b7) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x000485bf) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x000485bf) main_cam5_pane_t

0x36d7,	// (0x0003c20e) popup_scut_keymap_window_ParamLimits

0x36d7,	// (0x0003c20e) popup_scut_keymap_window

0x9332,	// (0x00041e69) aid_size_cell_brow_shortcut

0xb295,	// (0x00043dcc) bg_popup_window_pane_cp010

0x933e,	// (0x00041e75) grid_scut_pane

0x9348,	// (0x00041e7f) cell_scut_pane_ParamLimits

0x9348,	// (0x00041e7f) cell_scut_pane

0x935d,	// (0x00041e94) cell_scut_pane_g1

0xd99d,	// (0x000464d4) cell_scut_pane_t1

0xd9ac,	// (0x000464e3) cell_scut_pane_t2

0x9366,	// (0x00041e9d) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x000485da) cell_scut_pane_t

0x7434,	// (0x0003ff6b) main_mup3_pane_g8_ParamLimits

0x7434,	// (0x0003ff6b) main_mup3_pane_g8

0x87d4,	// (0x0004130b) area_vitu2_query_pane_ParamLimits

0x87d4,	// (0x0004130b) area_vitu2_query_pane

0x2eb4,	// (0x0003b9eb) input_focus_pane_cp08

0xd9bb,	// (0x000464f2) area_vitu2_query_pane_g1

0x2f2f,	// (0x0003ba66) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x000485e1) area_vitu2_query_pane_g

0x9374,	// (0x00041eab) area_vitu2_query_pane_t1_ParamLimits

0x9374,	// (0x00041eab) area_vitu2_query_pane_t1

0x9386,	// (0x00041ebd) area_vitu2_query_pane_t2_ParamLimits

0x9386,	// (0x00041ebd) area_vitu2_query_pane_t2

0x2f3e,	// (0x0003ba75) area_vitu2_query_pane_t3_ParamLimits

0x2f3e,	// (0x0003ba75) area_vitu2_query_pane_t3

0xd9c7,	// (0x000464fe) area_vitu2_query_pane_t4_ParamLimits

0xd9c7,	// (0x000464fe) area_vitu2_query_pane_t4

0xd9ef,	// (0x00046526) area_vitu2_query_pane_t5_ParamLimits

0xd9ef,	// (0x00046526) area_vitu2_query_pane_t5

0xda17,	// (0x0004654e) area_vitu2_query_pane_t6_ParamLimits

0xda17,	// (0x0004654e) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x000485e6) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x000485e6) area_vitu2_query_pane_t

0x9398,	// (0x00041ecf) bg_button_pane_cp018

0x93a5,	// (0x00041edc) bg_button_pane_cp021

0x2f66,	// (0x0003ba9d) bg_button_pane_cp022

0x2f75,	// (0x0003baac) input_focus_pane_cp09

0x5892,	// (0x0003e3c9) aid_size_touch_mv_arrow_left

0xb16e,	// (0x00043ca5) aid_size_touch_mv_arrow_right

0x8d78,	// (0x000418af) main_cset_slider_pane_g16_ParamLimits

0x8d78,	// (0x000418af) main_cset_slider_pane_g16

0x8d84,	// (0x000418bb) main_cset_slider_pane_g17_ParamLimits

0x8d84,	// (0x000418bb) main_cset_slider_pane_g17

0x931d,	// (0x00041e54) cell_cam4_burst_pane_g1_ParamLimits

0x12f1,	// (0x00039e28) compa_mode_pane

0x8f5d,	// (0x00041a94) popup_vtel_slider_window_g3_ParamLimits

0x8f5d,	// (0x00041a94) popup_vtel_slider_window_g3

0x8f74,	// (0x00041aab) popup_vtel_slider_window_g4_ParamLimits

0x8f74,	// (0x00041aab) popup_vtel_slider_window_g4

0x8f8b,	// (0x00041ac2) popup_vtel_slider_window_t1_ParamLimits

0x8f8b,	// (0x00041ac2) popup_vtel_slider_window_t1

0x12f1,	// (0x00039e28) main_cl_pane

0xc72a,	// (0x00045261) popup_imed_adjust2_window_ParamLimits

0xc704,	// (0x0004523b) bg_tb_trans_pane_cp05_ParamLimits

0xd008,	// (0x00045b3f) popup_imed_adjust2_window_g1_ParamLimits

0xd017,	// (0x00045b4e) popup_imed_adjust2_window_g2_ParamLimits

0xd017,	// (0x00045b4e) popup_imed_adjust2_window_g2

0xd023,	// (0x00045b5a) popup_imed_adjust2_window_g3_ParamLimits

0xd023,	// (0x00045b5a) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x00048357) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x00048357) popup_imed_adjust2_window_g

0xd02f,	// (0x00045b66) popup_imed_adjust2_window_t1_ParamLimits

0xd047,	// (0x00045b7e) slider_imed_adjust_pane_ParamLimits

0xd05b,	// (0x00045b92) slider_imed_adjust_pane_g1_ParamLimits

0xd06b,	// (0x00045ba2) slider_imed_adjust_pane_g2_ParamLimits

0xd07b,	// (0x00045bb2) slider_imed_adjust_pane_g3_ParamLimits

0xd08c,	// (0x00045bc3) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x0004835e) slider_imed_adjust_pane_g_ParamLimits

0x8547,	// (0x0004107e) aid_touch_area_cam4_ParamLimits

0x8547,	// (0x0004107e) aid_touch_area_cam4

0xefa0,	// (0x00047ad7) battery_pane_cp01

0x85df,	// (0x00041116) main_camera4_pane_g6_ParamLimits

0x85df,	// (0x00041116) main_camera4_pane_g6

0x8600,	// (0x00041137) main_camera4_pane_t2_ParamLimits

0x8600,	// (0x00041137) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x00048461) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x00048461) main_camera4_pane_t

0x8640,	// (0x00041177) aid_touch_area_vid4_ParamLimits

0x8640,	// (0x00041177) aid_touch_area_vid4

0x8682,	// (0x000411b9) main_video4_pane_g5_ParamLimits

0x8682,	// (0x000411b9) main_video4_pane_g5

0x86a3,	// (0x000411da) vid4_progress_pane_ParamLimits

0x86a3,	// (0x000411da) vid4_progress_pane

0xd685,	// (0x000461bc) main_cset_slider_pane_g18_ParamLimits

0xd685,	// (0x000461bc) main_cset_slider_pane_g18

0xd88b,	// (0x000463c2) cell_cam4_burst_pane_g2_ParamLimits

0xd88b,	// (0x000463c2) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x000485ba) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x000485ba) cell_cam4_burst_pane_g

0x1a77,	// (0x0003a5ae) bg_cl_pane_ParamLimits

0x1a77,	// (0x0003a5ae) bg_cl_pane

0x93b1,	// (0x00041ee8) cl_header_pane_ParamLimits

0x93b1,	// (0x00041ee8) cl_header_pane

0x93c5,	// (0x00041efc) cl_listscroll_pane_ParamLimits

0x93c5,	// (0x00041efc) cl_listscroll_pane

0xda63,	// (0x0004659a) bg_cl_pane_g1

0xda6b,	// (0x000465a2) bg_cl_pane_g2

0xda73,	// (0x000465aa) bg_cl_pane_g3

0xda7b,	// (0x000465b2) bg_cl_pane_g4

0xda83,	// (0x000465ba) bg_cl_pane_g5

0xda8b,	// (0x000465c2) bg_cl_pane_g6

0xda93,	// (0x000465ca) bg_cl_pane_g7

0xda9b,	// (0x000465d2) bg_cl_pane_g8

0xdaa3,	// (0x000465da) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x000485f5) bg_cl_pane_g

0x93d5,	// (0x00041f0c) aid_height_cl_leading_ParamLimits

0x93d5,	// (0x00041f0c) aid_height_cl_leading

0x93e1,	// (0x00041f18) aid_height_cl_text_ParamLimits

0x93e1,	// (0x00041f18) aid_height_cl_text

0x1da6,	// (0x0003a8dd) bg_cl_header_pane_ParamLimits

0x1da6,	// (0x0003a8dd) bg_cl_header_pane

0x9400,	// (0x00041f37) cl_header_pane_g1_ParamLimits

0x9400,	// (0x00041f37) cl_header_pane_g1

0x9416,	// (0x00041f4d) cl_header_pane_t1_ParamLimits

0x9416,	// (0x00041f4d) cl_header_pane_t1

0xdaab,	// (0x000465e2) cl_list_pane

0xdab4,	// (0x000465eb) hc_scroll_pane_cp01

0x46f7,	// (0x0003d22e) bg_cl_header_pane_g1

0xd552,	// (0x00046089) bg_cl_header_pane_g2

0x4717,	// (0x0003d24e) bg_cl_header_pane_g3

0xd562,	// (0x00046099) bg_cl_header_pane_g4

0xd55a,	// (0x00046091) bg_cl_header_pane_g5

0xd7a4,	// (0x000462db) bg_cl_header_pane_g6

0xd57a,	// (0x000460b1) bg_cl_header_pane_g7

0xd582,	// (0x000460b9) bg_cl_header_pane_g8

0xd572,	// (0x000460a9) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x00048608) bg_cl_header_pane_g

0x942f,	// (0x00041f66) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x942f,	// (0x00041f66) hc_cl_list_double_graphic_heading_pane

0x943f,	// (0x00041f76) hc_cl_list_single_graphic_pane_ParamLimits

0x943f,	// (0x00041f76) hc_cl_list_single_graphic_pane

0x9452,	// (0x00041f89) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9452,	// (0x00041f89) hc_cl_list_single_graphic_pane_g1

0x945e,	// (0x00041f95) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x945e,	// (0x00041f95) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0004861b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0004861b) hc_cl_list_single_graphic_pane_g

0x9472,	// (0x00041fa9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9472,	// (0x00041fa9) hc_cl_list_single_graphic_pane_t1

0x9452,	// (0x00041f89) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9452,	// (0x00041f89) hc_cl_list_double_graphic_heading_pane_g1

0x9487,	// (0x00041fbe) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9487,	// (0x00041fbe) hc_cl_list_double_graphic_heading_pane_g2

0x949b,	// (0x00041fd2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x949b,	// (0x00041fd2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x00048620) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x00048620) hc_cl_list_double_graphic_heading_pane_g

0x94af,	// (0x00041fe6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x94af,	// (0x00041fe6) hc_cl_list_double_graphic_heading_pane_t1

0x94c4,	// (0x00041ffb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x94c4,	// (0x00041ffb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x00048627) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x00048627) hc_cl_list_double_graphic_heading_pane_t

0xf066,	// (0x00047b9d) vid4_progress_pane_g1

0xf075,	// (0x00047bac) vid4_progress_pane_g2

0xf084,	// (0x00047bbb) vid4_progress_pane_g3

0xf093,	// (0x00047bca) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0004862c) vid4_progress_pane_g

0xf09f,	// (0x00047bd6) vid4_progress_pane_t1

0xf0b5,	// (0x00047bec) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x00048637) vid4_progress_pane_t

0xf0df,	// (0x00047c16) wait_bar_pane_cp07

0xc93a,	// (0x00045471) blid_firmament_pane_ParamLimits

0xc97b,	// (0x000454b2) popup_blid_sat_info2_window_g1

0xc99f,	// (0x000454d6) popup_blid_sat_info2_window_t3

0xc9ad,	// (0x000454e4) popup_blid_sat_info2_window_t4

0xc9bb,	// (0x000454f2) popup_blid_sat_info2_window_t5

0xc9c9,	// (0x00045500) popup_blid_sat_info2_window_t6

0xc9d9,	// (0x00045510) popup_blid_sat_info2_window_t7

0xc9e7,	// (0x0004551e) popup_blid_sat_info2_window_t8

0xc9f5,	// (0x0004552c) popup_blid_sat_info2_window_t9

0xca03,	// (0x0004553a) popup_blid_sat_info2_window_t10

0xcabf,	// (0x000455f6) aid_firma_cardinal_ParamLimits

0xcad3,	// (0x0004560a) blid_firmament_pane_t1_ParamLimits

0xcaea,	// (0x00045621) blid_firmament_pane_t2_ParamLimits

0xcb01,	// (0x00045638) blid_firmament_pane_t3_ParamLimits

0xcb18,	// (0x0004564f) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x00048250) blid_firmament_pane_t_ParamLimits

0xcb2f,	// (0x00045666) blid_sat_info_pane_ParamLimits

0x1da6,	// (0x0003a8dd) main_cam_set_pane_ParamLimits

0x7c8b,	// (0x000407c2) aid_size_cell_colour_35_ParamLimits

0x7cab,	// (0x000407e2) aid_size_cell_colour_112_ParamLimits

0x7ccb,	// (0x00040802) aid_size_cell_effect_ParamLimits

0xc704,	// (0x0004523b) bg_tb_trans_pane_cp02_ParamLimits

0x51ce,	// (0x0003dd05) heading_imed_pane_ParamLimits

0x7ceb,	// (0x00040822) listscroll_imed_pane_ParamLimits

0xbcf6,	// (0x0004482d) popup_call2_audio_first_window_g5_ParamLimits

0xbcf6,	// (0x0004482d) popup_call2_audio_first_window_g5

0x8208,	// (0x00040d3f) aid_size_touch_image3_arrow_left_ParamLimits

0x8208,	// (0x00040d3f) aid_size_touch_image3_arrow_left

0x8228,	// (0x00040d5f) aid_size_touch_image3_arrow_right_ParamLimits

0x8228,	// (0x00040d5f) aid_size_touch_image3_arrow_right

0xf0ca,	// (0x00047c01) vid4_progress_pane_t3

0x7fbf,	// (0x00040af6) main_hwr_training_symbol_option_pane_ParamLimits

0x7fbf,	// (0x00040af6) main_hwr_training_symbol_option_pane

0xd2e7,	// (0x00045e1e) popup_hwr_training_preview_window_ParamLimits

0xd2e7,	// (0x00045e1e) popup_hwr_training_preview_window

0x7fdb,	// (0x00040b12) hwr_training_navi_pane_g5_ParamLimits

0x7fdb,	// (0x00040b12) hwr_training_navi_pane_g5

0xd540,	// (0x00046077) popup_char_count_window

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp20_ParamLimits

0x90a5,	// (0x00041bdc) list_vitu2_match_list_pane_ParamLimits

0x90b4,	// (0x00041beb) vitu2_page_scroll_pane_ParamLimits

0x90b4,	// (0x00041beb) vitu2_page_scroll_pane

0xdb17,	// (0x0004664e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb17,	// (0x0004664e) list_single_hwr_training_symbol_option_pane

0xdb2a,	// (0x00046661) list_single_hwr_training_symbol_option_pane_g1

0xdb32,	// (0x00046669) list_single_hwr_training_symbol_option_pane_t1

0xdb40,	// (0x00046677) bg_button_pane_cp023

0xdb49,	// (0x00046680) bg_button_pane_cp024

0x94d9,	// (0x00042010) vitu2_page_scroll_pane_g1

0x94e1,	// (0x00042018) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x0004863e) vitu2_page_scroll_pane_g

0x94e9,	// (0x00042020) vitu2_page_scroll_pane_t1

0xc89a,	// (0x000453d1) popup_char_count_window_g1

0xdb7c,	// (0x000466b3) popup_char_count_window_g2

0xdb85,	// (0x000466bc) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x00048643) popup_char_count_window_g

0xdb8e,	// (0x000466c5) popup_char_count_window_t1

0x12f1,	// (0x00039e28) main_vded2_pane

0xcff6,	// (0x00045b2d) aid_size_cell_imed_line

0xd000,	// (0x00045b37) grid_imed_line_width_pane

0x8724,	// (0x0004125b) vid4_indicators_pane_g4

0xdb9c,	// (0x000466d3) cell_imed_line_width_pane_ParamLimits

0xdb9c,	// (0x000466d3) cell_imed_line_width_pane

0xdbae,	// (0x000466e5) cell_imed_line_width_pane_g1

0xdbb7,	// (0x000466ee) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0004864a) cell_imed_line_width_pane_g

0x94f8,	// (0x0004202f) main_vded2_pane_g1_ParamLimits

0x94f8,	// (0x0004202f) main_vded2_pane_g1

0x950e,	// (0x00042045) main_vded2_pane_g2_ParamLimits

0x950e,	// (0x00042045) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x0004864f) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x0004864f) main_vded2_pane_g

0x951e,	// (0x00042055) vded2_slider_pane_ParamLimits

0x951e,	// (0x00042055) vded2_slider_pane

0x9531,	// (0x00042068) aid_size_touch_vded2_end

0x9539,	// (0x00042070) aid_size_touch_vded2_playhead

0x9541,	// (0x00042078) aid_size_touch_vded2_start

0x9549,	// (0x00042080) vded2_slider_bg_pane

0x9552,	// (0x00042089) vded2_slider_pane_g1

0x955b,	// (0x00042092) vded2_slider_pane_g2

0x9563,	// (0x0004209a) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x00048654) vded2_slider_pane_g

0x956c,	// (0x000420a3) vded2_slider_bg_pane_g1

0x9575,	// (0x000420ac) vded2_slider_bg_pane_g2

0x957e,	// (0x000420b5) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0004865b) vded2_slider_bg_pane_g

0x5d4a,	// (0x0003e881) aid_postcard_touch_down_pane_ParamLimits

0x5d4a,	// (0x0003e881) aid_postcard_touch_down_pane

0x5d5c,	// (0x0003e893) aid_postcard_touch_up_pane_ParamLimits

0x5d5c,	// (0x0003e893) aid_postcard_touch_up_pane

0x12f1,	// (0x00039e28) main_blid2_pane

0xc712,	// (0x00045249) popup_blid2_search_window

0x12f1,	// (0x00039e28) blid2_gps_pane

0x12f1,	// (0x00039e28) blid2_navig_pane

0x12f1,	// (0x00039e28) blid2_search_pane

0x12f1,	// (0x00039e28) blid2_tripm_pane

0x9587,	// (0x000420be) blid2_search_pane_g1_ParamLimits

0x9587,	// (0x000420be) blid2_search_pane_g1

0x959b,	// (0x000420d2) blid2_search_pane_t1_ParamLimits

0x959b,	// (0x000420d2) blid2_search_pane_t1

0x95ad,	// (0x000420e4) aid_size_cell_blid2_gps_ParamLimits

0x95ad,	// (0x000420e4) aid_size_cell_blid2_gps

0x95c5,	// (0x000420fc) blid2_gps_pane_g1_ParamLimits

0x95c5,	// (0x000420fc) blid2_gps_pane_g1

0x95d9,	// (0x00042110) grid_blid2_satellite_pane_ParamLimits

0x95d9,	// (0x00042110) grid_blid2_satellite_pane

0x95ed,	// (0x00042124) blid2_navig_pane_g1_ParamLimits

0x95ed,	// (0x00042124) blid2_navig_pane_g1

0x95f9,	// (0x00042130) blid2_navig_pane_t1_ParamLimits

0x95f9,	// (0x00042130) blid2_navig_pane_t1

0x9612,	// (0x00042149) blid2_navig_pane_t2_ParamLimits

0x9612,	// (0x00042149) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x00048662) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x00048662) blid2_navig_pane_t

0x962b,	// (0x00042162) blid2_navig_ring_pane_ParamLimits

0x962b,	// (0x00042162) blid2_navig_ring_pane

0x9640,	// (0x00042177) blid2_speed_pane_ParamLimits

0x9640,	// (0x00042177) blid2_speed_pane

0x964c,	// (0x00042183) blid2_tripm_pane_g1_ParamLimits

0x964c,	// (0x00042183) blid2_tripm_pane_g1

0x9661,	// (0x00042198) blid2_tripm_pane_g2_ParamLimits

0x9661,	// (0x00042198) blid2_tripm_pane_g2

0x9675,	// (0x000421ac) blid2_tripm_pane_g3_ParamLimits

0x9675,	// (0x000421ac) blid2_tripm_pane_g3

0x9689,	// (0x000421c0) blid2_tripm_pane_g4_ParamLimits

0x9689,	// (0x000421c0) blid2_tripm_pane_g4

0x969d,	// (0x000421d4) blid2_tripm_pane_g5_ParamLimits

0x969d,	// (0x000421d4) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x00048667) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x00048667) blid2_tripm_pane_g

0x96bf,	// (0x000421f6) blid2_tripm_pane_t1_ParamLimits

0x96bf,	// (0x000421f6) blid2_tripm_pane_t1

0x96d6,	// (0x0004220d) blid2_tripm_pane_t2_ParamLimits

0x96d6,	// (0x0004220d) blid2_tripm_pane_t2

0x96ed,	// (0x00042224) blid2_tripm_pane_t3_ParamLimits

0x96ed,	// (0x00042224) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x00048674) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x00048674) blid2_tripm_pane_t

0x9730,	// (0x00042267) cell_blid2_satellite_pane_ParamLimits

0x9730,	// (0x00042267) cell_blid2_satellite_pane

0x9748,	// (0x0004227f) cell_blid2_satellite_pane_g1

0xdbbf,	// (0x000466f6) cell_blid2_satellite_pane_t1

0xcb3f,	// (0x00045676) blid2_speed_pane_g1

0xdbcd,	// (0x00046704) blid2_speed_pane_t1

0xdbdb,	// (0x00046712) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x0004867d) blid2_speed_pane_t

0xcb3f,	// (0x00045676) blid2_navig_ring_pane_g1

0x9751,	// (0x00042288) blid2_navig_ring_pane_g2

0x9759,	// (0x00042290) blid2_navig_ring_pane_g3

0x9761,	// (0x00042298) blid2_navig_ring_pane_g4

0x9769,	// (0x000422a0) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x00048682) blid2_navig_ring_pane_g

0x12f1,	// (0x00039e28) bg_popup_window_pane_cp011

0xdbe9,	// (0x00046720) popup_blid2_search_window_g1

0xdbf1,	// (0x00046728) popup_blid2_search_window_t1

0xdbff,	// (0x00046736) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0004868d) popup_blid2_search_window_t

0x1d8a,	// (0x0003a8c1) main_browser_pane_g1

0x1a77,	// (0x0003a5ae) main_browser_pane_ParamLimits

0x1da6,	// (0x0003a8dd) bg_button_pane_cp011_ParamLimits

0x89a1,	// (0x000414d8) cell_vitu2_function_pane_g1_ParamLimits

0x1da6,	// (0x0003a8dd) bg_popup_sub_pane_cp22_ParamLimits

0x2eb4,	// (0x0003b9eb) input_focus_pane_cp08_ParamLimits

0x91e1,	// (0x00041d18) popup_vitu2_query_button_pane_ParamLimits

0x91e1,	// (0x00041d18) popup_vitu2_query_button_pane

0x2eac,	// (0x0003b9e3) popup_vitu2_query_input_button_pane

0xd7e1,	// (0x00046318) popup_vitu2_query_window_g1_ParamLimits

0x2ec1,	// (0x0003b9f8) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x00048594) popup_vitu2_query_window_g_ParamLimits

0x12f1,	// (0x00039e28) bg_button_pane_cp026

0x9771,	// (0x000422a8) popup_vitu2_query_input_button_pane_g1

0x12f1,	// (0x00039e28) bg_button_pane_cp025

0xdc0d,	// (0x00046744) popup_vitu2_query_button_pane_t1

0x719d,	// (0x0003fcd4) main_mp3_pane_t6

0x71ab,	// (0x0003fce2) popup_slider_window_cp01

0xefb0,	// (0x00047ae7) cam4_battery_pane

0xefb0,	// (0x00047ae7) cam4_battery_pane_cp02

0xefb0,	// (0x00047ae7) cam4_battery_pane_cp01

0xefb0,	// (0x00047ae7) cam4_battery_pane_cp03

0xcb3f,	// (0x00045676) cam4_battery_pane_g1

0xdc1b,	// (0x00046752) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x00048692) cam4_battery_pane_g

0xca11,	// (0x00045548) popup_blid_sat_info2_window_t11

0x5892,	// (0x0003e3c9) aid_size_touch_mv_arrow_left_ParamLimits

0xb16e,	// (0x00043ca5) aid_size_touch_mv_arrow_right_ParamLimits

0xb1a6,	// (0x00043cdd) navi_pane_g1_ParamLimits

0xb1b2,	// (0x00043ce9) navi_pane_g2_ParamLimits

0x58ab,	// (0x0003e3e2) navi_pane_g3_ParamLimits

0xf418,	// (0x00047f4f) navi_pane_g_ParamLimits

0x58d0,	// (0x0003e407) navi_pane_mv_t1_ParamLimits

0x7cf7,	// (0x0004082e) grid_imed_effect_pane_ParamLimits

0x1cc4,	// (0x0003a7fb) aid_placing_vt_slider_lsc

0x1ccc,	// (0x0003a803) aid_placing_vt_slider_prt

0x1da6,	// (0x0003a8dd) bg_tb_trans_pane_cp01_ParamLimits

0xcc8e,	// (0x000457c5) popup_image_details_window_g1_ParamLimits

0xcca1,	// (0x000457d8) popup_image_details_window_g2_ParamLimits

0xccb6,	// (0x000457ed) popup_image_details_window_g3_ParamLimits

0xccb6,	// (0x000457ed) popup_image_details_window_g3

0xf75e,	// (0x00048295) popup_image_details_window_g_ParamLimits

0xccca,	// (0x00045801) popup_image_details_window_t1_ParamLimits

0xccdc,	// (0x00045813) popup_image_details_window_t2_ParamLimits

0xccf5,	// (0x0004582c) popup_image_details_window_t3_ParamLimits

0xcd09,	// (0x00045840) popup_image_details_window_t4_ParamLimits

0xcd24,	// (0x0004585b) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0004829c) popup_image_details_window_t_ParamLimits

0x93ed,	// (0x00041f24) cl_header_name_pane_ParamLimits

0x93ed,	// (0x00041f24) cl_header_name_pane

0x9779,	// (0x000422b0) cl_header_name_pane_t1_ParamLimits

0x9779,	// (0x000422b0) cl_header_name_pane_t1

0x979a,	// (0x000422d1) cl_header_name_pane_t2_ParamLimits

0x979a,	// (0x000422d1) cl_header_name_pane_t2

0x97dc,	// (0x00042313) cl_header_name_pane_t3_ParamLimits

0x97dc,	// (0x00042313) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x00048697) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x00048697) cl_header_name_pane_t

0xb234,	// (0x00043d6b) navi_pane_mv_g2_ParamLimits

0xd4e1,	// (0x00046018) field_vitu2_entry_pane_g1_ParamLimits

0xd4ed,	// (0x00046024) field_vitu2_entry_pane_g2_ParamLimits

0xd4f9,	// (0x00046030) field_vitu2_entry_pane_g3_ParamLimits

0xd4f9,	// (0x00046030) field_vitu2_entry_pane_g3

0xf95c,	// (0x00048493) field_vitu2_entry_pane_g_ParamLimits

0x891d,	// (0x00041454) cell_vitu2_itu_pane_g1_ParamLimits

0x892d,	// (0x00041464) cell_vitu2_itu_pane_g2_ParamLimits

0x892d,	// (0x00041464) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x0004849f) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x0004849f) cell_vitu2_itu_pane_g

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp05_ParamLimits

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp05

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp03

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp04

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp10_ParamLimits

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp10

0x2f66,	// (0x0003ba9d) bg_vkb2_func_pane_cp08

0x9398,	// (0x00041ecf) bg_vkb2_func_pane_cp06

0x93a5,	// (0x00041edc) bg_vkb2_func_pane_cp07

0xdb52,	// (0x00046689) bg_vkb2_func_pane_cp11_ParamLimits

0xdb52,	// (0x00046689) bg_vkb2_func_pane_cp11

0xdb67,	// (0x0004669e) bg_vkb2_func_pane_cp12_ParamLimits

0xdb67,	// (0x0004669e) bg_vkb2_func_pane_cp12

0x12f1,	// (0x00039e28) bg_vkb2_func_pane_cp09

0xd552,	// (0x00046089) bg_vkb2_func_pane_g1

0x4717,	// (0x0003d24e) bg_vkb2_func_pane_g2

0xd55a,	// (0x00046091) bg_vkb2_func_pane_g3

0xd562,	// (0x00046099) bg_vkb2_func_pane_g4

0xd7a4,	// (0x000462db) bg_vkb2_func_pane_g5

0xd57a,	// (0x000460b1) bg_vkb2_func_pane_g6

0xd582,	// (0x000460b9) bg_vkb2_func_pane_g7

0xd572,	// (0x000460a9) bg_vkb2_func_pane_g8

0x46f7,	// (0x0003d22e) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x0004869e) bg_vkb2_func_pane_g

0x96af,	// (0x000421e6) blid2_tripm_pane_g6_ParamLimits

0x96af,	// (0x000421e6) blid2_tripm_pane_g6

0xd3a5,	// (0x00045edc) mp4_progress_pane_g1

0x971e,	// (0x00042255) blid2_tripm_values_pane_ParamLimits

0x971e,	// (0x00042255) blid2_tripm_values_pane

0x980d,	// (0x00042344) blid2_tripm_values_pane_t1

0x981b,	// (0x00042352) blid2_tripm_values_pane_t2

0x9829,	// (0x00042360) blid2_tripm_values_pane_t3

0x9837,	// (0x0004236e) blid2_tripm_values_pane_t4

0x9845,	// (0x0004237c) blid2_tripm_values_pane_t5

0x9853,	// (0x0004238a) blid2_tripm_values_pane_t6

0x9861,	// (0x00042398) blid2_tripm_values_pane_t7

0x986f,	// (0x000423a6) blid2_tripm_values_pane_t8

0x987d,	// (0x000423b4) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x000486b1) blid2_tripm_values_pane_t

0x43a8,	// (0x0003cedf) call_video_pane_t1_ParamLimits

0x43ba,	// (0x0003cef1) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00047dd8) call_video_pane_t_ParamLimits

0x2d4c,	// (0x0003b883) msg_header_pane_g1_ParamLimits

0xb41e,	// (0x00043f55) msg_header_pane_g2_ParamLimits

0xb41e,	// (0x00043f55) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00047ff2) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00047ff2) msg_header_pane_g

0x1a77,	// (0x0003a5ae) main_clock2_pane_ParamLimits

0x7a36,	// (0x0004056d) grid_clock2_toolbar_pane_ParamLimits

0x7a36,	// (0x0004056d) grid_clock2_toolbar_pane

0x7a36,	// (0x0004056d) listscroll_clock2_pane_ParamLimits

0x7a36,	// (0x0004056d) listscroll_clock2_pane

0x7b05,	// (0x0004063c) main_clock2_pane_t3_ParamLimits

0x7b05,	// (0x0004063c) main_clock2_pane_t3

0x7b1e,	// (0x00040655) main_clock2_pane_t4_ParamLimits

0x7b1e,	// (0x00040655) main_clock2_pane_t4

0xdc25,	// (0x0004675c) cell_clock2_toolbar_pane

0xdc2d,	// (0x00046764) cell_clock2_toolbar_pane_cp01

0xdc2d,	// (0x00046764) cell_clock2_toolbar_pane_cp02

0xdc35,	// (0x0004676c) cell_clock2_toolbar_pane_cp03

0xdc3d,	// (0x00046774) list_clock2_pane

0x567b,	// (0x0003e1b2) scroll_pane_cp10

0xdc45,	// (0x0004677c) list_single_clock2_pane_ParamLimits

0xdc45,	// (0x0004677c) list_single_clock2_pane

0xb295,	// (0x00043dcc) list_highlight_pane_cp08

0xdc52,	// (0x00046789) list_single_clock2_pane_t1

0xdc60,	// (0x00046797) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x000486c4) list_single_clock2_pane_t

0x12f1,	// (0x00039e28) bg_button_pane_cp10

0xdc6e,	// (0x000467a5) cell_clock2_toolbar_pane_g1

0x5cde,	// (0x0003e815) aid_main_viewer_pane_g1_ParamLimits

0x5cde,	// (0x0003e815) aid_main_viewer_pane_g1

0x5cea,	// (0x0003e821) aid_main_viewer_pane_g2_ParamLimits

0x5cea,	// (0x0003e821) aid_main_viewer_pane_g2

0x5cf6,	// (0x0003e82d) aid_main_viewer_pane_g3_ParamLimits

0x5cf6,	// (0x0003e82d) aid_main_viewer_pane_g3

0x5d05,	// (0x0003e83c) aid_main_viewer_pane_g4_ParamLimits

0x5d05,	// (0x0003e83c) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00048003) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00048003) aid_main_viewer_pane_g

0x1da6,	// (0x0003a8dd) main_calc_pane_ParamLimits

0x64f9,	// (0x0003f030) main_dialer2_pane_ParamLimits

0x12f1,	// (0x00039e28) main_cam6_pane

0x12f1,	// (0x00039e28) main_vid6_pane

0x7a42,	// (0x00040579) listscroll_gen_pane_cp06_ParamLimits

0x7a42,	// (0x00040579) listscroll_gen_pane_cp06

0x7b37,	// (0x0004066e) main_clock2_pane_t5_ParamLimits

0x7b37,	// (0x0004066e) main_clock2_pane_t5

0x7b8c,	// (0x000406c3) aid_call2_pane_cp10_ParamLimits

0x7b9e,	// (0x000406d5) aid_call_pane_cp10_ParamLimits

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7bb0,	// (0x000406e7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7bb0,	// (0x000406e7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb162,	// (0x00043c99) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0004834c) popup_clock_analogue_window_cp10_g_ParamLimits

0x7bc2,	// (0x000406f9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd405,	// (0x00045f3c) cell_dialer2_keypad_pane_g2_ParamLimits

0xd405,	// (0x00045f3c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x00048432) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x00048432) cell_dialer2_keypad_pane_g

0x81d1,	// (0x00040d08) cell_dialer2_keypad_pane_t1

0x8c6b,	// (0x000417a2) main_cset_text2_pane_ParamLimits

0x8c6b,	// (0x000417a2) main_cset_text2_pane

0xd9bb,	// (0x000464f2) area_vitu2_query_pane_g1_ParamLimits

0x2f2f,	// (0x0003ba66) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x000485e1) area_vitu2_query_pane_g_ParamLimits

0xda3f,	// (0x00046576) area_vitu2_query_pane_t7_ParamLimits

0xda3f,	// (0x00046576) area_vitu2_query_pane_t7

0x9398,	// (0x00041ecf) bg_button_pane_cp018_ParamLimits

0x93a5,	// (0x00041edc) bg_button_pane_cp021_ParamLimits

0x2f66,	// (0x0003ba9d) bg_button_pane_cp022_ParamLimits

0x2f66,	// (0x0003ba9d) bg_vkb2_func_pane_cp08_ParamLimits

0x9398,	// (0x00041ecf) bg_vkb2_func_pane_cp06_ParamLimits

0x93a5,	// (0x00041edc) bg_vkb2_func_pane_cp07_ParamLimits

0x2f75,	// (0x0003baac) input_focus_pane_cp09_ParamLimits

0xf0ef,	// (0x00047c26) cam6_autofocus_pane_ParamLimits

0xf0ef,	// (0x00047c26) cam6_autofocus_pane

0x988b,	// (0x000423c2) cam6_image_uncrop_pane_ParamLimits

0x988b,	// (0x000423c2) cam6_image_uncrop_pane

0x9898,	// (0x000423cf) cam6_indi_pane_ParamLimits

0x9898,	// (0x000423cf) cam6_indi_pane

0x98ae,	// (0x000423e5) cam6_mode_pane_ParamLimits

0x98ae,	// (0x000423e5) cam6_mode_pane

0x98c0,	// (0x000423f7) cam6_timer_pane_ParamLimits

0x98c0,	// (0x000423f7) cam6_timer_pane

0x98cc,	// (0x00042403) cam6_zoom_pane_ParamLimits

0x98cc,	// (0x00042403) cam6_zoom_pane

0x98d8,	// (0x0004240f) cam6_mode_pane_g1_ParamLimits

0x98d8,	// (0x0004240f) cam6_mode_pane_g1

0x98e8,	// (0x0004241f) cam6_mode_pane_g2_ParamLimits

0x98e8,	// (0x0004241f) cam6_mode_pane_g2

0x98f8,	// (0x0004242f) cam6_mode_pane_g3_ParamLimits

0x98f8,	// (0x0004242f) cam6_mode_pane_g3

0x9908,	// (0x0004243f) cam6_mode_pane_g4_ParamLimits

0x9908,	// (0x0004243f) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x000486c9) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x000486c9) cam6_mode_pane_g

0xdc76,	// (0x000467ad) bg_tb_trans_pane_cp08_ParamLimits

0xdc76,	// (0x000467ad) bg_tb_trans_pane_cp08

0xdc84,	// (0x000467bb) cam6_battery_pane_ParamLimits

0xdc84,	// (0x000467bb) cam6_battery_pane

0xdc9a,	// (0x000467d1) cam6_indi_pane_g1_ParamLimits

0xdc9a,	// (0x000467d1) cam6_indi_pane_g1

0xdcac,	// (0x000467e3) cam6_indi_pane_g2_ParamLimits

0xdcac,	// (0x000467e3) cam6_indi_pane_g2

0xdcbe,	// (0x000467f5) cam6_indi_pane_g3_ParamLimits

0xdcbe,	// (0x000467f5) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x000486d2) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x000486d2) cam6_indi_pane_g

0xdcd0,	// (0x00046807) cam6_indi_pane_t1_ParamLimits

0xdcd0,	// (0x00046807) cam6_indi_pane_t1

0x874e,	// (0x00041285) cam6_autofocus_pane_g1

0x8756,	// (0x0004128d) cam6_autofocus_pane_g2

0x875e,	// (0x00041295) cam6_autofocus_pane_g3

0x8766,	// (0x0004129d) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x000486d9) cam6_autofocus_pane_g

0xdcf6,	// (0x0004682d) cam6_timer_pane_g1

0xdcfe,	// (0x00046835) cam6_timer_pane_t1

0xdd0c,	// (0x00046843) cam6_zoom_cont_pane

0xdd14,	// (0x0004684b) cam6_zoom_pane_g1

0xdd1c,	// (0x00046853) cam6_zoom_pane_g2

0x9918,	// (0x0004244f) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x000486e2) cam6_zoom_pane_g

0xcb3f,	// (0x00045676) cam6_battery_pane_g1

0xcb3f,	// (0x00045676) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x00048259) cam6_battery_pane_g

0xdd24,	// (0x0004685b) cam6_zoom_cont_pane_g1

0xdd2d,	// (0x00046864) cam6_zoom_cont_pane_g2

0xdd36,	// (0x0004686d) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x000486e9) cam6_zoom_cont_pane_g

0x9935,	// (0x0004246c) cam6_mode_pane_cp_ParamLimits

0x9935,	// (0x0004246c) cam6_mode_pane_cp

0x98cc,	// (0x00042403) cam6_zoom_pane_cp_ParamLimits

0x98cc,	// (0x00042403) cam6_zoom_pane_cp

0x9947,	// (0x0004247e) vid6_image_uncrop_cif_pane_ParamLimits

0x9947,	// (0x0004247e) vid6_image_uncrop_cif_pane

0x9955,	// (0x0004248c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9955,	// (0x0004248c) vid6_image_uncrop_nhd_pane

0x988b,	// (0x000423c2) vid6_image_uncrop_vga_pane_ParamLimits

0x988b,	// (0x000423c2) vid6_image_uncrop_vga_pane

0x9962,	// (0x00042499) vid6_image_uncrop_wvga_pane_ParamLimits

0x9962,	// (0x00042499) vid6_image_uncrop_wvga_pane

0x996f,	// (0x000424a6) vid6_indi_pane_ParamLimits

0x996f,	// (0x000424a6) vid6_indi_pane

0xdc76,	// (0x000467ad) bg_tb_trans_pane_cp09_ParamLimits

0xdc76,	// (0x000467ad) bg_tb_trans_pane_cp09

0xdd4a,	// (0x00046881) cam6_battery_pane_cp_ParamLimits

0xdd4a,	// (0x00046881) cam6_battery_pane_cp

0xdd56,	// (0x0004688d) vid6_indi_pane_g1_ParamLimits

0xdd56,	// (0x0004688d) vid6_indi_pane_g1

0xdd68,	// (0x0004689f) vid6_indi_pane_g2_ParamLimits

0xdd68,	// (0x0004689f) vid6_indi_pane_g2

0xdd7a,	// (0x000468b1) vid6_indi_pane_g3_ParamLimits

0xdd7a,	// (0x000468b1) vid6_indi_pane_g3

0xdd8f,	// (0x000468c6) vid6_indi_pane_g4_ParamLimits

0xdd8f,	// (0x000468c6) vid6_indi_pane_g4

0xdda4,	// (0x000468db) vid6_indi_pane_g5_ParamLimits

0xdda4,	// (0x000468db) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x000486f0) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x000486f0) vid6_indi_pane_g

0xddbe,	// (0x000468f5) vid6_indi_pane_t1_ParamLimits

0xddbe,	// (0x000468f5) vid6_indi_pane_t1

0xddd4,	// (0x0004690b) vid6_indi_pane_t2_ParamLimits

0xddd4,	// (0x0004690b) vid6_indi_pane_t2

0xddfc,	// (0x00046933) vid6_indi_pane_t3_ParamLimits

0xddfc,	// (0x00046933) vid6_indi_pane_t3

0xde24,	// (0x0004695b) vid6_indi_pane_t4_ParamLimits

0xde24,	// (0x0004695b) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x000486fb) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x000486fb) vid6_indi_pane_t

0xde48,	// (0x0004697f) wait_bar_pane_cp08

0x9986,	// (0x000424bd) main_cset_text2_pane_t1_ParamLimits

0x9986,	// (0x000424bd) main_cset_text2_pane_t1

0x9920,	// (0x00042457) listscroll_gen_pane_cp06_t1_ParamLimits

0x9920,	// (0x00042457) listscroll_gen_pane_cp06_t1

0x12f1,	// (0x00039e28) main_cam6_set_pane

0xcd6e,	// (0x000458a5) bg_tb_trans_pane_cp06_ParamLimits

0xefb8,	// (0x00047aef) cam4_indicators_pane_g1_ParamLimits

0xefc8,	// (0x00047aff) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x0004846f) cam4_indicators_pane_g_ParamLimits

0xefe8,	// (0x00047b1f) cam4_indicators_pane_t1_ParamLimits

0xd4ba,	// (0x00045ff1) bg_tb_trans_pane_cp07_ParamLimits

0x86fd,	// (0x00041234) vid4_indicators_pane_g1_ParamLimits

0x870a,	// (0x00041241) vid4_indicators_pane_g2_ParamLimits

0x8717,	// (0x0004124e) vid4_indicators_pane_g3_ParamLimits

0x8724,	// (0x0004125b) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x00048481) vid4_indicators_pane_g_ParamLimits

0x873c,	// (0x00041273) vid4_indicators_pane_t1_ParamLimits

0xf066,	// (0x00047b9d) vid4_progress_pane_g1_ParamLimits

0xf075,	// (0x00047bac) vid4_progress_pane_g2_ParamLimits

0xf084,	// (0x00047bbb) vid4_progress_pane_g3_ParamLimits

0xf093,	// (0x00047bca) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0004862c) vid4_progress_pane_g_ParamLimits

0xf09f,	// (0x00047bd6) vid4_progress_pane_t1_ParamLimits

0xf0b5,	// (0x00047bec) vid4_progress_pane_t2_ParamLimits

0xf0ca,	// (0x00047c01) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x00048637) vid4_progress_pane_t_ParamLimits

0xf0df,	// (0x00047c16) wait_bar_pane_cp07_ParamLimits

0x99a0,	// (0x000424d7) main_cam6_set_pane_g2_ParamLimits

0x99a0,	// (0x000424d7) main_cam6_set_pane_g2

0x99c2,	// (0x000424f9) main_cset6_listscroll_pane_ParamLimits

0x99c2,	// (0x000424f9) main_cset6_listscroll_pane

0x99dc,	// (0x00042513) main_cset6_slider_pane_ParamLimits

0x99dc,	// (0x00042513) main_cset6_slider_pane

0x99f2,	// (0x00042529) main_cset6_text2_pane_ParamLimits

0x99f2,	// (0x00042529) main_cset6_text2_pane

0xde58,	// (0x0004698f) main_cset6_text_pane

0xd648,	// (0x0004617f) main_cset_list_pane_copy1_ParamLimits

0xd648,	// (0x0004617f) main_cset_list_pane_copy1

0xd658,	// (0x0004618f) scroll_pane_cp028_copy1

0x9a00,	// (0x00042537) cset_list_set_pane_copy1

0x9a12,	// (0x00042549) aid_position_infowindow_above_copy1

0x9a1a,	// (0x00042551) aid_position_infowindow_below_copy1

0x2f84,	// (0x0003babb) cset_list_set_pane_g1_copy1

0x2e71,	// (0x0003b9a8) cset_list_set_pane_g3_copy1_ParamLimits

0x2e71,	// (0x0003b9a8) cset_list_set_pane_g3_copy1

0x2f8c,	// (0x0003bac3) cset_list_set_pane_t1_copy1_ParamLimits

0x2f8c,	// (0x0003bac3) cset_list_set_pane_t1_copy1

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp021_copy1_ParamLimits

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp021_copy1

0xde60,	// (0x00046997) cset6_slider_pane_ParamLimits

0xde60,	// (0x00046997) cset6_slider_pane

0xde8c,	// (0x000469c3) main_cset6_slider_pane_g1_ParamLimits

0xde8c,	// (0x000469c3) main_cset6_slider_pane_g1

0x9a22,	// (0x00042559) main_cset6_slider_pane_g2_ParamLimits

0x9a22,	// (0x00042559) main_cset6_slider_pane_g2

0xd66d,	// (0x000461a4) main_cset6_slider_pane_g3_ParamLimits

0xd66d,	// (0x000461a4) main_cset6_slider_pane_g3

0x8d30,	// (0x00041867) main_cset6_slider_pane_g4_ParamLimits

0x8d30,	// (0x00041867) main_cset6_slider_pane_g4

0x8d78,	// (0x000418af) main_cset6_slider_pane_g5_ParamLimits

0x8d78,	// (0x000418af) main_cset6_slider_pane_g5

0xd66d,	// (0x000461a4) main_cset6_slider_pane_g7_ParamLimits

0xd66d,	// (0x000461a4) main_cset6_slider_pane_g7

0xd679,	// (0x000461b0) main_cset6_slider_pane_g8_ParamLimits

0xd679,	// (0x000461b0) main_cset6_slider_pane_g8

0x8d18,	// (0x0004184f) main_cset6_slider_pane_g9_ParamLimits

0x8d18,	// (0x0004184f) main_cset6_slider_pane_g9

0x8d24,	// (0x0004185b) main_cset6_slider_pane_g10_ParamLimits

0x8d24,	// (0x0004185b) main_cset6_slider_pane_g10

0x8d30,	// (0x00041867) main_cset6_slider_pane_g11_ParamLimits

0x8d30,	// (0x00041867) main_cset6_slider_pane_g11

0x8d3c,	// (0x00041873) main_cset6_slider_pane_g12_ParamLimits

0x8d3c,	// (0x00041873) main_cset6_slider_pane_g12

0x8d48,	// (0x0004187f) main_cset6_slider_pane_g13_ParamLimits

0x8d48,	// (0x0004187f) main_cset6_slider_pane_g13

0x8d54,	// (0x0004188b) main_cset6_slider_pane_g14_ParamLimits

0x8d54,	// (0x0004188b) main_cset6_slider_pane_g14

0x9a4a,	// (0x00042581) main_cset6_slider_pane_g15_ParamLimits

0x9a4a,	// (0x00042581) main_cset6_slider_pane_g15

0x8d78,	// (0x000418af) main_cset6_slider_pane_g16_ParamLimits

0x8d78,	// (0x000418af) main_cset6_slider_pane_g16

0x8d84,	// (0x000418bb) main_cset6_slider_pane_g17_ParamLimits

0x8d84,	// (0x000418bb) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x00048704) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x00048704) main_cset6_slider_pane_g

0xdeb4,	// (0x000469eb) main_cset6_slider_pane_t1_ParamLimits

0xdeb4,	// (0x000469eb) main_cset6_slider_pane_t1

0xdef5,	// (0x00046a2c) main_cset6_slider_pane_t2_ParamLimits

0xdef5,	// (0x00046a2c) main_cset6_slider_pane_t2

0xdf20,	// (0x00046a57) main_cset6_slider_pane_t3_ParamLimits

0xdf20,	// (0x00046a57) main_cset6_slider_pane_t3

0x9a62,	// (0x00042599) main_cset6_slider_pane_t4_ParamLimits

0x9a62,	// (0x00042599) main_cset6_slider_pane_t4

0x9a8d,	// (0x000425c4) main_cset6_slider_pane_t5_ParamLimits

0x9a8d,	// (0x000425c4) main_cset6_slider_pane_t5

0xdf4b,	// (0x00046a82) main_cset6_slider_pane_t7_ParamLimits

0xdf4b,	// (0x00046a82) main_cset6_slider_pane_t7

0x9ab8,	// (0x000425ef) main_cset6_slider_pane_t8_ParamLimits

0x9ab8,	// (0x000425ef) main_cset6_slider_pane_t8

0x9adc,	// (0x00042613) main_cset6_slider_pane_t9_ParamLimits

0x9adc,	// (0x00042613) main_cset6_slider_pane_t9

0x9b00,	// (0x00042637) main_cset6_slider_pane_t10_ParamLimits

0x9b00,	// (0x00042637) main_cset6_slider_pane_t10

0x9b24,	// (0x0004265b) main_cset6_slider_pane_t11_ParamLimits

0x9b24,	// (0x0004265b) main_cset6_slider_pane_t11

0xdf81,	// (0x00046ab8) main_cset6_slider_pane_t14_ParamLimits

0xdf81,	// (0x00046ab8) main_cset6_slider_pane_t14

0xdfba,	// (0x00046af1) main_cset6_slider_pane_t15_ParamLimits

0xdfba,	// (0x00046af1) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x00048729) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x00048729) main_cset6_slider_pane_t

0xd752,	// (0x00046289) cset_slider_pane_g1_copy1

0xd75b,	// (0x00046292) cset_slider_pane_g2_copy1

0xd764,	// (0x0004629b) cset_slider_pane_g3_copy1

0x12f1,	// (0x00039e28) bg_popup_sub_pane_cp011_copy1

0xd7ed,	// (0x00046324) main_cset_text_pane_g1_copy1

0xd7f5,	// (0x0004632c) main_cset_text_pane_t1_copy1

0xd803,	// (0x0004633a) main_cset_text_pane_t2_copy1

0xd811,	// (0x00046348) main_cset_text_pane_t3_copy1

0xd81f,	// (0x00046356) main_cset_text_pane_t4_copy1

0xd82d,	// (0x00046364) main_cset_text_pane_t5_copy1

0xd83b,	// (0x00046372) main_cset_text_pane_t6_copy1

0xd849,	// (0x00046380) main_cset_text_pane_t7_copy1

0x9b48,	// (0x0004267f) main_cset_text2_pane_t1_copy1

0x12f1,	// (0x00039e28) main_ncimui_pane

0x6707,	// (0x0003f23e) popup_query_ncimui_window_ParamLimits

0x6707,	// (0x0003f23e) popup_query_ncimui_window

0xce0f,	// (0x00045946) field_cale_ev2_pane_g4_ParamLimits

0xce0f,	// (0x00045946) field_cale_ev2_pane_g4

0x80c3,	// (0x00040bfa) cell_video_dialer_keypad_pane_g2_ParamLimits

0x80c3,	// (0x00040bfa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0004840d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0004840d) cell_video_dialer_keypad_pane_g

0x80db,	// (0x00040c12) cell_video_dialer_keypad_pane_t1

0x12f1,	// (0x00039e28) bg_popup_window_pane_cp012

0x54e3,	// (0x0003e01a) heading_pane_cp06

0xe0dc,	// (0x00046c13) ncim_query_content_pane

0x12f1,	// (0x00039e28) bg_popup_heading_pane_cp01

0xe0e4,	// (0x00046c1b) ncim_heading_pane_t1

0xe0f2,	// (0x00046c29) ncim_indicator_popup_pane

0xe104,	// (0x00046c3b) ncim_query_button_pane

0xe118,	// (0x00046c4f) ncim_query_content_pane_t1

0xe12a,	// (0x00046c61) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x00048768) ncim_query_content_pane_t

0xe164,	// (0x00046c9b) ncim_query_list_pane

0xe176,	// (0x00046cad) ncim_query_popup_pane

0xe0f2,	// (0x00046c29) ncim_indicator_popup_pane_ParamLimits

0x9c28,	// (0x0004275f) ncim_query_content_pane_g1_ParamLimits

0x9c28,	// (0x0004275f) ncim_query_content_pane_g1

0xe118,	// (0x00046c4f) ncim_query_content_pane_t1_ParamLimits

0xe12a,	// (0x00046c61) ncim_query_content_pane_t2_ParamLimits

0x9c34,	// (0x0004276b) ncim_query_content_pane_t3_ParamLimits

0x9c34,	// (0x0004276b) ncim_query_content_pane_t3

0x9c5c,	// (0x00042793) ncim_query_content_pane_t4_ParamLimits

0x9c5c,	// (0x00042793) ncim_query_content_pane_t4

0x9c84,	// (0x000427bb) ncim_query_content_pane_t5_ParamLimits

0x9c84,	// (0x000427bb) ncim_query_content_pane_t5

0xe13c,	// (0x00046c73) ncim_query_content_pane_t6_ParamLimits

0xe13c,	// (0x00046c73) ncim_query_content_pane_t6

0xfc31,	// (0x00048768) ncim_query_content_pane_t_ParamLimits

0xe164,	// (0x00046c9b) ncim_query_list_pane_ParamLimits

0xe176,	// (0x00046cad) ncim_query_popup_pane_ParamLimits

0xe18a,	// (0x00046cc1) wait_bar_pane_cp04

0x12f1,	// (0x00039e28) input_focus_pane_cp011

0xe192,	// (0x00046cc9) ncim_query_popup_pane_t1

0xe1a0,	// (0x00046cd7) ncim_list_query_list_pane_ParamLimits

0xe1a0,	// (0x00046cd7) ncim_list_query_list_pane

0x12f1,	// (0x00039e28) bg_button_pane_cp027

0xe1b3,	// (0x00046cea) ncim_query_button_pane_g1

0x12f1,	// (0x00039e28) list_highlight_pane_cp012

0xe1bd,	// (0x00046cf4) ncim_list_query_list_pane_g1

0xe1c5,	// (0x00046cfc) ncim_list_query_list_pane_t1

0xefd8,	// (0x00047b0f) cam4_indicators_pane_g3_ParamLimits

0xefd8,	// (0x00047b0f) cam4_indicators_pane_g3

0x8730,	// (0x00041267) vid4_indicators_pane_g5_ParamLimits

0x8730,	// (0x00041267) vid4_indicators_pane_g5

0x5252,	// (0x0003dd89) vid4_progress_pane_g5_ParamLimits

0x5252,	// (0x0003dd89) vid4_progress_pane_g5

0x9b72,	// (0x000426a9) main_ncimui_pane_g1

0x9bb8,	// (0x000426ef) ncimui_group_query_pane_ParamLimits

0x9bb8,	// (0x000426ef) ncimui_group_query_pane

0x9bec,	// (0x00042723) ncimui_list_pane_ParamLimits

0x9bec,	// (0x00042723) ncimui_list_pane

0x9c04,	// (0x0004273b) ncimui_text_pane_ParamLimits

0x9c04,	// (0x0004273b) ncimui_text_pane

0x9cac,	// (0x000427e3) ncimui_text_pane_t1_ParamLimits

0x9cac,	// (0x000427e3) ncimui_text_pane_t1

0xe1dc,	// (0x00046d13) ncimui_list_single_graphic_pane_ParamLimits

0xe1dc,	// (0x00046d13) ncimui_list_single_graphic_pane

0x9cd2,	// (0x00042809) ncimui_query_pane_ParamLimits

0x9cd2,	// (0x00042809) ncimui_query_pane

0x12f1,	// (0x00039e28) list_highlight_pane_cp013

0xe1e9,	// (0x00046d20) ncim_list_query_list_pane_t1_copy1

0xe1f7,	// (0x00046d2e) ncim_list_single_graphic_pane_g1

0xe1ff,	// (0x00046d36) ncim_query_button_pane_cp01

0xe207,	// (0x00046d3e) ncim_query_entry_pane_ParamLimits

0xe207,	// (0x00046d3e) ncim_query_entry_pane

0xe217,	// (0x00046d4e) ncimui_query_pane_g1

0xe21f,	// (0x00046d56) ncimui_query_pane_t1_ParamLimits

0xe21f,	// (0x00046d56) ncimui_query_pane_t1

0x12f1,	// (0x00039e28) input_focus_pane_cp012

0xe192,	// (0x00046cc9) ncim_query_entry_pane_t1

0x1a77,	// (0x0003a5ae) main_im_pane_ParamLimits

0x1da6,	// (0x0003a8dd) main_mobtv_pane_ParamLimits

0x1da6,	// (0x0003a8dd) main_mobtv_pane

0x8d18,	// (0x0004184f) main_cset6_slider_pane_g18_ParamLimits

0x8d18,	// (0x0004184f) main_cset6_slider_pane_g18

0x8d48,	// (0x0004187f) main_cset6_slider_pane_g19_ParamLimits

0x8d48,	// (0x0004187f) main_cset6_slider_pane_g19

0xe235,	// (0x00046d6c) bg_main_mobtv_pane_ParamLimits

0xe235,	// (0x00046d6c) bg_main_mobtv_pane

0x9ce2,	// (0x00042819) main_mobtv_info_pane

0x9ceb,	// (0x00042822) main_mobtv_loading_pane_ParamLimits

0x9ceb,	// (0x00042822) main_mobtv_loading_pane

0xe243,	// (0x00046d7a) main_mobtv_pg_channel_list_pane

0xe24d,	// (0x00046d84) main_mobtv_pg_hdr_pane

0x9cf8,	// (0x0004282f) main_mobtv_programe_curr_pane_ParamLimits

0x9cf8,	// (0x0004282f) main_mobtv_programe_curr_pane

0x9d05,	// (0x0004283c) main_mobtv_programe_next_pane_ParamLimits

0x9d05,	// (0x0004283c) main_mobtv_programe_next_pane

0xe256,	// (0x00046d8d) popup_mobtv_noti_window

0xcb3f,	// (0x00045676) main_tv_pg_hdr_pane_g1

0xe25e,	// (0x00046d95) main_tv_pg_hdr_pane_g2

0xe266,	// (0x00046d9d) main_tv_pg_hdr_pane_g3

0xe26e,	// (0x00046da5) main_tv_pg_hdr_pane_g4

0xe276,	// (0x00046dad) main_tv_pg_hdr_pane_g5

0xe27e,	// (0x00046db5) main_tv_pg_hdr_pane_g6

0xe286,	// (0x00046dbd) main_tv_pg_hdr_pane_g7

0xe28e,	// (0x00046dc5) main_tv_pg_hdr_pane_g8

0xe296,	// (0x00046dcd) main_tv_pg_hdr_pane_g9

0xe29e,	// (0x00046dd5) main_tv_pg_hdr_pane_g10

0xe2a8,	// (0x00046ddf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x00048775) main_tv_pg_hdr_pane_g

0xe2b2,	// (0x00046de9) main_tv_pg_hdr_pane_t1

0xe2c0,	// (0x00046df7) main_tv_pg_hdr_pane_t2

0xe2ce,	// (0x00046e05) main_tv_pg_hdr_pane_t3

0xe2dc,	// (0x00046e13) main_tv_pg_hdr_pane_t4

0xe2ea,	// (0x00046e21) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0004878c) main_tv_pg_hdr_pane_t

0xe2f8,	// (0x00046e2f) single_mobtv_pg_channel_pane_ParamLimits

0xe2f8,	// (0x00046e2f) single_mobtv_pg_channel_pane

0xe30a,	// (0x00046e41) single_mobtv_pg_channel_table_pane

0xe313,	// (0x00046e4a) single_mobtv_pg_channel_thumb_pane

0xe31c,	// (0x00046e53) single_tv_pg_channel_pane_g1

0xe325,	// (0x00046e5c) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x00048797) single_tv_pg_channel_pane_g

0xcd6e,	// (0x000458a5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcd6e,	// (0x000458a5) bg_single_mobtv_pg_channel_thumb_pane

0xe32e,	// (0x00046e65) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe32e,	// (0x00046e65) single_mobtv_pg_channel_thumb_pane_g1

0xe33c,	// (0x00046e73) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe33c,	// (0x00046e73) single_mobtv_pg_channel_thumb_pane_g2

0xe348,	// (0x00046e7f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe348,	// (0x00046e7f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0004879c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0004879c) single_mobtv_pg_channel_thumb_pane_g

0xe354,	// (0x00046e8b) single_mobtv_pg_channel_thumb_pane_t1

0xe362,	// (0x00046e99) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x000487a3) single_mobtv_pg_channel_thumb_pane_t

0xcb3f,	// (0x00045676) bg_single_mobtv_pg_channel_table_pane_g1

0xcb3f,	// (0x00045676) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x00048259) bg_single_mobtv_pg_channel_table_pane_g

0xe370,	// (0x00046ea7) single_mobtv_pg_channel_table_pane_t1

0xe37e,	// (0x00046eb5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x000487a8) single_mobtv_pg_channel_table_pane_t

0x9d1a,	// (0x00042851) main_mobtv_info_pane_g1_ParamLimits

0x9d1a,	// (0x00042851) main_mobtv_info_pane_g1

0x9d36,	// (0x0004286d) main_mobtv_info_pane_t1_ParamLimits

0x9d36,	// (0x0004286d) main_mobtv_info_pane_t1

0x9d9c,	// (0x000428d3) main_mobtv_info_pane_t2_ParamLimits

0x9d9c,	// (0x000428d3) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x000487b2) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x000487b2) main_mobtv_info_pane_t

0x9e1f,	// (0x00042956) wait_bar_pane_cp05

0x9e2f,	// (0x00042966) main_mobtv_loading_pane_g1_ParamLimits

0x9e2f,	// (0x00042966) main_mobtv_loading_pane_g1

0x9e40,	// (0x00042977) main_mobtv_loading_pane_g2_ParamLimits

0x9e40,	// (0x00042977) main_mobtv_loading_pane_g2

0x9e4c,	// (0x00042983) main_mobtv_loading_pane_g3_ParamLimits

0x9e4c,	// (0x00042983) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x000487b9) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x000487b9) main_mobtv_loading_pane_g

0xe38c,	// (0x00046ec3) main_mobtv_loading_pane_t1_ParamLimits

0xe38c,	// (0x00046ec3) main_mobtv_loading_pane_t1

0xe3a4,	// (0x00046edb) main_mobtv_loading_pane_t2_ParamLimits

0xe3a4,	// (0x00046edb) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x000487c0) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x000487c0) main_mobtv_loading_pane_t

0x9e5d,	// (0x00042994) wait_bar_pane_cp06_ParamLimits

0x9e5d,	// (0x00042994) wait_bar_pane_cp06

0xe3c8,	// (0x00046eff) main_mobtv_programe_curr_pane_t1

0xe3d6,	// (0x00046f0d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x000487c5) main_mobtv_programe_curr_pane_t

0xe3e4,	// (0x00046f1b) main_mobtv_programe_next_pane_t1

0xe3f2,	// (0x00046f29) main_mobtv_programe_next_pane_t2

0xe400,	// (0x00046f37) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x000487ca) main_mobtv_programe_next_pane_t

0x12f1,	// (0x00039e28) bg_popup_mobtv_noti_window_pane

0xe40e,	// (0x00046f45) popup_mobtv_noti_window_g1

0xe416,	// (0x00046f4d) popup_mobtv_noti_window_t1

0xe424,	// (0x00046f5b) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x000487d1) popup_mobtv_noti_window_t

0xcb3f,	// (0x00045676) bg_popup_mobtv_noti_window_pane_g1

0x12f1,	// (0x00039e28) sc_clock_pane

0x12f1,	// (0x00039e28) main_fs_bigclock_pane

0x9708,	// (0x0004223f) blid2_tripm_pane_t4_ParamLimits

0x9708,	// (0x0004223f) blid2_tripm_pane_t4

0x9e6c,	// (0x000429a3) sc_clock_pane_g1_ParamLimits

0x9e6c,	// (0x000429a3) sc_clock_pane_g1

0x9e7e,	// (0x000429b5) sc_clock_pane_t1_ParamLimits

0x9e7e,	// (0x000429b5) sc_clock_pane_t1

0x9ea0,	// (0x000429d7) sc_clock_pane_t2_ParamLimits

0x9ea0,	// (0x000429d7) sc_clock_pane_t2

0x9eb6,	// (0x000429ed) sc_clock_pane_t3_ParamLimits

0x9eb6,	// (0x000429ed) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x000487d6) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x000487d6) sc_clock_pane_t

0xa663,	// (0x0004319a) main_fs_bigclock_indicator_pane_ParamLimits

0xa663,	// (0x0004319a) main_fs_bigclock_indicator_pane

0xcd3e,	// (0x00045875) main_fs_bigclock_pane_g1_ParamLimits

0xcd3e,	// (0x00045875) main_fs_bigclock_pane_g1

0xa66f,	// (0x000431a6) main_fs_bigclock_pane_t1_ParamLimits

0xa66f,	// (0x000431a6) main_fs_bigclock_pane_t1

0xa681,	// (0x000431b8) main_fs_bigclock_pane_t2_ParamLimits

0xa681,	// (0x000431b8) main_fs_bigclock_pane_t2

0xa693,	// (0x000431ca) main_fs_bigclock_pane_t3_ParamLimits

0xa693,	// (0x000431ca) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x000489d0) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x000489d0) main_fs_bigclock_pane_t

0x0944,	// (0x0003947b) main_fs_bigclock_indicator_pane_g1

0xe10c,	// (0x00046c43) ncim_query_content_pane_g2_ParamLimits

0xe10c,	// (0x00046c43) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x00048763) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x00048763) ncim_query_content_pane_g

0x9ecb,	// (0x00042a02) sc_clock_pane_t4_ParamLimits

0x9ecb,	// (0x00042a02) sc_clock_pane_t4

0x1da6,	// (0x0003a8dd) main_radioblah_pane

0xd45c,	// (0x00045f93) cell_call4_button_pane_t1_copy1_ParamLimits

0xd45c,	// (0x00045f93) cell_call4_button_pane_t1_copy1

0x9b7a,	// (0x000426b1) main_ncimui_pane_t1_ParamLimits

0x9b7a,	// (0x000426b1) main_ncimui_pane_t1

0x9b8c,	// (0x000426c3) main_ncimui_pane_t2_ParamLimits

0x9b8c,	// (0x000426c3) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0004875c) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0004875c) main_ncimui_pane_t

0xe54e,	// (0x00047085) main_radioblah_anim_pane_ParamLimits

0xe54e,	// (0x00047085) main_radioblah_anim_pane

0xe55f,	// (0x00047096) main_radioblah_info_pane_ParamLimits

0xe55f,	// (0x00047096) main_radioblah_info_pane

0xe573,	// (0x000470aa) main_radioblah_pane_t1_ParamLimits

0xe573,	// (0x000470aa) main_radioblah_pane_t1

0xe58f,	// (0x000470c6) main_radioblah_pane_t2_ParamLimits

0xe58f,	// (0x000470c6) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x000487f7) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x000487f7) main_radioblah_pane_t

0x9f62,	// (0x00042a99) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9f62,	// (0x00042a99) main_radioblah_rocker_ctrl_pane

0xe5d7,	// (0x0004710e) main_radioblah_info_pane_t1_ParamLimits

0xe5d7,	// (0x0004710e) main_radioblah_info_pane_t1

0x9fb6,	// (0x00042aed) main_radioblah_info_pane_t2_ParamLimits

0x9fb6,	// (0x00042aed) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x00048800) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x00048800) main_radioblah_info_pane_t

0xcb3f,	// (0x00045676) main_radioblah_rocker_ctrl_pane_g1

0xa064,	// (0x00042b9b) main_radioblah_rocker_ctrl_pane_g2

0xa06c,	// (0x00042ba3) main_radioblah_rocker_ctrl_pane_g3

0xa074,	// (0x00042bab) main_radioblah_rocker_ctrl_pane_g4

0xa07c,	// (0x00042bb3) main_radioblah_rocker_ctrl_pane_g5

0xa084,	// (0x00042bbb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x00048809) main_radioblah_rocker_ctrl_pane_g

0x9b48,	// (0x0004267f) main_cset_text2_pane_t1_copy1_ParamLimits

0xefa8,	// (0x00047adf) cam4_image_uncrop_qvga_pane

0xf002,	// (0x00047b39) vid4_image_uncrop_qcif_pane

0xf0ef,	// (0x00047c26) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ef,	// (0x00047c26) cam6_image_uncrop_qvga_pane

0xdd3e,	// (0x00046875) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd3e,	// (0x00046875) vid6_image_uncrop_qcif_pane

0x12f1,	// (0x00039e28) bg_popup_preview_window_pane_cp03

0xe0be,	// (0x00046bf5) list_cset_text2_pane

0xe0c6,	// (0x00046bfd) main_cset6_text2_pane_g1

0xe0ce,	// (0x00046c05) main_cset6_text2_pane_t1

0xa08c,	// (0x00042bc3) list_cset_text2_pane_t1_ParamLimits

0xa08c,	// (0x00042bc3) list_cset_text2_pane_t1

0x1da6,	// (0x0003a8dd) main_radioblah_pane_ParamLimits

0x9e0d,	// (0x00042944) main_mobtv_info_pane_t3_ParamLimits

0x9e0d,	// (0x00042944) main_mobtv_info_pane_t3

0x9f50,	// (0x00042a87) main_radioblah_pane_g1

0x9f8a,	// (0x00042ac1) main_radioblah_info_pane_g1

0xa009,	// (0x00042b40) main_radioblah_info_pane_t3_ParamLimits

0xa009,	// (0x00042b40) main_radioblah_info_pane_t3

0x4fb2,	// (0x0003dae9) highlight_cell_cale_month_pane_ParamLimits

0x4fb2,	// (0x0003dae9) highlight_cell_cale_month_pane

0x12f1,	// (0x00039e28) main_phob_fisheye_pane

0xceb8,	// (0x000459ef) scroll_pane_cp0031_ParamLimits

0xceb8,	// (0x000459ef) scroll_pane_cp0031

0xde48,	// (0x0004697f) wait_bar_pane_cp08_ParamLimits

0x9a00,	// (0x00042537) cset_list_set_pane_copy1_ParamLimits

0xe611,	// (0x00047148) highlight_cell_cale_month_pane_g1

0xa0a5,	// (0x00042bdc) highlight_cell_cale_month_pane_t1

0xe619,	// (0x00047150) list_gen_pane_cp01

0xd658,	// (0x0004618f) scroll_pane_01

0x1dc0,	// (0x0003a8f7) list_single_double_fisheye_pane

0xe622,	// (0x00047159) list_double_fisheye_pane_g1_ParamLimits

0xe622,	// (0x00047159) list_double_fisheye_pane_g1

0xe62e,	// (0x00047165) list_double_fisheye_pane_g2_ParamLimits

0xe62e,	// (0x00047165) list_double_fisheye_pane_g2

0x1dc9,	// (0x0003a900) list_double_fisheye_pane_g3_ParamLimits

0x1dc9,	// (0x0003a900) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x00048816) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x00048816) list_double_fisheye_pane_g

0xe65f,	// (0x00047196) list_double_fisheye_pane_t1_ParamLimits

0xe65f,	// (0x00047196) list_double_fisheye_pane_t1

0xe67a,	// (0x000471b1) list_double_fisheye_pane_t2_ParamLimits

0xe67a,	// (0x000471b1) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x00048821) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x00048821) list_double_fisheye_pane_t

0x12f1,	// (0x00039e28) main_call5_pane

0x9ef4,	// (0x00042a2b) sc_swipe_pane_ParamLimits

0x9ef4,	// (0x00042a2b) sc_swipe_pane

0xa0c4,	// (0x00042bfb) call5_image_pane_ParamLimits

0xa0c4,	// (0x00042bfb) call5_image_pane

0xa0d9,	// (0x00042c10) call5_swipe_1_pane_ParamLimits

0xa0d9,	// (0x00042c10) call5_swipe_1_pane

0xa0ea,	// (0x00042c21) call5_swipe_2_pane_ParamLimits

0xa0ea,	// (0x00042c21) call5_swipe_2_pane

0xa10f,	// (0x00042c46) popup_call5_audio_first_window_ParamLimits

0xa10f,	// (0x00042c46) popup_call5_audio_first_window

0xcd6e,	// (0x000458a5) call5_swipe_1_pane_g1_ParamLimits

0xcd6e,	// (0x000458a5) call5_swipe_1_pane_g1

0xe69c,	// (0x000471d3) call5_swipe_1_pane_g2_ParamLimits

0xe69c,	// (0x000471d3) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x00048826) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x00048826) call5_swipe_1_pane_g

0xe6a8,	// (0x000471df) call5_swipe_1_pane_t1_ParamLimits

0xe6a8,	// (0x000471df) call5_swipe_1_pane_t1

0xcd6e,	// (0x000458a5) call5_swipe_2_pane_g1_ParamLimits

0xcd6e,	// (0x000458a5) call5_swipe_2_pane_g1

0xe6bd,	// (0x000471f4) call5_swipe_2_pane_g2_ParamLimits

0xe6bd,	// (0x000471f4) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0004882b) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0004882b) call5_swipe_2_pane_g

0xe6c9,	// (0x00047200) call5_swipe_2_pane_t1_ParamLimits

0xe6c9,	// (0x00047200) call5_swipe_2_pane_t1

0xe6de,	// (0x00047215) sc_swipe_pane_g1_ParamLimits

0xe6de,	// (0x00047215) sc_swipe_pane_g1

0xe6eb,	// (0x00047222) sc_swipe_pane_g2_ParamLimits

0xe6eb,	// (0x00047222) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x00048830) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x00048830) sc_swipe_pane_g

0xe6f7,	// (0x0004722e) sc_swipe_pane_t1_ParamLimits

0xe6f7,	// (0x0004722e) sc_swipe_pane_t1

0x12f1,	// (0x00039e28) main_cmail_launcher_pane

0xa11e,	// (0x00042c55) aid_size_cell_cmail_l_ParamLimits

0xa11e,	// (0x00042c55) aid_size_cell_cmail_l

0xa137,	// (0x00042c6e) grid_cmail_l_pane_ParamLimits

0xa137,	// (0x00042c6e) grid_cmail_l_pane

0xa14c,	// (0x00042c83) cell_cmail_l_pane_ParamLimits

0xa14c,	// (0x00042c83) cell_cmail_l_pane

0xa16e,	// (0x00042ca5) cell_cmail_l_pane_g1_ParamLimits

0xa16e,	// (0x00042ca5) cell_cmail_l_pane_g1

0xa17e,	// (0x00042cb5) cell_cmail_l_pane_t1_ParamLimits

0xa17e,	// (0x00042cb5) cell_cmail_l_pane_t1

0xe70c,	// (0x00047243) cell_cmail_l_pane_t2_ParamLimits

0xe70c,	// (0x00047243) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x00048835) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x00048835) cell_cmail_l_pane_t

0x1da6,	// (0x0003a8dd) grid_highlight_pane_cp018_ParamLimits

0x1da6,	// (0x0003a8dd) grid_highlight_pane_cp018

0x35e7,	// (0x0003c11e) main2_pane_ParamLimits

0x35e7,	// (0x0003c11e) main2_pane

0x1b22,	// (0x0003a659) popup_sp_fs_action_menu_bg_pane_g1

0x1b2a,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g2

0x1b32,	// (0x0003a669) popup_sp_fs_action_menu_bg_pane_g3

0x1b3a,	// (0x0003a671) popup_sp_fs_action_menu_bg_pane_g4

0x1b42,	// (0x0003a679) popup_sp_fs_action_menu_bg_pane_g5

0x1b4a,	// (0x0003a681) popup_sp_fs_action_menu_bg_pane_g6

0x1b52,	// (0x0003a689) popup_sp_fs_action_menu_bg_pane_g7

0x1b5a,	// (0x0003a691) popup_sp_fs_action_menu_bg_pane_g8

0x1b62,	// (0x0003a699) popup_sp_fs_action_menu_bg_pane_g9

0x1b6a,	// (0x0003a6a1) popup_sp_fs_action_menu_bg_pane_g10

0x1b6a,	// (0x0003a6a1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00047cf2) popup_sp_fs_action_menu_bg_pane_g

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g3_g1

0xaf22,	// (0x00043a59) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_t3_g3_g2

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00047da2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00047da2) list_medium_line_x2_t3_g3_g

0xaf3a,	// (0x00043a71) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaf3a,	// (0x00043a71) list_medium_line_x2_t3_g3_t1

0x2c5d,	// (0x0003b794) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2c5d,	// (0x0003b794) list_medium_line_x2_t3_g3_t2

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00047da9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00047da9) list_medium_line_x2_t3_g3_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g2_g1

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00047db0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00047db0) list_medium_line_x2_t3_g2_g

0xaf64,	// (0x00043a9b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaf64,	// (0x00043a9b) list_medium_line_x2_t3_g2_t1

0xaf7a,	// (0x00043ab1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaf7a,	// (0x00043ab1) list_medium_line_x2_t3_g2_t2

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00047db5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00047db5) list_medium_line_x2_t3_g2_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t4_g4_g1

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t4_g4_g2

0xaf22,	// (0x00043a59) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_t4_g4_g3

0xaf98,	// (0x00043acf) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaf98,	// (0x00043acf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00047dbc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00047dbc) list_medium_line_x2_t4_g4_g

0x2c6f,	// (0x0003b7a6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2c6f,	// (0x0003b7a6) list_medium_line_x2_t4_g4_t1

0x2c86,	// (0x0003b7bd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2c86,	// (0x0003b7bd) list_medium_line_x2_t4_g4_t2

0x2c9b,	// (0x0003b7d2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2c9b,	// (0x0003b7d2) list_medium_line_x2_t4_g4_t3

0xafa4,	// (0x00043adb) list_medium_line_x2_t4_g4_t4_ParamLimits

0xafa4,	// (0x00043adb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00047dc5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00047dc5) list_medium_line_x2_t4_g4_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g4_g1

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t2_g4_g2

0xaf22,	// (0x00043a59) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_t2_g4_g3

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00047e2c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00047e2c) list_medium_line_x2_t2_g4_g

0xafb6,	// (0x00043aed) list_medium_line_x2_t2_g4_t1_ParamLimits

0xafb6,	// (0x00043aed) list_medium_line_x2_t2_g4_t1

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00047e35) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00047e35) list_medium_line_x2_t2_g4_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g3_g1

0xaf22,	// (0x00043a59) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_t2_g3_g2

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00047da2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00047da2) list_medium_line_x2_t2_g3_g

0xafcb,	// (0x00043b02) list_medium_line_x2_t2_g3_t1_ParamLimits

0xafcb,	// (0x00043b02) list_medium_line_x2_t2_g3_t1

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00047e3a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00047e3a) list_medium_line_x2_t2_g3_t

0x530d,	// (0x0003de44) main_sp_fs_list_pane_ParamLimits

0x530d,	// (0x0003de44) main_sp_fs_list_pane

0x531a,	// (0x0003de51) sp_fs_scroll_pane_ParamLimits

0x531a,	// (0x0003de51) sp_fs_scroll_pane

0x2cad,	// (0x0003b7e4) list_medium_line_x2_t3_t1

0x2cbd,	// (0x0003b7f4) list_medium_line_x2_t3_t2

0xb00e,	// (0x00043b45) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00047e85) list_medium_line_x2_t3_t

0x2ccb,	// (0x0003b802) list_medium_line_x3_t4_t1

0x2cdb,	// (0x0003b812) list_medium_line_x3_t4_t2

0xb01c,	// (0x00043b53) list_medium_line_x3_t4_t3

0xb02a,	// (0x00043b61) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00047e8c) list_medium_line_x3_t4_t

0x2ce9,	// (0x0003b820) list_medium_line_x4_t5_t1

0x2cf9,	// (0x0003b830) list_medium_line_x4_t5_t2

0xb01c,	// (0x00043b53) list_medium_line_x4_t5_t3

0xb038,	// (0x00043b6f) list_medium_line_x4_t5_t4

0xb02a,	// (0x00043b61) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00047e95) list_medium_line_x4_t5_t

0xaf16,	// (0x00043a4d) list_medium_line_t4_g4_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t4_g4_g1

0xaf98,	// (0x00043acf) list_medium_line_t4_g4_g2_ParamLimits

0xaf98,	// (0x00043acf) list_medium_line_t4_g4_g2

0xb046,	// (0x00043b7d) list_medium_line_t4_g4_g3_ParamLimits

0xb046,	// (0x00043b7d) list_medium_line_t4_g4_g3

0xaf2e,	// (0x00043a65) list_medium_line_t4_g4_g4_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00047ea0) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00047ea0) list_medium_line_t4_g4_g

0xb052,	// (0x00043b89) list_medium_line_t4_g4_t1_ParamLimits

0xb052,	// (0x00043b89) list_medium_line_t4_g4_t1

0xb067,	// (0x00043b9e) list_medium_line_t4_g4_t2_ParamLimits

0xb067,	// (0x00043b9e) list_medium_line_t4_g4_t2

0xb07d,	// (0x00043bb4) list_medium_line_t4_g4_t3_ParamLimits

0xb07d,	// (0x00043bb4) list_medium_line_t4_g4_t3

0xb093,	// (0x00043bca) list_medium_line_t4_g4_t4_ParamLimits

0xb093,	// (0x00043bca) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00047ea9) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00047ea9) list_medium_line_t4_g4_t

0x5648,	// (0x0003e17f) chi_dic_find_pane_g1

0x650d,	// (0x0003f044) main_tport_pane

0xd796,	// (0x000462cd) list_medium_line_plain_t1

0xaf16,	// (0x00043a4d) list_medium_line_t2_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t2_g2_g1

0xaf22,	// (0x00043a59) list_medium_line_t2_g2_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x00048578) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x00048578) list_medium_line_t2_g2_g

0x2e80,	// (0x0003b9b7) list_medium_line_t2_g2_t1_ParamLimits

0x2e80,	// (0x0003b9b7) list_medium_line_t2_g2_t1

0x2e97,	// (0x0003b9ce) list_medium_line_t2_g2_t2_ParamLimits

0x2e97,	// (0x0003b9ce) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x0004857d) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x0004857d) list_medium_line_t2_g2_t

0xdabd,	// (0x000465f4) aid_sp_fs_list_icon_a_sm

0xdac5,	// (0x000465fc) aid_sp_fs_list_icon_d

0xdacd,	// (0x00046604) aid_sp_fs_text_primary

0xdad6,	// (0x0004660d) aid_sp_fs_text_secondary

0xdadf,	// (0x00046616) list_medium_line

0xdadf,	// (0x00046616) list_medium_line_g2

0xdadf,	// (0x00046616) list_medium_line_g3

0xdadf,	// (0x00046616) list_medium_line_plain

0xdadf,	// (0x00046616) list_medium_line_plain_t2

0xdadf,	// (0x00046616) list_medium_line_plain_t3

0xdadf,	// (0x00046616) list_medium_line_right_icon

0xdadf,	// (0x00046616) list_medium_line_right_iconx2

0xdadf,	// (0x00046616) list_medium_line_t2

0xdadf,	// (0x00046616) list_medium_line_t2_g2

0xdadf,	// (0x00046616) list_medium_line_t2_g3

0xdadf,	// (0x00046616) list_medium_line_t2_right_icon

0xdadf,	// (0x00046616) list_medium_line_t2_right_iconx2

0xdadf,	// (0x00046616) list_medium_line_t3

0xdadf,	// (0x00046616) list_medium_line_t3_g2

0xdadf,	// (0x00046616) list_medium_line_t3_g3

0xdadf,	// (0x00046616) list_medium_line_t3_right_iconx2

0xdae8,	// (0x0004661f) list_medium_line_t4_g4

0xdaf1,	// (0x00046628) list_medium_line_x2

0xdaf1,	// (0x00046628) list_medium_line_x2_t2_g2

0xdaf1,	// (0x00046628) list_medium_line_x2_t2_g3

0xdaf1,	// (0x00046628) list_medium_line_x2_t2_g4

0xdaf1,	// (0x00046628) list_medium_line_x2_t3

0xdaf1,	// (0x00046628) list_medium_line_x2_t3_g2

0xdaf1,	// (0x00046628) list_medium_line_x2_t3_g3

0xdaf1,	// (0x00046628) list_medium_line_x2_t3_g4

0xdaf1,	// (0x00046628) list_medium_line_x2_t4_g2

0xdaf1,	// (0x00046628) list_medium_line_x2_t4_g4

0xdafa,	// (0x00046631) list_medium_line_x3

0xdafa,	// (0x00046631) list_medium_line_x3_t4

0xdafa,	// (0x00046631) list_medium_line_x3_t4_g4

0xdae8,	// (0x0004661f) list_medium_line_x4_t4

0xdae8,	// (0x0004661f) list_medium_line_x4_t4_g7

0xdae8,	// (0x0004661f) list_medium_line_x4_t5

0xdb03,	// (0x0004663a) list_single_fs_dyc_pane_ParamLimits

0xdb03,	// (0x0004663a) list_single_fs_dyc_pane

0xaf16,	// (0x00043a4d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x4_t4_g7_g1

0xdff3,	// (0x00046b2a) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdff3,	// (0x00046b2a) list_medium_line_x4_t4_g7_g2

0xdfff,	// (0x00046b36) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdfff,	// (0x00046b36) list_medium_line_x4_t4_g7_g3

0xe00e,	// (0x00046b45) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe00e,	// (0x00046b45) list_medium_line_x4_t4_g7_g4

0xe01a,	// (0x00046b51) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe01a,	// (0x00046b51) list_medium_line_x4_t4_g7_g5

0xe029,	// (0x00046b60) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe029,	// (0x00046b60) list_medium_line_x4_t4_g7_g6

0xe038,	// (0x00046b6f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe038,	// (0x00046b6f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x00048742) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x00048742) list_medium_line_x4_t4_g7_g

0xe044,	// (0x00046b7b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe044,	// (0x00046b7b) list_medium_line_x4_t4_g7_t1

0xe059,	// (0x00046b90) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe059,	// (0x00046b90) list_medium_line_x4_t4_g7_t2

0xe06e,	// (0x00046ba5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe06e,	// (0x00046ba5) list_medium_line_x4_t4_g7_t3

0xe083,	// (0x00046bba) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe083,	// (0x00046bba) list_medium_line_x4_t4_g7_t4

0xe095,	// (0x00046bcc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe095,	// (0x00046bcc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x00048751) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x00048751) list_medium_line_x4_t4_g7_t

0xe0a7,	// (0x00046bde) list_single_dyc_row_pane_ParamLimits

0xe0a7,	// (0x00046bde) list_single_dyc_row_pane

0xa0b3,	// (0x00042bea) call5_gesture_pane_ParamLimits

0xa0b3,	// (0x00042bea) call5_gesture_pane

0xa0fb,	// (0x00042c32) call5_windows_pane_ParamLimits

0xa0fb,	// (0x00042c32) call5_windows_pane

0xa194,	// (0x00042ccb) call5_swipe_1_pane_cp_ParamLimits

0xa194,	// (0x00042ccb) call5_swipe_1_pane_cp

0xa1a0,	// (0x00042cd7) call5_swipe_2_pane_cp_ParamLimits

0xa1a0,	// (0x00042cd7) call5_swipe_2_pane_cp

0xb295,	// (0x00043dcc) call5_image_pane_cp

0xa1ac,	// (0x00042ce3) popup_call5_audio_first_window_cp_ParamLimits

0xa1ac,	// (0x00042ce3) popup_call5_audio_first_window_cp

0xe6de,	// (0x00047215) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6de,	// (0x00047215) call5_swipe_1_pane_g1_cp

0xe71e,	// (0x00047255) call5_swipe_1_pane_g2_cp

0xe6f7,	// (0x0004722e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6f7,	// (0x0004722e) call5_swipe_1_pane_t1_cp

0xe6de,	// (0x00047215) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6de,	// (0x00047215) call5_swipe_2_pane_g1_cp

0xe726,	// (0x0004725d) call5_swipe_2_pane_g2_cp

0xe72e,	// (0x00047265) call5_swipe_2_pane_t1_cp_ParamLimits

0xe72e,	// (0x00047265) call5_swipe_2_pane_t1_cp

0x1da6,	// (0x0003a8dd) main_sp_fs_email_pane

0xe743,	// (0x0004727a) main_sp_fs_listscroll_pane_te

0x2fa1,	// (0x0003bad8) popup_sp_fs_action_menu_pane_ParamLimits

0x2fa1,	// (0x0003bad8) popup_sp_fs_action_menu_pane

0xcb3f,	// (0x00045676) bg_sp_fs_ctrlbar_pane_g1

0xe74c,	// (0x00047283) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe755,	// (0x0004728c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe75e,	// (0x00047295) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcb3f,	// (0x00045676) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0004883a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc92c,	// (0x00045463) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc92c,	// (0x00045463) bg_sp_fs_ctrlbar_ddmenu_pane

0xe767,	// (0x0004729e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe767,	// (0x0004729e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1db4,	// (0x0003a8eb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1db4,	// (0x0003a8eb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x00048843) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x00048843) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe773,	// (0x000472aa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe773,	// (0x000472aa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe78d,	// (0x000472c4) list_medium_line_t2_right_icon_g1

0xe795,	// (0x000472cc) list_medium_line_t2_right_icon_t1

0x2fd1,	// (0x0003bb08) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x00048848) list_medium_line_t2_right_icon_t

0xc704,	// (0x0004523b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc704,	// (0x0004523b) bg_sp_fs_ctrlbar_pane

0xa201,	// (0x00042d38) main_sp_fs_ctrlbar_button_pane_cp01

0xa209,	// (0x00042d40) main_sp_fs_ctrlbar_ddmenu_pane

0xe7dd,	// (0x00047314) main_sp_fs_ctrlbar_pane_g1

0xe7e9,	// (0x00047320) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0004884d) main_sp_fs_ctrlbar_pane_g

0xe7f5,	// (0x0004732c) main_sp_fs_ctrlbar_pane_t1

0x2fdf,	// (0x0003bb16) main_sp_fs_ctrlbar_pane

0x3000,	// (0x0003bb37) main_sp_fs_listscroll_pane_te_cp01

0x3020,	// (0x0003bb57) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3020,	// (0x0003bb57) popup_sp_fs_action_menu_pane_cp01

0x1da6,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1da6,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp01

0x303f,	// (0x0003bb76) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x303f,	// (0x0003bb76) sp_fs_action_menu_list_gene_pane_g1

0xe80a,	// (0x00047341) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe80a,	// (0x00047341) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x00048852) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x00048852) sp_fs_action_menu_list_gene_pane_g

0xe817,	// (0x0004734e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe817,	// (0x0004734e) sp_fs_action_menu_list_gene_pane_t1

0x304e,	// (0x0003bb85) sp_fs_action_menu_list_gene_pane_ParamLimits

0x304e,	// (0x0003bb85) sp_fs_action_menu_list_gene_pane

0xe82f,	// (0x00047366) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82f,	// (0x00047366) popup_sp_fs_action_menu_bg_pane

0x306b,	// (0x0003bba2) sp_fs_action_menu_list_pane_ParamLimits

0x306b,	// (0x0003bba2) sp_fs_action_menu_list_pane

0xe83d,	// (0x00047374) sp_fs_scroll_pane_cp01_ParamLimits

0xe83d,	// (0x00047374) sp_fs_scroll_pane_cp01

0x3087,	// (0x0003bbbe) list_medium_line_plain_t2_t1

0x3097,	// (0x0003bbce) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x00048857) list_medium_line_plain_t2_t

0x30a5,	// (0x0003bbdc) list_medium_line_plain_t3_t1

0x30b5,	// (0x0003bbec) list_medium_line_plain_t3_t2

0x30c3,	// (0x0003bbfa) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0004885c) list_medium_line_plain_t3_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t2_g2_g1

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00047db0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00047db0) list_medium_line_x2_t2_g2_g

0xb052,	// (0x00043b89) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb052,	// (0x00043b89) list_medium_line_x2_t2_g2_t1

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x00048863) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x00048863) list_medium_line_x2_t2_g2_t

0xaf16,	// (0x00043a4d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t4_g2_g1

0xe863,	// (0x0004739a) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe863,	// (0x0004739a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x00048868) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x00048868) list_medium_line_x2_t4_g2_g

0x30d1,	// (0x0003bc08) list_medium_line_x2_t4_g2_t1_ParamLimits

0x30d1,	// (0x0003bc08) list_medium_line_x2_t4_g2_t1

0x30eb,	// (0x0003bc22) list_medium_line_x2_t4_g2_t2_ParamLimits

0x30eb,	// (0x0003bc22) list_medium_line_x2_t4_g2_t2

0x3100,	// (0x0003bc37) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3100,	// (0x0003bc37) list_medium_line_x2_t4_g2_t3

0xaf4f,	// (0x00043a86) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x0004886d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x0004886d) list_medium_line_x2_t4_g2_t

0xe874,	// (0x000473ab) list_medium_line_t3_right_iconx2_g1

0xe78d,	// (0x000472c4) list_medium_line_t3_right_iconx2_g2

0x3115,	// (0x0003bc4c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x00048876) list_medium_line_t3_right_iconx2_g

0x311d,	// (0x0003bc54) list_medium_line_t3_right_iconx2_t1

0x312d,	// (0x0003bc64) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x0004887d) list_medium_line_t3_right_iconx2_t

0xaf16,	// (0x00043a4d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x3_t4_g4_g1

0xaf22,	// (0x00043a59) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x3_t4_g4_g2

0xaf98,	// (0x00043acf) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaf98,	// (0x00043acf) list_medium_line_x3_t4_g4_g3

0xe87c,	// (0x000473b3) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe87c,	// (0x000473b3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x00048882) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x00048882) list_medium_line_x3_t4_g4_g

0x2e80,	// (0x0003b9b7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2e80,	// (0x0003b9b7) list_medium_line_x3_t4_g4_t1

0x2e97,	// (0x0003b9ce) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2e97,	// (0x0003b9ce) list_medium_line_x3_t4_g4_t2

0xe888,	// (0x000473bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe888,	// (0x000473bf) list_medium_line_x3_t4_g4_t3

0xe89d,	// (0x000473d4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe89d,	// (0x000473d4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x0004888b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x0004888b) list_medium_line_x3_t4_g4_t

0x313b,	// (0x0003bc72) list_single_dyc_row_text_pane_t1_ParamLimits

0x313b,	// (0x0003bc72) list_single_dyc_row_text_pane_t1

0x3172,	// (0x0003bca9) list_single_dyc_row_text_pane_t2_ParamLimits

0x3172,	// (0x0003bca9) list_single_dyc_row_text_pane_t2

0xe8ba,	// (0x000473f1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe8ba,	// (0x000473f1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x00048894) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x00048894) list_single_dyc_row_text_pane_t

0xe8cc,	// (0x00047403) list_single_dyc_row_pane_g1_ParamLimits

0xe8cc,	// (0x00047403) list_single_dyc_row_pane_g1

0xe8d8,	// (0x0004740f) list_single_dyc_row_pane_g2_ParamLimits

0xe8d8,	// (0x0004740f) list_single_dyc_row_pane_g2

0xe8e4,	// (0x0004741b) list_single_dyc_row_pane_g3_ParamLimits

0xe8e4,	// (0x0004741b) list_single_dyc_row_pane_g3

0xe8f0,	// (0x00047427) list_single_dyc_row_pane_g4_ParamLimits

0xe8f0,	// (0x00047427) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x0004889b) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x0004889b) list_single_dyc_row_pane_g

0xe8fc,	// (0x00047433) list_single_dyc_row_text_pane_ParamLimits

0xe8fc,	// (0x00047433) list_single_dyc_row_text_pane

0x12f1,	// (0x00039e28) bg_sp_fs_scroll_pane

0xe91b,	// (0x00047452) thumb_sp_fs_scroll_pane

0xaf16,	// (0x00043a4d) list_medium_line_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_g1

0xb052,	// (0x00043b89) list_medium_line_t1_ParamLimits

0xb052,	// (0x00043b89) list_medium_line_t1

0xaf16,	// (0x00043a4d) list_medium_line_x2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_g1

0xaf22,	// (0x00043a59) list_medium_line_x2_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x00048578) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x00048578) list_medium_line_x2_g

0xe924,	// (0x0004745b) list_medium_line_x2_t1_ParamLimits

0xe924,	// (0x0004745b) list_medium_line_x2_t1

0xaf16,	// (0x00043a4d) list_medium_line_x3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x3_g1

0xaf22,	// (0x00043a59) list_medium_line_x3_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x00048578) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x00048578) list_medium_line_x3_g

0xe924,	// (0x0004745b) list_medium_line_x3_t1_ParamLimits

0xe924,	// (0x0004745b) list_medium_line_x3_t1

0xe93a,	// (0x00047471) thumb_sp_fs_scroll_pane_g1

0xe943,	// (0x0004747a) thumb_sp_fs_scroll_pane_g2

0xe94c,	// (0x00047483) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x000488a4) thumb_sp_fs_scroll_pane_g

0xe93a,	// (0x00047471) bg_sp_fs_scroll_pane_g1

0xe943,	// (0x0004747a) bg_sp_fs_scroll_pane_g2

0xe94c,	// (0x00047483) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x000488a4) bg_sp_fs_scroll_pane_g

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_x2_t3_g4_g1

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_x2_t3_g4_g2

0xaf22,	// (0x00043a59) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_x2_t3_g4_g3

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaf2e,	// (0x00043a65) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00047e2c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00047e2c) list_medium_line_x2_t3_g4_g

0x31cc,	// (0x0003bd03) list_medium_line_x2_t3_g4_t1_ParamLimits

0x31cc,	// (0x0003bd03) list_medium_line_x2_t3_g4_t1

0x31e2,	// (0x0003bd19) list_medium_line_x2_t3_g4_t2_ParamLimits

0x31e2,	// (0x0003bd19) list_medium_line_x2_t3_g4_t2

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaf4f,	// (0x00043a86) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x000488ab) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x000488ab) list_medium_line_x2_t3_g4_t

0xaf16,	// (0x00043a4d) list_medium_line_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_g2_g1

0xaf22,	// (0x00043a59) list_medium_line_g2_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x00048578) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x00048578) list_medium_line_g2_g

0xafcb,	// (0x00043b02) list_medium_line_g2_t1_ParamLimits

0xafcb,	// (0x00043b02) list_medium_line_g2_t1

0xaf16,	// (0x00043a4d) list_medium_line_t3_g2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t3_g2_g1

0xaf22,	// (0x00043a59) list_medium_line_t3_g2_g2_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x00048578) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x00048578) list_medium_line_t3_g2_g

0x31fb,	// (0x0003bd32) list_medium_line_t3_g2_t1_ParamLimits

0x31fb,	// (0x0003bd32) list_medium_line_t3_g2_t1

0x3212,	// (0x0003bd49) list_medium_line_t3_g2_t2_ParamLimits

0x3212,	// (0x0003bd49) list_medium_line_t3_g2_t2

0x3227,	// (0x0003bd5e) list_medium_line_t3_g2_t3_ParamLimits

0x3227,	// (0x0003bd5e) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x000488b2) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x000488b2) list_medium_line_t3_g2_t

0xe78d,	// (0x000472c4) list_medium_line_right_icon_g1

0xe955,	// (0x0004748c) list_medium_line_right_icon_t1

0xaf16,	// (0x00043a4d) list_medium_line_t2_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t2_g1

0x323c,	// (0x0003bd73) list_medium_line_t2_t1_ParamLimits

0x323c,	// (0x0003bd73) list_medium_line_t2_t1

0x3253,	// (0x0003bd8a) list_medium_line_t2_t2_ParamLimits

0x3253,	// (0x0003bd8a) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x000488b9) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x000488b9) list_medium_line_t2_t

0xaf16,	// (0x00043a4d) list_medium_line_t3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t3_g1

0x30d1,	// (0x0003bc08) list_medium_line_t3_t1_ParamLimits

0x30d1,	// (0x0003bc08) list_medium_line_t3_t1

0x30eb,	// (0x0003bc22) list_medium_line_t3_t2_ParamLimits

0x30eb,	// (0x0003bc22) list_medium_line_t3_t2

0x3100,	// (0x0003bc37) list_medium_line_t3_t3_ParamLimits

0x3100,	// (0x0003bc37) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x000488be) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x000488be) list_medium_line_t3_t

0xaf16,	// (0x00043a4d) list_medium_line_g3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_g3_g1

0xaf8c,	// (0x00043ac3) list_medium_line_g3_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_g3_g2

0xaf22,	// (0x00043a59) list_medium_line_g3_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x000488c5) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x000488c5) list_medium_line_g3_g

0xafb6,	// (0x00043aed) list_medium_line_g3_t1_ParamLimits

0xafb6,	// (0x00043aed) list_medium_line_g3_t1

0xaf16,	// (0x00043a4d) list_medium_line_t2_g3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t2_g3_g1

0xaf8c,	// (0x00043ac3) list_medium_line_t2_g3_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_t2_g3_g2

0xaf22,	// (0x00043a59) list_medium_line_t2_g3_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x000488c5) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x000488c5) list_medium_line_t2_g3_g

0x3265,	// (0x0003bd9c) list_medium_line_t2_g3_t1_ParamLimits

0x3265,	// (0x0003bd9c) list_medium_line_t2_g3_t1

0x327f,	// (0x0003bdb6) list_medium_line_t2_g3_t2_ParamLimits

0x327f,	// (0x0003bdb6) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x000488cc) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x000488cc) list_medium_line_t2_g3_t

0xaf16,	// (0x00043a4d) list_medium_line_t3_g3_g1_ParamLimits

0xaf16,	// (0x00043a4d) list_medium_line_t3_g3_g1

0xaf8c,	// (0x00043ac3) list_medium_line_t3_g3_g2_ParamLimits

0xaf8c,	// (0x00043ac3) list_medium_line_t3_g3_g2

0xaf22,	// (0x00043a59) list_medium_line_t3_g3_g3_ParamLimits

0xaf22,	// (0x00043a59) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x000488c5) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x000488c5) list_medium_line_t3_g3_g

0x3294,	// (0x0003bdcb) list_medium_line_t3_g3_t1_ParamLimits

0x3294,	// (0x0003bdcb) list_medium_line_t3_g3_t1

0x32a8,	// (0x0003bddf) list_medium_line_t3_g3_t2_ParamLimits

0x32a8,	// (0x0003bddf) list_medium_line_t3_g3_t2

0x32ba,	// (0x0003bdf1) list_medium_line_t3_g3_t3_ParamLimits

0x32ba,	// (0x0003bdf1) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x000488d1) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x000488d1) list_medium_line_t3_g3_t

0xe874,	// (0x000473ab) list_medium_line_right_iconx2_g1

0xe78d,	// (0x000472c4) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x000488d8) list_medium_line_right_iconx2_g

0xe963,	// (0x0004749a) list_medium_line_right_iconx2_t1

0xe874,	// (0x000473ab) list_medium_line_t2_right_iconx2_g1

0xe78d,	// (0x000472c4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x000488d8) list_medium_line_t2_right_iconx2_g

0x32cc,	// (0x0003be03) list_medium_line_t2_right_iconx2_t1

0x32dc,	// (0x0003be13) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x000488dd) list_medium_line_t2_right_iconx2_t

0xd796,	// (0x000462cd) list_medium_line_x4_t4_t1

0x32ea,	// (0x0003be21) list_medium_line_x4_t4_t2

0x32fa,	// (0x0003be31) list_medium_line_x4_t4_t3

0x330a,	// (0x0003be41) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x000488e2) list_medium_line_x4_t4_t

0xa24e,	// (0x00042d85) tport_appsw_pane_ParamLimits

0xa24e,	// (0x00042d85) tport_appsw_pane

0xa25f,	// (0x00042d96) tport_contact_pane_ParamLimits

0xa25f,	// (0x00042d96) tport_contact_pane

0xa274,	// (0x00042dab) tport_listscroll_pane_ParamLimits

0xa274,	// (0x00042dab) tport_listscroll_pane

0xa28d,	// (0x00042dc4) cell_tport_appsw_pane_ParamLimits

0xa28d,	// (0x00042dc4) cell_tport_appsw_pane

0xd4f9,	// (0x00046030) tport_appsw_pane_g1_ParamLimits

0xd4f9,	// (0x00046030) tport_appsw_pane_g1

0xe971,	// (0x000474a8) tport_contact_pane_g1

0xe97a,	// (0x000474b1) tport_contact_pane_t1

0xe988,	// (0x000474bf) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x000488eb) tport_contact_pane_t

0xe996,	// (0x000474cd) list_tport_pane

0x1b7c,	// (0x0003a6b3) scroll_pane_cp_030

0xe9a7,	// (0x000474de) cell_tport_appsw_pane_g1

0xe9b7,	// (0x000474ee) cell_tport_appsw_pane_t1

0x12f1,	// (0x00039e28) grid_highlight_pane_cp019

0xa2c3,	// (0x00042dfa) list_tport_double_graphic_pane_ParamLimits

0xa2c3,	// (0x00042dfa) list_tport_double_graphic_pane

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp023_ParamLimits

0x1da6,	// (0x0003a8dd) list_highlight_pane_cp023

0xa2d0,	// (0x00042e07) list_tport_double_graphic_pane_g1_ParamLimits

0xa2d0,	// (0x00042e07) list_tport_double_graphic_pane_g1

0xa2dd,	// (0x00042e14) list_tport_double_graphic_pane_t1_ParamLimits

0xa2dd,	// (0x00042e14) list_tport_double_graphic_pane_t1

0xa2f2,	// (0x00042e29) list_tport_double_graphic_pane_t2_ParamLimits

0xa2f2,	// (0x00042e29) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x000488f7) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x000488f7) list_tport_double_graphic_pane_t

0x12f1,	// (0x00039e28) main_cale_note_pane

0x88f5,	// (0x0004142c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x88f5,	// (0x0004142c) cell_vitu2_function_top_wide_pane_cp01

0x9e1f,	// (0x00042956) wait_bar_pane_cp05_ParamLimits

0x12f1,	// (0x00039e28) listscroll_cmail_pane

0xe9c5,	// (0x000474fc) list_cmail_pane

0xa304,	// (0x00042e3b) list_cmail_body_pane

0xa304,	// (0x00042e3b) list_single_cmail_header_caption_pane

0xa31a,	// (0x00042e51) list_single_cmail_header_detail_pane_ParamLimits

0xa31a,	// (0x00042e51) list_single_cmail_header_detail_pane

0xe9e1,	// (0x00047518) list_single_cmail_header_caption_pane_t1

0x331a,	// (0x0003be51) list_single_cmail_header_detail_pane_g1_ParamLimits

0x331a,	// (0x0003be51) list_single_cmail_header_detail_pane_g1

0xaf22,	// (0x00043a59) list_single_cmail_header_detail_pane_g2_ParamLimits

0xaf22,	// (0x00043a59) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x000488fc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x000488fc) list_single_cmail_header_detail_pane_g

0xea04,	// (0x0004753b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xea04,	// (0x0004753b) list_single_cmail_header_detail_pane_t1

0xea2c,	// (0x00047563) list_single_cmail_header_editor_pane_bg_ParamLimits

0xea2c,	// (0x00047563) list_single_cmail_header_editor_pane_bg

0xea3e,	// (0x00047575) list_cmail_body_pane_g1

0xea47,	// (0x0004757e) list_cmail_body_pane_t1

0xd552,	// (0x00046089) list_single_cmail_header_editor_pane_bg_g1

0x4717,	// (0x0003d24e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd562,	// (0x00046099) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd55a,	// (0x00046091) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd7a4,	// (0x000462db) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd582,	// (0x000460b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd572,	// (0x000460a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd57a,	// (0x000460b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x46f7,	// (0x0003d22e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa342,	// (0x00042e79) calenote_gesture_pane_ParamLimits

0xa342,	// (0x00042e79) calenote_gesture_pane

0xa35e,	// (0x00042e95) calenote_window_pane_ParamLimits

0xa35e,	// (0x00042e95) calenote_window_pane

0x0286,	// (0x00038dbd) popup_note_window_cp01

0xa37a,	// (0x00042eb1) calenote_swipe_1_pane_ParamLimits

0xa37a,	// (0x00042eb1) calenote_swipe_1_pane

0xa1a0,	// (0x00042cd7) calenote_swipe_2_pane_ParamLimits

0xa1a0,	// (0x00042cd7) calenote_swipe_2_pane

0xe6de,	// (0x00047215) calenote_swipe_1_pane_g1_ParamLimits

0xe6de,	// (0x00047215) calenote_swipe_1_pane_g1

0xe6eb,	// (0x00047222) calenote_swipe_1_pane_g2_ParamLimits

0xe6eb,	// (0x00047222) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x00048830) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x00048830) calenote_swipe_1_pane_g

0x02ab,	// (0x00038de2) calenote_swipe_1_pane_t1_ParamLimits

0x02ab,	// (0x00038de2) calenote_swipe_1_pane_t1

0xe6de,	// (0x00047215) calenote_swipe_2_pane_g1_ParamLimits

0xe6de,	// (0x00047215) calenote_swipe_2_pane_g1

0x02ca,	// (0x00038e01) calenote_swipe_2_pane_g2_ParamLimits

0x02ca,	// (0x00038e01) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x00048908) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x00048908) calenote_swipe_2_pane_g

0x02d6,	// (0x00038e0d) calenote_swipe_2_pane_t1_ParamLimits

0x02d6,	// (0x00038e0d) calenote_swipe_2_pane_t1

0x12f1,	// (0x00039e28) main_mup_navstr_pane

0x76d9,	// (0x00040210) main_mup3_pane_t7_ParamLimits

0x76d9,	// (0x00040210) main_mup3_pane_t7

0xeddc,	// (0x00047913) main_mp4_pane_g6_ParamLimits

0xeddc,	// (0x00047913) main_mp4_pane_g6

0xef76,	// (0x00047aad) main_image3_pane_t4_ParamLimits

0xef76,	// (0x00047aad) main_image3_pane_t4

0xa38f,	// (0x00042ec6) popup_navstr_preview_pane_ParamLimits

0xa38f,	// (0x00042ec6) popup_navstr_preview_pane

0xa39f,	// (0x00042ed6) scroll_navstr_pane_ParamLimits

0xa39f,	// (0x00042ed6) scroll_navstr_pane

0x12f1,	// (0x00039e28) bg_popup_preview_window_pane_cp04

0x0315,	// (0x00038e4c) popup_navstr_preview_pane_t1

0xa3b3,	// (0x00042eea) scroll_navstr_pane_g1_ParamLimits

0xa3b3,	// (0x00042eea) scroll_navstr_pane_g1

0xa3c7,	// (0x00042efe) scroll_navstr_pane_t1_ParamLimits

0xa3c7,	// (0x00042efe) scroll_navstr_pane_t1

0x02a2,	// (0x00038dd9) bg_button_pane_cp014

0x02a2,	// (0x00038dd9) bg_button_pane_cp030

0xe642,	// (0x00047179) list_double_fisheye_pane_g4_ParamLimits

0xe642,	// (0x00047179) list_double_fisheye_pane_g4

0xe64e,	// (0x00047185) list_double_fisheye_pane_g5_ParamLimits

0xe64e,	// (0x00047185) list_double_fisheye_pane_g5

0xe9d5,	// (0x0004750c) sp_fs_scroll_pane_cp03

0xe7dd,	// (0x00047314) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e9,	// (0x00047320) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0004884d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f5,	// (0x0004732c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe9cd,	// (0x00047504) sp_fs_scroll_pane_cp02

0x1b8e,	// (0x0003a6c5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1b8e,	// (0x0003a6c5) popup_sp_fs_calendar_preview_list_single_pane

0x12f1,	// (0x00039e28) main_cam6_pano_pane

0x1da6,	// (0x0003a8dd) main_mup3_pane_ParamLimits

0x12f1,	// (0x00039e28) main_phacti_pane

0x9d12,	// (0x00042849) bg_button_pane_cp11

0x9d2a,	// (0x00042861) main_mobtv_info_pane_g2_ParamLimits

0x9d2a,	// (0x00042861) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x000487ad) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x000487ad) main_mobtv_info_pane_g

0x9edd,	// (0x00042a14) sc_clock_pane_t5_ParamLimits

0x9edd,	// (0x00042a14) sc_clock_pane_t5

0x9f50,	// (0x00042a87) main_radioblah_pane_g1_ParamLimits

0xe5a7,	// (0x000470de) main_radioblah_pane_t3_ParamLimits

0xe5a7,	// (0x000470de) main_radioblah_pane_t3

0xe5bf,	// (0x000470f6) main_radioblah_pane_t4_ParamLimits

0xe5bf,	// (0x000470f6) main_radioblah_pane_t4

0x9f78,	// (0x00042aaf) main_radioblah_text_pane_ParamLimits

0x9f78,	// (0x00042aaf) main_radioblah_text_pane

0x9f8a,	// (0x00042ac1) main_radioblah_info_pane_g1_ParamLimits

0xa01d,	// (0x00042b54) main_radioblah_info_pane_t4_ParamLimits

0xa01d,	// (0x00042b54) main_radioblah_info_pane_t4

0x1da6,	// (0x0003a8dd) main_sp_fs_calendar_pane

0xa3dd,	// (0x00042f14) main_phacti_pane_g1

0xa3e5,	// (0x00042f1c) phacti_note_pane_ParamLimits

0xa3e5,	// (0x00042f1c) phacti_note_pane

0x0367,	// (0x00038e9e) phacti_term_pane_ParamLimits

0x0367,	// (0x00038e9e) phacti_term_pane

0x037c,	// (0x00038eb3) phacti_note_pane_t1_ParamLimits

0x037c,	// (0x00038eb3) phacti_note_pane_t1

0xea55,	// (0x0004758c) phacti_term_pane_g1

0xea5d,	// (0x00047594) phacti_term_pane_t1_ParamLimits

0xea5d,	// (0x00047594) phacti_term_pane_t1

0x0393,	// (0x00038eca) popup_sp_fs_calendar_preview_list_single_pane_g1

0x039b,	// (0x00038ed2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x00048912) popup_sp_fs_calendar_preview_list_single_pane_g

0x03a3,	// (0x00038eda) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x03a3,	// (0x00038eda) popup_sp_fs_calendar_preview_list_single_pane_t1

0x03b9,	// (0x00038ef0) aid_popup_sp_fs_bg_corner_pane

0xcb3f,	// (0x00045676) popup_sp_fs_calendar_preview_bg_pane_g1

0x12f1,	// (0x00039e28) popup_sp_fs_calendar_preview_bg_pane

0x03c1,	// (0x00038ef8) popup_sp_fs_calendar_preview_list_pane

0x1da6,	// (0x0003a8dd) bg_main_sp_fs_cale_pane_ParamLimits

0x1da6,	// (0x0003a8dd) bg_main_sp_fs_cale_pane

0xea87,	// (0x000475be) listscroll_cale_mrui_pane_ParamLimits

0xea87,	// (0x000475be) listscroll_cale_mrui_pane

0xea9b,	// (0x000475d2) listscroll_sp_fs_schedule_track_pane

0xeaa4,	// (0x000475db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xeaa4,	// (0x000475db) main_sp_fs_ctrlbar_pane_cp01

0x03f0,	// (0x00038f27) main_sp_fs_ribbon_pane

0xeab5,	// (0x000475ec) popup_sp_fs_cale_preview_window

0xa434,	// (0x00042f6b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa434,	// (0x00042f6b) list_single_sp_fs_schedule_track_pane

0x1da6,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1da6,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp03

0xa447,	// (0x00042f7e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa447,	// (0x00042f7e) list_single_sp_fs_schedule_track_pane_g1

0xa453,	// (0x00042f8a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa453,	// (0x00042f8a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x00048917) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x00048917) list_single_sp_fs_schedule_track_pane_g

0xa45f,	// (0x00042f96) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa45f,	// (0x00042f96) list_single_sp_fs_schedule_track_pane_t1

0xa479,	// (0x00042fb0) sp_fs_schedule_track_pane_ParamLimits

0xa479,	// (0x00042fb0) sp_fs_schedule_track_pane

0x044d,	// (0x00038f84) sp_fs_schedule_track_pane_g1

0x0455,	// (0x00038f8c) sp_fs_schedule_track_pane_g2

0x045d,	// (0x00038f94) sp_fs_schedule_track_pane_g3

0x0465,	// (0x00038f9c) sp_fs_schedule_track_pane_g4

0x046d,	// (0x00038fa4) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x0004891c) sp_fs_schedule_track_pane_g

0xd552,	// (0x00046089) bg_sp_fs_schedule_viewer_highlight_g1

0x4717,	// (0x0003d24e) bg_sp_fs_schedule_viewer_highlight_g2

0xd55a,	// (0x00046091) bg_sp_fs_schedule_viewer_highlight_g3

0xd562,	// (0x00046099) bg_sp_fs_schedule_viewer_highlight_g4

0xd7a4,	// (0x000462db) bg_sp_fs_schedule_viewer_highlight_g5

0xd572,	// (0x000460a9) bg_sp_fs_schedule_viewer_highlight_g6

0xd57a,	// (0x000460b1) bg_sp_fs_schedule_viewer_highlight_g7

0xd582,	// (0x000460b9) bg_sp_fs_schedule_viewer_highlight_g8

0x46f7,	// (0x0003d22e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x00048927) bg_sp_fs_schedule_viewer_highlight_g

0x12f1,	// (0x00039e28) bg_main_sp_fs_ribbon_pane

0xa48a,	// (0x00042fc1) main_sp_fs_ribbon_pane_g1

0x0475,	// (0x00038fac) main_sp_fs_ribbon_pane_t1

0xa493,	// (0x00042fca) main_sp_fs_ribbon_pane_t2

0x0493,	// (0x00038fca) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x0004893a) main_sp_fs_ribbon_pane_t

0x04a2,	// (0x00038fd9) main_sp_fs_ribbon_scheduler_pane

0x04aa,	// (0x00038fe1) bg_main_sp_fs_ribbon_pane_g1

0x04b3,	// (0x00038fea) bg_main_sp_fs_ribbon_pane_g2

0x04bc,	// (0x00038ff3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x00048941) bg_main_sp_fs_ribbon_pane_g

0x04c4,	// (0x00038ffb) main_sp_fs_ribbon_scheduler_pane_g1

0x04cd,	// (0x00039004) main_sp_fs_ribbon_scheduler_pane_g2

0x04d6,	// (0x0003900d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x00048948) main_sp_fs_ribbon_scheduler_pane_g

0xe619,	// (0x00047150) list_cale_mrui_pane

0x04df,	// (0x00039016) sp_fs_scroll_pane_cp07_ParamLimits

0x04df,	// (0x00039016) sp_fs_scroll_pane_cp07

0xa4a2,	// (0x00042fd9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa4a2,	// (0x00042fd9) bg_sp_fs_schedule_viewer_highlight

0x0501,	// (0x00039038) list_single_sp_fs_schedule_track_pane_cp01

0x0509,	// (0x00039040) list_sp_fs_schedule_track_pane

0x0511,	// (0x00039048) sp_fs_scroll_pane_cp06_ParamLimits

0x0511,	// (0x00039048) sp_fs_scroll_pane_cp06

0xcb3f,	// (0x00045676) bgmain_sp_fs_calendar_pane_g1

0x3354,	// (0x0003be8b) list_single_cale_mrui_pane_ParamLimits

0x3354,	// (0x0003be8b) list_single_cale_mrui_pane

0xeac4,	// (0x000475fb) list_single_cale_mrui_row_pane_ParamLimits

0xeac4,	// (0x000475fb) list_single_cale_mrui_row_pane

0xead1,	// (0x00047608) list_single_cale_mrui_row_pane_g1_ParamLimits

0xead1,	// (0x00047608) list_single_cale_mrui_row_pane_g1

0xeb09,	// (0x00047640) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeb09,	// (0x00047640) list_single_cale_mrui_row_pane_t1

0x3378,	// (0x0003beaf) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3378,	// (0x0003beaf) list_single_cale_mrui_row_pane_t2

0xeb1b,	// (0x00047652) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeb1b,	// (0x00047652) list_single_cale_mrui_row_pane_t3

0xeb4a,	// (0x00047681) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb4a,	// (0x00047681) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x00048954) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x00048954) list_single_cale_mrui_row_pane_t

0x33de,	// (0x0003bf15) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x33de,	// (0x0003bf15) list_single_cmail_header_editor_pane_bg_cp01

0x3402,	// (0x0003bf39) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3402,	// (0x0003bf39) list_single_cmail_header_editor_pane_bg_cp02

0xa4b2,	// (0x00042fe9) main_radioblah_text_pane_t1_ParamLimits

0xa4b2,	// (0x00042fe9) main_radioblah_text_pane_t1

0x053c,	// (0x00039073) cam6_indi_pane_cp01

0x0544,	// (0x0003907b) cam6_mode_pane_cp01

0x054c,	// (0x00039083) cam6_pano_pane

0x0555,	// (0x0003908c) cam6_zoom_pane_cp01

0x055d,	// (0x00039094) cam6_pano_image_pane

0x0566,	// (0x0003909d) cam6_pano_pane_g1

0xe325,	// (0x00046e5c) cam6_pano_pane_g2

0x056f,	// (0x000390a6) cam6_pano_pane_g3

0x0578,	// (0x000390af) cam6_pano_pane_g4

0xd0a5,	// (0x00045bdc) cam6_pano_pane_g5

0x0581,	// (0x000390b8) cam6_pano_pane_g6

0x0589,	// (0x000390c0) cam6_pano_pane_g7

0x0591,	// (0x000390c8) cam6_pano_pane_g8

0x059a,	// (0x000390d1) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x0004895d) cam6_pano_pane_g

0x12f1,	// (0x00039e28) main_browser_tag_pane

0x02f5,	// (0x00038e2c) grid_navstr_albumart_pane

0x05a3,	// (0x000390da) cell_navstr_albumart_pane_ParamLimits

0x05a3,	// (0x000390da) cell_navstr_albumart_pane

0xb404,	// (0x00043f3b) cell_navstr_albumart_pane_g1

0xc4e1,	// (0x00045018) cell_navstr_albumart_pane_g2

0xc4f1,	// (0x00045028) cell_navstr_albumart_pane_g3

0xc4e9,	// (0x00045020) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x00048970) cell_navstr_albumart_pane_g

0xa4cb,	// (0x00043002) bt_list_pane_ParamLimits

0xa4cb,	// (0x00043002) bt_list_pane

0xa4de,	// (0x00043015) bt_list_pane_t1

0xa4ed,	// (0x00043024) bt_list_pane_t2

0x0001,

0xfe42,	// (0x00048979) bt_list_pane_t

0x12f1,	// (0x00039e28) main_cale_prevew_pane

0xa4fc,	// (0x00043033) popup_cale_preview_window_ParamLimits

0xa4fc,	// (0x00043033) popup_cale_preview_window

0x1da6,	// (0x0003a8dd) bg_popup_preview_window_pane_cp05_ParamLimits

0x1da6,	// (0x0003a8dd) bg_popup_preview_window_pane_cp05

0x0602,	// (0x00039139) list_cale_preview_pane_ParamLimits

0x0602,	// (0x00039139) list_cale_preview_pane

0xa511,	// (0x00043048) list_double_cale_preview_pane_ParamLimits

0xa511,	// (0x00043048) list_double_cale_preview_pane

0xa522,	// (0x00043059) list_single_cale_preview_pane_ParamLimits

0xa522,	// (0x00043059) list_single_cale_preview_pane

0x0650,	// (0x00039187) list_single_cale_preview_pane_g1

0x0658,	// (0x0003918f) list_single_cale_preview_pane_t1_ParamLimits

0x0658,	// (0x0003918f) list_single_cale_preview_pane_t1

0xa536,	// (0x0004306d) list_double_cale_preview_pane_g1

0xa53e,	// (0x00043075) list_double_cale_preview_pane_t1_ParamLimits

0xa53e,	// (0x00043075) list_double_cale_preview_pane_t1

0xa553,	// (0x0004308a) list_double_cale_preview_pane_t2_ParamLimits

0xa553,	// (0x0004308a) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x0004897e) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x0004897e) list_double_cale_preview_pane_t

0x12f1,	// (0x00039e28) main_ezdial_pane

0x1da6,	// (0x0003a8dd) main_sp_fs_email_pane_ParamLimits

0xa1b8,	// (0x00042cef) cmail_ddmenu_btn01_pane_ParamLimits

0xa1b8,	// (0x00042cef) cmail_ddmenu_btn01_pane

0xa1cb,	// (0x00042d02) cmail_ddmenu_btn02_pane_ParamLimits

0xa1cb,	// (0x00042d02) cmail_ddmenu_btn02_pane

0xa1ee,	// (0x00042d25) cmail_ddmenu_btn03_pane_ParamLimits

0xa1ee,	// (0x00042d25) cmail_ddmenu_btn03_pane

0x2fdf,	// (0x0003bb16) main_sp_fs_ctrlbar_pane_ParamLimits

0x3000,	// (0x0003bb37) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa304,	// (0x00042e3b) list_cmail_body_pane_ParamLimits

0xe9ef,	// (0x00047526) bg_button_pane_cp12

0xe9f7,	// (0x0004752e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe9f7,	// (0x0004752e) list_single_cmail_header_detail_pane_g3

0x3330,	// (0x0003be67) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3330,	// (0x0003be67) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x00048903) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x00048903) list_single_cmail_header_detail_pane_t

0xea72,	// (0x000475a9) phacti_term_pane_t2_ParamLimits

0xea72,	// (0x000475a9) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x0004890d) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x0004890d) phacti_term_pane_t

0x0685,	// (0x000391bc) aid_size_list_single_double

0xa56b,	// (0x000430a2) popup_ezdial_listscroll_window

0xa581,	// (0x000430b8) popup_number_entry_window_cp01

0xb295,	// (0x00043dcc) bg_popup_call_pane_cp09

0x06b6,	// (0x000391ed) ezdial_list_pane

0x06be,	// (0x000391f5) scroll_pane_cp23

0xc704,	// (0x0004523b) bg_button_pane_cp028_ParamLimits

0xc704,	// (0x0004523b) bg_button_pane_cp028

0xa58d,	// (0x000430c4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa58d,	// (0x000430c4) cmail_ddmenu_btn01_pane_g1

0xa59c,	// (0x000430d3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa59c,	// (0x000430d3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x00048983) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x00048983) cmail_ddmenu_btn01_pane_g

0x06e4,	// (0x0003921b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x06e4,	// (0x0003921b) cmail_ddmenu_btn01_pane_t1

0xc704,	// (0x0004523b) bg_button_pane_cp029_ParamLimits

0xc704,	// (0x0004523b) bg_button_pane_cp029

0xa5ac,	// (0x000430e3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa5ac,	// (0x000430e3) cmail_ddmenu_btn02_pane_g1

0xa5c7,	// (0x000430fe) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa5c7,	// (0x000430fe) cmail_ddmenu_btn02_pane_t1

0x1da6,	// (0x0003a8dd) bg_button_pane_cp031_ParamLimits

0x1da6,	// (0x0003a8dd) bg_button_pane_cp031

0xa5ac,	// (0x000430e3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa5ac,	// (0x000430e3) cmail_ddmenu_btn03_pane_g1

0xa5c7,	// (0x000430fe) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa5c7,	// (0x000430fe) cmail_ddmenu_btn03_pane_t1

0x81d1,	// (0x00040d08) cell_dialer2_keypad_pane_t1_ParamLimits

0x81eb,	// (0x00040d22) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x81eb,	// (0x00040d22) cell_dialer2_keypad_pane_t1_copy1

0x9bb0,	// (0x000426e7) ncimui_group_button_pane

0x1da6,	// (0x0003a8dd) main_sp_fs_calendar_pane_ParamLimits

0xa304,	// (0x00042e3b) list_single_cmail_header_caption_pane_ParamLimits

0xdad6,	// (0x0004660d) aid_recal_txt_sm_pane

0x12f1,	// (0x00039e28) mian_recal_day_pane

0xeab5,	// (0x000475ec) popup_sp_fs_cale_preview_window_ParamLimits

0x12f1,	// (0x00039e28) list_recal_day_pane

0xeb82,	// (0x000476b9) list_single_recal_day_pane_ParamLimits

0xeb82,	// (0x000476b9) list_single_recal_day_pane

0x0739,	// (0x00039270) list_single_recal_day_pane_g1_ParamLimits

0x0739,	// (0x00039270) list_single_recal_day_pane_g1

0xeb94,	// (0x000476cb) list_single_recal_day_pane_g2_ParamLimits

0xeb94,	// (0x000476cb) list_single_recal_day_pane_g2

0xeba0,	// (0x000476d7) list_single_recal_day_pane_g3_ParamLimits

0xeba0,	// (0x000476d7) list_single_recal_day_pane_g3

0x3420,	// (0x0003bf57) list_single_recal_day_pane_g4_ParamLimits

0x3420,	// (0x0003bf57) list_single_recal_day_pane_g4

0xebac,	// (0x000476e3) list_single_recal_day_pane_g5_ParamLimits

0xebac,	// (0x000476e3) list_single_recal_day_pane_g5

0xebb8,	// (0x000476ef) list_single_recal_day_pane_g6_ParamLimits

0xebb8,	// (0x000476ef) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x00048992) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x00048992) list_single_recal_day_pane_g

0xebc4,	// (0x000476fb) list_single_recal_day_pane_t1

0xebd2,	// (0x00047709) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x0004899f) list_single_recal_day_pane_t

0xa5ee,	// (0x00043125) ncimui_query_button_pane_ParamLimits

0xa5ee,	// (0x00043125) ncimui_query_button_pane

0xa5fe,	// (0x00043135) ncimui_query_button_pane_t1_ParamLimits

0xa5fe,	// (0x00043135) ncimui_query_button_pane_t1

0x0768,	// (0x0003929f) ncimui_query_button_pane_t2_ParamLimits

0x0768,	// (0x0003929f) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x000489a4) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x000489a4) ncimui_query_button_pane_t

0xa611,	// (0x00043148) query_button_pane_ParamLimits

0xa611,	// (0x00043148) query_button_pane

0x12f1,	// (0x00039e28) bg_button_pane_cp0028

0x0788,	// (0x000392bf) query_button_pane_t1

0x650d,	// (0x0003f044) main_tport_pane_ParamLimits

0xa213,	// (0x00042d4a) bg_popup_window_pane_cp01_ParamLimits

0xa213,	// (0x00042d4a) bg_popup_window_pane_cp01

0xa22b,	// (0x00042d62) heading_pane_cp08_ParamLimits

0xa22b,	// (0x00042d62) heading_pane_cp08

0xa23d,	// (0x00042d74) heading_pane_cp07_ParamLimits

0xa23d,	// (0x00042d74) heading_pane_cp07

0xe9a7,	// (0x000474de) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x000488f0) cell_tport_appsw_pane_g

0x2d1f,	// (0x0003b856) input_candi_list_open_g1

0x5149,	// (0x0003dc80) list_cale_time_pane_g6_ParamLimits

0x5149,	// (0x0003dc80) list_cale_time_pane_g6

0x71b3,	// (0x0003fcea) aid_size_touch_calib_1_ParamLimits

0x71b3,	// (0x0003fcea) aid_size_touch_calib_1

0x71bf,	// (0x0003fcf6) aid_size_touch_calib_2_ParamLimits

0x71bf,	// (0x0003fcf6) aid_size_touch_calib_2

0x71d3,	// (0x0003fd0a) aid_size_touch_calib_3_ParamLimits

0x71d3,	// (0x0003fd0a) aid_size_touch_calib_3

0x71eb,	// (0x0003fd22) aid_size_touch_calib_4_ParamLimits

0x71eb,	// (0x0003fd22) aid_size_touch_calib_4

0x71fd,	// (0x0003fd34) main_touch_calib_button_group_pane_ParamLimits

0x71fd,	// (0x0003fd34) main_touch_calib_button_group_pane

0x7213,	// (0x0003fd4a) main_touch_calib_pane_g1_ParamLimits

0x721f,	// (0x0003fd56) main_touch_calib_pane_g2_ParamLimits

0x722b,	// (0x0003fd62) main_touch_calib_pane_g3_ParamLimits

0x7237,	// (0x0003fd6e) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x000482ce) main_touch_calib_pane_g_ParamLimits

0x7243,	// (0x0003fd7a) main_touch_calib_pane_t1_ParamLimits

0x725b,	// (0x0003fd92) main_touch_calib_pane_t2_ParamLimits

0x7273,	// (0x0003fdaa) main_touch_calib_pane_t3_ParamLimits

0x7285,	// (0x0003fdbc) main_touch_calib_pane_t4_ParamLimits

0x7297,	// (0x0003fdce) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x000482d7) main_touch_calib_pane_t_ParamLimits

0xced0,	// (0x00045a07) list_single_fp_cale_pane_g3_ParamLimits

0xced0,	// (0x00045a07) list_single_fp_cale_pane_g3

0x1da6,	// (0x0003a8dd) bg_button_pane_cp012_ParamLimits

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp03_ParamLimits

0x9079,	// (0x00041bb0) cell_vitu2_function_top_pane_g1_ParamLimits

0x1da6,	// (0x0003a8dd) bg_vkb2_func_pane_cp04_ParamLimits

0x9b66,	// (0x0004269d) main_ncimui_button_group_pane_ParamLimits

0x9b66,	// (0x0004269d) main_ncimui_button_group_pane

0x9b9e,	// (0x000426d5) main_ncimui_pane_t3_ParamLimits

0x9b9e,	// (0x000426d5) main_ncimui_pane_t3

0x034a,	// (0x00038e81) phacti_button_group_pane

0x0685,	// (0x000391bc) aid_size_list_single_double_ParamLimits

0xa56b,	// (0x000430a2) popup_ezdial_listscroll_window_ParamLimits

0xa581,	// (0x000430b8) popup_number_entry_window_cp01_ParamLimits

0xa623,	// (0x0004315a) phacti_button_pane_ParamLimits

0xa623,	// (0x0004315a) phacti_button_pane

0x12f1,	// (0x00039e28) bg_button_pane_cp14

0x07a5,	// (0x000392dc) phacti_button_pane_t1

0xa632,	// (0x00043169) main_touch_calib_button_pane_ParamLimits

0xa632,	// (0x00043169) main_touch_calib_button_pane

0x1a77,	// (0x0003a5ae) bg_button_pane_cp18_ParamLimits

0x1a77,	// (0x0003a5ae) bg_button_pane_cp18

0x07c3,	// (0x000392fa) main_touch_calib_button_pane_t1_ParamLimits

0x07c3,	// (0x000392fa) main_touch_calib_button_pane_t1

0x07d9,	// (0x00039310) main_touch_calib_button_pane_t2_ParamLimits

0x07d9,	// (0x00039310) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x000489a9) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x000489a9) main_touch_calib_button_pane_t

0x12f1,	// (0x00039e28) cell_ncimui_button_pane

0x12f1,	// (0x00039e28) bg_button_pane_cp032

0x07f7,	// (0x0003932e) cell_ncimui_button_pane_t1

0xef56,	// (0x00047a8d) image3_infobar_pane_ParamLimits

0xef56,	// (0x00047a8d) image3_infobar_pane

0x9f05,	// (0x00042a3c) fs_bigclock_status_pane_ParamLimits

0x9f05,	// (0x00042a3c) fs_bigclock_status_pane

0x9f12,	// (0x00042a49) main_fs_bigclock_clock_pane_ParamLimits

0x9f12,	// (0x00042a49) main_fs_bigclock_clock_pane

0x9f21,	// (0x00042a58) main_fs_bigclock_indi_pane_ParamLimits

0x9f21,	// (0x00042a58) main_fs_bigclock_indi_pane

0x9f35,	// (0x00042a6c) main_fs_bigclock_swipe_pane_ParamLimits

0x9f35,	// (0x00042a6c) main_fs_bigclock_swipe_pane

0x12f1,	// (0x00039e28) main_fs_clock_dumped_data

0xe432,	// (0x00046f69) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe432,	// (0x00046f69) list_single_fs_bigclock_indicator_pane_g1

0xe44c,	// (0x00046f83) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe44c,	// (0x00046f83) list_single_fs_bigclock_indicator_pane_g2

0xe466,	// (0x00046f9d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe466,	// (0x00046f9d) list_single_fs_bigclock_indicator_pane_g3

0xe480,	// (0x00046fb7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe480,	// (0x00046fb7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x000487e1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x000487e1) list_single_fs_bigclock_indicator_pane_g

0xe4a4,	// (0x00046fdb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4a4,	// (0x00046fdb) list_single_fs_bigclock_indicator_pane_t1

0xe4cc,	// (0x00047003) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4cc,	// (0x00047003) list_single_fs_bigclock_indicator_pane_t2

0xe4f4,	// (0x0004702b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4f4,	// (0x0004702b) list_single_fs_bigclock_indicator_pane_t3

0xe51c,	// (0x00047053) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe51c,	// (0x00047053) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x000487ec) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x000487ec) list_single_fs_bigclock_indicator_pane_t

0x0805,	// (0x0003933c) image3_infobar_fav_pane_ParamLimits

0x0805,	// (0x0003933c) image3_infobar_fav_pane

0x0815,	// (0x0003934c) image3_infobar_loc_pane_ParamLimits

0x0815,	// (0x0003934c) image3_infobar_loc_pane

0x0829,	// (0x00039360) image3_infobar_time_pane_ParamLimits

0x0829,	// (0x00039360) image3_infobar_time_pane

0xcb3f,	// (0x00045676) image3_infobar_time_pane_g1

0x0839,	// (0x00039370) image3_infobar_time_pane_t1

0xcb3f,	// (0x00045676) image3_infobar_loc_pane_g1

0x0847,	// (0x0003937e) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x000489ae) image3_infobar_loc_pane_g

0x084f,	// (0x00039386) image3_infobar_loc_pane_t1

0xcb3f,	// (0x00045676) image3_infobar_fav_pane_g1

0x085d,	// (0x00039394) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x000489b3) image3_infobar_fav_pane_g

0x0865,	// (0x0003939c) fs_bigclock_status_battery_pane

0x086e,	// (0x000393a5) fs_bigclock_status_signal_pane

0x0877,	// (0x000393ae) fs_bigclock_status_title_pane

0x0880,	// (0x000393b7) fs_bigclock_status_signal_pane_g1

0x0889,	// (0x000393c0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x000489b8) fs_bigclock_status_signal_pane_g

0x0891,	// (0x000393c8) fs_bigclock_status_battery_pane_g1

0x089a,	// (0x000393d1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x000489bd) fs_bigclock_status_battery_pane_g

0x08a2,	// (0x000393d9) fs_bigclock_status_title_pane_t1

0xcb3f,	// (0x00045676) main_fs_bigclock_clock_pane_g1

0x08b0,	// (0x000393e7) main_fs_bigclock_clock_pane_g2

0x08b0,	// (0x000393e7) main_fs_bigclock_clock_pane_g3

0x08b0,	// (0x000393e7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x000489c2) main_fs_bigclock_clock_pane_g

0x08b8,	// (0x000393ef) main_fs_bigclock_clock_pane_t1

0x08c6,	// (0x000393fd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x000489cb) main_fs_bigclock_clock_pane_t

0x08d5,	// (0x0003940c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x08d5,	// (0x0003940c) list_single_fs_bigclock_indicator_pane

0xa645,	// (0x0004317c) list_single_fs_bigclock_pane_ParamLimits

0xa645,	// (0x0004317c) list_single_fs_bigclock_pane

0x094d,	// (0x00039484) main_fs_bigclock_indicator_pane_t1

0x095c,	// (0x00039493) list_single_fs_bigclock_pane_g1

0x0964,	// (0x0003949b) list_single_fs_bigclock_pane_t1

0xcb3f,	// (0x00045676) main_fs_bigclock_swipe_pane_g1

0x09a2,	// (0x000394d9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x000489dc) main_fs_bigclock_swipe_pane_g

0x09aa,	// (0x000394e1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x09aa,	// (0x000394e1) main_fs_bigclock_swipe_pane_t1

0x5435,	// (0x0003df6c) call_type_pane_ParamLimits

0x12f1,	// (0x00039e28) main_btmg_pane

0xeafd,	// (0x00047634) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeafd,	// (0x00047634) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x0004894f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x0004894f) list_single_cale_mrui_row_pane_g

0x0729,	// (0x00039260) list_recal_vselct_arw_lo_pane

0x0731,	// (0x00039268) list_recal_vselct_arw_up_pane

0xeb79,	// (0x000476b0) list_recal_vselct_pane

0x09c7,	// (0x000394fe) btmg_button_pane

0xa6a5,	// (0x000431dc) main_btmg_pane_g1

0x12f1,	// (0x00039e28) bg_button_pane_cp044

0x09d7,	// (0x0003950e) btmg_button_pane_t1

0xc6fc,	// (0x00045233) aid_listscroll_gen

0x1da6,	// (0x0003a8dd) main_cntbar_detail_pane

0xe9c5,	// (0x000474fc) list_cmail_folder_pane

0xe9d5,	// (0x0004750c) sp_fs_scroll_pane_cp03_ParamLimits

0xa304,	// (0x00042e3b) list_single_fs_dyc_pane_cp01_ParamLimits

0xa304,	// (0x00042e3b) list_single_fs_dyc_pane_cp01

0x09e5,	// (0x0003951c) aid_size_cmail_indent

0xdadf,	// (0x00046616) list_single_dyc_row_pane_cp01

0xa6d5,	// (0x0004320c) cntbar_detail_list_pane_ParamLimits

0xa6d5,	// (0x0004320c) cntbar_detail_list_pane

0xa71b,	// (0x00043252) main_cntbar_detail_cont_pane_ParamLimits

0xa71b,	// (0x00043252) main_cntbar_detail_cont_pane

0xa72f,	// (0x00043266) scroll_pane_cp032_ParamLimits

0xa72f,	// (0x00043266) scroll_pane_cp032

0xa73b,	// (0x00043272) cntbar_detail_list_event_pane_ParamLimits

0xa73b,	// (0x00043272) cntbar_detail_list_event_pane

0xa6e5,	// (0x0004321c) cntbar_detail_list_shct_pane

0x0a66,	// (0x0003959d) aid_list_gen

0x1b7c,	// (0x0003a6b3) aid_scroll

0xdab4,	// (0x000465eb) aid_size_touch_scroll_bar

0xebe0,	// (0x00047717) aid_list_double

0x342e,	// (0x0003bf65) aid_list_single

0xebe0,	// (0x00047717) aid_list_single_lg

0xebe9,	// (0x00047720) aid_list_z_g_a_sm

0x3437,	// (0x0003bf6e) aid_list_z_g_d

0x343f,	// (0x0003bf76) aid_txt_z_prm

0xebf1,	// (0x00047728) aid_txt_z_prm_cp01

0xebff,	// (0x00047736) aid_txt_z_sec

0xa74c,	// (0x00043283) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa74c,	// (0x00043283) main_cntbar_detail_cont_pane_g1

0xa760,	// (0x00043297) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa760,	// (0x00043297) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x000489e1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x000489e1) main_cntbar_detail_cont_pane_g

0x0a88,	// (0x000395bf) main_cntbar_detail_cont_pane_t1

0x0a96,	// (0x000395cd) main_cntbar_detail_cont_pane_t2

0x0aa4,	// (0x000395db) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x000489e6) main_cntbar_detail_cont_pane_t

0xa770,	// (0x000432a7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa770,	// (0x000432a7) cell_cntbar_detail_list_shct_pane

0x0ac4,	// (0x000395fb) cntbar_detail_list_shct_pane_g1

0x0acd,	// (0x00039604) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x000489ed) cntbar_detail_list_shct_pane_g

0xa782,	// (0x000432b9) cntbar_detail_list_event_pane_g1_ParamLimits

0xa782,	// (0x000432b9) cntbar_detail_list_event_pane_g1

0xa78e,	// (0x000432c5) cntbar_detail_list_event_pane_g2_ParamLimits

0xa78e,	// (0x000432c5) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x000489f2) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x000489f2) cntbar_detail_list_event_pane_g

0xa7fa,	// (0x00043331) cntbar_detail_list_event_pane_t1_ParamLimits

0xa7fa,	// (0x00043331) cntbar_detail_list_event_pane_t1

0xa80f,	// (0x00043346) cntbar_detail_list_event_pane_t2_ParamLimits

0xa80f,	// (0x00043346) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x000489ff) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x000489ff) cntbar_detail_list_event_pane_t

0xcb3f,	// (0x00045676) cell_cntbar_detail_list_shct_pane_g1

0xb254,	// (0x00043d8b) navi_pane_mv_g3

0x1da6,	// (0x0003a8dd) main_cntbar_detail_pane_ParamLimits

0x12f1,	// (0x00039e28) main_notif_wgt_pane

0xed6a,	// (0x000478a1) aid_tch_main_mp4_pane_g4

0xef4e,	// (0x00047a85) popup_slider_window_cp02

0xeb79,	// (0x000476b0) list_recal_day_event_pane

0xa6ad,	// (0x000431e4) cntbar_detail_btn_pane_ParamLimits

0xa6ad,	// (0x000431e4) cntbar_detail_btn_pane

0xa6c0,	// (0x000431f7) cntbar_detail_btn_pane_cp01_ParamLimits

0xa6c0,	// (0x000431f7) cntbar_detail_btn_pane_cp01

0xa6e5,	// (0x0004321c) cntbar_detail_list_shct_pane_ParamLimits

0xa6f5,	// (0x0004322c) cntbar_detail_pane_g1_ParamLimits

0xa6f5,	// (0x0004322c) cntbar_detail_pane_g1

0xa705,	// (0x0004323c) cntbar_detail_pane_t1_ParamLimits

0xa705,	// (0x0004323c) cntbar_detail_pane_t1

0xa79a,	// (0x000432d1) cntbar_detail_list_event_pane_g3_ParamLimits

0xa79a,	// (0x000432d1) cntbar_detail_list_event_pane_g3

0xa7b2,	// (0x000432e9) cntbar_detail_list_event_pane_g4_ParamLimits

0xa7b2,	// (0x000432e9) cntbar_detail_list_event_pane_g4

0xa7ca,	// (0x00043301) cntbar_detail_list_event_pane_g5_ParamLimits

0xa7ca,	// (0x00043301) cntbar_detail_list_event_pane_g5

0xa7e2,	// (0x00043319) cntbar_detail_list_event_pane_g6_ParamLimits

0xa7e2,	// (0x00043319) cntbar_detail_list_event_pane_g6

0xa824,	// (0x0004335b) cntbar_detail_list_event_pane_t3_ParamLimits

0xa824,	// (0x0004335b) cntbar_detail_list_event_pane_t3

0xa836,	// (0x0004336d) popup_notif_wgt_window_ParamLimits

0xa836,	// (0x0004336d) popup_notif_wgt_window

0xa84b,	// (0x00043382) popup_submenu_window_cp01_ParamLimits

0xa84b,	// (0x00043382) popup_submenu_window_cp01

0xb295,	// (0x00043dcc) bg_popup_window_pane_cp10

0x0ba4,	// (0x000396db) listscroll_notif_wgt_pane

0x0bac,	// (0x000396e3) list_notif_wgt_window

0x0bb5,	// (0x000396ec) scroll_pane_cp033

0x0bbe,	// (0x000396f5) list_notif_wgt_row_pane_ParamLimits

0x0bbe,	// (0x000396f5) list_notif_wgt_row_pane

0x0bd0,	// (0x00039707) aid_size_list_notif_wgt_del

0x0bd9,	// (0x00039710) list_notif_wgt_row_pane_g1

0x0be1,	// (0x00039718) list_notif_wgt_row_pane_g2

0x0be9,	// (0x00039720) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x00048a06) list_notif_wgt_row_pane_g

0x0bf2,	// (0x00039729) list_notif_wgt_row_pane_t1

0x0c00,	// (0x00039737) list_notif_wgt_row_pane_t2

0x0c0e,	// (0x00039745) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x00048a0d) list_notif_wgt_row_pane_t

0xd7ac,	// (0x000462e3) list_recal_day_event_pane_g1

0x0c1c,	// (0x00039753) list_recal_day_event_pane_t1

0x12f1,	// (0x00039e28) bg_button_pane_cp045

0xa85b,	// (0x00043392) cntbar_detail_btn_pane_t1

0xc704,	// (0x0004523b) main_callh_pane_ParamLimits

0xc704,	// (0x0004523b) main_callh_pane

0x12f1,	// (0x00039e28) main_coverflow0_pane

0x12f1,	// (0x00039e28) main_wgtman_pane

0x9f41,	// (0x00042a78) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f41,	// (0x00042a78) main_fs_bigclock_unlock_btn_pane

0xe99f,	// (0x000474d6) bg_button_pane_cp16

0xe9af,	// (0x000474e6) cell_tport_appsw_pane_g3

0xa869,	// (0x000433a0) cf0_flow_pane_ParamLimits

0xa869,	// (0x000433a0) cf0_flow_pane

0x0c48,	// (0x0003977f) listscroll_cf0_pane

0x0c51,	// (0x00039788) main_cf0_pane_g1

0xa87e,	// (0x000433b5) main_cf0_pane_t1_ParamLimits

0xa87e,	// (0x000433b5) main_cf0_pane_t1

0xa894,	// (0x000433cb) main_cf0_pane_t2_ParamLimits

0xa894,	// (0x000433cb) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x00048a14) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x00048a14) main_cf0_pane_t

0x0c7f,	// (0x000397b6) scroll_pane_cp11

0xa8aa,	// (0x000433e1) cf0_flow_pane_g1

0xa8b2,	// (0x000433e9) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x00048a19) cf0_flow_pane_g

0xa8ba,	// (0x000433f1) cf0_flow_pane_t1

0x12f1,	// (0x00039e28) main_call6_pane

0x12f1,	// (0x00039e28) main_calllock_pane

0xa8c8,	// (0x000433ff) call6_btn_grp_pane_ParamLimits

0xa8c8,	// (0x000433ff) call6_btn_grp_pane

0xa8de,	// (0x00043415) call6_pane_g1_ParamLimits

0xa8de,	// (0x00043415) call6_pane_g1

0xa8f1,	// (0x00043428) popup_call6_1st_window_ParamLimits

0xa8f1,	// (0x00043428) popup_call6_1st_window

0xa900,	// (0x00043437) popup_call6_2nd_window_ParamLimits

0xa900,	// (0x00043437) popup_call6_2nd_window

0xa90f,	// (0x00043446) cell_call6_btn_pane_ParamLimits

0xa90f,	// (0x00043446) cell_call6_btn_pane

0xb295,	// (0x00043dcc) bg_popup_call2_in_pane_cp03

0x0ce7,	// (0x0003981e) popup_call6_1st_window_g1

0x0cef,	// (0x00039826) popup_call6_1st_window_g2

0x0cf7,	// (0x0003982e) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x00048a1e) popup_call6_1st_window_g

0x0cff,	// (0x00039836) popup_call6_1st_window_t1

0x0d0e,	// (0x00039845) popup_call6_1st_window_t2

0x0d1c,	// (0x00039853) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x00048a25) popup_call6_1st_window_t

0xb295,	// (0x00043dcc) bg_popup_call2_in_pane_cp04

0x0ce7,	// (0x0003981e) popup_call6_2nd_window_g1

0x0cef,	// (0x00039826) popup_call6_2nd_window_g2

0x0cf7,	// (0x0003982e) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x00048a1e) popup_call6_2nd_window_g

0x0cff,	// (0x00039836) popup_call6_2nd_window_t1

0x12f1,	// (0x00039e28) bg_button_pane_cp15

0x0d2a,	// (0x00039861) cell_call6_btn_pane_g1

0x0d33,	// (0x0003986a) cell_call6_btn_pane_t1

0xa923,	// (0x0004345a) listscroll_wgtman_pane_ParamLimits

0xa923,	// (0x0004345a) listscroll_wgtman_pane

0xa942,	// (0x00043479) wgtman_btn_pane_ParamLimits

0xa942,	// (0x00043479) wgtman_btn_pane

0x567b,	// (0x0003e1b2) aid_scroll_copy1

0x0d8f,	// (0x000398c6) list_wgtman_pane

0xa982,	// (0x000434b9) wgtman_btn_pane_g1_ParamLimits

0xa982,	// (0x000434b9) wgtman_btn_pane_g1

0xa9ae,	// (0x000434e5) wgtman_btn_pane_t1_ParamLimits

0xa9ae,	// (0x000434e5) wgtman_btn_pane_t1

0x0df8,	// (0x0003992f) wgtman_btn_pane_t2_ParamLimits

0x0df8,	// (0x0003992f) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x00048a2c) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x00048a2c) wgtman_btn_pane_t

0xa9eb,	// (0x00043522) listrow_wgtman_pane_ParamLimits

0xa9eb,	// (0x00043522) listrow_wgtman_pane

0xa9fc,	// (0x00043533) listrow_wgtman_pane_g1

0xaa05,	// (0x0004353c) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x00048a31) listrow_wgtman_pane_g

0x344d,	// (0x0003bf84) listrow_wgtman_pane_t1

0x345b,	// (0x0003bf92) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x00048a36) listrow_wgtman_pane_t

0x3469,	// (0x0003bfa0) wait_bar_pane_cp09

0x0e31,	// (0x00039968) main_calllock_btn_pane

0x0e39,	// (0x00039970) main_calllock_pane_g1

0x12f1,	// (0x00039e28) bg_button_pane_cp17

0x0e42,	// (0x00039979) main_calllock_btn_pane_g1

0x0e4b,	// (0x00039982) main_calllock_btn_pane_t1

0x12f1,	// (0x00039e28) main_dialer3_pane

0x12f1,	// (0x00039e28) main_fmrd2_pane

0xcb3f,	// (0x00045676) main_fs_bigclock_unlock_btn_pane_g1

0x0e62,	// (0x00039999) main_fs_bigclock_unlock_btn_pane_t1

0xaa0d,	// (0x00043544) area_fmrd2_info_pane_ParamLimits

0xaa0d,	// (0x00043544) area_fmrd2_info_pane

0xaa1c,	// (0x00043553) area_fmrd2_visual_pane_ParamLimits

0xaa1c,	// (0x00043553) area_fmrd2_visual_pane

0xaa2a,	// (0x00043561) fmrd2_indi_pane_ParamLimits

0xaa2a,	// (0x00043561) fmrd2_indi_pane

0xaa37,	// (0x0004356e) area_fmrd2_visual_pane_g1

0xaa3f,	// (0x00043576) area_fmrd2_visual_pane_t1

0xaa4d,	// (0x00043584) area_fmrd2_visual_pane_t2

0xaa5b,	// (0x00043592) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x00048a40) area_fmrd2_visual_pane_t

0xaa69,	// (0x000435a0) area_fmrd2_info_pane_g1

0xaa71,	// (0x000435a8) area_fmrd2_info_pane_t1

0xaa7f,	// (0x000435b6) area_fmrd2_info_pane_t2

0xaa8d,	// (0x000435c4) area_fmrd2_info_pane_t3

0xaa9b,	// (0x000435d2) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x00048a47) area_fmrd2_info_pane_t

0xaaa9,	// (0x000435e0) fmrd2_indi_pane_t1

0xaab7,	// (0x000435ee) fmrd2_indi_pane_t2

0xaac5,	// (0x000435fc) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x00048a50) fmrd2_indi_pane_t

0xe48f,	// (0x00046fc6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe48f,	// (0x00046fc6) list_single_fs_bigclock_indicator_pane_g5

0xe531,	// (0x00047068) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe531,	// (0x00047068) list_single_fs_bigclock_indicator_pane_t5

0xa3f9,	// (0x00042f30) aid_cell_bcale_month_pane_ParamLimits

0xa3f9,	// (0x00042f30) aid_cell_bcale_month_pane

0xa40b,	// (0x00042f42) bcale_month_pane_ParamLimits

0xa40b,	// (0x00042f42) bcale_month_pane

0xa41d,	// (0x00042f54) bcale_preview_pane_ParamLimits

0xa41d,	// (0x00042f54) bcale_preview_pane

0x0964,	// (0x0003949b) list_single_fs_bigclock_pane_t1_ParamLimits

0x097e,	// (0x000394b5) list_single_fs_bigclock_pane_t2_ParamLimits

0x097e,	// (0x000394b5) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x000489d7) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x000489d7) list_single_fs_bigclock_pane_t

0x0e5a,	// (0x00039991) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x00048a3b) main_fs_bigclock_unlock_btn_pane_g

0xaad3,	// (0x0004360a) aid_dia3_key_size_ParamLimits

0xaad3,	// (0x0004360a) aid_dia3_key_size

0xaae2,	// (0x00043619) aid_dia3_listrow_size_ParamLimits

0xaae2,	// (0x00043619) aid_dia3_listrow_size

0xaaf5,	// (0x0004362c) dia3_keypad_fun_pane_ParamLimits

0xaaf5,	// (0x0004362c) dia3_keypad_fun_pane

0xab09,	// (0x00043640) dia3_keypad_num_pane_ParamLimits

0xab09,	// (0x00043640) dia3_keypad_num_pane

0xab1a,	// (0x00043651) dia3_listscroll_pane_ParamLimits

0xab1a,	// (0x00043651) dia3_listscroll_pane

0xab2b,	// (0x00043662) dia3_numentry_pane_ParamLimits

0xab2b,	// (0x00043662) dia3_numentry_pane

0x0f7d,	// (0x00039ab4) dia3_list_pane

0x0f86,	// (0x00039abd) scroll_pane_cp12

0x12f1,	// (0x00039e28) bg_dia3_numentry_pane

0xab3d,	// (0x00043674) dia3_numentry_pane_t1

0xab4c,	// (0x00043683) cell_dia3_key_num_pane

0xab54,	// (0x0004368b) cell_dia3_key0_fun_pane_ParamLimits

0xab54,	// (0x0004368b) cell_dia3_key0_fun_pane

0xab68,	// (0x0004369f) cell_dia3_key1_fun_pane_ParamLimits

0xab68,	// (0x0004369f) cell_dia3_key1_fun_pane

0xab7f,	// (0x000436b6) dia3_listrow_pane

0xe1b3,	// (0x00046cea) bg_dia3_numentry_pane_g1

0x12f1,	// (0x00039e28) bg_button_pane_cp21

0x0fcd,	// (0x00039b04) cell_dia3_key_num_pane_t1

0x0fdb,	// (0x00039b12) cell_dia3_key_num_pane_t2

0x0fea,	// (0x00039b21) cell_dia3_key_num_pane_t3

0x0ff9,	// (0x00039b30) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x00048a57) cell_dia3_key_num_pane_t

0x12f1,	// (0x00039e28) bg_button_pane_cp19

0x1008,	// (0x00039b3f) cell_dia3_key0_fun_pane_g1

0x12f1,	// (0x00039e28) bg_button_pane_cp20

0xab91,	// (0x000436c8) cell_dia3_key1_fun_pane_g1

0xab99,	// (0x000436d0) area_left_week_number_pane

0xaba2,	// (0x000436d9) area_top_day_name_pane

0xabab,	// (0x000436e2) frame_month_view_pane

0xabb3,	// (0x000436ea) grid_month_view_pane

0xabbd,	// (0x000436f4) cell_top_day_name_pane_ParamLimits

0xabbd,	// (0x000436f4) cell_top_day_name_pane

0xabd3,	// (0x0004370a) cell_area_left_week_number_pane_ParamLimits

0xabd3,	// (0x0004370a) cell_area_left_week_number_pane

0xabe7,	// (0x0004371e) cell_month_view_pane_ParamLimits

0xabe7,	// (0x0004371e) cell_month_view_pane

0x1081,	// (0x00039bb8) frm_month_g1

0xac02,	// (0x00043739) frm_month_g2

0xac0a,	// (0x00043741) frm_month_g3

0xac12,	// (0x00043749) frm_month_g4

0xac1a,	// (0x00043751) frm_month_g5

0xac22,	// (0x00043759) frm_month_g6

0xac2a,	// (0x00043761) frm_month_g7

0x10ba,	// (0x00039bf1) frm_month_g8

0xac32,	// (0x00043769) frm_month_g9

0xac3b,	// (0x00043772) frm_month_g10

0xac44,	// (0x0004377b) frm_month_g11

0xac4d,	// (0x00043784) frm_month_g12

0xac56,	// (0x0004378d) frm_month_g13

0xac5f,	// (0x00043796) frm_month_g14

0xac68,	// (0x0004379f) frm_month_g15

0xac71,	// (0x000437a8) frm_month_g16

0x000f,

0xff29,	// (0x00048a60) frm_month_g

0xac7a,	// (0x000437b1) cell_top_day_name_pane_t1

0xac89,	// (0x000437c0) cell_area_left_week_number_pane_g1

0xac7a,	// (0x000437b1) cell_area_left_week_number_pane_t1

0xcb3f,	// (0x00045676) cell_month_view_pane_g1

0xac91,	// (0x000437c8) cell_month_view_pane_t1

0x12f1,	// (0x00039e28) main_fps_pane

0xe7a5,	// (0x000472dc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a5,	// (0x000472dc) cmail_ddmenu_btn02_pane_cp1

0xe7c1,	// (0x000472f8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c1,	// (0x000472f8) cmail_ddmenu_btn02_pane_cp2

0xa5bb,	// (0x000430f2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa5bb,	// (0x000430f2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x00048988) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x00048988) cmail_ddmenu_btn02_pane_g

0xa5dc,	// (0x00043113) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa5dc,	// (0x00043113) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x0004898d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x0004898d) cmail_ddmenu_btn02_pane_t

0xaca0,	// (0x000437d7) fps_text_pane_ParamLimits

0xaca0,	// (0x000437d7) fps_text_pane

0xacb6,	// (0x000437ed) main_fps_pane_g1_ParamLimits

0xacb6,	// (0x000437ed) main_fps_pane_g1

0xaccc,	// (0x00043803) wait_bar_pane_cp010_ParamLimits

0xaccc,	// (0x00043803) wait_bar_pane_cp010

0xacdd,	// (0x00043814) fps_text_pane_t1_ParamLimits

0xacdd,	// (0x00043814) fps_text_pane_t1

0x861c,	// (0x00041153) cam4_image_uncrop_pane_g1

0x8625,	// (0x0004115c) cam4_image_uncrop_pane_g2

0x862e,	// (0x00041165) cam4_image_uncrop_pane_g3

0x8637,	// (0x0004116e) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x00048466) cam4_image_uncrop_pane_g

0xab7f,	// (0x000436b6) dia3_listrow_pane_ParamLimits

0x12f1,	// (0x00039e28) main_phob2_pane

0xa29e,	// (0x00042dd5) cell_tport_appsw_pane_cp02_ParamLimits

0xa29e,	// (0x00042dd5) cell_tport_appsw_pane_cp02

0xa2ae,	// (0x00042de5) cell_tport_appsw_pane_cp03_ParamLimits

0xa2ae,	// (0x00042de5) cell_tport_appsw_pane_cp03

0x12f1,	// (0x00039e28) phob2_contact_card_pane

0x12f1,	// (0x00039e28) phob2_listscroll_pane

0x1166,	// (0x00039c9d) phob2_list_pane

0x116e,	// (0x00039ca5) scroll_pane_cp034

0xacf5,	// (0x0004382c) phob2_cc_data_pane_ParamLimits

0xacf5,	// (0x0004382c) phob2_cc_data_pane

0xad12,	// (0x00043849) phob2_cc_listscroll_pane_ParamLimits

0xad12,	// (0x00043849) phob2_cc_listscroll_pane

0xad2e,	// (0x00043865) list_double_large_graphic_phob2_pane_ParamLimits

0xad2e,	// (0x00043865) list_double_large_graphic_phob2_pane

0xad40,	// (0x00043877) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xad40,	// (0x00043877) list_double_large_graphic_phob2_pane_g1

0x3471,	// (0x0003bfa8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3471,	// (0x0003bfa8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x00048a81) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x00048a81) list_double_large_graphic_phob2_pane_g

0x347d,	// (0x0003bfb4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x347d,	// (0x0003bfb4) list_double_large_graphic_phob2_pane_t1

0x3492,	// (0x0003bfc9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3492,	// (0x0003bfc9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x00048a86) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x00048a86) list_double_large_graphic_phob2_pane_t

0x12f1,	// (0x00039e28) list_highlight_pane_cp024

0x11c6,	// (0x00039cfd) phob2_cc_button_pane

0xad4d,	// (0x00043884) phob2_cc_data_pane_g1_ParamLimits

0xad4d,	// (0x00043884) phob2_cc_data_pane_g1

0xad62,	// (0x00043899) phob2_cc_data_pane_g2_ParamLimits

0xad62,	// (0x00043899) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x00048a8b) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x00048a8b) phob2_cc_data_pane_g

0xad74,	// (0x000438ab) phob2_cc_data_pane_t1_ParamLimits

0xad74,	// (0x000438ab) phob2_cc_data_pane_t1

0xad8c,	// (0x000438c3) phob2_cc_data_pane_t2_ParamLimits

0xad8c,	// (0x000438c3) phob2_cc_data_pane_t2

0xada4,	// (0x000438db) phob2_cc_data_pane_t3_ParamLimits

0xada4,	// (0x000438db) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x00048a90) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x00048a90) phob2_cc_data_pane_t

0x121c,	// (0x00039d53) phob2_cc_list_pane_ParamLimits

0x121c,	// (0x00039d53) phob2_cc_list_pane

0x1228,	// (0x00039d5f) scroll_pane_cp035_ParamLimits

0x1228,	// (0x00039d5f) scroll_pane_cp035

0x1da6,	// (0x0003a8dd) bg_button_pane_cp033

0x1234,	// (0x00039d6b) phob2_cc_button_pane_g1

0x1240,	// (0x00039d77) phob2_cc_button_pane_t1

0x1255,	// (0x00039d8c) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x00048a97) phob2_cc_button_pane_t

0xadbc,	// (0x000438f3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xadbc,	// (0x000438f3) list_double_large_graphic_phob2_cc_pane

0xadce,	// (0x00043905) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xadce,	// (0x00043905) list_double_large_graphic_phob2_cc_pane_g1

0x34a4,	// (0x0003bfdb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x34a4,	// (0x0003bfdb) list_double_large_graphic_phob2_cc_pane_g2

0x34b0,	// (0x0003bfe7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x34b0,	// (0x0003bfe7) list_double_large_graphic_phob2_cc_pane_g3

0x34bc,	// (0x0003bff3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x34bc,	// (0x0003bff3) list_double_large_graphic_phob2_cc_pane_g4

0x34c8,	// (0x0003bfff) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x34c8,	// (0x0003bfff) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x00048a9c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x00048a9c) list_double_large_graphic_phob2_cc_pane_g

0x34d4,	// (0x0003c00b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x34d4,	// (0x0003c00b) list_double_large_graphic_phob2_cc_pane_t1

0x34fd,	// (0x0003c034) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x34fd,	// (0x0003c034) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x00048aa7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x00048aa7) list_double_large_graphic_phob2_cc_pane_t

0x1293,	// (0x00039dca) list_highlight_pane_cp025_ParamLimits

0x1293,	// (0x00039dca) list_highlight_pane_cp025

0x1da6,	// (0x0003a8dd) bg_button_pane_cp033_ParamLimits

0x1234,	// (0x00039d6b) phob2_cc_button_pane_g1_ParamLimits

0x1240,	// (0x00039d77) phob2_cc_button_pane_t1_ParamLimits

0x1255,	// (0x00039d8c) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x00048a97) phob2_cc_button_pane_t_ParamLimits

0x3711,	// (0x0003c248) popup_wgtman_window

0xe1d3,	// (0x00046d0a) scroll_pane_cp038

0xa964,	// (0x0004349b) wgtman_btn_pane_cp_01_ParamLimits

0xa964,	// (0x0004349b) wgtman_btn_pane_cp_01

0x12a1,	// (0x00039dd8) wgtman_content_pane

0x12aa,	// (0x00039de1) wgtman_heading_pane

0x12f1,	// (0x00039e28) bg_heading_pane_cp02

0x12b3,	// (0x00039dea) wgtman_heading_pane_g1

0x12bb,	// (0x00039df2) wgtman_heading_pane_t1

0x12c9,	// (0x00039e00) scroll_pane_cp036

0x12d1,	// (0x00039e08) wgtman_list_pane

0x12d9,	// (0x00039e10) wgtman_list_pane_t1_ParamLimits

0x12d9,	// (0x00039e10) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
